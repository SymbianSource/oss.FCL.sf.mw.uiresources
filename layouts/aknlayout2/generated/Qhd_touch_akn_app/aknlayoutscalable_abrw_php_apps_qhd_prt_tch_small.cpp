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

#include "aknlayoutscalable_abrw_php_apps_qhd_prt_tch_small.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_php_apps_qhd_prt_tch[]; }

namespace AknLayoutScalable_Abrw_php_apps_qhd_prt_tch_Small
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_php_apps_qhd_prt_tch + 0x00046d16 };

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
0x4f6d,	// (0x0004bc83) Screen

0x4f79,	// (0x0004bc8f) application_window

0x4fdf,	// (0x0004bcf5) area_bottom_pane_ParamLimits

0x4fdf,	// (0x0004bcf5) area_bottom_pane

0x5038,	// (0x0004bd4e) area_top_pane_ParamLimits

0x5038,	// (0x0004bd4e) area_top_pane

0x509c,	// (0x0004bdb2) call_video_uplink_pane_ParamLimits

0x509c,	// (0x0004bdb2) call_video_uplink_pane

0x50da,	// (0x0004bdf0) main_pane_ParamLimits

0x50da,	// (0x0004bdf0) main_pane

0x11c6,	// (0x00047edc) context_pane

0x86b0,	// (0x0004f3c6) navi_pane

0x86d0,	// (0x0004f3e6) popup_cale_events_window_ParamLimits

0x86d0,	// (0x0004f3e6) popup_cale_events_window

0x11d9,	// (0x00047eef) popup_mup_playback_window

0x86e8,	// (0x0004f3fe) signal_pane

0xd5db,	// (0x000542f1) main_browser_pane

0xe0c2,	// (0x00054dd8) main_burst_pane

0x857a,	// (0x0004f290) main_calc_pane

0xe0c2,	// (0x00054dd8) main_cale_day_pane

0xd5db,	// (0x000542f1) main_cale_month_pane

0xe0c2,	// (0x00054dd8) main_cale_week_pane

0xe0c2,	// (0x00054dd8) main_call_pane

0x5701,	// (0x0004c417) main_call_poc_pane

0xe0c2,	// (0x00054dd8) main_camera_pane

0xe0c2,	// (0x00054dd8) main_chi_dic_pane

0xdf47,	// (0x00054c5d) main_clock_pane

0x5701,	// (0x0004c417) main_fmradio_pane

0xe0c2,	// (0x00054dd8) main_graph_messa_pane

0x5701,	// (0x0004c417) main_help_pane

0xd5db,	// (0x000542f1) main_im_pane

0xd504,	// (0x0005421a) main_image_pane_ParamLimits

0xd504,	// (0x0005421a) main_image_pane

0x5701,	// (0x0004c417) main_location2_pane

0xe0c2,	// (0x00054dd8) main_location_pane

0x5701,	// (0x0004c417) main_messa_pane

0x5701,	// (0x0004c417) main_mp2_pane

0xe0c2,	// (0x00054dd8) main_mp_pane

0x5701,	// (0x0004c417) main_msg_pane

0x5701,	// (0x0004c417) main_mup_eq_pane

0x5701,	// (0x0004c417) main_mup_pane

0xe0c2,	// (0x00054dd8) main_notes_pane

0x5701,	// (0x0004c417) main_pec_pane

0x5701,	// (0x0004c417) main_phob_pane

0x5701,	// (0x0004c417) main_pinb_pane

0x5701,	// (0x0004c417) main_postcard_pane

0x5701,	// (0x0004c417) main_qdial_pane

0xe0c2,	// (0x00054dd8) main_skin_pane

0x5701,	// (0x0004c417) main_smil2_pane

0xe0c2,	// (0x00054dd8) main_smil_pane

0xe0c2,	// (0x00054dd8) main_video_pane

0xe0c2,	// (0x00054dd8) main_video_tele_pane

0xd504,	// (0x0005421a) main_viewer_pane_ParamLimits

0xd504,	// (0x0005421a) main_viewer_pane

0xe0c2,	// (0x00054dd8) main_vorec_pane

0x85b0,	// (0x0004f2c6) popup_blid_sat_info_window_ParamLimits

0x85b0,	// (0x0004f2c6) popup_blid_sat_info_window

0x85c6,	// (0x0004f2dc) popup_dyc_status_message_window_ParamLimits

0x85c6,	// (0x0004f2dc) popup_dyc_status_message_window

0x85d6,	// (0x0004f2ec) popup_grid_large_graphic_window_ParamLimits

0x85d6,	// (0x0004f2ec) popup_grid_large_graphic_window

0x864c,	// (0x0004f362) popup_loc_request_window_ParamLimits

0x864c,	// (0x0004f362) popup_loc_request_window

0x8688,	// (0x0004f39e) popup_wml_address_window_ParamLimits

0x8688,	// (0x0004f39e) popup_wml_address_window

0x8452,	// (0x0004f168) call_muted_g1

0x8114,	// (0x0004ee2a) popup_call_audio_conf_window_ParamLimits

0x8114,	// (0x0004ee2a) popup_call_audio_conf_window

0x8462,	// (0x0004f178) popup_call_audio_first_window_ParamLimits

0x8462,	// (0x0004f178) popup_call_audio_first_window

0x84a2,	// (0x0004f1b8) popup_call_audio_in_window_ParamLimits

0x84a2,	// (0x0004f1b8) popup_call_audio_in_window

0x84c6,	// (0x0004f1dc) popup_call_audio_out_window_ParamLimits

0x84c6,	// (0x0004f1dc) popup_call_audio_out_window

0x84e8,	// (0x0004f1fe) popup_call_audio_second_window_ParamLimits

0x84e8,	// (0x0004f1fe) popup_call_audio_second_window

0x8518,	// (0x0004f22e) popup_call_audio_wait_window_ParamLimits

0x8518,	// (0x0004f22e) popup_call_audio_wait_window

0x8539,	// (0x0004f24f) popup_number_entry_window_ParamLimits

0x8539,	// (0x0004f24f) popup_number_entry_window

0x5291,	// (0x0004bfa7) bg_popup_call_pane_cp05_ParamLimits

0x5291,	// (0x0004bfa7) bg_popup_call_pane_cp05

0x52b1,	// (0x0004bfc7) popup_number_entry_window_t1

0x52c4,	// (0x0004bfda) popup_number_entry_window_t2

0x52d6,	// (0x0004bfec) popup_number_entry_window_t3

0x0003,

0xf12f,	// (0x00055e45) popup_number_entry_window_t

0x5321,	// (0x0004c037) text_title_cp2

0x5334,	// (0x0004c04a) bg_popup_call_pane_cp_ParamLimits

0x5334,	// (0x0004c04a) bg_popup_call_pane_cp

0x5342,	// (0x0004c058) call_thumbnail_pane

0x534a,	// (0x0004c060) popup_call_audio_in_window_g1_ParamLimits

0x534a,	// (0x0004c060) popup_call_audio_in_window_g1

0x5356,	// (0x0004c06c) popup_call_audio_in_window_g2_ParamLimits

0x5356,	// (0x0004c06c) popup_call_audio_in_window_g2

0x5362,	// (0x0004c078) popup_call_audio_in_window_g3_ParamLimits

0x5362,	// (0x0004c078) popup_call_audio_in_window_g3

0x0002,

0xf138,	// (0x00055e4e) popup_call_audio_in_window_g_ParamLimits

0xf138,	// (0x00055e4e) popup_call_audio_in_window_g

0x536e,	// (0x0004c084) popup_call_audio_in_window_t1_ParamLimits

0x536e,	// (0x0004c084) popup_call_audio_in_window_t1

0x538a,	// (0x0004c0a0) popup_call_audio_in_window_t2_ParamLimits

0x538a,	// (0x0004c0a0) popup_call_audio_in_window_t2

0x53a6,	// (0x0004c0bc) popup_call_audio_in_window_t3_ParamLimits

0x53a6,	// (0x0004c0bc) popup_call_audio_in_window_t3

0x0002,

0xf13f,	// (0x00055e55) popup_call_audio_in_window_t_ParamLimits

0xf13f,	// (0x00055e55) popup_call_audio_in_window_t

0x5334,	// (0x0004c04a) bg_popup_call_pane_cp01_ParamLimits

0x5334,	// (0x0004c04a) bg_popup_call_pane_cp01

0x5342,	// (0x0004c058) call_thumbnail_pane_cp02

0x53b9,	// (0x0004c0cf) call_type_pane_cp022

0x53c1,	// (0x0004c0d7) popup_call_audio_out_window_g1_ParamLimits

0x53c1,	// (0x0004c0d7) popup_call_audio_out_window_g1

0x53d3,	// (0x0004c0e9) popup_call_audio_out_window_g2_ParamLimits

0x53d3,	// (0x0004c0e9) popup_call_audio_out_window_g2

0x53df,	// (0x0004c0f5) popup_call_audio_out_window_g3_ParamLimits

0x53df,	// (0x0004c0f5) popup_call_audio_out_window_g3

0x0002,

0xf146,	// (0x00055e5c) popup_call_audio_out_window_g_ParamLimits

0xf146,	// (0x00055e5c) popup_call_audio_out_window_g

0x53f1,	// (0x0004c107) popup_call_audio_out_window_t1_ParamLimits

0x53f1,	// (0x0004c107) popup_call_audio_out_window_t1

0x5409,	// (0x0004c11f) popup_call_audio_out_window_t2_ParamLimits

0x5409,	// (0x0004c11f) popup_call_audio_out_window_t2

0x0001,

0xf14d,	// (0x00055e63) popup_call_audio_out_window_t_ParamLimits

0xf14d,	// (0x00055e63) popup_call_audio_out_window_t

0x541e,	// (0x0004c134) bg_popup_call_pane_ParamLimits

0x541e,	// (0x0004c134) bg_popup_call_pane

0x54a2,	// (0x0004c1b8) call_thumbnail_pane_cp_ParamLimits

0x54a2,	// (0x0004c1b8) call_thumbnail_pane_cp

0x54c6,	// (0x0004c1dc) call_type_pane_cp01_ParamLimits

0x54c6,	// (0x0004c1dc) call_type_pane_cp01

0x550a,	// (0x0004c220) popup_call_audio_first_window_g1_ParamLimits

0x550a,	// (0x0004c220) popup_call_audio_first_window_g1

0x5556,	// (0x0004c26c) popup_call_audio_first_window_g2_ParamLimits

0x5556,	// (0x0004c26c) popup_call_audio_first_window_g2

0x0001,

0xf152,	// (0x00055e68) popup_call_audio_first_window_g_ParamLimits

0xf152,	// (0x00055e68) popup_call_audio_first_window_g

0x559a,	// (0x0004c2b0) popup_call_audio_first_window_t1_ParamLimits

0x559a,	// (0x0004c2b0) popup_call_audio_first_window_t1

0x5646,	// (0x0004c35c) popup_call_audio_first_window_t4_ParamLimits

0x5646,	// (0x0004c35c) popup_call_audio_first_window_t4

0x56d2,	// (0x0004c3e8) popup_call_audio_first_window_t5_ParamLimits

0x56d2,	// (0x0004c3e8) popup_call_audio_first_window_t5

0x0002,

0xf157,	// (0x00055e6d) popup_call_audio_first_window_t_ParamLimits

0xf157,	// (0x00055e6d) popup_call_audio_first_window_t

0x5701,	// (0x0004c417) bg_popup_call_pane_cp02

0x570b,	// (0x0004c421) call_type_pane_cp023

0x5713,	// (0x0004c429) popup_call_audio_wait_window_g1

0x571b,	// (0x0004c431) popup_call_audio_wait_window_g2

0x0001,

0xf15e,	// (0x00055e74) popup_call_audio_wait_window_g

0x5723,	// (0x0004c439) popup_call_audio_wait_window_t3

0x5731,	// (0x0004c447) bg_popup_call_pane_cp03_ParamLimits

0x5731,	// (0x0004c447) bg_popup_call_pane_cp03

0x5791,	// (0x0004c4a7) call_thumbnail_pane_cp011_ParamLimits

0x5791,	// (0x0004c4a7) call_thumbnail_pane_cp011

0x579d,	// (0x0004c4b3) call_type_pane_cp034_ParamLimits

0x579d,	// (0x0004c4b3) call_type_pane_cp034

0x57d9,	// (0x0004c4ef) popup_call_audio_second_window_g1_ParamLimits

0x57d9,	// (0x0004c4ef) popup_call_audio_second_window_g1

0x5815,	// (0x0004c52b) popup_call_audio_second_window_g2_ParamLimits

0x5815,	// (0x0004c52b) popup_call_audio_second_window_g2

0x0001,

0xf163,	// (0x00055e79) popup_call_audio_second_window_g_ParamLimits

0xf163,	// (0x00055e79) popup_call_audio_second_window_g

0x5851,	// (0x0004c567) popup_call_audio_second_window_t1_ParamLimits

0x5851,	// (0x0004c567) popup_call_audio_second_window_t1

0x58d2,	// (0x0004c5e8) popup_call_audio_second_window_t2_ParamLimits

0x58d2,	// (0x0004c5e8) popup_call_audio_second_window_t2

0x5908,	// (0x0004c61e) popup_call_audio_second_window_t3_ParamLimits

0x5908,	// (0x0004c61e) popup_call_audio_second_window_t3

0x0002,

0xf168,	// (0x00055e7e) popup_call_audio_second_window_t_ParamLimits

0xf168,	// (0x00055e7e) popup_call_audio_second_window_t

0x5701,	// (0x0004c417) bg_popup_call_pane_cp04

0x593e,	// (0x0004c654) list_conf_pane

0x5946,	// (0x0004c65c) popup_call_audio_conf_window_t1

0x5954,	// (0x0004c66a) call_thumbnail_pane_g1

0xd504,	// (0x0005421a) bg_pinb_pane_ParamLimits

0xd504,	// (0x0005421a) bg_pinb_pane

0xd512,	// (0x00054228) find_pinb_pane

0xd51b,	// (0x00054231) listscroll_pinb_pane_ParamLimits

0xd51b,	// (0x00054231) listscroll_pinb_pane

0xd52a,	// (0x00054240) pinb_bg_pane_g1

0x595c,	// (0x0004c672) pinb_bg_pane_g2

0x5968,	// (0x0004c67e) pinb_bg_pane_g3

0x5974,	// (0x0004c68a) pinb_bg_pane_g4

0x5980,	// (0x0004c696) pinb_bg_pane_g5

0x598c,	// (0x0004c6a2) pinb_bg_pane_g6

0x5997,	// (0x0004c6ad) pinb_bg_pane_g7

0x59a2,	// (0x0004c6b8) pinb_bg_pane_g8

0x59ad,	// (0x0004c6c3) pinb_bg_pane_g9

0x59b7,	// (0x0004c6cd) pinb_bg_pane_g10

0x0009,

0xf16f,	// (0x00055e85) pinb_bg_pane_g

0x59d4,	// (0x0004c6ea) grid_pinb_pane

0x59df,	// (0x0004c6f5) list_pinb_pane

0x59ea,	// (0x0004c700) scroll_pane_cp01_ParamLimits

0x59ea,	// (0x0004c700) scroll_pane_cp01

0xd534,	// (0x0005424a) find_pinb_pane_g1_ParamLimits

0xd534,	// (0x0005424a) find_pinb_pane_g1

0xd54c,	// (0x00054262) find_pinb_pane_t1

0xd55e,	// (0x00054274) find_pinb_pane_t2

0x0001,

0xf189,	// (0x00055e9f) find_pinb_pane_t

0xd573,	// (0x00054289) input_focus_pane_cp01_ParamLimits

0xd573,	// (0x00054289) input_focus_pane_cp01

0x59fc,	// (0x0004c712) cell_pinb_pane_ParamLimits

0x59fc,	// (0x0004c712) cell_pinb_pane

0x5a21,	// (0x0004c737) cell_pinb_pane_g1_ParamLimits

0x5a21,	// (0x0004c737) cell_pinb_pane_g1

0x5a36,	// (0x0004c74c) cell_pinb_pane_g2_ParamLimits

0x5a36,	// (0x0004c74c) cell_pinb_pane_g2

0xd57f,	// (0x00054295) cell_pinb_pane_g3_ParamLimits

0xd57f,	// (0x00054295) cell_pinb_pane_g3

0x0002,

0xf18e,	// (0x00055ea4) cell_pinb_pane_g_ParamLimits

0xf18e,	// (0x00055ea4) cell_pinb_pane_g

0x5701,	// (0x0004c417) grid_highlight_pane_cp01

0x5a42,	// (0x0004c758) list_pinb_item_pane_ParamLimits

0x5a42,	// (0x0004c758) list_pinb_item_pane

0x5701,	// (0x0004c417) list_highlight_pane_cp02

0x5a62,	// (0x0004c778) list_pinb_item_pane_g1_ParamLimits

0x5a62,	// (0x0004c778) list_pinb_item_pane_g1

0xd58b,	// (0x000542a1) list_pinb_item_pane_g2_ParamLimits

0xd58b,	// (0x000542a1) list_pinb_item_pane_g2

0x5a6f,	// (0x0004c785) list_pinb_item_pane_g3_ParamLimits

0x5a6f,	// (0x0004c785) list_pinb_item_pane_g3

0x5a80,	// (0x0004c796) list_pinb_item_pane_g4_ParamLimits

0x5a80,	// (0x0004c796) list_pinb_item_pane_g4

0x0003,

0xf195,	// (0x00055eab) list_pinb_item_pane_g_ParamLimits

0xf195,	// (0x00055eab) list_pinb_item_pane_g

0x5a8c,	// (0x0004c7a2) list_pinb_item_pane_t1_ParamLimits

0x5a8c,	// (0x0004c7a2) list_pinb_item_pane_t1

0x5abd,	// (0x0004c7d3) calc_display_pane

0x5adb,	// (0x0004c7f1) calc_paper_pane

0x5af7,	// (0x0004c80d) grid_calc_pane

0x5701,	// (0x0004c417) bg_list_pane_cp01

0x5b21,	// (0x0004c837) clock_g1

0x5b29,	// (0x0004c83f) clock_g2

0x0001,

0xf19e,	// (0x00055eb4) clock_g

0x5b33,	// (0x0004c849) clock_t1_ParamLimits

0x5b33,	// (0x0004c849) clock_t1

0x5b48,	// (0x0004c85e) clock_t2_ParamLimits

0x5b48,	// (0x0004c85e) clock_t2

0x5b5a,	// (0x0004c870) clock_t3_ParamLimits

0x5b5a,	// (0x0004c870) clock_t3

0x5b6c,	// (0x0004c882) clock_t4_ParamLimits

0x5b6c,	// (0x0004c882) clock_t4

0x5b7e,	// (0x0004c894) clock_t5_ParamLimits

0x5b7e,	// (0x0004c894) clock_t5

0x5b93,	// (0x0004c8a9) clock_t6_ParamLimits

0x5b93,	// (0x0004c8a9) clock_t6

0x5ba5,	// (0x0004c8bb) clock_t7_ParamLimits

0x5ba5,	// (0x0004c8bb) clock_t7

0x5bb7,	// (0x0004c8cd) clock_t8_ParamLimits

0x5bb7,	// (0x0004c8cd) clock_t8

0x5bcd,	// (0x0004c8e3) clock_t9_ParamLimits

0x5bcd,	// (0x0004c8e3) clock_t9

0x0008,

0xf1a3,	// (0x00055eb9) clock_t_ParamLimits

0xf1a3,	// (0x00055eb9) clock_t

0xd597,	// (0x000542ad) popup_clock_analogue_window_cp02

0xd597,	// (0x000542ad) popup_clock_digital_window_cp01

0xd59f,	// (0x000542b5) listscroll_help_pane

0x5701,	// (0x0004c417) phob_pre_status_pane

0xd5a9,	// (0x000542bf) grid_qdial_pane

0x5701,	// (0x0004c417) listscroll_mce_pane

0xd5b3,	// (0x000542c9) bg_notes_pane

0xd5bd,	// (0x000542d3) list_notes_pane

0x5be3,	// (0x0004c8f9) scroll_pane_cp06

0xd5c7,	// (0x000542dd) bg_calc_paper_pane

0x5bf8,	// (0x0004c90e) list_calc_pane

0xd5db,	// (0x000542f1) bg_calc_display_pane

0x5c12,	// (0x0004c928) calc_display_pane_t1

0x5c27,	// (0x0004c93d) calc_display_pane_t2

0x5c3c,	// (0x0004c952) calc_display_pane_t3

0x0002,

0xf1b6,	// (0x00055ecc) calc_display_pane_t

0x5c4e,	// (0x0004c964) cell_calc_pane_ParamLimits

0x5c4e,	// (0x0004c964) cell_calc_pane

0xd5e7,	// (0x000542fd) bg_calc_paper_pane_g1

0xd5f3,	// (0x00054309) bg_calc_paper_pane_g2

0xd5ff,	// (0x00054315) bg_calc_paper_pane_g3

0xd60b,	// (0x00054321) bg_calc_paper_pane_g4

0xd617,	// (0x0005432d) bg_calc_paper_pane_g5

0x5c7b,	// (0x0004c991) bg_calc_paper_pane_g6

0x5c8c,	// (0x0004c9a2) bg_calc_paper_pane_g7

0x5c9d,	// (0x0004c9b3) bg_calc_paper_pane_g8

0x0007,

0xf1bd,	// (0x00055ed3) bg_calc_paper_pane_g

0x5cae,	// (0x0004c9c4) calc_bg_paper_pane_g9

0x5cbf,	// (0x0004c9d5) list_calc_item_pane_ParamLimits

0x5cbf,	// (0x0004c9d5) list_calc_item_pane

0xd623,	// (0x00054339) list_calc_item_pane_g1

0x5cee,	// (0x0004ca04) list_calc_item_pane_t1_ParamLimits

0x5cee,	// (0x0004ca04) list_calc_item_pane_t1

0x5d00,	// (0x0004ca16) list_calc_item_pane_t2_ParamLimits

0x5d00,	// (0x0004ca16) list_calc_item_pane_t2

0x0001,

0xf1ce,	// (0x00055ee4) list_calc_item_pane_t_ParamLimits

0xf1ce,	// (0x00055ee4) list_calc_item_pane_t

0xd630,	// (0x00054346) cell_calc_pane_g1

0xd63a,	// (0x00054350) grid_highlight_pane_cp02

0x5d30,	// (0x0004ca46) bg_calc_display_pane_g1

0x5d39,	// (0x0004ca4f) bg_calc_display_pane_g2

0x16a8,	// (0x000483be) bg_calc_display_pane_g3

0x0002,

0xf1d8,	// (0x00055eee) bg_calc_display_pane_g

0x5d43,	// (0x0004ca59) cell_qdial_pane_ParamLimits

0x5d43,	// (0x0004ca59) cell_qdial_pane

0x5d57,	// (0x0004ca6d) cell_qdial_pane_g1_ParamLimits

0x5d57,	// (0x0004ca6d) cell_qdial_pane_g1

0x5d64,	// (0x0004ca7a) cell_qdial_pane_g2_ParamLimits

0x5d64,	// (0x0004ca7a) cell_qdial_pane_g2

0xd65c,	// (0x00054372) cell_qdial_pane_g3_ParamLimits

0xd65c,	// (0x00054372) cell_qdial_pane_g3

0x0003,

0xf1df,	// (0x00055ef5) cell_qdial_pane_g_ParamLimits

0xf1df,	// (0x00055ef5) cell_qdial_pane_g

0x5d82,	// (0x0004ca98) cell_qdial_pane_t1_ParamLimits

0x5d82,	// (0x0004ca98) cell_qdial_pane_t1

0x5d9a,	// (0x0004cab0) cell_qdial_pane_t2_ParamLimits

0x5d9a,	// (0x0004cab0) cell_qdial_pane_t2

0x5dad,	// (0x0004cac3) cell_qdial_pane_t3_ParamLimits

0x5dad,	// (0x0004cac3) cell_qdial_pane_t3

0x0002,

0xf1e8,	// (0x00055efe) cell_qdial_pane_t_ParamLimits

0xf1e8,	// (0x00055efe) cell_qdial_pane_t

0x5701,	// (0x0004c417) grid_highlight_pane_cp04

0xd668,	// (0x0005437e) thumbnail_qdial_pane_ParamLimits

0xd668,	// (0x0005437e) thumbnail_qdial_pane

0xd6c4,	// (0x000543da) list_help_pane

0xd6cd,	// (0x000543e3) scroll_pane_cp02

0x5dc0,	// (0x0004cad6) help_list_pane_t1_ParamLimits

0x5dc0,	// (0x0004cad6) help_list_pane_t1

0x5df3,	// (0x0004cb09) bg_notes_pane_g2

0x5dfb,	// (0x0004cb11) bg_notes_pane_g3

0x5e03,	// (0x0004cb19) notes_bg_pane_g1

0x5e0b,	// (0x0004cb21) notes_bg_pane_g4

0x5e13,	// (0x0004cb29) notes_bg_pane_g5

0x5e1b,	// (0x0004cb31) notes_bg_pane_g6

0x5e23,	// (0x0004cb39) notes_bg_pane_g7

0x5e2b,	// (0x0004cb41) notes_bg_pane_g8

0x5e33,	// (0x0004cb49) notes_bg_pane_g9

0x0006,

0xf206,	// (0x00055f1c) notes_bg_pane_g

0x5e3b,	// (0x0004cb51) list_notes_text_pane_ParamLimits

0x5e3b,	// (0x0004cb51) list_notes_text_pane

0xd6d6,	// (0x000543ec) list_notes_text_pane_g1

0x5e60,	// (0x0004cb76) list_notes_text_pane_t1

0xd5db,	// (0x000542f1) listscroll_cale_week_pane

0x5e8b,	// (0x0004cba1) bg_cale_heading_pane

0xd6f0,	// (0x00054406) bg_cale_pane_cp01

0x5e9f,	// (0x0004cbb5) cale_week_corner_pane

0x5eb5,	// (0x0004cbcb) cale_week_day_heading_pane

0x5ec9,	// (0x0004cbdf) cale_week_scroll_pane_g1

0x5eda,	// (0x0004cbf0) cale_week_scroll_pane_g2

0x5eeb,	// (0x0004cc01) cale_week_scroll_pane_g3

0x5efc,	// (0x0004cc12) cale_week_scroll_pane_g4

0x5f0d,	// (0x0004cc23) cale_week_scroll_pane_g5

0x5f1e,	// (0x0004cc34) cale_week_scroll_pane_g6

0x5f2f,	// (0x0004cc45) cale_week_scroll_pane_g7

0x5f42,	// (0x0004cc58) cale_week_scroll_pane_g8

0x5f55,	// (0x0004cc6b) cale_week_scroll_pane_g9

0x5f66,	// (0x0004cc7c) cale_week_scroll_pane_g10

0x5f77,	// (0x0004cc8d) cale_week_scroll_pane_g11

0x5f88,	// (0x0004cc9e) cale_week_scroll_pane_g12

0x5f99,	// (0x0004ccaf) cale_week_scroll_pane_g13

0x5faa,	// (0x0004ccc0) cale_week_scroll_pane_g14

0x5fbb,	// (0x0004ccd1) cale_week_scroll_pane_g15

0x000e,

0xf215,	// (0x00055f2b) cale_week_scroll_pane_g

0x5fcc,	// (0x0004cce2) cale_week_time_pane

0x5fdf,	// (0x0004ccf5) grid_cale_week_pane

0x5ff4,	// (0x0004cd0a) scroll_pane_cp08

0x600e,	// (0x0004cd24) cell_cale_week_pane_ParamLimits

0x600e,	// (0x0004cd24) cell_cale_week_pane

0x604a,	// (0x0004cd60) cale_week_day_heading_pane_t1

0x6077,	// (0x0004cd8d) cale_week_day_heading_pane_t2

0x60a4,	// (0x0004cdba) cale_week_day_heading_pane_t3

0x60d1,	// (0x0004cde7) cale_week_day_heading_pane_t4

0x60fe,	// (0x0004ce14) cale_week_day_heading_pane_t5

0x612b,	// (0x0004ce41) cale_week_day_heading_pane_t6

0x6158,	// (0x0004ce6e) cale_week_day_heading_pane_t7

0x0006,

0xf234,	// (0x00055f4a) cale_week_day_heading_pane_t

0xd71b,	// (0x00054431) bg_cale_side_pane

0x6185,	// (0x0004ce9b) cale_week_time_pane_t1

0x619d,	// (0x0004ceb3) cale_week_time_pane_t2

0x61b5,	// (0x0004cecb) cale_week_time_pane_t3

0x61cd,	// (0x0004cee3) cale_week_time_pane_t4

0x61e5,	// (0x0004cefb) cale_week_time_pane_t5

0x61fd,	// (0x0004cf13) cale_week_time_pane_t6

0x6215,	// (0x0004cf2b) cale_week_time_pane_t7

0x622d,	// (0x0004cf43) cale_week_time_pane_t8

0x0007,

0xf243,	// (0x00055f59) cale_week_time_pane_t

0x6245,	// (0x0004cf5b) cell_cale_week_pane_g2

0x625e,	// (0x0004cf74) cell_cale_week_pane_g3_ParamLimits

0x625e,	// (0x0004cf74) cell_cale_week_pane_g3

0xd729,	// (0x0005443f) grid_highlight_pane_cp07

0xd731,	// (0x00054447) listscroll_gms_pane

0xd73b,	// (0x00054451) grid_gms_pane

0xd744,	// (0x0005445a) listscroll_gms_pane_g1

0xd74c,	// (0x00054462) listscroll_gms_pane_g2

0x0001,

0xf254,	// (0x00055f6a) listscroll_gms_pane_g

0x6276,	// (0x0004cf8c) scroll_pane_cp010

0x6281,	// (0x0004cf97) cell_gms_pane_ParamLimits

0x6281,	// (0x0004cf97) cell_gms_pane

0x6294,	// (0x0004cfaa) cell_gms_pane_g1

0xd754,	// (0x0005446a) cell_gms_pane_g2

0xd75c,	// (0x00054472) cell_gms_pane_g3

0xd765,	// (0x0005447b) cell_gms_pane_g4

0x0003,

0xf259,	// (0x00055f6f) cell_gms_pane_g

0xd76e,	// (0x00054484) grid_highlight_pane_cp09

0x83fa,	// (0x0004f110) phob_pre_status_pane_g1

0x8402,	// (0x0004f118) phob_pre_status_pane_g2

0x840a,	// (0x0004f120) phob_pre_status_pane_g3

0x8412,	// (0x0004f128) phob_pre_status_pane_g4

0x0004,

0xf648,	// (0x0005635e) phob_pre_status_pane_g

0x8422,	// (0x0004f138) phob_pre_status_pane_t1

0x8432,	// (0x0004f148) phob_pre_status_pane_t2

0x8442,	// (0x0004f158) phob_pre_status_pane_t3

0x0002,

0xf653,	// (0x00056369) phob_pre_status_pane_t

0x5701,	// (0x0004c417) bg_list_pane_cp05

0x62a4,	// (0x0004cfba) grid_vorec_pane

0x62ae,	// (0x0004cfc4) vorec_t1

0x62bc,	// (0x0004cfd2) vorec_t2

0x62ca,	// (0x0004cfe0) vorec_t3

0x62d8,	// (0x0004cfee) vorec_t4

0x62e6,	// (0x0004cffc) vorec_t5

0x62f4,	// (0x0004d00a) vorec_t6

0x0006,

0xf262,	// (0x00055f78) vorec_t

0x6310,	// (0x0004d026) wait_bar_pane_cp01

0x6318,	// (0x0004d02e) cell_vorec_pane_ParamLimits

0x6318,	// (0x0004d02e) cell_vorec_pane

0xd776,	// (0x0005448c) cell_vorec_pane_g1

0x5701,	// (0x0004c417) grid_highlight_pane_cp05

0x633b,	// (0x0004d051) cams_zoom_pane

0x6347,	// (0x0004d05d) image_vga_pane

0x6356,	// (0x0004d06c) main_camera_pane_g1

0x6364,	// (0x0004d07a) main_camera_pane_g2

0x6370,	// (0x0004d086) main_camera_pane_g3

0x637c,	// (0x0004d092) main_camera_pane_g4

0x6388,	// (0x0004d09e) main_camera_pane_g5

0x6394,	// (0x0004d0aa) main_camera_pane_g6

0x63a0,	// (0x0004d0b6) main_camera_pane_g7

0x0007,

0xf271,	// (0x00055f87) main_camera_pane_g

0x63ac,	// (0x0004d0c2) main_camera_pane_t1

0x63be,	// (0x0004d0d4) main_camera_pane_t2

0x0001,

0xf282,	// (0x00055f98) main_camera_pane_t

0x63df,	// (0x0004d0f5) cams_zoom_pane_cp_ParamLimits

0x63df,	// (0x0004d0f5) cams_zoom_pane_cp

0x6403,	// (0x0004d119) image_cif_pane_ParamLimits

0x6403,	// (0x0004d119) image_cif_pane

0x6421,	// (0x0004d137) image_subqcif_pane

0x6429,	// (0x0004d13f) main_video_pane_g1_ParamLimits

0x6429,	// (0x0004d13f) main_video_pane_g1

0x6449,	// (0x0004d15f) main_video_pane_g2_ParamLimits

0x6449,	// (0x0004d15f) main_video_pane_g2

0x6479,	// (0x0004d18f) main_video_pane_g3_ParamLimits

0x6479,	// (0x0004d18f) main_video_pane_g3

0x64a2,	// (0x0004d1b8) main_video_pane_g4_ParamLimits

0x64a2,	// (0x0004d1b8) main_video_pane_g4

0x64cb,	// (0x0004d1e1) main_video_pane_g5_ParamLimits

0x64cb,	// (0x0004d1e1) main_video_pane_g5

0xd78c,	// (0x000544a2) main_video_pane_g6_ParamLimits

0xd78c,	// (0x000544a2) main_video_pane_g6

0x0006,

0xf287,	// (0x00055f9d) main_video_pane_g_ParamLimits

0xf287,	// (0x00055f9d) main_video_pane_g

0x64ef,	// (0x0004d205) main_video_pane_t1_ParamLimits

0x64ef,	// (0x0004d205) main_video_pane_t1

0xd7a6,	// (0x000544bc) cams_zoom_pane_g1

0xd7af,	// (0x000544c5) cams_zoom_pane_g2

0xd7b8,	// (0x000544ce) cams_zoom_pane_g3

0xd7c1,	// (0x000544d7) cams_zoom_pane_g4

0x0003,

0xf296,	// (0x00055fac) cams_zoom_pane_g

0x6539,	// (0x0004d24f) grid_cams_pane

0x6547,	// (0x0004d25d) linegrid_cams_pane

0x6555,	// (0x0004d26b) cell_cams_pane_ParamLimits

0x6555,	// (0x0004d26b) cell_cams_pane

0xd7ca,	// (0x000544e0) cams_burst_image_pane

0xd7d2,	// (0x000544e8) cell_cams_pane_g1

0x5701,	// (0x0004c417) grid_highlight_pane_cp03

0xd630,	// (0x00054346) mp_bg_pane_g1

0x5701,	// (0x0004c417) bg_list_pane_cp03

0x109e,	// (0x00047db4) bg_mp_pane

0x10a6,	// (0x00047dbc) grid_mp_pane

0x10ae,	// (0x00047dc4) media_player_g1

0x10b6,	// (0x00047dcc) media_player_t1

0x10c4,	// (0x00047dda) media_player_t2

0x10d2,	// (0x00047de8) media_player_t3

0x10e0,	// (0x00047df6) media_player_t4

0x10ee,	// (0x00047e04) media_player_t5

0x10fc,	// (0x00047e12) media_player_t6

0x110a,	// (0x00047e20) media_player_t7

0x0006,

0xf632,	// (0x00056348) media_player_t

0x1118,	// (0x00047e2e) wait_bar_pane_cp02

0xf617,	// (0x0005632d) main_usb_pane_t

0x83f1,	// (0x0004f107) cell_mp_pane

0xd630,	// (0x00054346) cell_mp_pane_g1

0x5701,	// (0x0004c417) grid_highlight_pane_cp06

0xd7da,	// (0x000544f0) grid_skin_colour_pane

0xd7e2,	// (0x000544f8) list_highlight_pane_cp03

0x65bf,	// (0x0004d2d5) skin_g1

0xd7ea,	// (0x00054500) skin_t1

0xd7f9,	// (0x0005450f) skin_t2

0x0001,

0xf2cb,	// (0x00055fe1) skin_t

0x65c9,	// (0x0004d2df) cell_skin_colour_pane_ParamLimits

0x65c9,	// (0x0004d2df) cell_skin_colour_pane

0xd807,	// (0x0005451d) cell_skin_colour_pane_g1

0x661e,	// (0x0004d334) call_video_g1_ParamLimits

0x661e,	// (0x0004d334) call_video_g1

0x662e,	// (0x0004d344) call_video_g2_ParamLimits

0x662e,	// (0x0004d344) call_video_g2

0x0001,

0xf2d0,	// (0x00055fe6) call_video_g_ParamLimits

0xf2d0,	// (0x00055fe6) call_video_g

0x666e,	// (0x0004d384) call_video_uplink_pane_cp1_ParamLimits

0x666e,	// (0x0004d384) call_video_uplink_pane_cp1

0xd821,	// (0x00054537) call_video_uplink_pane_cp2

0x671a,	// (0x0004d430) video_down_crop_pane_ParamLimits

0x671a,	// (0x0004d430) video_down_crop_pane

0x6800,	// (0x0004d516) video_down_pane_ParamLimits

0x6800,	// (0x0004d516) video_down_pane

0xd829,	// (0x0005453f) video_down_subqcif_pane_ParamLimits

0xd829,	// (0x0005453f) video_down_subqcif_pane

0xd841,	// (0x00054557) video_down_subqcif_pane_cp_ParamLimits

0xd841,	// (0x00054557) video_down_subqcif_pane_cp

0xd865,	// (0x0005457b) im_reading_pane_ParamLimits

0xd865,	// (0x0005457b) im_reading_pane

0x68e2,	// (0x0004d5f8) im_writing_pane_ParamLimits

0x68e2,	// (0x0004d5f8) im_writing_pane

0x6900,	// (0x0004d616) im_reading_pane_t1

0xd87f,	// (0x00054595) list_im_pane

0xd890,	// (0x000545a6) scroll_pane_cp07

0x6954,	// (0x0004d66a) im_writing_pane_t1_ParamLimits

0x6954,	// (0x0004d66a) im_writing_pane_t1

0xd8a9,	// (0x000545bf) im_writing_pane_t2_ParamLimits

0xd8a9,	// (0x000545bf) im_writing_pane_t2

0x0001,

0xf2da,	// (0x00055ff0) im_writing_pane_t_ParamLimits

0xf2da,	// (0x00055ff0) im_writing_pane_t

0x5701,	// (0x0004c417) input_focus_pane_cp04

0x5701,	// (0x0004c417) input_focus_pane_cp05

0x6969,	// (0x0004d67f) list_im_single_pane_ParamLimits

0x6969,	// (0x0004d67f) list_im_single_pane

0x698d,	// (0x0004d6a3) list_single_im_pane_t1

0x83b5,	// (0x0004f0cb) blid_accuracy_pane

0x83bd,	// (0x0004f0d3) blid_compass_pane

0x83c7,	// (0x0004f0dd) main_location_t1

0x83d5,	// (0x0004f0eb) main_location_t2

0x83e3,	// (0x0004f0f9) main_location_t3

0x0002,

0xf641,	// (0x00056357) main_location_t

0x5701,	// (0x0004c417) aid_levels_location

0xd630,	// (0x00054346) blid_accuracy_pane_g1

0xd630,	// (0x00054346) blid_accuracy_pane_g2

0x0001,

0xf33c,	// (0x00056052) blid_accuracy_pane_g

0xd8f1,	// (0x00054607) wml_content_pane

0xd92f,	// (0x00054645) wml_button_pane_ParamLimits

0xd92f,	// (0x00054645) wml_button_pane

0x699c,	// (0x0004d6b2) wml_list_single_large_pane_ParamLimits

0x699c,	// (0x0004d6b2) wml_list_single_large_pane

0x69c6,	// (0x0004d6dc) wml_list_single_medium_pane_ParamLimits

0x69c6,	// (0x0004d6dc) wml_list_single_medium_pane

0x69f7,	// (0x0004d70d) wml_list_single_small_pane_ParamLimits

0x69f7,	// (0x0004d70d) wml_list_single_small_pane

0xd943,	// (0x00054659) wml_selection_box_pane_ParamLimits

0xd943,	// (0x00054659) wml_selection_box_pane

0xd956,	// (0x0005466c) wml_list_single_pane_t1

0xd965,	// (0x0005467b) wml_list_single_medium_pane_t1

0xd974,	// (0x0005468a) wml_list_single_large_pane_t1

0xd983,	// (0x00054699) input_focus_pane_cp02_ParamLimits

0xd983,	// (0x00054699) input_focus_pane_cp02

0xd996,	// (0x000546ac) wml_selection_box_pane_g1

0xd99f,	// (0x000546b5) wml_selection_box_pane_t1_ParamLimits

0xd99f,	// (0x000546b5) wml_selection_box_pane_t1

0xd504,	// (0x0005421a) bg_wml_button_pane_ParamLimits

0xd504,	// (0x0005421a) bg_wml_button_pane

0xd9b7,	// (0x000546cd) wml_button_pane_g1

0xd9bf,	// (0x000546d5) wml_button_pane_t1

0xd9b7,	// (0x000546cd) wml_button_bg_pane_g1

0xd9cf,	// (0x000546e5) wml_button_bg_pane_g2

0xd9d7,	// (0x000546ed) wml_button_bg_pane_g3

0xd9df,	// (0x000546f5) wml_button_bg_pane_g4

0xd9e7,	// (0x000546fd) wml_button_bg_pane_g5

0xd9ef,	// (0x00054705) wml_button_bg_pane_g6

0xd9f7,	// (0x0005470d) wml_button_bg_pane_g7

0xd9ff,	// (0x00054715) wml_button_bg_pane_g8

0xda07,	// (0x0005471d) wml_button_bg_pane_g9

0x0008,

0xf2df,	// (0x00055ff5) wml_button_bg_pane_g

0x6a31,	// (0x0004d747) bg_list_pane_cp02

0xda0f,	// (0x00054725) mce_header_pane_ParamLimits

0xda0f,	// (0x00054725) mce_header_pane

0xda25,	// (0x0005473b) mce_icon_pane

0xda25,	// (0x0005473b) mce_image_pane

0xda2e,	// (0x00054744) mce_text_pane_ParamLimits

0xda2e,	// (0x00054744) mce_text_pane

0x6a3b,	// (0x0004d751) scroll_pane_cp03

0xd927,	// (0x0005463d) scroll_pane_cp04

0xda41,	// (0x00054757) scroll_pane_cp05_ParamLimits

0xda41,	// (0x00054757) scroll_pane_cp05

0x6a45,	// (0x0004d75b) mce_header_field_pane_ParamLimits

0x6a45,	// (0x0004d75b) mce_header_field_pane

0x6a65,	// (0x0004d77b) mce_header_field_pane_2_ParamLimits

0x6a65,	// (0x0004d77b) mce_header_field_pane_2

0x6a7b,	// (0x0004d791) mce_header_field_pane_3

0x6a83,	// (0x0004d799) list_single_mce_message_pane_ParamLimits

0x6a83,	// (0x0004d799) list_single_mce_message_pane

0x6aa8,	// (0x0004d7be) list_single_mce_smart_pane_ParamLimits

0x6aa8,	// (0x0004d7be) list_single_mce_smart_pane

0xda4d,	// (0x00054763) input_focus_pane_cp03

0xda56,	// (0x0005476c) list_header_data_pane

0x6ad8,	// (0x0004d7ee) mce_header_field_pane_t1

0x6ae6,	// (0x0004d7fc) list_single_mce_header_pane_ParamLimits

0x6ae6,	// (0x0004d7fc) list_single_mce_header_pane

0xda5e,	// (0x00054774) list_single_mce_header_pane_t1

0xda6d,	// (0x00054783) list_single_mce_message_pane_g1

0xda75,	// (0x0005478b) list_single_mce_message_pane_t1

0x6b2a,	// (0x0004d840) bg_cale_heading_pane_cp01_ParamLimits

0x6b2a,	// (0x0004d840) bg_cale_heading_pane_cp01

0xda83,	// (0x00054799) bg_cale_pane_cp02_ParamLimits

0xda83,	// (0x00054799) bg_cale_pane_cp02

0x6b4d,	// (0x0004d863) cale_month_corner_pane

0x6b63,	// (0x0004d879) cale_month_day_heading_pane_ParamLimits

0x6b63,	// (0x0004d879) cale_month_day_heading_pane

0x6b96,	// (0x0004d8ac) cale_month_pane_g1_ParamLimits

0x6b96,	// (0x0004d8ac) cale_month_pane_g1

0x6bb2,	// (0x0004d8c8) cale_month_pane_g2_ParamLimits

0x6bb2,	// (0x0004d8c8) cale_month_pane_g2

0x6bcd,	// (0x0004d8e3) cale_month_pane_g3_ParamLimits

0x6bcd,	// (0x0004d8e3) cale_month_pane_g3

0x6bf9,	// (0x0004d90f) cale_month_pane_g4_ParamLimits

0x6bf9,	// (0x0004d90f) cale_month_pane_g4

0x6c25,	// (0x0004d93b) cale_month_pane_g5_ParamLimits

0x6c25,	// (0x0004d93b) cale_month_pane_g5

0x6c51,	// (0x0004d967) cale_month_pane_g6_ParamLimits

0x6c51,	// (0x0004d967) cale_month_pane_g6

0x6c7d,	// (0x0004d993) cale_month_pane_g7_ParamLimits

0x6c7d,	// (0x0004d993) cale_month_pane_g7

0x6cb9,	// (0x0004d9cf) cale_month_pane_g8_ParamLimits

0x6cb9,	// (0x0004d9cf) cale_month_pane_g8

0x6cf5,	// (0x0004da0b) cale_month_pane_g9_ParamLimits

0x6cf5,	// (0x0004da0b) cale_month_pane_g9

0x6d2f,	// (0x0004da45) cale_month_pane_g10_ParamLimits

0x6d2f,	// (0x0004da45) cale_month_pane_g10

0x6d69,	// (0x0004da7f) cale_month_pane_g11_ParamLimits

0x6d69,	// (0x0004da7f) cale_month_pane_g11

0x6da3,	// (0x0004dab9) cale_month_pane_g12_ParamLimits

0x6da3,	// (0x0004dab9) cale_month_pane_g12

0x6ddd,	// (0x0004daf3) cale_month_pane_g13_ParamLimits

0x6ddd,	// (0x0004daf3) cale_month_pane_g13

0x000c,

0xf2f2,	// (0x00056008) cale_month_pane_g_ParamLimits

0xf2f2,	// (0x00056008) cale_month_pane_g

0x6e17,	// (0x0004db2d) cale_month_week_pane

0x6e2a,	// (0x0004db40) grid_cale_month_pane_ParamLimits

0x6e2a,	// (0x0004db40) grid_cale_month_pane

0x6e58,	// (0x0004db6e) cale_month_day_heading_pane_t1

0x6eb6,	// (0x0004dbcc) cale_month_day_heading_pane_t2

0x6f1b,	// (0x0004dc31) cale_month_day_heading_pane_t3

0x6f80,	// (0x0004dc96) cale_month_day_heading_pane_t4

0x6fe5,	// (0x0004dcfb) cale_month_day_heading_pane_t5

0x704a,	// (0x0004dd60) cale_month_day_heading_pane_t6

0x70af,	// (0x0004ddc5) cale_month_day_heading_pane_t7

0x0006,

0xf30d,	// (0x00056023) cale_month_day_heading_pane_t

0xd71b,	// (0x00054431) bg_cale_side_pane_cp01

0x7124,	// (0x0004de3a) cale_month_week_pane_t1

0x713b,	// (0x0004de51) cale_month_week_pane_t2

0x7152,	// (0x0004de68) cale_month_week_pane_t3

0x7169,	// (0x0004de7f) cale_month_week_pane_t4

0x7180,	// (0x0004de96) cale_month_week_pane_t5

0x7197,	// (0x0004dead) cale_month_week_pane_t6

0x0005,

0xf31c,	// (0x00056032) cale_month_week_pane_t

0x71ae,	// (0x0004dec4) cell_cale_month_pane_ParamLimits

0x71ae,	// (0x0004dec4) cell_cale_month_pane

0x7264,	// (0x0004df7a) cell_cale_month_pane_g1

0x7270,	// (0x0004df86) cell_cale_month_pane_t1_ParamLimits

0x7270,	// (0x0004df86) cell_cale_month_pane_t1

0xd729,	// (0x0005443f) grid_highlight_pane_cp08

0xd630,	// (0x00054346) main_smil_g1

0x728c,	// (0x0004dfa2) smil_status_pane

0xdab8,	// (0x000547ce) smil_text_pane

0x0fbe,	// (0x00047cd4) bg_popup_call3_rect_pane_g8

0x0fc6,	// (0x00047cdc) bg_popup_call3_rect_pane_g9

0x0008,

0xf5d5,	// (0x000562eb) bg_popup_call3_rect_pane_g

0x1253,	// (0x00047f69) smil_status_volume_pane_g1

0xdac2,	// (0x000547d8) smil_status_pane_t1

0x879b,	// (0x0004f4b1) volume_smil_pane

0xdad9,	// (0x000547ef) list_smil_text_pane

0x729f,	// (0x0004dfb5) scroll_pane_cp011

0x72aa,	// (0x0004dfc0) smil_text_list_pane_t1_ParamLimits

0x72aa,	// (0x0004dfc0) smil_text_list_pane_t1

0x7322,	// (0x0004e038) aid_volume_smil_ParamLimits

0x7322,	// (0x0004e038) aid_volume_smil

0xd630,	// (0x00054346) smil_volume_pane_g1

0xd630,	// (0x00054346) smil_volume_pane_g2

0x0001,

0xf33c,	// (0x00056052) smil_volume_pane_g

0xd5db,	// (0x000542f1) listscroll_cale_day_pane

0xdae3,	// (0x000547f9) bg_cale_pane

0xdafb,	// (0x00054811) list_cale_pane

0xdb0c,	// (0x00054822) scroll_pane_cp09

0xdb1d,	// (0x00054833) cale_bg_pane_g1

0xdb25,	// (0x0005483b) cale_bg_pane_g2

0xdb2d,	// (0x00054843) cale_bg_pane_g3

0xdb35,	// (0x0005484b) cale_bg_pane_g4

0xdb3d,	// (0x00054853) cale_bg_pane_g5

0xdb45,	// (0x0005485b) cale_bg_pane_g6

0xdb4d,	// (0x00054863) cale_bg_pane_g7

0xdb55,	// (0x0005486b) cale_bg_pane_g8

0xdb5d,	// (0x00054873) cale_bg_pane_g9

0x0008,

0xf341,	// (0x00056057) cale_bg_pane_g

0x7344,	// (0x0004e05a) list_cale_time_pane_ParamLimits

0x7344,	// (0x0004e05a) list_cale_time_pane

0xdb65,	// (0x0005487b) list_cale_time_pane_g1_ParamLimits

0xdb65,	// (0x0005487b) list_cale_time_pane_g1

0xdb71,	// (0x00054887) list_cale_time_pane_g2_ParamLimits

0xdb71,	// (0x00054887) list_cale_time_pane_g2

0x7360,	// (0x0004e076) list_cale_time_pane_g3_ParamLimits

0x7360,	// (0x0004e076) list_cale_time_pane_g3

0x736e,	// (0x0004e084) list_cale_time_pane_g4_ParamLimits

0x736e,	// (0x0004e084) list_cale_time_pane_g4

0x737c,	// (0x0004e092) list_cale_time_pane_g5_ParamLimits

0x737c,	// (0x0004e092) list_cale_time_pane_g5

0x0005,

0xf354,	// (0x0005606a) list_cale_time_pane_g_ParamLimits

0xf354,	// (0x0005606a) list_cale_time_pane_g

0xdb8b,	// (0x000548a1) list_cale_time_pane_t1_ParamLimits

0xdb8b,	// (0x000548a1) list_cale_time_pane_t1

0xdbb3,	// (0x000548c9) list_cale_time_pane_t2_ParamLimits

0xdbb3,	// (0x000548c9) list_cale_time_pane_t2

0x76a1,	// (0x0004e3b7) aid_blid_cardinal_pane

0x76e3,	// (0x0004e3f9) compass_pane_t4

0xdbdb,	// (0x000548f1) list_cale_time_pane_t4_ParamLimits

0xdbdb,	// (0x000548f1) list_cale_time_pane_t4

0x76f1,	// (0x0004e407) compass_pane_t5

0x7701,	// (0x0004e417) compass_pane_t6

0x770f,	// (0x0004e425) compass_pane_t7

0xe014,	// (0x00054d2a) navi_pane_cc_t1

0xe169,	// (0x00054e7f) aid_phob_thumbnail_center_pane

0x7ebb,	// (0x0004ebd1) main_postcard_pane_g4_ParamLimits

0x0002,

0xf361,	// (0x00056077) list_cale_time_pane_t_ParamLimits

0xf361,	// (0x00056077) list_cale_time_pane_t

0x5334,	// (0x0004c04a) bg_popup_window_pane_cp02_ParamLimits

0x5334,	// (0x0004c04a) bg_popup_window_pane_cp02

0xdc03,	// (0x00054919) heading_pane_cp01_ParamLimits

0xdc03,	// (0x00054919) heading_pane_cp01

0xdc0f,	// (0x00054925) loc_req_pane_ParamLimits

0xdc0f,	// (0x00054925) loc_req_pane

0xdc1f,	// (0x00054935) loc_type_pane_ParamLimits

0xdc1f,	// (0x00054935) loc_type_pane

0xdc31,	// (0x00054947) loc_type_pane_t1_ParamLimits

0xdc31,	// (0x00054947) loc_type_pane_t1

0xdc43,	// (0x00054959) loc_type_pane_t2_ParamLimits

0xdc43,	// (0x00054959) loc_type_pane_t2

0xdc55,	// (0x0005496b) loc_type_pane_t3_ParamLimits

0xdc55,	// (0x0005496b) loc_type_pane_t3

0x0002,

0xf368,	// (0x0005607e) loc_type_pane_t_ParamLimits

0xf368,	// (0x0005607e) loc_type_pane_t

0xdc67,	// (0x0005497d) list_loc_req_pane

0xdc71,	// (0x00054987) scroll_pane_cp012

0x738a,	// (0x0004e0a0) list_single_loc_request_popup_menu_pane_ParamLimits

0x738a,	// (0x0004e0a0) list_single_loc_request_popup_menu_pane

0xdc7c,	// (0x00054992) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xdc7c,	// (0x00054992) list_single_loc_request_popup_menu_pane_g1

0xdc88,	// (0x0005499e) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xdc88,	// (0x0005499e) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf36f,	// (0x00056085) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf36f,	// (0x00056085) list_single_loc_request_popup_menu_pane_g

0xdc94,	// (0x000549aa) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xdc94,	// (0x000549aa) list_single_loc_request_popup_menu_pane_t1

0x739c,	// (0x0004e0b2) bg_popup_window_pane_cp03_ParamLimits

0x739c,	// (0x0004e0b2) bg_popup_window_pane_cp03

0x73aa,	// (0x0004e0c0) heading_loc_req_pane_ParamLimits

0x73aa,	// (0x0004e0c0) heading_loc_req_pane

0x73b6,	// (0x0004e0cc) popup_dyc_status_message_window_g1_ParamLimits

0x73b6,	// (0x0004e0cc) popup_dyc_status_message_window_g1

0x73c2,	// (0x0004e0d8) popup_dyc_status_message_window_t1_ParamLimits

0x73c2,	// (0x0004e0d8) popup_dyc_status_message_window_t1

0x73d4,	// (0x0004e0ea) popup_dyc_status_message_window_t2_ParamLimits

0x73d4,	// (0x0004e0ea) popup_dyc_status_message_window_t2

0x73e6,	// (0x0004e0fc) popup_dyc_status_message_window_t3_ParamLimits

0x73e6,	// (0x0004e0fc) popup_dyc_status_message_window_t3

0x0002,

0xf374,	// (0x0005608a) popup_dyc_status_message_window_t_ParamLimits

0xf374,	// (0x0005608a) popup_dyc_status_message_window_t

0x5701,	// (0x0004c417) bg_heading_pane_cp01

0xdcaa,	// (0x000549c0) heading_loc_req_pane_g1

0xdcb2,	// (0x000549c8) heading_loc_req_pane_g2

0xdcba,	// (0x000549d0) heading_loc_req_pane_g3

0x0002,

0xf37b,	// (0x00056091) heading_loc_req_pane_g

0xdcc2,	// (0x000549d8) heading_loc_req_pane_t1

0xdcd1,	// (0x000549e7) bg_popup_sub_pane_cp01_ParamLimits

0xdcd1,	// (0x000549e7) bg_popup_sub_pane_cp01

0xdcdf,	// (0x000549f5) popup_cale_events_window_g1_ParamLimits

0xdcdf,	// (0x000549f5) popup_cale_events_window_g1

0xdcff,	// (0x00054a15) popup_cale_events_window_g2_ParamLimits

0xdcff,	// (0x00054a15) popup_cale_events_window_g2

0x0001,

0xf3af,	// (0x000560c5) popup_cale_events_window_g_ParamLimits

0xf3af,	// (0x000560c5) popup_cale_events_window_g

0xdd1f,	// (0x00054a35) popup_cale_events_window_t1_ParamLimits

0xdd1f,	// (0x00054a35) popup_cale_events_window_t1

0xdd31,	// (0x00054a47) popup_cale_events_window_t2_ParamLimits

0xdd31,	// (0x00054a47) popup_cale_events_window_t2

0xdd6f,	// (0x00054a85) popup_cale_events_window_t3_ParamLimits

0xdd6f,	// (0x00054a85) popup_cale_events_window_t3

0xdda9,	// (0x00054abf) popup_cale_events_window_t4_ParamLimits

0xdda9,	// (0x00054abf) popup_cale_events_window_t4

0x0003,

0xf3b4,	// (0x000560ca) popup_cale_events_window_t_ParamLimits

0xf3b4,	// (0x000560ca) popup_cale_events_window_t

0x746a,	// (0x0004e180) call_type_pane

0xdddf,	// (0x00054af5) popup_call_status_window_g1

0x7476,	// (0x0004e18c) popup_call_status_window_g2

0x7482,	// (0x0004e198) popup_call_status_window_g3

0x0002,

0xf3bd,	// (0x000560d3) popup_call_status_window_g

0xdded,	// (0x00054b03) call_type_pane_g1

0xddf6,	// (0x00054b0c) call_type_pane_g2

0x0001,

0xf3c4,	// (0x000560da) call_type_pane_g

0x5701,	// (0x0004c417) bg_popup_sub_pane_cp02

0xddff,	// (0x00054b15) listscroll_popup_wml_pane

0xde07,	// (0x00054b1d) list_wml_pane

0xde11,	// (0x00054b27) scroll_pane_cp013

0xde1c,	// (0x00054b32) list_single_graphic_popup_wml_pane_ParamLimits

0xde1c,	// (0x00054b32) list_single_graphic_popup_wml_pane

0xd630,	// (0x00054346) list_single_graphic_popup_wml_pane_g1

0xde30,	// (0x00054b46) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf3c9,	// (0x000560df) list_single_graphic_popup_wml_pane_g

0xde38,	// (0x00054b4e) list_single_graphic_popup_wml_pane_t1

0xde4e,	// (0x00054b64) aid_call_pane

0x5954,	// (0x0004c66a) popup_clock_analogue_window_g1

0x5954,	// (0x0004c66a) popup_clock_analogue_window_g2

0x748e,	// (0x0004e1a4) popup_clock_analogue_window_g3

0x748e,	// (0x0004e1a4) popup_clock_analogue_window_g4

0xd630,	// (0x00054346) popup_clock_analogue_window_g5

0x0004,

0xf3ce,	// (0x000560e4) popup_clock_analogue_window_g

0x7496,	// (0x0004e1ac) popup_clock_analogue_window_t1

0x74a4,	// (0x0004e1ba) clock_digital_number_pane_ParamLimits

0x74a4,	// (0x0004e1ba) clock_digital_number_pane

0x74b0,	// (0x0004e1c6) clock_digital_number_pane_cp02_ParamLimits

0x74b0,	// (0x0004e1c6) clock_digital_number_pane_cp02

0x74bc,	// (0x0004e1d2) clock_digital_number_pane_cp03_ParamLimits

0x74bc,	// (0x0004e1d2) clock_digital_number_pane_cp03

0x74c8,	// (0x0004e1de) clock_digital_number_pane_cp04_ParamLimits

0x74c8,	// (0x0004e1de) clock_digital_number_pane_cp04

0x74d8,	// (0x0004e1ee) clock_digital_separator_pane_ParamLimits

0x74d8,	// (0x0004e1ee) clock_digital_separator_pane

0x74e4,	// (0x0004e1fa) popup_clock_digital_window_t1

0xd630,	// (0x00054346) clock_digital_number_pane_g1

0xd630,	// (0x00054346) clock_digital_number_pane_g2

0x0001,

0xf33c,	// (0x00056052) clock_digital_number_pane_g

0xd630,	// (0x00054346) clock_digital_separator_pane_g1

0xd630,	// (0x00054346) clock_digital_separator_pane_g2

0x0001,

0xf33c,	// (0x00056052) clock_digital_separator_pane_g

0x5701,	// (0x0004c417) bg_popup_window_pane_cp04

0xde56,	// (0x00054b6c) heading_pane_cp03

0xde5e,	// (0x00054b74) listscroll_popup_gms_pane

0xde66,	// (0x00054b7c) grid_large_graphic_popup_pane

0xde70,	// (0x00054b86) listscroll_popup_gms_pane_g1

0xde78,	// (0x00054b8e) listscroll_popup_gms_pane_g2

0x0001,

0xf3d9,	// (0x000560ef) listscroll_popup_gms_pane_g

0xd927,	// (0x0005463d) scroll_pane_cp014

0x7501,	// (0x0004e217) cell_large_graphic_popup_pane_ParamLimits

0x7501,	// (0x0004e217) cell_large_graphic_popup_pane

0x7519,	// (0x0004e22f) cell_large_graphic_popup_pane_g1_ParamLimits

0x7519,	// (0x0004e22f) cell_large_graphic_popup_pane_g1

0xde80,	// (0x00054b96) cell_large_graphic_popup_pane_g2_ParamLimits

0xde80,	// (0x00054b96) cell_large_graphic_popup_pane_g2

0xde8c,	// (0x00054ba2) cell_large_graphic_popup_pane_g3_ParamLimits

0xde8c,	// (0x00054ba2) cell_large_graphic_popup_pane_g3

0xde99,	// (0x00054baf) cell_large_graphic_popup_pane_g4_ParamLimits

0xde99,	// (0x00054baf) cell_large_graphic_popup_pane_g4

0x0003,

0xf3de,	// (0x000560f4) cell_large_graphic_popup_pane_g_ParamLimits

0xf3de,	// (0x000560f4) cell_large_graphic_popup_pane_g

0xdea9,	// (0x00054bbf) grid_highlight_pane_cp010

0xd630,	// (0x00054346) bg_popup_call_pane_g1

0xdeb3,	// (0x00054bc9) list_single_graphic_popup_conf_pane_ParamLimits

0xdeb3,	// (0x00054bc9) list_single_graphic_popup_conf_pane

0xdec6,	// (0x00054bdc) list_highlight_pane_cp01

0xdecf,	// (0x00054be5) list_single_graphic_popup_conf_pane_g1

0xded7,	// (0x00054bed) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf3e7,	// (0x000560fd) list_single_graphic_popup_conf_pane_g

0xdedf,	// (0x00054bf5) list_single_graphic_popup_conf_pane_t1

0xdeed,	// (0x00054c03) linegrid_cams_pane_g1

0x7525,	// (0x0004e23b) linegrid_cams_pane_g2

0xd75c,	// (0x00054472) linegrid_cams_pane_g3

0xdef6,	// (0x00054c0c) linegrid_cams_pane_g4

0x752e,	// (0x0004e244) linegrid_cams_pane_g5

0x7537,	// (0x0004e24d) linegrid_cams_pane_g6

0xd765,	// (0x0005447b) linegrid_cams_pane_g7

0x0006,

0xf3ec,	// (0x00056102) linegrid_cams_pane_g

0xdeff,	// (0x00054c15) popup_clock_analogue_window

0xdeff,	// (0x00054c15) popup_clock_digital_window

0x5701,	// (0x0004c417) popup_phob_thumbnail_window

0xd630,	// (0x00054346) call_video_uplink_pane_g1

0xdf08,	// (0x00054c1e) call_video_uplink_pane_g2

0x0001,

0xf3fb,	// (0x00056111) call_video_uplink_pane_g

0xdf10,	// (0x00054c26) video_uplink_pane

0xdf18,	// (0x00054c2e) mce_image_pane_g1

0x7540,	// (0x0004e256) mce_image_pane_g2

0x754a,	// (0x0004e260) mce_image_pane_g3

0x7552,	// (0x0004e268) mce_image_pane_g4

0x755a,	// (0x0004e270) mce_image_pane_g5

0x0004,

0xf400,	// (0x00056116) mce_image_pane_g

0xdf22,	// (0x00054c38) control_top_pane_stacon_cp01_ParamLimits

0xdf22,	// (0x00054c38) control_top_pane_stacon_cp01

0xdf36,	// (0x00054c4c) uni_indicator_pane_stacon_cp01_ParamLimits

0xdf36,	// (0x00054c4c) uni_indicator_pane_stacon_cp01

0xdf47,	// (0x00054c5d) bg_popup_sub_pane_cp03

0x7562,	// (0x0004e278) chi_dic_find_pane

0x756a,	// (0x0004e280) listscroll_chi_dic_pane

0x7573,	// (0x0004e289) main_pane_chidic_g1

0xdf51,	// (0x00054c67) chi_dic_find_pane_t1

0xdf5f,	// (0x00054c75) find_chidic_pane

0xdf68,	// (0x00054c7e) chi_dic_list_pane_ParamLimits

0xdf68,	// (0x00054c7e) chi_dic_list_pane

0xdf79,	// (0x00054c8f) scroll_pane_cp020

0xdf81,	// (0x00054c97) find_chidic_pane_t1

0x5701,	// (0x0004c417) input_focus_pane_cp06

0x7586,	// (0x0004e29c) list_chi_dic_pane_ParamLimits

0x7586,	// (0x0004e29c) list_chi_dic_pane

0x75a0,	// (0x0004e2b6) list_chi_dic_pane_t1_ParamLimits

0x75a0,	// (0x0004e2b6) list_chi_dic_pane_t1

0x5701,	// (0x0004c417) list_highlight_pane_cp020

0xdf90,	// (0x00054ca6) bg_cale_heading_pane_g1

0x75b3,	// (0x0004e2c9) bg_cale_heading_pane_g2

0x75bb,	// (0x0004e2d1) bg_cale_heading_pane_g3

0x75c3,	// (0x0004e2d9) bg_cale_heading_pane_g4

0x75cd,	// (0x0004e2e3) bg_cale_heading_pane_g5

0x75d7,	// (0x0004e2ed) bg_cale_heading_pane_g6

0x75df,	// (0x0004e2f5) bg_cale_heading_pane_g7

0x75e7,	// (0x0004e2fd) bg_cale_heading_pane_g8

0x75f1,	// (0x0004e307) bg_cale_heading_pane_g9

0x0008,

0xf40b,	// (0x00056121) bg_cale_heading_pane_g

0xdf90,	// (0x00054ca6) bg_cale_side_pane_g1

0x75fb,	// (0x0004e311) bg_cale_side_pane_g2

0x7603,	// (0x0004e319) bg_cale_side_pane_g3

0x760b,	// (0x0004e321) bg_cale_side_pane_g4

0x7613,	// (0x0004e329) bg_cale_side_pane_g5

0x761b,	// (0x0004e331) bg_cale_side_pane_g6

0x7623,	// (0x0004e339) bg_cale_side_pane_g7

0x762b,	// (0x0004e341) bg_cale_side_pane_g8

0x7633,	// (0x0004e349) bg_cale_side_pane_g9

0x0008,

0xf41e,	// (0x00056134) bg_cale_side_pane_g

0x763b,	// (0x0004e351) popup_call_status_window_ParamLimits

0x763b,	// (0x0004e351) popup_call_status_window

0xdf98,	// (0x00054cae) stacon_top_pane

0xdfa0,	// (0x00054cb6) status_pane_ParamLimits

0xdfa0,	// (0x00054cb6) status_pane

0xdfb5,	// (0x00054ccb) status_small_pane

0xdfbd,	// (0x00054cd3) control_pane

0x5701,	// (0x0004c417) stacon_bottom_pane

0xdfc5,	// (0x00054cdb) list_single_mce_smart_pane_t1_ParamLimits

0xdfc5,	// (0x00054cdb) list_single_mce_smart_pane_t1

0xdfd8,	// (0x00054cee) list_single_mce_smart_pane_t2_ParamLimits

0xdfd8,	// (0x00054cee) list_single_mce_smart_pane_t2

0x0001,

0xf431,	// (0x00056147) list_single_mce_smart_pane_t_ParamLimits

0xf431,	// (0x00056147) list_single_mce_smart_pane_t

0x7647,	// (0x0004e35d) compass_pane

0x7653,	// (0x0004e369) main_location2_pane_t1

0x7667,	// (0x0004e37d) main_location2_pane_t2

0x767b,	// (0x0004e391) main_location2_pane_t3

0x0003,

0xf436,	// (0x0005614c) main_location2_pane_t

0xdff7,	// (0x00054d0d) compass_pane_g1_ParamLimits

0xdff7,	// (0x00054d0d) compass_pane_g1

0x76c5,	// (0x0004e3db) compass_pane_t1

0x76d4,	// (0x0004e3ea) compass_pane_t2

0x0005,

0xf43f,	// (0x00056155) compass_pane_t

0x771f,	// (0x0004e435) text_secondary_cp61

0xe00b,	// (0x00054d21) navi_pane_cams_g5

0xe02e,	// (0x00054d44) navi_pane_im_t1

0xe03c,	// (0x00054d52) navi_pane_mp_g1_ParamLimits

0xe03c,	// (0x00054d52) navi_pane_mp_g1

0xe050,	// (0x00054d66) navi_pane_mp_g2_ParamLimits

0xe050,	// (0x00054d66) navi_pane_mp_g2

0xe05c,	// (0x00054d72) navi_pane_mp_g3_ParamLimits

0xe05c,	// (0x00054d72) navi_pane_mp_g3

0x0002,

0xf453,	// (0x00056169) navi_pane_mp_g_ParamLimits

0xf453,	// (0x00056169) navi_pane_mp_g

0xe068,	// (0x00054d7e) navi_pane_mp_t1

0xe076,	// (0x00054d8c) navi_pane_mp_t2

0x0002,

0xf45a,	// (0x00056170) navi_pane_mp_t

0xe0b2,	// (0x00054dc8) navi_pane_vt_g1

0xe068,	// (0x00054d7e) navi_pane_vt_t1

0xe0ba,	// (0x00054dd0) navi_slider_pane

0xe0c2,	// (0x00054dd8) zooming_pane

0xe0ca,	// (0x00054de0) navi_slider_pane_g1

0x7834,	// (0x0004e54a) navi_slider_pane_g2

0x0006,

0xf461,	// (0x00056177) navi_slider_pane_g

0xe0ee,	// (0x00054e04) aid_levels_zoom

0xe0f6,	// (0x00054e0c) zooming_pane_g1

0xe0fe,	// (0x00054e14) zooming_pane_g2

0xe0fe,	// (0x00054e14) zooming_pane_g3

0x0002,

0xf470,	// (0x00056186) zooming_pane_g

0xe106,	// (0x00054e1c) level_10_zoom

0xe10f,	// (0x00054e25) level_11_zoom

0xe118,	// (0x00054e2e) level_1_zoom

0xe121,	// (0x00054e37) level_2_zoom

0xe12a,	// (0x00054e40) level_3_zoom

0xe133,	// (0x00054e49) level_4_zoom

0xe13c,	// (0x00054e52) level_5_zoom

0xe145,	// (0x00054e5b) level_6_zoom

0xe14e,	// (0x00054e64) level_7_zoom

0xe157,	// (0x00054e6d) level_8_zoom

0xe160,	// (0x00054e76) level_9_zoom

0xe171,	// (0x00054e87) popup_phob_thumbnail_window_g1

0xe179,	// (0x00054e8f) popup_phob_thumbnail_window_g2

0x0001,

0xf477,	// (0x0005618d) popup_phob_thumbnail_window_g

0x1120,	// (0x00047e36) level_1_location

0x1128,	// (0x00047e3e) level_2_location

0x1130,	// (0x00047e46) level_3_location

0x1138,	// (0x00047e4e) level_4_location

0xe0c2,	// (0x00054dd8) level_5_location

0x7846,	// (0x0004e55c) mce_icon_pane_g1

0x784e,	// (0x0004e564) mce_icon_pane_g2

0x0001,

0xf47c,	// (0x00056192) mce_icon_pane_g

0x7856,	// (0x0004e56c) main_mup_pane_g1_ParamLimits

0x7856,	// (0x0004e56c) main_mup_pane_g1

0x786e,	// (0x0004e584) main_mup_pane_g2_ParamLimits

0x786e,	// (0x0004e584) main_mup_pane_g2

0x788a,	// (0x0004e5a0) main_mup_pane_g3_ParamLimits

0x788a,	// (0x0004e5a0) main_mup_pane_g3

0x78a6,	// (0x0004e5bc) main_mup_pane_g4_ParamLimits

0x78a6,	// (0x0004e5bc) main_mup_pane_g4

0x78c2,	// (0x0004e5d8) main_mup_pane_g5_ParamLimits

0x78c2,	// (0x0004e5d8) main_mup_pane_g5

0x78e3,	// (0x0004e5f9) main_mup_pane_g6_ParamLimits

0x78e3,	// (0x0004e5f9) main_mup_pane_g6

0x78ff,	// (0x0004e615) main_mup_pane_g7_ParamLimits

0x78ff,	// (0x0004e615) main_mup_pane_g7

0x791b,	// (0x0004e631) main_mup_pane_g8_ParamLimits

0x791b,	// (0x0004e631) main_mup_pane_g8

0x793b,	// (0x0004e651) main_mup_pane_g9_ParamLimits

0x793b,	// (0x0004e651) main_mup_pane_g9

0x795a,	// (0x0004e670) main_mup_pane_g10_ParamLimits

0x795a,	// (0x0004e670) main_mup_pane_g10

0x7979,	// (0x0004e68f) main_mup_pane_g11_ParamLimits

0x7979,	// (0x0004e68f) main_mup_pane_g11

0x7991,	// (0x0004e6a7) main_mup_pane_g12_ParamLimits

0x7991,	// (0x0004e6a7) main_mup_pane_g12

0x799f,	// (0x0004e6b5) main_mup_pane_g13_ParamLimits

0x799f,	// (0x0004e6b5) main_mup_pane_g13

0x000c,

0xf481,	// (0x00056197) main_mup_pane_g_ParamLimits

0xf481,	// (0x00056197) main_mup_pane_g

0x79b5,	// (0x0004e6cb) main_mup_pane_t1_ParamLimits

0x79b5,	// (0x0004e6cb) main_mup_pane_t1

0x79d2,	// (0x0004e6e8) main_mup_pane_t2_ParamLimits

0x79d2,	// (0x0004e6e8) main_mup_pane_t2

0x79ec,	// (0x0004e702) main_mup_pane_t3_ParamLimits

0x79ec,	// (0x0004e702) main_mup_pane_t3

0x7a06,	// (0x0004e71c) main_mup_pane_t4_ParamLimits

0x7a06,	// (0x0004e71c) main_mup_pane_t4

0x7a18,	// (0x0004e72e) main_mup_pane_t5_ParamLimits

0x7a18,	// (0x0004e72e) main_mup_pane_t5

0x7a2a,	// (0x0004e740) main_mup_pane_t6_ParamLimits

0x7a2a,	// (0x0004e740) main_mup_pane_t6

0x0005,

0xf49c,	// (0x000561b2) main_mup_pane_t_ParamLimits

0xf49c,	// (0x000561b2) main_mup_pane_t

0x7a40,	// (0x0004e756) mup_progress_pane_ParamLimits

0x7a40,	// (0x0004e756) mup_progress_pane

0x7a4c,	// (0x0004e762) mup_visualizer_pane_ParamLimits

0x7a4c,	// (0x0004e762) mup_visualizer_pane

0x7a86,	// (0x0004e79c) mup_volume_pane_ParamLimits

0x7a86,	// (0x0004e79c) mup_volume_pane

0xdddf,	// (0x00054af5) mup_visualizer_pane_g1_ParamLimits

0xdddf,	// (0x00054af5) mup_visualizer_pane_g1

0xdddf,	// (0x00054af5) mup_visualizer_pane_g2_ParamLimits

0xdddf,	// (0x00054af5) mup_visualizer_pane_g2

0xdff7,	// (0x00054d0d) mup_visualizer_pane_g3_ParamLimits

0xdff7,	// (0x00054d0d) mup_visualizer_pane_g3

0x0002,

0xf4a9,	// (0x000561bf) mup_visualizer_pane_g_ParamLimits

0xf4a9,	// (0x000561bf) mup_visualizer_pane_g

0xd630,	// (0x00054346) mup_volume_pane_g1

0xe189,	// (0x00054e9f) mup_volume_pane_g2

0x0001,

0xf4b0,	// (0x000561c6) mup_volume_pane_g

0xd630,	// (0x00054346) mup_progress_pane_g1

0xe192,	// (0x00054ea8) mup_progress_pane_g2

0xe19b,	// (0x00054eb1) mup_progress_pane_g3

0x0002,

0xf4b5,	// (0x000561cb) mup_progress_pane_g

0x5701,	// (0x0004c417) bg_popup_window_pane_cp05

0xe1a4,	// (0x00054eba) heading_pane_cp02_ParamLimits

0xe1a4,	// (0x00054eba) heading_pane_cp02

0xe1be,	// (0x00054ed4) list_popup_blid_pane

0xe1c6,	// (0x00054edc) list_blid_sat_info_pane_ParamLimits

0xe1c6,	// (0x00054edc) list_blid_sat_info_pane

0xe1d9,	// (0x00054eef) list_blid_sat_info_pane_g1

0xe1e1,	// (0x00054ef7) list_blid_sat_info_pane_t1

0x7b93,	// (0x0004e8a9) mup_equalizer_pane_ParamLimits

0x7b93,	// (0x0004e8a9) mup_equalizer_pane

0x7bb4,	// (0x0004e8ca) mup_equalizer_pane_cp1_ParamLimits

0x7bb4,	// (0x0004e8ca) mup_equalizer_pane_cp1

0x7bd5,	// (0x0004e8eb) mup_equalizer_pane_cp2_ParamLimits

0x7bd5,	// (0x0004e8eb) mup_equalizer_pane_cp2

0x7bf6,	// (0x0004e90c) mup_equalizer_pane_cp3_ParamLimits

0x7bf6,	// (0x0004e90c) mup_equalizer_pane_cp3

0x7c17,	// (0x0004e92d) mup_equalizer_pane_cp4_ParamLimits

0x7c17,	// (0x0004e92d) mup_equalizer_pane_cp4

0x7c38,	// (0x0004e94e) mup_equalizer_pane_cp5

0x7c4e,	// (0x0004e964) mup_equalizer_pane_cp6

0x7c66,	// (0x0004e97c) mup_equalizer_pane_cp7

0x103e,	// (0x00047d54) bg_popup_call_poc_act_pane_g9

0x1046,	// (0x00047d5c) bg_popup_call_poc_act_pane_g10

0x104e,	// (0x00047d64) bg_popup_call_poc_act_pane_g11

0x000a,

0xd504,	// (0x0005421a) mup_scale_pane

0xd630,	// (0x00054346) mup_scale_pane_g1

0xe1ef,	// (0x00054f05) mup_scale_pane_g2

0x0006,

0xf4d1,	// (0x000561e7) mup_scale_pane_g

0xe213,	// (0x00054f29) msg_data_pane

0xe21b,	// (0x00054f31) scroll_pane_cp017

0x7c90,	// (0x0004e9a6) bg_list_pane_cp04_ParamLimits

0x7c90,	// (0x0004e9a6) bg_list_pane_cp04

0xe223,	// (0x00054f39) msg_data_pane_g1

0x7cb4,	// (0x0004e9ca) msg_data_pane_g2

0x7cbe,	// (0x0004e9d4) msg_data_pane_g3

0x7cc6,	// (0x0004e9dc) msg_data_pane_g4

0x7cce,	// (0x0004e9e4) msg_data_pane_g5

0x7cd6,	// (0x0004e9ec) msg_data_pane_g6

0x7cde,	// (0x0004e9f4) msg_data_pane_g7

0x0006,

0xf4e0,	// (0x000561f6) msg_data_pane_g

0x7ce6,	// (0x0004e9fc) msg_text_pane_ParamLimits

0x7ce6,	// (0x0004e9fc) msg_text_pane

0x7d26,	// (0x0004ea3c) qrid_highlight_pane_cp011_ParamLimits

0x7d26,	// (0x0004ea3c) qrid_highlight_pane_cp011

0x5701,	// (0x0004c417) msg_body_pane

0x5701,	// (0x0004c417) msg_header_pane

0xe234,	// (0x00054f4a) input_focus_pane_cp07

0x7d4c,	// (0x0004ea62) msg_header_pane_t1_ParamLimits

0x7d4c,	// (0x0004ea62) msg_header_pane_t1

0x7d5e,	// (0x0004ea74) msg_header_pane_t2_ParamLimits

0x7d5e,	// (0x0004ea74) msg_header_pane_t2

0x0001,

0xf4f4,	// (0x0005620a) msg_header_pane_t_ParamLimits

0xf4f4,	// (0x0005620a) msg_header_pane_t

0xe249,	// (0x00054f5f) msg_body_pane_g1

0x7d70,	// (0x0004ea86) msg_body_pane_t1_ParamLimits

0x7d70,	// (0x0004ea86) msg_body_pane_t1

0x7da1,	// (0x0004eab7) msg_body_pane_t2_ParamLimits

0x7da1,	// (0x0004eab7) msg_body_pane_t2

0x7db3,	// (0x0004eac9) msg_body_pane_t3_ParamLimits

0x7db3,	// (0x0004eac9) msg_body_pane_t3

0x0002,

0xf4f9,	// (0x0005620f) msg_body_pane_t_ParamLimits

0xf4f9,	// (0x0005620f) msg_body_pane_t

0x7e17,	// (0x0004eb2d) main_viewer_pane_g1_ParamLimits

0x7e17,	// (0x0004eb2d) main_viewer_pane_g1

0x7e23,	// (0x0004eb39) main_viewer_pane_g2_ParamLimits

0x7e23,	// (0x0004eb39) main_viewer_pane_g2

0x7e2f,	// (0x0004eb45) main_viewer_pane_g3_ParamLimits

0x7e2f,	// (0x0004eb45) main_viewer_pane_g3

0x7e40,	// (0x0004eb56) main_viewer_pane_g4_ParamLimits

0x7e40,	// (0x0004eb56) main_viewer_pane_g4

0x7e51,	// (0x0004eb67) main_viewer_pane_g5_ParamLimits

0x7e51,	// (0x0004eb67) main_viewer_pane_g5

0x7e51,	// (0x0004eb67) main_viewer_pane_g7_ParamLimits

0x7e51,	// (0x0004eb67) main_viewer_pane_g7

0xdc7c,	// (0x00054992) main_viewer_pane_g8_ParamLimits

0xdc7c,	// (0x00054992) main_viewer_pane_g8

0x0007,

0xf509,	// (0x0005621f) main_viewer_pane_g_ParamLimits

0xf509,	// (0x0005621f) main_viewer_pane_g

0xe251,	// (0x00054f67) viewer_content_pane_ParamLimits

0xe251,	// (0x00054f67) viewer_content_pane

0x7e8f,	// (0x0004eba5) main_postcard_pane_g1_ParamLimits

0x7e8f,	// (0x0004eba5) main_postcard_pane_g1

0x7e9d,	// (0x0004ebb3) main_postcard_pane_g2_ParamLimits

0x7e9d,	// (0x0004ebb3) main_postcard_pane_g2

0x7eab,	// (0x0004ebc1) main_postcard_pane_g3_ParamLimits

0x7eab,	// (0x0004ebc1) main_postcard_pane_g3

0x0005,

0xf51a,	// (0x00056230) main_postcard_pane_g_ParamLimits

0xf51a,	// (0x00056230) main_postcard_pane_g

0x7ebb,	// (0x0004ebd1) main_postcard_pane_g4

0x1240,	// (0x00047f56) smil_status_volume_pane_g2

0x7ee7,	// (0x0004ebfd) postcard_pane_ParamLimits

0x7ee7,	// (0x0004ebfd) postcard_pane

0xdddf,	// (0x00054af5) postcard_pane_g1_ParamLimits

0xdddf,	// (0x00054af5) postcard_pane_g1

0x7f19,	// (0x0004ec2f) postcard_pane_g2_ParamLimits

0x7f19,	// (0x0004ec2f) postcard_pane_g2

0x7f25,	// (0x0004ec3b) postcard_pane_g3_ParamLimits

0x7f25,	// (0x0004ec3b) postcard_pane_g3

0xe25f,	// (0x00054f75) postcard_pane_g4_ParamLimits

0xe25f,	// (0x00054f75) postcard_pane_g4

0x7f31,	// (0x0004ec47) postcard_pane_g5_ParamLimits

0x7f31,	// (0x0004ec47) postcard_pane_g5

0x7f3d,	// (0x0004ec53) postcard_pane_g6_ParamLimits

0x7f3d,	// (0x0004ec53) postcard_pane_g6

0xe26d,	// (0x00054f83) postcard_pane_g7_ParamLimits

0xe26d,	// (0x00054f83) postcard_pane_g7

0x0006,

0xf527,	// (0x0005623d) postcard_pane_g_ParamLimits

0xf527,	// (0x0005623d) postcard_pane_g

0x7f49,	// (0x0004ec5f) main_mp2_pane_g1_ParamLimits

0x7f49,	// (0x0004ec5f) main_mp2_pane_g1

0x7f55,	// (0x0004ec6b) main_mp2_pane_g2_ParamLimits

0x7f55,	// (0x0004ec6b) main_mp2_pane_g2

0x7f61,	// (0x0004ec77) main_mp2_pane_g3_ParamLimits

0x7f61,	// (0x0004ec77) main_mp2_pane_g3

0x0002,

0xf536,	// (0x0005624c) main_mp2_pane_g_ParamLimits

0xf536,	// (0x0005624c) main_mp2_pane_g

0x7f6d,	// (0x0004ec83) main_mp2_pane_t1_ParamLimits

0x7f6d,	// (0x0004ec83) main_mp2_pane_t1

0x7f84,	// (0x0004ec9a) main_mp2_pane_t2_ParamLimits

0x7f84,	// (0x0004ec9a) main_mp2_pane_t2

0x7f98,	// (0x0004ecae) main_mp2_pane_t3_ParamLimits

0x7f98,	// (0x0004ecae) main_mp2_pane_t3

0x0002,

0xf53d,	// (0x00056253) main_mp2_pane_t_ParamLimits

0xf53d,	// (0x00056253) main_mp2_pane_t

0xe27b,	// (0x00054f91) pec_content_pane_ParamLimits

0xe27b,	// (0x00054f91) pec_content_pane

0xd927,	// (0x0005463d) scroll_pane_cp015

0xe28d,	// (0x00054fa3) pec_attribute_pane_ParamLimits

0xe28d,	// (0x00054fa3) pec_attribute_pane

0x7faa,	// (0x0004ecc0) pec_content_pane_g1_ParamLimits

0x7faa,	// (0x0004ecc0) pec_content_pane_g1

0xe29d,	// (0x00054fb3) pec_content_pane_t1_ParamLimits

0xe29d,	// (0x00054fb3) pec_content_pane_t1

0xe2af,	// (0x00054fc5) pec_content_pane_t2_ParamLimits

0xe2af,	// (0x00054fc5) pec_content_pane_t2

0x0001,

0xf544,	// (0x0005625a) pec_content_pane_t_ParamLimits

0xf544,	// (0x0005625a) pec_content_pane_t

0x7fb6,	// (0x0004eccc) list_single_graphic_pane_cp01_ParamLimits

0x7fb6,	// (0x0004eccc) list_single_graphic_pane_cp01

0xd504,	// (0x0005421a) bg_popup_sub_pane_cp04

0xe2c1,	// (0x00054fd7) popup_mup_playback_window_g1

0xe2cd,	// (0x00054fe3) popup_mup_playback_window_t1

0xe2e2,	// (0x00054ff8) popup_mup_playback_window_t2

0x0001,

0xf549,	// (0x0005625f) popup_mup_playback_window_t

0xe319,	// (0x0005502f) main_image_pane_g1_ParamLimits

0xe319,	// (0x0005502f) main_image_pane_g1

0xe35c,	// (0x00055072) scroll_pane_cp018_ParamLimits

0xe35c,	// (0x00055072) scroll_pane_cp018

0xe374,	// (0x0005508a) scroll_pane_cp016_ParamLimits

0xe374,	// (0x0005508a) scroll_pane_cp016

0x804f,	// (0x0004ed65) smil2_image_pane_ParamLimits

0x804f,	// (0x0004ed65) smil2_image_pane

0x807f,	// (0x0004ed95) smil2_root_pane_ParamLimits

0x807f,	// (0x0004ed95) smil2_root_pane

0x80ab,	// (0x0004edc1) smil2_text_pane_ParamLimits

0x80ab,	// (0x0004edc1) smil2_text_pane

0x5701,	// (0x0004c417) bg_list_pane_cp06

0xe3b0,	// (0x000550c6) grid_radio_pane

0x5701,	// (0x0004c417) bg_popup_window_pane_cp06

0xe3b8,	// (0x000550ce) main_fmradio_pane_t1

0xde56,	// (0x00054b6c) heading_pane_cp04

0xe3c6,	// (0x000550dc) main_fmradio_pane_t2

0x1056,	// (0x00047d6c) popup_cale_lunar_info_window_g1

0xe3d4,	// (0x000550ea) main_fmradio_pane_t3

0x105e,	// (0x00047d74) popup_cale_lunar_info_window_g2

0xe3e2,	// (0x000550f8) main_fmradio_pane_t4

0x0001,

0xe3f0,	// (0x00055106) main_fmradio_pane_t5

0x0004,

0xf624,	// (0x0005633a) popup_cale_lunar_info_window_g

0xf55e,	// (0x00056274) main_fmradio_pane_t

0xe3fe,	// (0x00055114) wait_bar_pane_cp03

0xe406,	// (0x0005511c) cell_fmradio_pane_ParamLimits

0xe406,	// (0x0005511c) cell_fmradio_pane

0xe26d,	// (0x00054f83) cell_fmradio_pane_g1_ParamLimits

0xe26d,	// (0x00054f83) cell_fmradio_pane_g1

0x5701,	// (0x0004c417) grid_highlight_pane_cp011

0xe419,	// (0x0005512f) poc_content_pane_ParamLimits

0xe419,	// (0x0005512f) poc_content_pane

0xe42b,	// (0x00055141) scroll_pane_cp019

0x80eb,	// (0x0004ee01) popup_call_poc_act_window_ParamLimits

0x80eb,	// (0x0004ee01) popup_call_poc_act_window

0x80f8,	// (0x0004ee0e) popup_call_poc_inact_window_ParamLimits

0x80f8,	// (0x0004ee0e) popup_call_poc_inact_window

0xf5fb,	// (0x00056311) bg_popup_call_poc_act_pane_g

0x0fce,	// (0x00047ce4) bg_popup_call_poc_inact_pane_g1

0x0fd6,	// (0x00047cec) bg_popup_call_poc_inact_pane_g2

0xe433,	// (0x00055149) popup_call_poc_act_window_g2

0x0fde,	// (0x00047cf4) bg_popup_call_poc_inact_pane_g3

0x0fe6,	// (0x00047cfc) bg_popup_call_poc_inact_pane_g4

0x0fee,	// (0x00047d04) bg_popup_call_poc_inact_pane_g5

0xe43b,	// (0x00055151) popup_call_poc_act_window_t1_ParamLimits

0xe43b,	// (0x00055151) popup_call_poc_act_window_t1

0xe463,	// (0x00055179) popup_call_poc_act_window_t2_ParamLimits

0xe463,	// (0x00055179) popup_call_poc_act_window_t2

0xe48b,	// (0x000551a1) popup_call_poc_act_window_t3_ParamLimits

0xe48b,	// (0x000551a1) popup_call_poc_act_window_t3

0xe4b3,	// (0x000551c9) popup_call_poc_act_window_t4_ParamLimits

0xe4b3,	// (0x000551c9) popup_call_poc_act_window_t4

0x0003,

0xf569,	// (0x0005627f) popup_call_poc_act_window_t_ParamLimits

0xf569,	// (0x0005627f) popup_call_poc_act_window_t

0x0ff6,	// (0x00047d0c) bg_popup_call_poc_inact_pane_g6

0x0ffe,	// (0x00047d14) bg_popup_call_poc_inact_pane_g7

0x1006,	// (0x00047d1c) bg_popup_call_poc_inact_pane_g8

0xe4c5,	// (0x000551db) popup_call_poc_inact_window_g2

0x100e,	// (0x00047d24) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf5e8,	// (0x000562fe) bg_popup_call_poc_inact_pane_g

0xe4cd,	// (0x000551e3) popup_call_poc_inact_window_t1_ParamLimits

0xe4cd,	// (0x000551e3) popup_call_poc_inact_window_t1

0xe4e2,	// (0x000551f8) popup_call_poc_inact_window_t2_ParamLimits

0xe4e2,	// (0x000551f8) popup_call_poc_inact_window_t2

0xe4f7,	// (0x0005520d) popup_call_poc_inact_window_t3_ParamLimits

0xe4f7,	// (0x0005520d) popup_call_poc_inact_window_t3

0x0002,

0xf572,	// (0x00056288) popup_call_poc_inact_window_t_ParamLimits

0xf572,	// (0x00056288) popup_call_poc_inact_window_t

0x11c6,	// (0x00047edc) context_pane_ParamLimits

0x86e8,	// (0x0004f3fe) signal_pane_ParamLimits

0xe0c2,	// (0x00054dd8) main_call2_pane

0x11b4,	// (0x00047eca) popup_phob_thumbnail2_window_ParamLimits

0x11b4,	// (0x00047eca) popup_phob_thumbnail2_window

0x7dc5,	// (0x0004eadb) aid_hotspot_pointer_arrow_pane

0x7dcd,	// (0x0004eae3) aid_hotspot_pointer_hand_pane

0x841a,	// (0x0004f130) phob_pre_status_pane_g5

0x633b,	// (0x0004d051) cams_zoom_pane_ParamLimits

0x6347,	// (0x0004d05d) image_vga_pane_ParamLimits

0x6356,	// (0x0004d06c) main_camera_pane_g1_ParamLimits

0x6364,	// (0x0004d07a) main_camera_pane_g2_ParamLimits

0x6370,	// (0x0004d086) main_camera_pane_g3_ParamLimits

0x637c,	// (0x0004d092) main_camera_pane_g4_ParamLimits

0x6388,	// (0x0004d09e) main_camera_pane_g5_ParamLimits

0x6394,	// (0x0004d0aa) main_camera_pane_g6_ParamLimits

0x63a0,	// (0x0004d0b6) main_camera_pane_g7_ParamLimits

0xf271,	// (0x00055f87) main_camera_pane_g_ParamLimits

0x63ac,	// (0x0004d0c2) main_camera_pane_t1_ParamLimits

0x63be,	// (0x0004d0d4) main_camera_pane_t2_ParamLimits

0xf282,	// (0x00055f98) main_camera_pane_t_ParamLimits

0xd504,	// (0x0005421a) bg_popup_preview_window_pane_cp01_ParamLimits

0xd504,	// (0x0005421a) bg_popup_preview_window_pane_cp01

0xe50c,	// (0x00055222) popup_phob_thumbnail2_window_g1_ParamLimits

0xe50c,	// (0x00055222) popup_phob_thumbnail2_window_g1

0x5701,	// (0x0004c417) call2_cli_visual_pane

0x8114,	// (0x0004ee2a) popup_call2_audio_conf_window_ParamLimits

0x8114,	// (0x0004ee2a) popup_call2_audio_conf_window

0x8129,	// (0x0004ee3f) popup_call2_audio_first_window_ParamLimits

0x8129,	// (0x0004ee3f) popup_call2_audio_first_window

0x81c7,	// (0x0004eedd) popup_call2_audio_in_window_ParamLimits

0x81c7,	// (0x0004eedd) popup_call2_audio_in_window

0x8209,	// (0x0004ef1f) popup_call2_audio_out_window_ParamLimits

0x8209,	// (0x0004ef1f) popup_call2_audio_out_window

0x826b,	// (0x0004ef81) popup_call2_audio_second_window_ParamLimits

0x826b,	// (0x0004ef81) popup_call2_audio_second_window

0x82c9,	// (0x0004efdf) popup_call2_audio_wait_window_ParamLimits

0x82c9,	// (0x0004efdf) popup_call2_audio_wait_window

0x5701,	// (0x0004c417) bg_popup_call2_act_pane_cp03

0x593e,	// (0x0004c654) list_conf_pane_cp

0xe518,	// (0x0005522e) popup_call2_audio_conf_window_t1

0xdeb3,	// (0x00054bc9) list_single_graphic_popup_conf2_pane_ParamLimits

0xdeb3,	// (0x00054bc9) list_single_graphic_popup_conf2_pane

0xdec6,	// (0x00054bdc) list_highlight_pane_cp04

0xe526,	// (0x0005523c) list_single_graphic_popup_conf2_pane_g1

0xded7,	// (0x00054bed) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf579,	// (0x0005628f) list_single_graphic_popup_conf2_pane_g

0xe530,	// (0x00055246) list_single_graphic_popup_conf2_pane_t1

0xe53e,	// (0x00055254) bg_popup_call2_act_pane_cp01_ParamLimits

0xe53e,	// (0x00055254) bg_popup_call2_act_pane_cp01

0xe5c8,	// (0x000552de) call_type_pane_cp05_ParamLimits

0xe5c8,	// (0x000552de) call_type_pane_cp05

0xe61c,	// (0x00055332) popup_call2_audio_second_window_g1_ParamLimits

0xe61c,	// (0x00055332) popup_call2_audio_second_window_g1

0xe670,	// (0x00055386) popup_call2_audio_second_window_g2_ParamLimits

0xe670,	// (0x00055386) popup_call2_audio_second_window_g2

0x0002,

0xf57e,	// (0x00056294) popup_call2_audio_second_window_g_ParamLimits

0xf57e,	// (0x00056294) popup_call2_audio_second_window_g

0xe6d5,	// (0x000553eb) popup_call2_audio_second_window_t1_ParamLimits

0xe6d5,	// (0x000553eb) popup_call2_audio_second_window_t1

0xe790,	// (0x000554a6) popup_call2_audio_second_window_t2_ParamLimits

0xe790,	// (0x000554a6) popup_call2_audio_second_window_t2

0xe7e3,	// (0x000554f9) popup_call2_audio_second_window_t3_ParamLimits

0xe7e3,	// (0x000554f9) popup_call2_audio_second_window_t3

0x0003,

0xf585,	// (0x0005629b) popup_call2_audio_second_window_t_ParamLimits

0xf585,	// (0x0005629b) popup_call2_audio_second_window_t

0x5701,	// (0x0004c417) bg_popup_call2_in_pane_cp02

0x570b,	// (0x0004c421) call_type_pane_cp04

0x5713,	// (0x0004c429) popup_call2_audio_wait_window_g1

0x571b,	// (0x0004c431) popup_call2_audio_wait_window_g2

0x0001,

0xf15e,	// (0x00055e74) popup_call2_audio_wait_window_g

0x5723,	// (0x0004c439) popup_call2_audio_wait_window_t3

0xe8d6,	// (0x000555ec) bg_popup_call2_act_pane_ParamLimits

0xe8d6,	// (0x000555ec) bg_popup_call2_act_pane

0xe996,	// (0x000556ac) call_type_pane_cp03_ParamLimits

0xe996,	// (0x000556ac) call_type_pane_cp03

0xe9fa,	// (0x00055710) popup_call2_audio_first_window_g1_ParamLimits

0xe9fa,	// (0x00055710) popup_call2_audio_first_window_g1

0xea6a,	// (0x00055780) popup_call2_audio_first_window_g2_ParamLimits

0xea6a,	// (0x00055780) popup_call2_audio_first_window_g2

0xdddf,	// (0x00054af5) popup_call2_audio_first_window_g3_ParamLimits

0xdddf,	// (0x00054af5) popup_call2_audio_first_window_g3

0x0004,

0xf58e,	// (0x000562a4) popup_call2_audio_first_window_g_ParamLimits

0xf58e,	// (0x000562a4) popup_call2_audio_first_window_g

0xeb48,	// (0x0005585e) popup_call2_audio_first_window_t1_ParamLimits

0xeb48,	// (0x0005585e) popup_call2_audio_first_window_t1

0xec4b,	// (0x00055961) popup_call2_audio_first_window_t4_ParamLimits

0xec4b,	// (0x00055961) popup_call2_audio_first_window_t4

0xed2e,	// (0x00055a44) popup_call2_audio_first_window_t5_ParamLimits

0xed2e,	// (0x00055a44) popup_call2_audio_first_window_t5

0x0003,

0xf599,	// (0x000562af) popup_call2_audio_first_window_t_ParamLimits

0xf599,	// (0x000562af) popup_call2_audio_first_window_t

0x5954,	// (0x0004c66a) bg_popup_call2_act_pane_g1

0x1066,	// (0x00047d7c) popup_cale_lunar_info_window_t1

0x1074,	// (0x00047d8a) popup_cale_lunar_info_window_t2

0x1082,	// (0x00047d98) popup_cale_lunar_info_window_t3

0x5701,	// (0x0004c417) bg_popup_call2_bubble_pane

0xee2f,	// (0x00055b45) bg_popup_call2_in_pane_cp01_ParamLimits

0xee2f,	// (0x00055b45) bg_popup_call2_in_pane_cp01

0x53b9,	// (0x0004c0cf) call_type_pane_cp02

0xee77,	// (0x00055b8d) popup_call2_audio_out_window_g1_ParamLimits

0xee77,	// (0x00055b8d) popup_call2_audio_out_window_g1

0xeea3,	// (0x00055bb9) popup_call2_audio_out_window_g2_ParamLimits

0xeea3,	// (0x00055bb9) popup_call2_audio_out_window_g2

0xeecb,	// (0x00055be1) popup_call2_audio_out_window_g3_ParamLimits

0xeecb,	// (0x00055be1) popup_call2_audio_out_window_g3

0x0003,

0xf5a2,	// (0x000562b8) popup_call2_audio_out_window_g_ParamLimits

0xf5a2,	// (0x000562b8) popup_call2_audio_out_window_g

0xef06,	// (0x00055c1c) popup_call2_audio_out_window_t1_ParamLimits

0xef06,	// (0x00055c1c) popup_call2_audio_out_window_t1

0xef65,	// (0x00055c7b) popup_call2_audio_out_window_t2_ParamLimits

0xef65,	// (0x00055c7b) popup_call2_audio_out_window_t2

0xefb9,	// (0x00055ccf) popup_call2_audio_out_window_t3_ParamLimits

0xefb9,	// (0x00055ccf) popup_call2_audio_out_window_t3

0xefcf,	// (0x00055ce5) popup_call2_audio_out_window_t4_ParamLimits

0xefcf,	// (0x00055ce5) popup_call2_audio_out_window_t4

0xefe5,	// (0x00055cfb) popup_call2_audio_out_window_t5_ParamLimits

0xefe5,	// (0x00055cfb) popup_call2_audio_out_window_t5

0x0005,

0xf5ab,	// (0x000562c1) popup_call2_audio_out_window_t_ParamLimits

0xf5ab,	// (0x000562c1) popup_call2_audio_out_window_t

0xf049,	// (0x00055d5f) bg_popup_call2_in_pane_ParamLimits

0xf049,	// (0x00055d5f) bg_popup_call2_in_pane

0xf0a5,	// (0x00055dbb) popup_call2_audio_in_window_g1_ParamLimits

0xf0a5,	// (0x00055dbb) popup_call2_audio_in_window_g1

0xf0dd,	// (0x00055df3) popup_call2_audio_in_window_g2_ParamLimits

0xf0dd,	// (0x00055df3) popup_call2_audio_in_window_g2

0x0de0,	// (0x00047af6) popup_call2_audio_in_window_g3_ParamLimits

0x0de0,	// (0x00047af6) popup_call2_audio_in_window_g3

0x0003,

0xf5b8,	// (0x000562ce) popup_call2_audio_in_window_g_ParamLimits

0xf5b8,	// (0x000562ce) popup_call2_audio_in_window_g

0x0e38,	// (0x00047b4e) popup_call2_audio_in_window_t1_ParamLimits

0x0e38,	// (0x00047b4e) popup_call2_audio_in_window_t1

0x0eb8,	// (0x00047bce) popup_call2_audio_in_window_t2_ParamLimits

0x0eb8,	// (0x00047bce) popup_call2_audio_in_window_t2

0x0f38,	// (0x00047c4e) popup_call2_audio_in_window_t3_ParamLimits

0x0f38,	// (0x00047c4e) popup_call2_audio_in_window_t3

0x0f52,	// (0x00047c68) popup_call2_audio_in_window_t4_ParamLimits

0x0f52,	// (0x00047c68) popup_call2_audio_in_window_t4

0x0f64,	// (0x00047c7a) popup_call2_audio_in_window_t5_ParamLimits

0x0f64,	// (0x00047c7a) popup_call2_audio_in_window_t5

0x0f79,	// (0x00047c8f) popup_call2_audio_in_window_t6_ParamLimits

0x0f79,	// (0x00047c8f) popup_call2_audio_in_window_t6

0x0005,

0xf5c1,	// (0x000562d7) popup_call2_audio_in_window_t_ParamLimits

0xf5c1,	// (0x000562d7) popup_call2_audio_in_window_t

0x5954,	// (0x0004c66a) bg_popup_call2_in_pane_g1

0x1090,	// (0x00047da6) popup_cale_lunar_info_window_t4

0x0003,

0xf629,	// (0x0005633f) popup_cale_lunar_info_window_t

0xd504,	// (0x0005421a) bg_popup_call2_rect_pane_ParamLimits

0xd504,	// (0x0005421a) bg_popup_call2_rect_pane

0x5701,	// (0x0004c417) call2_cli_visual_graphic_pane

0x5701,	// (0x0004c417) call2_cli_visual_text_pane

0x878e,	// (0x0004f4a4) smil_status_volume_pane_g3

0x0002,

0xd630,	// (0x00054346) call2_cli_visual_graphic_pane_g1

0xd630,	// (0x00054346) call2_cli_visual_graphic_pane_g2

0xd630,	// (0x00054346) call2_cli_visual_graphic_pane_g3

0x0002,

0xf5ce,	// (0x000562e4) call2_cli_visual_graphic_pane_g

0x0f8e,	// (0x00047ca4) bg_popup_call2_rect_pane_g1

0xd6bc,	// (0x000543d2) bg_popup_call2_rect_pane_g2

0x0f96,	// (0x00047cac) bg_popup_call2_rect_pane_g3

0x0f9e,	// (0x00047cb4) bg_popup_call2_rect_pane_g4

0x0fa6,	// (0x00047cbc) bg_popup_call2_rect_pane_g5

0x0fae,	// (0x00047cc4) bg_popup_call2_rect_pane_g6

0x0fb6,	// (0x00047ccc) bg_popup_call2_rect_pane_g7

0x0fbe,	// (0x00047cd4) bg_popup_call2_rect_pane_g8

0x0fc6,	// (0x00047cdc) bg_popup_call2_rect_pane_g9

0x0008,

0xf5d5,	// (0x000562eb) bg_popup_call2_rect_pane_g

0x0fce,	// (0x00047ce4) bg_popup_call2_bubble_pane_g1

0x0fd6,	// (0x00047cec) bg_popup_call2_bubble_pane_g2

0x0fde,	// (0x00047cf4) bg_popup_call2_bubble_pane_g3

0x0fe6,	// (0x00047cfc) bg_popup_call2_bubble_pane_g4

0x0fee,	// (0x00047d04) bg_popup_call2_bubble_pane_g5

0x0ff6,	// (0x00047d0c) bg_popup_call2_bubble_pane_g6

0x0ffe,	// (0x00047d14) bg_popup_call2_bubble_pane_g7

0x1006,	// (0x00047d1c) bg_popup_call2_bubble_pane_g8

0x100e,	// (0x00047d24) bg_popup_call2_bubble_pane_g9

0x0008,

0xf5e8,	// (0x000562fe) bg_popup_call2_bubble_pane_g

0x5e78,	// (0x0004cb8e) aid_cale_week_size_cell_pane

0x63d0,	// (0x0004d0e6) aid_cams_cif_uncrop_pane_ParamLimits

0x63d0,	// (0x0004d0e6) aid_cams_cif_uncrop_pane

0x652d,	// (0x0004d243) aid_cams_size_cell_ParamLimits

0x652d,	// (0x0004d243) aid_cams_size_cell

0x6539,	// (0x0004d24f) grid_cams_pane_ParamLimits

0x6547,	// (0x0004d25d) linegrid_cams_pane_ParamLimits

0x663a,	// (0x0004d350) call_video_pane_t1

0x6654,	// (0x0004d36a) call_video_pane_t2

0x0001,

0xf2d5,	// (0x00055feb) call_video_pane_t

0x6b0c,	// (0x0004d822) aid_cale_month_size_cell_pane_ParamLimits

0x6b0c,	// (0x0004d822) aid_cale_month_size_cell_pane

0xf672,	// (0x00056388) smil_status_volume_pane_g

0x879b,	// (0x0004f4b1) volume_smil_pane_ParamLimits

0x4f97,	// (0x0004bcad) aid_popup2_width_pane

0x5d75,	// (0x0004ca8b) cell_qdial_pane_g4_ParamLimits

0x5d75,	// (0x0004ca8b) cell_qdial_pane_g4

0x76a1,	// (0x0004e3b7) aid_blid_cardinal_pane_ParamLimits

0x76b1,	// (0x0004e3c7) aid_blid_destination_pane_ParamLimits

0x76b1,	// (0x0004e3c7) aid_blid_destination_pane

0xd504,	// (0x0005421a) bg_popup_call_poc_act_pane_ParamLimits

0xd504,	// (0x0005421a) bg_popup_call_poc_act_pane

0xd504,	// (0x0005421a) bg_popup_call_poc_inact_pane_ParamLimits

0xd504,	// (0x0005421a) bg_popup_call_poc_inact_pane

0x1016,	// (0x00047d2c) bg_popup_call_poc_act_pane_g1

0x101e,	// (0x00047d34) bg_popup_call_poc_act_pane_g2

0x1026,	// (0x00047d3c) bg_popup_call_poc_act_pane_g3

0x0fe6,	// (0x00047cfc) bg_popup_call_poc_act_pane_g4

0x0fee,	// (0x00047d04) bg_popup_call_poc_act_pane_g5

0x102e,	// (0x00047d44) bg_popup_call_poc_act_pane_g6

0x0ffe,	// (0x00047d14) bg_popup_call_poc_act_pane_g7

0x1036,	// (0x00047d4c) bg_popup_call_poc_act_pane_g8

0x5701,	// (0x0004c417) main_usb_pane

0x118f,	// (0x00047ea5) popup_cale_lunar_info_window

0x6900,	// (0x0004d616) im_reading_pane_t1_ParamLimits

0xd87f,	// (0x00054595) list_im_pane_ParamLimits

0xd890,	// (0x000545a6) scroll_pane_cp07_ParamLimits

0x5701,	// (0x0004c417) grid_highlight_pane_cp012

0xd504,	// (0x0005421a) mup_scale_pane_ParamLimits

0xdddf,	// (0x00054af5) main_usb_pane_g1_ParamLimits

0xdddf,	// (0x00054af5) main_usb_pane_g1

0x833d,	// (0x0004f053) main_usb_pane_g2_ParamLimits

0x833d,	// (0x0004f053) main_usb_pane_g2

0x0001,

0xf612,	// (0x00056328) main_usb_pane_g_ParamLimits

0xf612,	// (0x00056328) main_usb_pane_g

0x8349,	// (0x0004f05f) main_usb_pane_t1_ParamLimits

0x8349,	// (0x0004f05f) main_usb_pane_t1

0x835b,	// (0x0004f071) main_usb_pane_t2_ParamLimits

0x835b,	// (0x0004f071) main_usb_pane_t2

0x836d,	// (0x0004f083) main_usb_pane_t3_ParamLimits

0x836d,	// (0x0004f083) main_usb_pane_t3

0x837f,	// (0x0004f095) main_usb_pane_t4_ParamLimits

0x837f,	// (0x0004f095) main_usb_pane_t4

0x8391,	// (0x0004f0a7) main_usb_pane_t5_ParamLimits

0x8391,	// (0x0004f0a7) main_usb_pane_t5

0x83a3,	// (0x0004f0b9) main_usb_pane_t6_ParamLimits

0x83a3,	// (0x0004f0b9) main_usb_pane_t6

0x0005,

0xf617,	// (0x0005632d) main_usb_pane_t_ParamLimits

0x7647,	// (0x0004e35d) aid_text_placing

0x7653,	// (0x0004e369) main_location2_pane_t1_ParamLimits

0x7667,	// (0x0004e37d) main_location2_pane_t2_ParamLimits

0x767b,	// (0x0004e391) main_location2_pane_t3_ParamLimits

0x768f,	// (0x0004e3a5) main_location2_pane_t4_ParamLimits

0x768f,	// (0x0004e3a5) main_location2_pane_t4

0xf436,	// (0x0005614c) main_location2_pane_t_ParamLimits

0xd540,	// (0x00054256) find_pinb_pane_g2_ParamLimits

0xd540,	// (0x00054256) find_pinb_pane_g2

0x0001,

0xf184,	// (0x00055e9a) find_pinb_pane_g_ParamLimits

0xf184,	// (0x00055e9a) find_pinb_pane_g

0xd54c,	// (0x00054262) find_pinb_pane_t1_ParamLimits

0xd55e,	// (0x00054274) find_pinb_pane_t2_ParamLimits

0xf189,	// (0x00055e9f) find_pinb_pane_t_ParamLimits

0x5701,	// (0x0004c417) main_call3_pane

0x6e58,	// (0x0004db6e) cale_month_day_heading_pane_t1_ParamLimits

0x6eb6,	// (0x0004dbcc) cale_month_day_heading_pane_t2_ParamLimits

0x6f1b,	// (0x0004dc31) cale_month_day_heading_pane_t3_ParamLimits

0x6f80,	// (0x0004dc96) cale_month_day_heading_pane_t4_ParamLimits

0x6fe5,	// (0x0004dcfb) cale_month_day_heading_pane_t5_ParamLimits

0x704a,	// (0x0004dd60) cale_month_day_heading_pane_t6_ParamLimits

0x70af,	// (0x0004ddc5) cale_month_day_heading_pane_t7_ParamLimits

0xf30d,	// (0x00056023) cale_month_day_heading_pane_t_ParamLimits

0xdad0,	// (0x000547e6) smil_status_volume_pane

0x7f01,	// (0x0004ec17) postcard_address_pane_ParamLimits

0x7f01,	// (0x0004ec17) postcard_address_pane

0x7f0d,	// (0x0004ec23) postcard_message_pane_ParamLimits

0x7f0d,	// (0x0004ec23) postcard_message_pane

0x8308,	// (0x0004f01e) call2_cli_visual_pane_t1_ParamLimits

0x8308,	// (0x0004f01e) call2_cli_visual_pane_t1

0x88f2,	// (0x0004f608) postcard_message_pane_t1_ParamLimits

0x88f2,	// (0x0004f608) postcard_message_pane_t1

0x88db,	// (0x0004f5f1) postcard_address_pane_t1_ParamLimits

0x88db,	// (0x0004f5f1) postcard_address_pane_t1

0x88cc,	// (0x0004f5e2) popup_call3_audio_in_window_ParamLimits

0x88cc,	// (0x0004f5e2) popup_call3_audio_in_window

0x87b0,	// (0x0004f4c6) bg_popup_call3_in_pane_ParamLimits

0x87b0,	// (0x0004f4c6) bg_popup_call3_in_pane

0x8812,	// (0x0004f528) popup_call3_audio_in_window_g1_ParamLimits

0x8812,	// (0x0004f528) popup_call3_audio_in_window_g1

0x882a,	// (0x0004f540) popup_call3_audio_in_window_g2_ParamLimits

0x882a,	// (0x0004f540) popup_call3_audio_in_window_g2

0x8842,	// (0x0004f558) popup_call3_audio_in_window_g3_ParamLimits

0x8842,	// (0x0004f558) popup_call3_audio_in_window_g3

0x0003,

0xf679,	// (0x0005638f) popup_call3_audio_in_window_g_ParamLimits

0xf679,	// (0x0005638f) popup_call3_audio_in_window_g

0x886a,	// (0x0004f580) popup_call3_audio_in_window_t1_ParamLimits

0x886a,	// (0x0004f580) popup_call3_audio_in_window_t1

0x8892,	// (0x0004f5a8) popup_call3_audio_in_window_t2_ParamLimits

0x8892,	// (0x0004f5a8) popup_call3_audio_in_window_t2

0x88ba,	// (0x0004f5d0) popup_call3_audio_in_window_t3_ParamLimits

0x88ba,	// (0x0004f5d0) popup_call3_audio_in_window_t3

0x0002,

0xf682,	// (0x00056398) popup_call3_audio_in_window_t_ParamLimits

0xf682,	// (0x00056398) popup_call3_audio_in_window_t

0xe0c2,	// (0x00054dd8) bg_popup_call3_rect_pane

0x0f8e,	// (0x00047ca4) bg_popup_call3_rect_pane_g1

0xd6bc,	// (0x000543d2) bg_popup_call3_rect_pane_g2

0x0f96,	// (0x00047cac) bg_popup_call3_rect_pane_g3

0x0f9e,	// (0x00047cb4) bg_popup_call3_rect_pane_g4

0x0fa6,	// (0x00047cbc) bg_popup_call3_rect_pane_g5

0x0fae,	// (0x00047cc4) bg_popup_call3_rect_pane_g6

0x0fb6,	// (0x00047ccc) bg_popup_call3_rect_pane_g7

0x7aa1,	// (0x0004e7b7) mup_visualizer_osc_pane

0xe181,	// (0x00054e97) mup_visualizer_spec_pane

0x87d0,	// (0x0004f4e6) call3_video_qcif_pane_ParamLimits

0x87d0,	// (0x0004f4e6) call3_video_qcif_pane

0x87e2,	// (0x0004f4f8) call3_video_qcif_uncrop_pane_ParamLimits

0x87e2,	// (0x0004f4f8) call3_video_qcif_uncrop_pane

0x87f0,	// (0x0004f506) call3_video_subqcif_pane_ParamLimits

0x87f0,	// (0x0004f506) call3_video_subqcif_pane

0x8802,	// (0x0004f518) call3_video_subqcif_uncrop_pane_ParamLimits

0x8802,	// (0x0004f518) call3_video_subqcif_uncrop_pane

0x885a,	// (0x0004f570) popup_call3_audio_in_window_g4_ParamLimits

0x885a,	// (0x0004f570) popup_call3_audio_in_window_g4

0x877d,	// (0x0004f493) mup_spec_half_pane

0x8786,	// (0x0004f49c) mup_spec_half_pane_cp

0x1226,	// (0x00047f3c) mup_osc_middle_pane

0x122f,	// (0x00047f45) mup_visualizer_osc_pane_g1

0x875e,	// (0x0004f474) mup_spec_bar_pane_ParamLimits

0x875e,	// (0x0004f474) mup_spec_bar_pane

0x1213,	// (0x00047f29) mup_spec_bar_pane_g1

0x121d,	// (0x00047f33) mup_spec_bar_pane_g2

0x0001,

0xf66d,	// (0x00056383) mup_spec_bar_pane_g

0x5e78,	// (0x0004cb8e) aid_cale_week_size_cell_pane_ParamLimits

0x5e8b,	// (0x0004cba1) bg_cale_heading_pane_ParamLimits

0xd6f0,	// (0x00054406) bg_cale_pane_cp01_ParamLimits

0x5e9f,	// (0x0004cbb5) cale_week_corner_pane_ParamLimits

0x5eb5,	// (0x0004cbcb) cale_week_day_heading_pane_ParamLimits

0x5ec9,	// (0x0004cbdf) cale_week_scroll_pane_g1_ParamLimits

0x5eda,	// (0x0004cbf0) cale_week_scroll_pane_g2_ParamLimits

0x5eeb,	// (0x0004cc01) cale_week_scroll_pane_g3_ParamLimits

0x5efc,	// (0x0004cc12) cale_week_scroll_pane_g4_ParamLimits

0x5f0d,	// (0x0004cc23) cale_week_scroll_pane_g5_ParamLimits

0x5f1e,	// (0x0004cc34) cale_week_scroll_pane_g6_ParamLimits

0x5f2f,	// (0x0004cc45) cale_week_scroll_pane_g7_ParamLimits

0x5f42,	// (0x0004cc58) cale_week_scroll_pane_g8_ParamLimits

0x5f55,	// (0x0004cc6b) cale_week_scroll_pane_g9_ParamLimits

0x5f66,	// (0x0004cc7c) cale_week_scroll_pane_g10_ParamLimits

0x5f77,	// (0x0004cc8d) cale_week_scroll_pane_g11_ParamLimits

0x5f88,	// (0x0004cc9e) cale_week_scroll_pane_g12_ParamLimits

0x5f99,	// (0x0004ccaf) cale_week_scroll_pane_g13_ParamLimits

0x5faa,	// (0x0004ccc0) cale_week_scroll_pane_g14_ParamLimits

0x5fbb,	// (0x0004ccd1) cale_week_scroll_pane_g15_ParamLimits

0xf215,	// (0x00055f2b) cale_week_scroll_pane_g_ParamLimits

0x5fcc,	// (0x0004cce2) cale_week_time_pane_ParamLimits

0x5fdf,	// (0x0004ccf5) grid_cale_week_pane_ParamLimits

0xd709,	// (0x0005441f) listscroll_cale_week_pane_t1

0x5ff4,	// (0x0004cd0a) scroll_pane_cp08_ParamLimits

0x6b4d,	// (0x0004d863) cale_month_corner_pane_ParamLimits

0xdaa6,	// (0x000547bc) cale_month_pane_t1

0x6e17,	// (0x0004db2d) cale_month_week_pane_ParamLimits

0xdddf,	// (0x00054af5) popup_call_status_window_g1_ParamLimits

0x7476,	// (0x0004e18c) popup_call_status_window_g2_ParamLimits

0x7482,	// (0x0004e198) popup_call_status_window_g3_ParamLimits

0xf3bd,	// (0x000560d3) popup_call_status_window_g_ParamLimits

0xde46,	// (0x00054b5c) aid_call2_pane

0x7d40,	// (0x0004ea56) msg_header_pane_g1

0x7f01,	// (0x0004ec17) postcard_address2_pane_ParamLimits

0x7f01,	// (0x0004ec17) postcard_address2_pane

0x7f0d,	// (0x0004ec23) postcard_message2_pane_ParamLimits

0x7f0d,	// (0x0004ec23) postcard_message2_pane

0x86f6,	// (0x0004f40c) message2_row_pane_ParamLimits

0x86f6,	// (0x0004f40c) message2_row_pane

0x8711,	// (0x0004f427) address2_row_pane_ParamLimits

0x8711,	// (0x0004f427) address2_row_pane

0x11e1,	// (0x00047ef7) postcard_message2_row_pane_g1

0x11e9,	// (0x00047eff) postcard_message2_row_pane_t1

0x11e1,	// (0x00047ef7) address2_row_pane_g1

0x11e9,	// (0x00047eff) address2_row_pane_t1

0x629c,	// (0x0004cfb2) aid_size_cell_vorec

0x5701,	// (0x0004c417) main_rss_pane

0x8724,	// (0x0004f43a) rss_list_single_pane_ParamLimits

0x8724,	// (0x0004f43a) rss_list_single_pane

0x11f7,	// (0x00047f0d) rss_list_single_pane_t1

0x1205,	// (0x00047f1b) rss_list_single_pane_t2

0x0001,

0xf668,	// (0x0005637e) rss_list_single_pane_t

0x5701,	// (0x0004c417) main_camera2_pane

0x5701,	// (0x0004c417) main_video2_pane

0x8956,	// (0x0004f66c) cams_zoom_pane_cp2_ParamLimits

0x8956,	// (0x0004f66c) cams_zoom_pane_cp2

0x8962,	// (0x0004f678) image2_vga_pane_ParamLimits

0x8962,	// (0x0004f678) image2_vga_pane

0x8971,	// (0x0004f687) main_camera2_pane_g1_ParamLimits

0x8971,	// (0x0004f687) main_camera2_pane_g1

0x897d,	// (0x0004f693) main_camera2_pane_g2_ParamLimits

0x897d,	// (0x0004f693) main_camera2_pane_g2

0x8989,	// (0x0004f69f) main_camera2_pane_g3_ParamLimits

0x8989,	// (0x0004f69f) main_camera2_pane_g3

0x8995,	// (0x0004f6ab) main_camera2_pane_g4_ParamLimits

0x8995,	// (0x0004f6ab) main_camera2_pane_g4

0x89a1,	// (0x0004f6b7) main_camera2_pane_g5_ParamLimits

0x89a1,	// (0x0004f6b7) main_camera2_pane_g5

0x89ad,	// (0x0004f6c3) main_camera2_pane_g6_ParamLimits

0x89ad,	// (0x0004f6c3) main_camera2_pane_g6

0x89b9,	// (0x0004f6cf) main_camera2_pane_g7_ParamLimits

0x89b9,	// (0x0004f6cf) main_camera2_pane_g7

0x89c5,	// (0x0004f6db) main_camera2_pane_g8_ParamLimits

0x89c5,	// (0x0004f6db) main_camera2_pane_g8

0x0008,

0xf689,	// (0x0005639f) main_camera2_pane_g_ParamLimits

0xf689,	// (0x0005639f) main_camera2_pane_g

0x89dd,	// (0x0004f6f3) main_camera2_pane_t1_ParamLimits

0x89dd,	// (0x0004f6f3) main_camera2_pane_t1

0x89ef,	// (0x0004f705) main_camera2_pane_t2_ParamLimits

0x89ef,	// (0x0004f705) main_camera2_pane_t2

0x8a01,	// (0x0004f717) main_camera2_pane_t3_ParamLimits

0x8a01,	// (0x0004f717) main_camera2_pane_t3

0x8a13,	// (0x0004f729) main_camera2_pane_t4_ParamLimits

0x8a13,	// (0x0004f729) main_camera2_pane_t4

0x0006,

0xf69c,	// (0x000563b2) main_camera2_pane_t_ParamLimits

0xf69c,	// (0x000563b2) main_camera2_pane_t

0x8a75,	// (0x0004f78b) cams_zoom_pane_cp4_ParamLimits

0x8a75,	// (0x0004f78b) cams_zoom_pane_cp4

0x8a85,	// (0x0004f79b) image2_cif_pane_ParamLimits

0x8a85,	// (0x0004f79b) image2_cif_pane

0x8a9a,	// (0x0004f7b0) image2_subqcif_pane_ParamLimits

0x8a9a,	// (0x0004f7b0) image2_subqcif_pane

0x8aa9,	// (0x0004f7bf) main_video2_pane_g1_ParamLimits

0x8aa9,	// (0x0004f7bf) main_video2_pane_g1

0x8abb,	// (0x0004f7d1) main_video2_pane_g2_ParamLimits

0x8abb,	// (0x0004f7d1) main_video2_pane_g2

0x8acb,	// (0x0004f7e1) main_video2_pane_g3_ParamLimits

0x8acb,	// (0x0004f7e1) main_video2_pane_g3

0x8adb,	// (0x0004f7f1) main_video2_pane_g4_ParamLimits

0x8adb,	// (0x0004f7f1) main_video2_pane_g4

0x8aeb,	// (0x0004f801) main_video2_pane_g5_ParamLimits

0x8aeb,	// (0x0004f801) main_video2_pane_g5

0x8afb,	// (0x0004f811) main_video2_pane_g6_ParamLimits

0x8afb,	// (0x0004f811) main_video2_pane_g6

0x0005,

0xf6ab,	// (0x000563c1) main_video2_pane_g_ParamLimits

0xf6ab,	// (0x000563c1) main_video2_pane_g

0x8b0d,	// (0x0004f823) main_video2_pane_t1_ParamLimits

0x8b0d,	// (0x0004f823) main_video2_pane_t1

0x8b27,	// (0x0004f83d) main_video2_pane_t2_ParamLimits

0x8b27,	// (0x0004f83d) main_video2_pane_t2

0x8b4d,	// (0x0004f863) main_video2_pane_t3_ParamLimits

0x8b4d,	// (0x0004f863) main_video2_pane_t3

0x0002,

0xf6b8,	// (0x000563ce) main_video2_pane_t_ParamLimits

0xf6b8,	// (0x000563ce) main_video2_pane_t

0x845a,	// (0x0004f170) call_muted_g2

0x0001,

0xf65a,	// (0x00056370) call_muted_g

0x5701,	// (0x0004c417) main_mup2_pane

0x12e6,	// (0x00047ffc) main_mup2_pane_g1_ParamLimits

0x12e6,	// (0x00047ffc) main_mup2_pane_g1

0x8b73,	// (0x0004f889) main_mup2_pane_g2_ParamLimits

0x8b73,	// (0x0004f889) main_mup2_pane_g2

0x8df5,	// (0x0004fb0b) main_mup_pane_g13_cp1

0x8dfd,	// (0x0004fb13) mup_volume_pane_cp1

0x8b93,	// (0x0004f8a9) main_mup2_pane_g4_ParamLimits

0x8b93,	// (0x0004f8a9) main_mup2_pane_g4

0x8ba8,	// (0x0004f8be) main_mup2_pane_g5_ParamLimits

0x8ba8,	// (0x0004f8be) main_mup2_pane_g5

0x8bbd,	// (0x0004f8d3) main_mup2_pane_g6_ParamLimits

0x8bbd,	// (0x0004f8d3) main_mup2_pane_g6

0x8bd2,	// (0x0004f8e8) main_mup2_pane_g7_ParamLimits

0x8bd2,	// (0x0004f8e8) main_mup2_pane_g7

0x0006,

0xf6bf,	// (0x000563d5) main_mup2_pane_g_ParamLimits

0xf6bf,	// (0x000563d5) main_mup2_pane_g

0x8bee,	// (0x0004f904) main_mup2_pane_t1_ParamLimits

0x8bee,	// (0x0004f904) main_mup2_pane_t1

0x8c05,	// (0x0004f91b) main_mup2_pane_t2_ParamLimits

0x8c05,	// (0x0004f91b) main_mup2_pane_t2

0x8c1c,	// (0x0004f932) main_mup2_pane_t3_ParamLimits

0x8c1c,	// (0x0004f932) main_mup2_pane_t3

0x8c33,	// (0x0004f949) main_mup2_pane_t4_ParamLimits

0x8c33,	// (0x0004f949) main_mup2_pane_t4

0x8c4d,	// (0x0004f963) main_mup2_pane_t5_ParamLimits

0x8c4d,	// (0x0004f963) main_mup2_pane_t5

0x8c67,	// (0x0004f97d) main_mup2_pane_t6_ParamLimits

0x8c67,	// (0x0004f97d) main_mup2_pane_t6

0x0005,

0xf6ce,	// (0x000563e4) main_mup2_pane_t_ParamLimits

0xf6ce,	// (0x000563e4) main_mup2_pane_t

0x8c9f,	// (0x0004f9b5) mup2_visualizer_pane_ParamLimits

0x8c9f,	// (0x0004f9b5) mup2_visualizer_pane

0x8cd5,	// (0x0004f9eb) mup_progress_pane_cp_ParamLimits

0x8cd5,	// (0x0004f9eb) mup_progress_pane_cp

0x8de0,	// (0x0004faf6) mup_volume_pane_cp_ParamLimits

0x8de0,	// (0x0004faf6) mup_volume_pane_cp

0x8cec,	// (0x0004fa02) mup2_visualizer_pane_g1_ParamLimits

0x8cec,	// (0x0004fa02) mup2_visualizer_pane_g1

0x12b8,	// (0x00047fce) mup2_visualizer_pane_g2_ParamLimits

0x12b8,	// (0x00047fce) mup2_visualizer_pane_g2

0x8d01,	// (0x0004fa17) mup2_visualizer_pane_g3_ParamLimits

0x8d01,	// (0x0004fa17) mup2_visualizer_pane_g3

0x0002,

0xf6db,	// (0x000563f1) mup2_visualizer_pane_g_ParamLimits

0xf6db,	// (0x000563f1) mup2_visualizer_pane_g

0xe3a8,	// (0x000550be) aid_size_cell_fmradio

0x8570,	// (0x0004f286) aid_height_parent_landcape

0xd90e,	// (0x00054624) wml_content_pane_cp

0xd916,	// (0x0005462c) wml_tabs_pane

0xd91f,	// (0x00054635) popup_wml_miniature_window

0xd927,	// (0x0005463d) scroll_pane_cp021

0xd93b,	// (0x00054651) wml_content_pane_comp8

0x5701,	// (0x0004c417) bg_popup_sub_pane_cp05

0x12d6,	// (0x00047fec) popup_wml_miniature_window_g1

0x12de,	// (0x00047ff4) wml_miniature_view_pane

0x8d0f,	// (0x0004fa25) aid_size_wml_view

0x8d17,	// (0x0004fa2d) wml_miniature_view_pane_g1

0x8d20,	// (0x0004fa36) wml_miniature_view_pane_g2

0x8d29,	// (0x0004fa3f) wml_miniature_view_pane_g3

0x8d31,	// (0x0004fa47) wml_miniature_view_pane_g4

0x8d39,	// (0x0004fa4f) wml_miniature_view_pane_g5

0x8d41,	// (0x0004fa57) wml_miniature_view_pane_g6

0x8d49,	// (0x0004fa5f) wml_miniature_view_pane_g7

0x8d51,	// (0x0004fa67) wml_miniature_view_pane_g8

0x0007,

0xf6e2,	// (0x000563f8) wml_miniature_view_pane_g

0x12e6,	// (0x00047ffc) background_graphic_ParamLimits

0x12e6,	// (0x00047ffc) background_graphic

0x12f2,	// (0x00048008) wml_tabs_2_pane

0x12fb,	// (0x00048011) wml_tabs_3_pane_ParamLimits

0x12fb,	// (0x00048011) wml_tabs_3_pane

0x130d,	// (0x00048023) wml_tabs_4_pane_ParamLimits

0x130d,	// (0x00048023) wml_tabs_4_pane

0x1323,	// (0x00048039) wml_tabs_5_pane_ParamLimits

0x1323,	// (0x00048039) wml_tabs_5_pane

0x133d,	// (0x00048053) wml_tabs_pane_g2_ParamLimits

0x133d,	// (0x00048053) wml_tabs_pane_g2

0x1351,	// (0x00048067) wml_tabs_pane_g3_ParamLimits

0x1351,	// (0x00048067) wml_tabs_pane_g3

0x8d59,	// (0x0004fa6f) wml_tabs_2_active_pane_ParamLimits

0x8d59,	// (0x0004fa6f) wml_tabs_2_active_pane

0x8d69,	// (0x0004fa7f) wml_tabs_2_passive_pane_ParamLimits

0x8d69,	// (0x0004fa7f) wml_tabs_2_passive_pane

0x8d79,	// (0x0004fa8f) wml_tabs_3_active_pane_cp_ParamLimits

0x8d79,	// (0x0004fa8f) wml_tabs_3_active_pane_cp

0x8d8a,	// (0x0004faa0) wml_tabs_3_passive_pane_ParamLimits

0x8d8a,	// (0x0004faa0) wml_tabs_3_passive_pane

0x8d9b,	// (0x0004fab1) wml_tabs_3_passive_pane_cp_ParamLimits

0x8d9b,	// (0x0004fab1) wml_tabs_3_passive_pane_cp

0x8dac,	// (0x0004fac2) tabs_4_active_pane

0x8db4,	// (0x0004faca) tabs_4_passive_pane

0x8dbc,	// (0x0004fad2) tabs_4_passive_pane_cp

0x8dc4,	// (0x0004fada) tabs_4_passive_pane_cp2

0x8335,	// (0x0004f04b) aid_height_text

0x7a6e,	// (0x0004e784) mup_volume_cont_pane_ParamLimits

0x7a6e,	// (0x0004e784) mup_volume_cont_pane

0x59c2,	// (0x0004c6d8) aid_size_cell_pinb

0x59cc,	// (0x0004c6e2) aid_size_list_pinb

0x8cbe,	// (0x0004f9d4) mup2_volume_cont_pane_ParamLimits

0x8cbe,	// (0x0004f9d4) mup2_volume_cont_pane

0x8dcc,	// (0x0004fae2) mup2_volume_cont_pane_g1_ParamLimits

0x8dcc,	// (0x0004fae2) mup2_volume_cont_pane_g1

0x4fa3,	// (0x0004bcb9) aid_size_cell_touch_ParamLimits

0x4fa3,	// (0x0004bcb9) aid_size_cell_touch

0x523a,	// (0x0004bf50) touch_pane_ParamLimits

0x523a,	// (0x0004bf50) touch_pane

0x4f85,	// (0x0004bc9b) main_rss2_pane

0x13a7,	// (0x000480bd) listscroll_rss2_pane

0x13b0,	// (0x000480c6) rss2_navigation_pane

0x13b8,	// (0x000480ce) list_rss2_pane

0xdf79,	// (0x00054c8f) scroll_pane_cp22

0x13c0,	// (0x000480d6) rss2_navigation_pane_g1

0x13c9,	// (0x000480df) rss2_navigation_pane_g2

0x13d1,	// (0x000480e7) rss2_navigation_pane_g3

0x0002,

0xf6f3,	// (0x00056409) rss2_navigation_pane_g

0x13d9,	// (0x000480ef) rss2_navigation_pane_t1

0x8e05,	// (0x0004fb1b) rss2_list_single_pane_ParamLimits

0x8e05,	// (0x0004fb1b) rss2_list_single_pane

0x13e7,	// (0x000480fd) rss2_list_single_pane_t2

0x13f5,	// (0x0004810b) rss2_list_single_pane_t3_ParamLimits

0x13f5,	// (0x0004810b) rss2_list_single_pane_t3

0x1412,	// (0x00048128) rss2_list_single_pane_t4

0x7297,	// (0x0004dfad) smil_status_pane_g1

0xf115,	// (0x00055e2b) main_image2_pane_ParamLimits

0xf115,	// (0x00055e2b) main_image2_pane

0x89d1,	// (0x0004f6e7) main_camera2_pane_g9_ParamLimits

0x89d1,	// (0x0004f6e7) main_camera2_pane_g9

0x8a25,	// (0x0004f73b) main_camera2_pane_t5_ParamLimits

0x8a25,	// (0x0004f73b) main_camera2_pane_t5

0x8a37,	// (0x0004f74d) main_camera2_pane_t6_ParamLimits

0x8a37,	// (0x0004f74d) main_camera2_pane_t6

0x8e36,	// (0x0004fb4c) main_image2_pane_g1_ParamLimits

0x8e36,	// (0x0004fb4c) main_image2_pane_g1

0x80d5,	// (0x0004edeb) smil2_video_pane_ParamLimits

0x80d5,	// (0x0004edeb) smil2_video_pane

0x0aac,	// (0x000477c2) aid_zoom_text_primary_cp

0x51f9,	// (0x0004bf0f) popup_preview_fixed_window

0xd877,	// (0x0005458d) im_reading_pane_g1

0x891b,	// (0x0004f631) cams2_bc_adjust_pane_cp_ParamLimits

0x891b,	// (0x0004f631) cams2_bc_adjust_pane_cp

0x8a67,	// (0x0004f77d) cams2_bc_adjust_pane_ParamLimits

0x8a67,	// (0x0004f77d) cams2_bc_adjust_pane

0x27c1,	// (0x000494d7) cams2_bc_adjust_pane_g1

0x8e42,	// (0x0004fb58) cams2_slider_pane

0x8e4b,	// (0x0004fb61) cams2_slider_pane_g1

0x8e54,	// (0x0004fb6a) cams2_slider_pane_g2

0x0006,

0xf6fa,	// (0x00056410) cams2_slider_pane_g

0x5abd,	// (0x0004c7d3) calc_display_pane_ParamLimits

0x5adb,	// (0x0004c7f1) calc_paper_pane_ParamLimits

0x5af7,	// (0x0004c80d) grid_calc_pane_ParamLimits

0x74e4,	// (0x0004e1fa) popup_clock_digital_window_t1_ParamLimits

0xe345,	// (0x0005505b) main_image_pane_t1

0x5aa3,	// (0x0004c7b9) aid_size_cell_calc_ParamLimits

0x5aa3,	// (0x0004c7b9) aid_size_cell_calc

0x85a2,	// (0x0004f2b8) popup_blid_sat_info2_window_ParamLimits

0x85a2,	// (0x0004f2b8) popup_blid_sat_info2_window

0x145c,	// (0x00048172) aid_size_cell_blid

0x1464,	// (0x0004817a) bg_popup_window_pane_cp07

0x1487,	// (0x0004819d) grid_popup_blid_pane

0x1491,	// (0x000481a7) heading_pane_cp05_ParamLimits

0x1491,	// (0x000481a7) heading_pane_cp05

0x155b,	// (0x00048271) cell_popup_blid_pane_ParamLimits

0x155b,	// (0x00048271) cell_popup_blid_pane

0x157f,	// (0x00048295) cell_popup_blid_pane_g1

0x1587,	// (0x0004829d) cell_popup_blid_pane_t1

0x8c84,	// (0x0004f99a) mup2_indicator_pane_ParamLimits

0x8c84,	// (0x0004f99a) mup2_indicator_pane

0xe0c2,	// (0x00054dd8) mup2_visualizer_osc_pane

0x12c4,	// (0x00047fda) mup2_visualizer_spec_pane_ParamLimits

0x12c4,	// (0x00047fda) mup2_visualizer_spec_pane

0x8e6e,	// (0x0004fb84) mup2_spec_half_pane

0x8e77,	// (0x0004fb8d) mup2_spec_half_pane_cp

0x8e81,	// (0x0004fb97) mup2_spec_bar_pane_ParamLimits

0x8e81,	// (0x0004fb97) mup2_spec_bar_pane

0x1213,	// (0x00047f29) mup2_spec_bar_pane_g1

0x121d,	// (0x00047f33) mup2_spec_bar_pane_g2

0x0001,

0xf66d,	// (0x00056383) mup2_spec_bar_pane_g

0x8ea0,	// (0x0004fbb6) mup2_osc_middle_pane

0x122f,	// (0x00047f45) mup2_visualizer_osc_pane_g1

0x52b1,	// (0x0004bfc7) popup_number_entry_window_t1_ParamLimits

0x52c4,	// (0x0004bfda) popup_number_entry_window_t2_ParamLimits

0x52d6,	// (0x0004bfec) popup_number_entry_window_t3_ParamLimits

0x52e8,	// (0x0004bffe) popup_number_entry_window_t5_ParamLimits

0x52e8,	// (0x0004bffe) popup_number_entry_window_t5

0xf12f,	// (0x00055e45) popup_number_entry_window_t_ParamLimits

0x5321,	// (0x0004c037) text_title_cp2_ParamLimits

0x7dd5,	// (0x0004eaeb) aid_hotspot_pointer_text2_pane

0x7e63,	// (0x0004eb79) main_viewer_pane_g9_ParamLimits

0x7e63,	// (0x0004eb79) main_viewer_pane_g9

0xdaa6,	// (0x000547bc) cale_month_pane_t1_ParamLimits

0xdae3,	// (0x000547f9) bg_cale_pane_ParamLimits

0xdafb,	// (0x00054811) list_cale_pane_ParamLimits

0xd709,	// (0x0005441f) listscroll_cale_day_pane_t1

0xdb0c,	// (0x00054822) scroll_pane_cp09_ParamLimits

0x7aa9,	// (0x0004e7bf) main_mup_eq_pane_t1_ParamLimits

0x7aa9,	// (0x0004e7bf) main_mup_eq_pane_t1

0x7ac3,	// (0x0004e7d9) main_mup_eq_pane_t2_ParamLimits

0x7ac3,	// (0x0004e7d9) main_mup_eq_pane_t2

0x7add,	// (0x0004e7f3) main_mup_eq_pane_t3_ParamLimits

0x7add,	// (0x0004e7f3) main_mup_eq_pane_t3

0x7af5,	// (0x0004e80b) main_mup_eq_pane_t4_ParamLimits

0x7af5,	// (0x0004e80b) main_mup_eq_pane_t4

0x7b0d,	// (0x0004e823) main_mup_eq_pane_t5_ParamLimits

0x7b0d,	// (0x0004e823) main_mup_eq_pane_t5

0x7b25,	// (0x0004e83b) main_mup_eq_pane_t6_ParamLimits

0x7b25,	// (0x0004e83b) main_mup_eq_pane_t6

0x7b39,	// (0x0004e84f) main_mup_eq_pane_t7_ParamLimits

0x7b39,	// (0x0004e84f) main_mup_eq_pane_t7

0x7b4d,	// (0x0004e863) main_mup_eq_pane_t8_ParamLimits

0x7b4d,	// (0x0004e863) main_mup_eq_pane_t8

0x7b63,	// (0x0004e879) main_mup_eq_pane_t9_ParamLimits

0x7b63,	// (0x0004e879) main_mup_eq_pane_t9

0x7b7b,	// (0x0004e891) main_mup_eq_pane_t10_ParamLimits

0x7b7b,	// (0x0004e891) main_mup_eq_pane_t10

0x0009,

0xf4bc,	// (0x000561d2) main_mup_eq_pane_t_ParamLimits

0xf4bc,	// (0x000561d2) main_mup_eq_pane_t

0x7c38,	// (0x0004e94e) mup_equalizer_pane_cp5_ParamLimits

0x7c4e,	// (0x0004e964) mup_equalizer_pane_cp6_ParamLimits

0x7c66,	// (0x0004e97c) mup_equalizer_pane_cp7_ParamLimits

0x4f85,	// (0x0004bc9b) main_gallery_pane

0x1238,	// (0x00047f4e) smil2_volume_pane

0x1253,	// (0x00047f69) smil_status_volume_pane_g1_ParamLimits

0x1240,	// (0x00047f56) smil_status_volume_pane_g2_ParamLimits

0x878e,	// (0x0004f4a4) smil_status_volume_pane_g3_ParamLimits

0xf672,	// (0x00056388) smil_status_volume_pane_g_ParamLimits

0x1464,	// (0x0004817a) bg_popup_window_pane_cp07_ParamLimits

0x1472,	// (0x00048188) blid_firmament_pane

0x8ea9,	// (0x0004fbbf) aid_size_cell_gallery_ParamLimits

0x8ea9,	// (0x0004fbbf) aid_size_cell_gallery

0x8eb7,	// (0x0004fbcd) grid_gallery_pane_ParamLimits

0x8eb7,	// (0x0004fbcd) grid_gallery_pane

0x8ec7,	// (0x0004fbdd) cell_gallery_pane_ParamLimits

0x8ec7,	// (0x0004fbdd) cell_gallery_pane

0x1595,	// (0x000482ab) bg_cell_gallery_focus_pane_ParamLimits

0x1595,	// (0x000482ab) bg_cell_gallery_focus_pane

0x15a7,	// (0x000482bd) cell_gallery_pane_g1_ParamLimits

0x15a7,	// (0x000482bd) cell_gallery_pane_g1

0x8f15,	// (0x0004fc2b) cell_gallery_pane_g2_ParamLimits

0x8f15,	// (0x0004fc2b) cell_gallery_pane_g2

0x8f22,	// (0x0004fc38) cell_gallery_pane_g3_ParamLimits

0x8f22,	// (0x0004fc38) cell_gallery_pane_g3

0x15b3,	// (0x000482c9) cell_gallery_pane_g4_ParamLimits

0x15b3,	// (0x000482c9) cell_gallery_pane_g4

0x0003,

0xf720,	// (0x00056436) cell_gallery_pane_g_ParamLimits

0xf720,	// (0x00056436) cell_gallery_pane_g

0x15bf,	// (0x000482d5) bg_cell_gallery_focus_pane_g1

0x15c7,	// (0x000482dd) bg_cell_gallery_focus_pane_g2

0x15cf,	// (0x000482e5) bg_cell_gallery_focus_pane_g3

0x15d7,	// (0x000482ed) bg_cell_gallery_focus_pane_g4

0x15df,	// (0x000482f5) bg_cell_gallery_focus_pane_g5

0x15e7,	// (0x000482fd) bg_cell_gallery_focus_pane_g6

0x15ef,	// (0x00048305) bg_cell_gallery_focus_pane_g7

0x15f7,	// (0x0004830d) bg_cell_gallery_focus_pane_g8

0x0007,

0xf729,	// (0x0005643f) bg_cell_gallery_focus_pane_g

0x15ff,	// (0x00048315) aid_firma_cardinal

0x1613,	// (0x00048329) blid_firmament_pane_t1

0x162a,	// (0x00048340) blid_firmament_pane_t2

0x1641,	// (0x00048357) blid_firmament_pane_t3

0x1658,	// (0x0004836e) blid_firmament_pane_t4

0x0003,

0xf73a,	// (0x00056450) blid_firmament_pane_t

0x166f,	// (0x00048385) blid_sat_info_pane

0x167f,	// (0x00048395) blid_sat_info_pane_g1

0x167f,	// (0x00048395) blid_sat_info_pane_g2

0x0001,

0xf743,	// (0x00056459) blid_sat_info_pane_g

0x1689,	// (0x0004839f) blid_sat_info_pane_t1

0x1697,	// (0x000483ad) smil2_volume_content_pane

0x16a0,	// (0x000483b6) smil2_volume_pane_g1

0x16a8,	// (0x000483be) smil2_volume_content_pane_g1

0x16b1,	// (0x000483c7) smil2_volume_content_pane_g2

0x16ba,	// (0x000483d0) smil2_volume_content_pane_g3

0x16c3,	// (0x000483d9) smil2_volume_content_pane_g4

0x16cc,	// (0x000483e2) smil2_volume_content_pane_g5

0x16d5,	// (0x000483eb) smil2_volume_content_pane_g6

0x16de,	// (0x000483f4) smil2_volume_content_pane_g7

0x16e7,	// (0x000483fd) smil2_volume_content_pane_g8

0x16f0,	// (0x00048406) smil2_volume_content_pane_g9

0x16f9,	// (0x0004840f) smil2_volume_content_pane_g10

0x0009,

0xf748,	// (0x0005645e) smil2_volume_content_pane_g

0x604a,	// (0x0004cd60) cale_week_day_heading_pane_t1_ParamLimits

0x6077,	// (0x0004cd8d) cale_week_day_heading_pane_t2_ParamLimits

0x60a4,	// (0x0004cdba) cale_week_day_heading_pane_t3_ParamLimits

0x60d1,	// (0x0004cde7) cale_week_day_heading_pane_t4_ParamLimits

0x60fe,	// (0x0004ce14) cale_week_day_heading_pane_t5_ParamLimits

0x612b,	// (0x0004ce41) cale_week_day_heading_pane_t6_ParamLimits

0x6158,	// (0x0004ce6e) cale_week_day_heading_pane_t7_ParamLimits

0xf234,	// (0x00055f4a) cale_week_day_heading_pane_t_ParamLimits

0xd71b,	// (0x00054431) bg_cale_side_pane_ParamLimits

0x6185,	// (0x0004ce9b) cale_week_time_pane_t1_ParamLimits

0x619d,	// (0x0004ceb3) cale_week_time_pane_t2_ParamLimits

0x61b5,	// (0x0004cecb) cale_week_time_pane_t3_ParamLimits

0x61cd,	// (0x0004cee3) cale_week_time_pane_t4_ParamLimits

0x61e5,	// (0x0004cefb) cale_week_time_pane_t5_ParamLimits

0x61fd,	// (0x0004cf13) cale_week_time_pane_t6_ParamLimits

0x6215,	// (0x0004cf2b) cale_week_time_pane_t7_ParamLimits

0x622d,	// (0x0004cf43) cale_week_time_pane_t8_ParamLimits

0xf243,	// (0x00055f59) cale_week_time_pane_t_ParamLimits

0x6245,	// (0x0004cf5b) cell_cale_week_pane_g2_ParamLimits

0xd71b,	// (0x00054431) bg_cale_side_pane_cp01_ParamLimits

0x7124,	// (0x0004de3a) cale_month_week_pane_t1_ParamLimits

0x713b,	// (0x0004de51) cale_month_week_pane_t2_ParamLimits

0x7152,	// (0x0004de68) cale_month_week_pane_t3_ParamLimits

0x7169,	// (0x0004de7f) cale_month_week_pane_t4_ParamLimits

0x7180,	// (0x0004de96) cale_month_week_pane_t5_ParamLimits

0x7197,	// (0x0004dead) cale_month_week_pane_t6_ParamLimits

0xf31c,	// (0x00056032) cale_month_week_pane_t_ParamLimits

0x7264,	// (0x0004df7a) cell_cale_month_pane_g1_ParamLimits

0x4f85,	// (0x0004bc9b) main_cale_event_viewer_pane

0x4f85,	// (0x0004bc9b) listscroll_cale_event_viewer_pane

0x1702,	// (0x00048418) list_cale_ev_pane

0x170a,	// (0x00048420) scroll_pane_cp023

0x1716,	// (0x0004842c) field_cale_ev_pane_ParamLimits

0x1716,	// (0x0004842c) field_cale_ev_pane

0x1734,	// (0x0004844a) field_cale_ev_content_pane_ParamLimits

0x1734,	// (0x0004844a) field_cale_ev_content_pane

0x1740,	// (0x00048456) field_cale_ev_pane_g1_ParamLimits

0x1740,	// (0x00048456) field_cale_ev_pane_g1

0x174c,	// (0x00048462) field_cale_ev_pane_g2_ParamLimits

0x174c,	// (0x00048462) field_cale_ev_pane_g2

0x1764,	// (0x0004847a) field_cale_ev_pane_g3_ParamLimits

0x1764,	// (0x0004847a) field_cale_ev_pane_g3

0x0002,

0xf75d,	// (0x00056473) field_cale_ev_pane_g_ParamLimits

0xf75d,	// (0x00056473) field_cale_ev_pane_g

0x177c,	// (0x00048492) field_cale_ev_pane_t1_ParamLimits

0x177c,	// (0x00048492) field_cale_ev_pane_t1

0x1793,	// (0x000484a9) field_cale_ev_content_pane_t1_ParamLimits

0x1793,	// (0x000484a9) field_cale_ev_content_pane_t1

0xe22b,	// (0x00054f41) bg_button_pane_cp01

0xd5db,	// (0x000542f1) listscroll_cale_week_pane_ParamLimits

0x5e6e,	// (0x0004cb84) popup_toolbar_window_cp01

0xd709,	// (0x0005441f) listscroll_cale_week_pane_t1_ParamLimits

0xd5db,	// (0x000542f1) listscroll_cale_day_pane_ParamLimits

0x5e6e,	// (0x0004cb84) popup_toolbar_window_cp02

0xd709,	// (0x0005441f) listscroll_cale_day_pane_t1_ParamLimits

0xd5db,	// (0x000542f1) main_cale_month_pane_ParamLimits

0x8672,	// (0x0004f388) popup_toolbar_window_cp03_ParamLimits

0x8672,	// (0x0004f388) popup_toolbar_window_cp03

0x7feb,	// (0x0004ed01) main_image_pane_g2_ParamLimits

0x7feb,	// (0x0004ed01) main_image_pane_g2

0x7ff7,	// (0x0004ed0d) main_image_pane_g3_ParamLimits

0x7ff7,	// (0x0004ed0d) main_image_pane_g3

0x0002,

0xf54e,	// (0x00056264) main_image_pane_g_ParamLimits

0xf54e,	// (0x00056264) main_image_pane_g

0xe345,	// (0x0005505b) main_image_pane_t1_ParamLimits

0x8003,	// (0x0004ed19) main_image_pane_t2_ParamLimits

0x8003,	// (0x0004ed19) main_image_pane_t2

0x8015,	// (0x0004ed2b) main_image_pane_t3_ParamLimits

0x8015,	// (0x0004ed2b) main_image_pane_t3

0x8027,	// (0x0004ed3d) main_image_pane_t4_ParamLimits

0x8027,	// (0x0004ed3d) main_image_pane_t4

0x0003,

0xf555,	// (0x0005626b) main_image_pane_t_ParamLimits

0xf555,	// (0x0005626b) main_image_pane_t

0x8039,	// (0x0004ed4f) popup_image_details_window_cp01

0x8043,	// (0x0004ed59) popup_toobar_trans_pane_cp01_ParamLimits

0x8043,	// (0x0004ed59) popup_toobar_trans_pane_cp01

0x85ef,	// (0x0004f305) popup_image_details_window_ParamLimits

0x85ef,	// (0x0004f305) popup_image_details_window

0x1199,	// (0x00047eaf) popup_image_focus_window

0x890d,	// (0x0004f623) camera2_autofocus_pane_ParamLimits

0x890d,	// (0x0004f623) camera2_autofocus_pane

0x4f85,	// (0x0004bc9b) bg_popup_sub_pane_cp06

0x17b1,	// (0x000484c7) popup_image_focus_window_g1

0x17b9,	// (0x000484cf) popup_image_focus_window_g2

0x17c1,	// (0x000484d7) popup_image_focus_window_g3

0x17c9,	// (0x000484df) popup_image_focus_window_g4

0x0003,

0xf764,	// (0x0005647a) popup_image_focus_window_g

0x17d1,	// (0x000484e7) popup_image_focus_window_t1

0x17df,	// (0x000484f5) popup_image_focus_window_t2

0x17ef,	// (0x00048505) popup_image_focus_window_t3

0x0002,

0xf76d,	// (0x00056483) popup_image_focus_window_t

0x17fd,	// (0x00048513) camera2_autofocus_pane_g1

0xf115,	// (0x00055e2b) bg_tb_trans_pane_cp01

0x180b,	// (0x00048521) popup_image_details_window_g1

0x181e,	// (0x00048534) popup_image_details_window_g2

0x0002,

0xf77f,	// (0x00056495) popup_image_details_window_g

0x1847,	// (0x0004855d) popup_image_details_window_t1

0x1859,	// (0x0004856f) popup_image_details_window_t2

0x1872,	// (0x00048588) popup_image_details_window_t3

0x1886,	// (0x0004859c) popup_image_details_window_t4

0x18a1,	// (0x000485b7) popup_image_details_window_t5

0x0004,

0xf786,	// (0x0005649c) popup_image_details_window_t

0xd5c7,	// (0x000542dd) bg_calc_paper_pane_ParamLimits

0x5bee,	// (0x0004c904) grid_highlight_pane_cp013

0x5bf8,	// (0x0004c90e) list_calc_pane_ParamLimits

0x5c0a,	// (0x0004c920) scroll_pane_cp024

0xd5db,	// (0x000542f1) bg_calc_display_pane_ParamLimits

0x5c12,	// (0x0004c928) calc_display_pane_t1_ParamLimits

0x5c27,	// (0x0004c93d) calc_display_pane_t2_ParamLimits

0x5c3c,	// (0x0004c952) calc_display_pane_t3_ParamLimits

0xf1b6,	// (0x00055ecc) calc_display_pane_t_ParamLimits

0x5d18,	// (0x0004ca2e) cell_calc_pane_g2

0x0001,

0xf1d3,	// (0x00055ee9) cell_calc_pane_g

0x5d21,	// (0x0004ca37) cell_calc_pane_t1

0xd63a,	// (0x00054350) grid_highlight_pane_cp02_ParamLimits

0xd650,	// (0x00054366) toolbar_button_pane_cp01_ParamLimits

0xd650,	// (0x00054366) toolbar_button_pane_cp01

0xe38a,	// (0x000550a0) temp_image_control_pane_ParamLimits

0xe38a,	// (0x000550a0) temp_image_control_pane

0xf115,	// (0x00055e2b) main_mp3_pane

0x18bb,	// (0x000485d1) temp_image_control_pane_g1_ParamLimits

0x18bb,	// (0x000485d1) temp_image_control_pane_g1

0x18c9,	// (0x000485df) temp_image_control_pane_g2_ParamLimits

0x18c9,	// (0x000485df) temp_image_control_pane_g2

0x18db,	// (0x000485f1) temp_image_control_pane_g3_ParamLimits

0x18db,	// (0x000485f1) temp_image_control_pane_g3

0x8f5f,	// (0x0004fc75) temp_image_control_pane_g4_ParamLimits

0x8f5f,	// (0x0004fc75) temp_image_control_pane_g4

0x0003,

0xf791,	// (0x000564a7) temp_image_control_pane_g_ParamLimits

0xf791,	// (0x000564a7) temp_image_control_pane_g

0x18bb,	// (0x000485d1) main_mp3_pane_g1

0x8f70,	// (0x0004fc86) main_mp3_pane_g2

0x0007,

0xf79a,	// (0x000564b0) main_mp3_pane_g

0x191e,	// (0x00048634) main_mp3_pane_t1

0xd780,	// (0x00054496) main_camera_pane_g8_ParamLimits

0xd780,	// (0x00054496) main_camera_pane_g8

0x64e3,	// (0x0004d1f9) main_video_pane_g7_ParamLimits

0x64e3,	// (0x0004d1f9) main_video_pane_g7

0x8a55,	// (0x0004f76b) main_camera2_pane_t7_ParamLimits

0x8a55,	// (0x0004f76b) main_camera2_pane_t7

0xd8ce,	// (0x000545e4) scroll_pane_cp025_ParamLimits

0xd8ce,	// (0x000545e4) scroll_pane_cp025

0xd8e2,	// (0x000545f8) scroll_pane_cp026_ParamLimits

0xd8e2,	// (0x000545f8) scroll_pane_cp026

0xd8f1,	// (0x00054607) wml_content_pane_ParamLimits

0x4f85,	// (0x0004bc9b) main_touch_calib_pane

0x9014,	// (0x0004fd2a) main_touch_calib_pane_g1

0x9020,	// (0x0004fd36) main_touch_calib_pane_g2

0x902c,	// (0x0004fd42) main_touch_calib_pane_g3

0x9038,	// (0x0004fd4e) main_touch_calib_pane_g4

0x0003,

0xf7b8,	// (0x000564ce) main_touch_calib_pane_g

0x9044,	// (0x0004fd5a) main_touch_calib_pane_t1

0x905b,	// (0x0004fd71) main_touch_calib_pane_t2

0x0004,

0xf7c1,	// (0x000564d7) main_touch_calib_pane_t

0xe003,	// (0x00054d19) mup_progress_pane_cp02

0xe022,	// (0x00054d38) navi_pane_g1

0xe084,	// (0x00054d9a) navi_pane_mp_t3

0xf115,	// (0x00055e2b) main_mp3_pane_ParamLimits

0x86b0,	// (0x0004f3c6) navi_pane_ParamLimits

0x18bb,	// (0x000485d1) main_mp3_pane_g1_ParamLimits

0x8f70,	// (0x0004fc86) main_mp3_pane_g2_ParamLimits

0x8f7c,	// (0x0004fc92) main_mp3_pane_g3_ParamLimits

0x8f7c,	// (0x0004fc92) main_mp3_pane_g3

0x8f88,	// (0x0004fc9e) main_mp3_pane_g4_ParamLimits

0x8f88,	// (0x0004fc9e) main_mp3_pane_g4

0x18eb,	// (0x00048601) main_mp3_pane_g5_ParamLimits

0x18eb,	// (0x00048601) main_mp3_pane_g5

0x18f9,	// (0x0004860f) main_mp3_pane_g6_ParamLimits

0x18f9,	// (0x0004860f) main_mp3_pane_g6

0x1906,	// (0x0004861c) main_mp3_pane_g7_ParamLimits

0x1906,	// (0x0004861c) main_mp3_pane_g7

0x1912,	// (0x00048628) main_mp3_pane_g8_ParamLimits

0x1912,	// (0x00048628) main_mp3_pane_g8

0xf79a,	// (0x000564b0) main_mp3_pane_g_ParamLimits

0x8f94,	// (0x0004fcaa) main_mp3_pane_t2

0x8fa4,	// (0x0004fcba) main_mp3_pane_t3

0x192c,	// (0x00048642) main_mp3_pane_t4

0x193a,	// (0x00048650) main_mp3_pane_t5

0x0005,

0xf7ab,	// (0x000564c1) main_mp3_pane_t

0x1948,	// (0x0004865e) mup_progress_pane_cp01

0x0aac,	// (0x000477c2) aid_zoom_text_secondary2

0x1702,	// (0x00048418) list_cale_ev2_pane

0x170a,	// (0x00048420) scroll_pane_cp023_ParamLimits

0x90b0,	// (0x0004fdc6) field_cale_ev2_pane_ParamLimits

0x90b0,	// (0x0004fdc6) field_cale_ev2_pane

0x1950,	// (0x00048666) field_cale_ev2_pane_g1_ParamLimits

0x1950,	// (0x00048666) field_cale_ev2_pane_g1

0x195c,	// (0x00048672) field_cale_ev2_pane_g2_ParamLimits

0x195c,	// (0x00048672) field_cale_ev2_pane_g2

0x1974,	// (0x0004868a) field_cale_ev2_pane_g3_ParamLimits

0x1974,	// (0x0004868a) field_cale_ev2_pane_g3

0x0003,

0xf7cc,	// (0x000564e2) field_cale_ev2_pane_g_ParamLimits

0xf7cc,	// (0x000564e2) field_cale_ev2_pane_g

0x90d9,	// (0x0004fdef) field_cale_ev2_pane_t1_ParamLimits

0x90d9,	// (0x0004fdef) field_cale_ev2_pane_t1

0x90f0,	// (0x0004fe06) field_cale_ev2_pane_t2_ParamLimits

0x90f0,	// (0x0004fe06) field_cale_ev2_pane_t2

0x0001,

0xf7d5,	// (0x000564eb) field_cale_ev2_pane_t_ParamLimits

0xf7d5,	// (0x000564eb) field_cale_ev2_pane_t

0x7ecb,	// (0x0004ebe1) main_postcard_pane_g5_ParamLimits

0x7ecb,	// (0x0004ebe1) main_postcard_pane_g5

0x7ed9,	// (0x0004ebef) main_postcard_pane_g6_ParamLimits

0x7ed9,	// (0x0004ebef) main_postcard_pane_g6

0x632b,	// (0x0004d041) camera2_autofocus_pane_cp_ParamLimits

0x632b,	// (0x0004d041) camera2_autofocus_pane_cp

0xf115,	// (0x00055e2b) main_mup3_pane

0x9125,	// (0x0004fe3b) main_mup3_pane_g1_ParamLimits

0x9125,	// (0x0004fe3b) main_mup3_pane_g1

0x9146,	// (0x0004fe5c) main_mup3_pane_g2_ParamLimits

0x9146,	// (0x0004fe5c) main_mup3_pane_g2

0x91be,	// (0x0004fed4) main_mup3_pane_g3_ParamLimits

0x91be,	// (0x0004fed4) main_mup3_pane_g3

0x91fd,	// (0x0004ff13) main_mup3_pane_g4_ParamLimits

0x91fd,	// (0x0004ff13) main_mup3_pane_g4

0x923c,	// (0x0004ff52) main_mup3_pane_g5_ParamLimits

0x923c,	// (0x0004ff52) main_mup3_pane_g5

0x927b,	// (0x0004ff91) main_mup3_pane_g6_ParamLimits

0x927b,	// (0x0004ff91) main_mup3_pane_g6

0x1998,	// (0x000486ae) main_mup3_pane_g7_ParamLimits

0x1998,	// (0x000486ae) main_mup3_pane_g7

0x0007,

0xf7e5,	// (0x000564fb) main_mup3_pane_g_ParamLimits

0xf7e5,	// (0x000564fb) main_mup3_pane_g

0x92ed,	// (0x00050003) main_mup3_pane_t1_ParamLimits

0x92ed,	// (0x00050003) main_mup3_pane_t1

0x9358,	// (0x0005006e) main_mup3_pane_t2_ParamLimits

0x9358,	// (0x0005006e) main_mup3_pane_t2

0x941d,	// (0x00050133) main_mup3_pane_t4_ParamLimits

0x941d,	// (0x00050133) main_mup3_pane_t4

0x946b,	// (0x00050181) main_mup3_pane_t5_ParamLimits

0x946b,	// (0x00050181) main_mup3_pane_t5

0x9513,	// (0x00050229) main_mup3_pane_t6_ParamLimits

0x9513,	// (0x00050229) main_mup3_pane_t6

0x0005,

0xf7f6,	// (0x0005650c) main_mup3_pane_t_ParamLimits

0xf7f6,	// (0x0005650c) main_mup3_pane_t

0x95bb,	// (0x000502d1) mup3_progress_pane_ParamLimits

0x95bb,	// (0x000502d1) mup3_progress_pane

0x9626,	// (0x0005033c) popup_mup3_control_window_ParamLimits

0x9626,	// (0x0005033c) popup_mup3_control_window

0x19a6,	// (0x000486bc) popup_mup3_text_window

0x963f,	// (0x00050355) mup3_progress_pane_t1

0x9656,	// (0x0005036c) mup3_progress_pane_t2

0x19ae,	// (0x000486c4) mup3_progress_pane_t3

0x0002,

0xf803,	// (0x00056519) mup3_progress_pane_t

0x19c5,	// (0x000486db) mup_progress_pane_cp03

0x4f85,	// (0x0004bc9b) bg_tb_trans_pane_cp04

0x966d,	// (0x00050383) mup3_volume_pane

0x9675,	// (0x0005038b) popup_mup3_control_window_g1

0x967e,	// (0x00050394) mup3_volume_pane_g1

0x9687,	// (0x0005039d) mup3_volume_pane_g2

0x9690,	// (0x000503a6) mup3_volume_pane_g3

0x0002,

0xf80a,	// (0x00056520) mup3_volume_pane_g

0x4f85,	// (0x0004bc9b) bg_tb_trans_pane_cp03

0x19d5,	// (0x000486eb) popup_mup3_text_window_g1

0x19dd,	// (0x000486f3) popup_mup3_text_window_t1

0xd623,	// (0x00054339) list_calc_item_pane_g1_ParamLimits

0x138e,	// (0x000480a4) mup_volume_pane_cp_g1

0x9072,	// (0x0004fd88) main_touch_calib_pane_t3

0x9086,	// (0x0004fd9c) main_touch_calib_pane_t4

0x909a,	// (0x0004fdb0) main_touch_calib_pane_t5

0x4f8f,	// (0x0004bca5) aid_cell_size_toolbar2

0x4f97,	// (0x0004bcad) aid_popup3_width_pane

0x0aa4,	// (0x000477ba) aid_zoom_text_msg_primary

0x6302,	// (0x0004d018) vorec_t7

0xd5e7,	// (0x000542fd) bg_calc_paper_pane_g1_ParamLimits

0xd5f3,	// (0x00054309) bg_calc_paper_pane_g2_ParamLimits

0xd5ff,	// (0x00054315) bg_calc_paper_pane_g3_ParamLimits

0xd60b,	// (0x00054321) bg_calc_paper_pane_g4_ParamLimits

0xd617,	// (0x0005432d) bg_calc_paper_pane_g5_ParamLimits

0x5c7b,	// (0x0004c991) bg_calc_paper_pane_g6_ParamLimits

0x5c8c,	// (0x0004c9a2) bg_calc_paper_pane_g7_ParamLimits

0x5c9d,	// (0x0004c9b3) bg_calc_paper_pane_g8_ParamLimits

0xf1bd,	// (0x00055ed3) bg_calc_paper_pane_g_ParamLimits

0x5cae,	// (0x0004c9c4) calc_bg_paper_pane_g9_ParamLimits

0x6412,	// (0x0004d128) image_qvga_pane_ParamLimits

0x6412,	// (0x0004d128) image_qvga_pane

0xd504,	// (0x0005421a) bg_popup_sub_pane_cp04_ParamLimits

0xe2c1,	// (0x00054fd7) popup_mup_playback_window_g1_ParamLimits

0xe2cd,	// (0x00054fe3) popup_mup_playback_window_t1_ParamLimits

0xe2e2,	// (0x00054ff8) popup_mup_playback_window_t2_ParamLimits

0xf549,	// (0x0005625f) popup_mup_playback_window_t_ParamLimits

0x8b84,	// (0x0004f89a) main_mup2_pane_g3_ParamLimits

0x8b84,	// (0x0004f89a) main_mup2_pane_g3

0x66ba,	// (0x0004d3d0) popup_toolbar_window_cp04

0xe6c4,	// (0x000553da) popup_call2_audio_second_window_g3_ParamLimits

0xe6c4,	// (0x000553da) popup_call2_audio_second_window_g3

0xeace,	// (0x000557e4) popup_call2_audio_first_window_g4_ParamLimits

0xeace,	// (0x000557e4) popup_call2_audio_first_window_g4

0x0e18,	// (0x00047b2e) popup_call2_audio_in_window_g4_ParamLimits

0x0e18,	// (0x00047b2e) popup_call2_audio_in_window_g4

0x7fde,	// (0x0004ecf4) aid_area_sk_bg_cut_ParamLimits

0x7fde,	// (0x0004ecf4) aid_area_sk_bg_cut

0xe2f7,	// (0x0005500d) aid_area_sk_bg_cut_2_ParamLimits

0xe2f7,	// (0x0005500d) aid_area_sk_bg_cut_2

0x8f05,	// (0x0004fc1b) aid_placing_details_win

0x8f0d,	// (0x0004fc23) aid_placing_details_win_2

0x17fd,	// (0x00048513) camera2_autofocus_pane_g1_ParamLimits

0x51ea,	// (0x0004bf00) popup_fixed_preview_cale_window_ParamLimits

0x51ea,	// (0x0004bf00) popup_fixed_preview_cale_window

0xe0d3,	// (0x00054de9) navi_slider_pane_g3

0xe0dc,	// (0x00054df2) navi_slider_pane_g4

0xe0e5,	// (0x00054dfb) navi_slider_pane_g5

0xe0d3,	// (0x00054de9) navi_slider_pane_g6

0x783d,	// (0x0004e553) navi_slider_pane_g7

0xe1f8,	// (0x00054f0e) mup_scale_pane_g3

0xe201,	// (0x00054f17) mup_scale_pane_g4

0xe20a,	// (0x00054f20) mup_scale_pane_g5

0x7c7e,	// (0x0004e994) mup_scale_pane_g6

0x7c87,	// (0x0004e99d) mup_scale_pane_g7

0xe0d3,	// (0x00054de9) cams2_slider_pane_g3

0x1443,	// (0x00048159) cams2_slider_pane_g4

0x8e5d,	// (0x0004fb73) cams2_slider_pane_g5

0xe0d3,	// (0x00054de9) cams2_slider_pane_g6

0x8e65,	// (0x0004fb7b) cams2_slider_pane_g7

0x167f,	// (0x00048395) camera2_autofocus_pane_cp_g1

0x19eb,	// (0x00048701) bg_popup_preview_window_pane_cp02_ParamLimits

0x19eb,	// (0x00048701) bg_popup_preview_window_pane_cp02

0x19f7,	// (0x0004870d) list_fp_cale_pane_ParamLimits

0x19f7,	// (0x0004870d) list_fp_cale_pane

0x1a03,	// (0x00048719) popup_fixed_preview_cale_window_t1_ParamLimits

0x1a03,	// (0x00048719) popup_fixed_preview_cale_window_t1

0x9699,	// (0x000503af) popup_fixed_preview_cale_window_t2_ParamLimits

0x9699,	// (0x000503af) popup_fixed_preview_cale_window_t2

0x96ae,	// (0x000503c4) popup_fixed_preview_cale_window_t3_ParamLimits

0x96ae,	// (0x000503c4) popup_fixed_preview_cale_window_t3

0x0002,

0xf811,	// (0x00056527) popup_fixed_preview_cale_window_t_ParamLimits

0xf811,	// (0x00056527) popup_fixed_preview_cale_window_t

0x96c3,	// (0x000503d9) list_single_fp_cale_pane_ParamLimits

0x96c3,	// (0x000503d9) list_single_fp_cale_pane

0x1a21,	// (0x00048737) list_single_fp_cale_pane_g1_ParamLimits

0x1a21,	// (0x00048737) list_single_fp_cale_pane_g1

0x1a2d,	// (0x00048743) list_single_fp_cale_pane_g2_ParamLimits

0x1a2d,	// (0x00048743) list_single_fp_cale_pane_g2

0x0002,

0xf818,	// (0x0005652e) list_single_fp_cale_pane_g_ParamLimits

0xf818,	// (0x0005652e) list_single_fp_cale_pane_g

0x1a46,	// (0x0004875c) list_single_fp_cale_pane_t1_ParamLimits

0x1a46,	// (0x0004875c) list_single_fp_cale_pane_t1

0x1a58,	// (0x0004876e) list_single_fp_cale_pane_t2_ParamLimits

0x1a58,	// (0x0004876e) list_single_fp_cale_pane_t2

0x0001,

0xf81f,	// (0x00056535) list_single_fp_cale_pane_t_ParamLimits

0xf81f,	// (0x00056535) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x4f85,	// (0x0004bc9b) main_dialer_pane

0x96d5,	// (0x000503eb) aid_cell_size_keypad

0x96df,	// (0x000503f5) dialer_ne_pane

0x96e9,	// (0x000503ff) grid_dialer_command_1_pane

0x96f1,	// (0x00050407) grid_dialer_command_2_pane

0x96f9,	// (0x0005040f) grid_dialer_keypad_pane

0x970b,	// (0x00050421) bg_popup_call_pane_cp06_ParamLimits

0x970b,	// (0x00050421) bg_popup_call_pane_cp06

0x9717,	// (0x0005042d) dialer_ne_clear_pane_ParamLimits

0x9717,	// (0x0005042d) dialer_ne_clear_pane

0x1a8b,	// (0x000487a1) dialer_ne_pane_g1

0x1a93,	// (0x000487a9) dialer_ne_pane_t1_ParamLimits

0x1a93,	// (0x000487a9) dialer_ne_pane_t1

0x9723,	// (0x00050439) dialer_ne_pane_t2_ParamLimits

0x9723,	// (0x00050439) dialer_ne_pane_t2

0x9740,	// (0x00050456) dialer_ne_pane_t3_ParamLimits

0x9740,	// (0x00050456) dialer_ne_pane_t3

0x0002,

0xf824,	// (0x0005653a) dialer_ne_pane_t_ParamLimits

0xf824,	// (0x0005653a) dialer_ne_pane_t

0x9764,	// (0x0005047a) dialer_ne_pane_t3_copy1_ParamLimits

0x9764,	// (0x0005047a) dialer_ne_pane_t3_copy1

0x9788,	// (0x0005049e) cell_dialer_keypad_pane_ParamLimits

0x9788,	// (0x0005049e) cell_dialer_keypad_pane

0x979f,	// (0x000504b5) cell_dialer_command_1_pane_ParamLimits

0x979f,	// (0x000504b5) cell_dialer_command_1_pane

0x97b5,	// (0x000504cb) cell_dialer_command_2_pane_ParamLimits

0x97b5,	// (0x000504cb) cell_dialer_command_2_pane

0x1aa5,	// (0x000487bb) bg_button_pane_cp02_ParamLimits

0x1aa5,	// (0x000487bb) bg_button_pane_cp02

0x97c4,	// (0x000504da) cell_dialer_keypad_pane_g1_ParamLimits

0x97c4,	// (0x000504da) cell_dialer_keypad_pane_g1

0x1aa5,	// (0x000487bb) bg_button_pane_cp03_ParamLimits

0x1aa5,	// (0x000487bb) bg_button_pane_cp03

0x97d9,	// (0x000504ef) cell_dialer_command_1_pane_g1_ParamLimits

0x97d9,	// (0x000504ef) cell_dialer_command_1_pane_g1

0x1ab1,	// (0x000487c7) bg_button_pane_cp04

0x97ed,	// (0x00050503) cell_dialer_command_2_pane_g1

0xe0c2,	// (0x00054dd8) bg_button_pane_cp06

0x1ab9,	// (0x000487cf) dialer_ne_clear_pane_g1

0x7780,	// (0x0004e496) navi_pane_g2

0x77ae,	// (0x0004e4c4) navi_pane_g3

0x0002,

0xf44c,	// (0x00056162) navi_pane_g

0x77d9,	// (0x0004e4ef) navi_pane_mv_g2

0x7800,	// (0x0004e516) navi_pane_mv_g5

0x7808,	// (0x0004e51e) navi_pane_mv_t1

0xd5db,	// (0x000542f1) main_clock2_pane

0x981c,	// (0x00050532) main_clock2_list_pane_ParamLimits

0x981c,	// (0x00050532) main_clock2_list_pane

0x9844,	// (0x0005055a) main_clock2_pane_t1_ParamLimits

0x9844,	// (0x0005055a) main_clock2_pane_t1

0x9872,	// (0x00050588) main_clock2_pane_t2_ParamLimits

0x9872,	// (0x00050588) main_clock2_pane_t2

0x0004,

0xf82b,	// (0x00056541) main_clock2_pane_t_ParamLimits

0xf82b,	// (0x00056541) main_clock2_pane_t

0x98d9,	// (0x000505ef) popup_clock_analogue_window_cp03_ParamLimits

0x98d9,	// (0x000505ef) popup_clock_analogue_window_cp03

0x98f7,	// (0x0005060d) popup_clock_digital_window_cp02_ParamLimits

0x98f7,	// (0x0005060d) popup_clock_digital_window_cp02

0x9964,	// (0x0005067a) main_clock2_list_single_pane_ParamLimits

0x9964,	// (0x0005067a) main_clock2_list_single_pane

0xe0c2,	// (0x00054dd8) list_highlight_pane_cp05

0x1ac1,	// (0x000487d7) main_clock2_list_single_pane_t1

0x66ba,	// (0x0004d3d0) popup_toolbar_window_cp04_ParamLimits

0x8f2f,	// (0x0004fc45) camera2_autofocus_pane_g2_ParamLimits

0x8f2f,	// (0x0004fc45) camera2_autofocus_pane_g2

0x8f3b,	// (0x0004fc51) camera2_autofocus_pane_g3_ParamLimits

0x8f3b,	// (0x0004fc51) camera2_autofocus_pane_g3

0x8f47,	// (0x0004fc5d) camera2_autofocus_pane_g4_ParamLimits

0x8f47,	// (0x0004fc5d) camera2_autofocus_pane_g4

0x8f53,	// (0x0004fc69) camera2_autofocus_pane_g5_ParamLimits

0x8f53,	// (0x0004fc69) camera2_autofocus_pane_g5

0x0004,

0xf774,	// (0x0005648a) camera2_autofocus_pane_g_ParamLimits

0xf774,	// (0x0005648a) camera2_autofocus_pane_g

0x9105,	// (0x0004fe1b) camera2_autofocus_pane_cp_g2

0x910d,	// (0x0004fe23) camera2_autofocus_pane_cp_g3

0x9115,	// (0x0004fe2b) camera2_autofocus_pane_cp_g4

0x911d,	// (0x0004fe33) camera2_autofocus_pane_cp_g5

0x0004,

0xf7da,	// (0x000564f0) camera2_autofocus_pane_cp_g

0x9703,	// (0x00050419) popup_dialer_spcha_window

0x4f85,	// (0x0004bc9b) bg_popup_sub_pane_cp07

0x1acf,	// (0x000487e5) list_spcha_pane

0x1ad7,	// (0x000487ed) list_single_spcha_pane_ParamLimits

0x1ad7,	// (0x000487ed) list_single_spcha_pane

0x4f85,	// (0x0004bc9b) list_highlight_pane_cp06

0x1ae8,	// (0x000487fe) list_single_spcha_pane_t1

0xeef7,	// (0x00055c0d) popup_call2_audio_out_window_g4_ParamLimits

0xeef7,	// (0x00055c0d) popup_call2_audio_out_window_g4

0x4f85,	// (0x0004bc9b) main_imed2_pane

0x11a1,	// (0x00047eb7) popup_imed_adjust2_window

0x85fd,	// (0x0004f313) popup_imed_trans_window_ParamLimits

0x85fd,	// (0x0004f313) popup_imed_trans_window

0x14bd,	// (0x000481d3) popup_blid_sat_info2_window_t1

0x14cb,	// (0x000481e1) popup_blid_sat_info2_window_t2

0x000a,

0xf709,	// (0x0005641f) popup_blid_sat_info2_window_t

0x9a0e,	// (0x00050724) aid_size_cell_colour_35

0x9a28,	// (0x0005073e) aid_size_cell_colour_112

0x9a3f,	// (0x00050755) aid_size_cell_effect

0xf115,	// (0x00055e2b) bg_tb_trans_pane_cp02

0xf123,	// (0x00055e39) heading_imed_pane

0x9a59,	// (0x0005076f) listscroll_imed_pane

0x1af6,	// (0x0004880c) heading_imed_pane_g1

0x1afe,	// (0x00048814) heading_imed_pane_t1

0x1b0c,	// (0x00048822) grid_imed_colour_35_pane_ParamLimits

0x1b0c,	// (0x00048822) grid_imed_colour_35_pane

0x9a65,	// (0x0005077b) grid_imed_effect_pane

0x1b23,	// (0x00048839) list_imed_aspect_pane

0x9a75,	// (0x0005078b) scroll_pane_cp027_ParamLimits

0x9a75,	// (0x0005078b) scroll_pane_cp027

0x9a81,	// (0x00050797) cell_imed_effect_pane_ParamLimits

0x9a81,	// (0x00050797) cell_imed_effect_pane

0x1b2b,	// (0x00048841) cell_imed_colour_pane_ParamLimits

0x1b2b,	// (0x00048841) cell_imed_colour_pane

0x1b6d,	// (0x00048883) cell_imed_colour_pane_g1_ParamLimits

0x1b6d,	// (0x00048883) cell_imed_colour_pane_g1

0x1b7e,	// (0x00048894) hgihlgiht_grid_pane_cp016_ParamLimits

0x1b7e,	// (0x00048894) hgihlgiht_grid_pane_cp016

0x9a99,	// (0x000507af) cell_imed_effect_pane_g1

0x9aa1,	// (0x000507b7) grid_highlight_pane_cp017

0x1b8f,	// (0x000488a5) list_imed_single_pane_ParamLimits

0x1b8f,	// (0x000488a5) list_imed_single_pane

0x4f85,	// (0x0004bc9b) list_highlight_pane_cp07

0x1ba4,	// (0x000488ba) list_imed_aspect_pane_comp1_t1

0x1179,	// (0x00047e8f) bg_tb_trans_pane_cp05

0x1bc6,	// (0x000488dc) popup_imed_adjust2_window_g1

0x1bed,	// (0x00048903) popup_imed_adjust2_window_t1

0x1c05,	// (0x0004891b) slider_imed_adjust_pane

0x1c19,	// (0x0004892f) slider_imed_adjust_pane_g1

0x1c29,	// (0x0004893f) slider_imed_adjust_pane_g2

0x1c39,	// (0x0004894f) slider_imed_adjust_pane_g3

0x1c4a,	// (0x00048960) slider_imed_adjust_pane_g4

0x0003,

0xf848,	// (0x0005655e) slider_imed_adjust_pane_g

0x9aaa,	// (0x000507c0) aid_size_cell_clipart2

0x9ab6,	// (0x000507cc) grid_imed_clipart_pane

0x1c5b,	// (0x00048971) scroll_pane_cp031

0x9ac0,	// (0x000507d6) cell_imed_clipart_pane_ParamLimits

0x9ac0,	// (0x000507d6) cell_imed_clipart_pane

0x9ae2,	// (0x000507f8) cell_imed_clipart_pane_g1

0x4f85,	// (0x0004bc9b) grid_highlight_pane_cp014

0x9828,	// (0x0005053e) main_clock2_pane_g1_ParamLimits

0x9828,	// (0x0005053e) main_clock2_pane_g1

0x990f,	// (0x00050625) aid_call2_pane_cp10

0x9921,	// (0x00050637) aid_call_pane_cp10

0xdff7,	// (0x00054d0d) popup_clock_analogue_window_cp10_g1

0xdff7,	// (0x00054d0d) popup_clock_analogue_window_cp10_g2

0x9933,	// (0x00050649) popup_clock_analogue_window_cp10_g3

0x9933,	// (0x00050649) popup_clock_analogue_window_cp10_g4

0xdff7,	// (0x00054d0d) popup_clock_analogue_window_cp10_g5

0x0004,

0xf836,	// (0x0005654c) popup_clock_analogue_window_cp10_g

0x9945,	// (0x0005065b) popup_clock_analogue_window_cp10_t1

0x9976,	// (0x0005068c) clock_digital_number_pane_cp10_ParamLimits

0x9976,	// (0x0005068c) clock_digital_number_pane_cp10

0x998e,	// (0x000506a4) clock_digital_number_pane_cp11_ParamLimits

0x998e,	// (0x000506a4) clock_digital_number_pane_cp11

0x99a6,	// (0x000506bc) clock_digital_number_pane_cp12_ParamLimits

0x99a6,	// (0x000506bc) clock_digital_number_pane_cp12

0x99be,	// (0x000506d4) clock_digital_number_pane_cp13_ParamLimits

0x99be,	// (0x000506d4) clock_digital_number_pane_cp13

0x99d6,	// (0x000506ec) clock_digital_separator_pane_cp10_ParamLimits

0x99d6,	// (0x000506ec) clock_digital_separator_pane_cp10

0x99ee,	// (0x00050704) popup_clock_digital_window_cp02_t1_ParamLimits

0x99ee,	// (0x00050704) popup_clock_digital_window_cp02_t1

0x5954,	// (0x0004c66a) clock_digital_number_pane_cp10_g1

0x5954,	// (0x0004c66a) clock_digital_number_pane_cp10_g2

0x0001,

0xf851,	// (0x00056567) clock_digital_number_pane_cp10_g

0x5954,	// (0x0004c66a) clock_digital_separator_pane_cp10_g1

0x5954,	// (0x0004c66a) clock_digital_separator_pane_g2_cp10

0xe092,	// (0x00054da8) navi_pane_vded_g4

0xe09b,	// (0x00054db1) navi_pane_vded_g5

0xe0a4,	// (0x00054dba) navi_pane_vded_t1

0x4f85,	// (0x0004bc9b) main_vded_pane

0x9aeb,	// (0x00050801) main_vded_pane_g1

0x9af7,	// (0x0005080d) main_vded_pane_g2

0x9b01,	// (0x00050817) main_vded_pane_g3

0x0002,

0xf856,	// (0x0005656c) main_vded_pane_g

0x9b0b,	// (0x00050821) main_vded_pane_t1

0x9b19,	// (0x0005082f) main_vded_pane_t2

0x0001,

0xf85d,	// (0x00056573) main_vded_pane_t

0x9b27,	// (0x0005083d) vded_slider_pane

0x9b31,	// (0x00050847) vded_video_pane

0x1c63,	// (0x00048979) vded_video_pane_g1

0x9b3b,	// (0x00050851) vded_video_pane_g2

0x167f,	// (0x00048395) vded_video_pane_g3

0x0002,

0xf862,	// (0x00056578) vded_video_pane_g

0x1c6d,	// (0x00048983) vded_slider_pane_g1

0x138e,	// (0x000480a4) vded_slider_pane_g2

0x1c76,	// (0x0004898c) vded_slider_pane_g3

0x1c7f,	// (0x00048995) vded_slider_pane_g4

0x1c88,	// (0x0004899e) vded_slider_pane_g5

0x0004,

0xf869,	// (0x0005657f) vded_slider_pane_g

0x9618,	// (0x0005032e) mup3_rocker_pane_ParamLimits

0x9618,	// (0x0005032e) mup3_rocker_pane

0x9b44,	// (0x0005085a) mup3_control_keys_pane_g1

0x9b4c,	// (0x00050862) mup3_control_keys_pane_g2

0x9b54,	// (0x0005086a) mup3_control_keys_pane_g3

0x9b5c,	// (0x00050872) mup3_control_keys_pane_g4

0x0003,

0xf874,	// (0x0005658a) mup3_control_keys_pane_g

0x5212,	// (0x0004bf28) popup_toolbar2_fixed_window_cp01_ParamLimits

0x5212,	// (0x0004bf28) popup_toolbar2_fixed_window_cp01

0x9632,	// (0x00050348) popup_toolbar2_fixed_window_cp02_ParamLimits

0x9632,	// (0x00050348) popup_toolbar2_fixed_window_cp02

0xe836,	// (0x0005554c) popup_call2_audio_second_window_t4_ParamLimits

0xe836,	// (0x0005554c) popup_call2_audio_second_window_t4

0xed64,	// (0x00055a7a) popup_call2_audio_first_window_t6_ParamLimits

0xed64,	// (0x00055a7a) popup_call2_audio_first_window_t6

0xeffa,	// (0x00055d10) popup_call2_audio_out_window_t6_ParamLimits

0xeffa,	// (0x00055d10) popup_call2_audio_out_window_t6

0x4f85,	// (0x0004bc9b) main_vitu_pane

0x9b6c,	// (0x00050882) aid_size_cell_itu_ParamLimits

0x9b6c,	// (0x00050882) aid_size_cell_itu

0x20b2,	// (0x00048dc8) bg_popup_window_pane_cp08_ParamLimits

0x20b2,	// (0x00048dc8) bg_popup_window_pane_cp08

0x9b7a,	// (0x00050890) field_vitu_entry_pane_ParamLimits

0x9b7a,	// (0x00050890) field_vitu_entry_pane

0x9b89,	// (0x0005089f) grid_vitu_function_pane_ParamLimits

0x9b89,	// (0x0005089f) grid_vitu_function_pane

0x9b99,	// (0x000508af) grid_vitu_itu_pane_ParamLimits

0x9b99,	// (0x000508af) grid_vitu_itu_pane

0x9ba9,	// (0x000508bf) cell_vitu_itu_pane_ParamLimits

0x9ba9,	// (0x000508bf) cell_vitu_itu_pane

0x9bbe,	// (0x000508d4) cell_vitu_function_pane_ParamLimits

0x9bbe,	// (0x000508d4) cell_vitu_function_pane

0xf115,	// (0x00055e2b) bg_popup_sub_pane_cp08_ParamLimits

0xf115,	// (0x00055e2b) bg_popup_sub_pane_cp08

0x9bd0,	// (0x000508e6) field_vitu_entry_pane_t1_ParamLimits

0x9bd0,	// (0x000508e6) field_vitu_entry_pane_t1

0x1ca9,	// (0x000489bf) field_vitu_entry_pane_t2_ParamLimits

0x1ca9,	// (0x000489bf) field_vitu_entry_pane_t2

0x0001,

0xf882,	// (0x00056598) field_vitu_entry_pane_t_ParamLimits

0xf882,	// (0x00056598) field_vitu_entry_pane_t

0x1cc6,	// (0x000489dc) bg_button_pane_cp05_ParamLimits

0x1cc6,	// (0x000489dc) bg_button_pane_cp05

0x9beb,	// (0x00050901) cell_vitu_itu_pane_g1

0x9c03,	// (0x00050919) cell_vitu_itu_pane_t1_ParamLimits

0x9c03,	// (0x00050919) cell_vitu_itu_pane_t1

0x9c15,	// (0x0005092b) cell_vitu_itu_pane_t2_ParamLimits

0x9c15,	// (0x0005092b) cell_vitu_itu_pane_t2

0x0002,

0xf887,	// (0x0005659d) cell_vitu_itu_pane_t_ParamLimits

0xf887,	// (0x0005659d) cell_vitu_itu_pane_t

0x1cd4,	// (0x000489ea) bg_button_pane_cp07

0x9c4a,	// (0x00050960) cell_vitu_function_pane_g1

0x5b19,	// (0x0004c82f) main_calc_pane_g1

0x4fcb,	// (0x0004bce1) aid_visual_content_pane

0x4f85,	// (0x0004bc9b) main_vradio_pane

0x9c53,	// (0x00050969) main_vradio_pane_g1_ParamLimits

0x9c53,	// (0x00050969) main_vradio_pane_g1

0x1cde,	// (0x000489f4) main_vradio_pane_g2_ParamLimits

0x1cde,	// (0x000489f4) main_vradio_pane_g2

0x0001,

0xf88e,	// (0x000565a4) main_vradio_pane_g_ParamLimits

0xf88e,	// (0x000565a4) main_vradio_pane_g

0x9c63,	// (0x00050979) main_vradio_pane_t1_ParamLimits

0x9c63,	// (0x00050979) main_vradio_pane_t1

0x9c75,	// (0x0005098b) main_vradio_pane_t2_ParamLimits

0x9c75,	// (0x0005098b) main_vradio_pane_t2

0x1ceb,	// (0x00048a01) main_vradio_pane_t3_ParamLimits

0x1ceb,	// (0x00048a01) main_vradio_pane_t3

0x0002,

0xf893,	// (0x000565a9) main_vradio_pane_t_ParamLimits

0xf893,	// (0x000565a9) main_vradio_pane_t

0x9c87,	// (0x0005099d) vradio_rocker_control_pane_ParamLimits

0x9c87,	// (0x0005099d) vradio_rocker_control_pane

0x9c93,	// (0x000509a9) vradio_station_info_pane_ParamLimits

0x9c93,	// (0x000509a9) vradio_station_info_pane

0x1cff,	// (0x00048a15) vradio_frequency_info_pane_ParamLimits

0x1cff,	// (0x00048a15) vradio_frequency_info_pane

0x167f,	// (0x00048395) vradio_station_info_pane_g1

0x1d0e,	// (0x00048a24) vradio_station_info_pane_t1_ParamLimits

0x1d0e,	// (0x00048a24) vradio_station_info_pane_t1

0x1d30,	// (0x00048a46) vradio_station_info_pane_t2_ParamLimits

0x1d30,	// (0x00048a46) vradio_station_info_pane_t2

0x0001,

0xf89a,	// (0x000565b0) vradio_station_info_pane_t_ParamLimits

0xf89a,	// (0x000565b0) vradio_station_info_pane_t

0x1d42,	// (0x00048a58) vradio_tuning_pane

0x1d4a,	// (0x00048a60) vradio_rocker_control_pane_g1

0x1d52,	// (0x00048a68) vradio_rocker_control_pane_g2

0x1d5a,	// (0x00048a70) vradio_rocker_control_pane_g3

0x1d62,	// (0x00048a78) vradio_rocker_control_pane_g4

0x1d6a,	// (0x00048a80) vradio_rocker_control_pane_g5

0x0004,

0xf89f,	// (0x000565b5) vradio_rocker_control_pane_g

0x9ca2,	// (0x000509b8) vradio_frequency_info_pane_g1

0x1d72,	// (0x00048a88) vradio_frequency_info_pane_t1_ParamLimits

0x1d72,	// (0x00048a88) vradio_frequency_info_pane_t1

0x9cac,	// (0x000509c2) vradio_tuning_pane_g1

0x9cb5,	// (0x000509cb) vradio_tuning_pane_t1

0x5014,	// (0x0004bd2a) area_side_right_pane_ParamLimits

0x5014,	// (0x0004bd2a) area_side_right_pane

0x1140,	// (0x00047e56) status_small_pane_g1

0x1148,	// (0x00047e5e) status_small_pane_g2

0x1151,	// (0x00047e67) status_small_pane_g3

0x115a,	// (0x00047e70) status_small_pane_g4

0x0003,

0xf65f,	// (0x00056375) status_small_pane_g

0x1163,	// (0x00047e79) status_small_pane_t1

0x4f85,	// (0x0004bc9b) main_video3_pane

0x1d86,	// (0x00048a9c) cams_zoom_vslider_pane

0x1d8e,	// (0x00048aa4) image3_wide_pane_ParamLimits

0x1d8e,	// (0x00048aa4) image3_wide_pane

0x1da8,	// (0x00048abe) image3_wide_small_pane

0x1db4,	// (0x00048aca) main_video3_pane_g1_ParamLimits

0x1db4,	// (0x00048aca) main_video3_pane_g1

0x1dd0,	// (0x00048ae6) main_video3_pane_g2_ParamLimits

0x1dd0,	// (0x00048ae6) main_video3_pane_g2

0x0001,

0xf8aa,	// (0x000565c0) main_video3_pane_g_ParamLimits

0xf8aa,	// (0x000565c0) main_video3_pane_g

0x1dec,	// (0x00048b02) main_video3_pane_t1_ParamLimits

0x1dec,	// (0x00048b02) main_video3_pane_t1

0x1e17,	// (0x00048b2d) main_video3_pane_t2_ParamLimits

0x1e17,	// (0x00048b2d) main_video3_pane_t2

0x1e42,	// (0x00048b58) main_video3_pane_t3_ParamLimits

0x1e42,	// (0x00048b58) main_video3_pane_t3

0x0002,

0xf8af,	// (0x000565c5) main_video3_pane_t_ParamLimits

0xf8af,	// (0x000565c5) main_video3_pane_t

0x1e6f,	// (0x00048b85) cams_zoom_vslider_pane_g1

0x1e78,	// (0x00048b8e) cams_zoom_vslider_pane_g2

0x0001,

0xf8b6,	// (0x000565cc) cams_zoom_vslider_pane_g

0x1e80,	// (0x00048b96) small_slider_vertical_pane

0x167f,	// (0x00048395) small_slider_vertical_pane_g1

0x167f,	// (0x00048395) small_slider_vertical_pane_g2

0x1e88,	// (0x00048b9e) small_slider_vertical_pane_g3

0x0002,

0xf8bb,	// (0x000565d1) small_slider_vertical_pane_g

0x4f85,	// (0x0004bc9b) main_hwr_training_pane

0x1e91,	// (0x00048ba7) hwr_training_instruct_pane_ParamLimits

0x1e91,	// (0x00048ba7) hwr_training_instruct_pane

0x9cc4,	// (0x000509da) hwr_training_navi_pane_ParamLimits

0x9cc4,	// (0x000509da) hwr_training_navi_pane

0x9cde,	// (0x000509f4) hwr_training_write_pane_ParamLimits

0x9cde,	// (0x000509f4) hwr_training_write_pane

0x4f85,	// (0x0004bc9b) bg_frame_shadow_pane

0x1ec8,	// (0x00048bde) hwr_training_write_pane_g1

0x1ed0,	// (0x00048be6) hwr_training_write_pane_g2

0x1ed8,	// (0x00048bee) hwr_training_write_pane_g3

0x1ee0,	// (0x00048bf6) hwr_training_write_pane_g4

0x1ee8,	// (0x00048bfe) hwr_training_write_pane_g5

0x1ef0,	// (0x00048c06) hwr_training_write_pane_g6

0x1ef8,	// (0x00048c0e) hwr_training_write_pane_g7

0x0006,

0xf8c2,	// (0x000565d8) hwr_training_write_pane_g

0x9d16,	// (0x00050a2c) hwr_training_navi_pane_g1_ParamLimits

0x9d16,	// (0x00050a2c) hwr_training_navi_pane_g1

0x9d28,	// (0x00050a3e) hwr_training_navi_pane_g2_ParamLimits

0x9d28,	// (0x00050a3e) hwr_training_navi_pane_g2

0x9d3a,	// (0x00050a50) hwr_training_navi_pane_g3_ParamLimits

0x9d3a,	// (0x00050a50) hwr_training_navi_pane_g3

0x9d4a,	// (0x00050a60) hwr_training_navi_pane_g4_ParamLimits

0x9d4a,	// (0x00050a60) hwr_training_navi_pane_g4

0x0004,

0xf8d1,	// (0x000565e7) hwr_training_navi_pane_g_ParamLimits

0xf8d1,	// (0x000565e7) hwr_training_navi_pane_g

0x9d64,	// (0x00050a7a) hwr_training_navi_pane_t1

0x9d72,	// (0x00050a88) list_single_hwr_training_instruct_pane_ParamLimits

0x9d72,	// (0x00050a88) list_single_hwr_training_instruct_pane

0x1f00,	// (0x00048c16) list_single_hwr_training_instruct_pane_t1

0x15bf,	// (0x000482d5) bg_frame_shadow_pane_g1

0x1f0f,	// (0x00048c25) bg_frame_shadow_pane_g2

0x1f17,	// (0x00048c2d) bg_frame_shadow_pane_g3

0x1f1f,	// (0x00048c35) bg_frame_shadow_pane_g4

0x1f27,	// (0x00048c3d) bg_frame_shadow_pane_g5

0x1f2f,	// (0x00048c45) bg_frame_shadow_pane_g6

0x1f37,	// (0x00048c4d) bg_frame_shadow_pane_g7

0xd694,	// (0x000543aa) bg_frame_shadow_pane_g8

0x0007,

0xf8dc,	// (0x000565f2) bg_frame_shadow_pane_g

0x4f85,	// (0x0004bc9b) main_video_tele_dialer_pane

0x9d97,	// (0x00050aad) aid_size_cell_video_keypad_ParamLimits

0x9d97,	// (0x00050aad) aid_size_cell_video_keypad

0x9da7,	// (0x00050abd) grid_video_dialer_keypad_pane_ParamLimits

0x9da7,	// (0x00050abd) grid_video_dialer_keypad_pane

0x9ddb,	// (0x00050af1) video_down_pane_cp_ParamLimits

0x9ddb,	// (0x00050af1) video_down_pane_cp

0x9e05,	// (0x00050b1b) cell_video_dialer_keypad_pane_ParamLimits

0x9e05,	// (0x00050b1b) cell_video_dialer_keypad_pane

0x1f3f,	// (0x00048c55) bg_button_pane_cp08_ParamLimits

0x1f3f,	// (0x00048c55) bg_button_pane_cp08

0x9e1a,	// (0x00050b30) cell_video_dialer_keypad_pane_g1_ParamLimits

0x9e1a,	// (0x00050b30) cell_video_dialer_keypad_pane_g1

0x960c,	// (0x00050322) mup3_rocker2_pane_ParamLimits

0x960c,	// (0x00050322) mup3_rocker2_pane

0x167f,	// (0x00048395) mup3_rocker2_pane_g1

0x8587,	// (0x0004f29d) main_dialer2_pane

0x4f85,	// (0x0004bc9b) main_mp4_pane

0x9e59,	// (0x00050b6f) main_mp4_pane_g1_ParamLimits

0x9e59,	// (0x00050b6f) main_mp4_pane_g1

0x9e67,	// (0x00050b7d) main_mp4_pane_g2_ParamLimits

0x9e67,	// (0x00050b7d) main_mp4_pane_g2

0x9e75,	// (0x00050b8b) main_mp4_pane_g3_ParamLimits

0x9e75,	// (0x00050b8b) main_mp4_pane_g3

0x9eba,	// (0x00050bd0) main_mp4_pane_g4_ParamLimits

0x9eba,	// (0x00050bd0) main_mp4_pane_g4

0x9ed4,	// (0x00050bea) main_mp4_pane_g5_ParamLimits

0x9ed4,	// (0x00050bea) main_mp4_pane_g5

0x0005,

0xf8fc,	// (0x00056612) main_mp4_pane_g_ParamLimits

0xf8fc,	// (0x00056612) main_mp4_pane_g

0x9f08,	// (0x00050c1e) main_mp4_pane_t1_ParamLimits

0x9f08,	// (0x00050c1e) main_mp4_pane_t1

0x9f64,	// (0x00050c7a) main_mp4_pane_t2_ParamLimits

0x9f64,	// (0x00050c7a) main_mp4_pane_t2

0x1f4b,	// (0x00048c61) main_mp4_pane_t3_ParamLimits

0x1f4b,	// (0x00048c61) main_mp4_pane_t3

0x9fb6,	// (0x00050ccc) main_mp4_pane_t4_ParamLimits

0x9fb6,	// (0x00050ccc) main_mp4_pane_t4

0x0003,

0xf909,	// (0x0005661f) main_mp4_pane_t_ParamLimits

0xf909,	// (0x0005661f) main_mp4_pane_t

0x9ffa,	// (0x00050d10) mp4_progress_pane_ParamLimits

0x9ffa,	// (0x00050d10) mp4_progress_pane

0xa044,	// (0x00050d5a) mp4_rocker_pane_ParamLimits

0xa044,	// (0x00050d5a) mp4_rocker_pane

0x1f73,	// (0x00048c89) mp4_progress_pane_t1

0x1f8c,	// (0x00048ca2) mp4_progress_pane_t2

0x0001,

0xf912,	// (0x00056628) mp4_progress_pane_t

0x1fa5,	// (0x00048cbb) mup_progress_pane_cp04

0x2862,	// (0x00049578) mp4_rocker_pane_g1

0xa064,	// (0x00050d7a) aid_cell_size_keypad2_ParamLimits

0xa064,	// (0x00050d7a) aid_cell_size_keypad2

0xa074,	// (0x00050d8a) dialer2_ne_pane_ParamLimits

0xa074,	// (0x00050d8a) dialer2_ne_pane

0xa082,	// (0x00050d98) grid_dialer2_keypad_pane_ParamLimits

0xa082,	// (0x00050d98) grid_dialer2_keypad_pane

0x28bd,	// (0x000495d3) bg_popup_call_pane_cp07_ParamLimits

0x28bd,	// (0x000495d3) bg_popup_call_pane_cp07

0xa092,	// (0x00050da8) dialer2_ne_pane_t1_ParamLimits

0xa092,	// (0x00050da8) dialer2_ne_pane_t1

0xa0b7,	// (0x00050dcd) cell_dialer2_keypad_pane_ParamLimits

0xa0b7,	// (0x00050dcd) cell_dialer2_keypad_pane

0x1fc3,	// (0x00048cd9) bg_button_pane_pane_cp04_ParamLimits

0x1fc3,	// (0x00048cd9) bg_button_pane_pane_cp04

0xa0cc,	// (0x00050de2) cell_dialer2_keypad_pane_g1_ParamLimits

0xa0cc,	// (0x00050de2) cell_dialer2_keypad_pane_g1

0x65e5,	// (0x0004d2fb) aid_placing_vt_set_content_ParamLimits

0x65e5,	// (0x0004d2fb) aid_placing_vt_set_content

0x6603,	// (0x0004d319) aid_placing_vt_set_title_ParamLimits

0x6603,	// (0x0004d319) aid_placing_vt_set_title

0x4f85,	// (0x0004bc9b) main_image3_pane

0xa166,	// (0x00050e7c) area_side_right_pane_cp01_ParamLimits

0xa166,	// (0x00050e7c) area_side_right_pane_cp01

0xa193,	// (0x00050ea9) main_image3_pane_g1_ParamLimits

0xa193,	// (0x00050ea9) main_image3_pane_g1

0xa1a1,	// (0x00050eb7) main_image3_pane_g2_ParamLimits

0xa1a1,	// (0x00050eb7) main_image3_pane_g2

0xa1ba,	// (0x00050ed0) main_image3_pane_g3_ParamLimits

0xa1ba,	// (0x00050ed0) main_image3_pane_g3

0xa1d3,	// (0x00050ee9) main_image3_pane_g4_ParamLimits

0xa1d3,	// (0x00050ee9) main_image3_pane_g4

0x0003,

0xf921,	// (0x00056637) main_image3_pane_g_ParamLimits

0xf921,	// (0x00056637) main_image3_pane_g

0xa1ec,	// (0x00050f02) main_image3_pane_t1_ParamLimits

0xa1ec,	// (0x00050f02) main_image3_pane_t1

0xa211,	// (0x00050f27) main_image3_pane_t2_ParamLimits

0xa211,	// (0x00050f27) main_image3_pane_t2

0xa230,	// (0x00050f46) main_image3_pane_t3_ParamLimits

0xa230,	// (0x00050f46) main_image3_pane_t3

0x0003,

0xf92a,	// (0x00056640) main_image3_pane_t_ParamLimits

0xf92a,	// (0x00056640) main_image3_pane_t

0x20b2,	// (0x00048dc8) grid_sctrl_middle_pane_cp01_ParamLimits

0x20b2,	// (0x00048dc8) grid_sctrl_middle_pane_cp01

0xa291,	// (0x00050fa7) cell_sctrl_middle_pane_cp01_ParamLimits

0xa291,	// (0x00050fa7) cell_sctrl_middle_pane_cp01

0xa2a2,	// (0x00050fb8) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0xa2a2,	// (0x00050fb8) cell_sctrl_middle_pane_cp01_g1

0x4f85,	// (0x0004bc9b) main_call4_pane

0xa2af,	// (0x00050fc5) aid_size_button_call4_ParamLimits

0xa2af,	// (0x00050fc5) aid_size_button_call4

0xa2df,	// (0x00050ff5) call4_windows_pane_ParamLimits

0xa2df,	// (0x00050ff5) call4_windows_pane

0xa2f9,	// (0x0005100f) grid_call4_button_pane_ParamLimits

0xa2f9,	// (0x0005100f) grid_call4_button_pane

0x1fcf,	// (0x00048ce5) call4_windows_conf_pane

0x1fe6,	// (0x00048cfc) popup_call4_audio_first_window_ParamLimits

0x1fe6,	// (0x00048cfc) popup_call4_audio_first_window

0x2032,	// (0x00048d48) popup_call4_audio_second_window_ParamLimits

0x2032,	// (0x00048d48) popup_call4_audio_second_window

0x2046,	// (0x00048d5c) popup_call4_audio_wait_window_ParamLimits

0x2046,	// (0x00048d5c) popup_call4_audio_wait_window

0xa31d,	// (0x00051033) cell_call4_button_pane_ParamLimits

0xa31d,	// (0x00051033) cell_call4_button_pane

0xa342,	// (0x00051058) bg_button_pane_cp09_ParamLimits

0xa342,	// (0x00051058) bg_button_pane_cp09

0xa34e,	// (0x00051064) cell_call4_button_pane_g1_ParamLimits

0xa34e,	// (0x00051064) cell_call4_button_pane_g1

0xa35b,	// (0x00051071) cell_call4_button_pane_t1_ParamLimits

0xa35b,	// (0x00051071) cell_call4_button_pane_t1

0x208e,	// (0x00048da4) popup_call4_audio_conf_window_ParamLimits

0x208e,	// (0x00048da4) popup_call4_audio_conf_window

0x963f,	// (0x00050355) mup3_progress_pane_t1_ParamLimits

0x9656,	// (0x0005036c) mup3_progress_pane_t2_ParamLimits

0x19ae,	// (0x000486c4) mup3_progress_pane_t3_ParamLimits

0xf803,	// (0x00056519) mup3_progress_pane_t_ParamLimits

0x19c5,	// (0x000486db) mup_progress_pane_cp03_ParamLimits

0x9b64,	// (0x0005087a) mup3_control_keys_pane_g4_copy1

0xa028,	// (0x00050d3e) mp4_rocker2_pane_ParamLimits

0xa028,	// (0x00050d3e) mp4_rocker2_pane

0x20aa,	// (0x00048dc0) mp4_rocker2_pane_g1

0x20a2,	// (0x00048db8) mp4_rocker2_pane_g2

0xa36d,	// (0x00051083) mp4_rocker2_pane_g3

0xa375,	// (0x0005108b) mp4_rocker2_pane_g4

0xa37d,	// (0x00051093) mp4_rocker2_pane_g5

0x0004,

0xf933,	// (0x00056649) mp4_rocker2_pane_g

0x4f85,	// (0x0004bc9b) main_camera4_pane

0x4f85,	// (0x0004bc9b) main_video4_pane

0x9db7,	// (0x00050acd) main_video_tele_dialer_pane_t1_ParamLimits

0x9db7,	// (0x00050acd) main_video_tele_dialer_pane_t1

0x9dc9,	// (0x00050adf) main_video_tele_dialer_pane_t2_ParamLimits

0x9dc9,	// (0x00050adf) main_video_tele_dialer_pane_t2

0x0001,

0xf8ed,	// (0x00056603) main_video_tele_dialer_pane_t_ParamLimits

0xf8ed,	// (0x00056603) main_video_tele_dialer_pane_t

0xa39d,	// (0x000510b3) cam4_autofocus_pane_ParamLimits

0xa39d,	// (0x000510b3) cam4_autofocus_pane

0xa3ab,	// (0x000510c1) cam4_image_uncrop_pane_ParamLimits

0xa3ab,	// (0x000510c1) cam4_image_uncrop_pane

0xa3c2,	// (0x000510d8) cam4_indicators_pane_ParamLimits

0xa3c2,	// (0x000510d8) cam4_indicators_pane

0xa3de,	// (0x000510f4) main_camera4_pane_g1_ParamLimits

0xa3de,	// (0x000510f4) main_camera4_pane_g1

0xa3ea,	// (0x00051100) main_camera4_pane_g2_ParamLimits

0xa3ea,	// (0x00051100) main_camera4_pane_g2

0xa3f6,	// (0x0005110c) main_camera4_pane_g3_ParamLimits

0xa3f6,	// (0x0005110c) main_camera4_pane_g3

0xa402,	// (0x00051118) main_camera4_pane_g4_ParamLimits

0xa402,	// (0x00051118) main_camera4_pane_g4

0xa40e,	// (0x00051124) main_camera4_pane_g5_ParamLimits

0xa40e,	// (0x00051124) main_camera4_pane_g5

0x0005,

0xf93e,	// (0x00056654) main_camera4_pane_g_ParamLimits

0xf93e,	// (0x00056654) main_camera4_pane_g

0xa428,	// (0x0005113e) main_camera4_pane_t1_ParamLimits

0xa428,	// (0x0005113e) main_camera4_pane_t1

0xa44c,	// (0x00051162) bg_tb_trans_pane_cp06

0xa462,	// (0x00051178) cam4_indicators_pane_g1

0xa46f,	// (0x00051185) cam4_indicators_pane_g2

0x0002,

0xf950,	// (0x00056666) cam4_indicators_pane_g

0xa48f,	// (0x000511a5) cam4_indicators_pane_t1

0xa4b9,	// (0x000511cf) main_video4_pane_g1_ParamLimits

0xa4b9,	// (0x000511cf) main_video4_pane_g1

0xa4c5,	// (0x000511db) main_video4_pane_g2_ParamLimits

0xa4c5,	// (0x000511db) main_video4_pane_g2

0xa4d1,	// (0x000511e7) main_video4_pane_g3_ParamLimits

0xa4d1,	// (0x000511e7) main_video4_pane_g3

0xa4dd,	// (0x000511f3) main_video4_pane_g4_ParamLimits

0xa4dd,	// (0x000511f3) main_video4_pane_g4

0x0004,

0xf957,	// (0x0005666d) main_video4_pane_g_ParamLimits

0xf957,	// (0x0005666d) main_video4_pane_g

0xa4fd,	// (0x00051213) vid4_indicators_pane_ParamLimits

0xa4fd,	// (0x00051213) vid4_indicators_pane

0xa51b,	// (0x00051231) video4_image_uncrop_cif_pane_ParamLimits

0xa51b,	// (0x00051231) video4_image_uncrop_cif_pane

0xa52a,	// (0x00051240) video4_image_uncrop_nhd_pane_ParamLimits

0xa52a,	// (0x00051240) video4_image_uncrop_nhd_pane

0xa3ab,	// (0x000510c1) video4_image_uncrop_vga_pane_ParamLimits

0xa3ab,	// (0x000510c1) video4_image_uncrop_vga_pane

0xa537,	// (0x0005124d) bg_tb_trans_pane_cp07

0xa462,	// (0x00051178) vid4_indicators_pane_g1

0xa54f,	// (0x00051265) vid4_indicators_pane_g2

0xa55c,	// (0x00051272) vid4_indicators_pane_g3

0x0004,

0xf962,	// (0x00056678) vid4_indicators_pane_g

0xa589,	// (0x0005129f) vid4_indicators_pane_t1

0xa5a3,	// (0x000512b9) cam4_autofocus_pane_g1

0xa5ab,	// (0x000512c1) cam4_autofocus_pane_g2

0xa5b3,	// (0x000512c9) cam4_autofocus_pane_g3

0x0002,

0xf96d,	// (0x00056683) cam4_autofocus_pane_g

0xa5bb,	// (0x000512d1) cam4_autofocus_pane_g3_copy1

0x9de9,	// (0x00050aff) video_down_pane_cp_t1

0x9df7,	// (0x00050b0d) video_down_pane_cp_t2

0x0001,

0xf8f2,	// (0x00056608) video_down_pane_cp_t

0x20b2,	// (0x00048dc8) popup_vitu2_window_ParamLimits

0x20b2,	// (0x00048dc8) popup_vitu2_window

0xa5c3,	// (0x000512d9) aid_size_cell2_itu2_ParamLimits

0xa5c3,	// (0x000512d9) aid_size_cell2_itu2

0xa5e5,	// (0x000512fb) aid_size_cell_itu2_ParamLimits

0xa5e5,	// (0x000512fb) aid_size_cell_itu2

0xa629,	// (0x0005133f) bg_popup_window_pane_cp09_ParamLimits

0xa629,	// (0x0005133f) bg_popup_window_pane_cp09

0xa637,	// (0x0005134d) field_vitu2_entry_pane_ParamLimits

0xa637,	// (0x0005134d) field_vitu2_entry_pane

0xa657,	// (0x0005136d) grid_vitu2_function_pane_ParamLimits

0xa657,	// (0x0005136d) grid_vitu2_function_pane

0xa69b,	// (0x000513b1) grid_vitu2_itu_pane_ParamLimits

0xa69b,	// (0x000513b1) grid_vitu2_itu_pane

0xa713,	// (0x00051429) cell_vitu2_itu_pane_ParamLimits

0xa713,	// (0x00051429) cell_vitu2_itu_pane

0xa728,	// (0x0005143e) cell_vitu2_function_pane_ParamLimits

0xa728,	// (0x0005143e) cell_vitu2_function_pane

0x20c0,	// (0x00048dd6) bg_popup_call_pane_cp08_ParamLimits

0x20c0,	// (0x00048dd6) bg_popup_call_pane_cp08

0x20d9,	// (0x00048def) field_vitu2_entry_pane_g1

0x20e5,	// (0x00048dfb) field_vitu2_entry_pane_g2

0x0002,

0xf974,	// (0x0005668a) field_vitu2_entry_pane_g

0xa767,	// (0x0005147d) field_vitu2_entry_pane_t1_ParamLimits

0xa767,	// (0x0005147d) field_vitu2_entry_pane_t1

0x20ff,	// (0x00048e15) field_vitu2_entry_pane_t2_ParamLimits

0x20ff,	// (0x00048e15) field_vitu2_entry_pane_t2

0x0001,

0xf97b,	// (0x00056691) field_vitu2_entry_pane_t_ParamLimits

0xf97b,	// (0x00056691) field_vitu2_entry_pane_t

0xa785,	// (0x0005149b) bg_button_pane_cp010_ParamLimits

0xa785,	// (0x0005149b) bg_button_pane_cp010

0xa793,	// (0x000514a9) cell_vitu2_itu_pane_g1

0xa7b1,	// (0x000514c7) cell_vitu2_itu_pane_t1_ParamLimits

0xa7b1,	// (0x000514c7) cell_vitu2_itu_pane_t1

0x4eb2,	// (0x0004bbc8) cell_vitu2_itu_pane_t2_ParamLimits

0x4eb2,	// (0x0004bbc8) cell_vitu2_itu_pane_t2

0x0002,

0xf985,	// (0x0005669b) cell_vitu2_itu_pane_t_ParamLimits

0xf985,	// (0x0005669b) cell_vitu2_itu_pane_t

0xa537,	// (0x0005124d) bg_button_pane_cp011

0xa803,	// (0x00051519) cell_vitu2_function_pane_g1

0x4f85,	// (0x0004bc9b) main_myfav_hc_pane

0xa272,	// (0x00050f88) popup_image3_note_pane_ParamLimits

0xa272,	// (0x00050f88) popup_image3_note_pane

0xa280,	// (0x00050f96) popup_image3_tool_bar_pane_ParamLimits

0xa280,	// (0x00050f96) popup_image3_tool_bar_pane

0x4f20,	// (0x0004bc36) cell_vitu2_itu_pane_t3_ParamLimits

0x4f20,	// (0x0004bc36) cell_vitu2_itu_pane_t3

0x4f85,	// (0x0004bc9b) bg_popup_trans_pane

0x2124,	// (0x00048e3a) grid_image3_tool_bar_pane

0x212e,	// (0x00048e44) bg_popup_trans_pane_g1

0xd9d7,	// (0x000546ed) bg_popup_trans_pane_g2

0x2136,	// (0x00048e4c) bg_popup_trans_pane_g3

0x213e,	// (0x00048e54) bg_popup_trans_pane_g4

0x2146,	// (0x00048e5c) bg_popup_trans_pane_g5

0x214e,	// (0x00048e64) bg_popup_trans_pane_g6

0x2156,	// (0x00048e6c) bg_popup_trans_pane_g7

0x215e,	// (0x00048e74) bg_popup_trans_pane_g8

0xd9b7,	// (0x000546cd) bg_popup_trans_pane_g9

0x0008,

0xf98c,	// (0x000566a2) bg_popup_trans_pane_g

0x2166,	// (0x00048e7c) cell_image3_tool_bar_pane_ParamLimits

0x2166,	// (0x00048e7c) cell_image3_tool_bar_pane

0x167f,	// (0x00048395) cell_image3_tool_bar_pane_g1

0x4f85,	// (0x0004bc9b) bg_popup_trans_pane_cp1

0x217a,	// (0x00048e90) popup_image3_note_pane_t1

0x2188,	// (0x00048e9e) popup_image3_note_pane_t2

0x2196,	// (0x00048eac) popup_image3_note_pane_t3

0x0002,

0xf99f,	// (0x000566b5) popup_image3_note_pane_t

0x21a4,	// (0x00048eba) popup_image3_note_pane_t3_copy1

0xa817,	// (0x0005152d) bg_myfav_hc_instruction_pane_ParamLimits

0xa817,	// (0x0005152d) bg_myfav_hc_instruction_pane

0xa82f,	// (0x00051545) cell_myfav_contact_pane_ParamLimits

0xa82f,	// (0x00051545) cell_myfav_contact_pane

0xa849,	// (0x0005155f) cell_myfav_contact_pane_cp1_ParamLimits

0xa849,	// (0x0005155f) cell_myfav_contact_pane_cp1

0xa861,	// (0x00051577) cell_myfav_contact_pane_cp2_ParamLimits

0xa861,	// (0x00051577) cell_myfav_contact_pane_cp2

0xa879,	// (0x0005158f) cell_myfav_contact_pane_cp3_ParamLimits

0xa879,	// (0x0005158f) cell_myfav_contact_pane_cp3

0xa890,	// (0x000515a6) cell_myfav_contact_pane_cp4_ParamLimits

0xa890,	// (0x000515a6) cell_myfav_contact_pane_cp4

0xa8a6,	// (0x000515bc) cell_myfav_contact_pane_cp5_ParamLimits

0xa8a6,	// (0x000515bc) cell_myfav_contact_pane_cp5

0xa8ba,	// (0x000515d0) cell_myfav_contact_pane_cp6_ParamLimits

0xa8ba,	// (0x000515d0) cell_myfav_contact_pane_cp6

0xa8ce,	// (0x000515e4) cell_myfav_contact_pane_cp7_ParamLimits

0xa8ce,	// (0x000515e4) cell_myfav_contact_pane_cp7

0x21b2,	// (0x00048ec8) listscroll_gen_pane_cp05

0xa8e6,	// (0x000515fc) main_myfav_hc_pane_g1_ParamLimits

0xa8e6,	// (0x000515fc) main_myfav_hc_pane_g1

0xa8fc,	// (0x00051612) main_myfav_hc_pane_g2_ParamLimits

0xa8fc,	// (0x00051612) main_myfav_hc_pane_g2

0x0002,

0xf9a6,	// (0x000566bc) main_myfav_hc_pane_g_ParamLimits

0xf9a6,	// (0x000566bc) main_myfav_hc_pane_g

0xa92a,	// (0x00051640) main_myfav_hc_pane_t1_ParamLimits

0xa92a,	// (0x00051640) main_myfav_hc_pane_t1

0x21bb,	// (0x00048ed1) main_myfav_hc_pane_t2_ParamLimits

0x21bb,	// (0x00048ed1) main_myfav_hc_pane_t2

0x21cd,	// (0x00048ee3) main_myfav_hc_pane_t3_ParamLimits

0x21cd,	// (0x00048ee3) main_myfav_hc_pane_t3

0xa941,	// (0x00051657) main_myfav_hc_pane_t4_ParamLimits

0xa941,	// (0x00051657) main_myfav_hc_pane_t4

0x0004,

0xf9ad,	// (0x000566c3) main_myfav_hc_pane_t_ParamLimits

0xf9ad,	// (0x000566c3) main_myfav_hc_pane_t

0x167f,	// (0x00048395) bg_myfav_hc_instruction_pane_g1

0x21df,	// (0x00048ef5) cell_myfav_contact_pane_g1_ParamLimits

0x21df,	// (0x00048ef5) cell_myfav_contact_pane_g1

0x21df,	// (0x00048ef5) cell_myfav_contact_pane_g2_ParamLimits

0x21df,	// (0x00048ef5) cell_myfav_contact_pane_g2

0x21eb,	// (0x00048f01) cell_myfav_contact_pane_g3_ParamLimits

0x21eb,	// (0x00048f01) cell_myfav_contact_pane_g3

0x1998,	// (0x000486ae) cell_myfav_contact_pane_g4_ParamLimits

0x1998,	// (0x000486ae) cell_myfav_contact_pane_g4

0x21f8,	// (0x00048f0e) cell_myfav_contact_pane_g5_ParamLimits

0x21f8,	// (0x00048f0e) cell_myfav_contact_pane_g5

0x0004,

0xf9b8,	// (0x000566ce) cell_myfav_contact_pane_g_ParamLimits

0xf9b8,	// (0x000566ce) cell_myfav_contact_pane_g

0xa912,	// (0x00051628) main_myfav_hc_pane_g3_ParamLimits

0xa912,	// (0x00051628) main_myfav_hc_pane_g3

0x514c,	// (0x0004be62) popup_adpt_find_window

0xa96b,	// (0x00051681) afind_page_pane_ParamLimits

0xa96b,	// (0x00051681) afind_page_pane

0xa978,	// (0x0005168e) aid_size_cell_afind_ParamLimits

0xa978,	// (0x0005168e) aid_size_cell_afind

0xa992,	// (0x000516a8) bg_popup_sub_pane_cp09_ParamLimits

0xa992,	// (0x000516a8) bg_popup_sub_pane_cp09

0xa99f,	// (0x000516b5) find_pane_cp01_ParamLimits

0xa99f,	// (0x000516b5) find_pane_cp01

0x2204,	// (0x00048f1a) grid_afind_control_pane_ParamLimits

0x2204,	// (0x00048f1a) grid_afind_control_pane

0xa9ac,	// (0x000516c2) grid_afind_pane_ParamLimits

0xa9ac,	// (0x000516c2) grid_afind_pane

0xa9c8,	// (0x000516de) cell_afind_pane_ParamLimits

0xa9c8,	// (0x000516de) cell_afind_pane

0x167f,	// (0x00048395) afind_page_pane_g1

0xaa0e,	// (0x00051724) afind_page_pane_g2

0xaa17,	// (0x0005172d) afind_page_pane_g3

0x0002,

0xf9c3,	// (0x000566d9) afind_page_pane_g

0xaa20,	// (0x00051736) afind_page_pane_t1

0x2218,	// (0x00048f2e) cell_afind_grid_control_pane_ParamLimits

0x2218,	// (0x00048f2e) cell_afind_grid_control_pane

0x1fc3,	// (0x00048cd9) bg_button_pane_cp69_ParamLimits

0x1fc3,	// (0x00048cd9) bg_button_pane_cp69

0xaa40,	// (0x00051756) cell_afind_pane_g1_ParamLimits

0xaa40,	// (0x00051756) cell_afind_pane_g1

0xaa4d,	// (0x00051763) cell_afind_pane_t1_ParamLimits

0xaa4d,	// (0x00051763) cell_afind_pane_t1

0xd7ca,	// (0x000544e0) bg_button_pane_cp72

0x2227,	// (0x00048f3d) cell_afind_grid_control_pane_g1

0x8105,	// (0x0004ee1b) aid_image_placing_area_ParamLimits

0x8105,	// (0x0004ee1b) aid_image_placing_area

0x1c91,	// (0x000489a7) field_vitu_entry_pane_g1_ParamLimits

0x1c91,	// (0x000489a7) field_vitu_entry_pane_g1

0x1c9d,	// (0x000489b3) field_vitu_entry_pane_g2_ParamLimits

0x1c9d,	// (0x000489b3) field_vitu_entry_pane_g2

0x0001,

0xf87d,	// (0x00056593) field_vitu_entry_pane_g_ParamLimits

0xf87d,	// (0x00056593) field_vitu_entry_pane_g

0x9beb,	// (0x00050901) cell_vitu_itu_pane_g1_ParamLimits

0x9c2d,	// (0x00050943) cell_vitu_itu_pane_t3_ParamLimits

0x9c2d,	// (0x00050943) cell_vitu_itu_pane_t3

0x1f73,	// (0x00048c89) mp4_progress_pane_t1_ParamLimits

0x1f8c,	// (0x00048ca2) mp4_progress_pane_t2_ParamLimits

0xf912,	// (0x00056628) mp4_progress_pane_t_ParamLimits

0x1fa5,	// (0x00048cbb) mup_progress_pane_cp04_ParamLimits

0xa955,	// (0x0005166b) main_myfav_hc_pane_t5_ParamLimits

0xa955,	// (0x0005166b) main_myfav_hc_pane_t5

0x4fd7,	// (0x0004bced) aid_zoom_text_primary

0x514c,	// (0x0004be62) popup_adpt_find_window_ParamLimits

0xf115,	// (0x00055e2b) main_cam_set_pane

0xa3d0,	// (0x000510e6) cam4_zoom_pane_ParamLimits

0xa3d0,	// (0x000510e6) cam4_zoom_pane

0xaa5f,	// (0x00051775) main_cam_set_pane_g1_ParamLimits

0xaa5f,	// (0x00051775) main_cam_set_pane_g1

0xaa6d,	// (0x00051783) main_cam_set_pane_g2_ParamLimits

0xaa6d,	// (0x00051783) main_cam_set_pane_g2

0x0001,

0xf9ca,	// (0x000566e0) main_cam_set_pane_g_ParamLimits

0xf9ca,	// (0x000566e0) main_cam_set_pane_g

0xaa79,	// (0x0005178f) main_cam_set_pane_t1_ParamLimits

0xaa79,	// (0x0005178f) main_cam_set_pane_t1

0xaa95,	// (0x000517ab) main_cset_listscroll_pane_ParamLimits

0xaa95,	// (0x000517ab) main_cset_listscroll_pane

0xaac2,	// (0x000517d8) main_cset_slider_pane_ParamLimits

0xaac2,	// (0x000517d8) main_cset_slider_pane

0x2238,	// (0x00048f4e) main_cset_list_pane_ParamLimits

0x2238,	// (0x00048f4e) main_cset_list_pane

0x2248,	// (0x00048f5e) scroll_pane_cp028

0xaae1,	// (0x000517f7) aid_area_touch_slider

0xaafd,	// (0x00051813) cset_slider_pane

0xab27,	// (0x0005183d) main_cset_slider_pane_g1

0xab3c,	// (0x00051852) main_cset_slider_pane_g2

0x0011,

0xf9cf,	// (0x000566e5) main_cset_slider_pane_g

0x2281,	// (0x00048f97) main_cset_slider_pane_t1

0xabfe,	// (0x00051914) main_cset_slider_pane_t2

0xac18,	// (0x0005192e) main_cset_slider_pane_t3

0xac32,	// (0x00051948) main_cset_slider_pane_t4

0xac4c,	// (0x00051962) main_cset_slider_pane_t5

0xac6a,	// (0x00051980) main_cset_slider_pane_t6

0xac81,	// (0x00051997) main_cset_slider_pane_t7

0x000e,

0xf9f4,	// (0x0005670a) main_cset_slider_pane_t

0xad8d,	// (0x00051aa3) cset_list_set_pane_ParamLimits

0xad8d,	// (0x00051aa3) cset_list_set_pane

0xada3,	// (0x00051ab9) aid_position_infowindow_above

0xadab,	// (0x00051ac1) aid_position_infowindow_below

0x2321,	// (0x00049037) cset_list_set_pane_g1_ParamLimits

0x2321,	// (0x00049037) cset_list_set_pane_g1

0x232d,	// (0x00049043) cset_list_set_pane_g3_ParamLimits

0x232d,	// (0x00049043) cset_list_set_pane_g3

0x0001,

0xfa13,	// (0x00056729) cset_list_set_pane_g_ParamLimits

0xfa13,	// (0x00056729) cset_list_set_pane_g

0xadb3,	// (0x00051ac9) cset_list_set_pane_t1_ParamLimits

0xadb3,	// (0x00051ac9) cset_list_set_pane_t1

0xf115,	// (0x00055e2b) list_highlight_pane_cp021_ParamLimits

0xf115,	// (0x00055e2b) list_highlight_pane_cp021

0xe1f8,	// (0x00054f0e) cset_slider_pane_g1

0xe20a,	// (0x00054f20) cset_slider_pane_g2

0xe201,	// (0x00054f17) cset_slider_pane_g3

0x0002,

0xfa18,	// (0x0005672e) cset_slider_pane_g

0xadc8,	// (0x00051ade) aid_area_touch_cam4_zoom

0xadd0,	// (0x00051ae6) cam4_zoom_cont_pane

0xadd8,	// (0x00051aee) cam4_zoom_pane_g1

0xade0,	// (0x00051af6) cam4_zoom_pane_g2

0xade8,	// (0x00051afe) cam4_zoom_pane_g3

0x0002,

0xfa1f,	// (0x00056735) cam4_zoom_pane_g

0xadf0,	// (0x00051b06) cam4_zoom_cont_pane_g1

0xadf9,	// (0x00051b0f) cam4_zoom_cont_pane_g2

0xae02,	// (0x00051b18) cam4_zoom_cont_pane_g3

0x0002,

0xfa26,	// (0x0005673c) cam4_zoom_cont_pane_g

0xa2c9,	// (0x00050fdf) call4_image_pane_ParamLimits

0xa2c9,	// (0x00050fdf) call4_image_pane

0x1fcf,	// (0x00048ce5) call4_windows_conf_pane_ParamLimits

0x2010,	// (0x00048d26) popup_call4_audio_in_window_ParamLimits

0x2010,	// (0x00048d26) popup_call4_audio_in_window

0x4f85,	// (0x0004bc9b) bg_popup_call2_act_pane_cp02

0x2086,	// (0x00048d9c) call4_list_conf_pane

0x167f,	// (0x00048395) call4_image_pane_g1

0x167f,	// (0x00048395) call4_image_pane_g2

0x0001,

0xf743,	// (0x00056459) call4_image_pane_g

0x2357,	// (0x0004906d) list_single_graphic_popup_conf4_pane_ParamLimits

0x2357,	// (0x0004906d) list_single_graphic_popup_conf4_pane

0x4f85,	// (0x0004bc9b) list_highlight_pane_cp022

0x236a,	// (0x00049080) list_single_graphic_popup_conf4_pane_g1

0xded7,	// (0x00054bed) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xfa2d,	// (0x00056743) list_single_graphic_popup_conf4_pane_g

0x2372,	// (0x00049088) list_single_graphic_popup_conf4_pane_t1

0x670c,	// (0x0004d422) popup_vtel_slider_window_ParamLimits

0x670c,	// (0x0004d422) popup_vtel_slider_window

0x1fb1,	// (0x00048cc7) dialer2_ne_pane_t2_ParamLimits

0x1fb1,	// (0x00048cc7) dialer2_ne_pane_t2

0x0001,

0xf917,	// (0x0005662d) dialer2_ne_pane_t_ParamLimits

0xf917,	// (0x0005662d) dialer2_ne_pane_t

0xf115,	// (0x00055e2b) bg_popup_sub_pane_cp010_ParamLimits

0xf115,	// (0x00055e2b) bg_popup_sub_pane_cp010

0xae0b,	// (0x00051b21) popup_vtel_slider_window_g1_ParamLimits

0xae0b,	// (0x00051b21) popup_vtel_slider_window_g1

0xae17,	// (0x00051b2d) popup_vtel_slider_window_g2_ParamLimits

0xae17,	// (0x00051b2d) popup_vtel_slider_window_g2

0x0003,

0xfa32,	// (0x00056748) popup_vtel_slider_window_g_ParamLimits

0xfa32,	// (0x00056748) popup_vtel_slider_window_g

0xae5f,	// (0x00051b75) vtel_slider_pane_ParamLimits

0xae5f,	// (0x00051b75) vtel_slider_pane

0xae6e,	// (0x00051b84) vtel_slider_pane_g1_ParamLimits

0xae6e,	// (0x00051b84) vtel_slider_pane_g1

0xae7b,	// (0x00051b91) vtel_slider_pane_g2_ParamLimits

0xae7b,	// (0x00051b91) vtel_slider_pane_g2

0xae88,	// (0x00051b9e) vtel_slider_pane_g3_ParamLimits

0xae88,	// (0x00051b9e) vtel_slider_pane_g3

0xae6e,	// (0x00051b84) vtel_slider_pane_g4_ParamLimits

0xae6e,	// (0x00051b84) vtel_slider_pane_g4

0xae95,	// (0x00051bab) vtel_slider_pane_g5_ParamLimits

0xae95,	// (0x00051bab) vtel_slider_pane_g5

0x0004,

0xfa3b,	// (0x00056751) vtel_slider_pane_g_ParamLimits

0xfa3b,	// (0x00056751) vtel_slider_pane_g

0x4f85,	// (0x0004bc9b) main_gallery2_pane

0xa60b,	// (0x00051321) aid_size_row_itut2_dropdow_list_ParamLimits

0xa60b,	// (0x00051321) aid_size_row_itut2_dropdow_list

0xa679,	// (0x0005138f) grid_vitu2_function_top_pane_ParamLimits

0xa679,	// (0x0005138f) grid_vitu2_function_top_pane

0xa6cf,	// (0x000513e5) popup_vitu2_dropdown_list_window_ParamLimits

0xa6cf,	// (0x000513e5) popup_vitu2_dropdown_list_window

0xa6ef,	// (0x00051405) popup_vitu2_match_list_window

0xaea2,	// (0x00051bb8) cell_vitu2_function_top_pane_ParamLimits

0xaea2,	// (0x00051bb8) cell_vitu2_function_top_pane

0xaec2,	// (0x00051bd8) cell_vitu2_function_top_pane_cp01_ParamLimits

0xaec2,	// (0x00051bd8) cell_vitu2_function_top_pane_cp01

0xaee0,	// (0x00051bf6) cell_vitu2_function_top_wide_pane_ParamLimits

0xaee0,	// (0x00051bf6) cell_vitu2_function_top_wide_pane

0xa537,	// (0x0005124d) bg_button_pane_cp012

0xaefe,	// (0x00051c14) cell_vitu2_function_top_pane_g1

0xaf0d,	// (0x00051c23) bg_button_pane_cp013_ParamLimits

0xaf0d,	// (0x00051c23) bg_button_pane_cp013

0xaf29,	// (0x00051c3f) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0xaf29,	// (0x00051c3f) cell_vitu2_function_top_wide_pane_g1

0xaf41,	// (0x00051c57) bg_popup_sub_pane_cp20

0xaf4f,	// (0x00051c65) list_vitu2_match_list_pane

0x212e,	// (0x00048e44) bg_popup_sub_pane_cp20_g1

0x2136,	// (0x00048e4c) bg_popup_sub_pane_cp20_g2

0xd9d7,	// (0x000546ed) bg_popup_sub_pane_cp20_g3

0x213e,	// (0x00048e54) bg_popup_sub_pane_cp20_g4

0xd9b7,	// (0x000546cd) bg_popup_sub_pane_cp20_g5

0x238e,	// (0x000490a4) bg_popup_sub_pane_cp20_g6

0x214e,	// (0x00048e64) bg_popup_sub_pane_cp20_g7

0x2156,	// (0x00048e6c) bg_popup_sub_pane_cp20_g8

0x215e,	// (0x00048e74) bg_popup_sub_pane_cp20_g9

0x0008,

0xfa46,	// (0x0005675c) bg_popup_sub_pane_cp20_g

0xaf67,	// (0x00051c7d) list_vitu2_match_list_item_pane_ParamLimits

0xaf67,	// (0x00051c7d) list_vitu2_match_list_item_pane

0xaf79,	// (0x00051c8f) list_vitu2_match_list_item_pane_t1

0x5bee,	// (0x0004c904) bg_popup_sub_pane_cp21

0xafb6,	// (0x00051ccc) grid_vitu2_dropdown_list_pane

0xafbe,	// (0x00051cd4) cell_vitu2_dropdown_list_char_pane_ParamLimits

0xafbe,	// (0x00051cd4) cell_vitu2_dropdown_list_char_pane

0xafdf,	// (0x00051cf5) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0xafdf,	// (0x00051cf5) cell_vitu2_dropdown_list_ctrl_pane

0x23c0,	// (0x000490d6) cell_vitu2_dropdown_list_char_pane_g1

0x23b7,	// (0x000490cd) cell_vitu2_dropdown_list_char_pane_g2

0x23ae,	// (0x000490c4) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xfa63,	// (0x00056779) cell_vitu2_dropdown_list_char_pane_g

0xb00b,	// (0x00051d21) cell_vitu2_dropdown_list_char_pane_t1

0xb019,	// (0x00051d2f) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0xb019,	// (0x00051d2f) cell_vitu2_dropdown_list_ctrl_pane_g1

0xb029,	// (0x00051d3f) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0xb029,	// (0x00051d3f) cell_vitu2_dropdown_list_ctrl_pane_g2

0xb03a,	// (0x00051d50) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0xb03a,	// (0x00051d50) cell_vitu2_dropdown_list_ctrl_pane_g3

0xb04a,	// (0x00051d60) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0xb04a,	// (0x00051d60) cell_vitu2_dropdown_list_ctrl_pane_g4

0xa44c,	// (0x00051162) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0xa44c,	// (0x00051162) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa6a,	// (0x00056780) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa6a,	// (0x00056780) cell_vitu2_dropdown_list_ctrl_pane_g

0xb066,	// (0x00051d7c) aid_size_cell_gallery2_ParamLimits

0xb066,	// (0x00051d7c) aid_size_cell_gallery2

0xb074,	// (0x00051d8a) grid_gallery2_pane_ParamLimits

0xb074,	// (0x00051d8a) grid_gallery2_pane

0xb083,	// (0x00051d99) scroll_pane_cp029_ParamLimits

0xb083,	// (0x00051d99) scroll_pane_cp029

0xb08f,	// (0x00051da5) cell_gallery2_pane_ParamLimits

0xb08f,	// (0x00051da5) cell_gallery2_pane

0x23c9,	// (0x000490df) cell_gallery2_pane_g2

0x39ca,	// (0x0004a6e0) cell_gallery2_pane_g3

0x23d3,	// (0x000490e9) cell_gallery2_pane_g4

0x23db,	// (0x000490f1) cell_gallery2_pane_g5

0xe0c2,	// (0x00054dd8) grid_highlight_pane_cp10

0xa6ef,	// (0x00051405) popup_vitu2_match_list_window_ParamLimits

0xa703,	// (0x00051419) popup_vitu2_query_window_ParamLimits

0xa703,	// (0x00051419) popup_vitu2_query_window

0x5bee,	// (0x0004c904) bg_vitu2_candi_button_pane

0x23c0,	// (0x000490d6) cell_vitu2_dropdown_list_char_pane_g1_copy1

0x23b7,	// (0x000490cd) cell_vitu2_dropdown_list_char_pane_g2_copy1

0x23ae,	// (0x000490c4) cell_vitu2_dropdown_list_char_pane_g2_copy2

0xb0bd,	// (0x00051dd3) bg_button_pane_cp015

0xb0c7,	// (0x00051ddd) bg_button_pane_cp016

0xb0d1,	// (0x00051de7) bg_button_pane_cp017

0xf115,	// (0x00055e2b) bg_popup_sub_pane_cp22

0x23e3,	// (0x000490f9) popup_vitu2_query_window_g1

0xb0f9,	// (0x00051e0f) popup_vitu2_query_window_g2

0x0001,

0xfa75,	// (0x0005678b) popup_vitu2_query_window_g

0xb107,	// (0x00051e1d) popup_vitu2_query_window_t1_ParamLimits

0xb107,	// (0x00051e1d) popup_vitu2_query_window_t1

0xb12f,	// (0x00051e45) popup_vitu2_query_window_t2_ParamLimits

0xb12f,	// (0x00051e45) popup_vitu2_query_window_t2

0xb141,	// (0x00051e57) popup_vitu2_query_window_t3_ParamLimits

0xb141,	// (0x00051e57) popup_vitu2_query_window_t3

0xb169,	// (0x00051e7f) popup_vitu2_query_window_t4_ParamLimits

0xb169,	// (0x00051e7f) popup_vitu2_query_window_t4

0xb17d,	// (0x00051e93) popup_vitu2_query_window_t5_ParamLimits

0xb17d,	// (0x00051e93) popup_vitu2_query_window_t5

0x0004,

0xfa7a,	// (0x00056790) popup_vitu2_query_window_t_ParamLimits

0xfa7a,	// (0x00056790) popup_vitu2_query_window_t

0x2230,	// (0x00048f46) main_cset_text_pane

0xaae1,	// (0x000517f7) aid_area_touch_slider_ParamLimits

0xaafd,	// (0x00051813) cset_slider_pane_ParamLimits

0xab27,	// (0x0005183d) main_cset_slider_pane_g1_ParamLimits

0xab3c,	// (0x00051852) main_cset_slider_pane_g2_ParamLimits

0x2251,	// (0x00048f67) main_cset_slider_pane_g3_ParamLimits

0x2251,	// (0x00048f67) main_cset_slider_pane_g3

0xab51,	// (0x00051867) main_cset_slider_pane_g4_ParamLimits

0xab51,	// (0x00051867) main_cset_slider_pane_g4

0xab60,	// (0x00051876) main_cset_slider_pane_g5_ParamLimits

0xab60,	// (0x00051876) main_cset_slider_pane_g5

0xab6e,	// (0x00051884) main_cset_slider_pane_g6_ParamLimits

0xab6e,	// (0x00051884) main_cset_slider_pane_g6

0xf9cf,	// (0x000566e5) main_cset_slider_pane_g_ParamLimits

0x2281,	// (0x00048f97) main_cset_slider_pane_t1_ParamLimits

0xabfe,	// (0x00051914) main_cset_slider_pane_t2_ParamLimits

0xac18,	// (0x0005192e) main_cset_slider_pane_t3_ParamLimits

0xac32,	// (0x00051948) main_cset_slider_pane_t4_ParamLimits

0xac4c,	// (0x00051962) main_cset_slider_pane_t5_ParamLimits

0xac6a,	// (0x00051980) main_cset_slider_pane_t6_ParamLimits

0xac81,	// (0x00051997) main_cset_slider_pane_t7_ParamLimits

0xacaf,	// (0x000519c5) main_cset_slider_pane_t8_ParamLimits

0xacaf,	// (0x000519c5) main_cset_slider_pane_t8

0xacd7,	// (0x000519ed) main_cset_slider_pane_t9_ParamLimits

0xacd7,	// (0x000519ed) main_cset_slider_pane_t9

0xacff,	// (0x00051a15) main_cset_slider_pane_t10_ParamLimits

0xacff,	// (0x00051a15) main_cset_slider_pane_t10

0xad27,	// (0x00051a3d) main_cset_slider_pane_t11_ParamLimits

0xad27,	// (0x00051a3d) main_cset_slider_pane_t11

0xad51,	// (0x00051a67) main_cset_slider_pane_t12_ParamLimits

0xad51,	// (0x00051a67) main_cset_slider_pane_t12

0xad6e,	// (0x00051a84) main_cset_slider_pane_t13_ParamLimits

0xad6e,	// (0x00051a84) main_cset_slider_pane_t13

0xf9f4,	// (0x0005670a) main_cset_slider_pane_t_ParamLimits

0x4f85,	// (0x0004bc9b) bg_popup_sub_pane_cp011

0x23ef,	// (0x00049105) main_cset_text_pane_g1

0x23f7,	// (0x0004910d) main_cset_text_pane_t1

0x2405,	// (0x0004911b) main_cset_text_pane_t2

0x2413,	// (0x00049129) main_cset_text_pane_t3

0x2421,	// (0x00049137) main_cset_text_pane_t4

0x242f,	// (0x00049145) main_cset_text_pane_t5

0x243d,	// (0x00049153) main_cset_text_pane_t6

0x244b,	// (0x00049161) main_cset_text_pane_t7

0x0006,

0xfa85,	// (0x0005679b) main_cset_text_pane_t

0x4f85,	// (0x0004bc9b) main_cam4_burst_pane

0x4f85,	// (0x0004bc9b) main_cam5_pane

0xaa2e,	// (0x00051744) bg_button_pane_cp019

0xaa37,	// (0x0005174d) bg_button_pane_cp020

0x225d,	// (0x00048f73) main_cset_slider_pane_g7_ParamLimits

0x225d,	// (0x00048f73) main_cset_slider_pane_g7

0x2269,	// (0x00048f7f) main_cset_slider_pane_g8_ParamLimits

0x2269,	// (0x00048f7f) main_cset_slider_pane_g8

0xab82,	// (0x00051898) main_cset_slider_pane_g9_ParamLimits

0xab82,	// (0x00051898) main_cset_slider_pane_g9

0xab8e,	// (0x000518a4) main_cset_slider_pane_g10_ParamLimits

0xab8e,	// (0x000518a4) main_cset_slider_pane_g10

0xab9a,	// (0x000518b0) main_cset_slider_pane_g11_ParamLimits

0xab9a,	// (0x000518b0) main_cset_slider_pane_g11

0xaba6,	// (0x000518bc) main_cset_slider_pane_g12_ParamLimits

0xaba6,	// (0x000518bc) main_cset_slider_pane_g12

0xabb2,	// (0x000518c8) main_cset_slider_pane_g13_ParamLimits

0xabb2,	// (0x000518c8) main_cset_slider_pane_g13

0xabbe,	// (0x000518d4) main_cset_slider_pane_g14_ParamLimits

0xabbe,	// (0x000518d4) main_cset_slider_pane_g14

0xabca,	// (0x000518e0) main_cset_slider_pane_g15_ParamLimits

0xabca,	// (0x000518e0) main_cset_slider_pane_g15

0x22af,	// (0x00048fc5) main_cset_slider_pane_t14_ParamLimits

0x22af,	// (0x00048fc5) main_cset_slider_pane_t14

0x22e8,	// (0x00048ffe) main_cset_slider_pane_t15_ParamLimits

0x22e8,	// (0x00048ffe) main_cset_slider_pane_t15

0xb191,	// (0x00051ea7) aid_cam4_burst_size_cell_ParamLimits

0xb191,	// (0x00051ea7) aid_cam4_burst_size_cell

0xb1ad,	// (0x00051ec3) grid_cam4_burst_pane_ParamLimits

0xb1ad,	// (0x00051ec3) grid_cam4_burst_pane

0xb1dd,	// (0x00051ef3) linegrid_cam4_burst_pane_ParamLimits

0xb1dd,	// (0x00051ef3) linegrid_cam4_burst_pane

0xb1fd,	// (0x00051f13) scroll_pane_cp30_ParamLimits

0xb1fd,	// (0x00051f13) scroll_pane_cp30

0xb209,	// (0x00051f1f) cell_cam4_burst_pane_ParamLimits

0xb209,	// (0x00051f1f) cell_cam4_burst_pane

0x2459,	// (0x0004916f) linegrid_cam4_burst_pane_g1_ParamLimits

0x2459,	// (0x0004916f) linegrid_cam4_burst_pane_g1

0xb245,	// (0x00051f5b) linegrid_cam4_burst_pane_g2_ParamLimits

0xb245,	// (0x00051f5b) linegrid_cam4_burst_pane_g2

0x2466,	// (0x0004917c) linegrid_cam4_burst_pane_g3_ParamLimits

0x2466,	// (0x0004917c) linegrid_cam4_burst_pane_g3

0x0002,

0xfa94,	// (0x000567aa) linegrid_cam4_burst_pane_g_ParamLimits

0xfa94,	// (0x000567aa) linegrid_cam4_burst_pane_g

0xb256,	// (0x00051f6c) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0xb256,	// (0x00051f6c) linegrid_cam4_burst_pane_g3_copy1

0x2473,	// (0x00049189) linegrid_cam4_burst_pane_g4_ParamLimits

0x2473,	// (0x00049189) linegrid_cam4_burst_pane_g4

0xb270,	// (0x00051f86) linegrid_cam4_burst_pane_g5_ParamLimits

0xb270,	// (0x00051f86) linegrid_cam4_burst_pane_g5

0xb281,	// (0x00051f97) linegrid_cam4_burst_pane_g6_ParamLimits

0xb281,	// (0x00051f97) linegrid_cam4_burst_pane_g6

0x2480,	// (0x00049196) linegrid_cam4_burst_pane_g7_ParamLimits

0x2480,	// (0x00049196) linegrid_cam4_burst_pane_g7

0xb292,	// (0x00051fa8) cell_cam4_burst_pane_g1

0x2499,	// (0x000491af) main_cam5_pane_t1_ParamLimits

0x2499,	// (0x000491af) main_cam5_pane_t1

0x24ab,	// (0x000491c1) main_cam5_pane_t2_ParamLimits

0x24ab,	// (0x000491c1) main_cam5_pane_t2

0x24bd,	// (0x000491d3) main_cam5_pane_t3_ParamLimits

0x24bd,	// (0x000491d3) main_cam5_pane_t3

0x24cf,	// (0x000491e5) main_cam5_pane_t4_ParamLimits

0x24cf,	// (0x000491e5) main_cam5_pane_t4

0x24e7,	// (0x000491fd) main_cam5_pane_t5_ParamLimits

0x24e7,	// (0x000491fd) main_cam5_pane_t5

0x24fb,	// (0x00049211) main_cam5_pane_t6_ParamLimits

0x24fb,	// (0x00049211) main_cam5_pane_t6

0x250f,	// (0x00049225) main_cam5_pane_t7_ParamLimits

0x250f,	// (0x00049225) main_cam5_pane_t7

0x2521,	// (0x00049237) main_cam5_pane_t8_ParamLimits

0x2521,	// (0x00049237) main_cam5_pane_t8

0x253d,	// (0x00049253) main_cam5_pane_t9_ParamLimits

0x253d,	// (0x00049253) main_cam5_pane_t9

0x254f,	// (0x00049265) main_cam5_pane_t10_ParamLimits

0x254f,	// (0x00049265) main_cam5_pane_t10

0x2561,	// (0x00049277) main_cam5_pane_t11_ParamLimits

0x2561,	// (0x00049277) main_cam5_pane_t11

0x2573,	// (0x00049289) main_cam5_pane_t12_ParamLimits

0x2573,	// (0x00049289) main_cam5_pane_t12

0x2588,	// (0x0004929e) main_cam5_pane_t13_ParamLimits

0x2588,	// (0x0004929e) main_cam5_pane_t13

0x000c,

0xfaa0,	// (0x000567b6) main_cam5_pane_t_ParamLimits

0xfaa0,	// (0x000567b6) main_cam5_pane_t

0x5203,	// (0x0004bf19) popup_scut_keymap_window_ParamLimits

0x5203,	// (0x0004bf19) popup_scut_keymap_window

0xb2a5,	// (0x00051fbb) aid_size_cell_brow_shortcut

0xe0c2,	// (0x00054dd8) bg_popup_window_pane_cp010

0xb2b1,	// (0x00051fc7) grid_scut_pane

0xb2bd,	// (0x00051fd3) cell_scut_pane_ParamLimits

0xb2bd,	// (0x00051fd3) cell_scut_pane

0xb2d4,	// (0x00051fea) cell_scut_pane_g1

0x25a5,	// (0x000492bb) cell_scut_pane_t1

0x25b4,	// (0x000492ca) cell_scut_pane_t2

0xb2dd,	// (0x00051ff3) cell_scut_pane_t3

0x0002,

0xfabb,	// (0x000567d1) cell_scut_pane_t

0x9289,	// (0x0004ff9f) main_mup3_pane_g8_ParamLimits

0x9289,	// (0x0004ff9f) main_mup3_pane_g8

0xa619,	// (0x0005132f) area_vitu2_query_pane_ParamLimits

0xa619,	// (0x0005132f) area_vitu2_query_pane

0xb0db,	// (0x00051df1) input_focus_pane_cp08

0x25c3,	// (0x000492d9) area_vitu2_query_pane_g1

0xb2eb,	// (0x00052001) area_vitu2_query_pane_g2

0x0001,

0xfac2,	// (0x000567d8) area_vitu2_query_pane_g

0xb2fc,	// (0x00052012) area_vitu2_query_pane_t1_ParamLimits

0xb2fc,	// (0x00052012) area_vitu2_query_pane_t1

0xb310,	// (0x00052026) area_vitu2_query_pane_t2_ParamLimits

0xb310,	// (0x00052026) area_vitu2_query_pane_t2

0xb324,	// (0x0005203a) area_vitu2_query_pane_t3_ParamLimits

0xb324,	// (0x0005203a) area_vitu2_query_pane_t3

0x25cf,	// (0x000492e5) area_vitu2_query_pane_t4_ParamLimits

0x25cf,	// (0x000492e5) area_vitu2_query_pane_t4

0x25f7,	// (0x0004930d) area_vitu2_query_pane_t5_ParamLimits

0x25f7,	// (0x0004930d) area_vitu2_query_pane_t5

0x261f,	// (0x00049335) area_vitu2_query_pane_t6_ParamLimits

0x261f,	// (0x00049335) area_vitu2_query_pane_t6

0x0006,

0xfac7,	// (0x000567dd) area_vitu2_query_pane_t_ParamLimits

0xfac7,	// (0x000567dd) area_vitu2_query_pane_t

0xb34c,	// (0x00052062) bg_button_pane_cp018

0xb35a,	// (0x00052070) bg_button_pane_cp021

0xb366,	// (0x0005207c) bg_button_pane_cp022

0xb377,	// (0x0005208d) input_focus_pane_cp09

0x772e,	// (0x0004e444) aid_size_touch_mv_arrow_left

0x7757,	// (0x0004e46d) aid_size_touch_mv_arrow_right

0xabe2,	// (0x000518f8) main_cset_slider_pane_g16_ParamLimits

0xabe2,	// (0x000518f8) main_cset_slider_pane_g16

0xabf0,	// (0x00051906) main_cset_slider_pane_g17_ParamLimits

0xabf0,	// (0x00051906) main_cset_slider_pane_g17

0xb292,	// (0x00051fa8) cell_cam4_burst_pane_g1_ParamLimits

0x4f85,	// (0x0004bc9b) compa_mode_pane

0xae23,	// (0x00051b39) popup_vtel_slider_window_g3_ParamLimits

0xae23,	// (0x00051b39) popup_vtel_slider_window_g3

0xae37,	// (0x00051b4d) popup_vtel_slider_window_g4_ParamLimits

0xae37,	// (0x00051b4d) popup_vtel_slider_window_g4

0xae4b,	// (0x00051b61) popup_vtel_slider_window_t1_ParamLimits

0xae4b,	// (0x00051b61) popup_vtel_slider_window_t1

0x4f85,	// (0x0004bc9b) main_cl_pane

0x11a1,	// (0x00047eb7) popup_imed_adjust2_window_ParamLimits

0x1179,	// (0x00047e8f) bg_tb_trans_pane_cp05_ParamLimits

0x1bc6,	// (0x000488dc) popup_imed_adjust2_window_g1_ParamLimits

0x1bd5,	// (0x000488eb) popup_imed_adjust2_window_g2_ParamLimits

0x1bd5,	// (0x000488eb) popup_imed_adjust2_window_g2

0x1be1,	// (0x000488f7) popup_imed_adjust2_window_g3_ParamLimits

0x1be1,	// (0x000488f7) popup_imed_adjust2_window_g3

0x0002,

0xf841,	// (0x00056557) popup_imed_adjust2_window_g_ParamLimits

0xf841,	// (0x00056557) popup_imed_adjust2_window_g

0x1bed,	// (0x00048903) popup_imed_adjust2_window_t1_ParamLimits

0x1c05,	// (0x0004891b) slider_imed_adjust_pane_ParamLimits

0x1c19,	// (0x0004892f) slider_imed_adjust_pane_g1_ParamLimits

0x1c29,	// (0x0004893f) slider_imed_adjust_pane_g2_ParamLimits

0x1c39,	// (0x0004894f) slider_imed_adjust_pane_g3_ParamLimits

0x1c4a,	// (0x00048960) slider_imed_adjust_pane_g4_ParamLimits

0xf848,	// (0x0005655e) slider_imed_adjust_pane_g_ParamLimits

0xa385,	// (0x0005109b) aid_touch_area_cam4_ParamLimits

0xa385,	// (0x0005109b) aid_touch_area_cam4

0xa395,	// (0x000510ab) battery_pane_cp01

0xa41c,	// (0x00051132) main_camera4_pane_g6_ParamLimits

0xa41c,	// (0x00051132) main_camera4_pane_g6

0xa43a,	// (0x00051150) main_camera4_pane_t2_ParamLimits

0xa43a,	// (0x00051150) main_camera4_pane_t2

0x0001,

0xf94b,	// (0x00056661) main_camera4_pane_t_ParamLimits

0xf94b,	// (0x00056661) main_camera4_pane_t

0xa4a9,	// (0x000511bf) aid_touch_area_vid4_ParamLimits

0xa4a9,	// (0x000511bf) aid_touch_area_vid4

0xa4e9,	// (0x000511ff) main_video4_pane_g5_ParamLimits

0xa4e9,	// (0x000511ff) main_video4_pane_g5

0xa50b,	// (0x00051221) vid4_progress_pane_ParamLimits

0xa50b,	// (0x00051221) vid4_progress_pane

0x2275,	// (0x00048f8b) main_cset_slider_pane_g18_ParamLimits

0x2275,	// (0x00048f8b) main_cset_slider_pane_g18

0x248d,	// (0x000491a3) cell_cam4_burst_pane_g2_ParamLimits

0x248d,	// (0x000491a3) cell_cam4_burst_pane_g2

0x0001,

0xfa9b,	// (0x000567b1) cell_cam4_burst_pane_g_ParamLimits

0xfa9b,	// (0x000567b1) cell_cam4_burst_pane_g

0xb388,	// (0x0005209e) bg_cl_pane_ParamLimits

0xb388,	// (0x0005209e) bg_cl_pane

0xb394,	// (0x000520aa) cl_header_pane_ParamLimits

0xb394,	// (0x000520aa) cl_header_pane

0xb3a0,	// (0x000520b6) cl_listscroll_pane_ParamLimits

0xb3a0,	// (0x000520b6) cl_listscroll_pane

0x266b,	// (0x00049381) bg_cl_pane_g1

0x2673,	// (0x00049389) bg_cl_pane_g2

0x267b,	// (0x00049391) bg_cl_pane_g3

0x2683,	// (0x00049399) bg_cl_pane_g4

0x268b,	// (0x000493a1) bg_cl_pane_g5

0x2693,	// (0x000493a9) bg_cl_pane_g6

0x269b,	// (0x000493b1) bg_cl_pane_g7

0x26a3,	// (0x000493b9) bg_cl_pane_g8

0x26ab,	// (0x000493c1) bg_cl_pane_g9

0x0008,

0xfad6,	// (0x000567ec) bg_cl_pane_g

0xb3ac,	// (0x000520c2) aid_height_cl_leading_ParamLimits

0xb3ac,	// (0x000520c2) aid_height_cl_leading

0xb3b8,	// (0x000520ce) aid_height_cl_text_ParamLimits

0xb3b8,	// (0x000520ce) aid_height_cl_text

0x20b2,	// (0x00048dc8) bg_cl_header_pane_ParamLimits

0x20b2,	// (0x00048dc8) bg_cl_header_pane

0xb3d0,	// (0x000520e6) cl_header_pane_g1_ParamLimits

0xb3d0,	// (0x000520e6) cl_header_pane_g1

0xb3dd,	// (0x000520f3) cl_header_pane_t1_ParamLimits

0xb3dd,	// (0x000520f3) cl_header_pane_t1

0x26b3,	// (0x000493c9) cl_list_pane

0x2248,	// (0x00048f5e) hc_scroll_pane_cp01

0xd9b7,	// (0x000546cd) bg_cl_header_pane_g1

0x212e,	// (0x00048e44) bg_cl_header_pane_g2

0xd9d7,	// (0x000546ed) bg_cl_header_pane_g3

0x213e,	// (0x00048e54) bg_cl_header_pane_g4

0x2136,	// (0x00048e4c) bg_cl_header_pane_g5

0x238e,	// (0x000490a4) bg_cl_header_pane_g6

0x2156,	// (0x00048e6c) bg_cl_header_pane_g7

0x215e,	// (0x00048e74) bg_cl_header_pane_g8

0x214e,	// (0x00048e64) bg_cl_header_pane_g9

0x0008,

0xfae9,	// (0x000567ff) bg_cl_header_pane_g

0xb3ef,	// (0x00052105) hc_cl_list_double_graphic_heading_pane_ParamLimits

0xb3ef,	// (0x00052105) hc_cl_list_double_graphic_heading_pane

0xb400,	// (0x00052116) hc_cl_list_single_graphic_pane_ParamLimits

0xb400,	// (0x00052116) hc_cl_list_single_graphic_pane

0xb419,	// (0x0005212f) hc_cl_list_single_graphic_pane_g1_ParamLimits

0xb419,	// (0x0005212f) hc_cl_list_single_graphic_pane_g1

0xb425,	// (0x0005213b) hc_cl_list_single_graphic_pane_g2_ParamLimits

0xb425,	// (0x0005213b) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfafc,	// (0x00056812) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfafc,	// (0x00056812) hc_cl_list_single_graphic_pane_g

0xb439,	// (0x0005214f) hc_cl_list_single_graphic_pane_t1_ParamLimits

0xb439,	// (0x0005214f) hc_cl_list_single_graphic_pane_t1

0xb419,	// (0x0005212f) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0xb419,	// (0x0005212f) hc_cl_list_double_graphic_heading_pane_g1

0xb44e,	// (0x00052164) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0xb44e,	// (0x00052164) hc_cl_list_double_graphic_heading_pane_g2

0xb462,	// (0x00052178) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0xb462,	// (0x00052178) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfb01,	// (0x00056817) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfb01,	// (0x00056817) hc_cl_list_double_graphic_heading_pane_g

0xb476,	// (0x0005218c) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0xb476,	// (0x0005218c) hc_cl_list_double_graphic_heading_pane_t1

0xb48b,	// (0x000521a1) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0xb48b,	// (0x000521a1) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfb08,	// (0x0005681e) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfb08,	// (0x0005681e) hc_cl_list_double_graphic_heading_pane_t

0xb4b2,	// (0x000521c8) vid4_progress_pane_g1

0xb4be,	// (0x000521d4) vid4_progress_pane_g2

0xb4ca,	// (0x000521e0) vid4_progress_pane_g3

0xb4d9,	// (0x000521ef) vid4_progress_pane_g4

0x0004,

0xfb0d,	// (0x00056823) vid4_progress_pane_g

0xb4f7,	// (0x0005220d) vid4_progress_pane_t1

0xb50d,	// (0x00052223) vid4_progress_pane_t2

0x0002,

0xfb18,	// (0x0005682e) vid4_progress_pane_t

0xb538,	// (0x0005224e) wait_bar_pane_cp07

0x1472,	// (0x00048188) blid_firmament_pane_ParamLimits

0x14b5,	// (0x000481cb) popup_blid_sat_info2_window_g1

0x14d9,	// (0x000481ef) popup_blid_sat_info2_window_t3

0x14e7,	// (0x000481fd) popup_blid_sat_info2_window_t4

0x14f5,	// (0x0004820b) popup_blid_sat_info2_window_t5

0x1503,	// (0x00048219) popup_blid_sat_info2_window_t6

0x1513,	// (0x00048229) popup_blid_sat_info2_window_t7

0x1521,	// (0x00048237) popup_blid_sat_info2_window_t8

0x152f,	// (0x00048245) popup_blid_sat_info2_window_t9

0x153d,	// (0x00048253) popup_blid_sat_info2_window_t10

0x15ff,	// (0x00048315) aid_firma_cardinal_ParamLimits

0x1613,	// (0x00048329) blid_firmament_pane_t1_ParamLimits

0x162a,	// (0x00048340) blid_firmament_pane_t2_ParamLimits

0x1641,	// (0x00048357) blid_firmament_pane_t3_ParamLimits

0x1658,	// (0x0004836e) blid_firmament_pane_t4_ParamLimits

0xf73a,	// (0x00056450) blid_firmament_pane_t_ParamLimits

0x166f,	// (0x00048385) blid_sat_info_pane_ParamLimits

0xf115,	// (0x00055e2b) main_cam_set_pane_ParamLimits

0x9a0e,	// (0x00050724) aid_size_cell_colour_35_ParamLimits

0x9a28,	// (0x0005073e) aid_size_cell_colour_112_ParamLimits

0x9a3f,	// (0x00050755) aid_size_cell_effect_ParamLimits

0xf115,	// (0x00055e2b) bg_tb_trans_pane_cp02_ParamLimits

0xf123,	// (0x00055e39) heading_imed_pane_ParamLimits

0x9a59,	// (0x0005076f) listscroll_imed_pane_ParamLimits

0xeae0,	// (0x000557f6) popup_call2_audio_first_window_g5_ParamLimits

0xeae0,	// (0x000557f6) popup_call2_audio_first_window_g5

0xa134,	// (0x00050e4a) aid_size_touch_image3_arrow_left_ParamLimits

0xa134,	// (0x00050e4a) aid_size_touch_image3_arrow_left

0xa14a,	// (0x00050e60) aid_size_touch_image3_arrow_right_ParamLimits

0xa14a,	// (0x00050e60) aid_size_touch_image3_arrow_right

0xb523,	// (0x00052239) vid4_progress_pane_t3

0x9cf6,	// (0x00050a0c) main_hwr_training_symbol_option_pane_ParamLimits

0x9cf6,	// (0x00050a0c) main_hwr_training_symbol_option_pane

0x1eb3,	// (0x00048bc9) popup_hwr_training_preview_window_ParamLimits

0x1eb3,	// (0x00048bc9) popup_hwr_training_preview_window

0x9d57,	// (0x00050a6d) hwr_training_navi_pane_g5_ParamLimits

0x9d57,	// (0x00050a6d) hwr_training_navi_pane_g5

0x211c,	// (0x00048e32) popup_char_count_window

0xaf41,	// (0x00051c57) bg_popup_sub_pane_cp20_ParamLimits

0xaf4f,	// (0x00051c65) list_vitu2_match_list_pane_ParamLimits

0xaf5b,	// (0x00051c71) vitu2_page_scroll_pane_ParamLimits

0xaf5b,	// (0x00051c71) vitu2_page_scroll_pane

0x2716,	// (0x0004942c) list_single_hwr_training_symbol_option_pane_ParamLimits

0x2716,	// (0x0004942c) list_single_hwr_training_symbol_option_pane

0x2729,	// (0x0004943f) list_single_hwr_training_symbol_option_pane_g1

0x2731,	// (0x00049447) list_single_hwr_training_symbol_option_pane_t1

0x273f,	// (0x00049455) bg_button_pane_cp023

0x2748,	// (0x0004945e) bg_button_pane_cp024

0xb548,	// (0x0005225e) vitu2_page_scroll_pane_g1

0xb550,	// (0x00052266) vitu2_page_scroll_pane_g2

0x0001,

0xfb1f,	// (0x00056835) vitu2_page_scroll_pane_g

0xb558,	// (0x0005226e) vitu2_page_scroll_pane_t1

0x277b,	// (0x00049491) popup_char_count_window_g1

0x2784,	// (0x0004949a) popup_char_count_window_g2

0x278d,	// (0x000494a3) popup_char_count_window_g3

0x0002,

0xfb24,	// (0x0005683a) popup_char_count_window_g

0x2796,	// (0x000494ac) popup_char_count_window_t1

0x4f85,	// (0x0004bc9b) main_vded2_pane

0x1bb2,	// (0x000488c8) aid_size_cell_imed_line

0x1bbc,	// (0x000488d2) grid_imed_line_width_pane

0xa56d,	// (0x00051283) vid4_indicators_pane_g4

0x27a4,	// (0x000494ba) cell_imed_line_width_pane_ParamLimits

0x27a4,	// (0x000494ba) cell_imed_line_width_pane

0x27b8,	// (0x000494ce) cell_imed_line_width_pane_g1

0x27c1,	// (0x000494d7) cell_imed_line_width_pane_g2

0x0001,

0xfb2b,	// (0x00056841) cell_imed_line_width_pane_g

0xb567,	// (0x0005227d) main_vded2_pane_g1_ParamLimits

0xb567,	// (0x0005227d) main_vded2_pane_g1

0xb574,	// (0x0005228a) main_vded2_pane_g2_ParamLimits

0xb574,	// (0x0005228a) main_vded2_pane_g2

0x0001,

0xfb30,	// (0x00056846) main_vded2_pane_g_ParamLimits

0xfb30,	// (0x00056846) main_vded2_pane_g

0xb582,	// (0x00052298) vded2_slider_pane_ParamLimits

0xb582,	// (0x00052298) vded2_slider_pane

0xb58f,	// (0x000522a5) aid_size_touch_vded2_end

0xb599,	// (0x000522af) aid_size_touch_vded2_playhead

0x27c9,	// (0x000494df) aid_size_touch_vded2_start

0x27d1,	// (0x000494e7) vded2_slider_bg_pane

0x27da,	// (0x000494f0) vded2_slider_pane_g1

0x27e3,	// (0x000494f9) vded2_slider_pane_g2

0xb5a1,	// (0x000522b7) vded2_slider_pane_g3

0x0002,

0xfb35,	// (0x0005684b) vded2_slider_pane_g

0x27eb,	// (0x00049501) vded2_slider_bg_pane_g1

0x27f4,	// (0x0004950a) vded2_slider_bg_pane_g2

0x27fd,	// (0x00049513) vded2_slider_bg_pane_g3

0x0002,

0xfb3c,	// (0x00056852) vded2_slider_bg_pane_g

0x7e6f,	// (0x0004eb85) aid_postcard_touch_down_pane_ParamLimits

0x7e6f,	// (0x0004eb85) aid_postcard_touch_down_pane

0x7e7f,	// (0x0004eb95) aid_postcard_touch_up_pane_ParamLimits

0x7e7f,	// (0x0004eb95) aid_postcard_touch_up_pane

0x4f85,	// (0x0004bc9b) main_blid2_pane

0x1187,	// (0x00047e9d) popup_blid2_search_window

0x4f85,	// (0x0004bc9b) blid2_gps_pane

0x4f85,	// (0x0004bc9b) blid2_navig_pane

0x4f85,	// (0x0004bc9b) blid2_search_pane

0x4f85,	// (0x0004bc9b) blid2_tripm_pane

0xb5aa,	// (0x000522c0) blid2_search_pane_g1_ParamLimits

0xb5aa,	// (0x000522c0) blid2_search_pane_g1

0xb5ba,	// (0x000522d0) blid2_search_pane_t1_ParamLimits

0xb5ba,	// (0x000522d0) blid2_search_pane_t1

0xb5cc,	// (0x000522e2) aid_size_cell_blid2_gps_ParamLimits

0xb5cc,	// (0x000522e2) aid_size_cell_blid2_gps

0xb5dc,	// (0x000522f2) blid2_gps_pane_g1_ParamLimits

0xb5dc,	// (0x000522f2) blid2_gps_pane_g1

0xb5e8,	// (0x000522fe) grid_blid2_satellite_pane_ParamLimits

0xb5e8,	// (0x000522fe) grid_blid2_satellite_pane

0xb5f8,	// (0x0005230e) blid2_navig_pane_g1_ParamLimits

0xb5f8,	// (0x0005230e) blid2_navig_pane_g1

0xb604,	// (0x0005231a) blid2_navig_pane_t1_ParamLimits

0xb604,	// (0x0005231a) blid2_navig_pane_t1

0xb616,	// (0x0005232c) blid2_navig_pane_t2_ParamLimits

0xb616,	// (0x0005232c) blid2_navig_pane_t2

0x0001,

0xfb43,	// (0x00056859) blid2_navig_pane_t_ParamLimits

0xfb43,	// (0x00056859) blid2_navig_pane_t

0xb628,	// (0x0005233e) blid2_navig_ring_pane_ParamLimits

0xb628,	// (0x0005233e) blid2_navig_ring_pane

0xb638,	// (0x0005234e) blid2_speed_pane_ParamLimits

0xb638,	// (0x0005234e) blid2_speed_pane

0xb644,	// (0x0005235a) blid2_tripm_pane_g1_ParamLimits

0xb644,	// (0x0005235a) blid2_tripm_pane_g1

0xb654,	// (0x0005236a) blid2_tripm_pane_g2_ParamLimits

0xb654,	// (0x0005236a) blid2_tripm_pane_g2

0xb660,	// (0x00052376) blid2_tripm_pane_g3_ParamLimits

0xb660,	// (0x00052376) blid2_tripm_pane_g3

0xb66c,	// (0x00052382) blid2_tripm_pane_g4_ParamLimits

0xb66c,	// (0x00052382) blid2_tripm_pane_g4

0xb678,	// (0x0005238e) blid2_tripm_pane_g5_ParamLimits

0xb678,	// (0x0005238e) blid2_tripm_pane_g5

0x0005,

0xfb48,	// (0x0005685e) blid2_tripm_pane_g_ParamLimits

0xfb48,	// (0x0005685e) blid2_tripm_pane_g

0xb694,	// (0x000523aa) blid2_tripm_pane_t1_ParamLimits

0xb694,	// (0x000523aa) blid2_tripm_pane_t1

0xb6a8,	// (0x000523be) blid2_tripm_pane_t2_ParamLimits

0xb6a8,	// (0x000523be) blid2_tripm_pane_t2

0xb6ba,	// (0x000523d0) blid2_tripm_pane_t3_ParamLimits

0xb6ba,	// (0x000523d0) blid2_tripm_pane_t3

0x0003,

0xfb55,	// (0x0005686b) blid2_tripm_pane_t_ParamLimits

0xfb55,	// (0x0005686b) blid2_tripm_pane_t

0xb6ec,	// (0x00052402) cell_blid2_satellite_pane_ParamLimits

0xb6ec,	// (0x00052402) cell_blid2_satellite_pane

0xb706,	// (0x0005241c) cell_blid2_satellite_pane_g1

0x2806,	// (0x0004951c) cell_blid2_satellite_pane_t1

0x167f,	// (0x00048395) blid2_speed_pane_g1

0x2814,	// (0x0004952a) blid2_speed_pane_t1

0x2822,	// (0x00049538) blid2_speed_pane_t2

0x0001,

0xfb5e,	// (0x00056874) blid2_speed_pane_t

0x167f,	// (0x00048395) blid2_navig_ring_pane_g1

0xb70f,	// (0x00052425) blid2_navig_ring_pane_g2

0xb717,	// (0x0005242d) blid2_navig_ring_pane_g3

0xb71f,	// (0x00052435) blid2_navig_ring_pane_g4

0xb727,	// (0x0005243d) blid2_navig_ring_pane_g5

0x0004,

0xfb63,	// (0x00056879) blid2_navig_ring_pane_g

0x4f85,	// (0x0004bc9b) bg_popup_window_pane_cp011

0x2830,	// (0x00049546) popup_blid2_search_window_g1

0x2838,	// (0x0004954e) popup_blid2_search_window_t1

0x2846,	// (0x0004955c) popup_blid2_search_window_t2

0x0001,

0xfb6e,	// (0x00056884) popup_blid2_search_window_t

0xd8c6,	// (0x000545dc) main_browser_pane_g1

0xd5db,	// (0x000542f1) main_browser_pane_ParamLimits

0xa537,	// (0x0005124d) bg_button_pane_cp011_ParamLimits

0xa803,	// (0x00051519) cell_vitu2_function_pane_g1_ParamLimits

0xf115,	// (0x00055e2b) bg_popup_sub_pane_cp22_ParamLimits

0xb0db,	// (0x00051df1) input_focus_pane_cp08_ParamLimits

0xb0e8,	// (0x00051dfe) popup_vitu2_query_button_pane_ParamLimits

0xb0e8,	// (0x00051dfe) popup_vitu2_query_button_pane

0xb0bd,	// (0x00051dd3) popup_vitu2_query_input_button_pane

0x23e3,	// (0x000490f9) popup_vitu2_query_window_g1_ParamLimits

0xb0f9,	// (0x00051e0f) popup_vitu2_query_window_g2_ParamLimits

0xfa75,	// (0x0005678b) popup_vitu2_query_window_g_ParamLimits

0x4f85,	// (0x0004bc9b) bg_button_pane_cp026

0xb72f,	// (0x00052445) popup_vitu2_query_input_button_pane_g1

0x4f85,	// (0x0004bc9b) bg_button_pane_cp025

0x2854,	// (0x0004956a) popup_vitu2_query_button_pane_t1

0x8fb4,	// (0x0004fcca) main_mp3_pane_t6

0x8fc4,	// (0x0004fcda) popup_slider_window_cp01

0xa45a,	// (0x00051170) cam4_battery_pane

0xa545,	// (0x0005125b) cam4_battery_pane_cp02

0xb4a0,	// (0x000521b6) cam4_battery_pane_cp01

0xb4aa,	// (0x000521c0) cam4_battery_pane_cp03

0x2862,	// (0x00049578) cam4_battery_pane_g1

0x167f,	// (0x00048395) cam4_battery_pane_g2

0x0001,

0xfb73,	// (0x00056889) cam4_battery_pane_g

0x154b,	// (0x00048261) popup_blid_sat_info2_window_t11

0x772e,	// (0x0004e444) aid_size_touch_mv_arrow_left_ParamLimits

0x7757,	// (0x0004e46d) aid_size_touch_mv_arrow_right_ParamLimits

0xe022,	// (0x00054d38) navi_pane_g1_ParamLimits

0x7780,	// (0x0004e496) navi_pane_g2_ParamLimits

0x77ae,	// (0x0004e4c4) navi_pane_g3_ParamLimits

0xf44c,	// (0x00056162) navi_pane_g_ParamLimits

0x7808,	// (0x0004e51e) navi_pane_mv_t1_ParamLimits

0x9a65,	// (0x0005077b) grid_imed_effect_pane_ParamLimits

0xd80f,	// (0x00054525) aid_placing_vt_slider_lsc

0xd817,	// (0x0005452d) aid_placing_vt_slider_prt

0xf115,	// (0x00055e2b) bg_tb_trans_pane_cp01_ParamLimits

0x180b,	// (0x00048521) popup_image_details_window_g1_ParamLimits

0x181e,	// (0x00048534) popup_image_details_window_g2_ParamLimits

0x1833,	// (0x00048549) popup_image_details_window_g3_ParamLimits

0x1833,	// (0x00048549) popup_image_details_window_g3

0xf77f,	// (0x00056495) popup_image_details_window_g_ParamLimits

0x1847,	// (0x0004855d) popup_image_details_window_t1_ParamLimits

0x1859,	// (0x0004856f) popup_image_details_window_t2_ParamLimits

0x1872,	// (0x00048588) popup_image_details_window_t3_ParamLimits

0x1886,	// (0x0004859c) popup_image_details_window_t4_ParamLimits

0x18a1,	// (0x000485b7) popup_image_details_window_t5_ParamLimits

0xf786,	// (0x0005649c) popup_image_details_window_t_ParamLimits

0xb3c4,	// (0x000520da) cl_header_name_pane_ParamLimits

0xb3c4,	// (0x000520da) cl_header_name_pane

0xb737,	// (0x0005244d) cl_header_name_pane_t1_ParamLimits

0xb737,	// (0x0005244d) cl_header_name_pane_t1

0xb74e,	// (0x00052464) cl_header_name_pane_t2_ParamLimits

0xb74e,	// (0x00052464) cl_header_name_pane_t2

0xb778,	// (0x0005248e) cl_header_name_pane_t3_ParamLimits

0xb778,	// (0x0005248e) cl_header_name_pane_t3

0x0002,

0xfb78,	// (0x0005688e) cl_header_name_pane_t_ParamLimits

0xfb78,	// (0x0005688e) cl_header_name_pane_t

0x77d9,	// (0x0004e4ef) navi_pane_mv_g2_ParamLimits

0x20d9,	// (0x00048def) field_vitu2_entry_pane_g1_ParamLimits

0x20e5,	// (0x00048dfb) field_vitu2_entry_pane_g2_ParamLimits

0x20f1,	// (0x00048e07) field_vitu2_entry_pane_g3_ParamLimits

0x20f1,	// (0x00048e07) field_vitu2_entry_pane_g3

0xf974,	// (0x0005668a) field_vitu2_entry_pane_g_ParamLimits

0xa793,	// (0x000514a9) cell_vitu2_itu_pane_g1_ParamLimits

0xa7a3,	// (0x000514b9) cell_vitu2_itu_pane_g2_ParamLimits

0xa7a3,	// (0x000514b9) cell_vitu2_itu_pane_g2

0x0001,

0xf980,	// (0x00056696) cell_vitu2_itu_pane_g_ParamLimits

0xf980,	// (0x00056696) cell_vitu2_itu_pane_g

0xa537,	// (0x0005124d) bg_vkb2_func_pane_cp05_ParamLimits

0xa537,	// (0x0005124d) bg_vkb2_func_pane_cp05

0xa537,	// (0x0005124d) bg_vkb2_func_pane_cp03

0xa537,	// (0x0005124d) bg_vkb2_func_pane_cp04

0xa537,	// (0x0005124d) bg_vkb2_func_pane_cp10_ParamLimits

0xa537,	// (0x0005124d) bg_vkb2_func_pane_cp10

0xb366,	// (0x0005207c) bg_vkb2_func_pane_cp08

0xb34c,	// (0x00052062) bg_vkb2_func_pane_cp06

0xb35a,	// (0x00052070) bg_vkb2_func_pane_cp07

0x2751,	// (0x00049467) bg_vkb2_func_pane_cp11_ParamLimits

0x2751,	// (0x00049467) bg_vkb2_func_pane_cp11

0x2766,	// (0x0004947c) bg_vkb2_func_pane_cp12_ParamLimits

0x2766,	// (0x0004947c) bg_vkb2_func_pane_cp12

0x4f85,	// (0x0004bc9b) bg_vkb2_func_pane_cp09

0x212e,	// (0x00048e44) bg_vkb2_func_pane_g1

0xd9d7,	// (0x000546ed) bg_vkb2_func_pane_g2

0x2136,	// (0x00048e4c) bg_vkb2_func_pane_g3

0x213e,	// (0x00048e54) bg_vkb2_func_pane_g4

0x238e,	// (0x000490a4) bg_vkb2_func_pane_g5

0x2156,	// (0x00048e6c) bg_vkb2_func_pane_g6

0x215e,	// (0x00048e74) bg_vkb2_func_pane_g7

0x214e,	// (0x00048e64) bg_vkb2_func_pane_g8

0xd9b7,	// (0x000546cd) bg_vkb2_func_pane_g9

0x0008,

0xfb7f,	// (0x00056895) bg_vkb2_func_pane_g

0xb686,	// (0x0005239c) blid2_tripm_pane_g6_ParamLimits

0xb686,	// (0x0005239c) blid2_tripm_pane_g6

0x1f6b,	// (0x00048c81) mp4_progress_pane_g1

0xb6e0,	// (0x000523f6) blid2_tripm_values_pane_ParamLimits

0xb6e0,	// (0x000523f6) blid2_tripm_values_pane

0xb79d,	// (0x000524b3) blid2_tripm_values_pane_t1

0xb7ab,	// (0x000524c1) blid2_tripm_values_pane_t2

0xb7b9,	// (0x000524cf) blid2_tripm_values_pane_t3

0xb7c7,	// (0x000524dd) blid2_tripm_values_pane_t4

0xb7d5,	// (0x000524eb) blid2_tripm_values_pane_t5

0xb7e3,	// (0x000524f9) blid2_tripm_values_pane_t6

0xb7f1,	// (0x00052507) blid2_tripm_values_pane_t7

0xb7ff,	// (0x00052515) blid2_tripm_values_pane_t8

0xb80d,	// (0x00052523) blid2_tripm_values_pane_t9

0x0008,

0xfb92,	// (0x000568a8) blid2_tripm_values_pane_t

0x663a,	// (0x0004d350) call_video_pane_t1_ParamLimits

0x6654,	// (0x0004d36a) call_video_pane_t2_ParamLimits

0xf2d5,	// (0x00055feb) call_video_pane_t_ParamLimits

0x7d40,	// (0x0004ea56) msg_header_pane_g1_ParamLimits

0xe23d,	// (0x00054f53) msg_header_pane_g2_ParamLimits

0xe23d,	// (0x00054f53) msg_header_pane_g2

0x0001,

0xf4ef,	// (0x00056205) msg_header_pane_g_ParamLimits

0xf4ef,	// (0x00056205) msg_header_pane_g

0xd5db,	// (0x000542f1) main_clock2_pane_ParamLimits

0x97f5,	// (0x0005050b) grid_clock2_toolbar_pane_ParamLimits

0x97f5,	// (0x0005050b) grid_clock2_toolbar_pane

0x97f5,	// (0x0005050b) listscroll_clock2_pane_ParamLimits

0x97f5,	// (0x0005050b) listscroll_clock2_pane

0x98a2,	// (0x000505b8) main_clock2_pane_t3_ParamLimits

0x98a2,	// (0x000505b8) main_clock2_pane_t3

0x98b4,	// (0x000505ca) main_clock2_pane_t4_ParamLimits

0x98b4,	// (0x000505ca) main_clock2_pane_t4

0x286c,	// (0x00049582) cell_clock2_toolbar_pane

0x2874,	// (0x0004958a) cell_clock2_toolbar_pane_cp01

0x2874,	// (0x0004958a) cell_clock2_toolbar_pane_cp02

0x287c,	// (0x00049592) cell_clock2_toolbar_pane_cp03

0x2884,	// (0x0004959a) list_clock2_pane

0xdf79,	// (0x00054c8f) scroll_pane_cp10

0x288c,	// (0x000495a2) list_single_clock2_pane_ParamLimits

0x288c,	// (0x000495a2) list_single_clock2_pane

0xe0c2,	// (0x00054dd8) list_highlight_pane_cp08

0x2899,	// (0x000495af) list_single_clock2_pane_t1

0x28a7,	// (0x000495bd) list_single_clock2_pane_t2

0x0001,

0xfba5,	// (0x000568bb) list_single_clock2_pane_t

0x4f85,	// (0x0004bc9b) bg_button_pane_cp10

0x28b5,	// (0x000495cb) cell_clock2_toolbar_pane_g1

0x7ddd,	// (0x0004eaf3) aid_main_viewer_pane_g1_ParamLimits

0x7ddd,	// (0x0004eaf3) aid_main_viewer_pane_g1

0x7de9,	// (0x0004eaff) aid_main_viewer_pane_g2_ParamLimits

0x7de9,	// (0x0004eaff) aid_main_viewer_pane_g2

0x7df5,	// (0x0004eb0b) aid_main_viewer_pane_g3_ParamLimits

0x7df5,	// (0x0004eb0b) aid_main_viewer_pane_g3

0x7e06,	// (0x0004eb1c) aid_main_viewer_pane_g4_ParamLimits

0x7e06,	// (0x0004eb1c) aid_main_viewer_pane_g4

0x0003,

0xf500,	// (0x00056216) aid_main_viewer_pane_g_ParamLimits

0xf500,	// (0x00056216) aid_main_viewer_pane_g

0x857a,	// (0x0004f290) main_calc_pane_ParamLimits

0x8587,	// (0x0004f29d) main_dialer2_pane_ParamLimits

0x4f85,	// (0x0004bc9b) main_cam6_pane

0x4f85,	// (0x0004bc9b) main_vid6_pane

0x9801,	// (0x00050517) listscroll_gen_pane_cp06_ParamLimits

0x9801,	// (0x00050517) listscroll_gen_pane_cp06

0x98c6,	// (0x000505dc) main_clock2_pane_t5_ParamLimits

0x98c6,	// (0x000505dc) main_clock2_pane_t5

0x990f,	// (0x00050625) aid_call2_pane_cp10_ParamLimits

0x9921,	// (0x00050637) aid_call_pane_cp10_ParamLimits

0xdff7,	// (0x00054d0d) popup_clock_analogue_window_cp10_g1_ParamLimits

0xdff7,	// (0x00054d0d) popup_clock_analogue_window_cp10_g2_ParamLimits

0x9933,	// (0x00050649) popup_clock_analogue_window_cp10_g3_ParamLimits

0x9933,	// (0x00050649) popup_clock_analogue_window_cp10_g4_ParamLimits

0xdff7,	// (0x00054d0d) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf836,	// (0x0005654c) popup_clock_analogue_window_cp10_g_ParamLimits

0x9945,	// (0x0005065b) popup_clock_analogue_window_cp10_t1_ParamLimits

0xa0e1,	// (0x00050df7) cell_dialer2_keypad_pane_g2_ParamLimits

0xa0e1,	// (0x00050df7) cell_dialer2_keypad_pane_g2

0x0001,

0xf91c,	// (0x00056632) cell_dialer2_keypad_pane_g_ParamLimits

0xf91c,	// (0x00056632) cell_dialer2_keypad_pane_g

0xa0fd,	// (0x00050e13) cell_dialer2_keypad_pane_t1

0xaace,	// (0x000517e4) main_cset_text2_pane_ParamLimits

0xaace,	// (0x000517e4) main_cset_text2_pane

0x25c3,	// (0x000492d9) area_vitu2_query_pane_g1_ParamLimits

0xb2eb,	// (0x00052001) area_vitu2_query_pane_g2_ParamLimits

0xfac2,	// (0x000567d8) area_vitu2_query_pane_g_ParamLimits

0x2647,	// (0x0004935d) area_vitu2_query_pane_t7_ParamLimits

0x2647,	// (0x0004935d) area_vitu2_query_pane_t7

0xb34c,	// (0x00052062) bg_button_pane_cp018_ParamLimits

0xb35a,	// (0x00052070) bg_button_pane_cp021_ParamLimits

0xb366,	// (0x0005207c) bg_button_pane_cp022_ParamLimits

0xb366,	// (0x0005207c) bg_vkb2_func_pane_cp08_ParamLimits

0xb34c,	// (0x00052062) bg_vkb2_func_pane_cp06_ParamLimits

0xb35a,	// (0x00052070) bg_vkb2_func_pane_cp07_ParamLimits

0xb377,	// (0x0005208d) input_focus_pane_cp09_ParamLimits

0xb81b,	// (0x00052531) cam6_autofocus_pane_ParamLimits

0xb81b,	// (0x00052531) cam6_autofocus_pane

0xb83d,	// (0x00052553) cam6_image_uncrop_pane_ParamLimits

0xb83d,	// (0x00052553) cam6_image_uncrop_pane

0xb86a,	// (0x00052580) cam6_indi_pane_ParamLimits

0xb86a,	// (0x00052580) cam6_indi_pane

0xb884,	// (0x0005259a) cam6_mode_pane_ParamLimits

0xb884,	// (0x0005259a) cam6_mode_pane

0xb898,	// (0x000525ae) cam6_timer_pane_ParamLimits

0xb898,	// (0x000525ae) cam6_timer_pane

0xb8a4,	// (0x000525ba) cam6_zoom_pane_ParamLimits

0xb8a4,	// (0x000525ba) cam6_zoom_pane

0xb8bc,	// (0x000525d2) cam6_mode_pane_g1_ParamLimits

0xb8bc,	// (0x000525d2) cam6_mode_pane_g1

0xb8c8,	// (0x000525de) cam6_mode_pane_g2_ParamLimits

0xb8c8,	// (0x000525de) cam6_mode_pane_g2

0xb8d4,	// (0x000525ea) cam6_mode_pane_g3_ParamLimits

0xb8d4,	// (0x000525ea) cam6_mode_pane_g3

0xb8e0,	// (0x000525f6) cam6_mode_pane_g4_ParamLimits

0xb8e0,	// (0x000525f6) cam6_mode_pane_g4

0x0003,

0xfbaa,	// (0x000568c0) cam6_mode_pane_g_ParamLimits

0xfbaa,	// (0x000568c0) cam6_mode_pane_g

0x28bd,	// (0x000495d3) bg_tb_trans_pane_cp08_ParamLimits

0x28bd,	// (0x000495d3) bg_tb_trans_pane_cp08

0x28cb,	// (0x000495e1) cam6_battery_pane_ParamLimits

0x28cb,	// (0x000495e1) cam6_battery_pane

0x28e1,	// (0x000495f7) cam6_indi_pane_g1_ParamLimits

0x28e1,	// (0x000495f7) cam6_indi_pane_g1

0x28f3,	// (0x00049609) cam6_indi_pane_g2_ParamLimits

0x28f3,	// (0x00049609) cam6_indi_pane_g2

0x2905,	// (0x0004961b) cam6_indi_pane_g3_ParamLimits

0x2905,	// (0x0004961b) cam6_indi_pane_g3

0x0002,

0xfbb3,	// (0x000568c9) cam6_indi_pane_g_ParamLimits

0xfbb3,	// (0x000568c9) cam6_indi_pane_g

0x2917,	// (0x0004962d) cam6_indi_pane_t1_ParamLimits

0x2917,	// (0x0004962d) cam6_indi_pane_t1

0xa5ab,	// (0x000512c1) cam6_autofocus_pane_g1

0xa5a3,	// (0x000512b9) cam6_autofocus_pane_g2

0xa5bb,	// (0x000512d1) cam6_autofocus_pane_g3

0xa5b3,	// (0x000512c9) cam6_autofocus_pane_g4

0x0003,

0xfbba,	// (0x000568d0) cam6_autofocus_pane_g

0x293d,	// (0x00049653) cam6_timer_pane_g1

0x2945,	// (0x0004965b) cam6_timer_pane_t1

0x2953,	// (0x00049669) cam6_zoom_cont_pane

0x295b,	// (0x00049671) cam6_zoom_pane_g1

0x2963,	// (0x00049679) cam6_zoom_pane_g2

0xb8ec,	// (0x00052602) cam6_zoom_pane_g3

0x0002,

0xfbc3,	// (0x000568d9) cam6_zoom_pane_g

0x167f,	// (0x00048395) cam6_battery_pane_g1

0x167f,	// (0x00048395) cam6_battery_pane_g2

0x0001,

0xf743,	// (0x00056459) cam6_battery_pane_g

0x296b,	// (0x00049681) cam6_zoom_cont_pane_g1

0x2974,	// (0x0004968a) cam6_zoom_cont_pane_g2

0x297d,	// (0x00049693) cam6_zoom_cont_pane_g3

0x0002,

0xfbca,	// (0x000568e0) cam6_zoom_cont_pane_g

0xb909,	// (0x0005261f) cam6_mode_pane_cp_ParamLimits

0xb909,	// (0x0005261f) cam6_mode_pane_cp

0xb91d,	// (0x00052633) cam6_zoom_pane_cp_ParamLimits

0xb91d,	// (0x00052633) cam6_zoom_pane_cp

0xb935,	// (0x0005264b) vid6_image_uncrop_cif_pane_ParamLimits

0xb935,	// (0x0005264b) vid6_image_uncrop_cif_pane

0xb961,	// (0x00052677) vid6_image_uncrop_nhd_pane_ParamLimits

0xb961,	// (0x00052677) vid6_image_uncrop_nhd_pane

0xb97e,	// (0x00052694) vid6_image_uncrop_vga_pane_ParamLimits

0xb97e,	// (0x00052694) vid6_image_uncrop_vga_pane

0xb99d,	// (0x000526b3) vid6_image_uncrop_wvga_pane_ParamLimits

0xb99d,	// (0x000526b3) vid6_image_uncrop_wvga_pane

0xb9ba,	// (0x000526d0) vid6_indi_pane_ParamLimits

0xb9ba,	// (0x000526d0) vid6_indi_pane

0x28bd,	// (0x000495d3) bg_tb_trans_pane_cp09_ParamLimits

0x28bd,	// (0x000495d3) bg_tb_trans_pane_cp09

0x2995,	// (0x000496ab) cam6_battery_pane_cp_ParamLimits

0x2995,	// (0x000496ab) cam6_battery_pane_cp

0x29a1,	// (0x000496b7) vid6_indi_pane_g1_ParamLimits

0x29a1,	// (0x000496b7) vid6_indi_pane_g1

0x29b3,	// (0x000496c9) vid6_indi_pane_g2_ParamLimits

0x29b3,	// (0x000496c9) vid6_indi_pane_g2

0x29c5,	// (0x000496db) vid6_indi_pane_g3_ParamLimits

0x29c5,	// (0x000496db) vid6_indi_pane_g3

0x29da,	// (0x000496f0) vid6_indi_pane_g4_ParamLimits

0x29da,	// (0x000496f0) vid6_indi_pane_g4

0x29ef,	// (0x00049705) vid6_indi_pane_g5_ParamLimits

0x29ef,	// (0x00049705) vid6_indi_pane_g5

0x0004,

0xfbd1,	// (0x000568e7) vid6_indi_pane_g_ParamLimits

0xfbd1,	// (0x000568e7) vid6_indi_pane_g

0x2a09,	// (0x0004971f) vid6_indi_pane_t1_ParamLimits

0x2a09,	// (0x0004971f) vid6_indi_pane_t1

0x2a1f,	// (0x00049735) vid6_indi_pane_t2_ParamLimits

0x2a1f,	// (0x00049735) vid6_indi_pane_t2

0x2a47,	// (0x0004975d) vid6_indi_pane_t3_ParamLimits

0x2a47,	// (0x0004975d) vid6_indi_pane_t3

0x2a6f,	// (0x00049785) vid6_indi_pane_t4_ParamLimits

0x2a6f,	// (0x00049785) vid6_indi_pane_t4

0x0003,

0xfbdc,	// (0x000568f2) vid6_indi_pane_t_ParamLimits

0xfbdc,	// (0x000568f2) vid6_indi_pane_t

0x2a93,	// (0x000497a9) wait_bar_pane_cp08

0xb9df,	// (0x000526f5) main_cset_text2_pane_t1_ParamLimits

0xb9df,	// (0x000526f5) main_cset_text2_pane_t1

0xb8f4,	// (0x0005260a) listscroll_gen_pane_cp06_t1_ParamLimits

0xb8f4,	// (0x0005260a) listscroll_gen_pane_cp06_t1

0x4f85,	// (0x0004bc9b) main_cam6_set_pane

0xa44c,	// (0x00051162) bg_tb_trans_pane_cp06_ParamLimits

0xa462,	// (0x00051178) cam4_indicators_pane_g1_ParamLimits

0xa46f,	// (0x00051185) cam4_indicators_pane_g2_ParamLimits

0xf950,	// (0x00056666) cam4_indicators_pane_g_ParamLimits

0xa48f,	// (0x000511a5) cam4_indicators_pane_t1_ParamLimits

0xa537,	// (0x0005124d) bg_tb_trans_pane_cp07_ParamLimits

0xa462,	// (0x00051178) vid4_indicators_pane_g1_ParamLimits

0xa54f,	// (0x00051265) vid4_indicators_pane_g2_ParamLimits

0xa55c,	// (0x00051272) vid4_indicators_pane_g3_ParamLimits

0xa56d,	// (0x00051283) vid4_indicators_pane_g4_ParamLimits

0xf962,	// (0x00056678) vid4_indicators_pane_g_ParamLimits

0xa589,	// (0x0005129f) vid4_indicators_pane_t1_ParamLimits

0xb4b2,	// (0x000521c8) vid4_progress_pane_g1_ParamLimits

0xb4be,	// (0x000521d4) vid4_progress_pane_g2_ParamLimits

0xb4ca,	// (0x000521e0) vid4_progress_pane_g3_ParamLimits

0xb4d9,	// (0x000521ef) vid4_progress_pane_g4_ParamLimits

0xfb0d,	// (0x00056823) vid4_progress_pane_g_ParamLimits

0xb4f7,	// (0x0005220d) vid4_progress_pane_t1_ParamLimits

0xb50d,	// (0x00052223) vid4_progress_pane_t2_ParamLimits

0xb523,	// (0x00052239) vid4_progress_pane_t3_ParamLimits

0xfb18,	// (0x0005682e) vid4_progress_pane_t_ParamLimits

0xb538,	// (0x0005224e) wait_bar_pane_cp07_ParamLimits

0xba12,	// (0x00052728) main_cam6_set_pane_g2_ParamLimits

0xba12,	// (0x00052728) main_cam6_set_pane_g2

0xba1e,	// (0x00052734) main_cset6_listscroll_pane_ParamLimits

0xba1e,	// (0x00052734) main_cset6_listscroll_pane

0xba49,	// (0x0005275f) main_cset6_slider_pane_ParamLimits

0xba49,	// (0x0005275f) main_cset6_slider_pane

0xba55,	// (0x0005276b) main_cset6_text2_pane_ParamLimits

0xba55,	// (0x0005276b) main_cset6_text2_pane

0x2aa2,	// (0x000497b8) main_cset6_text_pane

0x2aaa,	// (0x000497c0) main_cset_list_pane_copy1_ParamLimits

0x2aaa,	// (0x000497c0) main_cset_list_pane_copy1

0x2aba,	// (0x000497d0) scroll_pane_cp028_copy1

0xba68,	// (0x0005277e) cset_list_set_pane_copy1

0xba7b,	// (0x00052791) aid_position_infowindow_above_copy1

0xba83,	// (0x00052799) aid_position_infowindow_below_copy1

0xba8b,	// (0x000527a1) cset_list_set_pane_g1_copy1

0x232d,	// (0x00049043) cset_list_set_pane_g3_copy1_ParamLimits

0x232d,	// (0x00049043) cset_list_set_pane_g3_copy1

0xadb3,	// (0x00051ac9) cset_list_set_pane_t1_copy1_ParamLimits

0xadb3,	// (0x00051ac9) cset_list_set_pane_t1_copy1

0xf115,	// (0x00055e2b) list_highlight_pane_cp021_copy1_ParamLimits

0xf115,	// (0x00055e2b) list_highlight_pane_cp021_copy1

0x2ac3,	// (0x000497d9) cset6_slider_pane_ParamLimits

0x2ac3,	// (0x000497d9) cset6_slider_pane

0x2aef,	// (0x00049805) main_cset6_slider_pane_g1_ParamLimits

0x2aef,	// (0x00049805) main_cset6_slider_pane_g1

0xba93,	// (0x000527a9) main_cset6_slider_pane_g2_ParamLimits

0xba93,	// (0x000527a9) main_cset6_slider_pane_g2

0x2b17,	// (0x0004982d) main_cset6_slider_pane_g3_ParamLimits

0x2b17,	// (0x0004982d) main_cset6_slider_pane_g3

0xbabb,	// (0x000527d1) main_cset6_slider_pane_g4_ParamLimits

0xbabb,	// (0x000527d1) main_cset6_slider_pane_g4

0xbac7,	// (0x000527dd) main_cset6_slider_pane_g5_ParamLimits

0xbac7,	// (0x000527dd) main_cset6_slider_pane_g5

0x225d,	// (0x00048f73) main_cset6_slider_pane_g7_ParamLimits

0x225d,	// (0x00048f73) main_cset6_slider_pane_g7

0x2269,	// (0x00048f7f) main_cset6_slider_pane_g8_ParamLimits

0x2269,	// (0x00048f7f) main_cset6_slider_pane_g8

0xbad5,	// (0x000527eb) main_cset6_slider_pane_g9_ParamLimits

0xbad5,	// (0x000527eb) main_cset6_slider_pane_g9

0xbae1,	// (0x000527f7) main_cset6_slider_pane_g10_ParamLimits

0xbae1,	// (0x000527f7) main_cset6_slider_pane_g10

0xbaed,	// (0x00052803) main_cset6_slider_pane_g11_ParamLimits

0xbaed,	// (0x00052803) main_cset6_slider_pane_g11

0xbaf9,	// (0x0005280f) main_cset6_slider_pane_g12_ParamLimits

0xbaf9,	// (0x0005280f) main_cset6_slider_pane_g12

0xbb05,	// (0x0005281b) main_cset6_slider_pane_g13_ParamLimits

0xbb05,	// (0x0005281b) main_cset6_slider_pane_g13

0xbb11,	// (0x00052827) main_cset6_slider_pane_g14_ParamLimits

0xbb11,	// (0x00052827) main_cset6_slider_pane_g14

0xbb1d,	// (0x00052833) main_cset6_slider_pane_g15_ParamLimits

0xbb1d,	// (0x00052833) main_cset6_slider_pane_g15

0xbb35,	// (0x0005284b) main_cset6_slider_pane_g16_ParamLimits

0xbb35,	// (0x0005284b) main_cset6_slider_pane_g16

0xbb43,	// (0x00052859) main_cset6_slider_pane_g17_ParamLimits

0xbb43,	// (0x00052859) main_cset6_slider_pane_g17

0x0011,

0xfbe5,	// (0x000568fb) main_cset6_slider_pane_g_ParamLimits

0xfbe5,	// (0x000568fb) main_cset6_slider_pane_g

0x2b23,	// (0x00049839) main_cset6_slider_pane_t1_ParamLimits

0x2b23,	// (0x00049839) main_cset6_slider_pane_t1

0xbb69,	// (0x0005287f) main_cset6_slider_pane_t2_ParamLimits

0xbb69,	// (0x0005287f) main_cset6_slider_pane_t2

0xbb94,	// (0x000528aa) main_cset6_slider_pane_t3_ParamLimits

0xbb94,	// (0x000528aa) main_cset6_slider_pane_t3

0xbbbf,	// (0x000528d5) main_cset6_slider_pane_t4_ParamLimits

0xbbbf,	// (0x000528d5) main_cset6_slider_pane_t4

0xbbea,	// (0x00052900) main_cset6_slider_pane_t5_ParamLimits

0xbbea,	// (0x00052900) main_cset6_slider_pane_t5

0x2b64,	// (0x0004987a) main_cset6_slider_pane_t7_ParamLimits

0x2b64,	// (0x0004987a) main_cset6_slider_pane_t7

0xbc17,	// (0x0005292d) main_cset6_slider_pane_t8_ParamLimits

0xbc17,	// (0x0005292d) main_cset6_slider_pane_t8

0xbc3b,	// (0x00052951) main_cset6_slider_pane_t9_ParamLimits

0xbc3b,	// (0x00052951) main_cset6_slider_pane_t9

0xbc5f,	// (0x00052975) main_cset6_slider_pane_t10_ParamLimits

0xbc5f,	// (0x00052975) main_cset6_slider_pane_t10

0xbc83,	// (0x00052999) main_cset6_slider_pane_t11_ParamLimits

0xbc83,	// (0x00052999) main_cset6_slider_pane_t11

0x2b9a,	// (0x000498b0) main_cset6_slider_pane_t14_ParamLimits

0x2b9a,	// (0x000498b0) main_cset6_slider_pane_t14

0x2bd3,	// (0x000498e9) main_cset6_slider_pane_t15_ParamLimits

0x2bd3,	// (0x000498e9) main_cset6_slider_pane_t15

0x000b,

0xfc0a,	// (0x00056920) main_cset6_slider_pane_t_ParamLimits

0xfc0a,	// (0x00056920) main_cset6_slider_pane_t

0x233c,	// (0x00049052) cset_slider_pane_g1_copy1

0x2345,	// (0x0004905b) cset_slider_pane_g2_copy1

0x234e,	// (0x00049064) cset_slider_pane_g3_copy1

0x4f85,	// (0x0004bc9b) bg_popup_sub_pane_cp011_copy1

0x23ef,	// (0x00049105) main_cset_text_pane_g1_copy1

0x23f7,	// (0x0004910d) main_cset_text_pane_t1_copy1

0x2405,	// (0x0004911b) main_cset_text_pane_t2_copy1

0x2413,	// (0x00049129) main_cset_text_pane_t3_copy1

0x2421,	// (0x00049137) main_cset_text_pane_t4_copy1

0x242f,	// (0x00049145) main_cset_text_pane_t5_copy1

0x243d,	// (0x00049153) main_cset_text_pane_t6_copy1

0x244b,	// (0x00049161) main_cset_text_pane_t7_copy1

0xbca7,	// (0x000529bd) main_cset_text2_pane_t1_copy1

0x4f85,	// (0x0004bc9b) main_ncimui_pane

0x85c6,	// (0x0004f2dc) popup_query_ncimui_window_ParamLimits

0x85c6,	// (0x0004f2dc) popup_query_ncimui_window

0x198c,	// (0x000486a2) field_cale_ev2_pane_g4_ParamLimits

0x198c,	// (0x000486a2) field_cale_ev2_pane_g4

0x9e2b,	// (0x00050b41) cell_video_dialer_keypad_pane_g2_ParamLimits

0x9e2b,	// (0x00050b41) cell_video_dialer_keypad_pane_g2

0x0001,

0xf8f7,	// (0x0005660d) cell_video_dialer_keypad_pane_g_ParamLimits

0xf8f7,	// (0x0005660d) cell_video_dialer_keypad_pane_g

0x9e43,	// (0x00050b59) cell_video_dialer_keypad_pane_t1

0x4f85,	// (0x0004bc9b) bg_popup_window_pane_cp012

0xde56,	// (0x00054b6c) heading_pane_cp06

0x2cfb,	// (0x00049a11) ncim_query_content_pane

0x4f85,	// (0x0004bc9b) bg_popup_heading_pane_cp01

0x2d03,	// (0x00049a19) ncim_heading_pane_t1

0x2d11,	// (0x00049a27) ncim_indicator_popup_pane

0x2d23,	// (0x00049a39) ncim_query_button_pane

0x2d37,	// (0x00049a4d) ncim_query_content_pane_t1

0x2d49,	// (0x00049a5f) ncim_query_content_pane_t2

0x0005,

0xfc49,	// (0x0005695f) ncim_query_content_pane_t

0x2d83,	// (0x00049a99) ncim_query_list_pane

0x2d95,	// (0x00049aab) ncim_query_popup_pane

0x2d11,	// (0x00049a27) ncim_indicator_popup_pane_ParamLimits

0xbd97,	// (0x00052aad) ncim_query_content_pane_g1_ParamLimits

0xbd97,	// (0x00052aad) ncim_query_content_pane_g1

0x2d37,	// (0x00049a4d) ncim_query_content_pane_t1_ParamLimits

0x2d49,	// (0x00049a5f) ncim_query_content_pane_t2_ParamLimits

0xbda3,	// (0x00052ab9) ncim_query_content_pane_t3_ParamLimits

0xbda3,	// (0x00052ab9) ncim_query_content_pane_t3

0xbdc0,	// (0x00052ad6) ncim_query_content_pane_t4_ParamLimits

0xbdc0,	// (0x00052ad6) ncim_query_content_pane_t4

0xbddd,	// (0x00052af3) ncim_query_content_pane_t5_ParamLimits

0xbddd,	// (0x00052af3) ncim_query_content_pane_t5

0x2d5b,	// (0x00049a71) ncim_query_content_pane_t6_ParamLimits

0x2d5b,	// (0x00049a71) ncim_query_content_pane_t6

0xfc49,	// (0x0005695f) ncim_query_content_pane_t_ParamLimits

0x2d83,	// (0x00049a99) ncim_query_list_pane_ParamLimits

0x2d95,	// (0x00049aab) ncim_query_popup_pane_ParamLimits

0x2da9,	// (0x00049abf) wait_bar_pane_cp04

0x4f85,	// (0x0004bc9b) input_focus_pane_cp011

0x2db1,	// (0x00049ac7) ncim_query_popup_pane_t1

0x2dbf,	// (0x00049ad5) ncim_list_query_list_pane_ParamLimits

0x2dbf,	// (0x00049ad5) ncim_list_query_list_pane

0x4f85,	// (0x0004bc9b) bg_button_pane_cp027

0x2dcc,	// (0x00049ae2) ncim_query_button_pane_g1

0x4f85,	// (0x0004bc9b) list_highlight_pane_cp012

0x2dd6,	// (0x00049aec) ncim_list_query_list_pane_g1

0x2dde,	// (0x00049af4) ncim_list_query_list_pane_t1

0xa47f,	// (0x00051195) cam4_indicators_pane_g3_ParamLimits

0xa47f,	// (0x00051195) cam4_indicators_pane_g3

0xa579,	// (0x0005128f) vid4_indicators_pane_g5_ParamLimits

0xa579,	// (0x0005128f) vid4_indicators_pane_g5

0xb4e8,	// (0x000521fe) vid4_progress_pane_g5_ParamLimits

0xb4e8,	// (0x000521fe) vid4_progress_pane_g5

0xbcdf,	// (0x000529f5) main_ncimui_pane_g1

0xbd25,	// (0x00052a3b) ncimui_group_query_pane_ParamLimits

0xbd25,	// (0x00052a3b) ncimui_group_query_pane

0xbd59,	// (0x00052a6f) ncimui_list_pane_ParamLimits

0xbd59,	// (0x00052a6f) ncimui_list_pane

0xbd73,	// (0x00052a89) ncimui_text_pane_ParamLimits

0xbd73,	// (0x00052a89) ncimui_text_pane

0xbdfa,	// (0x00052b10) ncimui_text_pane_t1_ParamLimits

0xbdfa,	// (0x00052b10) ncimui_text_pane_t1

0x2dec,	// (0x00049b02) ncimui_list_single_graphic_pane_ParamLimits

0x2dec,	// (0x00049b02) ncimui_list_single_graphic_pane

0xbe19,	// (0x00052b2f) ncimui_query_pane_ParamLimits

0xbe19,	// (0x00052b2f) ncimui_query_pane

0x4f85,	// (0x0004bc9b) list_highlight_pane_cp013

0x2dfc,	// (0x00049b12) ncim_list_query_list_pane_t1_copy1

0x2dd6,	// (0x00049aec) ncim_list_single_graphic_pane_g1

0x2e0a,	// (0x00049b20) ncim_query_button_pane_cp01

0x2e12,	// (0x00049b28) ncim_query_entry_pane_ParamLimits

0x2e12,	// (0x00049b28) ncim_query_entry_pane

0x2e22,	// (0x00049b38) ncimui_query_pane_g1

0x2e2a,	// (0x00049b40) ncimui_query_pane_t1_ParamLimits

0x2e2a,	// (0x00049b40) ncimui_query_pane_t1

0x4f85,	// (0x0004bc9b) input_focus_pane_cp012

0x2db1,	// (0x00049ac7) ncim_query_entry_pane_t1

0xd5db,	// (0x000542f1) main_im_pane_ParamLimits

0xf115,	// (0x00055e2b) main_mobtv_pane_ParamLimits

0xf115,	// (0x00055e2b) main_mobtv_pane

0xbb51,	// (0x00052867) main_cset6_slider_pane_g18_ParamLimits

0xbb51,	// (0x00052867) main_cset6_slider_pane_g18

0xbb5d,	// (0x00052873) main_cset6_slider_pane_g19_ParamLimits

0xbb5d,	// (0x00052873) main_cset6_slider_pane_g19

0x20f1,	// (0x00048e07) bg_main_mobtv_pane_ParamLimits

0x20f1,	// (0x00048e07) bg_main_mobtv_pane

0xbe29,	// (0x00052b3f) main_mobtv_info_pane

0xbe34,	// (0x00052b4a) main_mobtv_loading_pane_ParamLimits

0xbe34,	// (0x00052b4a) main_mobtv_loading_pane

0x2e4e,	// (0x00049b64) main_mobtv_pg_channel_list_pane

0x2e58,	// (0x00049b6e) main_mobtv_pg_hdr_pane

0xbe41,	// (0x00052b57) main_mobtv_programe_curr_pane_ParamLimits

0xbe41,	// (0x00052b57) main_mobtv_programe_curr_pane

0xbe4e,	// (0x00052b64) main_mobtv_programe_next_pane_ParamLimits

0xbe4e,	// (0x00052b64) main_mobtv_programe_next_pane

0x2e61,	// (0x00049b77) popup_mobtv_noti_window

0x167f,	// (0x00048395) main_tv_pg_hdr_pane_g1

0x2e69,	// (0x00049b7f) main_tv_pg_hdr_pane_g2

0x2e71,	// (0x00049b87) main_tv_pg_hdr_pane_g3

0x2e79,	// (0x00049b8f) main_tv_pg_hdr_pane_g4

0x2e81,	// (0x00049b97) main_tv_pg_hdr_pane_g5

0x2e8b,	// (0x00049ba1) main_tv_pg_hdr_pane_g6

0x2e95,	// (0x00049bab) main_tv_pg_hdr_pane_g7

0x2e9f,	// (0x00049bb5) main_tv_pg_hdr_pane_g8

0x2ea9,	// (0x00049bbf) main_tv_pg_hdr_pane_g9

0x2eb3,	// (0x00049bc9) main_tv_pg_hdr_pane_g10

0x2ebd,	// (0x00049bd3) main_tv_pg_hdr_pane_g11

0x000a,

0xfc56,	// (0x0005696c) main_tv_pg_hdr_pane_g

0x2ec7,	// (0x00049bdd) main_tv_pg_hdr_pane_t1

0x2ed5,	// (0x00049beb) main_tv_pg_hdr_pane_t2

0x2ee3,	// (0x00049bf9) main_tv_pg_hdr_pane_t3

0x2ef3,	// (0x00049c09) main_tv_pg_hdr_pane_t4

0x2f03,	// (0x00049c19) main_tv_pg_hdr_pane_t5

0x0004,

0xfc6d,	// (0x00056983) main_tv_pg_hdr_pane_t

0x2f13,	// (0x00049c29) single_mobtv_pg_channel_pane_ParamLimits

0x2f13,	// (0x00049c29) single_mobtv_pg_channel_pane

0x2f25,	// (0x00049c3b) single_mobtv_pg_channel_table_pane

0x2f2e,	// (0x00049c44) single_mobtv_pg_channel_thumb_pane

0x2f37,	// (0x00049c4d) single_tv_pg_channel_pane_g1

0x2f40,	// (0x00049c56) single_tv_pg_channel_pane_g2

0x0001,

0xfc78,	// (0x0005698e) single_tv_pg_channel_pane_g

0x18eb,	// (0x00048601) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0x18eb,	// (0x00048601) bg_single_mobtv_pg_channel_thumb_pane

0x2f49,	// (0x00049c5f) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0x2f49,	// (0x00049c5f) single_mobtv_pg_channel_thumb_pane_g1

0x2f57,	// (0x00049c6d) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0x2f57,	// (0x00049c6d) single_mobtv_pg_channel_thumb_pane_g2

0x2f63,	// (0x00049c79) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0x2f63,	// (0x00049c79) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfc7d,	// (0x00056993) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfc7d,	// (0x00056993) single_mobtv_pg_channel_thumb_pane_g

0x2f6f,	// (0x00049c85) single_mobtv_pg_channel_thumb_pane_t1

0x2f7d,	// (0x00049c93) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc84,	// (0x0005699a) single_mobtv_pg_channel_thumb_pane_t

0x167f,	// (0x00048395) bg_single_mobtv_pg_channel_table_pane_g1

0x167f,	// (0x00048395) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf743,	// (0x00056459) bg_single_mobtv_pg_channel_table_pane_g

0x2f8b,	// (0x00049ca1) single_mobtv_pg_channel_table_pane_t1

0x2f99,	// (0x00049caf) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc89,	// (0x0005699f) single_mobtv_pg_channel_table_pane_t

0xbe63,	// (0x00052b79) main_mobtv_info_pane_g1_ParamLimits

0xbe63,	// (0x00052b79) main_mobtv_info_pane_g1

0xbe7f,	// (0x00052b95) main_mobtv_info_pane_t1_ParamLimits

0xbe7f,	// (0x00052b95) main_mobtv_info_pane_t1

0xbef7,	// (0x00052c0d) main_mobtv_info_pane_t2_ParamLimits

0xbef7,	// (0x00052c0d) main_mobtv_info_pane_t2

0x0002,

0xfc93,	// (0x000569a9) main_mobtv_info_pane_t_ParamLimits

0xfc93,	// (0x000569a9) main_mobtv_info_pane_t

0xbf86,	// (0x00052c9c) wait_bar_pane_cp05

0xbf98,	// (0x00052cae) main_mobtv_loading_pane_g1_ParamLimits

0xbf98,	// (0x00052cae) main_mobtv_loading_pane_g1

0xbfa6,	// (0x00052cbc) main_mobtv_loading_pane_g2_ParamLimits

0xbfa6,	// (0x00052cbc) main_mobtv_loading_pane_g2

0xbfb2,	// (0x00052cc8) main_mobtv_loading_pane_g3_ParamLimits

0xbfb2,	// (0x00052cc8) main_mobtv_loading_pane_g3

0x0002,

0xfc9a,	// (0x000569b0) main_mobtv_loading_pane_g_ParamLimits

0xfc9a,	// (0x000569b0) main_mobtv_loading_pane_g

0x2fa7,	// (0x00049cbd) main_mobtv_loading_pane_t1_ParamLimits

0x2fa7,	// (0x00049cbd) main_mobtv_loading_pane_t1

0x2fbf,	// (0x00049cd5) main_mobtv_loading_pane_t2_ParamLimits

0x2fbf,	// (0x00049cd5) main_mobtv_loading_pane_t2

0x0001,

0xfca1,	// (0x000569b7) main_mobtv_loading_pane_t_ParamLimits

0xfca1,	// (0x000569b7) main_mobtv_loading_pane_t

0xbfc0,	// (0x00052cd6) wait_bar_pane_cp06_ParamLimits

0xbfc0,	// (0x00052cd6) wait_bar_pane_cp06

0x2fe3,	// (0x00049cf9) main_mobtv_programe_curr_pane_t1

0x2ff1,	// (0x00049d07) main_mobtv_programe_curr_pane_t2

0x0001,

0xfca6,	// (0x000569bc) main_mobtv_programe_curr_pane_t

0x2fff,	// (0x00049d15) main_mobtv_programe_next_pane_t1

0x300d,	// (0x00049d23) main_mobtv_programe_next_pane_t2

0x301b,	// (0x00049d31) main_mobtv_programe_next_pane_t3

0x0002,

0xfcab,	// (0x000569c1) main_mobtv_programe_next_pane_t

0x4f85,	// (0x0004bc9b) bg_popup_mobtv_noti_window_pane

0x3029,	// (0x00049d3f) popup_mobtv_noti_window_g1

0x3031,	// (0x00049d47) popup_mobtv_noti_window_t1

0x303f,	// (0x00049d55) popup_mobtv_noti_window_t2

0x0001,

0xfcb2,	// (0x000569c8) popup_mobtv_noti_window_t

0x167f,	// (0x00048395) bg_popup_mobtv_noti_window_pane_g1

0x4f85,	// (0x0004bc9b) sc_clock_pane

0x4f85,	// (0x0004bc9b) main_fs_bigclock_pane

0xb6ce,	// (0x000523e4) blid2_tripm_pane_t4_ParamLimits

0xb6ce,	// (0x000523e4) blid2_tripm_pane_t4

0xbfcc,	// (0x00052ce2) sc_clock_pane_g1_ParamLimits

0xbfcc,	// (0x00052ce2) sc_clock_pane_g1

0xbfda,	// (0x00052cf0) sc_clock_pane_t1_ParamLimits

0xbfda,	// (0x00052cf0) sc_clock_pane_t1

0xbfed,	// (0x00052d03) sc_clock_pane_t2_ParamLimits

0xbfed,	// (0x00052d03) sc_clock_pane_t2

0xbfff,	// (0x00052d15) sc_clock_pane_t3_ParamLimits

0xbfff,	// (0x00052d15) sc_clock_pane_t3

0x0004,

0xfcb7,	// (0x000569cd) sc_clock_pane_t_ParamLimits

0xfcb7,	// (0x000569cd) sc_clock_pane_t

0xccb8,	// (0x000539ce) main_fs_bigclock_indicator_pane_ParamLimits

0xccb8,	// (0x000539ce) main_fs_bigclock_indicator_pane

0xc083,	// (0x00052d99) main_fs_bigclock_pane_g1_ParamLimits

0xc083,	// (0x00052d99) main_fs_bigclock_pane_g1

0xccc4,	// (0x000539da) main_fs_bigclock_pane_t1_ParamLimits

0xccc4,	// (0x000539da) main_fs_bigclock_pane_t1

0xccd6,	// (0x000539ec) main_fs_bigclock_pane_t2_ParamLimits

0xccd6,	// (0x000539ec) main_fs_bigclock_pane_t2

0xccea,	// (0x00053a00) main_fs_bigclock_pane_t3_ParamLimits

0xccea,	// (0x00053a00) main_fs_bigclock_pane_t3

0x0002,

0xfeb6,	// (0x00056bcc) main_fs_bigclock_pane_t_ParamLimits

0xfeb6,	// (0x00056bcc) main_fs_bigclock_pane_t

0x3c29,	// (0x0004a93f) main_fs_bigclock_indicator_pane_g1

0x2d2b,	// (0x00049a41) ncim_query_content_pane_g2_ParamLimits

0x2d2b,	// (0x00049a41) ncim_query_content_pane_g2

0x0001,

0xfc44,	// (0x0005695a) ncim_query_content_pane_g_ParamLimits

0xfc44,	// (0x0005695a) ncim_query_content_pane_g

0xc013,	// (0x00052d29) sc_clock_pane_t4_ParamLimits

0xc013,	// (0x00052d29) sc_clock_pane_t4

0xf115,	// (0x00055e2b) main_radioblah_pane

0x2054,	// (0x00048d6a) cell_call4_button_pane_t1_copy1_ParamLimits

0x2054,	// (0x00048d6a) cell_call4_button_pane_t1_copy1

0xbce7,	// (0x000529fd) main_ncimui_pane_t1_ParamLimits

0xbce7,	// (0x000529fd) main_ncimui_pane_t1

0xbcf9,	// (0x00052a0f) main_ncimui_pane_t2_ParamLimits

0xbcf9,	// (0x00052a0f) main_ncimui_pane_t2

0x0002,

0xfc3d,	// (0x00056953) main_ncimui_pane_t_ParamLimits

0xfc3d,	// (0x00056953) main_ncimui_pane_t

0x316d,	// (0x00049e83) main_radioblah_anim_pane_ParamLimits

0x316d,	// (0x00049e83) main_radioblah_anim_pane

0x317e,	// (0x00049e94) main_radioblah_info_pane_ParamLimits

0x317e,	// (0x00049e94) main_radioblah_info_pane

0x3192,	// (0x00049ea8) main_radioblah_pane_t1_ParamLimits

0x3192,	// (0x00049ea8) main_radioblah_pane_t1

0x31ae,	// (0x00049ec4) main_radioblah_pane_t2_ParamLimits

0x31ae,	// (0x00049ec4) main_radioblah_pane_t2

0x0003,

0xfcd8,	// (0x000569ee) main_radioblah_pane_t_ParamLimits

0xfcd8,	// (0x000569ee) main_radioblah_pane_t

0xc0d5,	// (0x00052deb) main_radioblah_rocker_ctrl_pane_ParamLimits

0xc0d5,	// (0x00052deb) main_radioblah_rocker_ctrl_pane

0x31f6,	// (0x00049f0c) main_radioblah_info_pane_t1_ParamLimits

0x31f6,	// (0x00049f0c) main_radioblah_info_pane_t1

0xc11a,	// (0x00052e30) main_radioblah_info_pane_t2_ParamLimits

0xc11a,	// (0x00052e30) main_radioblah_info_pane_t2

0x0003,

0xfce1,	// (0x000569f7) main_radioblah_info_pane_t_ParamLimits

0xfce1,	// (0x000569f7) main_radioblah_info_pane_t

0x167f,	// (0x00048395) main_radioblah_rocker_ctrl_pane_g1

0xc1ca,	// (0x00052ee0) main_radioblah_rocker_ctrl_pane_g2

0xc1d2,	// (0x00052ee8) main_radioblah_rocker_ctrl_pane_g3

0xc1da,	// (0x00052ef0) main_radioblah_rocker_ctrl_pane_g4

0xc1e2,	// (0x00052ef8) main_radioblah_rocker_ctrl_pane_g5

0xc1ea,	// (0x00052f00) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfcea,	// (0x00056a00) main_radioblah_rocker_ctrl_pane_g

0xbca7,	// (0x000529bd) main_cset_text2_pane_t1_copy1_ParamLimits

0xa3ba,	// (0x000510d0) cam4_image_uncrop_qvga_pane

0xa4f5,	// (0x0005120b) vid4_image_uncrop_qcif_pane

0xb85c,	// (0x00052572) cam6_image_uncrop_qvga_pane_ParamLimits

0xb85c,	// (0x00052572) cam6_image_uncrop_qvga_pane

0x2985,	// (0x0004969b) vid6_image_uncrop_qcif_pane_ParamLimits

0x2985,	// (0x0004969b) vid6_image_uncrop_qcif_pane

0x4f85,	// (0x0004bc9b) bg_popup_preview_window_pane_cp03

0x2cdd,	// (0x000499f3) list_cset_text2_pane

0x2ce5,	// (0x000499fb) main_cset6_text2_pane_g1

0x2ced,	// (0x00049a03) main_cset6_text2_pane_t1

0xc1f2,	// (0x00052f08) list_cset_text2_pane_t1_ParamLimits

0xc1f2,	// (0x00052f08) list_cset_text2_pane_t1

0xf115,	// (0x00055e2b) main_radioblah_pane_ParamLimits

0xbf72,	// (0x00052c88) main_mobtv_info_pane_t3_ParamLimits

0xbf72,	// (0x00052c88) main_mobtv_info_pane_t3

0xc0c3,	// (0x00052dd9) main_radioblah_pane_g1

0xc0ee,	// (0x00052e04) main_radioblah_info_pane_g1

0xc16f,	// (0x00052e85) main_radioblah_info_pane_t3_ParamLimits

0xc16f,	// (0x00052e85) main_radioblah_info_pane_t3

0x7246,	// (0x0004df5c) highlight_cell_cale_month_pane_ParamLimits

0x7246,	// (0x0004df5c) highlight_cell_cale_month_pane

0x4f85,	// (0x0004bc9b) main_phob_fisheye_pane

0x1a15,	// (0x0004872b) scroll_pane_cp0031_ParamLimits

0x1a15,	// (0x0004872b) scroll_pane_cp0031

0x2a93,	// (0x000497a9) wait_bar_pane_cp08_ParamLimits

0xba68,	// (0x0005277e) cset_list_set_pane_copy1_ParamLimits

0x3230,	// (0x00049f46) highlight_cell_cale_month_pane_g1

0xc20f,	// (0x00052f25) highlight_cell_cale_month_pane_t1

0x26b3,	// (0x000493c9) list_gen_pane_cp01

0x2248,	// (0x00048f5e) scroll_pane_01

0xc21d,	// (0x00052f33) list_single_double_fisheye_pane

0xc226,	// (0x00052f3c) list_double_fisheye_pane_g1_ParamLimits

0xc226,	// (0x00052f3c) list_double_fisheye_pane_g1

0xc232,	// (0x00052f48) list_double_fisheye_pane_g2_ParamLimits

0xc232,	// (0x00052f48) list_double_fisheye_pane_g2

0xc246,	// (0x00052f5c) list_double_fisheye_pane_g3_ParamLimits

0xc246,	// (0x00052f5c) list_double_fisheye_pane_g3

0x0004,

0xfcf7,	// (0x00056a0d) list_double_fisheye_pane_g_ParamLimits

0xfcf7,	// (0x00056a0d) list_double_fisheye_pane_g

0xc26f,	// (0x00052f85) list_double_fisheye_pane_t1_ParamLimits

0xc26f,	// (0x00052f85) list_double_fisheye_pane_t1

0xc28a,	// (0x00052fa0) list_double_fisheye_pane_t2_ParamLimits

0xc28a,	// (0x00052fa0) list_double_fisheye_pane_t2

0x0001,

0xfd02,	// (0x00056a18) list_double_fisheye_pane_t_ParamLimits

0xfd02,	// (0x00056a18) list_double_fisheye_pane_t

0x4f85,	// (0x0004bc9b) main_call5_pane

0xc039,	// (0x00052d4f) sc_swipe_pane_ParamLimits

0xc039,	// (0x00052d4f) sc_swipe_pane

0xc2b8,	// (0x00052fce) call5_image_pane_ParamLimits

0xc2b8,	// (0x00052fce) call5_image_pane

0xc2c8,	// (0x00052fde) call5_swipe_1_pane_ParamLimits

0xc2c8,	// (0x00052fde) call5_swipe_1_pane

0xc2d4,	// (0x00052fea) call5_swipe_2_pane_ParamLimits

0xc2d4,	// (0x00052fea) call5_swipe_2_pane

0xc2ee,	// (0x00053004) popup_call5_audio_first_window_ParamLimits

0xc2ee,	// (0x00053004) popup_call5_audio_first_window

0x18eb,	// (0x00048601) call5_swipe_1_pane_g1_ParamLimits

0x18eb,	// (0x00048601) call5_swipe_1_pane_g1

0x3238,	// (0x00049f4e) call5_swipe_1_pane_g2_ParamLimits

0x3238,	// (0x00049f4e) call5_swipe_1_pane_g2

0x0001,

0xfd07,	// (0x00056a1d) call5_swipe_1_pane_g_ParamLimits

0xfd07,	// (0x00056a1d) call5_swipe_1_pane_g

0x3244,	// (0x00049f5a) call5_swipe_1_pane_t1_ParamLimits

0x3244,	// (0x00049f5a) call5_swipe_1_pane_t1

0x18eb,	// (0x00048601) call5_swipe_2_pane_g1_ParamLimits

0x18eb,	// (0x00048601) call5_swipe_2_pane_g1

0x3259,	// (0x00049f6f) call5_swipe_2_pane_g2_ParamLimits

0x3259,	// (0x00049f6f) call5_swipe_2_pane_g2

0x0001,

0xfd0c,	// (0x00056a22) call5_swipe_2_pane_g_ParamLimits

0xfd0c,	// (0x00056a22) call5_swipe_2_pane_g

0x3265,	// (0x00049f7b) call5_swipe_2_pane_t1_ParamLimits

0x3265,	// (0x00049f7b) call5_swipe_2_pane_t1

0x327a,	// (0x00049f90) sc_swipe_pane_g1_ParamLimits

0x327a,	// (0x00049f90) sc_swipe_pane_g1

0x3287,	// (0x00049f9d) sc_swipe_pane_g2_ParamLimits

0x3287,	// (0x00049f9d) sc_swipe_pane_g2

0x0001,

0xfd11,	// (0x00056a27) sc_swipe_pane_g_ParamLimits

0xfd11,	// (0x00056a27) sc_swipe_pane_g

0x3293,	// (0x00049fa9) sc_swipe_pane_t1_ParamLimits

0x3293,	// (0x00049fa9) sc_swipe_pane_t1

0x4f85,	// (0x0004bc9b) main_cmail_launcher_pane

0xc2fc,	// (0x00053012) aid_size_cell_cmail_l_ParamLimits

0xc2fc,	// (0x00053012) aid_size_cell_cmail_l

0xc30c,	// (0x00053022) grid_cmail_l_pane_ParamLimits

0xc30c,	// (0x00053022) grid_cmail_l_pane

0xc31c,	// (0x00053032) cell_cmail_l_pane_ParamLimits

0xc31c,	// (0x00053032) cell_cmail_l_pane

0xc330,	// (0x00053046) cell_cmail_l_pane_g1_ParamLimits

0xc330,	// (0x00053046) cell_cmail_l_pane_g1

0xc33c,	// (0x00053052) cell_cmail_l_pane_t1_ParamLimits

0xc33c,	// (0x00053052) cell_cmail_l_pane_t1

0x32a8,	// (0x00049fbe) cell_cmail_l_pane_t2_ParamLimits

0x32a8,	// (0x00049fbe) cell_cmail_l_pane_t2

0x0001,

0xfd16,	// (0x00056a2c) cell_cmail_l_pane_t_ParamLimits

0xfd16,	// (0x00056a2c) cell_cmail_l_pane_t

0xf115,	// (0x00055e2b) grid_highlight_pane_cp018_ParamLimits

0xf115,	// (0x00055e2b) grid_highlight_pane_cp018

0x50b0,	// (0x0004bdc6) main2_pane_ParamLimits

0x50b0,	// (0x0004bdc6) main2_pane

0xd674,	// (0x0005438a) popup_sp_fs_action_menu_bg_pane_g1

0xd67c,	// (0x00054392) popup_sp_fs_action_menu_bg_pane_g2

0xd684,	// (0x0005439a) popup_sp_fs_action_menu_bg_pane_g3

0xd68c,	// (0x000543a2) popup_sp_fs_action_menu_bg_pane_g4

0xd694,	// (0x000543aa) popup_sp_fs_action_menu_bg_pane_g5

0xd69c,	// (0x000543b2) popup_sp_fs_action_menu_bg_pane_g6

0xd6a4,	// (0x000543ba) popup_sp_fs_action_menu_bg_pane_g7

0xd6ac,	// (0x000543c2) popup_sp_fs_action_menu_bg_pane_g8

0xd6b4,	// (0x000543ca) popup_sp_fs_action_menu_bg_pane_g9

0xd6bc,	// (0x000543d2) popup_sp_fs_action_menu_bg_pane_g10

0xd6bc,	// (0x000543d2) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf1ef,	// (0x00055f05) popup_sp_fs_action_menu_bg_pane_g

0x0bac,	// (0x000478c2) list_medium_line_x2_t3_g3_g1_ParamLimits

0x0bac,	// (0x000478c2) list_medium_line_x2_t3_g3_g1

0x0bb8,	// (0x000478ce) list_medium_line_x2_t3_g3_g2_ParamLimits

0x0bb8,	// (0x000478ce) list_medium_line_x2_t3_g3_g2

0x0bc4,	// (0x000478da) list_medium_line_x2_t3_g3_g3_ParamLimits

0x0bc4,	// (0x000478da) list_medium_line_x2_t3_g3_g3

0x0002,

0xf29f,	// (0x00055fb5) list_medium_line_x2_t3_g3_g_ParamLimits

0xf29f,	// (0x00055fb5) list_medium_line_x2_t3_g3_g

0x0bd0,	// (0x000478e6) list_medium_line_x2_t3_g3_t1_ParamLimits

0x0bd0,	// (0x000478e6) list_medium_line_x2_t3_g3_t1

0x6568,	// (0x0004d27e) list_medium_line_x2_t3_g3_t2_ParamLimits

0x6568,	// (0x0004d27e) list_medium_line_x2_t3_g3_t2

0x0be5,	// (0x000478fb) list_medium_line_x2_t3_g3_t3_ParamLimits

0x0be5,	// (0x000478fb) list_medium_line_x2_t3_g3_t3

0x0002,

0xf2a6,	// (0x00055fbc) list_medium_line_x2_t3_g3_t_ParamLimits

0xf2a6,	// (0x00055fbc) list_medium_line_x2_t3_g3_t

0x0bac,	// (0x000478c2) list_medium_line_x2_t3_g2_g1_ParamLimits

0x0bac,	// (0x000478c2) list_medium_line_x2_t3_g2_g1

0x0bc4,	// (0x000478da) list_medium_line_x2_t3_g2_g2_ParamLimits

0x0bc4,	// (0x000478da) list_medium_line_x2_t3_g2_g2

0x0001,

0xf2ad,	// (0x00055fc3) list_medium_line_x2_t3_g2_g_ParamLimits

0xf2ad,	// (0x00055fc3) list_medium_line_x2_t3_g2_g

0x0bfa,	// (0x00047910) list_medium_line_x2_t3_g2_t1_ParamLimits

0x0bfa,	// (0x00047910) list_medium_line_x2_t3_g2_t1

0x0c10,	// (0x00047926) list_medium_line_x2_t3_g2_t2_ParamLimits

0x0c10,	// (0x00047926) list_medium_line_x2_t3_g2_t2

0x0be5,	// (0x000478fb) list_medium_line_x2_t3_g2_t3_ParamLimits

0x0be5,	// (0x000478fb) list_medium_line_x2_t3_g2_t3

0x0002,

0xf2b2,	// (0x00055fc8) list_medium_line_x2_t3_g2_t_ParamLimits

0xf2b2,	// (0x00055fc8) list_medium_line_x2_t3_g2_t

0x0bac,	// (0x000478c2) list_medium_line_x2_t4_g4_g1_ParamLimits

0x0bac,	// (0x000478c2) list_medium_line_x2_t4_g4_g1

0x0c22,	// (0x00047938) list_medium_line_x2_t4_g4_g2_ParamLimits

0x0c22,	// (0x00047938) list_medium_line_x2_t4_g4_g2

0x0bb8,	// (0x000478ce) list_medium_line_x2_t4_g4_g3_ParamLimits

0x0bb8,	// (0x000478ce) list_medium_line_x2_t4_g4_g3

0x0c2e,	// (0x00047944) list_medium_line_x2_t4_g4_g4_ParamLimits

0x0c2e,	// (0x00047944) list_medium_line_x2_t4_g4_g4

0x0003,

0xf2b9,	// (0x00055fcf) list_medium_line_x2_t4_g4_g_ParamLimits

0xf2b9,	// (0x00055fcf) list_medium_line_x2_t4_g4_g

0x657a,	// (0x0004d290) list_medium_line_x2_t4_g4_t1_ParamLimits

0x657a,	// (0x0004d290) list_medium_line_x2_t4_g4_t1

0x6594,	// (0x0004d2aa) list_medium_line_x2_t4_g4_t2_ParamLimits

0x6594,	// (0x0004d2aa) list_medium_line_x2_t4_g4_t2

0x65aa,	// (0x0004d2c0) list_medium_line_x2_t4_g4_t3_ParamLimits

0x65aa,	// (0x0004d2c0) list_medium_line_x2_t4_g4_t3

0x0c3a,	// (0x00047950) list_medium_line_x2_t4_g4_t4_ParamLimits

0x0c3a,	// (0x00047950) list_medium_line_x2_t4_g4_t4

0x0003,

0xf2c2,	// (0x00055fd8) list_medium_line_x2_t4_g4_t_ParamLimits

0xf2c2,	// (0x00055fd8) list_medium_line_x2_t4_g4_t

0x0bac,	// (0x000478c2) list_medium_line_x2_t2_g4_g1_ParamLimits

0x0bac,	// (0x000478c2) list_medium_line_x2_t2_g4_g1

0x0c22,	// (0x00047938) list_medium_line_x2_t2_g4_g2_ParamLimits

0x0c22,	// (0x00047938) list_medium_line_x2_t2_g4_g2

0x0bb8,	// (0x000478ce) list_medium_line_x2_t2_g4_g3_ParamLimits

0x0bb8,	// (0x000478ce) list_medium_line_x2_t2_g4_g3

0x0bc4,	// (0x000478da) list_medium_line_x2_t2_g4_g4_ParamLimits

0x0bc4,	// (0x000478da) list_medium_line_x2_t2_g4_g4

0x0003,

0xf329,	// (0x0005603f) list_medium_line_x2_t2_g4_g_ParamLimits

0xf329,	// (0x0005603f) list_medium_line_x2_t2_g4_g

0x0c4c,	// (0x00047962) list_medium_line_x2_t2_g4_t1_ParamLimits

0x0c4c,	// (0x00047962) list_medium_line_x2_t2_g4_t1

0x0be5,	// (0x000478fb) list_medium_line_x2_t2_g4_t2_ParamLimits

0x0be5,	// (0x000478fb) list_medium_line_x2_t2_g4_t2

0x0001,

0xf332,	// (0x00056048) list_medium_line_x2_t2_g4_t_ParamLimits

0xf332,	// (0x00056048) list_medium_line_x2_t2_g4_t

0x0bac,	// (0x000478c2) list_medium_line_x2_t2_g3_g1_ParamLimits

0x0bac,	// (0x000478c2) list_medium_line_x2_t2_g3_g1

0x0bb8,	// (0x000478ce) list_medium_line_x2_t2_g3_g2_ParamLimits

0x0bb8,	// (0x000478ce) list_medium_line_x2_t2_g3_g2

0x0bc4,	// (0x000478da) list_medium_line_x2_t2_g3_g3_ParamLimits

0x0bc4,	// (0x000478da) list_medium_line_x2_t2_g3_g3

0x0002,

0xf29f,	// (0x00055fb5) list_medium_line_x2_t2_g3_g_ParamLimits

0xf29f,	// (0x00055fb5) list_medium_line_x2_t2_g3_g

0x0c61,	// (0x00047977) list_medium_line_x2_t2_g3_t1_ParamLimits

0x0c61,	// (0x00047977) list_medium_line_x2_t2_g3_t1

0x0be5,	// (0x000478fb) list_medium_line_x2_t2_g3_t2_ParamLimits

0x0be5,	// (0x000478fb) list_medium_line_x2_t2_g3_t2

0x0001,

0xf337,	// (0x0005604d) list_medium_line_x2_t2_g3_t_ParamLimits

0xf337,	// (0x0005604d) list_medium_line_x2_t2_g3_t

0x73f8,	// (0x0004e10e) main_sp_fs_list_pane_ParamLimits

0x73f8,	// (0x0004e10e) main_sp_fs_list_pane

0x7404,	// (0x0004e11a) sp_fs_scroll_pane_ParamLimits

0x7404,	// (0x0004e11a) sp_fs_scroll_pane

0x7410,	// (0x0004e126) list_medium_line_x2_t3_t1

0x7420,	// (0x0004e136) list_medium_line_x2_t3_t2

0x0ca4,	// (0x000479ba) list_medium_line_x2_t3_t3

0x0002,

0xf382,	// (0x00056098) list_medium_line_x2_t3_t

0x742e,	// (0x0004e144) list_medium_line_x3_t4_t1

0x743e,	// (0x0004e154) list_medium_line_x3_t4_t2

0x0cb2,	// (0x000479c8) list_medium_line_x3_t4_t3

0x0ca4,	// (0x000479ba) list_medium_line_x3_t4_t4

0x0003,

0xf389,	// (0x0005609f) list_medium_line_x3_t4_t

0x744c,	// (0x0004e162) list_medium_line_x4_t5_t1

0x745c,	// (0x0004e172) list_medium_line_x4_t5_t2

0x0cb2,	// (0x000479c8) list_medium_line_x4_t5_t3

0x0cc0,	// (0x000479d6) list_medium_line_x4_t5_t4

0x0ca4,	// (0x000479ba) list_medium_line_x4_t5_t5

0x0004,

0xf392,	// (0x000560a8) list_medium_line_x4_t5_t

0x0bac,	// (0x000478c2) list_medium_line_t4_g4_g1_ParamLimits

0x0bac,	// (0x000478c2) list_medium_line_t4_g4_g1

0x0c2e,	// (0x00047944) list_medium_line_t4_g4_g2_ParamLimits

0x0c2e,	// (0x00047944) list_medium_line_t4_g4_g2

0x0cce,	// (0x000479e4) list_medium_line_t4_g4_g3_ParamLimits

0x0cce,	// (0x000479e4) list_medium_line_t4_g4_g3

0x0bc4,	// (0x000478da) list_medium_line_t4_g4_g4_ParamLimits

0x0bc4,	// (0x000478da) list_medium_line_t4_g4_g4

0x0003,

0xf39d,	// (0x000560b3) list_medium_line_t4_g4_g_ParamLimits

0xf39d,	// (0x000560b3) list_medium_line_t4_g4_g

0x0cda,	// (0x000479f0) list_medium_line_t4_g4_t1_ParamLimits

0x0cda,	// (0x000479f0) list_medium_line_t4_g4_t1

0x0cef,	// (0x00047a05) list_medium_line_t4_g4_t2_ParamLimits

0x0cef,	// (0x00047a05) list_medium_line_t4_g4_t2

0x0d04,	// (0x00047a1a) list_medium_line_t4_g4_t3_ParamLimits

0x0d04,	// (0x00047a1a) list_medium_line_t4_g4_t3

0x0be5,	// (0x000478fb) list_medium_line_t4_g4_t4_ParamLimits

0x0be5,	// (0x000478fb) list_medium_line_t4_g4_t4

0x0003,

0xf3a6,	// (0x000560bc) list_medium_line_t4_g4_t_ParamLimits

0xf3a6,	// (0x000560bc) list_medium_line_t4_g4_t

0x757b,	// (0x0004e291) chi_dic_find_pane_g1

0x8595,	// (0x0004f2ab) main_tport_pane

0x2380,	// (0x00049096) list_medium_line_plain_t1

0x2396,	// (0x000490ac) list_medium_line_t2_g2_g1_ParamLimits

0x2396,	// (0x000490ac) list_medium_line_t2_g2_g1

0x23a2,	// (0x000490b8) list_medium_line_t2_g2_g2_ParamLimits

0x23a2,	// (0x000490b8) list_medium_line_t2_g2_g2

0x0001,

0xfa59,	// (0x0005676f) list_medium_line_t2_g2_g_ParamLimits

0xfa59,	// (0x0005676f) list_medium_line_t2_g2_g

0xaf87,	// (0x00051c9d) list_medium_line_t2_g2_t1_ParamLimits

0xaf87,	// (0x00051c9d) list_medium_line_t2_g2_t1

0xafa1,	// (0x00051cb7) list_medium_line_t2_g2_t2_ParamLimits

0xafa1,	// (0x00051cb7) list_medium_line_t2_g2_t2

0x0001,

0xfa5e,	// (0x00056774) list_medium_line_t2_g2_t_ParamLimits

0xfa5e,	// (0x00056774) list_medium_line_t2_g2_t

0x26bc,	// (0x000493d2) aid_sp_fs_list_icon_a_sm

0x26c4,	// (0x000493da) aid_sp_fs_list_icon_d

0x26cc,	// (0x000493e2) aid_sp_fs_text_primary

0x26d5,	// (0x000493eb) aid_sp_fs_text_secondary

0x26de,	// (0x000493f4) list_medium_line

0x26de,	// (0x000493f4) list_medium_line_g2

0x26de,	// (0x000493f4) list_medium_line_g3

0x26de,	// (0x000493f4) list_medium_line_plain

0x26de,	// (0x000493f4) list_medium_line_plain_t2

0x26de,	// (0x000493f4) list_medium_line_plain_t3

0x26de,	// (0x000493f4) list_medium_line_right_icon

0x26de,	// (0x000493f4) list_medium_line_right_iconx2

0x26de,	// (0x000493f4) list_medium_line_t2

0x26de,	// (0x000493f4) list_medium_line_t2_g2

0x26de,	// (0x000493f4) list_medium_line_t2_g3

0x26de,	// (0x000493f4) list_medium_line_t2_right_icon

0x26de,	// (0x000493f4) list_medium_line_t2_right_iconx2

0x26de,	// (0x000493f4) list_medium_line_t3

0x26de,	// (0x000493f4) list_medium_line_t3_g2

0x26de,	// (0x000493f4) list_medium_line_t3_g3

0x26de,	// (0x000493f4) list_medium_line_t3_right_iconx2

0x26e7,	// (0x000493fd) list_medium_line_t4_g4

0x26f0,	// (0x00049406) list_medium_line_x2

0x26f0,	// (0x00049406) list_medium_line_x2_t2_g2

0x26f0,	// (0x00049406) list_medium_line_x2_t2_g3

0x26f0,	// (0x00049406) list_medium_line_x2_t2_g4

0x26f0,	// (0x00049406) list_medium_line_x2_t3

0x26f0,	// (0x00049406) list_medium_line_x2_t3_g2

0x26f0,	// (0x00049406) list_medium_line_x2_t3_g3

0x26f0,	// (0x00049406) list_medium_line_x2_t3_g4

0x26f0,	// (0x00049406) list_medium_line_x2_t4_g2

0x26f0,	// (0x00049406) list_medium_line_x2_t4_g4

0x26f9,	// (0x0004940f) list_medium_line_x3

0x26f9,	// (0x0004940f) list_medium_line_x3_t4

0x26f9,	// (0x0004940f) list_medium_line_x3_t4_g4

0x26e7,	// (0x000493fd) list_medium_line_x4_t4

0x26e7,	// (0x000493fd) list_medium_line_x4_t4_g7

0x26e7,	// (0x000493fd) list_medium_line_x4_t5

0x2702,	// (0x00049418) list_single_fs_dyc_pane_ParamLimits

0x2702,	// (0x00049418) list_single_fs_dyc_pane

0x0bac,	// (0x000478c2) list_medium_line_x4_t4_g7_g1_ParamLimits

0x0bac,	// (0x000478c2) list_medium_line_x4_t4_g7_g1

0x2c0c,	// (0x00049922) list_medium_line_x4_t4_g7_g2_ParamLimits

0x2c0c,	// (0x00049922) list_medium_line_x4_t4_g7_g2

0x2c18,	// (0x0004992e) list_medium_line_x4_t4_g7_g3_ParamLimits

0x2c18,	// (0x0004992e) list_medium_line_x4_t4_g7_g3

0x2c27,	// (0x0004993d) list_medium_line_x4_t4_g7_g4_ParamLimits

0x2c27,	// (0x0004993d) list_medium_line_x4_t4_g7_g4

0x2c33,	// (0x00049949) list_medium_line_x4_t4_g7_g5_ParamLimits

0x2c33,	// (0x00049949) list_medium_line_x4_t4_g7_g5

0x2c42,	// (0x00049958) list_medium_line_x4_t4_g7_g6_ParamLimits

0x2c42,	// (0x00049958) list_medium_line_x4_t4_g7_g6

0x2c51,	// (0x00049967) list_medium_line_x4_t4_g7_g7_ParamLimits

0x2c51,	// (0x00049967) list_medium_line_x4_t4_g7_g7

0x0006,

0xfc23,	// (0x00056939) list_medium_line_x4_t4_g7_g_ParamLimits

0xfc23,	// (0x00056939) list_medium_line_x4_t4_g7_g

0x2c5d,	// (0x00049973) list_medium_line_x4_t4_g7_t1_ParamLimits

0x2c5d,	// (0x00049973) list_medium_line_x4_t4_g7_t1

0x2c72,	// (0x00049988) list_medium_line_x4_t4_g7_t2_ParamLimits

0x2c72,	// (0x00049988) list_medium_line_x4_t4_g7_t2

0x2c87,	// (0x0004999d) list_medium_line_x4_t4_g7_t3_ParamLimits

0x2c87,	// (0x0004999d) list_medium_line_x4_t4_g7_t3

0x2c9c,	// (0x000499b2) list_medium_line_x4_t4_g7_t4_ParamLimits

0x2c9c,	// (0x000499b2) list_medium_line_x4_t4_g7_t4

0x2cae,	// (0x000499c4) list_medium_line_x4_t4_g7_t5_ParamLimits

0x2cae,	// (0x000499c4) list_medium_line_x4_t4_g7_t5

0x0004,

0xfc32,	// (0x00056948) list_medium_line_x4_t4_g7_t_ParamLimits

0xfc32,	// (0x00056948) list_medium_line_x4_t4_g7_t

0x2cc0,	// (0x000499d6) list_single_dyc_row_pane_ParamLimits

0x2cc0,	// (0x000499d6) list_single_dyc_row_pane

0xc2ac,	// (0x00052fc2) call5_gesture_pane_ParamLimits

0xc2ac,	// (0x00052fc2) call5_gesture_pane

0xc2e0,	// (0x00052ff6) call5_windows_pane_ParamLimits

0xc2e0,	// (0x00052ff6) call5_windows_pane

0xc352,	// (0x00053068) call5_swipe_1_pane_cp_ParamLimits

0xc352,	// (0x00053068) call5_swipe_1_pane_cp

0xc35e,	// (0x00053074) call5_swipe_2_pane_cp_ParamLimits

0xc35e,	// (0x00053074) call5_swipe_2_pane_cp

0xe0c2,	// (0x00054dd8) call5_image_pane_cp

0xc36a,	// (0x00053080) popup_call5_audio_first_window_cp_ParamLimits

0xc36a,	// (0x00053080) popup_call5_audio_first_window_cp

0x327a,	// (0x00049f90) call5_swipe_1_pane_g1_cp_ParamLimits

0x327a,	// (0x00049f90) call5_swipe_1_pane_g1_cp

0x32ba,	// (0x00049fd0) call5_swipe_1_pane_g2_cp

0x3293,	// (0x00049fa9) call5_swipe_1_pane_t1_cp_ParamLimits

0x3293,	// (0x00049fa9) call5_swipe_1_pane_t1_cp

0x327a,	// (0x00049f90) call5_swipe_2_pane_g1_cp_ParamLimits

0x327a,	// (0x00049f90) call5_swipe_2_pane_g1_cp

0x32c2,	// (0x00049fd8) call5_swipe_2_pane_g2_cp

0x32ca,	// (0x00049fe0) call5_swipe_2_pane_t1_cp_ParamLimits

0x32ca,	// (0x00049fe0) call5_swipe_2_pane_t1_cp

0xf115,	// (0x00055e2b) main_sp_fs_email_pane

0x32df,	// (0x00049ff5) main_sp_fs_listscroll_pane_te

0x32e8,	// (0x00049ffe) popup_sp_fs_action_menu_pane_ParamLimits

0x32e8,	// (0x00049ffe) popup_sp_fs_action_menu_pane

0x167f,	// (0x00048395) bg_sp_fs_ctrlbar_pane_g1

0x332c,	// (0x0004a042) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0x3335,	// (0x0004a04b) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0x333e,	// (0x0004a054) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0x167f,	// (0x00048395) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfd1b,	// (0x00056a31) bg_sp_fs_ctrlbar_ddmenu_pane_g

0x1464,	// (0x0004817a) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0x1464,	// (0x0004817a) bg_sp_fs_ctrlbar_ddmenu_pane

0x3347,	// (0x0004a05d) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0x3347,	// (0x0004a05d) main_sp_fs_ctrlbar_ddmenu_pane_g1

0x3353,	// (0x0004a069) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0x3353,	// (0x0004a069) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfd24,	// (0x00056a3a) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfd24,	// (0x00056a3a) main_sp_fs_ctrlbar_ddmenu_pane_g

0x335f,	// (0x0004a075) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0x335f,	// (0x0004a075) main_sp_fs_ctrlbar_ddmenu_pane_t1

0x3379,	// (0x0004a08f) list_medium_line_t2_right_icon_g1

0xc378,	// (0x0005308e) list_medium_line_t2_right_icon_t1

0xc388,	// (0x0005309e) list_medium_line_t2_right_icon_t2

0x0001,

0xfd29,	// (0x00056a3f) list_medium_line_t2_right_icon_t

0x1179,	// (0x00047e8f) bg_sp_fs_ctrlbar_pane_ParamLimits

0x1179,	// (0x00047e8f) bg_sp_fs_ctrlbar_pane

0xc3ed,	// (0x00053103) main_sp_fs_ctrlbar_button_pane_cp01

0xc3f5,	// (0x0005310b) main_sp_fs_ctrlbar_ddmenu_pane

0x33b9,	// (0x0004a0cf) main_sp_fs_ctrlbar_pane_g1

0x33c5,	// (0x0004a0db) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfd2e,	// (0x00056a44) main_sp_fs_ctrlbar_pane_g

0x33d1,	// (0x0004a0e7) main_sp_fs_ctrlbar_pane_t1

0xc3ff,	// (0x00053115) main_sp_fs_ctrlbar_pane

0xc41b,	// (0x00053131) main_sp_fs_listscroll_pane_te_cp01

0xc42c,	// (0x00053142) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0xc42c,	// (0x00053142) popup_sp_fs_action_menu_pane_cp01

0xf115,	// (0x00055e2b) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0xf115,	// (0x00055e2b) bg_sp_fs_highlight_list_pane_cp01

0x33e6,	// (0x0004a0fc) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0x33e6,	// (0x0004a0fc) sp_fs_action_menu_list_gene_pane_g1

0x33f5,	// (0x0004a10b) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0x33f5,	// (0x0004a10b) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfd33,	// (0x00056a49) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfd33,	// (0x00056a49) sp_fs_action_menu_list_gene_pane_g

0x3402,	// (0x0004a118) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0x3402,	// (0x0004a118) sp_fs_action_menu_list_gene_pane_t1

0x341a,	// (0x0004a130) sp_fs_action_menu_list_gene_pane_ParamLimits

0x341a,	// (0x0004a130) sp_fs_action_menu_list_gene_pane

0x3439,	// (0x0004a14f) popup_sp_fs_action_menu_bg_pane_ParamLimits

0x3439,	// (0x0004a14f) popup_sp_fs_action_menu_bg_pane

0x3447,	// (0x0004a15d) sp_fs_action_menu_list_pane_ParamLimits

0x3447,	// (0x0004a15d) sp_fs_action_menu_list_pane

0x3467,	// (0x0004a17d) sp_fs_scroll_pane_cp01_ParamLimits

0x3467,	// (0x0004a17d) sp_fs_scroll_pane_cp01

0xc444,	// (0x0005315a) list_medium_line_plain_t2_t1

0xc454,	// (0x0005316a) list_medium_line_plain_t2_t2

0x0001,

0xfd38,	// (0x00056a4e) list_medium_line_plain_t2_t

0xc462,	// (0x00053178) list_medium_line_plain_t3_t1

0xc472,	// (0x00053188) list_medium_line_plain_t3_t2

0xc480,	// (0x00053196) list_medium_line_plain_t3_t3

0x0002,

0xfd3d,	// (0x00056a53) list_medium_line_plain_t3_t

0x0bac,	// (0x000478c2) list_medium_line_x2_t2_g2_g1_ParamLimits

0x0bac,	// (0x000478c2) list_medium_line_x2_t2_g2_g1

0x0bc4,	// (0x000478da) list_medium_line_x2_t2_g2_g2_ParamLimits

0x0bc4,	// (0x000478da) list_medium_line_x2_t2_g2_g2

0x0001,

0xf2ad,	// (0x00055fc3) list_medium_line_x2_t2_g2_g_ParamLimits

0xf2ad,	// (0x00055fc3) list_medium_line_x2_t2_g2_g

0x0cda,	// (0x000479f0) list_medium_line_x2_t2_g2_t1_ParamLimits

0x0cda,	// (0x000479f0) list_medium_line_x2_t2_g2_t1

0x0be5,	// (0x000478fb) list_medium_line_x2_t2_g2_t2_ParamLimits

0x0be5,	// (0x000478fb) list_medium_line_x2_t2_g2_t2

0x0001,

0xfd44,	// (0x00056a5a) list_medium_line_x2_t2_g2_t_ParamLimits

0xfd44,	// (0x00056a5a) list_medium_line_x2_t2_g2_t

0x0bac,	// (0x000478c2) list_medium_line_x2_t4_g2_g1_ParamLimits

0x0bac,	// (0x000478c2) list_medium_line_x2_t4_g2_g1

0x348d,	// (0x0004a1a3) list_medium_line_x2_t4_g2_g2_ParamLimits

0x348d,	// (0x0004a1a3) list_medium_line_x2_t4_g2_g2

0x0001,

0xfd49,	// (0x00056a5f) list_medium_line_x2_t4_g2_g_ParamLimits

0xfd49,	// (0x00056a5f) list_medium_line_x2_t4_g2_g

0xc48e,	// (0x000531a4) list_medium_line_x2_t4_g2_t1_ParamLimits

0xc48e,	// (0x000531a4) list_medium_line_x2_t4_g2_t1

0xc4a8,	// (0x000531be) list_medium_line_x2_t4_g2_t2_ParamLimits

0xc4a8,	// (0x000531be) list_medium_line_x2_t4_g2_t2

0xc4bd,	// (0x000531d3) list_medium_line_x2_t4_g2_t3_ParamLimits

0xc4bd,	// (0x000531d3) list_medium_line_x2_t4_g2_t3

0x0be5,	// (0x000478fb) list_medium_line_x2_t4_g2_t4_ParamLimits

0x0be5,	// (0x000478fb) list_medium_line_x2_t4_g2_t4

0x0003,

0xfd4e,	// (0x00056a64) list_medium_line_x2_t4_g2_t_ParamLimits

0xfd4e,	// (0x00056a64) list_medium_line_x2_t4_g2_t

0x349f,	// (0x0004a1b5) list_medium_line_t3_right_iconx2_g1

0x3379,	// (0x0004a08f) list_medium_line_t3_right_iconx2_g2

0xc4d2,	// (0x000531e8) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfd57,	// (0x00056a6d) list_medium_line_t3_right_iconx2_g

0xc4da,	// (0x000531f0) list_medium_line_t3_right_iconx2_t1

0xc4ea,	// (0x00053200) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfd5e,	// (0x00056a74) list_medium_line_t3_right_iconx2_t

0x0bac,	// (0x000478c2) list_medium_line_x3_t4_g4_g1_ParamLimits

0x0bac,	// (0x000478c2) list_medium_line_x3_t4_g4_g1

0x0bb8,	// (0x000478ce) list_medium_line_x3_t4_g4_g2_ParamLimits

0x0bb8,	// (0x000478ce) list_medium_line_x3_t4_g4_g2

0x0c2e,	// (0x00047944) list_medium_line_x3_t4_g4_g3_ParamLimits

0x0c2e,	// (0x00047944) list_medium_line_x3_t4_g4_g3

0x34a7,	// (0x0004a1bd) list_medium_line_x3_t4_g4_g4_ParamLimits

0x34a7,	// (0x0004a1bd) list_medium_line_x3_t4_g4_g4

0x0003,

0xfd63,	// (0x00056a79) list_medium_line_x3_t4_g4_g_ParamLimits

0xfd63,	// (0x00056a79) list_medium_line_x3_t4_g4_g

0xc4f8,	// (0x0005320e) list_medium_line_x3_t4_g4_t1_ParamLimits

0xc4f8,	// (0x0005320e) list_medium_line_x3_t4_g4_t1

0xc50f,	// (0x00053225) list_medium_line_x3_t4_g4_t2_ParamLimits

0xc50f,	// (0x00053225) list_medium_line_x3_t4_g4_t2

0x0cef,	// (0x00047a05) list_medium_line_x3_t4_g4_t3_ParamLimits

0x0cef,	// (0x00047a05) list_medium_line_x3_t4_g4_t3

0x34b3,	// (0x0004a1c9) list_medium_line_x3_t4_g4_t4_ParamLimits

0x34b3,	// (0x0004a1c9) list_medium_line_x3_t4_g4_t4

0x0003,

0xfd6c,	// (0x00056a82) list_medium_line_x3_t4_g4_t_ParamLimits

0xfd6c,	// (0x00056a82) list_medium_line_x3_t4_g4_t

0xc524,	// (0x0005323a) list_single_dyc_row_text_pane_t1_ParamLimits

0xc524,	// (0x0005323a) list_single_dyc_row_text_pane_t1

0xc55b,	// (0x00053271) list_single_dyc_row_text_pane_t2_ParamLimits

0xc55b,	// (0x00053271) list_single_dyc_row_text_pane_t2

0x34d0,	// (0x0004a1e6) list_single_dyc_row_text_pane_t3_ParamLimits

0x34d0,	// (0x0004a1e6) list_single_dyc_row_text_pane_t3

0x0002,

0xfd75,	// (0x00056a8b) list_single_dyc_row_text_pane_t_ParamLimits

0xfd75,	// (0x00056a8b) list_single_dyc_row_text_pane_t

0x34e2,	// (0x0004a1f8) list_single_dyc_row_pane_g1_ParamLimits

0x34e2,	// (0x0004a1f8) list_single_dyc_row_pane_g1

0x34ee,	// (0x0004a204) list_single_dyc_row_pane_g2_ParamLimits

0x34ee,	// (0x0004a204) list_single_dyc_row_pane_g2

0x34fa,	// (0x0004a210) list_single_dyc_row_pane_g3_ParamLimits

0x34fa,	// (0x0004a210) list_single_dyc_row_pane_g3

0x3506,	// (0x0004a21c) list_single_dyc_row_pane_g4_ParamLimits

0x3506,	// (0x0004a21c) list_single_dyc_row_pane_g4

0x0003,

0xfd7c,	// (0x00056a92) list_single_dyc_row_pane_g_ParamLimits

0xfd7c,	// (0x00056a92) list_single_dyc_row_pane_g

0x3512,	// (0x0004a228) list_single_dyc_row_text_pane_ParamLimits

0x3512,	// (0x0004a228) list_single_dyc_row_text_pane

0x4f85,	// (0x0004bc9b) bg_sp_fs_scroll_pane

0x3531,	// (0x0004a247) thumb_sp_fs_scroll_pane

0x2396,	// (0x000490ac) list_medium_line_g1_ParamLimits

0x2396,	// (0x000490ac) list_medium_line_g1

0x353a,	// (0x0004a250) list_medium_line_t1_ParamLimits

0x353a,	// (0x0004a250) list_medium_line_t1

0x0bac,	// (0x000478c2) list_medium_line_x2_g1_ParamLimits

0x0bac,	// (0x000478c2) list_medium_line_x2_g1

0x0bb8,	// (0x000478ce) list_medium_line_x2_g2_ParamLimits

0x0bb8,	// (0x000478ce) list_medium_line_x2_g2

0x0001,

0xfd85,	// (0x00056a9b) list_medium_line_x2_g_ParamLimits

0xfd85,	// (0x00056a9b) list_medium_line_x2_g

0x354f,	// (0x0004a265) list_medium_line_x2_t1_ParamLimits

0x354f,	// (0x0004a265) list_medium_line_x2_t1

0x0bac,	// (0x000478c2) list_medium_line_x3_g1_ParamLimits

0x0bac,	// (0x000478c2) list_medium_line_x3_g1

0x0bb8,	// (0x000478ce) list_medium_line_x3_g2_ParamLimits

0x0bb8,	// (0x000478ce) list_medium_line_x3_g2

0x0001,

0xfd85,	// (0x00056a9b) list_medium_line_x3_g_ParamLimits

0xfd85,	// (0x00056a9b) list_medium_line_x3_g

0x354f,	// (0x0004a265) list_medium_line_x3_t1_ParamLimits

0x354f,	// (0x0004a265) list_medium_line_x3_t1

0x3565,	// (0x0004a27b) thumb_sp_fs_scroll_pane_g1

0x356e,	// (0x0004a284) thumb_sp_fs_scroll_pane_g2

0x3577,	// (0x0004a28d) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfd8a,	// (0x00056aa0) thumb_sp_fs_scroll_pane_g

0x3565,	// (0x0004a27b) bg_sp_fs_scroll_pane_g1

0x356e,	// (0x0004a284) bg_sp_fs_scroll_pane_g2

0x3577,	// (0x0004a28d) bg_sp_fs_scroll_pane_g3

0x0002,

0xfd8a,	// (0x00056aa0) bg_sp_fs_scroll_pane_g

0x0bac,	// (0x000478c2) list_medium_line_x2_t3_g4_g1_ParamLimits

0x0bac,	// (0x000478c2) list_medium_line_x2_t3_g4_g1

0x0c22,	// (0x00047938) list_medium_line_x2_t3_g4_g2_ParamLimits

0x0c22,	// (0x00047938) list_medium_line_x2_t3_g4_g2

0x0bb8,	// (0x000478ce) list_medium_line_x2_t3_g4_g3_ParamLimits

0x0bb8,	// (0x000478ce) list_medium_line_x2_t3_g4_g3

0x0bc4,	// (0x000478da) list_medium_line_x2_t3_g4_g4_ParamLimits

0x0bc4,	// (0x000478da) list_medium_line_x2_t3_g4_g4

0x0003,

0xf329,	// (0x0005603f) list_medium_line_x2_t3_g4_g_ParamLimits

0xf329,	// (0x0005603f) list_medium_line_x2_t3_g4_g

0xc5b5,	// (0x000532cb) list_medium_line_x2_t3_g4_t1_ParamLimits

0xc5b5,	// (0x000532cb) list_medium_line_x2_t3_g4_t1

0xc5cb,	// (0x000532e1) list_medium_line_x2_t3_g4_t2_ParamLimits

0xc5cb,	// (0x000532e1) list_medium_line_x2_t3_g4_t2

0x0be5,	// (0x000478fb) list_medium_line_x2_t3_g4_t3_ParamLimits

0x0be5,	// (0x000478fb) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd91,	// (0x00056aa7) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd91,	// (0x00056aa7) list_medium_line_x2_t3_g4_t

0x2396,	// (0x000490ac) list_medium_line_g2_g1_ParamLimits

0x2396,	// (0x000490ac) list_medium_line_g2_g1

0x23a2,	// (0x000490b8) list_medium_line_g2_g2_ParamLimits

0x23a2,	// (0x000490b8) list_medium_line_g2_g2

0x0001,

0xfa59,	// (0x0005676f) list_medium_line_g2_g_ParamLimits

0xfa59,	// (0x0005676f) list_medium_line_g2_g

0x3580,	// (0x0004a296) list_medium_line_g2_t1_ParamLimits

0x3580,	// (0x0004a296) list_medium_line_g2_t1

0x2396,	// (0x000490ac) list_medium_line_t3_g2_g1_ParamLimits

0x2396,	// (0x000490ac) list_medium_line_t3_g2_g1

0x23a2,	// (0x000490b8) list_medium_line_t3_g2_g2_ParamLimits

0x23a2,	// (0x000490b8) list_medium_line_t3_g2_g2

0x0001,

0xfa59,	// (0x0005676f) list_medium_line_t3_g2_g_ParamLimits

0xfa59,	// (0x0005676f) list_medium_line_t3_g2_g

0xc5e5,	// (0x000532fb) list_medium_line_t3_g2_t1_ParamLimits

0xc5e5,	// (0x000532fb) list_medium_line_t3_g2_t1

0xc5fc,	// (0x00053312) list_medium_line_t3_g2_t2_ParamLimits

0xc5fc,	// (0x00053312) list_medium_line_t3_g2_t2

0xc611,	// (0x00053327) list_medium_line_t3_g2_t3_ParamLimits

0xc611,	// (0x00053327) list_medium_line_t3_g2_t3

0x0002,

0xfd98,	// (0x00056aae) list_medium_line_t3_g2_t_ParamLimits

0xfd98,	// (0x00056aae) list_medium_line_t3_g2_t

0x3379,	// (0x0004a08f) list_medium_line_right_icon_g1

0x3595,	// (0x0004a2ab) list_medium_line_right_icon_t1

0x2396,	// (0x000490ac) list_medium_line_t2_g1_ParamLimits

0x2396,	// (0x000490ac) list_medium_line_t2_g1

0xc626,	// (0x0005333c) list_medium_line_t2_t1_ParamLimits

0xc626,	// (0x0005333c) list_medium_line_t2_t1

0xc640,	// (0x00053356) list_medium_line_t2_t2_ParamLimits

0xc640,	// (0x00053356) list_medium_line_t2_t2

0x0001,

0xfd9f,	// (0x00056ab5) list_medium_line_t2_t_ParamLimits

0xfd9f,	// (0x00056ab5) list_medium_line_t2_t

0x2396,	// (0x000490ac) list_medium_line_t3_g1_ParamLimits

0x2396,	// (0x000490ac) list_medium_line_t3_g1

0xc655,	// (0x0005336b) list_medium_line_t3_t1_ParamLimits

0xc655,	// (0x0005336b) list_medium_line_t3_t1

0xc66c,	// (0x00053382) list_medium_line_t3_t2_ParamLimits

0xc66c,	// (0x00053382) list_medium_line_t3_t2

0xc681,	// (0x00053397) list_medium_line_t3_t3_ParamLimits

0xc681,	// (0x00053397) list_medium_line_t3_t3

0x0002,

0xfda4,	// (0x00056aba) list_medium_line_t3_t_ParamLimits

0xfda4,	// (0x00056aba) list_medium_line_t3_t

0x2396,	// (0x000490ac) list_medium_line_g3_g1_ParamLimits

0x2396,	// (0x000490ac) list_medium_line_g3_g1

0x35a3,	// (0x0004a2b9) list_medium_line_g3_g2_ParamLimits

0x35a3,	// (0x0004a2b9) list_medium_line_g3_g2

0x23a2,	// (0x000490b8) list_medium_line_g3_g3_ParamLimits

0x23a2,	// (0x000490b8) list_medium_line_g3_g3

0x0002,

0xfdab,	// (0x00056ac1) list_medium_line_g3_g_ParamLimits

0xfdab,	// (0x00056ac1) list_medium_line_g3_g

0x35af,	// (0x0004a2c5) list_medium_line_g3_t1_ParamLimits

0x35af,	// (0x0004a2c5) list_medium_line_g3_t1

0x2396,	// (0x000490ac) list_medium_line_t2_g3_g1_ParamLimits

0x2396,	// (0x000490ac) list_medium_line_t2_g3_g1

0x35a3,	// (0x0004a2b9) list_medium_line_t2_g3_g2_ParamLimits

0x35a3,	// (0x0004a2b9) list_medium_line_t2_g3_g2

0x23a2,	// (0x000490b8) list_medium_line_t2_g3_g3_ParamLimits

0x23a2,	// (0x000490b8) list_medium_line_t2_g3_g3

0x0002,

0xfdab,	// (0x00056ac1) list_medium_line_t2_g3_g_ParamLimits

0xfdab,	// (0x00056ac1) list_medium_line_t2_g3_g

0xc693,	// (0x000533a9) list_medium_line_t2_g3_t1_ParamLimits

0xc693,	// (0x000533a9) list_medium_line_t2_g3_t1

0xc6ad,	// (0x000533c3) list_medium_line_t2_g3_t2_ParamLimits

0xc6ad,	// (0x000533c3) list_medium_line_t2_g3_t2

0x0001,

0xfdb2,	// (0x00056ac8) list_medium_line_t2_g3_t_ParamLimits

0xfdb2,	// (0x00056ac8) list_medium_line_t2_g3_t

0x2396,	// (0x000490ac) list_medium_line_t3_g3_g1_ParamLimits

0x2396,	// (0x000490ac) list_medium_line_t3_g3_g1

0x35a3,	// (0x0004a2b9) list_medium_line_t3_g3_g2_ParamLimits

0x35a3,	// (0x0004a2b9) list_medium_line_t3_g3_g2

0x23a2,	// (0x000490b8) list_medium_line_t3_g3_g3_ParamLimits

0x23a2,	// (0x000490b8) list_medium_line_t3_g3_g3

0x0002,

0xfdab,	// (0x00056ac1) list_medium_line_t3_g3_g_ParamLimits

0xfdab,	// (0x00056ac1) list_medium_line_t3_g3_g

0xc6c2,	// (0x000533d8) list_medium_line_t3_g3_t1_ParamLimits

0xc6c2,	// (0x000533d8) list_medium_line_t3_g3_t1

0xc6d6,	// (0x000533ec) list_medium_line_t3_g3_t2_ParamLimits

0xc6d6,	// (0x000533ec) list_medium_line_t3_g3_t2

0xc6e8,	// (0x000533fe) list_medium_line_t3_g3_t3_ParamLimits

0xc6e8,	// (0x000533fe) list_medium_line_t3_g3_t3

0x0002,

0xfdb7,	// (0x00056acd) list_medium_line_t3_g3_t_ParamLimits

0xfdb7,	// (0x00056acd) list_medium_line_t3_g3_t

0x349f,	// (0x0004a1b5) list_medium_line_right_iconx2_g1

0x3379,	// (0x0004a08f) list_medium_line_right_iconx2_g2

0x0001,

0xfdbe,	// (0x00056ad4) list_medium_line_right_iconx2_g

0x35c4,	// (0x0004a2da) list_medium_line_right_iconx2_t1

0x349f,	// (0x0004a1b5) list_medium_line_t2_right_iconx2_g1

0x3379,	// (0x0004a08f) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfdbe,	// (0x00056ad4) list_medium_line_t2_right_iconx2_g

0xc6fa,	// (0x00053410) list_medium_line_t2_right_iconx2_t1

0xc70a,	// (0x00053420) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfdc3,	// (0x00056ad9) list_medium_line_t2_right_iconx2_t

0x35d2,	// (0x0004a2e8) list_medium_line_x4_t4_t1

0xc718,	// (0x0005342e) list_medium_line_x4_t4_t2

0xc728,	// (0x0005343e) list_medium_line_x4_t4_t3

0xc738,	// (0x0005344e) list_medium_line_x4_t4_t4

0x0003,

0xfdc8,	// (0x00056ade) list_medium_line_x4_t4_t

0xc771,	// (0x00053487) tport_appsw_pane_ParamLimits

0xc771,	// (0x00053487) tport_appsw_pane

0xc77d,	// (0x00053493) tport_contact_pane_ParamLimits

0xc77d,	// (0x00053493) tport_contact_pane

0xc78d,	// (0x000534a3) tport_listscroll_pane_ParamLimits

0xc78d,	// (0x000534a3) tport_listscroll_pane

0xc79d,	// (0x000534b3) cell_tport_appsw_pane_ParamLimits

0xc79d,	// (0x000534b3) cell_tport_appsw_pane

0x1998,	// (0x000486ae) tport_appsw_pane_g1_ParamLimits

0x1998,	// (0x000486ae) tport_appsw_pane_g1

0x35e0,	// (0x0004a2f6) tport_contact_pane_g1

0x2db1,	// (0x00049ac7) tport_contact_pane_t1

0x35e9,	// (0x0004a2ff) tport_contact_pane_t2

0x0001,

0xfdd1,	// (0x00056ae7) tport_contact_pane_t

0x35f7,	// (0x0004a30d) list_tport_pane

0x3600,	// (0x0004a316) scroll_pane_cp_030

0xc7b2,	// (0x000534c8) cell_tport_appsw_pane_g1

0x3609,	// (0x0004a31f) cell_tport_appsw_pane_t1

0x4f85,	// (0x0004bc9b) grid_highlight_pane_cp019

0xc7ca,	// (0x000534e0) list_tport_double_graphic_pane_ParamLimits

0xc7ca,	// (0x000534e0) list_tport_double_graphic_pane

0xf115,	// (0x00055e2b) list_highlight_pane_cp023_ParamLimits

0xf115,	// (0x00055e2b) list_highlight_pane_cp023

0xc7dc,	// (0x000534f2) list_tport_double_graphic_pane_g1_ParamLimits

0xc7dc,	// (0x000534f2) list_tport_double_graphic_pane_g1

0xc7e9,	// (0x000534ff) list_tport_double_graphic_pane_t1_ParamLimits

0xc7e9,	// (0x000534ff) list_tport_double_graphic_pane_t1

0xc7fe,	// (0x00053514) list_tport_double_graphic_pane_t2_ParamLimits

0xc7fe,	// (0x00053514) list_tport_double_graphic_pane_t2

0x0001,

0xfddd,	// (0x00056af3) list_tport_double_graphic_pane_t_ParamLimits

0xfddd,	// (0x00056af3) list_tport_double_graphic_pane_t

0x4f85,	// (0x0004bc9b) main_cale_note_pane

0xa74d,	// (0x00051463) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0xa74d,	// (0x00051463) cell_vitu2_function_top_wide_pane_cp01

0xbf86,	// (0x00052c9c) wait_bar_pane_cp05_ParamLimits

0x4f85,	// (0x0004bc9b) listscroll_cmail_pane

0x361f,	// (0x0004a335) list_cmail_pane

0xc81a,	// (0x00053530) list_cmail_body_pane

0xc837,	// (0x0005354d) list_single_cmail_header_caption_pane

0xc85c,	// (0x00053572) list_single_cmail_header_detail_pane_ParamLimits

0xc85c,	// (0x00053572) list_single_cmail_header_detail_pane

0xc88f,	// (0x000535a5) list_single_cmail_header_caption_pane_t1

0xc89d,	// (0x000535b3) list_single_cmail_header_detail_pane_g1_ParamLimits

0xc89d,	// (0x000535b3) list_single_cmail_header_detail_pane_g1

0x3659,	// (0x0004a36f) list_single_cmail_header_detail_pane_g2_ParamLimits

0x3659,	// (0x0004a36f) list_single_cmail_header_detail_pane_g2

0x0002,

0xfde2,	// (0x00056af8) list_single_cmail_header_detail_pane_g_ParamLimits

0xfde2,	// (0x00056af8) list_single_cmail_header_detail_pane_g

0x3672,	// (0x0004a388) list_single_cmail_header_detail_pane_t1_ParamLimits

0x3672,	// (0x0004a388) list_single_cmail_header_detail_pane_t1

0x36a8,	// (0x0004a3be) list_single_cmail_header_editor_pane_bg_ParamLimits

0x36a8,	// (0x0004a3be) list_single_cmail_header_editor_pane_bg

0x2f40,	// (0x00049c56) list_cmail_body_pane_g1

0x36ba,	// (0x0004a3d0) list_cmail_body_pane_t1

0x212e,	// (0x00048e44) list_single_cmail_header_editor_pane_bg_g1

0xd9d7,	// (0x000546ed) list_single_cmail_header_editor_pane_bg_g1_copy1

0x213e,	// (0x00048e54) list_single_cmail_header_editor_pane_bg_g1_copy2

0x2136,	// (0x00048e4c) list_single_cmail_header_editor_pane_bg_g1_copy3

0x238e,	// (0x000490a4) list_single_cmail_header_editor_pane_bg_g1_copy4

0x215e,	// (0x00048e74) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0x214e,	// (0x00048e64) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0x2156,	// (0x00048e6c) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xd9b7,	// (0x000546cd) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0xc8d7,	// (0x000535ed) calenote_gesture_pane_ParamLimits

0xc8d7,	// (0x000535ed) calenote_gesture_pane

0xc8f1,	// (0x00053607) calenote_window_pane_ParamLimits

0xc8f1,	// (0x00053607) calenote_window_pane

0x36c8,	// (0x0004a3de) popup_note_window_cp01

0xc909,	// (0x0005361f) calenote_swipe_1_pane_ParamLimits

0xc909,	// (0x0005361f) calenote_swipe_1_pane

0xc35e,	// (0x00053074) calenote_swipe_2_pane_ParamLimits

0xc35e,	// (0x00053074) calenote_swipe_2_pane

0x327a,	// (0x00049f90) calenote_swipe_1_pane_g1_ParamLimits

0x327a,	// (0x00049f90) calenote_swipe_1_pane_g1

0x3287,	// (0x00049f9d) calenote_swipe_1_pane_g2_ParamLimits

0x3287,	// (0x00049f9d) calenote_swipe_1_pane_g2

0x0001,

0xfd11,	// (0x00056a27) calenote_swipe_1_pane_g_ParamLimits

0xfd11,	// (0x00056a27) calenote_swipe_1_pane_g

0x36da,	// (0x0004a3f0) calenote_swipe_1_pane_t1_ParamLimits

0x36da,	// (0x0004a3f0) calenote_swipe_1_pane_t1

0x327a,	// (0x00049f90) calenote_swipe_2_pane_g1_ParamLimits

0x327a,	// (0x00049f90) calenote_swipe_2_pane_g1

0x36f9,	// (0x0004a40f) calenote_swipe_2_pane_g2_ParamLimits

0x36f9,	// (0x0004a40f) calenote_swipe_2_pane_g2

0x0001,

0xfdee,	// (0x00056b04) calenote_swipe_2_pane_g_ParamLimits

0xfdee,	// (0x00056b04) calenote_swipe_2_pane_g

0x3705,	// (0x0004a41b) calenote_swipe_2_pane_t1_ParamLimits

0x3705,	// (0x0004a41b) calenote_swipe_2_pane_t1

0x4f85,	// (0x0004bc9b) main_mup_navstr_pane

0x9525,	// (0x0005023b) main_mup3_pane_t7_ParamLimits

0x9525,	// (0x0005023b) main_mup3_pane_t7

0x9eee,	// (0x00050c04) main_mp4_pane_g6_ParamLimits

0x9eee,	// (0x00050c04) main_mp4_pane_g6

0xa260,	// (0x00050f76) main_image3_pane_t4_ParamLimits

0xa260,	// (0x00050f76) main_image3_pane_t4

0xc91c,	// (0x00053632) popup_navstr_preview_pane_ParamLimits

0xc91c,	// (0x00053632) popup_navstr_preview_pane

0xc928,	// (0x0005363e) scroll_navstr_pane_ParamLimits

0xc928,	// (0x0005363e) scroll_navstr_pane

0x4f85,	// (0x0004bc9b) bg_popup_preview_window_pane_cp04

0x372c,	// (0x0004a442) popup_navstr_preview_pane_t1

0xc934,	// (0x0005364a) scroll_navstr_pane_g1_ParamLimits

0xc934,	// (0x0005364a) scroll_navstr_pane_g1

0xc941,	// (0x00053657) scroll_navstr_pane_t1_ParamLimits

0xc941,	// (0x00053657) scroll_navstr_pane_t1

0x36d1,	// (0x0004a3e7) bg_button_pane_cp014

0x36d1,	// (0x0004a3e7) bg_button_pane_cp030

0xc252,	// (0x00052f68) list_double_fisheye_pane_g4_ParamLimits

0xc252,	// (0x00052f68) list_double_fisheye_pane_g4

0xc25e,	// (0x00052f74) list_double_fisheye_pane_g5_ParamLimits

0xc25e,	// (0x00052f74) list_double_fisheye_pane_g5

0x3627,	// (0x0004a33d) sp_fs_scroll_pane_cp03

0x33b9,	// (0x0004a0cf) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0x33c5,	// (0x0004a0db) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfd2e,	// (0x00056a44) main_sp_fs_ctrlbar_pane_g_ParamLimits

0x33d1,	// (0x0004a0e7) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xc810,	// (0x00053526) sp_fs_scroll_pane_cp02

0xd6df,	// (0x000543f5) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0xd6df,	// (0x000543f5) popup_sp_fs_calendar_preview_list_single_pane

0x4f85,	// (0x0004bc9b) main_cam6_pano_pane

0xf115,	// (0x00055e2b) main_mup3_pane_ParamLimits

0x4f85,	// (0x0004bc9b) main_phacti_pane

0xbe5b,	// (0x00052b71) bg_button_pane_cp11

0xbe73,	// (0x00052b89) main_mobtv_info_pane_g2_ParamLimits

0xbe73,	// (0x00052b89) main_mobtv_info_pane_g2

0x0001,

0xfc8e,	// (0x000569a4) main_mobtv_info_pane_g_ParamLimits

0xfc8e,	// (0x000569a4) main_mobtv_info_pane_g

0xc025,	// (0x00052d3b) sc_clock_pane_t5_ParamLimits

0xc025,	// (0x00052d3b) sc_clock_pane_t5

0xc0c3,	// (0x00052dd9) main_radioblah_pane_g1_ParamLimits

0x31c6,	// (0x00049edc) main_radioblah_pane_t3_ParamLimits

0x31c6,	// (0x00049edc) main_radioblah_pane_t3

0x31de,	// (0x00049ef4) main_radioblah_pane_t4_ParamLimits

0x31de,	// (0x00049ef4) main_radioblah_pane_t4

0xc0e1,	// (0x00052df7) main_radioblah_text_pane_ParamLimits

0xc0e1,	// (0x00052df7) main_radioblah_text_pane

0xc0ee,	// (0x00052e04) main_radioblah_info_pane_g1_ParamLimits

0xc183,	// (0x00052e99) main_radioblah_info_pane_t4_ParamLimits

0xc183,	// (0x00052e99) main_radioblah_info_pane_t4

0xf115,	// (0x00055e2b) main_sp_fs_calendar_pane

0xc953,	// (0x00053669) main_phacti_pane_g1

0xc95b,	// (0x00053671) phacti_note_pane_ParamLimits

0xc95b,	// (0x00053671) phacti_note_pane

0x3743,	// (0x0004a459) phacti_term_pane_ParamLimits

0x3743,	// (0x0004a459) phacti_term_pane

0x3758,	// (0x0004a46e) phacti_note_pane_t1_ParamLimits

0x3758,	// (0x0004a46e) phacti_note_pane_t1

0x376f,	// (0x0004a485) phacti_term_pane_g1

0x3777,	// (0x0004a48d) phacti_term_pane_t1_ParamLimits

0x3777,	// (0x0004a48d) phacti_term_pane_t1

0x37a1,	// (0x0004a4b7) popup_sp_fs_calendar_preview_list_single_pane_g1

0xd7d2,	// (0x000544e8) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfdf8,	// (0x00056b0e) popup_sp_fs_calendar_preview_list_single_pane_g

0x37a9,	// (0x0004a4bf) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0x37a9,	// (0x0004a4bf) popup_sp_fs_calendar_preview_list_single_pane_t1

0x37be,	// (0x0004a4d4) aid_popup_sp_fs_bg_corner_pane

0x167f,	// (0x00048395) popup_sp_fs_calendar_preview_bg_pane_g1

0x4f85,	// (0x0004bc9b) popup_sp_fs_calendar_preview_bg_pane

0x37c6,	// (0x0004a4dc) popup_sp_fs_calendar_preview_list_pane

0xf115,	// (0x00055e2b) bg_main_sp_fs_cale_pane_ParamLimits

0xf115,	// (0x00055e2b) bg_main_sp_fs_cale_pane

0x37ce,	// (0x0004a4e4) listscroll_cale_mrui_pane_ParamLimits

0x37ce,	// (0x0004a4e4) listscroll_cale_mrui_pane

0x37e2,	// (0x0004a4f8) listscroll_sp_fs_schedule_track_pane

0x37eb,	// (0x0004a501) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0x37eb,	// (0x0004a501) main_sp_fs_ctrlbar_pane_cp01

0x37fc,	// (0x0004a512) main_sp_fs_ribbon_pane

0x3804,	// (0x0004a51a) popup_sp_fs_cale_preview_window

0x3637,	// (0x0004a34d) list_single_sp_fs_schedule_track_pane_ParamLimits

0x3637,	// (0x0004a34d) list_single_sp_fs_schedule_track_pane

0x20b2,	// (0x00048dc8) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0x20b2,	// (0x00048dc8) bg_sp_fs_highlight_list_pane_cp03

0xc99a,	// (0x000536b0) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0xc99a,	// (0x000536b0) list_single_sp_fs_schedule_track_pane_g1

0xc9a6,	// (0x000536bc) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0xc9a6,	// (0x000536bc) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfdfd,	// (0x00056b13) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfdfd,	// (0x00056b13) list_single_sp_fs_schedule_track_pane_g

0xc9b2,	// (0x000536c8) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0xc9b2,	// (0x000536c8) list_single_sp_fs_schedule_track_pane_t1

0xc9ca,	// (0x000536e0) sp_fs_schedule_track_pane_ParamLimits

0xc9ca,	// (0x000536e0) sp_fs_schedule_track_pane

0x3816,	// (0x0004a52c) sp_fs_schedule_track_pane_g1

0x381e,	// (0x0004a534) sp_fs_schedule_track_pane_g2

0x3826,	// (0x0004a53c) sp_fs_schedule_track_pane_g3

0x382e,	// (0x0004a544) sp_fs_schedule_track_pane_g4

0x3836,	// (0x0004a54c) sp_fs_schedule_track_pane_g5

0x0004,

0xfe02,	// (0x00056b18) sp_fs_schedule_track_pane_g

0x212e,	// (0x00048e44) bg_sp_fs_schedule_viewer_highlight_g1

0xd9d7,	// (0x000546ed) bg_sp_fs_schedule_viewer_highlight_g2

0x2136,	// (0x00048e4c) bg_sp_fs_schedule_viewer_highlight_g3

0x213e,	// (0x00048e54) bg_sp_fs_schedule_viewer_highlight_g4

0x238e,	// (0x000490a4) bg_sp_fs_schedule_viewer_highlight_g5

0x214e,	// (0x00048e64) bg_sp_fs_schedule_viewer_highlight_g6

0x2156,	// (0x00048e6c) bg_sp_fs_schedule_viewer_highlight_g7

0x215e,	// (0x00048e74) bg_sp_fs_schedule_viewer_highlight_g8

0xd9b7,	// (0x000546cd) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfe0d,	// (0x00056b23) bg_sp_fs_schedule_viewer_highlight_g

0x4f85,	// (0x0004bc9b) bg_main_sp_fs_ribbon_pane

0xc9da,	// (0x000536f0) main_sp_fs_ribbon_pane_g1

0x383e,	// (0x0004a554) main_sp_fs_ribbon_pane_t1

0xc9e3,	// (0x000536f9) main_sp_fs_ribbon_pane_t2

0x384d,	// (0x0004a563) main_sp_fs_ribbon_pane_t3

0x0002,

0xfe20,	// (0x00056b36) main_sp_fs_ribbon_pane_t

0x385c,	// (0x0004a572) main_sp_fs_ribbon_scheduler_pane

0x3864,	// (0x0004a57a) bg_main_sp_fs_ribbon_pane_g1

0x386d,	// (0x0004a583) bg_main_sp_fs_ribbon_pane_g2

0x3876,	// (0x0004a58c) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfe27,	// (0x00056b3d) bg_main_sp_fs_ribbon_pane_g

0x387e,	// (0x0004a594) main_sp_fs_ribbon_scheduler_pane_g1

0x3887,	// (0x0004a59d) main_sp_fs_ribbon_scheduler_pane_g2

0x3890,	// (0x0004a5a6) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfe2e,	// (0x00056b44) main_sp_fs_ribbon_scheduler_pane_g

0x3899,	// (0x0004a5af) list_cale_mrui_pane

0xc9f2,	// (0x00053708) sp_fs_scroll_pane_cp07_ParamLimits

0xc9f2,	// (0x00053708) sp_fs_scroll_pane_cp07

0xca08,	// (0x0005371e) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0xca08,	// (0x0005371e) bg_sp_fs_schedule_viewer_highlight

0x38a2,	// (0x0004a5b8) list_single_sp_fs_schedule_track_pane_cp01

0x38aa,	// (0x0004a5c0) list_sp_fs_schedule_track_pane

0x38b2,	// (0x0004a5c8) sp_fs_scroll_pane_cp06_ParamLimits

0x38b2,	// (0x0004a5c8) sp_fs_scroll_pane_cp06

0x167f,	// (0x00048395) bgmain_sp_fs_calendar_pane_g1

0xca15,	// (0x0005372b) list_single_cale_mrui_pane_ParamLimits

0xca15,	// (0x0005372b) list_single_cale_mrui_pane

0x38c4,	// (0x0004a5da) list_single_cale_mrui_row_pane_ParamLimits

0x38c4,	// (0x0004a5da) list_single_cale_mrui_row_pane

0x38d1,	// (0x0004a5e7) list_single_cale_mrui_row_pane_g1_ParamLimits

0x38d1,	// (0x0004a5e7) list_single_cale_mrui_row_pane_g1

0x3909,	// (0x0004a61f) list_single_cale_mrui_row_pane_t1_ParamLimits

0x3909,	// (0x0004a61f) list_single_cale_mrui_row_pane_t1

0xca3d,	// (0x00053753) list_single_cale_mrui_row_pane_t2_ParamLimits

0xca3d,	// (0x00053753) list_single_cale_mrui_row_pane_t2

0x391b,	// (0x0004a631) list_single_cale_mrui_row_pane_t3_ParamLimits

0x391b,	// (0x0004a631) list_single_cale_mrui_row_pane_t3

0x394a,	// (0x0004a660) list_single_cale_mrui_row_pane_t4_ParamLimits

0x394a,	// (0x0004a660) list_single_cale_mrui_row_pane_t4

0x0003,

0xfe3a,	// (0x00056b50) list_single_cale_mrui_row_pane_t_ParamLimits

0xfe3a,	// (0x00056b50) list_single_cale_mrui_row_pane_t

0xcaa3,	// (0x000537b9) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0xcaa3,	// (0x000537b9) list_single_cmail_header_editor_pane_bg_cp01

0xcac3,	// (0x000537d9) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0xcac3,	// (0x000537d9) list_single_cmail_header_editor_pane_bg_cp02

0xcadf,	// (0x000537f5) main_radioblah_text_pane_t1_ParamLimits

0xcadf,	// (0x000537f5) main_radioblah_text_pane_t1

0x3979,	// (0x0004a68f) cam6_indi_pane_cp01

0x3981,	// (0x0004a697) cam6_mode_pane_cp01

0x3989,	// (0x0004a69f) cam6_pano_pane

0x3992,	// (0x0004a6a8) cam6_zoom_pane_cp01

0x399a,	// (0x0004a6b0) cam6_pano_image_pane

0x39a5,	// (0x0004a6bb) cam6_pano_pane_g1

0x2f40,	// (0x00049c56) cam6_pano_pane_g2

0x39ae,	// (0x0004a6c4) cam6_pano_pane_g3

0x39b7,	// (0x0004a6cd) cam6_pano_pane_g4

0x1c63,	// (0x00048979) cam6_pano_pane_g5

0x39c0,	// (0x0004a6d6) cam6_pano_pane_g6

0x39ca,	// (0x0004a6e0) cam6_pano_pane_g7

0x39d2,	// (0x0004a6e8) cam6_pano_pane_g8

0x39db,	// (0x0004a6f1) cam6_pano_pane_g9

0x0008,

0xfe43,	// (0x00056b59) cam6_pano_pane_g

0x4f85,	// (0x0004bc9b) main_browser_tag_pane

0x3724,	// (0x0004a43a) grid_navstr_albumart_pane

0x39e6,	// (0x0004a6fc) cell_navstr_albumart_pane_ParamLimits

0x39e6,	// (0x0004a6fc) cell_navstr_albumart_pane

0x3a09,	// (0x0004a71f) cell_navstr_albumart_pane_g1

0x0f96,	// (0x00047cac) cell_navstr_albumart_pane_g2

0x0fa6,	// (0x00047cbc) cell_navstr_albumart_pane_g3

0x0f9e,	// (0x00047cb4) cell_navstr_albumart_pane_g4

0x0003,

0xfe56,	// (0x00056b6c) cell_navstr_albumart_pane_g

0xcafa,	// (0x00053810) bt_list_pane_ParamLimits

0xcafa,	// (0x00053810) bt_list_pane

0xcb1a,	// (0x00053830) bt_list_pane_t1

0xcb29,	// (0x0005383f) bt_list_pane_t2

0x0001,

0xfe5f,	// (0x00056b75) bt_list_pane_t

0x4f85,	// (0x0004bc9b) main_cale_prevew_pane

0xcb38,	// (0x0005384e) popup_cale_preview_window_ParamLimits

0xcb38,	// (0x0005384e) popup_cale_preview_window

0xf115,	// (0x00055e2b) bg_popup_preview_window_pane_cp05_ParamLimits

0xf115,	// (0x00055e2b) bg_popup_preview_window_pane_cp05

0x3a11,	// (0x0004a727) list_cale_preview_pane_ParamLimits

0x3a11,	// (0x0004a727) list_cale_preview_pane

0x3cdd,	// (0x0004a9f3) list_double_cale_preview_pane_ParamLimits

0x3cdd,	// (0x0004a9f3) list_double_cale_preview_pane

0xcb51,	// (0x00053867) list_single_cale_preview_pane_ParamLimits

0xcb51,	// (0x00053867) list_single_cale_preview_pane

0xcb67,	// (0x0005387d) list_single_cale_preview_pane_g1

0xcb6f,	// (0x00053885) list_single_cale_preview_pane_t1_ParamLimits

0xcb6f,	// (0x00053885) list_single_cale_preview_pane_t1

0xcb84,	// (0x0005389a) list_double_cale_preview_pane_g1

0xcb8c,	// (0x000538a2) list_double_cale_preview_pane_t1_ParamLimits

0xcb8c,	// (0x000538a2) list_double_cale_preview_pane_t1

0xcba1,	// (0x000538b7) list_double_cale_preview_pane_t2_ParamLimits

0xcba1,	// (0x000538b7) list_double_cale_preview_pane_t2

0x0001,

0xfe64,	// (0x00056b7a) list_double_cale_preview_pane_t_ParamLimits

0xfe64,	// (0x00056b7a) list_double_cale_preview_pane_t

0x4f85,	// (0x0004bc9b) main_ezdial_pane

0xf115,	// (0x00055e2b) main_sp_fs_email_pane_ParamLimits

0xc396,	// (0x000530ac) cmail_ddmenu_btn01_pane_ParamLimits

0xc396,	// (0x000530ac) cmail_ddmenu_btn01_pane

0xc3b3,	// (0x000530c9) cmail_ddmenu_btn02_pane_ParamLimits

0xc3b3,	// (0x000530c9) cmail_ddmenu_btn02_pane

0xc3d1,	// (0x000530e7) cmail_ddmenu_btn03_pane_ParamLimits

0xc3d1,	// (0x000530e7) cmail_ddmenu_btn03_pane

0xc3ff,	// (0x00053115) main_sp_fs_ctrlbar_pane_ParamLimits

0xc41b,	// (0x00053131) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0xc81a,	// (0x00053530) list_cmail_body_pane_ParamLimits

0x3650,	// (0x0004a366) bg_button_pane_cp12

0x3665,	// (0x0004a37b) list_single_cmail_header_detail_pane_g3_ParamLimits

0x3665,	// (0x0004a37b) list_single_cmail_header_detail_pane_g3

0xc8b3,	// (0x000535c9) list_single_cmail_header_detail_pane_t2_ParamLimits

0xc8b3,	// (0x000535c9) list_single_cmail_header_detail_pane_t2

0x0001,

0xfde9,	// (0x00056aff) list_single_cmail_header_detail_pane_t_ParamLimits

0xfde9,	// (0x00056aff) list_single_cmail_header_detail_pane_t

0x378c,	// (0x0004a4a2) phacti_term_pane_t2_ParamLimits

0x378c,	// (0x0004a4a2) phacti_term_pane_t2

0x0001,

0xfdf3,	// (0x00056b09) phacti_term_pane_t_ParamLimits

0xfdf3,	// (0x00056b09) phacti_term_pane_t

0x3a1d,	// (0x0004a733) aid_size_list_single_double

0xcbb9,	// (0x000538cf) popup_ezdial_listscroll_window

0xcbd9,	// (0x000538ef) popup_number_entry_window_cp01

0xe0c2,	// (0x00054dd8) bg_popup_call_pane_cp09

0x3a29,	// (0x0004a73f) ezdial_list_pane

0x3a31,	// (0x0004a747) scroll_pane_cp23

0x1464,	// (0x0004817a) bg_button_pane_cp028_ParamLimits

0x1464,	// (0x0004817a) bg_button_pane_cp028

0xcbe7,	// (0x000538fd) cmail_ddmenu_btn01_pane_g1_ParamLimits

0xcbe7,	// (0x000538fd) cmail_ddmenu_btn01_pane_g1

0xcbf7,	// (0x0005390d) cmail_ddmenu_btn01_pane_g2_ParamLimits

0xcbf7,	// (0x0005390d) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfe69,	// (0x00056b7f) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfe69,	// (0x00056b7f) cmail_ddmenu_btn01_pane_g

0x3a39,	// (0x0004a74f) cmail_ddmenu_btn01_pane_t1_ParamLimits

0x3a39,	// (0x0004a74f) cmail_ddmenu_btn01_pane_t1

0x1179,	// (0x00047e8f) bg_button_pane_cp029_ParamLimits

0x1179,	// (0x00047e8f) bg_button_pane_cp029

0xcbf7,	// (0x0005390d) cmail_ddmenu_btn02_pane_g1_ParamLimits

0xcbf7,	// (0x0005390d) cmail_ddmenu_btn02_pane_g1

0xcc0f,	// (0x00053925) cmail_ddmenu_btn02_pane_t1_ParamLimits

0xcc0f,	// (0x00053925) cmail_ddmenu_btn02_pane_t1

0x20b2,	// (0x00048dc8) bg_button_pane_cp031_ParamLimits

0x20b2,	// (0x00048dc8) bg_button_pane_cp031

0xcbf7,	// (0x0005390d) cmail_ddmenu_btn03_pane_g1_ParamLimits

0xcbf7,	// (0x0005390d) cmail_ddmenu_btn03_pane_g1

0xcc0f,	// (0x00053925) cmail_ddmenu_btn03_pane_t1_ParamLimits

0xcc0f,	// (0x00053925) cmail_ddmenu_btn03_pane_t1

0xa0fd,	// (0x00050e13) cell_dialer2_keypad_pane_t1_ParamLimits

0xa117,	// (0x00050e2d) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0xa117,	// (0x00050e2d) cell_dialer2_keypad_pane_t1_copy1

0xbd1d,	// (0x00052a33) ncimui_group_button_pane

0xf115,	// (0x00055e2b) main_sp_fs_calendar_pane_ParamLimits

0xc837,	// (0x0005354d) list_single_cmail_header_caption_pane_ParamLimits

0x26d5,	// (0x000493eb) aid_recal_txt_sm_pane

0x4f85,	// (0x0004bc9b) mian_recal_day_pane

0x3804,	// (0x0004a51a) popup_sp_fs_cale_preview_window_ParamLimits

0x4f85,	// (0x0004bc9b) list_recal_day_pane

0x3a67,	// (0x0004a77d) list_single_recal_day_pane_ParamLimits

0x3a67,	// (0x0004a77d) list_single_recal_day_pane

0x3a79,	// (0x0004a78f) list_single_recal_day_pane_g1_ParamLimits

0x3a79,	// (0x0004a78f) list_single_recal_day_pane_g1

0x3a85,	// (0x0004a79b) list_single_recal_day_pane_g2_ParamLimits

0x3a85,	// (0x0004a79b) list_single_recal_day_pane_g2

0x3a94,	// (0x0004a7aa) list_single_recal_day_pane_g3_ParamLimits

0x3a94,	// (0x0004a7aa) list_single_recal_day_pane_g3

0xcc33,	// (0x00053949) list_single_recal_day_pane_g4_ParamLimits

0xcc33,	// (0x00053949) list_single_recal_day_pane_g4

0x3aa0,	// (0x0004a7b6) list_single_recal_day_pane_g5_ParamLimits

0x3aa0,	// (0x0004a7b6) list_single_recal_day_pane_g5

0x3aaf,	// (0x0004a7c5) list_single_recal_day_pane_g6_ParamLimits

0x3aaf,	// (0x0004a7c5) list_single_recal_day_pane_g6

0x0005,

0xfe78,	// (0x00056b8e) list_single_recal_day_pane_g_ParamLimits

0xfe78,	// (0x00056b8e) list_single_recal_day_pane_g

0x3abb,	// (0x0004a7d1) list_single_recal_day_pane_t1

0x3ac9,	// (0x0004a7df) list_single_recal_day_pane_t2

0x0001,

0xfe85,	// (0x00056b9b) list_single_recal_day_pane_t

0xcc46,	// (0x0005395c) ncimui_query_button_pane_ParamLimits

0xcc46,	// (0x0005395c) ncimui_query_button_pane

0xcc56,	// (0x0005396c) ncimui_query_button_pane_t1_ParamLimits

0xcc56,	// (0x0005396c) ncimui_query_button_pane_t1

0x3ad7,	// (0x0004a7ed) ncimui_query_button_pane_t2_ParamLimits

0x3ad7,	// (0x0004a7ed) ncimui_query_button_pane_t2

0x0001,

0xfe8a,	// (0x00056ba0) ncimui_query_button_pane_t_ParamLimits

0xfe8a,	// (0x00056ba0) ncimui_query_button_pane_t

0xcc69,	// (0x0005397f) query_button_pane_ParamLimits

0xcc69,	// (0x0005397f) query_button_pane

0x4f85,	// (0x0004bc9b) bg_button_pane_cp0028

0x3aea,	// (0x0004a800) query_button_pane_t1

0x8595,	// (0x0004f2ab) main_tport_pane_ParamLimits

0xc748,	// (0x0005345e) bg_popup_window_pane_cp01_ParamLimits

0xc748,	// (0x0005345e) bg_popup_window_pane_cp01

0xc755,	// (0x0005346b) heading_pane_cp08_ParamLimits

0xc755,	// (0x0005346b) heading_pane_cp08

0xc763,	// (0x00053479) heading_pane_cp07_ParamLimits

0xc763,	// (0x00053479) heading_pane_cp07

0xc7ba,	// (0x000534d0) cell_tport_appsw_pane_g2

0x0002,

0xfdd6,	// (0x00056aec) cell_tport_appsw_pane_g

0x7cac,	// (0x0004e9c2) input_candi_list_open_g1

0xdb7e,	// (0x00054894) list_cale_time_pane_g6_ParamLimits

0xdb7e,	// (0x00054894) list_cale_time_pane_g6

0x8fce,	// (0x0004fce4) aid_size_touch_calib_1_ParamLimits

0x8fce,	// (0x0004fce4) aid_size_touch_calib_1

0x8fda,	// (0x0004fcf0) aid_size_touch_calib_2_ParamLimits

0x8fda,	// (0x0004fcf0) aid_size_touch_calib_2

0x8fe8,	// (0x0004fcfe) aid_size_touch_calib_3_ParamLimits

0x8fe8,	// (0x0004fcfe) aid_size_touch_calib_3

0x8ff8,	// (0x0004fd0e) aid_size_touch_calib_4_ParamLimits

0x8ff8,	// (0x0004fd0e) aid_size_touch_calib_4

0x9006,	// (0x0004fd1c) main_touch_calib_button_group_pane_ParamLimits

0x9006,	// (0x0004fd1c) main_touch_calib_button_group_pane

0x9014,	// (0x0004fd2a) main_touch_calib_pane_g1_ParamLimits

0x9020,	// (0x0004fd36) main_touch_calib_pane_g2_ParamLimits

0x902c,	// (0x0004fd42) main_touch_calib_pane_g3_ParamLimits

0x9038,	// (0x0004fd4e) main_touch_calib_pane_g4_ParamLimits

0xf7b8,	// (0x000564ce) main_touch_calib_pane_g_ParamLimits

0x9044,	// (0x0004fd5a) main_touch_calib_pane_t1_ParamLimits

0x905b,	// (0x0004fd71) main_touch_calib_pane_t2_ParamLimits

0x9072,	// (0x0004fd88) main_touch_calib_pane_t3_ParamLimits

0x9086,	// (0x0004fd9c) main_touch_calib_pane_t4_ParamLimits

0x909a,	// (0x0004fdb0) main_touch_calib_pane_t5_ParamLimits

0xf7c1,	// (0x000564d7) main_touch_calib_pane_t_ParamLimits

0x1a39,	// (0x0004874f) list_single_fp_cale_pane_g3_ParamLimits

0x1a39,	// (0x0004874f) list_single_fp_cale_pane_g3

0xa537,	// (0x0005124d) bg_button_pane_cp012_ParamLimits

0xa537,	// (0x0005124d) bg_vkb2_func_pane_cp03_ParamLimits

0xaefe,	// (0x00051c14) cell_vitu2_function_top_pane_g1_ParamLimits

0xa537,	// (0x0005124d) bg_vkb2_func_pane_cp04_ParamLimits

0xbcce,	// (0x000529e4) main_ncimui_button_group_pane_ParamLimits

0xbcce,	// (0x000529e4) main_ncimui_button_group_pane

0xbd0b,	// (0x00052a21) main_ncimui_pane_t3_ParamLimits

0xbd0b,	// (0x00052a21) main_ncimui_pane_t3

0x373a,	// (0x0004a450) phacti_button_group_pane

0x3a1d,	// (0x0004a733) aid_size_list_single_double_ParamLimits

0xcbb9,	// (0x000538cf) popup_ezdial_listscroll_window_ParamLimits

0xcbd9,	// (0x000538ef) popup_number_entry_window_cp01_ParamLimits

0xcc76,	// (0x0005398c) phacti_button_pane_ParamLimits

0xcc76,	// (0x0005398c) phacti_button_pane

0x4f85,	// (0x0004bc9b) bg_button_pane_cp14

0x3af8,	// (0x0004a80e) phacti_button_pane_t1

0xcc87,	// (0x0005399d) main_touch_calib_button_pane_ParamLimits

0xcc87,	// (0x0005399d) main_touch_calib_button_pane

0xd5db,	// (0x000542f1) bg_button_pane_cp18_ParamLimits

0xd5db,	// (0x000542f1) bg_button_pane_cp18

0x3b06,	// (0x0004a81c) main_touch_calib_button_pane_t1_ParamLimits

0x3b06,	// (0x0004a81c) main_touch_calib_button_pane_t1

0x3b1c,	// (0x0004a832) main_touch_calib_button_pane_t2_ParamLimits

0x3b1c,	// (0x0004a832) main_touch_calib_button_pane_t2

0x0001,

0xfe8f,	// (0x00056ba5) main_touch_calib_button_pane_t_ParamLimits

0xfe8f,	// (0x00056ba5) main_touch_calib_button_pane_t

0x4f85,	// (0x0004bc9b) cell_ncimui_button_pane

0x4f85,	// (0x0004bc9b) bg_button_pane_cp032

0x3b3a,	// (0x0004a850) cell_ncimui_button_pane_t1

0xa173,	// (0x00050e89) image3_infobar_pane_ParamLimits

0xa173,	// (0x00050e89) image3_infobar_pane

0xc047,	// (0x00052d5d) fs_bigclock_status_pane_ParamLimits

0xc047,	// (0x00052d5d) fs_bigclock_status_pane

0xc054,	// (0x00052d6a) main_fs_bigclock_clock_pane_ParamLimits

0xc054,	// (0x00052d6a) main_fs_bigclock_clock_pane

0xc064,	// (0x00052d7a) main_fs_bigclock_indi_pane_ParamLimits

0xc064,	// (0x00052d7a) main_fs_bigclock_indi_pane

0xc091,	// (0x00052da7) main_fs_bigclock_swipe_pane_ParamLimits

0xc091,	// (0x00052da7) main_fs_bigclock_swipe_pane

0x4f85,	// (0x0004bc9b) main_fs_clock_dumped_data

0x304d,	// (0x00049d63) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0x304d,	// (0x00049d63) list_single_fs_bigclock_indicator_pane_g1

0x3069,	// (0x00049d7f) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0x3069,	// (0x00049d7f) list_single_fs_bigclock_indicator_pane_g2

0x3083,	// (0x00049d99) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0x3083,	// (0x00049d99) list_single_fs_bigclock_indicator_pane_g3

0x309d,	// (0x00049db3) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0x309d,	// (0x00049db3) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfcc2,	// (0x000569d8) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfcc2,	// (0x000569d8) list_single_fs_bigclock_indicator_pane_g

0x30c3,	// (0x00049dd9) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0x30c3,	// (0x00049dd9) list_single_fs_bigclock_indicator_pane_t1

0x30eb,	// (0x00049e01) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0x30eb,	// (0x00049e01) list_single_fs_bigclock_indicator_pane_t2

0x3113,	// (0x00049e29) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0x3113,	// (0x00049e29) list_single_fs_bigclock_indicator_pane_t3

0x313b,	// (0x00049e51) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0x313b,	// (0x00049e51) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfccd,	// (0x000569e3) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfccd,	// (0x000569e3) list_single_fs_bigclock_indicator_pane_t

0x3b48,	// (0x0004a85e) image3_infobar_fav_pane_ParamLimits

0x3b48,	// (0x0004a85e) image3_infobar_fav_pane

0x3b58,	// (0x0004a86e) image3_infobar_loc_pane_ParamLimits

0x3b58,	// (0x0004a86e) image3_infobar_loc_pane

0x3b6c,	// (0x0004a882) image3_infobar_time_pane_ParamLimits

0x3b6c,	// (0x0004a882) image3_infobar_time_pane

0x167f,	// (0x00048395) image3_infobar_time_pane_g1

0x3b7c,	// (0x0004a892) image3_infobar_time_pane_t1

0x167f,	// (0x00048395) image3_infobar_loc_pane_g1

0x3b8a,	// (0x0004a8a0) image3_infobar_loc_pane_g2

0x0001,

0xfe94,	// (0x00056baa) image3_infobar_loc_pane_g

0x3b92,	// (0x0004a8a8) image3_infobar_loc_pane_t1

0x167f,	// (0x00048395) image3_infobar_fav_pane_g1

0x3ba0,	// (0x0004a8b6) image3_infobar_fav_pane_g2

0x0001,

0xfe99,	// (0x00056baf) image3_infobar_fav_pane_g

0x3ba8,	// (0x0004a8be) fs_bigclock_status_battery_pane

0x3bb1,	// (0x0004a8c7) fs_bigclock_status_signal_pane

0x3bba,	// (0x0004a8d0) fs_bigclock_status_title_pane

0x3bc3,	// (0x0004a8d9) fs_bigclock_status_signal_pane_g1

0x3bcc,	// (0x0004a8e2) fs_bigclock_status_signal_pane_g2

0x0001,

0xfe9e,	// (0x00056bb4) fs_bigclock_status_signal_pane_g

0x3bd4,	// (0x0004a8ea) fs_bigclock_status_battery_pane_g1

0x3bdd,	// (0x0004a8f3) fs_bigclock_status_battery_pane_g2

0x0001,

0xfea3,	// (0x00056bb9) fs_bigclock_status_battery_pane_g

0x3be5,	// (0x0004a8fb) fs_bigclock_status_title_pane_t1

0x167f,	// (0x00048395) main_fs_bigclock_clock_pane_g1

0x3bf3,	// (0x0004a909) main_fs_bigclock_clock_pane_g2

0x3bf3,	// (0x0004a909) main_fs_bigclock_clock_pane_g3

0x3bf3,	// (0x0004a909) main_fs_bigclock_clock_pane_g4

0x0003,

0xfea8,	// (0x00056bbe) main_fs_bigclock_clock_pane_g

0x3bfb,	// (0x0004a911) main_fs_bigclock_clock_pane_t1

0x3c09,	// (0x0004a91f) main_fs_bigclock_clock_pane_t2

0x0001,

0xfeb1,	// (0x00056bc7) main_fs_bigclock_clock_pane_t

0x3c18,	// (0x0004a92e) list_single_fs_bigclock_indicator_pane_ParamLimits

0x3c18,	// (0x0004a92e) list_single_fs_bigclock_indicator_pane

0xcc99,	// (0x000539af) list_single_fs_bigclock_pane_ParamLimits

0xcc99,	// (0x000539af) list_single_fs_bigclock_pane

0x3c32,	// (0x0004a948) main_fs_bigclock_indicator_pane_t1

0x3c41,	// (0x0004a957) list_single_fs_bigclock_pane_g1

0x3c49,	// (0x0004a95f) list_single_fs_bigclock_pane_t1

0x167f,	// (0x00048395) main_fs_bigclock_swipe_pane_g1

0x3c87,	// (0x0004a99d) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfec2,	// (0x00056bd8) main_fs_bigclock_swipe_pane_g

0x3c8f,	// (0x0004a9a5) main_fs_bigclock_swipe_pane_t1_ParamLimits

0x3c8f,	// (0x0004a9a5) main_fs_bigclock_swipe_pane_t1

0x746a,	// (0x0004e180) call_type_pane_ParamLimits

0x4f85,	// (0x0004bc9b) main_btmg_pane

0x38fd,	// (0x0004a613) list_single_cale_mrui_row_pane_g2_ParamLimits

0x38fd,	// (0x0004a613) list_single_cale_mrui_row_pane_g2

0x0001,

0xfe35,	// (0x00056b4b) list_single_cale_mrui_row_pane_g_ParamLimits

0xfe35,	// (0x00056b4b) list_single_cale_mrui_row_pane_g

0x3a57,	// (0x0004a76d) list_recal_vselct_arw_lo_pane

0x3a5f,	// (0x0004a775) list_recal_vselct_arw_up_pane

0x26cc,	// (0x000493e2) list_recal_vselct_pane

0x3cac,	// (0x0004a9c2) btmg_button_pane

0xccfc,	// (0x00053a12) main_btmg_pane_g1

0x4f85,	// (0x0004bc9b) bg_button_pane_cp044

0xcd04,	// (0x00053a1a) btmg_button_pane_t1

0x1171,	// (0x00047e87) aid_listscroll_gen

0xf115,	// (0x00055e2b) main_cntbar_detail_pane

0x3617,	// (0x0004a32d) list_cmail_folder_pane

0x3627,	// (0x0004a33d) sp_fs_scroll_pane_cp03_ParamLimits

0xcd12,	// (0x00053a28) list_single_fs_dyc_pane_cp01_ParamLimits

0xcd12,	// (0x00053a28) list_single_fs_dyc_pane_cp01

0xcd38,	// (0x00053a4e) aid_size_cmail_indent

0x3cb6,	// (0x0004a9cc) list_single_dyc_row_pane_cp01

0xcd61,	// (0x00053a77) cntbar_detail_list_pane_ParamLimits

0xcd61,	// (0x00053a77) cntbar_detail_list_pane

0xcd9b,	// (0x00053ab1) main_cntbar_detail_cont_pane_ParamLimits

0xcd9b,	// (0x00053ab1) main_cntbar_detail_cont_pane

0x7404,	// (0x0004e11a) scroll_pane_cp032_ParamLimits

0x7404,	// (0x0004e11a) scroll_pane_cp032

0xcda7,	// (0x00053abd) cntbar_detail_list_event_pane_ParamLimits

0xcda7,	// (0x00053abd) cntbar_detail_list_event_pane

0xcd6d,	// (0x00053a83) cntbar_detail_list_shct_pane

0xda25,	// (0x0005473b) aid_list_gen

0xcdbb,	// (0x00053ad1) aid_scroll

0xcdc4,	// (0x00053ada) aid_size_touch_scroll_bar

0xcdcd,	// (0x00053ae3) aid_list_double

0xcdd6,	// (0x00053aec) aid_list_single

0xcddf,	// (0x00053af5) aid_list_single_lg

0x3cbf,	// (0x0004a9d5) aid_list_z_g_a_sm

0x3cc7,	// (0x0004a9dd) aid_list_z_g_d

0x3ccf,	// (0x0004a9e5) aid_txt_z_prm

0xcde8,	// (0x00053afe) aid_txt_z_prm_cp01

0xcdf6,	// (0x00053b0c) aid_txt_z_sec

0xce04,	// (0x00053b1a) main_cntbar_detail_cont_pane_g1_ParamLimits

0xce04,	// (0x00053b1a) main_cntbar_detail_cont_pane_g1

0xce11,	// (0x00053b27) main_cntbar_detail_cont_pane_g2_ParamLimits

0xce11,	// (0x00053b27) main_cntbar_detail_cont_pane_g2

0x0001,

0xfec7,	// (0x00056bdd) main_cntbar_detail_cont_pane_g_ParamLimits

0xfec7,	// (0x00056bdd) main_cntbar_detail_cont_pane_g

0xce1d,	// (0x00053b33) main_cntbar_detail_cont_pane_t1

0xce2b,	// (0x00053b41) main_cntbar_detail_cont_pane_t2

0xce39,	// (0x00053b4f) main_cntbar_detail_cont_pane_t3

0x0002,

0xfecc,	// (0x00056be2) main_cntbar_detail_cont_pane_t

0xce47,	// (0x00053b5d) cell_cntbar_detail_list_shct_pane_ParamLimits

0xce47,	// (0x00053b5d) cell_cntbar_detail_list_shct_pane

0xce5b,	// (0x00053b71) cntbar_detail_list_shct_pane_g1

0xce64,	// (0x00053b7a) cntbar_detail_list_shct_pane_g2

0x0001,

0xfed3,	// (0x00056be9) cntbar_detail_list_shct_pane_g

0xce6d,	// (0x00053b83) cntbar_detail_list_event_pane_g1_ParamLimits

0xce6d,	// (0x00053b83) cntbar_detail_list_event_pane_g1

0xce79,	// (0x00053b8f) cntbar_detail_list_event_pane_g2_ParamLimits

0xce79,	// (0x00053b8f) cntbar_detail_list_event_pane_g2

0x0005,

0xfed8,	// (0x00056bee) cntbar_detail_list_event_pane_g_ParamLimits

0xfed8,	// (0x00056bee) cntbar_detail_list_event_pane_g

0xcee5,	// (0x00053bfb) cntbar_detail_list_event_pane_t1_ParamLimits

0xcee5,	// (0x00053bfb) cntbar_detail_list_event_pane_t1

0xcefa,	// (0x00053c10) cntbar_detail_list_event_pane_t2_ParamLimits

0xcefa,	// (0x00053c10) cntbar_detail_list_event_pane_t2

0x0002,

0xfee5,	// (0x00056bfb) cntbar_detail_list_event_pane_t_ParamLimits

0xfee5,	// (0x00056bfb) cntbar_detail_list_event_pane_t

0x167f,	// (0x00048395) cell_cntbar_detail_list_shct_pane_g1

0x77f8,	// (0x0004e50e) navi_pane_mv_g3

0xf115,	// (0x00055e2b) main_cntbar_detail_pane_ParamLimits

0x4f85,	// (0x0004bc9b) main_notif_wgt_pane

0x9e51,	// (0x00050b67) aid_tch_main_mp4_pane_g4

0xa05c,	// (0x00050d72) popup_slider_window_cp02

0x3a4e,	// (0x0004a764) list_recal_day_event_pane

0xcd41,	// (0x00053a57) cntbar_detail_btn_pane_ParamLimits

0xcd41,	// (0x00053a57) cntbar_detail_btn_pane

0xcd51,	// (0x00053a67) cntbar_detail_btn_pane_cp01_ParamLimits

0xcd51,	// (0x00053a67) cntbar_detail_btn_pane_cp01

0xcd6d,	// (0x00053a83) cntbar_detail_list_shct_pane_ParamLimits

0xcd79,	// (0x00053a8f) cntbar_detail_pane_g1_ParamLimits

0xcd79,	// (0x00053a8f) cntbar_detail_pane_g1

0xcd85,	// (0x00053a9b) cntbar_detail_pane_t1_ParamLimits

0xcd85,	// (0x00053a9b) cntbar_detail_pane_t1

0xce85,	// (0x00053b9b) cntbar_detail_list_event_pane_g3_ParamLimits

0xce85,	// (0x00053b9b) cntbar_detail_list_event_pane_g3

0xce9d,	// (0x00053bb3) cntbar_detail_list_event_pane_g4_ParamLimits

0xce9d,	// (0x00053bb3) cntbar_detail_list_event_pane_g4

0xceb5,	// (0x00053bcb) cntbar_detail_list_event_pane_g5_ParamLimits

0xceb5,	// (0x00053bcb) cntbar_detail_list_event_pane_g5

0xcecd,	// (0x00053be3) cntbar_detail_list_event_pane_g6_ParamLimits

0xcecd,	// (0x00053be3) cntbar_detail_list_event_pane_g6

0xcf0f,	// (0x00053c25) cntbar_detail_list_event_pane_t3_ParamLimits

0xcf0f,	// (0x00053c25) cntbar_detail_list_event_pane_t3

0xcf21,	// (0x00053c37) popup_notif_wgt_window_ParamLimits

0xcf21,	// (0x00053c37) popup_notif_wgt_window

0xcf31,	// (0x00053c47) popup_submenu_window_cp01_ParamLimits

0xcf31,	// (0x00053c47) popup_submenu_window_cp01

0xe0c2,	// (0x00054dd8) bg_popup_window_pane_cp10

0xcf3f,	// (0x00053c55) listscroll_notif_wgt_pane

0xcf49,	// (0x00053c5f) list_notif_wgt_window

0xcf52,	// (0x00053c68) scroll_pane_cp033

0x3cdd,	// (0x0004a9f3) list_notif_wgt_row_pane_ParamLimits

0x3cdd,	// (0x0004a9f3) list_notif_wgt_row_pane

0xcf5b,	// (0x00053c71) aid_size_list_notif_wgt_del

0xcf64,	// (0x00053c7a) list_notif_wgt_row_pane_g1

0xcf6c,	// (0x00053c82) list_notif_wgt_row_pane_g2

0xcf74,	// (0x00053c8a) list_notif_wgt_row_pane_g3

0x0002,

0xfeec,	// (0x00056c02) list_notif_wgt_row_pane_g

0xcf7d,	// (0x00053c93) list_notif_wgt_row_pane_t1

0xcf8b,	// (0x00053ca1) list_notif_wgt_row_pane_t2

0xcf99,	// (0x00053caf) list_notif_wgt_row_pane_t3

0x0002,

0xfef3,	// (0x00056c09) list_notif_wgt_row_pane_t

0x23ae,	// (0x000490c4) list_recal_day_event_pane_g1

0xcfa7,	// (0x00053cbd) list_recal_day_event_pane_t1

0x4f85,	// (0x0004bc9b) bg_button_pane_cp045

0xcfb6,	// (0x00053ccc) cntbar_detail_btn_pane_t1

0x1179,	// (0x00047e8f) main_callh_pane_ParamLimits

0x1179,	// (0x00047e8f) main_callh_pane

0x4f85,	// (0x0004bc9b) main_coverflow0_pane

0x4f85,	// (0x0004bc9b) main_wgtman_pane

0xc0a9,	// (0x00052dbf) main_fs_bigclock_unlock_btn_pane_ParamLimits

0xc0a9,	// (0x00052dbf) main_fs_bigclock_unlock_btn_pane

0xc7aa,	// (0x000534c0) bg_button_pane_cp16

0xc7c2,	// (0x000534d8) cell_tport_appsw_pane_g3

0xcfc4,	// (0x00053cda) cf0_flow_pane_ParamLimits

0xcfc4,	// (0x00053cda) cf0_flow_pane

0xcfd3,	// (0x00053ce9) listscroll_cf0_pane

0xcfdc,	// (0x00053cf2) main_cf0_pane_g1

0xcfe6,	// (0x00053cfc) main_cf0_pane_t1_ParamLimits

0xcfe6,	// (0x00053cfc) main_cf0_pane_t1

0xcffa,	// (0x00053d10) main_cf0_pane_t2_ParamLimits

0xcffa,	// (0x00053d10) main_cf0_pane_t2

0x0001,

0xfefa,	// (0x00056c10) main_cf0_pane_t_ParamLimits

0xfefa,	// (0x00056c10) main_cf0_pane_t

0xd00e,	// (0x00053d24) scroll_pane_cp11

0xd019,	// (0x00053d2f) cf0_flow_pane_g1

0xd021,	// (0x00053d37) cf0_flow_pane_g2

0x0001,

0xfeff,	// (0x00056c15) cf0_flow_pane_g

0xd029,	// (0x00053d3f) cf0_flow_pane_t1

0x4f85,	// (0x0004bc9b) main_call6_pane

0x4f85,	// (0x0004bc9b) main_calllock_pane

0xd037,	// (0x00053d4d) call6_btn_grp_pane_ParamLimits

0xd037,	// (0x00053d4d) call6_btn_grp_pane

0xd046,	// (0x00053d5c) call6_pane_g1_ParamLimits

0xd046,	// (0x00053d5c) call6_pane_g1

0xd055,	// (0x00053d6b) popup_call6_1st_window_ParamLimits

0xd055,	// (0x00053d6b) popup_call6_1st_window

0xd063,	// (0x00053d79) popup_call6_2nd_window_ParamLimits

0xd063,	// (0x00053d79) popup_call6_2nd_window

0xd071,	// (0x00053d87) cell_call6_btn_pane_ParamLimits

0xd071,	// (0x00053d87) cell_call6_btn_pane

0xe0c2,	// (0x00054dd8) bg_popup_call2_in_pane_cp03

0xd080,	// (0x00053d96) popup_call6_1st_window_g1

0xd088,	// (0x00053d9e) popup_call6_1st_window_g2

0xd090,	// (0x00053da6) popup_call6_1st_window_g3

0x0002,

0xff04,	// (0x00056c1a) popup_call6_1st_window_g

0xd098,	// (0x00053dae) popup_call6_1st_window_t1

0xd0a7,	// (0x00053dbd) popup_call6_1st_window_t2

0xd0b7,	// (0x00053dcd) popup_call6_1st_window_t3

0x0002,

0xff0b,	// (0x00056c21) popup_call6_1st_window_t

0xe0c2,	// (0x00054dd8) bg_popup_call2_in_pane_cp04

0xd080,	// (0x00053d96) popup_call6_2nd_window_g1

0xd088,	// (0x00053d9e) popup_call6_2nd_window_g2

0xd090,	// (0x00053da6) popup_call6_2nd_window_g3

0x0002,

0xff04,	// (0x00056c1a) popup_call6_2nd_window_g

0xd098,	// (0x00053dae) popup_call6_2nd_window_t1

0x4f85,	// (0x0004bc9b) bg_button_pane_cp15

0xd0c7,	// (0x00053ddd) cell_call6_btn_pane_g1

0xd0d0,	// (0x00053de6) cell_call6_btn_pane_t1

0xd0df,	// (0x00053df5) listscroll_wgtman_pane_ParamLimits

0xd0df,	// (0x00053df5) listscroll_wgtman_pane

0xd0ee,	// (0x00053e04) wgtman_btn_pane_ParamLimits

0xd0ee,	// (0x00053e04) wgtman_btn_pane

0xdf79,	// (0x00054c8f) aid_scroll_copy1

0xd0fc,	// (0x00053e12) list_wgtman_pane

0xd106,	// (0x00053e1c) wgtman_btn_pane_g1_ParamLimits

0xd106,	// (0x00053e1c) wgtman_btn_pane_g1

0xd112,	// (0x00053e28) wgtman_btn_pane_t1_ParamLimits

0xd112,	// (0x00053e28) wgtman_btn_pane_t1

0xd124,	// (0x00053e3a) wgtman_btn_pane_t2_ParamLimits

0xd124,	// (0x00053e3a) wgtman_btn_pane_t2

0x0001,

0xff12,	// (0x00056c28) wgtman_btn_pane_t_ParamLimits

0xff12,	// (0x00056c28) wgtman_btn_pane_t

0xd136,	// (0x00053e4c) listrow_wgtman_pane_ParamLimits

0xd136,	// (0x00053e4c) listrow_wgtman_pane

0xd151,	// (0x00053e67) listrow_wgtman_pane_g1

0xd15a,	// (0x00053e70) listrow_wgtman_pane_g2

0x0001,

0xff17,	// (0x00056c2d) listrow_wgtman_pane_g

0xd164,	// (0x00053e7a) listrow_wgtman_pane_t1

0xd172,	// (0x00053e88) listrow_wgtman_pane_t2

0x0001,

0xff1c,	// (0x00056c32) listrow_wgtman_pane_t

0xd180,	// (0x00053e96) wait_bar_pane_cp09

0xd188,	// (0x00053e9e) main_calllock_btn_pane

0xd192,	// (0x00053ea8) main_calllock_pane_g1

0x4f85,	// (0x0004bc9b) bg_button_pane_cp17

0xd19e,	// (0x00053eb4) main_calllock_btn_pane_g1

0xd1a7,	// (0x00053ebd) main_calllock_btn_pane_t1

0x4f85,	// (0x0004bc9b) main_dialer3_pane

0x4f85,	// (0x0004bc9b) main_fmrd2_pane

0x167f,	// (0x00048395) main_fs_bigclock_unlock_btn_pane_g1

0xd1be,	// (0x00053ed4) main_fs_bigclock_unlock_btn_pane_t1

0xd1cc,	// (0x00053ee2) area_fmrd2_info_pane_ParamLimits

0xd1cc,	// (0x00053ee2) area_fmrd2_info_pane

0xd1db,	// (0x00053ef1) area_fmrd2_visual_pane_ParamLimits

0xd1db,	// (0x00053ef1) area_fmrd2_visual_pane

0xd1e9,	// (0x00053eff) fmrd2_indi_pane_ParamLimits

0xd1e9,	// (0x00053eff) fmrd2_indi_pane

0xd1f6,	// (0x00053f0c) area_fmrd2_visual_pane_g1

0xd1fe,	// (0x00053f14) area_fmrd2_visual_pane_t1

0xd20e,	// (0x00053f24) area_fmrd2_visual_pane_t2

0xd21e,	// (0x00053f34) area_fmrd2_visual_pane_t3

0x0002,

0xff26,	// (0x00056c3c) area_fmrd2_visual_pane_t

0xd22e,	// (0x00053f44) area_fmrd2_info_pane_g1

0xd236,	// (0x00053f4c) area_fmrd2_info_pane_t1

0xd246,	// (0x00053f5c) area_fmrd2_info_pane_t2

0xd256,	// (0x00053f6c) area_fmrd2_info_pane_t3

0xd266,	// (0x00053f7c) area_fmrd2_info_pane_t4

0x0003,

0xff2d,	// (0x00056c43) area_fmrd2_info_pane_t

0xd274,	// (0x00053f8a) fmrd2_indi_pane_t1

0xd284,	// (0x00053f9a) fmrd2_indi_pane_t2

0xd294,	// (0x00053faa) fmrd2_indi_pane_t3

0x0002,

0xff36,	// (0x00056c4c) fmrd2_indi_pane_t

0x30ac,	// (0x00049dc2) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0x30ac,	// (0x00049dc2) list_single_fs_bigclock_indicator_pane_g5

0x3150,	// (0x00049e66) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0x3150,	// (0x00049e66) list_single_fs_bigclock_indicator_pane_t5

0xc971,	// (0x00053687) aid_cell_bcale_month_pane_ParamLimits

0xc971,	// (0x00053687) aid_cell_bcale_month_pane

0xc97d,	// (0x00053693) bcale_month_pane_ParamLimits

0xc97d,	// (0x00053693) bcale_month_pane

0xc98b,	// (0x000536a1) bcale_preview_pane_ParamLimits

0xc98b,	// (0x000536a1) bcale_preview_pane

0x3c49,	// (0x0004a95f) list_single_fs_bigclock_pane_t1_ParamLimits

0x3c63,	// (0x0004a979) list_single_fs_bigclock_pane_t2_ParamLimits

0x3c63,	// (0x0004a979) list_single_fs_bigclock_pane_t2

0x0001,

0xfebd,	// (0x00056bd3) list_single_fs_bigclock_pane_t_ParamLimits

0xfebd,	// (0x00056bd3) list_single_fs_bigclock_pane_t

0xd1b6,	// (0x00053ecc) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xff21,	// (0x00056c37) main_fs_bigclock_unlock_btn_pane_g

0xd2a2,	// (0x00053fb8) aid_dia3_key_size_ParamLimits

0xd2a2,	// (0x00053fb8) aid_dia3_key_size

0xd2ae,	// (0x00053fc4) aid_dia3_listrow_size_ParamLimits

0xd2ae,	// (0x00053fc4) aid_dia3_listrow_size

0xd2bc,	// (0x00053fd2) dia3_keypad_fun_pane_ParamLimits

0xd2bc,	// (0x00053fd2) dia3_keypad_fun_pane

0xd2cc,	// (0x00053fe2) dia3_keypad_num_pane_ParamLimits

0xd2cc,	// (0x00053fe2) dia3_keypad_num_pane

0xd2dc,	// (0x00053ff2) dia3_listscroll_pane_ParamLimits

0xd2dc,	// (0x00053ff2) dia3_listscroll_pane

0xd2ea,	// (0x00054000) dia3_numentry_pane_ParamLimits

0xd2ea,	// (0x00054000) dia3_numentry_pane

0xd2f8,	// (0x0005400e) dia3_list_pane

0xd303,	// (0x00054019) scroll_pane_cp12

0x4f85,	// (0x0004bc9b) bg_dia3_numentry_pane

0xd30e,	// (0x00054024) dia3_numentry_pane_t1

0xd31d,	// (0x00054033) cell_dia3_key_num_pane

0xd325,	// (0x0005403b) cell_dia3_key0_fun_pane_ParamLimits

0xd325,	// (0x0005403b) cell_dia3_key0_fun_pane

0xd332,	// (0x00054048) cell_dia3_key1_fun_pane_ParamLimits

0xd332,	// (0x00054048) cell_dia3_key1_fun_pane

0xd33f,	// (0x00054055) dia3_listrow_pane

0x2dcc,	// (0x00049ae2) bg_dia3_numentry_pane_g1

0x4f85,	// (0x0004bc9b) bg_button_pane_cp21

0xd348,	// (0x0005405e) cell_dia3_key_num_pane_t1

0xd356,	// (0x0005406c) cell_dia3_key_num_pane_t2

0xd365,	// (0x0005407b) cell_dia3_key_num_pane_t3

0xd374,	// (0x0005408a) cell_dia3_key_num_pane_t4

0x0003,

0xff3d,	// (0x00056c53) cell_dia3_key_num_pane_t

0x4f85,	// (0x0004bc9b) bg_button_pane_cp19

0xd383,	// (0x00054099) cell_dia3_key0_fun_pane_g1

0x4f85,	// (0x0004bc9b) bg_button_pane_cp20

0xd38b,	// (0x000540a1) cell_dia3_key1_fun_pane_g1

0xd393,	// (0x000540a9) area_left_week_number_pane

0xd39c,	// (0x000540b2) area_top_day_name_pane

0xd3a5,	// (0x000540bb) frame_month_view_pane

0xd3af,	// (0x000540c5) grid_month_view_pane

0xd3b9,	// (0x000540cf) cell_top_day_name_pane_ParamLimits

0xd3b9,	// (0x000540cf) cell_top_day_name_pane

0xd3d3,	// (0x000540e9) cell_area_left_week_number_pane_ParamLimits

0xd3d3,	// (0x000540e9) cell_area_left_week_number_pane

0xd3e7,	// (0x000540fd) cell_month_view_pane_ParamLimits

0xd3e7,	// (0x000540fd) cell_month_view_pane

0xd404,	// (0x0005411a) frm_month_g1

0xd40d,	// (0x00054123) frm_month_g2

0xd417,	// (0x0005412d) frm_month_g3

0xd421,	// (0x00054137) frm_month_g4

0xd42b,	// (0x00054141) frm_month_g5

0xd435,	// (0x0005414b) frm_month_g6

0xd43f,	// (0x00054155) frm_month_g7

0xd449,	// (0x0005415f) frm_month_g8

0xd452,	// (0x00054168) frm_month_g9

0xd45b,	// (0x00054171) frm_month_g10

0xd464,	// (0x0005417a) frm_month_g11

0xd46d,	// (0x00054183) frm_month_g12

0xd476,	// (0x0005418c) frm_month_g13

0xd47f,	// (0x00054195) frm_month_g14

0xd488,	// (0x0005419e) frm_month_g15

0xd493,	// (0x000541a9) frm_month_g16

0x000f,

0xff46,	// (0x00056c5c) frm_month_g

0xd49e,	// (0x000541b4) cell_top_day_name_pane_t1

0xd4ad,	// (0x000541c3) cell_area_left_week_number_pane_g1

0xd49e,	// (0x000541b4) cell_area_left_week_number_pane_t1

0x167f,	// (0x00048395) cell_month_view_pane_g1

0xd4b5,	// (0x000541cb) cell_month_view_pane_t1

0x4f85,	// (0x0004bc9b) main_fps_pane

0x3381,	// (0x0004a097) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0x3381,	// (0x0004a097) cmail_ddmenu_btn02_pane_cp1

0x339d,	// (0x0004a0b3) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0x339d,	// (0x0004a0b3) cmail_ddmenu_btn02_pane_cp2

0xcc03,	// (0x00053919) cmail_ddmenu_btn02_pane_g2_ParamLimits

0xcc03,	// (0x00053919) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfe6e,	// (0x00056b84) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfe6e,	// (0x00056b84) cmail_ddmenu_btn02_pane_g

0xcc21,	// (0x00053937) cmail_ddmenu_btn02_pane_t2_ParamLimits

0xcc21,	// (0x00053937) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfe73,	// (0x00056b89) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfe73,	// (0x00056b89) cmail_ddmenu_btn02_pane_t

0xd4c4,	// (0x000541da) fps_text_pane_ParamLimits

0xd4c4,	// (0x000541da) fps_text_pane

0xd4d1,	// (0x000541e7) main_fps_pane_g1_ParamLimits

0xd4d1,	// (0x000541e7) main_fps_pane_g1

0xd4df,	// (0x000541f5) wait_bar_pane_cp010_ParamLimits

0xd4df,	// (0x000541f5) wait_bar_pane_cp010

0xd4eb,	// (0x00054201) fps_text_pane_t1_ParamLimits

0xd4eb,	// (0x00054201) fps_text_pane_t1
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
	};

} // end of namespace AknLayoutScalable_Abrw_php_apps_qhd_prt_tch_Small
