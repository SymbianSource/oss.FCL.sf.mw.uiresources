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

#include "aknlayoutscalable_elaf_pnl4_apps_nhd4_lsc_tch_small.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pnp4_apps_nhd4_prt_tch[]; }

namespace AknLayoutScalable_Elaf_pnl4_apps_nhd4_lsc_tch_Small
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pnp4_apps_nhd4_prt_tch + 0x00041b24 };

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
0x183d,	// (0x00043361) Screen

0x1849,	// (0x0004336d) application_window

0x1885,	// (0x000433a9) area_bottom_pane_ParamLimits

0x1885,	// (0x000433a9) area_bottom_pane

0x18be,	// (0x000433e2) area_top_pane_ParamLimits

0x18be,	// (0x000433e2) area_top_pane

0xbdbf,	// (0x0004d8e3) call_video_uplink_pane_ParamLimits

0xbdbf,	// (0x0004d8e3) call_video_uplink_pane

0x1933,	// (0x00043457) main_pane_ParamLimits

0x1933,	// (0x00043457) main_pane

0xe47a,	// (0x0004ff9e) context_pane

0x483f,	// (0x00046363) navi_pane

0x4867,	// (0x0004638b) popup_cale_events_window_ParamLimits

0x4867,	// (0x0004638b) popup_cale_events_window

0xe48d,	// (0x0004ffb1) popup_mup_playback_window

0x487f,	// (0x000463a3) signal_pane

0xc558,	// (0x0004e07c) main_browser_pane

0xcfe0,	// (0x0004eb04) main_burst_pane

0x459f,	// (0x000460c3) main_calc_pane

0xcfe0,	// (0x0004eb04) main_cale_day_pane

0xc558,	// (0x0004e07c) main_cale_month_pane

0xcfe0,	// (0x0004eb04) main_cale_week_pane

0xcfe0,	// (0x0004eb04) main_call_pane

0xc1ee,	// (0x0004dd12) main_call_poc_pane

0xcfe0,	// (0x0004eb04) main_camera_pane

0xcfe0,	// (0x0004eb04) main_chi_dic_pane

0xce6f,	// (0x0004e993) main_clock_pane

0xc1ee,	// (0x0004dd12) main_fmradio_pane

0xcfe0,	// (0x0004eb04) main_graph_messa_pane

0xc1ee,	// (0x0004dd12) main_help_pane

0xc558,	// (0x0004e07c) main_im_pane

0xc449,	// (0x0004df6d) main_image_pane_ParamLimits

0xc449,	// (0x0004df6d) main_image_pane

0xc1ee,	// (0x0004dd12) main_location2_pane

0xcfe0,	// (0x0004eb04) main_location_pane

0xc1ee,	// (0x0004dd12) main_messa_pane

0xc1ee,	// (0x0004dd12) main_mp2_pane

0xcfe0,	// (0x0004eb04) main_mp_pane

0xc1ee,	// (0x0004dd12) main_msg_pane

0xc1ee,	// (0x0004dd12) main_mup_eq_pane

0xc1ee,	// (0x0004dd12) main_mup_pane

0xcfe0,	// (0x0004eb04) main_notes_pane

0xc1ee,	// (0x0004dd12) main_pec_pane

0xc1ee,	// (0x0004dd12) main_phob_pane

0xc1ee,	// (0x0004dd12) main_pinb_pane

0xc1ee,	// (0x0004dd12) main_postcard_pane

0xc1ee,	// (0x0004dd12) main_qdial_pane

0xcfe0,	// (0x0004eb04) main_skin_pane

0xc1ee,	// (0x0004dd12) main_smil2_pane

0xcfe0,	// (0x0004eb04) main_smil_pane

0xcfe0,	// (0x0004eb04) main_video_pane

0xcfe0,	// (0x0004eb04) main_video_tele_pane

0xc449,	// (0x0004df6d) main_viewer_pane_ParamLimits

0xc449,	// (0x0004df6d) main_viewer_pane

0xcfe0,	// (0x0004eb04) main_vorec_pane

0x45f3,	// (0x00046117) popup_blid_sat_info_window_ParamLimits

0x45f3,	// (0x00046117) popup_blid_sat_info_window

0x464b,	// (0x0004616f) popup_dyc_status_message_window_ParamLimits

0x464b,	// (0x0004616f) popup_dyc_status_message_window

0x4663,	// (0x00046187) popup_grid_large_graphic_window_ParamLimits

0x4663,	// (0x00046187) popup_grid_large_graphic_window

0x4719,	// (0x0004623d) popup_loc_request_window_ParamLimits

0x4719,	// (0x0004623d) popup_loc_request_window

0x4817,	// (0x0004633b) popup_wml_address_window_ParamLimits

0x4817,	// (0x0004633b) popup_wml_address_window

0x43d9,	// (0x00045efd) call_muted_g1

0x4091,	// (0x00045bb5) popup_call_audio_conf_window_ParamLimits

0x4091,	// (0x00045bb5) popup_call_audio_conf_window

0x43ed,	// (0x00045f11) popup_call_audio_first_window_ParamLimits

0x43ed,	// (0x00045f11) popup_call_audio_first_window

0x4463,	// (0x00045f87) popup_call_audio_in_window_ParamLimits

0x4463,	// (0x00045f87) popup_call_audio_in_window

0x449f,	// (0x00045fc3) popup_call_audio_out_window_ParamLimits

0x449f,	// (0x00045fc3) popup_call_audio_out_window

0x44d9,	// (0x00045ffd) popup_call_audio_second_window_ParamLimits

0x44d9,	// (0x00045ffd) popup_call_audio_second_window

0x452f,	// (0x00046053) popup_call_audio_wait_window_ParamLimits

0x452f,	// (0x00046053) popup_call_audio_wait_window

0x4564,	// (0x00046088) popup_number_entry_window_ParamLimits

0x4564,	// (0x00046088) popup_number_entry_window

0xbddd,	// (0x0004d901) bg_popup_call_pane_cp05_ParamLimits

0xbddd,	// (0x0004d901) bg_popup_call_pane_cp05

0xbdfd,	// (0x0004d921) popup_number_entry_window_t1

0xbe10,	// (0x0004d934) popup_number_entry_window_t2

0xbe22,	// (0x0004d946) popup_number_entry_window_t3

0x0003,

0xf0ec,	// (0x00050c10) popup_number_entry_window_t

0xbe34,	// (0x0004d958) text_title_cp2

0xbe47,	// (0x0004d96b) bg_popup_call_pane_cp_ParamLimits

0xbe47,	// (0x0004d96b) bg_popup_call_pane_cp

0xbe55,	// (0x0004d979) call_thumbnail_pane

0xbe5d,	// (0x0004d981) popup_call_audio_in_window_g1_ParamLimits

0xbe5d,	// (0x0004d981) popup_call_audio_in_window_g1

0xbe69,	// (0x0004d98d) popup_call_audio_in_window_g2_ParamLimits

0xbe69,	// (0x0004d98d) popup_call_audio_in_window_g2

0xbe75,	// (0x0004d999) popup_call_audio_in_window_g3_ParamLimits

0xbe75,	// (0x0004d999) popup_call_audio_in_window_g3

0x0002,

0xf0f5,	// (0x00050c19) popup_call_audio_in_window_g_ParamLimits

0xf0f5,	// (0x00050c19) popup_call_audio_in_window_g

0xbe81,	// (0x0004d9a5) popup_call_audio_in_window_t1_ParamLimits

0xbe81,	// (0x0004d9a5) popup_call_audio_in_window_t1

0xbe9c,	// (0x0004d9c0) popup_call_audio_in_window_t2_ParamLimits

0xbe9c,	// (0x0004d9c0) popup_call_audio_in_window_t2

0xbeb7,	// (0x0004d9db) popup_call_audio_in_window_t3_ParamLimits

0xbeb7,	// (0x0004d9db) popup_call_audio_in_window_t3

0x0002,

0xf0fc,	// (0x00050c20) popup_call_audio_in_window_t_ParamLimits

0xf0fc,	// (0x00050c20) popup_call_audio_in_window_t

0xbe47,	// (0x0004d96b) bg_popup_call_pane_cp01_ParamLimits

0xbe47,	// (0x0004d96b) bg_popup_call_pane_cp01

0xbe55,	// (0x0004d979) call_thumbnail_pane_cp02

0xbeca,	// (0x0004d9ee) call_type_pane_cp022

0xbed2,	// (0x0004d9f6) popup_call_audio_out_window_g1_ParamLimits

0xbed2,	// (0x0004d9f6) popup_call_audio_out_window_g1

0xbee4,	// (0x0004da08) popup_call_audio_out_window_g2_ParamLimits

0xbee4,	// (0x0004da08) popup_call_audio_out_window_g2

0xbef0,	// (0x0004da14) popup_call_audio_out_window_g3_ParamLimits

0xbef0,	// (0x0004da14) popup_call_audio_out_window_g3

0x0002,

0xf103,	// (0x00050c27) popup_call_audio_out_window_g_ParamLimits

0xf103,	// (0x00050c27) popup_call_audio_out_window_g

0xbf02,	// (0x0004da26) popup_call_audio_out_window_t1_ParamLimits

0xbf02,	// (0x0004da26) popup_call_audio_out_window_t1

0xbf1a,	// (0x0004da3e) popup_call_audio_out_window_t2_ParamLimits

0xbf1a,	// (0x0004da3e) popup_call_audio_out_window_t2

0x0001,

0xf10a,	// (0x00050c2e) popup_call_audio_out_window_t_ParamLimits

0xf10a,	// (0x00050c2e) popup_call_audio_out_window_t

0xbf2f,	// (0x0004da53) bg_popup_call_pane_ParamLimits

0xbf2f,	// (0x0004da53) bg_popup_call_pane

0x1aea,	// (0x0004360e) call_thumbnail_pane_cp_ParamLimits

0x1aea,	// (0x0004360e) call_thumbnail_pane_cp

0xbfb3,	// (0x0004dad7) call_type_pane_cp01_ParamLimits

0xbfb3,	// (0x0004dad7) call_type_pane_cp01

0xbff7,	// (0x0004db1b) popup_call_audio_first_window_g1_ParamLimits

0xbff7,	// (0x0004db1b) popup_call_audio_first_window_g1

0xc043,	// (0x0004db67) popup_call_audio_first_window_g2_ParamLimits

0xc043,	// (0x0004db67) popup_call_audio_first_window_g2

0x0001,

0xf10f,	// (0x00050c33) popup_call_audio_first_window_g_ParamLimits

0xf10f,	// (0x00050c33) popup_call_audio_first_window_g

0xc087,	// (0x0004dbab) popup_call_audio_first_window_t1_ParamLimits

0xc087,	// (0x0004dbab) popup_call_audio_first_window_t1

0xc133,	// (0x0004dc57) popup_call_audio_first_window_t4_ParamLimits

0xc133,	// (0x0004dc57) popup_call_audio_first_window_t4

0xc1bf,	// (0x0004dce3) popup_call_audio_first_window_t5_ParamLimits

0xc1bf,	// (0x0004dce3) popup_call_audio_first_window_t5

0x0002,

0xf114,	// (0x00050c38) popup_call_audio_first_window_t_ParamLimits

0xf114,	// (0x00050c38) popup_call_audio_first_window_t

0xc1ee,	// (0x0004dd12) bg_popup_call_pane_cp02

0xc1f8,	// (0x0004dd1c) call_type_pane_cp023

0xc200,	// (0x0004dd24) popup_call_audio_wait_window_g1

0xc208,	// (0x0004dd2c) popup_call_audio_wait_window_g2

0x0001,

0xf11b,	// (0x00050c3f) popup_call_audio_wait_window_g

0xc210,	// (0x0004dd34) popup_call_audio_wait_window_t3

0xc21e,	// (0x0004dd42) bg_popup_call_pane_cp03_ParamLimits

0xc21e,	// (0x0004dd42) bg_popup_call_pane_cp03

0xc27e,	// (0x0004dda2) call_thumbnail_pane_cp011_ParamLimits

0xc27e,	// (0x0004dda2) call_thumbnail_pane_cp011

0xc28a,	// (0x0004ddae) call_type_pane_cp034_ParamLimits

0xc28a,	// (0x0004ddae) call_type_pane_cp034

0xc2c6,	// (0x0004ddea) popup_call_audio_second_window_g1_ParamLimits

0xc2c6,	// (0x0004ddea) popup_call_audio_second_window_g1

0xc302,	// (0x0004de26) popup_call_audio_second_window_g2_ParamLimits

0xc302,	// (0x0004de26) popup_call_audio_second_window_g2

0x0001,

0xf120,	// (0x00050c44) popup_call_audio_second_window_g_ParamLimits

0xf120,	// (0x00050c44) popup_call_audio_second_window_g

0xc33e,	// (0x0004de62) popup_call_audio_second_window_t1_ParamLimits

0xc33e,	// (0x0004de62) popup_call_audio_second_window_t1

0xc3bf,	// (0x0004dee3) popup_call_audio_second_window_t2_ParamLimits

0xc3bf,	// (0x0004dee3) popup_call_audio_second_window_t2

0xc3f5,	// (0x0004df19) popup_call_audio_second_window_t3_ParamLimits

0xc3f5,	// (0x0004df19) popup_call_audio_second_window_t3

0x0002,

0xf125,	// (0x00050c49) popup_call_audio_second_window_t_ParamLimits

0xf125,	// (0x00050c49) popup_call_audio_second_window_t

0xc1ee,	// (0x0004dd12) bg_popup_call_pane_cp04

0xc42b,	// (0x0004df4f) list_conf_pane

0xc433,	// (0x0004df57) popup_call_audio_conf_window_t1

0xc441,	// (0x0004df65) call_thumbnail_pane_g1

0xc449,	// (0x0004df6d) bg_pinb_pane_ParamLimits

0xc449,	// (0x0004df6d) bg_pinb_pane

0xc457,	// (0x0004df7b) find_pinb_pane

0xc460,	// (0x0004df84) listscroll_pinb_pane_ParamLimits

0xc460,	// (0x0004df84) listscroll_pinb_pane

0xc46f,	// (0x0004df93) pinb_bg_pane_g1

0x1b0e,	// (0x00043632) pinb_bg_pane_g2

0x1b1a,	// (0x0004363e) pinb_bg_pane_g3

0x1b26,	// (0x0004364a) pinb_bg_pane_g4

0x1b32,	// (0x00043656) pinb_bg_pane_g5

0x1b3e,	// (0x00043662) pinb_bg_pane_g6

0x1b49,	// (0x0004366d) pinb_bg_pane_g7

0x1b54,	// (0x00043678) pinb_bg_pane_g8

0x1b5f,	// (0x00043683) pinb_bg_pane_g9

0x1b69,	// (0x0004368d) pinb_bg_pane_g10

0x0009,

0xf12c,	// (0x00050c50) pinb_bg_pane_g

0x1b7e,	// (0x000436a2) grid_pinb_pane

0x1b87,	// (0x000436ab) list_pinb_pane

0x1b90,	// (0x000436b4) scroll_pane_cp01_ParamLimits

0x1b90,	// (0x000436b4) scroll_pane_cp01

0xc481,	// (0x0004dfa5) find_pinb_pane_g1_ParamLimits

0xc481,	// (0x0004dfa5) find_pinb_pane_g1

0xc499,	// (0x0004dfbd) find_pinb_pane_t1

0xc4ab,	// (0x0004dfcf) find_pinb_pane_t2

0x0001,

0xf146,	// (0x00050c6a) find_pinb_pane_t

0xc4c0,	// (0x0004dfe4) input_focus_pane_cp01_ParamLimits

0xc4c0,	// (0x0004dfe4) input_focus_pane_cp01

0x1ba2,	// (0x000436c6) cell_pinb_pane_ParamLimits

0x1ba2,	// (0x000436c6) cell_pinb_pane

0x1bd4,	// (0x000436f8) cell_pinb_pane_g1_ParamLimits

0x1bd4,	// (0x000436f8) cell_pinb_pane_g1

0x1be4,	// (0x00043708) cell_pinb_pane_g2_ParamLimits

0x1be4,	// (0x00043708) cell_pinb_pane_g2

0xc4cc,	// (0x0004dff0) cell_pinb_pane_g3_ParamLimits

0xc4cc,	// (0x0004dff0) cell_pinb_pane_g3

0x0002,

0xf14b,	// (0x00050c6f) cell_pinb_pane_g_ParamLimits

0xf14b,	// (0x00050c6f) cell_pinb_pane_g

0xc1ee,	// (0x0004dd12) grid_highlight_pane_cp01

0x1bf0,	// (0x00043714) list_pinb_item_pane_ParamLimits

0x1bf0,	// (0x00043714) list_pinb_item_pane

0xc1ee,	// (0x0004dd12) list_highlight_pane_cp02

0xc4d8,	// (0x0004dffc) list_pinb_item_pane_g1_ParamLimits

0xc4d8,	// (0x0004dffc) list_pinb_item_pane_g1

0xc4e5,	// (0x0004e009) list_pinb_item_pane_g2_ParamLimits

0xc4e5,	// (0x0004e009) list_pinb_item_pane_g2

0x1c04,	// (0x00043728) list_pinb_item_pane_g3_ParamLimits

0x1c04,	// (0x00043728) list_pinb_item_pane_g3

0xc4f1,	// (0x0004e015) list_pinb_item_pane_g4_ParamLimits

0xc4f1,	// (0x0004e015) list_pinb_item_pane_g4

0x0003,

0xf152,	// (0x00050c76) list_pinb_item_pane_g_ParamLimits

0xf152,	// (0x00050c76) list_pinb_item_pane_g

0xc4fd,	// (0x0004e021) list_pinb_item_pane_t1_ParamLimits

0xc4fd,	// (0x0004e021) list_pinb_item_pane_t1

0x1c33,	// (0x00043757) calc_display_pane

0x1c5b,	// (0x0004377f) calc_paper_pane

0x1c7e,	// (0x000437a2) grid_calc_pane

0xc1ee,	// (0x0004dd12) bg_list_pane_cp01

0x1cac,	// (0x000437d0) clock_g1

0x1cb4,	// (0x000437d8) clock_g2

0x0001,

0xf15b,	// (0x00050c7f) clock_g

0x1cbc,	// (0x000437e0) clock_t1_ParamLimits

0x1cbc,	// (0x000437e0) clock_t1

0x1cd1,	// (0x000437f5) clock_t2_ParamLimits

0x1cd1,	// (0x000437f5) clock_t2

0x1ce3,	// (0x00043807) clock_t3_ParamLimits

0x1ce3,	// (0x00043807) clock_t3

0x1cf5,	// (0x00043819) clock_t4_ParamLimits

0x1cf5,	// (0x00043819) clock_t4

0x1d07,	// (0x0004382b) clock_t5_ParamLimits

0x1d07,	// (0x0004382b) clock_t5

0x1d1c,	// (0x00043840) clock_t6_ParamLimits

0x1d1c,	// (0x00043840) clock_t6

0x1d2e,	// (0x00043852) clock_t7_ParamLimits

0x1d2e,	// (0x00043852) clock_t7

0x1d40,	// (0x00043864) clock_t8_ParamLimits

0x1d40,	// (0x00043864) clock_t8

0x1d54,	// (0x00043878) clock_t9_ParamLimits

0x1d54,	// (0x00043878) clock_t9

0x0008,

0xf160,	// (0x00050c84) clock_t_ParamLimits

0xf160,	// (0x00050c84) clock_t

0xc514,	// (0x0004e038) popup_clock_analogue_window_cp02

0xc514,	// (0x0004e038) popup_clock_digital_window_cp01

0xc51c,	// (0x0004e040) listscroll_help_pane

0xc1ee,	// (0x0004dd12) phob_pre_status_pane

0xc526,	// (0x0004e04a) grid_qdial_pane

0xc1ee,	// (0x0004dd12) listscroll_mce_pane

0xc530,	// (0x0004e054) bg_notes_pane

0xc53a,	// (0x0004e05e) list_notes_pane

0x1d68,	// (0x0004388c) scroll_pane_cp06

0xc544,	// (0x0004e068) bg_calc_paper_pane

0xa704,	// (0x0004c228) list_calc_pane

0xc558,	// (0x0004e07c) bg_calc_display_pane

0x1d73,	// (0x00043897) calc_display_pane_t1

0x1d85,	// (0x000438a9) calc_display_pane_t2

0xa71e,	// (0x0004c242) calc_display_pane_t3

0x0002,

0xf173,	// (0x00050c97) calc_display_pane_t

0x1d97,	// (0x000438bb) cell_calc_pane_ParamLimits

0x1d97,	// (0x000438bb) cell_calc_pane

0xc564,	// (0x0004e088) bg_calc_paper_pane_g1

0xc570,	// (0x0004e094) bg_calc_paper_pane_g2

0xc57c,	// (0x0004e0a0) bg_calc_paper_pane_g3

0xc588,	// (0x0004e0ac) bg_calc_paper_pane_g4

0xc594,	// (0x0004e0b8) bg_calc_paper_pane_g5

0x1dcc,	// (0x000438f0) bg_calc_paper_pane_g6

0x1ddb,	// (0x000438ff) bg_calc_paper_pane_g7

0x1dea,	// (0x0004390e) bg_calc_paper_pane_g8

0x0007,

0xf17a,	// (0x00050c9e) bg_calc_paper_pane_g

0x1dfd,	// (0x00043921) calc_bg_paper_pane_g9

0x1e10,	// (0x00043934) list_calc_item_pane_ParamLimits

0x1e10,	// (0x00043934) list_calc_item_pane

0xc5a0,	// (0x0004e0c4) list_calc_item_pane_g1

0xa730,	// (0x0004c254) list_calc_item_pane_t1_ParamLimits

0xa730,	// (0x0004c254) list_calc_item_pane_t1

0x1e26,	// (0x0004394a) list_calc_item_pane_t2_ParamLimits

0x1e26,	// (0x0004394a) list_calc_item_pane_t2

0x0001,

0xf18b,	// (0x00050caf) list_calc_item_pane_t_ParamLimits

0xf18b,	// (0x00050caf) list_calc_item_pane_t

0xc5ad,	// (0x0004e0d1) cell_calc_pane_g1

0xc5b7,	// (0x0004e0db) grid_highlight_pane_cp02

0xc5d9,	// (0x0004e0fd) bg_calc_display_pane_g1

0xa742,	// (0x0004c266) bg_calc_display_pane_g2

0xc5e2,	// (0x0004e106) bg_calc_display_pane_g3

0x0002,

0xf195,	// (0x00050cb9) bg_calc_display_pane_g

0x1e58,	// (0x0004397c) cell_qdial_pane_ParamLimits

0x1e58,	// (0x0004397c) cell_qdial_pane

0x1e6c,	// (0x00043990) cell_qdial_pane_g1_ParamLimits

0x1e6c,	// (0x00043990) cell_qdial_pane_g1

0x1e82,	// (0x000439a6) cell_qdial_pane_g2_ParamLimits

0x1e82,	// (0x000439a6) cell_qdial_pane_g2

0xc5eb,	// (0x0004e10f) cell_qdial_pane_g3_ParamLimits

0xc5eb,	// (0x0004e10f) cell_qdial_pane_g3

0x0003,

0xf19c,	// (0x00050cc0) cell_qdial_pane_g_ParamLimits

0xf19c,	// (0x00050cc0) cell_qdial_pane_g

0x1ea9,	// (0x000439cd) cell_qdial_pane_t1_ParamLimits

0x1ea9,	// (0x000439cd) cell_qdial_pane_t1

0x1ec1,	// (0x000439e5) cell_qdial_pane_t2_ParamLimits

0x1ec1,	// (0x000439e5) cell_qdial_pane_t2

0x1ed4,	// (0x000439f8) cell_qdial_pane_t3_ParamLimits

0x1ed4,	// (0x000439f8) cell_qdial_pane_t3

0x0002,

0xf1a5,	// (0x00050cc9) cell_qdial_pane_t_ParamLimits

0xf1a5,	// (0x00050cc9) cell_qdial_pane_t

0xc1ee,	// (0x0004dd12) grid_highlight_pane_cp04

0xc5f7,	// (0x0004e11b) thumbnail_qdial_pane_ParamLimits

0xc5f7,	// (0x0004e11b) thumbnail_qdial_pane

0xc653,	// (0x0004e177) list_help_pane

0xc65c,	// (0x0004e180) scroll_pane_cp02

0x1ee7,	// (0x00043a0b) help_list_pane_t1_ParamLimits

0x1ee7,	// (0x00043a0b) help_list_pane_t1

0xa74c,	// (0x0004c270) bg_notes_pane_g2

0xa754,	// (0x0004c278) bg_notes_pane_g3

0xa75c,	// (0x0004c280) notes_bg_pane_g1

0xa764,	// (0x0004c288) notes_bg_pane_g4

0xa76c,	// (0x0004c290) notes_bg_pane_g5

0xa774,	// (0x0004c298) notes_bg_pane_g6

0xa77c,	// (0x0004c2a0) notes_bg_pane_g7

0xa784,	// (0x0004c2a8) notes_bg_pane_g8

0xa78c,	// (0x0004c2b0) notes_bg_pane_g9

0x0006,

0xf1ac,	// (0x00050cd0) notes_bg_pane_g

0xd8d5,	// (0x0004f3f9) list_notes_text_pane_ParamLimits

0xd8d5,	// (0x0004f3f9) list_notes_text_pane

0xc665,	// (0x0004e189) list_notes_text_pane_g1

0x0dc8,	// (0x000428ec) list_notes_text_pane_t1

0xc558,	// (0x0004e07c) listscroll_cale_week_pane

0x1f24,	// (0x00043a48) bg_cale_heading_pane

0xc67f,	// (0x0004e1a3) bg_cale_pane_cp01

0x1f3c,	// (0x00043a60) cale_week_corner_pane

0x1f4d,	// (0x00043a71) cale_week_day_heading_pane

0x1f65,	// (0x00043a89) cale_week_scroll_pane_g1

0x1f7a,	// (0x00043a9e) cale_week_scroll_pane_g2

0x1f8b,	// (0x00043aaf) cale_week_scroll_pane_g3

0x1f9c,	// (0x00043ac0) cale_week_scroll_pane_g4

0x1fad,	// (0x00043ad1) cale_week_scroll_pane_g5

0x1fc0,	// (0x00043ae4) cale_week_scroll_pane_g6

0x1fd3,	// (0x00043af7) cale_week_scroll_pane_g7

0x1fe6,	// (0x00043b0a) cale_week_scroll_pane_g8

0x1ff9,	// (0x00043b1d) cale_week_scroll_pane_g9

0x200a,	// (0x00043b2e) cale_week_scroll_pane_g10

0x201b,	// (0x00043b3f) cale_week_scroll_pane_g11

0x202c,	// (0x00043b50) cale_week_scroll_pane_g12

0x203d,	// (0x00043b61) cale_week_scroll_pane_g13

0x204e,	// (0x00043b72) cale_week_scroll_pane_g14

0x205f,	// (0x00043b83) cale_week_scroll_pane_g15

0x000e,

0xf1bb,	// (0x00050cdf) cale_week_scroll_pane_g

0x2070,	// (0x00043b94) cale_week_time_pane

0x2083,	// (0x00043ba7) grid_cale_week_pane

0x2098,	// (0x00043bbc) scroll_pane_cp08

0x20b2,	// (0x00043bd6) cell_cale_week_pane_ParamLimits

0x20b2,	// (0x00043bd6) cell_cale_week_pane

0x20f2,	// (0x00043c16) cale_week_day_heading_pane_t1

0x2106,	// (0x00043c2a) cale_week_day_heading_pane_t2

0x211a,	// (0x00043c3e) cale_week_day_heading_pane_t3

0x212e,	// (0x00043c52) cale_week_day_heading_pane_t4

0x2142,	// (0x00043c66) cale_week_day_heading_pane_t5

0x2156,	// (0x00043c7a) cale_week_day_heading_pane_t6

0x216c,	// (0x00043c90) cale_week_day_heading_pane_t7

0x0006,

0xf1da,	// (0x00050cfe) cale_week_day_heading_pane_t

0xc6aa,	// (0x0004e1ce) bg_cale_side_pane

0x2180,	// (0x00043ca4) cale_week_time_pane_t1

0x2198,	// (0x00043cbc) cale_week_time_pane_t2

0x21b0,	// (0x00043cd4) cale_week_time_pane_t3

0x21c8,	// (0x00043cec) cale_week_time_pane_t4

0x21e0,	// (0x00043d04) cale_week_time_pane_t5

0x21f8,	// (0x00043d1c) cale_week_time_pane_t6

0x2210,	// (0x00043d34) cale_week_time_pane_t7

0x2228,	// (0x00043d4c) cale_week_time_pane_t8

0x0007,

0xf1e9,	// (0x00050d0d) cale_week_time_pane_t

0x2240,	// (0x00043d64) cell_cale_week_pane_g2

0x2259,	// (0x00043d7d) cell_cale_week_pane_g3_ParamLimits

0x2259,	// (0x00043d7d) cell_cale_week_pane_g3

0xc6b8,	// (0x0004e1dc) grid_highlight_pane_cp07

0xc6c0,	// (0x0004e1e4) listscroll_gms_pane

0xc6ca,	// (0x0004e1ee) grid_gms_pane

0xc6d3,	// (0x0004e1f7) listscroll_gms_pane_g1

0xc6db,	// (0x0004e1ff) listscroll_gms_pane_g2

0x0001,

0x0072,	// (0x00041b96) listscroll_gms_pane_g

0x2271,	// (0x00043d95) scroll_pane_cp010

0x227c,	// (0x00043da0) cell_gms_pane_ParamLimits

0x227c,	// (0x00043da0) cell_gms_pane

0x228f,	// (0x00043db3) cell_gms_pane_g1

0xc6e3,	// (0x0004e207) cell_gms_pane_g2

0xc665,	// (0x0004e189) cell_gms_pane_g3

0xc6eb,	// (0x0004e20f) cell_gms_pane_g4

0x0003,

0xf1fa,	// (0x00050d1e) cell_gms_pane_g

0xc6f4,	// (0x0004e218) grid_highlight_pane_cp09

0x4381,	// (0x00045ea5) phob_pre_status_pane_g1

0x4389,	// (0x00045ead) phob_pre_status_pane_g2

0x4391,	// (0x00045eb5) phob_pre_status_pane_g3

0x4399,	// (0x00045ebd) phob_pre_status_pane_g4

0x0004,

0xf480,	// (0x00050fa4) phob_pre_status_pane_g

0x43ab,	// (0x00045ecf) phob_pre_status_pane_t1

0x43b9,	// (0x00045edd) phob_pre_status_pane_t2

0x43c9,	// (0x00045eed) phob_pre_status_pane_t3

0x0002,

0xf48b,	// (0x00050faf) phob_pre_status_pane_t

0xc1ee,	// (0x0004dd12) bg_list_pane_cp05

0xa79c,	// (0x0004c2c0) grid_vorec_pane

0xa7a4,	// (0x0004c2c8) vorec_t1

0xa7b2,	// (0x0004c2d6) vorec_t2

0xa7c0,	// (0x0004c2e4) vorec_t3

0xa7ce,	// (0x0004c2f2) vorec_t4

0xa7dc,	// (0x0004c300) vorec_t5

0xa7ea,	// (0x0004c30e) vorec_t6

0x0006,

0xf203,	// (0x00050d27) vorec_t

0xa806,	// (0x0004c32a) wait_bar_pane_cp01

0xc6fc,	// (0x0004e220) cell_vorec_pane_ParamLimits

0xc6fc,	// (0x0004e220) cell_vorec_pane

0xc70f,	// (0x0004e233) cell_vorec_pane_g1

0xc1ee,	// (0x0004dd12) grid_highlight_pane_cp05

0x22af,	// (0x00043dd3) cams_zoom_pane

0x22be,	// (0x00043de2) image_vga_pane

0x22d8,	// (0x00043dfc) main_camera_pane_g1

0x22ea,	// (0x00043e0e) main_camera_pane_g2

0x22fc,	// (0x00043e20) main_camera_pane_g3

0x230e,	// (0x00043e32) main_camera_pane_g4

0x2320,	// (0x00043e44) main_camera_pane_g5

0x2332,	// (0x00043e56) main_camera_pane_g6

0x2344,	// (0x00043e68) main_camera_pane_g7

0x0007,

0xf212,	// (0x00050d36) main_camera_pane_g

0x2356,	// (0x00043e7a) main_camera_pane_t1

0x236c,	// (0x00043e90) main_camera_pane_t2

0x0001,

0xf223,	// (0x00050d47) main_camera_pane_t

0x23a8,	// (0x00043ecc) cams_zoom_pane_cp_ParamLimits

0x23a8,	// (0x00043ecc) cams_zoom_pane_cp

0x23d0,	// (0x00043ef4) image_cif_pane_ParamLimits

0x23d0,	// (0x00043ef4) image_cif_pane

0x240b,	// (0x00043f2f) image_subqcif_pane

0x2413,	// (0x00043f37) main_video_pane_g1_ParamLimits

0x2413,	// (0x00043f37) main_video_pane_g1

0x2437,	// (0x00043f5b) main_video_pane_g2_ParamLimits

0x2437,	// (0x00043f5b) main_video_pane_g2

0x246d,	// (0x00043f91) main_video_pane_g3_ParamLimits

0x246d,	// (0x00043f91) main_video_pane_g3

0x249d,	// (0x00043fc1) main_video_pane_g4_ParamLimits

0x249d,	// (0x00043fc1) main_video_pane_g4

0x24cd,	// (0x00043ff1) main_video_pane_g5_ParamLimits

0x24cd,	// (0x00043ff1) main_video_pane_g5

0xc725,	// (0x0004e249) main_video_pane_g6_ParamLimits

0xc725,	// (0x0004e249) main_video_pane_g6

0x0006,

0xf228,	// (0x00050d4c) main_video_pane_g_ParamLimits

0xf228,	// (0x00050d4c) main_video_pane_g

0x24f8,	// (0x0004401c) main_video_pane_t1_ParamLimits

0x24f8,	// (0x0004401c) main_video_pane_t1

0xc73f,	// (0x0004e263) cams_zoom_pane_g1

0xc748,	// (0x0004e26c) cams_zoom_pane_g2

0xc751,	// (0x0004e275) cams_zoom_pane_g3

0xc75a,	// (0x0004e27e) cams_zoom_pane_g4

0x0003,

0x00b4,	// (0x00041bd8) cams_zoom_pane_g

0x2555,	// (0x00044079) grid_cams_pane

0x256f,	// (0x00044093) linegrid_cams_pane

0x2582,	// (0x000440a6) cell_cams_pane_ParamLimits

0x2582,	// (0x000440a6) cell_cams_pane

0xc763,	// (0x0004e287) cams_burst_image_pane

0xc76b,	// (0x0004e28f) cell_cams_pane_g1

0xc1ee,	// (0x0004dd12) grid_highlight_pane_cp03

0xc5ad,	// (0x0004e0d1) mp_bg_pane_g1

0xc1ee,	// (0x0004dd12) bg_list_pane_cp03

0xe352,	// (0x0004fe76) bg_mp_pane

0xe35a,	// (0x0004fe7e) grid_mp_pane

0xe362,	// (0x0004fe86) media_player_g1

0xe36a,	// (0x0004fe8e) media_player_t1

0xe378,	// (0x0004fe9c) media_player_t2

0xe386,	// (0x0004feaa) media_player_t3

0xe394,	// (0x0004feb8) media_player_t4

0xe3a2,	// (0x0004fec6) media_player_t5

0xe3b0,	// (0x0004fed4) media_player_t6

0xe3be,	// (0x0004fee2) media_player_t7

0x0006,

0x0450,	// (0x00041f74) media_player_t

0xe3cc,	// (0x0004fef0) wait_bar_pane_cp02

0xf46c,	// (0x00050f90) main_usb_pane_t

0x4378,	// (0x00045e9c) cell_mp_pane

0xc5ad,	// (0x0004e0d1) cell_mp_pane_g1

0xc1ee,	// (0x0004dd12) grid_highlight_pane_cp06

0xc773,	// (0x0004e297) grid_skin_colour_pane

0xc77b,	// (0x0004e29f) list_highlight_pane_cp03

0x25a2,	// (0x000440c6) skin_g1

0xc783,	// (0x0004e2a7) skin_t1

0xc792,	// (0x0004e2b6) skin_t2

0x0001,

0x00e9,	// (0x00041c0d) skin_t

0x25aa,	// (0x000440ce) cell_skin_colour_pane_ParamLimits

0x25aa,	// (0x000440ce) cell_skin_colour_pane

0xc7a0,	// (0x0004e2c4) cell_skin_colour_pane_g1

0x2623,	// (0x00044147) call_video_g1_ParamLimits

0x2623,	// (0x00044147) call_video_g1

0x263f,	// (0x00044163) call_video_g2_ParamLimits

0x263f,	// (0x00044163) call_video_g2

0x0001,

0xf263,	// (0x00050d87) call_video_g_ParamLimits

0xf263,	// (0x00050d87) call_video_g

0x2691,	// (0x000441b5) call_video_uplink_pane_cp1_ParamLimits

0x2691,	// (0x000441b5) call_video_uplink_pane_cp1

0xc7b2,	// (0x0004e2d6) call_video_uplink_pane_cp2

0x2730,	// (0x00044254) video_down_crop_pane_ParamLimits

0x2730,	// (0x00044254) video_down_crop_pane

0x2819,	// (0x0004433d) video_down_pane_ParamLimits

0x2819,	// (0x0004433d) video_down_pane

0xc7ba,	// (0x0004e2de) video_down_subqcif_pane_ParamLimits

0xc7ba,	// (0x0004e2de) video_down_subqcif_pane

0xc7d2,	// (0x0004e2f6) video_down_subqcif_pane_cp_ParamLimits

0xc7d2,	// (0x0004e2f6) video_down_subqcif_pane_cp

0xc7f6,	// (0x0004e31a) im_reading_pane_ParamLimits

0xc7f6,	// (0x0004e31a) im_reading_pane

0x2927,	// (0x0004444b) im_writing_pane_ParamLimits

0x2927,	// (0x0004444b) im_writing_pane

0x293d,	// (0x00044461) im_reading_pane_t1

0xc810,	// (0x0004e334) list_im_pane

0xc821,	// (0x0004e345) scroll_pane_cp07

0x2979,	// (0x0004449d) im_writing_pane_t1_ParamLimits

0x2979,	// (0x0004449d) im_writing_pane_t1

0xc83a,	// (0x0004e35e) im_writing_pane_t2_ParamLimits

0xc83a,	// (0x0004e35e) im_writing_pane_t2

0x0001,

0xf26d,	// (0x00050d91) im_writing_pane_t_ParamLimits

0xf26d,	// (0x00050d91) im_writing_pane_t

0xc1ee,	// (0x0004dd12) input_focus_pane_cp04

0xc1ee,	// (0x0004dd12) input_focus_pane_cp05

0x298e,	// (0x000444b2) list_im_single_pane_ParamLimits

0x298e,	// (0x000444b2) list_im_single_pane

0x29a4,	// (0x000444c8) list_single_im_pane_t1

0x4338,	// (0x00045e5c) blid_accuracy_pane

0x4340,	// (0x00045e64) blid_compass_pane

0x434a,	// (0x00045e6e) main_location_t1

0x435a,	// (0x00045e7e) main_location_t2

0x436a,	// (0x00045e8e) main_location_t3

0x0002,

0xf479,	// (0x00050f9d) main_location_t

0xc1ee,	// (0x0004dd12) aid_levels_location

0xc5ad,	// (0x0004e0d1) blid_accuracy_pane_g1

0xc5ad,	// (0x0004e0d1) blid_accuracy_pane_g2

0x0001,

0x015a,	// (0x00041c7e) blid_accuracy_pane_g

0xc882,	// (0x0004e3a6) wml_content_pane

0xc8c0,	// (0x0004e3e4) wml_button_pane_ParamLimits

0xc8c0,	// (0x0004e3e4) wml_button_pane

0x29b3,	// (0x000444d7) wml_list_single_large_pane_ParamLimits

0x29b3,	// (0x000444d7) wml_list_single_large_pane

0x29ca,	// (0x000444ee) wml_list_single_medium_pane_ParamLimits

0x29ca,	// (0x000444ee) wml_list_single_medium_pane

0x29e2,	// (0x00044506) wml_list_single_small_pane_ParamLimits

0x29e2,	// (0x00044506) wml_list_single_small_pane

0xc8d4,	// (0x0004e3f8) wml_selection_box_pane_ParamLimits

0xc8d4,	// (0x0004e3f8) wml_selection_box_pane

0xc8e7,	// (0x0004e40b) wml_list_single_pane_t1

0xc8f6,	// (0x0004e41a) wml_list_single_medium_pane_t1

0xc905,	// (0x0004e429) wml_list_single_large_pane_t1

0xc914,	// (0x0004e438) input_focus_pane_cp02_ParamLimits

0xc914,	// (0x0004e438) input_focus_pane_cp02

0xc927,	// (0x0004e44b) wml_selection_box_pane_g1

0xc930,	// (0x0004e454) wml_selection_box_pane_t1_ParamLimits

0xc930,	// (0x0004e454) wml_selection_box_pane_t1

0xc449,	// (0x0004df6d) bg_wml_button_pane_ParamLimits

0xc449,	// (0x0004df6d) bg_wml_button_pane

0xc948,	// (0x0004e46c) wml_button_pane_g1

0xc950,	// (0x0004e474) wml_button_pane_t1

0xc948,	// (0x0004e46c) wml_button_bg_pane_g1

0xc960,	// (0x0004e484) wml_button_bg_pane_g2

0xc968,	// (0x0004e48c) wml_button_bg_pane_g3

0xc970,	// (0x0004e494) wml_button_bg_pane_g4

0xc978,	// (0x0004e49c) wml_button_bg_pane_g5

0xc980,	// (0x0004e4a4) wml_button_bg_pane_g6

0xc988,	// (0x0004e4ac) wml_button_bg_pane_g7

0xc990,	// (0x0004e4b4) wml_button_bg_pane_g8

0xc998,	// (0x0004e4bc) wml_button_bg_pane_g9

0x0008,

0x00fd,	// (0x00041c21) wml_button_bg_pane_g

0x2a00,	// (0x00044524) bg_list_pane_cp02

0xc9a0,	// (0x0004e4c4) mce_header_pane_ParamLimits

0xc9a0,	// (0x0004e4c4) mce_header_pane

0xc9b6,	// (0x0004e4da) mce_icon_pane

0xc9b6,	// (0x0004e4da) mce_image_pane

0xc9bf,	// (0x0004e4e3) mce_text_pane_ParamLimits

0xc9bf,	// (0x0004e4e3) mce_text_pane

0x2a08,	// (0x0004452c) scroll_pane_cp03

0xc8b8,	// (0x0004e3dc) scroll_pane_cp04

0xc9d2,	// (0x0004e4f6) scroll_pane_cp05_ParamLimits

0xc9d2,	// (0x0004e4f6) scroll_pane_cp05

0x2a12,	// (0x00044536) mce_header_field_pane_ParamLimits

0x2a12,	// (0x00044536) mce_header_field_pane

0x2a29,	// (0x0004454d) mce_header_field_pane_2_ParamLimits

0x2a29,	// (0x0004454d) mce_header_field_pane_2

0x2a3f,	// (0x00044563) mce_header_field_pane_3

0x2a47,	// (0x0004456b) list_single_mce_message_pane_ParamLimits

0x2a47,	// (0x0004456b) list_single_mce_message_pane

0x2a5f,	// (0x00044583) list_single_mce_smart_pane_ParamLimits

0x2a5f,	// (0x00044583) list_single_mce_smart_pane

0xc9de,	// (0x0004e502) input_focus_pane_cp03

0xc9e7,	// (0x0004e50b) list_header_data_pane

0x2a82,	// (0x000445a6) mce_header_field_pane_t1

0x2a92,	// (0x000445b6) list_single_mce_header_pane_ParamLimits

0x2a92,	// (0x000445b6) list_single_mce_header_pane

0xc9ef,	// (0x0004e513) list_single_mce_header_pane_t1

0xc9fe,	// (0x0004e522) list_single_mce_message_pane_g1

0xca06,	// (0x0004e52a) list_single_mce_message_pane_t1

0x2ac4,	// (0x000445e8) bg_cale_heading_pane_cp01_ParamLimits

0x2ac4,	// (0x000445e8) bg_cale_heading_pane_cp01

0xca14,	// (0x0004e538) bg_cale_pane_cp02_ParamLimits

0xca14,	// (0x0004e538) bg_cale_pane_cp02

0x2ae7,	// (0x0004460b) cale_month_corner_pane

0x2afd,	// (0x00044621) cale_month_day_heading_pane_ParamLimits

0x2afd,	// (0x00044621) cale_month_day_heading_pane

0x2b30,	// (0x00044654) cale_month_pane_g1_ParamLimits

0x2b30,	// (0x00044654) cale_month_pane_g1

0x2b4c,	// (0x00044670) cale_month_pane_g2_ParamLimits

0x2b4c,	// (0x00044670) cale_month_pane_g2

0x2b67,	// (0x0004468b) cale_month_pane_g3_ParamLimits

0x2b67,	// (0x0004468b) cale_month_pane_g3

0x2b93,	// (0x000446b7) cale_month_pane_g4_ParamLimits

0x2b93,	// (0x000446b7) cale_month_pane_g4

0x2bbf,	// (0x000446e3) cale_month_pane_g5_ParamLimits

0x2bbf,	// (0x000446e3) cale_month_pane_g5

0x2bf3,	// (0x00044717) cale_month_pane_g6_ParamLimits

0x2bf3,	// (0x00044717) cale_month_pane_g6

0x2c2f,	// (0x00044753) cale_month_pane_g7_ParamLimits

0x2c2f,	// (0x00044753) cale_month_pane_g7

0x2c6b,	// (0x0004478f) cale_month_pane_g8_ParamLimits

0x2c6b,	// (0x0004478f) cale_month_pane_g8

0x2ca7,	// (0x000447cb) cale_month_pane_g9_ParamLimits

0x2ca7,	// (0x000447cb) cale_month_pane_g9

0x2ce1,	// (0x00044805) cale_month_pane_g10_ParamLimits

0x2ce1,	// (0x00044805) cale_month_pane_g10

0x2d1b,	// (0x0004483f) cale_month_pane_g11_ParamLimits

0x2d1b,	// (0x0004483f) cale_month_pane_g11

0x2d55,	// (0x00044879) cale_month_pane_g12_ParamLimits

0x2d55,	// (0x00044879) cale_month_pane_g12

0x2d8f,	// (0x000448b3) cale_month_pane_g13_ParamLimits

0x2d8f,	// (0x000448b3) cale_month_pane_g13

0x000c,

0xf272,	// (0x00050d96) cale_month_pane_g_ParamLimits

0xf272,	// (0x00050d96) cale_month_pane_g

0x2dc9,	// (0x000448ed) cale_month_week_pane

0x2ddc,	// (0x00044900) grid_cale_month_pane_ParamLimits

0x2ddc,	// (0x00044900) grid_cale_month_pane

0x2e0a,	// (0x0004492e) cale_month_day_heading_pane_t1

0x2e68,	// (0x0004498c) cale_month_day_heading_pane_t2

0x2ecd,	// (0x000449f1) cale_month_day_heading_pane_t3

0x2f32,	// (0x00044a56) cale_month_day_heading_pane_t4

0x2f97,	// (0x00044abb) cale_month_day_heading_pane_t5

0x300c,	// (0x00044b30) cale_month_day_heading_pane_t6

0x3081,	// (0x00044ba5) cale_month_day_heading_pane_t7

0x0006,

0xf28d,	// (0x00050db1) cale_month_day_heading_pane_t

0xc6aa,	// (0x0004e1ce) bg_cale_side_pane_cp01

0x30f6,	// (0x00044c1a) cale_month_week_pane_t1

0x310d,	// (0x00044c31) cale_month_week_pane_t2

0x3124,	// (0x00044c48) cale_month_week_pane_t3

0x313b,	// (0x00044c5f) cale_month_week_pane_t4

0x3152,	// (0x00044c76) cale_month_week_pane_t5

0x3169,	// (0x00044c8d) cale_month_week_pane_t6

0x0005,

0xf29c,	// (0x00050dc0) cale_month_week_pane_t

0x3180,	// (0x00044ca4) cell_cale_month_pane_ParamLimits

0x3180,	// (0x00044ca4) cell_cale_month_pane

0xa8d8,	// (0x0004c3fc) cell_cale_month_pane_g1

0x3256,	// (0x00044d7a) cell_cale_month_pane_t1_ParamLimits

0x3256,	// (0x00044d7a) cell_cale_month_pane_t1

0xc6b8,	// (0x0004e1dc) grid_highlight_pane_cp08

0xc5ad,	// (0x0004e0d1) main_smil_g1

0x3272,	// (0x00044d96) smil_status_pane

0xca49,	// (0x0004e56d) smil_text_pane

0xe26a,	// (0x0004fd8e) bg_popup_call3_rect_pane_g8

0xe272,	// (0x0004fd96) bg_popup_call3_rect_pane_g9

0x0008,

0x03f3,	// (0x00041f17) bg_popup_call3_rect_pane_g

0xe4f4,	// (0x00050018) smil_status_volume_pane_g1

0xca53,	// (0x0004e577) smil_status_pane_t1

0xaa4b,	// (0x0004c56f) volume_smil_pane

0xca6a,	// (0x0004e58e) list_smil_text_pane

0x3287,	// (0x00044dab) scroll_pane_cp011

0x3292,	// (0x00044db6) smil_text_list_pane_t1_ParamLimits

0x3292,	// (0x00044db6) smil_text_list_pane_t1

0xa8e4,	// (0x0004c408) aid_volume_smil_ParamLimits

0xa8e4,	// (0x0004c408) aid_volume_smil

0xc5ad,	// (0x0004e0d1) smil_volume_pane_g1

0xc5ad,	// (0x0004e0d1) smil_volume_pane_g2

0x0001,

0x015a,	// (0x00041c7e) smil_volume_pane_g

0xc558,	// (0x0004e07c) listscroll_cale_day_pane

0xca74,	// (0x0004e598) bg_cale_pane

0xca8c,	// (0x0004e5b0) list_cale_pane

0xca9d,	// (0x0004e5c1) scroll_pane_cp09

0xcaae,	// (0x0004e5d2) cale_bg_pane_g1

0xcab6,	// (0x0004e5da) cale_bg_pane_g2

0xcabe,	// (0x0004e5e2) cale_bg_pane_g3

0xcac6,	// (0x0004e5ea) cale_bg_pane_g4

0xcace,	// (0x0004e5f2) cale_bg_pane_g5

0xcad6,	// (0x0004e5fa) cale_bg_pane_g6

0xcade,	// (0x0004e602) cale_bg_pane_g7

0xcae6,	// (0x0004e60a) cale_bg_pane_g8

0xcaee,	// (0x0004e612) cale_bg_pane_g9

0x0008,

0x015f,	// (0x00041c83) cale_bg_pane_g

0x32e6,	// (0x00044e0a) list_cale_time_pane_ParamLimits

0x32e6,	// (0x00044e0a) list_cale_time_pane

0x32fb,	// (0x00044e1f) list_cale_time_pane_g1_ParamLimits

0x32fb,	// (0x00044e1f) list_cale_time_pane_g1

0xcaf6,	// (0x0004e61a) list_cale_time_pane_g2_ParamLimits

0xcaf6,	// (0x0004e61a) list_cale_time_pane_g2

0x3307,	// (0x00044e2b) list_cale_time_pane_g3_ParamLimits

0x3307,	// (0x00044e2b) list_cale_time_pane_g3

0x3323,	// (0x00044e47) list_cale_time_pane_g4_ParamLimits

0x3323,	// (0x00044e47) list_cale_time_pane_g4

0x3331,	// (0x00044e55) list_cale_time_pane_g5_ParamLimits

0x3331,	// (0x00044e55) list_cale_time_pane_g5

0x0005,

0xf2bc,	// (0x00050de0) list_cale_time_pane_g_ParamLimits

0xf2bc,	// (0x00050de0) list_cale_time_pane_g

0x333f,	// (0x00044e63) list_cale_time_pane_t1_ParamLimits

0x333f,	// (0x00044e63) list_cale_time_pane_t1

0x3367,	// (0x00044e8b) list_cale_time_pane_t2_ParamLimits

0x3367,	// (0x00044e8b) list_cale_time_pane_t2

0x363a,	// (0x0004515e) aid_blid_cardinal_pane

0x3678,	// (0x0004519c) compass_pane_t4

0x338f,	// (0x00044eb3) list_cale_time_pane_t4_ParamLimits

0x338f,	// (0x00044eb3) list_cale_time_pane_t4

0x3686,	// (0x000451aa) compass_pane_t5

0x3694,	// (0x000451b8) compass_pane_t6

0x36a2,	// (0x000451c6) compass_pane_t7

0xcf32,	// (0x0004ea56) navi_pane_cc_t1

0xd087,	// (0x0004ebab) aid_phob_thumbnail_center_pane

0x3d4c,	// (0x00045870) main_postcard_pane_g4_ParamLimits

0x0002,

0xf2c9,	// (0x00050ded) list_cale_time_pane_t_ParamLimits

0xf2c9,	// (0x00050ded) list_cale_time_pane_t

0xbe47,	// (0x0004d96b) bg_popup_window_pane_cp02_ParamLimits

0xbe47,	// (0x0004d96b) bg_popup_window_pane_cp02

0xcb10,	// (0x0004e634) heading_pane_cp01_ParamLimits

0xcb10,	// (0x0004e634) heading_pane_cp01

0xcb1c,	// (0x0004e640) loc_req_pane_ParamLimits

0xcb1c,	// (0x0004e640) loc_req_pane

0xcb2c,	// (0x0004e650) loc_type_pane_ParamLimits

0xcb2c,	// (0x0004e650) loc_type_pane

0xcb3e,	// (0x0004e662) loc_type_pane_t1_ParamLimits

0xcb3e,	// (0x0004e662) loc_type_pane_t1

0xcb50,	// (0x0004e674) loc_type_pane_t2_ParamLimits

0xcb50,	// (0x0004e674) loc_type_pane_t2

0xcb62,	// (0x0004e686) loc_type_pane_t3_ParamLimits

0xcb62,	// (0x0004e686) loc_type_pane_t3

0x0002,

0x0186,	// (0x00041caa) loc_type_pane_t_ParamLimits

0x0186,	// (0x00041caa) loc_type_pane_t

0xcb74,	// (0x0004e698) list_loc_req_pane

0xcb7e,	// (0x0004e6a2) scroll_pane_cp012

0x33b7,	// (0x00044edb) list_single_loc_request_popup_menu_pane_ParamLimits

0x33b7,	// (0x00044edb) list_single_loc_request_popup_menu_pane

0xcb89,	// (0x0004e6ad) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xcb89,	// (0x0004e6ad) list_single_loc_request_popup_menu_pane_g1

0xcb95,	// (0x0004e6b9) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xcb95,	// (0x0004e6b9) list_single_loc_request_popup_menu_pane_g2

0x0001,

0x018d,	// (0x00041cb1) list_single_loc_request_popup_menu_pane_g_ParamLimits

0x018d,	// (0x00041cb1) list_single_loc_request_popup_menu_pane_g

0xcba1,	// (0x0004e6c5) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xcba1,	// (0x0004e6c5) list_single_loc_request_popup_menu_pane_t1

0xc449,	// (0x0004df6d) bg_popup_window_pane_cp03_ParamLimits

0xc449,	// (0x0004df6d) bg_popup_window_pane_cp03

0xd8ec,	// (0x0004f410) heading_loc_req_pane_ParamLimits

0xd8ec,	// (0x0004f410) heading_loc_req_pane

0x33c4,	// (0x00044ee8) popup_dyc_status_message_window_g1_ParamLimits

0x33c4,	// (0x00044ee8) popup_dyc_status_message_window_g1

0x33d8,	// (0x00044efc) popup_dyc_status_message_window_t1_ParamLimits

0x33d8,	// (0x00044efc) popup_dyc_status_message_window_t1

0x33ed,	// (0x00044f11) popup_dyc_status_message_window_t2_ParamLimits

0x33ed,	// (0x00044f11) popup_dyc_status_message_window_t2

0x3402,	// (0x00044f26) popup_dyc_status_message_window_t3_ParamLimits

0x3402,	// (0x00044f26) popup_dyc_status_message_window_t3

0x0002,

0xf2d0,	// (0x00050df4) popup_dyc_status_message_window_t_ParamLimits

0xf2d0,	// (0x00050df4) popup_dyc_status_message_window_t

0xc1ee,	// (0x0004dd12) bg_heading_pane_cp01

0xcbb7,	// (0x0004e6db) heading_loc_req_pane_g1

0xcbbf,	// (0x0004e6e3) heading_loc_req_pane_g2

0xcbc7,	// (0x0004e6eb) heading_loc_req_pane_g3

0x0002,

0x0199,	// (0x00041cbd) heading_loc_req_pane_g

0xcbcf,	// (0x0004e6f3) heading_loc_req_pane_t1

0xcbde,	// (0x0004e702) bg_popup_sub_pane_cp01_ParamLimits

0xcbde,	// (0x0004e702) bg_popup_sub_pane_cp01

0xcbec,	// (0x0004e710) popup_cale_events_window_g1_ParamLimits

0xcbec,	// (0x0004e710) popup_cale_events_window_g1

0xcc0c,	// (0x0004e730) popup_cale_events_window_g2_ParamLimits

0xcc0c,	// (0x0004e730) popup_cale_events_window_g2

0x0001,

0x01cd,	// (0x00041cf1) popup_cale_events_window_g_ParamLimits

0x01cd,	// (0x00041cf1) popup_cale_events_window_g

0xcc2c,	// (0x0004e750) popup_cale_events_window_t1_ParamLimits

0xcc2c,	// (0x0004e750) popup_cale_events_window_t1

0xcc3e,	// (0x0004e762) popup_cale_events_window_t2_ParamLimits

0xcc3e,	// (0x0004e762) popup_cale_events_window_t2

0xcc7c,	// (0x0004e7a0) popup_cale_events_window_t3_ParamLimits

0xcc7c,	// (0x0004e7a0) popup_cale_events_window_t3

0xccb6,	// (0x0004e7da) popup_cale_events_window_t4_ParamLimits

0xccb6,	// (0x0004e7da) popup_cale_events_window_t4

0x0003,

0x01d2,	// (0x00041cf6) popup_cale_events_window_t_ParamLimits

0x01d2,	// (0x00041cf6) popup_cale_events_window_t

0x3436,	// (0x00044f5a) call_type_pane

0x3446,	// (0x00044f6a) popup_call_status_window_g1

0x345a,	// (0x00044f7e) popup_call_status_window_g2

0x346e,	// (0x00044f92) popup_call_status_window_g3

0x0002,

0xf304,	// (0x00050e28) popup_call_status_window_g

0xccec,	// (0x0004e810) call_type_pane_g1

0xccf5,	// (0x0004e819) call_type_pane_g2

0x0001,

0xf30b,	// (0x00050e2f) call_type_pane_g

0xc1ee,	// (0x0004dd12) bg_popup_sub_pane_cp02

0xccfe,	// (0x0004e822) listscroll_popup_wml_pane

0xcd06,	// (0x0004e82a) list_wml_pane

0xcd10,	// (0x0004e834) scroll_pane_cp013

0xcd1b,	// (0x0004e83f) list_single_graphic_popup_wml_pane_ParamLimits

0xcd1b,	// (0x0004e83f) list_single_graphic_popup_wml_pane

0xc5ad,	// (0x0004e0d1) list_single_graphic_popup_wml_pane_g1

0xcd3d,	// (0x0004e861) list_single_graphic_popup_wml_pane_g2

0x0001,

0x01e7,	// (0x00041d0b) list_single_graphic_popup_wml_pane_g

0xcd45,	// (0x0004e869) list_single_graphic_popup_wml_pane_t1

0xcd5b,	// (0x0004e87f) aid_call_pane

0xc441,	// (0x0004df65) popup_clock_analogue_window_g1

0xc441,	// (0x0004df65) popup_clock_analogue_window_g2

0xa97b,	// (0x0004c49f) popup_clock_analogue_window_g3

0xa97b,	// (0x0004c49f) popup_clock_analogue_window_g4

0xc5ad,	// (0x0004e0d1) popup_clock_analogue_window_g5

0x0004,

0xf310,	// (0x00050e34) popup_clock_analogue_window_g

0xa983,	// (0x0004c4a7) popup_clock_analogue_window_t1

0xa991,	// (0x0004c4b5) clock_digital_number_pane_ParamLimits

0xa991,	// (0x0004c4b5) clock_digital_number_pane

0xa99d,	// (0x0004c4c1) clock_digital_number_pane_cp02_ParamLimits

0xa99d,	// (0x0004c4c1) clock_digital_number_pane_cp02

0xa9a9,	// (0x0004c4cd) clock_digital_number_pane_cp03_ParamLimits

0xa9a9,	// (0x0004c4cd) clock_digital_number_pane_cp03

0xa9b5,	// (0x0004c4d9) clock_digital_number_pane_cp04_ParamLimits

0xa9b5,	// (0x0004c4d9) clock_digital_number_pane_cp04

0xa9c1,	// (0x0004c4e5) clock_digital_separator_pane_ParamLimits

0xa9c1,	// (0x0004c4e5) clock_digital_separator_pane

0xa9cd,	// (0x0004c4f1) popup_clock_digital_window_t1

0xc5ad,	// (0x0004e0d1) clock_digital_number_pane_g1

0xc5ad,	// (0x0004e0d1) clock_digital_number_pane_g2

0x0001,

0x015a,	// (0x00041c7e) clock_digital_number_pane_g

0xc5ad,	// (0x0004e0d1) clock_digital_separator_pane_g1

0xc5ad,	// (0x0004e0d1) clock_digital_separator_pane_g2

0x0001,

0x015a,	// (0x00041c7e) clock_digital_separator_pane_g

0xc1ee,	// (0x0004dd12) bg_popup_window_pane_cp04

0xcd63,	// (0x0004e887) heading_pane_cp03

0xcd6b,	// (0x0004e88f) listscroll_popup_gms_pane

0xcd73,	// (0x0004e897) grid_large_graphic_popup_pane

0xcd7d,	// (0x0004e8a1) listscroll_popup_gms_pane_g1

0xcd85,	// (0x0004e8a9) listscroll_popup_gms_pane_g2

0x0001,

0x01f7,	// (0x00041d1b) listscroll_popup_gms_pane_g

0xc8b8,	// (0x0004e3dc) scroll_pane_cp014

0xcd8d,	// (0x0004e8b1) cell_large_graphic_popup_pane_ParamLimits

0xcd8d,	// (0x0004e8b1) cell_large_graphic_popup_pane

0xcda5,	// (0x0004e8c9) cell_large_graphic_popup_pane_g1_ParamLimits

0xcda5,	// (0x0004e8c9) cell_large_graphic_popup_pane_g1

0xcdb1,	// (0x0004e8d5) cell_large_graphic_popup_pane_g2_ParamLimits

0xcdb1,	// (0x0004e8d5) cell_large_graphic_popup_pane_g2

0xcdbd,	// (0x0004e8e1) cell_large_graphic_popup_pane_g3_ParamLimits

0xcdbd,	// (0x0004e8e1) cell_large_graphic_popup_pane_g3

0xcdca,	// (0x0004e8ee) cell_large_graphic_popup_pane_g4_ParamLimits

0xcdca,	// (0x0004e8ee) cell_large_graphic_popup_pane_g4

0x0003,

0x01fc,	// (0x00041d20) cell_large_graphic_popup_pane_g_ParamLimits

0x01fc,	// (0x00041d20) cell_large_graphic_popup_pane_g

0xcdda,	// (0x0004e8fe) grid_highlight_pane_cp010

0xc5ad,	// (0x0004e0d1) bg_popup_call_pane_g1

0xcde4,	// (0x0004e908) list_single_graphic_popup_conf_pane_ParamLimits

0xcde4,	// (0x0004e908) list_single_graphic_popup_conf_pane

0xcdf6,	// (0x0004e91a) list_highlight_pane_cp01

0xcdff,	// (0x0004e923) list_single_graphic_popup_conf_pane_g1

0xce07,	// (0x0004e92b) list_single_graphic_popup_conf_pane_g2

0x0001,

0x0205,	// (0x00041d29) list_single_graphic_popup_conf_pane_g

0xce0f,	// (0x0004e933) list_single_graphic_popup_conf_pane_t1

0xce1d,	// (0x0004e941) linegrid_cams_pane_g1

0x347e,	// (0x00044fa2) linegrid_cams_pane_g2

0xc665,	// (0x0004e189) linegrid_cams_pane_g3

0xce26,	// (0x0004e94a) linegrid_cams_pane_g4

0x3487,	// (0x00044fab) linegrid_cams_pane_g5

0x3490,	// (0x00044fb4) linegrid_cams_pane_g6

0xc6eb,	// (0x0004e20f) linegrid_cams_pane_g7

0x0006,

0xf31b,	// (0x00050e3f) linegrid_cams_pane_g

0xce2f,	// (0x0004e953) popup_clock_analogue_window

0xce2f,	// (0x0004e953) popup_clock_digital_window

0xc1ee,	// (0x0004dd12) popup_phob_thumbnail_window

0xc5ad,	// (0x0004e0d1) call_video_uplink_pane_g1

0xce38,	// (0x0004e95c) call_video_uplink_pane_g2

0x0001,

0x0219,	// (0x00041d3d) call_video_uplink_pane_g

0xc6b8,	// (0x0004e1dc) video_uplink_pane

0xce40,	// (0x0004e964) mce_image_pane_g1

0x349b,	// (0x00044fbf) mce_image_pane_g2

0x34a3,	// (0x00044fc7) mce_image_pane_g3

0x34ab,	// (0x00044fcf) mce_image_pane_g4

0x34b3,	// (0x00044fd7) mce_image_pane_g5

0x0004,

0xf32a,	// (0x00050e4e) mce_image_pane_g

0xce4a,	// (0x0004e96e) control_top_pane_stacon_cp01_ParamLimits

0xce4a,	// (0x0004e96e) control_top_pane_stacon_cp01

0xce5e,	// (0x0004e982) uni_indicator_pane_stacon_cp01_ParamLimits

0xce5e,	// (0x0004e982) uni_indicator_pane_stacon_cp01

0xce6f,	// (0x0004e993) bg_popup_sub_pane_cp03

0x34bb,	// (0x00044fdf) chi_dic_find_pane

0x34c3,	// (0x00044fe7) listscroll_chi_dic_pane

0x34cc,	// (0x00044ff0) main_pane_chidic_g1

0x34df,	// (0x00045003) chi_dic_find_pane_t1

0xce79,	// (0x0004e99d) find_chidic_pane

0xce82,	// (0x0004e9a6) chi_dic_list_pane_ParamLimits

0xce82,	// (0x0004e9a6) chi_dic_list_pane

0xce93,	// (0x0004e9b7) scroll_pane_cp020

0x34ed,	// (0x00045011) find_chidic_pane_t1

0xc1ee,	// (0x0004dd12) input_focus_pane_cp06

0x34fc,	// (0x00045020) list_chi_dic_pane_ParamLimits

0x34fc,	// (0x00045020) list_chi_dic_pane

0xce9b,	// (0x0004e9bf) list_chi_dic_pane_t1_ParamLimits

0xce9b,	// (0x0004e9bf) list_chi_dic_pane_t1

0xc1ee,	// (0x0004dd12) list_highlight_pane_cp020

0xceae,	// (0x0004e9d2) bg_cale_heading_pane_g1

0x3510,	// (0x00045034) bg_cale_heading_pane_g2

0x3518,	// (0x0004503c) bg_cale_heading_pane_g3

0x3520,	// (0x00045044) bg_cale_heading_pane_g4

0x352a,	// (0x0004504e) bg_cale_heading_pane_g5

0x3534,	// (0x00045058) bg_cale_heading_pane_g6

0x353c,	// (0x00045060) bg_cale_heading_pane_g7

0x3544,	// (0x00045068) bg_cale_heading_pane_g8

0x354e,	// (0x00045072) bg_cale_heading_pane_g9

0x0008,

0xf335,	// (0x00050e59) bg_cale_heading_pane_g

0xceae,	// (0x0004e9d2) bg_cale_side_pane_g1

0x3558,	// (0x0004507c) bg_cale_side_pane_g2

0x3560,	// (0x00045084) bg_cale_side_pane_g3

0x3568,	// (0x0004508c) bg_cale_side_pane_g4

0x3570,	// (0x00045094) bg_cale_side_pane_g5

0x3578,	// (0x0004509c) bg_cale_side_pane_g6

0x3580,	// (0x000450a4) bg_cale_side_pane_g7

0x3588,	// (0x000450ac) bg_cale_side_pane_g8

0x3590,	// (0x000450b4) bg_cale_side_pane_g9

0x0008,

0xf348,	// (0x00050e6c) bg_cale_side_pane_g

0x3598,	// (0x000450bc) popup_call_status_window_ParamLimits

0x3598,	// (0x000450bc) popup_call_status_window

0xceb6,	// (0x0004e9da) stacon_top_pane

0xcebe,	// (0x0004e9e2) status_pane_ParamLimits

0xcebe,	// (0x0004e9e2) status_pane

0xced3,	// (0x0004e9f7) status_small_pane

0xcedb,	// (0x0004e9ff) control_pane

0xc1ee,	// (0x0004dd12) stacon_bottom_pane

0xcee3,	// (0x0004ea07) list_single_mce_smart_pane_t1_ParamLimits

0xcee3,	// (0x0004ea07) list_single_mce_smart_pane_t1

0xcef6,	// (0x0004ea1a) list_single_mce_smart_pane_t2_ParamLimits

0xcef6,	// (0x0004ea1a) list_single_mce_smart_pane_t2

0x0001,

0x024f,	// (0x00041d73) list_single_mce_smart_pane_t_ParamLimits

0x024f,	// (0x00041d73) list_single_mce_smart_pane_t

0x35df,	// (0x00045103) compass_pane

0x35e8,	// (0x0004510c) main_location2_pane_t1

0x35fc,	// (0x00045120) main_location2_pane_t2

0x3610,	// (0x00045134) main_location2_pane_t3

0x0003,

0xf35b,	// (0x00050e7f) main_location2_pane_t

0xcf15,	// (0x0004ea39) compass_pane_g1_ParamLimits

0xcf15,	// (0x0004ea39) compass_pane_g1

0x365a,	// (0x0004517e) compass_pane_t1

0x3669,	// (0x0004518d) compass_pane_t2

0x0005,

0xf364,	// (0x00050e88) compass_pane_t

0x36b0,	// (0x000451d4) text_secondary_cp61

0xcf29,	// (0x0004ea4d) navi_pane_cams_g5

0xcf4c,	// (0x0004ea70) navi_pane_im_t1

0xcf5a,	// (0x0004ea7e) navi_pane_mp_g1_ParamLimits

0xcf5a,	// (0x0004ea7e) navi_pane_mp_g1

0xcf6e,	// (0x0004ea92) navi_pane_mp_g2_ParamLimits

0xcf6e,	// (0x0004ea92) navi_pane_mp_g2

0xcf7a,	// (0x0004ea9e) navi_pane_mp_g3_ParamLimits

0xcf7a,	// (0x0004ea9e) navi_pane_mp_g3

0x0002,

0x0271,	// (0x00041d95) navi_pane_mp_g_ParamLimits

0x0271,	// (0x00041d95) navi_pane_mp_g

0xcf86,	// (0x0004eaaa) navi_pane_mp_t1

0xcf94,	// (0x0004eab8) navi_pane_mp_t2

0x0002,

0x0278,	// (0x00041d9c) navi_pane_mp_t

0xcfd0,	// (0x0004eaf4) navi_pane_vt_g1

0xcf86,	// (0x0004eaaa) navi_pane_vt_t1

0xcfd8,	// (0x0004eafc) navi_slider_pane

0xcfe0,	// (0x0004eb04) zooming_pane

0xcfe8,	// (0x0004eb0c) navi_slider_pane_g1

0xa9ea,	// (0x0004c50e) navi_slider_pane_g2

0x0006,

0xf378,	// (0x00050e9c) navi_slider_pane_g

0xd00c,	// (0x0004eb30) aid_levels_zoom

0xd014,	// (0x0004eb38) zooming_pane_g1

0xd01c,	// (0x0004eb40) zooming_pane_g2

0xd01c,	// (0x0004eb40) zooming_pane_g3

0x0002,

0x028e,	// (0x00041db2) zooming_pane_g

0xd024,	// (0x0004eb48) level_10_zoom

0xd02d,	// (0x0004eb51) level_11_zoom

0xd036,	// (0x0004eb5a) level_1_zoom

0xd03f,	// (0x0004eb63) level_2_zoom

0xd048,	// (0x0004eb6c) level_3_zoom

0xd051,	// (0x0004eb75) level_4_zoom

0xd05a,	// (0x0004eb7e) level_5_zoom

0xd063,	// (0x0004eb87) level_6_zoom

0xd06c,	// (0x0004eb90) level_7_zoom

0xd075,	// (0x0004eb99) level_8_zoom

0xd07e,	// (0x0004eba2) level_9_zoom

0xd08f,	// (0x0004ebb3) popup_phob_thumbnail_window_g1

0xd097,	// (0x0004ebbb) popup_phob_thumbnail_window_g2

0x0001,

0x0295,	// (0x00041db9) popup_phob_thumbnail_window_g

0xe3d4,	// (0x0004fef8) level_1_location

0xe3dc,	// (0x0004ff00) level_2_location

0xe3e4,	// (0x0004ff08) level_3_location

0xe3ec,	// (0x0004ff10) level_4_location

0xcfe0,	// (0x0004eb04) level_5_location

0x37d9,	// (0x000452fd) mce_icon_pane_g1

0x37e1,	// (0x00045305) mce_icon_pane_g2

0x0001,

0xf387,	// (0x00050eab) mce_icon_pane_g

0x37e9,	// (0x0004530d) main_mup_pane_g1_ParamLimits

0x37e9,	// (0x0004530d) main_mup_pane_g1

0x37ff,	// (0x00045323) main_mup_pane_g2_ParamLimits

0x37ff,	// (0x00045323) main_mup_pane_g2

0x3817,	// (0x0004533b) main_mup_pane_g3_ParamLimits

0x3817,	// (0x0004533b) main_mup_pane_g3

0x382f,	// (0x00045353) main_mup_pane_g4_ParamLimits

0x382f,	// (0x00045353) main_mup_pane_g4

0x3847,	// (0x0004536b) main_mup_pane_g5_ParamLimits

0x3847,	// (0x0004536b) main_mup_pane_g5

0x3863,	// (0x00045387) main_mup_pane_g6_ParamLimits

0x3863,	// (0x00045387) main_mup_pane_g6

0x387b,	// (0x0004539f) main_mup_pane_g7_ParamLimits

0x387b,	// (0x0004539f) main_mup_pane_g7

0x3893,	// (0x000453b7) main_mup_pane_g8_ParamLimits

0x3893,	// (0x000453b7) main_mup_pane_g8

0x38ab,	// (0x000453cf) main_mup_pane_g9_ParamLimits

0x38ab,	// (0x000453cf) main_mup_pane_g9

0x38c5,	// (0x000453e9) main_mup_pane_g10_ParamLimits

0x38c5,	// (0x000453e9) main_mup_pane_g10

0x38df,	// (0x00045403) main_mup_pane_g11_ParamLimits

0x38df,	// (0x00045403) main_mup_pane_g11

0x38f3,	// (0x00045417) main_mup_pane_g12_ParamLimits

0x38f3,	// (0x00045417) main_mup_pane_g12

0x3909,	// (0x0004542d) main_mup_pane_g13_ParamLimits

0x3909,	// (0x0004542d) main_mup_pane_g13

0x000c,

0xf38c,	// (0x00050eb0) main_mup_pane_g_ParamLimits

0xf38c,	// (0x00050eb0) main_mup_pane_g

0x391d,	// (0x00045441) main_mup_pane_t1_ParamLimits

0x391d,	// (0x00045441) main_mup_pane_t1

0x3937,	// (0x0004545b) main_mup_pane_t2_ParamLimits

0x3937,	// (0x0004545b) main_mup_pane_t2

0x394f,	// (0x00045473) main_mup_pane_t3_ParamLimits

0x394f,	// (0x00045473) main_mup_pane_t3

0x3967,	// (0x0004548b) main_mup_pane_t4_ParamLimits

0x3967,	// (0x0004548b) main_mup_pane_t4

0x3985,	// (0x000454a9) main_mup_pane_t5_ParamLimits

0x3985,	// (0x000454a9) main_mup_pane_t5

0x399a,	// (0x000454be) main_mup_pane_t6_ParamLimits

0x399a,	// (0x000454be) main_mup_pane_t6

0x0005,

0xf3a7,	// (0x00050ecb) main_mup_pane_t_ParamLimits

0xf3a7,	// (0x00050ecb) main_mup_pane_t

0x39ac,	// (0x000454d0) mup_progress_pane_ParamLimits

0x39ac,	// (0x000454d0) mup_progress_pane

0x39b8,	// (0x000454dc) mup_visualizer_pane_ParamLimits

0x39b8,	// (0x000454dc) mup_visualizer_pane

0x39ec,	// (0x00045510) mup_volume_pane_ParamLimits

0x39ec,	// (0x00045510) mup_volume_pane

0xcd2f,	// (0x0004e853) mup_visualizer_pane_g1_ParamLimits

0xcd2f,	// (0x0004e853) mup_visualizer_pane_g1

0xcd2f,	// (0x0004e853) mup_visualizer_pane_g2_ParamLimits

0xcd2f,	// (0x0004e853) mup_visualizer_pane_g2

0xcf15,	// (0x0004ea39) mup_visualizer_pane_g3_ParamLimits

0xcf15,	// (0x0004ea39) mup_visualizer_pane_g3

0x0002,

0xf3b4,	// (0x00050ed8) mup_visualizer_pane_g_ParamLimits

0xf3b4,	// (0x00050ed8) mup_visualizer_pane_g

0xc5ad,	// (0x0004e0d1) mup_volume_pane_g1

0xd0a7,	// (0x0004ebcb) mup_volume_pane_g2

0x0001,

0x02ce,	// (0x00041df2) mup_volume_pane_g

0xc5ad,	// (0x0004e0d1) mup_progress_pane_g1

0xd0b0,	// (0x0004ebd4) mup_progress_pane_g2

0xd0b9,	// (0x0004ebdd) mup_progress_pane_g3

0x0002,

0x02d3,	// (0x00041df7) mup_progress_pane_g

0xc1ee,	// (0x0004dd12) bg_popup_window_pane_cp05

0xd0c2,	// (0x0004ebe6) heading_pane_cp02_ParamLimits

0xd0c2,	// (0x0004ebe6) heading_pane_cp02

0xd0dc,	// (0x0004ec00) list_popup_blid_pane

0xd0e4,	// (0x0004ec08) list_blid_sat_info_pane_ParamLimits

0xd0e4,	// (0x0004ec08) list_blid_sat_info_pane

0xd0f7,	// (0x0004ec1b) list_blid_sat_info_pane_g1

0xd0ff,	// (0x0004ec23) list_blid_sat_info_pane_t1

0x3b02,	// (0x00045626) mup_equalizer_pane_ParamLimits

0x3b02,	// (0x00045626) mup_equalizer_pane

0x3b1b,	// (0x0004563f) mup_equalizer_pane_cp1_ParamLimits

0x3b1b,	// (0x0004563f) mup_equalizer_pane_cp1

0x3b38,	// (0x0004565c) mup_equalizer_pane_cp2_ParamLimits

0x3b38,	// (0x0004565c) mup_equalizer_pane_cp2

0x3b55,	// (0x00045679) mup_equalizer_pane_cp3_ParamLimits

0x3b55,	// (0x00045679) mup_equalizer_pane_cp3

0x3b76,	// (0x0004569a) mup_equalizer_pane_cp4_ParamLimits

0x3b76,	// (0x0004569a) mup_equalizer_pane_cp4

0x3b97,	// (0x000456bb) mup_equalizer_pane_cp5

0x3bab,	// (0x000456cf) mup_equalizer_pane_cp6

0x3bbf,	// (0x000456e3) mup_equalizer_pane_cp7

0xe2f2,	// (0x0004fe16) bg_popup_call_poc_act_pane_g9

0xe2fa,	// (0x0004fe1e) bg_popup_call_poc_act_pane_g10

0xe302,	// (0x0004fe26) bg_popup_call_poc_act_pane_g11

0x000a,

0xc449,	// (0x0004df6d) mup_scale_pane

0xc5ad,	// (0x0004e0d1) mup_scale_pane_g1

0xd10d,	// (0x0004ec31) mup_scale_pane_g2

0x0006,

0xf3d0,	// (0x00050ef4) mup_scale_pane_g

0xd131,	// (0x0004ec55) msg_data_pane

0xd139,	// (0x0004ec5d) scroll_pane_cp017

0x0e88,	// (0x000429ac) bg_list_pane_cp04_ParamLimits

0x0e88,	// (0x000429ac) bg_list_pane_cp04

0xd141,	// (0x0004ec65) msg_data_pane_g1

0x3bed,	// (0x00045711) msg_data_pane_g2

0x34a3,	// (0x00044fc7) msg_data_pane_g3

0x3bf5,	// (0x00045719) msg_data_pane_g4

0x3bfd,	// (0x00045721) msg_data_pane_g5

0x3c05,	// (0x00045729) msg_data_pane_g6

0x3c0d,	// (0x00045731) msg_data_pane_g7

0x0006,

0xf3df,	// (0x00050f03) msg_data_pane_g

0x3c15,	// (0x00045739) msg_text_pane_ParamLimits

0x3c15,	// (0x00045739) msg_text_pane

0x3c3e,	// (0x00045762) qrid_highlight_pane_cp011_ParamLimits

0x3c3e,	// (0x00045762) qrid_highlight_pane_cp011

0xc1ee,	// (0x0004dd12) msg_body_pane

0xc1ee,	// (0x0004dd12) msg_header_pane

0xd152,	// (0x0004ec76) input_focus_pane_cp07

0x3c54,	// (0x00045778) msg_header_pane_t1_ParamLimits

0x3c54,	// (0x00045778) msg_header_pane_t1

0x0eae,	// (0x000429d2) msg_header_pane_t2_ParamLimits

0x0eae,	// (0x000429d2) msg_header_pane_t2

0x0001,

0xf3f3,	// (0x00050f17) msg_header_pane_t_ParamLimits

0xf3f3,	// (0x00050f17) msg_header_pane_t

0xd167,	// (0x0004ec8b) msg_body_pane_g1

0x0ec0,	// (0x000429e4) msg_body_pane_t1_ParamLimits

0x0ec0,	// (0x000429e4) msg_body_pane_t1

0x0ef1,	// (0x00042a15) msg_body_pane_t2_ParamLimits

0x0ef1,	// (0x00042a15) msg_body_pane_t2

0x0f03,	// (0x00042a27) msg_body_pane_t3_ParamLimits

0x0f03,	// (0x00042a27) msg_body_pane_t3

0x0002,

0xf3f8,	// (0x00050f1c) msg_body_pane_t_ParamLimits

0xf3f8,	// (0x00050f1c) msg_body_pane_t

0x3ca2,	// (0x000457c6) main_viewer_pane_g1_ParamLimits

0x3ca2,	// (0x000457c6) main_viewer_pane_g1

0x3cb0,	// (0x000457d4) main_viewer_pane_g2_ParamLimits

0x3cb0,	// (0x000457d4) main_viewer_pane_g2

0x3cbe,	// (0x000457e2) main_viewer_pane_g3_ParamLimits

0x3cbe,	// (0x000457e2) main_viewer_pane_g3

0x3ccd,	// (0x000457f1) main_viewer_pane_g4_ParamLimits

0x3ccd,	// (0x000457f1) main_viewer_pane_g4

0xaa14,	// (0x0004c538) main_viewer_pane_g5_ParamLimits

0xaa14,	// (0x0004c538) main_viewer_pane_g5

0xaa14,	// (0x0004c538) main_viewer_pane_g7_ParamLimits

0xaa14,	// (0x0004c538) main_viewer_pane_g7

0xaa26,	// (0x0004c54a) main_viewer_pane_g8_ParamLimits

0xaa26,	// (0x0004c54a) main_viewer_pane_g8

0x0007,

0xf408,	// (0x00050f2c) main_viewer_pane_g_ParamLimits

0xf408,	// (0x00050f2c) main_viewer_pane_g

0xd16f,	// (0x0004ec93) viewer_content_pane_ParamLimits

0xd16f,	// (0x0004ec93) viewer_content_pane

0x3d09,	// (0x0004582d) main_postcard_pane_g1_ParamLimits

0x3d09,	// (0x0004582d) main_postcard_pane_g1

0x3d1f,	// (0x00045843) main_postcard_pane_g2_ParamLimits

0x3d1f,	// (0x00045843) main_postcard_pane_g2

0x3d35,	// (0x00045859) main_postcard_pane_g3_ParamLimits

0x3d35,	// (0x00045859) main_postcard_pane_g3

0x0005,

0xf419,	// (0x00050f3d) main_postcard_pane_g_ParamLimits

0xf419,	// (0x00050f3d) main_postcard_pane_g

0x3d4c,	// (0x00045870) main_postcard_pane_g4

0xe507,	// (0x0005002b) smil_status_volume_pane_g2

0x3d8f,	// (0x000458b3) postcard_pane_ParamLimits

0x3d8f,	// (0x000458b3) postcard_pane

0xd17d,	// (0x0004eca1) postcard_pane_g1_ParamLimits

0xd17d,	// (0x0004eca1) postcard_pane_g1

0x3dd1,	// (0x000458f5) postcard_pane_g2_ParamLimits

0x3dd1,	// (0x000458f5) postcard_pane_g2

0x3ddd,	// (0x00045901) postcard_pane_g3_ParamLimits

0x3ddd,	// (0x00045901) postcard_pane_g3

0xd18b,	// (0x0004ecaf) postcard_pane_g4_ParamLimits

0xd18b,	// (0x0004ecaf) postcard_pane_g4

0x3de9,	// (0x0004590d) postcard_pane_g5_ParamLimits

0x3de9,	// (0x0004590d) postcard_pane_g5

0x3dfe,	// (0x00045922) postcard_pane_g6_ParamLimits

0x3dfe,	// (0x00045922) postcard_pane_g6

0xd17d,	// (0x0004eca1) postcard_pane_g7_ParamLimits

0xd17d,	// (0x0004eca1) postcard_pane_g7

0x0006,

0xf426,	// (0x00050f4a) postcard_pane_g_ParamLimits

0xf426,	// (0x00050f4a) postcard_pane_g

0x3e12,	// (0x00045936) main_mp2_pane_g1_ParamLimits

0x3e12,	// (0x00045936) main_mp2_pane_g1

0x3e1e,	// (0x00045942) main_mp2_pane_g2_ParamLimits

0x3e1e,	// (0x00045942) main_mp2_pane_g2

0x3e2a,	// (0x0004594e) main_mp2_pane_g3_ParamLimits

0x3e2a,	// (0x0004594e) main_mp2_pane_g3

0x0002,

0xf435,	// (0x00050f59) main_mp2_pane_g_ParamLimits

0xf435,	// (0x00050f59) main_mp2_pane_g

0x3e36,	// (0x0004595a) main_mp2_pane_t1_ParamLimits

0x3e36,	// (0x0004595a) main_mp2_pane_t1

0x3e4b,	// (0x0004596f) main_mp2_pane_t2_ParamLimits

0x3e4b,	// (0x0004596f) main_mp2_pane_t2

0x3e5d,	// (0x00045981) main_mp2_pane_t3_ParamLimits

0x3e5d,	// (0x00045981) main_mp2_pane_t3

0x0002,

0xf43c,	// (0x00050f60) main_mp2_pane_t_ParamLimits

0xf43c,	// (0x00050f60) main_mp2_pane_t

0xd199,	// (0x0004ecbd) pec_content_pane_ParamLimits

0xd199,	// (0x0004ecbd) pec_content_pane

0xc8b8,	// (0x0004e3dc) scroll_pane_cp015

0xd1ab,	// (0x0004eccf) pec_attribute_pane_ParamLimits

0xd1ab,	// (0x0004eccf) pec_attribute_pane

0x3e6f,	// (0x00045993) pec_content_pane_g1_ParamLimits

0x3e6f,	// (0x00045993) pec_content_pane_g1

0xd1bb,	// (0x0004ecdf) pec_content_pane_t1_ParamLimits

0xd1bb,	// (0x0004ecdf) pec_content_pane_t1

0xd1cd,	// (0x0004ecf1) pec_content_pane_t2_ParamLimits

0xd1cd,	// (0x0004ecf1) pec_content_pane_t2

0x0001,

0x0362,	// (0x00041e86) pec_content_pane_t_ParamLimits

0x0362,	// (0x00041e86) pec_content_pane_t

0x3e7d,	// (0x000459a1) list_single_graphic_pane_cp01_ParamLimits

0x3e7d,	// (0x000459a1) list_single_graphic_pane_cp01

0xc449,	// (0x0004df6d) bg_popup_sub_pane_cp04

0xd1df,	// (0x0004ed03) popup_mup_playback_window_g1

0xd1eb,	// (0x0004ed0f) popup_mup_playback_window_t1

0xd200,	// (0x0004ed24) popup_mup_playback_window_t2

0x0001,

0x0367,	// (0x00041e8b) popup_mup_playback_window_t

0xd237,	// (0x0004ed5b) main_image_pane_g1_ParamLimits

0xd237,	// (0x0004ed5b) main_image_pane_g1

0xd27a,	// (0x0004ed9e) scroll_pane_cp018_ParamLimits

0xd27a,	// (0x0004ed9e) scroll_pane_cp018

0xd292,	// (0x0004edb6) scroll_pane_cp016_ParamLimits

0xd292,	// (0x0004edb6) scroll_pane_cp016

0x3f4d,	// (0x00045a71) smil2_image_pane_ParamLimits

0x3f4d,	// (0x00045a71) smil2_image_pane

0x3f81,	// (0x00045aa5) smil2_root_pane_ParamLimits

0x3f81,	// (0x00045aa5) smil2_root_pane

0x3fb9,	// (0x00045add) smil2_text_pane_ParamLimits

0x3fb9,	// (0x00045add) smil2_text_pane

0xc1ee,	// (0x0004dd12) bg_list_pane_cp06

0xd2ce,	// (0x0004edf2) grid_radio_pane

0xc1ee,	// (0x0004dd12) bg_popup_window_pane_cp06

0xd2d6,	// (0x0004edfa) main_fmradio_pane_t1

0xcd63,	// (0x0004e887) heading_pane_cp04

0xd2e4,	// (0x0004ee08) main_fmradio_pane_t2

0xe30a,	// (0x0004fe2e) popup_cale_lunar_info_window_g1

0xd2f2,	// (0x0004ee16) main_fmradio_pane_t3

0xe312,	// (0x0004fe36) popup_cale_lunar_info_window_g2

0xd300,	// (0x0004ee24) main_fmradio_pane_t4

0x0001,

0xd30e,	// (0x0004ee32) main_fmradio_pane_t5

0x0004,

0x0442,	// (0x00041f66) popup_cale_lunar_info_window_g

0x037c,	// (0x00041ea0) main_fmradio_pane_t

0xd31c,	// (0x0004ee40) wait_bar_pane_cp03

0xd324,	// (0x0004ee48) cell_fmradio_pane_ParamLimits

0xd324,	// (0x0004ee48) cell_fmradio_pane

0xd17d,	// (0x0004eca1) cell_fmradio_pane_g1_ParamLimits

0xd17d,	// (0x0004eca1) cell_fmradio_pane_g1

0xc1ee,	// (0x0004dd12) grid_highlight_pane_cp011

0xd337,	// (0x0004ee5b) poc_content_pane_ParamLimits

0xd337,	// (0x0004ee5b) poc_content_pane

0xd349,	// (0x0004ee6d) scroll_pane_cp019

0x4039,	// (0x00045b5d) popup_call_poc_act_window_ParamLimits

0x4039,	// (0x00045b5d) popup_call_poc_act_window

0x405d,	// (0x00045b81) popup_call_poc_inact_window_ParamLimits

0x405d,	// (0x00045b81) popup_call_poc_inact_window

0x0419,	// (0x00041f3d) bg_popup_call_poc_act_pane_g

0xe27a,	// (0x0004fd9e) bg_popup_call_poc_inact_pane_g1

0xe282,	// (0x0004fda6) bg_popup_call_poc_inact_pane_g2

0xd351,	// (0x0004ee75) popup_call_poc_act_window_g2

0xe28a,	// (0x0004fdae) bg_popup_call_poc_inact_pane_g3

0xe292,	// (0x0004fdb6) bg_popup_call_poc_inact_pane_g4

0xe29a,	// (0x0004fdbe) bg_popup_call_poc_inact_pane_g5

0xd359,	// (0x0004ee7d) popup_call_poc_act_window_t1_ParamLimits

0xd359,	// (0x0004ee7d) popup_call_poc_act_window_t1

0xd381,	// (0x0004eea5) popup_call_poc_act_window_t2_ParamLimits

0xd381,	// (0x0004eea5) popup_call_poc_act_window_t2

0xd3a9,	// (0x0004eecd) popup_call_poc_act_window_t3_ParamLimits

0xd3a9,	// (0x0004eecd) popup_call_poc_act_window_t3

0xd3d1,	// (0x0004eef5) popup_call_poc_act_window_t4_ParamLimits

0xd3d1,	// (0x0004eef5) popup_call_poc_act_window_t4

0x0003,

0x0387,	// (0x00041eab) popup_call_poc_act_window_t_ParamLimits

0x0387,	// (0x00041eab) popup_call_poc_act_window_t

0xe2a2,	// (0x0004fdc6) bg_popup_call_poc_inact_pane_g6

0xe2aa,	// (0x0004fdce) bg_popup_call_poc_inact_pane_g7

0xe2b2,	// (0x0004fdd6) bg_popup_call_poc_inact_pane_g8

0xd3e3,	// (0x0004ef07) popup_call_poc_inact_window_g2

0xe2ba,	// (0x0004fdde) bg_popup_call_poc_inact_pane_g9

0x0008,

0x0406,	// (0x00041f2a) bg_popup_call_poc_inact_pane_g

0xd3eb,	// (0x0004ef0f) popup_call_poc_inact_window_t1_ParamLimits

0xd3eb,	// (0x0004ef0f) popup_call_poc_inact_window_t1

0xd400,	// (0x0004ef24) popup_call_poc_inact_window_t2_ParamLimits

0xd400,	// (0x0004ef24) popup_call_poc_inact_window_t2

0xd415,	// (0x0004ef39) popup_call_poc_inact_window_t3_ParamLimits

0xd415,	// (0x0004ef39) popup_call_poc_inact_window_t3

0x0002,

0x0390,	// (0x00041eb4) popup_call_poc_inact_window_t_ParamLimits

0x0390,	// (0x00041eb4) popup_call_poc_inact_window_t

0xe47a,	// (0x0004ff9e) context_pane_ParamLimits

0x487f,	// (0x000463a3) signal_pane_ParamLimits

0xcfe0,	// (0x0004eb04) main_call2_pane

0xe468,	// (0x0004ff8c) popup_phob_thumbnail2_window_ParamLimits

0xe468,	// (0x0004ff8c) popup_phob_thumbnail2_window

0xa9fc,	// (0x0004c520) aid_hotspot_pointer_arrow_pane

0xaa04,	// (0x0004c528) aid_hotspot_pointer_hand_pane

0x43a3,	// (0x00045ec7) phob_pre_status_pane_g5

0x22af,	// (0x00043dd3) cams_zoom_pane_ParamLimits

0x22be,	// (0x00043de2) image_vga_pane_ParamLimits

0x22d8,	// (0x00043dfc) main_camera_pane_g1_ParamLimits

0x22ea,	// (0x00043e0e) main_camera_pane_g2_ParamLimits

0x22fc,	// (0x00043e20) main_camera_pane_g3_ParamLimits

0x230e,	// (0x00043e32) main_camera_pane_g4_ParamLimits

0x2320,	// (0x00043e44) main_camera_pane_g5_ParamLimits

0x2332,	// (0x00043e56) main_camera_pane_g6_ParamLimits

0x2344,	// (0x00043e68) main_camera_pane_g7_ParamLimits

0xf212,	// (0x00050d36) main_camera_pane_g_ParamLimits

0x2356,	// (0x00043e7a) main_camera_pane_t1_ParamLimits

0x236c,	// (0x00043e90) main_camera_pane_t2_ParamLimits

0xf223,	// (0x00050d47) main_camera_pane_t_ParamLimits

0xc449,	// (0x0004df6d) bg_popup_preview_window_pane_cp01_ParamLimits

0xc449,	// (0x0004df6d) bg_popup_preview_window_pane_cp01

0xd42a,	// (0x0004ef4e) popup_phob_thumbnail2_window_g1_ParamLimits

0xd42a,	// (0x0004ef4e) popup_phob_thumbnail2_window_g1

0xc1ee,	// (0x0004dd12) call2_cli_visual_pane

0x4091,	// (0x00045bb5) popup_call2_audio_conf_window_ParamLimits

0x4091,	// (0x00045bb5) popup_call2_audio_conf_window

0x40b1,	// (0x00045bd5) popup_call2_audio_first_window_ParamLimits

0x40b1,	// (0x00045bd5) popup_call2_audio_first_window

0x4147,	// (0x00045c6b) popup_call2_audio_in_window_ParamLimits

0x4147,	// (0x00045c6b) popup_call2_audio_in_window

0x418f,	// (0x00045cb3) popup_call2_audio_out_window_ParamLimits

0x418f,	// (0x00045cb3) popup_call2_audio_out_window

0x41f9,	// (0x00045d1d) popup_call2_audio_second_window_ParamLimits

0x41f9,	// (0x00045d1d) popup_call2_audio_second_window

0x425f,	// (0x00045d83) popup_call2_audio_wait_window_ParamLimits

0x425f,	// (0x00045d83) popup_call2_audio_wait_window

0xc1ee,	// (0x0004dd12) bg_popup_call2_act_pane_cp03

0xc42b,	// (0x0004df4f) list_conf_pane_cp

0xd436,	// (0x0004ef5a) popup_call2_audio_conf_window_t1

0xd444,	// (0x0004ef68) list_single_graphic_popup_conf2_pane_ParamLimits

0xd444,	// (0x0004ef68) list_single_graphic_popup_conf2_pane

0xcdf6,	// (0x0004e91a) list_highlight_pane_cp04

0xd457,	// (0x0004ef7b) list_single_graphic_popup_conf2_pane_g1

0xce07,	// (0x0004e92b) list_single_graphic_popup_conf2_pane_g2

0x0001,

0x0397,	// (0x00041ebb) list_single_graphic_popup_conf2_pane_g

0xd461,	// (0x0004ef85) list_single_graphic_popup_conf2_pane_t1

0xd46f,	// (0x0004ef93) bg_popup_call2_act_pane_cp01_ParamLimits

0xd46f,	// (0x0004ef93) bg_popup_call2_act_pane_cp01

0xd4f9,	// (0x0004f01d) call_type_pane_cp05_ParamLimits

0xd4f9,	// (0x0004f01d) call_type_pane_cp05

0xd54d,	// (0x0004f071) popup_call2_audio_second_window_g1_ParamLimits

0xd54d,	// (0x0004f071) popup_call2_audio_second_window_g1

0xd5a1,	// (0x0004f0c5) popup_call2_audio_second_window_g2_ParamLimits

0xd5a1,	// (0x0004f0c5) popup_call2_audio_second_window_g2

0x0002,

0x039c,	// (0x00041ec0) popup_call2_audio_second_window_g_ParamLimits

0x039c,	// (0x00041ec0) popup_call2_audio_second_window_g

0xd606,	// (0x0004f12a) popup_call2_audio_second_window_t1_ParamLimits

0xd606,	// (0x0004f12a) popup_call2_audio_second_window_t1

0xd6c1,	// (0x0004f1e5) popup_call2_audio_second_window_t2_ParamLimits

0xd6c1,	// (0x0004f1e5) popup_call2_audio_second_window_t2

0xd714,	// (0x0004f238) popup_call2_audio_second_window_t3_ParamLimits

0xd714,	// (0x0004f238) popup_call2_audio_second_window_t3

0x0003,

0x03a3,	// (0x00041ec7) popup_call2_audio_second_window_t_ParamLimits

0x03a3,	// (0x00041ec7) popup_call2_audio_second_window_t

0xc1ee,	// (0x0004dd12) bg_popup_call2_in_pane_cp02

0xc1f8,	// (0x0004dd1c) call_type_pane_cp04

0xc200,	// (0x0004dd24) popup_call2_audio_wait_window_g1

0xc208,	// (0x0004dd2c) popup_call2_audio_wait_window_g2

0x0001,

0xf11b,	// (0x00050c3f) popup_call2_audio_wait_window_g

0xc210,	// (0x0004dd34) popup_call2_audio_wait_window_t3

0xd807,	// (0x0004f32b) bg_popup_call2_act_pane_ParamLimits

0xd807,	// (0x0004f32b) bg_popup_call2_act_pane

0xd8f8,	// (0x0004f41c) call_type_pane_cp03_ParamLimits

0xd8f8,	// (0x0004f41c) call_type_pane_cp03

0xd95c,	// (0x0004f480) popup_call2_audio_first_window_g1_ParamLimits

0xd95c,	// (0x0004f480) popup_call2_audio_first_window_g1

0xd9d8,	// (0x0004f4fc) popup_call2_audio_first_window_g2_ParamLimits

0xd9d8,	// (0x0004f4fc) popup_call2_audio_first_window_g2

0xcd2f,	// (0x0004e853) popup_call2_audio_first_window_g3_ParamLimits

0xcd2f,	// (0x0004e853) popup_call2_audio_first_window_g3

0x0004,

0xf453,	// (0x00050f77) popup_call2_audio_first_window_g_ParamLimits

0xf453,	// (0x00050f77) popup_call2_audio_first_window_g

0xdab6,	// (0x0004f5da) popup_call2_audio_first_window_t1_ParamLimits

0xdab6,	// (0x0004f5da) popup_call2_audio_first_window_t1

0xdbb9,	// (0x0004f6dd) popup_call2_audio_first_window_t4_ParamLimits

0xdbb9,	// (0x0004f6dd) popup_call2_audio_first_window_t4

0xdca5,	// (0x0004f7c9) popup_call2_audio_first_window_t5_ParamLimits

0xdca5,	// (0x0004f7c9) popup_call2_audio_first_window_t5

0x0003,

0xf45e,	// (0x00050f82) popup_call2_audio_first_window_t_ParamLimits

0xf45e,	// (0x00050f82) popup_call2_audio_first_window_t

0xc441,	// (0x0004df65) bg_popup_call2_act_pane_g1

0xe31a,	// (0x0004fe3e) popup_cale_lunar_info_window_t1

0xe328,	// (0x0004fe4c) popup_cale_lunar_info_window_t2

0xe336,	// (0x0004fe5a) popup_cale_lunar_info_window_t3

0xc1ee,	// (0x0004dd12) bg_popup_call2_bubble_pane

0xdda6,	// (0x0004f8ca) bg_popup_call2_in_pane_cp01_ParamLimits

0xdda6,	// (0x0004f8ca) bg_popup_call2_in_pane_cp01

0xbeca,	// (0x0004d9ee) call_type_pane_cp02

0xddee,	// (0x0004f912) popup_call2_audio_out_window_g1_ParamLimits

0xddee,	// (0x0004f912) popup_call2_audio_out_window_g1

0xde1a,	// (0x0004f93e) popup_call2_audio_out_window_g2_ParamLimits

0xde1a,	// (0x0004f93e) popup_call2_audio_out_window_g2

0xde42,	// (0x0004f966) popup_call2_audio_out_window_g3_ParamLimits

0xde42,	// (0x0004f966) popup_call2_audio_out_window_g3

0x0003,

0x03c0,	// (0x00041ee4) popup_call2_audio_out_window_g_ParamLimits

0x03c0,	// (0x00041ee4) popup_call2_audio_out_window_g

0xde7d,	// (0x0004f9a1) popup_call2_audio_out_window_t1_ParamLimits

0xde7d,	// (0x0004f9a1) popup_call2_audio_out_window_t1

0xdedc,	// (0x0004fa00) popup_call2_audio_out_window_t2_ParamLimits

0xdedc,	// (0x0004fa00) popup_call2_audio_out_window_t2

0xdf30,	// (0x0004fa54) popup_call2_audio_out_window_t3_ParamLimits

0xdf30,	// (0x0004fa54) popup_call2_audio_out_window_t3

0xdf46,	// (0x0004fa6a) popup_call2_audio_out_window_t4_ParamLimits

0xdf46,	// (0x0004fa6a) popup_call2_audio_out_window_t4

0xdf5c,	// (0x0004fa80) popup_call2_audio_out_window_t5_ParamLimits

0xdf5c,	// (0x0004fa80) popup_call2_audio_out_window_t5

0x0005,

0x03c9,	// (0x00041eed) popup_call2_audio_out_window_t_ParamLimits

0x03c9,	// (0x00041eed) popup_call2_audio_out_window_t

0xdfc0,	// (0x0004fae4) bg_popup_call2_in_pane_ParamLimits

0xdfc0,	// (0x0004fae4) bg_popup_call2_in_pane

0xe01c,	// (0x0004fb40) popup_call2_audio_in_window_g1_ParamLimits

0xe01c,	// (0x0004fb40) popup_call2_audio_in_window_g1

0xe054,	// (0x0004fb78) popup_call2_audio_in_window_g2_ParamLimits

0xe054,	// (0x0004fb78) popup_call2_audio_in_window_g2

0xe08c,	// (0x0004fbb0) popup_call2_audio_in_window_g3_ParamLimits

0xe08c,	// (0x0004fbb0) popup_call2_audio_in_window_g3

0x0003,

0x03d6,	// (0x00041efa) popup_call2_audio_in_window_g_ParamLimits

0x03d6,	// (0x00041efa) popup_call2_audio_in_window_g

0xe0e4,	// (0x0004fc08) popup_call2_audio_in_window_t1_ParamLimits

0xe0e4,	// (0x0004fc08) popup_call2_audio_in_window_t1

0xe164,	// (0x0004fc88) popup_call2_audio_in_window_t2_ParamLimits

0xe164,	// (0x0004fc88) popup_call2_audio_in_window_t2

0xe1e4,	// (0x0004fd08) popup_call2_audio_in_window_t3_ParamLimits

0xe1e4,	// (0x0004fd08) popup_call2_audio_in_window_t3

0xe1fe,	// (0x0004fd22) popup_call2_audio_in_window_t4_ParamLimits

0xe1fe,	// (0x0004fd22) popup_call2_audio_in_window_t4

0xe210,	// (0x0004fd34) popup_call2_audio_in_window_t5_ParamLimits

0xe210,	// (0x0004fd34) popup_call2_audio_in_window_t5

0xe225,	// (0x0004fd49) popup_call2_audio_in_window_t6_ParamLimits

0xe225,	// (0x0004fd49) popup_call2_audio_in_window_t6

0x0005,

0x03df,	// (0x00041f03) popup_call2_audio_in_window_t_ParamLimits

0x03df,	// (0x00041f03) popup_call2_audio_in_window_t

0xc441,	// (0x0004df65) bg_popup_call2_in_pane_g1

0xe344,	// (0x0004fe68) popup_cale_lunar_info_window_t4

0x0003,

0x0447,	// (0x00041f6b) popup_cale_lunar_info_window_t

0xc449,	// (0x0004df6d) bg_popup_call2_rect_pane_ParamLimits

0xc449,	// (0x0004df6d) bg_popup_call2_rect_pane

0xc1ee,	// (0x0004dd12) call2_cli_visual_graphic_pane

0xc1ee,	// (0x0004dd12) call2_cli_visual_text_pane

0xaa3e,	// (0x0004c562) smil_status_volume_pane_g3

0x0002,

0xc5ad,	// (0x0004e0d1) call2_cli_visual_graphic_pane_g1

0xc5ad,	// (0x0004e0d1) call2_cli_visual_graphic_pane_g2

0xc5ad,	// (0x0004e0d1) call2_cli_visual_graphic_pane_g3

0x0002,

0x03ec,	// (0x00041f10) call2_cli_visual_graphic_pane_g

0xe23a,	// (0x0004fd5e) bg_popup_call2_rect_pane_g1

0xc64b,	// (0x0004e16f) bg_popup_call2_rect_pane_g2

0xe242,	// (0x0004fd66) bg_popup_call2_rect_pane_g3

0xe24a,	// (0x0004fd6e) bg_popup_call2_rect_pane_g4

0xe252,	// (0x0004fd76) bg_popup_call2_rect_pane_g5

0xe25a,	// (0x0004fd7e) bg_popup_call2_rect_pane_g6

0xe262,	// (0x0004fd86) bg_popup_call2_rect_pane_g7

0xe26a,	// (0x0004fd8e) bg_popup_call2_rect_pane_g8

0xe272,	// (0x0004fd96) bg_popup_call2_rect_pane_g9

0x0008,

0x03f3,	// (0x00041f17) bg_popup_call2_rect_pane_g

0xe27a,	// (0x0004fd9e) bg_popup_call2_bubble_pane_g1

0xe282,	// (0x0004fda6) bg_popup_call2_bubble_pane_g2

0xe28a,	// (0x0004fdae) bg_popup_call2_bubble_pane_g3

0xe292,	// (0x0004fdb6) bg_popup_call2_bubble_pane_g4

0xe29a,	// (0x0004fdbe) bg_popup_call2_bubble_pane_g5

0xe2a2,	// (0x0004fdc6) bg_popup_call2_bubble_pane_g6

0xe2aa,	// (0x0004fdce) bg_popup_call2_bubble_pane_g7

0xe2b2,	// (0x0004fdd6) bg_popup_call2_bubble_pane_g8

0xe2ba,	// (0x0004fdde) bg_popup_call2_bubble_pane_g9

0x0008,

0x0406,	// (0x00041f2a) bg_popup_call2_bubble_pane_g

0x1f11,	// (0x00043a35) aid_cale_week_size_cell_pane

0x2384,	// (0x00043ea8) aid_cams_cif_uncrop_pane_ParamLimits

0x2384,	// (0x00043ea8) aid_cams_cif_uncrop_pane

0x2541,	// (0x00044065) aid_cams_size_cell_ParamLimits

0x2541,	// (0x00044065) aid_cams_size_cell

0x2555,	// (0x00044079) grid_cams_pane_ParamLimits

0x256f,	// (0x00044093) linegrid_cams_pane_ParamLimits

0x2655,	// (0x00044179) call_video_pane_t1

0x2673,	// (0x00044197) call_video_pane_t2

0x0001,

0xf268,	// (0x00050d8c) call_video_pane_t

0x2aa6,	// (0x000445ca) aid_cale_month_size_cell_pane_ParamLimits

0x2aa6,	// (0x000445ca) aid_cale_month_size_cell_pane

0xf497,	// (0x00050fbb) smil_status_volume_pane_g

0xaa4b,	// (0x0004c56f) volume_smil_pane_ParamLimits

0xa6b4,	// (0x0004c1d8) aid_popup2_width_pane

0x1e93,	// (0x000439b7) cell_qdial_pane_g4_ParamLimits

0x1e93,	// (0x000439b7) cell_qdial_pane_g4

0x363a,	// (0x0004515e) aid_blid_cardinal_pane_ParamLimits

0x3646,	// (0x0004516a) aid_blid_destination_pane_ParamLimits

0x3646,	// (0x0004516a) aid_blid_destination_pane

0xc449,	// (0x0004df6d) bg_popup_call_poc_act_pane_ParamLimits

0xc449,	// (0x0004df6d) bg_popup_call_poc_act_pane

0xc449,	// (0x0004df6d) bg_popup_call_poc_inact_pane_ParamLimits

0xc449,	// (0x0004df6d) bg_popup_call_poc_inact_pane

0xe2ca,	// (0x0004fdee) bg_popup_call_poc_act_pane_g1

0xe2d2,	// (0x0004fdf6) bg_popup_call_poc_act_pane_g2

0xe2da,	// (0x0004fdfe) bg_popup_call_poc_act_pane_g3

0xe292,	// (0x0004fdb6) bg_popup_call_poc_act_pane_g4

0xe29a,	// (0x0004fdbe) bg_popup_call_poc_act_pane_g5

0xe2e2,	// (0x0004fe06) bg_popup_call_poc_act_pane_g6

0xe2aa,	// (0x0004fdce) bg_popup_call_poc_act_pane_g7

0xe2ea,	// (0x0004fe0e) bg_popup_call_poc_act_pane_g8

0xc1ee,	// (0x0004dd12) main_usb_pane

0xe443,	// (0x0004ff67) popup_cale_lunar_info_window

0x293d,	// (0x00044461) im_reading_pane_t1_ParamLimits

0xc810,	// (0x0004e334) list_im_pane_ParamLimits

0xc821,	// (0x0004e345) scroll_pane_cp07_ParamLimits

0xc1ee,	// (0x0004dd12) grid_highlight_pane_cp012

0xc449,	// (0x0004df6d) mup_scale_pane_ParamLimits

0xd17d,	// (0x0004eca1) main_usb_pane_g1_ParamLimits

0xd17d,	// (0x0004eca1) main_usb_pane_g1

0x42b6,	// (0x00045dda) main_usb_pane_g2_ParamLimits

0x42b6,	// (0x00045dda) main_usb_pane_g2

0x0001,

0xf467,	// (0x00050f8b) main_usb_pane_g_ParamLimits

0xf467,	// (0x00050f8b) main_usb_pane_g

0x42cc,	// (0x00045df0) main_usb_pane_t1_ParamLimits

0x42cc,	// (0x00045df0) main_usb_pane_t1

0x42de,	// (0x00045e02) main_usb_pane_t2_ParamLimits

0x42de,	// (0x00045e02) main_usb_pane_t2

0x42f0,	// (0x00045e14) main_usb_pane_t3_ParamLimits

0x42f0,	// (0x00045e14) main_usb_pane_t3

0x4302,	// (0x00045e26) main_usb_pane_t4_ParamLimits

0x4302,	// (0x00045e26) main_usb_pane_t4

0x4314,	// (0x00045e38) main_usb_pane_t5_ParamLimits

0x4314,	// (0x00045e38) main_usb_pane_t5

0x4326,	// (0x00045e4a) main_usb_pane_t6_ParamLimits

0x4326,	// (0x00045e4a) main_usb_pane_t6

0x0005,

0xf46c,	// (0x00050f90) main_usb_pane_t_ParamLimits

0x35df,	// (0x00045103) aid_text_placing

0x35e8,	// (0x0004510c) main_location2_pane_t1_ParamLimits

0x35fc,	// (0x00045120) main_location2_pane_t2_ParamLimits

0x3610,	// (0x00045134) main_location2_pane_t3_ParamLimits

0x3626,	// (0x0004514a) main_location2_pane_t4_ParamLimits

0x3626,	// (0x0004514a) main_location2_pane_t4

0xf35b,	// (0x00050e7f) main_location2_pane_t_ParamLimits

0xc48d,	// (0x0004dfb1) find_pinb_pane_g2_ParamLimits

0xc48d,	// (0x0004dfb1) find_pinb_pane_g2

0x0001,

0xf141,	// (0x00050c65) find_pinb_pane_g_ParamLimits

0xf141,	// (0x00050c65) find_pinb_pane_g

0xc499,	// (0x0004dfbd) find_pinb_pane_t1_ParamLimits

0xc4ab,	// (0x0004dfcf) find_pinb_pane_t2_ParamLimits

0xf146,	// (0x00050c6a) find_pinb_pane_t_ParamLimits

0xc1ee,	// (0x0004dd12) main_call3_pane

0x2e0a,	// (0x0004492e) cale_month_day_heading_pane_t1_ParamLimits

0x2e68,	// (0x0004498c) cale_month_day_heading_pane_t2_ParamLimits

0x2ecd,	// (0x000449f1) cale_month_day_heading_pane_t3_ParamLimits

0x2f32,	// (0x00044a56) cale_month_day_heading_pane_t4_ParamLimits

0x2f97,	// (0x00044abb) cale_month_day_heading_pane_t5_ParamLimits

0x300c,	// (0x00044b30) cale_month_day_heading_pane_t6_ParamLimits

0x3081,	// (0x00044ba5) cale_month_day_heading_pane_t7_ParamLimits

0xf28d,	// (0x00050db1) cale_month_day_heading_pane_t_ParamLimits

0xca61,	// (0x0004e585) smil_status_volume_pane

0x3dad,	// (0x000458d1) postcard_address_pane_ParamLimits

0x3dad,	// (0x000458d1) postcard_address_pane

0x3dbf,	// (0x000458e3) postcard_message_pane_ParamLimits

0x3dbf,	// (0x000458e3) postcard_message_pane

0x4299,	// (0x00045dbd) call2_cli_visual_pane_t1_ParamLimits

0x4299,	// (0x00045dbd) call2_cli_visual_pane_t1

0x4aad,	// (0x000465d1) postcard_message_pane_t1_ParamLimits

0x4aad,	// (0x000465d1) postcard_message_pane_t1

0x4a96,	// (0x000465ba) postcard_address_pane_t1_ParamLimits

0x4a96,	// (0x000465ba) postcard_address_pane_t1

0x4a82,	// (0x000465a6) popup_call3_audio_in_window_ParamLimits

0x4a82,	// (0x000465a6) popup_call3_audio_in_window

0x4911,	// (0x00046435) bg_popup_call3_in_pane_ParamLimits

0x4911,	// (0x00046435) bg_popup_call3_in_pane

0x4983,	// (0x000464a7) popup_call3_audio_in_window_g1_ParamLimits

0x4983,	// (0x000464a7) popup_call3_audio_in_window_g1

0x49a3,	// (0x000464c7) popup_call3_audio_in_window_g2_ParamLimits

0x49a3,	// (0x000464c7) popup_call3_audio_in_window_g2

0x49c3,	// (0x000464e7) popup_call3_audio_in_window_g3_ParamLimits

0x49c3,	// (0x000464e7) popup_call3_audio_in_window_g3

0x0003,

0xf49e,	// (0x00050fc2) popup_call3_audio_in_window_g_ParamLimits

0xf49e,	// (0x00050fc2) popup_call3_audio_in_window_g

0x49f4,	// (0x00046518) popup_call3_audio_in_window_t1_ParamLimits

0x49f4,	// (0x00046518) popup_call3_audio_in_window_t1

0x4a32,	// (0x00046556) popup_call3_audio_in_window_t2_ParamLimits

0x4a32,	// (0x00046556) popup_call3_audio_in_window_t2

0x4a70,	// (0x00046594) popup_call3_audio_in_window_t3_ParamLimits

0x4a70,	// (0x00046594) popup_call3_audio_in_window_t3

0x0002,

0xf4a7,	// (0x00050fcb) popup_call3_audio_in_window_t_ParamLimits

0xf4a7,	// (0x00050fcb) popup_call3_audio_in_window_t

0xcfe0,	// (0x0004eb04) bg_popup_call3_rect_pane

0xe23a,	// (0x0004fd5e) bg_popup_call3_rect_pane_g1

0xc64b,	// (0x0004e16f) bg_popup_call3_rect_pane_g2

0xe242,	// (0x0004fd66) bg_popup_call3_rect_pane_g3

0xe24a,	// (0x0004fd6e) bg_popup_call3_rect_pane_g4

0xe252,	// (0x0004fd76) bg_popup_call3_rect_pane_g5

0xe25a,	// (0x0004fd7e) bg_popup_call3_rect_pane_g6

0xe262,	// (0x0004fd86) bg_popup_call3_rect_pane_g7

0x3a02,	// (0x00045526) mup_visualizer_osc_pane

0xd09f,	// (0x0004ebc3) mup_visualizer_spec_pane

0x4941,	// (0x00046465) call3_video_qcif_pane_ParamLimits

0x4941,	// (0x00046465) call3_video_qcif_pane

0x4952,	// (0x00046476) call3_video_qcif_uncrop_pane_ParamLimits

0x4952,	// (0x00046476) call3_video_qcif_uncrop_pane

0x495e,	// (0x00046482) call3_video_subqcif_pane_ParamLimits

0x495e,	// (0x00046482) call3_video_subqcif_pane

0x4972,	// (0x00046496) call3_video_subqcif_uncrop_pane_ParamLimits

0x4972,	// (0x00046496) call3_video_subqcif_uncrop_pane

0x49e3,	// (0x00046507) popup_call3_audio_in_window_g4_ParamLimits

0x49e3,	// (0x00046507) popup_call3_audio_in_window_g4

0x4900,	// (0x00046424) mup_spec_half_pane

0x4909,	// (0x0004642d) mup_spec_half_pane_cp

0xe4da,	// (0x0004fffe) mup_osc_middle_pane

0xe4e3,	// (0x00050007) mup_visualizer_osc_pane_g1

0x48e0,	// (0x00046404) mup_spec_bar_pane_ParamLimits

0x48e0,	// (0x00046404) mup_spec_bar_pane

0xe4c7,	// (0x0004ffeb) mup_spec_bar_pane_g1

0xe4d1,	// (0x0004fff5) mup_spec_bar_pane_g2

0x0001,

0x048b,	// (0x00041faf) mup_spec_bar_pane_g

0x1f11,	// (0x00043a35) aid_cale_week_size_cell_pane_ParamLimits

0x1f24,	// (0x00043a48) bg_cale_heading_pane_ParamLimits

0xc67f,	// (0x0004e1a3) bg_cale_pane_cp01_ParamLimits

0x1f3c,	// (0x00043a60) cale_week_corner_pane_ParamLimits

0x1f4d,	// (0x00043a71) cale_week_day_heading_pane_ParamLimits

0x1f65,	// (0x00043a89) cale_week_scroll_pane_g1_ParamLimits

0x1f7a,	// (0x00043a9e) cale_week_scroll_pane_g2_ParamLimits

0x1f8b,	// (0x00043aaf) cale_week_scroll_pane_g3_ParamLimits

0x1f9c,	// (0x00043ac0) cale_week_scroll_pane_g4_ParamLimits

0x1fad,	// (0x00043ad1) cale_week_scroll_pane_g5_ParamLimits

0x1fc0,	// (0x00043ae4) cale_week_scroll_pane_g6_ParamLimits

0x1fd3,	// (0x00043af7) cale_week_scroll_pane_g7_ParamLimits

0x1fe6,	// (0x00043b0a) cale_week_scroll_pane_g8_ParamLimits

0x1ff9,	// (0x00043b1d) cale_week_scroll_pane_g9_ParamLimits

0x200a,	// (0x00043b2e) cale_week_scroll_pane_g10_ParamLimits

0x201b,	// (0x00043b3f) cale_week_scroll_pane_g11_ParamLimits

0x202c,	// (0x00043b50) cale_week_scroll_pane_g12_ParamLimits

0x203d,	// (0x00043b61) cale_week_scroll_pane_g13_ParamLimits

0x204e,	// (0x00043b72) cale_week_scroll_pane_g14_ParamLimits

0x205f,	// (0x00043b83) cale_week_scroll_pane_g15_ParamLimits

0xf1bb,	// (0x00050cdf) cale_week_scroll_pane_g_ParamLimits

0x2070,	// (0x00043b94) cale_week_time_pane_ParamLimits

0x2083,	// (0x00043ba7) grid_cale_week_pane_ParamLimits

0xc698,	// (0x0004e1bc) listscroll_cale_week_pane_t1

0x2098,	// (0x00043bbc) scroll_pane_cp08_ParamLimits

0x2ae7,	// (0x0004460b) cale_month_corner_pane_ParamLimits

0xca37,	// (0x0004e55b) cale_month_pane_t1

0x2dc9,	// (0x000448ed) cale_month_week_pane_ParamLimits

0x3446,	// (0x00044f6a) popup_call_status_window_g1_ParamLimits

0x345a,	// (0x00044f7e) popup_call_status_window_g2_ParamLimits

0x346e,	// (0x00044f92) popup_call_status_window_g3_ParamLimits

0xf304,	// (0x00050e28) popup_call_status_window_g_ParamLimits

0xcd53,	// (0x0004e877) aid_call2_pane

0x0ea0,	// (0x000429c4) msg_header_pane_g1

0x3dad,	// (0x000458d1) postcard_address2_pane_ParamLimits

0x3dad,	// (0x000458d1) postcard_address2_pane

0x3dbf,	// (0x000458e3) postcard_message2_pane_ParamLimits

0x3dbf,	// (0x000458e3) postcard_message2_pane

0x488d,	// (0x000463b1) message2_row_pane_ParamLimits

0x488d,	// (0x000463b1) message2_row_pane

0x48ac,	// (0x000463d0) address2_row_pane_ParamLimits

0x48ac,	// (0x000463d0) address2_row_pane

0xe495,	// (0x0004ffb9) postcard_message2_row_pane_g1

0xe49d,	// (0x0004ffc1) postcard_message2_row_pane_t1

0xe495,	// (0x0004ffb9) address2_row_pane_g1

0xe49d,	// (0x0004ffc1) address2_row_pane_t1

0xa794,	// (0x0004c2b8) aid_size_cell_vorec

0xc1ee,	// (0x0004dd12) main_rss_pane

0x48bf,	// (0x000463e3) rss_list_single_pane_ParamLimits

0x48bf,	// (0x000463e3) rss_list_single_pane

0xe4ab,	// (0x0004ffcf) rss_list_single_pane_t1

0xe4b9,	// (0x0004ffdd) rss_list_single_pane_t2

0x0001,

0x0486,	// (0x00041faa) rss_list_single_pane_t

0xc1ee,	// (0x0004dd12) main_camera2_pane

0xc1ee,	// (0x0004dd12) main_video2_pane

0x4b26,	// (0x0004664a) cams_zoom_pane_cp2_ParamLimits

0x4b26,	// (0x0004664a) cams_zoom_pane_cp2

0x4b46,	// (0x0004666a) image2_vga_pane_ParamLimits

0x4b46,	// (0x0004666a) image2_vga_pane

0x4b97,	// (0x000466bb) main_camera2_pane_g1_ParamLimits

0x4b97,	// (0x000466bb) main_camera2_pane_g1

0x4bb7,	// (0x000466db) main_camera2_pane_g2_ParamLimits

0x4bb7,	// (0x000466db) main_camera2_pane_g2

0x4bd7,	// (0x000466fb) main_camera2_pane_g3_ParamLimits

0x4bd7,	// (0x000466fb) main_camera2_pane_g3

0x4bf7,	// (0x0004671b) main_camera2_pane_g4_ParamLimits

0x4bf7,	// (0x0004671b) main_camera2_pane_g4

0x4c17,	// (0x0004673b) main_camera2_pane_g5_ParamLimits

0x4c17,	// (0x0004673b) main_camera2_pane_g5

0x4c37,	// (0x0004675b) main_camera2_pane_g6_ParamLimits

0x4c37,	// (0x0004675b) main_camera2_pane_g6

0x4c57,	// (0x0004677b) main_camera2_pane_g7_ParamLimits

0x4c57,	// (0x0004677b) main_camera2_pane_g7

0x4c77,	// (0x0004679b) main_camera2_pane_g8_ParamLimits

0x4c77,	// (0x0004679b) main_camera2_pane_g8

0x0008,

0xf4ae,	// (0x00050fd2) main_camera2_pane_g_ParamLimits

0xf4ae,	// (0x00050fd2) main_camera2_pane_g

0x4cb7,	// (0x000467db) main_camera2_pane_t1_ParamLimits

0x4cb7,	// (0x000467db) main_camera2_pane_t1

0x4cec,	// (0x00046810) main_camera2_pane_t2_ParamLimits

0x4cec,	// (0x00046810) main_camera2_pane_t2

0x4d12,	// (0x00046836) main_camera2_pane_t3_ParamLimits

0x4d12,	// (0x00046836) main_camera2_pane_t3

0x4d70,	// (0x00046894) main_camera2_pane_t4_ParamLimits

0x4d70,	// (0x00046894) main_camera2_pane_t4

0x0006,

0xf4c1,	// (0x00050fe5) main_camera2_pane_t_ParamLimits

0xf4c1,	// (0x00050fe5) main_camera2_pane_t

0x4e02,	// (0x00046926) cams_zoom_pane_cp4_ParamLimits

0x4e02,	// (0x00046926) cams_zoom_pane_cp4

0x4e18,	// (0x0004693c) image2_cif_pane_ParamLimits

0x4e18,	// (0x0004693c) image2_cif_pane

0x4e43,	// (0x00046967) image2_subqcif_pane_ParamLimits

0x4e43,	// (0x00046967) image2_subqcif_pane

0x4e5d,	// (0x00046981) main_video2_pane_g1_ParamLimits

0x4e5d,	// (0x00046981) main_video2_pane_g1

0x4e77,	// (0x0004699b) main_video2_pane_g2_ParamLimits

0x4e77,	// (0x0004699b) main_video2_pane_g2

0x4e8d,	// (0x000469b1) main_video2_pane_g3_ParamLimits

0x4e8d,	// (0x000469b1) main_video2_pane_g3

0x4ea3,	// (0x000469c7) main_video2_pane_g4_ParamLimits

0x4ea3,	// (0x000469c7) main_video2_pane_g4

0x4eb9,	// (0x000469dd) main_video2_pane_g5_ParamLimits

0x4eb9,	// (0x000469dd) main_video2_pane_g5

0x4ecf,	// (0x000469f3) main_video2_pane_g6_ParamLimits

0x4ecf,	// (0x000469f3) main_video2_pane_g6

0x0005,

0xf4d0,	// (0x00050ff4) main_video2_pane_g_ParamLimits

0xf4d0,	// (0x00050ff4) main_video2_pane_g

0x4ee9,	// (0x00046a0d) main_video2_pane_t1_ParamLimits

0x4ee9,	// (0x00046a0d) main_video2_pane_t1

0x4f0d,	// (0x00046a31) main_video2_pane_t2_ParamLimits

0x4f0d,	// (0x00046a31) main_video2_pane_t2

0x4f5b,	// (0x00046a7f) main_video2_pane_t3_ParamLimits

0x4f5b,	// (0x00046a7f) main_video2_pane_t3

0x0002,

0xf4dd,	// (0x00051001) main_video2_pane_t_ParamLimits

0xf4dd,	// (0x00051001) main_video2_pane_t

0x43e3,	// (0x00045f07) call_muted_g2

0x0001,

0xf492,	// (0x00050fb6) call_muted_g

0xc1ee,	// (0x0004dd12) main_mup2_pane

0x4fa3,	// (0x00046ac7) main_mup2_pane_g1_ParamLimits

0x4fa3,	// (0x00046ac7) main_mup2_pane_g1

0x4faf,	// (0x00046ad3) main_mup2_pane_g2_ParamLimits

0x4faf,	// (0x00046ad3) main_mup2_pane_g2

0xaab9,	// (0x0004c5dd) main_mup_pane_g13_cp1

0xaac1,	// (0x0004c5e5) mup_volume_pane_cp1

0x4fcb,	// (0x00046aef) main_mup2_pane_g4_ParamLimits

0x4fcb,	// (0x00046aef) main_mup2_pane_g4

0x4fdd,	// (0x00046b01) main_mup2_pane_g5_ParamLimits

0x4fdd,	// (0x00046b01) main_mup2_pane_g5

0x4fef,	// (0x00046b13) main_mup2_pane_g6_ParamLimits

0x4fef,	// (0x00046b13) main_mup2_pane_g6

0x5001,	// (0x00046b25) main_mup2_pane_g7_ParamLimits

0x5001,	// (0x00046b25) main_mup2_pane_g7

0x0006,

0xf4e4,	// (0x00051008) main_mup2_pane_g_ParamLimits

0xf4e4,	// (0x00051008) main_mup2_pane_g

0x5019,	// (0x00046b3d) main_mup2_pane_t1_ParamLimits

0x5019,	// (0x00046b3d) main_mup2_pane_t1

0x502f,	// (0x00046b53) main_mup2_pane_t2_ParamLimits

0x502f,	// (0x00046b53) main_mup2_pane_t2

0x5045,	// (0x00046b69) main_mup2_pane_t3_ParamLimits

0x5045,	// (0x00046b69) main_mup2_pane_t3

0x505b,	// (0x00046b7f) main_mup2_pane_t4_ParamLimits

0x505b,	// (0x00046b7f) main_mup2_pane_t4

0x5073,	// (0x00046b97) main_mup2_pane_t5_ParamLimits

0x5073,	// (0x00046b97) main_mup2_pane_t5

0x508b,	// (0x00046baf) main_mup2_pane_t6_ParamLimits

0x508b,	// (0x00046baf) main_mup2_pane_t6

0x0005,

0xf4f3,	// (0x00051017) main_mup2_pane_t_ParamLimits

0xf4f3,	// (0x00051017) main_mup2_pane_t

0x50bb,	// (0x00046bdf) mup2_visualizer_pane_ParamLimits

0x50bb,	// (0x00046bdf) mup2_visualizer_pane

0x50e9,	// (0x00046c0d) mup_progress_pane_cp_ParamLimits

0x50e9,	// (0x00046c0d) mup_progress_pane_cp

0xaaa4,	// (0x0004c5c8) mup_volume_pane_cp_ParamLimits

0xaaa4,	// (0x0004c5c8) mup_volume_pane_cp

0x50fd,	// (0x00046c21) mup2_visualizer_pane_g1_ParamLimits

0x50fd,	// (0x00046c21) mup2_visualizer_pane_g1

0xe51a,	// (0x0005003e) mup2_visualizer_pane_g2_ParamLimits

0xe51a,	// (0x0005003e) mup2_visualizer_pane_g2

0x5114,	// (0x00046c38) mup2_visualizer_pane_g3_ParamLimits

0x5114,	// (0x00046c38) mup2_visualizer_pane_g3

0x0002,

0xf500,	// (0x00051024) mup2_visualizer_pane_g_ParamLimits

0xf500,	// (0x00051024) mup2_visualizer_pane_g

0xd2c6,	// (0x0004edea) aid_size_cell_fmradio

0x4595,	// (0x000460b9) aid_height_parent_landcape

0xc89f,	// (0x0004e3c3) wml_content_pane_cp

0xc8a7,	// (0x0004e3cb) wml_tabs_pane

0xc8b0,	// (0x0004e3d4) popup_wml_miniature_window

0xc8b8,	// (0x0004e3dc) scroll_pane_cp021

0xc8cc,	// (0x0004e3f0) wml_content_pane_comp8

0xc1ee,	// (0x0004dd12) bg_popup_sub_pane_cp05

0xe538,	// (0x0005005c) popup_wml_miniature_window_g1

0xe540,	// (0x00050064) wml_miniature_view_pane

0x5120,	// (0x00046c44) aid_size_wml_view

0x5128,	// (0x00046c4c) wml_miniature_view_pane_g1

0x5131,	// (0x00046c55) wml_miniature_view_pane_g2

0x513a,	// (0x00046c5e) wml_miniature_view_pane_g3

0x5142,	// (0x00046c66) wml_miniature_view_pane_g4

0x514a,	// (0x00046c6e) wml_miniature_view_pane_g5

0x5152,	// (0x00046c76) wml_miniature_view_pane_g6

0x515a,	// (0x00046c7e) wml_miniature_view_pane_g7

0x5162,	// (0x00046c86) wml_miniature_view_pane_g8

0x0007,

0xf507,	// (0x0005102b) wml_miniature_view_pane_g

0xe548,	// (0x0005006c) background_graphic_ParamLimits

0xe548,	// (0x0005006c) background_graphic

0xe554,	// (0x00050078) wml_tabs_2_pane

0xe55d,	// (0x00050081) wml_tabs_3_pane_ParamLimits

0xe55d,	// (0x00050081) wml_tabs_3_pane

0xe56f,	// (0x00050093) wml_tabs_4_pane_ParamLimits

0xe56f,	// (0x00050093) wml_tabs_4_pane

0xe585,	// (0x000500a9) wml_tabs_5_pane_ParamLimits

0xe585,	// (0x000500a9) wml_tabs_5_pane

0xe59f,	// (0x000500c3) wml_tabs_pane_g2_ParamLimits

0xe59f,	// (0x000500c3) wml_tabs_pane_g2

0xe5b3,	// (0x000500d7) wml_tabs_pane_g3_ParamLimits

0xe5b3,	// (0x000500d7) wml_tabs_pane_g3

0x516a,	// (0x00046c8e) wml_tabs_2_active_pane_ParamLimits

0x516a,	// (0x00046c8e) wml_tabs_2_active_pane

0x517e,	// (0x00046ca2) wml_tabs_2_passive_pane_ParamLimits

0x517e,	// (0x00046ca2) wml_tabs_2_passive_pane

0x5192,	// (0x00046cb6) wml_tabs_3_active_pane_cp_ParamLimits

0x5192,	// (0x00046cb6) wml_tabs_3_active_pane_cp

0x51a7,	// (0x00046ccb) wml_tabs_3_passive_pane_ParamLimits

0x51a7,	// (0x00046ccb) wml_tabs_3_passive_pane

0x51ba,	// (0x00046cde) wml_tabs_3_passive_pane_cp_ParamLimits

0x51ba,	// (0x00046cde) wml_tabs_3_passive_pane_cp

0x51d1,	// (0x00046cf5) tabs_4_active_pane

0x51d9,	// (0x00046cfd) tabs_4_passive_pane

0x51e3,	// (0x00046d07) tabs_4_passive_pane_cp

0x51eb,	// (0x00046d0f) tabs_4_passive_pane_cp2

0xe2c2,	// (0x0004fde6) aid_height_text

0x39d4,	// (0x000454f8) mup_volume_cont_pane_ParamLimits

0x39d4,	// (0x000454f8) mup_volume_cont_pane

0x1b74,	// (0x00043698) aid_size_cell_pinb

0xc479,	// (0x0004df9d) aid_size_list_pinb

0x50d5,	// (0x00046bf9) mup2_volume_cont_pane_ParamLimits

0x50d5,	// (0x00046bf9) mup2_volume_cont_pane

0xaa90,	// (0x0004c5b4) mup2_volume_cont_pane_g1_ParamLimits

0xaa90,	// (0x0004c5b4) mup2_volume_cont_pane_g1

0x1855,	// (0x00043379) aid_size_cell_touch_ParamLimits

0x1855,	// (0x00043379) aid_size_cell_touch

0x1a63,	// (0x00043587) touch_pane_ParamLimits

0x1a63,	// (0x00043587) touch_pane

0xa6a2,	// (0x0004c1c6) main_rss2_pane

0xe5d0,	// (0x000500f4) listscroll_rss2_pane

0xe5d9,	// (0x000500fd) rss2_navigation_pane

0xe5e1,	// (0x00050105) list_rss2_pane

0xce93,	// (0x0004e9b7) scroll_pane_cp22

0xe5e9,	// (0x0005010d) rss2_navigation_pane_g1

0xe5f2,	// (0x00050116) rss2_navigation_pane_g2

0xe5fa,	// (0x0005011e) rss2_navigation_pane_g3

0x0002,

0x0511,	// (0x00042035) rss2_navigation_pane_g

0xe602,	// (0x00050126) rss2_navigation_pane_t1

0x51f5,	// (0x00046d19) rss2_list_single_pane_ParamLimits

0x51f5,	// (0x00046d19) rss2_list_single_pane

0xe610,	// (0x00050134) rss2_list_single_pane_t2

0xe61e,	// (0x00050142) rss2_list_single_pane_t3_ParamLimits

0xe61e,	// (0x00050142) rss2_list_single_pane_t3

0xe63b,	// (0x0005015f) rss2_list_single_pane_t4

0x327d,	// (0x00044da1) smil_status_pane_g1

0xd8c7,	// (0x0004f3eb) main_image2_pane_ParamLimits

0xd8c7,	// (0x0004f3eb) main_image2_pane

0x4c97,	// (0x000467bb) main_camera2_pane_g9_ParamLimits

0x4c97,	// (0x000467bb) main_camera2_pane_g9

0x4dc5,	// (0x000468e9) main_camera2_pane_t5_ParamLimits

0x4dc5,	// (0x000468e9) main_camera2_pane_t5

0xaa60,	// (0x0004c584) main_camera2_pane_t6_ParamLimits

0xaa60,	// (0x0004c584) main_camera2_pane_t6

0x520d,	// (0x00046d31) main_image2_pane_g1_ParamLimits

0x520d,	// (0x00046d31) main_image2_pane_g1

0x3fef,	// (0x00045b13) smil2_video_pane_ParamLimits

0x3fef,	// (0x00045b13) smil2_video_pane

0xa6d0,	// (0x0004c1f4) aid_zoom_text_primary_cp

0xbdd3,	// (0x0004d8f7) popup_preview_fixed_window

0xc808,	// (0x0004e32c) im_reading_pane_g1

0x4b0e,	// (0x00046632) cams2_bc_adjust_pane_cp_ParamLimits

0x4b0e,	// (0x00046632) cams2_bc_adjust_pane_cp

0x4df4,	// (0x00046918) cams2_bc_adjust_pane_ParamLimits

0x4df4,	// (0x00046918) cams2_bc_adjust_pane

0xaac9,	// (0x0004c5ed) cams2_bc_adjust_pane_g1

0xaad1,	// (0x0004c5f5) cams2_slider_pane

0xaada,	// (0x0004c5fe) cams2_slider_pane_g1

0xaae3,	// (0x0004c607) cams2_slider_pane_g2

0x0006,

0xf518,	// (0x0005103c) cams2_slider_pane_g

0x1c33,	// (0x00043757) calc_display_pane_ParamLimits

0x1c5b,	// (0x0004377f) calc_paper_pane_ParamLimits

0x1c7e,	// (0x000437a2) grid_calc_pane_ParamLimits

0xa9cd,	// (0x0004c4f1) popup_clock_digital_window_t1_ParamLimits

0xd263,	// (0x0004ed87) main_image_pane_t1

0x1c15,	// (0x00043739) aid_size_cell_calc_ParamLimits

0x1c15,	// (0x00043739) aid_size_cell_calc

0x45db,	// (0x000460ff) popup_blid_sat_info2_window_ParamLimits

0x45db,	// (0x000460ff) popup_blid_sat_info2_window

0xe651,	// (0x00050175) aid_size_cell_blid

0xe659,	// (0x0005017d) bg_popup_window_pane_cp07

0xe67c,	// (0x000501a0) grid_popup_blid_pane

0xe686,	// (0x000501aa) heading_pane_cp05_ParamLimits

0xe686,	// (0x000501aa) heading_pane_cp05

0xe758,	// (0x0005027c) cell_popup_blid_pane_ParamLimits

0xe758,	// (0x0005027c) cell_popup_blid_pane

0xe77e,	// (0x000502a2) cell_popup_blid_pane_g1

0xe786,	// (0x000502aa) cell_popup_blid_pane_t1

0x50a5,	// (0x00046bc9) mup2_indicator_pane_ParamLimits

0x50a5,	// (0x00046bc9) mup2_indicator_pane

0xcfe0,	// (0x0004eb04) mup2_visualizer_osc_pane

0xe526,	// (0x0005004a) mup2_visualizer_spec_pane_ParamLimits

0xe526,	// (0x0005004a) mup2_visualizer_spec_pane

0x5223,	// (0x00046d47) mup2_spec_half_pane

0x522c,	// (0x00046d50) mup2_spec_half_pane_cp

0x5234,	// (0x00046d58) mup2_spec_bar_pane_ParamLimits

0x5234,	// (0x00046d58) mup2_spec_bar_pane

0xe4c7,	// (0x0004ffeb) mup2_spec_bar_pane_g1

0xe4d1,	// (0x0004fff5) mup2_spec_bar_pane_g2

0x0001,

0x048b,	// (0x00041faf) mup2_spec_bar_pane_g

0x5254,	// (0x00046d78) mup2_osc_middle_pane

0xe4e3,	// (0x00050007) mup2_visualizer_osc_pane_g1

0xbdfd,	// (0x0004d921) popup_number_entry_window_t1_ParamLimits

0xbe10,	// (0x0004d934) popup_number_entry_window_t2_ParamLimits

0xbe22,	// (0x0004d946) popup_number_entry_window_t3_ParamLimits

0x1ab5,	// (0x000435d9) popup_number_entry_window_t5_ParamLimits

0x1ab5,	// (0x000435d9) popup_number_entry_window_t5

0xf0ec,	// (0x00050c10) popup_number_entry_window_t_ParamLimits

0xbe34,	// (0x0004d958) text_title_cp2_ParamLimits

0xaa0c,	// (0x0004c530) aid_hotspot_pointer_text2_pane

0xaa32,	// (0x0004c556) main_viewer_pane_g9_ParamLimits

0xaa32,	// (0x0004c556) main_viewer_pane_g9

0xca37,	// (0x0004e55b) cale_month_pane_t1_ParamLimits

0xca74,	// (0x0004e598) bg_cale_pane_ParamLimits

0xca8c,	// (0x0004e5b0) list_cale_pane_ParamLimits

0xc698,	// (0x0004e1bc) listscroll_cale_day_pane_t1

0xca9d,	// (0x0004e5c1) scroll_pane_cp09_ParamLimits

0x3a0a,	// (0x0004552e) main_mup_eq_pane_t1_ParamLimits

0x3a0a,	// (0x0004552e) main_mup_eq_pane_t1

0x3a24,	// (0x00045548) main_mup_eq_pane_t2_ParamLimits

0x3a24,	// (0x00045548) main_mup_eq_pane_t2

0x3a3e,	// (0x00045562) main_mup_eq_pane_t3_ParamLimits

0x3a3e,	// (0x00045562) main_mup_eq_pane_t3

0x3a5a,	// (0x0004557e) main_mup_eq_pane_t4_ParamLimits

0x3a5a,	// (0x0004557e) main_mup_eq_pane_t4

0x3a76,	// (0x0004559a) main_mup_eq_pane_t5_ParamLimits

0x3a76,	// (0x0004559a) main_mup_eq_pane_t5

0x3a92,	// (0x000455b6) main_mup_eq_pane_t6_ParamLimits

0x3a92,	// (0x000455b6) main_mup_eq_pane_t6

0x3aa6,	// (0x000455ca) main_mup_eq_pane_t7_ParamLimits

0x3aa6,	// (0x000455ca) main_mup_eq_pane_t7

0x3aba,	// (0x000455de) main_mup_eq_pane_t8_ParamLimits

0x3aba,	// (0x000455de) main_mup_eq_pane_t8

0x3ace,	// (0x000455f2) main_mup_eq_pane_t9_ParamLimits

0x3ace,	// (0x000455f2) main_mup_eq_pane_t9

0x3ae8,	// (0x0004560c) main_mup_eq_pane_t10_ParamLimits

0x3ae8,	// (0x0004560c) main_mup_eq_pane_t10

0x0009,

0xf3bb,	// (0x00050edf) main_mup_eq_pane_t_ParamLimits

0xf3bb,	// (0x00050edf) main_mup_eq_pane_t

0x3b97,	// (0x000456bb) mup_equalizer_pane_cp5_ParamLimits

0x3bab,	// (0x000456cf) mup_equalizer_pane_cp6_ParamLimits

0x3bbf,	// (0x000456e3) mup_equalizer_pane_cp7_ParamLimits

0xa6a2,	// (0x0004c1c6) main_gallery_pane

0xe4ec,	// (0x00050010) smil2_volume_pane

0xe4f4,	// (0x00050018) smil_status_volume_pane_g1_ParamLimits

0xe507,	// (0x0005002b) smil_status_volume_pane_g2_ParamLimits

0xaa3e,	// (0x0004c562) smil_status_volume_pane_g3_ParamLimits

0xf497,	// (0x00050fbb) smil_status_volume_pane_g_ParamLimits

0xe659,	// (0x0005017d) bg_popup_window_pane_cp07_ParamLimits

0xe667,	// (0x0005018b) blid_firmament_pane

0x525d,	// (0x00046d81) aid_size_cell_gallery_ParamLimits

0x525d,	// (0x00046d81) aid_size_cell_gallery

0x5273,	// (0x00046d97) grid_gallery_pane_ParamLimits

0x5273,	// (0x00046d97) grid_gallery_pane

0x528c,	// (0x00046db0) cell_gallery_pane_ParamLimits

0x528c,	// (0x00046db0) cell_gallery_pane

0xe794,	// (0x000502b8) bg_cell_gallery_focus_pane_ParamLimits

0xe794,	// (0x000502b8) bg_cell_gallery_focus_pane

0xe7a6,	// (0x000502ca) cell_gallery_pane_g1_ParamLimits

0xe7a6,	// (0x000502ca) cell_gallery_pane_g1

0x52d5,	// (0x00046df9) cell_gallery_pane_g2_ParamLimits

0x52d5,	// (0x00046df9) cell_gallery_pane_g2

0x52e2,	// (0x00046e06) cell_gallery_pane_g3_ParamLimits

0x52e2,	// (0x00046e06) cell_gallery_pane_g3

0xe7b2,	// (0x000502d6) cell_gallery_pane_g4_ParamLimits

0xe7b2,	// (0x000502d6) cell_gallery_pane_g4

0x0003,

0xf53e,	// (0x00051062) cell_gallery_pane_g_ParamLimits

0xf53e,	// (0x00051062) cell_gallery_pane_g

0xe7be,	// (0x000502e2) bg_cell_gallery_focus_pane_g1

0xe7c6,	// (0x000502ea) bg_cell_gallery_focus_pane_g2

0xe7ce,	// (0x000502f2) bg_cell_gallery_focus_pane_g3

0xe7d6,	// (0x000502fa) bg_cell_gallery_focus_pane_g4

0xe7de,	// (0x00050302) bg_cell_gallery_focus_pane_g5

0xe7e6,	// (0x0005030a) bg_cell_gallery_focus_pane_g6

0xe7ee,	// (0x00050312) bg_cell_gallery_focus_pane_g7

0xe7f6,	// (0x0005031a) bg_cell_gallery_focus_pane_g8

0x0007,

0x0547,	// (0x0004206b) bg_cell_gallery_focus_pane_g

0xe7fe,	// (0x00050322) aid_firma_cardinal

0xe812,	// (0x00050336) blid_firmament_pane_t1

0xe829,	// (0x0005034d) blid_firmament_pane_t2

0xe840,	// (0x00050364) blid_firmament_pane_t3

0xe857,	// (0x0005037b) blid_firmament_pane_t4

0x0003,

0x0558,	// (0x0004207c) blid_firmament_pane_t

0xe86e,	// (0x00050392) blid_sat_info_pane

0xe87e,	// (0x000503a2) blid_sat_info_pane_g1

0xe87e,	// (0x000503a2) blid_sat_info_pane_g2

0x0001,

0x0561,	// (0x00042085) blid_sat_info_pane_g

0xe888,	// (0x000503ac) blid_sat_info_pane_t1

0xe896,	// (0x000503ba) smil2_volume_content_pane

0xe89f,	// (0x000503c3) smil2_volume_pane_g1

0xe8a7,	// (0x000503cb) smil2_volume_content_pane_g1

0xe8b0,	// (0x000503d4) smil2_volume_content_pane_g2

0xe8b9,	// (0x000503dd) smil2_volume_content_pane_g3

0xe8c2,	// (0x000503e6) smil2_volume_content_pane_g4

0xe8cb,	// (0x000503ef) smil2_volume_content_pane_g5

0xe8d4,	// (0x000503f8) smil2_volume_content_pane_g6

0xe8dd,	// (0x00050401) smil2_volume_content_pane_g7

0xe8e6,	// (0x0005040a) smil2_volume_content_pane_g8

0xe8ef,	// (0x00050413) smil2_volume_content_pane_g9

0xe8f8,	// (0x0005041c) smil2_volume_content_pane_g10

0x0009,

0x0566,	// (0x0004208a) smil2_volume_content_pane_g

0x20f2,	// (0x00043c16) cale_week_day_heading_pane_t1_ParamLimits

0x2106,	// (0x00043c2a) cale_week_day_heading_pane_t2_ParamLimits

0x211a,	// (0x00043c3e) cale_week_day_heading_pane_t3_ParamLimits

0x212e,	// (0x00043c52) cale_week_day_heading_pane_t4_ParamLimits

0x2142,	// (0x00043c66) cale_week_day_heading_pane_t5_ParamLimits

0x2156,	// (0x00043c7a) cale_week_day_heading_pane_t6_ParamLimits

0x216c,	// (0x00043c90) cale_week_day_heading_pane_t7_ParamLimits

0xf1da,	// (0x00050cfe) cale_week_day_heading_pane_t_ParamLimits

0xc6aa,	// (0x0004e1ce) bg_cale_side_pane_ParamLimits

0x2180,	// (0x00043ca4) cale_week_time_pane_t1_ParamLimits

0x2198,	// (0x00043cbc) cale_week_time_pane_t2_ParamLimits

0x21b0,	// (0x00043cd4) cale_week_time_pane_t3_ParamLimits

0x21c8,	// (0x00043cec) cale_week_time_pane_t4_ParamLimits

0x21e0,	// (0x00043d04) cale_week_time_pane_t5_ParamLimits

0x21f8,	// (0x00043d1c) cale_week_time_pane_t6_ParamLimits

0x2210,	// (0x00043d34) cale_week_time_pane_t7_ParamLimits

0x2228,	// (0x00043d4c) cale_week_time_pane_t8_ParamLimits

0xf1e9,	// (0x00050d0d) cale_week_time_pane_t_ParamLimits

0x2240,	// (0x00043d64) cell_cale_week_pane_g2_ParamLimits

0xc6aa,	// (0x0004e1ce) bg_cale_side_pane_cp01_ParamLimits

0x30f6,	// (0x00044c1a) cale_month_week_pane_t1_ParamLimits

0x310d,	// (0x00044c31) cale_month_week_pane_t2_ParamLimits

0x3124,	// (0x00044c48) cale_month_week_pane_t3_ParamLimits

0x313b,	// (0x00044c5f) cale_month_week_pane_t4_ParamLimits

0x3152,	// (0x00044c76) cale_month_week_pane_t5_ParamLimits

0x3169,	// (0x00044c8d) cale_month_week_pane_t6_ParamLimits

0xf29c,	// (0x00050dc0) cale_month_week_pane_t_ParamLimits

0xa8d8,	// (0x0004c3fc) cell_cale_month_pane_g1_ParamLimits

0xa6a2,	// (0x0004c1c6) main_cale_event_viewer_pane

0xa6a2,	// (0x0004c1c6) listscroll_cale_event_viewer_pane

0xe901,	// (0x00050425) list_cale_ev_pane

0xe909,	// (0x0005042d) scroll_pane_cp023

0xe915,	// (0x00050439) field_cale_ev_pane_ParamLimits

0xe915,	// (0x00050439) field_cale_ev_pane

0xe92f,	// (0x00050453) field_cale_ev_content_pane_ParamLimits

0xe92f,	// (0x00050453) field_cale_ev_content_pane

0xe93b,	// (0x0005045f) field_cale_ev_pane_g1_ParamLimits

0xe93b,	// (0x0005045f) field_cale_ev_pane_g1

0xe947,	// (0x0005046b) field_cale_ev_pane_g2_ParamLimits

0xe947,	// (0x0005046b) field_cale_ev_pane_g2

0xe95f,	// (0x00050483) field_cale_ev_pane_g3_ParamLimits

0xe95f,	// (0x00050483) field_cale_ev_pane_g3

0x0002,

0x057b,	// (0x0004209f) field_cale_ev_pane_g_ParamLimits

0x057b,	// (0x0004209f) field_cale_ev_pane_g

0xe977,	// (0x0005049b) field_cale_ev_pane_t1_ParamLimits

0xe977,	// (0x0005049b) field_cale_ev_pane_t1

0xe98e,	// (0x000504b2) field_cale_ev_content_pane_t1_ParamLimits

0xe98e,	// (0x000504b2) field_cale_ev_content_pane_t1

0xd149,	// (0x0004ec6d) bg_button_pane_cp01

0xc558,	// (0x0004e07c) listscroll_cale_week_pane_ParamLimits

0x1f07,	// (0x00043a2b) popup_toolbar_window_cp01

0xc698,	// (0x0004e1bc) listscroll_cale_week_pane_t1_ParamLimits

0xc558,	// (0x0004e07c) listscroll_cale_day_pane_ParamLimits

0x32dc,	// (0x00044e00) popup_toolbar_window_cp02

0xc698,	// (0x0004e1bc) listscroll_cale_day_pane_t1_ParamLimits

0xc558,	// (0x0004e07c) main_cale_month_pane_ParamLimits

0x4801,	// (0x00046325) popup_toolbar_window_cp03_ParamLimits

0x4801,	// (0x00046325) popup_toolbar_window_cp03

0x3eb3,	// (0x000459d7) main_image_pane_g2_ParamLimits

0x3eb3,	// (0x000459d7) main_image_pane_g2

0x3ec4,	// (0x000459e8) main_image_pane_g3_ParamLimits

0x3ec4,	// (0x000459e8) main_image_pane_g3

0x0002,

0xf443,	// (0x00050f67) main_image_pane_g_ParamLimits

0xf443,	// (0x00050f67) main_image_pane_g

0xd263,	// (0x0004ed87) main_image_pane_t1_ParamLimits

0x3ed5,	// (0x000459f9) main_image_pane_t2_ParamLimits

0x3ed5,	// (0x000459f9) main_image_pane_t2

0x3ee7,	// (0x00045a0b) main_image_pane_t3_ParamLimits

0x3ee7,	// (0x00045a0b) main_image_pane_t3

0x3f0f,	// (0x00045a33) main_image_pane_t4_ParamLimits

0x3f0f,	// (0x00045a33) main_image_pane_t4

0x0003,

0xf44a,	// (0x00050f6e) main_image_pane_t_ParamLimits

0xf44a,	// (0x00050f6e) main_image_pane_t

0x3f2f,	// (0x00045a53) popup_image_details_window_cp01

0x3f39,	// (0x00045a5d) popup_toobar_trans_pane_cp01_ParamLimits

0x3f39,	// (0x00045a5d) popup_toobar_trans_pane_cp01

0x46b2,	// (0x000461d6) popup_image_details_window_ParamLimits

0x46b2,	// (0x000461d6) popup_image_details_window

0xe44d,	// (0x0004ff71) popup_image_focus_window

0x4ac8,	// (0x000465ec) camera2_autofocus_pane_ParamLimits

0x4ac8,	// (0x000465ec) camera2_autofocus_pane

0xa6a2,	// (0x0004c1c6) bg_popup_sub_pane_cp06

0xe9ab,	// (0x000504cf) popup_image_focus_window_g1

0xe9b3,	// (0x000504d7) popup_image_focus_window_g2

0xe9bb,	// (0x000504df) popup_image_focus_window_g3

0xe9c3,	// (0x000504e7) popup_image_focus_window_g4

0x0003,

0x0582,	// (0x000420a6) popup_image_focus_window_g

0xe9cb,	// (0x000504ef) popup_image_focus_window_t1

0xe9d9,	// (0x000504fd) popup_image_focus_window_t2

0xe9e9,	// (0x0005050d) popup_image_focus_window_t3

0x0002,

0x058b,	// (0x000420af) popup_image_focus_window_t

0xe9f7,	// (0x0005051b) camera2_autofocus_pane_g1

0xd8c7,	// (0x0004f3eb) bg_tb_trans_pane_cp01

0xea05,	// (0x00050529) popup_image_details_window_g1

0xea18,	// (0x0005053c) popup_image_details_window_g2

0x0002,

0x059d,	// (0x000420c1) popup_image_details_window_g

0xea41,	// (0x00050565) popup_image_details_window_t1

0xea53,	// (0x00050577) popup_image_details_window_t2

0xea6c,	// (0x00050590) popup_image_details_window_t3

0xea80,	// (0x000505a4) popup_image_details_window_t4

0xea9b,	// (0x000505bf) popup_image_details_window_t5

0x0004,

0x05a4,	// (0x000420c8) popup_image_details_window_t

0xc544,	// (0x0004e068) bg_calc_paper_pane_ParamLimits

0xa6a2,	// (0x0004c1c6) grid_highlight_pane_cp013

0xa704,	// (0x0004c228) list_calc_pane_ParamLimits

0xa716,	// (0x0004c23a) scroll_pane_cp024

0xc558,	// (0x0004e07c) bg_calc_display_pane_ParamLimits

0x1d73,	// (0x00043897) calc_display_pane_t1_ParamLimits

0x1d85,	// (0x000438a9) calc_display_pane_t2_ParamLimits

0xa71e,	// (0x0004c242) calc_display_pane_t3_ParamLimits

0xf173,	// (0x00050c97) calc_display_pane_t_ParamLimits

0x1e40,	// (0x00043964) cell_calc_pane_g2

0x0001,

0xf190,	// (0x00050cb4) cell_calc_pane_g

0x1e49,	// (0x0004396d) cell_calc_pane_t1

0xc5b7,	// (0x0004e0db) grid_highlight_pane_cp02_ParamLimits

0xc5cd,	// (0x0004e0f1) toolbar_button_pane_cp01_ParamLimits

0xc5cd,	// (0x0004e0f1) toolbar_button_pane_cp01

0xd2a8,	// (0x0004edcc) temp_image_control_pane_ParamLimits

0xd2a8,	// (0x0004edcc) temp_image_control_pane

0xd8c7,	// (0x0004f3eb) main_mp3_pane

0xeab5,	// (0x000505d9) temp_image_control_pane_g1_ParamLimits

0xeab5,	// (0x000505d9) temp_image_control_pane_g1

0xeac3,	// (0x000505e7) temp_image_control_pane_g2_ParamLimits

0xeac3,	// (0x000505e7) temp_image_control_pane_g2

0xead5,	// (0x000505f9) temp_image_control_pane_g3_ParamLimits

0xead5,	// (0x000505f9) temp_image_control_pane_g3

0x531f,	// (0x00046e43) temp_image_control_pane_g4_ParamLimits

0x531f,	// (0x00046e43) temp_image_control_pane_g4

0x0003,

0xf552,	// (0x00051076) temp_image_control_pane_g_ParamLimits

0xf552,	// (0x00051076) temp_image_control_pane_g

0xeab5,	// (0x000505d9) main_mp3_pane_g1

0x5332,	// (0x00046e56) main_mp3_pane_g2

0x0007,

0xf55b,	// (0x0005107f) main_mp3_pane_g

0xeb18,	// (0x0005063c) main_mp3_pane_t1

0xc719,	// (0x0004e23d) main_camera_pane_g8_ParamLimits

0xc719,	// (0x0004e23d) main_camera_pane_g8

0x24e7,	// (0x0004400b) main_video_pane_g7_ParamLimits

0x24e7,	// (0x0004400b) main_video_pane_g7

0xaa7e,	// (0x0004c5a2) main_camera2_pane_t7_ParamLimits

0xaa7e,	// (0x0004c5a2) main_camera2_pane_t7

0xc85f,	// (0x0004e383) scroll_pane_cp025_ParamLimits

0xc85f,	// (0x0004e383) scroll_pane_cp025

0xc873,	// (0x0004e397) scroll_pane_cp026_ParamLimits

0xc873,	// (0x0004e397) scroll_pane_cp026

0xc882,	// (0x0004e3a6) wml_content_pane_ParamLimits

0xa6a2,	// (0x0004c1c6) main_touch_calib_pane

0x53fe,	// (0x00046f22) main_touch_calib_pane_g1

0x540a,	// (0x00046f2e) main_touch_calib_pane_g2

0x5416,	// (0x00046f3a) main_touch_calib_pane_g3

0x5422,	// (0x00046f46) main_touch_calib_pane_g4

0x0003,

0xf579,	// (0x0005109d) main_touch_calib_pane_g

0x542e,	// (0x00046f52) main_touch_calib_pane_t1

0x5448,	// (0x00046f6c) main_touch_calib_pane_t2

0x0004,

0xf582,	// (0x000510a6) main_touch_calib_pane_t

0xcf21,	// (0x0004ea45) mup_progress_pane_cp02

0xcf40,	// (0x0004ea64) navi_pane_g1

0xcfa2,	// (0x0004eac6) navi_pane_mp_t3

0xd8c7,	// (0x0004f3eb) main_mp3_pane_ParamLimits

0x483f,	// (0x00046363) navi_pane_ParamLimits

0xeab5,	// (0x000505d9) main_mp3_pane_g1_ParamLimits

0x5332,	// (0x00046e56) main_mp3_pane_g2_ParamLimits

0x5340,	// (0x00046e64) main_mp3_pane_g3_ParamLimits

0x5340,	// (0x00046e64) main_mp3_pane_g3

0x534e,	// (0x00046e72) main_mp3_pane_g4_ParamLimits

0x534e,	// (0x00046e72) main_mp3_pane_g4

0xeae5,	// (0x00050609) main_mp3_pane_g5_ParamLimits

0xeae5,	// (0x00050609) main_mp3_pane_g5

0xeaf3,	// (0x00050617) main_mp3_pane_g6_ParamLimits

0xeaf3,	// (0x00050617) main_mp3_pane_g6

0xeb00,	// (0x00050624) main_mp3_pane_g7_ParamLimits

0xeb00,	// (0x00050624) main_mp3_pane_g7

0xeb0c,	// (0x00050630) main_mp3_pane_g8_ParamLimits

0xeb0c,	// (0x00050630) main_mp3_pane_g8

0xf55b,	// (0x0005107f) main_mp3_pane_g_ParamLimits

0x535c,	// (0x00046e80) main_mp3_pane_t2

0x536a,	// (0x00046e8e) main_mp3_pane_t3

0xeb26,	// (0x0005064a) main_mp3_pane_t4

0xeb34,	// (0x00050658) main_mp3_pane_t5

0x0005,

0xf56c,	// (0x00051090) main_mp3_pane_t

0xeb42,	// (0x00050666) mup_progress_pane_cp01

0xa6d0,	// (0x0004c1f4) aid_zoom_text_secondary2

0xe901,	// (0x00050425) list_cale_ev2_pane

0xe909,	// (0x0005042d) scroll_pane_cp023_ParamLimits

0x549e,	// (0x00046fc2) field_cale_ev2_pane_ParamLimits

0x549e,	// (0x00046fc2) field_cale_ev2_pane

0xaafd,	// (0x0004c621) field_cale_ev2_pane_g1_ParamLimits

0xaafd,	// (0x0004c621) field_cale_ev2_pane_g1

0xab09,	// (0x0004c62d) field_cale_ev2_pane_g2_ParamLimits

0xab09,	// (0x0004c62d) field_cale_ev2_pane_g2

0xab21,	// (0x0004c645) field_cale_ev2_pane_g3_ParamLimits

0xab21,	// (0x0004c645) field_cale_ev2_pane_g3

0x0003,

0xf58d,	// (0x000510b1) field_cale_ev2_pane_g_ParamLimits

0xf58d,	// (0x000510b1) field_cale_ev2_pane_g

0x0f15,	// (0x00042a39) field_cale_ev2_pane_t1_ParamLimits

0x0f15,	// (0x00042a39) field_cale_ev2_pane_t1

0x0f2c,	// (0x00042a50) field_cale_ev2_pane_t2_ParamLimits

0x0f2c,	// (0x00042a50) field_cale_ev2_pane_t2

0x0001,

0xf596,	// (0x000510ba) field_cale_ev2_pane_t_ParamLimits

0xf596,	// (0x000510ba) field_cale_ev2_pane_t

0x3d63,	// (0x00045887) main_postcard_pane_g5_ParamLimits

0x3d63,	// (0x00045887) main_postcard_pane_g5

0x3d79,	// (0x0004589d) main_postcard_pane_g6_ParamLimits

0x3d79,	// (0x0004589d) main_postcard_pane_g6

0x2297,	// (0x00043dbb) camera2_autofocus_pane_cp_ParamLimits

0x2297,	// (0x00043dbb) camera2_autofocus_pane_cp

0xd8c7,	// (0x0004f3eb) main_mup3_pane

0x54e4,	// (0x00047008) main_mup3_pane_g1_ParamLimits

0x54e4,	// (0x00047008) main_mup3_pane_g1

0x5506,	// (0x0004702a) main_mup3_pane_g2_ParamLimits

0x5506,	// (0x0004702a) main_mup3_pane_g2

0x5587,	// (0x000470ab) main_mup3_pane_g3_ParamLimits

0x5587,	// (0x000470ab) main_mup3_pane_g3

0x55c9,	// (0x000470ed) main_mup3_pane_g4_ParamLimits

0x55c9,	// (0x000470ed) main_mup3_pane_g4

0x560b,	// (0x0004712f) main_mup3_pane_g5_ParamLimits

0x560b,	// (0x0004712f) main_mup3_pane_g5

0x564f,	// (0x00047173) main_mup3_pane_g6_ParamLimits

0x564f,	// (0x00047173) main_mup3_pane_g6

0xeb4a,	// (0x0005066e) main_mup3_pane_g7_ParamLimits

0xeb4a,	// (0x0005066e) main_mup3_pane_g7

0x0007,

0xf5a6,	// (0x000510ca) main_mup3_pane_g_ParamLimits

0xf5a6,	// (0x000510ca) main_mup3_pane_g

0x56cb,	// (0x000471ef) main_mup3_pane_t1_ParamLimits

0x56cb,	// (0x000471ef) main_mup3_pane_t1

0x573f,	// (0x00047263) main_mup3_pane_t2_ParamLimits

0x573f,	// (0x00047263) main_mup3_pane_t2

0x5813,	// (0x00047337) main_mup3_pane_t4_ParamLimits

0x5813,	// (0x00047337) main_mup3_pane_t4

0x586d,	// (0x00047391) main_mup3_pane_t5_ParamLimits

0x586d,	// (0x00047391) main_mup3_pane_t5

0x5921,	// (0x00047445) main_mup3_pane_t6_ParamLimits

0x5921,	// (0x00047445) main_mup3_pane_t6

0x0005,

0xf5b7,	// (0x000510db) main_mup3_pane_t_ParamLimits

0xf5b7,	// (0x000510db) main_mup3_pane_t

0x59d5,	// (0x000474f9) mup3_progress_pane_ParamLimits

0x59d5,	// (0x000474f9) mup3_progress_pane

0x5a51,	// (0x00047575) popup_mup3_control_window_ParamLimits

0x5a51,	// (0x00047575) popup_mup3_control_window

0xeb58,	// (0x0005067c) popup_mup3_text_window

0x5a83,	// (0x000475a7) mup3_progress_pane_t1

0x5a9a,	// (0x000475be) mup3_progress_pane_t2

0xeb60,	// (0x00050684) mup3_progress_pane_t3

0x0002,

0xf5c4,	// (0x000510e8) mup3_progress_pane_t

0xeb77,	// (0x0005069b) mup_progress_pane_cp03

0xa6a2,	// (0x0004c1c6) bg_tb_trans_pane_cp04

0x5ab1,	// (0x000475d5) mup3_volume_pane

0x5ab9,	// (0x000475dd) popup_mup3_control_window_g1

0x5ac2,	// (0x000475e6) mup3_volume_pane_g1

0x5acb,	// (0x000475ef) mup3_volume_pane_g2

0x5ad4,	// (0x000475f8) mup3_volume_pane_g3

0x0002,

0xf5cb,	// (0x000510ef) mup3_volume_pane_g

0xa6a2,	// (0x0004c1c6) bg_tb_trans_pane_cp03

0xeb87,	// (0x000506ab) popup_mup3_text_window_g1

0xeb8f,	// (0x000506b3) popup_mup3_text_window_t1

0xc5a0,	// (0x0004e0c4) list_calc_item_pane_g1_ParamLimits

0xe5c7,	// (0x000500eb) mup_volume_pane_cp_g1

0x5462,	// (0x00046f86) main_touch_calib_pane_t3

0x5476,	// (0x00046f9a) main_touch_calib_pane_t4

0x548a,	// (0x00046fae) main_touch_calib_pane_t5

0xa6ac,	// (0x0004c1d0) aid_cell_size_toolbar2

0xa6b4,	// (0x0004c1d8) aid_popup3_width_pane

0xa6c0,	// (0x0004c1e4) aid_zoom_text_msg_primary

0xa7f8,	// (0x0004c31c) vorec_t7

0xc564,	// (0x0004e088) bg_calc_paper_pane_g1_ParamLimits

0xc570,	// (0x0004e094) bg_calc_paper_pane_g2_ParamLimits

0xc57c,	// (0x0004e0a0) bg_calc_paper_pane_g3_ParamLimits

0xc588,	// (0x0004e0ac) bg_calc_paper_pane_g4_ParamLimits

0xc594,	// (0x0004e0b8) bg_calc_paper_pane_g5_ParamLimits

0x1dcc,	// (0x000438f0) bg_calc_paper_pane_g6_ParamLimits

0x1ddb,	// (0x000438ff) bg_calc_paper_pane_g7_ParamLimits

0x1dea,	// (0x0004390e) bg_calc_paper_pane_g8_ParamLimits

0xf17a,	// (0x00050c9e) bg_calc_paper_pane_g_ParamLimits

0x1dfd,	// (0x00043921) calc_bg_paper_pane_g9_ParamLimits

0x23f1,	// (0x00043f15) image_qvga_pane_ParamLimits

0x23f1,	// (0x00043f15) image_qvga_pane

0xc449,	// (0x0004df6d) bg_popup_sub_pane_cp04_ParamLimits

0xd1df,	// (0x0004ed03) popup_mup_playback_window_g1_ParamLimits

0xd1eb,	// (0x0004ed0f) popup_mup_playback_window_t1_ParamLimits

0xd200,	// (0x0004ed24) popup_mup_playback_window_t2_ParamLimits

0x0367,	// (0x00041e8b) popup_mup_playback_window_t_ParamLimits

0x4fbf,	// (0x00046ae3) main_mup2_pane_g3_ParamLimits

0x4fbf,	// (0x00046ae3) main_mup2_pane_g3

0x26f6,	// (0x0004421a) popup_toolbar_window_cp04

0xd5f5,	// (0x0004f119) popup_call2_audio_second_window_g3_ParamLimits

0xd5f5,	// (0x0004f119) popup_call2_audio_second_window_g3

0xda3c,	// (0x0004f560) popup_call2_audio_first_window_g4_ParamLimits

0xda3c,	// (0x0004f560) popup_call2_audio_first_window_g4

0xe0c4,	// (0x0004fbe8) popup_call2_audio_in_window_g4_ParamLimits

0xe0c4,	// (0x0004fbe8) popup_call2_audio_in_window_g4

0x3e95,	// (0x000459b9) aid_area_sk_bg_cut_ParamLimits

0x3e95,	// (0x000459b9) aid_area_sk_bg_cut

0xd215,	// (0x0004ed39) aid_area_sk_bg_cut_2_ParamLimits

0xd215,	// (0x0004ed39) aid_area_sk_bg_cut_2

0x52c5,	// (0x00046de9) aid_placing_details_win

0x52cd,	// (0x00046df1) aid_placing_details_win_2

0xe9f7,	// (0x0005051b) camera2_autofocus_pane_g1_ParamLimits

0x1a02,	// (0x00043526) popup_fixed_preview_cale_window_ParamLimits

0x1a02,	// (0x00043526) popup_fixed_preview_cale_window

0xcff1,	// (0x0004eb15) navi_slider_pane_g3

0xcffa,	// (0x0004eb1e) navi_slider_pane_g4

0xd003,	// (0x0004eb27) navi_slider_pane_g5

0xcff1,	// (0x0004eb15) navi_slider_pane_g6

0xa9f3,	// (0x0004c517) navi_slider_pane_g7

0xd116,	// (0x0004ec3a) mup_scale_pane_g3

0xd11f,	// (0x0004ec43) mup_scale_pane_g4

0xd128,	// (0x0004ec4c) mup_scale_pane_g5

0x3bd3,	// (0x000456f7) mup_scale_pane_g6

0x3bdc,	// (0x00045700) mup_scale_pane_g7

0xcff1,	// (0x0004eb15) cams2_slider_pane_g3

0xe649,	// (0x0005016d) cams2_slider_pane_g4

0xaaec,	// (0x0004c610) cams2_slider_pane_g5

0xcff1,	// (0x0004eb15) cams2_slider_pane_g6

0xaaf4,	// (0x0004c618) cams2_slider_pane_g7

0xe87e,	// (0x000503a2) camera2_autofocus_pane_cp_g1

0xeb9d,	// (0x000506c1) bg_popup_preview_window_pane_cp02_ParamLimits

0xeb9d,	// (0x000506c1) bg_popup_preview_window_pane_cp02

0xeba9,	// (0x000506cd) list_fp_cale_pane_ParamLimits

0xeba9,	// (0x000506cd) list_fp_cale_pane

0xebb5,	// (0x000506d9) popup_fixed_preview_cale_window_t1_ParamLimits

0xebb5,	// (0x000506d9) popup_fixed_preview_cale_window_t1

0x5add,	// (0x00047601) popup_fixed_preview_cale_window_t2_ParamLimits

0x5add,	// (0x00047601) popup_fixed_preview_cale_window_t2

0x5af2,	// (0x00047616) popup_fixed_preview_cale_window_t3_ParamLimits

0x5af2,	// (0x00047616) popup_fixed_preview_cale_window_t3

0x0002,

0xf5d2,	// (0x000510f6) popup_fixed_preview_cale_window_t_ParamLimits

0xf5d2,	// (0x000510f6) popup_fixed_preview_cale_window_t

0x5b07,	// (0x0004762b) list_single_fp_cale_pane_ParamLimits

0x5b07,	// (0x0004762b) list_single_fp_cale_pane

0xebd3,	// (0x000506f7) list_single_fp_cale_pane_g1_ParamLimits

0xebd3,	// (0x000506f7) list_single_fp_cale_pane_g1

0xebdf,	// (0x00050703) list_single_fp_cale_pane_g2_ParamLimits

0xebdf,	// (0x00050703) list_single_fp_cale_pane_g2

0x0002,

0x0636,	// (0x0004215a) list_single_fp_cale_pane_g_ParamLimits

0x0636,	// (0x0004215a) list_single_fp_cale_pane_g

0xebf8,	// (0x0005071c) list_single_fp_cale_pane_t1_ParamLimits

0xebf8,	// (0x0005071c) list_single_fp_cale_pane_t1

0xec0a,	// (0x0005072e) list_single_fp_cale_pane_t2_ParamLimits

0xec0a,	// (0x0005072e) list_single_fp_cale_pane_t2

0x0001,

0x063d,	// (0x00042161) list_single_fp_cale_pane_t_ParamLimits

0x063d,	// (0x00042161) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0xa6a2,	// (0x0004c1c6) main_dialer_pane

0x5b1f,	// (0x00047643) aid_cell_size_keypad

0x5b29,	// (0x0004764d) dialer_ne_pane

0x5b31,	// (0x00047655) grid_dialer_command_1_pane

0x5b39,	// (0x0004765d) grid_dialer_command_2_pane

0x5b41,	// (0x00047665) grid_dialer_keypad_pane

0x5b53,	// (0x00047677) bg_popup_call_pane_cp06_ParamLimits

0x5b53,	// (0x00047677) bg_popup_call_pane_cp06

0x5b5f,	// (0x00047683) dialer_ne_clear_pane_ParamLimits

0x5b5f,	// (0x00047683) dialer_ne_clear_pane

0xec3d,	// (0x00050761) dialer_ne_pane_g1

0xec45,	// (0x00050769) dialer_ne_pane_t1_ParamLimits

0xec45,	// (0x00050769) dialer_ne_pane_t1

0x5b6b,	// (0x0004768f) dialer_ne_pane_t2_ParamLimits

0x5b6b,	// (0x0004768f) dialer_ne_pane_t2

0x5b95,	// (0x000476b9) dialer_ne_pane_t3_ParamLimits

0x5b95,	// (0x000476b9) dialer_ne_pane_t3

0x0002,

0xf5d9,	// (0x000510fd) dialer_ne_pane_t_ParamLimits

0xf5d9,	// (0x000510fd) dialer_ne_pane_t

0x5bc5,	// (0x000476e9) dialer_ne_pane_t3_copy1_ParamLimits

0x5bc5,	// (0x000476e9) dialer_ne_pane_t3_copy1

0x5bf4,	// (0x00047718) cell_dialer_keypad_pane_ParamLimits

0x5bf4,	// (0x00047718) cell_dialer_keypad_pane

0x5c0b,	// (0x0004772f) cell_dialer_command_1_pane_ParamLimits

0x5c0b,	// (0x0004772f) cell_dialer_command_1_pane

0x5c21,	// (0x00047745) cell_dialer_command_2_pane_ParamLimits

0x5c21,	// (0x00047745) cell_dialer_command_2_pane

0xec57,	// (0x0005077b) bg_button_pane_cp02_ParamLimits

0xec57,	// (0x0005077b) bg_button_pane_cp02

0x5c30,	// (0x00047754) cell_dialer_keypad_pane_g1_ParamLimits

0x5c30,	// (0x00047754) cell_dialer_keypad_pane_g1

0xec57,	// (0x0005077b) bg_button_pane_cp03_ParamLimits

0xec57,	// (0x0005077b) bg_button_pane_cp03

0x5c45,	// (0x00047769) cell_dialer_command_1_pane_g1_ParamLimits

0x5c45,	// (0x00047769) cell_dialer_command_1_pane_g1

0xec63,	// (0x00050787) bg_button_pane_cp04

0x5c59,	// (0x0004777d) cell_dialer_command_2_pane_g1

0xcfe0,	// (0x0004eb04) bg_button_pane_cp06

0xec6b,	// (0x0005078f) dialer_ne_clear_pane_g1

0x3711,	// (0x00045235) navi_pane_g2

0x373f,	// (0x00045263) navi_pane_g3

0x0002,

0xf371,	// (0x00050e95) navi_pane_g

0x3768,	// (0x0004528c) navi_pane_mv_g2

0x378f,	// (0x000452b3) navi_pane_mv_g5

0x3797,	// (0x000452bb) navi_pane_mv_t1

0xc558,	// (0x0004e07c) main_clock2_pane

0x5c8c,	// (0x000477b0) main_clock2_list_pane_ParamLimits

0x5c8c,	// (0x000477b0) main_clock2_list_pane

0x5cc2,	// (0x000477e6) main_clock2_pane_t1_ParamLimits

0x5cc2,	// (0x000477e6) main_clock2_pane_t1

0x5d00,	// (0x00047824) main_clock2_pane_t2_ParamLimits

0x5d00,	// (0x00047824) main_clock2_pane_t2

0x0004,

0xf5e0,	// (0x00051104) main_clock2_pane_t_ParamLimits

0xf5e0,	// (0x00051104) main_clock2_pane_t

0x5d8a,	// (0x000478ae) popup_clock_analogue_window_cp03_ParamLimits

0x5d8a,	// (0x000478ae) popup_clock_analogue_window_cp03

0x5db1,	// (0x000478d5) popup_clock_digital_window_cp02_ParamLimits

0x5db1,	// (0x000478d5) popup_clock_digital_window_cp02

0x5e26,	// (0x0004794a) main_clock2_list_single_pane_ParamLimits

0x5e26,	// (0x0004794a) main_clock2_list_single_pane

0xcfe0,	// (0x0004eb04) list_highlight_pane_cp05

0xec73,	// (0x00050797) main_clock2_list_single_pane_t1

0x26f6,	// (0x0004421a) popup_toolbar_window_cp04_ParamLimits

0x52ef,	// (0x00046e13) camera2_autofocus_pane_g2_ParamLimits

0x52ef,	// (0x00046e13) camera2_autofocus_pane_g2

0x52fb,	// (0x00046e1f) camera2_autofocus_pane_g3_ParamLimits

0x52fb,	// (0x00046e1f) camera2_autofocus_pane_g3

0x5307,	// (0x00046e2b) camera2_autofocus_pane_g4_ParamLimits

0x5307,	// (0x00046e2b) camera2_autofocus_pane_g4

0x5313,	// (0x00046e37) camera2_autofocus_pane_g5_ParamLimits

0x5313,	// (0x00046e37) camera2_autofocus_pane_g5

0x0004,

0xf547,	// (0x0005106b) camera2_autofocus_pane_g_ParamLimits

0xf547,	// (0x0005106b) camera2_autofocus_pane_g

0x54c4,	// (0x00046fe8) camera2_autofocus_pane_cp_g2

0x54cc,	// (0x00046ff0) camera2_autofocus_pane_cp_g3

0x54d4,	// (0x00046ff8) camera2_autofocus_pane_cp_g4

0x54dc,	// (0x00047000) camera2_autofocus_pane_cp_g5

0x0004,

0xf59b,	// (0x000510bf) camera2_autofocus_pane_cp_g

0x5b4b,	// (0x0004766f) popup_dialer_spcha_window

0xa6a2,	// (0x0004c1c6) bg_popup_sub_pane_cp07

0xec81,	// (0x000507a5) list_spcha_pane

0xec89,	// (0x000507ad) list_single_spcha_pane_ParamLimits

0xec89,	// (0x000507ad) list_single_spcha_pane

0xa6a2,	// (0x0004c1c6) list_highlight_pane_cp06

0xec9a,	// (0x000507be) list_single_spcha_pane_t1

0xde6e,	// (0x0004f992) popup_call2_audio_out_window_g4_ParamLimits

0xde6e,	// (0x0004f992) popup_call2_audio_out_window_g4

0xa6a2,	// (0x0004c1c6) main_imed2_pane

0xe455,	// (0x0004ff79) popup_imed_adjust2_window

0x46ca,	// (0x000461ee) popup_imed_trans_window_ParamLimits

0x46ca,	// (0x000461ee) popup_imed_trans_window

0xe6b2,	// (0x000501d6) popup_blid_sat_info2_window_t1

0xe6c0,	// (0x000501e4) popup_blid_sat_info2_window_t2

0x000a,

0xf527,	// (0x0005104b) popup_blid_sat_info2_window_t

0x5ed0,	// (0x000479f4) aid_size_cell_colour_35

0x5ef0,	// (0x00047a14) aid_size_cell_colour_112

0x5f10,	// (0x00047a34) aid_size_cell_effect

0xe42d,	// (0x0004ff51) bg_tb_trans_pane_cp02

0xcb10,	// (0x0004e634) heading_imed_pane

0x5f30,	// (0x00047a54) listscroll_imed_pane

0xeca8,	// (0x000507cc) heading_imed_pane_g1

0xecb0,	// (0x000507d4) heading_imed_pane_t1

0xecbe,	// (0x000507e2) grid_imed_colour_35_pane_ParamLimits

0xecbe,	// (0x000507e2) grid_imed_colour_35_pane

0x5f3c,	// (0x00047a60) grid_imed_effect_pane

0xecd9,	// (0x000507fd) list_imed_aspect_pane

0x5f51,	// (0x00047a75) scroll_pane_cp027_ParamLimits

0x5f51,	// (0x00047a75) scroll_pane_cp027

0x5f62,	// (0x00047a86) cell_imed_effect_pane_ParamLimits

0x5f62,	// (0x00047a86) cell_imed_effect_pane

0xece1,	// (0x00050805) cell_imed_colour_pane_ParamLimits

0xece1,	// (0x00050805) cell_imed_colour_pane

0xed23,	// (0x00050847) cell_imed_colour_pane_g1_ParamLimits

0xed23,	// (0x00050847) cell_imed_colour_pane_g1

0xed34,	// (0x00050858) hgihlgiht_grid_pane_cp016_ParamLimits

0xed34,	// (0x00050858) hgihlgiht_grid_pane_cp016

0x5f89,	// (0x00047aad) cell_imed_effect_pane_g1

0x5f91,	// (0x00047ab5) grid_highlight_pane_cp017

0xd8d5,	// (0x0004f3f9) list_imed_single_pane_ParamLimits

0xd8d5,	// (0x0004f3f9) list_imed_single_pane

0xa6a2,	// (0x0004c1c6) list_highlight_pane_cp07

0xed45,	// (0x00050869) list_imed_aspect_pane_comp1_t1

0xe42d,	// (0x0004ff51) bg_tb_trans_pane_cp05

0xed67,	// (0x0005088b) popup_imed_adjust2_window_g1

0xed8e,	// (0x000508b2) popup_imed_adjust2_window_t1

0xeda6,	// (0x000508ca) slider_imed_adjust_pane

0xedba,	// (0x000508de) slider_imed_adjust_pane_g1

0xedca,	// (0x000508ee) slider_imed_adjust_pane_g2

0xedda,	// (0x000508fe) slider_imed_adjust_pane_g3

0xedeb,	// (0x0005090f) slider_imed_adjust_pane_g4

0x0003,

0x0666,	// (0x0004218a) slider_imed_adjust_pane_g

0x5f9a,	// (0x00047abe) aid_size_cell_clipart2

0x5fa6,	// (0x00047aca) grid_imed_clipart_pane

0xedfc,	// (0x00050920) scroll_pane_cp031

0x5fb0,	// (0x00047ad4) cell_imed_clipart_pane_ParamLimits

0x5fb0,	// (0x00047ad4) cell_imed_clipart_pane

0x5fd7,	// (0x00047afb) cell_imed_clipart_pane_g1

0xa6a2,	// (0x0004c1c6) grid_highlight_pane_cp014

0x5ca1,	// (0x000477c5) main_clock2_pane_g1_ParamLimits

0x5ca1,	// (0x000477c5) main_clock2_pane_g1

0x5dd1,	// (0x000478f5) aid_call2_pane_cp10

0x5de3,	// (0x00047907) aid_call_pane_cp10

0xcf15,	// (0x0004ea39) popup_clock_analogue_window_cp10_g1

0xcf15,	// (0x0004ea39) popup_clock_analogue_window_cp10_g2

0x5df5,	// (0x00047919) popup_clock_analogue_window_cp10_g3

0x5df5,	// (0x00047919) popup_clock_analogue_window_cp10_g4

0xcf15,	// (0x0004ea39) popup_clock_analogue_window_cp10_g5

0x0004,

0xf5eb,	// (0x0005110f) popup_clock_analogue_window_cp10_g

0x5e07,	// (0x0004792b) popup_clock_analogue_window_cp10_t1

0x5e38,	// (0x0004795c) clock_digital_number_pane_cp10_ParamLimits

0x5e38,	// (0x0004795c) clock_digital_number_pane_cp10

0x5e50,	// (0x00047974) clock_digital_number_pane_cp11_ParamLimits

0x5e50,	// (0x00047974) clock_digital_number_pane_cp11

0x5e68,	// (0x0004798c) clock_digital_number_pane_cp12_ParamLimits

0x5e68,	// (0x0004798c) clock_digital_number_pane_cp12

0x5e80,	// (0x000479a4) clock_digital_number_pane_cp13_ParamLimits

0x5e80,	// (0x000479a4) clock_digital_number_pane_cp13

0x5e98,	// (0x000479bc) clock_digital_separator_pane_cp10_ParamLimits

0x5e98,	// (0x000479bc) clock_digital_separator_pane_cp10

0x5eb0,	// (0x000479d4) popup_clock_digital_window_cp02_t1_ParamLimits

0x5eb0,	// (0x000479d4) popup_clock_digital_window_cp02_t1

0xc441,	// (0x0004df65) clock_digital_number_pane_cp10_g1

0xc441,	// (0x0004df65) clock_digital_number_pane_cp10_g2

0x0001,

0x066f,	// (0x00042193) clock_digital_number_pane_cp10_g

0xc441,	// (0x0004df65) clock_digital_separator_pane_cp10_g1

0xc441,	// (0x0004df65) clock_digital_separator_pane_g2_cp10

0xcfb0,	// (0x0004ead4) navi_pane_vded_g4

0xcfb9,	// (0x0004eadd) navi_pane_vded_g5

0xcfc2,	// (0x0004eae6) navi_pane_vded_t1

0xa6a2,	// (0x0004c1c6) main_vded_pane

0x5fe0,	// (0x00047b04) main_vded_pane_g1

0x5fec,	// (0x00047b10) main_vded_pane_g2

0x5ff6,	// (0x00047b1a) main_vded_pane_g3

0x0002,

0xf5f6,	// (0x0005111a) main_vded_pane_g

0x6000,	// (0x00047b24) main_vded_pane_t1

0x600e,	// (0x00047b32) main_vded_pane_t2

0x0001,

0xf5fd,	// (0x00051121) main_vded_pane_t

0x601c,	// (0x00047b40) vded_slider_pane

0x6026,	// (0x00047b4a) vded_video_pane

0xee04,	// (0x00050928) vded_video_pane_g1

0x6030,	// (0x00047b54) vded_video_pane_g2

0xe87e,	// (0x000503a2) vded_video_pane_g3

0x0002,

0xf602,	// (0x00051126) vded_video_pane_g

0xee0e,	// (0x00050932) vded_slider_pane_g1

0xe5c7,	// (0x000500eb) vded_slider_pane_g2

0xee17,	// (0x0005093b) vded_slider_pane_g3

0xee20,	// (0x00050944) vded_slider_pane_g4

0xee29,	// (0x0005094d) vded_slider_pane_g5

0x0004,

0x0687,	// (0x000421ab) vded_slider_pane_g

0x5a39,	// (0x0004755d) mup3_rocker_pane_ParamLimits

0x5a39,	// (0x0004755d) mup3_rocker_pane

0x6039,	// (0x00047b5d) mup3_control_keys_pane_g1

0x6041,	// (0x00047b65) mup3_control_keys_pane_g2

0x6049,	// (0x00047b6d) mup3_control_keys_pane_g3

0x6051,	// (0x00047b75) mup3_control_keys_pane_g4

0x0003,

0xf609,	// (0x0005112d) mup3_control_keys_pane_g

0x1a39,	// (0x0004355d) popup_toolbar2_fixed_window_cp01_ParamLimits

0x1a39,	// (0x0004355d) popup_toolbar2_fixed_window_cp01

0x5a6d,	// (0x00047591) popup_toolbar2_fixed_window_cp02_ParamLimits

0x5a6d,	// (0x00047591) popup_toolbar2_fixed_window_cp02

0xd767,	// (0x0004f28b) popup_call2_audio_second_window_t4_ParamLimits

0xd767,	// (0x0004f28b) popup_call2_audio_second_window_t4

0xdcdb,	// (0x0004f7ff) popup_call2_audio_first_window_t6_ParamLimits

0xdcdb,	// (0x0004f7ff) popup_call2_audio_first_window_t6

0xdf71,	// (0x0004fa95) popup_call2_audio_out_window_t6_ParamLimits

0xdf71,	// (0x0004fa95) popup_call2_audio_out_window_t6

0xa6a2,	// (0x0004c1c6) main_vitu_pane

0x6061,	// (0x00047b85) aid_size_cell_itu_ParamLimits

0x6061,	// (0x00047b85) aid_size_cell_itu

0xd8c7,	// (0x0004f3eb) bg_popup_window_pane_cp08_ParamLimits

0xd8c7,	// (0x0004f3eb) bg_popup_window_pane_cp08

0x6077,	// (0x00047b9b) field_vitu_entry_pane_ParamLimits

0x6077,	// (0x00047b9b) field_vitu_entry_pane

0x608e,	// (0x00047bb2) grid_vitu_function_pane_ParamLimits

0x608e,	// (0x00047bb2) grid_vitu_function_pane

0x60a9,	// (0x00047bcd) grid_vitu_itu_pane_ParamLimits

0x60a9,	// (0x00047bcd) grid_vitu_itu_pane

0x60c7,	// (0x00047beb) cell_vitu_itu_pane_ParamLimits

0x60c7,	// (0x00047beb) cell_vitu_itu_pane

0x60eb,	// (0x00047c0f) cell_vitu_function_pane_ParamLimits

0x60eb,	// (0x00047c0f) cell_vitu_function_pane

0xd8c7,	// (0x0004f3eb) bg_popup_sub_pane_cp08_ParamLimits

0xd8c7,	// (0x0004f3eb) bg_popup_sub_pane_cp08

0x6106,	// (0x00047c2a) field_vitu_entry_pane_t1_ParamLimits

0x6106,	// (0x00047c2a) field_vitu_entry_pane_t1

0xee4a,	// (0x0005096e) field_vitu_entry_pane_t2_ParamLimits

0xee4a,	// (0x0005096e) field_vitu_entry_pane_t2

0x0001,

0xf612,	// (0x00051136) field_vitu_entry_pane_t_ParamLimits

0xf612,	// (0x00051136) field_vitu_entry_pane_t

0xee67,	// (0x0005098b) bg_button_pane_cp05_ParamLimits

0xee67,	// (0x0005098b) bg_button_pane_cp05

0x6126,	// (0x00047c4a) cell_vitu_itu_pane_g1

0x613e,	// (0x00047c62) cell_vitu_itu_pane_t1_ParamLimits

0x613e,	// (0x00047c62) cell_vitu_itu_pane_t1

0x6150,	// (0x00047c74) cell_vitu_itu_pane_t2_ParamLimits

0x6150,	// (0x00047c74) cell_vitu_itu_pane_t2

0x0002,

0xf617,	// (0x0005113b) cell_vitu_itu_pane_t_ParamLimits

0xf617,	// (0x0005113b) cell_vitu_itu_pane_t

0xee75,	// (0x00050999) bg_button_pane_cp07

0x6185,	// (0x00047ca9) cell_vitu_function_pane_g1

0xa6fc,	// (0x0004c220) main_calc_pane_g1

0x1879,	// (0x0004339d) aid_visual_content_pane

0xa6a2,	// (0x0004c1c6) main_vradio_pane

0x618e,	// (0x00047cb2) main_vradio_pane_g1_ParamLimits

0x618e,	// (0x00047cb2) main_vradio_pane_g1

0xee7f,	// (0x000509a3) main_vradio_pane_g2_ParamLimits

0xee7f,	// (0x000509a3) main_vradio_pane_g2

0x0001,

0xf61e,	// (0x00051142) main_vradio_pane_g_ParamLimits

0xf61e,	// (0x00051142) main_vradio_pane_g

0x61a7,	// (0x00047ccb) main_vradio_pane_t1_ParamLimits

0x61a7,	// (0x00047ccb) main_vradio_pane_t1

0x61bc,	// (0x00047ce0) main_vradio_pane_t2_ParamLimits

0x61bc,	// (0x00047ce0) main_vradio_pane_t2

0xee8c,	// (0x000509b0) main_vradio_pane_t3_ParamLimits

0xee8c,	// (0x000509b0) main_vradio_pane_t3

0x0002,

0xf623,	// (0x00051147) main_vradio_pane_t_ParamLimits

0xf623,	// (0x00051147) main_vradio_pane_t

0x61d1,	// (0x00047cf5) vradio_rocker_control_pane_ParamLimits

0x61d1,	// (0x00047cf5) vradio_rocker_control_pane

0x61e3,	// (0x00047d07) vradio_station_info_pane_ParamLimits

0x61e3,	// (0x00047d07) vradio_station_info_pane

0xeea0,	// (0x000509c4) vradio_frequency_info_pane_ParamLimits

0xeea0,	// (0x000509c4) vradio_frequency_info_pane

0xe87e,	// (0x000503a2) vradio_station_info_pane_g1

0xeeaf,	// (0x000509d3) vradio_station_info_pane_t1_ParamLimits

0xeeaf,	// (0x000509d3) vradio_station_info_pane_t1

0xeed1,	// (0x000509f5) vradio_station_info_pane_t2_ParamLimits

0xeed1,	// (0x000509f5) vradio_station_info_pane_t2

0x0001,

0x06b8,	// (0x000421dc) vradio_station_info_pane_t_ParamLimits

0x06b8,	// (0x000421dc) vradio_station_info_pane_t

0xeee3,	// (0x00050a07) vradio_tuning_pane

0xeeeb,	// (0x00050a0f) vradio_rocker_control_pane_g1

0xeef3,	// (0x00050a17) vradio_rocker_control_pane_g2

0xeefb,	// (0x00050a1f) vradio_rocker_control_pane_g3

0xef03,	// (0x00050a27) vradio_rocker_control_pane_g4

0xef0b,	// (0x00050a2f) vradio_rocker_control_pane_g5

0x0004,

0x06bd,	// (0x000421e1) vradio_rocker_control_pane_g

0x61f5,	// (0x00047d19) vradio_frequency_info_pane_g1

0xef13,	// (0x00050a37) vradio_frequency_info_pane_t1_ParamLimits

0xef13,	// (0x00050a37) vradio_frequency_info_pane_t1

0x61ff,	// (0x00047d23) vradio_tuning_pane_g1

0x620a,	// (0x00047d2e) vradio_tuning_pane_t1

0xa6d8,	// (0x0004c1fc) area_side_right_pane_ParamLimits

0xa6d8,	// (0x0004c1fc) area_side_right_pane

0xe3f4,	// (0x0004ff18) status_small_pane_g1

0xe3fc,	// (0x0004ff20) status_small_pane_g2

0xe405,	// (0x0004ff29) status_small_pane_g3

0xe40e,	// (0x0004ff32) status_small_pane_g4

0x0003,

0x047d,	// (0x00041fa1) status_small_pane_g

0xe417,	// (0x0004ff3b) status_small_pane_t1

0xa6a2,	// (0x0004c1c6) main_video3_pane

0xef27,	// (0x00050a4b) cams_zoom_vslider_pane

0xef2f,	// (0x00050a53) image3_wide_pane_ParamLimits

0xef2f,	// (0x00050a53) image3_wide_pane

0xef49,	// (0x00050a6d) image3_wide_small_pane

0xef55,	// (0x00050a79) main_video3_pane_g1_ParamLimits

0xef55,	// (0x00050a79) main_video3_pane_g1

0xef71,	// (0x00050a95) main_video3_pane_g2_ParamLimits

0xef71,	// (0x00050a95) main_video3_pane_g2

0x0001,

0x06c8,	// (0x000421ec) main_video3_pane_g_ParamLimits

0x06c8,	// (0x000421ec) main_video3_pane_g

0xef8d,	// (0x00050ab1) main_video3_pane_t1_ParamLimits

0xef8d,	// (0x00050ab1) main_video3_pane_t1

0xefb8,	// (0x00050adc) main_video3_pane_t2_ParamLimits

0xefb8,	// (0x00050adc) main_video3_pane_t2

0xefe3,	// (0x00050b07) main_video3_pane_t3_ParamLimits

0xefe3,	// (0x00050b07) main_video3_pane_t3

0x0002,

0x06cd,	// (0x000421f1) main_video3_pane_t_ParamLimits

0x06cd,	// (0x000421f1) main_video3_pane_t

0xf010,	// (0x00050b34) cams_zoom_vslider_pane_g1

0xf019,	// (0x00050b3d) cams_zoom_vslider_pane_g2

0x0001,

0x06d4,	// (0x000421f8) cams_zoom_vslider_pane_g

0xf021,	// (0x00050b45) small_slider_vertical_pane

0xe87e,	// (0x000503a2) small_slider_vertical_pane_g1

0xe87e,	// (0x000503a2) small_slider_vertical_pane_g2

0xf029,	// (0x00050b4d) small_slider_vertical_pane_g3

0x0002,

0x06d9,	// (0x000421fd) small_slider_vertical_pane_g

0xa6a2,	// (0x0004c1c6) main_hwr_training_pane

0xf032,	// (0x00050b56) hwr_training_instruct_pane_ParamLimits

0xf032,	// (0x00050b56) hwr_training_instruct_pane

0x6219,	// (0x00047d3d) hwr_training_navi_pane_ParamLimits

0x6219,	// (0x00047d3d) hwr_training_navi_pane

0x6238,	// (0x00047d5c) hwr_training_write_pane_ParamLimits

0x6238,	// (0x00047d5c) hwr_training_write_pane

0xa6a2,	// (0x0004c1c6) bg_frame_shadow_pane

0xf069,	// (0x00050b8d) hwr_training_write_pane_g1

0xf071,	// (0x00050b95) hwr_training_write_pane_g2

0xf079,	// (0x00050b9d) hwr_training_write_pane_g3

0xf081,	// (0x00050ba5) hwr_training_write_pane_g4

0xf089,	// (0x00050bad) hwr_training_write_pane_g5

0xf091,	// (0x00050bb5) hwr_training_write_pane_g6

0xf099,	// (0x00050bbd) hwr_training_write_pane_g7

0x0006,

0x06e0,	// (0x00042204) hwr_training_write_pane_g

0xab45,	// (0x0004c669) hwr_training_navi_pane_g1_ParamLimits

0xab45,	// (0x0004c669) hwr_training_navi_pane_g1

0xab57,	// (0x0004c67b) hwr_training_navi_pane_g2_ParamLimits

0xab57,	// (0x0004c67b) hwr_training_navi_pane_g2

0xab69,	// (0x0004c68d) hwr_training_navi_pane_g3_ParamLimits

0xab69,	// (0x0004c68d) hwr_training_navi_pane_g3

0xab79,	// (0x0004c69d) hwr_training_navi_pane_g4_ParamLimits

0xab79,	// (0x0004c69d) hwr_training_navi_pane_g4

0x0004,

0xf62a,	// (0x0005114e) hwr_training_navi_pane_g_ParamLimits

0xf62a,	// (0x0005114e) hwr_training_navi_pane_g

0xab86,	// (0x0004c6aa) hwr_training_navi_pane_t1

0x6282,	// (0x00047da6) list_single_hwr_training_instruct_pane_ParamLimits

0x6282,	// (0x00047da6) list_single_hwr_training_instruct_pane

0xf0a1,	// (0x00050bc5) list_single_hwr_training_instruct_pane_t1

0xe7be,	// (0x000502e2) bg_frame_shadow_pane_g1

0xf0b0,	// (0x00050bd4) bg_frame_shadow_pane_g2

0xf0b8,	// (0x00050bdc) bg_frame_shadow_pane_g3

0xf0c0,	// (0x00050be4) bg_frame_shadow_pane_g4

0xf0c8,	// (0x00050bec) bg_frame_shadow_pane_g5

0xf0d0,	// (0x00050bf4) bg_frame_shadow_pane_g6

0xf0d8,	// (0x00050bfc) bg_frame_shadow_pane_g7

0xc623,	// (0x0004e147) bg_frame_shadow_pane_g8

0x0007,

0x06fa,	// (0x0004221e) bg_frame_shadow_pane_g

0xa6a2,	// (0x0004c1c6) main_video_tele_dialer_pane

0x629f,	// (0x00047dc3) aid_size_cell_video_keypad_ParamLimits

0x629f,	// (0x00047dc3) aid_size_cell_video_keypad

0x62b9,	// (0x00047ddd) grid_video_dialer_keypad_pane_ParamLimits

0x62b9,	// (0x00047ddd) grid_video_dialer_keypad_pane

0x6305,	// (0x00047e29) video_down_pane_cp_ParamLimits

0x6305,	// (0x00047e29) video_down_pane_cp

0x6335,	// (0x00047e59) cell_video_dialer_keypad_pane_ParamLimits

0x6335,	// (0x00047e59) cell_video_dialer_keypad_pane

0xf0e0,	// (0x00050c04) bg_button_pane_cp08_ParamLimits

0xf0e0,	// (0x00050c04) bg_button_pane_cp08

0x6357,	// (0x00047e7b) cell_video_dialer_keypad_pane_g1_ParamLimits

0x6357,	// (0x00047e7b) cell_video_dialer_keypad_pane_g1

0x5a23,	// (0x00047547) mup3_rocker2_pane_ParamLimits

0x5a23,	// (0x00047547) mup3_rocker2_pane

0xe87e,	// (0x000503a2) mup3_rocker2_pane_g1

0x45b3,	// (0x000460d7) main_dialer2_pane

0xa6a2,	// (0x0004c1c6) main_mp4_pane

0xab9c,	// (0x0004c6c0) main_mp4_pane_g1_ParamLimits

0xab9c,	// (0x0004c6c0) main_mp4_pane_g1

0xab9c,	// (0x0004c6c0) main_mp4_pane_g2_ParamLimits

0xab9c,	// (0x0004c6c0) main_mp4_pane_g2

0x6392,	// (0x00047eb6) main_mp4_pane_g3_ParamLimits

0x6392,	// (0x00047eb6) main_mp4_pane_g3

0xabaa,	// (0x0004c6ce) main_mp4_pane_g4_ParamLimits

0xabaa,	// (0x0004c6ce) main_mp4_pane_g4

0xabd2,	// (0x0004c6f6) main_mp4_pane_g5_ParamLimits

0xabd2,	// (0x0004c6f6) main_mp4_pane_g5

0x0005,

0xf644,	// (0x00051168) main_mp4_pane_g_ParamLimits

0xf644,	// (0x00051168) main_mp4_pane_g

0xac22,	// (0x0004c746) main_mp4_pane_t1_ParamLimits

0xac22,	// (0x0004c746) main_mp4_pane_t1

0xac7e,	// (0x0004c7a2) main_mp4_pane_t2_ParamLimits

0xac7e,	// (0x0004c7a2) main_mp4_pane_t2

0x63ce,	// (0x00047ef2) main_mp4_pane_t3_ParamLimits

0x63ce,	// (0x00047ef2) main_mp4_pane_t3

0xacd0,	// (0x0004c7f4) main_mp4_pane_t4_ParamLimits

0xacd0,	// (0x0004c7f4) main_mp4_pane_t4

0x0003,

0xf651,	// (0x00051175) main_mp4_pane_t_ParamLimits

0xf651,	// (0x00051175) main_mp4_pane_t

0xad14,	// (0x0004c838) mp4_progress_pane_ParamLimits

0xad14,	// (0x0004c838) mp4_progress_pane

0xad5e,	// (0x0004c882) mp4_rocker_pane_ParamLimits

0xad5e,	// (0x0004c882) mp4_rocker_pane

0x63f6,	// (0x00047f1a) mp4_progress_pane_t1

0x640f,	// (0x00047f33) mp4_progress_pane_t2

0x0001,

0xf65a,	// (0x0005117e) mp4_progress_pane_t

0x6428,	// (0x00047f4c) mup_progress_pane_cp04

0xe87e,	// (0x000503a2) mp4_rocker_pane_g1

0x6434,	// (0x00047f58) aid_cell_size_keypad2_ParamLimits

0x6434,	// (0x00047f58) aid_cell_size_keypad2

0x644a,	// (0x00047f6e) dialer2_ne_pane_ParamLimits

0x644a,	// (0x00047f6e) dialer2_ne_pane

0x6464,	// (0x00047f88) grid_dialer2_keypad_pane_ParamLimits

0x6464,	// (0x00047f88) grid_dialer2_keypad_pane

0xe659,	// (0x0005017d) bg_popup_call_pane_cp07_ParamLimits

0xe659,	// (0x0005017d) bg_popup_call_pane_cp07

0x6482,	// (0x00047fa6) dialer2_ne_pane_t1_ParamLimits

0x6482,	// (0x00047fa6) dialer2_ne_pane_t1

0x64d3,	// (0x00047ff7) cell_dialer2_keypad_pane_ParamLimits

0x64d3,	// (0x00047ff7) cell_dialer2_keypad_pane

0x64f7,	// (0x0004801b) bg_button_pane_pane_cp04_ParamLimits

0x64f7,	// (0x0004801b) bg_button_pane_pane_cp04

0x6503,	// (0x00048027) cell_dialer2_keypad_pane_g1_ParamLimits

0x6503,	// (0x00048027) cell_dialer2_keypad_pane_g1

0x25ca,	// (0x000440ee) aid_placing_vt_set_content_ParamLimits

0x25ca,	// (0x000440ee) aid_placing_vt_set_content

0x25f2,	// (0x00044116) aid_placing_vt_set_title_ParamLimits

0x25f2,	// (0x00044116) aid_placing_vt_set_title

0xa6a2,	// (0x0004c1c6) main_image3_pane

0x65c9,	// (0x000480ed) area_side_right_pane_cp01_ParamLimits

0x65c9,	// (0x000480ed) area_side_right_pane_cp01

0xab9c,	// (0x0004c6c0) main_image3_pane_g1_ParamLimits

0xab9c,	// (0x0004c6c0) main_image3_pane_g1

0x65e0,	// (0x00048104) main_image3_pane_g2_ParamLimits

0x65e0,	// (0x00048104) main_image3_pane_g2

0x6608,	// (0x0004812c) main_image3_pane_g3_ParamLimits

0x6608,	// (0x0004812c) main_image3_pane_g3

0x6632,	// (0x00048156) main_image3_pane_g4_ParamLimits

0x6632,	// (0x00048156) main_image3_pane_g4

0x0003,

0xf669,	// (0x0005118d) main_image3_pane_g_ParamLimits

0xf669,	// (0x0005118d) main_image3_pane_g

0x665c,	// (0x00048180) main_image3_pane_t1_ParamLimits

0x665c,	// (0x00048180) main_image3_pane_t1

0x66b4,	// (0x000481d8) main_image3_pane_t2_ParamLimits

0x66b4,	// (0x000481d8) main_image3_pane_t2

0x6706,	// (0x0004822a) main_image3_pane_t3_ParamLimits

0x6706,	// (0x0004822a) main_image3_pane_t3

0x0003,

0xf672,	// (0x00051196) main_image3_pane_t_ParamLimits

0xf672,	// (0x00051196) main_image3_pane_t

0xd8c7,	// (0x0004f3eb) grid_sctrl_middle_pane_cp01_ParamLimits

0xd8c7,	// (0x0004f3eb) grid_sctrl_middle_pane_cp01

0x678e,	// (0x000482b2) cell_sctrl_middle_pane_cp01_ParamLimits

0x678e,	// (0x000482b2) cell_sctrl_middle_pane_cp01

0x67ab,	// (0x000482cf) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x67ab,	// (0x000482cf) cell_sctrl_middle_pane_cp01_g1

0xa6a2,	// (0x0004c1c6) main_call4_pane

0x67c1,	// (0x000482e5) aid_size_button_call4_ParamLimits

0x67c1,	// (0x000482e5) aid_size_button_call4

0x67f2,	// (0x00048316) call4_windows_pane_ParamLimits

0x67f2,	// (0x00048316) call4_windows_pane

0x6812,	// (0x00048336) grid_call4_button_pane_ParamLimits

0x6812,	// (0x00048336) grid_call4_button_pane

0x683f,	// (0x00048363) call4_windows_conf_pane

0x6854,	// (0x00048378) popup_call4_audio_first_window_ParamLimits

0x6854,	// (0x00048378) popup_call4_audio_first_window

0x68a0,	// (0x000483c4) popup_call4_audio_second_window_ParamLimits

0x68a0,	// (0x000483c4) popup_call4_audio_second_window

0x68b4,	// (0x000483d8) popup_call4_audio_wait_window_ParamLimits

0x68b4,	// (0x000483d8) popup_call4_audio_wait_window

0x68c2,	// (0x000483e6) cell_call4_button_pane_ParamLimits

0x68c2,	// (0x000483e6) cell_call4_button_pane

0x68eb,	// (0x0004840f) bg_button_pane_cp09_ParamLimits

0x68eb,	// (0x0004840f) bg_button_pane_cp09

0x68f7,	// (0x0004841b) cell_call4_button_pane_g1_ParamLimits

0x68f7,	// (0x0004841b) cell_call4_button_pane_g1

0x691d,	// (0x00048441) cell_call4_button_pane_t1_ParamLimits

0x691d,	// (0x00048441) cell_call4_button_pane_t1

0x6981,	// (0x000484a5) popup_call4_audio_conf_window_ParamLimits

0x6981,	// (0x000484a5) popup_call4_audio_conf_window

0x5a83,	// (0x000475a7) mup3_progress_pane_t1_ParamLimits

0x5a9a,	// (0x000475be) mup3_progress_pane_t2_ParamLimits

0xeb60,	// (0x00050684) mup3_progress_pane_t3_ParamLimits

0xf5c4,	// (0x000510e8) mup3_progress_pane_t_ParamLimits

0xeb77,	// (0x0005069b) mup_progress_pane_cp03_ParamLimits

0x6059,	// (0x00047b7d) mup3_control_keys_pane_g4_copy1

0xad42,	// (0x0004c866) mp4_rocker2_pane_ParamLimits

0xad42,	// (0x0004c866) mp4_rocker2_pane

0x6995,	// (0x000484b9) mp4_rocker2_pane_g1

0x699d,	// (0x000484c1) mp4_rocker2_pane_g2

0xadb0,	// (0x0004c8d4) mp4_rocker2_pane_g3

0xadb8,	// (0x0004c8dc) mp4_rocker2_pane_g4

0xadc0,	// (0x0004c8e4) mp4_rocker2_pane_g5

0x0004,

0xf67b,	// (0x0005119f) mp4_rocker2_pane_g

0xa6a2,	// (0x0004c1c6) main_camera4_pane

0xa6a2,	// (0x0004c1c6) main_video4_pane

0x62d3,	// (0x00047df7) main_video_tele_dialer_pane_t1_ParamLimits

0x62d3,	// (0x00047df7) main_video_tele_dialer_pane_t1

0x62ec,	// (0x00047e10) main_video_tele_dialer_pane_t2_ParamLimits

0x62ec,	// (0x00047e10) main_video_tele_dialer_pane_t2

0x0001,

0xf635,	// (0x00051159) main_video_tele_dialer_pane_t_ParamLimits

0xf635,	// (0x00051159) main_video_tele_dialer_pane_t

0x69bd,	// (0x000484e1) cam4_autofocus_pane_ParamLimits

0x69bd,	// (0x000484e1) cam4_autofocus_pane

0x69d3,	// (0x000484f7) cam4_image_uncrop_pane_ParamLimits

0x69d3,	// (0x000484f7) cam4_image_uncrop_pane

0x69ed,	// (0x00048511) cam4_indicators_pane_ParamLimits

0x69ed,	// (0x00048511) cam4_indicators_pane

0x6a18,	// (0x0004853c) main_camera4_pane_g1_ParamLimits

0x6a18,	// (0x0004853c) main_camera4_pane_g1

0x6a2b,	// (0x0004854f) main_camera4_pane_g2_ParamLimits

0x6a2b,	// (0x0004854f) main_camera4_pane_g2

0x6a3e,	// (0x00048562) main_camera4_pane_g3_ParamLimits

0x6a3e,	// (0x00048562) main_camera4_pane_g3

0x6a51,	// (0x00048575) main_camera4_pane_g4_ParamLimits

0x6a51,	// (0x00048575) main_camera4_pane_g4

0x6a64,	// (0x00048588) main_camera4_pane_g5_ParamLimits

0x6a64,	// (0x00048588) main_camera4_pane_g5

0x0005,

0xf686,	// (0x000511aa) main_camera4_pane_g_ParamLimits

0xf686,	// (0x000511aa) main_camera4_pane_g

0x6a88,	// (0x000485ac) main_camera4_pane_t1_ParamLimits

0x6a88,	// (0x000485ac) main_camera4_pane_t1

0xeae5,	// (0x00050609) bg_tb_trans_pane_cp06

0xadec,	// (0x0004c910) cam4_indicators_pane_g1

0xadfd,	// (0x0004c921) cam4_indicators_pane_g2

0x0002,

0xf6a1,	// (0x000511c5) cam4_indicators_pane_g

0xae1b,	// (0x0004c93f) cam4_indicators_pane_t1

0x6afe,	// (0x00048622) main_video4_pane_g1_ParamLimits

0x6afe,	// (0x00048622) main_video4_pane_g1

0x6b11,	// (0x00048635) main_video4_pane_g2_ParamLimits

0x6b11,	// (0x00048635) main_video4_pane_g2

0x6b25,	// (0x00048649) main_video4_pane_g3_ParamLimits

0x6b25,	// (0x00048649) main_video4_pane_g3

0x6b39,	// (0x0004865d) main_video4_pane_g4_ParamLimits

0x6b39,	// (0x0004865d) main_video4_pane_g4

0x0004,

0xf6a8,	// (0x000511cc) main_video4_pane_g_ParamLimits

0xf6a8,	// (0x000511cc) main_video4_pane_g

0x6b61,	// (0x00048685) vid4_indicators_pane_ParamLimits

0x6b61,	// (0x00048685) vid4_indicators_pane

0x6b93,	// (0x000486b7) video4_image_uncrop_cif_pane_ParamLimits

0x6b93,	// (0x000486b7) video4_image_uncrop_cif_pane

0x6bad,	// (0x000486d1) video4_image_uncrop_nhd_pane_ParamLimits

0x6bad,	// (0x000486d1) video4_image_uncrop_nhd_pane

0x69d3,	// (0x000484f7) video4_image_uncrop_vga_pane_ParamLimits

0x69d3,	// (0x000484f7) video4_image_uncrop_vga_pane

0xae3d,	// (0x0004c961) bg_tb_trans_pane_cp07

0x6bc1,	// (0x000486e5) vid4_indicators_pane_g1

0x6bce,	// (0x000486f2) vid4_indicators_pane_g2

0x6bdb,	// (0x000486ff) vid4_indicators_pane_g3

0x0004,

0xf6b3,	// (0x000511d7) vid4_indicators_pane_g

0x6c00,	// (0x00048724) vid4_indicators_pane_t1

0x6c12,	// (0x00048736) cam4_autofocus_pane_g1

0x6c1a,	// (0x0004873e) cam4_autofocus_pane_g2

0x6c22,	// (0x00048746) cam4_autofocus_pane_g3

0x0002,

0xf6be,	// (0x000511e2) cam4_autofocus_pane_g

0x6c2a,	// (0x0004874e) cam4_autofocus_pane_g3_copy1

0x6319,	// (0x00047e3d) video_down_pane_cp_t1

0x6327,	// (0x00047e4b) video_down_pane_cp_t2

0x0001,

0xf63a,	// (0x0005115e) video_down_pane_cp_t

0xd8c7,	// (0x0004f3eb) popup_vitu2_window_ParamLimits

0xd8c7,	// (0x0004f3eb) popup_vitu2_window

0x6c32,	// (0x00048756) aid_size_cell2_itu2_ParamLimits

0x6c32,	// (0x00048756) aid_size_cell2_itu2

0x6c58,	// (0x0004877c) aid_size_cell_itu2_ParamLimits

0x6c58,	// (0x0004877c) aid_size_cell_itu2

0x6cb4,	// (0x000487d8) bg_popup_window_pane_cp09_ParamLimits

0x6cb4,	// (0x000487d8) bg_popup_window_pane_cp09

0x6cc2,	// (0x000487e6) field_vitu2_entry_pane_ParamLimits

0x6cc2,	// (0x000487e6) field_vitu2_entry_pane

0x6ce8,	// (0x0004880c) grid_vitu2_function_pane_ParamLimits

0x6ce8,	// (0x0004880c) grid_vitu2_function_pane

0x6d39,	// (0x0004885d) grid_vitu2_itu_pane_ParamLimits

0x6d39,	// (0x0004885d) grid_vitu2_itu_pane

0x6dca,	// (0x000488ee) cell_vitu2_itu_pane_ParamLimits

0x6dca,	// (0x000488ee) cell_vitu2_itu_pane

0x6dee,	// (0x00048912) cell_vitu2_function_pane_ParamLimits

0x6dee,	// (0x00048912) cell_vitu2_function_pane

0x6e2d,	// (0x00048951) bg_popup_call_pane_cp08_ParamLimits

0x6e2d,	// (0x00048951) bg_popup_call_pane_cp08

0x6e46,	// (0x0004896a) field_vitu2_entry_pane_g1

0x6e52,	// (0x00048976) field_vitu2_entry_pane_g2

0x0002,

0xf6c5,	// (0x000511e9) field_vitu2_entry_pane_g

0xae53,	// (0x0004c977) field_vitu2_entry_pane_t1_ParamLimits

0xae53,	// (0x0004c977) field_vitu2_entry_pane_t1

0xae85,	// (0x0004c9a9) field_vitu2_entry_pane_t2_ParamLimits

0xae85,	// (0x0004c9a9) field_vitu2_entry_pane_t2

0x0001,

0xf6cc,	// (0x000511f0) field_vitu2_entry_pane_t_ParamLimits

0xf6cc,	// (0x000511f0) field_vitu2_entry_pane_t

0x6e74,	// (0x00048998) bg_button_pane_cp010_ParamLimits

0x6e74,	// (0x00048998) bg_button_pane_cp010

0x6e82,	// (0x000489a6) cell_vitu2_itu_pane_g1

0x6ea0,	// (0x000489c4) cell_vitu2_itu_pane_t1_ParamLimits

0x6ea0,	// (0x000489c4) cell_vitu2_itu_pane_t1

0x0f41,	// (0x00042a65) cell_vitu2_itu_pane_t2_ParamLimits

0x0f41,	// (0x00042a65) cell_vitu2_itu_pane_t2

0x0002,

0xf6d6,	// (0x000511fa) cell_vitu2_itu_pane_t_ParamLimits

0xf6d6,	// (0x000511fa) cell_vitu2_itu_pane_t

0xd8c7,	// (0x0004f3eb) bg_button_pane_cp011

0x6f06,	// (0x00048a2a) cell_vitu2_function_pane_g1

0xa6a2,	// (0x0004c1c6) main_myfav_hc_pane

0x6756,	// (0x0004827a) popup_image3_note_pane_ParamLimits

0x6756,	// (0x0004827a) popup_image3_note_pane

0x6772,	// (0x00048296) popup_image3_tool_bar_pane_ParamLimits

0x6772,	// (0x00048296) popup_image3_tool_bar_pane

0x0fc5,	// (0x00042ae9) cell_vitu2_itu_pane_t3_ParamLimits

0x0fc5,	// (0x00042ae9) cell_vitu2_itu_pane_t3

0xa6a2,	// (0x0004c1c6) bg_popup_trans_pane

0x6f1a,	// (0x00048a3e) grid_image3_tool_bar_pane

0x6f24,	// (0x00048a48) bg_popup_trans_pane_g1

0xc968,	// (0x0004e48c) bg_popup_trans_pane_g2

0x6f2c,	// (0x00048a50) bg_popup_trans_pane_g3

0x6f34,	// (0x00048a58) bg_popup_trans_pane_g4

0x6f3c,	// (0x00048a60) bg_popup_trans_pane_g5

0x6f44,	// (0x00048a68) bg_popup_trans_pane_g6

0x6f4c,	// (0x00048a70) bg_popup_trans_pane_g7

0x6f54,	// (0x00048a78) bg_popup_trans_pane_g8

0xc948,	// (0x0004e46c) bg_popup_trans_pane_g9

0x0008,

0xf6dd,	// (0x00051201) bg_popup_trans_pane_g

0x6f5c,	// (0x00048a80) cell_image3_tool_bar_pane_ParamLimits

0x6f5c,	// (0x00048a80) cell_image3_tool_bar_pane

0xe87e,	// (0x000503a2) cell_image3_tool_bar_pane_g1

0xa6a2,	// (0x0004c1c6) bg_popup_trans_pane_cp1

0x6f70,	// (0x00048a94) popup_image3_note_pane_t1

0x6f7e,	// (0x00048aa2) popup_image3_note_pane_t2

0x6f8c,	// (0x00048ab0) popup_image3_note_pane_t3

0x0002,

0xf6f0,	// (0x00051214) popup_image3_note_pane_t

0x6f9a,	// (0x00048abe) popup_image3_note_pane_t3_copy1

0x6fa8,	// (0x00048acc) bg_myfav_hc_instruction_pane_ParamLimits

0x6fa8,	// (0x00048acc) bg_myfav_hc_instruction_pane

0x6fbe,	// (0x00048ae2) cell_myfav_contact_pane_ParamLimits

0x6fbe,	// (0x00048ae2) cell_myfav_contact_pane

0x6fda,	// (0x00048afe) cell_myfav_contact_pane_cp1_ParamLimits

0x6fda,	// (0x00048afe) cell_myfav_contact_pane_cp1

0x6ff2,	// (0x00048b16) cell_myfav_contact_pane_cp2_ParamLimits

0x6ff2,	// (0x00048b16) cell_myfav_contact_pane_cp2

0x700a,	// (0x00048b2e) cell_myfav_contact_pane_cp3_ParamLimits

0x700a,	// (0x00048b2e) cell_myfav_contact_pane_cp3

0x7021,	// (0x00048b45) cell_myfav_contact_pane_cp4_ParamLimits

0x7021,	// (0x00048b45) cell_myfav_contact_pane_cp4

0x7039,	// (0x00048b5d) cell_myfav_contact_pane_cp5_ParamLimits

0x7039,	// (0x00048b5d) cell_myfav_contact_pane_cp5

0x704d,	// (0x00048b71) cell_myfav_contact_pane_cp6_ParamLimits

0x704d,	// (0x00048b71) cell_myfav_contact_pane_cp6

0x7063,	// (0x00048b87) cell_myfav_contact_pane_cp7_ParamLimits

0x7063,	// (0x00048b87) cell_myfav_contact_pane_cp7

0x707d,	// (0x00048ba1) listscroll_gen_pane_cp05

0x7086,	// (0x00048baa) main_myfav_hc_pane_g1_ParamLimits

0x7086,	// (0x00048baa) main_myfav_hc_pane_g1

0x70a0,	// (0x00048bc4) main_myfav_hc_pane_g2_ParamLimits

0x70a0,	// (0x00048bc4) main_myfav_hc_pane_g2

0x0002,

0xf6f7,	// (0x0005121b) main_myfav_hc_pane_g_ParamLimits

0xf6f7,	// (0x0005121b) main_myfav_hc_pane_g

0x70d2,	// (0x00048bf6) main_myfav_hc_pane_t1_ParamLimits

0x70d2,	// (0x00048bf6) main_myfav_hc_pane_t1

0x70e9,	// (0x00048c0d) main_myfav_hc_pane_t2_ParamLimits

0x70e9,	// (0x00048c0d) main_myfav_hc_pane_t2

0x70fb,	// (0x00048c1f) main_myfav_hc_pane_t3_ParamLimits

0x70fb,	// (0x00048c1f) main_myfav_hc_pane_t3

0x710d,	// (0x00048c31) main_myfav_hc_pane_t4_ParamLimits

0x710d,	// (0x00048c31) main_myfav_hc_pane_t4

0x0004,

0xf6fe,	// (0x00051222) main_myfav_hc_pane_t_ParamLimits

0xf6fe,	// (0x00051222) main_myfav_hc_pane_t

0xe87e,	// (0x000503a2) bg_myfav_hc_instruction_pane_g1

0x7135,	// (0x00048c59) cell_myfav_contact_pane_g1_ParamLimits

0x7135,	// (0x00048c59) cell_myfav_contact_pane_g1

0x7135,	// (0x00048c59) cell_myfav_contact_pane_g2_ParamLimits

0x7135,	// (0x00048c59) cell_myfav_contact_pane_g2

0x7141,	// (0x00048c65) cell_myfav_contact_pane_g3_ParamLimits

0x7141,	// (0x00048c65) cell_myfav_contact_pane_g3

0xeb4a,	// (0x0005066e) cell_myfav_contact_pane_g4_ParamLimits

0xeb4a,	// (0x0005066e) cell_myfav_contact_pane_g4

0x714e,	// (0x00048c72) cell_myfav_contact_pane_g5_ParamLimits

0x714e,	// (0x00048c72) cell_myfav_contact_pane_g5

0x0004,

0xf709,	// (0x0005122d) cell_myfav_contact_pane_g_ParamLimits

0xf709,	// (0x0005122d) cell_myfav_contact_pane_g

0x70ba,	// (0x00048bde) main_myfav_hc_pane_g3_ParamLimits

0x70ba,	// (0x00048bde) main_myfav_hc_pane_g3

0x199b,	// (0x000434bf) popup_adpt_find_window

0x715a,	// (0x00048c7e) afind_page_pane_ParamLimits

0x715a,	// (0x00048c7e) afind_page_pane

0x716f,	// (0x00048c93) aid_size_cell_afind_ParamLimits

0x716f,	// (0x00048c93) aid_size_cell_afind

0x718d,	// (0x00048cb1) bg_popup_sub_pane_cp09_ParamLimits

0x718d,	// (0x00048cb1) bg_popup_sub_pane_cp09

0x719a,	// (0x00048cbe) find_pane_cp01_ParamLimits

0x719a,	// (0x00048cbe) find_pane_cp01

0x71a7,	// (0x00048ccb) grid_afind_control_pane_ParamLimits

0x71a7,	// (0x00048ccb) grid_afind_control_pane

0x71bb,	// (0x00048cdf) grid_afind_pane_ParamLimits

0x71bb,	// (0x00048cdf) grid_afind_pane

0x71dd,	// (0x00048d01) cell_afind_pane_ParamLimits

0x71dd,	// (0x00048d01) cell_afind_pane

0xe87e,	// (0x000503a2) afind_page_pane_g1

0x723e,	// (0x00048d62) afind_page_pane_g2

0x7247,	// (0x00048d6b) afind_page_pane_g3

0x0002,

0xf714,	// (0x00051238) afind_page_pane_g

0x7250,	// (0x00048d74) afind_page_pane_t1

0x7270,	// (0x00048d94) cell_afind_grid_control_pane_ParamLimits

0x7270,	// (0x00048d94) cell_afind_grid_control_pane

0x64f7,	// (0x0004801b) bg_button_pane_cp69_ParamLimits

0x64f7,	// (0x0004801b) bg_button_pane_cp69

0x727f,	// (0x00048da3) cell_afind_pane_g1_ParamLimits

0x727f,	// (0x00048da3) cell_afind_pane_g1

0x728c,	// (0x00048db0) cell_afind_pane_t1_ParamLimits

0x728c,	// (0x00048db0) cell_afind_pane_t1

0xc763,	// (0x0004e287) bg_button_pane_cp72

0x729e,	// (0x00048dc2) cell_afind_grid_control_pane_g1

0x4076,	// (0x00045b9a) aid_image_placing_area_ParamLimits

0x4076,	// (0x00045b9a) aid_image_placing_area

0xee32,	// (0x00050956) field_vitu_entry_pane_g1_ParamLimits

0xee32,	// (0x00050956) field_vitu_entry_pane_g1

0xee3e,	// (0x00050962) field_vitu_entry_pane_g2_ParamLimits

0xee3e,	// (0x00050962) field_vitu_entry_pane_g2

0x0001,

0x069b,	// (0x000421bf) field_vitu_entry_pane_g_ParamLimits

0x069b,	// (0x000421bf) field_vitu_entry_pane_g

0x6126,	// (0x00047c4a) cell_vitu_itu_pane_g1_ParamLimits

0x6168,	// (0x00047c8c) cell_vitu_itu_pane_t3_ParamLimits

0x6168,	// (0x00047c8c) cell_vitu_itu_pane_t3

0x63f6,	// (0x00047f1a) mp4_progress_pane_t1_ParamLimits

0x640f,	// (0x00047f33) mp4_progress_pane_t2_ParamLimits

0xf65a,	// (0x0005117e) mp4_progress_pane_t_ParamLimits

0x6428,	// (0x00047f4c) mup_progress_pane_cp04_ParamLimits

0x7121,	// (0x00048c45) main_myfav_hc_pane_t5_ParamLimits

0x7121,	// (0x00048c45) main_myfav_hc_pane_t5

0xa6c8,	// (0x0004c1ec) aid_zoom_text_primary

0x199b,	// (0x000434bf) popup_adpt_find_window_ParamLimits

0xd8c7,	// (0x0004f3eb) main_cam_set_pane

0x6a04,	// (0x00048528) cam4_zoom_pane_ParamLimits

0x6a04,	// (0x00048528) cam4_zoom_pane

0x72a7,	// (0x00048dcb) main_cam_set_pane_g1_ParamLimits

0x72a7,	// (0x00048dcb) main_cam_set_pane_g1

0x72b5,	// (0x00048dd9) main_cam_set_pane_g2_ParamLimits

0x72b5,	// (0x00048dd9) main_cam_set_pane_g2

0x0001,

0xf71b,	// (0x0005123f) main_cam_set_pane_g_ParamLimits

0xf71b,	// (0x0005123f) main_cam_set_pane_g

0x72d6,	// (0x00048dfa) main_cam_set_pane_t1_ParamLimits

0x72d6,	// (0x00048dfa) main_cam_set_pane_t1

0x72f1,	// (0x00048e15) main_cset_listscroll_pane_ParamLimits

0x72f1,	// (0x00048e15) main_cset_listscroll_pane

0x7311,	// (0x00048e35) main_cset_slider_pane_ParamLimits

0x7311,	// (0x00048e35) main_cset_slider_pane

0x733f,	// (0x00048e63) main_cset_list_pane_ParamLimits

0x733f,	// (0x00048e63) main_cset_list_pane

0x734f,	// (0x00048e73) scroll_pane_cp028

0x7358,	// (0x00048e7c) aid_area_touch_slider

0x7374,	// (0x00048e98) cset_slider_pane

0x739e,	// (0x00048ec2) main_cset_slider_pane_g1

0x73b3,	// (0x00048ed7) main_cset_slider_pane_g2

0x0011,

0xf720,	// (0x00051244) main_cset_slider_pane_g

0x749f,	// (0x00048fc3) main_cset_slider_pane_t1

0x74cd,	// (0x00048ff1) main_cset_slider_pane_t2

0x74e7,	// (0x0004900b) main_cset_slider_pane_t3

0x7501,	// (0x00049025) main_cset_slider_pane_t4

0x751b,	// (0x0004903f) main_cset_slider_pane_t5

0x7537,	// (0x0004905b) main_cset_slider_pane_t6

0x754c,	// (0x00049070) main_cset_slider_pane_t7

0x000e,

0xf745,	// (0x00051269) main_cset_slider_pane_t

0x76c2,	// (0x000491e6) cset_list_set_pane_ParamLimits

0x76c2,	// (0x000491e6) cset_list_set_pane

0x76d6,	// (0x000491fa) aid_position_infowindow_above

0x76de,	// (0x00049202) aid_position_infowindow_below

0x101d,	// (0x00042b41) cset_list_set_pane_g1_ParamLimits

0x101d,	// (0x00042b41) cset_list_set_pane_g1

0x1029,	// (0x00042b4d) cset_list_set_pane_g3_ParamLimits

0x1029,	// (0x00042b4d) cset_list_set_pane_g3

0x0001,

0xf764,	// (0x00051288) cset_list_set_pane_g_ParamLimits

0xf764,	// (0x00051288) cset_list_set_pane_g

0x1038,	// (0x00042b5c) cset_list_set_pane_t1_ParamLimits

0x1038,	// (0x00042b5c) cset_list_set_pane_t1

0xd8c7,	// (0x0004f3eb) list_highlight_pane_cp021_ParamLimits

0xd8c7,	// (0x0004f3eb) list_highlight_pane_cp021

0xd116,	// (0x0004ec3a) cset_slider_pane_g1

0xd128,	// (0x0004ec4c) cset_slider_pane_g2

0xd11f,	// (0x0004ec43) cset_slider_pane_g3

0x0002,

0x083f,	// (0x00042363) cset_slider_pane_g

0xaea2,	// (0x0004c9c6) aid_area_touch_cam4_zoom

0xaeaa,	// (0x0004c9ce) cam4_zoom_cont_pane

0xaeb2,	// (0x0004c9d6) cam4_zoom_pane_g1

0xaeba,	// (0x0004c9de) cam4_zoom_pane_g2

0x76e6,	// (0x0004920a) cam4_zoom_pane_g3

0x0002,

0xf769,	// (0x0005128d) cam4_zoom_pane_g

0x76ee,	// (0x00049212) cam4_zoom_cont_pane_g1

0x76f7,	// (0x0004921b) cam4_zoom_cont_pane_g2

0x7700,	// (0x00049224) cam4_zoom_cont_pane_g3

0x0002,

0xf770,	// (0x00051294) cam4_zoom_cont_pane_g

0x67df,	// (0x00048303) call4_image_pane_ParamLimits

0x67df,	// (0x00048303) call4_image_pane

0x683f,	// (0x00048363) call4_windows_conf_pane_ParamLimits

0x687e,	// (0x000483a2) popup_call4_audio_in_window_ParamLimits

0x687e,	// (0x000483a2) popup_call4_audio_in_window

0xa6a2,	// (0x0004c1c6) bg_popup_call2_act_pane_cp02

0x6979,	// (0x0004849d) call4_list_conf_pane

0xe87e,	// (0x000503a2) call4_image_pane_g1

0xe87e,	// (0x000503a2) call4_image_pane_g2

0x0001,

0x0561,	// (0x00042085) call4_image_pane_g

0x7709,	// (0x0004922d) list_single_graphic_popup_conf4_pane_ParamLimits

0x7709,	// (0x0004922d) list_single_graphic_popup_conf4_pane

0xa6a2,	// (0x0004c1c6) list_highlight_pane_cp022

0x771c,	// (0x00049240) list_single_graphic_popup_conf4_pane_g1

0xce07,	// (0x0004e92b) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf777,	// (0x0005129b) list_single_graphic_popup_conf4_pane_g

0x7724,	// (0x00049248) list_single_graphic_popup_conf4_pane_t1

0x2716,	// (0x0004423a) popup_vtel_slider_window_ParamLimits

0x2716,	// (0x0004423a) popup_vtel_slider_window

0x64c1,	// (0x00047fe5) dialer2_ne_pane_t2_ParamLimits

0x64c1,	// (0x00047fe5) dialer2_ne_pane_t2

0x0001,

0xf65f,	// (0x00051183) dialer2_ne_pane_t_ParamLimits

0xf65f,	// (0x00051183) dialer2_ne_pane_t

0xe659,	// (0x0005017d) bg_popup_sub_pane_cp010_ParamLimits

0xe659,	// (0x0005017d) bg_popup_sub_pane_cp010

0x773a,	// (0x0004925e) popup_vtel_slider_window_g1_ParamLimits

0x773a,	// (0x0004925e) popup_vtel_slider_window_g1

0x774d,	// (0x00049271) popup_vtel_slider_window_g2_ParamLimits

0x774d,	// (0x00049271) popup_vtel_slider_window_g2

0x0003,

0xf77c,	// (0x000512a0) popup_vtel_slider_window_g_ParamLimits

0xf77c,	// (0x000512a0) popup_vtel_slider_window_g

0x77a3,	// (0x000492c7) vtel_slider_pane_ParamLimits

0x77a3,	// (0x000492c7) vtel_slider_pane

0x77c5,	// (0x000492e9) vtel_slider_pane_g1_ParamLimits

0x77c5,	// (0x000492e9) vtel_slider_pane_g1

0x77d9,	// (0x000492fd) vtel_slider_pane_g2_ParamLimits

0x77d9,	// (0x000492fd) vtel_slider_pane_g2

0x77f1,	// (0x00049315) vtel_slider_pane_g3_ParamLimits

0x77f1,	// (0x00049315) vtel_slider_pane_g3

0x77c5,	// (0x000492e9) vtel_slider_pane_g4_ParamLimits

0x77c5,	// (0x000492e9) vtel_slider_pane_g4

0x7807,	// (0x0004932b) vtel_slider_pane_g5_ParamLimits

0x7807,	// (0x0004932b) vtel_slider_pane_g5

0x0004,

0xf785,	// (0x000512a9) vtel_slider_pane_g_ParamLimits

0xf785,	// (0x000512a9) vtel_slider_pane_g

0xa6a2,	// (0x0004c1c6) main_gallery2_pane

0x6c84,	// (0x000487a8) aid_size_row_itut2_dropdow_list_ParamLimits

0x6c84,	// (0x000487a8) aid_size_row_itut2_dropdow_list

0x6d10,	// (0x00048834) grid_vitu2_function_top_pane_ParamLimits

0x6d10,	// (0x00048834) grid_vitu2_function_top_pane

0x6d75,	// (0x00048899) popup_vitu2_dropdown_list_window_ParamLimits

0x6d75,	// (0x00048899) popup_vitu2_dropdown_list_window

0x6d9e,	// (0x000488c2) popup_vitu2_match_list_window

0x781d,	// (0x00049341) cell_vitu2_function_top_pane_ParamLimits

0x781d,	// (0x00049341) cell_vitu2_function_top_pane

0x783b,	// (0x0004935f) cell_vitu2_function_top_pane_cp01_ParamLimits

0x783b,	// (0x0004935f) cell_vitu2_function_top_pane_cp01

0x7859,	// (0x0004937d) cell_vitu2_function_top_wide_pane_ParamLimits

0x7859,	// (0x0004937d) cell_vitu2_function_top_wide_pane

0xd8c7,	// (0x0004f3eb) bg_button_pane_cp012

0x7877,	// (0x0004939b) cell_vitu2_function_top_pane_g1

0xaed0,	// (0x0004c9f4) bg_button_pane_cp013_ParamLimits

0xaed0,	// (0x0004c9f4) bg_button_pane_cp013

0x788b,	// (0x000493af) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x788b,	// (0x000493af) cell_vitu2_function_top_wide_pane_g1

0xd8c7,	// (0x0004f3eb) bg_popup_sub_pane_cp20

0x78a3,	// (0x000493c7) list_vitu2_match_list_pane

0x6f24,	// (0x00048a48) bg_popup_sub_pane_cp20_g1

0x6f2c,	// (0x00048a50) bg_popup_sub_pane_cp20_g2

0xc968,	// (0x0004e48c) bg_popup_sub_pane_cp20_g3

0x6f34,	// (0x00048a58) bg_popup_sub_pane_cp20_g4

0xc948,	// (0x0004e46c) bg_popup_sub_pane_cp20_g5

0x78c1,	// (0x000493e5) bg_popup_sub_pane_cp20_g6

0x6f44,	// (0x00048a68) bg_popup_sub_pane_cp20_g7

0x6f4c,	// (0x00048a70) bg_popup_sub_pane_cp20_g8

0x6f54,	// (0x00048a78) bg_popup_sub_pane_cp20_g9

0x0008,

0xf790,	// (0x000512b4) bg_popup_sub_pane_cp20_g

0xaeec,	// (0x0004ca10) list_vitu2_match_list_item_pane_ParamLimits

0xaeec,	// (0x0004ca10) list_vitu2_match_list_item_pane

0xaefe,	// (0x0004ca22) list_vitu2_match_list_item_pane_t1

0xa6a2,	// (0x0004c1c6) bg_popup_sub_pane_cp21

0xccfe,	// (0x0004e822) grid_vitu2_dropdown_list_pane

0x78c9,	// (0x000493ed) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x78c9,	// (0x000493ed) cell_vitu2_dropdown_list_char_pane

0x78ea,	// (0x0004940e) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x78ea,	// (0x0004940e) cell_vitu2_dropdown_list_ctrl_pane

0x7916,	// (0x0004943a) cell_vitu2_dropdown_list_char_pane_g1

0x791f,	// (0x00049443) cell_vitu2_dropdown_list_char_pane_g2

0x7928,	// (0x0004944c) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xf7ad,	// (0x000512d1) cell_vitu2_dropdown_list_char_pane_g

0x7931,	// (0x00049455) cell_vitu2_dropdown_list_char_pane_t1

0x793f,	// (0x00049463) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x793f,	// (0x00049463) cell_vitu2_dropdown_list_ctrl_pane_g1

0x794f,	// (0x00049473) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x794f,	// (0x00049473) cell_vitu2_dropdown_list_ctrl_pane_g2

0x7960,	// (0x00049484) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x7960,	// (0x00049484) cell_vitu2_dropdown_list_ctrl_pane_g3

0x7970,	// (0x00049494) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x7970,	// (0x00049494) cell_vitu2_dropdown_list_ctrl_pane_g4

0xeae5,	// (0x00050609) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0xeae5,	// (0x00050609) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xf7b4,	// (0x000512d8) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xf7b4,	// (0x000512d8) cell_vitu2_dropdown_list_ctrl_pane_g

0x798c,	// (0x000494b0) aid_size_cell_gallery2_ParamLimits

0x798c,	// (0x000494b0) aid_size_cell_gallery2

0x79a2,	// (0x000494c6) grid_gallery2_pane_ParamLimits

0x79a2,	// (0x000494c6) grid_gallery2_pane

0x79b6,	// (0x000494da) scroll_pane_cp029_ParamLimits

0x79b6,	// (0x000494da) scroll_pane_cp029

0x79c2,	// (0x000494e6) cell_gallery2_pane_ParamLimits

0x79c2,	// (0x000494e6) cell_gallery2_pane

0x79f8,	// (0x0004951c) cell_gallery2_pane_g2

0x7a02,	// (0x00049526) cell_gallery2_pane_g3

0x7a0a,	// (0x0004952e) cell_gallery2_pane_g4

0x7a12,	// (0x00049536) cell_gallery2_pane_g5

0xcfe0,	// (0x0004eb04) grid_highlight_pane_cp10

0x6d9e,	// (0x000488c2) popup_vitu2_match_list_window_ParamLimits

0x6db3,	// (0x000488d7) popup_vitu2_query_window_ParamLimits

0x6db3,	// (0x000488d7) popup_vitu2_query_window

0xa6a2,	// (0x0004c1c6) bg_vitu2_candi_button_pane

0x7916,	// (0x0004943a) cell_vitu2_dropdown_list_char_pane_g1_copy1

0x791f,	// (0x00049443) cell_vitu2_dropdown_list_char_pane_g2_copy1

0x7928,	// (0x0004944c) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x1082,	// (0x00042ba6) bg_button_pane_cp015

0x7a1a,	// (0x0004953e) bg_button_pane_cp016

0x7a2d,	// (0x00049551) bg_button_pane_cp017

0xe42d,	// (0x0004ff51) bg_popup_sub_pane_cp22

0x7a51,	// (0x00049575) popup_vitu2_query_window_g1

0x10b7,	// (0x00042bdb) popup_vitu2_query_window_g2

0x0002,

0xf7bf,	// (0x000512e3) popup_vitu2_query_window_g

0x10d6,	// (0x00042bfa) popup_vitu2_query_window_t1_ParamLimits

0x10d6,	// (0x00042bfa) popup_vitu2_query_window_t1

0x110b,	// (0x00042c2f) popup_vitu2_query_window_t2_ParamLimits

0x110b,	// (0x00042c2f) popup_vitu2_query_window_t2

0x111d,	// (0x00042c41) popup_vitu2_query_window_t3_ParamLimits

0x111d,	// (0x00042c41) popup_vitu2_query_window_t3

0x7a5d,	// (0x00049581) popup_vitu2_query_window_t4_ParamLimits

0x7a5d,	// (0x00049581) popup_vitu2_query_window_t4

0x7a7e,	// (0x000495a2) popup_vitu2_query_window_t5_ParamLimits

0x7a7e,	// (0x000495a2) popup_vitu2_query_window_t5

0x0006,

0xf7c6,	// (0x000512ea) popup_vitu2_query_window_t_ParamLimits

0xf7c6,	// (0x000512ea) popup_vitu2_query_window_t

0x7337,	// (0x00048e5b) main_cset_text_pane

0x7358,	// (0x00048e7c) aid_area_touch_slider_ParamLimits

0x7374,	// (0x00048e98) cset_slider_pane_ParamLimits

0x739e,	// (0x00048ec2) main_cset_slider_pane_g1_ParamLimits

0x73b3,	// (0x00048ed7) main_cset_slider_pane_g2_ParamLimits

0x73c8,	// (0x00048eec) main_cset_slider_pane_g3_ParamLimits

0x73c8,	// (0x00048eec) main_cset_slider_pane_g3

0x73d4,	// (0x00048ef8) main_cset_slider_pane_g4_ParamLimits

0x73d4,	// (0x00048ef8) main_cset_slider_pane_g4

0x73e3,	// (0x00048f07) main_cset_slider_pane_g5_ParamLimits

0x73e3,	// (0x00048f07) main_cset_slider_pane_g5

0x73ef,	// (0x00048f13) main_cset_slider_pane_g6_ParamLimits

0x73ef,	// (0x00048f13) main_cset_slider_pane_g6

0xf720,	// (0x00051244) main_cset_slider_pane_g_ParamLimits

0x749f,	// (0x00048fc3) main_cset_slider_pane_t1_ParamLimits

0x74cd,	// (0x00048ff1) main_cset_slider_pane_t2_ParamLimits

0x74e7,	// (0x0004900b) main_cset_slider_pane_t3_ParamLimits

0x7501,	// (0x00049025) main_cset_slider_pane_t4_ParamLimits

0x751b,	// (0x0004903f) main_cset_slider_pane_t5_ParamLimits

0x7537,	// (0x0004905b) main_cset_slider_pane_t6_ParamLimits

0x754c,	// (0x00049070) main_cset_slider_pane_t7_ParamLimits

0x7576,	// (0x0004909a) main_cset_slider_pane_t8_ParamLimits

0x7576,	// (0x0004909a) main_cset_slider_pane_t8

0x759e,	// (0x000490c2) main_cset_slider_pane_t9_ParamLimits

0x759e,	// (0x000490c2) main_cset_slider_pane_t9

0x75c6,	// (0x000490ea) main_cset_slider_pane_t10_ParamLimits

0x75c6,	// (0x000490ea) main_cset_slider_pane_t10

0x75ee,	// (0x00049112) main_cset_slider_pane_t11_ParamLimits

0x75ee,	// (0x00049112) main_cset_slider_pane_t11

0x7616,	// (0x0004913a) main_cset_slider_pane_t12_ParamLimits

0x7616,	// (0x0004913a) main_cset_slider_pane_t12

0x7633,	// (0x00049157) main_cset_slider_pane_t13_ParamLimits

0x7633,	// (0x00049157) main_cset_slider_pane_t13

0xf745,	// (0x00051269) main_cset_slider_pane_t_ParamLimits

0xa6a2,	// (0x0004c1c6) bg_popup_sub_pane_cp011

0x7a9f,	// (0x000495c3) main_cset_text_pane_g1

0x7aa7,	// (0x000495cb) main_cset_text_pane_t1

0x7ab5,	// (0x000495d9) main_cset_text_pane_t2

0x7ac3,	// (0x000495e7) main_cset_text_pane_t3

0x7ad1,	// (0x000495f5) main_cset_text_pane_t4

0x7adf,	// (0x00049603) main_cset_text_pane_t5

0x7aed,	// (0x00049611) main_cset_text_pane_t6

0x7afb,	// (0x0004961f) main_cset_text_pane_t7

0x0006,

0xf7d5,	// (0x000512f9) main_cset_text_pane_t

0xa6a2,	// (0x0004c1c6) main_cam4_burst_pane

0xa6a2,	// (0x0004c1c6) main_cam5_pane

0x725e,	// (0x00048d82) bg_button_pane_cp019

0x7267,	// (0x00048d8b) bg_button_pane_cp020

0x7403,	// (0x00048f27) main_cset_slider_pane_g7_ParamLimits

0x7403,	// (0x00048f27) main_cset_slider_pane_g7

0x740f,	// (0x00048f33) main_cset_slider_pane_g8_ParamLimits

0x740f,	// (0x00048f33) main_cset_slider_pane_g8

0x741b,	// (0x00048f3f) main_cset_slider_pane_g9_ParamLimits

0x741b,	// (0x00048f3f) main_cset_slider_pane_g9

0x7427,	// (0x00048f4b) main_cset_slider_pane_g10_ParamLimits

0x7427,	// (0x00048f4b) main_cset_slider_pane_g10

0x7433,	// (0x00048f57) main_cset_slider_pane_g11_ParamLimits

0x7433,	// (0x00048f57) main_cset_slider_pane_g11

0x743f,	// (0x00048f63) main_cset_slider_pane_g12_ParamLimits

0x743f,	// (0x00048f63) main_cset_slider_pane_g12

0x744b,	// (0x00048f6f) main_cset_slider_pane_g13_ParamLimits

0x744b,	// (0x00048f6f) main_cset_slider_pane_g13

0x7457,	// (0x00048f7b) main_cset_slider_pane_g14_ParamLimits

0x7457,	// (0x00048f7b) main_cset_slider_pane_g14

0x7463,	// (0x00048f87) main_cset_slider_pane_g15_ParamLimits

0x7463,	// (0x00048f87) main_cset_slider_pane_g15

0x7650,	// (0x00049174) main_cset_slider_pane_t14_ParamLimits

0x7650,	// (0x00049174) main_cset_slider_pane_t14

0x7689,	// (0x000491ad) main_cset_slider_pane_t15_ParamLimits

0x7689,	// (0x000491ad) main_cset_slider_pane_t15

0x7b09,	// (0x0004962d) aid_cam4_burst_size_cell_ParamLimits

0x7b09,	// (0x0004962d) aid_cam4_burst_size_cell

0x7b29,	// (0x0004964d) grid_cam4_burst_pane_ParamLimits

0x7b29,	// (0x0004964d) grid_cam4_burst_pane

0x7b61,	// (0x00049685) linegrid_cam4_burst_pane_ParamLimits

0x7b61,	// (0x00049685) linegrid_cam4_burst_pane

0x7b87,	// (0x000496ab) scroll_pane_cp30_ParamLimits

0x7b87,	// (0x000496ab) scroll_pane_cp30

0x7b93,	// (0x000496b7) cell_cam4_burst_pane_ParamLimits

0x7b93,	// (0x000496b7) cell_cam4_burst_pane

0x7be0,	// (0x00049704) linegrid_cam4_burst_pane_g1_ParamLimits

0x7be0,	// (0x00049704) linegrid_cam4_burst_pane_g1

0x7bed,	// (0x00049711) linegrid_cam4_burst_pane_g2_ParamLimits

0x7bed,	// (0x00049711) linegrid_cam4_burst_pane_g2

0x7bfe,	// (0x00049722) linegrid_cam4_burst_pane_g3_ParamLimits

0x7bfe,	// (0x00049722) linegrid_cam4_burst_pane_g3

0x0002,

0xf7e4,	// (0x00051308) linegrid_cam4_burst_pane_g_ParamLimits

0xf7e4,	// (0x00051308) linegrid_cam4_burst_pane_g

0x7c0b,	// (0x0004972f) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x7c0b,	// (0x0004972f) linegrid_cam4_burst_pane_g3_copy1

0x7c25,	// (0x00049749) linegrid_cam4_burst_pane_g4_ParamLimits

0x7c25,	// (0x00049749) linegrid_cam4_burst_pane_g4

0x7c32,	// (0x00049756) linegrid_cam4_burst_pane_g5_ParamLimits

0x7c32,	// (0x00049756) linegrid_cam4_burst_pane_g5

0x7c43,	// (0x00049767) linegrid_cam4_burst_pane_g6_ParamLimits

0x7c43,	// (0x00049767) linegrid_cam4_burst_pane_g6

0x7c5a,	// (0x0004977e) linegrid_cam4_burst_pane_g7_ParamLimits

0x7c5a,	// (0x0004977e) linegrid_cam4_burst_pane_g7

0x7c67,	// (0x0004978b) cell_cam4_burst_pane_g1

0x7c86,	// (0x000497aa) main_cam5_pane_t1_ParamLimits

0x7c86,	// (0x000497aa) main_cam5_pane_t1

0x7c98,	// (0x000497bc) main_cam5_pane_t2_ParamLimits

0x7c98,	// (0x000497bc) main_cam5_pane_t2

0x7caa,	// (0x000497ce) main_cam5_pane_t3_ParamLimits

0x7caa,	// (0x000497ce) main_cam5_pane_t3

0x7cbc,	// (0x000497e0) main_cam5_pane_t4_ParamLimits

0x7cbc,	// (0x000497e0) main_cam5_pane_t4

0x7cd2,	// (0x000497f6) main_cam5_pane_t5_ParamLimits

0x7cd2,	// (0x000497f6) main_cam5_pane_t5

0x7ce4,	// (0x00049808) main_cam5_pane_t6_ParamLimits

0x7ce4,	// (0x00049808) main_cam5_pane_t6

0x7cf8,	// (0x0004981c) main_cam5_pane_t7_ParamLimits

0x7cf8,	// (0x0004981c) main_cam5_pane_t7

0x7d0a,	// (0x0004982e) main_cam5_pane_t8_ParamLimits

0x7d0a,	// (0x0004982e) main_cam5_pane_t8

0x7d26,	// (0x0004984a) main_cam5_pane_t9_ParamLimits

0x7d26,	// (0x0004984a) main_cam5_pane_t9

0x7d38,	// (0x0004985c) main_cam5_pane_t10_ParamLimits

0x7d38,	// (0x0004985c) main_cam5_pane_t10

0x7d4a,	// (0x0004986e) main_cam5_pane_t11_ParamLimits

0x7d4a,	// (0x0004986e) main_cam5_pane_t11

0x7d5c,	// (0x00049880) main_cam5_pane_t12_ParamLimits

0x7d5c,	// (0x00049880) main_cam5_pane_t12

0x7d71,	// (0x00049895) main_cam5_pane_t13_ParamLimits

0x7d71,	// (0x00049895) main_cam5_pane_t13

0x000c,

0xf7f0,	// (0x00051314) main_cam5_pane_t_ParamLimits

0xf7f0,	// (0x00051314) main_cam5_pane_t

0x1a1d,	// (0x00043541) popup_scut_keymap_window_ParamLimits

0x1a1d,	// (0x00043541) popup_scut_keymap_window

0x7d8e,	// (0x000498b2) aid_size_cell_brow_shortcut

0xcfe0,	// (0x0004eb04) bg_popup_window_pane_cp010

0x7d9a,	// (0x000498be) grid_scut_pane

0x7da6,	// (0x000498ca) cell_scut_pane_ParamLimits

0x7da6,	// (0x000498ca) cell_scut_pane

0x7dbd,	// (0x000498e1) cell_scut_pane_g1

0x7dc6,	// (0x000498ea) cell_scut_pane_t1

0x7dd5,	// (0x000498f9) cell_scut_pane_t2

0x7de4,	// (0x00049908) cell_scut_pane_t3

0x0002,

0xf80b,	// (0x0005132f) cell_scut_pane_t

0x5662,	// (0x00047186) main_mup3_pane_g8_ParamLimits

0x5662,	// (0x00047186) main_mup3_pane_g8

0x6c9c,	// (0x000487c0) area_vitu2_query_pane_ParamLimits

0x6c9c,	// (0x000487c0) area_vitu2_query_pane

0x1096,	// (0x00042bba) input_focus_pane_cp08

0x7df2,	// (0x00049916) area_vitu2_query_pane_g1

0x119b,	// (0x00042cbf) area_vitu2_query_pane_g2

0x0001,

0xf812,	// (0x00051336) area_vitu2_query_pane_g

0x7dfe,	// (0x00049922) area_vitu2_query_pane_t1_ParamLimits

0x7dfe,	// (0x00049922) area_vitu2_query_pane_t1

0x7e12,	// (0x00049936) area_vitu2_query_pane_t2_ParamLimits

0x7e12,	// (0x00049936) area_vitu2_query_pane_t2

0x11ac,	// (0x00042cd0) area_vitu2_query_pane_t3_ParamLimits

0x11ac,	// (0x00042cd0) area_vitu2_query_pane_t3

0xaf24,	// (0x0004ca48) area_vitu2_query_pane_t4_ParamLimits

0xaf24,	// (0x0004ca48) area_vitu2_query_pane_t4

0xaf4c,	// (0x0004ca70) area_vitu2_query_pane_t5_ParamLimits

0xaf4c,	// (0x0004ca70) area_vitu2_query_pane_t5

0xaf74,	// (0x0004ca98) area_vitu2_query_pane_t6_ParamLimits

0xaf74,	// (0x0004ca98) area_vitu2_query_pane_t6

0x0006,

0xf817,	// (0x0005133b) area_vitu2_query_pane_t_ParamLimits

0xf817,	// (0x0005133b) area_vitu2_query_pane_t

0x7e26,	// (0x0004994a) bg_button_pane_cp018

0x7e34,	// (0x00049958) bg_button_pane_cp021

0x11d4,	// (0x00042cf8) bg_button_pane_cp022

0x11e5,	// (0x00042d09) input_focus_pane_cp09

0x36bf,	// (0x000451e3) aid_size_touch_mv_arrow_left

0x36e8,	// (0x0004520c) aid_size_touch_mv_arrow_right

0x747b,	// (0x00048f9f) main_cset_slider_pane_g16_ParamLimits

0x747b,	// (0x00048f9f) main_cset_slider_pane_g16

0x7487,	// (0x00048fab) main_cset_slider_pane_g17_ParamLimits

0x7487,	// (0x00048fab) main_cset_slider_pane_g17

0x7c67,	// (0x0004978b) cell_cam4_burst_pane_g1_ParamLimits

0xa6a2,	// (0x0004c1c6) compa_mode_pane

0x775d,	// (0x00049281) popup_vtel_slider_window_g3_ParamLimits

0x775d,	// (0x00049281) popup_vtel_slider_window_g3

0x7774,	// (0x00049298) popup_vtel_slider_window_g4_ParamLimits

0x7774,	// (0x00049298) popup_vtel_slider_window_g4

0x778b,	// (0x000492af) popup_vtel_slider_window_t1_ParamLimits

0x778b,	// (0x000492af) popup_vtel_slider_window_t1

0xa6a2,	// (0x0004c1c6) main_cl_pane

0xe455,	// (0x0004ff79) popup_imed_adjust2_window_ParamLimits

0xe42d,	// (0x0004ff51) bg_tb_trans_pane_cp05_ParamLimits

0xed67,	// (0x0005088b) popup_imed_adjust2_window_g1_ParamLimits

0xed76,	// (0x0005089a) popup_imed_adjust2_window_g2_ParamLimits

0xed76,	// (0x0005089a) popup_imed_adjust2_window_g2

0xed82,	// (0x000508a6) popup_imed_adjust2_window_g3_ParamLimits

0xed82,	// (0x000508a6) popup_imed_adjust2_window_g3

0x0002,

0x065f,	// (0x00042183) popup_imed_adjust2_window_g_ParamLimits

0x065f,	// (0x00042183) popup_imed_adjust2_window_g

0xed8e,	// (0x000508b2) popup_imed_adjust2_window_t1_ParamLimits

0xeda6,	// (0x000508ca) slider_imed_adjust_pane_ParamLimits

0xedba,	// (0x000508de) slider_imed_adjust_pane_g1_ParamLimits

0xedca,	// (0x000508ee) slider_imed_adjust_pane_g2_ParamLimits

0xedda,	// (0x000508fe) slider_imed_adjust_pane_g3_ParamLimits

0xedeb,	// (0x0005090f) slider_imed_adjust_pane_g4_ParamLimits

0x0666,	// (0x0004218a) slider_imed_adjust_pane_g_ParamLimits

0x69a5,	// (0x000484c9) aid_touch_area_cam4_ParamLimits

0x69a5,	// (0x000484c9) aid_touch_area_cam4

0xadc8,	// (0x0004c8ec) battery_pane_cp01

0x6a75,	// (0x00048599) main_camera4_pane_g6_ParamLimits

0x6a75,	// (0x00048599) main_camera4_pane_g6

0x6a9f,	// (0x000485c3) main_camera4_pane_t2_ParamLimits

0x6a9f,	// (0x000485c3) main_camera4_pane_t2

0x0001,

0xf693,	// (0x000511b7) main_camera4_pane_t_ParamLimits

0xf693,	// (0x000511b7) main_camera4_pane_t

0x6ae6,	// (0x0004860a) aid_touch_area_vid4_ParamLimits

0x6ae6,	// (0x0004860a) aid_touch_area_vid4

0x6b4d,	// (0x00048671) main_video4_pane_g5_ParamLimits

0x6b4d,	// (0x00048671) main_video4_pane_g5

0x6b78,	// (0x0004869c) vid4_progress_pane_ParamLimits

0x6b78,	// (0x0004869c) vid4_progress_pane

0x7493,	// (0x00048fb7) main_cset_slider_pane_g18_ParamLimits

0x7493,	// (0x00048fb7) main_cset_slider_pane_g18

0x7c7a,	// (0x0004979e) cell_cam4_burst_pane_g2_ParamLimits

0x7c7a,	// (0x0004979e) cell_cam4_burst_pane_g2

0x0001,

0xf7eb,	// (0x0005130f) cell_cam4_burst_pane_g_ParamLimits

0xf7eb,	// (0x0005130f) cell_cam4_burst_pane_g

0xc558,	// (0x0004e07c) bg_cl_pane_ParamLimits

0xc558,	// (0x0004e07c) bg_cl_pane

0x7e40,	// (0x00049964) cl_header_pane_ParamLimits

0x7e40,	// (0x00049964) cl_header_pane

0x7e54,	// (0x00049978) cl_listscroll_pane_ParamLimits

0x7e54,	// (0x00049978) cl_listscroll_pane

0x7e64,	// (0x00049988) bg_cl_pane_g1

0x7e6c,	// (0x00049990) bg_cl_pane_g2

0x7e74,	// (0x00049998) bg_cl_pane_g3

0x7e7c,	// (0x000499a0) bg_cl_pane_g4

0x7e84,	// (0x000499a8) bg_cl_pane_g5

0x7e8c,	// (0x000499b0) bg_cl_pane_g6

0x7e94,	// (0x000499b8) bg_cl_pane_g7

0x7e9c,	// (0x000499c0) bg_cl_pane_g8

0x7ea4,	// (0x000499c8) bg_cl_pane_g9

0x0008,

0xf826,	// (0x0005134a) bg_cl_pane_g

0x7eac,	// (0x000499d0) aid_height_cl_leading_ParamLimits

0x7eac,	// (0x000499d0) aid_height_cl_leading

0x7eb8,	// (0x000499dc) aid_height_cl_text_ParamLimits

0x7eb8,	// (0x000499dc) aid_height_cl_text

0xd8c7,	// (0x0004f3eb) bg_cl_header_pane_ParamLimits

0xd8c7,	// (0x0004f3eb) bg_cl_header_pane

0x7ed7,	// (0x000499fb) cl_header_pane_g1_ParamLimits

0x7ed7,	// (0x000499fb) cl_header_pane_g1

0x7eed,	// (0x00049a11) cl_header_pane_t1_ParamLimits

0x7eed,	// (0x00049a11) cl_header_pane_t1

0x7f06,	// (0x00049a2a) cl_list_pane

0x734f,	// (0x00048e73) hc_scroll_pane_cp01

0xc948,	// (0x0004e46c) bg_cl_header_pane_g1

0x6f24,	// (0x00048a48) bg_cl_header_pane_g2

0xc968,	// (0x0004e48c) bg_cl_header_pane_g3

0x6f34,	// (0x00048a58) bg_cl_header_pane_g4

0x6f2c,	// (0x00048a50) bg_cl_header_pane_g5

0x78c1,	// (0x000493e5) bg_cl_header_pane_g6

0x6f4c,	// (0x00048a70) bg_cl_header_pane_g7

0x6f54,	// (0x00048a78) bg_cl_header_pane_g8

0x6f44,	// (0x00048a68) bg_cl_header_pane_g9

0x0008,

0xf839,	// (0x0005135d) bg_cl_header_pane_g

0x7f0f,	// (0x00049a33) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x7f0f,	// (0x00049a33) hc_cl_list_double_graphic_heading_pane

0x7f23,	// (0x00049a47) hc_cl_list_single_graphic_pane_ParamLimits

0x7f23,	// (0x00049a47) hc_cl_list_single_graphic_pane

0x7f3d,	// (0x00049a61) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x7f3d,	// (0x00049a61) hc_cl_list_single_graphic_pane_g1

0x7f49,	// (0x00049a6d) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x7f49,	// (0x00049a6d) hc_cl_list_single_graphic_pane_g2

0x0001,

0xf84c,	// (0x00051370) hc_cl_list_single_graphic_pane_g_ParamLimits

0xf84c,	// (0x00051370) hc_cl_list_single_graphic_pane_g

0x7f5d,	// (0x00049a81) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x7f5d,	// (0x00049a81) hc_cl_list_single_graphic_pane_t1

0x7f3d,	// (0x00049a61) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x7f3d,	// (0x00049a61) hc_cl_list_double_graphic_heading_pane_g1

0x7f72,	// (0x00049a96) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x7f72,	// (0x00049a96) hc_cl_list_double_graphic_heading_pane_g2

0x7f86,	// (0x00049aaa) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x7f86,	// (0x00049aaa) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xf851,	// (0x00051375) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xf851,	// (0x00051375) hc_cl_list_double_graphic_heading_pane_g

0x7f9a,	// (0x00049abe) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x7f9a,	// (0x00049abe) hc_cl_list_double_graphic_heading_pane_t1

0x7faf,	// (0x00049ad3) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x7faf,	// (0x00049ad3) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xf858,	// (0x0005137c) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xf858,	// (0x0005137c) hc_cl_list_double_graphic_heading_pane_t

0xafc8,	// (0x0004caec) vid4_progress_pane_g1

0xafd8,	// (0x0004cafc) vid4_progress_pane_g2

0xafe8,	// (0x0004cb0c) vid4_progress_pane_g3

0xadfd,	// (0x0004c921) vid4_progress_pane_g4

0x0004,

0xf85d,	// (0x00051381) vid4_progress_pane_g

0xaff4,	// (0x0004cb18) vid4_progress_pane_t1

0xb009,	// (0x0004cb2d) vid4_progress_pane_t2

0x0002,

0xf868,	// (0x0005138c) vid4_progress_pane_t

0xb034,	// (0x0004cb58) wait_bar_pane_cp07

0xe667,	// (0x0005018b) blid_firmament_pane_ParamLimits

0xe6aa,	// (0x000501ce) popup_blid_sat_info2_window_g1

0xe6ce,	// (0x000501f2) popup_blid_sat_info2_window_t3

0xe6dc,	// (0x00050200) popup_blid_sat_info2_window_t4

0xe6f2,	// (0x00050216) popup_blid_sat_info2_window_t5

0xe700,	// (0x00050224) popup_blid_sat_info2_window_t6

0xe710,	// (0x00050234) popup_blid_sat_info2_window_t7

0xe71e,	// (0x00050242) popup_blid_sat_info2_window_t8

0xe72c,	// (0x00050250) popup_blid_sat_info2_window_t9

0xe73a,	// (0x0005025e) popup_blid_sat_info2_window_t10

0xe7fe,	// (0x00050322) aid_firma_cardinal_ParamLimits

0xe812,	// (0x00050336) blid_firmament_pane_t1_ParamLimits

0xe829,	// (0x0005034d) blid_firmament_pane_t2_ParamLimits

0xe840,	// (0x00050364) blid_firmament_pane_t3_ParamLimits

0xe857,	// (0x0005037b) blid_firmament_pane_t4_ParamLimits

0x0558,	// (0x0004207c) blid_firmament_pane_t_ParamLimits

0xe86e,	// (0x00050392) blid_sat_info_pane_ParamLimits

0xd8c7,	// (0x0004f3eb) main_cam_set_pane_ParamLimits

0x5ed0,	// (0x000479f4) aid_size_cell_colour_35_ParamLimits

0x5ef0,	// (0x00047a14) aid_size_cell_colour_112_ParamLimits

0x5f10,	// (0x00047a34) aid_size_cell_effect_ParamLimits

0xe42d,	// (0x0004ff51) bg_tb_trans_pane_cp02_ParamLimits

0xcb10,	// (0x0004e634) heading_imed_pane_ParamLimits

0x5f30,	// (0x00047a54) listscroll_imed_pane_ParamLimits

0xda4e,	// (0x0004f572) popup_call2_audio_first_window_g5_ParamLimits

0xda4e,	// (0x0004f572) popup_call2_audio_first_window_g5

0x656b,	// (0x0004808f) aid_size_touch_image3_arrow_left_ParamLimits

0x656b,	// (0x0004808f) aid_size_touch_image3_arrow_left

0x6597,	// (0x000480bb) aid_size_touch_image3_arrow_right_ParamLimits

0x6597,	// (0x000480bb) aid_size_touch_image3_arrow_right

0xb01f,	// (0x0004cb43) vid4_progress_pane_t3

0x6253,	// (0x00047d77) main_hwr_training_symbol_option_pane_ParamLimits

0x6253,	// (0x00047d77) main_hwr_training_symbol_option_pane

0xf054,	// (0x00050b78) popup_hwr_training_preview_window_ParamLimits

0xf054,	// (0x00050b78) popup_hwr_training_preview_window

0x6273,	// (0x00047d97) hwr_training_navi_pane_g5_ParamLimits

0x6273,	// (0x00047d97) hwr_training_navi_pane_g5

0x6e6c,	// (0x00048990) popup_char_count_window

0xd8c7,	// (0x0004f3eb) bg_popup_sub_pane_cp20_ParamLimits

0x78a3,	// (0x000493c7) list_vitu2_match_list_pane_ParamLimits

0x78b2,	// (0x000493d6) vitu2_page_scroll_pane_ParamLimits

0x78b2,	// (0x000493d6) vitu2_page_scroll_pane

0x7fc4,	// (0x00049ae8) list_single_hwr_training_symbol_option_pane_ParamLimits

0x7fc4,	// (0x00049ae8) list_single_hwr_training_symbol_option_pane

0x7fd7,	// (0x00049afb) list_single_hwr_training_symbol_option_pane_g1

0x7fdf,	// (0x00049b03) list_single_hwr_training_symbol_option_pane_t1

0x7fed,	// (0x00049b11) bg_button_pane_cp023

0x7ff6,	// (0x00049b1a) bg_button_pane_cp024

0x8029,	// (0x00049b4d) vitu2_page_scroll_pane_g1

0x8031,	// (0x00049b55) vitu2_page_scroll_pane_g2

0x0001,

0xf86f,	// (0x00051393) vitu2_page_scroll_pane_g

0x8039,	// (0x00049b5d) vitu2_page_scroll_pane_t1

0xe5c7,	// (0x000500eb) popup_char_count_window_g1

0x8048,	// (0x00049b6c) popup_char_count_window_g2

0x8051,	// (0x00049b75) popup_char_count_window_g3

0x0002,

0xf874,	// (0x00051398) popup_char_count_window_g

0x805a,	// (0x00049b7e) popup_char_count_window_t1

0xa6a2,	// (0x0004c1c6) main_vded2_pane

0xed53,	// (0x00050877) aid_size_cell_imed_line

0xed5d,	// (0x00050881) grid_imed_line_width_pane

0x6be8,	// (0x0004870c) vid4_indicators_pane_g4

0x8068,	// (0x00049b8c) cell_imed_line_width_pane_ParamLimits

0x8068,	// (0x00049b8c) cell_imed_line_width_pane

0x807c,	// (0x00049ba0) cell_imed_line_width_pane_g1

0xe6ea,	// (0x0005020e) cell_imed_line_width_pane_g2

0x0001,

0xf87b,	// (0x0005139f) cell_imed_line_width_pane_g

0x8085,	// (0x00049ba9) main_vded2_pane_g1_ParamLimits

0x8085,	// (0x00049ba9) main_vded2_pane_g1

0x809b,	// (0x00049bbf) main_vded2_pane_g2_ParamLimits

0x809b,	// (0x00049bbf) main_vded2_pane_g2

0x0001,

0xf880,	// (0x000513a4) main_vded2_pane_g_ParamLimits

0xf880,	// (0x000513a4) main_vded2_pane_g

0x80ad,	// (0x00049bd1) vded2_slider_pane_ParamLimits

0x80ad,	// (0x00049bd1) vded2_slider_pane

0x80bd,	// (0x00049be1) aid_size_touch_vded2_end

0x80c7,	// (0x00049beb) aid_size_touch_vded2_playhead

0x80d1,	// (0x00049bf5) aid_size_touch_vded2_start

0x80d9,	// (0x00049bfd) vded2_slider_bg_pane

0x80e2,	// (0x00049c06) vded2_slider_pane_g1

0x80eb,	// (0x00049c0f) vded2_slider_pane_g2

0x80f3,	// (0x00049c17) vded2_slider_pane_g3

0x0002,

0xf885,	// (0x000513a9) vded2_slider_pane_g

0x80fe,	// (0x00049c22) vded2_slider_bg_pane_g1

0x8107,	// (0x00049c2b) vded2_slider_bg_pane_g2

0x8110,	// (0x00049c34) vded2_slider_bg_pane_g3

0x0002,

0xf88c,	// (0x000513b0) vded2_slider_bg_pane_g

0x3cdc,	// (0x00045800) aid_postcard_touch_down_pane_ParamLimits

0x3cdc,	// (0x00045800) aid_postcard_touch_down_pane

0x3cf2,	// (0x00045816) aid_postcard_touch_up_pane_ParamLimits

0x3cf2,	// (0x00045816) aid_postcard_touch_up_pane

0xa6a2,	// (0x0004c1c6) main_blid2_pane

0xe43b,	// (0x0004ff5f) popup_blid2_search_window

0xa6a2,	// (0x0004c1c6) blid2_gps_pane

0xa6a2,	// (0x0004c1c6) blid2_navig_pane

0xa6a2,	// (0x0004c1c6) blid2_search_pane

0xa6a2,	// (0x0004c1c6) blid2_tripm_pane

0x8119,	// (0x00049c3d) blid2_search_pane_g1_ParamLimits

0x8119,	// (0x00049c3d) blid2_search_pane_g1

0x8131,	// (0x00049c55) blid2_search_pane_t1_ParamLimits

0x8131,	// (0x00049c55) blid2_search_pane_t1

0x8143,	// (0x00049c67) aid_size_cell_blid2_gps_ParamLimits

0x8143,	// (0x00049c67) aid_size_cell_blid2_gps

0x815b,	// (0x00049c7f) blid2_gps_pane_g1_ParamLimits

0x815b,	// (0x00049c7f) blid2_gps_pane_g1

0x816f,	// (0x00049c93) grid_blid2_satellite_pane_ParamLimits

0x816f,	// (0x00049c93) grid_blid2_satellite_pane

0x8189,	// (0x00049cad) blid2_navig_pane_g1_ParamLimits

0x8189,	// (0x00049cad) blid2_navig_pane_g1

0x8195,	// (0x00049cb9) blid2_navig_pane_t1_ParamLimits

0x8195,	// (0x00049cb9) blid2_navig_pane_t1

0x81b0,	// (0x00049cd4) blid2_navig_pane_t2_ParamLimits

0x81b0,	// (0x00049cd4) blid2_navig_pane_t2

0x0001,

0xf893,	// (0x000513b7) blid2_navig_pane_t_ParamLimits

0xf893,	// (0x000513b7) blid2_navig_pane_t

0x81cb,	// (0x00049cef) blid2_navig_ring_pane_ParamLimits

0x81cb,	// (0x00049cef) blid2_navig_ring_pane

0x81e4,	// (0x00049d08) blid2_speed_pane_ParamLimits

0x81e4,	// (0x00049d08) blid2_speed_pane

0x81f0,	// (0x00049d14) blid2_tripm_pane_g1_ParamLimits

0x81f0,	// (0x00049d14) blid2_tripm_pane_g1

0x820b,	// (0x00049d2f) blid2_tripm_pane_g2_ParamLimits

0x820b,	// (0x00049d2f) blid2_tripm_pane_g2

0x821f,	// (0x00049d43) blid2_tripm_pane_g3_ParamLimits

0x821f,	// (0x00049d43) blid2_tripm_pane_g3

0x8233,	// (0x00049d57) blid2_tripm_pane_g4_ParamLimits

0x8233,	// (0x00049d57) blid2_tripm_pane_g4

0x8247,	// (0x00049d6b) blid2_tripm_pane_g5_ParamLimits

0x8247,	// (0x00049d6b) blid2_tripm_pane_g5

0x0005,

0xf898,	// (0x000513bc) blid2_tripm_pane_g_ParamLimits

0xf898,	// (0x000513bc) blid2_tripm_pane_g

0x826d,	// (0x00049d91) blid2_tripm_pane_t1_ParamLimits

0x826d,	// (0x00049d91) blid2_tripm_pane_t1

0x8288,	// (0x00049dac) blid2_tripm_pane_t2_ParamLimits

0x8288,	// (0x00049dac) blid2_tripm_pane_t2

0x82a3,	// (0x00049dc7) blid2_tripm_pane_t3_ParamLimits

0x82a3,	// (0x00049dc7) blid2_tripm_pane_t3

0x0003,

0xf8a5,	// (0x000513c9) blid2_tripm_pane_t_ParamLimits

0xf8a5,	// (0x000513c9) blid2_tripm_pane_t

0x82ea,	// (0x00049e0e) cell_blid2_satellite_pane_ParamLimits

0x82ea,	// (0x00049e0e) cell_blid2_satellite_pane

0x8308,	// (0x00049e2c) cell_blid2_satellite_pane_g1

0x8311,	// (0x00049e35) cell_blid2_satellite_pane_t1

0xe87e,	// (0x000503a2) blid2_speed_pane_g1

0x831f,	// (0x00049e43) blid2_speed_pane_t1

0x832d,	// (0x00049e51) blid2_speed_pane_t2

0x0001,

0xf8ae,	// (0x000513d2) blid2_speed_pane_t

0xe87e,	// (0x000503a2) blid2_navig_ring_pane_g1

0x833b,	// (0x00049e5f) blid2_navig_ring_pane_g2

0x8343,	// (0x00049e67) blid2_navig_ring_pane_g3

0x834b,	// (0x00049e6f) blid2_navig_ring_pane_g4

0x8353,	// (0x00049e77) blid2_navig_ring_pane_g5

0x0004,

0xf8b3,	// (0x000513d7) blid2_navig_ring_pane_g

0xa6a2,	// (0x0004c1c6) bg_popup_window_pane_cp011

0x835b,	// (0x00049e7f) popup_blid2_search_window_g1

0x8363,	// (0x00049e87) popup_blid2_search_window_t1

0x8371,	// (0x00049e95) popup_blid2_search_window_t2

0x0001,

0xf8be,	// (0x000513e2) popup_blid2_search_window_t

0xc857,	// (0x0004e37b) main_browser_pane_g1

0xc558,	// (0x0004e07c) main_browser_pane_ParamLimits

0xd8c7,	// (0x0004f3eb) bg_button_pane_cp011_ParamLimits

0x6f06,	// (0x00048a2a) cell_vitu2_function_pane_g1_ParamLimits

0xe42d,	// (0x0004ff51) bg_popup_sub_pane_cp22_ParamLimits

0x1096,	// (0x00042bba) input_focus_pane_cp08_ParamLimits

0x7a40,	// (0x00049564) popup_vitu2_query_button_pane_ParamLimits

0x7a40,	// (0x00049564) popup_vitu2_query_button_pane

0x10ad,	// (0x00042bd1) popup_vitu2_query_input_button_pane

0x7a51,	// (0x00049575) popup_vitu2_query_window_g1_ParamLimits

0x10b7,	// (0x00042bdb) popup_vitu2_query_window_g2_ParamLimits

0xf7bf,	// (0x000512e3) popup_vitu2_query_window_g_ParamLimits

0xa6a2,	// (0x0004c1c6) bg_button_pane_cp026

0x837f,	// (0x00049ea3) popup_vitu2_query_input_button_pane_g1

0xa6a2,	// (0x0004c1c6) bg_button_pane_cp025

0x8387,	// (0x00049eab) popup_vitu2_query_button_pane_t1

0x5378,	// (0x00046e9c) main_mp3_pane_t6

0x5386,	// (0x00046eaa) popup_slider_window_cp01

0xade4,	// (0x0004c908) cam4_battery_pane

0xae4b,	// (0x0004c96f) cam4_battery_pane_cp02

0xafc0,	// (0x0004cae4) cam4_battery_pane_cp01

0xafc0,	// (0x0004cae4) cam4_battery_pane_cp03

0xe87e,	// (0x000503a2) cam4_battery_pane_g1

0x8395,	// (0x00049eb9) cam4_battery_pane_g2

0x0001,

0xf8c3,	// (0x000513e7) cam4_battery_pane_g

0xe748,	// (0x0005026c) popup_blid_sat_info2_window_t11

0x36bf,	// (0x000451e3) aid_size_touch_mv_arrow_left_ParamLimits

0x36e8,	// (0x0004520c) aid_size_touch_mv_arrow_right_ParamLimits

0xcf40,	// (0x0004ea64) navi_pane_g1_ParamLimits

0x3711,	// (0x00045235) navi_pane_g2_ParamLimits

0x373f,	// (0x00045263) navi_pane_g3_ParamLimits

0xf371,	// (0x00050e95) navi_pane_g_ParamLimits

0x3797,	// (0x000452bb) navi_pane_mv_t1_ParamLimits

0x5f3c,	// (0x00047a60) grid_imed_effect_pane_ParamLimits

0x2613,	// (0x00044137) aid_placing_vt_slider_lsc

0xc7a8,	// (0x0004e2cc) aid_placing_vt_slider_prt

0xd8c7,	// (0x0004f3eb) bg_tb_trans_pane_cp01_ParamLimits

0xea05,	// (0x00050529) popup_image_details_window_g1_ParamLimits

0xea18,	// (0x0005053c) popup_image_details_window_g2_ParamLimits

0xea2d,	// (0x00050551) popup_image_details_window_g3_ParamLimits

0xea2d,	// (0x00050551) popup_image_details_window_g3

0x059d,	// (0x000420c1) popup_image_details_window_g_ParamLimits

0xea41,	// (0x00050565) popup_image_details_window_t1_ParamLimits

0xea53,	// (0x00050577) popup_image_details_window_t2_ParamLimits

0xea6c,	// (0x00050590) popup_image_details_window_t3_ParamLimits

0xea80,	// (0x000505a4) popup_image_details_window_t4_ParamLimits

0xea9b,	// (0x000505bf) popup_image_details_window_t5_ParamLimits

0x05a4,	// (0x000420c8) popup_image_details_window_t_ParamLimits

0x7ec4,	// (0x000499e8) cl_header_name_pane_ParamLimits

0x7ec4,	// (0x000499e8) cl_header_name_pane

0x839f,	// (0x00049ec3) cl_header_name_pane_t1_ParamLimits

0x839f,	// (0x00049ec3) cl_header_name_pane_t1

0x83c0,	// (0x00049ee4) cl_header_name_pane_t2_ParamLimits

0x83c0,	// (0x00049ee4) cl_header_name_pane_t2

0x8402,	// (0x00049f26) cl_header_name_pane_t3_ParamLimits

0x8402,	// (0x00049f26) cl_header_name_pane_t3

0x0002,

0xf8c8,	// (0x000513ec) cl_header_name_pane_t_ParamLimits

0xf8c8,	// (0x000513ec) cl_header_name_pane_t

0x3768,	// (0x0004528c) navi_pane_mv_g2_ParamLimits

0x6e46,	// (0x0004896a) field_vitu2_entry_pane_g1_ParamLimits

0x6e52,	// (0x00048976) field_vitu2_entry_pane_g2_ParamLimits

0x6e5e,	// (0x00048982) field_vitu2_entry_pane_g3_ParamLimits

0x6e5e,	// (0x00048982) field_vitu2_entry_pane_g3

0xf6c5,	// (0x000511e9) field_vitu2_entry_pane_g_ParamLimits

0x6e82,	// (0x000489a6) cell_vitu2_itu_pane_g1_ParamLimits

0x6e92,	// (0x000489b6) cell_vitu2_itu_pane_g2_ParamLimits

0x6e92,	// (0x000489b6) cell_vitu2_itu_pane_g2

0x0001,

0xf6d1,	// (0x000511f5) cell_vitu2_itu_pane_g_ParamLimits

0xf6d1,	// (0x000511f5) cell_vitu2_itu_pane_g

0xd8c7,	// (0x0004f3eb) bg_vkb2_func_pane_cp05_ParamLimits

0xd8c7,	// (0x0004f3eb) bg_vkb2_func_pane_cp05

0xd8c7,	// (0x0004f3eb) bg_vkb2_func_pane_cp03

0xd8c7,	// (0x0004f3eb) bg_vkb2_func_pane_cp04

0xd8c7,	// (0x0004f3eb) bg_vkb2_func_pane_cp10_ParamLimits

0xd8c7,	// (0x0004f3eb) bg_vkb2_func_pane_cp10

0x11d4,	// (0x00042cf8) bg_vkb2_func_pane_cp08

0x7e26,	// (0x0004994a) bg_vkb2_func_pane_cp06

0x7e34,	// (0x00049958) bg_vkb2_func_pane_cp07

0x7fff,	// (0x00049b23) bg_vkb2_func_pane_cp11_ParamLimits

0x7fff,	// (0x00049b23) bg_vkb2_func_pane_cp11

0x8014,	// (0x00049b38) bg_vkb2_func_pane_cp12_ParamLimits

0x8014,	// (0x00049b38) bg_vkb2_func_pane_cp12

0xa6a2,	// (0x0004c1c6) bg_vkb2_func_pane_cp09

0x6f24,	// (0x00048a48) bg_vkb2_func_pane_g1

0xc968,	// (0x0004e48c) bg_vkb2_func_pane_g2

0x6f2c,	// (0x00048a50) bg_vkb2_func_pane_g3

0x6f34,	// (0x00048a58) bg_vkb2_func_pane_g4

0x78c1,	// (0x000493e5) bg_vkb2_func_pane_g5

0x6f4c,	// (0x00048a70) bg_vkb2_func_pane_g6

0x6f54,	// (0x00048a78) bg_vkb2_func_pane_g7

0x6f44,	// (0x00048a68) bg_vkb2_func_pane_g8

0xc948,	// (0x0004e46c) bg_vkb2_func_pane_g9

0x0008,

0xf8cf,	// (0x000513f3) bg_vkb2_func_pane_g

0x825b,	// (0x00049d7f) blid2_tripm_pane_g6_ParamLimits

0x825b,	// (0x00049d7f) blid2_tripm_pane_g6

0x63ee,	// (0x00047f12) mp4_progress_pane_g1

0x82d6,	// (0x00049dfa) blid2_tripm_values_pane_ParamLimits

0x82d6,	// (0x00049dfa) blid2_tripm_values_pane

0x8433,	// (0x00049f57) blid2_tripm_values_pane_t1

0x8441,	// (0x00049f65) blid2_tripm_values_pane_t2

0x844f,	// (0x00049f73) blid2_tripm_values_pane_t3

0x845d,	// (0x00049f81) blid2_tripm_values_pane_t4

0x846b,	// (0x00049f8f) blid2_tripm_values_pane_t5

0x8479,	// (0x00049f9d) blid2_tripm_values_pane_t6

0x8487,	// (0x00049fab) blid2_tripm_values_pane_t7

0x8495,	// (0x00049fb9) blid2_tripm_values_pane_t8

0x84a3,	// (0x00049fc7) blid2_tripm_values_pane_t9

0x0008,

0xf8e2,	// (0x00051406) blid2_tripm_values_pane_t

0x2655,	// (0x00044179) call_video_pane_t1_ParamLimits

0x2673,	// (0x00044197) call_video_pane_t2_ParamLimits

0xf268,	// (0x00050d8c) call_video_pane_t_ParamLimits

0x0ea0,	// (0x000429c4) msg_header_pane_g1_ParamLimits

0xd15b,	// (0x0004ec7f) msg_header_pane_g2_ParamLimits

0xd15b,	// (0x0004ec7f) msg_header_pane_g2

0x0001,

0xf3ee,	// (0x00050f12) msg_header_pane_g_ParamLimits

0xf3ee,	// (0x00050f12) msg_header_pane_g

0xc558,	// (0x0004e07c) main_clock2_pane_ParamLimits

0x5c61,	// (0x00047785) grid_clock2_toolbar_pane_ParamLimits

0x5c61,	// (0x00047785) grid_clock2_toolbar_pane

0x5c61,	// (0x00047785) listscroll_clock2_pane_ParamLimits

0x5c61,	// (0x00047785) listscroll_clock2_pane

0x5d3e,	// (0x00047862) main_clock2_pane_t3_ParamLimits

0x5d3e,	// (0x00047862) main_clock2_pane_t3

0x5d59,	// (0x0004787d) main_clock2_pane_t4_ParamLimits

0x5d59,	// (0x0004787d) main_clock2_pane_t4

0x84b1,	// (0x00049fd5) cell_clock2_toolbar_pane

0x84b9,	// (0x00049fdd) cell_clock2_toolbar_pane_cp01

0x84b9,	// (0x00049fdd) cell_clock2_toolbar_pane_cp02

0x84c1,	// (0x00049fe5) cell_clock2_toolbar_pane_cp03

0x84c9,	// (0x00049fed) list_clock2_pane

0xce93,	// (0x0004e9b7) scroll_pane_cp10

0x84d1,	// (0x00049ff5) list_single_clock2_pane_ParamLimits

0x84d1,	// (0x00049ff5) list_single_clock2_pane

0xcfe0,	// (0x0004eb04) list_highlight_pane_cp08

0x84de,	// (0x0004a002) list_single_clock2_pane_t1

0x84ec,	// (0x0004a010) list_single_clock2_pane_t2

0x0001,

0xf8f5,	// (0x00051419) list_single_clock2_pane_t

0xa6a2,	// (0x0004c1c6) bg_button_pane_cp10

0x84fa,	// (0x0004a01e) cell_clock2_toolbar_pane_g1

0x3c68,	// (0x0004578c) aid_main_viewer_pane_g1_ParamLimits

0x3c68,	// (0x0004578c) aid_main_viewer_pane_g1

0x3c76,	// (0x0004579a) aid_main_viewer_pane_g2_ParamLimits

0x3c76,	// (0x0004579a) aid_main_viewer_pane_g2

0x3c84,	// (0x000457a8) aid_main_viewer_pane_g3_ParamLimits

0x3c84,	// (0x000457a8) aid_main_viewer_pane_g3

0x3c93,	// (0x000457b7) aid_main_viewer_pane_g4_ParamLimits

0x3c93,	// (0x000457b7) aid_main_viewer_pane_g4

0x0003,

0xf3ff,	// (0x00050f23) aid_main_viewer_pane_g_ParamLimits

0xf3ff,	// (0x00050f23) aid_main_viewer_pane_g

0x459f,	// (0x000460c3) main_calc_pane_ParamLimits

0x45b3,	// (0x000460d7) main_dialer2_pane_ParamLimits

0xa6a2,	// (0x0004c1c6) main_cam6_pane

0xa6a2,	// (0x0004c1c6) main_vid6_pane

0x5c6d,	// (0x00047791) listscroll_gen_pane_cp06_ParamLimits

0x5c6d,	// (0x00047791) listscroll_gen_pane_cp06

0x5d74,	// (0x00047898) main_clock2_pane_t5_ParamLimits

0x5d74,	// (0x00047898) main_clock2_pane_t5

0x5dd1,	// (0x000478f5) aid_call2_pane_cp10_ParamLimits

0x5de3,	// (0x00047907) aid_call_pane_cp10_ParamLimits

0xcf15,	// (0x0004ea39) popup_clock_analogue_window_cp10_g1_ParamLimits

0xcf15,	// (0x0004ea39) popup_clock_analogue_window_cp10_g2_ParamLimits

0x5df5,	// (0x00047919) popup_clock_analogue_window_cp10_g3_ParamLimits

0x5df5,	// (0x00047919) popup_clock_analogue_window_cp10_g4_ParamLimits

0xcf15,	// (0x0004ea39) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf5eb,	// (0x0005110f) popup_clock_analogue_window_cp10_g_ParamLimits

0x5e07,	// (0x0004792b) popup_clock_analogue_window_cp10_t1_ParamLimits

0x6518,	// (0x0004803c) cell_dialer2_keypad_pane_g2_ParamLimits

0x6518,	// (0x0004803c) cell_dialer2_keypad_pane_g2

0x0001,

0xf664,	// (0x00051188) cell_dialer2_keypad_pane_g_ParamLimits

0xf664,	// (0x00051188) cell_dialer2_keypad_pane_g

0x6534,	// (0x00048058) cell_dialer2_keypad_pane_t1

0x7329,	// (0x00048e4d) main_cset_text2_pane_ParamLimits

0x7329,	// (0x00048e4d) main_cset_text2_pane

0x7df2,	// (0x00049916) area_vitu2_query_pane_g1_ParamLimits

0x119b,	// (0x00042cbf) area_vitu2_query_pane_g2_ParamLimits

0xf812,	// (0x00051336) area_vitu2_query_pane_g_ParamLimits

0xaf9c,	// (0x0004cac0) area_vitu2_query_pane_t7_ParamLimits

0xaf9c,	// (0x0004cac0) area_vitu2_query_pane_t7

0x7e26,	// (0x0004994a) bg_button_pane_cp018_ParamLimits

0x7e34,	// (0x00049958) bg_button_pane_cp021_ParamLimits

0x11d4,	// (0x00042cf8) bg_button_pane_cp022_ParamLimits

0x11d4,	// (0x00042cf8) bg_vkb2_func_pane_cp08_ParamLimits

0x7e26,	// (0x0004994a) bg_vkb2_func_pane_cp06_ParamLimits

0x7e34,	// (0x00049958) bg_vkb2_func_pane_cp07_ParamLimits

0x11e5,	// (0x00042d09) input_focus_pane_cp09_ParamLimits

0xb095,	// (0x0004cbb9) cam6_autofocus_pane_ParamLimits

0xb095,	// (0x0004cbb9) cam6_autofocus_pane

0x8502,	// (0x0004a026) cam6_image_uncrop_pane_ParamLimits

0x8502,	// (0x0004a026) cam6_image_uncrop_pane

0x8511,	// (0x0004a035) cam6_indi_pane_ParamLimits

0x8511,	// (0x0004a035) cam6_indi_pane

0x8527,	// (0x0004a04b) cam6_mode_pane_ParamLimits

0x8527,	// (0x0004a04b) cam6_mode_pane

0x8539,	// (0x0004a05d) cam6_timer_pane_ParamLimits

0x8539,	// (0x0004a05d) cam6_timer_pane

0x8545,	// (0x0004a069) cam6_zoom_pane_ParamLimits

0x8545,	// (0x0004a069) cam6_zoom_pane

0x8551,	// (0x0004a075) cam6_mode_pane_g1_ParamLimits

0x8551,	// (0x0004a075) cam6_mode_pane_g1

0x8561,	// (0x0004a085) cam6_mode_pane_g2_ParamLimits

0x8561,	// (0x0004a085) cam6_mode_pane_g2

0x8571,	// (0x0004a095) cam6_mode_pane_g3_ParamLimits

0x8571,	// (0x0004a095) cam6_mode_pane_g3

0x8581,	// (0x0004a0a5) cam6_mode_pane_g4_ParamLimits

0x8581,	// (0x0004a0a5) cam6_mode_pane_g4

0x0003,

0xf8fa,	// (0x0005141e) cam6_mode_pane_g_ParamLimits

0xf8fa,	// (0x0005141e) cam6_mode_pane_g

0x8591,	// (0x0004a0b5) bg_tb_trans_pane_cp08_ParamLimits

0x8591,	// (0x0004a0b5) bg_tb_trans_pane_cp08

0x859f,	// (0x0004a0c3) cam6_battery_pane_ParamLimits

0x859f,	// (0x0004a0c3) cam6_battery_pane

0x85b5,	// (0x0004a0d9) cam6_indi_pane_g1_ParamLimits

0x85b5,	// (0x0004a0d9) cam6_indi_pane_g1

0x85c7,	// (0x0004a0eb) cam6_indi_pane_g2_ParamLimits

0x85c7,	// (0x0004a0eb) cam6_indi_pane_g2

0x85d9,	// (0x0004a0fd) cam6_indi_pane_g3_ParamLimits

0x85d9,	// (0x0004a0fd) cam6_indi_pane_g3

0x0002,

0xf903,	// (0x00051427) cam6_indi_pane_g_ParamLimits

0xf903,	// (0x00051427) cam6_indi_pane_g

0x85eb,	// (0x0004a10f) cam6_indi_pane_t1_ParamLimits

0x85eb,	// (0x0004a10f) cam6_indi_pane_t1

0x8611,	// (0x0004a135) cam6_autofocus_pane_g1

0x8619,	// (0x0004a13d) cam6_autofocus_pane_g2

0x8621,	// (0x0004a145) cam6_autofocus_pane_g3

0x8629,	// (0x0004a14d) cam6_autofocus_pane_g4

0x0003,

0xf90a,	// (0x0005142e) cam6_autofocus_pane_g

0x8631,	// (0x0004a155) cam6_timer_pane_g1

0x8639,	// (0x0004a15d) cam6_timer_pane_t1

0x8647,	// (0x0004a16b) cam6_zoom_cont_pane

0x864f,	// (0x0004a173) cam6_zoom_pane_g1

0x8657,	// (0x0004a17b) cam6_zoom_pane_g2

0x865f,	// (0x0004a183) cam6_zoom_pane_g3

0x0002,

0xf913,	// (0x00051437) cam6_zoom_pane_g

0xe87e,	// (0x000503a2) cam6_battery_pane_g1

0xe87e,	// (0x000503a2) cam6_battery_pane_g2

0x0001,

0x0561,	// (0x00042085) cam6_battery_pane_g

0x8667,	// (0x0004a18b) cam6_zoom_cont_pane_g1

0x8670,	// (0x0004a194) cam6_zoom_cont_pane_g2

0x8679,	// (0x0004a19d) cam6_zoom_cont_pane_g3

0x0002,

0xf91a,	// (0x0005143e) cam6_zoom_cont_pane_g

0x8696,	// (0x0004a1ba) cam6_mode_pane_cp_ParamLimits

0x8696,	// (0x0004a1ba) cam6_mode_pane_cp

0x8545,	// (0x0004a069) cam6_zoom_pane_cp_ParamLimits

0x8545,	// (0x0004a069) cam6_zoom_pane_cp

0x86a8,	// (0x0004a1cc) vid6_image_uncrop_cif_pane_ParamLimits

0x86a8,	// (0x0004a1cc) vid6_image_uncrop_cif_pane

0x86b8,	// (0x0004a1dc) vid6_image_uncrop_nhd_pane_ParamLimits

0x86b8,	// (0x0004a1dc) vid6_image_uncrop_nhd_pane

0x8502,	// (0x0004a026) vid6_image_uncrop_vga_pane_ParamLimits

0x8502,	// (0x0004a026) vid6_image_uncrop_vga_pane

0x86d7,	// (0x0004a1fb) vid6_image_uncrop_wvga_pane_ParamLimits

0x86d7,	// (0x0004a1fb) vid6_image_uncrop_wvga_pane

0x86e6,	// (0x0004a20a) vid6_indi_pane_ParamLimits

0x86e6,	// (0x0004a20a) vid6_indi_pane

0x8591,	// (0x0004a0b5) bg_tb_trans_pane_cp09_ParamLimits

0x8591,	// (0x0004a0b5) bg_tb_trans_pane_cp09

0x86fe,	// (0x0004a222) cam6_battery_pane_cp_ParamLimits

0x86fe,	// (0x0004a222) cam6_battery_pane_cp

0x870a,	// (0x0004a22e) vid6_indi_pane_g1_ParamLimits

0x870a,	// (0x0004a22e) vid6_indi_pane_g1

0x871c,	// (0x0004a240) vid6_indi_pane_g2_ParamLimits

0x871c,	// (0x0004a240) vid6_indi_pane_g2

0x872e,	// (0x0004a252) vid6_indi_pane_g3_ParamLimits

0x872e,	// (0x0004a252) vid6_indi_pane_g3

0x8743,	// (0x0004a267) vid6_indi_pane_g4_ParamLimits

0x8743,	// (0x0004a267) vid6_indi_pane_g4

0x8758,	// (0x0004a27c) vid6_indi_pane_g5_ParamLimits

0x8758,	// (0x0004a27c) vid6_indi_pane_g5

0x0004,

0xf921,	// (0x00051445) vid6_indi_pane_g_ParamLimits

0xf921,	// (0x00051445) vid6_indi_pane_g

0x8772,	// (0x0004a296) vid6_indi_pane_t1_ParamLimits

0x8772,	// (0x0004a296) vid6_indi_pane_t1

0x8788,	// (0x0004a2ac) vid6_indi_pane_t2_ParamLimits

0x8788,	// (0x0004a2ac) vid6_indi_pane_t2

0x87b0,	// (0x0004a2d4) vid6_indi_pane_t3_ParamLimits

0x87b0,	// (0x0004a2d4) vid6_indi_pane_t3

0x87d8,	// (0x0004a2fc) vid6_indi_pane_t4_ParamLimits

0x87d8,	// (0x0004a2fc) vid6_indi_pane_t4

0x0003,

0xf92c,	// (0x00051450) vid6_indi_pane_t_ParamLimits

0xf92c,	// (0x00051450) vid6_indi_pane_t

0x87fc,	// (0x0004a320) wait_bar_pane_cp08

0x880b,	// (0x0004a32f) main_cset_text2_pane_t1_ParamLimits

0x880b,	// (0x0004a32f) main_cset_text2_pane_t1

0x8681,	// (0x0004a1a5) listscroll_gen_pane_cp06_t1_ParamLimits

0x8681,	// (0x0004a1a5) listscroll_gen_pane_cp06_t1

0xa6a2,	// (0x0004c1c6) main_cam6_set_pane

0xeae5,	// (0x00050609) bg_tb_trans_pane_cp06_ParamLimits

0xadec,	// (0x0004c910) cam4_indicators_pane_g1_ParamLimits

0xadfd,	// (0x0004c921) cam4_indicators_pane_g2_ParamLimits

0xf6a1,	// (0x000511c5) cam4_indicators_pane_g_ParamLimits

0xae1b,	// (0x0004c93f) cam4_indicators_pane_t1_ParamLimits

0xae3d,	// (0x0004c961) bg_tb_trans_pane_cp07_ParamLimits

0x6bc1,	// (0x000486e5) vid4_indicators_pane_g1_ParamLimits

0x6bce,	// (0x000486f2) vid4_indicators_pane_g2_ParamLimits

0x6bdb,	// (0x000486ff) vid4_indicators_pane_g3_ParamLimits

0x6be8,	// (0x0004870c) vid4_indicators_pane_g4_ParamLimits

0xf6b3,	// (0x000511d7) vid4_indicators_pane_g_ParamLimits

0x6c00,	// (0x00048724) vid4_indicators_pane_t1_ParamLimits

0xafc8,	// (0x0004caec) vid4_progress_pane_g1_ParamLimits

0xafd8,	// (0x0004cafc) vid4_progress_pane_g2_ParamLimits

0xafe8,	// (0x0004cb0c) vid4_progress_pane_g3_ParamLimits

0xadfd,	// (0x0004c921) vid4_progress_pane_g4_ParamLimits

0xf85d,	// (0x00051381) vid4_progress_pane_g_ParamLimits

0xaff4,	// (0x0004cb18) vid4_progress_pane_t1_ParamLimits

0xb009,	// (0x0004cb2d) vid4_progress_pane_t2_ParamLimits

0xb01f,	// (0x0004cb43) vid4_progress_pane_t3_ParamLimits

0xf868,	// (0x0005138c) vid4_progress_pane_t_ParamLimits

0xb034,	// (0x0004cb58) wait_bar_pane_cp07_ParamLimits

0x882b,	// (0x0004a34f) main_cam6_set_pane_g2_ParamLimits

0x882b,	// (0x0004a34f) main_cam6_set_pane_g2

0x884f,	// (0x0004a373) main_cset6_listscroll_pane_ParamLimits

0x884f,	// (0x0004a373) main_cset6_listscroll_pane

0x886b,	// (0x0004a38f) main_cset6_slider_pane_ParamLimits

0x886b,	// (0x0004a38f) main_cset6_slider_pane

0x8881,	// (0x0004a3a5) main_cset6_text2_pane_ParamLimits

0x8881,	// (0x0004a3a5) main_cset6_text2_pane

0x888f,	// (0x0004a3b3) main_cset6_text_pane

0x8897,	// (0x0004a3bb) main_cset_list_pane_copy1_ParamLimits

0x8897,	// (0x0004a3bb) main_cset_list_pane_copy1

0x88a7,	// (0x0004a3cb) scroll_pane_cp028_copy1

0x88b0,	// (0x0004a3d4) cset_list_set_pane_copy1

0x88c3,	// (0x0004a3e7) aid_position_infowindow_above_copy1

0x88cb,	// (0x0004a3ef) aid_position_infowindow_below_copy1

0x11f6,	// (0x00042d1a) cset_list_set_pane_g1_copy1

0xb0a3,	// (0x0004cbc7) cset_list_set_pane_g3_copy1_ParamLimits

0xb0a3,	// (0x0004cbc7) cset_list_set_pane_g3_copy1

0x1038,	// (0x00042b5c) cset_list_set_pane_t1_copy1_ParamLimits

0x1038,	// (0x00042b5c) cset_list_set_pane_t1_copy1

0xd8c7,	// (0x0004f3eb) list_highlight_pane_cp021_copy1_ParamLimits

0xd8c7,	// (0x0004f3eb) list_highlight_pane_cp021_copy1

0x88d3,	// (0x0004a3f7) cset6_slider_pane_ParamLimits

0x88d3,	// (0x0004a3f7) cset6_slider_pane

0x88ff,	// (0x0004a423) main_cset6_slider_pane_g1_ParamLimits

0x88ff,	// (0x0004a423) main_cset6_slider_pane_g1

0x8927,	// (0x0004a44b) main_cset6_slider_pane_g2_ParamLimits

0x8927,	// (0x0004a44b) main_cset6_slider_pane_g2

0x7403,	// (0x00048f27) main_cset6_slider_pane_g3_ParamLimits

0x7403,	// (0x00048f27) main_cset6_slider_pane_g3

0x7433,	// (0x00048f57) main_cset6_slider_pane_g4_ParamLimits

0x7433,	// (0x00048f57) main_cset6_slider_pane_g4

0x747b,	// (0x00048f9f) main_cset6_slider_pane_g5_ParamLimits

0x747b,	// (0x00048f9f) main_cset6_slider_pane_g5

0x7403,	// (0x00048f27) main_cset6_slider_pane_g7_ParamLimits

0x7403,	// (0x00048f27) main_cset6_slider_pane_g7

0x740f,	// (0x00048f33) main_cset6_slider_pane_g8_ParamLimits

0x740f,	// (0x00048f33) main_cset6_slider_pane_g8

0x741b,	// (0x00048f3f) main_cset6_slider_pane_g9_ParamLimits

0x741b,	// (0x00048f3f) main_cset6_slider_pane_g9

0x7427,	// (0x00048f4b) main_cset6_slider_pane_g10_ParamLimits

0x7427,	// (0x00048f4b) main_cset6_slider_pane_g10

0x7433,	// (0x00048f57) main_cset6_slider_pane_g11_ParamLimits

0x7433,	// (0x00048f57) main_cset6_slider_pane_g11

0x743f,	// (0x00048f63) main_cset6_slider_pane_g12_ParamLimits

0x743f,	// (0x00048f63) main_cset6_slider_pane_g12

0x744b,	// (0x00048f6f) main_cset6_slider_pane_g13_ParamLimits

0x744b,	// (0x00048f6f) main_cset6_slider_pane_g13

0x7457,	// (0x00048f7b) main_cset6_slider_pane_g14_ParamLimits

0x7457,	// (0x00048f7b) main_cset6_slider_pane_g14

0x894f,	// (0x0004a473) main_cset6_slider_pane_g15_ParamLimits

0x894f,	// (0x0004a473) main_cset6_slider_pane_g15

0x747b,	// (0x00048f9f) main_cset6_slider_pane_g16_ParamLimits

0x747b,	// (0x00048f9f) main_cset6_slider_pane_g16

0x7487,	// (0x00048fab) main_cset6_slider_pane_g17_ParamLimits

0x7487,	// (0x00048fab) main_cset6_slider_pane_g17

0x0011,

0xf935,	// (0x00051459) main_cset6_slider_pane_g_ParamLimits

0xf935,	// (0x00051459) main_cset6_slider_pane_g

0x8967,	// (0x0004a48b) main_cset6_slider_pane_t1_ParamLimits

0x8967,	// (0x0004a48b) main_cset6_slider_pane_t1

0x89a8,	// (0x0004a4cc) main_cset6_slider_pane_t2_ParamLimits

0x89a8,	// (0x0004a4cc) main_cset6_slider_pane_t2

0x89d3,	// (0x0004a4f7) main_cset6_slider_pane_t3_ParamLimits

0x89d3,	// (0x0004a4f7) main_cset6_slider_pane_t3

0x89fe,	// (0x0004a522) main_cset6_slider_pane_t4_ParamLimits

0x89fe,	// (0x0004a522) main_cset6_slider_pane_t4

0x8a29,	// (0x0004a54d) main_cset6_slider_pane_t5_ParamLimits

0x8a29,	// (0x0004a54d) main_cset6_slider_pane_t5

0x8a54,	// (0x0004a578) main_cset6_slider_pane_t7_ParamLimits

0x8a54,	// (0x0004a578) main_cset6_slider_pane_t7

0x8a8a,	// (0x0004a5ae) main_cset6_slider_pane_t8_ParamLimits

0x8a8a,	// (0x0004a5ae) main_cset6_slider_pane_t8

0x8aae,	// (0x0004a5d2) main_cset6_slider_pane_t9_ParamLimits

0x8aae,	// (0x0004a5d2) main_cset6_slider_pane_t9

0x8ad2,	// (0x0004a5f6) main_cset6_slider_pane_t10_ParamLimits

0x8ad2,	// (0x0004a5f6) main_cset6_slider_pane_t10

0x8af6,	// (0x0004a61a) main_cset6_slider_pane_t11_ParamLimits

0x8af6,	// (0x0004a61a) main_cset6_slider_pane_t11

0x8b1a,	// (0x0004a63e) main_cset6_slider_pane_t14_ParamLimits

0x8b1a,	// (0x0004a63e) main_cset6_slider_pane_t14

0x8b53,	// (0x0004a677) main_cset6_slider_pane_t15_ParamLimits

0x8b53,	// (0x0004a677) main_cset6_slider_pane_t15

0x000b,

0xf95a,	// (0x0005147e) main_cset6_slider_pane_t_ParamLimits

0xf95a,	// (0x0005147e) main_cset6_slider_pane_t

0x76ee,	// (0x00049212) cset_slider_pane_g1_copy1

0x76f7,	// (0x0004921b) cset_slider_pane_g2_copy1

0x7700,	// (0x00049224) cset_slider_pane_g3_copy1

0xa6a2,	// (0x0004c1c6) bg_popup_sub_pane_cp011_copy1

0x7a9f,	// (0x000495c3) main_cset_text_pane_g1_copy1

0x7aa7,	// (0x000495cb) main_cset_text_pane_t1_copy1

0x7ab5,	// (0x000495d9) main_cset_text_pane_t2_copy1

0x7ac3,	// (0x000495e7) main_cset_text_pane_t3_copy1

0x7ad1,	// (0x000495f5) main_cset_text_pane_t4_copy1

0x7adf,	// (0x00049603) main_cset_text_pane_t5_copy1

0x7aed,	// (0x00049611) main_cset_text_pane_t6_copy1

0x7afb,	// (0x0004961f) main_cset_text_pane_t7_copy1

0x880b,	// (0x0004a32f) main_cset_text2_pane_t1_copy1

0xa6a2,	// (0x0004c1c6) main_ncimui_pane

0x47e9,	// (0x0004630d) popup_query_ncimui_window_ParamLimits

0x47e9,	// (0x0004630d) popup_query_ncimui_window

0xab39,	// (0x0004c65d) field_cale_ev2_pane_g4_ParamLimits

0xab39,	// (0x0004c65d) field_cale_ev2_pane_g4

0x636c,	// (0x00047e90) cell_video_dialer_keypad_pane_g2_ParamLimits

0x636c,	// (0x00047e90) cell_video_dialer_keypad_pane_g2

0x0001,

0xf63f,	// (0x00051163) cell_video_dialer_keypad_pane_g_ParamLimits

0xf63f,	// (0x00051163) cell_video_dialer_keypad_pane_g

0x6384,	// (0x00047ea8) cell_video_dialer_keypad_pane_t1

0xa6a2,	// (0x0004c1c6) bg_popup_window_pane_cp012

0xcd63,	// (0x0004e887) heading_pane_cp06

0x8ca3,	// (0x0004a7c7) ncim_query_content_pane

0xa6a2,	// (0x0004c1c6) bg_popup_heading_pane_cp01

0x8cab,	// (0x0004a7cf) ncim_heading_pane_t1

0x8cb9,	// (0x0004a7dd) ncim_indicator_popup_pane

0x8ccb,	// (0x0004a7ef) ncim_query_button_pane

0x8ceb,	// (0x0004a80f) ncim_query_content_pane_t1

0x8cfd,	// (0x0004a821) ncim_query_content_pane_t2

0x0005,

0xf999,	// (0x000514bd) ncim_query_content_pane_t

0x8daf,	// (0x0004a8d3) ncim_query_list_pane

0x8dc1,	// (0x0004a8e5) ncim_query_popup_pane

0x8cb9,	// (0x0004a7dd) ncim_indicator_popup_pane_ParamLimits

0x8cd3,	// (0x0004a7f7) ncim_query_content_pane_g1_ParamLimits

0x8cd3,	// (0x0004a7f7) ncim_query_content_pane_g1

0x8ceb,	// (0x0004a80f) ncim_query_content_pane_t1_ParamLimits

0x8cfd,	// (0x0004a821) ncim_query_content_pane_t2_ParamLimits

0x8d0f,	// (0x0004a833) ncim_query_content_pane_t3_ParamLimits

0x8d0f,	// (0x0004a833) ncim_query_content_pane_t3

0x8d37,	// (0x0004a85b) ncim_query_content_pane_t4_ParamLimits

0x8d37,	// (0x0004a85b) ncim_query_content_pane_t4

0x8d5f,	// (0x0004a883) ncim_query_content_pane_t5_ParamLimits

0x8d5f,	// (0x0004a883) ncim_query_content_pane_t5

0x8d87,	// (0x0004a8ab) ncim_query_content_pane_t6_ParamLimits

0x8d87,	// (0x0004a8ab) ncim_query_content_pane_t6

0xf999,	// (0x000514bd) ncim_query_content_pane_t_ParamLimits

0x8daf,	// (0x0004a8d3) ncim_query_list_pane_ParamLimits

0x8dc1,	// (0x0004a8e5) ncim_query_popup_pane_ParamLimits

0x8dd5,	// (0x0004a8f9) wait_bar_pane_cp04

0xa6a2,	// (0x0004c1c6) input_focus_pane_cp011

0x8ddd,	// (0x0004a901) ncim_query_popup_pane_t1

0x8deb,	// (0x0004a90f) ncim_list_query_list_pane_ParamLimits

0x8deb,	// (0x0004a90f) ncim_list_query_list_pane

0xa6a2,	// (0x0004c1c6) bg_button_pane_cp027

0x8dfe,	// (0x0004a922) ncim_query_button_pane_g1

0xa6a2,	// (0x0004c1c6) list_highlight_pane_cp012

0x8e08,	// (0x0004a92c) ncim_list_query_list_pane_g1

0x8e10,	// (0x0004a934) ncim_list_query_list_pane_t1

0xae0c,	// (0x0004c930) cam4_indicators_pane_g3_ParamLimits

0xae0c,	// (0x0004c930) cam4_indicators_pane_g3

0x6bf4,	// (0x00048718) vid4_indicators_pane_g5_ParamLimits

0x6bf4,	// (0x00048718) vid4_indicators_pane_g5

0xae0c,	// (0x0004c930) vid4_progress_pane_g5_ParamLimits

0xae0c,	// (0x0004c930) vid4_progress_pane_g5

0x8bbc,	// (0x0004a6e0) main_ncimui_pane_g1

0x8c12,	// (0x0004a736) ncimui_group_query_pane_ParamLimits

0x8c12,	// (0x0004a736) ncimui_group_query_pane

0x8c4e,	// (0x0004a772) ncimui_list_pane_ParamLimits

0x8c4e,	// (0x0004a772) ncimui_list_pane

0x8c6f,	// (0x0004a793) ncimui_text_pane_ParamLimits

0x8c6f,	// (0x0004a793) ncimui_text_pane

0x8e1e,	// (0x0004a942) ncimui_text_pane_t1_ParamLimits

0x8e1e,	// (0x0004a942) ncimui_text_pane_t1

0x8e3c,	// (0x0004a960) ncimui_list_single_graphic_pane_ParamLimits

0x8e3c,	// (0x0004a960) ncimui_list_single_graphic_pane

0x8e4c,	// (0x0004a970) ncimui_query_pane_ParamLimits

0x8e4c,	// (0x0004a970) ncimui_query_pane

0xa6a2,	// (0x0004c1c6) list_highlight_pane_cp013

0x8e5f,	// (0x0004a983) ncim_list_query_list_pane_t1_copy1

0x8e08,	// (0x0004a92c) ncim_list_single_graphic_pane_g1

0x8e6d,	// (0x0004a991) ncim_query_button_pane_cp01

0x8e79,	// (0x0004a99d) ncim_query_entry_pane_ParamLimits

0x8e79,	// (0x0004a99d) ncim_query_entry_pane

0x8e8c,	// (0x0004a9b0) ncimui_query_pane_g1

0x8e98,	// (0x0004a9bc) ncimui_query_pane_t1_ParamLimits

0x8e98,	// (0x0004a9bc) ncimui_query_pane_t1

0xd8c7,	// (0x0004f3eb) input_focus_pane_cp012

0x8eb1,	// (0x0004a9d5) ncim_query_entry_pane_t1

0xc558,	// (0x0004e07c) main_im_pane_ParamLimits

0xd8c7,	// (0x0004f3eb) main_mobtv_pane_ParamLimits

0xd8c7,	// (0x0004f3eb) main_mobtv_pane

0x741b,	// (0x00048f3f) main_cset6_slider_pane_g18_ParamLimits

0x741b,	// (0x00048f3f) main_cset6_slider_pane_g18

0x744b,	// (0x00048f6f) main_cset6_slider_pane_g19_ParamLimits

0x744b,	// (0x00048f6f) main_cset6_slider_pane_g19

0x8ec3,	// (0x0004a9e7) bg_main_mobtv_pane_ParamLimits

0x8ec3,	// (0x0004a9e7) bg_main_mobtv_pane

0x8ed1,	// (0x0004a9f5) main_mobtv_info_pane

0x8eda,	// (0x0004a9fe) main_mobtv_loading_pane_ParamLimits

0x8eda,	// (0x0004a9fe) main_mobtv_loading_pane

0x8ee7,	// (0x0004aa0b) main_mobtv_pg_channel_list_pane

0x8ef1,	// (0x0004aa15) main_mobtv_pg_hdr_pane

0x8efa,	// (0x0004aa1e) main_mobtv_programe_curr_pane_ParamLimits

0x8efa,	// (0x0004aa1e) main_mobtv_programe_curr_pane

0x8f07,	// (0x0004aa2b) main_mobtv_programe_next_pane_ParamLimits

0x8f07,	// (0x0004aa2b) main_mobtv_programe_next_pane

0x8f14,	// (0x0004aa38) popup_mobtv_noti_window

0xe87e,	// (0x000503a2) main_tv_pg_hdr_pane_g1

0x8f1c,	// (0x0004aa40) main_tv_pg_hdr_pane_g2

0x8f24,	// (0x0004aa48) main_tv_pg_hdr_pane_g3

0x8f2c,	// (0x0004aa50) main_tv_pg_hdr_pane_g4

0x8f34,	// (0x0004aa58) main_tv_pg_hdr_pane_g5

0x8f3e,	// (0x0004aa62) main_tv_pg_hdr_pane_g6

0x8f48,	// (0x0004aa6c) main_tv_pg_hdr_pane_g7

0x8f52,	// (0x0004aa76) main_tv_pg_hdr_pane_g8

0x8f5c,	// (0x0004aa80) main_tv_pg_hdr_pane_g9

0x8f66,	// (0x0004aa8a) main_tv_pg_hdr_pane_g10

0x8f70,	// (0x0004aa94) main_tv_pg_hdr_pane_g11

0x000a,

0xf9a6,	// (0x000514ca) main_tv_pg_hdr_pane_g

0x8f7a,	// (0x0004aa9e) main_tv_pg_hdr_pane_t1

0x8f88,	// (0x0004aaac) main_tv_pg_hdr_pane_t2

0x8f96,	// (0x0004aaba) main_tv_pg_hdr_pane_t3

0x8fa6,	// (0x0004aaca) main_tv_pg_hdr_pane_t4

0x8fb6,	// (0x0004aada) main_tv_pg_hdr_pane_t5

0x0004,

0xf9bd,	// (0x000514e1) main_tv_pg_hdr_pane_t

0x8fc6,	// (0x0004aaea) single_mobtv_pg_channel_pane_ParamLimits

0x8fc6,	// (0x0004aaea) single_mobtv_pg_channel_pane

0x8fd8,	// (0x0004aafc) single_mobtv_pg_channel_table_pane

0x8fe1,	// (0x0004ab05) single_mobtv_pg_channel_thumb_pane

0x8fea,	// (0x0004ab0e) single_tv_pg_channel_pane_g1

0x8ff3,	// (0x0004ab17) single_tv_pg_channel_pane_g2

0x0001,

0xf9c8,	// (0x000514ec) single_tv_pg_channel_pane_g

0xeae5,	// (0x00050609) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xeae5,	// (0x00050609) bg_single_mobtv_pg_channel_thumb_pane

0x8ffc,	// (0x0004ab20) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0x8ffc,	// (0x0004ab20) single_mobtv_pg_channel_thumb_pane_g1

0x900a,	// (0x0004ab2e) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0x900a,	// (0x0004ab2e) single_mobtv_pg_channel_thumb_pane_g2

0x9016,	// (0x0004ab3a) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0x9016,	// (0x0004ab3a) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xf9cd,	// (0x000514f1) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xf9cd,	// (0x000514f1) single_mobtv_pg_channel_thumb_pane_g

0x9022,	// (0x0004ab46) single_mobtv_pg_channel_thumb_pane_t1

0x9030,	// (0x0004ab54) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xf9d4,	// (0x000514f8) single_mobtv_pg_channel_thumb_pane_t

0xe87e,	// (0x000503a2) bg_single_mobtv_pg_channel_table_pane_g1

0xe87e,	// (0x000503a2) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0x0561,	// (0x00042085) bg_single_mobtv_pg_channel_table_pane_g

0x903e,	// (0x0004ab62) single_mobtv_pg_channel_table_pane_t1

0x904c,	// (0x0004ab70) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xf9d9,	// (0x000514fd) single_mobtv_pg_channel_table_pane_t

0x9062,	// (0x0004ab86) main_mobtv_info_pane_g1_ParamLimits

0x9062,	// (0x0004ab86) main_mobtv_info_pane_g1

0x9080,	// (0x0004aba4) main_mobtv_info_pane_t1_ParamLimits

0x9080,	// (0x0004aba4) main_mobtv_info_pane_t1

0x90f8,	// (0x0004ac1c) main_mobtv_info_pane_t2_ParamLimits

0x90f8,	// (0x0004ac1c) main_mobtv_info_pane_t2

0x0002,

0xf9e3,	// (0x00051507) main_mobtv_info_pane_t_ParamLimits

0xf9e3,	// (0x00051507) main_mobtv_info_pane_t

0x9187,	// (0x0004acab) wait_bar_pane_cp05

0x9199,	// (0x0004acbd) main_mobtv_loading_pane_g1_ParamLimits

0x9199,	// (0x0004acbd) main_mobtv_loading_pane_g1

0x91ac,	// (0x0004acd0) main_mobtv_loading_pane_g2_ParamLimits

0x91ac,	// (0x0004acd0) main_mobtv_loading_pane_g2

0x91b8,	// (0x0004acdc) main_mobtv_loading_pane_g3_ParamLimits

0x91b8,	// (0x0004acdc) main_mobtv_loading_pane_g3

0x0002,

0xf9ea,	// (0x0005150e) main_mobtv_loading_pane_g_ParamLimits

0xf9ea,	// (0x0005150e) main_mobtv_loading_pane_g

0x91cb,	// (0x0004acef) main_mobtv_loading_pane_t1_ParamLimits

0x91cb,	// (0x0004acef) main_mobtv_loading_pane_t1

0x91e3,	// (0x0004ad07) main_mobtv_loading_pane_t2_ParamLimits

0x91e3,	// (0x0004ad07) main_mobtv_loading_pane_t2

0x0001,

0xf9f1,	// (0x00051515) main_mobtv_loading_pane_t_ParamLimits

0xf9f1,	// (0x00051515) main_mobtv_loading_pane_t

0x9207,	// (0x0004ad2b) wait_bar_pane_cp06_ParamLimits

0x9207,	// (0x0004ad2b) wait_bar_pane_cp06

0x9216,	// (0x0004ad3a) main_mobtv_programe_curr_pane_t1

0x9224,	// (0x0004ad48) main_mobtv_programe_curr_pane_t2

0x0001,

0xf9f6,	// (0x0005151a) main_mobtv_programe_curr_pane_t

0x9232,	// (0x0004ad56) main_mobtv_programe_next_pane_t1

0x9240,	// (0x0004ad64) main_mobtv_programe_next_pane_t2

0x924e,	// (0x0004ad72) main_mobtv_programe_next_pane_t3

0x0002,

0xf9fb,	// (0x0005151f) main_mobtv_programe_next_pane_t

0xa6a2,	// (0x0004c1c6) bg_popup_mobtv_noti_window_pane

0x925c,	// (0x0004ad80) popup_mobtv_noti_window_g1

0x9264,	// (0x0004ad88) popup_mobtv_noti_window_t1

0x9272,	// (0x0004ad96) popup_mobtv_noti_window_t2

0x0001,

0xfa02,	// (0x00051526) popup_mobtv_noti_window_t

0xe87e,	// (0x000503a2) bg_popup_mobtv_noti_window_pane_g1

0xa6a2,	// (0x0004c1c6) sc_clock_pane

0xa6a2,	// (0x0004c1c6) main_fs_bigclock_pane

0x82c0,	// (0x00049de4) blid2_tripm_pane_t4_ParamLimits

0x82c0,	// (0x00049de4) blid2_tripm_pane_t4

0x9280,	// (0x0004ada4) sc_clock_pane_g1_ParamLimits

0x9280,	// (0x0004ada4) sc_clock_pane_g1

0x9292,	// (0x0004adb6) sc_clock_pane_t1_ParamLimits

0x9292,	// (0x0004adb6) sc_clock_pane_t1

0x92b4,	// (0x0004add8) sc_clock_pane_t2_ParamLimits

0x92b4,	// (0x0004add8) sc_clock_pane_t2

0x92cc,	// (0x0004adf0) sc_clock_pane_t3_ParamLimits

0x92cc,	// (0x0004adf0) sc_clock_pane_t3

0x0004,

0xfa07,	// (0x0005152b) sc_clock_pane_t_ParamLimits

0xfa07,	// (0x0005152b) sc_clock_pane_t

0x9f00,	// (0x0004ba24) main_fs_bigclock_indicator_pane_ParamLimits

0x9f00,	// (0x0004ba24) main_fs_bigclock_indicator_pane

0xeab5,	// (0x000505d9) main_fs_bigclock_pane_g1_ParamLimits

0xeab5,	// (0x000505d9) main_fs_bigclock_pane_g1

0x9f0c,	// (0x0004ba30) main_fs_bigclock_pane_t1_ParamLimits

0x9f0c,	// (0x0004ba30) main_fs_bigclock_pane_t1

0x9f1e,	// (0x0004ba42) main_fs_bigclock_pane_t2_ParamLimits

0x9f1e,	// (0x0004ba42) main_fs_bigclock_pane_t2

0x9f30,	// (0x0004ba54) main_fs_bigclock_pane_t3_ParamLimits

0x9f30,	// (0x0004ba54) main_fs_bigclock_pane_t3

0x0002,

0xfbfd,	// (0x00051721) main_fs_bigclock_pane_t_ParamLimits

0xfbfd,	// (0x00051721) main_fs_bigclock_pane_t

0xb9da,	// (0x0004d4fe) main_fs_bigclock_indicator_pane_g1

0x8cdf,	// (0x0004a803) ncim_query_content_pane_g2_ParamLimits

0x8cdf,	// (0x0004a803) ncim_query_content_pane_g2

0x0001,

0xf994,	// (0x000514b8) ncim_query_content_pane_g_ParamLimits

0xf994,	// (0x000514b8) ncim_query_content_pane_g

0x92e3,	// (0x0004ae07) sc_clock_pane_t4_ParamLimits

0x92e3,	// (0x0004ae07) sc_clock_pane_t4

0xd8c7,	// (0x0004f3eb) main_radioblah_pane

0x6947,	// (0x0004846b) cell_call4_button_pane_t1_copy1_ParamLimits

0x6947,	// (0x0004846b) cell_call4_button_pane_t1_copy1

0x8bc4,	// (0x0004a6e8) main_ncimui_pane_t1_ParamLimits

0x8bc4,	// (0x0004a6e8) main_ncimui_pane_t1

0x8bde,	// (0x0004a702) main_ncimui_pane_t2_ParamLimits

0x8bde,	// (0x0004a702) main_ncimui_pane_t2

0x0002,

0xf98d,	// (0x000514b1) main_ncimui_pane_t_ParamLimits

0xf98d,	// (0x000514b1) main_ncimui_pane_t

0x949c,	// (0x0004afc0) main_radioblah_anim_pane_ParamLimits

0x949c,	// (0x0004afc0) main_radioblah_anim_pane

0x94ad,	// (0x0004afd1) main_radioblah_info_pane_ParamLimits

0x94ad,	// (0x0004afd1) main_radioblah_info_pane

0x94d3,	// (0x0004aff7) main_radioblah_pane_t1_ParamLimits

0x94d3,	// (0x0004aff7) main_radioblah_pane_t1

0x94ef,	// (0x0004b013) main_radioblah_pane_t2_ParamLimits

0x94ef,	// (0x0004b013) main_radioblah_pane_t2

0x0003,

0xfa28,	// (0x0005154c) main_radioblah_pane_t_ParamLimits

0xfa28,	// (0x0005154c) main_radioblah_pane_t

0x9537,	// (0x0004b05b) main_radioblah_rocker_ctrl_pane_ParamLimits

0x9537,	// (0x0004b05b) main_radioblah_rocker_ctrl_pane

0x958f,	// (0x0004b0b3) main_radioblah_info_pane_t1_ParamLimits

0x958f,	// (0x0004b0b3) main_radioblah_info_pane_t1

0x95c9,	// (0x0004b0ed) main_radioblah_info_pane_t2_ParamLimits

0x95c9,	// (0x0004b0ed) main_radioblah_info_pane_t2

0x0003,

0xfa31,	// (0x00051555) main_radioblah_info_pane_t_ParamLimits

0xfa31,	// (0x00051555) main_radioblah_info_pane_t

0xe87e,	// (0x000503a2) main_radioblah_rocker_ctrl_pane_g1

0x967b,	// (0x0004b19f) main_radioblah_rocker_ctrl_pane_g2

0x9683,	// (0x0004b1a7) main_radioblah_rocker_ctrl_pane_g3

0x968b,	// (0x0004b1af) main_radioblah_rocker_ctrl_pane_g4

0x9693,	// (0x0004b1b7) main_radioblah_rocker_ctrl_pane_g5

0x969b,	// (0x0004b1bf) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfa3a,	// (0x0005155e) main_radioblah_rocker_ctrl_pane_g

0x880b,	// (0x0004a32f) main_cset_text2_pane_t1_copy1_ParamLimits

0xaddc,	// (0x0004c900) cam4_image_uncrop_qvga_pane

0xae35,	// (0x0004c959) vid4_image_uncrop_qcif_pane

0xb095,	// (0x0004cbb9) cam6_image_uncrop_qvga_pane_ParamLimits

0xb095,	// (0x0004cbb9) cam6_image_uncrop_qvga_pane

0x86c7,	// (0x0004a1eb) vid6_image_uncrop_qcif_pane_ParamLimits

0x86c7,	// (0x0004a1eb) vid6_image_uncrop_qcif_pane

0xa6a2,	// (0x0004c1c6) bg_popup_preview_window_pane_cp03

0x8b8c,	// (0x0004a6b0) list_cset_text2_pane

0x8b94,	// (0x0004a6b8) main_cset6_text2_pane_g1

0x8b9c,	// (0x0004a6c0) main_cset6_text2_pane_t1

0x96a3,	// (0x0004b1c7) list_cset_text2_pane_t1_ParamLimits

0x96a3,	// (0x0004b1c7) list_cset_text2_pane_t1

0xd8c7,	// (0x0004f3eb) main_radioblah_pane_ParamLimits

0x9173,	// (0x0004ac97) main_mobtv_info_pane_t3_ParamLimits

0x9173,	// (0x0004ac97) main_mobtv_info_pane_t3

0x94c1,	// (0x0004afe5) main_radioblah_pane_g1

0x955f,	// (0x0004b083) main_radioblah_info_pane_g1

0x9620,	// (0x0004b144) main_radioblah_info_pane_t3_ParamLimits

0x9620,	// (0x0004b144) main_radioblah_info_pane_t3

0x3238,	// (0x00044d5c) highlight_cell_cale_month_pane_ParamLimits

0x3238,	// (0x00044d5c) highlight_cell_cale_month_pane

0xa6a2,	// (0x0004c1c6) main_phob_fisheye_pane

0xebc7,	// (0x000506eb) scroll_pane_cp0031_ParamLimits

0xebc7,	// (0x000506eb) scroll_pane_cp0031

0x87fc,	// (0x0004a320) wait_bar_pane_cp08_ParamLimits

0x88b0,	// (0x0004a3d4) cset_list_set_pane_copy1_ParamLimits

0x96c0,	// (0x0004b1e4) highlight_cell_cale_month_pane_g1

0x96c8,	// (0x0004b1ec) highlight_cell_cale_month_pane_t1

0x7f06,	// (0x00049a2a) list_gen_pane_cp01

0x734f,	// (0x00048e73) scroll_pane_01

0x96d6,	// (0x0004b1fa) list_single_double_fisheye_pane

0x11fe,	// (0x00042d22) list_double_fisheye_pane_g1_ParamLimits

0x11fe,	// (0x00042d22) list_double_fisheye_pane_g1

0x120a,	// (0x00042d2e) list_double_fisheye_pane_g2_ParamLimits

0x120a,	// (0x00042d2e) list_double_fisheye_pane_g2

0x96df,	// (0x0004b203) list_double_fisheye_pane_g3_ParamLimits

0x96df,	// (0x0004b203) list_double_fisheye_pane_g3

0x0004,

0xfa47,	// (0x0005156b) list_double_fisheye_pane_g_ParamLimits

0xfa47,	// (0x0005156b) list_double_fisheye_pane_g

0x123b,	// (0x00042d5f) list_double_fisheye_pane_t1_ParamLimits

0x123b,	// (0x00042d5f) list_double_fisheye_pane_t1

0x1256,	// (0x00042d7a) list_double_fisheye_pane_t2_ParamLimits

0x1256,	// (0x00042d7a) list_double_fisheye_pane_t2

0x0001,

0xfa52,	// (0x00051576) list_double_fisheye_pane_t_ParamLimits

0xfa52,	// (0x00051576) list_double_fisheye_pane_t

0xa6a2,	// (0x0004c1c6) main_call5_pane

0x930e,	// (0x0004ae32) sc_swipe_pane_ParamLimits

0x930e,	// (0x0004ae32) sc_swipe_pane

0x96fe,	// (0x0004b222) call5_image_pane_ParamLimits

0x96fe,	// (0x0004b222) call5_image_pane

0x971b,	// (0x0004b23f) call5_swipe_1_pane_ParamLimits

0x971b,	// (0x0004b23f) call5_swipe_1_pane

0x972e,	// (0x0004b252) call5_swipe_2_pane_ParamLimits

0x972e,	// (0x0004b252) call5_swipe_2_pane

0x9759,	// (0x0004b27d) popup_call5_audio_first_window_ParamLimits

0x9759,	// (0x0004b27d) popup_call5_audio_first_window

0xeae5,	// (0x00050609) call5_swipe_1_pane_g1_ParamLimits

0xeae5,	// (0x00050609) call5_swipe_1_pane_g1

0x976a,	// (0x0004b28e) call5_swipe_1_pane_g2_ParamLimits

0x976a,	// (0x0004b28e) call5_swipe_1_pane_g2

0x0001,

0xfa57,	// (0x0005157b) call5_swipe_1_pane_g_ParamLimits

0xfa57,	// (0x0005157b) call5_swipe_1_pane_g

0x9776,	// (0x0004b29a) call5_swipe_1_pane_t1_ParamLimits

0x9776,	// (0x0004b29a) call5_swipe_1_pane_t1

0xeae5,	// (0x00050609) call5_swipe_2_pane_g1_ParamLimits

0xeae5,	// (0x00050609) call5_swipe_2_pane_g1

0x978b,	// (0x0004b2af) call5_swipe_2_pane_g2_ParamLimits

0x978b,	// (0x0004b2af) call5_swipe_2_pane_g2

0x0001,

0xfa5c,	// (0x00051580) call5_swipe_2_pane_g_ParamLimits

0xfa5c,	// (0x00051580) call5_swipe_2_pane_g

0x9797,	// (0x0004b2bb) call5_swipe_2_pane_t1_ParamLimits

0x9797,	// (0x0004b2bb) call5_swipe_2_pane_t1

0x97ac,	// (0x0004b2d0) sc_swipe_pane_g1_ParamLimits

0x97ac,	// (0x0004b2d0) sc_swipe_pane_g1

0x97b9,	// (0x0004b2dd) sc_swipe_pane_g2_ParamLimits

0x97b9,	// (0x0004b2dd) sc_swipe_pane_g2

0x0001,

0xfa61,	// (0x00051585) sc_swipe_pane_g_ParamLimits

0xfa61,	// (0x00051585) sc_swipe_pane_g

0x97c5,	// (0x0004b2e9) sc_swipe_pane_t1_ParamLimits

0x97c5,	// (0x0004b2e9) sc_swipe_pane_t1

0xa6a2,	// (0x0004c1c6) main_cmail_launcher_pane

0x97da,	// (0x0004b2fe) aid_size_cell_cmail_l_ParamLimits

0x97da,	// (0x0004b2fe) aid_size_cell_cmail_l

0x97f4,	// (0x0004b318) grid_cmail_l_pane_ParamLimits

0x97f4,	// (0x0004b318) grid_cmail_l_pane

0x980f,	// (0x0004b333) cell_cmail_l_pane_ParamLimits

0x980f,	// (0x0004b333) cell_cmail_l_pane

0x9835,	// (0x0004b359) cell_cmail_l_pane_g1_ParamLimits

0x9835,	// (0x0004b359) cell_cmail_l_pane_g1

0x9841,	// (0x0004b365) cell_cmail_l_pane_t1_ParamLimits

0x9841,	// (0x0004b365) cell_cmail_l_pane_t1

0x9857,	// (0x0004b37b) cell_cmail_l_pane_t2_ParamLimits

0x9857,	// (0x0004b37b) cell_cmail_l_pane_t2

0x0001,

0xfa66,	// (0x0005158a) cell_cmail_l_pane_t_ParamLimits

0xfa66,	// (0x0005158a) cell_cmail_l_pane_t

0xd8c7,	// (0x0004f3eb) grid_highlight_pane_cp018_ParamLimits

0xd8c7,	// (0x0004f3eb) grid_highlight_pane_cp018

0x191b,	// (0x0004343f) main2_pane_ParamLimits

0x191b,	// (0x0004343f) main2_pane

0xc603,	// (0x0004e127) popup_sp_fs_action_menu_bg_pane_g1

0xc60b,	// (0x0004e12f) popup_sp_fs_action_menu_bg_pane_g2

0xc613,	// (0x0004e137) popup_sp_fs_action_menu_bg_pane_g3

0xc61b,	// (0x0004e13f) popup_sp_fs_action_menu_bg_pane_g4

0xc623,	// (0x0004e147) popup_sp_fs_action_menu_bg_pane_g5

0xc62b,	// (0x0004e14f) popup_sp_fs_action_menu_bg_pane_g6

0xc633,	// (0x0004e157) popup_sp_fs_action_menu_bg_pane_g7

0xc63b,	// (0x0004e15f) popup_sp_fs_action_menu_bg_pane_g8

0xc643,	// (0x0004e167) popup_sp_fs_action_menu_bg_pane_g9

0xc64b,	// (0x0004e16f) popup_sp_fs_action_menu_bg_pane_g10

0xc64b,	// (0x0004e16f) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0x000d,	// (0x00041b31) popup_sp_fs_action_menu_bg_pane_g

0xa80e,	// (0x0004c332) list_medium_line_x2_t3_g3_g1_ParamLimits

0xa80e,	// (0x0004c332) list_medium_line_x2_t3_g3_g1

0xa81a,	// (0x0004c33e) list_medium_line_x2_t3_g3_g2_ParamLimits

0xa81a,	// (0x0004c33e) list_medium_line_x2_t3_g3_g2

0xa826,	// (0x0004c34a) list_medium_line_x2_t3_g3_g3_ParamLimits

0xa826,	// (0x0004c34a) list_medium_line_x2_t3_g3_g3

0x0002,

0xf237,	// (0x00050d5b) list_medium_line_x2_t3_g3_g_ParamLimits

0xf237,	// (0x00050d5b) list_medium_line_x2_t3_g3_g

0xa832,	// (0x0004c356) list_medium_line_x2_t3_g3_t1_ParamLimits

0xa832,	// (0x0004c356) list_medium_line_x2_t3_g3_t1

0x0dd6,	// (0x000428fa) list_medium_line_x2_t3_g3_t2_ParamLimits

0x0dd6,	// (0x000428fa) list_medium_line_x2_t3_g3_t2

0xa847,	// (0x0004c36b) list_medium_line_x2_t3_g3_t3_ParamLimits

0xa847,	// (0x0004c36b) list_medium_line_x2_t3_g3_t3

0x0002,

0xf23e,	// (0x00050d62) list_medium_line_x2_t3_g3_t_ParamLimits

0xf23e,	// (0x00050d62) list_medium_line_x2_t3_g3_t

0xa80e,	// (0x0004c332) list_medium_line_x2_t3_g2_g1_ParamLimits

0xa80e,	// (0x0004c332) list_medium_line_x2_t3_g2_g1

0xa826,	// (0x0004c34a) list_medium_line_x2_t3_g2_g2_ParamLimits

0xa826,	// (0x0004c34a) list_medium_line_x2_t3_g2_g2

0x0001,

0xf245,	// (0x00050d69) list_medium_line_x2_t3_g2_g_ParamLimits

0xf245,	// (0x00050d69) list_medium_line_x2_t3_g2_g

0xa85c,	// (0x0004c380) list_medium_line_x2_t3_g2_t1_ParamLimits

0xa85c,	// (0x0004c380) list_medium_line_x2_t3_g2_t1

0xa872,	// (0x0004c396) list_medium_line_x2_t3_g2_t2_ParamLimits

0xa872,	// (0x0004c396) list_medium_line_x2_t3_g2_t2

0xa847,	// (0x0004c36b) list_medium_line_x2_t3_g2_t3_ParamLimits

0xa847,	// (0x0004c36b) list_medium_line_x2_t3_g2_t3

0x0002,

0xf24a,	// (0x00050d6e) list_medium_line_x2_t3_g2_t_ParamLimits

0xf24a,	// (0x00050d6e) list_medium_line_x2_t3_g2_t

0xa80e,	// (0x0004c332) list_medium_line_x2_t4_g4_g1_ParamLimits

0xa80e,	// (0x0004c332) list_medium_line_x2_t4_g4_g1

0xa884,	// (0x0004c3a8) list_medium_line_x2_t4_g4_g2_ParamLimits

0xa884,	// (0x0004c3a8) list_medium_line_x2_t4_g4_g2

0xa81a,	// (0x0004c33e) list_medium_line_x2_t4_g4_g3_ParamLimits

0xa81a,	// (0x0004c33e) list_medium_line_x2_t4_g4_g3

0xa890,	// (0x0004c3b4) list_medium_line_x2_t4_g4_g4_ParamLimits

0xa890,	// (0x0004c3b4) list_medium_line_x2_t4_g4_g4

0x0003,

0xf251,	// (0x00050d75) list_medium_line_x2_t4_g4_g_ParamLimits

0xf251,	// (0x00050d75) list_medium_line_x2_t4_g4_g

0x0dea,	// (0x0004290e) list_medium_line_x2_t4_g4_t1_ParamLimits

0x0dea,	// (0x0004290e) list_medium_line_x2_t4_g4_t1

0x0e04,	// (0x00042928) list_medium_line_x2_t4_g4_t2_ParamLimits

0x0e04,	// (0x00042928) list_medium_line_x2_t4_g4_t2

0x0e19,	// (0x0004293d) list_medium_line_x2_t4_g4_t3_ParamLimits

0x0e19,	// (0x0004293d) list_medium_line_x2_t4_g4_t3

0xa89c,	// (0x0004c3c0) list_medium_line_x2_t4_g4_t4_ParamLimits

0xa89c,	// (0x0004c3c0) list_medium_line_x2_t4_g4_t4

0x0003,

0xf25a,	// (0x00050d7e) list_medium_line_x2_t4_g4_t_ParamLimits

0xf25a,	// (0x00050d7e) list_medium_line_x2_t4_g4_t

0xa80e,	// (0x0004c332) list_medium_line_x2_t2_g4_g1_ParamLimits

0xa80e,	// (0x0004c332) list_medium_line_x2_t2_g4_g1

0xa884,	// (0x0004c3a8) list_medium_line_x2_t2_g4_g2_ParamLimits

0xa884,	// (0x0004c3a8) list_medium_line_x2_t2_g4_g2

0xa81a,	// (0x0004c33e) list_medium_line_x2_t2_g4_g3_ParamLimits

0xa81a,	// (0x0004c33e) list_medium_line_x2_t2_g4_g3

0xa826,	// (0x0004c34a) list_medium_line_x2_t2_g4_g4_ParamLimits

0xa826,	// (0x0004c34a) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2a9,	// (0x00050dcd) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2a9,	// (0x00050dcd) list_medium_line_x2_t2_g4_g

0xa8ae,	// (0x0004c3d2) list_medium_line_x2_t2_g4_t1_ParamLimits

0xa8ae,	// (0x0004c3d2) list_medium_line_x2_t2_g4_t1

0xa847,	// (0x0004c36b) list_medium_line_x2_t2_g4_t2_ParamLimits

0xa847,	// (0x0004c36b) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2b2,	// (0x00050dd6) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2b2,	// (0x00050dd6) list_medium_line_x2_t2_g4_t

0xa80e,	// (0x0004c332) list_medium_line_x2_t2_g3_g1_ParamLimits

0xa80e,	// (0x0004c332) list_medium_line_x2_t2_g3_g1

0xa81a,	// (0x0004c33e) list_medium_line_x2_t2_g3_g2_ParamLimits

0xa81a,	// (0x0004c33e) list_medium_line_x2_t2_g3_g2

0xa826,	// (0x0004c34a) list_medium_line_x2_t2_g3_g3_ParamLimits

0xa826,	// (0x0004c34a) list_medium_line_x2_t2_g3_g3

0x0002,

0xf237,	// (0x00050d5b) list_medium_line_x2_t2_g3_g_ParamLimits

0xf237,	// (0x00050d5b) list_medium_line_x2_t2_g3_g

0xa8c3,	// (0x0004c3e7) list_medium_line_x2_t2_g3_t1_ParamLimits

0xa8c3,	// (0x0004c3e7) list_medium_line_x2_t2_g3_t1

0xa847,	// (0x0004c36b) list_medium_line_x2_t2_g3_t2_ParamLimits

0xa847,	// (0x0004c36b) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2b7,	// (0x00050ddb) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2b7,	// (0x00050ddb) list_medium_line_x2_t2_g3_t

0x341e,	// (0x00044f42) main_sp_fs_list_pane_ParamLimits

0x341e,	// (0x00044f42) main_sp_fs_list_pane

0x342a,	// (0x00044f4e) sp_fs_scroll_pane_ParamLimits

0x342a,	// (0x00044f4e) sp_fs_scroll_pane

0x0e2e,	// (0x00042952) list_medium_line_x2_t3_t1

0x0e3e,	// (0x00042962) list_medium_line_x2_t3_t2

0xa906,	// (0x0004c42a) list_medium_line_x2_t3_t3

0x0002,

0xf2d7,	// (0x00050dfb) list_medium_line_x2_t3_t

0x0e4c,	// (0x00042970) list_medium_line_x3_t4_t1

0x0e5c,	// (0x00042980) list_medium_line_x3_t4_t2

0xa914,	// (0x0004c438) list_medium_line_x3_t4_t3

0xa906,	// (0x0004c42a) list_medium_line_x3_t4_t4

0x0003,

0xf2de,	// (0x00050e02) list_medium_line_x3_t4_t

0x0e6a,	// (0x0004298e) list_medium_line_x4_t5_t1

0x0e7a,	// (0x0004299e) list_medium_line_x4_t5_t2

0xa914,	// (0x0004c438) list_medium_line_x4_t5_t3

0xa922,	// (0x0004c446) list_medium_line_x4_t5_t4

0xa906,	// (0x0004c42a) list_medium_line_x4_t5_t5

0x0004,

0xf2e7,	// (0x00050e0b) list_medium_line_x4_t5_t

0xa80e,	// (0x0004c332) list_medium_line_t4_g4_g1_ParamLimits

0xa80e,	// (0x0004c332) list_medium_line_t4_g4_g1

0xa890,	// (0x0004c3b4) list_medium_line_t4_g4_g2_ParamLimits

0xa890,	// (0x0004c3b4) list_medium_line_t4_g4_g2

0xa930,	// (0x0004c454) list_medium_line_t4_g4_g3_ParamLimits

0xa930,	// (0x0004c454) list_medium_line_t4_g4_g3

0xa826,	// (0x0004c34a) list_medium_line_t4_g4_g4_ParamLimits

0xa826,	// (0x0004c34a) list_medium_line_t4_g4_g4

0x0003,

0xf2f2,	// (0x00050e16) list_medium_line_t4_g4_g_ParamLimits

0xf2f2,	// (0x00050e16) list_medium_line_t4_g4_g

0xa93c,	// (0x0004c460) list_medium_line_t4_g4_t1_ParamLimits

0xa93c,	// (0x0004c460) list_medium_line_t4_g4_t1

0xa951,	// (0x0004c475) list_medium_line_t4_g4_t2_ParamLimits

0xa951,	// (0x0004c475) list_medium_line_t4_g4_t2

0xa966,	// (0x0004c48a) list_medium_line_t4_g4_t3_ParamLimits

0xa966,	// (0x0004c48a) list_medium_line_t4_g4_t3

0xa847,	// (0x0004c36b) list_medium_line_t4_g4_t4_ParamLimits

0xa847,	// (0x0004c36b) list_medium_line_t4_g4_t4

0x0003,

0xf2fb,	// (0x00050e1f) list_medium_line_t4_g4_t_ParamLimits

0xf2fb,	// (0x00050e1f) list_medium_line_t4_g4_t

0x34d4,	// (0x00044ff8) chi_dic_find_pane_g1

0x45c7,	// (0x000460eb) main_tport_pane

0xaec2,	// (0x0004c9e6) list_medium_line_plain_t1

0xaf0c,	// (0x0004ca30) list_medium_line_t2_g2_g1_ParamLimits

0xaf0c,	// (0x0004ca30) list_medium_line_t2_g2_g1

0xaf18,	// (0x0004ca3c) list_medium_line_t2_g2_g2_ParamLimits

0xaf18,	// (0x0004ca3c) list_medium_line_t2_g2_g2

0x0001,

0xf7a3,	// (0x000512c7) list_medium_line_t2_g2_g_ParamLimits

0xf7a3,	// (0x000512c7) list_medium_line_t2_g2_g

0x104d,	// (0x00042b71) list_medium_line_t2_g2_t1_ParamLimits

0x104d,	// (0x00042b71) list_medium_line_t2_g2_t1

0x1067,	// (0x00042b8b) list_medium_line_t2_g2_t2_ParamLimits

0x1067,	// (0x00042b8b) list_medium_line_t2_g2_t2

0x0001,

0xf7a8,	// (0x000512cc) list_medium_line_t2_g2_t_ParamLimits

0xf7a8,	// (0x000512cc) list_medium_line_t2_g2_t

0xb044,	// (0x0004cb68) aid_sp_fs_list_icon_a_sm

0xb04c,	// (0x0004cb70) aid_sp_fs_list_icon_d

0xb054,	// (0x0004cb78) aid_sp_fs_text_primary

0xb05d,	// (0x0004cb81) aid_sp_fs_text_secondary

0xdc9c,	// (0x0004f7c0) list_medium_line

0xdc9c,	// (0x0004f7c0) list_medium_line_g2

0xdc9c,	// (0x0004f7c0) list_medium_line_g3

0xdc9c,	// (0x0004f7c0) list_medium_line_plain

0xdc9c,	// (0x0004f7c0) list_medium_line_plain_t2

0xdc9c,	// (0x0004f7c0) list_medium_line_plain_t3

0xdc9c,	// (0x0004f7c0) list_medium_line_right_icon

0xdc9c,	// (0x0004f7c0) list_medium_line_right_iconx2

0xdc9c,	// (0x0004f7c0) list_medium_line_t2

0xdc9c,	// (0x0004f7c0) list_medium_line_t2_g2

0xdc9c,	// (0x0004f7c0) list_medium_line_t2_g3

0xdc9c,	// (0x0004f7c0) list_medium_line_t2_right_icon

0xdc9c,	// (0x0004f7c0) list_medium_line_t2_right_iconx2

0xdc9c,	// (0x0004f7c0) list_medium_line_t3

0xdc9c,	// (0x0004f7c0) list_medium_line_t3_g2

0xdc9c,	// (0x0004f7c0) list_medium_line_t3_g3

0xdc9c,	// (0x0004f7c0) list_medium_line_t3_right_iconx2

0xb066,	// (0x0004cb8a) list_medium_line_t4_g4

0xb06f,	// (0x0004cb93) list_medium_line_x2

0xb06f,	// (0x0004cb93) list_medium_line_x2_t2_g2

0xb06f,	// (0x0004cb93) list_medium_line_x2_t2_g3

0xb06f,	// (0x0004cb93) list_medium_line_x2_t2_g4

0xb06f,	// (0x0004cb93) list_medium_line_x2_t3

0xb06f,	// (0x0004cb93) list_medium_line_x2_t3_g2

0xb06f,	// (0x0004cb93) list_medium_line_x2_t3_g3

0xb06f,	// (0x0004cb93) list_medium_line_x2_t3_g4

0xb06f,	// (0x0004cb93) list_medium_line_x2_t4_g2

0xb06f,	// (0x0004cb93) list_medium_line_x2_t4_g4

0xb078,	// (0x0004cb9c) list_medium_line_x3

0xb078,	// (0x0004cb9c) list_medium_line_x3_t4

0xb078,	// (0x0004cb9c) list_medium_line_x3_t4_g4

0xb066,	// (0x0004cb8a) list_medium_line_x4_t4

0xb066,	// (0x0004cb8a) list_medium_line_x4_t4_g7

0xb066,	// (0x0004cb8a) list_medium_line_x4_t5

0xb081,	// (0x0004cba5) list_single_fs_dyc_pane_ParamLimits

0xb081,	// (0x0004cba5) list_single_fs_dyc_pane

0xa80e,	// (0x0004c332) list_medium_line_x4_t4_g7_g1_ParamLimits

0xa80e,	// (0x0004c332) list_medium_line_x4_t4_g7_g1

0xb0b2,	// (0x0004cbd6) list_medium_line_x4_t4_g7_g2_ParamLimits

0xb0b2,	// (0x0004cbd6) list_medium_line_x4_t4_g7_g2

0xb0be,	// (0x0004cbe2) list_medium_line_x4_t4_g7_g3_ParamLimits

0xb0be,	// (0x0004cbe2) list_medium_line_x4_t4_g7_g3

0xb0cd,	// (0x0004cbf1) list_medium_line_x4_t4_g7_g4_ParamLimits

0xb0cd,	// (0x0004cbf1) list_medium_line_x4_t4_g7_g4

0xb0d9,	// (0x0004cbfd) list_medium_line_x4_t4_g7_g5_ParamLimits

0xb0d9,	// (0x0004cbfd) list_medium_line_x4_t4_g7_g5

0xb0e8,	// (0x0004cc0c) list_medium_line_x4_t4_g7_g6_ParamLimits

0xb0e8,	// (0x0004cc0c) list_medium_line_x4_t4_g7_g6

0xb0f7,	// (0x0004cc1b) list_medium_line_x4_t4_g7_g7_ParamLimits

0xb0f7,	// (0x0004cc1b) list_medium_line_x4_t4_g7_g7

0x0006,

0xf973,	// (0x00051497) list_medium_line_x4_t4_g7_g_ParamLimits

0xf973,	// (0x00051497) list_medium_line_x4_t4_g7_g

0xb103,	// (0x0004cc27) list_medium_line_x4_t4_g7_t1_ParamLimits

0xb103,	// (0x0004cc27) list_medium_line_x4_t4_g7_t1

0xb118,	// (0x0004cc3c) list_medium_line_x4_t4_g7_t2_ParamLimits

0xb118,	// (0x0004cc3c) list_medium_line_x4_t4_g7_t2

0xb12d,	// (0x0004cc51) list_medium_line_x4_t4_g7_t3_ParamLimits

0xb12d,	// (0x0004cc51) list_medium_line_x4_t4_g7_t3

0xb142,	// (0x0004cc66) list_medium_line_x4_t4_g7_t4_ParamLimits

0xb142,	// (0x0004cc66) list_medium_line_x4_t4_g7_t4

0xb154,	// (0x0004cc78) list_medium_line_x4_t4_g7_t5_ParamLimits

0xb154,	// (0x0004cc78) list_medium_line_x4_t4_g7_t5

0x0004,

0xf982,	// (0x000514a6) list_medium_line_x4_t4_g7_t_ParamLimits

0xf982,	// (0x000514a6) list_medium_line_x4_t4_g7_t

0xb166,	// (0x0004cc8a) list_single_dyc_row_pane_ParamLimits

0xb166,	// (0x0004cc8a) list_single_dyc_row_pane

0x96eb,	// (0x0004b20f) call5_gesture_pane_ParamLimits

0x96eb,	// (0x0004b20f) call5_gesture_pane

0x9741,	// (0x0004b265) call5_windows_pane_ParamLimits

0x9741,	// (0x0004b265) call5_windows_pane

0x9869,	// (0x0004b38d) call5_swipe_1_pane_cp_ParamLimits

0x9869,	// (0x0004b38d) call5_swipe_1_pane_cp

0x9875,	// (0x0004b399) call5_swipe_2_pane_cp_ParamLimits

0x9875,	// (0x0004b399) call5_swipe_2_pane_cp

0xcfe0,	// (0x0004eb04) call5_image_pane_cp

0x9881,	// (0x0004b3a5) popup_call5_audio_first_window_cp_ParamLimits

0x9881,	// (0x0004b3a5) popup_call5_audio_first_window_cp

0x97ac,	// (0x0004b2d0) call5_swipe_1_pane_g1_cp_ParamLimits

0x97ac,	// (0x0004b2d0) call5_swipe_1_pane_g1_cp

0x988d,	// (0x0004b3b1) call5_swipe_1_pane_g2_cp

0x97c5,	// (0x0004b2e9) call5_swipe_1_pane_t1_cp_ParamLimits

0x97c5,	// (0x0004b2e9) call5_swipe_1_pane_t1_cp

0x97ac,	// (0x0004b2d0) call5_swipe_2_pane_g1_cp_ParamLimits

0x97ac,	// (0x0004b2d0) call5_swipe_2_pane_g1_cp

0x9895,	// (0x0004b3b9) call5_swipe_2_pane_g2_cp

0x989d,	// (0x0004b3c1) call5_swipe_2_pane_t1_cp_ParamLimits

0x989d,	// (0x0004b3c1) call5_swipe_2_pane_t1_cp

0xd8c7,	// (0x0004f3eb) main_sp_fs_email_pane

0x98b2,	// (0x0004b3d6) main_sp_fs_listscroll_pane_te

0xb183,	// (0x0004cca7) popup_sp_fs_action_menu_pane_ParamLimits

0xb183,	// (0x0004cca7) popup_sp_fs_action_menu_pane

0xe87e,	// (0x000503a2) bg_sp_fs_ctrlbar_pane_g1

0x98bb,	// (0x0004b3df) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0x98c4,	// (0x0004b3e8) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0x98cd,	// (0x0004b3f1) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xe87e,	// (0x000503a2) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfa6b,	// (0x0005158f) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xe659,	// (0x0005017d) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xe659,	// (0x0005017d) bg_sp_fs_ctrlbar_ddmenu_pane

0x98d6,	// (0x0004b3fa) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0x98d6,	// (0x0004b3fa) main_sp_fs_ctrlbar_ddmenu_pane_g1

0x98e2,	// (0x0004b406) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0x98e2,	// (0x0004b406) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfa74,	// (0x00051598) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfa74,	// (0x00051598) main_sp_fs_ctrlbar_ddmenu_pane_g

0x98ee,	// (0x0004b412) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0x98ee,	// (0x0004b412) main_sp_fs_ctrlbar_ddmenu_pane_t1

0xb1c3,	// (0x0004cce7) list_medium_line_t2_right_icon_g1

0x1278,	// (0x00042d9c) list_medium_line_t2_right_icon_t1

0x1288,	// (0x00042dac) list_medium_line_t2_right_icon_t2

0x0001,

0xfa79,	// (0x0005159d) list_medium_line_t2_right_icon_t

0xe42d,	// (0x0004ff51) bg_sp_fs_ctrlbar_pane_ParamLimits

0xe42d,	// (0x0004ff51) bg_sp_fs_ctrlbar_pane

0x9988,	// (0x0004b4ac) main_sp_fs_ctrlbar_button_pane_cp01

0x9992,	// (0x0004b4b6) main_sp_fs_ctrlbar_ddmenu_pane

0xd9cc,	// (0x0004f4f0) main_sp_fs_ctrlbar_pane_g1

0x999c,	// (0x0004b4c0) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfa7e,	// (0x000515a2) main_sp_fs_ctrlbar_pane_g

0x99a8,	// (0x0004b4cc) main_sp_fs_ctrlbar_pane_t1

0x129a,	// (0x00042dbe) main_sp_fs_ctrlbar_pane

0x12be,	// (0x00042de2) main_sp_fs_listscroll_pane_te_cp01

0x12de,	// (0x00042e02) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x12de,	// (0x00042e02) popup_sp_fs_action_menu_pane_cp01

0xd8c7,	// (0x0004f3eb) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0xd8c7,	// (0x0004f3eb) bg_sp_fs_highlight_list_pane_cp01

0xb1cb,	// (0x0004ccef) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0xb1cb,	// (0x0004ccef) sp_fs_action_menu_list_gene_pane_g1

0x99bd,	// (0x0004b4e1) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0x99bd,	// (0x0004b4e1) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfa83,	// (0x000515a7) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfa83,	// (0x000515a7) sp_fs_action_menu_list_gene_pane_g

0xb1da,	// (0x0004ccfe) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0xb1da,	// (0x0004ccfe) sp_fs_action_menu_list_gene_pane_t1

0xb1f2,	// (0x0004cd16) sp_fs_action_menu_list_gene_pane_ParamLimits

0xb1f2,	// (0x0004cd16) sp_fs_action_menu_list_gene_pane

0x99ca,	// (0x0004b4ee) popup_sp_fs_action_menu_bg_pane_ParamLimits

0x99ca,	// (0x0004b4ee) popup_sp_fs_action_menu_bg_pane

0xb20f,	// (0x0004cd33) sp_fs_action_menu_list_pane_ParamLimits

0xb20f,	// (0x0004cd33) sp_fs_action_menu_list_pane

0x99d8,	// (0x0004b4fc) sp_fs_scroll_pane_cp01_ParamLimits

0x99d8,	// (0x0004b4fc) sp_fs_scroll_pane_cp01

0x12f8,	// (0x00042e1c) list_medium_line_plain_t2_t1

0x1308,	// (0x00042e2c) list_medium_line_plain_t2_t2

0x0001,

0xfa88,	// (0x000515ac) list_medium_line_plain_t2_t

0x1318,	// (0x00042e3c) list_medium_line_plain_t3_t1

0x1328,	// (0x00042e4c) list_medium_line_plain_t3_t2

0x1336,	// (0x00042e5a) list_medium_line_plain_t3_t3

0x0002,

0xfa8d,	// (0x000515b1) list_medium_line_plain_t3_t

0xa80e,	// (0x0004c332) list_medium_line_x2_t2_g2_g1_ParamLimits

0xa80e,	// (0x0004c332) list_medium_line_x2_t2_g2_g1

0xa826,	// (0x0004c34a) list_medium_line_x2_t2_g2_g2_ParamLimits

0xa826,	// (0x0004c34a) list_medium_line_x2_t2_g2_g2

0x0001,

0xf245,	// (0x00050d69) list_medium_line_x2_t2_g2_g_ParamLimits

0xf245,	// (0x00050d69) list_medium_line_x2_t2_g2_g

0xa93c,	// (0x0004c460) list_medium_line_x2_t2_g2_t1_ParamLimits

0xa93c,	// (0x0004c460) list_medium_line_x2_t2_g2_t1

0xa847,	// (0x0004c36b) list_medium_line_x2_t2_g2_t2_ParamLimits

0xa847,	// (0x0004c36b) list_medium_line_x2_t2_g2_t2

0x0001,

0xfa94,	// (0x000515b8) list_medium_line_x2_t2_g2_t_ParamLimits

0xfa94,	// (0x000515b8) list_medium_line_x2_t2_g2_t

0xa80e,	// (0x0004c332) list_medium_line_x2_t4_g2_g1_ParamLimits

0xa80e,	// (0x0004c332) list_medium_line_x2_t4_g2_g1

0xb22d,	// (0x0004cd51) list_medium_line_x2_t4_g2_g2_ParamLimits

0xb22d,	// (0x0004cd51) list_medium_line_x2_t4_g2_g2

0x0001,

0xfa99,	// (0x000515bd) list_medium_line_x2_t4_g2_g_ParamLimits

0xfa99,	// (0x000515bd) list_medium_line_x2_t4_g2_g

0x1344,	// (0x00042e68) list_medium_line_x2_t4_g2_t1_ParamLimits

0x1344,	// (0x00042e68) list_medium_line_x2_t4_g2_t1

0x135b,	// (0x00042e7f) list_medium_line_x2_t4_g2_t2_ParamLimits

0x135b,	// (0x00042e7f) list_medium_line_x2_t4_g2_t2

0x1370,	// (0x00042e94) list_medium_line_x2_t4_g2_t3_ParamLimits

0x1370,	// (0x00042e94) list_medium_line_x2_t4_g2_t3

0xa847,	// (0x0004c36b) list_medium_line_x2_t4_g2_t4_ParamLimits

0xa847,	// (0x0004c36b) list_medium_line_x2_t4_g2_t4

0x0003,

0xfa9e,	// (0x000515c2) list_medium_line_x2_t4_g2_t_ParamLimits

0xfa9e,	// (0x000515c2) list_medium_line_x2_t4_g2_t

0xb23f,	// (0x0004cd63) list_medium_line_t3_right_iconx2_g1

0xb1c3,	// (0x0004cce7) list_medium_line_t3_right_iconx2_g2

0x1382,	// (0x00042ea6) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfaa7,	// (0x000515cb) list_medium_line_t3_right_iconx2_g

0x138c,	// (0x00042eb0) list_medium_line_t3_right_iconx2_t1

0x139c,	// (0x00042ec0) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfaae,	// (0x000515d2) list_medium_line_t3_right_iconx2_t

0xa80e,	// (0x0004c332) list_medium_line_x3_t4_g4_g1_ParamLimits

0xa80e,	// (0x0004c332) list_medium_line_x3_t4_g4_g1

0xa81a,	// (0x0004c33e) list_medium_line_x3_t4_g4_g2_ParamLimits

0xa81a,	// (0x0004c33e) list_medium_line_x3_t4_g4_g2

0xa890,	// (0x0004c3b4) list_medium_line_x3_t4_g4_g3_ParamLimits

0xa890,	// (0x0004c3b4) list_medium_line_x3_t4_g4_g3

0xb247,	// (0x0004cd6b) list_medium_line_x3_t4_g4_g4_ParamLimits

0xb247,	// (0x0004cd6b) list_medium_line_x3_t4_g4_g4

0x0003,

0xfab3,	// (0x000515d7) list_medium_line_x3_t4_g4_g_ParamLimits

0xfab3,	// (0x000515d7) list_medium_line_x3_t4_g4_g

0x13aa,	// (0x00042ece) list_medium_line_x3_t4_g4_t1_ParamLimits

0x13aa,	// (0x00042ece) list_medium_line_x3_t4_g4_t1

0x13c1,	// (0x00042ee5) list_medium_line_x3_t4_g4_t2_ParamLimits

0x13c1,	// (0x00042ee5) list_medium_line_x3_t4_g4_t2

0xa951,	// (0x0004c475) list_medium_line_x3_t4_g4_t3_ParamLimits

0xa951,	// (0x0004c475) list_medium_line_x3_t4_g4_t3

0xb253,	// (0x0004cd77) list_medium_line_x3_t4_g4_t4_ParamLimits

0xb253,	// (0x0004cd77) list_medium_line_x3_t4_g4_t4

0x0003,

0xfabc,	// (0x000515e0) list_medium_line_x3_t4_g4_t_ParamLimits

0xfabc,	// (0x000515e0) list_medium_line_x3_t4_g4_t

0x13dc,	// (0x00042f00) list_single_dyc_row_text_pane_t1_ParamLimits

0x13dc,	// (0x00042f00) list_single_dyc_row_text_pane_t1

0x1425,	// (0x00042f49) list_single_dyc_row_text_pane_t2_ParamLimits

0x1425,	// (0x00042f49) list_single_dyc_row_text_pane_t2

0xb270,	// (0x0004cd94) list_single_dyc_row_text_pane_t3_ParamLimits

0xb270,	// (0x0004cd94) list_single_dyc_row_text_pane_t3

0x0002,

0xfac5,	// (0x000515e9) list_single_dyc_row_text_pane_t_ParamLimits

0xfac5,	// (0x000515e9) list_single_dyc_row_text_pane_t

0xb282,	// (0x0004cda6) list_single_dyc_row_pane_g1_ParamLimits

0xb282,	// (0x0004cda6) list_single_dyc_row_pane_g1

0xb28e,	// (0x0004cdb2) list_single_dyc_row_pane_g2_ParamLimits

0xb28e,	// (0x0004cdb2) list_single_dyc_row_pane_g2

0xb29a,	// (0x0004cdbe) list_single_dyc_row_pane_g3_ParamLimits

0xb29a,	// (0x0004cdbe) list_single_dyc_row_pane_g3

0xb2a6,	// (0x0004cdca) list_single_dyc_row_pane_g4_ParamLimits

0xb2a6,	// (0x0004cdca) list_single_dyc_row_pane_g4

0x0003,

0xfacc,	// (0x000515f0) list_single_dyc_row_pane_g_ParamLimits

0xfacc,	// (0x000515f0) list_single_dyc_row_pane_g

0xb2b2,	// (0x0004cdd6) list_single_dyc_row_text_pane_ParamLimits

0xb2b2,	// (0x0004cdd6) list_single_dyc_row_text_pane

0xa6a2,	// (0x0004c1c6) bg_sp_fs_scroll_pane

0xb2d1,	// (0x0004cdf5) thumb_sp_fs_scroll_pane

0xaf0c,	// (0x0004ca30) list_medium_line_g1_ParamLimits

0xaf0c,	// (0x0004ca30) list_medium_line_g1

0xb2da,	// (0x0004cdfe) list_medium_line_t1_ParamLimits

0xb2da,	// (0x0004cdfe) list_medium_line_t1

0xa80e,	// (0x0004c332) list_medium_line_x2_g1_ParamLimits

0xa80e,	// (0x0004c332) list_medium_line_x2_g1

0xa81a,	// (0x0004c33e) list_medium_line_x2_g2_ParamLimits

0xa81a,	// (0x0004c33e) list_medium_line_x2_g2

0x0001,

0xfad5,	// (0x000515f9) list_medium_line_x2_g_ParamLimits

0xfad5,	// (0x000515f9) list_medium_line_x2_g

0xb2ef,	// (0x0004ce13) list_medium_line_x2_t1_ParamLimits

0xb2ef,	// (0x0004ce13) list_medium_line_x2_t1

0xa80e,	// (0x0004c332) list_medium_line_x3_g1_ParamLimits

0xa80e,	// (0x0004c332) list_medium_line_x3_g1

0xa81a,	// (0x0004c33e) list_medium_line_x3_g2_ParamLimits

0xa81a,	// (0x0004c33e) list_medium_line_x3_g2

0x0001,

0xfad5,	// (0x000515f9) list_medium_line_x3_g_ParamLimits

0xfad5,	// (0x000515f9) list_medium_line_x3_g

0xb2ef,	// (0x0004ce13) list_medium_line_x3_t1_ParamLimits

0xb2ef,	// (0x0004ce13) list_medium_line_x3_t1

0xb305,	// (0x0004ce29) thumb_sp_fs_scroll_pane_g1

0xb30e,	// (0x0004ce32) thumb_sp_fs_scroll_pane_g2

0xb317,	// (0x0004ce3b) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfada,	// (0x000515fe) thumb_sp_fs_scroll_pane_g

0xb305,	// (0x0004ce29) bg_sp_fs_scroll_pane_g1

0xb30e,	// (0x0004ce32) bg_sp_fs_scroll_pane_g2

0xb317,	// (0x0004ce3b) bg_sp_fs_scroll_pane_g3

0x0002,

0xfada,	// (0x000515fe) bg_sp_fs_scroll_pane_g

0xa80e,	// (0x0004c332) list_medium_line_x2_t3_g4_g1_ParamLimits

0xa80e,	// (0x0004c332) list_medium_line_x2_t3_g4_g1

0xa884,	// (0x0004c3a8) list_medium_line_x2_t3_g4_g2_ParamLimits

0xa884,	// (0x0004c3a8) list_medium_line_x2_t3_g4_g2

0xa81a,	// (0x0004c33e) list_medium_line_x2_t3_g4_g3_ParamLimits

0xa81a,	// (0x0004c33e) list_medium_line_x2_t3_g4_g3

0xa826,	// (0x0004c34a) list_medium_line_x2_t3_g4_g4_ParamLimits

0xa826,	// (0x0004c34a) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2a9,	// (0x00050dcd) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2a9,	// (0x00050dcd) list_medium_line_x2_t3_g4_g

0x147f,	// (0x00042fa3) list_medium_line_x2_t3_g4_t1_ParamLimits

0x147f,	// (0x00042fa3) list_medium_line_x2_t3_g4_t1

0x1499,	// (0x00042fbd) list_medium_line_x2_t3_g4_t2_ParamLimits

0x1499,	// (0x00042fbd) list_medium_line_x2_t3_g4_t2

0xa847,	// (0x0004c36b) list_medium_line_x2_t3_g4_t3_ParamLimits

0xa847,	// (0x0004c36b) list_medium_line_x2_t3_g4_t3

0x0002,

0xfae1,	// (0x00051605) list_medium_line_x2_t3_g4_t_ParamLimits

0xfae1,	// (0x00051605) list_medium_line_x2_t3_g4_t

0xaf0c,	// (0x0004ca30) list_medium_line_g2_g1_ParamLimits

0xaf0c,	// (0x0004ca30) list_medium_line_g2_g1

0xaf18,	// (0x0004ca3c) list_medium_line_g2_g2_ParamLimits

0xaf18,	// (0x0004ca3c) list_medium_line_g2_g2

0x0001,

0xf7a3,	// (0x000512c7) list_medium_line_g2_g_ParamLimits

0xf7a3,	// (0x000512c7) list_medium_line_g2_g

0xb320,	// (0x0004ce44) list_medium_line_g2_t1_ParamLimits

0xb320,	// (0x0004ce44) list_medium_line_g2_t1

0xaf0c,	// (0x0004ca30) list_medium_line_t3_g2_g1_ParamLimits

0xaf0c,	// (0x0004ca30) list_medium_line_t3_g2_g1

0xaf18,	// (0x0004ca3c) list_medium_line_t3_g2_g2_ParamLimits

0xaf18,	// (0x0004ca3c) list_medium_line_t3_g2_g2

0x0001,

0xf7a3,	// (0x000512c7) list_medium_line_t3_g2_g_ParamLimits

0xf7a3,	// (0x000512c7) list_medium_line_t3_g2_g

0x14b2,	// (0x00042fd6) list_medium_line_t3_g2_t1_ParamLimits

0x14b2,	// (0x00042fd6) list_medium_line_t3_g2_t1

0x14c9,	// (0x00042fed) list_medium_line_t3_g2_t2_ParamLimits

0x14c9,	// (0x00042fed) list_medium_line_t3_g2_t2

0x14de,	// (0x00043002) list_medium_line_t3_g2_t3_ParamLimits

0x14de,	// (0x00043002) list_medium_line_t3_g2_t3

0x0002,

0xfae8,	// (0x0005160c) list_medium_line_t3_g2_t_ParamLimits

0xfae8,	// (0x0005160c) list_medium_line_t3_g2_t

0xb1c3,	// (0x0004cce7) list_medium_line_right_icon_g1

0xb335,	// (0x0004ce59) list_medium_line_right_icon_t1

0xaf0c,	// (0x0004ca30) list_medium_line_t2_g1_ParamLimits

0xaf0c,	// (0x0004ca30) list_medium_line_t2_g1

0x14f7,	// (0x0004301b) list_medium_line_t2_t1_ParamLimits

0x14f7,	// (0x0004301b) list_medium_line_t2_t1

0x150e,	// (0x00043032) list_medium_line_t2_t2_ParamLimits

0x150e,	// (0x00043032) list_medium_line_t2_t2

0x0001,

0xfaef,	// (0x00051613) list_medium_line_t2_t_ParamLimits

0xfaef,	// (0x00051613) list_medium_line_t2_t

0xaf0c,	// (0x0004ca30) list_medium_line_t3_g1_ParamLimits

0xaf0c,	// (0x0004ca30) list_medium_line_t3_g1

0x1522,	// (0x00043046) list_medium_line_t3_t1_ParamLimits

0x1522,	// (0x00043046) list_medium_line_t3_t1

0x1539,	// (0x0004305d) list_medium_line_t3_t2_ParamLimits

0x1539,	// (0x0004305d) list_medium_line_t3_t2

0x154e,	// (0x00043072) list_medium_line_t3_t3_ParamLimits

0x154e,	// (0x00043072) list_medium_line_t3_t3

0x0002,

0xfaf4,	// (0x00051618) list_medium_line_t3_t_ParamLimits

0xfaf4,	// (0x00051618) list_medium_line_t3_t

0xaf0c,	// (0x0004ca30) list_medium_line_g3_g1_ParamLimits

0xaf0c,	// (0x0004ca30) list_medium_line_g3_g1

0xb343,	// (0x0004ce67) list_medium_line_g3_g2_ParamLimits

0xb343,	// (0x0004ce67) list_medium_line_g3_g2

0xaf18,	// (0x0004ca3c) list_medium_line_g3_g3_ParamLimits

0xaf18,	// (0x0004ca3c) list_medium_line_g3_g3

0x0002,

0xfafb,	// (0x0005161f) list_medium_line_g3_g_ParamLimits

0xfafb,	// (0x0005161f) list_medium_line_g3_g

0xb34f,	// (0x0004ce73) list_medium_line_g3_t1_ParamLimits

0xb34f,	// (0x0004ce73) list_medium_line_g3_t1

0xaf0c,	// (0x0004ca30) list_medium_line_t2_g3_g1_ParamLimits

0xaf0c,	// (0x0004ca30) list_medium_line_t2_g3_g1

0xb343,	// (0x0004ce67) list_medium_line_t2_g3_g2_ParamLimits

0xb343,	// (0x0004ce67) list_medium_line_t2_g3_g2

0xaf18,	// (0x0004ca3c) list_medium_line_t2_g3_g3_ParamLimits

0xaf18,	// (0x0004ca3c) list_medium_line_t2_g3_g3

0x0002,

0xfafb,	// (0x0005161f) list_medium_line_t2_g3_g_ParamLimits

0xfafb,	// (0x0005161f) list_medium_line_t2_g3_g

0x1560,	// (0x00043084) list_medium_line_t2_g3_t1_ParamLimits

0x1560,	// (0x00043084) list_medium_line_t2_g3_t1

0x157a,	// (0x0004309e) list_medium_line_t2_g3_t2_ParamLimits

0x157a,	// (0x0004309e) list_medium_line_t2_g3_t2

0x0001,

0xfb02,	// (0x00051626) list_medium_line_t2_g3_t_ParamLimits

0xfb02,	// (0x00051626) list_medium_line_t2_g3_t

0xaf0c,	// (0x0004ca30) list_medium_line_t3_g3_g1_ParamLimits

0xaf0c,	// (0x0004ca30) list_medium_line_t3_g3_g1

0xb343,	// (0x0004ce67) list_medium_line_t3_g3_g2_ParamLimits

0xb343,	// (0x0004ce67) list_medium_line_t3_g3_g2

0xaf18,	// (0x0004ca3c) list_medium_line_t3_g3_g3_ParamLimits

0xaf18,	// (0x0004ca3c) list_medium_line_t3_g3_g3

0x0002,

0xfafb,	// (0x0005161f) list_medium_line_t3_g3_g_ParamLimits

0xfafb,	// (0x0005161f) list_medium_line_t3_g3_g

0x1595,	// (0x000430b9) list_medium_line_t3_g3_t1_ParamLimits

0x1595,	// (0x000430b9) list_medium_line_t3_g3_t1

0x15a9,	// (0x000430cd) list_medium_line_t3_g3_t2_ParamLimits

0x15a9,	// (0x000430cd) list_medium_line_t3_g3_t2

0x15bb,	// (0x000430df) list_medium_line_t3_g3_t3_ParamLimits

0x15bb,	// (0x000430df) list_medium_line_t3_g3_t3

0x0002,

0xfb07,	// (0x0005162b) list_medium_line_t3_g3_t_ParamLimits

0xfb07,	// (0x0005162b) list_medium_line_t3_g3_t

0xb23f,	// (0x0004cd63) list_medium_line_right_iconx2_g1

0xb1c3,	// (0x0004cce7) list_medium_line_right_iconx2_g2

0x0001,

0xfb0e,	// (0x00051632) list_medium_line_right_iconx2_g

0xb364,	// (0x0004ce88) list_medium_line_right_iconx2_t1

0xb23f,	// (0x0004cd63) list_medium_line_t2_right_iconx2_g1

0xb1c3,	// (0x0004cce7) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfb0e,	// (0x00051632) list_medium_line_t2_right_iconx2_g

0x15cf,	// (0x000430f3) list_medium_line_t2_right_iconx2_t1

0x15df,	// (0x00043103) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfb13,	// (0x00051637) list_medium_line_t2_right_iconx2_t

0xb372,	// (0x0004ce96) list_medium_line_x4_t4_t1

0x15f1,	// (0x00043115) list_medium_line_x4_t4_t2

0x1601,	// (0x00043125) list_medium_line_x4_t4_t3

0x1611,	// (0x00043135) list_medium_line_x4_t4_t4

0x0003,

0xfb18,	// (0x0005163c) list_medium_line_x4_t4_t

0x9a41,	// (0x0004b565) tport_appsw_pane_ParamLimits

0x9a41,	// (0x0004b565) tport_appsw_pane

0x9a52,	// (0x0004b576) tport_contact_pane_ParamLimits

0x9a52,	// (0x0004b576) tport_contact_pane

0x9a6b,	// (0x0004b58f) tport_listscroll_pane_ParamLimits

0x9a6b,	// (0x0004b58f) tport_listscroll_pane

0x9a86,	// (0x0004b5aa) cell_tport_appsw_pane_ParamLimits

0x9a86,	// (0x0004b5aa) cell_tport_appsw_pane

0x6e5e,	// (0x00048982) tport_appsw_pane_g1_ParamLimits

0x6e5e,	// (0x00048982) tport_appsw_pane_g1

0xb380,	// (0x0004cea4) tport_contact_pane_g1

0xb389,	// (0x0004cead) tport_contact_pane_t1

0xb397,	// (0x0004cebb) tport_contact_pane_t2

0x0001,

0xfb21,	// (0x00051645) tport_contact_pane_t

0xb3a5,	// (0x0004cec9) list_tport_pane

0xb3ae,	// (0x0004ced2) scroll_pane_cp_030

0xb3bf,	// (0x0004cee3) cell_tport_appsw_pane_g1

0xb3cf,	// (0x0004cef3) cell_tport_appsw_pane_t1

0xa6a2,	// (0x0004c1c6) grid_highlight_pane_cp019

0x9ac6,	// (0x0004b5ea) list_tport_double_graphic_pane_ParamLimits

0x9ac6,	// (0x0004b5ea) list_tport_double_graphic_pane

0xd8c7,	// (0x0004f3eb) list_highlight_pane_cp023_ParamLimits

0xd8c7,	// (0x0004f3eb) list_highlight_pane_cp023

0x9ad3,	// (0x0004b5f7) list_tport_double_graphic_pane_g1_ParamLimits

0x9ad3,	// (0x0004b5f7) list_tport_double_graphic_pane_g1

0x9ae0,	// (0x0004b604) list_tport_double_graphic_pane_t1_ParamLimits

0x9ae0,	// (0x0004b604) list_tport_double_graphic_pane_t1

0x9af5,	// (0x0004b619) list_tport_double_graphic_pane_t2_ParamLimits

0x9af5,	// (0x0004b619) list_tport_double_graphic_pane_t2

0x0001,

0xfb2d,	// (0x00051651) list_tport_double_graphic_pane_t_ParamLimits

0xfb2d,	// (0x00051651) list_tport_double_graphic_pane_t

0xa6a2,	// (0x0004c1c6) main_cale_note_pane

0x6e13,	// (0x00048937) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x6e13,	// (0x00048937) cell_vitu2_function_top_wide_pane_cp01

0x9187,	// (0x0004acab) wait_bar_pane_cp05_ParamLimits

0xa6a2,	// (0x0004c1c6) listscroll_cmail_pane

0xb3e5,	// (0x0004cf09) list_cmail_pane

0x9b11,	// (0x0004b635) list_cmail_body_pane

0x9b26,	// (0x0004b64a) list_single_cmail_header_caption_pane

0x9b3f,	// (0x0004b663) list_single_cmail_header_detail_pane_ParamLimits

0x9b3f,	// (0x0004b663) list_single_cmail_header_detail_pane

0x9b68,	// (0x0004b68c) list_single_cmail_header_caption_pane_t1

0x1621,	// (0x00043145) list_single_cmail_header_detail_pane_g1_ParamLimits

0x1621,	// (0x00043145) list_single_cmail_header_detail_pane_g1

0xb405,	// (0x0004cf29) list_single_cmail_header_detail_pane_g2_ParamLimits

0xb405,	// (0x0004cf29) list_single_cmail_header_detail_pane_g2

0x0002,

0xfb32,	// (0x00051656) list_single_cmail_header_detail_pane_g_ParamLimits

0xfb32,	// (0x00051656) list_single_cmail_header_detail_pane_g

0xb41e,	// (0x0004cf42) list_single_cmail_header_detail_pane_t1_ParamLimits

0xb41e,	// (0x0004cf42) list_single_cmail_header_detail_pane_t1

0xb450,	// (0x0004cf74) list_single_cmail_header_editor_pane_bg_ParamLimits

0xb450,	// (0x0004cf74) list_single_cmail_header_editor_pane_bg

0xb462,	// (0x0004cf86) list_cmail_body_pane_g1

0xb46b,	// (0x0004cf8f) list_cmail_body_pane_t1

0x6f24,	// (0x00048a48) list_single_cmail_header_editor_pane_bg_g1

0xc968,	// (0x0004e48c) list_single_cmail_header_editor_pane_bg_g1_copy1

0x6f34,	// (0x00048a58) list_single_cmail_header_editor_pane_bg_g1_copy2

0x6f2c,	// (0x00048a50) list_single_cmail_header_editor_pane_bg_g1_copy3

0x78c1,	// (0x000493e5) list_single_cmail_header_editor_pane_bg_g1_copy4

0x6f54,	// (0x00048a78) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0x6f44,	// (0x00048a68) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0x6f4c,	// (0x00048a70) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xc948,	// (0x0004e46c) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0x9b78,	// (0x0004b69c) calenote_gesture_pane_ParamLimits

0x9b78,	// (0x0004b69c) calenote_gesture_pane

0x9b98,	// (0x0004b6bc) calenote_window_pane_ParamLimits

0x9b98,	// (0x0004b6bc) calenote_window_pane

0xb479,	// (0x0004cf9d) popup_note_window_cp01

0x9bb4,	// (0x0004b6d8) calenote_swipe_1_pane_ParamLimits

0x9bb4,	// (0x0004b6d8) calenote_swipe_1_pane

0x9875,	// (0x0004b399) calenote_swipe_2_pane_ParamLimits

0x9875,	// (0x0004b399) calenote_swipe_2_pane

0x97ac,	// (0x0004b2d0) calenote_swipe_1_pane_g1_ParamLimits

0x97ac,	// (0x0004b2d0) calenote_swipe_1_pane_g1

0x97b9,	// (0x0004b2dd) calenote_swipe_1_pane_g2_ParamLimits

0x97b9,	// (0x0004b2dd) calenote_swipe_1_pane_g2

0x0001,

0xfa61,	// (0x00051585) calenote_swipe_1_pane_g_ParamLimits

0xfa61,	// (0x00051585) calenote_swipe_1_pane_g

0xb48b,	// (0x0004cfaf) calenote_swipe_1_pane_t1_ParamLimits

0xb48b,	// (0x0004cfaf) calenote_swipe_1_pane_t1

0x97ac,	// (0x0004b2d0) calenote_swipe_2_pane_g1_ParamLimits

0x97ac,	// (0x0004b2d0) calenote_swipe_2_pane_g1

0xb4aa,	// (0x0004cfce) calenote_swipe_2_pane_g2_ParamLimits

0xb4aa,	// (0x0004cfce) calenote_swipe_2_pane_g2

0x0001,

0xfb3e,	// (0x00051662) calenote_swipe_2_pane_g_ParamLimits

0xfb3e,	// (0x00051662) calenote_swipe_2_pane_g

0xb4b6,	// (0x0004cfda) calenote_swipe_2_pane_t1_ParamLimits

0xb4b6,	// (0x0004cfda) calenote_swipe_2_pane_t1

0xa6a2,	// (0x0004c1c6) main_mup_navstr_pane

0x5933,	// (0x00047457) main_mup3_pane_t7_ParamLimits

0x5933,	// (0x00047457) main_mup3_pane_t7

0xabfa,	// (0x0004c71e) main_mp4_pane_g6_ParamLimits

0xabfa,	// (0x0004c71e) main_mp4_pane_g6

0xad9e,	// (0x0004c8c2) main_image3_pane_t4_ParamLimits

0xad9e,	// (0x0004c8c2) main_image3_pane_t4

0x9bc9,	// (0x0004b6ed) popup_navstr_preview_pane_ParamLimits

0x9bc9,	// (0x0004b6ed) popup_navstr_preview_pane

0x9bdd,	// (0x0004b701) scroll_navstr_pane_ParamLimits

0x9bdd,	// (0x0004b701) scroll_navstr_pane

0xa6a2,	// (0x0004c1c6) bg_popup_preview_window_pane_cp04

0xb4dd,	// (0x0004d001) popup_navstr_preview_pane_t1

0x9bf1,	// (0x0004b715) scroll_navstr_pane_g1_ParamLimits

0x9bf1,	// (0x0004b715) scroll_navstr_pane_g1

0x9c05,	// (0x0004b729) scroll_navstr_pane_t1_ParamLimits

0x9c05,	// (0x0004b729) scroll_navstr_pane_t1

0xb482,	// (0x0004cfa6) bg_button_pane_cp014

0xb482,	// (0x0004cfa6) bg_button_pane_cp030

0x121e,	// (0x00042d42) list_double_fisheye_pane_g4_ParamLimits

0x121e,	// (0x00042d42) list_double_fisheye_pane_g4

0x122a,	// (0x00042d4e) list_double_fisheye_pane_g5_ParamLimits

0x122a,	// (0x00042d4e) list_double_fisheye_pane_g5

0xb3ed,	// (0x0004cf11) sp_fs_scroll_pane_cp03

0xd9cc,	// (0x0004f4f0) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0x999c,	// (0x0004b4c0) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfa7e,	// (0x000515a2) main_sp_fs_ctrlbar_pane_g_ParamLimits

0x99a8,	// (0x0004b4cc) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0x9b07,	// (0x0004b62b) sp_fs_scroll_pane_cp02

0xc66e,	// (0x0004e192) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0xc66e,	// (0x0004e192) popup_sp_fs_calendar_preview_list_single_pane

0xa6a2,	// (0x0004c1c6) main_cam6_pano_pane

0xd8c7,	// (0x0004f3eb) main_mup3_pane_ParamLimits

0xa6a2,	// (0x0004c1c6) main_phacti_pane

0x905a,	// (0x0004ab7e) bg_button_pane_cp11

0x9074,	// (0x0004ab98) main_mobtv_info_pane_g2_ParamLimits

0x9074,	// (0x0004ab98) main_mobtv_info_pane_g2

0x0001,

0xf9de,	// (0x00051502) main_mobtv_info_pane_g_ParamLimits

0xf9de,	// (0x00051502) main_mobtv_info_pane_g

0x92f5,	// (0x0004ae19) sc_clock_pane_t5_ParamLimits

0x92f5,	// (0x0004ae19) sc_clock_pane_t5

0x94c1,	// (0x0004afe5) main_radioblah_pane_g1_ParamLimits

0x9507,	// (0x0004b02b) main_radioblah_pane_t3_ParamLimits

0x9507,	// (0x0004b02b) main_radioblah_pane_t3

0x951f,	// (0x0004b043) main_radioblah_pane_t4_ParamLimits

0x951f,	// (0x0004b043) main_radioblah_pane_t4

0x954d,	// (0x0004b071) main_radioblah_text_pane_ParamLimits

0x954d,	// (0x0004b071) main_radioblah_text_pane

0x955f,	// (0x0004b083) main_radioblah_info_pane_g1_ParamLimits

0x9634,	// (0x0004b158) main_radioblah_info_pane_t4_ParamLimits

0x9634,	// (0x0004b158) main_radioblah_info_pane_t4

0xd8c7,	// (0x0004f3eb) main_sp_fs_calendar_pane

0x9c1b,	// (0x0004b73f) main_phacti_pane_g1

0x9c23,	// (0x0004b747) phacti_note_pane_ParamLimits

0x9c23,	// (0x0004b747) phacti_note_pane

0xb4f4,	// (0x0004d018) phacti_term_pane_ParamLimits

0xb4f4,	// (0x0004d018) phacti_term_pane

0xb509,	// (0x0004d02d) phacti_note_pane_t1_ParamLimits

0xb509,	// (0x0004d02d) phacti_note_pane_t1

0xb520,	// (0x0004d044) phacti_term_pane_g1

0xb528,	// (0x0004d04c) phacti_term_pane_t1_ParamLimits

0xb528,	// (0x0004d04c) phacti_term_pane_t1

0xb552,	// (0x0004d076) popup_sp_fs_calendar_preview_list_single_pane_g1

0xb55a,	// (0x0004d07e) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfb48,	// (0x0005166c) popup_sp_fs_calendar_preview_list_single_pane_g

0xb562,	// (0x0004d086) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xb562,	// (0x0004d086) popup_sp_fs_calendar_preview_list_single_pane_t1

0xb578,	// (0x0004d09c) aid_popup_sp_fs_bg_corner_pane

0xe87e,	// (0x000503a2) popup_sp_fs_calendar_preview_bg_pane_g1

0xa6a2,	// (0x0004c1c6) popup_sp_fs_calendar_preview_bg_pane

0xb580,	// (0x0004d0a4) popup_sp_fs_calendar_preview_list_pane

0xd8c7,	// (0x0004f3eb) bg_main_sp_fs_cale_pane_ParamLimits

0xd8c7,	// (0x0004f3eb) bg_main_sp_fs_cale_pane

0xb588,	// (0x0004d0ac) listscroll_cale_mrui_pane_ParamLimits

0xb588,	// (0x0004d0ac) listscroll_cale_mrui_pane

0xb59c,	// (0x0004d0c0) listscroll_sp_fs_schedule_track_pane

0xb5a5,	// (0x0004d0c9) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0xb5a5,	// (0x0004d0c9) main_sp_fs_ctrlbar_pane_cp01

0xb5b6,	// (0x0004d0da) main_sp_fs_ribbon_pane

0xb5be,	// (0x0004d0e2) popup_sp_fs_cale_preview_window

0x9c7e,	// (0x0004b7a2) list_single_sp_fs_schedule_track_pane_ParamLimits

0x9c7e,	// (0x0004b7a2) list_single_sp_fs_schedule_track_pane

0xd8c7,	// (0x0004f3eb) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0xd8c7,	// (0x0004f3eb) bg_sp_fs_highlight_list_pane_cp03

0x9c93,	// (0x0004b7b7) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0x9c93,	// (0x0004b7b7) list_single_sp_fs_schedule_track_pane_g1

0x9c9f,	// (0x0004b7c3) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0x9c9f,	// (0x0004b7c3) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfb4d,	// (0x00051671) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfb4d,	// (0x00051671) list_single_sp_fs_schedule_track_pane_g

0x9cab,	// (0x0004b7cf) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0x9cab,	// (0x0004b7cf) list_single_sp_fs_schedule_track_pane_t1

0x9cc5,	// (0x0004b7e9) sp_fs_schedule_track_pane_ParamLimits

0x9cc5,	// (0x0004b7e9) sp_fs_schedule_track_pane

0xb5d0,	// (0x0004d0f4) sp_fs_schedule_track_pane_g1

0xb5d8,	// (0x0004d0fc) sp_fs_schedule_track_pane_g2

0xb5e0,	// (0x0004d104) sp_fs_schedule_track_pane_g3

0xb5e8,	// (0x0004d10c) sp_fs_schedule_track_pane_g4

0xb5f0,	// (0x0004d114) sp_fs_schedule_track_pane_g5

0x0004,

0xfb52,	// (0x00051676) sp_fs_schedule_track_pane_g

0x6f24,	// (0x00048a48) bg_sp_fs_schedule_viewer_highlight_g1

0xc968,	// (0x0004e48c) bg_sp_fs_schedule_viewer_highlight_g2

0x6f2c,	// (0x00048a50) bg_sp_fs_schedule_viewer_highlight_g3

0x6f34,	// (0x00048a58) bg_sp_fs_schedule_viewer_highlight_g4

0x78c1,	// (0x000493e5) bg_sp_fs_schedule_viewer_highlight_g5

0x6f44,	// (0x00048a68) bg_sp_fs_schedule_viewer_highlight_g6

0x6f4c,	// (0x00048a70) bg_sp_fs_schedule_viewer_highlight_g7

0x6f54,	// (0x00048a78) bg_sp_fs_schedule_viewer_highlight_g8

0xc948,	// (0x0004e46c) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfb5d,	// (0x00051681) bg_sp_fs_schedule_viewer_highlight_g

0xa6a2,	// (0x0004c1c6) bg_main_sp_fs_ribbon_pane

0x9cd6,	// (0x0004b7fa) main_sp_fs_ribbon_pane_g1

0xb5f8,	// (0x0004d11c) main_sp_fs_ribbon_pane_t1

0x9cdf,	// (0x0004b803) main_sp_fs_ribbon_pane_t2

0xb607,	// (0x0004d12b) main_sp_fs_ribbon_pane_t3

0x0002,

0xfb70,	// (0x00051694) main_sp_fs_ribbon_pane_t

0xb616,	// (0x0004d13a) main_sp_fs_ribbon_scheduler_pane

0xb61e,	// (0x0004d142) bg_main_sp_fs_ribbon_pane_g1

0xb627,	// (0x0004d14b) bg_main_sp_fs_ribbon_pane_g2

0xb630,	// (0x0004d154) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfb77,	// (0x0005169b) bg_main_sp_fs_ribbon_pane_g

0xb638,	// (0x0004d15c) main_sp_fs_ribbon_scheduler_pane_g1

0xb641,	// (0x0004d165) main_sp_fs_ribbon_scheduler_pane_g2

0xb64a,	// (0x0004d16e) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfb7e,	// (0x000516a2) main_sp_fs_ribbon_scheduler_pane_g

0xb653,	// (0x0004d177) list_cale_mrui_pane

0x9cee,	// (0x0004b812) sp_fs_scroll_pane_cp07_ParamLimits

0x9cee,	// (0x0004b812) sp_fs_scroll_pane_cp07

0x9d02,	// (0x0004b826) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0x9d02,	// (0x0004b826) bg_sp_fs_schedule_viewer_highlight

0xb65c,	// (0x0004d180) list_single_sp_fs_schedule_track_pane_cp01

0xb664,	// (0x0004d188) list_sp_fs_schedule_track_pane

0xb66c,	// (0x0004d190) sp_fs_scroll_pane_cp06_ParamLimits

0xb66c,	// (0x0004d190) sp_fs_scroll_pane_cp06

0xe87e,	// (0x000503a2) bgmain_sp_fs_calendar_pane_g1

0x165f,	// (0x00043183) list_single_cale_mrui_pane_ParamLimits

0x165f,	// (0x00043183) list_single_cale_mrui_pane

0xb67e,	// (0x0004d1a2) list_single_cale_mrui_row_pane_ParamLimits

0xb67e,	// (0x0004d1a2) list_single_cale_mrui_row_pane

0xb68b,	// (0x0004d1af) list_single_cale_mrui_row_pane_g1_ParamLimits

0xb68b,	// (0x0004d1af) list_single_cale_mrui_row_pane_g1

0xb6c3,	// (0x0004d1e7) list_single_cale_mrui_row_pane_t1_ParamLimits

0xb6c3,	// (0x0004d1e7) list_single_cale_mrui_row_pane_t1

0x1681,	// (0x000431a5) list_single_cale_mrui_row_pane_t2_ParamLimits

0x1681,	// (0x000431a5) list_single_cale_mrui_row_pane_t2

0xb6d5,	// (0x0004d1f9) list_single_cale_mrui_row_pane_t3_ParamLimits

0xb6d5,	// (0x0004d1f9) list_single_cale_mrui_row_pane_t3

0xb704,	// (0x0004d228) list_single_cale_mrui_row_pane_t4_ParamLimits

0xb704,	// (0x0004d228) list_single_cale_mrui_row_pane_t4

0x0003,

0xfb8a,	// (0x000516ae) list_single_cale_mrui_row_pane_t_ParamLimits

0xfb8a,	// (0x000516ae) list_single_cale_mrui_row_pane_t

0x16e9,	// (0x0004320d) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x16e9,	// (0x0004320d) list_single_cmail_header_editor_pane_bg_cp01

0x170f,	// (0x00043233) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x170f,	// (0x00043233) list_single_cmail_header_editor_pane_bg_cp02

0x9d12,	// (0x0004b836) main_radioblah_text_pane_t1_ParamLimits

0x9d12,	// (0x0004b836) main_radioblah_text_pane_t1

0xb733,	// (0x0004d257) cam6_indi_pane_cp01

0xb73b,	// (0x0004d25f) cam6_mode_pane_cp01

0xb743,	// (0x0004d267) cam6_pano_pane

0xb74c,	// (0x0004d270) cam6_zoom_pane_cp01

0xb754,	// (0x0004d278) cam6_pano_image_pane

0xb75f,	// (0x0004d283) cam6_pano_pane_g1

0x8ff3,	// (0x0004ab17) cam6_pano_pane_g2

0xb768,	// (0x0004d28c) cam6_pano_pane_g3

0xb771,	// (0x0004d295) cam6_pano_pane_g4

0xee04,	// (0x00050928) cam6_pano_pane_g5

0xb77a,	// (0x0004d29e) cam6_pano_pane_g6

0xb784,	// (0x0004d2a8) cam6_pano_pane_g7

0xb78c,	// (0x0004d2b0) cam6_pano_pane_g8

0xb795,	// (0x0004d2b9) cam6_pano_pane_g9

0x0008,

0xfb93,	// (0x000516b7) cam6_pano_pane_g

0xa6a2,	// (0x0004c1c6) main_browser_tag_pane

0xb4d5,	// (0x0004cff9) grid_navstr_albumart_pane

0xb7a0,	// (0x0004d2c4) cell_navstr_albumart_pane_ParamLimits

0xb7a0,	// (0x0004d2c4) cell_navstr_albumart_pane

0xd141,	// (0x0004ec65) cell_navstr_albumart_pane_g1

0xe242,	// (0x0004fd66) cell_navstr_albumart_pane_g2

0xe252,	// (0x0004fd76) cell_navstr_albumart_pane_g3

0xe24a,	// (0x0004fd6e) cell_navstr_albumart_pane_g4

0x0003,

0x0c83,	// (0x000427a7) cell_navstr_albumart_pane_g

0x9d2d,	// (0x0004b851) bt_list_pane_ParamLimits

0x9d2d,	// (0x0004b851) bt_list_pane

0x9d42,	// (0x0004b866) bt_list_pane_t1

0x9d51,	// (0x0004b875) bt_list_pane_t2

0x0001,

0xfba6,	// (0x000516ca) bt_list_pane_t

0xa6a2,	// (0x0004c1c6) main_cale_prevew_pane

0x9d60,	// (0x0004b884) popup_cale_preview_window_ParamLimits

0x9d60,	// (0x0004b884) popup_cale_preview_window

0xd8c7,	// (0x0004f3eb) bg_popup_preview_window_pane_cp05_ParamLimits

0xd8c7,	// (0x0004f3eb) bg_popup_preview_window_pane_cp05

0xb7c2,	// (0x0004d2e6) list_cale_preview_pane_ParamLimits

0xb7c2,	// (0x0004d2e6) list_cale_preview_pane

0x9d77,	// (0x0004b89b) list_double_cale_preview_pane_ParamLimits

0x9d77,	// (0x0004b89b) list_double_cale_preview_pane

0x9d89,	// (0x0004b8ad) list_single_cale_preview_pane_ParamLimits

0x9d89,	// (0x0004b8ad) list_single_cale_preview_pane

0x9d9d,	// (0x0004b8c1) list_single_cale_preview_pane_g1

0x9da5,	// (0x0004b8c9) list_single_cale_preview_pane_t1_ParamLimits

0x9da5,	// (0x0004b8c9) list_single_cale_preview_pane_t1

0x9dba,	// (0x0004b8de) list_double_cale_preview_pane_g1

0x9dc2,	// (0x0004b8e6) list_double_cale_preview_pane_t1_ParamLimits

0x9dc2,	// (0x0004b8e6) list_double_cale_preview_pane_t1

0x9dd7,	// (0x0004b8fb) list_double_cale_preview_pane_t2_ParamLimits

0x9dd7,	// (0x0004b8fb) list_double_cale_preview_pane_t2

0x0001,

0xfbab,	// (0x000516cf) list_double_cale_preview_pane_t_ParamLimits

0xfbab,	// (0x000516cf) list_double_cale_preview_pane_t

0xa6a2,	// (0x0004c1c6) main_ezdial_pane

0xd8c7,	// (0x0004f3eb) main_sp_fs_email_pane_ParamLimits

0x9908,	// (0x0004b42c) cmail_ddmenu_btn01_pane_ParamLimits

0x9908,	// (0x0004b42c) cmail_ddmenu_btn01_pane

0x991b,	// (0x0004b43f) cmail_ddmenu_btn02_pane_ParamLimits

0x991b,	// (0x0004b43f) cmail_ddmenu_btn02_pane

0x9976,	// (0x0004b49a) cmail_ddmenu_btn03_pane_ParamLimits

0x9976,	// (0x0004b49a) cmail_ddmenu_btn03_pane

0x129a,	// (0x00042dbe) main_sp_fs_ctrlbar_pane_ParamLimits

0x12be,	// (0x00042de2) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0x9b11,	// (0x0004b635) list_cmail_body_pane_ParamLimits

0xb3fc,	// (0x0004cf20) bg_button_pane_cp12

0xb411,	// (0x0004cf35) list_single_cmail_header_detail_pane_g3_ParamLimits

0xb411,	// (0x0004cf35) list_single_cmail_header_detail_pane_g3

0x1639,	// (0x0004315d) list_single_cmail_header_detail_pane_t2_ParamLimits

0x1639,	// (0x0004315d) list_single_cmail_header_detail_pane_t2

0x0001,

0xfb39,	// (0x0005165d) list_single_cmail_header_detail_pane_t_ParamLimits

0xfb39,	// (0x0005165d) list_single_cmail_header_detail_pane_t

0xb53d,	// (0x0004d061) phacti_term_pane_t2_ParamLimits

0xb53d,	// (0x0004d061) phacti_term_pane_t2

0x0001,

0xfb43,	// (0x00051667) phacti_term_pane_t_ParamLimits

0xfb43,	// (0x00051667) phacti_term_pane_t

0xb7ce,	// (0x0004d2f2) aid_size_list_single_double

0x9def,	// (0x0004b913) popup_ezdial_listscroll_window

0x9e0b,	// (0x0004b92f) popup_number_entry_window_cp01

0xcfe0,	// (0x0004eb04) bg_popup_call_pane_cp09

0xb7da,	// (0x0004d2fe) ezdial_list_pane

0xb7e2,	// (0x0004d306) scroll_pane_cp23

0xe42d,	// (0x0004ff51) bg_button_pane_cp028_ParamLimits

0xe42d,	// (0x0004ff51) bg_button_pane_cp028

0x9e19,	// (0x0004b93d) cmail_ddmenu_btn01_pane_g1_ParamLimits

0x9e19,	// (0x0004b93d) cmail_ddmenu_btn01_pane_g1

0x9e25,	// (0x0004b949) cmail_ddmenu_btn01_pane_g2_ParamLimits

0x9e25,	// (0x0004b949) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfbb0,	// (0x000516d4) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfbb0,	// (0x000516d4) cmail_ddmenu_btn01_pane_g

0xb7ea,	// (0x0004d30e) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xb7ea,	// (0x0004d30e) cmail_ddmenu_btn01_pane_t1

0xe42d,	// (0x0004ff51) bg_button_pane_cp029_ParamLimits

0xe42d,	// (0x0004ff51) bg_button_pane_cp029

0x9e31,	// (0x0004b955) cmail_ddmenu_btn02_pane_g1_ParamLimits

0x9e31,	// (0x0004b955) cmail_ddmenu_btn02_pane_g1

0x9e49,	// (0x0004b96d) cmail_ddmenu_btn02_pane_t1_ParamLimits

0x9e49,	// (0x0004b96d) cmail_ddmenu_btn02_pane_t1

0xd8c7,	// (0x0004f3eb) bg_button_pane_cp031_ParamLimits

0xd8c7,	// (0x0004f3eb) bg_button_pane_cp031

0x9e31,	// (0x0004b955) cmail_ddmenu_btn03_pane_g1_ParamLimits

0x9e31,	// (0x0004b955) cmail_ddmenu_btn03_pane_g1

0x9e49,	// (0x0004b96d) cmail_ddmenu_btn03_pane_t1_ParamLimits

0x9e49,	// (0x0004b96d) cmail_ddmenu_btn03_pane_t1

0x6534,	// (0x00048058) cell_dialer2_keypad_pane_t1_ParamLimits

0x654e,	// (0x00048072) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x654e,	// (0x00048072) cell_dialer2_keypad_pane_t1_copy1

0x8c0a,	// (0x0004a72e) ncimui_group_button_pane

0xd8c7,	// (0x0004f3eb) main_sp_fs_calendar_pane_ParamLimits

0x9b26,	// (0x0004b64a) list_single_cmail_header_caption_pane_ParamLimits

0xb05d,	// (0x0004cb81) aid_recal_txt_sm_pane

0xa6a2,	// (0x0004c1c6) mian_recal_day_pane

0xb5be,	// (0x0004d0e2) popup_sp_fs_cale_preview_window_ParamLimits

0xa6a2,	// (0x0004c1c6) list_recal_day_pane

0xb818,	// (0x0004d33c) list_single_recal_day_pane_ParamLimits

0xb818,	// (0x0004d33c) list_single_recal_day_pane

0xb82a,	// (0x0004d34e) list_single_recal_day_pane_g1_ParamLimits

0xb82a,	// (0x0004d34e) list_single_recal_day_pane_g1

0xb836,	// (0x0004d35a) list_single_recal_day_pane_g2_ParamLimits

0xb836,	// (0x0004d35a) list_single_recal_day_pane_g2

0xb845,	// (0x0004d369) list_single_recal_day_pane_g3_ParamLimits

0xb845,	// (0x0004d369) list_single_recal_day_pane_g3

0x9e6d,	// (0x0004b991) list_single_recal_day_pane_g4_ParamLimits

0x9e6d,	// (0x0004b991) list_single_recal_day_pane_g4

0xb851,	// (0x0004d375) list_single_recal_day_pane_g5_ParamLimits

0xb851,	// (0x0004d375) list_single_recal_day_pane_g5

0xb860,	// (0x0004d384) list_single_recal_day_pane_g6_ParamLimits

0xb860,	// (0x0004d384) list_single_recal_day_pane_g6

0x0005,

0xfbbf,	// (0x000516e3) list_single_recal_day_pane_g_ParamLimits

0xfbbf,	// (0x000516e3) list_single_recal_day_pane_g

0xb86c,	// (0x0004d390) list_single_recal_day_pane_t1

0xb87a,	// (0x0004d39e) list_single_recal_day_pane_t2

0x0001,

0xfbcc,	// (0x000516f0) list_single_recal_day_pane_t

0x9e80,	// (0x0004b9a4) ncimui_query_button_pane_ParamLimits

0x9e80,	// (0x0004b9a4) ncimui_query_button_pane

0x9e90,	// (0x0004b9b4) ncimui_query_button_pane_t1_ParamLimits

0x9e90,	// (0x0004b9b4) ncimui_query_button_pane_t1

0xb888,	// (0x0004d3ac) ncimui_query_button_pane_t2_ParamLimits

0xb888,	// (0x0004d3ac) ncimui_query_button_pane_t2

0x0001,

0xfbd1,	// (0x000516f5) ncimui_query_button_pane_t_ParamLimits

0xfbd1,	// (0x000516f5) ncimui_query_button_pane_t

0x9ea3,	// (0x0004b9c7) query_button_pane_ParamLimits

0x9ea3,	// (0x0004b9c7) query_button_pane

0xa6a2,	// (0x0004c1c6) bg_button_pane_cp0028

0xb89b,	// (0x0004d3bf) query_button_pane_t1

0x45c7,	// (0x000460eb) main_tport_pane_ParamLimits

0x99fe,	// (0x0004b522) bg_popup_window_pane_cp01_ParamLimits

0x99fe,	// (0x0004b522) bg_popup_window_pane_cp01

0x9a18,	// (0x0004b53c) heading_pane_cp08_ParamLimits

0x9a18,	// (0x0004b53c) heading_pane_cp08

0x9a2c,	// (0x0004b550) heading_pane_cp07_ParamLimits

0x9a2c,	// (0x0004b550) heading_pane_cp07

0xb3bf,	// (0x0004cee3) cell_tport_appsw_pane_g2

0x0002,

0xfb26,	// (0x0005164a) cell_tport_appsw_pane_g

0x3be5,	// (0x00045709) input_candi_list_open_g1

0xcb03,	// (0x0004e627) list_cale_time_pane_g6_ParamLimits

0xcb03,	// (0x0004e627) list_cale_time_pane_g6

0x5390,	// (0x00046eb4) aid_size_touch_calib_1_ParamLimits

0x5390,	// (0x00046eb4) aid_size_touch_calib_1

0x539c,	// (0x00046ec0) aid_size_touch_calib_2_ParamLimits

0x539c,	// (0x00046ec0) aid_size_touch_calib_2

0x53b2,	// (0x00046ed6) aid_size_touch_calib_3_ParamLimits

0x53b2,	// (0x00046ed6) aid_size_touch_calib_3

0x53d0,	// (0x00046ef4) aid_size_touch_calib_4_ParamLimits

0x53d0,	// (0x00046ef4) aid_size_touch_calib_4

0x53e6,	// (0x00046f0a) main_touch_calib_button_group_pane_ParamLimits

0x53e6,	// (0x00046f0a) main_touch_calib_button_group_pane

0x53fe,	// (0x00046f22) main_touch_calib_pane_g1_ParamLimits

0x540a,	// (0x00046f2e) main_touch_calib_pane_g2_ParamLimits

0x5416,	// (0x00046f3a) main_touch_calib_pane_g3_ParamLimits

0x5422,	// (0x00046f46) main_touch_calib_pane_g4_ParamLimits

0xf579,	// (0x0005109d) main_touch_calib_pane_g_ParamLimits

0x542e,	// (0x00046f52) main_touch_calib_pane_t1_ParamLimits

0x5448,	// (0x00046f6c) main_touch_calib_pane_t2_ParamLimits

0x5462,	// (0x00046f86) main_touch_calib_pane_t3_ParamLimits

0x5476,	// (0x00046f9a) main_touch_calib_pane_t4_ParamLimits

0x548a,	// (0x00046fae) main_touch_calib_pane_t5_ParamLimits

0xf582,	// (0x000510a6) main_touch_calib_pane_t_ParamLimits

0xebeb,	// (0x0005070f) list_single_fp_cale_pane_g3_ParamLimits

0xebeb,	// (0x0005070f) list_single_fp_cale_pane_g3

0xd8c7,	// (0x0004f3eb) bg_button_pane_cp012_ParamLimits

0xd8c7,	// (0x0004f3eb) bg_vkb2_func_pane_cp03_ParamLimits

0x7877,	// (0x0004939b) cell_vitu2_function_top_pane_g1_ParamLimits

0xd8c7,	// (0x0004f3eb) bg_vkb2_func_pane_cp04_ParamLimits

0x8baa,	// (0x0004a6ce) main_ncimui_button_group_pane_ParamLimits

0x8baa,	// (0x0004a6ce) main_ncimui_button_group_pane

0x8bf8,	// (0x0004a71c) main_ncimui_pane_t3_ParamLimits

0x8bf8,	// (0x0004a71c) main_ncimui_pane_t3

0xb4eb,	// (0x0004d00f) phacti_button_group_pane

0xb7ce,	// (0x0004d2f2) aid_size_list_single_double_ParamLimits

0x9def,	// (0x0004b913) popup_ezdial_listscroll_window_ParamLimits

0x9e0b,	// (0x0004b92f) popup_number_entry_window_cp01_ParamLimits

0x9eb6,	// (0x0004b9da) phacti_button_pane_ParamLimits

0x9eb6,	// (0x0004b9da) phacti_button_pane

0xa6a2,	// (0x0004c1c6) bg_button_pane_cp14

0xb8a9,	// (0x0004d3cd) phacti_button_pane_t1

0x9ec7,	// (0x0004b9eb) main_touch_calib_button_pane_ParamLimits

0x9ec7,	// (0x0004b9eb) main_touch_calib_button_pane

0xc558,	// (0x0004e07c) bg_button_pane_cp18_ParamLimits

0xc558,	// (0x0004e07c) bg_button_pane_cp18

0xb8b7,	// (0x0004d3db) main_touch_calib_button_pane_t1_ParamLimits

0xb8b7,	// (0x0004d3db) main_touch_calib_button_pane_t1

0xb8cd,	// (0x0004d3f1) main_touch_calib_button_pane_t2_ParamLimits

0xb8cd,	// (0x0004d3f1) main_touch_calib_button_pane_t2

0x0001,

0xfbd6,	// (0x000516fa) main_touch_calib_button_pane_t_ParamLimits

0xfbd6,	// (0x000516fa) main_touch_calib_button_pane_t

0xa6a2,	// (0x0004c1c6) cell_ncimui_button_pane

0xa6a2,	// (0x0004c1c6) bg_button_pane_cp032

0xb8eb,	// (0x0004d40f) cell_ncimui_button_pane_t1

0xad7e,	// (0x0004c8a2) image3_infobar_pane_ParamLimits

0xad7e,	// (0x0004c8a2) image3_infobar_pane

0x9321,	// (0x0004ae45) fs_bigclock_status_pane_ParamLimits

0x9321,	// (0x0004ae45) fs_bigclock_status_pane

0x932e,	// (0x0004ae52) main_fs_bigclock_clock_pane_ParamLimits

0x932e,	// (0x0004ae52) main_fs_bigclock_clock_pane

0x9341,	// (0x0004ae65) main_fs_bigclock_indi_pane_ParamLimits

0x9341,	// (0x0004ae65) main_fs_bigclock_indi_pane

0x9359,	// (0x0004ae7d) main_fs_bigclock_swipe_pane_ParamLimits

0x9359,	// (0x0004ae7d) main_fs_bigclock_swipe_pane

0xa6a2,	// (0x0004c1c6) main_fs_clock_dumped_data

0x937a,	// (0x0004ae9e) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0x937a,	// (0x0004ae9e) list_single_fs_bigclock_indicator_pane_g1

0x9398,	// (0x0004aebc) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0x9398,	// (0x0004aebc) list_single_fs_bigclock_indicator_pane_g2

0x93b2,	// (0x0004aed6) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0x93b2,	// (0x0004aed6) list_single_fs_bigclock_indicator_pane_g3

0x93cc,	// (0x0004aef0) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0x93cc,	// (0x0004aef0) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfa12,	// (0x00051536) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfa12,	// (0x00051536) list_single_fs_bigclock_indicator_pane_g

0x93f2,	// (0x0004af16) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0x93f2,	// (0x0004af16) list_single_fs_bigclock_indicator_pane_t1

0x941a,	// (0x0004af3e) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0x941a,	// (0x0004af3e) list_single_fs_bigclock_indicator_pane_t2

0x9442,	// (0x0004af66) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0x9442,	// (0x0004af66) list_single_fs_bigclock_indicator_pane_t3

0x946a,	// (0x0004af8e) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0x946a,	// (0x0004af8e) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfa1d,	// (0x00051541) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfa1d,	// (0x00051541) list_single_fs_bigclock_indicator_pane_t

0xb8f9,	// (0x0004d41d) image3_infobar_fav_pane_ParamLimits

0xb8f9,	// (0x0004d41d) image3_infobar_fav_pane

0xb909,	// (0x0004d42d) image3_infobar_loc_pane_ParamLimits

0xb909,	// (0x0004d42d) image3_infobar_loc_pane

0xb91d,	// (0x0004d441) image3_infobar_time_pane_ParamLimits

0xb91d,	// (0x0004d441) image3_infobar_time_pane

0xe87e,	// (0x000503a2) image3_infobar_time_pane_g1

0xb92d,	// (0x0004d451) image3_infobar_time_pane_t1

0xe87e,	// (0x000503a2) image3_infobar_loc_pane_g1

0xb93b,	// (0x0004d45f) image3_infobar_loc_pane_g2

0x0001,

0xfbdb,	// (0x000516ff) image3_infobar_loc_pane_g

0xb943,	// (0x0004d467) image3_infobar_loc_pane_t1

0xe87e,	// (0x000503a2) image3_infobar_fav_pane_g1

0xb951,	// (0x0004d475) image3_infobar_fav_pane_g2

0x0001,

0xfbe0,	// (0x00051704) image3_infobar_fav_pane_g

0xb959,	// (0x0004d47d) fs_bigclock_status_battery_pane

0xb962,	// (0x0004d486) fs_bigclock_status_signal_pane

0xb96b,	// (0x0004d48f) fs_bigclock_status_title_pane

0xb974,	// (0x0004d498) fs_bigclock_status_signal_pane_g1

0xb97d,	// (0x0004d4a1) fs_bigclock_status_signal_pane_g2

0x0001,

0xfbe5,	// (0x00051709) fs_bigclock_status_signal_pane_g

0xb985,	// (0x0004d4a9) fs_bigclock_status_battery_pane_g1

0xb98e,	// (0x0004d4b2) fs_bigclock_status_battery_pane_g2

0x0001,

0xfbea,	// (0x0005170e) fs_bigclock_status_battery_pane_g

0xb996,	// (0x0004d4ba) fs_bigclock_status_title_pane_t1

0xe87e,	// (0x000503a2) main_fs_bigclock_clock_pane_g1

0xb9a4,	// (0x0004d4c8) main_fs_bigclock_clock_pane_g2

0xb9a4,	// (0x0004d4c8) main_fs_bigclock_clock_pane_g3

0xb9a4,	// (0x0004d4c8) main_fs_bigclock_clock_pane_g4

0x0003,

0xfbef,	// (0x00051713) main_fs_bigclock_clock_pane_g

0xb9ac,	// (0x0004d4d0) main_fs_bigclock_clock_pane_t1

0xb9ba,	// (0x0004d4de) main_fs_bigclock_clock_pane_t2

0x0001,

0xfbf8,	// (0x0005171c) main_fs_bigclock_clock_pane_t

0xb9c9,	// (0x0004d4ed) list_single_fs_bigclock_indicator_pane_ParamLimits

0xb9c9,	// (0x0004d4ed) list_single_fs_bigclock_indicator_pane

0x9edc,	// (0x0004ba00) list_single_fs_bigclock_pane_ParamLimits

0x9edc,	// (0x0004ba00) list_single_fs_bigclock_pane

0xb9e3,	// (0x0004d507) main_fs_bigclock_indicator_pane_t1

0xb9f2,	// (0x0004d516) list_single_fs_bigclock_pane_g1

0xb9fa,	// (0x0004d51e) list_single_fs_bigclock_pane_t1

0xe87e,	// (0x000503a2) main_fs_bigclock_swipe_pane_g1

0xba38,	// (0x0004d55c) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfc09,	// (0x0005172d) main_fs_bigclock_swipe_pane_g

0xba40,	// (0x0004d564) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xba40,	// (0x0004d564) main_fs_bigclock_swipe_pane_t1

0x3436,	// (0x00044f5a) call_type_pane_ParamLimits

0xa6a2,	// (0x0004c1c6) main_btmg_pane

0xb6b7,	// (0x0004d1db) list_single_cale_mrui_row_pane_g2_ParamLimits

0xb6b7,	// (0x0004d1db) list_single_cale_mrui_row_pane_g2

0x0001,

0xfb85,	// (0x000516a9) list_single_cale_mrui_row_pane_g_ParamLimits

0xfb85,	// (0x000516a9) list_single_cale_mrui_row_pane_g

0xb808,	// (0x0004d32c) list_recal_vselct_arw_lo_pane

0xb810,	// (0x0004d334) list_recal_vselct_arw_up_pane

0xb054,	// (0x0004cb78) list_recal_vselct_pane

0xba5d,	// (0x0004d581) btmg_button_pane

0x9f42,	// (0x0004ba66) main_btmg_pane_g1

0xa6a2,	// (0x0004c1c6) bg_button_pane_cp044

0xba67,	// (0x0004d58b) btmg_button_pane_t1

0xe425,	// (0x0004ff49) aid_listscroll_gen

0xd8c7,	// (0x0004f3eb) main_cntbar_detail_pane

0xb3dd,	// (0x0004cf01) list_cmail_folder_pane

0xb3ed,	// (0x0004cf11) sp_fs_scroll_pane_cp03_ParamLimits

0x172f,	// (0x00043253) list_single_fs_dyc_pane_cp01_ParamLimits

0x172f,	// (0x00043253) list_single_fs_dyc_pane_cp01

0xba75,	// (0x0004d599) aid_size_cmail_indent

0xba7e,	// (0x0004d5a2) list_single_dyc_row_pane_cp01

0x9f78,	// (0x0004ba9c) cntbar_detail_list_pane_ParamLimits

0x9f78,	// (0x0004ba9c) cntbar_detail_list_pane

0x9fc4,	// (0x0004bae8) main_cntbar_detail_cont_pane_ParamLimits

0x9fc4,	// (0x0004bae8) main_cntbar_detail_cont_pane

0x342a,	// (0x00044f4e) scroll_pane_cp032_ParamLimits

0x342a,	// (0x00044f4e) scroll_pane_cp032

0x9fd8,	// (0x0004bafc) cntbar_detail_list_event_pane_ParamLimits

0x9fd8,	// (0x0004bafc) cntbar_detail_list_event_pane

0x9f88,	// (0x0004baac) cntbar_detail_list_shct_pane

0xc9b6,	// (0x0004e4da) aid_list_gen

0xba87,	// (0x0004d5ab) aid_scroll

0xba90,	// (0x0004d5b4) aid_size_touch_scroll_bar

0xba99,	// (0x0004d5bd) aid_list_double

0xbaa2,	// (0x0004d5c6) aid_list_single

0xbaab,	// (0x0004d5cf) aid_list_single_lg

0xbab4,	// (0x0004d5d8) aid_list_z_g_a_sm

0xbabc,	// (0x0004d5e0) aid_list_z_g_d

0xbac4,	// (0x0004d5e8) aid_txt_z_prm

0x1748,	// (0x0004326c) aid_txt_z_prm_cp01

0x1756,	// (0x0004327a) aid_txt_z_sec

0x9fe8,	// (0x0004bb0c) main_cntbar_detail_cont_pane_g1_ParamLimits

0x9fe8,	// (0x0004bb0c) main_cntbar_detail_cont_pane_g1

0x9ffc,	// (0x0004bb20) main_cntbar_detail_cont_pane_g2_ParamLimits

0x9ffc,	// (0x0004bb20) main_cntbar_detail_cont_pane_g2

0x0001,

0xfc0e,	// (0x00051732) main_cntbar_detail_cont_pane_g_ParamLimits

0xfc0e,	// (0x00051732) main_cntbar_detail_cont_pane_g

0xbad2,	// (0x0004d5f6) main_cntbar_detail_cont_pane_t1

0xbae0,	// (0x0004d604) main_cntbar_detail_cont_pane_t2

0xbaee,	// (0x0004d612) main_cntbar_detail_cont_pane_t3

0x0002,

0xfc13,	// (0x00051737) main_cntbar_detail_cont_pane_t

0xa00c,	// (0x0004bb30) cell_cntbar_detail_list_shct_pane_ParamLimits

0xa00c,	// (0x0004bb30) cell_cntbar_detail_list_shct_pane

0xbafc,	// (0x0004d620) cntbar_detail_list_shct_pane_g1

0xbb05,	// (0x0004d629) cntbar_detail_list_shct_pane_g2

0x0001,

0xfc1a,	// (0x0005173e) cntbar_detail_list_shct_pane_g

0xa020,	// (0x0004bb44) cntbar_detail_list_event_pane_g1_ParamLimits

0xa020,	// (0x0004bb44) cntbar_detail_list_event_pane_g1

0xa02c,	// (0x0004bb50) cntbar_detail_list_event_pane_g2_ParamLimits

0xa02c,	// (0x0004bb50) cntbar_detail_list_event_pane_g2

0x0005,

0xfc1f,	// (0x00051743) cntbar_detail_list_event_pane_g_ParamLimits

0xfc1f,	// (0x00051743) cntbar_detail_list_event_pane_g

0xa098,	// (0x0004bbbc) cntbar_detail_list_event_pane_t1_ParamLimits

0xa098,	// (0x0004bbbc) cntbar_detail_list_event_pane_t1

0xa0ad,	// (0x0004bbd1) cntbar_detail_list_event_pane_t2_ParamLimits

0xa0ad,	// (0x0004bbd1) cntbar_detail_list_event_pane_t2

0x0002,

0xfc2c,	// (0x00051750) cntbar_detail_list_event_pane_t_ParamLimits

0xfc2c,	// (0x00051750) cntbar_detail_list_event_pane_t

0xe87e,	// (0x000503a2) cell_cntbar_detail_list_shct_pane_g1

0x3787,	// (0x000452ab) navi_pane_mv_g3

0xd8c7,	// (0x0004f3eb) main_cntbar_detail_pane_ParamLimits

0xa6a2,	// (0x0004c1c6) main_notif_wgt_pane

0xab94,	// (0x0004c6b8) aid_tch_main_mp4_pane_g4

0xad76,	// (0x0004c89a) popup_slider_window_cp02

0xb7ff,	// (0x0004d323) list_recal_day_event_pane

0x9f4c,	// (0x0004ba70) cntbar_detail_btn_pane_ParamLimits

0x9f4c,	// (0x0004ba70) cntbar_detail_btn_pane

0x9f62,	// (0x0004ba86) cntbar_detail_btn_pane_cp01_ParamLimits

0x9f62,	// (0x0004ba86) cntbar_detail_btn_pane_cp01

0x9f88,	// (0x0004baac) cntbar_detail_list_shct_pane_ParamLimits

0x9f98,	// (0x0004babc) cntbar_detail_pane_g1_ParamLimits

0x9f98,	// (0x0004babc) cntbar_detail_pane_g1

0x9fa8,	// (0x0004bacc) cntbar_detail_pane_t1_ParamLimits

0x9fa8,	// (0x0004bacc) cntbar_detail_pane_t1

0xa038,	// (0x0004bb5c) cntbar_detail_list_event_pane_g3_ParamLimits

0xa038,	// (0x0004bb5c) cntbar_detail_list_event_pane_g3

0xa050,	// (0x0004bb74) cntbar_detail_list_event_pane_g4_ParamLimits

0xa050,	// (0x0004bb74) cntbar_detail_list_event_pane_g4

0xa068,	// (0x0004bb8c) cntbar_detail_list_event_pane_g5_ParamLimits

0xa068,	// (0x0004bb8c) cntbar_detail_list_event_pane_g5

0xa080,	// (0x0004bba4) cntbar_detail_list_event_pane_g6_ParamLimits

0xa080,	// (0x0004bba4) cntbar_detail_list_event_pane_g6

0xa0c2,	// (0x0004bbe6) cntbar_detail_list_event_pane_t3_ParamLimits

0xa0c2,	// (0x0004bbe6) cntbar_detail_list_event_pane_t3

0xa0d4,	// (0x0004bbf8) popup_notif_wgt_window_ParamLimits

0xa0d4,	// (0x0004bbf8) popup_notif_wgt_window

0xa0ed,	// (0x0004bc11) popup_submenu_window_cp01_ParamLimits

0xa0ed,	// (0x0004bc11) popup_submenu_window_cp01

0xcfe0,	// (0x0004eb04) bg_popup_window_pane_cp10

0xbb0e,	// (0x0004d632) listscroll_notif_wgt_pane

0xbb18,	// (0x0004d63c) list_notif_wgt_window

0xbb21,	// (0x0004d645) scroll_pane_cp033

0xbb2a,	// (0x0004d64e) list_notif_wgt_row_pane_ParamLimits

0xbb2a,	// (0x0004d64e) list_notif_wgt_row_pane

0xbb3e,	// (0x0004d662) aid_size_list_notif_wgt_del

0xbb47,	// (0x0004d66b) list_notif_wgt_row_pane_g1

0xbb4f,	// (0x0004d673) list_notif_wgt_row_pane_g2

0xbb57,	// (0x0004d67b) list_notif_wgt_row_pane_g3

0x0002,

0xfc33,	// (0x00051757) list_notif_wgt_row_pane_g

0xbb60,	// (0x0004d684) list_notif_wgt_row_pane_t1

0xbb6e,	// (0x0004d692) list_notif_wgt_row_pane_t2

0xbb7c,	// (0x0004d6a0) list_notif_wgt_row_pane_t3

0x0002,

0xfc3a,	// (0x0005175e) list_notif_wgt_row_pane_t

0x7916,	// (0x0004943a) list_recal_day_event_pane_g1

0xbb8a,	// (0x0004d6ae) list_recal_day_event_pane_t1

0xa6a2,	// (0x0004c1c6) bg_button_pane_cp045

0xbb99,	// (0x0004d6bd) cntbar_detail_btn_pane_t1

0xe42d,	// (0x0004ff51) main_callh_pane_ParamLimits

0xe42d,	// (0x0004ff51) main_callh_pane

0xa6a2,	// (0x0004c1c6) main_coverflow0_pane

0xa6a2,	// (0x0004c1c6) main_wgtman_pane

0x9367,	// (0x0004ae8b) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x9367,	// (0x0004ae8b) main_fs_bigclock_unlock_btn_pane

0xb3b7,	// (0x0004cedb) bg_button_pane_cp16

0xb3c7,	// (0x0004ceeb) cell_tport_appsw_pane_g3

0xa0ff,	// (0x0004bc23) cf0_flow_pane_ParamLimits

0xa0ff,	// (0x0004bc23) cf0_flow_pane

0xbba7,	// (0x0004d6cb) listscroll_cf0_pane

0xbbb0,	// (0x0004d6d4) main_cf0_pane_g1

0xa114,	// (0x0004bc38) main_cf0_pane_t1_ParamLimits

0xa114,	// (0x0004bc38) main_cf0_pane_t1

0xa12b,	// (0x0004bc4f) main_cf0_pane_t2_ParamLimits

0xa12b,	// (0x0004bc4f) main_cf0_pane_t2

0x0001,

0xfc41,	// (0x00051765) main_cf0_pane_t_ParamLimits

0xfc41,	// (0x00051765) main_cf0_pane_t

0xbbba,	// (0x0004d6de) scroll_pane_cp11

0xa142,	// (0x0004bc66) cf0_flow_pane_g1

0xa14a,	// (0x0004bc6e) cf0_flow_pane_g2

0x0001,

0xfc46,	// (0x0005176a) cf0_flow_pane_g

0xa152,	// (0x0004bc76) cf0_flow_pane_t1

0xa6a2,	// (0x0004c1c6) main_call6_pane

0xa6a2,	// (0x0004c1c6) main_calllock_pane

0xa160,	// (0x0004bc84) call6_btn_grp_pane_ParamLimits

0xa160,	// (0x0004bc84) call6_btn_grp_pane

0xa17a,	// (0x0004bc9e) call6_pane_g1_ParamLimits

0xa17a,	// (0x0004bc9e) call6_pane_g1

0xa18f,	// (0x0004bcb3) popup_call6_1st_window_ParamLimits

0xa18f,	// (0x0004bcb3) popup_call6_1st_window

0xa1a0,	// (0x0004bcc4) popup_call6_2nd_window_ParamLimits

0xa1a0,	// (0x0004bcc4) popup_call6_2nd_window

0xa1b1,	// (0x0004bcd5) cell_call6_btn_pane_ParamLimits

0xa1b1,	// (0x0004bcd5) cell_call6_btn_pane

0xcfe0,	// (0x0004eb04) bg_popup_call2_in_pane_cp03

0xbbc5,	// (0x0004d6e9) popup_call6_1st_window_g1

0xbbcd,	// (0x0004d6f1) popup_call6_1st_window_g2

0xbbd5,	// (0x0004d6f9) popup_call6_1st_window_g3

0x0002,

0xfc4b,	// (0x0005176f) popup_call6_1st_window_g

0xbbdd,	// (0x0004d701) popup_call6_1st_window_t1

0xbbec,	// (0x0004d710) popup_call6_1st_window_t2

0xbbfc,	// (0x0004d720) popup_call6_1st_window_t3

0x0002,

0xfc52,	// (0x00051776) popup_call6_1st_window_t

0xcfe0,	// (0x0004eb04) bg_popup_call2_in_pane_cp04

0xbbc5,	// (0x0004d6e9) popup_call6_2nd_window_g1

0xbbcd,	// (0x0004d6f1) popup_call6_2nd_window_g2

0xbbd5,	// (0x0004d6f9) popup_call6_2nd_window_g3

0x0002,

0xfc4b,	// (0x0005176f) popup_call6_2nd_window_g

0xbbdd,	// (0x0004d701) popup_call6_2nd_window_t1

0xa6a2,	// (0x0004c1c6) bg_button_pane_cp15

0xbc0c,	// (0x0004d730) cell_call6_btn_pane_g1

0xbc15,	// (0x0004d739) cell_call6_btn_pane_t1

0xa1c5,	// (0x0004bce9) listscroll_wgtman_pane_ParamLimits

0xa1c5,	// (0x0004bce9) listscroll_wgtman_pane

0xa1e8,	// (0x0004bd0c) wgtman_btn_pane_ParamLimits

0xa1e8,	// (0x0004bd0c) wgtman_btn_pane

0xce93,	// (0x0004e9b7) aid_scroll_copy1

0xbc24,	// (0x0004d748) list_wgtman_pane

0xa22b,	// (0x0004bd4f) wgtman_btn_pane_g1_ParamLimits

0xa22b,	// (0x0004bd4f) wgtman_btn_pane_g1

0xa257,	// (0x0004bd7b) wgtman_btn_pane_t1_ParamLimits

0xa257,	// (0x0004bd7b) wgtman_btn_pane_t1

0xbc2e,	// (0x0004d752) wgtman_btn_pane_t2_ParamLimits

0xbc2e,	// (0x0004d752) wgtman_btn_pane_t2

0x0001,

0xfc59,	// (0x0005177d) wgtman_btn_pane_t_ParamLimits

0xfc59,	// (0x0005177d) wgtman_btn_pane_t

0xa294,	// (0x0004bdb8) listrow_wgtman_pane_ParamLimits

0xa294,	// (0x0004bdb8) listrow_wgtman_pane

0xa2a7,	// (0x0004bdcb) listrow_wgtman_pane_g1

0xa2b0,	// (0x0004bdd4) listrow_wgtman_pane_g2

0x0001,

0xfc5e,	// (0x00051782) listrow_wgtman_pane_g

0x1764,	// (0x00043288) listrow_wgtman_pane_t1

0x1772,	// (0x00043296) listrow_wgtman_pane_t2

0x0001,

0xfc63,	// (0x00051787) listrow_wgtman_pane_t

0x1780,	// (0x000432a4) wait_bar_pane_cp09

0xbc45,	// (0x0004d769) main_calllock_btn_pane

0xbc4f,	// (0x0004d773) main_calllock_pane_g1

0xa6a2,	// (0x0004c1c6) bg_button_pane_cp17

0xbc5a,	// (0x0004d77e) main_calllock_btn_pane_g1

0xbc63,	// (0x0004d787) main_calllock_btn_pane_t1

0xa6a2,	// (0x0004c1c6) main_dialer3_pane

0xa6a2,	// (0x0004c1c6) main_fmrd2_pane

0xe87e,	// (0x000503a2) main_fs_bigclock_unlock_btn_pane_g1

0xbc7a,	// (0x0004d79e) main_fs_bigclock_unlock_btn_pane_t1

0xa2ba,	// (0x0004bdde) area_fmrd2_info_pane_ParamLimits

0xa2ba,	// (0x0004bdde) area_fmrd2_info_pane

0xa2cb,	// (0x0004bdef) area_fmrd2_visual_pane_ParamLimits

0xa2cb,	// (0x0004bdef) area_fmrd2_visual_pane

0xa2d9,	// (0x0004bdfd) fmrd2_indi_pane_ParamLimits

0xa2d9,	// (0x0004bdfd) fmrd2_indi_pane

0xa2e6,	// (0x0004be0a) area_fmrd2_visual_pane_g1

0xa2ee,	// (0x0004be12) area_fmrd2_visual_pane_t1

0xa2fe,	// (0x0004be22) area_fmrd2_visual_pane_t2

0xa30e,	// (0x0004be32) area_fmrd2_visual_pane_t3

0x0002,

0xfc6d,	// (0x00051791) area_fmrd2_visual_pane_t

0xa31e,	// (0x0004be42) area_fmrd2_info_pane_g1

0xa326,	// (0x0004be4a) area_fmrd2_info_pane_t1

0xa336,	// (0x0004be5a) area_fmrd2_info_pane_t2

0xa346,	// (0x0004be6a) area_fmrd2_info_pane_t3

0xa356,	// (0x0004be7a) area_fmrd2_info_pane_t4

0x0003,

0xfc74,	// (0x00051798) area_fmrd2_info_pane_t

0xa364,	// (0x0004be88) fmrd2_indi_pane_t1

0xa374,	// (0x0004be98) fmrd2_indi_pane_t2

0xa384,	// (0x0004bea8) fmrd2_indi_pane_t3

0x0002,

0xfc7d,	// (0x000517a1) fmrd2_indi_pane_t

0x93db,	// (0x0004aeff) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0x93db,	// (0x0004aeff) list_single_fs_bigclock_indicator_pane_g5

0x947f,	// (0x0004afa3) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0x947f,	// (0x0004afa3) list_single_fs_bigclock_indicator_pane_t5

0x9c37,	// (0x0004b75b) aid_cell_bcale_month_pane_ParamLimits

0x9c37,	// (0x0004b75b) aid_cell_bcale_month_pane

0x9c49,	// (0x0004b76d) bcale_month_pane_ParamLimits

0x9c49,	// (0x0004b76d) bcale_month_pane

0x9c63,	// (0x0004b787) bcale_preview_pane_ParamLimits

0x9c63,	// (0x0004b787) bcale_preview_pane

0xb9fa,	// (0x0004d51e) list_single_fs_bigclock_pane_t1_ParamLimits

0xba14,	// (0x0004d538) list_single_fs_bigclock_pane_t2_ParamLimits

0xba14,	// (0x0004d538) list_single_fs_bigclock_pane_t2

0x0001,

0xfc04,	// (0x00051728) list_single_fs_bigclock_pane_t_ParamLimits

0xfc04,	// (0x00051728) list_single_fs_bigclock_pane_t

0xbc72,	// (0x0004d796) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfc68,	// (0x0005178c) main_fs_bigclock_unlock_btn_pane_g

0xa394,	// (0x0004beb8) aid_dia3_key_size_ParamLimits

0xa394,	// (0x0004beb8) aid_dia3_key_size

0xa3a3,	// (0x0004bec7) aid_dia3_listrow_size_ParamLimits

0xa3a3,	// (0x0004bec7) aid_dia3_listrow_size

0xa3b8,	// (0x0004bedc) dia3_keypad_fun_pane_ParamLimits

0xa3b8,	// (0x0004bedc) dia3_keypad_fun_pane

0xa3d4,	// (0x0004bef8) dia3_keypad_num_pane_ParamLimits

0xa3d4,	// (0x0004bef8) dia3_keypad_num_pane

0xa3ef,	// (0x0004bf13) dia3_listscroll_pane_ParamLimits

0xa3ef,	// (0x0004bf13) dia3_listscroll_pane

0xa402,	// (0x0004bf26) dia3_numentry_pane_ParamLimits

0xa402,	// (0x0004bf26) dia3_numentry_pane

0xbc88,	// (0x0004d7ac) dia3_list_pane

0xbc93,	// (0x0004d7b7) scroll_pane_cp12

0xa6a2,	// (0x0004c1c6) bg_dia3_numentry_pane

0xa416,	// (0x0004bf3a) dia3_numentry_pane_t1

0xa425,	// (0x0004bf49) cell_dia3_key_num_pane

0xa42d,	// (0x0004bf51) cell_dia3_key0_fun_pane_ParamLimits

0xa42d,	// (0x0004bf51) cell_dia3_key0_fun_pane

0xa441,	// (0x0004bf65) cell_dia3_key1_fun_pane_ParamLimits

0xa441,	// (0x0004bf65) cell_dia3_key1_fun_pane

0xa459,	// (0x0004bf7d) dia3_listrow_pane

0x8dfe,	// (0x0004a922) bg_dia3_numentry_pane_g1

0xa6a2,	// (0x0004c1c6) bg_button_pane_cp21

0xbc9e,	// (0x0004d7c2) cell_dia3_key_num_pane_t1

0xbcac,	// (0x0004d7d0) cell_dia3_key_num_pane_t2

0xbcbb,	// (0x0004d7df) cell_dia3_key_num_pane_t3

0xbcca,	// (0x0004d7ee) cell_dia3_key_num_pane_t4

0x0003,

0xfc84,	// (0x000517a8) cell_dia3_key_num_pane_t

0xa6a2,	// (0x0004c1c6) bg_button_pane_cp19

0xa46b,	// (0x0004bf8f) cell_dia3_key0_fun_pane_g1

0xa6a2,	// (0x0004c1c6) bg_button_pane_cp20

0xa473,	// (0x0004bf97) cell_dia3_key1_fun_pane_g1

0xa47b,	// (0x0004bf9f) area_left_week_number_pane

0xdc9c,	// (0x0004f7c0) area_top_day_name_pane

0xa484,	// (0x0004bfa8) frame_month_view_pane

0xa48c,	// (0x0004bfb0) grid_month_view_pane

0xa496,	// (0x0004bfba) cell_top_day_name_pane_ParamLimits

0xa496,	// (0x0004bfba) cell_top_day_name_pane

0x9d89,	// (0x0004b8ad) cell_area_left_week_number_pane_ParamLimits

0x9d89,	// (0x0004b8ad) cell_area_left_week_number_pane

0xa4ac,	// (0x0004bfd0) cell_month_view_pane_ParamLimits

0xa4ac,	// (0x0004bfd0) cell_month_view_pane

0xbcd9,	// (0x0004d7fd) frm_month_g1

0xa4c7,	// (0x0004bfeb) frm_month_g2

0xa4cf,	// (0x0004bff3) frm_month_g3

0xa4d7,	// (0x0004bffb) frm_month_g4

0xa4df,	// (0x0004c003) frm_month_g5

0xa4e7,	// (0x0004c00b) frm_month_g6

0xa4ef,	// (0x0004c013) frm_month_g7

0xbce2,	// (0x0004d806) frm_month_g8

0xa4f7,	// (0x0004c01b) frm_month_g9

0xa500,	// (0x0004c024) frm_month_g10

0xa509,	// (0x0004c02d) frm_month_g11

0xa512,	// (0x0004c036) frm_month_g12

0xa51b,	// (0x0004c03f) frm_month_g13

0xa524,	// (0x0004c048) frm_month_g14

0xa52d,	// (0x0004c051) frm_month_g15

0xa536,	// (0x0004c05a) frm_month_g16

0x000f,

0xfc8d,	// (0x000517b1) frm_month_g

0xa53f,	// (0x0004c063) cell_top_day_name_pane_t1

0xa54e,	// (0x0004c072) cell_area_left_week_number_pane_g1

0xa53f,	// (0x0004c063) cell_area_left_week_number_pane_t1

0xe87e,	// (0x000503a2) cell_month_view_pane_g1

0xa556,	// (0x0004c07a) cell_month_view_pane_t1

0xa6a2,	// (0x0004c1c6) main_fps_pane

0x993e,	// (0x0004b462) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0x993e,	// (0x0004b462) cmail_ddmenu_btn02_pane_cp1

0x995a,	// (0x0004b47e) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0x995a,	// (0x0004b47e) cmail_ddmenu_btn02_pane_cp2

0x9e3d,	// (0x0004b961) cmail_ddmenu_btn02_pane_g2_ParamLimits

0x9e3d,	// (0x0004b961) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfbb5,	// (0x000516d9) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfbb5,	// (0x000516d9) cmail_ddmenu_btn02_pane_g

0x9e5b,	// (0x0004b97f) cmail_ddmenu_btn02_pane_t2_ParamLimits

0x9e5b,	// (0x0004b97f) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfbba,	// (0x000516de) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfbba,	// (0x000516de) cmail_ddmenu_btn02_pane_t

0xa565,	// (0x0004c089) fps_text_pane_ParamLimits

0xa565,	// (0x0004c089) fps_text_pane

0xa57c,	// (0x0004c0a0) main_fps_pane_g1_ParamLimits

0xa57c,	// (0x0004c0a0) main_fps_pane_g1

0xa596,	// (0x0004c0ba) wait_bar_pane_cp010_ParamLimits

0xa596,	// (0x0004c0ba) wait_bar_pane_cp010

0xa5a7,	// (0x0004c0cb) fps_text_pane_t1_ParamLimits

0xa5a7,	// (0x0004c0cb) fps_text_pane_t1

0x6ac0,	// (0x000485e4) cam4_image_uncrop_pane_g1

0x6ac9,	// (0x000485ed) cam4_image_uncrop_pane_g2

0x6ad2,	// (0x000485f6) cam4_image_uncrop_pane_g3

0x6adb,	// (0x000485ff) cam4_image_uncrop_pane_g4

0x0003,

0xf698,	// (0x000511bc) cam4_image_uncrop_pane_g

0xa459,	// (0x0004bf7d) dia3_listrow_pane_ParamLimits

0xa6a2,	// (0x0004c1c6) main_phob2_pane

0x9a97,	// (0x0004b5bb) cell_tport_appsw_pane_cp02_ParamLimits

0x9a97,	// (0x0004b5bb) cell_tport_appsw_pane_cp02

0x9aab,	// (0x0004b5cf) cell_tport_appsw_pane_cp03_ParamLimits

0x9aab,	// (0x0004b5cf) cell_tport_appsw_pane_cp03

0xa6a2,	// (0x0004c1c6) phob2_contact_card_pane

0xa6a2,	// (0x0004c1c6) phob2_listscroll_pane

0xbceb,	// (0x0004d80f) phob2_list_pane

0xbcf3,	// (0x0004d817) scroll_pane_cp034

0xa5bf,	// (0x0004c0e3) phob2_cc_data_pane_ParamLimits

0xa5bf,	// (0x0004c0e3) phob2_cc_data_pane

0xa5de,	// (0x0004c102) phob2_cc_listscroll_pane_ParamLimits

0xa5de,	// (0x0004c102) phob2_cc_listscroll_pane

0x6f5c,	// (0x00048a80) list_double_large_graphic_phob2_pane_ParamLimits

0x6f5c,	// (0x00048a80) list_double_large_graphic_phob2_pane

0xa5fc,	// (0x0004c120) list_double_large_graphic_phob2_pane_g1_ParamLimits

0xa5fc,	// (0x0004c120) list_double_large_graphic_phob2_pane_g1

0x1788,	// (0x000432ac) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x1788,	// (0x000432ac) list_double_large_graphic_phob2_pane_g2

0x0001,

0xfcae,	// (0x000517d2) list_double_large_graphic_phob2_pane_g_ParamLimits

0xfcae,	// (0x000517d2) list_double_large_graphic_phob2_pane_g

0x1794,	// (0x000432b8) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x1794,	// (0x000432b8) list_double_large_graphic_phob2_pane_t1

0x17a9,	// (0x000432cd) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x17a9,	// (0x000432cd) list_double_large_graphic_phob2_pane_t2

0x0001,

0xfcb3,	// (0x000517d7) list_double_large_graphic_phob2_pane_t_ParamLimits

0xfcb3,	// (0x000517d7) list_double_large_graphic_phob2_pane_t

0xa6a2,	// (0x0004c1c6) list_highlight_pane_cp024

0xbcfb,	// (0x0004d81f) phob2_cc_button_pane

0xa609,	// (0x0004c12d) phob2_cc_data_pane_g1_ParamLimits

0xa609,	// (0x0004c12d) phob2_cc_data_pane_g1

0xa61e,	// (0x0004c142) phob2_cc_data_pane_g2_ParamLimits

0xa61e,	// (0x0004c142) phob2_cc_data_pane_g2

0x0001,

0xfcb8,	// (0x000517dc) phob2_cc_data_pane_g_ParamLimits

0xfcb8,	// (0x000517dc) phob2_cc_data_pane_g

0xa630,	// (0x0004c154) phob2_cc_data_pane_t1_ParamLimits

0xa630,	// (0x0004c154) phob2_cc_data_pane_t1

0xa648,	// (0x0004c16c) phob2_cc_data_pane_t2_ParamLimits

0xa648,	// (0x0004c16c) phob2_cc_data_pane_t2

0xa660,	// (0x0004c184) phob2_cc_data_pane_t3_ParamLimits

0xa660,	// (0x0004c184) phob2_cc_data_pane_t3

0x0002,

0xfcbd,	// (0x000517e1) phob2_cc_data_pane_t_ParamLimits

0xfcbd,	// (0x000517e1) phob2_cc_data_pane_t

0xbd03,	// (0x0004d827) phob2_cc_list_pane_ParamLimits

0xbd03,	// (0x0004d827) phob2_cc_list_pane

0x7b87,	// (0x000496ab) scroll_pane_cp035_ParamLimits

0x7b87,	// (0x000496ab) scroll_pane_cp035

0xd8c7,	// (0x0004f3eb) bg_button_pane_cp033

0xbd0f,	// (0x0004d833) phob2_cc_button_pane_g1

0xbd1b,	// (0x0004d83f) phob2_cc_button_pane_t1

0xbd30,	// (0x0004d854) phob2_cc_button_pane_t2

0x0001,

0xfcc4,	// (0x000517e8) phob2_cc_button_pane_t

0xa67a,	// (0x0004c19e) list_double_large_graphic_phob2_cc_pane_ParamLimits

0xa67a,	// (0x0004c19e) list_double_large_graphic_phob2_cc_pane

0xa68e,	// (0x0004c1b2) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0xa68e,	// (0x0004c1b2) list_double_large_graphic_phob2_cc_pane_g1

0x17bb,	// (0x000432df) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x17bb,	// (0x000432df) list_double_large_graphic_phob2_cc_pane_g2

0x17c7,	// (0x000432eb) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x17c7,	// (0x000432eb) list_double_large_graphic_phob2_cc_pane_g3

0x17d3,	// (0x000432f7) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x17d3,	// (0x000432f7) list_double_large_graphic_phob2_cc_pane_g4

0x17df,	// (0x00043303) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x17df,	// (0x00043303) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xfcc9,	// (0x000517ed) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xfcc9,	// (0x000517ed) list_double_large_graphic_phob2_cc_pane_g

0x17eb,	// (0x0004330f) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x17eb,	// (0x0004330f) list_double_large_graphic_phob2_cc_pane_t1

0x1814,	// (0x00043338) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x1814,	// (0x00043338) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xfcd4,	// (0x000517f8) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xfcd4,	// (0x000517f8) list_double_large_graphic_phob2_cc_pane_t

0xbd42,	// (0x0004d866) list_highlight_pane_cp025_ParamLimits

0xbd42,	// (0x0004d866) list_highlight_pane_cp025

0xd8c7,	// (0x0004f3eb) bg_button_pane_cp033_ParamLimits

0xbd0f,	// (0x0004d833) phob2_cc_button_pane_g1_ParamLimits

0xbd1b,	// (0x0004d83f) phob2_cc_button_pane_t1_ParamLimits

0xbd30,	// (0x0004d854) phob2_cc_button_pane_t2_ParamLimits

0xfcc4,	// (0x000517e8) phob2_cc_button_pane_t_ParamLimits

0x1a57,	// (0x0004357b) popup_wgtman_window

0x734f,	// (0x00048e73) scroll_pane_cp038

0xa20d,	// (0x0004bd31) wgtman_btn_pane_cp_01_ParamLimits

0xa20d,	// (0x0004bd31) wgtman_btn_pane_cp_01

0xbd50,	// (0x0004d874) wgtman_content_pane

0xba99,	// (0x0004d5bd) wgtman_heading_pane

0xa6a2,	// (0x0004c1c6) bg_heading_pane_cp02

0xbd59,	// (0x0004d87d) wgtman_heading_pane_g1

0xbd61,	// (0x0004d885) wgtman_heading_pane_t1

0xbd6f,	// (0x0004d893) scroll_pane_cp036

0xbd77,	// (0x0004d89b) wgtman_list_pane

0xbd7f,	// (0x0004d8a3) wgtman_list_pane_t1_ParamLimits

0xbd7f,	// (0x0004d8a3) wgtman_list_pane_t1

0xadd0,	// (0x0004c8f4) cam4_grid_pane

0x1082,	// (0x00042ba6) bg_button_pane_cp015_ParamLimits

0x7a1a,	// (0x0004953e) bg_button_pane_cp016_ParamLimits

0x7a2d,	// (0x00049551) bg_button_pane_cp017_ParamLimits

0x10ca,	// (0x00042bee) popup_vitu2_query_window_g3_ParamLimits

0x10ca,	// (0x00042bee) popup_vitu2_query_window_g3

0x1145,	// (0x00042c69) popup_vitu2_query_window_t6_ParamLimits

0x1145,	// (0x00042c69) popup_vitu2_query_window_t6

0x1170,	// (0x00042c94) popup_vitu2_query_window_t7_ParamLimits

0x1170,	// (0x00042c94) popup_vitu2_query_window_t7

0x6ac0,	// (0x000485e4) cam4_grid_pane_g1

0x6ac9,	// (0x000485ed) cam4_grid_pane_g2

0xbd9d,	// (0x0004d8c1) cam4_grid_pane_g3

0xbda6,	// (0x0004d8ca) cam4_grid_pane_g4

0x0003,

0xfcd9,	// (0x000517fd) cam4_grid_pane_g

0x2613,	// (0x00044137) aid_placing_vt_slider_lsc_ParamLimits

0x2910,	// (0x00044434) vidtel_button_pane_ParamLimits

0x2910,	// (0x00044434) vidtel_button_pane

0xa6a2,	// (0x0004c1c6) bg_button_pane_cp034

0xa69a,	// (0x0004c1be) vidtel_button_pane_g1

0xbdb1,	// (0x0004d8d5) vidtel_button_pane_t1

0x7732,	// (0x00049256) aid_size_vtel_slider_touch

0x7b87,	// (0x000496ab) scroll_pane_cp039

0x8e6d,	// (0x0004a991) ncim_query_button_pane_cp01_ParamLimits

0x8e8c,	// (0x0004a9b0) ncimui_query_pane_g1_ParamLimits

0xd8c7,	// (0x0004f3eb) input_focus_pane_cp012_ParamLimits

0x8eb1,	// (0x0004a9d5) ncim_query_entry_pane_t1_ParamLimits

0x7b87,	// (0x000496ab) scroll_pane_cp039_ParamLimits
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

} // end of namespace AknLayoutScalable_Elaf_pnl4_apps_nhd4_lsc_tch_Small
