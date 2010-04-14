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

#include "aknlayoutscalable_elaf_pvl4_apps_vga4_lsc_tch_small.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pvp4_apps_vga4_prt_tch[]; }

namespace AknLayoutScalable_Elaf_pvl4_apps_vga4_lsc_tch_Small
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pvp4_apps_vga4_prt_tch + 0x0004e862 };

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
0x0a7b,	// (0x0004f2dd) Screen

0x0a87,	// (0x0004f2e9) application_window

0x0ad3,	// (0x0004f335) area_bottom_pane_ParamLimits

0x0ad3,	// (0x0004f335) area_bottom_pane

0x0b0c,	// (0x0004f36e) area_top_pane_ParamLimits

0x0b0c,	// (0x0004f36e) area_top_pane

0x9a1e,	// (0x00058280) call_video_uplink_pane_ParamLimits

0x9a1e,	// (0x00058280) call_video_uplink_pane

0x0b9a,	// (0x0004f3fc) main_pane_ParamLimits

0x0b9a,	// (0x0004f3fc) main_pane

0xc7fd,	// (0x0005b05f) context_pane

0x4542,	// (0x00052da4) navi_pane

0x4572,	// (0x00052dd4) popup_cale_events_window_ParamLimits

0x4572,	// (0x00052dd4) popup_cale_events_window

0xc810,	// (0x0005b072) popup_mup_playback_window

0x458a,	// (0x00052dec) signal_pane

0xa19f,	// (0x00058a01) main_browser_pane

0xb375,	// (0x00059bd7) main_burst_pane

0x4244,	// (0x00052aa6) main_calc_pane

0xc7a0,	// (0x0005b002) main_cale_day_pane

0x11dc,	// (0x0004fa3e) main_cale_month_pane

0xc7a0,	// (0x0005b002) main_cale_week_pane

0xb375,	// (0x00059bd7) main_call_pane

0x9e5d,	// (0x000586bf) main_call_poc_pane

0xb375,	// (0x00059bd7) main_camera_pane

0xb375,	// (0x00059bd7) main_chi_dic_pane

0xb217,	// (0x00059a79) main_clock_pane

0x9e5d,	// (0x000586bf) main_fmradio_pane

0xb375,	// (0x00059bd7) main_graph_messa_pane

0x9e5d,	// (0x000586bf) main_help_pane

0xa19f,	// (0x00058a01) main_im_pane

0xa0b8,	// (0x0005891a) main_image_pane_ParamLimits

0xa0b8,	// (0x0005891a) main_image_pane

0x9e5d,	// (0x000586bf) main_location2_pane

0xb375,	// (0x00059bd7) main_location_pane

0xa0b8,	// (0x0005891a) main_messa_pane

0x9e5d,	// (0x000586bf) main_mp2_pane

0xb375,	// (0x00059bd7) main_mp_pane

0x9e5d,	// (0x000586bf) main_msg_pane

0x9e5d,	// (0x000586bf) main_mup_eq_pane

0x9e5d,	// (0x000586bf) main_mup_pane

0xa19f,	// (0x00058a01) main_notes_pane

0x9e5d,	// (0x000586bf) main_pec_pane

0x9e5d,	// (0x000586bf) main_phob_pane

0x9e5d,	// (0x000586bf) main_pinb_pane

0x9e5d,	// (0x000586bf) main_postcard_pane

0x9e5d,	// (0x000586bf) main_qdial_pane

0xb375,	// (0x00059bd7) main_skin_pane

0x9e5d,	// (0x000586bf) main_smil2_pane

0xb375,	// (0x00059bd7) main_smil_pane

0xb375,	// (0x00059bd7) main_video_pane

0xb375,	// (0x00059bd7) main_video_tele_pane

0xa0b8,	// (0x0005891a) main_viewer_pane_ParamLimits

0xa0b8,	// (0x0005891a) main_viewer_pane

0xb375,	// (0x00059bd7) main_vorec_pane

0x429a,	// (0x00052afc) popup_blid_sat_info_window_ParamLimits

0x429a,	// (0x00052afc) popup_blid_sat_info_window

0x42fe,	// (0x00052b60) popup_dyc_status_message_window_ParamLimits

0x42fe,	// (0x00052b60) popup_dyc_status_message_window

0x4318,	// (0x00052b7a) popup_grid_large_graphic_window_ParamLimits

0x4318,	// (0x00052b7a) popup_grid_large_graphic_window

0x43da,	// (0x00052c3c) popup_loc_request_window_ParamLimits

0x43da,	// (0x00052c3c) popup_loc_request_window

0x4516,	// (0x00052d78) popup_wml_address_window_ParamLimits

0x4516,	// (0x00052d78) popup_wml_address_window

0x4082,	// (0x000528e4) call_muted_g1

0x3d16,	// (0x00052578) popup_call_audio_conf_window_ParamLimits

0x3d16,	// (0x00052578) popup_call_audio_conf_window

0x4092,	// (0x000528f4) popup_call_audio_first_window_ParamLimits

0x4092,	// (0x000528f4) popup_call_audio_first_window

0x4108,	// (0x0005296a) popup_call_audio_in_window_ParamLimits

0x4108,	// (0x0005296a) popup_call_audio_in_window

0x4144,	// (0x000529a6) popup_call_audio_out_window_ParamLimits

0x4144,	// (0x000529a6) popup_call_audio_out_window

0x417e,	// (0x000529e0) popup_call_audio_second_window_ParamLimits

0x417e,	// (0x000529e0) popup_call_audio_second_window

0x41d4,	// (0x00052a36) popup_call_audio_wait_window_ParamLimits

0x41d4,	// (0x00052a36) popup_call_audio_wait_window

0x4209,	// (0x00052a6b) popup_number_entry_window_ParamLimits

0x4209,	// (0x00052a6b) popup_number_entry_window

0x9a4a,	// (0x000582ac) bg_popup_call_pane_cp05_ParamLimits

0x9a4a,	// (0x000582ac) bg_popup_call_pane_cp05

0x9a6a,	// (0x000582cc) popup_number_entry_window_t1

0x9a7d,	// (0x000582df) popup_number_entry_window_t2

0x9a8f,	// (0x000582f1) popup_number_entry_window_t3

0x0003,

0xf0c6,	// (0x0005d928) popup_number_entry_window_t

0x9aa1,	// (0x00058303) text_title_cp2

0x9ab4,	// (0x00058316) bg_popup_call_pane_cp_ParamLimits

0x9ab4,	// (0x00058316) bg_popup_call_pane_cp

0x9ac2,	// (0x00058324) call_thumbnail_pane

0x9aca,	// (0x0005832c) popup_call_audio_in_window_g1_ParamLimits

0x9aca,	// (0x0005832c) popup_call_audio_in_window_g1

0x9ad6,	// (0x00058338) popup_call_audio_in_window_g2_ParamLimits

0x9ad6,	// (0x00058338) popup_call_audio_in_window_g2

0x9ae2,	// (0x00058344) popup_call_audio_in_window_g3_ParamLimits

0x9ae2,	// (0x00058344) popup_call_audio_in_window_g3

0x0002,

0xf0cf,	// (0x0005d931) popup_call_audio_in_window_g_ParamLimits

0xf0cf,	// (0x0005d931) popup_call_audio_in_window_g

0x9aee,	// (0x00058350) popup_call_audio_in_window_t1_ParamLimits

0x9aee,	// (0x00058350) popup_call_audio_in_window_t1

0x9b0a,	// (0x0005836c) popup_call_audio_in_window_t2_ParamLimits

0x9b0a,	// (0x0005836c) popup_call_audio_in_window_t2

0x9b26,	// (0x00058388) popup_call_audio_in_window_t3_ParamLimits

0x9b26,	// (0x00058388) popup_call_audio_in_window_t3

0x0002,

0xf0d6,	// (0x0005d938) popup_call_audio_in_window_t_ParamLimits

0xf0d6,	// (0x0005d938) popup_call_audio_in_window_t

0x9ab4,	// (0x00058316) bg_popup_call_pane_cp01_ParamLimits

0x9ab4,	// (0x00058316) bg_popup_call_pane_cp01

0x9ac2,	// (0x00058324) call_thumbnail_pane_cp02

0x9b39,	// (0x0005839b) call_type_pane_cp022

0x9b41,	// (0x000583a3) popup_call_audio_out_window_g1_ParamLimits

0x9b41,	// (0x000583a3) popup_call_audio_out_window_g1

0x9b53,	// (0x000583b5) popup_call_audio_out_window_g2_ParamLimits

0x9b53,	// (0x000583b5) popup_call_audio_out_window_g2

0x9b5f,	// (0x000583c1) popup_call_audio_out_window_g3_ParamLimits

0x9b5f,	// (0x000583c1) popup_call_audio_out_window_g3

0x0002,

0xf0dd,	// (0x0005d93f) popup_call_audio_out_window_g_ParamLimits

0xf0dd,	// (0x0005d93f) popup_call_audio_out_window_g

0x9b71,	// (0x000583d3) popup_call_audio_out_window_t1_ParamLimits

0x9b71,	// (0x000583d3) popup_call_audio_out_window_t1

0x9b89,	// (0x000583eb) popup_call_audio_out_window_t2_ParamLimits

0x9b89,	// (0x000583eb) popup_call_audio_out_window_t2

0x0001,

0xf0e4,	// (0x0005d946) popup_call_audio_out_window_t_ParamLimits

0xf0e4,	// (0x0005d946) popup_call_audio_out_window_t

0x9b9e,	// (0x00058400) bg_popup_call_pane_ParamLimits

0x9b9e,	// (0x00058400) bg_popup_call_pane

0x0d59,	// (0x0004f5bb) call_thumbnail_pane_cp_ParamLimits

0x0d59,	// (0x0004f5bb) call_thumbnail_pane_cp

0x9c22,	// (0x00058484) call_type_pane_cp01_ParamLimits

0x9c22,	// (0x00058484) call_type_pane_cp01

0x9c66,	// (0x000584c8) popup_call_audio_first_window_g1_ParamLimits

0x9c66,	// (0x000584c8) popup_call_audio_first_window_g1

0x9cb2,	// (0x00058514) popup_call_audio_first_window_g2_ParamLimits

0x9cb2,	// (0x00058514) popup_call_audio_first_window_g2

0x0001,

0xf0e9,	// (0x0005d94b) popup_call_audio_first_window_g_ParamLimits

0xf0e9,	// (0x0005d94b) popup_call_audio_first_window_g

0x9cf6,	// (0x00058558) popup_call_audio_first_window_t1_ParamLimits

0x9cf6,	// (0x00058558) popup_call_audio_first_window_t1

0x9da2,	// (0x00058604) popup_call_audio_first_window_t4_ParamLimits

0x9da2,	// (0x00058604) popup_call_audio_first_window_t4

0x9e2e,	// (0x00058690) popup_call_audio_first_window_t5_ParamLimits

0x9e2e,	// (0x00058690) popup_call_audio_first_window_t5

0x0002,

0xf0ee,	// (0x0005d950) popup_call_audio_first_window_t_ParamLimits

0xf0ee,	// (0x0005d950) popup_call_audio_first_window_t

0x9e5d,	// (0x000586bf) bg_popup_call_pane_cp02

0x9e67,	// (0x000586c9) call_type_pane_cp023

0x9e6f,	// (0x000586d1) popup_call_audio_wait_window_g1

0x9e77,	// (0x000586d9) popup_call_audio_wait_window_g2

0x0001,

0xf0f5,	// (0x0005d957) popup_call_audio_wait_window_g

0x9e7f,	// (0x000586e1) popup_call_audio_wait_window_t3

0x9e8d,	// (0x000586ef) bg_popup_call_pane_cp03_ParamLimits

0x9e8d,	// (0x000586ef) bg_popup_call_pane_cp03

0x9eed,	// (0x0005874f) call_thumbnail_pane_cp011_ParamLimits

0x9eed,	// (0x0005874f) call_thumbnail_pane_cp011

0x9ef9,	// (0x0005875b) call_type_pane_cp034_ParamLimits

0x9ef9,	// (0x0005875b) call_type_pane_cp034

0x9f35,	// (0x00058797) popup_call_audio_second_window_g1_ParamLimits

0x9f35,	// (0x00058797) popup_call_audio_second_window_g1

0x9f71,	// (0x000587d3) popup_call_audio_second_window_g2_ParamLimits

0x9f71,	// (0x000587d3) popup_call_audio_second_window_g2

0x0001,

0xf0fa,	// (0x0005d95c) popup_call_audio_second_window_g_ParamLimits

0xf0fa,	// (0x0005d95c) popup_call_audio_second_window_g

0x9fad,	// (0x0005880f) popup_call_audio_second_window_t1_ParamLimits

0x9fad,	// (0x0005880f) popup_call_audio_second_window_t1

0xa02e,	// (0x00058890) popup_call_audio_second_window_t2_ParamLimits

0xa02e,	// (0x00058890) popup_call_audio_second_window_t2

0xa064,	// (0x000588c6) popup_call_audio_second_window_t3_ParamLimits

0xa064,	// (0x000588c6) popup_call_audio_second_window_t3

0x0002,

0xf0ff,	// (0x0005d961) popup_call_audio_second_window_t_ParamLimits

0xf0ff,	// (0x0005d961) popup_call_audio_second_window_t

0x9e5d,	// (0x000586bf) bg_popup_call_pane_cp04

0xa09a,	// (0x000588fc) list_conf_pane

0xa0a2,	// (0x00058904) popup_call_audio_conf_window_t1

0xa0b0,	// (0x00058912) call_thumbnail_pane_g1

0xa0b8,	// (0x0005891a) bg_pinb_pane_ParamLimits

0xa0b8,	// (0x0005891a) bg_pinb_pane

0xa0c6,	// (0x00058928) find_pinb_pane

0xa0cf,	// (0x00058931) listscroll_pinb_pane_ParamLimits

0xa0cf,	// (0x00058931) listscroll_pinb_pane

0xa0de,	// (0x00058940) pinb_bg_pane_g1

0x0d7d,	// (0x0004f5df) pinb_bg_pane_g2

0x0d89,	// (0x0004f5eb) pinb_bg_pane_g3

0x0d95,	// (0x0004f5f7) pinb_bg_pane_g4

0x0da1,	// (0x0004f603) pinb_bg_pane_g5

0x0dad,	// (0x0004f60f) pinb_bg_pane_g6

0x0db8,	// (0x0004f61a) pinb_bg_pane_g7

0x0dc3,	// (0x0004f625) pinb_bg_pane_g8

0x0dce,	// (0x0004f630) pinb_bg_pane_g9

0x0dd8,	// (0x0004f63a) pinb_bg_pane_g10

0x0009,

0xf106,	// (0x0005d968) pinb_bg_pane_g

0x0df5,	// (0x0004f657) grid_pinb_pane

0x0e00,	// (0x0004f662) list_pinb_pane

0x0e0b,	// (0x0004f66d) scroll_pane_cp01_ParamLimits

0x0e0b,	// (0x0004f66d) scroll_pane_cp01

0xa0e8,	// (0x0005894a) find_pinb_pane_g1_ParamLimits

0xa0e8,	// (0x0005894a) find_pinb_pane_g1

0xa100,	// (0x00058962) find_pinb_pane_t1

0xa112,	// (0x00058974) find_pinb_pane_t2

0x0001,

0xf120,	// (0x0005d982) find_pinb_pane_t

0xa127,	// (0x00058989) input_focus_pane_cp01_ParamLimits

0xa127,	// (0x00058989) input_focus_pane_cp01

0x0e1d,	// (0x0004f67f) cell_pinb_pane_ParamLimits

0x0e1d,	// (0x0004f67f) cell_pinb_pane

0x0e3f,	// (0x0004f6a1) cell_pinb_pane_g1_ParamLimits

0x0e3f,	// (0x0004f6a1) cell_pinb_pane_g1

0x0e54,	// (0x0004f6b6) cell_pinb_pane_g2_ParamLimits

0x0e54,	// (0x0004f6b6) cell_pinb_pane_g2

0xa133,	// (0x00058995) cell_pinb_pane_g3_ParamLimits

0xa133,	// (0x00058995) cell_pinb_pane_g3

0x0002,

0xf125,	// (0x0005d987) cell_pinb_pane_g_ParamLimits

0xf125,	// (0x0005d987) cell_pinb_pane_g

0x9e5d,	// (0x000586bf) grid_highlight_pane_cp01

0x0e60,	// (0x0004f6c2) list_pinb_item_pane_ParamLimits

0x0e60,	// (0x0004f6c2) list_pinb_item_pane

0x9e5d,	// (0x000586bf) list_highlight_pane_cp02

0x0e72,	// (0x0004f6d4) list_pinb_item_pane_g1_ParamLimits

0x0e72,	// (0x0004f6d4) list_pinb_item_pane_g1

0x0e7f,	// (0x0004f6e1) list_pinb_item_pane_g2_ParamLimits

0x0e7f,	// (0x0004f6e1) list_pinb_item_pane_g2

0x0e8b,	// (0x0004f6ed) list_pinb_item_pane_g3_ParamLimits

0x0e8b,	// (0x0004f6ed) list_pinb_item_pane_g3

0x0e9c,	// (0x0004f6fe) list_pinb_item_pane_g4_ParamLimits

0x0e9c,	// (0x0004f6fe) list_pinb_item_pane_g4

0x0003,

0xf12c,	// (0x0005d98e) list_pinb_item_pane_g_ParamLimits

0xf12c,	// (0x0005d98e) list_pinb_item_pane_g

0x0ea8,	// (0x0004f70a) list_pinb_item_pane_t1_ParamLimits

0x0ea8,	// (0x0004f70a) list_pinb_item_pane_t1

0x0edd,	// (0x0004f73f) calc_display_pane

0x0f05,	// (0x0004f767) calc_paper_pane

0x0f28,	// (0x0004f78a) grid_calc_pane

0x9e5d,	// (0x000586bf) bg_list_pane_cp01

0x0f56,	// (0x0004f7b8) clock_g1

0x0f5e,	// (0x0004f7c0) clock_g2

0x0001,

0xf135,	// (0x0005d997) clock_g

0x0f66,	// (0x0004f7c8) clock_t1_ParamLimits

0x0f66,	// (0x0004f7c8) clock_t1

0x0f7b,	// (0x0004f7dd) clock_t2_ParamLimits

0x0f7b,	// (0x0004f7dd) clock_t2

0x0f8d,	// (0x0004f7ef) clock_t3_ParamLimits

0x0f8d,	// (0x0004f7ef) clock_t3

0x0f9f,	// (0x0004f801) clock_t4_ParamLimits

0x0f9f,	// (0x0004f801) clock_t4

0x0fb1,	// (0x0004f813) clock_t5_ParamLimits

0x0fb1,	// (0x0004f813) clock_t5

0x0fc6,	// (0x0004f828) clock_t6_ParamLimits

0x0fc6,	// (0x0004f828) clock_t6

0x0fd8,	// (0x0004f83a) clock_t7_ParamLimits

0x0fd8,	// (0x0004f83a) clock_t7

0x0fea,	// (0x0004f84c) clock_t8_ParamLimits

0x0fea,	// (0x0004f84c) clock_t8

0x0ffe,	// (0x0004f860) clock_t9_ParamLimits

0x0ffe,	// (0x0004f860) clock_t9

0x0008,

0xf13a,	// (0x0005d99c) clock_t_ParamLimits

0xf13a,	// (0x0005d99c) clock_t

0xa147,	// (0x000589a9) popup_clock_analogue_window_cp02

0xa147,	// (0x000589a9) popup_clock_digital_window_cp01

0xa14f,	// (0x000589b1) listscroll_help_pane

0x9e5d,	// (0x000586bf) phob_pre_status_pane

0xa159,	// (0x000589bb) grid_qdial_pane

0xa0b8,	// (0x0005891a) listscroll_mce_pane

0xa0b8,	// (0x0005891a) bg_notes_pane

0xa163,	// (0x000589c5) list_notes_pane

0x1014,	// (0x0004f876) scroll_pane_cp06

0xa171,	// (0x000589d3) bg_calc_paper_pane

0xa185,	// (0x000589e7) list_calc_pane

0xa19f,	// (0x00058a01) bg_calc_display_pane

0x1028,	// (0x0004f88a) calc_display_pane_t1

0x103a,	// (0x0004f89c) calc_display_pane_t2

0xa1ab,	// (0x00058a0d) calc_display_pane_t3

0x0002,

0xf14d,	// (0x0005d9af) calc_display_pane_t

0x104c,	// (0x0004f8ae) cell_calc_pane_ParamLimits

0x104c,	// (0x0004f8ae) cell_calc_pane

0xa1bd,	// (0x00058a1f) bg_calc_paper_pane_g1

0xa1c9,	// (0x00058a2b) bg_calc_paper_pane_g2

0xa1d5,	// (0x00058a37) bg_calc_paper_pane_g3

0xa1e1,	// (0x00058a43) bg_calc_paper_pane_g4

0xa1ed,	// (0x00058a4f) bg_calc_paper_pane_g5

0x1089,	// (0x0004f8eb) bg_calc_paper_pane_g6

0x109c,	// (0x0004f8fe) bg_calc_paper_pane_g7

0x10af,	// (0x0004f911) bg_calc_paper_pane_g8

0x0007,

0xf154,	// (0x0005d9b6) bg_calc_paper_pane_g

0x10c0,	// (0x0004f922) calc_bg_paper_pane_g9

0x10d1,	// (0x0004f933) list_calc_item_pane_ParamLimits

0x10d1,	// (0x0004f933) list_calc_item_pane

0xa1f9,	// (0x00058a5b) list_calc_item_pane_g1

0xa206,	// (0x00058a68) list_calc_item_pane_t1_ParamLimits

0xa206,	// (0x00058a68) list_calc_item_pane_t1

0x10e9,	// (0x0004f94b) list_calc_item_pane_t2_ParamLimits

0x10e9,	// (0x0004f94b) list_calc_item_pane_t2

0x0001,

0xf165,	// (0x0005d9c7) list_calc_item_pane_t_ParamLimits

0xf165,	// (0x0005d9c7) list_calc_item_pane_t

0xa218,	// (0x00058a7a) cell_calc_pane_g1

0xa222,	// (0x00058a84) grid_highlight_pane_cp02

0xa244,	// (0x00058aa6) bg_calc_display_pane_g1

0xa24d,	// (0x00058aaf) bg_calc_display_pane_g2

0xa257,	// (0x00058ab9) bg_calc_display_pane_g3

0x0002,

0xf16f,	// (0x0005d9d1) bg_calc_display_pane_g

0x111b,	// (0x0004f97d) cell_qdial_pane_ParamLimits

0x111b,	// (0x0004f97d) cell_qdial_pane

0x112f,	// (0x0004f991) cell_qdial_pane_g1_ParamLimits

0x112f,	// (0x0004f991) cell_qdial_pane_g1

0x1145,	// (0x0004f9a7) cell_qdial_pane_g2_ParamLimits

0x1145,	// (0x0004f9a7) cell_qdial_pane_g2

0xa260,	// (0x00058ac2) cell_qdial_pane_g3_ParamLimits

0xa260,	// (0x00058ac2) cell_qdial_pane_g3

0x0003,

0xf176,	// (0x0005d9d8) cell_qdial_pane_g_ParamLimits

0xf176,	// (0x0005d9d8) cell_qdial_pane_g

0x116c,	// (0x0004f9ce) cell_qdial_pane_t1_ParamLimits

0x116c,	// (0x0004f9ce) cell_qdial_pane_t1

0x1184,	// (0x0004f9e6) cell_qdial_pane_t2_ParamLimits

0x1184,	// (0x0004f9e6) cell_qdial_pane_t2

0x1197,	// (0x0004f9f9) cell_qdial_pane_t3_ParamLimits

0x1197,	// (0x0004f9f9) cell_qdial_pane_t3

0x0002,

0xf17f,	// (0x0005d9e1) cell_qdial_pane_t_ParamLimits

0xf17f,	// (0x0005d9e1) cell_qdial_pane_t

0x9e5d,	// (0x000586bf) grid_highlight_pane_cp04

0xa26c,	// (0x00058ace) thumbnail_qdial_pane_ParamLimits

0xa26c,	// (0x00058ace) thumbnail_qdial_pane

0xa2c8,	// (0x00058b2a) list_help_pane

0xa2d1,	// (0x00058b33) scroll_pane_cp02

0x11aa,	// (0x0004fa0c) help_list_pane_t1_ParamLimits

0x11aa,	// (0x0004fa0c) help_list_pane_t1

0xa2da,	// (0x00058b3c) bg_notes_pane_g2

0xa2e2,	// (0x00058b44) bg_notes_pane_g3

0xa2ea,	// (0x00058b4c) notes_bg_pane_g1

0xa2f2,	// (0x00058b54) notes_bg_pane_g4

0xa2fa,	// (0x00058b5c) notes_bg_pane_g5

0xa302,	// (0x00058b64) notes_bg_pane_g6

0xa30a,	// (0x00058b6c) notes_bg_pane_g7

0xa312,	// (0x00058b74) notes_bg_pane_g8

0xa31a,	// (0x00058b7c) notes_bg_pane_g9

0x0006,

0xf19d,	// (0x0005d9ff) notes_bg_pane_g

0x11c8,	// (0x0004fa2a) list_notes_text_pane_ParamLimits

0x11c8,	// (0x0004fa2a) list_notes_text_pane

0xa322,	// (0x00058b84) list_notes_text_pane_g1

0xfb57,	// (0x0004e3b9) list_notes_text_pane_t1

0x11dc,	// (0x0004fa3e) listscroll_cale_week_pane

0x1212,	// (0x0004fa74) bg_cale_heading_pane

0xa33c,	// (0x00058b9e) bg_cale_pane_cp01

0x123b,	// (0x0004fa9d) cale_week_corner_pane

0x125a,	// (0x0004fabc) cale_week_day_heading_pane

0x1288,	// (0x0004faea) cale_week_scroll_pane_g1

0x12ac,	// (0x0004fb0e) cale_week_scroll_pane_g2

0x12c4,	// (0x0004fb26) cale_week_scroll_pane_g3

0x12dc,	// (0x0004fb3e) cale_week_scroll_pane_g4

0x12f8,	// (0x0004fb5a) cale_week_scroll_pane_g5

0x1318,	// (0x0004fb7a) cale_week_scroll_pane_g6

0x1338,	// (0x0004fb9a) cale_week_scroll_pane_g7

0x135c,	// (0x0004fbbe) cale_week_scroll_pane_g8

0x1380,	// (0x0004fbe2) cale_week_scroll_pane_g9

0x139d,	// (0x0004fbff) cale_week_scroll_pane_g10

0x13ba,	// (0x0004fc1c) cale_week_scroll_pane_g11

0x13d7,	// (0x0004fc39) cale_week_scroll_pane_g12

0x13f4,	// (0x0004fc56) cale_week_scroll_pane_g13

0x1411,	// (0x0004fc73) cale_week_scroll_pane_g14

0x143a,	// (0x0004fc9c) cale_week_scroll_pane_g15

0x000f,

0xf1ac,	// (0x0005da0e) cale_week_scroll_pane_g

0x1487,	// (0x0004fce9) cale_week_time_pane

0x14ab,	// (0x0004fd0d) grid_cale_week_pane

0xa36c,	// (0x00058bce) scroll_pane_cp08

0x14e2,	// (0x0004fd44) cell_cale_week_pane_ParamLimits

0x14e2,	// (0x0004fd44) cell_cale_week_pane

0x1572,	// (0x0004fdd4) cale_week_day_heading_pane_t1

0x15bc,	// (0x0004fe1e) cale_week_day_heading_pane_t2

0x160b,	// (0x0004fe6d) cale_week_day_heading_pane_t3

0x165a,	// (0x0004febc) cale_week_day_heading_pane_t4

0x16a9,	// (0x0004ff0b) cale_week_day_heading_pane_t5

0x16fc,	// (0x0004ff5e) cale_week_day_heading_pane_t6

0x1753,	// (0x0004ffb5) cale_week_day_heading_pane_t7

0x0006,

0xf1cd,	// (0x0005da2f) cale_week_day_heading_pane_t

0xa38e,	// (0x00058bf0) bg_cale_side_pane

0x179d,	// (0x0004ffff) cale_week_time_pane_t1

0x17d7,	// (0x00050039) cale_week_time_pane_t2

0x1811,	// (0x00050073) cale_week_time_pane_t3

0x184b,	// (0x000500ad) cale_week_time_pane_t4

0x1885,	// (0x000500e7) cale_week_time_pane_t5

0x18bf,	// (0x00050121) cale_week_time_pane_t6

0x18f9,	// (0x0005015b) cale_week_time_pane_t7

0x1933,	// (0x00050195) cale_week_time_pane_t8

0x0007,

0xf1dc,	// (0x0005da3e) cale_week_time_pane_t

0x1973,	// (0x000501d5) cell_cale_week_pane_g2

0x1992,	// (0x000501f4) cell_cale_week_pane_g3_ParamLimits

0x1992,	// (0x000501f4) cell_cale_week_pane_g3

0xa39c,	// (0x00058bfe) grid_highlight_pane_cp07

0xa3a4,	// (0x00058c06) listscroll_gms_pane

0xa3ae,	// (0x00058c10) grid_gms_pane

0xa3b7,	// (0x00058c19) listscroll_gms_pane_g1

0xa3bf,	// (0x00058c21) listscroll_gms_pane_g2

0x0001,

0xf1ed,	// (0x0005da4f) listscroll_gms_pane_g

0x19aa,	// (0x0005020c) scroll_pane_cp010

0x19b5,	// (0x00050217) cell_gms_pane_ParamLimits

0x19b5,	// (0x00050217) cell_gms_pane

0x19cf,	// (0x00050231) cell_gms_pane_g1

0xa3c7,	// (0x00058c29) cell_gms_pane_g2

0xa3cf,	// (0x00058c31) cell_gms_pane_g3

0xa3d8,	// (0x00058c3a) cell_gms_pane_g4

0x0003,

0xf1f2,	// (0x0005da54) cell_gms_pane_g

0xa3e1,	// (0x00058c43) grid_highlight_pane_cp09

0x402a,	// (0x0005288c) phob_pre_status_pane_g1

0x4032,	// (0x00052894) phob_pre_status_pane_g2

0x403a,	// (0x0005289c) phob_pre_status_pane_g3

0x4042,	// (0x000528a4) phob_pre_status_pane_g4

0x0004,

0xf5e8,	// (0x0005de4a) phob_pre_status_pane_g

0x4052,	// (0x000528b4) phob_pre_status_pane_t1

0x4062,	// (0x000528c4) phob_pre_status_pane_t2

0x4072,	// (0x000528d4) phob_pre_status_pane_t3

0x0002,

0xf5f3,	// (0x0005de55) phob_pre_status_pane_t

0x9e5d,	// (0x000586bf) bg_list_pane_cp05

0x19df,	// (0x00050241) grid_vorec_pane

0x19eb,	// (0x0005024d) vorec_t1

0x19f9,	// (0x0005025b) vorec_t2

0x1a07,	// (0x00050269) vorec_t3

0x1a15,	// (0x00050277) vorec_t4

0x1a23,	// (0x00050285) vorec_t5

0xa3e9,	// (0x00058c4b) vorec_t6

0x0006,

0xf1fb,	// (0x0005da5d) vorec_t

0x1a3f,	// (0x000502a1) wait_bar_pane_cp01

0x1a47,	// (0x000502a9) cell_vorec_pane_ParamLimits

0x1a47,	// (0x000502a9) cell_vorec_pane

0xa3f7,	// (0x00058c59) cell_vorec_pane_g1

0x9e5d,	// (0x000586bf) grid_highlight_pane_cp05

0x1a72,	// (0x000502d4) cams_zoom_pane

0x1a81,	// (0x000502e3) image_vga_pane

0x1a9b,	// (0x000502fd) main_camera_pane_g1

0x1aad,	// (0x0005030f) main_camera_pane_g2

0x1abd,	// (0x0005031f) main_camera_pane_g3

0x1ad1,	// (0x00050333) main_camera_pane_g4

0x1ae5,	// (0x00050347) main_camera_pane_g5

0x1af9,	// (0x0005035b) main_camera_pane_g6

0x1b0d,	// (0x0005036f) main_camera_pane_g7

0x0007,

0xf20a,	// (0x0005da6c) main_camera_pane_g

0x1b21,	// (0x00050383) main_camera_pane_t1

0x1b37,	// (0x00050399) main_camera_pane_t2

0x0001,

0xf21b,	// (0x0005da7d) main_camera_pane_t

0x1b75,	// (0x000503d7) cams_zoom_pane_cp_ParamLimits

0x1b75,	// (0x000503d7) cams_zoom_pane_cp

0x1b9d,	// (0x000503ff) image_cif_pane_ParamLimits

0x1b9d,	// (0x000503ff) image_cif_pane

0x1bd8,	// (0x0005043a) image_subqcif_pane

0x1be2,	// (0x00050444) main_video_pane_g1_ParamLimits

0x1be2,	// (0x00050444) main_video_pane_g1

0x1c06,	// (0x00050468) main_video_pane_g2_ParamLimits

0x1c06,	// (0x00050468) main_video_pane_g2

0x1c3c,	// (0x0005049e) main_video_pane_g3_ParamLimits

0x1c3c,	// (0x0005049e) main_video_pane_g3

0x1c6a,	// (0x000504cc) main_video_pane_g4_ParamLimits

0x1c6a,	// (0x000504cc) main_video_pane_g4

0x1c98,	// (0x000504fa) main_video_pane_g5_ParamLimits

0x1c98,	// (0x000504fa) main_video_pane_g5

0xa40d,	// (0x00058c6f) main_video_pane_g6_ParamLimits

0xa40d,	// (0x00058c6f) main_video_pane_g6

0x0006,

0xf220,	// (0x0005da82) main_video_pane_g_ParamLimits

0xf220,	// (0x0005da82) main_video_pane_g

0x1cc1,	// (0x00050523) main_video_pane_t1_ParamLimits

0x1cc1,	// (0x00050523) main_video_pane_t1

0xa427,	// (0x00058c89) cams_zoom_pane_g1

0xa430,	// (0x00058c92) cams_zoom_pane_g2

0xa439,	// (0x00058c9b) cams_zoom_pane_g3

0xa442,	// (0x00058ca4) cams_zoom_pane_g4

0x0003,

0xf22f,	// (0x0005da91) cams_zoom_pane_g

0x1d1e,	// (0x00050580) grid_cams_pane

0x1d38,	// (0x0005059a) linegrid_cams_pane

0x1d4a,	// (0x000505ac) cell_cams_pane_ParamLimits

0x1d4a,	// (0x000505ac) cell_cams_pane

0xa44b,	// (0x00058cad) cams_burst_image_pane

0xa453,	// (0x00058cb5) cell_cams_pane_g1

0x9e5d,	// (0x000586bf) grid_highlight_pane_cp03

0xa218,	// (0x00058a7a) mp_bg_pane_g1

0x9e5d,	// (0x000586bf) bg_list_pane_cp03

0xc6c3,	// (0x0005af25) bg_mp_pane

0xc6cb,	// (0x0005af2d) grid_mp_pane

0xc6d3,	// (0x0005af35) media_player_g1

0xc6dd,	// (0x0005af3f) media_player_t1

0xc6eb,	// (0x0005af4d) media_player_t2

0xc6f9,	// (0x0005af5b) media_player_t3

0xc707,	// (0x0005af69) media_player_t4

0xc715,	// (0x0005af77) media_player_t5

0xc723,	// (0x0005af85) media_player_t6

0xc731,	// (0x0005af93) media_player_t7

0x0006,

0xf5d2,	// (0x0005de34) media_player_t

0xc73f,	// (0x0005afa1) wait_bar_pane_cp02

0xf5b7,	// (0x0005de19) main_usb_pane_t

0x4021,	// (0x00052883) cell_mp_pane

0xa218,	// (0x00058a7a) cell_mp_pane_g1

0x9e5d,	// (0x000586bf) grid_highlight_pane_cp06

0xa45b,	// (0x00058cbd) grid_skin_colour_pane

0xa463,	// (0x00058cc5) list_highlight_pane_cp03

0x1d90,	// (0x000505f2) skin_g1

0xa46b,	// (0x00058ccd) skin_t1

0xa47a,	// (0x00058cdc) skin_t2

0x0001,

0xf264,	// (0x0005dac6) skin_t

0x1d98,	// (0x000505fa) cell_skin_colour_pane_ParamLimits

0x1d98,	// (0x000505fa) cell_skin_colour_pane

0xa488,	// (0x00058cea) cell_skin_colour_pane_g1

0x1e0b,	// (0x0005066d) call_video_g1_ParamLimits

0x1e0b,	// (0x0005066d) call_video_g1

0x1e27,	// (0x00050689) call_video_g2_ParamLimits

0x1e27,	// (0x00050689) call_video_g2

0x0001,

0xf269,	// (0x0005dacb) call_video_g_ParamLimits

0xf269,	// (0x0005dacb) call_video_g

0x1e6c,	// (0x000506ce) call_video_uplink_pane_cp1_ParamLimits

0x1e6c,	// (0x000506ce) call_video_uplink_pane_cp1

0xa49a,	// (0x00058cfc) call_video_uplink_pane_cp2

0x1f0d,	// (0x0005076f) video_down_crop_pane_ParamLimits

0x1f0d,	// (0x0005076f) video_down_crop_pane

0x1ff6,	// (0x00050858) video_down_pane_ParamLimits

0x1ff6,	// (0x00050858) video_down_pane

0xa4a2,	// (0x00058d04) video_down_subqcif_pane_ParamLimits

0xa4a2,	// (0x00058d04) video_down_subqcif_pane

0xa4bc,	// (0x00058d1e) video_down_subqcif_pane_cp_ParamLimits

0xa4bc,	// (0x00058d1e) video_down_subqcif_pane_cp

0xa4e4,	// (0x00058d46) im_reading_pane_ParamLimits

0xa4e4,	// (0x00058d46) im_reading_pane

0x20ff,	// (0x00050961) im_writing_pane_ParamLimits

0x20ff,	// (0x00050961) im_writing_pane

0x211b,	// (0x0005097d) im_reading_pane_t1

0xa4fe,	// (0x00058d60) list_im_pane

0xa50f,	// (0x00058d71) scroll_pane_cp07

0x2157,	// (0x000509b9) im_writing_pane_t1_ParamLimits

0x2157,	// (0x000509b9) im_writing_pane_t1

0xa528,	// (0x00058d8a) im_writing_pane_t2_ParamLimits

0xa528,	// (0x00058d8a) im_writing_pane_t2

0x0001,

0xf273,	// (0x0005dad5) im_writing_pane_t_ParamLimits

0xf273,	// (0x0005dad5) im_writing_pane_t

0x9e5d,	// (0x000586bf) input_focus_pane_cp04

0x9e5d,	// (0x000586bf) input_focus_pane_cp05

0x216c,	// (0x000509ce) list_im_single_pane_ParamLimits

0x216c,	// (0x000509ce) list_im_single_pane

0x2182,	// (0x000509e4) list_single_im_pane_t1

0x3fe1,	// (0x00052843) blid_accuracy_pane

0x3fe9,	// (0x0005284b) blid_compass_pane

0x3ff3,	// (0x00052855) main_location_t1

0x4003,	// (0x00052865) main_location_t2

0x4013,	// (0x00052875) main_location_t3

0x0002,

0xf5e1,	// (0x0005de43) main_location_t

0x9e5d,	// (0x000586bf) aid_levels_location

0xa218,	// (0x00058a7a) blid_accuracy_pane_g1

0xa218,	// (0x00058a7a) blid_accuracy_pane_g2

0x0001,

0xf2dc,	// (0x0005db3e) blid_accuracy_pane_g

0xa570,	// (0x00058dd2) wml_content_pane

0xa5ae,	// (0x00058e10) wml_button_pane_ParamLimits

0xa5ae,	// (0x00058e10) wml_button_pane

0x2191,	// (0x000509f3) wml_list_single_large_pane_ParamLimits

0x2191,	// (0x000509f3) wml_list_single_large_pane

0x21a7,	// (0x00050a09) wml_list_single_medium_pane_ParamLimits

0x21a7,	// (0x00050a09) wml_list_single_medium_pane

0x21be,	// (0x00050a20) wml_list_single_small_pane_ParamLimits

0x21be,	// (0x00050a20) wml_list_single_small_pane

0xa5c2,	// (0x00058e24) wml_selection_box_pane_ParamLimits

0xa5c2,	// (0x00058e24) wml_selection_box_pane

0xa5d5,	// (0x00058e37) wml_list_single_pane_t1

0xa5e4,	// (0x00058e46) wml_list_single_medium_pane_t1

0xa5f3,	// (0x00058e55) wml_list_single_large_pane_t1

0xa602,	// (0x00058e64) input_focus_pane_cp02_ParamLimits

0xa602,	// (0x00058e64) input_focus_pane_cp02

0xa615,	// (0x00058e77) wml_selection_box_pane_g1

0xa61e,	// (0x00058e80) wml_selection_box_pane_t1_ParamLimits

0xa61e,	// (0x00058e80) wml_selection_box_pane_t1

0xa0b8,	// (0x0005891a) bg_wml_button_pane_ParamLimits

0xa0b8,	// (0x0005891a) bg_wml_button_pane

0xa636,	// (0x00058e98) wml_button_pane_g1

0xa63e,	// (0x00058ea0) wml_button_pane_t1

0xa636,	// (0x00058e98) wml_button_bg_pane_g1

0xa64e,	// (0x00058eb0) wml_button_bg_pane_g2

0xa656,	// (0x00058eb8) wml_button_bg_pane_g3

0xa65e,	// (0x00058ec0) wml_button_bg_pane_g4

0xa666,	// (0x00058ec8) wml_button_bg_pane_g5

0xacb4,	// (0x00059516) wml_button_bg_pane_g6

0xacbc,	// (0x0005951e) wml_button_bg_pane_g7

0xacc4,	// (0x00059526) wml_button_bg_pane_g8

0xaccc,	// (0x0005952e) wml_button_bg_pane_g9

0x0008,

0xf278,	// (0x0005dada) wml_button_bg_pane_g

0x21da,	// (0x00050a3c) bg_list_pane_cp02

0xacd4,	// (0x00059536) mce_header_pane_ParamLimits

0xacd4,	// (0x00059536) mce_header_pane

0xacea,	// (0x0005954c) mce_icon_pane

0xacea,	// (0x0005954c) mce_image_pane

0xacf3,	// (0x00059555) mce_text_pane_ParamLimits

0xacf3,	// (0x00059555) mce_text_pane

0x21e4,	// (0x00050a46) scroll_pane_cp03

0xa5a6,	// (0x00058e08) scroll_pane_cp04

0xad06,	// (0x00059568) scroll_pane_cp05_ParamLimits

0xad06,	// (0x00059568) scroll_pane_cp05

0x21ee,	// (0x00050a50) mce_header_field_pane_ParamLimits

0x21ee,	// (0x00050a50) mce_header_field_pane

0x2207,	// (0x00050a69) mce_header_field_pane_2_ParamLimits

0x2207,	// (0x00050a69) mce_header_field_pane_2

0x221d,	// (0x00050a7f) mce_header_field_pane_3

0x2225,	// (0x00050a87) list_single_mce_message_pane_ParamLimits

0x2225,	// (0x00050a87) list_single_mce_message_pane

0x223e,	// (0x00050aa0) list_single_mce_smart_pane_ParamLimits

0x223e,	// (0x00050aa0) list_single_mce_smart_pane

0xad12,	// (0x00059574) input_focus_pane_cp03

0xad1b,	// (0x0005957d) list_header_data_pane

0x2262,	// (0x00050ac4) mce_header_field_pane_t1

0x2272,	// (0x00050ad4) list_single_mce_header_pane_ParamLimits

0x2272,	// (0x00050ad4) list_single_mce_header_pane

0xad23,	// (0x00059585) list_single_mce_header_pane_t1

0xad32,	// (0x00059594) list_single_mce_message_pane_g1

0xad3a,	// (0x0005959c) list_single_mce_message_pane_t1

0x22ac,	// (0x00050b0e) bg_cale_heading_pane_cp01_ParamLimits

0x22ac,	// (0x00050b0e) bg_cale_heading_pane_cp01

0xad48,	// (0x000595aa) bg_cale_pane_cp02_ParamLimits

0xad48,	// (0x000595aa) bg_cale_pane_cp02

0x22f3,	// (0x00050b55) cale_month_corner_pane

0x2312,	// (0x00050b74) cale_month_day_heading_pane_ParamLimits

0x2312,	// (0x00050b74) cale_month_day_heading_pane

0x2371,	// (0x00050bd3) cale_month_pane_g1_ParamLimits

0x2371,	// (0x00050bd3) cale_month_pane_g1

0x23ad,	// (0x00050c0f) cale_month_pane_g2_ParamLimits

0x23ad,	// (0x00050c0f) cale_month_pane_g2

0x23e9,	// (0x00050c4b) cale_month_pane_g3_ParamLimits

0x23e9,	// (0x00050c4b) cale_month_pane_g3

0x243d,	// (0x00050c9f) cale_month_pane_g4_ParamLimits

0x243d,	// (0x00050c9f) cale_month_pane_g4

0x2491,	// (0x00050cf3) cale_month_pane_g5_ParamLimits

0x2491,	// (0x00050cf3) cale_month_pane_g5

0x24ed,	// (0x00050d4f) cale_month_pane_g6_ParamLimits

0x24ed,	// (0x00050d4f) cale_month_pane_g6

0x2551,	// (0x00050db3) cale_month_pane_g7_ParamLimits

0x2551,	// (0x00050db3) cale_month_pane_g7

0x25bd,	// (0x00050e1f) cale_month_pane_g8_ParamLimits

0x25bd,	// (0x00050e1f) cale_month_pane_g8

0x2629,	// (0x00050e8b) cale_month_pane_g9_ParamLimits

0x2629,	// (0x00050e8b) cale_month_pane_g9

0x2687,	// (0x00050ee9) cale_month_pane_g10_ParamLimits

0x2687,	// (0x00050ee9) cale_month_pane_g10

0x26d9,	// (0x00050f3b) cale_month_pane_g11_ParamLimits

0x26d9,	// (0x00050f3b) cale_month_pane_g11

0x272b,	// (0x00050f8d) cale_month_pane_g12_ParamLimits

0x272b,	// (0x00050f8d) cale_month_pane_g12

0x2783,	// (0x00050fe5) cale_month_pane_g13_ParamLimits

0x2783,	// (0x00050fe5) cale_month_pane_g13

0x000c,

0xf28b,	// (0x0005daed) cale_month_pane_g_ParamLimits

0xf28b,	// (0x0005daed) cale_month_pane_g

0x27db,	// (0x0005103d) cale_month_week_pane

0x27ff,	// (0x00051061) grid_cale_month_pane_ParamLimits

0x27ff,	// (0x00051061) grid_cale_month_pane

0x2855,	// (0x000510b7) cale_month_day_heading_pane_t1

0x28db,	// (0x0005113d) cale_month_day_heading_pane_t2

0x296c,	// (0x000511ce) cale_month_day_heading_pane_t3

0x29fd,	// (0x0005125f) cale_month_day_heading_pane_t4

0x2a8e,	// (0x000512f0) cale_month_day_heading_pane_t5

0x2b2f,	// (0x00051391) cale_month_day_heading_pane_t6

0x2bd4,	// (0x00051436) cale_month_day_heading_pane_t7

0x0006,

0xf2a6,	// (0x0005db08) cale_month_day_heading_pane_t

0xa38e,	// (0x00058bf0) bg_cale_side_pane_cp01

0x2c7d,	// (0x000514df) cale_month_week_pane_t1

0x2c96,	// (0x000514f8) cale_month_week_pane_t2

0x2caf,	// (0x00051511) cale_month_week_pane_t3

0x2cc8,	// (0x0005152a) cale_month_week_pane_t4

0x2ce1,	// (0x00051543) cale_month_week_pane_t5

0x2cfa,	// (0x0005155c) cale_month_week_pane_t6

0x0005,

0xf2b5,	// (0x0005db17) cale_month_week_pane_t

0x2d19,	// (0x0005157b) cell_cale_month_pane_ParamLimits

0x2d19,	// (0x0005157b) cell_cale_month_pane

0xa66e,	// (0x00058ed0) cell_cale_month_pane_g1

0x2e43,	// (0x000516a5) cell_cale_month_pane_t1_ParamLimits

0x2e43,	// (0x000516a5) cell_cale_month_pane_t1

0xa39c,	// (0x00058bfe) grid_highlight_pane_cp08

0xa218,	// (0x00058a7a) main_smil_g1

0x2e63,	// (0x000516c5) smil_status_pane

0xad87,	// (0x000595e9) smil_text_pane

0xc5e1,	// (0x0005ae43) bg_popup_call3_rect_pane_g8

0xc5e9,	// (0x0005ae4b) bg_popup_call3_rect_pane_g9

0x0008,

0xf575,	// (0x0005ddd7) bg_popup_call3_rect_pane_g

0xc877,	// (0x0005b0d9) smil_status_volume_pane_g1

0x2e76,	// (0x000516d8) smil_status_pane_t1

0xa76c,	// (0x00058fce) volume_smil_pane

0xad91,	// (0x000595f3) list_smil_text_pane

0x2e8f,	// (0x000516f1) scroll_pane_cp011

0x2e9a,	// (0x000516fc) smil_text_list_pane_t1_ParamLimits

0x2e9a,	// (0x000516fc) smil_text_list_pane_t1

0xa67a,	// (0x00058edc) aid_volume_smil_ParamLimits

0xa67a,	// (0x00058edc) aid_volume_smil

0xa218,	// (0x00058a7a) smil_volume_pane_g1

0xa218,	// (0x00058a7a) smil_volume_pane_g2

0x0001,

0xf2dc,	// (0x0005db3e) smil_volume_pane_g

0x11dc,	// (0x0004fa3e) listscroll_cale_day_pane

0xad9b,	// (0x000595fd) bg_cale_pane

0xadb3,	// (0x00059615) list_cale_pane

0xadd6,	// (0x00059638) scroll_pane_cp09

0xade7,	// (0x00059649) cale_bg_pane_g1

0xadef,	// (0x00059651) cale_bg_pane_g2

0xadf7,	// (0x00059659) cale_bg_pane_g3

0xadff,	// (0x00059661) cale_bg_pane_g4

0xae07,	// (0x00059669) cale_bg_pane_g5

0xae0f,	// (0x00059671) cale_bg_pane_g6

0xae17,	// (0x00059679) cale_bg_pane_g7

0xae1f,	// (0x00059681) cale_bg_pane_g8

0xae27,	// (0x00059689) cale_bg_pane_g9

0x0008,

0xf2e1,	// (0x0005db43) cale_bg_pane_g

0x2ed3,	// (0x00051735) list_cale_time_pane_ParamLimits

0x2ed3,	// (0x00051735) list_cale_time_pane

0xae37,	// (0x00059699) list_cale_time_pane_g1_ParamLimits

0xae37,	// (0x00059699) list_cale_time_pane_g1

0xae43,	// (0x000596a5) list_cale_time_pane_g2_ParamLimits

0xae43,	// (0x000596a5) list_cale_time_pane_g2

0x2ee7,	// (0x00051749) list_cale_time_pane_g3_ParamLimits

0x2ee7,	// (0x00051749) list_cale_time_pane_g3

0x2ef5,	// (0x00051757) list_cale_time_pane_g4_ParamLimits

0x2ef5,	// (0x00051757) list_cale_time_pane_g4

0x2f03,	// (0x00051765) list_cale_time_pane_g5_ParamLimits

0x2f03,	// (0x00051765) list_cale_time_pane_g5

0x0005,

0xf2f4,	// (0x0005db56) list_cale_time_pane_g_ParamLimits

0xf2f4,	// (0x0005db56) list_cale_time_pane_g

0xae5d,	// (0x000596bf) list_cale_time_pane_t1_ParamLimits

0xae5d,	// (0x000596bf) list_cale_time_pane_t1

0xae85,	// (0x000596e7) list_cale_time_pane_t2_ParamLimits

0xae85,	// (0x000596e7) list_cale_time_pane_t2

0x31d1,	// (0x00051a33) aid_blid_cardinal_pane

0x320f,	// (0x00051a71) compass_pane_t4

0xaead,	// (0x0005970f) list_cale_time_pane_t4_ParamLimits

0xaead,	// (0x0005970f) list_cale_time_pane_t4

0x321d,	// (0x00051a7f) compass_pane_t5

0x322b,	// (0x00051a8d) compass_pane_t6

0x3239,	// (0x00051a9b) compass_pane_t7

0xb2c7,	// (0x00059b29) navi_pane_cc_t1

0xb41c,	// (0x00059c7e) aid_phob_thumbnail_center_pane

0x39ac,	// (0x0005220e) main_postcard_pane_g4_ParamLimits

0x0002,

0xf301,	// (0x0005db63) list_cale_time_pane_t_ParamLimits

0xf301,	// (0x0005db63) list_cale_time_pane_t

0x9ab4,	// (0x00058316) bg_popup_window_pane_cp02_ParamLimits

0x9ab4,	// (0x00058316) bg_popup_window_pane_cp02

0xaed5,	// (0x00059737) heading_pane_cp01_ParamLimits

0xaed5,	// (0x00059737) heading_pane_cp01

0xaee1,	// (0x00059743) loc_req_pane_ParamLimits

0xaee1,	// (0x00059743) loc_req_pane

0xaef1,	// (0x00059753) loc_type_pane_ParamLimits

0xaef1,	// (0x00059753) loc_type_pane

0xaf03,	// (0x00059765) loc_type_pane_t1_ParamLimits

0xaf03,	// (0x00059765) loc_type_pane_t1

0xaf15,	// (0x00059777) loc_type_pane_t2_ParamLimits

0xaf15,	// (0x00059777) loc_type_pane_t2

0xaf27,	// (0x00059789) loc_type_pane_t3_ParamLimits

0xaf27,	// (0x00059789) loc_type_pane_t3

0x0002,

0xf308,	// (0x0005db6a) loc_type_pane_t_ParamLimits

0xf308,	// (0x0005db6a) loc_type_pane_t

0xaf39,	// (0x0005979b) list_loc_req_pane

0xaf43,	// (0x000597a5) scroll_pane_cp012

0x2f11,	// (0x00051773) list_single_loc_request_popup_menu_pane_ParamLimits

0x2f11,	// (0x00051773) list_single_loc_request_popup_menu_pane

0xaf4e,	// (0x000597b0) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xaf4e,	// (0x000597b0) list_single_loc_request_popup_menu_pane_g1

0xaf5a,	// (0x000597bc) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xaf5a,	// (0x000597bc) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf30f,	// (0x0005db71) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf30f,	// (0x0005db71) list_single_loc_request_popup_menu_pane_g

0xaf66,	// (0x000597c8) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xaf66,	// (0x000597c8) list_single_loc_request_popup_menu_pane_t1

0xa0b8,	// (0x0005891a) bg_popup_window_pane_cp03_ParamLimits

0xa0b8,	// (0x0005891a) bg_popup_window_pane_cp03

0xaf7c,	// (0x000597de) heading_loc_req_pane_ParamLimits

0xaf7c,	// (0x000597de) heading_loc_req_pane

0x2f1e,	// (0x00051780) popup_dyc_status_message_window_g1_ParamLimits

0x2f1e,	// (0x00051780) popup_dyc_status_message_window_g1

0x2f32,	// (0x00051794) popup_dyc_status_message_window_t1_ParamLimits

0x2f32,	// (0x00051794) popup_dyc_status_message_window_t1

0x2f47,	// (0x000517a9) popup_dyc_status_message_window_t2_ParamLimits

0x2f47,	// (0x000517a9) popup_dyc_status_message_window_t2

0x2f5c,	// (0x000517be) popup_dyc_status_message_window_t3_ParamLimits

0x2f5c,	// (0x000517be) popup_dyc_status_message_window_t3

0x0002,

0xf314,	// (0x0005db76) popup_dyc_status_message_window_t_ParamLimits

0xf314,	// (0x0005db76) popup_dyc_status_message_window_t

0x9e5d,	// (0x000586bf) bg_heading_pane_cp01

0xaf88,	// (0x000597ea) heading_loc_req_pane_g1

0xaf90,	// (0x000597f2) heading_loc_req_pane_g2

0xaf98,	// (0x000597fa) heading_loc_req_pane_g3

0x0002,

0xf31b,	// (0x0005db7d) heading_loc_req_pane_g

0xafa0,	// (0x00059802) heading_loc_req_pane_t1

0xafb0,	// (0x00059812) bg_popup_sub_pane_cp01_ParamLimits

0xafb0,	// (0x00059812) bg_popup_sub_pane_cp01

0xafbe,	// (0x00059820) popup_cale_events_window_g1_ParamLimits

0xafbe,	// (0x00059820) popup_cale_events_window_g1

0xafde,	// (0x00059840) popup_cale_events_window_g2_ParamLimits

0xafde,	// (0x00059840) popup_cale_events_window_g2

0x0001,

0xf34f,	// (0x0005dbb1) popup_cale_events_window_g_ParamLimits

0xf34f,	// (0x0005dbb1) popup_cale_events_window_g

0xaffe,	// (0x00059860) popup_cale_events_window_t1_ParamLimits

0xaffe,	// (0x00059860) popup_cale_events_window_t1

0xb010,	// (0x00059872) popup_cale_events_window_t2_ParamLimits

0xb010,	// (0x00059872) popup_cale_events_window_t2

0xb04e,	// (0x000598b0) popup_cale_events_window_t3_ParamLimits

0xb04e,	// (0x000598b0) popup_cale_events_window_t3

0xb088,	// (0x000598ea) popup_cale_events_window_t4_ParamLimits

0xb088,	// (0x000598ea) popup_cale_events_window_t4

0x0003,

0xf354,	// (0x0005dbb6) popup_cale_events_window_t_ParamLimits

0xf354,	// (0x0005dbb6) popup_cale_events_window_t

0x2f90,	// (0x000517f2) call_type_pane

0x2fa0,	// (0x00051802) popup_call_status_window_g1

0x2fb4,	// (0x00051816) popup_call_status_window_g2

0x2fc8,	// (0x0005182a) popup_call_status_window_g3

0x0002,

0xf35d,	// (0x0005dbbf) popup_call_status_window_g

0xb0be,	// (0x00059920) call_type_pane_g1

0xb0c7,	// (0x00059929) call_type_pane_g2

0x0001,

0xf364,	// (0x0005dbc6) call_type_pane_g

0x9e5d,	// (0x000586bf) bg_popup_sub_pane_cp02

0xb0d0,	// (0x00059932) listscroll_popup_wml_pane

0xb0d8,	// (0x0005993a) list_wml_pane

0xb0e2,	// (0x00059944) scroll_pane_cp013

0xb0ed,	// (0x0005994f) list_single_graphic_popup_wml_pane_ParamLimits

0xb0ed,	// (0x0005994f) list_single_graphic_popup_wml_pane

0xa218,	// (0x00058a7a) list_single_graphic_popup_wml_pane_g1

0xb101,	// (0x00059963) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf369,	// (0x0005dbcb) list_single_graphic_popup_wml_pane_g

0xb109,	// (0x0005996b) list_single_graphic_popup_wml_pane_t1

0xb11f,	// (0x00059981) aid_call_pane

0xa0b0,	// (0x00058912) popup_clock_analogue_window_g1

0xa0b0,	// (0x00058912) popup_clock_analogue_window_g2

0xa69c,	// (0x00058efe) popup_clock_analogue_window_g3

0xa69c,	// (0x00058efe) popup_clock_analogue_window_g4

0xa218,	// (0x00058a7a) popup_clock_analogue_window_g5

0x0004,

0xf36e,	// (0x0005dbd0) popup_clock_analogue_window_g

0xa6a4,	// (0x00058f06) popup_clock_analogue_window_t1

0xa6b2,	// (0x00058f14) clock_digital_number_pane_ParamLimits

0xa6b2,	// (0x00058f14) clock_digital_number_pane

0xa6be,	// (0x00058f20) clock_digital_number_pane_cp02_ParamLimits

0xa6be,	// (0x00058f20) clock_digital_number_pane_cp02

0xa6ca,	// (0x00058f2c) clock_digital_number_pane_cp03_ParamLimits

0xa6ca,	// (0x00058f2c) clock_digital_number_pane_cp03

0xa6d6,	// (0x00058f38) clock_digital_number_pane_cp04_ParamLimits

0xa6d6,	// (0x00058f38) clock_digital_number_pane_cp04

0xa6e2,	// (0x00058f44) clock_digital_separator_pane_ParamLimits

0xa6e2,	// (0x00058f44) clock_digital_separator_pane

0xa6ee,	// (0x00058f50) popup_clock_digital_window_t1

0xa218,	// (0x00058a7a) clock_digital_number_pane_g1

0xa218,	// (0x00058a7a) clock_digital_number_pane_g2

0x0001,

0xf2dc,	// (0x0005db3e) clock_digital_number_pane_g

0xa218,	// (0x00058a7a) clock_digital_separator_pane_g1

0xa218,	// (0x00058a7a) clock_digital_separator_pane_g2

0x0001,

0xf2dc,	// (0x0005db3e) clock_digital_separator_pane_g

0x9e5d,	// (0x000586bf) bg_popup_window_pane_cp04

0xb127,	// (0x00059989) heading_pane_cp03

0xb12f,	// (0x00059991) listscroll_popup_gms_pane

0xb137,	// (0x00059999) grid_large_graphic_popup_pane

0xb141,	// (0x000599a3) listscroll_popup_gms_pane_g1

0xb149,	// (0x000599ab) listscroll_popup_gms_pane_g2

0x0001,

0xf379,	// (0x0005dbdb) listscroll_popup_gms_pane_g

0xa5a6,	// (0x00058e08) scroll_pane_cp014

0x2fd8,	// (0x0005183a) cell_large_graphic_popup_pane_ParamLimits

0x2fd8,	// (0x0005183a) cell_large_graphic_popup_pane

0x2ff0,	// (0x00051852) cell_large_graphic_popup_pane_g1_ParamLimits

0x2ff0,	// (0x00051852) cell_large_graphic_popup_pane_g1

0xb151,	// (0x000599b3) cell_large_graphic_popup_pane_g2_ParamLimits

0xb151,	// (0x000599b3) cell_large_graphic_popup_pane_g2

0xb15d,	// (0x000599bf) cell_large_graphic_popup_pane_g3_ParamLimits

0xb15d,	// (0x000599bf) cell_large_graphic_popup_pane_g3

0xb16a,	// (0x000599cc) cell_large_graphic_popup_pane_g4_ParamLimits

0xb16a,	// (0x000599cc) cell_large_graphic_popup_pane_g4

0x0003,

0xf37e,	// (0x0005dbe0) cell_large_graphic_popup_pane_g_ParamLimits

0xf37e,	// (0x0005dbe0) cell_large_graphic_popup_pane_g

0xb17a,	// (0x000599dc) grid_highlight_pane_cp010

0xa218,	// (0x00058a7a) bg_popup_call_pane_g1

0xb184,	// (0x000599e6) list_single_graphic_popup_conf_pane_ParamLimits

0xb184,	// (0x000599e6) list_single_graphic_popup_conf_pane

0xb196,	// (0x000599f8) list_highlight_pane_cp01

0xb19f,	// (0x00059a01) list_single_graphic_popup_conf_pane_g1

0xb1a7,	// (0x00059a09) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf387,	// (0x0005dbe9) list_single_graphic_popup_conf_pane_g

0xb1af,	// (0x00059a11) list_single_graphic_popup_conf_pane_t1

0xb1bd,	// (0x00059a1f) linegrid_cams_pane_g1

0x2ffc,	// (0x0005185e) linegrid_cams_pane_g2

0xa3cf,	// (0x00058c31) linegrid_cams_pane_g3

0xb1c6,	// (0x00059a28) linegrid_cams_pane_g4

0x3005,	// (0x00051867) linegrid_cams_pane_g5

0x300e,	// (0x00051870) linegrid_cams_pane_g6

0xa3d8,	// (0x00058c3a) linegrid_cams_pane_g7

0x0006,

0xf38c,	// (0x0005dbee) linegrid_cams_pane_g

0xb1cf,	// (0x00059a31) popup_clock_analogue_window

0xb1cf,	// (0x00059a31) popup_clock_digital_window

0x9e5d,	// (0x000586bf) popup_phob_thumbnail_window

0xa218,	// (0x00058a7a) call_video_uplink_pane_g1

0xb1d8,	// (0x00059a3a) call_video_uplink_pane_g2

0x0001,

0xf39b,	// (0x0005dbfd) call_video_uplink_pane_g

0xb1e0,	// (0x00059a42) video_uplink_pane

0xb1e8,	// (0x00059a4a) mce_image_pane_g1

0x3019,	// (0x0005187b) mce_image_pane_g2

0x3023,	// (0x00051885) mce_image_pane_g3

0x302d,	// (0x0005188f) mce_image_pane_g4

0x3035,	// (0x00051897) mce_image_pane_g5

0x0004,

0xf3a0,	// (0x0005dc02) mce_image_pane_g

0xb1f2,	// (0x00059a54) control_top_pane_stacon_cp01_ParamLimits

0xb1f2,	// (0x00059a54) control_top_pane_stacon_cp01

0xb206,	// (0x00059a68) uni_indicator_pane_stacon_cp01_ParamLimits

0xb206,	// (0x00059a68) uni_indicator_pane_stacon_cp01

0xb217,	// (0x00059a79) bg_popup_sub_pane_cp03

0x303d,	// (0x0005189f) chi_dic_find_pane

0x3045,	// (0x000518a7) listscroll_chi_dic_pane

0x304e,	// (0x000518b0) main_pane_chidic_g1

0x3061,	// (0x000518c3) chi_dic_find_pane_t1

0xb221,	// (0x00059a83) find_chidic_pane

0xb22a,	// (0x00059a8c) chi_dic_list_pane_ParamLimits

0xb22a,	// (0x00059a8c) chi_dic_list_pane

0xb23b,	// (0x00059a9d) scroll_pane_cp020

0x306f,	// (0x000518d1) find_chidic_pane_t1

0x9e5d,	// (0x000586bf) input_focus_pane_cp06

0x0e60,	// (0x0004f6c2) list_chi_dic_pane_ParamLimits

0x0e60,	// (0x0004f6c2) list_chi_dic_pane

0x307e,	// (0x000518e0) list_chi_dic_pane_t1_ParamLimits

0x307e,	// (0x000518e0) list_chi_dic_pane_t1

0x9e5d,	// (0x000586bf) list_highlight_pane_cp020

0xb243,	// (0x00059aa5) bg_cale_heading_pane_g1

0x3091,	// (0x000518f3) bg_cale_heading_pane_g2

0x3099,	// (0x000518fb) bg_cale_heading_pane_g3

0x30a1,	// (0x00051903) bg_cale_heading_pane_g4

0x30ab,	// (0x0005190d) bg_cale_heading_pane_g5

0x30b5,	// (0x00051917) bg_cale_heading_pane_g6

0x30bd,	// (0x0005191f) bg_cale_heading_pane_g7

0x30c5,	// (0x00051927) bg_cale_heading_pane_g8

0x30cf,	// (0x00051931) bg_cale_heading_pane_g9

0x0008,

0xf3ab,	// (0x0005dc0d) bg_cale_heading_pane_g

0xb243,	// (0x00059aa5) bg_cale_side_pane_g1

0x30d9,	// (0x0005193b) bg_cale_side_pane_g2

0x30e3,	// (0x00051945) bg_cale_side_pane_g3

0x30ed,	// (0x0005194f) bg_cale_side_pane_g4

0x30f7,	// (0x00051959) bg_cale_side_pane_g5

0x3101,	// (0x00051963) bg_cale_side_pane_g6

0x310b,	// (0x0005196d) bg_cale_side_pane_g7

0x3115,	// (0x00051977) bg_cale_side_pane_g8

0x311d,	// (0x0005197f) bg_cale_side_pane_g9

0x0008,

0xf3be,	// (0x0005dc20) bg_cale_side_pane_g

0x3125,	// (0x00051987) popup_call_status_window_ParamLimits

0x3125,	// (0x00051987) popup_call_status_window

0xb24b,	// (0x00059aad) stacon_top_pane

0xb253,	// (0x00059ab5) status_pane_ParamLimits

0xb253,	// (0x00059ab5) status_pane

0xb268,	// (0x00059aca) status_small_pane

0xb270,	// (0x00059ad2) control_pane

0x9e5d,	// (0x000586bf) stacon_bottom_pane

0xb278,	// (0x00059ada) list_single_mce_smart_pane_t1_ParamLimits

0xb278,	// (0x00059ada) list_single_mce_smart_pane_t1

0xb28b,	// (0x00059aed) list_single_mce_smart_pane_t2_ParamLimits

0xb28b,	// (0x00059aed) list_single_mce_smart_pane_t2

0x0001,

0xf3d1,	// (0x0005dc33) list_single_mce_smart_pane_t_ParamLimits

0xf3d1,	// (0x0005dc33) list_single_mce_smart_pane_t

0x3172,	// (0x000519d4) compass_pane

0x317d,	// (0x000519df) main_location2_pane_t1

0x3191,	// (0x000519f3) main_location2_pane_t2

0x31a7,	// (0x00051a09) main_location2_pane_t3

0x0003,

0xf3d6,	// (0x0005dc38) main_location2_pane_t

0xb2aa,	// (0x00059b0c) compass_pane_g1_ParamLimits

0xb2aa,	// (0x00059b0c) compass_pane_g1

0x31f1,	// (0x00051a53) compass_pane_t1

0x3200,	// (0x00051a62) compass_pane_t2

0x0005,

0xf3df,	// (0x0005dc41) compass_pane_t

0x3247,	// (0x00051aa9) text_secondary_cp61

0xb2be,	// (0x00059b20) navi_pane_cams_g5

0xb2e1,	// (0x00059b43) navi_pane_im_t1

0xb2ef,	// (0x00059b51) navi_pane_mp_g1_ParamLimits

0xb2ef,	// (0x00059b51) navi_pane_mp_g1

0xb303,	// (0x00059b65) navi_pane_mp_g2_ParamLimits

0xb303,	// (0x00059b65) navi_pane_mp_g2

0xb30f,	// (0x00059b71) navi_pane_mp_g3_ParamLimits

0xb30f,	// (0x00059b71) navi_pane_mp_g3

0x0002,

0xf3f3,	// (0x0005dc55) navi_pane_mp_g_ParamLimits

0xf3f3,	// (0x0005dc55) navi_pane_mp_g

0xb31b,	// (0x00059b7d) navi_pane_mp_t1

0xb329,	// (0x00059b8b) navi_pane_mp_t2

0x0002,

0xf3fa,	// (0x0005dc5c) navi_pane_mp_t

0xb365,	// (0x00059bc7) navi_pane_vt_g1

0xb31b,	// (0x00059b7d) navi_pane_vt_t1

0xb36d,	// (0x00059bcf) navi_slider_pane

0xb375,	// (0x00059bd7) zooming_pane

0xb37d,	// (0x00059bdf) navi_slider_pane_g1

0xa70b,	// (0x00058f6d) navi_slider_pane_g2

0x0006,

0xf401,	// (0x0005dc63) navi_slider_pane_g

0xb3a1,	// (0x00059c03) aid_levels_zoom

0xb3a9,	// (0x00059c0b) zooming_pane_g1

0xb3b1,	// (0x00059c13) zooming_pane_g2

0xb3b1,	// (0x00059c13) zooming_pane_g3

0x0002,

0xf410,	// (0x0005dc72) zooming_pane_g

0xb3b9,	// (0x00059c1b) level_10_zoom

0xb3c2,	// (0x00059c24) level_11_zoom

0xb3cb,	// (0x00059c2d) level_1_zoom

0xb3d4,	// (0x00059c36) level_2_zoom

0xb3dd,	// (0x00059c3f) level_3_zoom

0xb3e6,	// (0x00059c48) level_4_zoom

0xb3ef,	// (0x00059c51) level_5_zoom

0xb3f8,	// (0x00059c5a) level_6_zoom

0xb401,	// (0x00059c63) level_7_zoom

0xb40a,	// (0x00059c6c) level_8_zoom

0xb413,	// (0x00059c75) level_9_zoom

0xb424,	// (0x00059c86) popup_phob_thumbnail_window_g1

0xb42c,	// (0x00059c8e) popup_phob_thumbnail_window_g2

0x0001,

0xf417,	// (0x0005dc79) popup_phob_thumbnail_window_g

0xc747,	// (0x0005afa9) level_1_location

0xc74f,	// (0x0005afb1) level_2_location

0xc757,	// (0x0005afb9) level_3_location

0xc75f,	// (0x0005afc1) level_4_location

0xb375,	// (0x00059bd7) level_5_location

0x3390,	// (0x00051bf2) mce_icon_pane_g1

0x339a,	// (0x00051bfc) mce_icon_pane_g2

0x0001,

0xf41c,	// (0x0005dc7e) mce_icon_pane_g

0x33a2,	// (0x00051c04) main_mup_pane_g1_ParamLimits

0x33a2,	// (0x00051c04) main_mup_pane_g1

0x33b8,	// (0x00051c1a) main_mup_pane_g2_ParamLimits

0x33b8,	// (0x00051c1a) main_mup_pane_g2

0x33d0,	// (0x00051c32) main_mup_pane_g3_ParamLimits

0x33d0,	// (0x00051c32) main_mup_pane_g3

0x33e8,	// (0x00051c4a) main_mup_pane_g4_ParamLimits

0x33e8,	// (0x00051c4a) main_mup_pane_g4

0x3400,	// (0x00051c62) main_mup_pane_g5_ParamLimits

0x3400,	// (0x00051c62) main_mup_pane_g5

0x341c,	// (0x00051c7e) main_mup_pane_g6_ParamLimits

0x341c,	// (0x00051c7e) main_mup_pane_g6

0x3436,	// (0x00051c98) main_mup_pane_g7_ParamLimits

0x3436,	// (0x00051c98) main_mup_pane_g7

0x3454,	// (0x00051cb6) main_mup_pane_g8_ParamLimits

0x3454,	// (0x00051cb6) main_mup_pane_g8

0x3472,	// (0x00051cd4) main_mup_pane_g9_ParamLimits

0x3472,	// (0x00051cd4) main_mup_pane_g9

0x348e,	// (0x00051cf0) main_mup_pane_g10_ParamLimits

0x348e,	// (0x00051cf0) main_mup_pane_g10

0x34ac,	// (0x00051d0e) main_mup_pane_g11_ParamLimits

0x34ac,	// (0x00051d0e) main_mup_pane_g11

0x34c6,	// (0x00051d28) main_mup_pane_g12_ParamLimits

0x34c6,	// (0x00051d28) main_mup_pane_g12

0x34dc,	// (0x00051d3e) main_mup_pane_g13_ParamLimits

0x34dc,	// (0x00051d3e) main_mup_pane_g13

0x000c,

0xf421,	// (0x0005dc83) main_mup_pane_g_ParamLimits

0xf421,	// (0x0005dc83) main_mup_pane_g

0x34f0,	// (0x00051d52) main_mup_pane_t1_ParamLimits

0x34f0,	// (0x00051d52) main_mup_pane_t1

0x350c,	// (0x00051d6e) main_mup_pane_t2_ParamLimits

0x350c,	// (0x00051d6e) main_mup_pane_t2

0x3524,	// (0x00051d86) main_mup_pane_t3_ParamLimits

0x3524,	// (0x00051d86) main_mup_pane_t3

0x353c,	// (0x00051d9e) main_mup_pane_t4_ParamLimits

0x353c,	// (0x00051d9e) main_mup_pane_t4

0x355a,	// (0x00051dbc) main_mup_pane_t5_ParamLimits

0x355a,	// (0x00051dbc) main_mup_pane_t5

0x356f,	// (0x00051dd1) main_mup_pane_t6_ParamLimits

0x356f,	// (0x00051dd1) main_mup_pane_t6

0x0005,

0xf43c,	// (0x0005dc9e) main_mup_pane_t_ParamLimits

0xf43c,	// (0x0005dc9e) main_mup_pane_t

0x3581,	// (0x00051de3) mup_progress_pane_ParamLimits

0x3581,	// (0x00051de3) mup_progress_pane

0x358d,	// (0x00051def) mup_visualizer_pane_ParamLimits

0x358d,	// (0x00051def) mup_visualizer_pane

0x35c1,	// (0x00051e23) mup_volume_pane_ParamLimits

0x35c1,	// (0x00051e23) mup_volume_pane

0xb434,	// (0x00059c96) mup_visualizer_pane_g1_ParamLimits

0xb434,	// (0x00059c96) mup_visualizer_pane_g1

0xb434,	// (0x00059c96) mup_visualizer_pane_g2_ParamLimits

0xb434,	// (0x00059c96) mup_visualizer_pane_g2

0xb2aa,	// (0x00059b0c) mup_visualizer_pane_g3_ParamLimits

0xb2aa,	// (0x00059b0c) mup_visualizer_pane_g3

0x0002,

0xf449,	// (0x0005dcab) mup_visualizer_pane_g_ParamLimits

0xf449,	// (0x0005dcab) mup_visualizer_pane_g

0xa218,	// (0x00058a7a) mup_volume_pane_g1

0xb44a,	// (0x00059cac) mup_volume_pane_g2

0x0001,

0xf450,	// (0x0005dcb2) mup_volume_pane_g

0xa218,	// (0x00058a7a) mup_progress_pane_g1

0xb453,	// (0x00059cb5) mup_progress_pane_g2

0xb45c,	// (0x00059cbe) mup_progress_pane_g3

0x0002,

0xf455,	// (0x0005dcb7) mup_progress_pane_g

0x9e5d,	// (0x000586bf) bg_popup_window_pane_cp05

0xb465,	// (0x00059cc7) heading_pane_cp02_ParamLimits

0xb465,	// (0x00059cc7) heading_pane_cp02

0xb481,	// (0x00059ce3) list_popup_blid_pane

0xb489,	// (0x00059ceb) list_blid_sat_info_pane_ParamLimits

0xb489,	// (0x00059ceb) list_blid_sat_info_pane

0xb49c,	// (0x00059cfe) list_blid_sat_info_pane_g1

0xb4a4,	// (0x00059d06) list_blid_sat_info_pane_t1

0x36eb,	// (0x00051f4d) mup_equalizer_pane_ParamLimits

0x36eb,	// (0x00051f4d) mup_equalizer_pane

0x370c,	// (0x00051f6e) mup_equalizer_pane_cp1_ParamLimits

0x370c,	// (0x00051f6e) mup_equalizer_pane_cp1

0x372d,	// (0x00051f8f) mup_equalizer_pane_cp2_ParamLimits

0x372d,	// (0x00051f8f) mup_equalizer_pane_cp2

0x3752,	// (0x00051fb4) mup_equalizer_pane_cp3_ParamLimits

0x3752,	// (0x00051fb4) mup_equalizer_pane_cp3

0x377b,	// (0x00051fdd) mup_equalizer_pane_cp4_ParamLimits

0x377b,	// (0x00051fdd) mup_equalizer_pane_cp4

0x37a4,	// (0x00052006) mup_equalizer_pane_cp5

0x37bc,	// (0x0005201e) mup_equalizer_pane_cp6

0x37d4,	// (0x00052036) mup_equalizer_pane_cp7

0xc661,	// (0x0005aec3) bg_popup_call_poc_act_pane_g9

0xc669,	// (0x0005aecb) bg_popup_call_poc_act_pane_g10

0xc671,	// (0x0005aed3) bg_popup_call_poc_act_pane_g11

0x000a,

0xa0b8,	// (0x0005891a) mup_scale_pane

0xa218,	// (0x00058a7a) mup_scale_pane_g1

0xb4b2,	// (0x00059d14) mup_scale_pane_g2

0x0006,

0xf471,	// (0x0005dcd3) mup_scale_pane_g

0xb4d6,	// (0x00059d38) msg_data_pane

0xb4de,	// (0x00059d40) scroll_pane_cp017

0x37fe,	// (0x00052060) bg_list_pane_cp04_ParamLimits

0x37fe,	// (0x00052060) bg_list_pane_cp04

0xb4e6,	// (0x00059d48) msg_data_pane_g1

0x381e,	// (0x00052080) msg_data_pane_g2

0x3828,	// (0x0005208a) msg_data_pane_g3

0x3832,	// (0x00052094) msg_data_pane_g4

0x383a,	// (0x0005209c) msg_data_pane_g5

0x3842,	// (0x000520a4) msg_data_pane_g6

0x384a,	// (0x000520ac) msg_data_pane_g7

0x0006,

0xf480,	// (0x0005dce2) msg_data_pane_g

0x3852,	// (0x000520b4) msg_text_pane_ParamLimits

0x3852,	// (0x000520b4) msg_text_pane

0x387a,	// (0x000520dc) qrid_highlight_pane_cp011_ParamLimits

0x387a,	// (0x000520dc) qrid_highlight_pane_cp011

0x9e5d,	// (0x000586bf) msg_body_pane

0x9e5d,	// (0x000586bf) msg_header_pane

0xb4f7,	// (0x00059d59) input_focus_pane_cp07

0xb50c,	// (0x00059d6e) msg_header_pane_t1_ParamLimits

0xb50c,	// (0x00059d6e) msg_header_pane_t1

0x3890,	// (0x000520f2) msg_header_pane_t2_ParamLimits

0x3890,	// (0x000520f2) msg_header_pane_t2

0x0001,

0xf494,	// (0x0005dcf6) msg_header_pane_t_ParamLimits

0xf494,	// (0x0005dcf6) msg_header_pane_t

0xb51e,	// (0x00059d80) msg_body_pane_g1

0xfd69,	// (0x0004e5cb) msg_body_pane_t1_ParamLimits

0xfd69,	// (0x0004e5cb) msg_body_pane_t1

0x38a2,	// (0x00052104) msg_body_pane_t2_ParamLimits

0x38a2,	// (0x00052104) msg_body_pane_t2

0x38b4,	// (0x00052116) msg_body_pane_t3_ParamLimits

0x38b4,	// (0x00052116) msg_body_pane_t3

0x0002,

0xf499,	// (0x0005dcfb) msg_body_pane_t_ParamLimits

0xf499,	// (0x0005dcfb) msg_body_pane_t

0x3900,	// (0x00052162) main_viewer_pane_g1_ParamLimits

0x3900,	// (0x00052162) main_viewer_pane_g1

0x390e,	// (0x00052170) main_viewer_pane_g2_ParamLimits

0x390e,	// (0x00052170) main_viewer_pane_g2

0x391c,	// (0x0005217e) main_viewer_pane_g3_ParamLimits

0x391c,	// (0x0005217e) main_viewer_pane_g3

0x392b,	// (0x0005218d) main_viewer_pane_g4_ParamLimits

0x392b,	// (0x0005218d) main_viewer_pane_g4

0xa735,	// (0x00058f97) main_viewer_pane_g5_ParamLimits

0xa735,	// (0x00058f97) main_viewer_pane_g5

0xa735,	// (0x00058f97) main_viewer_pane_g7_ParamLimits

0xa735,	// (0x00058f97) main_viewer_pane_g7

0xa747,	// (0x00058fa9) main_viewer_pane_g8_ParamLimits

0xa747,	// (0x00058fa9) main_viewer_pane_g8

0x0007,

0xf4a9,	// (0x0005dd0b) main_viewer_pane_g_ParamLimits

0xf4a9,	// (0x0005dd0b) main_viewer_pane_g

0xb526,	// (0x00059d88) viewer_content_pane_ParamLimits

0xb526,	// (0x00059d88) viewer_content_pane

0x3969,	// (0x000521cb) main_postcard_pane_g1_ParamLimits

0x3969,	// (0x000521cb) main_postcard_pane_g1

0x397f,	// (0x000521e1) main_postcard_pane_g2_ParamLimits

0x397f,	// (0x000521e1) main_postcard_pane_g2

0x3995,	// (0x000521f7) main_postcard_pane_g3_ParamLimits

0x3995,	// (0x000521f7) main_postcard_pane_g3

0x0005,

0xf4ba,	// (0x0005dd1c) main_postcard_pane_g_ParamLimits

0xf4ba,	// (0x0005dd1c) main_postcard_pane_g

0x39ac,	// (0x0005220e) main_postcard_pane_g4

0xc88a,	// (0x0005b0ec) smil_status_volume_pane_g2

0x39ef,	// (0x00052251) postcard_pane_ParamLimits

0x39ef,	// (0x00052251) postcard_pane

0xb534,	// (0x00059d96) postcard_pane_g1_ParamLimits

0xb534,	// (0x00059d96) postcard_pane_g1

0x3a3f,	// (0x000522a1) postcard_pane_g2_ParamLimits

0x3a3f,	// (0x000522a1) postcard_pane_g2

0x3a4b,	// (0x000522ad) postcard_pane_g3_ParamLimits

0x3a4b,	// (0x000522ad) postcard_pane_g3

0xb542,	// (0x00059da4) postcard_pane_g4_ParamLimits

0xb542,	// (0x00059da4) postcard_pane_g4

0x3a57,	// (0x000522b9) postcard_pane_g5_ParamLimits

0x3a57,	// (0x000522b9) postcard_pane_g5

0x3a6c,	// (0x000522ce) postcard_pane_g6_ParamLimits

0x3a6c,	// (0x000522ce) postcard_pane_g6

0xb534,	// (0x00059d96) postcard_pane_g7_ParamLimits

0xb534,	// (0x00059d96) postcard_pane_g7

0x0006,

0xf4c7,	// (0x0005dd29) postcard_pane_g_ParamLimits

0xf4c7,	// (0x0005dd29) postcard_pane_g

0x3a84,	// (0x000522e6) main_mp2_pane_g1_ParamLimits

0x3a84,	// (0x000522e6) main_mp2_pane_g1

0x3a92,	// (0x000522f4) main_mp2_pane_g2_ParamLimits

0x3a92,	// (0x000522f4) main_mp2_pane_g2

0x3a9e,	// (0x00052300) main_mp2_pane_g3_ParamLimits

0x3a9e,	// (0x00052300) main_mp2_pane_g3

0x0002,

0xf4d6,	// (0x0005dd38) main_mp2_pane_g_ParamLimits

0xf4d6,	// (0x0005dd38) main_mp2_pane_g

0x3aaa,	// (0x0005230c) main_mp2_pane_t1_ParamLimits

0x3aaa,	// (0x0005230c) main_mp2_pane_t1

0x3ac1,	// (0x00052323) main_mp2_pane_t2_ParamLimits

0x3ac1,	// (0x00052323) main_mp2_pane_t2

0x3ad3,	// (0x00052335) main_mp2_pane_t3_ParamLimits

0x3ad3,	// (0x00052335) main_mp2_pane_t3

0x0002,

0xf4dd,	// (0x0005dd3f) main_mp2_pane_t_ParamLimits

0xf4dd,	// (0x0005dd3f) main_mp2_pane_t

0xb550,	// (0x00059db2) pec_content_pane_ParamLimits

0xb550,	// (0x00059db2) pec_content_pane

0xa5a6,	// (0x00058e08) scroll_pane_cp015

0xb562,	// (0x00059dc4) pec_attribute_pane_ParamLimits

0xb562,	// (0x00059dc4) pec_attribute_pane

0x3ae5,	// (0x00052347) pec_content_pane_g1_ParamLimits

0x3ae5,	// (0x00052347) pec_content_pane_g1

0xb572,	// (0x00059dd4) pec_content_pane_t1_ParamLimits

0xb572,	// (0x00059dd4) pec_content_pane_t1

0xb584,	// (0x00059de6) pec_content_pane_t2_ParamLimits

0xb584,	// (0x00059de6) pec_content_pane_t2

0x0001,

0xf4e4,	// (0x0005dd46) pec_content_pane_t_ParamLimits

0xf4e4,	// (0x0005dd46) pec_content_pane_t

0x3af1,	// (0x00052353) list_single_graphic_pane_cp01_ParamLimits

0x3af1,	// (0x00052353) list_single_graphic_pane_cp01

0xa0b8,	// (0x0005891a) bg_popup_sub_pane_cp04

0xb596,	// (0x00059df8) popup_mup_playback_window_g1

0xb5a2,	// (0x00059e04) popup_mup_playback_window_t1

0xb5b7,	// (0x00059e19) popup_mup_playback_window_t2

0x0001,

0xf4e9,	// (0x0005dd4b) popup_mup_playback_window_t

0xb5ee,	// (0x00059e50) main_image_pane_g1_ParamLimits

0xb5ee,	// (0x00059e50) main_image_pane_g1

0xb631,	// (0x00059e93) scroll_pane_cp018_ParamLimits

0xb631,	// (0x00059e93) scroll_pane_cp018

0xb649,	// (0x00059eab) scroll_pane_cp016_ParamLimits

0xb649,	// (0x00059eab) scroll_pane_cp016

0x3bc0,	// (0x00052422) smil2_image_pane_ParamLimits

0x3bc0,	// (0x00052422) smil2_image_pane

0x3bf6,	// (0x00052458) smil2_root_pane_ParamLimits

0x3bf6,	// (0x00052458) smil2_root_pane

0x3c2e,	// (0x00052490) smil2_text_pane_ParamLimits

0x3c2e,	// (0x00052490) smil2_text_pane

0x9e5d,	// (0x000586bf) bg_list_pane_cp06

0xb685,	// (0x00059ee7) grid_radio_pane

0x9e5d,	// (0x000586bf) bg_popup_window_pane_cp06

0xb68f,	// (0x00059ef1) main_fmradio_pane_t1

0xb127,	// (0x00059989) heading_pane_cp04

0xb69d,	// (0x00059eff) main_fmradio_pane_t2

0xc679,	// (0x0005aedb) popup_cale_lunar_info_window_g1

0xb6ab,	// (0x00059f0d) main_fmradio_pane_t3

0xc681,	// (0x0005aee3) popup_cale_lunar_info_window_g2

0xb6bb,	// (0x00059f1d) main_fmradio_pane_t4

0x0001,

0xb6c9,	// (0x00059f2b) main_fmradio_pane_t5

0x0004,

0xf5c4,	// (0x0005de26) popup_cale_lunar_info_window_g

0xf4fe,	// (0x0005dd60) main_fmradio_pane_t

0xb6d7,	// (0x00059f39) wait_bar_pane_cp03

0xb6df,	// (0x00059f41) cell_fmradio_pane_ParamLimits

0xb6df,	// (0x00059f41) cell_fmradio_pane

0xb534,	// (0x00059d96) cell_fmradio_pane_g1_ParamLimits

0xb534,	// (0x00059d96) cell_fmradio_pane_g1

0x9e5d,	// (0x000586bf) grid_highlight_pane_cp011

0xb6f4,	// (0x00059f56) poc_content_pane_ParamLimits

0xb6f4,	// (0x00059f56) poc_content_pane

0xb706,	// (0x00059f68) scroll_pane_cp019

0x3cbe,	// (0x00052520) popup_call_poc_act_window_ParamLimits

0x3cbe,	// (0x00052520) popup_call_poc_act_window

0x3ce2,	// (0x00052544) popup_call_poc_inact_window_ParamLimits

0x3ce2,	// (0x00052544) popup_call_poc_inact_window

0xf59b,	// (0x0005ddfd) bg_popup_call_poc_act_pane_g

0xc5f1,	// (0x0005ae53) bg_popup_call_poc_inact_pane_g1

0xc5f9,	// (0x0005ae5b) bg_popup_call_poc_inact_pane_g2

0xb70e,	// (0x00059f70) popup_call_poc_act_window_g2

0xc601,	// (0x0005ae63) bg_popup_call_poc_inact_pane_g3

0xc609,	// (0x0005ae6b) bg_popup_call_poc_inact_pane_g4

0xc611,	// (0x0005ae73) bg_popup_call_poc_inact_pane_g5

0xb716,	// (0x00059f78) popup_call_poc_act_window_t1_ParamLimits

0xb716,	// (0x00059f78) popup_call_poc_act_window_t1

0xb73e,	// (0x00059fa0) popup_call_poc_act_window_t2_ParamLimits

0xb73e,	// (0x00059fa0) popup_call_poc_act_window_t2

0xb766,	// (0x00059fc8) popup_call_poc_act_window_t3_ParamLimits

0xb766,	// (0x00059fc8) popup_call_poc_act_window_t3

0xb78e,	// (0x00059ff0) popup_call_poc_act_window_t4_ParamLimits

0xb78e,	// (0x00059ff0) popup_call_poc_act_window_t4

0x0003,

0xf509,	// (0x0005dd6b) popup_call_poc_act_window_t_ParamLimits

0xf509,	// (0x0005dd6b) popup_call_poc_act_window_t

0xc619,	// (0x0005ae7b) bg_popup_call_poc_inact_pane_g6

0xc621,	// (0x0005ae83) bg_popup_call_poc_inact_pane_g7

0xc629,	// (0x0005ae8b) bg_popup_call_poc_inact_pane_g8

0xb7a0,	// (0x0005a002) popup_call_poc_inact_window_g2

0xc631,	// (0x0005ae93) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf588,	// (0x0005ddea) bg_popup_call_poc_inact_pane_g

0xb7a8,	// (0x0005a00a) popup_call_poc_inact_window_t1_ParamLimits

0xb7a8,	// (0x0005a00a) popup_call_poc_inact_window_t1

0xb7bd,	// (0x0005a01f) popup_call_poc_inact_window_t2_ParamLimits

0xb7bd,	// (0x0005a01f) popup_call_poc_inact_window_t2

0xb7d2,	// (0x0005a034) popup_call_poc_inact_window_t3_ParamLimits

0xb7d2,	// (0x0005a034) popup_call_poc_inact_window_t3

0x0002,

0xf512,	// (0x0005dd74) popup_call_poc_inact_window_t_ParamLimits

0xf512,	// (0x0005dd74) popup_call_poc_inact_window_t

0xc7fd,	// (0x0005b05f) context_pane_ParamLimits

0x458a,	// (0x00052dec) signal_pane_ParamLimits

0xb375,	// (0x00059bd7) main_call2_pane

0xc7eb,	// (0x0005b04d) popup_phob_thumbnail2_window_ParamLimits

0xc7eb,	// (0x0005b04d) popup_phob_thumbnail2_window

0xa71d,	// (0x00058f7f) aid_hotspot_pointer_arrow_pane

0xa725,	// (0x00058f87) aid_hotspot_pointer_hand_pane

0x404a,	// (0x000528ac) phob_pre_status_pane_g5

0x1a72,	// (0x000502d4) cams_zoom_pane_ParamLimits

0x1a81,	// (0x000502e3) image_vga_pane_ParamLimits

0x1a9b,	// (0x000502fd) main_camera_pane_g1_ParamLimits

0x1aad,	// (0x0005030f) main_camera_pane_g2_ParamLimits

0x1abd,	// (0x0005031f) main_camera_pane_g3_ParamLimits

0x1ad1,	// (0x00050333) main_camera_pane_g4_ParamLimits

0x1ae5,	// (0x00050347) main_camera_pane_g5_ParamLimits

0x1af9,	// (0x0005035b) main_camera_pane_g6_ParamLimits

0x1b0d,	// (0x0005036f) main_camera_pane_g7_ParamLimits

0xf20a,	// (0x0005da6c) main_camera_pane_g_ParamLimits

0x1b21,	// (0x00050383) main_camera_pane_t1_ParamLimits

0x1b37,	// (0x00050399) main_camera_pane_t2_ParamLimits

0xf21b,	// (0x0005da7d) main_camera_pane_t_ParamLimits

0xa0b8,	// (0x0005891a) bg_popup_preview_window_pane_cp01_ParamLimits

0xa0b8,	// (0x0005891a) bg_popup_preview_window_pane_cp01

0xb7e7,	// (0x0005a049) popup_phob_thumbnail2_window_g1_ParamLimits

0xb7e7,	// (0x0005a049) popup_phob_thumbnail2_window_g1

0x9e5d,	// (0x000586bf) call2_cli_visual_pane

0x3d16,	// (0x00052578) popup_call2_audio_conf_window_ParamLimits

0x3d16,	// (0x00052578) popup_call2_audio_conf_window

0x3d3e,	// (0x000525a0) popup_call2_audio_first_window_ParamLimits

0x3d3e,	// (0x000525a0) popup_call2_audio_first_window

0x3dd4,	// (0x00052636) popup_call2_audio_in_window_ParamLimits

0x3dd4,	// (0x00052636) popup_call2_audio_in_window

0x3e20,	// (0x00052682) popup_call2_audio_out_window_ParamLimits

0x3e20,	// (0x00052682) popup_call2_audio_out_window

0x3e92,	// (0x000526f4) popup_call2_audio_second_window_ParamLimits

0x3e92,	// (0x000526f4) popup_call2_audio_second_window

0x3ef8,	// (0x0005275a) popup_call2_audio_wait_window_ParamLimits

0x3ef8,	// (0x0005275a) popup_call2_audio_wait_window

0x9e5d,	// (0x000586bf) bg_popup_call2_act_pane_cp03

0xa09a,	// (0x000588fc) list_conf_pane_cp

0xb7f3,	// (0x0005a055) popup_call2_audio_conf_window_t1

0xb801,	// (0x0005a063) list_single_graphic_popup_conf2_pane_ParamLimits

0xb801,	// (0x0005a063) list_single_graphic_popup_conf2_pane

0xb196,	// (0x000599f8) list_highlight_pane_cp04

0xb814,	// (0x0005a076) list_single_graphic_popup_conf2_pane_g1

0xb1a7,	// (0x00059a09) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf519,	// (0x0005dd7b) list_single_graphic_popup_conf2_pane_g

0xb81e,	// (0x0005a080) list_single_graphic_popup_conf2_pane_t1

0xb82c,	// (0x0005a08e) bg_popup_call2_act_pane_cp01_ParamLimits

0xb82c,	// (0x0005a08e) bg_popup_call2_act_pane_cp01

0xb8b6,	// (0x0005a118) call_type_pane_cp05_ParamLimits

0xb8b6,	// (0x0005a118) call_type_pane_cp05

0xb90a,	// (0x0005a16c) popup_call2_audio_second_window_g1_ParamLimits

0xb90a,	// (0x0005a16c) popup_call2_audio_second_window_g1

0xb95e,	// (0x0005a1c0) popup_call2_audio_second_window_g2_ParamLimits

0xb95e,	// (0x0005a1c0) popup_call2_audio_second_window_g2

0x0002,

0xf51e,	// (0x0005dd80) popup_call2_audio_second_window_g_ParamLimits

0xf51e,	// (0x0005dd80) popup_call2_audio_second_window_g

0xb9c3,	// (0x0005a225) popup_call2_audio_second_window_t1_ParamLimits

0xb9c3,	// (0x0005a225) popup_call2_audio_second_window_t1

0xba7e,	// (0x0005a2e0) popup_call2_audio_second_window_t2_ParamLimits

0xba7e,	// (0x0005a2e0) popup_call2_audio_second_window_t2

0xbad1,	// (0x0005a333) popup_call2_audio_second_window_t3_ParamLimits

0xbad1,	// (0x0005a333) popup_call2_audio_second_window_t3

0x0003,

0xf525,	// (0x0005dd87) popup_call2_audio_second_window_t_ParamLimits

0xf525,	// (0x0005dd87) popup_call2_audio_second_window_t

0x9e5d,	// (0x000586bf) bg_popup_call2_in_pane_cp02

0x9e67,	// (0x000586c9) call_type_pane_cp04

0x9e6f,	// (0x000586d1) popup_call2_audio_wait_window_g1

0x9e77,	// (0x000586d9) popup_call2_audio_wait_window_g2

0x0001,

0xf0f5,	// (0x0005d957) popup_call2_audio_wait_window_g

0x9e7f,	// (0x000586e1) popup_call2_audio_wait_window_t3

0xbbc4,	// (0x0005a426) bg_popup_call2_act_pane_ParamLimits

0xbbc4,	// (0x0005a426) bg_popup_call2_act_pane

0xbc84,	// (0x0005a4e6) call_type_pane_cp03_ParamLimits

0xbc84,	// (0x0005a4e6) call_type_pane_cp03

0xbce8,	// (0x0005a54a) popup_call2_audio_first_window_g1_ParamLimits

0xbce8,	// (0x0005a54a) popup_call2_audio_first_window_g1

0xbd58,	// (0x0005a5ba) popup_call2_audio_first_window_g2_ParamLimits

0xbd58,	// (0x0005a5ba) popup_call2_audio_first_window_g2

0xb434,	// (0x00059c96) popup_call2_audio_first_window_g3_ParamLimits

0xb434,	// (0x00059c96) popup_call2_audio_first_window_g3

0x0004,

0xf52e,	// (0x0005dd90) popup_call2_audio_first_window_g_ParamLimits

0xf52e,	// (0x0005dd90) popup_call2_audio_first_window_g

0xbe36,	// (0x0005a698) popup_call2_audio_first_window_t1_ParamLimits

0xbe36,	// (0x0005a698) popup_call2_audio_first_window_t1

0xbf39,	// (0x0005a79b) popup_call2_audio_first_window_t4_ParamLimits

0xbf39,	// (0x0005a79b) popup_call2_audio_first_window_t4

0xc01c,	// (0x0005a87e) popup_call2_audio_first_window_t5_ParamLimits

0xc01c,	// (0x0005a87e) popup_call2_audio_first_window_t5

0x0003,

0xf539,	// (0x0005dd9b) popup_call2_audio_first_window_t_ParamLimits

0xf539,	// (0x0005dd9b) popup_call2_audio_first_window_t

0xa0b0,	// (0x00058912) bg_popup_call2_act_pane_g1

0xc68b,	// (0x0005aeed) popup_cale_lunar_info_window_t1

0xc699,	// (0x0005aefb) popup_cale_lunar_info_window_t2

0xc6a7,	// (0x0005af09) popup_cale_lunar_info_window_t3

0x9e5d,	// (0x000586bf) bg_popup_call2_bubble_pane

0xc11d,	// (0x0005a97f) bg_popup_call2_in_pane_cp01_ParamLimits

0xc11d,	// (0x0005a97f) bg_popup_call2_in_pane_cp01

0x9b39,	// (0x0005839b) call_type_pane_cp02

0xc165,	// (0x0005a9c7) popup_call2_audio_out_window_g1_ParamLimits

0xc165,	// (0x0005a9c7) popup_call2_audio_out_window_g1

0xc191,	// (0x0005a9f3) popup_call2_audio_out_window_g2_ParamLimits

0xc191,	// (0x0005a9f3) popup_call2_audio_out_window_g2

0xc1b9,	// (0x0005aa1b) popup_call2_audio_out_window_g3_ParamLimits

0xc1b9,	// (0x0005aa1b) popup_call2_audio_out_window_g3

0x0003,

0xf542,	// (0x0005dda4) popup_call2_audio_out_window_g_ParamLimits

0xf542,	// (0x0005dda4) popup_call2_audio_out_window_g

0xc1f4,	// (0x0005aa56) popup_call2_audio_out_window_t1_ParamLimits

0xc1f4,	// (0x0005aa56) popup_call2_audio_out_window_t1

0xc253,	// (0x0005aab5) popup_call2_audio_out_window_t2_ParamLimits

0xc253,	// (0x0005aab5) popup_call2_audio_out_window_t2

0xc2a7,	// (0x0005ab09) popup_call2_audio_out_window_t3_ParamLimits

0xc2a7,	// (0x0005ab09) popup_call2_audio_out_window_t3

0xc2bd,	// (0x0005ab1f) popup_call2_audio_out_window_t4_ParamLimits

0xc2bd,	// (0x0005ab1f) popup_call2_audio_out_window_t4

0xc2d3,	// (0x0005ab35) popup_call2_audio_out_window_t5_ParamLimits

0xc2d3,	// (0x0005ab35) popup_call2_audio_out_window_t5

0x0005,

0xf54b,	// (0x0005ddad) popup_call2_audio_out_window_t_ParamLimits

0xf54b,	// (0x0005ddad) popup_call2_audio_out_window_t

0xc337,	// (0x0005ab99) bg_popup_call2_in_pane_ParamLimits

0xc337,	// (0x0005ab99) bg_popup_call2_in_pane

0xc393,	// (0x0005abf5) popup_call2_audio_in_window_g1_ParamLimits

0xc393,	// (0x0005abf5) popup_call2_audio_in_window_g1

0xc3cb,	// (0x0005ac2d) popup_call2_audio_in_window_g2_ParamLimits

0xc3cb,	// (0x0005ac2d) popup_call2_audio_in_window_g2

0xc403,	// (0x0005ac65) popup_call2_audio_in_window_g3_ParamLimits

0xc403,	// (0x0005ac65) popup_call2_audio_in_window_g3

0x0003,

0xf558,	// (0x0005ddba) popup_call2_audio_in_window_g_ParamLimits

0xf558,	// (0x0005ddba) popup_call2_audio_in_window_g

0xc45b,	// (0x0005acbd) popup_call2_audio_in_window_t1_ParamLimits

0xc45b,	// (0x0005acbd) popup_call2_audio_in_window_t1

0xc4db,	// (0x0005ad3d) popup_call2_audio_in_window_t2_ParamLimits

0xc4db,	// (0x0005ad3d) popup_call2_audio_in_window_t2

0xc55b,	// (0x0005adbd) popup_call2_audio_in_window_t3_ParamLimits

0xc55b,	// (0x0005adbd) popup_call2_audio_in_window_t3

0xc575,	// (0x0005add7) popup_call2_audio_in_window_t4_ParamLimits

0xc575,	// (0x0005add7) popup_call2_audio_in_window_t4

0xc587,	// (0x0005ade9) popup_call2_audio_in_window_t5_ParamLimits

0xc587,	// (0x0005ade9) popup_call2_audio_in_window_t5

0xc59c,	// (0x0005adfe) popup_call2_audio_in_window_t6_ParamLimits

0xc59c,	// (0x0005adfe) popup_call2_audio_in_window_t6

0x0005,

0xf561,	// (0x0005ddc3) popup_call2_audio_in_window_t_ParamLimits

0xf561,	// (0x0005ddc3) popup_call2_audio_in_window_t

0xa0b0,	// (0x00058912) bg_popup_call2_in_pane_g1

0xc6b5,	// (0x0005af17) popup_cale_lunar_info_window_t4

0x0003,

0xf5c9,	// (0x0005de2b) popup_cale_lunar_info_window_t

0xa0b8,	// (0x0005891a) bg_popup_call2_rect_pane_ParamLimits

0xa0b8,	// (0x0005891a) bg_popup_call2_rect_pane

0x9e5d,	// (0x000586bf) call2_cli_visual_graphic_pane

0x9e5d,	// (0x000586bf) call2_cli_visual_text_pane

0xa75f,	// (0x00058fc1) smil_status_volume_pane_g3

0x0002,

0xa218,	// (0x00058a7a) call2_cli_visual_graphic_pane_g1

0xa218,	// (0x00058a7a) call2_cli_visual_graphic_pane_g2

0xa218,	// (0x00058a7a) call2_cli_visual_graphic_pane_g3

0x0002,

0xf56e,	// (0x0005ddd0) call2_cli_visual_graphic_pane_g

0xc5b1,	// (0x0005ae13) bg_popup_call2_rect_pane_g1

0xa2c0,	// (0x00058b22) bg_popup_call2_rect_pane_g2

0xc5b9,	// (0x0005ae1b) bg_popup_call2_rect_pane_g3

0xc5c1,	// (0x0005ae23) bg_popup_call2_rect_pane_g4

0xc5c9,	// (0x0005ae2b) bg_popup_call2_rect_pane_g5

0xc5d1,	// (0x0005ae33) bg_popup_call2_rect_pane_g6

0xc5d9,	// (0x0005ae3b) bg_popup_call2_rect_pane_g7

0xc5e1,	// (0x0005ae43) bg_popup_call2_rect_pane_g8

0xc5e9,	// (0x0005ae4b) bg_popup_call2_rect_pane_g9

0x0008,

0xf575,	// (0x0005ddd7) bg_popup_call2_rect_pane_g

0xc5f1,	// (0x0005ae53) bg_popup_call2_bubble_pane_g1

0xc5f9,	// (0x0005ae5b) bg_popup_call2_bubble_pane_g2

0xc601,	// (0x0005ae63) bg_popup_call2_bubble_pane_g3

0xc609,	// (0x0005ae6b) bg_popup_call2_bubble_pane_g4

0xc611,	// (0x0005ae73) bg_popup_call2_bubble_pane_g5

0xc619,	// (0x0005ae7b) bg_popup_call2_bubble_pane_g6

0xc621,	// (0x0005ae83) bg_popup_call2_bubble_pane_g7

0xc629,	// (0x0005ae8b) bg_popup_call2_bubble_pane_g8

0xc631,	// (0x0005ae93) bg_popup_call2_bubble_pane_g9

0x0008,

0xf588,	// (0x0005ddea) bg_popup_call2_bubble_pane_g

0x11f8,	// (0x0004fa5a) aid_cale_week_size_cell_pane

0x1b51,	// (0x000503b3) aid_cams_cif_uncrop_pane_ParamLimits

0x1b51,	// (0x000503b3) aid_cams_cif_uncrop_pane

0x1d0a,	// (0x0005056c) aid_cams_size_cell_ParamLimits

0x1d0a,	// (0x0005056c) aid_cams_size_cell

0x1d1e,	// (0x00050580) grid_cams_pane_ParamLimits

0x1d38,	// (0x0005059a) linegrid_cams_pane_ParamLimits

0x1e38,	// (0x0005069a) call_video_pane_t1

0x1e52,	// (0x000506b4) call_video_pane_t2

0x0001,

0xf26e,	// (0x0005dad0) call_video_pane_t

0x2286,	// (0x00050ae8) aid_cale_month_size_cell_pane_ParamLimits

0x2286,	// (0x00050ae8) aid_cale_month_size_cell_pane

0xf612,	// (0x0005de74) smil_status_volume_pane_g

0xa76c,	// (0x00058fce) volume_smil_pane_ParamLimits

0x99f5,	// (0x00058257) aid_popup2_width_pane

0x1156,	// (0x0004f9b8) cell_qdial_pane_g4_ParamLimits

0x1156,	// (0x0004f9b8) cell_qdial_pane_g4

0x31d1,	// (0x00051a33) aid_blid_cardinal_pane_ParamLimits

0x31dd,	// (0x00051a3f) aid_blid_destination_pane_ParamLimits

0x31dd,	// (0x00051a3f) aid_blid_destination_pane

0xa0b8,	// (0x0005891a) bg_popup_call_poc_act_pane_ParamLimits

0xa0b8,	// (0x0005891a) bg_popup_call_poc_act_pane

0xa0b8,	// (0x0005891a) bg_popup_call_poc_inact_pane_ParamLimits

0xa0b8,	// (0x0005891a) bg_popup_call_poc_inact_pane

0xc639,	// (0x0005ae9b) bg_popup_call_poc_act_pane_g1

0xc641,	// (0x0005aea3) bg_popup_call_poc_act_pane_g2

0xc649,	// (0x0005aeab) bg_popup_call_poc_act_pane_g3

0xc609,	// (0x0005ae6b) bg_popup_call_poc_act_pane_g4

0xc611,	// (0x0005ae73) bg_popup_call_poc_act_pane_g5

0xc651,	// (0x0005aeb3) bg_popup_call_poc_act_pane_g6

0xc621,	// (0x0005ae83) bg_popup_call_poc_act_pane_g7

0xc659,	// (0x0005aebb) bg_popup_call_poc_act_pane_g8

0x9e5d,	// (0x000586bf) main_usb_pane

0xc7c2,	// (0x0005b024) popup_cale_lunar_info_window

0x211b,	// (0x0005097d) im_reading_pane_t1_ParamLimits

0xa4fe,	// (0x00058d60) list_im_pane_ParamLimits

0xa50f,	// (0x00058d71) scroll_pane_cp07_ParamLimits

0x9e5d,	// (0x000586bf) grid_highlight_pane_cp012

0xa0b8,	// (0x0005891a) mup_scale_pane_ParamLimits

0xb534,	// (0x00059d96) main_usb_pane_g1_ParamLimits

0xb534,	// (0x00059d96) main_usb_pane_g1

0x3f56,	// (0x000527b8) main_usb_pane_g2_ParamLimits

0x3f56,	// (0x000527b8) main_usb_pane_g2

0x0001,

0xf5b2,	// (0x0005de14) main_usb_pane_g_ParamLimits

0xf5b2,	// (0x0005de14) main_usb_pane_g

0x3f6c,	// (0x000527ce) main_usb_pane_t1_ParamLimits

0x3f6c,	// (0x000527ce) main_usb_pane_t1

0x3f7e,	// (0x000527e0) main_usb_pane_t2_ParamLimits

0x3f7e,	// (0x000527e0) main_usb_pane_t2

0x3f90,	// (0x000527f2) main_usb_pane_t3_ParamLimits

0x3f90,	// (0x000527f2) main_usb_pane_t3

0x3fa2,	// (0x00052804) main_usb_pane_t4_ParamLimits

0x3fa2,	// (0x00052804) main_usb_pane_t4

0x3fb7,	// (0x00052819) main_usb_pane_t5_ParamLimits

0x3fb7,	// (0x00052819) main_usb_pane_t5

0x3fcc,	// (0x0005282e) main_usb_pane_t6_ParamLimits

0x3fcc,	// (0x0005282e) main_usb_pane_t6

0x0005,

0xf5b7,	// (0x0005de19) main_usb_pane_t_ParamLimits

0x3172,	// (0x000519d4) aid_text_placing

0x317d,	// (0x000519df) main_location2_pane_t1_ParamLimits

0x3191,	// (0x000519f3) main_location2_pane_t2_ParamLimits

0x31a7,	// (0x00051a09) main_location2_pane_t3_ParamLimits

0x31bd,	// (0x00051a1f) main_location2_pane_t4_ParamLimits

0x31bd,	// (0x00051a1f) main_location2_pane_t4

0xf3d6,	// (0x0005dc38) main_location2_pane_t_ParamLimits

0xa0f4,	// (0x00058956) find_pinb_pane_g2_ParamLimits

0xa0f4,	// (0x00058956) find_pinb_pane_g2

0x0001,

0xf11b,	// (0x0005d97d) find_pinb_pane_g_ParamLimits

0xf11b,	// (0x0005d97d) find_pinb_pane_g

0xa100,	// (0x00058962) find_pinb_pane_t1_ParamLimits

0xa112,	// (0x00058974) find_pinb_pane_t2_ParamLimits

0xf120,	// (0x0005d982) find_pinb_pane_t_ParamLimits

0x9e5d,	// (0x000586bf) main_call3_pane

0x2855,	// (0x000510b7) cale_month_day_heading_pane_t1_ParamLimits

0x28db,	// (0x0005113d) cale_month_day_heading_pane_t2_ParamLimits

0x296c,	// (0x000511ce) cale_month_day_heading_pane_t3_ParamLimits

0x29fd,	// (0x0005125f) cale_month_day_heading_pane_t4_ParamLimits

0x2a8e,	// (0x000512f0) cale_month_day_heading_pane_t5_ParamLimits

0x2b2f,	// (0x00051391) cale_month_day_heading_pane_t6_ParamLimits

0x2bd4,	// (0x00051436) cale_month_day_heading_pane_t7_ParamLimits

0xf2a6,	// (0x0005db08) cale_month_day_heading_pane_t_ParamLimits

0x2e86,	// (0x000516e8) smil_status_volume_pane

0x3a13,	// (0x00052275) postcard_address_pane_ParamLimits

0x3a13,	// (0x00052275) postcard_address_pane

0x3a29,	// (0x0005228b) postcard_message_pane_ParamLimits

0x3a29,	// (0x0005228b) postcard_message_pane

0x3f32,	// (0x00052794) call2_cli_visual_pane_t1_ParamLimits

0x3f32,	// (0x00052794) call2_cli_visual_pane_t1

0x47bf,	// (0x00053021) postcard_message_pane_t1_ParamLimits

0x47bf,	// (0x00053021) postcard_message_pane_t1

0x47a8,	// (0x0005300a) postcard_address_pane_t1_ParamLimits

0x47a8,	// (0x0005300a) postcard_address_pane_t1

0x4794,	// (0x00052ff6) popup_call3_audio_in_window_ParamLimits

0x4794,	// (0x00052ff6) popup_call3_audio_in_window

0x4619,	// (0x00052e7b) bg_popup_call3_in_pane_ParamLimits

0x4619,	// (0x00052e7b) bg_popup_call3_in_pane

0x4695,	// (0x00052ef7) popup_call3_audio_in_window_g1_ParamLimits

0x4695,	// (0x00052ef7) popup_call3_audio_in_window_g1

0x46b5,	// (0x00052f17) popup_call3_audio_in_window_g2_ParamLimits

0x46b5,	// (0x00052f17) popup_call3_audio_in_window_g2

0x46d5,	// (0x00052f37) popup_call3_audio_in_window_g3_ParamLimits

0x46d5,	// (0x00052f37) popup_call3_audio_in_window_g3

0x0003,

0xf619,	// (0x0005de7b) popup_call3_audio_in_window_g_ParamLimits

0xf619,	// (0x0005de7b) popup_call3_audio_in_window_g

0x4706,	// (0x00052f68) popup_call3_audio_in_window_t1_ParamLimits

0x4706,	// (0x00052f68) popup_call3_audio_in_window_t1

0x4744,	// (0x00052fa6) popup_call3_audio_in_window_t2_ParamLimits

0x4744,	// (0x00052fa6) popup_call3_audio_in_window_t2

0x4782,	// (0x00052fe4) popup_call3_audio_in_window_t3_ParamLimits

0x4782,	// (0x00052fe4) popup_call3_audio_in_window_t3

0x0002,

0xf622,	// (0x0005de84) popup_call3_audio_in_window_t_ParamLimits

0xf622,	// (0x0005de84) popup_call3_audio_in_window_t

0xb375,	// (0x00059bd7) bg_popup_call3_rect_pane

0xc5b1,	// (0x0005ae13) bg_popup_call3_rect_pane_g1

0xa2c0,	// (0x00058b22) bg_popup_call3_rect_pane_g2

0xc5b9,	// (0x0005ae1b) bg_popup_call3_rect_pane_g3

0xc5c1,	// (0x0005ae23) bg_popup_call3_rect_pane_g4

0xc5c9,	// (0x0005ae2b) bg_popup_call3_rect_pane_g5

0xc5d1,	// (0x0005ae33) bg_popup_call3_rect_pane_g6

0xc5d9,	// (0x0005ae3b) bg_popup_call3_rect_pane_g7

0x35d7,	// (0x00051e39) mup_visualizer_osc_pane

0xb442,	// (0x00059ca4) mup_visualizer_spec_pane

0x4649,	// (0x00052eab) call3_video_qcif_pane_ParamLimits

0x4649,	// (0x00052eab) call3_video_qcif_pane

0x465c,	// (0x00052ebe) call3_video_qcif_uncrop_pane_ParamLimits

0x465c,	// (0x00052ebe) call3_video_qcif_uncrop_pane

0x466c,	// (0x00052ece) call3_video_subqcif_pane_ParamLimits

0x466c,	// (0x00052ece) call3_video_subqcif_pane

0x4682,	// (0x00052ee4) call3_video_subqcif_uncrop_pane_ParamLimits

0x4682,	// (0x00052ee4) call3_video_subqcif_uncrop_pane

0x46f5,	// (0x00052f57) popup_call3_audio_in_window_g4_ParamLimits

0x46f5,	// (0x00052f57) popup_call3_audio_in_window_g4

0x4608,	// (0x00052e6a) mup_spec_half_pane

0x4611,	// (0x00052e73) mup_spec_half_pane_cp

0xc85d,	// (0x0005b0bf) mup_osc_middle_pane

0xc866,	// (0x0005b0c8) mup_visualizer_osc_pane_g1

0x45e8,	// (0x00052e4a) mup_spec_bar_pane_ParamLimits

0x45e8,	// (0x00052e4a) mup_spec_bar_pane

0xc84a,	// (0x0005b0ac) mup_spec_bar_pane_g1

0xc854,	// (0x0005b0b6) mup_spec_bar_pane_g2

0x0001,

0xf60d,	// (0x0005de6f) mup_spec_bar_pane_g

0x11f8,	// (0x0004fa5a) aid_cale_week_size_cell_pane_ParamLimits

0x1212,	// (0x0004fa74) bg_cale_heading_pane_ParamLimits

0xa33c,	// (0x00058b9e) bg_cale_pane_cp01_ParamLimits

0x123b,	// (0x0004fa9d) cale_week_corner_pane_ParamLimits

0x125a,	// (0x0004fabc) cale_week_day_heading_pane_ParamLimits

0x1288,	// (0x0004faea) cale_week_scroll_pane_g1_ParamLimits

0x12ac,	// (0x0004fb0e) cale_week_scroll_pane_g2_ParamLimits

0x12c4,	// (0x0004fb26) cale_week_scroll_pane_g3_ParamLimits

0x12dc,	// (0x0004fb3e) cale_week_scroll_pane_g4_ParamLimits

0x12f8,	// (0x0004fb5a) cale_week_scroll_pane_g5_ParamLimits

0x1318,	// (0x0004fb7a) cale_week_scroll_pane_g6_ParamLimits

0x1338,	// (0x0004fb9a) cale_week_scroll_pane_g7_ParamLimits

0x135c,	// (0x0004fbbe) cale_week_scroll_pane_g8_ParamLimits

0x1380,	// (0x0004fbe2) cale_week_scroll_pane_g9_ParamLimits

0x139d,	// (0x0004fbff) cale_week_scroll_pane_g10_ParamLimits

0x13ba,	// (0x0004fc1c) cale_week_scroll_pane_g11_ParamLimits

0x13d7,	// (0x0004fc39) cale_week_scroll_pane_g12_ParamLimits

0x13f4,	// (0x0004fc56) cale_week_scroll_pane_g13_ParamLimits

0x1411,	// (0x0004fc73) cale_week_scroll_pane_g14_ParamLimits

0x143a,	// (0x0004fc9c) cale_week_scroll_pane_g15_ParamLimits

0xf1ac,	// (0x0005da0e) cale_week_scroll_pane_g_ParamLimits

0x1487,	// (0x0004fce9) cale_week_time_pane_ParamLimits

0x14ab,	// (0x0004fd0d) grid_cale_week_pane_ParamLimits

0xa35a,	// (0x00058bbc) listscroll_cale_week_pane_t1

0xa36c,	// (0x00058bce) scroll_pane_cp08_ParamLimits

0x22f3,	// (0x00050b55) cale_month_corner_pane_ParamLimits

0xad75,	// (0x000595d7) cale_month_pane_t1

0x27db,	// (0x0005103d) cale_month_week_pane_ParamLimits

0x2fa0,	// (0x00051802) popup_call_status_window_g1_ParamLimits

0x2fb4,	// (0x00051816) popup_call_status_window_g2_ParamLimits

0x2fc8,	// (0x0005182a) popup_call_status_window_g3_ParamLimits

0xf35d,	// (0x0005dbbf) popup_call_status_window_g_ParamLimits

0xb117,	// (0x00059979) aid_call2_pane

0xfd5b,	// (0x0004e5bd) msg_header_pane_g1

0x3a13,	// (0x00052275) postcard_address2_pane_ParamLimits

0x3a13,	// (0x00052275) postcard_address2_pane

0x3a29,	// (0x0005228b) postcard_message2_pane_ParamLimits

0x3a29,	// (0x0005228b) postcard_message2_pane

0x4598,	// (0x00052dfa) message2_row_pane_ParamLimits

0x4598,	// (0x00052dfa) message2_row_pane

0x45b5,	// (0x00052e17) address2_row_pane_ParamLimits

0x45b5,	// (0x00052e17) address2_row_pane

0xc818,	// (0x0005b07a) postcard_message2_row_pane_g1

0xc820,	// (0x0005b082) postcard_message2_row_pane_t1

0xc818,	// (0x0005b07a) address2_row_pane_g1

0xc820,	// (0x0005b082) address2_row_pane_t1

0x19d7,	// (0x00050239) aid_size_cell_vorec

0x9e5d,	// (0x000586bf) main_rss_pane

0x45c8,	// (0x00052e2a) rss_list_single_pane_ParamLimits

0x45c8,	// (0x00052e2a) rss_list_single_pane

0xc82e,	// (0x0005b090) rss_list_single_pane_t1

0xc83c,	// (0x0005b09e) rss_list_single_pane_t2

0x0001,

0xf608,	// (0x0005de6a) rss_list_single_pane_t

0x9e5d,	// (0x000586bf) main_camera2_pane

0x9e5d,	// (0x000586bf) main_video2_pane

0x482e,	// (0x00053090) cams_zoom_pane_cp2_ParamLimits

0x482e,	// (0x00053090) cams_zoom_pane_cp2

0x4845,	// (0x000530a7) image2_vga_pane_ParamLimits

0x4845,	// (0x000530a7) image2_vga_pane

0x488d,	// (0x000530ef) main_camera2_pane_g1_ParamLimits

0x488d,	// (0x000530ef) main_camera2_pane_g1

0x48ad,	// (0x0005310f) main_camera2_pane_g2_ParamLimits

0x48ad,	// (0x0005310f) main_camera2_pane_g2

0x48c4,	// (0x00053126) main_camera2_pane_g3_ParamLimits

0x48c4,	// (0x00053126) main_camera2_pane_g3

0x48db,	// (0x0005313d) main_camera2_pane_g4_ParamLimits

0x48db,	// (0x0005313d) main_camera2_pane_g4

0x48f2,	// (0x00053154) main_camera2_pane_g5_ParamLimits

0x48f2,	// (0x00053154) main_camera2_pane_g5

0x4909,	// (0x0005316b) main_camera2_pane_g6_ParamLimits

0x4909,	// (0x0005316b) main_camera2_pane_g6

0x4920,	// (0x00053182) main_camera2_pane_g7_ParamLimits

0x4920,	// (0x00053182) main_camera2_pane_g7

0x4937,	// (0x00053199) main_camera2_pane_g8_ParamLimits

0x4937,	// (0x00053199) main_camera2_pane_g8

0x0008,

0xf629,	// (0x0005de8b) main_camera2_pane_g_ParamLimits

0xf629,	// (0x0005de8b) main_camera2_pane_g

0x4965,	// (0x000531c7) main_camera2_pane_t1_ParamLimits

0x4965,	// (0x000531c7) main_camera2_pane_t1

0x499a,	// (0x000531fc) main_camera2_pane_t2_ParamLimits

0x499a,	// (0x000531fc) main_camera2_pane_t2

0x49b7,	// (0x00053219) main_camera2_pane_t3_ParamLimits

0x49b7,	// (0x00053219) main_camera2_pane_t3

0x4a15,	// (0x00053277) main_camera2_pane_t4_ParamLimits

0x4a15,	// (0x00053277) main_camera2_pane_t4

0x0006,

0xf63c,	// (0x0005de9e) main_camera2_pane_t_ParamLimits

0xf63c,	// (0x0005de9e) main_camera2_pane_t

0x4a9e,	// (0x00053300) cams_zoom_pane_cp4_ParamLimits

0x4a9e,	// (0x00053300) cams_zoom_pane_cp4

0x4ab4,	// (0x00053316) image2_cif_pane_ParamLimits

0x4ab4,	// (0x00053316) image2_cif_pane

0x4adf,	// (0x00053341) image2_subqcif_pane_ParamLimits

0x4adf,	// (0x00053341) image2_subqcif_pane

0x4afa,	// (0x0005335c) main_video2_pane_g1_ParamLimits

0x4afa,	// (0x0005335c) main_video2_pane_g1

0x4b14,	// (0x00053376) main_video2_pane_g2_ParamLimits

0x4b14,	// (0x00053376) main_video2_pane_g2

0x4b2a,	// (0x0005338c) main_video2_pane_g3_ParamLimits

0x4b2a,	// (0x0005338c) main_video2_pane_g3

0x4b40,	// (0x000533a2) main_video2_pane_g4_ParamLimits

0x4b40,	// (0x000533a2) main_video2_pane_g4

0x4b56,	// (0x000533b8) main_video2_pane_g5_ParamLimits

0x4b56,	// (0x000533b8) main_video2_pane_g5

0x4b6c,	// (0x000533ce) main_video2_pane_g6_ParamLimits

0x4b6c,	// (0x000533ce) main_video2_pane_g6

0x0005,

0xf64b,	// (0x0005dead) main_video2_pane_g_ParamLimits

0xf64b,	// (0x0005dead) main_video2_pane_g

0x4b86,	// (0x000533e8) main_video2_pane_t1_ParamLimits

0x4b86,	// (0x000533e8) main_video2_pane_t1

0x4baa,	// (0x0005340c) main_video2_pane_t2_ParamLimits

0x4baa,	// (0x0005340c) main_video2_pane_t2

0x4bfa,	// (0x0005345c) main_video2_pane_t3_ParamLimits

0x4bfa,	// (0x0005345c) main_video2_pane_t3

0x0002,

0xf658,	// (0x0005deba) main_video2_pane_t_ParamLimits

0xf658,	// (0x0005deba) main_video2_pane_t

0x408a,	// (0x000528ec) call_muted_g2

0x0001,

0xf5fa,	// (0x0005de5c) call_muted_g

0x9e5d,	// (0x000586bf) main_mup2_pane

0x4c42,	// (0x000534a4) main_mup2_pane_g1_ParamLimits

0x4c42,	// (0x000534a4) main_mup2_pane_g1

0x4c4e,	// (0x000534b0) main_mup2_pane_g2_ParamLimits

0x4c4e,	// (0x000534b0) main_mup2_pane_g2

0xa7d7,	// (0x00059039) main_mup_pane_g13_cp1

0xa7df,	// (0x00059041) mup_volume_pane_cp1

0x4c6c,	// (0x000534ce) main_mup2_pane_g4_ParamLimits

0x4c6c,	// (0x000534ce) main_mup2_pane_g4

0x4c7e,	// (0x000534e0) main_mup2_pane_g5_ParamLimits

0x4c7e,	// (0x000534e0) main_mup2_pane_g5

0x4c90,	// (0x000534f2) main_mup2_pane_g6_ParamLimits

0x4c90,	// (0x000534f2) main_mup2_pane_g6

0x4ca2,	// (0x00053504) main_mup2_pane_g7_ParamLimits

0x4ca2,	// (0x00053504) main_mup2_pane_g7

0x0006,

0xf65f,	// (0x0005dec1) main_mup2_pane_g_ParamLimits

0xf65f,	// (0x0005dec1) main_mup2_pane_g

0x4cba,	// (0x0005351c) main_mup2_pane_t1_ParamLimits

0x4cba,	// (0x0005351c) main_mup2_pane_t1

0x4cd0,	// (0x00053532) main_mup2_pane_t2_ParamLimits

0x4cd0,	// (0x00053532) main_mup2_pane_t2

0x4ce6,	// (0x00053548) main_mup2_pane_t3_ParamLimits

0x4ce6,	// (0x00053548) main_mup2_pane_t3

0x4cfc,	// (0x0005355e) main_mup2_pane_t4_ParamLimits

0x4cfc,	// (0x0005355e) main_mup2_pane_t4

0x4d14,	// (0x00053576) main_mup2_pane_t5_ParamLimits

0x4d14,	// (0x00053576) main_mup2_pane_t5

0x4d2c,	// (0x0005358e) main_mup2_pane_t6_ParamLimits

0x4d2c,	// (0x0005358e) main_mup2_pane_t6

0x0005,

0xf66e,	// (0x0005ded0) main_mup2_pane_t_ParamLimits

0xf66e,	// (0x0005ded0) main_mup2_pane_t

0x4d5c,	// (0x000535be) mup2_visualizer_pane_ParamLimits

0x4d5c,	// (0x000535be) mup2_visualizer_pane

0x4d8a,	// (0x000535ec) mup_progress_pane_cp_ParamLimits

0x4d8a,	// (0x000535ec) mup_progress_pane_cp

0xa7c2,	// (0x00059024) mup_volume_pane_cp_ParamLimits

0xa7c2,	// (0x00059024) mup_volume_pane_cp

0x4da0,	// (0x00053602) mup2_visualizer_pane_g1_ParamLimits

0x4da0,	// (0x00053602) mup2_visualizer_pane_g1

0xc89d,	// (0x0005b0ff) mup2_visualizer_pane_g2_ParamLimits

0xc89d,	// (0x0005b0ff) mup2_visualizer_pane_g2

0x4db7,	// (0x00053619) mup2_visualizer_pane_g3_ParamLimits

0x4db7,	// (0x00053619) mup2_visualizer_pane_g3

0x0002,

0xf67b,	// (0x0005dedd) mup2_visualizer_pane_g_ParamLimits

0xf67b,	// (0x0005dedd) mup2_visualizer_pane_g

0xb67d,	// (0x00059edf) aid_size_cell_fmradio

0x423a,	// (0x00052a9c) aid_height_parent_landcape

0xa58d,	// (0x00058def) wml_content_pane_cp

0xa595,	// (0x00058df7) wml_tabs_pane

0xa59e,	// (0x00058e00) popup_wml_miniature_window

0xa5a6,	// (0x00058e08) scroll_pane_cp021

0xa5ba,	// (0x00058e1c) wml_content_pane_comp8

0x9e5d,	// (0x000586bf) bg_popup_sub_pane_cp05

0xc8bb,	// (0x0005b11d) popup_wml_miniature_window_g1

0xc8c3,	// (0x0005b125) wml_miniature_view_pane

0x4dc3,	// (0x00053625) aid_size_wml_view

0x4dcb,	// (0x0005362d) wml_miniature_view_pane_g1

0x4dd4,	// (0x00053636) wml_miniature_view_pane_g2

0x4ddd,	// (0x0005363f) wml_miniature_view_pane_g3

0x4de5,	// (0x00053647) wml_miniature_view_pane_g4

0x4ded,	// (0x0005364f) wml_miniature_view_pane_g5

0x4df5,	// (0x00053657) wml_miniature_view_pane_g6

0x4dfd,	// (0x0005365f) wml_miniature_view_pane_g7

0x4e05,	// (0x00053667) wml_miniature_view_pane_g8

0x0007,

0xf682,	// (0x0005dee4) wml_miniature_view_pane_g

0xc8cb,	// (0x0005b12d) background_graphic_ParamLimits

0xc8cb,	// (0x0005b12d) background_graphic

0xc8d7,	// (0x0005b139) wml_tabs_2_pane

0xc8e0,	// (0x0005b142) wml_tabs_3_pane_ParamLimits

0xc8e0,	// (0x0005b142) wml_tabs_3_pane

0xc8f2,	// (0x0005b154) wml_tabs_4_pane_ParamLimits

0xc8f2,	// (0x0005b154) wml_tabs_4_pane

0xc908,	// (0x0005b16a) wml_tabs_5_pane_ParamLimits

0xc908,	// (0x0005b16a) wml_tabs_5_pane

0xc922,	// (0x0005b184) wml_tabs_pane_g2_ParamLimits

0xc922,	// (0x0005b184) wml_tabs_pane_g2

0xc936,	// (0x0005b198) wml_tabs_pane_g3_ParamLimits

0xc936,	// (0x0005b198) wml_tabs_pane_g3

0x4e0d,	// (0x0005366f) wml_tabs_2_active_pane_ParamLimits

0x4e0d,	// (0x0005366f) wml_tabs_2_active_pane

0x4e21,	// (0x00053683) wml_tabs_2_passive_pane_ParamLimits

0x4e21,	// (0x00053683) wml_tabs_2_passive_pane

0x4e35,	// (0x00053697) wml_tabs_3_active_pane_cp_ParamLimits

0x4e35,	// (0x00053697) wml_tabs_3_active_pane_cp

0x4e4a,	// (0x000536ac) wml_tabs_3_passive_pane_ParamLimits

0x4e4a,	// (0x000536ac) wml_tabs_3_passive_pane

0x4e5d,	// (0x000536bf) wml_tabs_3_passive_pane_cp_ParamLimits

0x4e5d,	// (0x000536bf) wml_tabs_3_passive_pane_cp

0x4e74,	// (0x000536d6) tabs_4_active_pane

0x4e7c,	// (0x000536de) tabs_4_passive_pane

0x4e86,	// (0x000536e8) tabs_4_passive_pane_cp

0x4e8e,	// (0x000536f0) tabs_4_passive_pane_cp2

0x3f4e,	// (0x000527b0) aid_height_text

0x35a9,	// (0x00051e0b) mup_volume_cont_pane_ParamLimits

0x35a9,	// (0x00051e0b) mup_volume_cont_pane

0x0de3,	// (0x0004f645) aid_size_cell_pinb

0x0ded,	// (0x0004f64f) aid_size_list_pinb

0x4d76,	// (0x000535d8) mup2_volume_cont_pane_ParamLimits

0x4d76,	// (0x000535d8) mup2_volume_cont_pane

0xa7ae,	// (0x00059010) mup2_volume_cont_pane_g1_ParamLimits

0xa7ae,	// (0x00059010) mup2_volume_cont_pane_g1

0x0a93,	// (0x0004f2f5) aid_size_cell_touch_ParamLimits

0x0a93,	// (0x0004f2f5) aid_size_cell_touch

0x0cd3,	// (0x0004f535) touch_pane_ParamLimits

0x0cd3,	// (0x0004f535) touch_pane

0x99e3,	// (0x00058245) main_rss2_pane

0xc953,	// (0x0005b1b5) listscroll_rss2_pane

0xc95c,	// (0x0005b1be) rss2_navigation_pane

0xc964,	// (0x0005b1c6) list_rss2_pane

0xb23b,	// (0x00059a9d) scroll_pane_cp22

0xc96c,	// (0x0005b1ce) rss2_navigation_pane_g1

0xc975,	// (0x0005b1d7) rss2_navigation_pane_g2

0xc97d,	// (0x0005b1df) rss2_navigation_pane_g3

0x0002,

0xf693,	// (0x0005def5) rss2_navigation_pane_g

0xc985,	// (0x0005b1e7) rss2_navigation_pane_t1

0x4e98,	// (0x000536fa) rss2_list_single_pane_ParamLimits

0x4e98,	// (0x000536fa) rss2_list_single_pane

0xc993,	// (0x0005b1f5) rss2_list_single_pane_t2

0xc9a1,	// (0x0005b203) rss2_list_single_pane_t3_ParamLimits

0xc9a1,	// (0x0005b203) rss2_list_single_pane_t3

0xc9be,	// (0x0005b220) rss2_list_single_pane_t4

0x2e6e,	// (0x000516d0) smil_status_pane_g1

0x9a3c,	// (0x0005829e) main_image2_pane_ParamLimits

0x9a3c,	// (0x0005829e) main_image2_pane

0x494e,	// (0x000531b0) main_camera2_pane_g9_ParamLimits

0x494e,	// (0x000531b0) main_camera2_pane_g9

0x4a6a,	// (0x000532cc) main_camera2_pane_t5_ParamLimits

0x4a6a,	// (0x000532cc) main_camera2_pane_t5

0xa783,	// (0x00058fe5) main_camera2_pane_t6_ParamLimits

0xa783,	// (0x00058fe5) main_camera2_pane_t6

0x4eae,	// (0x00053710) main_image2_pane_g1_ParamLimits

0x4eae,	// (0x00053710) main_image2_pane_g1

0x3c68,	// (0x000524ca) smil2_video_pane_ParamLimits

0x3c68,	// (0x000524ca) smil2_video_pane

0x0acb,	// (0x0004f32d) aid_zoom_text_primary_cp

0x9a32,	// (0x00058294) popup_preview_fixed_window

0xa4f6,	// (0x00058d58) im_reading_pane_g1

0x4820,	// (0x00053082) cams2_bc_adjust_pane_cp_ParamLimits

0x4820,	// (0x00053082) cams2_bc_adjust_pane_cp

0x4a90,	// (0x000532f2) cams2_bc_adjust_pane_ParamLimits

0x4a90,	// (0x000532f2) cams2_bc_adjust_pane

0xa7e7,	// (0x00059049) cams2_bc_adjust_pane_g1

0xa7ef,	// (0x00059051) cams2_slider_pane

0xa7f8,	// (0x0005905a) cams2_slider_pane_g1

0xa801,	// (0x00059063) cams2_slider_pane_g2

0x0006,

0xf69a,	// (0x0005defc) cams2_slider_pane_g

0x0edd,	// (0x0004f73f) calc_display_pane_ParamLimits

0x0f05,	// (0x0004f767) calc_paper_pane_ParamLimits

0x0f28,	// (0x0004f78a) grid_calc_pane_ParamLimits

0xa6ee,	// (0x00058f50) popup_clock_digital_window_t1_ParamLimits

0xb61a,	// (0x00059e7c) main_image_pane_t1

0x0ebf,	// (0x0004f721) aid_size_cell_calc_ParamLimits

0x0ebf,	// (0x0004f721) aid_size_cell_calc

0x4280,	// (0x00052ae2) popup_blid_sat_info2_window_ParamLimits

0x4280,	// (0x00052ae2) popup_blid_sat_info2_window

0xc9d4,	// (0x0005b236) aid_size_cell_blid

0xc9dc,	// (0x0005b23e) bg_popup_window_pane_cp07

0xc9ff,	// (0x0005b261) grid_popup_blid_pane

0xca09,	// (0x0005b26b) heading_pane_cp05_ParamLimits

0xca09,	// (0x0005b26b) heading_pane_cp05

0xcad3,	// (0x0005b335) cell_popup_blid_pane_ParamLimits

0xcad3,	// (0x0005b335) cell_popup_blid_pane

0xcafd,	// (0x0005b35f) cell_popup_blid_pane_g1

0xcb05,	// (0x0005b367) cell_popup_blid_pane_t1

0x4d46,	// (0x000535a8) mup2_indicator_pane_ParamLimits

0x4d46,	// (0x000535a8) mup2_indicator_pane

0xb375,	// (0x00059bd7) mup2_visualizer_osc_pane

0xc8a9,	// (0x0005b10b) mup2_visualizer_spec_pane_ParamLimits

0xc8a9,	// (0x0005b10b) mup2_visualizer_spec_pane

0x4ec4,	// (0x00053726) mup2_spec_half_pane

0x4ecd,	// (0x0005372f) mup2_spec_half_pane_cp

0x4ed5,	// (0x00053737) mup2_spec_bar_pane_ParamLimits

0x4ed5,	// (0x00053737) mup2_spec_bar_pane

0xc84a,	// (0x0005b0ac) mup2_spec_bar_pane_g1

0xc854,	// (0x0005b0b6) mup2_spec_bar_pane_g2

0x0001,

0xf60d,	// (0x0005de6f) mup2_spec_bar_pane_g

0x4ef5,	// (0x00053757) mup2_osc_middle_pane

0xc866,	// (0x0005b0c8) mup2_visualizer_osc_pane_g1

0x9a6a,	// (0x000582cc) popup_number_entry_window_t1_ParamLimits

0x9a7d,	// (0x000582df) popup_number_entry_window_t2_ParamLimits

0x9a8f,	// (0x000582f1) popup_number_entry_window_t3_ParamLimits

0x0d25,	// (0x0004f587) popup_number_entry_window_t5_ParamLimits

0x0d25,	// (0x0004f587) popup_number_entry_window_t5

0xf0c6,	// (0x0005d928) popup_number_entry_window_t_ParamLimits

0x9aa1,	// (0x00058303) text_title_cp2_ParamLimits

0xa72d,	// (0x00058f8f) aid_hotspot_pointer_text2_pane

0xa753,	// (0x00058fb5) main_viewer_pane_g9_ParamLimits

0xa753,	// (0x00058fb5) main_viewer_pane_g9

0xad75,	// (0x000595d7) cale_month_pane_t1_ParamLimits

0xad9b,	// (0x000595fd) bg_cale_pane_ParamLimits

0xadb3,	// (0x00059615) list_cale_pane_ParamLimits

0xadc4,	// (0x00059626) listscroll_cale_day_pane_t1

0xadd6,	// (0x00059638) scroll_pane_cp09_ParamLimits

0x35df,	// (0x00051e41) main_mup_eq_pane_t1_ParamLimits

0x35df,	// (0x00051e41) main_mup_eq_pane_t1

0x35fb,	// (0x00051e5d) main_mup_eq_pane_t2_ParamLimits

0x35fb,	// (0x00051e5d) main_mup_eq_pane_t2

0x3617,	// (0x00051e79) main_mup_eq_pane_t3_ParamLimits

0x3617,	// (0x00051e79) main_mup_eq_pane_t3

0x3635,	// (0x00051e97) main_mup_eq_pane_t4_ParamLimits

0x3635,	// (0x00051e97) main_mup_eq_pane_t4

0x3653,	// (0x00051eb5) main_mup_eq_pane_t5_ParamLimits

0x3653,	// (0x00051eb5) main_mup_eq_pane_t5

0x3671,	// (0x00051ed3) main_mup_eq_pane_t6_ParamLimits

0x3671,	// (0x00051ed3) main_mup_eq_pane_t6

0x3687,	// (0x00051ee9) main_mup_eq_pane_t7_ParamLimits

0x3687,	// (0x00051ee9) main_mup_eq_pane_t7

0x369d,	// (0x00051eff) main_mup_eq_pane_t8_ParamLimits

0x369d,	// (0x00051eff) main_mup_eq_pane_t8

0x36b3,	// (0x00051f15) main_mup_eq_pane_t9_ParamLimits

0x36b3,	// (0x00051f15) main_mup_eq_pane_t9

0x36cf,	// (0x00051f31) main_mup_eq_pane_t10_ParamLimits

0x36cf,	// (0x00051f31) main_mup_eq_pane_t10

0x0009,

0xf45c,	// (0x0005dcbe) main_mup_eq_pane_t_ParamLimits

0xf45c,	// (0x0005dcbe) main_mup_eq_pane_t

0x37a4,	// (0x00052006) mup_equalizer_pane_cp5_ParamLimits

0x37bc,	// (0x0005201e) mup_equalizer_pane_cp6_ParamLimits

0x37d4,	// (0x00052036) mup_equalizer_pane_cp7_ParamLimits

0x99e3,	// (0x00058245) main_gallery_pane

0xc86f,	// (0x0005b0d1) smil2_volume_pane

0xc877,	// (0x0005b0d9) smil_status_volume_pane_g1_ParamLimits

0xc88a,	// (0x0005b0ec) smil_status_volume_pane_g2_ParamLimits

0xa75f,	// (0x00058fc1) smil_status_volume_pane_g3_ParamLimits

0xf612,	// (0x0005de74) smil_status_volume_pane_g_ParamLimits

0xc9dc,	// (0x0005b23e) bg_popup_window_pane_cp07_ParamLimits

0xc9ea,	// (0x0005b24c) blid_firmament_pane

0x4efe,	// (0x00053760) aid_size_cell_gallery_ParamLimits

0x4efe,	// (0x00053760) aid_size_cell_gallery

0x4f14,	// (0x00053776) grid_gallery_pane_ParamLimits

0x4f14,	// (0x00053776) grid_gallery_pane

0x4f2f,	// (0x00053791) cell_gallery_pane_ParamLimits

0x4f2f,	// (0x00053791) cell_gallery_pane

0xcb13,	// (0x0005b375) bg_cell_gallery_focus_pane_ParamLimits

0xcb13,	// (0x0005b375) bg_cell_gallery_focus_pane

0xcb25,	// (0x0005b387) cell_gallery_pane_g1_ParamLimits

0xcb25,	// (0x0005b387) cell_gallery_pane_g1

0x4f7a,	// (0x000537dc) cell_gallery_pane_g2_ParamLimits

0x4f7a,	// (0x000537dc) cell_gallery_pane_g2

0x4f87,	// (0x000537e9) cell_gallery_pane_g3_ParamLimits

0x4f87,	// (0x000537e9) cell_gallery_pane_g3

0xcb31,	// (0x0005b393) cell_gallery_pane_g4_ParamLimits

0xcb31,	// (0x0005b393) cell_gallery_pane_g4

0x0003,

0xf6c0,	// (0x0005df22) cell_gallery_pane_g_ParamLimits

0xf6c0,	// (0x0005df22) cell_gallery_pane_g

0xcb3d,	// (0x0005b39f) bg_cell_gallery_focus_pane_g1

0xcb45,	// (0x0005b3a7) bg_cell_gallery_focus_pane_g2

0xcb4d,	// (0x0005b3af) bg_cell_gallery_focus_pane_g3

0xcb55,	// (0x0005b3b7) bg_cell_gallery_focus_pane_g4

0xcb5d,	// (0x0005b3bf) bg_cell_gallery_focus_pane_g5

0xcb65,	// (0x0005b3c7) bg_cell_gallery_focus_pane_g6

0xcb6d,	// (0x0005b3cf) bg_cell_gallery_focus_pane_g7

0xcb75,	// (0x0005b3d7) bg_cell_gallery_focus_pane_g8

0x0007,

0xf6c9,	// (0x0005df2b) bg_cell_gallery_focus_pane_g

0xcb7d,	// (0x0005b3df) aid_firma_cardinal

0xcb91,	// (0x0005b3f3) blid_firmament_pane_t1

0xcba8,	// (0x0005b40a) blid_firmament_pane_t2

0xcbbf,	// (0x0005b421) blid_firmament_pane_t3

0xcbd6,	// (0x0005b438) blid_firmament_pane_t4

0x0003,

0xf6da,	// (0x0005df3c) blid_firmament_pane_t

0xcbed,	// (0x0005b44f) blid_sat_info_pane

0xcbfd,	// (0x0005b45f) blid_sat_info_pane_g1

0xcbfd,	// (0x0005b45f) blid_sat_info_pane_g2

0x0001,

0xf6e3,	// (0x0005df45) blid_sat_info_pane_g

0xcc07,	// (0x0005b469) blid_sat_info_pane_t1

0xcc15,	// (0x0005b477) smil2_volume_content_pane

0xcc1e,	// (0x0005b480) smil2_volume_pane_g1

0xcc26,	// (0x0005b488) smil2_volume_content_pane_g1

0xcc2f,	// (0x0005b491) smil2_volume_content_pane_g2

0xcc38,	// (0x0005b49a) smil2_volume_content_pane_g3

0xcc41,	// (0x0005b4a3) smil2_volume_content_pane_g4

0xcc4a,	// (0x0005b4ac) smil2_volume_content_pane_g5

0xcc53,	// (0x0005b4b5) smil2_volume_content_pane_g6

0xcc5c,	// (0x0005b4be) smil2_volume_content_pane_g7

0xcc65,	// (0x0005b4c7) smil2_volume_content_pane_g8

0xcc6e,	// (0x0005b4d0) smil2_volume_content_pane_g9

0xcc77,	// (0x0005b4d9) smil2_volume_content_pane_g10

0x0009,

0xf6e8,	// (0x0005df4a) smil2_volume_content_pane_g

0x1572,	// (0x0004fdd4) cale_week_day_heading_pane_t1_ParamLimits

0x15bc,	// (0x0004fe1e) cale_week_day_heading_pane_t2_ParamLimits

0x160b,	// (0x0004fe6d) cale_week_day_heading_pane_t3_ParamLimits

0x165a,	// (0x0004febc) cale_week_day_heading_pane_t4_ParamLimits

0x16a9,	// (0x0004ff0b) cale_week_day_heading_pane_t5_ParamLimits

0x16fc,	// (0x0004ff5e) cale_week_day_heading_pane_t6_ParamLimits

0x1753,	// (0x0004ffb5) cale_week_day_heading_pane_t7_ParamLimits

0xf1cd,	// (0x0005da2f) cale_week_day_heading_pane_t_ParamLimits

0xa38e,	// (0x00058bf0) bg_cale_side_pane_ParamLimits

0x179d,	// (0x0004ffff) cale_week_time_pane_t1_ParamLimits

0x17d7,	// (0x00050039) cale_week_time_pane_t2_ParamLimits

0x1811,	// (0x00050073) cale_week_time_pane_t3_ParamLimits

0x184b,	// (0x000500ad) cale_week_time_pane_t4_ParamLimits

0x1885,	// (0x000500e7) cale_week_time_pane_t5_ParamLimits

0x18bf,	// (0x00050121) cale_week_time_pane_t6_ParamLimits

0x18f9,	// (0x0005015b) cale_week_time_pane_t7_ParamLimits

0x1933,	// (0x00050195) cale_week_time_pane_t8_ParamLimits

0xf1dc,	// (0x0005da3e) cale_week_time_pane_t_ParamLimits

0x1973,	// (0x000501d5) cell_cale_week_pane_g2_ParamLimits

0xa38e,	// (0x00058bf0) bg_cale_side_pane_cp01_ParamLimits

0x2c7d,	// (0x000514df) cale_month_week_pane_t1_ParamLimits

0x2c96,	// (0x000514f8) cale_month_week_pane_t2_ParamLimits

0x2caf,	// (0x00051511) cale_month_week_pane_t3_ParamLimits

0x2cc8,	// (0x0005152a) cale_month_week_pane_t4_ParamLimits

0x2ce1,	// (0x00051543) cale_month_week_pane_t5_ParamLimits

0x2cfa,	// (0x0005155c) cale_month_week_pane_t6_ParamLimits

0xf2b5,	// (0x0005db17) cale_month_week_pane_t_ParamLimits

0xa66e,	// (0x00058ed0) cell_cale_month_pane_g1_ParamLimits

0x99e3,	// (0x00058245) main_cale_event_viewer_pane

0x99e3,	// (0x00058245) listscroll_cale_event_viewer_pane

0xcc80,	// (0x0005b4e2) list_cale_ev_pane

0xcc88,	// (0x0005b4ea) scroll_pane_cp023

0x4f94,	// (0x000537f6) field_cale_ev_pane_ParamLimits

0x4f94,	// (0x000537f6) field_cale_ev_pane

0xcc94,	// (0x0005b4f6) field_cale_ev_content_pane_ParamLimits

0xcc94,	// (0x0005b4f6) field_cale_ev_content_pane

0xcca0,	// (0x0005b502) field_cale_ev_pane_g1_ParamLimits

0xcca0,	// (0x0005b502) field_cale_ev_pane_g1

0xccac,	// (0x0005b50e) field_cale_ev_pane_g2_ParamLimits

0xccac,	// (0x0005b50e) field_cale_ev_pane_g2

0xccc4,	// (0x0005b526) field_cale_ev_pane_g3_ParamLimits

0xccc4,	// (0x0005b526) field_cale_ev_pane_g3

0x0002,

0xf6fd,	// (0x0005df5f) field_cale_ev_pane_g_ParamLimits

0xf6fd,	// (0x0005df5f) field_cale_ev_pane_g

0xccdc,	// (0x0005b53e) field_cale_ev_pane_t1_ParamLimits

0xccdc,	// (0x0005b53e) field_cale_ev_pane_t1

0x4fb8,	// (0x0005381a) field_cale_ev_content_pane_t1_ParamLimits

0x4fb8,	// (0x0005381a) field_cale_ev_content_pane_t1

0xb4ee,	// (0x00059d50) bg_button_pane_cp01

0x11dc,	// (0x0004fa3e) listscroll_cale_week_pane_ParamLimits

0x11ee,	// (0x0004fa50) popup_toolbar_window_cp01

0xa35a,	// (0x00058bbc) listscroll_cale_week_pane_t1_ParamLimits

0x11dc,	// (0x0004fa3e) listscroll_cale_day_pane_ParamLimits

0x11ee,	// (0x0004fa50) popup_toolbar_window_cp02

0xadc4,	// (0x00059626) listscroll_cale_day_pane_t1_ParamLimits

0x11dc,	// (0x0004fa3e) main_cale_month_pane_ParamLimits

0x4500,	// (0x00052d62) popup_toolbar_window_cp03_ParamLimits

0x4500,	// (0x00052d62) popup_toolbar_window_cp03

0x3b26,	// (0x00052388) main_image_pane_g2_ParamLimits

0x3b26,	// (0x00052388) main_image_pane_g2

0x3b37,	// (0x00052399) main_image_pane_g3_ParamLimits

0x3b37,	// (0x00052399) main_image_pane_g3

0x0002,

0xf4ee,	// (0x0005dd50) main_image_pane_g_ParamLimits

0xf4ee,	// (0x0005dd50) main_image_pane_g

0xb61a,	// (0x00059e7c) main_image_pane_t1_ParamLimits

0x3b48,	// (0x000523aa) main_image_pane_t2_ParamLimits

0x3b48,	// (0x000523aa) main_image_pane_t2

0x3b5a,	// (0x000523bc) main_image_pane_t3_ParamLimits

0x3b5a,	// (0x000523bc) main_image_pane_t3

0x3b82,	// (0x000523e4) main_image_pane_t4_ParamLimits

0x3b82,	// (0x000523e4) main_image_pane_t4

0x0003,

0xf4f5,	// (0x0005dd57) main_image_pane_t_ParamLimits

0xf4f5,	// (0x0005dd57) main_image_pane_t

0x3ba2,	// (0x00052404) popup_image_details_window_cp01

0x3bac,	// (0x0005240e) popup_toobar_trans_pane_cp01_ParamLimits

0x3bac,	// (0x0005240e) popup_toobar_trans_pane_cp01

0x4373,	// (0x00052bd5) popup_image_details_window_ParamLimits

0x4373,	// (0x00052bd5) popup_image_details_window

0xc7ce,	// (0x0005b030) popup_image_focus_window

0x47da,	// (0x0005303c) camera2_autofocus_pane_ParamLimits

0x47da,	// (0x0005303c) camera2_autofocus_pane

0x99e3,	// (0x00058245) bg_popup_sub_pane_cp06

0xccf3,	// (0x0005b555) popup_image_focus_window_g1

0xccfb,	// (0x0005b55d) popup_image_focus_window_g2

0xcd03,	// (0x0005b565) popup_image_focus_window_g3

0xcd0b,	// (0x0005b56d) popup_image_focus_window_g4

0x0003,

0xf704,	// (0x0005df66) popup_image_focus_window_g

0xcd13,	// (0x0005b575) popup_image_focus_window_t1

0xcd21,	// (0x0005b583) popup_image_focus_window_t2

0xcd31,	// (0x0005b593) popup_image_focus_window_t3

0x0002,

0xf70d,	// (0x0005df6f) popup_image_focus_window_t

0xcd3f,	// (0x0005b5a1) camera2_autofocus_pane_g1

0x9a3c,	// (0x0005829e) bg_tb_trans_pane_cp01

0xcd4d,	// (0x0005b5af) popup_image_details_window_g1

0xcd60,	// (0x0005b5c2) popup_image_details_window_g2

0x0002,

0xf71f,	// (0x0005df81) popup_image_details_window_g

0xcd89,	// (0x0005b5eb) popup_image_details_window_t1

0xcd9b,	// (0x0005b5fd) popup_image_details_window_t2

0xcdb4,	// (0x0005b616) popup_image_details_window_t3

0xcdc8,	// (0x0005b62a) popup_image_details_window_t4

0xcde3,	// (0x0005b645) popup_image_details_window_t5

0x0004,

0xf726,	// (0x0005df88) popup_image_details_window_t

0xa171,	// (0x000589d3) bg_calc_paper_pane_ParamLimits

0x99e3,	// (0x00058245) grid_highlight_pane_cp013

0xa185,	// (0x000589e7) list_calc_pane_ParamLimits

0xa197,	// (0x000589f9) scroll_pane_cp024

0xa19f,	// (0x00058a01) bg_calc_display_pane_ParamLimits

0x1028,	// (0x0004f88a) calc_display_pane_t1_ParamLimits

0x103a,	// (0x0004f89c) calc_display_pane_t2_ParamLimits

0xa1ab,	// (0x00058a0d) calc_display_pane_t3_ParamLimits

0xf14d,	// (0x0005d9af) calc_display_pane_t_ParamLimits

0x1103,	// (0x0004f965) cell_calc_pane_g2

0x0001,

0xf16a,	// (0x0005d9cc) cell_calc_pane_g

0x110c,	// (0x0004f96e) cell_calc_pane_t1

0xa222,	// (0x00058a84) grid_highlight_pane_cp02_ParamLimits

0xa238,	// (0x00058a9a) toolbar_button_pane_cp01_ParamLimits

0xa238,	// (0x00058a9a) toolbar_button_pane_cp01

0xb65f,	// (0x00059ec1) temp_image_control_pane_ParamLimits

0xb65f,	// (0x00059ec1) temp_image_control_pane

0x9a3c,	// (0x0005829e) main_mp3_pane

0xcdfd,	// (0x0005b65f) temp_image_control_pane_g1_ParamLimits

0xcdfd,	// (0x0005b65f) temp_image_control_pane_g1

0xce0b,	// (0x0005b66d) temp_image_control_pane_g2_ParamLimits

0xce0b,	// (0x0005b66d) temp_image_control_pane_g2

0xce1d,	// (0x0005b67f) temp_image_control_pane_g3_ParamLimits

0xce1d,	// (0x0005b67f) temp_image_control_pane_g3

0x5009,	// (0x0005386b) temp_image_control_pane_g4_ParamLimits

0x5009,	// (0x0005386b) temp_image_control_pane_g4

0x0003,

0xf731,	// (0x0005df93) temp_image_control_pane_g_ParamLimits

0xf731,	// (0x0005df93) temp_image_control_pane_g

0xcdfd,	// (0x0005b65f) main_mp3_pane_g1

0x501c,	// (0x0005387e) main_mp3_pane_g2

0x0007,

0xf73a,	// (0x0005df9c) main_mp3_pane_g

0xce60,	// (0x0005b6c2) main_mp3_pane_t1

0xa401,	// (0x00058c63) main_camera_pane_g8_ParamLimits

0xa401,	// (0x00058c63) main_camera_pane_g8

0x1cb0,	// (0x00050512) main_video_pane_g7_ParamLimits

0x1cb0,	// (0x00050512) main_video_pane_g7

0xa79c,	// (0x00058ffe) main_camera2_pane_t7_ParamLimits

0xa79c,	// (0x00058ffe) main_camera2_pane_t7

0xa54d,	// (0x00058daf) scroll_pane_cp025_ParamLimits

0xa54d,	// (0x00058daf) scroll_pane_cp025

0xa561,	// (0x00058dc3) scroll_pane_cp026_ParamLimits

0xa561,	// (0x00058dc3) scroll_pane_cp026

0xa570,	// (0x00058dd2) wml_content_pane_ParamLimits

0x99e3,	// (0x00058245) main_touch_calib_pane

0x50ee,	// (0x00053950) main_touch_calib_pane_g1

0x5100,	// (0x00053962) main_touch_calib_pane_g2

0x5112,	// (0x00053974) main_touch_calib_pane_g3

0x5124,	// (0x00053986) main_touch_calib_pane_g4

0x0003,

0xf758,	// (0x0005dfba) main_touch_calib_pane_g

0x5136,	// (0x00053998) main_touch_calib_pane_t1

0x5150,	// (0x000539b2) main_touch_calib_pane_t2

0x0004,

0xf761,	// (0x0005dfc3) main_touch_calib_pane_t

0xb2b6,	// (0x00059b18) mup_progress_pane_cp02

0xb2d5,	// (0x00059b37) navi_pane_g1

0xb337,	// (0x00059b99) navi_pane_mp_t3

0x9a3c,	// (0x0005829e) main_mp3_pane_ParamLimits

0x4542,	// (0x00052da4) navi_pane_ParamLimits

0xcdfd,	// (0x0005b65f) main_mp3_pane_g1_ParamLimits

0x501c,	// (0x0005387e) main_mp3_pane_g2_ParamLimits

0x5028,	// (0x0005388a) main_mp3_pane_g3_ParamLimits

0x5028,	// (0x0005388a) main_mp3_pane_g3

0x5036,	// (0x00053898) main_mp3_pane_g4_ParamLimits

0x5036,	// (0x00053898) main_mp3_pane_g4

0xce2d,	// (0x0005b68f) main_mp3_pane_g5_ParamLimits

0xce2d,	// (0x0005b68f) main_mp3_pane_g5

0xce3b,	// (0x0005b69d) main_mp3_pane_g6_ParamLimits

0xce3b,	// (0x0005b69d) main_mp3_pane_g6

0xce48,	// (0x0005b6aa) main_mp3_pane_g7_ParamLimits

0xce48,	// (0x0005b6aa) main_mp3_pane_g7

0xce54,	// (0x0005b6b6) main_mp3_pane_g8_ParamLimits

0xce54,	// (0x0005b6b6) main_mp3_pane_g8

0xf73a,	// (0x0005df9c) main_mp3_pane_g_ParamLimits

0x5042,	// (0x000538a4) main_mp3_pane_t2

0x5050,	// (0x000538b2) main_mp3_pane_t3

0xce6e,	// (0x0005b6d0) main_mp3_pane_t4

0xce7c,	// (0x0005b6de) main_mp3_pane_t5

0x0005,

0xf74b,	// (0x0005dfad) main_mp3_pane_t

0xce8a,	// (0x0005b6ec) mup_progress_pane_cp01

0x0acb,	// (0x0004f32d) aid_zoom_text_secondary2

0xcc80,	// (0x0005b4e2) list_cale_ev2_pane

0xcc88,	// (0x0005b4ea) scroll_pane_cp023_ParamLimits

0x51aa,	// (0x00053a0c) field_cale_ev2_pane_ParamLimits

0x51aa,	// (0x00053a0c) field_cale_ev2_pane

0xfd9a,	// (0x0004e5fc) field_cale_ev2_pane_g1_ParamLimits

0xfd9a,	// (0x0004e5fc) field_cale_ev2_pane_g1

0xfda6,	// (0x0004e608) field_cale_ev2_pane_g2_ParamLimits

0xfda6,	// (0x0004e608) field_cale_ev2_pane_g2

0xfdbe,	// (0x0004e620) field_cale_ev2_pane_g3_ParamLimits

0xfdbe,	// (0x0004e620) field_cale_ev2_pane_g3

0x0003,

0xf76c,	// (0x0005dfce) field_cale_ev2_pane_g_ParamLimits

0xf76c,	// (0x0005dfce) field_cale_ev2_pane_g

0xfdd6,	// (0x0004e638) field_cale_ev2_pane_t1_ParamLimits

0xfdd6,	// (0x0004e638) field_cale_ev2_pane_t1

0xfded,	// (0x0004e64f) field_cale_ev2_pane_t2_ParamLimits

0xfded,	// (0x0004e64f) field_cale_ev2_pane_t2

0x0001,

0xf775,	// (0x0005dfd7) field_cale_ev2_pane_t_ParamLimits

0xf775,	// (0x0005dfd7) field_cale_ev2_pane_t

0x39c3,	// (0x00052225) main_postcard_pane_g5_ParamLimits

0x39c3,	// (0x00052225) main_postcard_pane_g5

0x39d9,	// (0x0005223b) main_postcard_pane_g6_ParamLimits

0x39d9,	// (0x0005223b) main_postcard_pane_g6

0x1a5c,	// (0x000502be) camera2_autofocus_pane_cp_ParamLimits

0x1a5c,	// (0x000502be) camera2_autofocus_pane_cp

0x9a3c,	// (0x0005829e) main_mup3_pane

0x51fa,	// (0x00053a5c) main_mup3_pane_g1_ParamLimits

0x51fa,	// (0x00053a5c) main_mup3_pane_g1

0x521c,	// (0x00053a7e) main_mup3_pane_g2_ParamLimits

0x521c,	// (0x00053a7e) main_mup3_pane_g2

0x529f,	// (0x00053b01) main_mup3_pane_g3_ParamLimits

0x529f,	// (0x00053b01) main_mup3_pane_g3

0x52e7,	// (0x00053b49) main_mup3_pane_g4_ParamLimits

0x52e7,	// (0x00053b49) main_mup3_pane_g4

0x532d,	// (0x00053b8f) main_mup3_pane_g5_ParamLimits

0x532d,	// (0x00053b8f) main_mup3_pane_g5

0x5375,	// (0x00053bd7) main_mup3_pane_g6_ParamLimits

0x5375,	// (0x00053bd7) main_mup3_pane_g6

0xce92,	// (0x0005b6f4) main_mup3_pane_g7_ParamLimits

0xce92,	// (0x0005b6f4) main_mup3_pane_g7

0x0007,

0xf785,	// (0x0005dfe7) main_mup3_pane_g_ParamLimits

0xf785,	// (0x0005dfe7) main_mup3_pane_g

0x53f5,	// (0x00053c57) main_mup3_pane_t1_ParamLimits

0x53f5,	// (0x00053c57) main_mup3_pane_t1

0x5463,	// (0x00053cc5) main_mup3_pane_t2_ParamLimits

0x5463,	// (0x00053cc5) main_mup3_pane_t2

0x5539,	// (0x00053d9b) main_mup3_pane_t4_ParamLimits

0x5539,	// (0x00053d9b) main_mup3_pane_t4

0x5597,	// (0x00053df9) main_mup3_pane_t5_ParamLimits

0x5597,	// (0x00053df9) main_mup3_pane_t5

0x5651,	// (0x00053eb3) main_mup3_pane_t6_ParamLimits

0x5651,	// (0x00053eb3) main_mup3_pane_t6

0x0005,

0xf796,	// (0x0005dff8) main_mup3_pane_t_ParamLimits

0xf796,	// (0x0005dff8) main_mup3_pane_t

0x5709,	// (0x00053f6b) mup3_progress_pane_ParamLimits

0x5709,	// (0x00053f6b) mup3_progress_pane

0x579b,	// (0x00053ffd) popup_mup3_control_window_ParamLimits

0x579b,	// (0x00053ffd) popup_mup3_control_window

0xcea0,	// (0x0005b702) popup_mup3_text_window

0x57d1,	// (0x00054033) mup3_progress_pane_t1

0x57ef,	// (0x00054051) mup3_progress_pane_t2

0xcea8,	// (0x0005b70a) mup3_progress_pane_t3

0x0002,

0xf7a3,	// (0x0005e005) mup3_progress_pane_t

0xcec5,	// (0x0005b727) mup_progress_pane_cp03

0x99e3,	// (0x00058245) bg_tb_trans_pane_cp04

0x580d,	// (0x0005406f) mup3_volume_pane

0x5815,	// (0x00054077) popup_mup3_control_window_g1

0x581e,	// (0x00054080) mup3_volume_pane_g1

0x5827,	// (0x00054089) mup3_volume_pane_g2

0x5830,	// (0x00054092) mup3_volume_pane_g3

0x0002,

0xf7aa,	// (0x0005e00c) mup3_volume_pane_g

0x99e3,	// (0x00058245) bg_tb_trans_pane_cp03

0xced5,	// (0x0005b737) popup_mup3_text_window_g1

0xcedd,	// (0x0005b73f) popup_mup3_text_window_t1

0xa1f9,	// (0x00058a5b) list_calc_item_pane_g1_ParamLimits

0xc94a,	// (0x0005b1ac) mup_volume_pane_cp_g1

0x516a,	// (0x000539cc) main_touch_calib_pane_t3

0x517e,	// (0x000539e0) main_touch_calib_pane_t4

0x5194,	// (0x000539f6) main_touch_calib_pane_t5

0x99ed,	// (0x0005824f) aid_cell_size_toolbar2

0x99f5,	// (0x00058257) aid_popup3_width_pane

0x0ac3,	// (0x0004f325) aid_zoom_text_msg_primary

0x1a31,	// (0x00050293) vorec_t7

0xa1bd,	// (0x00058a1f) bg_calc_paper_pane_g1_ParamLimits

0xa1c9,	// (0x00058a2b) bg_calc_paper_pane_g2_ParamLimits

0xa1d5,	// (0x00058a37) bg_calc_paper_pane_g3_ParamLimits

0xa1e1,	// (0x00058a43) bg_calc_paper_pane_g4_ParamLimits

0xa1ed,	// (0x00058a4f) bg_calc_paper_pane_g5_ParamLimits

0x1089,	// (0x0004f8eb) bg_calc_paper_pane_g6_ParamLimits

0x109c,	// (0x0004f8fe) bg_calc_paper_pane_g7_ParamLimits

0x10af,	// (0x0004f911) bg_calc_paper_pane_g8_ParamLimits

0xf154,	// (0x0005d9b6) bg_calc_paper_pane_g_ParamLimits

0x10c0,	// (0x0004f922) calc_bg_paper_pane_g9_ParamLimits

0x1bbe,	// (0x00050420) image_qvga_pane_ParamLimits

0x1bbe,	// (0x00050420) image_qvga_pane

0xa0b8,	// (0x0005891a) bg_popup_sub_pane_cp04_ParamLimits

0xb596,	// (0x00059df8) popup_mup_playback_window_g1_ParamLimits

0xb5a2,	// (0x00059e04) popup_mup_playback_window_t1_ParamLimits

0xb5b7,	// (0x00059e19) popup_mup_playback_window_t2_ParamLimits

0xf4e9,	// (0x0005dd4b) popup_mup_playback_window_t_ParamLimits

0x4c5e,	// (0x000534c0) main_mup2_pane_g3_ParamLimits

0x4c5e,	// (0x000534c0) main_mup2_pane_g3

0x1ed1,	// (0x00050733) popup_toolbar_window_cp04

0xb9b2,	// (0x0005a214) popup_call2_audio_second_window_g3_ParamLimits

0xb9b2,	// (0x0005a214) popup_call2_audio_second_window_g3

0xbdbc,	// (0x0005a61e) popup_call2_audio_first_window_g4_ParamLimits

0xbdbc,	// (0x0005a61e) popup_call2_audio_first_window_g4

0xc43b,	// (0x0005ac9d) popup_call2_audio_in_window_g4_ParamLimits

0xc43b,	// (0x0005ac9d) popup_call2_audio_in_window_g4

0x3b08,	// (0x0005236a) aid_area_sk_bg_cut_ParamLimits

0x3b08,	// (0x0005236a) aid_area_sk_bg_cut

0xb5cc,	// (0x00059e2e) aid_area_sk_bg_cut_2_ParamLimits

0xb5cc,	// (0x00059e2e) aid_area_sk_bg_cut_2

0x4f6a,	// (0x000537cc) aid_placing_details_win

0x4f72,	// (0x000537d4) aid_placing_details_win_2

0xcd3f,	// (0x0005b5a1) camera2_autofocus_pane_g1_ParamLimits

0x0c6c,	// (0x0004f4ce) popup_fixed_preview_cale_window_ParamLimits

0x0c6c,	// (0x0004f4ce) popup_fixed_preview_cale_window

0xb386,	// (0x00059be8) navi_slider_pane_g3

0xb38f,	// (0x00059bf1) navi_slider_pane_g4

0xb398,	// (0x00059bfa) navi_slider_pane_g5

0xb386,	// (0x00059be8) navi_slider_pane_g6

0xa714,	// (0x00058f76) navi_slider_pane_g7

0xb4bb,	// (0x00059d1d) mup_scale_pane_g3

0xb4c4,	// (0x00059d26) mup_scale_pane_g4

0xb4cd,	// (0x00059d2f) mup_scale_pane_g5

0x37ec,	// (0x0005204e) mup_scale_pane_g6

0x37f5,	// (0x00052057) mup_scale_pane_g7

0xb386,	// (0x00059be8) cams2_slider_pane_g3

0xc9cc,	// (0x0005b22e) cams2_slider_pane_g4

0xa80a,	// (0x0005906c) cams2_slider_pane_g5

0xb386,	// (0x00059be8) cams2_slider_pane_g6

0xa812,	// (0x00059074) cams2_slider_pane_g7

0xcbfd,	// (0x0005b45f) camera2_autofocus_pane_cp_g1

0xc7a0,	// (0x0005b002) bg_popup_preview_window_pane_cp02_ParamLimits

0xc7a0,	// (0x0005b002) bg_popup_preview_window_pane_cp02

0xceeb,	// (0x0005b74d) list_fp_cale_pane_ParamLimits

0xceeb,	// (0x0005b74d) list_fp_cale_pane

0xcef7,	// (0x0005b759) popup_fixed_preview_cale_window_t1_ParamLimits

0xcef7,	// (0x0005b759) popup_fixed_preview_cale_window_t1

0x5839,	// (0x0005409b) popup_fixed_preview_cale_window_t2_ParamLimits

0x5839,	// (0x0005409b) popup_fixed_preview_cale_window_t2

0x584e,	// (0x000540b0) popup_fixed_preview_cale_window_t3_ParamLimits

0x584e,	// (0x000540b0) popup_fixed_preview_cale_window_t3

0x0002,

0xf7b1,	// (0x0005e013) popup_fixed_preview_cale_window_t_ParamLimits

0xf7b1,	// (0x0005e013) popup_fixed_preview_cale_window_t

0x5863,	// (0x000540c5) list_single_fp_cale_pane_ParamLimits

0x5863,	// (0x000540c5) list_single_fp_cale_pane

0xcf15,	// (0x0005b777) list_single_fp_cale_pane_g1_ParamLimits

0xcf15,	// (0x0005b777) list_single_fp_cale_pane_g1

0xcf21,	// (0x0005b783) list_single_fp_cale_pane_g2_ParamLimits

0xcf21,	// (0x0005b783) list_single_fp_cale_pane_g2

0x0002,

0xf7b8,	// (0x0005e01a) list_single_fp_cale_pane_g_ParamLimits

0xf7b8,	// (0x0005e01a) list_single_fp_cale_pane_g

0xcf3a,	// (0x0005b79c) list_single_fp_cale_pane_t1_ParamLimits

0xcf3a,	// (0x0005b79c) list_single_fp_cale_pane_t1

0xcf4c,	// (0x0005b7ae) list_single_fp_cale_pane_t2_ParamLimits

0xcf4c,	// (0x0005b7ae) list_single_fp_cale_pane_t2

0x0001,

0xf7bf,	// (0x0005e021) list_single_fp_cale_pane_t_ParamLimits

0xf7bf,	// (0x0005e021) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x99e3,	// (0x00058245) main_dialer_pane

0x5878,	// (0x000540da) aid_cell_size_keypad

0x5882,	// (0x000540e4) dialer_ne_pane

0x588c,	// (0x000540ee) grid_dialer_command_1_pane

0x5894,	// (0x000540f6) grid_dialer_command_2_pane

0x589c,	// (0x000540fe) grid_dialer_keypad_pane

0x58ae,	// (0x00054110) bg_popup_call_pane_cp06_ParamLimits

0x58ae,	// (0x00054110) bg_popup_call_pane_cp06

0x58ba,	// (0x0005411c) dialer_ne_clear_pane_ParamLimits

0x58ba,	// (0x0005411c) dialer_ne_clear_pane

0xcf7f,	// (0x0005b7e1) dialer_ne_pane_g1

0xcf87,	// (0x0005b7e9) dialer_ne_pane_t1_ParamLimits

0xcf87,	// (0x0005b7e9) dialer_ne_pane_t1

0x58c6,	// (0x00054128) dialer_ne_pane_t2_ParamLimits

0x58c6,	// (0x00054128) dialer_ne_pane_t2

0x58f0,	// (0x00054152) dialer_ne_pane_t3_ParamLimits

0x58f0,	// (0x00054152) dialer_ne_pane_t3

0x0002,

0xf7c4,	// (0x0005e026) dialer_ne_pane_t_ParamLimits

0xf7c4,	// (0x0005e026) dialer_ne_pane_t

0x5920,	// (0x00054182) dialer_ne_pane_t3_copy1_ParamLimits

0x5920,	// (0x00054182) dialer_ne_pane_t3_copy1

0x594f,	// (0x000541b1) cell_dialer_keypad_pane_ParamLimits

0x594f,	// (0x000541b1) cell_dialer_keypad_pane

0x5966,	// (0x000541c8) cell_dialer_command_1_pane_ParamLimits

0x5966,	// (0x000541c8) cell_dialer_command_1_pane

0x597c,	// (0x000541de) cell_dialer_command_2_pane_ParamLimits

0x597c,	// (0x000541de) cell_dialer_command_2_pane

0xcf99,	// (0x0005b7fb) bg_button_pane_cp02_ParamLimits

0xcf99,	// (0x0005b7fb) bg_button_pane_cp02

0x598b,	// (0x000541ed) cell_dialer_keypad_pane_g1_ParamLimits

0x598b,	// (0x000541ed) cell_dialer_keypad_pane_g1

0xcf99,	// (0x0005b7fb) bg_button_pane_cp03_ParamLimits

0xcf99,	// (0x0005b7fb) bg_button_pane_cp03

0x59a0,	// (0x00054202) cell_dialer_command_1_pane_g1_ParamLimits

0x59a0,	// (0x00054202) cell_dialer_command_1_pane_g1

0xcfa5,	// (0x0005b807) bg_button_pane_cp04

0x59b4,	// (0x00054216) cell_dialer_command_2_pane_g1

0xb375,	// (0x00059bd7) bg_button_pane_cp06

0xcfad,	// (0x0005b80f) dialer_ne_clear_pane_g1

0x32be,	// (0x00051b20) navi_pane_g2

0x32ec,	// (0x00051b4e) navi_pane_g3

0x0002,

0xf3ec,	// (0x0005dc4e) navi_pane_g

0x3317,	// (0x00051b79) navi_pane_mv_g2

0x333e,	// (0x00051ba0) navi_pane_mv_g5

0x3346,	// (0x00051ba8) navi_pane_mv_t1

0xa19f,	// (0x00058a01) main_clock2_pane

0x59ff,	// (0x00054261) main_clock2_list_pane_ParamLimits

0x59ff,	// (0x00054261) main_clock2_list_pane

0x5a37,	// (0x00054299) main_clock2_pane_t1_ParamLimits

0x5a37,	// (0x00054299) main_clock2_pane_t1

0x5a73,	// (0x000542d5) main_clock2_pane_t2_ParamLimits

0x5a73,	// (0x000542d5) main_clock2_pane_t2

0x0004,

0xf7d0,	// (0x0005e032) main_clock2_pane_t_ParamLimits

0xf7d0,	// (0x0005e032) main_clock2_pane_t

0x5b13,	// (0x00054375) popup_clock_analogue_window_cp03_ParamLimits

0x5b13,	// (0x00054375) popup_clock_analogue_window_cp03

0x5b3a,	// (0x0005439c) popup_clock_digital_window_cp02_ParamLimits

0x5b3a,	// (0x0005439c) popup_clock_digital_window_cp02

0x5bb3,	// (0x00054415) main_clock2_list_single_pane_ParamLimits

0x5bb3,	// (0x00054415) main_clock2_list_single_pane

0xb375,	// (0x00059bd7) list_highlight_pane_cp05

0xcfe9,	// (0x0005b84b) main_clock2_list_single_pane_t1

0x1ed1,	// (0x00050733) popup_toolbar_window_cp04_ParamLimits

0x4fd9,	// (0x0005383b) camera2_autofocus_pane_g2_ParamLimits

0x4fd9,	// (0x0005383b) camera2_autofocus_pane_g2

0x4fe5,	// (0x00053847) camera2_autofocus_pane_g3_ParamLimits

0x4fe5,	// (0x00053847) camera2_autofocus_pane_g3

0x4ff1,	// (0x00053853) camera2_autofocus_pane_g4_ParamLimits

0x4ff1,	// (0x00053853) camera2_autofocus_pane_g4

0x4ffd,	// (0x0005385f) camera2_autofocus_pane_g5_ParamLimits

0x4ffd,	// (0x0005385f) camera2_autofocus_pane_g5

0x0004,

0xf714,	// (0x0005df76) camera2_autofocus_pane_g_ParamLimits

0xf714,	// (0x0005df76) camera2_autofocus_pane_g

0x51da,	// (0x00053a3c) camera2_autofocus_pane_cp_g2

0x51e2,	// (0x00053a44) camera2_autofocus_pane_cp_g3

0x51ea,	// (0x00053a4c) camera2_autofocus_pane_cp_g4

0x51f2,	// (0x00053a54) camera2_autofocus_pane_cp_g5

0x0004,

0xf77a,	// (0x0005dfdc) camera2_autofocus_pane_cp_g

0x58a6,	// (0x00054108) popup_dialer_spcha_window

0x99e3,	// (0x00058245) bg_popup_sub_pane_cp07

0xcff7,	// (0x0005b859) list_spcha_pane

0xcfff,	// (0x0005b861) list_single_spcha_pane_ParamLimits

0xcfff,	// (0x0005b861) list_single_spcha_pane

0x99e3,	// (0x00058245) list_highlight_pane_cp06

0xd010,	// (0x0005b872) list_single_spcha_pane_t1

0xc1e5,	// (0x0005aa47) popup_call2_audio_out_window_g4_ParamLimits

0xc1e5,	// (0x0005aa47) popup_call2_audio_out_window_g4

0x99e3,	// (0x00058245) main_imed2_pane

0xc7d8,	// (0x0005b03a) popup_imed_adjust2_window

0x438b,	// (0x00052bed) popup_imed_trans_window_ParamLimits

0x438b,	// (0x00052bed) popup_imed_trans_window

0xca35,	// (0x0005b297) popup_blid_sat_info2_window_t1

0xca43,	// (0x0005b2a5) popup_blid_sat_info2_window_t2

0x000a,

0xf6a9,	// (0x0005df0b) popup_blid_sat_info2_window_t

0x5c69,	// (0x000544cb) aid_size_cell_colour_35

0x5c89,	// (0x000544eb) aid_size_cell_colour_112

0x5ca9,	// (0x0005450b) aid_size_cell_effect

0xc7ac,	// (0x0005b00e) bg_tb_trans_pane_cp02

0xaed5,	// (0x00059737) heading_imed_pane

0x5cc9,	// (0x0005452b) listscroll_imed_pane

0xd01e,	// (0x0005b880) heading_imed_pane_g1

0xd026,	// (0x0005b888) heading_imed_pane_t1

0xd034,	// (0x0005b896) grid_imed_colour_35_pane_ParamLimits

0xd034,	// (0x0005b896) grid_imed_colour_35_pane

0x5cd5,	// (0x00054537) grid_imed_effect_pane

0xd050,	// (0x0005b8b2) list_imed_aspect_pane

0x5cea,	// (0x0005454c) scroll_pane_cp027_ParamLimits

0x5cea,	// (0x0005454c) scroll_pane_cp027

0x5cfb,	// (0x0005455d) cell_imed_effect_pane_ParamLimits

0x5cfb,	// (0x0005455d) cell_imed_effect_pane

0xd058,	// (0x0005b8ba) cell_imed_colour_pane_ParamLimits

0xd058,	// (0x0005b8ba) cell_imed_colour_pane

0xd0a2,	// (0x0005b904) cell_imed_colour_pane_g1_ParamLimits

0xd0a2,	// (0x0005b904) cell_imed_colour_pane_g1

0xd0b3,	// (0x0005b915) hgihlgiht_grid_pane_cp016_ParamLimits

0xd0b3,	// (0x0005b915) hgihlgiht_grid_pane_cp016

0x5d26,	// (0x00054588) cell_imed_effect_pane_g1

0x5d2e,	// (0x00054590) grid_highlight_pane_cp017

0xd0c4,	// (0x0005b926) list_imed_single_pane_ParamLimits

0xd0c4,	// (0x0005b926) list_imed_single_pane

0x99e3,	// (0x00058245) list_highlight_pane_cp07

0xd0d8,	// (0x0005b93a) list_imed_aspect_pane_comp1_t1

0xc7ac,	// (0x0005b00e) bg_tb_trans_pane_cp05

0xd0fa,	// (0x0005b95c) popup_imed_adjust2_window_g1

0xd121,	// (0x0005b983) popup_imed_adjust2_window_t1

0xd139,	// (0x0005b99b) slider_imed_adjust_pane

0xd14d,	// (0x0005b9af) slider_imed_adjust_pane_g1

0xd15d,	// (0x0005b9bf) slider_imed_adjust_pane_g2

0xd16d,	// (0x0005b9cf) slider_imed_adjust_pane_g3

0xd17e,	// (0x0005b9e0) slider_imed_adjust_pane_g4

0x0003,

0xf7ed,	// (0x0005e04f) slider_imed_adjust_pane_g

0x5d37,	// (0x00054599) aid_size_cell_clipart2

0x5d43,	// (0x000545a5) grid_imed_clipart_pane

0xd18f,	// (0x0005b9f1) scroll_pane_cp031

0x5d4d,	// (0x000545af) cell_imed_clipart_pane_ParamLimits

0x5d4d,	// (0x000545af) cell_imed_clipart_pane

0x5d6a,	// (0x000545cc) cell_imed_clipart_pane_g1

0x99e3,	// (0x00058245) grid_highlight_pane_cp014

0x5a14,	// (0x00054276) main_clock2_pane_g1_ParamLimits

0x5a14,	// (0x00054276) main_clock2_pane_g1

0x5b5a,	// (0x000543bc) aid_call2_pane_cp10

0x5b6c,	// (0x000543ce) aid_call_pane_cp10

0xb2aa,	// (0x00059b0c) popup_clock_analogue_window_cp10_g1

0xb2aa,	// (0x00059b0c) popup_clock_analogue_window_cp10_g2

0x5b7e,	// (0x000543e0) popup_clock_analogue_window_cp10_g3

0x5b7e,	// (0x000543e0) popup_clock_analogue_window_cp10_g4

0xb2aa,	// (0x00059b0c) popup_clock_analogue_window_cp10_g5

0x0004,

0xf7db,	// (0x0005e03d) popup_clock_analogue_window_cp10_g

0x5b94,	// (0x000543f6) popup_clock_analogue_window_cp10_t1

0x5bc5,	// (0x00054427) clock_digital_number_pane_cp10_ParamLimits

0x5bc5,	// (0x00054427) clock_digital_number_pane_cp10

0x5bdf,	// (0x00054441) clock_digital_number_pane_cp11_ParamLimits

0x5bdf,	// (0x00054441) clock_digital_number_pane_cp11

0x5bf9,	// (0x0005445b) clock_digital_number_pane_cp12_ParamLimits

0x5bf9,	// (0x0005445b) clock_digital_number_pane_cp12

0x5c13,	// (0x00054475) clock_digital_number_pane_cp13_ParamLimits

0x5c13,	// (0x00054475) clock_digital_number_pane_cp13

0x5c2d,	// (0x0005448f) clock_digital_separator_pane_cp10_ParamLimits

0x5c2d,	// (0x0005448f) clock_digital_separator_pane_cp10

0x5c47,	// (0x000544a9) popup_clock_digital_window_cp02_t1_ParamLimits

0x5c47,	// (0x000544a9) popup_clock_digital_window_cp02_t1

0xa0b0,	// (0x00058912) clock_digital_number_pane_cp10_g1

0xa0b0,	// (0x00058912) clock_digital_number_pane_cp10_g2

0x0001,

0xf7f6,	// (0x0005e058) clock_digital_number_pane_cp10_g

0xa0b0,	// (0x00058912) clock_digital_separator_pane_cp10_g1

0xa0b0,	// (0x00058912) clock_digital_separator_pane_g2_cp10

0xb345,	// (0x00059ba7) navi_pane_vded_g4

0xb34e,	// (0x00059bb0) navi_pane_vded_g5

0xb357,	// (0x00059bb9) navi_pane_vded_t1

0x99e3,	// (0x00058245) main_vded_pane

0x5d73,	// (0x000545d5) main_vded_pane_g1

0x5d7f,	// (0x000545e1) main_vded_pane_g2

0x5d8b,	// (0x000545ed) main_vded_pane_g3

0x0002,

0xf7fb,	// (0x0005e05d) main_vded_pane_g

0x5d97,	// (0x000545f9) main_vded_pane_t1

0x5da5,	// (0x00054607) main_vded_pane_t2

0x0001,

0xf802,	// (0x0005e064) main_vded_pane_t

0x5db3,	// (0x00054615) vded_slider_pane

0x5dbd,	// (0x0005461f) vded_video_pane

0xd197,	// (0x0005b9f9) vded_video_pane_g1

0x5dc7,	// (0x00054629) vded_video_pane_g2

0xcbfd,	// (0x0005b45f) vded_video_pane_g3

0x0002,

0xf807,	// (0x0005e069) vded_video_pane_g

0xd1a1,	// (0x0005ba03) vded_slider_pane_g1

0xc94a,	// (0x0005b1ac) vded_slider_pane_g2

0xd1aa,	// (0x0005ba0c) vded_slider_pane_g3

0xd1b3,	// (0x0005ba15) vded_slider_pane_g4

0xd1bc,	// (0x0005ba1e) vded_slider_pane_g5

0x0004,

0xf80e,	// (0x0005e070) vded_slider_pane_g

0x5785,	// (0x00053fe7) mup3_rocker_pane_ParamLimits

0x5785,	// (0x00053fe7) mup3_rocker_pane

0x5dd0,	// (0x00054632) mup3_control_keys_pane_g1

0x5dd8,	// (0x0005463a) mup3_control_keys_pane_g2

0x5de0,	// (0x00054642) mup3_control_keys_pane_g3

0x5de8,	// (0x0005464a) mup3_control_keys_pane_g4

0x0003,

0xf819,	// (0x0005e07b) mup3_control_keys_pane_g

0x0ca3,	// (0x0004f505) popup_toolbar2_fixed_window_cp01_ParamLimits

0x0ca3,	// (0x0004f505) popup_toolbar2_fixed_window_cp01

0x57bb,	// (0x0005401d) popup_toolbar2_fixed_window_cp02_ParamLimits

0x57bb,	// (0x0005401d) popup_toolbar2_fixed_window_cp02

0xbb24,	// (0x0005a386) popup_call2_audio_second_window_t4_ParamLimits

0xbb24,	// (0x0005a386) popup_call2_audio_second_window_t4

0xc052,	// (0x0005a8b4) popup_call2_audio_first_window_t6_ParamLimits

0xc052,	// (0x0005a8b4) popup_call2_audio_first_window_t6

0xc2e8,	// (0x0005ab4a) popup_call2_audio_out_window_t6_ParamLimits

0xc2e8,	// (0x0005ab4a) popup_call2_audio_out_window_t6

0x99e3,	// (0x00058245) main_vitu_pane

0x5df8,	// (0x0005465a) aid_size_cell_itu_ParamLimits

0x5df8,	// (0x0005465a) aid_size_cell_itu

0x9a3c,	// (0x0005829e) bg_popup_window_pane_cp08_ParamLimits

0x9a3c,	// (0x0005829e) bg_popup_window_pane_cp08

0x5e0e,	// (0x00054670) field_vitu_entry_pane_ParamLimits

0x5e0e,	// (0x00054670) field_vitu_entry_pane

0x5e25,	// (0x00054687) grid_vitu_function_pane_ParamLimits

0x5e25,	// (0x00054687) grid_vitu_function_pane

0x5e40,	// (0x000546a2) grid_vitu_itu_pane_ParamLimits

0x5e40,	// (0x000546a2) grid_vitu_itu_pane

0x5e5e,	// (0x000546c0) cell_vitu_itu_pane_ParamLimits

0x5e5e,	// (0x000546c0) cell_vitu_itu_pane

0x5e84,	// (0x000546e6) cell_vitu_function_pane_ParamLimits

0x5e84,	// (0x000546e6) cell_vitu_function_pane

0x9a3c,	// (0x0005829e) bg_popup_sub_pane_cp08_ParamLimits

0x9a3c,	// (0x0005829e) bg_popup_sub_pane_cp08

0x5e9f,	// (0x00054701) field_vitu_entry_pane_t1_ParamLimits

0x5e9f,	// (0x00054701) field_vitu_entry_pane_t1

0xd1dd,	// (0x0005ba3f) field_vitu_entry_pane_t2_ParamLimits

0xd1dd,	// (0x0005ba3f) field_vitu_entry_pane_t2

0x0001,

0xf827,	// (0x0005e089) field_vitu_entry_pane_t_ParamLimits

0xf827,	// (0x0005e089) field_vitu_entry_pane_t

0xd1fa,	// (0x0005ba5c) bg_button_pane_cp05_ParamLimits

0xd1fa,	// (0x0005ba5c) bg_button_pane_cp05

0x5ebf,	// (0x00054721) cell_vitu_itu_pane_g1

0x5ed7,	// (0x00054739) cell_vitu_itu_pane_t1_ParamLimits

0x5ed7,	// (0x00054739) cell_vitu_itu_pane_t1

0x5ee9,	// (0x0005474b) cell_vitu_itu_pane_t2_ParamLimits

0x5ee9,	// (0x0005474b) cell_vitu_itu_pane_t2

0x0002,

0xf82c,	// (0x0005e08e) cell_vitu_itu_pane_t_ParamLimits

0xf82c,	// (0x0005e08e) cell_vitu_itu_pane_t

0xd208,	// (0x0005ba6a) bg_button_pane_cp07

0x5f1e,	// (0x00054780) cell_vitu_function_pane_g1

0xa13f,	// (0x000589a1) main_calc_pane_g1

0x0ab7,	// (0x0004f319) aid_visual_content_pane

0x99e3,	// (0x00058245) main_vradio_pane

0x5f27,	// (0x00054789) main_vradio_pane_g1_ParamLimits

0x5f27,	// (0x00054789) main_vradio_pane_g1

0xd212,	// (0x0005ba74) main_vradio_pane_g2_ParamLimits

0xd212,	// (0x0005ba74) main_vradio_pane_g2

0x0001,

0xf833,	// (0x0005e095) main_vradio_pane_g_ParamLimits

0xf833,	// (0x0005e095) main_vradio_pane_g

0x5f3e,	// (0x000547a0) main_vradio_pane_t1_ParamLimits

0x5f3e,	// (0x000547a0) main_vradio_pane_t1

0x5f53,	// (0x000547b5) main_vradio_pane_t2_ParamLimits

0x5f53,	// (0x000547b5) main_vradio_pane_t2

0xd21f,	// (0x0005ba81) main_vradio_pane_t3_ParamLimits

0xd21f,	// (0x0005ba81) main_vradio_pane_t3

0x0002,

0xf838,	// (0x0005e09a) main_vradio_pane_t_ParamLimits

0xf838,	// (0x0005e09a) main_vradio_pane_t

0x5f68,	// (0x000547ca) vradio_rocker_control_pane_ParamLimits

0x5f68,	// (0x000547ca) vradio_rocker_control_pane

0x5f7a,	// (0x000547dc) vradio_station_info_pane_ParamLimits

0x5f7a,	// (0x000547dc) vradio_station_info_pane

0xd233,	// (0x0005ba95) vradio_frequency_info_pane_ParamLimits

0xd233,	// (0x0005ba95) vradio_frequency_info_pane

0xcbfd,	// (0x0005b45f) vradio_station_info_pane_g1

0xd242,	// (0x0005baa4) vradio_station_info_pane_t1_ParamLimits

0xd242,	// (0x0005baa4) vradio_station_info_pane_t1

0xd264,	// (0x0005bac6) vradio_station_info_pane_t2_ParamLimits

0xd264,	// (0x0005bac6) vradio_station_info_pane_t2

0x0001,

0xf83f,	// (0x0005e0a1) vradio_station_info_pane_t_ParamLimits

0xf83f,	// (0x0005e0a1) vradio_station_info_pane_t

0xd276,	// (0x0005bad8) vradio_tuning_pane

0xd27e,	// (0x0005bae0) vradio_rocker_control_pane_g1

0xd286,	// (0x0005bae8) vradio_rocker_control_pane_g2

0xd28e,	// (0x0005baf0) vradio_rocker_control_pane_g3

0xd296,	// (0x0005baf8) vradio_rocker_control_pane_g4

0xd29e,	// (0x0005bb00) vradio_rocker_control_pane_g5

0x0004,

0xf844,	// (0x0005e0a6) vradio_rocker_control_pane_g

0x5f8a,	// (0x000547ec) vradio_frequency_info_pane_g1

0xd2a6,	// (0x0005bb08) vradio_frequency_info_pane_t1_ParamLimits

0xd2a6,	// (0x0005bb08) vradio_frequency_info_pane_t1

0x5f94,	// (0x000547f6) vradio_tuning_pane_g1

0x5f9f,	// (0x00054801) vradio_tuning_pane_t1

0x9a09,	// (0x0005826b) area_side_right_pane_ParamLimits

0x9a09,	// (0x0005826b) area_side_right_pane

0xc767,	// (0x0005afc9) status_small_pane_g1

0xc76f,	// (0x0005afd1) status_small_pane_g2

0xc778,	// (0x0005afda) status_small_pane_g3

0xc781,	// (0x0005afe3) status_small_pane_g4

0x0003,

0xf5ff,	// (0x0005de61) status_small_pane_g

0xc78a,	// (0x0005afec) status_small_pane_t1

0x99e3,	// (0x00058245) main_video3_pane

0xd2ba,	// (0x0005bb1c) cams_zoom_vslider_pane

0xd2c2,	// (0x0005bb24) image3_wide_pane_ParamLimits

0xd2c2,	// (0x0005bb24) image3_wide_pane

0xd2f0,	// (0x0005bb52) image3_wide_small_pane

0xd2fc,	// (0x0005bb5e) main_video3_pane_g1_ParamLimits

0xd2fc,	// (0x0005bb5e) main_video3_pane_g1

0xd318,	// (0x0005bb7a) main_video3_pane_g2_ParamLimits

0xd318,	// (0x0005bb7a) main_video3_pane_g2

0x0001,

0xf84f,	// (0x0005e0b1) main_video3_pane_g_ParamLimits

0xf84f,	// (0x0005e0b1) main_video3_pane_g

0xd334,	// (0x0005bb96) main_video3_pane_t1_ParamLimits

0xd334,	// (0x0005bb96) main_video3_pane_t1

0xd35f,	// (0x0005bbc1) main_video3_pane_t2_ParamLimits

0xd35f,	// (0x0005bbc1) main_video3_pane_t2

0xd38c,	// (0x0005bbee) main_video3_pane_t3_ParamLimits

0xd38c,	// (0x0005bbee) main_video3_pane_t3

0x0002,

0xf854,	// (0x0005e0b6) main_video3_pane_t_ParamLimits

0xf854,	// (0x0005e0b6) main_video3_pane_t

0xd3b9,	// (0x0005bc1b) cams_zoom_vslider_pane_g1

0xd3c2,	// (0x0005bc24) cams_zoom_vslider_pane_g2

0x0001,

0xf85b,	// (0x0005e0bd) cams_zoom_vslider_pane_g

0xd3ca,	// (0x0005bc2c) small_slider_vertical_pane

0xcbfd,	// (0x0005b45f) small_slider_vertical_pane_g1

0xcbfd,	// (0x0005b45f) small_slider_vertical_pane_g2

0xd3d2,	// (0x0005bc34) small_slider_vertical_pane_g3

0x0002,

0xf860,	// (0x0005e0c2) small_slider_vertical_pane_g

0x99e3,	// (0x00058245) main_hwr_training_pane

0xd3db,	// (0x0005bc3d) hwr_training_instruct_pane_ParamLimits

0xd3db,	// (0x0005bc3d) hwr_training_instruct_pane

0x5fae,	// (0x00054810) hwr_training_navi_pane_ParamLimits

0x5fae,	// (0x00054810) hwr_training_navi_pane

0x5fcd,	// (0x0005482f) hwr_training_write_pane_ParamLimits

0x5fcd,	// (0x0005482f) hwr_training_write_pane

0x99e3,	// (0x00058245) bg_frame_shadow_pane

0xd412,	// (0x0005bc74) hwr_training_write_pane_g1

0xd41a,	// (0x0005bc7c) hwr_training_write_pane_g2

0xd422,	// (0x0005bc84) hwr_training_write_pane_g3

0xd42a,	// (0x0005bc8c) hwr_training_write_pane_g4

0xd432,	// (0x0005bc94) hwr_training_write_pane_g5

0xd43a,	// (0x0005bc9c) hwr_training_write_pane_g6

0xd442,	// (0x0005bca4) hwr_training_write_pane_g7

0x0006,

0xf867,	// (0x0005e0c9) hwr_training_write_pane_g

0xa81b,	// (0x0005907d) hwr_training_navi_pane_g1_ParamLimits

0xa81b,	// (0x0005907d) hwr_training_navi_pane_g1

0xa82d,	// (0x0005908f) hwr_training_navi_pane_g2_ParamLimits

0xa82d,	// (0x0005908f) hwr_training_navi_pane_g2

0xa83f,	// (0x000590a1) hwr_training_navi_pane_g3_ParamLimits

0xa83f,	// (0x000590a1) hwr_training_navi_pane_g3

0xa84f,	// (0x000590b1) hwr_training_navi_pane_g4_ParamLimits

0xa84f,	// (0x000590b1) hwr_training_navi_pane_g4

0x0004,

0xf876,	// (0x0005e0d8) hwr_training_navi_pane_g_ParamLimits

0xf876,	// (0x0005e0d8) hwr_training_navi_pane_g

0xa85c,	// (0x000590be) hwr_training_navi_pane_t1

0x6015,	// (0x00054877) list_single_hwr_training_instruct_pane_ParamLimits

0x6015,	// (0x00054877) list_single_hwr_training_instruct_pane

0xd44a,	// (0x0005bcac) list_single_hwr_training_instruct_pane_t1

0xcb3d,	// (0x0005b39f) bg_frame_shadow_pane_g1

0xd459,	// (0x0005bcbb) bg_frame_shadow_pane_g2

0xd461,	// (0x0005bcc3) bg_frame_shadow_pane_g3

0xd469,	// (0x0005bccb) bg_frame_shadow_pane_g4

0xd471,	// (0x0005bcd3) bg_frame_shadow_pane_g5

0xd479,	// (0x0005bcdb) bg_frame_shadow_pane_g6

0xd481,	// (0x0005bce3) bg_frame_shadow_pane_g7

0xa298,	// (0x00058afa) bg_frame_shadow_pane_g8

0x0007,

0xf881,	// (0x0005e0e3) bg_frame_shadow_pane_g

0x99e3,	// (0x00058245) main_video_tele_dialer_pane

0x602a,	// (0x0005488c) aid_size_cell_video_keypad_ParamLimits

0x602a,	// (0x0005488c) aid_size_cell_video_keypad

0x6044,	// (0x000548a6) grid_video_dialer_keypad_pane_ParamLimits

0x6044,	// (0x000548a6) grid_video_dialer_keypad_pane

0x6090,	// (0x000548f2) video_down_pane_cp_ParamLimits

0x6090,	// (0x000548f2) video_down_pane_cp

0x60c0,	// (0x00054922) cell_video_dialer_keypad_pane_ParamLimits

0x60c0,	// (0x00054922) cell_video_dialer_keypad_pane

0xd489,	// (0x0005bceb) bg_button_pane_cp08_ParamLimits

0xd489,	// (0x0005bceb) bg_button_pane_cp08

0x60e4,	// (0x00054946) cell_video_dialer_keypad_pane_g1_ParamLimits

0x60e4,	// (0x00054946) cell_video_dialer_keypad_pane_g1

0x576f,	// (0x00053fd1) mup3_rocker2_pane_ParamLimits

0x576f,	// (0x00053fd1) mup3_rocker2_pane

0xcbfd,	// (0x0005b45f) mup3_rocker2_pane_g1

0x4258,	// (0x00052aba) main_dialer2_pane

0x99e3,	// (0x00058245) main_mp4_pane

0xa872,	// (0x000590d4) main_mp4_pane_g1_ParamLimits

0xa872,	// (0x000590d4) main_mp4_pane_g1

0xa872,	// (0x000590d4) main_mp4_pane_g2_ParamLimits

0xa872,	// (0x000590d4) main_mp4_pane_g2

0x611f,	// (0x00054981) main_mp4_pane_g3_ParamLimits

0x611f,	// (0x00054981) main_mp4_pane_g3

0xa880,	// (0x000590e2) main_mp4_pane_g4_ParamLimits

0xa880,	// (0x000590e2) main_mp4_pane_g4

0xa8a8,	// (0x0005910a) main_mp4_pane_g5_ParamLimits

0xa8a8,	// (0x0005910a) main_mp4_pane_g5

0x0005,

0xf8a1,	// (0x0005e103) main_mp4_pane_g_ParamLimits

0xf8a1,	// (0x0005e103) main_mp4_pane_g

0xa8f8,	// (0x0005915a) main_mp4_pane_t1_ParamLimits

0xa8f8,	// (0x0005915a) main_mp4_pane_t1

0xa954,	// (0x000591b6) main_mp4_pane_t2_ParamLimits

0xa954,	// (0x000591b6) main_mp4_pane_t2

0xd495,	// (0x0005bcf7) main_mp4_pane_t3_ParamLimits

0xd495,	// (0x0005bcf7) main_mp4_pane_t3

0xa9a6,	// (0x00059208) main_mp4_pane_t4_ParamLimits

0xa9a6,	// (0x00059208) main_mp4_pane_t4

0x0003,

0xf8ae,	// (0x0005e110) main_mp4_pane_t_ParamLimits

0xf8ae,	// (0x0005e110) main_mp4_pane_t

0xa9e6,	// (0x00059248) mp4_progress_pane_ParamLimits

0xa9e6,	// (0x00059248) mp4_progress_pane

0xaa30,	// (0x00059292) mp4_rocker_pane_ParamLimits

0xaa30,	// (0x00059292) mp4_rocker_pane

0xd4bd,	// (0x0005bd1f) mp4_progress_pane_t1

0xd4d6,	// (0x0005bd38) mp4_progress_pane_t2

0x0001,

0xf8b7,	// (0x0005e119) mp4_progress_pane_t

0xd4ef,	// (0x0005bd51) mup_progress_pane_cp04

0xcbfd,	// (0x0005b45f) mp4_rocker_pane_g1

0x6169,	// (0x000549cb) aid_cell_size_keypad2_ParamLimits

0x6169,	// (0x000549cb) aid_cell_size_keypad2

0x617f,	// (0x000549e1) dialer2_ne_pane_ParamLimits

0x617f,	// (0x000549e1) dialer2_ne_pane

0x6197,	// (0x000549f9) grid_dialer2_keypad_pane_ParamLimits

0x6197,	// (0x000549f9) grid_dialer2_keypad_pane

0xc9dc,	// (0x0005b23e) bg_popup_call_pane_cp07_ParamLimits

0xc9dc,	// (0x0005b23e) bg_popup_call_pane_cp07

0x61b3,	// (0x00054a15) dialer2_ne_pane_t1_ParamLimits

0x61b3,	// (0x00054a15) dialer2_ne_pane_t1

0x61ee,	// (0x00054a50) cell_dialer2_keypad_pane_ParamLimits

0x61ee,	// (0x00054a50) cell_dialer2_keypad_pane

0xd50d,	// (0x0005bd6f) bg_button_pane_pane_cp04_ParamLimits

0xd50d,	// (0x0005bd6f) bg_button_pane_pane_cp04

0x6212,	// (0x00054a74) cell_dialer2_keypad_pane_g1_ParamLimits

0x6212,	// (0x00054a74) cell_dialer2_keypad_pane_g1

0x1db8,	// (0x0005061a) aid_placing_vt_set_content_ParamLimits

0x1db8,	// (0x0005061a) aid_placing_vt_set_content

0x1ddc,	// (0x0005063e) aid_placing_vt_set_title_ParamLimits

0x1ddc,	// (0x0005063e) aid_placing_vt_set_title

0x99e3,	// (0x00058245) main_image3_pane

0x62d8,	// (0x00054b3a) area_side_right_pane_cp01_ParamLimits

0x62d8,	// (0x00054b3a) area_side_right_pane_cp01

0xa872,	// (0x000590d4) main_image3_pane_g1_ParamLimits

0xa872,	// (0x000590d4) main_image3_pane_g1

0x62f1,	// (0x00054b53) main_image3_pane_g2_ParamLimits

0x62f1,	// (0x00054b53) main_image3_pane_g2

0x6319,	// (0x00054b7b) main_image3_pane_g3_ParamLimits

0x6319,	// (0x00054b7b) main_image3_pane_g3

0x6343,	// (0x00054ba5) main_image3_pane_g4_ParamLimits

0x6343,	// (0x00054ba5) main_image3_pane_g4

0x0003,

0xf8c6,	// (0x0005e128) main_image3_pane_g_ParamLimits

0xf8c6,	// (0x0005e128) main_image3_pane_g

0x636d,	// (0x00054bcf) main_image3_pane_t1_ParamLimits

0x636d,	// (0x00054bcf) main_image3_pane_t1

0x63c5,	// (0x00054c27) main_image3_pane_t2_ParamLimits

0x63c5,	// (0x00054c27) main_image3_pane_t2

0x6417,	// (0x00054c79) main_image3_pane_t3_ParamLimits

0x6417,	// (0x00054c79) main_image3_pane_t3

0x0003,

0xf8cf,	// (0x0005e131) main_image3_pane_t_ParamLimits

0xf8cf,	// (0x0005e131) main_image3_pane_t

0x9a3c,	// (0x0005829e) grid_sctrl_middle_pane_cp01_ParamLimits

0x9a3c,	// (0x0005829e) grid_sctrl_middle_pane_cp01

0x649f,	// (0x00054d01) cell_sctrl_middle_pane_cp01_ParamLimits

0x649f,	// (0x00054d01) cell_sctrl_middle_pane_cp01

0x64bc,	// (0x00054d1e) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x64bc,	// (0x00054d1e) cell_sctrl_middle_pane_cp01_g1

0x99e3,	// (0x00058245) main_call4_pane

0x64d1,	// (0x00054d33) aid_size_button_call4_ParamLimits

0x64d1,	// (0x00054d33) aid_size_button_call4

0x6504,	// (0x00054d66) call4_windows_pane_ParamLimits

0x6504,	// (0x00054d66) call4_windows_pane

0x6526,	// (0x00054d88) grid_call4_button_pane_ParamLimits

0x6526,	// (0x00054d88) grid_call4_button_pane

0xd519,	// (0x0005bd7b) call4_windows_conf_pane

0x6551,	// (0x00054db3) popup_call4_audio_first_window_ParamLimits

0x6551,	// (0x00054db3) popup_call4_audio_first_window

0x657d,	// (0x00054ddf) popup_call4_audio_second_window_ParamLimits

0x657d,	// (0x00054ddf) popup_call4_audio_second_window

0xd556,	// (0x0005bdb8) popup_call4_audio_wait_window_ParamLimits

0xd556,	// (0x0005bdb8) popup_call4_audio_wait_window

0x6593,	// (0x00054df5) cell_call4_button_pane_ParamLimits

0x6593,	// (0x00054df5) cell_call4_button_pane

0x65ba,	// (0x00054e1c) bg_button_pane_cp09_ParamLimits

0x65ba,	// (0x00054e1c) bg_button_pane_cp09

0x65c6,	// (0x00054e28) cell_call4_button_pane_g1_ParamLimits

0x65c6,	// (0x00054e28) cell_call4_button_pane_g1

0x65ec,	// (0x00054e4e) cell_call4_button_pane_t1_ParamLimits

0x65ec,	// (0x00054e4e) cell_call4_button_pane_t1

0xd59e,	// (0x0005be00) popup_call4_audio_conf_window_ParamLimits

0xd59e,	// (0x0005be00) popup_call4_audio_conf_window

0x57d1,	// (0x00054033) mup3_progress_pane_t1_ParamLimits

0x57ef,	// (0x00054051) mup3_progress_pane_t2_ParamLimits

0xcea8,	// (0x0005b70a) mup3_progress_pane_t3_ParamLimits

0xf7a3,	// (0x0005e005) mup3_progress_pane_t_ParamLimits

0xcec5,	// (0x0005b727) mup_progress_pane_cp03_ParamLimits

0x5df0,	// (0x00054652) mup3_control_keys_pane_g4_copy1

0xaa14,	// (0x00059276) mp4_rocker2_pane_ParamLimits

0xaa14,	// (0x00059276) mp4_rocker2_pane

0xd5b8,	// (0x0005be1a) mp4_rocker2_pane_g1

0xd5c0,	// (0x0005be22) mp4_rocker2_pane_g2

0xaa86,	// (0x000592e8) mp4_rocker2_pane_g3

0xaa8e,	// (0x000592f0) mp4_rocker2_pane_g4

0xaa96,	// (0x000592f8) mp4_rocker2_pane_g5

0x0004,

0xf8d8,	// (0x0005e13a) mp4_rocker2_pane_g

0x99e3,	// (0x00058245) main_camera4_pane

0x99e3,	// (0x00058245) main_video4_pane

0x605e,	// (0x000548c0) main_video_tele_dialer_pane_t1_ParamLimits

0x605e,	// (0x000548c0) main_video_tele_dialer_pane_t1

0x6077,	// (0x000548d9) main_video_tele_dialer_pane_t2_ParamLimits

0x6077,	// (0x000548d9) main_video_tele_dialer_pane_t2

0x0001,

0xf892,	// (0x0005e0f4) main_video_tele_dialer_pane_t_ParamLimits

0xf892,	// (0x0005e0f4) main_video_tele_dialer_pane_t

0x662a,	// (0x00054e8c) cam4_autofocus_pane_ParamLimits

0x662a,	// (0x00054e8c) cam4_autofocus_pane

0x6640,	// (0x00054ea2) cam4_image_uncrop_pane_ParamLimits

0x6640,	// (0x00054ea2) cam4_image_uncrop_pane

0x6659,	// (0x00054ebb) cam4_indicators_pane_ParamLimits

0x6659,	// (0x00054ebb) cam4_indicators_pane

0x6688,	// (0x00054eea) main_camera4_pane_g1_ParamLimits

0x6688,	// (0x00054eea) main_camera4_pane_g1

0x669a,	// (0x00054efc) main_camera4_pane_g2_ParamLimits

0x669a,	// (0x00054efc) main_camera4_pane_g2

0x66ad,	// (0x00054f0f) main_camera4_pane_g3_ParamLimits

0x66ad,	// (0x00054f0f) main_camera4_pane_g3

0x66c0,	// (0x00054f22) main_camera4_pane_g4_ParamLimits

0x66c0,	// (0x00054f22) main_camera4_pane_g4

0x66d3,	// (0x00054f35) main_camera4_pane_g5_ParamLimits

0x66d3,	// (0x00054f35) main_camera4_pane_g5

0x0005,

0xf8e3,	// (0x0005e145) main_camera4_pane_g_ParamLimits

0xf8e3,	// (0x0005e145) main_camera4_pane_g

0x66f7,	// (0x00054f59) main_camera4_pane_t1_ParamLimits

0x66f7,	// (0x00054f59) main_camera4_pane_t1

0xce2d,	// (0x0005b68f) bg_tb_trans_pane_cp06

0xaac4,	// (0x00059326) cam4_indicators_pane_g1

0xaad5,	// (0x00059337) cam4_indicators_pane_g2

0x0002,

0xf8fe,	// (0x0005e160) cam4_indicators_pane_g

0xaaed,	// (0x0005934f) cam4_indicators_pane_t1

0x675b,	// (0x00054fbd) main_video4_pane_g1_ParamLimits

0x675b,	// (0x00054fbd) main_video4_pane_g1

0x676a,	// (0x00054fcc) main_video4_pane_g2_ParamLimits

0x676a,	// (0x00054fcc) main_video4_pane_g2

0x6779,	// (0x00054fdb) main_video4_pane_g3_ParamLimits

0x6779,	// (0x00054fdb) main_video4_pane_g3

0x6788,	// (0x00054fea) main_video4_pane_g4_ParamLimits

0x6788,	// (0x00054fea) main_video4_pane_g4

0x0004,

0xf905,	// (0x0005e167) main_video4_pane_g_ParamLimits

0xf905,	// (0x0005e167) main_video4_pane_g

0x67a6,	// (0x00055008) vid4_indicators_pane_ParamLimits

0x67a6,	// (0x00055008) vid4_indicators_pane

0x67d4,	// (0x00055036) video4_image_uncrop_cif_pane_ParamLimits

0x67d4,	// (0x00055036) video4_image_uncrop_cif_pane

0x67ee,	// (0x00055050) video4_image_uncrop_nhd_pane_ParamLimits

0x67ee,	// (0x00055050) video4_image_uncrop_nhd_pane

0x6640,	// (0x00054ea2) video4_image_uncrop_vga_pane_ParamLimits

0x6640,	// (0x00054ea2) video4_image_uncrop_vga_pane

0x9a3c,	// (0x0005829e) bg_tb_trans_pane_cp07

0xab1b,	// (0x0005937d) vid4_indicators_pane_g1

0xab31,	// (0x00059393) vid4_indicators_pane_g2

0xab45,	// (0x000593a7) vid4_indicators_pane_g3

0x0004,

0xf910,	// (0x0005e172) vid4_indicators_pane_g

0xab76,	// (0x000593d8) vid4_indicators_pane_t1

0x6804,	// (0x00055066) cam4_autofocus_pane_g1

0x680c,	// (0x0005506e) cam4_autofocus_pane_g2

0x6814,	// (0x00055076) cam4_autofocus_pane_g3

0x0002,

0xf91b,	// (0x0005e17d) cam4_autofocus_pane_g

0x681c,	// (0x0005507e) cam4_autofocus_pane_g3_copy1

0x60a4,	// (0x00054906) video_down_pane_cp_t1

0x60b2,	// (0x00054914) video_down_pane_cp_t2

0x0001,

0xf897,	// (0x0005e0f9) video_down_pane_cp_t

0x9a3c,	// (0x0005829e) popup_vitu2_window_ParamLimits

0x9a3c,	// (0x0005829e) popup_vitu2_window

0x6824,	// (0x00055086) aid_size_cell2_itu2_ParamLimits

0x6824,	// (0x00055086) aid_size_cell2_itu2

0x684a,	// (0x000550ac) aid_size_cell_itu2_ParamLimits

0x684a,	// (0x000550ac) aid_size_cell_itu2

0x68aa,	// (0x0005510c) bg_popup_window_pane_cp09_ParamLimits

0x68aa,	// (0x0005510c) bg_popup_window_pane_cp09

0x68b8,	// (0x0005511a) field_vitu2_entry_pane_ParamLimits

0x68b8,	// (0x0005511a) field_vitu2_entry_pane

0x68e0,	// (0x00055142) grid_vitu2_function_pane_ParamLimits

0x68e0,	// (0x00055142) grid_vitu2_function_pane

0x6931,	// (0x00055193) grid_vitu2_itu_pane_ParamLimits

0x6931,	// (0x00055193) grid_vitu2_itu_pane

0x69bc,	// (0x0005521e) cell_vitu2_itu_pane_ParamLimits

0x69bc,	// (0x0005521e) cell_vitu2_itu_pane

0x69e2,	// (0x00055244) cell_vitu2_function_pane_ParamLimits

0x69e2,	// (0x00055244) cell_vitu2_function_pane

0xd5c8,	// (0x0005be2a) bg_popup_call_pane_cp08_ParamLimits

0xd5c8,	// (0x0005be2a) bg_popup_call_pane_cp08

0xd5df,	// (0x0005be41) field_vitu2_entry_pane_g1

0xd5eb,	// (0x0005be4d) field_vitu2_entry_pane_g2

0x0002,

0xf922,	// (0x0005e184) field_vitu2_entry_pane_g

0xfe02,	// (0x0004e664) field_vitu2_entry_pane_t1_ParamLimits

0xfe02,	// (0x0004e664) field_vitu2_entry_pane_t1

0x6a26,	// (0x00055288) field_vitu2_entry_pane_t2_ParamLimits

0x6a26,	// (0x00055288) field_vitu2_entry_pane_t2

0x0001,

0xf929,	// (0x0005e18b) field_vitu2_entry_pane_t_ParamLimits

0xf929,	// (0x0005e18b) field_vitu2_entry_pane_t

0x6a43,	// (0x000552a5) bg_button_pane_cp010_ParamLimits

0x6a43,	// (0x000552a5) bg_button_pane_cp010

0x6a51,	// (0x000552b3) cell_vitu2_itu_pane_g1

0x6a7c,	// (0x000552de) cell_vitu2_itu_pane_t1_ParamLimits

0x6a7c,	// (0x000552de) cell_vitu2_itu_pane_t1

0xfe2e,	// (0x0004e690) cell_vitu2_itu_pane_t2_ParamLimits

0xfe2e,	// (0x0004e690) cell_vitu2_itu_pane_t2

0x0002,

0xf933,	// (0x0005e195) cell_vitu2_itu_pane_t_ParamLimits

0xf933,	// (0x0005e195) cell_vitu2_itu_pane_t

0x9a3c,	// (0x0005829e) bg_button_pane_cp011

0x6ada,	// (0x0005533c) cell_vitu2_function_pane_g1

0x99e3,	// (0x00058245) main_myfav_hc_pane

0x6467,	// (0x00054cc9) popup_image3_note_pane_ParamLimits

0x6467,	// (0x00054cc9) popup_image3_note_pane

0x6483,	// (0x00054ce5) popup_image3_tool_bar_pane_ParamLimits

0x6483,	// (0x00054ce5) popup_image3_tool_bar_pane

0xfeb2,	// (0x0004e714) cell_vitu2_itu_pane_t3_ParamLimits

0xfeb2,	// (0x0004e714) cell_vitu2_itu_pane_t3

0x99e3,	// (0x00058245) bg_popup_trans_pane

0xd60d,	// (0x0005be6f) grid_image3_tool_bar_pane

0xd617,	// (0x0005be79) bg_popup_trans_pane_g1

0xa656,	// (0x00058eb8) bg_popup_trans_pane_g2

0xd61f,	// (0x0005be81) bg_popup_trans_pane_g3

0xd627,	// (0x0005be89) bg_popup_trans_pane_g4

0xd62f,	// (0x0005be91) bg_popup_trans_pane_g5

0xd637,	// (0x0005be99) bg_popup_trans_pane_g6

0xd63f,	// (0x0005bea1) bg_popup_trans_pane_g7

0xd647,	// (0x0005bea9) bg_popup_trans_pane_g8

0xa636,	// (0x00058e98) bg_popup_trans_pane_g9

0x0008,

0xf93a,	// (0x0005e19c) bg_popup_trans_pane_g

0xd64f,	// (0x0005beb1) cell_image3_tool_bar_pane_ParamLimits

0xd64f,	// (0x0005beb1) cell_image3_tool_bar_pane

0xcbfd,	// (0x0005b45f) cell_image3_tool_bar_pane_g1

0x99e3,	// (0x00058245) bg_popup_trans_pane_cp1

0xd665,	// (0x0005bec7) popup_image3_note_pane_t1

0xd673,	// (0x0005bed5) popup_image3_note_pane_t2

0xd681,	// (0x0005bee3) popup_image3_note_pane_t3

0x0002,

0xf94d,	// (0x0005e1af) popup_image3_note_pane_t

0xd691,	// (0x0005bef3) popup_image3_note_pane_t3_copy1

0x6aee,	// (0x00055350) bg_myfav_hc_instruction_pane_ParamLimits

0x6aee,	// (0x00055350) bg_myfav_hc_instruction_pane

0x6b06,	// (0x00055368) cell_myfav_contact_pane_ParamLimits

0x6b06,	// (0x00055368) cell_myfav_contact_pane

0x6b22,	// (0x00055384) cell_myfav_contact_pane_cp1_ParamLimits

0x6b22,	// (0x00055384) cell_myfav_contact_pane_cp1

0x6b3a,	// (0x0005539c) cell_myfav_contact_pane_cp2_ParamLimits

0x6b3a,	// (0x0005539c) cell_myfav_contact_pane_cp2

0x6b52,	// (0x000553b4) cell_myfav_contact_pane_cp3_ParamLimits

0x6b52,	// (0x000553b4) cell_myfav_contact_pane_cp3

0x6b69,	// (0x000553cb) cell_myfav_contact_pane_cp4_ParamLimits

0x6b69,	// (0x000553cb) cell_myfav_contact_pane_cp4

0x6b81,	// (0x000553e3) cell_myfav_contact_pane_cp5_ParamLimits

0x6b81,	// (0x000553e3) cell_myfav_contact_pane_cp5

0x6b95,	// (0x000553f7) cell_myfav_contact_pane_cp6_ParamLimits

0x6b95,	// (0x000553f7) cell_myfav_contact_pane_cp6

0x6bab,	// (0x0005540d) cell_myfav_contact_pane_cp7_ParamLimits

0x6bab,	// (0x0005540d) cell_myfav_contact_pane_cp7

0xd69f,	// (0x0005bf01) listscroll_gen_pane_cp05

0x6bc3,	// (0x00055425) main_myfav_hc_pane_g1_ParamLimits

0x6bc3,	// (0x00055425) main_myfav_hc_pane_g1

0x6bdd,	// (0x0005543f) main_myfav_hc_pane_g2_ParamLimits

0x6bdd,	// (0x0005543f) main_myfav_hc_pane_g2

0x0002,

0xf954,	// (0x0005e1b6) main_myfav_hc_pane_g_ParamLimits

0xf954,	// (0x0005e1b6) main_myfav_hc_pane_g

0x6c11,	// (0x00055473) main_myfav_hc_pane_t1_ParamLimits

0x6c11,	// (0x00055473) main_myfav_hc_pane_t1

0xd6a8,	// (0x0005bf0a) main_myfav_hc_pane_t2_ParamLimits

0xd6a8,	// (0x0005bf0a) main_myfav_hc_pane_t2

0xd6ba,	// (0x0005bf1c) main_myfav_hc_pane_t3_ParamLimits

0xd6ba,	// (0x0005bf1c) main_myfav_hc_pane_t3

0x6c28,	// (0x0005548a) main_myfav_hc_pane_t4_ParamLimits

0x6c28,	// (0x0005548a) main_myfav_hc_pane_t4

0x0004,

0xf95b,	// (0x0005e1bd) main_myfav_hc_pane_t_ParamLimits

0xf95b,	// (0x0005e1bd) main_myfav_hc_pane_t

0xcbfd,	// (0x0005b45f) bg_myfav_hc_instruction_pane_g1

0xd6cc,	// (0x0005bf2e) cell_myfav_contact_pane_g1_ParamLimits

0xd6cc,	// (0x0005bf2e) cell_myfav_contact_pane_g1

0xd6cc,	// (0x0005bf2e) cell_myfav_contact_pane_g2_ParamLimits

0xd6cc,	// (0x0005bf2e) cell_myfav_contact_pane_g2

0xd6d8,	// (0x0005bf3a) cell_myfav_contact_pane_g3_ParamLimits

0xd6d8,	// (0x0005bf3a) cell_myfav_contact_pane_g3

0xce92,	// (0x0005b6f4) cell_myfav_contact_pane_g4_ParamLimits

0xce92,	// (0x0005b6f4) cell_myfav_contact_pane_g4

0xd6e5,	// (0x0005bf47) cell_myfav_contact_pane_g5_ParamLimits

0xd6e5,	// (0x0005bf47) cell_myfav_contact_pane_g5

0x0004,

0xf966,	// (0x0005e1c8) cell_myfav_contact_pane_g_ParamLimits

0xf966,	// (0x0005e1c8) cell_myfav_contact_pane_g

0x6bf7,	// (0x00055459) main_myfav_hc_pane_g3_ParamLimits

0x6bf7,	// (0x00055459) main_myfav_hc_pane_g3

0x0c04,	// (0x0004f466) popup_adpt_find_window

0x6c52,	// (0x000554b4) afind_page_pane_ParamLimits

0x6c52,	// (0x000554b4) afind_page_pane

0x6c67,	// (0x000554c9) aid_size_cell_afind_ParamLimits

0x6c67,	// (0x000554c9) aid_size_cell_afind

0x6c85,	// (0x000554e7) bg_popup_sub_pane_cp09_ParamLimits

0x6c85,	// (0x000554e7) bg_popup_sub_pane_cp09

0x6c92,	// (0x000554f4) find_pane_cp01_ParamLimits

0x6c92,	// (0x000554f4) find_pane_cp01

0xd6f1,	// (0x0005bf53) grid_afind_control_pane_ParamLimits

0xd6f1,	// (0x0005bf53) grid_afind_control_pane

0x6c9f,	// (0x00055501) grid_afind_pane_ParamLimits

0x6c9f,	// (0x00055501) grid_afind_pane

0x6cc1,	// (0x00055523) cell_afind_pane_ParamLimits

0x6cc1,	// (0x00055523) cell_afind_pane

0xcbfd,	// (0x0005b45f) afind_page_pane_g1

0x6d28,	// (0x0005558a) afind_page_pane_g2

0x6d31,	// (0x00055593) afind_page_pane_g3

0x0002,

0xf971,	// (0x0005e1d3) afind_page_pane_g

0x6d3a,	// (0x0005559c) afind_page_pane_t1

0xd705,	// (0x0005bf67) cell_afind_grid_control_pane_ParamLimits

0xd705,	// (0x0005bf67) cell_afind_grid_control_pane

0xd50d,	// (0x0005bd6f) bg_button_pane_cp69_ParamLimits

0xd50d,	// (0x0005bd6f) bg_button_pane_cp69

0x6d5a,	// (0x000555bc) cell_afind_pane_g1_ParamLimits

0x6d5a,	// (0x000555bc) cell_afind_pane_g1

0x6d67,	// (0x000555c9) cell_afind_pane_t1_ParamLimits

0x6d67,	// (0x000555c9) cell_afind_pane_t1

0xa44b,	// (0x00058cad) bg_button_pane_cp72

0xd714,	// (0x0005bf76) cell_afind_grid_control_pane_g1

0x3cfb,	// (0x0005255d) aid_image_placing_area_ParamLimits

0x3cfb,	// (0x0005255d) aid_image_placing_area

0xd1c5,	// (0x0005ba27) field_vitu_entry_pane_g1_ParamLimits

0xd1c5,	// (0x0005ba27) field_vitu_entry_pane_g1

0xd1d1,	// (0x0005ba33) field_vitu_entry_pane_g2_ParamLimits

0xd1d1,	// (0x0005ba33) field_vitu_entry_pane_g2

0x0001,

0xf822,	// (0x0005e084) field_vitu_entry_pane_g_ParamLimits

0xf822,	// (0x0005e084) field_vitu_entry_pane_g

0x5ebf,	// (0x00054721) cell_vitu_itu_pane_g1_ParamLimits

0x5f01,	// (0x00054763) cell_vitu_itu_pane_t3_ParamLimits

0x5f01,	// (0x00054763) cell_vitu_itu_pane_t3

0xd4bd,	// (0x0005bd1f) mp4_progress_pane_t1_ParamLimits

0xd4d6,	// (0x0005bd38) mp4_progress_pane_t2_ParamLimits

0xf8b7,	// (0x0005e119) mp4_progress_pane_t_ParamLimits

0xd4ef,	// (0x0005bd51) mup_progress_pane_cp04_ParamLimits

0x6c3c,	// (0x0005549e) main_myfav_hc_pane_t5_ParamLimits

0x6c3c,	// (0x0005549e) main_myfav_hc_pane_t5

0x9a01,	// (0x00058263) aid_zoom_text_primary

0x0c04,	// (0x0004f466) popup_adpt_find_window_ParamLimits

0x9a3c,	// (0x0005829e) main_cam_set_pane

0x6672,	// (0x00054ed4) cam4_zoom_pane_ParamLimits

0x6672,	// (0x00054ed4) cam4_zoom_pane

0x6d79,	// (0x000555db) main_cam_set_pane_g1_ParamLimits

0x6d79,	// (0x000555db) main_cam_set_pane_g1

0x6d87,	// (0x000555e9) main_cam_set_pane_g2_ParamLimits

0x6d87,	// (0x000555e9) main_cam_set_pane_g2

0x0001,

0xf978,	// (0x0005e1da) main_cam_set_pane_g_ParamLimits

0xf978,	// (0x0005e1da) main_cam_set_pane_g

0x6da8,	// (0x0005560a) main_cam_set_pane_t1_ParamLimits

0x6da8,	// (0x0005560a) main_cam_set_pane_t1

0x6dc3,	// (0x00055625) main_cset_listscroll_pane_ParamLimits

0x6dc3,	// (0x00055625) main_cset_listscroll_pane

0x6de7,	// (0x00055649) main_cset_slider_pane_ParamLimits

0x6de7,	// (0x00055649) main_cset_slider_pane

0xd725,	// (0x0005bf87) main_cset_list_pane_ParamLimits

0xd725,	// (0x0005bf87) main_cset_list_pane

0xd735,	// (0x0005bf97) scroll_pane_cp028

0x6e11,	// (0x00055673) aid_area_touch_slider

0x6e2d,	// (0x0005568f) cset_slider_pane

0x6e57,	// (0x000556b9) main_cset_slider_pane_g1

0x6e6c,	// (0x000556ce) main_cset_slider_pane_g2

0x0011,

0xf97d,	// (0x0005e1df) main_cset_slider_pane_g

0xd76e,	// (0x0005bfd0) main_cset_slider_pane_t1

0x6f2e,	// (0x00055790) main_cset_slider_pane_t2

0x6f48,	// (0x000557aa) main_cset_slider_pane_t3

0x6f62,	// (0x000557c4) main_cset_slider_pane_t4

0x6f7c,	// (0x000557de) main_cset_slider_pane_t5

0x6f9a,	// (0x000557fc) main_cset_slider_pane_t6

0x6faf,	// (0x00055811) main_cset_slider_pane_t7

0x000e,

0xf9a2,	// (0x0005e204) main_cset_slider_pane_t

0x70bb,	// (0x0005591d) cset_list_set_pane_ParamLimits

0x70bb,	// (0x0005591d) cset_list_set_pane

0x70cf,	// (0x00055931) aid_position_infowindow_above

0x70d7,	// (0x00055939) aid_position_infowindow_below

0xff0a,	// (0x0004e76c) cset_list_set_pane_g1_ParamLimits

0xff0a,	// (0x0004e76c) cset_list_set_pane_g1

0xff16,	// (0x0004e778) cset_list_set_pane_g3_ParamLimits

0xff16,	// (0x0004e778) cset_list_set_pane_g3

0x0001,

0xf9c1,	// (0x0005e223) cset_list_set_pane_g_ParamLimits

0xf9c1,	// (0x0005e223) cset_list_set_pane_g

0xff25,	// (0x0004e787) cset_list_set_pane_t1_ParamLimits

0xff25,	// (0x0004e787) cset_list_set_pane_t1

0x9a3c,	// (0x0005829e) list_highlight_pane_cp021_ParamLimits

0x9a3c,	// (0x0005829e) list_highlight_pane_cp021

0xb4bb,	// (0x00059d1d) cset_slider_pane_g1

0xb4cd,	// (0x00059d2f) cset_slider_pane_g2

0xb4c4,	// (0x00059d26) cset_slider_pane_g3

0x0002,

0xf9c6,	// (0x0005e228) cset_slider_pane_g

0xab8d,	// (0x000593ef) aid_area_touch_cam4_zoom

0xab95,	// (0x000593f7) cam4_zoom_cont_pane

0xab9d,	// (0x000593ff) cam4_zoom_pane_g1

0xaba5,	// (0x00059407) cam4_zoom_pane_g2

0x70df,	// (0x00055941) cam4_zoom_pane_g3

0x0002,

0xf9cd,	// (0x0005e22f) cam4_zoom_pane_g

0xd80e,	// (0x0005c070) cam4_zoom_cont_pane_g1

0xd817,	// (0x0005c079) cam4_zoom_cont_pane_g2

0xd820,	// (0x0005c082) cam4_zoom_cont_pane_g3

0x0002,

0xf9d4,	// (0x0005e236) cam4_zoom_cont_pane_g

0x64ef,	// (0x00054d51) call4_image_pane_ParamLimits

0x64ef,	// (0x00054d51) call4_image_pane

0xd519,	// (0x0005bd7b) call4_windows_conf_pane_ParamLimits

0xd534,	// (0x0005bd96) popup_call4_audio_in_window_ParamLimits

0xd534,	// (0x0005bd96) popup_call4_audio_in_window

0x99e3,	// (0x00058245) bg_popup_call2_act_pane_cp02

0xd596,	// (0x0005bdf8) call4_list_conf_pane

0xcbfd,	// (0x0005b45f) call4_image_pane_g1

0xcbfd,	// (0x0005b45f) call4_image_pane_g2

0x0001,

0xf6e3,	// (0x0005df45) call4_image_pane_g

0xd829,	// (0x0005c08b) list_single_graphic_popup_conf4_pane_ParamLimits

0xd829,	// (0x0005c08b) list_single_graphic_popup_conf4_pane

0x99e3,	// (0x00058245) list_highlight_pane_cp022

0xd83e,	// (0x0005c0a0) list_single_graphic_popup_conf4_pane_g1

0xb1a7,	// (0x00059a09) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf9db,	// (0x0005e23d) list_single_graphic_popup_conf4_pane_g

0xd846,	// (0x0005c0a8) list_single_graphic_popup_conf4_pane_t1

0x1ef3,	// (0x00050755) popup_vtel_slider_window_ParamLimits

0x1ef3,	// (0x00050755) popup_vtel_slider_window

0xd4fb,	// (0x0005bd5d) dialer2_ne_pane_t2_ParamLimits

0xd4fb,	// (0x0005bd5d) dialer2_ne_pane_t2

0x0001,

0xf8bc,	// (0x0005e11e) dialer2_ne_pane_t_ParamLimits

0xf8bc,	// (0x0005e11e) dialer2_ne_pane_t

0xc9dc,	// (0x0005b23e) bg_popup_sub_pane_cp010_ParamLimits

0xc9dc,	// (0x0005b23e) bg_popup_sub_pane_cp010

0x70e7,	// (0x00055949) popup_vtel_slider_window_g1_ParamLimits

0x70e7,	// (0x00055949) popup_vtel_slider_window_g1

0x70fa,	// (0x0005595c) popup_vtel_slider_window_g2_ParamLimits

0x70fa,	// (0x0005595c) popup_vtel_slider_window_g2

0x0003,

0xf9e0,	// (0x0005e242) popup_vtel_slider_window_g_ParamLimits

0xf9e0,	// (0x0005e242) popup_vtel_slider_window_g

0x7150,	// (0x000559b2) vtel_slider_pane_ParamLimits

0x7150,	// (0x000559b2) vtel_slider_pane

0x7172,	// (0x000559d4) vtel_slider_pane_g1_ParamLimits

0x7172,	// (0x000559d4) vtel_slider_pane_g1

0x7186,	// (0x000559e8) vtel_slider_pane_g2_ParamLimits

0x7186,	// (0x000559e8) vtel_slider_pane_g2

0x719e,	// (0x00055a00) vtel_slider_pane_g3_ParamLimits

0x719e,	// (0x00055a00) vtel_slider_pane_g3

0x7172,	// (0x000559d4) vtel_slider_pane_g4_ParamLimits

0x7172,	// (0x000559d4) vtel_slider_pane_g4

0x71b4,	// (0x00055a16) vtel_slider_pane_g5_ParamLimits

0x71b4,	// (0x00055a16) vtel_slider_pane_g5

0x0004,

0xf9e9,	// (0x0005e24b) vtel_slider_pane_g_ParamLimits

0xf9e9,	// (0x0005e24b) vtel_slider_pane_g

0x9a3c,	// (0x0005829e) main_gallery2_pane

0x6876,	// (0x000550d8) aid_size_row_itut2_dropdow_list_ParamLimits

0x6876,	// (0x000550d8) aid_size_row_itut2_dropdow_list

0x6908,	// (0x0005516a) grid_vitu2_function_top_pane_ParamLimits

0x6908,	// (0x0005516a) grid_vitu2_function_top_pane

0x6967,	// (0x000551c9) popup_vitu2_dropdown_list_window_ParamLimits

0x6967,	// (0x000551c9) popup_vitu2_dropdown_list_window

0x6990,	// (0x000551f2) popup_vitu2_match_list_window

0x71ca,	// (0x00055a2c) cell_vitu2_function_top_pane_ParamLimits

0x71ca,	// (0x00055a2c) cell_vitu2_function_top_pane

0x71ea,	// (0x00055a4c) cell_vitu2_function_top_pane_cp01_ParamLimits

0x71ea,	// (0x00055a4c) cell_vitu2_function_top_pane_cp01

0x7208,	// (0x00055a6a) cell_vitu2_function_top_wide_pane_ParamLimits

0x7208,	// (0x00055a6a) cell_vitu2_function_top_wide_pane

0x9a3c,	// (0x0005829e) bg_button_pane_cp012

0x7226,	// (0x00055a88) cell_vitu2_function_top_pane_g1

0xabad,	// (0x0005940f) bg_button_pane_cp013_ParamLimits

0xabad,	// (0x0005940f) bg_button_pane_cp013

0x723a,	// (0x00055a9c) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x723a,	// (0x00055a9c) cell_vitu2_function_top_wide_pane_g1

0x9a3c,	// (0x0005829e) bg_popup_sub_pane_cp20

0x7252,	// (0x00055ab4) list_vitu2_match_list_pane

0xd617,	// (0x0005be79) bg_popup_sub_pane_cp20_g1

0xd61f,	// (0x0005be81) bg_popup_sub_pane_cp20_g2

0xa656,	// (0x00058eb8) bg_popup_sub_pane_cp20_g3

0xd627,	// (0x0005be89) bg_popup_sub_pane_cp20_g4

0xa636,	// (0x00058e98) bg_popup_sub_pane_cp20_g5

0xd85c,	// (0x0005c0be) bg_popup_sub_pane_cp20_g6

0xd637,	// (0x0005be99) bg_popup_sub_pane_cp20_g7

0xd63f,	// (0x0005bea1) bg_popup_sub_pane_cp20_g8

0xd647,	// (0x0005bea9) bg_popup_sub_pane_cp20_g9

0x0008,

0xf9f4,	// (0x0005e256) bg_popup_sub_pane_cp20_g

0xabc9,	// (0x0005942b) list_vitu2_match_list_item_pane_ParamLimits

0xabc9,	// (0x0005942b) list_vitu2_match_list_item_pane

0xabdb,	// (0x0005943d) list_vitu2_match_list_item_pane_t1

0x99e3,	// (0x00058245) bg_popup_sub_pane_cp21

0xb0d0,	// (0x00059932) grid_vitu2_dropdown_list_pane

0x7270,	// (0x00055ad2) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x7270,	// (0x00055ad2) cell_vitu2_dropdown_list_char_pane

0x7293,	// (0x00055af5) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x7293,	// (0x00055af5) cell_vitu2_dropdown_list_ctrl_pane

0xd864,	// (0x0005c0c6) cell_vitu2_dropdown_list_char_pane_g1

0xd86d,	// (0x0005c0cf) cell_vitu2_dropdown_list_char_pane_g2

0xd876,	// (0x0005c0d8) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xfa11,	// (0x0005e273) cell_vitu2_dropdown_list_char_pane_g

0x72c1,	// (0x00055b23) cell_vitu2_dropdown_list_char_pane_t1

0x72cf,	// (0x00055b31) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x72cf,	// (0x00055b31) cell_vitu2_dropdown_list_ctrl_pane_g1

0x72df,	// (0x00055b41) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x72df,	// (0x00055b41) cell_vitu2_dropdown_list_ctrl_pane_g2

0x72f0,	// (0x00055b52) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x72f0,	// (0x00055b52) cell_vitu2_dropdown_list_ctrl_pane_g3

0x7300,	// (0x00055b62) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x7300,	// (0x00055b62) cell_vitu2_dropdown_list_ctrl_pane_g4

0xce2d,	// (0x0005b68f) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0xce2d,	// (0x0005b68f) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa18,	// (0x0005e27a) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa18,	// (0x0005e27a) cell_vitu2_dropdown_list_ctrl_pane_g

0x731c,	// (0x00055b7e) aid_size_cell_gallery2_ParamLimits

0x731c,	// (0x00055b7e) aid_size_cell_gallery2

0x733a,	// (0x00055b9c) grid_gallery2_pane_ParamLimits

0x733a,	// (0x00055b9c) grid_gallery2_pane

0x7354,	// (0x00055bb6) scroll_pane_cp029_ParamLimits

0x7354,	// (0x00055bb6) scroll_pane_cp029

0x7360,	// (0x00055bc2) cell_gallery2_pane_ParamLimits

0x7360,	// (0x00055bc2) cell_gallery2_pane

0xd87f,	// (0x0005c0e1) cell_gallery2_pane_g2

0x73c1,	// (0x00055c23) cell_gallery2_pane_g3

0xd887,	// (0x0005c0e9) cell_gallery2_pane_g4

0xd88f,	// (0x0005c0f1) cell_gallery2_pane_g5

0xb375,	// (0x00059bd7) grid_highlight_pane_cp10

0x6990,	// (0x000551f2) popup_vitu2_match_list_window_ParamLimits

0x69a7,	// (0x00055209) popup_vitu2_query_window_ParamLimits

0x69a7,	// (0x00055209) popup_vitu2_query_window

0x99e3,	// (0x00058245) bg_vitu2_candi_button_pane

0xd864,	// (0x0005c0c6) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xd86d,	// (0x0005c0cf) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xd876,	// (0x0005c0d8) cell_vitu2_dropdown_list_char_pane_g2_copy2

0xff92,	// (0x0004e7f4) bg_button_pane_cp015

0x73c9,	// (0x00055c2b) bg_button_pane_cp016

0x73dc,	// (0x00055c3e) bg_button_pane_cp017

0xc7ac,	// (0x0005b00e) bg_popup_sub_pane_cp22

0xd897,	// (0x0005c0f9) popup_vitu2_query_window_g1

0xffc7,	// (0x0004e829) popup_vitu2_query_window_g2

0x0002,

0xfa23,	// (0x0005e285) popup_vitu2_query_window_g

0xffe6,	// (0x0004e848) popup_vitu2_query_window_t1_ParamLimits

0xffe6,	// (0x0004e848) popup_vitu2_query_window_t1

0x001b,	// (0x0004e87d) popup_vitu2_query_window_t2_ParamLimits

0x001b,	// (0x0004e87d) popup_vitu2_query_window_t2

0x002d,	// (0x0004e88f) popup_vitu2_query_window_t3_ParamLimits

0x002d,	// (0x0004e88f) popup_vitu2_query_window_t3

0x7400,	// (0x00055c62) popup_vitu2_query_window_t4_ParamLimits

0x7400,	// (0x00055c62) popup_vitu2_query_window_t4

0x7421,	// (0x00055c83) popup_vitu2_query_window_t5_ParamLimits

0x7421,	// (0x00055c83) popup_vitu2_query_window_t5

0x0006,

0xfa2a,	// (0x0005e28c) popup_vitu2_query_window_t_ParamLimits

0xfa2a,	// (0x0005e28c) popup_vitu2_query_window_t

0xd71d,	// (0x0005bf7f) main_cset_text_pane

0x6e11,	// (0x00055673) aid_area_touch_slider_ParamLimits

0x6e2d,	// (0x0005568f) cset_slider_pane_ParamLimits

0x6e57,	// (0x000556b9) main_cset_slider_pane_g1_ParamLimits

0x6e6c,	// (0x000556ce) main_cset_slider_pane_g2_ParamLimits

0xd73e,	// (0x0005bfa0) main_cset_slider_pane_g3_ParamLimits

0xd73e,	// (0x0005bfa0) main_cset_slider_pane_g3

0x6e81,	// (0x000556e3) main_cset_slider_pane_g4_ParamLimits

0x6e81,	// (0x000556e3) main_cset_slider_pane_g4

0x6e90,	// (0x000556f2) main_cset_slider_pane_g5_ParamLimits

0x6e90,	// (0x000556f2) main_cset_slider_pane_g5

0x6e9e,	// (0x00055700) main_cset_slider_pane_g6_ParamLimits

0x6e9e,	// (0x00055700) main_cset_slider_pane_g6

0xf97d,	// (0x0005e1df) main_cset_slider_pane_g_ParamLimits

0xd76e,	// (0x0005bfd0) main_cset_slider_pane_t1_ParamLimits

0x6f2e,	// (0x00055790) main_cset_slider_pane_t2_ParamLimits

0x6f48,	// (0x000557aa) main_cset_slider_pane_t3_ParamLimits

0x6f62,	// (0x000557c4) main_cset_slider_pane_t4_ParamLimits

0x6f7c,	// (0x000557de) main_cset_slider_pane_t5_ParamLimits

0x6f9a,	// (0x000557fc) main_cset_slider_pane_t6_ParamLimits

0x6faf,	// (0x00055811) main_cset_slider_pane_t7_ParamLimits

0x6fdd,	// (0x0005583f) main_cset_slider_pane_t8_ParamLimits

0x6fdd,	// (0x0005583f) main_cset_slider_pane_t8

0x7005,	// (0x00055867) main_cset_slider_pane_t9_ParamLimits

0x7005,	// (0x00055867) main_cset_slider_pane_t9

0x702d,	// (0x0005588f) main_cset_slider_pane_t10_ParamLimits

0x702d,	// (0x0005588f) main_cset_slider_pane_t10

0x7055,	// (0x000558b7) main_cset_slider_pane_t11_ParamLimits

0x7055,	// (0x000558b7) main_cset_slider_pane_t11

0x707f,	// (0x000558e1) main_cset_slider_pane_t12_ParamLimits

0x707f,	// (0x000558e1) main_cset_slider_pane_t12

0x709c,	// (0x000558fe) main_cset_slider_pane_t13_ParamLimits

0x709c,	// (0x000558fe) main_cset_slider_pane_t13

0xf9a2,	// (0x0005e204) main_cset_slider_pane_t_ParamLimits

0x99e3,	// (0x00058245) bg_popup_sub_pane_cp011

0xd8a3,	// (0x0005c105) main_cset_text_pane_g1

0xd8ab,	// (0x0005c10d) main_cset_text_pane_t1

0xd8b9,	// (0x0005c11b) main_cset_text_pane_t2

0xd8c7,	// (0x0005c129) main_cset_text_pane_t3

0xd8d5,	// (0x0005c137) main_cset_text_pane_t4

0xd8e3,	// (0x0005c145) main_cset_text_pane_t5

0xd8f1,	// (0x0005c153) main_cset_text_pane_t6

0xd8ff,	// (0x0005c161) main_cset_text_pane_t7

0x0006,

0xfa39,	// (0x0005e29b) main_cset_text_pane_t

0x99e3,	// (0x00058245) main_cam4_burst_pane

0x99e3,	// (0x00058245) main_cam5_pane

0x6d48,	// (0x000555aa) bg_button_pane_cp019

0x6d51,	// (0x000555b3) bg_button_pane_cp020

0xd74a,	// (0x0005bfac) main_cset_slider_pane_g7_ParamLimits

0xd74a,	// (0x0005bfac) main_cset_slider_pane_g7

0xd756,	// (0x0005bfb8) main_cset_slider_pane_g8_ParamLimits

0xd756,	// (0x0005bfb8) main_cset_slider_pane_g8

0x6eb2,	// (0x00055714) main_cset_slider_pane_g9_ParamLimits

0x6eb2,	// (0x00055714) main_cset_slider_pane_g9

0x6ebe,	// (0x00055720) main_cset_slider_pane_g10_ParamLimits

0x6ebe,	// (0x00055720) main_cset_slider_pane_g10

0x6eca,	// (0x0005572c) main_cset_slider_pane_g11_ParamLimits

0x6eca,	// (0x0005572c) main_cset_slider_pane_g11

0x6ed6,	// (0x00055738) main_cset_slider_pane_g12_ParamLimits

0x6ed6,	// (0x00055738) main_cset_slider_pane_g12

0x6ee2,	// (0x00055744) main_cset_slider_pane_g13_ParamLimits

0x6ee2,	// (0x00055744) main_cset_slider_pane_g13

0x6eee,	// (0x00055750) main_cset_slider_pane_g14_ParamLimits

0x6eee,	// (0x00055750) main_cset_slider_pane_g14

0x6efa,	// (0x0005575c) main_cset_slider_pane_g15_ParamLimits

0x6efa,	// (0x0005575c) main_cset_slider_pane_g15

0xd79c,	// (0x0005bffe) main_cset_slider_pane_t14_ParamLimits

0xd79c,	// (0x0005bffe) main_cset_slider_pane_t14

0xd7d5,	// (0x0005c037) main_cset_slider_pane_t15_ParamLimits

0xd7d5,	// (0x0005c037) main_cset_slider_pane_t15

0x7442,	// (0x00055ca4) aid_cam4_burst_size_cell_ParamLimits

0x7442,	// (0x00055ca4) aid_cam4_burst_size_cell

0x7462,	// (0x00055cc4) grid_cam4_burst_pane_ParamLimits

0x7462,	// (0x00055cc4) grid_cam4_burst_pane

0x749c,	// (0x00055cfe) linegrid_cam4_burst_pane_ParamLimits

0x749c,	// (0x00055cfe) linegrid_cam4_burst_pane

0xd90d,	// (0x0005c16f) scroll_pane_cp30_ParamLimits

0xd90d,	// (0x0005c16f) scroll_pane_cp30

0x74be,	// (0x00055d20) cell_cam4_burst_pane_ParamLimits

0x74be,	// (0x00055d20) cell_cam4_burst_pane

0xd919,	// (0x0005c17b) linegrid_cam4_burst_pane_g1_ParamLimits

0xd919,	// (0x0005c17b) linegrid_cam4_burst_pane_g1

0x7513,	// (0x00055d75) linegrid_cam4_burst_pane_g2_ParamLimits

0x7513,	// (0x00055d75) linegrid_cam4_burst_pane_g2

0xd926,	// (0x0005c188) linegrid_cam4_burst_pane_g3_ParamLimits

0xd926,	// (0x0005c188) linegrid_cam4_burst_pane_g3

0x0002,

0xfa48,	// (0x0005e2aa) linegrid_cam4_burst_pane_g_ParamLimits

0xfa48,	// (0x0005e2aa) linegrid_cam4_burst_pane_g

0x7524,	// (0x00055d86) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x7524,	// (0x00055d86) linegrid_cam4_burst_pane_g3_copy1

0xd933,	// (0x0005c195) linegrid_cam4_burst_pane_g4_ParamLimits

0xd933,	// (0x0005c195) linegrid_cam4_burst_pane_g4

0x7542,	// (0x00055da4) linegrid_cam4_burst_pane_g5_ParamLimits

0x7542,	// (0x00055da4) linegrid_cam4_burst_pane_g5

0x7553,	// (0x00055db5) linegrid_cam4_burst_pane_g6_ParamLimits

0x7553,	// (0x00055db5) linegrid_cam4_burst_pane_g6

0xd940,	// (0x0005c1a2) linegrid_cam4_burst_pane_g7_ParamLimits

0xd940,	// (0x0005c1a2) linegrid_cam4_burst_pane_g7

0x756a,	// (0x00055dcc) cell_cam4_burst_pane_g1

0xd959,	// (0x0005c1bb) main_cam5_pane_t1_ParamLimits

0xd959,	// (0x0005c1bb) main_cam5_pane_t1

0xd96b,	// (0x0005c1cd) main_cam5_pane_t2_ParamLimits

0xd96b,	// (0x0005c1cd) main_cam5_pane_t2

0xd97d,	// (0x0005c1df) main_cam5_pane_t3_ParamLimits

0xd97d,	// (0x0005c1df) main_cam5_pane_t3

0xd98f,	// (0x0005c1f1) main_cam5_pane_t4_ParamLimits

0xd98f,	// (0x0005c1f1) main_cam5_pane_t4

0xd9a7,	// (0x0005c209) main_cam5_pane_t5_ParamLimits

0xd9a7,	// (0x0005c209) main_cam5_pane_t5

0xd9bb,	// (0x0005c21d) main_cam5_pane_t6_ParamLimits

0xd9bb,	// (0x0005c21d) main_cam5_pane_t6

0xd9cf,	// (0x0005c231) main_cam5_pane_t7_ParamLimits

0xd9cf,	// (0x0005c231) main_cam5_pane_t7

0xd9e1,	// (0x0005c243) main_cam5_pane_t8_ParamLimits

0xd9e1,	// (0x0005c243) main_cam5_pane_t8

0xd9ff,	// (0x0005c261) main_cam5_pane_t9_ParamLimits

0xd9ff,	// (0x0005c261) main_cam5_pane_t9

0xda11,	// (0x0005c273) main_cam5_pane_t10_ParamLimits

0xda11,	// (0x0005c273) main_cam5_pane_t10

0xda23,	// (0x0005c285) main_cam5_pane_t11_ParamLimits

0xda23,	// (0x0005c285) main_cam5_pane_t11

0xda37,	// (0x0005c299) main_cam5_pane_t12_ParamLimits

0xda37,	// (0x0005c299) main_cam5_pane_t12

0xda4e,	// (0x0005c2b0) main_cam5_pane_t13_ParamLimits

0xda4e,	// (0x0005c2b0) main_cam5_pane_t13

0x000c,

0xfa54,	// (0x0005e2b6) main_cam5_pane_t_ParamLimits

0xfa54,	// (0x0005e2b6) main_cam5_pane_t

0x0c87,	// (0x0004f4e9) popup_scut_keymap_window_ParamLimits

0x0c87,	// (0x0004f4e9) popup_scut_keymap_window

0x757d,	// (0x00055ddf) aid_size_cell_brow_shortcut

0xb375,	// (0x00059bd7) bg_popup_window_pane_cp010

0x7589,	// (0x00055deb) grid_scut_pane

0x7595,	// (0x00055df7) cell_scut_pane_ParamLimits

0x7595,	// (0x00055df7) cell_scut_pane

0x75ae,	// (0x00055e10) cell_scut_pane_g1

0xda71,	// (0x0005c2d3) cell_scut_pane_t1

0xda80,	// (0x0005c2e2) cell_scut_pane_t2

0x75b7,	// (0x00055e19) cell_scut_pane_t3

0x0002,

0xfa6f,	// (0x0005e2d1) cell_scut_pane_t

0x5388,	// (0x00053bea) main_mup3_pane_g8_ParamLimits

0x5388,	// (0x00053bea) main_mup3_pane_g8

0x6892,	// (0x000550f4) area_vitu2_query_pane_ParamLimits

0x6892,	// (0x000550f4) area_vitu2_query_pane

0xffa6,	// (0x0004e808) input_focus_pane_cp08

0xda8f,	// (0x0005c2f1) area_vitu2_query_pane_g1

0x00ab,	// (0x0004e90d) area_vitu2_query_pane_g2

0x0001,

0xfa76,	// (0x0005e2d8) area_vitu2_query_pane_g

0x75c5,	// (0x00055e27) area_vitu2_query_pane_t1_ParamLimits

0x75c5,	// (0x00055e27) area_vitu2_query_pane_t1

0x75d9,	// (0x00055e3b) area_vitu2_query_pane_t2_ParamLimits

0x75d9,	// (0x00055e3b) area_vitu2_query_pane_t2

0x00bc,	// (0x0004e91e) area_vitu2_query_pane_t3_ParamLimits

0x00bc,	// (0x0004e91e) area_vitu2_query_pane_t3

0x75ed,	// (0x00055e4f) area_vitu2_query_pane_t4_ParamLimits

0x75ed,	// (0x00055e4f) area_vitu2_query_pane_t4

0x7615,	// (0x00055e77) area_vitu2_query_pane_t5_ParamLimits

0x7615,	// (0x00055e77) area_vitu2_query_pane_t5

0x763d,	// (0x00055e9f) area_vitu2_query_pane_t6_ParamLimits

0x763d,	// (0x00055e9f) area_vitu2_query_pane_t6

0x0006,

0xfa7b,	// (0x0005e2dd) area_vitu2_query_pane_t_ParamLimits

0xfa7b,	// (0x0005e2dd) area_vitu2_query_pane_t

0x7689,	// (0x00055eeb) bg_button_pane_cp018

0x7697,	// (0x00055ef9) bg_button_pane_cp021

0x00e4,	// (0x0004e946) bg_button_pane_cp022

0x00f5,	// (0x0004e957) input_focus_pane_cp09

0x3256,	// (0x00051ab8) aid_size_touch_mv_arrow_left

0x327f,	// (0x00051ae1) aid_size_touch_mv_arrow_right

0x6f12,	// (0x00055774) main_cset_slider_pane_g16_ParamLimits

0x6f12,	// (0x00055774) main_cset_slider_pane_g16

0x6f20,	// (0x00055782) main_cset_slider_pane_g17_ParamLimits

0x6f20,	// (0x00055782) main_cset_slider_pane_g17

0x756a,	// (0x00055dcc) cell_cam4_burst_pane_g1_ParamLimits

0x99e3,	// (0x00058245) compa_mode_pane

0x710a,	// (0x0005596c) popup_vtel_slider_window_g3_ParamLimits

0x710a,	// (0x0005596c) popup_vtel_slider_window_g3

0x7121,	// (0x00055983) popup_vtel_slider_window_g4_ParamLimits

0x7121,	// (0x00055983) popup_vtel_slider_window_g4

0x7138,	// (0x0005599a) popup_vtel_slider_window_t1_ParamLimits

0x7138,	// (0x0005599a) popup_vtel_slider_window_t1

0x99e3,	// (0x00058245) main_cl_pane

0xc7d8,	// (0x0005b03a) popup_imed_adjust2_window_ParamLimits

0xc7ac,	// (0x0005b00e) bg_tb_trans_pane_cp05_ParamLimits

0xd0fa,	// (0x0005b95c) popup_imed_adjust2_window_g1_ParamLimits

0xd109,	// (0x0005b96b) popup_imed_adjust2_window_g2_ParamLimits

0xd109,	// (0x0005b96b) popup_imed_adjust2_window_g2

0xd115,	// (0x0005b977) popup_imed_adjust2_window_g3_ParamLimits

0xd115,	// (0x0005b977) popup_imed_adjust2_window_g3

0x0002,

0xf7e6,	// (0x0005e048) popup_imed_adjust2_window_g_ParamLimits

0xf7e6,	// (0x0005e048) popup_imed_adjust2_window_g

0xd121,	// (0x0005b983) popup_imed_adjust2_window_t1_ParamLimits

0xd139,	// (0x0005b99b) slider_imed_adjust_pane_ParamLimits

0xd14d,	// (0x0005b9af) slider_imed_adjust_pane_g1_ParamLimits

0xd15d,	// (0x0005b9bf) slider_imed_adjust_pane_g2_ParamLimits

0xd16d,	// (0x0005b9cf) slider_imed_adjust_pane_g3_ParamLimits

0xd17e,	// (0x0005b9e0) slider_imed_adjust_pane_g4_ParamLimits

0xf7ed,	// (0x0005e04f) slider_imed_adjust_pane_g_ParamLimits

0x6612,	// (0x00054e74) aid_touch_area_cam4_ParamLimits

0x6612,	// (0x00054e74) aid_touch_area_cam4

0xaa9e,	// (0x00059300) battery_pane_cp01

0x66e4,	// (0x00054f46) main_camera4_pane_g6_ParamLimits

0x66e4,	// (0x00054f46) main_camera4_pane_g6

0x670e,	// (0x00054f70) main_camera4_pane_t2_ParamLimits

0x670e,	// (0x00054f70) main_camera4_pane_t2

0x0001,

0xf8f0,	// (0x0005e152) main_camera4_pane_t_ParamLimits

0xf8f0,	// (0x0005e152) main_camera4_pane_t

0x6743,	// (0x00054fa5) aid_touch_area_vid4_ParamLimits

0x6743,	// (0x00054fa5) aid_touch_area_vid4

0x6797,	// (0x00054ff9) main_video4_pane_g5_ParamLimits

0x6797,	// (0x00054ff9) main_video4_pane_g5

0x67bc,	// (0x0005501e) vid4_progress_pane_ParamLimits

0x67bc,	// (0x0005501e) vid4_progress_pane

0xd762,	// (0x0005bfc4) main_cset_slider_pane_g18_ParamLimits

0xd762,	// (0x0005bfc4) main_cset_slider_pane_g18

0xd94d,	// (0x0005c1af) cell_cam4_burst_pane_g2_ParamLimits

0xd94d,	// (0x0005c1af) cell_cam4_burst_pane_g2

0x0001,

0xfa4f,	// (0x0005e2b1) cell_cam4_burst_pane_g_ParamLimits

0xfa4f,	// (0x0005e2b1) cell_cam4_burst_pane_g

0xa19f,	// (0x00058a01) bg_cl_pane_ParamLimits

0xa19f,	// (0x00058a01) bg_cl_pane

0x76a3,	// (0x00055f05) cl_header_pane_ParamLimits

0x76a3,	// (0x00055f05) cl_header_pane

0x76b7,	// (0x00055f19) cl_listscroll_pane_ParamLimits

0x76b7,	// (0x00055f19) cl_listscroll_pane

0xda9b,	// (0x0005c2fd) bg_cl_pane_g1

0xdaa3,	// (0x0005c305) bg_cl_pane_g2

0xdaab,	// (0x0005c30d) bg_cl_pane_g3

0xdab3,	// (0x0005c315) bg_cl_pane_g4

0xdabb,	// (0x0005c31d) bg_cl_pane_g5

0xdac3,	// (0x0005c325) bg_cl_pane_g6

0xdacb,	// (0x0005c32d) bg_cl_pane_g7

0xdad3,	// (0x0005c335) bg_cl_pane_g8

0xdadb,	// (0x0005c33d) bg_cl_pane_g9

0x0008,

0xfa8a,	// (0x0005e2ec) bg_cl_pane_g

0x76c7,	// (0x00055f29) aid_height_cl_leading_ParamLimits

0x76c7,	// (0x00055f29) aid_height_cl_leading

0x76d3,	// (0x00055f35) aid_height_cl_text_ParamLimits

0x76d3,	// (0x00055f35) aid_height_cl_text

0x9a3c,	// (0x0005829e) bg_cl_header_pane_ParamLimits

0x9a3c,	// (0x0005829e) bg_cl_header_pane

0x76f2,	// (0x00055f54) cl_header_pane_g1_ParamLimits

0x76f2,	// (0x00055f54) cl_header_pane_g1

0x7708,	// (0x00055f6a) cl_header_pane_t1_ParamLimits

0x7708,	// (0x00055f6a) cl_header_pane_t1

0xdae3,	// (0x0005c345) cl_list_pane

0xd735,	// (0x0005bf97) hc_scroll_pane_cp01

0xa636,	// (0x00058e98) bg_cl_header_pane_g1

0xd617,	// (0x0005be79) bg_cl_header_pane_g2

0xa656,	// (0x00058eb8) bg_cl_header_pane_g3

0xd627,	// (0x0005be89) bg_cl_header_pane_g4

0xd61f,	// (0x0005be81) bg_cl_header_pane_g5

0xd85c,	// (0x0005c0be) bg_cl_header_pane_g6

0xd63f,	// (0x0005bea1) bg_cl_header_pane_g7

0xd647,	// (0x0005bea9) bg_cl_header_pane_g8

0xd637,	// (0x0005be99) bg_cl_header_pane_g9

0x0008,

0xfa9d,	// (0x0005e2ff) bg_cl_header_pane_g

0x7721,	// (0x00055f83) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x7721,	// (0x00055f83) hc_cl_list_double_graphic_heading_pane

0x7734,	// (0x00055f96) hc_cl_list_single_graphic_pane_ParamLimits

0x7734,	// (0x00055f96) hc_cl_list_single_graphic_pane

0x774c,	// (0x00055fae) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x774c,	// (0x00055fae) hc_cl_list_single_graphic_pane_g1

0x7758,	// (0x00055fba) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x7758,	// (0x00055fba) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfab0,	// (0x0005e312) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfab0,	// (0x0005e312) hc_cl_list_single_graphic_pane_g

0x776c,	// (0x00055fce) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x776c,	// (0x00055fce) hc_cl_list_single_graphic_pane_t1

0x774c,	// (0x00055fae) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x774c,	// (0x00055fae) hc_cl_list_double_graphic_heading_pane_g1

0x7781,	// (0x00055fe3) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x7781,	// (0x00055fe3) hc_cl_list_double_graphic_heading_pane_g2

0x7795,	// (0x00055ff7) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x7795,	// (0x00055ff7) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfab5,	// (0x0005e317) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfab5,	// (0x0005e317) hc_cl_list_double_graphic_heading_pane_g

0x77a9,	// (0x0005600b) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x77a9,	// (0x0005600b) hc_cl_list_double_graphic_heading_pane_t1

0x77be,	// (0x00056020) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x77be,	// (0x00056020) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfabc,	// (0x0005e31e) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfabc,	// (0x0005e31e) hc_cl_list_double_graphic_heading_pane_t

0x77d3,	// (0x00056035) vid4_progress_pane_g1

0x77e5,	// (0x00056047) vid4_progress_pane_g2

0xa747,	// (0x00058fa9) vid4_progress_pane_g3

0xabf1,	// (0x00059453) vid4_progress_pane_g4

0x0004,

0xfac1,	// (0x0005e323) vid4_progress_pane_g

0xac0f,	// (0x00059471) vid4_progress_pane_t1

0xac24,	// (0x00059486) vid4_progress_pane_t2

0x0002,

0xfacc,	// (0x0005e32e) vid4_progress_pane_t

0xac4f,	// (0x000594b1) wait_bar_pane_cp07

0xc9ea,	// (0x0005b24c) blid_firmament_pane_ParamLimits

0xca2d,	// (0x0005b28f) popup_blid_sat_info2_window_g1

0xca51,	// (0x0005b2b3) popup_blid_sat_info2_window_t3

0xca5f,	// (0x0005b2c1) popup_blid_sat_info2_window_t4

0xca6d,	// (0x0005b2cf) popup_blid_sat_info2_window_t5

0xca7b,	// (0x0005b2dd) popup_blid_sat_info2_window_t6

0xca8b,	// (0x0005b2ed) popup_blid_sat_info2_window_t7

0xca99,	// (0x0005b2fb) popup_blid_sat_info2_window_t8

0xcaa7,	// (0x0005b309) popup_blid_sat_info2_window_t9

0xcab5,	// (0x0005b317) popup_blid_sat_info2_window_t10

0xcb7d,	// (0x0005b3df) aid_firma_cardinal_ParamLimits

0xcb91,	// (0x0005b3f3) blid_firmament_pane_t1_ParamLimits

0xcba8,	// (0x0005b40a) blid_firmament_pane_t2_ParamLimits

0xcbbf,	// (0x0005b421) blid_firmament_pane_t3_ParamLimits

0xcbd6,	// (0x0005b438) blid_firmament_pane_t4_ParamLimits

0xf6da,	// (0x0005df3c) blid_firmament_pane_t_ParamLimits

0xcbed,	// (0x0005b44f) blid_sat_info_pane_ParamLimits

0x9a3c,	// (0x0005829e) main_cam_set_pane_ParamLimits

0x5c69,	// (0x000544cb) aid_size_cell_colour_35_ParamLimits

0x5c89,	// (0x000544eb) aid_size_cell_colour_112_ParamLimits

0x5ca9,	// (0x0005450b) aid_size_cell_effect_ParamLimits

0xc7ac,	// (0x0005b00e) bg_tb_trans_pane_cp02_ParamLimits

0xaed5,	// (0x00059737) heading_imed_pane_ParamLimits

0x5cc9,	// (0x0005452b) listscroll_imed_pane_ParamLimits

0xbdce,	// (0x0005a630) popup_call2_audio_first_window_g5_ParamLimits

0xbdce,	// (0x0005a630) popup_call2_audio_first_window_g5

0x627a,	// (0x00054adc) aid_size_touch_image3_arrow_left_ParamLimits

0x627a,	// (0x00054adc) aid_size_touch_image3_arrow_left

0x62a6,	// (0x00054b08) aid_size_touch_image3_arrow_right_ParamLimits

0x62a6,	// (0x00054b08) aid_size_touch_image3_arrow_right

0xac3a,	// (0x0005949c) vid4_progress_pane_t3

0x5fe8,	// (0x0005484a) main_hwr_training_symbol_option_pane_ParamLimits

0x5fe8,	// (0x0005484a) main_hwr_training_symbol_option_pane

0xd3fd,	// (0x0005bc5f) popup_hwr_training_preview_window_ParamLimits

0xd3fd,	// (0x0005bc5f) popup_hwr_training_preview_window

0x6008,	// (0x0005486a) hwr_training_navi_pane_g5_ParamLimits

0x6008,	// (0x0005486a) hwr_training_navi_pane_g5

0xd605,	// (0x0005be67) popup_char_count_window

0x9a3c,	// (0x0005829e) bg_popup_sub_pane_cp20_ParamLimits

0x7252,	// (0x00055ab4) list_vitu2_match_list_pane_ParamLimits

0x7261,	// (0x00055ac3) vitu2_page_scroll_pane_ParamLimits

0x7261,	// (0x00055ac3) vitu2_page_scroll_pane

0xdaec,	// (0x0005c34e) list_single_hwr_training_symbol_option_pane_ParamLimits

0xdaec,	// (0x0005c34e) list_single_hwr_training_symbol_option_pane

0xdaff,	// (0x0005c361) list_single_hwr_training_symbol_option_pane_g1

0xdb07,	// (0x0005c369) list_single_hwr_training_symbol_option_pane_t1

0xdb15,	// (0x0005c377) bg_button_pane_cp023

0xdb1e,	// (0x0005c380) bg_button_pane_cp024

0x7834,	// (0x00056096) vitu2_page_scroll_pane_g1

0x783c,	// (0x0005609e) vitu2_page_scroll_pane_g2

0x0001,

0xfad3,	// (0x0005e335) vitu2_page_scroll_pane_g

0x7846,	// (0x000560a8) vitu2_page_scroll_pane_t1

0xc94a,	// (0x0005b1ac) popup_char_count_window_g1

0xdb51,	// (0x0005c3b3) popup_char_count_window_g2

0xdb5a,	// (0x0005c3bc) popup_char_count_window_g3

0x0002,

0xfad8,	// (0x0005e33a) popup_char_count_window_g

0xdb63,	// (0x0005c3c5) popup_char_count_window_t1

0x99e3,	// (0x00058245) main_vded2_pane

0xd0e6,	// (0x0005b948) aid_size_cell_imed_line

0xd0f0,	// (0x0005b952) grid_imed_line_width_pane

0xab58,	// (0x000593ba) vid4_indicators_pane_g4

0xdb71,	// (0x0005c3d3) cell_imed_line_width_pane_ParamLimits

0xdb71,	// (0x0005c3d3) cell_imed_line_width_pane

0xdb87,	// (0x0005c3e9) cell_imed_line_width_pane_g1

0xd2dc,	// (0x0005bb3e) cell_imed_line_width_pane_g2

0x0001,

0xfadf,	// (0x0005e341) cell_imed_line_width_pane_g

0x7855,	// (0x000560b7) main_vded2_pane_g1_ParamLimits

0x7855,	// (0x000560b7) main_vded2_pane_g1

0x7870,	// (0x000560d2) main_vded2_pane_g2_ParamLimits

0x7870,	// (0x000560d2) main_vded2_pane_g2

0x0001,

0xfae4,	// (0x0005e346) main_vded2_pane_g_ParamLimits

0xfae4,	// (0x0005e346) main_vded2_pane_g

0x7882,	// (0x000560e4) vded2_slider_pane_ParamLimits

0x7882,	// (0x000560e4) vded2_slider_pane

0x7892,	// (0x000560f4) aid_size_touch_vded2_end

0x789c,	// (0x000560fe) aid_size_touch_vded2_playhead

0xdb90,	// (0x0005c3f2) aid_size_touch_vded2_start

0xdb98,	// (0x0005c3fa) vded2_slider_bg_pane

0xdba1,	// (0x0005c403) vded2_slider_pane_g1

0xdbaa,	// (0x0005c40c) vded2_slider_pane_g2

0x78a6,	// (0x00056108) vded2_slider_pane_g3

0x0002,

0xfae9,	// (0x0005e34b) vded2_slider_pane_g

0xdbb2,	// (0x0005c414) vded2_slider_bg_pane_g1

0xdbbb,	// (0x0005c41d) vded2_slider_bg_pane_g2

0xdbc4,	// (0x0005c426) vded2_slider_bg_pane_g3

0x0002,

0xfaf0,	// (0x0005e352) vded2_slider_bg_pane_g

0x393a,	// (0x0005219c) aid_postcard_touch_down_pane_ParamLimits

0x393a,	// (0x0005219c) aid_postcard_touch_down_pane

0x3952,	// (0x000521b4) aid_postcard_touch_up_pane_ParamLimits

0x3952,	// (0x000521b4) aid_postcard_touch_up_pane

0x99e3,	// (0x00058245) main_blid2_pane

0xc7ba,	// (0x0005b01c) popup_blid2_search_window

0x99e3,	// (0x00058245) blid2_gps_pane

0x99e3,	// (0x00058245) blid2_navig_pane

0x99e3,	// (0x00058245) blid2_search_pane

0x99e3,	// (0x00058245) blid2_tripm_pane

0x78b1,	// (0x00056113) blid2_search_pane_g1_ParamLimits

0x78b1,	// (0x00056113) blid2_search_pane_g1

0x78c4,	// (0x00056126) blid2_search_pane_t1_ParamLimits

0x78c4,	// (0x00056126) blid2_search_pane_t1

0x78d6,	// (0x00056138) aid_size_cell_blid2_gps_ParamLimits

0x78d6,	// (0x00056138) aid_size_cell_blid2_gps

0x78ee,	// (0x00056150) blid2_gps_pane_g1_ParamLimits

0x78ee,	// (0x00056150) blid2_gps_pane_g1

0x7902,	// (0x00056164) grid_blid2_satellite_pane_ParamLimits

0x7902,	// (0x00056164) grid_blid2_satellite_pane

0x791a,	// (0x0005617c) blid2_navig_pane_g1_ParamLimits

0x791a,	// (0x0005617c) blid2_navig_pane_g1

0x7926,	// (0x00056188) blid2_navig_pane_t1_ParamLimits

0x7926,	// (0x00056188) blid2_navig_pane_t1

0x7941,	// (0x000561a3) blid2_navig_pane_t2_ParamLimits

0x7941,	// (0x000561a3) blid2_navig_pane_t2

0x0001,

0xfaf7,	// (0x0005e359) blid2_navig_pane_t_ParamLimits

0xfaf7,	// (0x0005e359) blid2_navig_pane_t

0x795c,	// (0x000561be) blid2_navig_ring_pane_ParamLimits

0x795c,	// (0x000561be) blid2_navig_ring_pane

0x7977,	// (0x000561d9) blid2_speed_pane_ParamLimits

0x7977,	// (0x000561d9) blid2_speed_pane

0x7983,	// (0x000561e5) blid2_tripm_pane_g1_ParamLimits

0x7983,	// (0x000561e5) blid2_tripm_pane_g1

0x799e,	// (0x00056200) blid2_tripm_pane_g2_ParamLimits

0x799e,	// (0x00056200) blid2_tripm_pane_g2

0x79b2,	// (0x00056214) blid2_tripm_pane_g3_ParamLimits

0x79b2,	// (0x00056214) blid2_tripm_pane_g3

0x79c6,	// (0x00056228) blid2_tripm_pane_g4_ParamLimits

0x79c6,	// (0x00056228) blid2_tripm_pane_g4

0x79da,	// (0x0005623c) blid2_tripm_pane_g5_ParamLimits

0x79da,	// (0x0005623c) blid2_tripm_pane_g5

0x0005,

0xfafc,	// (0x0005e35e) blid2_tripm_pane_g_ParamLimits

0xfafc,	// (0x0005e35e) blid2_tripm_pane_g

0x7a00,	// (0x00056262) blid2_tripm_pane_t1_ParamLimits

0x7a00,	// (0x00056262) blid2_tripm_pane_t1

0x7a19,	// (0x0005627b) blid2_tripm_pane_t2_ParamLimits

0x7a19,	// (0x0005627b) blid2_tripm_pane_t2

0x7a32,	// (0x00056294) blid2_tripm_pane_t3_ParamLimits

0x7a32,	// (0x00056294) blid2_tripm_pane_t3

0x0003,

0xfb09,	// (0x0005e36b) blid2_tripm_pane_t_ParamLimits

0xfb09,	// (0x0005e36b) blid2_tripm_pane_t

0x7a79,	// (0x000562db) cell_blid2_satellite_pane_ParamLimits

0x7a79,	// (0x000562db) cell_blid2_satellite_pane

0x7a97,	// (0x000562f9) cell_blid2_satellite_pane_g1

0xdbcd,	// (0x0005c42f) cell_blid2_satellite_pane_t1

0xcbfd,	// (0x0005b45f) blid2_speed_pane_g1

0xdbdb,	// (0x0005c43d) blid2_speed_pane_t1

0xdbe9,	// (0x0005c44b) blid2_speed_pane_t2

0x0001,

0xfb12,	// (0x0005e374) blid2_speed_pane_t

0xcbfd,	// (0x0005b45f) blid2_navig_ring_pane_g1

0x7aa0,	// (0x00056302) blid2_navig_ring_pane_g2

0x7aa8,	// (0x0005630a) blid2_navig_ring_pane_g3

0x7ab0,	// (0x00056312) blid2_navig_ring_pane_g4

0x7ab8,	// (0x0005631a) blid2_navig_ring_pane_g5

0x0004,

0xfb17,	// (0x0005e379) blid2_navig_ring_pane_g

0x99e3,	// (0x00058245) bg_popup_window_pane_cp011

0xdbf7,	// (0x0005c459) popup_blid2_search_window_g1

0xdbff,	// (0x0005c461) popup_blid2_search_window_t1

0xdc0d,	// (0x0005c46f) popup_blid2_search_window_t2

0x0001,

0xfb22,	// (0x0005e384) popup_blid2_search_window_t

0xa545,	// (0x00058da7) main_browser_pane_g1

0xa19f,	// (0x00058a01) main_browser_pane_ParamLimits

0x9a3c,	// (0x0005829e) bg_button_pane_cp011_ParamLimits

0x6ada,	// (0x0005533c) cell_vitu2_function_pane_g1_ParamLimits

0xc7ac,	// (0x0005b00e) bg_popup_sub_pane_cp22_ParamLimits

0xffa6,	// (0x0004e808) input_focus_pane_cp08_ParamLimits

0x73ef,	// (0x00055c51) popup_vitu2_query_button_pane_ParamLimits

0x73ef,	// (0x00055c51) popup_vitu2_query_button_pane

0xffbd,	// (0x0004e81f) popup_vitu2_query_input_button_pane

0xd897,	// (0x0005c0f9) popup_vitu2_query_window_g1_ParamLimits

0xffc7,	// (0x0004e829) popup_vitu2_query_window_g2_ParamLimits

0xfa23,	// (0x0005e285) popup_vitu2_query_window_g_ParamLimits

0x99e3,	// (0x00058245) bg_button_pane_cp026

0x7ac0,	// (0x00056322) popup_vitu2_query_input_button_pane_g1

0x99e3,	// (0x00058245) bg_button_pane_cp025

0xdc1b,	// (0x0005c47d) popup_vitu2_query_button_pane_t1

0x505e,	// (0x000538c0) main_mp3_pane_t6

0x506c,	// (0x000538ce) popup_slider_window_cp01

0xaabc,	// (0x0005931e) cam4_battery_pane

0xab11,	// (0x00059373) cam4_battery_pane_cp02

0xabe9,	// (0x0005944b) cam4_battery_pane_cp01

0xabe9,	// (0x0005944b) cam4_battery_pane_cp03

0xcbfd,	// (0x0005b45f) cam4_battery_pane_g1

0xdc29,	// (0x0005c48b) cam4_battery_pane_g2

0x0001,

0xfb27,	// (0x0005e389) cam4_battery_pane_g

0xcac3,	// (0x0005b325) popup_blid_sat_info2_window_t11

0x3256,	// (0x00051ab8) aid_size_touch_mv_arrow_left_ParamLimits

0x327f,	// (0x00051ae1) aid_size_touch_mv_arrow_right_ParamLimits

0xb2d5,	// (0x00059b37) navi_pane_g1_ParamLimits

0x32be,	// (0x00051b20) navi_pane_g2_ParamLimits

0x32ec,	// (0x00051b4e) navi_pane_g3_ParamLimits

0xf3ec,	// (0x0005dc4e) navi_pane_g_ParamLimits

0x3346,	// (0x00051ba8) navi_pane_mv_t1_ParamLimits

0x5cd5,	// (0x00054537) grid_imed_effect_pane_ParamLimits

0x1dfb,	// (0x0005065d) aid_placing_vt_slider_lsc

0xa490,	// (0x00058cf2) aid_placing_vt_slider_prt

0x9a3c,	// (0x0005829e) bg_tb_trans_pane_cp01_ParamLimits

0xcd4d,	// (0x0005b5af) popup_image_details_window_g1_ParamLimits

0xcd60,	// (0x0005b5c2) popup_image_details_window_g2_ParamLimits

0xcd75,	// (0x0005b5d7) popup_image_details_window_g3_ParamLimits

0xcd75,	// (0x0005b5d7) popup_image_details_window_g3

0xf71f,	// (0x0005df81) popup_image_details_window_g_ParamLimits

0xcd89,	// (0x0005b5eb) popup_image_details_window_t1_ParamLimits

0xcd9b,	// (0x0005b5fd) popup_image_details_window_t2_ParamLimits

0xcdb4,	// (0x0005b616) popup_image_details_window_t3_ParamLimits

0xcdc8,	// (0x0005b62a) popup_image_details_window_t4_ParamLimits

0xcde3,	// (0x0005b645) popup_image_details_window_t5_ParamLimits

0xf726,	// (0x0005df88) popup_image_details_window_t_ParamLimits

0x76df,	// (0x00055f41) cl_header_name_pane_ParamLimits

0x76df,	// (0x00055f41) cl_header_name_pane

0x7ac8,	// (0x0005632a) cl_header_name_pane_t1_ParamLimits

0x7ac8,	// (0x0005632a) cl_header_name_pane_t1

0x7ae9,	// (0x0005634b) cl_header_name_pane_t2_ParamLimits

0x7ae9,	// (0x0005634b) cl_header_name_pane_t2

0x7b2b,	// (0x0005638d) cl_header_name_pane_t3_ParamLimits

0x7b2b,	// (0x0005638d) cl_header_name_pane_t3

0x0002,

0xfb2c,	// (0x0005e38e) cl_header_name_pane_t_ParamLimits

0xfb2c,	// (0x0005e38e) cl_header_name_pane_t

0x3317,	// (0x00051b79) navi_pane_mv_g2_ParamLimits

0xd5df,	// (0x0005be41) field_vitu2_entry_pane_g1_ParamLimits

0xd5eb,	// (0x0005be4d) field_vitu2_entry_pane_g2_ParamLimits

0xd5f7,	// (0x0005be59) field_vitu2_entry_pane_g3_ParamLimits

0xd5f7,	// (0x0005be59) field_vitu2_entry_pane_g3

0xf922,	// (0x0005e184) field_vitu2_entry_pane_g_ParamLimits

0x6a51,	// (0x000552b3) cell_vitu2_itu_pane_g1_ParamLimits

0x6a61,	// (0x000552c3) cell_vitu2_itu_pane_g2_ParamLimits

0x6a61,	// (0x000552c3) cell_vitu2_itu_pane_g2

0x0001,

0xf92e,	// (0x0005e190) cell_vitu2_itu_pane_g_ParamLimits

0xf92e,	// (0x0005e190) cell_vitu2_itu_pane_g

0x9a3c,	// (0x0005829e) bg_vkb2_func_pane_cp05_ParamLimits

0x9a3c,	// (0x0005829e) bg_vkb2_func_pane_cp05

0x9a3c,	// (0x0005829e) bg_vkb2_func_pane_cp03

0x9a3c,	// (0x0005829e) bg_vkb2_func_pane_cp04

0x9a3c,	// (0x0005829e) bg_vkb2_func_pane_cp10_ParamLimits

0x9a3c,	// (0x0005829e) bg_vkb2_func_pane_cp10

0x00e4,	// (0x0004e946) bg_vkb2_func_pane_cp08

0x7689,	// (0x00055eeb) bg_vkb2_func_pane_cp06

0x7697,	// (0x00055ef9) bg_vkb2_func_pane_cp07

0xdb27,	// (0x0005c389) bg_vkb2_func_pane_cp11_ParamLimits

0xdb27,	// (0x0005c389) bg_vkb2_func_pane_cp11

0xdb3c,	// (0x0005c39e) bg_vkb2_func_pane_cp12_ParamLimits

0xdb3c,	// (0x0005c39e) bg_vkb2_func_pane_cp12

0x99e3,	// (0x00058245) bg_vkb2_func_pane_cp09

0xd617,	// (0x0005be79) bg_vkb2_func_pane_g1

0xa656,	// (0x00058eb8) bg_vkb2_func_pane_g2

0xd61f,	// (0x0005be81) bg_vkb2_func_pane_g3

0xd627,	// (0x0005be89) bg_vkb2_func_pane_g4

0xd85c,	// (0x0005c0be) bg_vkb2_func_pane_g5

0xd63f,	// (0x0005bea1) bg_vkb2_func_pane_g6

0xd647,	// (0x0005bea9) bg_vkb2_func_pane_g7

0xd637,	// (0x0005be99) bg_vkb2_func_pane_g8

0xa636,	// (0x00058e98) bg_vkb2_func_pane_g9

0x0008,

0xfb33,	// (0x0005e395) bg_vkb2_func_pane_g

0x79ee,	// (0x00056250) blid2_tripm_pane_g6_ParamLimits

0x79ee,	// (0x00056250) blid2_tripm_pane_g6

0xd4b5,	// (0x0005bd17) mp4_progress_pane_g1

0x7a65,	// (0x000562c7) blid2_tripm_values_pane_ParamLimits

0x7a65,	// (0x000562c7) blid2_tripm_values_pane

0x7b5c,	// (0x000563be) blid2_tripm_values_pane_t1

0x7b6a,	// (0x000563cc) blid2_tripm_values_pane_t2

0x7b78,	// (0x000563da) blid2_tripm_values_pane_t3

0x7b86,	// (0x000563e8) blid2_tripm_values_pane_t4

0x7b94,	// (0x000563f6) blid2_tripm_values_pane_t5

0x7ba2,	// (0x00056404) blid2_tripm_values_pane_t6

0x7bb0,	// (0x00056412) blid2_tripm_values_pane_t7

0x7bbe,	// (0x00056420) blid2_tripm_values_pane_t8

0x7bcc,	// (0x0005642e) blid2_tripm_values_pane_t9

0x0008,

0xfb46,	// (0x0005e3a8) blid2_tripm_values_pane_t

0x1e38,	// (0x0005069a) call_video_pane_t1_ParamLimits

0x1e52,	// (0x000506b4) call_video_pane_t2_ParamLimits

0xf26e,	// (0x0005dad0) call_video_pane_t_ParamLimits

0xfd5b,	// (0x0004e5bd) msg_header_pane_g1_ParamLimits

0xb500,	// (0x00059d62) msg_header_pane_g2_ParamLimits

0xb500,	// (0x00059d62) msg_header_pane_g2

0x0001,

0xf48f,	// (0x0005dcf1) msg_header_pane_g_ParamLimits

0xf48f,	// (0x0005dcf1) msg_header_pane_g

0xa19f,	// (0x00058a01) main_clock2_pane_ParamLimits

0x59bc,	// (0x0005421e) grid_clock2_toolbar_pane_ParamLimits

0x59bc,	// (0x0005421e) grid_clock2_toolbar_pane

0x59bc,	// (0x0005421e) listscroll_clock2_pane_ParamLimits

0x59bc,	// (0x0005421e) listscroll_clock2_pane

0x5ab3,	// (0x00054315) main_clock2_pane_t3_ParamLimits

0x5ab3,	// (0x00054315) main_clock2_pane_t3

0x5ad7,	// (0x00054339) main_clock2_pane_t4_ParamLimits

0x5ad7,	// (0x00054339) main_clock2_pane_t4

0xdc33,	// (0x0005c495) cell_clock2_toolbar_pane

0xdc3b,	// (0x0005c49d) cell_clock2_toolbar_pane_cp01

0xdc3b,	// (0x0005c49d) cell_clock2_toolbar_pane_cp02

0xdc43,	// (0x0005c4a5) cell_clock2_toolbar_pane_cp03

0xdc4b,	// (0x0005c4ad) list_clock2_pane

0xb23b,	// (0x00059a9d) scroll_pane_cp10

0xdc53,	// (0x0005c4b5) list_single_clock2_pane_ParamLimits

0xdc53,	// (0x0005c4b5) list_single_clock2_pane

0xb375,	// (0x00059bd7) list_highlight_pane_cp08

0xdc60,	// (0x0005c4c2) list_single_clock2_pane_t1

0xdc6e,	// (0x0005c4d0) list_single_clock2_pane_t2

0x0001,

0xfb59,	// (0x0005e3bb) list_single_clock2_pane_t

0x99e3,	// (0x00058245) bg_button_pane_cp10

0xdc7c,	// (0x0005c4de) cell_clock2_toolbar_pane_g1

0x38c6,	// (0x00052128) aid_main_viewer_pane_g1_ParamLimits

0x38c6,	// (0x00052128) aid_main_viewer_pane_g1

0x38d4,	// (0x00052136) aid_main_viewer_pane_g2_ParamLimits

0x38d4,	// (0x00052136) aid_main_viewer_pane_g2

0x38e2,	// (0x00052144) aid_main_viewer_pane_g3_ParamLimits

0x38e2,	// (0x00052144) aid_main_viewer_pane_g3

0x38f1,	// (0x00052153) aid_main_viewer_pane_g4_ParamLimits

0x38f1,	// (0x00052153) aid_main_viewer_pane_g4

0x0003,

0xf4a0,	// (0x0005dd02) aid_main_viewer_pane_g_ParamLimits

0xf4a0,	// (0x0005dd02) aid_main_viewer_pane_g

0x4244,	// (0x00052aa6) main_calc_pane_ParamLimits

0x4258,	// (0x00052aba) main_dialer2_pane_ParamLimits

0x99e3,	// (0x00058245) main_cam6_pane

0x99e3,	// (0x00058245) main_vid6_pane

0x59c8,	// (0x0005422a) listscroll_gen_pane_cp06_ParamLimits

0x59c8,	// (0x0005422a) listscroll_gen_pane_cp06

0x5afa,	// (0x0005435c) main_clock2_pane_t5_ParamLimits

0x5afa,	// (0x0005435c) main_clock2_pane_t5

0x5b5a,	// (0x000543bc) aid_call2_pane_cp10_ParamLimits

0x5b6c,	// (0x000543ce) aid_call_pane_cp10_ParamLimits

0xb2aa,	// (0x00059b0c) popup_clock_analogue_window_cp10_g1_ParamLimits

0xb2aa,	// (0x00059b0c) popup_clock_analogue_window_cp10_g2_ParamLimits

0x5b7e,	// (0x000543e0) popup_clock_analogue_window_cp10_g3_ParamLimits

0x5b7e,	// (0x000543e0) popup_clock_analogue_window_cp10_g4_ParamLimits

0xb2aa,	// (0x00059b0c) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf7db,	// (0x0005e03d) popup_clock_analogue_window_cp10_g_ParamLimits

0x5b94,	// (0x000543f6) popup_clock_analogue_window_cp10_t1_ParamLimits

0x6227,	// (0x00054a89) cell_dialer2_keypad_pane_g2_ParamLimits

0x6227,	// (0x00054a89) cell_dialer2_keypad_pane_g2

0x0001,

0xf8c1,	// (0x0005e123) cell_dialer2_keypad_pane_g_ParamLimits

0xf8c1,	// (0x0005e123) cell_dialer2_keypad_pane_g

0x6243,	// (0x00054aa5) cell_dialer2_keypad_pane_t1

0x6e03,	// (0x00055665) main_cset_text2_pane_ParamLimits

0x6e03,	// (0x00055665) main_cset_text2_pane

0xda8f,	// (0x0005c2f1) area_vitu2_query_pane_g1_ParamLimits

0x00ab,	// (0x0004e90d) area_vitu2_query_pane_g2_ParamLimits

0xfa76,	// (0x0005e2d8) area_vitu2_query_pane_g_ParamLimits

0x7665,	// (0x00055ec7) area_vitu2_query_pane_t7_ParamLimits

0x7665,	// (0x00055ec7) area_vitu2_query_pane_t7

0x7689,	// (0x00055eeb) bg_button_pane_cp018_ParamLimits

0x7697,	// (0x00055ef9) bg_button_pane_cp021_ParamLimits

0x00e4,	// (0x0004e946) bg_button_pane_cp022_ParamLimits

0x00e4,	// (0x0004e946) bg_vkb2_func_pane_cp08_ParamLimits

0x7689,	// (0x00055eeb) bg_vkb2_func_pane_cp06_ParamLimits

0x7697,	// (0x00055ef9) bg_vkb2_func_pane_cp07_ParamLimits

0x00f5,	// (0x0004e957) input_focus_pane_cp09_ParamLimits

0xac63,	// (0x000594c5) cam6_autofocus_pane_ParamLimits

0xac63,	// (0x000594c5) cam6_autofocus_pane

0x7bda,	// (0x0005643c) cam6_image_uncrop_pane_ParamLimits

0x7bda,	// (0x0005643c) cam6_image_uncrop_pane

0x7be9,	// (0x0005644b) cam6_indi_pane_ParamLimits

0x7be9,	// (0x0005644b) cam6_indi_pane

0x7bff,	// (0x00056461) cam6_mode_pane_ParamLimits

0x7bff,	// (0x00056461) cam6_mode_pane

0x7c11,	// (0x00056473) cam6_timer_pane_ParamLimits

0x7c11,	// (0x00056473) cam6_timer_pane

0x7c1d,	// (0x0005647f) cam6_zoom_pane_ParamLimits

0x7c1d,	// (0x0005647f) cam6_zoom_pane

0x7c2b,	// (0x0005648d) cam6_mode_pane_g1_ParamLimits

0x7c2b,	// (0x0005648d) cam6_mode_pane_g1

0x7c3b,	// (0x0005649d) cam6_mode_pane_g2_ParamLimits

0x7c3b,	// (0x0005649d) cam6_mode_pane_g2

0x7c4b,	// (0x000564ad) cam6_mode_pane_g3_ParamLimits

0x7c4b,	// (0x000564ad) cam6_mode_pane_g3

0x7c5b,	// (0x000564bd) cam6_mode_pane_g4_ParamLimits

0x7c5b,	// (0x000564bd) cam6_mode_pane_g4

0x0003,

0xfb5e,	// (0x0005e3c0) cam6_mode_pane_g_ParamLimits

0xfb5e,	// (0x0005e3c0) cam6_mode_pane_g

0xdc84,	// (0x0005c4e6) bg_tb_trans_pane_cp08_ParamLimits

0xdc84,	// (0x0005c4e6) bg_tb_trans_pane_cp08

0xdc92,	// (0x0005c4f4) cam6_battery_pane_ParamLimits

0xdc92,	// (0x0005c4f4) cam6_battery_pane

0xdca8,	// (0x0005c50a) cam6_indi_pane_g1_ParamLimits

0xdca8,	// (0x0005c50a) cam6_indi_pane_g1

0xdcba,	// (0x0005c51c) cam6_indi_pane_g2_ParamLimits

0xdcba,	// (0x0005c51c) cam6_indi_pane_g2

0xdccc,	// (0x0005c52e) cam6_indi_pane_g3_ParamLimits

0xdccc,	// (0x0005c52e) cam6_indi_pane_g3

0x0002,

0xfb67,	// (0x0005e3c9) cam6_indi_pane_g_ParamLimits

0xfb67,	// (0x0005e3c9) cam6_indi_pane_g

0xdcde,	// (0x0005c540) cam6_indi_pane_t1_ParamLimits

0xdcde,	// (0x0005c540) cam6_indi_pane_t1

0x6804,	// (0x00055066) cam6_autofocus_pane_g1

0x680c,	// (0x0005506e) cam6_autofocus_pane_g2

0x6814,	// (0x00055076) cam6_autofocus_pane_g3

0x681c,	// (0x0005507e) cam6_autofocus_pane_g4

0x0003,

0xfb6e,	// (0x0005e3d0) cam6_autofocus_pane_g

0xdd04,	// (0x0005c566) cam6_timer_pane_g1

0xdd0c,	// (0x0005c56e) cam6_timer_pane_t1

0xdd1a,	// (0x0005c57c) cam6_zoom_cont_pane

0xdd22,	// (0x0005c584) cam6_zoom_pane_g1

0xdd2a,	// (0x0005c58c) cam6_zoom_pane_g2

0x7c6b,	// (0x000564cd) cam6_zoom_pane_g3

0x0002,

0xfb77,	// (0x0005e3d9) cam6_zoom_pane_g

0xcbfd,	// (0x0005b45f) cam6_battery_pane_g1

0xcbfd,	// (0x0005b45f) cam6_battery_pane_g2

0x0001,

0xf6e3,	// (0x0005df45) cam6_battery_pane_g

0xdd32,	// (0x0005c594) cam6_zoom_cont_pane_g1

0xdd3b,	// (0x0005c59d) cam6_zoom_cont_pane_g2

0xdd44,	// (0x0005c5a6) cam6_zoom_cont_pane_g3

0x0002,

0xfb7e,	// (0x0005e3e0) cam6_zoom_cont_pane_g

0x7c88,	// (0x000564ea) cam6_mode_pane_cp_ParamLimits

0x7c88,	// (0x000564ea) cam6_mode_pane_cp

0x7c1d,	// (0x0005647f) cam6_zoom_pane_cp_ParamLimits

0x7c1d,	// (0x0005647f) cam6_zoom_pane_cp

0x7c9a,	// (0x000564fc) vid6_image_uncrop_cif_pane_ParamLimits

0x7c9a,	// (0x000564fc) vid6_image_uncrop_cif_pane

0x7caa,	// (0x0005650c) vid6_image_uncrop_nhd_pane_ParamLimits

0x7caa,	// (0x0005650c) vid6_image_uncrop_nhd_pane

0x7bda,	// (0x0005643c) vid6_image_uncrop_vga_pane_ParamLimits

0x7bda,	// (0x0005643c) vid6_image_uncrop_vga_pane

0x7cb9,	// (0x0005651b) vid6_image_uncrop_wvga_pane_ParamLimits

0x7cb9,	// (0x0005651b) vid6_image_uncrop_wvga_pane

0x7cc8,	// (0x0005652a) vid6_indi_pane_ParamLimits

0x7cc8,	// (0x0005652a) vid6_indi_pane

0xdc84,	// (0x0005c4e6) bg_tb_trans_pane_cp09_ParamLimits

0xdc84,	// (0x0005c4e6) bg_tb_trans_pane_cp09

0xdd5c,	// (0x0005c5be) cam6_battery_pane_cp_ParamLimits

0xdd5c,	// (0x0005c5be) cam6_battery_pane_cp

0xdd68,	// (0x0005c5ca) vid6_indi_pane_g1_ParamLimits

0xdd68,	// (0x0005c5ca) vid6_indi_pane_g1

0xdd7a,	// (0x0005c5dc) vid6_indi_pane_g2_ParamLimits

0xdd7a,	// (0x0005c5dc) vid6_indi_pane_g2

0xdd8c,	// (0x0005c5ee) vid6_indi_pane_g3_ParamLimits

0xdd8c,	// (0x0005c5ee) vid6_indi_pane_g3

0xdda3,	// (0x0005c605) vid6_indi_pane_g4_ParamLimits

0xdda3,	// (0x0005c605) vid6_indi_pane_g4

0xddba,	// (0x0005c61c) vid6_indi_pane_g5_ParamLimits

0xddba,	// (0x0005c61c) vid6_indi_pane_g5

0x0004,

0xfb85,	// (0x0005e3e7) vid6_indi_pane_g_ParamLimits

0xfb85,	// (0x0005e3e7) vid6_indi_pane_g

0xddd4,	// (0x0005c636) vid6_indi_pane_t1_ParamLimits

0xddd4,	// (0x0005c636) vid6_indi_pane_t1

0xddea,	// (0x0005c64c) vid6_indi_pane_t2_ParamLimits

0xddea,	// (0x0005c64c) vid6_indi_pane_t2

0xde12,	// (0x0005c674) vid6_indi_pane_t3_ParamLimits

0xde12,	// (0x0005c674) vid6_indi_pane_t3

0xde3a,	// (0x0005c69c) vid6_indi_pane_t4_ParamLimits

0xde3a,	// (0x0005c69c) vid6_indi_pane_t4

0x0003,

0xfb90,	// (0x0005e3f2) vid6_indi_pane_t_ParamLimits

0xfb90,	// (0x0005e3f2) vid6_indi_pane_t

0xde5e,	// (0x0005c6c0) wait_bar_pane_cp08

0x7ce0,	// (0x00056542) main_cset_text2_pane_t1_ParamLimits

0x7ce0,	// (0x00056542) main_cset_text2_pane_t1

0x7c73,	// (0x000564d5) listscroll_gen_pane_cp06_t1_ParamLimits

0x7c73,	// (0x000564d5) listscroll_gen_pane_cp06_t1

0x99e3,	// (0x00058245) main_cam6_set_pane

0xce2d,	// (0x0005b68f) bg_tb_trans_pane_cp06_ParamLimits

0xaac4,	// (0x00059326) cam4_indicators_pane_g1_ParamLimits

0xaad5,	// (0x00059337) cam4_indicators_pane_g2_ParamLimits

0xf8fe,	// (0x0005e160) cam4_indicators_pane_g_ParamLimits

0xaaed,	// (0x0005934f) cam4_indicators_pane_t1_ParamLimits

0x9a3c,	// (0x0005829e) bg_tb_trans_pane_cp07_ParamLimits

0xab1b,	// (0x0005937d) vid4_indicators_pane_g1_ParamLimits

0xab31,	// (0x00059393) vid4_indicators_pane_g2_ParamLimits

0xab45,	// (0x000593a7) vid4_indicators_pane_g3_ParamLimits

0xab58,	// (0x000593ba) vid4_indicators_pane_g4_ParamLimits

0xf910,	// (0x0005e172) vid4_indicators_pane_g_ParamLimits

0xab76,	// (0x000593d8) vid4_indicators_pane_t1_ParamLimits

0x77d3,	// (0x00056035) vid4_progress_pane_g1_ParamLimits

0x77e5,	// (0x00056047) vid4_progress_pane_g2_ParamLimits

0xa747,	// (0x00058fa9) vid4_progress_pane_g3_ParamLimits

0xabf1,	// (0x00059453) vid4_progress_pane_g4_ParamLimits

0xfac1,	// (0x0005e323) vid4_progress_pane_g_ParamLimits

0xac0f,	// (0x00059471) vid4_progress_pane_t1_ParamLimits

0xac24,	// (0x00059486) vid4_progress_pane_t2_ParamLimits

0xac3a,	// (0x0005949c) vid4_progress_pane_t3_ParamLimits

0xfacc,	// (0x0005e32e) vid4_progress_pane_t_ParamLimits

0xac4f,	// (0x000594b1) wait_bar_pane_cp07_ParamLimits

0x7cfe,	// (0x00056560) main_cam6_set_pane_g2_ParamLimits

0x7cfe,	// (0x00056560) main_cam6_set_pane_g2

0x7d24,	// (0x00056586) main_cset6_listscroll_pane_ParamLimits

0x7d24,	// (0x00056586) main_cset6_listscroll_pane

0x7d42,	// (0x000565a4) main_cset6_slider_pane_ParamLimits

0x7d42,	// (0x000565a4) main_cset6_slider_pane

0x7d58,	// (0x000565ba) main_cset6_text2_pane_ParamLimits

0x7d58,	// (0x000565ba) main_cset6_text2_pane

0xde6d,	// (0x0005c6cf) main_cset6_text_pane

0xde75,	// (0x0005c6d7) main_cset_list_pane_copy1_ParamLimits

0xde75,	// (0x0005c6d7) main_cset_list_pane_copy1

0xde85,	// (0x0005c6e7) scroll_pane_cp028_copy1

0x2ed3,	// (0x00051735) cset_list_set_pane_copy1

0x7d66,	// (0x000565c8) aid_position_infowindow_above_copy1

0x7d6e,	// (0x000565d0) aid_position_infowindow_below_copy1

0x0123,	// (0x0004e985) cset_list_set_pane_g1_copy1

0x012b,	// (0x0004e98d) cset_list_set_pane_g3_copy1_ParamLimits

0x012b,	// (0x0004e98d) cset_list_set_pane_g3_copy1

0x013a,	// (0x0004e99c) cset_list_set_pane_t1_copy1_ParamLimits

0x013a,	// (0x0004e99c) cset_list_set_pane_t1_copy1

0x9a3c,	// (0x0005829e) list_highlight_pane_cp021_copy1_ParamLimits

0x9a3c,	// (0x0005829e) list_highlight_pane_cp021_copy1

0xde8e,	// (0x0005c6f0) cset6_slider_pane_ParamLimits

0xde8e,	// (0x0005c6f0) cset6_slider_pane

0xdeba,	// (0x0005c71c) main_cset6_slider_pane_g1_ParamLimits

0xdeba,	// (0x0005c71c) main_cset6_slider_pane_g1

0x7d76,	// (0x000565d8) main_cset6_slider_pane_g2_ParamLimits

0x7d76,	// (0x000565d8) main_cset6_slider_pane_g2

0xdee2,	// (0x0005c744) main_cset6_slider_pane_g3_ParamLimits

0xdee2,	// (0x0005c744) main_cset6_slider_pane_g3

0x7d9e,	// (0x00056600) main_cset6_slider_pane_g4_ParamLimits

0x7d9e,	// (0x00056600) main_cset6_slider_pane_g4

0x7daa,	// (0x0005660c) main_cset6_slider_pane_g5_ParamLimits

0x7daa,	// (0x0005660c) main_cset6_slider_pane_g5

0xd74a,	// (0x0005bfac) main_cset6_slider_pane_g7_ParamLimits

0xd74a,	// (0x0005bfac) main_cset6_slider_pane_g7

0xd756,	// (0x0005bfb8) main_cset6_slider_pane_g8_ParamLimits

0xd756,	// (0x0005bfb8) main_cset6_slider_pane_g8

0x6eb2,	// (0x00055714) main_cset6_slider_pane_g9_ParamLimits

0x6eb2,	// (0x00055714) main_cset6_slider_pane_g9

0x6ebe,	// (0x00055720) main_cset6_slider_pane_g10_ParamLimits

0x6ebe,	// (0x00055720) main_cset6_slider_pane_g10

0x6eca,	// (0x0005572c) main_cset6_slider_pane_g11_ParamLimits

0x6eca,	// (0x0005572c) main_cset6_slider_pane_g11

0x6ed6,	// (0x00055738) main_cset6_slider_pane_g12_ParamLimits

0x6ed6,	// (0x00055738) main_cset6_slider_pane_g12

0x6ee2,	// (0x00055744) main_cset6_slider_pane_g13_ParamLimits

0x6ee2,	// (0x00055744) main_cset6_slider_pane_g13

0x6eee,	// (0x00055750) main_cset6_slider_pane_g14_ParamLimits

0x6eee,	// (0x00055750) main_cset6_slider_pane_g14

0x7db8,	// (0x0005661a) main_cset6_slider_pane_g15_ParamLimits

0x7db8,	// (0x0005661a) main_cset6_slider_pane_g15

0x6f12,	// (0x00055774) main_cset6_slider_pane_g16_ParamLimits

0x6f12,	// (0x00055774) main_cset6_slider_pane_g16

0x6f20,	// (0x00055782) main_cset6_slider_pane_g17_ParamLimits

0x6f20,	// (0x00055782) main_cset6_slider_pane_g17

0x0011,

0xfb99,	// (0x0005e3fb) main_cset6_slider_pane_g_ParamLimits

0xfb99,	// (0x0005e3fb) main_cset6_slider_pane_g

0xdeee,	// (0x0005c750) main_cset6_slider_pane_t1_ParamLimits

0xdeee,	// (0x0005c750) main_cset6_slider_pane_t1

0x7de8,	// (0x0005664a) main_cset6_slider_pane_t2_ParamLimits

0x7de8,	// (0x0005664a) main_cset6_slider_pane_t2

0x7e13,	// (0x00056675) main_cset6_slider_pane_t3_ParamLimits

0x7e13,	// (0x00056675) main_cset6_slider_pane_t3

0x7e3e,	// (0x000566a0) main_cset6_slider_pane_t4_ParamLimits

0x7e3e,	// (0x000566a0) main_cset6_slider_pane_t4

0x7e69,	// (0x000566cb) main_cset6_slider_pane_t5_ParamLimits

0x7e69,	// (0x000566cb) main_cset6_slider_pane_t5

0xdf2f,	// (0x0005c791) main_cset6_slider_pane_t7_ParamLimits

0xdf2f,	// (0x0005c791) main_cset6_slider_pane_t7

0x7e96,	// (0x000566f8) main_cset6_slider_pane_t8_ParamLimits

0x7e96,	// (0x000566f8) main_cset6_slider_pane_t8

0x7eba,	// (0x0005671c) main_cset6_slider_pane_t9_ParamLimits

0x7eba,	// (0x0005671c) main_cset6_slider_pane_t9

0x7ede,	// (0x00056740) main_cset6_slider_pane_t10_ParamLimits

0x7ede,	// (0x00056740) main_cset6_slider_pane_t10

0x7f02,	// (0x00056764) main_cset6_slider_pane_t11_ParamLimits

0x7f02,	// (0x00056764) main_cset6_slider_pane_t11

0xdf65,	// (0x0005c7c7) main_cset6_slider_pane_t14_ParamLimits

0xdf65,	// (0x0005c7c7) main_cset6_slider_pane_t14

0xdf9e,	// (0x0005c800) main_cset6_slider_pane_t15_ParamLimits

0xdf9e,	// (0x0005c800) main_cset6_slider_pane_t15

0x000b,

0xfbbe,	// (0x0005e420) main_cset6_slider_pane_t_ParamLimits

0xfbbe,	// (0x0005e420) main_cset6_slider_pane_t

0xd80e,	// (0x0005c070) cset_slider_pane_g1_copy1

0xd817,	// (0x0005c079) cset_slider_pane_g2_copy1

0xd820,	// (0x0005c082) cset_slider_pane_g3_copy1

0x99e3,	// (0x00058245) bg_popup_sub_pane_cp011_copy1

0xdfd7,	// (0x0005c839) main_cset_text_pane_g1_copy1

0xd8ab,	// (0x0005c10d) main_cset_text_pane_t1_copy1

0xd8b9,	// (0x0005c11b) main_cset_text_pane_t2_copy1

0xd8c7,	// (0x0005c129) main_cset_text_pane_t3_copy1

0xd8d5,	// (0x0005c137) main_cset_text_pane_t4_copy1

0xd8e3,	// (0x0005c145) main_cset_text_pane_t5_copy1

0xdfdf,	// (0x0005c841) main_cset_text_pane_t6_copy1

0xdfed,	// (0x0005c84f) main_cset_text_pane_t7_copy1

0x7ce0,	// (0x00056542) main_cset_text2_pane_t1_copy1

0x9a3c,	// (0x0005829e) main_ncimui_pane

0x44e6,	// (0x00052d48) popup_query_ncimui_window_ParamLimits

0x44e6,	// (0x00052d48) popup_query_ncimui_window

0x51ce,	// (0x00053a30) field_cale_ev2_pane_g4_ParamLimits

0x51ce,	// (0x00053a30) field_cale_ev2_pane_g4

0x60f9,	// (0x0005495b) cell_video_dialer_keypad_pane_g2_ParamLimits

0x60f9,	// (0x0005495b) cell_video_dialer_keypad_pane_g2

0x0001,

0xf89c,	// (0x0005e0fe) cell_video_dialer_keypad_pane_g_ParamLimits

0xf89c,	// (0x0005e0fe) cell_video_dialer_keypad_pane_g

0x6111,	// (0x00054973) cell_video_dialer_keypad_pane_t1

0x99e3,	// (0x00058245) bg_popup_window_pane_cp012

0xb127,	// (0x00059989) heading_pane_cp06

0xe019,	// (0x0005c87b) ncim_query_content_pane

0x99e3,	// (0x00058245) bg_popup_heading_pane_cp01

0xe021,	// (0x0005c883) ncim_heading_pane_t1

0xe02f,	// (0x0005c891) ncim_indicator_popup_pane

0xe041,	// (0x0005c8a3) ncim_query_button_pane

0xe057,	// (0x0005c8b9) ncim_query_content_pane_t1

0xe069,	// (0x0005c8cb) ncim_query_content_pane_t2

0x0005,

0xfc02,	// (0x0005e464) ncim_query_content_pane_t

0xe0a3,	// (0x0005c905) ncim_query_list_pane

0xe0b5,	// (0x0005c917) ncim_query_popup_pane

0xe02f,	// (0x0005c891) ncim_indicator_popup_pane_ParamLimits

0x8078,	// (0x000568da) ncim_query_content_pane_g1_ParamLimits

0x8078,	// (0x000568da) ncim_query_content_pane_g1

0xe057,	// (0x0005c8b9) ncim_query_content_pane_t1_ParamLimits

0xe069,	// (0x0005c8cb) ncim_query_content_pane_t2_ParamLimits

0x8084,	// (0x000568e6) ncim_query_content_pane_t3_ParamLimits

0x8084,	// (0x000568e6) ncim_query_content_pane_t3

0x80ac,	// (0x0005690e) ncim_query_content_pane_t4_ParamLimits

0x80ac,	// (0x0005690e) ncim_query_content_pane_t4

0x80d4,	// (0x00056936) ncim_query_content_pane_t5_ParamLimits

0x80d4,	// (0x00056936) ncim_query_content_pane_t5

0xe07b,	// (0x0005c8dd) ncim_query_content_pane_t6_ParamLimits

0xe07b,	// (0x0005c8dd) ncim_query_content_pane_t6

0xfc02,	// (0x0005e464) ncim_query_content_pane_t_ParamLimits

0xe0a3,	// (0x0005c905) ncim_query_list_pane_ParamLimits

0xe0b5,	// (0x0005c917) ncim_query_popup_pane_ParamLimits

0xe0c9,	// (0x0005c92b) wait_bar_pane_cp04

0x99e3,	// (0x00058245) input_focus_pane_cp011

0xe0d1,	// (0x0005c933) ncim_query_popup_pane_t1

0xe0df,	// (0x0005c941) ncim_list_query_list_pane_ParamLimits

0xe0df,	// (0x0005c941) ncim_list_query_list_pane

0x99e3,	// (0x00058245) bg_button_pane_cp027

0xe0f2,	// (0x0005c954) ncim_query_button_pane_g1

0x99e3,	// (0x00058245) list_highlight_pane_cp012

0xe0fc,	// (0x0005c95e) ncim_list_query_list_pane_g1

0xe104,	// (0x0005c966) ncim_list_query_list_pane_t1

0xaae1,	// (0x00059343) cam4_indicators_pane_g3_ParamLimits

0xaae1,	// (0x00059343) cam4_indicators_pane_g3

0xab64,	// (0x000593c6) vid4_indicators_pane_g5_ParamLimits

0xab64,	// (0x000593c6) vid4_indicators_pane_g5

0xac00,	// (0x00059462) vid4_progress_pane_g5_ParamLimits

0xac00,	// (0x00059462) vid4_progress_pane_g5

0x7f66,	// (0x000567c8) main_ncimui_pane_g1

0x7fcc,	// (0x0005682e) ncimui_group_query_pane_ParamLimits

0x7fcc,	// (0x0005682e) ncimui_group_query_pane

0x8014,	// (0x00056876) ncimui_list_pane_ParamLimits

0x8014,	// (0x00056876) ncimui_list_pane

0x803b,	// (0x0005689d) ncimui_text_pane_ParamLimits

0x803b,	// (0x0005689d) ncimui_text_pane

0x80fc,	// (0x0005695e) ncimui_text_pane_t1_ParamLimits

0x80fc,	// (0x0005695e) ncimui_text_pane_t1

0xe112,	// (0x0005c974) ncimui_list_single_graphic_pane_ParamLimits

0xe112,	// (0x0005c974) ncimui_list_single_graphic_pane

0x811a,	// (0x0005697c) ncimui_query_pane_ParamLimits

0x811a,	// (0x0005697c) ncimui_query_pane

0x99e3,	// (0x00058245) list_highlight_pane_cp013

0xe122,	// (0x0005c984) ncim_list_query_list_pane_t1_copy1

0xe0fc,	// (0x0005c95e) ncim_list_single_graphic_pane_g1

0xe130,	// (0x0005c992) ncim_query_button_pane_cp01

0xe13c,	// (0x0005c99e) ncim_query_entry_pane_ParamLimits

0xe13c,	// (0x0005c99e) ncim_query_entry_pane

0xe14f,	// (0x0005c9b1) ncimui_query_pane_g1

0xe15b,	// (0x0005c9bd) ncimui_query_pane_t1_ParamLimits

0xe15b,	// (0x0005c9bd) ncimui_query_pane_t1

0x9a3c,	// (0x0005829e) input_focus_pane_cp012

0xe174,	// (0x0005c9d6) ncim_query_entry_pane_t1

0xa19f,	// (0x00058a01) main_im_pane_ParamLimits

0x9a3c,	// (0x0005829e) main_mobtv_pane_ParamLimits

0x9a3c,	// (0x0005829e) main_mobtv_pane

0x7dd0,	// (0x00056632) main_cset6_slider_pane_g18_ParamLimits

0x7dd0,	// (0x00056632) main_cset6_slider_pane_g18

0x7ddc,	// (0x0005663e) main_cset6_slider_pane_g19_ParamLimits

0x7ddc,	// (0x0005663e) main_cset6_slider_pane_g19

0xac71,	// (0x000594d3) bg_main_mobtv_pane_ParamLimits

0xac71,	// (0x000594d3) bg_main_mobtv_pane

0x812d,	// (0x0005698f) main_mobtv_info_pane

0x8138,	// (0x0005699a) main_mobtv_loading_pane_ParamLimits

0x8138,	// (0x0005699a) main_mobtv_loading_pane

0xe186,	// (0x0005c9e8) main_mobtv_pg_channel_list_pane

0xe190,	// (0x0005c9f2) main_mobtv_pg_hdr_pane

0x8145,	// (0x000569a7) main_mobtv_programe_curr_pane_ParamLimits

0x8145,	// (0x000569a7) main_mobtv_programe_curr_pane

0x8152,	// (0x000569b4) main_mobtv_programe_next_pane_ParamLimits

0x8152,	// (0x000569b4) main_mobtv_programe_next_pane

0xe199,	// (0x0005c9fb) popup_mobtv_noti_window

0xcbfd,	// (0x0005b45f) main_tv_pg_hdr_pane_g1

0xe1a3,	// (0x0005ca05) main_tv_pg_hdr_pane_g2

0xe1ab,	// (0x0005ca0d) main_tv_pg_hdr_pane_g3

0xe1b3,	// (0x0005ca15) main_tv_pg_hdr_pane_g4

0xe1bb,	// (0x0005ca1d) main_tv_pg_hdr_pane_g5

0xe1c5,	// (0x0005ca27) main_tv_pg_hdr_pane_g6

0xe1cf,	// (0x0005ca31) main_tv_pg_hdr_pane_g7

0xe1d9,	// (0x0005ca3b) main_tv_pg_hdr_pane_g8

0xe1e3,	// (0x0005ca45) main_tv_pg_hdr_pane_g9

0xe1ed,	// (0x0005ca4f) main_tv_pg_hdr_pane_g10

0xe1f7,	// (0x0005ca59) main_tv_pg_hdr_pane_g11

0x000a,

0xfc0f,	// (0x0005e471) main_tv_pg_hdr_pane_g

0xe201,	// (0x0005ca63) main_tv_pg_hdr_pane_t1

0xe20f,	// (0x0005ca71) main_tv_pg_hdr_pane_t2

0xe21d,	// (0x0005ca7f) main_tv_pg_hdr_pane_t3

0xe22d,	// (0x0005ca8f) main_tv_pg_hdr_pane_t4

0xe23d,	// (0x0005ca9f) main_tv_pg_hdr_pane_t5

0x0004,

0xfc26,	// (0x0005e488) main_tv_pg_hdr_pane_t

0xe24d,	// (0x0005caaf) single_mobtv_pg_channel_pane_ParamLimits

0xe24d,	// (0x0005caaf) single_mobtv_pg_channel_pane

0xe25f,	// (0x0005cac1) single_mobtv_pg_channel_table_pane

0xe268,	// (0x0005caca) single_mobtv_pg_channel_thumb_pane

0xe271,	// (0x0005cad3) single_tv_pg_channel_pane_g1

0xe27a,	// (0x0005cadc) single_tv_pg_channel_pane_g2

0x0001,

0xfc31,	// (0x0005e493) single_tv_pg_channel_pane_g

0xce2d,	// (0x0005b68f) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xce2d,	// (0x0005b68f) bg_single_mobtv_pg_channel_thumb_pane

0xe283,	// (0x0005cae5) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xe283,	// (0x0005cae5) single_mobtv_pg_channel_thumb_pane_g1

0xe291,	// (0x0005caf3) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xe291,	// (0x0005caf3) single_mobtv_pg_channel_thumb_pane_g2

0xe29d,	// (0x0005caff) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xe29d,	// (0x0005caff) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfc36,	// (0x0005e498) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfc36,	// (0x0005e498) single_mobtv_pg_channel_thumb_pane_g

0xe2a9,	// (0x0005cb0b) single_mobtv_pg_channel_thumb_pane_t1

0xe2b7,	// (0x0005cb19) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc3d,	// (0x0005e49f) single_mobtv_pg_channel_thumb_pane_t

0xcbfd,	// (0x0005b45f) bg_single_mobtv_pg_channel_table_pane_g1

0xcbfd,	// (0x0005b45f) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf6e3,	// (0x0005df45) bg_single_mobtv_pg_channel_table_pane_g

0xe2c5,	// (0x0005cb27) single_mobtv_pg_channel_table_pane_t1

0xe2d3,	// (0x0005cb35) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc42,	// (0x0005e4a4) single_mobtv_pg_channel_table_pane_t

0x8167,	// (0x000569c9) main_mobtv_info_pane_g1_ParamLimits

0x8167,	// (0x000569c9) main_mobtv_info_pane_g1

0x8185,	// (0x000569e7) main_mobtv_info_pane_t1_ParamLimits

0x8185,	// (0x000569e7) main_mobtv_info_pane_t1

0x81fd,	// (0x00056a5f) main_mobtv_info_pane_t2_ParamLimits

0x81fd,	// (0x00056a5f) main_mobtv_info_pane_t2

0x0002,

0xfc4c,	// (0x0005e4ae) main_mobtv_info_pane_t_ParamLimits

0xfc4c,	// (0x0005e4ae) main_mobtv_info_pane_t

0x828c,	// (0x00056aee) wait_bar_pane_cp05

0x829e,	// (0x00056b00) main_mobtv_loading_pane_g1_ParamLimits

0x829e,	// (0x00056b00) main_mobtv_loading_pane_g1

0x82af,	// (0x00056b11) main_mobtv_loading_pane_g2_ParamLimits

0x82af,	// (0x00056b11) main_mobtv_loading_pane_g2

0x82bb,	// (0x00056b1d) main_mobtv_loading_pane_g3_ParamLimits

0x82bb,	// (0x00056b1d) main_mobtv_loading_pane_g3

0x0002,

0xfc53,	// (0x0005e4b5) main_mobtv_loading_pane_g_ParamLimits

0xfc53,	// (0x0005e4b5) main_mobtv_loading_pane_g

0xe2e1,	// (0x0005cb43) main_mobtv_loading_pane_t1_ParamLimits

0xe2e1,	// (0x0005cb43) main_mobtv_loading_pane_t1

0xe2f9,	// (0x0005cb5b) main_mobtv_loading_pane_t2_ParamLimits

0xe2f9,	// (0x0005cb5b) main_mobtv_loading_pane_t2

0x0001,

0xfc5a,	// (0x0005e4bc) main_mobtv_loading_pane_t_ParamLimits

0xfc5a,	// (0x0005e4bc) main_mobtv_loading_pane_t

0x82ce,	// (0x00056b30) wait_bar_pane_cp06_ParamLimits

0x82ce,	// (0x00056b30) wait_bar_pane_cp06

0xe31d,	// (0x0005cb7f) main_mobtv_programe_curr_pane_t1

0xe32b,	// (0x0005cb8d) main_mobtv_programe_curr_pane_t2

0x0001,

0xfc5f,	// (0x0005e4c1) main_mobtv_programe_curr_pane_t

0xe339,	// (0x0005cb9b) main_mobtv_programe_next_pane_t1

0xe347,	// (0x0005cba9) main_mobtv_programe_next_pane_t2

0xe355,	// (0x0005cbb7) main_mobtv_programe_next_pane_t3

0x0002,

0xfc64,	// (0x0005e4c6) main_mobtv_programe_next_pane_t

0x99e3,	// (0x00058245) bg_popup_mobtv_noti_window_pane

0xe363,	// (0x0005cbc5) popup_mobtv_noti_window_g1

0xe36b,	// (0x0005cbcd) popup_mobtv_noti_window_t1

0xe379,	// (0x0005cbdb) popup_mobtv_noti_window_t2

0x0001,

0xfc6b,	// (0x0005e4cd) popup_mobtv_noti_window_t

0xcbfd,	// (0x0005b45f) bg_popup_mobtv_noti_window_pane_g1

0x99e3,	// (0x00058245) sc_clock_pane

0x99e3,	// (0x00058245) main_fs_bigclock_pane

0x7a4f,	// (0x000562b1) blid2_tripm_pane_t4_ParamLimits

0x7a4f,	// (0x000562b1) blid2_tripm_pane_t4

0x82dd,	// (0x00056b3f) sc_clock_pane_g1_ParamLimits

0x82dd,	// (0x00056b3f) sc_clock_pane_g1

0x82ef,	// (0x00056b51) sc_clock_pane_t1_ParamLimits

0x82ef,	// (0x00056b51) sc_clock_pane_t1

0x8313,	// (0x00056b75) sc_clock_pane_t2_ParamLimits

0x8313,	// (0x00056b75) sc_clock_pane_t2

0x832b,	// (0x00056b8d) sc_clock_pane_t3_ParamLimits

0x832b,	// (0x00056b8d) sc_clock_pane_t3

0x0004,

0xfc70,	// (0x0005e4d2) sc_clock_pane_t_ParamLimits

0xfc70,	// (0x0005e4d2) sc_clock_pane_t

0x8ff6,	// (0x00057858) main_fs_bigclock_indicator_pane_ParamLimits

0x8ff6,	// (0x00057858) main_fs_bigclock_indicator_pane

0x83e7,	// (0x00056c49) main_fs_bigclock_pane_g1_ParamLimits

0x83e7,	// (0x00056c49) main_fs_bigclock_pane_g1

0x9002,	// (0x00057864) main_fs_bigclock_pane_t1_ParamLimits

0x9002,	// (0x00057864) main_fs_bigclock_pane_t1

0x9014,	// (0x00057876) main_fs_bigclock_pane_t2_ParamLimits

0x9014,	// (0x00057876) main_fs_bigclock_pane_t2

0x9028,	// (0x0005788a) main_fs_bigclock_pane_t3_ParamLimits

0x9028,	// (0x0005788a) main_fs_bigclock_pane_t3

0x0002,

0xfe7f,	// (0x0005e6e1) main_fs_bigclock_pane_t_ParamLimits

0xfe7f,	// (0x0005e6e1) main_fs_bigclock_pane_t

0xebe5,	// (0x0005d447) main_fs_bigclock_indicator_pane_g1

0xe049,	// (0x0005c8ab) ncim_query_content_pane_g2_ParamLimits

0xe049,	// (0x0005c8ab) ncim_query_content_pane_g2

0x0001,

0xfbfd,	// (0x0005e45f) ncim_query_content_pane_g_ParamLimits

0xfbfd,	// (0x0005e45f) ncim_query_content_pane_g

0x8342,	// (0x00056ba4) sc_clock_pane_t4_ParamLimits

0x8342,	// (0x00056ba4) sc_clock_pane_t4

0x9a3c,	// (0x0005829e) main_radioblah_pane

0xd564,	// (0x0005bdc6) cell_call4_button_pane_t1_copy1_ParamLimits

0xd564,	// (0x0005bdc6) cell_call4_button_pane_t1_copy1

0x7f7e,	// (0x000567e0) main_ncimui_pane_t1_ParamLimits

0x7f7e,	// (0x000567e0) main_ncimui_pane_t1

0x7f98,	// (0x000567fa) main_ncimui_pane_t2_ParamLimits

0x7f98,	// (0x000567fa) main_ncimui_pane_t2

0x0002,

0xfbf6,	// (0x0005e458) main_ncimui_pane_t_ParamLimits

0xfbf6,	// (0x0005e458) main_ncimui_pane_t

0xe4cc,	// (0x0005cd2e) main_radioblah_anim_pane_ParamLimits

0xe4cc,	// (0x0005cd2e) main_radioblah_anim_pane

0xe4dd,	// (0x0005cd3f) main_radioblah_info_pane_ParamLimits

0xe4dd,	// (0x0005cd3f) main_radioblah_info_pane

0xe4f1,	// (0x0005cd53) main_radioblah_pane_t1_ParamLimits

0xe4f1,	// (0x0005cd53) main_radioblah_pane_t1

0xe50d,	// (0x0005cd6f) main_radioblah_pane_t2_ParamLimits

0xe50d,	// (0x0005cd6f) main_radioblah_pane_t2

0x0003,

0xfc91,	// (0x0005e4f3) main_radioblah_pane_t_ParamLimits

0xfc91,	// (0x0005e4f3) main_radioblah_pane_t

0x8444,	// (0x00056ca6) main_radioblah_rocker_ctrl_pane_ParamLimits

0x8444,	// (0x00056ca6) main_radioblah_rocker_ctrl_pane

0xe555,	// (0x0005cdb7) main_radioblah_info_pane_t1_ParamLimits

0xe555,	// (0x0005cdb7) main_radioblah_info_pane_t1

0x849c,	// (0x00056cfe) main_radioblah_info_pane_t2_ParamLimits

0x849c,	// (0x00056cfe) main_radioblah_info_pane_t2

0x0003,

0xfc9a,	// (0x0005e4fc) main_radioblah_info_pane_t_ParamLimits

0xfc9a,	// (0x0005e4fc) main_radioblah_info_pane_t

0xcbfd,	// (0x0005b45f) main_radioblah_rocker_ctrl_pane_g1

0x854c,	// (0x00056dae) main_radioblah_rocker_ctrl_pane_g2

0x8554,	// (0x00056db6) main_radioblah_rocker_ctrl_pane_g3

0x855c,	// (0x00056dbe) main_radioblah_rocker_ctrl_pane_g4

0x8564,	// (0x00056dc6) main_radioblah_rocker_ctrl_pane_g5

0x856c,	// (0x00056dce) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfca3,	// (0x0005e505) main_radioblah_rocker_ctrl_pane_g

0x7ce0,	// (0x00056542) main_cset_text2_pane_t1_copy1_ParamLimits

0xaab2,	// (0x00059314) cam4_image_uncrop_qvga_pane

0xab07,	// (0x00059369) vid4_image_uncrop_qcif_pane

0xac63,	// (0x000594c5) cam6_image_uncrop_qvga_pane_ParamLimits

0xac63,	// (0x000594c5) cam6_image_uncrop_qvga_pane

0xdd4c,	// (0x0005c5ae) vid6_image_uncrop_qcif_pane_ParamLimits

0xdd4c,	// (0x0005c5ae) vid6_image_uncrop_qcif_pane

0x99e3,	// (0x00058245) bg_popup_preview_window_pane_cp03

0xdffb,	// (0x0005c85d) list_cset_text2_pane

0xe003,	// (0x0005c865) main_cset6_text2_pane_g1

0xe00b,	// (0x0005c86d) main_cset6_text2_pane_t1

0x8574,	// (0x00056dd6) list_cset_text2_pane_t1_ParamLimits

0x8574,	// (0x00056dd6) list_cset_text2_pane_t1

0x9a3c,	// (0x0005829e) main_radioblah_pane_ParamLimits

0x8278,	// (0x00056ada) main_mobtv_info_pane_t3_ParamLimits

0x8278,	// (0x00056ada) main_mobtv_info_pane_t3

0x8432,	// (0x00056c94) main_radioblah_pane_g1

0x846c,	// (0x00056cce) main_radioblah_info_pane_g1

0x84f1,	// (0x00056d53) main_radioblah_info_pane_t3_ParamLimits

0x84f1,	// (0x00056d53) main_radioblah_info_pane_t3

0x2e1d,	// (0x0005167f) highlight_cell_cale_month_pane_ParamLimits

0x2e1d,	// (0x0005167f) highlight_cell_cale_month_pane

0x99e3,	// (0x00058245) main_phob_fisheye_pane

0xcf09,	// (0x0005b76b) scroll_pane_cp0031_ParamLimits

0xcf09,	// (0x0005b76b) scroll_pane_cp0031

0xde5e,	// (0x0005c6c0) wait_bar_pane_cp08_ParamLimits

0x2ed3,	// (0x00051735) cset_list_set_pane_copy1_ParamLimits

0xe58f,	// (0x0005cdf1) highlight_cell_cale_month_pane_g1

0x858d,	// (0x00056def) highlight_cell_cale_month_pane_t1

0xdae3,	// (0x0005c345) list_gen_pane_cp01

0xd735,	// (0x0005bf97) scroll_pane_01

0x859b,	// (0x00056dfd) list_single_double_fisheye_pane

0x01f4,	// (0x0004ea56) list_double_fisheye_pane_g1_ParamLimits

0x01f4,	// (0x0004ea56) list_double_fisheye_pane_g1

0x0200,	// (0x0004ea62) list_double_fisheye_pane_g2_ParamLimits

0x0200,	// (0x0004ea62) list_double_fisheye_pane_g2

0x85a4,	// (0x00056e06) list_double_fisheye_pane_g3_ParamLimits

0x85a4,	// (0x00056e06) list_double_fisheye_pane_g3

0x0004,

0xfcb0,	// (0x0005e512) list_double_fisheye_pane_g_ParamLimits

0xfcb0,	// (0x0005e512) list_double_fisheye_pane_g

0x0231,	// (0x0004ea93) list_double_fisheye_pane_t1_ParamLimits

0x0231,	// (0x0004ea93) list_double_fisheye_pane_t1

0x024c,	// (0x0004eaae) list_double_fisheye_pane_t2_ParamLimits

0x024c,	// (0x0004eaae) list_double_fisheye_pane_t2

0x0001,

0xfcbb,	// (0x0005e51d) list_double_fisheye_pane_t_ParamLimits

0xfcbb,	// (0x0005e51d) list_double_fisheye_pane_t

0x99e3,	// (0x00058245) main_call5_pane

0x836d,	// (0x00056bcf) sc_swipe_pane_ParamLimits

0x836d,	// (0x00056bcf) sc_swipe_pane

0x85c3,	// (0x00056e25) call5_image_pane_ParamLimits

0x85c3,	// (0x00056e25) call5_image_pane

0x85e0,	// (0x00056e42) call5_swipe_1_pane_ParamLimits

0x85e0,	// (0x00056e42) call5_swipe_1_pane

0x85f3,	// (0x00056e55) call5_swipe_2_pane_ParamLimits

0x85f3,	// (0x00056e55) call5_swipe_2_pane

0x8620,	// (0x00056e82) popup_call5_audio_first_window_ParamLimits

0x8620,	// (0x00056e82) popup_call5_audio_first_window

0xce2d,	// (0x0005b68f) call5_swipe_1_pane_g1_ParamLimits

0xce2d,	// (0x0005b68f) call5_swipe_1_pane_g1

0xe597,	// (0x0005cdf9) call5_swipe_1_pane_g2_ParamLimits

0xe597,	// (0x0005cdf9) call5_swipe_1_pane_g2

0x0001,

0xfcc0,	// (0x0005e522) call5_swipe_1_pane_g_ParamLimits

0xfcc0,	// (0x0005e522) call5_swipe_1_pane_g

0xe5d2,	// (0x0005ce34) call5_swipe_1_pane_t1_ParamLimits

0xe5d2,	// (0x0005ce34) call5_swipe_1_pane_t1

0xce2d,	// (0x0005b68f) call5_swipe_2_pane_g1_ParamLimits

0xce2d,	// (0x0005b68f) call5_swipe_2_pane_g1

0xe5e7,	// (0x0005ce49) call5_swipe_2_pane_g2_ParamLimits

0xe5e7,	// (0x0005ce49) call5_swipe_2_pane_g2

0x0001,

0xfcc5,	// (0x0005e527) call5_swipe_2_pane_g_ParamLimits

0xfcc5,	// (0x0005e527) call5_swipe_2_pane_g

0xe5f3,	// (0x0005ce55) call5_swipe_2_pane_t1_ParamLimits

0xe5f3,	// (0x0005ce55) call5_swipe_2_pane_t1

0xe608,	// (0x0005ce6a) sc_swipe_pane_g1_ParamLimits

0xe608,	// (0x0005ce6a) sc_swipe_pane_g1

0xe615,	// (0x0005ce77) sc_swipe_pane_g2_ParamLimits

0xe615,	// (0x0005ce77) sc_swipe_pane_g2

0x0001,

0xfcca,	// (0x0005e52c) sc_swipe_pane_g_ParamLimits

0xfcca,	// (0x0005e52c) sc_swipe_pane_g

0xe621,	// (0x0005ce83) sc_swipe_pane_t1_ParamLimits

0xe621,	// (0x0005ce83) sc_swipe_pane_t1

0x99e3,	// (0x00058245) main_cmail_launcher_pane

0x8635,	// (0x00056e97) aid_size_cell_cmail_l_ParamLimits

0x8635,	// (0x00056e97) aid_size_cell_cmail_l

0x864f,	// (0x00056eb1) grid_cmail_l_pane_ParamLimits

0x864f,	// (0x00056eb1) grid_cmail_l_pane

0x866a,	// (0x00056ecc) cell_cmail_l_pane_ParamLimits

0x866a,	// (0x00056ecc) cell_cmail_l_pane

0x8692,	// (0x00056ef4) cell_cmail_l_pane_g1_ParamLimits

0x8692,	// (0x00056ef4) cell_cmail_l_pane_g1

0x869e,	// (0x00056f00) cell_cmail_l_pane_t1_ParamLimits

0x869e,	// (0x00056f00) cell_cmail_l_pane_t1

0xe636,	// (0x0005ce98) cell_cmail_l_pane_t2_ParamLimits

0xe636,	// (0x0005ce98) cell_cmail_l_pane_t2

0x0001,

0xfccf,	// (0x0005e531) cell_cmail_l_pane_t_ParamLimits

0xfccf,	// (0x0005e531) cell_cmail_l_pane_t

0x9a3c,	// (0x0005829e) grid_highlight_pane_cp018_ParamLimits

0x9a3c,	// (0x0005829e) grid_highlight_pane_cp018

0x0b69,	// (0x0004f3cb) main2_pane_ParamLimits

0x0b69,	// (0x0004f3cb) main2_pane

0xa278,	// (0x00058ada) popup_sp_fs_action_menu_bg_pane_g1

0xa280,	// (0x00058ae2) popup_sp_fs_action_menu_bg_pane_g2

0xa288,	// (0x00058aea) popup_sp_fs_action_menu_bg_pane_g3

0xa290,	// (0x00058af2) popup_sp_fs_action_menu_bg_pane_g4

0xa298,	// (0x00058afa) popup_sp_fs_action_menu_bg_pane_g5

0xa2a0,	// (0x00058b02) popup_sp_fs_action_menu_bg_pane_g6

0xa2a8,	// (0x00058b0a) popup_sp_fs_action_menu_bg_pane_g7

0xa2b0,	// (0x00058b12) popup_sp_fs_action_menu_bg_pane_g8

0xa2b8,	// (0x00058b1a) popup_sp_fs_action_menu_bg_pane_g9

0xa2c0,	// (0x00058b22) popup_sp_fs_action_menu_bg_pane_g10

0xa2c0,	// (0x00058b22) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf186,	// (0x0005d9e8) popup_sp_fs_action_menu_bg_pane_g

0x1d6c,	// (0x000505ce) list_medium_line_x2_t3_g3_g1_ParamLimits

0x1d6c,	// (0x000505ce) list_medium_line_x2_t3_g3_g1

0xfb65,	// (0x0004e3c7) list_medium_line_x2_t3_g3_g2_ParamLimits

0xfb65,	// (0x0004e3c7) list_medium_line_x2_t3_g3_g2

0x1d78,	// (0x000505da) list_medium_line_x2_t3_g3_g3_ParamLimits

0x1d78,	// (0x000505da) list_medium_line_x2_t3_g3_g3

0x0002,

0xf238,	// (0x0005da9a) list_medium_line_x2_t3_g3_g_ParamLimits

0xf238,	// (0x0005da9a) list_medium_line_x2_t3_g3_g

0xfb71,	// (0x0004e3d3) list_medium_line_x2_t3_g3_t1_ParamLimits

0xfb71,	// (0x0004e3d3) list_medium_line_x2_t3_g3_t1

0xfb86,	// (0x0004e3e8) list_medium_line_x2_t3_g3_t2_ParamLimits

0xfb86,	// (0x0004e3e8) list_medium_line_x2_t3_g3_t2

0xfb9a,	// (0x0004e3fc) list_medium_line_x2_t3_g3_t3_ParamLimits

0xfb9a,	// (0x0004e3fc) list_medium_line_x2_t3_g3_t3

0x0002,

0xf23f,	// (0x0005daa1) list_medium_line_x2_t3_g3_t_ParamLimits

0xf23f,	// (0x0005daa1) list_medium_line_x2_t3_g3_t

0x1d6c,	// (0x000505ce) list_medium_line_x2_t3_g2_g1_ParamLimits

0x1d6c,	// (0x000505ce) list_medium_line_x2_t3_g2_g1

0x1d78,	// (0x000505da) list_medium_line_x2_t3_g2_g2_ParamLimits

0x1d78,	// (0x000505da) list_medium_line_x2_t3_g2_g2

0x0001,

0xf246,	// (0x0005daa8) list_medium_line_x2_t3_g2_g_ParamLimits

0xf246,	// (0x0005daa8) list_medium_line_x2_t3_g2_g

0xfbaf,	// (0x0004e411) list_medium_line_x2_t3_g2_t1_ParamLimits

0xfbaf,	// (0x0004e411) list_medium_line_x2_t3_g2_t1

0xfbc5,	// (0x0004e427) list_medium_line_x2_t3_g2_t2_ParamLimits

0xfbc5,	// (0x0004e427) list_medium_line_x2_t3_g2_t2

0xfbd7,	// (0x0004e439) list_medium_line_x2_t3_g2_t3_ParamLimits

0xfbd7,	// (0x0004e439) list_medium_line_x2_t3_g2_t3

0x0002,

0xf24b,	// (0x0005daad) list_medium_line_x2_t3_g2_t_ParamLimits

0xf24b,	// (0x0005daad) list_medium_line_x2_t3_g2_t

0x1d6c,	// (0x000505ce) list_medium_line_x2_t4_g4_g1_ParamLimits

0x1d6c,	// (0x000505ce) list_medium_line_x2_t4_g4_g1

0xfbf5,	// (0x0004e457) list_medium_line_x2_t4_g4_g2_ParamLimits

0xfbf5,	// (0x0004e457) list_medium_line_x2_t4_g4_g2

0xf050,	// (0x0005d8b2) list_medium_line_x2_t4_g4_g3_ParamLimits

0xf050,	// (0x0005d8b2) list_medium_line_x2_t4_g4_g3

0x1d84,	// (0x000505e6) list_medium_line_x2_t4_g4_g4_ParamLimits

0x1d84,	// (0x000505e6) list_medium_line_x2_t4_g4_g4

0x0003,

0xf252,	// (0x0005dab4) list_medium_line_x2_t4_g4_g_ParamLimits

0xf252,	// (0x0005dab4) list_medium_line_x2_t4_g4_g

0xfc01,	// (0x0004e463) list_medium_line_x2_t4_g4_t1_ParamLimits

0xfc01,	// (0x0004e463) list_medium_line_x2_t4_g4_t1

0xfc1b,	// (0x0004e47d) list_medium_line_x2_t4_g4_t2_ParamLimits

0xfc1b,	// (0x0004e47d) list_medium_line_x2_t4_g4_t2

0xfc31,	// (0x0004e493) list_medium_line_x2_t4_g4_t3_ParamLimits

0xfc31,	// (0x0004e493) list_medium_line_x2_t4_g4_t3

0xfc46,	// (0x0004e4a8) list_medium_line_x2_t4_g4_t4_ParamLimits

0xfc46,	// (0x0004e4a8) list_medium_line_x2_t4_g4_t4

0x0003,

0xf25b,	// (0x0005dabd) list_medium_line_x2_t4_g4_t_ParamLimits

0xf25b,	// (0x0005dabd) list_medium_line_x2_t4_g4_t

0x1d6c,	// (0x000505ce) list_medium_line_x2_t2_g4_g1_ParamLimits

0x1d6c,	// (0x000505ce) list_medium_line_x2_t2_g4_g1

0xf05c,	// (0x0005d8be) list_medium_line_x2_t2_g4_g2_ParamLimits

0xf05c,	// (0x0005d8be) list_medium_line_x2_t2_g4_g2

0xf050,	// (0x0005d8b2) list_medium_line_x2_t2_g4_g3_ParamLimits

0xf050,	// (0x0005d8b2) list_medium_line_x2_t2_g4_g3

0x1d78,	// (0x000505da) list_medium_line_x2_t2_g4_g4_ParamLimits

0x1d78,	// (0x000505da) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2c2,	// (0x0005db24) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2c2,	// (0x0005db24) list_medium_line_x2_t2_g4_g

0xfc58,	// (0x0004e4ba) list_medium_line_x2_t2_g4_t1_ParamLimits

0xfc58,	// (0x0004e4ba) list_medium_line_x2_t2_g4_t1

0xf068,	// (0x0005d8ca) list_medium_line_x2_t2_g4_t2_ParamLimits

0xf068,	// (0x0005d8ca) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2cb,	// (0x0005db2d) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2cb,	// (0x0005db2d) list_medium_line_x2_t2_g4_t

0x1d6c,	// (0x000505ce) list_medium_line_x2_t2_g3_g1_ParamLimits

0x1d6c,	// (0x000505ce) list_medium_line_x2_t2_g3_g1

0xf050,	// (0x0005d8b2) list_medium_line_x2_t2_g3_g2_ParamLimits

0xf050,	// (0x0005d8b2) list_medium_line_x2_t2_g3_g2

0x1d78,	// (0x000505da) list_medium_line_x2_t2_g3_g3_ParamLimits

0x1d78,	// (0x000505da) list_medium_line_x2_t2_g3_g3

0x0002,

0xf2d0,	// (0x0005db32) list_medium_line_x2_t2_g3_g_ParamLimits

0xf2d0,	// (0x0005db32) list_medium_line_x2_t2_g3_g

0xfc6d,	// (0x0004e4cf) list_medium_line_x2_t2_g3_t1_ParamLimits

0xfc6d,	// (0x0004e4cf) list_medium_line_x2_t2_g3_t1

0xf068,	// (0x0005d8ca) list_medium_line_x2_t2_g3_t2_ParamLimits

0xf068,	// (0x0005d8ca) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2d7,	// (0x0005db39) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2d7,	// (0x0005db39) list_medium_line_x2_t2_g3_t

0x2f78,	// (0x000517da) main_sp_fs_list_pane_ParamLimits

0x2f78,	// (0x000517da) main_sp_fs_list_pane

0x2f84,	// (0x000517e6) sp_fs_scroll_pane_ParamLimits

0x2f84,	// (0x000517e6) sp_fs_scroll_pane

0xfc82,	// (0x0004e4e4) list_medium_line_x2_t3_t1

0xfc92,	// (0x0004e4f4) list_medium_line_x2_t3_t2

0xfca0,	// (0x0004e502) list_medium_line_x2_t3_t3

0x0002,

0xf322,	// (0x0005db84) list_medium_line_x2_t3_t

0xfcae,	// (0x0004e510) list_medium_line_x3_t4_t1

0xfcbe,	// (0x0004e520) list_medium_line_x3_t4_t2

0xfccc,	// (0x0004e52e) list_medium_line_x3_t4_t3

0xf07d,	// (0x0005d8df) list_medium_line_x3_t4_t4

0x0003,

0xf329,	// (0x0005db8b) list_medium_line_x3_t4_t

0xfcda,	// (0x0004e53c) list_medium_line_x4_t5_t1

0xfcea,	// (0x0004e54c) list_medium_line_x4_t5_t2

0xf08b,	// (0x0005d8ed) list_medium_line_x4_t5_t3

0xfcf8,	// (0x0004e55a) list_medium_line_x4_t5_t4

0xf07d,	// (0x0005d8df) list_medium_line_x4_t5_t5

0x0004,

0xf332,	// (0x0005db94) list_medium_line_x4_t5_t

0x1d6c,	// (0x000505ce) list_medium_line_t4_g4_g1_ParamLimits

0x1d6c,	// (0x000505ce) list_medium_line_t4_g4_g1

0x1d84,	// (0x000505e6) list_medium_line_t4_g4_g2_ParamLimits

0x1d84,	// (0x000505e6) list_medium_line_t4_g4_g2

0xfd06,	// (0x0004e568) list_medium_line_t4_g4_g3_ParamLimits

0xfd06,	// (0x0004e568) list_medium_line_t4_g4_g3

0x1d78,	// (0x000505da) list_medium_line_t4_g4_g4_ParamLimits

0x1d78,	// (0x000505da) list_medium_line_t4_g4_g4

0x0003,

0xf33d,	// (0x0005db9f) list_medium_line_t4_g4_g_ParamLimits

0xf33d,	// (0x0005db9f) list_medium_line_t4_g4_g

0xfd12,	// (0x0004e574) list_medium_line_t4_g4_t1_ParamLimits

0xfd12,	// (0x0004e574) list_medium_line_t4_g4_t1

0xfd27,	// (0x0004e589) list_medium_line_t4_g4_t2_ParamLimits

0xfd27,	// (0x0004e589) list_medium_line_t4_g4_t2

0xfd3d,	// (0x0004e59f) list_medium_line_t4_g4_t3_ParamLimits

0xfd3d,	// (0x0004e59f) list_medium_line_t4_g4_t3

0xf068,	// (0x0005d8ca) list_medium_line_t4_g4_t4_ParamLimits

0xf068,	// (0x0005d8ca) list_medium_line_t4_g4_t4

0x0003,

0xf346,	// (0x0005dba8) list_medium_line_t4_g4_t_ParamLimits

0xf346,	// (0x0005dba8) list_medium_line_t4_g4_t

0x3056,	// (0x000518b8) chi_dic_find_pane_g1

0x426c,	// (0x00052ace) main_tport_pane

0xff3a,	// (0x0004e79c) list_medium_line_plain_t1

0xff48,	// (0x0004e7aa) list_medium_line_t2_g2_g1_ParamLimits

0xff48,	// (0x0004e7aa) list_medium_line_t2_g2_g1

0xff54,	// (0x0004e7b6) list_medium_line_t2_g2_g2_ParamLimits

0xff54,	// (0x0004e7b6) list_medium_line_t2_g2_g2

0x0001,

0xfa07,	// (0x0005e269) list_medium_line_t2_g2_g_ParamLimits

0xfa07,	// (0x0005e269) list_medium_line_t2_g2_g

0xff60,	// (0x0004e7c2) list_medium_line_t2_g2_t1_ParamLimits

0xff60,	// (0x0004e7c2) list_medium_line_t2_g2_t1

0xff77,	// (0x0004e7d9) list_medium_line_t2_g2_t2_ParamLimits

0xff77,	// (0x0004e7d9) list_medium_line_t2_g2_t2

0x0001,

0xfa0c,	// (0x0005e26e) list_medium_line_t2_g2_t_ParamLimits

0xfa0c,	// (0x0005e26e) list_medium_line_t2_g2_t

0x77f7,	// (0x00056059) aid_sp_fs_list_icon_a_sm

0x77ff,	// (0x00056061) aid_sp_fs_list_icon_d

0x7807,	// (0x00056069) aid_sp_fs_text_primary

0x7810,	// (0x00056072) aid_sp_fs_text_secondary

0x0106,	// (0x0004e968) list_medium_line

0x0106,	// (0x0004e968) list_medium_line_g2

0x0106,	// (0x0004e968) list_medium_line_g3

0x0106,	// (0x0004e968) list_medium_line_plain

0x0106,	// (0x0004e968) list_medium_line_plain_t2

0x0106,	// (0x0004e968) list_medium_line_plain_t3

0x0106,	// (0x0004e968) list_medium_line_right_icon

0x0106,	// (0x0004e968) list_medium_line_right_iconx2

0x0106,	// (0x0004e968) list_medium_line_t2

0x0106,	// (0x0004e968) list_medium_line_t2_g2

0x0106,	// (0x0004e968) list_medium_line_t2_g3

0x0106,	// (0x0004e968) list_medium_line_t2_right_icon

0x0106,	// (0x0004e968) list_medium_line_t2_right_iconx2

0x0106,	// (0x0004e968) list_medium_line_t3

0x0106,	// (0x0004e968) list_medium_line_t3_g2

0x0106,	// (0x0004e968) list_medium_line_t3_g3

0x0106,	// (0x0004e968) list_medium_line_t3_right_iconx2

0x7819,	// (0x0005607b) list_medium_line_t4_g4

0x7822,	// (0x00056084) list_medium_line_x2

0x7822,	// (0x00056084) list_medium_line_x2_t2_g2

0x7822,	// (0x00056084) list_medium_line_x2_t2_g3

0x7822,	// (0x00056084) list_medium_line_x2_t2_g4

0x7822,	// (0x00056084) list_medium_line_x2_t3

0x7822,	// (0x00056084) list_medium_line_x2_t3_g2

0x7822,	// (0x00056084) list_medium_line_x2_t3_g3

0x7822,	// (0x00056084) list_medium_line_x2_t3_g4

0x7822,	// (0x00056084) list_medium_line_x2_t4_g2

0x7822,	// (0x00056084) list_medium_line_x2_t4_g4

0x782b,	// (0x0005608d) list_medium_line_x3

0x782b,	// (0x0005608d) list_medium_line_x3_t4

0x782b,	// (0x0005608d) list_medium_line_x3_t4_g4

0x7819,	// (0x0005607b) list_medium_line_x4_t4

0x7819,	// (0x0005607b) list_medium_line_x4_t4_g7

0x7819,	// (0x0005607b) list_medium_line_x4_t5

0x010f,	// (0x0004e971) list_single_fs_dyc_pane_ParamLimits

0x010f,	// (0x0004e971) list_single_fs_dyc_pane

0x1d6c,	// (0x000505ce) list_medium_line_x4_t4_g7_g1_ParamLimits

0x1d6c,	// (0x000505ce) list_medium_line_x4_t4_g7_g1

0x7f28,	// (0x0005678a) list_medium_line_x4_t4_g7_g2_ParamLimits

0x7f28,	// (0x0005678a) list_medium_line_x4_t4_g7_g2

0x014f,	// (0x0004e9b1) list_medium_line_x4_t4_g7_g3_ParamLimits

0x014f,	// (0x0004e9b1) list_medium_line_x4_t4_g7_g3

0x015e,	// (0x0004e9c0) list_medium_line_x4_t4_g7_g4_ParamLimits

0x015e,	// (0x0004e9c0) list_medium_line_x4_t4_g7_g4

0x016a,	// (0x0004e9cc) list_medium_line_x4_t4_g7_g5_ParamLimits

0x016a,	// (0x0004e9cc) list_medium_line_x4_t4_g7_g5

0x0179,	// (0x0004e9db) list_medium_line_x4_t4_g7_g6_ParamLimits

0x0179,	// (0x0004e9db) list_medium_line_x4_t4_g7_g6

0x7f34,	// (0x00056796) list_medium_line_x4_t4_g7_g7_ParamLimits

0x7f34,	// (0x00056796) list_medium_line_x4_t4_g7_g7

0x0006,

0xfbd7,	// (0x0005e439) list_medium_line_x4_t4_g7_g_ParamLimits

0xfbd7,	// (0x0005e439) list_medium_line_x4_t4_g7_g

0x0188,	// (0x0004e9ea) list_medium_line_x4_t4_g7_t1_ParamLimits

0x0188,	// (0x0004e9ea) list_medium_line_x4_t4_g7_t1

0x019d,	// (0x0004e9ff) list_medium_line_x4_t4_g7_t2_ParamLimits

0x019d,	// (0x0004e9ff) list_medium_line_x4_t4_g7_t2

0x01b2,	// (0x0004ea14) list_medium_line_x4_t4_g7_t3_ParamLimits

0x01b2,	// (0x0004ea14) list_medium_line_x4_t4_g7_t3

0x01c7,	// (0x0004ea29) list_medium_line_x4_t4_g7_t4_ParamLimits

0x01c7,	// (0x0004ea29) list_medium_line_x4_t4_g7_t4

0x7f40,	// (0x000567a2) list_medium_line_x4_t4_g7_t5_ParamLimits

0x7f40,	// (0x000567a2) list_medium_line_x4_t4_g7_t5

0x0004,

0xfbe6,	// (0x0005e448) list_medium_line_x4_t4_g7_t_ParamLimits

0xfbe6,	// (0x0005e448) list_medium_line_x4_t4_g7_t

0x01d9,	// (0x0004ea3b) list_single_dyc_row_pane_ParamLimits

0x01d9,	// (0x0004ea3b) list_single_dyc_row_pane

0x85b0,	// (0x00056e12) call5_gesture_pane_ParamLimits

0x85b0,	// (0x00056e12) call5_gesture_pane

0x8606,	// (0x00056e68) call5_windows_pane_ParamLimits

0x8606,	// (0x00056e68) call5_windows_pane

0x86b4,	// (0x00056f16) call5_swipe_1_pane_cp_ParamLimits

0x86b4,	// (0x00056f16) call5_swipe_1_pane_cp

0x86c0,	// (0x00056f22) call5_swipe_2_pane_cp_ParamLimits

0x86c0,	// (0x00056f22) call5_swipe_2_pane_cp

0xb375,	// (0x00059bd7) call5_image_pane_cp

0x86cc,	// (0x00056f2e) popup_call5_audio_first_window_cp_ParamLimits

0x86cc,	// (0x00056f2e) popup_call5_audio_first_window_cp

0xe608,	// (0x0005ce6a) call5_swipe_1_pane_g1_cp_ParamLimits

0xe608,	// (0x0005ce6a) call5_swipe_1_pane_g1_cp

0xe648,	// (0x0005ceaa) call5_swipe_1_pane_g2_cp

0xe621,	// (0x0005ce83) call5_swipe_1_pane_t1_cp_ParamLimits

0xe621,	// (0x0005ce83) call5_swipe_1_pane_t1_cp

0xe608,	// (0x0005ce6a) call5_swipe_2_pane_g1_cp_ParamLimits

0xe608,	// (0x0005ce6a) call5_swipe_2_pane_g1_cp

0xe650,	// (0x0005ceb2) call5_swipe_2_pane_g2_cp

0xe658,	// (0x0005ceba) call5_swipe_2_pane_t1_cp_ParamLimits

0xe658,	// (0x0005ceba) call5_swipe_2_pane_t1_cp

0x9a3c,	// (0x0005829e) main_sp_fs_email_pane

0xe66d,	// (0x0005cecf) main_sp_fs_listscroll_pane_te

0x86da,	// (0x00056f3c) popup_sp_fs_action_menu_pane_ParamLimits

0x86da,	// (0x00056f3c) popup_sp_fs_action_menu_pane

0xcbfd,	// (0x0005b45f) bg_sp_fs_ctrlbar_pane_g1

0xd1aa,	// (0x0005ba0c) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xd1bc,	// (0x0005ba1e) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xd1b3,	// (0x0005ba15) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xcbfd,	// (0x0005b45f) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfcd4,	// (0x0005e536) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xc9dc,	// (0x0005b23e) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xc9dc,	// (0x0005b23e) bg_sp_fs_ctrlbar_ddmenu_pane

0xe676,	// (0x0005ced8) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xe676,	// (0x0005ced8) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xe682,	// (0x0005cee4) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xe682,	// (0x0005cee4) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfcdd,	// (0x0005e53f) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfcdd,	// (0x0005e53f) main_sp_fs_ctrlbar_ddmenu_pane_g

0xe68e,	// (0x0005cef0) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xe68e,	// (0x0005cef0) main_sp_fs_ctrlbar_ddmenu_pane_t1

0x026e,	// (0x0004ead0) list_medium_line_t2_right_icon_g1

0x0276,	// (0x0004ead8) list_medium_line_t2_right_icon_t1

0x0286,	// (0x0004eae8) list_medium_line_t2_right_icon_t2

0x0001,

0xfce2,	// (0x0005e544) list_medium_line_t2_right_icon_t

0xc7ac,	// (0x0005b00e) bg_sp_fs_ctrlbar_pane_ParamLimits

0xc7ac,	// (0x0005b00e) bg_sp_fs_ctrlbar_pane

0x876d,	// (0x00056fcf) main_sp_fs_ctrlbar_button_pane_cp01

0x8777,	// (0x00056fd9) main_sp_fs_ctrlbar_ddmenu_pane

0xd2e4,	// (0x0005bb46) main_sp_fs_ctrlbar_pane_g1

0xe6e0,	// (0x0005cf42) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfce7,	// (0x0005e549) main_sp_fs_ctrlbar_pane_g

0xe6ec,	// (0x0005cf4e) main_sp_fs_ctrlbar_pane_t1

0x0298,	// (0x0004eafa) main_sp_fs_ctrlbar_pane

0x02bc,	// (0x0004eb1e) main_sp_fs_listscroll_pane_te_cp01

0x02dc,	// (0x0004eb3e) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x02dc,	// (0x0004eb3e) popup_sp_fs_action_menu_pane_cp01

0x9a3c,	// (0x0005829e) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0x9a3c,	// (0x0005829e) bg_sp_fs_highlight_list_pane_cp01

0x8781,	// (0x00056fe3) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0x8781,	// (0x00056fe3) sp_fs_action_menu_list_gene_pane_g1

0xe71c,	// (0x0005cf7e) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xe71c,	// (0x0005cf7e) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfcf1,	// (0x0005e553) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfcf1,	// (0x0005e553) sp_fs_action_menu_list_gene_pane_g

0x8790,	// (0x00056ff2) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0x8790,	// (0x00056ff2) sp_fs_action_menu_list_gene_pane_t1

0x87a8,	// (0x0005700a) sp_fs_action_menu_list_gene_pane_ParamLimits

0x87a8,	// (0x0005700a) sp_fs_action_menu_list_gene_pane

0xe729,	// (0x0005cf8b) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xe729,	// (0x0005cf8b) popup_sp_fs_action_menu_bg_pane

0x87cb,	// (0x0005702d) sp_fs_action_menu_list_pane_ParamLimits

0x87cb,	// (0x0005702d) sp_fs_action_menu_list_pane

0xe737,	// (0x0005cf99) sp_fs_scroll_pane_cp01_ParamLimits

0xe737,	// (0x0005cf99) sp_fs_scroll_pane_cp01

0x030c,	// (0x0004eb6e) list_medium_line_plain_t2_t1

0x031c,	// (0x0004eb7e) list_medium_line_plain_t2_t2

0x0001,

0xfcf6,	// (0x0005e558) list_medium_line_plain_t2_t

0x032c,	// (0x0004eb8e) list_medium_line_plain_t3_t1

0x033c,	// (0x0004eb9e) list_medium_line_plain_t3_t2

0x034a,	// (0x0004ebac) list_medium_line_plain_t3_t3

0x0002,

0xfcfb,	// (0x0005e55d) list_medium_line_plain_t3_t

0x1d6c,	// (0x000505ce) list_medium_line_x2_t2_g2_g1_ParamLimits

0x1d6c,	// (0x000505ce) list_medium_line_x2_t2_g2_g1

0x1d78,	// (0x000505da) list_medium_line_x2_t2_g2_g2_ParamLimits

0x1d78,	// (0x000505da) list_medium_line_x2_t2_g2_g2

0x0001,

0xf246,	// (0x0005daa8) list_medium_line_x2_t2_g2_g_ParamLimits

0xf246,	// (0x0005daa8) list_medium_line_x2_t2_g2_g

0xf099,	// (0x0005d8fb) list_medium_line_x2_t2_g2_t1_ParamLimits

0xf099,	// (0x0005d8fb) list_medium_line_x2_t2_g2_t1

0xf068,	// (0x0005d8ca) list_medium_line_x2_t2_g2_t2_ParamLimits

0xf068,	// (0x0005d8ca) list_medium_line_x2_t2_g2_t2

0x0001,

0xfd02,	// (0x0005e564) list_medium_line_x2_t2_g2_t_ParamLimits

0xfd02,	// (0x0005e564) list_medium_line_x2_t2_g2_t

0x1d6c,	// (0x000505ce) list_medium_line_x2_t4_g2_g1_ParamLimits

0x1d6c,	// (0x000505ce) list_medium_line_x2_t4_g2_g1

0x87ef,	// (0x00057051) list_medium_line_x2_t4_g2_g2_ParamLimits

0x87ef,	// (0x00057051) list_medium_line_x2_t4_g2_g2

0x0001,

0xfd07,	// (0x0005e569) list_medium_line_x2_t4_g2_g_ParamLimits

0xfd07,	// (0x0005e569) list_medium_line_x2_t4_g2_g

0x0358,	// (0x0004ebba) list_medium_line_x2_t4_g2_t1_ParamLimits

0x0358,	// (0x0004ebba) list_medium_line_x2_t4_g2_t1

0x0372,	// (0x0004ebd4) list_medium_line_x2_t4_g2_t2_ParamLimits

0x0372,	// (0x0004ebd4) list_medium_line_x2_t4_g2_t2

0x0388,	// (0x0004ebea) list_medium_line_x2_t4_g2_t3_ParamLimits

0x0388,	// (0x0004ebea) list_medium_line_x2_t4_g2_t3

0xf068,	// (0x0005d8ca) list_medium_line_x2_t4_g2_t4_ParamLimits

0xf068,	// (0x0005d8ca) list_medium_line_x2_t4_g2_t4

0x0003,

0xfd0c,	// (0x0005e56e) list_medium_line_x2_t4_g2_t_ParamLimits

0xfd0c,	// (0x0005e56e) list_medium_line_x2_t4_g2_t

0x039d,	// (0x0004ebff) list_medium_line_t3_right_iconx2_g1

0x026e,	// (0x0004ead0) list_medium_line_t3_right_iconx2_g2

0x03a5,	// (0x0004ec07) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfd15,	// (0x0005e577) list_medium_line_t3_right_iconx2_g

0x03af,	// (0x0004ec11) list_medium_line_t3_right_iconx2_t1

0x03bf,	// (0x0004ec21) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfd1c,	// (0x0005e57e) list_medium_line_t3_right_iconx2_t

0x1d6c,	// (0x000505ce) list_medium_line_x3_t4_g4_g1_ParamLimits

0x1d6c,	// (0x000505ce) list_medium_line_x3_t4_g4_g1

0xf050,	// (0x0005d8b2) list_medium_line_x3_t4_g4_g2_ParamLimits

0xf050,	// (0x0005d8b2) list_medium_line_x3_t4_g4_g2

0x1d84,	// (0x000505e6) list_medium_line_x3_t4_g4_g3_ParamLimits

0x1d84,	// (0x000505e6) list_medium_line_x3_t4_g4_g3

0x03cd,	// (0x0004ec2f) list_medium_line_x3_t4_g4_g4_ParamLimits

0x03cd,	// (0x0004ec2f) list_medium_line_x3_t4_g4_g4

0x0003,

0xfd21,	// (0x0005e583) list_medium_line_x3_t4_g4_g_ParamLimits

0xfd21,	// (0x0005e583) list_medium_line_x3_t4_g4_g

0x03d9,	// (0x0004ec3b) list_medium_line_x3_t4_g4_t1_ParamLimits

0x03d9,	// (0x0004ec3b) list_medium_line_x3_t4_g4_t1

0x03f0,	// (0x0004ec52) list_medium_line_x3_t4_g4_t2_ParamLimits

0x03f0,	// (0x0004ec52) list_medium_line_x3_t4_g4_t2

0x040b,	// (0x0004ec6d) list_medium_line_x3_t4_g4_t3_ParamLimits

0x040b,	// (0x0004ec6d) list_medium_line_x3_t4_g4_t3

0x0420,	// (0x0004ec82) list_medium_line_x3_t4_g4_t4_ParamLimits

0x0420,	// (0x0004ec82) list_medium_line_x3_t4_g4_t4

0x0003,

0xfd2a,	// (0x0005e58c) list_medium_line_x3_t4_g4_t_ParamLimits

0xfd2a,	// (0x0005e58c) list_medium_line_x3_t4_g4_t

0x043d,	// (0x0004ec9f) list_single_dyc_row_text_pane_t1_ParamLimits

0x043d,	// (0x0004ec9f) list_single_dyc_row_text_pane_t1

0x0486,	// (0x0004ece8) list_single_dyc_row_text_pane_t2_ParamLimits

0x0486,	// (0x0004ece8) list_single_dyc_row_text_pane_t2

0x8801,	// (0x00057063) list_single_dyc_row_text_pane_t3_ParamLimits

0x8801,	// (0x00057063) list_single_dyc_row_text_pane_t3

0x0005,

0xfd33,	// (0x0005e595) list_single_dyc_row_text_pane_t_ParamLimits

0xfd33,	// (0x0005e595) list_single_dyc_row_text_pane_t

0x8825,	// (0x00057087) list_single_dyc_row_pane_g1_ParamLimits

0x8825,	// (0x00057087) list_single_dyc_row_pane_g1

0x8831,	// (0x00057093) list_single_dyc_row_pane_g2_ParamLimits

0x8831,	// (0x00057093) list_single_dyc_row_pane_g2

0x883d,	// (0x0005709f) list_single_dyc_row_pane_g3_ParamLimits

0x883d,	// (0x0005709f) list_single_dyc_row_pane_g3

0x8849,	// (0x000570ab) list_single_dyc_row_pane_g4_ParamLimits

0x8849,	// (0x000570ab) list_single_dyc_row_pane_g4

0x0003,

0xfd40,	// (0x0005e5a2) list_single_dyc_row_pane_g_ParamLimits

0xfd40,	// (0x0005e5a2) list_single_dyc_row_pane_g

0x8855,	// (0x000570b7) list_single_dyc_row_text_pane_ParamLimits

0x8855,	// (0x000570b7) list_single_dyc_row_text_pane

0x99e3,	// (0x00058245) bg_sp_fs_scroll_pane

0xe75d,	// (0x0005cfbf) thumb_sp_fs_scroll_pane

0xf0ae,	// (0x0005d910) list_medium_line_g1_ParamLimits

0xf0ae,	// (0x0005d910) list_medium_line_g1

0x05bb,	// (0x0004ee1d) list_medium_line_t1_ParamLimits

0x05bb,	// (0x0004ee1d) list_medium_line_t1

0x1d6c,	// (0x000505ce) list_medium_line_x2_g1_ParamLimits

0x1d6c,	// (0x000505ce) list_medium_line_x2_g1

0xf050,	// (0x0005d8b2) list_medium_line_x2_g2_ParamLimits

0xf050,	// (0x0005d8b2) list_medium_line_x2_g2

0x0001,

0xfd49,	// (0x0005e5ab) list_medium_line_x2_g_ParamLimits

0xfd49,	// (0x0005e5ab) list_medium_line_x2_g

0x8874,	// (0x000570d6) list_medium_line_x2_t1_ParamLimits

0x8874,	// (0x000570d6) list_medium_line_x2_t1

0x1d6c,	// (0x000505ce) list_medium_line_x3_g1_ParamLimits

0x1d6c,	// (0x000505ce) list_medium_line_x3_g1

0xf050,	// (0x0005d8b2) list_medium_line_x3_g2_ParamLimits

0xf050,	// (0x0005d8b2) list_medium_line_x3_g2

0x0001,

0xfd49,	// (0x0005e5ab) list_medium_line_x3_g_ParamLimits

0xfd49,	// (0x0005e5ab) list_medium_line_x3_g

0x8874,	// (0x000570d6) list_medium_line_x3_t1_ParamLimits

0x8874,	// (0x000570d6) list_medium_line_x3_t1

0xe766,	// (0x0005cfc8) thumb_sp_fs_scroll_pane_g1

0xe76f,	// (0x0005cfd1) thumb_sp_fs_scroll_pane_g2

0xe778,	// (0x0005cfda) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfd4e,	// (0x0005e5b0) thumb_sp_fs_scroll_pane_g

0xe766,	// (0x0005cfc8) bg_sp_fs_scroll_pane_g1

0xe76f,	// (0x0005cfd1) bg_sp_fs_scroll_pane_g2

0xe778,	// (0x0005cfda) bg_sp_fs_scroll_pane_g3

0x0002,

0xfd4e,	// (0x0005e5b0) bg_sp_fs_scroll_pane_g

0x1d6c,	// (0x000505ce) list_medium_line_x2_t3_g4_g1_ParamLimits

0x1d6c,	// (0x000505ce) list_medium_line_x2_t3_g4_g1

0xf05c,	// (0x0005d8be) list_medium_line_x2_t3_g4_g2_ParamLimits

0xf05c,	// (0x0005d8be) list_medium_line_x2_t3_g4_g2

0xf050,	// (0x0005d8b2) list_medium_line_x2_t3_g4_g3_ParamLimits

0xf050,	// (0x0005d8b2) list_medium_line_x2_t3_g4_g3

0x1d78,	// (0x000505da) list_medium_line_x2_t3_g4_g4_ParamLimits

0x1d78,	// (0x000505da) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2c2,	// (0x0005db24) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2c2,	// (0x0005db24) list_medium_line_x2_t3_g4_g

0x05d0,	// (0x0004ee32) list_medium_line_x2_t3_g4_t1_ParamLimits

0x05d0,	// (0x0004ee32) list_medium_line_x2_t3_g4_t1

0x05e6,	// (0x0004ee48) list_medium_line_x2_t3_g4_t2_ParamLimits

0x05e6,	// (0x0004ee48) list_medium_line_x2_t3_g4_t2

0xf068,	// (0x0005d8ca) list_medium_line_x2_t3_g4_t3_ParamLimits

0xf068,	// (0x0005d8ca) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd55,	// (0x0005e5b7) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd55,	// (0x0005e5b7) list_medium_line_x2_t3_g4_t

0xf0ae,	// (0x0005d910) list_medium_line_g2_g1_ParamLimits

0xf0ae,	// (0x0005d910) list_medium_line_g2_g1

0xf0ba,	// (0x0005d91c) list_medium_line_g2_g2_ParamLimits

0xf0ba,	// (0x0005d91c) list_medium_line_g2_g2

0x0001,

0xfd5c,	// (0x0005e5be) list_medium_line_g2_g_ParamLimits

0xfd5c,	// (0x0005e5be) list_medium_line_g2_g

0x05ff,	// (0x0004ee61) list_medium_line_g2_t1_ParamLimits

0x05ff,	// (0x0004ee61) list_medium_line_g2_t1

0xf0ae,	// (0x0005d910) list_medium_line_t3_g2_g1_ParamLimits

0xf0ae,	// (0x0005d910) list_medium_line_t3_g2_g1

0xf0ba,	// (0x0005d91c) list_medium_line_t3_g2_g2_ParamLimits

0xf0ba,	// (0x0005d91c) list_medium_line_t3_g2_g2

0x0001,

0xfd5c,	// (0x0005e5be) list_medium_line_t3_g2_g_ParamLimits

0xfd5c,	// (0x0005e5be) list_medium_line_t3_g2_g

0x0614,	// (0x0004ee76) list_medium_line_t3_g2_t1_ParamLimits

0x0614,	// (0x0004ee76) list_medium_line_t3_g2_t1

0x062e,	// (0x0004ee90) list_medium_line_t3_g2_t2_ParamLimits

0x062e,	// (0x0004ee90) list_medium_line_t3_g2_t2

0x0644,	// (0x0004eea6) list_medium_line_t3_g2_t3_ParamLimits

0x0644,	// (0x0004eea6) list_medium_line_t3_g2_t3

0x0002,

0xfd61,	// (0x0005e5c3) list_medium_line_t3_g2_t_ParamLimits

0xfd61,	// (0x0005e5c3) list_medium_line_t3_g2_t

0x026e,	// (0x0004ead0) list_medium_line_right_icon_g1

0x065b,	// (0x0004eebd) list_medium_line_right_icon_t1

0xf0ae,	// (0x0005d910) list_medium_line_t2_g1_ParamLimits

0xf0ae,	// (0x0005d910) list_medium_line_t2_g1

0x0669,	// (0x0004eecb) list_medium_line_t2_t1_ParamLimits

0x0669,	// (0x0004eecb) list_medium_line_t2_t1

0x0683,	// (0x0004eee5) list_medium_line_t2_t2_ParamLimits

0x0683,	// (0x0004eee5) list_medium_line_t2_t2

0x0001,

0xfd68,	// (0x0005e5ca) list_medium_line_t2_t_ParamLimits

0xfd68,	// (0x0005e5ca) list_medium_line_t2_t

0xf0ae,	// (0x0005d910) list_medium_line_t3_g1_ParamLimits

0xf0ae,	// (0x0005d910) list_medium_line_t3_g1

0x069c,	// (0x0004eefe) list_medium_line_t3_t1_ParamLimits

0x069c,	// (0x0004eefe) list_medium_line_t3_t1

0x06b6,	// (0x0004ef18) list_medium_line_t3_t2_ParamLimits

0x06b6,	// (0x0004ef18) list_medium_line_t3_t2

0x06cc,	// (0x0004ef2e) list_medium_line_t3_t3_ParamLimits

0x06cc,	// (0x0004ef2e) list_medium_line_t3_t3

0x0002,

0xfd6d,	// (0x0005e5cf) list_medium_line_t3_t_ParamLimits

0xfd6d,	// (0x0005e5cf) list_medium_line_t3_t

0xf0ae,	// (0x0005d910) list_medium_line_g3_g1_ParamLimits

0xf0ae,	// (0x0005d910) list_medium_line_g3_g1

0x06e1,	// (0x0004ef43) list_medium_line_g3_g2_ParamLimits

0x06e1,	// (0x0004ef43) list_medium_line_g3_g2

0xf0ba,	// (0x0005d91c) list_medium_line_g3_g3_ParamLimits

0xf0ba,	// (0x0005d91c) list_medium_line_g3_g3

0x0002,

0xfd74,	// (0x0005e5d6) list_medium_line_g3_g_ParamLimits

0xfd74,	// (0x0005e5d6) list_medium_line_g3_g

0x06ed,	// (0x0004ef4f) list_medium_line_g3_t1_ParamLimits

0x06ed,	// (0x0004ef4f) list_medium_line_g3_t1

0xf0ae,	// (0x0005d910) list_medium_line_t2_g3_g1_ParamLimits

0xf0ae,	// (0x0005d910) list_medium_line_t2_g3_g1

0x06e1,	// (0x0004ef43) list_medium_line_t2_g3_g2_ParamLimits

0x06e1,	// (0x0004ef43) list_medium_line_t2_g3_g2

0xf0ba,	// (0x0005d91c) list_medium_line_t2_g3_g3_ParamLimits

0xf0ba,	// (0x0005d91c) list_medium_line_t2_g3_g3

0x0002,

0xfd74,	// (0x0005e5d6) list_medium_line_t2_g3_g_ParamLimits

0xfd74,	// (0x0005e5d6) list_medium_line_t2_g3_g

0x0702,	// (0x0004ef64) list_medium_line_t2_g3_t1_ParamLimits

0x0702,	// (0x0004ef64) list_medium_line_t2_g3_t1

0x0719,	// (0x0004ef7b) list_medium_line_t2_g3_t2_ParamLimits

0x0719,	// (0x0004ef7b) list_medium_line_t2_g3_t2

0x0001,

0xfd7b,	// (0x0005e5dd) list_medium_line_t2_g3_t_ParamLimits

0xfd7b,	// (0x0005e5dd) list_medium_line_t2_g3_t

0xf0ae,	// (0x0005d910) list_medium_line_t3_g3_g1_ParamLimits

0xf0ae,	// (0x0005d910) list_medium_line_t3_g3_g1

0x06e1,	// (0x0004ef43) list_medium_line_t3_g3_g2_ParamLimits

0x06e1,	// (0x0004ef43) list_medium_line_t3_g3_g2

0xf0ba,	// (0x0005d91c) list_medium_line_t3_g3_g3_ParamLimits

0xf0ba,	// (0x0005d91c) list_medium_line_t3_g3_g3

0x0002,

0xfd74,	// (0x0005e5d6) list_medium_line_t3_g3_g_ParamLimits

0xfd74,	// (0x0005e5d6) list_medium_line_t3_g3_g

0x0732,	// (0x0004ef94) list_medium_line_t3_g3_t1_ParamLimits

0x0732,	// (0x0004ef94) list_medium_line_t3_g3_t1

0x074b,	// (0x0004efad) list_medium_line_t3_g3_t2_ParamLimits

0x074b,	// (0x0004efad) list_medium_line_t3_g3_t2

0x0761,	// (0x0004efc3) list_medium_line_t3_g3_t3_ParamLimits

0x0761,	// (0x0004efc3) list_medium_line_t3_g3_t3

0x0002,

0xfd80,	// (0x0005e5e2) list_medium_line_t3_g3_t_ParamLimits

0xfd80,	// (0x0005e5e2) list_medium_line_t3_g3_t

0x039d,	// (0x0004ebff) list_medium_line_right_iconx2_g1

0x026e,	// (0x0004ead0) list_medium_line_right_iconx2_g2

0x0001,

0xfd87,	// (0x0005e5e9) list_medium_line_right_iconx2_g

0x077b,	// (0x0004efdd) list_medium_line_right_iconx2_t1

0x039d,	// (0x0004ebff) list_medium_line_t2_right_iconx2_g1

0x026e,	// (0x0004ead0) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfd87,	// (0x0005e5e9) list_medium_line_t2_right_iconx2_g

0x0789,	// (0x0004efeb) list_medium_line_t2_right_iconx2_t1

0x0799,	// (0x0004effb) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfd8c,	// (0x0005e5ee) list_medium_line_t2_right_iconx2_t

0x07ab,	// (0x0004f00d) list_medium_line_x4_t4_t1

0x07b9,	// (0x0004f01b) list_medium_line_x4_t4_t2

0x07c9,	// (0x0004f02b) list_medium_line_x4_t4_t3

0x07d9,	// (0x0004f03b) list_medium_line_x4_t4_t4

0x0003,

0xfd91,	// (0x0005e5f3) list_medium_line_x4_t4_t

0x88cd,	// (0x0005712f) tport_appsw_pane_ParamLimits

0x88cd,	// (0x0005712f) tport_appsw_pane

0x88e5,	// (0x00057147) tport_contact_pane_ParamLimits

0x88e5,	// (0x00057147) tport_contact_pane

0x88fd,	// (0x0005715f) tport_listscroll_pane_ParamLimits

0x88fd,	// (0x0005715f) tport_listscroll_pane

0x8917,	// (0x00057179) cell_tport_appsw_pane_ParamLimits

0x8917,	// (0x00057179) cell_tport_appsw_pane

0xd5f7,	// (0x0005be59) tport_appsw_pane_g1_ParamLimits

0xd5f7,	// (0x0005be59) tport_appsw_pane_g1

0xe781,	// (0x0005cfe3) tport_contact_pane_g1

0xe78a,	// (0x0005cfec) tport_contact_pane_t1

0xe798,	// (0x0005cffa) tport_contact_pane_t2

0x0001,

0xfd9a,	// (0x0005e5fc) tport_contact_pane_t

0xe7a6,	// (0x0005d008) list_tport_pane

0xe7af,	// (0x0005d011) scroll_pane_cp_030

0x8969,	// (0x000571cb) cell_tport_appsw_pane_g1

0x8979,	// (0x000571db) cell_tport_appsw_pane_t1

0x8987,	// (0x000571e9) grid_highlight_pane_cp019

0x898f,	// (0x000571f1) list_tport_double_graphic_pane_ParamLimits

0x898f,	// (0x000571f1) list_tport_double_graphic_pane

0x9a3c,	// (0x0005829e) list_highlight_pane_cp023_ParamLimits

0x9a3c,	// (0x0005829e) list_highlight_pane_cp023

0x899c,	// (0x000571fe) list_tport_double_graphic_pane_g1_ParamLimits

0x899c,	// (0x000571fe) list_tport_double_graphic_pane_g1

0x89a9,	// (0x0005720b) list_tport_double_graphic_pane_t1_ParamLimits

0x89a9,	// (0x0005720b) list_tport_double_graphic_pane_t1

0x89be,	// (0x00057220) list_tport_double_graphic_pane_t2_ParamLimits

0x89be,	// (0x00057220) list_tport_double_graphic_pane_t2

0x0001,

0xfda6,	// (0x0005e608) list_tport_double_graphic_pane_t_ParamLimits

0xfda6,	// (0x0005e608) list_tport_double_graphic_pane_t

0x99e3,	// (0x00058245) main_cale_note_pane

0x6a0b,	// (0x0005526d) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x6a0b,	// (0x0005526d) cell_vitu2_function_top_wide_pane_cp01

0x828c,	// (0x00056aee) wait_bar_pane_cp05_ParamLimits

0x9a3c,	// (0x0005829e) listscroll_cmail_pane

0xe7c0,	// (0x0005d022) list_cmail_pane

0x89da,	// (0x0005723c) list_cmail_body_pane

0xe5a3,	// (0x0005ce05) list_single_cmail_header_caption_pane

0x89ed,	// (0x0005724f) list_single_cmail_header_detail_pane_ParamLimits

0x89ed,	// (0x0005724f) list_single_cmail_header_detail_pane

0x8a18,	// (0x0005727a) list_single_cmail_header_caption_pane_t1

0x07e9,	// (0x0004f04b) list_single_cmail_header_detail_pane_g1_ParamLimits

0x07e9,	// (0x0004f04b) list_single_cmail_header_detail_pane_g1

0x8a28,	// (0x0005728a) list_single_cmail_header_detail_pane_g2_ParamLimits

0x8a28,	// (0x0005728a) list_single_cmail_header_detail_pane_g2

0x0002,

0xfdab,	// (0x0005e60d) list_single_cmail_header_detail_pane_g_ParamLimits

0xfdab,	// (0x0005e60d) list_single_cmail_header_detail_pane_g

0x0801,	// (0x0004f063) list_single_cmail_header_detail_pane_t1_ParamLimits

0x0801,	// (0x0004f063) list_single_cmail_header_detail_pane_t1

0x084b,	// (0x0004f0ad) list_single_cmail_header_editor_pane_bg_ParamLimits

0x084b,	// (0x0004f0ad) list_single_cmail_header_editor_pane_bg

0xe27a,	// (0x0005cadc) list_cmail_body_pane_g1

0xe7ed,	// (0x0005d04f) list_cmail_body_pane_t1

0xd617,	// (0x0005be79) list_single_cmail_header_editor_pane_bg_g1

0xa656,	// (0x00058eb8) list_single_cmail_header_editor_pane_bg_g1_copy1

0xd627,	// (0x0005be89) list_single_cmail_header_editor_pane_bg_g1_copy2

0xd61f,	// (0x0005be81) list_single_cmail_header_editor_pane_bg_g1_copy3

0xd85c,	// (0x0005c0be) list_single_cmail_header_editor_pane_bg_g1_copy4

0xd647,	// (0x0005bea9) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xd637,	// (0x0005be99) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xd63f,	// (0x0005bea1) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xa636,	// (0x00058e98) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0x8a58,	// (0x000572ba) calenote_gesture_pane_ParamLimits

0x8a58,	// (0x000572ba) calenote_gesture_pane

0x8a78,	// (0x000572da) calenote_window_pane_ParamLimits

0x8a78,	// (0x000572da) calenote_window_pane

0xe7fb,	// (0x0005d05d) popup_note_window_cp01

0x8a94,	// (0x000572f6) calenote_swipe_1_pane_ParamLimits

0x8a94,	// (0x000572f6) calenote_swipe_1_pane

0x86c0,	// (0x00056f22) calenote_swipe_2_pane_ParamLimits

0x86c0,	// (0x00056f22) calenote_swipe_2_pane

0xe608,	// (0x0005ce6a) calenote_swipe_1_pane_g1_ParamLimits

0xe608,	// (0x0005ce6a) calenote_swipe_1_pane_g1

0xe615,	// (0x0005ce77) calenote_swipe_1_pane_g2_ParamLimits

0xe615,	// (0x0005ce77) calenote_swipe_1_pane_g2

0x0001,

0xfcca,	// (0x0005e52c) calenote_swipe_1_pane_g_ParamLimits

0xfcca,	// (0x0005e52c) calenote_swipe_1_pane_g

0xe80d,	// (0x0005d06f) calenote_swipe_1_pane_t1_ParamLimits

0xe80d,	// (0x0005d06f) calenote_swipe_1_pane_t1

0xe608,	// (0x0005ce6a) calenote_swipe_2_pane_g1_ParamLimits

0xe608,	// (0x0005ce6a) calenote_swipe_2_pane_g1

0xe82c,	// (0x0005d08e) calenote_swipe_2_pane_g2_ParamLimits

0xe82c,	// (0x0005d08e) calenote_swipe_2_pane_g2

0x0001,

0xfdb7,	// (0x0005e619) calenote_swipe_2_pane_g_ParamLimits

0xfdb7,	// (0x0005e619) calenote_swipe_2_pane_g

0xe838,	// (0x0005d09a) calenote_swipe_2_pane_t1_ParamLimits

0xe838,	// (0x0005d09a) calenote_swipe_2_pane_t1

0x99e3,	// (0x00058245) main_mup_navstr_pane

0x5663,	// (0x00053ec5) main_mup3_pane_t7_ParamLimits

0x5663,	// (0x00053ec5) main_mup3_pane_t7

0xa8d0,	// (0x00059132) main_mp4_pane_g6_ParamLimits

0xa8d0,	// (0x00059132) main_mp4_pane_g6

0xaa74,	// (0x000592d6) main_image3_pane_t4_ParamLimits

0xaa74,	// (0x000592d6) main_image3_pane_t4

0x8aa9,	// (0x0005730b) popup_navstr_preview_pane_ParamLimits

0x8aa9,	// (0x0005730b) popup_navstr_preview_pane

0x8ab9,	// (0x0005731b) scroll_navstr_pane_ParamLimits

0x8ab9,	// (0x0005731b) scroll_navstr_pane

0x99e3,	// (0x00058245) bg_popup_preview_window_pane_cp04

0xe85f,	// (0x0005d0c1) popup_navstr_preview_pane_t1

0x8acd,	// (0x0005732f) scroll_navstr_pane_g1_ParamLimits

0x8acd,	// (0x0005732f) scroll_navstr_pane_g1

0x8ae1,	// (0x00057343) scroll_navstr_pane_t1_ParamLimits

0x8ae1,	// (0x00057343) scroll_navstr_pane_t1

0xe804,	// (0x0005d066) bg_button_pane_cp014

0xe804,	// (0x0005d066) bg_button_pane_cp030

0x0214,	// (0x0004ea76) list_double_fisheye_pane_g4_ParamLimits

0x0214,	// (0x0004ea76) list_double_fisheye_pane_g4

0x0220,	// (0x0004ea82) list_double_fisheye_pane_g5_ParamLimits

0x0220,	// (0x0004ea82) list_double_fisheye_pane_g5

0xe7c8,	// (0x0005d02a) sp_fs_scroll_pane_cp03

0xd2e4,	// (0x0005bb46) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xe6e0,	// (0x0005cf42) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfce7,	// (0x0005e549) main_sp_fs_ctrlbar_pane_g_ParamLimits

0xe6ec,	// (0x0005cf4e) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0x89d0,	// (0x00057232) sp_fs_scroll_pane_cp02

0xa32b,	// (0x00058b8d) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0xa32b,	// (0x00058b8d) popup_sp_fs_calendar_preview_list_single_pane

0x99e3,	// (0x00058245) main_cam6_pano_pane

0x9a3c,	// (0x0005829e) main_mup3_pane_ParamLimits

0x99e3,	// (0x00058245) main_phacti_pane

0x815f,	// (0x000569c1) bg_button_pane_cp11

0x8179,	// (0x000569db) main_mobtv_info_pane_g2_ParamLimits

0x8179,	// (0x000569db) main_mobtv_info_pane_g2

0x0001,

0xfc47,	// (0x0005e4a9) main_mobtv_info_pane_g_ParamLimits

0xfc47,	// (0x0005e4a9) main_mobtv_info_pane_g

0x8354,	// (0x00056bb6) sc_clock_pane_t5_ParamLimits

0x8354,	// (0x00056bb6) sc_clock_pane_t5

0x8432,	// (0x00056c94) main_radioblah_pane_g1_ParamLimits

0xe525,	// (0x0005cd87) main_radioblah_pane_t3_ParamLimits

0xe525,	// (0x0005cd87) main_radioblah_pane_t3

0xe53d,	// (0x0005cd9f) main_radioblah_pane_t4_ParamLimits

0xe53d,	// (0x0005cd9f) main_radioblah_pane_t4

0x845a,	// (0x00056cbc) main_radioblah_text_pane_ParamLimits

0x845a,	// (0x00056cbc) main_radioblah_text_pane

0x846c,	// (0x00056cce) main_radioblah_info_pane_g1_ParamLimits

0x8505,	// (0x00056d67) main_radioblah_info_pane_t4_ParamLimits

0x8505,	// (0x00056d67) main_radioblah_info_pane_t4

0x9a3c,	// (0x0005829e) main_sp_fs_calendar_pane

0x8af8,	// (0x0005735a) main_phacti_pane_g1

0x8b00,	// (0x00057362) phacti_note_pane_ParamLimits

0x8b00,	// (0x00057362) phacti_note_pane

0xe876,	// (0x0005d0d8) phacti_term_pane_ParamLimits

0xe876,	// (0x0005d0d8) phacti_term_pane

0xe88b,	// (0x0005d0ed) phacti_note_pane_t1_ParamLimits

0xe88b,	// (0x0005d0ed) phacti_note_pane_t1

0x8b14,	// (0x00057376) phacti_term_pane_g1

0x8b1c,	// (0x0005737e) phacti_term_pane_t1_ParamLimits

0x8b1c,	// (0x0005737e) phacti_term_pane_t1

0xe8a2,	// (0x0005d104) popup_sp_fs_calendar_preview_list_single_pane_g1

0xe8aa,	// (0x0005d10c) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfdc1,	// (0x0005e623) popup_sp_fs_calendar_preview_list_single_pane_g

0xe8b2,	// (0x0005d114) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xe8b2,	// (0x0005d114) popup_sp_fs_calendar_preview_list_single_pane_t1

0xe8c8,	// (0x0005d12a) aid_popup_sp_fs_bg_corner_pane

0xcbfd,	// (0x0005b45f) popup_sp_fs_calendar_preview_bg_pane_g1

0x99e3,	// (0x00058245) popup_sp_fs_calendar_preview_bg_pane

0xe8d0,	// (0x0005d132) popup_sp_fs_calendar_preview_list_pane

0xc7ac,	// (0x0005b00e) bg_main_sp_fs_cale_pane_ParamLimits

0xc7ac,	// (0x0005b00e) bg_main_sp_fs_cale_pane

0x8bac,	// (0x0005740e) listscroll_cale_mrui_pane_ParamLimits

0x8bac,	// (0x0005740e) listscroll_cale_mrui_pane

0x8bc1,	// (0x00057423) listscroll_sp_fs_schedule_track_pane

0x8bca,	// (0x0005742c) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0x8bca,	// (0x0005742c) main_sp_fs_ctrlbar_pane_cp01

0xe8d8,	// (0x0005d13a) main_sp_fs_ribbon_pane

0x8bdd,	// (0x0005743f) popup_sp_fs_cale_preview_window

0x8bef,	// (0x00057451) list_single_sp_fs_schedule_track_pane_ParamLimits

0x8bef,	// (0x00057451) list_single_sp_fs_schedule_track_pane

0x9a3c,	// (0x0005829e) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0x9a3c,	// (0x0005829e) bg_sp_fs_highlight_list_pane_cp03

0x8c03,	// (0x00057465) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0x8c03,	// (0x00057465) list_single_sp_fs_schedule_track_pane_g1

0x8c0f,	// (0x00057471) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0x8c0f,	// (0x00057471) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfdc6,	// (0x0005e628) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfdc6,	// (0x0005e628) list_single_sp_fs_schedule_track_pane_g

0x8c1b,	// (0x0005747d) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0x8c1b,	// (0x0005747d) list_single_sp_fs_schedule_track_pane_t1

0x8c3d,	// (0x0005749f) sp_fs_schedule_track_pane_ParamLimits

0x8c3d,	// (0x0005749f) sp_fs_schedule_track_pane

0xe8e0,	// (0x0005d142) sp_fs_schedule_track_pane_g1

0xe8e8,	// (0x0005d14a) sp_fs_schedule_track_pane_g2

0xe8f0,	// (0x0005d152) sp_fs_schedule_track_pane_g3

0xe8f8,	// (0x0005d15a) sp_fs_schedule_track_pane_g4

0xe900,	// (0x0005d162) sp_fs_schedule_track_pane_g5

0x0004,

0xfdcb,	// (0x0005e62d) sp_fs_schedule_track_pane_g

0xd617,	// (0x0005be79) bg_sp_fs_schedule_viewer_highlight_g1

0xa656,	// (0x00058eb8) bg_sp_fs_schedule_viewer_highlight_g2

0xd61f,	// (0x0005be81) bg_sp_fs_schedule_viewer_highlight_g3

0xd627,	// (0x0005be89) bg_sp_fs_schedule_viewer_highlight_g4

0xd85c,	// (0x0005c0be) bg_sp_fs_schedule_viewer_highlight_g5

0xd637,	// (0x0005be99) bg_sp_fs_schedule_viewer_highlight_g6

0xd63f,	// (0x0005bea1) bg_sp_fs_schedule_viewer_highlight_g7

0xd647,	// (0x0005bea9) bg_sp_fs_schedule_viewer_highlight_g8

0xa636,	// (0x00058e98) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfdd6,	// (0x0005e638) bg_sp_fs_schedule_viewer_highlight_g

0x99e3,	// (0x00058245) bg_main_sp_fs_ribbon_pane

0x8c52,	// (0x000574b4) main_sp_fs_ribbon_pane_g1

0xe908,	// (0x0005d16a) main_sp_fs_ribbon_pane_t1

0x8c5b,	// (0x000574bd) main_sp_fs_ribbon_pane_t2

0xe917,	// (0x0005d179) main_sp_fs_ribbon_pane_t3

0x0002,

0xfde9,	// (0x0005e64b) main_sp_fs_ribbon_pane_t

0xe926,	// (0x0005d188) main_sp_fs_ribbon_scheduler_pane

0xe92e,	// (0x0005d190) bg_main_sp_fs_ribbon_pane_g1

0xe937,	// (0x0005d199) bg_main_sp_fs_ribbon_pane_g2

0xe940,	// (0x0005d1a2) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfdf0,	// (0x0005e652) bg_main_sp_fs_ribbon_pane_g

0xe948,	// (0x0005d1aa) main_sp_fs_ribbon_scheduler_pane_g1

0xe951,	// (0x0005d1b3) main_sp_fs_ribbon_scheduler_pane_g2

0xe95a,	// (0x0005d1bc) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfdf7,	// (0x0005e659) main_sp_fs_ribbon_scheduler_pane_g

0xe963,	// (0x0005d1c5) list_cale_mrui_pane

0x8c6a,	// (0x000574cc) sp_fs_scroll_pane_cp07_ParamLimits

0x8c6a,	// (0x000574cc) sp_fs_scroll_pane_cp07

0x8c86,	// (0x000574e8) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0x8c86,	// (0x000574e8) bg_sp_fs_schedule_viewer_highlight

0xe970,	// (0x0005d1d2) list_single_sp_fs_schedule_track_pane_cp01

0xe978,	// (0x0005d1da) list_sp_fs_schedule_track_pane

0xe980,	// (0x0005d1e2) sp_fs_scroll_pane_cp06_ParamLimits

0xe980,	// (0x0005d1e2) sp_fs_scroll_pane_cp06

0xcbfd,	// (0x0005b45f) bgmain_sp_fs_calendar_pane_g1

0x0864,	// (0x0004f0c6) list_single_cale_mrui_pane_ParamLimits

0x0864,	// (0x0004f0c6) list_single_cale_mrui_pane

0x8c98,	// (0x000574fa) list_single_cale_mrui_row_pane_ParamLimits

0x8c98,	// (0x000574fa) list_single_cale_mrui_row_pane

0x8cae,	// (0x00057510) list_single_cale_mrui_row_pane_g1_ParamLimits

0x8cae,	// (0x00057510) list_single_cale_mrui_row_pane_g1

0x8ce6,	// (0x00057548) list_single_cale_mrui_row_pane_t1_ParamLimits

0x8ce6,	// (0x00057548) list_single_cale_mrui_row_pane_t1

0x0879,	// (0x0004f0db) list_single_cale_mrui_row_pane_t2_ParamLimits

0x0879,	// (0x0004f0db) list_single_cale_mrui_row_pane_t2

0x8cf8,	// (0x0005755a) list_single_cale_mrui_row_pane_t3_ParamLimits

0x8cf8,	// (0x0005755a) list_single_cale_mrui_row_pane_t3

0x8d27,	// (0x00057589) list_single_cale_mrui_row_pane_t4_ParamLimits

0x8d27,	// (0x00057589) list_single_cale_mrui_row_pane_t4

0x0003,

0xfe05,	// (0x0005e667) list_single_cale_mrui_row_pane_t_ParamLimits

0xfe05,	// (0x0005e667) list_single_cale_mrui_row_pane_t

0x08e1,	// (0x0004f143) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x08e1,	// (0x0004f143) list_single_cmail_header_editor_pane_bg_cp01

0x0907,	// (0x0004f169) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x0907,	// (0x0004f169) list_single_cmail_header_editor_pane_bg_cp02

0x8d56,	// (0x000575b8) main_radioblah_text_pane_t1_ParamLimits

0x8d56,	// (0x000575b8) main_radioblah_text_pane_t1

0xe99f,	// (0x0005d201) cam6_indi_pane_cp01

0xe9a7,	// (0x0005d209) cam6_mode_pane_cp01

0xe9af,	// (0x0005d211) cam6_pano_pane

0xe9b8,	// (0x0005d21a) cam6_zoom_pane_cp01

0xe9c2,	// (0x0005d224) cam6_pano_image_pane

0xe9cb,	// (0x0005d22d) cam6_pano_pane_g1

0xe27a,	// (0x0005cadc) cam6_pano_pane_g2

0xe9d4,	// (0x0005d236) cam6_pano_pane_g3

0xe9dd,	// (0x0005d23f) cam6_pano_pane_g4

0xd197,	// (0x0005b9f9) cam6_pano_pane_g5

0xe9e6,	// (0x0005d248) cam6_pano_pane_g6

0xe9ee,	// (0x0005d250) cam6_pano_pane_g7

0xe9f6,	// (0x0005d258) cam6_pano_pane_g8

0xe9ff,	// (0x0005d261) cam6_pano_pane_g9

0x0008,

0xfe0e,	// (0x0005e670) cam6_pano_pane_g

0x99e3,	// (0x00058245) main_browser_tag_pane

0xe857,	// (0x0005d0b9) grid_navstr_albumart_pane

0xea0a,	// (0x0005d26c) cell_navstr_albumart_pane_ParamLimits

0xea0a,	// (0x0005d26c) cell_navstr_albumart_pane

0xea29,	// (0x0005d28b) cell_navstr_albumart_pane_g1

0xc5b9,	// (0x0005ae1b) cell_navstr_albumart_pane_g2

0xc5c9,	// (0x0005ae2b) cell_navstr_albumart_pane_g3

0xc5c1,	// (0x0005ae23) cell_navstr_albumart_pane_g4

0x0003,

0xfe21,	// (0x0005e683) cell_navstr_albumart_pane_g

0x8d71,	// (0x000575d3) bt_list_pane_ParamLimits

0x8d71,	// (0x000575d3) bt_list_pane

0x8d87,	// (0x000575e9) bt_list_pane_t1

0x8d96,	// (0x000575f8) bt_list_pane_t2

0x0001,

0xfe2a,	// (0x0005e68c) bt_list_pane_t

0x99e3,	// (0x00058245) main_cale_prevew_pane

0x8da5,	// (0x00057607) popup_cale_preview_window_ParamLimits

0x8da5,	// (0x00057607) popup_cale_preview_window

0x9a3c,	// (0x0005829e) bg_popup_preview_window_pane_cp05_ParamLimits

0x9a3c,	// (0x0005829e) bg_popup_preview_window_pane_cp05

0xea31,	// (0x0005d293) list_cale_preview_pane_ParamLimits

0xea31,	// (0x0005d293) list_cale_preview_pane

0x8dc2,	// (0x00057624) list_double_cale_preview_pane_ParamLimits

0x8dc2,	// (0x00057624) list_double_cale_preview_pane

0x8dd6,	// (0x00057638) list_single_cale_preview_pane_ParamLimits

0x8dd6,	// (0x00057638) list_single_cale_preview_pane

0x8dee,	// (0x00057650) list_single_cale_preview_pane_g1

0x8df6,	// (0x00057658) list_single_cale_preview_pane_t1_ParamLimits

0x8df6,	// (0x00057658) list_single_cale_preview_pane_t1

0x8e0b,	// (0x0005766d) list_double_cale_preview_pane_g1

0x8e13,	// (0x00057675) list_double_cale_preview_pane_t1_ParamLimits

0x8e13,	// (0x00057675) list_double_cale_preview_pane_t1

0x8e28,	// (0x0005768a) list_double_cale_preview_pane_t2_ParamLimits

0x8e28,	// (0x0005768a) list_double_cale_preview_pane_t2

0x0001,

0xfe2f,	// (0x0005e691) list_double_cale_preview_pane_t_ParamLimits

0xfe2f,	// (0x0005e691) list_double_cale_preview_pane_t

0x99e3,	// (0x00058245) main_ezdial_pane

0x9a3c,	// (0x0005829e) main_sp_fs_email_pane_ParamLimits

0x8720,	// (0x00056f82) cmail_ddmenu_btn01_pane_ParamLimits

0x8720,	// (0x00056f82) cmail_ddmenu_btn01_pane

0x8733,	// (0x00056f95) cmail_ddmenu_btn02_pane_ParamLimits

0x8733,	// (0x00056f95) cmail_ddmenu_btn02_pane

0x8756,	// (0x00056fb8) cmail_ddmenu_btn03_pane_ParamLimits

0x8756,	// (0x00056fb8) cmail_ddmenu_btn03_pane

0x0298,	// (0x0004eafa) main_sp_fs_ctrlbar_pane_ParamLimits

0x02bc,	// (0x0004eb1e) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0x89da,	// (0x0005723c) list_cmail_body_pane_ParamLimits

0xe7d7,	// (0x0005d039) bg_button_pane_cp12

0xe7e0,	// (0x0005d042) list_single_cmail_header_detail_pane_g3_ParamLimits

0xe7e0,	// (0x0005d042) list_single_cmail_header_detail_pane_g3

0x8a34,	// (0x00057296) list_single_cmail_header_detail_pane_t2_ParamLimits

0x8a34,	// (0x00057296) list_single_cmail_header_detail_pane_t2

0x0001,

0xfdb2,	// (0x0005e614) list_single_cmail_header_detail_pane_t_ParamLimits

0xfdb2,	// (0x0005e614) list_single_cmail_header_detail_pane_t

0x8b31,	// (0x00057393) phacti_term_pane_t2_ParamLimits

0x8b31,	// (0x00057393) phacti_term_pane_t2

0x0001,

0xfdbc,	// (0x0005e61e) phacti_term_pane_t_ParamLimits

0xfdbc,	// (0x0005e61e) phacti_term_pane_t

0xea3d,	// (0x0005d29f) aid_size_list_single_double

0x8e40,	// (0x000576a2) popup_ezdial_listscroll_window

0x8e5c,	// (0x000576be) popup_number_entry_window_cp01

0xb375,	// (0x00059bd7) bg_popup_call_pane_cp09

0xea49,	// (0x0005d2ab) ezdial_list_pane

0xea51,	// (0x0005d2b3) scroll_pane_cp23

0xc7ac,	// (0x0005b00e) bg_button_pane_cp028_ParamLimits

0xc7ac,	// (0x0005b00e) bg_button_pane_cp028

0x8e6a,	// (0x000576cc) cmail_ddmenu_btn01_pane_g1_ParamLimits

0x8e6a,	// (0x000576cc) cmail_ddmenu_btn01_pane_g1

0x8e79,	// (0x000576db) cmail_ddmenu_btn01_pane_g2_ParamLimits

0x8e79,	// (0x000576db) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfe34,	// (0x0005e696) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfe34,	// (0x0005e696) cmail_ddmenu_btn01_pane_g

0xea59,	// (0x0005d2bb) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xea59,	// (0x0005d2bb) cmail_ddmenu_btn01_pane_t1

0xc7ac,	// (0x0005b00e) bg_button_pane_cp029_ParamLimits

0xc7ac,	// (0x0005b00e) bg_button_pane_cp029

0x8e8f,	// (0x000576f1) cmail_ddmenu_btn02_pane_g1_ParamLimits

0x8e8f,	// (0x000576f1) cmail_ddmenu_btn02_pane_g1

0x8eaa,	// (0x0005770c) cmail_ddmenu_btn02_pane_t1_ParamLimits

0x8eaa,	// (0x0005770c) cmail_ddmenu_btn02_pane_t1

0x9a3c,	// (0x0005829e) bg_button_pane_cp031_ParamLimits

0x9a3c,	// (0x0005829e) bg_button_pane_cp031

0x8e8f,	// (0x000576f1) cmail_ddmenu_btn03_pane_g1_ParamLimits

0x8e8f,	// (0x000576f1) cmail_ddmenu_btn03_pane_g1

0x8eaa,	// (0x0005770c) cmail_ddmenu_btn03_pane_t1_ParamLimits

0x8eaa,	// (0x0005770c) cmail_ddmenu_btn03_pane_t1

0x6243,	// (0x00054aa5) cell_dialer2_keypad_pane_t1_ParamLimits

0x625d,	// (0x00054abf) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x625d,	// (0x00054abf) cell_dialer2_keypad_pane_t1_copy1

0x7fc4,	// (0x00056826) ncimui_group_button_pane

0x9a3c,	// (0x0005829e) main_sp_fs_calendar_pane_ParamLimits

0xe5a3,	// (0x0005ce05) list_single_cmail_header_caption_pane_ParamLimits

0x8b64,	// (0x000573c6) aid_recal_txt_sm_pane

0x99e3,	// (0x00058245) mian_recal_day_pane

0x8bdd,	// (0x0005743f) popup_sp_fs_cale_preview_window_ParamLimits

0xea6f,	// (0x0005d2d1) list_recal_day_pane

0x8eed,	// (0x0005774f) list_single_recal_day_pane_ParamLimits

0x8eed,	// (0x0005774f) list_single_recal_day_pane

0xea96,	// (0x0005d2f8) list_single_recal_day_pane_g1_ParamLimits

0xea96,	// (0x0005d2f8) list_single_recal_day_pane_g1

0x8eff,	// (0x00057761) list_single_recal_day_pane_g2_ParamLimits

0x8eff,	// (0x00057761) list_single_recal_day_pane_g2

0x8f0b,	// (0x0005776d) list_single_recal_day_pane_g3_ParamLimits

0x8f0b,	// (0x0005776d) list_single_recal_day_pane_g3

0x0927,	// (0x0004f189) list_single_recal_day_pane_g4_ParamLimits

0x0927,	// (0x0004f189) list_single_recal_day_pane_g4

0x8f17,	// (0x00057779) list_single_recal_day_pane_g5_ParamLimits

0x8f17,	// (0x00057779) list_single_recal_day_pane_g5

0x8f23,	// (0x00057785) list_single_recal_day_pane_g6_ParamLimits

0x8f23,	// (0x00057785) list_single_recal_day_pane_g6

0x0004,

0xfe43,	// (0x0005e6a5) list_single_recal_day_pane_g_ParamLimits

0xfe43,	// (0x0005e6a5) list_single_recal_day_pane_g

0x8f37,	// (0x00057799) list_single_recal_day_pane_t1

0x8f49,	// (0x000577ab) list_single_recal_day_pane_t2

0x0001,

0xfe4e,	// (0x0005e6b0) list_single_recal_day_pane_t

0x8f5b,	// (0x000577bd) ncimui_query_button_pane_ParamLimits

0x8f5b,	// (0x000577bd) ncimui_query_button_pane

0x8f6b,	// (0x000577cd) ncimui_query_button_pane_t1_ParamLimits

0x8f6b,	// (0x000577cd) ncimui_query_button_pane_t1

0xeaa2,	// (0x0005d304) ncimui_query_button_pane_t2_ParamLimits

0xeaa2,	// (0x0005d304) ncimui_query_button_pane_t2

0x0001,

0xfe53,	// (0x0005e6b5) ncimui_query_button_pane_t_ParamLimits

0xfe53,	// (0x0005e6b5) ncimui_query_button_pane_t

0x8f7e,	// (0x000577e0) query_button_pane_ParamLimits

0x8f7e,	// (0x000577e0) query_button_pane

0x99e3,	// (0x00058245) bg_button_pane_cp0028

0xeab5,	// (0x0005d317) query_button_pane_t1

0x426c,	// (0x00052ace) main_tport_pane_ParamLimits

0x888a,	// (0x000570ec) bg_popup_window_pane_cp01_ParamLimits

0x888a,	// (0x000570ec) bg_popup_window_pane_cp01

0x88a5,	// (0x00057107) heading_pane_cp08_ParamLimits

0x88a5,	// (0x00057107) heading_pane_cp08

0x88b8,	// (0x0005711a) heading_pane_cp07_ParamLimits

0x88b8,	// (0x0005711a) heading_pane_cp07

0x8969,	// (0x000571cb) cell_tport_appsw_pane_g2

0x0002,

0xfd9f,	// (0x0005e601) cell_tport_appsw_pane_g

0xfd53,	// (0x0004e5b5) input_candi_list_open_g1

0xae50,	// (0x000596b2) list_cale_time_pane_g6_ParamLimits

0xae50,	// (0x000596b2) list_cale_time_pane_g6

0x5076,	// (0x000538d8) aid_size_touch_calib_1_ParamLimits

0x5076,	// (0x000538d8) aid_size_touch_calib_1

0x5088,	// (0x000538ea) aid_size_touch_calib_2_ParamLimits

0x5088,	// (0x000538ea) aid_size_touch_calib_2

0x50a0,	// (0x00053902) aid_size_touch_calib_3_ParamLimits

0x50a0,	// (0x00053902) aid_size_touch_calib_3

0x50be,	// (0x00053920) aid_size_touch_calib_4_ParamLimits

0x50be,	// (0x00053920) aid_size_touch_calib_4

0x50d6,	// (0x00053938) main_touch_calib_button_group_pane_ParamLimits

0x50d6,	// (0x00053938) main_touch_calib_button_group_pane

0x50ee,	// (0x00053950) main_touch_calib_pane_g1_ParamLimits

0x5100,	// (0x00053962) main_touch_calib_pane_g2_ParamLimits

0x5112,	// (0x00053974) main_touch_calib_pane_g3_ParamLimits

0x5124,	// (0x00053986) main_touch_calib_pane_g4_ParamLimits

0xf758,	// (0x0005dfba) main_touch_calib_pane_g_ParamLimits

0x5136,	// (0x00053998) main_touch_calib_pane_t1_ParamLimits

0x5150,	// (0x000539b2) main_touch_calib_pane_t2_ParamLimits

0x516a,	// (0x000539cc) main_touch_calib_pane_t3_ParamLimits

0x517e,	// (0x000539e0) main_touch_calib_pane_t4_ParamLimits

0x5194,	// (0x000539f6) main_touch_calib_pane_t5_ParamLimits

0xf761,	// (0x0005dfc3) main_touch_calib_pane_t_ParamLimits

0xcf2d,	// (0x0005b78f) list_single_fp_cale_pane_g3_ParamLimits

0xcf2d,	// (0x0005b78f) list_single_fp_cale_pane_g3

0x9a3c,	// (0x0005829e) bg_button_pane_cp012_ParamLimits

0x9a3c,	// (0x0005829e) bg_vkb2_func_pane_cp03_ParamLimits

0x7226,	// (0x00055a88) cell_vitu2_function_top_pane_g1_ParamLimits

0x9a3c,	// (0x0005829e) bg_vkb2_func_pane_cp04_ParamLimits

0x7f52,	// (0x000567b4) main_ncimui_button_group_pane_ParamLimits

0x7f52,	// (0x000567b4) main_ncimui_button_group_pane

0x7fb2,	// (0x00056814) main_ncimui_pane_t3_ParamLimits

0x7fb2,	// (0x00056814) main_ncimui_pane_t3

0xe86d,	// (0x0005d0cf) phacti_button_group_pane

0xea3d,	// (0x0005d29f) aid_size_list_single_double_ParamLimits

0x8e40,	// (0x000576a2) popup_ezdial_listscroll_window_ParamLimits

0x8e5c,	// (0x000576be) popup_number_entry_window_cp01_ParamLimits

0x8f91,	// (0x000577f3) phacti_button_pane_ParamLimits

0x8f91,	// (0x000577f3) phacti_button_pane

0x99e3,	// (0x00058245) bg_button_pane_cp14

0xeac3,	// (0x0005d325) phacti_button_pane_t1

0x8fa2,	// (0x00057804) main_touch_calib_button_pane_ParamLimits

0x8fa2,	// (0x00057804) main_touch_calib_button_pane

0xa19f,	// (0x00058a01) bg_button_pane_cp18_ParamLimits

0xa19f,	// (0x00058a01) bg_button_pane_cp18

0xead1,	// (0x0005d333) main_touch_calib_button_pane_t1_ParamLimits

0xead1,	// (0x0005d333) main_touch_calib_button_pane_t1

0xeae7,	// (0x0005d349) main_touch_calib_button_pane_t2_ParamLimits

0xeae7,	// (0x0005d349) main_touch_calib_button_pane_t2

0x0001,

0xfe58,	// (0x0005e6ba) main_touch_calib_button_pane_t_ParamLimits

0xfe58,	// (0x0005e6ba) main_touch_calib_button_pane_t

0x99e3,	// (0x00058245) cell_ncimui_button_pane

0x99e3,	// (0x00058245) bg_button_pane_cp032

0xeb05,	// (0x0005d367) cell_ncimui_button_pane_t1

0xaa52,	// (0x000592b4) image3_infobar_pane_ParamLimits

0xaa52,	// (0x000592b4) image3_infobar_pane

0x8380,	// (0x00056be2) fs_bigclock_status_pane_ParamLimits

0x8380,	// (0x00056be2) fs_bigclock_status_pane

0x838d,	// (0x00056bef) main_fs_bigclock_clock_pane_ParamLimits

0x838d,	// (0x00056bef) main_fs_bigclock_clock_pane

0x83b7,	// (0x00056c19) main_fs_bigclock_indi_pane_ParamLimits

0x83b7,	// (0x00056c19) main_fs_bigclock_indi_pane

0x83f5,	// (0x00056c57) main_fs_bigclock_swipe_pane_ParamLimits

0x83f5,	// (0x00056c57) main_fs_bigclock_swipe_pane

0x99e3,	// (0x00058245) main_fs_clock_dumped_data

0xe387,	// (0x0005cbe9) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xe387,	// (0x0005cbe9) list_single_fs_bigclock_indicator_pane_g1

0xe3b1,	// (0x0005cc13) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xe3b1,	// (0x0005cc13) list_single_fs_bigclock_indicator_pane_g2

0xe3cb,	// (0x0005cc2d) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xe3cb,	// (0x0005cc2d) list_single_fs_bigclock_indicator_pane_g3

0xe3e5,	// (0x0005cc47) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xe3e5,	// (0x0005cc47) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfc7b,	// (0x0005e4dd) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfc7b,	// (0x0005e4dd) list_single_fs_bigclock_indicator_pane_g

0xe410,	// (0x0005cc72) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xe410,	// (0x0005cc72) list_single_fs_bigclock_indicator_pane_t1

0xe438,	// (0x0005cc9a) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xe438,	// (0x0005cc9a) list_single_fs_bigclock_indicator_pane_t2

0xe460,	// (0x0005ccc2) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xe460,	// (0x0005ccc2) list_single_fs_bigclock_indicator_pane_t3

0xe488,	// (0x0005ccea) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xe488,	// (0x0005ccea) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfc86,	// (0x0005e4e8) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfc86,	// (0x0005e4e8) list_single_fs_bigclock_indicator_pane_t

0xeb13,	// (0x0005d375) image3_infobar_fav_pane_ParamLimits

0xeb13,	// (0x0005d375) image3_infobar_fav_pane

0xeb23,	// (0x0005d385) image3_infobar_loc_pane_ParamLimits

0xeb23,	// (0x0005d385) image3_infobar_loc_pane

0xeb39,	// (0x0005d39b) image3_infobar_time_pane_ParamLimits

0xeb39,	// (0x0005d39b) image3_infobar_time_pane

0xcbfd,	// (0x0005b45f) image3_infobar_time_pane_g1

0xeb49,	// (0x0005d3ab) image3_infobar_time_pane_t1

0xcbfd,	// (0x0005b45f) image3_infobar_loc_pane_g1

0xeb57,	// (0x0005d3b9) image3_infobar_loc_pane_g2

0x0001,

0xfe5d,	// (0x0005e6bf) image3_infobar_loc_pane_g

0xeb5f,	// (0x0005d3c1) image3_infobar_loc_pane_t1

0xcbfd,	// (0x0005b45f) image3_infobar_fav_pane_g1

0xeb6d,	// (0x0005d3cf) image3_infobar_fav_pane_g2

0x0001,

0xfe62,	// (0x0005e6c4) image3_infobar_fav_pane_g

0xeb75,	// (0x0005d3d7) fs_bigclock_status_battery_pane

0xeb7e,	// (0x0005d3e0) fs_bigclock_status_signal_pane

0xeb87,	// (0x0005d3e9) fs_bigclock_status_title_pane

0xeb90,	// (0x0005d3f2) fs_bigclock_status_signal_pane_g1

0xeb99,	// (0x0005d3fb) fs_bigclock_status_signal_pane_g2

0x0001,

0xfe67,	// (0x0005e6c9) fs_bigclock_status_signal_pane_g

0xeba1,	// (0x0005d403) fs_bigclock_status_battery_pane_g1

0xebaa,	// (0x0005d40c) fs_bigclock_status_battery_pane_g2

0x0001,

0xfe6c,	// (0x0005e6ce) fs_bigclock_status_battery_pane_g

0xebb2,	// (0x0005d414) fs_bigclock_status_title_pane_t1

0xcbfd,	// (0x0005b45f) main_fs_bigclock_clock_pane_g1

0xebc0,	// (0x0005d422) main_fs_bigclock_clock_pane_g2

0xebcb,	// (0x0005d42d) main_fs_bigclock_clock_pane_g3

0xebcb,	// (0x0005d42d) main_fs_bigclock_clock_pane_g4

0x0003,

0xfe71,	// (0x0005e6d3) main_fs_bigclock_clock_pane_g

0xebd7,	// (0x0005d439) main_fs_bigclock_clock_pane_t1

0x8fb7,	// (0x00057819) main_fs_bigclock_clock_pane_t2

0x0001,

0xfe7a,	// (0x0005e6dc) main_fs_bigclock_clock_pane_t

0x8fc6,	// (0x00057828) list_single_fs_bigclock_indicator_pane_ParamLimits

0x8fc6,	// (0x00057828) list_single_fs_bigclock_indicator_pane

0x8fd7,	// (0x00057839) list_single_fs_bigclock_pane_ParamLimits

0x8fd7,	// (0x00057839) list_single_fs_bigclock_pane

0xebee,	// (0x0005d450) main_fs_bigclock_indicator_pane_t1

0xebfd,	// (0x0005d45f) list_single_fs_bigclock_pane_g1

0xec05,	// (0x0005d467) list_single_fs_bigclock_pane_t1

0xcbfd,	// (0x0005b45f) main_fs_bigclock_swipe_pane_g1

0xec48,	// (0x0005d4aa) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfe8b,	// (0x0005e6ed) main_fs_bigclock_swipe_pane_g

0xec50,	// (0x0005d4b2) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xec50,	// (0x0005d4b2) main_fs_bigclock_swipe_pane_t1

0x2f90,	// (0x000517f2) call_type_pane_ParamLimits

0x99e3,	// (0x00058245) main_btmg_pane

0x8cda,	// (0x0005753c) list_single_cale_mrui_row_pane_g2_ParamLimits

0x8cda,	// (0x0005753c) list_single_cale_mrui_row_pane_g2

0x0002,

0xfdfe,	// (0x0005e660) list_single_cale_mrui_row_pane_g_ParamLimits

0xfdfe,	// (0x0005e660) list_single_cale_mrui_row_pane_g

0x8edb,	// (0x0005773d) list_recal_vselct_arw_lo_pane

0xea8e,	// (0x0005d2f0) list_recal_vselct_arw_up_pane

0x8ee3,	// (0x00057745) list_recal_vselct_pane

0x903a,	// (0x0005789c) btmg_button_pane

0x9044,	// (0x000578a6) main_btmg_pane_g1

0x99e3,	// (0x00058245) bg_button_pane_cp044

0xec6d,	// (0x0005d4cf) btmg_button_pane_t1

0xc798,	// (0x0005affa) aid_listscroll_gen

0x9a3c,	// (0x0005829e) main_cntbar_detail_pane

0xe7b8,	// (0x0005d01a) list_cmail_folder_pane

0xe7c8,	// (0x0005d02a) sp_fs_scroll_pane_cp03_ParamLimits

0x093f,	// (0x0004f1a1) list_single_fs_dyc_pane_cp01_ParamLimits

0x093f,	// (0x0004f1a1) list_single_fs_dyc_pane_cp01

0xec7b,	// (0x0005d4dd) aid_size_cmail_indent

0xac7f,	// (0x000594e1) list_single_dyc_row_pane_cp01

0x907e,	// (0x000578e0) cntbar_detail_list_pane_ParamLimits

0x907e,	// (0x000578e0) cntbar_detail_list_pane

0x90d0,	// (0x00057932) main_cntbar_detail_cont_pane_ParamLimits

0x90d0,	// (0x00057932) main_cntbar_detail_cont_pane

0x2f84,	// (0x000517e6) scroll_pane_cp032_ParamLimits

0x2f84,	// (0x000517e6) scroll_pane_cp032

0x90e4,	// (0x00057946) cntbar_detail_list_event_pane_ParamLimits

0x90e4,	// (0x00057946) cntbar_detail_list_event_pane

0x9090,	// (0x000578f2) cntbar_detail_list_shct_pane

0xacea,	// (0x0005954c) aid_list_gen

0xec84,	// (0x0005d4e6) aid_scroll

0xec8d,	// (0x0005d4ef) aid_size_touch_scroll_bar

0x7822,	// (0x00056084) aid_list_double

0xec96,	// (0x0005d4f8) aid_list_single

0x0106,	// (0x0004e968) aid_list_single_lg

0xac88,	// (0x000594ea) aid_list_z_g_a_sm

0xac90,	// (0x000594f2) aid_list_z_g_d

0xac98,	// (0x000594fa) aid_txt_z_prm

0x095a,	// (0x0004f1bc) aid_txt_z_prm_cp01

0x0968,	// (0x0004f1ca) aid_txt_z_sec

0x90f4,	// (0x00057956) main_cntbar_detail_cont_pane_g1_ParamLimits

0x90f4,	// (0x00057956) main_cntbar_detail_cont_pane_g1

0x9108,	// (0x0005796a) main_cntbar_detail_cont_pane_g2_ParamLimits

0x9108,	// (0x0005796a) main_cntbar_detail_cont_pane_g2

0x0001,

0xfe90,	// (0x0005e6f2) main_cntbar_detail_cont_pane_g_ParamLimits

0xfe90,	// (0x0005e6f2) main_cntbar_detail_cont_pane_g

0xec9f,	// (0x0005d501) main_cntbar_detail_cont_pane_t1

0xecad,	// (0x0005d50f) main_cntbar_detail_cont_pane_t2

0xecbb,	// (0x0005d51d) main_cntbar_detail_cont_pane_t3

0x0002,

0xfe95,	// (0x0005e6f7) main_cntbar_detail_cont_pane_t

0x9118,	// (0x0005797a) cell_cntbar_detail_list_shct_pane_ParamLimits

0x9118,	// (0x0005797a) cell_cntbar_detail_list_shct_pane

0xecc9,	// (0x0005d52b) cntbar_detail_list_shct_pane_g1

0xecd2,	// (0x0005d534) cntbar_detail_list_shct_pane_g2

0x0001,

0xfe9c,	// (0x0005e6fe) cntbar_detail_list_shct_pane_g

0x912a,	// (0x0005798c) cntbar_detail_list_event_pane_g1_ParamLimits

0x912a,	// (0x0005798c) cntbar_detail_list_event_pane_g1

0x9136,	// (0x00057998) cntbar_detail_list_event_pane_g2_ParamLimits

0x9136,	// (0x00057998) cntbar_detail_list_event_pane_g2

0x0005,

0xfea1,	// (0x0005e703) cntbar_detail_list_event_pane_g_ParamLimits

0xfea1,	// (0x0005e703) cntbar_detail_list_event_pane_g

0x91a4,	// (0x00057a06) cntbar_detail_list_event_pane_t1_ParamLimits

0x91a4,	// (0x00057a06) cntbar_detail_list_event_pane_t1

0x91b9,	// (0x00057a1b) cntbar_detail_list_event_pane_t2_ParamLimits

0x91b9,	// (0x00057a1b) cntbar_detail_list_event_pane_t2

0x0002,

0xfeae,	// (0x0005e710) cntbar_detail_list_event_pane_t_ParamLimits

0xfeae,	// (0x0005e710) cntbar_detail_list_event_pane_t

0xcbfd,	// (0x0005b45f) cell_cntbar_detail_list_shct_pane_g1

0x3336,	// (0x00051b98) navi_pane_mv_g3

0x9a3c,	// (0x0005829e) main_cntbar_detail_pane_ParamLimits

0x99e3,	// (0x00058245) main_notif_wgt_pane

0xa86a,	// (0x000590cc) aid_tch_main_mp4_pane_g4

0xaa48,	// (0x000592aa) popup_slider_window_cp02

0x8ed1,	// (0x00057733) list_recal_day_event_pane

0x904e,	// (0x000578b0) cntbar_detail_btn_pane_ParamLimits

0x904e,	// (0x000578b0) cntbar_detail_btn_pane

0x9066,	// (0x000578c8) cntbar_detail_btn_pane_cp01_ParamLimits

0x9066,	// (0x000578c8) cntbar_detail_btn_pane_cp01

0x9090,	// (0x000578f2) cntbar_detail_list_shct_pane_ParamLimits

0x90a0,	// (0x00057902) cntbar_detail_pane_g1_ParamLimits

0x90a0,	// (0x00057902) cntbar_detail_pane_g1

0x90b4,	// (0x00057916) cntbar_detail_pane_t1_ParamLimits

0x90b4,	// (0x00057916) cntbar_detail_pane_t1

0x9142,	// (0x000579a4) cntbar_detail_list_event_pane_g3_ParamLimits

0x9142,	// (0x000579a4) cntbar_detail_list_event_pane_g3

0x915a,	// (0x000579bc) cntbar_detail_list_event_pane_g4_ParamLimits

0x915a,	// (0x000579bc) cntbar_detail_list_event_pane_g4

0x9172,	// (0x000579d4) cntbar_detail_list_event_pane_g5_ParamLimits

0x9172,	// (0x000579d4) cntbar_detail_list_event_pane_g5

0x918a,	// (0x000579ec) cntbar_detail_list_event_pane_g6_ParamLimits

0x918a,	// (0x000579ec) cntbar_detail_list_event_pane_g6

0x91ce,	// (0x00057a30) cntbar_detail_list_event_pane_t3_ParamLimits

0x91ce,	// (0x00057a30) cntbar_detail_list_event_pane_t3

0x91e0,	// (0x00057a42) popup_notif_wgt_window_ParamLimits

0x91e0,	// (0x00057a42) popup_notif_wgt_window

0x91f9,	// (0x00057a5b) popup_submenu_window_cp01_ParamLimits

0x91f9,	// (0x00057a5b) popup_submenu_window_cp01

0xb375,	// (0x00059bd7) bg_popup_window_pane_cp10

0xecdb,	// (0x0005d53d) listscroll_notif_wgt_pane

0xeced,	// (0x0005d54f) list_notif_wgt_window

0xecf6,	// (0x0005d558) scroll_pane_cp033

0x920d,	// (0x00057a6f) list_notif_wgt_row_pane_ParamLimits

0x920d,	// (0x00057a6f) list_notif_wgt_row_pane

0xecff,	// (0x0005d561) aid_size_list_notif_wgt_del

0xed0c,	// (0x0005d56e) list_notif_wgt_row_pane_g1

0xed18,	// (0x0005d57a) list_notif_wgt_row_pane_g2

0xed2c,	// (0x0005d58e) list_notif_wgt_row_pane_g3

0x0002,

0xfeb5,	// (0x0005e717) list_notif_wgt_row_pane_g

0xed39,	// (0x0005d59b) list_notif_wgt_row_pane_t1

0xed4f,	// (0x0005d5b1) list_notif_wgt_row_pane_t2

0xed61,	// (0x0005d5c3) list_notif_wgt_row_pane_t3

0x0002,

0xfebc,	// (0x0005e71e) list_notif_wgt_row_pane_t

0xd864,	// (0x0005c0c6) list_recal_day_event_pane_g1

0xed73,	// (0x0005d5d5) list_recal_day_event_pane_t1

0x99e3,	// (0x00058245) bg_button_pane_cp045

0xed82,	// (0x0005d5e4) cntbar_detail_btn_pane_t1

0xc7ac,	// (0x0005b00e) main_callh_pane_ParamLimits

0xc7ac,	// (0x0005b00e) main_callh_pane

0x99e3,	// (0x00058245) main_coverflow0_pane

0x99e3,	// (0x00058245) main_wgtman_pane

0x840d,	// (0x00056c6f) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x840d,	// (0x00056c6f) main_fs_bigclock_unlock_btn_pane

0x8961,	// (0x000571c3) bg_button_pane_cp16

0x8971,	// (0x000571d3) cell_tport_appsw_pane_g3

0x921d,	// (0x00057a7f) cf0_flow_pane_ParamLimits

0x921d,	// (0x00057a7f) cf0_flow_pane

0xed90,	// (0x0005d5f2) listscroll_cf0_pane

0xed9b,	// (0x0005d5fd) main_cf0_pane_g1

0x9232,	// (0x00057a94) main_cf0_pane_t1_ParamLimits

0x9232,	// (0x00057a94) main_cf0_pane_t1

0x9249,	// (0x00057aab) main_cf0_pane_t2_ParamLimits

0x9249,	// (0x00057aab) main_cf0_pane_t2

0x0001,

0xfec8,	// (0x0005e72a) main_cf0_pane_t_ParamLimits

0xfec8,	// (0x0005e72a) main_cf0_pane_t

0xedad,	// (0x0005d60f) scroll_pane_cp11

0x9260,	// (0x00057ac2) cf0_flow_pane_g1

0x926c,	// (0x00057ace) cf0_flow_pane_g2

0x0001,

0xfecd,	// (0x0005e72f) cf0_flow_pane_g

0x9278,	// (0x00057ada) cf0_flow_pane_t1

0x99e3,	// (0x00058245) main_call6_pane

0x99e3,	// (0x00058245) main_calllock_pane

0x928a,	// (0x00057aec) call6_btn_grp_pane_ParamLimits

0x928a,	// (0x00057aec) call6_btn_grp_pane

0x92a4,	// (0x00057b06) call6_pane_g1_ParamLimits

0x92a4,	// (0x00057b06) call6_pane_g1

0x92ba,	// (0x00057b1c) popup_call6_1st_window_ParamLimits

0x92ba,	// (0x00057b1c) popup_call6_1st_window

0x92cb,	// (0x00057b2d) popup_call6_2nd_window_ParamLimits

0x92cb,	// (0x00057b2d) popup_call6_2nd_window

0x92dc,	// (0x00057b3e) cell_call6_btn_pane_ParamLimits

0x92dc,	// (0x00057b3e) cell_call6_btn_pane

0xb375,	// (0x00059bd7) bg_popup_call2_in_pane_cp03

0xedb8,	// (0x0005d61a) popup_call6_1st_window_g1

0xedc0,	// (0x0005d622) popup_call6_1st_window_g2

0xedc8,	// (0x0005d62a) popup_call6_1st_window_g3

0x0002,

0xfed2,	// (0x0005e734) popup_call6_1st_window_g

0xedd0,	// (0x0005d632) popup_call6_1st_window_t1

0xeddf,	// (0x0005d641) popup_call6_1st_window_t2

0xedef,	// (0x0005d651) popup_call6_1st_window_t3

0x0002,

0xfed9,	// (0x0005e73b) popup_call6_1st_window_t

0xb375,	// (0x00059bd7) bg_popup_call2_in_pane_cp04

0xedb8,	// (0x0005d61a) popup_call6_2nd_window_g1

0xedc0,	// (0x0005d622) popup_call6_2nd_window_g2

0xedc8,	// (0x0005d62a) popup_call6_2nd_window_g3

0x0002,

0xfed2,	// (0x0005e734) popup_call6_2nd_window_g

0xedd0,	// (0x0005d632) popup_call6_2nd_window_t1

0x99e3,	// (0x00058245) bg_button_pane_cp15

0xedff,	// (0x0005d661) cell_call6_btn_pane_g1

0xee08,	// (0x0005d66a) cell_call6_btn_pane_t1

0x92f0,	// (0x00057b52) listscroll_wgtman_pane_ParamLimits

0x92f0,	// (0x00057b52) listscroll_wgtman_pane

0x9311,	// (0x00057b73) wgtman_btn_pane_ParamLimits

0x9311,	// (0x00057b73) wgtman_btn_pane

0xb23b,	// (0x00059a9d) aid_scroll_copy1

0xee17,	// (0x0005d679) list_wgtman_pane

0x9354,	// (0x00057bb6) wgtman_btn_pane_g1_ParamLimits

0x9354,	// (0x00057bb6) wgtman_btn_pane_g1

0x9380,	// (0x00057be2) wgtman_btn_pane_t1_ParamLimits

0x9380,	// (0x00057be2) wgtman_btn_pane_t1

0xee21,	// (0x0005d683) wgtman_btn_pane_t2_ParamLimits

0xee21,	// (0x0005d683) wgtman_btn_pane_t2

0x0001,

0xfee0,	// (0x0005e742) wgtman_btn_pane_t_ParamLimits

0xfee0,	// (0x0005e742) wgtman_btn_pane_t

0xabc9,	// (0x0005942b) listrow_wgtman_pane_ParamLimits

0xabc9,	// (0x0005942b) listrow_wgtman_pane

0x93bd,	// (0x00057c1f) listrow_wgtman_pane_g1

0x93ca,	// (0x00057c2c) listrow_wgtman_pane_g2

0x0001,

0xfee5,	// (0x0005e747) listrow_wgtman_pane_g

0x0976,	// (0x0004f1d8) listrow_wgtman_pane_t1

0x098e,	// (0x0004f1f0) listrow_wgtman_pane_t2

0x0001,

0xfeea,	// (0x0005e74c) listrow_wgtman_pane_t

0x09b4,	// (0x0004f216) wait_bar_pane_cp09

0xee38,	// (0x0005d69a) main_calllock_btn_pane

0xee42,	// (0x0005d6a4) main_calllock_pane_g1

0x99e3,	// (0x00058245) bg_button_pane_cp17

0xee4e,	// (0x0005d6b0) main_calllock_btn_pane_g1

0xee57,	// (0x0005d6b9) main_calllock_btn_pane_t1

0x99e3,	// (0x00058245) main_dialer3_pane

0x99e3,	// (0x00058245) main_fmrd2_pane

0xcbfd,	// (0x0005b45f) main_fs_bigclock_unlock_btn_pane_g1

0xee6e,	// (0x0005d6d0) main_fs_bigclock_unlock_btn_pane_t1

0x93e8,	// (0x00057c4a) area_fmrd2_info_pane_ParamLimits

0x93e8,	// (0x00057c4a) area_fmrd2_info_pane

0x93f7,	// (0x00057c59) area_fmrd2_visual_pane_ParamLimits

0x93f7,	// (0x00057c59) area_fmrd2_visual_pane

0x9405,	// (0x00057c67) fmrd2_indi_pane_ParamLimits

0x9405,	// (0x00057c67) fmrd2_indi_pane

0x9412,	// (0x00057c74) area_fmrd2_visual_pane_g1

0x941a,	// (0x00057c7c) area_fmrd2_visual_pane_t1

0x942a,	// (0x00057c8c) area_fmrd2_visual_pane_t2

0x943a,	// (0x00057c9c) area_fmrd2_visual_pane_t3

0x0002,

0xfef4,	// (0x0005e756) area_fmrd2_visual_pane_t

0x944a,	// (0x00057cac) area_fmrd2_info_pane_g1

0x9452,	// (0x00057cb4) area_fmrd2_info_pane_t1

0x9462,	// (0x00057cc4) area_fmrd2_info_pane_t2

0x9472,	// (0x00057cd4) area_fmrd2_info_pane_t3

0x9482,	// (0x00057ce4) area_fmrd2_info_pane_t4

0x0003,

0xfefb,	// (0x0005e75d) area_fmrd2_info_pane_t

0x9492,	// (0x00057cf4) fmrd2_indi_pane_t1

0x94a2,	// (0x00057d04) fmrd2_indi_pane_t2

0x94b2,	// (0x00057d14) fmrd2_indi_pane_t3

0x0002,

0xff04,	// (0x0005e766) fmrd2_indi_pane_t

0xe3f4,	// (0x0005cc56) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xe3f4,	// (0x0005cc56) list_single_fs_bigclock_indicator_pane_g5

0xe4a4,	// (0x0005cd06) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xe4a4,	// (0x0005cd06) list_single_fs_bigclock_indicator_pane_t5

0x8b46,	// (0x000573a8) aid_cell_bcale_month_pane_ParamLimits

0x8b46,	// (0x000573a8) aid_cell_bcale_month_pane

0x8b6d,	// (0x000573cf) bcale_month_pane_ParamLimits

0x8b6d,	// (0x000573cf) bcale_month_pane

0x8b8f,	// (0x000573f1) bcale_preview_pane_ParamLimits

0x8b8f,	// (0x000573f1) bcale_preview_pane

0xec05,	// (0x0005d467) list_single_fs_bigclock_pane_t1_ParamLimits

0xec24,	// (0x0005d486) list_single_fs_bigclock_pane_t2_ParamLimits

0xec24,	// (0x0005d486) list_single_fs_bigclock_pane_t2

0x0001,

0xfe86,	// (0x0005e6e8) list_single_fs_bigclock_pane_t_ParamLimits

0xfe86,	// (0x0005e6e8) list_single_fs_bigclock_pane_t

0xee66,	// (0x0005d6c8) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfeef,	// (0x0005e751) main_fs_bigclock_unlock_btn_pane_g

0x94c2,	// (0x00057d24) aid_dia3_key_size_ParamLimits

0x94c2,	// (0x00057d24) aid_dia3_key_size

0x94d1,	// (0x00057d33) aid_dia3_listrow_size_ParamLimits

0x94d1,	// (0x00057d33) aid_dia3_listrow_size

0x94e6,	// (0x00057d48) dia3_keypad_fun_pane_ParamLimits

0x94e6,	// (0x00057d48) dia3_keypad_fun_pane

0x9502,	// (0x00057d64) dia3_keypad_num_pane_ParamLimits

0x9502,	// (0x00057d64) dia3_keypad_num_pane

0x951b,	// (0x00057d7d) dia3_listscroll_pane_ParamLimits

0x951b,	// (0x00057d7d) dia3_listscroll_pane

0x952e,	// (0x00057d90) dia3_numentry_pane_ParamLimits

0x952e,	// (0x00057d90) dia3_numentry_pane

0xee7c,	// (0x0005d6de) dia3_list_pane

0xee87,	// (0x0005d6e9) scroll_pane_cp12

0x99e3,	// (0x00058245) bg_dia3_numentry_pane

0x9542,	// (0x00057da4) dia3_numentry_pane_t1

0x9551,	// (0x00057db3) cell_dia3_key_num_pane

0x9559,	// (0x00057dbb) cell_dia3_key0_fun_pane_ParamLimits

0x9559,	// (0x00057dbb) cell_dia3_key0_fun_pane

0x956d,	// (0x00057dcf) cell_dia3_key1_fun_pane_ParamLimits

0x956d,	// (0x00057dcf) cell_dia3_key1_fun_pane

0x9585,	// (0x00057de7) dia3_listrow_pane

0xe0f2,	// (0x0005c954) bg_dia3_numentry_pane_g1

0x99e3,	// (0x00058245) bg_button_pane_cp21

0xee92,	// (0x0005d6f4) cell_dia3_key_num_pane_t1

0xeea0,	// (0x0005d702) cell_dia3_key_num_pane_t2

0xeeaf,	// (0x0005d711) cell_dia3_key_num_pane_t3

0xeebe,	// (0x0005d720) cell_dia3_key_num_pane_t4

0x0003,

0xff0b,	// (0x0005e76d) cell_dia3_key_num_pane_t

0x99e3,	// (0x00058245) bg_button_pane_cp19

0x9597,	// (0x00057df9) cell_dia3_key0_fun_pane_g1

0x99e3,	// (0x00058245) bg_button_pane_cp20

0x959f,	// (0x00057e01) cell_dia3_key1_fun_pane_g1

0x95a7,	// (0x00057e09) area_left_week_number_pane

0x95b5,	// (0x00057e17) area_top_day_name_pane

0x95c8,	// (0x00057e2a) frame_month_view_pane

0xeecd,	// (0x0005d72f) grid_month_view_pane

0x95dd,	// (0x00057e3f) cell_top_day_name_pane_ParamLimits

0x95dd,	// (0x00057e3f) cell_top_day_name_pane

0x960c,	// (0x00057e6e) cell_area_left_week_number_pane_ParamLimits

0x960c,	// (0x00057e6e) cell_area_left_week_number_pane

0x9620,	// (0x00057e82) cell_month_view_pane_ParamLimits

0x9620,	// (0x00057e82) cell_month_view_pane

0xeedb,	// (0x0005d73d) frm_month_g1

0x964f,	// (0x00057eb1) frm_month_g2

0x9662,	// (0x00057ec4) frm_month_g3

0x9675,	// (0x00057ed7) frm_month_g4

0x9688,	// (0x00057eea) frm_month_g5

0x969b,	// (0x00057efd) frm_month_g6

0x96ae,	// (0x00057f10) frm_month_g7

0xeee8,	// (0x0005d74a) frm_month_g8

0x96c3,	// (0x00057f25) frm_month_g9

0x96d3,	// (0x00057f35) frm_month_g10

0x96e3,	// (0x00057f45) frm_month_g11

0x96f3,	// (0x00057f55) frm_month_g12

0x9705,	// (0x00057f67) frm_month_g13

0x9719,	// (0x00057f7b) frm_month_g14

0x972d,	// (0x00057f8f) frm_month_g15

0x9741,	// (0x00057fa3) frm_month_g16

0x000f,

0xff14,	// (0x0005e776) frm_month_g

0xeef5,	// (0x0005d757) cell_top_day_name_pane_t1

0x9755,	// (0x00057fb7) cell_area_left_week_number_pane_g1

0x9761,	// (0x00057fc3) cell_area_left_week_number_pane_t1

0xce2d,	// (0x0005b68f) cell_month_view_pane_g1

0x9774,	// (0x00057fd6) cell_month_view_pane_t1

0x99e3,	// (0x00058245) main_fps_pane

0xe6a8,	// (0x0005cf0a) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xe6a8,	// (0x0005cf0a) cmail_ddmenu_btn02_pane_cp1

0xe6c4,	// (0x0005cf26) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xe6c4,	// (0x0005cf26) cmail_ddmenu_btn02_pane_cp2

0x8e9e,	// (0x00057700) cmail_ddmenu_btn02_pane_g2_ParamLimits

0x8e9e,	// (0x00057700) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfe39,	// (0x0005e69b) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfe39,	// (0x0005e69b) cmail_ddmenu_btn02_pane_g

0x8ebf,	// (0x00057721) cmail_ddmenu_btn02_pane_t2_ParamLimits

0x8ebf,	// (0x00057721) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfe3e,	// (0x0005e6a0) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfe3e,	// (0x0005e6a0) cmail_ddmenu_btn02_pane_t

0x9787,	// (0x00057fe9) fps_text_pane_ParamLimits

0x9787,	// (0x00057fe9) fps_text_pane

0x979e,	// (0x00058000) main_fps_pane_g1_ParamLimits

0x979e,	// (0x00058000) main_fps_pane_g1

0x97b6,	// (0x00058018) wait_bar_pane_cp010_ParamLimits

0x97b6,	// (0x00058018) wait_bar_pane_cp010

0x97c9,	// (0x0005802b) fps_text_pane_t1_ParamLimits

0x97c9,	// (0x0005802b) fps_text_pane_t1

0xe5be,	// (0x0005ce20) cam4_image_uncrop_pane_g1

0xe5c7,	// (0x0005ce29) cam4_image_uncrop_pane_g2

0x672f,	// (0x00054f91) cam4_image_uncrop_pane_g3

0x6738,	// (0x00054f9a) cam4_image_uncrop_pane_g4

0x0003,

0xf8f5,	// (0x0005e157) cam4_image_uncrop_pane_g

0x9585,	// (0x00057de7) dia3_listrow_pane_ParamLimits

0x99e3,	// (0x00058245) main_phob2_pane

0x8930,	// (0x00057192) cell_tport_appsw_pane_cp02_ParamLimits

0x8930,	// (0x00057192) cell_tport_appsw_pane_cp02

0x8944,	// (0x000571a6) cell_tport_appsw_pane_cp03_ParamLimits

0x8944,	// (0x000571a6) cell_tport_appsw_pane_cp03

0x99e3,	// (0x00058245) phob2_contact_card_pane

0x99e3,	// (0x00058245) phob2_listscroll_pane

0xef08,	// (0x0005d76a) phob2_list_pane

0xef10,	// (0x0005d772) scroll_pane_cp034

0x97e1,	// (0x00058043) phob2_cc_data_pane_ParamLimits

0x97e1,	// (0x00058043) phob2_cc_data_pane

0x9802,	// (0x00058064) phob2_cc_listscroll_pane_ParamLimits

0x9802,	// (0x00058064) phob2_cc_listscroll_pane

0x9824,	// (0x00058086) list_double_large_graphic_phob2_pane_ParamLimits

0x9824,	// (0x00058086) list_double_large_graphic_phob2_pane

0x9838,	// (0x0005809a) list_double_large_graphic_phob2_pane_g1_ParamLimits

0x9838,	// (0x0005809a) list_double_large_graphic_phob2_pane_g1

0x09c6,	// (0x0004f228) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x09c6,	// (0x0004f228) list_double_large_graphic_phob2_pane_g2

0x0001,

0xff35,	// (0x0005e797) list_double_large_graphic_phob2_pane_g_ParamLimits

0xff35,	// (0x0005e797) list_double_large_graphic_phob2_pane_g

0x09d2,	// (0x0004f234) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x09d2,	// (0x0004f234) list_double_large_graphic_phob2_pane_t1

0x09e7,	// (0x0004f249) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x09e7,	// (0x0004f249) list_double_large_graphic_phob2_pane_t2

0x0001,

0xff3a,	// (0x0005e79c) list_double_large_graphic_phob2_pane_t_ParamLimits

0xff3a,	// (0x0005e79c) list_double_large_graphic_phob2_pane_t

0x99e3,	// (0x00058245) list_highlight_pane_cp024

0x984e,	// (0x000580b0) phob2_cc_button_pane

0x9856,	// (0x000580b8) phob2_cc_data_pane_g1_ParamLimits

0x9856,	// (0x000580b8) phob2_cc_data_pane_g1

0x986c,	// (0x000580ce) phob2_cc_data_pane_g2_ParamLimits

0x986c,	// (0x000580ce) phob2_cc_data_pane_g2

0x0001,

0xff3f,	// (0x0005e7a1) phob2_cc_data_pane_g_ParamLimits

0xff3f,	// (0x0005e7a1) phob2_cc_data_pane_g

0x987c,	// (0x000580de) phob2_cc_data_pane_t1_ParamLimits

0x987c,	// (0x000580de) phob2_cc_data_pane_t1

0x9894,	// (0x000580f6) phob2_cc_data_pane_t2_ParamLimits

0x9894,	// (0x000580f6) phob2_cc_data_pane_t2

0x98ae,	// (0x00058110) phob2_cc_data_pane_t3_ParamLimits

0x98ae,	// (0x00058110) phob2_cc_data_pane_t3

0x0002,

0xff44,	// (0x0005e7a6) phob2_cc_data_pane_t_ParamLimits

0xff44,	// (0x0005e7a6) phob2_cc_data_pane_t

0xef18,	// (0x0005d77a) phob2_cc_list_pane_ParamLimits

0xef18,	// (0x0005d77a) phob2_cc_list_pane

0xd90d,	// (0x0005c16f) scroll_pane_cp035_ParamLimits

0xd90d,	// (0x0005c16f) scroll_pane_cp035

0x9a3c,	// (0x0005829e) bg_button_pane_cp033

0xef24,	// (0x0005d786) phob2_cc_button_pane_g1

0xef30,	// (0x0005d792) phob2_cc_button_pane_t1

0xef45,	// (0x0005d7a7) phob2_cc_button_pane_t2

0x0001,

0xff4b,	// (0x0005e7ad) phob2_cc_button_pane_t

0x98c8,	// (0x0005812a) list_double_large_graphic_phob2_cc_pane_ParamLimits

0x98c8,	// (0x0005812a) list_double_large_graphic_phob2_cc_pane

0x98dc,	// (0x0005813e) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0x98dc,	// (0x0005813e) list_double_large_graphic_phob2_cc_pane_g1

0x09f9,	// (0x0004f25b) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x09f9,	// (0x0004f25b) list_double_large_graphic_phob2_cc_pane_g2

0x0a05,	// (0x0004f267) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x0a05,	// (0x0004f267) list_double_large_graphic_phob2_cc_pane_g3

0x0a11,	// (0x0004f273) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x0a11,	// (0x0004f273) list_double_large_graphic_phob2_cc_pane_g4

0x0a1d,	// (0x0004f27f) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x0a1d,	// (0x0004f27f) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xff50,	// (0x0005e7b2) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xff50,	// (0x0005e7b2) list_double_large_graphic_phob2_cc_pane_g

0x0a29,	// (0x0004f28b) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x0a29,	// (0x0004f28b) list_double_large_graphic_phob2_cc_pane_t1

0x0a52,	// (0x0004f2b4) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x0a52,	// (0x0004f2b4) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xff5b,	// (0x0005e7bd) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xff5b,	// (0x0005e7bd) list_double_large_graphic_phob2_cc_pane_t

0xef57,	// (0x0005d7b9) list_highlight_pane_cp025_ParamLimits

0xef57,	// (0x0005d7b9) list_highlight_pane_cp025

0x9a3c,	// (0x0005829e) bg_button_pane_cp033_ParamLimits

0xef24,	// (0x0005d786) phob2_cc_button_pane_g1_ParamLimits

0xef30,	// (0x0005d792) phob2_cc_button_pane_t1_ParamLimits

0xef45,	// (0x0005d7a7) phob2_cc_button_pane_t2_ParamLimits

0xff4b,	// (0x0005e7ad) phob2_cc_button_pane_t_ParamLimits

0x0cc7,	// (0x0004f529) popup_wgtman_window

0xd735,	// (0x0005bf97) scroll_pane_cp038

0x9336,	// (0x00057b98) wgtman_btn_pane_cp_01_ParamLimits

0x9336,	// (0x00057b98) wgtman_btn_pane_cp_01

0xef65,	// (0x0005d7c7) wgtman_content_pane

0xef6e,	// (0x0005d7d0) wgtman_heading_pane

0x99e3,	// (0x00058245) bg_heading_pane_cp02

0xef77,	// (0x0005d7d9) wgtman_heading_pane_g1

0xef7f,	// (0x0005d7e1) wgtman_heading_pane_t1

0xef8d,	// (0x0005d7ef) scroll_pane_cp036

0xef95,	// (0x0005d7f7) wgtman_list_pane

0xef9d,	// (0x0005d7ff) wgtman_list_pane_t1_ParamLimits

0xef9d,	// (0x0005d7ff) wgtman_list_pane_t1

0xaaa6,	// (0x00059308) cam4_grid_pane

0xff92,	// (0x0004e7f4) bg_button_pane_cp015_ParamLimits

0x73c9,	// (0x00055c2b) bg_button_pane_cp016_ParamLimits

0x73dc,	// (0x00055c3e) bg_button_pane_cp017_ParamLimits

0xffda,	// (0x0004e83c) popup_vitu2_query_window_g3_ParamLimits

0xffda,	// (0x0004e83c) popup_vitu2_query_window_g3

0x0055,	// (0x0004e8b7) popup_vitu2_query_window_t6_ParamLimits

0x0055,	// (0x0004e8b7) popup_vitu2_query_window_t6

0x0080,	// (0x0004e8e2) popup_vitu2_query_window_t7_ParamLimits

0x0080,	// (0x0004e8e2) popup_vitu2_query_window_t7

0xe5be,	// (0x0005ce20) cam4_grid_pane_g1

0xe5c7,	// (0x0005ce29) cam4_grid_pane_g2

0xefb7,	// (0x0005d819) cam4_grid_pane_g3

0xefc0,	// (0x0005d822) cam4_grid_pane_g4

0x0003,

0xff60,	// (0x0005e7c2) cam4_grid_pane_g

0x1dfb,	// (0x0005065d) aid_placing_vt_slider_lsc_ParamLimits

0x20e8,	// (0x0005094a) vidtel_button_pane_ParamLimits

0x20e8,	// (0x0005094a) vidtel_button_pane

0xefcb,	// (0x0005d82d) bg_button_pane_cp034

0x98e8,	// (0x0005814a) vidtel_button_pane_g1

0xefd5,	// (0x0005d837) vidtel_button_pane_t1

0xd854,	// (0x0005c0b6) aid_size_vtel_slider_touch

0xd90d,	// (0x0005c16f) scroll_pane_cp039

0xe130,	// (0x0005c992) ncim_query_button_pane_cp01_ParamLimits

0xe14f,	// (0x0005c9b1) ncimui_query_pane_g1_ParamLimits

0x9a3c,	// (0x0005829e) input_focus_pane_cp012_ParamLimits

0xe174,	// (0x0005c9d6) ncim_query_entry_pane_t1_ParamLimits

0xd90d,	// (0x0005c16f) scroll_pane_cp039_ParamLimits

0x32a8,	// (0x00051b0a) navi_pane_bcale_mc_g1

0x32b0,	// (0x00051b12) navi_pane_bcale_mc_t1

0xe701,	// (0x0005cf63) main_sp_fs_email_pane_g1

0xe70d,	// (0x0005cf6f) main_sp_fs_email_pane_g2

0x0001,

0xfcec,	// (0x0005e54e) main_sp_fs_email_pane_g

0xe992,	// (0x0005d1f4) list_single_cale_mrui_row_pane_g3_ParamLimits

0xe992,	// (0x0005d1f4) list_single_cale_mrui_row_pane_g3

0x0935,	// (0x0004f197) list_single_recal_day_pane_g5_event_pane

0x8f2f,	// (0x00057791) list_single_recal_day_pane_g7

0xefe3,	// (0x0005d845) list_recal_day_event_pane_cp01

0xefec,	// (0x0005d84e) list_recal_vselct_arw_lo_pane_cp01

0xeff4,	// (0x0005d856) list_recal_vselct_arw_up_pane_cp01

0xeffc,	// (0x0005d85e) list_recal_vselct_pane_cp01

0xd864,	// (0x0005c0c6) list_recal_day_event_pane_cp01_g1

0xaca6,	// (0x00059508) list_recal_day_event_pane_cp01_t1

0x8f37,	// (0x00057799) list_single_recal_day_pane_t1_ParamLimits

0x8f49,	// (0x000577ab) list_single_recal_day_pane_t2_ParamLimits

0xfe4e,	// (0x0005e6b0) list_single_recal_day_pane_t_ParamLimits

0xa0b8,	// (0x0005891a) bg_notes_pane_ParamLimits

0xa163,	// (0x000589c5) list_notes_pane_ParamLimits

0x1014,	// (0x0004f876) scroll_pane_cp06_ParamLimits

0xa19f,	// (0x00058a01) main_notes_pane_ParamLimits

0x99e3,	// (0x00058245) main_welc_pane

0x98f0,	// (0x00058152) main_welc_body_pane_ParamLimits

0x98f0,	// (0x00058152) main_welc_body_pane

0x990f,	// (0x00058171) main_welc_opti_pane_ParamLimits

0x990f,	// (0x00058171) main_welc_opti_pane

0x9958,	// (0x000581ba) main_welc_pane_t1_ParamLimits

0x9958,	// (0x000581ba) main_welc_pane_t1

0x997a,	// (0x000581dc) main_welc_body_row_pane_ParamLimits

0x997a,	// (0x000581dc) main_welc_body_row_pane

0x998e,	// (0x000581f0) main_welc_opti_row_pane_ParamLimits

0x998e,	// (0x000581f0) main_welc_opti_row_pane

0xf006,	// (0x0005d868) main_welc_opti_row_pane_g1

0xf00e,	// (0x0005d870) main_welc_opti_row_pane_t1

0xf01d,	// (0x0005d87f) main_welc_body_row_pane_t1

0xece5,	// (0x0005d547) popup_notif_wgt_heading_pane

0xecff,	// (0x0005d561) aid_size_list_notif_wgt_del_ParamLimits

0xed0c,	// (0x0005d56e) list_notif_wgt_row_pane_g1_ParamLimits

0xed18,	// (0x0005d57a) list_notif_wgt_row_pane_g2_ParamLimits

0xed2c,	// (0x0005d58e) list_notif_wgt_row_pane_g3_ParamLimits

0xfeb5,	// (0x0005e717) list_notif_wgt_row_pane_g_ParamLimits

0xed39,	// (0x0005d59b) list_notif_wgt_row_pane_t1_ParamLimits

0xed4f,	// (0x0005d5b1) list_notif_wgt_row_pane_t2_ParamLimits

0xed61,	// (0x0005d5c3) list_notif_wgt_row_pane_t3_ParamLimits

0xfebc,	// (0x0005e71e) list_notif_wgt_row_pane_t_ParamLimits

0x93bd,	// (0x00057c1f) listrow_wgtman_pane_g1_ParamLimits

0x93ca,	// (0x00057c2c) listrow_wgtman_pane_g2_ParamLimits

0xfee5,	// (0x0005e747) listrow_wgtman_pane_g_ParamLimits

0x0976,	// (0x0004f1d8) listrow_wgtman_pane_t1_ParamLimits

0x098e,	// (0x0004f1f0) listrow_wgtman_pane_t2_ParamLimits

0xfeea,	// (0x0005e74c) listrow_wgtman_pane_t_ParamLimits

0x09b4,	// (0x0004f216) wait_bar_pane_cp09_ParamLimits

0x99e3,	// (0x00058245) bg_popup_heading_pane_cp02

0xf02c,	// (0x0005d88e) popup_notif_wgt_heading_pane_g1

0xf034,	// (0x0005d896) popup_notif_wgt_heading_pane_t1

0x99e3,	// (0x00058245) main_vids_pane

0x99e3,	// (0x00058245) vids_listscroll_pane

0x999e,	// (0x00058200) scroll_pane_cp040

0x99e3,	// (0x00058245) vids_list_pane

0x99a9,	// (0x0005820b) vids_list_double_pane_ParamLimits

0x99a9,	// (0x0005820b) vids_list_double_pane

0x99ba,	// (0x0005821c) vids_list_double_pane_g1

0x99c3,	// (0x00058225) vids_list_double_pane_t1

0x99d3,	// (0x00058235) vids_list_double_pane_t2

0x0001,

0xff6e,	// (0x0005e7d0) vids_list_double_pane_t

0x9a3c,	// (0x0005829e) main_ncimui_pane_ParamLimits

0x7f66,	// (0x000567c8) main_ncimui_pane_g1_ParamLimits

0x7f72,	// (0x000567d4) main_ncimui_pane_g2_ParamLimits

0x7f72,	// (0x000567d4) main_ncimui_pane_g2

0x0001,

0xfbf1,	// (0x0005e453) main_ncimui_pane_g_ParamLimits

0xfbf1,	// (0x0005e453) main_ncimui_pane_g

0x992e,	// (0x00058190) main_welc_pane_g1_ParamLimits

0x992e,	// (0x00058190) main_welc_pane_g1

0x9943,	// (0x000581a5) main_welc_pane_g2_ParamLimits

0x9943,	// (0x000581a5) main_welc_pane_g2

0x0001,

0xff69,	// (0x0005e7cb) main_welc_pane_g_ParamLimits

0xff69,	// (0x0005e7cb) main_welc_pane_g

0xa0b8,	// (0x0005891a) listscroll_mce_pane_ParamLimits

0x3388,	// (0x00051bea) wait_bar_pane_cp10

0xc7a0,	// (0x0005b002) main_cale_day_pane_ParamLimits

0xc7a0,	// (0x0005b002) main_cale_week_pane_ParamLimits

0xa0b8,	// (0x0005891a) main_messa_pane_ParamLimits

0x59ed,	// (0x0005424f) main_clock2_btn_pane_ParamLimits

0x59ed,	// (0x0005424f) main_clock2_btn_pane

0xcfb5,	// (0x0005b817) main_clock2_btn_pane_cp01_ParamLimits

0xcfb5,	// (0x0005b817) main_clock2_btn_pane_cp01

0xe963,	// (0x0005d1c5) list_cale_mrui_pane_ParamLimits

0xeda5,	// (0x0005d607) main_cf0_pane_g2

0x0001,

0xfec3,	// (0x0005e725) main_cf0_pane_g

0x95a7,	// (0x00057e09) area_left_week_number_pane_ParamLimits

0x95b5,	// (0x00057e17) area_top_day_name_pane_ParamLimits

0x95c8,	// (0x00057e2a) frame_month_view_pane_ParamLimits

0xeecd,	// (0x0005d72f) grid_month_view_pane_ParamLimits

0xeedb,	// (0x0005d73d) frm_month_g1_ParamLimits

0x964f,	// (0x00057eb1) frm_month_g2_ParamLimits

0x9662,	// (0x00057ec4) frm_month_g3_ParamLimits

0x9675,	// (0x00057ed7) frm_month_g4_ParamLimits

0x9688,	// (0x00057eea) frm_month_g5_ParamLimits

0x969b,	// (0x00057efd) frm_month_g6_ParamLimits

0x96ae,	// (0x00057f10) frm_month_g7_ParamLimits

0xeee8,	// (0x0005d74a) frm_month_g8_ParamLimits

0x96c3,	// (0x00057f25) frm_month_g9_ParamLimits

0x96d3,	// (0x00057f35) frm_month_g10_ParamLimits

0x96e3,	// (0x00057f45) frm_month_g11_ParamLimits

0x96f3,	// (0x00057f55) frm_month_g12_ParamLimits

0x9705,	// (0x00057f67) frm_month_g13_ParamLimits

0x9719,	// (0x00057f7b) frm_month_g14_ParamLimits

0x972d,	// (0x00057f8f) frm_month_g15_ParamLimits

0x9741,	// (0x00057fa3) frm_month_g16_ParamLimits

0xff14,	// (0x0005e776) frm_month_g_ParamLimits

0xeef5,	// (0x0005d757) cell_top_day_name_pane_t1_ParamLimits

0x9755,	// (0x00057fb7) cell_area_left_week_number_pane_g1_ParamLimits

0x9761,	// (0x00057fc3) cell_area_left_week_number_pane_t1_ParamLimits

0xce2d,	// (0x0005b68f) cell_month_view_pane_g1_ParamLimits

0x9774,	// (0x00057fd6) cell_month_view_pane_t1_ParamLimits

0xa0b0,	// (0x00058912) main_clock2_btn_pane_g1

0xf042,	// (0x0005d8a4) main_clock2_btn_pane_t1

0x9a3c,	// (0x0005829e) listscroll_cmail_pane_ParamLimits

0xe701,	// (0x0005cf63) main_sp_fs_email_pane_g1_ParamLimits

0xe70d,	// (0x0005cf6f) main_sp_fs_email_pane_g2_ParamLimits

0xfcec,	// (0x0005e54e) main_sp_fs_email_pane_g_ParamLimits

0xea6f,	// (0x0005d2d1) list_recal_day_pane_ParamLimits

0xea80,	// (0x0005d2e2) mian_recal_day_pane_t1

0x04fc,	// (0x0004ed5e) list_single_dyc_row_text_pane_t4_ParamLimits

0x04fc,	// (0x0004ed5e) list_single_dyc_row_text_pane_t4

0x0545,	// (0x0004eda7) list_single_dyc_row_text_pane_t5_ParamLimits

0x0545,	// (0x0004eda7) list_single_dyc_row_text_pane_t5

0x8813,	// (0x00057075) list_single_dyc_row_text_pane_t6_ParamLimits

0x8813,	// (0x00057075) list_single_dyc_row_text_pane_t6

0xae2f,	// (0x00059691) aid_mgn_list_cale_time_pane

0x9a3c,	// (0x0005829e) main_gallery2_pane_ParamLimits

0xcfc9,	// (0x0005b82b) main_clock2_pane_cp01_t1

0xcfd9,	// (0x0005b83b) main_clock2_pane_cp01_t3

0x0001,

0xf7cb,	// (0x0005e02d) main_clock2_pane_cp01_t

0x1463,	// (0x0004fcc5) cale_week_scroll_pane_g16_ParamLimits

0x1463,	// (0x0004fcc5) cale_week_scroll_pane_g16
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
	};

} // end of namespace AknLayoutScalable_Elaf_pvl4_apps_vga4_lsc_tch_Small
