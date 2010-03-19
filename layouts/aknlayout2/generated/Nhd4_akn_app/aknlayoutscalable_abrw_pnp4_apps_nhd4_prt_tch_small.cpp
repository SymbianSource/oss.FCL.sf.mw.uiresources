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

#include "aknlayoutscalable_abrw_pnp4_apps_nhd4_prt_tch_small.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pnp4_apps_nhd4_prt_tch[]; }

namespace AknLayoutScalable_Abrw_pnp4_apps_nhd4_prt_tch_Small
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pnp4_apps_nhd4_prt_tch + 0x0004bd76 };

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
0x5b4b,	// (0x000518c1) Screen

0x5b57,	// (0x000518cd) application_window

0x5b97,	// (0x0005190d) area_bottom_pane_ParamLimits

0x5b97,	// (0x0005190d) area_bottom_pane

0x5bcc,	// (0x00051942) area_top_pane_ParamLimits

0x5bcc,	// (0x00051942) area_top_pane

0x1b6d,	// (0x0004d8e3) call_video_uplink_pane_ParamLimits

0x1b6d,	// (0x0004d8e3) call_video_uplink_pane

0x5c59,	// (0x000519cf) main_pane_ParamLimits

0x5c59,	// (0x000519cf) main_pane

0x4228,	// (0x0004ff9e) context_pane

0x8e34,	// (0x00054baa) navi_pane

0x8e54,	// (0x00054bca) popup_cale_events_window_ParamLimits

0x8e54,	// (0x00054bca) popup_cale_events_window

0x423b,	// (0x0004ffb1) popup_mup_playback_window

0x8e6c,	// (0x00054be2) signal_pane

0x2306,	// (0x0004e07c) main_browser_pane

0x2d8e,	// (0x0004eb04) main_burst_pane

0x8d0a,	// (0x00054a80) main_calc_pane

0x2d8e,	// (0x0004eb04) main_cale_day_pane

0x2306,	// (0x0004e07c) main_cale_month_pane

0x2d8e,	// (0x0004eb04) main_cale_week_pane

0x2d8e,	// (0x0004eb04) main_call_pane

0x1f9c,	// (0x0004dd12) main_call_poc_pane

0x2d8e,	// (0x0004eb04) main_camera_pane

0x2d8e,	// (0x0004eb04) main_chi_dic_pane

0x2c1d,	// (0x0004e993) main_clock_pane

0x1f9c,	// (0x0004dd12) main_fmradio_pane

0x2d8e,	// (0x0004eb04) main_graph_messa_pane

0x1f9c,	// (0x0004dd12) main_help_pane

0x2306,	// (0x0004e07c) main_im_pane

0x21f7,	// (0x0004df6d) main_image_pane_ParamLimits

0x21f7,	// (0x0004df6d) main_image_pane

0x1f9c,	// (0x0004dd12) main_location2_pane

0x2d8e,	// (0x0004eb04) main_location_pane

0x1f9c,	// (0x0004dd12) main_messa_pane

0x1f9c,	// (0x0004dd12) main_mp2_pane

0x2d8e,	// (0x0004eb04) main_mp_pane

0x1f9c,	// (0x0004dd12) main_msg_pane

0x1f9c,	// (0x0004dd12) main_mup_eq_pane

0x1f9c,	// (0x0004dd12) main_mup_pane

0x2d8e,	// (0x0004eb04) main_notes_pane

0x1f9c,	// (0x0004dd12) main_pec_pane

0x1f9c,	// (0x0004dd12) main_phob_pane

0x1f9c,	// (0x0004dd12) main_pinb_pane

0x1f9c,	// (0x0004dd12) main_postcard_pane

0x1f9c,	// (0x0004dd12) main_qdial_pane

0x2d8e,	// (0x0004eb04) main_skin_pane

0x1f9c,	// (0x0004dd12) main_smil2_pane

0x2d8e,	// (0x0004eb04) main_smil_pane

0x2d8e,	// (0x0004eb04) main_video_pane

0x2d8e,	// (0x0004eb04) main_video_tele_pane

0x21f7,	// (0x0004df6d) main_viewer_pane_ParamLimits

0x21f7,	// (0x0004df6d) main_viewer_pane

0x2d8e,	// (0x0004eb04) main_vorec_pane

0x8d40,	// (0x00054ab6) popup_blid_sat_info_window_ParamLimits

0x8d40,	// (0x00054ab6) popup_blid_sat_info_window

0x8d56,	// (0x00054acc) popup_dyc_status_message_window_ParamLimits

0x8d56,	// (0x00054acc) popup_dyc_status_message_window

0x8d64,	// (0x00054ada) popup_grid_large_graphic_window_ParamLimits

0x8d64,	// (0x00054ada) popup_grid_large_graphic_window

0x8dd8,	// (0x00054b4e) popup_loc_request_window_ParamLimits

0x8dd8,	// (0x00054b4e) popup_loc_request_window

0x8e0c,	// (0x00054b82) popup_wml_address_window_ParamLimits

0x8e0c,	// (0x00054b82) popup_wml_address_window

0x8be2,	// (0x00054958) call_muted_g1

0x88a1,	// (0x00054617) popup_call_audio_conf_window_ParamLimits

0x88a1,	// (0x00054617) popup_call_audio_conf_window

0x8bf2,	// (0x00054968) popup_call_audio_first_window_ParamLimits

0x8bf2,	// (0x00054968) popup_call_audio_first_window

0x8c32,	// (0x000549a8) popup_call_audio_in_window_ParamLimits

0x8c32,	// (0x000549a8) popup_call_audio_in_window

0x8c56,	// (0x000549cc) popup_call_audio_out_window_ParamLimits

0x8c56,	// (0x000549cc) popup_call_audio_out_window

0x8c78,	// (0x000549ee) popup_call_audio_second_window_ParamLimits

0x8c78,	// (0x000549ee) popup_call_audio_second_window

0x8ca8,	// (0x00054a1e) popup_call_audio_wait_window_ParamLimits

0x8ca8,	// (0x00054a1e) popup_call_audio_wait_window

0x8cc9,	// (0x00054a3f) popup_number_entry_window_ParamLimits

0x8cc9,	// (0x00054a3f) popup_number_entry_window

0x1b8b,	// (0x0004d901) bg_popup_call_pane_cp05_ParamLimits

0x1b8b,	// (0x0004d901) bg_popup_call_pane_cp05

0x1bab,	// (0x0004d921) popup_number_entry_window_t1

0x1bbe,	// (0x0004d934) popup_number_entry_window_t2

0x1bd0,	// (0x0004d946) popup_number_entry_window_t3

0x0003,

0xf0ec,	// (0x0005ae62) popup_number_entry_window_t

0x1be2,	// (0x0004d958) text_title_cp2

0x1bf5,	// (0x0004d96b) bg_popup_call_pane_cp_ParamLimits

0x1bf5,	// (0x0004d96b) bg_popup_call_pane_cp

0x1c03,	// (0x0004d979) call_thumbnail_pane

0x1c0b,	// (0x0004d981) popup_call_audio_in_window_g1_ParamLimits

0x1c0b,	// (0x0004d981) popup_call_audio_in_window_g1

0x1c17,	// (0x0004d98d) popup_call_audio_in_window_g2_ParamLimits

0x1c17,	// (0x0004d98d) popup_call_audio_in_window_g2

0x1c23,	// (0x0004d999) popup_call_audio_in_window_g3_ParamLimits

0x1c23,	// (0x0004d999) popup_call_audio_in_window_g3

0x0002,

0xf0f5,	// (0x0005ae6b) popup_call_audio_in_window_g_ParamLimits

0xf0f5,	// (0x0005ae6b) popup_call_audio_in_window_g

0x1c2f,	// (0x0004d9a5) popup_call_audio_in_window_t1_ParamLimits

0x1c2f,	// (0x0004d9a5) popup_call_audio_in_window_t1

0x1c4a,	// (0x0004d9c0) popup_call_audio_in_window_t2_ParamLimits

0x1c4a,	// (0x0004d9c0) popup_call_audio_in_window_t2

0x1c65,	// (0x0004d9db) popup_call_audio_in_window_t3_ParamLimits

0x1c65,	// (0x0004d9db) popup_call_audio_in_window_t3

0x0002,

0xf0fc,	// (0x0005ae72) popup_call_audio_in_window_t_ParamLimits

0xf0fc,	// (0x0005ae72) popup_call_audio_in_window_t

0x1bf5,	// (0x0004d96b) bg_popup_call_pane_cp01_ParamLimits

0x1bf5,	// (0x0004d96b) bg_popup_call_pane_cp01

0x1c03,	// (0x0004d979) call_thumbnail_pane_cp02

0x1c78,	// (0x0004d9ee) call_type_pane_cp022

0x1c80,	// (0x0004d9f6) popup_call_audio_out_window_g1_ParamLimits

0x1c80,	// (0x0004d9f6) popup_call_audio_out_window_g1

0x1c92,	// (0x0004da08) popup_call_audio_out_window_g2_ParamLimits

0x1c92,	// (0x0004da08) popup_call_audio_out_window_g2

0x1c9e,	// (0x0004da14) popup_call_audio_out_window_g3_ParamLimits

0x1c9e,	// (0x0004da14) popup_call_audio_out_window_g3

0x0002,

0xf103,	// (0x0005ae79) popup_call_audio_out_window_g_ParamLimits

0xf103,	// (0x0005ae79) popup_call_audio_out_window_g

0x1cb0,	// (0x0004da26) popup_call_audio_out_window_t1_ParamLimits

0x1cb0,	// (0x0004da26) popup_call_audio_out_window_t1

0x1cc8,	// (0x0004da3e) popup_call_audio_out_window_t2_ParamLimits

0x1cc8,	// (0x0004da3e) popup_call_audio_out_window_t2

0x0001,

0xf10a,	// (0x0005ae80) popup_call_audio_out_window_t_ParamLimits

0xf10a,	// (0x0005ae80) popup_call_audio_out_window_t

0x1cdd,	// (0x0004da53) bg_popup_call_pane_ParamLimits

0x1cdd,	// (0x0004da53) bg_popup_call_pane

0x5e4c,	// (0x00051bc2) call_thumbnail_pane_cp_ParamLimits

0x5e4c,	// (0x00051bc2) call_thumbnail_pane_cp

0x1d61,	// (0x0004dad7) call_type_pane_cp01_ParamLimits

0x1d61,	// (0x0004dad7) call_type_pane_cp01

0x1da5,	// (0x0004db1b) popup_call_audio_first_window_g1_ParamLimits

0x1da5,	// (0x0004db1b) popup_call_audio_first_window_g1

0x1df1,	// (0x0004db67) popup_call_audio_first_window_g2_ParamLimits

0x1df1,	// (0x0004db67) popup_call_audio_first_window_g2

0x0001,

0xf10f,	// (0x0005ae85) popup_call_audio_first_window_g_ParamLimits

0xf10f,	// (0x0005ae85) popup_call_audio_first_window_g

0x1e35,	// (0x0004dbab) popup_call_audio_first_window_t1_ParamLimits

0x1e35,	// (0x0004dbab) popup_call_audio_first_window_t1

0x1ee1,	// (0x0004dc57) popup_call_audio_first_window_t4_ParamLimits

0x1ee1,	// (0x0004dc57) popup_call_audio_first_window_t4

0x1f6d,	// (0x0004dce3) popup_call_audio_first_window_t5_ParamLimits

0x1f6d,	// (0x0004dce3) popup_call_audio_first_window_t5

0x0002,

0xf114,	// (0x0005ae8a) popup_call_audio_first_window_t_ParamLimits

0xf114,	// (0x0005ae8a) popup_call_audio_first_window_t

0x1f9c,	// (0x0004dd12) bg_popup_call_pane_cp02

0x1fa6,	// (0x0004dd1c) call_type_pane_cp023

0x1fae,	// (0x0004dd24) popup_call_audio_wait_window_g1

0x1fb6,	// (0x0004dd2c) popup_call_audio_wait_window_g2

0x0001,

0xf11b,	// (0x0005ae91) popup_call_audio_wait_window_g

0x1fbe,	// (0x0004dd34) popup_call_audio_wait_window_t3

0x1fcc,	// (0x0004dd42) bg_popup_call_pane_cp03_ParamLimits

0x1fcc,	// (0x0004dd42) bg_popup_call_pane_cp03

0x202c,	// (0x0004dda2) call_thumbnail_pane_cp011_ParamLimits

0x202c,	// (0x0004dda2) call_thumbnail_pane_cp011

0x2038,	// (0x0004ddae) call_type_pane_cp034_ParamLimits

0x2038,	// (0x0004ddae) call_type_pane_cp034

0x2074,	// (0x0004ddea) popup_call_audio_second_window_g1_ParamLimits

0x2074,	// (0x0004ddea) popup_call_audio_second_window_g1

0x20b0,	// (0x0004de26) popup_call_audio_second_window_g2_ParamLimits

0x20b0,	// (0x0004de26) popup_call_audio_second_window_g2

0x0001,

0xf120,	// (0x0005ae96) popup_call_audio_second_window_g_ParamLimits

0xf120,	// (0x0005ae96) popup_call_audio_second_window_g

0x20ec,	// (0x0004de62) popup_call_audio_second_window_t1_ParamLimits

0x20ec,	// (0x0004de62) popup_call_audio_second_window_t1

0x216d,	// (0x0004dee3) popup_call_audio_second_window_t2_ParamLimits

0x216d,	// (0x0004dee3) popup_call_audio_second_window_t2

0x21a3,	// (0x0004df19) popup_call_audio_second_window_t3_ParamLimits

0x21a3,	// (0x0004df19) popup_call_audio_second_window_t3

0x0002,

0xf125,	// (0x0005ae9b) popup_call_audio_second_window_t_ParamLimits

0xf125,	// (0x0005ae9b) popup_call_audio_second_window_t

0x1f9c,	// (0x0004dd12) bg_popup_call_pane_cp04

0x21d9,	// (0x0004df4f) list_conf_pane

0x21e1,	// (0x0004df57) popup_call_audio_conf_window_t1

0x21ef,	// (0x0004df65) call_thumbnail_pane_g1

0x21f7,	// (0x0004df6d) bg_pinb_pane_ParamLimits

0x21f7,	// (0x0004df6d) bg_pinb_pane

0x2205,	// (0x0004df7b) find_pinb_pane

0x220e,	// (0x0004df84) listscroll_pinb_pane_ParamLimits

0x220e,	// (0x0004df84) listscroll_pinb_pane

0x221d,	// (0x0004df93) pinb_bg_pane_g1

0x5e70,	// (0x00051be6) pinb_bg_pane_g2

0x5e7c,	// (0x00051bf2) pinb_bg_pane_g3

0x5e88,	// (0x00051bfe) pinb_bg_pane_g4

0x5e94,	// (0x00051c0a) pinb_bg_pane_g5

0x5ea0,	// (0x00051c16) pinb_bg_pane_g6

0x5eab,	// (0x00051c21) pinb_bg_pane_g7

0x5eb6,	// (0x00051c2c) pinb_bg_pane_g8

0x5ec1,	// (0x00051c37) pinb_bg_pane_g9

0x5ecb,	// (0x00051c41) pinb_bg_pane_g10

0x0009,

0xf12c,	// (0x0005aea2) pinb_bg_pane_g

0x5ee0,	// (0x00051c56) grid_pinb_pane

0x5eeb,	// (0x00051c61) list_pinb_pane

0x5ef6,	// (0x00051c6c) scroll_pane_cp01_ParamLimits

0x5ef6,	// (0x00051c6c) scroll_pane_cp01

0x222f,	// (0x0004dfa5) find_pinb_pane_g1_ParamLimits

0x222f,	// (0x0004dfa5) find_pinb_pane_g1

0x2247,	// (0x0004dfbd) find_pinb_pane_t1

0x2259,	// (0x0004dfcf) find_pinb_pane_t2

0x0001,

0xf146,	// (0x0005aebc) find_pinb_pane_t

0x226e,	// (0x0004dfe4) input_focus_pane_cp01_ParamLimits

0x226e,	// (0x0004dfe4) input_focus_pane_cp01

0x5f08,	// (0x00051c7e) cell_pinb_pane_ParamLimits

0x5f08,	// (0x00051c7e) cell_pinb_pane

0x5f36,	// (0x00051cac) cell_pinb_pane_g1_ParamLimits

0x5f36,	// (0x00051cac) cell_pinb_pane_g1

0x5f4b,	// (0x00051cc1) cell_pinb_pane_g2_ParamLimits

0x5f4b,	// (0x00051cc1) cell_pinb_pane_g2

0x227a,	// (0x0004dff0) cell_pinb_pane_g3_ParamLimits

0x227a,	// (0x0004dff0) cell_pinb_pane_g3

0x0002,

0xf14b,	// (0x0005aec1) cell_pinb_pane_g_ParamLimits

0xf14b,	// (0x0005aec1) cell_pinb_pane_g

0x1f9c,	// (0x0004dd12) grid_highlight_pane_cp01

0x5f57,	// (0x00051ccd) list_pinb_item_pane_ParamLimits

0x5f57,	// (0x00051ccd) list_pinb_item_pane

0x1f9c,	// (0x0004dd12) list_highlight_pane_cp02

0x2286,	// (0x0004dffc) list_pinb_item_pane_g1_ParamLimits

0x2286,	// (0x0004dffc) list_pinb_item_pane_g1

0x2293,	// (0x0004e009) list_pinb_item_pane_g2_ParamLimits

0x2293,	// (0x0004e009) list_pinb_item_pane_g2

0x5f81,	// (0x00051cf7) list_pinb_item_pane_g3_ParamLimits

0x5f81,	// (0x00051cf7) list_pinb_item_pane_g3

0x229f,	// (0x0004e015) list_pinb_item_pane_g4_ParamLimits

0x229f,	// (0x0004e015) list_pinb_item_pane_g4

0x0003,

0xf152,	// (0x0005aec8) list_pinb_item_pane_g_ParamLimits

0xf152,	// (0x0005aec8) list_pinb_item_pane_g

0x22ab,	// (0x0004e021) list_pinb_item_pane_t1_ParamLimits

0x22ab,	// (0x0004e021) list_pinb_item_pane_t1

0x5fac,	// (0x00051d22) calc_display_pane

0x5fca,	// (0x00051d40) calc_paper_pane

0x5fe6,	// (0x00051d5c) grid_calc_pane

0x1f9c,	// (0x0004dd12) bg_list_pane_cp01

0x6012,	// (0x00051d88) clock_g1

0x601a,	// (0x00051d90) clock_g2

0x0001,

0xf15b,	// (0x0005aed1) clock_g

0x6024,	// (0x00051d9a) clock_t1_ParamLimits

0x6024,	// (0x00051d9a) clock_t1

0x6039,	// (0x00051daf) clock_t2_ParamLimits

0x6039,	// (0x00051daf) clock_t2

0x604b,	// (0x00051dc1) clock_t3_ParamLimits

0x604b,	// (0x00051dc1) clock_t3

0x605d,	// (0x00051dd3) clock_t4_ParamLimits

0x605d,	// (0x00051dd3) clock_t4

0x606f,	// (0x00051de5) clock_t5_ParamLimits

0x606f,	// (0x00051de5) clock_t5

0x6084,	// (0x00051dfa) clock_t6_ParamLimits

0x6084,	// (0x00051dfa) clock_t6

0x6096,	// (0x00051e0c) clock_t7_ParamLimits

0x6096,	// (0x00051e0c) clock_t7

0x60a8,	// (0x00051e1e) clock_t8_ParamLimits

0x60a8,	// (0x00051e1e) clock_t8

0x60be,	// (0x00051e34) clock_t9_ParamLimits

0x60be,	// (0x00051e34) clock_t9

0x0008,

0xf160,	// (0x0005aed6) clock_t_ParamLimits

0xf160,	// (0x0005aed6) clock_t

0x22c2,	// (0x0004e038) popup_clock_analogue_window_cp02

0x22c2,	// (0x0004e038) popup_clock_digital_window_cp01

0x22ca,	// (0x0004e040) listscroll_help_pane

0x1f9c,	// (0x0004dd12) phob_pre_status_pane

0x22d4,	// (0x0004e04a) grid_qdial_pane

0x1f9c,	// (0x0004dd12) listscroll_mce_pane

0x22de,	// (0x0004e054) bg_notes_pane

0x22e8,	// (0x0004e05e) list_notes_pane

0x60d4,	// (0x00051e4a) scroll_pane_cp06

0x22f2,	// (0x0004e068) bg_calc_paper_pane

0x60e9,	// (0x00051e5f) list_calc_pane

0x2306,	// (0x0004e07c) bg_calc_display_pane

0x6103,	// (0x00051e79) calc_display_pane_t1

0x6118,	// (0x00051e8e) calc_display_pane_t2

0x612d,	// (0x00051ea3) calc_display_pane_t3

0x0002,

0xf173,	// (0x0005aee9) calc_display_pane_t

0x613f,	// (0x00051eb5) cell_calc_pane_ParamLimits

0x613f,	// (0x00051eb5) cell_calc_pane

0x2312,	// (0x0004e088) bg_calc_paper_pane_g1

0x232a,	// (0x0004e0a0) bg_calc_paper_pane_g2

0x231e,	// (0x0004e094) bg_calc_paper_pane_g3

0x2342,	// (0x0004e0b8) bg_calc_paper_pane_g4

0x2336,	// (0x0004e0ac) bg_calc_paper_pane_g5

0x616c,	// (0x00051ee2) bg_calc_paper_pane_g6

0x617d,	// (0x00051ef3) bg_calc_paper_pane_g7

0x618e,	// (0x00051f04) bg_calc_paper_pane_g8

0x0007,

0xf17a,	// (0x0005aef0) bg_calc_paper_pane_g

0x619f,	// (0x00051f15) calc_bg_paper_pane_g9

0x61b0,	// (0x00051f26) list_calc_item_pane_ParamLimits

0x61b0,	// (0x00051f26) list_calc_item_pane

0x234e,	// (0x0004e0c4) list_calc_item_pane_g1

0x61ea,	// (0x00051f60) list_calc_item_pane_t1_ParamLimits

0x61ea,	// (0x00051f60) list_calc_item_pane_t1

0x61fc,	// (0x00051f72) list_calc_item_pane_t2_ParamLimits

0x61fc,	// (0x00051f72) list_calc_item_pane_t2

0x0001,

0xf18b,	// (0x0005af01) list_calc_item_pane_t_ParamLimits

0xf18b,	// (0x0005af01) list_calc_item_pane_t

0x235b,	// (0x0004e0d1) cell_calc_pane_g1

0x2365,	// (0x0004e0db) grid_highlight_pane_cp02

0x2390,	// (0x0004e106) bg_calc_display_pane_g1

0x622c,	// (0x00051fa2) bg_calc_display_pane_g2

0x2387,	// (0x0004e0fd) bg_calc_display_pane_g3

0x0002,

0xf195,	// (0x0005af0b) bg_calc_display_pane_g

0x6236,	// (0x00051fac) cell_qdial_pane_ParamLimits

0x6236,	// (0x00051fac) cell_qdial_pane

0x624a,	// (0x00051fc0) cell_qdial_pane_g1_ParamLimits

0x624a,	// (0x00051fc0) cell_qdial_pane_g1

0x6257,	// (0x00051fcd) cell_qdial_pane_g2_ParamLimits

0x6257,	// (0x00051fcd) cell_qdial_pane_g2

0x2399,	// (0x0004e10f) cell_qdial_pane_g3_ParamLimits

0x2399,	// (0x0004e10f) cell_qdial_pane_g3

0x0003,

0xf19c,	// (0x0005af12) cell_qdial_pane_g_ParamLimits

0xf19c,	// (0x0005af12) cell_qdial_pane_g

0x6275,	// (0x00051feb) cell_qdial_pane_t1_ParamLimits

0x6275,	// (0x00051feb) cell_qdial_pane_t1

0x628d,	// (0x00052003) cell_qdial_pane_t2_ParamLimits

0x628d,	// (0x00052003) cell_qdial_pane_t2

0x62a0,	// (0x00052016) cell_qdial_pane_t3_ParamLimits

0x62a0,	// (0x00052016) cell_qdial_pane_t3

0x0002,

0xf1a5,	// (0x0005af1b) cell_qdial_pane_t_ParamLimits

0xf1a5,	// (0x0005af1b) cell_qdial_pane_t

0x1f9c,	// (0x0004dd12) grid_highlight_pane_cp04

0x23a5,	// (0x0004e11b) thumbnail_qdial_pane_ParamLimits

0x23a5,	// (0x0004e11b) thumbnail_qdial_pane

0x2401,	// (0x0004e177) list_help_pane

0x240a,	// (0x0004e180) scroll_pane_cp02

0x62b3,	// (0x00052029) help_list_pane_t1_ParamLimits

0x62b3,	// (0x00052029) help_list_pane_t1

0x62f1,	// (0x00052067) bg_notes_pane_g2

0x62f9,	// (0x0005206f) bg_notes_pane_g3

0x6301,	// (0x00052077) notes_bg_pane_g1

0x6309,	// (0x0005207f) notes_bg_pane_g4

0x6311,	// (0x00052087) notes_bg_pane_g5

0x6319,	// (0x0005208f) notes_bg_pane_g6

0x6321,	// (0x00052097) notes_bg_pane_g7

0x6329,	// (0x0005209f) notes_bg_pane_g8

0x6331,	// (0x000520a7) notes_bg_pane_g9

0x0006,

0xf1c3,	// (0x0005af39) notes_bg_pane_g

0x6339,	// (0x000520af) list_notes_text_pane_ParamLimits

0x6339,	// (0x000520af) list_notes_text_pane

0x2413,	// (0x0004e189) list_notes_text_pane_g1

0x6369,	// (0x000520df) list_notes_text_pane_t1

0x2306,	// (0x0004e07c) listscroll_cale_week_pane

0x6394,	// (0x0005210a) bg_cale_heading_pane

0x242d,	// (0x0004e1a3) bg_cale_pane_cp01

0x63b0,	// (0x00052126) cale_week_corner_pane

0x63c1,	// (0x00052137) cale_week_day_heading_pane

0x63dd,	// (0x00052153) cale_week_scroll_pane_g1

0x63f6,	// (0x0005216c) cale_week_scroll_pane_g2

0x6407,	// (0x0005217d) cale_week_scroll_pane_g3

0x6418,	// (0x0005218e) cale_week_scroll_pane_g4

0x6429,	// (0x0005219f) cale_week_scroll_pane_g5

0x643a,	// (0x000521b0) cale_week_scroll_pane_g6

0x644b,	// (0x000521c1) cale_week_scroll_pane_g7

0x645e,	// (0x000521d4) cale_week_scroll_pane_g8

0x6471,	// (0x000521e7) cale_week_scroll_pane_g9

0x6482,	// (0x000521f8) cale_week_scroll_pane_g10

0x6493,	// (0x00052209) cale_week_scroll_pane_g11

0x64a4,	// (0x0005221a) cale_week_scroll_pane_g12

0x64bd,	// (0x00052233) cale_week_scroll_pane_g13

0x64d6,	// (0x0005224c) cale_week_scroll_pane_g14

0x64ef,	// (0x00052265) cale_week_scroll_pane_g15

0x000e,

0xf1d2,	// (0x0005af48) cale_week_scroll_pane_g

0x6508,	// (0x0005227e) cale_week_time_pane

0x651b,	// (0x00052291) grid_cale_week_pane

0x6538,	// (0x000522ae) scroll_pane_cp08

0x6552,	// (0x000522c8) cell_cale_week_pane_ParamLimits

0x6552,	// (0x000522c8) cell_cale_week_pane

0x65a2,	// (0x00052318) cale_week_day_heading_pane_t1

0x65b6,	// (0x0005232c) cale_week_day_heading_pane_t2

0x65ca,	// (0x00052340) cale_week_day_heading_pane_t3

0x65de,	// (0x00052354) cale_week_day_heading_pane_t4

0x65f2,	// (0x00052368) cale_week_day_heading_pane_t5

0x6606,	// (0x0005237c) cale_week_day_heading_pane_t6

0x661a,	// (0x00052390) cale_week_day_heading_pane_t7

0x0006,

0xf1f1,	// (0x0005af67) cale_week_day_heading_pane_t

0x2458,	// (0x0004e1ce) bg_cale_side_pane

0x662e,	// (0x000523a4) cale_week_time_pane_t1

0x6646,	// (0x000523bc) cale_week_time_pane_t2

0x665e,	// (0x000523d4) cale_week_time_pane_t3

0x6676,	// (0x000523ec) cale_week_time_pane_t4

0x668e,	// (0x00052404) cale_week_time_pane_t5

0x66a6,	// (0x0005241c) cale_week_time_pane_t6

0x66c6,	// (0x0005243c) cale_week_time_pane_t7

0x66e6,	// (0x0005245c) cale_week_time_pane_t8

0x0007,

0xf200,	// (0x0005af76) cale_week_time_pane_t

0x6706,	// (0x0005247c) cell_cale_week_pane_g2

0x6717,	// (0x0005248d) cell_cale_week_pane_g3_ParamLimits

0x6717,	// (0x0005248d) cell_cale_week_pane_g3

0x2466,	// (0x0004e1dc) grid_highlight_pane_cp07

0x246e,	// (0x0004e1e4) listscroll_gms_pane

0x2478,	// (0x0004e1ee) grid_gms_pane

0x2481,	// (0x0004e1f7) listscroll_gms_pane_g1

0x2489,	// (0x0004e1ff) listscroll_gms_pane_g2

0x0001,

0xf211,	// (0x0005af87) listscroll_gms_pane_g

0x672f,	// (0x000524a5) scroll_pane_cp010

0x673a,	// (0x000524b0) cell_gms_pane_ParamLimits

0x673a,	// (0x000524b0) cell_gms_pane

0x674c,	// (0x000524c2) cell_gms_pane_g1

0x2491,	// (0x0004e207) cell_gms_pane_g2

0x2413,	// (0x0004e189) cell_gms_pane_g3

0x2499,	// (0x0004e20f) cell_gms_pane_g4

0x0003,

0xf216,	// (0x0005af8c) cell_gms_pane_g

0x24a2,	// (0x0004e218) grid_highlight_pane_cp09

0x8b8a,	// (0x00054900) phob_pre_status_pane_g1

0x8b92,	// (0x00054908) phob_pre_status_pane_g2

0x8b9a,	// (0x00054910) phob_pre_status_pane_g3

0x8ba2,	// (0x00054918) phob_pre_status_pane_g4

0x0004,

0xf605,	// (0x0005b37b) phob_pre_status_pane_g

0x8bb2,	// (0x00054928) phob_pre_status_pane_t1

0x8bc2,	// (0x00054938) phob_pre_status_pane_t2

0x8bd2,	// (0x00054948) phob_pre_status_pane_t3

0x0002,

0xf610,	// (0x0005b386) phob_pre_status_pane_t

0x1f9c,	// (0x0004dd12) bg_list_pane_cp05

0x675c,	// (0x000524d2) grid_vorec_pane

0x6764,	// (0x000524da) vorec_t1

0x6772,	// (0x000524e8) vorec_t2

0x6780,	// (0x000524f6) vorec_t3

0x678e,	// (0x00052504) vorec_t4

0x679c,	// (0x00052512) vorec_t5

0x67aa,	// (0x00052520) vorec_t6

0x0006,

0xf21f,	// (0x0005af95) vorec_t

0x67c6,	// (0x0005253c) wait_bar_pane_cp01

0x24aa,	// (0x0004e220) cell_vorec_pane_ParamLimits

0x24aa,	// (0x0004e220) cell_vorec_pane

0x24bd,	// (0x0004e233) cell_vorec_pane_g1

0x1f9c,	// (0x0004dd12) grid_highlight_pane_cp05

0x67de,	// (0x00052554) cams_zoom_pane

0x67ea,	// (0x00052560) image_vga_pane

0x67f9,	// (0x0005256f) main_camera_pane_g1

0x6807,	// (0x0005257d) main_camera_pane_g2

0x6815,	// (0x0005258b) main_camera_pane_g3

0x6821,	// (0x00052597) main_camera_pane_g4

0x682d,	// (0x000525a3) main_camera_pane_g5

0x6839,	// (0x000525af) main_camera_pane_g6

0x6845,	// (0x000525bb) main_camera_pane_g7

0x0007,

0xf22e,	// (0x0005afa4) main_camera_pane_g

0x6851,	// (0x000525c7) main_camera_pane_t1

0x6863,	// (0x000525d9) main_camera_pane_t2

0x0001,

0xf23f,	// (0x0005afb5) main_camera_pane_t

0x6884,	// (0x000525fa) cams_zoom_pane_cp_ParamLimits

0x6884,	// (0x000525fa) cams_zoom_pane_cp

0x68a8,	// (0x0005261e) image_cif_pane_ParamLimits

0x68a8,	// (0x0005261e) image_cif_pane

0x68c6,	// (0x0005263c) image_subqcif_pane

0x68ce,	// (0x00052644) main_video_pane_g1_ParamLimits

0x68ce,	// (0x00052644) main_video_pane_g1

0x68ee,	// (0x00052664) main_video_pane_g2_ParamLimits

0x68ee,	// (0x00052664) main_video_pane_g2

0x6920,	// (0x00052696) main_video_pane_g3_ParamLimits

0x6920,	// (0x00052696) main_video_pane_g3

0x694b,	// (0x000526c1) main_video_pane_g4_ParamLimits

0x694b,	// (0x000526c1) main_video_pane_g4

0x6976,	// (0x000526ec) main_video_pane_g5_ParamLimits

0x6976,	// (0x000526ec) main_video_pane_g5

0x24d3,	// (0x0004e249) main_video_pane_g6_ParamLimits

0x24d3,	// (0x0004e249) main_video_pane_g6

0x0006,

0xf244,	// (0x0005afba) main_video_pane_g_ParamLimits

0xf244,	// (0x0005afba) main_video_pane_g

0x699a,	// (0x00052710) main_video_pane_t1_ParamLimits

0x699a,	// (0x00052710) main_video_pane_t1

0x24ed,	// (0x0004e263) cams_zoom_pane_g1

0x24f6,	// (0x0004e26c) cams_zoom_pane_g2

0x24ff,	// (0x0004e275) cams_zoom_pane_g3

0x2508,	// (0x0004e27e) cams_zoom_pane_g4

0x0003,

0xf253,	// (0x0005afc9) cams_zoom_pane_g

0x69e4,	// (0x0005275a) grid_cams_pane

0x69f2,	// (0x00052768) linegrid_cams_pane

0x6a00,	// (0x00052776) cell_cams_pane_ParamLimits

0x6a00,	// (0x00052776) cell_cams_pane

0x2511,	// (0x0004e287) cams_burst_image_pane

0x2519,	// (0x0004e28f) cell_cams_pane_g1

0x1f9c,	// (0x0004dd12) grid_highlight_pane_cp03

0x235b,	// (0x0004e0d1) mp_bg_pane_g1

0x1f9c,	// (0x0004dd12) bg_list_pane_cp03

0x4100,	// (0x0004fe76) bg_mp_pane

0x4108,	// (0x0004fe7e) grid_mp_pane

0x4110,	// (0x0004fe86) media_player_g1

0x4118,	// (0x0004fe8e) media_player_t1

0x4126,	// (0x0004fe9c) media_player_t2

0x4134,	// (0x0004feaa) media_player_t3

0x4142,	// (0x0004feb8) media_player_t4

0x4150,	// (0x0004fec6) media_player_t5

0x415e,	// (0x0004fed4) media_player_t6

0x416c,	// (0x0004fee2) media_player_t7

0x0006,

0xf5ef,	// (0x0005b365) media_player_t

0x417a,	// (0x0004fef0) wait_bar_pane_cp02

0xf5d4,	// (0x0005b34a) main_usb_pane_t

0x8b81,	// (0x000548f7) cell_mp_pane

0x235b,	// (0x0004e0d1) cell_mp_pane_g1

0x1f9c,	// (0x0004dd12) grid_highlight_pane_cp06

0x2521,	// (0x0004e297) grid_skin_colour_pane

0x2529,	// (0x0004e29f) list_highlight_pane_cp03

0x6a65,	// (0x000527db) skin_g1

0x2531,	// (0x0004e2a7) skin_t1

0x2540,	// (0x0004e2b6) skin_t2

0x0001,

0xf288,	// (0x0005affe) skin_t

0x6a6f,	// (0x000527e5) cell_skin_colour_pane_ParamLimits

0x6a6f,	// (0x000527e5) cell_skin_colour_pane

0x254e,	// (0x0004e2c4) cell_skin_colour_pane_g1

0x6af3,	// (0x00052869) call_video_g1_ParamLimits

0x6af3,	// (0x00052869) call_video_g1

0x6b03,	// (0x00052879) call_video_g2_ParamLimits

0x6b03,	// (0x00052879) call_video_g2

0x0001,

0xf28d,	// (0x0005b003) call_video_g_ParamLimits

0xf28d,	// (0x0005b003) call_video_g

0x6b5d,	// (0x000528d3) call_video_uplink_pane_cp1_ParamLimits

0x6b5d,	// (0x000528d3) call_video_uplink_pane_cp1

0x2560,	// (0x0004e2d6) call_video_uplink_pane_cp2

0x6c29,	// (0x0005299f) video_down_crop_pane_ParamLimits

0x6c29,	// (0x0005299f) video_down_crop_pane

0x6d1b,	// (0x00052a91) video_down_pane_ParamLimits

0x6d1b,	// (0x00052a91) video_down_pane

0x2568,	// (0x0004e2de) video_down_subqcif_pane_ParamLimits

0x2568,	// (0x0004e2de) video_down_subqcif_pane

0x2580,	// (0x0004e2f6) video_down_subqcif_pane_cp_ParamLimits

0x2580,	// (0x0004e2f6) video_down_subqcif_pane_cp

0x25a4,	// (0x0004e31a) im_reading_pane_ParamLimits

0x25a4,	// (0x0004e31a) im_reading_pane

0x6e3d,	// (0x00052bb3) im_writing_pane_ParamLimits

0x6e3d,	// (0x00052bb3) im_writing_pane

0x6e5b,	// (0x00052bd1) im_reading_pane_t1

0x25be,	// (0x0004e334) list_im_pane

0x25cf,	// (0x0004e345) scroll_pane_cp07

0x6ebb,	// (0x00052c31) im_writing_pane_t1_ParamLimits

0x6ebb,	// (0x00052c31) im_writing_pane_t1

0x25e8,	// (0x0004e35e) im_writing_pane_t2_ParamLimits

0x25e8,	// (0x0004e35e) im_writing_pane_t2

0x0001,

0xf297,	// (0x0005b00d) im_writing_pane_t_ParamLimits

0xf297,	// (0x0005b00d) im_writing_pane_t

0x1f9c,	// (0x0004dd12) input_focus_pane_cp04

0x1f9c,	// (0x0004dd12) input_focus_pane_cp05

0x6ecd,	// (0x00052c43) list_im_single_pane_ParamLimits

0x6ecd,	// (0x00052c43) list_im_single_pane

0x6ef9,	// (0x00052c6f) list_single_im_pane_t1

0x8b45,	// (0x000548bb) blid_accuracy_pane

0x8b4d,	// (0x000548c3) blid_compass_pane

0x8b57,	// (0x000548cd) main_location_t1

0x8b65,	// (0x000548db) main_location_t2

0x8b73,	// (0x000548e9) main_location_t3

0x0002,

0xf5fe,	// (0x0005b374) main_location_t

0x1f9c,	// (0x0004dd12) aid_levels_location

0x235b,	// (0x0004e0d1) blid_accuracy_pane_g1

0x235b,	// (0x0004e0d1) blid_accuracy_pane_g2

0x0001,

0xf2f9,	// (0x0005b06f) blid_accuracy_pane_g

0x2630,	// (0x0004e3a6) wml_content_pane

0x266e,	// (0x0004e3e4) wml_button_pane_ParamLimits

0x266e,	// (0x0004e3e4) wml_button_pane

0x6f08,	// (0x00052c7e) wml_list_single_large_pane_ParamLimits

0x6f08,	// (0x00052c7e) wml_list_single_large_pane

0x6f3a,	// (0x00052cb0) wml_list_single_medium_pane_ParamLimits

0x6f3a,	// (0x00052cb0) wml_list_single_medium_pane

0x6f73,	// (0x00052ce9) wml_list_single_small_pane_ParamLimits

0x6f73,	// (0x00052ce9) wml_list_single_small_pane

0x2682,	// (0x0004e3f8) wml_selection_box_pane_ParamLimits

0x2682,	// (0x0004e3f8) wml_selection_box_pane

0x2695,	// (0x0004e40b) wml_list_single_pane_t1

0x26a4,	// (0x0004e41a) wml_list_single_medium_pane_t1

0x26b3,	// (0x0004e429) wml_list_single_large_pane_t1

0x26c2,	// (0x0004e438) input_focus_pane_cp02_ParamLimits

0x26c2,	// (0x0004e438) input_focus_pane_cp02

0x26d5,	// (0x0004e44b) wml_selection_box_pane_g1

0x26de,	// (0x0004e454) wml_selection_box_pane_t1_ParamLimits

0x26de,	// (0x0004e454) wml_selection_box_pane_t1

0x21f7,	// (0x0004df6d) bg_wml_button_pane_ParamLimits

0x21f7,	// (0x0004df6d) bg_wml_button_pane

0x26f6,	// (0x0004e46c) wml_button_pane_g1

0x26fe,	// (0x0004e474) wml_button_pane_t1

0x26f6,	// (0x0004e46c) wml_button_bg_pane_g1

0x270e,	// (0x0004e484) wml_button_bg_pane_g2

0x2716,	// (0x0004e48c) wml_button_bg_pane_g3

0x271e,	// (0x0004e494) wml_button_bg_pane_g4

0x2726,	// (0x0004e49c) wml_button_bg_pane_g5

0x272e,	// (0x0004e4a4) wml_button_bg_pane_g6

0x2736,	// (0x0004e4ac) wml_button_bg_pane_g7

0x273e,	// (0x0004e4b4) wml_button_bg_pane_g8

0x2746,	// (0x0004e4bc) wml_button_bg_pane_g9

0x0008,

0xf29c,	// (0x0005b012) wml_button_bg_pane_g

0x6fbb,	// (0x00052d31) bg_list_pane_cp02

0x274e,	// (0x0004e4c4) mce_header_pane_ParamLimits

0x274e,	// (0x0004e4c4) mce_header_pane

0x2764,	// (0x0004e4da) mce_icon_pane

0x2764,	// (0x0004e4da) mce_image_pane

0x276d,	// (0x0004e4e3) mce_text_pane_ParamLimits

0x276d,	// (0x0004e4e3) mce_text_pane

0x6fc5,	// (0x00052d3b) scroll_pane_cp03

0x2666,	// (0x0004e3dc) scroll_pane_cp04

0x2780,	// (0x0004e4f6) scroll_pane_cp05_ParamLimits

0x2780,	// (0x0004e4f6) scroll_pane_cp05

0x6fcf,	// (0x00052d45) mce_header_field_pane_ParamLimits

0x6fcf,	// (0x00052d45) mce_header_field_pane

0x6fef,	// (0x00052d65) mce_header_field_pane_2_ParamLimits

0x6fef,	// (0x00052d65) mce_header_field_pane_2

0x7005,	// (0x00052d7b) mce_header_field_pane_3

0x700d,	// (0x00052d83) list_single_mce_message_pane_ParamLimits

0x700d,	// (0x00052d83) list_single_mce_message_pane

0x703d,	// (0x00052db3) list_single_mce_smart_pane_ParamLimits

0x703d,	// (0x00052db3) list_single_mce_smart_pane

0x278c,	// (0x0004e502) input_focus_pane_cp03

0x2795,	// (0x0004e50b) list_header_data_pane

0x7078,	// (0x00052dee) mce_header_field_pane_t1

0x7088,	// (0x00052dfe) list_single_mce_header_pane_ParamLimits

0x7088,	// (0x00052dfe) list_single_mce_header_pane

0x279d,	// (0x0004e513) list_single_mce_header_pane_t1

0x27ac,	// (0x0004e522) list_single_mce_message_pane_g1

0x27b4,	// (0x0004e52a) list_single_mce_message_pane_t1

0x70da,	// (0x00052e50) bg_cale_heading_pane_cp01_ParamLimits

0x70da,	// (0x00052e50) bg_cale_heading_pane_cp01

0x27c2,	// (0x0004e538) bg_cale_pane_cp02_ParamLimits

0x27c2,	// (0x0004e538) bg_cale_pane_cp02

0x710d,	// (0x00052e83) cale_month_corner_pane

0x7123,	// (0x00052e99) cale_month_day_heading_pane_ParamLimits

0x7123,	// (0x00052e99) cale_month_day_heading_pane

0x7166,	// (0x00052edc) cale_month_pane_g1_ParamLimits

0x7166,	// (0x00052edc) cale_month_pane_g1

0x7192,	// (0x00052f08) cale_month_pane_g2_ParamLimits

0x7192,	// (0x00052f08) cale_month_pane_g2

0x71b5,	// (0x00052f2b) cale_month_pane_g3_ParamLimits

0x71b5,	// (0x00052f2b) cale_month_pane_g3

0x71f1,	// (0x00052f67) cale_month_pane_g4_ParamLimits

0x71f1,	// (0x00052f67) cale_month_pane_g4

0x722d,	// (0x00052fa3) cale_month_pane_g5_ParamLimits

0x722d,	// (0x00052fa3) cale_month_pane_g5

0x7269,	// (0x00052fdf) cale_month_pane_g6_ParamLimits

0x7269,	// (0x00052fdf) cale_month_pane_g6

0x72a5,	// (0x0005301b) cale_month_pane_g7_ParamLimits

0x72a5,	// (0x0005301b) cale_month_pane_g7

0x72f1,	// (0x00053067) cale_month_pane_g8_ParamLimits

0x72f1,	// (0x00053067) cale_month_pane_g8

0x733d,	// (0x000530b3) cale_month_pane_g9_ParamLimits

0x733d,	// (0x000530b3) cale_month_pane_g9

0x7383,	// (0x000530f9) cale_month_pane_g10_ParamLimits

0x7383,	// (0x000530f9) cale_month_pane_g10

0x73c9,	// (0x0005313f) cale_month_pane_g11_ParamLimits

0x73c9,	// (0x0005313f) cale_month_pane_g11

0x7407,	// (0x0005317d) cale_month_pane_g12_ParamLimits

0x7407,	// (0x0005317d) cale_month_pane_g12

0x7445,	// (0x000531bb) cale_month_pane_g13_ParamLimits

0x7445,	// (0x000531bb) cale_month_pane_g13

0x000c,

0xf2af,	// (0x0005b025) cale_month_pane_g_ParamLimits

0xf2af,	// (0x0005b025) cale_month_pane_g

0x7483,	// (0x000531f9) cale_month_week_pane

0x7496,	// (0x0005320c) grid_cale_month_pane_ParamLimits

0x7496,	// (0x0005320c) grid_cale_month_pane

0x74d4,	// (0x0005324a) cale_month_day_heading_pane_t1

0x7532,	// (0x000532a8) cale_month_day_heading_pane_t2

0x7597,	// (0x0005330d) cale_month_day_heading_pane_t3

0x75fc,	// (0x00053372) cale_month_day_heading_pane_t4

0x7661,	// (0x000533d7) cale_month_day_heading_pane_t5

0x76c6,	// (0x0005343c) cale_month_day_heading_pane_t6

0x7733,	// (0x000534a9) cale_month_day_heading_pane_t7

0x0006,

0xf2ca,	// (0x0005b040) cale_month_day_heading_pane_t

0x2458,	// (0x0004e1ce) bg_cale_side_pane_cp01

0x77a8,	// (0x0005351e) cale_month_week_pane_t1

0x77bf,	// (0x00053535) cale_month_week_pane_t2

0x77d6,	// (0x0005354c) cale_month_week_pane_t3

0x77ed,	// (0x00053563) cale_month_week_pane_t4

0x7804,	// (0x0005357a) cale_month_week_pane_t5

0x7823,	// (0x00053599) cale_month_week_pane_t6

0x0005,

0xf2d9,	// (0x0005b04f) cale_month_week_pane_t

0x7842,	// (0x000535b8) cell_cale_month_pane_ParamLimits

0x7842,	// (0x000535b8) cell_cale_month_pane

0x7910,	// (0x00053686) cell_cale_month_pane_g1

0x791c,	// (0x00053692) cell_cale_month_pane_t1_ParamLimits

0x791c,	// (0x00053692) cell_cale_month_pane_t1

0x2466,	// (0x0004e1dc) grid_highlight_pane_cp08

0x235b,	// (0x0004e0d1) main_smil_g1

0x7938,	// (0x000536ae) smil_status_pane

0x27f7,	// (0x0004e56d) smil_text_pane

0x4018,	// (0x0004fd8e) bg_popup_call3_rect_pane_g8

0x4020,	// (0x0004fd96) bg_popup_call3_rect_pane_g9

0x0008,

0xf592,	// (0x0005b308) bg_popup_call3_rect_pane_g

0x42b5,	// (0x0005002b) smil_status_volume_pane_g1

0x2801,	// (0x0004e577) smil_status_pane_t1

0x8f29,	// (0x00054c9f) volume_smil_pane

0x2818,	// (0x0004e58e) list_smil_text_pane

0x794b,	// (0x000536c1) scroll_pane_cp011

0x7956,	// (0x000536cc) smil_text_list_pane_t1_ParamLimits

0x7956,	// (0x000536cc) smil_text_list_pane_t1

0x7a01,	// (0x00053777) aid_volume_smil_ParamLimits

0x7a01,	// (0x00053777) aid_volume_smil

0x235b,	// (0x0004e0d1) smil_volume_pane_g1

0x235b,	// (0x0004e0d1) smil_volume_pane_g2

0x0001,

0xf2f9,	// (0x0005b06f) smil_volume_pane_g

0x2306,	// (0x0004e07c) listscroll_cale_day_pane

0x2822,	// (0x0004e598) bg_cale_pane

0x283a,	// (0x0004e5b0) list_cale_pane

0x284b,	// (0x0004e5c1) scroll_pane_cp09

0x285c,	// (0x0004e5d2) cale_bg_pane_g1

0x2864,	// (0x0004e5da) cale_bg_pane_g2

0x286c,	// (0x0004e5e2) cale_bg_pane_g3

0x2874,	// (0x0004e5ea) cale_bg_pane_g4

0x287c,	// (0x0004e5f2) cale_bg_pane_g5

0x2884,	// (0x0004e5fa) cale_bg_pane_g6

0x288c,	// (0x0004e602) cale_bg_pane_g7

0x2894,	// (0x0004e60a) cale_bg_pane_g8

0x289c,	// (0x0004e612) cale_bg_pane_g9

0x0008,

0xf2fe,	// (0x0005b074) cale_bg_pane_g

0x7a23,	// (0x00053799) list_cale_time_pane_ParamLimits

0x7a23,	// (0x00053799) list_cale_time_pane

0x7a44,	// (0x000537ba) list_cale_time_pane_g1_ParamLimits

0x7a44,	// (0x000537ba) list_cale_time_pane_g1

0x28a4,	// (0x0004e61a) list_cale_time_pane_g2_ParamLimits

0x28a4,	// (0x0004e61a) list_cale_time_pane_g2

0x7a50,	// (0x000537c6) list_cale_time_pane_g3_ParamLimits

0x7a50,	// (0x000537c6) list_cale_time_pane_g3

0x7a6c,	// (0x000537e2) list_cale_time_pane_g4_ParamLimits

0x7a6c,	// (0x000537e2) list_cale_time_pane_g4

0x7a7a,	// (0x000537f0) list_cale_time_pane_g5_ParamLimits

0x7a7a,	// (0x000537f0) list_cale_time_pane_g5

0x0005,

0xf311,	// (0x0005b087) list_cale_time_pane_g_ParamLimits

0xf311,	// (0x0005b087) list_cale_time_pane_g

0x7a88,	// (0x000537fe) list_cale_time_pane_t1_ParamLimits

0x7a88,	// (0x000537fe) list_cale_time_pane_t1

0x7ab0,	// (0x00053826) list_cale_time_pane_t2_ParamLimits

0x7ab0,	// (0x00053826) list_cale_time_pane_t2

0x7e0a,	// (0x00053b80) aid_blid_cardinal_pane

0x7e4c,	// (0x00053bc2) compass_pane_t4

0x7ad8,	// (0x0005384e) list_cale_time_pane_t4_ParamLimits

0x7ad8,	// (0x0005384e) list_cale_time_pane_t4

0x7e5a,	// (0x00053bd0) compass_pane_t5

0x7e6a,	// (0x00053be0) compass_pane_t6

0x7e78,	// (0x00053bee) compass_pane_t7

0x2ce0,	// (0x0004ea56) navi_pane_cc_t1

0x2e35,	// (0x0004ebab) aid_phob_thumbnail_center_pane

0x863b,	// (0x000543b1) main_postcard_pane_g4_ParamLimits

0x0002,

0xf31e,	// (0x0005b094) list_cale_time_pane_t_ParamLimits

0xf31e,	// (0x0005b094) list_cale_time_pane_t

0x1bf5,	// (0x0004d96b) bg_popup_window_pane_cp02_ParamLimits

0x1bf5,	// (0x0004d96b) bg_popup_window_pane_cp02

0x28be,	// (0x0004e634) heading_pane_cp01_ParamLimits

0x28be,	// (0x0004e634) heading_pane_cp01

0x28ca,	// (0x0004e640) loc_req_pane_ParamLimits

0x28ca,	// (0x0004e640) loc_req_pane

0x28da,	// (0x0004e650) loc_type_pane_ParamLimits

0x28da,	// (0x0004e650) loc_type_pane

0x28ec,	// (0x0004e662) loc_type_pane_t1_ParamLimits

0x28ec,	// (0x0004e662) loc_type_pane_t1

0x28fe,	// (0x0004e674) loc_type_pane_t2_ParamLimits

0x28fe,	// (0x0004e674) loc_type_pane_t2

0x2910,	// (0x0004e686) loc_type_pane_t3_ParamLimits

0x2910,	// (0x0004e686) loc_type_pane_t3

0x0002,

0xf325,	// (0x0005b09b) loc_type_pane_t_ParamLimits

0xf325,	// (0x0005b09b) loc_type_pane_t

0x2922,	// (0x0004e698) list_loc_req_pane

0x292c,	// (0x0004e6a2) scroll_pane_cp012

0x7b00,	// (0x00053876) list_single_loc_request_popup_menu_pane_ParamLimits

0x7b00,	// (0x00053876) list_single_loc_request_popup_menu_pane

0x2937,	// (0x0004e6ad) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0x2937,	// (0x0004e6ad) list_single_loc_request_popup_menu_pane_g1

0x2943,	// (0x0004e6b9) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0x2943,	// (0x0004e6b9) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf32c,	// (0x0005b0a2) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf32c,	// (0x0005b0a2) list_single_loc_request_popup_menu_pane_g

0x294f,	// (0x0004e6c5) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0x294f,	// (0x0004e6c5) list_single_loc_request_popup_menu_pane_t1

0x7b12,	// (0x00053888) bg_popup_window_pane_cp03_ParamLimits

0x7b12,	// (0x00053888) bg_popup_window_pane_cp03

0x7b20,	// (0x00053896) heading_loc_req_pane_ParamLimits

0x7b20,	// (0x00053896) heading_loc_req_pane

0x7b2c,	// (0x000538a2) popup_dyc_status_message_window_g1_ParamLimits

0x7b2c,	// (0x000538a2) popup_dyc_status_message_window_g1

0x7b38,	// (0x000538ae) popup_dyc_status_message_window_t1_ParamLimits

0x7b38,	// (0x000538ae) popup_dyc_status_message_window_t1

0x7b4a,	// (0x000538c0) popup_dyc_status_message_window_t2_ParamLimits

0x7b4a,	// (0x000538c0) popup_dyc_status_message_window_t2

0x7b5c,	// (0x000538d2) popup_dyc_status_message_window_t3_ParamLimits

0x7b5c,	// (0x000538d2) popup_dyc_status_message_window_t3

0x0002,

0xf331,	// (0x0005b0a7) popup_dyc_status_message_window_t_ParamLimits

0xf331,	// (0x0005b0a7) popup_dyc_status_message_window_t

0x1f9c,	// (0x0004dd12) bg_heading_pane_cp01

0x2965,	// (0x0004e6db) heading_loc_req_pane_g1

0x296d,	// (0x0004e6e3) heading_loc_req_pane_g2

0x2975,	// (0x0004e6eb) heading_loc_req_pane_g3

0x0002,

0xf338,	// (0x0005b0ae) heading_loc_req_pane_g

0x297d,	// (0x0004e6f3) heading_loc_req_pane_t1

0x298c,	// (0x0004e702) bg_popup_sub_pane_cp01_ParamLimits

0x298c,	// (0x0004e702) bg_popup_sub_pane_cp01

0x299a,	// (0x0004e710) popup_cale_events_window_g1_ParamLimits

0x299a,	// (0x0004e710) popup_cale_events_window_g1

0x29ba,	// (0x0004e730) popup_cale_events_window_g2_ParamLimits

0x29ba,	// (0x0004e730) popup_cale_events_window_g2

0x0001,

0xf36c,	// (0x0005b0e2) popup_cale_events_window_g_ParamLimits

0xf36c,	// (0x0005b0e2) popup_cale_events_window_g

0x29da,	// (0x0004e750) popup_cale_events_window_t1_ParamLimits

0x29da,	// (0x0004e750) popup_cale_events_window_t1

0x29ec,	// (0x0004e762) popup_cale_events_window_t2_ParamLimits

0x29ec,	// (0x0004e762) popup_cale_events_window_t2

0x2a2a,	// (0x0004e7a0) popup_cale_events_window_t3_ParamLimits

0x2a2a,	// (0x0004e7a0) popup_cale_events_window_t3

0x2a64,	// (0x0004e7da) popup_cale_events_window_t4_ParamLimits

0x2a64,	// (0x0004e7da) popup_cale_events_window_t4

0x0003,

0xf371,	// (0x0005b0e7) popup_cale_events_window_t_ParamLimits

0xf371,	// (0x0005b0e7) popup_cale_events_window_t

0x7be0,	// (0x00053956) call_type_pane

0x2add,	// (0x0004e853) popup_call_status_window_g1

0x7bec,	// (0x00053962) popup_call_status_window_g2

0x7bf8,	// (0x0005396e) popup_call_status_window_g3

0x0002,

0xf37a,	// (0x0005b0f0) popup_call_status_window_g

0x2a9a,	// (0x0004e810) call_type_pane_g1

0x2aa3,	// (0x0004e819) call_type_pane_g2

0x0001,

0xf381,	// (0x0005b0f7) call_type_pane_g

0x1f9c,	// (0x0004dd12) bg_popup_sub_pane_cp02

0x2aac,	// (0x0004e822) listscroll_popup_wml_pane

0x2ab4,	// (0x0004e82a) list_wml_pane

0x2abe,	// (0x0004e834) scroll_pane_cp013

0x2ac9,	// (0x0004e83f) list_single_graphic_popup_wml_pane_ParamLimits

0x2ac9,	// (0x0004e83f) list_single_graphic_popup_wml_pane

0x235b,	// (0x0004e0d1) list_single_graphic_popup_wml_pane_g1

0x2aeb,	// (0x0004e861) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf386,	// (0x0005b0fc) list_single_graphic_popup_wml_pane_g

0x2af3,	// (0x0004e869) list_single_graphic_popup_wml_pane_t1

0x2b01,	// (0x0004e877) aid_call_pane

0x21ef,	// (0x0004df65) popup_clock_analogue_window_g1

0x21ef,	// (0x0004df65) popup_clock_analogue_window_g2

0x7c04,	// (0x0005397a) popup_clock_analogue_window_g3

0x7c04,	// (0x0005397a) popup_clock_analogue_window_g4

0x235b,	// (0x0004e0d1) popup_clock_analogue_window_g5

0x0004,

0xf38b,	// (0x0005b101) popup_clock_analogue_window_g

0x7c0c,	// (0x00053982) popup_clock_analogue_window_t1

0x7c1a,	// (0x00053990) clock_digital_number_pane_ParamLimits

0x7c1a,	// (0x00053990) clock_digital_number_pane

0x7c26,	// (0x0005399c) clock_digital_number_pane_cp02_ParamLimits

0x7c26,	// (0x0005399c) clock_digital_number_pane_cp02

0x7c32,	// (0x000539a8) clock_digital_number_pane_cp03_ParamLimits

0x7c32,	// (0x000539a8) clock_digital_number_pane_cp03

0x7c3e,	// (0x000539b4) clock_digital_number_pane_cp04_ParamLimits

0x7c3e,	// (0x000539b4) clock_digital_number_pane_cp04

0x7c4a,	// (0x000539c0) clock_digital_separator_pane_ParamLimits

0x7c4a,	// (0x000539c0) clock_digital_separator_pane

0x7c56,	// (0x000539cc) popup_clock_digital_window_t1

0x235b,	// (0x0004e0d1) clock_digital_number_pane_g1

0x235b,	// (0x0004e0d1) clock_digital_number_pane_g2

0x0001,

0xf2f9,	// (0x0005b06f) clock_digital_number_pane_g

0x235b,	// (0x0004e0d1) clock_digital_separator_pane_g1

0x235b,	// (0x0004e0d1) clock_digital_separator_pane_g2

0x0001,

0xf2f9,	// (0x0005b06f) clock_digital_separator_pane_g

0x1f9c,	// (0x0004dd12) bg_popup_window_pane_cp04

0x2b11,	// (0x0004e887) heading_pane_cp03

0x2b19,	// (0x0004e88f) listscroll_popup_gms_pane

0x2b21,	// (0x0004e897) grid_large_graphic_popup_pane

0x2b2b,	// (0x0004e8a1) listscroll_popup_gms_pane_g1

0x2b33,	// (0x0004e8a9) listscroll_popup_gms_pane_g2

0x0001,

0xf396,	// (0x0005b10c) listscroll_popup_gms_pane_g

0x2666,	// (0x0004e3dc) scroll_pane_cp014

0x2b3b,	// (0x0004e8b1) cell_large_graphic_popup_pane_ParamLimits

0x2b3b,	// (0x0004e8b1) cell_large_graphic_popup_pane

0x2b53,	// (0x0004e8c9) cell_large_graphic_popup_pane_g1_ParamLimits

0x2b53,	// (0x0004e8c9) cell_large_graphic_popup_pane_g1

0x2b5f,	// (0x0004e8d5) cell_large_graphic_popup_pane_g2_ParamLimits

0x2b5f,	// (0x0004e8d5) cell_large_graphic_popup_pane_g2

0x2b6b,	// (0x0004e8e1) cell_large_graphic_popup_pane_g3_ParamLimits

0x2b6b,	// (0x0004e8e1) cell_large_graphic_popup_pane_g3

0x2b78,	// (0x0004e8ee) cell_large_graphic_popup_pane_g4_ParamLimits

0x2b78,	// (0x0004e8ee) cell_large_graphic_popup_pane_g4

0x0003,

0xf39b,	// (0x0005b111) cell_large_graphic_popup_pane_g_ParamLimits

0xf39b,	// (0x0005b111) cell_large_graphic_popup_pane_g

0x2b88,	// (0x0004e8fe) grid_highlight_pane_cp010

0x235b,	// (0x0004e0d1) bg_popup_call_pane_g1

0x2b92,	// (0x0004e908) list_single_graphic_popup_conf_pane_ParamLimits

0x2b92,	// (0x0004e908) list_single_graphic_popup_conf_pane

0x2ba4,	// (0x0004e91a) list_highlight_pane_cp01

0x2bad,	// (0x0004e923) list_single_graphic_popup_conf_pane_g1

0x2bb5,	// (0x0004e92b) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf3a4,	// (0x0005b11a) list_single_graphic_popup_conf_pane_g

0x2bbd,	// (0x0004e933) list_single_graphic_popup_conf_pane_t1

0x2bcb,	// (0x0004e941) linegrid_cams_pane_g1

0x7c73,	// (0x000539e9) linegrid_cams_pane_g2

0x2413,	// (0x0004e189) linegrid_cams_pane_g3

0x2bd4,	// (0x0004e94a) linegrid_cams_pane_g4

0x7c7c,	// (0x000539f2) linegrid_cams_pane_g5

0x7c85,	// (0x000539fb) linegrid_cams_pane_g6

0x2499,	// (0x0004e20f) linegrid_cams_pane_g7

0x0006,

0xf3a9,	// (0x0005b11f) linegrid_cams_pane_g

0x2bdd,	// (0x0004e953) popup_clock_analogue_window

0x2bdd,	// (0x0004e953) popup_clock_digital_window

0x1f9c,	// (0x0004dd12) popup_phob_thumbnail_window

0x235b,	// (0x0004e0d1) call_video_uplink_pane_g1

0x2be6,	// (0x0004e95c) call_video_uplink_pane_g2

0x0001,

0xf3b8,	// (0x0005b12e) call_video_uplink_pane_g

0x2466,	// (0x0004e1dc) video_uplink_pane

0x2bee,	// (0x0004e964) mce_image_pane_g1

0x7c8e,	// (0x00053a04) mce_image_pane_g2

0x7c96,	// (0x00053a0c) mce_image_pane_g3

0x7c9e,	// (0x00053a14) mce_image_pane_g4

0x7ca6,	// (0x00053a1c) mce_image_pane_g5

0x0004,

0xf3bd,	// (0x0005b133) mce_image_pane_g

0x2bf8,	// (0x0004e96e) control_top_pane_stacon_cp01_ParamLimits

0x2bf8,	// (0x0004e96e) control_top_pane_stacon_cp01

0x2c0c,	// (0x0004e982) uni_indicator_pane_stacon_cp01_ParamLimits

0x2c0c,	// (0x0004e982) uni_indicator_pane_stacon_cp01

0x2c1d,	// (0x0004e993) bg_popup_sub_pane_cp03

0x7cae,	// (0x00053a24) chi_dic_find_pane

0x7cb6,	// (0x00053a2c) listscroll_chi_dic_pane

0x7cbf,	// (0x00053a35) main_pane_chidic_g1

0x7cd2,	// (0x00053a48) chi_dic_find_pane_t1

0x2c27,	// (0x0004e99d) find_chidic_pane

0x2c30,	// (0x0004e9a6) chi_dic_list_pane_ParamLimits

0x2c30,	// (0x0004e9a6) chi_dic_list_pane

0x2c41,	// (0x0004e9b7) scroll_pane_cp020

0x7ce0,	// (0x00053a56) find_chidic_pane_t1

0x1f9c,	// (0x0004dd12) input_focus_pane_cp06

0x7cef,	// (0x00053a65) list_chi_dic_pane_ParamLimits

0x7cef,	// (0x00053a65) list_chi_dic_pane

0x2c49,	// (0x0004e9bf) list_chi_dic_pane_t1_ParamLimits

0x2c49,	// (0x0004e9bf) list_chi_dic_pane_t1

0x1f9c,	// (0x0004dd12) list_highlight_pane_cp020

0x2c5c,	// (0x0004e9d2) bg_cale_heading_pane_g1

0x7d10,	// (0x00053a86) bg_cale_heading_pane_g2

0x7d18,	// (0x00053a8e) bg_cale_heading_pane_g3

0x7d20,	// (0x00053a96) bg_cale_heading_pane_g4

0x7d2a,	// (0x00053aa0) bg_cale_heading_pane_g5

0x7d34,	// (0x00053aaa) bg_cale_heading_pane_g6

0x7d3c,	// (0x00053ab2) bg_cale_heading_pane_g7

0x7d44,	// (0x00053aba) bg_cale_heading_pane_g8

0x7d4e,	// (0x00053ac4) bg_cale_heading_pane_g9

0x0008,

0xf3c8,	// (0x0005b13e) bg_cale_heading_pane_g

0x2c5c,	// (0x0004e9d2) bg_cale_side_pane_g1

0x7d58,	// (0x00053ace) bg_cale_side_pane_g2

0x7d62,	// (0x00053ad8) bg_cale_side_pane_g3

0x7d6c,	// (0x00053ae2) bg_cale_side_pane_g4

0x7d76,	// (0x00053aec) bg_cale_side_pane_g5

0x7d80,	// (0x00053af6) bg_cale_side_pane_g6

0x7d8a,	// (0x00053b00) bg_cale_side_pane_g7

0x7d94,	// (0x00053b0a) bg_cale_side_pane_g8

0x7d9c,	// (0x00053b12) bg_cale_side_pane_g9

0x0008,

0xf3db,	// (0x0005b151) bg_cale_side_pane_g

0x7da4,	// (0x00053b1a) popup_call_status_window_ParamLimits

0x7da4,	// (0x00053b1a) popup_call_status_window

0x2c64,	// (0x0004e9da) stacon_top_pane

0x2c6c,	// (0x0004e9e2) status_pane_ParamLimits

0x2c6c,	// (0x0004e9e2) status_pane

0x2c81,	// (0x0004e9f7) status_small_pane

0x2c89,	// (0x0004e9ff) control_pane

0x1f9c,	// (0x0004dd12) stacon_bottom_pane

0x2c91,	// (0x0004ea07) list_single_mce_smart_pane_t1_ParamLimits

0x2c91,	// (0x0004ea07) list_single_mce_smart_pane_t1

0x2ca4,	// (0x0004ea1a) list_single_mce_smart_pane_t2_ParamLimits

0x2ca4,	// (0x0004ea1a) list_single_mce_smart_pane_t2

0x0001,

0xf3ee,	// (0x0005b164) list_single_mce_smart_pane_t_ParamLimits

0xf3ee,	// (0x0005b164) list_single_mce_smart_pane_t

0x7db0,	// (0x00053b26) compass_pane

0x7dbc,	// (0x00053b32) main_location2_pane_t1

0x7dd0,	// (0x00053b46) main_location2_pane_t2

0x7de4,	// (0x00053b5a) main_location2_pane_t3

0x0003,

0xf3f3,	// (0x0005b169) main_location2_pane_t

0x2cc3,	// (0x0004ea39) compass_pane_g1_ParamLimits

0x2cc3,	// (0x0004ea39) compass_pane_g1

0x7e2e,	// (0x00053ba4) compass_pane_t1

0x7e3d,	// (0x00053bb3) compass_pane_t2

0x0005,

0xf3fc,	// (0x0005b172) compass_pane_t

0x7e88,	// (0x00053bfe) text_secondary_cp61

0x2cd7,	// (0x0004ea4d) navi_pane_cams_g5

0x2cfa,	// (0x0004ea70) navi_pane_im_t1

0x2d08,	// (0x0004ea7e) navi_pane_mp_g1_ParamLimits

0x2d08,	// (0x0004ea7e) navi_pane_mp_g1

0x2d1c,	// (0x0004ea92) navi_pane_mp_g2_ParamLimits

0x2d1c,	// (0x0004ea92) navi_pane_mp_g2

0x2d28,	// (0x0004ea9e) navi_pane_mp_g3_ParamLimits

0x2d28,	// (0x0004ea9e) navi_pane_mp_g3

0x0002,

0xf410,	// (0x0005b186) navi_pane_mp_g_ParamLimits

0xf410,	// (0x0005b186) navi_pane_mp_g

0x2d34,	// (0x0004eaaa) navi_pane_mp_t1

0x2d42,	// (0x0004eab8) navi_pane_mp_t2

0x0002,

0xf417,	// (0x0005b18d) navi_pane_mp_t

0x2d7e,	// (0x0004eaf4) navi_pane_vt_g1

0x2d34,	// (0x0004eaaa) navi_pane_vt_t1

0x2d86,	// (0x0004eafc) navi_slider_pane

0x2d8e,	// (0x0004eb04) zooming_pane

0x2d96,	// (0x0004eb0c) navi_slider_pane_g1

0x7f9f,	// (0x00053d15) navi_slider_pane_g2

0x0006,

0xf41e,	// (0x0005b194) navi_slider_pane_g

0x2dba,	// (0x0004eb30) aid_levels_zoom

0x2dc2,	// (0x0004eb38) zooming_pane_g1

0x2dca,	// (0x0004eb40) zooming_pane_g2

0x2dca,	// (0x0004eb40) zooming_pane_g3

0x0002,

0xf42d,	// (0x0005b1a3) zooming_pane_g

0x2dd2,	// (0x0004eb48) level_10_zoom

0x2ddb,	// (0x0004eb51) level_11_zoom

0x2de4,	// (0x0004eb5a) level_1_zoom

0x2ded,	// (0x0004eb63) level_2_zoom

0x2df6,	// (0x0004eb6c) level_3_zoom

0x2dff,	// (0x0004eb75) level_4_zoom

0x2e08,	// (0x0004eb7e) level_5_zoom

0x2e11,	// (0x0004eb87) level_6_zoom

0x2e1a,	// (0x0004eb90) level_7_zoom

0x2e23,	// (0x0004eb99) level_8_zoom

0x2e2c,	// (0x0004eba2) level_9_zoom

0x2e3d,	// (0x0004ebb3) popup_phob_thumbnail_window_g1

0x2e45,	// (0x0004ebbb) popup_phob_thumbnail_window_g2

0x0001,

0xf434,	// (0x0005b1aa) popup_phob_thumbnail_window_g

0x4182,	// (0x0004fef8) level_1_location

0x418a,	// (0x0004ff00) level_2_location

0x4192,	// (0x0004ff08) level_3_location

0x419a,	// (0x0004ff10) level_4_location

0x2d8e,	// (0x0004eb04) level_5_location

0x7fb1,	// (0x00053d27) mce_icon_pane_g1

0x7fb9,	// (0x00053d2f) mce_icon_pane_g2

0x0001,

0xf439,	// (0x0005b1af) mce_icon_pane_g

0x7fc1,	// (0x00053d37) main_mup_pane_g1_ParamLimits

0x7fc1,	// (0x00053d37) main_mup_pane_g1

0x7fd9,	// (0x00053d4f) main_mup_pane_g2_ParamLimits

0x7fd9,	// (0x00053d4f) main_mup_pane_g2

0x7ff5,	// (0x00053d6b) main_mup_pane_g3_ParamLimits

0x7ff5,	// (0x00053d6b) main_mup_pane_g3

0x8011,	// (0x00053d87) main_mup_pane_g4_ParamLimits

0x8011,	// (0x00053d87) main_mup_pane_g4

0x802d,	// (0x00053da3) main_mup_pane_g5_ParamLimits

0x802d,	// (0x00053da3) main_mup_pane_g5

0x804e,	// (0x00053dc4) main_mup_pane_g6_ParamLimits

0x804e,	// (0x00053dc4) main_mup_pane_g6

0x806a,	// (0x00053de0) main_mup_pane_g7_ParamLimits

0x806a,	// (0x00053de0) main_mup_pane_g7

0x8086,	// (0x00053dfc) main_mup_pane_g8_ParamLimits

0x8086,	// (0x00053dfc) main_mup_pane_g8

0x80a2,	// (0x00053e18) main_mup_pane_g9_ParamLimits

0x80a2,	// (0x00053e18) main_mup_pane_g9

0x80c1,	// (0x00053e37) main_mup_pane_g10_ParamLimits

0x80c1,	// (0x00053e37) main_mup_pane_g10

0x80e0,	// (0x00053e56) main_mup_pane_g11_ParamLimits

0x80e0,	// (0x00053e56) main_mup_pane_g11

0x80f8,	// (0x00053e6e) main_mup_pane_g12_ParamLimits

0x80f8,	// (0x00053e6e) main_mup_pane_g12

0x8106,	// (0x00053e7c) main_mup_pane_g13_ParamLimits

0x8106,	// (0x00053e7c) main_mup_pane_g13

0x000c,

0xf43e,	// (0x0005b1b4) main_mup_pane_g_ParamLimits

0xf43e,	// (0x0005b1b4) main_mup_pane_g

0x811c,	// (0x00053e92) main_mup_pane_t1_ParamLimits

0x811c,	// (0x00053e92) main_mup_pane_t1

0x8139,	// (0x00053eaf) main_mup_pane_t2_ParamLimits

0x8139,	// (0x00053eaf) main_mup_pane_t2

0x8153,	// (0x00053ec9) main_mup_pane_t3_ParamLimits

0x8153,	// (0x00053ec9) main_mup_pane_t3

0x816d,	// (0x00053ee3) main_mup_pane_t4_ParamLimits

0x816d,	// (0x00053ee3) main_mup_pane_t4

0x817f,	// (0x00053ef5) main_mup_pane_t5_ParamLimits

0x817f,	// (0x00053ef5) main_mup_pane_t5

0x8191,	// (0x00053f07) main_mup_pane_t6_ParamLimits

0x8191,	// (0x00053f07) main_mup_pane_t6

0x0005,

0xf459,	// (0x0005b1cf) main_mup_pane_t_ParamLimits

0xf459,	// (0x0005b1cf) main_mup_pane_t

0x81a7,	// (0x00053f1d) mup_progress_pane_ParamLimits

0x81a7,	// (0x00053f1d) mup_progress_pane

0x81b3,	// (0x00053f29) mup_visualizer_pane_ParamLimits

0x81b3,	// (0x00053f29) mup_visualizer_pane

0x81f1,	// (0x00053f67) mup_volume_pane_ParamLimits

0x81f1,	// (0x00053f67) mup_volume_pane

0x2add,	// (0x0004e853) mup_visualizer_pane_g1_ParamLimits

0x2add,	// (0x0004e853) mup_visualizer_pane_g1

0x2add,	// (0x0004e853) mup_visualizer_pane_g2_ParamLimits

0x2add,	// (0x0004e853) mup_visualizer_pane_g2

0x2cc3,	// (0x0004ea39) mup_visualizer_pane_g3_ParamLimits

0x2cc3,	// (0x0004ea39) mup_visualizer_pane_g3

0x0002,

0xf466,	// (0x0005b1dc) mup_visualizer_pane_g_ParamLimits

0xf466,	// (0x0005b1dc) mup_visualizer_pane_g

0x235b,	// (0x0004e0d1) mup_volume_pane_g1

0x2e55,	// (0x0004ebcb) mup_volume_pane_g2

0x0001,

0xf46d,	// (0x0005b1e3) mup_volume_pane_g

0x235b,	// (0x0004e0d1) mup_progress_pane_g1

0x2e5e,	// (0x0004ebd4) mup_progress_pane_g2

0x2e67,	// (0x0004ebdd) mup_progress_pane_g3

0x0002,

0xf472,	// (0x0005b1e8) mup_progress_pane_g

0x1f9c,	// (0x0004dd12) bg_popup_window_pane_cp05

0x2e70,	// (0x0004ebe6) heading_pane_cp02_ParamLimits

0x2e70,	// (0x0004ebe6) heading_pane_cp02

0x2e8a,	// (0x0004ec00) list_popup_blid_pane

0x2e92,	// (0x0004ec08) list_blid_sat_info_pane_ParamLimits

0x2e92,	// (0x0004ec08) list_blid_sat_info_pane

0x2ea5,	// (0x0004ec1b) list_blid_sat_info_pane_g1

0x2ead,	// (0x0004ec23) list_blid_sat_info_pane_t1

0x82fc,	// (0x00054072) mup_equalizer_pane_ParamLimits

0x82fc,	// (0x00054072) mup_equalizer_pane

0x831d,	// (0x00054093) mup_equalizer_pane_cp1_ParamLimits

0x831d,	// (0x00054093) mup_equalizer_pane_cp1

0x833e,	// (0x000540b4) mup_equalizer_pane_cp2_ParamLimits

0x833e,	// (0x000540b4) mup_equalizer_pane_cp2

0x835f,	// (0x000540d5) mup_equalizer_pane_cp3_ParamLimits

0x835f,	// (0x000540d5) mup_equalizer_pane_cp3

0x8380,	// (0x000540f6) mup_equalizer_pane_cp4_ParamLimits

0x8380,	// (0x000540f6) mup_equalizer_pane_cp4

0x83a1,	// (0x00054117) mup_equalizer_pane_cp5

0x83b7,	// (0x0005412d) mup_equalizer_pane_cp6

0x83cf,	// (0x00054145) mup_equalizer_pane_cp7

0x40a0,	// (0x0004fe16) bg_popup_call_poc_act_pane_g9

0x40a8,	// (0x0004fe1e) bg_popup_call_poc_act_pane_g10

0x40b0,	// (0x0004fe26) bg_popup_call_poc_act_pane_g11

0x000a,

0x21f7,	// (0x0004df6d) mup_scale_pane

0x235b,	// (0x0004e0d1) mup_scale_pane_g1

0x2ebb,	// (0x0004ec31) mup_scale_pane_g2

0x0006,

0xf48e,	// (0x0005b204) mup_scale_pane_g

0x2edf,	// (0x0004ec55) msg_data_pane

0x2ee7,	// (0x0004ec5d) scroll_pane_cp017

0x83f9,	// (0x0005416f) bg_list_pane_cp04_ParamLimits

0x83f9,	// (0x0005416f) bg_list_pane_cp04

0x2eef,	// (0x0004ec65) msg_data_pane_g1

0x8419,	// (0x0005418f) msg_data_pane_g2

0x7c96,	// (0x00053a0c) msg_data_pane_g3

0x8421,	// (0x00054197) msg_data_pane_g4

0x8429,	// (0x0005419f) msg_data_pane_g5

0x8431,	// (0x000541a7) msg_data_pane_g6

0x8439,	// (0x000541af) msg_data_pane_g7

0x0006,

0xf49d,	// (0x0005b213) msg_data_pane_g

0x8441,	// (0x000541b7) msg_text_pane_ParamLimits

0x8441,	// (0x000541b7) msg_text_pane

0x8494,	// (0x0005420a) qrid_highlight_pane_cp011_ParamLimits

0x8494,	// (0x0005420a) qrid_highlight_pane_cp011

0x1f9c,	// (0x0004dd12) msg_body_pane

0x1f9c,	// (0x0004dd12) msg_header_pane

0x2f00,	// (0x0004ec76) input_focus_pane_cp07

0x84be,	// (0x00054234) msg_header_pane_t1_ParamLimits

0x84be,	// (0x00054234) msg_header_pane_t1

0x84d2,	// (0x00054248) msg_header_pane_t2_ParamLimits

0x84d2,	// (0x00054248) msg_header_pane_t2

0x0001,

0xf4b1,	// (0x0005b227) msg_header_pane_t_ParamLimits

0xf4b1,	// (0x0005b227) msg_header_pane_t

0x2f15,	// (0x0004ec8b) msg_body_pane_g1

0x84e4,	// (0x0005425a) msg_body_pane_t1_ParamLimits

0x84e4,	// (0x0005425a) msg_body_pane_t1

0x8515,	// (0x0005428b) msg_body_pane_t2_ParamLimits

0x8515,	// (0x0005428b) msg_body_pane_t2

0x8527,	// (0x0005429d) msg_body_pane_t3_ParamLimits

0x8527,	// (0x0005429d) msg_body_pane_t3

0x0002,

0xf4b6,	// (0x0005b22c) msg_body_pane_t_ParamLimits

0xf4b6,	// (0x0005b22c) msg_body_pane_t

0x858b,	// (0x00054301) main_viewer_pane_g1_ParamLimits

0x858b,	// (0x00054301) main_viewer_pane_g1

0x8597,	// (0x0005430d) main_viewer_pane_g2_ParamLimits

0x8597,	// (0x0005430d) main_viewer_pane_g2

0x85a3,	// (0x00054319) main_viewer_pane_g3_ParamLimits

0x85a3,	// (0x00054319) main_viewer_pane_g3

0x85b4,	// (0x0005432a) main_viewer_pane_g4_ParamLimits

0x85b4,	// (0x0005432a) main_viewer_pane_g4

0x85c5,	// (0x0005433b) main_viewer_pane_g5_ParamLimits

0x85c5,	// (0x0005433b) main_viewer_pane_g5

0x85c5,	// (0x0005433b) main_viewer_pane_g7_ParamLimits

0x85c5,	// (0x0005433b) main_viewer_pane_g7

0x85d7,	// (0x0005434d) main_viewer_pane_g8_ParamLimits

0x85d7,	// (0x0005434d) main_viewer_pane_g8

0x0007,

0xf4c6,	// (0x0005b23c) main_viewer_pane_g_ParamLimits

0xf4c6,	// (0x0005b23c) main_viewer_pane_g

0x2f1d,	// (0x0004ec93) viewer_content_pane_ParamLimits

0x2f1d,	// (0x0004ec93) viewer_content_pane

0x860f,	// (0x00054385) main_postcard_pane_g1_ParamLimits

0x860f,	// (0x00054385) main_postcard_pane_g1

0x861d,	// (0x00054393) main_postcard_pane_g2_ParamLimits

0x861d,	// (0x00054393) main_postcard_pane_g2

0x862b,	// (0x000543a1) main_postcard_pane_g3_ParamLimits

0x862b,	// (0x000543a1) main_postcard_pane_g3

0x0005,

0xf4d7,	// (0x0005b24d) main_postcard_pane_g_ParamLimits

0xf4d7,	// (0x0005b24d) main_postcard_pane_g

0x863b,	// (0x000543b1) main_postcard_pane_g4

0x42a2,	// (0x00050018) smil_status_volume_pane_g2

0x8667,	// (0x000543dd) postcard_pane_ParamLimits

0x8667,	// (0x000543dd) postcard_pane

0x2add,	// (0x0004e853) postcard_pane_g1_ParamLimits

0x2add,	// (0x0004e853) postcard_pane_g1

0x8699,	// (0x0005440f) postcard_pane_g2_ParamLimits

0x8699,	// (0x0005440f) postcard_pane_g2

0x86a5,	// (0x0005441b) postcard_pane_g3_ParamLimits

0x86a5,	// (0x0005441b) postcard_pane_g3

0x2f39,	// (0x0004ecaf) postcard_pane_g4_ParamLimits

0x2f39,	// (0x0004ecaf) postcard_pane_g4

0x86b1,	// (0x00054427) postcard_pane_g5_ParamLimits

0x86b1,	// (0x00054427) postcard_pane_g5

0x86bd,	// (0x00054433) postcard_pane_g6_ParamLimits

0x86bd,	// (0x00054433) postcard_pane_g6

0x2f2b,	// (0x0004eca1) postcard_pane_g7_ParamLimits

0x2f2b,	// (0x0004eca1) postcard_pane_g7

0x0006,

0xf4e4,	// (0x0005b25a) postcard_pane_g_ParamLimits

0xf4e4,	// (0x0005b25a) postcard_pane_g

0x86c9,	// (0x0005443f) main_mp2_pane_g1_ParamLimits

0x86c9,	// (0x0005443f) main_mp2_pane_g1

0x86d5,	// (0x0005444b) main_mp2_pane_g2_ParamLimits

0x86d5,	// (0x0005444b) main_mp2_pane_g2

0x86e1,	// (0x00054457) main_mp2_pane_g3_ParamLimits

0x86e1,	// (0x00054457) main_mp2_pane_g3

0x0002,

0xf4f3,	// (0x0005b269) main_mp2_pane_g_ParamLimits

0xf4f3,	// (0x0005b269) main_mp2_pane_g

0x86ed,	// (0x00054463) main_mp2_pane_t1_ParamLimits

0x86ed,	// (0x00054463) main_mp2_pane_t1

0x8704,	// (0x0005447a) main_mp2_pane_t2_ParamLimits

0x8704,	// (0x0005447a) main_mp2_pane_t2

0x8716,	// (0x0005448c) main_mp2_pane_t3_ParamLimits

0x8716,	// (0x0005448c) main_mp2_pane_t3

0x0002,

0xf4fa,	// (0x0005b270) main_mp2_pane_t_ParamLimits

0xf4fa,	// (0x0005b270) main_mp2_pane_t

0x2f47,	// (0x0004ecbd) pec_content_pane_ParamLimits

0x2f47,	// (0x0004ecbd) pec_content_pane

0x2666,	// (0x0004e3dc) scroll_pane_cp015

0x2f59,	// (0x0004eccf) pec_attribute_pane_ParamLimits

0x2f59,	// (0x0004eccf) pec_attribute_pane

0x8728,	// (0x0005449e) pec_content_pane_g1_ParamLimits

0x8728,	// (0x0005449e) pec_content_pane_g1

0x2f69,	// (0x0004ecdf) pec_content_pane_t1_ParamLimits

0x2f69,	// (0x0004ecdf) pec_content_pane_t1

0x2f7b,	// (0x0004ecf1) pec_content_pane_t2_ParamLimits

0x2f7b,	// (0x0004ecf1) pec_content_pane_t2

0x0001,

0xf501,	// (0x0005b277) pec_content_pane_t_ParamLimits

0xf501,	// (0x0005b277) pec_content_pane_t

0x8734,	// (0x000544aa) list_single_graphic_pane_cp01_ParamLimits

0x8734,	// (0x000544aa) list_single_graphic_pane_cp01

0x21f7,	// (0x0004df6d) bg_popup_sub_pane_cp04

0x2f8d,	// (0x0004ed03) popup_mup_playback_window_g1

0x2f99,	// (0x0004ed0f) popup_mup_playback_window_t1

0x2fae,	// (0x0004ed24) popup_mup_playback_window_t2

0x0001,

0xf506,	// (0x0005b27c) popup_mup_playback_window_t

0x2fe5,	// (0x0004ed5b) main_image_pane_g1_ParamLimits

0x2fe5,	// (0x0004ed5b) main_image_pane_g1

0x3028,	// (0x0004ed9e) scroll_pane_cp018_ParamLimits

0x3028,	// (0x0004ed9e) scroll_pane_cp018

0x3040,	// (0x0004edb6) scroll_pane_cp016_ParamLimits

0x3040,	// (0x0004edb6) scroll_pane_cp016

0x87d8,	// (0x0005454e) smil2_image_pane_ParamLimits

0x87d8,	// (0x0005454e) smil2_image_pane

0x880c,	// (0x00054582) smil2_root_pane_ParamLimits

0x880c,	// (0x00054582) smil2_root_pane

0x8838,	// (0x000545ae) smil2_text_pane_ParamLimits

0x8838,	// (0x000545ae) smil2_text_pane

0x1f9c,	// (0x0004dd12) bg_list_pane_cp06

0x307c,	// (0x0004edf2) grid_radio_pane

0x1f9c,	// (0x0004dd12) bg_popup_window_pane_cp06

0x3084,	// (0x0004edfa) main_fmradio_pane_t1

0x2b11,	// (0x0004e887) heading_pane_cp04

0x3092,	// (0x0004ee08) main_fmradio_pane_t2

0x40b8,	// (0x0004fe2e) popup_cale_lunar_info_window_g1

0x30a0,	// (0x0004ee16) main_fmradio_pane_t3

0x40c0,	// (0x0004fe36) popup_cale_lunar_info_window_g2

0x30ae,	// (0x0004ee24) main_fmradio_pane_t4

0x0001,

0x30bc,	// (0x0004ee32) main_fmradio_pane_t5

0x0004,

0xf5e1,	// (0x0005b357) popup_cale_lunar_info_window_g

0xf51b,	// (0x0005b291) main_fmradio_pane_t

0x30ca,	// (0x0004ee40) wait_bar_pane_cp03

0x30d2,	// (0x0004ee48) cell_fmradio_pane_ParamLimits

0x30d2,	// (0x0004ee48) cell_fmradio_pane

0x2f2b,	// (0x0004eca1) cell_fmradio_pane_g1_ParamLimits

0x2f2b,	// (0x0004eca1) cell_fmradio_pane_g1

0x1f9c,	// (0x0004dd12) grid_highlight_pane_cp011

0x30e5,	// (0x0004ee5b) poc_content_pane_ParamLimits

0x30e5,	// (0x0004ee5b) poc_content_pane

0x30f7,	// (0x0004ee6d) scroll_pane_cp019

0x8878,	// (0x000545ee) popup_call_poc_act_window_ParamLimits

0x8878,	// (0x000545ee) popup_call_poc_act_window

0x8885,	// (0x000545fb) popup_call_poc_inact_window_ParamLimits

0x8885,	// (0x000545fb) popup_call_poc_inact_window

0xf5b8,	// (0x0005b32e) bg_popup_call_poc_act_pane_g

0x4028,	// (0x0004fd9e) bg_popup_call_poc_inact_pane_g1

0x4030,	// (0x0004fda6) bg_popup_call_poc_inact_pane_g2

0x30ff,	// (0x0004ee75) popup_call_poc_act_window_g2

0x4038,	// (0x0004fdae) bg_popup_call_poc_inact_pane_g3

0x4040,	// (0x0004fdb6) bg_popup_call_poc_inact_pane_g4

0x4048,	// (0x0004fdbe) bg_popup_call_poc_inact_pane_g5

0x3107,	// (0x0004ee7d) popup_call_poc_act_window_t1_ParamLimits

0x3107,	// (0x0004ee7d) popup_call_poc_act_window_t1

0x312f,	// (0x0004eea5) popup_call_poc_act_window_t2_ParamLimits

0x312f,	// (0x0004eea5) popup_call_poc_act_window_t2

0x3157,	// (0x0004eecd) popup_call_poc_act_window_t3_ParamLimits

0x3157,	// (0x0004eecd) popup_call_poc_act_window_t3

0x317f,	// (0x0004eef5) popup_call_poc_act_window_t4_ParamLimits

0x317f,	// (0x0004eef5) popup_call_poc_act_window_t4

0x0003,

0xf526,	// (0x0005b29c) popup_call_poc_act_window_t_ParamLimits

0xf526,	// (0x0005b29c) popup_call_poc_act_window_t

0x4050,	// (0x0004fdc6) bg_popup_call_poc_inact_pane_g6

0x4058,	// (0x0004fdce) bg_popup_call_poc_inact_pane_g7

0x4060,	// (0x0004fdd6) bg_popup_call_poc_inact_pane_g8

0x3191,	// (0x0004ef07) popup_call_poc_inact_window_g2

0x4068,	// (0x0004fdde) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf5a5,	// (0x0005b31b) bg_popup_call_poc_inact_pane_g

0x3199,	// (0x0004ef0f) popup_call_poc_inact_window_t1_ParamLimits

0x3199,	// (0x0004ef0f) popup_call_poc_inact_window_t1

0x31ae,	// (0x0004ef24) popup_call_poc_inact_window_t2_ParamLimits

0x31ae,	// (0x0004ef24) popup_call_poc_inact_window_t2

0x31c3,	// (0x0004ef39) popup_call_poc_inact_window_t3_ParamLimits

0x31c3,	// (0x0004ef39) popup_call_poc_inact_window_t3

0x0002,

0xf52f,	// (0x0005b2a5) popup_call_poc_inact_window_t_ParamLimits

0xf52f,	// (0x0005b2a5) popup_call_poc_inact_window_t

0x4228,	// (0x0004ff9e) context_pane_ParamLimits

0x8e6c,	// (0x00054be2) signal_pane_ParamLimits

0x2d8e,	// (0x0004eb04) main_call2_pane

0x4216,	// (0x0004ff8c) popup_phob_thumbnail2_window_ParamLimits

0x4216,	// (0x0004ff8c) popup_phob_thumbnail2_window

0x8539,	// (0x000542af) aid_hotspot_pointer_arrow_pane

0x8541,	// (0x000542b7) aid_hotspot_pointer_hand_pane

0x8baa,	// (0x00054920) phob_pre_status_pane_g5

0x67de,	// (0x00052554) cams_zoom_pane_ParamLimits

0x67ea,	// (0x00052560) image_vga_pane_ParamLimits

0x67f9,	// (0x0005256f) main_camera_pane_g1_ParamLimits

0x6807,	// (0x0005257d) main_camera_pane_g2_ParamLimits

0x6815,	// (0x0005258b) main_camera_pane_g3_ParamLimits

0x6821,	// (0x00052597) main_camera_pane_g4_ParamLimits

0x682d,	// (0x000525a3) main_camera_pane_g5_ParamLimits

0x6839,	// (0x000525af) main_camera_pane_g6_ParamLimits

0x6845,	// (0x000525bb) main_camera_pane_g7_ParamLimits

0xf22e,	// (0x0005afa4) main_camera_pane_g_ParamLimits

0x6851,	// (0x000525c7) main_camera_pane_t1_ParamLimits

0x6863,	// (0x000525d9) main_camera_pane_t2_ParamLimits

0xf23f,	// (0x0005afb5) main_camera_pane_t_ParamLimits

0x21f7,	// (0x0004df6d) bg_popup_preview_window_pane_cp01_ParamLimits

0x21f7,	// (0x0004df6d) bg_popup_preview_window_pane_cp01

0x31d8,	// (0x0004ef4e) popup_phob_thumbnail2_window_g1_ParamLimits

0x31d8,	// (0x0004ef4e) popup_phob_thumbnail2_window_g1

0x1f9c,	// (0x0004dd12) call2_cli_visual_pane

0x88a1,	// (0x00054617) popup_call2_audio_conf_window_ParamLimits

0x88a1,	// (0x00054617) popup_call2_audio_conf_window

0x88b6,	// (0x0005462c) popup_call2_audio_first_window_ParamLimits

0x88b6,	// (0x0005462c) popup_call2_audio_first_window

0x8954,	// (0x000546ca) popup_call2_audio_in_window_ParamLimits

0x8954,	// (0x000546ca) popup_call2_audio_in_window

0x8996,	// (0x0005470c) popup_call2_audio_out_window_ParamLimits

0x8996,	// (0x0005470c) popup_call2_audio_out_window

0x89f8,	// (0x0005476e) popup_call2_audio_second_window_ParamLimits

0x89f8,	// (0x0005476e) popup_call2_audio_second_window

0x8a56,	// (0x000547cc) popup_call2_audio_wait_window_ParamLimits

0x8a56,	// (0x000547cc) popup_call2_audio_wait_window

0x1f9c,	// (0x0004dd12) bg_popup_call2_act_pane_cp03

0x21d9,	// (0x0004df4f) list_conf_pane_cp

0x31e4,	// (0x0004ef5a) popup_call2_audio_conf_window_t1

0x31f2,	// (0x0004ef68) list_single_graphic_popup_conf2_pane_ParamLimits

0x31f2,	// (0x0004ef68) list_single_graphic_popup_conf2_pane

0x2ba4,	// (0x0004e91a) list_highlight_pane_cp04

0x3205,	// (0x0004ef7b) list_single_graphic_popup_conf2_pane_g1

0x2bb5,	// (0x0004e92b) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf536,	// (0x0005b2ac) list_single_graphic_popup_conf2_pane_g

0x320f,	// (0x0004ef85) list_single_graphic_popup_conf2_pane_t1

0x321d,	// (0x0004ef93) bg_popup_call2_act_pane_cp01_ParamLimits

0x321d,	// (0x0004ef93) bg_popup_call2_act_pane_cp01

0x32a7,	// (0x0004f01d) call_type_pane_cp05_ParamLimits

0x32a7,	// (0x0004f01d) call_type_pane_cp05

0x32fb,	// (0x0004f071) popup_call2_audio_second_window_g1_ParamLimits

0x32fb,	// (0x0004f071) popup_call2_audio_second_window_g1

0x334f,	// (0x0004f0c5) popup_call2_audio_second_window_g2_ParamLimits

0x334f,	// (0x0004f0c5) popup_call2_audio_second_window_g2

0x0002,

0xf53b,	// (0x0005b2b1) popup_call2_audio_second_window_g_ParamLimits

0xf53b,	// (0x0005b2b1) popup_call2_audio_second_window_g

0x33b4,	// (0x0004f12a) popup_call2_audio_second_window_t1_ParamLimits

0x33b4,	// (0x0004f12a) popup_call2_audio_second_window_t1

0x346f,	// (0x0004f1e5) popup_call2_audio_second_window_t2_ParamLimits

0x346f,	// (0x0004f1e5) popup_call2_audio_second_window_t2

0x34c2,	// (0x0004f238) popup_call2_audio_second_window_t3_ParamLimits

0x34c2,	// (0x0004f238) popup_call2_audio_second_window_t3

0x0003,

0xf542,	// (0x0005b2b8) popup_call2_audio_second_window_t_ParamLimits

0xf542,	// (0x0005b2b8) popup_call2_audio_second_window_t

0x1f9c,	// (0x0004dd12) bg_popup_call2_in_pane_cp02

0x1fa6,	// (0x0004dd1c) call_type_pane_cp04

0x1fae,	// (0x0004dd24) popup_call2_audio_wait_window_g1

0x1fb6,	// (0x0004dd2c) popup_call2_audio_wait_window_g2

0x0001,

0xf11b,	// (0x0005ae91) popup_call2_audio_wait_window_g

0x1fbe,	// (0x0004dd34) popup_call2_audio_wait_window_t3

0x35b5,	// (0x0004f32b) bg_popup_call2_act_pane_ParamLimits

0x35b5,	// (0x0004f32b) bg_popup_call2_act_pane

0x36a6,	// (0x0004f41c) call_type_pane_cp03_ParamLimits

0x36a6,	// (0x0004f41c) call_type_pane_cp03

0x370a,	// (0x0004f480) popup_call2_audio_first_window_g1_ParamLimits

0x370a,	// (0x0004f480) popup_call2_audio_first_window_g1

0x3786,	// (0x0004f4fc) popup_call2_audio_first_window_g2_ParamLimits

0x3786,	// (0x0004f4fc) popup_call2_audio_first_window_g2

0x2add,	// (0x0004e853) popup_call2_audio_first_window_g3_ParamLimits

0x2add,	// (0x0004e853) popup_call2_audio_first_window_g3

0x0004,

0xf54b,	// (0x0005b2c1) popup_call2_audio_first_window_g_ParamLimits

0xf54b,	// (0x0005b2c1) popup_call2_audio_first_window_g

0x3864,	// (0x0004f5da) popup_call2_audio_first_window_t1_ParamLimits

0x3864,	// (0x0004f5da) popup_call2_audio_first_window_t1

0x3967,	// (0x0004f6dd) popup_call2_audio_first_window_t4_ParamLimits

0x3967,	// (0x0004f6dd) popup_call2_audio_first_window_t4

0x3a53,	// (0x0004f7c9) popup_call2_audio_first_window_t5_ParamLimits

0x3a53,	// (0x0004f7c9) popup_call2_audio_first_window_t5

0x0003,

0xf556,	// (0x0005b2cc) popup_call2_audio_first_window_t_ParamLimits

0xf556,	// (0x0005b2cc) popup_call2_audio_first_window_t

0x21ef,	// (0x0004df65) bg_popup_call2_act_pane_g1

0x40c8,	// (0x0004fe3e) popup_cale_lunar_info_window_t1

0x40d6,	// (0x0004fe4c) popup_cale_lunar_info_window_t2

0x40e4,	// (0x0004fe5a) popup_cale_lunar_info_window_t3

0x1f9c,	// (0x0004dd12) bg_popup_call2_bubble_pane

0x3b54,	// (0x0004f8ca) bg_popup_call2_in_pane_cp01_ParamLimits

0x3b54,	// (0x0004f8ca) bg_popup_call2_in_pane_cp01

0x1c78,	// (0x0004d9ee) call_type_pane_cp02

0x3b9c,	// (0x0004f912) popup_call2_audio_out_window_g1_ParamLimits

0x3b9c,	// (0x0004f912) popup_call2_audio_out_window_g1

0x3bc8,	// (0x0004f93e) popup_call2_audio_out_window_g2_ParamLimits

0x3bc8,	// (0x0004f93e) popup_call2_audio_out_window_g2

0x3bf0,	// (0x0004f966) popup_call2_audio_out_window_g3_ParamLimits

0x3bf0,	// (0x0004f966) popup_call2_audio_out_window_g3

0x0003,

0xf55f,	// (0x0005b2d5) popup_call2_audio_out_window_g_ParamLimits

0xf55f,	// (0x0005b2d5) popup_call2_audio_out_window_g

0x3c2b,	// (0x0004f9a1) popup_call2_audio_out_window_t1_ParamLimits

0x3c2b,	// (0x0004f9a1) popup_call2_audio_out_window_t1

0x3c8a,	// (0x0004fa00) popup_call2_audio_out_window_t2_ParamLimits

0x3c8a,	// (0x0004fa00) popup_call2_audio_out_window_t2

0x3cde,	// (0x0004fa54) popup_call2_audio_out_window_t3_ParamLimits

0x3cde,	// (0x0004fa54) popup_call2_audio_out_window_t3

0x3cf4,	// (0x0004fa6a) popup_call2_audio_out_window_t4_ParamLimits

0x3cf4,	// (0x0004fa6a) popup_call2_audio_out_window_t4

0x3d0a,	// (0x0004fa80) popup_call2_audio_out_window_t5_ParamLimits

0x3d0a,	// (0x0004fa80) popup_call2_audio_out_window_t5

0x0005,

0xf568,	// (0x0005b2de) popup_call2_audio_out_window_t_ParamLimits

0xf568,	// (0x0005b2de) popup_call2_audio_out_window_t

0x3d6e,	// (0x0004fae4) bg_popup_call2_in_pane_ParamLimits

0x3d6e,	// (0x0004fae4) bg_popup_call2_in_pane

0x3dca,	// (0x0004fb40) popup_call2_audio_in_window_g1_ParamLimits

0x3dca,	// (0x0004fb40) popup_call2_audio_in_window_g1

0x3e02,	// (0x0004fb78) popup_call2_audio_in_window_g2_ParamLimits

0x3e02,	// (0x0004fb78) popup_call2_audio_in_window_g2

0x3e3a,	// (0x0004fbb0) popup_call2_audio_in_window_g3_ParamLimits

0x3e3a,	// (0x0004fbb0) popup_call2_audio_in_window_g3

0x0003,

0xf575,	// (0x0005b2eb) popup_call2_audio_in_window_g_ParamLimits

0xf575,	// (0x0005b2eb) popup_call2_audio_in_window_g

0x3e92,	// (0x0004fc08) popup_call2_audio_in_window_t1_ParamLimits

0x3e92,	// (0x0004fc08) popup_call2_audio_in_window_t1

0x3f12,	// (0x0004fc88) popup_call2_audio_in_window_t2_ParamLimits

0x3f12,	// (0x0004fc88) popup_call2_audio_in_window_t2

0x3f92,	// (0x0004fd08) popup_call2_audio_in_window_t3_ParamLimits

0x3f92,	// (0x0004fd08) popup_call2_audio_in_window_t3

0x3fac,	// (0x0004fd22) popup_call2_audio_in_window_t4_ParamLimits

0x3fac,	// (0x0004fd22) popup_call2_audio_in_window_t4

0x3fbe,	// (0x0004fd34) popup_call2_audio_in_window_t5_ParamLimits

0x3fbe,	// (0x0004fd34) popup_call2_audio_in_window_t5

0x3fd3,	// (0x0004fd49) popup_call2_audio_in_window_t6_ParamLimits

0x3fd3,	// (0x0004fd49) popup_call2_audio_in_window_t6

0x0005,

0xf57e,	// (0x0005b2f4) popup_call2_audio_in_window_t_ParamLimits

0xf57e,	// (0x0005b2f4) popup_call2_audio_in_window_t

0x21ef,	// (0x0004df65) bg_popup_call2_in_pane_g1

0x40f2,	// (0x0004fe68) popup_cale_lunar_info_window_t4

0x0003,

0xf5e6,	// (0x0005b35c) popup_cale_lunar_info_window_t

0x21f7,	// (0x0004df6d) bg_popup_call2_rect_pane_ParamLimits

0x21f7,	// (0x0004df6d) bg_popup_call2_rect_pane

0x1f9c,	// (0x0004dd12) call2_cli_visual_graphic_pane

0x1f9c,	// (0x0004dd12) call2_cli_visual_text_pane

0x8f1c,	// (0x00054c92) smil_status_volume_pane_g3

0x0002,

0x235b,	// (0x0004e0d1) call2_cli_visual_graphic_pane_g1

0x235b,	// (0x0004e0d1) call2_cli_visual_graphic_pane_g2

0x235b,	// (0x0004e0d1) call2_cli_visual_graphic_pane_g3

0x0002,

0xf58b,	// (0x0005b301) call2_cli_visual_graphic_pane_g

0x3fe8,	// (0x0004fd5e) bg_popup_call2_rect_pane_g1

0x23f9,	// (0x0004e16f) bg_popup_call2_rect_pane_g2

0x3ff0,	// (0x0004fd66) bg_popup_call2_rect_pane_g3

0x3ff8,	// (0x0004fd6e) bg_popup_call2_rect_pane_g4

0x4000,	// (0x0004fd76) bg_popup_call2_rect_pane_g5

0x4008,	// (0x0004fd7e) bg_popup_call2_rect_pane_g6

0x4010,	// (0x0004fd86) bg_popup_call2_rect_pane_g7

0x4018,	// (0x0004fd8e) bg_popup_call2_rect_pane_g8

0x4020,	// (0x0004fd96) bg_popup_call2_rect_pane_g9

0x0008,

0xf592,	// (0x0005b308) bg_popup_call2_rect_pane_g

0x4028,	// (0x0004fd9e) bg_popup_call2_bubble_pane_g1

0x4030,	// (0x0004fda6) bg_popup_call2_bubble_pane_g2

0x4038,	// (0x0004fdae) bg_popup_call2_bubble_pane_g3

0x4040,	// (0x0004fdb6) bg_popup_call2_bubble_pane_g4

0x4048,	// (0x0004fdbe) bg_popup_call2_bubble_pane_g5

0x4050,	// (0x0004fdc6) bg_popup_call2_bubble_pane_g6

0x4058,	// (0x0004fdce) bg_popup_call2_bubble_pane_g7

0x4060,	// (0x0004fdd6) bg_popup_call2_bubble_pane_g8

0x4068,	// (0x0004fdde) bg_popup_call2_bubble_pane_g9

0x0008,

0xf5a5,	// (0x0005b31b) bg_popup_call2_bubble_pane_g

0x6381,	// (0x000520f7) aid_cale_week_size_cell_pane

0x6875,	// (0x000525eb) aid_cams_cif_uncrop_pane_ParamLimits

0x6875,	// (0x000525eb) aid_cams_cif_uncrop_pane

0x69d8,	// (0x0005274e) aid_cams_size_cell_ParamLimits

0x69d8,	// (0x0005274e) aid_cams_size_cell

0x69e4,	// (0x0005275a) grid_cams_pane_ParamLimits

0x69f2,	// (0x00052768) linegrid_cams_pane_ParamLimits

0x6b1b,	// (0x00052891) call_video_pane_t1

0x6b3c,	// (0x000528b2) call_video_pane_t2

0x0001,

0xf292,	// (0x0005b008) call_video_pane_t

0x70bc,	// (0x00052e32) aid_cale_month_size_cell_pane_ParamLimits

0x70bc,	// (0x00052e32) aid_cale_month_size_cell_pane

0xf62f,	// (0x0005b3a5) smil_status_volume_pane_g

0x8f29,	// (0x00054c9f) volume_smil_pane_ParamLimits

0x0462,	// (0x0004c1d8) aid_popup2_width_pane

0x6268,	// (0x00051fde) cell_qdial_pane_g4_ParamLimits

0x6268,	// (0x00051fde) cell_qdial_pane_g4

0x7e0a,	// (0x00053b80) aid_blid_cardinal_pane_ParamLimits

0x7e1a,	// (0x00053b90) aid_blid_destination_pane_ParamLimits

0x7e1a,	// (0x00053b90) aid_blid_destination_pane

0x21f7,	// (0x0004df6d) bg_popup_call_poc_act_pane_ParamLimits

0x21f7,	// (0x0004df6d) bg_popup_call_poc_act_pane

0x21f7,	// (0x0004df6d) bg_popup_call_poc_inact_pane_ParamLimits

0x21f7,	// (0x0004df6d) bg_popup_call_poc_inact_pane

0x4078,	// (0x0004fdee) bg_popup_call_poc_act_pane_g1

0x4080,	// (0x0004fdf6) bg_popup_call_poc_act_pane_g2

0x4088,	// (0x0004fdfe) bg_popup_call_poc_act_pane_g3

0x4040,	// (0x0004fdb6) bg_popup_call_poc_act_pane_g4

0x4048,	// (0x0004fdbe) bg_popup_call_poc_act_pane_g5

0x4090,	// (0x0004fe06) bg_popup_call_poc_act_pane_g6

0x4058,	// (0x0004fdce) bg_popup_call_poc_act_pane_g7

0x4098,	// (0x0004fe0e) bg_popup_call_poc_act_pane_g8

0x1f9c,	// (0x0004dd12) main_usb_pane

0x41f1,	// (0x0004ff67) popup_cale_lunar_info_window

0x6e5b,	// (0x00052bd1) im_reading_pane_t1_ParamLimits

0x25be,	// (0x0004e334) list_im_pane_ParamLimits

0x25cf,	// (0x0004e345) scroll_pane_cp07_ParamLimits

0x1f9c,	// (0x0004dd12) grid_highlight_pane_cp012

0x21f7,	// (0x0004df6d) mup_scale_pane_ParamLimits

0x2add,	// (0x0004e853) main_usb_pane_g1_ParamLimits

0x2add,	// (0x0004e853) main_usb_pane_g1

0x8acd,	// (0x00054843) main_usb_pane_g2_ParamLimits

0x8acd,	// (0x00054843) main_usb_pane_g2

0x0001,

0xf5cf,	// (0x0005b345) main_usb_pane_g_ParamLimits

0xf5cf,	// (0x0005b345) main_usb_pane_g

0x8ad9,	// (0x0005484f) main_usb_pane_t1_ParamLimits

0x8ad9,	// (0x0005484f) main_usb_pane_t1

0x8aeb,	// (0x00054861) main_usb_pane_t2_ParamLimits

0x8aeb,	// (0x00054861) main_usb_pane_t2

0x8afd,	// (0x00054873) main_usb_pane_t3_ParamLimits

0x8afd,	// (0x00054873) main_usb_pane_t3

0x8b0f,	// (0x00054885) main_usb_pane_t4_ParamLimits

0x8b0f,	// (0x00054885) main_usb_pane_t4

0x8b21,	// (0x00054897) main_usb_pane_t5_ParamLimits

0x8b21,	// (0x00054897) main_usb_pane_t5

0x8b33,	// (0x000548a9) main_usb_pane_t6_ParamLimits

0x8b33,	// (0x000548a9) main_usb_pane_t6

0x0005,

0xf5d4,	// (0x0005b34a) main_usb_pane_t_ParamLimits

0x7db0,	// (0x00053b26) aid_text_placing

0x7dbc,	// (0x00053b32) main_location2_pane_t1_ParamLimits

0x7dd0,	// (0x00053b46) main_location2_pane_t2_ParamLimits

0x7de4,	// (0x00053b5a) main_location2_pane_t3_ParamLimits

0x7df8,	// (0x00053b6e) main_location2_pane_t4_ParamLimits

0x7df8,	// (0x00053b6e) main_location2_pane_t4

0xf3f3,	// (0x0005b169) main_location2_pane_t_ParamLimits

0x223b,	// (0x0004dfb1) find_pinb_pane_g2_ParamLimits

0x223b,	// (0x0004dfb1) find_pinb_pane_g2

0x0001,

0xf141,	// (0x0005aeb7) find_pinb_pane_g_ParamLimits

0xf141,	// (0x0005aeb7) find_pinb_pane_g

0x2247,	// (0x0004dfbd) find_pinb_pane_t1_ParamLimits

0x2259,	// (0x0004dfcf) find_pinb_pane_t2_ParamLimits

0xf146,	// (0x0005aebc) find_pinb_pane_t_ParamLimits

0x1f9c,	// (0x0004dd12) main_call3_pane

0x74d4,	// (0x0005324a) cale_month_day_heading_pane_t1_ParamLimits

0x7532,	// (0x000532a8) cale_month_day_heading_pane_t2_ParamLimits

0x7597,	// (0x0005330d) cale_month_day_heading_pane_t3_ParamLimits

0x75fc,	// (0x00053372) cale_month_day_heading_pane_t4_ParamLimits

0x7661,	// (0x000533d7) cale_month_day_heading_pane_t5_ParamLimits

0x76c6,	// (0x0005343c) cale_month_day_heading_pane_t6_ParamLimits

0x7733,	// (0x000534a9) cale_month_day_heading_pane_t7_ParamLimits

0xf2ca,	// (0x0005b040) cale_month_day_heading_pane_t_ParamLimits

0x280f,	// (0x0004e585) smil_status_volume_pane

0x8681,	// (0x000543f7) postcard_address_pane_ParamLimits

0x8681,	// (0x000543f7) postcard_address_pane

0x868d,	// (0x00054403) postcard_message_pane_ParamLimits

0x868d,	// (0x00054403) postcard_message_pane

0x8a95,	// (0x0005480b) call2_cli_visual_pane_t1_ParamLimits

0x8a95,	// (0x0005480b) call2_cli_visual_pane_t1

0x907c,	// (0x00054df2) postcard_message_pane_t1_ParamLimits

0x907c,	// (0x00054df2) postcard_message_pane_t1

0x9065,	// (0x00054ddb) postcard_address_pane_t1_ParamLimits

0x9065,	// (0x00054ddb) postcard_address_pane_t1

0x9056,	// (0x00054dcc) popup_call3_audio_in_window_ParamLimits

0x9056,	// (0x00054dcc) popup_call3_audio_in_window

0x8f3e,	// (0x00054cb4) bg_popup_call3_in_pane_ParamLimits

0x8f3e,	// (0x00054cb4) bg_popup_call3_in_pane

0x8f9c,	// (0x00054d12) popup_call3_audio_in_window_g1_ParamLimits

0x8f9c,	// (0x00054d12) popup_call3_audio_in_window_g1

0x8fb4,	// (0x00054d2a) popup_call3_audio_in_window_g2_ParamLimits

0x8fb4,	// (0x00054d2a) popup_call3_audio_in_window_g2

0x8fcc,	// (0x00054d42) popup_call3_audio_in_window_g3_ParamLimits

0x8fcc,	// (0x00054d42) popup_call3_audio_in_window_g3

0x0003,

0xf636,	// (0x0005b3ac) popup_call3_audio_in_window_g_ParamLimits

0xf636,	// (0x0005b3ac) popup_call3_audio_in_window_g

0x8ff4,	// (0x00054d6a) popup_call3_audio_in_window_t1_ParamLimits

0x8ff4,	// (0x00054d6a) popup_call3_audio_in_window_t1

0x901c,	// (0x00054d92) popup_call3_audio_in_window_t2_ParamLimits

0x901c,	// (0x00054d92) popup_call3_audio_in_window_t2

0x9044,	// (0x00054dba) popup_call3_audio_in_window_t3_ParamLimits

0x9044,	// (0x00054dba) popup_call3_audio_in_window_t3

0x0002,

0xf63f,	// (0x0005b3b5) popup_call3_audio_in_window_t_ParamLimits

0xf63f,	// (0x0005b3b5) popup_call3_audio_in_window_t

0x2d8e,	// (0x0004eb04) bg_popup_call3_rect_pane

0x3fe8,	// (0x0004fd5e) bg_popup_call3_rect_pane_g1

0x23f9,	// (0x0004e16f) bg_popup_call3_rect_pane_g2

0x3ff0,	// (0x0004fd66) bg_popup_call3_rect_pane_g3

0x3ff8,	// (0x0004fd6e) bg_popup_call3_rect_pane_g4

0x4000,	// (0x0004fd76) bg_popup_call3_rect_pane_g5

0x4008,	// (0x0004fd7e) bg_popup_call3_rect_pane_g6

0x4010,	// (0x0004fd86) bg_popup_call3_rect_pane_g7

0x820c,	// (0x00053f82) mup_visualizer_osc_pane

0x2e4d,	// (0x0004ebc3) mup_visualizer_spec_pane

0x8f5e,	// (0x00054cd4) call3_video_qcif_pane_ParamLimits

0x8f5e,	// (0x00054cd4) call3_video_qcif_pane

0x8f6e,	// (0x00054ce4) call3_video_qcif_uncrop_pane_ParamLimits

0x8f6e,	// (0x00054ce4) call3_video_qcif_uncrop_pane

0x8f7a,	// (0x00054cf0) call3_video_subqcif_pane_ParamLimits

0x8f7a,	// (0x00054cf0) call3_video_subqcif_pane

0x8f8c,	// (0x00054d02) call3_video_subqcif_uncrop_pane_ParamLimits

0x8f8c,	// (0x00054d02) call3_video_subqcif_uncrop_pane

0x8fe4,	// (0x00054d5a) popup_call3_audio_in_window_g4_ParamLimits

0x8fe4,	// (0x00054d5a) popup_call3_audio_in_window_g4

0x8f0b,	// (0x00054c81) mup_spec_half_pane

0x8f14,	// (0x00054c8a) mup_spec_half_pane_cp

0x4288,	// (0x0004fffe) mup_osc_middle_pane

0x4291,	// (0x00050007) mup_visualizer_osc_pane_g1

0x8eec,	// (0x00054c62) mup_spec_bar_pane_ParamLimits

0x8eec,	// (0x00054c62) mup_spec_bar_pane

0x4275,	// (0x0004ffeb) mup_spec_bar_pane_g1

0x427f,	// (0x0004fff5) mup_spec_bar_pane_g2

0x0001,

0xf62a,	// (0x0005b3a0) mup_spec_bar_pane_g

0x6381,	// (0x000520f7) aid_cale_week_size_cell_pane_ParamLimits

0x6394,	// (0x0005210a) bg_cale_heading_pane_ParamLimits

0x242d,	// (0x0004e1a3) bg_cale_pane_cp01_ParamLimits

0x63b0,	// (0x00052126) cale_week_corner_pane_ParamLimits

0x63c1,	// (0x00052137) cale_week_day_heading_pane_ParamLimits

0x63dd,	// (0x00052153) cale_week_scroll_pane_g1_ParamLimits

0x63f6,	// (0x0005216c) cale_week_scroll_pane_g2_ParamLimits

0x6407,	// (0x0005217d) cale_week_scroll_pane_g3_ParamLimits

0x6418,	// (0x0005218e) cale_week_scroll_pane_g4_ParamLimits

0x6429,	// (0x0005219f) cale_week_scroll_pane_g5_ParamLimits

0x643a,	// (0x000521b0) cale_week_scroll_pane_g6_ParamLimits

0x644b,	// (0x000521c1) cale_week_scroll_pane_g7_ParamLimits

0x645e,	// (0x000521d4) cale_week_scroll_pane_g8_ParamLimits

0x6471,	// (0x000521e7) cale_week_scroll_pane_g9_ParamLimits

0x6482,	// (0x000521f8) cale_week_scroll_pane_g10_ParamLimits

0x6493,	// (0x00052209) cale_week_scroll_pane_g11_ParamLimits

0x64a4,	// (0x0005221a) cale_week_scroll_pane_g12_ParamLimits

0x64bd,	// (0x00052233) cale_week_scroll_pane_g13_ParamLimits

0x64d6,	// (0x0005224c) cale_week_scroll_pane_g14_ParamLimits

0x64ef,	// (0x00052265) cale_week_scroll_pane_g15_ParamLimits

0xf1d2,	// (0x0005af48) cale_week_scroll_pane_g_ParamLimits

0x6508,	// (0x0005227e) cale_week_time_pane_ParamLimits

0x651b,	// (0x00052291) grid_cale_week_pane_ParamLimits

0x2446,	// (0x0004e1bc) listscroll_cale_week_pane_t1

0x6538,	// (0x000522ae) scroll_pane_cp08_ParamLimits

0x710d,	// (0x00052e83) cale_month_corner_pane_ParamLimits

0x27e5,	// (0x0004e55b) cale_month_pane_t1

0x7483,	// (0x000531f9) cale_month_week_pane_ParamLimits

0x2add,	// (0x0004e853) popup_call_status_window_g1_ParamLimits

0x7bec,	// (0x00053962) popup_call_status_window_g2_ParamLimits

0x7bf8,	// (0x0005396e) popup_call_status_window_g3_ParamLimits

0xf37a,	// (0x0005b0f0) popup_call_status_window_g_ParamLimits

0x2b09,	// (0x0004e87f) aid_call2_pane

0x84b0,	// (0x00054226) msg_header_pane_g1

0x8681,	// (0x000543f7) postcard_address2_pane_ParamLimits

0x8681,	// (0x000543f7) postcard_address2_pane

0x868d,	// (0x00054403) postcard_message2_pane_ParamLimits

0x868d,	// (0x00054403) postcard_message2_pane

0x8e7a,	// (0x00054bf0) message2_row_pane_ParamLimits

0x8e7a,	// (0x00054bf0) message2_row_pane

0x8e97,	// (0x00054c0d) address2_row_pane_ParamLimits

0x8e97,	// (0x00054c0d) address2_row_pane

0x4243,	// (0x0004ffb9) postcard_message2_row_pane_g1

0x424b,	// (0x0004ffc1) postcard_message2_row_pane_t1

0x4243,	// (0x0004ffb9) address2_row_pane_g1

0x424b,	// (0x0004ffc1) address2_row_pane_t1

0x6754,	// (0x000524ca) aid_size_cell_vorec

0x1f9c,	// (0x0004dd12) main_rss_pane

0x8eaa,	// (0x00054c20) rss_list_single_pane_ParamLimits

0x8eaa,	// (0x00054c20) rss_list_single_pane

0x4259,	// (0x0004ffcf) rss_list_single_pane_t1

0x4267,	// (0x0004ffdd) rss_list_single_pane_t2

0x0001,

0xf625,	// (0x0005b39b) rss_list_single_pane_t

0x1f9c,	// (0x0004dd12) main_camera2_pane

0x1f9c,	// (0x0004dd12) main_video2_pane

0x90e0,	// (0x00054e56) cams_zoom_pane_cp2_ParamLimits

0x90e0,	// (0x00054e56) cams_zoom_pane_cp2

0x90ec,	// (0x00054e62) image2_vga_pane_ParamLimits

0x90ec,	// (0x00054e62) image2_vga_pane

0x90fb,	// (0x00054e71) main_camera2_pane_g1_ParamLimits

0x90fb,	// (0x00054e71) main_camera2_pane_g1

0x9107,	// (0x00054e7d) main_camera2_pane_g2_ParamLimits

0x9107,	// (0x00054e7d) main_camera2_pane_g2

0x9113,	// (0x00054e89) main_camera2_pane_g3_ParamLimits

0x9113,	// (0x00054e89) main_camera2_pane_g3

0x911f,	// (0x00054e95) main_camera2_pane_g4_ParamLimits

0x911f,	// (0x00054e95) main_camera2_pane_g4

0x912b,	// (0x00054ea1) main_camera2_pane_g5_ParamLimits

0x912b,	// (0x00054ea1) main_camera2_pane_g5

0x9137,	// (0x00054ead) main_camera2_pane_g6_ParamLimits

0x9137,	// (0x00054ead) main_camera2_pane_g6

0x9143,	// (0x00054eb9) main_camera2_pane_g7_ParamLimits

0x9143,	// (0x00054eb9) main_camera2_pane_g7

0x914f,	// (0x00054ec5) main_camera2_pane_g8_ParamLimits

0x914f,	// (0x00054ec5) main_camera2_pane_g8

0x0008,

0xf646,	// (0x0005b3bc) main_camera2_pane_g_ParamLimits

0xf646,	// (0x0005b3bc) main_camera2_pane_g

0x9167,	// (0x00054edd) main_camera2_pane_t1_ParamLimits

0x9167,	// (0x00054edd) main_camera2_pane_t1

0x9179,	// (0x00054eef) main_camera2_pane_t2_ParamLimits

0x9179,	// (0x00054eef) main_camera2_pane_t2

0x918b,	// (0x00054f01) main_camera2_pane_t3_ParamLimits

0x918b,	// (0x00054f01) main_camera2_pane_t3

0x919d,	// (0x00054f13) main_camera2_pane_t4_ParamLimits

0x919d,	// (0x00054f13) main_camera2_pane_t4

0x0006,

0xf659,	// (0x0005b3cf) main_camera2_pane_t_ParamLimits

0xf659,	// (0x0005b3cf) main_camera2_pane_t

0x91ff,	// (0x00054f75) cams_zoom_pane_cp4_ParamLimits

0x91ff,	// (0x00054f75) cams_zoom_pane_cp4

0x920f,	// (0x00054f85) image2_cif_pane_ParamLimits

0x920f,	// (0x00054f85) image2_cif_pane

0x9224,	// (0x00054f9a) image2_subqcif_pane_ParamLimits

0x9224,	// (0x00054f9a) image2_subqcif_pane

0x9233,	// (0x00054fa9) main_video2_pane_g1_ParamLimits

0x9233,	// (0x00054fa9) main_video2_pane_g1

0x9245,	// (0x00054fbb) main_video2_pane_g2_ParamLimits

0x9245,	// (0x00054fbb) main_video2_pane_g2

0x9255,	// (0x00054fcb) main_video2_pane_g3_ParamLimits

0x9255,	// (0x00054fcb) main_video2_pane_g3

0x9265,	// (0x00054fdb) main_video2_pane_g4_ParamLimits

0x9265,	// (0x00054fdb) main_video2_pane_g4

0x9275,	// (0x00054feb) main_video2_pane_g5_ParamLimits

0x9275,	// (0x00054feb) main_video2_pane_g5

0x9285,	// (0x00054ffb) main_video2_pane_g6_ParamLimits

0x9285,	// (0x00054ffb) main_video2_pane_g6

0x0005,

0xf668,	// (0x0005b3de) main_video2_pane_g_ParamLimits

0xf668,	// (0x0005b3de) main_video2_pane_g

0x9297,	// (0x0005500d) main_video2_pane_t1_ParamLimits

0x9297,	// (0x0005500d) main_video2_pane_t1

0x92b1,	// (0x00055027) main_video2_pane_t2_ParamLimits

0x92b1,	// (0x00055027) main_video2_pane_t2

0x92d7,	// (0x0005504d) main_video2_pane_t3_ParamLimits

0x92d7,	// (0x0005504d) main_video2_pane_t3

0x0002,

0xf675,	// (0x0005b3eb) main_video2_pane_t_ParamLimits

0xf675,	// (0x0005b3eb) main_video2_pane_t

0x8bea,	// (0x00054960) call_muted_g2

0x0001,

0xf617,	// (0x0005b38d) call_muted_g

0x1f9c,	// (0x0004dd12) main_mup2_pane

0x42f6,	// (0x0005006c) main_mup2_pane_g1_ParamLimits

0x42f6,	// (0x0005006c) main_mup2_pane_g1

0x92fd,	// (0x00055073) main_mup2_pane_g2_ParamLimits

0x92fd,	// (0x00055073) main_mup2_pane_g2

0x957f,	// (0x000552f5) main_mup_pane_g13_cp1

0x9587,	// (0x000552fd) mup_volume_pane_cp1

0x931d,	// (0x00055093) main_mup2_pane_g4_ParamLimits

0x931d,	// (0x00055093) main_mup2_pane_g4

0x9332,	// (0x000550a8) main_mup2_pane_g5_ParamLimits

0x9332,	// (0x000550a8) main_mup2_pane_g5

0x9347,	// (0x000550bd) main_mup2_pane_g6_ParamLimits

0x9347,	// (0x000550bd) main_mup2_pane_g6

0x935c,	// (0x000550d2) main_mup2_pane_g7_ParamLimits

0x935c,	// (0x000550d2) main_mup2_pane_g7

0x0006,

0xf67c,	// (0x0005b3f2) main_mup2_pane_g_ParamLimits

0xf67c,	// (0x0005b3f2) main_mup2_pane_g

0x9378,	// (0x000550ee) main_mup2_pane_t1_ParamLimits

0x9378,	// (0x000550ee) main_mup2_pane_t1

0x938f,	// (0x00055105) main_mup2_pane_t2_ParamLimits

0x938f,	// (0x00055105) main_mup2_pane_t2

0x93a6,	// (0x0005511c) main_mup2_pane_t3_ParamLimits

0x93a6,	// (0x0005511c) main_mup2_pane_t3

0x93bd,	// (0x00055133) main_mup2_pane_t4_ParamLimits

0x93bd,	// (0x00055133) main_mup2_pane_t4

0x93d7,	// (0x0005514d) main_mup2_pane_t5_ParamLimits

0x93d7,	// (0x0005514d) main_mup2_pane_t5

0x93f1,	// (0x00055167) main_mup2_pane_t6_ParamLimits

0x93f1,	// (0x00055167) main_mup2_pane_t6

0x0005,

0xf68b,	// (0x0005b401) main_mup2_pane_t_ParamLimits

0xf68b,	// (0x0005b401) main_mup2_pane_t

0x9429,	// (0x0005519f) mup2_visualizer_pane_ParamLimits

0x9429,	// (0x0005519f) mup2_visualizer_pane

0x945f,	// (0x000551d5) mup_progress_pane_cp_ParamLimits

0x945f,	// (0x000551d5) mup_progress_pane_cp

0x956a,	// (0x000552e0) mup_volume_pane_cp_ParamLimits

0x956a,	// (0x000552e0) mup_volume_pane_cp

0x9476,	// (0x000551ec) mup2_visualizer_pane_g1_ParamLimits

0x9476,	// (0x000551ec) mup2_visualizer_pane_g1

0x42c8,	// (0x0005003e) mup2_visualizer_pane_g2_ParamLimits

0x42c8,	// (0x0005003e) mup2_visualizer_pane_g2

0x948b,	// (0x00055201) mup2_visualizer_pane_g3_ParamLimits

0x948b,	// (0x00055201) mup2_visualizer_pane_g3

0x0002,

0xf698,	// (0x0005b40e) mup2_visualizer_pane_g_ParamLimits

0xf698,	// (0x0005b40e) mup2_visualizer_pane_g

0x3074,	// (0x0004edea) aid_size_cell_fmradio

0x8d00,	// (0x00054a76) aid_height_parent_landcape

0x264d,	// (0x0004e3c3) wml_content_pane_cp

0x2655,	// (0x0004e3cb) wml_tabs_pane

0x265e,	// (0x0004e3d4) popup_wml_miniature_window

0x2666,	// (0x0004e3dc) scroll_pane_cp021

0x267a,	// (0x0004e3f0) wml_content_pane_comp8

0x1f9c,	// (0x0004dd12) bg_popup_sub_pane_cp05

0x42e6,	// (0x0005005c) popup_wml_miniature_window_g1

0x42ee,	// (0x00050064) wml_miniature_view_pane

0x9499,	// (0x0005520f) aid_size_wml_view

0x94a1,	// (0x00055217) wml_miniature_view_pane_g1

0x94aa,	// (0x00055220) wml_miniature_view_pane_g2

0x94b3,	// (0x00055229) wml_miniature_view_pane_g3

0x94bb,	// (0x00055231) wml_miniature_view_pane_g4

0x94c3,	// (0x00055239) wml_miniature_view_pane_g5

0x94cb,	// (0x00055241) wml_miniature_view_pane_g6

0x94d3,	// (0x00055249) wml_miniature_view_pane_g7

0x94db,	// (0x00055251) wml_miniature_view_pane_g8

0x0007,

0xf69f,	// (0x0005b415) wml_miniature_view_pane_g

0x42f6,	// (0x0005006c) background_graphic_ParamLimits

0x42f6,	// (0x0005006c) background_graphic

0x4302,	// (0x00050078) wml_tabs_2_pane

0x430b,	// (0x00050081) wml_tabs_3_pane_ParamLimits

0x430b,	// (0x00050081) wml_tabs_3_pane

0x431d,	// (0x00050093) wml_tabs_4_pane_ParamLimits

0x431d,	// (0x00050093) wml_tabs_4_pane

0x4333,	// (0x000500a9) wml_tabs_5_pane_ParamLimits

0x4333,	// (0x000500a9) wml_tabs_5_pane

0x434d,	// (0x000500c3) wml_tabs_pane_g2_ParamLimits

0x434d,	// (0x000500c3) wml_tabs_pane_g2

0x4361,	// (0x000500d7) wml_tabs_pane_g3_ParamLimits

0x4361,	// (0x000500d7) wml_tabs_pane_g3

0x94e3,	// (0x00055259) wml_tabs_2_active_pane_ParamLimits

0x94e3,	// (0x00055259) wml_tabs_2_active_pane

0x94f3,	// (0x00055269) wml_tabs_2_passive_pane_ParamLimits

0x94f3,	// (0x00055269) wml_tabs_2_passive_pane

0x9503,	// (0x00055279) wml_tabs_3_active_pane_cp_ParamLimits

0x9503,	// (0x00055279) wml_tabs_3_active_pane_cp

0x9514,	// (0x0005528a) wml_tabs_3_passive_pane_ParamLimits

0x9514,	// (0x0005528a) wml_tabs_3_passive_pane

0x9525,	// (0x0005529b) wml_tabs_3_passive_pane_cp_ParamLimits

0x9525,	// (0x0005529b) wml_tabs_3_passive_pane_cp

0x9536,	// (0x000552ac) tabs_4_active_pane

0x953e,	// (0x000552b4) tabs_4_passive_pane

0x9546,	// (0x000552bc) tabs_4_passive_pane_cp

0x954e,	// (0x000552c4) tabs_4_passive_pane_cp2

0x4070,	// (0x0004fde6) aid_height_text

0x81d5,	// (0x00053f4b) mup_volume_cont_pane_ParamLimits

0x81d5,	// (0x00053f4b) mup_volume_cont_pane

0x5ed6,	// (0x00051c4c) aid_size_cell_pinb

0x2227,	// (0x0004df9d) aid_size_list_pinb

0x9448,	// (0x000551be) mup2_volume_cont_pane_ParamLimits

0x9448,	// (0x000551be) mup2_volume_cont_pane

0x9556,	// (0x000552cc) mup2_volume_cont_pane_g1_ParamLimits

0x9556,	// (0x000552cc) mup2_volume_cont_pane_g1

0x5b63,	// (0x000518d9) aid_size_cell_touch_ParamLimits

0x5b63,	// (0x000518d9) aid_size_cell_touch

0x5db6,	// (0x00051b2c) touch_pane_ParamLimits

0x5db6,	// (0x00051b2c) touch_pane

0x0450,	// (0x0004c1c6) main_rss2_pane

0x437e,	// (0x000500f4) listscroll_rss2_pane

0x4387,	// (0x000500fd) rss2_navigation_pane

0x438f,	// (0x00050105) list_rss2_pane

0x2c41,	// (0x0004e9b7) scroll_pane_cp22

0x4397,	// (0x0005010d) rss2_navigation_pane_g1

0x43a0,	// (0x00050116) rss2_navigation_pane_g2

0x43a8,	// (0x0005011e) rss2_navigation_pane_g3

0x0002,

0xf6b0,	// (0x0005b426) rss2_navigation_pane_g

0x43b0,	// (0x00050126) rss2_navigation_pane_t1

0x958f,	// (0x00055305) rss2_list_single_pane_ParamLimits

0x958f,	// (0x00055305) rss2_list_single_pane

0x43be,	// (0x00050134) rss2_list_single_pane_t2

0x43cc,	// (0x00050142) rss2_list_single_pane_t3_ParamLimits

0x43cc,	// (0x00050142) rss2_list_single_pane_t3

0x43e9,	// (0x0005015f) rss2_list_single_pane_t4

0x7943,	// (0x000536b9) smil_status_pane_g1

0x3675,	// (0x0004f3eb) main_image2_pane_ParamLimits

0x3675,	// (0x0004f3eb) main_image2_pane

0x915b,	// (0x00054ed1) main_camera2_pane_g9_ParamLimits

0x915b,	// (0x00054ed1) main_camera2_pane_g9

0x91af,	// (0x00054f25) main_camera2_pane_t5_ParamLimits

0x91af,	// (0x00054f25) main_camera2_pane_t5

0x91c1,	// (0x00054f37) main_camera2_pane_t6_ParamLimits

0x91c1,	// (0x00054f37) main_camera2_pane_t6

0x95cb,	// (0x00055341) main_image2_pane_g1_ParamLimits

0x95cb,	// (0x00055341) main_image2_pane_g1

0x8862,	// (0x000545d8) smil2_video_pane_ParamLimits

0x8862,	// (0x000545d8) smil2_video_pane

0x047e,	// (0x0004c1f4) aid_zoom_text_primary_cp

0x1b81,	// (0x0004d8f7) popup_preview_fixed_window

0x25b6,	// (0x0004e32c) im_reading_pane_g1

0x90a5,	// (0x00054e1b) cams2_bc_adjust_pane_cp_ParamLimits

0x90a5,	// (0x00054e1b) cams2_bc_adjust_pane_cp

0x91f1,	// (0x00054f67) cams2_bc_adjust_pane_ParamLimits

0x91f1,	// (0x00054f67) cams2_bc_adjust_pane

0x4498,	// (0x0005020e) cams2_bc_adjust_pane_g1

0x95d7,	// (0x0005534d) cams2_slider_pane

0x95e0,	// (0x00055356) cams2_slider_pane_g1

0x95e9,	// (0x0005535f) cams2_slider_pane_g2

0x0006,

0xf6b7,	// (0x0005b42d) cams2_slider_pane_g

0x5fac,	// (0x00051d22) calc_display_pane_ParamLimits

0x5fca,	// (0x00051d40) calc_paper_pane_ParamLimits

0x5fe6,	// (0x00051d5c) grid_calc_pane_ParamLimits

0x7c56,	// (0x000539cc) popup_clock_digital_window_t1_ParamLimits

0x3011,	// (0x0004ed87) main_image_pane_t1

0x5f92,	// (0x00051d08) aid_size_cell_calc_ParamLimits

0x5f92,	// (0x00051d08) aid_size_cell_calc

0x8d32,	// (0x00054aa8) popup_blid_sat_info2_window_ParamLimits

0x8d32,	// (0x00054aa8) popup_blid_sat_info2_window

0x43ff,	// (0x00050175) aid_size_cell_blid

0x4407,	// (0x0005017d) bg_popup_window_pane_cp07

0x442a,	// (0x000501a0) grid_popup_blid_pane

0x4434,	// (0x000501aa) heading_pane_cp05_ParamLimits

0x4434,	// (0x000501aa) heading_pane_cp05

0x4506,	// (0x0005027c) cell_popup_blid_pane_ParamLimits

0x4506,	// (0x0005027c) cell_popup_blid_pane

0x452c,	// (0x000502a2) cell_popup_blid_pane_g1

0x4534,	// (0x000502aa) cell_popup_blid_pane_t1

0x940e,	// (0x00055184) mup2_indicator_pane_ParamLimits

0x940e,	// (0x00055184) mup2_indicator_pane

0x2d8e,	// (0x0004eb04) mup2_visualizer_osc_pane

0x42d4,	// (0x0005004a) mup2_visualizer_spec_pane_ParamLimits

0x42d4,	// (0x0005004a) mup2_visualizer_spec_pane

0x9603,	// (0x00055379) mup2_spec_half_pane

0x960c,	// (0x00055382) mup2_spec_half_pane_cp

0x9616,	// (0x0005538c) mup2_spec_bar_pane_ParamLimits

0x9616,	// (0x0005538c) mup2_spec_bar_pane

0x4275,	// (0x0004ffeb) mup2_spec_bar_pane_g1

0x427f,	// (0x0004fff5) mup2_spec_bar_pane_g2

0x0001,

0xf62a,	// (0x0005b3a0) mup2_spec_bar_pane_g

0x9635,	// (0x000553ab) mup2_osc_middle_pane

0x4291,	// (0x00050007) mup2_visualizer_osc_pane_g1

0x1bab,	// (0x0004d921) popup_number_entry_window_t1_ParamLimits

0x1bbe,	// (0x0004d934) popup_number_entry_window_t2_ParamLimits

0x1bd0,	// (0x0004d946) popup_number_entry_window_t3_ParamLimits

0x5e0d,	// (0x00051b83) popup_number_entry_window_t5_ParamLimits

0x5e0d,	// (0x00051b83) popup_number_entry_window_t5

0xf0ec,	// (0x0005ae62) popup_number_entry_window_t_ParamLimits

0x1be2,	// (0x0004d958) text_title_cp2_ParamLimits

0x8549,	// (0x000542bf) aid_hotspot_pointer_text2_pane

0x85e3,	// (0x00054359) main_viewer_pane_g9_ParamLimits

0x85e3,	// (0x00054359) main_viewer_pane_g9

0x27e5,	// (0x0004e55b) cale_month_pane_t1_ParamLimits

0x2822,	// (0x0004e598) bg_cale_pane_ParamLimits

0x283a,	// (0x0004e5b0) list_cale_pane_ParamLimits

0x2446,	// (0x0004e1bc) listscroll_cale_day_pane_t1

0x284b,	// (0x0004e5c1) scroll_pane_cp09_ParamLimits

0x8214,	// (0x00053f8a) main_mup_eq_pane_t1_ParamLimits

0x8214,	// (0x00053f8a) main_mup_eq_pane_t1

0x822e,	// (0x00053fa4) main_mup_eq_pane_t2_ParamLimits

0x822e,	// (0x00053fa4) main_mup_eq_pane_t2

0x8246,	// (0x00053fbc) main_mup_eq_pane_t3_ParamLimits

0x8246,	// (0x00053fbc) main_mup_eq_pane_t3

0x825e,	// (0x00053fd4) main_mup_eq_pane_t4_ParamLimits

0x825e,	// (0x00053fd4) main_mup_eq_pane_t4

0x8276,	// (0x00053fec) main_mup_eq_pane_t5_ParamLimits

0x8276,	// (0x00053fec) main_mup_eq_pane_t5

0x828e,	// (0x00054004) main_mup_eq_pane_t6_ParamLimits

0x828e,	// (0x00054004) main_mup_eq_pane_t6

0x82a2,	// (0x00054018) main_mup_eq_pane_t7_ParamLimits

0x82a2,	// (0x00054018) main_mup_eq_pane_t7

0x82b6,	// (0x0005402c) main_mup_eq_pane_t8_ParamLimits

0x82b6,	// (0x0005402c) main_mup_eq_pane_t8

0x82cc,	// (0x00054042) main_mup_eq_pane_t9_ParamLimits

0x82cc,	// (0x00054042) main_mup_eq_pane_t9

0x82e4,	// (0x0005405a) main_mup_eq_pane_t10_ParamLimits

0x82e4,	// (0x0005405a) main_mup_eq_pane_t10

0x0009,

0xf479,	// (0x0005b1ef) main_mup_eq_pane_t_ParamLimits

0xf479,	// (0x0005b1ef) main_mup_eq_pane_t

0x83a1,	// (0x00054117) mup_equalizer_pane_cp5_ParamLimits

0x83b7,	// (0x0005412d) mup_equalizer_pane_cp6_ParamLimits

0x83cf,	// (0x00054145) mup_equalizer_pane_cp7_ParamLimits

0x0450,	// (0x0004c1c6) main_gallery_pane

0x429a,	// (0x00050010) smil2_volume_pane

0x42b5,	// (0x0005002b) smil_status_volume_pane_g1_ParamLimits

0x42a2,	// (0x00050018) smil_status_volume_pane_g2_ParamLimits

0x8f1c,	// (0x00054c92) smil_status_volume_pane_g3_ParamLimits

0xf62f,	// (0x0005b3a5) smil_status_volume_pane_g_ParamLimits

0x4407,	// (0x0005017d) bg_popup_window_pane_cp07_ParamLimits

0x4415,	// (0x0005018b) blid_firmament_pane

0x963e,	// (0x000553b4) aid_size_cell_gallery_ParamLimits

0x963e,	// (0x000553b4) aid_size_cell_gallery

0x964c,	// (0x000553c2) grid_gallery_pane_ParamLimits

0x964c,	// (0x000553c2) grid_gallery_pane

0x965c,	// (0x000553d2) cell_gallery_pane_ParamLimits

0x965c,	// (0x000553d2) cell_gallery_pane

0x4542,	// (0x000502b8) bg_cell_gallery_focus_pane_ParamLimits

0x4542,	// (0x000502b8) bg_cell_gallery_focus_pane

0x4554,	// (0x000502ca) cell_gallery_pane_g1_ParamLimits

0x4554,	// (0x000502ca) cell_gallery_pane_g1

0x96aa,	// (0x00055420) cell_gallery_pane_g2_ParamLimits

0x96aa,	// (0x00055420) cell_gallery_pane_g2

0x96b7,	// (0x0005542d) cell_gallery_pane_g3_ParamLimits

0x96b7,	// (0x0005542d) cell_gallery_pane_g3

0x4560,	// (0x000502d6) cell_gallery_pane_g4_ParamLimits

0x4560,	// (0x000502d6) cell_gallery_pane_g4

0x0003,

0xf6dd,	// (0x0005b453) cell_gallery_pane_g_ParamLimits

0xf6dd,	// (0x0005b453) cell_gallery_pane_g

0x456c,	// (0x000502e2) bg_cell_gallery_focus_pane_g1

0x4574,	// (0x000502ea) bg_cell_gallery_focus_pane_g2

0x457c,	// (0x000502f2) bg_cell_gallery_focus_pane_g3

0x4584,	// (0x000502fa) bg_cell_gallery_focus_pane_g4

0x458c,	// (0x00050302) bg_cell_gallery_focus_pane_g5

0x4594,	// (0x0005030a) bg_cell_gallery_focus_pane_g6

0x459c,	// (0x00050312) bg_cell_gallery_focus_pane_g7

0x45a4,	// (0x0005031a) bg_cell_gallery_focus_pane_g8

0x0007,

0xf6e6,	// (0x0005b45c) bg_cell_gallery_focus_pane_g

0x45ac,	// (0x00050322) aid_firma_cardinal

0x45c0,	// (0x00050336) blid_firmament_pane_t1

0x45d7,	// (0x0005034d) blid_firmament_pane_t2

0x45ee,	// (0x00050364) blid_firmament_pane_t3

0x4605,	// (0x0005037b) blid_firmament_pane_t4

0x0003,

0xf6f7,	// (0x0005b46d) blid_firmament_pane_t

0x461c,	// (0x00050392) blid_sat_info_pane

0x462c,	// (0x000503a2) blid_sat_info_pane_g1

0x462c,	// (0x000503a2) blid_sat_info_pane_g2

0x0001,

0xf700,	// (0x0005b476) blid_sat_info_pane_g

0x4636,	// (0x000503ac) blid_sat_info_pane_t1

0x4644,	// (0x000503ba) smil2_volume_content_pane

0x464d,	// (0x000503c3) smil2_volume_pane_g1

0x4655,	// (0x000503cb) smil2_volume_content_pane_g1

0x465e,	// (0x000503d4) smil2_volume_content_pane_g2

0x4667,	// (0x000503dd) smil2_volume_content_pane_g3

0x4670,	// (0x000503e6) smil2_volume_content_pane_g4

0x4679,	// (0x000503ef) smil2_volume_content_pane_g5

0x4682,	// (0x000503f8) smil2_volume_content_pane_g6

0x468b,	// (0x00050401) smil2_volume_content_pane_g7

0x4694,	// (0x0005040a) smil2_volume_content_pane_g8

0x469d,	// (0x00050413) smil2_volume_content_pane_g9

0x46a6,	// (0x0005041c) smil2_volume_content_pane_g10

0x0009,

0xf705,	// (0x0005b47b) smil2_volume_content_pane_g

0x65a2,	// (0x00052318) cale_week_day_heading_pane_t1_ParamLimits

0x65b6,	// (0x0005232c) cale_week_day_heading_pane_t2_ParamLimits

0x65ca,	// (0x00052340) cale_week_day_heading_pane_t3_ParamLimits

0x65de,	// (0x00052354) cale_week_day_heading_pane_t4_ParamLimits

0x65f2,	// (0x00052368) cale_week_day_heading_pane_t5_ParamLimits

0x6606,	// (0x0005237c) cale_week_day_heading_pane_t6_ParamLimits

0x661a,	// (0x00052390) cale_week_day_heading_pane_t7_ParamLimits

0xf1f1,	// (0x0005af67) cale_week_day_heading_pane_t_ParamLimits

0x2458,	// (0x0004e1ce) bg_cale_side_pane_ParamLimits

0x662e,	// (0x000523a4) cale_week_time_pane_t1_ParamLimits

0x6646,	// (0x000523bc) cale_week_time_pane_t2_ParamLimits

0x665e,	// (0x000523d4) cale_week_time_pane_t3_ParamLimits

0x6676,	// (0x000523ec) cale_week_time_pane_t4_ParamLimits

0x668e,	// (0x00052404) cale_week_time_pane_t5_ParamLimits

0x66a6,	// (0x0005241c) cale_week_time_pane_t6_ParamLimits

0x66c6,	// (0x0005243c) cale_week_time_pane_t7_ParamLimits

0x66e6,	// (0x0005245c) cale_week_time_pane_t8_ParamLimits

0xf200,	// (0x0005af76) cale_week_time_pane_t_ParamLimits

0x6706,	// (0x0005247c) cell_cale_week_pane_g2_ParamLimits

0x2458,	// (0x0004e1ce) bg_cale_side_pane_cp01_ParamLimits

0x77a8,	// (0x0005351e) cale_month_week_pane_t1_ParamLimits

0x77bf,	// (0x00053535) cale_month_week_pane_t2_ParamLimits

0x77d6,	// (0x0005354c) cale_month_week_pane_t3_ParamLimits

0x77ed,	// (0x00053563) cale_month_week_pane_t4_ParamLimits

0x7804,	// (0x0005357a) cale_month_week_pane_t5_ParamLimits

0x7823,	// (0x00053599) cale_month_week_pane_t6_ParamLimits

0xf2d9,	// (0x0005b04f) cale_month_week_pane_t_ParamLimits

0x7910,	// (0x00053686) cell_cale_month_pane_g1_ParamLimits

0x0450,	// (0x0004c1c6) main_cale_event_viewer_pane

0x0450,	// (0x0004c1c6) listscroll_cale_event_viewer_pane

0x46af,	// (0x00050425) list_cale_ev_pane

0x46b7,	// (0x0005042d) scroll_pane_cp023

0x46c3,	// (0x00050439) field_cale_ev_pane_ParamLimits

0x46c3,	// (0x00050439) field_cale_ev_pane

0x46dd,	// (0x00050453) field_cale_ev_content_pane_ParamLimits

0x46dd,	// (0x00050453) field_cale_ev_content_pane

0x46e9,	// (0x0005045f) field_cale_ev_pane_g1_ParamLimits

0x46e9,	// (0x0005045f) field_cale_ev_pane_g1

0x46f5,	// (0x0005046b) field_cale_ev_pane_g2_ParamLimits

0x46f5,	// (0x0005046b) field_cale_ev_pane_g2

0x470d,	// (0x00050483) field_cale_ev_pane_g3_ParamLimits

0x470d,	// (0x00050483) field_cale_ev_pane_g3

0x0002,

0xf71a,	// (0x0005b490) field_cale_ev_pane_g_ParamLimits

0xf71a,	// (0x0005b490) field_cale_ev_pane_g

0x4725,	// (0x0005049b) field_cale_ev_pane_t1_ParamLimits

0x4725,	// (0x0005049b) field_cale_ev_pane_t1

0x473c,	// (0x000504b2) field_cale_ev_content_pane_t1_ParamLimits

0x473c,	// (0x000504b2) field_cale_ev_content_pane_t1

0x2ef7,	// (0x0004ec6d) bg_button_pane_cp01

0x2306,	// (0x0004e07c) listscroll_cale_week_pane_ParamLimits

0x6377,	// (0x000520ed) popup_toolbar_window_cp01

0x2446,	// (0x0004e1bc) listscroll_cale_week_pane_t1_ParamLimits

0x2306,	// (0x0004e07c) listscroll_cale_day_pane_ParamLimits

0x6377,	// (0x000520ed) popup_toolbar_window_cp02

0x2446,	// (0x0004e1bc) listscroll_cale_day_pane_t1_ParamLimits

0x2306,	// (0x0004e07c) main_cale_month_pane_ParamLimits

0x8df6,	// (0x00054b6c) popup_toolbar_window_cp03_ParamLimits

0x8df6,	// (0x00054b6c) popup_toolbar_window_cp03

0x8774,	// (0x000544ea) main_image_pane_g2_ParamLimits

0x8774,	// (0x000544ea) main_image_pane_g2

0x8780,	// (0x000544f6) main_image_pane_g3_ParamLimits

0x8780,	// (0x000544f6) main_image_pane_g3

0x0002,

0xf50b,	// (0x0005b281) main_image_pane_g_ParamLimits

0xf50b,	// (0x0005b281) main_image_pane_g

0x3011,	// (0x0004ed87) main_image_pane_t1_ParamLimits

0x878c,	// (0x00054502) main_image_pane_t2_ParamLimits

0x878c,	// (0x00054502) main_image_pane_t2

0x879e,	// (0x00054514) main_image_pane_t3_ParamLimits

0x879e,	// (0x00054514) main_image_pane_t3

0x87b0,	// (0x00054526) main_image_pane_t4_ParamLimits

0x87b0,	// (0x00054526) main_image_pane_t4

0x0003,

0xf512,	// (0x0005b288) main_image_pane_t_ParamLimits

0xf512,	// (0x0005b288) main_image_pane_t

0x87c2,	// (0x00054538) popup_image_details_window_cp01

0x87cc,	// (0x00054542) popup_toobar_trans_pane_cp01_ParamLimits

0x87cc,	// (0x00054542) popup_toobar_trans_pane_cp01

0x8d7b,	// (0x00054af1) popup_image_details_window_ParamLimits

0x8d7b,	// (0x00054af1) popup_image_details_window

0x41fb,	// (0x0004ff71) popup_image_focus_window

0x9097,	// (0x00054e0d) camera2_autofocus_pane_ParamLimits

0x9097,	// (0x00054e0d) camera2_autofocus_pane

0x0450,	// (0x0004c1c6) bg_popup_sub_pane_cp06

0x4759,	// (0x000504cf) popup_image_focus_window_g1

0x4761,	// (0x000504d7) popup_image_focus_window_g2

0x4769,	// (0x000504df) popup_image_focus_window_g3

0x4771,	// (0x000504e7) popup_image_focus_window_g4

0x0003,

0xf721,	// (0x0005b497) popup_image_focus_window_g

0x4779,	// (0x000504ef) popup_image_focus_window_t1

0x4787,	// (0x000504fd) popup_image_focus_window_t2

0x4797,	// (0x0005050d) popup_image_focus_window_t3

0x0002,

0xf72a,	// (0x0005b4a0) popup_image_focus_window_t

0x47a5,	// (0x0005051b) camera2_autofocus_pane_g1

0x3675,	// (0x0004f3eb) bg_tb_trans_pane_cp01

0x47b3,	// (0x00050529) popup_image_details_window_g1

0x47c6,	// (0x0005053c) popup_image_details_window_g2

0x0002,

0xf73c,	// (0x0005b4b2) popup_image_details_window_g

0x47ef,	// (0x00050565) popup_image_details_window_t1

0x4801,	// (0x00050577) popup_image_details_window_t2

0x481a,	// (0x00050590) popup_image_details_window_t3

0x482e,	// (0x000505a4) popup_image_details_window_t4

0x4849,	// (0x000505bf) popup_image_details_window_t5

0x0004,

0xf743,	// (0x0005b4b9) popup_image_details_window_t

0x22f2,	// (0x0004e068) bg_calc_paper_pane_ParamLimits

0x60df,	// (0x00051e55) grid_highlight_pane_cp013

0x60e9,	// (0x00051e5f) list_calc_pane_ParamLimits

0x60fb,	// (0x00051e71) scroll_pane_cp024

0x2306,	// (0x0004e07c) bg_calc_display_pane_ParamLimits

0x6103,	// (0x00051e79) calc_display_pane_t1_ParamLimits

0x6118,	// (0x00051e8e) calc_display_pane_t2_ParamLimits

0x612d,	// (0x00051ea3) calc_display_pane_t3_ParamLimits

0xf173,	// (0x0005aee9) calc_display_pane_t_ParamLimits

0x6214,	// (0x00051f8a) cell_calc_pane_g2

0x0001,

0xf190,	// (0x0005af06) cell_calc_pane_g

0x621d,	// (0x00051f93) cell_calc_pane_t1

0x2365,	// (0x0004e0db) grid_highlight_pane_cp02_ParamLimits

0x237b,	// (0x0004e0f1) toolbar_button_pane_cp01_ParamLimits

0x237b,	// (0x0004e0f1) toolbar_button_pane_cp01

0x3056,	// (0x0004edcc) temp_image_control_pane_ParamLimits

0x3056,	// (0x0004edcc) temp_image_control_pane

0x3675,	// (0x0004f3eb) main_mp3_pane

0x4863,	// (0x000505d9) temp_image_control_pane_g1_ParamLimits

0x4863,	// (0x000505d9) temp_image_control_pane_g1

0x4871,	// (0x000505e7) temp_image_control_pane_g2_ParamLimits

0x4871,	// (0x000505e7) temp_image_control_pane_g2

0x4883,	// (0x000505f9) temp_image_control_pane_g3_ParamLimits

0x4883,	// (0x000505f9) temp_image_control_pane_g3

0x96f4,	// (0x0005546a) temp_image_control_pane_g4_ParamLimits

0x96f4,	// (0x0005546a) temp_image_control_pane_g4

0x0003,

0xf74e,	// (0x0005b4c4) temp_image_control_pane_g_ParamLimits

0xf74e,	// (0x0005b4c4) temp_image_control_pane_g

0x4863,	// (0x000505d9) main_mp3_pane_g1

0x9705,	// (0x0005547b) main_mp3_pane_g2

0x0007,

0xf757,	// (0x0005b4cd) main_mp3_pane_g

0x48c6,	// (0x0005063c) main_mp3_pane_t1

0x24c7,	// (0x0004e23d) main_camera_pane_g8_ParamLimits

0x24c7,	// (0x0004e23d) main_camera_pane_g8

0x698e,	// (0x00052704) main_video_pane_g7_ParamLimits

0x698e,	// (0x00052704) main_video_pane_g7

0x91df,	// (0x00054f55) main_camera2_pane_t7_ParamLimits

0x91df,	// (0x00054f55) main_camera2_pane_t7

0x260d,	// (0x0004e383) scroll_pane_cp025_ParamLimits

0x260d,	// (0x0004e383) scroll_pane_cp025

0x2621,	// (0x0004e397) scroll_pane_cp026_ParamLimits

0x2621,	// (0x0004e397) scroll_pane_cp026

0x2630,	// (0x0004e3a6) wml_content_pane_ParamLimits

0x0450,	// (0x0004c1c6) main_touch_calib_pane

0x97a9,	// (0x0005551f) main_touch_calib_pane_g1

0x97b5,	// (0x0005552b) main_touch_calib_pane_g2

0x97c1,	// (0x00055537) main_touch_calib_pane_g3

0x97cd,	// (0x00055543) main_touch_calib_pane_g4

0x0003,

0xf775,	// (0x0005b4eb) main_touch_calib_pane_g

0x97d9,	// (0x0005554f) main_touch_calib_pane_t1

0x97f0,	// (0x00055566) main_touch_calib_pane_t2

0x0004,

0xf77e,	// (0x0005b4f4) main_touch_calib_pane_t

0x2ccf,	// (0x0004ea45) mup_progress_pane_cp02

0x2cee,	// (0x0004ea64) navi_pane_g1

0x2d50,	// (0x0004eac6) navi_pane_mp_t3

0x3675,	// (0x0004f3eb) main_mp3_pane_ParamLimits

0x8e34,	// (0x00054baa) navi_pane_ParamLimits

0x4863,	// (0x000505d9) main_mp3_pane_g1_ParamLimits

0x9705,	// (0x0005547b) main_mp3_pane_g2_ParamLimits

0x9711,	// (0x00055487) main_mp3_pane_g3_ParamLimits

0x9711,	// (0x00055487) main_mp3_pane_g3

0x971d,	// (0x00055493) main_mp3_pane_g4_ParamLimits

0x971d,	// (0x00055493) main_mp3_pane_g4

0x4893,	// (0x00050609) main_mp3_pane_g5_ParamLimits

0x4893,	// (0x00050609) main_mp3_pane_g5

0x48a1,	// (0x00050617) main_mp3_pane_g6_ParamLimits

0x48a1,	// (0x00050617) main_mp3_pane_g6

0x48ae,	// (0x00050624) main_mp3_pane_g7_ParamLimits

0x48ae,	// (0x00050624) main_mp3_pane_g7

0x48ba,	// (0x00050630) main_mp3_pane_g8_ParamLimits

0x48ba,	// (0x00050630) main_mp3_pane_g8

0xf757,	// (0x0005b4cd) main_mp3_pane_g_ParamLimits

0x9729,	// (0x0005549f) main_mp3_pane_t2

0x9739,	// (0x000554af) main_mp3_pane_t3

0x48d4,	// (0x0005064a) main_mp3_pane_t4

0x48e2,	// (0x00050658) main_mp3_pane_t5

0x0005,

0xf768,	// (0x0005b4de) main_mp3_pane_t

0x48f0,	// (0x00050666) mup_progress_pane_cp01

0x047e,	// (0x0004c1f4) aid_zoom_text_secondary2

0x46af,	// (0x00050425) list_cale_ev2_pane

0x46b7,	// (0x0005042d) scroll_pane_cp023_ParamLimits

0x9843,	// (0x000555b9) field_cale_ev2_pane_ParamLimits

0x9843,	// (0x000555b9) field_cale_ev2_pane

0x08ab,	// (0x0004c621) field_cale_ev2_pane_g1_ParamLimits

0x08ab,	// (0x0004c621) field_cale_ev2_pane_g1

0x08b7,	// (0x0004c62d) field_cale_ev2_pane_g2_ParamLimits

0x08b7,	// (0x0004c62d) field_cale_ev2_pane_g2

0x08cf,	// (0x0004c645) field_cale_ev2_pane_g3_ParamLimits

0x08cf,	// (0x0004c645) field_cale_ev2_pane_g3

0x0003,

0xf789,	// (0x0005b4ff) field_cale_ev2_pane_g_ParamLimits

0xf789,	// (0x0005b4ff) field_cale_ev2_pane_g

0x9877,	// (0x000555ed) field_cale_ev2_pane_t1_ParamLimits

0x9877,	// (0x000555ed) field_cale_ev2_pane_t1

0x988e,	// (0x00055604) field_cale_ev2_pane_t2_ParamLimits

0x988e,	// (0x00055604) field_cale_ev2_pane_t2

0x0001,

0xf792,	// (0x0005b508) field_cale_ev2_pane_t_ParamLimits

0xf792,	// (0x0005b508) field_cale_ev2_pane_t

0x864b,	// (0x000543c1) main_postcard_pane_g5_ParamLimits

0x864b,	// (0x000543c1) main_postcard_pane_g5

0x8659,	// (0x000543cf) main_postcard_pane_g6_ParamLimits

0x8659,	// (0x000543cf) main_postcard_pane_g6

0x67ce,	// (0x00052544) camera2_autofocus_pane_cp_ParamLimits

0x67ce,	// (0x00052544) camera2_autofocus_pane_cp

0x3675,	// (0x0004f3eb) main_mup3_pane

0x98c3,	// (0x00055639) main_mup3_pane_g1_ParamLimits

0x98c3,	// (0x00055639) main_mup3_pane_g1

0x98e4,	// (0x0005565a) main_mup3_pane_g2_ParamLimits

0x98e4,	// (0x0005565a) main_mup3_pane_g2

0x995f,	// (0x000556d5) main_mup3_pane_g3_ParamLimits

0x995f,	// (0x000556d5) main_mup3_pane_g3

0x999e,	// (0x00055714) main_mup3_pane_g4_ParamLimits

0x999e,	// (0x00055714) main_mup3_pane_g4

0x99dd,	// (0x00055753) main_mup3_pane_g5_ParamLimits

0x99dd,	// (0x00055753) main_mup3_pane_g5

0x9a1e,	// (0x00055794) main_mup3_pane_g6_ParamLimits

0x9a1e,	// (0x00055794) main_mup3_pane_g6

0x48f8,	// (0x0005066e) main_mup3_pane_g7_ParamLimits

0x48f8,	// (0x0005066e) main_mup3_pane_g7

0x0007,

0xf7a2,	// (0x0005b518) main_mup3_pane_g_ParamLimits

0xf7a2,	// (0x0005b518) main_mup3_pane_g

0x9a90,	// (0x00055806) main_mup3_pane_t1_ParamLimits

0x9a90,	// (0x00055806) main_mup3_pane_t1

0x9aff,	// (0x00055875) main_mup3_pane_t2_ParamLimits

0x9aff,	// (0x00055875) main_mup3_pane_t2

0x9bc8,	// (0x0005593e) main_mup3_pane_t4_ParamLimits

0x9bc8,	// (0x0005593e) main_mup3_pane_t4

0x9c1a,	// (0x00055990) main_mup3_pane_t5_ParamLimits

0x9c1a,	// (0x00055990) main_mup3_pane_t5

0x9cc2,	// (0x00055a38) main_mup3_pane_t6_ParamLimits

0x9cc2,	// (0x00055a38) main_mup3_pane_t6

0x0005,

0xf7b3,	// (0x0005b529) main_mup3_pane_t_ParamLimits

0xf7b3,	// (0x0005b529) main_mup3_pane_t

0x9d6a,	// (0x00055ae0) mup3_progress_pane_ParamLimits

0x9d6a,	// (0x00055ae0) mup3_progress_pane

0x9dcf,	// (0x00055b45) popup_mup3_control_window_ParamLimits

0x9dcf,	// (0x00055b45) popup_mup3_control_window

0x4906,	// (0x0005067c) popup_mup3_text_window

0x9de8,	// (0x00055b5e) mup3_progress_pane_t1

0x9dff,	// (0x00055b75) mup3_progress_pane_t2

0x490e,	// (0x00050684) mup3_progress_pane_t3

0x0002,

0xf7c0,	// (0x0005b536) mup3_progress_pane_t

0x4925,	// (0x0005069b) mup_progress_pane_cp03

0x0450,	// (0x0004c1c6) bg_tb_trans_pane_cp04

0x9e16,	// (0x00055b8c) mup3_volume_pane

0x9e1e,	// (0x00055b94) popup_mup3_control_window_g1

0x9e27,	// (0x00055b9d) mup3_volume_pane_g1

0x9e30,	// (0x00055ba6) mup3_volume_pane_g2

0x9e39,	// (0x00055baf) mup3_volume_pane_g3

0x0002,

0xf7c7,	// (0x0005b53d) mup3_volume_pane_g

0x0450,	// (0x0004c1c6) bg_tb_trans_pane_cp03

0x4935,	// (0x000506ab) popup_mup3_text_window_g1

0x493d,	// (0x000506b3) popup_mup3_text_window_t1

0x234e,	// (0x0004e0c4) list_calc_item_pane_g1_ParamLimits

0x4375,	// (0x000500eb) mup_volume_pane_cp_g1

0x9807,	// (0x0005557d) main_touch_calib_pane_t3

0x981b,	// (0x00055591) main_touch_calib_pane_t4

0x982f,	// (0x000555a5) main_touch_calib_pane_t5

0x045a,	// (0x0004c1d0) aid_cell_size_toolbar2

0x0462,	// (0x0004c1d8) aid_popup3_width_pane

0x046e,	// (0x0004c1e4) aid_zoom_text_msg_primary

0x67b8,	// (0x0005252e) vorec_t7

0x2312,	// (0x0004e088) bg_calc_paper_pane_g1_ParamLimits

0x232a,	// (0x0004e0a0) bg_calc_paper_pane_g2_ParamLimits

0x231e,	// (0x0004e094) bg_calc_paper_pane_g3_ParamLimits

0x2342,	// (0x0004e0b8) bg_calc_paper_pane_g4_ParamLimits

0x2336,	// (0x0004e0ac) bg_calc_paper_pane_g5_ParamLimits

0x616c,	// (0x00051ee2) bg_calc_paper_pane_g6_ParamLimits

0x617d,	// (0x00051ef3) bg_calc_paper_pane_g7_ParamLimits

0x618e,	// (0x00051f04) bg_calc_paper_pane_g8_ParamLimits

0xf17a,	// (0x0005aef0) bg_calc_paper_pane_g_ParamLimits

0x619f,	// (0x00051f15) calc_bg_paper_pane_g9_ParamLimits

0x68b7,	// (0x0005262d) image_qvga_pane_ParamLimits

0x68b7,	// (0x0005262d) image_qvga_pane

0x21f7,	// (0x0004df6d) bg_popup_sub_pane_cp04_ParamLimits

0x2f8d,	// (0x0004ed03) popup_mup_playback_window_g1_ParamLimits

0x2f99,	// (0x0004ed0f) popup_mup_playback_window_t1_ParamLimits

0x2fae,	// (0x0004ed24) popup_mup_playback_window_t2_ParamLimits

0xf506,	// (0x0005b27c) popup_mup_playback_window_t_ParamLimits

0x930e,	// (0x00055084) main_mup2_pane_g3_ParamLimits

0x930e,	// (0x00055084) main_mup2_pane_g3

0x6bc9,	// (0x0005293f) popup_toolbar_window_cp04

0x33a3,	// (0x0004f119) popup_call2_audio_second_window_g3_ParamLimits

0x33a3,	// (0x0004f119) popup_call2_audio_second_window_g3

0x37ea,	// (0x0004f560) popup_call2_audio_first_window_g4_ParamLimits

0x37ea,	// (0x0004f560) popup_call2_audio_first_window_g4

0x3e72,	// (0x0004fbe8) popup_call2_audio_in_window_g4_ParamLimits

0x3e72,	// (0x0004fbe8) popup_call2_audio_in_window_g4

0x8767,	// (0x000544dd) aid_area_sk_bg_cut_ParamLimits

0x8767,	// (0x000544dd) aid_area_sk_bg_cut

0x2fc3,	// (0x0004ed39) aid_area_sk_bg_cut_2_ParamLimits

0x2fc3,	// (0x0004ed39) aid_area_sk_bg_cut_2

0x969a,	// (0x00055410) aid_placing_details_win

0x96a2,	// (0x00055418) aid_placing_details_win_2

0x47a5,	// (0x0005051b) camera2_autofocus_pane_g1_ParamLimits

0x5d64,	// (0x00051ada) popup_fixed_preview_cale_window_ParamLimits

0x5d64,	// (0x00051ada) popup_fixed_preview_cale_window

0x2db1,	// (0x0004eb27) navi_slider_pane_g3

0x2da8,	// (0x0004eb1e) navi_slider_pane_g4

0x2d9f,	// (0x0004eb15) navi_slider_pane_g5

0x2db1,	// (0x0004eb27) navi_slider_pane_g6

0x7fa8,	// (0x00053d1e) navi_slider_pane_g7

0x2ec4,	// (0x0004ec3a) mup_scale_pane_g3

0x2ecd,	// (0x0004ec43) mup_scale_pane_g4

0x2ed6,	// (0x0004ec4c) mup_scale_pane_g5

0x83e7,	// (0x0005415d) mup_scale_pane_g6

0x83f0,	// (0x00054166) mup_scale_pane_g7

0x2db1,	// (0x0004eb27) cams2_slider_pane_g3

0x43f7,	// (0x0005016d) cams2_slider_pane_g4

0x95f2,	// (0x00055368) cams2_slider_pane_g5

0x2db1,	// (0x0004eb27) cams2_slider_pane_g6

0x95fa,	// (0x00055370) cams2_slider_pane_g7

0x462c,	// (0x000503a2) camera2_autofocus_pane_cp_g1

0x494b,	// (0x000506c1) bg_popup_preview_window_pane_cp02_ParamLimits

0x494b,	// (0x000506c1) bg_popup_preview_window_pane_cp02

0x4957,	// (0x000506cd) list_fp_cale_pane_ParamLimits

0x4957,	// (0x000506cd) list_fp_cale_pane

0x4963,	// (0x000506d9) popup_fixed_preview_cale_window_t1_ParamLimits

0x4963,	// (0x000506d9) popup_fixed_preview_cale_window_t1

0x9e42,	// (0x00055bb8) popup_fixed_preview_cale_window_t2_ParamLimits

0x9e42,	// (0x00055bb8) popup_fixed_preview_cale_window_t2

0x9e57,	// (0x00055bcd) popup_fixed_preview_cale_window_t3_ParamLimits

0x9e57,	// (0x00055bcd) popup_fixed_preview_cale_window_t3

0x0002,

0xf7ce,	// (0x0005b544) popup_fixed_preview_cale_window_t_ParamLimits

0xf7ce,	// (0x0005b544) popup_fixed_preview_cale_window_t

0x9e6c,	// (0x00055be2) list_single_fp_cale_pane_ParamLimits

0x9e6c,	// (0x00055be2) list_single_fp_cale_pane

0x4981,	// (0x000506f7) list_single_fp_cale_pane_g1_ParamLimits

0x4981,	// (0x000506f7) list_single_fp_cale_pane_g1

0x498d,	// (0x00050703) list_single_fp_cale_pane_g2_ParamLimits

0x498d,	// (0x00050703) list_single_fp_cale_pane_g2

0x0002,

0xf7d5,	// (0x0005b54b) list_single_fp_cale_pane_g_ParamLimits

0xf7d5,	// (0x0005b54b) list_single_fp_cale_pane_g

0x49a6,	// (0x0005071c) list_single_fp_cale_pane_t1_ParamLimits

0x49a6,	// (0x0005071c) list_single_fp_cale_pane_t1

0x49b8,	// (0x0005072e) list_single_fp_cale_pane_t2_ParamLimits

0x49b8,	// (0x0005072e) list_single_fp_cale_pane_t2

0x0001,

0xf7dc,	// (0x0005b552) list_single_fp_cale_pane_t_ParamLimits

0xf7dc,	// (0x0005b552) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x0450,	// (0x0004c1c6) main_dialer_pane

0x9e80,	// (0x00055bf6) aid_cell_size_keypad

0x9e8a,	// (0x00055c00) dialer_ne_pane

0x9e94,	// (0x00055c0a) grid_dialer_command_1_pane

0x9e9c,	// (0x00055c12) grid_dialer_command_2_pane

0x9ea4,	// (0x00055c1a) grid_dialer_keypad_pane

0x9eb8,	// (0x00055c2e) bg_popup_call_pane_cp06_ParamLimits

0x9eb8,	// (0x00055c2e) bg_popup_call_pane_cp06

0x9ec4,	// (0x00055c3a) dialer_ne_clear_pane_ParamLimits

0x9ec4,	// (0x00055c3a) dialer_ne_clear_pane

0x49eb,	// (0x00050761) dialer_ne_pane_g1

0x49f3,	// (0x00050769) dialer_ne_pane_t1_ParamLimits

0x49f3,	// (0x00050769) dialer_ne_pane_t1

0x9ed0,	// (0x00055c46) dialer_ne_pane_t2_ParamLimits

0x9ed0,	// (0x00055c46) dialer_ne_pane_t2

0x9eed,	// (0x00055c63) dialer_ne_pane_t3_ParamLimits

0x9eed,	// (0x00055c63) dialer_ne_pane_t3

0x0002,

0xf7e1,	// (0x0005b557) dialer_ne_pane_t_ParamLimits

0xf7e1,	// (0x0005b557) dialer_ne_pane_t

0x9f11,	// (0x00055c87) dialer_ne_pane_t3_copy1_ParamLimits

0x9f11,	// (0x00055c87) dialer_ne_pane_t3_copy1

0x9f35,	// (0x00055cab) cell_dialer_keypad_pane_ParamLimits

0x9f35,	// (0x00055cab) cell_dialer_keypad_pane

0x9f4c,	// (0x00055cc2) cell_dialer_command_1_pane_ParamLimits

0x9f4c,	// (0x00055cc2) cell_dialer_command_1_pane

0x9f62,	// (0x00055cd8) cell_dialer_command_2_pane_ParamLimits

0x9f62,	// (0x00055cd8) cell_dialer_command_2_pane

0x4a05,	// (0x0005077b) bg_button_pane_cp02_ParamLimits

0x4a05,	// (0x0005077b) bg_button_pane_cp02

0x9f71,	// (0x00055ce7) cell_dialer_keypad_pane_g1_ParamLimits

0x9f71,	// (0x00055ce7) cell_dialer_keypad_pane_g1

0x4a05,	// (0x0005077b) bg_button_pane_cp03_ParamLimits

0x4a05,	// (0x0005077b) bg_button_pane_cp03

0x9f86,	// (0x00055cfc) cell_dialer_command_1_pane_g1_ParamLimits

0x9f86,	// (0x00055cfc) cell_dialer_command_1_pane_g1

0x4a11,	// (0x00050787) bg_button_pane_cp04

0x9f99,	// (0x00055d0f) cell_dialer_command_2_pane_g1

0x2d8e,	// (0x0004eb04) bg_button_pane_cp06

0x4a19,	// (0x0005078f) dialer_ne_clear_pane_g1

0x7eeb,	// (0x00053c61) navi_pane_g2

0x7f19,	// (0x00053c8f) navi_pane_g3

0x0002,

0xf409,	// (0x0005b17f) navi_pane_g

0x7f44,	// (0x00053cba) navi_pane_mv_g2

0x7f6b,	// (0x00053ce1) navi_pane_mv_g5

0x7f73,	// (0x00053ce9) navi_pane_mv_t1

0x2306,	// (0x0004e07c) main_clock2_pane

0x9fc7,	// (0x00055d3d) main_clock2_list_pane_ParamLimits

0x9fc7,	// (0x00055d3d) main_clock2_list_pane

0x9fef,	// (0x00055d65) main_clock2_pane_t1_ParamLimits

0x9fef,	// (0x00055d65) main_clock2_pane_t1

0xa01f,	// (0x00055d95) main_clock2_pane_t2_ParamLimits

0xa01f,	// (0x00055d95) main_clock2_pane_t2

0x0004,

0xf7e8,	// (0x0005b55e) main_clock2_pane_t_ParamLimits

0xf7e8,	// (0x0005b55e) main_clock2_pane_t

0xa086,	// (0x00055dfc) popup_clock_analogue_window_cp03_ParamLimits

0xa086,	// (0x00055dfc) popup_clock_analogue_window_cp03

0xa0a6,	// (0x00055e1c) popup_clock_digital_window_cp02_ParamLimits

0xa0a6,	// (0x00055e1c) popup_clock_digital_window_cp02

0xa11b,	// (0x00055e91) main_clock2_list_single_pane_ParamLimits

0xa11b,	// (0x00055e91) main_clock2_list_single_pane

0x2d8e,	// (0x0004eb04) list_highlight_pane_cp05

0x4a21,	// (0x00050797) main_clock2_list_single_pane_t1

0x6bc9,	// (0x0005293f) popup_toolbar_window_cp04_ParamLimits

0x96c4,	// (0x0005543a) camera2_autofocus_pane_g2_ParamLimits

0x96c4,	// (0x0005543a) camera2_autofocus_pane_g2

0x96d0,	// (0x00055446) camera2_autofocus_pane_g3_ParamLimits

0x96d0,	// (0x00055446) camera2_autofocus_pane_g3

0x96dc,	// (0x00055452) camera2_autofocus_pane_g4_ParamLimits

0x96dc,	// (0x00055452) camera2_autofocus_pane_g4

0x96e8,	// (0x0005545e) camera2_autofocus_pane_g5_ParamLimits

0x96e8,	// (0x0005545e) camera2_autofocus_pane_g5

0x0004,

0xf731,	// (0x0005b4a7) camera2_autofocus_pane_g_ParamLimits

0xf731,	// (0x0005b4a7) camera2_autofocus_pane_g

0x98a3,	// (0x00055619) camera2_autofocus_pane_cp_g2

0x98ab,	// (0x00055621) camera2_autofocus_pane_cp_g3

0x98b3,	// (0x00055629) camera2_autofocus_pane_cp_g4

0x98bb,	// (0x00055631) camera2_autofocus_pane_cp_g5

0x0004,

0xf797,	// (0x0005b50d) camera2_autofocus_pane_cp_g

0x9eb0,	// (0x00055c26) popup_dialer_spcha_window

0x0450,	// (0x0004c1c6) bg_popup_sub_pane_cp07

0x4a2f,	// (0x000507a5) list_spcha_pane

0x4a37,	// (0x000507ad) list_single_spcha_pane_ParamLimits

0x4a37,	// (0x000507ad) list_single_spcha_pane

0x0450,	// (0x0004c1c6) list_highlight_pane_cp06

0x4a48,	// (0x000507be) list_single_spcha_pane_t1

0x3c1c,	// (0x0004f992) popup_call2_audio_out_window_g4_ParamLimits

0x3c1c,	// (0x0004f992) popup_call2_audio_out_window_g4

0x0450,	// (0x0004c1c6) main_imed2_pane

0x4203,	// (0x0004ff79) popup_imed_adjust2_window

0x8d89,	// (0x00054aff) popup_imed_trans_window_ParamLimits

0x8d89,	// (0x00054aff) popup_imed_trans_window

0x4460,	// (0x000501d6) popup_blid_sat_info2_window_t1

0x446e,	// (0x000501e4) popup_blid_sat_info2_window_t2

0x000a,

0xf6c6,	// (0x0005b43c) popup_blid_sat_info2_window_t

0xa1c5,	// (0x00055f3b) aid_size_cell_colour_35

0xa1df,	// (0x00055f55) aid_size_cell_colour_112

0xa1f6,	// (0x00055f6c) aid_size_cell_effect

0x3675,	// (0x0004f3eb) bg_tb_trans_pane_cp02

0x369a,	// (0x0004f410) heading_imed_pane

0xa210,	// (0x00055f86) listscroll_imed_pane

0x4a56,	// (0x000507cc) heading_imed_pane_g1

0x4a5e,	// (0x000507d4) heading_imed_pane_t1

0x4a6c,	// (0x000507e2) grid_imed_colour_35_pane_ParamLimits

0x4a6c,	// (0x000507e2) grid_imed_colour_35_pane

0xa21c,	// (0x00055f92) grid_imed_effect_pane

0x4a87,	// (0x000507fd) list_imed_aspect_pane

0xa22c,	// (0x00055fa2) scroll_pane_cp027_ParamLimits

0xa22c,	// (0x00055fa2) scroll_pane_cp027

0xa238,	// (0x00055fae) cell_imed_effect_pane_ParamLimits

0xa238,	// (0x00055fae) cell_imed_effect_pane

0x4a8f,	// (0x00050805) cell_imed_colour_pane_ParamLimits

0x4a8f,	// (0x00050805) cell_imed_colour_pane

0x4ad1,	// (0x00050847) cell_imed_colour_pane_g1_ParamLimits

0x4ad1,	// (0x00050847) cell_imed_colour_pane_g1

0x4ae2,	// (0x00050858) hgihlgiht_grid_pane_cp016_ParamLimits

0x4ae2,	// (0x00050858) hgihlgiht_grid_pane_cp016

0xa250,	// (0x00055fc6) cell_imed_effect_pane_g1

0xa258,	// (0x00055fce) grid_highlight_pane_cp017

0x3683,	// (0x0004f3f9) list_imed_single_pane_ParamLimits

0x3683,	// (0x0004f3f9) list_imed_single_pane

0x0450,	// (0x0004c1c6) list_highlight_pane_cp07

0x4af3,	// (0x00050869) list_imed_aspect_pane_comp1_t1

0x41db,	// (0x0004ff51) bg_tb_trans_pane_cp05

0x4b15,	// (0x0005088b) popup_imed_adjust2_window_g1

0x4b3c,	// (0x000508b2) popup_imed_adjust2_window_t1

0x4b54,	// (0x000508ca) slider_imed_adjust_pane

0x4b68,	// (0x000508de) slider_imed_adjust_pane_g1

0x4b78,	// (0x000508ee) slider_imed_adjust_pane_g2

0x4b88,	// (0x000508fe) slider_imed_adjust_pane_g3

0x4b99,	// (0x0005090f) slider_imed_adjust_pane_g4

0x0003,

0xf805,	// (0x0005b57b) slider_imed_adjust_pane_g

0xa261,	// (0x00055fd7) aid_size_cell_clipart2

0xa26d,	// (0x00055fe3) grid_imed_clipart_pane

0x4baa,	// (0x00050920) scroll_pane_cp031

0xa277,	// (0x00055fed) cell_imed_clipart_pane_ParamLimits

0xa277,	// (0x00055fed) cell_imed_clipart_pane

0xa29e,	// (0x00056014) cell_imed_clipart_pane_g1

0x0450,	// (0x0004c1c6) grid_highlight_pane_cp014

0x9fd3,	// (0x00055d49) main_clock2_pane_g1_ParamLimits

0x9fd3,	// (0x00055d49) main_clock2_pane_g1

0xa0c2,	// (0x00055e38) aid_call2_pane_cp10

0xa0d4,	// (0x00055e4a) aid_call_pane_cp10

0x2cc3,	// (0x0004ea39) popup_clock_analogue_window_cp10_g1

0x2cc3,	// (0x0004ea39) popup_clock_analogue_window_cp10_g2

0xa0e6,	// (0x00055e5c) popup_clock_analogue_window_cp10_g3

0xa0e6,	// (0x00055e5c) popup_clock_analogue_window_cp10_g4

0x2cc3,	// (0x0004ea39) popup_clock_analogue_window_cp10_g5

0x0004,

0xf7f3,	// (0x0005b569) popup_clock_analogue_window_cp10_g

0xa0fc,	// (0x00055e72) popup_clock_analogue_window_cp10_t1

0xa12d,	// (0x00055ea3) clock_digital_number_pane_cp10_ParamLimits

0xa12d,	// (0x00055ea3) clock_digital_number_pane_cp10

0xa145,	// (0x00055ebb) clock_digital_number_pane_cp11_ParamLimits

0xa145,	// (0x00055ebb) clock_digital_number_pane_cp11

0xa15d,	// (0x00055ed3) clock_digital_number_pane_cp12_ParamLimits

0xa15d,	// (0x00055ed3) clock_digital_number_pane_cp12

0xa175,	// (0x00055eeb) clock_digital_number_pane_cp13_ParamLimits

0xa175,	// (0x00055eeb) clock_digital_number_pane_cp13

0xa18d,	// (0x00055f03) clock_digital_separator_pane_cp10_ParamLimits

0xa18d,	// (0x00055f03) clock_digital_separator_pane_cp10

0xa1a5,	// (0x00055f1b) popup_clock_digital_window_cp02_t1_ParamLimits

0xa1a5,	// (0x00055f1b) popup_clock_digital_window_cp02_t1

0x21ef,	// (0x0004df65) clock_digital_number_pane_cp10_g1

0x21ef,	// (0x0004df65) clock_digital_number_pane_cp10_g2

0x0001,

0xf80e,	// (0x0005b584) clock_digital_number_pane_cp10_g

0x21ef,	// (0x0004df65) clock_digital_separator_pane_cp10_g1

0x21ef,	// (0x0004df65) clock_digital_separator_pane_g2_cp10

0x2d5e,	// (0x0004ead4) navi_pane_vded_g4

0x2d67,	// (0x0004eadd) navi_pane_vded_g5

0x2d70,	// (0x0004eae6) navi_pane_vded_t1

0x0450,	// (0x0004c1c6) main_vded_pane

0xa2a7,	// (0x0005601d) main_vded_pane_g1

0xa2b3,	// (0x00056029) main_vded_pane_g2

0xa2bd,	// (0x00056033) main_vded_pane_g3

0x0002,

0xf813,	// (0x0005b589) main_vded_pane_g

0xa2c7,	// (0x0005603d) main_vded_pane_t1

0xa2d5,	// (0x0005604b) main_vded_pane_t2

0x0001,

0xf81a,	// (0x0005b590) main_vded_pane_t

0xa2e3,	// (0x00056059) vded_slider_pane

0xa2ed,	// (0x00056063) vded_video_pane

0x4bb2,	// (0x00050928) vded_video_pane_g1

0xa2f7,	// (0x0005606d) vded_video_pane_g2

0x462c,	// (0x000503a2) vded_video_pane_g3

0x0002,

0xf81f,	// (0x0005b595) vded_video_pane_g

0x4bbc,	// (0x00050932) vded_slider_pane_g1

0x4375,	// (0x000500eb) vded_slider_pane_g2

0x4bc5,	// (0x0005093b) vded_slider_pane_g3

0x4bce,	// (0x00050944) vded_slider_pane_g4

0x4bd7,	// (0x0005094d) vded_slider_pane_g5

0x0004,

0xf826,	// (0x0005b59c) vded_slider_pane_g

0x9dc1,	// (0x00055b37) mup3_rocker_pane_ParamLimits

0x9dc1,	// (0x00055b37) mup3_rocker_pane

0xa300,	// (0x00056076) mup3_control_keys_pane_g1

0xa308,	// (0x0005607e) mup3_control_keys_pane_g2

0xa310,	// (0x00056086) mup3_control_keys_pane_g3

0xa318,	// (0x0005608e) mup3_control_keys_pane_g4

0x0003,

0xf831,	// (0x0005b5a7) mup3_control_keys_pane_g

0x5d82,	// (0x00051af8) popup_toolbar2_fixed_window_cp01_ParamLimits

0x5d82,	// (0x00051af8) popup_toolbar2_fixed_window_cp01

0x9ddb,	// (0x00055b51) popup_toolbar2_fixed_window_cp02_ParamLimits

0x9ddb,	// (0x00055b51) popup_toolbar2_fixed_window_cp02

0x3515,	// (0x0004f28b) popup_call2_audio_second_window_t4_ParamLimits

0x3515,	// (0x0004f28b) popup_call2_audio_second_window_t4

0x3a89,	// (0x0004f7ff) popup_call2_audio_first_window_t6_ParamLimits

0x3a89,	// (0x0004f7ff) popup_call2_audio_first_window_t6

0x3d1f,	// (0x0004fa95) popup_call2_audio_out_window_t6_ParamLimits

0x3d1f,	// (0x0004fa95) popup_call2_audio_out_window_t6

0x0450,	// (0x0004c1c6) main_vitu_pane

0xa328,	// (0x0005609e) aid_size_cell_itu_ParamLimits

0xa328,	// (0x0005609e) aid_size_cell_itu

0x0beb,	// (0x0004c961) bg_popup_window_pane_cp08_ParamLimits

0x0beb,	// (0x0004c961) bg_popup_window_pane_cp08

0xa336,	// (0x000560ac) field_vitu_entry_pane_ParamLimits

0xa336,	// (0x000560ac) field_vitu_entry_pane

0xa345,	// (0x000560bb) grid_vitu_function_pane_ParamLimits

0xa345,	// (0x000560bb) grid_vitu_function_pane

0xa355,	// (0x000560cb) grid_vitu_itu_pane_ParamLimits

0xa355,	// (0x000560cb) grid_vitu_itu_pane

0xa365,	// (0x000560db) cell_vitu_itu_pane_ParamLimits

0xa365,	// (0x000560db) cell_vitu_itu_pane

0xa37a,	// (0x000560f0) cell_vitu_function_pane_ParamLimits

0xa37a,	// (0x000560f0) cell_vitu_function_pane

0x3675,	// (0x0004f3eb) bg_popup_sub_pane_cp08_ParamLimits

0x3675,	// (0x0004f3eb) bg_popup_sub_pane_cp08

0xa38e,	// (0x00056104) field_vitu_entry_pane_t1_ParamLimits

0xa38e,	// (0x00056104) field_vitu_entry_pane_t1

0x4bf8,	// (0x0005096e) field_vitu_entry_pane_t2_ParamLimits

0x4bf8,	// (0x0005096e) field_vitu_entry_pane_t2

0x0001,

0xf83f,	// (0x0005b5b5) field_vitu_entry_pane_t_ParamLimits

0xf83f,	// (0x0005b5b5) field_vitu_entry_pane_t

0x4c15,	// (0x0005098b) bg_button_pane_cp05_ParamLimits

0x4c15,	// (0x0005098b) bg_button_pane_cp05

0xa3ab,	// (0x00056121) cell_vitu_itu_pane_g1

0xa3c3,	// (0x00056139) cell_vitu_itu_pane_t1_ParamLimits

0xa3c3,	// (0x00056139) cell_vitu_itu_pane_t1

0xa3d5,	// (0x0005614b) cell_vitu_itu_pane_t2_ParamLimits

0xa3d5,	// (0x0005614b) cell_vitu_itu_pane_t2

0x0002,

0xf844,	// (0x0005b5ba) cell_vitu_itu_pane_t_ParamLimits

0xf844,	// (0x0005b5ba) cell_vitu_itu_pane_t

0x4c23,	// (0x00050999) bg_button_pane_cp07

0xa40a,	// (0x00056180) cell_vitu_function_pane_g1

0x600a,	// (0x00051d80) main_calc_pane_g1

0x5b8b,	// (0x00051901) aid_visual_content_pane

0x0450,	// (0x0004c1c6) main_vradio_pane

0xa413,	// (0x00056189) main_vradio_pane_g1_ParamLimits

0xa413,	// (0x00056189) main_vradio_pane_g1

0x4c2d,	// (0x000509a3) main_vradio_pane_g2_ParamLimits

0x4c2d,	// (0x000509a3) main_vradio_pane_g2

0x0001,

0xf84b,	// (0x0005b5c1) main_vradio_pane_g_ParamLimits

0xf84b,	// (0x0005b5c1) main_vradio_pane_g

0xa423,	// (0x00056199) main_vradio_pane_t1_ParamLimits

0xa423,	// (0x00056199) main_vradio_pane_t1

0xa435,	// (0x000561ab) main_vradio_pane_t2_ParamLimits

0xa435,	// (0x000561ab) main_vradio_pane_t2

0x4c3a,	// (0x000509b0) main_vradio_pane_t3_ParamLimits

0x4c3a,	// (0x000509b0) main_vradio_pane_t3

0x0002,

0xf850,	// (0x0005b5c6) main_vradio_pane_t_ParamLimits

0xf850,	// (0x0005b5c6) main_vradio_pane_t

0xa447,	// (0x000561bd) vradio_rocker_control_pane_ParamLimits

0xa447,	// (0x000561bd) vradio_rocker_control_pane

0xa453,	// (0x000561c9) vradio_station_info_pane_ParamLimits

0xa453,	// (0x000561c9) vradio_station_info_pane

0x4c4e,	// (0x000509c4) vradio_frequency_info_pane_ParamLimits

0x4c4e,	// (0x000509c4) vradio_frequency_info_pane

0x462c,	// (0x000503a2) vradio_station_info_pane_g1

0x4c5d,	// (0x000509d3) vradio_station_info_pane_t1_ParamLimits

0x4c5d,	// (0x000509d3) vradio_station_info_pane_t1

0x4c7f,	// (0x000509f5) vradio_station_info_pane_t2_ParamLimits

0x4c7f,	// (0x000509f5) vradio_station_info_pane_t2

0x0001,

0xf857,	// (0x0005b5cd) vradio_station_info_pane_t_ParamLimits

0xf857,	// (0x0005b5cd) vradio_station_info_pane_t

0x4c91,	// (0x00050a07) vradio_tuning_pane

0x4c99,	// (0x00050a0f) vradio_rocker_control_pane_g1

0x4ca1,	// (0x00050a17) vradio_rocker_control_pane_g2

0x4ca9,	// (0x00050a1f) vradio_rocker_control_pane_g3

0x4cb1,	// (0x00050a27) vradio_rocker_control_pane_g4

0x4cb9,	// (0x00050a2f) vradio_rocker_control_pane_g5

0x0004,

0xf85c,	// (0x0005b5d2) vradio_rocker_control_pane_g

0xa462,	// (0x000561d8) vradio_frequency_info_pane_g1

0x4cc1,	// (0x00050a37) vradio_frequency_info_pane_t1_ParamLimits

0x4cc1,	// (0x00050a37) vradio_frequency_info_pane_t1

0xa46c,	// (0x000561e2) vradio_tuning_pane_g1

0xa475,	// (0x000561eb) vradio_tuning_pane_t1

0x0486,	// (0x0004c1fc) area_side_right_pane_ParamLimits

0x0486,	// (0x0004c1fc) area_side_right_pane

0x41a2,	// (0x0004ff18) status_small_pane_g1

0x41aa,	// (0x0004ff20) status_small_pane_g2

0x41b3,	// (0x0004ff29) status_small_pane_g3

0x41bc,	// (0x0004ff32) status_small_pane_g4

0x0003,

0xf61c,	// (0x0005b392) status_small_pane_g

0x41c5,	// (0x0004ff3b) status_small_pane_t1

0x0450,	// (0x0004c1c6) main_video3_pane

0x4cd5,	// (0x00050a4b) cams_zoom_vslider_pane

0x4cdd,	// (0x00050a53) image3_wide_pane_ParamLimits

0x4cdd,	// (0x00050a53) image3_wide_pane

0x4cf7,	// (0x00050a6d) image3_wide_small_pane

0x4d03,	// (0x00050a79) main_video3_pane_g1_ParamLimits

0x4d03,	// (0x00050a79) main_video3_pane_g1

0x4d1f,	// (0x00050a95) main_video3_pane_g2_ParamLimits

0x4d1f,	// (0x00050a95) main_video3_pane_g2

0x0001,

0xf867,	// (0x0005b5dd) main_video3_pane_g_ParamLimits

0xf867,	// (0x0005b5dd) main_video3_pane_g

0x4d3b,	// (0x00050ab1) main_video3_pane_t1_ParamLimits

0x4d3b,	// (0x00050ab1) main_video3_pane_t1

0x4d66,	// (0x00050adc) main_video3_pane_t2_ParamLimits

0x4d66,	// (0x00050adc) main_video3_pane_t2

0x4d91,	// (0x00050b07) main_video3_pane_t3_ParamLimits

0x4d91,	// (0x00050b07) main_video3_pane_t3

0x0002,

0xf86c,	// (0x0005b5e2) main_video3_pane_t_ParamLimits

0xf86c,	// (0x0005b5e2) main_video3_pane_t

0x4dbe,	// (0x00050b34) cams_zoom_vslider_pane_g1

0x4dc7,	// (0x00050b3d) cams_zoom_vslider_pane_g2

0x0001,

0xf873,	// (0x0005b5e9) cams_zoom_vslider_pane_g

0x4dcf,	// (0x00050b45) small_slider_vertical_pane

0x462c,	// (0x000503a2) small_slider_vertical_pane_g1

0x462c,	// (0x000503a2) small_slider_vertical_pane_g2

0x4dd7,	// (0x00050b4d) small_slider_vertical_pane_g3

0x0002,

0xf878,	// (0x0005b5ee) small_slider_vertical_pane_g

0x0450,	// (0x0004c1c6) main_hwr_training_pane

0x4de0,	// (0x00050b56) hwr_training_instruct_pane_ParamLimits

0x4de0,	// (0x00050b56) hwr_training_instruct_pane

0xa484,	// (0x000561fa) hwr_training_navi_pane_ParamLimits

0xa484,	// (0x000561fa) hwr_training_navi_pane

0xa49e,	// (0x00056214) hwr_training_write_pane_ParamLimits

0xa49e,	// (0x00056214) hwr_training_write_pane

0x0450,	// (0x0004c1c6) bg_frame_shadow_pane

0x4e17,	// (0x00050b8d) hwr_training_write_pane_g1

0x4e1f,	// (0x00050b95) hwr_training_write_pane_g2

0x4e27,	// (0x00050b9d) hwr_training_write_pane_g3

0x4e2f,	// (0x00050ba5) hwr_training_write_pane_g4

0x4e37,	// (0x00050bad) hwr_training_write_pane_g5

0x4e3f,	// (0x00050bb5) hwr_training_write_pane_g6

0x4e47,	// (0x00050bbd) hwr_training_write_pane_g7

0x0006,

0xf87f,	// (0x0005b5f5) hwr_training_write_pane_g

0xa4d6,	// (0x0005624c) hwr_training_navi_pane_g1_ParamLimits

0xa4d6,	// (0x0005624c) hwr_training_navi_pane_g1

0xa4e8,	// (0x0005625e) hwr_training_navi_pane_g2_ParamLimits

0xa4e8,	// (0x0005625e) hwr_training_navi_pane_g2

0xa4fa,	// (0x00056270) hwr_training_navi_pane_g3_ParamLimits

0xa4fa,	// (0x00056270) hwr_training_navi_pane_g3

0xa50a,	// (0x00056280) hwr_training_navi_pane_g4_ParamLimits

0xa50a,	// (0x00056280) hwr_training_navi_pane_g4

0x0004,

0xf88e,	// (0x0005b604) hwr_training_navi_pane_g_ParamLimits

0xf88e,	// (0x0005b604) hwr_training_navi_pane_g

0xa524,	// (0x0005629a) hwr_training_navi_pane_t1

0xa532,	// (0x000562a8) list_single_hwr_training_instruct_pane_ParamLimits

0xa532,	// (0x000562a8) list_single_hwr_training_instruct_pane

0x4e4f,	// (0x00050bc5) list_single_hwr_training_instruct_pane_t1

0x456c,	// (0x000502e2) bg_frame_shadow_pane_g1

0x4e5e,	// (0x00050bd4) bg_frame_shadow_pane_g2

0x4e66,	// (0x00050bdc) bg_frame_shadow_pane_g3

0x4e6e,	// (0x00050be4) bg_frame_shadow_pane_g4

0x4e76,	// (0x00050bec) bg_frame_shadow_pane_g5

0x4e7e,	// (0x00050bf4) bg_frame_shadow_pane_g6

0x4e86,	// (0x00050bfc) bg_frame_shadow_pane_g7

0x23d1,	// (0x0004e147) bg_frame_shadow_pane_g8

0x0007,

0xf899,	// (0x0005b60f) bg_frame_shadow_pane_g

0x0450,	// (0x0004c1c6) main_video_tele_dialer_pane

0xa568,	// (0x000562de) aid_size_cell_video_keypad_ParamLimits

0xa568,	// (0x000562de) aid_size_cell_video_keypad

0xa578,	// (0x000562ee) grid_video_dialer_keypad_pane_ParamLimits

0xa578,	// (0x000562ee) grid_video_dialer_keypad_pane

0xa5aa,	// (0x00056320) video_down_pane_cp_ParamLimits

0xa5aa,	// (0x00056320) video_down_pane_cp

0xa5d2,	// (0x00056348) cell_video_dialer_keypad_pane_ParamLimits

0xa5d2,	// (0x00056348) cell_video_dialer_keypad_pane

0x4e8e,	// (0x00050c04) bg_button_pane_cp08_ParamLimits

0x4e8e,	// (0x00050c04) bg_button_pane_cp08

0xa5e7,	// (0x0005635d) cell_video_dialer_keypad_pane_g1_ParamLimits

0xa5e7,	// (0x0005635d) cell_video_dialer_keypad_pane_g1

0x9db5,	// (0x00055b2b) mup3_rocker2_pane_ParamLimits

0x9db5,	// (0x00055b2b) mup3_rocker2_pane

0x462c,	// (0x000503a2) mup3_rocker2_pane_g1

0x8d17,	// (0x00054a8d) main_dialer2_pane

0x0450,	// (0x0004c1c6) main_mp4_pane

0xa626,	// (0x0005639c) main_mp4_pane_g1_ParamLimits

0xa626,	// (0x0005639c) main_mp4_pane_g1

0xa634,	// (0x000563aa) main_mp4_pane_g2_ParamLimits

0xa634,	// (0x000563aa) main_mp4_pane_g2

0xa642,	// (0x000563b8) main_mp4_pane_g3_ParamLimits

0xa642,	// (0x000563b8) main_mp4_pane_g3

0xa687,	// (0x000563fd) main_mp4_pane_g4_ParamLimits

0xa687,	// (0x000563fd) main_mp4_pane_g4

0xa6af,	// (0x00056425) main_mp4_pane_g5_ParamLimits

0xa6af,	// (0x00056425) main_mp4_pane_g5

0x0005,

0xf8b9,	// (0x0005b62f) main_mp4_pane_g_ParamLimits

0xf8b9,	// (0x0005b62f) main_mp4_pane_g

0xa6ff,	// (0x00056475) main_mp4_pane_t1_ParamLimits

0xa6ff,	// (0x00056475) main_mp4_pane_t1

0xa75b,	// (0x000564d1) main_mp4_pane_t2_ParamLimits

0xa75b,	// (0x000564d1) main_mp4_pane_t2

0xde7e,	// (0x00059bf4) main_mp4_pane_t3_ParamLimits

0xde7e,	// (0x00059bf4) main_mp4_pane_t3

0xa7ad,	// (0x00056523) main_mp4_pane_t4_ParamLimits

0xa7ad,	// (0x00056523) main_mp4_pane_t4

0x0003,

0xf8c6,	// (0x0005b63c) main_mp4_pane_t_ParamLimits

0xf8c6,	// (0x0005b63c) main_mp4_pane_t

0xa7f1,	// (0x00056567) mp4_progress_pane_ParamLimits

0xa7f1,	// (0x00056567) mp4_progress_pane

0xa83b,	// (0x000565b1) mp4_rocker_pane_ParamLimits

0xa83b,	// (0x000565b1) mp4_rocker_pane

0xdea6,	// (0x00059c1c) mp4_progress_pane_t1

0xdebf,	// (0x00059c35) mp4_progress_pane_t2

0x0001,

0xf8cf,	// (0x0005b645) mp4_progress_pane_t

0xded8,	// (0x00059c4e) mup_progress_pane_cp04

0xdee4,	// (0x00059c5a) mp4_rocker_pane_g1

0xa85b,	// (0x000565d1) aid_cell_size_keypad2_ParamLimits

0xa85b,	// (0x000565d1) aid_cell_size_keypad2

0xa86b,	// (0x000565e1) dialer2_ne_pane_ParamLimits

0xa86b,	// (0x000565e1) dialer2_ne_pane

0xa879,	// (0x000565ef) grid_dialer2_keypad_pane_ParamLimits

0xa879,	// (0x000565ef) grid_dialer2_keypad_pane

0xdeee,	// (0x00059c64) bg_popup_call_pane_cp07_ParamLimits

0xdeee,	// (0x00059c64) bg_popup_call_pane_cp07

0xa889,	// (0x000565ff) dialer2_ne_pane_t1_ParamLimits

0xa889,	// (0x000565ff) dialer2_ne_pane_t1

0xa8ae,	// (0x00056624) cell_dialer2_keypad_pane_ParamLimits

0xa8ae,	// (0x00056624) cell_dialer2_keypad_pane

0xdf0e,	// (0x00059c84) bg_button_pane_pane_cp04_ParamLimits

0xdf0e,	// (0x00059c84) bg_button_pane_pane_cp04

0xa8c5,	// (0x0005663b) cell_dialer2_keypad_pane_g1_ParamLimits

0xa8c5,	// (0x0005663b) cell_dialer2_keypad_pane_g1

0x6a8b,	// (0x00052801) aid_placing_vt_set_content_ParamLimits

0x6a8b,	// (0x00052801) aid_placing_vt_set_content

0x6ab7,	// (0x0005282d) aid_placing_vt_set_title_ParamLimits

0x6ab7,	// (0x0005282d) aid_placing_vt_set_title

0x0450,	// (0x0004c1c6) main_image3_pane

0xa95f,	// (0x000566d5) area_side_right_pane_cp01_ParamLimits

0xa95f,	// (0x000566d5) area_side_right_pane_cp01

0xa98c,	// (0x00056702) main_image3_pane_g1_ParamLimits

0xa98c,	// (0x00056702) main_image3_pane_g1

0xa99a,	// (0x00056710) main_image3_pane_g2_ParamLimits

0xa99a,	// (0x00056710) main_image3_pane_g2

0xa9b3,	// (0x00056729) main_image3_pane_g3_ParamLimits

0xa9b3,	// (0x00056729) main_image3_pane_g3

0xa9cc,	// (0x00056742) main_image3_pane_g4_ParamLimits

0xa9cc,	// (0x00056742) main_image3_pane_g4

0x0003,

0xf8de,	// (0x0005b654) main_image3_pane_g_ParamLimits

0xf8de,	// (0x0005b654) main_image3_pane_g

0xa9e5,	// (0x0005675b) main_image3_pane_t1_ParamLimits

0xa9e5,	// (0x0005675b) main_image3_pane_t1

0xaa0a,	// (0x00056780) main_image3_pane_t2_ParamLimits

0xaa0a,	// (0x00056780) main_image3_pane_t2

0xaa29,	// (0x0005679f) main_image3_pane_t3_ParamLimits

0xaa29,	// (0x0005679f) main_image3_pane_t3

0x0003,

0xf8e7,	// (0x0005b65d) main_image3_pane_t_ParamLimits

0xf8e7,	// (0x0005b65d) main_image3_pane_t

0x0beb,	// (0x0004c961) grid_sctrl_middle_pane_cp01_ParamLimits

0x0beb,	// (0x0004c961) grid_sctrl_middle_pane_cp01

0xaa8a,	// (0x00056800) cell_sctrl_middle_pane_cp01_ParamLimits

0xaa8a,	// (0x00056800) cell_sctrl_middle_pane_cp01

0xaa9b,	// (0x00056811) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0xaa9b,	// (0x00056811) cell_sctrl_middle_pane_cp01_g1

0x0450,	// (0x0004c1c6) main_call4_pane

0xaaa8,	// (0x0005681e) aid_size_button_call4_ParamLimits

0xaaa8,	// (0x0005681e) aid_size_button_call4

0xaad8,	// (0x0005684e) call4_windows_pane_ParamLimits

0xaad8,	// (0x0005684e) call4_windows_pane

0xaaf2,	// (0x00056868) grid_call4_button_pane_ParamLimits

0xaaf2,	// (0x00056868) grid_call4_button_pane

0xdf1a,	// (0x00059c90) call4_windows_conf_pane

0xdf2f,	// (0x00059ca5) popup_call4_audio_first_window_ParamLimits

0xdf2f,	// (0x00059ca5) popup_call4_audio_first_window

0xdf7b,	// (0x00059cf1) popup_call4_audio_second_window_ParamLimits

0xdf7b,	// (0x00059cf1) popup_call4_audio_second_window

0xdf8f,	// (0x00059d05) popup_call4_audio_wait_window_ParamLimits

0xdf8f,	// (0x00059d05) popup_call4_audio_wait_window

0xab16,	// (0x0005688c) cell_call4_button_pane_ParamLimits

0xab16,	// (0x0005688c) cell_call4_button_pane

0xab3b,	// (0x000568b1) bg_button_pane_cp09_ParamLimits

0xab3b,	// (0x000568b1) bg_button_pane_cp09

0xab47,	// (0x000568bd) cell_call4_button_pane_g1_ParamLimits

0xab47,	// (0x000568bd) cell_call4_button_pane_g1

0xab54,	// (0x000568ca) cell_call4_button_pane_t1_ParamLimits

0xab54,	// (0x000568ca) cell_call4_button_pane_t1

0xdfd7,	// (0x00059d4d) popup_call4_audio_conf_window_ParamLimits

0xdfd7,	// (0x00059d4d) popup_call4_audio_conf_window

0x9de8,	// (0x00055b5e) mup3_progress_pane_t1_ParamLimits

0x9dff,	// (0x00055b75) mup3_progress_pane_t2_ParamLimits

0x490e,	// (0x00050684) mup3_progress_pane_t3_ParamLimits

0xf7c0,	// (0x0005b536) mup3_progress_pane_t_ParamLimits

0x4925,	// (0x0005069b) mup_progress_pane_cp03_ParamLimits

0xa320,	// (0x00056096) mup3_control_keys_pane_g4_copy1

0xa81f,	// (0x00056595) mp4_rocker2_pane_ParamLimits

0xa81f,	// (0x00056595) mp4_rocker2_pane

0xdfeb,	// (0x00059d61) mp4_rocker2_pane_g1

0xdff3,	// (0x00059d69) mp4_rocker2_pane_g2

0xab66,	// (0x000568dc) mp4_rocker2_pane_g3

0xab6e,	// (0x000568e4) mp4_rocker2_pane_g4

0xab76,	// (0x000568ec) mp4_rocker2_pane_g5

0x0004,

0xf8f0,	// (0x0005b666) mp4_rocker2_pane_g

0x0450,	// (0x0004c1c6) main_camera4_pane

0x0450,	// (0x0004c1c6) main_video4_pane

0xa586,	// (0x000562fc) main_video_tele_dialer_pane_t1_ParamLimits

0xa586,	// (0x000562fc) main_video_tele_dialer_pane_t1

0xa598,	// (0x0005630e) main_video_tele_dialer_pane_t2_ParamLimits

0xa598,	// (0x0005630e) main_video_tele_dialer_pane_t2

0x0001,

0xf8aa,	// (0x0005b620) main_video_tele_dialer_pane_t_ParamLimits

0xf8aa,	// (0x0005b620) main_video_tele_dialer_pane_t

0xab96,	// (0x0005690c) cam4_autofocus_pane_ParamLimits

0xab96,	// (0x0005690c) cam4_autofocus_pane

0xabb0,	// (0x00056926) cam4_image_uncrop_pane_ParamLimits

0xabb0,	// (0x00056926) cam4_image_uncrop_pane

0xabc7,	// (0x0005693d) cam4_indicators_pane_ParamLimits

0xabc7,	// (0x0005693d) cam4_indicators_pane

0xabe3,	// (0x00056959) main_camera4_pane_g1_ParamLimits

0xabe3,	// (0x00056959) main_camera4_pane_g1

0xabef,	// (0x00056965) main_camera4_pane_g2_ParamLimits

0xabef,	// (0x00056965) main_camera4_pane_g2

0xabef,	// (0x00056965) main_camera4_pane_g3_ParamLimits

0xabef,	// (0x00056965) main_camera4_pane_g3

0xabfb,	// (0x00056971) main_camera4_pane_g4_ParamLimits

0xabfb,	// (0x00056971) main_camera4_pane_g4

0xac07,	// (0x0005697d) main_camera4_pane_g5_ParamLimits

0xac07,	// (0x0005697d) main_camera4_pane_g5

0x0005,

0xf8fb,	// (0x0005b671) main_camera4_pane_g_ParamLimits

0xf8fb,	// (0x0005b671) main_camera4_pane_g

0xac21,	// (0x00056997) main_camera4_pane_t1_ParamLimits

0xac21,	// (0x00056997) main_camera4_pane_t1

0xac69,	// (0x000569df) bg_tb_trans_pane_cp06

0xac7f,	// (0x000569f5) cam4_indicators_pane_g1

0xac90,	// (0x00056a06) cam4_indicators_pane_g2

0x0002,

0xf916,	// (0x0005b68c) cam4_indicators_pane_g

0xacae,	// (0x00056a24) cam4_indicators_pane_t1

0xacd8,	// (0x00056a4e) main_video4_pane_g1_ParamLimits

0xacd8,	// (0x00056a4e) main_video4_pane_g1

0xace4,	// (0x00056a5a) main_video4_pane_g2_ParamLimits

0xace4,	// (0x00056a5a) main_video4_pane_g2

0xacf0,	// (0x00056a66) main_video4_pane_g3_ParamLimits

0xacf0,	// (0x00056a66) main_video4_pane_g3

0xacfc,	// (0x00056a72) main_video4_pane_g4_ParamLimits

0xacfc,	// (0x00056a72) main_video4_pane_g4

0x0004,

0xf91d,	// (0x0005b693) main_video4_pane_g_ParamLimits

0xf91d,	// (0x0005b693) main_video4_pane_g

0xad1c,	// (0x00056a92) vid4_indicators_pane_ParamLimits

0xad1c,	// (0x00056a92) vid4_indicators_pane

0xad3a,	// (0x00056ab0) video4_image_uncrop_cif_pane_ParamLimits

0xad3a,	// (0x00056ab0) video4_image_uncrop_cif_pane

0xad49,	// (0x00056abf) video4_image_uncrop_nhd_pane_ParamLimits

0xad49,	// (0x00056abf) video4_image_uncrop_nhd_pane

0xabb0,	// (0x00056926) video4_image_uncrop_vga_pane_ParamLimits

0xabb0,	// (0x00056926) video4_image_uncrop_vga_pane

0xad56,	// (0x00056acc) bg_tb_trans_pane_cp07

0xac7f,	// (0x000569f5) vid4_indicators_pane_g1

0xad6c,	// (0x00056ae2) vid4_indicators_pane_g2

0xad7d,	// (0x00056af3) vid4_indicators_pane_g3

0x0004,

0xf928,	// (0x0005b69e) vid4_indicators_pane_g

0xadaa,	// (0x00056b20) vid4_indicators_pane_t1

0xadc3,	// (0x00056b39) cam4_autofocus_pane_g1

0xadcb,	// (0x00056b41) cam4_autofocus_pane_g2

0xadd3,	// (0x00056b49) cam4_autofocus_pane_g3

0x0002,

0xf933,	// (0x0005b6a9) cam4_autofocus_pane_g

0xaddb,	// (0x00056b51) cam4_autofocus_pane_g3_copy1

0xa5b6,	// (0x0005632c) video_down_pane_cp_t1

0xa5c4,	// (0x0005633a) video_down_pane_cp_t2

0x0001,

0xf8af,	// (0x0005b625) video_down_pane_cp_t

0x0beb,	// (0x0004c961) popup_vitu2_window_ParamLimits

0x0beb,	// (0x0004c961) popup_vitu2_window

0xade3,	// (0x00056b59) aid_size_cell2_itu2_ParamLimits

0xade3,	// (0x00056b59) aid_size_cell2_itu2

0xae05,	// (0x00056b7b) aid_size_cell_itu2_ParamLimits

0xae05,	// (0x00056b7b) aid_size_cell_itu2

0xae49,	// (0x00056bbf) bg_popup_window_pane_cp09_ParamLimits

0xae49,	// (0x00056bbf) bg_popup_window_pane_cp09

0xae57,	// (0x00056bcd) field_vitu2_entry_pane_ParamLimits

0xae57,	// (0x00056bcd) field_vitu2_entry_pane

0xae77,	// (0x00056bed) grid_vitu2_function_pane_ParamLimits

0xae77,	// (0x00056bed) grid_vitu2_function_pane

0xaebb,	// (0x00056c31) grid_vitu2_itu_pane_ParamLimits

0xaebb,	// (0x00056c31) grid_vitu2_itu_pane

0xaf31,	// (0x00056ca7) cell_vitu2_itu_pane_ParamLimits

0xaf31,	// (0x00056ca7) cell_vitu2_itu_pane

0xaf46,	// (0x00056cbc) cell_vitu2_function_pane_ParamLimits

0xaf46,	// (0x00056cbc) cell_vitu2_function_pane

0xdffb,	// (0x00059d71) bg_popup_call_pane_cp08_ParamLimits

0xdffb,	// (0x00059d71) bg_popup_call_pane_cp08

0xe014,	// (0x00059d8a) field_vitu2_entry_pane_g1

0xe020,	// (0x00059d96) field_vitu2_entry_pane_g2

0x0002,

0xf93a,	// (0x0005b6b0) field_vitu2_entry_pane_g

0x0c01,	// (0x0004c977) field_vitu2_entry_pane_t1_ParamLimits

0x0c01,	// (0x0004c977) field_vitu2_entry_pane_t1

0x0c33,	// (0x0004c9a9) field_vitu2_entry_pane_t2_ParamLimits

0x0c33,	// (0x0004c9a9) field_vitu2_entry_pane_t2

0x0001,

0xf941,	// (0x0005b6b7) field_vitu2_entry_pane_t_ParamLimits

0xf941,	// (0x0005b6b7) field_vitu2_entry_pane_t

0xaf87,	// (0x00056cfd) bg_button_pane_cp010_ParamLimits

0xaf87,	// (0x00056cfd) bg_button_pane_cp010

0xaf95,	// (0x00056d0b) cell_vitu2_itu_pane_g1

0xafb3,	// (0x00056d29) cell_vitu2_itu_pane_t1_ParamLimits

0xafb3,	// (0x00056d29) cell_vitu2_itu_pane_t1

0x5a90,	// (0x00051806) cell_vitu2_itu_pane_t2_ParamLimits

0x5a90,	// (0x00051806) cell_vitu2_itu_pane_t2

0x0002,

0xf94b,	// (0x0005b6c1) cell_vitu2_itu_pane_t_ParamLimits

0xf94b,	// (0x0005b6c1) cell_vitu2_itu_pane_t

0xad56,	// (0x00056acc) bg_button_pane_cp011

0xb005,	// (0x00056d7b) cell_vitu2_function_pane_g1

0x0450,	// (0x0004c1c6) main_myfav_hc_pane

0xaa6b,	// (0x000567e1) popup_image3_note_pane_ParamLimits

0xaa6b,	// (0x000567e1) popup_image3_note_pane

0xaa79,	// (0x000567ef) popup_image3_tool_bar_pane_ParamLimits

0xaa79,	// (0x000567ef) popup_image3_tool_bar_pane

0x5afe,	// (0x00051874) cell_vitu2_itu_pane_t3_ParamLimits

0x5afe,	// (0x00051874) cell_vitu2_itu_pane_t3

0x0450,	// (0x0004c1c6) bg_popup_trans_pane

0xe042,	// (0x00059db8) grid_image3_tool_bar_pane

0xe04c,	// (0x00059dc2) bg_popup_trans_pane_g1

0x2716,	// (0x0004e48c) bg_popup_trans_pane_g2

0xe054,	// (0x00059dca) bg_popup_trans_pane_g3

0xe05c,	// (0x00059dd2) bg_popup_trans_pane_g4

0xe064,	// (0x00059dda) bg_popup_trans_pane_g5

0xe06c,	// (0x00059de2) bg_popup_trans_pane_g6

0xe074,	// (0x00059dea) bg_popup_trans_pane_g7

0xe07c,	// (0x00059df2) bg_popup_trans_pane_g8

0x26f6,	// (0x0004e46c) bg_popup_trans_pane_g9

0x0008,

0xf952,	// (0x0005b6c8) bg_popup_trans_pane_g

0xe084,	// (0x00059dfa) cell_image3_tool_bar_pane_ParamLimits

0xe084,	// (0x00059dfa) cell_image3_tool_bar_pane

0x462c,	// (0x000503a2) cell_image3_tool_bar_pane_g1

0x0450,	// (0x0004c1c6) bg_popup_trans_pane_cp1

0xe098,	// (0x00059e0e) popup_image3_note_pane_t1

0xe0a6,	// (0x00059e1c) popup_image3_note_pane_t2

0xe0b4,	// (0x00059e2a) popup_image3_note_pane_t3

0x0002,

0xf965,	// (0x0005b6db) popup_image3_note_pane_t

0xe0c2,	// (0x00059e38) popup_image3_note_pane_t3_copy1

0xb019,	// (0x00056d8f) bg_myfav_hc_instruction_pane_ParamLimits

0xb019,	// (0x00056d8f) bg_myfav_hc_instruction_pane

0xb031,	// (0x00056da7) cell_myfav_contact_pane_ParamLimits

0xb031,	// (0x00056da7) cell_myfav_contact_pane

0xb04b,	// (0x00056dc1) cell_myfav_contact_pane_cp1_ParamLimits

0xb04b,	// (0x00056dc1) cell_myfav_contact_pane_cp1

0xb063,	// (0x00056dd9) cell_myfav_contact_pane_cp2_ParamLimits

0xb063,	// (0x00056dd9) cell_myfav_contact_pane_cp2

0xb07b,	// (0x00056df1) cell_myfav_contact_pane_cp3_ParamLimits

0xb07b,	// (0x00056df1) cell_myfav_contact_pane_cp3

0xb092,	// (0x00056e08) cell_myfav_contact_pane_cp4_ParamLimits

0xb092,	// (0x00056e08) cell_myfav_contact_pane_cp4

0xb0a8,	// (0x00056e1e) cell_myfav_contact_pane_cp5_ParamLimits

0xb0a8,	// (0x00056e1e) cell_myfav_contact_pane_cp5

0xb0bc,	// (0x00056e32) cell_myfav_contact_pane_cp6_ParamLimits

0xb0bc,	// (0x00056e32) cell_myfav_contact_pane_cp6

0xb0d0,	// (0x00056e46) cell_myfav_contact_pane_cp7_ParamLimits

0xb0d0,	// (0x00056e46) cell_myfav_contact_pane_cp7

0xe0d0,	// (0x00059e46) listscroll_gen_pane_cp05

0xb0e8,	// (0x00056e5e) main_myfav_hc_pane_g1_ParamLimits

0xb0e8,	// (0x00056e5e) main_myfav_hc_pane_g1

0xb100,	// (0x00056e76) main_myfav_hc_pane_g2_ParamLimits

0xb100,	// (0x00056e76) main_myfav_hc_pane_g2

0x0002,

0xf96c,	// (0x0005b6e2) main_myfav_hc_pane_g_ParamLimits

0xf96c,	// (0x0005b6e2) main_myfav_hc_pane_g

0xb130,	// (0x00056ea6) main_myfav_hc_pane_t1_ParamLimits

0xb130,	// (0x00056ea6) main_myfav_hc_pane_t1

0xe0d9,	// (0x00059e4f) main_myfav_hc_pane_t2_ParamLimits

0xe0d9,	// (0x00059e4f) main_myfav_hc_pane_t2

0xe0eb,	// (0x00059e61) main_myfav_hc_pane_t3_ParamLimits

0xe0eb,	// (0x00059e61) main_myfav_hc_pane_t3

0xb147,	// (0x00056ebd) main_myfav_hc_pane_t4_ParamLimits

0xb147,	// (0x00056ebd) main_myfav_hc_pane_t4

0x0004,

0xf973,	// (0x0005b6e9) main_myfav_hc_pane_t_ParamLimits

0xf973,	// (0x0005b6e9) main_myfav_hc_pane_t

0x462c,	// (0x000503a2) bg_myfav_hc_instruction_pane_g1

0xe0fd,	// (0x00059e73) cell_myfav_contact_pane_g1_ParamLimits

0xe0fd,	// (0x00059e73) cell_myfav_contact_pane_g1

0xe0fd,	// (0x00059e73) cell_myfav_contact_pane_g2_ParamLimits

0xe0fd,	// (0x00059e73) cell_myfav_contact_pane_g2

0xe109,	// (0x00059e7f) cell_myfav_contact_pane_g3_ParamLimits

0xe109,	// (0x00059e7f) cell_myfav_contact_pane_g3

0x48f8,	// (0x0005066e) cell_myfav_contact_pane_g4_ParamLimits

0x48f8,	// (0x0005066e) cell_myfav_contact_pane_g4

0xe116,	// (0x00059e8c) cell_myfav_contact_pane_g5_ParamLimits

0xe116,	// (0x00059e8c) cell_myfav_contact_pane_g5

0x0004,

0xf97e,	// (0x0005b6f4) cell_myfav_contact_pane_g_ParamLimits

0xf97e,	// (0x0005b6f4) cell_myfav_contact_pane_g

0xb118,	// (0x00056e8e) main_myfav_hc_pane_g3_ParamLimits

0xb118,	// (0x00056e8e) main_myfav_hc_pane_g3

0x5cc7,	// (0x00051a3d) popup_adpt_find_window

0xb171,	// (0x00056ee7) afind_page_pane_ParamLimits

0xb171,	// (0x00056ee7) afind_page_pane

0xb17e,	// (0x00056ef4) aid_size_cell_afind_ParamLimits

0xb17e,	// (0x00056ef4) aid_size_cell_afind

0xb198,	// (0x00056f0e) bg_popup_sub_pane_cp09_ParamLimits

0xb198,	// (0x00056f0e) bg_popup_sub_pane_cp09

0xb1a5,	// (0x00056f1b) find_pane_cp01_ParamLimits

0xb1a5,	// (0x00056f1b) find_pane_cp01

0xe122,	// (0x00059e98) grid_afind_control_pane_ParamLimits

0xe122,	// (0x00059e98) grid_afind_control_pane

0xb1b2,	// (0x00056f28) grid_afind_pane_ParamLimits

0xb1b2,	// (0x00056f28) grid_afind_pane

0xb1ce,	// (0x00056f44) cell_afind_pane_ParamLimits

0xb1ce,	// (0x00056f44) cell_afind_pane

0x462c,	// (0x000503a2) afind_page_pane_g1

0xb216,	// (0x00056f8c) afind_page_pane_g2

0xb21f,	// (0x00056f95) afind_page_pane_g3

0x0002,

0xf989,	// (0x0005b6ff) afind_page_pane_g

0xb228,	// (0x00056f9e) afind_page_pane_t1

0xe136,	// (0x00059eac) cell_afind_grid_control_pane_ParamLimits

0xe136,	// (0x00059eac) cell_afind_grid_control_pane

0xdf0e,	// (0x00059c84) bg_button_pane_cp69_ParamLimits

0xdf0e,	// (0x00059c84) bg_button_pane_cp69

0xb23f,	// (0x00056fb5) cell_afind_pane_g1_ParamLimits

0xb23f,	// (0x00056fb5) cell_afind_pane_g1

0xb24c,	// (0x00056fc2) cell_afind_pane_t1_ParamLimits

0xb24c,	// (0x00056fc2) cell_afind_pane_t1

0x2511,	// (0x0004e287) bg_button_pane_cp72

0xe145,	// (0x00059ebb) cell_afind_grid_control_pane_g1

0x8892,	// (0x00054608) aid_image_placing_area_ParamLimits

0x8892,	// (0x00054608) aid_image_placing_area

0x4be0,	// (0x00050956) field_vitu_entry_pane_g1_ParamLimits

0x4be0,	// (0x00050956) field_vitu_entry_pane_g1

0x4bec,	// (0x00050962) field_vitu_entry_pane_g2_ParamLimits

0x4bec,	// (0x00050962) field_vitu_entry_pane_g2

0x0001,

0xf83a,	// (0x0005b5b0) field_vitu_entry_pane_g_ParamLimits

0xf83a,	// (0x0005b5b0) field_vitu_entry_pane_g

0xa3ab,	// (0x00056121) cell_vitu_itu_pane_g1_ParamLimits

0xa3ed,	// (0x00056163) cell_vitu_itu_pane_t3_ParamLimits

0xa3ed,	// (0x00056163) cell_vitu_itu_pane_t3

0xdea6,	// (0x00059c1c) mp4_progress_pane_t1_ParamLimits

0xdebf,	// (0x00059c35) mp4_progress_pane_t2_ParamLimits

0xf8cf,	// (0x0005b645) mp4_progress_pane_t_ParamLimits

0xded8,	// (0x00059c4e) mup_progress_pane_cp04_ParamLimits

0xb15b,	// (0x00056ed1) main_myfav_hc_pane_t5_ParamLimits

0xb15b,	// (0x00056ed1) main_myfav_hc_pane_t5

0x0476,	// (0x0004c1ec) aid_zoom_text_primary

0x5cc7,	// (0x00051a3d) popup_adpt_find_window_ParamLimits

0x3675,	// (0x0004f3eb) main_cam_set_pane

0xabd5,	// (0x0005694b) cam4_zoom_pane_ParamLimits

0xabd5,	// (0x0005694b) cam4_zoom_pane

0xb25e,	// (0x00056fd4) main_cam_set_pane_g1_ParamLimits

0xb25e,	// (0x00056fd4) main_cam_set_pane_g1

0xb26c,	// (0x00056fe2) main_cam_set_pane_g2_ParamLimits

0xb26c,	// (0x00056fe2) main_cam_set_pane_g2

0x0001,

0xf990,	// (0x0005b706) main_cam_set_pane_g_ParamLimits

0xf990,	// (0x0005b706) main_cam_set_pane_g

0xb278,	// (0x00056fee) main_cam_set_pane_t1_ParamLimits

0xb278,	// (0x00056fee) main_cam_set_pane_t1

0xb294,	// (0x0005700a) main_cset_listscroll_pane_ParamLimits

0xb294,	// (0x0005700a) main_cset_listscroll_pane

0xb2bf,	// (0x00057035) main_cset_slider_pane_ParamLimits

0xb2bf,	// (0x00057035) main_cset_slider_pane

0xe156,	// (0x00059ecc) main_cset_list_pane_ParamLimits

0xe156,	// (0x00059ecc) main_cset_list_pane

0xe166,	// (0x00059edc) scroll_pane_cp028

0xb2de,	// (0x00057054) aid_area_touch_slider

0xb2fa,	// (0x00057070) cset_slider_pane

0xb324,	// (0x0005709a) main_cset_slider_pane_g1

0xb339,	// (0x000570af) main_cset_slider_pane_g2

0x0011,

0xf995,	// (0x0005b70b) main_cset_slider_pane_g

0xe19f,	// (0x00059f15) main_cset_slider_pane_t1

0xb401,	// (0x00057177) main_cset_slider_pane_t2

0xb41b,	// (0x00057191) main_cset_slider_pane_t3

0xb435,	// (0x000571ab) main_cset_slider_pane_t4

0xb453,	// (0x000571c9) main_cset_slider_pane_t5

0xb475,	// (0x000571eb) main_cset_slider_pane_t6

0xb48c,	// (0x00057202) main_cset_slider_pane_t7

0x000e,

0xf9ba,	// (0x0005b730) main_cset_slider_pane_t

0xb59a,	// (0x00057310) cset_list_set_pane_ParamLimits

0xb59a,	// (0x00057310) cset_list_set_pane

0xb5b7,	// (0x0005732d) aid_position_infowindow_above

0xb5bf,	// (0x00057335) aid_position_infowindow_below

0xb5c7,	// (0x0005733d) cset_list_set_pane_g1_ParamLimits

0xb5c7,	// (0x0005733d) cset_list_set_pane_g1

0x0e51,	// (0x0004cbc7) cset_list_set_pane_g3_ParamLimits

0x0e51,	// (0x0004cbc7) cset_list_set_pane_g3

0x0001,

0xf9d9,	// (0x0005b74f) cset_list_set_pane_g_ParamLimits

0xf9d9,	// (0x0005b74f) cset_list_set_pane_g

0xb5d3,	// (0x00057349) cset_list_set_pane_t1_ParamLimits

0xb5d3,	// (0x00057349) cset_list_set_pane_t1

0x3675,	// (0x0004f3eb) list_highlight_pane_cp021_ParamLimits

0x3675,	// (0x0004f3eb) list_highlight_pane_cp021

0x2ec4,	// (0x0004ec3a) cset_slider_pane_g1

0x2ed6,	// (0x0004ec4c) cset_slider_pane_g2

0x2ecd,	// (0x0004ec43) cset_slider_pane_g3

0x0002,

0xf9de,	// (0x0005b754) cset_slider_pane_g

0xb5e8,	// (0x0005735e) aid_area_touch_cam4_zoom

0xb5f0,	// (0x00057366) cam4_zoom_cont_pane

0xb5f8,	// (0x0005736e) cam4_zoom_pane_g1

0xb600,	// (0x00057376) cam4_zoom_pane_g2

0xb608,	// (0x0005737e) cam4_zoom_pane_g3

0x0002,

0xf9e5,	// (0x0005b75b) cam4_zoom_pane_g

0xb610,	// (0x00057386) cam4_zoom_cont_pane_g1

0xb619,	// (0x0005738f) cam4_zoom_cont_pane_g2

0xb622,	// (0x00057398) cam4_zoom_cont_pane_g3

0x0002,

0xf9ec,	// (0x0005b762) cam4_zoom_cont_pane_g

0xaac2,	// (0x00056838) call4_image_pane_ParamLimits

0xaac2,	// (0x00056838) call4_image_pane

0xdf1a,	// (0x00059c90) call4_windows_conf_pane_ParamLimits

0xdf59,	// (0x00059ccf) popup_call4_audio_in_window_ParamLimits

0xdf59,	// (0x00059ccf) popup_call4_audio_in_window

0x0450,	// (0x0004c1c6) bg_popup_call2_act_pane_cp02

0xdfcf,	// (0x00059d45) call4_list_conf_pane

0x462c,	// (0x000503a2) call4_image_pane_g1

0x462c,	// (0x000503a2) call4_image_pane_g2

0x0001,

0xf700,	// (0x0005b476) call4_image_pane_g

0xe23f,	// (0x00059fb5) list_single_graphic_popup_conf4_pane_ParamLimits

0xe23f,	// (0x00059fb5) list_single_graphic_popup_conf4_pane

0x0450,	// (0x0004c1c6) list_highlight_pane_cp022

0xe252,	// (0x00059fc8) list_single_graphic_popup_conf4_pane_g1

0x2bb5,	// (0x0004e92b) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf9f3,	// (0x0005b769) list_single_graphic_popup_conf4_pane_g

0xe25a,	// (0x00059fd0) list_single_graphic_popup_conf4_pane_t1

0x6c1b,	// (0x00052991) popup_vtel_slider_window_ParamLimits

0x6c1b,	// (0x00052991) popup_vtel_slider_window

0xdefc,	// (0x00059c72) dialer2_ne_pane_t2_ParamLimits

0xdefc,	// (0x00059c72) dialer2_ne_pane_t2

0x0001,

0xf8d4,	// (0x0005b64a) dialer2_ne_pane_t_ParamLimits

0xf8d4,	// (0x0005b64a) dialer2_ne_pane_t

0x3675,	// (0x0004f3eb) bg_popup_sub_pane_cp010_ParamLimits

0x3675,	// (0x0004f3eb) bg_popup_sub_pane_cp010

0xb62b,	// (0x000573a1) popup_vtel_slider_window_g1_ParamLimits

0xb62b,	// (0x000573a1) popup_vtel_slider_window_g1

0xb637,	// (0x000573ad) popup_vtel_slider_window_g2_ParamLimits

0xb637,	// (0x000573ad) popup_vtel_slider_window_g2

0x0003,

0xf9f8,	// (0x0005b76e) popup_vtel_slider_window_g_ParamLimits

0xf9f8,	// (0x0005b76e) popup_vtel_slider_window_g

0xb67f,	// (0x000573f5) vtel_slider_pane_ParamLimits

0xb67f,	// (0x000573f5) vtel_slider_pane

0xb68e,	// (0x00057404) vtel_slider_pane_g1_ParamLimits

0xb68e,	// (0x00057404) vtel_slider_pane_g1

0xb69b,	// (0x00057411) vtel_slider_pane_g2_ParamLimits

0xb69b,	// (0x00057411) vtel_slider_pane_g2

0xb6a8,	// (0x0005741e) vtel_slider_pane_g3_ParamLimits

0xb6a8,	// (0x0005741e) vtel_slider_pane_g3

0xb68e,	// (0x00057404) vtel_slider_pane_g4_ParamLimits

0xb68e,	// (0x00057404) vtel_slider_pane_g4

0xb6b5,	// (0x0005742b) vtel_slider_pane_g5_ParamLimits

0xb6b5,	// (0x0005742b) vtel_slider_pane_g5

0x0004,

0xfa01,	// (0x0005b777) vtel_slider_pane_g_ParamLimits

0xfa01,	// (0x0005b777) vtel_slider_pane_g

0x0450,	// (0x0004c1c6) main_gallery2_pane

0xae2b,	// (0x00056ba1) aid_size_row_itut2_dropdow_list_ParamLimits

0xae2b,	// (0x00056ba1) aid_size_row_itut2_dropdow_list

0xae99,	// (0x00056c0f) grid_vitu2_function_top_pane_ParamLimits

0xae99,	// (0x00056c0f) grid_vitu2_function_top_pane

0xaeef,	// (0x00056c65) popup_vitu2_dropdown_list_window_ParamLimits

0xaeef,	// (0x00056c65) popup_vitu2_dropdown_list_window

0xaf0f,	// (0x00056c85) popup_vitu2_match_list_window

0xb6c2,	// (0x00057438) cell_vitu2_function_top_pane_ParamLimits

0xb6c2,	// (0x00057438) cell_vitu2_function_top_pane

0xb6e2,	// (0x00057458) cell_vitu2_function_top_pane_cp01_ParamLimits

0xb6e2,	// (0x00057458) cell_vitu2_function_top_pane_cp01

0xb700,	// (0x00057476) cell_vitu2_function_top_wide_pane_ParamLimits

0xb700,	// (0x00057476) cell_vitu2_function_top_wide_pane

0xad56,	// (0x00056acc) bg_button_pane_cp012

0xb71e,	// (0x00057494) cell_vitu2_function_top_pane_g1

0xb72d,	// (0x000574a3) bg_button_pane_cp013_ParamLimits

0xb72d,	// (0x000574a3) bg_button_pane_cp013

0xb749,	// (0x000574bf) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0xb749,	// (0x000574bf) cell_vitu2_function_top_wide_pane_g1

0xb761,	// (0x000574d7) bg_popup_sub_pane_cp20

0xb76f,	// (0x000574e5) list_vitu2_match_list_pane

0xe04c,	// (0x00059dc2) bg_popup_sub_pane_cp20_g1

0xe054,	// (0x00059dca) bg_popup_sub_pane_cp20_g2

0x2716,	// (0x0004e48c) bg_popup_sub_pane_cp20_g3

0xe05c,	// (0x00059dd2) bg_popup_sub_pane_cp20_g4

0x26f6,	// (0x0004e46c) bg_popup_sub_pane_cp20_g5

0xe270,	// (0x00059fe6) bg_popup_sub_pane_cp20_g6

0xe06c,	// (0x00059de2) bg_popup_sub_pane_cp20_g7

0xe074,	// (0x00059dea) bg_popup_sub_pane_cp20_g8

0xe07c,	// (0x00059df2) bg_popup_sub_pane_cp20_g9

0x0008,

0xfa0c,	// (0x0005b782) bg_popup_sub_pane_cp20_g

0xb787,	// (0x000574fd) list_vitu2_match_list_item_pane_ParamLimits

0xb787,	// (0x000574fd) list_vitu2_match_list_item_pane

0xb799,	// (0x0005750f) list_vitu2_match_list_item_pane_t1

0x60df,	// (0x00051e55) bg_popup_sub_pane_cp21

0xb7d6,	// (0x0005754c) grid_vitu2_dropdown_list_pane

0xb7de,	// (0x00057554) cell_vitu2_dropdown_list_char_pane_ParamLimits

0xb7de,	// (0x00057554) cell_vitu2_dropdown_list_char_pane

0xb7ff,	// (0x00057575) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0xb7ff,	// (0x00057575) cell_vitu2_dropdown_list_ctrl_pane

0xe278,	// (0x00059fee) cell_vitu2_dropdown_list_char_pane_g1

0xe281,	// (0x00059ff7) cell_vitu2_dropdown_list_char_pane_g2

0xe28a,	// (0x0005a000) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xfa29,	// (0x0005b79f) cell_vitu2_dropdown_list_char_pane_g

0xb82b,	// (0x000575a1) cell_vitu2_dropdown_list_char_pane_t1

0xb839,	// (0x000575af) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0xb839,	// (0x000575af) cell_vitu2_dropdown_list_ctrl_pane_g1

0xb849,	// (0x000575bf) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0xb849,	// (0x000575bf) cell_vitu2_dropdown_list_ctrl_pane_g2

0xb85a,	// (0x000575d0) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0xb85a,	// (0x000575d0) cell_vitu2_dropdown_list_ctrl_pane_g3

0xb86a,	// (0x000575e0) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0xb86a,	// (0x000575e0) cell_vitu2_dropdown_list_ctrl_pane_g4

0xac69,	// (0x000569df) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0xac69,	// (0x000569df) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa30,	// (0x0005b7a6) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa30,	// (0x0005b7a6) cell_vitu2_dropdown_list_ctrl_pane_g

0xb886,	// (0x000575fc) aid_size_cell_gallery2_ParamLimits

0xb886,	// (0x000575fc) aid_size_cell_gallery2

0xb894,	// (0x0005760a) grid_gallery2_pane_ParamLimits

0xb894,	// (0x0005760a) grid_gallery2_pane

0xb8a3,	// (0x00057619) scroll_pane_cp029_ParamLimits

0xb8a3,	// (0x00057619) scroll_pane_cp029

0xb8af,	// (0x00057625) cell_gallery2_pane_ParamLimits

0xb8af,	// (0x00057625) cell_gallery2_pane

0xe293,	// (0x0005a009) cell_gallery2_pane_g2

0xb8e0,	// (0x00057656) cell_gallery2_pane_g3

0xe29d,	// (0x0005a013) cell_gallery2_pane_g4

0xe2a5,	// (0x0005a01b) cell_gallery2_pane_g5

0x2d8e,	// (0x0004eb04) grid_highlight_pane_cp10

0xaf0f,	// (0x00056c85) popup_vitu2_match_list_window_ParamLimits

0xaf21,	// (0x00056c97) popup_vitu2_query_window_ParamLimits

0xaf21,	// (0x00056c97) popup_vitu2_query_window

0x60df,	// (0x00051e55) bg_vitu2_candi_button_pane

0xe278,	// (0x00059fee) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xe281,	// (0x00059ff7) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xe28a,	// (0x0005a000) cell_vitu2_dropdown_list_char_pane_g2_copy2

0xb8e8,	// (0x0005765e) bg_button_pane_cp015

0xb8fa,	// (0x00057670) bg_button_pane_cp016

0xb90d,	// (0x00057683) bg_button_pane_cp017

0x41db,	// (0x0004ff51) bg_popup_sub_pane_cp22

0xe2ad,	// (0x0005a023) popup_vitu2_query_window_g1

0xb952,	// (0x000576c8) popup_vitu2_query_window_g2

0x0002,

0xfa3b,	// (0x0005b7b1) popup_vitu2_query_window_g

0xb96f,	// (0x000576e5) popup_vitu2_query_window_t1_ParamLimits

0xb96f,	// (0x000576e5) popup_vitu2_query_window_t1

0xb9a2,	// (0x00057718) popup_vitu2_query_window_t2_ParamLimits

0xb9a2,	// (0x00057718) popup_vitu2_query_window_t2

0xb9b4,	// (0x0005772a) popup_vitu2_query_window_t3_ParamLimits

0xb9b4,	// (0x0005772a) popup_vitu2_query_window_t3

0xb9dc,	// (0x00057752) popup_vitu2_query_window_t4_ParamLimits

0xb9dc,	// (0x00057752) popup_vitu2_query_window_t4

0xb9fd,	// (0x00057773) popup_vitu2_query_window_t5_ParamLimits

0xb9fd,	// (0x00057773) popup_vitu2_query_window_t5

0x0006,

0xfa42,	// (0x0005b7b8) popup_vitu2_query_window_t_ParamLimits

0xfa42,	// (0x0005b7b8) popup_vitu2_query_window_t

0xe14e,	// (0x00059ec4) main_cset_text_pane

0xb2de,	// (0x00057054) aid_area_touch_slider_ParamLimits

0xb2fa,	// (0x00057070) cset_slider_pane_ParamLimits

0xb324,	// (0x0005709a) main_cset_slider_pane_g1_ParamLimits

0xb339,	// (0x000570af) main_cset_slider_pane_g2_ParamLimits

0xe16f,	// (0x00059ee5) main_cset_slider_pane_g3_ParamLimits

0xe16f,	// (0x00059ee5) main_cset_slider_pane_g3

0xb34e,	// (0x000570c4) main_cset_slider_pane_g4_ParamLimits

0xb34e,	// (0x000570c4) main_cset_slider_pane_g4

0xb35d,	// (0x000570d3) main_cset_slider_pane_g5_ParamLimits

0xb35d,	// (0x000570d3) main_cset_slider_pane_g5

0xb36b,	// (0x000570e1) main_cset_slider_pane_g6_ParamLimits

0xb36b,	// (0x000570e1) main_cset_slider_pane_g6

0xf995,	// (0x0005b70b) main_cset_slider_pane_g_ParamLimits

0xe19f,	// (0x00059f15) main_cset_slider_pane_t1_ParamLimits

0xb401,	// (0x00057177) main_cset_slider_pane_t2_ParamLimits

0xb41b,	// (0x00057191) main_cset_slider_pane_t3_ParamLimits

0xb435,	// (0x000571ab) main_cset_slider_pane_t4_ParamLimits

0xb453,	// (0x000571c9) main_cset_slider_pane_t5_ParamLimits

0xb475,	// (0x000571eb) main_cset_slider_pane_t6_ParamLimits

0xb48c,	// (0x00057202) main_cset_slider_pane_t7_ParamLimits

0xb4ba,	// (0x00057230) main_cset_slider_pane_t8_ParamLimits

0xb4ba,	// (0x00057230) main_cset_slider_pane_t8

0xb4e2,	// (0x00057258) main_cset_slider_pane_t9_ParamLimits

0xb4e2,	// (0x00057258) main_cset_slider_pane_t9

0xb50a,	// (0x00057280) main_cset_slider_pane_t10_ParamLimits

0xb50a,	// (0x00057280) main_cset_slider_pane_t10

0xb532,	// (0x000572a8) main_cset_slider_pane_t11_ParamLimits

0xb532,	// (0x000572a8) main_cset_slider_pane_t11

0xb55c,	// (0x000572d2) main_cset_slider_pane_t12_ParamLimits

0xb55c,	// (0x000572d2) main_cset_slider_pane_t12

0xb57b,	// (0x000572f1) main_cset_slider_pane_t13_ParamLimits

0xb57b,	// (0x000572f1) main_cset_slider_pane_t13

0xf9ba,	// (0x0005b730) main_cset_slider_pane_t_ParamLimits

0x0450,	// (0x0004c1c6) bg_popup_sub_pane_cp011

0xe2b9,	// (0x0005a02f) main_cset_text_pane_g1

0xe2c1,	// (0x0005a037) main_cset_text_pane_t1

0xe2cf,	// (0x0005a045) main_cset_text_pane_t2

0xe2dd,	// (0x0005a053) main_cset_text_pane_t3

0xe2eb,	// (0x0005a061) main_cset_text_pane_t4

0xe2f9,	// (0x0005a06f) main_cset_text_pane_t5

0xe307,	// (0x0005a07d) main_cset_text_pane_t6

0xe315,	// (0x0005a08b) main_cset_text_pane_t7

0x0006,

0xfa51,	// (0x0005b7c7) main_cset_text_pane_t

0x0450,	// (0x0004c1c6) main_cam4_burst_pane

0x0450,	// (0x0004c1c6) main_cam5_pane

0x280f,	// (0x0004e585) bg_button_pane_cp019

0xb236,	// (0x00056fac) bg_button_pane_cp020

0xe17b,	// (0x00059ef1) main_cset_slider_pane_g7_ParamLimits

0xe17b,	// (0x00059ef1) main_cset_slider_pane_g7

0xe187,	// (0x00059efd) main_cset_slider_pane_g8_ParamLimits

0xe187,	// (0x00059efd) main_cset_slider_pane_g8

0xb381,	// (0x000570f7) main_cset_slider_pane_g9_ParamLimits

0xb381,	// (0x000570f7) main_cset_slider_pane_g9

0xb38d,	// (0x00057103) main_cset_slider_pane_g10_ParamLimits

0xb38d,	// (0x00057103) main_cset_slider_pane_g10

0xb399,	// (0x0005710f) main_cset_slider_pane_g11_ParamLimits

0xb399,	// (0x0005710f) main_cset_slider_pane_g11

0xb3a5,	// (0x0005711b) main_cset_slider_pane_g12_ParamLimits

0xb3a5,	// (0x0005711b) main_cset_slider_pane_g12

0xb3b1,	// (0x00057127) main_cset_slider_pane_g13_ParamLimits

0xb3b1,	// (0x00057127) main_cset_slider_pane_g13

0xb3bf,	// (0x00057135) main_cset_slider_pane_g14_ParamLimits

0xb3bf,	// (0x00057135) main_cset_slider_pane_g14

0xb3cd,	// (0x00057143) main_cset_slider_pane_g15_ParamLimits

0xb3cd,	// (0x00057143) main_cset_slider_pane_g15

0xe1cd,	// (0x00059f43) main_cset_slider_pane_t14_ParamLimits

0xe1cd,	// (0x00059f43) main_cset_slider_pane_t14

0xe206,	// (0x00059f7c) main_cset_slider_pane_t15_ParamLimits

0xe206,	// (0x00059f7c) main_cset_slider_pane_t15

0xba74,	// (0x000577ea) aid_cam4_burst_size_cell_ParamLimits

0xba74,	// (0x000577ea) aid_cam4_burst_size_cell

0xba90,	// (0x00057806) grid_cam4_burst_pane_ParamLimits

0xba90,	// (0x00057806) grid_cam4_burst_pane

0xbac0,	// (0x00057836) linegrid_cam4_burst_pane_ParamLimits

0xbac0,	// (0x00057836) linegrid_cam4_burst_pane

0xbae2,	// (0x00057858) scroll_pane_cp30_ParamLimits

0xbae2,	// (0x00057858) scroll_pane_cp30

0xbaee,	// (0x00057864) cell_cam4_burst_pane_ParamLimits

0xbaee,	// (0x00057864) cell_cam4_burst_pane

0xe323,	// (0x0005a099) linegrid_cam4_burst_pane_g1_ParamLimits

0xe323,	// (0x0005a099) linegrid_cam4_burst_pane_g1

0xbb2a,	// (0x000578a0) linegrid_cam4_burst_pane_g2_ParamLimits

0xbb2a,	// (0x000578a0) linegrid_cam4_burst_pane_g2

0xe330,	// (0x0005a0a6) linegrid_cam4_burst_pane_g3_ParamLimits

0xe330,	// (0x0005a0a6) linegrid_cam4_burst_pane_g3

0x0002,

0xfa60,	// (0x0005b7d6) linegrid_cam4_burst_pane_g_ParamLimits

0xfa60,	// (0x0005b7d6) linegrid_cam4_burst_pane_g

0xbb3b,	// (0x000578b1) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0xbb3b,	// (0x000578b1) linegrid_cam4_burst_pane_g3_copy1

0xe33d,	// (0x0005a0b3) linegrid_cam4_burst_pane_g4_ParamLimits

0xe33d,	// (0x0005a0b3) linegrid_cam4_burst_pane_g4

0xbb55,	// (0x000578cb) linegrid_cam4_burst_pane_g5_ParamLimits

0xbb55,	// (0x000578cb) linegrid_cam4_burst_pane_g5

0xbb66,	// (0x000578dc) linegrid_cam4_burst_pane_g6_ParamLimits

0xbb66,	// (0x000578dc) linegrid_cam4_burst_pane_g6

0xe34a,	// (0x0005a0c0) linegrid_cam4_burst_pane_g7_ParamLimits

0xe34a,	// (0x0005a0c0) linegrid_cam4_burst_pane_g7

0xbb77,	// (0x000578ed) cell_cam4_burst_pane_g1

0xe363,	// (0x0005a0d9) main_cam5_pane_t1_ParamLimits

0xe363,	// (0x0005a0d9) main_cam5_pane_t1

0xe375,	// (0x0005a0eb) main_cam5_pane_t2_ParamLimits

0xe375,	// (0x0005a0eb) main_cam5_pane_t2

0xe387,	// (0x0005a0fd) main_cam5_pane_t3_ParamLimits

0xe387,	// (0x0005a0fd) main_cam5_pane_t3

0xe399,	// (0x0005a10f) main_cam5_pane_t4_ParamLimits

0xe399,	// (0x0005a10f) main_cam5_pane_t4

0xe3af,	// (0x0005a125) main_cam5_pane_t5_ParamLimits

0xe3af,	// (0x0005a125) main_cam5_pane_t5

0xe3c1,	// (0x0005a137) main_cam5_pane_t6_ParamLimits

0xe3c1,	// (0x0005a137) main_cam5_pane_t6

0xe3d5,	// (0x0005a14b) main_cam5_pane_t7_ParamLimits

0xe3d5,	// (0x0005a14b) main_cam5_pane_t7

0xe3e7,	// (0x0005a15d) main_cam5_pane_t8_ParamLimits

0xe3e7,	// (0x0005a15d) main_cam5_pane_t8

0xe403,	// (0x0005a179) main_cam5_pane_t9_ParamLimits

0xe403,	// (0x0005a179) main_cam5_pane_t9

0xe415,	// (0x0005a18b) main_cam5_pane_t10_ParamLimits

0xe415,	// (0x0005a18b) main_cam5_pane_t10

0xe427,	// (0x0005a19d) main_cam5_pane_t11_ParamLimits

0xe427,	// (0x0005a19d) main_cam5_pane_t11

0xe439,	// (0x0005a1af) main_cam5_pane_t12_ParamLimits

0xe439,	// (0x0005a1af) main_cam5_pane_t12

0xe44e,	// (0x0005a1c4) main_cam5_pane_t13_ParamLimits

0xe44e,	// (0x0005a1c4) main_cam5_pane_t13

0x000c,

0xfa6c,	// (0x0005b7e2) main_cam5_pane_t_ParamLimits

0xfa6c,	// (0x0005b7e2) main_cam5_pane_t

0x5d73,	// (0x00051ae9) popup_scut_keymap_window_ParamLimits

0x5d73,	// (0x00051ae9) popup_scut_keymap_window

0xbb8a,	// (0x00057900) aid_size_cell_brow_shortcut

0x2d8e,	// (0x0004eb04) bg_popup_window_pane_cp010

0xbb96,	// (0x0005790c) grid_scut_pane

0xbba2,	// (0x00057918) cell_scut_pane_ParamLimits

0xbba2,	// (0x00057918) cell_scut_pane

0xbbb9,	// (0x0005792f) cell_scut_pane_g1

0xe46b,	// (0x0005a1e1) cell_scut_pane_t1

0xe47a,	// (0x0005a1f0) cell_scut_pane_t2

0xbbc2,	// (0x00057938) cell_scut_pane_t3

0x0002,

0xfa87,	// (0x0005b7fd) cell_scut_pane_t

0x9a2c,	// (0x000557a2) main_mup3_pane_g8_ParamLimits

0x9a2c,	// (0x000557a2) main_mup3_pane_g8

0xae39,	// (0x00056baf) area_vitu2_query_pane_ParamLimits

0xae39,	// (0x00056baf) area_vitu2_query_pane

0xb920,	// (0x00057696) input_focus_pane_cp08

0xe489,	// (0x0005a1ff) area_vitu2_query_pane_g1

0xbbd0,	// (0x00057946) area_vitu2_query_pane_g2

0x0001,

0xfa8e,	// (0x0005b804) area_vitu2_query_pane_g

0xbbe1,	// (0x00057957) area_vitu2_query_pane_t1_ParamLimits

0xbbe1,	// (0x00057957) area_vitu2_query_pane_t1

0xbbf5,	// (0x0005796b) area_vitu2_query_pane_t2_ParamLimits

0xbbf5,	// (0x0005796b) area_vitu2_query_pane_t2

0xbc09,	// (0x0005797f) area_vitu2_query_pane_t3_ParamLimits

0xbc09,	// (0x0005797f) area_vitu2_query_pane_t3

0x0cd2,	// (0x0004ca48) area_vitu2_query_pane_t4_ParamLimits

0x0cd2,	// (0x0004ca48) area_vitu2_query_pane_t4

0x0cfa,	// (0x0004ca70) area_vitu2_query_pane_t5_ParamLimits

0x0cfa,	// (0x0004ca70) area_vitu2_query_pane_t5

0x0d22,	// (0x0004ca98) area_vitu2_query_pane_t6_ParamLimits

0x0d22,	// (0x0004ca98) area_vitu2_query_pane_t6

0x0006,

0xfa93,	// (0x0005b809) area_vitu2_query_pane_t_ParamLimits

0xfa93,	// (0x0005b809) area_vitu2_query_pane_t

0xbc31,	// (0x000579a7) bg_button_pane_cp018

0xbc3f,	// (0x000579b5) bg_button_pane_cp021

0xbc4b,	// (0x000579c1) bg_button_pane_cp022

0xbc5c,	// (0x000579d2) input_focus_pane_cp09

0x7e97,	// (0x00053c0d) aid_size_touch_mv_arrow_left

0x7ec2,	// (0x00053c38) aid_size_touch_mv_arrow_right

0xb3e5,	// (0x0005715b) main_cset_slider_pane_g16_ParamLimits

0xb3e5,	// (0x0005715b) main_cset_slider_pane_g16

0xb3f3,	// (0x00057169) main_cset_slider_pane_g17_ParamLimits

0xb3f3,	// (0x00057169) main_cset_slider_pane_g17

0xbb77,	// (0x000578ed) cell_cam4_burst_pane_g1_ParamLimits

0x0450,	// (0x0004c1c6) compa_mode_pane

0xb643,	// (0x000573b9) popup_vtel_slider_window_g3_ParamLimits

0xb643,	// (0x000573b9) popup_vtel_slider_window_g3

0xb657,	// (0x000573cd) popup_vtel_slider_window_g4_ParamLimits

0xb657,	// (0x000573cd) popup_vtel_slider_window_g4

0xb66b,	// (0x000573e1) popup_vtel_slider_window_t1_ParamLimits

0xb66b,	// (0x000573e1) popup_vtel_slider_window_t1

0x0450,	// (0x0004c1c6) main_cl_pane

0x4203,	// (0x0004ff79) popup_imed_adjust2_window_ParamLimits

0x41db,	// (0x0004ff51) bg_tb_trans_pane_cp05_ParamLimits

0x4b15,	// (0x0005088b) popup_imed_adjust2_window_g1_ParamLimits

0x4b24,	// (0x0005089a) popup_imed_adjust2_window_g2_ParamLimits

0x4b24,	// (0x0005089a) popup_imed_adjust2_window_g2

0x4b30,	// (0x000508a6) popup_imed_adjust2_window_g3_ParamLimits

0x4b30,	// (0x000508a6) popup_imed_adjust2_window_g3

0x0002,

0xf7fe,	// (0x0005b574) popup_imed_adjust2_window_g_ParamLimits

0xf7fe,	// (0x0005b574) popup_imed_adjust2_window_g

0x4b3c,	// (0x000508b2) popup_imed_adjust2_window_t1_ParamLimits

0x4b54,	// (0x000508ca) slider_imed_adjust_pane_ParamLimits

0x4b68,	// (0x000508de) slider_imed_adjust_pane_g1_ParamLimits

0x4b78,	// (0x000508ee) slider_imed_adjust_pane_g2_ParamLimits

0x4b88,	// (0x000508fe) slider_imed_adjust_pane_g3_ParamLimits

0x4b99,	// (0x0005090f) slider_imed_adjust_pane_g4_ParamLimits

0xf805,	// (0x0005b57b) slider_imed_adjust_pane_g_ParamLimits

0xab7e,	// (0x000568f4) aid_touch_area_cam4_ParamLimits

0xab7e,	// (0x000568f4) aid_touch_area_cam4

0xab8e,	// (0x00056904) battery_pane_cp01

0xac15,	// (0x0005698b) main_camera4_pane_g6_ParamLimits

0xac15,	// (0x0005698b) main_camera4_pane_g6

0xac33,	// (0x000569a9) main_camera4_pane_t2_ParamLimits

0xac33,	// (0x000569a9) main_camera4_pane_t2

0x0001,

0xf908,	// (0x0005b67e) main_camera4_pane_t_ParamLimits

0xf908,	// (0x0005b67e) main_camera4_pane_t

0xacc8,	// (0x00056a3e) aid_touch_area_vid4_ParamLimits

0xacc8,	// (0x00056a3e) aid_touch_area_vid4

0xad08,	// (0x00056a7e) main_video4_pane_g5_ParamLimits

0xad08,	// (0x00056a7e) main_video4_pane_g5

0xad2a,	// (0x00056aa0) vid4_progress_pane_ParamLimits

0xad2a,	// (0x00056aa0) vid4_progress_pane

0xe193,	// (0x00059f09) main_cset_slider_pane_g18_ParamLimits

0xe193,	// (0x00059f09) main_cset_slider_pane_g18

0xe357,	// (0x0005a0cd) cell_cam4_burst_pane_g2_ParamLimits

0xe357,	// (0x0005a0cd) cell_cam4_burst_pane_g2

0x0001,

0xfa67,	// (0x0005b7dd) cell_cam4_burst_pane_g_ParamLimits

0xfa67,	// (0x0005b7dd) cell_cam4_burst_pane_g

0xbc6d,	// (0x000579e3) bg_cl_pane_ParamLimits

0xbc6d,	// (0x000579e3) bg_cl_pane

0xbc79,	// (0x000579ef) cl_header_pane_ParamLimits

0xbc79,	// (0x000579ef) cl_header_pane

0xbc85,	// (0x000579fb) cl_listscroll_pane_ParamLimits

0xbc85,	// (0x000579fb) cl_listscroll_pane

0xe495,	// (0x0005a20b) bg_cl_pane_g1

0xe49d,	// (0x0005a213) bg_cl_pane_g2

0xe4a5,	// (0x0005a21b) bg_cl_pane_g3

0xe4ad,	// (0x0005a223) bg_cl_pane_g4

0xe4b5,	// (0x0005a22b) bg_cl_pane_g5

0xe4bd,	// (0x0005a233) bg_cl_pane_g6

0xe4c5,	// (0x0005a23b) bg_cl_pane_g7

0xe4cd,	// (0x0005a243) bg_cl_pane_g8

0xe4d5,	// (0x0005a24b) bg_cl_pane_g9

0x0008,

0xfaa2,	// (0x0005b818) bg_cl_pane_g

0xbc91,	// (0x00057a07) aid_height_cl_leading_ParamLimits

0xbc91,	// (0x00057a07) aid_height_cl_leading

0xbc9d,	// (0x00057a13) aid_height_cl_text_ParamLimits

0xbc9d,	// (0x00057a13) aid_height_cl_text

0x0beb,	// (0x0004c961) bg_cl_header_pane_ParamLimits

0x0beb,	// (0x0004c961) bg_cl_header_pane

0xbcb5,	// (0x00057a2b) cl_header_pane_g1_ParamLimits

0xbcb5,	// (0x00057a2b) cl_header_pane_g1

0xbcc2,	// (0x00057a38) cl_header_pane_t1_ParamLimits

0xbcc2,	// (0x00057a38) cl_header_pane_t1

0xe4dd,	// (0x0005a253) cl_list_pane

0xe166,	// (0x00059edc) hc_scroll_pane_cp01

0x26f6,	// (0x0004e46c) bg_cl_header_pane_g1

0xe04c,	// (0x00059dc2) bg_cl_header_pane_g2

0x2716,	// (0x0004e48c) bg_cl_header_pane_g3

0xe05c,	// (0x00059dd2) bg_cl_header_pane_g4

0xe054,	// (0x00059dca) bg_cl_header_pane_g5

0xe270,	// (0x00059fe6) bg_cl_header_pane_g6

0xe074,	// (0x00059dea) bg_cl_header_pane_g7

0xe07c,	// (0x00059df2) bg_cl_header_pane_g8

0xe06c,	// (0x00059de2) bg_cl_header_pane_g9

0x0008,

0xfab5,	// (0x0005b82b) bg_cl_header_pane_g

0xbcd4,	// (0x00057a4a) hc_cl_list_double_graphic_heading_pane_ParamLimits

0xbcd4,	// (0x00057a4a) hc_cl_list_double_graphic_heading_pane

0xbceb,	// (0x00057a61) hc_cl_list_single_graphic_pane_ParamLimits

0xbceb,	// (0x00057a61) hc_cl_list_single_graphic_pane

0xbd0b,	// (0x00057a81) hc_cl_list_single_graphic_pane_g1_ParamLimits

0xbd0b,	// (0x00057a81) hc_cl_list_single_graphic_pane_g1

0xbd17,	// (0x00057a8d) hc_cl_list_single_graphic_pane_g2_ParamLimits

0xbd17,	// (0x00057a8d) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfac8,	// (0x0005b83e) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfac8,	// (0x0005b83e) hc_cl_list_single_graphic_pane_g

0xbd2b,	// (0x00057aa1) hc_cl_list_single_graphic_pane_t1_ParamLimits

0xbd2b,	// (0x00057aa1) hc_cl_list_single_graphic_pane_t1

0xbd0b,	// (0x00057a81) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0xbd0b,	// (0x00057a81) hc_cl_list_double_graphic_heading_pane_g1

0xbd40,	// (0x00057ab6) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0xbd40,	// (0x00057ab6) hc_cl_list_double_graphic_heading_pane_g2

0xbd54,	// (0x00057aca) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0xbd54,	// (0x00057aca) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfacd,	// (0x0005b843) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfacd,	// (0x0005b843) hc_cl_list_double_graphic_heading_pane_g

0xbd68,	// (0x00057ade) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0xbd68,	// (0x00057ade) hc_cl_list_double_graphic_heading_pane_t1

0xbd7d,	// (0x00057af3) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0xbd7d,	// (0x00057af3) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfad4,	// (0x0005b84a) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfad4,	// (0x0005b84a) hc_cl_list_double_graphic_heading_pane_t

0xbd9a,	// (0x00057b10) vid4_progress_pane_g1

0xbdaa,	// (0x00057b20) vid4_progress_pane_g2

0x2937,	// (0x0004e6ad) vid4_progress_pane_g3

0xac90,	// (0x00056a06) vid4_progress_pane_g4

0x0004,

0xfad9,	// (0x0005b84f) vid4_progress_pane_g

0xbdba,	// (0x00057b30) vid4_progress_pane_t1

0xbdcf,	// (0x00057b45) vid4_progress_pane_t2

0x0002,

0xfae4,	// (0x0005b85a) vid4_progress_pane_t

0xbdfa,	// (0x00057b70) wait_bar_pane_cp07

0x4415,	// (0x0005018b) blid_firmament_pane_ParamLimits

0x4458,	// (0x000501ce) popup_blid_sat_info2_window_g1

0x447c,	// (0x000501f2) popup_blid_sat_info2_window_t3

0x448a,	// (0x00050200) popup_blid_sat_info2_window_t4

0x44a0,	// (0x00050216) popup_blid_sat_info2_window_t5

0x44ae,	// (0x00050224) popup_blid_sat_info2_window_t6

0x44be,	// (0x00050234) popup_blid_sat_info2_window_t7

0x44cc,	// (0x00050242) popup_blid_sat_info2_window_t8

0x44da,	// (0x00050250) popup_blid_sat_info2_window_t9

0x44e8,	// (0x0005025e) popup_blid_sat_info2_window_t10

0x45ac,	// (0x00050322) aid_firma_cardinal_ParamLimits

0x45c0,	// (0x00050336) blid_firmament_pane_t1_ParamLimits

0x45d7,	// (0x0005034d) blid_firmament_pane_t2_ParamLimits

0x45ee,	// (0x00050364) blid_firmament_pane_t3_ParamLimits

0x4605,	// (0x0005037b) blid_firmament_pane_t4_ParamLimits

0xf6f7,	// (0x0005b46d) blid_firmament_pane_t_ParamLimits

0x461c,	// (0x00050392) blid_sat_info_pane_ParamLimits

0x3675,	// (0x0004f3eb) main_cam_set_pane_ParamLimits

0xa1c5,	// (0x00055f3b) aid_size_cell_colour_35_ParamLimits

0xa1df,	// (0x00055f55) aid_size_cell_colour_112_ParamLimits

0xa1f6,	// (0x00055f6c) aid_size_cell_effect_ParamLimits

0x3675,	// (0x0004f3eb) bg_tb_trans_pane_cp02_ParamLimits

0x369a,	// (0x0004f410) heading_imed_pane_ParamLimits

0xa210,	// (0x00055f86) listscroll_imed_pane_ParamLimits

0x37fc,	// (0x0004f572) popup_call2_audio_first_window_g5_ParamLimits

0x37fc,	// (0x0004f572) popup_call2_audio_first_window_g5

0xa92d,	// (0x000566a3) aid_size_touch_image3_arrow_left_ParamLimits

0xa92d,	// (0x000566a3) aid_size_touch_image3_arrow_left

0xa943,	// (0x000566b9) aid_size_touch_image3_arrow_right_ParamLimits

0xa943,	// (0x000566b9) aid_size_touch_image3_arrow_right

0xbde5,	// (0x00057b5b) vid4_progress_pane_t3

0xa4b6,	// (0x0005622c) main_hwr_training_symbol_option_pane_ParamLimits

0xa4b6,	// (0x0005622c) main_hwr_training_symbol_option_pane

0x4e02,	// (0x00050b78) popup_hwr_training_preview_window_ParamLimits

0x4e02,	// (0x00050b78) popup_hwr_training_preview_window

0xa517,	// (0x0005628d) hwr_training_navi_pane_g5_ParamLimits

0xa517,	// (0x0005628d) hwr_training_navi_pane_g5

0xe03a,	// (0x00059db0) popup_char_count_window

0xb761,	// (0x000574d7) bg_popup_sub_pane_cp20_ParamLimits

0xb76f,	// (0x000574e5) list_vitu2_match_list_pane_ParamLimits

0xb77b,	// (0x000574f1) vitu2_page_scroll_pane_ParamLimits

0xb77b,	// (0x000574f1) vitu2_page_scroll_pane

0xe4e6,	// (0x0005a25c) list_single_hwr_training_symbol_option_pane_ParamLimits

0xe4e6,	// (0x0005a25c) list_single_hwr_training_symbol_option_pane

0xe4f9,	// (0x0005a26f) list_single_hwr_training_symbol_option_pane_g1

0xe501,	// (0x0005a277) list_single_hwr_training_symbol_option_pane_t1

0xe50f,	// (0x0005a285) bg_button_pane_cp023

0xe518,	// (0x0005a28e) bg_button_pane_cp024

0xbe0a,	// (0x00057b80) vitu2_page_scroll_pane_g1

0xbe12,	// (0x00057b88) vitu2_page_scroll_pane_g2

0x0001,

0xfaeb,	// (0x0005b861) vitu2_page_scroll_pane_g

0xbe1a,	// (0x00057b90) vitu2_page_scroll_pane_t1

0x4375,	// (0x000500eb) popup_char_count_window_g1

0xe54b,	// (0x0005a2c1) popup_char_count_window_g2

0xe554,	// (0x0005a2ca) popup_char_count_window_g3

0x0002,

0xfaf0,	// (0x0005b866) popup_char_count_window_g

0xe55d,	// (0x0005a2d3) popup_char_count_window_t1

0x0450,	// (0x0004c1c6) main_vded2_pane

0x4b01,	// (0x00050877) aid_size_cell_imed_line

0x4b0b,	// (0x00050881) grid_imed_line_width_pane

0xad8e,	// (0x00056b04) vid4_indicators_pane_g4

0xe56b,	// (0x0005a2e1) cell_imed_line_width_pane_ParamLimits

0xe56b,	// (0x0005a2e1) cell_imed_line_width_pane

0xe57f,	// (0x0005a2f5) cell_imed_line_width_pane_g1

0x4498,	// (0x0005020e) cell_imed_line_width_pane_g2

0x0001,

0xfaf7,	// (0x0005b86d) cell_imed_line_width_pane_g

0xbe29,	// (0x00057b9f) main_vded2_pane_g1_ParamLimits

0xbe29,	// (0x00057b9f) main_vded2_pane_g1

0xbe36,	// (0x00057bac) main_vded2_pane_g2_ParamLimits

0xbe36,	// (0x00057bac) main_vded2_pane_g2

0x0001,

0xfafc,	// (0x0005b872) main_vded2_pane_g_ParamLimits

0xfafc,	// (0x0005b872) main_vded2_pane_g

0xbe44,	// (0x00057bba) vded2_slider_pane_ParamLimits

0xbe44,	// (0x00057bba) vded2_slider_pane

0xbe51,	// (0x00057bc7) aid_size_touch_vded2_end

0xbe5b,	// (0x00057bd1) aid_size_touch_vded2_playhead

0xe588,	// (0x0005a2fe) aid_size_touch_vded2_start

0xe590,	// (0x0005a306) vded2_slider_bg_pane

0xe599,	// (0x0005a30f) vded2_slider_pane_g1

0xe5a2,	// (0x0005a318) vded2_slider_pane_g2

0xbe63,	// (0x00057bd9) vded2_slider_pane_g3

0x0002,

0xfb01,	// (0x0005b877) vded2_slider_pane_g

0xe5aa,	// (0x0005a320) vded2_slider_bg_pane_g1

0xe5b3,	// (0x0005a329) vded2_slider_bg_pane_g2

0xe5bc,	// (0x0005a332) vded2_slider_bg_pane_g3

0x0002,

0xfb08,	// (0x0005b87e) vded2_slider_bg_pane_g

0x85ef,	// (0x00054365) aid_postcard_touch_down_pane_ParamLimits

0x85ef,	// (0x00054365) aid_postcard_touch_down_pane

0x85ff,	// (0x00054375) aid_postcard_touch_up_pane_ParamLimits

0x85ff,	// (0x00054375) aid_postcard_touch_up_pane

0x0450,	// (0x0004c1c6) main_blid2_pane

0x41e9,	// (0x0004ff5f) popup_blid2_search_window

0x0450,	// (0x0004c1c6) blid2_gps_pane

0x0450,	// (0x0004c1c6) blid2_navig_pane

0x0450,	// (0x0004c1c6) blid2_search_pane

0x0450,	// (0x0004c1c6) blid2_tripm_pane

0xbe6c,	// (0x00057be2) blid2_search_pane_g1_ParamLimits

0xbe6c,	// (0x00057be2) blid2_search_pane_g1

0xbe7c,	// (0x00057bf2) blid2_search_pane_t1_ParamLimits

0xbe7c,	// (0x00057bf2) blid2_search_pane_t1

0xbe8e,	// (0x00057c04) aid_size_cell_blid2_gps_ParamLimits

0xbe8e,	// (0x00057c04) aid_size_cell_blid2_gps

0xbe9e,	// (0x00057c14) blid2_gps_pane_g1_ParamLimits

0xbe9e,	// (0x00057c14) blid2_gps_pane_g1

0xbeaa,	// (0x00057c20) grid_blid2_satellite_pane_ParamLimits

0xbeaa,	// (0x00057c20) grid_blid2_satellite_pane

0xbeba,	// (0x00057c30) blid2_navig_pane_g1_ParamLimits

0xbeba,	// (0x00057c30) blid2_navig_pane_g1

0xbec6,	// (0x00057c3c) blid2_navig_pane_t1_ParamLimits

0xbec6,	// (0x00057c3c) blid2_navig_pane_t1

0xbed8,	// (0x00057c4e) blid2_navig_pane_t2_ParamLimits

0xbed8,	// (0x00057c4e) blid2_navig_pane_t2

0x0001,

0xfb0f,	// (0x0005b885) blid2_navig_pane_t_ParamLimits

0xfb0f,	// (0x0005b885) blid2_navig_pane_t

0xbeea,	// (0x00057c60) blid2_navig_ring_pane_ParamLimits

0xbeea,	// (0x00057c60) blid2_navig_ring_pane

0xbefa,	// (0x00057c70) blid2_speed_pane_ParamLimits

0xbefa,	// (0x00057c70) blid2_speed_pane

0xbf06,	// (0x00057c7c) blid2_tripm_pane_g1_ParamLimits

0xbf06,	// (0x00057c7c) blid2_tripm_pane_g1

0xbf16,	// (0x00057c8c) blid2_tripm_pane_g2_ParamLimits

0xbf16,	// (0x00057c8c) blid2_tripm_pane_g2

0xbf22,	// (0x00057c98) blid2_tripm_pane_g3_ParamLimits

0xbf22,	// (0x00057c98) blid2_tripm_pane_g3

0xbf2e,	// (0x00057ca4) blid2_tripm_pane_g4_ParamLimits

0xbf2e,	// (0x00057ca4) blid2_tripm_pane_g4

0xbf3a,	// (0x00057cb0) blid2_tripm_pane_g5_ParamLimits

0xbf3a,	// (0x00057cb0) blid2_tripm_pane_g5

0x0005,

0xfb14,	// (0x0005b88a) blid2_tripm_pane_g_ParamLimits

0xfb14,	// (0x0005b88a) blid2_tripm_pane_g

0xbf56,	// (0x00057ccc) blid2_tripm_pane_t1_ParamLimits

0xbf56,	// (0x00057ccc) blid2_tripm_pane_t1

0xbf6a,	// (0x00057ce0) blid2_tripm_pane_t2_ParamLimits

0xbf6a,	// (0x00057ce0) blid2_tripm_pane_t2

0xbf7e,	// (0x00057cf4) blid2_tripm_pane_t3_ParamLimits

0xbf7e,	// (0x00057cf4) blid2_tripm_pane_t3

0x0003,

0xfb21,	// (0x0005b897) blid2_tripm_pane_t_ParamLimits

0xfb21,	// (0x0005b897) blid2_tripm_pane_t

0xbfb0,	// (0x00057d26) cell_blid2_satellite_pane_ParamLimits

0xbfb0,	// (0x00057d26) cell_blid2_satellite_pane

0xbfca,	// (0x00057d40) cell_blid2_satellite_pane_g1

0xe5c5,	// (0x0005a33b) cell_blid2_satellite_pane_t1

0x462c,	// (0x000503a2) blid2_speed_pane_g1

0xe5d3,	// (0x0005a349) blid2_speed_pane_t1

0xe5e1,	// (0x0005a357) blid2_speed_pane_t2

0x0001,

0xfb2a,	// (0x0005b8a0) blid2_speed_pane_t

0x462c,	// (0x000503a2) blid2_navig_ring_pane_g1

0xbfd3,	// (0x00057d49) blid2_navig_ring_pane_g2

0xbfdb,	// (0x00057d51) blid2_navig_ring_pane_g3

0xbfe3,	// (0x00057d59) blid2_navig_ring_pane_g4

0xbfeb,	// (0x00057d61) blid2_navig_ring_pane_g5

0x0004,

0xfb2f,	// (0x0005b8a5) blid2_navig_ring_pane_g

0x0450,	// (0x0004c1c6) bg_popup_window_pane_cp011

0xe5ef,	// (0x0005a365) popup_blid2_search_window_g1

0xe5f7,	// (0x0005a36d) popup_blid2_search_window_t1

0xe605,	// (0x0005a37b) popup_blid2_search_window_t2

0x0001,

0xfb3a,	// (0x0005b8b0) popup_blid2_search_window_t

0x2605,	// (0x0004e37b) main_browser_pane_g1

0x2306,	// (0x0004e07c) main_browser_pane_ParamLimits

0xad56,	// (0x00056acc) bg_button_pane_cp011_ParamLimits

0xb005,	// (0x00056d7b) cell_vitu2_function_pane_g1_ParamLimits

0x41db,	// (0x0004ff51) bg_popup_sub_pane_cp22_ParamLimits

0xb920,	// (0x00057696) input_focus_pane_cp08_ParamLimits

0xb937,	// (0x000576ad) popup_vitu2_query_button_pane_ParamLimits

0xb937,	// (0x000576ad) popup_vitu2_query_button_pane

0xb948,	// (0x000576be) popup_vitu2_query_input_button_pane

0xe2ad,	// (0x0005a023) popup_vitu2_query_window_g1_ParamLimits

0xb952,	// (0x000576c8) popup_vitu2_query_window_g2_ParamLimits

0xfa3b,	// (0x0005b7b1) popup_vitu2_query_window_g_ParamLimits

0x0450,	// (0x0004c1c6) bg_button_pane_cp026

0xbff3,	// (0x00057d69) popup_vitu2_query_input_button_pane_g1

0x0450,	// (0x0004c1c6) bg_button_pane_cp025

0xe613,	// (0x0005a389) popup_vitu2_query_button_pane_t1

0x9749,	// (0x000554bf) main_mp3_pane_t6

0x9759,	// (0x000554cf) popup_slider_window_cp01

0xac77,	// (0x000569ed) cam4_battery_pane

0xad64,	// (0x00056ada) cam4_battery_pane_cp02

0xbd92,	// (0x00057b08) cam4_battery_pane_cp01

0xbd92,	// (0x00057b08) cam4_battery_pane_cp03

0xdee4,	// (0x00059c5a) cam4_battery_pane_g1

0x462c,	// (0x000503a2) cam4_battery_pane_g2

0x0001,

0xfb3f,	// (0x0005b8b5) cam4_battery_pane_g

0x44f6,	// (0x0005026c) popup_blid_sat_info2_window_t11

0x7e97,	// (0x00053c0d) aid_size_touch_mv_arrow_left_ParamLimits

0x7ec2,	// (0x00053c38) aid_size_touch_mv_arrow_right_ParamLimits

0x2cee,	// (0x0004ea64) navi_pane_g1_ParamLimits

0x7eeb,	// (0x00053c61) navi_pane_g2_ParamLimits

0x7f19,	// (0x00053c8f) navi_pane_g3_ParamLimits

0xf409,	// (0x0005b17f) navi_pane_g_ParamLimits

0x7f73,	// (0x00053ce9) navi_pane_mv_t1_ParamLimits

0xa21c,	// (0x00055f92) grid_imed_effect_pane_ParamLimits

0x6adb,	// (0x00052851) aid_placing_vt_slider_lsc

0x2556,	// (0x0004e2cc) aid_placing_vt_slider_prt

0x3675,	// (0x0004f3eb) bg_tb_trans_pane_cp01_ParamLimits

0x47b3,	// (0x00050529) popup_image_details_window_g1_ParamLimits

0x47c6,	// (0x0005053c) popup_image_details_window_g2_ParamLimits

0x47db,	// (0x00050551) popup_image_details_window_g3_ParamLimits

0x47db,	// (0x00050551) popup_image_details_window_g3

0xf73c,	// (0x0005b4b2) popup_image_details_window_g_ParamLimits

0x47ef,	// (0x00050565) popup_image_details_window_t1_ParamLimits

0x4801,	// (0x00050577) popup_image_details_window_t2_ParamLimits

0x481a,	// (0x00050590) popup_image_details_window_t3_ParamLimits

0x482e,	// (0x000505a4) popup_image_details_window_t4_ParamLimits

0x4849,	// (0x000505bf) popup_image_details_window_t5_ParamLimits

0xf743,	// (0x0005b4b9) popup_image_details_window_t_ParamLimits

0xbca9,	// (0x00057a1f) cl_header_name_pane_ParamLimits

0xbca9,	// (0x00057a1f) cl_header_name_pane

0xbffb,	// (0x00057d71) cl_header_name_pane_t1_ParamLimits

0xbffb,	// (0x00057d71) cl_header_name_pane_t1

0xc012,	// (0x00057d88) cl_header_name_pane_t2_ParamLimits

0xc012,	// (0x00057d88) cl_header_name_pane_t2

0xc03c,	// (0x00057db2) cl_header_name_pane_t3_ParamLimits

0xc03c,	// (0x00057db2) cl_header_name_pane_t3

0x0002,

0xfb44,	// (0x0005b8ba) cl_header_name_pane_t_ParamLimits

0xfb44,	// (0x0005b8ba) cl_header_name_pane_t

0x7f44,	// (0x00053cba) navi_pane_mv_g2_ParamLimits

0xe014,	// (0x00059d8a) field_vitu2_entry_pane_g1_ParamLimits

0xe020,	// (0x00059d96) field_vitu2_entry_pane_g2_ParamLimits

0xe02c,	// (0x00059da2) field_vitu2_entry_pane_g3_ParamLimits

0xe02c,	// (0x00059da2) field_vitu2_entry_pane_g3

0xf93a,	// (0x0005b6b0) field_vitu2_entry_pane_g_ParamLimits

0xaf95,	// (0x00056d0b) cell_vitu2_itu_pane_g1_ParamLimits

0xafa5,	// (0x00056d1b) cell_vitu2_itu_pane_g2_ParamLimits

0xafa5,	// (0x00056d1b) cell_vitu2_itu_pane_g2

0x0001,

0xf946,	// (0x0005b6bc) cell_vitu2_itu_pane_g_ParamLimits

0xf946,	// (0x0005b6bc) cell_vitu2_itu_pane_g

0xad56,	// (0x00056acc) bg_vkb2_func_pane_cp05_ParamLimits

0xad56,	// (0x00056acc) bg_vkb2_func_pane_cp05

0xad56,	// (0x00056acc) bg_vkb2_func_pane_cp03

0xad56,	// (0x00056acc) bg_vkb2_func_pane_cp04

0xad56,	// (0x00056acc) bg_vkb2_func_pane_cp10_ParamLimits

0xad56,	// (0x00056acc) bg_vkb2_func_pane_cp10

0xbc4b,	// (0x000579c1) bg_vkb2_func_pane_cp08

0xbc31,	// (0x000579a7) bg_vkb2_func_pane_cp06

0xbc3f,	// (0x000579b5) bg_vkb2_func_pane_cp07

0xe521,	// (0x0005a297) bg_vkb2_func_pane_cp11_ParamLimits

0xe521,	// (0x0005a297) bg_vkb2_func_pane_cp11

0xe536,	// (0x0005a2ac) bg_vkb2_func_pane_cp12_ParamLimits

0xe536,	// (0x0005a2ac) bg_vkb2_func_pane_cp12

0x0450,	// (0x0004c1c6) bg_vkb2_func_pane_cp09

0xe04c,	// (0x00059dc2) bg_vkb2_func_pane_g1

0x2716,	// (0x0004e48c) bg_vkb2_func_pane_g2

0xe054,	// (0x00059dca) bg_vkb2_func_pane_g3

0xe05c,	// (0x00059dd2) bg_vkb2_func_pane_g4

0xe270,	// (0x00059fe6) bg_vkb2_func_pane_g5

0xe074,	// (0x00059dea) bg_vkb2_func_pane_g6

0xe07c,	// (0x00059df2) bg_vkb2_func_pane_g7

0xe06c,	// (0x00059de2) bg_vkb2_func_pane_g8

0x26f6,	// (0x0004e46c) bg_vkb2_func_pane_g9

0x0008,

0xfb4b,	// (0x0005b8c1) bg_vkb2_func_pane_g

0xbf48,	// (0x00057cbe) blid2_tripm_pane_g6_ParamLimits

0xbf48,	// (0x00057cbe) blid2_tripm_pane_g6

0xde9e,	// (0x00059c14) mp4_progress_pane_g1

0xbfa4,	// (0x00057d1a) blid2_tripm_values_pane_ParamLimits

0xbfa4,	// (0x00057d1a) blid2_tripm_values_pane

0xc061,	// (0x00057dd7) blid2_tripm_values_pane_t1

0xc06f,	// (0x00057de5) blid2_tripm_values_pane_t2

0xc07d,	// (0x00057df3) blid2_tripm_values_pane_t3

0xc08b,	// (0x00057e01) blid2_tripm_values_pane_t4

0xc099,	// (0x00057e0f) blid2_tripm_values_pane_t5

0xc0a7,	// (0x00057e1d) blid2_tripm_values_pane_t6

0xc0b5,	// (0x00057e2b) blid2_tripm_values_pane_t7

0xc0c3,	// (0x00057e39) blid2_tripm_values_pane_t8

0xc0d1,	// (0x00057e47) blid2_tripm_values_pane_t9

0x0008,

0xfb5e,	// (0x0005b8d4) blid2_tripm_values_pane_t

0x6b1b,	// (0x00052891) call_video_pane_t1_ParamLimits

0x6b3c,	// (0x000528b2) call_video_pane_t2_ParamLimits

0xf292,	// (0x0005b008) call_video_pane_t_ParamLimits

0x84b0,	// (0x00054226) msg_header_pane_g1_ParamLimits

0x2f09,	// (0x0004ec7f) msg_header_pane_g2_ParamLimits

0x2f09,	// (0x0004ec7f) msg_header_pane_g2

0x0001,

0xf4ac,	// (0x0005b222) msg_header_pane_g_ParamLimits

0xf4ac,	// (0x0005b222) msg_header_pane_g

0x2306,	// (0x0004e07c) main_clock2_pane_ParamLimits

0x9fa1,	// (0x00055d17) grid_clock2_toolbar_pane_ParamLimits

0x9fa1,	// (0x00055d17) grid_clock2_toolbar_pane

0x9fa1,	// (0x00055d17) listscroll_clock2_pane_ParamLimits

0x9fa1,	// (0x00055d17) listscroll_clock2_pane

0xa04f,	// (0x00055dc5) main_clock2_pane_t3_ParamLimits

0xa04f,	// (0x00055dc5) main_clock2_pane_t3

0xa061,	// (0x00055dd7) main_clock2_pane_t4_ParamLimits

0xa061,	// (0x00055dd7) main_clock2_pane_t4

0xe621,	// (0x0005a397) cell_clock2_toolbar_pane

0xe629,	// (0x0005a39f) cell_clock2_toolbar_pane_cp01

0xe629,	// (0x0005a39f) cell_clock2_toolbar_pane_cp02

0xe631,	// (0x0005a3a7) cell_clock2_toolbar_pane_cp03

0xe639,	// (0x0005a3af) list_clock2_pane

0x2c41,	// (0x0004e9b7) scroll_pane_cp10

0xe641,	// (0x0005a3b7) list_single_clock2_pane_ParamLimits

0xe641,	// (0x0005a3b7) list_single_clock2_pane

0x2d8e,	// (0x0004eb04) list_highlight_pane_cp08

0xe64e,	// (0x0005a3c4) list_single_clock2_pane_t1

0xe65c,	// (0x0005a3d2) list_single_clock2_pane_t2

0x0001,

0xfb71,	// (0x0005b8e7) list_single_clock2_pane_t

0x0450,	// (0x0004c1c6) bg_button_pane_cp10

0xe66a,	// (0x0005a3e0) cell_clock2_toolbar_pane_g1

0x8551,	// (0x000542c7) aid_main_viewer_pane_g1_ParamLimits

0x8551,	// (0x000542c7) aid_main_viewer_pane_g1

0x855d,	// (0x000542d3) aid_main_viewer_pane_g2_ParamLimits

0x855d,	// (0x000542d3) aid_main_viewer_pane_g2

0x8569,	// (0x000542df) aid_main_viewer_pane_g3_ParamLimits

0x8569,	// (0x000542df) aid_main_viewer_pane_g3

0x857a,	// (0x000542f0) aid_main_viewer_pane_g4_ParamLimits

0x857a,	// (0x000542f0) aid_main_viewer_pane_g4

0x0003,

0xf4bd,	// (0x0005b233) aid_main_viewer_pane_g_ParamLimits

0xf4bd,	// (0x0005b233) aid_main_viewer_pane_g

0x8d0a,	// (0x00054a80) main_calc_pane_ParamLimits

0x8d17,	// (0x00054a8d) main_dialer2_pane_ParamLimits

0x0450,	// (0x0004c1c6) main_cam6_pane

0x0450,	// (0x0004c1c6) main_vid6_pane

0x9fad,	// (0x00055d23) listscroll_gen_pane_cp06_ParamLimits

0x9fad,	// (0x00055d23) listscroll_gen_pane_cp06

0xa073,	// (0x00055de9) main_clock2_pane_t5_ParamLimits

0xa073,	// (0x00055de9) main_clock2_pane_t5

0xa0c2,	// (0x00055e38) aid_call2_pane_cp10_ParamLimits

0xa0d4,	// (0x00055e4a) aid_call_pane_cp10_ParamLimits

0x2cc3,	// (0x0004ea39) popup_clock_analogue_window_cp10_g1_ParamLimits

0x2cc3,	// (0x0004ea39) popup_clock_analogue_window_cp10_g2_ParamLimits

0xa0e6,	// (0x00055e5c) popup_clock_analogue_window_cp10_g3_ParamLimits

0xa0e6,	// (0x00055e5c) popup_clock_analogue_window_cp10_g4_ParamLimits

0x2cc3,	// (0x0004ea39) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf7f3,	// (0x0005b569) popup_clock_analogue_window_cp10_g_ParamLimits

0xa0fc,	// (0x00055e72) popup_clock_analogue_window_cp10_t1_ParamLimits

0xa8da,	// (0x00056650) cell_dialer2_keypad_pane_g2_ParamLimits

0xa8da,	// (0x00056650) cell_dialer2_keypad_pane_g2

0x0001,

0xf8d9,	// (0x0005b64f) cell_dialer2_keypad_pane_g_ParamLimits

0xf8d9,	// (0x0005b64f) cell_dialer2_keypad_pane_g

0xa8f6,	// (0x0005666c) cell_dialer2_keypad_pane_t1

0xb2cb,	// (0x00057041) main_cset_text2_pane_ParamLimits

0xb2cb,	// (0x00057041) main_cset_text2_pane

0xe489,	// (0x0005a1ff) area_vitu2_query_pane_g1_ParamLimits

0xbbd0,	// (0x00057946) area_vitu2_query_pane_g2_ParamLimits

0xfa8e,	// (0x0005b804) area_vitu2_query_pane_g_ParamLimits

0x0d4a,	// (0x0004cac0) area_vitu2_query_pane_t7_ParamLimits

0x0d4a,	// (0x0004cac0) area_vitu2_query_pane_t7

0xbc31,	// (0x000579a7) bg_button_pane_cp018_ParamLimits

0xbc3f,	// (0x000579b5) bg_button_pane_cp021_ParamLimits

0xbc4b,	// (0x000579c1) bg_button_pane_cp022_ParamLimits

0xbc4b,	// (0x000579c1) bg_vkb2_func_pane_cp08_ParamLimits

0xbc31,	// (0x000579a7) bg_vkb2_func_pane_cp06_ParamLimits

0xbc3f,	// (0x000579b5) bg_vkb2_func_pane_cp07_ParamLimits

0xbc5c,	// (0x000579d2) input_focus_pane_cp09_ParamLimits

0xc0df,	// (0x00057e55) cam6_autofocus_pane_ParamLimits

0xc0df,	// (0x00057e55) cam6_autofocus_pane

0xc101,	// (0x00057e77) cam6_image_uncrop_pane_ParamLimits

0xc101,	// (0x00057e77) cam6_image_uncrop_pane

0xc12e,	// (0x00057ea4) cam6_indi_pane_ParamLimits

0xc12e,	// (0x00057ea4) cam6_indi_pane

0xc148,	// (0x00057ebe) cam6_mode_pane_ParamLimits

0xc148,	// (0x00057ebe) cam6_mode_pane

0xc15c,	// (0x00057ed2) cam6_timer_pane_ParamLimits

0xc15c,	// (0x00057ed2) cam6_timer_pane

0xc168,	// (0x00057ede) cam6_zoom_pane_ParamLimits

0xc168,	// (0x00057ede) cam6_zoom_pane

0xc180,	// (0x00057ef6) cam6_mode_pane_g1_ParamLimits

0xc180,	// (0x00057ef6) cam6_mode_pane_g1

0xc18c,	// (0x00057f02) cam6_mode_pane_g2_ParamLimits

0xc18c,	// (0x00057f02) cam6_mode_pane_g2

0xc198,	// (0x00057f0e) cam6_mode_pane_g3_ParamLimits

0xc198,	// (0x00057f0e) cam6_mode_pane_g3

0xc1a4,	// (0x00057f1a) cam6_mode_pane_g4_ParamLimits

0xc1a4,	// (0x00057f1a) cam6_mode_pane_g4

0x0003,

0xfb76,	// (0x0005b8ec) cam6_mode_pane_g_ParamLimits

0xfb76,	// (0x0005b8ec) cam6_mode_pane_g

0xdeee,	// (0x00059c64) bg_tb_trans_pane_cp08_ParamLimits

0xdeee,	// (0x00059c64) bg_tb_trans_pane_cp08

0xe672,	// (0x0005a3e8) cam6_battery_pane_ParamLimits

0xe672,	// (0x0005a3e8) cam6_battery_pane

0xe688,	// (0x0005a3fe) cam6_indi_pane_g1_ParamLimits

0xe688,	// (0x0005a3fe) cam6_indi_pane_g1

0xe69a,	// (0x0005a410) cam6_indi_pane_g2_ParamLimits

0xe69a,	// (0x0005a410) cam6_indi_pane_g2

0xe6ac,	// (0x0005a422) cam6_indi_pane_g3_ParamLimits

0xe6ac,	// (0x0005a422) cam6_indi_pane_g3

0x0002,

0xfb7f,	// (0x0005b8f5) cam6_indi_pane_g_ParamLimits

0xfb7f,	// (0x0005b8f5) cam6_indi_pane_g

0xe6be,	// (0x0005a434) cam6_indi_pane_t1_ParamLimits

0xe6be,	// (0x0005a434) cam6_indi_pane_t1

0xadcb,	// (0x00056b41) cam6_autofocus_pane_g1

0xadc3,	// (0x00056b39) cam6_autofocus_pane_g2

0xaddb,	// (0x00056b51) cam6_autofocus_pane_g3

0xadd3,	// (0x00056b49) cam6_autofocus_pane_g4

0x0003,

0xfb86,	// (0x0005b8fc) cam6_autofocus_pane_g

0xe6e4,	// (0x0005a45a) cam6_timer_pane_g1

0xe6ec,	// (0x0005a462) cam6_timer_pane_t1

0xe6fa,	// (0x0005a470) cam6_zoom_cont_pane

0xe702,	// (0x0005a478) cam6_zoom_pane_g1

0xe70a,	// (0x0005a480) cam6_zoom_pane_g2

0xc1b0,	// (0x00057f26) cam6_zoom_pane_g3

0x0002,

0xfb8f,	// (0x0005b905) cam6_zoom_pane_g

0x462c,	// (0x000503a2) cam6_battery_pane_g1

0x462c,	// (0x000503a2) cam6_battery_pane_g2

0x0001,

0xf700,	// (0x0005b476) cam6_battery_pane_g

0xe712,	// (0x0005a488) cam6_zoom_cont_pane_g1

0xe71b,	// (0x0005a491) cam6_zoom_cont_pane_g2

0xe724,	// (0x0005a49a) cam6_zoom_cont_pane_g3

0x0002,

0xfb96,	// (0x0005b90c) cam6_zoom_cont_pane_g

0xc1ca,	// (0x00057f40) cam6_mode_pane_cp_ParamLimits

0xc1ca,	// (0x00057f40) cam6_mode_pane_cp

0xc1de,	// (0x00057f54) cam6_zoom_pane_cp_ParamLimits

0xc1de,	// (0x00057f54) cam6_zoom_pane_cp

0xc1f6,	// (0x00057f6c) vid6_image_uncrop_cif_pane_ParamLimits

0xc1f6,	// (0x00057f6c) vid6_image_uncrop_cif_pane

0xc222,	// (0x00057f98) vid6_image_uncrop_nhd_pane_ParamLimits

0xc222,	// (0x00057f98) vid6_image_uncrop_nhd_pane

0xc23f,	// (0x00057fb5) vid6_image_uncrop_vga_pane_ParamLimits

0xc23f,	// (0x00057fb5) vid6_image_uncrop_vga_pane

0xc25e,	// (0x00057fd4) vid6_image_uncrop_wvga_pane_ParamLimits

0xc25e,	// (0x00057fd4) vid6_image_uncrop_wvga_pane

0xc27b,	// (0x00057ff1) vid6_indi_pane_ParamLimits

0xc27b,	// (0x00057ff1) vid6_indi_pane

0xdeee,	// (0x00059c64) bg_tb_trans_pane_cp09_ParamLimits

0xdeee,	// (0x00059c64) bg_tb_trans_pane_cp09

0xe73c,	// (0x0005a4b2) cam6_battery_pane_cp_ParamLimits

0xe73c,	// (0x0005a4b2) cam6_battery_pane_cp

0xe748,	// (0x0005a4be) vid6_indi_pane_g1_ParamLimits

0xe748,	// (0x0005a4be) vid6_indi_pane_g1

0xe75a,	// (0x0005a4d0) vid6_indi_pane_g2_ParamLimits

0xe75a,	// (0x0005a4d0) vid6_indi_pane_g2

0xe76c,	// (0x0005a4e2) vid6_indi_pane_g3_ParamLimits

0xe76c,	// (0x0005a4e2) vid6_indi_pane_g3

0xe781,	// (0x0005a4f7) vid6_indi_pane_g4_ParamLimits

0xe781,	// (0x0005a4f7) vid6_indi_pane_g4

0xe796,	// (0x0005a50c) vid6_indi_pane_g5_ParamLimits

0xe796,	// (0x0005a50c) vid6_indi_pane_g5

0x0004,

0xfb9d,	// (0x0005b913) vid6_indi_pane_g_ParamLimits

0xfb9d,	// (0x0005b913) vid6_indi_pane_g

0xe7b0,	// (0x0005a526) vid6_indi_pane_t1_ParamLimits

0xe7b0,	// (0x0005a526) vid6_indi_pane_t1

0xe7c6,	// (0x0005a53c) vid6_indi_pane_t2_ParamLimits

0xe7c6,	// (0x0005a53c) vid6_indi_pane_t2

0xe7ee,	// (0x0005a564) vid6_indi_pane_t3_ParamLimits

0xe7ee,	// (0x0005a564) vid6_indi_pane_t3

0xe816,	// (0x0005a58c) vid6_indi_pane_t4_ParamLimits

0xe816,	// (0x0005a58c) vid6_indi_pane_t4

0x0003,

0xfba8,	// (0x0005b91e) vid6_indi_pane_t_ParamLimits

0xfba8,	// (0x0005b91e) vid6_indi_pane_t

0xe83a,	// (0x0005a5b0) wait_bar_pane_cp08

0xc29e,	// (0x00058014) main_cset_text2_pane_t1_ParamLimits

0xc29e,	// (0x00058014) main_cset_text2_pane_t1

0xc1b8,	// (0x00057f2e) listscroll_gen_pane_cp06_t1_ParamLimits

0xc1b8,	// (0x00057f2e) listscroll_gen_pane_cp06_t1

0x0450,	// (0x0004c1c6) main_cam6_set_pane

0xac69,	// (0x000569df) bg_tb_trans_pane_cp06_ParamLimits

0xac7f,	// (0x000569f5) cam4_indicators_pane_g1_ParamLimits

0xac90,	// (0x00056a06) cam4_indicators_pane_g2_ParamLimits

0xf916,	// (0x0005b68c) cam4_indicators_pane_g_ParamLimits

0xacae,	// (0x00056a24) cam4_indicators_pane_t1_ParamLimits

0xad56,	// (0x00056acc) bg_tb_trans_pane_cp07_ParamLimits

0xac7f,	// (0x000569f5) vid4_indicators_pane_g1_ParamLimits

0xad6c,	// (0x00056ae2) vid4_indicators_pane_g2_ParamLimits

0xad7d,	// (0x00056af3) vid4_indicators_pane_g3_ParamLimits

0xad8e,	// (0x00056b04) vid4_indicators_pane_g4_ParamLimits

0xf928,	// (0x0005b69e) vid4_indicators_pane_g_ParamLimits

0xadaa,	// (0x00056b20) vid4_indicators_pane_t1_ParamLimits

0xbd9a,	// (0x00057b10) vid4_progress_pane_g1_ParamLimits

0xbdaa,	// (0x00057b20) vid4_progress_pane_g2_ParamLimits

0x2937,	// (0x0004e6ad) vid4_progress_pane_g3_ParamLimits

0xac90,	// (0x00056a06) vid4_progress_pane_g4_ParamLimits

0xfad9,	// (0x0005b84f) vid4_progress_pane_g_ParamLimits

0xbdba,	// (0x00057b30) vid4_progress_pane_t1_ParamLimits

0xbdcf,	// (0x00057b45) vid4_progress_pane_t2_ParamLimits

0xbde5,	// (0x00057b5b) vid4_progress_pane_t3_ParamLimits

0xfae4,	// (0x0005b85a) vid4_progress_pane_t_ParamLimits

0xbdfa,	// (0x00057b70) wait_bar_pane_cp07_ParamLimits

0xc2dc,	// (0x00058052) main_cam6_set_pane_g2_ParamLimits

0xc2dc,	// (0x00058052) main_cam6_set_pane_g2

0xc2e8,	// (0x0005805e) main_cset6_listscroll_pane_ParamLimits

0xc2e8,	// (0x0005805e) main_cset6_listscroll_pane

0xc313,	// (0x00058089) main_cset6_slider_pane_ParamLimits

0xc313,	// (0x00058089) main_cset6_slider_pane

0xc31f,	// (0x00058095) main_cset6_text2_pane_ParamLimits

0xc31f,	// (0x00058095) main_cset6_text2_pane

0xe849,	// (0x0005a5bf) main_cset6_text_pane

0xe851,	// (0x0005a5c7) main_cset_list_pane_copy1_ParamLimits

0xe851,	// (0x0005a5c7) main_cset_list_pane_copy1

0xe861,	// (0x0005a5d7) scroll_pane_cp028_copy1

0xc332,	// (0x000580a8) cset_list_set_pane_copy1

0xc34c,	// (0x000580c2) aid_position_infowindow_above_copy1

0xc354,	// (0x000580ca) aid_position_infowindow_below_copy1

0xc35c,	// (0x000580d2) cset_list_set_pane_g1_copy1

0x0e51,	// (0x0004cbc7) cset_list_set_pane_g3_copy1_ParamLimits

0x0e51,	// (0x0004cbc7) cset_list_set_pane_g3_copy1

0xb5d3,	// (0x00057349) cset_list_set_pane_t1_copy1_ParamLimits

0xb5d3,	// (0x00057349) cset_list_set_pane_t1_copy1

0x3675,	// (0x0004f3eb) list_highlight_pane_cp021_copy1_ParamLimits

0x3675,	// (0x0004f3eb) list_highlight_pane_cp021_copy1

0xe86a,	// (0x0005a5e0) cset6_slider_pane_ParamLimits

0xe86a,	// (0x0005a5e0) cset6_slider_pane

0xe896,	// (0x0005a60c) main_cset6_slider_pane_g1_ParamLimits

0xe896,	// (0x0005a60c) main_cset6_slider_pane_g1

0xc364,	// (0x000580da) main_cset6_slider_pane_g2_ParamLimits

0xc364,	// (0x000580da) main_cset6_slider_pane_g2

0xe17b,	// (0x00059ef1) main_cset6_slider_pane_g3_ParamLimits

0xe17b,	// (0x00059ef1) main_cset6_slider_pane_g3

0xc38c,	// (0x00058102) main_cset6_slider_pane_g4_ParamLimits

0xc38c,	// (0x00058102) main_cset6_slider_pane_g4

0xc398,	// (0x0005810e) main_cset6_slider_pane_g5_ParamLimits

0xc398,	// (0x0005810e) main_cset6_slider_pane_g5

0xe17b,	// (0x00059ef1) main_cset6_slider_pane_g7_ParamLimits

0xe17b,	// (0x00059ef1) main_cset6_slider_pane_g7

0xe187,	// (0x00059efd) main_cset6_slider_pane_g8_ParamLimits

0xe187,	// (0x00059efd) main_cset6_slider_pane_g8

0xc3a6,	// (0x0005811c) main_cset6_slider_pane_g9_ParamLimits

0xc3a6,	// (0x0005811c) main_cset6_slider_pane_g9

0xc3b2,	// (0x00058128) main_cset6_slider_pane_g10_ParamLimits

0xc3b2,	// (0x00058128) main_cset6_slider_pane_g10

0xc38c,	// (0x00058102) main_cset6_slider_pane_g11_ParamLimits

0xc38c,	// (0x00058102) main_cset6_slider_pane_g11

0xc3be,	// (0x00058134) main_cset6_slider_pane_g12_ParamLimits

0xc3be,	// (0x00058134) main_cset6_slider_pane_g12

0xc3ca,	// (0x00058140) main_cset6_slider_pane_g13_ParamLimits

0xc3ca,	// (0x00058140) main_cset6_slider_pane_g13

0xc3d8,	// (0x0005814e) main_cset6_slider_pane_g14_ParamLimits

0xc3d8,	// (0x0005814e) main_cset6_slider_pane_g14

0xc3e6,	// (0x0005815c) main_cset6_slider_pane_g15_ParamLimits

0xc3e6,	// (0x0005815c) main_cset6_slider_pane_g15

0xc398,	// (0x0005810e) main_cset6_slider_pane_g16_ParamLimits

0xc398,	// (0x0005810e) main_cset6_slider_pane_g16

0xc3fe,	// (0x00058174) main_cset6_slider_pane_g17_ParamLimits

0xc3fe,	// (0x00058174) main_cset6_slider_pane_g17

0x0011,

0xfbb1,	// (0x0005b927) main_cset6_slider_pane_g_ParamLimits

0xfbb1,	// (0x0005b927) main_cset6_slider_pane_g

0xe8be,	// (0x0005a634) main_cset6_slider_pane_t1_ParamLimits

0xe8be,	// (0x0005a634) main_cset6_slider_pane_t1

0xc40c,	// (0x00058182) main_cset6_slider_pane_t2_ParamLimits

0xc40c,	// (0x00058182) main_cset6_slider_pane_t2

0xc437,	// (0x000581ad) main_cset6_slider_pane_t3_ParamLimits

0xc437,	// (0x000581ad) main_cset6_slider_pane_t3

0xc462,	// (0x000581d8) main_cset6_slider_pane_t4_ParamLimits

0xc462,	// (0x000581d8) main_cset6_slider_pane_t4

0xc48f,	// (0x00058205) main_cset6_slider_pane_t5_ParamLimits

0xc48f,	// (0x00058205) main_cset6_slider_pane_t5

0xe8ff,	// (0x0005a675) main_cset6_slider_pane_t7_ParamLimits

0xe8ff,	// (0x0005a675) main_cset6_slider_pane_t7

0xc4bc,	// (0x00058232) main_cset6_slider_pane_t8_ParamLimits

0xc4bc,	// (0x00058232) main_cset6_slider_pane_t8

0xc4e0,	// (0x00058256) main_cset6_slider_pane_t9_ParamLimits

0xc4e0,	// (0x00058256) main_cset6_slider_pane_t9

0xc504,	// (0x0005827a) main_cset6_slider_pane_t10_ParamLimits

0xc504,	// (0x0005827a) main_cset6_slider_pane_t10

0xc528,	// (0x0005829e) main_cset6_slider_pane_t11_ParamLimits

0xc528,	// (0x0005829e) main_cset6_slider_pane_t11

0xe935,	// (0x0005a6ab) main_cset6_slider_pane_t14_ParamLimits

0xe935,	// (0x0005a6ab) main_cset6_slider_pane_t14

0xe96e,	// (0x0005a6e4) main_cset6_slider_pane_t15_ParamLimits

0xe96e,	// (0x0005a6e4) main_cset6_slider_pane_t15

0x000b,

0xfbd6,	// (0x0005b94c) main_cset6_slider_pane_t_ParamLimits

0xfbd6,	// (0x0005b94c) main_cset6_slider_pane_t

0xe9a7,	// (0x0005a71d) cset_slider_pane_g1_copy1

0xe9b0,	// (0x0005a726) cset_slider_pane_g2_copy1

0xe9b9,	// (0x0005a72f) cset_slider_pane_g3_copy1

0x0450,	// (0x0004c1c6) bg_popup_sub_pane_cp011_copy1

0xe2b9,	// (0x0005a02f) main_cset_text_pane_g1_copy1

0xe2c1,	// (0x0005a037) main_cset_text_pane_t1_copy1

0xe2cf,	// (0x0005a045) main_cset_text_pane_t2_copy1

0xe2dd,	// (0x0005a053) main_cset_text_pane_t3_copy1

0xe2eb,	// (0x0005a061) main_cset_text_pane_t4_copy1

0xe2f9,	// (0x0005a06f) main_cset_text_pane_t5_copy1

0xe307,	// (0x0005a07d) main_cset_text_pane_t6_copy1

0xe315,	// (0x0005a08b) main_cset_text_pane_t7_copy1

0xc54e,	// (0x000582c4) main_cset_text2_pane_t1_copy1

0x0450,	// (0x0004c1c6) main_ncimui_pane

0x8d56,	// (0x00054acc) popup_query_ncimui_window_ParamLimits

0x8d56,	// (0x00054acc) popup_query_ncimui_window

0x08e7,	// (0x0004c65d) field_cale_ev2_pane_g4_ParamLimits

0x08e7,	// (0x0004c65d) field_cale_ev2_pane_g4

0xa5f8,	// (0x0005636e) cell_video_dialer_keypad_pane_g2_ParamLimits

0xa5f8,	// (0x0005636e) cell_video_dialer_keypad_pane_g2

0x0001,

0xf8b4,	// (0x0005b62a) cell_video_dialer_keypad_pane_g_ParamLimits

0xf8b4,	// (0x0005b62a) cell_video_dialer_keypad_pane_g

0xa610,	// (0x00056386) cell_video_dialer_keypad_pane_t1

0x0450,	// (0x0004c1c6) bg_popup_window_pane_cp012

0x2b11,	// (0x0004e887) heading_pane_cp06

0xe9ec,	// (0x0005a762) ncim_query_content_pane

0x0450,	// (0x0004c1c6) bg_popup_heading_pane_cp01

0xe9f4,	// (0x0005a76a) ncim_heading_pane_t1

0xea02,	// (0x0005a778) ncim_indicator_popup_pane

0xea14,	// (0x0005a78a) ncim_query_button_pane

0xea28,	// (0x0005a79e) ncim_query_content_pane_t1

0xea3a,	// (0x0005a7b0) ncim_query_content_pane_t2

0x0005,

0xfc15,	// (0x0005b98b) ncim_query_content_pane_t

0xea74,	// (0x0005a7ea) ncim_query_list_pane

0xea86,	// (0x0005a7fc) ncim_query_popup_pane

0xea02,	// (0x0005a778) ncim_indicator_popup_pane_ParamLimits

0xc67b,	// (0x000583f1) ncim_query_content_pane_g1_ParamLimits

0xc67b,	// (0x000583f1) ncim_query_content_pane_g1

0xea28,	// (0x0005a79e) ncim_query_content_pane_t1_ParamLimits

0xea3a,	// (0x0005a7b0) ncim_query_content_pane_t2_ParamLimits

0xc687,	// (0x000583fd) ncim_query_content_pane_t3_ParamLimits

0xc687,	// (0x000583fd) ncim_query_content_pane_t3

0xc6a4,	// (0x0005841a) ncim_query_content_pane_t4_ParamLimits

0xc6a4,	// (0x0005841a) ncim_query_content_pane_t4

0xc6c1,	// (0x00058437) ncim_query_content_pane_t5_ParamLimits

0xc6c1,	// (0x00058437) ncim_query_content_pane_t5

0xea4c,	// (0x0005a7c2) ncim_query_content_pane_t6_ParamLimits

0xea4c,	// (0x0005a7c2) ncim_query_content_pane_t6

0xfc15,	// (0x0005b98b) ncim_query_content_pane_t_ParamLimits

0xea74,	// (0x0005a7ea) ncim_query_list_pane_ParamLimits

0xea86,	// (0x0005a7fc) ncim_query_popup_pane_ParamLimits

0xea9a,	// (0x0005a810) wait_bar_pane_cp04

0x0450,	// (0x0004c1c6) input_focus_pane_cp011

0xeaa2,	// (0x0005a818) ncim_query_popup_pane_t1

0xeab0,	// (0x0005a826) ncim_list_query_list_pane_ParamLimits

0xeab0,	// (0x0005a826) ncim_list_query_list_pane

0x0450,	// (0x0004c1c6) bg_button_pane_cp027

0xeac3,	// (0x0005a839) ncim_query_button_pane_g1

0x0450,	// (0x0004c1c6) list_highlight_pane_cp012

0xeacd,	// (0x0005a843) ncim_list_query_list_pane_g1

0xead5,	// (0x0005a84b) ncim_list_query_list_pane_t1

0xac9f,	// (0x00056a15) cam4_indicators_pane_g3_ParamLimits

0xac9f,	// (0x00056a15) cam4_indicators_pane_g3

0xad9a,	// (0x00056b10) vid4_indicators_pane_g5_ParamLimits

0xad9a,	// (0x00056b10) vid4_indicators_pane_g5

0xac9f,	// (0x00056a15) vid4_progress_pane_g5_ParamLimits

0xac9f,	// (0x00056a15) vid4_progress_pane_g5

0xc594,	// (0x0005830a) main_ncimui_pane_g1

0xc5ea,	// (0x00058360) ncimui_group_query_pane_ParamLimits

0xc5ea,	// (0x00058360) ncimui_group_query_pane

0xc626,	// (0x0005839c) ncimui_list_pane_ParamLimits

0xc626,	// (0x0005839c) ncimui_list_pane

0xc647,	// (0x000583bd) ncimui_text_pane_ParamLimits

0xc647,	// (0x000583bd) ncimui_text_pane

0xc6de,	// (0x00058454) ncimui_text_pane_t1_ParamLimits

0xc6de,	// (0x00058454) ncimui_text_pane_t1

0xeae3,	// (0x0005a859) ncimui_list_single_graphic_pane_ParamLimits

0xeae3,	// (0x0005a859) ncimui_list_single_graphic_pane

0xc6fd,	// (0x00058473) ncimui_query_pane_ParamLimits

0xc6fd,	// (0x00058473) ncimui_query_pane

0x0450,	// (0x0004c1c6) list_highlight_pane_cp013

0xeaf3,	// (0x0005a869) ncim_list_query_list_pane_t1_copy1

0xeacd,	// (0x0005a843) ncim_list_single_graphic_pane_g1

0xeb01,	// (0x0005a877) ncim_query_button_pane_cp01

0xeb0d,	// (0x0005a883) ncim_query_entry_pane_ParamLimits

0xeb0d,	// (0x0005a883) ncim_query_entry_pane

0xeb20,	// (0x0005a896) ncimui_query_pane_g1

0xeb2c,	// (0x0005a8a2) ncimui_query_pane_t1_ParamLimits

0xeb2c,	// (0x0005a8a2) ncimui_query_pane_t1

0x3675,	// (0x0004f3eb) input_focus_pane_cp012

0xeb45,	// (0x0005a8bb) ncim_query_entry_pane_t1

0x2306,	// (0x0004e07c) main_im_pane_ParamLimits

0x3675,	// (0x0004f3eb) main_mobtv_pane_ParamLimits

0x3675,	// (0x0004f3eb) main_mobtv_pane

0xc3a6,	// (0x0005811c) main_cset6_slider_pane_g18_ParamLimits

0xc3a6,	// (0x0005811c) main_cset6_slider_pane_g18

0xc3ca,	// (0x00058140) main_cset6_slider_pane_g19_ParamLimits

0xc3ca,	// (0x00058140) main_cset6_slider_pane_g19

0xe02c,	// (0x00059da2) bg_main_mobtv_pane_ParamLimits

0xe02c,	// (0x00059da2) bg_main_mobtv_pane

0xc710,	// (0x00058486) main_mobtv_info_pane

0xc71b,	// (0x00058491) main_mobtv_loading_pane_ParamLimits

0xc71b,	// (0x00058491) main_mobtv_loading_pane

0xeb57,	// (0x0005a8cd) main_mobtv_pg_channel_list_pane

0xeb61,	// (0x0005a8d7) main_mobtv_pg_hdr_pane

0xc728,	// (0x0005849e) main_mobtv_programe_curr_pane_ParamLimits

0xc728,	// (0x0005849e) main_mobtv_programe_curr_pane

0xc735,	// (0x000584ab) main_mobtv_programe_next_pane_ParamLimits

0xc735,	// (0x000584ab) main_mobtv_programe_next_pane

0xeb6a,	// (0x0005a8e0) popup_mobtv_noti_window

0x462c,	// (0x000503a2) main_tv_pg_hdr_pane_g1

0xeb72,	// (0x0005a8e8) main_tv_pg_hdr_pane_g2

0xeb7a,	// (0x0005a8f0) main_tv_pg_hdr_pane_g3

0xeb82,	// (0x0005a8f8) main_tv_pg_hdr_pane_g4

0xeb8a,	// (0x0005a900) main_tv_pg_hdr_pane_g5

0xeb94,	// (0x0005a90a) main_tv_pg_hdr_pane_g6

0xeb9e,	// (0x0005a914) main_tv_pg_hdr_pane_g7

0xeba8,	// (0x0005a91e) main_tv_pg_hdr_pane_g8

0xebb2,	// (0x0005a928) main_tv_pg_hdr_pane_g9

0xebbc,	// (0x0005a932) main_tv_pg_hdr_pane_g10

0xebc6,	// (0x0005a93c) main_tv_pg_hdr_pane_g11

0x000a,

0xfc22,	// (0x0005b998) main_tv_pg_hdr_pane_g

0xebd0,	// (0x0005a946) main_tv_pg_hdr_pane_t1

0xebde,	// (0x0005a954) main_tv_pg_hdr_pane_t2

0xebec,	// (0x0005a962) main_tv_pg_hdr_pane_t3

0xebfc,	// (0x0005a972) main_tv_pg_hdr_pane_t4

0xec0c,	// (0x0005a982) main_tv_pg_hdr_pane_t5

0x0004,

0xfc39,	// (0x0005b9af) main_tv_pg_hdr_pane_t

0xec1c,	// (0x0005a992) single_mobtv_pg_channel_pane_ParamLimits

0xec1c,	// (0x0005a992) single_mobtv_pg_channel_pane

0xec2e,	// (0x0005a9a4) single_mobtv_pg_channel_table_pane

0xec37,	// (0x0005a9ad) single_mobtv_pg_channel_thumb_pane

0xec52,	// (0x0005a9c8) single_tv_pg_channel_pane_g1

0xec5b,	// (0x0005a9d1) single_tv_pg_channel_pane_g2

0x0001,

0xfc44,	// (0x0005b9ba) single_tv_pg_channel_pane_g

0x4893,	// (0x00050609) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0x4893,	// (0x00050609) bg_single_mobtv_pg_channel_thumb_pane

0xec64,	// (0x0005a9da) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xec64,	// (0x0005a9da) single_mobtv_pg_channel_thumb_pane_g1

0xec72,	// (0x0005a9e8) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xec72,	// (0x0005a9e8) single_mobtv_pg_channel_thumb_pane_g2

0xec7e,	// (0x0005a9f4) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xec7e,	// (0x0005a9f4) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfc49,	// (0x0005b9bf) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfc49,	// (0x0005b9bf) single_mobtv_pg_channel_thumb_pane_g

0xec8a,	// (0x0005aa00) single_mobtv_pg_channel_thumb_pane_t1

0xec98,	// (0x0005aa0e) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc50,	// (0x0005b9c6) single_mobtv_pg_channel_thumb_pane_t

0x462c,	// (0x000503a2) bg_single_mobtv_pg_channel_table_pane_g1

0x462c,	// (0x000503a2) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf700,	// (0x0005b476) bg_single_mobtv_pg_channel_table_pane_g

0xeca6,	// (0x0005aa1c) single_mobtv_pg_channel_table_pane_t1

0xecb4,	// (0x0005aa2a) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc55,	// (0x0005b9cb) single_mobtv_pg_channel_table_pane_t

0xc74a,	// (0x000584c0) main_mobtv_info_pane_g1_ParamLimits

0xc74a,	// (0x000584c0) main_mobtv_info_pane_g1

0xc766,	// (0x000584dc) main_mobtv_info_pane_t1_ParamLimits

0xc766,	// (0x000584dc) main_mobtv_info_pane_t1

0xc7de,	// (0x00058554) main_mobtv_info_pane_t2_ParamLimits

0xc7de,	// (0x00058554) main_mobtv_info_pane_t2

0x0002,

0xfc5f,	// (0x0005b9d5) main_mobtv_info_pane_t_ParamLimits

0xfc5f,	// (0x0005b9d5) main_mobtv_info_pane_t

0xc86d,	// (0x000585e3) wait_bar_pane_cp05

0xc87f,	// (0x000585f5) main_mobtv_loading_pane_g1_ParamLimits

0xc87f,	// (0x000585f5) main_mobtv_loading_pane_g1

0xc88d,	// (0x00058603) main_mobtv_loading_pane_g2_ParamLimits

0xc88d,	// (0x00058603) main_mobtv_loading_pane_g2

0xc899,	// (0x0005860f) main_mobtv_loading_pane_g3_ParamLimits

0xc899,	// (0x0005860f) main_mobtv_loading_pane_g3

0x0002,

0xfc66,	// (0x0005b9dc) main_mobtv_loading_pane_g_ParamLimits

0xfc66,	// (0x0005b9dc) main_mobtv_loading_pane_g

0xecc2,	// (0x0005aa38) main_mobtv_loading_pane_t1_ParamLimits

0xecc2,	// (0x0005aa38) main_mobtv_loading_pane_t1

0xecda,	// (0x0005aa50) main_mobtv_loading_pane_t2_ParamLimits

0xecda,	// (0x0005aa50) main_mobtv_loading_pane_t2

0x0001,

0xfc6d,	// (0x0005b9e3) main_mobtv_loading_pane_t_ParamLimits

0xfc6d,	// (0x0005b9e3) main_mobtv_loading_pane_t

0xc8a7,	// (0x0005861d) wait_bar_pane_cp06_ParamLimits

0xc8a7,	// (0x0005861d) wait_bar_pane_cp06

0xecfe,	// (0x0005aa74) main_mobtv_programe_curr_pane_t1

0xed0c,	// (0x0005aa82) main_mobtv_programe_curr_pane_t2

0x0001,

0xfc72,	// (0x0005b9e8) main_mobtv_programe_curr_pane_t

0xed1a,	// (0x0005aa90) main_mobtv_programe_next_pane_t1

0xed28,	// (0x0005aa9e) main_mobtv_programe_next_pane_t2

0xed36,	// (0x0005aaac) main_mobtv_programe_next_pane_t3

0x0002,

0xfc77,	// (0x0005b9ed) main_mobtv_programe_next_pane_t

0x0450,	// (0x0004c1c6) bg_popup_mobtv_noti_window_pane

0xed44,	// (0x0005aaba) popup_mobtv_noti_window_g1

0xed4c,	// (0x0005aac2) popup_mobtv_noti_window_t1

0xed5a,	// (0x0005aad0) popup_mobtv_noti_window_t2

0x0001,

0xfc7e,	// (0x0005b9f4) popup_mobtv_noti_window_t

0x462c,	// (0x000503a2) bg_popup_mobtv_noti_window_pane_g1

0x0450,	// (0x0004c1c6) sc_clock_pane

0x0450,	// (0x0004c1c6) main_fs_bigclock_pane

0xbf92,	// (0x00057d08) blid2_tripm_pane_t4_ParamLimits

0xbf92,	// (0x00057d08) blid2_tripm_pane_t4

0xc8b3,	// (0x00058629) sc_clock_pane_g1_ParamLimits

0xc8b3,	// (0x00058629) sc_clock_pane_g1

0xc8c1,	// (0x00058637) sc_clock_pane_t1_ParamLimits

0xc8c1,	// (0x00058637) sc_clock_pane_t1

0xc8d4,	// (0x0005864a) sc_clock_pane_t2_ParamLimits

0xc8d4,	// (0x0005864a) sc_clock_pane_t2

0xc8e6,	// (0x0005865c) sc_clock_pane_t3_ParamLimits

0xc8e6,	// (0x0005865c) sc_clock_pane_t3

0x0004,

0xfc83,	// (0x0005b9f9) sc_clock_pane_t_ParamLimits

0xfc83,	// (0x0005b9f9) sc_clock_pane_t

0xd61d,	// (0x00059393) main_fs_bigclock_indicator_pane_ParamLimits

0xd61d,	// (0x00059393) main_fs_bigclock_indicator_pane

0xc96e,	// (0x000586e4) main_fs_bigclock_pane_g1_ParamLimits

0xc96e,	// (0x000586e4) main_fs_bigclock_pane_g1

0xd629,	// (0x0005939f) main_fs_bigclock_pane_t1_ParamLimits

0xd629,	// (0x0005939f) main_fs_bigclock_pane_t1

0xd63b,	// (0x000593b1) main_fs_bigclock_pane_t2_ParamLimits

0xd63b,	// (0x000593b1) main_fs_bigclock_pane_t2

0xd64d,	// (0x000593c3) main_fs_bigclock_pane_t3_ParamLimits

0xd64d,	// (0x000593c3) main_fs_bigclock_pane_t3

0x0002,

0xfe82,	// (0x0005bbf8) main_fs_bigclock_pane_t_ParamLimits

0xfe82,	// (0x0005bbf8) main_fs_bigclock_pane_t

0x1788,	// (0x0004d4fe) main_fs_bigclock_indicator_pane_g1

0xea1c,	// (0x0005a792) ncim_query_content_pane_g2_ParamLimits

0xea1c,	// (0x0005a792) ncim_query_content_pane_g2

0x0001,

0xfc10,	// (0x0005b986) ncim_query_content_pane_g_ParamLimits

0xfc10,	// (0x0005b986) ncim_query_content_pane_g

0xc8fa,	// (0x00058670) sc_clock_pane_t4_ParamLimits

0xc8fa,	// (0x00058670) sc_clock_pane_t4

0x3675,	// (0x0004f3eb) main_radioblah_pane

0xdf9d,	// (0x00059d13) cell_call4_button_pane_t1_copy1_ParamLimits

0xdf9d,	// (0x00059d13) cell_call4_button_pane_t1_copy1

0xc59c,	// (0x00058312) main_ncimui_pane_t1_ParamLimits

0xc59c,	// (0x00058312) main_ncimui_pane_t1

0xc5b6,	// (0x0005832c) main_ncimui_pane_t2_ParamLimits

0xc5b6,	// (0x0005832c) main_ncimui_pane_t2

0x0002,

0xfc09,	// (0x0005b97f) main_ncimui_pane_t_ParamLimits

0xfc09,	// (0x0005b97f) main_ncimui_pane_t

0xee8a,	// (0x0005ac00) main_radioblah_anim_pane_ParamLimits

0xee8a,	// (0x0005ac00) main_radioblah_anim_pane

0xee9b,	// (0x0005ac11) main_radioblah_info_pane_ParamLimits

0xee9b,	// (0x0005ac11) main_radioblah_info_pane

0xeeaf,	// (0x0005ac25) main_radioblah_pane_t1_ParamLimits

0xeeaf,	// (0x0005ac25) main_radioblah_pane_t1

0xeecb,	// (0x0005ac41) main_radioblah_pane_t2_ParamLimits

0xeecb,	// (0x0005ac41) main_radioblah_pane_t2

0x0003,

0xfca4,	// (0x0005ba1a) main_radioblah_pane_t_ParamLimits

0xfca4,	// (0x0005ba1a) main_radioblah_pane_t

0xc9c0,	// (0x00058736) main_radioblah_rocker_ctrl_pane_ParamLimits

0xc9c0,	// (0x00058736) main_radioblah_rocker_ctrl_pane

0xef13,	// (0x0005ac89) main_radioblah_info_pane_t1_ParamLimits

0xef13,	// (0x0005ac89) main_radioblah_info_pane_t1

0xca05,	// (0x0005877b) main_radioblah_info_pane_t2_ParamLimits

0xca05,	// (0x0005877b) main_radioblah_info_pane_t2

0x0003,

0xfcad,	// (0x0005ba23) main_radioblah_info_pane_t_ParamLimits

0xfcad,	// (0x0005ba23) main_radioblah_info_pane_t

0x462c,	// (0x000503a2) main_radioblah_rocker_ctrl_pane_g1

0xcab5,	// (0x0005882b) main_radioblah_rocker_ctrl_pane_g2

0xcabd,	// (0x00058833) main_radioblah_rocker_ctrl_pane_g3

0xcac5,	// (0x0005883b) main_radioblah_rocker_ctrl_pane_g4

0xcacd,	// (0x00058843) main_radioblah_rocker_ctrl_pane_g5

0xcad5,	// (0x0005884b) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfcb6,	// (0x0005ba2c) main_radioblah_rocker_ctrl_pane_g

0xc54e,	// (0x000582c4) main_cset_text2_pane_t1_copy1_ParamLimits

0xabbf,	// (0x00056935) cam4_image_uncrop_qvga_pane

0xad14,	// (0x00056a8a) vid4_image_uncrop_qcif_pane

0xc120,	// (0x00057e96) cam6_image_uncrop_qvga_pane_ParamLimits

0xc120,	// (0x00057e96) cam6_image_uncrop_qvga_pane

0xe72c,	// (0x0005a4a2) vid6_image_uncrop_qcif_pane_ParamLimits

0xe72c,	// (0x0005a4a2) vid6_image_uncrop_qcif_pane

0x0450,	// (0x0004c1c6) bg_popup_preview_window_pane_cp03

0xe9c2,	// (0x0005a738) list_cset_text2_pane

0xe9ca,	// (0x0005a740) main_cset6_text2_pane_g1

0xe9d2,	// (0x0005a748) main_cset6_text2_pane_t1

0xcadd,	// (0x00058853) list_cset_text2_pane_t1_ParamLimits

0xcadd,	// (0x00058853) list_cset_text2_pane_t1

0x3675,	// (0x0004f3eb) main_radioblah_pane_ParamLimits

0xc859,	// (0x000585cf) main_mobtv_info_pane_t3_ParamLimits

0xc859,	// (0x000585cf) main_mobtv_info_pane_t3

0xc9ae,	// (0x00058724) main_radioblah_pane_g1

0xc9d9,	// (0x0005874f) main_radioblah_info_pane_g1

0xca5a,	// (0x000587d0) main_radioblah_info_pane_t3_ParamLimits

0xca5a,	// (0x000587d0) main_radioblah_info_pane_t3

0x78f2,	// (0x00053668) highlight_cell_cale_month_pane_ParamLimits

0x78f2,	// (0x00053668) highlight_cell_cale_month_pane

0x0450,	// (0x0004c1c6) main_phob_fisheye_pane

0x4975,	// (0x000506eb) scroll_pane_cp0031_ParamLimits

0x4975,	// (0x000506eb) scroll_pane_cp0031

0xe83a,	// (0x0005a5b0) wait_bar_pane_cp08_ParamLimits

0xc332,	// (0x000580a8) cset_list_set_pane_copy1_ParamLimits

0xef4d,	// (0x0005acc3) highlight_cell_cale_month_pane_g1

0xcb08,	// (0x0005887e) highlight_cell_cale_month_pane_t1

0xe4dd,	// (0x0005a253) list_gen_pane_cp01

0xe166,	// (0x00059edc) scroll_pane_01

0xcb16,	// (0x0005888c) list_single_double_fisheye_pane

0xcb1f,	// (0x00058895) list_double_fisheye_pane_g1_ParamLimits

0xcb1f,	// (0x00058895) list_double_fisheye_pane_g1

0xcb2b,	// (0x000588a1) list_double_fisheye_pane_g2_ParamLimits

0xcb2b,	// (0x000588a1) list_double_fisheye_pane_g2

0xcb3f,	// (0x000588b5) list_double_fisheye_pane_g3_ParamLimits

0xcb3f,	// (0x000588b5) list_double_fisheye_pane_g3

0x0004,

0xfcc3,	// (0x0005ba39) list_double_fisheye_pane_g_ParamLimits

0xfcc3,	// (0x0005ba39) list_double_fisheye_pane_g

0xcb68,	// (0x000588de) list_double_fisheye_pane_t1_ParamLimits

0xcb68,	// (0x000588de) list_double_fisheye_pane_t1

0xcb83,	// (0x000588f9) list_double_fisheye_pane_t2_ParamLimits

0xcb83,	// (0x000588f9) list_double_fisheye_pane_t2

0x0001,

0xfcce,	// (0x0005ba44) list_double_fisheye_pane_t_ParamLimits

0xfcce,	// (0x0005ba44) list_double_fisheye_pane_t

0x0450,	// (0x0004c1c6) main_call5_pane

0xc920,	// (0x00058696) sc_swipe_pane_ParamLimits

0xc920,	// (0x00058696) sc_swipe_pane

0xcbb1,	// (0x00058927) call5_image_pane_ParamLimits

0xcbb1,	// (0x00058927) call5_image_pane

0xcbc1,	// (0x00058937) call5_swipe_1_pane_ParamLimits

0xcbc1,	// (0x00058937) call5_swipe_1_pane

0xcbcd,	// (0x00058943) call5_swipe_2_pane_ParamLimits

0xcbcd,	// (0x00058943) call5_swipe_2_pane

0xcbe7,	// (0x0005895d) popup_call5_audio_first_window_ParamLimits

0xcbe7,	// (0x0005895d) popup_call5_audio_first_window

0x4893,	// (0x00050609) call5_swipe_1_pane_g1_ParamLimits

0x4893,	// (0x00050609) call5_swipe_1_pane_g1

0xef55,	// (0x0005accb) call5_swipe_1_pane_g2_ParamLimits

0xef55,	// (0x0005accb) call5_swipe_1_pane_g2

0x0001,

0xfcd3,	// (0x0005ba49) call5_swipe_1_pane_g_ParamLimits

0xfcd3,	// (0x0005ba49) call5_swipe_1_pane_g

0xef61,	// (0x0005acd7) call5_swipe_1_pane_t1_ParamLimits

0xef61,	// (0x0005acd7) call5_swipe_1_pane_t1

0x4893,	// (0x00050609) call5_swipe_2_pane_g1_ParamLimits

0x4893,	// (0x00050609) call5_swipe_2_pane_g1

0xef76,	// (0x0005acec) call5_swipe_2_pane_g2_ParamLimits

0xef76,	// (0x0005acec) call5_swipe_2_pane_g2

0x0001,

0xfcd8,	// (0x0005ba4e) call5_swipe_2_pane_g_ParamLimits

0xfcd8,	// (0x0005ba4e) call5_swipe_2_pane_g

0xef82,	// (0x0005acf8) call5_swipe_2_pane_t1_ParamLimits

0xef82,	// (0x0005acf8) call5_swipe_2_pane_t1

0xef97,	// (0x0005ad0d) sc_swipe_pane_g1_ParamLimits

0xef97,	// (0x0005ad0d) sc_swipe_pane_g1

0xefa4,	// (0x0005ad1a) sc_swipe_pane_g2_ParamLimits

0xefa4,	// (0x0005ad1a) sc_swipe_pane_g2

0x0001,

0xfcdd,	// (0x0005ba53) sc_swipe_pane_g_ParamLimits

0xfcdd,	// (0x0005ba53) sc_swipe_pane_g

0xefb0,	// (0x0005ad26) sc_swipe_pane_t1_ParamLimits

0xefb0,	// (0x0005ad26) sc_swipe_pane_t1

0x0450,	// (0x0004c1c6) main_cmail_launcher_pane

0xcbf5,	// (0x0005896b) aid_size_cell_cmail_l_ParamLimits

0xcbf5,	// (0x0005896b) aid_size_cell_cmail_l

0xcc05,	// (0x0005897b) grid_cmail_l_pane_ParamLimits

0xcc05,	// (0x0005897b) grid_cmail_l_pane

0xcc15,	// (0x0005898b) cell_cmail_l_pane_ParamLimits

0xcc15,	// (0x0005898b) cell_cmail_l_pane

0xcc29,	// (0x0005899f) cell_cmail_l_pane_g1_ParamLimits

0xcc29,	// (0x0005899f) cell_cmail_l_pane_g1

0xcc35,	// (0x000589ab) cell_cmail_l_pane_t1_ParamLimits

0xcc35,	// (0x000589ab) cell_cmail_l_pane_t1

0xefc5,	// (0x0005ad3b) cell_cmail_l_pane_t2_ParamLimits

0xefc5,	// (0x0005ad3b) cell_cmail_l_pane_t2

0x0001,

0xfce2,	// (0x0005ba58) cell_cmail_l_pane_t_ParamLimits

0xfce2,	// (0x0005ba58) cell_cmail_l_pane_t

0x3675,	// (0x0004f3eb) grid_highlight_pane_cp018_ParamLimits

0x3675,	// (0x0004f3eb) grid_highlight_pane_cp018

0x5c30,	// (0x000519a6) main2_pane_ParamLimits

0x5c30,	// (0x000519a6) main2_pane

0x23b1,	// (0x0004e127) popup_sp_fs_action_menu_bg_pane_g1

0x23b9,	// (0x0004e12f) popup_sp_fs_action_menu_bg_pane_g2

0x23c1,	// (0x0004e137) popup_sp_fs_action_menu_bg_pane_g3

0x23c9,	// (0x0004e13f) popup_sp_fs_action_menu_bg_pane_g4

0x23d1,	// (0x0004e147) popup_sp_fs_action_menu_bg_pane_g5

0x23d9,	// (0x0004e14f) popup_sp_fs_action_menu_bg_pane_g6

0x23e1,	// (0x0004e157) popup_sp_fs_action_menu_bg_pane_g7

0x23e9,	// (0x0004e15f) popup_sp_fs_action_menu_bg_pane_g8

0x23f1,	// (0x0004e167) popup_sp_fs_action_menu_bg_pane_g9

0x23f9,	// (0x0004e16f) popup_sp_fs_action_menu_bg_pane_g10

0x23f9,	// (0x0004e16f) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf1ac,	// (0x0005af22) popup_sp_fs_action_menu_bg_pane_g

0x05bc,	// (0x0004c332) list_medium_line_x2_t3_g3_g1_ParamLimits

0x05bc,	// (0x0004c332) list_medium_line_x2_t3_g3_g1

0x05c8,	// (0x0004c33e) list_medium_line_x2_t3_g3_g2_ParamLimits

0x05c8,	// (0x0004c33e) list_medium_line_x2_t3_g3_g2

0x05d4,	// (0x0004c34a) list_medium_line_x2_t3_g3_g3_ParamLimits

0x05d4,	// (0x0004c34a) list_medium_line_x2_t3_g3_g3

0x0002,

0xf25c,	// (0x0005afd2) list_medium_line_x2_t3_g3_g_ParamLimits

0xf25c,	// (0x0005afd2) list_medium_line_x2_t3_g3_g

0x05e0,	// (0x0004c356) list_medium_line_x2_t3_g3_t1_ParamLimits

0x05e0,	// (0x0004c356) list_medium_line_x2_t3_g3_t1

0x6a13,	// (0x00052789) list_medium_line_x2_t3_g3_t2_ParamLimits

0x6a13,	// (0x00052789) list_medium_line_x2_t3_g3_t2

0x05f5,	// (0x0004c36b) list_medium_line_x2_t3_g3_t3_ParamLimits

0x05f5,	// (0x0004c36b) list_medium_line_x2_t3_g3_t3

0x0002,

0xf263,	// (0x0005afd9) list_medium_line_x2_t3_g3_t_ParamLimits

0xf263,	// (0x0005afd9) list_medium_line_x2_t3_g3_t

0x05bc,	// (0x0004c332) list_medium_line_x2_t3_g2_g1_ParamLimits

0x05bc,	// (0x0004c332) list_medium_line_x2_t3_g2_g1

0x05d4,	// (0x0004c34a) list_medium_line_x2_t3_g2_g2_ParamLimits

0x05d4,	// (0x0004c34a) list_medium_line_x2_t3_g2_g2

0x0001,

0xf26a,	// (0x0005afe0) list_medium_line_x2_t3_g2_g_ParamLimits

0xf26a,	// (0x0005afe0) list_medium_line_x2_t3_g2_g

0x060a,	// (0x0004c380) list_medium_line_x2_t3_g2_t1_ParamLimits

0x060a,	// (0x0004c380) list_medium_line_x2_t3_g2_t1

0x0620,	// (0x0004c396) list_medium_line_x2_t3_g2_t2_ParamLimits

0x0620,	// (0x0004c396) list_medium_line_x2_t3_g2_t2

0x05f5,	// (0x0004c36b) list_medium_line_x2_t3_g2_t3_ParamLimits

0x05f5,	// (0x0004c36b) list_medium_line_x2_t3_g2_t3

0x0002,

0xf26f,	// (0x0005afe5) list_medium_line_x2_t3_g2_t_ParamLimits

0xf26f,	// (0x0005afe5) list_medium_line_x2_t3_g2_t

0x05bc,	// (0x0004c332) list_medium_line_x2_t4_g4_g1_ParamLimits

0x05bc,	// (0x0004c332) list_medium_line_x2_t4_g4_g1

0x0632,	// (0x0004c3a8) list_medium_line_x2_t4_g4_g2_ParamLimits

0x0632,	// (0x0004c3a8) list_medium_line_x2_t4_g4_g2

0x05c8,	// (0x0004c33e) list_medium_line_x2_t4_g4_g3_ParamLimits

0x05c8,	// (0x0004c33e) list_medium_line_x2_t4_g4_g3

0x063e,	// (0x0004c3b4) list_medium_line_x2_t4_g4_g4_ParamLimits

0x063e,	// (0x0004c3b4) list_medium_line_x2_t4_g4_g4

0x0003,

0xf276,	// (0x0005afec) list_medium_line_x2_t4_g4_g_ParamLimits

0xf276,	// (0x0005afec) list_medium_line_x2_t4_g4_g

0x6a27,	// (0x0005279d) list_medium_line_x2_t4_g4_t1_ParamLimits

0x6a27,	// (0x0005279d) list_medium_line_x2_t4_g4_t1

0x6a3e,	// (0x000527b4) list_medium_line_x2_t4_g4_t2_ParamLimits

0x6a3e,	// (0x000527b4) list_medium_line_x2_t4_g4_t2

0x6a53,	// (0x000527c9) list_medium_line_x2_t4_g4_t3_ParamLimits

0x6a53,	// (0x000527c9) list_medium_line_x2_t4_g4_t3

0x064a,	// (0x0004c3c0) list_medium_line_x2_t4_g4_t4_ParamLimits

0x064a,	// (0x0004c3c0) list_medium_line_x2_t4_g4_t4

0x0003,

0xf27f,	// (0x0005aff5) list_medium_line_x2_t4_g4_t_ParamLimits

0xf27f,	// (0x0005aff5) list_medium_line_x2_t4_g4_t

0x05bc,	// (0x0004c332) list_medium_line_x2_t2_g4_g1_ParamLimits

0x05bc,	// (0x0004c332) list_medium_line_x2_t2_g4_g1

0x0632,	// (0x0004c3a8) list_medium_line_x2_t2_g4_g2_ParamLimits

0x0632,	// (0x0004c3a8) list_medium_line_x2_t2_g4_g2

0x05c8,	// (0x0004c33e) list_medium_line_x2_t2_g4_g3_ParamLimits

0x05c8,	// (0x0004c33e) list_medium_line_x2_t2_g4_g3

0x05d4,	// (0x0004c34a) list_medium_line_x2_t2_g4_g4_ParamLimits

0x05d4,	// (0x0004c34a) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2e6,	// (0x0005b05c) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2e6,	// (0x0005b05c) list_medium_line_x2_t2_g4_g

0x065c,	// (0x0004c3d2) list_medium_line_x2_t2_g4_t1_ParamLimits

0x065c,	// (0x0004c3d2) list_medium_line_x2_t2_g4_t1

0x05f5,	// (0x0004c36b) list_medium_line_x2_t2_g4_t2_ParamLimits

0x05f5,	// (0x0004c36b) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2ef,	// (0x0005b065) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2ef,	// (0x0005b065) list_medium_line_x2_t2_g4_t

0x05bc,	// (0x0004c332) list_medium_line_x2_t2_g3_g1_ParamLimits

0x05bc,	// (0x0004c332) list_medium_line_x2_t2_g3_g1

0x05c8,	// (0x0004c33e) list_medium_line_x2_t2_g3_g2_ParamLimits

0x05c8,	// (0x0004c33e) list_medium_line_x2_t2_g3_g2

0x05d4,	// (0x0004c34a) list_medium_line_x2_t2_g3_g3_ParamLimits

0x05d4,	// (0x0004c34a) list_medium_line_x2_t2_g3_g3

0x0002,

0xf25c,	// (0x0005afd2) list_medium_line_x2_t2_g3_g_ParamLimits

0xf25c,	// (0x0005afd2) list_medium_line_x2_t2_g3_g

0x0671,	// (0x0004c3e7) list_medium_line_x2_t2_g3_t1_ParamLimits

0x0671,	// (0x0004c3e7) list_medium_line_x2_t2_g3_t1

0x05f5,	// (0x0004c36b) list_medium_line_x2_t2_g3_t2_ParamLimits

0x05f5,	// (0x0004c36b) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2f4,	// (0x0005b06a) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2f4,	// (0x0005b06a) list_medium_line_x2_t2_g3_t

0x7b6e,	// (0x000538e4) main_sp_fs_list_pane_ParamLimits

0x7b6e,	// (0x000538e4) main_sp_fs_list_pane

0x7b7a,	// (0x000538f0) sp_fs_scroll_pane_ParamLimits

0x7b7a,	// (0x000538f0) sp_fs_scroll_pane

0x7b86,	// (0x000538fc) list_medium_line_x2_t3_t1

0x7b96,	// (0x0005390c) list_medium_line_x2_t3_t2

0x06b4,	// (0x0004c42a) list_medium_line_x2_t3_t3

0x0002,

0xf33f,	// (0x0005b0b5) list_medium_line_x2_t3_t

0x7ba4,	// (0x0005391a) list_medium_line_x3_t4_t1

0x7bb4,	// (0x0005392a) list_medium_line_x3_t4_t2

0x06c2,	// (0x0004c438) list_medium_line_x3_t4_t3

0x06b4,	// (0x0004c42a) list_medium_line_x3_t4_t4

0x0003,

0xf346,	// (0x0005b0bc) list_medium_line_x3_t4_t

0x7bc2,	// (0x00053938) list_medium_line_x4_t5_t1

0x7bd2,	// (0x00053948) list_medium_line_x4_t5_t2

0x06c2,	// (0x0004c438) list_medium_line_x4_t5_t3

0x06d0,	// (0x0004c446) list_medium_line_x4_t5_t4

0x06b4,	// (0x0004c42a) list_medium_line_x4_t5_t5

0x0004,

0xf34f,	// (0x0005b0c5) list_medium_line_x4_t5_t

0x05bc,	// (0x0004c332) list_medium_line_t4_g4_g1_ParamLimits

0x05bc,	// (0x0004c332) list_medium_line_t4_g4_g1

0x063e,	// (0x0004c3b4) list_medium_line_t4_g4_g2_ParamLimits

0x063e,	// (0x0004c3b4) list_medium_line_t4_g4_g2

0x06de,	// (0x0004c454) list_medium_line_t4_g4_g3_ParamLimits

0x06de,	// (0x0004c454) list_medium_line_t4_g4_g3

0x05d4,	// (0x0004c34a) list_medium_line_t4_g4_g4_ParamLimits

0x05d4,	// (0x0004c34a) list_medium_line_t4_g4_g4

0x0003,

0xf35a,	// (0x0005b0d0) list_medium_line_t4_g4_g_ParamLimits

0xf35a,	// (0x0005b0d0) list_medium_line_t4_g4_g

0x06ea,	// (0x0004c460) list_medium_line_t4_g4_t1_ParamLimits

0x06ea,	// (0x0004c460) list_medium_line_t4_g4_t1

0x06ff,	// (0x0004c475) list_medium_line_t4_g4_t2_ParamLimits

0x06ff,	// (0x0004c475) list_medium_line_t4_g4_t2

0x0714,	// (0x0004c48a) list_medium_line_t4_g4_t3_ParamLimits

0x0714,	// (0x0004c48a) list_medium_line_t4_g4_t3

0x05f5,	// (0x0004c36b) list_medium_line_t4_g4_t4_ParamLimits

0x05f5,	// (0x0004c36b) list_medium_line_t4_g4_t4

0x0003,

0xf363,	// (0x0005b0d9) list_medium_line_t4_g4_t_ParamLimits

0xf363,	// (0x0005b0d9) list_medium_line_t4_g4_t

0x7cc7,	// (0x00053a3d) chi_dic_find_pane_g1

0x8d25,	// (0x00054a9b) main_tport_pane

0x0c70,	// (0x0004c9e6) list_medium_line_plain_t1

0x0cba,	// (0x0004ca30) list_medium_line_t2_g2_g1_ParamLimits

0x0cba,	// (0x0004ca30) list_medium_line_t2_g2_g1

0x0cc6,	// (0x0004ca3c) list_medium_line_t2_g2_g2_ParamLimits

0x0cc6,	// (0x0004ca3c) list_medium_line_t2_g2_g2

0x0001,

0xfa1f,	// (0x0005b795) list_medium_line_t2_g2_g_ParamLimits

0xfa1f,	// (0x0005b795) list_medium_line_t2_g2_g

0xb7a7,	// (0x0005751d) list_medium_line_t2_g2_t1_ParamLimits

0xb7a7,	// (0x0005751d) list_medium_line_t2_g2_t1

0xb7c1,	// (0x00057537) list_medium_line_t2_g2_t2_ParamLimits

0xb7c1,	// (0x00057537) list_medium_line_t2_g2_t2

0x0001,

0xfa24,	// (0x0005b79a) list_medium_line_t2_g2_t_ParamLimits

0xfa24,	// (0x0005b79a) list_medium_line_t2_g2_t

0x0df2,	// (0x0004cb68) aid_sp_fs_list_icon_a_sm

0x0dfa,	// (0x0004cb70) aid_sp_fs_list_icon_d

0x0e02,	// (0x0004cb78) aid_sp_fs_text_primary

0x0e0b,	// (0x0004cb81) aid_sp_fs_text_secondary

0x3a4a,	// (0x0004f7c0) list_medium_line

0x3a4a,	// (0x0004f7c0) list_medium_line_g2

0x3a4a,	// (0x0004f7c0) list_medium_line_g3

0x3a4a,	// (0x0004f7c0) list_medium_line_plain

0x3a4a,	// (0x0004f7c0) list_medium_line_plain_t2

0x3a4a,	// (0x0004f7c0) list_medium_line_plain_t3

0x3a4a,	// (0x0004f7c0) list_medium_line_right_icon

0x3a4a,	// (0x0004f7c0) list_medium_line_right_iconx2

0x3a4a,	// (0x0004f7c0) list_medium_line_t2

0x3a4a,	// (0x0004f7c0) list_medium_line_t2_g2

0x3a4a,	// (0x0004f7c0) list_medium_line_t2_g3

0x3a4a,	// (0x0004f7c0) list_medium_line_t2_right_icon

0x3a4a,	// (0x0004f7c0) list_medium_line_t2_right_iconx2

0x3a4a,	// (0x0004f7c0) list_medium_line_t3

0x3a4a,	// (0x0004f7c0) list_medium_line_t3_g2

0x3a4a,	// (0x0004f7c0) list_medium_line_t3_g3

0x3a4a,	// (0x0004f7c0) list_medium_line_t3_right_iconx2

0x0e14,	// (0x0004cb8a) list_medium_line_t4_g4

0x0e1d,	// (0x0004cb93) list_medium_line_x2

0x0e1d,	// (0x0004cb93) list_medium_line_x2_t2_g2

0x0e1d,	// (0x0004cb93) list_medium_line_x2_t2_g3

0x0e1d,	// (0x0004cb93) list_medium_line_x2_t2_g4

0x0e1d,	// (0x0004cb93) list_medium_line_x2_t3

0x0e1d,	// (0x0004cb93) list_medium_line_x2_t3_g2

0x0e1d,	// (0x0004cb93) list_medium_line_x2_t3_g3

0x0e1d,	// (0x0004cb93) list_medium_line_x2_t3_g4

0x0e1d,	// (0x0004cb93) list_medium_line_x2_t4_g2

0x0e1d,	// (0x0004cb93) list_medium_line_x2_t4_g4

0x0e26,	// (0x0004cb9c) list_medium_line_x3

0x0e26,	// (0x0004cb9c) list_medium_line_x3_t4

0x0e26,	// (0x0004cb9c) list_medium_line_x3_t4_g4

0x0e14,	// (0x0004cb8a) list_medium_line_x4_t4

0x0e14,	// (0x0004cb8a) list_medium_line_x4_t4_g7

0x0e14,	// (0x0004cb8a) list_medium_line_x4_t5

0x0e2f,	// (0x0004cba5) list_single_fs_dyc_pane_ParamLimits

0x0e2f,	// (0x0004cba5) list_single_fs_dyc_pane

0x05bc,	// (0x0004c332) list_medium_line_x4_t4_g7_g1_ParamLimits

0x05bc,	// (0x0004c332) list_medium_line_x4_t4_g7_g1

0x0e60,	// (0x0004cbd6) list_medium_line_x4_t4_g7_g2_ParamLimits

0x0e60,	// (0x0004cbd6) list_medium_line_x4_t4_g7_g2

0x0e6c,	// (0x0004cbe2) list_medium_line_x4_t4_g7_g3_ParamLimits

0x0e6c,	// (0x0004cbe2) list_medium_line_x4_t4_g7_g3

0x0e7b,	// (0x0004cbf1) list_medium_line_x4_t4_g7_g4_ParamLimits

0x0e7b,	// (0x0004cbf1) list_medium_line_x4_t4_g7_g4

0x0e87,	// (0x0004cbfd) list_medium_line_x4_t4_g7_g5_ParamLimits

0x0e87,	// (0x0004cbfd) list_medium_line_x4_t4_g7_g5

0x0e96,	// (0x0004cc0c) list_medium_line_x4_t4_g7_g6_ParamLimits

0x0e96,	// (0x0004cc0c) list_medium_line_x4_t4_g7_g6

0x0ea5,	// (0x0004cc1b) list_medium_line_x4_t4_g7_g7_ParamLimits

0x0ea5,	// (0x0004cc1b) list_medium_line_x4_t4_g7_g7

0x0006,

0xfbef,	// (0x0005b965) list_medium_line_x4_t4_g7_g_ParamLimits

0xfbef,	// (0x0005b965) list_medium_line_x4_t4_g7_g

0x0eb1,	// (0x0004cc27) list_medium_line_x4_t4_g7_t1_ParamLimits

0x0eb1,	// (0x0004cc27) list_medium_line_x4_t4_g7_t1

0x0ec6,	// (0x0004cc3c) list_medium_line_x4_t4_g7_t2_ParamLimits

0x0ec6,	// (0x0004cc3c) list_medium_line_x4_t4_g7_t2

0x0edb,	// (0x0004cc51) list_medium_line_x4_t4_g7_t3_ParamLimits

0x0edb,	// (0x0004cc51) list_medium_line_x4_t4_g7_t3

0x0ef0,	// (0x0004cc66) list_medium_line_x4_t4_g7_t4_ParamLimits

0x0ef0,	// (0x0004cc66) list_medium_line_x4_t4_g7_t4

0x0f02,	// (0x0004cc78) list_medium_line_x4_t4_g7_t5_ParamLimits

0x0f02,	// (0x0004cc78) list_medium_line_x4_t4_g7_t5

0x0004,

0xfbfe,	// (0x0005b974) list_medium_line_x4_t4_g7_t_ParamLimits

0xfbfe,	// (0x0005b974) list_medium_line_x4_t4_g7_t

0x0f14,	// (0x0004cc8a) list_single_dyc_row_pane_ParamLimits

0x0f14,	// (0x0004cc8a) list_single_dyc_row_pane

0xcba5,	// (0x0005891b) call5_gesture_pane_ParamLimits

0xcba5,	// (0x0005891b) call5_gesture_pane

0xcbd9,	// (0x0005894f) call5_windows_pane_ParamLimits

0xcbd9,	// (0x0005894f) call5_windows_pane

0xcc4b,	// (0x000589c1) call5_swipe_1_pane_cp_ParamLimits

0xcc4b,	// (0x000589c1) call5_swipe_1_pane_cp

0xcc57,	// (0x000589cd) call5_swipe_2_pane_cp_ParamLimits

0xcc57,	// (0x000589cd) call5_swipe_2_pane_cp

0x2d8e,	// (0x0004eb04) call5_image_pane_cp

0xcc63,	// (0x000589d9) popup_call5_audio_first_window_cp_ParamLimits

0xcc63,	// (0x000589d9) popup_call5_audio_first_window_cp

0xef97,	// (0x0005ad0d) call5_swipe_1_pane_g1_cp_ParamLimits

0xef97,	// (0x0005ad0d) call5_swipe_1_pane_g1_cp

0xefd7,	// (0x0005ad4d) call5_swipe_1_pane_g2_cp

0xefb0,	// (0x0005ad26) call5_swipe_1_pane_t1_cp_ParamLimits

0xefb0,	// (0x0005ad26) call5_swipe_1_pane_t1_cp

0xef97,	// (0x0005ad0d) call5_swipe_2_pane_g1_cp_ParamLimits

0xef97,	// (0x0005ad0d) call5_swipe_2_pane_g1_cp

0xefdf,	// (0x0005ad55) call5_swipe_2_pane_g2_cp

0xefe7,	// (0x0005ad5d) call5_swipe_2_pane_t1_cp_ParamLimits

0xefe7,	// (0x0005ad5d) call5_swipe_2_pane_t1_cp

0x3675,	// (0x0004f3eb) main_sp_fs_email_pane

0xeffc,	// (0x0005ad72) main_sp_fs_listscroll_pane_te

0x0f31,	// (0x0004cca7) popup_sp_fs_action_menu_pane_ParamLimits

0x0f31,	// (0x0004cca7) popup_sp_fs_action_menu_pane

0x462c,	// (0x000503a2) bg_sp_fs_ctrlbar_pane_g1

0xf005,	// (0x0005ad7b) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xf00e,	// (0x0005ad84) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xf017,	// (0x0005ad8d) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0x462c,	// (0x000503a2) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfce7,	// (0x0005ba5d) bg_sp_fs_ctrlbar_ddmenu_pane_g

0x4407,	// (0x0005017d) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0x4407,	// (0x0005017d) bg_sp_fs_ctrlbar_ddmenu_pane

0xf020,	// (0x0005ad96) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xf020,	// (0x0005ad96) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xf02c,	// (0x0005ada2) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xf02c,	// (0x0005ada2) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfcf0,	// (0x0005ba66) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfcf0,	// (0x0005ba66) main_sp_fs_ctrlbar_ddmenu_pane_g

0xf038,	// (0x0005adae) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xf038,	// (0x0005adae) main_sp_fs_ctrlbar_ddmenu_pane_t1

0x0f71,	// (0x0004cce7) list_medium_line_t2_right_icon_g1

0xcc6f,	// (0x000589e5) list_medium_line_t2_right_icon_t1

0xcc7f,	// (0x000589f5) list_medium_line_t2_right_icon_t2

0x0001,

0xfcf5,	// (0x0005ba6b) list_medium_line_t2_right_icon_t

0x41db,	// (0x0004ff51) bg_sp_fs_ctrlbar_pane_ParamLimits

0x41db,	// (0x0004ff51) bg_sp_fs_ctrlbar_pane

0xcce4,	// (0x00058a5a) main_sp_fs_ctrlbar_button_pane_cp01

0xccec,	// (0x00058a62) main_sp_fs_ctrlbar_ddmenu_pane

0x377a,	// (0x0004f4f0) main_sp_fs_ctrlbar_pane_g1

0xf08a,	// (0x0005ae00) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfcfa,	// (0x0005ba70) main_sp_fs_ctrlbar_pane_g

0xf096,	// (0x0005ae0c) main_sp_fs_ctrlbar_pane_t1

0xccf6,	// (0x00058a6c) main_sp_fs_ctrlbar_pane

0xcd12,	// (0x00058a88) main_sp_fs_listscroll_pane_te_cp01

0xcd23,	// (0x00058a99) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0xcd23,	// (0x00058a99) popup_sp_fs_action_menu_pane_cp01

0x3675,	// (0x0004f3eb) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0x3675,	// (0x0004f3eb) bg_sp_fs_highlight_list_pane_cp01

0x0f79,	// (0x0004ccef) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0x0f79,	// (0x0004ccef) sp_fs_action_menu_list_gene_pane_g1

0xf0ab,	// (0x0005ae21) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xf0ab,	// (0x0005ae21) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfcff,	// (0x0005ba75) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfcff,	// (0x0005ba75) sp_fs_action_menu_list_gene_pane_g

0x0f88,	// (0x0004ccfe) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0x0f88,	// (0x0004ccfe) sp_fs_action_menu_list_gene_pane_t1

0x0fa0,	// (0x0004cd16) sp_fs_action_menu_list_gene_pane_ParamLimits

0x0fa0,	// (0x0004cd16) sp_fs_action_menu_list_gene_pane

0xf0b8,	// (0x0005ae2e) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xf0b8,	// (0x0005ae2e) popup_sp_fs_action_menu_bg_pane

0x0fbd,	// (0x0004cd33) sp_fs_action_menu_list_pane_ParamLimits

0x0fbd,	// (0x0004cd33) sp_fs_action_menu_list_pane

0xf0c6,	// (0x0005ae3c) sp_fs_scroll_pane_cp01_ParamLimits

0xf0c6,	// (0x0005ae3c) sp_fs_scroll_pane_cp01

0xcd3b,	// (0x00058ab1) list_medium_line_plain_t2_t1

0xcd4b,	// (0x00058ac1) list_medium_line_plain_t2_t2

0x0001,

0xfd04,	// (0x0005ba7a) list_medium_line_plain_t2_t

0xcd59,	// (0x00058acf) list_medium_line_plain_t3_t1

0xcd69,	// (0x00058adf) list_medium_line_plain_t3_t2

0xcd77,	// (0x00058aed) list_medium_line_plain_t3_t3

0x0002,

0xfd09,	// (0x0005ba7f) list_medium_line_plain_t3_t

0x05bc,	// (0x0004c332) list_medium_line_x2_t2_g2_g1_ParamLimits

0x05bc,	// (0x0004c332) list_medium_line_x2_t2_g2_g1

0x05d4,	// (0x0004c34a) list_medium_line_x2_t2_g2_g2_ParamLimits

0x05d4,	// (0x0004c34a) list_medium_line_x2_t2_g2_g2

0x0001,

0xf26a,	// (0x0005afe0) list_medium_line_x2_t2_g2_g_ParamLimits

0xf26a,	// (0x0005afe0) list_medium_line_x2_t2_g2_g

0x06ea,	// (0x0004c460) list_medium_line_x2_t2_g2_t1_ParamLimits

0x06ea,	// (0x0004c460) list_medium_line_x2_t2_g2_t1

0x05f5,	// (0x0004c36b) list_medium_line_x2_t2_g2_t2_ParamLimits

0x05f5,	// (0x0004c36b) list_medium_line_x2_t2_g2_t2

0x0001,

0xfd10,	// (0x0005ba86) list_medium_line_x2_t2_g2_t_ParamLimits

0xfd10,	// (0x0005ba86) list_medium_line_x2_t2_g2_t

0x05bc,	// (0x0004c332) list_medium_line_x2_t4_g2_g1_ParamLimits

0x05bc,	// (0x0004c332) list_medium_line_x2_t4_g2_g1

0x0fdb,	// (0x0004cd51) list_medium_line_x2_t4_g2_g2_ParamLimits

0x0fdb,	// (0x0004cd51) list_medium_line_x2_t4_g2_g2

0x0001,

0xfd15,	// (0x0005ba8b) list_medium_line_x2_t4_g2_g_ParamLimits

0xfd15,	// (0x0005ba8b) list_medium_line_x2_t4_g2_g

0xcd85,	// (0x00058afb) list_medium_line_x2_t4_g2_t1_ParamLimits

0xcd85,	// (0x00058afb) list_medium_line_x2_t4_g2_t1

0xcd9f,	// (0x00058b15) list_medium_line_x2_t4_g2_t2_ParamLimits

0xcd9f,	// (0x00058b15) list_medium_line_x2_t4_g2_t2

0xcdb4,	// (0x00058b2a) list_medium_line_x2_t4_g2_t3_ParamLimits

0xcdb4,	// (0x00058b2a) list_medium_line_x2_t4_g2_t3

0x05f5,	// (0x0004c36b) list_medium_line_x2_t4_g2_t4_ParamLimits

0x05f5,	// (0x0004c36b) list_medium_line_x2_t4_g2_t4

0x0003,

0xfd1a,	// (0x0005ba90) list_medium_line_x2_t4_g2_t_ParamLimits

0xfd1a,	// (0x0005ba90) list_medium_line_x2_t4_g2_t

0x0fed,	// (0x0004cd63) list_medium_line_t3_right_iconx2_g1

0x0f71,	// (0x0004cce7) list_medium_line_t3_right_iconx2_g2

0xcdc9,	// (0x00058b3f) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfd23,	// (0x0005ba99) list_medium_line_t3_right_iconx2_g

0xcdd1,	// (0x00058b47) list_medium_line_t3_right_iconx2_t1

0xcde1,	// (0x00058b57) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfd2a,	// (0x0005baa0) list_medium_line_t3_right_iconx2_t

0x05bc,	// (0x0004c332) list_medium_line_x3_t4_g4_g1_ParamLimits

0x05bc,	// (0x0004c332) list_medium_line_x3_t4_g4_g1

0x05c8,	// (0x0004c33e) list_medium_line_x3_t4_g4_g2_ParamLimits

0x05c8,	// (0x0004c33e) list_medium_line_x3_t4_g4_g2

0x063e,	// (0x0004c3b4) list_medium_line_x3_t4_g4_g3_ParamLimits

0x063e,	// (0x0004c3b4) list_medium_line_x3_t4_g4_g3

0x0ff5,	// (0x0004cd6b) list_medium_line_x3_t4_g4_g4_ParamLimits

0x0ff5,	// (0x0004cd6b) list_medium_line_x3_t4_g4_g4

0x0003,

0xfd2f,	// (0x0005baa5) list_medium_line_x3_t4_g4_g_ParamLimits

0xfd2f,	// (0x0005baa5) list_medium_line_x3_t4_g4_g

0xcdef,	// (0x00058b65) list_medium_line_x3_t4_g4_t1_ParamLimits

0xcdef,	// (0x00058b65) list_medium_line_x3_t4_g4_t1

0xce06,	// (0x00058b7c) list_medium_line_x3_t4_g4_t2_ParamLimits

0xce06,	// (0x00058b7c) list_medium_line_x3_t4_g4_t2

0x06ff,	// (0x0004c475) list_medium_line_x3_t4_g4_t3_ParamLimits

0x06ff,	// (0x0004c475) list_medium_line_x3_t4_g4_t3

0x1001,	// (0x0004cd77) list_medium_line_x3_t4_g4_t4_ParamLimits

0x1001,	// (0x0004cd77) list_medium_line_x3_t4_g4_t4

0x0003,

0xfd38,	// (0x0005baae) list_medium_line_x3_t4_g4_t_ParamLimits

0xfd38,	// (0x0005baae) list_medium_line_x3_t4_g4_t

0xce1b,	// (0x00058b91) list_single_dyc_row_text_pane_t1_ParamLimits

0xce1b,	// (0x00058b91) list_single_dyc_row_text_pane_t1

0xce52,	// (0x00058bc8) list_single_dyc_row_text_pane_t2_ParamLimits

0xce52,	// (0x00058bc8) list_single_dyc_row_text_pane_t2

0x101e,	// (0x0004cd94) list_single_dyc_row_text_pane_t3_ParamLimits

0x101e,	// (0x0004cd94) list_single_dyc_row_text_pane_t3

0x0002,

0xfd41,	// (0x0005bab7) list_single_dyc_row_text_pane_t_ParamLimits

0xfd41,	// (0x0005bab7) list_single_dyc_row_text_pane_t

0x1030,	// (0x0004cda6) list_single_dyc_row_pane_g1_ParamLimits

0x1030,	// (0x0004cda6) list_single_dyc_row_pane_g1

0x103c,	// (0x0004cdb2) list_single_dyc_row_pane_g2_ParamLimits

0x103c,	// (0x0004cdb2) list_single_dyc_row_pane_g2

0x1048,	// (0x0004cdbe) list_single_dyc_row_pane_g3_ParamLimits

0x1048,	// (0x0004cdbe) list_single_dyc_row_pane_g3

0x1054,	// (0x0004cdca) list_single_dyc_row_pane_g4_ParamLimits

0x1054,	// (0x0004cdca) list_single_dyc_row_pane_g4

0x0003,

0xfd48,	// (0x0005babe) list_single_dyc_row_pane_g_ParamLimits

0xfd48,	// (0x0005babe) list_single_dyc_row_pane_g

0x1060,	// (0x0004cdd6) list_single_dyc_row_text_pane_ParamLimits

0x1060,	// (0x0004cdd6) list_single_dyc_row_text_pane

0x0450,	// (0x0004c1c6) bg_sp_fs_scroll_pane

0x107f,	// (0x0004cdf5) thumb_sp_fs_scroll_pane

0x0cba,	// (0x0004ca30) list_medium_line_g1_ParamLimits

0x0cba,	// (0x0004ca30) list_medium_line_g1

0x1088,	// (0x0004cdfe) list_medium_line_t1_ParamLimits

0x1088,	// (0x0004cdfe) list_medium_line_t1

0x05bc,	// (0x0004c332) list_medium_line_x2_g1_ParamLimits

0x05bc,	// (0x0004c332) list_medium_line_x2_g1

0x05c8,	// (0x0004c33e) list_medium_line_x2_g2_ParamLimits

0x05c8,	// (0x0004c33e) list_medium_line_x2_g2

0x0001,

0xfd51,	// (0x0005bac7) list_medium_line_x2_g_ParamLimits

0xfd51,	// (0x0005bac7) list_medium_line_x2_g

0x109d,	// (0x0004ce13) list_medium_line_x2_t1_ParamLimits

0x109d,	// (0x0004ce13) list_medium_line_x2_t1

0x05bc,	// (0x0004c332) list_medium_line_x3_g1_ParamLimits

0x05bc,	// (0x0004c332) list_medium_line_x3_g1

0x05c8,	// (0x0004c33e) list_medium_line_x3_g2_ParamLimits

0x05c8,	// (0x0004c33e) list_medium_line_x3_g2

0x0001,

0xfd51,	// (0x0005bac7) list_medium_line_x3_g_ParamLimits

0xfd51,	// (0x0005bac7) list_medium_line_x3_g

0x109d,	// (0x0004ce13) list_medium_line_x3_t1_ParamLimits

0x109d,	// (0x0004ce13) list_medium_line_x3_t1

0x10b3,	// (0x0004ce29) thumb_sp_fs_scroll_pane_g1

0x10bc,	// (0x0004ce32) thumb_sp_fs_scroll_pane_g2

0x10c5,	// (0x0004ce3b) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfd56,	// (0x0005bacc) thumb_sp_fs_scroll_pane_g

0x10b3,	// (0x0004ce29) bg_sp_fs_scroll_pane_g1

0x10bc,	// (0x0004ce32) bg_sp_fs_scroll_pane_g2

0x10c5,	// (0x0004ce3b) bg_sp_fs_scroll_pane_g3

0x0002,

0xfd56,	// (0x0005bacc) bg_sp_fs_scroll_pane_g

0x05bc,	// (0x0004c332) list_medium_line_x2_t3_g4_g1_ParamLimits

0x05bc,	// (0x0004c332) list_medium_line_x2_t3_g4_g1

0x0632,	// (0x0004c3a8) list_medium_line_x2_t3_g4_g2_ParamLimits

0x0632,	// (0x0004c3a8) list_medium_line_x2_t3_g4_g2

0x05c8,	// (0x0004c33e) list_medium_line_x2_t3_g4_g3_ParamLimits

0x05c8,	// (0x0004c33e) list_medium_line_x2_t3_g4_g3

0x05d4,	// (0x0004c34a) list_medium_line_x2_t3_g4_g4_ParamLimits

0x05d4,	// (0x0004c34a) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2e6,	// (0x0005b05c) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2e6,	// (0x0005b05c) list_medium_line_x2_t3_g4_g

0xceac,	// (0x00058c22) list_medium_line_x2_t3_g4_t1_ParamLimits

0xceac,	// (0x00058c22) list_medium_line_x2_t3_g4_t1

0xcec2,	// (0x00058c38) list_medium_line_x2_t3_g4_t2_ParamLimits

0xcec2,	// (0x00058c38) list_medium_line_x2_t3_g4_t2

0x05f5,	// (0x0004c36b) list_medium_line_x2_t3_g4_t3_ParamLimits

0x05f5,	// (0x0004c36b) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd5d,	// (0x0005bad3) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd5d,	// (0x0005bad3) list_medium_line_x2_t3_g4_t

0x0cba,	// (0x0004ca30) list_medium_line_g2_g1_ParamLimits

0x0cba,	// (0x0004ca30) list_medium_line_g2_g1

0x0cc6,	// (0x0004ca3c) list_medium_line_g2_g2_ParamLimits

0x0cc6,	// (0x0004ca3c) list_medium_line_g2_g2

0x0001,

0xfa1f,	// (0x0005b795) list_medium_line_g2_g_ParamLimits

0xfa1f,	// (0x0005b795) list_medium_line_g2_g

0x10ce,	// (0x0004ce44) list_medium_line_g2_t1_ParamLimits

0x10ce,	// (0x0004ce44) list_medium_line_g2_t1

0x0cba,	// (0x0004ca30) list_medium_line_t3_g2_g1_ParamLimits

0x0cba,	// (0x0004ca30) list_medium_line_t3_g2_g1

0x0cc6,	// (0x0004ca3c) list_medium_line_t3_g2_g2_ParamLimits

0x0cc6,	// (0x0004ca3c) list_medium_line_t3_g2_g2

0x0001,

0xfa1f,	// (0x0005b795) list_medium_line_t3_g2_g_ParamLimits

0xfa1f,	// (0x0005b795) list_medium_line_t3_g2_g

0xcedb,	// (0x00058c51) list_medium_line_t3_g2_t1_ParamLimits

0xcedb,	// (0x00058c51) list_medium_line_t3_g2_t1

0xcef5,	// (0x00058c6b) list_medium_line_t3_g2_t2_ParamLimits

0xcef5,	// (0x00058c6b) list_medium_line_t3_g2_t2

0xcf0a,	// (0x00058c80) list_medium_line_t3_g2_t3_ParamLimits

0xcf0a,	// (0x00058c80) list_medium_line_t3_g2_t3

0x0002,

0xfd64,	// (0x0005bada) list_medium_line_t3_g2_t_ParamLimits

0xfd64,	// (0x0005bada) list_medium_line_t3_g2_t

0x0f71,	// (0x0004cce7) list_medium_line_right_icon_g1

0x10e3,	// (0x0004ce59) list_medium_line_right_icon_t1

0x0cba,	// (0x0004ca30) list_medium_line_t2_g1_ParamLimits

0x0cba,	// (0x0004ca30) list_medium_line_t2_g1

0xcf20,	// (0x00058c96) list_medium_line_t2_t1_ParamLimits

0xcf20,	// (0x00058c96) list_medium_line_t2_t1

0xcf37,	// (0x00058cad) list_medium_line_t2_t2_ParamLimits

0xcf37,	// (0x00058cad) list_medium_line_t2_t2

0x0001,

0xfd6b,	// (0x0005bae1) list_medium_line_t2_t_ParamLimits

0xfd6b,	// (0x0005bae1) list_medium_line_t2_t

0x0cba,	// (0x0004ca30) list_medium_line_t3_g1_ParamLimits

0x0cba,	// (0x0004ca30) list_medium_line_t3_g1

0xcf49,	// (0x00058cbf) list_medium_line_t3_t1_ParamLimits

0xcf49,	// (0x00058cbf) list_medium_line_t3_t1

0xcf60,	// (0x00058cd6) list_medium_line_t3_t2_ParamLimits

0xcf60,	// (0x00058cd6) list_medium_line_t3_t2

0xcf75,	// (0x00058ceb) list_medium_line_t3_t3_ParamLimits

0xcf75,	// (0x00058ceb) list_medium_line_t3_t3

0x0002,

0xfd70,	// (0x0005bae6) list_medium_line_t3_t_ParamLimits

0xfd70,	// (0x0005bae6) list_medium_line_t3_t

0x0cba,	// (0x0004ca30) list_medium_line_g3_g1_ParamLimits

0x0cba,	// (0x0004ca30) list_medium_line_g3_g1

0x10f1,	// (0x0004ce67) list_medium_line_g3_g2_ParamLimits

0x10f1,	// (0x0004ce67) list_medium_line_g3_g2

0x0cc6,	// (0x0004ca3c) list_medium_line_g3_g3_ParamLimits

0x0cc6,	// (0x0004ca3c) list_medium_line_g3_g3

0x0002,

0xfd77,	// (0x0005baed) list_medium_line_g3_g_ParamLimits

0xfd77,	// (0x0005baed) list_medium_line_g3_g

0x10fd,	// (0x0004ce73) list_medium_line_g3_t1_ParamLimits

0x10fd,	// (0x0004ce73) list_medium_line_g3_t1

0x0cba,	// (0x0004ca30) list_medium_line_t2_g3_g1_ParamLimits

0x0cba,	// (0x0004ca30) list_medium_line_t2_g3_g1

0x10f1,	// (0x0004ce67) list_medium_line_t2_g3_g2_ParamLimits

0x10f1,	// (0x0004ce67) list_medium_line_t2_g3_g2

0x0cc6,	// (0x0004ca3c) list_medium_line_t2_g3_g3_ParamLimits

0x0cc6,	// (0x0004ca3c) list_medium_line_t2_g3_g3

0x0002,

0xfd77,	// (0x0005baed) list_medium_line_t2_g3_g_ParamLimits

0xfd77,	// (0x0005baed) list_medium_line_t2_g3_g

0xcf87,	// (0x00058cfd) list_medium_line_t2_g3_t1_ParamLimits

0xcf87,	// (0x00058cfd) list_medium_line_t2_g3_t1

0xcfa1,	// (0x00058d17) list_medium_line_t2_g3_t2_ParamLimits

0xcfa1,	// (0x00058d17) list_medium_line_t2_g3_t2

0x0001,

0xfd7e,	// (0x0005baf4) list_medium_line_t2_g3_t_ParamLimits

0xfd7e,	// (0x0005baf4) list_medium_line_t2_g3_t

0x0cba,	// (0x0004ca30) list_medium_line_t3_g3_g1_ParamLimits

0x0cba,	// (0x0004ca30) list_medium_line_t3_g3_g1

0x10f1,	// (0x0004ce67) list_medium_line_t3_g3_g2_ParamLimits

0x10f1,	// (0x0004ce67) list_medium_line_t3_g3_g2

0x0cc6,	// (0x0004ca3c) list_medium_line_t3_g3_g3_ParamLimits

0x0cc6,	// (0x0004ca3c) list_medium_line_t3_g3_g3

0x0002,

0xfd77,	// (0x0005baed) list_medium_line_t3_g3_g_ParamLimits

0xfd77,	// (0x0005baed) list_medium_line_t3_g3_g

0xcfb6,	// (0x00058d2c) list_medium_line_t3_g3_t1_ParamLimits

0xcfb6,	// (0x00058d2c) list_medium_line_t3_g3_t1

0xcfcf,	// (0x00058d45) list_medium_line_t3_g3_t2_ParamLimits

0xcfcf,	// (0x00058d45) list_medium_line_t3_g3_t2

0xcfe5,	// (0x00058d5b) list_medium_line_t3_g3_t3_ParamLimits

0xcfe5,	// (0x00058d5b) list_medium_line_t3_g3_t3

0x0002,

0xfd83,	// (0x0005baf9) list_medium_line_t3_g3_t_ParamLimits

0xfd83,	// (0x0005baf9) list_medium_line_t3_g3_t

0x0fed,	// (0x0004cd63) list_medium_line_right_iconx2_g1

0x0f71,	// (0x0004cce7) list_medium_line_right_iconx2_g2

0x0001,

0xfd8a,	// (0x0005bb00) list_medium_line_right_iconx2_g

0x1112,	// (0x0004ce88) list_medium_line_right_iconx2_t1

0x0fed,	// (0x0004cd63) list_medium_line_t2_right_iconx2_g1

0x0f71,	// (0x0004cce7) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfd8a,	// (0x0005bb00) list_medium_line_t2_right_iconx2_g

0xcffb,	// (0x00058d71) list_medium_line_t2_right_iconx2_t1

0xd00b,	// (0x00058d81) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfd8f,	// (0x0005bb05) list_medium_line_t2_right_iconx2_t

0x1120,	// (0x0004ce96) list_medium_line_x4_t4_t1

0xd019,	// (0x00058d8f) list_medium_line_x4_t4_t2

0xd029,	// (0x00058d9f) list_medium_line_x4_t4_t3

0xd039,	// (0x00058daf) list_medium_line_x4_t4_t4

0x0003,

0xfd94,	// (0x0005bb0a) list_medium_line_x4_t4_t

0xd072,	// (0x00058de8) tport_appsw_pane_ParamLimits

0xd072,	// (0x00058de8) tport_appsw_pane

0xd07e,	// (0x00058df4) tport_contact_pane_ParamLimits

0xd07e,	// (0x00058df4) tport_contact_pane

0xd08e,	// (0x00058e04) tport_listscroll_pane_ParamLimits

0xd08e,	// (0x00058e04) tport_listscroll_pane

0xd09e,	// (0x00058e14) cell_tport_appsw_pane_ParamLimits

0xd09e,	// (0x00058e14) cell_tport_appsw_pane

0x48f8,	// (0x0005066e) tport_appsw_pane_g1_ParamLimits

0x48f8,	// (0x0005066e) tport_appsw_pane_g1

0x112e,	// (0x0004cea4) tport_contact_pane_g1

0x1137,	// (0x0004cead) tport_contact_pane_t1

0x1145,	// (0x0004cebb) tport_contact_pane_t2

0x0001,

0xfd9d,	// (0x0005bb13) tport_contact_pane_t

0x1153,	// (0x0004cec9) list_tport_pane

0x115c,	// (0x0004ced2) scroll_pane_cp_030

0x116d,	// (0x0004cee3) cell_tport_appsw_pane_g1

0x117d,	// (0x0004cef3) cell_tport_appsw_pane_t1

0x0450,	// (0x0004c1c6) grid_highlight_pane_cp019

0xd0c9,	// (0x00058e3f) list_tport_double_graphic_pane_ParamLimits

0xd0c9,	// (0x00058e3f) list_tport_double_graphic_pane

0x3675,	// (0x0004f3eb) list_highlight_pane_cp023_ParamLimits

0x3675,	// (0x0004f3eb) list_highlight_pane_cp023

0xd0dc,	// (0x00058e52) list_tport_double_graphic_pane_g1_ParamLimits

0xd0dc,	// (0x00058e52) list_tport_double_graphic_pane_g1

0xd0e9,	// (0x00058e5f) list_tport_double_graphic_pane_t1_ParamLimits

0xd0e9,	// (0x00058e5f) list_tport_double_graphic_pane_t1

0xd0fe,	// (0x00058e74) list_tport_double_graphic_pane_t2_ParamLimits

0xd0fe,	// (0x00058e74) list_tport_double_graphic_pane_t2

0x0001,

0xfda9,	// (0x0005bb1f) list_tport_double_graphic_pane_t_ParamLimits

0xfda9,	// (0x0005bb1f) list_tport_double_graphic_pane_t

0x0450,	// (0x0004c1c6) main_cale_note_pane

0xaf6d,	// (0x00056ce3) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0xaf6d,	// (0x00056ce3) cell_vitu2_function_top_wide_pane_cp01

0xc86d,	// (0x000585e3) wait_bar_pane_cp05_ParamLimits

0x0450,	// (0x0004c1c6) listscroll_cmail_pane

0x1193,	// (0x0004cf09) list_cmail_pane

0xd11a,	// (0x00058e90) list_cmail_body_pane

0xd13e,	// (0x00058eb4) list_single_cmail_header_caption_pane

0xd16c,	// (0x00058ee2) list_single_cmail_header_detail_pane_ParamLimits

0xd16c,	// (0x00058ee2) list_single_cmail_header_detail_pane

0xd1a4,	// (0x00058f1a) list_single_cmail_header_caption_pane_t1

0xd1b4,	// (0x00058f2a) list_single_cmail_header_detail_pane_g1_ParamLimits

0xd1b4,	// (0x00058f2a) list_single_cmail_header_detail_pane_g1

0x11b3,	// (0x0004cf29) list_single_cmail_header_detail_pane_g2_ParamLimits

0x11b3,	// (0x0004cf29) list_single_cmail_header_detail_pane_g2

0x0002,

0xfdae,	// (0x0005bb24) list_single_cmail_header_detail_pane_g_ParamLimits

0xfdae,	// (0x0005bb24) list_single_cmail_header_detail_pane_g

0x11cc,	// (0x0004cf42) list_single_cmail_header_detail_pane_t1_ParamLimits

0x11cc,	// (0x0004cf42) list_single_cmail_header_detail_pane_t1

0x11fe,	// (0x0004cf74) list_single_cmail_header_editor_pane_bg_ParamLimits

0x11fe,	// (0x0004cf74) list_single_cmail_header_editor_pane_bg

0x1210,	// (0x0004cf86) list_cmail_body_pane_g1

0x1219,	// (0x0004cf8f) list_cmail_body_pane_t1

0xe04c,	// (0x00059dc2) list_single_cmail_header_editor_pane_bg_g1

0x2716,	// (0x0004e48c) list_single_cmail_header_editor_pane_bg_g1_copy1

0xe05c,	// (0x00059dd2) list_single_cmail_header_editor_pane_bg_g1_copy2

0xe054,	// (0x00059dca) list_single_cmail_header_editor_pane_bg_g1_copy3

0xe270,	// (0x00059fe6) list_single_cmail_header_editor_pane_bg_g1_copy4

0xe07c,	// (0x00059df2) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xe06c,	// (0x00059de2) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xe074,	// (0x00059dea) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0x26f6,	// (0x0004e46c) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0xd1f2,	// (0x00058f68) calenote_gesture_pane_ParamLimits

0xd1f2,	// (0x00058f68) calenote_gesture_pane

0xd20c,	// (0x00058f82) calenote_window_pane_ParamLimits

0xd20c,	// (0x00058f82) calenote_window_pane

0x1227,	// (0x0004cf9d) popup_note_window_cp01

0xd224,	// (0x00058f9a) calenote_swipe_1_pane_ParamLimits

0xd224,	// (0x00058f9a) calenote_swipe_1_pane

0xcc57,	// (0x000589cd) calenote_swipe_2_pane_ParamLimits

0xcc57,	// (0x000589cd) calenote_swipe_2_pane

0xef97,	// (0x0005ad0d) calenote_swipe_1_pane_g1_ParamLimits

0xef97,	// (0x0005ad0d) calenote_swipe_1_pane_g1

0xefa4,	// (0x0005ad1a) calenote_swipe_1_pane_g2_ParamLimits

0xefa4,	// (0x0005ad1a) calenote_swipe_1_pane_g2

0x0001,

0xfcdd,	// (0x0005ba53) calenote_swipe_1_pane_g_ParamLimits

0xfcdd,	// (0x0005ba53) calenote_swipe_1_pane_g

0x1239,	// (0x0004cfaf) calenote_swipe_1_pane_t1_ParamLimits

0x1239,	// (0x0004cfaf) calenote_swipe_1_pane_t1

0xef97,	// (0x0005ad0d) calenote_swipe_2_pane_g1_ParamLimits

0xef97,	// (0x0005ad0d) calenote_swipe_2_pane_g1

0x1258,	// (0x0004cfce) calenote_swipe_2_pane_g2_ParamLimits

0x1258,	// (0x0004cfce) calenote_swipe_2_pane_g2

0x0001,

0xfdba,	// (0x0005bb30) calenote_swipe_2_pane_g_ParamLimits

0xfdba,	// (0x0005bb30) calenote_swipe_2_pane_g

0x1264,	// (0x0004cfda) calenote_swipe_2_pane_t1_ParamLimits

0x1264,	// (0x0004cfda) calenote_swipe_2_pane_t1

0x0450,	// (0x0004c1c6) main_mup_navstr_pane

0x9cd4,	// (0x00055a4a) main_mup3_pane_t7_ParamLimits

0x9cd4,	// (0x00055a4a) main_mup3_pane_t7

0xa6d7,	// (0x0005644d) main_mp4_pane_g6_ParamLimits

0xa6d7,	// (0x0005644d) main_mp4_pane_g6

0xaa59,	// (0x000567cf) main_image3_pane_t4_ParamLimits

0xaa59,	// (0x000567cf) main_image3_pane_t4

0xd237,	// (0x00058fad) popup_navstr_preview_pane_ParamLimits

0xd237,	// (0x00058fad) popup_navstr_preview_pane

0xd243,	// (0x00058fb9) scroll_navstr_pane_ParamLimits

0xd243,	// (0x00058fb9) scroll_navstr_pane

0x0450,	// (0x0004c1c6) bg_popup_preview_window_pane_cp04

0x128b,	// (0x0004d001) popup_navstr_preview_pane_t1

0xd24f,	// (0x00058fc5) scroll_navstr_pane_g1_ParamLimits

0xd24f,	// (0x00058fc5) scroll_navstr_pane_g1

0xd25c,	// (0x00058fd2) scroll_navstr_pane_t1_ParamLimits

0xd25c,	// (0x00058fd2) scroll_navstr_pane_t1

0x1230,	// (0x0004cfa6) bg_button_pane_cp014

0x1230,	// (0x0004cfa6) bg_button_pane_cp030

0xcb4b,	// (0x000588c1) list_double_fisheye_pane_g4_ParamLimits

0xcb4b,	// (0x000588c1) list_double_fisheye_pane_g4

0xcb57,	// (0x000588cd) list_double_fisheye_pane_g5_ParamLimits

0xcb57,	// (0x000588cd) list_double_fisheye_pane_g5

0x119b,	// (0x0004cf11) sp_fs_scroll_pane_cp03

0x377a,	// (0x0004f4f0) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xf08a,	// (0x0005ae00) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfcfa,	// (0x0005ba70) main_sp_fs_ctrlbar_pane_g_ParamLimits

0xf096,	// (0x0005ae0c) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xd110,	// (0x00058e86) sp_fs_scroll_pane_cp02

0x241c,	// (0x0004e192) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0x241c,	// (0x0004e192) popup_sp_fs_calendar_preview_list_single_pane

0x0450,	// (0x0004c1c6) main_cam6_pano_pane

0x3675,	// (0x0004f3eb) main_mup3_pane_ParamLimits

0x0450,	// (0x0004c1c6) main_phacti_pane

0xc742,	// (0x000584b8) bg_button_pane_cp11

0xc75a,	// (0x000584d0) main_mobtv_info_pane_g2_ParamLimits

0xc75a,	// (0x000584d0) main_mobtv_info_pane_g2

0x0001,

0xfc5a,	// (0x0005b9d0) main_mobtv_info_pane_g_ParamLimits

0xfc5a,	// (0x0005b9d0) main_mobtv_info_pane_g

0xc90c,	// (0x00058682) sc_clock_pane_t5_ParamLimits

0xc90c,	// (0x00058682) sc_clock_pane_t5

0xc9ae,	// (0x00058724) main_radioblah_pane_g1_ParamLimits

0xeee3,	// (0x0005ac59) main_radioblah_pane_t3_ParamLimits

0xeee3,	// (0x0005ac59) main_radioblah_pane_t3

0xeefb,	// (0x0005ac71) main_radioblah_pane_t4_ParamLimits

0xeefb,	// (0x0005ac71) main_radioblah_pane_t4

0xc9cc,	// (0x00058742) main_radioblah_text_pane_ParamLimits

0xc9cc,	// (0x00058742) main_radioblah_text_pane

0xc9d9,	// (0x0005874f) main_radioblah_info_pane_g1_ParamLimits

0xca6e,	// (0x000587e4) main_radioblah_info_pane_t4_ParamLimits

0xca6e,	// (0x000587e4) main_radioblah_info_pane_t4

0x3675,	// (0x0004f3eb) main_sp_fs_calendar_pane

0xd26e,	// (0x00058fe4) main_phacti_pane_g1

0xd276,	// (0x00058fec) phacti_note_pane_ParamLimits

0xd276,	// (0x00058fec) phacti_note_pane

0x12a2,	// (0x0004d018) phacti_term_pane_ParamLimits

0x12a2,	// (0x0004d018) phacti_term_pane

0x12b7,	// (0x0004d02d) phacti_note_pane_t1_ParamLimits

0x12b7,	// (0x0004d02d) phacti_note_pane_t1

0x12ce,	// (0x0004d044) phacti_term_pane_g1

0x12d6,	// (0x0004d04c) phacti_term_pane_t1_ParamLimits

0x12d6,	// (0x0004d04c) phacti_term_pane_t1

0x1300,	// (0x0004d076) popup_sp_fs_calendar_preview_list_single_pane_g1

0x1308,	// (0x0004d07e) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfdc4,	// (0x0005bb3a) popup_sp_fs_calendar_preview_list_single_pane_g

0x1310,	// (0x0004d086) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0x1310,	// (0x0004d086) popup_sp_fs_calendar_preview_list_single_pane_t1

0x1326,	// (0x0004d09c) aid_popup_sp_fs_bg_corner_pane

0x462c,	// (0x000503a2) popup_sp_fs_calendar_preview_bg_pane_g1

0x0450,	// (0x0004c1c6) popup_sp_fs_calendar_preview_bg_pane

0x132e,	// (0x0004d0a4) popup_sp_fs_calendar_preview_list_pane

0x3675,	// (0x0004f3eb) bg_main_sp_fs_cale_pane_ParamLimits

0x3675,	// (0x0004f3eb) bg_main_sp_fs_cale_pane

0x1336,	// (0x0004d0ac) listscroll_cale_mrui_pane_ParamLimits

0x1336,	// (0x0004d0ac) listscroll_cale_mrui_pane

0x134a,	// (0x0004d0c0) listscroll_sp_fs_schedule_track_pane

0x1353,	// (0x0004d0c9) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0x1353,	// (0x0004d0c9) main_sp_fs_ctrlbar_pane_cp01

0x1364,	// (0x0004d0da) main_sp_fs_ribbon_pane

0x136c,	// (0x0004d0e2) popup_sp_fs_cale_preview_window

0xd2b9,	// (0x0005902f) list_single_sp_fs_schedule_track_pane_ParamLimits

0xd2b9,	// (0x0005902f) list_single_sp_fs_schedule_track_pane

0x0beb,	// (0x0004c961) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0x0beb,	// (0x0004c961) bg_sp_fs_highlight_list_pane_cp03

0xd2db,	// (0x00059051) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0xd2db,	// (0x00059051) list_single_sp_fs_schedule_track_pane_g1

0xd2e7,	// (0x0005905d) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0xd2e7,	// (0x0005905d) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfdc9,	// (0x0005bb3f) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfdc9,	// (0x0005bb3f) list_single_sp_fs_schedule_track_pane_g

0xd2f3,	// (0x00059069) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0xd2f3,	// (0x00059069) list_single_sp_fs_schedule_track_pane_t1

0xd30b,	// (0x00059081) sp_fs_schedule_track_pane_ParamLimits

0xd30b,	// (0x00059081) sp_fs_schedule_track_pane

0x137e,	// (0x0004d0f4) sp_fs_schedule_track_pane_g1

0x1386,	// (0x0004d0fc) sp_fs_schedule_track_pane_g2

0x138e,	// (0x0004d104) sp_fs_schedule_track_pane_g3

0x1396,	// (0x0004d10c) sp_fs_schedule_track_pane_g4

0x139e,	// (0x0004d114) sp_fs_schedule_track_pane_g5

0x0004,

0xfdce,	// (0x0005bb44) sp_fs_schedule_track_pane_g

0xe04c,	// (0x00059dc2) bg_sp_fs_schedule_viewer_highlight_g1

0x2716,	// (0x0004e48c) bg_sp_fs_schedule_viewer_highlight_g2

0xe054,	// (0x00059dca) bg_sp_fs_schedule_viewer_highlight_g3

0xe05c,	// (0x00059dd2) bg_sp_fs_schedule_viewer_highlight_g4

0xe270,	// (0x00059fe6) bg_sp_fs_schedule_viewer_highlight_g5

0xe06c,	// (0x00059de2) bg_sp_fs_schedule_viewer_highlight_g6

0xe074,	// (0x00059dea) bg_sp_fs_schedule_viewer_highlight_g7

0xe07c,	// (0x00059df2) bg_sp_fs_schedule_viewer_highlight_g8

0x26f6,	// (0x0004e46c) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfdd9,	// (0x0005bb4f) bg_sp_fs_schedule_viewer_highlight_g

0x0450,	// (0x0004c1c6) bg_main_sp_fs_ribbon_pane

0xd31b,	// (0x00059091) main_sp_fs_ribbon_pane_g1

0x13a6,	// (0x0004d11c) main_sp_fs_ribbon_pane_t1

0xd324,	// (0x0005909a) main_sp_fs_ribbon_pane_t2

0x13b5,	// (0x0004d12b) main_sp_fs_ribbon_pane_t3

0x0002,

0xfdec,	// (0x0005bb62) main_sp_fs_ribbon_pane_t

0x13c4,	// (0x0004d13a) main_sp_fs_ribbon_scheduler_pane

0x13cc,	// (0x0004d142) bg_main_sp_fs_ribbon_pane_g1

0x13d5,	// (0x0004d14b) bg_main_sp_fs_ribbon_pane_g2

0x13de,	// (0x0004d154) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfdf3,	// (0x0005bb69) bg_main_sp_fs_ribbon_pane_g

0x13e6,	// (0x0004d15c) main_sp_fs_ribbon_scheduler_pane_g1

0x13ef,	// (0x0004d165) main_sp_fs_ribbon_scheduler_pane_g2

0x13f8,	// (0x0004d16e) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfdfa,	// (0x0005bb70) main_sp_fs_ribbon_scheduler_pane_g

0x1401,	// (0x0004d177) list_cale_mrui_pane

0xd333,	// (0x000590a9) sp_fs_scroll_pane_cp07_ParamLimits

0xd333,	// (0x000590a9) sp_fs_scroll_pane_cp07

0xd349,	// (0x000590bf) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0xd349,	// (0x000590bf) bg_sp_fs_schedule_viewer_highlight

0x140a,	// (0x0004d180) list_single_sp_fs_schedule_track_pane_cp01

0x1412,	// (0x0004d188) list_sp_fs_schedule_track_pane

0x141a,	// (0x0004d190) sp_fs_scroll_pane_cp06_ParamLimits

0x141a,	// (0x0004d190) sp_fs_scroll_pane_cp06

0x462c,	// (0x000503a2) bgmain_sp_fs_calendar_pane_g1

0xd356,	// (0x000590cc) list_single_cale_mrui_pane_ParamLimits

0xd356,	// (0x000590cc) list_single_cale_mrui_pane

0x142c,	// (0x0004d1a2) list_single_cale_mrui_row_pane_ParamLimits

0x142c,	// (0x0004d1a2) list_single_cale_mrui_row_pane

0x1439,	// (0x0004d1af) list_single_cale_mrui_row_pane_g1_ParamLimits

0x1439,	// (0x0004d1af) list_single_cale_mrui_row_pane_g1

0x1471,	// (0x0004d1e7) list_single_cale_mrui_row_pane_t1_ParamLimits

0x1471,	// (0x0004d1e7) list_single_cale_mrui_row_pane_t1

0xd385,	// (0x000590fb) list_single_cale_mrui_row_pane_t2_ParamLimits

0xd385,	// (0x000590fb) list_single_cale_mrui_row_pane_t2

0x1483,	// (0x0004d1f9) list_single_cale_mrui_row_pane_t3_ParamLimits

0x1483,	// (0x0004d1f9) list_single_cale_mrui_row_pane_t3

0x14b2,	// (0x0004d228) list_single_cale_mrui_row_pane_t4_ParamLimits

0x14b2,	// (0x0004d228) list_single_cale_mrui_row_pane_t4

0x0003,

0xfe06,	// (0x0005bb7c) list_single_cale_mrui_row_pane_t_ParamLimits

0xfe06,	// (0x0005bb7c) list_single_cale_mrui_row_pane_t

0xd3eb,	// (0x00059161) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0xd3eb,	// (0x00059161) list_single_cmail_header_editor_pane_bg_cp01

0xd40d,	// (0x00059183) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0xd40d,	// (0x00059183) list_single_cmail_header_editor_pane_bg_cp02

0xd429,	// (0x0005919f) main_radioblah_text_pane_t1_ParamLimits

0xd429,	// (0x0005919f) main_radioblah_text_pane_t1

0x14e1,	// (0x0004d257) cam6_indi_pane_cp01

0x14e9,	// (0x0004d25f) cam6_mode_pane_cp01

0x14f1,	// (0x0004d267) cam6_pano_pane

0x14fa,	// (0x0004d270) cam6_zoom_pane_cp01

0x1502,	// (0x0004d278) cam6_pano_image_pane

0x150d,	// (0x0004d283) cam6_pano_pane_g1

0xec5b,	// (0x0005a9d1) cam6_pano_pane_g2

0x1516,	// (0x0004d28c) cam6_pano_pane_g3

0x151f,	// (0x0004d295) cam6_pano_pane_g4

0x4bb2,	// (0x00050928) cam6_pano_pane_g5

0x1528,	// (0x0004d29e) cam6_pano_pane_g6

0x1532,	// (0x0004d2a8) cam6_pano_pane_g7

0x153a,	// (0x0004d2b0) cam6_pano_pane_g8

0x1543,	// (0x0004d2b9) cam6_pano_pane_g9

0x0008,

0xfe0f,	// (0x0005bb85) cam6_pano_pane_g

0x0450,	// (0x0004c1c6) main_browser_tag_pane

0x1283,	// (0x0004cff9) grid_navstr_albumart_pane

0x154e,	// (0x0004d2c4) cell_navstr_albumart_pane_ParamLimits

0x154e,	// (0x0004d2c4) cell_navstr_albumart_pane

0x2eef,	// (0x0004ec65) cell_navstr_albumart_pane_g1

0x3ff0,	// (0x0004fd66) cell_navstr_albumart_pane_g2

0x4000,	// (0x0004fd76) cell_navstr_albumart_pane_g3

0x3ff8,	// (0x0004fd6e) cell_navstr_albumart_pane_g4

0x0003,

0xfe22,	// (0x0005bb98) cell_navstr_albumart_pane_g

0xd446,	// (0x000591bc) bt_list_pane_ParamLimits

0xd446,	// (0x000591bc) bt_list_pane

0xd46d,	// (0x000591e3) bt_list_pane_t1

0xd47c,	// (0x000591f2) bt_list_pane_t2

0x0001,

0xfe2b,	// (0x0005bba1) bt_list_pane_t

0x0450,	// (0x0004c1c6) main_cale_prevew_pane

0xd48b,	// (0x00059201) popup_cale_preview_window_ParamLimits

0xd48b,	// (0x00059201) popup_cale_preview_window

0x3675,	// (0x0004f3eb) bg_popup_preview_window_pane_cp05_ParamLimits

0x3675,	// (0x0004f3eb) bg_popup_preview_window_pane_cp05

0x1570,	// (0x0004d2e6) list_cale_preview_pane_ParamLimits

0x1570,	// (0x0004d2e6) list_cale_preview_pane

0xd4a2,	// (0x00059218) list_double_cale_preview_pane_ParamLimits

0xd4a2,	// (0x00059218) list_double_cale_preview_pane

0xd4b4,	// (0x0005922a) list_single_cale_preview_pane_ParamLimits

0xd4b4,	// (0x0005922a) list_single_cale_preview_pane

0xd4c8,	// (0x0005923e) list_single_cale_preview_pane_g1

0xd4d0,	// (0x00059246) list_single_cale_preview_pane_t1_ParamLimits

0xd4d0,	// (0x00059246) list_single_cale_preview_pane_t1

0xd4e5,	// (0x0005925b) list_double_cale_preview_pane_g1

0xd4ed,	// (0x00059263) list_double_cale_preview_pane_t1_ParamLimits

0xd4ed,	// (0x00059263) list_double_cale_preview_pane_t1

0xd502,	// (0x00059278) list_double_cale_preview_pane_t2_ParamLimits

0xd502,	// (0x00059278) list_double_cale_preview_pane_t2

0x0001,

0xfe30,	// (0x0005bba6) list_double_cale_preview_pane_t_ParamLimits

0xfe30,	// (0x0005bba6) list_double_cale_preview_pane_t

0x0450,	// (0x0004c1c6) main_ezdial_pane

0x3675,	// (0x0004f3eb) main_sp_fs_email_pane_ParamLimits

0xcc8d,	// (0x00058a03) cmail_ddmenu_btn01_pane_ParamLimits

0xcc8d,	// (0x00058a03) cmail_ddmenu_btn01_pane

0xccaa,	// (0x00058a20) cmail_ddmenu_btn02_pane_ParamLimits

0xccaa,	// (0x00058a20) cmail_ddmenu_btn02_pane

0xccc8,	// (0x00058a3e) cmail_ddmenu_btn03_pane_ParamLimits

0xccc8,	// (0x00058a3e) cmail_ddmenu_btn03_pane

0xccf6,	// (0x00058a6c) main_sp_fs_ctrlbar_pane_ParamLimits

0xcd12,	// (0x00058a88) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0xd11a,	// (0x00058e90) list_cmail_body_pane_ParamLimits

0x11aa,	// (0x0004cf20) bg_button_pane_cp12

0x11bf,	// (0x0004cf35) list_single_cmail_header_detail_pane_g3_ParamLimits

0x11bf,	// (0x0004cf35) list_single_cmail_header_detail_pane_g3

0xd1cc,	// (0x00058f42) list_single_cmail_header_detail_pane_t2_ParamLimits

0xd1cc,	// (0x00058f42) list_single_cmail_header_detail_pane_t2

0x0001,

0xfdb5,	// (0x0005bb2b) list_single_cmail_header_detail_pane_t_ParamLimits

0xfdb5,	// (0x0005bb2b) list_single_cmail_header_detail_pane_t

0x12eb,	// (0x0004d061) phacti_term_pane_t2_ParamLimits

0x12eb,	// (0x0004d061) phacti_term_pane_t2

0x0001,

0xfdbf,	// (0x0005bb35) phacti_term_pane_t_ParamLimits

0xfdbf,	// (0x0005bb35) phacti_term_pane_t

0x157c,	// (0x0004d2f2) aid_size_list_single_double

0xd51a,	// (0x00059290) popup_ezdial_listscroll_window

0xd53b,	// (0x000592b1) popup_number_entry_window_cp01

0x2d8e,	// (0x0004eb04) bg_popup_call_pane_cp09

0x1588,	// (0x0004d2fe) ezdial_list_pane

0x1590,	// (0x0004d306) scroll_pane_cp23

0x4407,	// (0x0005017d) bg_button_pane_cp028_ParamLimits

0x4407,	// (0x0005017d) bg_button_pane_cp028

0xd549,	// (0x000592bf) cmail_ddmenu_btn01_pane_g1_ParamLimits

0xd549,	// (0x000592bf) cmail_ddmenu_btn01_pane_g1

0xd55b,	// (0x000592d1) cmail_ddmenu_btn01_pane_g2_ParamLimits

0xd55b,	// (0x000592d1) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfe35,	// (0x0005bbab) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfe35,	// (0x0005bbab) cmail_ddmenu_btn01_pane_g

0x1598,	// (0x0004d30e) cmail_ddmenu_btn01_pane_t1_ParamLimits

0x1598,	// (0x0004d30e) cmail_ddmenu_btn01_pane_t1

0x41db,	// (0x0004ff51) bg_button_pane_cp029_ParamLimits

0x41db,	// (0x0004ff51) bg_button_pane_cp029

0xd55b,	// (0x000592d1) cmail_ddmenu_btn02_pane_g1_ParamLimits

0xd55b,	// (0x000592d1) cmail_ddmenu_btn02_pane_g1

0xd573,	// (0x000592e9) cmail_ddmenu_btn02_pane_t1_ParamLimits

0xd573,	// (0x000592e9) cmail_ddmenu_btn02_pane_t1

0x0beb,	// (0x0004c961) bg_button_pane_cp031_ParamLimits

0x0beb,	// (0x0004c961) bg_button_pane_cp031

0xd55b,	// (0x000592d1) cmail_ddmenu_btn03_pane_g1_ParamLimits

0xd55b,	// (0x000592d1) cmail_ddmenu_btn03_pane_g1

0xd573,	// (0x000592e9) cmail_ddmenu_btn03_pane_t1_ParamLimits

0xd573,	// (0x000592e9) cmail_ddmenu_btn03_pane_t1

0xa8f6,	// (0x0005666c) cell_dialer2_keypad_pane_t1_ParamLimits

0xa910,	// (0x00056686) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0xa910,	// (0x00056686) cell_dialer2_keypad_pane_t1_copy1

0xc5e2,	// (0x00058358) ncimui_group_button_pane

0x3675,	// (0x0004f3eb) main_sp_fs_calendar_pane_ParamLimits

0xd13e,	// (0x00058eb4) list_single_cmail_header_caption_pane_ParamLimits

0x0e0b,	// (0x0004cb81) aid_recal_txt_sm_pane

0x0450,	// (0x0004c1c6) mian_recal_day_pane

0x136c,	// (0x0004d0e2) popup_sp_fs_cale_preview_window_ParamLimits

0x0450,	// (0x0004c1c6) list_recal_day_pane

0x15c6,	// (0x0004d33c) list_single_recal_day_pane_ParamLimits

0x15c6,	// (0x0004d33c) list_single_recal_day_pane

0x15d8,	// (0x0004d34e) list_single_recal_day_pane_g1_ParamLimits

0x15d8,	// (0x0004d34e) list_single_recal_day_pane_g1

0x15e4,	// (0x0004d35a) list_single_recal_day_pane_g2_ParamLimits

0x15e4,	// (0x0004d35a) list_single_recal_day_pane_g2

0x15f3,	// (0x0004d369) list_single_recal_day_pane_g3_ParamLimits

0x15f3,	// (0x0004d369) list_single_recal_day_pane_g3

0xd597,	// (0x0005930d) list_single_recal_day_pane_g4_ParamLimits

0xd597,	// (0x0005930d) list_single_recal_day_pane_g4

0x15ff,	// (0x0004d375) list_single_recal_day_pane_g5_ParamLimits

0x15ff,	// (0x0004d375) list_single_recal_day_pane_g5

0x160e,	// (0x0004d384) list_single_recal_day_pane_g6_ParamLimits

0x160e,	// (0x0004d384) list_single_recal_day_pane_g6

0x0005,

0xfe44,	// (0x0005bbba) list_single_recal_day_pane_g_ParamLimits

0xfe44,	// (0x0005bbba) list_single_recal_day_pane_g

0x161a,	// (0x0004d390) list_single_recal_day_pane_t1

0x1628,	// (0x0004d39e) list_single_recal_day_pane_t2

0x0001,

0xfe51,	// (0x0005bbc7) list_single_recal_day_pane_t

0xd5aa,	// (0x00059320) ncimui_query_button_pane_ParamLimits

0xd5aa,	// (0x00059320) ncimui_query_button_pane

0xd5ba,	// (0x00059330) ncimui_query_button_pane_t1_ParamLimits

0xd5ba,	// (0x00059330) ncimui_query_button_pane_t1

0x1636,	// (0x0004d3ac) ncimui_query_button_pane_t2_ParamLimits

0x1636,	// (0x0004d3ac) ncimui_query_button_pane_t2

0x0001,

0xfe56,	// (0x0005bbcc) ncimui_query_button_pane_t_ParamLimits

0xfe56,	// (0x0005bbcc) ncimui_query_button_pane_t

0xd5cd,	// (0x00059343) query_button_pane_ParamLimits

0xd5cd,	// (0x00059343) query_button_pane

0x0450,	// (0x0004c1c6) bg_button_pane_cp0028

0x1649,	// (0x0004d3bf) query_button_pane_t1

0x8d25,	// (0x00054a9b) main_tport_pane_ParamLimits

0xd049,	// (0x00058dbf) bg_popup_window_pane_cp01_ParamLimits

0xd049,	// (0x00058dbf) bg_popup_window_pane_cp01

0xd056,	// (0x00058dcc) heading_pane_cp08_ParamLimits

0xd056,	// (0x00058dcc) heading_pane_cp08

0xd064,	// (0x00058dda) heading_pane_cp07_ParamLimits

0xd064,	// (0x00058dda) heading_pane_cp07

0x116d,	// (0x0004cee3) cell_tport_appsw_pane_g2

0x0002,

0xfda2,	// (0x0005bb18) cell_tport_appsw_pane_g

0x8411,	// (0x00054187) input_candi_list_open_g1

0x28b1,	// (0x0004e627) list_cale_time_pane_g6_ParamLimits

0x28b1,	// (0x0004e627) list_cale_time_pane_g6

0x9763,	// (0x000554d9) aid_size_touch_calib_1_ParamLimits

0x9763,	// (0x000554d9) aid_size_touch_calib_1

0x976f,	// (0x000554e5) aid_size_touch_calib_2_ParamLimits

0x976f,	// (0x000554e5) aid_size_touch_calib_2

0x977d,	// (0x000554f3) aid_size_touch_calib_3_ParamLimits

0x977d,	// (0x000554f3) aid_size_touch_calib_3

0x978d,	// (0x00055503) aid_size_touch_calib_4_ParamLimits

0x978d,	// (0x00055503) aid_size_touch_calib_4

0x979b,	// (0x00055511) main_touch_calib_button_group_pane_ParamLimits

0x979b,	// (0x00055511) main_touch_calib_button_group_pane

0x97a9,	// (0x0005551f) main_touch_calib_pane_g1_ParamLimits

0x97b5,	// (0x0005552b) main_touch_calib_pane_g2_ParamLimits

0x97c1,	// (0x00055537) main_touch_calib_pane_g3_ParamLimits

0x97cd,	// (0x00055543) main_touch_calib_pane_g4_ParamLimits

0xf775,	// (0x0005b4eb) main_touch_calib_pane_g_ParamLimits

0x97d9,	// (0x0005554f) main_touch_calib_pane_t1_ParamLimits

0x97f0,	// (0x00055566) main_touch_calib_pane_t2_ParamLimits

0x9807,	// (0x0005557d) main_touch_calib_pane_t3_ParamLimits

0x981b,	// (0x00055591) main_touch_calib_pane_t4_ParamLimits

0x982f,	// (0x000555a5) main_touch_calib_pane_t5_ParamLimits

0xf77e,	// (0x0005b4f4) main_touch_calib_pane_t_ParamLimits

0x4999,	// (0x0005070f) list_single_fp_cale_pane_g3_ParamLimits

0x4999,	// (0x0005070f) list_single_fp_cale_pane_g3

0xad56,	// (0x00056acc) bg_button_pane_cp012_ParamLimits

0xad56,	// (0x00056acc) bg_vkb2_func_pane_cp03_ParamLimits

0xb71e,	// (0x00057494) cell_vitu2_function_top_pane_g1_ParamLimits

0xad56,	// (0x00056acc) bg_vkb2_func_pane_cp04_ParamLimits

0xc580,	// (0x000582f6) main_ncimui_button_group_pane_ParamLimits

0xc580,	// (0x000582f6) main_ncimui_button_group_pane

0xc5d0,	// (0x00058346) main_ncimui_pane_t3_ParamLimits

0xc5d0,	// (0x00058346) main_ncimui_pane_t3

0x1299,	// (0x0004d00f) phacti_button_group_pane

0x157c,	// (0x0004d2f2) aid_size_list_single_double_ParamLimits

0xd51a,	// (0x00059290) popup_ezdial_listscroll_window_ParamLimits

0xd53b,	// (0x000592b1) popup_number_entry_window_cp01_ParamLimits

0xd5da,	// (0x00059350) phacti_button_pane_ParamLimits

0xd5da,	// (0x00059350) phacti_button_pane

0x0450,	// (0x0004c1c6) bg_button_pane_cp14

0x1657,	// (0x0004d3cd) phacti_button_pane_t1

0xd5eb,	// (0x00059361) main_touch_calib_button_pane_ParamLimits

0xd5eb,	// (0x00059361) main_touch_calib_button_pane

0x2306,	// (0x0004e07c) bg_button_pane_cp18_ParamLimits

0x2306,	// (0x0004e07c) bg_button_pane_cp18

0x1665,	// (0x0004d3db) main_touch_calib_button_pane_t1_ParamLimits

0x1665,	// (0x0004d3db) main_touch_calib_button_pane_t1

0x167b,	// (0x0004d3f1) main_touch_calib_button_pane_t2_ParamLimits

0x167b,	// (0x0004d3f1) main_touch_calib_button_pane_t2

0x0001,

0xfe5b,	// (0x0005bbd1) main_touch_calib_button_pane_t_ParamLimits

0xfe5b,	// (0x0005bbd1) main_touch_calib_button_pane_t

0x0450,	// (0x0004c1c6) cell_ncimui_button_pane

0x0450,	// (0x0004c1c6) bg_button_pane_cp032

0x1699,	// (0x0004d40f) cell_ncimui_button_pane_t1

0xa96c,	// (0x000566e2) image3_infobar_pane_ParamLimits

0xa96c,	// (0x000566e2) image3_infobar_pane

0xc92e,	// (0x000586a4) fs_bigclock_status_pane_ParamLimits

0xc92e,	// (0x000586a4) fs_bigclock_status_pane

0xc93b,	// (0x000586b1) main_fs_bigclock_clock_pane_ParamLimits

0xc93b,	// (0x000586b1) main_fs_bigclock_clock_pane

0xc94f,	// (0x000586c5) main_fs_bigclock_indi_pane_ParamLimits

0xc94f,	// (0x000586c5) main_fs_bigclock_indi_pane

0xc97c,	// (0x000586f2) main_fs_bigclock_swipe_pane_ParamLimits

0xc97c,	// (0x000586f2) main_fs_bigclock_swipe_pane

0x0450,	// (0x0004c1c6) main_fs_clock_dumped_data

0xed68,	// (0x0005aade) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xed68,	// (0x0005aade) list_single_fs_bigclock_indicator_pane_g1

0xed86,	// (0x0005aafc) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xed86,	// (0x0005aafc) list_single_fs_bigclock_indicator_pane_g2

0xeda0,	// (0x0005ab16) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xeda0,	// (0x0005ab16) list_single_fs_bigclock_indicator_pane_g3

0xedba,	// (0x0005ab30) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xedba,	// (0x0005ab30) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfc8e,	// (0x0005ba04) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfc8e,	// (0x0005ba04) list_single_fs_bigclock_indicator_pane_g

0xede0,	// (0x0005ab56) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xede0,	// (0x0005ab56) list_single_fs_bigclock_indicator_pane_t1

0xee08,	// (0x0005ab7e) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xee08,	// (0x0005ab7e) list_single_fs_bigclock_indicator_pane_t2

0xee30,	// (0x0005aba6) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xee30,	// (0x0005aba6) list_single_fs_bigclock_indicator_pane_t3

0xee58,	// (0x0005abce) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xee58,	// (0x0005abce) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfc99,	// (0x0005ba0f) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfc99,	// (0x0005ba0f) list_single_fs_bigclock_indicator_pane_t

0x16a7,	// (0x0004d41d) image3_infobar_fav_pane_ParamLimits

0x16a7,	// (0x0004d41d) image3_infobar_fav_pane

0x16b7,	// (0x0004d42d) image3_infobar_loc_pane_ParamLimits

0x16b7,	// (0x0004d42d) image3_infobar_loc_pane

0x16cb,	// (0x0004d441) image3_infobar_time_pane_ParamLimits

0x16cb,	// (0x0004d441) image3_infobar_time_pane

0x462c,	// (0x000503a2) image3_infobar_time_pane_g1

0x16db,	// (0x0004d451) image3_infobar_time_pane_t1

0x462c,	// (0x000503a2) image3_infobar_loc_pane_g1

0x16e9,	// (0x0004d45f) image3_infobar_loc_pane_g2

0x0001,

0xfe60,	// (0x0005bbd6) image3_infobar_loc_pane_g

0x16f1,	// (0x0004d467) image3_infobar_loc_pane_t1

0x462c,	// (0x000503a2) image3_infobar_fav_pane_g1

0x16ff,	// (0x0004d475) image3_infobar_fav_pane_g2

0x0001,

0xfe65,	// (0x0005bbdb) image3_infobar_fav_pane_g

0x1707,	// (0x0004d47d) fs_bigclock_status_battery_pane

0x1710,	// (0x0004d486) fs_bigclock_status_signal_pane

0x1719,	// (0x0004d48f) fs_bigclock_status_title_pane

0x1722,	// (0x0004d498) fs_bigclock_status_signal_pane_g1

0x172b,	// (0x0004d4a1) fs_bigclock_status_signal_pane_g2

0x0001,

0xfe6a,	// (0x0005bbe0) fs_bigclock_status_signal_pane_g

0x1733,	// (0x0004d4a9) fs_bigclock_status_battery_pane_g1

0x173c,	// (0x0004d4b2) fs_bigclock_status_battery_pane_g2

0x0001,

0xfe6f,	// (0x0005bbe5) fs_bigclock_status_battery_pane_g

0x1744,	// (0x0004d4ba) fs_bigclock_status_title_pane_t1

0x462c,	// (0x000503a2) main_fs_bigclock_clock_pane_g1

0x1752,	// (0x0004d4c8) main_fs_bigclock_clock_pane_g2

0x1752,	// (0x0004d4c8) main_fs_bigclock_clock_pane_g3

0x1752,	// (0x0004d4c8) main_fs_bigclock_clock_pane_g4

0x0003,

0xfe74,	// (0x0005bbea) main_fs_bigclock_clock_pane_g

0x175a,	// (0x0004d4d0) main_fs_bigclock_clock_pane_t1

0x1768,	// (0x0004d4de) main_fs_bigclock_clock_pane_t2

0x0001,

0xfe7d,	// (0x0005bbf3) main_fs_bigclock_clock_pane_t

0x1777,	// (0x0004d4ed) list_single_fs_bigclock_indicator_pane_ParamLimits

0x1777,	// (0x0004d4ed) list_single_fs_bigclock_indicator_pane

0xd5fb,	// (0x00059371) list_single_fs_bigclock_pane_ParamLimits

0xd5fb,	// (0x00059371) list_single_fs_bigclock_pane

0x1791,	// (0x0004d507) main_fs_bigclock_indicator_pane_t1

0x17a0,	// (0x0004d516) list_single_fs_bigclock_pane_g1

0x17a8,	// (0x0004d51e) list_single_fs_bigclock_pane_t1

0x462c,	// (0x000503a2) main_fs_bigclock_swipe_pane_g1

0x17e6,	// (0x0004d55c) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfe8e,	// (0x0005bc04) main_fs_bigclock_swipe_pane_g

0x17ee,	// (0x0004d564) main_fs_bigclock_swipe_pane_t1_ParamLimits

0x17ee,	// (0x0004d564) main_fs_bigclock_swipe_pane_t1

0x7be0,	// (0x00053956) call_type_pane_ParamLimits

0x0450,	// (0x0004c1c6) main_btmg_pane

0x1465,	// (0x0004d1db) list_single_cale_mrui_row_pane_g2_ParamLimits

0x1465,	// (0x0004d1db) list_single_cale_mrui_row_pane_g2

0x0001,

0xfe01,	// (0x0005bb77) list_single_cale_mrui_row_pane_g_ParamLimits

0xfe01,	// (0x0005bb77) list_single_cale_mrui_row_pane_g

0x15b6,	// (0x0004d32c) list_recal_vselct_arw_lo_pane

0x15be,	// (0x0004d334) list_recal_vselct_arw_up_pane

0x0e02,	// (0x0004cb78) list_recal_vselct_pane

0x180b,	// (0x0004d581) btmg_button_pane

0xd65f,	// (0x000593d5) main_btmg_pane_g1

0x0450,	// (0x0004c1c6) bg_button_pane_cp044

0x1815,	// (0x0004d58b) btmg_button_pane_t1

0x41d3,	// (0x0004ff49) aid_listscroll_gen

0x3675,	// (0x0004f3eb) main_cntbar_detail_pane

0x118b,	// (0x0004cf01) list_cmail_folder_pane

0x119b,	// (0x0004cf11) sp_fs_scroll_pane_cp03_ParamLimits

0xd667,	// (0x000593dd) list_single_fs_dyc_pane_cp01_ParamLimits

0xd667,	// (0x000593dd) list_single_fs_dyc_pane_cp01

0x1823,	// (0x0004d599) aid_size_cmail_indent

0x182c,	// (0x0004d5a2) list_single_dyc_row_pane_cp01

0xd6b8,	// (0x0005942e) cntbar_detail_list_pane_ParamLimits

0xd6b8,	// (0x0005942e) cntbar_detail_list_pane

0xd6f2,	// (0x00059468) main_cntbar_detail_cont_pane_ParamLimits

0xd6f2,	// (0x00059468) main_cntbar_detail_cont_pane

0x7b7a,	// (0x000538f0) scroll_pane_cp032_ParamLimits

0x7b7a,	// (0x000538f0) scroll_pane_cp032

0xd6fe,	// (0x00059474) cntbar_detail_list_event_pane_ParamLimits

0xd6fe,	// (0x00059474) cntbar_detail_list_event_pane

0xd6c4,	// (0x0005943a) cntbar_detail_list_shct_pane

0x2764,	// (0x0004e4da) aid_list_gen

0x1835,	// (0x0004d5ab) aid_scroll

0x183e,	// (0x0004d5b4) aid_size_touch_scroll_bar

0xd712,	// (0x00059488) aid_list_double

0x1850,	// (0x0004d5c6) aid_list_single

0xd71b,	// (0x00059491) aid_list_single_lg

0x1862,	// (0x0004d5d8) aid_list_z_g_a_sm

0x186a,	// (0x0004d5e0) aid_list_z_g_d

0x1872,	// (0x0004d5e8) aid_txt_z_prm

0xd724,	// (0x0005949a) aid_txt_z_prm_cp01

0xd732,	// (0x000594a8) aid_txt_z_sec

0xd740,	// (0x000594b6) main_cntbar_detail_cont_pane_g1_ParamLimits

0xd740,	// (0x000594b6) main_cntbar_detail_cont_pane_g1

0xd74d,	// (0x000594c3) main_cntbar_detail_cont_pane_g2_ParamLimits

0xd74d,	// (0x000594c3) main_cntbar_detail_cont_pane_g2

0x0001,

0xfe93,	// (0x0005bc09) main_cntbar_detail_cont_pane_g_ParamLimits

0xfe93,	// (0x0005bc09) main_cntbar_detail_cont_pane_g

0x1880,	// (0x0004d5f6) main_cntbar_detail_cont_pane_t1

0x188e,	// (0x0004d604) main_cntbar_detail_cont_pane_t2

0x189c,	// (0x0004d612) main_cntbar_detail_cont_pane_t3

0x0002,

0xfe98,	// (0x0005bc0e) main_cntbar_detail_cont_pane_t

0xd759,	// (0x000594cf) cell_cntbar_detail_list_shct_pane_ParamLimits

0xd759,	// (0x000594cf) cell_cntbar_detail_list_shct_pane

0x18aa,	// (0x0004d620) cntbar_detail_list_shct_pane_g1

0x18b3,	// (0x0004d629) cntbar_detail_list_shct_pane_g2

0x0001,

0xfe9f,	// (0x0005bc15) cntbar_detail_list_shct_pane_g

0xd76d,	// (0x000594e3) cntbar_detail_list_event_pane_g1_ParamLimits

0xd76d,	// (0x000594e3) cntbar_detail_list_event_pane_g1

0xd779,	// (0x000594ef) cntbar_detail_list_event_pane_g2_ParamLimits

0xd779,	// (0x000594ef) cntbar_detail_list_event_pane_g2

0x0005,

0xfea4,	// (0x0005bc1a) cntbar_detail_list_event_pane_g_ParamLimits

0xfea4,	// (0x0005bc1a) cntbar_detail_list_event_pane_g

0xd7e5,	// (0x0005955b) cntbar_detail_list_event_pane_t1_ParamLimits

0xd7e5,	// (0x0005955b) cntbar_detail_list_event_pane_t1

0xd7fa,	// (0x00059570) cntbar_detail_list_event_pane_t2_ParamLimits

0xd7fa,	// (0x00059570) cntbar_detail_list_event_pane_t2

0x0002,

0xfeb1,	// (0x0005bc27) cntbar_detail_list_event_pane_t_ParamLimits

0xfeb1,	// (0x0005bc27) cntbar_detail_list_event_pane_t

0x462c,	// (0x000503a2) cell_cntbar_detail_list_shct_pane_g1

0x7f63,	// (0x00053cd9) navi_pane_mv_g3

0x3675,	// (0x0004f3eb) main_cntbar_detail_pane_ParamLimits

0x0450,	// (0x0004c1c6) main_notif_wgt_pane

0xa61e,	// (0x00056394) aid_tch_main_mp4_pane_g4

0xa853,	// (0x000565c9) popup_slider_window_cp02

0x15ad,	// (0x0004d323) list_recal_day_event_pane

0xd698,	// (0x0005940e) cntbar_detail_btn_pane_ParamLimits

0xd698,	// (0x0005940e) cntbar_detail_btn_pane

0xd6a8,	// (0x0005941e) cntbar_detail_btn_pane_cp01_ParamLimits

0xd6a8,	// (0x0005941e) cntbar_detail_btn_pane_cp01

0xd6c4,	// (0x0005943a) cntbar_detail_list_shct_pane_ParamLimits

0xd6d0,	// (0x00059446) cntbar_detail_pane_g1_ParamLimits

0xd6d0,	// (0x00059446) cntbar_detail_pane_g1

0xd6dc,	// (0x00059452) cntbar_detail_pane_t1_ParamLimits

0xd6dc,	// (0x00059452) cntbar_detail_pane_t1

0xd785,	// (0x000594fb) cntbar_detail_list_event_pane_g3_ParamLimits

0xd785,	// (0x000594fb) cntbar_detail_list_event_pane_g3

0xd79d,	// (0x00059513) cntbar_detail_list_event_pane_g4_ParamLimits

0xd79d,	// (0x00059513) cntbar_detail_list_event_pane_g4

0xd7b5,	// (0x0005952b) cntbar_detail_list_event_pane_g5_ParamLimits

0xd7b5,	// (0x0005952b) cntbar_detail_list_event_pane_g5

0xd7cd,	// (0x00059543) cntbar_detail_list_event_pane_g6_ParamLimits

0xd7cd,	// (0x00059543) cntbar_detail_list_event_pane_g6

0xd80f,	// (0x00059585) cntbar_detail_list_event_pane_t3_ParamLimits

0xd80f,	// (0x00059585) cntbar_detail_list_event_pane_t3

0xd821,	// (0x00059597) popup_notif_wgt_window_ParamLimits

0xd821,	// (0x00059597) popup_notif_wgt_window

0xd831,	// (0x000595a7) popup_submenu_window_cp01_ParamLimits

0xd831,	// (0x000595a7) popup_submenu_window_cp01

0x2d8e,	// (0x0004eb04) bg_popup_window_pane_cp10

0x18bc,	// (0x0004d632) listscroll_notif_wgt_pane

0x18c6,	// (0x0004d63c) list_notif_wgt_window

0x18cf,	// (0x0004d645) scroll_pane_cp033

0x18d8,	// (0x0004d64e) list_notif_wgt_row_pane_ParamLimits

0x18d8,	// (0x0004d64e) list_notif_wgt_row_pane

0x18ec,	// (0x0004d662) aid_size_list_notif_wgt_del

0x18f5,	// (0x0004d66b) list_notif_wgt_row_pane_g1

0x18fd,	// (0x0004d673) list_notif_wgt_row_pane_g2

0x1905,	// (0x0004d67b) list_notif_wgt_row_pane_g3

0x0002,

0xfeb8,	// (0x0005bc2e) list_notif_wgt_row_pane_g

0x190e,	// (0x0004d684) list_notif_wgt_row_pane_t1

0x191c,	// (0x0004d692) list_notif_wgt_row_pane_t2

0x192a,	// (0x0004d6a0) list_notif_wgt_row_pane_t3

0x0002,

0xfebf,	// (0x0005bc35) list_notif_wgt_row_pane_t

0xe28a,	// (0x0005a000) list_recal_day_event_pane_g1

0x1938,	// (0x0004d6ae) list_recal_day_event_pane_t1

0x0450,	// (0x0004c1c6) bg_button_pane_cp045

0x1947,	// (0x0004d6bd) cntbar_detail_btn_pane_t1

0x41db,	// (0x0004ff51) main_callh_pane_ParamLimits

0x41db,	// (0x0004ff51) main_callh_pane

0x0450,	// (0x0004c1c6) main_coverflow0_pane

0x0450,	// (0x0004c1c6) main_wgtman_pane

0xc994,	// (0x0005870a) main_fs_bigclock_unlock_btn_pane_ParamLimits

0xc994,	// (0x0005870a) main_fs_bigclock_unlock_btn_pane

0x1165,	// (0x0004cedb) bg_button_pane_cp16

0x1175,	// (0x0004ceeb) cell_tport_appsw_pane_g3

0xd83f,	// (0x000595b5) cf0_flow_pane_ParamLimits

0xd83f,	// (0x000595b5) cf0_flow_pane

0x1955,	// (0x0004d6cb) listscroll_cf0_pane

0x195e,	// (0x0004d6d4) main_cf0_pane_g1

0xd84e,	// (0x000595c4) main_cf0_pane_t1_ParamLimits

0xd84e,	// (0x000595c4) main_cf0_pane_t1

0xd862,	// (0x000595d8) main_cf0_pane_t2_ParamLimits

0xd862,	// (0x000595d8) main_cf0_pane_t2

0x0001,

0xfec6,	// (0x0005bc3c) main_cf0_pane_t_ParamLimits

0xfec6,	// (0x0005bc3c) main_cf0_pane_t

0x1968,	// (0x0004d6de) scroll_pane_cp11

0xd876,	// (0x000595ec) cf0_flow_pane_g1

0xd87e,	// (0x000595f4) cf0_flow_pane_g2

0x0001,

0xfecb,	// (0x0005bc41) cf0_flow_pane_g

0xd886,	// (0x000595fc) cf0_flow_pane_t1

0x0450,	// (0x0004c1c6) main_call6_pane

0x0450,	// (0x0004c1c6) main_calllock_pane

0xd894,	// (0x0005960a) call6_btn_grp_pane_ParamLimits

0xd894,	// (0x0005960a) call6_btn_grp_pane

0xd8a3,	// (0x00059619) call6_pane_g1_ParamLimits

0xd8a3,	// (0x00059619) call6_pane_g1

0xd8b2,	// (0x00059628) popup_call6_1st_window_ParamLimits

0xd8b2,	// (0x00059628) popup_call6_1st_window

0xd8c0,	// (0x00059636) popup_call6_2nd_window_ParamLimits

0xd8c0,	// (0x00059636) popup_call6_2nd_window

0xd8ce,	// (0x00059644) cell_call6_btn_pane_ParamLimits

0xd8ce,	// (0x00059644) cell_call6_btn_pane

0x2d8e,	// (0x0004eb04) bg_popup_call2_in_pane_cp03

0x1973,	// (0x0004d6e9) popup_call6_1st_window_g1

0x197b,	// (0x0004d6f1) popup_call6_1st_window_g2

0x1983,	// (0x0004d6f9) popup_call6_1st_window_g3

0x0002,

0xfed0,	// (0x0005bc46) popup_call6_1st_window_g

0x198b,	// (0x0004d701) popup_call6_1st_window_t1

0x199a,	// (0x0004d710) popup_call6_1st_window_t2

0x19aa,	// (0x0004d720) popup_call6_1st_window_t3

0x0002,

0xfed7,	// (0x0005bc4d) popup_call6_1st_window_t

0x2d8e,	// (0x0004eb04) bg_popup_call2_in_pane_cp04

0x1973,	// (0x0004d6e9) popup_call6_2nd_window_g1

0x197b,	// (0x0004d6f1) popup_call6_2nd_window_g2

0x1983,	// (0x0004d6f9) popup_call6_2nd_window_g3

0x0002,

0xfed0,	// (0x0005bc46) popup_call6_2nd_window_g

0x198b,	// (0x0004d701) popup_call6_2nd_window_t1

0x0450,	// (0x0004c1c6) bg_button_pane_cp15

0x19ba,	// (0x0004d730) cell_call6_btn_pane_g1

0x19c3,	// (0x0004d739) cell_call6_btn_pane_t1

0xd8dd,	// (0x00059653) listscroll_wgtman_pane_ParamLimits

0xd8dd,	// (0x00059653) listscroll_wgtman_pane

0xd8fb,	// (0x00059671) wgtman_btn_pane_ParamLimits

0xd8fb,	// (0x00059671) wgtman_btn_pane

0x2c41,	// (0x0004e9b7) aid_scroll_copy1

0x19d2,	// (0x0004d748) list_wgtman_pane

0xd930,	// (0x000596a6) wgtman_btn_pane_g1_ParamLimits

0xd930,	// (0x000596a6) wgtman_btn_pane_g1

0xd958,	// (0x000596ce) wgtman_btn_pane_t1_ParamLimits

0xd958,	// (0x000596ce) wgtman_btn_pane_t1

0x19dc,	// (0x0004d752) wgtman_btn_pane_t2_ParamLimits

0x19dc,	// (0x0004d752) wgtman_btn_pane_t2

0x0001,

0xfede,	// (0x0005bc54) wgtman_btn_pane_t_ParamLimits

0xfede,	// (0x0005bc54) wgtman_btn_pane_t

0xd98f,	// (0x00059705) listrow_wgtman_pane_ParamLimits

0xd98f,	// (0x00059705) listrow_wgtman_pane

0xd9ab,	// (0x00059721) listrow_wgtman_pane_g1

0xd9b4,	// (0x0005972a) listrow_wgtman_pane_g2

0x0001,

0xfee3,	// (0x0005bc59) listrow_wgtman_pane_g

0xd9be,	// (0x00059734) listrow_wgtman_pane_t1

0xd9cc,	// (0x00059742) listrow_wgtman_pane_t2

0x0001,

0xfee8,	// (0x0005bc5e) listrow_wgtman_pane_t

0xd9da,	// (0x00059750) wait_bar_pane_cp09

0x19f3,	// (0x0004d769) main_calllock_btn_pane

0x19fd,	// (0x0004d773) main_calllock_pane_g1

0x0450,	// (0x0004c1c6) bg_button_pane_cp17

0x1a08,	// (0x0004d77e) main_calllock_btn_pane_g1

0x1a11,	// (0x0004d787) main_calllock_btn_pane_t1

0x0450,	// (0x0004c1c6) main_dialer3_pane

0x0450,	// (0x0004c1c6) main_fmrd2_pane

0x462c,	// (0x000503a2) main_fs_bigclock_unlock_btn_pane_g1

0x1a28,	// (0x0004d79e) main_fs_bigclock_unlock_btn_pane_t1

0xd9e2,	// (0x00059758) area_fmrd2_info_pane_ParamLimits

0xd9e2,	// (0x00059758) area_fmrd2_info_pane

0xd9f0,	// (0x00059766) area_fmrd2_visual_pane_ParamLimits

0xd9f0,	// (0x00059766) area_fmrd2_visual_pane

0xd9fe,	// (0x00059774) fmrd2_indi_pane_ParamLimits

0xd9fe,	// (0x00059774) fmrd2_indi_pane

0xda0b,	// (0x00059781) area_fmrd2_visual_pane_g1

0xda13,	// (0x00059789) area_fmrd2_visual_pane_t1

0xda23,	// (0x00059799) area_fmrd2_visual_pane_t2

0xda33,	// (0x000597a9) area_fmrd2_visual_pane_t3

0x0002,

0xfef2,	// (0x0005bc68) area_fmrd2_visual_pane_t

0xda43,	// (0x000597b9) area_fmrd2_info_pane_g1

0xda4b,	// (0x000597c1) area_fmrd2_info_pane_t1

0xda5b,	// (0x000597d1) area_fmrd2_info_pane_t2

0xda6b,	// (0x000597e1) area_fmrd2_info_pane_t3

0xda7b,	// (0x000597f1) area_fmrd2_info_pane_t4

0x0003,

0xfef9,	// (0x0005bc6f) area_fmrd2_info_pane_t

0xda89,	// (0x000597ff) fmrd2_indi_pane_t1

0xda99,	// (0x0005980f) fmrd2_indi_pane_t2

0xdaa9,	// (0x0005981f) fmrd2_indi_pane_t3

0x0002,

0xff02,	// (0x0005bc78) fmrd2_indi_pane_t

0xedc9,	// (0x0005ab3f) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xedc9,	// (0x0005ab3f) list_single_fs_bigclock_indicator_pane_g5

0xee6d,	// (0x0005abe3) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xee6d,	// (0x0005abe3) list_single_fs_bigclock_indicator_pane_t5

0xd28c,	// (0x00059002) aid_cell_bcale_month_pane_ParamLimits

0xd28c,	// (0x00059002) aid_cell_bcale_month_pane

0xd298,	// (0x0005900e) bcale_month_pane_ParamLimits

0xd298,	// (0x0005900e) bcale_month_pane

0xd2a8,	// (0x0005901e) bcale_preview_pane_ParamLimits

0xd2a8,	// (0x0005901e) bcale_preview_pane

0x17a8,	// (0x0004d51e) list_single_fs_bigclock_pane_t1_ParamLimits

0x17c2,	// (0x0004d538) list_single_fs_bigclock_pane_t2_ParamLimits

0x17c2,	// (0x0004d538) list_single_fs_bigclock_pane_t2

0x0001,

0xfe89,	// (0x0005bbff) list_single_fs_bigclock_pane_t_ParamLimits

0xfe89,	// (0x0005bbff) list_single_fs_bigclock_pane_t

0x1a20,	// (0x0004d796) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfeed,	// (0x0005bc63) main_fs_bigclock_unlock_btn_pane_g

0xdab7,	// (0x0005982d) aid_dia3_key_size_ParamLimits

0xdab7,	// (0x0005982d) aid_dia3_key_size

0xdac3,	// (0x00059839) aid_dia3_listrow_size_ParamLimits

0xdac3,	// (0x00059839) aid_dia3_listrow_size

0xdad3,	// (0x00059849) dia3_keypad_fun_pane_ParamLimits

0xdad3,	// (0x00059849) dia3_keypad_fun_pane

0xdae5,	// (0x0005985b) dia3_keypad_num_pane_ParamLimits

0xdae5,	// (0x0005985b) dia3_keypad_num_pane

0xdaf7,	// (0x0005986d) dia3_listscroll_pane_ParamLimits

0xdaf7,	// (0x0005986d) dia3_listscroll_pane

0xdb05,	// (0x0005987b) dia3_numentry_pane_ParamLimits

0xdb05,	// (0x0005987b) dia3_numentry_pane

0x1a36,	// (0x0004d7ac) dia3_list_pane

0x1a41,	// (0x0004d7b7) scroll_pane_cp12

0x0450,	// (0x0004c1c6) bg_dia3_numentry_pane

0xdb13,	// (0x00059889) dia3_numentry_pane_t1

0xdb22,	// (0x00059898) cell_dia3_key_num_pane

0xdb2a,	// (0x000598a0) cell_dia3_key0_fun_pane_ParamLimits

0xdb2a,	// (0x000598a0) cell_dia3_key0_fun_pane

0xdb37,	// (0x000598ad) cell_dia3_key1_fun_pane_ParamLimits

0xdb37,	// (0x000598ad) cell_dia3_key1_fun_pane

0xdb44,	// (0x000598ba) dia3_listrow_pane

0xeac3,	// (0x0005a839) bg_dia3_numentry_pane_g1

0x0450,	// (0x0004c1c6) bg_button_pane_cp21

0x1a4c,	// (0x0004d7c2) cell_dia3_key_num_pane_t1

0x1a5a,	// (0x0004d7d0) cell_dia3_key_num_pane_t2

0x1a69,	// (0x0004d7df) cell_dia3_key_num_pane_t3

0x1a78,	// (0x0004d7ee) cell_dia3_key_num_pane_t4

0x0003,

0xff09,	// (0x0005bc7f) cell_dia3_key_num_pane_t

0x0450,	// (0x0004c1c6) bg_button_pane_cp19

0xdb51,	// (0x000598c7) cell_dia3_key0_fun_pane_g1

0x0450,	// (0x0004c1c6) bg_button_pane_cp20

0xdb59,	// (0x000598cf) cell_dia3_key1_fun_pane_g1

0xdb61,	// (0x000598d7) area_left_week_number_pane

0xdb6a,	// (0x000598e0) area_top_day_name_pane

0xdb73,	// (0x000598e9) frame_month_view_pane

0xdb7d,	// (0x000598f3) grid_month_view_pane

0xdb87,	// (0x000598fd) cell_top_day_name_pane_ParamLimits

0xdb87,	// (0x000598fd) cell_top_day_name_pane

0xdba1,	// (0x00059917) cell_area_left_week_number_pane_ParamLimits

0xdba1,	// (0x00059917) cell_area_left_week_number_pane

0xdbb5,	// (0x0005992b) cell_month_view_pane_ParamLimits

0xdbb5,	// (0x0005992b) cell_month_view_pane

0x1a87,	// (0x0004d7fd) frm_month_g1

0xdbd2,	// (0x00059948) frm_month_g2

0xdbdc,	// (0x00059952) frm_month_g3

0xdbe6,	// (0x0005995c) frm_month_g4

0xdbf0,	// (0x00059966) frm_month_g5

0xdbfa,	// (0x00059970) frm_month_g6

0xdc04,	// (0x0005997a) frm_month_g7

0x1a90,	// (0x0004d806) frm_month_g8

0xdc0e,	// (0x00059984) frm_month_g9

0xdc17,	// (0x0005998d) frm_month_g10

0xdc20,	// (0x00059996) frm_month_g11

0xdc29,	// (0x0005999f) frm_month_g12

0xdc32,	// (0x000599a8) frm_month_g13

0xdc3b,	// (0x000599b1) frm_month_g14

0xdc44,	// (0x000599ba) frm_month_g15

0xdc4f,	// (0x000599c5) frm_month_g16

0x000f,

0xff12,	// (0x0005bc88) frm_month_g

0xdc5a,	// (0x000599d0) cell_top_day_name_pane_t1

0xdc69,	// (0x000599df) cell_area_left_week_number_pane_g1

0xdc5a,	// (0x000599d0) cell_area_left_week_number_pane_t1

0x462c,	// (0x000503a2) cell_month_view_pane_g1

0xdc71,	// (0x000599e7) cell_month_view_pane_t1

0x0450,	// (0x0004c1c6) main_fps_pane

0xf052,	// (0x0005adc8) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xf052,	// (0x0005adc8) cmail_ddmenu_btn02_pane_cp1

0xf06e,	// (0x0005ade4) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xf06e,	// (0x0005ade4) cmail_ddmenu_btn02_pane_cp2

0xd567,	// (0x000592dd) cmail_ddmenu_btn02_pane_g2_ParamLimits

0xd567,	// (0x000592dd) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfe3a,	// (0x0005bbb0) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfe3a,	// (0x0005bbb0) cmail_ddmenu_btn02_pane_g

0xd585,	// (0x000592fb) cmail_ddmenu_btn02_pane_t2_ParamLimits

0xd585,	// (0x000592fb) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfe3f,	// (0x0005bbb5) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfe3f,	// (0x0005bbb5) cmail_ddmenu_btn02_pane_t

0xdc80,	// (0x000599f6) fps_text_pane_ParamLimits

0xdc80,	// (0x000599f6) fps_text_pane

0xdc8d,	// (0x00059a03) main_fps_pane_g1_ParamLimits

0xdc8d,	// (0x00059a03) main_fps_pane_g1

0xdc9b,	// (0x00059a11) wait_bar_pane_cp010_ParamLimits

0xdc9b,	// (0x00059a11) wait_bar_pane_cp010

0xdca7,	// (0x00059a1d) fps_text_pane_t1_ParamLimits

0xdca7,	// (0x00059a1d) fps_text_pane_t1

0xac45,	// (0x000569bb) cam4_image_uncrop_pane_g1

0xac4e,	// (0x000569c4) cam4_image_uncrop_pane_g2

0xac57,	// (0x000569cd) cam4_image_uncrop_pane_g3

0xac60,	// (0x000569d6) cam4_image_uncrop_pane_g4

0x0003,

0xf90d,	// (0x0005b683) cam4_image_uncrop_pane_g

0xdb44,	// (0x000598ba) dia3_listrow_pane_ParamLimits

0x0450,	// (0x0004c1c6) main_phob2_pane

0xd0ab,	// (0x00058e21) cell_tport_appsw_pane_cp02_ParamLimits

0xd0ab,	// (0x00058e21) cell_tport_appsw_pane_cp02

0xd0ba,	// (0x00058e30) cell_tport_appsw_pane_cp03_ParamLimits

0xd0ba,	// (0x00058e30) cell_tport_appsw_pane_cp03

0x0450,	// (0x0004c1c6) phob2_contact_card_pane

0x0450,	// (0x0004c1c6) phob2_listscroll_pane

0x1a99,	// (0x0004d80f) phob2_list_pane

0x1aa1,	// (0x0004d817) scroll_pane_cp034

0xdcc0,	// (0x00059a36) phob2_cc_data_pane_ParamLimits

0xdcc0,	// (0x00059a36) phob2_cc_data_pane

0xdcda,	// (0x00059a50) phob2_cc_listscroll_pane_ParamLimits

0xdcda,	// (0x00059a50) phob2_cc_listscroll_pane

0xdcf4,	// (0x00059a6a) list_double_large_graphic_phob2_pane_ParamLimits

0xdcf4,	// (0x00059a6a) list_double_large_graphic_phob2_pane

0xdd17,	// (0x00059a8d) list_double_large_graphic_phob2_pane_g1_ParamLimits

0xdd17,	// (0x00059a8d) list_double_large_graphic_phob2_pane_g1

0xdd24,	// (0x00059a9a) list_double_large_graphic_phob2_pane_g2_ParamLimits

0xdd24,	// (0x00059a9a) list_double_large_graphic_phob2_pane_g2

0x0001,

0xff33,	// (0x0005bca9) list_double_large_graphic_phob2_pane_g_ParamLimits

0xff33,	// (0x0005bca9) list_double_large_graphic_phob2_pane_g

0xdd30,	// (0x00059aa6) list_double_large_graphic_phob2_pane_t1_ParamLimits

0xdd30,	// (0x00059aa6) list_double_large_graphic_phob2_pane_t1

0xdd45,	// (0x00059abb) list_double_large_graphic_phob2_pane_t2_ParamLimits

0xdd45,	// (0x00059abb) list_double_large_graphic_phob2_pane_t2

0x0001,

0xff38,	// (0x0005bcae) list_double_large_graphic_phob2_pane_t_ParamLimits

0xff38,	// (0x0005bcae) list_double_large_graphic_phob2_pane_t

0x0450,	// (0x0004c1c6) list_highlight_pane_cp024

0x1aa9,	// (0x0004d81f) phob2_cc_button_pane

0xdd57,	// (0x00059acd) phob2_cc_data_pane_g1_ParamLimits

0xdd57,	// (0x00059acd) phob2_cc_data_pane_g1

0xdd63,	// (0x00059ad9) phob2_cc_data_pane_g2_ParamLimits

0xdd63,	// (0x00059ad9) phob2_cc_data_pane_g2

0x0001,

0xff3d,	// (0x0005bcb3) phob2_cc_data_pane_g_ParamLimits

0xff3d,	// (0x0005bcb3) phob2_cc_data_pane_g

0xdd6f,	// (0x00059ae5) phob2_cc_data_pane_t1_ParamLimits

0xdd6f,	// (0x00059ae5) phob2_cc_data_pane_t1

0xdd81,	// (0x00059af7) phob2_cc_data_pane_t2_ParamLimits

0xdd81,	// (0x00059af7) phob2_cc_data_pane_t2

0xdd93,	// (0x00059b09) phob2_cc_data_pane_t3_ParamLimits

0xdd93,	// (0x00059b09) phob2_cc_data_pane_t3

0x0002,

0xff42,	// (0x0005bcb8) phob2_cc_data_pane_t_ParamLimits

0xff42,	// (0x0005bcb8) phob2_cc_data_pane_t

0x1ab1,	// (0x0004d827) phob2_cc_list_pane_ParamLimits

0x1ab1,	// (0x0004d827) phob2_cc_list_pane

0xe9e0,	// (0x0005a756) scroll_pane_cp035_ParamLimits

0xe9e0,	// (0x0005a756) scroll_pane_cp035

0x3675,	// (0x0004f3eb) bg_button_pane_cp033

0x1abd,	// (0x0004d833) phob2_cc_button_pane_g1

0x1ac9,	// (0x0004d83f) phob2_cc_button_pane_t1

0x1ade,	// (0x0004d854) phob2_cc_button_pane_t2

0x0001,

0xff49,	// (0x0005bcbf) phob2_cc_button_pane_t

0xdda5,	// (0x00059b1b) list_double_large_graphic_phob2_cc_pane_ParamLimits

0xdda5,	// (0x00059b1b) list_double_large_graphic_phob2_cc_pane

0xddd5,	// (0x00059b4b) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0xddd5,	// (0x00059b4b) list_double_large_graphic_phob2_cc_pane_g1

0xdde6,	// (0x00059b5c) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0xdde6,	// (0x00059b5c) list_double_large_graphic_phob2_cc_pane_g2

0xddf5,	// (0x00059b6b) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0xddf5,	// (0x00059b6b) list_double_large_graphic_phob2_cc_pane_g3

0xde04,	// (0x00059b7a) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0xde04,	// (0x00059b7a) list_double_large_graphic_phob2_cc_pane_g4

0xde15,	// (0x00059b8b) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0xde15,	// (0x00059b8b) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xff4e,	// (0x0005bcc4) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xff4e,	// (0x0005bcc4) list_double_large_graphic_phob2_cc_pane_g

0xde24,	// (0x00059b9a) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0xde24,	// (0x00059b9a) list_double_large_graphic_phob2_cc_pane_t1

0xde4d,	// (0x00059bc3) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0xde4d,	// (0x00059bc3) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xff59,	// (0x0005bccf) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xff59,	// (0x0005bccf) list_double_large_graphic_phob2_cc_pane_t

0x1af0,	// (0x0004d866) list_highlight_pane_cp025_ParamLimits

0x1af0,	// (0x0004d866) list_highlight_pane_cp025

0x3675,	// (0x0004f3eb) bg_button_pane_cp033_ParamLimits

0x1abd,	// (0x0004d833) phob2_cc_button_pane_g1_ParamLimits

0x1ac9,	// (0x0004d83f) phob2_cc_button_pane_t1_ParamLimits

0x1ade,	// (0x0004d854) phob2_cc_button_pane_t2_ParamLimits

0xff49,	// (0x0005bcbf) phob2_cc_button_pane_t_ParamLimits

0x5daa,	// (0x00051b20) popup_wgtman_window

0xe166,	// (0x00059edc) scroll_pane_cp038

0xd918,	// (0x0005968e) wgtman_btn_pane_cp_01_ParamLimits

0xd918,	// (0x0005968e) wgtman_btn_pane_cp_01

0x1afe,	// (0x0004d874) wgtman_content_pane

0x1847,	// (0x0004d5bd) wgtman_heading_pane

0x0450,	// (0x0004c1c6) bg_heading_pane_cp02

0x1b07,	// (0x0004d87d) wgtman_heading_pane_g1

0x1b0f,	// (0x0004d885) wgtman_heading_pane_t1

0x1b1d,	// (0x0004d893) scroll_pane_cp036

0x1b25,	// (0x0004d89b) wgtman_list_pane

0x1b2d,	// (0x0004d8a3) wgtman_list_pane_t1_ParamLimits

0x1b2d,	// (0x0004d8a3) wgtman_list_pane_t1

0xaba4,	// (0x0005691a) cam4_grid_pane

0xb8e8,	// (0x0005765e) bg_button_pane_cp015_ParamLimits

0xb8fa,	// (0x00057670) bg_button_pane_cp016_ParamLimits

0xb90d,	// (0x00057683) bg_button_pane_cp017_ParamLimits

0xb963,	// (0x000576d9) popup_vitu2_query_window_g3_ParamLimits

0xb963,	// (0x000576d9) popup_vitu2_query_window_g3

0xba1e,	// (0x00057794) popup_vitu2_query_window_t6_ParamLimits

0xba1e,	// (0x00057794) popup_vitu2_query_window_t6

0xba49,	// (0x000577bf) popup_vitu2_query_window_t7_ParamLimits

0xba49,	// (0x000577bf) popup_vitu2_query_window_t7

0xec40,	// (0x0005a9b6) cam4_grid_pane_g1

0xec49,	// (0x0005a9bf) cam4_grid_pane_g2

0x1b4b,	// (0x0004d8c1) cam4_grid_pane_g3

0x1b54,	// (0x0004d8ca) cam4_grid_pane_g4

0x0003,

0xff5e,	// (0x0005bcd4) cam4_grid_pane_g

0x6adb,	// (0x00052851) aid_placing_vt_slider_lsc_ParamLimits

0x6e1b,	// (0x00052b91) vidtel_button_pane_ParamLimits

0x6e1b,	// (0x00052b91) vidtel_button_pane

0x0450,	// (0x0004c1c6) bg_button_pane_cp034

0xde76,	// (0x00059bec) vidtel_button_pane_g1

0x1b5f,	// (0x0004d8d5) vidtel_button_pane_t1

0xe268,	// (0x00059fde) aid_size_vtel_slider_touch

0xe9e0,	// (0x0005a756) scroll_pane_cp039

0xeb01,	// (0x0005a877) ncim_query_button_pane_cp01_ParamLimits

0xeb20,	// (0x0005a896) ncimui_query_pane_g1_ParamLimits

0x3675,	// (0x0004f3eb) input_focus_pane_cp012_ParamLimits

0xeb45,	// (0x0005a8bb) ncim_query_entry_pane_t1_ParamLimits

0xe9e0,	// (0x0005a756) scroll_pane_cp039_ParamLimits
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

} // end of namespace AknLayoutScalable_Abrw_pnp4_apps_nhd4_prt_tch_Small
