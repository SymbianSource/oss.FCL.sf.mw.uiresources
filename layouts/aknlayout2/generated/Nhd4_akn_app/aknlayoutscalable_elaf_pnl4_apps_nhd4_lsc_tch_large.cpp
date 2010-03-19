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
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pnp4_apps_nhd4_prt_tch + 0x00074168 };

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
0x180b,	// (0x00075973) Screen

0x1817,	// (0x0007597f) application_window

0x1853,	// (0x000759bb) area_bottom_pane_ParamLimits

0x1853,	// (0x000759bb) area_bottom_pane

0x188c,	// (0x000759f4) area_top_pane_ParamLimits

0x188c,	// (0x000759f4) area_top_pane

0xe91c,	// (0x00082a84) call_video_uplink_pane_ParamLimits

0xe91c,	// (0x00082a84) call_video_uplink_pane

0x1901,	// (0x00075a69) main_pane_ParamLimits

0x1901,	// (0x00075a69) main_pane

0xb6d4,	// (0x0007f83c) context_pane

0x5ef2,	// (0x0007a05a) navi_pane

0x5f1a,	// (0x0007a082) popup_cale_events_window_ParamLimits

0x5f1a,	// (0x0007a082) popup_cale_events_window

0xb6e7,	// (0x0007f84f) popup_mup_playback_window

0x5f32,	// (0x0007a09a) signal_pane

0x1d41,	// (0x00075ea9) main_browser_pane

0x4244,	// (0x000783ac) main_burst_pane

0x5c52,	// (0x00079dba) main_calc_pane

0x4244,	// (0x000783ac) main_cale_day_pane

0x1d41,	// (0x00075ea9) main_cale_month_pane

0x4244,	// (0x000783ac) main_cale_week_pane

0x4244,	// (0x000783ac) main_call_pane

0xed82,	// (0x00082eea) main_call_poc_pane

0x4244,	// (0x000783ac) main_camera_pane

0x4244,	// (0x000783ac) main_chi_dic_pane

0x3db5,	// (0x00077f1d) main_clock_pane

0xed82,	// (0x00082eea) main_fmradio_pane

0x4244,	// (0x000783ac) main_graph_messa_pane

0xed82,	// (0x00082eea) main_help_pane

0x1d41,	// (0x00075ea9) main_im_pane

0xefdd,	// (0x00083145) main_image_pane_ParamLimits

0xefdd,	// (0x00083145) main_image_pane

0xed82,	// (0x00082eea) main_location2_pane

0x4244,	// (0x000783ac) main_location_pane

0xed82,	// (0x00082eea) main_messa_pane

0xed82,	// (0x00082eea) main_mp2_pane

0x4244,	// (0x000783ac) main_mp_pane

0xed82,	// (0x00082eea) main_msg_pane

0xed82,	// (0x00082eea) main_mup_eq_pane

0xed82,	// (0x00082eea) main_mup_pane

0x4244,	// (0x000783ac) main_notes_pane

0xed82,	// (0x00082eea) main_pec_pane

0xed82,	// (0x00082eea) main_phob_pane

0xed82,	// (0x00082eea) main_pinb_pane

0xed82,	// (0x00082eea) main_postcard_pane

0xed82,	// (0x00082eea) main_qdial_pane

0x4244,	// (0x000783ac) main_skin_pane

0xed82,	// (0x00082eea) main_smil2_pane

0x4244,	// (0x000783ac) main_smil_pane

0x4244,	// (0x000783ac) main_video_pane

0x4244,	// (0x000783ac) main_video_tele_pane

0xefdd,	// (0x00083145) main_viewer_pane_ParamLimits

0xefdd,	// (0x00083145) main_viewer_pane

0x4244,	// (0x000783ac) main_vorec_pane

0x5ca6,	// (0x00079e0e) popup_blid_sat_info_window_ParamLimits

0x5ca6,	// (0x00079e0e) popup_blid_sat_info_window

0x5cfe,	// (0x00079e66) popup_dyc_status_message_window_ParamLimits

0x5cfe,	// (0x00079e66) popup_dyc_status_message_window

0x5d16,	// (0x00079e7e) popup_grid_large_graphic_window_ParamLimits

0x5d16,	// (0x00079e7e) popup_grid_large_graphic_window

0x5dcc,	// (0x00079f34) popup_loc_request_window_ParamLimits

0x5dcc,	// (0x00079f34) popup_loc_request_window

0x5eca,	// (0x0007a032) popup_wml_address_window_ParamLimits

0x5eca,	// (0x0007a032) popup_wml_address_window

0x5a8c,	// (0x00079bf4) call_muted_g1

0x4f1b,	// (0x00079083) popup_call_audio_conf_window_ParamLimits

0x4f1b,	// (0x00079083) popup_call_audio_conf_window

0x5aa0,	// (0x00079c08) popup_call_audio_first_window_ParamLimits

0x5aa0,	// (0x00079c08) popup_call_audio_first_window

0x5b16,	// (0x00079c7e) popup_call_audio_in_window_ParamLimits

0x5b16,	// (0x00079c7e) popup_call_audio_in_window

0x5b52,	// (0x00079cba) popup_call_audio_out_window_ParamLimits

0x5b52,	// (0x00079cba) popup_call_audio_out_window

0x5b8c,	// (0x00079cf4) popup_call_audio_second_window_ParamLimits

0x5b8c,	// (0x00079cf4) popup_call_audio_second_window

0x5be2,	// (0x00079d4a) popup_call_audio_wait_window_ParamLimits

0x5be2,	// (0x00079d4a) popup_call_audio_wait_window

0x5c17,	// (0x00079d7f) popup_number_entry_window_ParamLimits

0x5c17,	// (0x00079d7f) popup_number_entry_window

0xe948,	// (0x00082ab0) bg_popup_call_pane_cp05_ParamLimits

0xe948,	// (0x00082ab0) bg_popup_call_pane_cp05

0xe968,	// (0x00082ad0) popup_number_entry_window_t1

0xe97b,	// (0x00082ae3) popup_number_entry_window_t2

0xe98d,	// (0x00082af5) popup_number_entry_window_t3

0x0003,

0xf0ec,	// (0x00083254) popup_number_entry_window_t

0xe99f,	// (0x00082b07) text_title_cp2

0xe9b2,	// (0x00082b1a) bg_popup_call_pane_cp_ParamLimits

0xe9b2,	// (0x00082b1a) bg_popup_call_pane_cp

0xe9c0,	// (0x00082b28) call_thumbnail_pane

0xe9c8,	// (0x00082b30) popup_call_audio_in_window_g1_ParamLimits

0xe9c8,	// (0x00082b30) popup_call_audio_in_window_g1

0xe9d4,	// (0x00082b3c) popup_call_audio_in_window_g2_ParamLimits

0xe9d4,	// (0x00082b3c) popup_call_audio_in_window_g2

0xe9e0,	// (0x00082b48) popup_call_audio_in_window_g3_ParamLimits

0xe9e0,	// (0x00082b48) popup_call_audio_in_window_g3

0x0002,

0xf0f5,	// (0x0008325d) popup_call_audio_in_window_g_ParamLimits

0xf0f5,	// (0x0008325d) popup_call_audio_in_window_g

0xe9ec,	// (0x00082b54) popup_call_audio_in_window_t1_ParamLimits

0xe9ec,	// (0x00082b54) popup_call_audio_in_window_t1

0xea30,	// (0x00082b98) popup_call_audio_in_window_t2_ParamLimits

0xea30,	// (0x00082b98) popup_call_audio_in_window_t2

0xea4b,	// (0x00082bb3) popup_call_audio_in_window_t3_ParamLimits

0xea4b,	// (0x00082bb3) popup_call_audio_in_window_t3

0x0002,

0xf0fc,	// (0x00083264) popup_call_audio_in_window_t_ParamLimits

0xf0fc,	// (0x00083264) popup_call_audio_in_window_t

0xe9b2,	// (0x00082b1a) bg_popup_call_pane_cp01_ParamLimits

0xe9b2,	// (0x00082b1a) bg_popup_call_pane_cp01

0xe9c0,	// (0x00082b28) call_thumbnail_pane_cp02

0xea5e,	// (0x00082bc6) call_type_pane_cp022

0xea66,	// (0x00082bce) popup_call_audio_out_window_g1_ParamLimits

0xea66,	// (0x00082bce) popup_call_audio_out_window_g1

0xea78,	// (0x00082be0) popup_call_audio_out_window_g2_ParamLimits

0xea78,	// (0x00082be0) popup_call_audio_out_window_g2

0xea84,	// (0x00082bec) popup_call_audio_out_window_g3_ParamLimits

0xea84,	// (0x00082bec) popup_call_audio_out_window_g3

0x0002,

0xf103,	// (0x0008326b) popup_call_audio_out_window_g_ParamLimits

0xf103,	// (0x0008326b) popup_call_audio_out_window_g

0xea96,	// (0x00082bfe) popup_call_audio_out_window_t1_ParamLimits

0xea96,	// (0x00082bfe) popup_call_audio_out_window_t1

0xeaae,	// (0x00082c16) popup_call_audio_out_window_t2_ParamLimits

0xeaae,	// (0x00082c16) popup_call_audio_out_window_t2

0x0001,

0xf10a,	// (0x00083272) popup_call_audio_out_window_t_ParamLimits

0xf10a,	// (0x00083272) popup_call_audio_out_window_t

0xeac3,	// (0x00082c2b) bg_popup_call_pane_ParamLimits

0xeac3,	// (0x00082c2b) bg_popup_call_pane

0x1ab8,	// (0x00075c20) call_thumbnail_pane_cp_ParamLimits

0x1ab8,	// (0x00075c20) call_thumbnail_pane_cp

0xeb47,	// (0x00082caf) call_type_pane_cp01_ParamLimits

0xeb47,	// (0x00082caf) call_type_pane_cp01

0xeb8b,	// (0x00082cf3) popup_call_audio_first_window_g1_ParamLimits

0xeb8b,	// (0x00082cf3) popup_call_audio_first_window_g1

0xebd7,	// (0x00082d3f) popup_call_audio_first_window_g2_ParamLimits

0xebd7,	// (0x00082d3f) popup_call_audio_first_window_g2

0x0001,

0xf10f,	// (0x00083277) popup_call_audio_first_window_g_ParamLimits

0xf10f,	// (0x00083277) popup_call_audio_first_window_g

0xec1b,	// (0x00082d83) popup_call_audio_first_window_t1_ParamLimits

0xec1b,	// (0x00082d83) popup_call_audio_first_window_t1

0xecc7,	// (0x00082e2f) popup_call_audio_first_window_t4_ParamLimits

0xecc7,	// (0x00082e2f) popup_call_audio_first_window_t4

0xed53,	// (0x00082ebb) popup_call_audio_first_window_t5_ParamLimits

0xed53,	// (0x00082ebb) popup_call_audio_first_window_t5

0x0002,

0xf114,	// (0x0008327c) popup_call_audio_first_window_t_ParamLimits

0xf114,	// (0x0008327c) popup_call_audio_first_window_t

0xed82,	// (0x00082eea) bg_popup_call_pane_cp02

0xed8c,	// (0x00082ef4) call_type_pane_cp023

0xed94,	// (0x00082efc) popup_call_audio_wait_window_g1

0xed9c,	// (0x00082f04) popup_call_audio_wait_window_g2

0x0001,

0xf11b,	// (0x00083283) popup_call_audio_wait_window_g

0xeda4,	// (0x00082f0c) popup_call_audio_wait_window_t3

0xedb2,	// (0x00082f1a) bg_popup_call_pane_cp03_ParamLimits

0xedb2,	// (0x00082f1a) bg_popup_call_pane_cp03

0xee12,	// (0x00082f7a) call_thumbnail_pane_cp011_ParamLimits

0xee12,	// (0x00082f7a) call_thumbnail_pane_cp011

0xee1e,	// (0x00082f86) call_type_pane_cp034_ParamLimits

0xee1e,	// (0x00082f86) call_type_pane_cp034

0xee5a,	// (0x00082fc2) popup_call_audio_second_window_g1_ParamLimits

0xee5a,	// (0x00082fc2) popup_call_audio_second_window_g1

0xee96,	// (0x00082ffe) popup_call_audio_second_window_g2_ParamLimits

0xee96,	// (0x00082ffe) popup_call_audio_second_window_g2

0x0001,

0xf120,	// (0x00083288) popup_call_audio_second_window_g_ParamLimits

0xf120,	// (0x00083288) popup_call_audio_second_window_g

0xeed2,	// (0x0008303a) popup_call_audio_second_window_t1_ParamLimits

0xeed2,	// (0x0008303a) popup_call_audio_second_window_t1

0xef53,	// (0x000830bb) popup_call_audio_second_window_t2_ParamLimits

0xef53,	// (0x000830bb) popup_call_audio_second_window_t2

0xef89,	// (0x000830f1) popup_call_audio_second_window_t3_ParamLimits

0xef89,	// (0x000830f1) popup_call_audio_second_window_t3

0x0002,

0xf125,	// (0x0008328d) popup_call_audio_second_window_t_ParamLimits

0xf125,	// (0x0008328d) popup_call_audio_second_window_t

0xed82,	// (0x00082eea) bg_popup_call_pane_cp04

0xefbf,	// (0x00083127) list_conf_pane

0xefc7,	// (0x0008312f) popup_call_audio_conf_window_t1

0xefd5,	// (0x0008313d) call_thumbnail_pane_g1

0xefdd,	// (0x00083145) bg_pinb_pane_ParamLimits

0xefdd,	// (0x00083145) bg_pinb_pane

0xefeb,	// (0x00083153) find_pinb_pane

0xeff4,	// (0x0008315c) listscroll_pinb_pane_ParamLimits

0xeff4,	// (0x0008315c) listscroll_pinb_pane

0xf003,	// (0x0008316b) pinb_bg_pane_g1

0x1adc,	// (0x00075c44) pinb_bg_pane_g2

0x1ae8,	// (0x00075c50) pinb_bg_pane_g3

0x1af4,	// (0x00075c5c) pinb_bg_pane_g4

0x1b00,	// (0x00075c68) pinb_bg_pane_g5

0x1b0c,	// (0x00075c74) pinb_bg_pane_g6

0x1b17,	// (0x00075c7f) pinb_bg_pane_g7

0x1b22,	// (0x00075c8a) pinb_bg_pane_g8

0x1b2d,	// (0x00075c95) pinb_bg_pane_g9

0x1b37,	// (0x00075c9f) pinb_bg_pane_g10

0x0009,

0xf12c,	// (0x00083294) pinb_bg_pane_g

0x1b4c,	// (0x00075cb4) grid_pinb_pane

0x1b55,	// (0x00075cbd) list_pinb_pane

0x1b5e,	// (0x00075cc6) scroll_pane_cp01_ParamLimits

0x1b5e,	// (0x00075cc6) scroll_pane_cp01

0xf015,	// (0x0008317d) find_pinb_pane_g1_ParamLimits

0xf015,	// (0x0008317d) find_pinb_pane_g1

0xf02d,	// (0x00083195) find_pinb_pane_t1

0xf03f,	// (0x000831a7) find_pinb_pane_t2

0x0001,

0xf146,	// (0x000832ae) find_pinb_pane_t

0xf054,	// (0x000831bc) input_focus_pane_cp01_ParamLimits

0xf054,	// (0x000831bc) input_focus_pane_cp01

0x1b70,	// (0x00075cd8) cell_pinb_pane_ParamLimits

0x1b70,	// (0x00075cd8) cell_pinb_pane

0x1ba2,	// (0x00075d0a) cell_pinb_pane_g1_ParamLimits

0x1ba2,	// (0x00075d0a) cell_pinb_pane_g1

0x1bb2,	// (0x00075d1a) cell_pinb_pane_g2_ParamLimits

0x1bb2,	// (0x00075d1a) cell_pinb_pane_g2

0xf060,	// (0x000831c8) cell_pinb_pane_g3_ParamLimits

0xf060,	// (0x000831c8) cell_pinb_pane_g3

0x0002,

0xf14b,	// (0x000832b3) cell_pinb_pane_g_ParamLimits

0xf14b,	// (0x000832b3) cell_pinb_pane_g

0xed82,	// (0x00082eea) grid_highlight_pane_cp01

0x1bbe,	// (0x00075d26) list_pinb_item_pane_ParamLimits

0x1bbe,	// (0x00075d26) list_pinb_item_pane

0xed82,	// (0x00082eea) list_highlight_pane_cp02

0xf06c,	// (0x000831d4) list_pinb_item_pane_g1_ParamLimits

0xf06c,	// (0x000831d4) list_pinb_item_pane_g1

0xf079,	// (0x000831e1) list_pinb_item_pane_g2_ParamLimits

0xf079,	// (0x000831e1) list_pinb_item_pane_g2

0x1bd2,	// (0x00075d3a) list_pinb_item_pane_g3_ParamLimits

0x1bd2,	// (0x00075d3a) list_pinb_item_pane_g3

0xf085,	// (0x000831ed) list_pinb_item_pane_g4_ParamLimits

0xf085,	// (0x000831ed) list_pinb_item_pane_g4

0x0003,

0xf152,	// (0x000832ba) list_pinb_item_pane_g_ParamLimits

0xf152,	// (0x000832ba) list_pinb_item_pane_g

0xf091,	// (0x000831f9) list_pinb_item_pane_t1_ParamLimits

0xf091,	// (0x000831f9) list_pinb_item_pane_t1

0x1c01,	// (0x00075d69) calc_display_pane

0x1c29,	// (0x00075d91) calc_paper_pane

0x1c4c,	// (0x00075db4) grid_calc_pane

0xed82,	// (0x00082eea) bg_list_pane_cp01

0x1c7a,	// (0x00075de2) clock_g1

0x1c82,	// (0x00075dea) clock_g2

0x0001,

0xf15b,	// (0x000832c3) clock_g

0x1c8a,	// (0x00075df2) clock_t1_ParamLimits

0x1c8a,	// (0x00075df2) clock_t1

0x1c9f,	// (0x00075e07) clock_t2_ParamLimits

0x1c9f,	// (0x00075e07) clock_t2

0x1cb1,	// (0x00075e19) clock_t3_ParamLimits

0x1cb1,	// (0x00075e19) clock_t3

0x1cc3,	// (0x00075e2b) clock_t4_ParamLimits

0x1cc3,	// (0x00075e2b) clock_t4

0x1cd5,	// (0x00075e3d) clock_t5_ParamLimits

0x1cd5,	// (0x00075e3d) clock_t5

0x1cea,	// (0x00075e52) clock_t6_ParamLimits

0x1cea,	// (0x00075e52) clock_t6

0x1cfc,	// (0x00075e64) clock_t7_ParamLimits

0x1cfc,	// (0x00075e64) clock_t7

0x1d0e,	// (0x00075e76) clock_t8_ParamLimits

0x1d0e,	// (0x00075e76) clock_t8

0x1d22,	// (0x00075e8a) clock_t9_ParamLimits

0x1d22,	// (0x00075e8a) clock_t9

0x0008,

0xf160,	// (0x000832c8) clock_t_ParamLimits

0xf160,	// (0x000832c8) clock_t

0xf0a8,	// (0x00083210) popup_clock_analogue_window_cp02

0xf0a8,	// (0x00083210) popup_clock_digital_window_cp01

0xf0b0,	// (0x00083218) listscroll_help_pane

0xed82,	// (0x00082eea) phob_pre_status_pane

0xf0ba,	// (0x00083222) grid_qdial_pane

0xed82,	// (0x00082eea) listscroll_mce_pane

0xf0c4,	// (0x0008322c) bg_notes_pane

0xf0ce,	// (0x00083236) list_notes_pane

0x1d36,	// (0x00075e9e) scroll_pane_cp06

0xf0d8,	// (0x00083240) bg_calc_paper_pane

0xaba5,	// (0x0007ed0d) list_calc_pane

0x1d41,	// (0x00075ea9) bg_calc_display_pane

0x1d4d,	// (0x00075eb5) calc_display_pane_t1

0x1d5f,	// (0x00075ec7) calc_display_pane_t2

0xabbf,	// (0x0007ed27) calc_display_pane_t3

0x0002,

0xf173,	// (0x000832db) calc_display_pane_t

0x1d71,	// (0x00075ed9) cell_calc_pane_ParamLimits

0x1d71,	// (0x00075ed9) cell_calc_pane

0x1da6,	// (0x00075f0e) bg_calc_paper_pane_g1

0x1db2,	// (0x00075f1a) bg_calc_paper_pane_g2

0x1dbe,	// (0x00075f26) bg_calc_paper_pane_g3

0x1dca,	// (0x00075f32) bg_calc_paper_pane_g4

0x1dd6,	// (0x00075f3e) bg_calc_paper_pane_g5

0x1de2,	// (0x00075f4a) bg_calc_paper_pane_g6

0x1df1,	// (0x00075f59) bg_calc_paper_pane_g7

0x1e00,	// (0x00075f68) bg_calc_paper_pane_g8

0x0007,

0xf17a,	// (0x000832e2) bg_calc_paper_pane_g

0x1e13,	// (0x00075f7b) calc_bg_paper_pane_g9

0x1e26,	// (0x00075f8e) list_calc_item_pane_ParamLimits

0x1e26,	// (0x00075f8e) list_calc_item_pane

0x1e3c,	// (0x00075fa4) list_calc_item_pane_g1

0xabd1,	// (0x0007ed39) list_calc_item_pane_t1_ParamLimits

0xabd1,	// (0x0007ed39) list_calc_item_pane_t1

0x1e49,	// (0x00075fb1) list_calc_item_pane_t2_ParamLimits

0x1e49,	// (0x00075fb1) list_calc_item_pane_t2

0x0001,

0xf18b,	// (0x000832f3) list_calc_item_pane_t_ParamLimits

0xf18b,	// (0x000832f3) list_calc_item_pane_t

0x1e63,	// (0x00075fcb) cell_calc_pane_g1

0x1e85,	// (0x00075fed) grid_highlight_pane_cp02

0x1ea7,	// (0x0007600f) bg_calc_display_pane_g1

0xabe3,	// (0x0007ed4b) bg_calc_display_pane_g2

0x1eb0,	// (0x00076018) bg_calc_display_pane_g3

0x0002,

0xf195,	// (0x000832fd) bg_calc_display_pane_g

0x1eb9,	// (0x00076021) cell_qdial_pane_ParamLimits

0x1eb9,	// (0x00076021) cell_qdial_pane

0x1ecd,	// (0x00076035) cell_qdial_pane_g1_ParamLimits

0x1ecd,	// (0x00076035) cell_qdial_pane_g1

0x1ee3,	// (0x0007604b) cell_qdial_pane_g2_ParamLimits

0x1ee3,	// (0x0007604b) cell_qdial_pane_g2

0x1ef4,	// (0x0007605c) cell_qdial_pane_g3_ParamLimits

0x1ef4,	// (0x0007605c) cell_qdial_pane_g3

0x0003,

0xf19c,	// (0x00083304) cell_qdial_pane_g_ParamLimits

0xf19c,	// (0x00083304) cell_qdial_pane_g

0x1f16,	// (0x0007607e) cell_qdial_pane_t1_ParamLimits

0x1f16,	// (0x0007607e) cell_qdial_pane_t1

0x1f2e,	// (0x00076096) cell_qdial_pane_t2_ParamLimits

0x1f2e,	// (0x00076096) cell_qdial_pane_t2

0x1f41,	// (0x000760a9) cell_qdial_pane_t3_ParamLimits

0x1f41,	// (0x000760a9) cell_qdial_pane_t3

0x0002,

0xf1a5,	// (0x0008330d) cell_qdial_pane_t_ParamLimits

0xf1a5,	// (0x0008330d) cell_qdial_pane_t

0xed82,	// (0x00082eea) grid_highlight_pane_cp04

0x1f54,	// (0x000760bc) thumbnail_qdial_pane_ParamLimits

0x1f54,	// (0x000760bc) thumbnail_qdial_pane

0x1fb0,	// (0x00076118) list_help_pane

0x1fb9,	// (0x00076121) scroll_pane_cp02

0x1fc2,	// (0x0007612a) help_list_pane_t1_ParamLimits

0x1fc2,	// (0x0007612a) help_list_pane_t1

0xabed,	// (0x0007ed55) bg_notes_pane_g2

0xabf5,	// (0x0007ed5d) bg_notes_pane_g3

0xabfd,	// (0x0007ed65) notes_bg_pane_g1

0xac05,	// (0x0007ed6d) notes_bg_pane_g4

0xac0d,	// (0x0007ed75) notes_bg_pane_g5

0xac15,	// (0x0007ed7d) notes_bg_pane_g6

0xac1d,	// (0x0007ed85) notes_bg_pane_g7

0xac25,	// (0x0007ed8d) notes_bg_pane_g8

0xac2d,	// (0x0007ed95) notes_bg_pane_g9

0x0006,

0xf1c3,	// (0x0008332b) notes_bg_pane_g

0x1fe2,	// (0x0007614a) list_notes_text_pane_ParamLimits

0x1fe2,	// (0x0007614a) list_notes_text_pane

0x1ff9,	// (0x00076161) list_notes_text_pane_g1

0x0d79,	// (0x00074ee1) list_notes_text_pane_t1

0x1d41,	// (0x00075ea9) listscroll_cale_week_pane

0x2030,	// (0x00076198) bg_cale_heading_pane

0x2048,	// (0x000761b0) bg_cale_pane_cp01

0x2061,	// (0x000761c9) cale_week_corner_pane

0x2072,	// (0x000761da) cale_week_day_heading_pane

0x208a,	// (0x000761f2) cale_week_scroll_pane_g1

0x209f,	// (0x00076207) cale_week_scroll_pane_g2

0x20b0,	// (0x00076218) cale_week_scroll_pane_g3

0x20c1,	// (0x00076229) cale_week_scroll_pane_g4

0x20d2,	// (0x0007623a) cale_week_scroll_pane_g5

0x20e5,	// (0x0007624d) cale_week_scroll_pane_g6

0x20f8,	// (0x00076260) cale_week_scroll_pane_g7

0x210b,	// (0x00076273) cale_week_scroll_pane_g8

0x211e,	// (0x00076286) cale_week_scroll_pane_g9

0x212f,	// (0x00076297) cale_week_scroll_pane_g10

0x2140,	// (0x000762a8) cale_week_scroll_pane_g11

0x2151,	// (0x000762b9) cale_week_scroll_pane_g12

0x2162,	// (0x000762ca) cale_week_scroll_pane_g13

0x2173,	// (0x000762db) cale_week_scroll_pane_g14

0x2184,	// (0x000762ec) cale_week_scroll_pane_g15

0x000e,

0xf1d2,	// (0x0008333a) cale_week_scroll_pane_g

0x2195,	// (0x000762fd) cale_week_time_pane

0x21a8,	// (0x00076310) grid_cale_week_pane

0x21cf,	// (0x00076337) scroll_pane_cp08

0x21e9,	// (0x00076351) cell_cale_week_pane_ParamLimits

0x21e9,	// (0x00076351) cell_cale_week_pane

0x2229,	// (0x00076391) cale_week_day_heading_pane_t1

0x223d,	// (0x000763a5) cale_week_day_heading_pane_t2

0x2251,	// (0x000763b9) cale_week_day_heading_pane_t3

0x2265,	// (0x000763cd) cale_week_day_heading_pane_t4

0x2279,	// (0x000763e1) cale_week_day_heading_pane_t5

0x228d,	// (0x000763f5) cale_week_day_heading_pane_t6

0x22a3,	// (0x0007640b) cale_week_day_heading_pane_t7

0x0006,

0xf1f1,	// (0x00083359) cale_week_day_heading_pane_t

0x22b7,	// (0x0007641f) bg_cale_side_pane

0x22c5,	// (0x0007642d) cale_week_time_pane_t1

0x22dd,	// (0x00076445) cale_week_time_pane_t2

0x22f5,	// (0x0007645d) cale_week_time_pane_t3

0x230d,	// (0x00076475) cale_week_time_pane_t4

0x2325,	// (0x0007648d) cale_week_time_pane_t5

0x233d,	// (0x000764a5) cale_week_time_pane_t6

0x2355,	// (0x000764bd) cale_week_time_pane_t7

0x236d,	// (0x000764d5) cale_week_time_pane_t8

0x0007,

0xf200,	// (0x00083368) cale_week_time_pane_t

0x2385,	// (0x000764ed) cell_cale_week_pane_g2

0x239e,	// (0x00076506) cell_cale_week_pane_g3_ParamLimits

0x239e,	// (0x00076506) cell_cale_week_pane_g3

0x23b6,	// (0x0007651e) grid_highlight_pane_cp07

0x23be,	// (0x00076526) listscroll_gms_pane

0x23c8,	// (0x00076530) grid_gms_pane

0x23d1,	// (0x00076539) listscroll_gms_pane_g1

0x23d9,	// (0x00076541) listscroll_gms_pane_g2

0x0001,

0xf211,	// (0x00083379) listscroll_gms_pane_g

0x23e1,	// (0x00076549) scroll_pane_cp010

0x23ec,	// (0x00076554) cell_gms_pane_ParamLimits

0x23ec,	// (0x00076554) cell_gms_pane

0x23ff,	// (0x00076567) cell_gms_pane_g1

0x2407,	// (0x0007656f) cell_gms_pane_g2

0x1ff9,	// (0x00076161) cell_gms_pane_g3

0x240f,	// (0x00076577) cell_gms_pane_g4

0x0003,

0xf216,	// (0x0008337e) cell_gms_pane_g

0x2418,	// (0x00076580) grid_highlight_pane_cp09

0x5a34,	// (0x00079b9c) phob_pre_status_pane_g1

0x5a3c,	// (0x00079ba4) phob_pre_status_pane_g2

0x5a44,	// (0x00079bac) phob_pre_status_pane_g3

0x5a4c,	// (0x00079bb4) phob_pre_status_pane_g4

0x0004,

0xf605,	// (0x0008376d) phob_pre_status_pane_g

0x5a5e,	// (0x00079bc6) phob_pre_status_pane_t1

0x5a6c,	// (0x00079bd4) phob_pre_status_pane_t2

0x5a7c,	// (0x00079be4) phob_pre_status_pane_t3

0x0002,

0xf610,	// (0x00083778) phob_pre_status_pane_t

0xed82,	// (0x00082eea) bg_list_pane_cp05

0xac3d,	// (0x0007eda5) grid_vorec_pane

0xac45,	// (0x0007edad) vorec_t1

0xac53,	// (0x0007edbb) vorec_t2

0xac61,	// (0x0007edc9) vorec_t3

0xac6f,	// (0x0007edd7) vorec_t4

0xac7d,	// (0x0007ede5) vorec_t5

0xac8b,	// (0x0007edf3) vorec_t6

0x0006,

0xf21f,	// (0x00083387) vorec_t

0xaca7,	// (0x0007ee0f) wait_bar_pane_cp01

0x2420,	// (0x00076588) cell_vorec_pane_ParamLimits

0x2420,	// (0x00076588) cell_vorec_pane

0x2433,	// (0x0007659b) cell_vorec_pane_g1

0xed82,	// (0x00082eea) grid_highlight_pane_cp05

0x2455,	// (0x000765bd) cams_zoom_pane

0x2464,	// (0x000765cc) image_vga_pane

0x247e,	// (0x000765e6) main_camera_pane_g1

0x2490,	// (0x000765f8) main_camera_pane_g2

0x24a2,	// (0x0007660a) main_camera_pane_g3

0x24b4,	// (0x0007661c) main_camera_pane_g4

0x24c6,	// (0x0007662e) main_camera_pane_g5

0x24d8,	// (0x00076640) main_camera_pane_g6

0x24ea,	// (0x00076652) main_camera_pane_g7

0x0007,

0xf22e,	// (0x00083396) main_camera_pane_g

0x2508,	// (0x00076670) main_camera_pane_t1

0x251e,	// (0x00076686) main_camera_pane_t2

0x0001,

0xf23f,	// (0x000833a7) main_camera_pane_t

0x255a,	// (0x000766c2) cams_zoom_pane_cp_ParamLimits

0x255a,	// (0x000766c2) cams_zoom_pane_cp

0x2582,	// (0x000766ea) image_cif_pane_ParamLimits

0x2582,	// (0x000766ea) image_cif_pane

0x25bd,	// (0x00076725) image_subqcif_pane

0x25c5,	// (0x0007672d) main_video_pane_g1_ParamLimits

0x25c5,	// (0x0007672d) main_video_pane_g1

0x25e9,	// (0x00076751) main_video_pane_g2_ParamLimits

0x25e9,	// (0x00076751) main_video_pane_g2

0x261f,	// (0x00076787) main_video_pane_g3_ParamLimits

0x261f,	// (0x00076787) main_video_pane_g3

0x264f,	// (0x000767b7) main_video_pane_g4_ParamLimits

0x264f,	// (0x000767b7) main_video_pane_g4

0x267f,	// (0x000767e7) main_video_pane_g5_ParamLimits

0x267f,	// (0x000767e7) main_video_pane_g5

0x2699,	// (0x00076801) main_video_pane_g6_ParamLimits

0x2699,	// (0x00076801) main_video_pane_g6

0x0006,

0xf244,	// (0x000833ac) main_video_pane_g_ParamLimits

0xf244,	// (0x000833ac) main_video_pane_g

0x26c4,	// (0x0007682c) main_video_pane_t1_ParamLimits

0x26c4,	// (0x0007682c) main_video_pane_t1

0x270d,	// (0x00076875) cams_zoom_pane_g1

0x2716,	// (0x0007687e) cams_zoom_pane_g2

0x271f,	// (0x00076887) cams_zoom_pane_g3

0x2728,	// (0x00076890) cams_zoom_pane_g4

0x0003,

0xf253,	// (0x000833bb) cams_zoom_pane_g

0x2745,	// (0x000768ad) grid_cams_pane

0x275f,	// (0x000768c7) linegrid_cams_pane

0x2772,	// (0x000768da) cell_cams_pane_ParamLimits

0x2772,	// (0x000768da) cell_cams_pane

0x2792,	// (0x000768fa) cams_burst_image_pane

0x279a,	// (0x00076902) cell_cams_pane_g1

0xed82,	// (0x00082eea) grid_highlight_pane_cp03

0x1e63,	// (0x00075fcb) mp_bg_pane_g1

0xed82,	// (0x00082eea) bg_list_pane_cp03

0xb5ac,	// (0x0007f714) bg_mp_pane

0xb5b4,	// (0x0007f71c) grid_mp_pane

0xb5bc,	// (0x0007f724) media_player_g1

0xb5c4,	// (0x0007f72c) media_player_t1

0xb5d2,	// (0x0007f73a) media_player_t2

0xb5e0,	// (0x0007f748) media_player_t3

0xb5ee,	// (0x0007f756) media_player_t4

0xb5fc,	// (0x0007f764) media_player_t5

0xb60a,	// (0x0007f772) media_player_t6

0xb618,	// (0x0007f780) media_player_t7

0x0006,

0xf5ef,	// (0x00083757) media_player_t

0xb626,	// (0x0007f78e) wait_bar_pane_cp02

0xf5d4,	// (0x0008373c) main_usb_pane_t

0x5a2b,	// (0x00079b93) cell_mp_pane

0x1e63,	// (0x00075fcb) cell_mp_pane_g1

0xed82,	// (0x00082eea) grid_highlight_pane_cp06

0x27a2,	// (0x0007690a) grid_skin_colour_pane

0x27aa,	// (0x00076912) list_highlight_pane_cp03

0x27b2,	// (0x0007691a) skin_g1

0x27ba,	// (0x00076922) skin_t1

0x27c9,	// (0x00076931) skin_t2

0x0001,

0xf288,	// (0x000833f0) skin_t

0x27d7,	// (0x0007693f) cell_skin_colour_pane_ParamLimits

0x27d7,	// (0x0007693f) cell_skin_colour_pane

0x27f7,	// (0x0007695f) cell_skin_colour_pane_g1

0x2862,	// (0x000769ca) call_video_g1_ParamLimits

0x2862,	// (0x000769ca) call_video_g1

0x287e,	// (0x000769e6) call_video_g2_ParamLimits

0x287e,	// (0x000769e6) call_video_g2

0x0001,

0xf28d,	// (0x000833f5) call_video_g_ParamLimits

0xf28d,	// (0x000833f5) call_video_g

0x28d0,	// (0x00076a38) call_video_uplink_pane_cp1_ParamLimits

0x28d0,	// (0x00076a38) call_video_uplink_pane_cp1

0x2935,	// (0x00076a9d) call_video_uplink_pane_cp2

0x2977,	// (0x00076adf) video_down_crop_pane_ParamLimits

0x2977,	// (0x00076adf) video_down_crop_pane

0x2a60,	// (0x00076bc8) video_down_pane_ParamLimits

0x2a60,	// (0x00076bc8) video_down_pane

0x2b57,	// (0x00076cbf) video_down_subqcif_pane_ParamLimits

0x2b57,	// (0x00076cbf) video_down_subqcif_pane

0x2b6f,	// (0x00076cd7) video_down_subqcif_pane_cp_ParamLimits

0x2b6f,	// (0x00076cd7) video_down_subqcif_pane_cp

0x2baa,	// (0x00076d12) im_reading_pane_ParamLimits

0x2baa,	// (0x00076d12) im_reading_pane

0x2bbc,	// (0x00076d24) im_writing_pane_ParamLimits

0x2bbc,	// (0x00076d24) im_writing_pane

0x2bda,	// (0x00076d42) im_reading_pane_t1

0x2c16,	// (0x00076d7e) list_im_pane

0x2c27,	// (0x00076d8f) scroll_pane_cp07

0x2c40,	// (0x00076da8) im_writing_pane_t1_ParamLimits

0x2c40,	// (0x00076da8) im_writing_pane_t1

0x2c55,	// (0x00076dbd) im_writing_pane_t2_ParamLimits

0x2c55,	// (0x00076dbd) im_writing_pane_t2

0x0001,

0xf297,	// (0x000833ff) im_writing_pane_t_ParamLimits

0xf297,	// (0x000833ff) im_writing_pane_t

0xed82,	// (0x00082eea) input_focus_pane_cp04

0xed82,	// (0x00082eea) input_focus_pane_cp05

0x2c72,	// (0x00076dda) list_im_single_pane_ParamLimits

0x2c72,	// (0x00076dda) list_im_single_pane

0x2c88,	// (0x00076df0) list_single_im_pane_t1

0x59eb,	// (0x00079b53) blid_accuracy_pane

0x59f3,	// (0x00079b5b) blid_compass_pane

0x59fd,	// (0x00079b65) main_location_t1

0x5a0d,	// (0x00079b75) main_location_t2

0x5a1d,	// (0x00079b85) main_location_t3

0x0002,

0xf5fe,	// (0x00083766) main_location_t

0xed82,	// (0x00082eea) aid_levels_location

0x1e63,	// (0x00075fcb) blid_accuracy_pane_g1

0x1e63,	// (0x00075fcb) blid_accuracy_pane_g2

0x0001,

0xf2f9,	// (0x00083461) blid_accuracy_pane_g

0x2cc2,	// (0x00076e2a) wml_content_pane

0x2d00,	// (0x00076e68) wml_button_pane_ParamLimits

0x2d00,	// (0x00076e68) wml_button_pane

0x2d14,	// (0x00076e7c) wml_list_single_large_pane_ParamLimits

0x2d14,	// (0x00076e7c) wml_list_single_large_pane

0x2d2b,	// (0x00076e93) wml_list_single_medium_pane_ParamLimits

0x2d2b,	// (0x00076e93) wml_list_single_medium_pane

0x2d43,	// (0x00076eab) wml_list_single_small_pane_ParamLimits

0x2d43,	// (0x00076eab) wml_list_single_small_pane

0x2d61,	// (0x00076ec9) wml_selection_box_pane_ParamLimits

0x2d61,	// (0x00076ec9) wml_selection_box_pane

0x2d74,	// (0x00076edc) wml_list_single_pane_t1

0x2d83,	// (0x00076eeb) wml_list_single_medium_pane_t1

0x2d92,	// (0x00076efa) wml_list_single_large_pane_t1

0x2da1,	// (0x00076f09) input_focus_pane_cp02_ParamLimits

0x2da1,	// (0x00076f09) input_focus_pane_cp02

0x2db4,	// (0x00076f1c) wml_selection_box_pane_g1

0x2dbd,	// (0x00076f25) wml_selection_box_pane_t1_ParamLimits

0x2dbd,	// (0x00076f25) wml_selection_box_pane_t1

0xefdd,	// (0x00083145) bg_wml_button_pane_ParamLimits

0xefdd,	// (0x00083145) bg_wml_button_pane

0x2dd5,	// (0x00076f3d) wml_button_pane_g1

0x2ddd,	// (0x00076f45) wml_button_pane_t1

0x2dd5,	// (0x00076f3d) wml_button_bg_pane_g1

0x2ded,	// (0x00076f55) wml_button_bg_pane_g2

0x2df5,	// (0x00076f5d) wml_button_bg_pane_g3

0x2dfd,	// (0x00076f65) wml_button_bg_pane_g4

0x2e05,	// (0x00076f6d) wml_button_bg_pane_g5

0x2e0d,	// (0x00076f75) wml_button_bg_pane_g6

0x2e15,	// (0x00076f7d) wml_button_bg_pane_g7

0x2e1d,	// (0x00076f85) wml_button_bg_pane_g8

0x2e25,	// (0x00076f8d) wml_button_bg_pane_g9

0x0008,

0xf29c,	// (0x00083404) wml_button_bg_pane_g

0x2e2d,	// (0x00076f95) bg_list_pane_cp02

0x2e35,	// (0x00076f9d) mce_header_pane_ParamLimits

0x2e35,	// (0x00076f9d) mce_header_pane

0x2e4b,	// (0x00076fb3) mce_icon_pane

0x2e4b,	// (0x00076fb3) mce_image_pane

0x2e54,	// (0x00076fbc) mce_text_pane_ParamLimits

0x2e54,	// (0x00076fbc) mce_text_pane

0x2e67,	// (0x00076fcf) scroll_pane_cp03

0x2cf8,	// (0x00076e60) scroll_pane_cp04

0x2e71,	// (0x00076fd9) scroll_pane_cp05_ParamLimits

0x2e71,	// (0x00076fd9) scroll_pane_cp05

0x2e7d,	// (0x00076fe5) mce_header_field_pane_ParamLimits

0x2e7d,	// (0x00076fe5) mce_header_field_pane

0x2e94,	// (0x00076ffc) mce_header_field_pane_2_ParamLimits

0x2e94,	// (0x00076ffc) mce_header_field_pane_2

0x2eaa,	// (0x00077012) mce_header_field_pane_3

0x2eb2,	// (0x0007701a) list_single_mce_message_pane_ParamLimits

0x2eb2,	// (0x0007701a) list_single_mce_message_pane

0x2eca,	// (0x00077032) list_single_mce_smart_pane_ParamLimits

0x2eca,	// (0x00077032) list_single_mce_smart_pane

0x2eed,	// (0x00077055) input_focus_pane_cp03

0x2ef6,	// (0x0007705e) list_header_data_pane

0x2efe,	// (0x00077066) mce_header_field_pane_t1

0x2f0e,	// (0x00077076) list_single_mce_header_pane_ParamLimits

0x2f0e,	// (0x00077076) list_single_mce_header_pane

0x2f22,	// (0x0007708a) list_single_mce_header_pane_t1

0x2f31,	// (0x00077099) list_single_mce_message_pane_g1

0x2f39,	// (0x000770a1) list_single_mce_message_pane_t1

0x2f65,	// (0x000770cd) bg_cale_heading_pane_cp01_ParamLimits

0x2f65,	// (0x000770cd) bg_cale_heading_pane_cp01

0x2f88,	// (0x000770f0) bg_cale_pane_cp02_ParamLimits

0x2f88,	// (0x000770f0) bg_cale_pane_cp02

0x2fab,	// (0x00077113) cale_month_corner_pane

0x2fc1,	// (0x00077129) cale_month_day_heading_pane_ParamLimits

0x2fc1,	// (0x00077129) cale_month_day_heading_pane

0x2ff4,	// (0x0007715c) cale_month_pane_g1_ParamLimits

0x2ff4,	// (0x0007715c) cale_month_pane_g1

0x3010,	// (0x00077178) cale_month_pane_g2_ParamLimits

0x3010,	// (0x00077178) cale_month_pane_g2

0x302b,	// (0x00077193) cale_month_pane_g3_ParamLimits

0x302b,	// (0x00077193) cale_month_pane_g3

0x3057,	// (0x000771bf) cale_month_pane_g4_ParamLimits

0x3057,	// (0x000771bf) cale_month_pane_g4

0x3083,	// (0x000771eb) cale_month_pane_g5_ParamLimits

0x3083,	// (0x000771eb) cale_month_pane_g5

0x30b7,	// (0x0007721f) cale_month_pane_g6_ParamLimits

0x30b7,	// (0x0007721f) cale_month_pane_g6

0x30f3,	// (0x0007725b) cale_month_pane_g7_ParamLimits

0x30f3,	// (0x0007725b) cale_month_pane_g7

0x312f,	// (0x00077297) cale_month_pane_g8_ParamLimits

0x312f,	// (0x00077297) cale_month_pane_g8

0x316b,	// (0x000772d3) cale_month_pane_g9_ParamLimits

0x316b,	// (0x000772d3) cale_month_pane_g9

0x31a5,	// (0x0007730d) cale_month_pane_g10_ParamLimits

0x31a5,	// (0x0007730d) cale_month_pane_g10

0x31df,	// (0x00077347) cale_month_pane_g11_ParamLimits

0x31df,	// (0x00077347) cale_month_pane_g11

0x3219,	// (0x00077381) cale_month_pane_g12_ParamLimits

0x3219,	// (0x00077381) cale_month_pane_g12

0x3253,	// (0x000773bb) cale_month_pane_g13_ParamLimits

0x3253,	// (0x000773bb) cale_month_pane_g13

0x000c,

0xf2af,	// (0x00083417) cale_month_pane_g_ParamLimits

0xf2af,	// (0x00083417) cale_month_pane_g

0x329f,	// (0x00077407) cale_month_week_pane

0x32b2,	// (0x0007741a) grid_cale_month_pane_ParamLimits

0x32b2,	// (0x0007741a) grid_cale_month_pane

0x32e0,	// (0x00077448) cale_month_day_heading_pane_t1

0x333e,	// (0x000774a6) cale_month_day_heading_pane_t2

0x33a3,	// (0x0007750b) cale_month_day_heading_pane_t3

0x3408,	// (0x00077570) cale_month_day_heading_pane_t4

0x346d,	// (0x000775d5) cale_month_day_heading_pane_t5

0x34e2,	// (0x0007764a) cale_month_day_heading_pane_t6

0x3557,	// (0x000776bf) cale_month_day_heading_pane_t7

0x0006,

0xf2ca,	// (0x00083432) cale_month_day_heading_pane_t

0x22b7,	// (0x0007641f) bg_cale_side_pane_cp01

0x35cc,	// (0x00077734) cale_month_week_pane_t1

0x35e3,	// (0x0007774b) cale_month_week_pane_t2

0x35fa,	// (0x00077762) cale_month_week_pane_t3

0x3611,	// (0x00077779) cale_month_week_pane_t4

0x3628,	// (0x00077790) cale_month_week_pane_t5

0x363f,	// (0x000777a7) cale_month_week_pane_t6

0x0005,

0xf2d9,	// (0x00083441) cale_month_week_pane_t

0x3656,	// (0x000777be) cell_cale_month_pane_ParamLimits

0x3656,	// (0x000777be) cell_cale_month_pane

0xad97,	// (0x0007eeff) cell_cale_month_pane_g1

0x372c,	// (0x00077894) cell_cale_month_pane_t1_ParamLimits

0x372c,	// (0x00077894) cell_cale_month_pane_t1

0x23b6,	// (0x0007651e) grid_highlight_pane_cp08

0x1e63,	// (0x00075fcb) main_smil_g1

0x3748,	// (0x000778b0) smil_status_pane

0x3753,	// (0x000778bb) smil_text_pane

0xb4c4,	// (0x0007f62c) bg_popup_call3_rect_pane_g8

0xb4cc,	// (0x0007f634) bg_popup_call3_rect_pane_g9

0x0008,

0xf592,	// (0x000836fa) bg_popup_call3_rect_pane_g

0xb74e,	// (0x0007f8b6) smil_status_volume_pane_g1

0x3767,	// (0x000778cf) smil_status_pane_t1

0xb781,	// (0x0007f8e9) volume_smil_pane

0x377e,	// (0x000778e6) list_smil_text_pane

0x3788,	// (0x000778f0) scroll_pane_cp011

0x3793,	// (0x000778fb) smil_text_list_pane_t1_ParamLimits

0x3793,	// (0x000778fb) smil_text_list_pane_t1

0xada3,	// (0x0007ef0b) aid_volume_smil_ParamLimits

0xada3,	// (0x0007ef0b) aid_volume_smil

0x1e63,	// (0x00075fcb) smil_volume_pane_g1

0x1e63,	// (0x00075fcb) smil_volume_pane_g2

0x0001,

0xf2f9,	// (0x00083461) smil_volume_pane_g

0x1d41,	// (0x00075ea9) listscroll_cale_day_pane

0x37e7,	// (0x0007794f) bg_cale_pane

0x37ff,	// (0x00077967) list_cale_pane

0x3810,	// (0x00077978) scroll_pane_cp09

0x3821,	// (0x00077989) cale_bg_pane_g1

0x3829,	// (0x00077991) cale_bg_pane_g2

0x3831,	// (0x00077999) cale_bg_pane_g3

0x3839,	// (0x000779a1) cale_bg_pane_g4

0x3841,	// (0x000779a9) cale_bg_pane_g5

0x3849,	// (0x000779b1) cale_bg_pane_g6

0x3851,	// (0x000779b9) cale_bg_pane_g7

0x3859,	// (0x000779c1) cale_bg_pane_g8

0x3861,	// (0x000779c9) cale_bg_pane_g9

0x0008,

0xf2fe,	// (0x00083466) cale_bg_pane_g

0x3869,	// (0x000779d1) list_cale_time_pane_ParamLimits

0x3869,	// (0x000779d1) list_cale_time_pane

0x387e,	// (0x000779e6) list_cale_time_pane_g1_ParamLimits

0x387e,	// (0x000779e6) list_cale_time_pane_g1

0x388a,	// (0x000779f2) list_cale_time_pane_g2_ParamLimits

0x388a,	// (0x000779f2) list_cale_time_pane_g2

0x3897,	// (0x000779ff) list_cale_time_pane_g3_ParamLimits

0x3897,	// (0x000779ff) list_cale_time_pane_g3

0x38b3,	// (0x00077a1b) list_cale_time_pane_g4_ParamLimits

0x38b3,	// (0x00077a1b) list_cale_time_pane_g4

0x38c1,	// (0x00077a29) list_cale_time_pane_g5_ParamLimits

0x38c1,	// (0x00077a29) list_cale_time_pane_g5

0x0005,

0xf311,	// (0x00083479) list_cale_time_pane_g_ParamLimits

0xf311,	// (0x00083479) list_cale_time_pane_g

0x38dc,	// (0x00077a44) list_cale_time_pane_t1_ParamLimits

0x38dc,	// (0x00077a44) list_cale_time_pane_t1

0x3904,	// (0x00077a6c) list_cale_time_pane_t2_ParamLimits

0x3904,	// (0x00077a6c) list_cale_time_pane_t2

0x3fda,	// (0x00078142) aid_blid_cardinal_pane

0x4024,	// (0x0007818c) compass_pane_t4

0x392c,	// (0x00077a94) list_cale_time_pane_t4_ParamLimits

0x392c,	// (0x00077a94) list_cale_time_pane_t4

0x4032,	// (0x0007819a) compass_pane_t5

0x4040,	// (0x000781a8) compass_pane_t6

0x404e,	// (0x000781b6) compass_pane_t7

0x40ce,	// (0x00078236) navi_pane_cc_t1

0x42eb,	// (0x00078453) aid_phob_thumbnail_center_pane

0x491d,	// (0x00078a85) main_postcard_pane_g4_ParamLimits

0x0002,

0xf31e,	// (0x00083486) list_cale_time_pane_t_ParamLimits

0xf31e,	// (0x00083486) list_cale_time_pane_t

0xe9b2,	// (0x00082b1a) bg_popup_window_pane_cp02_ParamLimits

0xe9b2,	// (0x00082b1a) bg_popup_window_pane_cp02

0x3954,	// (0x00077abc) heading_pane_cp01_ParamLimits

0x3954,	// (0x00077abc) heading_pane_cp01

0x3960,	// (0x00077ac8) loc_req_pane_ParamLimits

0x3960,	// (0x00077ac8) loc_req_pane

0x3970,	// (0x00077ad8) loc_type_pane_ParamLimits

0x3970,	// (0x00077ad8) loc_type_pane

0x3982,	// (0x00077aea) loc_type_pane_t1_ParamLimits

0x3982,	// (0x00077aea) loc_type_pane_t1

0x3994,	// (0x00077afc) loc_type_pane_t2_ParamLimits

0x3994,	// (0x00077afc) loc_type_pane_t2

0x39a6,	// (0x00077b0e) loc_type_pane_t3_ParamLimits

0x39a6,	// (0x00077b0e) loc_type_pane_t3

0x0002,

0xf325,	// (0x0008348d) loc_type_pane_t_ParamLimits

0xf325,	// (0x0008348d) loc_type_pane_t

0x39b8,	// (0x00077b20) list_loc_req_pane

0x39c2,	// (0x00077b2a) scroll_pane_cp012

0x39cd,	// (0x00077b35) list_single_loc_request_popup_menu_pane_ParamLimits

0x39cd,	// (0x00077b35) list_single_loc_request_popup_menu_pane

0x39da,	// (0x00077b42) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0x39da,	// (0x00077b42) list_single_loc_request_popup_menu_pane_g1

0x39e6,	// (0x00077b4e) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0x39e6,	// (0x00077b4e) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf32c,	// (0x00083494) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf32c,	// (0x00083494) list_single_loc_request_popup_menu_pane_g

0x39f2,	// (0x00077b5a) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0x39f2,	// (0x00077b5a) list_single_loc_request_popup_menu_pane_t1

0xefdd,	// (0x00083145) bg_popup_window_pane_cp03_ParamLimits

0xefdd,	// (0x00083145) bg_popup_window_pane_cp03

0x3a08,	// (0x00077b70) heading_loc_req_pane_ParamLimits

0x3a08,	// (0x00077b70) heading_loc_req_pane

0x3a14,	// (0x00077b7c) popup_dyc_status_message_window_g1_ParamLimits

0x3a14,	// (0x00077b7c) popup_dyc_status_message_window_g1

0x3a28,	// (0x00077b90) popup_dyc_status_message_window_t1_ParamLimits

0x3a28,	// (0x00077b90) popup_dyc_status_message_window_t1

0x3a3d,	// (0x00077ba5) popup_dyc_status_message_window_t2_ParamLimits

0x3a3d,	// (0x00077ba5) popup_dyc_status_message_window_t2

0x3a52,	// (0x00077bba) popup_dyc_status_message_window_t3_ParamLimits

0x3a52,	// (0x00077bba) popup_dyc_status_message_window_t3

0x0002,

0xf331,	// (0x00083499) popup_dyc_status_message_window_t_ParamLimits

0xf331,	// (0x00083499) popup_dyc_status_message_window_t

0xed82,	// (0x00082eea) bg_heading_pane_cp01

0x3a6e,	// (0x00077bd6) heading_loc_req_pane_g1

0x3a76,	// (0x00077bde) heading_loc_req_pane_g2

0x3a7e,	// (0x00077be6) heading_loc_req_pane_g3

0x0002,

0xf338,	// (0x000834a0) heading_loc_req_pane_g

0x3a86,	// (0x00077bee) heading_loc_req_pane_t1

0x3aad,	// (0x00077c15) bg_popup_sub_pane_cp01_ParamLimits

0x3aad,	// (0x00077c15) bg_popup_sub_pane_cp01

0x3abb,	// (0x00077c23) popup_cale_events_window_g1_ParamLimits

0x3abb,	// (0x00077c23) popup_cale_events_window_g1

0x3adb,	// (0x00077c43) popup_cale_events_window_g2_ParamLimits

0x3adb,	// (0x00077c43) popup_cale_events_window_g2

0x0001,

0xf36c,	// (0x000834d4) popup_cale_events_window_g_ParamLimits

0xf36c,	// (0x000834d4) popup_cale_events_window_g

0x3afb,	// (0x00077c63) popup_cale_events_window_t1_ParamLimits

0x3afb,	// (0x00077c63) popup_cale_events_window_t1

0x3b0d,	// (0x00077c75) popup_cale_events_window_t2_ParamLimits

0x3b0d,	// (0x00077c75) popup_cale_events_window_t2

0x3b4b,	// (0x00077cb3) popup_cale_events_window_t3_ParamLimits

0x3b4b,	// (0x00077cb3) popup_cale_events_window_t3

0x3b85,	// (0x00077ced) popup_cale_events_window_t4_ParamLimits

0x3b85,	// (0x00077ced) popup_cale_events_window_t4

0x0003,

0xf371,	// (0x000834d9) popup_cale_events_window_t_ParamLimits

0xf371,	// (0x000834d9) popup_cale_events_window_t

0x3bbb,	// (0x00077d23) call_type_pane

0x3bcb,	// (0x00077d33) popup_call_status_window_g1

0x3bdf,	// (0x00077d47) popup_call_status_window_g2

0x3bf3,	// (0x00077d5b) popup_call_status_window_g3

0x0002,

0xf37a,	// (0x000834e2) popup_call_status_window_g

0x3c03,	// (0x00077d6b) call_type_pane_g1

0x3c0c,	// (0x00077d74) call_type_pane_g2

0x0001,

0xf381,	// (0x000834e9) call_type_pane_g

0xed82,	// (0x00082eea) bg_popup_sub_pane_cp02

0x3c15,	// (0x00077d7d) listscroll_popup_wml_pane

0x3c1d,	// (0x00077d85) list_wml_pane

0x3c27,	// (0x00077d8f) scroll_pane_cp013

0x3c32,	// (0x00077d9a) list_single_graphic_popup_wml_pane_ParamLimits

0x3c32,	// (0x00077d9a) list_single_graphic_popup_wml_pane

0x1e63,	// (0x00075fcb) list_single_graphic_popup_wml_pane_g1

0x3c46,	// (0x00077dae) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf386,	// (0x000834ee) list_single_graphic_popup_wml_pane_g

0x3c4e,	// (0x00077db6) list_single_graphic_popup_wml_pane_t1

0x3c64,	// (0x00077dcc) aid_call_pane

0xefd5,	// (0x0008313d) popup_clock_analogue_window_g1

0xefd5,	// (0x0008313d) popup_clock_analogue_window_g2

0xae3c,	// (0x0007efa4) popup_clock_analogue_window_g3

0xae3c,	// (0x0007efa4) popup_clock_analogue_window_g4

0x1e63,	// (0x00075fcb) popup_clock_analogue_window_g5

0x0004,

0xf38b,	// (0x000834f3) popup_clock_analogue_window_g

0xae44,	// (0x0007efac) popup_clock_analogue_window_t1

0xae52,	// (0x0007efba) clock_digital_number_pane_ParamLimits

0xae52,	// (0x0007efba) clock_digital_number_pane

0xae5e,	// (0x0007efc6) clock_digital_number_pane_cp02_ParamLimits

0xae5e,	// (0x0007efc6) clock_digital_number_pane_cp02

0xae6a,	// (0x0007efd2) clock_digital_number_pane_cp03_ParamLimits

0xae6a,	// (0x0007efd2) clock_digital_number_pane_cp03

0xae76,	// (0x0007efde) clock_digital_number_pane_cp04_ParamLimits

0xae76,	// (0x0007efde) clock_digital_number_pane_cp04

0xae82,	// (0x0007efea) clock_digital_separator_pane_ParamLimits

0xae82,	// (0x0007efea) clock_digital_separator_pane

0xae8e,	// (0x0007eff6) popup_clock_digital_window_t1

0x1e63,	// (0x00075fcb) clock_digital_number_pane_g1

0x1e63,	// (0x00075fcb) clock_digital_number_pane_g2

0x0001,

0xf2f9,	// (0x00083461) clock_digital_number_pane_g

0x1e63,	// (0x00075fcb) clock_digital_separator_pane_g1

0x1e63,	// (0x00075fcb) clock_digital_separator_pane_g2

0x0001,

0xf2f9,	// (0x00083461) clock_digital_separator_pane_g

0xed82,	// (0x00082eea) bg_popup_window_pane_cp04

0x3c6c,	// (0x00077dd4) heading_pane_cp03

0x3c74,	// (0x00077ddc) listscroll_popup_gms_pane

0x3c7c,	// (0x00077de4) grid_large_graphic_popup_pane

0x3c86,	// (0x00077dee) listscroll_popup_gms_pane_g1

0x3c8e,	// (0x00077df6) listscroll_popup_gms_pane_g2

0x0001,

0xf396,	// (0x000834fe) listscroll_popup_gms_pane_g

0x2cf8,	// (0x00076e60) scroll_pane_cp014

0x3c96,	// (0x00077dfe) cell_large_graphic_popup_pane_ParamLimits

0x3c96,	// (0x00077dfe) cell_large_graphic_popup_pane

0x3cae,	// (0x00077e16) cell_large_graphic_popup_pane_g1_ParamLimits

0x3cae,	// (0x00077e16) cell_large_graphic_popup_pane_g1

0x3cba,	// (0x00077e22) cell_large_graphic_popup_pane_g2_ParamLimits

0x3cba,	// (0x00077e22) cell_large_graphic_popup_pane_g2

0x3cc6,	// (0x00077e2e) cell_large_graphic_popup_pane_g3_ParamLimits

0x3cc6,	// (0x00077e2e) cell_large_graphic_popup_pane_g3

0x3cd3,	// (0x00077e3b) cell_large_graphic_popup_pane_g4_ParamLimits

0x3cd3,	// (0x00077e3b) cell_large_graphic_popup_pane_g4

0x0003,

0xf39b,	// (0x00083503) cell_large_graphic_popup_pane_g_ParamLimits

0xf39b,	// (0x00083503) cell_large_graphic_popup_pane_g

0x3ce3,	// (0x00077e4b) grid_highlight_pane_cp010

0x1e63,	// (0x00075fcb) bg_popup_call_pane_g1

0x3ced,	// (0x00077e55) list_single_graphic_popup_conf_pane_ParamLimits

0x3ced,	// (0x00077e55) list_single_graphic_popup_conf_pane

0x3cff,	// (0x00077e67) list_highlight_pane_cp01

0x3d08,	// (0x00077e70) list_single_graphic_popup_conf_pane_g1

0x3d10,	// (0x00077e78) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf3a4,	// (0x0008350c) list_single_graphic_popup_conf_pane_g

0x3d18,	// (0x00077e80) list_single_graphic_popup_conf_pane_t1

0x3d26,	// (0x00077e8e) linegrid_cams_pane_g1

0x3d2f,	// (0x00077e97) linegrid_cams_pane_g2

0x1ff9,	// (0x00076161) linegrid_cams_pane_g3

0x3d38,	// (0x00077ea0) linegrid_cams_pane_g4

0x3d41,	// (0x00077ea9) linegrid_cams_pane_g5

0x3d4a,	// (0x00077eb2) linegrid_cams_pane_g6

0x240f,	// (0x00076577) linegrid_cams_pane_g7

0x0006,

0xf3a9,	// (0x00083511) linegrid_cams_pane_g

0x3d55,	// (0x00077ebd) popup_clock_analogue_window

0x3d55,	// (0x00077ebd) popup_clock_digital_window

0xed82,	// (0x00082eea) popup_phob_thumbnail_window

0x1e63,	// (0x00075fcb) call_video_uplink_pane_g1

0x3d5e,	// (0x00077ec6) call_video_uplink_pane_g2

0x0001,

0xf3b8,	// (0x00083520) call_video_uplink_pane_g

0x23b6,	// (0x0007651e) video_uplink_pane

0x3d66,	// (0x00077ece) mce_image_pane_g1

0x3d70,	// (0x00077ed8) mce_image_pane_g2

0x3d78,	// (0x00077ee0) mce_image_pane_g3

0x3d80,	// (0x00077ee8) mce_image_pane_g4

0x3d88,	// (0x00077ef0) mce_image_pane_g5

0x0004,

0xf3bd,	// (0x00083525) mce_image_pane_g

0x3d90,	// (0x00077ef8) control_top_pane_stacon_cp01_ParamLimits

0x3d90,	// (0x00077ef8) control_top_pane_stacon_cp01

0x3da4,	// (0x00077f0c) uni_indicator_pane_stacon_cp01_ParamLimits

0x3da4,	// (0x00077f0c) uni_indicator_pane_stacon_cp01

0x3db5,	// (0x00077f1d) bg_popup_sub_pane_cp03

0x3dbf,	// (0x00077f27) chi_dic_find_pane

0x3dc7,	// (0x00077f2f) listscroll_chi_dic_pane

0x3dd0,	// (0x00077f38) main_pane_chidic_g1

0x3de3,	// (0x00077f4b) chi_dic_find_pane_t1

0x3df1,	// (0x00077f59) find_chidic_pane

0x3dfa,	// (0x00077f62) chi_dic_list_pane_ParamLimits

0x3dfa,	// (0x00077f62) chi_dic_list_pane

0x3e0b,	// (0x00077f73) scroll_pane_cp020

0x3e13,	// (0x00077f7b) find_chidic_pane_t1

0xed82,	// (0x00082eea) input_focus_pane_cp06

0x3e22,	// (0x00077f8a) list_chi_dic_pane_ParamLimits

0x3e22,	// (0x00077f8a) list_chi_dic_pane

0x3e36,	// (0x00077f9e) list_chi_dic_pane_t1_ParamLimits

0x3e36,	// (0x00077f9e) list_chi_dic_pane_t1

0xed82,	// (0x00082eea) list_highlight_pane_cp020

0x3e49,	// (0x00077fb1) bg_cale_heading_pane_g1

0x3e51,	// (0x00077fb9) bg_cale_heading_pane_g2

0x3e59,	// (0x00077fc1) bg_cale_heading_pane_g3

0x3e61,	// (0x00077fc9) bg_cale_heading_pane_g4

0x3e6b,	// (0x00077fd3) bg_cale_heading_pane_g5

0x3e75,	// (0x00077fdd) bg_cale_heading_pane_g6

0x3e7d,	// (0x00077fe5) bg_cale_heading_pane_g7

0x3e85,	// (0x00077fed) bg_cale_heading_pane_g8

0x3e8f,	// (0x00077ff7) bg_cale_heading_pane_g9

0x0008,

0xf3c8,	// (0x00083530) bg_cale_heading_pane_g

0x3e49,	// (0x00077fb1) bg_cale_side_pane_g1

0x3e99,	// (0x00078001) bg_cale_side_pane_g2

0x3ea1,	// (0x00078009) bg_cale_side_pane_g3

0x3ea9,	// (0x00078011) bg_cale_side_pane_g4

0x3eb1,	// (0x00078019) bg_cale_side_pane_g5

0x3eb9,	// (0x00078021) bg_cale_side_pane_g6

0x3ec1,	// (0x00078029) bg_cale_side_pane_g7

0x3ec9,	// (0x00078031) bg_cale_side_pane_g8

0x3ed1,	// (0x00078039) bg_cale_side_pane_g9

0x0008,

0xf3db,	// (0x00083543) bg_cale_side_pane_g

0x3ed9,	// (0x00078041) popup_call_status_window_ParamLimits

0x3ed9,	// (0x00078041) popup_call_status_window

0x3f20,	// (0x00078088) stacon_top_pane

0x3f28,	// (0x00078090) status_pane_ParamLimits

0x3f28,	// (0x00078090) status_pane

0x3f3d,	// (0x000780a5) status_small_pane

0x3f45,	// (0x000780ad) control_pane

0xed82,	// (0x00082eea) stacon_bottom_pane

0x3f4d,	// (0x000780b5) list_single_mce_smart_pane_t1_ParamLimits

0x3f4d,	// (0x000780b5) list_single_mce_smart_pane_t1

0x3f60,	// (0x000780c8) list_single_mce_smart_pane_t2_ParamLimits

0x3f60,	// (0x000780c8) list_single_mce_smart_pane_t2

0x0001,

0xf3ee,	// (0x00083556) list_single_mce_smart_pane_t_ParamLimits

0xf3ee,	// (0x00083556) list_single_mce_smart_pane_t

0x3f7f,	// (0x000780e7) compass_pane

0x3f88,	// (0x000780f0) main_location2_pane_t1

0x3f9c,	// (0x00078104) main_location2_pane_t2

0x3fb0,	// (0x00078118) main_location2_pane_t3

0x0003,

0xf3f3,	// (0x0008355b) main_location2_pane_t

0x3ffa,	// (0x00078162) compass_pane_g1_ParamLimits

0x3ffa,	// (0x00078162) compass_pane_g1

0x4006,	// (0x0007816e) compass_pane_t1

0x4015,	// (0x0007817d) compass_pane_t2

0x0005,

0xf3fc,	// (0x00083564) compass_pane_t

0x405c,	// (0x000781c4) text_secondary_cp61

0x40c5,	// (0x0007822d) navi_pane_cams_g5

0x413f,	// (0x000782a7) navi_pane_im_t1

0x414d,	// (0x000782b5) navi_pane_mp_g1_ParamLimits

0x414d,	// (0x000782b5) navi_pane_mp_g1

0x4161,	// (0x000782c9) navi_pane_mp_g2_ParamLimits

0x4161,	// (0x000782c9) navi_pane_mp_g2

0x416d,	// (0x000782d5) navi_pane_mp_g3_ParamLimits

0x416d,	// (0x000782d5) navi_pane_mp_g3

0x0002,

0xf410,	// (0x00083578) navi_pane_mp_g_ParamLimits

0xf410,	// (0x00083578) navi_pane_mp_g

0x4179,	// (0x000782e1) navi_pane_mp_t1

0x4187,	// (0x000782ef) navi_pane_mp_t2

0x0002,

0xf417,	// (0x0008357f) navi_pane_mp_t

0x4234,	// (0x0007839c) navi_pane_vt_g1

0x4179,	// (0x000782e1) navi_pane_vt_t1

0x423c,	// (0x000783a4) navi_slider_pane

0x4244,	// (0x000783ac) zooming_pane

0x424c,	// (0x000783b4) navi_slider_pane_g1

0xaeab,	// (0x0007f013) navi_slider_pane_g2

0x0006,

0xf41e,	// (0x00083586) navi_slider_pane_g

0x4270,	// (0x000783d8) aid_levels_zoom

0x4278,	// (0x000783e0) zooming_pane_g1

0x4280,	// (0x000783e8) zooming_pane_g2

0x4280,	// (0x000783e8) zooming_pane_g3

0x0002,

0xf42d,	// (0x00083595) zooming_pane_g

0x4288,	// (0x000783f0) level_10_zoom

0x4291,	// (0x000783f9) level_11_zoom

0x429a,	// (0x00078402) level_1_zoom

0x42a3,	// (0x0007840b) level_2_zoom

0x42ac,	// (0x00078414) level_3_zoom

0x42b5,	// (0x0007841d) level_4_zoom

0x42be,	// (0x00078426) level_5_zoom

0x42c7,	// (0x0007842f) level_6_zoom

0x42d0,	// (0x00078438) level_7_zoom

0x42d9,	// (0x00078441) level_8_zoom

0x42e2,	// (0x0007844a) level_9_zoom

0x42f3,	// (0x0007845b) popup_phob_thumbnail_window_g1

0x42fb,	// (0x00078463) popup_phob_thumbnail_window_g2

0x0001,

0xf434,	// (0x0008359c) popup_phob_thumbnail_window_g

0xb62e,	// (0x0007f796) level_1_location

0xb636,	// (0x0007f79e) level_2_location

0xb63e,	// (0x0007f7a6) level_3_location

0xb646,	// (0x0007f7ae) level_4_location

0x4244,	// (0x000783ac) level_5_location

0x4303,	// (0x0007846b) mce_icon_pane_g1

0x430b,	// (0x00078473) mce_icon_pane_g2

0x0001,

0xf439,	// (0x000835a1) mce_icon_pane_g

0x4313,	// (0x0007847b) main_mup_pane_g1_ParamLimits

0x4313,	// (0x0007847b) main_mup_pane_g1

0x4329,	// (0x00078491) main_mup_pane_g2_ParamLimits

0x4329,	// (0x00078491) main_mup_pane_g2

0x4341,	// (0x000784a9) main_mup_pane_g3_ParamLimits

0x4341,	// (0x000784a9) main_mup_pane_g3

0x4359,	// (0x000784c1) main_mup_pane_g4_ParamLimits

0x4359,	// (0x000784c1) main_mup_pane_g4

0x4371,	// (0x000784d9) main_mup_pane_g5_ParamLimits

0x4371,	// (0x000784d9) main_mup_pane_g5

0x438d,	// (0x000784f5) main_mup_pane_g6_ParamLimits

0x438d,	// (0x000784f5) main_mup_pane_g6

0x43a5,	// (0x0007850d) main_mup_pane_g7_ParamLimits

0x43a5,	// (0x0007850d) main_mup_pane_g7

0x43bd,	// (0x00078525) main_mup_pane_g8_ParamLimits

0x43bd,	// (0x00078525) main_mup_pane_g8

0x43d5,	// (0x0007853d) main_mup_pane_g9_ParamLimits

0x43d5,	// (0x0007853d) main_mup_pane_g9

0x43ef,	// (0x00078557) main_mup_pane_g10_ParamLimits

0x43ef,	// (0x00078557) main_mup_pane_g10

0x4409,	// (0x00078571) main_mup_pane_g11_ParamLimits

0x4409,	// (0x00078571) main_mup_pane_g11

0x441d,	// (0x00078585) main_mup_pane_g12_ParamLimits

0x441d,	// (0x00078585) main_mup_pane_g12

0x4433,	// (0x0007859b) main_mup_pane_g13_ParamLimits

0x4433,	// (0x0007859b) main_mup_pane_g13

0x000c,

0xf43e,	// (0x000835a6) main_mup_pane_g_ParamLimits

0xf43e,	// (0x000835a6) main_mup_pane_g

0x4447,	// (0x000785af) main_mup_pane_t1_ParamLimits

0x4447,	// (0x000785af) main_mup_pane_t1

0x4461,	// (0x000785c9) main_mup_pane_t2_ParamLimits

0x4461,	// (0x000785c9) main_mup_pane_t2

0x4479,	// (0x000785e1) main_mup_pane_t3_ParamLimits

0x4479,	// (0x000785e1) main_mup_pane_t3

0x4491,	// (0x000785f9) main_mup_pane_t4_ParamLimits

0x4491,	// (0x000785f9) main_mup_pane_t4

0x44af,	// (0x00078617) main_mup_pane_t5_ParamLimits

0x44af,	// (0x00078617) main_mup_pane_t5

0x44c4,	// (0x0007862c) main_mup_pane_t6_ParamLimits

0x44c4,	// (0x0007862c) main_mup_pane_t6

0x0005,

0xf459,	// (0x000835c1) main_mup_pane_t_ParamLimits

0xf459,	// (0x000835c1) main_mup_pane_t

0x44d6,	// (0x0007863e) mup_progress_pane_ParamLimits

0x44d6,	// (0x0007863e) mup_progress_pane

0x44e2,	// (0x0007864a) mup_visualizer_pane_ParamLimits

0x44e2,	// (0x0007864a) mup_visualizer_pane

0x4516,	// (0x0007867e) mup_volume_pane_ParamLimits

0x4516,	// (0x0007867e) mup_volume_pane

0x4534,	// (0x0007869c) mup_visualizer_pane_g1_ParamLimits

0x4534,	// (0x0007869c) mup_visualizer_pane_g1

0x4534,	// (0x0007869c) mup_visualizer_pane_g2_ParamLimits

0x4534,	// (0x0007869c) mup_visualizer_pane_g2

0x3ffa,	// (0x00078162) mup_visualizer_pane_g3_ParamLimits

0x3ffa,	// (0x00078162) mup_visualizer_pane_g3

0x0002,

0xf466,	// (0x000835ce) mup_visualizer_pane_g_ParamLimits

0xf466,	// (0x000835ce) mup_visualizer_pane_g

0x1e63,	// (0x00075fcb) mup_volume_pane_g1

0x454a,	// (0x000786b2) mup_volume_pane_g2

0x0001,

0xf46d,	// (0x000835d5) mup_volume_pane_g

0x1e63,	// (0x00075fcb) mup_progress_pane_g1

0x4553,	// (0x000786bb) mup_progress_pane_g2

0x455c,	// (0x000786c4) mup_progress_pane_g3

0x0002,

0xf472,	// (0x000835da) mup_progress_pane_g

0xed82,	// (0x00082eea) bg_popup_window_pane_cp05

0x4565,	// (0x000786cd) heading_pane_cp02_ParamLimits

0x4565,	// (0x000786cd) heading_pane_cp02

0x457f,	// (0x000786e7) list_popup_blid_pane

0x4587,	// (0x000786ef) list_blid_sat_info_pane_ParamLimits

0x4587,	// (0x000786ef) list_blid_sat_info_pane

0x459a,	// (0x00078702) list_blid_sat_info_pane_g1

0x45a2,	// (0x0007870a) list_blid_sat_info_pane_t1

0x46a8,	// (0x00078810) mup_equalizer_pane_ParamLimits

0x46a8,	// (0x00078810) mup_equalizer_pane

0x46c1,	// (0x00078829) mup_equalizer_pane_cp1_ParamLimits

0x46c1,	// (0x00078829) mup_equalizer_pane_cp1

0x46de,	// (0x00078846) mup_equalizer_pane_cp2_ParamLimits

0x46de,	// (0x00078846) mup_equalizer_pane_cp2

0x46fb,	// (0x00078863) mup_equalizer_pane_cp3_ParamLimits

0x46fb,	// (0x00078863) mup_equalizer_pane_cp3

0x471c,	// (0x00078884) mup_equalizer_pane_cp4_ParamLimits

0x471c,	// (0x00078884) mup_equalizer_pane_cp4

0x473d,	// (0x000788a5) mup_equalizer_pane_cp5

0x4751,	// (0x000788b9) mup_equalizer_pane_cp6

0x4765,	// (0x000788cd) mup_equalizer_pane_cp7

0xb54c,	// (0x0007f6b4) bg_popup_call_poc_act_pane_g9

0xb554,	// (0x0007f6bc) bg_popup_call_poc_act_pane_g10

0xb55c,	// (0x0007f6c4) bg_popup_call_poc_act_pane_g11

0x000a,

0xefdd,	// (0x00083145) mup_scale_pane

0x1e63,	// (0x00075fcb) mup_scale_pane_g1

0x4779,	// (0x000788e1) mup_scale_pane_g2

0x0006,

0xf48e,	// (0x000835f6) mup_scale_pane_g

0x47af,	// (0x00078917) msg_data_pane

0x47b7,	// (0x0007891f) scroll_pane_cp017

0x0e33,	// (0x00074f9b) bg_list_pane_cp04_ParamLimits

0x0e33,	// (0x00074f9b) bg_list_pane_cp04

0x47bf,	// (0x00078927) msg_data_pane_g1

0x47c7,	// (0x0007892f) msg_data_pane_g2

0x3d78,	// (0x00077ee0) msg_data_pane_g3

0x47cf,	// (0x00078937) msg_data_pane_g4

0x47d7,	// (0x0007893f) msg_data_pane_g5

0x47df,	// (0x00078947) msg_data_pane_g6

0x47e7,	// (0x0007894f) msg_data_pane_g7

0x0006,

0xf49d,	// (0x00083605) msg_data_pane_g

0x0e53,	// (0x00074fbb) msg_text_pane_ParamLimits

0x0e53,	// (0x00074fbb) msg_text_pane

0x47ef,	// (0x00078957) qrid_highlight_pane_cp011_ParamLimits

0x47ef,	// (0x00078957) qrid_highlight_pane_cp011

0xed82,	// (0x00082eea) msg_body_pane

0xed82,	// (0x00082eea) msg_header_pane

0x480e,	// (0x00078976) input_focus_pane_cp07

0x0e87,	// (0x00074fef) msg_header_pane_t1_ParamLimits

0x0e87,	// (0x00074fef) msg_header_pane_t1

0x0e9b,	// (0x00075003) msg_header_pane_t2_ParamLimits

0x0e9b,	// (0x00075003) msg_header_pane_t2

0x0001,

0xf4b1,	// (0x00083619) msg_header_pane_t_ParamLimits

0xf4b1,	// (0x00083619) msg_header_pane_t

0x4823,	// (0x0007898b) msg_body_pane_g1

0x0ead,	// (0x00075015) msg_body_pane_t1_ParamLimits

0x0ead,	// (0x00075015) msg_body_pane_t1

0x0ede,	// (0x00075046) msg_body_pane_t2_ParamLimits

0x0ede,	// (0x00075046) msg_body_pane_t2

0x0ef0,	// (0x00075058) msg_body_pane_t3_ParamLimits

0x0ef0,	// (0x00075058) msg_body_pane_t3

0x0002,

0xf4b6,	// (0x0008361e) msg_body_pane_t_ParamLimits

0xf4b6,	// (0x0008361e) msg_body_pane_t

0x4865,	// (0x000789cd) main_viewer_pane_g1_ParamLimits

0x4865,	// (0x000789cd) main_viewer_pane_g1

0x4873,	// (0x000789db) main_viewer_pane_g2_ParamLimits

0x4873,	// (0x000789db) main_viewer_pane_g2

0x4881,	// (0x000789e9) main_viewer_pane_g3_ParamLimits

0x4881,	// (0x000789e9) main_viewer_pane_g3

0x4890,	// (0x000789f8) main_viewer_pane_g4_ParamLimits

0x4890,	// (0x000789f8) main_viewer_pane_g4

0xaed5,	// (0x0007f03d) main_viewer_pane_g5_ParamLimits

0xaed5,	// (0x0007f03d) main_viewer_pane_g5

0xaed5,	// (0x0007f03d) main_viewer_pane_g7_ParamLimits

0xaed5,	// (0x0007f03d) main_viewer_pane_g7

0xaee7,	// (0x0007f04f) main_viewer_pane_g8_ParamLimits

0xaee7,	// (0x0007f04f) main_viewer_pane_g8

0x0007,

0xf4c6,	// (0x0008362e) main_viewer_pane_g_ParamLimits

0xf4c6,	// (0x0008362e) main_viewer_pane_g

0x489f,	// (0x00078a07) viewer_content_pane_ParamLimits

0x489f,	// (0x00078a07) viewer_content_pane

0x48da,	// (0x00078a42) main_postcard_pane_g1_ParamLimits

0x48da,	// (0x00078a42) main_postcard_pane_g1

0x48f0,	// (0x00078a58) main_postcard_pane_g2_ParamLimits

0x48f0,	// (0x00078a58) main_postcard_pane_g2

0x4906,	// (0x00078a6e) main_postcard_pane_g3_ParamLimits

0x4906,	// (0x00078a6e) main_postcard_pane_g3

0x0005,

0xf4d7,	// (0x0008363f) main_postcard_pane_g_ParamLimits

0xf4d7,	// (0x0008363f) main_postcard_pane_g

0x491d,	// (0x00078a85) main_postcard_pane_g4

0xb761,	// (0x0007f8c9) smil_status_volume_pane_g2

0x4960,	// (0x00078ac8) postcard_pane_ParamLimits

0x4960,	// (0x00078ac8) postcard_pane

0x49a2,	// (0x00078b0a) postcard_pane_g1_ParamLimits

0x49a2,	// (0x00078b0a) postcard_pane_g1

0x49b0,	// (0x00078b18) postcard_pane_g2_ParamLimits

0x49b0,	// (0x00078b18) postcard_pane_g2

0x49bc,	// (0x00078b24) postcard_pane_g3_ParamLimits

0x49bc,	// (0x00078b24) postcard_pane_g3

0x49c8,	// (0x00078b30) postcard_pane_g4_ParamLimits

0x49c8,	// (0x00078b30) postcard_pane_g4

0x49d6,	// (0x00078b3e) postcard_pane_g5_ParamLimits

0x49d6,	// (0x00078b3e) postcard_pane_g5

0x49eb,	// (0x00078b53) postcard_pane_g6_ParamLimits

0x49eb,	// (0x00078b53) postcard_pane_g6

0x49a2,	// (0x00078b0a) postcard_pane_g7_ParamLimits

0x49a2,	// (0x00078b0a) postcard_pane_g7

0x0006,

0xf4e4,	// (0x0008364c) postcard_pane_g_ParamLimits

0xf4e4,	// (0x0008364c) postcard_pane_g

0x49ff,	// (0x00078b67) main_mp2_pane_g1_ParamLimits

0x49ff,	// (0x00078b67) main_mp2_pane_g1

0x4a0b,	// (0x00078b73) main_mp2_pane_g2_ParamLimits

0x4a0b,	// (0x00078b73) main_mp2_pane_g2

0x4a17,	// (0x00078b7f) main_mp2_pane_g3_ParamLimits

0x4a17,	// (0x00078b7f) main_mp2_pane_g3

0x0002,

0xf4f3,	// (0x0008365b) main_mp2_pane_g_ParamLimits

0xf4f3,	// (0x0008365b) main_mp2_pane_g

0x4a23,	// (0x00078b8b) main_mp2_pane_t1_ParamLimits

0x4a23,	// (0x00078b8b) main_mp2_pane_t1

0x4a38,	// (0x00078ba0) main_mp2_pane_t2_ParamLimits

0x4a38,	// (0x00078ba0) main_mp2_pane_t2

0x4a4a,	// (0x00078bb2) main_mp2_pane_t3_ParamLimits

0x4a4a,	// (0x00078bb2) main_mp2_pane_t3

0x0002,

0xf4fa,	// (0x00083662) main_mp2_pane_t_ParamLimits

0xf4fa,	// (0x00083662) main_mp2_pane_t

0x4a5c,	// (0x00078bc4) pec_content_pane_ParamLimits

0x4a5c,	// (0x00078bc4) pec_content_pane

0x2cf8,	// (0x00076e60) scroll_pane_cp015

0x4a6e,	// (0x00078bd6) pec_attribute_pane_ParamLimits

0x4a6e,	// (0x00078bd6) pec_attribute_pane

0x4a7e,	// (0x00078be6) pec_content_pane_g1_ParamLimits

0x4a7e,	// (0x00078be6) pec_content_pane_g1

0x4a8c,	// (0x00078bf4) pec_content_pane_t1_ParamLimits

0x4a8c,	// (0x00078bf4) pec_content_pane_t1

0x4a9e,	// (0x00078c06) pec_content_pane_t2_ParamLimits

0x4a9e,	// (0x00078c06) pec_content_pane_t2

0x0001,

0xf501,	// (0x00083669) pec_content_pane_t_ParamLimits

0xf501,	// (0x00083669) pec_content_pane_t

0x4ab0,	// (0x00078c18) list_single_graphic_pane_cp01_ParamLimits

0x4ab0,	// (0x00078c18) list_single_graphic_pane_cp01

0xefdd,	// (0x00083145) bg_popup_sub_pane_cp04

0x4ac8,	// (0x00078c30) popup_mup_playback_window_g1

0x4ad4,	// (0x00078c3c) popup_mup_playback_window_t1

0x4ae9,	// (0x00078c51) popup_mup_playback_window_t2

0x0001,

0xf506,	// (0x0008366e) popup_mup_playback_window_t

0x4b3e,	// (0x00078ca6) main_image_pane_g1_ParamLimits

0x4b3e,	// (0x00078ca6) main_image_pane_g1

0x4c1b,	// (0x00078d83) scroll_pane_cp018_ParamLimits

0x4c1b,	// (0x00078d83) scroll_pane_cp018

0x4c33,	// (0x00078d9b) scroll_pane_cp016_ParamLimits

0x4c33,	// (0x00078d9b) scroll_pane_cp016

0x4c67,	// (0x00078dcf) smil2_image_pane_ParamLimits

0x4c67,	// (0x00078dcf) smil2_image_pane

0x4c9b,	// (0x00078e03) smil2_root_pane_ParamLimits

0x4c9b,	// (0x00078e03) smil2_root_pane

0x4cd3,	// (0x00078e3b) smil2_text_pane_ParamLimits

0x4cd3,	// (0x00078e3b) smil2_text_pane

0xed82,	// (0x00082eea) bg_list_pane_cp06

0x4d5b,	// (0x00078ec3) grid_radio_pane

0xed82,	// (0x00082eea) bg_popup_window_pane_cp06

0x4d63,	// (0x00078ecb) main_fmradio_pane_t1

0x3c6c,	// (0x00077dd4) heading_pane_cp04

0x4d71,	// (0x00078ed9) main_fmradio_pane_t2

0xb564,	// (0x0007f6cc) popup_cale_lunar_info_window_g1

0x4d7f,	// (0x00078ee7) main_fmradio_pane_t3

0xb56c,	// (0x0007f6d4) popup_cale_lunar_info_window_g2

0x4d8d,	// (0x00078ef5) main_fmradio_pane_t4

0x0001,

0x4d9b,	// (0x00078f03) main_fmradio_pane_t5

0x0004,

0xf5e1,	// (0x00083749) popup_cale_lunar_info_window_g

0xf51b,	// (0x00083683) main_fmradio_pane_t

0x4da9,	// (0x00078f11) wait_bar_pane_cp03

0x4db1,	// (0x00078f19) cell_fmradio_pane_ParamLimits

0x4db1,	// (0x00078f19) cell_fmradio_pane

0x49a2,	// (0x00078b0a) cell_fmradio_pane_g1_ParamLimits

0x49a2,	// (0x00078b0a) cell_fmradio_pane_g1

0xed82,	// (0x00082eea) grid_highlight_pane_cp011

0x4dc4,	// (0x00078f2c) poc_content_pane_ParamLimits

0x4dc4,	// (0x00078f2c) poc_content_pane

0x4dd6,	// (0x00078f3e) scroll_pane_cp019

0x4dde,	// (0x00078f46) popup_call_poc_act_window_ParamLimits

0x4dde,	// (0x00078f46) popup_call_poc_act_window

0x4e02,	// (0x00078f6a) popup_call_poc_inact_window_ParamLimits

0x4e02,	// (0x00078f6a) popup_call_poc_inact_window

0xf5b8,	// (0x00083720) bg_popup_call_poc_act_pane_g

0xb4d4,	// (0x0007f63c) bg_popup_call_poc_inact_pane_g1

0xb4dc,	// (0x0007f644) bg_popup_call_poc_inact_pane_g2

0x4e1b,	// (0x00078f83) popup_call_poc_act_window_g2

0xb4e4,	// (0x0007f64c) bg_popup_call_poc_inact_pane_g3

0xb4ec,	// (0x0007f654) bg_popup_call_poc_inact_pane_g4

0xb4f4,	// (0x0007f65c) bg_popup_call_poc_inact_pane_g5

0x4e23,	// (0x00078f8b) popup_call_poc_act_window_t1_ParamLimits

0x4e23,	// (0x00078f8b) popup_call_poc_act_window_t1

0x4e4b,	// (0x00078fb3) popup_call_poc_act_window_t2_ParamLimits

0x4e4b,	// (0x00078fb3) popup_call_poc_act_window_t2

0x4e73,	// (0x00078fdb) popup_call_poc_act_window_t3_ParamLimits

0x4e73,	// (0x00078fdb) popup_call_poc_act_window_t3

0x4e9b,	// (0x00079003) popup_call_poc_act_window_t4_ParamLimits

0x4e9b,	// (0x00079003) popup_call_poc_act_window_t4

0x0003,

0xf526,	// (0x0008368e) popup_call_poc_act_window_t_ParamLimits

0xf526,	// (0x0008368e) popup_call_poc_act_window_t

0xb4fc,	// (0x0007f664) bg_popup_call_poc_inact_pane_g6

0xb504,	// (0x0007f66c) bg_popup_call_poc_inact_pane_g7

0xb50c,	// (0x0007f674) bg_popup_call_poc_inact_pane_g8

0x4ead,	// (0x00079015) popup_call_poc_inact_window_g2

0xb514,	// (0x0007f67c) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf5a5,	// (0x0008370d) bg_popup_call_poc_inact_pane_g

0x4eb5,	// (0x0007901d) popup_call_poc_inact_window_t1_ParamLimits

0x4eb5,	// (0x0007901d) popup_call_poc_inact_window_t1

0x4eca,	// (0x00079032) popup_call_poc_inact_window_t2_ParamLimits

0x4eca,	// (0x00079032) popup_call_poc_inact_window_t2

0x4edf,	// (0x00079047) popup_call_poc_inact_window_t3_ParamLimits

0x4edf,	// (0x00079047) popup_call_poc_inact_window_t3

0x0002,

0xf52f,	// (0x00083697) popup_call_poc_inact_window_t_ParamLimits

0xf52f,	// (0x00083697) popup_call_poc_inact_window_t

0xb6d4,	// (0x0007f83c) context_pane_ParamLimits

0x5f32,	// (0x0007a09a) signal_pane_ParamLimits

0x4244,	// (0x000783ac) main_call2_pane

0xb6c2,	// (0x0007f82a) popup_phob_thumbnail2_window_ParamLimits

0xb6c2,	// (0x0007f82a) popup_phob_thumbnail2_window

0xaebd,	// (0x0007f025) aid_hotspot_pointer_arrow_pane

0xaec5,	// (0x0007f02d) aid_hotspot_pointer_hand_pane

0x5a56,	// (0x00079bbe) phob_pre_status_pane_g5

0x2455,	// (0x000765bd) cams_zoom_pane_ParamLimits

0x2464,	// (0x000765cc) image_vga_pane_ParamLimits

0x247e,	// (0x000765e6) main_camera_pane_g1_ParamLimits

0x2490,	// (0x000765f8) main_camera_pane_g2_ParamLimits

0x24a2,	// (0x0007660a) main_camera_pane_g3_ParamLimits

0x24b4,	// (0x0007661c) main_camera_pane_g4_ParamLimits

0x24c6,	// (0x0007662e) main_camera_pane_g5_ParamLimits

0x24d8,	// (0x00076640) main_camera_pane_g6_ParamLimits

0x24ea,	// (0x00076652) main_camera_pane_g7_ParamLimits

0xf22e,	// (0x00083396) main_camera_pane_g_ParamLimits

0x2508,	// (0x00076670) main_camera_pane_t1_ParamLimits

0x251e,	// (0x00076686) main_camera_pane_t2_ParamLimits

0xf23f,	// (0x000833a7) main_camera_pane_t_ParamLimits

0xefdd,	// (0x00083145) bg_popup_preview_window_pane_cp01_ParamLimits

0xefdd,	// (0x00083145) bg_popup_preview_window_pane_cp01

0x4ef4,	// (0x0007905c) popup_phob_thumbnail2_window_g1_ParamLimits

0x4ef4,	// (0x0007905c) popup_phob_thumbnail2_window_g1

0xed82,	// (0x00082eea) call2_cli_visual_pane

0x4f1b,	// (0x00079083) popup_call2_audio_conf_window_ParamLimits

0x4f1b,	// (0x00079083) popup_call2_audio_conf_window

0x4f3b,	// (0x000790a3) popup_call2_audio_first_window_ParamLimits

0x4f3b,	// (0x000790a3) popup_call2_audio_first_window

0x4fd1,	// (0x00079139) popup_call2_audio_in_window_ParamLimits

0x4fd1,	// (0x00079139) popup_call2_audio_in_window

0x5019,	// (0x00079181) popup_call2_audio_out_window_ParamLimits

0x5019,	// (0x00079181) popup_call2_audio_out_window

0x5083,	// (0x000791eb) popup_call2_audio_second_window_ParamLimits

0x5083,	// (0x000791eb) popup_call2_audio_second_window

0x50e9,	// (0x00079251) popup_call2_audio_wait_window_ParamLimits

0x50e9,	// (0x00079251) popup_call2_audio_wait_window

0xed82,	// (0x00082eea) bg_popup_call2_act_pane_cp03

0xefbf,	// (0x00083127) list_conf_pane_cp

0x5123,	// (0x0007928b) popup_call2_audio_conf_window_t1

0x5131,	// (0x00079299) list_single_graphic_popup_conf2_pane_ParamLimits

0x5131,	// (0x00079299) list_single_graphic_popup_conf2_pane

0x3cff,	// (0x00077e67) list_highlight_pane_cp04

0x5144,	// (0x000792ac) list_single_graphic_popup_conf2_pane_g1

0x3d10,	// (0x00077e78) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf536,	// (0x0008369e) list_single_graphic_popup_conf2_pane_g

0x514e,	// (0x000792b6) list_single_graphic_popup_conf2_pane_t1

0x515c,	// (0x000792c4) bg_popup_call2_act_pane_cp01_ParamLimits

0x515c,	// (0x000792c4) bg_popup_call2_act_pane_cp01

0x51e6,	// (0x0007934e) call_type_pane_cp05_ParamLimits

0x51e6,	// (0x0007934e) call_type_pane_cp05

0x523a,	// (0x000793a2) popup_call2_audio_second_window_g1_ParamLimits

0x523a,	// (0x000793a2) popup_call2_audio_second_window_g1

0x528e,	// (0x000793f6) popup_call2_audio_second_window_g2_ParamLimits

0x528e,	// (0x000793f6) popup_call2_audio_second_window_g2

0x0002,

0xf53b,	// (0x000836a3) popup_call2_audio_second_window_g_ParamLimits

0xf53b,	// (0x000836a3) popup_call2_audio_second_window_g

0x52f3,	// (0x0007945b) popup_call2_audio_second_window_t1_ParamLimits

0x52f3,	// (0x0007945b) popup_call2_audio_second_window_t1

0x53ae,	// (0x00079516) popup_call2_audio_second_window_t2_ParamLimits

0x53ae,	// (0x00079516) popup_call2_audio_second_window_t2

0x5401,	// (0x00079569) popup_call2_audio_second_window_t3_ParamLimits

0x5401,	// (0x00079569) popup_call2_audio_second_window_t3

0x0003,

0xf542,	// (0x000836aa) popup_call2_audio_second_window_t_ParamLimits

0xf542,	// (0x000836aa) popup_call2_audio_second_window_t

0xed82,	// (0x00082eea) bg_popup_call2_in_pane_cp02

0xed8c,	// (0x00082ef4) call_type_pane_cp04

0xed94,	// (0x00082efc) popup_call2_audio_wait_window_g1

0xed9c,	// (0x00082f04) popup_call2_audio_wait_window_g2

0x0001,

0xf11b,	// (0x00083283) popup_call2_audio_wait_window_g

0xeda4,	// (0x00082f0c) popup_call2_audio_wait_window_t3

0x54f4,	// (0x0007965c) bg_popup_call2_act_pane_ParamLimits

0x54f4,	// (0x0007965c) bg_popup_call2_act_pane

0x55b4,	// (0x0007971c) call_type_pane_cp03_ParamLimits

0x55b4,	// (0x0007971c) call_type_pane_cp03

0x5618,	// (0x00079780) popup_call2_audio_first_window_g1_ParamLimits

0x5618,	// (0x00079780) popup_call2_audio_first_window_g1

0x5688,	// (0x000797f0) popup_call2_audio_first_window_g2_ParamLimits

0x5688,	// (0x000797f0) popup_call2_audio_first_window_g2

0x4534,	// (0x0007869c) popup_call2_audio_first_window_g3_ParamLimits

0x4534,	// (0x0007869c) popup_call2_audio_first_window_g3

0x0004,

0xf54b,	// (0x000836b3) popup_call2_audio_first_window_g_ParamLimits

0xf54b,	// (0x000836b3) popup_call2_audio_first_window_g

0x5766,	// (0x000798ce) popup_call2_audio_first_window_t1_ParamLimits

0x5766,	// (0x000798ce) popup_call2_audio_first_window_t1

0x5869,	// (0x000799d1) popup_call2_audio_first_window_t4_ParamLimits

0x5869,	// (0x000799d1) popup_call2_audio_first_window_t4

0xaeff,	// (0x0007f067) popup_call2_audio_first_window_t5_ParamLimits

0xaeff,	// (0x0007f067) popup_call2_audio_first_window_t5

0x0003,

0xf556,	// (0x000836be) popup_call2_audio_first_window_t_ParamLimits

0xf556,	// (0x000836be) popup_call2_audio_first_window_t

0xefd5,	// (0x0008313d) bg_popup_call2_act_pane_g1

0xb574,	// (0x0007f6dc) popup_cale_lunar_info_window_t1

0xb582,	// (0x0007f6ea) popup_cale_lunar_info_window_t2

0xb590,	// (0x0007f6f8) popup_cale_lunar_info_window_t3

0xed82,	// (0x00082eea) bg_popup_call2_bubble_pane

0xb000,	// (0x0007f168) bg_popup_call2_in_pane_cp01_ParamLimits

0xb000,	// (0x0007f168) bg_popup_call2_in_pane_cp01

0xea5e,	// (0x00082bc6) call_type_pane_cp02

0xb048,	// (0x0007f1b0) popup_call2_audio_out_window_g1_ParamLimits

0xb048,	// (0x0007f1b0) popup_call2_audio_out_window_g1

0xb074,	// (0x0007f1dc) popup_call2_audio_out_window_g2_ParamLimits

0xb074,	// (0x0007f1dc) popup_call2_audio_out_window_g2

0xb09c,	// (0x0007f204) popup_call2_audio_out_window_g3_ParamLimits

0xb09c,	// (0x0007f204) popup_call2_audio_out_window_g3

0x0003,

0xf55f,	// (0x000836c7) popup_call2_audio_out_window_g_ParamLimits

0xf55f,	// (0x000836c7) popup_call2_audio_out_window_g

0xb0d7,	// (0x0007f23f) popup_call2_audio_out_window_t1_ParamLimits

0xb0d7,	// (0x0007f23f) popup_call2_audio_out_window_t1

0xb136,	// (0x0007f29e) popup_call2_audio_out_window_t2_ParamLimits

0xb136,	// (0x0007f29e) popup_call2_audio_out_window_t2

0xb18a,	// (0x0007f2f2) popup_call2_audio_out_window_t3_ParamLimits

0xb18a,	// (0x0007f2f2) popup_call2_audio_out_window_t3

0xb1a0,	// (0x0007f308) popup_call2_audio_out_window_t4_ParamLimits

0xb1a0,	// (0x0007f308) popup_call2_audio_out_window_t4

0xb1b6,	// (0x0007f31e) popup_call2_audio_out_window_t5_ParamLimits

0xb1b6,	// (0x0007f31e) popup_call2_audio_out_window_t5

0x0005,

0xf568,	// (0x000836d0) popup_call2_audio_out_window_t_ParamLimits

0xf568,	// (0x000836d0) popup_call2_audio_out_window_t

0xb21a,	// (0x0007f382) bg_popup_call2_in_pane_ParamLimits

0xb21a,	// (0x0007f382) bg_popup_call2_in_pane

0xb276,	// (0x0007f3de) popup_call2_audio_in_window_g1_ParamLimits

0xb276,	// (0x0007f3de) popup_call2_audio_in_window_g1

0xb2ae,	// (0x0007f416) popup_call2_audio_in_window_g2_ParamLimits

0xb2ae,	// (0x0007f416) popup_call2_audio_in_window_g2

0xb2e6,	// (0x0007f44e) popup_call2_audio_in_window_g3_ParamLimits

0xb2e6,	// (0x0007f44e) popup_call2_audio_in_window_g3

0x0003,

0xf575,	// (0x000836dd) popup_call2_audio_in_window_g_ParamLimits

0xf575,	// (0x000836dd) popup_call2_audio_in_window_g

0xb33e,	// (0x0007f4a6) popup_call2_audio_in_window_t1_ParamLimits

0xb33e,	// (0x0007f4a6) popup_call2_audio_in_window_t1

0xb3be,	// (0x0007f526) popup_call2_audio_in_window_t2_ParamLimits

0xb3be,	// (0x0007f526) popup_call2_audio_in_window_t2

0xb43e,	// (0x0007f5a6) popup_call2_audio_in_window_t3_ParamLimits

0xb43e,	// (0x0007f5a6) popup_call2_audio_in_window_t3

0xb458,	// (0x0007f5c0) popup_call2_audio_in_window_t4_ParamLimits

0xb458,	// (0x0007f5c0) popup_call2_audio_in_window_t4

0xb46a,	// (0x0007f5d2) popup_call2_audio_in_window_t5_ParamLimits

0xb46a,	// (0x0007f5d2) popup_call2_audio_in_window_t5

0xb47f,	// (0x0007f5e7) popup_call2_audio_in_window_t6_ParamLimits

0xb47f,	// (0x0007f5e7) popup_call2_audio_in_window_t6

0x0005,

0xf57e,	// (0x000836e6) popup_call2_audio_in_window_t_ParamLimits

0xf57e,	// (0x000836e6) popup_call2_audio_in_window_t

0xefd5,	// (0x0008313d) bg_popup_call2_in_pane_g1

0xb59e,	// (0x0007f706) popup_cale_lunar_info_window_t4

0x0003,

0xf5e6,	// (0x0008374e) popup_cale_lunar_info_window_t

0xefdd,	// (0x00083145) bg_popup_call2_rect_pane_ParamLimits

0xefdd,	// (0x00083145) bg_popup_call2_rect_pane

0xed82,	// (0x00082eea) call2_cli_visual_graphic_pane

0xed82,	// (0x00082eea) call2_cli_visual_text_pane

0xb774,	// (0x0007f8dc) smil_status_volume_pane_g3

0x0002,

0x1e63,	// (0x00075fcb) call2_cli_visual_graphic_pane_g1

0x1e63,	// (0x00075fcb) call2_cli_visual_graphic_pane_g2

0x1e63,	// (0x00075fcb) call2_cli_visual_graphic_pane_g3

0x0002,

0xf58b,	// (0x000836f3) call2_cli_visual_graphic_pane_g

0xb494,	// (0x0007f5fc) bg_popup_call2_rect_pane_g1

0x1fa8,	// (0x00076110) bg_popup_call2_rect_pane_g2

0xb49c,	// (0x0007f604) bg_popup_call2_rect_pane_g3

0xb4a4,	// (0x0007f60c) bg_popup_call2_rect_pane_g4

0xb4ac,	// (0x0007f614) bg_popup_call2_rect_pane_g5

0xb4b4,	// (0x0007f61c) bg_popup_call2_rect_pane_g6

0xb4bc,	// (0x0007f624) bg_popup_call2_rect_pane_g7

0xb4c4,	// (0x0007f62c) bg_popup_call2_rect_pane_g8

0xb4cc,	// (0x0007f634) bg_popup_call2_rect_pane_g9

0x0008,

0xf592,	// (0x000836fa) bg_popup_call2_rect_pane_g

0xb4d4,	// (0x0007f63c) bg_popup_call2_bubble_pane_g1

0xb4dc,	// (0x0007f644) bg_popup_call2_bubble_pane_g2

0xb4e4,	// (0x0007f64c) bg_popup_call2_bubble_pane_g3

0xb4ec,	// (0x0007f654) bg_popup_call2_bubble_pane_g4

0xb4f4,	// (0x0007f65c) bg_popup_call2_bubble_pane_g5

0xb4fc,	// (0x0007f664) bg_popup_call2_bubble_pane_g6

0xb504,	// (0x0007f66c) bg_popup_call2_bubble_pane_g7

0xb50c,	// (0x0007f674) bg_popup_call2_bubble_pane_g8

0xb514,	// (0x0007f67c) bg_popup_call2_bubble_pane_g9

0x0008,

0xf5a5,	// (0x0008370d) bg_popup_call2_bubble_pane_g

0x201d,	// (0x00076185) aid_cale_week_size_cell_pane

0x2536,	// (0x0007669e) aid_cams_cif_uncrop_pane_ParamLimits

0x2536,	// (0x0007669e) aid_cams_cif_uncrop_pane

0x2731,	// (0x00076899) aid_cams_size_cell_ParamLimits

0x2731,	// (0x00076899) aid_cams_size_cell

0x2745,	// (0x000768ad) grid_cams_pane_ParamLimits

0x275f,	// (0x000768c7) linegrid_cams_pane_ParamLimits

0x2894,	// (0x000769fc) call_video_pane_t1

0x28b2,	// (0x00076a1a) call_video_pane_t2

0x0001,

0xf292,	// (0x000833fa) call_video_pane_t

0x2f47,	// (0x000770af) aid_cale_month_size_cell_pane_ParamLimits

0x2f47,	// (0x000770af) aid_cale_month_size_cell_pane

0xf62f,	// (0x00083797) smil_status_volume_pane_g

0xb781,	// (0x0007f8e9) volume_smil_pane_ParamLimits

0xab55,	// (0x0007ecbd) aid_popup2_width_pane

0x1f00,	// (0x00076068) cell_qdial_pane_g4_ParamLimits

0x1f00,	// (0x00076068) cell_qdial_pane_g4

0x3fda,	// (0x00078142) aid_blid_cardinal_pane_ParamLimits

0x3fe6,	// (0x0007814e) aid_blid_destination_pane_ParamLimits

0x3fe6,	// (0x0007814e) aid_blid_destination_pane

0xefdd,	// (0x00083145) bg_popup_call_poc_act_pane_ParamLimits

0xefdd,	// (0x00083145) bg_popup_call_poc_act_pane

0xefdd,	// (0x00083145) bg_popup_call_poc_inact_pane_ParamLimits

0xefdd,	// (0x00083145) bg_popup_call_poc_inact_pane

0xb524,	// (0x0007f68c) bg_popup_call_poc_act_pane_g1

0xb52c,	// (0x0007f694) bg_popup_call_poc_act_pane_g2

0xb534,	// (0x0007f69c) bg_popup_call_poc_act_pane_g3

0xb4ec,	// (0x0007f654) bg_popup_call_poc_act_pane_g4

0xb4f4,	// (0x0007f65c) bg_popup_call_poc_act_pane_g5

0xb53c,	// (0x0007f6a4) bg_popup_call_poc_act_pane_g6

0xb504,	// (0x0007f66c) bg_popup_call_poc_act_pane_g7

0xb544,	// (0x0007f6ac) bg_popup_call_poc_act_pane_g8

0xed82,	// (0x00082eea) main_usb_pane

0xb69d,	// (0x0007f805) popup_cale_lunar_info_window

0x2bda,	// (0x00076d42) im_reading_pane_t1_ParamLimits

0x2c16,	// (0x00076d7e) list_im_pane_ParamLimits

0x2c27,	// (0x00076d8f) scroll_pane_cp07_ParamLimits

0xed82,	// (0x00082eea) grid_highlight_pane_cp012

0xefdd,	// (0x00083145) mup_scale_pane_ParamLimits

0x49a2,	// (0x00078b0a) main_usb_pane_g1_ParamLimits

0x49a2,	// (0x00078b0a) main_usb_pane_g1

0x5969,	// (0x00079ad1) main_usb_pane_g2_ParamLimits

0x5969,	// (0x00079ad1) main_usb_pane_g2

0x0001,

0xf5cf,	// (0x00083737) main_usb_pane_g_ParamLimits

0xf5cf,	// (0x00083737) main_usb_pane_g

0x597f,	// (0x00079ae7) main_usb_pane_t1_ParamLimits

0x597f,	// (0x00079ae7) main_usb_pane_t1

0x5991,	// (0x00079af9) main_usb_pane_t2_ParamLimits

0x5991,	// (0x00079af9) main_usb_pane_t2

0x59a3,	// (0x00079b0b) main_usb_pane_t3_ParamLimits

0x59a3,	// (0x00079b0b) main_usb_pane_t3

0x59b5,	// (0x00079b1d) main_usb_pane_t4_ParamLimits

0x59b5,	// (0x00079b1d) main_usb_pane_t4

0x59c7,	// (0x00079b2f) main_usb_pane_t5_ParamLimits

0x59c7,	// (0x00079b2f) main_usb_pane_t5

0x59d9,	// (0x00079b41) main_usb_pane_t6_ParamLimits

0x59d9,	// (0x00079b41) main_usb_pane_t6

0x0005,

0xf5d4,	// (0x0008373c) main_usb_pane_t_ParamLimits

0x3f7f,	// (0x000780e7) aid_text_placing

0x3f88,	// (0x000780f0) main_location2_pane_t1_ParamLimits

0x3f9c,	// (0x00078104) main_location2_pane_t2_ParamLimits

0x3fb0,	// (0x00078118) main_location2_pane_t3_ParamLimits

0x3fc6,	// (0x0007812e) main_location2_pane_t4_ParamLimits

0x3fc6,	// (0x0007812e) main_location2_pane_t4

0xf3f3,	// (0x0008355b) main_location2_pane_t_ParamLimits

0xf021,	// (0x00083189) find_pinb_pane_g2_ParamLimits

0xf021,	// (0x00083189) find_pinb_pane_g2

0x0001,

0xf141,	// (0x000832a9) find_pinb_pane_g_ParamLimits

0xf141,	// (0x000832a9) find_pinb_pane_g

0xf02d,	// (0x00083195) find_pinb_pane_t1_ParamLimits

0xf03f,	// (0x000831a7) find_pinb_pane_t2_ParamLimits

0xf146,	// (0x000832ae) find_pinb_pane_t_ParamLimits

0xed82,	// (0x00082eea) main_call3_pane

0x32e0,	// (0x00077448) cale_month_day_heading_pane_t1_ParamLimits

0x333e,	// (0x000774a6) cale_month_day_heading_pane_t2_ParamLimits

0x33a3,	// (0x0007750b) cale_month_day_heading_pane_t3_ParamLimits

0x3408,	// (0x00077570) cale_month_day_heading_pane_t4_ParamLimits

0x346d,	// (0x000775d5) cale_month_day_heading_pane_t5_ParamLimits

0x34e2,	// (0x0007764a) cale_month_day_heading_pane_t6_ParamLimits

0x3557,	// (0x000776bf) cale_month_day_heading_pane_t7_ParamLimits

0xf2ca,	// (0x00083432) cale_month_day_heading_pane_t_ParamLimits

0x3775,	// (0x000778dd) smil_status_volume_pane

0x497e,	// (0x00078ae6) postcard_address_pane_ParamLimits

0x497e,	// (0x00078ae6) postcard_address_pane

0x4990,	// (0x00078af8) postcard_message_pane_ParamLimits

0x4990,	// (0x00078af8) postcard_message_pane

0x594c,	// (0x00079ab4) call2_cli_visual_pane_t1_ParamLimits

0x594c,	// (0x00079ab4) call2_cli_visual_pane_t1

0x6160,	// (0x0007a2c8) postcard_message_pane_t1_ParamLimits

0x6160,	// (0x0007a2c8) postcard_message_pane_t1

0x6149,	// (0x0007a2b1) postcard_address_pane_t1_ParamLimits

0x6149,	// (0x0007a2b1) postcard_address_pane_t1

0x6135,	// (0x0007a29d) popup_call3_audio_in_window_ParamLimits

0x6135,	// (0x0007a29d) popup_call3_audio_in_window

0x5fc4,	// (0x0007a12c) bg_popup_call3_in_pane_ParamLimits

0x5fc4,	// (0x0007a12c) bg_popup_call3_in_pane

0x6036,	// (0x0007a19e) popup_call3_audio_in_window_g1_ParamLimits

0x6036,	// (0x0007a19e) popup_call3_audio_in_window_g1

0x6056,	// (0x0007a1be) popup_call3_audio_in_window_g2_ParamLimits

0x6056,	// (0x0007a1be) popup_call3_audio_in_window_g2

0x6076,	// (0x0007a1de) popup_call3_audio_in_window_g3_ParamLimits

0x6076,	// (0x0007a1de) popup_call3_audio_in_window_g3

0x0003,

0xf636,	// (0x0008379e) popup_call3_audio_in_window_g_ParamLimits

0xf636,	// (0x0008379e) popup_call3_audio_in_window_g

0x60a7,	// (0x0007a20f) popup_call3_audio_in_window_t1_ParamLimits

0x60a7,	// (0x0007a20f) popup_call3_audio_in_window_t1

0x60e5,	// (0x0007a24d) popup_call3_audio_in_window_t2_ParamLimits

0x60e5,	// (0x0007a24d) popup_call3_audio_in_window_t2

0x6123,	// (0x0007a28b) popup_call3_audio_in_window_t3_ParamLimits

0x6123,	// (0x0007a28b) popup_call3_audio_in_window_t3

0x0002,

0xf63f,	// (0x000837a7) popup_call3_audio_in_window_t_ParamLimits

0xf63f,	// (0x000837a7) popup_call3_audio_in_window_t

0x4244,	// (0x000783ac) bg_popup_call3_rect_pane

0xb494,	// (0x0007f5fc) bg_popup_call3_rect_pane_g1

0x1fa8,	// (0x00076110) bg_popup_call3_rect_pane_g2

0xb49c,	// (0x0007f604) bg_popup_call3_rect_pane_g3

0xb4a4,	// (0x0007f60c) bg_popup_call3_rect_pane_g4

0xb4ac,	// (0x0007f614) bg_popup_call3_rect_pane_g5

0xb4b4,	// (0x0007f61c) bg_popup_call3_rect_pane_g6

0xb4bc,	// (0x0007f624) bg_popup_call3_rect_pane_g7

0x452c,	// (0x00078694) mup_visualizer_osc_pane

0x4542,	// (0x000786aa) mup_visualizer_spec_pane

0x5ff4,	// (0x0007a15c) call3_video_qcif_pane_ParamLimits

0x5ff4,	// (0x0007a15c) call3_video_qcif_pane

0x6005,	// (0x0007a16d) call3_video_qcif_uncrop_pane_ParamLimits

0x6005,	// (0x0007a16d) call3_video_qcif_uncrop_pane

0x6011,	// (0x0007a179) call3_video_subqcif_pane_ParamLimits

0x6011,	// (0x0007a179) call3_video_subqcif_pane

0x6025,	// (0x0007a18d) call3_video_subqcif_uncrop_pane_ParamLimits

0x6025,	// (0x0007a18d) call3_video_subqcif_uncrop_pane

0x6096,	// (0x0007a1fe) popup_call3_audio_in_window_g4_ParamLimits

0x6096,	// (0x0007a1fe) popup_call3_audio_in_window_g4

0x5fb3,	// (0x0007a11b) mup_spec_half_pane

0x5fbc,	// (0x0007a124) mup_spec_half_pane_cp

0xb734,	// (0x0007f89c) mup_osc_middle_pane

0xb73d,	// (0x0007f8a5) mup_visualizer_osc_pane_g1

0x5f93,	// (0x0007a0fb) mup_spec_bar_pane_ParamLimits

0x5f93,	// (0x0007a0fb) mup_spec_bar_pane

0xb721,	// (0x0007f889) mup_spec_bar_pane_g1

0xb72b,	// (0x0007f893) mup_spec_bar_pane_g2

0x0001,

0xf62a,	// (0x00083792) mup_spec_bar_pane_g

0x201d,	// (0x00076185) aid_cale_week_size_cell_pane_ParamLimits

0x2030,	// (0x00076198) bg_cale_heading_pane_ParamLimits

0x2048,	// (0x000761b0) bg_cale_pane_cp01_ParamLimits

0x2061,	// (0x000761c9) cale_week_corner_pane_ParamLimits

0x2072,	// (0x000761da) cale_week_day_heading_pane_ParamLimits

0x208a,	// (0x000761f2) cale_week_scroll_pane_g1_ParamLimits

0x209f,	// (0x00076207) cale_week_scroll_pane_g2_ParamLimits

0x20b0,	// (0x00076218) cale_week_scroll_pane_g3_ParamLimits

0x20c1,	// (0x00076229) cale_week_scroll_pane_g4_ParamLimits

0x20d2,	// (0x0007623a) cale_week_scroll_pane_g5_ParamLimits

0x20e5,	// (0x0007624d) cale_week_scroll_pane_g6_ParamLimits

0x20f8,	// (0x00076260) cale_week_scroll_pane_g7_ParamLimits

0x210b,	// (0x00076273) cale_week_scroll_pane_g8_ParamLimits

0x211e,	// (0x00076286) cale_week_scroll_pane_g9_ParamLimits

0x212f,	// (0x00076297) cale_week_scroll_pane_g10_ParamLimits

0x2140,	// (0x000762a8) cale_week_scroll_pane_g11_ParamLimits

0x2151,	// (0x000762b9) cale_week_scroll_pane_g12_ParamLimits

0x2162,	// (0x000762ca) cale_week_scroll_pane_g13_ParamLimits

0x2173,	// (0x000762db) cale_week_scroll_pane_g14_ParamLimits

0x2184,	// (0x000762ec) cale_week_scroll_pane_g15_ParamLimits

0xf1d2,	// (0x0008333a) cale_week_scroll_pane_g_ParamLimits

0x2195,	// (0x000762fd) cale_week_time_pane_ParamLimits

0x21a8,	// (0x00076310) grid_cale_week_pane_ParamLimits

0x21bd,	// (0x00076325) listscroll_cale_week_pane_t1

0x21cf,	// (0x00076337) scroll_pane_cp08_ParamLimits

0x2fab,	// (0x00077113) cale_month_corner_pane_ParamLimits

0x328d,	// (0x000773f5) cale_month_pane_t1

0x329f,	// (0x00077407) cale_month_week_pane_ParamLimits

0x3bcb,	// (0x00077d33) popup_call_status_window_g1_ParamLimits

0x3bdf,	// (0x00077d47) popup_call_status_window_g2_ParamLimits

0x3bf3,	// (0x00077d5b) popup_call_status_window_g3_ParamLimits

0xf37a,	// (0x000834e2) popup_call_status_window_g_ParamLimits

0x3c5c,	// (0x00077dc4) aid_call2_pane

0x0e79,	// (0x00074fe1) msg_header_pane_g1

0x497e,	// (0x00078ae6) postcard_address2_pane_ParamLimits

0x497e,	// (0x00078ae6) postcard_address2_pane

0x4990,	// (0x00078af8) postcard_message2_pane_ParamLimits

0x4990,	// (0x00078af8) postcard_message2_pane

0x5f40,	// (0x0007a0a8) message2_row_pane_ParamLimits

0x5f40,	// (0x0007a0a8) message2_row_pane

0x5f5f,	// (0x0007a0c7) address2_row_pane_ParamLimits

0x5f5f,	// (0x0007a0c7) address2_row_pane

0xb6ef,	// (0x0007f857) postcard_message2_row_pane_g1

0xb6f7,	// (0x0007f85f) postcard_message2_row_pane_t1

0xb6ef,	// (0x0007f857) address2_row_pane_g1

0xb6f7,	// (0x0007f85f) address2_row_pane_t1

0xac35,	// (0x0007ed9d) aid_size_cell_vorec

0xed82,	// (0x00082eea) main_rss_pane

0x5f72,	// (0x0007a0da) rss_list_single_pane_ParamLimits

0x5f72,	// (0x0007a0da) rss_list_single_pane

0xb705,	// (0x0007f86d) rss_list_single_pane_t1

0xb713,	// (0x0007f87b) rss_list_single_pane_t2

0x0001,

0xf625,	// (0x0008378d) rss_list_single_pane_t

0xed82,	// (0x00082eea) main_camera2_pane

0xed82,	// (0x00082eea) main_video2_pane

0x61d9,	// (0x0007a341) cams_zoom_pane_cp2_ParamLimits

0x61d9,	// (0x0007a341) cams_zoom_pane_cp2

0x61f9,	// (0x0007a361) image2_vga_pane_ParamLimits

0x61f9,	// (0x0007a361) image2_vga_pane

0x624a,	// (0x0007a3b2) main_camera2_pane_g1_ParamLimits

0x624a,	// (0x0007a3b2) main_camera2_pane_g1

0x626a,	// (0x0007a3d2) main_camera2_pane_g2_ParamLimits

0x626a,	// (0x0007a3d2) main_camera2_pane_g2

0x628a,	// (0x0007a3f2) main_camera2_pane_g3_ParamLimits

0x628a,	// (0x0007a3f2) main_camera2_pane_g3

0x62aa,	// (0x0007a412) main_camera2_pane_g4_ParamLimits

0x62aa,	// (0x0007a412) main_camera2_pane_g4

0x62ca,	// (0x0007a432) main_camera2_pane_g5_ParamLimits

0x62ca,	// (0x0007a432) main_camera2_pane_g5

0x62ea,	// (0x0007a452) main_camera2_pane_g6_ParamLimits

0x62ea,	// (0x0007a452) main_camera2_pane_g6

0x630a,	// (0x0007a472) main_camera2_pane_g7_ParamLimits

0x630a,	// (0x0007a472) main_camera2_pane_g7

0x632a,	// (0x0007a492) main_camera2_pane_g8_ParamLimits

0x632a,	// (0x0007a492) main_camera2_pane_g8

0x0008,

0xf646,	// (0x000837ae) main_camera2_pane_g_ParamLimits

0xf646,	// (0x000837ae) main_camera2_pane_g

0x636a,	// (0x0007a4d2) main_camera2_pane_t1_ParamLimits

0x636a,	// (0x0007a4d2) main_camera2_pane_t1

0x639f,	// (0x0007a507) main_camera2_pane_t2_ParamLimits

0x639f,	// (0x0007a507) main_camera2_pane_t2

0x63c5,	// (0x0007a52d) main_camera2_pane_t3_ParamLimits

0x63c5,	// (0x0007a52d) main_camera2_pane_t3

0x6423,	// (0x0007a58b) main_camera2_pane_t4_ParamLimits

0x6423,	// (0x0007a58b) main_camera2_pane_t4

0x0006,

0xf659,	// (0x000837c1) main_camera2_pane_t_ParamLimits

0xf659,	// (0x000837c1) main_camera2_pane_t

0x64b5,	// (0x0007a61d) cams_zoom_pane_cp4_ParamLimits

0x64b5,	// (0x0007a61d) cams_zoom_pane_cp4

0x64cb,	// (0x0007a633) image2_cif_pane_ParamLimits

0x64cb,	// (0x0007a633) image2_cif_pane

0x64f6,	// (0x0007a65e) image2_subqcif_pane_ParamLimits

0x64f6,	// (0x0007a65e) image2_subqcif_pane

0x6510,	// (0x0007a678) main_video2_pane_g1_ParamLimits

0x6510,	// (0x0007a678) main_video2_pane_g1

0x652a,	// (0x0007a692) main_video2_pane_g2_ParamLimits

0x652a,	// (0x0007a692) main_video2_pane_g2

0x6540,	// (0x0007a6a8) main_video2_pane_g3_ParamLimits

0x6540,	// (0x0007a6a8) main_video2_pane_g3

0x6556,	// (0x0007a6be) main_video2_pane_g4_ParamLimits

0x6556,	// (0x0007a6be) main_video2_pane_g4

0x656c,	// (0x0007a6d4) main_video2_pane_g5_ParamLimits

0x656c,	// (0x0007a6d4) main_video2_pane_g5

0x6582,	// (0x0007a6ea) main_video2_pane_g6_ParamLimits

0x6582,	// (0x0007a6ea) main_video2_pane_g6

0x0005,

0xf668,	// (0x000837d0) main_video2_pane_g_ParamLimits

0xf668,	// (0x000837d0) main_video2_pane_g

0x659c,	// (0x0007a704) main_video2_pane_t1_ParamLimits

0x659c,	// (0x0007a704) main_video2_pane_t1

0x65c0,	// (0x0007a728) main_video2_pane_t2_ParamLimits

0x65c0,	// (0x0007a728) main_video2_pane_t2

0x660e,	// (0x0007a776) main_video2_pane_t3_ParamLimits

0x660e,	// (0x0007a776) main_video2_pane_t3

0x0002,

0xf675,	// (0x000837dd) main_video2_pane_t_ParamLimits

0xf675,	// (0x000837dd) main_video2_pane_t

0x5a96,	// (0x00079bfe) call_muted_g2

0x0001,

0xf617,	// (0x0008377f) call_muted_g

0xed82,	// (0x00082eea) main_mup2_pane

0x6656,	// (0x0007a7be) main_mup2_pane_g1_ParamLimits

0x6656,	// (0x0007a7be) main_mup2_pane_g1

0x6662,	// (0x0007a7ca) main_mup2_pane_g2_ParamLimits

0x6662,	// (0x0007a7ca) main_mup2_pane_g2

0xb8a5,	// (0x0007fa0d) main_mup_pane_g13_cp1

0xb8ad,	// (0x0007fa15) mup_volume_pane_cp1

0x667e,	// (0x0007a7e6) main_mup2_pane_g4_ParamLimits

0x667e,	// (0x0007a7e6) main_mup2_pane_g4

0x6690,	// (0x0007a7f8) main_mup2_pane_g5_ParamLimits

0x6690,	// (0x0007a7f8) main_mup2_pane_g5

0x66a2,	// (0x0007a80a) main_mup2_pane_g6_ParamLimits

0x66a2,	// (0x0007a80a) main_mup2_pane_g6

0x66b4,	// (0x0007a81c) main_mup2_pane_g7_ParamLimits

0x66b4,	// (0x0007a81c) main_mup2_pane_g7

0x0006,

0xf67c,	// (0x000837e4) main_mup2_pane_g_ParamLimits

0xf67c,	// (0x000837e4) main_mup2_pane_g

0x66cc,	// (0x0007a834) main_mup2_pane_t1_ParamLimits

0x66cc,	// (0x0007a834) main_mup2_pane_t1

0x66e2,	// (0x0007a84a) main_mup2_pane_t2_ParamLimits

0x66e2,	// (0x0007a84a) main_mup2_pane_t2

0x66f8,	// (0x0007a860) main_mup2_pane_t3_ParamLimits

0x66f8,	// (0x0007a860) main_mup2_pane_t3

0x670e,	// (0x0007a876) main_mup2_pane_t4_ParamLimits

0x670e,	// (0x0007a876) main_mup2_pane_t4

0x6726,	// (0x0007a88e) main_mup2_pane_t5_ParamLimits

0x6726,	// (0x0007a88e) main_mup2_pane_t5

0x673e,	// (0x0007a8a6) main_mup2_pane_t6_ParamLimits

0x673e,	// (0x0007a8a6) main_mup2_pane_t6

0x0005,

0xf68b,	// (0x000837f3) main_mup2_pane_t_ParamLimits

0xf68b,	// (0x000837f3) main_mup2_pane_t

0x676e,	// (0x0007a8d6) mup2_visualizer_pane_ParamLimits

0x676e,	// (0x0007a8d6) mup2_visualizer_pane

0x679c,	// (0x0007a904) mup_progress_pane_cp_ParamLimits

0x679c,	// (0x0007a904) mup_progress_pane_cp

0xb887,	// (0x0007f9ef) mup_volume_pane_cp_ParamLimits

0xb887,	// (0x0007f9ef) mup_volume_pane_cp

0x67b0,	// (0x0007a918) mup2_visualizer_pane_g1_ParamLimits

0x67b0,	// (0x0007a918) mup2_visualizer_pane_g1

0xb7c6,	// (0x0007f92e) mup2_visualizer_pane_g2_ParamLimits

0xb7c6,	// (0x0007f92e) mup2_visualizer_pane_g2

0x67c7,	// (0x0007a92f) mup2_visualizer_pane_g3_ParamLimits

0x67c7,	// (0x0007a92f) mup2_visualizer_pane_g3

0x0002,

0xf698,	// (0x00083800) mup2_visualizer_pane_g_ParamLimits

0xf698,	// (0x00083800) mup2_visualizer_pane_g

0x4d53,	// (0x00078ebb) aid_size_cell_fmradio

0x5c48,	// (0x00079db0) aid_height_parent_landcape

0x2cdf,	// (0x00076e47) wml_content_pane_cp

0x2ce7,	// (0x00076e4f) wml_tabs_pane

0x2cf0,	// (0x00076e58) popup_wml_miniature_window

0x2cf8,	// (0x00076e60) scroll_pane_cp021

0x2d0c,	// (0x00076e74) wml_content_pane_comp8

0xed82,	// (0x00082eea) bg_popup_sub_pane_cp05

0xb7e4,	// (0x0007f94c) popup_wml_miniature_window_g1

0xb7ec,	// (0x0007f954) wml_miniature_view_pane

0x67d3,	// (0x0007a93b) aid_size_wml_view

0x67db,	// (0x0007a943) wml_miniature_view_pane_g1

0x67e4,	// (0x0007a94c) wml_miniature_view_pane_g2

0x67ed,	// (0x0007a955) wml_miniature_view_pane_g3

0x67f5,	// (0x0007a95d) wml_miniature_view_pane_g4

0x67fd,	// (0x0007a965) wml_miniature_view_pane_g5

0x6805,	// (0x0007a96d) wml_miniature_view_pane_g6

0x680d,	// (0x0007a975) wml_miniature_view_pane_g7

0x6815,	// (0x0007a97d) wml_miniature_view_pane_g8

0x0007,

0xf69f,	// (0x00083807) wml_miniature_view_pane_g

0xb7f4,	// (0x0007f95c) background_graphic_ParamLimits

0xb7f4,	// (0x0007f95c) background_graphic

0xb800,	// (0x0007f968) wml_tabs_2_pane

0xb809,	// (0x0007f971) wml_tabs_3_pane_ParamLimits

0xb809,	// (0x0007f971) wml_tabs_3_pane

0xb81b,	// (0x0007f983) wml_tabs_4_pane_ParamLimits

0xb81b,	// (0x0007f983) wml_tabs_4_pane

0xb831,	// (0x0007f999) wml_tabs_5_pane_ParamLimits

0xb831,	// (0x0007f999) wml_tabs_5_pane

0xb84b,	// (0x0007f9b3) wml_tabs_pane_g2_ParamLimits

0xb84b,	// (0x0007f9b3) wml_tabs_pane_g2

0xb85f,	// (0x0007f9c7) wml_tabs_pane_g3_ParamLimits

0xb85f,	// (0x0007f9c7) wml_tabs_pane_g3

0x681d,	// (0x0007a985) wml_tabs_2_active_pane_ParamLimits

0x681d,	// (0x0007a985) wml_tabs_2_active_pane

0x6831,	// (0x0007a999) wml_tabs_2_passive_pane_ParamLimits

0x6831,	// (0x0007a999) wml_tabs_2_passive_pane

0x6845,	// (0x0007a9ad) wml_tabs_3_active_pane_cp_ParamLimits

0x6845,	// (0x0007a9ad) wml_tabs_3_active_pane_cp

0x685a,	// (0x0007a9c2) wml_tabs_3_passive_pane_ParamLimits

0x685a,	// (0x0007a9c2) wml_tabs_3_passive_pane

0x686d,	// (0x0007a9d5) wml_tabs_3_passive_pane_cp_ParamLimits

0x686d,	// (0x0007a9d5) wml_tabs_3_passive_pane_cp

0x6884,	// (0x0007a9ec) tabs_4_active_pane

0x688c,	// (0x0007a9f4) tabs_4_passive_pane

0x6896,	// (0x0007a9fe) tabs_4_passive_pane_cp

0x689e,	// (0x0007aa06) tabs_4_passive_pane_cp2

0xb51c,	// (0x0007f684) aid_height_text

0x44fe,	// (0x00078666) mup_volume_cont_pane_ParamLimits

0x44fe,	// (0x00078666) mup_volume_cont_pane

0x1b42,	// (0x00075caa) aid_size_cell_pinb

0xf00d,	// (0x00083175) aid_size_list_pinb

0x6788,	// (0x0007a8f0) mup2_volume_cont_pane_ParamLimits

0x6788,	// (0x0007a8f0) mup2_volume_cont_pane

0xb873,	// (0x0007f9db) mup2_volume_cont_pane_g1_ParamLimits

0xb873,	// (0x0007f9db) mup2_volume_cont_pane_g1

0x1823,	// (0x0007598b) aid_size_cell_touch_ParamLimits

0x1823,	// (0x0007598b) aid_size_cell_touch

0x1a31,	// (0x00075b99) touch_pane_ParamLimits

0x1a31,	// (0x00075b99) touch_pane

0xab43,	// (0x0007ecab) main_rss2_pane

0xb8b5,	// (0x0007fa1d) listscroll_rss2_pane

0xb8be,	// (0x0007fa26) rss2_navigation_pane

0xb8c6,	// (0x0007fa2e) list_rss2_pane

0x3e0b,	// (0x00077f73) scroll_pane_cp22

0xb8ce,	// (0x0007fa36) rss2_navigation_pane_g1

0xb8d7,	// (0x0007fa3f) rss2_navigation_pane_g2

0xb8df,	// (0x0007fa47) rss2_navigation_pane_g3

0x0002,

0xf6b0,	// (0x00083818) rss2_navigation_pane_g

0xb8e7,	// (0x0007fa4f) rss2_navigation_pane_t1

0x68a8,	// (0x0007aa10) rss2_list_single_pane_ParamLimits

0x68a8,	// (0x0007aa10) rss2_list_single_pane

0xb8f5,	// (0x0007fa5d) rss2_list_single_pane_t2

0xb903,	// (0x0007fa6b) rss2_list_single_pane_t3_ParamLimits

0xb903,	// (0x0007fa6b) rss2_list_single_pane_t3

0xb920,	// (0x0007fa88) rss2_list_single_pane_t4

0x375d,	// (0x000778c5) smil_status_pane_g1

0xe93a,	// (0x00082aa2) main_image2_pane_ParamLimits

0xe93a,	// (0x00082aa2) main_image2_pane

0x634a,	// (0x0007a4b2) main_camera2_pane_g9_ParamLimits

0x634a,	// (0x0007a4b2) main_camera2_pane_g9

0x6478,	// (0x0007a5e0) main_camera2_pane_t5_ParamLimits

0x6478,	// (0x0007a5e0) main_camera2_pane_t5

0xb796,	// (0x0007f8fe) main_camera2_pane_t6_ParamLimits

0xb796,	// (0x0007f8fe) main_camera2_pane_t6

0x68c0,	// (0x0007aa28) main_image2_pane_g1_ParamLimits

0x68c0,	// (0x0007aa28) main_image2_pane_g1

0x4d09,	// (0x00078e71) smil2_video_pane_ParamLimits

0x4d09,	// (0x00078e71) smil2_video_pane

0xab71,	// (0x0007ecd9) aid_zoom_text_primary_cp

0xe930,	// (0x00082a98) popup_preview_fixed_window

0x2bd2,	// (0x00076d3a) im_reading_pane_g1

0x61c1,	// (0x0007a329) cams2_bc_adjust_pane_cp_ParamLimits

0x61c1,	// (0x0007a329) cams2_bc_adjust_pane_cp

0x64a7,	// (0x0007a60f) cams2_bc_adjust_pane_ParamLimits

0x64a7,	// (0x0007a60f) cams2_bc_adjust_pane

0xb92e,	// (0x0007fa96) cams2_bc_adjust_pane_g1

0xb936,	// (0x0007fa9e) cams2_slider_pane

0xb93f,	// (0x0007faa7) cams2_slider_pane_g1

0xb948,	// (0x0007fab0) cams2_slider_pane_g2

0x0006,

0xf6b7,	// (0x0008381f) cams2_slider_pane_g

0x1c01,	// (0x00075d69) calc_display_pane_ParamLimits

0x1c29,	// (0x00075d91) calc_paper_pane_ParamLimits

0x1c4c,	// (0x00075db4) grid_calc_pane_ParamLimits

0xae8e,	// (0x0007eff6) popup_clock_digital_window_t1_ParamLimits

0x4b8c,	// (0x00078cf4) main_image_pane_t1

0x1be3,	// (0x00075d4b) aid_size_cell_calc_ParamLimits

0x1be3,	// (0x00075d4b) aid_size_cell_calc

0x5c8e,	// (0x00079df6) popup_blid_sat_info2_window_ParamLimits

0x5c8e,	// (0x00079df6) popup_blid_sat_info2_window

0xb96a,	// (0x0007fad2) aid_size_cell_blid

0xb972,	// (0x0007fada) bg_popup_window_pane_cp07

0xb995,	// (0x0007fafd) grid_popup_blid_pane

0xb99f,	// (0x0007fb07) heading_pane_cp05_ParamLimits

0xb99f,	// (0x0007fb07) heading_pane_cp05

0xba69,	// (0x0007fbd1) cell_popup_blid_pane_ParamLimits

0xba69,	// (0x0007fbd1) cell_popup_blid_pane

0xba8f,	// (0x0007fbf7) cell_popup_blid_pane_g1

0xba97,	// (0x0007fbff) cell_popup_blid_pane_t1

0x6758,	// (0x0007a8c0) mup2_indicator_pane_ParamLimits

0x6758,	// (0x0007a8c0) mup2_indicator_pane

0x4244,	// (0x000783ac) mup2_visualizer_osc_pane

0xb7d2,	// (0x0007f93a) mup2_visualizer_spec_pane_ParamLimits

0xb7d2,	// (0x0007f93a) mup2_visualizer_spec_pane

0x68d6,	// (0x0007aa3e) mup2_spec_half_pane

0x68df,	// (0x0007aa47) mup2_spec_half_pane_cp

0x68e7,	// (0x0007aa4f) mup2_spec_bar_pane_ParamLimits

0x68e7,	// (0x0007aa4f) mup2_spec_bar_pane

0xb721,	// (0x0007f889) mup2_spec_bar_pane_g1

0xb72b,	// (0x0007f893) mup2_spec_bar_pane_g2

0x0001,

0xf62a,	// (0x00083792) mup2_spec_bar_pane_g

0x6907,	// (0x0007aa6f) mup2_osc_middle_pane

0xb73d,	// (0x0007f8a5) mup2_visualizer_osc_pane_g1

0xe968,	// (0x00082ad0) popup_number_entry_window_t1_ParamLimits

0xe97b,	// (0x00082ae3) popup_number_entry_window_t2_ParamLimits

0xe98d,	// (0x00082af5) popup_number_entry_window_t3_ParamLimits

0x1a83,	// (0x00075beb) popup_number_entry_window_t5_ParamLimits

0x1a83,	// (0x00075beb) popup_number_entry_window_t5

0xf0ec,	// (0x00083254) popup_number_entry_window_t_ParamLimits

0xe99f,	// (0x00082b07) text_title_cp2_ParamLimits

0xaecd,	// (0x0007f035) aid_hotspot_pointer_text2_pane

0xaef3,	// (0x0007f05b) main_viewer_pane_g9_ParamLimits

0xaef3,	// (0x0007f05b) main_viewer_pane_g9

0x328d,	// (0x000773f5) cale_month_pane_t1_ParamLimits

0x37e7,	// (0x0007794f) bg_cale_pane_ParamLimits

0x37ff,	// (0x00077967) list_cale_pane_ParamLimits

0x21bd,	// (0x00076325) listscroll_cale_day_pane_t1

0x3810,	// (0x00077978) scroll_pane_cp09_ParamLimits

0x45b0,	// (0x00078718) main_mup_eq_pane_t1_ParamLimits

0x45b0,	// (0x00078718) main_mup_eq_pane_t1

0x45ca,	// (0x00078732) main_mup_eq_pane_t2_ParamLimits

0x45ca,	// (0x00078732) main_mup_eq_pane_t2

0x45e4,	// (0x0007874c) main_mup_eq_pane_t3_ParamLimits

0x45e4,	// (0x0007874c) main_mup_eq_pane_t3

0x4600,	// (0x00078768) main_mup_eq_pane_t4_ParamLimits

0x4600,	// (0x00078768) main_mup_eq_pane_t4

0x461c,	// (0x00078784) main_mup_eq_pane_t5_ParamLimits

0x461c,	// (0x00078784) main_mup_eq_pane_t5

0x4638,	// (0x000787a0) main_mup_eq_pane_t6_ParamLimits

0x4638,	// (0x000787a0) main_mup_eq_pane_t6

0x464c,	// (0x000787b4) main_mup_eq_pane_t7_ParamLimits

0x464c,	// (0x000787b4) main_mup_eq_pane_t7

0x4660,	// (0x000787c8) main_mup_eq_pane_t8_ParamLimits

0x4660,	// (0x000787c8) main_mup_eq_pane_t8

0x4674,	// (0x000787dc) main_mup_eq_pane_t9_ParamLimits

0x4674,	// (0x000787dc) main_mup_eq_pane_t9

0x468e,	// (0x000787f6) main_mup_eq_pane_t10_ParamLimits

0x468e,	// (0x000787f6) main_mup_eq_pane_t10

0x0009,

0xf479,	// (0x000835e1) main_mup_eq_pane_t_ParamLimits

0xf479,	// (0x000835e1) main_mup_eq_pane_t

0x473d,	// (0x000788a5) mup_equalizer_pane_cp5_ParamLimits

0x4751,	// (0x000788b9) mup_equalizer_pane_cp6_ParamLimits

0x4765,	// (0x000788cd) mup_equalizer_pane_cp7_ParamLimits

0xab43,	// (0x0007ecab) main_gallery_pane

0xb746,	// (0x0007f8ae) smil2_volume_pane

0xb74e,	// (0x0007f8b6) smil_status_volume_pane_g1_ParamLimits

0xb761,	// (0x0007f8c9) smil_status_volume_pane_g2_ParamLimits

0xb774,	// (0x0007f8dc) smil_status_volume_pane_g3_ParamLimits

0xf62f,	// (0x00083797) smil_status_volume_pane_g_ParamLimits

0xb972,	// (0x0007fada) bg_popup_window_pane_cp07_ParamLimits

0xb980,	// (0x0007fae8) blid_firmament_pane

0x6910,	// (0x0007aa78) aid_size_cell_gallery_ParamLimits

0x6910,	// (0x0007aa78) aid_size_cell_gallery

0x6926,	// (0x0007aa8e) grid_gallery_pane_ParamLimits

0x6926,	// (0x0007aa8e) grid_gallery_pane

0x693f,	// (0x0007aaa7) cell_gallery_pane_ParamLimits

0x693f,	// (0x0007aaa7) cell_gallery_pane

0xbaa5,	// (0x0007fc0d) bg_cell_gallery_focus_pane_ParamLimits

0xbaa5,	// (0x0007fc0d) bg_cell_gallery_focus_pane

0xbab7,	// (0x0007fc1f) cell_gallery_pane_g1_ParamLimits

0xbab7,	// (0x0007fc1f) cell_gallery_pane_g1

0x6988,	// (0x0007aaf0) cell_gallery_pane_g2_ParamLimits

0x6988,	// (0x0007aaf0) cell_gallery_pane_g2

0x6995,	// (0x0007aafd) cell_gallery_pane_g3_ParamLimits

0x6995,	// (0x0007aafd) cell_gallery_pane_g3

0xbac3,	// (0x0007fc2b) cell_gallery_pane_g4_ParamLimits

0xbac3,	// (0x0007fc2b) cell_gallery_pane_g4

0x0003,

0xf6dd,	// (0x00083845) cell_gallery_pane_g_ParamLimits

0xf6dd,	// (0x00083845) cell_gallery_pane_g

0xbacf,	// (0x0007fc37) bg_cell_gallery_focus_pane_g1

0xbad7,	// (0x0007fc3f) bg_cell_gallery_focus_pane_g2

0xbadf,	// (0x0007fc47) bg_cell_gallery_focus_pane_g3

0xbae7,	// (0x0007fc4f) bg_cell_gallery_focus_pane_g4

0xbaef,	// (0x0007fc57) bg_cell_gallery_focus_pane_g5

0xbaf7,	// (0x0007fc5f) bg_cell_gallery_focus_pane_g6

0xbaff,	// (0x0007fc67) bg_cell_gallery_focus_pane_g7

0xbb07,	// (0x0007fc6f) bg_cell_gallery_focus_pane_g8

0x0007,

0xf6e6,	// (0x0008384e) bg_cell_gallery_focus_pane_g

0xbb0f,	// (0x0007fc77) aid_firma_cardinal

0xbb23,	// (0x0007fc8b) blid_firmament_pane_t1

0xbb3a,	// (0x0007fca2) blid_firmament_pane_t2

0xbb51,	// (0x0007fcb9) blid_firmament_pane_t3

0xbb68,	// (0x0007fcd0) blid_firmament_pane_t4

0x0003,

0xf6f7,	// (0x0008385f) blid_firmament_pane_t

0xbb7f,	// (0x0007fce7) blid_sat_info_pane

0xbb8f,	// (0x0007fcf7) blid_sat_info_pane_g1

0xbb8f,	// (0x0007fcf7) blid_sat_info_pane_g2

0x0001,

0xf700,	// (0x00083868) blid_sat_info_pane_g

0xbb99,	// (0x0007fd01) blid_sat_info_pane_t1

0xbba7,	// (0x0007fd0f) smil2_volume_content_pane

0xbbb0,	// (0x0007fd18) smil2_volume_pane_g1

0xbbb8,	// (0x0007fd20) smil2_volume_content_pane_g1

0xbbc1,	// (0x0007fd29) smil2_volume_content_pane_g2

0xbbca,	// (0x0007fd32) smil2_volume_content_pane_g3

0xbbd3,	// (0x0007fd3b) smil2_volume_content_pane_g4

0xbbdc,	// (0x0007fd44) smil2_volume_content_pane_g5

0xbbe5,	// (0x0007fd4d) smil2_volume_content_pane_g6

0xbbee,	// (0x0007fd56) smil2_volume_content_pane_g7

0xbbf7,	// (0x0007fd5f) smil2_volume_content_pane_g8

0xbc00,	// (0x0007fd68) smil2_volume_content_pane_g9

0xbc09,	// (0x0007fd71) smil2_volume_content_pane_g10

0x0009,

0xf705,	// (0x0008386d) smil2_volume_content_pane_g

0x2229,	// (0x00076391) cale_week_day_heading_pane_t1_ParamLimits

0x223d,	// (0x000763a5) cale_week_day_heading_pane_t2_ParamLimits

0x2251,	// (0x000763b9) cale_week_day_heading_pane_t3_ParamLimits

0x2265,	// (0x000763cd) cale_week_day_heading_pane_t4_ParamLimits

0x2279,	// (0x000763e1) cale_week_day_heading_pane_t5_ParamLimits

0x228d,	// (0x000763f5) cale_week_day_heading_pane_t6_ParamLimits

0x22a3,	// (0x0007640b) cale_week_day_heading_pane_t7_ParamLimits

0xf1f1,	// (0x00083359) cale_week_day_heading_pane_t_ParamLimits

0x22b7,	// (0x0007641f) bg_cale_side_pane_ParamLimits

0x22c5,	// (0x0007642d) cale_week_time_pane_t1_ParamLimits

0x22dd,	// (0x00076445) cale_week_time_pane_t2_ParamLimits

0x22f5,	// (0x0007645d) cale_week_time_pane_t3_ParamLimits

0x230d,	// (0x00076475) cale_week_time_pane_t4_ParamLimits

0x2325,	// (0x0007648d) cale_week_time_pane_t5_ParamLimits

0x233d,	// (0x000764a5) cale_week_time_pane_t6_ParamLimits

0x2355,	// (0x000764bd) cale_week_time_pane_t7_ParamLimits

0x236d,	// (0x000764d5) cale_week_time_pane_t8_ParamLimits

0xf200,	// (0x00083368) cale_week_time_pane_t_ParamLimits

0x2385,	// (0x000764ed) cell_cale_week_pane_g2_ParamLimits

0x22b7,	// (0x0007641f) bg_cale_side_pane_cp01_ParamLimits

0x35cc,	// (0x00077734) cale_month_week_pane_t1_ParamLimits

0x35e3,	// (0x0007774b) cale_month_week_pane_t2_ParamLimits

0x35fa,	// (0x00077762) cale_month_week_pane_t3_ParamLimits

0x3611,	// (0x00077779) cale_month_week_pane_t4_ParamLimits

0x3628,	// (0x00077790) cale_month_week_pane_t5_ParamLimits

0x363f,	// (0x000777a7) cale_month_week_pane_t6_ParamLimits

0xf2d9,	// (0x00083441) cale_month_week_pane_t_ParamLimits

0xad97,	// (0x0007eeff) cell_cale_month_pane_g1_ParamLimits

0xab43,	// (0x0007ecab) main_cale_event_viewer_pane

0xab43,	// (0x0007ecab) listscroll_cale_event_viewer_pane

0xbc12,	// (0x0007fd7a) list_cale_ev_pane

0xbc1a,	// (0x0007fd82) scroll_pane_cp023

0xbc26,	// (0x0007fd8e) field_cale_ev_pane_ParamLimits

0xbc26,	// (0x0007fd8e) field_cale_ev_pane

0xbc40,	// (0x0007fda8) field_cale_ev_content_pane_ParamLimits

0xbc40,	// (0x0007fda8) field_cale_ev_content_pane

0xbc4c,	// (0x0007fdb4) field_cale_ev_pane_g1_ParamLimits

0xbc4c,	// (0x0007fdb4) field_cale_ev_pane_g1

0xbc58,	// (0x0007fdc0) field_cale_ev_pane_g2_ParamLimits

0xbc58,	// (0x0007fdc0) field_cale_ev_pane_g2

0xbc70,	// (0x0007fdd8) field_cale_ev_pane_g3_ParamLimits

0xbc70,	// (0x0007fdd8) field_cale_ev_pane_g3

0x0002,

0xf71a,	// (0x00083882) field_cale_ev_pane_g_ParamLimits

0xf71a,	// (0x00083882) field_cale_ev_pane_g

0xbc88,	// (0x0007fdf0) field_cale_ev_pane_t1_ParamLimits

0xbc88,	// (0x0007fdf0) field_cale_ev_pane_t1

0xbc9f,	// (0x0007fe07) field_cale_ev_content_pane_t1_ParamLimits

0xbc9f,	// (0x0007fe07) field_cale_ev_content_pane_t1

0x4805,	// (0x0007896d) bg_button_pane_cp01

0x1d41,	// (0x00075ea9) listscroll_cale_week_pane_ParamLimits

0x2013,	// (0x0007617b) popup_toolbar_window_cp01

0x21bd,	// (0x00076325) listscroll_cale_week_pane_t1_ParamLimits

0x1d41,	// (0x00075ea9) listscroll_cale_day_pane_ParamLimits

0x37dd,	// (0x00077945) popup_toolbar_window_cp02

0x21bd,	// (0x00076325) listscroll_cale_day_pane_t1_ParamLimits

0x1d41,	// (0x00075ea9) main_cale_month_pane_ParamLimits

0x5eb4,	// (0x0007a01c) popup_toolbar_window_cp03_ParamLimits

0x5eb4,	// (0x0007a01c) popup_toolbar_window_cp03

0x4b6a,	// (0x00078cd2) main_image_pane_g2_ParamLimits

0x4b6a,	// (0x00078cd2) main_image_pane_g2

0x4b7b,	// (0x00078ce3) main_image_pane_g3_ParamLimits

0x4b7b,	// (0x00078ce3) main_image_pane_g3

0x0002,

0xf50b,	// (0x00083673) main_image_pane_g_ParamLimits

0xf50b,	// (0x00083673) main_image_pane_g

0x4b8c,	// (0x00078cf4) main_image_pane_t1_ParamLimits

0x4ba3,	// (0x00078d0b) main_image_pane_t2_ParamLimits

0x4ba3,	// (0x00078d0b) main_image_pane_t2

0x4bb5,	// (0x00078d1d) main_image_pane_t3_ParamLimits

0x4bb5,	// (0x00078d1d) main_image_pane_t3

0x4bdd,	// (0x00078d45) main_image_pane_t4_ParamLimits

0x4bdd,	// (0x00078d45) main_image_pane_t4

0x0003,

0xf512,	// (0x0008367a) main_image_pane_t_ParamLimits

0xf512,	// (0x0008367a) main_image_pane_t

0x4bfd,	// (0x00078d65) popup_image_details_window_cp01

0x4c07,	// (0x00078d6f) popup_toobar_trans_pane_cp01_ParamLimits

0x4c07,	// (0x00078d6f) popup_toobar_trans_pane_cp01

0x5d65,	// (0x00079ecd) popup_image_details_window_ParamLimits

0x5d65,	// (0x00079ecd) popup_image_details_window

0xb6a7,	// (0x0007f80f) popup_image_focus_window

0x617b,	// (0x0007a2e3) camera2_autofocus_pane_ParamLimits

0x617b,	// (0x0007a2e3) camera2_autofocus_pane

0xab43,	// (0x0007ecab) bg_popup_sub_pane_cp06

0xbcbc,	// (0x0007fe24) popup_image_focus_window_g1

0xbcc4,	// (0x0007fe2c) popup_image_focus_window_g2

0xbccc,	// (0x0007fe34) popup_image_focus_window_g3

0xbcd4,	// (0x0007fe3c) popup_image_focus_window_g4

0x0003,

0xf721,	// (0x00083889) popup_image_focus_window_g

0xbcdc,	// (0x0007fe44) popup_image_focus_window_t1

0xbcea,	// (0x0007fe52) popup_image_focus_window_t2

0xbcfa,	// (0x0007fe62) popup_image_focus_window_t3

0x0002,

0xf72a,	// (0x00083892) popup_image_focus_window_t

0xbd08,	// (0x0007fe70) camera2_autofocus_pane_g1

0xe93a,	// (0x00082aa2) bg_tb_trans_pane_cp01

0xbd16,	// (0x0007fe7e) popup_image_details_window_g1

0xbd29,	// (0x0007fe91) popup_image_details_window_g2

0x0002,

0xf73c,	// (0x000838a4) popup_image_details_window_g

0xbd52,	// (0x0007feba) popup_image_details_window_t1

0xbd64,	// (0x0007fecc) popup_image_details_window_t2

0xbd7d,	// (0x0007fee5) popup_image_details_window_t3

0xbd91,	// (0x0007fef9) popup_image_details_window_t4

0xbdac,	// (0x0007ff14) popup_image_details_window_t5

0x0004,

0xf743,	// (0x000838ab) popup_image_details_window_t

0xf0d8,	// (0x00083240) bg_calc_paper_pane_ParamLimits

0xab43,	// (0x0007ecab) grid_highlight_pane_cp013

0xaba5,	// (0x0007ed0d) list_calc_pane_ParamLimits

0xabb7,	// (0x0007ed1f) scroll_pane_cp024

0x1d41,	// (0x00075ea9) bg_calc_display_pane_ParamLimits

0x1d4d,	// (0x00075eb5) calc_display_pane_t1_ParamLimits

0x1d5f,	// (0x00075ec7) calc_display_pane_t2_ParamLimits

0xabbf,	// (0x0007ed27) calc_display_pane_t3_ParamLimits

0xf173,	// (0x000832db) calc_display_pane_t_ParamLimits

0x1e6d,	// (0x00075fd5) cell_calc_pane_g2

0x0001,

0xf190,	// (0x000832f8) cell_calc_pane_g

0x1e76,	// (0x00075fde) cell_calc_pane_t1

0x1e85,	// (0x00075fed) grid_highlight_pane_cp02_ParamLimits

0x1e9b,	// (0x00076003) toolbar_button_pane_cp01_ParamLimits

0x1e9b,	// (0x00076003) toolbar_button_pane_cp01

0x4c49,	// (0x00078db1) temp_image_control_pane_ParamLimits

0x4c49,	// (0x00078db1) temp_image_control_pane

0xe93a,	// (0x00082aa2) main_mp3_pane

0xbdc6,	// (0x0007ff2e) temp_image_control_pane_g1_ParamLimits

0xbdc6,	// (0x0007ff2e) temp_image_control_pane_g1

0xbdd4,	// (0x0007ff3c) temp_image_control_pane_g2_ParamLimits

0xbdd4,	// (0x0007ff3c) temp_image_control_pane_g2

0xbde6,	// (0x0007ff4e) temp_image_control_pane_g3_ParamLimits

0xbde6,	// (0x0007ff4e) temp_image_control_pane_g3

0x69d2,	// (0x0007ab3a) temp_image_control_pane_g4_ParamLimits

0x69d2,	// (0x0007ab3a) temp_image_control_pane_g4

0x0003,

0xf74e,	// (0x000838b6) temp_image_control_pane_g_ParamLimits

0xf74e,	// (0x000838b6) temp_image_control_pane_g

0xbdc6,	// (0x0007ff2e) main_mp3_pane_g1

0x69e5,	// (0x0007ab4d) main_mp3_pane_g2

0x0007,

0xf757,	// (0x000838bf) main_mp3_pane_g

0xbe29,	// (0x0007ff91) main_mp3_pane_t1

0x24fc,	// (0x00076664) main_camera_pane_g8_ParamLimits

0x24fc,	// (0x00076664) main_camera_pane_g8

0x26b3,	// (0x0007681b) main_video_pane_g7_ParamLimits

0x26b3,	// (0x0007681b) main_video_pane_g7

0xb7b4,	// (0x0007f91c) main_camera2_pane_t7_ParamLimits

0xb7b4,	// (0x0007f91c) main_camera2_pane_t7

0x2c9f,	// (0x00076e07) scroll_pane_cp025_ParamLimits

0x2c9f,	// (0x00076e07) scroll_pane_cp025

0x2cb3,	// (0x00076e1b) scroll_pane_cp026_ParamLimits

0x2cb3,	// (0x00076e1b) scroll_pane_cp026

0x2cc2,	// (0x00076e2a) wml_content_pane_ParamLimits

0xab43,	// (0x0007ecab) main_touch_calib_pane

0x6ab1,	// (0x0007ac19) main_touch_calib_pane_g1

0x6abd,	// (0x0007ac25) main_touch_calib_pane_g2

0x6ac9,	// (0x0007ac31) main_touch_calib_pane_g3

0x6ad5,	// (0x0007ac3d) main_touch_calib_pane_g4

0x0003,

0xf775,	// (0x000838dd) main_touch_calib_pane_g

0x6ae1,	// (0x0007ac49) main_touch_calib_pane_t1

0x6afb,	// (0x0007ac63) main_touch_calib_pane_t2

0x0004,

0xf77e,	// (0x000838e6) main_touch_calib_pane_t

0x40bd,	// (0x00078225) mup_progress_pane_cp02

0x40dc,	// (0x00078244) navi_pane_g1

0x4195,	// (0x000782fd) navi_pane_mp_t3

0xe93a,	// (0x00082aa2) main_mp3_pane_ParamLimits

0x5ef2,	// (0x0007a05a) navi_pane_ParamLimits

0xbdc6,	// (0x0007ff2e) main_mp3_pane_g1_ParamLimits

0x69e5,	// (0x0007ab4d) main_mp3_pane_g2_ParamLimits

0x69f3,	// (0x0007ab5b) main_mp3_pane_g3_ParamLimits

0x69f3,	// (0x0007ab5b) main_mp3_pane_g3

0x6a01,	// (0x0007ab69) main_mp3_pane_g4_ParamLimits

0x6a01,	// (0x0007ab69) main_mp3_pane_g4

0xbdf6,	// (0x0007ff5e) main_mp3_pane_g5_ParamLimits

0xbdf6,	// (0x0007ff5e) main_mp3_pane_g5

0xbe04,	// (0x0007ff6c) main_mp3_pane_g6_ParamLimits

0xbe04,	// (0x0007ff6c) main_mp3_pane_g6

0xbe11,	// (0x0007ff79) main_mp3_pane_g7_ParamLimits

0xbe11,	// (0x0007ff79) main_mp3_pane_g7

0xbe1d,	// (0x0007ff85) main_mp3_pane_g8_ParamLimits

0xbe1d,	// (0x0007ff85) main_mp3_pane_g8

0xf757,	// (0x000838bf) main_mp3_pane_g_ParamLimits

0x6a0f,	// (0x0007ab77) main_mp3_pane_t2

0x6a1d,	// (0x0007ab85) main_mp3_pane_t3

0xbe37,	// (0x0007ff9f) main_mp3_pane_t4

0xbe45,	// (0x0007ffad) main_mp3_pane_t5

0x0005,

0xf768,	// (0x000838d0) main_mp3_pane_t

0xbe53,	// (0x0007ffbb) mup_progress_pane_cp01

0xab71,	// (0x0007ecd9) aid_zoom_text_secondary2

0xbc12,	// (0x0007fd7a) list_cale_ev2_pane

0xbc1a,	// (0x0007fd82) scroll_pane_cp023_ParamLimits

0x6b51,	// (0x0007acb9) field_cale_ev2_pane_ParamLimits

0x6b51,	// (0x0007acb9) field_cale_ev2_pane

0x6b77,	// (0x0007acdf) field_cale_ev2_pane_g1_ParamLimits

0x6b77,	// (0x0007acdf) field_cale_ev2_pane_g1

0x6b83,	// (0x0007aceb) field_cale_ev2_pane_g2_ParamLimits

0x6b83,	// (0x0007aceb) field_cale_ev2_pane_g2

0x6b9b,	// (0x0007ad03) field_cale_ev2_pane_g3_ParamLimits

0x6b9b,	// (0x0007ad03) field_cale_ev2_pane_g3

0x0003,

0xf789,	// (0x000838f1) field_cale_ev2_pane_g_ParamLimits

0xf789,	// (0x000838f1) field_cale_ev2_pane_g

0xbe67,	// (0x0007ffcf) field_cale_ev2_pane_t1_ParamLimits

0xbe67,	// (0x0007ffcf) field_cale_ev2_pane_t1

0xbe7e,	// (0x0007ffe6) field_cale_ev2_pane_t2_ParamLimits

0xbe7e,	// (0x0007ffe6) field_cale_ev2_pane_t2

0x0001,

0xf792,	// (0x000838fa) field_cale_ev2_pane_t_ParamLimits

0xf792,	// (0x000838fa) field_cale_ev2_pane_t

0x4934,	// (0x00078a9c) main_postcard_pane_g5_ParamLimits

0x4934,	// (0x00078a9c) main_postcard_pane_g5

0x494a,	// (0x00078ab2) main_postcard_pane_g6_ParamLimits

0x494a,	// (0x00078ab2) main_postcard_pane_g6

0x243d,	// (0x000765a5) camera2_autofocus_pane_cp_ParamLimits

0x243d,	// (0x000765a5) camera2_autofocus_pane_cp

0xe93a,	// (0x00082aa2) main_mup3_pane

0x6bd3,	// (0x0007ad3b) main_mup3_pane_g1_ParamLimits

0x6bd3,	// (0x0007ad3b) main_mup3_pane_g1

0x6bf5,	// (0x0007ad5d) main_mup3_pane_g2_ParamLimits

0x6bf5,	// (0x0007ad5d) main_mup3_pane_g2

0x6c76,	// (0x0007adde) main_mup3_pane_g3_ParamLimits

0x6c76,	// (0x0007adde) main_mup3_pane_g3

0x6cb8,	// (0x0007ae20) main_mup3_pane_g4_ParamLimits

0x6cb8,	// (0x0007ae20) main_mup3_pane_g4

0x6cfa,	// (0x0007ae62) main_mup3_pane_g5_ParamLimits

0x6cfa,	// (0x0007ae62) main_mup3_pane_g5

0x6d3e,	// (0x0007aea6) main_mup3_pane_g6_ParamLimits

0x6d3e,	// (0x0007aea6) main_mup3_pane_g6

0xbe93,	// (0x0007fffb) main_mup3_pane_g7_ParamLimits

0xbe93,	// (0x0007fffb) main_mup3_pane_g7

0x0007,

0xf7a2,	// (0x0008390a) main_mup3_pane_g_ParamLimits

0xf7a2,	// (0x0008390a) main_mup3_pane_g

0x6dba,	// (0x0007af22) main_mup3_pane_t1_ParamLimits

0x6dba,	// (0x0007af22) main_mup3_pane_t1

0x6e2e,	// (0x0007af96) main_mup3_pane_t2_ParamLimits

0x6e2e,	// (0x0007af96) main_mup3_pane_t2

0x6f02,	// (0x0007b06a) main_mup3_pane_t4_ParamLimits

0x6f02,	// (0x0007b06a) main_mup3_pane_t4

0x6f5c,	// (0x0007b0c4) main_mup3_pane_t5_ParamLimits

0x6f5c,	// (0x0007b0c4) main_mup3_pane_t5

0x7010,	// (0x0007b178) main_mup3_pane_t6_ParamLimits

0x7010,	// (0x0007b178) main_mup3_pane_t6

0x0005,

0xf7b3,	// (0x0008391b) main_mup3_pane_t_ParamLimits

0xf7b3,	// (0x0008391b) main_mup3_pane_t

0x70c4,	// (0x0007b22c) mup3_progress_pane_ParamLimits

0x70c4,	// (0x0007b22c) mup3_progress_pane

0x7140,	// (0x0007b2a8) popup_mup3_control_window_ParamLimits

0x7140,	// (0x0007b2a8) popup_mup3_control_window

0xbea1,	// (0x00080009) popup_mup3_text_window

0x7172,	// (0x0007b2da) mup3_progress_pane_t1

0x7189,	// (0x0007b2f1) mup3_progress_pane_t2

0xbea9,	// (0x00080011) mup3_progress_pane_t3

0x0002,

0xf7c0,	// (0x00083928) mup3_progress_pane_t

0xbec0,	// (0x00080028) mup_progress_pane_cp03

0xab43,	// (0x0007ecab) bg_tb_trans_pane_cp04

0x71a0,	// (0x0007b308) mup3_volume_pane

0x71a8,	// (0x0007b310) popup_mup3_control_window_g1

0x71b1,	// (0x0007b319) mup3_volume_pane_g1

0x71ba,	// (0x0007b322) mup3_volume_pane_g2

0x71c3,	// (0x0007b32b) mup3_volume_pane_g3

0x0002,

0xf7c7,	// (0x0008392f) mup3_volume_pane_g

0xab43,	// (0x0007ecab) bg_tb_trans_pane_cp03

0xbed0,	// (0x00080038) popup_mup3_text_window_g1

0xbed8,	// (0x00080040) popup_mup3_text_window_t1

0x1e3c,	// (0x00075fa4) list_calc_item_pane_g1_ParamLimits

0xb89c,	// (0x0007fa04) mup_volume_pane_cp_g1

0x6b15,	// (0x0007ac7d) main_touch_calib_pane_t3

0x6b29,	// (0x0007ac91) main_touch_calib_pane_t4

0x6b3d,	// (0x0007aca5) main_touch_calib_pane_t5

0xab4d,	// (0x0007ecb5) aid_cell_size_toolbar2

0xab55,	// (0x0007ecbd) aid_popup3_width_pane

0xab61,	// (0x0007ecc9) aid_zoom_text_msg_primary

0xac99,	// (0x0007ee01) vorec_t7

0x1da6,	// (0x00075f0e) bg_calc_paper_pane_g1_ParamLimits

0x1db2,	// (0x00075f1a) bg_calc_paper_pane_g2_ParamLimits

0x1dbe,	// (0x00075f26) bg_calc_paper_pane_g3_ParamLimits

0x1dca,	// (0x00075f32) bg_calc_paper_pane_g4_ParamLimits

0x1dd6,	// (0x00075f3e) bg_calc_paper_pane_g5_ParamLimits

0x1de2,	// (0x00075f4a) bg_calc_paper_pane_g6_ParamLimits

0x1df1,	// (0x00075f59) bg_calc_paper_pane_g7_ParamLimits

0x1e00,	// (0x00075f68) bg_calc_paper_pane_g8_ParamLimits

0xf17a,	// (0x000832e2) bg_calc_paper_pane_g_ParamLimits

0x1e13,	// (0x00075f7b) calc_bg_paper_pane_g9_ParamLimits

0x25a3,	// (0x0007670b) image_qvga_pane_ParamLimits

0x25a3,	// (0x0007670b) image_qvga_pane

0xefdd,	// (0x00083145) bg_popup_sub_pane_cp04_ParamLimits

0x4ac8,	// (0x00078c30) popup_mup_playback_window_g1_ParamLimits

0x4ad4,	// (0x00078c3c) popup_mup_playback_window_t1_ParamLimits

0x4ae9,	// (0x00078c51) popup_mup_playback_window_t2_ParamLimits

0xf506,	// (0x0008366e) popup_mup_playback_window_t_ParamLimits

0x6672,	// (0x0007a7da) main_mup2_pane_g3_ParamLimits

0x6672,	// (0x0007a7da) main_mup2_pane_g3

0x293d,	// (0x00076aa5) popup_toolbar_window_cp04

0x52e2,	// (0x0007944a) popup_call2_audio_second_window_g3_ParamLimits

0x52e2,	// (0x0007944a) popup_call2_audio_second_window_g3

0x56ec,	// (0x00079854) popup_call2_audio_first_window_g4_ParamLimits

0x56ec,	// (0x00079854) popup_call2_audio_first_window_g4

0xb31e,	// (0x0007f486) popup_call2_audio_in_window_g4_ParamLimits

0xb31e,	// (0x0007f486) popup_call2_audio_in_window_g4

0x4afe,	// (0x00078c66) aid_area_sk_bg_cut_ParamLimits

0x4afe,	// (0x00078c66) aid_area_sk_bg_cut

0x4b1c,	// (0x00078c84) aid_area_sk_bg_cut_2_ParamLimits

0x4b1c,	// (0x00078c84) aid_area_sk_bg_cut_2

0x6978,	// (0x0007aae0) aid_placing_details_win

0x6980,	// (0x0007aae8) aid_placing_details_win_2

0xbd08,	// (0x0007fe70) camera2_autofocus_pane_g1_ParamLimits

0x19d0,	// (0x00075b38) popup_fixed_preview_cale_window_ParamLimits

0x19d0,	// (0x00075b38) popup_fixed_preview_cale_window

0x4255,	// (0x000783bd) navi_slider_pane_g3

0x425e,	// (0x000783c6) navi_slider_pane_g4

0x4267,	// (0x000783cf) navi_slider_pane_g5

0x4255,	// (0x000783bd) navi_slider_pane_g6

0xaeb4,	// (0x0007f01c) navi_slider_pane_g7

0x4782,	// (0x000788ea) mup_scale_pane_g3

0x478b,	// (0x000788f3) mup_scale_pane_g4

0x4794,	// (0x000788fc) mup_scale_pane_g5

0x479d,	// (0x00078905) mup_scale_pane_g6

0x47a6,	// (0x0007890e) mup_scale_pane_g7

0x4255,	// (0x000783bd) cams2_slider_pane_g3

0xb951,	// (0x0007fab9) cams2_slider_pane_g4

0xb959,	// (0x0007fac1) cams2_slider_pane_g5

0x4255,	// (0x000783bd) cams2_slider_pane_g6

0xb961,	// (0x0007fac9) cams2_slider_pane_g7

0xbb8f,	// (0x0007fcf7) camera2_autofocus_pane_cp_g1

0xbee6,	// (0x0008004e) bg_popup_preview_window_pane_cp02_ParamLimits

0xbee6,	// (0x0008004e) bg_popup_preview_window_pane_cp02

0xbef2,	// (0x0008005a) list_fp_cale_pane_ParamLimits

0xbef2,	// (0x0008005a) list_fp_cale_pane

0xbefe,	// (0x00080066) popup_fixed_preview_cale_window_t1_ParamLimits

0xbefe,	// (0x00080066) popup_fixed_preview_cale_window_t1

0x71cc,	// (0x0007b334) popup_fixed_preview_cale_window_t2_ParamLimits

0x71cc,	// (0x0007b334) popup_fixed_preview_cale_window_t2

0x71e1,	// (0x0007b349) popup_fixed_preview_cale_window_t3_ParamLimits

0x71e1,	// (0x0007b349) popup_fixed_preview_cale_window_t3

0x0002,

0xf7ce,	// (0x00083936) popup_fixed_preview_cale_window_t_ParamLimits

0xf7ce,	// (0x00083936) popup_fixed_preview_cale_window_t

0x71f6,	// (0x0007b35e) list_single_fp_cale_pane_ParamLimits

0x71f6,	// (0x0007b35e) list_single_fp_cale_pane

0xbf1c,	// (0x00080084) list_single_fp_cale_pane_g1_ParamLimits

0xbf1c,	// (0x00080084) list_single_fp_cale_pane_g1

0xbf28,	// (0x00080090) list_single_fp_cale_pane_g2_ParamLimits

0xbf28,	// (0x00080090) list_single_fp_cale_pane_g2

0x0002,

0xf7d5,	// (0x0008393d) list_single_fp_cale_pane_g_ParamLimits

0xf7d5,	// (0x0008393d) list_single_fp_cale_pane_g

0xbf41,	// (0x000800a9) list_single_fp_cale_pane_t1_ParamLimits

0xbf41,	// (0x000800a9) list_single_fp_cale_pane_t1

0xbf53,	// (0x000800bb) list_single_fp_cale_pane_t2_ParamLimits

0xbf53,	// (0x000800bb) list_single_fp_cale_pane_t2

0x0001,

0xf7dc,	// (0x00083944) list_single_fp_cale_pane_t_ParamLimits

0xf7dc,	// (0x00083944) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0xab43,	// (0x0007ecab) main_dialer_pane

0x720e,	// (0x0007b376) aid_cell_size_keypad

0x7218,	// (0x0007b380) dialer_ne_pane

0x7220,	// (0x0007b388) grid_dialer_command_1_pane

0x7228,	// (0x0007b390) grid_dialer_command_2_pane

0x7230,	// (0x0007b398) grid_dialer_keypad_pane

0x7242,	// (0x0007b3aa) bg_popup_call_pane_cp06_ParamLimits

0x7242,	// (0x0007b3aa) bg_popup_call_pane_cp06

0x724e,	// (0x0007b3b6) dialer_ne_clear_pane_ParamLimits

0x724e,	// (0x0007b3b6) dialer_ne_clear_pane

0xbf86,	// (0x000800ee) dialer_ne_pane_g1

0xbf8e,	// (0x000800f6) dialer_ne_pane_t1_ParamLimits

0xbf8e,	// (0x000800f6) dialer_ne_pane_t1

0x725a,	// (0x0007b3c2) dialer_ne_pane_t2_ParamLimits

0x725a,	// (0x0007b3c2) dialer_ne_pane_t2

0x7284,	// (0x0007b3ec) dialer_ne_pane_t3_ParamLimits

0x7284,	// (0x0007b3ec) dialer_ne_pane_t3

0x0002,

0xf7e1,	// (0x00083949) dialer_ne_pane_t_ParamLimits

0xf7e1,	// (0x00083949) dialer_ne_pane_t

0x72b4,	// (0x0007b41c) dialer_ne_pane_t3_copy1_ParamLimits

0x72b4,	// (0x0007b41c) dialer_ne_pane_t3_copy1

0x72e3,	// (0x0007b44b) cell_dialer_keypad_pane_ParamLimits

0x72e3,	// (0x0007b44b) cell_dialer_keypad_pane

0x72fa,	// (0x0007b462) cell_dialer_command_1_pane_ParamLimits

0x72fa,	// (0x0007b462) cell_dialer_command_1_pane

0x7310,	// (0x0007b478) cell_dialer_command_2_pane_ParamLimits

0x7310,	// (0x0007b478) cell_dialer_command_2_pane

0xbfa0,	// (0x00080108) bg_button_pane_cp02_ParamLimits

0xbfa0,	// (0x00080108) bg_button_pane_cp02

0x731f,	// (0x0007b487) cell_dialer_keypad_pane_g1_ParamLimits

0x731f,	// (0x0007b487) cell_dialer_keypad_pane_g1

0xbfa0,	// (0x00080108) bg_button_pane_cp03_ParamLimits

0xbfa0,	// (0x00080108) bg_button_pane_cp03

0x7334,	// (0x0007b49c) cell_dialer_command_1_pane_g1_ParamLimits

0x7334,	// (0x0007b49c) cell_dialer_command_1_pane_g1

0xbfac,	// (0x00080114) bg_button_pane_cp04

0x7348,	// (0x0007b4b0) cell_dialer_command_2_pane_g1

0x4244,	// (0x000783ac) bg_button_pane_cp06

0xbfb4,	// (0x0008011c) dialer_ne_clear_pane_g1

0x40e8,	// (0x00078250) navi_pane_g2

0x4116,	// (0x0007827e) navi_pane_g3

0x0002,

0xf409,	// (0x00083571) navi_pane_g

0x41a3,	// (0x0007830b) navi_pane_mv_g2

0x41ca,	// (0x00078332) navi_pane_mv_g5

0x41d2,	// (0x0007833a) navi_pane_mv_t1

0x1d41,	// (0x00075ea9) main_clock2_pane

0x737b,	// (0x0007b4e3) main_clock2_list_pane_ParamLimits

0x737b,	// (0x0007b4e3) main_clock2_list_pane

0x73b1,	// (0x0007b519) main_clock2_pane_t1_ParamLimits

0x73b1,	// (0x0007b519) main_clock2_pane_t1

0x73ef,	// (0x0007b557) main_clock2_pane_t2_ParamLimits

0x73ef,	// (0x0007b557) main_clock2_pane_t2

0x0004,

0xf7e8,	// (0x00083950) main_clock2_pane_t_ParamLimits

0xf7e8,	// (0x00083950) main_clock2_pane_t

0x7479,	// (0x0007b5e1) popup_clock_analogue_window_cp03_ParamLimits

0x7479,	// (0x0007b5e1) popup_clock_analogue_window_cp03

0x74a0,	// (0x0007b608) popup_clock_digital_window_cp02_ParamLimits

0x74a0,	// (0x0007b608) popup_clock_digital_window_cp02

0x7515,	// (0x0007b67d) main_clock2_list_single_pane_ParamLimits

0x7515,	// (0x0007b67d) main_clock2_list_single_pane

0x4244,	// (0x000783ac) list_highlight_pane_cp05

0xbfbc,	// (0x00080124) main_clock2_list_single_pane_t1

0x293d,	// (0x00076aa5) popup_toolbar_window_cp04_ParamLimits

0x69a2,	// (0x0007ab0a) camera2_autofocus_pane_g2_ParamLimits

0x69a2,	// (0x0007ab0a) camera2_autofocus_pane_g2

0x69ae,	// (0x0007ab16) camera2_autofocus_pane_g3_ParamLimits

0x69ae,	// (0x0007ab16) camera2_autofocus_pane_g3

0x69ba,	// (0x0007ab22) camera2_autofocus_pane_g4_ParamLimits

0x69ba,	// (0x0007ab22) camera2_autofocus_pane_g4

0x69c6,	// (0x0007ab2e) camera2_autofocus_pane_g5_ParamLimits

0x69c6,	// (0x0007ab2e) camera2_autofocus_pane_g5

0x0004,

0xf731,	// (0x00083899) camera2_autofocus_pane_g_ParamLimits

0xf731,	// (0x00083899) camera2_autofocus_pane_g

0x6bb3,	// (0x0007ad1b) camera2_autofocus_pane_cp_g2

0x6bbb,	// (0x0007ad23) camera2_autofocus_pane_cp_g3

0x6bc3,	// (0x0007ad2b) camera2_autofocus_pane_cp_g4

0x6bcb,	// (0x0007ad33) camera2_autofocus_pane_cp_g5

0x0004,

0xf797,	// (0x000838ff) camera2_autofocus_pane_cp_g

0x723a,	// (0x0007b3a2) popup_dialer_spcha_window

0xab43,	// (0x0007ecab) bg_popup_sub_pane_cp07

0xbfca,	// (0x00080132) list_spcha_pane

0xbfd2,	// (0x0008013a) list_single_spcha_pane_ParamLimits

0xbfd2,	// (0x0008013a) list_single_spcha_pane

0xab43,	// (0x0007ecab) list_highlight_pane_cp06

0xbfe3,	// (0x0008014b) list_single_spcha_pane_t1

0xb0c8,	// (0x0007f230) popup_call2_audio_out_window_g4_ParamLimits

0xb0c8,	// (0x0007f230) popup_call2_audio_out_window_g4

0xab43,	// (0x0007ecab) main_imed2_pane

0xb6af,	// (0x0007f817) popup_imed_adjust2_window

0x5d7d,	// (0x00079ee5) popup_imed_trans_window_ParamLimits

0x5d7d,	// (0x00079ee5) popup_imed_trans_window

0xb9cb,	// (0x0007fb33) popup_blid_sat_info2_window_t1

0xb9d9,	// (0x0007fb41) popup_blid_sat_info2_window_t2

0x000a,

0xf6c6,	// (0x0008382e) popup_blid_sat_info2_window_t

0x75bf,	// (0x0007b727) aid_size_cell_colour_35

0x75df,	// (0x0007b747) aid_size_cell_colour_112

0x75ff,	// (0x0007b767) aid_size_cell_effect

0xb687,	// (0x0007f7ef) bg_tb_trans_pane_cp02

0x3954,	// (0x00077abc) heading_imed_pane

0x761f,	// (0x0007b787) listscroll_imed_pane

0xbff1,	// (0x00080159) heading_imed_pane_g1

0xbff9,	// (0x00080161) heading_imed_pane_t1

0xc007,	// (0x0008016f) grid_imed_colour_35_pane_ParamLimits

0xc007,	// (0x0008016f) grid_imed_colour_35_pane

0x762b,	// (0x0007b793) grid_imed_effect_pane

0xc022,	// (0x0008018a) list_imed_aspect_pane

0x7640,	// (0x0007b7a8) scroll_pane_cp027_ParamLimits

0x7640,	// (0x0007b7a8) scroll_pane_cp027

0x7651,	// (0x0007b7b9) cell_imed_effect_pane_ParamLimits

0x7651,	// (0x0007b7b9) cell_imed_effect_pane

0xc02a,	// (0x00080192) cell_imed_colour_pane_ParamLimits

0xc02a,	// (0x00080192) cell_imed_colour_pane

0xc06c,	// (0x000801d4) cell_imed_colour_pane_g1_ParamLimits

0xc06c,	// (0x000801d4) cell_imed_colour_pane_g1

0xc07d,	// (0x000801e5) hgihlgiht_grid_pane_cp016_ParamLimits

0xc07d,	// (0x000801e5) hgihlgiht_grid_pane_cp016

0x7678,	// (0x0007b7e0) cell_imed_effect_pane_g1

0x7680,	// (0x0007b7e8) grid_highlight_pane_cp017

0x1fe2,	// (0x0007614a) list_imed_single_pane_ParamLimits

0x1fe2,	// (0x0007614a) list_imed_single_pane

0xab43,	// (0x0007ecab) list_highlight_pane_cp07

0xc08e,	// (0x000801f6) list_imed_aspect_pane_comp1_t1

0xb687,	// (0x0007f7ef) bg_tb_trans_pane_cp05

0xc0b0,	// (0x00080218) popup_imed_adjust2_window_g1

0xc0d7,	// (0x0008023f) popup_imed_adjust2_window_t1

0xc0ef,	// (0x00080257) slider_imed_adjust_pane

0xc103,	// (0x0008026b) slider_imed_adjust_pane_g1

0xc113,	// (0x0008027b) slider_imed_adjust_pane_g2

0xc123,	// (0x0008028b) slider_imed_adjust_pane_g3

0xc134,	// (0x0008029c) slider_imed_adjust_pane_g4

0x0003,

0xf805,	// (0x0008396d) slider_imed_adjust_pane_g

0x7689,	// (0x0007b7f1) aid_size_cell_clipart2

0x7695,	// (0x0007b7fd) grid_imed_clipart_pane

0xc145,	// (0x000802ad) scroll_pane_cp031

0x769f,	// (0x0007b807) cell_imed_clipart_pane_ParamLimits

0x769f,	// (0x0007b807) cell_imed_clipart_pane

0x76c6,	// (0x0007b82e) cell_imed_clipart_pane_g1

0xab43,	// (0x0007ecab) grid_highlight_pane_cp014

0x7390,	// (0x0007b4f8) main_clock2_pane_g1_ParamLimits

0x7390,	// (0x0007b4f8) main_clock2_pane_g1

0x74c0,	// (0x0007b628) aid_call2_pane_cp10

0x74d2,	// (0x0007b63a) aid_call_pane_cp10

0x3ffa,	// (0x00078162) popup_clock_analogue_window_cp10_g1

0x3ffa,	// (0x00078162) popup_clock_analogue_window_cp10_g2

0x74e4,	// (0x0007b64c) popup_clock_analogue_window_cp10_g3

0x74e4,	// (0x0007b64c) popup_clock_analogue_window_cp10_g4

0x3ffa,	// (0x00078162) popup_clock_analogue_window_cp10_g5

0x0004,

0xf7f3,	// (0x0008395b) popup_clock_analogue_window_cp10_g

0x74f6,	// (0x0007b65e) popup_clock_analogue_window_cp10_t1

0x7527,	// (0x0007b68f) clock_digital_number_pane_cp10_ParamLimits

0x7527,	// (0x0007b68f) clock_digital_number_pane_cp10

0x753f,	// (0x0007b6a7) clock_digital_number_pane_cp11_ParamLimits

0x753f,	// (0x0007b6a7) clock_digital_number_pane_cp11

0x7557,	// (0x0007b6bf) clock_digital_number_pane_cp12_ParamLimits

0x7557,	// (0x0007b6bf) clock_digital_number_pane_cp12

0x756f,	// (0x0007b6d7) clock_digital_number_pane_cp13_ParamLimits

0x756f,	// (0x0007b6d7) clock_digital_number_pane_cp13

0x7587,	// (0x0007b6ef) clock_digital_separator_pane_cp10_ParamLimits

0x7587,	// (0x0007b6ef) clock_digital_separator_pane_cp10

0x759f,	// (0x0007b707) popup_clock_digital_window_cp02_t1_ParamLimits

0x759f,	// (0x0007b707) popup_clock_digital_window_cp02_t1

0xefd5,	// (0x0008313d) clock_digital_number_pane_cp10_g1

0xefd5,	// (0x0008313d) clock_digital_number_pane_cp10_g2

0x0001,

0x0620,	// (0x00074788) clock_digital_number_pane_cp10_g

0xefd5,	// (0x0008313d) clock_digital_separator_pane_cp10_g1

0xefd5,	// (0x0008313d) clock_digital_separator_pane_g2_cp10

0x4214,	// (0x0007837c) navi_pane_vded_g4

0x421d,	// (0x00078385) navi_pane_vded_g5

0x4226,	// (0x0007838e) navi_pane_vded_t1

0xab43,	// (0x0007ecab) main_vded_pane

0x76cf,	// (0x0007b837) main_vded_pane_g1

0x76db,	// (0x0007b843) main_vded_pane_g2

0x76e5,	// (0x0007b84d) main_vded_pane_g3

0x0002,

0xf80e,	// (0x00083976) main_vded_pane_g

0x76ef,	// (0x0007b857) main_vded_pane_t1

0x76fd,	// (0x0007b865) main_vded_pane_t2

0x0001,

0xf815,	// (0x0008397d) main_vded_pane_t

0x770b,	// (0x0007b873) vded_slider_pane

0x7715,	// (0x0007b87d) vded_video_pane

0xc14d,	// (0x000802b5) vded_video_pane_g1

0x771f,	// (0x0007b887) vded_video_pane_g2

0xbb8f,	// (0x0007fcf7) vded_video_pane_g3

0x0002,

0xf81a,	// (0x00083982) vded_video_pane_g

0xc157,	// (0x000802bf) vded_slider_pane_g1

0xb89c,	// (0x0007fa04) vded_slider_pane_g2

0xc160,	// (0x000802c8) vded_slider_pane_g3

0xc169,	// (0x000802d1) vded_slider_pane_g4

0xc172,	// (0x000802da) vded_slider_pane_g5

0x0004,

0xf821,	// (0x00083989) vded_slider_pane_g

0x7128,	// (0x0007b290) mup3_rocker_pane_ParamLimits

0x7128,	// (0x0007b290) mup3_rocker_pane

0x7728,	// (0x0007b890) mup3_control_keys_pane_g1

0x7730,	// (0x0007b898) mup3_control_keys_pane_g2

0x7738,	// (0x0007b8a0) mup3_control_keys_pane_g3

0x7740,	// (0x0007b8a8) mup3_control_keys_pane_g4

0x0003,

0xf82c,	// (0x00083994) mup3_control_keys_pane_g

0x1a07,	// (0x00075b6f) popup_toolbar2_fixed_window_cp01_ParamLimits

0x1a07,	// (0x00075b6f) popup_toolbar2_fixed_window_cp01

0x715c,	// (0x0007b2c4) popup_toolbar2_fixed_window_cp02_ParamLimits

0x715c,	// (0x0007b2c4) popup_toolbar2_fixed_window_cp02

0x5454,	// (0x000795bc) popup_call2_audio_second_window_t4_ParamLimits

0x5454,	// (0x000795bc) popup_call2_audio_second_window_t4

0xaf35,	// (0x0007f09d) popup_call2_audio_first_window_t6_ParamLimits

0xaf35,	// (0x0007f09d) popup_call2_audio_first_window_t6

0xb1cb,	// (0x0007f333) popup_call2_audio_out_window_t6_ParamLimits

0xb1cb,	// (0x0007f333) popup_call2_audio_out_window_t6

0xab43,	// (0x0007ecab) main_vitu_pane

0x7750,	// (0x0007b8b8) aid_size_cell_itu_ParamLimits

0x7750,	// (0x0007b8b8) aid_size_cell_itu

0xe93a,	// (0x00082aa2) bg_popup_window_pane_cp08_ParamLimits

0xe93a,	// (0x00082aa2) bg_popup_window_pane_cp08

0x7766,	// (0x0007b8ce) field_vitu_entry_pane_ParamLimits

0x7766,	// (0x0007b8ce) field_vitu_entry_pane

0x777d,	// (0x0007b8e5) grid_vitu_function_pane_ParamLimits

0x777d,	// (0x0007b8e5) grid_vitu_function_pane

0x7798,	// (0x0007b900) grid_vitu_itu_pane_ParamLimits

0x7798,	// (0x0007b900) grid_vitu_itu_pane

0x77b6,	// (0x0007b91e) cell_vitu_itu_pane_ParamLimits

0x77b6,	// (0x0007b91e) cell_vitu_itu_pane

0x77da,	// (0x0007b942) cell_vitu_function_pane_ParamLimits

0x77da,	// (0x0007b942) cell_vitu_function_pane

0xe93a,	// (0x00082aa2) bg_popup_sub_pane_cp08_ParamLimits

0xe93a,	// (0x00082aa2) bg_popup_sub_pane_cp08

0x77f5,	// (0x0007b95d) field_vitu_entry_pane_t1_ParamLimits

0x77f5,	// (0x0007b95d) field_vitu_entry_pane_t1

0xc193,	// (0x000802fb) field_vitu_entry_pane_t2_ParamLimits

0xc193,	// (0x000802fb) field_vitu_entry_pane_t2

0x0001,

0xf83a,	// (0x000839a2) field_vitu_entry_pane_t_ParamLimits

0xf83a,	// (0x000839a2) field_vitu_entry_pane_t

0xc1b0,	// (0x00080318) bg_button_pane_cp05_ParamLimits

0xc1b0,	// (0x00080318) bg_button_pane_cp05

0x7815,	// (0x0007b97d) cell_vitu_itu_pane_g1

0x782d,	// (0x0007b995) cell_vitu_itu_pane_t1_ParamLimits

0x782d,	// (0x0007b995) cell_vitu_itu_pane_t1

0x783f,	// (0x0007b9a7) cell_vitu_itu_pane_t2_ParamLimits

0x783f,	// (0x0007b9a7) cell_vitu_itu_pane_t2

0x0002,

0xf83f,	// (0x000839a7) cell_vitu_itu_pane_t_ParamLimits

0xf83f,	// (0x000839a7) cell_vitu_itu_pane_t

0xc1be,	// (0x00080326) bg_button_pane_cp07

0x7874,	// (0x0007b9dc) cell_vitu_function_pane_g1

0xab9d,	// (0x0007ed05) main_calc_pane_g1

0x1847,	// (0x000759af) aid_visual_content_pane

0xab43,	// (0x0007ecab) main_vradio_pane

0x787d,	// (0x0007b9e5) main_vradio_pane_g1_ParamLimits

0x787d,	// (0x0007b9e5) main_vradio_pane_g1

0xc1c8,	// (0x00080330) main_vradio_pane_g2_ParamLimits

0xc1c8,	// (0x00080330) main_vradio_pane_g2

0x0001,

0xf846,	// (0x000839ae) main_vradio_pane_g_ParamLimits

0xf846,	// (0x000839ae) main_vradio_pane_g

0x7896,	// (0x0007b9fe) main_vradio_pane_t1_ParamLimits

0x7896,	// (0x0007b9fe) main_vradio_pane_t1

0x78ab,	// (0x0007ba13) main_vradio_pane_t2_ParamLimits

0x78ab,	// (0x0007ba13) main_vradio_pane_t2

0xc1d5,	// (0x0008033d) main_vradio_pane_t3_ParamLimits

0xc1d5,	// (0x0008033d) main_vradio_pane_t3

0x0002,

0xf84b,	// (0x000839b3) main_vradio_pane_t_ParamLimits

0xf84b,	// (0x000839b3) main_vradio_pane_t

0x78c0,	// (0x0007ba28) vradio_rocker_control_pane_ParamLimits

0x78c0,	// (0x0007ba28) vradio_rocker_control_pane

0x78d2,	// (0x0007ba3a) vradio_station_info_pane_ParamLimits

0x78d2,	// (0x0007ba3a) vradio_station_info_pane

0xc1e9,	// (0x00080351) vradio_frequency_info_pane_ParamLimits

0xc1e9,	// (0x00080351) vradio_frequency_info_pane

0xbb8f,	// (0x0007fcf7) vradio_station_info_pane_g1

0xc1f8,	// (0x00080360) vradio_station_info_pane_t1_ParamLimits

0xc1f8,	// (0x00080360) vradio_station_info_pane_t1

0xc21a,	// (0x00080382) vradio_station_info_pane_t2_ParamLimits

0xc21a,	// (0x00080382) vradio_station_info_pane_t2

0x0001,

0xf852,	// (0x000839ba) vradio_station_info_pane_t_ParamLimits

0xf852,	// (0x000839ba) vradio_station_info_pane_t

0xc22c,	// (0x00080394) vradio_tuning_pane

0xc234,	// (0x0008039c) vradio_rocker_control_pane_g1

0xc23c,	// (0x000803a4) vradio_rocker_control_pane_g2

0xc244,	// (0x000803ac) vradio_rocker_control_pane_g3

0xc24c,	// (0x000803b4) vradio_rocker_control_pane_g4

0xc254,	// (0x000803bc) vradio_rocker_control_pane_g5

0x0004,

0xf857,	// (0x000839bf) vradio_rocker_control_pane_g

0x78e4,	// (0x0007ba4c) vradio_frequency_info_pane_g1

0xc25c,	// (0x000803c4) vradio_frequency_info_pane_t1_ParamLimits

0xc25c,	// (0x000803c4) vradio_frequency_info_pane_t1

0x78ee,	// (0x0007ba56) vradio_tuning_pane_g1

0x78f9,	// (0x0007ba61) vradio_tuning_pane_t1

0xab79,	// (0x0007ece1) area_side_right_pane_ParamLimits

0xab79,	// (0x0007ece1) area_side_right_pane

0xb64e,	// (0x0007f7b6) status_small_pane_g1

0xb656,	// (0x0007f7be) status_small_pane_g2

0xb65f,	// (0x0007f7c7) status_small_pane_g3

0xb668,	// (0x0007f7d0) status_small_pane_g4

0x0003,

0xf61c,	// (0x00083784) status_small_pane_g

0xb671,	// (0x0007f7d9) status_small_pane_t1

0xab43,	// (0x0007ecab) main_video3_pane

0xc270,	// (0x000803d8) cams_zoom_vslider_pane

0xc278,	// (0x000803e0) image3_wide_pane_ParamLimits

0xc278,	// (0x000803e0) image3_wide_pane

0xc292,	// (0x000803fa) image3_wide_small_pane

0xc29e,	// (0x00080406) main_video3_pane_g1_ParamLimits

0xc29e,	// (0x00080406) main_video3_pane_g1

0xc2ba,	// (0x00080422) main_video3_pane_g2_ParamLimits

0xc2ba,	// (0x00080422) main_video3_pane_g2

0x0001,

0xf862,	// (0x000839ca) main_video3_pane_g_ParamLimits

0xf862,	// (0x000839ca) main_video3_pane_g

0xc2d6,	// (0x0008043e) main_video3_pane_t1_ParamLimits

0xc2d6,	// (0x0008043e) main_video3_pane_t1

0xc301,	// (0x00080469) main_video3_pane_t2_ParamLimits

0xc301,	// (0x00080469) main_video3_pane_t2

0xc32c,	// (0x00080494) main_video3_pane_t3_ParamLimits

0xc32c,	// (0x00080494) main_video3_pane_t3

0x0002,

0xf867,	// (0x000839cf) main_video3_pane_t_ParamLimits

0xf867,	// (0x000839cf) main_video3_pane_t

0xc359,	// (0x000804c1) cams_zoom_vslider_pane_g1

0xc362,	// (0x000804ca) cams_zoom_vslider_pane_g2

0x0001,

0xf86e,	// (0x000839d6) cams_zoom_vslider_pane_g

0xc36a,	// (0x000804d2) small_slider_vertical_pane

0xbb8f,	// (0x0007fcf7) small_slider_vertical_pane_g1

0xbb8f,	// (0x0007fcf7) small_slider_vertical_pane_g2

0xc372,	// (0x000804da) small_slider_vertical_pane_g3

0x0002,

0xf873,	// (0x000839db) small_slider_vertical_pane_g

0xab43,	// (0x0007ecab) main_hwr_training_pane

0xc37b,	// (0x000804e3) hwr_training_instruct_pane_ParamLimits

0xc37b,	// (0x000804e3) hwr_training_instruct_pane

0x7908,	// (0x0007ba70) hwr_training_navi_pane_ParamLimits

0x7908,	// (0x0007ba70) hwr_training_navi_pane

0x7927,	// (0x0007ba8f) hwr_training_write_pane_ParamLimits

0x7927,	// (0x0007ba8f) hwr_training_write_pane

0xab43,	// (0x0007ecab) bg_frame_shadow_pane

0xc3b2,	// (0x0008051a) hwr_training_write_pane_g1

0xc3ba,	// (0x00080522) hwr_training_write_pane_g2

0xc3c2,	// (0x0008052a) hwr_training_write_pane_g3

0xc3ca,	// (0x00080532) hwr_training_write_pane_g4

0xc3d2,	// (0x0008053a) hwr_training_write_pane_g5

0xc3da,	// (0x00080542) hwr_training_write_pane_g6

0xc3e2,	// (0x0008054a) hwr_training_write_pane_g7

0x0006,

0xf87a,	// (0x000839e2) hwr_training_write_pane_g

0xe50a,	// (0x00082672) hwr_training_navi_pane_g1_ParamLimits

0xe50a,	// (0x00082672) hwr_training_navi_pane_g1

0xe51c,	// (0x00082684) hwr_training_navi_pane_g2_ParamLimits

0xe51c,	// (0x00082684) hwr_training_navi_pane_g2

0xe52e,	// (0x00082696) hwr_training_navi_pane_g3_ParamLimits

0xe52e,	// (0x00082696) hwr_training_navi_pane_g3

0xe53e,	// (0x000826a6) hwr_training_navi_pane_g4_ParamLimits

0xe53e,	// (0x000826a6) hwr_training_navi_pane_g4

0x0004,

0xf889,	// (0x000839f1) hwr_training_navi_pane_g_ParamLimits

0xf889,	// (0x000839f1) hwr_training_navi_pane_g

0xe54b,	// (0x000826b3) hwr_training_navi_pane_t1

0x7971,	// (0x0007bad9) list_single_hwr_training_instruct_pane_ParamLimits

0x7971,	// (0x0007bad9) list_single_hwr_training_instruct_pane

0xc3ea,	// (0x00080552) list_single_hwr_training_instruct_pane_t1

0xbacf,	// (0x0007fc37) bg_frame_shadow_pane_g1

0xc3f9,	// (0x00080561) bg_frame_shadow_pane_g2

0xc401,	// (0x00080569) bg_frame_shadow_pane_g3

0xc409,	// (0x00080571) bg_frame_shadow_pane_g4

0xc411,	// (0x00080579) bg_frame_shadow_pane_g5

0xc419,	// (0x00080581) bg_frame_shadow_pane_g6

0xc421,	// (0x00080589) bg_frame_shadow_pane_g7

0x1f80,	// (0x000760e8) bg_frame_shadow_pane_g8

0x0007,

0xf894,	// (0x000839fc) bg_frame_shadow_pane_g

0xab43,	// (0x0007ecab) main_video_tele_dialer_pane

0x798e,	// (0x0007baf6) aid_size_cell_video_keypad_ParamLimits

0x798e,	// (0x0007baf6) aid_size_cell_video_keypad

0x79a8,	// (0x0007bb10) grid_video_dialer_keypad_pane_ParamLimits

0x79a8,	// (0x0007bb10) grid_video_dialer_keypad_pane

0x79f4,	// (0x0007bb5c) video_down_pane_cp_ParamLimits

0x79f4,	// (0x0007bb5c) video_down_pane_cp

0x7a24,	// (0x0007bb8c) cell_video_dialer_keypad_pane_ParamLimits

0x7a24,	// (0x0007bb8c) cell_video_dialer_keypad_pane

0xc429,	// (0x00080591) bg_button_pane_cp08_ParamLimits

0xc429,	// (0x00080591) bg_button_pane_cp08

0x7a46,	// (0x0007bbae) cell_video_dialer_keypad_pane_g1_ParamLimits

0x7a46,	// (0x0007bbae) cell_video_dialer_keypad_pane_g1

0x7112,	// (0x0007b27a) mup3_rocker2_pane_ParamLimits

0x7112,	// (0x0007b27a) mup3_rocker2_pane

0xbb8f,	// (0x0007fcf7) mup3_rocker2_pane_g1

0x5c66,	// (0x00079dce) main_dialer2_pane

0xab43,	// (0x0007ecab) main_mp4_pane

0xe561,	// (0x000826c9) main_mp4_pane_g1_ParamLimits

0xe561,	// (0x000826c9) main_mp4_pane_g1

0xe561,	// (0x000826c9) main_mp4_pane_g2_ParamLimits

0xe561,	// (0x000826c9) main_mp4_pane_g2

0x7a81,	// (0x0007bbe9) main_mp4_pane_g3_ParamLimits

0x7a81,	// (0x0007bbe9) main_mp4_pane_g3

0xe56f,	// (0x000826d7) main_mp4_pane_g4_ParamLimits

0xe56f,	// (0x000826d7) main_mp4_pane_g4

0xe597,	// (0x000826ff) main_mp4_pane_g5_ParamLimits

0xe597,	// (0x000826ff) main_mp4_pane_g5

0x0005,

0xf8b4,	// (0x00083a1c) main_mp4_pane_g_ParamLimits

0xf8b4,	// (0x00083a1c) main_mp4_pane_g

0xe5e7,	// (0x0008274f) main_mp4_pane_t1_ParamLimits

0xe5e7,	// (0x0008274f) main_mp4_pane_t1

0xe643,	// (0x000827ab) main_mp4_pane_t2_ParamLimits

0xe643,	// (0x000827ab) main_mp4_pane_t2

0xc435,	// (0x0008059d) main_mp4_pane_t3_ParamLimits

0xc435,	// (0x0008059d) main_mp4_pane_t3

0xe695,	// (0x000827fd) main_mp4_pane_t4_ParamLimits

0xe695,	// (0x000827fd) main_mp4_pane_t4

0x0003,

0xf8c1,	// (0x00083a29) main_mp4_pane_t_ParamLimits

0xf8c1,	// (0x00083a29) main_mp4_pane_t

0xe6d9,	// (0x00082841) mp4_progress_pane_ParamLimits

0xe6d9,	// (0x00082841) mp4_progress_pane

0xe723,	// (0x0008288b) mp4_rocker_pane_ParamLimits

0xe723,	// (0x0008288b) mp4_rocker_pane

0xc45d,	// (0x000805c5) mp4_progress_pane_t1

0xc476,	// (0x000805de) mp4_progress_pane_t2

0x0001,

0xf8ca,	// (0x00083a32) mp4_progress_pane_t

0xc48f,	// (0x000805f7) mup_progress_pane_cp04

0xbb8f,	// (0x0007fcf7) mp4_rocker_pane_g1

0x7abd,	// (0x0007bc25) aid_cell_size_keypad2_ParamLimits

0x7abd,	// (0x0007bc25) aid_cell_size_keypad2

0x7ad3,	// (0x0007bc3b) dialer2_ne_pane_ParamLimits

0x7ad3,	// (0x0007bc3b) dialer2_ne_pane

0x7aed,	// (0x0007bc55) grid_dialer2_keypad_pane_ParamLimits

0x7aed,	// (0x0007bc55) grid_dialer2_keypad_pane

0xb972,	// (0x0007fada) bg_popup_call_pane_cp07_ParamLimits

0xb972,	// (0x0007fada) bg_popup_call_pane_cp07

0x7b0b,	// (0x0007bc73) dialer2_ne_pane_t1_ParamLimits

0x7b0b,	// (0x0007bc73) dialer2_ne_pane_t1

0x7b4a,	// (0x0007bcb2) cell_dialer2_keypad_pane_ParamLimits

0x7b4a,	// (0x0007bcb2) cell_dialer2_keypad_pane

0xc4ad,	// (0x00080615) bg_button_pane_pane_cp04_ParamLimits

0xc4ad,	// (0x00080615) bg_button_pane_pane_cp04

0x7b6e,	// (0x0007bcd6) cell_dialer2_keypad_pane_g1_ParamLimits

0x7b6e,	// (0x0007bcd6) cell_dialer2_keypad_pane_g1

0x27ff,	// (0x00076967) aid_placing_vt_set_content_ParamLimits

0x27ff,	// (0x00076967) aid_placing_vt_set_content

0x2827,	// (0x0007698f) aid_placing_vt_set_title_ParamLimits

0x2827,	// (0x0007698f) aid_placing_vt_set_title

0xab43,	// (0x0007ecab) main_image3_pane

0x7c34,	// (0x0007bd9c) area_side_right_pane_cp01_ParamLimits

0x7c34,	// (0x0007bd9c) area_side_right_pane_cp01

0xe561,	// (0x000826c9) main_image3_pane_g1_ParamLimits

0xe561,	// (0x000826c9) main_image3_pane_g1

0x7c4b,	// (0x0007bdb3) main_image3_pane_g2_ParamLimits

0x7c4b,	// (0x0007bdb3) main_image3_pane_g2

0x7c73,	// (0x0007bddb) main_image3_pane_g3_ParamLimits

0x7c73,	// (0x0007bddb) main_image3_pane_g3

0x7c9d,	// (0x0007be05) main_image3_pane_g4_ParamLimits

0x7c9d,	// (0x0007be05) main_image3_pane_g4

0x0003,

0xf8d9,	// (0x00083a41) main_image3_pane_g_ParamLimits

0xf8d9,	// (0x00083a41) main_image3_pane_g

0x7cc7,	// (0x0007be2f) main_image3_pane_t1_ParamLimits

0x7cc7,	// (0x0007be2f) main_image3_pane_t1

0x7d1f,	// (0x0007be87) main_image3_pane_t2_ParamLimits

0x7d1f,	// (0x0007be87) main_image3_pane_t2

0x7d71,	// (0x0007bed9) main_image3_pane_t3_ParamLimits

0x7d71,	// (0x0007bed9) main_image3_pane_t3

0x0003,

0xf8e2,	// (0x00083a4a) main_image3_pane_t_ParamLimits

0xf8e2,	// (0x00083a4a) main_image3_pane_t

0xe93a,	// (0x00082aa2) grid_sctrl_middle_pane_cp01_ParamLimits

0xe93a,	// (0x00082aa2) grid_sctrl_middle_pane_cp01

0x7df9,	// (0x0007bf61) cell_sctrl_middle_pane_cp01_ParamLimits

0x7df9,	// (0x0007bf61) cell_sctrl_middle_pane_cp01

0x7e16,	// (0x0007bf7e) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x7e16,	// (0x0007bf7e) cell_sctrl_middle_pane_cp01_g1

0xab43,	// (0x0007ecab) main_call4_pane

0x7e2c,	// (0x0007bf94) aid_size_button_call4_ParamLimits

0x7e2c,	// (0x0007bf94) aid_size_button_call4

0x7e5d,	// (0x0007bfc5) call4_windows_pane_ParamLimits

0x7e5d,	// (0x0007bfc5) call4_windows_pane

0x7e7d,	// (0x0007bfe5) grid_call4_button_pane_ParamLimits

0x7e7d,	// (0x0007bfe5) grid_call4_button_pane

0xc4b9,	// (0x00080621) call4_windows_conf_pane

0xc4ce,	// (0x00080636) popup_call4_audio_first_window_ParamLimits

0xc4ce,	// (0x00080636) popup_call4_audio_first_window

0xc51a,	// (0x00080682) popup_call4_audio_second_window_ParamLimits

0xc51a,	// (0x00080682) popup_call4_audio_second_window

0xc52e,	// (0x00080696) popup_call4_audio_wait_window_ParamLimits

0xc52e,	// (0x00080696) popup_call4_audio_wait_window

0x7eaa,	// (0x0007c012) cell_call4_button_pane_ParamLimits

0x7eaa,	// (0x0007c012) cell_call4_button_pane

0x7ed3,	// (0x0007c03b) bg_button_pane_cp09_ParamLimits

0x7ed3,	// (0x0007c03b) bg_button_pane_cp09

0x7edf,	// (0x0007c047) cell_call4_button_pane_g1_ParamLimits

0x7edf,	// (0x0007c047) cell_call4_button_pane_g1

0x7f05,	// (0x0007c06d) cell_call4_button_pane_t1_ParamLimits

0x7f05,	// (0x0007c06d) cell_call4_button_pane_t1

0xc576,	// (0x000806de) popup_call4_audio_conf_window_ParamLimits

0xc576,	// (0x000806de) popup_call4_audio_conf_window

0x7172,	// (0x0007b2da) mup3_progress_pane_t1_ParamLimits

0x7189,	// (0x0007b2f1) mup3_progress_pane_t2_ParamLimits

0xbea9,	// (0x00080011) mup3_progress_pane_t3_ParamLimits

0xf7c0,	// (0x00083928) mup3_progress_pane_t_ParamLimits

0xbec0,	// (0x00080028) mup_progress_pane_cp03_ParamLimits

0x7748,	// (0x0007b8b0) mup3_control_keys_pane_g4_copy1

0xe707,	// (0x0008286f) mp4_rocker2_pane_ParamLimits

0xe707,	// (0x0008286f) mp4_rocker2_pane

0xc58a,	// (0x000806f2) mp4_rocker2_pane_g1

0xc592,	// (0x000806fa) mp4_rocker2_pane_g2

0xe775,	// (0x000828dd) mp4_rocker2_pane_g3

0xe77d,	// (0x000828e5) mp4_rocker2_pane_g4

0xe785,	// (0x000828ed) mp4_rocker2_pane_g5

0x0004,

0xf8eb,	// (0x00083a53) mp4_rocker2_pane_g

0xab43,	// (0x0007ecab) main_camera4_pane

0xab43,	// (0x0007ecab) main_video4_pane

0x79c2,	// (0x0007bb2a) main_video_tele_dialer_pane_t1_ParamLimits

0x79c2,	// (0x0007bb2a) main_video_tele_dialer_pane_t1

0x79db,	// (0x0007bb43) main_video_tele_dialer_pane_t2_ParamLimits

0x79db,	// (0x0007bb43) main_video_tele_dialer_pane_t2

0x0001,

0xf8a5,	// (0x00083a0d) main_video_tele_dialer_pane_t_ParamLimits

0xf8a5,	// (0x00083a0d) main_video_tele_dialer_pane_t

0x7f47,	// (0x0007c0af) cam4_autofocus_pane_ParamLimits

0x7f47,	// (0x0007c0af) cam4_autofocus_pane

0x7f5d,	// (0x0007c0c5) cam4_image_uncrop_pane_ParamLimits

0x7f5d,	// (0x0007c0c5) cam4_image_uncrop_pane

0x7f77,	// (0x0007c0df) cam4_indicators_pane_ParamLimits

0x7f77,	// (0x0007c0df) cam4_indicators_pane

0x7fa2,	// (0x0007c10a) main_camera4_pane_g1_ParamLimits

0x7fa2,	// (0x0007c10a) main_camera4_pane_g1

0x7fb5,	// (0x0007c11d) main_camera4_pane_g2_ParamLimits

0x7fb5,	// (0x0007c11d) main_camera4_pane_g2

0x7fc8,	// (0x0007c130) main_camera4_pane_g3_ParamLimits

0x7fc8,	// (0x0007c130) main_camera4_pane_g3

0x7fdb,	// (0x0007c143) main_camera4_pane_g4_ParamLimits

0x7fdb,	// (0x0007c143) main_camera4_pane_g4

0x7fee,	// (0x0007c156) main_camera4_pane_g5_ParamLimits

0x7fee,	// (0x0007c156) main_camera4_pane_g5

0x0005,

0xf8f6,	// (0x00083a5e) main_camera4_pane_g_ParamLimits

0xf8f6,	// (0x00083a5e) main_camera4_pane_g

0x8012,	// (0x0007c17a) main_camera4_pane_t1_ParamLimits

0x8012,	// (0x0007c17a) main_camera4_pane_t1

0xbdf6,	// (0x0007ff5e) bg_tb_trans_pane_cp06

0xe7b1,	// (0x00082919) cam4_indicators_pane_g1

0xe7c2,	// (0x0008292a) cam4_indicators_pane_g2

0x0002,

0xf911,	// (0x00083a79) cam4_indicators_pane_g

0xe7e0,	// (0x00082948) cam4_indicators_pane_t1

0x8076,	// (0x0007c1de) main_video4_pane_g1_ParamLimits

0x8076,	// (0x0007c1de) main_video4_pane_g1

0x8089,	// (0x0007c1f1) main_video4_pane_g2_ParamLimits

0x8089,	// (0x0007c1f1) main_video4_pane_g2

0x809d,	// (0x0007c205) main_video4_pane_g3_ParamLimits

0x809d,	// (0x0007c205) main_video4_pane_g3

0x80b1,	// (0x0007c219) main_video4_pane_g4_ParamLimits

0x80b1,	// (0x0007c219) main_video4_pane_g4

0x0004,

0xf918,	// (0x00083a80) main_video4_pane_g_ParamLimits

0xf918,	// (0x00083a80) main_video4_pane_g

0x80d9,	// (0x0007c241) vid4_indicators_pane_ParamLimits

0x80d9,	// (0x0007c241) vid4_indicators_pane

0x810b,	// (0x0007c273) video4_image_uncrop_cif_pane_ParamLimits

0x810b,	// (0x0007c273) video4_image_uncrop_cif_pane

0x8125,	// (0x0007c28d) video4_image_uncrop_nhd_pane_ParamLimits

0x8125,	// (0x0007c28d) video4_image_uncrop_nhd_pane

0x7f5d,	// (0x0007c0c5) video4_image_uncrop_vga_pane_ParamLimits

0x7f5d,	// (0x0007c0c5) video4_image_uncrop_vga_pane

0xc5ac,	// (0x00080714) bg_tb_trans_pane_cp07

0x8139,	// (0x0007c2a1) vid4_indicators_pane_g1

0x8146,	// (0x0007c2ae) vid4_indicators_pane_g2

0x8153,	// (0x0007c2bb) vid4_indicators_pane_g3

0x0004,

0xf923,	// (0x00083a8b) vid4_indicators_pane_g

0x8178,	// (0x0007c2e0) vid4_indicators_pane_t1

0x818a,	// (0x0007c2f2) cam4_autofocus_pane_g1

0x8192,	// (0x0007c2fa) cam4_autofocus_pane_g2

0x819a,	// (0x0007c302) cam4_autofocus_pane_g3

0x0002,

0xf92e,	// (0x00083a96) cam4_autofocus_pane_g

0x81a2,	// (0x0007c30a) cam4_autofocus_pane_g3_copy1

0x7a08,	// (0x0007bb70) video_down_pane_cp_t1

0x7a16,	// (0x0007bb7e) video_down_pane_cp_t2

0x0001,

0xf8aa,	// (0x00083a12) video_down_pane_cp_t

0xe93a,	// (0x00082aa2) popup_vitu2_window_ParamLimits

0xe93a,	// (0x00082aa2) popup_vitu2_window

0x81aa,	// (0x0007c312) aid_size_cell2_itu2_ParamLimits

0x81aa,	// (0x0007c312) aid_size_cell2_itu2

0x81d0,	// (0x0007c338) aid_size_cell_itu2_ParamLimits

0x81d0,	// (0x0007c338) aid_size_cell_itu2

0x822c,	// (0x0007c394) bg_popup_window_pane_cp09_ParamLimits

0x822c,	// (0x0007c394) bg_popup_window_pane_cp09

0x823a,	// (0x0007c3a2) field_vitu2_entry_pane_ParamLimits

0x823a,	// (0x0007c3a2) field_vitu2_entry_pane

0x8260,	// (0x0007c3c8) grid_vitu2_function_pane_ParamLimits

0x8260,	// (0x0007c3c8) grid_vitu2_function_pane

0x82b1,	// (0x0007c419) grid_vitu2_itu_pane_ParamLimits

0x82b1,	// (0x0007c419) grid_vitu2_itu_pane

0x8342,	// (0x0007c4aa) cell_vitu2_itu_pane_ParamLimits

0x8342,	// (0x0007c4aa) cell_vitu2_itu_pane

0x8366,	// (0x0007c4ce) cell_vitu2_function_pane_ParamLimits

0x8366,	// (0x0007c4ce) cell_vitu2_function_pane

0xc5ba,	// (0x00080722) bg_popup_call_pane_cp08_ParamLimits

0xc5ba,	// (0x00080722) bg_popup_call_pane_cp08

0xc5d3,	// (0x0008073b) field_vitu2_entry_pane_g1

0xc5df,	// (0x00080747) field_vitu2_entry_pane_g2

0x0002,

0xf935,	// (0x00083a9d) field_vitu2_entry_pane_g

0x0f02,	// (0x0007506a) field_vitu2_entry_pane_t1_ParamLimits

0x0f02,	// (0x0007506a) field_vitu2_entry_pane_t1

0xc5f9,	// (0x00080761) field_vitu2_entry_pane_t2_ParamLimits

0xc5f9,	// (0x00080761) field_vitu2_entry_pane_t2

0x0001,

0xf93c,	// (0x00083aa4) field_vitu2_entry_pane_t_ParamLimits

0xf93c,	// (0x00083aa4) field_vitu2_entry_pane_t

0x83a5,	// (0x0007c50d) bg_button_pane_cp010_ParamLimits

0x83a5,	// (0x0007c50d) bg_button_pane_cp010

0x83b3,	// (0x0007c51b) cell_vitu2_itu_pane_g1

0x83d1,	// (0x0007c539) cell_vitu2_itu_pane_t1_ParamLimits

0x83d1,	// (0x0007c539) cell_vitu2_itu_pane_t1

0x0f33,	// (0x0007509b) cell_vitu2_itu_pane_t2_ParamLimits

0x0f33,	// (0x0007509b) cell_vitu2_itu_pane_t2

0x0002,

0xf946,	// (0x00083aae) cell_vitu2_itu_pane_t_ParamLimits

0xf946,	// (0x00083aae) cell_vitu2_itu_pane_t

0xe93a,	// (0x00082aa2) bg_button_pane_cp011

0x8437,	// (0x0007c59f) cell_vitu2_function_pane_g1

0xab43,	// (0x0007ecab) main_myfav_hc_pane

0x7dc1,	// (0x0007bf29) popup_image3_note_pane_ParamLimits

0x7dc1,	// (0x0007bf29) popup_image3_note_pane

0x7ddd,	// (0x0007bf45) popup_image3_tool_bar_pane_ParamLimits

0x7ddd,	// (0x0007bf45) popup_image3_tool_bar_pane

0x0fb7,	// (0x0007511f) cell_vitu2_itu_pane_t3_ParamLimits

0x0fb7,	// (0x0007511f) cell_vitu2_itu_pane_t3

0xab43,	// (0x0007ecab) bg_popup_trans_pane

0xc61e,	// (0x00080786) grid_image3_tool_bar_pane

0xc628,	// (0x00080790) bg_popup_trans_pane_g1

0x2df5,	// (0x00076f5d) bg_popup_trans_pane_g2

0xc630,	// (0x00080798) bg_popup_trans_pane_g3

0xc638,	// (0x000807a0) bg_popup_trans_pane_g4

0xc640,	// (0x000807a8) bg_popup_trans_pane_g5

0xc648,	// (0x000807b0) bg_popup_trans_pane_g6

0xc650,	// (0x000807b8) bg_popup_trans_pane_g7

0xc658,	// (0x000807c0) bg_popup_trans_pane_g8

0x2dd5,	// (0x00076f3d) bg_popup_trans_pane_g9

0x0008,

0xf94d,	// (0x00083ab5) bg_popup_trans_pane_g

0xc660,	// (0x000807c8) cell_image3_tool_bar_pane_ParamLimits

0xc660,	// (0x000807c8) cell_image3_tool_bar_pane

0xbb8f,	// (0x0007fcf7) cell_image3_tool_bar_pane_g1

0xab43,	// (0x0007ecab) bg_popup_trans_pane_cp1

0xc674,	// (0x000807dc) popup_image3_note_pane_t1

0xc682,	// (0x000807ea) popup_image3_note_pane_t2

0xc690,	// (0x000807f8) popup_image3_note_pane_t3

0x0002,

0xf960,	// (0x00083ac8) popup_image3_note_pane_t

0xc69e,	// (0x00080806) popup_image3_note_pane_t3_copy1

0x844b,	// (0x0007c5b3) bg_myfav_hc_instruction_pane_ParamLimits

0x844b,	// (0x0007c5b3) bg_myfav_hc_instruction_pane

0x8461,	// (0x0007c5c9) cell_myfav_contact_pane_ParamLimits

0x8461,	// (0x0007c5c9) cell_myfav_contact_pane

0x847d,	// (0x0007c5e5) cell_myfav_contact_pane_cp1_ParamLimits

0x847d,	// (0x0007c5e5) cell_myfav_contact_pane_cp1

0x8495,	// (0x0007c5fd) cell_myfav_contact_pane_cp2_ParamLimits

0x8495,	// (0x0007c5fd) cell_myfav_contact_pane_cp2

0x84ad,	// (0x0007c615) cell_myfav_contact_pane_cp3_ParamLimits

0x84ad,	// (0x0007c615) cell_myfav_contact_pane_cp3

0x84c4,	// (0x0007c62c) cell_myfav_contact_pane_cp4_ParamLimits

0x84c4,	// (0x0007c62c) cell_myfav_contact_pane_cp4

0x84dc,	// (0x0007c644) cell_myfav_contact_pane_cp5_ParamLimits

0x84dc,	// (0x0007c644) cell_myfav_contact_pane_cp5

0x84f0,	// (0x0007c658) cell_myfav_contact_pane_cp6_ParamLimits

0x84f0,	// (0x0007c658) cell_myfav_contact_pane_cp6

0x8506,	// (0x0007c66e) cell_myfav_contact_pane_cp7_ParamLimits

0x8506,	// (0x0007c66e) cell_myfav_contact_pane_cp7

0xc6ac,	// (0x00080814) listscroll_gen_pane_cp05

0x8520,	// (0x0007c688) main_myfav_hc_pane_g1_ParamLimits

0x8520,	// (0x0007c688) main_myfav_hc_pane_g1

0x853a,	// (0x0007c6a2) main_myfav_hc_pane_g2_ParamLimits

0x853a,	// (0x0007c6a2) main_myfav_hc_pane_g2

0x0002,

0xf967,	// (0x00083acf) main_myfav_hc_pane_g_ParamLimits

0xf967,	// (0x00083acf) main_myfav_hc_pane_g

0x856c,	// (0x0007c6d4) main_myfav_hc_pane_t1_ParamLimits

0x856c,	// (0x0007c6d4) main_myfav_hc_pane_t1

0xc6b5,	// (0x0008081d) main_myfav_hc_pane_t2_ParamLimits

0xc6b5,	// (0x0008081d) main_myfav_hc_pane_t2

0xc6c7,	// (0x0008082f) main_myfav_hc_pane_t3_ParamLimits

0xc6c7,	// (0x0008082f) main_myfav_hc_pane_t3

0x8583,	// (0x0007c6eb) main_myfav_hc_pane_t4_ParamLimits

0x8583,	// (0x0007c6eb) main_myfav_hc_pane_t4

0x0004,

0xf96e,	// (0x00083ad6) main_myfav_hc_pane_t_ParamLimits

0xf96e,	// (0x00083ad6) main_myfav_hc_pane_t

0xbb8f,	// (0x0007fcf7) bg_myfav_hc_instruction_pane_g1

0xc6d9,	// (0x00080841) cell_myfav_contact_pane_g1_ParamLimits

0xc6d9,	// (0x00080841) cell_myfav_contact_pane_g1

0xc6d9,	// (0x00080841) cell_myfav_contact_pane_g2_ParamLimits

0xc6d9,	// (0x00080841) cell_myfav_contact_pane_g2

0xc6e5,	// (0x0008084d) cell_myfav_contact_pane_g3_ParamLimits

0xc6e5,	// (0x0008084d) cell_myfav_contact_pane_g3

0xbe93,	// (0x0007fffb) cell_myfav_contact_pane_g4_ParamLimits

0xbe93,	// (0x0007fffb) cell_myfav_contact_pane_g4

0xc6f2,	// (0x0008085a) cell_myfav_contact_pane_g5_ParamLimits

0xc6f2,	// (0x0008085a) cell_myfav_contact_pane_g5

0x0004,

0xf979,	// (0x00083ae1) cell_myfav_contact_pane_g_ParamLimits

0xf979,	// (0x00083ae1) cell_myfav_contact_pane_g

0x8554,	// (0x0007c6bc) main_myfav_hc_pane_g3_ParamLimits

0x8554,	// (0x0007c6bc) main_myfav_hc_pane_g3

0x1969,	// (0x00075ad1) popup_adpt_find_window

0x85ab,	// (0x0007c713) afind_page_pane_ParamLimits

0x85ab,	// (0x0007c713) afind_page_pane

0x85c0,	// (0x0007c728) aid_size_cell_afind_ParamLimits

0x85c0,	// (0x0007c728) aid_size_cell_afind

0x85de,	// (0x0007c746) bg_popup_sub_pane_cp09_ParamLimits

0x85de,	// (0x0007c746) bg_popup_sub_pane_cp09

0x85eb,	// (0x0007c753) find_pane_cp01_ParamLimits

0x85eb,	// (0x0007c753) find_pane_cp01

0xc6fe,	// (0x00080866) grid_afind_control_pane_ParamLimits

0xc6fe,	// (0x00080866) grid_afind_control_pane

0x85f8,	// (0x0007c760) grid_afind_pane_ParamLimits

0x85f8,	// (0x0007c760) grid_afind_pane

0x861a,	// (0x0007c782) cell_afind_pane_ParamLimits

0x861a,	// (0x0007c782) cell_afind_pane

0xbb8f,	// (0x0007fcf7) afind_page_pane_g1

0x867b,	// (0x0007c7e3) afind_page_pane_g2

0x8684,	// (0x0007c7ec) afind_page_pane_g3

0x0002,

0xf984,	// (0x00083aec) afind_page_pane_g

0x868d,	// (0x0007c7f5) afind_page_pane_t1

0xc712,	// (0x0008087a) cell_afind_grid_control_pane_ParamLimits

0xc712,	// (0x0008087a) cell_afind_grid_control_pane

0xc4ad,	// (0x00080615) bg_button_pane_cp69_ParamLimits

0xc4ad,	// (0x00080615) bg_button_pane_cp69

0x86ad,	// (0x0007c815) cell_afind_pane_g1_ParamLimits

0x86ad,	// (0x0007c815) cell_afind_pane_g1

0x86ba,	// (0x0007c822) cell_afind_pane_t1_ParamLimits

0x86ba,	// (0x0007c822) cell_afind_pane_t1

0x2792,	// (0x000768fa) bg_button_pane_cp72

0xc721,	// (0x00080889) cell_afind_grid_control_pane_g1

0x4f00,	// (0x00079068) aid_image_placing_area_ParamLimits

0x4f00,	// (0x00079068) aid_image_placing_area

0xc17b,	// (0x000802e3) field_vitu_entry_pane_g1_ParamLimits

0xc17b,	// (0x000802e3) field_vitu_entry_pane_g1

0xc187,	// (0x000802ef) field_vitu_entry_pane_g2_ParamLimits

0xc187,	// (0x000802ef) field_vitu_entry_pane_g2

0x0001,

0xf835,	// (0x0008399d) field_vitu_entry_pane_g_ParamLimits

0xf835,	// (0x0008399d) field_vitu_entry_pane_g

0x7815,	// (0x0007b97d) cell_vitu_itu_pane_g1_ParamLimits

0x7857,	// (0x0007b9bf) cell_vitu_itu_pane_t3_ParamLimits

0x7857,	// (0x0007b9bf) cell_vitu_itu_pane_t3

0xc45d,	// (0x000805c5) mp4_progress_pane_t1_ParamLimits

0xc476,	// (0x000805de) mp4_progress_pane_t2_ParamLimits

0xf8ca,	// (0x00083a32) mp4_progress_pane_t_ParamLimits

0xc48f,	// (0x000805f7) mup_progress_pane_cp04_ParamLimits

0x8597,	// (0x0007c6ff) main_myfav_hc_pane_t5_ParamLimits

0x8597,	// (0x0007c6ff) main_myfav_hc_pane_t5

0xab69,	// (0x0007ecd1) aid_zoom_text_primary

0x1969,	// (0x00075ad1) popup_adpt_find_window_ParamLimits

0xe93a,	// (0x00082aa2) main_cam_set_pane

0x7f8e,	// (0x0007c0f6) cam4_zoom_pane_ParamLimits

0x7f8e,	// (0x0007c0f6) cam4_zoom_pane

0x86cc,	// (0x0007c834) main_cam_set_pane_g1_ParamLimits

0x86cc,	// (0x0007c834) main_cam_set_pane_g1

0x86da,	// (0x0007c842) main_cam_set_pane_g2_ParamLimits

0x86da,	// (0x0007c842) main_cam_set_pane_g2

0x0001,

0xf98b,	// (0x00083af3) main_cam_set_pane_g_ParamLimits

0xf98b,	// (0x00083af3) main_cam_set_pane_g

0x86fb,	// (0x0007c863) main_cam_set_pane_t1_ParamLimits

0x86fb,	// (0x0007c863) main_cam_set_pane_t1

0x8716,	// (0x0007c87e) main_cset_listscroll_pane_ParamLimits

0x8716,	// (0x0007c87e) main_cset_listscroll_pane

0x8736,	// (0x0007c89e) main_cset_slider_pane_ParamLimits

0x8736,	// (0x0007c89e) main_cset_slider_pane

0xc732,	// (0x0008089a) main_cset_list_pane_ParamLimits

0xc732,	// (0x0008089a) main_cset_list_pane

0xc742,	// (0x000808aa) scroll_pane_cp028

0x875c,	// (0x0007c8c4) aid_area_touch_slider

0x8778,	// (0x0007c8e0) cset_slider_pane

0x87a2,	// (0x0007c90a) main_cset_slider_pane_g1

0x87b7,	// (0x0007c91f) main_cset_slider_pane_g2

0x0011,

0xf990,	// (0x00083af8) main_cset_slider_pane_g

0xc77b,	// (0x000808e3) main_cset_slider_pane_t1

0x8873,	// (0x0007c9db) main_cset_slider_pane_t2

0x888d,	// (0x0007c9f5) main_cset_slider_pane_t3

0x88a7,	// (0x0007ca0f) main_cset_slider_pane_t4

0x88c1,	// (0x0007ca29) main_cset_slider_pane_t5

0x88dd,	// (0x0007ca45) main_cset_slider_pane_t6

0x88f2,	// (0x0007ca5a) main_cset_slider_pane_t7

0x000e,

0xf9b5,	// (0x00083b1d) main_cset_slider_pane_t

0x89f6,	// (0x0007cb5e) cset_list_set_pane_ParamLimits

0x89f6,	// (0x0007cb5e) cset_list_set_pane

0x8a0a,	// (0x0007cb72) aid_position_infowindow_above

0x8a12,	// (0x0007cb7a) aid_position_infowindow_below

0x8a1a,	// (0x0007cb82) cset_list_set_pane_g1_ParamLimits

0x8a1a,	// (0x0007cb82) cset_list_set_pane_g1

0x100f,	// (0x00075177) cset_list_set_pane_g3_ParamLimits

0x100f,	// (0x00075177) cset_list_set_pane_g3

0x0001,

0xf9d4,	// (0x00083b3c) cset_list_set_pane_g_ParamLimits

0xf9d4,	// (0x00083b3c) cset_list_set_pane_g

0x101e,	// (0x00075186) cset_list_set_pane_t1_ParamLimits

0x101e,	// (0x00075186) cset_list_set_pane_t1

0xe93a,	// (0x00082aa2) list_highlight_pane_cp021_ParamLimits

0xe93a,	// (0x00082aa2) list_highlight_pane_cp021

0x4782,	// (0x000788ea) cset_slider_pane_g1

0x4794,	// (0x000788fc) cset_slider_pane_g2

0x478b,	// (0x000788f3) cset_slider_pane_g3

0x0002,

0xf9d9,	// (0x00083b41) cset_slider_pane_g

0xe80a,	// (0x00082972) aid_area_touch_cam4_zoom

0xe812,	// (0x0008297a) cam4_zoom_cont_pane

0xe81a,	// (0x00082982) cam4_zoom_pane_g1

0xe822,	// (0x0008298a) cam4_zoom_pane_g2

0x8a26,	// (0x0007cb8e) cam4_zoom_pane_g3

0x0002,

0xf9e0,	// (0x00083b48) cam4_zoom_pane_g

0xc81b,	// (0x00080983) cam4_zoom_cont_pane_g1

0xc824,	// (0x0008098c) cam4_zoom_cont_pane_g2

0xc82d,	// (0x00080995) cam4_zoom_cont_pane_g3

0x0002,

0xf9e7,	// (0x00083b4f) cam4_zoom_cont_pane_g

0x7e4a,	// (0x0007bfb2) call4_image_pane_ParamLimits

0x7e4a,	// (0x0007bfb2) call4_image_pane

0xc4b9,	// (0x00080621) call4_windows_conf_pane_ParamLimits

0xc4f8,	// (0x00080660) popup_call4_audio_in_window_ParamLimits

0xc4f8,	// (0x00080660) popup_call4_audio_in_window

0xab43,	// (0x0007ecab) bg_popup_call2_act_pane_cp02

0xc56e,	// (0x000806d6) call4_list_conf_pane

0xbb8f,	// (0x0007fcf7) call4_image_pane_g1

0xbb8f,	// (0x0007fcf7) call4_image_pane_g2

0x0001,

0xf700,	// (0x00083868) call4_image_pane_g

0xc836,	// (0x0008099e) list_single_graphic_popup_conf4_pane_ParamLimits

0xc836,	// (0x0008099e) list_single_graphic_popup_conf4_pane

0xab43,	// (0x0007ecab) list_highlight_pane_cp022

0xc849,	// (0x000809b1) list_single_graphic_popup_conf4_pane_g1

0x3d10,	// (0x00077e78) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf9ee,	// (0x00083b56) list_single_graphic_popup_conf4_pane_g

0xc851,	// (0x000809b9) list_single_graphic_popup_conf4_pane_t1

0x295d,	// (0x00076ac5) popup_vtel_slider_window_ParamLimits

0x295d,	// (0x00076ac5) popup_vtel_slider_window

0xc49b,	// (0x00080603) dialer2_ne_pane_t2_ParamLimits

0xc49b,	// (0x00080603) dialer2_ne_pane_t2

0x0001,

0xf8cf,	// (0x00083a37) dialer2_ne_pane_t_ParamLimits

0xf8cf,	// (0x00083a37) dialer2_ne_pane_t

0xb972,	// (0x0007fada) bg_popup_sub_pane_cp010_ParamLimits

0xb972,	// (0x0007fada) bg_popup_sub_pane_cp010

0x8a2e,	// (0x0007cb96) popup_vtel_slider_window_g1_ParamLimits

0x8a2e,	// (0x0007cb96) popup_vtel_slider_window_g1

0x8a41,	// (0x0007cba9) popup_vtel_slider_window_g2_ParamLimits

0x8a41,	// (0x0007cba9) popup_vtel_slider_window_g2

0x0003,

0xf9f3,	// (0x00083b5b) popup_vtel_slider_window_g_ParamLimits

0xf9f3,	// (0x00083b5b) popup_vtel_slider_window_g

0x8a97,	// (0x0007cbff) vtel_slider_pane_ParamLimits

0x8a97,	// (0x0007cbff) vtel_slider_pane

0x8ab9,	// (0x0007cc21) vtel_slider_pane_g1_ParamLimits

0x8ab9,	// (0x0007cc21) vtel_slider_pane_g1

0x8acd,	// (0x0007cc35) vtel_slider_pane_g2_ParamLimits

0x8acd,	// (0x0007cc35) vtel_slider_pane_g2

0x8ae5,	// (0x0007cc4d) vtel_slider_pane_g3_ParamLimits

0x8ae5,	// (0x0007cc4d) vtel_slider_pane_g3

0x8ab9,	// (0x0007cc21) vtel_slider_pane_g4_ParamLimits

0x8ab9,	// (0x0007cc21) vtel_slider_pane_g4

0x8afb,	// (0x0007cc63) vtel_slider_pane_g5_ParamLimits

0x8afb,	// (0x0007cc63) vtel_slider_pane_g5

0x0004,

0xf9fc,	// (0x00083b64) vtel_slider_pane_g_ParamLimits

0xf9fc,	// (0x00083b64) vtel_slider_pane_g

0xab43,	// (0x0007ecab) main_gallery2_pane

0x81fc,	// (0x0007c364) aid_size_row_itut2_dropdow_list_ParamLimits

0x81fc,	// (0x0007c364) aid_size_row_itut2_dropdow_list

0x8288,	// (0x0007c3f0) grid_vitu2_function_top_pane_ParamLimits

0x8288,	// (0x0007c3f0) grid_vitu2_function_top_pane

0x82ed,	// (0x0007c455) popup_vitu2_dropdown_list_window_ParamLimits

0x82ed,	// (0x0007c455) popup_vitu2_dropdown_list_window

0x8316,	// (0x0007c47e) popup_vitu2_match_list_window

0x8b11,	// (0x0007cc79) cell_vitu2_function_top_pane_ParamLimits

0x8b11,	// (0x0007cc79) cell_vitu2_function_top_pane

0x8b2f,	// (0x0007cc97) cell_vitu2_function_top_pane_cp01_ParamLimits

0x8b2f,	// (0x0007cc97) cell_vitu2_function_top_pane_cp01

0x8b4d,	// (0x0007ccb5) cell_vitu2_function_top_wide_pane_ParamLimits

0x8b4d,	// (0x0007ccb5) cell_vitu2_function_top_wide_pane

0xe93a,	// (0x00082aa2) bg_button_pane_cp012

0x8b6b,	// (0x0007ccd3) cell_vitu2_function_top_pane_g1

0xe82a,	// (0x00082992) bg_button_pane_cp013_ParamLimits

0xe82a,	// (0x00082992) bg_button_pane_cp013

0x8b7f,	// (0x0007cce7) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x8b7f,	// (0x0007cce7) cell_vitu2_function_top_wide_pane_g1

0xe93a,	// (0x00082aa2) bg_popup_sub_pane_cp20

0x8b97,	// (0x0007ccff) list_vitu2_match_list_pane

0xc628,	// (0x00080790) bg_popup_sub_pane_cp20_g1

0xc630,	// (0x00080798) bg_popup_sub_pane_cp20_g2

0x2df5,	// (0x00076f5d) bg_popup_sub_pane_cp20_g3

0xc638,	// (0x000807a0) bg_popup_sub_pane_cp20_g4

0x2dd5,	// (0x00076f3d) bg_popup_sub_pane_cp20_g5

0xc875,	// (0x000809dd) bg_popup_sub_pane_cp20_g6

0xc648,	// (0x000807b0) bg_popup_sub_pane_cp20_g7

0xc650,	// (0x000807b8) bg_popup_sub_pane_cp20_g8

0xc658,	// (0x000807c0) bg_popup_sub_pane_cp20_g9

0x0008,

0xfa07,	// (0x00083b6f) bg_popup_sub_pane_cp20_g

0xe846,	// (0x000829ae) list_vitu2_match_list_item_pane_ParamLimits

0xe846,	// (0x000829ae) list_vitu2_match_list_item_pane

0xe858,	// (0x000829c0) list_vitu2_match_list_item_pane_t1

0xab43,	// (0x0007ecab) bg_popup_sub_pane_cp21

0x3c15,	// (0x00077d7d) grid_vitu2_dropdown_list_pane

0x8bb5,	// (0x0007cd1d) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x8bb5,	// (0x0007cd1d) cell_vitu2_dropdown_list_char_pane

0x8bd6,	// (0x0007cd3e) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x8bd6,	// (0x0007cd3e) cell_vitu2_dropdown_list_ctrl_pane

0xc895,	// (0x000809fd) cell_vitu2_dropdown_list_char_pane_g1

0xc89e,	// (0x00080a06) cell_vitu2_dropdown_list_char_pane_g2

0xc8a7,	// (0x00080a0f) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xfa24,	// (0x00083b8c) cell_vitu2_dropdown_list_char_pane_g

0x8c02,	// (0x0007cd6a) cell_vitu2_dropdown_list_char_pane_t1

0x8c10,	// (0x0007cd78) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x8c10,	// (0x0007cd78) cell_vitu2_dropdown_list_ctrl_pane_g1

0x8c20,	// (0x0007cd88) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x8c20,	// (0x0007cd88) cell_vitu2_dropdown_list_ctrl_pane_g2

0x8c31,	// (0x0007cd99) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x8c31,	// (0x0007cd99) cell_vitu2_dropdown_list_ctrl_pane_g3

0x8c41,	// (0x0007cda9) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x8c41,	// (0x0007cda9) cell_vitu2_dropdown_list_ctrl_pane_g4

0xbdf6,	// (0x0007ff5e) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0xbdf6,	// (0x0007ff5e) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa2b,	// (0x00083b93) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa2b,	// (0x00083b93) cell_vitu2_dropdown_list_ctrl_pane_g

0x8c5d,	// (0x0007cdc5) aid_size_cell_gallery2_ParamLimits

0x8c5d,	// (0x0007cdc5) aid_size_cell_gallery2

0x8c73,	// (0x0007cddb) grid_gallery2_pane_ParamLimits

0x8c73,	// (0x0007cddb) grid_gallery2_pane

0x8c87,	// (0x0007cdef) scroll_pane_cp029_ParamLimits

0x8c87,	// (0x0007cdef) scroll_pane_cp029

0x8c93,	// (0x0007cdfb) cell_gallery2_pane_ParamLimits

0x8c93,	// (0x0007cdfb) cell_gallery2_pane

0xc8b0,	// (0x00080a18) cell_gallery2_pane_g2

0x8cc9,	// (0x0007ce31) cell_gallery2_pane_g3

0xc8ba,	// (0x00080a22) cell_gallery2_pane_g4

0xc8c2,	// (0x00080a2a) cell_gallery2_pane_g5

0x4244,	// (0x000783ac) grid_highlight_pane_cp10

0x8316,	// (0x0007c47e) popup_vitu2_match_list_window_ParamLimits

0x832b,	// (0x0007c493) popup_vitu2_query_window_ParamLimits

0x832b,	// (0x0007c493) popup_vitu2_query_window

0xab43,	// (0x0007ecab) bg_vitu2_candi_button_pane

0xc895,	// (0x000809fd) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xc89e,	// (0x00080a06) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xc8a7,	// (0x00080a0f) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x1068,	// (0x000751d0) bg_button_pane_cp015

0x8cd1,	// (0x0007ce39) bg_button_pane_cp016

0x8ce4,	// (0x0007ce4c) bg_button_pane_cp017

0xb687,	// (0x0007f7ef) bg_popup_sub_pane_cp22

0xc8ca,	// (0x00080a32) popup_vitu2_query_window_g1

0x8d08,	// (0x0007ce70) popup_vitu2_query_window_g2

0x0002,

0xfa36,	// (0x00083b9e) popup_vitu2_query_window_g

0x10a9,	// (0x00075211) popup_vitu2_query_window_t1_ParamLimits

0x10a9,	// (0x00075211) popup_vitu2_query_window_t1

0x10de,	// (0x00075246) popup_vitu2_query_window_t2_ParamLimits

0x10de,	// (0x00075246) popup_vitu2_query_window_t2

0x10f0,	// (0x00075258) popup_vitu2_query_window_t3_ParamLimits

0x10f0,	// (0x00075258) popup_vitu2_query_window_t3

0x8d1b,	// (0x0007ce83) popup_vitu2_query_window_t4_ParamLimits

0x8d1b,	// (0x0007ce83) popup_vitu2_query_window_t4

0x8d3c,	// (0x0007cea4) popup_vitu2_query_window_t5_ParamLimits

0x8d3c,	// (0x0007cea4) popup_vitu2_query_window_t5

0x0006,

0xfa3d,	// (0x00083ba5) popup_vitu2_query_window_t_ParamLimits

0xfa3d,	// (0x00083ba5) popup_vitu2_query_window_t

0xc72a,	// (0x00080892) main_cset_text_pane

0x875c,	// (0x0007c8c4) aid_area_touch_slider_ParamLimits

0x8778,	// (0x0007c8e0) cset_slider_pane_ParamLimits

0x87a2,	// (0x0007c90a) main_cset_slider_pane_g1_ParamLimits

0x87b7,	// (0x0007c91f) main_cset_slider_pane_g2_ParamLimits

0xc74b,	// (0x000808b3) main_cset_slider_pane_g3_ParamLimits

0xc74b,	// (0x000808b3) main_cset_slider_pane_g3

0x87cc,	// (0x0007c934) main_cset_slider_pane_g4_ParamLimits

0x87cc,	// (0x0007c934) main_cset_slider_pane_g4

0x87db,	// (0x0007c943) main_cset_slider_pane_g5_ParamLimits

0x87db,	// (0x0007c943) main_cset_slider_pane_g5

0x87e7,	// (0x0007c94f) main_cset_slider_pane_g6_ParamLimits

0x87e7,	// (0x0007c94f) main_cset_slider_pane_g6

0xf990,	// (0x00083af8) main_cset_slider_pane_g_ParamLimits

0xc77b,	// (0x000808e3) main_cset_slider_pane_t1_ParamLimits

0x8873,	// (0x0007c9db) main_cset_slider_pane_t2_ParamLimits

0x888d,	// (0x0007c9f5) main_cset_slider_pane_t3_ParamLimits

0x88a7,	// (0x0007ca0f) main_cset_slider_pane_t4_ParamLimits

0x88c1,	// (0x0007ca29) main_cset_slider_pane_t5_ParamLimits

0x88dd,	// (0x0007ca45) main_cset_slider_pane_t6_ParamLimits

0x88f2,	// (0x0007ca5a) main_cset_slider_pane_t7_ParamLimits

0x891c,	// (0x0007ca84) main_cset_slider_pane_t8_ParamLimits

0x891c,	// (0x0007ca84) main_cset_slider_pane_t8

0x8944,	// (0x0007caac) main_cset_slider_pane_t9_ParamLimits

0x8944,	// (0x0007caac) main_cset_slider_pane_t9

0x896c,	// (0x0007cad4) main_cset_slider_pane_t10_ParamLimits

0x896c,	// (0x0007cad4) main_cset_slider_pane_t10

0x8994,	// (0x0007cafc) main_cset_slider_pane_t11_ParamLimits

0x8994,	// (0x0007cafc) main_cset_slider_pane_t11

0x89bc,	// (0x0007cb24) main_cset_slider_pane_t12_ParamLimits

0x89bc,	// (0x0007cb24) main_cset_slider_pane_t12

0x89d9,	// (0x0007cb41) main_cset_slider_pane_t13_ParamLimits

0x89d9,	// (0x0007cb41) main_cset_slider_pane_t13

0xf9b5,	// (0x00083b1d) main_cset_slider_pane_t_ParamLimits

0xab43,	// (0x0007ecab) bg_popup_sub_pane_cp011

0xc8d6,	// (0x00080a3e) main_cset_text_pane_g1

0xc8de,	// (0x00080a46) main_cset_text_pane_t1

0xc8ec,	// (0x00080a54) main_cset_text_pane_t2

0xc8fa,	// (0x00080a62) main_cset_text_pane_t3

0xc908,	// (0x00080a70) main_cset_text_pane_t4

0xc916,	// (0x00080a7e) main_cset_text_pane_t5

0xc924,	// (0x00080a8c) main_cset_text_pane_t6

0xc932,	// (0x00080a9a) main_cset_text_pane_t7

0x0006,

0xfa4c,	// (0x00083bb4) main_cset_text_pane_t

0xab43,	// (0x0007ecab) main_cam4_burst_pane

0xab43,	// (0x0007ecab) main_cam5_pane

0x869b,	// (0x0007c803) bg_button_pane_cp019

0x86a4,	// (0x0007c80c) bg_button_pane_cp020

0xc757,	// (0x000808bf) main_cset_slider_pane_g7_ParamLimits

0xc757,	// (0x000808bf) main_cset_slider_pane_g7

0xc763,	// (0x000808cb) main_cset_slider_pane_g8_ParamLimits

0xc763,	// (0x000808cb) main_cset_slider_pane_g8

0x87fb,	// (0x0007c963) main_cset_slider_pane_g9_ParamLimits

0x87fb,	// (0x0007c963) main_cset_slider_pane_g9

0x8807,	// (0x0007c96f) main_cset_slider_pane_g10_ParamLimits

0x8807,	// (0x0007c96f) main_cset_slider_pane_g10

0x8813,	// (0x0007c97b) main_cset_slider_pane_g11_ParamLimits

0x8813,	// (0x0007c97b) main_cset_slider_pane_g11

0x881f,	// (0x0007c987) main_cset_slider_pane_g12_ParamLimits

0x881f,	// (0x0007c987) main_cset_slider_pane_g12

0x882b,	// (0x0007c993) main_cset_slider_pane_g13_ParamLimits

0x882b,	// (0x0007c993) main_cset_slider_pane_g13

0x8837,	// (0x0007c99f) main_cset_slider_pane_g14_ParamLimits

0x8837,	// (0x0007c99f) main_cset_slider_pane_g14

0x8843,	// (0x0007c9ab) main_cset_slider_pane_g15_ParamLimits

0x8843,	// (0x0007c9ab) main_cset_slider_pane_g15

0xc7a9,	// (0x00080911) main_cset_slider_pane_t14_ParamLimits

0xc7a9,	// (0x00080911) main_cset_slider_pane_t14

0xc7e2,	// (0x0008094a) main_cset_slider_pane_t15_ParamLimits

0xc7e2,	// (0x0008094a) main_cset_slider_pane_t15

0x8d5d,	// (0x0007cec5) aid_cam4_burst_size_cell_ParamLimits

0x8d5d,	// (0x0007cec5) aid_cam4_burst_size_cell

0x8d7d,	// (0x0007cee5) grid_cam4_burst_pane_ParamLimits

0x8d7d,	// (0x0007cee5) grid_cam4_burst_pane

0x8db5,	// (0x0007cf1d) linegrid_cam4_burst_pane_ParamLimits

0x8db5,	// (0x0007cf1d) linegrid_cam4_burst_pane

0xc940,	// (0x00080aa8) scroll_pane_cp30_ParamLimits

0xc940,	// (0x00080aa8) scroll_pane_cp30

0x8ddb,	// (0x0007cf43) cell_cam4_burst_pane_ParamLimits

0x8ddb,	// (0x0007cf43) cell_cam4_burst_pane

0xc94c,	// (0x00080ab4) linegrid_cam4_burst_pane_g1_ParamLimits

0xc94c,	// (0x00080ab4) linegrid_cam4_burst_pane_g1

0x8e28,	// (0x0007cf90) linegrid_cam4_burst_pane_g2_ParamLimits

0x8e28,	// (0x0007cf90) linegrid_cam4_burst_pane_g2

0xc959,	// (0x00080ac1) linegrid_cam4_burst_pane_g3_ParamLimits

0xc959,	// (0x00080ac1) linegrid_cam4_burst_pane_g3

0x0002,

0xfa5b,	// (0x00083bc3) linegrid_cam4_burst_pane_g_ParamLimits

0xfa5b,	// (0x00083bc3) linegrid_cam4_burst_pane_g

0x8e39,	// (0x0007cfa1) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x8e39,	// (0x0007cfa1) linegrid_cam4_burst_pane_g3_copy1

0xc966,	// (0x00080ace) linegrid_cam4_burst_pane_g4_ParamLimits

0xc966,	// (0x00080ace) linegrid_cam4_burst_pane_g4

0x8e53,	// (0x0007cfbb) linegrid_cam4_burst_pane_g5_ParamLimits

0x8e53,	// (0x0007cfbb) linegrid_cam4_burst_pane_g5

0x8e64,	// (0x0007cfcc) linegrid_cam4_burst_pane_g6_ParamLimits

0x8e64,	// (0x0007cfcc) linegrid_cam4_burst_pane_g6

0xc973,	// (0x00080adb) linegrid_cam4_burst_pane_g7_ParamLimits

0xc973,	// (0x00080adb) linegrid_cam4_burst_pane_g7

0x8e7b,	// (0x0007cfe3) cell_cam4_burst_pane_g1

0xc98c,	// (0x00080af4) main_cam5_pane_t1_ParamLimits

0xc98c,	// (0x00080af4) main_cam5_pane_t1

0xc99e,	// (0x00080b06) main_cam5_pane_t2_ParamLimits

0xc99e,	// (0x00080b06) main_cam5_pane_t2

0xc9b0,	// (0x00080b18) main_cam5_pane_t3_ParamLimits

0xc9b0,	// (0x00080b18) main_cam5_pane_t3

0xc9c2,	// (0x00080b2a) main_cam5_pane_t4_ParamLimits

0xc9c2,	// (0x00080b2a) main_cam5_pane_t4

0xc9d8,	// (0x00080b40) main_cam5_pane_t5_ParamLimits

0xc9d8,	// (0x00080b40) main_cam5_pane_t5

0xc9ea,	// (0x00080b52) main_cam5_pane_t6_ParamLimits

0xc9ea,	// (0x00080b52) main_cam5_pane_t6

0xc9fe,	// (0x00080b66) main_cam5_pane_t7_ParamLimits

0xc9fe,	// (0x00080b66) main_cam5_pane_t7

0xca10,	// (0x00080b78) main_cam5_pane_t8_ParamLimits

0xca10,	// (0x00080b78) main_cam5_pane_t8

0xca2c,	// (0x00080b94) main_cam5_pane_t9_ParamLimits

0xca2c,	// (0x00080b94) main_cam5_pane_t9

0xca3e,	// (0x00080ba6) main_cam5_pane_t10_ParamLimits

0xca3e,	// (0x00080ba6) main_cam5_pane_t10

0xca50,	// (0x00080bb8) main_cam5_pane_t11_ParamLimits

0xca50,	// (0x00080bb8) main_cam5_pane_t11

0xca62,	// (0x00080bca) main_cam5_pane_t12_ParamLimits

0xca62,	// (0x00080bca) main_cam5_pane_t12

0xca77,	// (0x00080bdf) main_cam5_pane_t13_ParamLimits

0xca77,	// (0x00080bdf) main_cam5_pane_t13

0x000c,

0xfa67,	// (0x00083bcf) main_cam5_pane_t_ParamLimits

0xfa67,	// (0x00083bcf) main_cam5_pane_t

0x19eb,	// (0x00075b53) popup_scut_keymap_window_ParamLimits

0x19eb,	// (0x00075b53) popup_scut_keymap_window

0x8e8e,	// (0x0007cff6) aid_size_cell_brow_shortcut

0x4244,	// (0x000783ac) bg_popup_window_pane_cp010

0x8e9a,	// (0x0007d002) grid_scut_pane

0x8ea6,	// (0x0007d00e) cell_scut_pane_ParamLimits

0x8ea6,	// (0x0007d00e) cell_scut_pane

0x8ebd,	// (0x0007d025) cell_scut_pane_g1

0xca94,	// (0x00080bfc) cell_scut_pane_t1

0xcaa3,	// (0x00080c0b) cell_scut_pane_t2

0x8ec6,	// (0x0007d02e) cell_scut_pane_t3

0x0002,

0xfa82,	// (0x00083bea) cell_scut_pane_t

0x6d51,	// (0x0007aeb9) main_mup3_pane_g8_ParamLimits

0x6d51,	// (0x0007aeb9) main_mup3_pane_g8

0x8214,	// (0x0007c37c) area_vitu2_query_pane_ParamLimits

0x8214,	// (0x0007c37c) area_vitu2_query_pane

0x107c,	// (0x000751e4) input_focus_pane_cp08

0xcab2,	// (0x00080c1a) area_vitu2_query_pane_g1

0x116e,	// (0x000752d6) area_vitu2_query_pane_g2

0x0001,

0xfa89,	// (0x00083bf1) area_vitu2_query_pane_g

0x8ed4,	// (0x0007d03c) area_vitu2_query_pane_t1_ParamLimits

0x8ed4,	// (0x0007d03c) area_vitu2_query_pane_t1

0x8ee8,	// (0x0007d050) area_vitu2_query_pane_t2_ParamLimits

0x8ee8,	// (0x0007d050) area_vitu2_query_pane_t2

0x117f,	// (0x000752e7) area_vitu2_query_pane_t3_ParamLimits

0x117f,	// (0x000752e7) area_vitu2_query_pane_t3

0xcabe,	// (0x00080c26) area_vitu2_query_pane_t4_ParamLimits

0xcabe,	// (0x00080c26) area_vitu2_query_pane_t4

0xcae6,	// (0x00080c4e) area_vitu2_query_pane_t5_ParamLimits

0xcae6,	// (0x00080c4e) area_vitu2_query_pane_t5

0xcb0e,	// (0x00080c76) area_vitu2_query_pane_t6_ParamLimits

0xcb0e,	// (0x00080c76) area_vitu2_query_pane_t6

0x0006,

0xfa8e,	// (0x00083bf6) area_vitu2_query_pane_t_ParamLimits

0xfa8e,	// (0x00083bf6) area_vitu2_query_pane_t

0x8efc,	// (0x0007d064) bg_button_pane_cp018

0x8f0a,	// (0x0007d072) bg_button_pane_cp021

0x11a7,	// (0x0007530f) bg_button_pane_cp022

0x11b8,	// (0x00075320) input_focus_pane_cp09

0x406b,	// (0x000781d3) aid_size_touch_mv_arrow_left

0x4094,	// (0x000781fc) aid_size_touch_mv_arrow_right

0x885b,	// (0x0007c9c3) main_cset_slider_pane_g16_ParamLimits

0x885b,	// (0x0007c9c3) main_cset_slider_pane_g16

0x8867,	// (0x0007c9cf) main_cset_slider_pane_g17_ParamLimits

0x8867,	// (0x0007c9cf) main_cset_slider_pane_g17

0x8e7b,	// (0x0007cfe3) cell_cam4_burst_pane_g1_ParamLimits

0xab43,	// (0x0007ecab) compa_mode_pane

0x8a51,	// (0x0007cbb9) popup_vtel_slider_window_g3_ParamLimits

0x8a51,	// (0x0007cbb9) popup_vtel_slider_window_g3

0x8a68,	// (0x0007cbd0) popup_vtel_slider_window_g4_ParamLimits

0x8a68,	// (0x0007cbd0) popup_vtel_slider_window_g4

0x8a7f,	// (0x0007cbe7) popup_vtel_slider_window_t1_ParamLimits

0x8a7f,	// (0x0007cbe7) popup_vtel_slider_window_t1

0xab43,	// (0x0007ecab) main_cl_pane

0xb6af,	// (0x0007f817) popup_imed_adjust2_window_ParamLimits

0xb687,	// (0x0007f7ef) bg_tb_trans_pane_cp05_ParamLimits

0xc0b0,	// (0x00080218) popup_imed_adjust2_window_g1_ParamLimits

0xc0bf,	// (0x00080227) popup_imed_adjust2_window_g2_ParamLimits

0xc0bf,	// (0x00080227) popup_imed_adjust2_window_g2

0xc0cb,	// (0x00080233) popup_imed_adjust2_window_g3_ParamLimits

0xc0cb,	// (0x00080233) popup_imed_adjust2_window_g3

0x0002,

0xf7fe,	// (0x00083966) popup_imed_adjust2_window_g_ParamLimits

0xf7fe,	// (0x00083966) popup_imed_adjust2_window_g

0xc0d7,	// (0x0008023f) popup_imed_adjust2_window_t1_ParamLimits

0xc0ef,	// (0x00080257) slider_imed_adjust_pane_ParamLimits

0xc103,	// (0x0008026b) slider_imed_adjust_pane_g1_ParamLimits

0xc113,	// (0x0008027b) slider_imed_adjust_pane_g2_ParamLimits

0xc123,	// (0x0008028b) slider_imed_adjust_pane_g3_ParamLimits

0xc134,	// (0x0008029c) slider_imed_adjust_pane_g4_ParamLimits

0xf805,	// (0x0008396d) slider_imed_adjust_pane_g_ParamLimits

0x7f2f,	// (0x0007c097) aid_touch_area_cam4_ParamLimits

0x7f2f,	// (0x0007c097) aid_touch_area_cam4

0xe78d,	// (0x000828f5) battery_pane_cp01

0x7fff,	// (0x0007c167) main_camera4_pane_g6_ParamLimits

0x7fff,	// (0x0007c167) main_camera4_pane_g6

0x8029,	// (0x0007c191) main_camera4_pane_t2_ParamLimits

0x8029,	// (0x0007c191) main_camera4_pane_t2

0x0001,

0xf903,	// (0x00083a6b) main_camera4_pane_t_ParamLimits

0xf903,	// (0x00083a6b) main_camera4_pane_t

0x805e,	// (0x0007c1c6) aid_touch_area_vid4_ParamLimits

0x805e,	// (0x0007c1c6) aid_touch_area_vid4

0x80c5,	// (0x0007c22d) main_video4_pane_g5_ParamLimits

0x80c5,	// (0x0007c22d) main_video4_pane_g5

0x80f0,	// (0x0007c258) vid4_progress_pane_ParamLimits

0x80f0,	// (0x0007c258) vid4_progress_pane

0xc76f,	// (0x000808d7) main_cset_slider_pane_g18_ParamLimits

0xc76f,	// (0x000808d7) main_cset_slider_pane_g18

0xc980,	// (0x00080ae8) cell_cam4_burst_pane_g2_ParamLimits

0xc980,	// (0x00080ae8) cell_cam4_burst_pane_g2

0x0001,

0xfa62,	// (0x00083bca) cell_cam4_burst_pane_g_ParamLimits

0xfa62,	// (0x00083bca) cell_cam4_burst_pane_g

0x1d41,	// (0x00075ea9) bg_cl_pane_ParamLimits

0x1d41,	// (0x00075ea9) bg_cl_pane

0x8f16,	// (0x0007d07e) cl_header_pane_ParamLimits

0x8f16,	// (0x0007d07e) cl_header_pane

0x8f2a,	// (0x0007d092) cl_listscroll_pane_ParamLimits

0x8f2a,	// (0x0007d092) cl_listscroll_pane

0xcb5a,	// (0x00080cc2) bg_cl_pane_g1

0xcb62,	// (0x00080cca) bg_cl_pane_g2

0xcb6a,	// (0x00080cd2) bg_cl_pane_g3

0xcb72,	// (0x00080cda) bg_cl_pane_g4

0xcb7a,	// (0x00080ce2) bg_cl_pane_g5

0xcb82,	// (0x00080cea) bg_cl_pane_g6

0xcb8a,	// (0x00080cf2) bg_cl_pane_g7

0xcb92,	// (0x00080cfa) bg_cl_pane_g8

0xcb9a,	// (0x00080d02) bg_cl_pane_g9

0x0008,

0xfa9d,	// (0x00083c05) bg_cl_pane_g

0x8f3a,	// (0x0007d0a2) aid_height_cl_leading_ParamLimits

0x8f3a,	// (0x0007d0a2) aid_height_cl_leading

0x8f46,	// (0x0007d0ae) aid_height_cl_text_ParamLimits

0x8f46,	// (0x0007d0ae) aid_height_cl_text

0xe93a,	// (0x00082aa2) bg_cl_header_pane_ParamLimits

0xe93a,	// (0x00082aa2) bg_cl_header_pane

0x8f65,	// (0x0007d0cd) cl_header_pane_g1_ParamLimits

0x8f65,	// (0x0007d0cd) cl_header_pane_g1

0x8f7b,	// (0x0007d0e3) cl_header_pane_t1_ParamLimits

0x8f7b,	// (0x0007d0e3) cl_header_pane_t1

0xcba2,	// (0x00080d0a) cl_list_pane

0xc742,	// (0x000808aa) hc_scroll_pane_cp01

0x2dd5,	// (0x00076f3d) bg_cl_header_pane_g1

0xc628,	// (0x00080790) bg_cl_header_pane_g2

0x2df5,	// (0x00076f5d) bg_cl_header_pane_g3

0xc638,	// (0x000807a0) bg_cl_header_pane_g4

0xc630,	// (0x00080798) bg_cl_header_pane_g5

0xc875,	// (0x000809dd) bg_cl_header_pane_g6

0xc650,	// (0x000807b8) bg_cl_header_pane_g7

0xc658,	// (0x000807c0) bg_cl_header_pane_g8

0xc648,	// (0x000807b0) bg_cl_header_pane_g9

0x0008,

0xfab0,	// (0x00083c18) bg_cl_header_pane_g

0x8f94,	// (0x0007d0fc) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x8f94,	// (0x0007d0fc) hc_cl_list_double_graphic_heading_pane

0x8fa8,	// (0x0007d110) hc_cl_list_single_graphic_pane_ParamLimits

0x8fa8,	// (0x0007d110) hc_cl_list_single_graphic_pane

0x8fc2,	// (0x0007d12a) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x8fc2,	// (0x0007d12a) hc_cl_list_single_graphic_pane_g1

0x8fce,	// (0x0007d136) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x8fce,	// (0x0007d136) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfac3,	// (0x00083c2b) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfac3,	// (0x00083c2b) hc_cl_list_single_graphic_pane_g

0x8fe2,	// (0x0007d14a) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x8fe2,	// (0x0007d14a) hc_cl_list_single_graphic_pane_t1

0x8fc2,	// (0x0007d12a) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x8fc2,	// (0x0007d12a) hc_cl_list_double_graphic_heading_pane_g1

0x8ff7,	// (0x0007d15f) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x8ff7,	// (0x0007d15f) hc_cl_list_double_graphic_heading_pane_g2

0x900b,	// (0x0007d173) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x900b,	// (0x0007d173) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfac8,	// (0x00083c30) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfac8,	// (0x00083c30) hc_cl_list_double_graphic_heading_pane_g

0x901f,	// (0x0007d187) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x901f,	// (0x0007d187) hc_cl_list_double_graphic_heading_pane_t1

0x9034,	// (0x0007d19c) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x9034,	// (0x0007d19c) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfacf,	// (0x00083c37) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfacf,	// (0x00083c37) hc_cl_list_double_graphic_heading_pane_t

0xe86e,	// (0x000829d6) vid4_progress_pane_g1

0xe87e,	// (0x000829e6) vid4_progress_pane_g2

0xe88e,	// (0x000829f6) vid4_progress_pane_g3

0xe7c2,	// (0x0008292a) vid4_progress_pane_g4

0x0004,

0xfad4,	// (0x00083c3c) vid4_progress_pane_g

0xe89a,	// (0x00082a02) vid4_progress_pane_t1

0xe8af,	// (0x00082a17) vid4_progress_pane_t2

0x0002,

0xfadf,	// (0x00083c47) vid4_progress_pane_t

0xe8da,	// (0x00082a42) wait_bar_pane_cp07

0xb980,	// (0x0007fae8) blid_firmament_pane_ParamLimits

0xb9c3,	// (0x0007fb2b) popup_blid_sat_info2_window_g1

0xb9e7,	// (0x0007fb4f) popup_blid_sat_info2_window_t3

0xb9f5,	// (0x0007fb5d) popup_blid_sat_info2_window_t4

0xba03,	// (0x0007fb6b) popup_blid_sat_info2_window_t5

0xba11,	// (0x0007fb79) popup_blid_sat_info2_window_t6

0xba21,	// (0x0007fb89) popup_blid_sat_info2_window_t7

0xba2f,	// (0x0007fb97) popup_blid_sat_info2_window_t8

0xba3d,	// (0x0007fba5) popup_blid_sat_info2_window_t9

0xba4b,	// (0x0007fbb3) popup_blid_sat_info2_window_t10

0xbb0f,	// (0x0007fc77) aid_firma_cardinal_ParamLimits

0xbb23,	// (0x0007fc8b) blid_firmament_pane_t1_ParamLimits

0xbb3a,	// (0x0007fca2) blid_firmament_pane_t2_ParamLimits

0xbb51,	// (0x0007fcb9) blid_firmament_pane_t3_ParamLimits

0xbb68,	// (0x0007fcd0) blid_firmament_pane_t4_ParamLimits

0xf6f7,	// (0x0008385f) blid_firmament_pane_t_ParamLimits

0xbb7f,	// (0x0007fce7) blid_sat_info_pane_ParamLimits

0xe93a,	// (0x00082aa2) main_cam_set_pane_ParamLimits

0x75bf,	// (0x0007b727) aid_size_cell_colour_35_ParamLimits

0x75df,	// (0x0007b747) aid_size_cell_colour_112_ParamLimits

0x75ff,	// (0x0007b767) aid_size_cell_effect_ParamLimits

0xb687,	// (0x0007f7ef) bg_tb_trans_pane_cp02_ParamLimits

0x3954,	// (0x00077abc) heading_imed_pane_ParamLimits

0x761f,	// (0x0007b787) listscroll_imed_pane_ParamLimits

0x56fe,	// (0x00079866) popup_call2_audio_first_window_g5_ParamLimits

0x56fe,	// (0x00079866) popup_call2_audio_first_window_g5

0x7bd6,	// (0x0007bd3e) aid_size_touch_image3_arrow_left_ParamLimits

0x7bd6,	// (0x0007bd3e) aid_size_touch_image3_arrow_left

0x7c02,	// (0x0007bd6a) aid_size_touch_image3_arrow_right_ParamLimits

0x7c02,	// (0x0007bd6a) aid_size_touch_image3_arrow_right

0xe8c5,	// (0x00082a2d) vid4_progress_pane_t3

0x7942,	// (0x0007baaa) main_hwr_training_symbol_option_pane_ParamLimits

0x7942,	// (0x0007baaa) main_hwr_training_symbol_option_pane

0xc39d,	// (0x00080505) popup_hwr_training_preview_window_ParamLimits

0xc39d,	// (0x00080505) popup_hwr_training_preview_window

0x7962,	// (0x0007baca) hwr_training_navi_pane_g5_ParamLimits

0x7962,	// (0x0007baca) hwr_training_navi_pane_g5

0xc616,	// (0x0008077e) popup_char_count_window

0xe93a,	// (0x00082aa2) bg_popup_sub_pane_cp20_ParamLimits

0x8b97,	// (0x0007ccff) list_vitu2_match_list_pane_ParamLimits

0x8ba6,	// (0x0007cd0e) vitu2_page_scroll_pane_ParamLimits

0x8ba6,	// (0x0007cd0e) vitu2_page_scroll_pane

0xcbf4,	// (0x00080d5c) list_single_hwr_training_symbol_option_pane_ParamLimits

0xcbf4,	// (0x00080d5c) list_single_hwr_training_symbol_option_pane

0xcc07,	// (0x00080d6f) list_single_hwr_training_symbol_option_pane_g1

0xcc0f,	// (0x00080d77) list_single_hwr_training_symbol_option_pane_t1

0xcc1d,	// (0x00080d85) bg_button_pane_cp023

0xcc26,	// (0x00080d8e) bg_button_pane_cp024

0x9049,	// (0x0007d1b1) vitu2_page_scroll_pane_g1

0x9051,	// (0x0007d1b9) vitu2_page_scroll_pane_g2

0x0001,

0xfae6,	// (0x00083c4e) vitu2_page_scroll_pane_g

0x9059,	// (0x0007d1c1) vitu2_page_scroll_pane_t1

0xb89c,	// (0x0007fa04) popup_char_count_window_g1

0xcc59,	// (0x00080dc1) popup_char_count_window_g2

0xcc62,	// (0x00080dca) popup_char_count_window_g3

0x0002,

0xfaeb,	// (0x00083c53) popup_char_count_window_g

0xcc6b,	// (0x00080dd3) popup_char_count_window_t1

0xab43,	// (0x0007ecab) main_vded2_pane

0xc09c,	// (0x00080204) aid_size_cell_imed_line

0xc0a6,	// (0x0008020e) grid_imed_line_width_pane

0x8160,	// (0x0007c2c8) vid4_indicators_pane_g4

0xcc79,	// (0x00080de1) cell_imed_line_width_pane_ParamLimits

0xcc79,	// (0x00080de1) cell_imed_line_width_pane

0xcc8d,	// (0x00080df5) cell_imed_line_width_pane_g1

0xcc96,	// (0x00080dfe) cell_imed_line_width_pane_g2

0x0001,

0xfaf2,	// (0x00083c5a) cell_imed_line_width_pane_g

0x9068,	// (0x0007d1d0) main_vded2_pane_g1_ParamLimits

0x9068,	// (0x0007d1d0) main_vded2_pane_g1

0x907e,	// (0x0007d1e6) main_vded2_pane_g2_ParamLimits

0x907e,	// (0x0007d1e6) main_vded2_pane_g2

0x0001,

0xfaf7,	// (0x00083c5f) main_vded2_pane_g_ParamLimits

0xfaf7,	// (0x00083c5f) main_vded2_pane_g

0x9090,	// (0x0007d1f8) vded2_slider_pane_ParamLimits

0x9090,	// (0x0007d1f8) vded2_slider_pane

0x90a0,	// (0x0007d208) aid_size_touch_vded2_end

0x90aa,	// (0x0007d212) aid_size_touch_vded2_playhead

0xcc9e,	// (0x00080e06) aid_size_touch_vded2_start

0xcca6,	// (0x00080e0e) vded2_slider_bg_pane

0xccaf,	// (0x00080e17) vded2_slider_pane_g1

0xccb8,	// (0x00080e20) vded2_slider_pane_g2

0x90b4,	// (0x0007d21c) vded2_slider_pane_g3

0x0002,

0xfafc,	// (0x00083c64) vded2_slider_pane_g

0xccc0,	// (0x00080e28) vded2_slider_bg_pane_g1

0xccc9,	// (0x00080e31) vded2_slider_bg_pane_g2

0xccd2,	// (0x00080e3a) vded2_slider_bg_pane_g3

0x0002,

0xfb03,	// (0x00083c6b) vded2_slider_bg_pane_g

0x48ad,	// (0x00078a15) aid_postcard_touch_down_pane_ParamLimits

0x48ad,	// (0x00078a15) aid_postcard_touch_down_pane

0x48c3,	// (0x00078a2b) aid_postcard_touch_up_pane_ParamLimits

0x48c3,	// (0x00078a2b) aid_postcard_touch_up_pane

0xab43,	// (0x0007ecab) main_blid2_pane

0xb695,	// (0x0007f7fd) popup_blid2_search_window

0xab43,	// (0x0007ecab) blid2_gps_pane

0xab43,	// (0x0007ecab) blid2_navig_pane

0xab43,	// (0x0007ecab) blid2_search_pane

0xab43,	// (0x0007ecab) blid2_tripm_pane

0x90bf,	// (0x0007d227) blid2_search_pane_g1_ParamLimits

0x90bf,	// (0x0007d227) blid2_search_pane_g1

0x90d7,	// (0x0007d23f) blid2_search_pane_t1_ParamLimits

0x90d7,	// (0x0007d23f) blid2_search_pane_t1

0x90e9,	// (0x0007d251) aid_size_cell_blid2_gps_ParamLimits

0x90e9,	// (0x0007d251) aid_size_cell_blid2_gps

0x9101,	// (0x0007d269) blid2_gps_pane_g1_ParamLimits

0x9101,	// (0x0007d269) blid2_gps_pane_g1

0x9115,	// (0x0007d27d) grid_blid2_satellite_pane_ParamLimits

0x9115,	// (0x0007d27d) grid_blid2_satellite_pane

0x912f,	// (0x0007d297) blid2_navig_pane_g1_ParamLimits

0x912f,	// (0x0007d297) blid2_navig_pane_g1

0x913b,	// (0x0007d2a3) blid2_navig_pane_t1_ParamLimits

0x913b,	// (0x0007d2a3) blid2_navig_pane_t1

0x9156,	// (0x0007d2be) blid2_navig_pane_t2_ParamLimits

0x9156,	// (0x0007d2be) blid2_navig_pane_t2

0x0001,

0xfb0a,	// (0x00083c72) blid2_navig_pane_t_ParamLimits

0xfb0a,	// (0x00083c72) blid2_navig_pane_t

0x9171,	// (0x0007d2d9) blid2_navig_ring_pane_ParamLimits

0x9171,	// (0x0007d2d9) blid2_navig_ring_pane

0x918a,	// (0x0007d2f2) blid2_speed_pane_ParamLimits

0x918a,	// (0x0007d2f2) blid2_speed_pane

0x9196,	// (0x0007d2fe) blid2_tripm_pane_g1_ParamLimits

0x9196,	// (0x0007d2fe) blid2_tripm_pane_g1

0x91b1,	// (0x0007d319) blid2_tripm_pane_g2_ParamLimits

0x91b1,	// (0x0007d319) blid2_tripm_pane_g2

0x91c5,	// (0x0007d32d) blid2_tripm_pane_g3_ParamLimits

0x91c5,	// (0x0007d32d) blid2_tripm_pane_g3

0x91d9,	// (0x0007d341) blid2_tripm_pane_g4_ParamLimits

0x91d9,	// (0x0007d341) blid2_tripm_pane_g4

0x91ed,	// (0x0007d355) blid2_tripm_pane_g5_ParamLimits

0x91ed,	// (0x0007d355) blid2_tripm_pane_g5

0x0005,

0xfb0f,	// (0x00083c77) blid2_tripm_pane_g_ParamLimits

0xfb0f,	// (0x00083c77) blid2_tripm_pane_g

0x9213,	// (0x0007d37b) blid2_tripm_pane_t1_ParamLimits

0x9213,	// (0x0007d37b) blid2_tripm_pane_t1

0x922e,	// (0x0007d396) blid2_tripm_pane_t2_ParamLimits

0x922e,	// (0x0007d396) blid2_tripm_pane_t2

0x9249,	// (0x0007d3b1) blid2_tripm_pane_t3_ParamLimits

0x9249,	// (0x0007d3b1) blid2_tripm_pane_t3

0x0003,

0xfb1c,	// (0x00083c84) blid2_tripm_pane_t_ParamLimits

0xfb1c,	// (0x00083c84) blid2_tripm_pane_t

0x9290,	// (0x0007d3f8) cell_blid2_satellite_pane_ParamLimits

0x9290,	// (0x0007d3f8) cell_blid2_satellite_pane

0x92ae,	// (0x0007d416) cell_blid2_satellite_pane_g1

0xccdb,	// (0x00080e43) cell_blid2_satellite_pane_t1

0xbb8f,	// (0x0007fcf7) blid2_speed_pane_g1

0xcce9,	// (0x00080e51) blid2_speed_pane_t1

0xccf7,	// (0x00080e5f) blid2_speed_pane_t2

0x0001,

0xfb25,	// (0x00083c8d) blid2_speed_pane_t

0xbb8f,	// (0x0007fcf7) blid2_navig_ring_pane_g1

0x92b7,	// (0x0007d41f) blid2_navig_ring_pane_g2

0x92bf,	// (0x0007d427) blid2_navig_ring_pane_g3

0x92c7,	// (0x0007d42f) blid2_navig_ring_pane_g4

0x92cf,	// (0x0007d437) blid2_navig_ring_pane_g5

0x0004,

0xfb2a,	// (0x00083c92) blid2_navig_ring_pane_g

0xab43,	// (0x0007ecab) bg_popup_window_pane_cp011

0xcd05,	// (0x00080e6d) popup_blid2_search_window_g1

0xcd0d,	// (0x00080e75) popup_blid2_search_window_t1

0xcd1b,	// (0x00080e83) popup_blid2_search_window_t2

0x0001,

0xfb35,	// (0x00083c9d) popup_blid2_search_window_t

0x2c97,	// (0x00076dff) main_browser_pane_g1

0x1d41,	// (0x00075ea9) main_browser_pane_ParamLimits

0xe93a,	// (0x00082aa2) bg_button_pane_cp011_ParamLimits

0x8437,	// (0x0007c59f) cell_vitu2_function_pane_g1_ParamLimits

0xb687,	// (0x0007f7ef) bg_popup_sub_pane_cp22_ParamLimits

0x107c,	// (0x000751e4) input_focus_pane_cp08_ParamLimits

0x8cf7,	// (0x0007ce5f) popup_vitu2_query_button_pane_ParamLimits

0x8cf7,	// (0x0007ce5f) popup_vitu2_query_button_pane

0x1093,	// (0x000751fb) popup_vitu2_query_input_button_pane

0xc8ca,	// (0x00080a32) popup_vitu2_query_window_g1_ParamLimits

0x8d08,	// (0x0007ce70) popup_vitu2_query_window_g2_ParamLimits

0xfa36,	// (0x00083b9e) popup_vitu2_query_window_g_ParamLimits

0xab43,	// (0x0007ecab) bg_button_pane_cp026

0x92d7,	// (0x0007d43f) popup_vitu2_query_input_button_pane_g1

0xab43,	// (0x0007ecab) bg_button_pane_cp025

0xcd29,	// (0x00080e91) popup_vitu2_query_button_pane_t1

0x6a2b,	// (0x0007ab93) main_mp3_pane_t6

0x6a39,	// (0x0007aba1) popup_slider_window_cp01

0xe7a9,	// (0x00082911) cam4_battery_pane

0xe802,	// (0x0008296a) cam4_battery_pane_cp02

0xe866,	// (0x000829ce) cam4_battery_pane_cp01

0xe866,	// (0x000829ce) cam4_battery_pane_cp03

0xbb8f,	// (0x0007fcf7) cam4_battery_pane_g1

0xcd37,	// (0x00080e9f) cam4_battery_pane_g2

0x0001,

0xfb3a,	// (0x00083ca2) cam4_battery_pane_g

0xba59,	// (0x0007fbc1) popup_blid_sat_info2_window_t11

0x406b,	// (0x000781d3) aid_size_touch_mv_arrow_left_ParamLimits

0x4094,	// (0x000781fc) aid_size_touch_mv_arrow_right_ParamLimits

0x40dc,	// (0x00078244) navi_pane_g1_ParamLimits

0x40e8,	// (0x00078250) navi_pane_g2_ParamLimits

0x4116,	// (0x0007827e) navi_pane_g3_ParamLimits

0xf409,	// (0x00083571) navi_pane_g_ParamLimits

0x41d2,	// (0x0007833a) navi_pane_mv_t1_ParamLimits

0x762b,	// (0x0007b793) grid_imed_effect_pane_ParamLimits

0x2848,	// (0x000769b0) aid_placing_vt_slider_lsc

0x2858,	// (0x000769c0) aid_placing_vt_slider_prt

0xe93a,	// (0x00082aa2) bg_tb_trans_pane_cp01_ParamLimits

0xbd16,	// (0x0007fe7e) popup_image_details_window_g1_ParamLimits

0xbd29,	// (0x0007fe91) popup_image_details_window_g2_ParamLimits

0xbd3e,	// (0x0007fea6) popup_image_details_window_g3_ParamLimits

0xbd3e,	// (0x0007fea6) popup_image_details_window_g3

0xf73c,	// (0x000838a4) popup_image_details_window_g_ParamLimits

0xbd52,	// (0x0007feba) popup_image_details_window_t1_ParamLimits

0xbd64,	// (0x0007fecc) popup_image_details_window_t2_ParamLimits

0xbd7d,	// (0x0007fee5) popup_image_details_window_t3_ParamLimits

0xbd91,	// (0x0007fef9) popup_image_details_window_t4_ParamLimits

0xbdac,	// (0x0007ff14) popup_image_details_window_t5_ParamLimits

0xf743,	// (0x000838ab) popup_image_details_window_t_ParamLimits

0x8f52,	// (0x0007d0ba) cl_header_name_pane_ParamLimits

0x8f52,	// (0x0007d0ba) cl_header_name_pane

0x92df,	// (0x0007d447) cl_header_name_pane_t1_ParamLimits

0x92df,	// (0x0007d447) cl_header_name_pane_t1

0x9300,	// (0x0007d468) cl_header_name_pane_t2_ParamLimits

0x9300,	// (0x0007d468) cl_header_name_pane_t2

0x9342,	// (0x0007d4aa) cl_header_name_pane_t3_ParamLimits

0x9342,	// (0x0007d4aa) cl_header_name_pane_t3

0x0002,

0xfb3f,	// (0x00083ca7) cl_header_name_pane_t_ParamLimits

0xfb3f,	// (0x00083ca7) cl_header_name_pane_t

0x41a3,	// (0x0007830b) navi_pane_mv_g2_ParamLimits

0xc5d3,	// (0x0008073b) field_vitu2_entry_pane_g1_ParamLimits

0xc5df,	// (0x00080747) field_vitu2_entry_pane_g2_ParamLimits

0xc5eb,	// (0x00080753) field_vitu2_entry_pane_g3_ParamLimits

0xc5eb,	// (0x00080753) field_vitu2_entry_pane_g3

0xf935,	// (0x00083a9d) field_vitu2_entry_pane_g_ParamLimits

0x83b3,	// (0x0007c51b) cell_vitu2_itu_pane_g1_ParamLimits

0x83c3,	// (0x0007c52b) cell_vitu2_itu_pane_g2_ParamLimits

0x83c3,	// (0x0007c52b) cell_vitu2_itu_pane_g2

0x0001,

0xf941,	// (0x00083aa9) cell_vitu2_itu_pane_g_ParamLimits

0xf941,	// (0x00083aa9) cell_vitu2_itu_pane_g

0xe93a,	// (0x00082aa2) bg_vkb2_func_pane_cp05_ParamLimits

0xe93a,	// (0x00082aa2) bg_vkb2_func_pane_cp05

0xe93a,	// (0x00082aa2) bg_vkb2_func_pane_cp03

0xe93a,	// (0x00082aa2) bg_vkb2_func_pane_cp04

0xe93a,	// (0x00082aa2) bg_vkb2_func_pane_cp10_ParamLimits

0xe93a,	// (0x00082aa2) bg_vkb2_func_pane_cp10

0x11a7,	// (0x0007530f) bg_vkb2_func_pane_cp08

0x8efc,	// (0x0007d064) bg_vkb2_func_pane_cp06

0x8f0a,	// (0x0007d072) bg_vkb2_func_pane_cp07

0xcc2f,	// (0x00080d97) bg_vkb2_func_pane_cp11_ParamLimits

0xcc2f,	// (0x00080d97) bg_vkb2_func_pane_cp11

0xcc44,	// (0x00080dac) bg_vkb2_func_pane_cp12_ParamLimits

0xcc44,	// (0x00080dac) bg_vkb2_func_pane_cp12

0xab43,	// (0x0007ecab) bg_vkb2_func_pane_cp09

0xc628,	// (0x00080790) bg_vkb2_func_pane_g1

0x2df5,	// (0x00076f5d) bg_vkb2_func_pane_g2

0xc630,	// (0x00080798) bg_vkb2_func_pane_g3

0xc638,	// (0x000807a0) bg_vkb2_func_pane_g4

0xc875,	// (0x000809dd) bg_vkb2_func_pane_g5

0xc650,	// (0x000807b8) bg_vkb2_func_pane_g6

0xc658,	// (0x000807c0) bg_vkb2_func_pane_g7

0xc648,	// (0x000807b0) bg_vkb2_func_pane_g8

0x2dd5,	// (0x00076f3d) bg_vkb2_func_pane_g9

0x0008,

0xfb46,	// (0x00083cae) bg_vkb2_func_pane_g

0x9201,	// (0x0007d369) blid2_tripm_pane_g6_ParamLimits

0x9201,	// (0x0007d369) blid2_tripm_pane_g6

0xc455,	// (0x000805bd) mp4_progress_pane_g1

0x927c,	// (0x0007d3e4) blid2_tripm_values_pane_ParamLimits

0x927c,	// (0x0007d3e4) blid2_tripm_values_pane

0x9373,	// (0x0007d4db) blid2_tripm_values_pane_t1

0x9381,	// (0x0007d4e9) blid2_tripm_values_pane_t2

0x938f,	// (0x0007d4f7) blid2_tripm_values_pane_t3

0x939d,	// (0x0007d505) blid2_tripm_values_pane_t4

0x93ab,	// (0x0007d513) blid2_tripm_values_pane_t5

0x93b9,	// (0x0007d521) blid2_tripm_values_pane_t6

0x93c7,	// (0x0007d52f) blid2_tripm_values_pane_t7

0x93d5,	// (0x0007d53d) blid2_tripm_values_pane_t8

0x93e3,	// (0x0007d54b) blid2_tripm_values_pane_t9

0x0008,

0xfb59,	// (0x00083cc1) blid2_tripm_values_pane_t

0x2894,	// (0x000769fc) call_video_pane_t1_ParamLimits

0x28b2,	// (0x00076a1a) call_video_pane_t2_ParamLimits

0xf292,	// (0x000833fa) call_video_pane_t_ParamLimits

0x0e79,	// (0x00074fe1) msg_header_pane_g1_ParamLimits

0x4817,	// (0x0007897f) msg_header_pane_g2_ParamLimits

0x4817,	// (0x0007897f) msg_header_pane_g2

0x0001,

0xf4ac,	// (0x00083614) msg_header_pane_g_ParamLimits

0xf4ac,	// (0x00083614) msg_header_pane_g

0x1d41,	// (0x00075ea9) main_clock2_pane_ParamLimits

0x7350,	// (0x0007b4b8) grid_clock2_toolbar_pane_ParamLimits

0x7350,	// (0x0007b4b8) grid_clock2_toolbar_pane

0x7350,	// (0x0007b4b8) listscroll_clock2_pane_ParamLimits

0x7350,	// (0x0007b4b8) listscroll_clock2_pane

0x742d,	// (0x0007b595) main_clock2_pane_t3_ParamLimits

0x742d,	// (0x0007b595) main_clock2_pane_t3

0x7448,	// (0x0007b5b0) main_clock2_pane_t4_ParamLimits

0x7448,	// (0x0007b5b0) main_clock2_pane_t4

0xcd41,	// (0x00080ea9) cell_clock2_toolbar_pane

0xcd49,	// (0x00080eb1) cell_clock2_toolbar_pane_cp01

0xcd49,	// (0x00080eb1) cell_clock2_toolbar_pane_cp02

0xcd51,	// (0x00080eb9) cell_clock2_toolbar_pane_cp03

0xcd59,	// (0x00080ec1) list_clock2_pane

0x3e0b,	// (0x00077f73) scroll_pane_cp10

0xcd61,	// (0x00080ec9) list_single_clock2_pane_ParamLimits

0xcd61,	// (0x00080ec9) list_single_clock2_pane

0x4244,	// (0x000783ac) list_highlight_pane_cp08

0xcd6e,	// (0x00080ed6) list_single_clock2_pane_t1

0xcd7c,	// (0x00080ee4) list_single_clock2_pane_t2

0x0001,

0xfb6c,	// (0x00083cd4) list_single_clock2_pane_t

0xab43,	// (0x0007ecab) bg_button_pane_cp10

0xcd8a,	// (0x00080ef2) cell_clock2_toolbar_pane_g1

0x482b,	// (0x00078993) aid_main_viewer_pane_g1_ParamLimits

0x482b,	// (0x00078993) aid_main_viewer_pane_g1

0x4839,	// (0x000789a1) aid_main_viewer_pane_g2_ParamLimits

0x4839,	// (0x000789a1) aid_main_viewer_pane_g2

0x4847,	// (0x000789af) aid_main_viewer_pane_g3_ParamLimits

0x4847,	// (0x000789af) aid_main_viewer_pane_g3

0x4856,	// (0x000789be) aid_main_viewer_pane_g4_ParamLimits

0x4856,	// (0x000789be) aid_main_viewer_pane_g4

0x0003,

0xf4bd,	// (0x00083625) aid_main_viewer_pane_g_ParamLimits

0xf4bd,	// (0x00083625) aid_main_viewer_pane_g

0x5c52,	// (0x00079dba) main_calc_pane_ParamLimits

0x5c66,	// (0x00079dce) main_dialer2_pane_ParamLimits

0xab43,	// (0x0007ecab) main_cam6_pane

0xab43,	// (0x0007ecab) main_vid6_pane

0x735c,	// (0x0007b4c4) listscroll_gen_pane_cp06_ParamLimits

0x735c,	// (0x0007b4c4) listscroll_gen_pane_cp06

0x7463,	// (0x0007b5cb) main_clock2_pane_t5_ParamLimits

0x7463,	// (0x0007b5cb) main_clock2_pane_t5

0x74c0,	// (0x0007b628) aid_call2_pane_cp10_ParamLimits

0x74d2,	// (0x0007b63a) aid_call_pane_cp10_ParamLimits

0x3ffa,	// (0x00078162) popup_clock_analogue_window_cp10_g1_ParamLimits

0x3ffa,	// (0x00078162) popup_clock_analogue_window_cp10_g2_ParamLimits

0x74e4,	// (0x0007b64c) popup_clock_analogue_window_cp10_g3_ParamLimits

0x74e4,	// (0x0007b64c) popup_clock_analogue_window_cp10_g4_ParamLimits

0x3ffa,	// (0x00078162) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf7f3,	// (0x0008395b) popup_clock_analogue_window_cp10_g_ParamLimits

0x74f6,	// (0x0007b65e) popup_clock_analogue_window_cp10_t1_ParamLimits

0x7b83,	// (0x0007bceb) cell_dialer2_keypad_pane_g2_ParamLimits

0x7b83,	// (0x0007bceb) cell_dialer2_keypad_pane_g2

0x0001,

0xf8d4,	// (0x00083a3c) cell_dialer2_keypad_pane_g_ParamLimits

0xf8d4,	// (0x00083a3c) cell_dialer2_keypad_pane_g

0x7b9f,	// (0x0007bd07) cell_dialer2_keypad_pane_t1

0x874e,	// (0x0007c8b6) main_cset_text2_pane_ParamLimits

0x874e,	// (0x0007c8b6) main_cset_text2_pane

0xcab2,	// (0x00080c1a) area_vitu2_query_pane_g1_ParamLimits

0x116e,	// (0x000752d6) area_vitu2_query_pane_g2_ParamLimits

0xfa89,	// (0x00083bf1) area_vitu2_query_pane_g_ParamLimits

0xcb36,	// (0x00080c9e) area_vitu2_query_pane_t7_ParamLimits

0xcb36,	// (0x00080c9e) area_vitu2_query_pane_t7

0x8efc,	// (0x0007d064) bg_button_pane_cp018_ParamLimits

0x8f0a,	// (0x0007d072) bg_button_pane_cp021_ParamLimits

0x11a7,	// (0x0007530f) bg_button_pane_cp022_ParamLimits

0x11a7,	// (0x0007530f) bg_vkb2_func_pane_cp08_ParamLimits

0x8efc,	// (0x0007d064) bg_vkb2_func_pane_cp06_ParamLimits

0x8f0a,	// (0x0007d072) bg_vkb2_func_pane_cp07_ParamLimits

0x11b8,	// (0x00075320) input_focus_pane_cp09_ParamLimits

0xe8f2,	// (0x00082a5a) cam6_autofocus_pane_ParamLimits

0xe8f2,	// (0x00082a5a) cam6_autofocus_pane

0x93f1,	// (0x0007d559) cam6_image_uncrop_pane_ParamLimits

0x93f1,	// (0x0007d559) cam6_image_uncrop_pane

0x9400,	// (0x0007d568) cam6_indi_pane_ParamLimits

0x9400,	// (0x0007d568) cam6_indi_pane

0x9416,	// (0x0007d57e) cam6_mode_pane_ParamLimits

0x9416,	// (0x0007d57e) cam6_mode_pane

0x9428,	// (0x0007d590) cam6_timer_pane_ParamLimits

0x9428,	// (0x0007d590) cam6_timer_pane

0x9434,	// (0x0007d59c) cam6_zoom_pane_ParamLimits

0x9434,	// (0x0007d59c) cam6_zoom_pane

0x9440,	// (0x0007d5a8) cam6_mode_pane_g1_ParamLimits

0x9440,	// (0x0007d5a8) cam6_mode_pane_g1

0x9450,	// (0x0007d5b8) cam6_mode_pane_g2_ParamLimits

0x9450,	// (0x0007d5b8) cam6_mode_pane_g2

0x9460,	// (0x0007d5c8) cam6_mode_pane_g3_ParamLimits

0x9460,	// (0x0007d5c8) cam6_mode_pane_g3

0x9470,	// (0x0007d5d8) cam6_mode_pane_g4_ParamLimits

0x9470,	// (0x0007d5d8) cam6_mode_pane_g4

0x0003,

0xfb71,	// (0x00083cd9) cam6_mode_pane_g_ParamLimits

0xfb71,	// (0x00083cd9) cam6_mode_pane_g

0xcd92,	// (0x00080efa) bg_tb_trans_pane_cp08_ParamLimits

0xcd92,	// (0x00080efa) bg_tb_trans_pane_cp08

0xcda0,	// (0x00080f08) cam6_battery_pane_ParamLimits

0xcda0,	// (0x00080f08) cam6_battery_pane

0xcdb6,	// (0x00080f1e) cam6_indi_pane_g1_ParamLimits

0xcdb6,	// (0x00080f1e) cam6_indi_pane_g1

0xcdc8,	// (0x00080f30) cam6_indi_pane_g2_ParamLimits

0xcdc8,	// (0x00080f30) cam6_indi_pane_g2

0xcdda,	// (0x00080f42) cam6_indi_pane_g3_ParamLimits

0xcdda,	// (0x00080f42) cam6_indi_pane_g3

0x0002,

0xfb7a,	// (0x00083ce2) cam6_indi_pane_g_ParamLimits

0xfb7a,	// (0x00083ce2) cam6_indi_pane_g

0xcdec,	// (0x00080f54) cam6_indi_pane_t1_ParamLimits

0xcdec,	// (0x00080f54) cam6_indi_pane_t1

0x9480,	// (0x0007d5e8) cam6_autofocus_pane_g1

0x9488,	// (0x0007d5f0) cam6_autofocus_pane_g2

0x9490,	// (0x0007d5f8) cam6_autofocus_pane_g3

0x9498,	// (0x0007d600) cam6_autofocus_pane_g4

0x0003,

0xfb81,	// (0x00083ce9) cam6_autofocus_pane_g

0xce12,	// (0x00080f7a) cam6_timer_pane_g1

0xce1a,	// (0x00080f82) cam6_timer_pane_t1

0xce28,	// (0x00080f90) cam6_zoom_cont_pane

0xce30,	// (0x00080f98) cam6_zoom_pane_g1

0xce38,	// (0x00080fa0) cam6_zoom_pane_g2

0x94a0,	// (0x0007d608) cam6_zoom_pane_g3

0x0002,

0xfb8a,	// (0x00083cf2) cam6_zoom_pane_g

0xbb8f,	// (0x0007fcf7) cam6_battery_pane_g1

0xbb8f,	// (0x0007fcf7) cam6_battery_pane_g2

0x0001,

0xf700,	// (0x00083868) cam6_battery_pane_g

0xce40,	// (0x00080fa8) cam6_zoom_cont_pane_g1

0xce49,	// (0x00080fb1) cam6_zoom_cont_pane_g2

0xce52,	// (0x00080fba) cam6_zoom_cont_pane_g3

0x0002,

0xfb91,	// (0x00083cf9) cam6_zoom_cont_pane_g

0x94bd,	// (0x0007d625) cam6_mode_pane_cp_ParamLimits

0x94bd,	// (0x0007d625) cam6_mode_pane_cp

0x9434,	// (0x0007d59c) cam6_zoom_pane_cp_ParamLimits

0x9434,	// (0x0007d59c) cam6_zoom_pane_cp

0x94cf,	// (0x0007d637) vid6_image_uncrop_cif_pane_ParamLimits

0x94cf,	// (0x0007d637) vid6_image_uncrop_cif_pane

0x94df,	// (0x0007d647) vid6_image_uncrop_nhd_pane_ParamLimits

0x94df,	// (0x0007d647) vid6_image_uncrop_nhd_pane

0x93f1,	// (0x0007d559) vid6_image_uncrop_vga_pane_ParamLimits

0x93f1,	// (0x0007d559) vid6_image_uncrop_vga_pane

0x94ee,	// (0x0007d656) vid6_image_uncrop_wvga_pane_ParamLimits

0x94ee,	// (0x0007d656) vid6_image_uncrop_wvga_pane

0x94fd,	// (0x0007d665) vid6_indi_pane_ParamLimits

0x94fd,	// (0x0007d665) vid6_indi_pane

0xcd92,	// (0x00080efa) bg_tb_trans_pane_cp09_ParamLimits

0xcd92,	// (0x00080efa) bg_tb_trans_pane_cp09

0xce6a,	// (0x00080fd2) cam6_battery_pane_cp_ParamLimits

0xce6a,	// (0x00080fd2) cam6_battery_pane_cp

0xce76,	// (0x00080fde) vid6_indi_pane_g1_ParamLimits

0xce76,	// (0x00080fde) vid6_indi_pane_g1

0xce88,	// (0x00080ff0) vid6_indi_pane_g2_ParamLimits

0xce88,	// (0x00080ff0) vid6_indi_pane_g2

0xce9a,	// (0x00081002) vid6_indi_pane_g3_ParamLimits

0xce9a,	// (0x00081002) vid6_indi_pane_g3

0xceaf,	// (0x00081017) vid6_indi_pane_g4_ParamLimits

0xceaf,	// (0x00081017) vid6_indi_pane_g4

0xcec4,	// (0x0008102c) vid6_indi_pane_g5_ParamLimits

0xcec4,	// (0x0008102c) vid6_indi_pane_g5

0x0004,

0xfb98,	// (0x00083d00) vid6_indi_pane_g_ParamLimits

0xfb98,	// (0x00083d00) vid6_indi_pane_g

0xcede,	// (0x00081046) vid6_indi_pane_t1_ParamLimits

0xcede,	// (0x00081046) vid6_indi_pane_t1

0xcef4,	// (0x0008105c) vid6_indi_pane_t2_ParamLimits

0xcef4,	// (0x0008105c) vid6_indi_pane_t2

0xcf1c,	// (0x00081084) vid6_indi_pane_t3_ParamLimits

0xcf1c,	// (0x00081084) vid6_indi_pane_t3

0xcf44,	// (0x000810ac) vid6_indi_pane_t4_ParamLimits

0xcf44,	// (0x000810ac) vid6_indi_pane_t4

0x0003,

0xfba3,	// (0x00083d0b) vid6_indi_pane_t_ParamLimits

0xfba3,	// (0x00083d0b) vid6_indi_pane_t

0xcf68,	// (0x000810d0) wait_bar_pane_cp08

0x9515,	// (0x0007d67d) main_cset_text2_pane_t1_ParamLimits

0x9515,	// (0x0007d67d) main_cset_text2_pane_t1

0x94a8,	// (0x0007d610) listscroll_gen_pane_cp06_t1_ParamLimits

0x94a8,	// (0x0007d610) listscroll_gen_pane_cp06_t1

0xab43,	// (0x0007ecab) main_cam6_set_pane

0xbdf6,	// (0x0007ff5e) bg_tb_trans_pane_cp06_ParamLimits

0xe7b1,	// (0x00082919) cam4_indicators_pane_g1_ParamLimits

0xe7c2,	// (0x0008292a) cam4_indicators_pane_g2_ParamLimits

0xf911,	// (0x00083a79) cam4_indicators_pane_g_ParamLimits

0xe7e0,	// (0x00082948) cam4_indicators_pane_t1_ParamLimits

0xc5ac,	// (0x00080714) bg_tb_trans_pane_cp07_ParamLimits

0x8139,	// (0x0007c2a1) vid4_indicators_pane_g1_ParamLimits

0x8146,	// (0x0007c2ae) vid4_indicators_pane_g2_ParamLimits

0x8153,	// (0x0007c2bb) vid4_indicators_pane_g3_ParamLimits

0x8160,	// (0x0007c2c8) vid4_indicators_pane_g4_ParamLimits

0xf923,	// (0x00083a8b) vid4_indicators_pane_g_ParamLimits

0x8178,	// (0x0007c2e0) vid4_indicators_pane_t1_ParamLimits

0xe86e,	// (0x000829d6) vid4_progress_pane_g1_ParamLimits

0xe87e,	// (0x000829e6) vid4_progress_pane_g2_ParamLimits

0xe88e,	// (0x000829f6) vid4_progress_pane_g3_ParamLimits

0xe7c2,	// (0x0008292a) vid4_progress_pane_g4_ParamLimits

0xfad4,	// (0x00083c3c) vid4_progress_pane_g_ParamLimits

0xe89a,	// (0x00082a02) vid4_progress_pane_t1_ParamLimits

0xe8af,	// (0x00082a17) vid4_progress_pane_t2_ParamLimits

0xe8c5,	// (0x00082a2d) vid4_progress_pane_t3_ParamLimits

0xfadf,	// (0x00083c47) vid4_progress_pane_t_ParamLimits

0xe8da,	// (0x00082a42) wait_bar_pane_cp07_ParamLimits

0x9535,	// (0x0007d69d) main_cam6_set_pane_g2_ParamLimits

0x9535,	// (0x0007d69d) main_cam6_set_pane_g2

0x9559,	// (0x0007d6c1) main_cset6_listscroll_pane_ParamLimits

0x9559,	// (0x0007d6c1) main_cset6_listscroll_pane

0x9575,	// (0x0007d6dd) main_cset6_slider_pane_ParamLimits

0x9575,	// (0x0007d6dd) main_cset6_slider_pane

0x958b,	// (0x0007d6f3) main_cset6_text2_pane_ParamLimits

0x958b,	// (0x0007d6f3) main_cset6_text2_pane

0xcf77,	// (0x000810df) main_cset6_text_pane

0xcf7f,	// (0x000810e7) main_cset_list_pane_copy1_ParamLimits

0xcf7f,	// (0x000810e7) main_cset_list_pane_copy1

0xcf8f,	// (0x000810f7) scroll_pane_cp028_copy1

0x9599,	// (0x0007d701) cset_list_set_pane_copy1

0x95ac,	// (0x0007d714) aid_position_infowindow_above_copy1

0x95b4,	// (0x0007d71c) aid_position_infowindow_below_copy1

0xe900,	// (0x00082a68) cset_list_set_pane_g1_copy1

0x100f,	// (0x00075177) cset_list_set_pane_g3_copy1_ParamLimits

0x100f,	// (0x00075177) cset_list_set_pane_g3_copy1

0x101e,	// (0x00075186) cset_list_set_pane_t1_copy1_ParamLimits

0x101e,	// (0x00075186) cset_list_set_pane_t1_copy1

0xe93a,	// (0x00082aa2) list_highlight_pane_cp021_copy1_ParamLimits

0xe93a,	// (0x00082aa2) list_highlight_pane_cp021_copy1

0xcf98,	// (0x00081100) cset6_slider_pane_ParamLimits

0xcf98,	// (0x00081100) cset6_slider_pane

0xcfc4,	// (0x0008112c) main_cset6_slider_pane_g1_ParamLimits

0xcfc4,	// (0x0008112c) main_cset6_slider_pane_g1

0x95bc,	// (0x0007d724) main_cset6_slider_pane_g2_ParamLimits

0x95bc,	// (0x0007d724) main_cset6_slider_pane_g2

0xc757,	// (0x000808bf) main_cset6_slider_pane_g3_ParamLimits

0xc757,	// (0x000808bf) main_cset6_slider_pane_g3

0x8813,	// (0x0007c97b) main_cset6_slider_pane_g4_ParamLimits

0x8813,	// (0x0007c97b) main_cset6_slider_pane_g4

0x885b,	// (0x0007c9c3) main_cset6_slider_pane_g5_ParamLimits

0x885b,	// (0x0007c9c3) main_cset6_slider_pane_g5

0xc757,	// (0x000808bf) main_cset6_slider_pane_g7_ParamLimits

0xc757,	// (0x000808bf) main_cset6_slider_pane_g7

0xc763,	// (0x000808cb) main_cset6_slider_pane_g8_ParamLimits

0xc763,	// (0x000808cb) main_cset6_slider_pane_g8

0x87fb,	// (0x0007c963) main_cset6_slider_pane_g9_ParamLimits

0x87fb,	// (0x0007c963) main_cset6_slider_pane_g9

0x8807,	// (0x0007c96f) main_cset6_slider_pane_g10_ParamLimits

0x8807,	// (0x0007c96f) main_cset6_slider_pane_g10

0x8813,	// (0x0007c97b) main_cset6_slider_pane_g11_ParamLimits

0x8813,	// (0x0007c97b) main_cset6_slider_pane_g11

0x881f,	// (0x0007c987) main_cset6_slider_pane_g12_ParamLimits

0x881f,	// (0x0007c987) main_cset6_slider_pane_g12

0x882b,	// (0x0007c993) main_cset6_slider_pane_g13_ParamLimits

0x882b,	// (0x0007c993) main_cset6_slider_pane_g13

0x8837,	// (0x0007c99f) main_cset6_slider_pane_g14_ParamLimits

0x8837,	// (0x0007c99f) main_cset6_slider_pane_g14

0x95e4,	// (0x0007d74c) main_cset6_slider_pane_g15_ParamLimits

0x95e4,	// (0x0007d74c) main_cset6_slider_pane_g15

0x885b,	// (0x0007c9c3) main_cset6_slider_pane_g16_ParamLimits

0x885b,	// (0x0007c9c3) main_cset6_slider_pane_g16

0x8867,	// (0x0007c9cf) main_cset6_slider_pane_g17_ParamLimits

0x8867,	// (0x0007c9cf) main_cset6_slider_pane_g17

0x0011,

0xfbac,	// (0x00083d14) main_cset6_slider_pane_g_ParamLimits

0xfbac,	// (0x00083d14) main_cset6_slider_pane_g

0xcfec,	// (0x00081154) main_cset6_slider_pane_t1_ParamLimits

0xcfec,	// (0x00081154) main_cset6_slider_pane_t1

0x95fc,	// (0x0007d764) main_cset6_slider_pane_t2_ParamLimits

0x95fc,	// (0x0007d764) main_cset6_slider_pane_t2

0x9627,	// (0x0007d78f) main_cset6_slider_pane_t3_ParamLimits

0x9627,	// (0x0007d78f) main_cset6_slider_pane_t3

0x9652,	// (0x0007d7ba) main_cset6_slider_pane_t4_ParamLimits

0x9652,	// (0x0007d7ba) main_cset6_slider_pane_t4

0x967d,	// (0x0007d7e5) main_cset6_slider_pane_t5_ParamLimits

0x967d,	// (0x0007d7e5) main_cset6_slider_pane_t5

0xd02d,	// (0x00081195) main_cset6_slider_pane_t7_ParamLimits

0xd02d,	// (0x00081195) main_cset6_slider_pane_t7

0x96a8,	// (0x0007d810) main_cset6_slider_pane_t8_ParamLimits

0x96a8,	// (0x0007d810) main_cset6_slider_pane_t8

0x96cc,	// (0x0007d834) main_cset6_slider_pane_t9_ParamLimits

0x96cc,	// (0x0007d834) main_cset6_slider_pane_t9

0x96f0,	// (0x0007d858) main_cset6_slider_pane_t10_ParamLimits

0x96f0,	// (0x0007d858) main_cset6_slider_pane_t10

0x9714,	// (0x0007d87c) main_cset6_slider_pane_t11_ParamLimits

0x9714,	// (0x0007d87c) main_cset6_slider_pane_t11

0xd063,	// (0x000811cb) main_cset6_slider_pane_t14_ParamLimits

0xd063,	// (0x000811cb) main_cset6_slider_pane_t14

0xd09c,	// (0x00081204) main_cset6_slider_pane_t15_ParamLimits

0xd09c,	// (0x00081204) main_cset6_slider_pane_t15

0x000b,

0xfbd1,	// (0x00083d39) main_cset6_slider_pane_t_ParamLimits

0xfbd1,	// (0x00083d39) main_cset6_slider_pane_t

0xc81b,	// (0x00080983) cset_slider_pane_g1_copy1

0xc824,	// (0x0008098c) cset_slider_pane_g2_copy1

0xc82d,	// (0x00080995) cset_slider_pane_g3_copy1

0xab43,	// (0x0007ecab) bg_popup_sub_pane_cp011_copy1

0xc8d6,	// (0x00080a3e) main_cset_text_pane_g1_copy1

0xc8de,	// (0x00080a46) main_cset_text_pane_t1_copy1

0xc8ec,	// (0x00080a54) main_cset_text_pane_t2_copy1

0xc8fa,	// (0x00080a62) main_cset_text_pane_t3_copy1

0xc908,	// (0x00080a70) main_cset_text_pane_t4_copy1

0xc916,	// (0x00080a7e) main_cset_text_pane_t5_copy1

0xc924,	// (0x00080a8c) main_cset_text_pane_t6_copy1

0xc932,	// (0x00080a9a) main_cset_text_pane_t7_copy1

0x9515,	// (0x0007d67d) main_cset_text2_pane_t1_copy1

0xab43,	// (0x0007ecab) main_ncimui_pane

0x5e9c,	// (0x0007a004) popup_query_ncimui_window_ParamLimits

0x5e9c,	// (0x0007a004) popup_query_ncimui_window

0xbe5b,	// (0x0007ffc3) field_cale_ev2_pane_g4_ParamLimits

0xbe5b,	// (0x0007ffc3) field_cale_ev2_pane_g4

0x7a5b,	// (0x0007bbc3) cell_video_dialer_keypad_pane_g2_ParamLimits

0x7a5b,	// (0x0007bbc3) cell_video_dialer_keypad_pane_g2

0x0001,

0xf8af,	// (0x00083a17) cell_video_dialer_keypad_pane_g_ParamLimits

0xf8af,	// (0x00083a17) cell_video_dialer_keypad_pane_g

0x7a73,	// (0x0007bbdb) cell_video_dialer_keypad_pane_t1

0xab43,	// (0x0007ecab) bg_popup_window_pane_cp012

0x3c6c,	// (0x00077dd4) heading_pane_cp06

0xd1c4,	// (0x0008132c) ncim_query_content_pane

0xab43,	// (0x0007ecab) bg_popup_heading_pane_cp01

0xd1cc,	// (0x00081334) ncim_heading_pane_t1

0xd1da,	// (0x00081342) ncim_indicator_popup_pane

0xd1ec,	// (0x00081354) ncim_query_button_pane

0xd200,	// (0x00081368) ncim_query_content_pane_t1

0xd212,	// (0x0008137a) ncim_query_content_pane_t2

0x0005,

0xfc10,	// (0x00083d78) ncim_query_content_pane_t

0xd24c,	// (0x000813b4) ncim_query_list_pane

0xd25e,	// (0x000813c6) ncim_query_popup_pane

0xd1da,	// (0x00081342) ncim_indicator_popup_pane_ParamLimits

0x9831,	// (0x0007d999) ncim_query_content_pane_g1_ParamLimits

0x9831,	// (0x0007d999) ncim_query_content_pane_g1

0xd200,	// (0x00081368) ncim_query_content_pane_t1_ParamLimits

0xd212,	// (0x0008137a) ncim_query_content_pane_t2_ParamLimits

0x983d,	// (0x0007d9a5) ncim_query_content_pane_t3_ParamLimits

0x983d,	// (0x0007d9a5) ncim_query_content_pane_t3

0x9865,	// (0x0007d9cd) ncim_query_content_pane_t4_ParamLimits

0x9865,	// (0x0007d9cd) ncim_query_content_pane_t4

0x988d,	// (0x0007d9f5) ncim_query_content_pane_t5_ParamLimits

0x988d,	// (0x0007d9f5) ncim_query_content_pane_t5

0xd224,	// (0x0008138c) ncim_query_content_pane_t6_ParamLimits

0xd224,	// (0x0008138c) ncim_query_content_pane_t6

0xfc10,	// (0x00083d78) ncim_query_content_pane_t_ParamLimits

0xd24c,	// (0x000813b4) ncim_query_list_pane_ParamLimits

0xd25e,	// (0x000813c6) ncim_query_popup_pane_ParamLimits

0xd272,	// (0x000813da) wait_bar_pane_cp04

0xab43,	// (0x0007ecab) input_focus_pane_cp011

0xd27a,	// (0x000813e2) ncim_query_popup_pane_t1

0xd288,	// (0x000813f0) ncim_list_query_list_pane_ParamLimits

0xd288,	// (0x000813f0) ncim_list_query_list_pane

0xab43,	// (0x0007ecab) bg_button_pane_cp027

0xd29b,	// (0x00081403) ncim_query_button_pane_g1

0xab43,	// (0x0007ecab) list_highlight_pane_cp012

0xd2a5,	// (0x0008140d) ncim_list_query_list_pane_g1

0xd2ad,	// (0x00081415) ncim_list_query_list_pane_t1

0xe7d1,	// (0x00082939) cam4_indicators_pane_g3_ParamLimits

0xe7d1,	// (0x00082939) cam4_indicators_pane_g3

0x816c,	// (0x0007c2d4) vid4_indicators_pane_g5_ParamLimits

0x816c,	// (0x0007c2d4) vid4_indicators_pane_g5

0xe7d1,	// (0x00082939) vid4_progress_pane_g5_ParamLimits

0xe7d1,	// (0x00082939) vid4_progress_pane_g5

0x974a,	// (0x0007d8b2) main_ncimui_pane_g1

0x97a0,	// (0x0007d908) ncimui_group_query_pane_ParamLimits

0x97a0,	// (0x0007d908) ncimui_group_query_pane

0x97dc,	// (0x0007d944) ncimui_list_pane_ParamLimits

0x97dc,	// (0x0007d944) ncimui_list_pane

0x97fd,	// (0x0007d965) ncimui_text_pane_ParamLimits

0x97fd,	// (0x0007d965) ncimui_text_pane

0x98b5,	// (0x0007da1d) ncimui_text_pane_t1_ParamLimits

0x98b5,	// (0x0007da1d) ncimui_text_pane_t1

0xd2bb,	// (0x00081423) ncimui_list_single_graphic_pane_ParamLimits

0xd2bb,	// (0x00081423) ncimui_list_single_graphic_pane

0x98d3,	// (0x0007da3b) ncimui_query_pane_ParamLimits

0x98d3,	// (0x0007da3b) ncimui_query_pane

0xab43,	// (0x0007ecab) list_highlight_pane_cp013

0xd2cb,	// (0x00081433) ncim_list_query_list_pane_t1_copy1

0xd2a5,	// (0x0008140d) ncim_list_single_graphic_pane_g1

0xd2d9,	// (0x00081441) ncim_query_button_pane_cp01

0xd2e5,	// (0x0008144d) ncim_query_entry_pane_ParamLimits

0xd2e5,	// (0x0008144d) ncim_query_entry_pane

0xd2f8,	// (0x00081460) ncimui_query_pane_g1

0xd304,	// (0x0008146c) ncimui_query_pane_t1_ParamLimits

0xd304,	// (0x0008146c) ncimui_query_pane_t1

0xe93a,	// (0x00082aa2) input_focus_pane_cp012

0xd31d,	// (0x00081485) ncim_query_entry_pane_t1

0x1d41,	// (0x00075ea9) main_im_pane_ParamLimits

0xe93a,	// (0x00082aa2) main_mobtv_pane_ParamLimits

0xe93a,	// (0x00082aa2) main_mobtv_pane

0x87fb,	// (0x0007c963) main_cset6_slider_pane_g18_ParamLimits

0x87fb,	// (0x0007c963) main_cset6_slider_pane_g18

0x882b,	// (0x0007c993) main_cset6_slider_pane_g19_ParamLimits

0x882b,	// (0x0007c993) main_cset6_slider_pane_g19

0xea10,	// (0x00082b78) bg_main_mobtv_pane_ParamLimits

0xea10,	// (0x00082b78) bg_main_mobtv_pane

0x98e6,	// (0x0007da4e) main_mobtv_info_pane

0x98ef,	// (0x0007da57) main_mobtv_loading_pane_ParamLimits

0x98ef,	// (0x0007da57) main_mobtv_loading_pane

0xd32f,	// (0x00081497) main_mobtv_pg_channel_list_pane

0xd339,	// (0x000814a1) main_mobtv_pg_hdr_pane

0x98fc,	// (0x0007da64) main_mobtv_programe_curr_pane_ParamLimits

0x98fc,	// (0x0007da64) main_mobtv_programe_curr_pane

0x9909,	// (0x0007da71) main_mobtv_programe_next_pane_ParamLimits

0x9909,	// (0x0007da71) main_mobtv_programe_next_pane

0xd342,	// (0x000814aa) popup_mobtv_noti_window

0xbb8f,	// (0x0007fcf7) main_tv_pg_hdr_pane_g1

0xd34a,	// (0x000814b2) main_tv_pg_hdr_pane_g2

0xd352,	// (0x000814ba) main_tv_pg_hdr_pane_g3

0xd35a,	// (0x000814c2) main_tv_pg_hdr_pane_g4

0xd362,	// (0x000814ca) main_tv_pg_hdr_pane_g5

0xd36c,	// (0x000814d4) main_tv_pg_hdr_pane_g6

0xd376,	// (0x000814de) main_tv_pg_hdr_pane_g7

0xd380,	// (0x000814e8) main_tv_pg_hdr_pane_g8

0xd38a,	// (0x000814f2) main_tv_pg_hdr_pane_g9

0xd394,	// (0x000814fc) main_tv_pg_hdr_pane_g10

0xd39e,	// (0x00081506) main_tv_pg_hdr_pane_g11

0x000a,

0xfc1d,	// (0x00083d85) main_tv_pg_hdr_pane_g

0xd3a8,	// (0x00081510) main_tv_pg_hdr_pane_t1

0xd3b6,	// (0x0008151e) main_tv_pg_hdr_pane_t2

0xd3c4,	// (0x0008152c) main_tv_pg_hdr_pane_t3

0xd3d4,	// (0x0008153c) main_tv_pg_hdr_pane_t4

0xd3e4,	// (0x0008154c) main_tv_pg_hdr_pane_t5

0x0004,

0xfc34,	// (0x00083d9c) main_tv_pg_hdr_pane_t

0xd3f4,	// (0x0008155c) single_mobtv_pg_channel_pane_ParamLimits

0xd3f4,	// (0x0008155c) single_mobtv_pg_channel_pane

0xd406,	// (0x0008156e) single_mobtv_pg_channel_table_pane

0xd40f,	// (0x00081577) single_mobtv_pg_channel_thumb_pane

0xd418,	// (0x00081580) single_tv_pg_channel_pane_g1

0xd421,	// (0x00081589) single_tv_pg_channel_pane_g2

0x0001,

0xfc3f,	// (0x00083da7) single_tv_pg_channel_pane_g

0xbdf6,	// (0x0007ff5e) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xbdf6,	// (0x0007ff5e) bg_single_mobtv_pg_channel_thumb_pane

0xd42a,	// (0x00081592) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xd42a,	// (0x00081592) single_mobtv_pg_channel_thumb_pane_g1

0xd438,	// (0x000815a0) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xd438,	// (0x000815a0) single_mobtv_pg_channel_thumb_pane_g2

0xd444,	// (0x000815ac) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xd444,	// (0x000815ac) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfc44,	// (0x00083dac) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfc44,	// (0x00083dac) single_mobtv_pg_channel_thumb_pane_g

0xd450,	// (0x000815b8) single_mobtv_pg_channel_thumb_pane_t1

0xd45e,	// (0x000815c6) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc4b,	// (0x00083db3) single_mobtv_pg_channel_thumb_pane_t

0xbb8f,	// (0x0007fcf7) bg_single_mobtv_pg_channel_table_pane_g1

0xbb8f,	// (0x0007fcf7) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf700,	// (0x00083868) bg_single_mobtv_pg_channel_table_pane_g

0xd46c,	// (0x000815d4) single_mobtv_pg_channel_table_pane_t1

0xd47a,	// (0x000815e2) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc50,	// (0x00083db8) single_mobtv_pg_channel_table_pane_t

0x991e,	// (0x0007da86) main_mobtv_info_pane_g1_ParamLimits

0x991e,	// (0x0007da86) main_mobtv_info_pane_g1

0x993c,	// (0x0007daa4) main_mobtv_info_pane_t1_ParamLimits

0x993c,	// (0x0007daa4) main_mobtv_info_pane_t1

0x99b4,	// (0x0007db1c) main_mobtv_info_pane_t2_ParamLimits

0x99b4,	// (0x0007db1c) main_mobtv_info_pane_t2

0x0002,

0xfc5a,	// (0x00083dc2) main_mobtv_info_pane_t_ParamLimits

0xfc5a,	// (0x00083dc2) main_mobtv_info_pane_t

0x9a43,	// (0x0007dbab) wait_bar_pane_cp05

0x9a55,	// (0x0007dbbd) main_mobtv_loading_pane_g1_ParamLimits

0x9a55,	// (0x0007dbbd) main_mobtv_loading_pane_g1

0x9a68,	// (0x0007dbd0) main_mobtv_loading_pane_g2_ParamLimits

0x9a68,	// (0x0007dbd0) main_mobtv_loading_pane_g2

0x9a74,	// (0x0007dbdc) main_mobtv_loading_pane_g3_ParamLimits

0x9a74,	// (0x0007dbdc) main_mobtv_loading_pane_g3

0x0002,

0xfc61,	// (0x00083dc9) main_mobtv_loading_pane_g_ParamLimits

0xfc61,	// (0x00083dc9) main_mobtv_loading_pane_g

0xd488,	// (0x000815f0) main_mobtv_loading_pane_t1_ParamLimits

0xd488,	// (0x000815f0) main_mobtv_loading_pane_t1

0xd4a0,	// (0x00081608) main_mobtv_loading_pane_t2_ParamLimits

0xd4a0,	// (0x00081608) main_mobtv_loading_pane_t2

0x0001,

0xfc68,	// (0x00083dd0) main_mobtv_loading_pane_t_ParamLimits

0xfc68,	// (0x00083dd0) main_mobtv_loading_pane_t

0x9a87,	// (0x0007dbef) wait_bar_pane_cp06_ParamLimits

0x9a87,	// (0x0007dbef) wait_bar_pane_cp06

0xd4c4,	// (0x0008162c) main_mobtv_programe_curr_pane_t1

0xd4d2,	// (0x0008163a) main_mobtv_programe_curr_pane_t2

0x0001,

0xfc6d,	// (0x00083dd5) main_mobtv_programe_curr_pane_t

0xd4e0,	// (0x00081648) main_mobtv_programe_next_pane_t1

0xd4ee,	// (0x00081656) main_mobtv_programe_next_pane_t2

0xd4fc,	// (0x00081664) main_mobtv_programe_next_pane_t3

0x0002,

0xfc72,	// (0x00083dda) main_mobtv_programe_next_pane_t

0xab43,	// (0x0007ecab) bg_popup_mobtv_noti_window_pane

0xd50a,	// (0x00081672) popup_mobtv_noti_window_g1

0xd512,	// (0x0008167a) popup_mobtv_noti_window_t1

0xd520,	// (0x00081688) popup_mobtv_noti_window_t2

0x0001,

0xfc79,	// (0x00083de1) popup_mobtv_noti_window_t

0xbb8f,	// (0x0007fcf7) bg_popup_mobtv_noti_window_pane_g1

0xab43,	// (0x0007ecab) sc_clock_pane

0xab43,	// (0x0007ecab) main_fs_bigclock_pane

0x9266,	// (0x0007d3ce) blid2_tripm_pane_t4_ParamLimits

0x9266,	// (0x0007d3ce) blid2_tripm_pane_t4

0x9a96,	// (0x0007dbfe) sc_clock_pane_g1_ParamLimits

0x9a96,	// (0x0007dbfe) sc_clock_pane_g1

0x9aa8,	// (0x0007dc10) sc_clock_pane_t1_ParamLimits

0x9aa8,	// (0x0007dc10) sc_clock_pane_t1

0x9aca,	// (0x0007dc32) sc_clock_pane_t2_ParamLimits

0x9aca,	// (0x0007dc32) sc_clock_pane_t2

0x9ae2,	// (0x0007dc4a) sc_clock_pane_t3_ParamLimits

0x9ae2,	// (0x0007dc4a) sc_clock_pane_t3

0x0004,

0xfc7e,	// (0x00083de6) sc_clock_pane_t_ParamLimits

0xfc7e,	// (0x00083de6) sc_clock_pane_t

0xa389,	// (0x0007e4f1) main_fs_bigclock_indicator_pane_ParamLimits

0xa389,	// (0x0007e4f1) main_fs_bigclock_indicator_pane

0xbdc6,	// (0x0007ff2e) main_fs_bigclock_pane_g1_ParamLimits

0xbdc6,	// (0x0007ff2e) main_fs_bigclock_pane_g1

0xa395,	// (0x0007e4fd) main_fs_bigclock_pane_t1_ParamLimits

0xa395,	// (0x0007e4fd) main_fs_bigclock_pane_t1

0xa3a7,	// (0x0007e50f) main_fs_bigclock_pane_t2_ParamLimits

0xa3a7,	// (0x0007e50f) main_fs_bigclock_pane_t2

0xa3b9,	// (0x0007e521) main_fs_bigclock_pane_t3_ParamLimits

0xa3b9,	// (0x0007e521) main_fs_bigclock_pane_t3

0x0002,

0xfe7d,	// (0x00083fe5) main_fs_bigclock_pane_t_ParamLimits

0xfe7d,	// (0x00083fe5) main_fs_bigclock_pane_t

0xe124,	// (0x0008228c) main_fs_bigclock_indicator_pane_g1

0xd1f4,	// (0x0008135c) ncim_query_content_pane_g2_ParamLimits

0xd1f4,	// (0x0008135c) ncim_query_content_pane_g2

0x0001,

0xfc0b,	// (0x00083d73) ncim_query_content_pane_g_ParamLimits

0xfc0b,	// (0x00083d73) ncim_query_content_pane_g

0x9af9,	// (0x0007dc61) sc_clock_pane_t4_ParamLimits

0x9af9,	// (0x0007dc61) sc_clock_pane_t4

0xe93a,	// (0x00082aa2) main_radioblah_pane

0xc53c,	// (0x000806a4) cell_call4_button_pane_t1_copy1_ParamLimits

0xc53c,	// (0x000806a4) cell_call4_button_pane_t1_copy1

0x9752,	// (0x0007d8ba) main_ncimui_pane_t1_ParamLimits

0x9752,	// (0x0007d8ba) main_ncimui_pane_t1

0x976c,	// (0x0007d8d4) main_ncimui_pane_t2_ParamLimits

0x976c,	// (0x0007d8d4) main_ncimui_pane_t2

0x0002,

0xfc04,	// (0x00083d6c) main_ncimui_pane_t_ParamLimits

0xfc04,	// (0x00083d6c) main_ncimui_pane_t

0xd650,	// (0x000817b8) main_radioblah_anim_pane_ParamLimits

0xd650,	// (0x000817b8) main_radioblah_anim_pane

0xd661,	// (0x000817c9) main_radioblah_info_pane_ParamLimits

0xd661,	// (0x000817c9) main_radioblah_info_pane

0xd675,	// (0x000817dd) main_radioblah_pane_t1_ParamLimits

0xd675,	// (0x000817dd) main_radioblah_pane_t1

0xd691,	// (0x000817f9) main_radioblah_pane_t2_ParamLimits

0xd691,	// (0x000817f9) main_radioblah_pane_t2

0x0003,

0xfc9f,	// (0x00083e07) main_radioblah_pane_t_ParamLimits

0xfc9f,	// (0x00083e07) main_radioblah_pane_t

0x9ba2,	// (0x0007dd0a) main_radioblah_rocker_ctrl_pane_ParamLimits

0x9ba2,	// (0x0007dd0a) main_radioblah_rocker_ctrl_pane

0xd6d9,	// (0x00081841) main_radioblah_info_pane_t1_ParamLimits

0xd6d9,	// (0x00081841) main_radioblah_info_pane_t1

0x9bfa,	// (0x0007dd62) main_radioblah_info_pane_t2_ParamLimits

0x9bfa,	// (0x0007dd62) main_radioblah_info_pane_t2

0x0003,

0xfca8,	// (0x00083e10) main_radioblah_info_pane_t_ParamLimits

0xfca8,	// (0x00083e10) main_radioblah_info_pane_t

0xbb8f,	// (0x0007fcf7) main_radioblah_rocker_ctrl_pane_g1

0x9cac,	// (0x0007de14) main_radioblah_rocker_ctrl_pane_g2

0x9cb4,	// (0x0007de1c) main_radioblah_rocker_ctrl_pane_g3

0x9cbc,	// (0x0007de24) main_radioblah_rocker_ctrl_pane_g4

0x9cc4,	// (0x0007de2c) main_radioblah_rocker_ctrl_pane_g5

0x9ccc,	// (0x0007de34) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfcb1,	// (0x00083e19) main_radioblah_rocker_ctrl_pane_g

0x9515,	// (0x0007d67d) main_cset_text2_pane_t1_copy1_ParamLimits

0xe7a1,	// (0x00082909) cam4_image_uncrop_qvga_pane

0xe7fa,	// (0x00082962) vid4_image_uncrop_qcif_pane

0xe8f2,	// (0x00082a5a) cam6_image_uncrop_qvga_pane_ParamLimits

0xe8f2,	// (0x00082a5a) cam6_image_uncrop_qvga_pane

0xce5a,	// (0x00080fc2) vid6_image_uncrop_qcif_pane_ParamLimits

0xce5a,	// (0x00080fc2) vid6_image_uncrop_qcif_pane

0xab43,	// (0x0007ecab) bg_popup_preview_window_pane_cp03

0xd1a6,	// (0x0008130e) list_cset_text2_pane

0xd1ae,	// (0x00081316) main_cset6_text2_pane_g1

0xd1b6,	// (0x0008131e) main_cset6_text2_pane_t1

0x9cd4,	// (0x0007de3c) list_cset_text2_pane_t1_ParamLimits

0x9cd4,	// (0x0007de3c) list_cset_text2_pane_t1

0xe93a,	// (0x00082aa2) main_radioblah_pane_ParamLimits

0x9a2f,	// (0x0007db97) main_mobtv_info_pane_t3_ParamLimits

0x9a2f,	// (0x0007db97) main_mobtv_info_pane_t3

0x9b90,	// (0x0007dcf8) main_radioblah_pane_g1

0x9bca,	// (0x0007dd32) main_radioblah_info_pane_g1

0x9c51,	// (0x0007ddb9) main_radioblah_info_pane_t3_ParamLimits

0x9c51,	// (0x0007ddb9) main_radioblah_info_pane_t3

0x370e,	// (0x00077876) highlight_cell_cale_month_pane_ParamLimits

0x370e,	// (0x00077876) highlight_cell_cale_month_pane

0xab43,	// (0x0007ecab) main_phob_fisheye_pane

0xbf10,	// (0x00080078) scroll_pane_cp0031_ParamLimits

0xbf10,	// (0x00080078) scroll_pane_cp0031

0xcf68,	// (0x000810d0) wait_bar_pane_cp08_ParamLimits

0x9599,	// (0x0007d701) cset_list_set_pane_copy1_ParamLimits

0xd713,	// (0x0008187b) highlight_cell_cale_month_pane_g1

0x9cf1,	// (0x0007de59) highlight_cell_cale_month_pane_t1

0xcba2,	// (0x00080d0a) list_gen_pane_cp01

0xc742,	// (0x000808aa) scroll_pane_01

0xea07,	// (0x00082b6f) list_single_double_fisheye_pane

0x11c9,	// (0x00075331) list_double_fisheye_pane_g1_ParamLimits

0x11c9,	// (0x00075331) list_double_fisheye_pane_g1

0x11d5,	// (0x0007533d) list_double_fisheye_pane_g2_ParamLimits

0x11d5,	// (0x0007533d) list_double_fisheye_pane_g2

0x9cff,	// (0x0007de67) list_double_fisheye_pane_g3_ParamLimits

0x9cff,	// (0x0007de67) list_double_fisheye_pane_g3

0x0004,

0xfcbe,	// (0x00083e26) list_double_fisheye_pane_g_ParamLimits

0xfcbe,	// (0x00083e26) list_double_fisheye_pane_g

0x1206,	// (0x0007536e) list_double_fisheye_pane_t1_ParamLimits

0x1206,	// (0x0007536e) list_double_fisheye_pane_t1

0x1221,	// (0x00075389) list_double_fisheye_pane_t2_ParamLimits

0x1221,	// (0x00075389) list_double_fisheye_pane_t2

0x0001,

0xfcc9,	// (0x00083e31) list_double_fisheye_pane_t_ParamLimits

0xfcc9,	// (0x00083e31) list_double_fisheye_pane_t

0xab43,	// (0x0007ecab) main_call5_pane

0x9b24,	// (0x0007dc8c) sc_swipe_pane_ParamLimits

0x9b24,	// (0x0007dc8c) sc_swipe_pane

0x9d1e,	// (0x0007de86) call5_image_pane_ParamLimits

0x9d1e,	// (0x0007de86) call5_image_pane

0x9d3b,	// (0x0007dea3) call5_swipe_1_pane_ParamLimits

0x9d3b,	// (0x0007dea3) call5_swipe_1_pane

0x9d4e,	// (0x0007deb6) call5_swipe_2_pane_ParamLimits

0x9d4e,	// (0x0007deb6) call5_swipe_2_pane

0x9d79,	// (0x0007dee1) popup_call5_audio_first_window_ParamLimits

0x9d79,	// (0x0007dee1) popup_call5_audio_first_window

0xbdf6,	// (0x0007ff5e) call5_swipe_1_pane_g1_ParamLimits

0xbdf6,	// (0x0007ff5e) call5_swipe_1_pane_g1

0xd71b,	// (0x00081883) call5_swipe_1_pane_g2_ParamLimits

0xd71b,	// (0x00081883) call5_swipe_1_pane_g2

0x0001,

0xfcce,	// (0x00083e36) call5_swipe_1_pane_g_ParamLimits

0xfcce,	// (0x00083e36) call5_swipe_1_pane_g

0xd727,	// (0x0008188f) call5_swipe_1_pane_t1_ParamLimits

0xd727,	// (0x0008188f) call5_swipe_1_pane_t1

0xbdf6,	// (0x0007ff5e) call5_swipe_2_pane_g1_ParamLimits

0xbdf6,	// (0x0007ff5e) call5_swipe_2_pane_g1

0xd73c,	// (0x000818a4) call5_swipe_2_pane_g2_ParamLimits

0xd73c,	// (0x000818a4) call5_swipe_2_pane_g2

0x0001,

0xfcd3,	// (0x00083e3b) call5_swipe_2_pane_g_ParamLimits

0xfcd3,	// (0x00083e3b) call5_swipe_2_pane_g

0xd748,	// (0x000818b0) call5_swipe_2_pane_t1_ParamLimits

0xd748,	// (0x000818b0) call5_swipe_2_pane_t1

0xd75d,	// (0x000818c5) sc_swipe_pane_g1_ParamLimits

0xd75d,	// (0x000818c5) sc_swipe_pane_g1

0xd76a,	// (0x000818d2) sc_swipe_pane_g2_ParamLimits

0xd76a,	// (0x000818d2) sc_swipe_pane_g2

0x0001,

0xfcd8,	// (0x00083e40) sc_swipe_pane_g_ParamLimits

0xfcd8,	// (0x00083e40) sc_swipe_pane_g

0xd776,	// (0x000818de) sc_swipe_pane_t1_ParamLimits

0xd776,	// (0x000818de) sc_swipe_pane_t1

0xab43,	// (0x0007ecab) main_cmail_launcher_pane

0x9d8a,	// (0x0007def2) aid_size_cell_cmail_l_ParamLimits

0x9d8a,	// (0x0007def2) aid_size_cell_cmail_l

0x9da4,	// (0x0007df0c) grid_cmail_l_pane_ParamLimits

0x9da4,	// (0x0007df0c) grid_cmail_l_pane

0x9dbf,	// (0x0007df27) cell_cmail_l_pane_ParamLimits

0x9dbf,	// (0x0007df27) cell_cmail_l_pane

0x9de5,	// (0x0007df4d) cell_cmail_l_pane_g1_ParamLimits

0x9de5,	// (0x0007df4d) cell_cmail_l_pane_g1

0x9df1,	// (0x0007df59) cell_cmail_l_pane_t1_ParamLimits

0x9df1,	// (0x0007df59) cell_cmail_l_pane_t1

0xd78b,	// (0x000818f3) cell_cmail_l_pane_t2_ParamLimits

0xd78b,	// (0x000818f3) cell_cmail_l_pane_t2

0x0001,

0xfcdd,	// (0x00083e45) cell_cmail_l_pane_t_ParamLimits

0xfcdd,	// (0x00083e45) cell_cmail_l_pane_t

0xe93a,	// (0x00082aa2) grid_highlight_pane_cp018_ParamLimits

0xe93a,	// (0x00082aa2) grid_highlight_pane_cp018

0x18e9,	// (0x00075a51) main2_pane_ParamLimits

0x18e9,	// (0x00075a51) main2_pane

0x1f60,	// (0x000760c8) popup_sp_fs_action_menu_bg_pane_g1

0x1f68,	// (0x000760d0) popup_sp_fs_action_menu_bg_pane_g2

0x1f70,	// (0x000760d8) popup_sp_fs_action_menu_bg_pane_g3

0x1f78,	// (0x000760e0) popup_sp_fs_action_menu_bg_pane_g4

0x1f80,	// (0x000760e8) popup_sp_fs_action_menu_bg_pane_g5

0x1f88,	// (0x000760f0) popup_sp_fs_action_menu_bg_pane_g6

0x1f90,	// (0x000760f8) popup_sp_fs_action_menu_bg_pane_g7

0x1f98,	// (0x00076100) popup_sp_fs_action_menu_bg_pane_g8

0x1fa0,	// (0x00076108) popup_sp_fs_action_menu_bg_pane_g9

0x1fa8,	// (0x00076110) popup_sp_fs_action_menu_bg_pane_g10

0x1fa8,	// (0x00076110) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf1ac,	// (0x00083314) popup_sp_fs_action_menu_bg_pane_g

0xacaf,	// (0x0007ee17) list_medium_line_x2_t3_g3_g1_ParamLimits

0xacaf,	// (0x0007ee17) list_medium_line_x2_t3_g3_g1

0xacbb,	// (0x0007ee23) list_medium_line_x2_t3_g3_g2_ParamLimits

0xacbb,	// (0x0007ee23) list_medium_line_x2_t3_g3_g2

0xacc7,	// (0x0007ee2f) list_medium_line_x2_t3_g3_g3_ParamLimits

0xacc7,	// (0x0007ee2f) list_medium_line_x2_t3_g3_g3

0x0002,

0xf25c,	// (0x000833c4) list_medium_line_x2_t3_g3_g_ParamLimits

0xf25c,	// (0x000833c4) list_medium_line_x2_t3_g3_g

0xacd3,	// (0x0007ee3b) list_medium_line_x2_t3_g3_t1_ParamLimits

0xacd3,	// (0x0007ee3b) list_medium_line_x2_t3_g3_t1

0x0d87,	// (0x00074eef) list_medium_line_x2_t3_g3_t2_ParamLimits

0x0d87,	// (0x00074eef) list_medium_line_x2_t3_g3_t2

0xace8,	// (0x0007ee50) list_medium_line_x2_t3_g3_t3_ParamLimits

0xace8,	// (0x0007ee50) list_medium_line_x2_t3_g3_t3

0x0002,

0xf263,	// (0x000833cb) list_medium_line_x2_t3_g3_t_ParamLimits

0xf263,	// (0x000833cb) list_medium_line_x2_t3_g3_t

0xacaf,	// (0x0007ee17) list_medium_line_x2_t3_g2_g1_ParamLimits

0xacaf,	// (0x0007ee17) list_medium_line_x2_t3_g2_g1

0xacc7,	// (0x0007ee2f) list_medium_line_x2_t3_g2_g2_ParamLimits

0xacc7,	// (0x0007ee2f) list_medium_line_x2_t3_g2_g2

0x0001,

0xf26a,	// (0x000833d2) list_medium_line_x2_t3_g2_g_ParamLimits

0xf26a,	// (0x000833d2) list_medium_line_x2_t3_g2_g

0xacfd,	// (0x0007ee65) list_medium_line_x2_t3_g2_t1_ParamLimits

0xacfd,	// (0x0007ee65) list_medium_line_x2_t3_g2_t1

0xad13,	// (0x0007ee7b) list_medium_line_x2_t3_g2_t2_ParamLimits

0xad13,	// (0x0007ee7b) list_medium_line_x2_t3_g2_t2

0xad25,	// (0x0007ee8d) list_medium_line_x2_t3_g2_t3_ParamLimits

0xad25,	// (0x0007ee8d) list_medium_line_x2_t3_g2_t3

0x0002,

0xf26f,	// (0x000833d7) list_medium_line_x2_t3_g2_t_ParamLimits

0xf26f,	// (0x000833d7) list_medium_line_x2_t3_g2_t

0xacaf,	// (0x0007ee17) list_medium_line_x2_t4_g4_g1_ParamLimits

0xacaf,	// (0x0007ee17) list_medium_line_x2_t4_g4_g1

0xad43,	// (0x0007eeab) list_medium_line_x2_t4_g4_g2_ParamLimits

0xad43,	// (0x0007eeab) list_medium_line_x2_t4_g4_g2

0xacbb,	// (0x0007ee23) list_medium_line_x2_t4_g4_g3_ParamLimits

0xacbb,	// (0x0007ee23) list_medium_line_x2_t4_g4_g3

0xad4f,	// (0x0007eeb7) list_medium_line_x2_t4_g4_g4_ParamLimits

0xad4f,	// (0x0007eeb7) list_medium_line_x2_t4_g4_g4

0x0003,

0xf276,	// (0x000833de) list_medium_line_x2_t4_g4_g_ParamLimits

0xf276,	// (0x000833de) list_medium_line_x2_t4_g4_g

0x0d9b,	// (0x00074f03) list_medium_line_x2_t4_g4_t1_ParamLimits

0x0d9b,	// (0x00074f03) list_medium_line_x2_t4_g4_t1

0x0db2,	// (0x00074f1a) list_medium_line_x2_t4_g4_t2_ParamLimits

0x0db2,	// (0x00074f1a) list_medium_line_x2_t4_g4_t2

0x0dc7,	// (0x00074f2f) list_medium_line_x2_t4_g4_t3_ParamLimits

0x0dc7,	// (0x00074f2f) list_medium_line_x2_t4_g4_t3

0xad5b,	// (0x0007eec3) list_medium_line_x2_t4_g4_t4_ParamLimits

0xad5b,	// (0x0007eec3) list_medium_line_x2_t4_g4_t4

0x0003,

0xf27f,	// (0x000833e7) list_medium_line_x2_t4_g4_t_ParamLimits

0xf27f,	// (0x000833e7) list_medium_line_x2_t4_g4_t

0xacaf,	// (0x0007ee17) list_medium_line_x2_t2_g4_g1_ParamLimits

0xacaf,	// (0x0007ee17) list_medium_line_x2_t2_g4_g1

0xad43,	// (0x0007eeab) list_medium_line_x2_t2_g4_g2_ParamLimits

0xad43,	// (0x0007eeab) list_medium_line_x2_t2_g4_g2

0xacbb,	// (0x0007ee23) list_medium_line_x2_t2_g4_g3_ParamLimits

0xacbb,	// (0x0007ee23) list_medium_line_x2_t2_g4_g3

0xacc7,	// (0x0007ee2f) list_medium_line_x2_t2_g4_g4_ParamLimits

0xacc7,	// (0x0007ee2f) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2e6,	// (0x0008344e) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2e6,	// (0x0008344e) list_medium_line_x2_t2_g4_g

0xad6d,	// (0x0007eed5) list_medium_line_x2_t2_g4_t1_ParamLimits

0xad6d,	// (0x0007eed5) list_medium_line_x2_t2_g4_t1

0xace8,	// (0x0007ee50) list_medium_line_x2_t2_g4_t2_ParamLimits

0xace8,	// (0x0007ee50) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2ef,	// (0x00083457) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2ef,	// (0x00083457) list_medium_line_x2_t2_g4_t

0xacaf,	// (0x0007ee17) list_medium_line_x2_t2_g3_g1_ParamLimits

0xacaf,	// (0x0007ee17) list_medium_line_x2_t2_g3_g1

0xacbb,	// (0x0007ee23) list_medium_line_x2_t2_g3_g2_ParamLimits

0xacbb,	// (0x0007ee23) list_medium_line_x2_t2_g3_g2

0xacc7,	// (0x0007ee2f) list_medium_line_x2_t2_g3_g3_ParamLimits

0xacc7,	// (0x0007ee2f) list_medium_line_x2_t2_g3_g3

0x0002,

0xf25c,	// (0x000833c4) list_medium_line_x2_t2_g3_g_ParamLimits

0xf25c,	// (0x000833c4) list_medium_line_x2_t2_g3_g

0xad82,	// (0x0007eeea) list_medium_line_x2_t2_g3_t1_ParamLimits

0xad82,	// (0x0007eeea) list_medium_line_x2_t2_g3_t1

0xace8,	// (0x0007ee50) list_medium_line_x2_t2_g3_t2_ParamLimits

0xace8,	// (0x0007ee50) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2f4,	// (0x0008345c) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2f4,	// (0x0008345c) list_medium_line_x2_t2_g3_t

0x3a95,	// (0x00077bfd) main_sp_fs_list_pane_ParamLimits

0x3a95,	// (0x00077bfd) main_sp_fs_list_pane

0x3aa1,	// (0x00077c09) sp_fs_scroll_pane_ParamLimits

0x3aa1,	// (0x00077c09) sp_fs_scroll_pane

0x0dd9,	// (0x00074f41) list_medium_line_x2_t3_t1

0x0de9,	// (0x00074f51) list_medium_line_x2_t3_t2

0xadc5,	// (0x0007ef2d) list_medium_line_x2_t3_t3

0x0002,

0xf33f,	// (0x000834a7) list_medium_line_x2_t3_t

0x0df7,	// (0x00074f5f) list_medium_line_x3_t4_t1

0x0e07,	// (0x00074f6f) list_medium_line_x3_t4_t2

0xadd3,	// (0x0007ef3b) list_medium_line_x3_t4_t3

0xadc5,	// (0x0007ef2d) list_medium_line_x3_t4_t4

0x0003,

0xf346,	// (0x000834ae) list_medium_line_x3_t4_t

0x0e15,	// (0x00074f7d) list_medium_line_x4_t5_t1

0x0e25,	// (0x00074f8d) list_medium_line_x4_t5_t2

0xadd3,	// (0x0007ef3b) list_medium_line_x4_t5_t3

0xade1,	// (0x0007ef49) list_medium_line_x4_t5_t4

0xadc5,	// (0x0007ef2d) list_medium_line_x4_t5_t5

0x0004,

0xf34f,	// (0x000834b7) list_medium_line_x4_t5_t

0xacaf,	// (0x0007ee17) list_medium_line_t4_g4_g1_ParamLimits

0xacaf,	// (0x0007ee17) list_medium_line_t4_g4_g1

0xad4f,	// (0x0007eeb7) list_medium_line_t4_g4_g2_ParamLimits

0xad4f,	// (0x0007eeb7) list_medium_line_t4_g4_g2

0xadef,	// (0x0007ef57) list_medium_line_t4_g4_g3_ParamLimits

0xadef,	// (0x0007ef57) list_medium_line_t4_g4_g3

0xacc7,	// (0x0007ee2f) list_medium_line_t4_g4_g4_ParamLimits

0xacc7,	// (0x0007ee2f) list_medium_line_t4_g4_g4

0x0003,

0xf35a,	// (0x000834c2) list_medium_line_t4_g4_g_ParamLimits

0xf35a,	// (0x000834c2) list_medium_line_t4_g4_g

0xadfb,	// (0x0007ef63) list_medium_line_t4_g4_t1_ParamLimits

0xadfb,	// (0x0007ef63) list_medium_line_t4_g4_t1

0xae10,	// (0x0007ef78) list_medium_line_t4_g4_t2_ParamLimits

0xae10,	// (0x0007ef78) list_medium_line_t4_g4_t2

0xae26,	// (0x0007ef8e) list_medium_line_t4_g4_t3_ParamLimits

0xae26,	// (0x0007ef8e) list_medium_line_t4_g4_t3

0xace8,	// (0x0007ee50) list_medium_line_t4_g4_t4_ParamLimits

0xace8,	// (0x0007ee50) list_medium_line_t4_g4_t4

0x0003,

0xf363,	// (0x000834cb) list_medium_line_t4_g4_t_ParamLimits

0xf363,	// (0x000834cb) list_medium_line_t4_g4_t

0x3dd8,	// (0x00077f40) chi_dic_find_pane_g1

0x5c7a,	// (0x00079de2) main_tport_pane

0xc867,	// (0x000809cf) list_medium_line_plain_t1

0xc87d,	// (0x000809e5) list_medium_line_t2_g2_g1_ParamLimits

0xc87d,	// (0x000809e5) list_medium_line_t2_g2_g1

0xc889,	// (0x000809f1) list_medium_line_t2_g2_g2_ParamLimits

0xc889,	// (0x000809f1) list_medium_line_t2_g2_g2

0x0001,

0xfa1a,	// (0x00083b82) list_medium_line_t2_g2_g_ParamLimits

0xfa1a,	// (0x00083b82) list_medium_line_t2_g2_g

0x1033,	// (0x0007519b) list_medium_line_t2_g2_t1_ParamLimits

0x1033,	// (0x0007519b) list_medium_line_t2_g2_t1

0x104d,	// (0x000751b5) list_medium_line_t2_g2_t2_ParamLimits

0x104d,	// (0x000751b5) list_medium_line_t2_g2_t2

0x0001,

0xfa1f,	// (0x00083b87) list_medium_line_t2_g2_t_ParamLimits

0xfa1f,	// (0x00083b87) list_medium_line_t2_g2_t

0xcbab,	// (0x00080d13) aid_sp_fs_list_icon_a_sm

0xe8ea,	// (0x00082a52) aid_sp_fs_list_icon_d

0xcbb3,	// (0x00080d1b) aid_sp_fs_text_primary

0xcbbc,	// (0x00080d24) aid_sp_fs_text_secondary

0xcbc5,	// (0x00080d2d) list_medium_line

0xcbc5,	// (0x00080d2d) list_medium_line_g2

0xcbc5,	// (0x00080d2d) list_medium_line_g3

0xcbc5,	// (0x00080d2d) list_medium_line_plain

0xcbc5,	// (0x00080d2d) list_medium_line_plain_t2

0xcbc5,	// (0x00080d2d) list_medium_line_plain_t3

0xcbc5,	// (0x00080d2d) list_medium_line_right_icon

0xcbc5,	// (0x00080d2d) list_medium_line_right_iconx2

0xcbc5,	// (0x00080d2d) list_medium_line_t2

0xcbc5,	// (0x00080d2d) list_medium_line_t2_g2

0xcbc5,	// (0x00080d2d) list_medium_line_t2_g3

0xcbc5,	// (0x00080d2d) list_medium_line_t2_right_icon

0xcbc5,	// (0x00080d2d) list_medium_line_t2_right_iconx2

0xcbc5,	// (0x00080d2d) list_medium_line_t3

0xcbc5,	// (0x00080d2d) list_medium_line_t3_g2

0xcbc5,	// (0x00080d2d) list_medium_line_t3_g3

0xcbc5,	// (0x00080d2d) list_medium_line_t3_right_iconx2

0xcbce,	// (0x00080d36) list_medium_line_t4_g4

0xea07,	// (0x00082b6f) list_medium_line_x2

0xea07,	// (0x00082b6f) list_medium_line_x2_t2_g2

0xea07,	// (0x00082b6f) list_medium_line_x2_t2_g3

0xea07,	// (0x00082b6f) list_medium_line_x2_t2_g4

0xea07,	// (0x00082b6f) list_medium_line_x2_t3

0xea07,	// (0x00082b6f) list_medium_line_x2_t3_g2

0xea07,	// (0x00082b6f) list_medium_line_x2_t3_g3

0xea07,	// (0x00082b6f) list_medium_line_x2_t3_g4

0xea07,	// (0x00082b6f) list_medium_line_x2_t4_g2

0xea07,	// (0x00082b6f) list_medium_line_x2_t4_g4

0xcbd7,	// (0x00080d3f) list_medium_line_x3

0xcbd7,	// (0x00080d3f) list_medium_line_x3_t4

0xcbd7,	// (0x00080d3f) list_medium_line_x3_t4_g4

0xcbce,	// (0x00080d36) list_medium_line_x4_t4

0xcbce,	// (0x00080d36) list_medium_line_x4_t4_g7

0xcbce,	// (0x00080d36) list_medium_line_x4_t5

0xcbe0,	// (0x00080d48) list_single_fs_dyc_pane_ParamLimits

0xcbe0,	// (0x00080d48) list_single_fs_dyc_pane

0xacaf,	// (0x0007ee17) list_medium_line_x4_t4_g7_g1_ParamLimits

0xacaf,	// (0x0007ee17) list_medium_line_x4_t4_g7_g1

0xd0d5,	// (0x0008123d) list_medium_line_x4_t4_g7_g2_ParamLimits

0xd0d5,	// (0x0008123d) list_medium_line_x4_t4_g7_g2

0xd0e1,	// (0x00081249) list_medium_line_x4_t4_g7_g3_ParamLimits

0xd0e1,	// (0x00081249) list_medium_line_x4_t4_g7_g3

0xd0f0,	// (0x00081258) list_medium_line_x4_t4_g7_g4_ParamLimits

0xd0f0,	// (0x00081258) list_medium_line_x4_t4_g7_g4

0xd0fc,	// (0x00081264) list_medium_line_x4_t4_g7_g5_ParamLimits

0xd0fc,	// (0x00081264) list_medium_line_x4_t4_g7_g5

0xd10b,	// (0x00081273) list_medium_line_x4_t4_g7_g6_ParamLimits

0xd10b,	// (0x00081273) list_medium_line_x4_t4_g7_g6

0xd11a,	// (0x00081282) list_medium_line_x4_t4_g7_g7_ParamLimits

0xd11a,	// (0x00081282) list_medium_line_x4_t4_g7_g7

0x0006,

0xfbea,	// (0x00083d52) list_medium_line_x4_t4_g7_g_ParamLimits

0xfbea,	// (0x00083d52) list_medium_line_x4_t4_g7_g

0xd126,	// (0x0008128e) list_medium_line_x4_t4_g7_t1_ParamLimits

0xd126,	// (0x0008128e) list_medium_line_x4_t4_g7_t1

0xd13b,	// (0x000812a3) list_medium_line_x4_t4_g7_t2_ParamLimits

0xd13b,	// (0x000812a3) list_medium_line_x4_t4_g7_t2

0xd150,	// (0x000812b8) list_medium_line_x4_t4_g7_t3_ParamLimits

0xd150,	// (0x000812b8) list_medium_line_x4_t4_g7_t3

0xd165,	// (0x000812cd) list_medium_line_x4_t4_g7_t4_ParamLimits

0xd165,	// (0x000812cd) list_medium_line_x4_t4_g7_t4

0xd177,	// (0x000812df) list_medium_line_x4_t4_g7_t5_ParamLimits

0xd177,	// (0x000812df) list_medium_line_x4_t4_g7_t5

0x0004,

0xfbf9,	// (0x00083d61) list_medium_line_x4_t4_g7_t_ParamLimits

0xfbf9,	// (0x00083d61) list_medium_line_x4_t4_g7_t

0xd189,	// (0x000812f1) list_single_dyc_row_pane_ParamLimits

0xd189,	// (0x000812f1) list_single_dyc_row_pane

0x9d0b,	// (0x0007de73) call5_gesture_pane_ParamLimits

0x9d0b,	// (0x0007de73) call5_gesture_pane

0x9d61,	// (0x0007dec9) call5_windows_pane_ParamLimits

0x9d61,	// (0x0007dec9) call5_windows_pane

0x9e07,	// (0x0007df6f) call5_swipe_1_pane_cp_ParamLimits

0x9e07,	// (0x0007df6f) call5_swipe_1_pane_cp

0x9e13,	// (0x0007df7b) call5_swipe_2_pane_cp_ParamLimits

0x9e13,	// (0x0007df7b) call5_swipe_2_pane_cp

0x4244,	// (0x000783ac) call5_image_pane_cp

0x9e1f,	// (0x0007df87) popup_call5_audio_first_window_cp_ParamLimits

0x9e1f,	// (0x0007df87) popup_call5_audio_first_window_cp

0xd75d,	// (0x000818c5) call5_swipe_1_pane_g1_cp_ParamLimits

0xd75d,	// (0x000818c5) call5_swipe_1_pane_g1_cp

0xd79d,	// (0x00081905) call5_swipe_1_pane_g2_cp

0xd776,	// (0x000818de) call5_swipe_1_pane_t1_cp_ParamLimits

0xd776,	// (0x000818de) call5_swipe_1_pane_t1_cp

0xd75d,	// (0x000818c5) call5_swipe_2_pane_g1_cp_ParamLimits

0xd75d,	// (0x000818c5) call5_swipe_2_pane_g1_cp

0xd7a5,	// (0x0008190d) call5_swipe_2_pane_g2_cp

0xd7ad,	// (0x00081915) call5_swipe_2_pane_t1_cp_ParamLimits

0xd7ad,	// (0x00081915) call5_swipe_2_pane_t1_cp

0xe93a,	// (0x00082aa2) main_sp_fs_email_pane

0xd7c2,	// (0x0008192a) main_sp_fs_listscroll_pane_te

0xd7cb,	// (0x00081933) popup_sp_fs_action_menu_pane_ParamLimits

0xd7cb,	// (0x00081933) popup_sp_fs_action_menu_pane

0xbb8f,	// (0x0007fcf7) bg_sp_fs_ctrlbar_pane_g1

0xd80d,	// (0x00081975) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xd816,	// (0x0008197e) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xd81f,	// (0x00081987) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xbb8f,	// (0x0007fcf7) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfce2,	// (0x00083e4a) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xb972,	// (0x0007fada) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xb972,	// (0x0007fada) bg_sp_fs_ctrlbar_ddmenu_pane

0xd828,	// (0x00081990) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xd828,	// (0x00081990) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xd834,	// (0x0008199c) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xd834,	// (0x0008199c) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfceb,	// (0x00083e53) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfceb,	// (0x00083e53) main_sp_fs_ctrlbar_ddmenu_pane_g

0xd840,	// (0x000819a8) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xd840,	// (0x000819a8) main_sp_fs_ctrlbar_ddmenu_pane_t1

0xd85a,	// (0x000819c2) list_medium_line_t2_right_icon_g1

0x1243,	// (0x000753ab) list_medium_line_t2_right_icon_t1

0x1253,	// (0x000753bb) list_medium_line_t2_right_icon_t2

0x0001,

0xfcf0,	// (0x00083e58) list_medium_line_t2_right_icon_t

0xb687,	// (0x0007f7ef) bg_sp_fs_ctrlbar_pane_ParamLimits

0xb687,	// (0x0007f7ef) bg_sp_fs_ctrlbar_pane

0x9e73,	// (0x0007dfdb) main_sp_fs_ctrlbar_button_pane_cp01

0x9e7d,	// (0x0007dfe5) main_sp_fs_ctrlbar_ddmenu_pane

0xd89a,	// (0x00081a02) main_sp_fs_ctrlbar_pane_g1

0xd8a6,	// (0x00081a0e) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfcf5,	// (0x00083e5d) main_sp_fs_ctrlbar_pane_g

0xd8b2,	// (0x00081a1a) main_sp_fs_ctrlbar_pane_t1

0x1265,	// (0x000753cd) main_sp_fs_ctrlbar_pane

0x1289,	// (0x000753f1) main_sp_fs_listscroll_pane_te_cp01

0x12a9,	// (0x00075411) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x12a9,	// (0x00075411) popup_sp_fs_action_menu_pane_cp01

0xe93a,	// (0x00082aa2) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0xe93a,	// (0x00082aa2) bg_sp_fs_highlight_list_pane_cp01

0xd8c7,	// (0x00081a2f) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0xd8c7,	// (0x00081a2f) sp_fs_action_menu_list_gene_pane_g1

0xd8d6,	// (0x00081a3e) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xd8d6,	// (0x00081a3e) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfcfa,	// (0x00083e62) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfcfa,	// (0x00083e62) sp_fs_action_menu_list_gene_pane_g

0xd8e3,	// (0x00081a4b) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0xd8e3,	// (0x00081a4b) sp_fs_action_menu_list_gene_pane_t1

0xd8fb,	// (0x00081a63) sp_fs_action_menu_list_gene_pane_ParamLimits

0xd8fb,	// (0x00081a63) sp_fs_action_menu_list_gene_pane

0xd91a,	// (0x00081a82) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xd91a,	// (0x00081a82) popup_sp_fs_action_menu_bg_pane

0xd928,	// (0x00081a90) sp_fs_action_menu_list_pane_ParamLimits

0xd928,	// (0x00081a90) sp_fs_action_menu_list_pane

0xd948,	// (0x00081ab0) sp_fs_scroll_pane_cp01_ParamLimits

0xd948,	// (0x00081ab0) sp_fs_scroll_pane_cp01

0x12c3,	// (0x0007542b) list_medium_line_plain_t2_t1

0x12d3,	// (0x0007543b) list_medium_line_plain_t2_t2

0x0001,

0xfcff,	// (0x00083e67) list_medium_line_plain_t2_t

0x12e3,	// (0x0007544b) list_medium_line_plain_t3_t1

0x12f3,	// (0x0007545b) list_medium_line_plain_t3_t2

0x1301,	// (0x00075469) list_medium_line_plain_t3_t3

0x0002,

0xfd04,	// (0x00083e6c) list_medium_line_plain_t3_t

0xacaf,	// (0x0007ee17) list_medium_line_x2_t2_g2_g1_ParamLimits

0xacaf,	// (0x0007ee17) list_medium_line_x2_t2_g2_g1

0xacc7,	// (0x0007ee2f) list_medium_line_x2_t2_g2_g2_ParamLimits

0xacc7,	// (0x0007ee2f) list_medium_line_x2_t2_g2_g2

0x0001,

0xf26a,	// (0x000833d2) list_medium_line_x2_t2_g2_g_ParamLimits

0xf26a,	// (0x000833d2) list_medium_line_x2_t2_g2_g

0xadfb,	// (0x0007ef63) list_medium_line_x2_t2_g2_t1_ParamLimits

0xadfb,	// (0x0007ef63) list_medium_line_x2_t2_g2_t1

0xace8,	// (0x0007ee50) list_medium_line_x2_t2_g2_t2_ParamLimits

0xace8,	// (0x0007ee50) list_medium_line_x2_t2_g2_t2

0x0001,

0xfd0b,	// (0x00083e73) list_medium_line_x2_t2_g2_t_ParamLimits

0xfd0b,	// (0x00083e73) list_medium_line_x2_t2_g2_t

0xacaf,	// (0x0007ee17) list_medium_line_x2_t4_g2_g1_ParamLimits

0xacaf,	// (0x0007ee17) list_medium_line_x2_t4_g2_g1

0xd96e,	// (0x00081ad6) list_medium_line_x2_t4_g2_g2_ParamLimits

0xd96e,	// (0x00081ad6) list_medium_line_x2_t4_g2_g2

0x0001,

0xfd10,	// (0x00083e78) list_medium_line_x2_t4_g2_g_ParamLimits

0xfd10,	// (0x00083e78) list_medium_line_x2_t4_g2_g

0x130f,	// (0x00075477) list_medium_line_x2_t4_g2_t1_ParamLimits

0x130f,	// (0x00075477) list_medium_line_x2_t4_g2_t1

0x1326,	// (0x0007548e) list_medium_line_x2_t4_g2_t2_ParamLimits

0x1326,	// (0x0007548e) list_medium_line_x2_t4_g2_t2

0x133b,	// (0x000754a3) list_medium_line_x2_t4_g2_t3_ParamLimits

0x133b,	// (0x000754a3) list_medium_line_x2_t4_g2_t3

0xace8,	// (0x0007ee50) list_medium_line_x2_t4_g2_t4_ParamLimits

0xace8,	// (0x0007ee50) list_medium_line_x2_t4_g2_t4

0x0003,

0xfd15,	// (0x00083e7d) list_medium_line_x2_t4_g2_t_ParamLimits

0xfd15,	// (0x00083e7d) list_medium_line_x2_t4_g2_t

0xd980,	// (0x00081ae8) list_medium_line_t3_right_iconx2_g1

0xd85a,	// (0x000819c2) list_medium_line_t3_right_iconx2_g2

0x134d,	// (0x000754b5) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfd1e,	// (0x00083e86) list_medium_line_t3_right_iconx2_g

0x1357,	// (0x000754bf) list_medium_line_t3_right_iconx2_t1

0x1367,	// (0x000754cf) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfd25,	// (0x00083e8d) list_medium_line_t3_right_iconx2_t

0xacaf,	// (0x0007ee17) list_medium_line_x3_t4_g4_g1_ParamLimits

0xacaf,	// (0x0007ee17) list_medium_line_x3_t4_g4_g1

0xacbb,	// (0x0007ee23) list_medium_line_x3_t4_g4_g2_ParamLimits

0xacbb,	// (0x0007ee23) list_medium_line_x3_t4_g4_g2

0xad4f,	// (0x0007eeb7) list_medium_line_x3_t4_g4_g3_ParamLimits

0xad4f,	// (0x0007eeb7) list_medium_line_x3_t4_g4_g3

0xd988,	// (0x00081af0) list_medium_line_x3_t4_g4_g4_ParamLimits

0xd988,	// (0x00081af0) list_medium_line_x3_t4_g4_g4

0x0003,

0xfd2a,	// (0x00083e92) list_medium_line_x3_t4_g4_g_ParamLimits

0xfd2a,	// (0x00083e92) list_medium_line_x3_t4_g4_g

0x1375,	// (0x000754dd) list_medium_line_x3_t4_g4_t1_ParamLimits

0x1375,	// (0x000754dd) list_medium_line_x3_t4_g4_t1

0x138c,	// (0x000754f4) list_medium_line_x3_t4_g4_t2_ParamLimits

0x138c,	// (0x000754f4) list_medium_line_x3_t4_g4_t2

0xd994,	// (0x00081afc) list_medium_line_x3_t4_g4_t3_ParamLimits

0xd994,	// (0x00081afc) list_medium_line_x3_t4_g4_t3

0xd9a9,	// (0x00081b11) list_medium_line_x3_t4_g4_t4_ParamLimits

0xd9a9,	// (0x00081b11) list_medium_line_x3_t4_g4_t4

0x0003,

0xfd33,	// (0x00083e9b) list_medium_line_x3_t4_g4_t_ParamLimits

0xfd33,	// (0x00083e9b) list_medium_line_x3_t4_g4_t

0x13a7,	// (0x0007550f) list_single_dyc_row_text_pane_t1_ParamLimits

0x13a7,	// (0x0007550f) list_single_dyc_row_text_pane_t1

0x13f0,	// (0x00075558) list_single_dyc_row_text_pane_t2_ParamLimits

0x13f0,	// (0x00075558) list_single_dyc_row_text_pane_t2

0xd9c6,	// (0x00081b2e) list_single_dyc_row_text_pane_t3_ParamLimits

0xd9c6,	// (0x00081b2e) list_single_dyc_row_text_pane_t3

0x0002,

0xfd3c,	// (0x00083ea4) list_single_dyc_row_text_pane_t_ParamLimits

0xfd3c,	// (0x00083ea4) list_single_dyc_row_text_pane_t

0xd9d8,	// (0x00081b40) list_single_dyc_row_pane_g1_ParamLimits

0xd9d8,	// (0x00081b40) list_single_dyc_row_pane_g1

0xd9e4,	// (0x00081b4c) list_single_dyc_row_pane_g2_ParamLimits

0xd9e4,	// (0x00081b4c) list_single_dyc_row_pane_g2

0xd9f0,	// (0x00081b58) list_single_dyc_row_pane_g3_ParamLimits

0xd9f0,	// (0x00081b58) list_single_dyc_row_pane_g3

0xd9fc,	// (0x00081b64) list_single_dyc_row_pane_g4_ParamLimits

0xd9fc,	// (0x00081b64) list_single_dyc_row_pane_g4

0x0003,

0xfd43,	// (0x00083eab) list_single_dyc_row_pane_g_ParamLimits

0xfd43,	// (0x00083eab) list_single_dyc_row_pane_g

0xda08,	// (0x00081b70) list_single_dyc_row_text_pane_ParamLimits

0xda08,	// (0x00081b70) list_single_dyc_row_text_pane

0xab43,	// (0x0007ecab) bg_sp_fs_scroll_pane

0xda27,	// (0x00081b8f) thumb_sp_fs_scroll_pane

0xc87d,	// (0x000809e5) list_medium_line_g1_ParamLimits

0xc87d,	// (0x000809e5) list_medium_line_g1

0xda30,	// (0x00081b98) list_medium_line_t1_ParamLimits

0xda30,	// (0x00081b98) list_medium_line_t1

0xacaf,	// (0x0007ee17) list_medium_line_x2_g1_ParamLimits

0xacaf,	// (0x0007ee17) list_medium_line_x2_g1

0xacbb,	// (0x0007ee23) list_medium_line_x2_g2_ParamLimits

0xacbb,	// (0x0007ee23) list_medium_line_x2_g2

0x0001,

0xfd4c,	// (0x00083eb4) list_medium_line_x2_g_ParamLimits

0xfd4c,	// (0x00083eb4) list_medium_line_x2_g

0xda45,	// (0x00081bad) list_medium_line_x2_t1_ParamLimits

0xda45,	// (0x00081bad) list_medium_line_x2_t1

0xacaf,	// (0x0007ee17) list_medium_line_x3_g1_ParamLimits

0xacaf,	// (0x0007ee17) list_medium_line_x3_g1

0xacbb,	// (0x0007ee23) list_medium_line_x3_g2_ParamLimits

0xacbb,	// (0x0007ee23) list_medium_line_x3_g2

0x0001,

0xfd4c,	// (0x00083eb4) list_medium_line_x3_g_ParamLimits

0xfd4c,	// (0x00083eb4) list_medium_line_x3_g

0xda45,	// (0x00081bad) list_medium_line_x3_t1_ParamLimits

0xda45,	// (0x00081bad) list_medium_line_x3_t1

0xda5b,	// (0x00081bc3) thumb_sp_fs_scroll_pane_g1

0xda64,	// (0x00081bcc) thumb_sp_fs_scroll_pane_g2

0xda6d,	// (0x00081bd5) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfd51,	// (0x00083eb9) thumb_sp_fs_scroll_pane_g

0xda5b,	// (0x00081bc3) bg_sp_fs_scroll_pane_g1

0xda64,	// (0x00081bcc) bg_sp_fs_scroll_pane_g2

0xda6d,	// (0x00081bd5) bg_sp_fs_scroll_pane_g3

0x0002,

0xfd51,	// (0x00083eb9) bg_sp_fs_scroll_pane_g

0xacaf,	// (0x0007ee17) list_medium_line_x2_t3_g4_g1_ParamLimits

0xacaf,	// (0x0007ee17) list_medium_line_x2_t3_g4_g1

0xad43,	// (0x0007eeab) list_medium_line_x2_t3_g4_g2_ParamLimits

0xad43,	// (0x0007eeab) list_medium_line_x2_t3_g4_g2

0xacbb,	// (0x0007ee23) list_medium_line_x2_t3_g4_g3_ParamLimits

0xacbb,	// (0x0007ee23) list_medium_line_x2_t3_g4_g3

0xacc7,	// (0x0007ee2f) list_medium_line_x2_t3_g4_g4_ParamLimits

0xacc7,	// (0x0007ee2f) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2e6,	// (0x0008344e) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2e6,	// (0x0008344e) list_medium_line_x2_t3_g4_g

0x144a,	// (0x000755b2) list_medium_line_x2_t3_g4_t1_ParamLimits

0x144a,	// (0x000755b2) list_medium_line_x2_t3_g4_t1

0x1464,	// (0x000755cc) list_medium_line_x2_t3_g4_t2_ParamLimits

0x1464,	// (0x000755cc) list_medium_line_x2_t3_g4_t2

0xace8,	// (0x0007ee50) list_medium_line_x2_t3_g4_t3_ParamLimits

0xace8,	// (0x0007ee50) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd58,	// (0x00083ec0) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd58,	// (0x00083ec0) list_medium_line_x2_t3_g4_t

0xc87d,	// (0x000809e5) list_medium_line_g2_g1_ParamLimits

0xc87d,	// (0x000809e5) list_medium_line_g2_g1

0xc889,	// (0x000809f1) list_medium_line_g2_g2_ParamLimits

0xc889,	// (0x000809f1) list_medium_line_g2_g2

0x0001,

0xfa1a,	// (0x00083b82) list_medium_line_g2_g_ParamLimits

0xfa1a,	// (0x00083b82) list_medium_line_g2_g

0xda76,	// (0x00081bde) list_medium_line_g2_t1_ParamLimits

0xda76,	// (0x00081bde) list_medium_line_g2_t1

0xc87d,	// (0x000809e5) list_medium_line_t3_g2_g1_ParamLimits

0xc87d,	// (0x000809e5) list_medium_line_t3_g2_g1

0xc889,	// (0x000809f1) list_medium_line_t3_g2_g2_ParamLimits

0xc889,	// (0x000809f1) list_medium_line_t3_g2_g2

0x0001,

0xfa1a,	// (0x00083b82) list_medium_line_t3_g2_g_ParamLimits

0xfa1a,	// (0x00083b82) list_medium_line_t3_g2_g

0x147d,	// (0x000755e5) list_medium_line_t3_g2_t1_ParamLimits

0x147d,	// (0x000755e5) list_medium_line_t3_g2_t1

0x1494,	// (0x000755fc) list_medium_line_t3_g2_t2_ParamLimits

0x1494,	// (0x000755fc) list_medium_line_t3_g2_t2

0x14a9,	// (0x00075611) list_medium_line_t3_g2_t3_ParamLimits

0x14a9,	// (0x00075611) list_medium_line_t3_g2_t3

0x0002,

0xfd5f,	// (0x00083ec7) list_medium_line_t3_g2_t_ParamLimits

0xfd5f,	// (0x00083ec7) list_medium_line_t3_g2_t

0xd85a,	// (0x000819c2) list_medium_line_right_icon_g1

0xda8b,	// (0x00081bf3) list_medium_line_right_icon_t1

0xc87d,	// (0x000809e5) list_medium_line_t2_g1_ParamLimits

0xc87d,	// (0x000809e5) list_medium_line_t2_g1

0x14c2,	// (0x0007562a) list_medium_line_t2_t1_ParamLimits

0x14c2,	// (0x0007562a) list_medium_line_t2_t1

0x14dc,	// (0x00075644) list_medium_line_t2_t2_ParamLimits

0x14dc,	// (0x00075644) list_medium_line_t2_t2

0x0001,

0xfd66,	// (0x00083ece) list_medium_line_t2_t_ParamLimits

0xfd66,	// (0x00083ece) list_medium_line_t2_t

0xc87d,	// (0x000809e5) list_medium_line_t3_g1_ParamLimits

0xc87d,	// (0x000809e5) list_medium_line_t3_g1

0x14f5,	// (0x0007565d) list_medium_line_t3_t1_ParamLimits

0x14f5,	// (0x0007565d) list_medium_line_t3_t1

0x150f,	// (0x00075677) list_medium_line_t3_t2_ParamLimits

0x150f,	// (0x00075677) list_medium_line_t3_t2

0x1524,	// (0x0007568c) list_medium_line_t3_t3_ParamLimits

0x1524,	// (0x0007568c) list_medium_line_t3_t3

0x0002,

0xfd6b,	// (0x00083ed3) list_medium_line_t3_t_ParamLimits

0xfd6b,	// (0x00083ed3) list_medium_line_t3_t

0xc87d,	// (0x000809e5) list_medium_line_g3_g1_ParamLimits

0xc87d,	// (0x000809e5) list_medium_line_g3_g1

0xda99,	// (0x00081c01) list_medium_line_g3_g2_ParamLimits

0xda99,	// (0x00081c01) list_medium_line_g3_g2

0xc889,	// (0x000809f1) list_medium_line_g3_g3_ParamLimits

0xc889,	// (0x000809f1) list_medium_line_g3_g3

0x0002,

0xfd72,	// (0x00083eda) list_medium_line_g3_g_ParamLimits

0xfd72,	// (0x00083eda) list_medium_line_g3_g

0xdaa5,	// (0x00081c0d) list_medium_line_g3_t1_ParamLimits

0xdaa5,	// (0x00081c0d) list_medium_line_g3_t1

0xc87d,	// (0x000809e5) list_medium_line_t2_g3_g1_ParamLimits

0xc87d,	// (0x000809e5) list_medium_line_t2_g3_g1

0xda99,	// (0x00081c01) list_medium_line_t2_g3_g2_ParamLimits

0xda99,	// (0x00081c01) list_medium_line_t2_g3_g2

0xc889,	// (0x000809f1) list_medium_line_t2_g3_g3_ParamLimits

0xc889,	// (0x000809f1) list_medium_line_t2_g3_g3

0x0002,

0xfd72,	// (0x00083eda) list_medium_line_t2_g3_g_ParamLimits

0xfd72,	// (0x00083eda) list_medium_line_t2_g3_g

0x1539,	// (0x000756a1) list_medium_line_t2_g3_t1_ParamLimits

0x1539,	// (0x000756a1) list_medium_line_t2_g3_t1

0x1550,	// (0x000756b8) list_medium_line_t2_g3_t2_ParamLimits

0x1550,	// (0x000756b8) list_medium_line_t2_g3_t2

0x0001,

0xfd79,	// (0x00083ee1) list_medium_line_t2_g3_t_ParamLimits

0xfd79,	// (0x00083ee1) list_medium_line_t2_g3_t

0xc87d,	// (0x000809e5) list_medium_line_t3_g3_g1_ParamLimits

0xc87d,	// (0x000809e5) list_medium_line_t3_g3_g1

0xda99,	// (0x00081c01) list_medium_line_t3_g3_g2_ParamLimits

0xda99,	// (0x00081c01) list_medium_line_t3_g3_g2

0xc889,	// (0x000809f1) list_medium_line_t3_g3_g3_ParamLimits

0xc889,	// (0x000809f1) list_medium_line_t3_g3_g3

0x0002,

0xfd72,	// (0x00083eda) list_medium_line_t3_g3_g_ParamLimits

0xfd72,	// (0x00083eda) list_medium_line_t3_g3_g

0x156b,	// (0x000756d3) list_medium_line_t3_g3_t1_ParamLimits

0x156b,	// (0x000756d3) list_medium_line_t3_g3_t1

0x1584,	// (0x000756ec) list_medium_line_t3_g3_t2_ParamLimits

0x1584,	// (0x000756ec) list_medium_line_t3_g3_t2

0x159a,	// (0x00075702) list_medium_line_t3_g3_t3_ParamLimits

0x159a,	// (0x00075702) list_medium_line_t3_g3_t3

0x0002,

0xfd7e,	// (0x00083ee6) list_medium_line_t3_g3_t_ParamLimits

0xfd7e,	// (0x00083ee6) list_medium_line_t3_g3_t

0xd980,	// (0x00081ae8) list_medium_line_right_iconx2_g1

0xd85a,	// (0x000819c2) list_medium_line_right_iconx2_g2

0x0001,

0xfd85,	// (0x00083eed) list_medium_line_right_iconx2_g

0xdaba,	// (0x00081c22) list_medium_line_right_iconx2_t1

0xd980,	// (0x00081ae8) list_medium_line_t2_right_iconx2_g1

0xd85a,	// (0x000819c2) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfd85,	// (0x00083eed) list_medium_line_t2_right_iconx2_g

0x15b4,	// (0x0007571c) list_medium_line_t2_right_iconx2_t1

0x15c4,	// (0x0007572c) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfd8a,	// (0x00083ef2) list_medium_line_t2_right_iconx2_t

0xdac8,	// (0x00081c30) list_medium_line_x4_t4_t1

0x15d6,	// (0x0007573e) list_medium_line_x4_t4_t2

0x15e6,	// (0x0007574e) list_medium_line_x4_t4_t3

0x15f6,	// (0x0007575e) list_medium_line_x4_t4_t4

0x0003,

0xfd8f,	// (0x00083ef7) list_medium_line_x4_t4_t

0x9eca,	// (0x0007e032) tport_appsw_pane_ParamLimits

0x9eca,	// (0x0007e032) tport_appsw_pane

0x9edb,	// (0x0007e043) tport_contact_pane_ParamLimits

0x9edb,	// (0x0007e043) tport_contact_pane

0x9ef4,	// (0x0007e05c) tport_listscroll_pane_ParamLimits

0x9ef4,	// (0x0007e05c) tport_listscroll_pane

0x9f0f,	// (0x0007e077) cell_tport_appsw_pane_ParamLimits

0x9f0f,	// (0x0007e077) cell_tport_appsw_pane

0xc5eb,	// (0x00080753) tport_appsw_pane_g1_ParamLimits

0xc5eb,	// (0x00080753) tport_appsw_pane_g1

0xdad6,	// (0x00081c3e) tport_contact_pane_g1

0xdadf,	// (0x00081c47) tport_contact_pane_t1

0xdaed,	// (0x00081c55) tport_contact_pane_t2

0x0001,

0xfd98,	// (0x00083f00) tport_contact_pane_t

0xdafb,	// (0x00081c63) list_tport_pane

0xdb04,	// (0x00081c6c) scroll_pane_cp_030

0xdb15,	// (0x00081c7d) cell_tport_appsw_pane_g1

0xdb25,	// (0x00081c8d) cell_tport_appsw_pane_t1

0xab43,	// (0x0007ecab) grid_highlight_pane_cp019

0x9f4f,	// (0x0007e0b7) list_tport_double_graphic_pane_ParamLimits

0x9f4f,	// (0x0007e0b7) list_tport_double_graphic_pane

0xe93a,	// (0x00082aa2) list_highlight_pane_cp023_ParamLimits

0xe93a,	// (0x00082aa2) list_highlight_pane_cp023

0x9f5c,	// (0x0007e0c4) list_tport_double_graphic_pane_g1_ParamLimits

0x9f5c,	// (0x0007e0c4) list_tport_double_graphic_pane_g1

0x9f69,	// (0x0007e0d1) list_tport_double_graphic_pane_t1_ParamLimits

0x9f69,	// (0x0007e0d1) list_tport_double_graphic_pane_t1

0x9f7e,	// (0x0007e0e6) list_tport_double_graphic_pane_t2_ParamLimits

0x9f7e,	// (0x0007e0e6) list_tport_double_graphic_pane_t2

0x0001,

0xfda4,	// (0x00083f0c) list_tport_double_graphic_pane_t_ParamLimits

0xfda4,	// (0x00083f0c) list_tport_double_graphic_pane_t

0xab43,	// (0x0007ecab) main_cale_note_pane

0x838b,	// (0x0007c4f3) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x838b,	// (0x0007c4f3) cell_vitu2_function_top_wide_pane_cp01

0x9a43,	// (0x0007dbab) wait_bar_pane_cp05_ParamLimits

0xab43,	// (0x0007ecab) listscroll_cmail_pane

0xdb3b,	// (0x00081ca3) list_cmail_pane

0x9f9a,	// (0x0007e102) list_cmail_body_pane

0x9faf,	// (0x0007e117) list_single_cmail_header_caption_pane

0x9fc8,	// (0x0007e130) list_single_cmail_header_detail_pane_ParamLimits

0x9fc8,	// (0x0007e130) list_single_cmail_header_detail_pane

0x9ff1,	// (0x0007e159) list_single_cmail_header_caption_pane_t1

0x1606,	// (0x0007576e) list_single_cmail_header_detail_pane_g1_ParamLimits

0x1606,	// (0x0007576e) list_single_cmail_header_detail_pane_g1

0xe908,	// (0x00082a70) list_single_cmail_header_detail_pane_g2_ParamLimits

0xe908,	// (0x00082a70) list_single_cmail_header_detail_pane_g2

0x0002,

0xfda9,	// (0x00083f11) list_single_cmail_header_detail_pane_g_ParamLimits

0xfda9,	// (0x00083f11) list_single_cmail_header_detail_pane_g

0xdb68,	// (0x00081cd0) list_single_cmail_header_detail_pane_t1_ParamLimits

0xdb68,	// (0x00081cd0) list_single_cmail_header_detail_pane_t1

0xdb9a,	// (0x00081d02) list_single_cmail_header_editor_pane_bg_ParamLimits

0xdb9a,	// (0x00081d02) list_single_cmail_header_editor_pane_bg

0xdbac,	// (0x00081d14) list_cmail_body_pane_g1

0xdbb5,	// (0x00081d1d) list_cmail_body_pane_t1

0xc628,	// (0x00080790) list_single_cmail_header_editor_pane_bg_g1

0x2df5,	// (0x00076f5d) list_single_cmail_header_editor_pane_bg_g1_copy1

0xc638,	// (0x000807a0) list_single_cmail_header_editor_pane_bg_g1_copy2

0xc630,	// (0x00080798) list_single_cmail_header_editor_pane_bg_g1_copy3

0xc875,	// (0x000809dd) list_single_cmail_header_editor_pane_bg_g1_copy4

0xc658,	// (0x000807c0) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xc648,	// (0x000807b0) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xc650,	// (0x000807b8) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0x2dd5,	// (0x00076f3d) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0xa001,	// (0x0007e169) calenote_gesture_pane_ParamLimits

0xa001,	// (0x0007e169) calenote_gesture_pane

0xa021,	// (0x0007e189) calenote_window_pane_ParamLimits

0xa021,	// (0x0007e189) calenote_window_pane

0xdbc3,	// (0x00081d2b) popup_note_window_cp01

0xa03d,	// (0x0007e1a5) calenote_swipe_1_pane_ParamLimits

0xa03d,	// (0x0007e1a5) calenote_swipe_1_pane

0x9e13,	// (0x0007df7b) calenote_swipe_2_pane_ParamLimits

0x9e13,	// (0x0007df7b) calenote_swipe_2_pane

0xd75d,	// (0x000818c5) calenote_swipe_1_pane_g1_ParamLimits

0xd75d,	// (0x000818c5) calenote_swipe_1_pane_g1

0xd76a,	// (0x000818d2) calenote_swipe_1_pane_g2_ParamLimits

0xd76a,	// (0x000818d2) calenote_swipe_1_pane_g2

0x0001,

0xfcd8,	// (0x00083e40) calenote_swipe_1_pane_g_ParamLimits

0xfcd8,	// (0x00083e40) calenote_swipe_1_pane_g

0xdbd5,	// (0x00081d3d) calenote_swipe_1_pane_t1_ParamLimits

0xdbd5,	// (0x00081d3d) calenote_swipe_1_pane_t1

0xd75d,	// (0x000818c5) calenote_swipe_2_pane_g1_ParamLimits

0xd75d,	// (0x000818c5) calenote_swipe_2_pane_g1

0xdbf4,	// (0x00081d5c) calenote_swipe_2_pane_g2_ParamLimits

0xdbf4,	// (0x00081d5c) calenote_swipe_2_pane_g2

0x0001,

0xfdb5,	// (0x00083f1d) calenote_swipe_2_pane_g_ParamLimits

0xfdb5,	// (0x00083f1d) calenote_swipe_2_pane_g

0xdc00,	// (0x00081d68) calenote_swipe_2_pane_t1_ParamLimits

0xdc00,	// (0x00081d68) calenote_swipe_2_pane_t1

0xab43,	// (0x0007ecab) main_mup_navstr_pane

0x7022,	// (0x0007b18a) main_mup3_pane_t7_ParamLimits

0x7022,	// (0x0007b18a) main_mup3_pane_t7

0xe5bf,	// (0x00082727) main_mp4_pane_g6_ParamLimits

0xe5bf,	// (0x00082727) main_mp4_pane_g6

0xe763,	// (0x000828cb) main_image3_pane_t4_ParamLimits

0xe763,	// (0x000828cb) main_image3_pane_t4

0xa052,	// (0x0007e1ba) popup_navstr_preview_pane_ParamLimits

0xa052,	// (0x0007e1ba) popup_navstr_preview_pane

0xa066,	// (0x0007e1ce) scroll_navstr_pane_ParamLimits

0xa066,	// (0x0007e1ce) scroll_navstr_pane

0xab43,	// (0x0007ecab) bg_popup_preview_window_pane_cp04

0xdc27,	// (0x00081d8f) popup_navstr_preview_pane_t1

0xa07a,	// (0x0007e1e2) scroll_navstr_pane_g1_ParamLimits

0xa07a,	// (0x0007e1e2) scroll_navstr_pane_g1

0xa08e,	// (0x0007e1f6) scroll_navstr_pane_t1_ParamLimits

0xa08e,	// (0x0007e1f6) scroll_navstr_pane_t1

0xdbcc,	// (0x00081d34) bg_button_pane_cp014

0xdbcc,	// (0x00081d34) bg_button_pane_cp030

0x11e9,	// (0x00075351) list_double_fisheye_pane_g4_ParamLimits

0x11e9,	// (0x00075351) list_double_fisheye_pane_g4

0x11f5,	// (0x0007535d) list_double_fisheye_pane_g5_ParamLimits

0x11f5,	// (0x0007535d) list_double_fisheye_pane_g5

0xdb43,	// (0x00081cab) sp_fs_scroll_pane_cp03

0xd89a,	// (0x00081a02) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xd8a6,	// (0x00081a0e) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfcf5,	// (0x00083e5d) main_sp_fs_ctrlbar_pane_g_ParamLimits

0xd8b2,	// (0x00081a1a) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0x9f90,	// (0x0007e0f8) sp_fs_scroll_pane_cp02

0x2002,	// (0x0007616a) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0x2002,	// (0x0007616a) popup_sp_fs_calendar_preview_list_single_pane

0xab43,	// (0x0007ecab) main_cam6_pano_pane

0xe93a,	// (0x00082aa2) main_mup3_pane_ParamLimits

0xab43,	// (0x0007ecab) main_phacti_pane

0x9916,	// (0x0007da7e) bg_button_pane_cp11

0x9930,	// (0x0007da98) main_mobtv_info_pane_g2_ParamLimits

0x9930,	// (0x0007da98) main_mobtv_info_pane_g2

0x0001,

0xfc55,	// (0x00083dbd) main_mobtv_info_pane_g_ParamLimits

0xfc55,	// (0x00083dbd) main_mobtv_info_pane_g

0x9b0b,	// (0x0007dc73) sc_clock_pane_t5_ParamLimits

0x9b0b,	// (0x0007dc73) sc_clock_pane_t5

0x9b90,	// (0x0007dcf8) main_radioblah_pane_g1_ParamLimits

0xd6a9,	// (0x00081811) main_radioblah_pane_t3_ParamLimits

0xd6a9,	// (0x00081811) main_radioblah_pane_t3

0xd6c1,	// (0x00081829) main_radioblah_pane_t4_ParamLimits

0xd6c1,	// (0x00081829) main_radioblah_pane_t4

0x9bb8,	// (0x0007dd20) main_radioblah_text_pane_ParamLimits

0x9bb8,	// (0x0007dd20) main_radioblah_text_pane

0x9bca,	// (0x0007dd32) main_radioblah_info_pane_g1_ParamLimits

0x9c65,	// (0x0007ddcd) main_radioblah_info_pane_t4_ParamLimits

0x9c65,	// (0x0007ddcd) main_radioblah_info_pane_t4

0xe93a,	// (0x00082aa2) main_sp_fs_calendar_pane

0xa0a4,	// (0x0007e20c) main_phacti_pane_g1

0xa0ac,	// (0x0007e214) phacti_note_pane_ParamLimits

0xa0ac,	// (0x0007e214) phacti_note_pane

0xdc3e,	// (0x00081da6) phacti_term_pane_ParamLimits

0xdc3e,	// (0x00081da6) phacti_term_pane

0xdc53,	// (0x00081dbb) phacti_note_pane_t1_ParamLimits

0xdc53,	// (0x00081dbb) phacti_note_pane_t1

0xdc6a,	// (0x00081dd2) phacti_term_pane_g1

0xdc72,	// (0x00081dda) phacti_term_pane_t1_ParamLimits

0xdc72,	// (0x00081dda) phacti_term_pane_t1

0xdc9c,	// (0x00081e04) popup_sp_fs_calendar_preview_list_single_pane_g1

0xdca4,	// (0x00081e0c) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfdbf,	// (0x00083f27) popup_sp_fs_calendar_preview_list_single_pane_g

0xdcac,	// (0x00081e14) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xdcac,	// (0x00081e14) popup_sp_fs_calendar_preview_list_single_pane_t1

0xdcc2,	// (0x00081e2a) aid_popup_sp_fs_bg_corner_pane

0xbb8f,	// (0x0007fcf7) popup_sp_fs_calendar_preview_bg_pane_g1

0xab43,	// (0x0007ecab) popup_sp_fs_calendar_preview_bg_pane

0xdcca,	// (0x00081e32) popup_sp_fs_calendar_preview_list_pane

0xe93a,	// (0x00082aa2) bg_main_sp_fs_cale_pane_ParamLimits

0xe93a,	// (0x00082aa2) bg_main_sp_fs_cale_pane

0xdcd2,	// (0x00081e3a) listscroll_cale_mrui_pane_ParamLimits

0xdcd2,	// (0x00081e3a) listscroll_cale_mrui_pane

0xdce6,	// (0x00081e4e) listscroll_sp_fs_schedule_track_pane

0xdcef,	// (0x00081e57) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0xdcef,	// (0x00081e57) main_sp_fs_ctrlbar_pane_cp01

0xdd00,	// (0x00081e68) main_sp_fs_ribbon_pane

0xdd08,	// (0x00081e70) popup_sp_fs_cale_preview_window

0xa107,	// (0x0007e26f) list_single_sp_fs_schedule_track_pane_ParamLimits

0xa107,	// (0x0007e26f) list_single_sp_fs_schedule_track_pane

0xe93a,	// (0x00082aa2) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0xe93a,	// (0x00082aa2) bg_sp_fs_highlight_list_pane_cp03

0xa11c,	// (0x0007e284) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0xa11c,	// (0x0007e284) list_single_sp_fs_schedule_track_pane_g1

0xa128,	// (0x0007e290) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0xa128,	// (0x0007e290) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfdc4,	// (0x00083f2c) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfdc4,	// (0x00083f2c) list_single_sp_fs_schedule_track_pane_g

0xa134,	// (0x0007e29c) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0xa134,	// (0x0007e29c) list_single_sp_fs_schedule_track_pane_t1

0xa14e,	// (0x0007e2b6) sp_fs_schedule_track_pane_ParamLimits

0xa14e,	// (0x0007e2b6) sp_fs_schedule_track_pane

0xdd1a,	// (0x00081e82) sp_fs_schedule_track_pane_g1

0xdd22,	// (0x00081e8a) sp_fs_schedule_track_pane_g2

0xdd2a,	// (0x00081e92) sp_fs_schedule_track_pane_g3

0xdd32,	// (0x00081e9a) sp_fs_schedule_track_pane_g4

0xdd3a,	// (0x00081ea2) sp_fs_schedule_track_pane_g5

0x0004,

0xfdc9,	// (0x00083f31) sp_fs_schedule_track_pane_g

0xc628,	// (0x00080790) bg_sp_fs_schedule_viewer_highlight_g1

0x2df5,	// (0x00076f5d) bg_sp_fs_schedule_viewer_highlight_g2

0xc630,	// (0x00080798) bg_sp_fs_schedule_viewer_highlight_g3

0xc638,	// (0x000807a0) bg_sp_fs_schedule_viewer_highlight_g4

0xc875,	// (0x000809dd) bg_sp_fs_schedule_viewer_highlight_g5

0xc648,	// (0x000807b0) bg_sp_fs_schedule_viewer_highlight_g6

0xc650,	// (0x000807b8) bg_sp_fs_schedule_viewer_highlight_g7

0xc658,	// (0x000807c0) bg_sp_fs_schedule_viewer_highlight_g8

0x2dd5,	// (0x00076f3d) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfdd4,	// (0x00083f3c) bg_sp_fs_schedule_viewer_highlight_g

0xab43,	// (0x0007ecab) bg_main_sp_fs_ribbon_pane

0xa15f,	// (0x0007e2c7) main_sp_fs_ribbon_pane_g1

0xdd42,	// (0x00081eaa) main_sp_fs_ribbon_pane_t1

0xa168,	// (0x0007e2d0) main_sp_fs_ribbon_pane_t2

0xdd51,	// (0x00081eb9) main_sp_fs_ribbon_pane_t3

0x0002,

0xfde7,	// (0x00083f4f) main_sp_fs_ribbon_pane_t

0xdd60,	// (0x00081ec8) main_sp_fs_ribbon_scheduler_pane

0xdd68,	// (0x00081ed0) bg_main_sp_fs_ribbon_pane_g1

0xdd71,	// (0x00081ed9) bg_main_sp_fs_ribbon_pane_g2

0xdd7a,	// (0x00081ee2) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfdee,	// (0x00083f56) bg_main_sp_fs_ribbon_pane_g

0xdd82,	// (0x00081eea) main_sp_fs_ribbon_scheduler_pane_g1

0xdd8b,	// (0x00081ef3) main_sp_fs_ribbon_scheduler_pane_g2

0xdd94,	// (0x00081efc) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfdf5,	// (0x00083f5d) main_sp_fs_ribbon_scheduler_pane_g

0xdd9d,	// (0x00081f05) list_cale_mrui_pane

0xa177,	// (0x0007e2df) sp_fs_scroll_pane_cp07_ParamLimits

0xa177,	// (0x0007e2df) sp_fs_scroll_pane_cp07

0xa18b,	// (0x0007e2f3) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0xa18b,	// (0x0007e2f3) bg_sp_fs_schedule_viewer_highlight

0xdda6,	// (0x00081f0e) list_single_sp_fs_schedule_track_pane_cp01

0xddae,	// (0x00081f16) list_sp_fs_schedule_track_pane

0xddb6,	// (0x00081f1e) sp_fs_scroll_pane_cp06_ParamLimits

0xddb6,	// (0x00081f1e) sp_fs_scroll_pane_cp06

0xbb8f,	// (0x0007fcf7) bgmain_sp_fs_calendar_pane_g1

0x1644,	// (0x000757ac) list_single_cale_mrui_pane_ParamLimits

0x1644,	// (0x000757ac) list_single_cale_mrui_pane

0xddc8,	// (0x00081f30) list_single_cale_mrui_row_pane_ParamLimits

0xddc8,	// (0x00081f30) list_single_cale_mrui_row_pane

0xddd5,	// (0x00081f3d) list_single_cale_mrui_row_pane_g1_ParamLimits

0xddd5,	// (0x00081f3d) list_single_cale_mrui_row_pane_g1

0xde0d,	// (0x00081f75) list_single_cale_mrui_row_pane_t1_ParamLimits

0xde0d,	// (0x00081f75) list_single_cale_mrui_row_pane_t1

0x1666,	// (0x000757ce) list_single_cale_mrui_row_pane_t2_ParamLimits

0x1666,	// (0x000757ce) list_single_cale_mrui_row_pane_t2

0xde1f,	// (0x00081f87) list_single_cale_mrui_row_pane_t3_ParamLimits

0xde1f,	// (0x00081f87) list_single_cale_mrui_row_pane_t3

0xde4e,	// (0x00081fb6) list_single_cale_mrui_row_pane_t4_ParamLimits

0xde4e,	// (0x00081fb6) list_single_cale_mrui_row_pane_t4

0x0003,

0xfe01,	// (0x00083f69) list_single_cale_mrui_row_pane_t_ParamLimits

0xfe01,	// (0x00083f69) list_single_cale_mrui_row_pane_t

0x16ce,	// (0x00075836) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x16ce,	// (0x00075836) list_single_cmail_header_editor_pane_bg_cp01

0x16f4,	// (0x0007585c) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x16f4,	// (0x0007585c) list_single_cmail_header_editor_pane_bg_cp02

0xa19b,	// (0x0007e303) main_radioblah_text_pane_t1_ParamLimits

0xa19b,	// (0x0007e303) main_radioblah_text_pane_t1

0xde7d,	// (0x00081fe5) cam6_indi_pane_cp01

0xde85,	// (0x00081fed) cam6_mode_pane_cp01

0xde8d,	// (0x00081ff5) cam6_pano_pane

0xde96,	// (0x00081ffe) cam6_zoom_pane_cp01

0xde9e,	// (0x00082006) cam6_pano_image_pane

0xdea9,	// (0x00082011) cam6_pano_pane_g1

0xd421,	// (0x00081589) cam6_pano_pane_g2

0xdeb2,	// (0x0008201a) cam6_pano_pane_g3

0xdebb,	// (0x00082023) cam6_pano_pane_g4

0xc14d,	// (0x000802b5) cam6_pano_pane_g5

0xdec4,	// (0x0008202c) cam6_pano_pane_g6

0xdece,	// (0x00082036) cam6_pano_pane_g7

0xded6,	// (0x0008203e) cam6_pano_pane_g8

0xdedf,	// (0x00082047) cam6_pano_pane_g9

0x0008,

0xfe0a,	// (0x00083f72) cam6_pano_pane_g

0xab43,	// (0x0007ecab) main_browser_tag_pane

0xdc1f,	// (0x00081d87) grid_navstr_albumart_pane

0xdeea,	// (0x00082052) cell_navstr_albumart_pane_ParamLimits

0xdeea,	// (0x00082052) cell_navstr_albumart_pane

0x47bf,	// (0x00078927) cell_navstr_albumart_pane_g1

0xb49c,	// (0x0007f604) cell_navstr_albumart_pane_g2

0xb4ac,	// (0x0007f614) cell_navstr_albumart_pane_g3

0xb4a4,	// (0x0007f60c) cell_navstr_albumart_pane_g4

0x0003,

0xfe1d,	// (0x00083f85) cell_navstr_albumart_pane_g

0xa1b6,	// (0x0007e31e) bt_list_pane_ParamLimits

0xa1b6,	// (0x0007e31e) bt_list_pane

0xa1cb,	// (0x0007e333) bt_list_pane_t1

0xa1da,	// (0x0007e342) bt_list_pane_t2

0x0001,

0xfe26,	// (0x00083f8e) bt_list_pane_t

0xab43,	// (0x0007ecab) main_cale_prevew_pane

0xa1e9,	// (0x0007e351) popup_cale_preview_window_ParamLimits

0xa1e9,	// (0x0007e351) popup_cale_preview_window

0xe93a,	// (0x00082aa2) bg_popup_preview_window_pane_cp05_ParamLimits

0xe93a,	// (0x00082aa2) bg_popup_preview_window_pane_cp05

0xdf0c,	// (0x00082074) list_cale_preview_pane_ParamLimits

0xdf0c,	// (0x00082074) list_cale_preview_pane

0xa200,	// (0x0007e368) list_double_cale_preview_pane_ParamLimits

0xa200,	// (0x0007e368) list_double_cale_preview_pane

0xa212,	// (0x0007e37a) list_single_cale_preview_pane_ParamLimits

0xa212,	// (0x0007e37a) list_single_cale_preview_pane

0xa226,	// (0x0007e38e) list_single_cale_preview_pane_g1

0xa22e,	// (0x0007e396) list_single_cale_preview_pane_t1_ParamLimits

0xa22e,	// (0x0007e396) list_single_cale_preview_pane_t1

0xa243,	// (0x0007e3ab) list_double_cale_preview_pane_g1

0xa24b,	// (0x0007e3b3) list_double_cale_preview_pane_t1_ParamLimits

0xa24b,	// (0x0007e3b3) list_double_cale_preview_pane_t1

0xa260,	// (0x0007e3c8) list_double_cale_preview_pane_t2_ParamLimits

0xa260,	// (0x0007e3c8) list_double_cale_preview_pane_t2

0x0001,

0xfe2b,	// (0x00083f93) list_double_cale_preview_pane_t_ParamLimits

0xfe2b,	// (0x00083f93) list_double_cale_preview_pane_t

0xab43,	// (0x0007ecab) main_ezdial_pane

0xe93a,	// (0x00082aa2) main_sp_fs_email_pane_ParamLimits

0x9e2b,	// (0x0007df93) cmail_ddmenu_btn01_pane_ParamLimits

0x9e2b,	// (0x0007df93) cmail_ddmenu_btn01_pane

0x9e3e,	// (0x0007dfa6) cmail_ddmenu_btn02_pane_ParamLimits

0x9e3e,	// (0x0007dfa6) cmail_ddmenu_btn02_pane

0x9e61,	// (0x0007dfc9) cmail_ddmenu_btn03_pane_ParamLimits

0x9e61,	// (0x0007dfc9) cmail_ddmenu_btn03_pane

0x1265,	// (0x000753cd) main_sp_fs_ctrlbar_pane_ParamLimits

0x1289,	// (0x000753f1) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0x9f9a,	// (0x0007e102) list_cmail_body_pane_ParamLimits

0xdb52,	// (0x00081cba) bg_button_pane_cp12

0xdb5b,	// (0x00081cc3) list_single_cmail_header_detail_pane_g3_ParamLimits

0xdb5b,	// (0x00081cc3) list_single_cmail_header_detail_pane_g3

0x161e,	// (0x00075786) list_single_cmail_header_detail_pane_t2_ParamLimits

0x161e,	// (0x00075786) list_single_cmail_header_detail_pane_t2

0x0001,

0xfdb0,	// (0x00083f18) list_single_cmail_header_detail_pane_t_ParamLimits

0xfdb0,	// (0x00083f18) list_single_cmail_header_detail_pane_t

0xdc87,	// (0x00081def) phacti_term_pane_t2_ParamLimits

0xdc87,	// (0x00081def) phacti_term_pane_t2

0x0001,

0xfdba,	// (0x00083f22) phacti_term_pane_t_ParamLimits

0xfdba,	// (0x00083f22) phacti_term_pane_t

0xdf18,	// (0x00082080) aid_size_list_single_double

0xa278,	// (0x0007e3e0) popup_ezdial_listscroll_window

0xa294,	// (0x0007e3fc) popup_number_entry_window_cp01

0x4244,	// (0x000783ac) bg_popup_call_pane_cp09

0xdf24,	// (0x0008208c) ezdial_list_pane

0xdf2c,	// (0x00082094) scroll_pane_cp23

0xb687,	// (0x0007f7ef) bg_button_pane_cp028_ParamLimits

0xb687,	// (0x0007f7ef) bg_button_pane_cp028

0xa2a2,	// (0x0007e40a) cmail_ddmenu_btn01_pane_g1_ParamLimits

0xa2a2,	// (0x0007e40a) cmail_ddmenu_btn01_pane_g1

0xa2ae,	// (0x0007e416) cmail_ddmenu_btn01_pane_g2_ParamLimits

0xa2ae,	// (0x0007e416) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfe30,	// (0x00083f98) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfe30,	// (0x00083f98) cmail_ddmenu_btn01_pane_g

0xdf34,	// (0x0008209c) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xdf34,	// (0x0008209c) cmail_ddmenu_btn01_pane_t1

0xb687,	// (0x0007f7ef) bg_button_pane_cp029_ParamLimits

0xb687,	// (0x0007f7ef) bg_button_pane_cp029

0xa2ba,	// (0x0007e422) cmail_ddmenu_btn02_pane_g1_ParamLimits

0xa2ba,	// (0x0007e422) cmail_ddmenu_btn02_pane_g1

0xa2d2,	// (0x0007e43a) cmail_ddmenu_btn02_pane_t1_ParamLimits

0xa2d2,	// (0x0007e43a) cmail_ddmenu_btn02_pane_t1

0xe93a,	// (0x00082aa2) bg_button_pane_cp031_ParamLimits

0xe93a,	// (0x00082aa2) bg_button_pane_cp031

0xa2ba,	// (0x0007e422) cmail_ddmenu_btn03_pane_g1_ParamLimits

0xa2ba,	// (0x0007e422) cmail_ddmenu_btn03_pane_g1

0xa2d2,	// (0x0007e43a) cmail_ddmenu_btn03_pane_t1_ParamLimits

0xa2d2,	// (0x0007e43a) cmail_ddmenu_btn03_pane_t1

0x7b9f,	// (0x0007bd07) cell_dialer2_keypad_pane_t1_ParamLimits

0x7bb9,	// (0x0007bd21) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x7bb9,	// (0x0007bd21) cell_dialer2_keypad_pane_t1_copy1

0x9798,	// (0x0007d900) ncimui_group_button_pane

0xe93a,	// (0x00082aa2) main_sp_fs_calendar_pane_ParamLimits

0x9faf,	// (0x0007e117) list_single_cmail_header_caption_pane_ParamLimits

0xea1e,	// (0x00082b86) aid_recal_txt_sm_pane

0xab43,	// (0x0007ecab) mian_recal_day_pane

0xdd08,	// (0x00081e70) popup_sp_fs_cale_preview_window_ParamLimits

0xab43,	// (0x0007ecab) list_recal_day_pane

0xdf62,	// (0x000820ca) list_single_recal_day_pane_ParamLimits

0xdf62,	// (0x000820ca) list_single_recal_day_pane

0xdf74,	// (0x000820dc) list_single_recal_day_pane_g1_ParamLimits

0xdf74,	// (0x000820dc) list_single_recal_day_pane_g1

0xdf80,	// (0x000820e8) list_single_recal_day_pane_g2_ParamLimits

0xdf80,	// (0x000820e8) list_single_recal_day_pane_g2

0xdf8f,	// (0x000820f7) list_single_recal_day_pane_g3_ParamLimits

0xdf8f,	// (0x000820f7) list_single_recal_day_pane_g3

0xa2f6,	// (0x0007e45e) list_single_recal_day_pane_g4_ParamLimits

0xa2f6,	// (0x0007e45e) list_single_recal_day_pane_g4

0xdf9b,	// (0x00082103) list_single_recal_day_pane_g5_ParamLimits

0xdf9b,	// (0x00082103) list_single_recal_day_pane_g5

0xdfaa,	// (0x00082112) list_single_recal_day_pane_g6_ParamLimits

0xdfaa,	// (0x00082112) list_single_recal_day_pane_g6

0x0005,

0xfe3f,	// (0x00083fa7) list_single_recal_day_pane_g_ParamLimits

0xfe3f,	// (0x00083fa7) list_single_recal_day_pane_g

0xdfb6,	// (0x0008211e) list_single_recal_day_pane_t1

0xdfc4,	// (0x0008212c) list_single_recal_day_pane_t2

0x0001,

0xfe4c,	// (0x00083fb4) list_single_recal_day_pane_t

0xa309,	// (0x0007e471) ncimui_query_button_pane_ParamLimits

0xa309,	// (0x0007e471) ncimui_query_button_pane

0xa319,	// (0x0007e481) ncimui_query_button_pane_t1_ParamLimits

0xa319,	// (0x0007e481) ncimui_query_button_pane_t1

0xdfd2,	// (0x0008213a) ncimui_query_button_pane_t2_ParamLimits

0xdfd2,	// (0x0008213a) ncimui_query_button_pane_t2

0x0001,

0xfe51,	// (0x00083fb9) ncimui_query_button_pane_t_ParamLimits

0xfe51,	// (0x00083fb9) ncimui_query_button_pane_t

0xa32c,	// (0x0007e494) query_button_pane_ParamLimits

0xa32c,	// (0x0007e494) query_button_pane

0xab43,	// (0x0007ecab) bg_button_pane_cp0028

0xdfe5,	// (0x0008214d) query_button_pane_t1

0x5c7a,	// (0x00079de2) main_tport_pane_ParamLimits

0x9e87,	// (0x0007dfef) bg_popup_window_pane_cp01_ParamLimits

0x9e87,	// (0x0007dfef) bg_popup_window_pane_cp01

0x9ea1,	// (0x0007e009) heading_pane_cp08_ParamLimits

0x9ea1,	// (0x0007e009) heading_pane_cp08

0x9eb5,	// (0x0007e01d) heading_pane_cp07_ParamLimits

0x9eb5,	// (0x0007e01d) heading_pane_cp07

0xdb15,	// (0x00081c7d) cell_tport_appsw_pane_g2

0x0002,

0xfd9d,	// (0x00083f05) cell_tport_appsw_pane_g

0x0e4b,	// (0x00074fb3) input_candi_list_open_g1

0x38cf,	// (0x00077a37) list_cale_time_pane_g6_ParamLimits

0x38cf,	// (0x00077a37) list_cale_time_pane_g6

0x6a43,	// (0x0007abab) aid_size_touch_calib_1_ParamLimits

0x6a43,	// (0x0007abab) aid_size_touch_calib_1

0x6a4f,	// (0x0007abb7) aid_size_touch_calib_2_ParamLimits

0x6a4f,	// (0x0007abb7) aid_size_touch_calib_2

0x6a65,	// (0x0007abcd) aid_size_touch_calib_3_ParamLimits

0x6a65,	// (0x0007abcd) aid_size_touch_calib_3

0x6a83,	// (0x0007abeb) aid_size_touch_calib_4_ParamLimits

0x6a83,	// (0x0007abeb) aid_size_touch_calib_4

0x6a99,	// (0x0007ac01) main_touch_calib_button_group_pane_ParamLimits

0x6a99,	// (0x0007ac01) main_touch_calib_button_group_pane

0x6ab1,	// (0x0007ac19) main_touch_calib_pane_g1_ParamLimits

0x6abd,	// (0x0007ac25) main_touch_calib_pane_g2_ParamLimits

0x6ac9,	// (0x0007ac31) main_touch_calib_pane_g3_ParamLimits

0x6ad5,	// (0x0007ac3d) main_touch_calib_pane_g4_ParamLimits

0xf775,	// (0x000838dd) main_touch_calib_pane_g_ParamLimits

0x6ae1,	// (0x0007ac49) main_touch_calib_pane_t1_ParamLimits

0x6afb,	// (0x0007ac63) main_touch_calib_pane_t2_ParamLimits

0x6b15,	// (0x0007ac7d) main_touch_calib_pane_t3_ParamLimits

0x6b29,	// (0x0007ac91) main_touch_calib_pane_t4_ParamLimits

0x6b3d,	// (0x0007aca5) main_touch_calib_pane_t5_ParamLimits

0xf77e,	// (0x000838e6) main_touch_calib_pane_t_ParamLimits

0xbf34,	// (0x0008009c) list_single_fp_cale_pane_g3_ParamLimits

0xbf34,	// (0x0008009c) list_single_fp_cale_pane_g3

0xe93a,	// (0x00082aa2) bg_button_pane_cp012_ParamLimits

0xe93a,	// (0x00082aa2) bg_vkb2_func_pane_cp03_ParamLimits

0x8b6b,	// (0x0007ccd3) cell_vitu2_function_top_pane_g1_ParamLimits

0xe93a,	// (0x00082aa2) bg_vkb2_func_pane_cp04_ParamLimits

0x9738,	// (0x0007d8a0) main_ncimui_button_group_pane_ParamLimits

0x9738,	// (0x0007d8a0) main_ncimui_button_group_pane

0x9786,	// (0x0007d8ee) main_ncimui_pane_t3_ParamLimits

0x9786,	// (0x0007d8ee) main_ncimui_pane_t3

0xdc35,	// (0x00081d9d) phacti_button_group_pane

0xdf18,	// (0x00082080) aid_size_list_single_double_ParamLimits

0xa278,	// (0x0007e3e0) popup_ezdial_listscroll_window_ParamLimits

0xa294,	// (0x0007e3fc) popup_number_entry_window_cp01_ParamLimits

0xa33f,	// (0x0007e4a7) phacti_button_pane_ParamLimits

0xa33f,	// (0x0007e4a7) phacti_button_pane

0xab43,	// (0x0007ecab) bg_button_pane_cp14

0xdff3,	// (0x0008215b) phacti_button_pane_t1

0xa350,	// (0x0007e4b8) main_touch_calib_button_pane_ParamLimits

0xa350,	// (0x0007e4b8) main_touch_calib_button_pane

0x1d41,	// (0x00075ea9) bg_button_pane_cp18_ParamLimits

0x1d41,	// (0x00075ea9) bg_button_pane_cp18

0xe001,	// (0x00082169) main_touch_calib_button_pane_t1_ParamLimits

0xe001,	// (0x00082169) main_touch_calib_button_pane_t1

0xe017,	// (0x0008217f) main_touch_calib_button_pane_t2_ParamLimits

0xe017,	// (0x0008217f) main_touch_calib_button_pane_t2

0x0001,

0xfe56,	// (0x00083fbe) main_touch_calib_button_pane_t_ParamLimits

0xfe56,	// (0x00083fbe) main_touch_calib_button_pane_t

0xab43,	// (0x0007ecab) cell_ncimui_button_pane

0xab43,	// (0x0007ecab) bg_button_pane_cp032

0xe035,	// (0x0008219d) cell_ncimui_button_pane_t1

0xe743,	// (0x000828ab) image3_infobar_pane_ParamLimits

0xe743,	// (0x000828ab) image3_infobar_pane

0x9b37,	// (0x0007dc9f) fs_bigclock_status_pane_ParamLimits

0x9b37,	// (0x0007dc9f) fs_bigclock_status_pane

0x9b44,	// (0x0007dcac) main_fs_bigclock_clock_pane_ParamLimits

0x9b44,	// (0x0007dcac) main_fs_bigclock_clock_pane

0x9b57,	// (0x0007dcbf) main_fs_bigclock_indi_pane_ParamLimits

0x9b57,	// (0x0007dcbf) main_fs_bigclock_indi_pane

0x9b6f,	// (0x0007dcd7) main_fs_bigclock_swipe_pane_ParamLimits

0x9b6f,	// (0x0007dcd7) main_fs_bigclock_swipe_pane

0xab43,	// (0x0007ecab) main_fs_clock_dumped_data

0xd52e,	// (0x00081696) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xd52e,	// (0x00081696) list_single_fs_bigclock_indicator_pane_g1

0xd54c,	// (0x000816b4) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xd54c,	// (0x000816b4) list_single_fs_bigclock_indicator_pane_g2

0xd566,	// (0x000816ce) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xd566,	// (0x000816ce) list_single_fs_bigclock_indicator_pane_g3

0xd580,	// (0x000816e8) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xd580,	// (0x000816e8) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfc89,	// (0x00083df1) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfc89,	// (0x00083df1) list_single_fs_bigclock_indicator_pane_g

0xd5a6,	// (0x0008170e) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xd5a6,	// (0x0008170e) list_single_fs_bigclock_indicator_pane_t1

0xd5ce,	// (0x00081736) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xd5ce,	// (0x00081736) list_single_fs_bigclock_indicator_pane_t2

0xd5f6,	// (0x0008175e) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xd5f6,	// (0x0008175e) list_single_fs_bigclock_indicator_pane_t3

0xd61e,	// (0x00081786) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xd61e,	// (0x00081786) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfc94,	// (0x00083dfc) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfc94,	// (0x00083dfc) list_single_fs_bigclock_indicator_pane_t

0xe043,	// (0x000821ab) image3_infobar_fav_pane_ParamLimits

0xe043,	// (0x000821ab) image3_infobar_fav_pane

0xe053,	// (0x000821bb) image3_infobar_loc_pane_ParamLimits

0xe053,	// (0x000821bb) image3_infobar_loc_pane

0xe067,	// (0x000821cf) image3_infobar_time_pane_ParamLimits

0xe067,	// (0x000821cf) image3_infobar_time_pane

0xbb8f,	// (0x0007fcf7) image3_infobar_time_pane_g1

0xe077,	// (0x000821df) image3_infobar_time_pane_t1

0xbb8f,	// (0x0007fcf7) image3_infobar_loc_pane_g1

0xe085,	// (0x000821ed) image3_infobar_loc_pane_g2

0x0001,

0xfe5b,	// (0x00083fc3) image3_infobar_loc_pane_g

0xe08d,	// (0x000821f5) image3_infobar_loc_pane_t1

0xbb8f,	// (0x0007fcf7) image3_infobar_fav_pane_g1

0xe09b,	// (0x00082203) image3_infobar_fav_pane_g2

0x0001,

0xfe60,	// (0x00083fc8) image3_infobar_fav_pane_g

0xe0a3,	// (0x0008220b) fs_bigclock_status_battery_pane

0xe0ac,	// (0x00082214) fs_bigclock_status_signal_pane

0xe0b5,	// (0x0008221d) fs_bigclock_status_title_pane

0xe0be,	// (0x00082226) fs_bigclock_status_signal_pane_g1

0xe0c7,	// (0x0008222f) fs_bigclock_status_signal_pane_g2

0x0001,

0xfe65,	// (0x00083fcd) fs_bigclock_status_signal_pane_g

0xe0cf,	// (0x00082237) fs_bigclock_status_battery_pane_g1

0xe0d8,	// (0x00082240) fs_bigclock_status_battery_pane_g2

0x0001,

0xfe6a,	// (0x00083fd2) fs_bigclock_status_battery_pane_g

0xe0e0,	// (0x00082248) fs_bigclock_status_title_pane_t1

0xbb8f,	// (0x0007fcf7) main_fs_bigclock_clock_pane_g1

0xe0ee,	// (0x00082256) main_fs_bigclock_clock_pane_g2

0xe0ee,	// (0x00082256) main_fs_bigclock_clock_pane_g3

0xe0ee,	// (0x00082256) main_fs_bigclock_clock_pane_g4

0x0003,

0xfe6f,	// (0x00083fd7) main_fs_bigclock_clock_pane_g

0xe0f6,	// (0x0008225e) main_fs_bigclock_clock_pane_t1

0xe104,	// (0x0008226c) main_fs_bigclock_clock_pane_t2

0x0001,

0xfe78,	// (0x00083fe0) main_fs_bigclock_clock_pane_t

0xe113,	// (0x0008227b) list_single_fs_bigclock_indicator_pane_ParamLimits

0xe113,	// (0x0008227b) list_single_fs_bigclock_indicator_pane

0xa365,	// (0x0007e4cd) list_single_fs_bigclock_pane_ParamLimits

0xa365,	// (0x0007e4cd) list_single_fs_bigclock_pane

0xe12d,	// (0x00082295) main_fs_bigclock_indicator_pane_t1

0xe13c,	// (0x000822a4) list_single_fs_bigclock_pane_g1

0xe144,	// (0x000822ac) list_single_fs_bigclock_pane_t1

0xbb8f,	// (0x0007fcf7) main_fs_bigclock_swipe_pane_g1

0xe182,	// (0x000822ea) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfe89,	// (0x00083ff1) main_fs_bigclock_swipe_pane_g

0xe18a,	// (0x000822f2) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xe18a,	// (0x000822f2) main_fs_bigclock_swipe_pane_t1

0x3bbb,	// (0x00077d23) call_type_pane_ParamLimits

0xab43,	// (0x0007ecab) main_btmg_pane

0xde01,	// (0x00081f69) list_single_cale_mrui_row_pane_g2_ParamLimits

0xde01,	// (0x00081f69) list_single_cale_mrui_row_pane_g2

0x0001,

0xfdfc,	// (0x00083f64) list_single_cale_mrui_row_pane_g_ParamLimits

0xfdfc,	// (0x00083f64) list_single_cale_mrui_row_pane_g

0xdf52,	// (0x000820ba) list_recal_vselct_arw_lo_pane

0xdf5a,	// (0x000820c2) list_recal_vselct_arw_up_pane

0xea27,	// (0x00082b8f) list_recal_vselct_pane

0xe1a7,	// (0x0008230f) btmg_button_pane

0xa3cb,	// (0x0007e533) main_btmg_pane_g1

0xab43,	// (0x0007ecab) bg_button_pane_cp044

0xe1b1,	// (0x00082319) btmg_button_pane_t1

0xb67f,	// (0x0007f7e7) aid_listscroll_gen

0xe93a,	// (0x00082aa2) main_cntbar_detail_pane

0xdb33,	// (0x00081c9b) list_cmail_folder_pane

0xdb43,	// (0x00081cab) sp_fs_scroll_pane_cp03_ParamLimits

0x1714,	// (0x0007587c) list_single_fs_dyc_pane_cp01_ParamLimits

0x1714,	// (0x0007587c) list_single_fs_dyc_pane_cp01

0xe1bf,	// (0x00082327) aid_size_cmail_indent

0xe1c8,	// (0x00082330) list_single_dyc_row_pane_cp01

0xa401,	// (0x0007e569) cntbar_detail_list_pane_ParamLimits

0xa401,	// (0x0007e569) cntbar_detail_list_pane

0xa44d,	// (0x0007e5b5) main_cntbar_detail_cont_pane_ParamLimits

0xa44d,	// (0x0007e5b5) main_cntbar_detail_cont_pane

0x3aa1,	// (0x00077c09) scroll_pane_cp032_ParamLimits

0x3aa1,	// (0x00077c09) scroll_pane_cp032

0xa461,	// (0x0007e5c9) cntbar_detail_list_event_pane_ParamLimits

0xa461,	// (0x0007e5c9) cntbar_detail_list_event_pane

0xa411,	// (0x0007e579) cntbar_detail_list_shct_pane

0x2e4b,	// (0x00076fb3) aid_list_gen

0xe1d1,	// (0x00082339) aid_scroll

0xe1da,	// (0x00082342) aid_size_touch_scroll_bar

0xe1e3,	// (0x0008234b) aid_list_double

0xe1ec,	// (0x00082354) aid_list_single

0xe1f5,	// (0x0008235d) aid_list_single_lg

0xe1fe,	// (0x00082366) aid_list_z_g_a_sm

0xe914,	// (0x00082a7c) aid_list_z_g_d

0xe206,	// (0x0008236e) aid_txt_z_prm

0x172e,	// (0x00075896) aid_txt_z_prm_cp01

0x173c,	// (0x000758a4) aid_txt_z_sec

0xa471,	// (0x0007e5d9) main_cntbar_detail_cont_pane_g1_ParamLimits

0xa471,	// (0x0007e5d9) main_cntbar_detail_cont_pane_g1

0xa485,	// (0x0007e5ed) main_cntbar_detail_cont_pane_g2_ParamLimits

0xa485,	// (0x0007e5ed) main_cntbar_detail_cont_pane_g2

0x0001,

0xfe8e,	// (0x00083ff6) main_cntbar_detail_cont_pane_g_ParamLimits

0xfe8e,	// (0x00083ff6) main_cntbar_detail_cont_pane_g

0xe214,	// (0x0008237c) main_cntbar_detail_cont_pane_t1

0xe222,	// (0x0008238a) main_cntbar_detail_cont_pane_t2

0xe230,	// (0x00082398) main_cntbar_detail_cont_pane_t3

0x0002,

0xfe93,	// (0x00083ffb) main_cntbar_detail_cont_pane_t

0xa495,	// (0x0007e5fd) cell_cntbar_detail_list_shct_pane_ParamLimits

0xa495,	// (0x0007e5fd) cell_cntbar_detail_list_shct_pane

0xe23e,	// (0x000823a6) cntbar_detail_list_shct_pane_g1

0xe247,	// (0x000823af) cntbar_detail_list_shct_pane_g2

0x0001,

0xfe9a,	// (0x00084002) cntbar_detail_list_shct_pane_g

0xa4a9,	// (0x0007e611) cntbar_detail_list_event_pane_g1_ParamLimits

0xa4a9,	// (0x0007e611) cntbar_detail_list_event_pane_g1

0xa4b5,	// (0x0007e61d) cntbar_detail_list_event_pane_g2_ParamLimits

0xa4b5,	// (0x0007e61d) cntbar_detail_list_event_pane_g2

0x0005,

0xfe9f,	// (0x00084007) cntbar_detail_list_event_pane_g_ParamLimits

0xfe9f,	// (0x00084007) cntbar_detail_list_event_pane_g

0xa521,	// (0x0007e689) cntbar_detail_list_event_pane_t1_ParamLimits

0xa521,	// (0x0007e689) cntbar_detail_list_event_pane_t1

0xa536,	// (0x0007e69e) cntbar_detail_list_event_pane_t2_ParamLimits

0xa536,	// (0x0007e69e) cntbar_detail_list_event_pane_t2

0x0002,

0xfeac,	// (0x00084014) cntbar_detail_list_event_pane_t_ParamLimits

0xfeac,	// (0x00084014) cntbar_detail_list_event_pane_t

0xbb8f,	// (0x0007fcf7) cell_cntbar_detail_list_shct_pane_g1

0x41c2,	// (0x0007832a) navi_pane_mv_g3

0xe93a,	// (0x00082aa2) main_cntbar_detail_pane_ParamLimits

0xab43,	// (0x0007ecab) main_notif_wgt_pane

0xe559,	// (0x000826c1) aid_tch_main_mp4_pane_g4

0xe73b,	// (0x000828a3) popup_slider_window_cp02

0xdf49,	// (0x000820b1) list_recal_day_event_pane

0xa3d5,	// (0x0007e53d) cntbar_detail_btn_pane_ParamLimits

0xa3d5,	// (0x0007e53d) cntbar_detail_btn_pane

0xa3eb,	// (0x0007e553) cntbar_detail_btn_pane_cp01_ParamLimits

0xa3eb,	// (0x0007e553) cntbar_detail_btn_pane_cp01

0xa411,	// (0x0007e579) cntbar_detail_list_shct_pane_ParamLimits

0xa421,	// (0x0007e589) cntbar_detail_pane_g1_ParamLimits

0xa421,	// (0x0007e589) cntbar_detail_pane_g1

0xa431,	// (0x0007e599) cntbar_detail_pane_t1_ParamLimits

0xa431,	// (0x0007e599) cntbar_detail_pane_t1

0xa4c1,	// (0x0007e629) cntbar_detail_list_event_pane_g3_ParamLimits

0xa4c1,	// (0x0007e629) cntbar_detail_list_event_pane_g3

0xa4d9,	// (0x0007e641) cntbar_detail_list_event_pane_g4_ParamLimits

0xa4d9,	// (0x0007e641) cntbar_detail_list_event_pane_g4

0xa4f1,	// (0x0007e659) cntbar_detail_list_event_pane_g5_ParamLimits

0xa4f1,	// (0x0007e659) cntbar_detail_list_event_pane_g5

0xa509,	// (0x0007e671) cntbar_detail_list_event_pane_g6_ParamLimits

0xa509,	// (0x0007e671) cntbar_detail_list_event_pane_g6

0xa54b,	// (0x0007e6b3) cntbar_detail_list_event_pane_t3_ParamLimits

0xa54b,	// (0x0007e6b3) cntbar_detail_list_event_pane_t3

0xa55d,	// (0x0007e6c5) popup_notif_wgt_window_ParamLimits

0xa55d,	// (0x0007e6c5) popup_notif_wgt_window

0xa576,	// (0x0007e6de) popup_submenu_window_cp01_ParamLimits

0xa576,	// (0x0007e6de) popup_submenu_window_cp01

0x4244,	// (0x000783ac) bg_popup_window_pane_cp10

0xe250,	// (0x000823b8) listscroll_notif_wgt_pane

0xe25a,	// (0x000823c2) list_notif_wgt_window

0xe263,	// (0x000823cb) scroll_pane_cp033

0xe26c,	// (0x000823d4) list_notif_wgt_row_pane_ParamLimits

0xe26c,	// (0x000823d4) list_notif_wgt_row_pane

0xe280,	// (0x000823e8) aid_size_list_notif_wgt_del

0xe289,	// (0x000823f1) list_notif_wgt_row_pane_g1

0xe291,	// (0x000823f9) list_notif_wgt_row_pane_g2

0xe299,	// (0x00082401) list_notif_wgt_row_pane_g3

0x0002,

0xfeb3,	// (0x0008401b) list_notif_wgt_row_pane_g

0xe2a2,	// (0x0008240a) list_notif_wgt_row_pane_t1

0xe2b0,	// (0x00082418) list_notif_wgt_row_pane_t2

0xe2be,	// (0x00082426) list_notif_wgt_row_pane_t3

0x0002,

0xfeba,	// (0x00084022) list_notif_wgt_row_pane_t

0xc895,	// (0x000809fd) list_recal_day_event_pane_g1

0xe2cc,	// (0x00082434) list_recal_day_event_pane_t1

0xab43,	// (0x0007ecab) bg_button_pane_cp045

0xe2db,	// (0x00082443) cntbar_detail_btn_pane_t1

0xb687,	// (0x0007f7ef) main_callh_pane_ParamLimits

0xb687,	// (0x0007f7ef) main_callh_pane

0xab43,	// (0x0007ecab) main_coverflow0_pane

0xab43,	// (0x0007ecab) main_wgtman_pane

0x9b7d,	// (0x0007dce5) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x9b7d,	// (0x0007dce5) main_fs_bigclock_unlock_btn_pane

0xdb0d,	// (0x00081c75) bg_button_pane_cp16

0xdb1d,	// (0x00081c85) cell_tport_appsw_pane_g3

0xa588,	// (0x0007e6f0) cf0_flow_pane_ParamLimits

0xa588,	// (0x0007e6f0) cf0_flow_pane

0xe2e9,	// (0x00082451) listscroll_cf0_pane

0xe2f2,	// (0x0008245a) main_cf0_pane_g1

0xa59d,	// (0x0007e705) main_cf0_pane_t1_ParamLimits

0xa59d,	// (0x0007e705) main_cf0_pane_t1

0xa5b4,	// (0x0007e71c) main_cf0_pane_t2_ParamLimits

0xa5b4,	// (0x0007e71c) main_cf0_pane_t2

0x0001,

0xfec1,	// (0x00084029) main_cf0_pane_t_ParamLimits

0xfec1,	// (0x00084029) main_cf0_pane_t

0xe2fc,	// (0x00082464) scroll_pane_cp11

0xa5cb,	// (0x0007e733) cf0_flow_pane_g1

0xa5d3,	// (0x0007e73b) cf0_flow_pane_g2

0x0001,

0xfec6,	// (0x0008402e) cf0_flow_pane_g

0xa5db,	// (0x0007e743) cf0_flow_pane_t1

0xab43,	// (0x0007ecab) main_call6_pane

0xab43,	// (0x0007ecab) main_calllock_pane

0xa5e9,	// (0x0007e751) call6_btn_grp_pane_ParamLimits

0xa5e9,	// (0x0007e751) call6_btn_grp_pane

0xa603,	// (0x0007e76b) call6_pane_g1_ParamLimits

0xa603,	// (0x0007e76b) call6_pane_g1

0xa618,	// (0x0007e780) popup_call6_1st_window_ParamLimits

0xa618,	// (0x0007e780) popup_call6_1st_window

0xa629,	// (0x0007e791) popup_call6_2nd_window_ParamLimits

0xa629,	// (0x0007e791) popup_call6_2nd_window

0xa63a,	// (0x0007e7a2) cell_call6_btn_pane_ParamLimits

0xa63a,	// (0x0007e7a2) cell_call6_btn_pane

0x4244,	// (0x000783ac) bg_popup_call2_in_pane_cp03

0xe307,	// (0x0008246f) popup_call6_1st_window_g1

0xe30f,	// (0x00082477) popup_call6_1st_window_g2

0xe317,	// (0x0008247f) popup_call6_1st_window_g3

0x0002,

0xfecb,	// (0x00084033) popup_call6_1st_window_g

0xe31f,	// (0x00082487) popup_call6_1st_window_t1

0xe32e,	// (0x00082496) popup_call6_1st_window_t2

0xe33e,	// (0x000824a6) popup_call6_1st_window_t3

0x0002,

0xfed2,	// (0x0008403a) popup_call6_1st_window_t

0x4244,	// (0x000783ac) bg_popup_call2_in_pane_cp04

0xe307,	// (0x0008246f) popup_call6_2nd_window_g1

0xe30f,	// (0x00082477) popup_call6_2nd_window_g2

0xe317,	// (0x0008247f) popup_call6_2nd_window_g3

0x0002,

0xfecb,	// (0x00084033) popup_call6_2nd_window_g

0xe31f,	// (0x00082487) popup_call6_2nd_window_t1

0xab43,	// (0x0007ecab) bg_button_pane_cp15

0xe34e,	// (0x000824b6) cell_call6_btn_pane_g1

0xe357,	// (0x000824bf) cell_call6_btn_pane_t1

0xa64e,	// (0x0007e7b6) listscroll_wgtman_pane_ParamLimits

0xa64e,	// (0x0007e7b6) listscroll_wgtman_pane

0xa671,	// (0x0007e7d9) wgtman_btn_pane_ParamLimits

0xa671,	// (0x0007e7d9) wgtman_btn_pane

0x3e0b,	// (0x00077f73) aid_scroll_copy1

0xe366,	// (0x000824ce) list_wgtman_pane

0xa6b4,	// (0x0007e81c) wgtman_btn_pane_g1_ParamLimits

0xa6b4,	// (0x0007e81c) wgtman_btn_pane_g1

0xa6e0,	// (0x0007e848) wgtman_btn_pane_t1_ParamLimits

0xa6e0,	// (0x0007e848) wgtman_btn_pane_t1

0xe370,	// (0x000824d8) wgtman_btn_pane_t2_ParamLimits

0xe370,	// (0x000824d8) wgtman_btn_pane_t2

0x0001,

0xfed9,	// (0x00084041) wgtman_btn_pane_t_ParamLimits

0xfed9,	// (0x00084041) wgtman_btn_pane_t

0xa71d,	// (0x0007e885) listrow_wgtman_pane_ParamLimits

0xa71d,	// (0x0007e885) listrow_wgtman_pane

0xa730,	// (0x0007e898) listrow_wgtman_pane_g1

0xa739,	// (0x0007e8a1) listrow_wgtman_pane_g2

0x0001,

0xfede,	// (0x00084046) listrow_wgtman_pane_g

0x174a,	// (0x000758b2) listrow_wgtman_pane_t1

0x1758,	// (0x000758c0) listrow_wgtman_pane_t2

0x0001,

0xfee3,	// (0x0008404b) listrow_wgtman_pane_t

0x1766,	// (0x000758ce) wait_bar_pane_cp09

0xe387,	// (0x000824ef) main_calllock_btn_pane

0xe391,	// (0x000824f9) main_calllock_pane_g1

0xab43,	// (0x0007ecab) bg_button_pane_cp17

0xe39c,	// (0x00082504) main_calllock_btn_pane_g1

0xe3a5,	// (0x0008250d) main_calllock_btn_pane_t1

0xab43,	// (0x0007ecab) main_dialer3_pane

0xab43,	// (0x0007ecab) main_fmrd2_pane

0xbb8f,	// (0x0007fcf7) main_fs_bigclock_unlock_btn_pane_g1

0xe3bc,	// (0x00082524) main_fs_bigclock_unlock_btn_pane_t1

0xa743,	// (0x0007e8ab) area_fmrd2_info_pane_ParamLimits

0xa743,	// (0x0007e8ab) area_fmrd2_info_pane

0xa754,	// (0x0007e8bc) area_fmrd2_visual_pane_ParamLimits

0xa754,	// (0x0007e8bc) area_fmrd2_visual_pane

0xa762,	// (0x0007e8ca) fmrd2_indi_pane_ParamLimits

0xa762,	// (0x0007e8ca) fmrd2_indi_pane

0xa76f,	// (0x0007e8d7) area_fmrd2_visual_pane_g1

0xa777,	// (0x0007e8df) area_fmrd2_visual_pane_t1

0xa787,	// (0x0007e8ef) area_fmrd2_visual_pane_t2

0xa797,	// (0x0007e8ff) area_fmrd2_visual_pane_t3

0x0002,

0xfeed,	// (0x00084055) area_fmrd2_visual_pane_t

0xa7a7,	// (0x0007e90f) area_fmrd2_info_pane_g1

0xa7af,	// (0x0007e917) area_fmrd2_info_pane_t1

0xa7bf,	// (0x0007e927) area_fmrd2_info_pane_t2

0xa7cf,	// (0x0007e937) area_fmrd2_info_pane_t3

0xa7df,	// (0x0007e947) area_fmrd2_info_pane_t4

0x0003,

0xfef4,	// (0x0008405c) area_fmrd2_info_pane_t

0xa7ed,	// (0x0007e955) fmrd2_indi_pane_t1

0xa7fd,	// (0x0007e965) fmrd2_indi_pane_t2

0xa80d,	// (0x0007e975) fmrd2_indi_pane_t3

0x0002,

0xfefd,	// (0x00084065) fmrd2_indi_pane_t

0xd58f,	// (0x000816f7) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xd58f,	// (0x000816f7) list_single_fs_bigclock_indicator_pane_g5

0xd633,	// (0x0008179b) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xd633,	// (0x0008179b) list_single_fs_bigclock_indicator_pane_t5

0xa0c0,	// (0x0007e228) aid_cell_bcale_month_pane_ParamLimits

0xa0c0,	// (0x0007e228) aid_cell_bcale_month_pane

0xa0d2,	// (0x0007e23a) bcale_month_pane_ParamLimits

0xa0d2,	// (0x0007e23a) bcale_month_pane

0xa0ec,	// (0x0007e254) bcale_preview_pane_ParamLimits

0xa0ec,	// (0x0007e254) bcale_preview_pane

0xe144,	// (0x000822ac) list_single_fs_bigclock_pane_t1_ParamLimits

0xe15e,	// (0x000822c6) list_single_fs_bigclock_pane_t2_ParamLimits

0xe15e,	// (0x000822c6) list_single_fs_bigclock_pane_t2

0x0001,

0xfe84,	// (0x00083fec) list_single_fs_bigclock_pane_t_ParamLimits

0xfe84,	// (0x00083fec) list_single_fs_bigclock_pane_t

0xe3b4,	// (0x0008251c) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfee8,	// (0x00084050) main_fs_bigclock_unlock_btn_pane_g

0xa81d,	// (0x0007e985) aid_dia3_key_size_ParamLimits

0xa81d,	// (0x0007e985) aid_dia3_key_size

0xa82c,	// (0x0007e994) aid_dia3_listrow_size_ParamLimits

0xa82c,	// (0x0007e994) aid_dia3_listrow_size

0xa841,	// (0x0007e9a9) dia3_keypad_fun_pane_ParamLimits

0xa841,	// (0x0007e9a9) dia3_keypad_fun_pane

0xa85d,	// (0x0007e9c5) dia3_keypad_num_pane_ParamLimits

0xa85d,	// (0x0007e9c5) dia3_keypad_num_pane

0xa878,	// (0x0007e9e0) dia3_listscroll_pane_ParamLimits

0xa878,	// (0x0007e9e0) dia3_listscroll_pane

0xa88b,	// (0x0007e9f3) dia3_numentry_pane_ParamLimits

0xa88b,	// (0x0007e9f3) dia3_numentry_pane

0xe3ca,	// (0x00082532) dia3_list_pane

0xe3d5,	// (0x0008253d) scroll_pane_cp12

0xab43,	// (0x0007ecab) bg_dia3_numentry_pane

0xa89f,	// (0x0007ea07) dia3_numentry_pane_t1

0xa8ae,	// (0x0007ea16) cell_dia3_key_num_pane

0xa8b6,	// (0x0007ea1e) cell_dia3_key0_fun_pane_ParamLimits

0xa8b6,	// (0x0007ea1e) cell_dia3_key0_fun_pane

0xa8ca,	// (0x0007ea32) cell_dia3_key1_fun_pane_ParamLimits

0xa8ca,	// (0x0007ea32) cell_dia3_key1_fun_pane

0xa8e2,	// (0x0007ea4a) dia3_listrow_pane

0xd29b,	// (0x00081403) bg_dia3_numentry_pane_g1

0xab43,	// (0x0007ecab) bg_button_pane_cp21

0xe3e0,	// (0x00082548) cell_dia3_key_num_pane_t1

0xe3ee,	// (0x00082556) cell_dia3_key_num_pane_t2

0xe3fd,	// (0x00082565) cell_dia3_key_num_pane_t3

0xe40c,	// (0x00082574) cell_dia3_key_num_pane_t4

0x0003,

0xff04,	// (0x0008406c) cell_dia3_key_num_pane_t

0xab43,	// (0x0007ecab) bg_button_pane_cp19

0xa8f4,	// (0x0007ea5c) cell_dia3_key0_fun_pane_g1

0xab43,	// (0x0007ecab) bg_button_pane_cp20

0xa8fc,	// (0x0007ea64) cell_dia3_key1_fun_pane_g1

0xa904,	// (0x0007ea6c) area_left_week_number_pane

0xe41b,	// (0x00082583) area_top_day_name_pane

0xa90d,	// (0x0007ea75) frame_month_view_pane

0xa915,	// (0x0007ea7d) grid_month_view_pane

0xa91f,	// (0x0007ea87) cell_top_day_name_pane_ParamLimits

0xa91f,	// (0x0007ea87) cell_top_day_name_pane

0xa212,	// (0x0007e37a) cell_area_left_week_number_pane_ParamLimits

0xa212,	// (0x0007e37a) cell_area_left_week_number_pane

0xa935,	// (0x0007ea9d) cell_month_view_pane_ParamLimits

0xa935,	// (0x0007ea9d) cell_month_view_pane

0xe424,	// (0x0008258c) frm_month_g1

0xa950,	// (0x0007eab8) frm_month_g2

0xa958,	// (0x0007eac0) frm_month_g3

0xa960,	// (0x0007eac8) frm_month_g4

0xa968,	// (0x0007ead0) frm_month_g5

0xa970,	// (0x0007ead8) frm_month_g6

0xa978,	// (0x0007eae0) frm_month_g7

0xe42d,	// (0x00082595) frm_month_g8

0xa980,	// (0x0007eae8) frm_month_g9

0xa989,	// (0x0007eaf1) frm_month_g10

0xa992,	// (0x0007eafa) frm_month_g11

0xa99b,	// (0x0007eb03) frm_month_g12

0xa9a4,	// (0x0007eb0c) frm_month_g13

0xa9ad,	// (0x0007eb15) frm_month_g14

0xa9b6,	// (0x0007eb1e) frm_month_g15

0xa9bf,	// (0x0007eb27) frm_month_g16

0x000f,

0xff0d,	// (0x00084075) frm_month_g

0xa9c8,	// (0x0007eb30) cell_top_day_name_pane_t1

0xa9d7,	// (0x0007eb3f) cell_area_left_week_number_pane_g1

0xa9c8,	// (0x0007eb30) cell_area_left_week_number_pane_t1

0xbb8f,	// (0x0007fcf7) cell_month_view_pane_g1

0xa9df,	// (0x0007eb47) cell_month_view_pane_t1

0xab43,	// (0x0007ecab) main_fps_pane

0xd862,	// (0x000819ca) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xd862,	// (0x000819ca) cmail_ddmenu_btn02_pane_cp1

0xd87e,	// (0x000819e6) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xd87e,	// (0x000819e6) cmail_ddmenu_btn02_pane_cp2

0xa2c6,	// (0x0007e42e) cmail_ddmenu_btn02_pane_g2_ParamLimits

0xa2c6,	// (0x0007e42e) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfe35,	// (0x00083f9d) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfe35,	// (0x00083f9d) cmail_ddmenu_btn02_pane_g

0xa2e4,	// (0x0007e44c) cmail_ddmenu_btn02_pane_t2_ParamLimits

0xa2e4,	// (0x0007e44c) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfe3a,	// (0x00083fa2) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfe3a,	// (0x00083fa2) cmail_ddmenu_btn02_pane_t

0xa9ee,	// (0x0007eb56) fps_text_pane_ParamLimits

0xa9ee,	// (0x0007eb56) fps_text_pane

0xaa05,	// (0x0007eb6d) main_fps_pane_g1_ParamLimits

0xaa05,	// (0x0007eb6d) main_fps_pane_g1

0xaa1f,	// (0x0007eb87) wait_bar_pane_cp010_ParamLimits

0xaa1f,	// (0x0007eb87) wait_bar_pane_cp010

0xaa30,	// (0x0007eb98) fps_text_pane_t1_ParamLimits

0xaa30,	// (0x0007eb98) fps_text_pane_t1

0xc59a,	// (0x00080702) cam4_image_uncrop_pane_g1

0xc5a3,	// (0x0008070b) cam4_image_uncrop_pane_g2

0x804a,	// (0x0007c1b2) cam4_image_uncrop_pane_g3

0x8053,	// (0x0007c1bb) cam4_image_uncrop_pane_g4

0x0003,

0xf908,	// (0x00083a70) cam4_image_uncrop_pane_g

0xa8e2,	// (0x0007ea4a) dia3_listrow_pane_ParamLimits

0xab43,	// (0x0007ecab) main_phob2_pane

0x9f20,	// (0x0007e088) cell_tport_appsw_pane_cp02_ParamLimits

0x9f20,	// (0x0007e088) cell_tport_appsw_pane_cp02

0x9f34,	// (0x0007e09c) cell_tport_appsw_pane_cp03_ParamLimits

0x9f34,	// (0x0007e09c) cell_tport_appsw_pane_cp03

0xab43,	// (0x0007ecab) phob2_contact_card_pane

0xab43,	// (0x0007ecab) phob2_listscroll_pane

0xe436,	// (0x0008259e) phob2_list_pane

0xe43e,	// (0x000825a6) scroll_pane_cp034

0xaa48,	// (0x0007ebb0) phob2_cc_data_pane_ParamLimits

0xaa48,	// (0x0007ebb0) phob2_cc_data_pane

0xaa67,	// (0x0007ebcf) phob2_cc_listscroll_pane_ParamLimits

0xaa67,	// (0x0007ebcf) phob2_cc_listscroll_pane

0xc660,	// (0x000807c8) list_double_large_graphic_phob2_pane_ParamLimits

0xc660,	// (0x000807c8) list_double_large_graphic_phob2_pane

0xaa85,	// (0x0007ebed) list_double_large_graphic_phob2_pane_g1_ParamLimits

0xaa85,	// (0x0007ebed) list_double_large_graphic_phob2_pane_g1

0x176e,	// (0x000758d6) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x176e,	// (0x000758d6) list_double_large_graphic_phob2_pane_g2

0x0001,

0xff2e,	// (0x00084096) list_double_large_graphic_phob2_pane_g_ParamLimits

0xff2e,	// (0x00084096) list_double_large_graphic_phob2_pane_g

0x177a,	// (0x000758e2) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x177a,	// (0x000758e2) list_double_large_graphic_phob2_pane_t1

0x178f,	// (0x000758f7) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x178f,	// (0x000758f7) list_double_large_graphic_phob2_pane_t2

0x0001,

0xff33,	// (0x0008409b) list_double_large_graphic_phob2_pane_t_ParamLimits

0xff33,	// (0x0008409b) list_double_large_graphic_phob2_pane_t

0xab43,	// (0x0007ecab) list_highlight_pane_cp024

0xe446,	// (0x000825ae) phob2_cc_button_pane

0xaa92,	// (0x0007ebfa) phob2_cc_data_pane_g1_ParamLimits

0xaa92,	// (0x0007ebfa) phob2_cc_data_pane_g1

0xaaa7,	// (0x0007ec0f) phob2_cc_data_pane_g2_ParamLimits

0xaaa7,	// (0x0007ec0f) phob2_cc_data_pane_g2

0x0001,

0xff38,	// (0x000840a0) phob2_cc_data_pane_g_ParamLimits

0xff38,	// (0x000840a0) phob2_cc_data_pane_g

0xaab9,	// (0x0007ec21) phob2_cc_data_pane_t1_ParamLimits

0xaab9,	// (0x0007ec21) phob2_cc_data_pane_t1

0xaad1,	// (0x0007ec39) phob2_cc_data_pane_t2_ParamLimits

0xaad1,	// (0x0007ec39) phob2_cc_data_pane_t2

0xaae9,	// (0x0007ec51) phob2_cc_data_pane_t3_ParamLimits

0xaae9,	// (0x0007ec51) phob2_cc_data_pane_t3

0x0002,

0xff3d,	// (0x000840a5) phob2_cc_data_pane_t_ParamLimits

0xff3d,	// (0x000840a5) phob2_cc_data_pane_t

0xe44e,	// (0x000825b6) phob2_cc_list_pane_ParamLimits

0xe44e,	// (0x000825b6) phob2_cc_list_pane

0xc940,	// (0x00080aa8) scroll_pane_cp035_ParamLimits

0xc940,	// (0x00080aa8) scroll_pane_cp035

0xe93a,	// (0x00082aa2) bg_button_pane_cp033

0xe45a,	// (0x000825c2) phob2_cc_button_pane_g1

0xe466,	// (0x000825ce) phob2_cc_button_pane_t1

0xe47b,	// (0x000825e3) phob2_cc_button_pane_t2

0x0001,

0xff44,	// (0x000840ac) phob2_cc_button_pane_t

0xab03,	// (0x0007ec6b) list_double_large_graphic_phob2_cc_pane_ParamLimits

0xab03,	// (0x0007ec6b) list_double_large_graphic_phob2_cc_pane

0xab17,	// (0x0007ec7f) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0xab17,	// (0x0007ec7f) list_double_large_graphic_phob2_cc_pane_g1

0xab23,	// (0x0007ec8b) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0xab23,	// (0x0007ec8b) list_double_large_graphic_phob2_cc_pane_g2

0xab2f,	// (0x0007ec97) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0xab2f,	// (0x0007ec97) list_double_large_graphic_phob2_cc_pane_g3

0x17a1,	// (0x00075909) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x17a1,	// (0x00075909) list_double_large_graphic_phob2_cc_pane_g4

0x17ad,	// (0x00075915) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x17ad,	// (0x00075915) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xff49,	// (0x000840b1) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xff49,	// (0x000840b1) list_double_large_graphic_phob2_cc_pane_g

0x17b9,	// (0x00075921) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x17b9,	// (0x00075921) list_double_large_graphic_phob2_cc_pane_t1

0x17e2,	// (0x0007594a) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x17e2,	// (0x0007594a) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xff54,	// (0x000840bc) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xff54,	// (0x000840bc) list_double_large_graphic_phob2_cc_pane_t

0xe48d,	// (0x000825f5) list_highlight_pane_cp025_ParamLimits

0xe48d,	// (0x000825f5) list_highlight_pane_cp025

0xe93a,	// (0x00082aa2) bg_button_pane_cp033_ParamLimits

0xe45a,	// (0x000825c2) phob2_cc_button_pane_g1_ParamLimits

0xe466,	// (0x000825ce) phob2_cc_button_pane_t1_ParamLimits

0xe47b,	// (0x000825e3) phob2_cc_button_pane_t2_ParamLimits

0xff44,	// (0x000840ac) phob2_cc_button_pane_t_ParamLimits

0x1a25,	// (0x00075b8d) popup_wgtman_window

0xc742,	// (0x000808aa) scroll_pane_cp038

0xa696,	// (0x0007e7fe) wgtman_btn_pane_cp_01_ParamLimits

0xa696,	// (0x0007e7fe) wgtman_btn_pane_cp_01

0xe49b,	// (0x00082603) wgtman_content_pane

0xe1e3,	// (0x0008234b) wgtman_heading_pane

0xab43,	// (0x0007ecab) bg_heading_pane_cp02

0xe4a4,	// (0x0008260c) wgtman_heading_pane_g1

0xe4ac,	// (0x00082614) wgtman_heading_pane_t1

0xe4ba,	// (0x00082622) scroll_pane_cp036

0xe4c2,	// (0x0008262a) wgtman_list_pane

0xe4ca,	// (0x00082632) wgtman_list_pane_t1_ParamLimits

0xe4ca,	// (0x00082632) wgtman_list_pane_t1

0xe795,	// (0x000828fd) cam4_grid_pane

0x1068,	// (0x000751d0) bg_button_pane_cp015_ParamLimits

0x8cd1,	// (0x0007ce39) bg_button_pane_cp016_ParamLimits

0x8ce4,	// (0x0007ce4c) bg_button_pane_cp017_ParamLimits

0x109d,	// (0x00075205) popup_vitu2_query_window_g3_ParamLimits

0x109d,	// (0x00075205) popup_vitu2_query_window_g3

0x1118,	// (0x00075280) popup_vitu2_query_window_t6_ParamLimits

0x1118,	// (0x00075280) popup_vitu2_query_window_t6

0x1143,	// (0x000752ab) popup_vitu2_query_window_t7_ParamLimits

0x1143,	// (0x000752ab) popup_vitu2_query_window_t7

0xc59a,	// (0x00080702) cam4_grid_pane_g1

0xc5a3,	// (0x0008070b) cam4_grid_pane_g2

0xe4e8,	// (0x00082650) cam4_grid_pane_g3

0xe4f1,	// (0x00082659) cam4_grid_pane_g4

0x0003,

0xff59,	// (0x000840c1) cam4_grid_pane_g

0x2848,	// (0x000769b0) aid_placing_vt_slider_lsc_ParamLimits

0x2b93,	// (0x00076cfb) vidtel_button_pane_ParamLimits

0x2b93,	// (0x00076cfb) vidtel_button_pane

0xab43,	// (0x0007ecab) bg_button_pane_cp034

0xab3b,	// (0x0007eca3) vidtel_button_pane_g1

0xe4fc,	// (0x00082664) vidtel_button_pane_t1

0xc85f,	// (0x000809c7) aid_size_vtel_slider_touch

0xc940,	// (0x00080aa8) scroll_pane_cp039

0xd2d9,	// (0x00081441) ncim_query_button_pane_cp01_ParamLimits

0xd2f8,	// (0x00081460) ncimui_query_pane_g1_ParamLimits

0xe93a,	// (0x00082aa2) input_focus_pane_cp012_ParamLimits

0xd31d,	// (0x00081485) ncim_query_entry_pane_t1_ParamLimits

0xc940,	// (0x00080aa8) scroll_pane_cp039_ParamLimits
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

} // end of namespace AknLayoutScalable_Elaf_pnl4_apps_nhd4_lsc_tch_Large
