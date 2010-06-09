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
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pnp4_apps_nhd4_prt_tch + 0x000a891c };

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
0x0463,	// (0x000a8d7f) Screen

0x046f,	// (0x000a8d8b) application_window

0x04ab,	// (0x000a8dc7) area_bottom_pane_ParamLimits

0x04ab,	// (0x000a8dc7) area_bottom_pane

0x04e4,	// (0x000a8e00) area_top_pane_ParamLimits

0x04e4,	// (0x000a8e00) area_top_pane

0x9428,	// (0x000b1d44) call_video_uplink_pane_ParamLimits

0x9428,	// (0x000b1d44) call_video_uplink_pane

0x0572,	// (0x000a8e8e) main_pane_ParamLimits

0x0572,	// (0x000a8e8e) main_pane

0xc8fb,	// (0x000b5217) context_pane

0x3845,	// (0x000ac161) navi_pane

0x3877,	// (0x000ac193) popup_cale_events_window_ParamLimits

0x3877,	// (0x000ac193) popup_cale_events_window

0xc90e,	// (0x000b522a) popup_mup_playback_window

0x388f,	// (0x000ac1ab) signal_pane

0xa84c,	// (0x000b3168) main_browser_pane

0xaa23,	// (0x000b333f) main_burst_pane

0x359b,	// (0x000abeb7) main_calc_pane

0xc8e1,	// (0x000b51fd) main_cale_day_pane

0x35af,	// (0x000abecb) main_cale_month_pane

0xc8e1,	// (0x000b51fd) main_cale_week_pane

0xaa23,	// (0x000b333f) main_call_pane

0xa520,	// (0x000b2e3c) main_call_poc_pane

0xaa23,	// (0x000b333f) main_camera_pane

0xaa23,	// (0x000b333f) main_chi_dic_pane

0xb224,	// (0x000b3b40) main_clock_pane

0xa520,	// (0x000b2e3c) main_fmradio_pane

0xaa23,	// (0x000b333f) main_graph_messa_pane

0xa520,	// (0x000b2e3c) main_help_pane

0xa84c,	// (0x000b3168) main_im_pane

0xa77b,	// (0x000b3097) main_image_pane_ParamLimits

0xa77b,	// (0x000b3097) main_image_pane

0xa520,	// (0x000b2e3c) main_location2_pane

0xaa23,	// (0x000b333f) main_location_pane

0xa77b,	// (0x000b3097) main_messa_pane

0xa520,	// (0x000b2e3c) main_mp2_pane

0xaa23,	// (0x000b333f) main_mp_pane

0xa520,	// (0x000b2e3c) main_msg_pane

0xa520,	// (0x000b2e3c) main_mup_eq_pane

0xa520,	// (0x000b2e3c) main_mup_pane

0xa84c,	// (0x000b3168) main_notes_pane

0xa520,	// (0x000b2e3c) main_pec_pane

0xa520,	// (0x000b2e3c) main_phob_pane

0xa520,	// (0x000b2e3c) main_pinb_pane

0xa520,	// (0x000b2e3c) main_postcard_pane

0xa520,	// (0x000b2e3c) main_qdial_pane

0xaa23,	// (0x000b333f) main_skin_pane

0xa520,	// (0x000b2e3c) main_smil2_pane

0xaa23,	// (0x000b333f) main_smil_pane

0xaa23,	// (0x000b333f) main_video_pane

0xaa23,	// (0x000b333f) main_video_tele_pane

0xa77b,	// (0x000b3097) main_viewer_pane_ParamLimits

0xa77b,	// (0x000b3097) main_viewer_pane

0xaa23,	// (0x000b333f) main_vorec_pane

0x3601,	// (0x000abf1d) popup_blid_sat_info_window_ParamLimits

0x3601,	// (0x000abf1d) popup_blid_sat_info_window

0x3659,	// (0x000abf75) popup_dyc_status_message_window_ParamLimits

0x3659,	// (0x000abf75) popup_dyc_status_message_window

0x3671,	// (0x000abf8d) popup_grid_large_graphic_window_ParamLimits

0x3671,	// (0x000abf8d) popup_grid_large_graphic_window

0x3721,	// (0x000ac03d) popup_loc_request_window_ParamLimits

0x3721,	// (0x000ac03d) popup_loc_request_window

0x381d,	// (0x000ac139) popup_wml_address_window_ParamLimits

0x381d,	// (0x000ac139) popup_wml_address_window

0x33d5,	// (0x000abcf1) call_muted_g1

0x3089,	// (0x000ab9a5) popup_call_audio_conf_window_ParamLimits

0x3089,	// (0x000ab9a5) popup_call_audio_conf_window

0x33e9,	// (0x000abd05) popup_call_audio_first_window_ParamLimits

0x33e9,	// (0x000abd05) popup_call_audio_first_window

0x345f,	// (0x000abd7b) popup_call_audio_in_window_ParamLimits

0x345f,	// (0x000abd7b) popup_call_audio_in_window

0x349b,	// (0x000abdb7) popup_call_audio_out_window_ParamLimits

0x349b,	// (0x000abdb7) popup_call_audio_out_window

0x34d5,	// (0x000abdf1) popup_call_audio_second_window_ParamLimits

0x34d5,	// (0x000abdf1) popup_call_audio_second_window

0x352b,	// (0x000abe47) popup_call_audio_wait_window_ParamLimits

0x352b,	// (0x000abe47) popup_call_audio_wait_window

0x3560,	// (0x000abe7c) popup_number_entry_window_ParamLimits

0x3560,	// (0x000abe7c) popup_number_entry_window

0x9bc2,	// (0x000b24de) bg_popup_call_pane_cp05_ParamLimits

0x9bc2,	// (0x000b24de) bg_popup_call_pane_cp05

0x9be2,	// (0x000b24fe) popup_number_entry_window_t1

0x9bf5,	// (0x000b2511) popup_number_entry_window_t2

0x9c07,	// (0x000b2523) popup_number_entry_window_t3

0x0003,

0xf0ca,	// (0x000b79e6) popup_number_entry_window_t

0x9c19,	// (0x000b2535) text_title_cp2

0x9c2c,	// (0x000b2548) bg_popup_call_pane_cp_ParamLimits

0x9c2c,	// (0x000b2548) bg_popup_call_pane_cp

0x9c3a,	// (0x000b2556) call_thumbnail_pane

0x9c42,	// (0x000b255e) popup_call_audio_in_window_g1_ParamLimits

0x9c42,	// (0x000b255e) popup_call_audio_in_window_g1

0x9c4e,	// (0x000b256a) popup_call_audio_in_window_g2_ParamLimits

0x9c4e,	// (0x000b256a) popup_call_audio_in_window_g2

0x9c5a,	// (0x000b2576) popup_call_audio_in_window_g3_ParamLimits

0x9c5a,	// (0x000b2576) popup_call_audio_in_window_g3

0x0002,

0xf0d3,	// (0x000b79ef) popup_call_audio_in_window_g_ParamLimits

0xf0d3,	// (0x000b79ef) popup_call_audio_in_window_g

0x9c66,	// (0x000b2582) popup_call_audio_in_window_t1_ParamLimits

0x9c66,	// (0x000b2582) popup_call_audio_in_window_t1

0x9c82,	// (0x000b259e) popup_call_audio_in_window_t2_ParamLimits

0x9c82,	// (0x000b259e) popup_call_audio_in_window_t2

0x9c9e,	// (0x000b25ba) popup_call_audio_in_window_t3_ParamLimits

0x9c9e,	// (0x000b25ba) popup_call_audio_in_window_t3

0x0002,

0xf0da,	// (0x000b79f6) popup_call_audio_in_window_t_ParamLimits

0xf0da,	// (0x000b79f6) popup_call_audio_in_window_t

0x9c2c,	// (0x000b2548) bg_popup_call_pane_cp01_ParamLimits

0x9c2c,	// (0x000b2548) bg_popup_call_pane_cp01

0x9c3a,	// (0x000b2556) call_thumbnail_pane_cp02

0x9cb1,	// (0x000b25cd) call_type_pane_cp022

0x9cb9,	// (0x000b25d5) popup_call_audio_out_window_g1_ParamLimits

0x9cb9,	// (0x000b25d5) popup_call_audio_out_window_g1

0x9ccb,	// (0x000b25e7) popup_call_audio_out_window_g2_ParamLimits

0x9ccb,	// (0x000b25e7) popup_call_audio_out_window_g2

0x9cd7,	// (0x000b25f3) popup_call_audio_out_window_g3_ParamLimits

0x9cd7,	// (0x000b25f3) popup_call_audio_out_window_g3

0x0002,

0xf0e1,	// (0x000b79fd) popup_call_audio_out_window_g_ParamLimits

0xf0e1,	// (0x000b79fd) popup_call_audio_out_window_g

0x9ce9,	// (0x000b2605) popup_call_audio_out_window_t1_ParamLimits

0x9ce9,	// (0x000b2605) popup_call_audio_out_window_t1

0x9d01,	// (0x000b261d) popup_call_audio_out_window_t2_ParamLimits

0x9d01,	// (0x000b261d) popup_call_audio_out_window_t2

0x0001,

0xf0e8,	// (0x000b7a04) popup_call_audio_out_window_t_ParamLimits

0xf0e8,	// (0x000b7a04) popup_call_audio_out_window_t

0x9d16,	// (0x000b2632) bg_popup_call_pane_ParamLimits

0x9d16,	// (0x000b2632) bg_popup_call_pane

0x072f,	// (0x000a904b) call_thumbnail_pane_cp_ParamLimits

0x072f,	// (0x000a904b) call_thumbnail_pane_cp

0x9d9a,	// (0x000b26b6) call_type_pane_cp01_ParamLimits

0x9d9a,	// (0x000b26b6) call_type_pane_cp01

0x9dde,	// (0x000b26fa) popup_call_audio_first_window_g1_ParamLimits

0x9dde,	// (0x000b26fa) popup_call_audio_first_window_g1

0xa375,	// (0x000b2c91) popup_call_audio_first_window_g2_ParamLimits

0xa375,	// (0x000b2c91) popup_call_audio_first_window_g2

0x0001,

0xf0ed,	// (0x000b7a09) popup_call_audio_first_window_g_ParamLimits

0xf0ed,	// (0x000b7a09) popup_call_audio_first_window_g

0xa3b9,	// (0x000b2cd5) popup_call_audio_first_window_t1_ParamLimits

0xa3b9,	// (0x000b2cd5) popup_call_audio_first_window_t1

0xa465,	// (0x000b2d81) popup_call_audio_first_window_t4_ParamLimits

0xa465,	// (0x000b2d81) popup_call_audio_first_window_t4

0xa4f1,	// (0x000b2e0d) popup_call_audio_first_window_t5_ParamLimits

0xa4f1,	// (0x000b2e0d) popup_call_audio_first_window_t5

0x0002,

0xf0f2,	// (0x000b7a0e) popup_call_audio_first_window_t_ParamLimits

0xf0f2,	// (0x000b7a0e) popup_call_audio_first_window_t

0xa520,	// (0x000b2e3c) bg_popup_call_pane_cp02

0xa52a,	// (0x000b2e46) call_type_pane_cp023

0xa532,	// (0x000b2e4e) popup_call_audio_wait_window_g1

0xa53a,	// (0x000b2e56) popup_call_audio_wait_window_g2

0x0001,

0xf0f9,	// (0x000b7a15) popup_call_audio_wait_window_g

0xa542,	// (0x000b2e5e) popup_call_audio_wait_window_t3

0xa550,	// (0x000b2e6c) bg_popup_call_pane_cp03_ParamLimits

0xa550,	// (0x000b2e6c) bg_popup_call_pane_cp03

0xa5b0,	// (0x000b2ecc) call_thumbnail_pane_cp011_ParamLimits

0xa5b0,	// (0x000b2ecc) call_thumbnail_pane_cp011

0xa5bc,	// (0x000b2ed8) call_type_pane_cp034_ParamLimits

0xa5bc,	// (0x000b2ed8) call_type_pane_cp034

0xa5f8,	// (0x000b2f14) popup_call_audio_second_window_g1_ParamLimits

0xa5f8,	// (0x000b2f14) popup_call_audio_second_window_g1

0xa634,	// (0x000b2f50) popup_call_audio_second_window_g2_ParamLimits

0xa634,	// (0x000b2f50) popup_call_audio_second_window_g2

0x0001,

0xf0fe,	// (0x000b7a1a) popup_call_audio_second_window_g_ParamLimits

0xf0fe,	// (0x000b7a1a) popup_call_audio_second_window_g

0xa670,	// (0x000b2f8c) popup_call_audio_second_window_t1_ParamLimits

0xa670,	// (0x000b2f8c) popup_call_audio_second_window_t1

0xa6f1,	// (0x000b300d) popup_call_audio_second_window_t2_ParamLimits

0xa6f1,	// (0x000b300d) popup_call_audio_second_window_t2

0xa727,	// (0x000b3043) popup_call_audio_second_window_t3_ParamLimits

0xa727,	// (0x000b3043) popup_call_audio_second_window_t3

0x0002,

0xf103,	// (0x000b7a1f) popup_call_audio_second_window_t_ParamLimits

0xf103,	// (0x000b7a1f) popup_call_audio_second_window_t

0xa520,	// (0x000b2e3c) bg_popup_call_pane_cp04

0xa75d,	// (0x000b3079) list_conf_pane

0xa765,	// (0x000b3081) popup_call_audio_conf_window_t1

0xa773,	// (0x000b308f) call_thumbnail_pane_g1

0xa77b,	// (0x000b3097) bg_pinb_pane_ParamLimits

0xa77b,	// (0x000b3097) bg_pinb_pane

0xa789,	// (0x000b30a5) find_pinb_pane

0xa792,	// (0x000b30ae) listscroll_pinb_pane_ParamLimits

0xa792,	// (0x000b30ae) listscroll_pinb_pane

0xa7a1,	// (0x000b30bd) pinb_bg_pane_g1

0x0753,	// (0x000a906f) pinb_bg_pane_g2

0x075f,	// (0x000a907b) pinb_bg_pane_g3

0x076b,	// (0x000a9087) pinb_bg_pane_g4

0x0777,	// (0x000a9093) pinb_bg_pane_g5

0x0783,	// (0x000a909f) pinb_bg_pane_g6

0x078e,	// (0x000a90aa) pinb_bg_pane_g7

0x0799,	// (0x000a90b5) pinb_bg_pane_g8

0x07a4,	// (0x000a90c0) pinb_bg_pane_g9

0x07ae,	// (0x000a90ca) pinb_bg_pane_g10

0x0009,

0xf10a,	// (0x000b7a26) pinb_bg_pane_g

0x07cb,	// (0x000a90e7) grid_pinb_pane

0x07d4,	// (0x000a90f0) list_pinb_pane

0x07dd,	// (0x000a90f9) scroll_pane_cp01_ParamLimits

0x07dd,	// (0x000a90f9) scroll_pane_cp01

0xa7ab,	// (0x000b30c7) find_pinb_pane_g1_ParamLimits

0xa7ab,	// (0x000b30c7) find_pinb_pane_g1

0xa7c3,	// (0x000b30df) find_pinb_pane_t1

0xa7d5,	// (0x000b30f1) find_pinb_pane_t2

0x0001,

0xf124,	// (0x000b7a40) find_pinb_pane_t

0xa7ea,	// (0x000b3106) input_focus_pane_cp01_ParamLimits

0xa7ea,	// (0x000b3106) input_focus_pane_cp01

0x07ef,	// (0x000a910b) cell_pinb_pane_ParamLimits

0x07ef,	// (0x000a910b) cell_pinb_pane

0x081a,	// (0x000a9136) cell_pinb_pane_g1_ParamLimits

0x081a,	// (0x000a9136) cell_pinb_pane_g1

0xa7f6,	// (0x000b3112) cell_pinb_pane_g2_ParamLimits

0xa7f6,	// (0x000b3112) cell_pinb_pane_g2

0xa802,	// (0x000b311e) cell_pinb_pane_g3_ParamLimits

0xa802,	// (0x000b311e) cell_pinb_pane_g3

0x0002,

0xf129,	// (0x000b7a45) cell_pinb_pane_g_ParamLimits

0xf129,	// (0x000b7a45) cell_pinb_pane_g

0xa520,	// (0x000b2e3c) grid_highlight_pane_cp01

0x082d,	// (0x000a9149) list_pinb_item_pane_ParamLimits

0x082d,	// (0x000a9149) list_pinb_item_pane

0xa520,	// (0x000b2e3c) list_highlight_pane_cp02

0x0840,	// (0x000a915c) list_pinb_item_pane_g1_ParamLimits

0x0840,	// (0x000a915c) list_pinb_item_pane_g1

0x084d,	// (0x000a9169) list_pinb_item_pane_g2_ParamLimits

0x084d,	// (0x000a9169) list_pinb_item_pane_g2

0x0859,	// (0x000a9175) list_pinb_item_pane_g3_ParamLimits

0x0859,	// (0x000a9175) list_pinb_item_pane_g3

0x086a,	// (0x000a9186) list_pinb_item_pane_g4_ParamLimits

0x086a,	// (0x000a9186) list_pinb_item_pane_g4

0x0003,

0xf130,	// (0x000b7a4c) list_pinb_item_pane_g_ParamLimits

0xf130,	// (0x000b7a4c) list_pinb_item_pane_g

0x0876,	// (0x000a9192) list_pinb_item_pane_t1_ParamLimits

0x0876,	// (0x000a9192) list_pinb_item_pane_t1

0x08ab,	// (0x000a91c7) calc_display_pane

0x08d3,	// (0x000a91ef) calc_paper_pane

0x08f6,	// (0x000a9212) grid_calc_pane

0xa520,	// (0x000b2e3c) bg_list_pane_cp01

0x0924,	// (0x000a9240) clock_g1

0x092c,	// (0x000a9248) clock_g2

0x0001,

0xf139,	// (0x000b7a55) clock_g

0x0934,	// (0x000a9250) clock_t1_ParamLimits

0x0934,	// (0x000a9250) clock_t1

0x0949,	// (0x000a9265) clock_t2_ParamLimits

0x0949,	// (0x000a9265) clock_t2

0x095b,	// (0x000a9277) clock_t3_ParamLimits

0x095b,	// (0x000a9277) clock_t3

0x096d,	// (0x000a9289) clock_t4_ParamLimits

0x096d,	// (0x000a9289) clock_t4

0x097f,	// (0x000a929b) clock_t5_ParamLimits

0x097f,	// (0x000a929b) clock_t5

0x0994,	// (0x000a92b0) clock_t6_ParamLimits

0x0994,	// (0x000a92b0) clock_t6

0x09a6,	// (0x000a92c2) clock_t7_ParamLimits

0x09a6,	// (0x000a92c2) clock_t7

0x09b8,	// (0x000a92d4) clock_t8_ParamLimits

0x09b8,	// (0x000a92d4) clock_t8

0x09cc,	// (0x000a92e8) clock_t9_ParamLimits

0x09cc,	// (0x000a92e8) clock_t9

0x0008,

0xf13e,	// (0x000b7a5a) clock_t_ParamLimits

0xf13e,	// (0x000b7a5a) clock_t

0xa80e,	// (0x000b312a) popup_clock_analogue_window_cp02

0xa80e,	// (0x000b312a) popup_clock_digital_window_cp01

0xa816,	// (0x000b3132) listscroll_help_pane

0xa520,	// (0x000b2e3c) phob_pre_status_pane

0xa820,	// (0x000b313c) grid_qdial_pane

0xa77b,	// (0x000b3097) listscroll_mce_pane

0xa77b,	// (0x000b3097) bg_notes_pane

0xa82a,	// (0x000b3146) list_notes_pane

0x09e0,	// (0x000a92fc) scroll_pane_cp06

0xa838,	// (0x000b3154) bg_calc_paper_pane

0x9466,	// (0x000b1d82) list_calc_pane

0xa84c,	// (0x000b3168) bg_calc_display_pane

0x09f4,	// (0x000a9310) calc_display_pane_t1

0x0a06,	// (0x000a9322) calc_display_pane_t2

0x9480,	// (0x000b1d9c) calc_display_pane_t3

0x0002,

0xf151,	// (0x000b7a6d) calc_display_pane_t

0x0a18,	// (0x000a9334) cell_calc_pane_ParamLimits

0x0a18,	// (0x000a9334) cell_calc_pane

0xa858,	// (0x000b3174) bg_calc_paper_pane_g1

0xa864,	// (0x000b3180) bg_calc_paper_pane_g2

0xa870,	// (0x000b318c) bg_calc_paper_pane_g3

0xa87c,	// (0x000b3198) bg_calc_paper_pane_g4

0xa888,	// (0x000b31a4) bg_calc_paper_pane_g5

0x0a4f,	// (0x000a936b) bg_calc_paper_pane_g6

0x0a5e,	// (0x000a937a) bg_calc_paper_pane_g7

0x0a6d,	// (0x000a9389) bg_calc_paper_pane_g8

0x0007,

0xf158,	// (0x000b7a74) bg_calc_paper_pane_g

0x0a80,	// (0x000a939c) calc_bg_paper_pane_g9

0x0a93,	// (0x000a93af) list_calc_item_pane_ParamLimits

0x0a93,	// (0x000a93af) list_calc_item_pane

0xa894,	// (0x000b31b0) list_calc_item_pane_g1

0x9492,	// (0x000b1dae) list_calc_item_pane_t1_ParamLimits

0x9492,	// (0x000b1dae) list_calc_item_pane_t1

0x0aac,	// (0x000a93c8) list_calc_item_pane_t2_ParamLimits

0x0aac,	// (0x000a93c8) list_calc_item_pane_t2

0x0001,

0xf169,	// (0x000b7a85) list_calc_item_pane_t_ParamLimits

0xf169,	// (0x000b7a85) list_calc_item_pane_t

0xa8a1,	// (0x000b31bd) cell_calc_pane_g1

0xa8ab,	// (0x000b31c7) grid_highlight_pane_cp02

0xa8cd,	// (0x000b31e9) bg_calc_display_pane_g1

0x94a4,	// (0x000b1dc0) bg_calc_display_pane_g2

0xa8d6,	// (0x000b31f2) bg_calc_display_pane_g3

0x0002,

0xf173,	// (0x000b7a8f) bg_calc_display_pane_g

0x0ade,	// (0x000a93fa) cell_qdial_pane_ParamLimits

0x0ade,	// (0x000a93fa) cell_qdial_pane

0x0af2,	// (0x000a940e) cell_qdial_pane_g1_ParamLimits

0x0af2,	// (0x000a940e) cell_qdial_pane_g1

0x0b08,	// (0x000a9424) cell_qdial_pane_g2_ParamLimits

0x0b08,	// (0x000a9424) cell_qdial_pane_g2

0xa8df,	// (0x000b31fb) cell_qdial_pane_g3_ParamLimits

0xa8df,	// (0x000b31fb) cell_qdial_pane_g3

0x0003,

0xf17a,	// (0x000b7a96) cell_qdial_pane_g_ParamLimits

0xf17a,	// (0x000b7a96) cell_qdial_pane_g

0x0b2e,	// (0x000a944a) cell_qdial_pane_t1_ParamLimits

0x0b2e,	// (0x000a944a) cell_qdial_pane_t1

0x0b46,	// (0x000a9462) cell_qdial_pane_t2_ParamLimits

0x0b46,	// (0x000a9462) cell_qdial_pane_t2

0x0b59,	// (0x000a9475) cell_qdial_pane_t3_ParamLimits

0x0b59,	// (0x000a9475) cell_qdial_pane_t3

0x0002,

0xf183,	// (0x000b7a9f) cell_qdial_pane_t_ParamLimits

0xf183,	// (0x000b7a9f) cell_qdial_pane_t

0xa520,	// (0x000b2e3c) grid_highlight_pane_cp04

0xa8eb,	// (0x000b3207) thumbnail_qdial_pane_ParamLimits

0xa8eb,	// (0x000b3207) thumbnail_qdial_pane

0xa947,	// (0x000b3263) list_help_pane

0xa950,	// (0x000b326c) scroll_pane_cp02

0xab24,	// (0x000b3440) help_list_pane_t1_ParamLimits

0xab24,	// (0x000b3440) help_list_pane_t1

0x94ae,	// (0x000b1dca) bg_notes_pane_g2

0x94b6,	// (0x000b1dd2) bg_notes_pane_g3

0x94be,	// (0x000b1dda) notes_bg_pane_g1

0x94c6,	// (0x000b1de2) notes_bg_pane_g4

0x94ce,	// (0x000b1dea) notes_bg_pane_g5

0x94d6,	// (0x000b1df2) notes_bg_pane_g6

0x94de,	// (0x000b1dfa) notes_bg_pane_g7

0x94e6,	// (0x000b1e02) notes_bg_pane_g8

0x94ee,	// (0x000b1e0a) notes_bg_pane_g9

0x0006,

0xf1a1,	// (0x000b7abd) notes_bg_pane_g

0x0b6c,	// (0x000a9488) list_notes_text_pane_ParamLimits

0x0b6c,	// (0x000a9488) list_notes_text_pane

0xa959,	// (0x000b3275) list_notes_text_pane_g1

0x9e2a,	// (0x000b2746) list_notes_text_pane_t1

0x0b82,	// (0x000a949e) listscroll_cale_week_pane

0x0bae,	// (0x000a94ca) bg_cale_heading_pane

0xa97c,	// (0x000b3298) bg_cale_pane_cp01

0x0bc6,	// (0x000a94e2) cale_week_corner_pane

0x0be5,	// (0x000a9501) cale_week_day_heading_pane

0x0c02,	// (0x000a951e) cale_week_scroll_pane_g1

0x0c15,	// (0x000a9531) cale_week_scroll_pane_g2

0x0c2d,	// (0x000a9549) cale_week_scroll_pane_g3

0x0c45,	// (0x000a9561) cale_week_scroll_pane_g4

0x0c5d,	// (0x000a9579) cale_week_scroll_pane_g5

0x0c7d,	// (0x000a9599) cale_week_scroll_pane_g6

0x0c9d,	// (0x000a95b9) cale_week_scroll_pane_g7

0x0cbd,	// (0x000a95d9) cale_week_scroll_pane_g8

0x0ce1,	// (0x000a95fd) cale_week_scroll_pane_g9

0x0cf9,	// (0x000a9615) cale_week_scroll_pane_g10

0x0d11,	// (0x000a962d) cale_week_scroll_pane_g11

0x0d29,	// (0x000a9645) cale_week_scroll_pane_g12

0x0d41,	// (0x000a965d) cale_week_scroll_pane_g13

0x0d41,	// (0x000a965d) cale_week_scroll_pane_g14

0x0d41,	// (0x000a965d) cale_week_scroll_pane_g15

0x000f,

0xf1b0,	// (0x000b7acc) cale_week_scroll_pane_g

0x0d7d,	// (0x000a9699) cale_week_time_pane

0x0da1,	// (0x000a96bd) grid_cale_week_pane

0xa9ab,	// (0x000b32c7) scroll_pane_cp08

0x0dc7,	// (0x000a96e3) cell_cale_week_pane_ParamLimits

0x0dc7,	// (0x000a96e3) cell_cale_week_pane

0x0e55,	// (0x000a9771) cale_week_day_heading_pane_t1

0x0e7f,	// (0x000a979b) cale_week_day_heading_pane_t2

0x0eae,	// (0x000a97ca) cale_week_day_heading_pane_t3

0x0edd,	// (0x000a97f9) cale_week_day_heading_pane_t4

0x0f0c,	// (0x000a9828) cale_week_day_heading_pane_t5

0x0f43,	// (0x000a985f) cale_week_day_heading_pane_t6

0x0f7a,	// (0x000a9896) cale_week_day_heading_pane_t7

0x0006,

0xf1d1,	// (0x000b7aed) cale_week_day_heading_pane_t

0xa9c8,	// (0x000b32e4) bg_cale_side_pane

0x0fa4,	// (0x000a98c0) cale_week_time_pane_t1

0x0fbe,	// (0x000a98da) cale_week_time_pane_t2

0x0fd8,	// (0x000a98f4) cale_week_time_pane_t3

0x0ff2,	// (0x000a990e) cale_week_time_pane_t4

0x100c,	// (0x000a9928) cale_week_time_pane_t5

0x1026,	// (0x000a9942) cale_week_time_pane_t6

0x1040,	// (0x000a995c) cale_week_time_pane_t7

0x105a,	// (0x000a9976) cale_week_time_pane_t8

0x0007,

0xf1e0,	// (0x000b7afc) cale_week_time_pane_t

0x107a,	// (0x000a9996) cell_cale_week_pane_g2

0x109e,	// (0x000a99ba) cell_cale_week_pane_g3_ParamLimits

0x109e,	// (0x000a99ba) cell_cale_week_pane_g3

0xa9d6,	// (0x000b32f2) grid_highlight_pane_cp07

0xa9de,	// (0x000b32fa) listscroll_gms_pane

0xa9e8,	// (0x000b3304) grid_gms_pane

0xa9f1,	// (0x000b330d) listscroll_gms_pane_g1

0xa9f9,	// (0x000b3315) listscroll_gms_pane_g2

0x0001,

0xf1f1,	// (0x000b7b0d) listscroll_gms_pane_g

0x10b6,	// (0x000a99d2) scroll_pane_cp010

0x10c1,	// (0x000a99dd) cell_gms_pane_ParamLimits

0x10c1,	// (0x000a99dd) cell_gms_pane

0x10d3,	// (0x000a99ef) cell_gms_pane_g1

0xaa01,	// (0x000b331d) cell_gms_pane_g2

0xaa09,	// (0x000b3325) cell_gms_pane_g3

0xaa12,	// (0x000b332e) cell_gms_pane_g4

0x0003,

0xf1f6,	// (0x000b7b12) cell_gms_pane_g

0xaa1b,	// (0x000b3337) grid_highlight_pane_cp09

0x337f,	// (0x000abc9b) phob_pre_status_pane_g1

0x3387,	// (0x000abca3) phob_pre_status_pane_g2

0x338f,	// (0x000abcab) phob_pre_status_pane_g3

0x3397,	// (0x000abcb3) phob_pre_status_pane_g4

0x0004,

0xf5f4,	// (0x000b7f10) phob_pre_status_pane_g

0x33a7,	// (0x000abcc3) phob_pre_status_pane_t1

0x33b5,	// (0x000abcd1) phob_pre_status_pane_t2

0x33c5,	// (0x000abce1) phob_pre_status_pane_t3

0x0002,

0xf5ff,	// (0x000b7f1b) phob_pre_status_pane_t

0xaa23,	// (0x000b333f) bg_list_pane_cp05

0x10e3,	// (0x000a99ff) grid_vorec_pane

0x10eb,	// (0x000a9a07) vorec_t1

0x10f9,	// (0x000a9a15) vorec_t2

0x1107,	// (0x000a9a23) vorec_t3

0x1115,	// (0x000a9a31) vorec_t4

0x9396,	// (0x000b1cb2) vorec_t5

0x93a4,	// (0x000b1cc0) vorec_t6

0x0004,

0xf1ff,	// (0x000b7b1b) vorec_t

0x93b2,	// (0x000b1cce) wait_bar_pane_cp01

0x1131,	// (0x000a9a4d) cell_vorec_pane_ParamLimits

0x1131,	// (0x000a9a4d) cell_vorec_pane

0x94f6,	// (0x000b1e12) cell_vorec_pane_g1

0xa520,	// (0x000b2e3c) grid_highlight_pane_cp05

0x115c,	// (0x000a9a78) cams_zoom_pane

0x116b,	// (0x000a9a87) image_vga_pane

0x1185,	// (0x000a9aa1) main_camera_pane_g1

0x1197,	// (0x000a9ab3) main_camera_pane_g2

0x11a7,	// (0x000a9ac3) main_camera_pane_g3

0x11b7,	// (0x000a9ad3) main_camera_pane_g4

0x11c7,	// (0x000a9ae3) main_camera_pane_g5

0x11d7,	// (0x000a9af3) main_camera_pane_g6

0x11e7,	// (0x000a9b03) main_camera_pane_g7

0x0007,

0xf20a,	// (0x000b7b26) main_camera_pane_g

0x11f7,	// (0x000a9b13) main_camera_pane_t1

0x120d,	// (0x000a9b29) main_camera_pane_t2

0x0001,

0xf21b,	// (0x000b7b37) main_camera_pane_t

0x1247,	// (0x000a9b63) cams_zoom_pane_cp_ParamLimits

0x1247,	// (0x000a9b63) cams_zoom_pane_cp

0x126f,	// (0x000a9b8b) image_cif_pane_ParamLimits

0x126f,	// (0x000a9b8b) image_cif_pane

0x12aa,	// (0x000a9bc6) image_subqcif_pane

0x12b2,	// (0x000a9bce) main_video_pane_g1_ParamLimits

0x12b2,	// (0x000a9bce) main_video_pane_g1

0x12d6,	// (0x000a9bf2) main_video_pane_g2_ParamLimits

0x12d6,	// (0x000a9bf2) main_video_pane_g2

0x130a,	// (0x000a9c26) main_video_pane_g3_ParamLimits

0x130a,	// (0x000a9c26) main_video_pane_g3

0x1338,	// (0x000a9c54) main_video_pane_g4_ParamLimits

0x1338,	// (0x000a9c54) main_video_pane_g4

0x1366,	// (0x000a9c82) main_video_pane_g5_ParamLimits

0x1366,	// (0x000a9c82) main_video_pane_g5

0xaa37,	// (0x000b3353) main_video_pane_g6_ParamLimits

0xaa37,	// (0x000b3353) main_video_pane_g6

0x0006,

0xf220,	// (0x000b7b3c) main_video_pane_g_ParamLimits

0xf220,	// (0x000b7b3c) main_video_pane_g

0x138f,	// (0x000a9cab) main_video_pane_t1_ParamLimits

0x138f,	// (0x000a9cab) main_video_pane_t1

0xaa51,	// (0x000b336d) cams_zoom_pane_g1

0xaa5a,	// (0x000b3376) cams_zoom_pane_g2

0xaa63,	// (0x000b337f) cams_zoom_pane_g3

0xaa6c,	// (0x000b3388) cams_zoom_pane_g4

0x0003,

0xf22f,	// (0x000b7b4b) cams_zoom_pane_g

0x13ec,	// (0x000a9d08) grid_cams_pane

0x1406,	// (0x000a9d22) linegrid_cams_pane

0x1419,	// (0x000a9d35) cell_cams_pane_ParamLimits

0x1419,	// (0x000a9d35) cell_cams_pane

0xaa75,	// (0x000b3391) cams_burst_image_pane

0xaa7d,	// (0x000b3399) cell_cams_pane_g1

0xa520,	// (0x000b2e3c) grid_highlight_pane_cp03

0xa8a1,	// (0x000b31bd) mp_bg_pane_g1

0xa520,	// (0x000b2e3c) bg_list_pane_cp03

0xc806,	// (0x000b5122) bg_mp_pane

0xc80e,	// (0x000b512a) grid_mp_pane

0xc816,	// (0x000b5132) media_player_g1

0xc81e,	// (0x000b513a) media_player_t1

0xc82c,	// (0x000b5148) media_player_t2

0xc83a,	// (0x000b5156) media_player_t3

0xc848,	// (0x000b5164) media_player_t4

0xc856,	// (0x000b5172) media_player_t5

0xc864,	// (0x000b5180) media_player_t6

0xc872,	// (0x000b518e) media_player_t7

0x0006,

0xf5de,	// (0x000b7efa) media_player_t

0xc880,	// (0x000b519c) wait_bar_pane_cp02

0xf5c3,	// (0x000b7edf) main_usb_pane_t

0x3376,	// (0x000abc92) cell_mp_pane

0xa8a1,	// (0x000b31bd) cell_mp_pane_g1

0xa520,	// (0x000b2e3c) grid_highlight_pane_cp06

0xaa85,	// (0x000b33a1) grid_skin_colour_pane

0xaa8d,	// (0x000b33a9) list_highlight_pane_cp03

0x1532,	// (0x000a9e4e) skin_g1

0xaa95,	// (0x000b33b1) skin_t1

0xaaa4,	// (0x000b33c0) skin_t2

0x0001,

0xf264,	// (0x000b7b80) skin_t

0x153a,	// (0x000a9e56) cell_skin_colour_pane_ParamLimits

0x153a,	// (0x000a9e56) cell_skin_colour_pane

0xaab2,	// (0x000b33ce) cell_skin_colour_pane_g1

0x15b3,	// (0x000a9ecf) call_video_g1_ParamLimits

0x15b3,	// (0x000a9ecf) call_video_g1

0x15cf,	// (0x000a9eeb) call_video_g2_ParamLimits

0x15cf,	// (0x000a9eeb) call_video_g2

0x0001,

0xf269,	// (0x000b7b85) call_video_g_ParamLimits

0xf269,	// (0x000b7b85) call_video_g

0x1621,	// (0x000a9f3d) call_video_uplink_pane_cp1_ParamLimits

0x1621,	// (0x000a9f3d) call_video_uplink_pane_cp1

0xaac4,	// (0x000b33e0) call_video_uplink_pane_cp2

0x16c0,	// (0x000a9fdc) video_down_crop_pane_ParamLimits

0x16c0,	// (0x000a9fdc) video_down_crop_pane

0x17a9,	// (0x000aa0c5) video_down_pane_ParamLimits

0x17a9,	// (0x000aa0c5) video_down_pane

0xaacc,	// (0x000b33e8) video_down_subqcif_pane_ParamLimits

0xaacc,	// (0x000b33e8) video_down_subqcif_pane

0xaae4,	// (0x000b3400) video_down_subqcif_pane_cp_ParamLimits

0xaae4,	// (0x000b3400) video_down_subqcif_pane_cp

0xab0a,	// (0x000b3426) im_reading_pane_ParamLimits

0xab0a,	// (0x000b3426) im_reading_pane

0x18b9,	// (0x000aa1d5) im_writing_pane_ParamLimits

0x18b9,	// (0x000aa1d5) im_writing_pane

0x18cf,	// (0x000aa1eb) im_reading_pane_t1

0xab42,	// (0x000b345e) list_im_pane

0xab53,	// (0x000b346f) scroll_pane_cp07

0x1909,	// (0x000aa225) im_writing_pane_t1_ParamLimits

0x1909,	// (0x000aa225) im_writing_pane_t1

0xab6c,	// (0x000b3488) im_writing_pane_t2_ParamLimits

0xab6c,	// (0x000b3488) im_writing_pane_t2

0x0001,

0xf273,	// (0x000b7b8f) im_writing_pane_t_ParamLimits

0xf273,	// (0x000b7b8f) im_writing_pane_t

0xa520,	// (0x000b2e3c) input_focus_pane_cp04

0xa520,	// (0x000b2e3c) input_focus_pane_cp05

0x191e,	// (0x000aa23a) list_im_single_pane_ParamLimits

0x191e,	// (0x000aa23a) list_im_single_pane

0x1933,	// (0x000aa24f) list_single_im_pane_t1

0x3336,	// (0x000abc52) blid_accuracy_pane

0x333e,	// (0x000abc5a) blid_compass_pane

0x3348,	// (0x000abc64) main_location_t1

0x3358,	// (0x000abc74) main_location_t2

0x3368,	// (0x000abc84) main_location_t3

0x0002,

0xf5ed,	// (0x000b7f09) main_location_t

0xa520,	// (0x000b2e3c) aid_levels_location

0xa8a1,	// (0x000b31bd) blid_accuracy_pane_g1

0xa8a1,	// (0x000b31bd) blid_accuracy_pane_g2

0x0001,

0xf2d5,	// (0x000b7bf1) blid_accuracy_pane_g

0xabb4,	// (0x000b34d0) wml_content_pane

0xabf2,	// (0x000b350e) wml_button_pane_ParamLimits

0xabf2,	// (0x000b350e) wml_button_pane

0x1942,	// (0x000aa25e) wml_list_single_large_pane_ParamLimits

0x1942,	// (0x000aa25e) wml_list_single_large_pane

0x1957,	// (0x000aa273) wml_list_single_medium_pane_ParamLimits

0x1957,	// (0x000aa273) wml_list_single_medium_pane

0x196e,	// (0x000aa28a) wml_list_single_small_pane_ParamLimits

0x196e,	// (0x000aa28a) wml_list_single_small_pane

0xac06,	// (0x000b3522) wml_selection_box_pane_ParamLimits

0xac06,	// (0x000b3522) wml_selection_box_pane

0xac19,	// (0x000b3535) wml_list_single_pane_t1

0xac28,	// (0x000b3544) wml_list_single_medium_pane_t1

0xac37,	// (0x000b3553) wml_list_single_large_pane_t1

0xac46,	// (0x000b3562) input_focus_pane_cp02_ParamLimits

0xac46,	// (0x000b3562) input_focus_pane_cp02

0xac59,	// (0x000b3575) wml_selection_box_pane_g1

0xac62,	// (0x000b357e) wml_selection_box_pane_t1_ParamLimits

0xac62,	// (0x000b357e) wml_selection_box_pane_t1

0xa77b,	// (0x000b3097) bg_wml_button_pane_ParamLimits

0xa77b,	// (0x000b3097) bg_wml_button_pane

0xac7a,	// (0x000b3596) wml_button_pane_g1

0xac82,	// (0x000b359e) wml_button_pane_t1

0xac7a,	// (0x000b3596) wml_button_bg_pane_g1

0xac92,	// (0x000b35ae) wml_button_bg_pane_g2

0xac9a,	// (0x000b35b6) wml_button_bg_pane_g3

0xaca2,	// (0x000b35be) wml_button_bg_pane_g4

0xacaa,	// (0x000b35c6) wml_button_bg_pane_g5

0xacb2,	// (0x000b35ce) wml_button_bg_pane_g6

0xacba,	// (0x000b35d6) wml_button_bg_pane_g7

0xacc2,	// (0x000b35de) wml_button_bg_pane_g8

0xacca,	// (0x000b35e6) wml_button_bg_pane_g9

0x0008,

0xf278,	// (0x000b7b94) wml_button_bg_pane_g

0x1987,	// (0x000aa2a3) bg_list_pane_cp02

0xacd2,	// (0x000b35ee) mce_header_pane_ParamLimits

0xacd2,	// (0x000b35ee) mce_header_pane

0xace8,	// (0x000b3604) mce_icon_pane

0xace8,	// (0x000b3604) mce_image_pane

0xacf1,	// (0x000b360d) mce_text_pane_ParamLimits

0xacf1,	// (0x000b360d) mce_text_pane

0x198f,	// (0x000aa2ab) scroll_pane_cp03

0xabea,	// (0x000b3506) scroll_pane_cp04

0xad04,	// (0x000b3620) scroll_pane_cp05_ParamLimits

0xad04,	// (0x000b3620) scroll_pane_cp05

0x1999,	// (0x000aa2b5) mce_header_field_pane_ParamLimits

0x1999,	// (0x000aa2b5) mce_header_field_pane

0x19b0,	// (0x000aa2cc) mce_header_field_pane_2_ParamLimits

0x19b0,	// (0x000aa2cc) mce_header_field_pane_2

0x19c6,	// (0x000aa2e2) mce_header_field_pane_3

0x19ce,	// (0x000aa2ea) list_single_mce_message_pane_ParamLimits

0x19ce,	// (0x000aa2ea) list_single_mce_message_pane

0x19e4,	// (0x000aa300) list_single_mce_smart_pane_ParamLimits

0x19e4,	// (0x000aa300) list_single_mce_smart_pane

0xad10,	// (0x000b362c) input_focus_pane_cp03

0xad19,	// (0x000b3635) list_header_data_pane

0x1a05,	// (0x000aa321) mce_header_field_pane_t1

0x1a15,	// (0x000aa331) list_single_mce_header_pane_ParamLimits

0x1a15,	// (0x000aa331) list_single_mce_header_pane

0xad21,	// (0x000b363d) list_single_mce_header_pane_t1

0xad30,	// (0x000b364c) list_single_mce_message_pane_g1

0xad38,	// (0x000b3654) list_single_mce_message_pane_t1

0x1a4f,	// (0x000aa36b) bg_cale_heading_pane_cp01_ParamLimits

0x1a4f,	// (0x000aa36b) bg_cale_heading_pane_cp01

0xad46,	// (0x000b3662) bg_cale_pane_cp02_ParamLimits

0xad46,	// (0x000b3662) bg_cale_pane_cp02

0x1a89,	// (0x000aa3a5) cale_month_corner_pane

0x1aa8,	// (0x000aa3c4) cale_month_day_heading_pane_ParamLimits

0x1aa8,	// (0x000aa3c4) cale_month_day_heading_pane

0x1afa,	// (0x000aa416) cale_month_pane_g1_ParamLimits

0x1afa,	// (0x000aa416) cale_month_pane_g1

0x1b29,	// (0x000aa445) cale_month_pane_g2_ParamLimits

0x1b29,	// (0x000aa445) cale_month_pane_g2

0x1b59,	// (0x000aa475) cale_month_pane_g3_ParamLimits

0x1b59,	// (0x000aa475) cale_month_pane_g3

0x1b95,	// (0x000aa4b1) cale_month_pane_g4_ParamLimits

0x1b95,	// (0x000aa4b1) cale_month_pane_g4

0x1bd1,	// (0x000aa4ed) cale_month_pane_g5_ParamLimits

0x1bd1,	// (0x000aa4ed) cale_month_pane_g5

0x1c19,	// (0x000aa535) cale_month_pane_g6_ParamLimits

0x1c19,	// (0x000aa535) cale_month_pane_g6

0x1c65,	// (0x000aa581) cale_month_pane_g7_ParamLimits

0x1c65,	// (0x000aa581) cale_month_pane_g7

0x1cb5,	// (0x000aa5d1) cale_month_pane_g8_ParamLimits

0x1cb5,	// (0x000aa5d1) cale_month_pane_g8

0x1d09,	// (0x000aa625) cale_month_pane_g9_ParamLimits

0x1d09,	// (0x000aa625) cale_month_pane_g9

0x1d5b,	// (0x000aa677) cale_month_pane_g10_ParamLimits

0x1d5b,	// (0x000aa677) cale_month_pane_g10

0x1dad,	// (0x000aa6c9) cale_month_pane_g11_ParamLimits

0x1dad,	// (0x000aa6c9) cale_month_pane_g11

0x1dff,	// (0x000aa71b) cale_month_pane_g12_ParamLimits

0x1dff,	// (0x000aa71b) cale_month_pane_g12

0x1e51,	// (0x000aa76d) cale_month_pane_g13_ParamLimits

0x1e51,	// (0x000aa76d) cale_month_pane_g13

0x000c,

0xf28b,	// (0x000b7ba7) cale_month_pane_g_ParamLimits

0xf28b,	// (0x000b7ba7) cale_month_pane_g

0x1ea3,	// (0x000aa7bf) cale_month_week_pane

0x1ec7,	// (0x000aa7e3) grid_cale_month_pane_ParamLimits

0x1ec7,	// (0x000aa7e3) grid_cale_month_pane

0x1f10,	// (0x000aa82c) cale_month_day_heading_pane_t1

0x1f52,	// (0x000aa86e) cale_month_day_heading_pane_t2

0x1f87,	// (0x000aa8a3) cale_month_day_heading_pane_t3

0x1fbc,	// (0x000aa8d8) cale_month_day_heading_pane_t4

0x1ff9,	// (0x000aa915) cale_month_day_heading_pane_t5

0x203e,	// (0x000aa95a) cale_month_day_heading_pane_t6

0x2083,	// (0x000aa99f) cale_month_day_heading_pane_t7

0x0006,

0xf2a6,	// (0x000b7bc2) cale_month_day_heading_pane_t

0xa9c8,	// (0x000b32e4) bg_cale_side_pane_cp01

0x20d0,	// (0x000aa9ec) cale_month_week_pane_t1

0x20e9,	// (0x000aaa05) cale_month_week_pane_t2

0x2102,	// (0x000aaa1e) cale_month_week_pane_t3

0x211b,	// (0x000aaa37) cale_month_week_pane_t4

0x2134,	// (0x000aaa50) cale_month_week_pane_t5

0x214d,	// (0x000aaa69) cale_month_week_pane_t6

0x0005,

0xf2b5,	// (0x000b7bd1) cale_month_week_pane_t

0x2166,	// (0x000aaa82) cell_cale_month_pane_ParamLimits

0x2166,	// (0x000aaa82) cell_cale_month_pane

0x9500,	// (0x000b1e1c) cell_cale_month_pane_g1

0x22be,	// (0x000aabda) cell_cale_month_pane_t1_ParamLimits

0x22be,	// (0x000aabda) cell_cale_month_pane_t1

0xa9d6,	// (0x000b32f2) grid_highlight_pane_cp08

0xa8a1,	// (0x000b31bd) main_smil_g1

0x22ea,	// (0x000aac06) smil_status_pane

0xad85,	// (0x000b36a1) smil_text_pane

0xc6e6,	// (0x000b5002) bg_popup_call3_rect_pane_g8

0xc6ee,	// (0x000b500a) bg_popup_call3_rect_pane_g9

0x0008,

0xf56e,	// (0x000b7e8a) bg_popup_call3_rect_pane_g

0xc975,	// (0x000b5291) smil_status_volume_pane_g1

0xad8f,	// (0x000b36ab) smil_status_pane_t1

0x9646,	// (0x000b1f62) volume_smil_pane

0xada6,	// (0x000b36c2) list_smil_text_pane

0x22ff,	// (0x000aac1b) scroll_pane_cp011

0x230a,	// (0x000aac26) smil_text_list_pane_t1_ParamLimits

0x230a,	// (0x000aac26) smil_text_list_pane_t1

0x950c,	// (0x000b1e28) aid_volume_smil_ParamLimits

0x950c,	// (0x000b1e28) aid_volume_smil

0xa8a1,	// (0x000b31bd) smil_volume_pane_g1

0xa8a1,	// (0x000b31bd) smil_volume_pane_g2

0x0001,

0xf2d5,	// (0x000b7bf1) smil_volume_pane_g

0x0b82,	// (0x000a949e) listscroll_cale_day_pane

0xadb0,	// (0x000b36cc) bg_cale_pane

0xadc8,	// (0x000b36e4) list_cale_pane

0xadeb,	// (0x000b3707) scroll_pane_cp09

0xadfc,	// (0x000b3718) cale_bg_pane_g1

0xae04,	// (0x000b3720) cale_bg_pane_g2

0xae0c,	// (0x000b3728) cale_bg_pane_g3

0xae14,	// (0x000b3730) cale_bg_pane_g4

0xae1c,	// (0x000b3738) cale_bg_pane_g5

0xae24,	// (0x000b3740) cale_bg_pane_g6

0xae2c,	// (0x000b3748) cale_bg_pane_g7

0xae34,	// (0x000b3750) cale_bg_pane_g8

0xae3c,	// (0x000b3758) cale_bg_pane_g9

0x0008,

0xf2da,	// (0x000b7bf6) cale_bg_pane_g

0x2356,	// (0x000aac72) list_cale_time_pane_ParamLimits

0x2356,	// (0x000aac72) list_cale_time_pane

0xae44,	// (0x000b3760) list_cale_time_pane_g1_ParamLimits

0xae44,	// (0x000b3760) list_cale_time_pane_g1

0xae50,	// (0x000b376c) list_cale_time_pane_g2_ParamLimits

0xae50,	// (0x000b376c) list_cale_time_pane_g2

0x236c,	// (0x000aac88) list_cale_time_pane_g3_ParamLimits

0x236c,	// (0x000aac88) list_cale_time_pane_g3

0x237a,	// (0x000aac96) list_cale_time_pane_g4_ParamLimits

0x237a,	// (0x000aac96) list_cale_time_pane_g4

0x2388,	// (0x000aaca4) list_cale_time_pane_g5_ParamLimits

0x2388,	// (0x000aaca4) list_cale_time_pane_g5

0x0005,

0xf2ed,	// (0x000b7c09) list_cale_time_pane_g_ParamLimits

0xf2ed,	// (0x000b7c09) list_cale_time_pane_g

0xae6a,	// (0x000b3786) list_cale_time_pane_t1_ParamLimits

0xae6a,	// (0x000b3786) list_cale_time_pane_t1

0xae92,	// (0x000b37ae) list_cale_time_pane_t2_ParamLimits

0xae92,	// (0x000b37ae) list_cale_time_pane_t2

0x2708,	// (0x000ab024) aid_blid_cardinal_pane

0x2746,	// (0x000ab062) compass_pane_t4

0xaeba,	// (0x000b37d6) list_cale_time_pane_t4_ParamLimits

0xaeba,	// (0x000b37d6) list_cale_time_pane_t4

0x2754,	// (0x000ab070) compass_pane_t5

0x2762,	// (0x000ab07e) compass_pane_t6

0x2770,	// (0x000ab08c) compass_pane_t7

0xb35e,	// (0x000b3c7a) navi_pane_cc_t1

0xb53b,	// (0x000b3e57) aid_phob_thumbnail_center_pane

0x2d4c,	// (0x000ab668) main_postcard_pane_g4_ParamLimits

0x0002,

0xf2fa,	// (0x000b7c16) list_cale_time_pane_t_ParamLimits

0xf2fa,	// (0x000b7c16) list_cale_time_pane_t

0x9c2c,	// (0x000b2548) bg_popup_window_pane_cp02_ParamLimits

0x9c2c,	// (0x000b2548) bg_popup_window_pane_cp02

0xaee2,	// (0x000b37fe) heading_pane_cp01_ParamLimits

0xaee2,	// (0x000b37fe) heading_pane_cp01

0xaeee,	// (0x000b380a) loc_req_pane_ParamLimits

0xaeee,	// (0x000b380a) loc_req_pane

0xaefe,	// (0x000b381a) loc_type_pane_ParamLimits

0xaefe,	// (0x000b381a) loc_type_pane

0xaf10,	// (0x000b382c) loc_type_pane_t1_ParamLimits

0xaf10,	// (0x000b382c) loc_type_pane_t1

0xaf22,	// (0x000b383e) loc_type_pane_t2_ParamLimits

0xaf22,	// (0x000b383e) loc_type_pane_t2

0xaf34,	// (0x000b3850) loc_type_pane_t3_ParamLimits

0xaf34,	// (0x000b3850) loc_type_pane_t3

0x0002,

0xf301,	// (0x000b7c1d) loc_type_pane_t_ParamLimits

0xf301,	// (0x000b7c1d) loc_type_pane_t

0xaf46,	// (0x000b3862) list_loc_req_pane

0xaf50,	// (0x000b386c) scroll_pane_cp012

0x2396,	// (0x000aacb2) list_single_loc_request_popup_menu_pane_ParamLimits

0x2396,	// (0x000aacb2) list_single_loc_request_popup_menu_pane

0xaf5b,	// (0x000b3877) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xaf5b,	// (0x000b3877) list_single_loc_request_popup_menu_pane_g1

0xaf67,	// (0x000b3883) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xaf67,	// (0x000b3883) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf308,	// (0x000b7c24) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf308,	// (0x000b7c24) list_single_loc_request_popup_menu_pane_g

0xaf73,	// (0x000b388f) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xaf73,	// (0x000b388f) list_single_loc_request_popup_menu_pane_t1

0xa77b,	// (0x000b3097) bg_popup_window_pane_cp03_ParamLimits

0xa77b,	// (0x000b3097) bg_popup_window_pane_cp03

0xaf89,	// (0x000b38a5) heading_loc_req_pane_ParamLimits

0xaf89,	// (0x000b38a5) heading_loc_req_pane

0x23a3,	// (0x000aacbf) popup_dyc_status_message_window_g1_ParamLimits

0x23a3,	// (0x000aacbf) popup_dyc_status_message_window_g1

0x23b7,	// (0x000aacd3) popup_dyc_status_message_window_t1_ParamLimits

0x23b7,	// (0x000aacd3) popup_dyc_status_message_window_t1

0x23cc,	// (0x000aace8) popup_dyc_status_message_window_t2_ParamLimits

0x23cc,	// (0x000aace8) popup_dyc_status_message_window_t2

0x23e1,	// (0x000aacfd) popup_dyc_status_message_window_t3_ParamLimits

0x23e1,	// (0x000aacfd) popup_dyc_status_message_window_t3

0x0002,

0xf30d,	// (0x000b7c29) popup_dyc_status_message_window_t_ParamLimits

0xf30d,	// (0x000b7c29) popup_dyc_status_message_window_t

0xa520,	// (0x000b2e3c) bg_heading_pane_cp01

0xaf95,	// (0x000b38b1) heading_loc_req_pane_g1

0xaf9d,	// (0x000b38b9) heading_loc_req_pane_g2

0xafa5,	// (0x000b38c1) heading_loc_req_pane_g3

0x0002,

0xf314,	// (0x000b7c30) heading_loc_req_pane_g

0xafad,	// (0x000b38c9) heading_loc_req_pane_t1

0xafbc,	// (0x000b38d8) bg_popup_sub_pane_cp01_ParamLimits

0xafbc,	// (0x000b38d8) bg_popup_sub_pane_cp01

0xafca,	// (0x000b38e6) popup_cale_events_window_g1_ParamLimits

0xafca,	// (0x000b38e6) popup_cale_events_window_g1

0xafea,	// (0x000b3906) popup_cale_events_window_g2_ParamLimits

0xafea,	// (0x000b3906) popup_cale_events_window_g2

0x0001,

0xf348,	// (0x000b7c64) popup_cale_events_window_g_ParamLimits

0xf348,	// (0x000b7c64) popup_cale_events_window_g

0xb00a,	// (0x000b3926) popup_cale_events_window_t1_ParamLimits

0xb00a,	// (0x000b3926) popup_cale_events_window_t1

0xb01c,	// (0x000b3938) popup_cale_events_window_t2_ParamLimits

0xb01c,	// (0x000b3938) popup_cale_events_window_t2

0xb05a,	// (0x000b3976) popup_cale_events_window_t3_ParamLimits

0xb05a,	// (0x000b3976) popup_cale_events_window_t3

0xb094,	// (0x000b39b0) popup_cale_events_window_t4_ParamLimits

0xb094,	// (0x000b39b0) popup_cale_events_window_t4

0x0003,

0xf34d,	// (0x000b7c69) popup_cale_events_window_t_ParamLimits

0xf34d,	// (0x000b7c69) popup_cale_events_window_t

0x24d8,	// (0x000aadf4) call_type_pane

0x24e8,	// (0x000aae04) popup_call_status_window_g1

0x24fc,	// (0x000aae18) popup_call_status_window_g2

0x2510,	// (0x000aae2c) popup_call_status_window_g3

0x0002,

0xf356,	// (0x000b7c72) popup_call_status_window_g

0xb0ca,	// (0x000b39e6) call_type_pane_g1

0xb0d3,	// (0x000b39ef) call_type_pane_g2

0x0001,

0xf35d,	// (0x000b7c79) call_type_pane_g

0xa520,	// (0x000b2e3c) bg_popup_sub_pane_cp02

0xb0dc,	// (0x000b39f8) listscroll_popup_wml_pane

0xb0e4,	// (0x000b3a00) list_wml_pane

0xb0ee,	// (0x000b3a0a) scroll_pane_cp013

0xb0f9,	// (0x000b3a15) list_single_graphic_popup_wml_pane_ParamLimits

0xb0f9,	// (0x000b3a15) list_single_graphic_popup_wml_pane

0xa8a1,	// (0x000b31bd) list_single_graphic_popup_wml_pane_g1

0xb10d,	// (0x000b3a29) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf362,	// (0x000b7c7e) list_single_graphic_popup_wml_pane_g

0xb115,	// (0x000b3a31) list_single_graphic_popup_wml_pane_t1

0xb12b,	// (0x000b3a47) aid_call_pane

0xa773,	// (0x000b308f) popup_clock_analogue_window_g1

0xa773,	// (0x000b308f) popup_clock_analogue_window_g2

0x952e,	// (0x000b1e4a) popup_clock_analogue_window_g3

0x952e,	// (0x000b1e4a) popup_clock_analogue_window_g4

0xa8a1,	// (0x000b31bd) popup_clock_analogue_window_g5

0x0004,

0xf367,	// (0x000b7c83) popup_clock_analogue_window_g

0x9536,	// (0x000b1e52) popup_clock_analogue_window_t1

0x9544,	// (0x000b1e60) clock_digital_number_pane_ParamLimits

0x9544,	// (0x000b1e60) clock_digital_number_pane

0x9550,	// (0x000b1e6c) clock_digital_number_pane_cp02_ParamLimits

0x9550,	// (0x000b1e6c) clock_digital_number_pane_cp02

0x955c,	// (0x000b1e78) clock_digital_number_pane_cp03_ParamLimits

0x955c,	// (0x000b1e78) clock_digital_number_pane_cp03

0x9568,	// (0x000b1e84) clock_digital_number_pane_cp04_ParamLimits

0x9568,	// (0x000b1e84) clock_digital_number_pane_cp04

0x9574,	// (0x000b1e90) clock_digital_separator_pane_ParamLimits

0x9574,	// (0x000b1e90) clock_digital_separator_pane

0x9580,	// (0x000b1e9c) popup_clock_digital_window_t1

0xa8a1,	// (0x000b31bd) clock_digital_number_pane_g1

0xa8a1,	// (0x000b31bd) clock_digital_number_pane_g2

0x0001,

0xf2d5,	// (0x000b7bf1) clock_digital_number_pane_g

0xa8a1,	// (0x000b31bd) clock_digital_separator_pane_g1

0xa8a1,	// (0x000b31bd) clock_digital_separator_pane_g2

0x0001,

0xf2d5,	// (0x000b7bf1) clock_digital_separator_pane_g

0xa520,	// (0x000b2e3c) bg_popup_window_pane_cp04

0xb133,	// (0x000b3a4f) heading_pane_cp03

0xb13b,	// (0x000b3a57) listscroll_popup_gms_pane

0xb143,	// (0x000b3a5f) grid_large_graphic_popup_pane

0xb14d,	// (0x000b3a69) listscroll_popup_gms_pane_g1

0xb155,	// (0x000b3a71) listscroll_popup_gms_pane_g2

0x0001,

0xf372,	// (0x000b7c8e) listscroll_popup_gms_pane_g

0xabea,	// (0x000b3506) scroll_pane_cp014

0x251f,	// (0x000aae3b) cell_large_graphic_popup_pane_ParamLimits

0x251f,	// (0x000aae3b) cell_large_graphic_popup_pane

0x2537,	// (0x000aae53) cell_large_graphic_popup_pane_g1_ParamLimits

0x2537,	// (0x000aae53) cell_large_graphic_popup_pane_g1

0xb15d,	// (0x000b3a79) cell_large_graphic_popup_pane_g2_ParamLimits

0xb15d,	// (0x000b3a79) cell_large_graphic_popup_pane_g2

0xb169,	// (0x000b3a85) cell_large_graphic_popup_pane_g3_ParamLimits

0xb169,	// (0x000b3a85) cell_large_graphic_popup_pane_g3

0xb176,	// (0x000b3a92) cell_large_graphic_popup_pane_g4_ParamLimits

0xb176,	// (0x000b3a92) cell_large_graphic_popup_pane_g4

0x0003,

0xf377,	// (0x000b7c93) cell_large_graphic_popup_pane_g_ParamLimits

0xf377,	// (0x000b7c93) cell_large_graphic_popup_pane_g

0xb186,	// (0x000b3aa2) grid_highlight_pane_cp010

0xa8a1,	// (0x000b31bd) bg_popup_call_pane_g1

0xb190,	// (0x000b3aac) list_single_graphic_popup_conf_pane_ParamLimits

0xb190,	// (0x000b3aac) list_single_graphic_popup_conf_pane

0xb1a3,	// (0x000b3abf) list_highlight_pane_cp01

0xb1ac,	// (0x000b3ac8) list_single_graphic_popup_conf_pane_g1

0xb1b4,	// (0x000b3ad0) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf380,	// (0x000b7c9c) list_single_graphic_popup_conf_pane_g

0xb1bc,	// (0x000b3ad8) list_single_graphic_popup_conf_pane_t1

0xb1ca,	// (0x000b3ae6) linegrid_cams_pane_g1

0x2543,	// (0x000aae5f) linegrid_cams_pane_g2

0xaa09,	// (0x000b3325) linegrid_cams_pane_g3

0xb1d3,	// (0x000b3aef) linegrid_cams_pane_g4

0x254c,	// (0x000aae68) linegrid_cams_pane_g5

0x2555,	// (0x000aae71) linegrid_cams_pane_g6

0xaa12,	// (0x000b332e) linegrid_cams_pane_g7

0x0006,

0xf385,	// (0x000b7ca1) linegrid_cams_pane_g

0xb1dc,	// (0x000b3af8) popup_clock_analogue_window

0xb1dc,	// (0x000b3af8) popup_clock_digital_window

0xa520,	// (0x000b2e3c) popup_phob_thumbnail_window

0xa8a1,	// (0x000b31bd) call_video_uplink_pane_g1

0xb1e5,	// (0x000b3b01) call_video_uplink_pane_g2

0x0001,

0xf394,	// (0x000b7cb0) call_video_uplink_pane_g

0xb1ed,	// (0x000b3b09) video_uplink_pane

0xb1f5,	// (0x000b3b11) mce_image_pane_g1

0x2560,	// (0x000aae7c) mce_image_pane_g2

0x2568,	// (0x000aae84) mce_image_pane_g3

0x2570,	// (0x000aae8c) mce_image_pane_g4

0x257a,	// (0x000aae96) mce_image_pane_g5

0x0004,

0xf399,	// (0x000b7cb5) mce_image_pane_g

0xb1ff,	// (0x000b3b1b) control_top_pane_stacon_cp01_ParamLimits

0xb1ff,	// (0x000b3b1b) control_top_pane_stacon_cp01

0xb213,	// (0x000b3b2f) uni_indicator_pane_stacon_cp01_ParamLimits

0xb213,	// (0x000b3b2f) uni_indicator_pane_stacon_cp01

0xb224,	// (0x000b3b40) bg_popup_sub_pane_cp03

0x2582,	// (0x000aae9e) chi_dic_find_pane

0x258a,	// (0x000aaea6) listscroll_chi_dic_pane

0x2593,	// (0x000aaeaf) main_pane_chidic_g1

0x25a6,	// (0x000aaec2) chi_dic_find_pane_t1

0xb22e,	// (0x000b3b4a) find_chidic_pane

0xb237,	// (0x000b3b53) chi_dic_list_pane_ParamLimits

0xb237,	// (0x000b3b53) chi_dic_list_pane

0xb248,	// (0x000b3b64) scroll_pane_cp020

0x25b4,	// (0x000aaed0) find_chidic_pane_t1

0xa520,	// (0x000b2e3c) input_focus_pane_cp06

0x25c3,	// (0x000aaedf) list_chi_dic_pane_ParamLimits

0x25c3,	// (0x000aaedf) list_chi_dic_pane

0x25d5,	// (0x000aaef1) list_chi_dic_pane_t1_ParamLimits

0x25d5,	// (0x000aaef1) list_chi_dic_pane_t1

0xa520,	// (0x000b2e3c) list_highlight_pane_cp020

0xb250,	// (0x000b3b6c) bg_cale_heading_pane_g1

0x25e8,	// (0x000aaf04) bg_cale_heading_pane_g2

0x25f0,	// (0x000aaf0c) bg_cale_heading_pane_g3

0x25f8,	// (0x000aaf14) bg_cale_heading_pane_g4

0x2602,	// (0x000aaf1e) bg_cale_heading_pane_g5

0x260c,	// (0x000aaf28) bg_cale_heading_pane_g6

0x2614,	// (0x000aaf30) bg_cale_heading_pane_g7

0x261c,	// (0x000aaf38) bg_cale_heading_pane_g8

0x2626,	// (0x000aaf42) bg_cale_heading_pane_g9

0x0008,

0xf3a4,	// (0x000b7cc0) bg_cale_heading_pane_g

0xb250,	// (0x000b3b6c) bg_cale_side_pane_g1

0x2630,	// (0x000aaf4c) bg_cale_side_pane_g2

0x2638,	// (0x000aaf54) bg_cale_side_pane_g3

0x2640,	// (0x000aaf5c) bg_cale_side_pane_g4

0x2648,	// (0x000aaf64) bg_cale_side_pane_g5

0x2650,	// (0x000aaf6c) bg_cale_side_pane_g6

0x2658,	// (0x000aaf74) bg_cale_side_pane_g7

0x2660,	// (0x000aaf7c) bg_cale_side_pane_g8

0x2668,	// (0x000aaf84) bg_cale_side_pane_g9

0x0008,

0xf3b7,	// (0x000b7cd3) bg_cale_side_pane_g

0x2670,	// (0x000aaf8c) popup_call_status_window_ParamLimits

0x2670,	// (0x000aaf8c) popup_call_status_window

0xb258,	// (0x000b3b74) stacon_top_pane

0xb260,	// (0x000b3b7c) status_pane_ParamLimits

0xb260,	// (0x000b3b7c) status_pane

0xb275,	// (0x000b3b91) status_small_pane

0xb27d,	// (0x000b3b99) control_pane

0xa520,	// (0x000b2e3c) stacon_bottom_pane

0xb285,	// (0x000b3ba1) list_single_mce_smart_pane_t1_ParamLimits

0xb285,	// (0x000b3ba1) list_single_mce_smart_pane_t1

0xb298,	// (0x000b3bb4) list_single_mce_smart_pane_t2_ParamLimits

0xb298,	// (0x000b3bb4) list_single_mce_smart_pane_t2

0x0001,

0xf3ca,	// (0x000b7ce6) list_single_mce_smart_pane_t_ParamLimits

0xf3ca,	// (0x000b7ce6) list_single_mce_smart_pane_t

0x26b7,	// (0x000aafd3) compass_pane

0x26c0,	// (0x000aafdc) main_location2_pane_t1

0x26d2,	// (0x000aafee) main_location2_pane_t2

0x26e4,	// (0x000ab000) main_location2_pane_t3

0x0003,

0xf3cf,	// (0x000b7ceb) main_location2_pane_t

0xb2d7,	// (0x000b3bf3) compass_pane_g1_ParamLimits

0xb2d7,	// (0x000b3bf3) compass_pane_g1

0x2728,	// (0x000ab044) compass_pane_t1

0x2737,	// (0x000ab053) compass_pane_t2

0x0005,

0xf3d8,	// (0x000b7cf4) compass_pane_t

0x277e,	// (0x000ab09a) text_secondary_cp61

0xb355,	// (0x000b3c71) navi_pane_cams_g5

0xb3d1,	// (0x000b3ced) navi_pane_im_t1

0xb3df,	// (0x000b3cfb) navi_pane_mp_g1_ParamLimits

0xb3df,	// (0x000b3cfb) navi_pane_mp_g1

0xb3f3,	// (0x000b3d0f) navi_pane_mp_g2_ParamLimits

0xb3f3,	// (0x000b3d0f) navi_pane_mp_g2

0xb3ff,	// (0x000b3d1b) navi_pane_mp_g3_ParamLimits

0xb3ff,	// (0x000b3d1b) navi_pane_mp_g3

0x0002,

0xf3ec,	// (0x000b7d08) navi_pane_mp_g_ParamLimits

0xf3ec,	// (0x000b7d08) navi_pane_mp_g

0xb40b,	// (0x000b3d27) navi_pane_mp_t1

0xb419,	// (0x000b3d35) navi_pane_mp_t2

0x0002,

0xf3f3,	// (0x000b7d0f) navi_pane_mp_t

0xb484,	// (0x000b3da0) navi_pane_vt_g1

0xb40b,	// (0x000b3d27) navi_pane_vt_t1

0xb48c,	// (0x000b3da8) navi_slider_pane

0xaa23,	// (0x000b333f) zooming_pane

0xb49c,	// (0x000b3db8) navi_slider_pane_g1

0x959d,	// (0x000b1eb9) navi_slider_pane_g2

0x0006,

0xf3fa,	// (0x000b7d16) navi_slider_pane_g

0xb4c0,	// (0x000b3ddc) aid_levels_zoom

0xb4c8,	// (0x000b3de4) zooming_pane_g1

0xb4d0,	// (0x000b3dec) zooming_pane_g2

0xb4d0,	// (0x000b3dec) zooming_pane_g3

0x0002,

0xf409,	// (0x000b7d25) zooming_pane_g

0xb4d8,	// (0x000b3df4) level_10_zoom

0xb4e1,	// (0x000b3dfd) level_11_zoom

0xb4ea,	// (0x000b3e06) level_1_zoom

0xb4f3,	// (0x000b3e0f) level_2_zoom

0xb4fc,	// (0x000b3e18) level_3_zoom

0xb505,	// (0x000b3e21) level_4_zoom

0xb50e,	// (0x000b3e2a) level_5_zoom

0xb517,	// (0x000b3e33) level_6_zoom

0xb520,	// (0x000b3e3c) level_7_zoom

0xb529,	// (0x000b3e45) level_8_zoom

0xb532,	// (0x000b3e4e) level_9_zoom

0xb543,	// (0x000b3e5f) popup_phob_thumbnail_window_g1

0xb54b,	// (0x000b3e67) popup_phob_thumbnail_window_g2

0x0001,

0xf410,	// (0x000b7d2c) popup_phob_thumbnail_window_g

0xc888,	// (0x000b51a4) level_1_location

0xc890,	// (0x000b51ac) level_2_location

0xc898,	// (0x000b51b4) level_3_location

0xc8a0,	// (0x000b51bc) level_4_location

0xaa23,	// (0x000b333f) level_5_location

0x27cf,	// (0x000ab0eb) mce_icon_pane_g1

0x27d9,	// (0x000ab0f5) mce_icon_pane_g2

0x0001,

0xf415,	// (0x000b7d31) mce_icon_pane_g

0x27e1,	// (0x000ab0fd) main_mup_pane_g1_ParamLimits

0x27e1,	// (0x000ab0fd) main_mup_pane_g1

0x27f7,	// (0x000ab113) main_mup_pane_g2_ParamLimits

0x27f7,	// (0x000ab113) main_mup_pane_g2

0x2809,	// (0x000ab125) main_mup_pane_g3_ParamLimits

0x2809,	// (0x000ab125) main_mup_pane_g3

0x281b,	// (0x000ab137) main_mup_pane_g4_ParamLimits

0x281b,	// (0x000ab137) main_mup_pane_g4

0x2833,	// (0x000ab14f) main_mup_pane_g5_ParamLimits

0x2833,	// (0x000ab14f) main_mup_pane_g5

0x284f,	// (0x000ab16b) main_mup_pane_g6_ParamLimits

0x284f,	// (0x000ab16b) main_mup_pane_g6

0x2867,	// (0x000ab183) main_mup_pane_g7_ParamLimits

0x2867,	// (0x000ab183) main_mup_pane_g7

0x287f,	// (0x000ab19b) main_mup_pane_g8_ParamLimits

0x287f,	// (0x000ab19b) main_mup_pane_g8

0x2897,	// (0x000ab1b3) main_mup_pane_g9_ParamLimits

0x2897,	// (0x000ab1b3) main_mup_pane_g9

0x28b1,	// (0x000ab1cd) main_mup_pane_g10_ParamLimits

0x28b1,	// (0x000ab1cd) main_mup_pane_g10

0x28cb,	// (0x000ab1e7) main_mup_pane_g11_ParamLimits

0x28cb,	// (0x000ab1e7) main_mup_pane_g11

0x28df,	// (0x000ab1fb) main_mup_pane_g12_ParamLimits

0x28df,	// (0x000ab1fb) main_mup_pane_g12

0x28f5,	// (0x000ab211) main_mup_pane_g13_ParamLimits

0x28f5,	// (0x000ab211) main_mup_pane_g13

0x000c,

0xf41a,	// (0x000b7d36) main_mup_pane_g_ParamLimits

0xf41a,	// (0x000b7d36) main_mup_pane_g

0x2909,	// (0x000ab225) main_mup_pane_t1_ParamLimits

0x2909,	// (0x000ab225) main_mup_pane_t1

0x2923,	// (0x000ab23f) main_mup_pane_t2_ParamLimits

0x2923,	// (0x000ab23f) main_mup_pane_t2

0x293b,	// (0x000ab257) main_mup_pane_t3_ParamLimits

0x293b,	// (0x000ab257) main_mup_pane_t3

0x2953,	// (0x000ab26f) main_mup_pane_t4_ParamLimits

0x2953,	// (0x000ab26f) main_mup_pane_t4

0x2971,	// (0x000ab28d) main_mup_pane_t5_ParamLimits

0x2971,	// (0x000ab28d) main_mup_pane_t5

0x2986,	// (0x000ab2a2) main_mup_pane_t6_ParamLimits

0x2986,	// (0x000ab2a2) main_mup_pane_t6

0x0005,

0xf435,	// (0x000b7d51) main_mup_pane_t_ParamLimits

0xf435,	// (0x000b7d51) main_mup_pane_t

0x2998,	// (0x000ab2b4) mup_progress_pane_ParamLimits

0x2998,	// (0x000ab2b4) mup_progress_pane

0x29a4,	// (0x000ab2c0) mup_visualizer_pane_ParamLimits

0x29a4,	// (0x000ab2c0) mup_visualizer_pane

0x29d8,	// (0x000ab2f4) mup_volume_pane_ParamLimits

0x29d8,	// (0x000ab2f4) mup_volume_pane

0xb553,	// (0x000b3e6f) mup_visualizer_pane_g1_ParamLimits

0xb553,	// (0x000b3e6f) mup_visualizer_pane_g1

0xb553,	// (0x000b3e6f) mup_visualizer_pane_g2_ParamLimits

0xb553,	// (0x000b3e6f) mup_visualizer_pane_g2

0xb2d7,	// (0x000b3bf3) mup_visualizer_pane_g3_ParamLimits

0xb2d7,	// (0x000b3bf3) mup_visualizer_pane_g3

0x0002,

0xf442,	// (0x000b7d5e) mup_visualizer_pane_g_ParamLimits

0xf442,	// (0x000b7d5e) mup_visualizer_pane_g

0xa8a1,	// (0x000b31bd) mup_volume_pane_g1

0xb569,	// (0x000b3e85) mup_volume_pane_g2

0x0001,

0xf449,	// (0x000b7d65) mup_volume_pane_g

0xa8a1,	// (0x000b31bd) mup_progress_pane_g1

0xb572,	// (0x000b3e8e) mup_progress_pane_g2

0xb57b,	// (0x000b3e97) mup_progress_pane_g3

0x0002,

0xf44e,	// (0x000b7d6a) mup_progress_pane_g

0xa520,	// (0x000b2e3c) bg_popup_window_pane_cp05

0xb584,	// (0x000b3ea0) heading_pane_cp02_ParamLimits

0xb584,	// (0x000b3ea0) heading_pane_cp02

0xb59e,	// (0x000b3eba) list_popup_blid_pane

0xb5a6,	// (0x000b3ec2) list_blid_sat_info_pane_ParamLimits

0xb5a6,	// (0x000b3ec2) list_blid_sat_info_pane

0xb5b9,	// (0x000b3ed5) list_blid_sat_info_pane_g1

0xb5c1,	// (0x000b3edd) list_blid_sat_info_pane_t1

0x2aee,	// (0x000ab40a) mup_equalizer_pane_ParamLimits

0x2aee,	// (0x000ab40a) mup_equalizer_pane

0x2b07,	// (0x000ab423) mup_equalizer_pane_cp1_ParamLimits

0x2b07,	// (0x000ab423) mup_equalizer_pane_cp1

0x2b24,	// (0x000ab440) mup_equalizer_pane_cp2_ParamLimits

0x2b24,	// (0x000ab440) mup_equalizer_pane_cp2

0x2b41,	// (0x000ab45d) mup_equalizer_pane_cp3_ParamLimits

0x2b41,	// (0x000ab45d) mup_equalizer_pane_cp3

0x2b62,	// (0x000ab47e) mup_equalizer_pane_cp4_ParamLimits

0x2b62,	// (0x000ab47e) mup_equalizer_pane_cp4

0x2b83,	// (0x000ab49f) mup_equalizer_pane_cp5

0x2b97,	// (0x000ab4b3) mup_equalizer_pane_cp6

0x2bab,	// (0x000ab4c7) mup_equalizer_pane_cp7

0xc766,	// (0x000b5082) bg_popup_call_poc_act_pane_g9

0xc76e,	// (0x000b508a) bg_popup_call_poc_act_pane_g10

0xc776,	// (0x000b5092) bg_popup_call_poc_act_pane_g11

0x000a,

0xa77b,	// (0x000b3097) mup_scale_pane

0xa8a1,	// (0x000b31bd) mup_scale_pane_g1

0xb5cf,	// (0x000b3eeb) mup_scale_pane_g2

0x0006,

0xf46a,	// (0x000b7d86) mup_scale_pane_g

0xb5f3,	// (0x000b3f0f) msg_data_pane

0xb5fb,	// (0x000b3f17) scroll_pane_cp017

0x2bd1,	// (0x000ab4ed) bg_list_pane_cp04_ParamLimits

0x2bd1,	// (0x000ab4ed) bg_list_pane_cp04

0xb603,	// (0x000b3f1f) msg_data_pane_g1

0x2be9,	// (0x000ab505) msg_data_pane_g2

0x2bf1,	// (0x000ab50d) msg_data_pane_g3

0x2bf9,	// (0x000ab515) msg_data_pane_g4

0x2c01,	// (0x000ab51d) msg_data_pane_g5

0x2c09,	// (0x000ab525) msg_data_pane_g6

0x2c11,	// (0x000ab52d) msg_data_pane_g7

0x0006,

0xf479,	// (0x000b7d95) msg_data_pane_g

0x2c19,	// (0x000ab535) msg_text_pane_ParamLimits

0x2c19,	// (0x000ab535) msg_text_pane

0x2c44,	// (0x000ab560) qrid_highlight_pane_cp011_ParamLimits

0x2c44,	// (0x000ab560) qrid_highlight_pane_cp011

0xa520,	// (0x000b2e3c) msg_body_pane

0xa520,	// (0x000b2e3c) msg_header_pane

0xb614,	// (0x000b3f30) input_focus_pane_cp07

0x9e40,	// (0x000b275c) msg_header_pane_t1_ParamLimits

0x9e40,	// (0x000b275c) msg_header_pane_t1

0x9e52,	// (0x000b276e) msg_header_pane_t2_ParamLimits

0x9e52,	// (0x000b276e) msg_header_pane_t2

0x0001,

0xf48d,	// (0x000b7da9) msg_header_pane_t_ParamLimits

0xf48d,	// (0x000b7da9) msg_header_pane_t

0xb629,	// (0x000b3f45) msg_body_pane_g1

0x9e64,	// (0x000b2780) msg_body_pane_t1_ParamLimits

0x9e64,	// (0x000b2780) msg_body_pane_t1

0x9e95,	// (0x000b27b1) msg_body_pane_t2_ParamLimits

0x9e95,	// (0x000b27b1) msg_body_pane_t2

0x9ea7,	// (0x000b27c3) msg_body_pane_t3_ParamLimits

0x9ea7,	// (0x000b27c3) msg_body_pane_t3

0x0002,

0xf492,	// (0x000b7dae) msg_body_pane_t_ParamLimits

0xf492,	// (0x000b7dae) msg_body_pane_t

0x2ca2,	// (0x000ab5be) main_viewer_pane_g1_ParamLimits

0x2ca2,	// (0x000ab5be) main_viewer_pane_g1

0x2cb0,	// (0x000ab5cc) main_viewer_pane_g2_ParamLimits

0x2cb0,	// (0x000ab5cc) main_viewer_pane_g2

0x2cbe,	// (0x000ab5da) main_viewer_pane_g3_ParamLimits

0x2cbe,	// (0x000ab5da) main_viewer_pane_g3

0x2ccd,	// (0x000ab5e9) main_viewer_pane_g4_ParamLimits

0x2ccd,	// (0x000ab5e9) main_viewer_pane_g4

0x95c7,	// (0x000b1ee3) main_viewer_pane_g5_ParamLimits

0x95c7,	// (0x000b1ee3) main_viewer_pane_g5

0x95c7,	// (0x000b1ee3) main_viewer_pane_g7_ParamLimits

0x95c7,	// (0x000b1ee3) main_viewer_pane_g7

0xaf5b,	// (0x000b3877) main_viewer_pane_g8_ParamLimits

0xaf5b,	// (0x000b3877) main_viewer_pane_g8

0x0007,

0xf4a2,	// (0x000b7dbe) main_viewer_pane_g_ParamLimits

0xf4a2,	// (0x000b7dbe) main_viewer_pane_g

0xb631,	// (0x000b3f4d) viewer_content_pane_ParamLimits

0xb631,	// (0x000b3f4d) viewer_content_pane

0x2d09,	// (0x000ab625) main_postcard_pane_g1_ParamLimits

0x2d09,	// (0x000ab625) main_postcard_pane_g1

0x2d1f,	// (0x000ab63b) main_postcard_pane_g2_ParamLimits

0x2d1f,	// (0x000ab63b) main_postcard_pane_g2

0x2d35,	// (0x000ab651) main_postcard_pane_g3_ParamLimits

0x2d35,	// (0x000ab651) main_postcard_pane_g3

0x0005,

0xf4b3,	// (0x000b7dcf) main_postcard_pane_g_ParamLimits

0xf4b3,	// (0x000b7dcf) main_postcard_pane_g

0x2d4c,	// (0x000ab668) main_postcard_pane_g4

0xc988,	// (0x000b52a4) smil_status_volume_pane_g2

0x2d8f,	// (0x000ab6ab) postcard_pane_ParamLimits

0x2d8f,	// (0x000ab6ab) postcard_pane

0xb63f,	// (0x000b3f5b) postcard_pane_g1_ParamLimits

0xb63f,	// (0x000b3f5b) postcard_pane_g1

0x2dd1,	// (0x000ab6ed) postcard_pane_g2_ParamLimits

0x2dd1,	// (0x000ab6ed) postcard_pane_g2

0x2ddd,	// (0x000ab6f9) postcard_pane_g3_ParamLimits

0x2ddd,	// (0x000ab6f9) postcard_pane_g3

0xb64d,	// (0x000b3f69) postcard_pane_g4_ParamLimits

0xb64d,	// (0x000b3f69) postcard_pane_g4

0x2de9,	// (0x000ab705) postcard_pane_g5_ParamLimits

0x2de9,	// (0x000ab705) postcard_pane_g5

0x2dfe,	// (0x000ab71a) postcard_pane_g6_ParamLimits

0x2dfe,	// (0x000ab71a) postcard_pane_g6

0xb63f,	// (0x000b3f5b) postcard_pane_g7_ParamLimits

0xb63f,	// (0x000b3f5b) postcard_pane_g7

0x0006,

0xf4c0,	// (0x000b7ddc) postcard_pane_g_ParamLimits

0xf4c0,	// (0x000b7ddc) postcard_pane_g

0x2e12,	// (0x000ab72e) main_mp2_pane_g1_ParamLimits

0x2e12,	// (0x000ab72e) main_mp2_pane_g1

0x2e1e,	// (0x000ab73a) main_mp2_pane_g2_ParamLimits

0x2e1e,	// (0x000ab73a) main_mp2_pane_g2

0x2e2a,	// (0x000ab746) main_mp2_pane_g3_ParamLimits

0x2e2a,	// (0x000ab746) main_mp2_pane_g3

0x0002,

0xf4cf,	// (0x000b7deb) main_mp2_pane_g_ParamLimits

0xf4cf,	// (0x000b7deb) main_mp2_pane_g

0x2e36,	// (0x000ab752) main_mp2_pane_t1_ParamLimits

0x2e36,	// (0x000ab752) main_mp2_pane_t1

0x2e4b,	// (0x000ab767) main_mp2_pane_t2_ParamLimits

0x2e4b,	// (0x000ab767) main_mp2_pane_t2

0x2e5d,	// (0x000ab779) main_mp2_pane_t3_ParamLimits

0x2e5d,	// (0x000ab779) main_mp2_pane_t3

0x0002,

0xf4d6,	// (0x000b7df2) main_mp2_pane_t_ParamLimits

0xf4d6,	// (0x000b7df2) main_mp2_pane_t

0xb65b,	// (0x000b3f77) pec_content_pane_ParamLimits

0xb65b,	// (0x000b3f77) pec_content_pane

0xabea,	// (0x000b3506) scroll_pane_cp015

0xb66d,	// (0x000b3f89) pec_attribute_pane_ParamLimits

0xb66d,	// (0x000b3f89) pec_attribute_pane

0x2e6f,	// (0x000ab78b) pec_content_pane_g1_ParamLimits

0x2e6f,	// (0x000ab78b) pec_content_pane_g1

0xb67d,	// (0x000b3f99) pec_content_pane_t1_ParamLimits

0xb67d,	// (0x000b3f99) pec_content_pane_t1

0xb68f,	// (0x000b3fab) pec_content_pane_t2_ParamLimits

0xb68f,	// (0x000b3fab) pec_content_pane_t2

0x0001,

0xf4dd,	// (0x000b7df9) pec_content_pane_t_ParamLimits

0xf4dd,	// (0x000b7df9) pec_content_pane_t

0x2e7b,	// (0x000ab797) list_single_graphic_pane_cp01_ParamLimits

0x2e7b,	// (0x000ab797) list_single_graphic_pane_cp01

0xa77b,	// (0x000b3097) bg_popup_sub_pane_cp04

0xb6a1,	// (0x000b3fbd) popup_mup_playback_window_g1

0xb6ad,	// (0x000b3fc9) popup_mup_playback_window_t1

0xb6c2,	// (0x000b3fde) popup_mup_playback_window_t2

0x0001,

0xf4e2,	// (0x000b7dfe) popup_mup_playback_window_t

0xb6f9,	// (0x000b4015) main_image_pane_g1_ParamLimits

0xb6f9,	// (0x000b4015) main_image_pane_g1

0xb73c,	// (0x000b4058) scroll_pane_cp018_ParamLimits

0xb73c,	// (0x000b4058) scroll_pane_cp018

0xb754,	// (0x000b4070) scroll_pane_cp016_ParamLimits

0xb754,	// (0x000b4070) scroll_pane_cp016

0x2f49,	// (0x000ab865) smil2_image_pane_ParamLimits

0x2f49,	// (0x000ab865) smil2_image_pane

0x2f79,	// (0x000ab895) smil2_root_pane_ParamLimits

0x2f79,	// (0x000ab895) smil2_root_pane

0x2fb1,	// (0x000ab8cd) smil2_text_pane_ParamLimits

0x2fb1,	// (0x000ab8cd) smil2_text_pane

0xa520,	// (0x000b2e3c) bg_list_pane_cp06

0xb790,	// (0x000b40ac) grid_radio_pane

0xa520,	// (0x000b2e3c) bg_popup_window_pane_cp06

0xb798,	// (0x000b40b4) main_fmradio_pane_t1

0xb133,	// (0x000b3a4f) heading_pane_cp04

0xb7a6,	// (0x000b40c2) main_fmradio_pane_t2

0xc7be,	// (0x000b50da) popup_cale_lunar_info_window_g1

0xb7b4,	// (0x000b40d0) main_fmradio_pane_t3

0xc7c6,	// (0x000b50e2) popup_cale_lunar_info_window_g2

0xb7c2,	// (0x000b40de) main_fmradio_pane_t4

0x0001,

0xb7d0,	// (0x000b40ec) main_fmradio_pane_t5

0x0004,

0xf5d0,	// (0x000b7eec) popup_cale_lunar_info_window_g

0xf4f7,	// (0x000b7e13) main_fmradio_pane_t

0xb7de,	// (0x000b40fa) wait_bar_pane_cp03

0xb7e6,	// (0x000b4102) cell_fmradio_pane_ParamLimits

0xb7e6,	// (0x000b4102) cell_fmradio_pane

0xb63f,	// (0x000b3f5b) cell_fmradio_pane_g1_ParamLimits

0xb63f,	// (0x000b3f5b) cell_fmradio_pane_g1

0xa520,	// (0x000b2e3c) grid_highlight_pane_cp011

0xb7f9,	// (0x000b4115) poc_content_pane_ParamLimits

0xb7f9,	// (0x000b4115) poc_content_pane

0xb80b,	// (0x000b4127) scroll_pane_cp019

0x3031,	// (0x000ab94d) popup_call_poc_act_window_ParamLimits

0x3031,	// (0x000ab94d) popup_call_poc_act_window

0x3055,	// (0x000ab971) popup_call_poc_inact_window_ParamLimits

0x3055,	// (0x000ab971) popup_call_poc_inact_window

0xf594,	// (0x000b7eb0) bg_popup_call_poc_act_pane_g

0xc77e,	// (0x000b509a) bg_popup_call_poc_inact_pane_g1

0xc786,	// (0x000b50a2) bg_popup_call_poc_inact_pane_g2

0xb813,	// (0x000b412f) popup_call_poc_act_window_g2

0xc78e,	// (0x000b50aa) bg_popup_call_poc_inact_pane_g3

0xc70e,	// (0x000b502a) bg_popup_call_poc_inact_pane_g4

0xc796,	// (0x000b50b2) bg_popup_call_poc_inact_pane_g5

0xb81b,	// (0x000b4137) popup_call_poc_act_window_t1_ParamLimits

0xb81b,	// (0x000b4137) popup_call_poc_act_window_t1

0xb843,	// (0x000b415f) popup_call_poc_act_window_t2_ParamLimits

0xb843,	// (0x000b415f) popup_call_poc_act_window_t2

0xb86b,	// (0x000b4187) popup_call_poc_act_window_t3_ParamLimits

0xb86b,	// (0x000b4187) popup_call_poc_act_window_t3

0xb893,	// (0x000b41af) popup_call_poc_act_window_t4_ParamLimits

0xb893,	// (0x000b41af) popup_call_poc_act_window_t4

0x0003,

0xf502,	// (0x000b7e1e) popup_call_poc_act_window_t_ParamLimits

0xf502,	// (0x000b7e1e) popup_call_poc_act_window_t

0xc79e,	// (0x000b50ba) bg_popup_call_poc_inact_pane_g6

0xc7a6,	// (0x000b50c2) bg_popup_call_poc_inact_pane_g7

0xc7ae,	// (0x000b50ca) bg_popup_call_poc_inact_pane_g8

0xb8a5,	// (0x000b41c1) popup_call_poc_inact_window_g2

0xc7b6,	// (0x000b50d2) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf5ab,	// (0x000b7ec7) bg_popup_call_poc_inact_pane_g

0xb8ad,	// (0x000b41c9) popup_call_poc_inact_window_t1_ParamLimits

0xb8ad,	// (0x000b41c9) popup_call_poc_inact_window_t1

0xb8c2,	// (0x000b41de) popup_call_poc_inact_window_t2_ParamLimits

0xb8c2,	// (0x000b41de) popup_call_poc_inact_window_t2

0xb8d7,	// (0x000b41f3) popup_call_poc_inact_window_t3_ParamLimits

0xb8d7,	// (0x000b41f3) popup_call_poc_inact_window_t3

0x0002,

0xf50b,	// (0x000b7e27) popup_call_poc_inact_window_t_ParamLimits

0xf50b,	// (0x000b7e27) popup_call_poc_inact_window_t

0xc8fb,	// (0x000b5217) context_pane_ParamLimits

0x388f,	// (0x000ac1ab) signal_pane_ParamLimits

0xaa23,	// (0x000b333f) main_call2_pane

0x9612,	// (0x000b1f2e) popup_phob_thumbnail2_window_ParamLimits

0x9612,	// (0x000b1f2e) popup_phob_thumbnail2_window

0x95af,	// (0x000b1ecb) aid_hotspot_pointer_arrow_pane

0x95b7,	// (0x000b1ed3) aid_hotspot_pointer_hand_pane

0x339f,	// (0x000abcbb) phob_pre_status_pane_g5

0x115c,	// (0x000a9a78) cams_zoom_pane_ParamLimits

0x116b,	// (0x000a9a87) image_vga_pane_ParamLimits

0x1185,	// (0x000a9aa1) main_camera_pane_g1_ParamLimits

0x1197,	// (0x000a9ab3) main_camera_pane_g2_ParamLimits

0x11a7,	// (0x000a9ac3) main_camera_pane_g3_ParamLimits

0x11b7,	// (0x000a9ad3) main_camera_pane_g4_ParamLimits

0x11c7,	// (0x000a9ae3) main_camera_pane_g5_ParamLimits

0x11d7,	// (0x000a9af3) main_camera_pane_g6_ParamLimits

0x11e7,	// (0x000a9b03) main_camera_pane_g7_ParamLimits

0xf20a,	// (0x000b7b26) main_camera_pane_g_ParamLimits

0x11f7,	// (0x000a9b13) main_camera_pane_t1_ParamLimits

0x120d,	// (0x000a9b29) main_camera_pane_t2_ParamLimits

0xf21b,	// (0x000b7b37) main_camera_pane_t_ParamLimits

0xa77b,	// (0x000b3097) bg_popup_preview_window_pane_cp01_ParamLimits

0xa77b,	// (0x000b3097) bg_popup_preview_window_pane_cp01

0xb8ec,	// (0x000b4208) popup_phob_thumbnail2_window_g1_ParamLimits

0xb8ec,	// (0x000b4208) popup_phob_thumbnail2_window_g1

0xa520,	// (0x000b2e3c) call2_cli_visual_pane

0x3089,	// (0x000ab9a5) popup_call2_audio_conf_window_ParamLimits

0x3089,	// (0x000ab9a5) popup_call2_audio_conf_window

0x30a9,	// (0x000ab9c5) popup_call2_audio_first_window_ParamLimits

0x30a9,	// (0x000ab9c5) popup_call2_audio_first_window

0x313f,	// (0x000aba5b) popup_call2_audio_in_window_ParamLimits

0x313f,	// (0x000aba5b) popup_call2_audio_in_window

0x3187,	// (0x000abaa3) popup_call2_audio_out_window_ParamLimits

0x3187,	// (0x000abaa3) popup_call2_audio_out_window

0x31f1,	// (0x000abb0d) popup_call2_audio_second_window_ParamLimits

0x31f1,	// (0x000abb0d) popup_call2_audio_second_window

0x3257,	// (0x000abb73) popup_call2_audio_wait_window_ParamLimits

0x3257,	// (0x000abb73) popup_call2_audio_wait_window

0xa520,	// (0x000b2e3c) bg_popup_call2_act_pane_cp03

0xa75d,	// (0x000b3079) list_conf_pane_cp

0xb8f8,	// (0x000b4214) popup_call2_audio_conf_window_t1

0xb906,	// (0x000b4222) list_single_graphic_popup_conf2_pane_ParamLimits

0xb906,	// (0x000b4222) list_single_graphic_popup_conf2_pane

0xb1a3,	// (0x000b3abf) list_highlight_pane_cp04

0xb919,	// (0x000b4235) list_single_graphic_popup_conf2_pane_g1

0xb1b4,	// (0x000b3ad0) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf512,	// (0x000b7e2e) list_single_graphic_popup_conf2_pane_g

0xb923,	// (0x000b423f) list_single_graphic_popup_conf2_pane_t1

0xb931,	// (0x000b424d) bg_popup_call2_act_pane_cp01_ParamLimits

0xb931,	// (0x000b424d) bg_popup_call2_act_pane_cp01

0xb9bb,	// (0x000b42d7) call_type_pane_cp05_ParamLimits

0xb9bb,	// (0x000b42d7) call_type_pane_cp05

0xba0f,	// (0x000b432b) popup_call2_audio_second_window_g1_ParamLimits

0xba0f,	// (0x000b432b) popup_call2_audio_second_window_g1

0xba63,	// (0x000b437f) popup_call2_audio_second_window_g2_ParamLimits

0xba63,	// (0x000b437f) popup_call2_audio_second_window_g2

0x0002,

0xf517,	// (0x000b7e33) popup_call2_audio_second_window_g_ParamLimits

0xf517,	// (0x000b7e33) popup_call2_audio_second_window_g

0xbac8,	// (0x000b43e4) popup_call2_audio_second_window_t1_ParamLimits

0xbac8,	// (0x000b43e4) popup_call2_audio_second_window_t1

0xbb83,	// (0x000b449f) popup_call2_audio_second_window_t2_ParamLimits

0xbb83,	// (0x000b449f) popup_call2_audio_second_window_t2

0xbbd6,	// (0x000b44f2) popup_call2_audio_second_window_t3_ParamLimits

0xbbd6,	// (0x000b44f2) popup_call2_audio_second_window_t3

0x0003,

0xf51e,	// (0x000b7e3a) popup_call2_audio_second_window_t_ParamLimits

0xf51e,	// (0x000b7e3a) popup_call2_audio_second_window_t

0xa520,	// (0x000b2e3c) bg_popup_call2_in_pane_cp02

0xa52a,	// (0x000b2e46) call_type_pane_cp04

0xa532,	// (0x000b2e4e) popup_call2_audio_wait_window_g1

0xa53a,	// (0x000b2e56) popup_call2_audio_wait_window_g2

0x0001,

0xf0f9,	// (0x000b7a15) popup_call2_audio_wait_window_g

0xa542,	// (0x000b2e5e) popup_call2_audio_wait_window_t3

0xbcc9,	// (0x000b45e5) bg_popup_call2_act_pane_ParamLimits

0xbcc9,	// (0x000b45e5) bg_popup_call2_act_pane

0xbd89,	// (0x000b46a5) call_type_pane_cp03_ParamLimits

0xbd89,	// (0x000b46a5) call_type_pane_cp03

0xbded,	// (0x000b4709) popup_call2_audio_first_window_g1_ParamLimits

0xbded,	// (0x000b4709) popup_call2_audio_first_window_g1

0xbe5d,	// (0x000b4779) popup_call2_audio_first_window_g2_ParamLimits

0xbe5d,	// (0x000b4779) popup_call2_audio_first_window_g2

0xb553,	// (0x000b3e6f) popup_call2_audio_first_window_g3_ParamLimits

0xb553,	// (0x000b3e6f) popup_call2_audio_first_window_g3

0x0004,

0xf527,	// (0x000b7e43) popup_call2_audio_first_window_g_ParamLimits

0xf527,	// (0x000b7e43) popup_call2_audio_first_window_g

0xbf3b,	// (0x000b4857) popup_call2_audio_first_window_t1_ParamLimits

0xbf3b,	// (0x000b4857) popup_call2_audio_first_window_t1

0xc03e,	// (0x000b495a) popup_call2_audio_first_window_t4_ParamLimits

0xc03e,	// (0x000b495a) popup_call2_audio_first_window_t4

0xc121,	// (0x000b4a3d) popup_call2_audio_first_window_t5_ParamLimits

0xc121,	// (0x000b4a3d) popup_call2_audio_first_window_t5

0x0003,

0xf532,	// (0x000b7e4e) popup_call2_audio_first_window_t_ParamLimits

0xf532,	// (0x000b7e4e) popup_call2_audio_first_window_t

0xa773,	// (0x000b308f) bg_popup_call2_act_pane_g1

0xc7ce,	// (0x000b50ea) popup_cale_lunar_info_window_t1

0xc7dc,	// (0x000b50f8) popup_cale_lunar_info_window_t2

0xc7ea,	// (0x000b5106) popup_cale_lunar_info_window_t3

0xa520,	// (0x000b2e3c) bg_popup_call2_bubble_pane

0xc222,	// (0x000b4b3e) bg_popup_call2_in_pane_cp01_ParamLimits

0xc222,	// (0x000b4b3e) bg_popup_call2_in_pane_cp01

0x9cb1,	// (0x000b25cd) call_type_pane_cp02

0xc26a,	// (0x000b4b86) popup_call2_audio_out_window_g1_ParamLimits

0xc26a,	// (0x000b4b86) popup_call2_audio_out_window_g1

0xc296,	// (0x000b4bb2) popup_call2_audio_out_window_g2_ParamLimits

0xc296,	// (0x000b4bb2) popup_call2_audio_out_window_g2

0xc2be,	// (0x000b4bda) popup_call2_audio_out_window_g3_ParamLimits

0xc2be,	// (0x000b4bda) popup_call2_audio_out_window_g3

0x0003,

0xf53b,	// (0x000b7e57) popup_call2_audio_out_window_g_ParamLimits

0xf53b,	// (0x000b7e57) popup_call2_audio_out_window_g

0xc2f9,	// (0x000b4c15) popup_call2_audio_out_window_t1_ParamLimits

0xc2f9,	// (0x000b4c15) popup_call2_audio_out_window_t1

0xc358,	// (0x000b4c74) popup_call2_audio_out_window_t2_ParamLimits

0xc358,	// (0x000b4c74) popup_call2_audio_out_window_t2

0xc3ac,	// (0x000b4cc8) popup_call2_audio_out_window_t3_ParamLimits

0xc3ac,	// (0x000b4cc8) popup_call2_audio_out_window_t3

0xc3c2,	// (0x000b4cde) popup_call2_audio_out_window_t4_ParamLimits

0xc3c2,	// (0x000b4cde) popup_call2_audio_out_window_t4

0xc3d8,	// (0x000b4cf4) popup_call2_audio_out_window_t5_ParamLimits

0xc3d8,	// (0x000b4cf4) popup_call2_audio_out_window_t5

0x0005,

0xf544,	// (0x000b7e60) popup_call2_audio_out_window_t_ParamLimits

0xf544,	// (0x000b7e60) popup_call2_audio_out_window_t

0xc43c,	// (0x000b4d58) bg_popup_call2_in_pane_ParamLimits

0xc43c,	// (0x000b4d58) bg_popup_call2_in_pane

0xc498,	// (0x000b4db4) popup_call2_audio_in_window_g1_ParamLimits

0xc498,	// (0x000b4db4) popup_call2_audio_in_window_g1

0xc4d0,	// (0x000b4dec) popup_call2_audio_in_window_g2_ParamLimits

0xc4d0,	// (0x000b4dec) popup_call2_audio_in_window_g2

0xc508,	// (0x000b4e24) popup_call2_audio_in_window_g3_ParamLimits

0xc508,	// (0x000b4e24) popup_call2_audio_in_window_g3

0x0003,

0xf551,	// (0x000b7e6d) popup_call2_audio_in_window_g_ParamLimits

0xf551,	// (0x000b7e6d) popup_call2_audio_in_window_g

0xc560,	// (0x000b4e7c) popup_call2_audio_in_window_t1_ParamLimits

0xc560,	// (0x000b4e7c) popup_call2_audio_in_window_t1

0xc5e0,	// (0x000b4efc) popup_call2_audio_in_window_t2_ParamLimits

0xc5e0,	// (0x000b4efc) popup_call2_audio_in_window_t2

0xc660,	// (0x000b4f7c) popup_call2_audio_in_window_t3_ParamLimits

0xc660,	// (0x000b4f7c) popup_call2_audio_in_window_t3

0xc67a,	// (0x000b4f96) popup_call2_audio_in_window_t4_ParamLimits

0xc67a,	// (0x000b4f96) popup_call2_audio_in_window_t4

0xc68c,	// (0x000b4fa8) popup_call2_audio_in_window_t5_ParamLimits

0xc68c,	// (0x000b4fa8) popup_call2_audio_in_window_t5

0xc6a1,	// (0x000b4fbd) popup_call2_audio_in_window_t6_ParamLimits

0xc6a1,	// (0x000b4fbd) popup_call2_audio_in_window_t6

0x0005,

0xf55a,	// (0x000b7e76) popup_call2_audio_in_window_t_ParamLimits

0xf55a,	// (0x000b7e76) popup_call2_audio_in_window_t

0xa773,	// (0x000b308f) bg_popup_call2_in_pane_g1

0xc7f8,	// (0x000b5114) popup_cale_lunar_info_window_t4

0x0003,

0xf5d5,	// (0x000b7ef1) popup_cale_lunar_info_window_t

0xa77b,	// (0x000b3097) bg_popup_call2_rect_pane_ParamLimits

0xa77b,	// (0x000b3097) bg_popup_call2_rect_pane

0xa520,	// (0x000b2e3c) call2_cli_visual_graphic_pane

0xa520,	// (0x000b2e3c) call2_cli_visual_text_pane

0x9639,	// (0x000b1f55) smil_status_volume_pane_g3

0x0002,

0xa8a1,	// (0x000b31bd) call2_cli_visual_graphic_pane_g1

0xa8a1,	// (0x000b31bd) call2_cli_visual_graphic_pane_g2

0xa8a1,	// (0x000b31bd) call2_cli_visual_graphic_pane_g3

0x0002,

0xf567,	// (0x000b7e83) call2_cli_visual_graphic_pane_g

0xc6b6,	// (0x000b4fd2) bg_popup_call2_rect_pane_g1

0xa93f,	// (0x000b325b) bg_popup_call2_rect_pane_g2

0xc6be,	// (0x000b4fda) bg_popup_call2_rect_pane_g3

0xc6c6,	// (0x000b4fe2) bg_popup_call2_rect_pane_g4

0xc6ce,	// (0x000b4fea) bg_popup_call2_rect_pane_g5

0xc6d6,	// (0x000b4ff2) bg_popup_call2_rect_pane_g6

0xc6de,	// (0x000b4ffa) bg_popup_call2_rect_pane_g7

0xc6e6,	// (0x000b5002) bg_popup_call2_rect_pane_g8

0xc6ee,	// (0x000b500a) bg_popup_call2_rect_pane_g9

0x0008,

0xf56e,	// (0x000b7e8a) bg_popup_call2_rect_pane_g

0xc6f6,	// (0x000b5012) bg_popup_call2_bubble_pane_g1

0xc6fe,	// (0x000b501a) bg_popup_call2_bubble_pane_g2

0xc706,	// (0x000b5022) bg_popup_call2_bubble_pane_g3

0xc70e,	// (0x000b502a) bg_popup_call2_bubble_pane_g4

0xc716,	// (0x000b5032) bg_popup_call2_bubble_pane_g5

0xc71e,	// (0x000b503a) bg_popup_call2_bubble_pane_g6

0xc726,	// (0x000b5042) bg_popup_call2_bubble_pane_g7

0xc72e,	// (0x000b504a) bg_popup_call2_bubble_pane_g8

0xc736,	// (0x000b5052) bg_popup_call2_bubble_pane_g9

0x0008,

0xf581,	// (0x000b7e9d) bg_popup_call2_bubble_pane_g

0x0b94,	// (0x000a94b0) aid_cale_week_size_cell_pane

0x1223,	// (0x000a9b3f) aid_cams_cif_uncrop_pane_ParamLimits

0x1223,	// (0x000a9b3f) aid_cams_cif_uncrop_pane

0x13d8,	// (0x000a9cf4) aid_cams_size_cell_ParamLimits

0x13d8,	// (0x000a9cf4) aid_cams_size_cell

0x13ec,	// (0x000a9d08) grid_cams_pane_ParamLimits

0x1406,	// (0x000a9d22) linegrid_cams_pane_ParamLimits

0x15e5,	// (0x000a9f01) call_video_pane_t1

0x1603,	// (0x000a9f1f) call_video_pane_t2

0x0001,

0xf26e,	// (0x000b7b8a) call_video_pane_t

0x1a29,	// (0x000aa345) aid_cale_month_size_cell_pane_ParamLimits

0x1a29,	// (0x000aa345) aid_cale_month_size_cell_pane

0xf61e,	// (0x000b7f3a) smil_status_volume_pane_g

0x9646,	// (0x000b1f62) volume_smil_pane_ParamLimits

0x93e0,	// (0x000b1cfc) aid_popup2_width_pane

0x0b18,	// (0x000a9434) cell_qdial_pane_g4_ParamLimits

0x0b18,	// (0x000a9434) cell_qdial_pane_g4

0x2708,	// (0x000ab024) aid_blid_cardinal_pane_ParamLimits

0x2714,	// (0x000ab030) aid_blid_destination_pane_ParamLimits

0x2714,	// (0x000ab030) aid_blid_destination_pane

0xa77b,	// (0x000b3097) bg_popup_call_poc_act_pane_ParamLimits

0xa77b,	// (0x000b3097) bg_popup_call_poc_act_pane

0xa77b,	// (0x000b3097) bg_popup_call_poc_inact_pane_ParamLimits

0xa77b,	// (0x000b3097) bg_popup_call_poc_inact_pane

0xc73e,	// (0x000b505a) bg_popup_call_poc_act_pane_g1

0xc746,	// (0x000b5062) bg_popup_call_poc_act_pane_g2

0xc74e,	// (0x000b506a) bg_popup_call_poc_act_pane_g3

0xc70e,	// (0x000b502a) bg_popup_call_poc_act_pane_g4

0xc716,	// (0x000b5032) bg_popup_call_poc_act_pane_g5

0xc756,	// (0x000b5072) bg_popup_call_poc_act_pane_g6

0xc726,	// (0x000b5042) bg_popup_call_poc_act_pane_g7

0xc75e,	// (0x000b507a) bg_popup_call_poc_act_pane_g8

0xa520,	// (0x000b2e3c) main_usb_pane

0x95ed,	// (0x000b1f09) popup_cale_lunar_info_window

0x18cf,	// (0x000aa1eb) im_reading_pane_t1_ParamLimits

0xab42,	// (0x000b345e) list_im_pane_ParamLimits

0xab53,	// (0x000b346f) scroll_pane_cp07_ParamLimits

0xa520,	// (0x000b2e3c) grid_highlight_pane_cp012

0xa77b,	// (0x000b3097) mup_scale_pane_ParamLimits

0xb63f,	// (0x000b3f5b) main_usb_pane_g1_ParamLimits

0xb63f,	// (0x000b3f5b) main_usb_pane_g1

0x32b4,	// (0x000abbd0) main_usb_pane_g2_ParamLimits

0x32b4,	// (0x000abbd0) main_usb_pane_g2

0x0001,

0xf5be,	// (0x000b7eda) main_usb_pane_g_ParamLimits

0xf5be,	// (0x000b7eda) main_usb_pane_g

0x32ca,	// (0x000abbe6) main_usb_pane_t1_ParamLimits

0x32ca,	// (0x000abbe6) main_usb_pane_t1

0x32dc,	// (0x000abbf8) main_usb_pane_t2_ParamLimits

0x32dc,	// (0x000abbf8) main_usb_pane_t2

0x32ee,	// (0x000abc0a) main_usb_pane_t3_ParamLimits

0x32ee,	// (0x000abc0a) main_usb_pane_t3

0x3300,	// (0x000abc1c) main_usb_pane_t4_ParamLimits

0x3300,	// (0x000abc1c) main_usb_pane_t4

0x3312,	// (0x000abc2e) main_usb_pane_t5_ParamLimits

0x3312,	// (0x000abc2e) main_usb_pane_t5

0x3324,	// (0x000abc40) main_usb_pane_t6_ParamLimits

0x3324,	// (0x000abc40) main_usb_pane_t6

0x0005,

0xf5c3,	// (0x000b7edf) main_usb_pane_t_ParamLimits

0x26b7,	// (0x000aafd3) aid_text_placing

0x26c0,	// (0x000aafdc) main_location2_pane_t1_ParamLimits

0x26d2,	// (0x000aafee) main_location2_pane_t2_ParamLimits

0x26e4,	// (0x000ab000) main_location2_pane_t3_ParamLimits

0x26f6,	// (0x000ab012) main_location2_pane_t4_ParamLimits

0x26f6,	// (0x000ab012) main_location2_pane_t4

0xf3cf,	// (0x000b7ceb) main_location2_pane_t_ParamLimits

0xa7b7,	// (0x000b30d3) find_pinb_pane_g2_ParamLimits

0xa7b7,	// (0x000b30d3) find_pinb_pane_g2

0x0001,

0xf11f,	// (0x000b7a3b) find_pinb_pane_g_ParamLimits

0xf11f,	// (0x000b7a3b) find_pinb_pane_g

0xa7c3,	// (0x000b30df) find_pinb_pane_t1_ParamLimits

0xa7d5,	// (0x000b30f1) find_pinb_pane_t2_ParamLimits

0xf124,	// (0x000b7a40) find_pinb_pane_t_ParamLimits

0xa520,	// (0x000b2e3c) main_call3_pane

0x1f10,	// (0x000aa82c) cale_month_day_heading_pane_t1_ParamLimits

0x1f52,	// (0x000aa86e) cale_month_day_heading_pane_t2_ParamLimits

0x1f87,	// (0x000aa8a3) cale_month_day_heading_pane_t3_ParamLimits

0x1fbc,	// (0x000aa8d8) cale_month_day_heading_pane_t4_ParamLimits

0x1ff9,	// (0x000aa915) cale_month_day_heading_pane_t5_ParamLimits

0x203e,	// (0x000aa95a) cale_month_day_heading_pane_t6_ParamLimits

0x2083,	// (0x000aa99f) cale_month_day_heading_pane_t7_ParamLimits

0xf2a6,	// (0x000b7bc2) cale_month_day_heading_pane_t_ParamLimits

0xad9d,	// (0x000b36b9) smil_status_volume_pane

0x2dad,	// (0x000ab6c9) postcard_address_pane_ParamLimits

0x2dad,	// (0x000ab6c9) postcard_address_pane

0x2dbf,	// (0x000ab6db) postcard_message_pane_ParamLimits

0x2dbf,	// (0x000ab6db) postcard_message_pane

0x3291,	// (0x000abbad) call2_cli_visual_pane_t1_ParamLimits

0x3291,	// (0x000abbad) call2_cli_visual_pane_t1

0x3abe,	// (0x000ac3da) postcard_message_pane_t1_ParamLimits

0x3abe,	// (0x000ac3da) postcard_message_pane_t1

0x3aa7,	// (0x000ac3c3) postcard_address_pane_t1_ParamLimits

0x3aa7,	// (0x000ac3c3) postcard_address_pane_t1

0x3a93,	// (0x000ac3af) popup_call3_audio_in_window_ParamLimits

0x3a93,	// (0x000ac3af) popup_call3_audio_in_window

0x391e,	// (0x000ac23a) bg_popup_call3_in_pane_ParamLimits

0x391e,	// (0x000ac23a) bg_popup_call3_in_pane

0x3994,	// (0x000ac2b0) popup_call3_audio_in_window_g1_ParamLimits

0x3994,	// (0x000ac2b0) popup_call3_audio_in_window_g1

0x39b4,	// (0x000ac2d0) popup_call3_audio_in_window_g2_ParamLimits

0x39b4,	// (0x000ac2d0) popup_call3_audio_in_window_g2

0x39d4,	// (0x000ac2f0) popup_call3_audio_in_window_g3_ParamLimits

0x39d4,	// (0x000ac2f0) popup_call3_audio_in_window_g3

0x0003,

0xf625,	// (0x000b7f41) popup_call3_audio_in_window_g_ParamLimits

0xf625,	// (0x000b7f41) popup_call3_audio_in_window_g

0x3a05,	// (0x000ac321) popup_call3_audio_in_window_t1_ParamLimits

0x3a05,	// (0x000ac321) popup_call3_audio_in_window_t1

0x3a43,	// (0x000ac35f) popup_call3_audio_in_window_t2_ParamLimits

0x3a43,	// (0x000ac35f) popup_call3_audio_in_window_t2

0x3a81,	// (0x000ac39d) popup_call3_audio_in_window_t3_ParamLimits

0x3a81,	// (0x000ac39d) popup_call3_audio_in_window_t3

0x0002,

0xf62e,	// (0x000b7f4a) popup_call3_audio_in_window_t_ParamLimits

0xf62e,	// (0x000b7f4a) popup_call3_audio_in_window_t

0xaa23,	// (0x000b333f) bg_popup_call3_rect_pane

0xc6b6,	// (0x000b4fd2) bg_popup_call3_rect_pane_g1

0xa93f,	// (0x000b325b) bg_popup_call3_rect_pane_g2

0xc6be,	// (0x000b4fda) bg_popup_call3_rect_pane_g3

0xc6c6,	// (0x000b4fe2) bg_popup_call3_rect_pane_g4

0xc6ce,	// (0x000b4fea) bg_popup_call3_rect_pane_g5

0xc6d6,	// (0x000b4ff2) bg_popup_call3_rect_pane_g6

0xc6de,	// (0x000b4ffa) bg_popup_call3_rect_pane_g7

0x29ee,	// (0x000ab30a) mup_visualizer_osc_pane

0xb561,	// (0x000b3e7d) mup_visualizer_spec_pane

0x394e,	// (0x000ac26a) call3_video_qcif_pane_ParamLimits

0x394e,	// (0x000ac26a) call3_video_qcif_pane

0x3961,	// (0x000ac27d) call3_video_qcif_uncrop_pane_ParamLimits

0x3961,	// (0x000ac27d) call3_video_qcif_uncrop_pane

0x396f,	// (0x000ac28b) call3_video_subqcif_pane_ParamLimits

0x396f,	// (0x000ac28b) call3_video_subqcif_pane

0x3983,	// (0x000ac29f) call3_video_subqcif_uncrop_pane_ParamLimits

0x3983,	// (0x000ac29f) call3_video_subqcif_uncrop_pane

0x39f4,	// (0x000ac310) popup_call3_audio_in_window_g4_ParamLimits

0x39f4,	// (0x000ac310) popup_call3_audio_in_window_g4

0x390d,	// (0x000ac229) mup_spec_half_pane

0x3916,	// (0x000ac232) mup_spec_half_pane_cp

0xc95b,	// (0x000b5277) mup_osc_middle_pane

0xc964,	// (0x000b5280) mup_visualizer_osc_pane_g1

0x38ed,	// (0x000ac209) mup_spec_bar_pane_ParamLimits

0x38ed,	// (0x000ac209) mup_spec_bar_pane

0xc948,	// (0x000b5264) mup_spec_bar_pane_g1

0xc952,	// (0x000b526e) mup_spec_bar_pane_g2

0x0001,

0xf619,	// (0x000b7f35) mup_spec_bar_pane_g

0x0b94,	// (0x000a94b0) aid_cale_week_size_cell_pane_ParamLimits

0x0bae,	// (0x000a94ca) bg_cale_heading_pane_ParamLimits

0xa97c,	// (0x000b3298) bg_cale_pane_cp01_ParamLimits

0x0bc6,	// (0x000a94e2) cale_week_corner_pane_ParamLimits

0x0be5,	// (0x000a9501) cale_week_day_heading_pane_ParamLimits

0x0c02,	// (0x000a951e) cale_week_scroll_pane_g1_ParamLimits

0x0c15,	// (0x000a9531) cale_week_scroll_pane_g2_ParamLimits

0x0c2d,	// (0x000a9549) cale_week_scroll_pane_g3_ParamLimits

0x0c45,	// (0x000a9561) cale_week_scroll_pane_g4_ParamLimits

0x0c5d,	// (0x000a9579) cale_week_scroll_pane_g5_ParamLimits

0x0c7d,	// (0x000a9599) cale_week_scroll_pane_g6_ParamLimits

0x0c9d,	// (0x000a95b9) cale_week_scroll_pane_g7_ParamLimits

0x0cbd,	// (0x000a95d9) cale_week_scroll_pane_g8_ParamLimits

0x0ce1,	// (0x000a95fd) cale_week_scroll_pane_g9_ParamLimits

0x0cf9,	// (0x000a9615) cale_week_scroll_pane_g10_ParamLimits

0x0d11,	// (0x000a962d) cale_week_scroll_pane_g11_ParamLimits

0x0d29,	// (0x000a9645) cale_week_scroll_pane_g12_ParamLimits

0x0d41,	// (0x000a965d) cale_week_scroll_pane_g13_ParamLimits

0x0d41,	// (0x000a965d) cale_week_scroll_pane_g14_ParamLimits

0x0d41,	// (0x000a965d) cale_week_scroll_pane_g15_ParamLimits

0xf1b0,	// (0x000b7acc) cale_week_scroll_pane_g_ParamLimits

0x0d7d,	// (0x000a9699) cale_week_time_pane_ParamLimits

0x0da1,	// (0x000a96bd) grid_cale_week_pane_ParamLimits

0xa999,	// (0x000b32b5) listscroll_cale_week_pane_t1

0xa9ab,	// (0x000b32c7) scroll_pane_cp08_ParamLimits

0x1a89,	// (0x000aa3a5) cale_month_corner_pane_ParamLimits

0xad73,	// (0x000b368f) cale_month_pane_t1

0x1ea3,	// (0x000aa7bf) cale_month_week_pane_ParamLimits

0x24e8,	// (0x000aae04) popup_call_status_window_g1_ParamLimits

0x24fc,	// (0x000aae18) popup_call_status_window_g2_ParamLimits

0x2510,	// (0x000aae2c) popup_call_status_window_g3_ParamLimits

0xf356,	// (0x000b7c72) popup_call_status_window_g_ParamLimits

0xb123,	// (0x000b3a3f) aid_call2_pane

0x2c5a,	// (0x000ab576) msg_header_pane_g1

0x2dad,	// (0x000ab6c9) postcard_address2_pane_ParamLimits

0x2dad,	// (0x000ab6c9) postcard_address2_pane

0x2dbf,	// (0x000ab6db) postcard_message2_pane_ParamLimits

0x2dbf,	// (0x000ab6db) postcard_message2_pane

0x389d,	// (0x000ac1b9) message2_row_pane_ParamLimits

0x389d,	// (0x000ac1b9) message2_row_pane

0x38ba,	// (0x000ac1d6) address2_row_pane_ParamLimits

0x38ba,	// (0x000ac1d6) address2_row_pane

0xc916,	// (0x000b5232) postcard_message2_row_pane_g1

0xc91e,	// (0x000b523a) postcard_message2_row_pane_t1

0xc916,	// (0x000b5232) address2_row_pane_g1

0xc91e,	// (0x000b523a) address2_row_pane_t1

0x10db,	// (0x000a99f7) aid_size_cell_vorec

0xa520,	// (0x000b2e3c) main_rss_pane

0x38cd,	// (0x000ac1e9) rss_list_single_pane_ParamLimits

0x38cd,	// (0x000ac1e9) rss_list_single_pane

0xc92c,	// (0x000b5248) rss_list_single_pane_t1

0xc93a,	// (0x000b5256) rss_list_single_pane_t2

0x0001,

0xf614,	// (0x000b7f30) rss_list_single_pane_t

0xa520,	// (0x000b2e3c) main_camera2_pane

0xa520,	// (0x000b2e3c) main_video2_pane

0x3b37,	// (0x000ac453) cams_zoom_pane_cp2_ParamLimits

0x3b37,	// (0x000ac453) cams_zoom_pane_cp2

0x3b57,	// (0x000ac473) image2_vga_pane_ParamLimits

0x3b57,	// (0x000ac473) image2_vga_pane

0x3ba8,	// (0x000ac4c4) main_camera2_pane_g1_ParamLimits

0x3ba8,	// (0x000ac4c4) main_camera2_pane_g1

0x3bc8,	// (0x000ac4e4) main_camera2_pane_g2_ParamLimits

0x3bc8,	// (0x000ac4e4) main_camera2_pane_g2

0x3be8,	// (0x000ac504) main_camera2_pane_g3_ParamLimits

0x3be8,	// (0x000ac504) main_camera2_pane_g3

0x3c08,	// (0x000ac524) main_camera2_pane_g4_ParamLimits

0x3c08,	// (0x000ac524) main_camera2_pane_g4

0x3c28,	// (0x000ac544) main_camera2_pane_g5_ParamLimits

0x3c28,	// (0x000ac544) main_camera2_pane_g5

0x3c48,	// (0x000ac564) main_camera2_pane_g6_ParamLimits

0x3c48,	// (0x000ac564) main_camera2_pane_g6

0x3c68,	// (0x000ac584) main_camera2_pane_g7_ParamLimits

0x3c68,	// (0x000ac584) main_camera2_pane_g7

0x3c88,	// (0x000ac5a4) main_camera2_pane_g8_ParamLimits

0x3c88,	// (0x000ac5a4) main_camera2_pane_g8

0x0008,

0xf635,	// (0x000b7f51) main_camera2_pane_g_ParamLimits

0xf635,	// (0x000b7f51) main_camera2_pane_g

0x3cc8,	// (0x000ac5e4) main_camera2_pane_t1_ParamLimits

0x3cc8,	// (0x000ac5e4) main_camera2_pane_t1

0x3cfd,	// (0x000ac619) main_camera2_pane_t2_ParamLimits

0x3cfd,	// (0x000ac619) main_camera2_pane_t2

0x3d23,	// (0x000ac63f) main_camera2_pane_t3_ParamLimits

0x3d23,	// (0x000ac63f) main_camera2_pane_t3

0x3d81,	// (0x000ac69d) main_camera2_pane_t4_ParamLimits

0x3d81,	// (0x000ac69d) main_camera2_pane_t4

0x0006,

0xf648,	// (0x000b7f64) main_camera2_pane_t_ParamLimits

0xf648,	// (0x000b7f64) main_camera2_pane_t

0x3e13,	// (0x000ac72f) cams_zoom_pane_cp4_ParamLimits

0x3e13,	// (0x000ac72f) cams_zoom_pane_cp4

0x3e29,	// (0x000ac745) image2_cif_pane_ParamLimits

0x3e29,	// (0x000ac745) image2_cif_pane

0x3e54,	// (0x000ac770) image2_subqcif_pane_ParamLimits

0x3e54,	// (0x000ac770) image2_subqcif_pane

0x3e6e,	// (0x000ac78a) main_video2_pane_g1_ParamLimits

0x3e6e,	// (0x000ac78a) main_video2_pane_g1

0x3e88,	// (0x000ac7a4) main_video2_pane_g2_ParamLimits

0x3e88,	// (0x000ac7a4) main_video2_pane_g2

0x3e9e,	// (0x000ac7ba) main_video2_pane_g3_ParamLimits

0x3e9e,	// (0x000ac7ba) main_video2_pane_g3

0x3eb4,	// (0x000ac7d0) main_video2_pane_g4_ParamLimits

0x3eb4,	// (0x000ac7d0) main_video2_pane_g4

0x3eca,	// (0x000ac7e6) main_video2_pane_g5_ParamLimits

0x3eca,	// (0x000ac7e6) main_video2_pane_g5

0x3ee0,	// (0x000ac7fc) main_video2_pane_g6_ParamLimits

0x3ee0,	// (0x000ac7fc) main_video2_pane_g6

0x0005,

0xf657,	// (0x000b7f73) main_video2_pane_g_ParamLimits

0xf657,	// (0x000b7f73) main_video2_pane_g

0x3efa,	// (0x000ac816) main_video2_pane_t1_ParamLimits

0x3efa,	// (0x000ac816) main_video2_pane_t1

0x3f1e,	// (0x000ac83a) main_video2_pane_t2_ParamLimits

0x3f1e,	// (0x000ac83a) main_video2_pane_t2

0x3f6c,	// (0x000ac888) main_video2_pane_t3_ParamLimits

0x3f6c,	// (0x000ac888) main_video2_pane_t3

0x0002,

0xf664,	// (0x000b7f80) main_video2_pane_t_ParamLimits

0xf664,	// (0x000b7f80) main_video2_pane_t

0x33df,	// (0x000abcfb) call_muted_g2

0x0001,

0xf606,	// (0x000b7f22) call_muted_g

0xa520,	// (0x000b2e3c) main_mup2_pane

0x3fb4,	// (0x000ac8d0) main_mup2_pane_g1_ParamLimits

0x3fb4,	// (0x000ac8d0) main_mup2_pane_g1

0x3fc0,	// (0x000ac8dc) main_mup2_pane_g2_ParamLimits

0x3fc0,	// (0x000ac8dc) main_mup2_pane_g2

0x96b4,	// (0x000b1fd0) main_mup_pane_g13_cp1

0x96bc,	// (0x000b1fd8) mup_volume_pane_cp1

0x3fdc,	// (0x000ac8f8) main_mup2_pane_g4_ParamLimits

0x3fdc,	// (0x000ac8f8) main_mup2_pane_g4

0x3fee,	// (0x000ac90a) main_mup2_pane_g5_ParamLimits

0x3fee,	// (0x000ac90a) main_mup2_pane_g5

0x4000,	// (0x000ac91c) main_mup2_pane_g6_ParamLimits

0x4000,	// (0x000ac91c) main_mup2_pane_g6

0x4012,	// (0x000ac92e) main_mup2_pane_g7_ParamLimits

0x4012,	// (0x000ac92e) main_mup2_pane_g7

0x0006,

0xf66b,	// (0x000b7f87) main_mup2_pane_g_ParamLimits

0xf66b,	// (0x000b7f87) main_mup2_pane_g

0x402a,	// (0x000ac946) main_mup2_pane_t1_ParamLimits

0x402a,	// (0x000ac946) main_mup2_pane_t1

0x4040,	// (0x000ac95c) main_mup2_pane_t2_ParamLimits

0x4040,	// (0x000ac95c) main_mup2_pane_t2

0x4056,	// (0x000ac972) main_mup2_pane_t3_ParamLimits

0x4056,	// (0x000ac972) main_mup2_pane_t3

0x406c,	// (0x000ac988) main_mup2_pane_t4_ParamLimits

0x406c,	// (0x000ac988) main_mup2_pane_t4

0x4084,	// (0x000ac9a0) main_mup2_pane_t5_ParamLimits

0x4084,	// (0x000ac9a0) main_mup2_pane_t5

0x409c,	// (0x000ac9b8) main_mup2_pane_t6_ParamLimits

0x409c,	// (0x000ac9b8) main_mup2_pane_t6

0x0005,

0xf67a,	// (0x000b7f96) main_mup2_pane_t_ParamLimits

0xf67a,	// (0x000b7f96) main_mup2_pane_t

0x40cc,	// (0x000ac9e8) mup2_visualizer_pane_ParamLimits

0x40cc,	// (0x000ac9e8) mup2_visualizer_pane

0x40fa,	// (0x000aca16) mup_progress_pane_cp_ParamLimits

0x40fa,	// (0x000aca16) mup_progress_pane_cp

0x969f,	// (0x000b1fbb) mup_volume_pane_cp_ParamLimits

0x969f,	// (0x000b1fbb) mup_volume_pane_cp

0x410e,	// (0x000aca2a) mup2_visualizer_pane_g1_ParamLimits

0x410e,	// (0x000aca2a) mup2_visualizer_pane_g1

0xc99b,	// (0x000b52b7) mup2_visualizer_pane_g2_ParamLimits

0xc99b,	// (0x000b52b7) mup2_visualizer_pane_g2

0x4125,	// (0x000aca41) mup2_visualizer_pane_g3_ParamLimits

0x4125,	// (0x000aca41) mup2_visualizer_pane_g3

0x0002,

0xf687,	// (0x000b7fa3) mup2_visualizer_pane_g_ParamLimits

0xf687,	// (0x000b7fa3) mup2_visualizer_pane_g

0xb788,	// (0x000b40a4) aid_size_cell_fmradio

0x3591,	// (0x000abead) aid_height_parent_landcape

0xabd1,	// (0x000b34ed) wml_content_pane_cp

0xabd9,	// (0x000b34f5) wml_tabs_pane

0xabe2,	// (0x000b34fe) popup_wml_miniature_window

0xabea,	// (0x000b3506) scroll_pane_cp021

0xabfe,	// (0x000b351a) wml_content_pane_comp8

0xa520,	// (0x000b2e3c) bg_popup_sub_pane_cp05

0xc9b9,	// (0x000b52d5) popup_wml_miniature_window_g1

0xc9c1,	// (0x000b52dd) wml_miniature_view_pane

0x4131,	// (0x000aca4d) aid_size_wml_view

0x4139,	// (0x000aca55) wml_miniature_view_pane_g1

0x4142,	// (0x000aca5e) wml_miniature_view_pane_g2

0x414b,	// (0x000aca67) wml_miniature_view_pane_g3

0x4153,	// (0x000aca6f) wml_miniature_view_pane_g4

0x415b,	// (0x000aca77) wml_miniature_view_pane_g5

0x4163,	// (0x000aca7f) wml_miniature_view_pane_g6

0x416b,	// (0x000aca87) wml_miniature_view_pane_g7

0x4173,	// (0x000aca8f) wml_miniature_view_pane_g8

0x0007,

0xf68e,	// (0x000b7faa) wml_miniature_view_pane_g

0xc9c9,	// (0x000b52e5) background_graphic_ParamLimits

0xc9c9,	// (0x000b52e5) background_graphic

0xc9d5,	// (0x000b52f1) wml_tabs_2_pane

0xc9de,	// (0x000b52fa) wml_tabs_3_pane_ParamLimits

0xc9de,	// (0x000b52fa) wml_tabs_3_pane

0xc9f0,	// (0x000b530c) wml_tabs_4_pane_ParamLimits

0xc9f0,	// (0x000b530c) wml_tabs_4_pane

0xca06,	// (0x000b5322) wml_tabs_5_pane_ParamLimits

0xca06,	// (0x000b5322) wml_tabs_5_pane

0xca2c,	// (0x000b5348) wml_tabs_pane_g2_ParamLimits

0xca2c,	// (0x000b5348) wml_tabs_pane_g2

0xca40,	// (0x000b535c) wml_tabs_pane_g3_ParamLimits

0xca40,	// (0x000b535c) wml_tabs_pane_g3

0x417b,	// (0x000aca97) wml_tabs_2_active_pane_ParamLimits

0x417b,	// (0x000aca97) wml_tabs_2_active_pane

0x418f,	// (0x000acaab) wml_tabs_2_passive_pane_ParamLimits

0x418f,	// (0x000acaab) wml_tabs_2_passive_pane

0x41a3,	// (0x000acabf) wml_tabs_3_active_pane_cp_ParamLimits

0x41a3,	// (0x000acabf) wml_tabs_3_active_pane_cp

0x41b8,	// (0x000acad4) wml_tabs_3_passive_pane_ParamLimits

0x41b8,	// (0x000acad4) wml_tabs_3_passive_pane

0x41cb,	// (0x000acae7) wml_tabs_3_passive_pane_cp_ParamLimits

0x41cb,	// (0x000acae7) wml_tabs_3_passive_pane_cp

0x41e2,	// (0x000acafe) tabs_4_active_pane

0x41ea,	// (0x000acb06) tabs_4_passive_pane

0x41f4,	// (0x000acb10) tabs_4_passive_pane_cp

0x41fc,	// (0x000acb18) tabs_4_passive_pane_cp2

0x32ac,	// (0x000abbc8) aid_height_text

0x29c0,	// (0x000ab2dc) mup_volume_cont_pane_ParamLimits

0x29c0,	// (0x000ab2dc) mup_volume_cont_pane

0x07b9,	// (0x000a90d5) aid_size_cell_pinb

0x07c3,	// (0x000a90df) aid_size_list_pinb

0x40e6,	// (0x000aca02) mup2_volume_cont_pane_ParamLimits

0x40e6,	// (0x000aca02) mup2_volume_cont_pane

0x968b,	// (0x000b1fa7) mup2_volume_cont_pane_g1_ParamLimits

0x968b,	// (0x000b1fa7) mup2_volume_cont_pane_g1

0x047b,	// (0x000a8d97) aid_size_cell_touch_ParamLimits

0x047b,	// (0x000a8d97) aid_size_cell_touch

0x06a8,	// (0x000a8fc4) touch_pane_ParamLimits

0x06a8,	// (0x000a8fc4) touch_pane

0x9454,	// (0x000b1d70) main_rss2_pane

0xca5d,	// (0x000b5379) listscroll_rss2_pane

0xca66,	// (0x000b5382) rss2_navigation_pane

0xca6e,	// (0x000b538a) list_rss2_pane

0xb248,	// (0x000b3b64) scroll_pane_cp22

0xca76,	// (0x000b5392) rss2_navigation_pane_g1

0xca7f,	// (0x000b539b) rss2_navigation_pane_g2

0xca87,	// (0x000b53a3) rss2_navigation_pane_g3

0x0002,

0xf69f,	// (0x000b7fbb) rss2_navigation_pane_g

0xca8f,	// (0x000b53ab) rss2_navigation_pane_t1

0x4206,	// (0x000acb22) rss2_list_single_pane_ParamLimits

0x4206,	// (0x000acb22) rss2_list_single_pane

0xca9d,	// (0x000b53b9) rss2_list_single_pane_t2

0xcaab,	// (0x000b53c7) rss2_list_single_pane_t3_ParamLimits

0xcaab,	// (0x000b53c7) rss2_list_single_pane_t3

0xcac8,	// (0x000b53e4) rss2_list_single_pane_t4

0x22f5,	// (0x000aac11) smil_status_pane_g1

0x9446,	// (0x000b1d62) main_image2_pane_ParamLimits

0x9446,	// (0x000b1d62) main_image2_pane

0x3ca8,	// (0x000ac5c4) main_camera2_pane_g9_ParamLimits

0x3ca8,	// (0x000ac5c4) main_camera2_pane_g9

0x3dd6,	// (0x000ac6f2) main_camera2_pane_t5_ParamLimits

0x3dd6,	// (0x000ac6f2) main_camera2_pane_t5

0x965b,	// (0x000b1f77) main_camera2_pane_t6_ParamLimits

0x965b,	// (0x000b1f77) main_camera2_pane_t6

0x421c,	// (0x000acb38) main_image2_pane_g1_ParamLimits

0x421c,	// (0x000acb38) main_image2_pane_g1

0x2fe7,	// (0x000ab903) smil2_video_pane_ParamLimits

0x2fe7,	// (0x000ab903) smil2_video_pane

0x93fc,	// (0x000b1d18) aid_zoom_text_primary_cp

0x943c,	// (0x000b1d58) popup_preview_fixed_window

0xab1c,	// (0x000b3438) im_reading_pane_g1

0x3b1f,	// (0x000ac43b) cams2_bc_adjust_pane_cp_ParamLimits

0x3b1f,	// (0x000ac43b) cams2_bc_adjust_pane_cp

0x3e05,	// (0x000ac721) cams2_bc_adjust_pane_ParamLimits

0x3e05,	// (0x000ac721) cams2_bc_adjust_pane

0xd98a,	// (0x000b62a6) cams2_bc_adjust_pane_g1

0x96c4,	// (0x000b1fe0) cams2_slider_pane

0x96cd,	// (0x000b1fe9) cams2_slider_pane_g1

0x96d6,	// (0x000b1ff2) cams2_slider_pane_g2

0x0006,

0xf6a6,	// (0x000b7fc2) cams2_slider_pane_g

0x08ab,	// (0x000a91c7) calc_display_pane_ParamLimits

0x08d3,	// (0x000a91ef) calc_paper_pane_ParamLimits

0x08f6,	// (0x000a9212) grid_calc_pane_ParamLimits

0x9580,	// (0x000b1e9c) popup_clock_digital_window_t1_ParamLimits

0xb725,	// (0x000b4041) main_image_pane_t1

0x088d,	// (0x000a91a9) aid_size_cell_calc_ParamLimits

0x088d,	// (0x000a91a9) aid_size_cell_calc

0x35e9,	// (0x000abf05) popup_blid_sat_info2_window_ParamLimits

0x35e9,	// (0x000abf05) popup_blid_sat_info2_window

0xcade,	// (0x000b53fa) aid_size_cell_blid

0xcae6,	// (0x000b5402) bg_popup_window_pane_cp07

0xcb09,	// (0x000b5425) grid_popup_blid_pane

0xcb13,	// (0x000b542f) heading_pane_cp05_ParamLimits

0xcb13,	// (0x000b542f) heading_pane_cp05

0xcbdd,	// (0x000b54f9) cell_popup_blid_pane_ParamLimits

0xcbdd,	// (0x000b54f9) cell_popup_blid_pane

0xcc01,	// (0x000b551d) cell_popup_blid_pane_g1

0xcc09,	// (0x000b5525) cell_popup_blid_pane_t1

0x40b6,	// (0x000ac9d2) mup2_indicator_pane_ParamLimits

0x40b6,	// (0x000ac9d2) mup2_indicator_pane

0xaa23,	// (0x000b333f) mup2_visualizer_osc_pane

0xc9a7,	// (0x000b52c3) mup2_visualizer_spec_pane_ParamLimits

0xc9a7,	// (0x000b52c3) mup2_visualizer_spec_pane

0x4232,	// (0x000acb4e) mup2_spec_half_pane

0x423b,	// (0x000acb57) mup2_spec_half_pane_cp

0x4243,	// (0x000acb5f) mup2_spec_bar_pane_ParamLimits

0x4243,	// (0x000acb5f) mup2_spec_bar_pane

0xc948,	// (0x000b5264) mup2_spec_bar_pane_g1

0xc952,	// (0x000b526e) mup2_spec_bar_pane_g2

0x0001,

0xf619,	// (0x000b7f35) mup2_spec_bar_pane_g

0x4263,	// (0x000acb7f) mup2_osc_middle_pane

0xc964,	// (0x000b5280) mup2_visualizer_osc_pane_g1

0x9be2,	// (0x000b24fe) popup_number_entry_window_t1_ParamLimits

0x9bf5,	// (0x000b2511) popup_number_entry_window_t2_ParamLimits

0x9c07,	// (0x000b2523) popup_number_entry_window_t3_ParamLimits

0x06fa,	// (0x000a9016) popup_number_entry_window_t5_ParamLimits

0x06fa,	// (0x000a9016) popup_number_entry_window_t5

0xf0ca,	// (0x000b79e6) popup_number_entry_window_t_ParamLimits

0x9c19,	// (0x000b2535) text_title_cp2_ParamLimits

0x95bf,	// (0x000b1edb) aid_hotspot_pointer_text2_pane

0x95d9,	// (0x000b1ef5) main_viewer_pane_g9_ParamLimits

0x95d9,	// (0x000b1ef5) main_viewer_pane_g9

0xad73,	// (0x000b368f) cale_month_pane_t1_ParamLimits

0xadb0,	// (0x000b36cc) bg_cale_pane_ParamLimits

0xadc8,	// (0x000b36e4) list_cale_pane_ParamLimits

0xadd9,	// (0x000b36f5) listscroll_cale_day_pane_t1

0xadeb,	// (0x000b3707) scroll_pane_cp09_ParamLimits

0x29f6,	// (0x000ab312) main_mup_eq_pane_t1_ParamLimits

0x29f6,	// (0x000ab312) main_mup_eq_pane_t1

0x2a10,	// (0x000ab32c) main_mup_eq_pane_t2_ParamLimits

0x2a10,	// (0x000ab32c) main_mup_eq_pane_t2

0x2a2a,	// (0x000ab346) main_mup_eq_pane_t3_ParamLimits

0x2a2a,	// (0x000ab346) main_mup_eq_pane_t3

0x2a46,	// (0x000ab362) main_mup_eq_pane_t4_ParamLimits

0x2a46,	// (0x000ab362) main_mup_eq_pane_t4

0x2a62,	// (0x000ab37e) main_mup_eq_pane_t5_ParamLimits

0x2a62,	// (0x000ab37e) main_mup_eq_pane_t5

0x2a7e,	// (0x000ab39a) main_mup_eq_pane_t6_ParamLimits

0x2a7e,	// (0x000ab39a) main_mup_eq_pane_t6

0x2a92,	// (0x000ab3ae) main_mup_eq_pane_t7_ParamLimits

0x2a92,	// (0x000ab3ae) main_mup_eq_pane_t7

0x2aa6,	// (0x000ab3c2) main_mup_eq_pane_t8_ParamLimits

0x2aa6,	// (0x000ab3c2) main_mup_eq_pane_t8

0x2aba,	// (0x000ab3d6) main_mup_eq_pane_t9_ParamLimits

0x2aba,	// (0x000ab3d6) main_mup_eq_pane_t9

0x2ad4,	// (0x000ab3f0) main_mup_eq_pane_t10_ParamLimits

0x2ad4,	// (0x000ab3f0) main_mup_eq_pane_t10

0x0009,

0xf455,	// (0x000b7d71) main_mup_eq_pane_t_ParamLimits

0xf455,	// (0x000b7d71) main_mup_eq_pane_t

0x2b83,	// (0x000ab49f) mup_equalizer_pane_cp5_ParamLimits

0x2b97,	// (0x000ab4b3) mup_equalizer_pane_cp6_ParamLimits

0x2bab,	// (0x000ab4c7) mup_equalizer_pane_cp7_ParamLimits

0x9454,	// (0x000b1d70) main_gallery_pane

0xc96d,	// (0x000b5289) smil2_volume_pane

0xc975,	// (0x000b5291) smil_status_volume_pane_g1_ParamLimits

0xc988,	// (0x000b52a4) smil_status_volume_pane_g2_ParamLimits

0x9639,	// (0x000b1f55) smil_status_volume_pane_g3_ParamLimits

0xf61e,	// (0x000b7f3a) smil_status_volume_pane_g_ParamLimits

0xcae6,	// (0x000b5402) bg_popup_window_pane_cp07_ParamLimits

0xcaf4,	// (0x000b5410) blid_firmament_pane

0x426c,	// (0x000acb88) aid_size_cell_gallery_ParamLimits

0x426c,	// (0x000acb88) aid_size_cell_gallery

0x4282,	// (0x000acb9e) grid_gallery_pane_ParamLimits

0x4282,	// (0x000acb9e) grid_gallery_pane

0x429b,	// (0x000acbb7) cell_gallery_pane_ParamLimits

0x429b,	// (0x000acbb7) cell_gallery_pane

0xcc17,	// (0x000b5533) bg_cell_gallery_focus_pane_ParamLimits

0xcc17,	// (0x000b5533) bg_cell_gallery_focus_pane

0xcc29,	// (0x000b5545) cell_gallery_pane_g1_ParamLimits

0xcc29,	// (0x000b5545) cell_gallery_pane_g1

0x42e4,	// (0x000acc00) cell_gallery_pane_g2_ParamLimits

0x42e4,	// (0x000acc00) cell_gallery_pane_g2

0x42f1,	// (0x000acc0d) cell_gallery_pane_g3_ParamLimits

0x42f1,	// (0x000acc0d) cell_gallery_pane_g3

0xcc35,	// (0x000b5551) cell_gallery_pane_g4_ParamLimits

0xcc35,	// (0x000b5551) cell_gallery_pane_g4

0x0003,

0xf6cc,	// (0x000b7fe8) cell_gallery_pane_g_ParamLimits

0xf6cc,	// (0x000b7fe8) cell_gallery_pane_g

0xcc41,	// (0x000b555d) bg_cell_gallery_focus_pane_g1

0xcc49,	// (0x000b5565) bg_cell_gallery_focus_pane_g2

0xcc51,	// (0x000b556d) bg_cell_gallery_focus_pane_g3

0xcc59,	// (0x000b5575) bg_cell_gallery_focus_pane_g4

0xcc61,	// (0x000b557d) bg_cell_gallery_focus_pane_g5

0xcc69,	// (0x000b5585) bg_cell_gallery_focus_pane_g6

0xcc71,	// (0x000b558d) bg_cell_gallery_focus_pane_g7

0xcc79,	// (0x000b5595) bg_cell_gallery_focus_pane_g8

0x0007,

0xf6d5,	// (0x000b7ff1) bg_cell_gallery_focus_pane_g

0xcc81,	// (0x000b559d) aid_firma_cardinal

0xcc95,	// (0x000b55b1) blid_firmament_pane_t1

0xccac,	// (0x000b55c8) blid_firmament_pane_t2

0xccc3,	// (0x000b55df) blid_firmament_pane_t3

0xccda,	// (0x000b55f6) blid_firmament_pane_t4

0x0003,

0xf6e6,	// (0x000b8002) blid_firmament_pane_t

0xccf1,	// (0x000b560d) blid_sat_info_pane

0xcd01,	// (0x000b561d) blid_sat_info_pane_g1

0xcd01,	// (0x000b561d) blid_sat_info_pane_g2

0x0001,

0xf6ef,	// (0x000b800b) blid_sat_info_pane_g

0xcd0b,	// (0x000b5627) blid_sat_info_pane_t1

0xcd19,	// (0x000b5635) smil2_volume_content_pane

0xcd22,	// (0x000b563e) smil2_volume_pane_g1

0xcd2a,	// (0x000b5646) smil2_volume_content_pane_g1

0xcd33,	// (0x000b564f) smil2_volume_content_pane_g2

0xcd3c,	// (0x000b5658) smil2_volume_content_pane_g3

0xcd45,	// (0x000b5661) smil2_volume_content_pane_g4

0xcd4e,	// (0x000b566a) smil2_volume_content_pane_g5

0xcd57,	// (0x000b5673) smil2_volume_content_pane_g6

0xcd60,	// (0x000b567c) smil2_volume_content_pane_g7

0xcd69,	// (0x000b5685) smil2_volume_content_pane_g8

0xcd72,	// (0x000b568e) smil2_volume_content_pane_g9

0xcd7b,	// (0x000b5697) smil2_volume_content_pane_g10

0x0009,

0xf6f4,	// (0x000b8010) smil2_volume_content_pane_g

0x0e55,	// (0x000a9771) cale_week_day_heading_pane_t1_ParamLimits

0x0e7f,	// (0x000a979b) cale_week_day_heading_pane_t2_ParamLimits

0x0eae,	// (0x000a97ca) cale_week_day_heading_pane_t3_ParamLimits

0x0edd,	// (0x000a97f9) cale_week_day_heading_pane_t4_ParamLimits

0x0f0c,	// (0x000a9828) cale_week_day_heading_pane_t5_ParamLimits

0x0f43,	// (0x000a985f) cale_week_day_heading_pane_t6_ParamLimits

0x0f7a,	// (0x000a9896) cale_week_day_heading_pane_t7_ParamLimits

0xf1d1,	// (0x000b7aed) cale_week_day_heading_pane_t_ParamLimits

0xa9c8,	// (0x000b32e4) bg_cale_side_pane_ParamLimits

0x0fa4,	// (0x000a98c0) cale_week_time_pane_t1_ParamLimits

0x0fbe,	// (0x000a98da) cale_week_time_pane_t2_ParamLimits

0x0fd8,	// (0x000a98f4) cale_week_time_pane_t3_ParamLimits

0x0ff2,	// (0x000a990e) cale_week_time_pane_t4_ParamLimits

0x100c,	// (0x000a9928) cale_week_time_pane_t5_ParamLimits

0x1026,	// (0x000a9942) cale_week_time_pane_t6_ParamLimits

0x1040,	// (0x000a995c) cale_week_time_pane_t7_ParamLimits

0x105a,	// (0x000a9976) cale_week_time_pane_t8_ParamLimits

0xf1e0,	// (0x000b7afc) cale_week_time_pane_t_ParamLimits

0x107a,	// (0x000a9996) cell_cale_week_pane_g2_ParamLimits

0xa9c8,	// (0x000b32e4) bg_cale_side_pane_cp01_ParamLimits

0x20d0,	// (0x000aa9ec) cale_month_week_pane_t1_ParamLimits

0x20e9,	// (0x000aaa05) cale_month_week_pane_t2_ParamLimits

0x2102,	// (0x000aaa1e) cale_month_week_pane_t3_ParamLimits

0x211b,	// (0x000aaa37) cale_month_week_pane_t4_ParamLimits

0x2134,	// (0x000aaa50) cale_month_week_pane_t5_ParamLimits

0x214d,	// (0x000aaa69) cale_month_week_pane_t6_ParamLimits

0xf2b5,	// (0x000b7bd1) cale_month_week_pane_t_ParamLimits

0x9500,	// (0x000b1e1c) cell_cale_month_pane_g1_ParamLimits

0x9454,	// (0x000b1d70) main_cale_event_viewer_pane

0x9bb8,	// (0x000b24d4) listscroll_cale_event_viewer_pane

0xcd84,	// (0x000b56a0) list_cale_ev_pane

0xcd8c,	// (0x000b56a8) scroll_pane_cp023

0xcd98,	// (0x000b56b4) field_cale_ev_pane_ParamLimits

0xcd98,	// (0x000b56b4) field_cale_ev_pane

0xcdb6,	// (0x000b56d2) field_cale_ev_content_pane_ParamLimits

0xcdb6,	// (0x000b56d2) field_cale_ev_content_pane

0xcdc2,	// (0x000b56de) field_cale_ev_pane_g1_ParamLimits

0xcdc2,	// (0x000b56de) field_cale_ev_pane_g1

0xcdce,	// (0x000b56ea) field_cale_ev_pane_g2_ParamLimits

0xcdce,	// (0x000b56ea) field_cale_ev_pane_g2

0xcde6,	// (0x000b5702) field_cale_ev_pane_g3_ParamLimits

0xcde6,	// (0x000b5702) field_cale_ev_pane_g3

0x0002,

0xf709,	// (0x000b8025) field_cale_ev_pane_g_ParamLimits

0xf709,	// (0x000b8025) field_cale_ev_pane_g

0xcdfe,	// (0x000b571a) field_cale_ev_pane_t1_ParamLimits

0xcdfe,	// (0x000b571a) field_cale_ev_pane_t1

0xab24,	// (0x000b3440) field_cale_ev_content_pane_t1_ParamLimits

0xab24,	// (0x000b3440) field_cale_ev_content_pane_t1

0xb60b,	// (0x000b3f27) bg_button_pane_cp01

0x0b82,	// (0x000a949e) listscroll_cale_week_pane_ParamLimits

0xa973,	// (0x000b328f) popup_toolbar_window_cp01

0xa999,	// (0x000b32b5) listscroll_cale_week_pane_t1_ParamLimits

0x0b82,	// (0x000a949e) listscroll_cale_day_pane_ParamLimits

0xa973,	// (0x000b328f) popup_toolbar_window_cp02

0xadd9,	// (0x000b36f5) listscroll_cale_day_pane_t1_ParamLimits

0x35af,	// (0x000abecb) main_cale_month_pane_ParamLimits

0x9624,	// (0x000b1f40) popup_toolbar_window_cp03_ParamLimits

0x9624,	// (0x000b1f40) popup_toolbar_window_cp03

0x2eaf,	// (0x000ab7cb) main_image_pane_g2_ParamLimits

0x2eaf,	// (0x000ab7cb) main_image_pane_g2

0x2ec0,	// (0x000ab7dc) main_image_pane_g3_ParamLimits

0x2ec0,	// (0x000ab7dc) main_image_pane_g3

0x0002,

0xf4e7,	// (0x000b7e03) main_image_pane_g_ParamLimits

0xf4e7,	// (0x000b7e03) main_image_pane_g

0xb725,	// (0x000b4041) main_image_pane_t1_ParamLimits

0x2ed1,	// (0x000ab7ed) main_image_pane_t2_ParamLimits

0x2ed1,	// (0x000ab7ed) main_image_pane_t2

0x2ee3,	// (0x000ab7ff) main_image_pane_t3_ParamLimits

0x2ee3,	// (0x000ab7ff) main_image_pane_t3

0x2f0b,	// (0x000ab827) main_image_pane_t4_ParamLimits

0x2f0b,	// (0x000ab827) main_image_pane_t4

0x0003,

0xf4ee,	// (0x000b7e0a) main_image_pane_t_ParamLimits

0xf4ee,	// (0x000b7e0a) main_image_pane_t

0x2f2b,	// (0x000ab847) popup_image_details_window_cp01

0x2f35,	// (0x000ab851) popup_toobar_trans_pane_cp01_ParamLimits

0x2f35,	// (0x000ab851) popup_toobar_trans_pane_cp01

0x36ba,	// (0x000abfd6) popup_image_details_window_ParamLimits

0x36ba,	// (0x000abfd6) popup_image_details_window

0x95f7,	// (0x000b1f13) popup_image_focus_window

0x3ad9,	// (0x000ac3f5) camera2_autofocus_pane_ParamLimits

0x3ad9,	// (0x000ac3f5) camera2_autofocus_pane

0x9bb8,	// (0x000b24d4) bg_popup_sub_pane_cp06

0xce15,	// (0x000b5731) popup_image_focus_window_g1

0xce1d,	// (0x000b5739) popup_image_focus_window_g2

0xce25,	// (0x000b5741) popup_image_focus_window_g3

0xce2d,	// (0x000b5749) popup_image_focus_window_g4

0x0003,

0xf710,	// (0x000b802c) popup_image_focus_window_g

0xce35,	// (0x000b5751) popup_image_focus_window_t1

0xce43,	// (0x000b575f) popup_image_focus_window_t2

0xce53,	// (0x000b576f) popup_image_focus_window_t3

0x0002,

0xf719,	// (0x000b8035) popup_image_focus_window_t

0xce61,	// (0x000b577d) camera2_autofocus_pane_g1

0xb2b7,	// (0x000b3bd3) bg_tb_trans_pane_cp01

0xce6f,	// (0x000b578b) popup_image_details_window_g1

0xce82,	// (0x000b579e) popup_image_details_window_g2

0x0002,

0xf72b,	// (0x000b8047) popup_image_details_window_g

0xceab,	// (0x000b57c7) popup_image_details_window_t1

0xcebd,	// (0x000b57d9) popup_image_details_window_t2

0xced6,	// (0x000b57f2) popup_image_details_window_t3

0xceea,	// (0x000b5806) popup_image_details_window_t4

0xcf05,	// (0x000b5821) popup_image_details_window_t5

0x0004,

0xf732,	// (0x000b804e) popup_image_details_window_t

0xa838,	// (0x000b3154) bg_calc_paper_pane_ParamLimits

0x9454,	// (0x000b1d70) grid_highlight_pane_cp013

0x9466,	// (0x000b1d82) list_calc_pane_ParamLimits

0x9478,	// (0x000b1d94) scroll_pane_cp024

0xa84c,	// (0x000b3168) bg_calc_display_pane_ParamLimits

0x09f4,	// (0x000a9310) calc_display_pane_t1_ParamLimits

0x0a06,	// (0x000a9322) calc_display_pane_t2_ParamLimits

0x9480,	// (0x000b1d9c) calc_display_pane_t3_ParamLimits

0xf151,	// (0x000b7a6d) calc_display_pane_t_ParamLimits

0x0ac6,	// (0x000a93e2) cell_calc_pane_g2

0x0001,

0xf16e,	// (0x000b7a8a) cell_calc_pane_g

0x0acf,	// (0x000a93eb) cell_calc_pane_t1

0xa8ab,	// (0x000b31c7) grid_highlight_pane_cp02_ParamLimits

0xa8c1,	// (0x000b31dd) toolbar_button_pane_cp01_ParamLimits

0xa8c1,	// (0x000b31dd) toolbar_button_pane_cp01

0xb76a,	// (0x000b4086) temp_image_control_pane_ParamLimits

0xb76a,	// (0x000b4086) temp_image_control_pane

0x9446,	// (0x000b1d62) main_mp3_pane

0xcf1f,	// (0x000b583b) temp_image_control_pane_g1_ParamLimits

0xcf1f,	// (0x000b583b) temp_image_control_pane_g1

0xcf2d,	// (0x000b5849) temp_image_control_pane_g2_ParamLimits

0xcf2d,	// (0x000b5849) temp_image_control_pane_g2

0xcf3f,	// (0x000b585b) temp_image_control_pane_g3_ParamLimits

0xcf3f,	// (0x000b585b) temp_image_control_pane_g3

0x432e,	// (0x000acc4a) temp_image_control_pane_g4_ParamLimits

0x432e,	// (0x000acc4a) temp_image_control_pane_g4

0x0003,

0xf73d,	// (0x000b8059) temp_image_control_pane_g_ParamLimits

0xf73d,	// (0x000b8059) temp_image_control_pane_g

0xcf1f,	// (0x000b583b) main_mp3_pane_g1

0x4341,	// (0x000acc5d) main_mp3_pane_g2

0x0007,

0xf746,	// (0x000b8062) main_mp3_pane_g

0xcf82,	// (0x000b589e) main_mp3_pane_t1

0xaa2b,	// (0x000b3347) main_camera_pane_g8_ParamLimits

0xaa2b,	// (0x000b3347) main_camera_pane_g8

0x137e,	// (0x000a9c9a) main_video_pane_g7_ParamLimits

0x137e,	// (0x000a9c9a) main_video_pane_g7

0x9679,	// (0x000b1f95) main_camera2_pane_t7_ParamLimits

0x9679,	// (0x000b1f95) main_camera2_pane_t7

0xab91,	// (0x000b34ad) scroll_pane_cp025_ParamLimits

0xab91,	// (0x000b34ad) scroll_pane_cp025

0xaba5,	// (0x000b34c1) scroll_pane_cp026_ParamLimits

0xaba5,	// (0x000b34c1) scroll_pane_cp026

0xabb4,	// (0x000b34d0) wml_content_pane_ParamLimits

0x9454,	// (0x000b1d70) main_touch_calib_pane

0x4415,	// (0x000acd31) main_touch_calib_pane_g1

0x4427,	// (0x000acd43) main_touch_calib_pane_g2

0x4439,	// (0x000acd55) main_touch_calib_pane_g3

0x444b,	// (0x000acd67) main_touch_calib_pane_g4

0x0003,

0xf764,	// (0x000b8080) main_touch_calib_pane_g

0x445d,	// (0x000acd79) main_touch_calib_pane_t1

0x4477,	// (0x000acd93) main_touch_calib_pane_t2

0x0004,

0xf76d,	// (0x000b8089) main_touch_calib_pane_t

0xb337,	// (0x000b3c53) mup_progress_pane_cp02

0xb36c,	// (0x000b3c88) navi_pane_g1

0xb427,	// (0x000b3d43) navi_pane_mp_t3

0x9446,	// (0x000b1d62) main_mp3_pane_ParamLimits

0x3845,	// (0x000ac161) navi_pane_ParamLimits

0xcf1f,	// (0x000b583b) main_mp3_pane_g1_ParamLimits

0x4341,	// (0x000acc5d) main_mp3_pane_g2_ParamLimits

0x434f,	// (0x000acc6b) main_mp3_pane_g3_ParamLimits

0x434f,	// (0x000acc6b) main_mp3_pane_g3

0x435d,	// (0x000acc79) main_mp3_pane_g4_ParamLimits

0x435d,	// (0x000acc79) main_mp3_pane_g4

0xcf4f,	// (0x000b586b) main_mp3_pane_g5_ParamLimits

0xcf4f,	// (0x000b586b) main_mp3_pane_g5

0xcf5d,	// (0x000b5879) main_mp3_pane_g6_ParamLimits

0xcf5d,	// (0x000b5879) main_mp3_pane_g6

0xcf6a,	// (0x000b5886) main_mp3_pane_g7_ParamLimits

0xcf6a,	// (0x000b5886) main_mp3_pane_g7

0xcf76,	// (0x000b5892) main_mp3_pane_g8_ParamLimits

0xcf76,	// (0x000b5892) main_mp3_pane_g8

0xf746,	// (0x000b8062) main_mp3_pane_g_ParamLimits

0x4369,	// (0x000acc85) main_mp3_pane_t2

0x4377,	// (0x000acc93) main_mp3_pane_t3

0xcf90,	// (0x000b58ac) main_mp3_pane_t4

0xcf9e,	// (0x000b58ba) main_mp3_pane_t5

0x0005,

0xf757,	// (0x000b8073) main_mp3_pane_t

0xcfac,	// (0x000b58c8) mup_progress_pane_cp01

0x93fc,	// (0x000b1d18) aid_zoom_text_secondary2

0xcd84,	// (0x000b56a0) list_cale_ev2_pane

0xcd8c,	// (0x000b56a8) scroll_pane_cp023_ParamLimits

0x44cd,	// (0x000acde9) field_cale_ev2_pane_ParamLimits

0x44cd,	// (0x000acde9) field_cale_ev2_pane

0x9eb9,	// (0x000b27d5) field_cale_ev2_pane_g1_ParamLimits

0x9eb9,	// (0x000b27d5) field_cale_ev2_pane_g1

0x9ec5,	// (0x000b27e1) field_cale_ev2_pane_g2_ParamLimits

0x9ec5,	// (0x000b27e1) field_cale_ev2_pane_g2

0x9edd,	// (0x000b27f9) field_cale_ev2_pane_g3_ParamLimits

0x9edd,	// (0x000b27f9) field_cale_ev2_pane_g3

0x0003,

0xf778,	// (0x000b8094) field_cale_ev2_pane_g_ParamLimits

0xf778,	// (0x000b8094) field_cale_ev2_pane_g

0x9f01,	// (0x000b281d) field_cale_ev2_pane_t1_ParamLimits

0x9f01,	// (0x000b281d) field_cale_ev2_pane_t1

0x9f18,	// (0x000b2834) field_cale_ev2_pane_t2_ParamLimits

0x9f18,	// (0x000b2834) field_cale_ev2_pane_t2

0x0001,

0xf781,	// (0x000b809d) field_cale_ev2_pane_t_ParamLimits

0xf781,	// (0x000b809d) field_cale_ev2_pane_t

0x2d63,	// (0x000ab67f) main_postcard_pane_g5_ParamLimits

0x2d63,	// (0x000ab67f) main_postcard_pane_g5

0x2d79,	// (0x000ab695) main_postcard_pane_g6_ParamLimits

0x2d79,	// (0x000ab695) main_postcard_pane_g6

0x1144,	// (0x000a9a60) camera2_autofocus_pane_cp_ParamLimits

0x1144,	// (0x000a9a60) camera2_autofocus_pane_cp

0x9446,	// (0x000b1d62) main_mup3_pane

0x4532,	// (0x000ace4e) main_mup3_pane_g1_ParamLimits

0x4532,	// (0x000ace4e) main_mup3_pane_g1

0x4554,	// (0x000ace70) main_mup3_pane_g2_ParamLimits

0x4554,	// (0x000ace70) main_mup3_pane_g2

0x45d4,	// (0x000acef0) main_mup3_pane_g3_ParamLimits

0x45d4,	// (0x000acef0) main_mup3_pane_g3

0x461a,	// (0x000acf36) main_mup3_pane_g4_ParamLimits

0x461a,	// (0x000acf36) main_mup3_pane_g4

0x4660,	// (0x000acf7c) main_mup3_pane_g5_ParamLimits

0x4660,	// (0x000acf7c) main_mup3_pane_g5

0x46a6,	// (0x000acfc2) main_mup3_pane_g6_ParamLimits

0x46a6,	// (0x000acfc2) main_mup3_pane_g6

0xcfb4,	// (0x000b58d0) main_mup3_pane_g7_ParamLimits

0xcfb4,	// (0x000b58d0) main_mup3_pane_g7

0x0007,

0xf791,	// (0x000b80ad) main_mup3_pane_g_ParamLimits

0xf791,	// (0x000b80ad) main_mup3_pane_g

0x4724,	// (0x000ad040) main_mup3_pane_t1_ParamLimits

0x4724,	// (0x000ad040) main_mup3_pane_t1

0x4798,	// (0x000ad0b4) main_mup3_pane_t2_ParamLimits

0x4798,	// (0x000ad0b4) main_mup3_pane_t2

0x486c,	// (0x000ad188) main_mup3_pane_t4_ParamLimits

0x486c,	// (0x000ad188) main_mup3_pane_t4

0x48c2,	// (0x000ad1de) main_mup3_pane_t5_ParamLimits

0x48c2,	// (0x000ad1de) main_mup3_pane_t5

0x497e,	// (0x000ad29a) main_mup3_pane_t6_ParamLimits

0x497e,	// (0x000ad29a) main_mup3_pane_t6

0x0005,

0xf7a2,	// (0x000b80be) main_mup3_pane_t_ParamLimits

0xf7a2,	// (0x000b80be) main_mup3_pane_t

0x4a36,	// (0x000ad352) mup3_progress_pane_ParamLimits

0x4a36,	// (0x000ad352) mup3_progress_pane

0x4ac2,	// (0x000ad3de) popup_mup3_control_window_ParamLimits

0x4ac2,	// (0x000ad3de) popup_mup3_control_window

0xcfc2,	// (0x000b58de) popup_mup3_text_window

0x4af4,	// (0x000ad410) mup3_progress_pane_t1

0x4b13,	// (0x000ad42f) mup3_progress_pane_t2

0xcfca,	// (0x000b58e6) mup3_progress_pane_t3

0x0002,

0xf7af,	// (0x000b80cb) mup3_progress_pane_t

0xcfe7,	// (0x000b5903) mup_progress_pane_cp03

0x9bb8,	// (0x000b24d4) bg_tb_trans_pane_cp04

0x4b32,	// (0x000ad44e) mup3_volume_pane

0x4b3a,	// (0x000ad456) popup_mup3_control_window_g1

0x4b43,	// (0x000ad45f) mup3_volume_pane_g1

0x4b4c,	// (0x000ad468) mup3_volume_pane_g2

0x4b55,	// (0x000ad471) mup3_volume_pane_g3

0x0002,

0xf7b6,	// (0x000b80d2) mup3_volume_pane_g

0x9bb8,	// (0x000b24d4) bg_tb_trans_pane_cp03

0xcff7,	// (0x000b5913) popup_mup3_text_window_g1

0xcfff,	// (0x000b591b) popup_mup3_text_window_t1

0xa894,	// (0x000b31b0) list_calc_item_pane_g1_ParamLimits

0xca54,	// (0x000b5370) mup_volume_pane_cp_g1

0x4491,	// (0x000acdad) main_touch_calib_pane_t3

0x44a5,	// (0x000acdc1) main_touch_calib_pane_t4

0x44b9,	// (0x000acdd5) main_touch_calib_pane_t5

0x93d8,	// (0x000b1cf4) aid_cell_size_toolbar2

0x93e0,	// (0x000b1cfc) aid_popup3_width_pane

0x93ec,	// (0x000b1d08) aid_zoom_text_msg_primary

0x1123,	// (0x000a9a3f) vorec_t7

0xa858,	// (0x000b3174) bg_calc_paper_pane_g1_ParamLimits

0xa864,	// (0x000b3180) bg_calc_paper_pane_g2_ParamLimits

0xa870,	// (0x000b318c) bg_calc_paper_pane_g3_ParamLimits

0xa87c,	// (0x000b3198) bg_calc_paper_pane_g4_ParamLimits

0xa888,	// (0x000b31a4) bg_calc_paper_pane_g5_ParamLimits

0x0a4f,	// (0x000a936b) bg_calc_paper_pane_g6_ParamLimits

0x0a5e,	// (0x000a937a) bg_calc_paper_pane_g7_ParamLimits

0x0a6d,	// (0x000a9389) bg_calc_paper_pane_g8_ParamLimits

0xf158,	// (0x000b7a74) bg_calc_paper_pane_g_ParamLimits

0x0a80,	// (0x000a939c) calc_bg_paper_pane_g9_ParamLimits

0x1290,	// (0x000a9bac) image_qvga_pane_ParamLimits

0x1290,	// (0x000a9bac) image_qvga_pane

0xa77b,	// (0x000b3097) bg_popup_sub_pane_cp04_ParamLimits

0xb6a1,	// (0x000b3fbd) popup_mup_playback_window_g1_ParamLimits

0xb6ad,	// (0x000b3fc9) popup_mup_playback_window_t1_ParamLimits

0xb6c2,	// (0x000b3fde) popup_mup_playback_window_t2_ParamLimits

0xf4e2,	// (0x000b7dfe) popup_mup_playback_window_t_ParamLimits

0x3fd0,	// (0x000ac8ec) main_mup2_pane_g3_ParamLimits

0x3fd0,	// (0x000ac8ec) main_mup2_pane_g3

0x1686,	// (0x000a9fa2) popup_toolbar_window_cp04

0xbab7,	// (0x000b43d3) popup_call2_audio_second_window_g3_ParamLimits

0xbab7,	// (0x000b43d3) popup_call2_audio_second_window_g3

0xbec1,	// (0x000b47dd) popup_call2_audio_first_window_g4_ParamLimits

0xbec1,	// (0x000b47dd) popup_call2_audio_first_window_g4

0xc540,	// (0x000b4e5c) popup_call2_audio_in_window_g4_ParamLimits

0xc540,	// (0x000b4e5c) popup_call2_audio_in_window_g4

0x2e91,	// (0x000ab7ad) aid_area_sk_bg_cut_ParamLimits

0x2e91,	// (0x000ab7ad) aid_area_sk_bg_cut

0xb6d7,	// (0x000b3ff3) aid_area_sk_bg_cut_2_ParamLimits

0xb6d7,	// (0x000b3ff3) aid_area_sk_bg_cut_2

0x42d4,	// (0x000acbf0) aid_placing_details_win

0x42dc,	// (0x000acbf8) aid_placing_details_win_2

0xce61,	// (0x000b577d) camera2_autofocus_pane_g1_ParamLimits

0x0641,	// (0x000a8f5d) popup_fixed_preview_cale_window_ParamLimits

0x0641,	// (0x000a8f5d) popup_fixed_preview_cale_window

0xb4a5,	// (0x000b3dc1) navi_slider_pane_g3

0xb4ae,	// (0x000b3dca) navi_slider_pane_g4

0xb4b7,	// (0x000b3dd3) navi_slider_pane_g5

0xb4a5,	// (0x000b3dc1) navi_slider_pane_g6

0x95a6,	// (0x000b1ec2) navi_slider_pane_g7

0xb5d8,	// (0x000b3ef4) mup_scale_pane_g3

0xb5e1,	// (0x000b3efd) mup_scale_pane_g4

0xb5ea,	// (0x000b3f06) mup_scale_pane_g5

0x2bbf,	// (0x000ab4db) mup_scale_pane_g6

0x2bc8,	// (0x000ab4e4) mup_scale_pane_g7

0xb4a5,	// (0x000b3dc1) cams2_slider_pane_g3

0xcad6,	// (0x000b53f2) cams2_slider_pane_g4

0x96df,	// (0x000b1ffb) cams2_slider_pane_g5

0xb4a5,	// (0x000b3dc1) cams2_slider_pane_g6

0x96e7,	// (0x000b2003) cams2_slider_pane_g7

0xcd01,	// (0x000b561d) camera2_autofocus_pane_cp_g1

0xc8e1,	// (0x000b51fd) bg_popup_preview_window_pane_cp02_ParamLimits

0xc8e1,	// (0x000b51fd) bg_popup_preview_window_pane_cp02

0xd00d,	// (0x000b5929) list_fp_cale_pane_ParamLimits

0xd00d,	// (0x000b5929) list_fp_cale_pane

0xd019,	// (0x000b5935) popup_fixed_preview_cale_window_t1_ParamLimits

0xd019,	// (0x000b5935) popup_fixed_preview_cale_window_t1

0x4b5e,	// (0x000ad47a) popup_fixed_preview_cale_window_t2_ParamLimits

0x4b5e,	// (0x000ad47a) popup_fixed_preview_cale_window_t2

0x4b73,	// (0x000ad48f) popup_fixed_preview_cale_window_t3_ParamLimits

0x4b73,	// (0x000ad48f) popup_fixed_preview_cale_window_t3

0x0002,

0xf7bd,	// (0x000b80d9) popup_fixed_preview_cale_window_t_ParamLimits

0xf7bd,	// (0x000b80d9) popup_fixed_preview_cale_window_t

0x4b88,	// (0x000ad4a4) list_single_fp_cale_pane_ParamLimits

0x4b88,	// (0x000ad4a4) list_single_fp_cale_pane

0xd037,	// (0x000b5953) list_single_fp_cale_pane_g1_ParamLimits

0xd037,	// (0x000b5953) list_single_fp_cale_pane_g1

0xd043,	// (0x000b595f) list_single_fp_cale_pane_g2_ParamLimits

0xd043,	// (0x000b595f) list_single_fp_cale_pane_g2

0x0002,

0xf7c4,	// (0x000b80e0) list_single_fp_cale_pane_g_ParamLimits

0xf7c4,	// (0x000b80e0) list_single_fp_cale_pane_g

0xd05c,	// (0x000b5978) list_single_fp_cale_pane_t1_ParamLimits

0xd05c,	// (0x000b5978) list_single_fp_cale_pane_t1

0xd06e,	// (0x000b598a) list_single_fp_cale_pane_t2_ParamLimits

0xd06e,	// (0x000b598a) list_single_fp_cale_pane_t2

0x0001,

0xf7cb,	// (0x000b80e7) list_single_fp_cale_pane_t_ParamLimits

0xf7cb,	// (0x000b80e7) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x9454,	// (0x000b1d70) main_dialer_pane

0x4b9e,	// (0x000ad4ba) aid_cell_size_keypad

0x4ba8,	// (0x000ad4c4) dialer_ne_pane

0x4bb0,	// (0x000ad4cc) grid_dialer_command_1_pane

0x4bb8,	// (0x000ad4d4) grid_dialer_command_2_pane

0x4bc0,	// (0x000ad4dc) grid_dialer_keypad_pane

0x4bd2,	// (0x000ad4ee) bg_popup_call_pane_cp06_ParamLimits

0x4bd2,	// (0x000ad4ee) bg_popup_call_pane_cp06

0x4bde,	// (0x000ad4fa) dialer_ne_clear_pane_ParamLimits

0x4bde,	// (0x000ad4fa) dialer_ne_clear_pane

0xd0a1,	// (0x000b59bd) dialer_ne_pane_g1

0xd0a9,	// (0x000b59c5) dialer_ne_pane_t1_ParamLimits

0xd0a9,	// (0x000b59c5) dialer_ne_pane_t1

0x4bea,	// (0x000ad506) dialer_ne_pane_t2_ParamLimits

0x4bea,	// (0x000ad506) dialer_ne_pane_t2

0x4c14,	// (0x000ad530) dialer_ne_pane_t3_ParamLimits

0x4c14,	// (0x000ad530) dialer_ne_pane_t3

0x0002,

0xf7d0,	// (0x000b80ec) dialer_ne_pane_t_ParamLimits

0xf7d0,	// (0x000b80ec) dialer_ne_pane_t

0x4c44,	// (0x000ad560) dialer_ne_pane_t3_copy1_ParamLimits

0x4c44,	// (0x000ad560) dialer_ne_pane_t3_copy1

0x4c73,	// (0x000ad58f) cell_dialer_keypad_pane_ParamLimits

0x4c73,	// (0x000ad58f) cell_dialer_keypad_pane

0x4c8a,	// (0x000ad5a6) cell_dialer_command_1_pane_ParamLimits

0x4c8a,	// (0x000ad5a6) cell_dialer_command_1_pane

0x4ca0,	// (0x000ad5bc) cell_dialer_command_2_pane_ParamLimits

0x4ca0,	// (0x000ad5bc) cell_dialer_command_2_pane

0xd0bb,	// (0x000b59d7) bg_button_pane_cp02_ParamLimits

0xd0bb,	// (0x000b59d7) bg_button_pane_cp02

0x4caf,	// (0x000ad5cb) cell_dialer_keypad_pane_g1_ParamLimits

0x4caf,	// (0x000ad5cb) cell_dialer_keypad_pane_g1

0xd0bb,	// (0x000b59d7) bg_button_pane_cp03_ParamLimits

0xd0bb,	// (0x000b59d7) bg_button_pane_cp03

0x4cc3,	// (0x000ad5df) cell_dialer_command_1_pane_g1_ParamLimits

0x4cc3,	// (0x000ad5df) cell_dialer_command_1_pane_g1

0xd0c7,	// (0x000b59e3) bg_button_pane_cp04

0x4cd7,	// (0x000ad5f3) cell_dialer_command_2_pane_g1

0xaa23,	// (0x000b333f) bg_button_pane_cp06

0xd0cf,	// (0x000b59eb) dialer_ne_clear_pane_g1

0xb378,	// (0x000b3c94) navi_pane_g2

0xb3a6,	// (0x000b3cc2) navi_pane_g3

0x0002,

0xf3e5,	// (0x000b7d01) navi_pane_g

0xb435,	// (0x000b3d51) navi_pane_mv_g2

0xb45c,	// (0x000b3d78) navi_pane_mv_g5

0x278d,	// (0x000ab0a9) navi_pane_mv_t1

0xa84c,	// (0x000b3168) main_clock2_pane

0x4d25,	// (0x000ad641) main_clock2_list_pane_ParamLimits

0x4d25,	// (0x000ad641) main_clock2_list_pane

0x4d5f,	// (0x000ad67b) main_clock2_pane_t1_ParamLimits

0x4d5f,	// (0x000ad67b) main_clock2_pane_t1

0x4d9d,	// (0x000ad6b9) main_clock2_pane_t2_ParamLimits

0x4d9d,	// (0x000ad6b9) main_clock2_pane_t2

0x0004,

0xf7dc,	// (0x000b80f8) main_clock2_pane_t_ParamLimits

0xf7dc,	// (0x000b80f8) main_clock2_pane_t

0x4e3b,	// (0x000ad757) popup_clock_analogue_window_cp03_ParamLimits

0x4e3b,	// (0x000ad757) popup_clock_analogue_window_cp03

0x4e60,	// (0x000ad77c) popup_clock_digital_window_cp02_ParamLimits

0x4e60,	// (0x000ad77c) popup_clock_digital_window_cp02

0x4ed1,	// (0x000ad7ed) main_clock2_list_single_pane_ParamLimits

0x4ed1,	// (0x000ad7ed) main_clock2_list_single_pane

0xaa23,	// (0x000b333f) list_highlight_pane_cp05

0xd109,	// (0x000b5a25) main_clock2_list_single_pane_t1

0x1686,	// (0x000a9fa2) popup_toolbar_window_cp04_ParamLimits

0x42fe,	// (0x000acc1a) camera2_autofocus_pane_g2_ParamLimits

0x42fe,	// (0x000acc1a) camera2_autofocus_pane_g2

0x430a,	// (0x000acc26) camera2_autofocus_pane_g3_ParamLimits

0x430a,	// (0x000acc26) camera2_autofocus_pane_g3

0x4316,	// (0x000acc32) camera2_autofocus_pane_g4_ParamLimits

0x4316,	// (0x000acc32) camera2_autofocus_pane_g4

0x4322,	// (0x000acc3e) camera2_autofocus_pane_g5_ParamLimits

0x4322,	// (0x000acc3e) camera2_autofocus_pane_g5

0x0004,

0xf720,	// (0x000b803c) camera2_autofocus_pane_g_ParamLimits

0xf720,	// (0x000b803c) camera2_autofocus_pane_g

0x44ee,	// (0x000ace0a) camera2_autofocus_pane_cp_g2

0x44f6,	// (0x000ace12) camera2_autofocus_pane_cp_g3

0x44fe,	// (0x000ace1a) camera2_autofocus_pane_cp_g4

0x4506,	// (0x000ace22) camera2_autofocus_pane_cp_g5

0x0004,

0xf786,	// (0x000b80a2) camera2_autofocus_pane_cp_g

0x4bca,	// (0x000ad4e6) popup_dialer_spcha_window

0x9bb8,	// (0x000b24d4) bg_popup_sub_pane_cp07

0xd117,	// (0x000b5a33) list_spcha_pane

0xd11f,	// (0x000b5a3b) list_single_spcha_pane_ParamLimits

0xd11f,	// (0x000b5a3b) list_single_spcha_pane

0x9bb8,	// (0x000b24d4) list_highlight_pane_cp06

0xd130,	// (0x000b5a4c) list_single_spcha_pane_t1

0xc2ea,	// (0x000b4c06) popup_call2_audio_out_window_g4_ParamLimits

0xc2ea,	// (0x000b4c06) popup_call2_audio_out_window_g4

0x9454,	// (0x000b1d70) main_imed2_pane

0x95ff,	// (0x000b1f1b) popup_imed_adjust2_window

0x36d2,	// (0x000abfee) popup_imed_trans_window_ParamLimits

0x36d2,	// (0x000abfee) popup_imed_trans_window

0xcb3f,	// (0x000b545b) popup_blid_sat_info2_window_t1

0xcb4d,	// (0x000b5469) popup_blid_sat_info2_window_t2

0x000a,

0xf6b5,	// (0x000b7fd1) popup_blid_sat_info2_window_t

0x4f7a,	// (0x000ad896) aid_size_cell_colour_35

0x4f9a,	// (0x000ad8b6) aid_size_cell_colour_112

0x4fba,	// (0x000ad8d6) aid_size_cell_effect

0xc8ed,	// (0x000b5209) bg_tb_trans_pane_cp02

0xaee2,	// (0x000b37fe) heading_imed_pane

0x4fda,	// (0x000ad8f6) listscroll_imed_pane

0xd13e,	// (0x000b5a5a) heading_imed_pane_g1

0xd146,	// (0x000b5a62) heading_imed_pane_t1

0xd154,	// (0x000b5a70) grid_imed_colour_35_pane_ParamLimits

0xd154,	// (0x000b5a70) grid_imed_colour_35_pane

0x4fe6,	// (0x000ad902) grid_imed_effect_pane

0xd16c,	// (0x000b5a88) list_imed_aspect_pane

0x4ffc,	// (0x000ad918) scroll_pane_cp027_ParamLimits

0x4ffc,	// (0x000ad918) scroll_pane_cp027

0x500d,	// (0x000ad929) cell_imed_effect_pane_ParamLimits

0x500d,	// (0x000ad929) cell_imed_effect_pane

0xd174,	// (0x000b5a90) cell_imed_colour_pane_ParamLimits

0xd174,	// (0x000b5a90) cell_imed_colour_pane

0xd1b6,	// (0x000b5ad2) cell_imed_colour_pane_g1_ParamLimits

0xd1b6,	// (0x000b5ad2) cell_imed_colour_pane_g1

0xd1c7,	// (0x000b5ae3) hgihlgiht_grid_pane_cp016_ParamLimits

0xd1c7,	// (0x000b5ae3) hgihlgiht_grid_pane_cp016

0x5034,	// (0x000ad950) cell_imed_effect_pane_g1

0x503c,	// (0x000ad958) grid_highlight_pane_cp017

0xd1d8,	// (0x000b5af4) list_imed_single_pane_ParamLimits

0xd1d8,	// (0x000b5af4) list_imed_single_pane

0x9bb8,	// (0x000b24d4) list_highlight_pane_cp07

0xd1ed,	// (0x000b5b09) list_imed_aspect_pane_comp1_t1

0xc8ed,	// (0x000b5209) bg_tb_trans_pane_cp05

0xd20f,	// (0x000b5b2b) popup_imed_adjust2_window_g1

0xd236,	// (0x000b5b52) popup_imed_adjust2_window_t1

0xd24e,	// (0x000b5b6a) slider_imed_adjust_pane

0xd262,	// (0x000b5b7e) slider_imed_adjust_pane_g1

0xd272,	// (0x000b5b8e) slider_imed_adjust_pane_g2

0xd282,	// (0x000b5b9e) slider_imed_adjust_pane_g3

0xd293,	// (0x000b5baf) slider_imed_adjust_pane_g4

0x0003,

0xf7f9,	// (0x000b8115) slider_imed_adjust_pane_g

0x5045,	// (0x000ad961) aid_size_cell_clipart2

0x5051,	// (0x000ad96d) grid_imed_clipart_pane

0xd2a4,	// (0x000b5bc0) scroll_pane_cp031

0x505b,	// (0x000ad977) cell_imed_clipart_pane_ParamLimits

0x505b,	// (0x000ad977) cell_imed_clipart_pane

0x507d,	// (0x000ad999) cell_imed_clipart_pane_g1

0x9bb8,	// (0x000b24d4) grid_highlight_pane_cp014

0x4d3a,	// (0x000ad656) main_clock2_pane_g1_ParamLimits

0x4d3a,	// (0x000ad656) main_clock2_pane_g1

0x4e7c,	// (0x000ad798) aid_call2_pane_cp10

0x4e8e,	// (0x000ad7aa) aid_call_pane_cp10

0xb2d7,	// (0x000b3bf3) popup_clock_analogue_window_cp10_g1

0xb2d7,	// (0x000b3bf3) popup_clock_analogue_window_cp10_g2

0x4ea0,	// (0x000ad7bc) popup_clock_analogue_window_cp10_g3

0x4ea0,	// (0x000ad7bc) popup_clock_analogue_window_cp10_g4

0xb2d7,	// (0x000b3bf3) popup_clock_analogue_window_cp10_g5

0x0004,

0xf7e7,	// (0x000b8103) popup_clock_analogue_window_cp10_g

0x4eb2,	// (0x000ad7ce) popup_clock_analogue_window_cp10_t1

0x4ee3,	// (0x000ad7ff) clock_digital_number_pane_cp10_ParamLimits

0x4ee3,	// (0x000ad7ff) clock_digital_number_pane_cp10

0x4efb,	// (0x000ad817) clock_digital_number_pane_cp11_ParamLimits

0x4efb,	// (0x000ad817) clock_digital_number_pane_cp11

0x4f13,	// (0x000ad82f) clock_digital_number_pane_cp12_ParamLimits

0x4f13,	// (0x000ad82f) clock_digital_number_pane_cp12

0x4f2b,	// (0x000ad847) clock_digital_number_pane_cp13_ParamLimits

0x4f2b,	// (0x000ad847) clock_digital_number_pane_cp13

0x4f43,	// (0x000ad85f) clock_digital_separator_pane_cp10_ParamLimits

0x4f43,	// (0x000ad85f) clock_digital_separator_pane_cp10

0x4f5b,	// (0x000ad877) popup_clock_digital_window_cp02_t1_ParamLimits

0x4f5b,	// (0x000ad877) popup_clock_digital_window_cp02_t1

0xa773,	// (0x000b308f) clock_digital_number_pane_cp10_g1

0xa773,	// (0x000b308f) clock_digital_number_pane_cp10_g2

0x0001,

0xf802,	// (0x000b811e) clock_digital_number_pane_cp10_g

0xa773,	// (0x000b308f) clock_digital_separator_pane_cp10_g1

0xa773,	// (0x000b308f) clock_digital_separator_pane_g2_cp10

0xb464,	// (0x000b3d80) navi_pane_vded_g4

0xb46d,	// (0x000b3d89) navi_pane_vded_g5

0xb476,	// (0x000b3d92) navi_pane_vded_t1

0x9454,	// (0x000b1d70) main_vded_pane

0x5086,	// (0x000ad9a2) main_vded_pane_g1

0x5090,	// (0x000ad9ac) main_vded_pane_g2

0x509a,	// (0x000ad9b6) main_vded_pane_g3

0x0002,

0xf807,	// (0x000b8123) main_vded_pane_g

0x50a4,	// (0x000ad9c0) main_vded_pane_t1

0x50b2,	// (0x000ad9ce) main_vded_pane_t2

0x0001,

0xf80e,	// (0x000b812a) main_vded_pane_t

0x50c0,	// (0x000ad9dc) vded_slider_pane

0x50c8,	// (0x000ad9e4) vded_video_pane

0xd2ac,	// (0x000b5bc8) vded_video_pane_g1

0x50d0,	// (0x000ad9ec) vded_video_pane_g2

0xcd01,	// (0x000b561d) vded_video_pane_g3

0x0002,

0xf813,	// (0x000b812f) vded_video_pane_g

0xd2b6,	// (0x000b5bd2) vded_slider_pane_g1

0xca54,	// (0x000b5370) vded_slider_pane_g2

0xd2bf,	// (0x000b5bdb) vded_slider_pane_g3

0xd2c8,	// (0x000b5be4) vded_slider_pane_g4

0xd2d1,	// (0x000b5bed) vded_slider_pane_g5

0x0004,

0xf81a,	// (0x000b8136) vded_slider_pane_g

0x4aaa,	// (0x000ad3c6) mup3_rocker_pane_ParamLimits

0x4aaa,	// (0x000ad3c6) mup3_rocker_pane

0x50d9,	// (0x000ad9f5) mup3_control_keys_pane_g1

0x50e1,	// (0x000ad9fd) mup3_control_keys_pane_g2

0x50e9,	// (0x000ada05) mup3_control_keys_pane_g3

0x50f1,	// (0x000ada0d) mup3_control_keys_pane_g4

0x0003,

0xf825,	// (0x000b8141) mup3_control_keys_pane_g

0x0678,	// (0x000a8f94) popup_toolbar2_fixed_window_cp01_ParamLimits

0x0678,	// (0x000a8f94) popup_toolbar2_fixed_window_cp01

0x4ade,	// (0x000ad3fa) popup_toolbar2_fixed_window_cp02_ParamLimits

0x4ade,	// (0x000ad3fa) popup_toolbar2_fixed_window_cp02

0xbc29,	// (0x000b4545) popup_call2_audio_second_window_t4_ParamLimits

0xbc29,	// (0x000b4545) popup_call2_audio_second_window_t4

0xc157,	// (0x000b4a73) popup_call2_audio_first_window_t6_ParamLimits

0xc157,	// (0x000b4a73) popup_call2_audio_first_window_t6

0xc3ed,	// (0x000b4d09) popup_call2_audio_out_window_t6_ParamLimits

0xc3ed,	// (0x000b4d09) popup_call2_audio_out_window_t6

0x9454,	// (0x000b1d70) main_vitu_pane

0x5101,	// (0x000ada1d) aid_size_cell_itu_ParamLimits

0x5101,	// (0x000ada1d) aid_size_cell_itu

0xb2b7,	// (0x000b3bd3) bg_popup_window_pane_cp08_ParamLimits

0xb2b7,	// (0x000b3bd3) bg_popup_window_pane_cp08

0x5117,	// (0x000ada33) field_vitu_entry_pane_ParamLimits

0x5117,	// (0x000ada33) field_vitu_entry_pane

0x512f,	// (0x000ada4b) grid_vitu_function_pane_ParamLimits

0x512f,	// (0x000ada4b) grid_vitu_function_pane

0x514a,	// (0x000ada66) grid_vitu_itu_pane_ParamLimits

0x514a,	// (0x000ada66) grid_vitu_itu_pane

0x5168,	// (0x000ada84) cell_vitu_itu_pane_ParamLimits

0x5168,	// (0x000ada84) cell_vitu_itu_pane

0x518a,	// (0x000adaa6) cell_vitu_function_pane_ParamLimits

0x518a,	// (0x000adaa6) cell_vitu_function_pane

0xb2b7,	// (0x000b3bd3) bg_popup_sub_pane_cp08_ParamLimits

0xb2b7,	// (0x000b3bd3) bg_popup_sub_pane_cp08

0x51a3,	// (0x000adabf) field_vitu_entry_pane_t1_ParamLimits

0x51a3,	// (0x000adabf) field_vitu_entry_pane_t1

0xd2f2,	// (0x000b5c0e) field_vitu_entry_pane_t2_ParamLimits

0xd2f2,	// (0x000b5c0e) field_vitu_entry_pane_t2

0x0001,

0xf833,	// (0x000b814f) field_vitu_entry_pane_t_ParamLimits

0xf833,	// (0x000b814f) field_vitu_entry_pane_t

0xd30f,	// (0x000b5c2b) bg_button_pane_cp05_ParamLimits

0xd30f,	// (0x000b5c2b) bg_button_pane_cp05

0x51c2,	// (0x000adade) cell_vitu_itu_pane_g1

0x51da,	// (0x000adaf6) cell_vitu_itu_pane_t1_ParamLimits

0x51da,	// (0x000adaf6) cell_vitu_itu_pane_t1

0x51ec,	// (0x000adb08) cell_vitu_itu_pane_t2_ParamLimits

0x51ec,	// (0x000adb08) cell_vitu_itu_pane_t2

0x0002,

0xf838,	// (0x000b8154) cell_vitu_itu_pane_t_ParamLimits

0xf838,	// (0x000b8154) cell_vitu_itu_pane_t

0xd31d,	// (0x000b5c39) bg_button_pane_cp07

0x5221,	// (0x000adb3d) cell_vitu_function_pane_g1

0x945e,	// (0x000b1d7a) main_calc_pane_g1

0x049f,	// (0x000a8dbb) aid_visual_content_pane

0x9454,	// (0x000b1d70) main_vradio_pane

0x522a,	// (0x000adb46) main_vradio_pane_g1_ParamLimits

0x522a,	// (0x000adb46) main_vradio_pane_g1

0xd327,	// (0x000b5c43) main_vradio_pane_g2_ParamLimits

0xd327,	// (0x000b5c43) main_vradio_pane_g2

0x0001,

0xf83f,	// (0x000b815b) main_vradio_pane_g_ParamLimits

0xf83f,	// (0x000b815b) main_vradio_pane_g

0x5243,	// (0x000adb5f) main_vradio_pane_t1_ParamLimits

0x5243,	// (0x000adb5f) main_vradio_pane_t1

0x5258,	// (0x000adb74) main_vradio_pane_t2_ParamLimits

0x5258,	// (0x000adb74) main_vradio_pane_t2

0xd334,	// (0x000b5c50) main_vradio_pane_t3_ParamLimits

0xd334,	// (0x000b5c50) main_vradio_pane_t3

0x0002,

0xf844,	// (0x000b8160) main_vradio_pane_t_ParamLimits

0xf844,	// (0x000b8160) main_vradio_pane_t

0x526d,	// (0x000adb89) vradio_rocker_control_pane_ParamLimits

0x526d,	// (0x000adb89) vradio_rocker_control_pane

0x527f,	// (0x000adb9b) vradio_station_info_pane_ParamLimits

0x527f,	// (0x000adb9b) vradio_station_info_pane

0xd348,	// (0x000b5c64) vradio_frequency_info_pane_ParamLimits

0xd348,	// (0x000b5c64) vradio_frequency_info_pane

0xcd01,	// (0x000b561d) vradio_station_info_pane_g1

0xd357,	// (0x000b5c73) vradio_station_info_pane_t1_ParamLimits

0xd357,	// (0x000b5c73) vradio_station_info_pane_t1

0xd379,	// (0x000b5c95) vradio_station_info_pane_t2_ParamLimits

0xd379,	// (0x000b5c95) vradio_station_info_pane_t2

0x0001,

0xf84b,	// (0x000b8167) vradio_station_info_pane_t_ParamLimits

0xf84b,	// (0x000b8167) vradio_station_info_pane_t

0xd38b,	// (0x000b5ca7) vradio_tuning_pane

0xd393,	// (0x000b5caf) vradio_rocker_control_pane_g1

0xd39b,	// (0x000b5cb7) vradio_rocker_control_pane_g2

0xd3a3,	// (0x000b5cbf) vradio_rocker_control_pane_g3

0xd3ab,	// (0x000b5cc7) vradio_rocker_control_pane_g4

0xd3b3,	// (0x000b5ccf) vradio_rocker_control_pane_g5

0x0004,

0xf850,	// (0x000b816c) vradio_rocker_control_pane_g

0x5291,	// (0x000adbad) vradio_frequency_info_pane_g1

0xd3bb,	// (0x000b5cd7) vradio_frequency_info_pane_t1_ParamLimits

0xd3bb,	// (0x000b5cd7) vradio_frequency_info_pane_t1

0x529b,	// (0x000adbb7) vradio_tuning_pane_g1

0x52a6,	// (0x000adbc2) vradio_tuning_pane_t1

0x9404,	// (0x000b1d20) area_side_right_pane_ParamLimits

0x9404,	// (0x000b1d20) area_side_right_pane

0xc8a8,	// (0x000b51c4) status_small_pane_g1

0xc8b0,	// (0x000b51cc) status_small_pane_g2

0xc8b9,	// (0x000b51d5) status_small_pane_g3

0xc8c2,	// (0x000b51de) status_small_pane_g4

0x0003,

0xf60b,	// (0x000b7f27) status_small_pane_g

0xc8cb,	// (0x000b51e7) status_small_pane_t1

0x9454,	// (0x000b1d70) main_video3_pane

0xd3cf,	// (0x000b5ceb) cams_zoom_vslider_pane

0xd3d7,	// (0x000b5cf3) image3_wide_pane_ParamLimits

0xd3d7,	// (0x000b5cf3) image3_wide_pane

0xd3f1,	// (0x000b5d0d) image3_wide_small_pane

0xd3fd,	// (0x000b5d19) main_video3_pane_g1_ParamLimits

0xd3fd,	// (0x000b5d19) main_video3_pane_g1

0xd419,	// (0x000b5d35) main_video3_pane_g2_ParamLimits

0xd419,	// (0x000b5d35) main_video3_pane_g2

0x0001,

0xf85b,	// (0x000b8177) main_video3_pane_g_ParamLimits

0xf85b,	// (0x000b8177) main_video3_pane_g

0xd435,	// (0x000b5d51) main_video3_pane_t1_ParamLimits

0xd435,	// (0x000b5d51) main_video3_pane_t1

0xd460,	// (0x000b5d7c) main_video3_pane_t2_ParamLimits

0xd460,	// (0x000b5d7c) main_video3_pane_t2

0xd48b,	// (0x000b5da7) main_video3_pane_t3_ParamLimits

0xd48b,	// (0x000b5da7) main_video3_pane_t3

0x0002,

0xf860,	// (0x000b817c) main_video3_pane_t_ParamLimits

0xf860,	// (0x000b817c) main_video3_pane_t

0xd4b8,	// (0x000b5dd4) cams_zoom_vslider_pane_g1

0xd4c1,	// (0x000b5ddd) cams_zoom_vslider_pane_g2

0x0001,

0xf867,	// (0x000b8183) cams_zoom_vslider_pane_g

0xd4c9,	// (0x000b5de5) small_slider_vertical_pane

0xcd01,	// (0x000b561d) small_slider_vertical_pane_g1

0xcd01,	// (0x000b561d) small_slider_vertical_pane_g2

0xd4d1,	// (0x000b5ded) small_slider_vertical_pane_g3

0x0002,

0xf86c,	// (0x000b8188) small_slider_vertical_pane_g

0x9454,	// (0x000b1d70) main_hwr_training_pane

0xd4da,	// (0x000b5df6) hwr_training_instruct_pane_ParamLimits

0xd4da,	// (0x000b5df6) hwr_training_instruct_pane

0x52b5,	// (0x000adbd1) hwr_training_navi_pane_ParamLimits

0x52b5,	// (0x000adbd1) hwr_training_navi_pane

0x52d4,	// (0x000adbf0) hwr_training_write_pane_ParamLimits

0x52d4,	// (0x000adbf0) hwr_training_write_pane

0x9bb8,	// (0x000b24d4) bg_frame_shadow_pane

0xd511,	// (0x000b5e2d) hwr_training_write_pane_g1

0xd519,	// (0x000b5e35) hwr_training_write_pane_g2

0xd521,	// (0x000b5e3d) hwr_training_write_pane_g3

0xd529,	// (0x000b5e45) hwr_training_write_pane_g4

0xd531,	// (0x000b5e4d) hwr_training_write_pane_g5

0xd539,	// (0x000b5e55) hwr_training_write_pane_g6

0xd541,	// (0x000b5e5d) hwr_training_write_pane_g7

0x0006,

0xf873,	// (0x000b818f) hwr_training_write_pane_g

0x96f0,	// (0x000b200c) hwr_training_navi_pane_g1_ParamLimits

0x96f0,	// (0x000b200c) hwr_training_navi_pane_g1

0x9702,	// (0x000b201e) hwr_training_navi_pane_g2_ParamLimits

0x9702,	// (0x000b201e) hwr_training_navi_pane_g2

0x9714,	// (0x000b2030) hwr_training_navi_pane_g3_ParamLimits

0x9714,	// (0x000b2030) hwr_training_navi_pane_g3

0x9724,	// (0x000b2040) hwr_training_navi_pane_g4_ParamLimits

0x9724,	// (0x000b2040) hwr_training_navi_pane_g4

0x0004,

0xf882,	// (0x000b819e) hwr_training_navi_pane_g_ParamLimits

0xf882,	// (0x000b819e) hwr_training_navi_pane_g

0x9731,	// (0x000b204d) hwr_training_navi_pane_t1

0x531e,	// (0x000adc3a) list_single_hwr_training_instruct_pane_ParamLimits

0x531e,	// (0x000adc3a) list_single_hwr_training_instruct_pane

0xd549,	// (0x000b5e65) list_single_hwr_training_instruct_pane_t1

0xcc41,	// (0x000b555d) bg_frame_shadow_pane_g1

0xd558,	// (0x000b5e74) bg_frame_shadow_pane_g2

0xd560,	// (0x000b5e7c) bg_frame_shadow_pane_g3

0xd568,	// (0x000b5e84) bg_frame_shadow_pane_g4

0xd570,	// (0x000b5e8c) bg_frame_shadow_pane_g5

0xd578,	// (0x000b5e94) bg_frame_shadow_pane_g6

0xd580,	// (0x000b5e9c) bg_frame_shadow_pane_g7

0xa917,	// (0x000b3233) bg_frame_shadow_pane_g8

0x0007,

0xf88d,	// (0x000b81a9) bg_frame_shadow_pane_g

0x9454,	// (0x000b1d70) main_video_tele_dialer_pane

0x5334,	// (0x000adc50) aid_size_cell_video_keypad_ParamLimits

0x5334,	// (0x000adc50) aid_size_cell_video_keypad

0x534e,	// (0x000adc6a) grid_video_dialer_keypad_pane_ParamLimits

0x534e,	// (0x000adc6a) grid_video_dialer_keypad_pane

0x539c,	// (0x000adcb8) video_down_pane_cp_ParamLimits

0x539c,	// (0x000adcb8) video_down_pane_cp

0x53ce,	// (0x000adcea) cell_video_dialer_keypad_pane_ParamLimits

0x53ce,	// (0x000adcea) cell_video_dialer_keypad_pane

0xd588,	// (0x000b5ea4) bg_button_pane_cp08_ParamLimits

0xd588,	// (0x000b5ea4) bg_button_pane_cp08

0x53f0,	// (0x000add0c) cell_video_dialer_keypad_pane_g1_ParamLimits

0x53f0,	// (0x000add0c) cell_video_dialer_keypad_pane_g1

0x4a94,	// (0x000ad3b0) mup3_rocker2_pane_ParamLimits

0x4a94,	// (0x000ad3b0) mup3_rocker2_pane

0xcd01,	// (0x000b561d) mup3_rocker2_pane_g1

0x35c1,	// (0x000abedd) main_dialer2_pane

0x9454,	// (0x000b1d70) main_mp4_pane

0x9747,	// (0x000b2063) main_mp4_pane_g1_ParamLimits

0x9747,	// (0x000b2063) main_mp4_pane_g1

0x9747,	// (0x000b2063) main_mp4_pane_g2_ParamLimits

0x9747,	// (0x000b2063) main_mp4_pane_g2

0x542a,	// (0x000add46) main_mp4_pane_g3_ParamLimits

0x542a,	// (0x000add46) main_mp4_pane_g3

0x9755,	// (0x000b2071) main_mp4_pane_g4_ParamLimits

0x9755,	// (0x000b2071) main_mp4_pane_g4

0x977d,	// (0x000b2099) main_mp4_pane_g5_ParamLimits

0x977d,	// (0x000b2099) main_mp4_pane_g5

0x0005,

0xf8ad,	// (0x000b81c9) main_mp4_pane_g_ParamLimits

0xf8ad,	// (0x000b81c9) main_mp4_pane_g

0x97cd,	// (0x000b20e9) main_mp4_pane_t1_ParamLimits

0x97cd,	// (0x000b20e9) main_mp4_pane_t1

0x9829,	// (0x000b2145) main_mp4_pane_t2_ParamLimits

0x9829,	// (0x000b2145) main_mp4_pane_t2

0xd594,	// (0x000b5eb0) main_mp4_pane_t3_ParamLimits

0xd594,	// (0x000b5eb0) main_mp4_pane_t3

0x987b,	// (0x000b2197) main_mp4_pane_t4_ParamLimits

0x987b,	// (0x000b2197) main_mp4_pane_t4

0x0003,

0xf8ba,	// (0x000b81d6) main_mp4_pane_t_ParamLimits

0xf8ba,	// (0x000b81d6) main_mp4_pane_t

0x98bf,	// (0x000b21db) mp4_progress_pane_ParamLimits

0x98bf,	// (0x000b21db) mp4_progress_pane

0x9909,	// (0x000b2225) mp4_rocker_pane_ParamLimits

0x9909,	// (0x000b2225) mp4_rocker_pane

0xd5bc,	// (0x000b5ed8) mp4_progress_pane_t1

0xd5d5,	// (0x000b5ef1) mp4_progress_pane_t2

0x0001,

0xf8c3,	// (0x000b81df) mp4_progress_pane_t

0xd5ee,	// (0x000b5f0a) mup_progress_pane_cp04

0xd992,	// (0x000b62ae) mp4_rocker_pane_g1

0x5466,	// (0x000add82) aid_cell_size_keypad2_ParamLimits

0x5466,	// (0x000add82) aid_cell_size_keypad2

0x547c,	// (0x000add98) dialer2_ne_pane_ParamLimits

0x547c,	// (0x000add98) dialer2_ne_pane

0x5496,	// (0x000addb2) grid_dialer2_keypad_pane_ParamLimits

0x5496,	// (0x000addb2) grid_dialer2_keypad_pane

0xcae6,	// (0x000b5402) bg_popup_call_pane_cp07_ParamLimits

0xcae6,	// (0x000b5402) bg_popup_call_pane_cp07

0x54b2,	// (0x000addce) dialer2_ne_pane_t1_ParamLimits

0x54b2,	// (0x000addce) dialer2_ne_pane_t1

0x54ee,	// (0x000ade0a) cell_dialer2_keypad_pane_ParamLimits

0x54ee,	// (0x000ade0a) cell_dialer2_keypad_pane

0xd60c,	// (0x000b5f28) bg_button_pane_pane_cp04_ParamLimits

0xd60c,	// (0x000b5f28) bg_button_pane_pane_cp04

0x5510,	// (0x000ade2c) cell_dialer2_keypad_pane_g1_ParamLimits

0x5510,	// (0x000ade2c) cell_dialer2_keypad_pane_g1

0x155a,	// (0x000a9e76) aid_placing_vt_set_content_ParamLimits

0x155a,	// (0x000a9e76) aid_placing_vt_set_content

0x1582,	// (0x000a9e9e) aid_placing_vt_set_title_ParamLimits

0x1582,	// (0x000a9e9e) aid_placing_vt_set_title

0x9454,	// (0x000b1d70) main_image3_pane

0x55d6,	// (0x000adef2) area_side_right_pane_cp01_ParamLimits

0x55d6,	// (0x000adef2) area_side_right_pane_cp01

0x9747,	// (0x000b2063) main_image3_pane_g1_ParamLimits

0x9747,	// (0x000b2063) main_image3_pane_g1

0x55ed,	// (0x000adf09) main_image3_pane_g2_ParamLimits

0x55ed,	// (0x000adf09) main_image3_pane_g2

0x5615,	// (0x000adf31) main_image3_pane_g3_ParamLimits

0x5615,	// (0x000adf31) main_image3_pane_g3

0x563f,	// (0x000adf5b) main_image3_pane_g4_ParamLimits

0x563f,	// (0x000adf5b) main_image3_pane_g4

0x0003,

0xf8d2,	// (0x000b81ee) main_image3_pane_g_ParamLimits

0xf8d2,	// (0x000b81ee) main_image3_pane_g

0x5669,	// (0x000adf85) main_image3_pane_t1_ParamLimits

0x5669,	// (0x000adf85) main_image3_pane_t1

0x56c1,	// (0x000adfdd) main_image3_pane_t2_ParamLimits

0x56c1,	// (0x000adfdd) main_image3_pane_t2

0x5713,	// (0x000ae02f) main_image3_pane_t3_ParamLimits

0x5713,	// (0x000ae02f) main_image3_pane_t3

0x0003,

0xf8db,	// (0x000b81f7) main_image3_pane_t_ParamLimits

0xf8db,	// (0x000b81f7) main_image3_pane_t

0xb2b7,	// (0x000b3bd3) grid_sctrl_middle_pane_cp01_ParamLimits

0xb2b7,	// (0x000b3bd3) grid_sctrl_middle_pane_cp01

0x579b,	// (0x000ae0b7) cell_sctrl_middle_pane_cp01_ParamLimits

0x579b,	// (0x000ae0b7) cell_sctrl_middle_pane_cp01

0x57b8,	// (0x000ae0d4) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x57b8,	// (0x000ae0d4) cell_sctrl_middle_pane_cp01_g1

0x9454,	// (0x000b1d70) main_call4_pane

0x57ce,	// (0x000ae0ea) aid_size_button_call4_ParamLimits

0x57ce,	// (0x000ae0ea) aid_size_button_call4

0x57ff,	// (0x000ae11b) call4_windows_pane_ParamLimits

0x57ff,	// (0x000ae11b) call4_windows_pane

0x581f,	// (0x000ae13b) grid_call4_button_pane_ParamLimits

0x581f,	// (0x000ae13b) grid_call4_button_pane

0xd618,	// (0x000b5f34) call4_windows_conf_pane

0xd62f,	// (0x000b5f4b) popup_call4_audio_first_window_ParamLimits

0xd62f,	// (0x000b5f4b) popup_call4_audio_first_window

0xd677,	// (0x000b5f93) popup_call4_audio_second_window_ParamLimits

0xd677,	// (0x000b5f93) popup_call4_audio_second_window

0xd690,	// (0x000b5fac) popup_call4_audio_wait_window_ParamLimits

0xd690,	// (0x000b5fac) popup_call4_audio_wait_window

0x584c,	// (0x000ae168) cell_call4_button_pane_ParamLimits

0x584c,	// (0x000ae168) cell_call4_button_pane

0x5875,	// (0x000ae191) bg_button_pane_cp09_ParamLimits

0x5875,	// (0x000ae191) bg_button_pane_cp09

0x5881,	// (0x000ae19d) cell_call4_button_pane_g1_ParamLimits

0x5881,	// (0x000ae19d) cell_call4_button_pane_g1

0x58a7,	// (0x000ae1c3) cell_call4_button_pane_t1_ParamLimits

0x58a7,	// (0x000ae1c3) cell_call4_button_pane_t1

0xd6a6,	// (0x000b5fc2) popup_call4_audio_conf_window_ParamLimits

0xd6a6,	// (0x000b5fc2) popup_call4_audio_conf_window

0x4af4,	// (0x000ad410) mup3_progress_pane_t1_ParamLimits

0x4b13,	// (0x000ad42f) mup3_progress_pane_t2_ParamLimits

0xcfca,	// (0x000b58e6) mup3_progress_pane_t3_ParamLimits

0xf7af,	// (0x000b80cb) mup3_progress_pane_t_ParamLimits

0xcfe7,	// (0x000b5903) mup_progress_pane_cp03_ParamLimits

0x50f9,	// (0x000ada15) mup3_control_keys_pane_g4_copy1

0x98ed,	// (0x000b2209) mp4_rocker2_pane_ParamLimits

0x98ed,	// (0x000b2209) mp4_rocker2_pane

0xd6ba,	// (0x000b5fd6) mp4_rocker2_pane_g1

0xd6c2,	// (0x000b5fde) mp4_rocker2_pane_g2

0x998d,	// (0x000b22a9) mp4_rocker2_pane_g3

0x9995,	// (0x000b22b1) mp4_rocker2_pane_g4

0x999d,	// (0x000b22b9) mp4_rocker2_pane_g5

0x0004,

0xf8e4,	// (0x000b8200) mp4_rocker2_pane_g

0x9454,	// (0x000b1d70) main_camera4_pane

0x9454,	// (0x000b1d70) main_video4_pane

0x536a,	// (0x000adc86) main_video_tele_dialer_pane_t1_ParamLimits

0x536a,	// (0x000adc86) main_video_tele_dialer_pane_t1

0x5383,	// (0x000adc9f) main_video_tele_dialer_pane_t2_ParamLimits

0x5383,	// (0x000adc9f) main_video_tele_dialer_pane_t2

0x0001,

0xf89e,	// (0x000b81ba) main_video_tele_dialer_pane_t_ParamLimits

0xf89e,	// (0x000b81ba) main_video_tele_dialer_pane_t

0x58e9,	// (0x000ae205) cam4_autofocus_pane_ParamLimits

0x58e9,	// (0x000ae205) cam4_autofocus_pane

0x58ff,	// (0x000ae21b) cam4_image_uncrop_pane_ParamLimits

0x58ff,	// (0x000ae21b) cam4_image_uncrop_pane

0x5919,	// (0x000ae235) cam4_indicators_pane_ParamLimits

0x5919,	// (0x000ae235) cam4_indicators_pane

0x5944,	// (0x000ae260) main_camera4_pane_g1_ParamLimits

0x5944,	// (0x000ae260) main_camera4_pane_g1

0x5956,	// (0x000ae272) main_camera4_pane_g2_ParamLimits

0x5956,	// (0x000ae272) main_camera4_pane_g2

0x5969,	// (0x000ae285) main_camera4_pane_g3_ParamLimits

0x5969,	// (0x000ae285) main_camera4_pane_g3

0x597c,	// (0x000ae298) main_camera4_pane_g4_ParamLimits

0x597c,	// (0x000ae298) main_camera4_pane_g4

0x598f,	// (0x000ae2ab) main_camera4_pane_g5_ParamLimits

0x598f,	// (0x000ae2ab) main_camera4_pane_g5

0x0005,

0xf8ef,	// (0x000b820b) main_camera4_pane_g_ParamLimits

0xf8ef,	// (0x000b820b) main_camera4_pane_g

0x59b3,	// (0x000ae2cf) main_camera4_pane_t1_ParamLimits

0x59b3,	// (0x000ae2cf) main_camera4_pane_t1

0x99c1,	// (0x000b22dd) bg_tb_trans_pane_cp06

0x99d7,	// (0x000b22f3) cam4_indicators_pane_g1

0x99e8,	// (0x000b2304) cam4_indicators_pane_g2

0x0002,

0xf90a,	// (0x000b8226) cam4_indicators_pane_g

0x9a00,	// (0x000b231c) cam4_indicators_pane_t1

0x5a17,	// (0x000ae333) main_video4_pane_g1_ParamLimits

0x5a17,	// (0x000ae333) main_video4_pane_g1

0x5a26,	// (0x000ae342) main_video4_pane_g2_ParamLimits

0x5a26,	// (0x000ae342) main_video4_pane_g2

0x5a35,	// (0x000ae351) main_video4_pane_g3_ParamLimits

0x5a35,	// (0x000ae351) main_video4_pane_g3

0x5a44,	// (0x000ae360) main_video4_pane_g4_ParamLimits

0x5a44,	// (0x000ae360) main_video4_pane_g4

0x0004,

0xf911,	// (0x000b822d) main_video4_pane_g_ParamLimits

0xf911,	// (0x000b822d) main_video4_pane_g

0x5a62,	// (0x000ae37e) vid4_indicators_pane_ParamLimits

0x5a62,	// (0x000ae37e) vid4_indicators_pane

0x5a90,	// (0x000ae3ac) video4_image_uncrop_cif_pane_ParamLimits

0x5a90,	// (0x000ae3ac) video4_image_uncrop_cif_pane

0x5aaa,	// (0x000ae3c6) video4_image_uncrop_nhd_pane_ParamLimits

0x5aaa,	// (0x000ae3c6) video4_image_uncrop_nhd_pane

0x58ff,	// (0x000ae21b) video4_image_uncrop_vga_pane_ParamLimits

0x58ff,	// (0x000ae21b) video4_image_uncrop_vga_pane

0x9446,	// (0x000b1d62) bg_tb_trans_pane_cp07

0x9a2a,	// (0x000b2346) vid4_indicators_pane_g1

0x9a3e,	// (0x000b235a) vid4_indicators_pane_g2

0x9a52,	// (0x000b236e) vid4_indicators_pane_g3

0x0004,

0xf91c,	// (0x000b8238) vid4_indicators_pane_g

0x9a7f,	// (0x000b239b) vid4_indicators_pane_t1

0x5abe,	// (0x000ae3da) cam4_autofocus_pane_g1

0x5ac6,	// (0x000ae3e2) cam4_autofocus_pane_g2

0x5ace,	// (0x000ae3ea) cam4_autofocus_pane_g3

0x0002,

0xf927,	// (0x000b8243) cam4_autofocus_pane_g

0x5ad6,	// (0x000ae3f2) cam4_autofocus_pane_g3_copy1

0x53b2,	// (0x000adcce) video_down_pane_cp_t1

0x53c0,	// (0x000adcdc) video_down_pane_cp_t2

0x0001,

0xf8a3,	// (0x000b81bf) video_down_pane_cp_t

0x9446,	// (0x000b1d62) popup_vitu2_window_ParamLimits

0x9446,	// (0x000b1d62) popup_vitu2_window

0x5ade,	// (0x000ae3fa) aid_size_cell2_itu2_ParamLimits

0x5ade,	// (0x000ae3fa) aid_size_cell2_itu2

0x5b04,	// (0x000ae420) aid_size_cell_itu2_ParamLimits

0x5b04,	// (0x000ae420) aid_size_cell_itu2

0x5b60,	// (0x000ae47c) bg_popup_window_pane_cp09_ParamLimits

0x5b60,	// (0x000ae47c) bg_popup_window_pane_cp09

0x5b6e,	// (0x000ae48a) field_vitu2_entry_pane_ParamLimits

0x5b6e,	// (0x000ae48a) field_vitu2_entry_pane

0x5b94,	// (0x000ae4b0) grid_vitu2_function_pane_ParamLimits

0x5b94,	// (0x000ae4b0) grid_vitu2_function_pane

0x5be5,	// (0x000ae501) grid_vitu2_itu_pane_ParamLimits

0x5be5,	// (0x000ae501) grid_vitu2_itu_pane

0x5c7b,	// (0x000ae597) cell_vitu2_itu_pane_ParamLimits

0x5c7b,	// (0x000ae597) cell_vitu2_itu_pane

0x5ca7,	// (0x000ae5c3) cell_vitu2_function_pane_ParamLimits

0x5ca7,	// (0x000ae5c3) cell_vitu2_function_pane

0xd6dc,	// (0x000b5ff8) bg_popup_call_pane_cp08_ParamLimits

0xd6dc,	// (0x000b5ff8) bg_popup_call_pane_cp08

0xd6f3,	// (0x000b600f) field_vitu2_entry_pane_g1

0xd6ff,	// (0x000b601b) field_vitu2_entry_pane_g2

0x0002,

0xf92e,	// (0x000b824a) field_vitu2_entry_pane_g

0x5ce6,	// (0x000ae602) field_vitu2_entry_pane_t1_ParamLimits

0x5ce6,	// (0x000ae602) field_vitu2_entry_pane_t1

0x9f2d,	// (0x000b2849) field_vitu2_entry_pane_t2_ParamLimits

0x9f2d,	// (0x000b2849) field_vitu2_entry_pane_t2

0x0001,

0xf935,	// (0x000b8251) field_vitu2_entry_pane_t_ParamLimits

0xf935,	// (0x000b8251) field_vitu2_entry_pane_t

0x5d15,	// (0x000ae631) bg_button_pane_cp010_ParamLimits

0x5d15,	// (0x000ae631) bg_button_pane_cp010

0x9a96,	// (0x000b23b2) cell_vitu2_itu_pane_g1

0x5d31,	// (0x000ae64d) cell_vitu2_itu_pane_t1_ParamLimits

0x5d31,	// (0x000ae64d) cell_vitu2_itu_pane_t1

0x0377,	// (0x000a8c93) cell_vitu2_itu_pane_t2_ParamLimits

0x0377,	// (0x000a8c93) cell_vitu2_itu_pane_t2

0x0002,

0xf93f,	// (0x000b825b) cell_vitu2_itu_pane_t_ParamLimits

0xf93f,	// (0x000b825b) cell_vitu2_itu_pane_t

0x9446,	// (0x000b1d62) bg_button_pane_cp011

0x5d8f,	// (0x000ae6ab) cell_vitu2_function_pane_g1

0x9454,	// (0x000b1d70) main_myfav_hc_pane

0x5763,	// (0x000ae07f) popup_image3_note_pane_ParamLimits

0x5763,	// (0x000ae07f) popup_image3_note_pane

0x577f,	// (0x000ae09b) popup_image3_tool_bar_pane_ParamLimits

0x577f,	// (0x000ae09b) popup_image3_tool_bar_pane

0x0405,	// (0x000a8d21) cell_vitu2_itu_pane_t3_ParamLimits

0x0405,	// (0x000a8d21) cell_vitu2_itu_pane_t3

0x9bb8,	// (0x000b24d4) bg_popup_trans_pane

0xd721,	// (0x000b603d) grid_image3_tool_bar_pane

0xd72b,	// (0x000b6047) bg_popup_trans_pane_g1

0xac9a,	// (0x000b35b6) bg_popup_trans_pane_g2

0xd733,	// (0x000b604f) bg_popup_trans_pane_g3

0xd73b,	// (0x000b6057) bg_popup_trans_pane_g4

0xd743,	// (0x000b605f) bg_popup_trans_pane_g5

0xd74b,	// (0x000b6067) bg_popup_trans_pane_g6

0xd753,	// (0x000b606f) bg_popup_trans_pane_g7

0xd75b,	// (0x000b6077) bg_popup_trans_pane_g8

0xac7a,	// (0x000b3596) bg_popup_trans_pane_g9

0x0008,

0xf946,	// (0x000b8262) bg_popup_trans_pane_g

0xd763,	// (0x000b607f) cell_image3_tool_bar_pane_ParamLimits

0xd763,	// (0x000b607f) cell_image3_tool_bar_pane

0xcd01,	// (0x000b561d) cell_image3_tool_bar_pane_g1

0x9bb8,	// (0x000b24d4) bg_popup_trans_pane_cp1

0xd777,	// (0x000b6093) popup_image3_note_pane_t1

0xd785,	// (0x000b60a1) popup_image3_note_pane_t2

0xd793,	// (0x000b60af) popup_image3_note_pane_t3

0x0002,

0xf959,	// (0x000b8275) popup_image3_note_pane_t

0xd7a1,	// (0x000b60bd) popup_image3_note_pane_t3_copy1

0x5da3,	// (0x000ae6bf) bg_myfav_hc_instruction_pane_ParamLimits

0x5da3,	// (0x000ae6bf) bg_myfav_hc_instruction_pane

0x5db7,	// (0x000ae6d3) cell_myfav_contact_pane_ParamLimits

0x5db7,	// (0x000ae6d3) cell_myfav_contact_pane

0x5dd5,	// (0x000ae6f1) cell_myfav_contact_pane_cp1_ParamLimits

0x5dd5,	// (0x000ae6f1) cell_myfav_contact_pane_cp1

0x5ded,	// (0x000ae709) cell_myfav_contact_pane_cp2_ParamLimits

0x5ded,	// (0x000ae709) cell_myfav_contact_pane_cp2

0x5e05,	// (0x000ae721) cell_myfav_contact_pane_cp3_ParamLimits

0x5e05,	// (0x000ae721) cell_myfav_contact_pane_cp3

0x5e1c,	// (0x000ae738) cell_myfav_contact_pane_cp4_ParamLimits

0x5e1c,	// (0x000ae738) cell_myfav_contact_pane_cp4

0x5e34,	// (0x000ae750) cell_myfav_contact_pane_cp5_ParamLimits

0x5e34,	// (0x000ae750) cell_myfav_contact_pane_cp5

0x5e48,	// (0x000ae764) cell_myfav_contact_pane_cp6_ParamLimits

0x5e48,	// (0x000ae764) cell_myfav_contact_pane_cp6

0x5e5e,	// (0x000ae77a) cell_myfav_contact_pane_cp7_ParamLimits

0x5e5e,	// (0x000ae77a) cell_myfav_contact_pane_cp7

0xd7af,	// (0x000b60cb) listscroll_gen_pane_cp05

0x5e78,	// (0x000ae794) main_myfav_hc_pane_g1_ParamLimits

0x5e78,	// (0x000ae794) main_myfav_hc_pane_g1

0x5e92,	// (0x000ae7ae) main_myfav_hc_pane_g2_ParamLimits

0x5e92,	// (0x000ae7ae) main_myfav_hc_pane_g2

0x0002,

0xf960,	// (0x000b827c) main_myfav_hc_pane_g_ParamLimits

0xf960,	// (0x000b827c) main_myfav_hc_pane_g

0x5ec4,	// (0x000ae7e0) main_myfav_hc_pane_t1_ParamLimits

0x5ec4,	// (0x000ae7e0) main_myfav_hc_pane_t1

0xd7b8,	// (0x000b60d4) main_myfav_hc_pane_t2_ParamLimits

0xd7b8,	// (0x000b60d4) main_myfav_hc_pane_t2

0xd7ca,	// (0x000b60e6) main_myfav_hc_pane_t3_ParamLimits

0xd7ca,	// (0x000b60e6) main_myfav_hc_pane_t3

0x5edb,	// (0x000ae7f7) main_myfav_hc_pane_t4_ParamLimits

0x5edb,	// (0x000ae7f7) main_myfav_hc_pane_t4

0x0004,

0xf967,	// (0x000b8283) main_myfav_hc_pane_t_ParamLimits

0xf967,	// (0x000b8283) main_myfav_hc_pane_t

0xcd01,	// (0x000b561d) bg_myfav_hc_instruction_pane_g1

0xd7dc,	// (0x000b60f8) cell_myfav_contact_pane_g1_ParamLimits

0xd7dc,	// (0x000b60f8) cell_myfav_contact_pane_g1

0xd7dc,	// (0x000b60f8) cell_myfav_contact_pane_g2_ParamLimits

0xd7dc,	// (0x000b60f8) cell_myfav_contact_pane_g2

0xd7e8,	// (0x000b6104) cell_myfav_contact_pane_g3_ParamLimits

0xd7e8,	// (0x000b6104) cell_myfav_contact_pane_g3

0xcfb4,	// (0x000b58d0) cell_myfav_contact_pane_g4_ParamLimits

0xcfb4,	// (0x000b58d0) cell_myfav_contact_pane_g4

0xd7f5,	// (0x000b6111) cell_myfav_contact_pane_g5_ParamLimits

0xd7f5,	// (0x000b6111) cell_myfav_contact_pane_g5

0x0004,

0xf972,	// (0x000b828e) cell_myfav_contact_pane_g_ParamLimits

0xf972,	// (0x000b828e) cell_myfav_contact_pane_g

0x5eac,	// (0x000ae7c8) main_myfav_hc_pane_g3_ParamLimits

0x5eac,	// (0x000ae7c8) main_myfav_hc_pane_g3

0x05da,	// (0x000a8ef6) popup_adpt_find_window

0x5f03,	// (0x000ae81f) afind_page_pane_ParamLimits

0x5f03,	// (0x000ae81f) afind_page_pane

0x5f18,	// (0x000ae834) aid_size_cell_afind_ParamLimits

0x5f18,	// (0x000ae834) aid_size_cell_afind

0x5f36,	// (0x000ae852) bg_popup_sub_pane_cp09_ParamLimits

0x5f36,	// (0x000ae852) bg_popup_sub_pane_cp09

0x5f43,	// (0x000ae85f) find_pane_cp01_ParamLimits

0x5f43,	// (0x000ae85f) find_pane_cp01

0xd801,	// (0x000b611d) grid_afind_control_pane_ParamLimits

0xd801,	// (0x000b611d) grid_afind_control_pane

0x5f50,	// (0x000ae86c) grid_afind_pane_ParamLimits

0x5f50,	// (0x000ae86c) grid_afind_pane

0x5f6f,	// (0x000ae88b) cell_afind_pane_ParamLimits

0x5f6f,	// (0x000ae88b) cell_afind_pane

0xcd01,	// (0x000b561d) afind_page_pane_g1

0x5fd6,	// (0x000ae8f2) afind_page_pane_g2

0x5fdf,	// (0x000ae8fb) afind_page_pane_g3

0x0002,

0xf97d,	// (0x000b8299) afind_page_pane_g

0x5fe8,	// (0x000ae904) afind_page_pane_t1

0xd815,	// (0x000b6131) cell_afind_grid_control_pane_ParamLimits

0xd815,	// (0x000b6131) cell_afind_grid_control_pane

0xd60c,	// (0x000b5f28) bg_button_pane_cp69_ParamLimits

0xd60c,	// (0x000b5f28) bg_button_pane_cp69

0x6008,	// (0x000ae924) cell_afind_pane_g1_ParamLimits

0x6008,	// (0x000ae924) cell_afind_pane_g1

0x6015,	// (0x000ae931) cell_afind_pane_t1_ParamLimits

0x6015,	// (0x000ae931) cell_afind_pane_t1

0xaa75,	// (0x000b3391) bg_button_pane_cp72

0xd824,	// (0x000b6140) cell_afind_grid_control_pane_g1

0x306e,	// (0x000ab98a) aid_image_placing_area_ParamLimits

0x306e,	// (0x000ab98a) aid_image_placing_area

0xd2da,	// (0x000b5bf6) field_vitu_entry_pane_g1_ParamLimits

0xd2da,	// (0x000b5bf6) field_vitu_entry_pane_g1

0xd2e6,	// (0x000b5c02) field_vitu_entry_pane_g2_ParamLimits

0xd2e6,	// (0x000b5c02) field_vitu_entry_pane_g2

0x0001,

0xf82e,	// (0x000b814a) field_vitu_entry_pane_g_ParamLimits

0xf82e,	// (0x000b814a) field_vitu_entry_pane_g

0x51c2,	// (0x000adade) cell_vitu_itu_pane_g1_ParamLimits

0x5204,	// (0x000adb20) cell_vitu_itu_pane_t3_ParamLimits

0x5204,	// (0x000adb20) cell_vitu_itu_pane_t3

0xd5bc,	// (0x000b5ed8) mp4_progress_pane_t1_ParamLimits

0xd5d5,	// (0x000b5ef1) mp4_progress_pane_t2_ParamLimits

0xf8c3,	// (0x000b81df) mp4_progress_pane_t_ParamLimits

0xd5ee,	// (0x000b5f0a) mup_progress_pane_cp04_ParamLimits

0x5eef,	// (0x000ae80b) main_myfav_hc_pane_t5_ParamLimits

0x5eef,	// (0x000ae80b) main_myfav_hc_pane_t5

0x93f4,	// (0x000b1d10) aid_zoom_text_primary

0x05da,	// (0x000a8ef6) popup_adpt_find_window_ParamLimits

0x9446,	// (0x000b1d62) main_cam_set_pane

0x5930,	// (0x000ae24c) cam4_zoom_pane_ParamLimits

0x5930,	// (0x000ae24c) cam4_zoom_pane

0x6027,	// (0x000ae943) main_cam_set_pane_g1_ParamLimits

0x6027,	// (0x000ae943) main_cam_set_pane_g1

0x6035,	// (0x000ae951) main_cam_set_pane_g2_ParamLimits

0x6035,	// (0x000ae951) main_cam_set_pane_g2

0x0001,

0xf984,	// (0x000b82a0) main_cam_set_pane_g_ParamLimits

0xf984,	// (0x000b82a0) main_cam_set_pane_g

0x6056,	// (0x000ae972) main_cam_set_pane_t1_ParamLimits

0x6056,	// (0x000ae972) main_cam_set_pane_t1

0x6071,	// (0x000ae98d) main_cset_listscroll_pane_ParamLimits

0x6071,	// (0x000ae98d) main_cset_listscroll_pane

0x6091,	// (0x000ae9ad) main_cset_slider_pane_ParamLimits

0x6091,	// (0x000ae9ad) main_cset_slider_pane

0xd835,	// (0x000b6151) main_cset_list_pane_ParamLimits

0xd835,	// (0x000b6151) main_cset_list_pane

0xd845,	// (0x000b6161) scroll_pane_cp028

0x60b7,	// (0x000ae9d3) aid_area_touch_slider

0x60d3,	// (0x000ae9ef) cset_slider_pane

0x60fd,	// (0x000aea19) main_cset_slider_pane_g1

0x6112,	// (0x000aea2e) main_cset_slider_pane_g2

0x0011,

0xf989,	// (0x000b82a5) main_cset_slider_pane_g

0xd896,	// (0x000b61b2) main_cset_slider_pane_t1

0x61b6,	// (0x000aead2) main_cset_slider_pane_t2

0x61d0,	// (0x000aeaec) main_cset_slider_pane_t3

0x61ea,	// (0x000aeb06) main_cset_slider_pane_t4

0x6204,	// (0x000aeb20) main_cset_slider_pane_t5

0x621e,	// (0x000aeb3a) main_cset_slider_pane_t6

0x6233,	// (0x000aeb4f) main_cset_slider_pane_t7

0x000e,

0xf9ae,	// (0x000b82ca) main_cset_slider_pane_t

0x6337,	// (0x000aec53) cset_list_set_pane_ParamLimits

0x6337,	// (0x000aec53) cset_list_set_pane

0x6349,	// (0x000aec65) aid_position_infowindow_above

0x6351,	// (0x000aec6d) aid_position_infowindow_below

0x6359,	// (0x000aec75) cset_list_set_pane_g1_ParamLimits

0x6359,	// (0x000aec75) cset_list_set_pane_g1

0x6365,	// (0x000aec81) cset_list_set_pane_g3_ParamLimits

0x6365,	// (0x000aec81) cset_list_set_pane_g3

0x0001,

0xf9cd,	// (0x000b82e9) cset_list_set_pane_g_ParamLimits

0xf9cd,	// (0x000b82e9) cset_list_set_pane_g

0x6374,	// (0x000aec90) cset_list_set_pane_t1_ParamLimits

0x6374,	// (0x000aec90) cset_list_set_pane_t1

0xb2b7,	// (0x000b3bd3) list_highlight_pane_cp021_ParamLimits

0xb2b7,	// (0x000b3bd3) list_highlight_pane_cp021

0xb5d8,	// (0x000b3ef4) cset_slider_pane_g1

0xb5ea,	// (0x000b3f06) cset_slider_pane_g2

0xb5e1,	// (0x000b3efd) cset_slider_pane_g3

0x0002,

0xf9d2,	// (0x000b82ee) cset_slider_pane_g

0x9aa8,	// (0x000b23c4) aid_area_touch_cam4_zoom

0x9ab0,	// (0x000b23cc) cam4_zoom_cont_pane

0x9ab8,	// (0x000b23d4) cam4_zoom_pane_g1

0x9ac0,	// (0x000b23dc) cam4_zoom_pane_g2

0x6389,	// (0x000aeca5) cam4_zoom_pane_g3

0x0002,

0xf9d9,	// (0x000b82f5) cam4_zoom_pane_g

0x9ac8,	// (0x000b23e4) cam4_zoom_cont_pane_g1

0x9ad1,	// (0x000b23ed) cam4_zoom_cont_pane_g2

0x9ada,	// (0x000b23f6) cam4_zoom_cont_pane_g3

0x0002,

0xf9e0,	// (0x000b82fc) cam4_zoom_cont_pane_g

0x57ec,	// (0x000ae108) call4_image_pane_ParamLimits

0x57ec,	// (0x000ae108) call4_image_pane

0xd618,	// (0x000b5f34) call4_windows_conf_pane_ParamLimits

0xd655,	// (0x000b5f71) popup_call4_audio_in_window_ParamLimits

0xd655,	// (0x000b5f71) popup_call4_audio_in_window

0x9bb8,	// (0x000b24d4) bg_popup_call2_act_pane_cp02

0xd69e,	// (0x000b5fba) call4_list_conf_pane

0xcd01,	// (0x000b561d) call4_image_pane_g1

0xcd01,	// (0x000b561d) call4_image_pane_g2

0x0001,

0xf6ef,	// (0x000b800b) call4_image_pane_g

0xd936,	// (0x000b6252) list_single_graphic_popup_conf4_pane_ParamLimits

0xd936,	// (0x000b6252) list_single_graphic_popup_conf4_pane

0x9bb8,	// (0x000b24d4) list_highlight_pane_cp022

0xd949,	// (0x000b6265) list_single_graphic_popup_conf4_pane_g1

0xb1b4,	// (0x000b3ad0) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf9e7,	// (0x000b8303) list_single_graphic_popup_conf4_pane_g

0xd951,	// (0x000b626d) list_single_graphic_popup_conf4_pane_t1

0x16a6,	// (0x000a9fc2) popup_vtel_slider_window_ParamLimits

0x16a6,	// (0x000a9fc2) popup_vtel_slider_window

0xd5fa,	// (0x000b5f16) dialer2_ne_pane_t2_ParamLimits

0xd5fa,	// (0x000b5f16) dialer2_ne_pane_t2

0x0001,

0xf8c8,	// (0x000b81e4) dialer2_ne_pane_t_ParamLimits

0xf8c8,	// (0x000b81e4) dialer2_ne_pane_t

0xcae6,	// (0x000b5402) bg_popup_sub_pane_cp010_ParamLimits

0xcae6,	// (0x000b5402) bg_popup_sub_pane_cp010

0x6391,	// (0x000aecad) popup_vtel_slider_window_g1_ParamLimits

0x6391,	// (0x000aecad) popup_vtel_slider_window_g1

0x63a4,	// (0x000aecc0) popup_vtel_slider_window_g2_ParamLimits

0x63a4,	// (0x000aecc0) popup_vtel_slider_window_g2

0x0003,

0xf9ec,	// (0x000b8308) popup_vtel_slider_window_g_ParamLimits

0xf9ec,	// (0x000b8308) popup_vtel_slider_window_g

0x63fa,	// (0x000aed16) vtel_slider_pane_ParamLimits

0x63fa,	// (0x000aed16) vtel_slider_pane

0x641c,	// (0x000aed38) vtel_slider_pane_g1_ParamLimits

0x641c,	// (0x000aed38) vtel_slider_pane_g1

0x6430,	// (0x000aed4c) vtel_slider_pane_g2_ParamLimits

0x6430,	// (0x000aed4c) vtel_slider_pane_g2

0x6448,	// (0x000aed64) vtel_slider_pane_g3_ParamLimits

0x6448,	// (0x000aed64) vtel_slider_pane_g3

0x641c,	// (0x000aed38) vtel_slider_pane_g4_ParamLimits

0x641c,	// (0x000aed38) vtel_slider_pane_g4

0x645e,	// (0x000aed7a) vtel_slider_pane_g5_ParamLimits

0x645e,	// (0x000aed7a) vtel_slider_pane_g5

0x0004,

0xf9f5,	// (0x000b8311) vtel_slider_pane_g_ParamLimits

0xf9f5,	// (0x000b8311) vtel_slider_pane_g

0x9446,	// (0x000b1d62) main_gallery2_pane

0x5b30,	// (0x000ae44c) aid_size_row_itut2_dropdow_list_ParamLimits

0x5b30,	// (0x000ae44c) aid_size_row_itut2_dropdow_list

0x5bbc,	// (0x000ae4d8) grid_vitu2_function_top_pane_ParamLimits

0x5bbc,	// (0x000ae4d8) grid_vitu2_function_top_pane

0x5c26,	// (0x000ae542) popup_vitu2_dropdown_list_window_ParamLimits

0x5c26,	// (0x000ae542) popup_vitu2_dropdown_list_window

0x5c4f,	// (0x000ae56b) popup_vitu2_match_list_window

0x6482,	// (0x000aed9e) cell_vitu2_function_top_pane_ParamLimits

0x6482,	// (0x000aed9e) cell_vitu2_function_top_pane

0x649a,	// (0x000aedb6) cell_vitu2_function_top_pane_cp01_ParamLimits

0x649a,	// (0x000aedb6) cell_vitu2_function_top_pane_cp01

0x64b6,	// (0x000aedd2) cell_vitu2_function_top_wide_pane_ParamLimits

0x64b6,	// (0x000aedd2) cell_vitu2_function_top_wide_pane

0x9446,	// (0x000b1d62) bg_button_pane_cp012

0x64d2,	// (0x000aedee) cell_vitu2_function_top_pane_g1

0x9ae3,	// (0x000b23ff) bg_button_pane_cp013_ParamLimits

0x9ae3,	// (0x000b23ff) bg_button_pane_cp013

0x64e6,	// (0x000aee02) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x64e6,	// (0x000aee02) cell_vitu2_function_top_wide_pane_g1

0x9446,	// (0x000b1d62) bg_popup_sub_pane_cp20

0x64fe,	// (0x000aee1a) list_vitu2_match_list_pane

0xd72b,	// (0x000b6047) bg_popup_sub_pane_cp20_g1

0xd733,	// (0x000b604f) bg_popup_sub_pane_cp20_g2

0xac9a,	// (0x000b35b6) bg_popup_sub_pane_cp20_g3

0xd73b,	// (0x000b6057) bg_popup_sub_pane_cp20_g4

0xac7a,	// (0x000b3596) bg_popup_sub_pane_cp20_g5

0xd967,	// (0x000b6283) bg_popup_sub_pane_cp20_g6

0xd74b,	// (0x000b6067) bg_popup_sub_pane_cp20_g7

0xd753,	// (0x000b606f) bg_popup_sub_pane_cp20_g8

0xd75b,	// (0x000b6077) bg_popup_sub_pane_cp20_g9

0x0008,

0xfa00,	// (0x000b831c) bg_popup_sub_pane_cp20_g

0x9aff,	// (0x000b241b) list_vitu2_match_list_item_pane_ParamLimits

0x9aff,	// (0x000b241b) list_vitu2_match_list_item_pane

0x9b11,	// (0x000b242d) list_vitu2_match_list_item_pane_t1

0x9454,	// (0x000b1d70) bg_popup_sub_pane_cp21

0x9b1f,	// (0x000b243b) grid_vitu2_dropdown_list_pane

0x656c,	// (0x000aee88) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x656c,	// (0x000aee88) cell_vitu2_dropdown_list_char_pane

0x658d,	// (0x000aeea9) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x658d,	// (0x000aeea9) cell_vitu2_dropdown_list_ctrl_pane

0xd96f,	// (0x000b628b) cell_vitu2_dropdown_list_char_pane_g1

0xd978,	// (0x000b6294) cell_vitu2_dropdown_list_char_pane_g2

0xd981,	// (0x000b629d) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xfa1d,	// (0x000b8339) cell_vitu2_dropdown_list_char_pane_g

0x65b9,	// (0x000aeed5) cell_vitu2_dropdown_list_char_pane_t1

0x65c7,	// (0x000aeee3) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x65c7,	// (0x000aeee3) cell_vitu2_dropdown_list_ctrl_pane_g1

0x65d4,	// (0x000aeef0) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x65d4,	// (0x000aeef0) cell_vitu2_dropdown_list_ctrl_pane_g2

0x65e1,	// (0x000aeefd) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x65e1,	// (0x000aeefd) cell_vitu2_dropdown_list_ctrl_pane_g3

0x65ee,	// (0x000aef0a) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x65ee,	// (0x000aef0a) cell_vitu2_dropdown_list_ctrl_pane_g4

0x99c1,	// (0x000b22dd) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0x99c1,	// (0x000b22dd) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa24,	// (0x000b8340) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa24,	// (0x000b8340) cell_vitu2_dropdown_list_ctrl_pane_g

0x660a,	// (0x000aef26) aid_size_cell_gallery2_ParamLimits

0x660a,	// (0x000aef26) aid_size_cell_gallery2

0x6628,	// (0x000aef44) grid_gallery2_pane_ParamLimits

0x6628,	// (0x000aef44) grid_gallery2_pane

0x6642,	// (0x000aef5e) scroll_pane_cp029_ParamLimits

0x6642,	// (0x000aef5e) scroll_pane_cp029

0x6653,	// (0x000aef6f) cell_gallery2_pane_ParamLimits

0x6653,	// (0x000aef6f) cell_gallery2_pane

0xd99c,	// (0x000b62b8) cell_gallery2_pane_g2

0x66b2,	// (0x000aefce) cell_gallery2_pane_g3

0xd9a4,	// (0x000b62c0) cell_gallery2_pane_g4

0xd9ac,	// (0x000b62c8) cell_gallery2_pane_g5

0xaa23,	// (0x000b333f) grid_highlight_pane_cp10

0x5c4f,	// (0x000ae56b) popup_vitu2_match_list_window_ParamLimits

0x5c64,	// (0x000ae580) popup_vitu2_query_window_ParamLimits

0x5c64,	// (0x000ae580) popup_vitu2_query_window

0x9454,	// (0x000b1d70) bg_vitu2_candi_button_pane

0xd96f,	// (0x000b628b) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xd978,	// (0x000b6294) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xd981,	// (0x000b629d) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x66ba,	// (0x000aefd6) bg_button_pane_cp015

0x66ce,	// (0x000aefea) bg_button_pane_cp016

0x66e1,	// (0x000aeffd) bg_button_pane_cp017

0xc8ed,	// (0x000b5209) bg_popup_sub_pane_cp22

0xd9b4,	// (0x000b62d0) popup_vitu2_query_window_g1

0x6726,	// (0x000af042) popup_vitu2_query_window_g2

0x0002,

0xfa2f,	// (0x000b834b) popup_vitu2_query_window_g

0x6745,	// (0x000af061) popup_vitu2_query_window_t1_ParamLimits

0x6745,	// (0x000af061) popup_vitu2_query_window_t1

0x677a,	// (0x000af096) popup_vitu2_query_window_t2_ParamLimits

0x677a,	// (0x000af096) popup_vitu2_query_window_t2

0x678c,	// (0x000af0a8) popup_vitu2_query_window_t3_ParamLimits

0x678c,	// (0x000af0a8) popup_vitu2_query_window_t3

0x67b4,	// (0x000af0d0) popup_vitu2_query_window_t4_ParamLimits

0x67b4,	// (0x000af0d0) popup_vitu2_query_window_t4

0x67d5,	// (0x000af0f1) popup_vitu2_query_window_t5_ParamLimits

0x67d5,	// (0x000af0f1) popup_vitu2_query_window_t5

0x0006,

0xfa36,	// (0x000b8352) popup_vitu2_query_window_t_ParamLimits

0xfa36,	// (0x000b8352) popup_vitu2_query_window_t

0xd82d,	// (0x000b6149) main_cset_text_pane

0x60b7,	// (0x000ae9d3) aid_area_touch_slider_ParamLimits

0x60d3,	// (0x000ae9ef) cset_slider_pane_ParamLimits

0x60fd,	// (0x000aea19) main_cset_slider_pane_g1_ParamLimits

0x6112,	// (0x000aea2e) main_cset_slider_pane_g2_ParamLimits

0xd84e,	// (0x000b616a) main_cset_slider_pane_g3_ParamLimits

0xd84e,	// (0x000b616a) main_cset_slider_pane_g3

0x6127,	// (0x000aea43) main_cset_slider_pane_g4_ParamLimits

0x6127,	// (0x000aea43) main_cset_slider_pane_g4

0x6136,	// (0x000aea52) main_cset_slider_pane_g5_ParamLimits

0x6136,	// (0x000aea52) main_cset_slider_pane_g5

0x6142,	// (0x000aea5e) main_cset_slider_pane_g6_ParamLimits

0x6142,	// (0x000aea5e) main_cset_slider_pane_g6

0xf989,	// (0x000b82a5) main_cset_slider_pane_g_ParamLimits

0xd896,	// (0x000b61b2) main_cset_slider_pane_t1_ParamLimits

0x61b6,	// (0x000aead2) main_cset_slider_pane_t2_ParamLimits

0x61d0,	// (0x000aeaec) main_cset_slider_pane_t3_ParamLimits

0x61ea,	// (0x000aeb06) main_cset_slider_pane_t4_ParamLimits

0x6204,	// (0x000aeb20) main_cset_slider_pane_t5_ParamLimits

0x621e,	// (0x000aeb3a) main_cset_slider_pane_t6_ParamLimits

0x6233,	// (0x000aeb4f) main_cset_slider_pane_t7_ParamLimits

0x625d,	// (0x000aeb79) main_cset_slider_pane_t8_ParamLimits

0x625d,	// (0x000aeb79) main_cset_slider_pane_t8

0x6285,	// (0x000aeba1) main_cset_slider_pane_t9_ParamLimits

0x6285,	// (0x000aeba1) main_cset_slider_pane_t9

0x62ad,	// (0x000aebc9) main_cset_slider_pane_t10_ParamLimits

0x62ad,	// (0x000aebc9) main_cset_slider_pane_t10

0x62d5,	// (0x000aebf1) main_cset_slider_pane_t11_ParamLimits

0x62d5,	// (0x000aebf1) main_cset_slider_pane_t11

0x62fd,	// (0x000aec19) main_cset_slider_pane_t12_ParamLimits

0x62fd,	// (0x000aec19) main_cset_slider_pane_t12

0x631a,	// (0x000aec36) main_cset_slider_pane_t13_ParamLimits

0x631a,	// (0x000aec36) main_cset_slider_pane_t13

0xf9ae,	// (0x000b82ca) main_cset_slider_pane_t_ParamLimits

0x9bb8,	// (0x000b24d4) bg_popup_sub_pane_cp011

0xd9c0,	// (0x000b62dc) main_cset_text_pane_g1

0xd9c8,	// (0x000b62e4) main_cset_text_pane_t1

0xd9d6,	// (0x000b62f2) main_cset_text_pane_t2

0xd9e4,	// (0x000b6300) main_cset_text_pane_t3

0xd9f2,	// (0x000b630e) main_cset_text_pane_t4

0xda00,	// (0x000b631c) main_cset_text_pane_t5

0xda0e,	// (0x000b632a) main_cset_text_pane_t6

0xda1c,	// (0x000b6338) main_cset_text_pane_t7

0x0006,

0xfa45,	// (0x000b8361) main_cset_text_pane_t

0x9454,	// (0x000b1d70) main_cam4_burst_pane

0x9454,	// (0x000b1d70) main_cam5_pane

0x5ff6,	// (0x000ae912) bg_button_pane_cp019

0x5fff,	// (0x000ae91b) bg_button_pane_cp020

0xd85a,	// (0x000b6176) main_cset_slider_pane_g7_ParamLimits

0xd85a,	// (0x000b6176) main_cset_slider_pane_g7

0xd866,	// (0x000b6182) main_cset_slider_pane_g8_ParamLimits

0xd866,	// (0x000b6182) main_cset_slider_pane_g8

0x6156,	// (0x000aea72) main_cset_slider_pane_g9_ParamLimits

0x6156,	// (0x000aea72) main_cset_slider_pane_g9

0x6162,	// (0x000aea7e) main_cset_slider_pane_g10_ParamLimits

0x6162,	// (0x000aea7e) main_cset_slider_pane_g10

0x616e,	// (0x000aea8a) main_cset_slider_pane_g11_ParamLimits

0x616e,	// (0x000aea8a) main_cset_slider_pane_g11

0x617a,	// (0x000aea96) main_cset_slider_pane_g12_ParamLimits

0x617a,	// (0x000aea96) main_cset_slider_pane_g12

0x6186,	// (0x000aeaa2) main_cset_slider_pane_g13_ParamLimits

0x6186,	// (0x000aeaa2) main_cset_slider_pane_g13

0x6192,	// (0x000aeaae) main_cset_slider_pane_g14_ParamLimits

0x6192,	// (0x000aeaae) main_cset_slider_pane_g14

0x619e,	// (0x000aeaba) main_cset_slider_pane_g15_ParamLimits

0x619e,	// (0x000aeaba) main_cset_slider_pane_g15

0xd8c4,	// (0x000b61e0) main_cset_slider_pane_t14_ParamLimits

0xd8c4,	// (0x000b61e0) main_cset_slider_pane_t14

0xd8fd,	// (0x000b6219) main_cset_slider_pane_t15_ParamLimits

0xd8fd,	// (0x000b6219) main_cset_slider_pane_t15

0x684c,	// (0x000af168) aid_cam4_burst_size_cell_ParamLimits

0x684c,	// (0x000af168) aid_cam4_burst_size_cell

0x686c,	// (0x000af188) grid_cam4_burst_pane_ParamLimits

0x686c,	// (0x000af188) grid_cam4_burst_pane

0x68a4,	// (0x000af1c0) linegrid_cam4_burst_pane_ParamLimits

0x68a4,	// (0x000af1c0) linegrid_cam4_burst_pane

0xda2a,	// (0x000b6346) scroll_pane_cp30_ParamLimits

0xda2a,	// (0x000b6346) scroll_pane_cp30

0x68c8,	// (0x000af1e4) cell_cam4_burst_pane_ParamLimits

0x68c8,	// (0x000af1e4) cell_cam4_burst_pane

0xda36,	// (0x000b6352) linegrid_cam4_burst_pane_g1_ParamLimits

0xda36,	// (0x000b6352) linegrid_cam4_burst_pane_g1

0x6915,	// (0x000af231) linegrid_cam4_burst_pane_g2_ParamLimits

0x6915,	// (0x000af231) linegrid_cam4_burst_pane_g2

0xda43,	// (0x000b635f) linegrid_cam4_burst_pane_g3_ParamLimits

0xda43,	// (0x000b635f) linegrid_cam4_burst_pane_g3

0x0002,

0xfa54,	// (0x000b8370) linegrid_cam4_burst_pane_g_ParamLimits

0xfa54,	// (0x000b8370) linegrid_cam4_burst_pane_g

0x6926,	// (0x000af242) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x6926,	// (0x000af242) linegrid_cam4_burst_pane_g3_copy1

0xda50,	// (0x000b636c) linegrid_cam4_burst_pane_g4_ParamLimits

0xda50,	// (0x000b636c) linegrid_cam4_burst_pane_g4

0x6940,	// (0x000af25c) linegrid_cam4_burst_pane_g5_ParamLimits

0x6940,	// (0x000af25c) linegrid_cam4_burst_pane_g5

0x6951,	// (0x000af26d) linegrid_cam4_burst_pane_g6_ParamLimits

0x6951,	// (0x000af26d) linegrid_cam4_burst_pane_g6

0xda5d,	// (0x000b6379) linegrid_cam4_burst_pane_g7_ParamLimits

0xda5d,	// (0x000b6379) linegrid_cam4_burst_pane_g7

0x6968,	// (0x000af284) cell_cam4_burst_pane_g1

0xda76,	// (0x000b6392) main_cam5_pane_t1_ParamLimits

0xda76,	// (0x000b6392) main_cam5_pane_t1

0xda88,	// (0x000b63a4) main_cam5_pane_t2_ParamLimits

0xda88,	// (0x000b63a4) main_cam5_pane_t2

0xda9a,	// (0x000b63b6) main_cam5_pane_t3_ParamLimits

0xda9a,	// (0x000b63b6) main_cam5_pane_t3

0xdaac,	// (0x000b63c8) main_cam5_pane_t4_ParamLimits

0xdaac,	// (0x000b63c8) main_cam5_pane_t4

0xdac4,	// (0x000b63e0) main_cam5_pane_t5_ParamLimits

0xdac4,	// (0x000b63e0) main_cam5_pane_t5

0xdad8,	// (0x000b63f4) main_cam5_pane_t6_ParamLimits

0xdad8,	// (0x000b63f4) main_cam5_pane_t6

0xdaec,	// (0x000b6408) main_cam5_pane_t7_ParamLimits

0xdaec,	// (0x000b6408) main_cam5_pane_t7

0xdafe,	// (0x000b641a) main_cam5_pane_t8_ParamLimits

0xdafe,	// (0x000b641a) main_cam5_pane_t8

0xdb1a,	// (0x000b6436) main_cam5_pane_t9_ParamLimits

0xdb1a,	// (0x000b6436) main_cam5_pane_t9

0xdb2c,	// (0x000b6448) main_cam5_pane_t10_ParamLimits

0xdb2c,	// (0x000b6448) main_cam5_pane_t10

0xdb3e,	// (0x000b645a) main_cam5_pane_t11_ParamLimits

0xdb3e,	// (0x000b645a) main_cam5_pane_t11

0xdb50,	// (0x000b646c) main_cam5_pane_t12_ParamLimits

0xdb50,	// (0x000b646c) main_cam5_pane_t12

0xdb65,	// (0x000b6481) main_cam5_pane_t13_ParamLimits

0xdb65,	// (0x000b6481) main_cam5_pane_t13

0x000c,

0xfa60,	// (0x000b837c) main_cam5_pane_t_ParamLimits

0xfa60,	// (0x000b837c) main_cam5_pane_t

0x065c,	// (0x000a8f78) popup_scut_keymap_window_ParamLimits

0x065c,	// (0x000a8f78) popup_scut_keymap_window

0x697b,	// (0x000af297) aid_size_cell_brow_shortcut

0xaa23,	// (0x000b333f) bg_popup_window_pane_cp010

0x6987,	// (0x000af2a3) grid_scut_pane

0x6993,	// (0x000af2af) cell_scut_pane_ParamLimits

0x6993,	// (0x000af2af) cell_scut_pane

0x69aa,	// (0x000af2c6) cell_scut_pane_g1

0xdb82,	// (0x000b649e) cell_scut_pane_t1

0xdb91,	// (0x000b64ad) cell_scut_pane_t2

0x69b3,	// (0x000af2cf) cell_scut_pane_t3

0x0002,

0xfa7b,	// (0x000b8397) cell_scut_pane_t

0x46b7,	// (0x000acfd3) main_mup3_pane_g8_ParamLimits

0x46b7,	// (0x000acfd3) main_mup3_pane_g8

0x5b48,	// (0x000ae464) area_vitu2_query_pane_ParamLimits

0x5b48,	// (0x000ae464) area_vitu2_query_pane

0x66f4,	// (0x000af010) input_focus_pane_cp08

0xdba0,	// (0x000b64bc) area_vitu2_query_pane_g1

0x69c1,	// (0x000af2dd) area_vitu2_query_pane_g2

0x0001,

0xfa82,	// (0x000b839e) area_vitu2_query_pane_g

0x69d2,	// (0x000af2ee) area_vitu2_query_pane_t1_ParamLimits

0x69d2,	// (0x000af2ee) area_vitu2_query_pane_t1

0x69e6,	// (0x000af302) area_vitu2_query_pane_t2_ParamLimits

0x69e6,	// (0x000af302) area_vitu2_query_pane_t2

0x69fa,	// (0x000af316) area_vitu2_query_pane_t3_ParamLimits

0x69fa,	// (0x000af316) area_vitu2_query_pane_t3

0x9f4a,	// (0x000b2866) area_vitu2_query_pane_t4_ParamLimits

0x9f4a,	// (0x000b2866) area_vitu2_query_pane_t4

0x9f72,	// (0x000b288e) area_vitu2_query_pane_t5_ParamLimits

0x9f72,	// (0x000b288e) area_vitu2_query_pane_t5

0x9f9a,	// (0x000b28b6) area_vitu2_query_pane_t6_ParamLimits

0x9f9a,	// (0x000b28b6) area_vitu2_query_pane_t6

0x0006,

0xfa87,	// (0x000b83a3) area_vitu2_query_pane_t_ParamLimits

0xfa87,	// (0x000b83a3) area_vitu2_query_pane_t

0x6a22,	// (0x000af33e) bg_button_pane_cp018

0x6a30,	// (0x000af34c) bg_button_pane_cp021

0x6a3c,	// (0x000af358) bg_button_pane_cp022

0x6a4d,	// (0x000af369) input_focus_pane_cp09

0xb2e3,	// (0x000b3bff) aid_size_touch_mv_arrow_left

0xb30e,	// (0x000b3c2a) aid_size_touch_mv_arrow_right

0xd872,	// (0x000b618e) main_cset_slider_pane_g16_ParamLimits

0xd872,	// (0x000b618e) main_cset_slider_pane_g16

0xd87e,	// (0x000b619a) main_cset_slider_pane_g17_ParamLimits

0xd87e,	// (0x000b619a) main_cset_slider_pane_g17

0x6968,	// (0x000af284) cell_cam4_burst_pane_g1_ParamLimits

0x9bb8,	// (0x000b24d4) compa_mode_pane

0x63b4,	// (0x000aecd0) popup_vtel_slider_window_g3_ParamLimits

0x63b4,	// (0x000aecd0) popup_vtel_slider_window_g3

0x63cb,	// (0x000aece7) popup_vtel_slider_window_g4_ParamLimits

0x63cb,	// (0x000aece7) popup_vtel_slider_window_g4

0x63e2,	// (0x000aecfe) popup_vtel_slider_window_t1_ParamLimits

0x63e2,	// (0x000aecfe) popup_vtel_slider_window_t1

0x9454,	// (0x000b1d70) main_cl_pane

0x95ff,	// (0x000b1f1b) popup_imed_adjust2_window_ParamLimits

0xc8ed,	// (0x000b5209) bg_tb_trans_pane_cp05_ParamLimits

0xd20f,	// (0x000b5b2b) popup_imed_adjust2_window_g1_ParamLimits

0xd21e,	// (0x000b5b3a) popup_imed_adjust2_window_g2_ParamLimits

0xd21e,	// (0x000b5b3a) popup_imed_adjust2_window_g2

0xd22a,	// (0x000b5b46) popup_imed_adjust2_window_g3_ParamLimits

0xd22a,	// (0x000b5b46) popup_imed_adjust2_window_g3

0x0002,

0xf7f2,	// (0x000b810e) popup_imed_adjust2_window_g_ParamLimits

0xf7f2,	// (0x000b810e) popup_imed_adjust2_window_g

0xd236,	// (0x000b5b52) popup_imed_adjust2_window_t1_ParamLimits

0xd24e,	// (0x000b5b6a) slider_imed_adjust_pane_ParamLimits

0xd262,	// (0x000b5b7e) slider_imed_adjust_pane_g1_ParamLimits

0xd272,	// (0x000b5b8e) slider_imed_adjust_pane_g2_ParamLimits

0xd282,	// (0x000b5b9e) slider_imed_adjust_pane_g3_ParamLimits

0xd293,	// (0x000b5baf) slider_imed_adjust_pane_g4_ParamLimits

0xf7f9,	// (0x000b8115) slider_imed_adjust_pane_g_ParamLimits

0x58d1,	// (0x000ae1ed) aid_touch_area_cam4_ParamLimits

0x58d1,	// (0x000ae1ed) aid_touch_area_cam4

0x99a5,	// (0x000b22c1) battery_pane_cp01

0x59a0,	// (0x000ae2bc) main_camera4_pane_g6_ParamLimits

0x59a0,	// (0x000ae2bc) main_camera4_pane_g6

0x59ca,	// (0x000ae2e6) main_camera4_pane_t2_ParamLimits

0x59ca,	// (0x000ae2e6) main_camera4_pane_t2

0x0001,

0xf8fc,	// (0x000b8218) main_camera4_pane_t_ParamLimits

0xf8fc,	// (0x000b8218) main_camera4_pane_t

0x59ff,	// (0x000ae31b) aid_touch_area_vid4_ParamLimits

0x59ff,	// (0x000ae31b) aid_touch_area_vid4

0x5a53,	// (0x000ae36f) main_video4_pane_g5_ParamLimits

0x5a53,	// (0x000ae36f) main_video4_pane_g5

0x5a78,	// (0x000ae394) vid4_progress_pane_ParamLimits

0x5a78,	// (0x000ae394) vid4_progress_pane

0xd88a,	// (0x000b61a6) main_cset_slider_pane_g18_ParamLimits

0xd88a,	// (0x000b61a6) main_cset_slider_pane_g18

0xda6a,	// (0x000b6386) cell_cam4_burst_pane_g2_ParamLimits

0xda6a,	// (0x000b6386) cell_cam4_burst_pane_g2

0x0001,

0xfa5b,	// (0x000b8377) cell_cam4_burst_pane_g_ParamLimits

0xfa5b,	// (0x000b8377) cell_cam4_burst_pane_g

0xa84c,	// (0x000b3168) bg_cl_pane_ParamLimits

0xa84c,	// (0x000b3168) bg_cl_pane

0x6a5e,	// (0x000af37a) cl_header_pane_ParamLimits

0x6a5e,	// (0x000af37a) cl_header_pane

0x6a72,	// (0x000af38e) cl_listscroll_pane_ParamLimits

0x6a72,	// (0x000af38e) cl_listscroll_pane

0xdbac,	// (0x000b64c8) bg_cl_pane_g1

0xdbb4,	// (0x000b64d0) bg_cl_pane_g2

0xdbbc,	// (0x000b64d8) bg_cl_pane_g3

0xdbc4,	// (0x000b64e0) bg_cl_pane_g4

0xdbcc,	// (0x000b64e8) bg_cl_pane_g5

0xdbd4,	// (0x000b64f0) bg_cl_pane_g6

0xdbdc,	// (0x000b64f8) bg_cl_pane_g7

0xdbe4,	// (0x000b6500) bg_cl_pane_g8

0xdbec,	// (0x000b6508) bg_cl_pane_g9

0x0008,

0xfa96,	// (0x000b83b2) bg_cl_pane_g

0x6a82,	// (0x000af39e) aid_height_cl_leading_ParamLimits

0x6a82,	// (0x000af39e) aid_height_cl_leading

0x6a8e,	// (0x000af3aa) aid_height_cl_text_ParamLimits

0x6a8e,	// (0x000af3aa) aid_height_cl_text

0xb2b7,	// (0x000b3bd3) bg_cl_header_pane_ParamLimits

0xb2b7,	// (0x000b3bd3) bg_cl_header_pane

0x6aad,	// (0x000af3c9) cl_header_pane_g1_ParamLimits

0x6aad,	// (0x000af3c9) cl_header_pane_g1

0x6ac3,	// (0x000af3df) cl_header_pane_t1_ParamLimits

0x6ac3,	// (0x000af3df) cl_header_pane_t1

0xdbf4,	// (0x000b6510) cl_list_pane

0xd845,	// (0x000b6161) hc_scroll_pane_cp01

0xac7a,	// (0x000b3596) bg_cl_header_pane_g1

0xd72b,	// (0x000b6047) bg_cl_header_pane_g2

0xac9a,	// (0x000b35b6) bg_cl_header_pane_g3

0xd73b,	// (0x000b6057) bg_cl_header_pane_g4

0xd733,	// (0x000b604f) bg_cl_header_pane_g5

0xd967,	// (0x000b6283) bg_cl_header_pane_g6

0xd753,	// (0x000b606f) bg_cl_header_pane_g7

0xd75b,	// (0x000b6077) bg_cl_header_pane_g8

0xd74b,	// (0x000b6067) bg_cl_header_pane_g9

0x0008,

0xfaa9,	// (0x000b83c5) bg_cl_header_pane_g

0x6adc,	// (0x000af3f8) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x6adc,	// (0x000af3f8) hc_cl_list_double_graphic_heading_pane

0x6aed,	// (0x000af409) hc_cl_list_single_graphic_pane_ParamLimits

0x6aed,	// (0x000af409) hc_cl_list_single_graphic_pane

0x6b06,	// (0x000af422) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x6b06,	// (0x000af422) hc_cl_list_single_graphic_pane_g1

0x6b12,	// (0x000af42e) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x6b12,	// (0x000af42e) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfabc,	// (0x000b83d8) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfabc,	// (0x000b83d8) hc_cl_list_single_graphic_pane_g

0x6b26,	// (0x000af442) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x6b26,	// (0x000af442) hc_cl_list_single_graphic_pane_t1

0x6b06,	// (0x000af422) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x6b06,	// (0x000af422) hc_cl_list_double_graphic_heading_pane_g1

0x6b3b,	// (0x000af457) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x6b3b,	// (0x000af457) hc_cl_list_double_graphic_heading_pane_g2

0x6b4f,	// (0x000af46b) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x6b4f,	// (0x000af46b) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfac1,	// (0x000b83dd) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfac1,	// (0x000b83dd) hc_cl_list_double_graphic_heading_pane_g

0x6b63,	// (0x000af47f) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x6b63,	// (0x000af47f) hc_cl_list_double_graphic_heading_pane_t1

0x6b78,	// (0x000af494) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x6b78,	// (0x000af494) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfac8,	// (0x000b83e4) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfac8,	// (0x000b83e4) hc_cl_list_double_graphic_heading_pane_t

0x9b2f,	// (0x000b244b) vid4_progress_pane_g1

0x9b3f,	// (0x000b245b) vid4_progress_pane_g2

0x6b8d,	// (0x000af4a9) vid4_progress_pane_g3

0x9b4f,	// (0x000b246b) vid4_progress_pane_g4

0x0004,

0xfacd,	// (0x000b83e9) vid4_progress_pane_g

0x6b9f,	// (0x000af4bb) vid4_progress_pane_t1

0x9b67,	// (0x000b2483) vid4_progress_pane_t2

0x0002,

0xfad8,	// (0x000b83f4) vid4_progress_pane_t

0x6bb5,	// (0x000af4d1) wait_bar_pane_cp07

0xcaf4,	// (0x000b5410) blid_firmament_pane_ParamLimits

0xcb37,	// (0x000b5453) popup_blid_sat_info2_window_g1

0xcb5b,	// (0x000b5477) popup_blid_sat_info2_window_t3

0xcb69,	// (0x000b5485) popup_blid_sat_info2_window_t4

0xcb77,	// (0x000b5493) popup_blid_sat_info2_window_t5

0xcb85,	// (0x000b54a1) popup_blid_sat_info2_window_t6

0xcb95,	// (0x000b54b1) popup_blid_sat_info2_window_t7

0xcba3,	// (0x000b54bf) popup_blid_sat_info2_window_t8

0xcbb1,	// (0x000b54cd) popup_blid_sat_info2_window_t9

0xcbbf,	// (0x000b54db) popup_blid_sat_info2_window_t10

0xcc81,	// (0x000b559d) aid_firma_cardinal_ParamLimits

0xcc95,	// (0x000b55b1) blid_firmament_pane_t1_ParamLimits

0xccac,	// (0x000b55c8) blid_firmament_pane_t2_ParamLimits

0xccc3,	// (0x000b55df) blid_firmament_pane_t3_ParamLimits

0xccda,	// (0x000b55f6) blid_firmament_pane_t4_ParamLimits

0xf6e6,	// (0x000b8002) blid_firmament_pane_t_ParamLimits

0xccf1,	// (0x000b560d) blid_sat_info_pane_ParamLimits

0x9446,	// (0x000b1d62) main_cam_set_pane_ParamLimits

0x4f7a,	// (0x000ad896) aid_size_cell_colour_35_ParamLimits

0x4f9a,	// (0x000ad8b6) aid_size_cell_colour_112_ParamLimits

0x4fba,	// (0x000ad8d6) aid_size_cell_effect_ParamLimits

0xc8ed,	// (0x000b5209) bg_tb_trans_pane_cp02_ParamLimits

0xaee2,	// (0x000b37fe) heading_imed_pane_ParamLimits

0x4fda,	// (0x000ad8f6) listscroll_imed_pane_ParamLimits

0xbed3,	// (0x000b47ef) popup_call2_audio_first_window_g5_ParamLimits

0xbed3,	// (0x000b47ef) popup_call2_audio_first_window_g5

0x5578,	// (0x000ade94) aid_size_touch_image3_arrow_left_ParamLimits

0x5578,	// (0x000ade94) aid_size_touch_image3_arrow_left

0x55a4,	// (0x000adec0) aid_size_touch_image3_arrow_right_ParamLimits

0x55a4,	// (0x000adec0) aid_size_touch_image3_arrow_right

0x9b7c,	// (0x000b2498) vid4_progress_pane_t3

0x52ef,	// (0x000adc0b) main_hwr_training_symbol_option_pane_ParamLimits

0x52ef,	// (0x000adc0b) main_hwr_training_symbol_option_pane

0xd4fc,	// (0x000b5e18) popup_hwr_training_preview_window_ParamLimits

0xd4fc,	// (0x000b5e18) popup_hwr_training_preview_window

0x530f,	// (0x000adc2b) hwr_training_navi_pane_g5_ParamLimits

0x530f,	// (0x000adc2b) hwr_training_navi_pane_g5

0xd719,	// (0x000b6035) popup_char_count_window

0x9446,	// (0x000b1d62) bg_popup_sub_pane_cp20_ParamLimits

0x64fe,	// (0x000aee1a) list_vitu2_match_list_pane_ParamLimits

0x650d,	// (0x000aee29) vitu2_page_scroll_pane_ParamLimits

0x650d,	// (0x000aee29) vitu2_page_scroll_pane

0xdbfd,	// (0x000b6519) list_single_hwr_training_symbol_option_pane_ParamLimits

0xdbfd,	// (0x000b6519) list_single_hwr_training_symbol_option_pane

0xdc10,	// (0x000b652c) list_single_hwr_training_symbol_option_pane_g1

0xdc18,	// (0x000b6534) list_single_hwr_training_symbol_option_pane_t1

0xdc26,	// (0x000b6542) bg_button_pane_cp023

0xdc2f,	// (0x000b654b) bg_button_pane_cp024

0x6bfe,	// (0x000af51a) vitu2_page_scroll_pane_g1

0x6c06,	// (0x000af522) vitu2_page_scroll_pane_g2

0x0001,

0xfadf,	// (0x000b83fb) vitu2_page_scroll_pane_g

0x6c0e,	// (0x000af52a) vitu2_page_scroll_pane_t1

0xcd2a,	// (0x000b5646) popup_char_count_window_g1

0xdc62,	// (0x000b657e) popup_char_count_window_g2

0xdc6b,	// (0x000b6587) popup_char_count_window_g3

0x0002,

0xfae4,	// (0x000b8400) popup_char_count_window_g

0xdc74,	// (0x000b6590) popup_char_count_window_t1

0x9454,	// (0x000b1d70) main_vded2_pane

0xd1fb,	// (0x000b5b17) aid_size_cell_imed_line

0xd205,	// (0x000b5b21) grid_imed_line_width_pane

0x9a63,	// (0x000b237f) vid4_indicators_pane_g4

0xdc82,	// (0x000b659e) cell_imed_line_width_pane_ParamLimits

0xdc82,	// (0x000b659e) cell_imed_line_width_pane

0xdc96,	// (0x000b65b2) cell_imed_line_width_pane_g1

0xd98a,	// (0x000b62a6) cell_imed_line_width_pane_g2

0x0001,

0xfaeb,	// (0x000b8407) cell_imed_line_width_pane_g

0x6c1d,	// (0x000af539) main_vded2_pane_g1_ParamLimits

0x6c1d,	// (0x000af539) main_vded2_pane_g1

0x6c33,	// (0x000af54f) main_vded2_pane_g2_ParamLimits

0x6c33,	// (0x000af54f) main_vded2_pane_g2

0x0001,

0xfaf0,	// (0x000b840c) main_vded2_pane_g_ParamLimits

0xfaf0,	// (0x000b840c) main_vded2_pane_g

0x6c45,	// (0x000af561) vded2_slider_pane_ParamLimits

0x6c45,	// (0x000af561) vded2_slider_pane

0x6c55,	// (0x000af571) aid_size_touch_vded2_end

0x6c5f,	// (0x000af57b) aid_size_touch_vded2_playhead

0xdc9f,	// (0x000b65bb) aid_size_touch_vded2_start

0xdca7,	// (0x000b65c3) vded2_slider_bg_pane

0xdcb0,	// (0x000b65cc) vded2_slider_pane_g1

0xdcb9,	// (0x000b65d5) vded2_slider_pane_g2

0x6c69,	// (0x000af585) vded2_slider_pane_g3

0x0002,

0xfaf5,	// (0x000b8411) vded2_slider_pane_g

0xdcc1,	// (0x000b65dd) vded2_slider_bg_pane_g1

0xdcca,	// (0x000b65e6) vded2_slider_bg_pane_g2

0xdcd3,	// (0x000b65ef) vded2_slider_bg_pane_g3

0x0002,

0xfafc,	// (0x000b8418) vded2_slider_bg_pane_g

0x2cdc,	// (0x000ab5f8) aid_postcard_touch_down_pane_ParamLimits

0x2cdc,	// (0x000ab5f8) aid_postcard_touch_down_pane

0x2cf2,	// (0x000ab60e) aid_postcard_touch_up_pane_ParamLimits

0x2cf2,	// (0x000ab60e) aid_postcard_touch_up_pane

0x9454,	// (0x000b1d70) main_blid2_pane

0x95e5,	// (0x000b1f01) popup_blid2_search_window

0x9bb8,	// (0x000b24d4) blid2_gps_pane

0x9bb8,	// (0x000b24d4) blid2_navig_pane

0x9bb8,	// (0x000b24d4) blid2_search_pane

0x9bb8,	// (0x000b24d4) blid2_tripm_pane

0x6c74,	// (0x000af590) blid2_search_pane_g1_ParamLimits

0x6c74,	// (0x000af590) blid2_search_pane_g1

0x6c8c,	// (0x000af5a8) blid2_search_pane_t1_ParamLimits

0x6c8c,	// (0x000af5a8) blid2_search_pane_t1

0x6c9e,	// (0x000af5ba) aid_size_cell_blid2_gps_ParamLimits

0x6c9e,	// (0x000af5ba) aid_size_cell_blid2_gps

0x6cb6,	// (0x000af5d2) blid2_gps_pane_g1_ParamLimits

0x6cb6,	// (0x000af5d2) blid2_gps_pane_g1

0x6cca,	// (0x000af5e6) grid_blid2_satellite_pane_ParamLimits

0x6cca,	// (0x000af5e6) grid_blid2_satellite_pane

0x6ce4,	// (0x000af600) blid2_navig_pane_g1_ParamLimits

0x6ce4,	// (0x000af600) blid2_navig_pane_g1

0x6cf0,	// (0x000af60c) blid2_navig_pane_t1_ParamLimits

0x6cf0,	// (0x000af60c) blid2_navig_pane_t1

0x6d0b,	// (0x000af627) blid2_navig_pane_t2_ParamLimits

0x6d0b,	// (0x000af627) blid2_navig_pane_t2

0x0001,

0xfb03,	// (0x000b841f) blid2_navig_pane_t_ParamLimits

0xfb03,	// (0x000b841f) blid2_navig_pane_t

0x6d26,	// (0x000af642) blid2_navig_ring_pane_ParamLimits

0x6d26,	// (0x000af642) blid2_navig_ring_pane

0x6d3f,	// (0x000af65b) blid2_speed_pane_ParamLimits

0x6d3f,	// (0x000af65b) blid2_speed_pane

0x6d4b,	// (0x000af667) blid2_tripm_pane_g1_ParamLimits

0x6d4b,	// (0x000af667) blid2_tripm_pane_g1

0x6d66,	// (0x000af682) blid2_tripm_pane_g2_ParamLimits

0x6d66,	// (0x000af682) blid2_tripm_pane_g2

0x6d7a,	// (0x000af696) blid2_tripm_pane_g3_ParamLimits

0x6d7a,	// (0x000af696) blid2_tripm_pane_g3

0x6d8e,	// (0x000af6aa) blid2_tripm_pane_g4_ParamLimits

0x6d8e,	// (0x000af6aa) blid2_tripm_pane_g4

0x6da2,	// (0x000af6be) blid2_tripm_pane_g5_ParamLimits

0x6da2,	// (0x000af6be) blid2_tripm_pane_g5

0x0005,

0xfb08,	// (0x000b8424) blid2_tripm_pane_g_ParamLimits

0xfb08,	// (0x000b8424) blid2_tripm_pane_g

0x6dc8,	// (0x000af6e4) blid2_tripm_pane_t1_ParamLimits

0x6dc8,	// (0x000af6e4) blid2_tripm_pane_t1

0x6de3,	// (0x000af6ff) blid2_tripm_pane_t2_ParamLimits

0x6de3,	// (0x000af6ff) blid2_tripm_pane_t2

0x6dfc,	// (0x000af718) blid2_tripm_pane_t3_ParamLimits

0x6dfc,	// (0x000af718) blid2_tripm_pane_t3

0x0003,

0xfb15,	// (0x000b8431) blid2_tripm_pane_t_ParamLimits

0xfb15,	// (0x000b8431) blid2_tripm_pane_t

0x6e43,	// (0x000af75f) cell_blid2_satellite_pane_ParamLimits

0x6e43,	// (0x000af75f) cell_blid2_satellite_pane

0x6e61,	// (0x000af77d) cell_blid2_satellite_pane_g1

0xdcdc,	// (0x000b65f8) cell_blid2_satellite_pane_t1

0xcd01,	// (0x000b561d) blid2_speed_pane_g1

0xdcea,	// (0x000b6606) blid2_speed_pane_t1

0xdcf8,	// (0x000b6614) blid2_speed_pane_t2

0x0001,

0xfb1e,	// (0x000b843a) blid2_speed_pane_t

0xcd01,	// (0x000b561d) blid2_navig_ring_pane_g1

0x6e6a,	// (0x000af786) blid2_navig_ring_pane_g2

0x6e72,	// (0x000af78e) blid2_navig_ring_pane_g3

0x6e7a,	// (0x000af796) blid2_navig_ring_pane_g4

0x6e82,	// (0x000af79e) blid2_navig_ring_pane_g5

0x0004,

0xfb23,	// (0x000b843f) blid2_navig_ring_pane_g

0x9bb8,	// (0x000b24d4) bg_popup_window_pane_cp011

0xdd06,	// (0x000b6622) popup_blid2_search_window_g1

0xdd0e,	// (0x000b662a) popup_blid2_search_window_t1

0xdd1c,	// (0x000b6638) popup_blid2_search_window_t2

0x0001,

0xfb2e,	// (0x000b844a) popup_blid2_search_window_t

0xab89,	// (0x000b34a5) main_browser_pane_g1

0xa84c,	// (0x000b3168) main_browser_pane_ParamLimits

0x9446,	// (0x000b1d62) bg_button_pane_cp011_ParamLimits

0x5d8f,	// (0x000ae6ab) cell_vitu2_function_pane_g1_ParamLimits

0xc8ed,	// (0x000b5209) bg_popup_sub_pane_cp22_ParamLimits

0x66f4,	// (0x000af010) input_focus_pane_cp08_ParamLimits

0x670b,	// (0x000af027) popup_vitu2_query_button_pane_ParamLimits

0x670b,	// (0x000af027) popup_vitu2_query_button_pane

0x671c,	// (0x000af038) popup_vitu2_query_input_button_pane

0xd9b4,	// (0x000b62d0) popup_vitu2_query_window_g1_ParamLimits

0x6726,	// (0x000af042) popup_vitu2_query_window_g2_ParamLimits

0xfa2f,	// (0x000b834b) popup_vitu2_query_window_g_ParamLimits

0x9bb8,	// (0x000b24d4) bg_button_pane_cp026

0x6e8a,	// (0x000af7a6) popup_vitu2_query_input_button_pane_g1

0x9bb8,	// (0x000b24d4) bg_button_pane_cp025

0xdd2a,	// (0x000b6646) popup_vitu2_query_button_pane_t1

0x4385,	// (0x000acca1) main_mp3_pane_t6

0x4393,	// (0x000accaf) popup_slider_window_cp01

0x99cf,	// (0x000b22eb) cam4_battery_pane

0x9a22,	// (0x000b233e) cam4_battery_pane_cp02

0x9b27,	// (0x000b2443) cam4_battery_pane_cp01

0x9b27,	// (0x000b2443) cam4_battery_pane_cp03

0xd992,	// (0x000b62ae) cam4_battery_pane_g1

0xcd01,	// (0x000b561d) cam4_battery_pane_g2

0x0001,

0xfb33,	// (0x000b844f) cam4_battery_pane_g

0xcbcd,	// (0x000b54e9) popup_blid_sat_info2_window_t11

0xb2e3,	// (0x000b3bff) aid_size_touch_mv_arrow_left_ParamLimits

0xb30e,	// (0x000b3c2a) aid_size_touch_mv_arrow_right_ParamLimits

0xb36c,	// (0x000b3c88) navi_pane_g1_ParamLimits

0xb378,	// (0x000b3c94) navi_pane_g2_ParamLimits

0xb3a6,	// (0x000b3cc2) navi_pane_g3_ParamLimits

0xf3e5,	// (0x000b7d01) navi_pane_g_ParamLimits

0x278d,	// (0x000ab0a9) navi_pane_mv_t1_ParamLimits

0x4fe6,	// (0x000ad902) grid_imed_effect_pane_ParamLimits

0x15a3,	// (0x000a9ebf) aid_placing_vt_slider_lsc

0xaaba,	// (0x000b33d6) aid_placing_vt_slider_prt

0xb2b7,	// (0x000b3bd3) bg_tb_trans_pane_cp01_ParamLimits

0xce6f,	// (0x000b578b) popup_image_details_window_g1_ParamLimits

0xce82,	// (0x000b579e) popup_image_details_window_g2_ParamLimits

0xce97,	// (0x000b57b3) popup_image_details_window_g3_ParamLimits

0xce97,	// (0x000b57b3) popup_image_details_window_g3

0xf72b,	// (0x000b8047) popup_image_details_window_g_ParamLimits

0xceab,	// (0x000b57c7) popup_image_details_window_t1_ParamLimits

0xcebd,	// (0x000b57d9) popup_image_details_window_t2_ParamLimits

0xced6,	// (0x000b57f2) popup_image_details_window_t3_ParamLimits

0xceea,	// (0x000b5806) popup_image_details_window_t4_ParamLimits

0xcf05,	// (0x000b5821) popup_image_details_window_t5_ParamLimits

0xf732,	// (0x000b804e) popup_image_details_window_t_ParamLimits

0x6a9a,	// (0x000af3b6) cl_header_name_pane_ParamLimits

0x6a9a,	// (0x000af3b6) cl_header_name_pane

0x6e92,	// (0x000af7ae) cl_header_name_pane_t1_ParamLimits

0x6e92,	// (0x000af7ae) cl_header_name_pane_t1

0x6eb3,	// (0x000af7cf) cl_header_name_pane_t2_ParamLimits

0x6eb3,	// (0x000af7cf) cl_header_name_pane_t2

0x6ef5,	// (0x000af811) cl_header_name_pane_t3_ParamLimits

0x6ef5,	// (0x000af811) cl_header_name_pane_t3

0x0002,

0xfb38,	// (0x000b8454) cl_header_name_pane_t_ParamLimits

0xfb38,	// (0x000b8454) cl_header_name_pane_t

0xb435,	// (0x000b3d51) navi_pane_mv_g2_ParamLimits

0xd6f3,	// (0x000b600f) field_vitu2_entry_pane_g1_ParamLimits

0xd6ff,	// (0x000b601b) field_vitu2_entry_pane_g2_ParamLimits

0xd70b,	// (0x000b6027) field_vitu2_entry_pane_g3_ParamLimits

0xd70b,	// (0x000b6027) field_vitu2_entry_pane_g3

0xf92e,	// (0x000b824a) field_vitu2_entry_pane_g_ParamLimits

0x9a96,	// (0x000b23b2) cell_vitu2_itu_pane_g1_ParamLimits

0x5d23,	// (0x000ae63f) cell_vitu2_itu_pane_g2_ParamLimits

0x5d23,	// (0x000ae63f) cell_vitu2_itu_pane_g2

0x0001,

0xf93a,	// (0x000b8256) cell_vitu2_itu_pane_g_ParamLimits

0xf93a,	// (0x000b8256) cell_vitu2_itu_pane_g

0x9446,	// (0x000b1d62) bg_vkb2_func_pane_cp05_ParamLimits

0x9446,	// (0x000b1d62) bg_vkb2_func_pane_cp05

0x9446,	// (0x000b1d62) bg_vkb2_func_pane_cp03

0x9446,	// (0x000b1d62) bg_vkb2_func_pane_cp04

0x9446,	// (0x000b1d62) bg_vkb2_func_pane_cp10_ParamLimits

0x9446,	// (0x000b1d62) bg_vkb2_func_pane_cp10

0x6a3c,	// (0x000af358) bg_vkb2_func_pane_cp08

0x6a22,	// (0x000af33e) bg_vkb2_func_pane_cp06

0x6a30,	// (0x000af34c) bg_vkb2_func_pane_cp07

0xdc38,	// (0x000b6554) bg_vkb2_func_pane_cp11_ParamLimits

0xdc38,	// (0x000b6554) bg_vkb2_func_pane_cp11

0xdc4d,	// (0x000b6569) bg_vkb2_func_pane_cp12_ParamLimits

0xdc4d,	// (0x000b6569) bg_vkb2_func_pane_cp12

0x9bb8,	// (0x000b24d4) bg_vkb2_func_pane_cp09

0xd72b,	// (0x000b6047) bg_vkb2_func_pane_g1

0xac9a,	// (0x000b35b6) bg_vkb2_func_pane_g2

0xd733,	// (0x000b604f) bg_vkb2_func_pane_g3

0xd73b,	// (0x000b6057) bg_vkb2_func_pane_g4

0xd967,	// (0x000b6283) bg_vkb2_func_pane_g5

0xd753,	// (0x000b606f) bg_vkb2_func_pane_g6

0xd75b,	// (0x000b6077) bg_vkb2_func_pane_g7

0xd74b,	// (0x000b6067) bg_vkb2_func_pane_g8

0xac7a,	// (0x000b3596) bg_vkb2_func_pane_g9

0x0008,

0xfb3f,	// (0x000b845b) bg_vkb2_func_pane_g

0x6db6,	// (0x000af6d2) blid2_tripm_pane_g6_ParamLimits

0x6db6,	// (0x000af6d2) blid2_tripm_pane_g6

0xd5b4,	// (0x000b5ed0) mp4_progress_pane_g1

0x6e2f,	// (0x000af74b) blid2_tripm_values_pane_ParamLimits

0x6e2f,	// (0x000af74b) blid2_tripm_values_pane

0x6f26,	// (0x000af842) blid2_tripm_values_pane_t1

0x6f34,	// (0x000af850) blid2_tripm_values_pane_t2

0x6f42,	// (0x000af85e) blid2_tripm_values_pane_t3

0x6f50,	// (0x000af86c) blid2_tripm_values_pane_t4

0x6f5e,	// (0x000af87a) blid2_tripm_values_pane_t5

0x6f6c,	// (0x000af888) blid2_tripm_values_pane_t6

0x6f7a,	// (0x000af896) blid2_tripm_values_pane_t7

0x6f88,	// (0x000af8a4) blid2_tripm_values_pane_t8

0x6f96,	// (0x000af8b2) blid2_tripm_values_pane_t9

0x0008,

0xfb52,	// (0x000b846e) blid2_tripm_values_pane_t

0x15e5,	// (0x000a9f01) call_video_pane_t1_ParamLimits

0x1603,	// (0x000a9f1f) call_video_pane_t2_ParamLimits

0xf26e,	// (0x000b7b8a) call_video_pane_t_ParamLimits

0x2c5a,	// (0x000ab576) msg_header_pane_g1_ParamLimits

0xb61d,	// (0x000b3f39) msg_header_pane_g2_ParamLimits

0xb61d,	// (0x000b3f39) msg_header_pane_g2

0x0001,

0xf488,	// (0x000b7da4) msg_header_pane_g_ParamLimits

0xf488,	// (0x000b7da4) msg_header_pane_g

0xa84c,	// (0x000b3168) main_clock2_pane_ParamLimits

0x4cdf,	// (0x000ad5fb) grid_clock2_toolbar_pane_ParamLimits

0x4cdf,	// (0x000ad5fb) grid_clock2_toolbar_pane

0x4cdf,	// (0x000ad5fb) listscroll_clock2_pane_ParamLimits

0x4cdf,	// (0x000ad5fb) listscroll_clock2_pane

0x4ddb,	// (0x000ad6f7) main_clock2_pane_t3_ParamLimits

0x4ddb,	// (0x000ad6f7) main_clock2_pane_t3

0x4dff,	// (0x000ad71b) main_clock2_pane_t4_ParamLimits

0x4dff,	// (0x000ad71b) main_clock2_pane_t4

0xdd38,	// (0x000b6654) cell_clock2_toolbar_pane

0xdd40,	// (0x000b665c) cell_clock2_toolbar_pane_cp01

0xdd40,	// (0x000b665c) cell_clock2_toolbar_pane_cp02

0xdd48,	// (0x000b6664) cell_clock2_toolbar_pane_cp03

0xdd50,	// (0x000b666c) list_clock2_pane

0xb248,	// (0x000b3b64) scroll_pane_cp10

0xdd58,	// (0x000b6674) list_single_clock2_pane_ParamLimits

0xdd58,	// (0x000b6674) list_single_clock2_pane

0xaa23,	// (0x000b333f) list_highlight_pane_cp08

0xdd65,	// (0x000b6681) list_single_clock2_pane_t1

0xdd73,	// (0x000b668f) list_single_clock2_pane_t2

0x0001,

0xfb65,	// (0x000b8481) list_single_clock2_pane_t

0x9bb8,	// (0x000b24d4) bg_button_pane_cp10

0xdd81,	// (0x000b669d) cell_clock2_toolbar_pane_g1

0x2c68,	// (0x000ab584) aid_main_viewer_pane_g1_ParamLimits

0x2c68,	// (0x000ab584) aid_main_viewer_pane_g1

0x2c76,	// (0x000ab592) aid_main_viewer_pane_g2_ParamLimits

0x2c76,	// (0x000ab592) aid_main_viewer_pane_g2

0x2c84,	// (0x000ab5a0) aid_main_viewer_pane_g3_ParamLimits

0x2c84,	// (0x000ab5a0) aid_main_viewer_pane_g3

0x2c93,	// (0x000ab5af) aid_main_viewer_pane_g4_ParamLimits

0x2c93,	// (0x000ab5af) aid_main_viewer_pane_g4

0x0003,

0xf499,	// (0x000b7db5) aid_main_viewer_pane_g_ParamLimits

0xf499,	// (0x000b7db5) aid_main_viewer_pane_g

0x359b,	// (0x000abeb7) main_calc_pane_ParamLimits

0x35c1,	// (0x000abedd) main_dialer2_pane_ParamLimits

0x9454,	// (0x000b1d70) main_cam6_pane

0x9454,	// (0x000b1d70) main_vid6_pane

0x4ceb,	// (0x000ad607) listscroll_gen_pane_cp06_ParamLimits

0x4ceb,	// (0x000ad607) listscroll_gen_pane_cp06

0x4e22,	// (0x000ad73e) main_clock2_pane_t5_ParamLimits

0x4e22,	// (0x000ad73e) main_clock2_pane_t5

0x4e7c,	// (0x000ad798) aid_call2_pane_cp10_ParamLimits

0x4e8e,	// (0x000ad7aa) aid_call_pane_cp10_ParamLimits

0xb2d7,	// (0x000b3bf3) popup_clock_analogue_window_cp10_g1_ParamLimits

0xb2d7,	// (0x000b3bf3) popup_clock_analogue_window_cp10_g2_ParamLimits

0x4ea0,	// (0x000ad7bc) popup_clock_analogue_window_cp10_g3_ParamLimits

0x4ea0,	// (0x000ad7bc) popup_clock_analogue_window_cp10_g4_ParamLimits

0xb2d7,	// (0x000b3bf3) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf7e7,	// (0x000b8103) popup_clock_analogue_window_cp10_g_ParamLimits

0x4eb2,	// (0x000ad7ce) popup_clock_analogue_window_cp10_t1_ParamLimits

0x5525,	// (0x000ade41) cell_dialer2_keypad_pane_g2_ParamLimits

0x5525,	// (0x000ade41) cell_dialer2_keypad_pane_g2

0x0001,

0xf8cd,	// (0x000b81e9) cell_dialer2_keypad_pane_g_ParamLimits

0xf8cd,	// (0x000b81e9) cell_dialer2_keypad_pane_g

0x5541,	// (0x000ade5d) cell_dialer2_keypad_pane_t1

0x60a9,	// (0x000ae9c5) main_cset_text2_pane_ParamLimits

0x60a9,	// (0x000ae9c5) main_cset_text2_pane

0xdba0,	// (0x000b64bc) area_vitu2_query_pane_g1_ParamLimits

0x69c1,	// (0x000af2dd) area_vitu2_query_pane_g2_ParamLimits

0xfa82,	// (0x000b839e) area_vitu2_query_pane_g_ParamLimits

0x9fc2,	// (0x000b28de) area_vitu2_query_pane_t7_ParamLimits

0x9fc2,	// (0x000b28de) area_vitu2_query_pane_t7

0x6a22,	// (0x000af33e) bg_button_pane_cp018_ParamLimits

0x6a30,	// (0x000af34c) bg_button_pane_cp021_ParamLimits

0x6a3c,	// (0x000af358) bg_button_pane_cp022_ParamLimits

0x6a3c,	// (0x000af358) bg_vkb2_func_pane_cp08_ParamLimits

0x6a22,	// (0x000af33e) bg_vkb2_func_pane_cp06_ParamLimits

0x6a30,	// (0x000af34c) bg_vkb2_func_pane_cp07_ParamLimits

0x6a4d,	// (0x000af369) input_focus_pane_cp09_ParamLimits

0x9b92,	// (0x000b24ae) cam6_autofocus_pane_ParamLimits

0x9b92,	// (0x000b24ae) cam6_autofocus_pane

0x6fa4,	// (0x000af8c0) cam6_image_uncrop_pane_ParamLimits

0x6fa4,	// (0x000af8c0) cam6_image_uncrop_pane

0x6fb3,	// (0x000af8cf) cam6_indi_pane_ParamLimits

0x6fb3,	// (0x000af8cf) cam6_indi_pane

0x6fc9,	// (0x000af8e5) cam6_mode_pane_ParamLimits

0x6fc9,	// (0x000af8e5) cam6_mode_pane

0x6fdb,	// (0x000af8f7) cam6_timer_pane_ParamLimits

0x6fdb,	// (0x000af8f7) cam6_timer_pane

0x6feb,	// (0x000af907) cam6_zoom_pane_ParamLimits

0x6feb,	// (0x000af907) cam6_zoom_pane

0x6ff7,	// (0x000af913) cam6_mode_pane_g1_ParamLimits

0x6ff7,	// (0x000af913) cam6_mode_pane_g1

0x7007,	// (0x000af923) cam6_mode_pane_g2_ParamLimits

0x7007,	// (0x000af923) cam6_mode_pane_g2

0x7017,	// (0x000af933) cam6_mode_pane_g3_ParamLimits

0x7017,	// (0x000af933) cam6_mode_pane_g3

0x7027,	// (0x000af943) cam6_mode_pane_g4_ParamLimits

0x7027,	// (0x000af943) cam6_mode_pane_g4

0x0003,

0xfb6a,	// (0x000b8486) cam6_mode_pane_g_ParamLimits

0xfb6a,	// (0x000b8486) cam6_mode_pane_g

0xdd89,	// (0x000b66a5) bg_tb_trans_pane_cp08_ParamLimits

0xdd89,	// (0x000b66a5) bg_tb_trans_pane_cp08

0xdd97,	// (0x000b66b3) cam6_battery_pane_ParamLimits

0xdd97,	// (0x000b66b3) cam6_battery_pane

0xddad,	// (0x000b66c9) cam6_indi_pane_g1_ParamLimits

0xddad,	// (0x000b66c9) cam6_indi_pane_g1

0xddbf,	// (0x000b66db) cam6_indi_pane_g2_ParamLimits

0xddbf,	// (0x000b66db) cam6_indi_pane_g2

0xddd1,	// (0x000b66ed) cam6_indi_pane_g3_ParamLimits

0xddd1,	// (0x000b66ed) cam6_indi_pane_g3

0x0002,

0xfb73,	// (0x000b848f) cam6_indi_pane_g_ParamLimits

0xfb73,	// (0x000b848f) cam6_indi_pane_g

0xdde3,	// (0x000b66ff) cam6_indi_pane_t1_ParamLimits

0xdde3,	// (0x000b66ff) cam6_indi_pane_t1

0x7037,	// (0x000af953) cam6_autofocus_pane_g1

0x703f,	// (0x000af95b) cam6_autofocus_pane_g2

0x7047,	// (0x000af963) cam6_autofocus_pane_g3

0x704f,	// (0x000af96b) cam6_autofocus_pane_g4

0x0003,

0xfb7a,	// (0x000b8496) cam6_autofocus_pane_g

0xde09,	// (0x000b6725) cam6_timer_pane_g1

0xde11,	// (0x000b672d) cam6_timer_pane_t1

0xde1f,	// (0x000b673b) cam6_zoom_cont_pane

0xde27,	// (0x000b6743) cam6_zoom_pane_g1

0xde2f,	// (0x000b674b) cam6_zoom_pane_g2

0x7057,	// (0x000af973) cam6_zoom_pane_g3

0x0002,

0xfb83,	// (0x000b849f) cam6_zoom_pane_g

0xcd01,	// (0x000b561d) cam6_battery_pane_g1

0xcd01,	// (0x000b561d) cam6_battery_pane_g2

0x0001,

0xf6ef,	// (0x000b800b) cam6_battery_pane_g

0xde37,	// (0x000b6753) cam6_zoom_cont_pane_g1

0xde40,	// (0x000b675c) cam6_zoom_cont_pane_g2

0xde49,	// (0x000b6765) cam6_zoom_cont_pane_g3

0x0002,

0xfb8a,	// (0x000b84a6) cam6_zoom_cont_pane_g

0x7074,	// (0x000af990) cam6_mode_pane_cp_ParamLimits

0x7074,	// (0x000af990) cam6_mode_pane_cp

0x7086,	// (0x000af9a2) cam6_zoom_pane_cp_ParamLimits

0x7086,	// (0x000af9a2) cam6_zoom_pane_cp

0x7092,	// (0x000af9ae) vid6_image_uncrop_cif_pane_ParamLimits

0x7092,	// (0x000af9ae) vid6_image_uncrop_cif_pane

0x70a2,	// (0x000af9be) vid6_image_uncrop_nhd_pane_ParamLimits

0x70a2,	// (0x000af9be) vid6_image_uncrop_nhd_pane

0x70b1,	// (0x000af9cd) vid6_image_uncrop_vga_pane_ParamLimits

0x70b1,	// (0x000af9cd) vid6_image_uncrop_vga_pane

0x70c0,	// (0x000af9dc) vid6_image_uncrop_wvga_pane_ParamLimits

0x70c0,	// (0x000af9dc) vid6_image_uncrop_wvga_pane

0x70cf,	// (0x000af9eb) vid6_indi_pane_ParamLimits

0x70cf,	// (0x000af9eb) vid6_indi_pane

0xdd89,	// (0x000b66a5) bg_tb_trans_pane_cp09_ParamLimits

0xdd89,	// (0x000b66a5) bg_tb_trans_pane_cp09

0xde61,	// (0x000b677d) cam6_battery_pane_cp_ParamLimits

0xde61,	// (0x000b677d) cam6_battery_pane_cp

0xde6d,	// (0x000b6789) vid6_indi_pane_g1_ParamLimits

0xde6d,	// (0x000b6789) vid6_indi_pane_g1

0xde7f,	// (0x000b679b) vid6_indi_pane_g2_ParamLimits

0xde7f,	// (0x000b679b) vid6_indi_pane_g2

0xde91,	// (0x000b67ad) vid6_indi_pane_g3_ParamLimits

0xde91,	// (0x000b67ad) vid6_indi_pane_g3

0xdea6,	// (0x000b67c2) vid6_indi_pane_g4_ParamLimits

0xdea6,	// (0x000b67c2) vid6_indi_pane_g4

0xdebb,	// (0x000b67d7) vid6_indi_pane_g5_ParamLimits

0xdebb,	// (0x000b67d7) vid6_indi_pane_g5

0x0004,

0xfb91,	// (0x000b84ad) vid6_indi_pane_g_ParamLimits

0xfb91,	// (0x000b84ad) vid6_indi_pane_g

0xded5,	// (0x000b67f1) vid6_indi_pane_t1_ParamLimits

0xded5,	// (0x000b67f1) vid6_indi_pane_t1

0xdeeb,	// (0x000b6807) vid6_indi_pane_t2_ParamLimits

0xdeeb,	// (0x000b6807) vid6_indi_pane_t2

0xdf13,	// (0x000b682f) vid6_indi_pane_t3_ParamLimits

0xdf13,	// (0x000b682f) vid6_indi_pane_t3

0xdf3b,	// (0x000b6857) vid6_indi_pane_t4_ParamLimits

0xdf3b,	// (0x000b6857) vid6_indi_pane_t4

0x0003,

0xfb9c,	// (0x000b84b8) vid6_indi_pane_t_ParamLimits

0xfb9c,	// (0x000b84b8) vid6_indi_pane_t

0xdf5f,	// (0x000b687b) wait_bar_pane_cp08

0x70e7,	// (0x000afa03) main_cset_text2_pane_t1_ParamLimits

0x70e7,	// (0x000afa03) main_cset_text2_pane_t1

0x705f,	// (0x000af97b) listscroll_gen_pane_cp06_t1_ParamLimits

0x705f,	// (0x000af97b) listscroll_gen_pane_cp06_t1

0x9454,	// (0x000b1d70) main_cam6_set_pane

0x99c1,	// (0x000b22dd) bg_tb_trans_pane_cp06_ParamLimits

0x99d7,	// (0x000b22f3) cam4_indicators_pane_g1_ParamLimits

0x99e8,	// (0x000b2304) cam4_indicators_pane_g2_ParamLimits

0xf90a,	// (0x000b8226) cam4_indicators_pane_g_ParamLimits

0x9a00,	// (0x000b231c) cam4_indicators_pane_t1_ParamLimits

0x9446,	// (0x000b1d62) bg_tb_trans_pane_cp07_ParamLimits

0x9a2a,	// (0x000b2346) vid4_indicators_pane_g1_ParamLimits

0x9a3e,	// (0x000b235a) vid4_indicators_pane_g2_ParamLimits

0x9a52,	// (0x000b236e) vid4_indicators_pane_g3_ParamLimits

0x9a63,	// (0x000b237f) vid4_indicators_pane_g4_ParamLimits

0xf91c,	// (0x000b8238) vid4_indicators_pane_g_ParamLimits

0x9a7f,	// (0x000b239b) vid4_indicators_pane_t1_ParamLimits

0x9b2f,	// (0x000b244b) vid4_progress_pane_g1_ParamLimits

0x9b3f,	// (0x000b245b) vid4_progress_pane_g2_ParamLimits

0x6b8d,	// (0x000af4a9) vid4_progress_pane_g3_ParamLimits

0x9b4f,	// (0x000b246b) vid4_progress_pane_g4_ParamLimits

0xfacd,	// (0x000b83e9) vid4_progress_pane_g_ParamLimits

0x6b9f,	// (0x000af4bb) vid4_progress_pane_t1_ParamLimits

0x9b67,	// (0x000b2483) vid4_progress_pane_t2_ParamLimits

0x9b7c,	// (0x000b2498) vid4_progress_pane_t3_ParamLimits

0xfad8,	// (0x000b83f4) vid4_progress_pane_t_ParamLimits

0x6bb5,	// (0x000af4d1) wait_bar_pane_cp07_ParamLimits

0x7105,	// (0x000afa21) main_cam6_set_pane_g2_ParamLimits

0x7105,	// (0x000afa21) main_cam6_set_pane_g2

0x7129,	// (0x000afa45) main_cset6_listscroll_pane_ParamLimits

0x7129,	// (0x000afa45) main_cset6_listscroll_pane

0x7145,	// (0x000afa61) main_cset6_slider_pane_ParamLimits

0x7145,	// (0x000afa61) main_cset6_slider_pane

0x715b,	// (0x000afa77) main_cset6_text2_pane_ParamLimits

0x715b,	// (0x000afa77) main_cset6_text2_pane

0xdf6e,	// (0x000b688a) main_cset6_text_pane

0xdf76,	// (0x000b6892) main_cset_list_pane_copy1_ParamLimits

0xdf76,	// (0x000b6892) main_cset_list_pane_copy1

0xdf86,	// (0x000b68a2) scroll_pane_cp028_copy1

0x7169,	// (0x000afa85) cset_list_set_pane_copy1

0x717b,	// (0x000afa97) aid_position_infowindow_above_copy1

0x7183,	// (0x000afa9f) aid_position_infowindow_below_copy1

0x9ff6,	// (0x000b2912) cset_list_set_pane_g1_copy1

0x9ffe,	// (0x000b291a) cset_list_set_pane_g3_copy1_ParamLimits

0x9ffe,	// (0x000b291a) cset_list_set_pane_g3_copy1

0xa00d,	// (0x000b2929) cset_list_set_pane_t1_copy1_ParamLimits

0xa00d,	// (0x000b2929) cset_list_set_pane_t1_copy1

0xb2b7,	// (0x000b3bd3) list_highlight_pane_cp021_copy1_ParamLimits

0xb2b7,	// (0x000b3bd3) list_highlight_pane_cp021_copy1

0xdf8f,	// (0x000b68ab) cset6_slider_pane_ParamLimits

0xdf8f,	// (0x000b68ab) cset6_slider_pane

0xdfbb,	// (0x000b68d7) main_cset6_slider_pane_g1_ParamLimits

0xdfbb,	// (0x000b68d7) main_cset6_slider_pane_g1

0x718b,	// (0x000afaa7) main_cset6_slider_pane_g2_ParamLimits

0x718b,	// (0x000afaa7) main_cset6_slider_pane_g2

0xdfe3,	// (0x000b68ff) main_cset6_slider_pane_g3_ParamLimits

0xdfe3,	// (0x000b68ff) main_cset6_slider_pane_g3

0x71b3,	// (0x000afacf) main_cset6_slider_pane_g4_ParamLimits

0x71b3,	// (0x000afacf) main_cset6_slider_pane_g4

0xdfef,	// (0x000b690b) main_cset6_slider_pane_g5_ParamLimits

0xdfef,	// (0x000b690b) main_cset6_slider_pane_g5

0xd85a,	// (0x000b6176) main_cset6_slider_pane_g7_ParamLimits

0xd85a,	// (0x000b6176) main_cset6_slider_pane_g7

0xd866,	// (0x000b6182) main_cset6_slider_pane_g8_ParamLimits

0xd866,	// (0x000b6182) main_cset6_slider_pane_g8

0x6156,	// (0x000aea72) main_cset6_slider_pane_g9_ParamLimits

0x6156,	// (0x000aea72) main_cset6_slider_pane_g9

0x6162,	// (0x000aea7e) main_cset6_slider_pane_g10_ParamLimits

0x6162,	// (0x000aea7e) main_cset6_slider_pane_g10

0x616e,	// (0x000aea8a) main_cset6_slider_pane_g11_ParamLimits

0x616e,	// (0x000aea8a) main_cset6_slider_pane_g11

0x617a,	// (0x000aea96) main_cset6_slider_pane_g12_ParamLimits

0x617a,	// (0x000aea96) main_cset6_slider_pane_g12

0x6186,	// (0x000aeaa2) main_cset6_slider_pane_g13_ParamLimits

0x6186,	// (0x000aeaa2) main_cset6_slider_pane_g13

0x6192,	// (0x000aeaae) main_cset6_slider_pane_g14_ParamLimits

0x6192,	// (0x000aeaae) main_cset6_slider_pane_g14

0x71bf,	// (0x000afadb) main_cset6_slider_pane_g15_ParamLimits

0x71bf,	// (0x000afadb) main_cset6_slider_pane_g15

0xd872,	// (0x000b618e) main_cset6_slider_pane_g16_ParamLimits

0xd872,	// (0x000b618e) main_cset6_slider_pane_g16

0xd87e,	// (0x000b619a) main_cset6_slider_pane_g17_ParamLimits

0xd87e,	// (0x000b619a) main_cset6_slider_pane_g17

0x0011,

0xfba5,	// (0x000b84c1) main_cset6_slider_pane_g_ParamLimits

0xfba5,	// (0x000b84c1) main_cset6_slider_pane_g

0xdffb,	// (0x000b6917) main_cset6_slider_pane_t1_ParamLimits

0xdffb,	// (0x000b6917) main_cset6_slider_pane_t1

0x71ef,	// (0x000afb0b) main_cset6_slider_pane_t2_ParamLimits

0x71ef,	// (0x000afb0b) main_cset6_slider_pane_t2

0x721a,	// (0x000afb36) main_cset6_slider_pane_t3_ParamLimits

0x721a,	// (0x000afb36) main_cset6_slider_pane_t3

0x7245,	// (0x000afb61) main_cset6_slider_pane_t4_ParamLimits

0x7245,	// (0x000afb61) main_cset6_slider_pane_t4

0x7270,	// (0x000afb8c) main_cset6_slider_pane_t5_ParamLimits

0x7270,	// (0x000afb8c) main_cset6_slider_pane_t5

0xe03c,	// (0x000b6958) main_cset6_slider_pane_t7_ParamLimits

0xe03c,	// (0x000b6958) main_cset6_slider_pane_t7

0x729b,	// (0x000afbb7) main_cset6_slider_pane_t8_ParamLimits

0x729b,	// (0x000afbb7) main_cset6_slider_pane_t8

0x72bf,	// (0x000afbdb) main_cset6_slider_pane_t9_ParamLimits

0x72bf,	// (0x000afbdb) main_cset6_slider_pane_t9

0x72e3,	// (0x000afbff) main_cset6_slider_pane_t10_ParamLimits

0x72e3,	// (0x000afbff) main_cset6_slider_pane_t10

0x7307,	// (0x000afc23) main_cset6_slider_pane_t11_ParamLimits

0x7307,	// (0x000afc23) main_cset6_slider_pane_t11

0xe072,	// (0x000b698e) main_cset6_slider_pane_t14_ParamLimits

0xe072,	// (0x000b698e) main_cset6_slider_pane_t14

0xe0ab,	// (0x000b69c7) main_cset6_slider_pane_t15_ParamLimits

0xe0ab,	// (0x000b69c7) main_cset6_slider_pane_t15

0x000b,

0xfbca,	// (0x000b84e6) main_cset6_slider_pane_t_ParamLimits

0xfbca,	// (0x000b84e6) main_cset6_slider_pane_t

0xd4d1,	// (0x000b5ded) cset_slider_pane_g1_copy1

0xe0e4,	// (0x000b6a00) cset_slider_pane_g2_copy1

0xe0ed,	// (0x000b6a09) cset_slider_pane_g3_copy1

0x9bb8,	// (0x000b24d4) bg_popup_sub_pane_cp011_copy1

0xe0f6,	// (0x000b6a12) main_cset_text_pane_g1_copy1

0xd9c8,	// (0x000b62e4) main_cset_text_pane_t1_copy1

0xd9d6,	// (0x000b62f2) main_cset_text_pane_t2_copy1

0xd9e4,	// (0x000b6300) main_cset_text_pane_t3_copy1

0xd9f2,	// (0x000b630e) main_cset_text_pane_t4_copy1

0xda00,	// (0x000b631c) main_cset_text_pane_t5_copy1

0xe0fe,	// (0x000b6a1a) main_cset_text_pane_t6_copy1

0xe10c,	// (0x000b6a28) main_cset_text_pane_t7_copy1

0x70e7,	// (0x000afa03) main_cset_text2_pane_t1_copy1

0x9446,	// (0x000b1d62) main_ncimui_pane

0x3805,	// (0x000ac121) popup_query_ncimui_window_ParamLimits

0x3805,	// (0x000ac121) popup_query_ncimui_window

0x9ef5,	// (0x000b2811) field_cale_ev2_pane_g4_ParamLimits

0x9ef5,	// (0x000b2811) field_cale_ev2_pane_g4

0x5404,	// (0x000add20) cell_video_dialer_keypad_pane_g2_ParamLimits

0x5404,	// (0x000add20) cell_video_dialer_keypad_pane_g2

0x0001,

0xf8a8,	// (0x000b81c4) cell_video_dialer_keypad_pane_g_ParamLimits

0xf8a8,	// (0x000b81c4) cell_video_dialer_keypad_pane_g

0x541c,	// (0x000add38) cell_video_dialer_keypad_pane_t1

0x9bb8,	// (0x000b24d4) bg_popup_window_pane_cp012

0xb133,	// (0x000b3a4f) heading_pane_cp06

0xe146,	// (0x000b6a62) ncim_query_content_pane

0x9bb8,	// (0x000b24d4) bg_popup_heading_pane_cp01

0xe14e,	// (0x000b6a6a) ncim_heading_pane_t1

0xe15c,	// (0x000b6a78) ncim_indicator_popup_pane

0xe16e,	// (0x000b6a8a) ncim_query_button_pane

0xe182,	// (0x000b6a9e) ncim_query_content_pane_t1

0xe194,	// (0x000b6ab0) ncim_query_content_pane_t2

0x0005,

0xfc0e,	// (0x000b852a) ncim_query_content_pane_t

0xe1ce,	// (0x000b6aea) ncim_query_list_pane

0xe1e0,	// (0x000b6afc) ncim_query_popup_pane

0xe15c,	// (0x000b6a78) ncim_indicator_popup_pane_ParamLimits

0x752a,	// (0x000afe46) ncim_query_content_pane_g1_ParamLimits

0x752a,	// (0x000afe46) ncim_query_content_pane_g1

0xe182,	// (0x000b6a9e) ncim_query_content_pane_t1_ParamLimits

0xe194,	// (0x000b6ab0) ncim_query_content_pane_t2_ParamLimits

0x7536,	// (0x000afe52) ncim_query_content_pane_t3_ParamLimits

0x7536,	// (0x000afe52) ncim_query_content_pane_t3

0x755e,	// (0x000afe7a) ncim_query_content_pane_t4_ParamLimits

0x755e,	// (0x000afe7a) ncim_query_content_pane_t4

0x7586,	// (0x000afea2) ncim_query_content_pane_t5_ParamLimits

0x7586,	// (0x000afea2) ncim_query_content_pane_t5

0xe1a6,	// (0x000b6ac2) ncim_query_content_pane_t6_ParamLimits

0xe1a6,	// (0x000b6ac2) ncim_query_content_pane_t6

0xfc0e,	// (0x000b852a) ncim_query_content_pane_t_ParamLimits

0xe1ce,	// (0x000b6aea) ncim_query_list_pane_ParamLimits

0xe1e0,	// (0x000b6afc) ncim_query_popup_pane_ParamLimits

0xe1f4,	// (0x000b6b10) wait_bar_pane_cp04

0x9bb8,	// (0x000b24d4) input_focus_pane_cp011

0xe1fc,	// (0x000b6b18) ncim_query_popup_pane_t1

0xe20a,	// (0x000b6b26) ncim_list_query_list_pane_ParamLimits

0xe20a,	// (0x000b6b26) ncim_list_query_list_pane

0x9bb8,	// (0x000b24d4) bg_button_pane_cp027

0xe217,	// (0x000b6b33) ncim_query_button_pane_g1

0x9bb8,	// (0x000b24d4) list_highlight_pane_cp012

0xe221,	// (0x000b6b3d) ncim_list_query_list_pane_g1

0xe229,	// (0x000b6b45) ncim_list_query_list_pane_t1

0x99f4,	// (0x000b2310) cam4_indicators_pane_g3_ParamLimits

0x99f4,	// (0x000b2310) cam4_indicators_pane_g3

0x9a6f,	// (0x000b238b) vid4_indicators_pane_g5_ParamLimits

0x9a6f,	// (0x000b238b) vid4_indicators_pane_g5

0x9b5b,	// (0x000b2477) vid4_progress_pane_g5_ParamLimits

0x9b5b,	// (0x000b2477) vid4_progress_pane_g5

0x7415,	// (0x000afd31) main_ncimui_pane_g1

0x747e,	// (0x000afd9a) ncimui_group_query_pane_ParamLimits

0x747e,	// (0x000afd9a) ncimui_group_query_pane

0x74c6,	// (0x000afde2) ncimui_list_pane_ParamLimits

0x74c6,	// (0x000afde2) ncimui_list_pane

0x74ed,	// (0x000afe09) ncimui_text_pane_ParamLimits

0x74ed,	// (0x000afe09) ncimui_text_pane

0x75ae,	// (0x000afeca) ncimui_text_pane_t1_ParamLimits

0x75ae,	// (0x000afeca) ncimui_text_pane_t1

0xe237,	// (0x000b6b53) ncimui_list_single_graphic_pane_ParamLimits

0xe237,	// (0x000b6b53) ncimui_list_single_graphic_pane

0x75cc,	// (0x000afee8) ncimui_query_pane_ParamLimits

0x75cc,	// (0x000afee8) ncimui_query_pane

0x9bb8,	// (0x000b24d4) list_highlight_pane_cp013

0xe247,	// (0x000b6b63) ncim_list_query_list_pane_t1_copy1

0xe255,	// (0x000b6b71) ncim_list_single_graphic_pane_g1

0x75df,	// (0x000afefb) ncim_query_button_pane_cp01

0x75eb,	// (0x000aff07) ncim_query_entry_pane_ParamLimits

0x75eb,	// (0x000aff07) ncim_query_entry_pane

0x75fe,	// (0x000aff1a) ncimui_query_pane_g1

0x760a,	// (0x000aff26) ncimui_query_pane_t1_ParamLimits

0x760a,	// (0x000aff26) ncimui_query_pane_t1

0xb2b7,	// (0x000b3bd3) input_focus_pane_cp012

0xe25d,	// (0x000b6b79) ncim_query_entry_pane_t1

0xa84c,	// (0x000b3168) main_im_pane_ParamLimits

0x9446,	// (0x000b1d62) main_mobtv_pane_ParamLimits

0x9446,	// (0x000b1d62) main_mobtv_pane

0x71d7,	// (0x000afaf3) main_cset6_slider_pane_g18_ParamLimits

0x71d7,	// (0x000afaf3) main_cset6_slider_pane_g18

0x71e3,	// (0x000afaff) main_cset6_slider_pane_g19_ParamLimits

0x71e3,	// (0x000afaff) main_cset6_slider_pane_g19

0x7623,	// (0x000aff3f) bg_main_mobtv_pane_ParamLimits

0x7623,	// (0x000aff3f) bg_main_mobtv_pane

0x7631,	// (0x000aff4d) main_mobtv_info_pane

0x763a,	// (0x000aff56) main_mobtv_loading_pane_ParamLimits

0x763a,	// (0x000aff56) main_mobtv_loading_pane

0xe26f,	// (0x000b6b8b) main_mobtv_pg_channel_list_pane

0xe279,	// (0x000b6b95) main_mobtv_pg_hdr_pane

0x7647,	// (0x000aff63) main_mobtv_programe_curr_pane_ParamLimits

0x7647,	// (0x000aff63) main_mobtv_programe_curr_pane

0x7654,	// (0x000aff70) main_mobtv_programe_next_pane_ParamLimits

0x7654,	// (0x000aff70) main_mobtv_programe_next_pane

0xe282,	// (0x000b6b9e) popup_mobtv_noti_window

0xcd01,	// (0x000b561d) main_tv_pg_hdr_pane_g1

0xe28a,	// (0x000b6ba6) main_tv_pg_hdr_pane_g2

0xe292,	// (0x000b6bae) main_tv_pg_hdr_pane_g3

0xe29a,	// (0x000b6bb6) main_tv_pg_hdr_pane_g4

0xe2a2,	// (0x000b6bbe) main_tv_pg_hdr_pane_g5

0xe2ac,	// (0x000b6bc8) main_tv_pg_hdr_pane_g6

0xe2b6,	// (0x000b6bd2) main_tv_pg_hdr_pane_g7

0xe2c0,	// (0x000b6bdc) main_tv_pg_hdr_pane_g8

0xe2ca,	// (0x000b6be6) main_tv_pg_hdr_pane_g9

0xe2d4,	// (0x000b6bf0) main_tv_pg_hdr_pane_g10

0xe2de,	// (0x000b6bfa) main_tv_pg_hdr_pane_g11

0x000a,

0xfc1b,	// (0x000b8537) main_tv_pg_hdr_pane_g

0xe2e8,	// (0x000b6c04) main_tv_pg_hdr_pane_t1

0xe2f6,	// (0x000b6c12) main_tv_pg_hdr_pane_t2

0xe304,	// (0x000b6c20) main_tv_pg_hdr_pane_t3

0xe314,	// (0x000b6c30) main_tv_pg_hdr_pane_t4

0xe324,	// (0x000b6c40) main_tv_pg_hdr_pane_t5

0x0004,

0xfc32,	// (0x000b854e) main_tv_pg_hdr_pane_t

0xe334,	// (0x000b6c50) single_mobtv_pg_channel_pane_ParamLimits

0xe334,	// (0x000b6c50) single_mobtv_pg_channel_pane

0xe346,	// (0x000b6c62) single_mobtv_pg_channel_table_pane

0xad9d,	// (0x000b36b9) single_mobtv_pg_channel_thumb_pane

0xe34f,	// (0x000b6c6b) single_tv_pg_channel_pane_g1

0xe358,	// (0x000b6c74) single_tv_pg_channel_pane_g2

0x0001,

0xfc3d,	// (0x000b8559) single_tv_pg_channel_pane_g

0xcf4f,	// (0x000b586b) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xcf4f,	// (0x000b586b) bg_single_mobtv_pg_channel_thumb_pane

0xe361,	// (0x000b6c7d) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xe361,	// (0x000b6c7d) single_mobtv_pg_channel_thumb_pane_g1

0xe36f,	// (0x000b6c8b) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xe36f,	// (0x000b6c8b) single_mobtv_pg_channel_thumb_pane_g2

0xe37b,	// (0x000b6c97) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xe37b,	// (0x000b6c97) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfc42,	// (0x000b855e) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfc42,	// (0x000b855e) single_mobtv_pg_channel_thumb_pane_g

0xe387,	// (0x000b6ca3) single_mobtv_pg_channel_thumb_pane_t1

0xe395,	// (0x000b6cb1) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc49,	// (0x000b8565) single_mobtv_pg_channel_thumb_pane_t

0xcd01,	// (0x000b561d) bg_single_mobtv_pg_channel_table_pane_g1

0xcd01,	// (0x000b561d) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf6ef,	// (0x000b800b) bg_single_mobtv_pg_channel_table_pane_g

0xe3a3,	// (0x000b6cbf) single_mobtv_pg_channel_table_pane_t1

0xe3b1,	// (0x000b6ccd) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc4e,	// (0x000b856a) single_mobtv_pg_channel_table_pane_t

0x7669,	// (0x000aff85) main_mobtv_info_pane_g1_ParamLimits

0x7669,	// (0x000aff85) main_mobtv_info_pane_g1

0x7687,	// (0x000affa3) main_mobtv_info_pane_t1_ParamLimits

0x7687,	// (0x000affa3) main_mobtv_info_pane_t1

0x76ff,	// (0x000b001b) main_mobtv_info_pane_t2_ParamLimits

0x76ff,	// (0x000b001b) main_mobtv_info_pane_t2

0x0002,

0xfc58,	// (0x000b8574) main_mobtv_info_pane_t_ParamLimits

0xfc58,	// (0x000b8574) main_mobtv_info_pane_t

0x778e,	// (0x000b00aa) wait_bar_pane_cp05

0x77a0,	// (0x000b00bc) main_mobtv_loading_pane_g1_ParamLimits

0x77a0,	// (0x000b00bc) main_mobtv_loading_pane_g1

0x77b3,	// (0x000b00cf) main_mobtv_loading_pane_g2_ParamLimits

0x77b3,	// (0x000b00cf) main_mobtv_loading_pane_g2

0x77bf,	// (0x000b00db) main_mobtv_loading_pane_g3_ParamLimits

0x77bf,	// (0x000b00db) main_mobtv_loading_pane_g3

0x0002,

0xfc5f,	// (0x000b857b) main_mobtv_loading_pane_g_ParamLimits

0xfc5f,	// (0x000b857b) main_mobtv_loading_pane_g

0xe3bf,	// (0x000b6cdb) main_mobtv_loading_pane_t1_ParamLimits

0xe3bf,	// (0x000b6cdb) main_mobtv_loading_pane_t1

0xe3d7,	// (0x000b6cf3) main_mobtv_loading_pane_t2_ParamLimits

0xe3d7,	// (0x000b6cf3) main_mobtv_loading_pane_t2

0x0001,

0xfc66,	// (0x000b8582) main_mobtv_loading_pane_t_ParamLimits

0xfc66,	// (0x000b8582) main_mobtv_loading_pane_t

0x77d2,	// (0x000b00ee) wait_bar_pane_cp06_ParamLimits

0x77d2,	// (0x000b00ee) wait_bar_pane_cp06

0xe3fb,	// (0x000b6d17) main_mobtv_programe_curr_pane_t1

0xe409,	// (0x000b6d25) main_mobtv_programe_curr_pane_t2

0x0001,

0xfc6b,	// (0x000b8587) main_mobtv_programe_curr_pane_t

0xe417,	// (0x000b6d33) main_mobtv_programe_next_pane_t1

0xe425,	// (0x000b6d41) main_mobtv_programe_next_pane_t2

0xe433,	// (0x000b6d4f) main_mobtv_programe_next_pane_t3

0x0002,

0xfc70,	// (0x000b858c) main_mobtv_programe_next_pane_t

0x9bb8,	// (0x000b24d4) bg_popup_mobtv_noti_window_pane

0xe441,	// (0x000b6d5d) popup_mobtv_noti_window_g1

0xe449,	// (0x000b6d65) popup_mobtv_noti_window_t1

0xe457,	// (0x000b6d73) popup_mobtv_noti_window_t2

0x0001,

0xfc77,	// (0x000b8593) popup_mobtv_noti_window_t

0xcd01,	// (0x000b561d) bg_popup_mobtv_noti_window_pane_g1

0x9454,	// (0x000b1d70) sc_clock_pane

0x9454,	// (0x000b1d70) main_fs_bigclock_pane

0x6e19,	// (0x000af735) blid2_tripm_pane_t4_ParamLimits

0x6e19,	// (0x000af735) blid2_tripm_pane_t4

0x77e1,	// (0x000b00fd) sc_clock_pane_g1_ParamLimits

0x77e1,	// (0x000b00fd) sc_clock_pane_g1

0x77f3,	// (0x000b010f) sc_clock_pane_t1_ParamLimits

0x77f3,	// (0x000b010f) sc_clock_pane_t1

0x7815,	// (0x000b0131) sc_clock_pane_t2_ParamLimits

0x7815,	// (0x000b0131) sc_clock_pane_t2

0x782d,	// (0x000b0149) sc_clock_pane_t3_ParamLimits

0x782d,	// (0x000b0149) sc_clock_pane_t3

0x0004,

0xfc7c,	// (0x000b8598) sc_clock_pane_t_ParamLimits

0xfc7c,	// (0x000b8598) sc_clock_pane_t

0x8868,	// (0x000b1184) main_fs_bigclock_indicator_pane_ParamLimits

0x8868,	// (0x000b1184) main_fs_bigclock_indicator_pane

0x78d3,	// (0x000b01ef) main_fs_bigclock_pane_g1_ParamLimits

0x78d3,	// (0x000b01ef) main_fs_bigclock_pane_g1

0x8874,	// (0x000b1190) main_fs_bigclock_pane_t1_ParamLimits

0x8874,	// (0x000b1190) main_fs_bigclock_pane_t1

0x8886,	// (0x000b11a2) main_fs_bigclock_pane_t2_ParamLimits

0x8886,	// (0x000b11a2) main_fs_bigclock_pane_t2

0x889a,	// (0x000b11b6) main_fs_bigclock_pane_t3_ParamLimits

0x889a,	// (0x000b11b6) main_fs_bigclock_pane_t3

0x0002,

0xfe5b,	// (0x000b8777) main_fs_bigclock_pane_t_ParamLimits

0xfe5b,	// (0x000b8777) main_fs_bigclock_pane_t

0xecd0,	// (0x000b75ec) main_fs_bigclock_indicator_pane_g1

0xe176,	// (0x000b6a92) ncim_query_content_pane_g2_ParamLimits

0xe176,	// (0x000b6a92) ncim_query_content_pane_g2

0x0001,

0xfc09,	// (0x000b8525) ncim_query_content_pane_g_ParamLimits

0xfc09,	// (0x000b8525) ncim_query_content_pane_g

0x7846,	// (0x000b0162) sc_clock_pane_t4_ParamLimits

0x7846,	// (0x000b0162) sc_clock_pane_t4

0x9446,	// (0x000b1d62) main_radioblah_pane

0x995b,	// (0x000b2277) cell_call4_button_pane_t1_copy1_ParamLimits

0x995b,	// (0x000b2277) cell_call4_button_pane_t1_copy1

0x742d,	// (0x000afd49) main_ncimui_pane_t1_ParamLimits

0x742d,	// (0x000afd49) main_ncimui_pane_t1

0x7447,	// (0x000afd63) main_ncimui_pane_t2_ParamLimits

0x7447,	// (0x000afd63) main_ncimui_pane_t2

0x0002,

0xfc02,	// (0x000b851e) main_ncimui_pane_t_ParamLimits

0xfc02,	// (0x000b851e) main_ncimui_pane_t

0xe59d,	// (0x000b6eb9) main_radioblah_anim_pane_ParamLimits

0xe59d,	// (0x000b6eb9) main_radioblah_anim_pane

0xe5ae,	// (0x000b6eca) main_radioblah_info_pane_ParamLimits

0xe5ae,	// (0x000b6eca) main_radioblah_info_pane

0xe5c2,	// (0x000b6ede) main_radioblah_pane_t1_ParamLimits

0xe5c2,	// (0x000b6ede) main_radioblah_pane_t1

0xe5de,	// (0x000b6efa) main_radioblah_pane_t2_ParamLimits

0xe5de,	// (0x000b6efa) main_radioblah_pane_t2

0x0003,

0xfc9d,	// (0x000b85b9) main_radioblah_pane_t_ParamLimits

0xfc9d,	// (0x000b85b9) main_radioblah_pane_t

0x7932,	// (0x000b024e) main_radioblah_rocker_ctrl_pane_ParamLimits

0x7932,	// (0x000b024e) main_radioblah_rocker_ctrl_pane

0xe626,	// (0x000b6f42) main_radioblah_info_pane_t1_ParamLimits

0xe626,	// (0x000b6f42) main_radioblah_info_pane_t1

0x798a,	// (0x000b02a6) main_radioblah_info_pane_t2_ParamLimits

0x798a,	// (0x000b02a6) main_radioblah_info_pane_t2

0x0003,

0xfca6,	// (0x000b85c2) main_radioblah_info_pane_t_ParamLimits

0xfca6,	// (0x000b85c2) main_radioblah_info_pane_t

0xcd01,	// (0x000b561d) main_radioblah_rocker_ctrl_pane_g1

0x7a3a,	// (0x000b0356) main_radioblah_rocker_ctrl_pane_g2

0x7a42,	// (0x000b035e) main_radioblah_rocker_ctrl_pane_g3

0x7a4a,	// (0x000b0366) main_radioblah_rocker_ctrl_pane_g4

0x7a52,	// (0x000b036e) main_radioblah_rocker_ctrl_pane_g5

0x7a5a,	// (0x000b0376) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfcaf,	// (0x000b85cb) main_radioblah_rocker_ctrl_pane_g

0x70e7,	// (0x000afa03) main_cset_text2_pane_t1_copy1_ParamLimits

0x99b9,	// (0x000b22d5) cam4_image_uncrop_qvga_pane

0x9a1a,	// (0x000b2336) vid4_image_uncrop_qcif_pane

0x9b92,	// (0x000b24ae) cam6_image_uncrop_qvga_pane_ParamLimits

0x9b92,	// (0x000b24ae) cam6_image_uncrop_qvga_pane

0xde51,	// (0x000b676d) vid6_image_uncrop_qcif_pane_ParamLimits

0xde51,	// (0x000b676d) vid6_image_uncrop_qcif_pane

0x9bb8,	// (0x000b24d4) bg_popup_preview_window_pane_cp03

0xe11a,	// (0x000b6a36) list_cset_text2_pane

0xe122,	// (0x000b6a3e) main_cset6_text2_pane_g1

0xe138,	// (0x000b6a54) main_cset6_text2_pane_t1

0xe660,	// (0x000b6f7c) list_cset_text2_pane_t1_ParamLimits

0xe660,	// (0x000b6f7c) list_cset_text2_pane_t1

0x9446,	// (0x000b1d62) main_radioblah_pane_ParamLimits

0x777a,	// (0x000b0096) main_mobtv_info_pane_t3_ParamLimits

0x777a,	// (0x000b0096) main_mobtv_info_pane_t3

0x7920,	// (0x000b023c) main_radioblah_pane_g1

0x795a,	// (0x000b0276) main_radioblah_info_pane_g1

0x79df,	// (0x000b02fb) main_radioblah_info_pane_t3_ParamLimits

0x79df,	// (0x000b02fb) main_radioblah_info_pane_t3

0x226e,	// (0x000aab8a) highlight_cell_cale_month_pane_ParamLimits

0x226e,	// (0x000aab8a) highlight_cell_cale_month_pane

0x9454,	// (0x000b1d70) main_phob_fisheye_pane

0xd02b,	// (0x000b5947) scroll_pane_cp0031_ParamLimits

0xd02b,	// (0x000b5947) scroll_pane_cp0031

0xdf5f,	// (0x000b687b) wait_bar_pane_cp08_ParamLimits

0x7169,	// (0x000afa85) cset_list_set_pane_copy1_ParamLimits

0xe67b,	// (0x000b6f97) highlight_cell_cale_month_pane_g1

0x7a62,	// (0x000b037e) highlight_cell_cale_month_pane_t1

0xdbf4,	// (0x000b6510) list_gen_pane_cp01

0xd845,	// (0x000b6161) scroll_pane_01

0x7a70,	// (0x000b038c) list_single_double_fisheye_pane

0x7a79,	// (0x000b0395) list_double_fisheye_pane_g1_ParamLimits

0x7a79,	// (0x000b0395) list_double_fisheye_pane_g1

0x7a85,	// (0x000b03a1) list_double_fisheye_pane_g2_ParamLimits

0x7a85,	// (0x000b03a1) list_double_fisheye_pane_g2

0x7a99,	// (0x000b03b5) list_double_fisheye_pane_g3_ParamLimits

0x7a99,	// (0x000b03b5) list_double_fisheye_pane_g3

0x0004,

0xfcbc,	// (0x000b85d8) list_double_fisheye_pane_g_ParamLimits

0xfcbc,	// (0x000b85d8) list_double_fisheye_pane_g

0x7ac2,	// (0x000b03de) list_double_fisheye_pane_t1_ParamLimits

0x7ac2,	// (0x000b03de) list_double_fisheye_pane_t1

0x7add,	// (0x000b03f9) list_double_fisheye_pane_t2_ParamLimits

0x7add,	// (0x000b03f9) list_double_fisheye_pane_t2

0x0001,

0xfcc7,	// (0x000b85e3) list_double_fisheye_pane_t_ParamLimits

0xfcc7,	// (0x000b85e3) list_double_fisheye_pane_t

0x9454,	// (0x000b1d70) main_call5_pane

0x7871,	// (0x000b018d) sc_swipe_pane_ParamLimits

0x7871,	// (0x000b018d) sc_swipe_pane

0x7b12,	// (0x000b042e) call5_image_pane_ParamLimits

0x7b12,	// (0x000b042e) call5_image_pane

0x7b2f,	// (0x000b044b) call5_swipe_1_pane_ParamLimits

0x7b2f,	// (0x000b044b) call5_swipe_1_pane

0x7b42,	// (0x000b045e) call5_swipe_2_pane_ParamLimits

0x7b42,	// (0x000b045e) call5_swipe_2_pane

0x7b6d,	// (0x000b0489) popup_call5_audio_first_window_ParamLimits

0x7b6d,	// (0x000b0489) popup_call5_audio_first_window

0xcf4f,	// (0x000b586b) call5_swipe_1_pane_g1_ParamLimits

0xcf4f,	// (0x000b586b) call5_swipe_1_pane_g1

0xe683,	// (0x000b6f9f) call5_swipe_1_pane_g2_ParamLimits

0xe683,	// (0x000b6f9f) call5_swipe_1_pane_g2

0x0001,

0xfccc,	// (0x000b85e8) call5_swipe_1_pane_g_ParamLimits

0xfccc,	// (0x000b85e8) call5_swipe_1_pane_g

0xe68f,	// (0x000b6fab) call5_swipe_1_pane_t1_ParamLimits

0xe68f,	// (0x000b6fab) call5_swipe_1_pane_t1

0xcf4f,	// (0x000b586b) call5_swipe_2_pane_g1_ParamLimits

0xcf4f,	// (0x000b586b) call5_swipe_2_pane_g1

0xe6a4,	// (0x000b6fc0) call5_swipe_2_pane_g2_ParamLimits

0xe6a4,	// (0x000b6fc0) call5_swipe_2_pane_g2

0x0001,

0xfcd1,	// (0x000b85ed) call5_swipe_2_pane_g_ParamLimits

0xfcd1,	// (0x000b85ed) call5_swipe_2_pane_g

0xe6b0,	// (0x000b6fcc) call5_swipe_2_pane_t1_ParamLimits

0xe6b0,	// (0x000b6fcc) call5_swipe_2_pane_t1

0xe6c5,	// (0x000b6fe1) sc_swipe_pane_g1_ParamLimits

0xe6c5,	// (0x000b6fe1) sc_swipe_pane_g1

0xe6d2,	// (0x000b6fee) sc_swipe_pane_g2_ParamLimits

0xe6d2,	// (0x000b6fee) sc_swipe_pane_g2

0x0001,

0xfcd6,	// (0x000b85f2) sc_swipe_pane_g_ParamLimits

0xfcd6,	// (0x000b85f2) sc_swipe_pane_g

0xe6de,	// (0x000b6ffa) sc_swipe_pane_t1_ParamLimits

0xe6de,	// (0x000b6ffa) sc_swipe_pane_t1

0x9454,	// (0x000b1d70) main_cmail_launcher_pane

0x7b7e,	// (0x000b049a) aid_size_cell_cmail_l_ParamLimits

0x7b7e,	// (0x000b049a) aid_size_cell_cmail_l

0x7b8c,	// (0x000b04a8) grid_cmail_l_pane_ParamLimits

0x7b8c,	// (0x000b04a8) grid_cmail_l_pane

0x7ba6,	// (0x000b04c2) cell_cmail_l_pane_ParamLimits

0x7ba6,	// (0x000b04c2) cell_cmail_l_pane

0xe6f3,	// (0x000b700f) cell_cmail_l_pane_g1_ParamLimits

0xe6f3,	// (0x000b700f) cell_cmail_l_pane_g1

0xe6ff,	// (0x000b701b) cell_cmail_l_pane_t1_ParamLimits

0xe6ff,	// (0x000b701b) cell_cmail_l_pane_t1

0xe715,	// (0x000b7031) cell_cmail_l_pane_t2_ParamLimits

0xe715,	// (0x000b7031) cell_cmail_l_pane_t2

0x0001,

0xfcdb,	// (0x000b85f7) cell_cmail_l_pane_t_ParamLimits

0xfcdb,	// (0x000b85f7) cell_cmail_l_pane_t

0xb2b7,	// (0x000b3bd3) grid_highlight_pane_cp018_ParamLimits

0xb2b7,	// (0x000b3bd3) grid_highlight_pane_cp018

0x0541,	// (0x000a8e5d) main2_pane_ParamLimits

0x0541,	// (0x000a8e5d) main2_pane

0xa8f7,	// (0x000b3213) popup_sp_fs_action_menu_bg_pane_g1

0xa8ff,	// (0x000b321b) popup_sp_fs_action_menu_bg_pane_g2

0xa907,	// (0x000b3223) popup_sp_fs_action_menu_bg_pane_g3

0xa90f,	// (0x000b322b) popup_sp_fs_action_menu_bg_pane_g4

0xa917,	// (0x000b3233) popup_sp_fs_action_menu_bg_pane_g5

0xa91f,	// (0x000b323b) popup_sp_fs_action_menu_bg_pane_g6

0xa927,	// (0x000b3243) popup_sp_fs_action_menu_bg_pane_g7

0xa92f,	// (0x000b324b) popup_sp_fs_action_menu_bg_pane_g8

0xa937,	// (0x000b3253) popup_sp_fs_action_menu_bg_pane_g9

0xa93f,	// (0x000b325b) popup_sp_fs_action_menu_bg_pane_g10

0xa93f,	// (0x000b325b) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf18a,	// (0x000b7aa6) popup_sp_fs_action_menu_bg_pane_g

0x1439,	// (0x000a9d55) list_medium_line_x2_t3_g3_g1_ParamLimits

0x1439,	// (0x000a9d55) list_medium_line_x2_t3_g3_g1

0x1445,	// (0x000a9d61) list_medium_line_x2_t3_g3_g2_ParamLimits

0x1445,	// (0x000a9d61) list_medium_line_x2_t3_g3_g2

0x1451,	// (0x000a9d6d) list_medium_line_x2_t3_g3_g3_ParamLimits

0x1451,	// (0x000a9d6d) list_medium_line_x2_t3_g3_g3

0x0002,

0xf238,	// (0x000b7b54) list_medium_line_x2_t3_g3_g_ParamLimits

0xf238,	// (0x000b7b54) list_medium_line_x2_t3_g3_g

0x145d,	// (0x000a9d79) list_medium_line_x2_t3_g3_t1_ParamLimits

0x145d,	// (0x000a9d79) list_medium_line_x2_t3_g3_t1

0x1472,	// (0x000a9d8e) list_medium_line_x2_t3_g3_t2_ParamLimits

0x1472,	// (0x000a9d8e) list_medium_line_x2_t3_g3_t2

0x1486,	// (0x000a9da2) list_medium_line_x2_t3_g3_t3_ParamLimits

0x1486,	// (0x000a9da2) list_medium_line_x2_t3_g3_t3

0x0002,

0xf23f,	// (0x000b7b5b) list_medium_line_x2_t3_g3_t_ParamLimits

0xf23f,	// (0x000b7b5b) list_medium_line_x2_t3_g3_t

0x1439,	// (0x000a9d55) list_medium_line_x2_t3_g2_g1_ParamLimits

0x1439,	// (0x000a9d55) list_medium_line_x2_t3_g2_g1

0x1451,	// (0x000a9d6d) list_medium_line_x2_t3_g2_g2_ParamLimits

0x1451,	// (0x000a9d6d) list_medium_line_x2_t3_g2_g2

0x0001,

0xf246,	// (0x000b7b62) list_medium_line_x2_t3_g2_g_ParamLimits

0xf246,	// (0x000b7b62) list_medium_line_x2_t3_g2_g

0x149b,	// (0x000a9db7) list_medium_line_x2_t3_g2_t1_ParamLimits

0x149b,	// (0x000a9db7) list_medium_line_x2_t3_g2_t1

0x14b1,	// (0x000a9dcd) list_medium_line_x2_t3_g2_t2_ParamLimits

0x14b1,	// (0x000a9dcd) list_medium_line_x2_t3_g2_t2

0x1486,	// (0x000a9da2) list_medium_line_x2_t3_g2_t3_ParamLimits

0x1486,	// (0x000a9da2) list_medium_line_x2_t3_g2_t3

0x0002,

0xf24b,	// (0x000b7b67) list_medium_line_x2_t3_g2_t_ParamLimits

0xf24b,	// (0x000b7b67) list_medium_line_x2_t3_g2_t

0x1439,	// (0x000a9d55) list_medium_line_x2_t4_g4_g1_ParamLimits

0x1439,	// (0x000a9d55) list_medium_line_x2_t4_g4_g1

0x14c3,	// (0x000a9ddf) list_medium_line_x2_t4_g4_g2_ParamLimits

0x14c3,	// (0x000a9ddf) list_medium_line_x2_t4_g4_g2

0x1445,	// (0x000a9d61) list_medium_line_x2_t4_g4_g3_ParamLimits

0x1445,	// (0x000a9d61) list_medium_line_x2_t4_g4_g3

0x14cf,	// (0x000a9deb) list_medium_line_x2_t4_g4_g4_ParamLimits

0x14cf,	// (0x000a9deb) list_medium_line_x2_t4_g4_g4

0x0003,

0xf252,	// (0x000b7b6e) list_medium_line_x2_t4_g4_g_ParamLimits

0xf252,	// (0x000b7b6e) list_medium_line_x2_t4_g4_g

0x14db,	// (0x000a9df7) list_medium_line_x2_t4_g4_t1_ParamLimits

0x14db,	// (0x000a9df7) list_medium_line_x2_t4_g4_t1

0x14f5,	// (0x000a9e11) list_medium_line_x2_t4_g4_t2_ParamLimits

0x14f5,	// (0x000a9e11) list_medium_line_x2_t4_g4_t2

0x150b,	// (0x000a9e27) list_medium_line_x2_t4_g4_t3_ParamLimits

0x150b,	// (0x000a9e27) list_medium_line_x2_t4_g4_t3

0x1520,	// (0x000a9e3c) list_medium_line_x2_t4_g4_t4_ParamLimits

0x1520,	// (0x000a9e3c) list_medium_line_x2_t4_g4_t4

0x0003,

0xf25b,	// (0x000b7b77) list_medium_line_x2_t4_g4_t_ParamLimits

0xf25b,	// (0x000b7b77) list_medium_line_x2_t4_g4_t

0x1439,	// (0x000a9d55) list_medium_line_x2_t2_g4_g1_ParamLimits

0x1439,	// (0x000a9d55) list_medium_line_x2_t2_g4_g1

0x14c3,	// (0x000a9ddf) list_medium_line_x2_t2_g4_g2_ParamLimits

0x14c3,	// (0x000a9ddf) list_medium_line_x2_t2_g4_g2

0x1445,	// (0x000a9d61) list_medium_line_x2_t2_g4_g3_ParamLimits

0x1445,	// (0x000a9d61) list_medium_line_x2_t2_g4_g3

0x1451,	// (0x000a9d6d) list_medium_line_x2_t2_g4_g4_ParamLimits

0x1451,	// (0x000a9d6d) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2c2,	// (0x000b7bde) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2c2,	// (0x000b7bde) list_medium_line_x2_t2_g4_g

0x2294,	// (0x000aabb0) list_medium_line_x2_t2_g4_t1_ParamLimits

0x2294,	// (0x000aabb0) list_medium_line_x2_t2_g4_t1

0x1486,	// (0x000a9da2) list_medium_line_x2_t2_g4_t2_ParamLimits

0x1486,	// (0x000a9da2) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2cb,	// (0x000b7be7) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2cb,	// (0x000b7be7) list_medium_line_x2_t2_g4_t

0x1439,	// (0x000a9d55) list_medium_line_x2_t2_g3_g1_ParamLimits

0x1439,	// (0x000a9d55) list_medium_line_x2_t2_g3_g1

0x1445,	// (0x000a9d61) list_medium_line_x2_t2_g3_g2_ParamLimits

0x1445,	// (0x000a9d61) list_medium_line_x2_t2_g3_g2

0x1451,	// (0x000a9d6d) list_medium_line_x2_t2_g3_g3_ParamLimits

0x1451,	// (0x000a9d6d) list_medium_line_x2_t2_g3_g3

0x0002,

0xf238,	// (0x000b7b54) list_medium_line_x2_t2_g3_g_ParamLimits

0xf238,	// (0x000b7b54) list_medium_line_x2_t2_g3_g

0x22a9,	// (0x000aabc5) list_medium_line_x2_t2_g3_t1_ParamLimits

0x22a9,	// (0x000aabc5) list_medium_line_x2_t2_g3_t1

0x1486,	// (0x000a9da2) list_medium_line_x2_t2_g3_t2_ParamLimits

0x1486,	// (0x000a9da2) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2d0,	// (0x000b7bec) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2d0,	// (0x000b7bec) list_medium_line_x2_t2_g3_t

0x23fd,	// (0x000aad19) main_sp_fs_list_pane_ParamLimits

0x23fd,	// (0x000aad19) main_sp_fs_list_pane

0xca20,	// (0x000b533c) sp_fs_scroll_pane_ParamLimits

0xca20,	// (0x000b533c) sp_fs_scroll_pane

0x2409,	// (0x000aad25) list_medium_line_x2_t3_t1

0x2419,	// (0x000aad35) list_medium_line_x2_t3_t2

0x2427,	// (0x000aad43) list_medium_line_x2_t3_t3

0x0002,

0xf31b,	// (0x000b7c37) list_medium_line_x2_t3_t

0x2435,	// (0x000aad51) list_medium_line_x3_t4_t1

0x2445,	// (0x000aad61) list_medium_line_x3_t4_t2

0x2453,	// (0x000aad6f) list_medium_line_x3_t4_t3

0x2427,	// (0x000aad43) list_medium_line_x3_t4_t4

0x0003,

0xf322,	// (0x000b7c3e) list_medium_line_x3_t4_t

0x2461,	// (0x000aad7d) list_medium_line_x4_t5_t1

0x2471,	// (0x000aad8d) list_medium_line_x4_t5_t2

0x2453,	// (0x000aad6f) list_medium_line_x4_t5_t3

0x247f,	// (0x000aad9b) list_medium_line_x4_t5_t4

0x2427,	// (0x000aad43) list_medium_line_x4_t5_t5

0x0004,

0xf32b,	// (0x000b7c47) list_medium_line_x4_t5_t

0x1439,	// (0x000a9d55) list_medium_line_t4_g4_g1_ParamLimits

0x1439,	// (0x000a9d55) list_medium_line_t4_g4_g1

0x14cf,	// (0x000a9deb) list_medium_line_t4_g4_g2_ParamLimits

0x14cf,	// (0x000a9deb) list_medium_line_t4_g4_g2

0x248d,	// (0x000aada9) list_medium_line_t4_g4_g3_ParamLimits

0x248d,	// (0x000aada9) list_medium_line_t4_g4_g3

0x1451,	// (0x000a9d6d) list_medium_line_t4_g4_g4_ParamLimits

0x1451,	// (0x000a9d6d) list_medium_line_t4_g4_g4

0x0003,

0xf336,	// (0x000b7c52) list_medium_line_t4_g4_g_ParamLimits

0xf336,	// (0x000b7c52) list_medium_line_t4_g4_g

0x2499,	// (0x000aadb5) list_medium_line_t4_g4_t1_ParamLimits

0x2499,	// (0x000aadb5) list_medium_line_t4_g4_t1

0x24ae,	// (0x000aadca) list_medium_line_t4_g4_t2_ParamLimits

0x24ae,	// (0x000aadca) list_medium_line_t4_g4_t2

0x24c3,	// (0x000aaddf) list_medium_line_t4_g4_t3_ParamLimits

0x24c3,	// (0x000aaddf) list_medium_line_t4_g4_t3

0x1486,	// (0x000a9da2) list_medium_line_t4_g4_t4_ParamLimits

0x1486,	// (0x000a9da2) list_medium_line_t4_g4_t4

0x0003,

0xf33f,	// (0x000b7c5b) list_medium_line_t4_g4_t_ParamLimits

0xf33f,	// (0x000b7c5b) list_medium_line_t4_g4_t

0x259b,	// (0x000aaeb7) chi_dic_find_pane_g1

0x35d5,	// (0x000abef1) main_tport_pane

0x6474,	// (0x000aed90) list_medium_line_plain_t1

0x651c,	// (0x000aee38) list_medium_line_t2_g2_g1_ParamLimits

0x651c,	// (0x000aee38) list_medium_line_t2_g2_g1

0x6528,	// (0x000aee44) list_medium_line_t2_g2_g2_ParamLimits

0x6528,	// (0x000aee44) list_medium_line_t2_g2_g2

0x0001,

0xfa13,	// (0x000b832f) list_medium_line_t2_g2_g_ParamLimits

0xfa13,	// (0x000b832f) list_medium_line_t2_g2_g

0x6534,	// (0x000aee50) list_medium_line_t2_g2_t1_ParamLimits

0x6534,	// (0x000aee50) list_medium_line_t2_g2_t1

0x654e,	// (0x000aee6a) list_medium_line_t2_g2_t2_ParamLimits

0x654e,	// (0x000aee6a) list_medium_line_t2_g2_t2

0x0001,

0xfa18,	// (0x000b8334) list_medium_line_t2_g2_t_ParamLimits

0xfa18,	// (0x000b8334) list_medium_line_t2_g2_t

0x9fe6,	// (0x000b2902) aid_sp_fs_list_icon_a_sm

0x9fee,	// (0x000b290a) aid_sp_fs_list_icon_d

0xb2c5,	// (0x000b3be1) aid_sp_fs_text_primary

0xb2ce,	// (0x000b3bea) aid_sp_fs_text_secondary

0x6bc6,	// (0x000af4e2) list_medium_line

0x6bc6,	// (0x000af4e2) list_medium_line_g2

0x6bc6,	// (0x000af4e2) list_medium_line_g3

0x6bc6,	// (0x000af4e2) list_medium_line_plain

0x6bc6,	// (0x000af4e2) list_medium_line_plain_t2

0x6bc6,	// (0x000af4e2) list_medium_line_plain_t3

0x6bc6,	// (0x000af4e2) list_medium_line_right_icon

0x6bc6,	// (0x000af4e2) list_medium_line_right_iconx2

0x6bc6,	// (0x000af4e2) list_medium_line_t2

0x6bc6,	// (0x000af4e2) list_medium_line_t2_g2

0x6bc6,	// (0x000af4e2) list_medium_line_t2_g3

0x6bc6,	// (0x000af4e2) list_medium_line_t2_right_icon

0x6bc6,	// (0x000af4e2) list_medium_line_t2_right_iconx2

0x6bc6,	// (0x000af4e2) list_medium_line_t3

0x6bc6,	// (0x000af4e2) list_medium_line_t3_g2

0x6bc6,	// (0x000af4e2) list_medium_line_t3_g3

0x6bc6,	// (0x000af4e2) list_medium_line_t3_right_iconx2

0x6bcf,	// (0x000af4eb) list_medium_line_t4_g4

0x6bd8,	// (0x000af4f4) list_medium_line_x2

0x6bd8,	// (0x000af4f4) list_medium_line_x2_t2_g2

0x6bd8,	// (0x000af4f4) list_medium_line_x2_t2_g3

0x6bd8,	// (0x000af4f4) list_medium_line_x2_t2_g4

0x6bd8,	// (0x000af4f4) list_medium_line_x2_t3

0x6bd8,	// (0x000af4f4) list_medium_line_x2_t3_g2

0x6bd8,	// (0x000af4f4) list_medium_line_x2_t3_g3

0x6bd8,	// (0x000af4f4) list_medium_line_x2_t3_g4

0x6bd8,	// (0x000af4f4) list_medium_line_x2_t4_g2

0x6bd8,	// (0x000af4f4) list_medium_line_x2_t4_g4

0x6be1,	// (0x000af4fd) list_medium_line_x3

0x6be1,	// (0x000af4fd) list_medium_line_x3_t4

0x6be1,	// (0x000af4fd) list_medium_line_x3_t4_g4

0x6bcf,	// (0x000af4eb) list_medium_line_x4_t4

0x6bcf,	// (0x000af4eb) list_medium_line_x4_t4_g7

0x6bcf,	// (0x000af4eb) list_medium_line_x4_t5

0x6bea,	// (0x000af506) list_single_fs_dyc_pane_ParamLimits

0x6bea,	// (0x000af506) list_single_fs_dyc_pane

0x1439,	// (0x000a9d55) list_medium_line_x4_t4_g7_g1_ParamLimits

0x1439,	// (0x000a9d55) list_medium_line_x4_t4_g7_g1

0x732b,	// (0x000afc47) list_medium_line_x4_t4_g7_g2_ParamLimits

0x732b,	// (0x000afc47) list_medium_line_x4_t4_g7_g2

0x7337,	// (0x000afc53) list_medium_line_x4_t4_g7_g3_ParamLimits

0x7337,	// (0x000afc53) list_medium_line_x4_t4_g7_g3

0x7346,	// (0x000afc62) list_medium_line_x4_t4_g7_g4_ParamLimits

0x7346,	// (0x000afc62) list_medium_line_x4_t4_g7_g4

0x7352,	// (0x000afc6e) list_medium_line_x4_t4_g7_g5_ParamLimits

0x7352,	// (0x000afc6e) list_medium_line_x4_t4_g7_g5

0x7361,	// (0x000afc7d) list_medium_line_x4_t4_g7_g6_ParamLimits

0x7361,	// (0x000afc7d) list_medium_line_x4_t4_g7_g6

0x7370,	// (0x000afc8c) list_medium_line_x4_t4_g7_g7_ParamLimits

0x7370,	// (0x000afc8c) list_medium_line_x4_t4_g7_g7

0x0006,

0xfbe3,	// (0x000b84ff) list_medium_line_x4_t4_g7_g_ParamLimits

0xfbe3,	// (0x000b84ff) list_medium_line_x4_t4_g7_g

0x737c,	// (0x000afc98) list_medium_line_x4_t4_g7_t1_ParamLimits

0x737c,	// (0x000afc98) list_medium_line_x4_t4_g7_t1

0x7391,	// (0x000afcad) list_medium_line_x4_t4_g7_t2_ParamLimits

0x7391,	// (0x000afcad) list_medium_line_x4_t4_g7_t2

0x73a6,	// (0x000afcc2) list_medium_line_x4_t4_g7_t3_ParamLimits

0x73a6,	// (0x000afcc2) list_medium_line_x4_t4_g7_t3

0x73bb,	// (0x000afcd7) list_medium_line_x4_t4_g7_t4_ParamLimits

0x73bb,	// (0x000afcd7) list_medium_line_x4_t4_g7_t4

0x73cd,	// (0x000afce9) list_medium_line_x4_t4_g7_t5_ParamLimits

0x73cd,	// (0x000afce9) list_medium_line_x4_t4_g7_t5

0x0004,

0xfbf2,	// (0x000b850e) list_medium_line_x4_t4_g7_t_ParamLimits

0xfbf2,	// (0x000b850e) list_medium_line_x4_t4_g7_t

0x73df,	// (0x000afcfb) list_single_dyc_row_pane_ParamLimits

0x73df,	// (0x000afcfb) list_single_dyc_row_pane

0x7aff,	// (0x000b041b) call5_gesture_pane_ParamLimits

0x7aff,	// (0x000b041b) call5_gesture_pane

0x7b55,	// (0x000b0471) call5_windows_pane_ParamLimits

0x7b55,	// (0x000b0471) call5_windows_pane

0x7bc0,	// (0x000b04dc) call5_swipe_1_pane_cp_ParamLimits

0x7bc0,	// (0x000b04dc) call5_swipe_1_pane_cp

0x7bcc,	// (0x000b04e8) call5_swipe_2_pane_cp_ParamLimits

0x7bcc,	// (0x000b04e8) call5_swipe_2_pane_cp

0xaa23,	// (0x000b333f) call5_image_pane_cp

0x7bd8,	// (0x000b04f4) popup_call5_audio_first_window_cp_ParamLimits

0x7bd8,	// (0x000b04f4) popup_call5_audio_first_window_cp

0xe6c5,	// (0x000b6fe1) call5_swipe_1_pane_g1_cp_ParamLimits

0xe6c5,	// (0x000b6fe1) call5_swipe_1_pane_g1_cp

0xe732,	// (0x000b704e) call5_swipe_1_pane_g2_cp

0xe6de,	// (0x000b6ffa) call5_swipe_1_pane_t1_cp_ParamLimits

0xe6de,	// (0x000b6ffa) call5_swipe_1_pane_t1_cp

0xe6c5,	// (0x000b6fe1) call5_swipe_2_pane_g1_cp_ParamLimits

0xe6c5,	// (0x000b6fe1) call5_swipe_2_pane_g1_cp

0xe73a,	// (0x000b7056) call5_swipe_2_pane_g2_cp

0xe742,	// (0x000b705e) call5_swipe_2_pane_t1_cp_ParamLimits

0xe742,	// (0x000b705e) call5_swipe_2_pane_t1_cp

0xb2b7,	// (0x000b3bd3) main_sp_fs_email_pane

0xe757,	// (0x000b7073) main_sp_fs_listscroll_pane_te

0x7be6,	// (0x000b0502) popup_sp_fs_action_menu_pane_ParamLimits

0x7be6,	// (0x000b0502) popup_sp_fs_action_menu_pane

0xcd01,	// (0x000b561d) bg_sp_fs_ctrlbar_pane_g1

0xe760,	// (0x000b707c) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xe769,	// (0x000b7085) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xe772,	// (0x000b708e) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xcd01,	// (0x000b561d) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfce0,	// (0x000b85fc) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xcae6,	// (0x000b5402) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xcae6,	// (0x000b5402) bg_sp_fs_ctrlbar_ddmenu_pane

0xe77b,	// (0x000b7097) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xe77b,	// (0x000b7097) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xe787,	// (0x000b70a3) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xe787,	// (0x000b70a3) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfce9,	// (0x000b8605) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfce9,	// (0x000b8605) main_sp_fs_ctrlbar_ddmenu_pane_g

0xe793,	// (0x000b70af) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xe793,	// (0x000b70af) main_sp_fs_ctrlbar_ddmenu_pane_t1

0x7c2a,	// (0x000b0546) list_medium_line_t2_right_icon_g1

0x7c32,	// (0x000b054e) list_medium_line_t2_right_icon_t1

0x7c42,	// (0x000b055e) list_medium_line_t2_right_icon_t2

0x0001,

0xfcee,	// (0x000b860a) list_medium_line_t2_right_icon_t

0xc8ed,	// (0x000b5209) bg_sp_fs_ctrlbar_pane_ParamLimits

0xc8ed,	// (0x000b5209) bg_sp_fs_ctrlbar_pane

0x7c9c,	// (0x000b05b8) main_sp_fs_ctrlbar_button_pane_cp01

0x7ca6,	// (0x000b05c2) main_sp_fs_ctrlbar_ddmenu_pane

0xe7e5,	// (0x000b7101) main_sp_fs_ctrlbar_pane_g1

0xe7f1,	// (0x000b710d) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfcf3,	// (0x000b860f) main_sp_fs_ctrlbar_pane_g

0xe7fd,	// (0x000b7119) main_sp_fs_ctrlbar_pane_t1

0x7cb0,	// (0x000b05cc) main_sp_fs_ctrlbar_pane

0x7cd4,	// (0x000b05f0) main_sp_fs_listscroll_pane_te_cp01

0x7cf4,	// (0x000b0610) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x7cf4,	// (0x000b0610) popup_sp_fs_action_menu_pane_cp01

0xb2b7,	// (0x000b3bd3) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0xb2b7,	// (0x000b3bd3) bg_sp_fs_highlight_list_pane_cp01

0xa022,	// (0x000b293e) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0xa022,	// (0x000b293e) sp_fs_action_menu_list_gene_pane_g1

0xe82d,	// (0x000b7149) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xe82d,	// (0x000b7149) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfcfd,	// (0x000b8619) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfcfd,	// (0x000b8619) sp_fs_action_menu_list_gene_pane_g

0xa031,	// (0x000b294d) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0xa031,	// (0x000b294d) sp_fs_action_menu_list_gene_pane_t1

0xa049,	// (0x000b2965) sp_fs_action_menu_list_gene_pane_ParamLimits

0xa049,	// (0x000b2965) sp_fs_action_menu_list_gene_pane

0xe83a,	// (0x000b7156) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xe83a,	// (0x000b7156) popup_sp_fs_action_menu_bg_pane

0xa068,	// (0x000b2984) sp_fs_action_menu_list_pane_ParamLimits

0xa068,	// (0x000b2984) sp_fs_action_menu_list_pane

0x7d24,	// (0x000b0640) sp_fs_scroll_pane_cp01_ParamLimits

0x7d24,	// (0x000b0640) sp_fs_scroll_pane_cp01

0x7d4a,	// (0x000b0666) list_medium_line_plain_t2_t1

0x7d5a,	// (0x000b0676) list_medium_line_plain_t2_t2

0x0001,

0xfd02,	// (0x000b861e) list_medium_line_plain_t2_t

0x7d6a,	// (0x000b0686) list_medium_line_plain_t3_t1

0x7d7a,	// (0x000b0696) list_medium_line_plain_t3_t2

0x7d88,	// (0x000b06a4) list_medium_line_plain_t3_t3

0x0002,

0xfd07,	// (0x000b8623) list_medium_line_plain_t3_t

0x1439,	// (0x000a9d55) list_medium_line_x2_t2_g2_g1_ParamLimits

0x1439,	// (0x000a9d55) list_medium_line_x2_t2_g2_g1

0x1451,	// (0x000a9d6d) list_medium_line_x2_t2_g2_g2_ParamLimits

0x1451,	// (0x000a9d6d) list_medium_line_x2_t2_g2_g2

0x0001,

0xf246,	// (0x000b7b62) list_medium_line_x2_t2_g2_g_ParamLimits

0xf246,	// (0x000b7b62) list_medium_line_x2_t2_g2_g

0x2499,	// (0x000aadb5) list_medium_line_x2_t2_g2_t1_ParamLimits

0x2499,	// (0x000aadb5) list_medium_line_x2_t2_g2_t1

0x1486,	// (0x000a9da2) list_medium_line_x2_t2_g2_t2_ParamLimits

0x1486,	// (0x000a9da2) list_medium_line_x2_t2_g2_t2

0x0001,

0xfd0e,	// (0x000b862a) list_medium_line_x2_t2_g2_t_ParamLimits

0xfd0e,	// (0x000b862a) list_medium_line_x2_t2_g2_t

0x1439,	// (0x000a9d55) list_medium_line_x2_t4_g2_g1_ParamLimits

0x1439,	// (0x000a9d55) list_medium_line_x2_t4_g2_g1

0x7d96,	// (0x000b06b2) list_medium_line_x2_t4_g2_g2_ParamLimits

0x7d96,	// (0x000b06b2) list_medium_line_x2_t4_g2_g2

0x0001,

0xfd13,	// (0x000b862f) list_medium_line_x2_t4_g2_g_ParamLimits

0xfd13,	// (0x000b862f) list_medium_line_x2_t4_g2_g

0x7da8,	// (0x000b06c4) list_medium_line_x2_t4_g2_t1_ParamLimits

0x7da8,	// (0x000b06c4) list_medium_line_x2_t4_g2_t1

0x7dc2,	// (0x000b06de) list_medium_line_x2_t4_g2_t2_ParamLimits

0x7dc2,	// (0x000b06de) list_medium_line_x2_t4_g2_t2

0x7dd8,	// (0x000b06f4) list_medium_line_x2_t4_g2_t3_ParamLimits

0x7dd8,	// (0x000b06f4) list_medium_line_x2_t4_g2_t3

0x1486,	// (0x000a9da2) list_medium_line_x2_t4_g2_t4_ParamLimits

0x1486,	// (0x000a9da2) list_medium_line_x2_t4_g2_t4

0x0003,

0xfd18,	// (0x000b8634) list_medium_line_x2_t4_g2_t_ParamLimits

0xfd18,	// (0x000b8634) list_medium_line_x2_t4_g2_t

0x7ded,	// (0x000b0709) list_medium_line_t3_right_iconx2_g1

0x7c2a,	// (0x000b0546) list_medium_line_t3_right_iconx2_g2

0x7df5,	// (0x000b0711) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfd21,	// (0x000b863d) list_medium_line_t3_right_iconx2_g

0x7dff,	// (0x000b071b) list_medium_line_t3_right_iconx2_t1

0x7e0f,	// (0x000b072b) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfd28,	// (0x000b8644) list_medium_line_t3_right_iconx2_t

0x1439,	// (0x000a9d55) list_medium_line_x3_t4_g4_g1_ParamLimits

0x1439,	// (0x000a9d55) list_medium_line_x3_t4_g4_g1

0x1445,	// (0x000a9d61) list_medium_line_x3_t4_g4_g2_ParamLimits

0x1445,	// (0x000a9d61) list_medium_line_x3_t4_g4_g2

0x14cf,	// (0x000a9deb) list_medium_line_x3_t4_g4_g3_ParamLimits

0x14cf,	// (0x000a9deb) list_medium_line_x3_t4_g4_g3

0x7e1d,	// (0x000b0739) list_medium_line_x3_t4_g4_g4_ParamLimits

0x7e1d,	// (0x000b0739) list_medium_line_x3_t4_g4_g4

0x0003,

0xfd2d,	// (0x000b8649) list_medium_line_x3_t4_g4_g_ParamLimits

0xfd2d,	// (0x000b8649) list_medium_line_x3_t4_g4_g

0x7e29,	// (0x000b0745) list_medium_line_x3_t4_g4_t1_ParamLimits

0x7e29,	// (0x000b0745) list_medium_line_x3_t4_g4_t1

0x7e40,	// (0x000b075c) list_medium_line_x3_t4_g4_t2_ParamLimits

0x7e40,	// (0x000b075c) list_medium_line_x3_t4_g4_t2

0x24ae,	// (0x000aadca) list_medium_line_x3_t4_g4_t3_ParamLimits

0x24ae,	// (0x000aadca) list_medium_line_x3_t4_g4_t3

0x7e5b,	// (0x000b0777) list_medium_line_x3_t4_g4_t4_ParamLimits

0x7e5b,	// (0x000b0777) list_medium_line_x3_t4_g4_t4

0x0003,

0xfd36,	// (0x000b8652) list_medium_line_x3_t4_g4_t_ParamLimits

0xfd36,	// (0x000b8652) list_medium_line_x3_t4_g4_t

0x7e78,	// (0x000b0794) list_single_dyc_row_text_pane_t1_ParamLimits

0x7e78,	// (0x000b0794) list_single_dyc_row_text_pane_t1

0x7ec1,	// (0x000b07dd) list_single_dyc_row_text_pane_t2_ParamLimits

0x7ec1,	// (0x000b07dd) list_single_dyc_row_text_pane_t2

0xa088,	// (0x000b29a4) list_single_dyc_row_text_pane_t3_ParamLimits

0xa088,	// (0x000b29a4) list_single_dyc_row_text_pane_t3

0x0005,

0xfd3f,	// (0x000b865b) list_single_dyc_row_text_pane_t_ParamLimits

0xfd3f,	// (0x000b865b) list_single_dyc_row_text_pane_t

0xa0ac,	// (0x000b29c8) list_single_dyc_row_pane_g1_ParamLimits

0xa0ac,	// (0x000b29c8) list_single_dyc_row_pane_g1

0xa0b8,	// (0x000b29d4) list_single_dyc_row_pane_g2_ParamLimits

0xa0b8,	// (0x000b29d4) list_single_dyc_row_pane_g2

0xa0c4,	// (0x000b29e0) list_single_dyc_row_pane_g3_ParamLimits

0xa0c4,	// (0x000b29e0) list_single_dyc_row_pane_g3

0xa0d0,	// (0x000b29ec) list_single_dyc_row_pane_g4_ParamLimits

0xa0d0,	// (0x000b29ec) list_single_dyc_row_pane_g4

0x0003,

0xfd4c,	// (0x000b8668) list_single_dyc_row_pane_g_ParamLimits

0xfd4c,	// (0x000b8668) list_single_dyc_row_pane_g

0xa0dc,	// (0x000b29f8) list_single_dyc_row_text_pane_ParamLimits

0xa0dc,	// (0x000b29f8) list_single_dyc_row_text_pane

0x9bb8,	// (0x000b24d4) bg_sp_fs_scroll_pane

0xe848,	// (0x000b7164) thumb_sp_fs_scroll_pane

0x651c,	// (0x000aee38) list_medium_line_g1_ParamLimits

0x651c,	// (0x000aee38) list_medium_line_g1

0x7ff6,	// (0x000b0912) list_medium_line_t1_ParamLimits

0x7ff6,	// (0x000b0912) list_medium_line_t1

0x1439,	// (0x000a9d55) list_medium_line_x2_g1_ParamLimits

0x1439,	// (0x000a9d55) list_medium_line_x2_g1

0x1445,	// (0x000a9d61) list_medium_line_x2_g2_ParamLimits

0x1445,	// (0x000a9d61) list_medium_line_x2_g2

0x0001,

0xfd55,	// (0x000b8671) list_medium_line_x2_g_ParamLimits

0xfd55,	// (0x000b8671) list_medium_line_x2_g

0xa0fb,	// (0x000b2a17) list_medium_line_x2_t1_ParamLimits

0xa0fb,	// (0x000b2a17) list_medium_line_x2_t1

0x1439,	// (0x000a9d55) list_medium_line_x3_g1_ParamLimits

0x1439,	// (0x000a9d55) list_medium_line_x3_g1

0x1445,	// (0x000a9d61) list_medium_line_x3_g2_ParamLimits

0x1445,	// (0x000a9d61) list_medium_line_x3_g2

0x0001,

0xfd55,	// (0x000b8671) list_medium_line_x3_g_ParamLimits

0xfd55,	// (0x000b8671) list_medium_line_x3_g

0xa0fb,	// (0x000b2a17) list_medium_line_x3_t1_ParamLimits

0xa0fb,	// (0x000b2a17) list_medium_line_x3_t1

0xe851,	// (0x000b716d) thumb_sp_fs_scroll_pane_g1

0xe85a,	// (0x000b7176) thumb_sp_fs_scroll_pane_g2

0xe863,	// (0x000b717f) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfd5a,	// (0x000b8676) thumb_sp_fs_scroll_pane_g

0xe851,	// (0x000b716d) bg_sp_fs_scroll_pane_g1

0xe85a,	// (0x000b7176) bg_sp_fs_scroll_pane_g2

0xe863,	// (0x000b717f) bg_sp_fs_scroll_pane_g3

0x0002,

0xfd5a,	// (0x000b8676) bg_sp_fs_scroll_pane_g

0x1439,	// (0x000a9d55) list_medium_line_x2_t3_g4_g1_ParamLimits

0x1439,	// (0x000a9d55) list_medium_line_x2_t3_g4_g1

0x14c3,	// (0x000a9ddf) list_medium_line_x2_t3_g4_g2_ParamLimits

0x14c3,	// (0x000a9ddf) list_medium_line_x2_t3_g4_g2

0x1445,	// (0x000a9d61) list_medium_line_x2_t3_g4_g3_ParamLimits

0x1445,	// (0x000a9d61) list_medium_line_x2_t3_g4_g3

0x1451,	// (0x000a9d6d) list_medium_line_x2_t3_g4_g4_ParamLimits

0x1451,	// (0x000a9d6d) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2c2,	// (0x000b7bde) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2c2,	// (0x000b7bde) list_medium_line_x2_t3_g4_g

0x800b,	// (0x000b0927) list_medium_line_x2_t3_g4_t1_ParamLimits

0x800b,	// (0x000b0927) list_medium_line_x2_t3_g4_t1

0x8025,	// (0x000b0941) list_medium_line_x2_t3_g4_t2_ParamLimits

0x8025,	// (0x000b0941) list_medium_line_x2_t3_g4_t2

0x1486,	// (0x000a9da2) list_medium_line_x2_t3_g4_t3_ParamLimits

0x1486,	// (0x000a9da2) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd61,	// (0x000b867d) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd61,	// (0x000b867d) list_medium_line_x2_t3_g4_t

0x651c,	// (0x000aee38) list_medium_line_g2_g1_ParamLimits

0x651c,	// (0x000aee38) list_medium_line_g2_g1

0x6528,	// (0x000aee44) list_medium_line_g2_g2_ParamLimits

0x6528,	// (0x000aee44) list_medium_line_g2_g2

0x0001,

0xfa13,	// (0x000b832f) list_medium_line_g2_g_ParamLimits

0xfa13,	// (0x000b832f) list_medium_line_g2_g

0x803f,	// (0x000b095b) list_medium_line_g2_t1_ParamLimits

0x803f,	// (0x000b095b) list_medium_line_g2_t1

0x651c,	// (0x000aee38) list_medium_line_t3_g2_g1_ParamLimits

0x651c,	// (0x000aee38) list_medium_line_t3_g2_g1

0x6528,	// (0x000aee44) list_medium_line_t3_g2_g2_ParamLimits

0x6528,	// (0x000aee44) list_medium_line_t3_g2_g2

0x0001,

0xfa13,	// (0x000b832f) list_medium_line_t3_g2_g_ParamLimits

0xfa13,	// (0x000b832f) list_medium_line_t3_g2_g

0x8054,	// (0x000b0970) list_medium_line_t3_g2_t1_ParamLimits

0x8054,	// (0x000b0970) list_medium_line_t3_g2_t1

0x806e,	// (0x000b098a) list_medium_line_t3_g2_t2_ParamLimits

0x806e,	// (0x000b098a) list_medium_line_t3_g2_t2

0x8084,	// (0x000b09a0) list_medium_line_t3_g2_t3_ParamLimits

0x8084,	// (0x000b09a0) list_medium_line_t3_g2_t3

0x0002,

0xfd68,	// (0x000b8684) list_medium_line_t3_g2_t_ParamLimits

0xfd68,	// (0x000b8684) list_medium_line_t3_g2_t

0x7c2a,	// (0x000b0546) list_medium_line_right_icon_g1

0x809e,	// (0x000b09ba) list_medium_line_right_icon_t1

0x651c,	// (0x000aee38) list_medium_line_t2_g1_ParamLimits

0x651c,	// (0x000aee38) list_medium_line_t2_g1

0x80ac,	// (0x000b09c8) list_medium_line_t2_t1_ParamLimits

0x80ac,	// (0x000b09c8) list_medium_line_t2_t1

0x80c6,	// (0x000b09e2) list_medium_line_t2_t2_ParamLimits

0x80c6,	// (0x000b09e2) list_medium_line_t2_t2

0x0001,

0xfd6f,	// (0x000b868b) list_medium_line_t2_t_ParamLimits

0xfd6f,	// (0x000b868b) list_medium_line_t2_t

0x651c,	// (0x000aee38) list_medium_line_t3_g1_ParamLimits

0x651c,	// (0x000aee38) list_medium_line_t3_g1

0x80df,	// (0x000b09fb) list_medium_line_t3_t1_ParamLimits

0x80df,	// (0x000b09fb) list_medium_line_t3_t1

0x80f9,	// (0x000b0a15) list_medium_line_t3_t2_ParamLimits

0x80f9,	// (0x000b0a15) list_medium_line_t3_t2

0x810f,	// (0x000b0a2b) list_medium_line_t3_t3_ParamLimits

0x810f,	// (0x000b0a2b) list_medium_line_t3_t3

0x0002,

0xfd74,	// (0x000b8690) list_medium_line_t3_t_ParamLimits

0xfd74,	// (0x000b8690) list_medium_line_t3_t

0x651c,	// (0x000aee38) list_medium_line_g3_g1_ParamLimits

0x651c,	// (0x000aee38) list_medium_line_g3_g1

0x8124,	// (0x000b0a40) list_medium_line_g3_g2_ParamLimits

0x8124,	// (0x000b0a40) list_medium_line_g3_g2

0x6528,	// (0x000aee44) list_medium_line_g3_g3_ParamLimits

0x6528,	// (0x000aee44) list_medium_line_g3_g3

0x0002,

0xfd7b,	// (0x000b8697) list_medium_line_g3_g_ParamLimits

0xfd7b,	// (0x000b8697) list_medium_line_g3_g

0x8130,	// (0x000b0a4c) list_medium_line_g3_t1_ParamLimits

0x8130,	// (0x000b0a4c) list_medium_line_g3_t1

0x651c,	// (0x000aee38) list_medium_line_t2_g3_g1_ParamLimits

0x651c,	// (0x000aee38) list_medium_line_t2_g3_g1

0x8124,	// (0x000b0a40) list_medium_line_t2_g3_g2_ParamLimits

0x8124,	// (0x000b0a40) list_medium_line_t2_g3_g2

0x6528,	// (0x000aee44) list_medium_line_t2_g3_g3_ParamLimits

0x6528,	// (0x000aee44) list_medium_line_t2_g3_g3

0x0002,

0xfd7b,	// (0x000b8697) list_medium_line_t2_g3_g_ParamLimits

0xfd7b,	// (0x000b8697) list_medium_line_t2_g3_g

0x8145,	// (0x000b0a61) list_medium_line_t2_g3_t1_ParamLimits

0x8145,	// (0x000b0a61) list_medium_line_t2_g3_t1

0x815f,	// (0x000b0a7b) list_medium_line_t2_g3_t2_ParamLimits

0x815f,	// (0x000b0a7b) list_medium_line_t2_g3_t2

0x0001,

0xfd82,	// (0x000b869e) list_medium_line_t2_g3_t_ParamLimits

0xfd82,	// (0x000b869e) list_medium_line_t2_g3_t

0x651c,	// (0x000aee38) list_medium_line_t3_g3_g1_ParamLimits

0x651c,	// (0x000aee38) list_medium_line_t3_g3_g1

0x8124,	// (0x000b0a40) list_medium_line_t3_g3_g2_ParamLimits

0x8124,	// (0x000b0a40) list_medium_line_t3_g3_g2

0x6528,	// (0x000aee44) list_medium_line_t3_g3_g3_ParamLimits

0x6528,	// (0x000aee44) list_medium_line_t3_g3_g3

0x0002,

0xfd7b,	// (0x000b8697) list_medium_line_t3_g3_g_ParamLimits

0xfd7b,	// (0x000b8697) list_medium_line_t3_g3_g

0x817d,	// (0x000b0a99) list_medium_line_t3_g3_t1_ParamLimits

0x817d,	// (0x000b0a99) list_medium_line_t3_g3_t1

0x8196,	// (0x000b0ab2) list_medium_line_t3_g3_t2_ParamLimits

0x8196,	// (0x000b0ab2) list_medium_line_t3_g3_t2

0x81ac,	// (0x000b0ac8) list_medium_line_t3_g3_t3_ParamLimits

0x81ac,	// (0x000b0ac8) list_medium_line_t3_g3_t3

0x0002,

0xfd87,	// (0x000b86a3) list_medium_line_t3_g3_t_ParamLimits

0xfd87,	// (0x000b86a3) list_medium_line_t3_g3_t

0x7ded,	// (0x000b0709) list_medium_line_right_iconx2_g1

0x7c2a,	// (0x000b0546) list_medium_line_right_iconx2_g2

0x0001,

0xfd8e,	// (0x000b86aa) list_medium_line_right_iconx2_g

0xa111,	// (0x000b2a2d) list_medium_line_right_iconx2_t1

0x7ded,	// (0x000b0709) list_medium_line_t2_right_iconx2_g1

0x7c2a,	// (0x000b0546) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfd8e,	// (0x000b86aa) list_medium_line_t2_right_iconx2_g

0x81c6,	// (0x000b0ae2) list_medium_line_t2_right_iconx2_t1

0x81d6,	// (0x000b0af2) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfd93,	// (0x000b86af) list_medium_line_t2_right_iconx2_t

0x81e8,	// (0x000b0b04) list_medium_line_x4_t4_t1

0x81f6,	// (0x000b0b12) list_medium_line_x4_t4_t2

0x8206,	// (0x000b0b22) list_medium_line_x4_t4_t3

0x8216,	// (0x000b0b32) list_medium_line_x4_t4_t4

0x0003,

0xfd98,	// (0x000b86b4) list_medium_line_x4_t4_t

0x8269,	// (0x000b0b85) tport_appsw_pane_ParamLimits

0x8269,	// (0x000b0b85) tport_appsw_pane

0x8281,	// (0x000b0b9d) tport_contact_pane_ParamLimits

0x8281,	// (0x000b0b9d) tport_contact_pane

0x8299,	// (0x000b0bb5) tport_listscroll_pane_ParamLimits

0x8299,	// (0x000b0bb5) tport_listscroll_pane

0x82b3,	// (0x000b0bcf) cell_tport_appsw_pane_ParamLimits

0x82b3,	// (0x000b0bcf) cell_tport_appsw_pane

0xd70b,	// (0x000b6027) tport_appsw_pane_g1_ParamLimits

0xd70b,	// (0x000b6027) tport_appsw_pane_g1

0xe86c,	// (0x000b7188) tport_contact_pane_g1

0xe875,	// (0x000b7191) tport_contact_pane_t1

0xe883,	// (0x000b719f) tport_contact_pane_t2

0x0001,

0xfda1,	// (0x000b86bd) tport_contact_pane_t

0xe891,	// (0x000b71ad) list_tport_pane

0xe89a,	// (0x000b71b6) scroll_pane_cp_030

0x82fb,	// (0x000b0c17) cell_tport_appsw_pane_g1

0x830b,	// (0x000b0c27) cell_tport_appsw_pane_t1

0x8319,	// (0x000b0c35) grid_highlight_pane_cp019

0x8321,	// (0x000b0c3d) list_tport_double_graphic_pane_ParamLimits

0x8321,	// (0x000b0c3d) list_tport_double_graphic_pane

0xb2b7,	// (0x000b3bd3) list_highlight_pane_cp023_ParamLimits

0xb2b7,	// (0x000b3bd3) list_highlight_pane_cp023

0x832e,	// (0x000b0c4a) list_tport_double_graphic_pane_g1_ParamLimits

0x832e,	// (0x000b0c4a) list_tport_double_graphic_pane_g1

0x833b,	// (0x000b0c57) list_tport_double_graphic_pane_t1_ParamLimits

0x833b,	// (0x000b0c57) list_tport_double_graphic_pane_t1

0x8350,	// (0x000b0c6c) list_tport_double_graphic_pane_t2_ParamLimits

0x8350,	// (0x000b0c6c) list_tport_double_graphic_pane_t2

0x0001,

0xfdad,	// (0x000b86c9) list_tport_double_graphic_pane_t_ParamLimits

0xfdad,	// (0x000b86c9) list_tport_double_graphic_pane_t

0x9bb8,	// (0x000b24d4) main_cale_note_pane

0x5ccc,	// (0x000ae5e8) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x5ccc,	// (0x000ae5e8) cell_vitu2_function_top_wide_pane_cp01

0x778e,	// (0x000b00aa) wait_bar_pane_cp05_ParamLimits

0xb2b7,	// (0x000b3bd3) listscroll_cmail_pane

0xe8a3,	// (0x000b71bf) list_cmail_pane

0x8362,	// (0x000b0c7e) list_cmail_body_pane

0x8377,	// (0x000b0c93) list_single_cmail_header_caption_pane

0x838e,	// (0x000b0caa) list_single_cmail_header_detail_pane_ParamLimits

0x838e,	// (0x000b0caa) list_single_cmail_header_detail_pane

0xe8b3,	// (0x000b71cf) list_single_cmail_header_caption_pane_t1

0x83b8,	// (0x000b0cd4) list_single_cmail_header_detail_pane_g1_ParamLimits

0x83b8,	// (0x000b0cd4) list_single_cmail_header_detail_pane_g1

0xa11f,	// (0x000b2a3b) list_single_cmail_header_detail_pane_g2_ParamLimits

0xa11f,	// (0x000b2a3b) list_single_cmail_header_detail_pane_g2

0x0002,

0xfdb2,	// (0x000b86ce) list_single_cmail_header_detail_pane_g_ParamLimits

0xfdb2,	// (0x000b86ce) list_single_cmail_header_detail_pane_g

0xa12b,	// (0x000b2a47) list_single_cmail_header_detail_pane_t1_ParamLimits

0xa12b,	// (0x000b2a47) list_single_cmail_header_detail_pane_t1

0xa18b,	// (0x000b2aa7) list_single_cmail_header_editor_pane_bg_ParamLimits

0xa18b,	// (0x000b2aa7) list_single_cmail_header_editor_pane_bg

0xe358,	// (0x000b6c74) list_cmail_body_pane_g1

0xe8d7,	// (0x000b71f3) list_cmail_body_pane_t1

0xd72b,	// (0x000b6047) list_single_cmail_header_editor_pane_bg_g1

0xac9a,	// (0x000b35b6) list_single_cmail_header_editor_pane_bg_g1_copy1

0xd73b,	// (0x000b6057) list_single_cmail_header_editor_pane_bg_g1_copy2

0xd733,	// (0x000b604f) list_single_cmail_header_editor_pane_bg_g1_copy3

0xd967,	// (0x000b6283) list_single_cmail_header_editor_pane_bg_g1_copy4

0xd75b,	// (0x000b6077) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xd74b,	// (0x000b6067) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xd753,	// (0x000b606f) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xac7a,	// (0x000b3596) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0x83d0,	// (0x000b0cec) calenote_gesture_pane_ParamLimits

0x83d0,	// (0x000b0cec) calenote_gesture_pane

0x83f0,	// (0x000b0d0c) calenote_window_pane_ParamLimits

0x83f0,	// (0x000b0d0c) calenote_window_pane

0xe8e5,	// (0x000b7201) popup_note_window_cp01

0x840c,	// (0x000b0d28) calenote_swipe_1_pane_ParamLimits

0x840c,	// (0x000b0d28) calenote_swipe_1_pane

0x7bcc,	// (0x000b04e8) calenote_swipe_2_pane_ParamLimits

0x7bcc,	// (0x000b04e8) calenote_swipe_2_pane

0xe6c5,	// (0x000b6fe1) calenote_swipe_1_pane_g1_ParamLimits

0xe6c5,	// (0x000b6fe1) calenote_swipe_1_pane_g1

0xe6d2,	// (0x000b6fee) calenote_swipe_1_pane_g2_ParamLimits

0xe6d2,	// (0x000b6fee) calenote_swipe_1_pane_g2

0x0001,

0xfcd6,	// (0x000b85f2) calenote_swipe_1_pane_g_ParamLimits

0xfcd6,	// (0x000b85f2) calenote_swipe_1_pane_g

0xe8f7,	// (0x000b7213) calenote_swipe_1_pane_t1_ParamLimits

0xe8f7,	// (0x000b7213) calenote_swipe_1_pane_t1

0xe6c5,	// (0x000b6fe1) calenote_swipe_2_pane_g1_ParamLimits

0xe6c5,	// (0x000b6fe1) calenote_swipe_2_pane_g1

0xe916,	// (0x000b7232) calenote_swipe_2_pane_g2_ParamLimits

0xe916,	// (0x000b7232) calenote_swipe_2_pane_g2

0x0001,

0xfdbe,	// (0x000b86da) calenote_swipe_2_pane_g_ParamLimits

0xfdbe,	// (0x000b86da) calenote_swipe_2_pane_g

0xe922,	// (0x000b723e) calenote_swipe_2_pane_t1_ParamLimits

0xe922,	// (0x000b723e) calenote_swipe_2_pane_t1

0x9bb8,	// (0x000b24d4) main_mup_navstr_pane

0x4990,	// (0x000ad2ac) main_mup3_pane_t7_ParamLimits

0x4990,	// (0x000ad2ac) main_mup3_pane_t7

0x97a5,	// (0x000b20c1) main_mp4_pane_g6_ParamLimits

0x97a5,	// (0x000b20c1) main_mp4_pane_g6

0x9949,	// (0x000b2265) main_image3_pane_t4_ParamLimits

0x9949,	// (0x000b2265) main_image3_pane_t4

0x8421,	// (0x000b0d3d) popup_navstr_preview_pane_ParamLimits

0x8421,	// (0x000b0d3d) popup_navstr_preview_pane

0x8435,	// (0x000b0d51) scroll_navstr_pane_ParamLimits

0x8435,	// (0x000b0d51) scroll_navstr_pane

0x9bb8,	// (0x000b24d4) bg_popup_preview_window_pane_cp04

0xe949,	// (0x000b7265) popup_navstr_preview_pane_t1

0x8449,	// (0x000b0d65) scroll_navstr_pane_g1_ParamLimits

0x8449,	// (0x000b0d65) scroll_navstr_pane_g1

0x845d,	// (0x000b0d79) scroll_navstr_pane_t1_ParamLimits

0x845d,	// (0x000b0d79) scroll_navstr_pane_t1

0xe8ee,	// (0x000b720a) bg_button_pane_cp014

0xe8ee,	// (0x000b720a) bg_button_pane_cp030

0x7aa5,	// (0x000b03c1) list_double_fisheye_pane_g4_ParamLimits

0x7aa5,	// (0x000b03c1) list_double_fisheye_pane_g4

0x7ab1,	// (0x000b03cd) list_double_fisheye_pane_g5_ParamLimits

0x7ab1,	// (0x000b03cd) list_double_fisheye_pane_g5

0xca20,	// (0x000b533c) sp_fs_scroll_pane_cp03

0xe7e5,	// (0x000b7101) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xe7f1,	// (0x000b710d) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfcf3,	// (0x000b860f) main_sp_fs_ctrlbar_pane_g_ParamLimits

0xe7fd,	// (0x000b7119) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xe8ab,	// (0x000b71c7) sp_fs_scroll_pane_cp02

0xa962,	// (0x000b327e) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0xa962,	// (0x000b327e) popup_sp_fs_calendar_preview_list_single_pane

0x9bb8,	// (0x000b24d4) main_cam6_pano_pane

0x9446,	// (0x000b1d62) main_mup3_pane_ParamLimits

0x9bb8,	// (0x000b24d4) main_phacti_pane

0x7661,	// (0x000aff7d) bg_button_pane_cp11

0x767b,	// (0x000aff97) main_mobtv_info_pane_g2_ParamLimits

0x767b,	// (0x000aff97) main_mobtv_info_pane_g2

0x0001,

0xfc53,	// (0x000b856f) main_mobtv_info_pane_g_ParamLimits

0xfc53,	// (0x000b856f) main_mobtv_info_pane_g

0x7858,	// (0x000b0174) sc_clock_pane_t5_ParamLimits

0x7858,	// (0x000b0174) sc_clock_pane_t5

0x7920,	// (0x000b023c) main_radioblah_pane_g1_ParamLimits

0xe5f6,	// (0x000b6f12) main_radioblah_pane_t3_ParamLimits

0xe5f6,	// (0x000b6f12) main_radioblah_pane_t3

0xe60e,	// (0x000b6f2a) main_radioblah_pane_t4_ParamLimits

0xe60e,	// (0x000b6f2a) main_radioblah_pane_t4

0x7948,	// (0x000b0264) main_radioblah_text_pane_ParamLimits

0x7948,	// (0x000b0264) main_radioblah_text_pane

0x795a,	// (0x000b0276) main_radioblah_info_pane_g1_ParamLimits

0x79f3,	// (0x000b030f) main_radioblah_info_pane_t4_ParamLimits

0x79f3,	// (0x000b030f) main_radioblah_info_pane_t4

0xb2b7,	// (0x000b3bd3) main_sp_fs_calendar_pane

0x8474,	// (0x000b0d90) main_phacti_pane_g1

0x847c,	// (0x000b0d98) phacti_note_pane_ParamLimits

0x847c,	// (0x000b0d98) phacti_note_pane

0xe960,	// (0x000b727c) phacti_term_pane_ParamLimits

0xe960,	// (0x000b727c) phacti_term_pane

0xe975,	// (0x000b7291) phacti_note_pane_t1_ParamLimits

0xe975,	// (0x000b7291) phacti_note_pane_t1

0xa1a2,	// (0x000b2abe) phacti_term_pane_g1

0xa1aa,	// (0x000b2ac6) phacti_term_pane_t1_ParamLimits

0xa1aa,	// (0x000b2ac6) phacti_term_pane_t1

0xe98c,	// (0x000b72a8) popup_sp_fs_calendar_preview_list_single_pane_g1

0xe994,	// (0x000b72b0) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfdc8,	// (0x000b86e4) popup_sp_fs_calendar_preview_list_single_pane_g

0xe99c,	// (0x000b72b8) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xe99c,	// (0x000b72b8) popup_sp_fs_calendar_preview_list_single_pane_t1

0xe9b2,	// (0x000b72ce) aid_popup_sp_fs_bg_corner_pane

0xcd01,	// (0x000b561d) popup_sp_fs_calendar_preview_bg_pane_g1

0x9bb8,	// (0x000b24d4) popup_sp_fs_calendar_preview_bg_pane

0x12c2,	// (0x000a9bde) popup_sp_fs_calendar_preview_list_pane

0xc8ed,	// (0x000b5209) bg_main_sp_fs_cale_pane_ParamLimits

0xc8ed,	// (0x000b5209) bg_main_sp_fs_cale_pane

0xa1dd,	// (0x000b2af9) listscroll_cale_mrui_pane_ParamLimits

0xa1dd,	// (0x000b2af9) listscroll_cale_mrui_pane

0xa1f2,	// (0x000b2b0e) listscroll_sp_fs_schedule_track_pane

0xa1fb,	// (0x000b2b17) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0xa1fb,	// (0x000b2b17) main_sp_fs_ctrlbar_pane_cp01

0xe9ba,	// (0x000b72d6) main_sp_fs_ribbon_pane

0xa20e,	// (0x000b2b2a) popup_sp_fs_cale_preview_window

0x84f1,	// (0x000b0e0d) list_single_sp_fs_schedule_track_pane_ParamLimits

0x84f1,	// (0x000b0e0d) list_single_sp_fs_schedule_track_pane

0xb2b7,	// (0x000b3bd3) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0xb2b7,	// (0x000b3bd3) bg_sp_fs_highlight_list_pane_cp03

0x8505,	// (0x000b0e21) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0x8505,	// (0x000b0e21) list_single_sp_fs_schedule_track_pane_g1

0x8511,	// (0x000b0e2d) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0x8511,	// (0x000b0e2d) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfdcd,	// (0x000b86e9) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfdcd,	// (0x000b86e9) list_single_sp_fs_schedule_track_pane_g

0x851d,	// (0x000b0e39) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0x851d,	// (0x000b0e39) list_single_sp_fs_schedule_track_pane_t1

0x8537,	// (0x000b0e53) sp_fs_schedule_track_pane_ParamLimits

0x8537,	// (0x000b0e53) sp_fs_schedule_track_pane

0xe9c2,	// (0x000b72de) sp_fs_schedule_track_pane_g1

0xe9ca,	// (0x000b72e6) sp_fs_schedule_track_pane_g2

0xe9d2,	// (0x000b72ee) sp_fs_schedule_track_pane_g3

0xe9da,	// (0x000b72f6) sp_fs_schedule_track_pane_g4

0xe9e2,	// (0x000b72fe) sp_fs_schedule_track_pane_g5

0x0004,

0xfdd2,	// (0x000b86ee) sp_fs_schedule_track_pane_g

0xd72b,	// (0x000b6047) bg_sp_fs_schedule_viewer_highlight_g1

0xac9a,	// (0x000b35b6) bg_sp_fs_schedule_viewer_highlight_g2

0xd733,	// (0x000b604f) bg_sp_fs_schedule_viewer_highlight_g3

0xd73b,	// (0x000b6057) bg_sp_fs_schedule_viewer_highlight_g4

0xd967,	// (0x000b6283) bg_sp_fs_schedule_viewer_highlight_g5

0xd74b,	// (0x000b6067) bg_sp_fs_schedule_viewer_highlight_g6

0xd753,	// (0x000b606f) bg_sp_fs_schedule_viewer_highlight_g7

0xd75b,	// (0x000b6077) bg_sp_fs_schedule_viewer_highlight_g8

0xac7a,	// (0x000b3596) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfddd,	// (0x000b86f9) bg_sp_fs_schedule_viewer_highlight_g

0x9bb8,	// (0x000b24d4) bg_main_sp_fs_ribbon_pane

0x8548,	// (0x000b0e64) main_sp_fs_ribbon_pane_g1

0xe9ea,	// (0x000b7306) main_sp_fs_ribbon_pane_t1

0x8551,	// (0x000b0e6d) main_sp_fs_ribbon_pane_t2

0xe9f9,	// (0x000b7315) main_sp_fs_ribbon_pane_t3

0x0002,

0xfdf0,	// (0x000b870c) main_sp_fs_ribbon_pane_t

0xea08,	// (0x000b7324) main_sp_fs_ribbon_scheduler_pane

0xea10,	// (0x000b732c) bg_main_sp_fs_ribbon_pane_g1

0xea19,	// (0x000b7335) bg_main_sp_fs_ribbon_pane_g2

0xea22,	// (0x000b733e) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfdf7,	// (0x000b8713) bg_main_sp_fs_ribbon_pane_g

0xea2a,	// (0x000b7346) main_sp_fs_ribbon_scheduler_pane_g1

0xea33,	// (0x000b734f) main_sp_fs_ribbon_scheduler_pane_g2

0xea3c,	// (0x000b7358) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfdfe,	// (0x000b871a) main_sp_fs_ribbon_scheduler_pane_g

0xea45,	// (0x000b7361) list_cale_mrui_pane

0x8560,	// (0x000b0e7c) sp_fs_scroll_pane_cp07_ParamLimits

0x8560,	// (0x000b0e7c) sp_fs_scroll_pane_cp07

0x857c,	// (0x000b0e98) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0x857c,	// (0x000b0e98) bg_sp_fs_schedule_viewer_highlight

0xea52,	// (0x000b736e) list_single_sp_fs_schedule_track_pane_cp01

0xea5a,	// (0x000b7376) list_sp_fs_schedule_track_pane

0xea62,	// (0x000b737e) sp_fs_scroll_pane_cp06_ParamLimits

0xea62,	// (0x000b737e) sp_fs_scroll_pane_cp06

0xcd01,	// (0x000b561d) bgmain_sp_fs_calendar_pane_g1

0x858c,	// (0x000b0ea8) list_single_cale_mrui_pane_ParamLimits

0x858c,	// (0x000b0ea8) list_single_cale_mrui_pane

0xa220,	// (0x000b2b3c) list_single_cale_mrui_row_pane_ParamLimits

0xa220,	// (0x000b2b3c) list_single_cale_mrui_row_pane

0xa22d,	// (0x000b2b49) list_single_cale_mrui_row_pane_g1_ParamLimits

0xa22d,	// (0x000b2b49) list_single_cale_mrui_row_pane_g1

0xa265,	// (0x000b2b81) list_single_cale_mrui_row_pane_t1_ParamLimits

0xa265,	// (0x000b2b81) list_single_cale_mrui_row_pane_t1

0x85ad,	// (0x000b0ec9) list_single_cale_mrui_row_pane_t2_ParamLimits

0x85ad,	// (0x000b0ec9) list_single_cale_mrui_row_pane_t2

0xa277,	// (0x000b2b93) list_single_cale_mrui_row_pane_t3_ParamLimits

0xa277,	// (0x000b2b93) list_single_cale_mrui_row_pane_t3

0xa2a6,	// (0x000b2bc2) list_single_cale_mrui_row_pane_t4_ParamLimits

0xa2a6,	// (0x000b2bc2) list_single_cale_mrui_row_pane_t4

0x0003,

0xfe0c,	// (0x000b8728) list_single_cale_mrui_row_pane_t_ParamLimits

0xfe0c,	// (0x000b8728) list_single_cale_mrui_row_pane_t

0x8615,	// (0x000b0f31) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x8615,	// (0x000b0f31) list_single_cmail_header_editor_pane_bg_cp01

0x863b,	// (0x000b0f57) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x863b,	// (0x000b0f57) list_single_cmail_header_editor_pane_bg_cp02

0x865b,	// (0x000b0f77) main_radioblah_text_pane_t1_ParamLimits

0x865b,	// (0x000b0f77) main_radioblah_text_pane_t1

0xea81,	// (0x000b739d) cam6_indi_pane_cp01

0xea89,	// (0x000b73a5) cam6_mode_pane_cp01

0xea91,	// (0x000b73ad) cam6_pano_pane

0xea9a,	// (0x000b73b6) cam6_zoom_pane_cp01

0xeaa2,	// (0x000b73be) cam6_pano_image_pane

0xeaad,	// (0x000b73c9) cam6_pano_pane_g1

0xe358,	// (0x000b6c74) cam6_pano_pane_g2

0xeab6,	// (0x000b73d2) cam6_pano_pane_g3

0xeabf,	// (0x000b73db) cam6_pano_pane_g4

0xd2ac,	// (0x000b5bc8) cam6_pano_pane_g5

0xeac8,	// (0x000b73e4) cam6_pano_pane_g6

0xead2,	// (0x000b73ee) cam6_pano_pane_g7

0xeada,	// (0x000b73f6) cam6_pano_pane_g8

0xeae3,	// (0x000b73ff) cam6_pano_pane_g9

0x0008,

0x0221,	// (0x000a8b3d) cam6_pano_pane_g

0x9bb8,	// (0x000b24d4) main_browser_tag_pane

0xe941,	// (0x000b725d) grid_navstr_albumart_pane

0xeaee,	// (0x000b740a) cell_navstr_albumart_pane_ParamLimits

0xeaee,	// (0x000b740a) cell_navstr_albumart_pane

0xeb0e,	// (0x000b742a) cell_navstr_albumart_pane_g1

0xc6be,	// (0x000b4fda) cell_navstr_albumart_pane_g2

0xc6ce,	// (0x000b4fea) cell_navstr_albumart_pane_g3

0xc6c6,	// (0x000b4fe2) cell_navstr_albumart_pane_g4

0x0003,

0x0234,	// (0x000a8b50) cell_navstr_albumart_pane_g

0x8676,	// (0x000b0f92) bt_list_pane_ParamLimits

0x8676,	// (0x000b0f92) bt_list_pane

0x868a,	// (0x000b0fa6) bt_list_pane_t1

0x8699,	// (0x000b0fb5) bt_list_pane_t2

0x0001,

0xfe15,	// (0x000b8731) bt_list_pane_t

0x9bb8,	// (0x000b24d4) main_cale_prevew_pane

0x86a8,	// (0x000b0fc4) popup_cale_preview_window_ParamLimits

0x86a8,	// (0x000b0fc4) popup_cale_preview_window

0xb2b7,	// (0x000b3bd3) bg_popup_preview_window_pane_cp05_ParamLimits

0xb2b7,	// (0x000b3bd3) bg_popup_preview_window_pane_cp05

0xeb16,	// (0x000b7432) list_cale_preview_pane_ParamLimits

0xeb16,	// (0x000b7432) list_cale_preview_pane

0x86c1,	// (0x000b0fdd) list_double_cale_preview_pane_ParamLimits

0x86c1,	// (0x000b0fdd) list_double_cale_preview_pane

0xd763,	// (0x000b607f) list_single_cale_preview_pane_ParamLimits

0xd763,	// (0x000b607f) list_single_cale_preview_pane

0x86d3,	// (0x000b0fef) list_single_cale_preview_pane_g1

0x86db,	// (0x000b0ff7) list_single_cale_preview_pane_t1_ParamLimits

0x86db,	// (0x000b0ff7) list_single_cale_preview_pane_t1

0x86f0,	// (0x000b100c) list_double_cale_preview_pane_g1

0x86f8,	// (0x000b1014) list_double_cale_preview_pane_t1_ParamLimits

0x86f8,	// (0x000b1014) list_double_cale_preview_pane_t1

0x870d,	// (0x000b1029) list_double_cale_preview_pane_t2_ParamLimits

0x870d,	// (0x000b1029) list_double_cale_preview_pane_t2

0x0001,

0xfe1a,	// (0x000b8736) list_double_cale_preview_pane_t_ParamLimits

0xfe1a,	// (0x000b8736) list_double_cale_preview_pane_t

0x9bb8,	// (0x000b24d4) main_ezdial_pane

0xb2b7,	// (0x000b3bd3) main_sp_fs_email_pane_ParamLimits

0x7c54,	// (0x000b0570) cmail_ddmenu_btn01_pane_ParamLimits

0x7c54,	// (0x000b0570) cmail_ddmenu_btn01_pane

0x7c67,	// (0x000b0583) cmail_ddmenu_btn02_pane_ParamLimits

0x7c67,	// (0x000b0583) cmail_ddmenu_btn02_pane

0x7c8a,	// (0x000b05a6) cmail_ddmenu_btn03_pane_ParamLimits

0x7c8a,	// (0x000b05a6) cmail_ddmenu_btn03_pane

0x7cb0,	// (0x000b05cc) main_sp_fs_ctrlbar_pane_ParamLimits

0x7cd4,	// (0x000b05f0) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0x8362,	// (0x000b0c7e) list_cmail_body_pane_ParamLimits

0xe8c1,	// (0x000b71dd) bg_button_pane_cp12

0xe8ca,	// (0x000b71e6) list_single_cmail_header_detail_pane_g3_ParamLimits

0xe8ca,	// (0x000b71e6) list_single_cmail_header_detail_pane_g3

0xa167,	// (0x000b2a83) list_single_cmail_header_detail_pane_t2_ParamLimits

0xa167,	// (0x000b2a83) list_single_cmail_header_detail_pane_t2

0x0001,

0xfdb9,	// (0x000b86d5) list_single_cmail_header_detail_pane_t_ParamLimits

0xfdb9,	// (0x000b86d5) list_single_cmail_header_detail_pane_t

0xa1bf,	// (0x000b2adb) phacti_term_pane_t2_ParamLimits

0xa1bf,	// (0x000b2adb) phacti_term_pane_t2

0x0001,

0xfdc3,	// (0x000b86df) phacti_term_pane_t_ParamLimits

0xfdc3,	// (0x000b86df) phacti_term_pane_t

0xeb22,	// (0x000b743e) aid_size_list_single_double

0x8725,	// (0x000b1041) popup_ezdial_listscroll_window

0x8741,	// (0x000b105d) popup_number_entry_window_cp01

0xaa23,	// (0x000b333f) bg_popup_call_pane_cp09

0xeb2e,	// (0x000b744a) ezdial_list_pane

0xeb36,	// (0x000b7452) scroll_pane_cp23

0xc8ed,	// (0x000b5209) bg_button_pane_cp028_ParamLimits

0xc8ed,	// (0x000b5209) bg_button_pane_cp028

0x874f,	// (0x000b106b) cmail_ddmenu_btn01_pane_g1_ParamLimits

0x874f,	// (0x000b106b) cmail_ddmenu_btn01_pane_g1

0x875b,	// (0x000b1077) cmail_ddmenu_btn01_pane_g2_ParamLimits

0x875b,	// (0x000b1077) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfe1f,	// (0x000b873b) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfe1f,	// (0x000b873b) cmail_ddmenu_btn01_pane_g

0xeb3e,	// (0x000b745a) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xeb3e,	// (0x000b745a) cmail_ddmenu_btn01_pane_t1

0xc8ed,	// (0x000b5209) bg_button_pane_cp029_ParamLimits

0xc8ed,	// (0x000b5209) bg_button_pane_cp029

0x8767,	// (0x000b1083) cmail_ddmenu_btn02_pane_g1_ParamLimits

0x8767,	// (0x000b1083) cmail_ddmenu_btn02_pane_g1

0x8780,	// (0x000b109c) cmail_ddmenu_btn02_pane_t1_ParamLimits

0x8780,	// (0x000b109c) cmail_ddmenu_btn02_pane_t1

0xb2b7,	// (0x000b3bd3) bg_button_pane_cp031_ParamLimits

0xb2b7,	// (0x000b3bd3) bg_button_pane_cp031

0x8767,	// (0x000b1083) cmail_ddmenu_btn03_pane_g1_ParamLimits

0x8767,	// (0x000b1083) cmail_ddmenu_btn03_pane_g1

0x8780,	// (0x000b109c) cmail_ddmenu_btn03_pane_t1_ParamLimits

0x8780,	// (0x000b109c) cmail_ddmenu_btn03_pane_t1

0x5541,	// (0x000ade5d) cell_dialer2_keypad_pane_t1_ParamLimits

0x555b,	// (0x000ade77) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x555b,	// (0x000ade77) cell_dialer2_keypad_pane_t1_copy1

0x7476,	// (0x000afd92) ncimui_group_button_pane

0xb2b7,	// (0x000b3bd3) main_sp_fs_calendar_pane_ParamLimits

0x8377,	// (0x000b0c93) list_single_cmail_header_caption_pane_ParamLimits

0xa1d4,	// (0x000b2af0) aid_recal_txt_sm_pane

0x9bb8,	// (0x000b24d4) mian_recal_day_pane

0xa20e,	// (0x000b2b2a) popup_sp_fs_cale_preview_window_ParamLimits

0xeb53,	// (0x000b746f) list_recal_day_pane

0xa2f0,	// (0x000b2c0c) list_single_recal_day_pane_ParamLimits

0xa2f0,	// (0x000b2c0c) list_single_recal_day_pane

0xeb7a,	// (0x000b7496) list_single_recal_day_pane_g1_ParamLimits

0xeb7a,	// (0x000b7496) list_single_recal_day_pane_g1

0xa302,	// (0x000b2c1e) list_single_recal_day_pane_g2_ParamLimits

0xa302,	// (0x000b2c1e) list_single_recal_day_pane_g2

0xa30e,	// (0x000b2c2a) list_single_recal_day_pane_g3_ParamLimits

0xa30e,	// (0x000b2c2a) list_single_recal_day_pane_g3

0x87a4,	// (0x000b10c0) list_single_recal_day_pane_g4_ParamLimits

0x87a4,	// (0x000b10c0) list_single_recal_day_pane_g4

0xa31a,	// (0x000b2c36) list_single_recal_day_pane_g5_ParamLimits

0xa31a,	// (0x000b2c36) list_single_recal_day_pane_g5

0xa326,	// (0x000b2c42) list_single_recal_day_pane_g6_ParamLimits

0xa326,	// (0x000b2c42) list_single_recal_day_pane_g6

0x0004,

0xfe2e,	// (0x000b874a) list_single_recal_day_pane_g_ParamLimits

0xfe2e,	// (0x000b874a) list_single_recal_day_pane_g

0xa33a,	// (0x000b2c56) list_single_recal_day_pane_t1

0xa34c,	// (0x000b2c68) list_single_recal_day_pane_t2

0x0001,

0xfe39,	// (0x000b8755) list_single_recal_day_pane_t

0x87bc,	// (0x000b10d8) ncimui_query_button_pane_ParamLimits

0x87bc,	// (0x000b10d8) ncimui_query_button_pane

0x87cc,	// (0x000b10e8) ncimui_query_button_pane_t1_ParamLimits

0x87cc,	// (0x000b10e8) ncimui_query_button_pane_t1

0xeb86,	// (0x000b74a2) ncimui_query_button_pane_t2_ParamLimits

0xeb86,	// (0x000b74a2) ncimui_query_button_pane_t2

0x0001,

0xfe3e,	// (0x000b875a) ncimui_query_button_pane_t_ParamLimits

0xfe3e,	// (0x000b875a) ncimui_query_button_pane_t

0x87df,	// (0x000b10fb) query_button_pane_ParamLimits

0x87df,	// (0x000b10fb) query_button_pane

0x9bb8,	// (0x000b24d4) bg_button_pane_cp0028

0xeb99,	// (0x000b74b5) query_button_pane_t1

0x35d5,	// (0x000abef1) main_tport_pane_ParamLimits

0x8226,	// (0x000b0b42) bg_popup_window_pane_cp01_ParamLimits

0x8226,	// (0x000b0b42) bg_popup_window_pane_cp01

0x8241,	// (0x000b0b5d) heading_pane_cp08_ParamLimits

0x8241,	// (0x000b0b5d) heading_pane_cp08

0x8254,	// (0x000b0b70) heading_pane_cp07_ParamLimits

0x8254,	// (0x000b0b70) heading_pane_cp07

0x82fb,	// (0x000b0c17) cell_tport_appsw_pane_g2

0x0002,

0xfda6,	// (0x000b86c2) cell_tport_appsw_pane_g

0x9e38,	// (0x000b2754) input_candi_list_open_g1

0xae5d,	// (0x000b3779) list_cale_time_pane_g6_ParamLimits

0xae5d,	// (0x000b3779) list_cale_time_pane_g6

0x439d,	// (0x000accb9) aid_size_touch_calib_1_ParamLimits

0x439d,	// (0x000accb9) aid_size_touch_calib_1

0x43af,	// (0x000acccb) aid_size_touch_calib_2_ParamLimits

0x43af,	// (0x000acccb) aid_size_touch_calib_2

0x43c7,	// (0x000acce3) aid_size_touch_calib_3_ParamLimits

0x43c7,	// (0x000acce3) aid_size_touch_calib_3

0x43e5,	// (0x000acd01) aid_size_touch_calib_4_ParamLimits

0x43e5,	// (0x000acd01) aid_size_touch_calib_4

0x43fd,	// (0x000acd19) main_touch_calib_button_group_pane_ParamLimits

0x43fd,	// (0x000acd19) main_touch_calib_button_group_pane

0x4415,	// (0x000acd31) main_touch_calib_pane_g1_ParamLimits

0x4427,	// (0x000acd43) main_touch_calib_pane_g2_ParamLimits

0x4439,	// (0x000acd55) main_touch_calib_pane_g3_ParamLimits

0x444b,	// (0x000acd67) main_touch_calib_pane_g4_ParamLimits

0xf764,	// (0x000b8080) main_touch_calib_pane_g_ParamLimits

0x445d,	// (0x000acd79) main_touch_calib_pane_t1_ParamLimits

0x4477,	// (0x000acd93) main_touch_calib_pane_t2_ParamLimits

0x4491,	// (0x000acdad) main_touch_calib_pane_t3_ParamLimits

0x44a5,	// (0x000acdc1) main_touch_calib_pane_t4_ParamLimits

0x44b9,	// (0x000acdd5) main_touch_calib_pane_t5_ParamLimits

0xf76d,	// (0x000b8089) main_touch_calib_pane_t_ParamLimits

0xd04f,	// (0x000b596b) list_single_fp_cale_pane_g3_ParamLimits

0xd04f,	// (0x000b596b) list_single_fp_cale_pane_g3

0x9446,	// (0x000b1d62) bg_button_pane_cp012_ParamLimits

0x9446,	// (0x000b1d62) bg_vkb2_func_pane_cp03_ParamLimits

0x64d2,	// (0x000aedee) cell_vitu2_function_top_pane_g1_ParamLimits

0x9446,	// (0x000b1d62) bg_vkb2_func_pane_cp04_ParamLimits

0x7401,	// (0x000afd1d) main_ncimui_button_group_pane_ParamLimits

0x7401,	// (0x000afd1d) main_ncimui_button_group_pane

0x7461,	// (0x000afd7d) main_ncimui_pane_t3_ParamLimits

0x7461,	// (0x000afd7d) main_ncimui_pane_t3

0xe957,	// (0x000b7273) phacti_button_group_pane

0xeb22,	// (0x000b743e) aid_size_list_single_double_ParamLimits

0x8725,	// (0x000b1041) popup_ezdial_listscroll_window_ParamLimits

0x8741,	// (0x000b105d) popup_number_entry_window_cp01_ParamLimits

0x87f2,	// (0x000b110e) phacti_button_pane_ParamLimits

0x87f2,	// (0x000b110e) phacti_button_pane

0x9bb8,	// (0x000b24d4) bg_button_pane_cp14

0xeba7,	// (0x000b74c3) phacti_button_pane_t1

0x8803,	// (0x000b111f) main_touch_calib_button_pane_ParamLimits

0x8803,	// (0x000b111f) main_touch_calib_button_pane

0xa84c,	// (0x000b3168) bg_button_pane_cp18_ParamLimits

0xa84c,	// (0x000b3168) bg_button_pane_cp18

0xebb5,	// (0x000b74d1) main_touch_calib_button_pane_t1_ParamLimits

0xebb5,	// (0x000b74d1) main_touch_calib_button_pane_t1

0xebcb,	// (0x000b74e7) main_touch_calib_button_pane_t2_ParamLimits

0xebcb,	// (0x000b74e7) main_touch_calib_button_pane_t2

0x0001,

0x026b,	// (0x000a8b87) main_touch_calib_button_pane_t_ParamLimits

0x026b,	// (0x000a8b87) main_touch_calib_button_pane_t

0x9bb8,	// (0x000b24d4) cell_ncimui_button_pane

0x9bb8,	// (0x000b24d4) bg_button_pane_cp032

0xebe9,	// (0x000b7505) cell_ncimui_button_pane_t1

0x9929,	// (0x000b2245) image3_infobar_pane_ParamLimits

0x9929,	// (0x000b2245) image3_infobar_pane

0x7884,	// (0x000b01a0) fs_bigclock_status_pane_ParamLimits

0x7884,	// (0x000b01a0) fs_bigclock_status_pane

0x7891,	// (0x000b01ad) main_fs_bigclock_clock_pane_ParamLimits

0x7891,	// (0x000b01ad) main_fs_bigclock_clock_pane

0x78af,	// (0x000b01cb) main_fs_bigclock_indi_pane_ParamLimits

0x78af,	// (0x000b01cb) main_fs_bigclock_indi_pane

0x78e1,	// (0x000b01fd) main_fs_bigclock_swipe_pane_ParamLimits

0x78e1,	// (0x000b01fd) main_fs_bigclock_swipe_pane

0x9bb8,	// (0x000b24d4) main_fs_clock_dumped_data

0xe465,	// (0x000b6d81) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xe465,	// (0x000b6d81) list_single_fs_bigclock_indicator_pane_g1

0xe481,	// (0x000b6d9d) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xe481,	// (0x000b6d9d) list_single_fs_bigclock_indicator_pane_g2

0xe49b,	// (0x000b6db7) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xe49b,	// (0x000b6db7) list_single_fs_bigclock_indicator_pane_g3

0xe4b5,	// (0x000b6dd1) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xe4b5,	// (0x000b6dd1) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfc87,	// (0x000b85a3) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfc87,	// (0x000b85a3) list_single_fs_bigclock_indicator_pane_g

0xe4e0,	// (0x000b6dfc) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xe4e0,	// (0x000b6dfc) list_single_fs_bigclock_indicator_pane_t1

0xe508,	// (0x000b6e24) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xe508,	// (0x000b6e24) list_single_fs_bigclock_indicator_pane_t2

0xe530,	// (0x000b6e4c) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xe530,	// (0x000b6e4c) list_single_fs_bigclock_indicator_pane_t3

0xe558,	// (0x000b6e74) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xe558,	// (0x000b6e74) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfc92,	// (0x000b85ae) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfc92,	// (0x000b85ae) list_single_fs_bigclock_indicator_pane_t

0xebf7,	// (0x000b7513) image3_infobar_fav_pane_ParamLimits

0xebf7,	// (0x000b7513) image3_infobar_fav_pane

0xec07,	// (0x000b7523) image3_infobar_loc_pane_ParamLimits

0xec07,	// (0x000b7523) image3_infobar_loc_pane

0xec1b,	// (0x000b7537) image3_infobar_time_pane_ParamLimits

0xec1b,	// (0x000b7537) image3_infobar_time_pane

0xcd01,	// (0x000b561d) image3_infobar_time_pane_g1

0xec2b,	// (0x000b7547) image3_infobar_time_pane_t1

0xcd01,	// (0x000b561d) image3_infobar_loc_pane_g1

0xec39,	// (0x000b7555) image3_infobar_loc_pane_g2

0x0001,

0xfe43,	// (0x000b875f) image3_infobar_loc_pane_g

0xec41,	// (0x000b755d) image3_infobar_loc_pane_t1

0xcd01,	// (0x000b561d) image3_infobar_fav_pane_g1

0xec4f,	// (0x000b756b) image3_infobar_fav_pane_g2

0x0001,

0xfe48,	// (0x000b8764) image3_infobar_fav_pane_g

0xec57,	// (0x000b7573) fs_bigclock_status_battery_pane

0xec60,	// (0x000b757c) fs_bigclock_status_signal_pane

0xec69,	// (0x000b7585) fs_bigclock_status_title_pane

0xec72,	// (0x000b758e) fs_bigclock_status_signal_pane_g1

0xec7b,	// (0x000b7597) fs_bigclock_status_signal_pane_g2

0x0001,

0x0270,	// (0x000a8b8c) fs_bigclock_status_signal_pane_g

0xec83,	// (0x000b759f) fs_bigclock_status_battery_pane_g1

0xec8c,	// (0x000b75a8) fs_bigclock_status_battery_pane_g2

0x0001,

0x0275,	// (0x000a8b91) fs_bigclock_status_battery_pane_g

0xec94,	// (0x000b75b0) fs_bigclock_status_title_pane_t1

0x8818,	// (0x000b1134) main_fs_bigclock_clock_pane_g1

0x8818,	// (0x000b1134) main_fs_bigclock_clock_pane_g2

0x8829,	// (0x000b1145) main_fs_bigclock_clock_pane_g3

0x8829,	// (0x000b1145) main_fs_bigclock_clock_pane_g4

0x0003,

0xfe4d,	// (0x000b8769) main_fs_bigclock_clock_pane_g

0x883c,	// (0x000b1158) main_fs_bigclock_clock_pane_t1

0x8852,	// (0x000b116e) main_fs_bigclock_clock_pane_t2

0x0001,

0xfe56,	// (0x000b8772) main_fs_bigclock_clock_pane_t

0xeca2,	// (0x000b75be) list_single_fs_bigclock_indicator_pane_ParamLimits

0xeca2,	// (0x000b75be) list_single_fs_bigclock_indicator_pane

0xecb3,	// (0x000b75cf) list_single_fs_bigclock_pane_ParamLimits

0xecb3,	// (0x000b75cf) list_single_fs_bigclock_pane

0xecd9,	// (0x000b75f5) main_fs_bigclock_indicator_pane_t1

0xece8,	// (0x000b7604) list_single_fs_bigclock_pane_g1

0xecf0,	// (0x000b760c) list_single_fs_bigclock_pane_t1

0xcd01,	// (0x000b561d) main_fs_bigclock_swipe_pane_g1

0xed33,	// (0x000b764f) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfe62,	// (0x000b877e) main_fs_bigclock_swipe_pane_g

0xed3b,	// (0x000b7657) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xed3b,	// (0x000b7657) main_fs_bigclock_swipe_pane_t1

0x24d8,	// (0x000aadf4) call_type_pane_ParamLimits

0x9bb8,	// (0x000b24d4) main_btmg_pane

0xa259,	// (0x000b2b75) list_single_cale_mrui_row_pane_g2_ParamLimits

0xa259,	// (0x000b2b75) list_single_cale_mrui_row_pane_g2

0x0002,

0xfe05,	// (0x000b8721) list_single_cale_mrui_row_pane_g_ParamLimits

0xfe05,	// (0x000b8721) list_single_cale_mrui_row_pane_g

0xa2df,	// (0x000b2bfb) list_recal_vselct_arw_lo_pane

0xeb72,	// (0x000b748e) list_recal_vselct_arw_up_pane

0xa2e7,	// (0x000b2c03) list_recal_vselct_pane

0x88ac,	// (0x000b11c8) btmg_button_pane

0x88b6,	// (0x000b11d2) main_btmg_pane_g1

0x9bb8,	// (0x000b24d4) bg_button_pane_cp044

0xed58,	// (0x000b7674) btmg_button_pane_t1

0xc8d9,	// (0x000b51f5) aid_listscroll_gen

0xb2b7,	// (0x000b3bd3) main_cntbar_detail_pane

0xe8a3,	// (0x000b71bf) list_cmail_folder_pane

0xca20,	// (0x000b533c) sp_fs_scroll_pane_cp03_ParamLimits

0x88c0,	// (0x000b11dc) list_single_fs_dyc_pane_cp01_ParamLimits

0x88c0,	// (0x000b11dc) list_single_fs_dyc_pane_cp01

0xed66,	// (0x000b7682) aid_size_cmail_indent

0xa35e,	// (0x000b2c7a) list_single_dyc_row_pane_cp01

0x8908,	// (0x000b1224) cntbar_detail_list_pane_ParamLimits

0x8908,	// (0x000b1224) cntbar_detail_list_pane

0x8954,	// (0x000b1270) main_cntbar_detail_cont_pane_ParamLimits

0x8954,	// (0x000b1270) main_cntbar_detail_cont_pane

0xca20,	// (0x000b533c) scroll_pane_cp032_ParamLimits

0xca20,	// (0x000b533c) scroll_pane_cp032

0x8968,	// (0x000b1284) cntbar_detail_list_event_pane_ParamLimits

0x8968,	// (0x000b1284) cntbar_detail_list_event_pane

0x8918,	// (0x000b1234) cntbar_detail_list_shct_pane

0xace8,	// (0x000b3604) aid_list_gen

0xed6f,	// (0x000b768b) aid_scroll

0xed78,	// (0x000b7694) aid_size_touch_scroll_bar

0x6bd8,	// (0x000af4f4) aid_list_double

0x6bc6,	// (0x000af4e2) aid_list_single

0x6bc6,	// (0x000af4e2) aid_list_single_lg

0x8978,	// (0x000b1294) aid_list_z_g_a_sm

0x8980,	// (0x000b129c) aid_list_z_g_d

0x8988,	// (0x000b12a4) aid_txt_z_prm

0x8996,	// (0x000b12b2) aid_txt_z_prm_cp01

0x89a4,	// (0x000b12c0) aid_txt_z_sec

0x89b2,	// (0x000b12ce) main_cntbar_detail_cont_pane_g1_ParamLimits

0x89b2,	// (0x000b12ce) main_cntbar_detail_cont_pane_g1

0x89c6,	// (0x000b12e2) main_cntbar_detail_cont_pane_g2_ParamLimits

0x89c6,	// (0x000b12e2) main_cntbar_detail_cont_pane_g2

0x0001,

0xfe67,	// (0x000b8783) main_cntbar_detail_cont_pane_g_ParamLimits

0xfe67,	// (0x000b8783) main_cntbar_detail_cont_pane_g

0xed81,	// (0x000b769d) main_cntbar_detail_cont_pane_t1

0xed8f,	// (0x000b76ab) main_cntbar_detail_cont_pane_t2

0xed9d,	// (0x000b76b9) main_cntbar_detail_cont_pane_t3

0x0002,

0x0299,	// (0x000a8bb5) main_cntbar_detail_cont_pane_t

0x89d6,	// (0x000b12f2) cell_cntbar_detail_list_shct_pane_ParamLimits

0x89d6,	// (0x000b12f2) cell_cntbar_detail_list_shct_pane

0xedab,	// (0x000b76c7) cntbar_detail_list_shct_pane_g1

0xedb4,	// (0x000b76d0) cntbar_detail_list_shct_pane_g2

0x0001,

0x02a0,	// (0x000a8bbc) cntbar_detail_list_shct_pane_g

0x89ea,	// (0x000b1306) cntbar_detail_list_event_pane_g1_ParamLimits

0x89ea,	// (0x000b1306) cntbar_detail_list_event_pane_g1

0x89f6,	// (0x000b1312) cntbar_detail_list_event_pane_g2_ParamLimits

0x89f6,	// (0x000b1312) cntbar_detail_list_event_pane_g2

0x0005,

0xfe6c,	// (0x000b8788) cntbar_detail_list_event_pane_g_ParamLimits

0xfe6c,	// (0x000b8788) cntbar_detail_list_event_pane_g

0x8a62,	// (0x000b137e) cntbar_detail_list_event_pane_t1_ParamLimits

0x8a62,	// (0x000b137e) cntbar_detail_list_event_pane_t1

0x8a77,	// (0x000b1393) cntbar_detail_list_event_pane_t2_ParamLimits

0x8a77,	// (0x000b1393) cntbar_detail_list_event_pane_t2

0x0002,

0xfe79,	// (0x000b8795) cntbar_detail_list_event_pane_t_ParamLimits

0xfe79,	// (0x000b8795) cntbar_detail_list_event_pane_t

0xcd01,	// (0x000b561d) cell_cntbar_detail_list_shct_pane_g1

0xb454,	// (0x000b3d70) navi_pane_mv_g3

0xb2b7,	// (0x000b3bd3) main_cntbar_detail_pane_ParamLimits

0x9bb8,	// (0x000b24d4) main_notif_wgt_pane

0x973f,	// (0x000b205b) aid_tch_main_mp4_pane_g4

0x9921,	// (0x000b223d) popup_slider_window_cp02

0xa2d5,	// (0x000b2bf1) list_recal_day_event_pane

0x88d6,	// (0x000b11f2) cntbar_detail_btn_pane_ParamLimits

0x88d6,	// (0x000b11f2) cntbar_detail_btn_pane

0x88ef,	// (0x000b120b) cntbar_detail_btn_pane_cp01_ParamLimits

0x88ef,	// (0x000b120b) cntbar_detail_btn_pane_cp01

0x8918,	// (0x000b1234) cntbar_detail_list_shct_pane_ParamLimits

0x8928,	// (0x000b1244) cntbar_detail_pane_g1_ParamLimits

0x8928,	// (0x000b1244) cntbar_detail_pane_g1

0x8938,	// (0x000b1254) cntbar_detail_pane_t1_ParamLimits

0x8938,	// (0x000b1254) cntbar_detail_pane_t1

0x8a02,	// (0x000b131e) cntbar_detail_list_event_pane_g3_ParamLimits

0x8a02,	// (0x000b131e) cntbar_detail_list_event_pane_g3

0x8a1a,	// (0x000b1336) cntbar_detail_list_event_pane_g4_ParamLimits

0x8a1a,	// (0x000b1336) cntbar_detail_list_event_pane_g4

0x8a32,	// (0x000b134e) cntbar_detail_list_event_pane_g5_ParamLimits

0x8a32,	// (0x000b134e) cntbar_detail_list_event_pane_g5

0x8a4a,	// (0x000b1366) cntbar_detail_list_event_pane_g6_ParamLimits

0x8a4a,	// (0x000b1366) cntbar_detail_list_event_pane_g6

0x8a8c,	// (0x000b13a8) cntbar_detail_list_event_pane_t3_ParamLimits

0x8a8c,	// (0x000b13a8) cntbar_detail_list_event_pane_t3

0x8a9e,	// (0x000b13ba) popup_notif_wgt_window_ParamLimits

0x8a9e,	// (0x000b13ba) popup_notif_wgt_window

0x8ab7,	// (0x000b13d3) popup_submenu_window_cp01_ParamLimits

0x8ab7,	// (0x000b13d3) popup_submenu_window_cp01

0xaa23,	// (0x000b333f) bg_popup_window_pane_cp10

0xedbd,	// (0x000b76d9) listscroll_notif_wgt_pane

0xedcf,	// (0x000b76eb) list_notif_wgt_window

0xedd8,	// (0x000b76f4) scroll_pane_cp033

0x8ac9,	// (0x000b13e5) list_notif_wgt_row_pane_ParamLimits

0x8ac9,	// (0x000b13e5) list_notif_wgt_row_pane

0xede1,	// (0x000b76fd) aid_size_list_notif_wgt_del

0xedee,	// (0x000b770a) list_notif_wgt_row_pane_g1

0xedfa,	// (0x000b7716) list_notif_wgt_row_pane_g2

0xee09,	// (0x000b7725) list_notif_wgt_row_pane_g3

0x0002,

0x02b9,	// (0x000a8bd5) list_notif_wgt_row_pane_g

0xee16,	// (0x000b7732) list_notif_wgt_row_pane_t1

0xee2c,	// (0x000b7748) list_notif_wgt_row_pane_t2

0xee3e,	// (0x000b775a) list_notif_wgt_row_pane_t3

0x0002,

0x02c0,	// (0x000a8bdc) list_notif_wgt_row_pane_t

0xd981,	// (0x000b629d) list_recal_day_event_pane_g1

0xee50,	// (0x000b776c) list_recal_day_event_pane_t1

0x9bb8,	// (0x000b24d4) bg_button_pane_cp045

0x8ad9,	// (0x000b13f5) cntbar_detail_btn_pane_t1

0xc8ed,	// (0x000b5209) main_callh_pane_ParamLimits

0xc8ed,	// (0x000b5209) main_callh_pane

0x9bb8,	// (0x000b24d4) main_coverflow0_pane

0x9bb8,	// (0x000b24d4) main_wgtman_pane

0x78f9,	// (0x000b0215) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x78f9,	// (0x000b0215) main_fs_bigclock_unlock_btn_pane

0x82f3,	// (0x000b0c0f) bg_button_pane_cp16

0x8303,	// (0x000b0c1f) cell_tport_appsw_pane_g3

0x8ae7,	// (0x000b1403) cf0_flow_pane_ParamLimits

0x8ae7,	// (0x000b1403) cf0_flow_pane

0xee5f,	// (0x000b777b) listscroll_cf0_pane

0xee6a,	// (0x000b7786) main_cf0_pane_g1

0x8afc,	// (0x000b1418) main_cf0_pane_t1_ParamLimits

0x8afc,	// (0x000b1418) main_cf0_pane_t1

0x8b13,	// (0x000b142f) main_cf0_pane_t2_ParamLimits

0x8b13,	// (0x000b142f) main_cf0_pane_t2

0x0001,

0xfe80,	// (0x000b879c) main_cf0_pane_t_ParamLimits

0xfe80,	// (0x000b879c) main_cf0_pane_t

0xee7c,	// (0x000b7798) scroll_pane_cp11

0x8b2a,	// (0x000b1446) cf0_flow_pane_g1

0x8b32,	// (0x000b144e) cf0_flow_pane_g2

0x0001,

0xfe85,	// (0x000b87a1) cf0_flow_pane_g

0x8b3a,	// (0x000b1456) cf0_flow_pane_t1

0x9bb8,	// (0x000b24d4) main_call6_pane

0x9bb8,	// (0x000b24d4) main_calllock_pane

0x8b48,	// (0x000b1464) call6_btn_grp_pane_ParamLimits

0x8b48,	// (0x000b1464) call6_btn_grp_pane

0x8b62,	// (0x000b147e) call6_pane_g1_ParamLimits

0x8b62,	// (0x000b147e) call6_pane_g1

0x8b78,	// (0x000b1494) popup_call6_1st_window_ParamLimits

0x8b78,	// (0x000b1494) popup_call6_1st_window

0x8b89,	// (0x000b14a5) popup_call6_2nd_window_ParamLimits

0x8b89,	// (0x000b14a5) popup_call6_2nd_window

0x8b9a,	// (0x000b14b6) cell_call6_btn_pane_ParamLimits

0x8b9a,	// (0x000b14b6) cell_call6_btn_pane

0xaa23,	// (0x000b333f) bg_popup_call2_in_pane_cp03

0xee87,	// (0x000b77a3) popup_call6_1st_window_g1

0xee8f,	// (0x000b77ab) popup_call6_1st_window_g2

0xee97,	// (0x000b77b3) popup_call6_1st_window_g3

0x0002,

0x02d6,	// (0x000a8bf2) popup_call6_1st_window_g

0xee9f,	// (0x000b77bb) popup_call6_1st_window_t1

0xeeae,	// (0x000b77ca) popup_call6_1st_window_t2

0xeebc,	// (0x000b77d8) popup_call6_1st_window_t3

0x0002,

0x02dd,	// (0x000a8bf9) popup_call6_1st_window_t

0xaa23,	// (0x000b333f) bg_popup_call2_in_pane_cp04

0xee87,	// (0x000b77a3) popup_call6_2nd_window_g1

0xee8f,	// (0x000b77ab) popup_call6_2nd_window_g2

0xee97,	// (0x000b77b3) popup_call6_2nd_window_g3

0x0002,

0x02d6,	// (0x000a8bf2) popup_call6_2nd_window_g

0xee9f,	// (0x000b77bb) popup_call6_2nd_window_t1

0x9454,	// (0x000b1d70) bg_button_pane_cp15

0x9ba0,	// (0x000b24bc) cell_call6_btn_pane_g1

0x9ba9,	// (0x000b24c5) cell_call6_btn_pane_t1

0x8bae,	// (0x000b14ca) listscroll_wgtman_pane_ParamLimits

0x8bae,	// (0x000b14ca) listscroll_wgtman_pane

0x8bcf,	// (0x000b14eb) wgtman_btn_pane_ParamLimits

0x8bcf,	// (0x000b14eb) wgtman_btn_pane

0xb248,	// (0x000b3b64) aid_scroll_copy1

0xeeca,	// (0x000b77e6) list_wgtman_pane

0x8c12,	// (0x000b152e) wgtman_btn_pane_g1_ParamLimits

0x8c12,	// (0x000b152e) wgtman_btn_pane_g1

0x8c3e,	// (0x000b155a) wgtman_btn_pane_t1_ParamLimits

0x8c3e,	// (0x000b155a) wgtman_btn_pane_t1

0xeed4,	// (0x000b77f0) wgtman_btn_pane_t2_ParamLimits

0xeed4,	// (0x000b77f0) wgtman_btn_pane_t2

0x0001,

0xfe8a,	// (0x000b87a6) wgtman_btn_pane_t_ParamLimits

0xfe8a,	// (0x000b87a6) wgtman_btn_pane_t

0x8c7b,	// (0x000b1597) listrow_wgtman_pane_ParamLimits

0x8c7b,	// (0x000b1597) listrow_wgtman_pane

0x8c8d,	// (0x000b15a9) listrow_wgtman_pane_g1

0x8c9a,	// (0x000b15b6) listrow_wgtman_pane_g2

0x0001,

0xfe8f,	// (0x000b87ab) listrow_wgtman_pane_g

0x8cb8,	// (0x000b15d4) listrow_wgtman_pane_t1

0x8cd0,	// (0x000b15ec) listrow_wgtman_pane_t2

0x0001,

0xfe94,	// (0x000b87b0) listrow_wgtman_pane_t

0x8cf6,	// (0x000b1612) wait_bar_pane_cp09

0xeeeb,	// (0x000b7807) main_calllock_btn_pane

0xeef5,	// (0x000b7811) main_calllock_pane_g1

0x9bb8,	// (0x000b24d4) bg_button_pane_cp17

0xef01,	// (0x000b781d) main_calllock_btn_pane_g1

0xef0a,	// (0x000b7826) main_calllock_btn_pane_t1

0x9bb8,	// (0x000b24d4) main_dialer3_pane

0x9bb8,	// (0x000b24d4) main_fmrd2_pane

0xcd01,	// (0x000b561d) main_fs_bigclock_unlock_btn_pane_g1

0x8d10,	// (0x000b162c) main_fs_bigclock_unlock_btn_pane_t1

0x8d1e,	// (0x000b163a) area_fmrd2_info_pane_ParamLimits

0x8d1e,	// (0x000b163a) area_fmrd2_info_pane

0x8d2f,	// (0x000b164b) area_fmrd2_visual_pane_ParamLimits

0x8d2f,	// (0x000b164b) area_fmrd2_visual_pane

0x8d3d,	// (0x000b1659) fmrd2_indi_pane_ParamLimits

0x8d3d,	// (0x000b1659) fmrd2_indi_pane

0x8d4a,	// (0x000b1666) area_fmrd2_visual_pane_g1

0x8d52,	// (0x000b166e) area_fmrd2_visual_pane_t1

0x8d62,	// (0x000b167e) area_fmrd2_visual_pane_t2

0x8d72,	// (0x000b168e) area_fmrd2_visual_pane_t3

0x0002,

0xfe9e,	// (0x000b87ba) area_fmrd2_visual_pane_t

0x8d82,	// (0x000b169e) area_fmrd2_info_pane_g1

0x8d8a,	// (0x000b16a6) area_fmrd2_info_pane_t1

0x8d9a,	// (0x000b16b6) area_fmrd2_info_pane_t2

0x8daa,	// (0x000b16c6) area_fmrd2_info_pane_t3

0x8dba,	// (0x000b16d6) area_fmrd2_info_pane_t4

0x0003,

0xfea5,	// (0x000b87c1) area_fmrd2_info_pane_t

0x8dc8,	// (0x000b16e4) fmrd2_indi_pane_t1

0x8dd8,	// (0x000b16f4) fmrd2_indi_pane_t2

0x8de8,	// (0x000b1704) fmrd2_indi_pane_t3

0x0002,

0xfeae,	// (0x000b87ca) fmrd2_indi_pane_t

0xe4c4,	// (0x000b6de0) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xe4c4,	// (0x000b6de0) list_single_fs_bigclock_indicator_pane_g5

0xe575,	// (0x000b6e91) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xe575,	// (0x000b6e91) list_single_fs_bigclock_indicator_pane_t5

0x8490,	// (0x000b0dac) aid_cell_bcale_month_pane_ParamLimits

0x8490,	// (0x000b0dac) aid_cell_bcale_month_pane

0x84ae,	// (0x000b0dca) bcale_month_pane_ParamLimits

0x84ae,	// (0x000b0dca) bcale_month_pane

0x84d2,	// (0x000b0dee) bcale_preview_pane_ParamLimits

0x84d2,	// (0x000b0dee) bcale_preview_pane

0xecf0,	// (0x000b760c) list_single_fs_bigclock_pane_t1_ParamLimits

0xed0f,	// (0x000b762b) list_single_fs_bigclock_pane_t2_ParamLimits

0xed0f,	// (0x000b762b) list_single_fs_bigclock_pane_t2

0x0001,

0x028f,	// (0x000a8bab) list_single_fs_bigclock_pane_t_ParamLimits

0x028f,	// (0x000a8bab) list_single_fs_bigclock_pane_t

0x8d08,	// (0x000b1624) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfe99,	// (0x000b87b5) main_fs_bigclock_unlock_btn_pane_g

0x8df8,	// (0x000b1714) aid_dia3_key_size_ParamLimits

0x8df8,	// (0x000b1714) aid_dia3_key_size

0x8e07,	// (0x000b1723) aid_dia3_listrow_size_ParamLimits

0x8e07,	// (0x000b1723) aid_dia3_listrow_size

0x8e1c,	// (0x000b1738) dia3_keypad_fun_pane_ParamLimits

0x8e1c,	// (0x000b1738) dia3_keypad_fun_pane

0x8e38,	// (0x000b1754) dia3_keypad_num_pane_ParamLimits

0x8e38,	// (0x000b1754) dia3_keypad_num_pane

0x8e53,	// (0x000b176f) dia3_listscroll_pane_ParamLimits

0x8e53,	// (0x000b176f) dia3_listscroll_pane

0x8e66,	// (0x000b1782) dia3_numentry_pane_ParamLimits

0x8e66,	// (0x000b1782) dia3_numentry_pane

0xef19,	// (0x000b7835) dia3_list_pane

0xef24,	// (0x000b7840) scroll_pane_cp12

0x9bb8,	// (0x000b24d4) bg_dia3_numentry_pane

0x8e7a,	// (0x000b1796) dia3_numentry_pane_t1

0x8e89,	// (0x000b17a5) cell_dia3_key_num_pane

0x8e91,	// (0x000b17ad) cell_dia3_key0_fun_pane_ParamLimits

0x8e91,	// (0x000b17ad) cell_dia3_key0_fun_pane

0x8ea5,	// (0x000b17c1) cell_dia3_key1_fun_pane_ParamLimits

0x8ea5,	// (0x000b17c1) cell_dia3_key1_fun_pane

0x8ebd,	// (0x000b17d9) dia3_listrow_pane

0xe217,	// (0x000b6b33) bg_dia3_numentry_pane_g1

0x9bb8,	// (0x000b24d4) bg_button_pane_cp21

0xef2f,	// (0x000b784b) cell_dia3_key_num_pane_t1

0xef3d,	// (0x000b7859) cell_dia3_key_num_pane_t2

0xef4c,	// (0x000b7868) cell_dia3_key_num_pane_t3

0xef5b,	// (0x000b7877) cell_dia3_key_num_pane_t4

0x0003,

0x030f,	// (0x000a8c2b) cell_dia3_key_num_pane_t

0x9bb8,	// (0x000b24d4) bg_button_pane_cp19

0x8ecf,	// (0x000b17eb) cell_dia3_key0_fun_pane_g1

0x9bb8,	// (0x000b24d4) bg_button_pane_cp20

0x8ed7,	// (0x000b17f3) cell_dia3_key1_fun_pane_g1

0x8edf,	// (0x000b17fb) area_left_week_number_pane

0x8eeb,	// (0x000b1807) area_top_day_name_pane

0x8efe,	// (0x000b181a) frame_month_view_pane

0xef6a,	// (0x000b7886) grid_month_view_pane

0x8f11,	// (0x000b182d) cell_top_day_name_pane_ParamLimits

0x8f11,	// (0x000b182d) cell_top_day_name_pane

0x8f3e,	// (0x000b185a) cell_area_left_week_number_pane_ParamLimits

0x8f3e,	// (0x000b185a) cell_area_left_week_number_pane

0x8f52,	// (0x000b186e) cell_month_view_pane_ParamLimits

0x8f52,	// (0x000b186e) cell_month_view_pane

0xef78,	// (0x000b7894) frm_month_g1

0x8f7f,	// (0x000b189b) frm_month_g2

0x8f92,	// (0x000b18ae) frm_month_g3

0x8fa5,	// (0x000b18c1) frm_month_g4

0x8fb8,	// (0x000b18d4) frm_month_g5

0x8fcb,	// (0x000b18e7) frm_month_g6

0x8fde,	// (0x000b18fa) frm_month_g7

0xef85,	// (0x000b78a1) frm_month_g8

0x8ff1,	// (0x000b190d) frm_month_g9

0x9001,	// (0x000b191d) frm_month_g10

0x9011,	// (0x000b192d) frm_month_g11

0x9021,	// (0x000b193d) frm_month_g12

0x9033,	// (0x000b194f) frm_month_g13

0x9045,	// (0x000b1961) frm_month_g14

0x9059,	// (0x000b1975) frm_month_g15

0x906d,	// (0x000b1989) frm_month_g16

0x000f,

0xfeb5,	// (0x000b87d1) frm_month_g

0xef92,	// (0x000b78ae) cell_top_day_name_pane_t1

0x9081,	// (0x000b199d) cell_area_left_week_number_pane_g1

0x908d,	// (0x000b19a9) cell_area_left_week_number_pane_t1

0xcf4f,	// (0x000b586b) cell_month_view_pane_g1

0x90a0,	// (0x000b19bc) cell_month_view_pane_t1

0x9bb8,	// (0x000b24d4) main_fps_pane

0xe7ad,	// (0x000b70c9) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xe7ad,	// (0x000b70c9) cmail_ddmenu_btn02_pane_cp1

0xe7c9,	// (0x000b70e5) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xe7c9,	// (0x000b70e5) cmail_ddmenu_btn02_pane_cp2

0x8773,	// (0x000b108f) cmail_ddmenu_btn02_pane_g2_ParamLimits

0x8773,	// (0x000b108f) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfe24,	// (0x000b8740) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfe24,	// (0x000b8740) cmail_ddmenu_btn02_pane_g

0x8792,	// (0x000b10ae) cmail_ddmenu_btn02_pane_t2_ParamLimits

0x8792,	// (0x000b10ae) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfe29,	// (0x000b8745) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfe29,	// (0x000b8745) cmail_ddmenu_btn02_pane_t

0x90b3,	// (0x000b19cf) fps_text_pane_ParamLimits

0x90b3,	// (0x000b19cf) fps_text_pane

0x90ca,	// (0x000b19e6) main_fps_pane_g1_ParamLimits

0x90ca,	// (0x000b19e6) main_fps_pane_g1

0x90e4,	// (0x000b1a00) wait_bar_pane_cp010_ParamLimits

0x90e4,	// (0x000b1a00) wait_bar_pane_cp010

0x90f5,	// (0x000b1a11) fps_text_pane_t1_ParamLimits

0x90f5,	// (0x000b1a11) fps_text_pane_t1

0xd6ca,	// (0x000b5fe6) cam4_image_uncrop_pane_g1

0xd6d3,	// (0x000b5fef) cam4_image_uncrop_pane_g2

0x59eb,	// (0x000ae307) cam4_image_uncrop_pane_g3

0x59f4,	// (0x000ae310) cam4_image_uncrop_pane_g4

0x0003,

0xf901,	// (0x000b821d) cam4_image_uncrop_pane_g

0x8ebd,	// (0x000b17d9) dia3_listrow_pane_ParamLimits

0x9bb8,	// (0x000b24d4) main_phob2_pane

0x82c4,	// (0x000b0be0) cell_tport_appsw_pane_cp02_ParamLimits

0x82c4,	// (0x000b0be0) cell_tport_appsw_pane_cp02

0x82d8,	// (0x000b0bf4) cell_tport_appsw_pane_cp03_ParamLimits

0x82d8,	// (0x000b0bf4) cell_tport_appsw_pane_cp03

0x9bb8,	// (0x000b24d4) phob2_contact_card_pane

0x9bb8,	// (0x000b24d4) phob2_listscroll_pane

0xefa5,	// (0x000b78c1) phob2_list_pane

0xefad,	// (0x000b78c9) scroll_pane_cp034

0x910d,	// (0x000b1a29) phob2_cc_data_pane_ParamLimits

0x910d,	// (0x000b1a29) phob2_cc_data_pane

0x912c,	// (0x000b1a48) phob2_cc_listscroll_pane_ParamLimits

0x912c,	// (0x000b1a48) phob2_cc_listscroll_pane

0x8c7b,	// (0x000b1597) list_double_large_graphic_phob2_pane_ParamLimits

0x8c7b,	// (0x000b1597) list_double_large_graphic_phob2_pane

0x914a,	// (0x000b1a66) list_double_large_graphic_phob2_pane_g1_ParamLimits

0x914a,	// (0x000b1a66) list_double_large_graphic_phob2_pane_g1

0x9160,	// (0x000b1a7c) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x9160,	// (0x000b1a7c) list_double_large_graphic_phob2_pane_g2

0x0001,

0xfed6,	// (0x000b87f2) list_double_large_graphic_phob2_pane_g_ParamLimits

0xfed6,	// (0x000b87f2) list_double_large_graphic_phob2_pane_g

0x916c,	// (0x000b1a88) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x916c,	// (0x000b1a88) list_double_large_graphic_phob2_pane_t1

0x9182,	// (0x000b1a9e) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x9182,	// (0x000b1a9e) list_double_large_graphic_phob2_pane_t2

0x0001,

0xfedb,	// (0x000b87f7) list_double_large_graphic_phob2_pane_t_ParamLimits

0xfedb,	// (0x000b87f7) list_double_large_graphic_phob2_pane_t

0x9bb8,	// (0x000b24d4) list_highlight_pane_cp024

0x9197,	// (0x000b1ab3) phob2_cc_button_pane

0x919f,	// (0x000b1abb) phob2_cc_data_pane_g1_ParamLimits

0x919f,	// (0x000b1abb) phob2_cc_data_pane_g1

0x91b4,	// (0x000b1ad0) phob2_cc_data_pane_g2_ParamLimits

0x91b4,	// (0x000b1ad0) phob2_cc_data_pane_g2

0x0001,

0xfee0,	// (0x000b87fc) phob2_cc_data_pane_g_ParamLimits

0xfee0,	// (0x000b87fc) phob2_cc_data_pane_g

0x91c4,	// (0x000b1ae0) phob2_cc_data_pane_t1_ParamLimits

0x91c4,	// (0x000b1ae0) phob2_cc_data_pane_t1

0x91dc,	// (0x000b1af8) phob2_cc_data_pane_t2_ParamLimits

0x91dc,	// (0x000b1af8) phob2_cc_data_pane_t2

0x91f4,	// (0x000b1b10) phob2_cc_data_pane_t3_ParamLimits

0x91f4,	// (0x000b1b10) phob2_cc_data_pane_t3

0x0002,

0xfee5,	// (0x000b8801) phob2_cc_data_pane_t_ParamLimits

0xfee5,	// (0x000b8801) phob2_cc_data_pane_t

0xefb5,	// (0x000b78d1) phob2_cc_list_pane_ParamLimits

0xefb5,	// (0x000b78d1) phob2_cc_list_pane

0xda2a,	// (0x000b6346) scroll_pane_cp035_ParamLimits

0xda2a,	// (0x000b6346) scroll_pane_cp035

0xb2b7,	// (0x000b3bd3) bg_button_pane_cp033

0xefc1,	// (0x000b78dd) phob2_cc_button_pane_g1

0xefcd,	// (0x000b78e9) phob2_cc_button_pane_t1

0xefe2,	// (0x000b78fe) phob2_cc_button_pane_t2

0x0001,

0x034f,	// (0x000a8c6b) phob2_cc_button_pane_t

0x920c,	// (0x000b1b28) list_double_large_graphic_phob2_cc_pane_ParamLimits

0x920c,	// (0x000b1b28) list_double_large_graphic_phob2_cc_pane

0x921f,	// (0x000b1b3b) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0x921f,	// (0x000b1b3b) list_double_large_graphic_phob2_cc_pane_g1

0x922b,	// (0x000b1b47) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x922b,	// (0x000b1b47) list_double_large_graphic_phob2_cc_pane_g2

0x9237,	// (0x000b1b53) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x9237,	// (0x000b1b53) list_double_large_graphic_phob2_cc_pane_g3

0x9243,	// (0x000b1b5f) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x9243,	// (0x000b1b5f) list_double_large_graphic_phob2_cc_pane_g4

0x924f,	// (0x000b1b6b) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x924f,	// (0x000b1b6b) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xfeec,	// (0x000b8808) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xfeec,	// (0x000b8808) list_double_large_graphic_phob2_cc_pane_g

0x925b,	// (0x000b1b77) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x925b,	// (0x000b1b77) list_double_large_graphic_phob2_cc_pane_t1

0x9284,	// (0x000b1ba0) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x9284,	// (0x000b1ba0) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xfef7,	// (0x000b8813) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xfef7,	// (0x000b8813) list_double_large_graphic_phob2_cc_pane_t

0xeff4,	// (0x000b7910) list_highlight_pane_cp025_ParamLimits

0xeff4,	// (0x000b7910) list_highlight_pane_cp025

0xb2b7,	// (0x000b3bd3) bg_button_pane_cp033_ParamLimits

0xefc1,	// (0x000b78dd) phob2_cc_button_pane_g1_ParamLimits

0xefcd,	// (0x000b78e9) phob2_cc_button_pane_t1_ParamLimits

0xefe2,	// (0x000b78fe) phob2_cc_button_pane_t2_ParamLimits

0x034f,	// (0x000a8c6b) phob2_cc_button_pane_t_ParamLimits

0x069c,	// (0x000a8fb8) popup_wgtman_window

0xd845,	// (0x000b6161) scroll_pane_cp038

0x8bf4,	// (0x000b1510) wgtman_btn_pane_cp_01_ParamLimits

0x8bf4,	// (0x000b1510) wgtman_btn_pane_cp_01

0xf002,	// (0x000b791e) wgtman_content_pane

0xf00b,	// (0x000b7927) wgtman_heading_pane

0x9bb8,	// (0x000b24d4) bg_heading_pane_cp02

0xf014,	// (0x000b7930) wgtman_heading_pane_g1

0xf01c,	// (0x000b7938) wgtman_heading_pane_t1

0xf02a,	// (0x000b7946) scroll_pane_cp036

0xf032,	// (0x000b794e) wgtman_list_pane

0xe660,	// (0x000b6f7c) wgtman_list_pane_t1_ParamLimits

0xe660,	// (0x000b6f7c) wgtman_list_pane_t1

0x99ad,	// (0x000b22c9) cam4_grid_pane

0x66ba,	// (0x000aefd6) bg_button_pane_cp015_ParamLimits

0x66ce,	// (0x000aefea) bg_button_pane_cp016_ParamLimits

0x66e1,	// (0x000aeffd) bg_button_pane_cp017_ParamLimits

0x6739,	// (0x000af055) popup_vitu2_query_window_g3_ParamLimits

0x6739,	// (0x000af055) popup_vitu2_query_window_g3

0x67f6,	// (0x000af112) popup_vitu2_query_window_t6_ParamLimits

0x67f6,	// (0x000af112) popup_vitu2_query_window_t6

0x6821,	// (0x000af13d) popup_vitu2_query_window_t7_ParamLimits

0x6821,	// (0x000af13d) popup_vitu2_query_window_t7

0xd6ca,	// (0x000b5fe6) cam4_grid_pane_g1

0xd6d3,	// (0x000b5fef) cam4_grid_pane_g2

0xf03a,	// (0x000b7956) cam4_grid_pane_g3

0xf043,	// (0x000b795f) cam4_grid_pane_g4

0x0003,

0xfefc,	// (0x000b8818) cam4_grid_pane_g

0x15a3,	// (0x000a9ebf) aid_placing_vt_slider_lsc_ParamLimits

0x18a0,	// (0x000aa1bc) vidtel_button_pane_ParamLimits

0x18a0,	// (0x000aa1bc) vidtel_button_pane

0x9bb8,	// (0x000b24d4) bg_button_pane_cp034

0xf04e,	// (0x000b796a) vidtel_button_pane_g1

0xf056,	// (0x000b7972) vidtel_button_pane_t1

0xd95f,	// (0x000b627b) aid_size_vtel_slider_touch

0xda2a,	// (0x000b6346) scroll_pane_cp039

0x75df,	// (0x000afefb) ncim_query_button_pane_cp01_ParamLimits

0x75fe,	// (0x000aff1a) ncimui_query_pane_g1_ParamLimits

0xb2b7,	// (0x000b3bd3) input_focus_pane_cp012_ParamLimits

0xe25d,	// (0x000b6b79) ncim_query_entry_pane_t1_ParamLimits

0xda2a,	// (0x000b6346) scroll_pane_cp039_ParamLimits

0xb33f,	// (0x000b3c5b) navi_pane_bcale_mc_g1

0xb347,	// (0x000b3c63) navi_pane_bcale_mc_t1

0xe812,	// (0x000b712e) main_sp_fs_email_pane_g1

0xe81e,	// (0x000b713a) main_sp_fs_email_pane_g2

0x0001,

0xfcf8,	// (0x000b8614) main_sp_fs_email_pane_g

0xea74,	// (0x000b7390) list_single_cale_mrui_row_pane_g3_ParamLimits

0xea74,	// (0x000b7390) list_single_cale_mrui_row_pane_g3

0x87b2,	// (0x000b10ce) list_single_recal_day_pane_g5_event_pane

0xa332,	// (0x000b2c4e) list_single_recal_day_pane_g7

0xf06c,	// (0x000b7988) list_recal_day_event_pane_cp01

0xf075,	// (0x000b7991) list_recal_vselct_arw_lo_pane_cp01

0xf07d,	// (0x000b7999) list_recal_vselct_arw_up_pane_cp01

0xf085,	// (0x000b79a1) list_recal_vselct_pane_cp01

0xd981,	// (0x000b629d) list_recal_day_event_pane_cp01_g1

0xa367,	// (0x000b2c83) list_recal_day_event_pane_cp01_t1

0xa33a,	// (0x000b2c56) list_single_recal_day_pane_t1_ParamLimits

0xa34c,	// (0x000b2c68) list_single_recal_day_pane_t2_ParamLimits

0xfe39,	// (0x000b8755) list_single_recal_day_pane_t_ParamLimits

0xa77b,	// (0x000b3097) bg_notes_pane_ParamLimits

0xa82a,	// (0x000b3146) list_notes_pane_ParamLimits

0x09e0,	// (0x000a92fc) scroll_pane_cp06_ParamLimits

0xa84c,	// (0x000b3168) main_notes_pane_ParamLimits

0x9bb8,	// (0x000b24d4) main_welc_pane

0x92ad,	// (0x000b1bc9) main_welc_body_pane_ParamLimits

0x92ad,	// (0x000b1bc9) main_welc_body_pane

0x92ca,	// (0x000b1be6) main_welc_opti_pane_ParamLimits

0x92ca,	// (0x000b1be6) main_welc_opti_pane

0x930f,	// (0x000b1c2b) main_welc_pane_t1_ParamLimits

0x930f,	// (0x000b1c2b) main_welc_pane_t1

0x932d,	// (0x000b1c49) main_welc_body_row_pane_ParamLimits

0x932d,	// (0x000b1c49) main_welc_body_row_pane

0xe12a,	// (0x000b6a46) main_welc_opti_row_pane_ParamLimits

0xe12a,	// (0x000b6a46) main_welc_opti_row_pane

0xf08f,	// (0x000b79ab) main_welc_opti_row_pane_g1

0x9342,	// (0x000b1c5e) main_welc_opti_row_pane_t1

0xf097,	// (0x000b79b3) main_welc_body_row_pane_t1

0xedc7,	// (0x000b76e3) popup_notif_wgt_heading_pane

0xede1,	// (0x000b76fd) aid_size_list_notif_wgt_del_ParamLimits

0xedee,	// (0x000b770a) list_notif_wgt_row_pane_g1_ParamLimits

0xedfa,	// (0x000b7716) list_notif_wgt_row_pane_g2_ParamLimits

0xee09,	// (0x000b7725) list_notif_wgt_row_pane_g3_ParamLimits

0x02b9,	// (0x000a8bd5) list_notif_wgt_row_pane_g_ParamLimits

0xee16,	// (0x000b7732) list_notif_wgt_row_pane_t1_ParamLimits

0xee2c,	// (0x000b7748) list_notif_wgt_row_pane_t2_ParamLimits

0xee3e,	// (0x000b775a) list_notif_wgt_row_pane_t3_ParamLimits

0x02c0,	// (0x000a8bdc) list_notif_wgt_row_pane_t_ParamLimits

0x8c8d,	// (0x000b15a9) listrow_wgtman_pane_g1_ParamLimits

0x8c9a,	// (0x000b15b6) listrow_wgtman_pane_g2_ParamLimits

0xfe8f,	// (0x000b87ab) listrow_wgtman_pane_g_ParamLimits

0x8cb8,	// (0x000b15d4) listrow_wgtman_pane_t1_ParamLimits

0x8cd0,	// (0x000b15ec) listrow_wgtman_pane_t2_ParamLimits

0xfe94,	// (0x000b87b0) listrow_wgtman_pane_t_ParamLimits

0x8cf6,	// (0x000b1612) wait_bar_pane_cp09_ParamLimits

0x9bb8,	// (0x000b24d4) bg_popup_heading_pane_cp02

0xf0a6,	// (0x000b79c2) popup_notif_wgt_heading_pane_g1

0xf0ae,	// (0x000b79ca) popup_notif_wgt_heading_pane_t1

0x9bb8,	// (0x000b24d4) main_vids_pane

0x9bb8,	// (0x000b24d4) vids_listscroll_pane

0x9351,	// (0x000b1c6d) scroll_pane_cp040

0x9bb8,	// (0x000b24d4) vids_list_pane

0x935c,	// (0x000b1c78) vids_list_double_pane_ParamLimits

0x935c,	// (0x000b1c78) vids_list_double_pane

0x936d,	// (0x000b1c89) vids_list_double_pane_g1

0x9376,	// (0x000b1c92) vids_list_double_pane_t1

0x9386,	// (0x000b1ca2) vids_list_double_pane_t2

0x0001,

0xff0a,	// (0x000b8826) vids_list_double_pane_t

0x9446,	// (0x000b1d62) main_ncimui_pane_ParamLimits

0x7415,	// (0x000afd31) main_ncimui_pane_g1_ParamLimits

0x7421,	// (0x000afd3d) main_ncimui_pane_g2_ParamLimits

0x7421,	// (0x000afd3d) main_ncimui_pane_g2

0x0001,

0xfbfd,	// (0x000b8519) main_ncimui_pane_g_ParamLimits

0xfbfd,	// (0x000b8519) main_ncimui_pane_g

0x92e5,	// (0x000b1c01) main_welc_pane_g1_ParamLimits

0x92e5,	// (0x000b1c01) main_welc_pane_g1

0x92fa,	// (0x000b1c16) main_welc_pane_g2_ParamLimits

0x92fa,	// (0x000b1c16) main_welc_pane_g2

0x0001,

0xff05,	// (0x000b8821) main_welc_pane_g_ParamLimits

0xff05,	// (0x000b8821) main_welc_pane_g

0xa77b,	// (0x000b3097) listscroll_mce_pane_ParamLimits

0xb494,	// (0x000b3db0) wait_bar_pane_cp10

0xc8e1,	// (0x000b51fd) main_cale_day_pane_ParamLimits

0xc8e1,	// (0x000b51fd) main_cale_week_pane_ParamLimits

0xa77b,	// (0x000b3097) main_messa_pane_ParamLimits

0x4d13,	// (0x000ad62f) main_clock2_btn_pane_ParamLimits

0x4d13,	// (0x000ad62f) main_clock2_btn_pane

0xd0d7,	// (0x000b59f3) main_clock2_btn_pane_cp01_ParamLimits

0xd0d7,	// (0x000b59f3) main_clock2_btn_pane_cp01

0xea45,	// (0x000b7361) list_cale_mrui_pane_ParamLimits

0xee74,	// (0x000b7790) main_cf0_pane_g2

0x0001,

0x02c7,	// (0x000a8be3) main_cf0_pane_g

0x8edf,	// (0x000b17fb) area_left_week_number_pane_ParamLimits

0x8eeb,	// (0x000b1807) area_top_day_name_pane_ParamLimits

0x8efe,	// (0x000b181a) frame_month_view_pane_ParamLimits

0xef6a,	// (0x000b7886) grid_month_view_pane_ParamLimits

0xef78,	// (0x000b7894) frm_month_g1_ParamLimits

0x8f7f,	// (0x000b189b) frm_month_g2_ParamLimits

0x8f92,	// (0x000b18ae) frm_month_g3_ParamLimits

0x8fa5,	// (0x000b18c1) frm_month_g4_ParamLimits

0x8fb8,	// (0x000b18d4) frm_month_g5_ParamLimits

0x8fcb,	// (0x000b18e7) frm_month_g6_ParamLimits

0x8fde,	// (0x000b18fa) frm_month_g7_ParamLimits

0xef85,	// (0x000b78a1) frm_month_g8_ParamLimits

0x8ff1,	// (0x000b190d) frm_month_g9_ParamLimits

0x9001,	// (0x000b191d) frm_month_g10_ParamLimits

0x9011,	// (0x000b192d) frm_month_g11_ParamLimits

0x9021,	// (0x000b193d) frm_month_g12_ParamLimits

0x9033,	// (0x000b194f) frm_month_g13_ParamLimits

0x9045,	// (0x000b1961) frm_month_g14_ParamLimits

0x9059,	// (0x000b1975) frm_month_g15_ParamLimits

0x906d,	// (0x000b1989) frm_month_g16_ParamLimits

0xfeb5,	// (0x000b87d1) frm_month_g_ParamLimits

0xef92,	// (0x000b78ae) cell_top_day_name_pane_t1_ParamLimits

0x9081,	// (0x000b199d) cell_area_left_week_number_pane_g1_ParamLimits

0x908d,	// (0x000b19a9) cell_area_left_week_number_pane_t1_ParamLimits

0xcf4f,	// (0x000b586b) cell_month_view_pane_g1_ParamLimits

0x90a0,	// (0x000b19bc) cell_month_view_pane_t1_ParamLimits

0xa773,	// (0x000b308f) main_clock2_btn_pane_g1

0xf0bc,	// (0x000b79d8) main_clock2_btn_pane_t1

0xb2b7,	// (0x000b3bd3) listscroll_cmail_pane_ParamLimits

0xe812,	// (0x000b712e) main_sp_fs_email_pane_g1_ParamLimits

0xe81e,	// (0x000b713a) main_sp_fs_email_pane_g2_ParamLimits

0xfcf8,	// (0x000b8614) main_sp_fs_email_pane_g_ParamLimits

0xeb53,	// (0x000b746f) list_recal_day_pane_ParamLimits

0xeb64,	// (0x000b7480) mian_recal_day_pane_t1

0x7f37,	// (0x000b0853) list_single_dyc_row_text_pane_t4_ParamLimits

0x7f37,	// (0x000b0853) list_single_dyc_row_text_pane_t4

0x7f80,	// (0x000b089c) list_single_dyc_row_text_pane_t5_ParamLimits

0x7f80,	// (0x000b089c) list_single_dyc_row_text_pane_t5

0xa09a,	// (0x000b29b6) list_single_dyc_row_text_pane_t6_ParamLimits

0xa09a,	// (0x000b29b6) list_single_dyc_row_text_pane_t6

0x234e,	// (0x000aac6a) aid_mgn_list_cale_time_pane

0x9446,	// (0x000b1d62) main_gallery2_pane_ParamLimits

0xd0ed,	// (0x000b5a09) main_clock2_pane_cp01_t1

0xd0fb,	// (0x000b5a17) main_clock2_pane_cp01_t3

0x0001,

0xf7d7,	// (0x000b80f3) main_clock2_pane_cp01_t

0x0d59,	// (0x000a9675) cale_week_scroll_pane_g16_ParamLimits

0x0d59,	// (0x000a9675) cale_week_scroll_pane_g16

0xaa23,	// (0x000b333f) vorec_slider_pane

0xf056,	// (0x000b7972) vidtel_button_pane_t1_ParamLimits

0x8818,	// (0x000b1134) main_fs_bigclock_clock_pane_g1_ParamLimits

0x8818,	// (0x000b1134) main_fs_bigclock_clock_pane_g2_ParamLimits

0x8829,	// (0x000b1145) main_fs_bigclock_clock_pane_g3_ParamLimits

0x8829,	// (0x000b1145) main_fs_bigclock_clock_pane_g4_ParamLimits

0xfe4d,	// (0x000b8769) main_fs_bigclock_clock_pane_g_ParamLimits

0x883c,	// (0x000b1158) main_fs_bigclock_clock_pane_t1_ParamLimits

0x8852,	// (0x000b116e) main_fs_bigclock_clock_pane_t2_ParamLimits

0xfe56,	// (0x000b8772) main_fs_bigclock_clock_pane_t_ParamLimits

0x450e,	// (0x000ace2a) main_mup3_lyrics_pane_ParamLimits

0x450e,	// (0x000ace2a) main_mup3_lyrics_pane

0x93bc,	// (0x000b1cd8) main_mup3_lyrics_pane_t1_ParamLimits

0x93bc,	// (0x000b1cd8) main_mup3_lyrics_pane_t1
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
	};

} // end of namespace AknLayoutScalable_Abrw_pnl4_apps_nhd4_lsc_tch_Large
