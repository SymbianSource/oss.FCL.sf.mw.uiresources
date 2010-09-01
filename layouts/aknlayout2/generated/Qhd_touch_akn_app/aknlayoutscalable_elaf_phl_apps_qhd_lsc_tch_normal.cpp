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

#include "aknlayoutscalable_elaf_phl_apps_qhd_lsc_tch_normal.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_php_apps_qhd_prt_tch[]; }

namespace AknLayoutScalable_Elaf_phl_apps_qhd_lsc_tch_Normal
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_php_apps_qhd_prt_tch + 0x0000c96d };

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
0x1687,	// (0x0000dff4) Screen

0x1693,	// (0x0000e000) application_window

0x16cf,	// (0x0000e03c) area_bottom_pane_ParamLimits

0x16cf,	// (0x0000e03c) area_bottom_pane

0x1708,	// (0x0000e075) area_top_pane_ParamLimits

0x1708,	// (0x0000e075) area_top_pane

0x97c6,	// (0x00016133) call_video_uplink_pane_ParamLimits

0x97c6,	// (0x00016133) call_video_uplink_pane

0x1796,	// (0x0000e103) main_pane_ParamLimits

0x1796,	// (0x0000e103) main_pane

0xc13b,	// (0x00018aa8) context_pane

0x45ca,	// (0x00010f37) navi_pane

0x45fc,	// (0x00010f69) popup_cale_events_window_ParamLimits

0x45fc,	// (0x00010f69) popup_cale_events_window

0xc14e,	// (0x00018abb) popup_mup_playback_window

0x4614,	// (0x00010f81) signal_pane

0x9f6f,	// (0x000168dc) main_browser_pane

0xa1b4,	// (0x00016b21) main_burst_pane

0x431e,	// (0x00010c8b) main_calc_pane

0xc0db,	// (0x00018a48) main_cale_day_pane

0x1c8c,	// (0x0000e5f9) main_cale_month_pane

0xc0db,	// (0x00018a48) main_cale_week_pane

0xa1b4,	// (0x00016b21) main_call_pane

0x9c05,	// (0x00016572) main_call_poc_pane

0xa1b4,	// (0x00016b21) main_camera_pane

0xa1b4,	// (0x00016b21) main_chi_dic_pane

0xaa3c,	// (0x000173a9) main_clock_pane

0x9c05,	// (0x00016572) main_fmradio_pane

0xa1b4,	// (0x00016b21) main_graph_messa_pane

0x9c05,	// (0x00016572) main_help_pane

0x9f6f,	// (0x000168dc) main_im_pane

0x9e60,	// (0x000167cd) main_image_pane_ParamLimits

0x9e60,	// (0x000167cd) main_image_pane

0x9c05,	// (0x00016572) main_location2_pane

0xa1b4,	// (0x00016b21) main_location_pane

0x9e60,	// (0x000167cd) main_messa_pane

0x9c05,	// (0x00016572) main_mp2_pane

0xa1b4,	// (0x00016b21) main_mp_pane

0x9c05,	// (0x00016572) main_msg_pane

0x9c05,	// (0x00016572) main_mup_eq_pane

0x9c05,	// (0x00016572) main_mup_pane

0x9f6f,	// (0x000168dc) main_notes_pane

0x9c05,	// (0x00016572) main_pec_pane

0x9c05,	// (0x00016572) main_phob_pane

0x9c05,	// (0x00016572) main_pinb_pane

0x9c05,	// (0x00016572) main_postcard_pane

0x9c05,	// (0x00016572) main_qdial_pane

0xa1b4,	// (0x00016b21) main_skin_pane

0x9c05,	// (0x00016572) main_smil2_pane

0xa1b4,	// (0x00016b21) main_smil_pane

0xa1b4,	// (0x00016b21) main_video_pane

0xa1b4,	// (0x00016b21) main_video_tele_pane

0x9e60,	// (0x000167cd) main_viewer_pane_ParamLimits

0x9e60,	// (0x000167cd) main_viewer_pane

0xa1b4,	// (0x00016b21) main_vorec_pane

0x437e,	// (0x00010ceb) popup_blid_sat_info_window_ParamLimits

0x437e,	// (0x00010ceb) popup_blid_sat_info_window

0x43d6,	// (0x00010d43) popup_dyc_status_message_window_ParamLimits

0x43d6,	// (0x00010d43) popup_dyc_status_message_window

0x43f0,	// (0x00010d5d) popup_grid_large_graphic_window_ParamLimits

0x43f0,	// (0x00010d5d) popup_grid_large_graphic_window

0x44ac,	// (0x00010e19) popup_loc_request_window_ParamLimits

0x44ac,	// (0x00010e19) popup_loc_request_window

0x45a2,	// (0x00010f0f) popup_wml_address_window_ParamLimits

0x45a2,	// (0x00010f0f) popup_wml_address_window

0x4158,	// (0x00010ac5) call_muted_g1

0x3dcc,	// (0x00010739) popup_call_audio_conf_window_ParamLimits

0x3dcc,	// (0x00010739) popup_call_audio_conf_window

0x416c,	// (0x00010ad9) popup_call_audio_first_window_ParamLimits

0x416c,	// (0x00010ad9) popup_call_audio_first_window

0x41e2,	// (0x00010b4f) popup_call_audio_in_window_ParamLimits

0x41e2,	// (0x00010b4f) popup_call_audio_in_window

0x421e,	// (0x00010b8b) popup_call_audio_out_window_ParamLimits

0x421e,	// (0x00010b8b) popup_call_audio_out_window

0x4258,	// (0x00010bc5) popup_call_audio_second_window_ParamLimits

0x4258,	// (0x00010bc5) popup_call_audio_second_window

0x42ae,	// (0x00010c1b) popup_call_audio_wait_window_ParamLimits

0x42ae,	// (0x00010c1b) popup_call_audio_wait_window

0x42e3,	// (0x00010c50) popup_number_entry_window_ParamLimits

0x42e3,	// (0x00010c50) popup_number_entry_window

0x97f2,	// (0x0001615f) bg_popup_call_pane_cp05_ParamLimits

0x97f2,	// (0x0001615f) bg_popup_call_pane_cp05

0x9812,	// (0x0001617f) popup_number_entry_window_t1

0x9825,	// (0x00016192) popup_number_entry_window_t2

0x9837,	// (0x000161a4) popup_number_entry_window_t3

0x0003,

0xf085,	// (0x0001b9f2) popup_number_entry_window_t

0x9849,	// (0x000161b6) text_title_cp2

0x985c,	// (0x000161c9) bg_popup_call_pane_cp_ParamLimits

0x985c,	// (0x000161c9) bg_popup_call_pane_cp

0x986a,	// (0x000161d7) call_thumbnail_pane

0x9872,	// (0x000161df) popup_call_audio_in_window_g1_ParamLimits

0x9872,	// (0x000161df) popup_call_audio_in_window_g1

0x987e,	// (0x000161eb) popup_call_audio_in_window_g2_ParamLimits

0x987e,	// (0x000161eb) popup_call_audio_in_window_g2

0x988a,	// (0x000161f7) popup_call_audio_in_window_g3_ParamLimits

0x988a,	// (0x000161f7) popup_call_audio_in_window_g3

0x0002,

0xf08e,	// (0x0001b9fb) popup_call_audio_in_window_g_ParamLimits

0xf08e,	// (0x0001b9fb) popup_call_audio_in_window_g

0x9896,	// (0x00016203) popup_call_audio_in_window_t1_ParamLimits

0x9896,	// (0x00016203) popup_call_audio_in_window_t1

0x98b2,	// (0x0001621f) popup_call_audio_in_window_t2_ParamLimits

0x98b2,	// (0x0001621f) popup_call_audio_in_window_t2

0x98ce,	// (0x0001623b) popup_call_audio_in_window_t3_ParamLimits

0x98ce,	// (0x0001623b) popup_call_audio_in_window_t3

0x0002,

0xf095,	// (0x0001ba02) popup_call_audio_in_window_t_ParamLimits

0xf095,	// (0x0001ba02) popup_call_audio_in_window_t

0x985c,	// (0x000161c9) bg_popup_call_pane_cp01_ParamLimits

0x985c,	// (0x000161c9) bg_popup_call_pane_cp01

0x986a,	// (0x000161d7) call_thumbnail_pane_cp02

0x98e1,	// (0x0001624e) call_type_pane_cp022

0x98e9,	// (0x00016256) popup_call_audio_out_window_g1_ParamLimits

0x98e9,	// (0x00016256) popup_call_audio_out_window_g1

0x98fb,	// (0x00016268) popup_call_audio_out_window_g2_ParamLimits

0x98fb,	// (0x00016268) popup_call_audio_out_window_g2

0x9907,	// (0x00016274) popup_call_audio_out_window_g3_ParamLimits

0x9907,	// (0x00016274) popup_call_audio_out_window_g3

0x0002,

0xf09c,	// (0x0001ba09) popup_call_audio_out_window_g_ParamLimits

0xf09c,	// (0x0001ba09) popup_call_audio_out_window_g

0x9919,	// (0x00016286) popup_call_audio_out_window_t1_ParamLimits

0x9919,	// (0x00016286) popup_call_audio_out_window_t1

0x9931,	// (0x0001629e) popup_call_audio_out_window_t2_ParamLimits

0x9931,	// (0x0001629e) popup_call_audio_out_window_t2

0x0001,

0xf0a3,	// (0x0001ba10) popup_call_audio_out_window_t_ParamLimits

0xf0a3,	// (0x0001ba10) popup_call_audio_out_window_t

0x9946,	// (0x000162b3) bg_popup_call_pane_ParamLimits

0x9946,	// (0x000162b3) bg_popup_call_pane

0x1952,	// (0x0000e2bf) call_thumbnail_pane_cp_ParamLimits

0x1952,	// (0x0000e2bf) call_thumbnail_pane_cp

0x99ca,	// (0x00016337) call_type_pane_cp01_ParamLimits

0x99ca,	// (0x00016337) call_type_pane_cp01

0x9a0e,	// (0x0001637b) popup_call_audio_first_window_g1_ParamLimits

0x9a0e,	// (0x0001637b) popup_call_audio_first_window_g1

0x9a5a,	// (0x000163c7) popup_call_audio_first_window_g2_ParamLimits

0x9a5a,	// (0x000163c7) popup_call_audio_first_window_g2

0x0001,

0xf0a8,	// (0x0001ba15) popup_call_audio_first_window_g_ParamLimits

0xf0a8,	// (0x0001ba15) popup_call_audio_first_window_g

0x9a9e,	// (0x0001640b) popup_call_audio_first_window_t1_ParamLimits

0x9a9e,	// (0x0001640b) popup_call_audio_first_window_t1

0x9b4a,	// (0x000164b7) popup_call_audio_first_window_t4_ParamLimits

0x9b4a,	// (0x000164b7) popup_call_audio_first_window_t4

0x9bd6,	// (0x00016543) popup_call_audio_first_window_t5_ParamLimits

0x9bd6,	// (0x00016543) popup_call_audio_first_window_t5

0x0002,

0xf0ad,	// (0x0001ba1a) popup_call_audio_first_window_t_ParamLimits

0xf0ad,	// (0x0001ba1a) popup_call_audio_first_window_t

0x9c05,	// (0x00016572) bg_popup_call_pane_cp02

0x9c0f,	// (0x0001657c) call_type_pane_cp023

0x9c17,	// (0x00016584) popup_call_audio_wait_window_g1

0x9c1f,	// (0x0001658c) popup_call_audio_wait_window_g2

0x0001,

0xf0b4,	// (0x0001ba21) popup_call_audio_wait_window_g

0x9c27,	// (0x00016594) popup_call_audio_wait_window_t3

0x9c35,	// (0x000165a2) bg_popup_call_pane_cp03_ParamLimits

0x9c35,	// (0x000165a2) bg_popup_call_pane_cp03

0x9c95,	// (0x00016602) call_thumbnail_pane_cp011_ParamLimits

0x9c95,	// (0x00016602) call_thumbnail_pane_cp011

0x9ca1,	// (0x0001660e) call_type_pane_cp034_ParamLimits

0x9ca1,	// (0x0001660e) call_type_pane_cp034

0x9cdd,	// (0x0001664a) popup_call_audio_second_window_g1_ParamLimits

0x9cdd,	// (0x0001664a) popup_call_audio_second_window_g1

0x9d19,	// (0x00016686) popup_call_audio_second_window_g2_ParamLimits

0x9d19,	// (0x00016686) popup_call_audio_second_window_g2

0x0001,

0xf0b9,	// (0x0001ba26) popup_call_audio_second_window_g_ParamLimits

0xf0b9,	// (0x0001ba26) popup_call_audio_second_window_g

0x9d55,	// (0x000166c2) popup_call_audio_second_window_t1_ParamLimits

0x9d55,	// (0x000166c2) popup_call_audio_second_window_t1

0x9dd6,	// (0x00016743) popup_call_audio_second_window_t2_ParamLimits

0x9dd6,	// (0x00016743) popup_call_audio_second_window_t2

0x9e0c,	// (0x00016779) popup_call_audio_second_window_t3_ParamLimits

0x9e0c,	// (0x00016779) popup_call_audio_second_window_t3

0x0002,

0xf0be,	// (0x0001ba2b) popup_call_audio_second_window_t_ParamLimits

0xf0be,	// (0x0001ba2b) popup_call_audio_second_window_t

0x9c05,	// (0x00016572) bg_popup_call_pane_cp04

0x9e42,	// (0x000167af) list_conf_pane

0x9e4a,	// (0x000167b7) popup_call_audio_conf_window_t1

0x9e58,	// (0x000167c5) call_thumbnail_pane_g1

0x9e60,	// (0x000167cd) bg_pinb_pane_ParamLimits

0x9e60,	// (0x000167cd) bg_pinb_pane

0x9e6e,	// (0x000167db) find_pinb_pane

0x9e60,	// (0x000167cd) listscroll_pinb_pane_ParamLimits

0x9e60,	// (0x000167cd) listscroll_pinb_pane

0x9e78,	// (0x000167e5) pinb_bg_pane_g1

0x9e78,	// (0x000167e5) pinb_bg_pane_g2

0x9e78,	// (0x000167e5) pinb_bg_pane_g3

0x9e78,	// (0x000167e5) pinb_bg_pane_g4

0x9e78,	// (0x000167e5) pinb_bg_pane_g5

0x9e78,	// (0x000167e5) pinb_bg_pane_g6

0x9e78,	// (0x000167e5) pinb_bg_pane_g7

0x9e78,	// (0x000167e5) pinb_bg_pane_g8

0x9e78,	// (0x000167e5) pinb_bg_pane_g9

0x9e78,	// (0x000167e5) pinb_bg_pane_g10

0x0009,

0xf0c5,	// (0x0001ba32) pinb_bg_pane_g

0x9775,	// (0x000160e2) grid_pinb_pane

0x9775,	// (0x000160e2) list_pinb_pane

0x97e4,	// (0x00016151) scroll_pane_cp01_ParamLimits

0x97e4,	// (0x00016151) scroll_pane_cp01

0x9e82,	// (0x000167ef) find_pinb_pane_g1_ParamLimits

0x9e82,	// (0x000167ef) find_pinb_pane_g1

0x9e9a,	// (0x00016807) find_pinb_pane_t1

0x9eac,	// (0x00016819) find_pinb_pane_t2

0x0001,

0xf0df,	// (0x0001ba4c) find_pinb_pane_t

0x9ec1,	// (0x0001682e) input_focus_pane_cp01_ParamLimits

0x9ec1,	// (0x0001682e) input_focus_pane_cp01

0x9ecd,	// (0x0001683a) cell_pinb_pane_ParamLimits

0x9ecd,	// (0x0001683a) cell_pinb_pane

0x9edb,	// (0x00016848) cell_pinb_pane_g1_ParamLimits

0x9edb,	// (0x00016848) cell_pinb_pane_g1

0x9ee9,	// (0x00016856) cell_pinb_pane_g2_ParamLimits

0x9ee9,	// (0x00016856) cell_pinb_pane_g2

0x9ee9,	// (0x00016856) cell_pinb_pane_g3_ParamLimits

0x9ee9,	// (0x00016856) cell_pinb_pane_g3

0x0002,

0xf0e4,	// (0x0001ba51) cell_pinb_pane_g_ParamLimits

0xf0e4,	// (0x0001ba51) cell_pinb_pane_g

0x9c05,	// (0x00016572) grid_highlight_pane_cp01

0x9ecd,	// (0x0001683a) list_pinb_item_pane_ParamLimits

0x9ecd,	// (0x0001683a) list_pinb_item_pane

0x9775,	// (0x000160e2) list_highlight_pane_cp02

0x9ef7,	// (0x00016864) list_pinb_item_pane_g1_ParamLimits

0x9ef7,	// (0x00016864) list_pinb_item_pane_g1

0x9ee9,	// (0x00016856) list_pinb_item_pane_g2_ParamLimits

0x9ee9,	// (0x00016856) list_pinb_item_pane_g2

0x9edb,	// (0x00016848) list_pinb_item_pane_g3_ParamLimits

0x9edb,	// (0x00016848) list_pinb_item_pane_g3

0x9ee9,	// (0x00016856) list_pinb_item_pane_g4_ParamLimits

0x9ee9,	// (0x00016856) list_pinb_item_pane_g4

0x0003,

0xf0eb,	// (0x0001ba58) list_pinb_item_pane_g_ParamLimits

0xf0eb,	// (0x0001ba58) list_pinb_item_pane_g

0x9f05,	// (0x00016872) list_pinb_item_pane_t1_ParamLimits

0x9f05,	// (0x00016872) list_pinb_item_pane_t1

0x1994,	// (0x0000e301) calc_display_pane

0x19b9,	// (0x0000e326) calc_paper_pane

0x19dc,	// (0x0000e349) grid_calc_pane

0x9c05,	// (0x00016572) bg_list_pane_cp01

0x1a0a,	// (0x0000e377) clock_g1

0x1a12,	// (0x0000e37f) clock_g2

0x0001,

0xf0f4,	// (0x0001ba61) clock_g

0x1a1a,	// (0x0000e387) clock_t1_ParamLimits

0x1a1a,	// (0x0000e387) clock_t1

0x1a2f,	// (0x0000e39c) clock_t2_ParamLimits

0x1a2f,	// (0x0000e39c) clock_t2

0x1a41,	// (0x0000e3ae) clock_t3_ParamLimits

0x1a41,	// (0x0000e3ae) clock_t3

0x1a53,	// (0x0000e3c0) clock_t4_ParamLimits

0x1a53,	// (0x0000e3c0) clock_t4

0x1a65,	// (0x0000e3d2) clock_t5_ParamLimits

0x1a65,	// (0x0000e3d2) clock_t5

0x1a7a,	// (0x0000e3e7) clock_t6_ParamLimits

0x1a7a,	// (0x0000e3e7) clock_t6

0x1a8c,	// (0x0000e3f9) clock_t7_ParamLimits

0x1a8c,	// (0x0000e3f9) clock_t7

0x1a9e,	// (0x0000e40b) clock_t8_ParamLimits

0x1a9e,	// (0x0000e40b) clock_t8

0x1ab2,	// (0x0000e41f) clock_t9_ParamLimits

0x1ab2,	// (0x0000e41f) clock_t9

0x0008,

0xf0f9,	// (0x0001ba66) clock_t_ParamLimits

0xf0f9,	// (0x0001ba66) clock_t

0x9f21,	// (0x0001688e) popup_clock_analogue_window_cp02

0x9f21,	// (0x0001688e) popup_clock_digital_window_cp01

0x9c05,	// (0x00016572) listscroll_help_pane

0x9c05,	// (0x00016572) phob_pre_status_pane

0x9f29,	// (0x00016896) grid_qdial_pane

0x9e60,	// (0x000167cd) listscroll_mce_pane

0x9e60,	// (0x000167cd) bg_notes_pane

0x9f33,	// (0x000168a0) list_notes_pane

0x1ac6,	// (0x0000e433) scroll_pane_cp06

0x9f41,	// (0x000168ae) bg_calc_paper_pane

0x9f55,	// (0x000168c2) list_calc_pane

0x9f6f,	// (0x000168dc) bg_calc_display_pane

0x1ada,	// (0x0000e447) calc_display_pane_t1

0x1aef,	// (0x0000e45c) calc_display_pane_t2

0x9f7b,	// (0x000168e8) calc_display_pane_t3

0x0002,

0xf10c,	// (0x0001ba79) calc_display_pane_t

0x1b04,	// (0x0000e471) cell_calc_pane_ParamLimits

0x1b04,	// (0x0000e471) cell_calc_pane

0x9f8d,	// (0x000168fa) bg_calc_paper_pane_g1

0x9f99,	// (0x00016906) bg_calc_paper_pane_g2

0x9fa5,	// (0x00016912) bg_calc_paper_pane_g3

0x9fb1,	// (0x0001691e) bg_calc_paper_pane_g4

0x9fbd,	// (0x0001692a) bg_calc_paper_pane_g5

0x1b39,	// (0x0000e4a6) bg_calc_paper_pane_g6

0x1b48,	// (0x0000e4b5) bg_calc_paper_pane_g7

0x1b57,	// (0x0000e4c4) bg_calc_paper_pane_g8

0x0007,

0xf113,	// (0x0001ba80) bg_calc_paper_pane_g

0x1b6a,	// (0x0000e4d7) calc_bg_paper_pane_g9

0x1b7d,	// (0x0000e4ea) list_calc_item_pane_ParamLimits

0x1b7d,	// (0x0000e4ea) list_calc_item_pane

0x9fc9,	// (0x00016936) list_calc_item_pane_g1

0x9fd6,	// (0x00016943) list_calc_item_pane_t1_ParamLimits

0x9fd6,	// (0x00016943) list_calc_item_pane_t1

0x1b95,	// (0x0000e502) list_calc_item_pane_t2_ParamLimits

0x1b95,	// (0x0000e502) list_calc_item_pane_t2

0x0001,

0xf124,	// (0x0001ba91) list_calc_item_pane_t_ParamLimits

0xf124,	// (0x0001ba91) list_calc_item_pane_t

0x9e78,	// (0x000167e5) cell_calc_pane_g1

0x9fe8,	// (0x00016955) grid_highlight_pane_cp02

0xa00a,	// (0x00016977) bg_calc_display_pane_g1

0x1bc7,	// (0x0000e534) bg_calc_display_pane_g2

0x1bd1,	// (0x0000e53e) bg_calc_display_pane_g3

0x0002,

0xf12e,	// (0x0001ba9b) bg_calc_display_pane_g

0x1bda,	// (0x0000e547) cell_qdial_pane_ParamLimits

0x1bda,	// (0x0000e547) cell_qdial_pane

0x1bee,	// (0x0000e55b) cell_qdial_pane_g1_ParamLimits

0x1bee,	// (0x0000e55b) cell_qdial_pane_g1

0x1c04,	// (0x0000e571) cell_qdial_pane_g2_ParamLimits

0x1c04,	// (0x0000e571) cell_qdial_pane_g2

0xa013,	// (0x00016980) cell_qdial_pane_g3_ParamLimits

0xa013,	// (0x00016980) cell_qdial_pane_g3

0x0003,

0xf135,	// (0x0001baa2) cell_qdial_pane_g_ParamLimits

0xf135,	// (0x0001baa2) cell_qdial_pane_g

0x1c2b,	// (0x0000e598) cell_qdial_pane_t1_ParamLimits

0x1c2b,	// (0x0000e598) cell_qdial_pane_t1

0x1c43,	// (0x0000e5b0) cell_qdial_pane_t2_ParamLimits

0x1c43,	// (0x0000e5b0) cell_qdial_pane_t2

0x1c56,	// (0x0000e5c3) cell_qdial_pane_t3_ParamLimits

0x1c56,	// (0x0000e5c3) cell_qdial_pane_t3

0x0002,

0xf13e,	// (0x0001baab) cell_qdial_pane_t_ParamLimits

0xf13e,	// (0x0001baab) cell_qdial_pane_t

0x9c05,	// (0x00016572) grid_highlight_pane_cp04

0xa01f,	// (0x0001698c) thumbnail_qdial_pane_ParamLimits

0xa01f,	// (0x0001698c) thumbnail_qdial_pane

0xa07b,	// (0x000169e8) list_help_pane

0xa084,	// (0x000169f1) scroll_pane_cp02

0xa08d,	// (0x000169fa) help_list_pane_t1_ParamLimits

0xa08d,	// (0x000169fa) help_list_pane_t1

0xa0ab,	// (0x00016a18) bg_notes_pane_g2

0xa0b3,	// (0x00016a20) bg_notes_pane_g3

0xa0bb,	// (0x00016a28) notes_bg_pane_g1

0xa0c3,	// (0x00016a30) notes_bg_pane_g4

0xa0cb,	// (0x00016a38) notes_bg_pane_g5

0xa0d3,	// (0x00016a40) notes_bg_pane_g6

0xa0db,	// (0x00016a48) notes_bg_pane_g7

0xa0e3,	// (0x00016a50) notes_bg_pane_g8

0xa0eb,	// (0x00016a58) notes_bg_pane_g9

0x0006,

0xf15c,	// (0x0001bac9) notes_bg_pane_g

0x1c69,	// (0x0000e5d6) list_notes_text_pane_ParamLimits

0x1c69,	// (0x0000e5d6) list_notes_text_pane

0xa0f3,	// (0x00016a60) list_notes_text_pane_g1

0x1c7e,	// (0x0000e5eb) list_notes_text_pane_t1

0x1c8c,	// (0x0000e5f9) listscroll_cale_week_pane

0x1cb8,	// (0x0000e625) bg_cale_heading_pane

0xa116,	// (0x00016a83) bg_cale_pane_cp01

0x1cd0,	// (0x0000e63d) cale_week_corner_pane

0x1cef,	// (0x0000e65c) cale_week_day_heading_pane

0x1d0c,	// (0x0000e679) cale_week_scroll_pane_g1

0x1d1f,	// (0x0000e68c) cale_week_scroll_pane_g2

0x1d37,	// (0x0000e6a4) cale_week_scroll_pane_g3

0x1d4f,	// (0x0000e6bc) cale_week_scroll_pane_g4

0x1d67,	// (0x0000e6d4) cale_week_scroll_pane_g5

0x1d87,	// (0x0000e6f4) cale_week_scroll_pane_g6

0x1da7,	// (0x0000e714) cale_week_scroll_pane_g7

0x1dc7,	// (0x0000e734) cale_week_scroll_pane_g8

0x1deb,	// (0x0000e758) cale_week_scroll_pane_g9

0x1e03,	// (0x0000e770) cale_week_scroll_pane_g10

0x1e1b,	// (0x0000e788) cale_week_scroll_pane_g11

0x1e33,	// (0x0000e7a0) cale_week_scroll_pane_g12

0x1e4b,	// (0x0000e7b8) cale_week_scroll_pane_g13

0x1e4b,	// (0x0000e7b8) cale_week_scroll_pane_g14

0x1e4b,	// (0x0000e7b8) cale_week_scroll_pane_g15

0x000f,

0xf16b,	// (0x0001bad8) cale_week_scroll_pane_g

0x1e87,	// (0x0000e7f4) cale_week_time_pane

0x1eab,	// (0x0000e818) grid_cale_week_pane

0xa145,	// (0x00016ab2) scroll_pane_cp08

0x1ed1,	// (0x0000e83e) cell_cale_week_pane_ParamLimits

0x1ed1,	// (0x0000e83e) cell_cale_week_pane

0x1f5f,	// (0x0000e8cc) cale_week_day_heading_pane_t1

0x1f89,	// (0x0000e8f6) cale_week_day_heading_pane_t2

0x1fb8,	// (0x0000e925) cale_week_day_heading_pane_t3

0x1fe7,	// (0x0000e954) cale_week_day_heading_pane_t4

0x2016,	// (0x0000e983) cale_week_day_heading_pane_t5

0x204d,	// (0x0000e9ba) cale_week_day_heading_pane_t6

0x2084,	// (0x0000e9f1) cale_week_day_heading_pane_t7

0x0006,

0xf18c,	// (0x0001baf9) cale_week_day_heading_pane_t

0xa162,	// (0x00016acf) bg_cale_side_pane

0x20ae,	// (0x0000ea1b) cale_week_time_pane_t1

0x20c8,	// (0x0000ea35) cale_week_time_pane_t2

0x20e2,	// (0x0000ea4f) cale_week_time_pane_t3

0x20fc,	// (0x0000ea69) cale_week_time_pane_t4

0x2116,	// (0x0000ea83) cale_week_time_pane_t5

0x2130,	// (0x0000ea9d) cale_week_time_pane_t6

0x214a,	// (0x0000eab7) cale_week_time_pane_t7

0x2164,	// (0x0000ead1) cale_week_time_pane_t8

0x0007,

0xf19b,	// (0x0001bb08) cale_week_time_pane_t

0x217e,	// (0x0000eaeb) cell_cale_week_pane_g2

0x219d,	// (0x0000eb0a) cell_cale_week_pane_g3_ParamLimits

0x219d,	// (0x0000eb0a) cell_cale_week_pane_g3

0xa170,	// (0x00016add) grid_highlight_pane_cp07

0xa178,	// (0x00016ae5) listscroll_gms_pane

0xa182,	// (0x00016aef) grid_gms_pane

0xa18b,	// (0x00016af8) listscroll_gms_pane_g1

0xa193,	// (0x00016b00) listscroll_gms_pane_g2

0x0001,

0xf1ac,	// (0x0001bb19) listscroll_gms_pane_g

0x21b5,	// (0x0000eb22) scroll_pane_cp010

0x21c0,	// (0x0000eb2d) cell_gms_pane_ParamLimits

0x21c0,	// (0x0000eb2d) cell_gms_pane

0x21d3,	// (0x0000eb40) cell_gms_pane_g1

0xa19b,	// (0x00016b08) cell_gms_pane_g2

0xa0f3,	// (0x00016a60) cell_gms_pane_g3

0xa1a3,	// (0x00016b10) cell_gms_pane_g4

0x0003,

0xf1b1,	// (0x0001bb1e) cell_gms_pane_g

0xa1ac,	// (0x00016b19) grid_highlight_pane_cp09

0x40e0,	// (0x00010a4d) phob_pre_status_pane_g1

0x40e8,	// (0x00010a55) phob_pre_status_pane_g2

0x40f0,	// (0x00010a5d) phob_pre_status_pane_g3

0x40f8,	// (0x00010a65) phob_pre_status_pane_g4

0x0004,

0xf575,	// (0x0001bee2) phob_pre_status_pane_g

0x4108,	// (0x00010a75) phob_pre_status_pane_t1

0x4116,	// (0x00010a83) phob_pre_status_pane_t2

0x4126,	// (0x00010a93) phob_pre_status_pane_t3

0x0002,

0xf580,	// (0x0001beed) phob_pre_status_pane_t

0xa1b4,	// (0x00016b21) bg_list_pane_cp05

0x21e3,	// (0x0000eb50) grid_vorec_pane

0x21eb,	// (0x0000eb58) vorec_t1

0x21f9,	// (0x0000eb66) vorec_t2

0x2207,	// (0x0000eb74) vorec_t3

0x2215,	// (0x0000eb82) vorec_t4

0x9575,	// (0x00015ee2) vorec_t5

0x9583,	// (0x00015ef0) vorec_t6

0x0004,

0xf1ba,	// (0x0001bb27) vorec_t

0x9591,	// (0x00015efe) wait_bar_pane_cp01

0x2231,	// (0x0000eb9e) cell_vorec_pane_ParamLimits

0x2231,	// (0x0000eb9e) cell_vorec_pane

0xa1bc,	// (0x00016b29) cell_vorec_pane_g1

0x9c05,	// (0x00016572) grid_highlight_pane_cp05

0x97e4,	// (0x00016151) cams_zoom_pane

0x97e4,	// (0x00016151) image_vga_pane

0x9edb,	// (0x00016848) main_camera_pane_g1

0x9edb,	// (0x00016848) main_camera_pane_g2

0x9edb,	// (0x00016848) main_camera_pane_g3

0x9edb,	// (0x00016848) main_camera_pane_g4

0x9edb,	// (0x00016848) main_camera_pane_g5

0x9edb,	// (0x00016848) main_camera_pane_g6

0x9edb,	// (0x00016848) main_camera_pane_g7

0x0007,

0xf1c5,	// (0x0001bb32) main_camera_pane_g

0xa1c6,	// (0x00016b33) main_camera_pane_t1

0xa1c6,	// (0x00016b33) main_camera_pane_t2

0x0001,

0xf1d6,	// (0x0001bb43) main_camera_pane_t

0x2258,	// (0x0000ebc5) cams_zoom_pane_cp_ParamLimits

0x2258,	// (0x0000ebc5) cams_zoom_pane_cp

0x228c,	// (0x0000ebf9) image_cif_pane_ParamLimits

0x228c,	// (0x0000ebf9) image_cif_pane

0x9775,	// (0x000160e2) image_subqcif_pane

0x229e,	// (0x0000ec0b) main_video_pane_g1_ParamLimits

0x229e,	// (0x0000ec0b) main_video_pane_g1

0x22cc,	// (0x0000ec39) main_video_pane_g2_ParamLimits

0x22cc,	// (0x0000ec39) main_video_pane_g2

0x2306,	// (0x0000ec73) main_video_pane_g3_ParamLimits

0x2306,	// (0x0000ec73) main_video_pane_g3

0x2306,	// (0x0000ec73) main_video_pane_g4_ParamLimits

0x2306,	// (0x0000ec73) main_video_pane_g4

0x233a,	// (0x0000eca7) main_video_pane_g5_ParamLimits

0x233a,	// (0x0000eca7) main_video_pane_g5

0xa1da,	// (0x00016b47) main_video_pane_g6_ParamLimits

0xa1da,	// (0x00016b47) main_video_pane_g6

0x0006,

0xf1db,	// (0x0001bb48) main_video_pane_g_ParamLimits

0xf1db,	// (0x0001bb48) main_video_pane_g

0x2356,	// (0x0000ecc3) main_video_pane_t1_ParamLimits

0x2356,	// (0x0000ecc3) main_video_pane_t1

0xa1f4,	// (0x00016b61) cams_zoom_pane_g1

0xa1f4,	// (0x00016b61) cams_zoom_pane_g2

0xa1f4,	// (0x00016b61) cams_zoom_pane_g3

0xa1f4,	// (0x00016b61) cams_zoom_pane_g4

0x0003,

0xf1ea,	// (0x0001bb57) cams_zoom_pane_g

0x23ae,	// (0x0000ed1b) grid_cams_pane

0x23c8,	// (0x0000ed35) linegrid_cams_pane

0x23dc,	// (0x0000ed49) cell_cams_pane_ParamLimits

0x23dc,	// (0x0000ed49) cell_cams_pane

0xa1fe,	// (0x00016b6b) cams_burst_image_pane

0xa206,	// (0x00016b73) cell_cams_pane_g1

0x9c05,	// (0x00016572) grid_highlight_pane_cp03

0x9e78,	// (0x000167e5) mp_bg_pane_g1

0x9775,	// (0x000160e2) bg_list_pane_cp03

0x9775,	// (0x000160e2) bg_mp_pane

0x9775,	// (0x000160e2) grid_mp_pane

0xa1f4,	// (0x00016b61) media_player_g1

0xa75d,	// (0x000170ca) media_player_t1

0xa75d,	// (0x000170ca) media_player_t2

0xa75d,	// (0x000170ca) media_player_t3

0xa75d,	// (0x000170ca) media_player_t4

0xa75d,	// (0x000170ca) media_player_t5

0xa75d,	// (0x000170ca) media_player_t6

0xa75d,	// (0x000170ca) media_player_t7

0x0006,

0xf55f,	// (0x0001becc) media_player_t

0x9775,	// (0x000160e2) wait_bar_pane_cp02

0xf544,	// (0x0001beb1) main_usb_pane_t

0xaa3c,	// (0x000173a9) cell_mp_pane

0x9e78,	// (0x000167e5) cell_mp_pane_g1

0x9c05,	// (0x00016572) grid_highlight_pane_cp06

0xa20e,	// (0x00016b7b) grid_skin_colour_pane

0xa216,	// (0x00016b83) list_highlight_pane_cp03

0x23fc,	// (0x0000ed69) skin_g1

0xa21e,	// (0x00016b8b) skin_t1

0xa22d,	// (0x00016b9a) skin_t2

0x0001,

0xf218,	// (0x0001bb85) skin_t

0x2404,	// (0x0000ed71) cell_skin_colour_pane_ParamLimits

0x2404,	// (0x0000ed71) cell_skin_colour_pane

0xa23b,	// (0x00016ba8) cell_skin_colour_pane_g1

0x247d,	// (0x0000edea) call_video_g1_ParamLimits

0x247d,	// (0x0000edea) call_video_g1

0x2499,	// (0x0000ee06) call_video_g2_ParamLimits

0x2499,	// (0x0000ee06) call_video_g2

0x0001,

0xf21d,	// (0x0001bb8a) call_video_g_ParamLimits

0xf21d,	// (0x0001bb8a) call_video_g

0x24eb,	// (0x0000ee58) call_video_uplink_pane_cp1_ParamLimits

0x24eb,	// (0x0000ee58) call_video_uplink_pane_cp1

0xa24d,	// (0x00016bba) call_video_uplink_pane_cp2

0x258a,	// (0x0000eef7) video_down_crop_pane_ParamLimits

0x258a,	// (0x0000eef7) video_down_crop_pane

0x2681,	// (0x0000efee) video_down_pane_ParamLimits

0x2681,	// (0x0000efee) video_down_pane

0xa255,	// (0x00016bc2) video_down_subqcif_pane_ParamLimits

0xa255,	// (0x00016bc2) video_down_subqcif_pane

0xa26d,	// (0x00016bda) video_down_subqcif_pane_cp_ParamLimits

0xa26d,	// (0x00016bda) video_down_subqcif_pane_cp

0xa293,	// (0x00016c00) im_reading_pane_ParamLimits

0xa293,	// (0x00016c00) im_reading_pane

0x2791,	// (0x0000f0fe) im_writing_pane_ParamLimits

0x2791,	// (0x0000f0fe) im_writing_pane

0x27a7,	// (0x0000f114) im_reading_pane_t1

0xa2ad,	// (0x00016c1a) list_im_pane

0xa2be,	// (0x00016c2b) scroll_pane_cp07

0x27e0,	// (0x0000f14d) im_writing_pane_t1_ParamLimits

0x27e0,	// (0x0000f14d) im_writing_pane_t1

0xa2d7,	// (0x00016c44) im_writing_pane_t2_ParamLimits

0xa2d7,	// (0x00016c44) im_writing_pane_t2

0x0001,

0xf227,	// (0x0001bb94) im_writing_pane_t_ParamLimits

0xf227,	// (0x0001bb94) im_writing_pane_t

0x9c05,	// (0x00016572) input_focus_pane_cp04

0x9c05,	// (0x00016572) input_focus_pane_cp05

0x27f5,	// (0x0000f162) list_im_single_pane_ParamLimits

0x27f5,	// (0x0000f162) list_im_single_pane

0x2809,	// (0x0000f176) list_single_im_pane_t1

0xa1b4,	// (0x00016b21) blid_accuracy_pane

0xa1b4,	// (0x00016b21) blid_compass_pane

0xc093,	// (0x00018a00) main_location_t1

0xc093,	// (0x00018a00) main_location_t2

0xc093,	// (0x00018a00) main_location_t3

0x0002,

0xf56e,	// (0x0001bedb) main_location_t

0x9c05,	// (0x00016572) aid_levels_location

0x9e78,	// (0x000167e5) blid_accuracy_pane_g1

0x9e78,	// (0x000167e5) blid_accuracy_pane_g2

0x0001,

0xf276,	// (0x0001bbe3) blid_accuracy_pane_g

0xa31f,	// (0x00016c8c) wml_content_pane

0xa35d,	// (0x00016cca) wml_button_pane_ParamLimits

0xa35d,	// (0x00016cca) wml_button_pane

0x2818,	// (0x0000f185) wml_list_single_large_pane_ParamLimits

0x2818,	// (0x0000f185) wml_list_single_large_pane

0x282d,	// (0x0000f19a) wml_list_single_medium_pane_ParamLimits

0x282d,	// (0x0000f19a) wml_list_single_medium_pane

0x2843,	// (0x0000f1b0) wml_list_single_small_pane_ParamLimits

0x2843,	// (0x0000f1b0) wml_list_single_small_pane

0xa371,	// (0x00016cde) wml_selection_box_pane_ParamLimits

0xa371,	// (0x00016cde) wml_selection_box_pane

0xa384,	// (0x00016cf1) wml_list_single_pane_t1

0xa393,	// (0x00016d00) wml_list_single_medium_pane_t1

0xa3a2,	// (0x00016d0f) wml_list_single_large_pane_t1

0xa3b1,	// (0x00016d1e) input_focus_pane_cp02_ParamLimits

0xa3b1,	// (0x00016d1e) input_focus_pane_cp02

0xa3c4,	// (0x00016d31) wml_selection_box_pane_g1

0xa3cd,	// (0x00016d3a) wml_selection_box_pane_t1_ParamLimits

0xa3cd,	// (0x00016d3a) wml_selection_box_pane_t1

0x9e60,	// (0x000167cd) bg_wml_button_pane_ParamLimits

0x9e60,	// (0x000167cd) bg_wml_button_pane

0xa3e5,	// (0x00016d52) wml_button_pane_g1

0xa3ed,	// (0x00016d5a) wml_button_pane_t1

0xa3e5,	// (0x00016d52) wml_button_bg_pane_g1

0xa3fd,	// (0x00016d6a) wml_button_bg_pane_g2

0xa405,	// (0x00016d72) wml_button_bg_pane_g3

0xa40d,	// (0x00016d7a) wml_button_bg_pane_g4

0xa415,	// (0x00016d82) wml_button_bg_pane_g5

0xa41d,	// (0x00016d8a) wml_button_bg_pane_g6

0xa425,	// (0x00016d92) wml_button_bg_pane_g7

0xa42d,	// (0x00016d9a) wml_button_bg_pane_g8

0xa435,	// (0x00016da2) wml_button_bg_pane_g9

0x0008,

0xf22c,	// (0x0001bb99) wml_button_bg_pane_g

0x285b,	// (0x0000f1c8) bg_list_pane_cp02

0xa43d,	// (0x00016daa) mce_header_pane_ParamLimits

0xa43d,	// (0x00016daa) mce_header_pane

0xa453,	// (0x00016dc0) mce_icon_pane

0xa453,	// (0x00016dc0) mce_image_pane

0xa45c,	// (0x00016dc9) mce_text_pane_ParamLimits

0xa45c,	// (0x00016dc9) mce_text_pane

0x2863,	// (0x0000f1d0) scroll_pane_cp03

0xa355,	// (0x00016cc2) scroll_pane_cp04

0xa46f,	// (0x00016ddc) scroll_pane_cp05_ParamLimits

0xa46f,	// (0x00016ddc) scroll_pane_cp05

0x286d,	// (0x0000f1da) mce_header_field_pane_ParamLimits

0x286d,	// (0x0000f1da) mce_header_field_pane

0x2884,	// (0x0000f1f1) mce_header_field_pane_2_ParamLimits

0x2884,	// (0x0000f1f1) mce_header_field_pane_2

0x289a,	// (0x0000f207) mce_header_field_pane_3

0x28a2,	// (0x0000f20f) list_single_mce_message_pane_ParamLimits

0x28a2,	// (0x0000f20f) list_single_mce_message_pane

0x28b7,	// (0x0000f224) list_single_mce_smart_pane_ParamLimits

0x28b7,	// (0x0000f224) list_single_mce_smart_pane

0xa47b,	// (0x00016de8) input_focus_pane_cp03

0xa484,	// (0x00016df1) list_header_data_pane

0x28d7,	// (0x0000f244) mce_header_field_pane_t1

0x28e7,	// (0x0000f254) list_single_mce_header_pane_ParamLimits

0x28e7,	// (0x0000f254) list_single_mce_header_pane

0xa48c,	// (0x00016df9) list_single_mce_header_pane_t1

0xa49b,	// (0x00016e08) list_single_mce_message_pane_g1

0xa4a3,	// (0x00016e10) list_single_mce_message_pane_t1

0x2921,	// (0x0000f28e) bg_cale_heading_pane_cp01_ParamLimits

0x2921,	// (0x0000f28e) bg_cale_heading_pane_cp01

0xa4b1,	// (0x00016e1e) bg_cale_pane_cp02_ParamLimits

0xa4b1,	// (0x00016e1e) bg_cale_pane_cp02

0x295b,	// (0x0000f2c8) cale_month_corner_pane

0x297a,	// (0x0000f2e7) cale_month_day_heading_pane_ParamLimits

0x297a,	// (0x0000f2e7) cale_month_day_heading_pane

0x29cc,	// (0x0000f339) cale_month_pane_g1_ParamLimits

0x29cc,	// (0x0000f339) cale_month_pane_g1

0x29fb,	// (0x0000f368) cale_month_pane_g2_ParamLimits

0x29fb,	// (0x0000f368) cale_month_pane_g2

0x2a2b,	// (0x0000f398) cale_month_pane_g3_ParamLimits

0x2a2b,	// (0x0000f398) cale_month_pane_g3

0x2a67,	// (0x0000f3d4) cale_month_pane_g4_ParamLimits

0x2a67,	// (0x0000f3d4) cale_month_pane_g4

0x2aa3,	// (0x0000f410) cale_month_pane_g5_ParamLimits

0x2aa3,	// (0x0000f410) cale_month_pane_g5

0x2aeb,	// (0x0000f458) cale_month_pane_g6_ParamLimits

0x2aeb,	// (0x0000f458) cale_month_pane_g6

0x2b37,	// (0x0000f4a4) cale_month_pane_g7_ParamLimits

0x2b37,	// (0x0000f4a4) cale_month_pane_g7

0x2b8b,	// (0x0000f4f8) cale_month_pane_g8_ParamLimits

0x2b8b,	// (0x0000f4f8) cale_month_pane_g8

0x2bdf,	// (0x0000f54c) cale_month_pane_g9_ParamLimits

0x2bdf,	// (0x0000f54c) cale_month_pane_g9

0x2c31,	// (0x0000f59e) cale_month_pane_g10_ParamLimits

0x2c31,	// (0x0000f59e) cale_month_pane_g10

0x2c83,	// (0x0000f5f0) cale_month_pane_g11_ParamLimits

0x2c83,	// (0x0000f5f0) cale_month_pane_g11

0x2cd5,	// (0x0000f642) cale_month_pane_g12_ParamLimits

0x2cd5,	// (0x0000f642) cale_month_pane_g12

0x2d27,	// (0x0000f694) cale_month_pane_g13_ParamLimits

0x2d27,	// (0x0000f694) cale_month_pane_g13

0x000c,

0xf23f,	// (0x0001bbac) cale_month_pane_g_ParamLimits

0xf23f,	// (0x0001bbac) cale_month_pane_g

0x2d79,	// (0x0000f6e6) cale_month_week_pane

0x2d9d,	// (0x0000f70a) grid_cale_month_pane_ParamLimits

0x2d9d,	// (0x0000f70a) grid_cale_month_pane

0x2de6,	// (0x0000f753) cale_month_day_heading_pane_t1

0x2e6c,	// (0x0000f7d9) cale_month_day_heading_pane_t2

0x2ee5,	// (0x0000f852) cale_month_day_heading_pane_t3

0x2f5e,	// (0x0000f8cb) cale_month_day_heading_pane_t4

0x2fdf,	// (0x0000f94c) cale_month_day_heading_pane_t5

0x3068,	// (0x0000f9d5) cale_month_day_heading_pane_t6

0x30f1,	// (0x0000fa5e) cale_month_day_heading_pane_t7

0x0006,

0xf25a,	// (0x0001bbc7) cale_month_day_heading_pane_t

0xa162,	// (0x00016acf) bg_cale_side_pane_cp01

0x3182,	// (0x0000faef) cale_month_week_pane_t1

0x319b,	// (0x0000fb08) cale_month_week_pane_t2

0x31b4,	// (0x0000fb21) cale_month_week_pane_t3

0x31cd,	// (0x0000fb3a) cale_month_week_pane_t4

0x31e6,	// (0x0000fb53) cale_month_week_pane_t5

0x31ff,	// (0x0000fb6c) cale_month_week_pane_t6

0x0005,

0xf269,	// (0x0001bbd6) cale_month_week_pane_t

0x3218,	// (0x0000fb85) cell_cale_month_pane_ParamLimits

0x3218,	// (0x0000fb85) cell_cale_month_pane

0xa4f0,	// (0x00016e5d) cell_cale_month_pane_g1

0x3346,	// (0x0000fcb3) cell_cale_month_pane_t1_ParamLimits

0x3346,	// (0x0000fcb3) cell_cale_month_pane_t1

0xa170,	// (0x00016add) grid_highlight_pane_cp08

0x9e78,	// (0x000167e5) main_smil_g1

0x3372,	// (0x0000fcdf) smil_status_pane

0xa4fc,	// (0x00016e69) smil_text_pane

0xbfab,	// (0x00018918) bg_popup_call3_rect_pane_g8

0xbfb3,	// (0x00018920) bg_popup_call3_rect_pane_g9

0x0008,

0xf502,	// (0x0001be6f) bg_popup_call3_rect_pane_g

0xc1b0,	// (0x00018b1d) smil_status_volume_pane_g1

0xa506,	// (0x00016e73) smil_status_pane_t1

0xc1e3,	// (0x00018b50) volume_smil_pane

0xa51d,	// (0x00016e8a) list_smil_text_pane

0x3385,	// (0x0000fcf2) scroll_pane_cp011

0x3390,	// (0x0000fcfd) smil_text_list_pane_t1_ParamLimits

0x3390,	// (0x0000fcfd) smil_text_list_pane_t1

0xa527,	// (0x00016e94) aid_volume_smil_ParamLimits

0xa527,	// (0x00016e94) aid_volume_smil

0x9e78,	// (0x000167e5) smil_volume_pane_g1

0x9e78,	// (0x000167e5) smil_volume_pane_g2

0x0001,

0xf276,	// (0x0001bbe3) smil_volume_pane_g

0x1c8c,	// (0x0000e5f9) listscroll_cale_day_pane

0xa549,	// (0x00016eb6) bg_cale_pane

0xa561,	// (0x00016ece) list_cale_pane

0xa584,	// (0x00016ef1) scroll_pane_cp09

0xa595,	// (0x00016f02) cale_bg_pane_g1

0xa59d,	// (0x00016f0a) cale_bg_pane_g2

0xa5a5,	// (0x00016f12) cale_bg_pane_g3

0xa5ad,	// (0x00016f1a) cale_bg_pane_g4

0xa5b5,	// (0x00016f22) cale_bg_pane_g5

0xa5bd,	// (0x00016f2a) cale_bg_pane_g6

0xa5c5,	// (0x00016f32) cale_bg_pane_g7

0xa5cd,	// (0x00016f3a) cale_bg_pane_g8

0xa5d5,	// (0x00016f42) cale_bg_pane_g9

0x0008,

0xf27b,	// (0x0001bbe8) cale_bg_pane_g

0x33cc,	// (0x0000fd39) list_cale_time_pane_ParamLimits

0x33cc,	// (0x0000fd39) list_cale_time_pane

0xa5e5,	// (0x00016f52) list_cale_time_pane_g1_ParamLimits

0xa5e5,	// (0x00016f52) list_cale_time_pane_g1

0xa5f1,	// (0x00016f5e) list_cale_time_pane_g2_ParamLimits

0xa5f1,	// (0x00016f5e) list_cale_time_pane_g2

0x33e1,	// (0x0000fd4e) list_cale_time_pane_g3_ParamLimits

0x33e1,	// (0x0000fd4e) list_cale_time_pane_g3

0x33ef,	// (0x0000fd5c) list_cale_time_pane_g4_ParamLimits

0x33ef,	// (0x0000fd5c) list_cale_time_pane_g4

0x33fd,	// (0x0000fd6a) list_cale_time_pane_g5_ParamLimits

0x33fd,	// (0x0000fd6a) list_cale_time_pane_g5

0x0005,

0xf28e,	// (0x0001bbfb) list_cale_time_pane_g_ParamLimits

0xf28e,	// (0x0001bbfb) list_cale_time_pane_g

0xa60b,	// (0x00016f78) list_cale_time_pane_t1_ParamLimits

0xa60b,	// (0x00016f78) list_cale_time_pane_t1

0xa633,	// (0x00016fa0) list_cale_time_pane_t2_ParamLimits

0xa633,	// (0x00016fa0) list_cale_time_pane_t2

0x365f,	// (0x0000ffcc) aid_blid_cardinal_pane

0x369d,	// (0x0001000a) compass_pane_t4

0xa65b,	// (0x00016fc8) list_cale_time_pane_t4_ParamLimits

0xa65b,	// (0x00016fc8) list_cale_time_pane_t4

0x36ab,	// (0x00010018) compass_pane_t5

0x36b9,	// (0x00010026) compass_pane_t6

0x36c7,	// (0x00010034) compass_pane_t7

0xab81,	// (0x000174ee) navi_pane_cc_t1

0xad70,	// (0x000176dd) aid_phob_thumbnail_center_pane

0x3a90,	// (0x000103fd) main_postcard_pane_g4_ParamLimits

0x0002,

0xf29b,	// (0x0001bc08) list_cale_time_pane_t_ParamLimits

0xf29b,	// (0x0001bc08) list_cale_time_pane_t

0x985c,	// (0x000161c9) bg_popup_window_pane_cp02_ParamLimits

0x985c,	// (0x000161c9) bg_popup_window_pane_cp02

0xa683,	// (0x00016ff0) heading_pane_cp01_ParamLimits

0xa683,	// (0x00016ff0) heading_pane_cp01

0xa68f,	// (0x00016ffc) loc_req_pane_ParamLimits

0xa68f,	// (0x00016ffc) loc_req_pane

0xa69f,	// (0x0001700c) loc_type_pane_ParamLimits

0xa69f,	// (0x0001700c) loc_type_pane

0xa6b1,	// (0x0001701e) loc_type_pane_t1_ParamLimits

0xa6b1,	// (0x0001701e) loc_type_pane_t1

0xa6c3,	// (0x00017030) loc_type_pane_t2_ParamLimits

0xa6c3,	// (0x00017030) loc_type_pane_t2

0xa6d5,	// (0x00017042) loc_type_pane_t3_ParamLimits

0xa6d5,	// (0x00017042) loc_type_pane_t3

0x0002,

0xf2a2,	// (0x0001bc0f) loc_type_pane_t_ParamLimits

0xf2a2,	// (0x0001bc0f) loc_type_pane_t

0xa6e7,	// (0x00017054) list_loc_req_pane

0xa6f1,	// (0x0001705e) scroll_pane_cp012

0x340b,	// (0x0000fd78) list_single_loc_request_popup_menu_pane_ParamLimits

0x340b,	// (0x0000fd78) list_single_loc_request_popup_menu_pane

0xa6fc,	// (0x00017069) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xa6fc,	// (0x00017069) list_single_loc_request_popup_menu_pane_g1

0xa708,	// (0x00017075) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xa708,	// (0x00017075) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf2a9,	// (0x0001bc16) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf2a9,	// (0x0001bc16) list_single_loc_request_popup_menu_pane_g

0xa714,	// (0x00017081) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xa714,	// (0x00017081) list_single_loc_request_popup_menu_pane_t1

0x9e60,	// (0x000167cd) bg_popup_window_pane_cp03_ParamLimits

0x9e60,	// (0x000167cd) bg_popup_window_pane_cp03

0xa72a,	// (0x00017097) heading_loc_req_pane_ParamLimits

0xa72a,	// (0x00017097) heading_loc_req_pane

0x3418,	// (0x0000fd85) popup_dyc_status_message_window_g1_ParamLimits

0x3418,	// (0x0000fd85) popup_dyc_status_message_window_g1

0x342c,	// (0x0000fd99) popup_dyc_status_message_window_t1_ParamLimits

0x342c,	// (0x0000fd99) popup_dyc_status_message_window_t1

0x3441,	// (0x0000fdae) popup_dyc_status_message_window_t2_ParamLimits

0x3441,	// (0x0000fdae) popup_dyc_status_message_window_t2

0x3456,	// (0x0000fdc3) popup_dyc_status_message_window_t3_ParamLimits

0x3456,	// (0x0000fdc3) popup_dyc_status_message_window_t3

0x0002,

0xf2ae,	// (0x0001bc1b) popup_dyc_status_message_window_t_ParamLimits

0xf2ae,	// (0x0001bc1b) popup_dyc_status_message_window_t

0x9c05,	// (0x00016572) bg_heading_pane_cp01

0xa736,	// (0x000170a3) heading_loc_req_pane_g1

0xa73e,	// (0x000170ab) heading_loc_req_pane_g2

0xa746,	// (0x000170b3) heading_loc_req_pane_g3

0x0002,

0xf2b5,	// (0x0001bc22) heading_loc_req_pane_g

0xa74e,	// (0x000170bb) heading_loc_req_pane_t1

0xa76d,	// (0x000170da) bg_popup_sub_pane_cp01_ParamLimits

0xa76d,	// (0x000170da) bg_popup_sub_pane_cp01

0xa77b,	// (0x000170e8) popup_cale_events_window_g1_ParamLimits

0xa77b,	// (0x000170e8) popup_cale_events_window_g1

0xa79b,	// (0x00017108) popup_cale_events_window_g2_ParamLimits

0xa79b,	// (0x00017108) popup_cale_events_window_g2

0x0001,

0xf2d7,	// (0x0001bc44) popup_cale_events_window_g_ParamLimits

0xf2d7,	// (0x0001bc44) popup_cale_events_window_g

0xa7bb,	// (0x00017128) popup_cale_events_window_t1_ParamLimits

0xa7bb,	// (0x00017128) popup_cale_events_window_t1

0xa7cd,	// (0x0001713a) popup_cale_events_window_t2_ParamLimits

0xa7cd,	// (0x0001713a) popup_cale_events_window_t2

0xa80b,	// (0x00017178) popup_cale_events_window_t3_ParamLimits

0xa80b,	// (0x00017178) popup_cale_events_window_t3

0xa845,	// (0x000171b2) popup_cale_events_window_t4_ParamLimits

0xa845,	// (0x000171b2) popup_cale_events_window_t4

0x0003,

0xf2dc,	// (0x0001bc49) popup_cale_events_window_t_ParamLimits

0xf2dc,	// (0x0001bc49) popup_cale_events_window_t

0x347e,	// (0x0000fdeb) call_type_pane

0x348e,	// (0x0000fdfb) popup_call_status_window_g1

0x34a2,	// (0x0000fe0f) popup_call_status_window_g2

0x34b6,	// (0x0000fe23) popup_call_status_window_g3

0x0002,

0xf2e5,	// (0x0001bc52) popup_call_status_window_g

0xa87b,	// (0x000171e8) call_type_pane_g1

0xa884,	// (0x000171f1) call_type_pane_g2

0x0001,

0xf2ec,	// (0x0001bc59) call_type_pane_g

0x9c05,	// (0x00016572) bg_popup_sub_pane_cp02

0xa88d,	// (0x000171fa) listscroll_popup_wml_pane

0xa895,	// (0x00017202) list_wml_pane

0xa89f,	// (0x0001720c) scroll_pane_cp013

0xa8aa,	// (0x00017217) list_single_graphic_popup_wml_pane_ParamLimits

0xa8aa,	// (0x00017217) list_single_graphic_popup_wml_pane

0x9e78,	// (0x000167e5) list_single_graphic_popup_wml_pane_g1

0xa8be,	// (0x0001722b) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf2f1,	// (0x0001bc5e) list_single_graphic_popup_wml_pane_g

0xa8c6,	// (0x00017233) list_single_graphic_popup_wml_pane_t1

0xa8dc,	// (0x00017249) aid_call_pane

0x9e58,	// (0x000167c5) popup_clock_analogue_window_g1

0x9e58,	// (0x000167c5) popup_clock_analogue_window_g2

0xa8e4,	// (0x00017251) popup_clock_analogue_window_g3

0xa8e4,	// (0x00017251) popup_clock_analogue_window_g4

0x9e78,	// (0x000167e5) popup_clock_analogue_window_g5

0x0004,

0xf2f6,	// (0x0001bc63) popup_clock_analogue_window_g

0xa8ec,	// (0x00017259) popup_clock_analogue_window_t1

0xa8fa,	// (0x00017267) clock_digital_number_pane_ParamLimits

0xa8fa,	// (0x00017267) clock_digital_number_pane

0xa906,	// (0x00017273) clock_digital_number_pane_cp02_ParamLimits

0xa906,	// (0x00017273) clock_digital_number_pane_cp02

0xa912,	// (0x0001727f) clock_digital_number_pane_cp03_ParamLimits

0xa912,	// (0x0001727f) clock_digital_number_pane_cp03

0xa91e,	// (0x0001728b) clock_digital_number_pane_cp04_ParamLimits

0xa91e,	// (0x0001728b) clock_digital_number_pane_cp04

0xa92e,	// (0x0001729b) clock_digital_separator_pane_ParamLimits

0xa92e,	// (0x0001729b) clock_digital_separator_pane

0xa93a,	// (0x000172a7) popup_clock_digital_window_t1

0x9e78,	// (0x000167e5) clock_digital_number_pane_g1

0x9e78,	// (0x000167e5) clock_digital_number_pane_g2

0x0001,

0xf276,	// (0x0001bbe3) clock_digital_number_pane_g

0x9e78,	// (0x000167e5) clock_digital_separator_pane_g1

0x9e78,	// (0x000167e5) clock_digital_separator_pane_g2

0x0001,

0xf276,	// (0x0001bbe3) clock_digital_separator_pane_g

0x9c05,	// (0x00016572) bg_popup_window_pane_cp04

0xa957,	// (0x000172c4) heading_pane_cp03

0xa1b4,	// (0x00016b21) listscroll_popup_gms_pane

0x9c05,	// (0x00016572) grid_large_graphic_popup_pane

0xa960,	// (0x000172cd) listscroll_popup_gms_pane_g1

0xa969,	// (0x000172d6) listscroll_popup_gms_pane_g2

0x0001,

0xf301,	// (0x0001bc6e) listscroll_popup_gms_pane_g

0xa972,	// (0x000172df) scroll_pane_cp014

0x9ecd,	// (0x0001683a) cell_large_graphic_popup_pane_ParamLimits

0x9ecd,	// (0x0001683a) cell_large_graphic_popup_pane

0x9edb,	// (0x00016848) cell_large_graphic_popup_pane_g1_ParamLimits

0x9edb,	// (0x00016848) cell_large_graphic_popup_pane_g1

0xa97b,	// (0x000172e8) cell_large_graphic_popup_pane_g2_ParamLimits

0xa97b,	// (0x000172e8) cell_large_graphic_popup_pane_g2

0xa989,	// (0x000172f6) cell_large_graphic_popup_pane_g3_ParamLimits

0xa989,	// (0x000172f6) cell_large_graphic_popup_pane_g3

0xa997,	// (0x00017304) cell_large_graphic_popup_pane_g4_ParamLimits

0xa997,	// (0x00017304) cell_large_graphic_popup_pane_g4

0x0003,

0xf306,	// (0x0001bc73) cell_large_graphic_popup_pane_g_ParamLimits

0xf306,	// (0x0001bc73) cell_large_graphic_popup_pane_g

0x9c05,	// (0x00016572) grid_highlight_pane_cp010

0x9e78,	// (0x000167e5) bg_popup_call_pane_g1

0xa9a8,	// (0x00017315) list_single_graphic_popup_conf_pane_ParamLimits

0xa9a8,	// (0x00017315) list_single_graphic_popup_conf_pane

0xa9bb,	// (0x00017328) list_highlight_pane_cp01

0xa9c4,	// (0x00017331) list_single_graphic_popup_conf_pane_g1

0xa9cc,	// (0x00017339) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf30f,	// (0x0001bc7c) list_single_graphic_popup_conf_pane_g

0xa9d4,	// (0x00017341) list_single_graphic_popup_conf_pane_t1

0xa9e2,	// (0x0001734f) linegrid_cams_pane_g1

0x34c5,	// (0x0000fe32) linegrid_cams_pane_g2

0xa0f3,	// (0x00016a60) linegrid_cams_pane_g3

0xa9eb,	// (0x00017358) linegrid_cams_pane_g4

0x34ce,	// (0x0000fe3b) linegrid_cams_pane_g5

0x34d7,	// (0x0000fe44) linegrid_cams_pane_g6

0xa1a3,	// (0x00016b10) linegrid_cams_pane_g7

0x0006,

0xf314,	// (0x0001bc81) linegrid_cams_pane_g

0xa9f4,	// (0x00017361) popup_clock_analogue_window

0xa9f4,	// (0x00017361) popup_clock_digital_window

0x9c05,	// (0x00016572) popup_phob_thumbnail_window

0x9e78,	// (0x000167e5) call_video_uplink_pane_g1

0xa9fd,	// (0x0001736a) call_video_uplink_pane_g2

0x0001,

0xf323,	// (0x0001bc90) call_video_uplink_pane_g

0xaa05,	// (0x00017372) video_uplink_pane

0xaa0d,	// (0x0001737a) mce_image_pane_g1

0x34e2,	// (0x0000fe4f) mce_image_pane_g2

0x34ec,	// (0x0000fe59) mce_image_pane_g3

0x34f4,	// (0x0000fe61) mce_image_pane_g4

0x34fc,	// (0x0000fe69) mce_image_pane_g5

0x0004,

0xf328,	// (0x0001bc95) mce_image_pane_g

0xaa17,	// (0x00017384) control_top_pane_stacon_cp01_ParamLimits

0xaa17,	// (0x00017384) control_top_pane_stacon_cp01

0xaa2b,	// (0x00017398) uni_indicator_pane_stacon_cp01_ParamLimits

0xaa2b,	// (0x00017398) uni_indicator_pane_stacon_cp01

0xaa3c,	// (0x000173a9) bg_popup_sub_pane_cp03

0xaa46,	// (0x000173b3) chi_dic_find_pane

0x3504,	// (0x0000fe71) listscroll_chi_dic_pane

0xaa4e,	// (0x000173bb) main_pane_chidic_g1

0xaa56,	// (0x000173c3) chi_dic_find_pane_t1

0xaa64,	// (0x000173d1) find_chidic_pane

0xaa6d,	// (0x000173da) chi_dic_list_pane_ParamLimits

0xaa6d,	// (0x000173da) chi_dic_list_pane

0xaa7e,	// (0x000173eb) scroll_pane_cp020

0xaa86,	// (0x000173f3) find_chidic_pane_t1

0x9c05,	// (0x00016572) input_focus_pane_cp06

0x3518,	// (0x0000fe85) list_chi_dic_pane_ParamLimits

0x3518,	// (0x0000fe85) list_chi_dic_pane

0x352a,	// (0x0000fe97) list_chi_dic_pane_t1_ParamLimits

0x352a,	// (0x0000fe97) list_chi_dic_pane_t1

0x9c05,	// (0x00016572) list_highlight_pane_cp020

0xaa95,	// (0x00017402) bg_cale_heading_pane_g1

0x353d,	// (0x0000feaa) bg_cale_heading_pane_g2

0x3545,	// (0x0000feb2) bg_cale_heading_pane_g3

0x354d,	// (0x0000feba) bg_cale_heading_pane_g4

0x3557,	// (0x0000fec4) bg_cale_heading_pane_g5

0x3561,	// (0x0000fece) bg_cale_heading_pane_g6

0x3569,	// (0x0000fed6) bg_cale_heading_pane_g7

0x3571,	// (0x0000fede) bg_cale_heading_pane_g8

0x357b,	// (0x0000fee8) bg_cale_heading_pane_g9

0x0008,

0xf333,	// (0x0001bca0) bg_cale_heading_pane_g

0xaa95,	// (0x00017402) bg_cale_side_pane_g1

0x3585,	// (0x0000fef2) bg_cale_side_pane_g2

0x358d,	// (0x0000fefa) bg_cale_side_pane_g3

0x3595,	// (0x0000ff02) bg_cale_side_pane_g4

0x359d,	// (0x0000ff0a) bg_cale_side_pane_g5

0x35a5,	// (0x0000ff12) bg_cale_side_pane_g6

0x35ad,	// (0x0000ff1a) bg_cale_side_pane_g7

0x35b5,	// (0x0000ff22) bg_cale_side_pane_g8

0x35bd,	// (0x0000ff2a) bg_cale_side_pane_g9

0x0008,

0xf346,	// (0x0001bcb3) bg_cale_side_pane_g

0x35c5,	// (0x0000ff32) popup_call_status_window_ParamLimits

0x35c5,	// (0x0000ff32) popup_call_status_window

0xaa9d,	// (0x0001740a) stacon_top_pane

0xaaa5,	// (0x00017412) status_pane_ParamLimits

0xaaa5,	// (0x00017412) status_pane

0xaaba,	// (0x00017427) status_small_pane

0xaac2,	// (0x0001742f) control_pane

0x9c05,	// (0x00016572) stacon_bottom_pane

0xaaca,	// (0x00017437) list_single_mce_smart_pane_t1_ParamLimits

0xaaca,	// (0x00017437) list_single_mce_smart_pane_t1

0xaadd,	// (0x0001744a) list_single_mce_smart_pane_t2_ParamLimits

0xaadd,	// (0x0001744a) list_single_mce_smart_pane_t2

0x0001,

0xf359,	// (0x0001bcc6) list_single_mce_smart_pane_t_ParamLimits

0xf359,	// (0x0001bcc6) list_single_mce_smart_pane_t

0x360e,	// (0x0000ff7b) compass_pane

0x3617,	// (0x0000ff84) main_location2_pane_t1

0x3629,	// (0x0000ff96) main_location2_pane_t2

0x363b,	// (0x0000ffa8) main_location2_pane_t3

0x0003,

0xf35e,	// (0x0001bccb) main_location2_pane_t

0xaafc,	// (0x00017469) compass_pane_g1_ParamLimits

0xaafc,	// (0x00017469) compass_pane_g1

0x367f,	// (0x0000ffec) compass_pane_t1

0x368e,	// (0x0000fffb) compass_pane_t2

0x0005,

0xf367,	// (0x0001bcd4) compass_pane_t

0x36d5,	// (0x00010042) text_secondary_cp61

0xab78,	// (0x000174e5) navi_pane_cams_g5

0xabf4,	// (0x00017561) navi_pane_im_t1

0xac02,	// (0x0001756f) navi_pane_mp_g1_ParamLimits

0xac02,	// (0x0001756f) navi_pane_mp_g1

0xac16,	// (0x00017583) navi_pane_mp_g2_ParamLimits

0xac16,	// (0x00017583) navi_pane_mp_g2

0xac22,	// (0x0001758f) navi_pane_mp_g3_ParamLimits

0xac22,	// (0x0001758f) navi_pane_mp_g3

0x0002,

0xf37b,	// (0x0001bce8) navi_pane_mp_g_ParamLimits

0xf37b,	// (0x0001bce8) navi_pane_mp_g

0xac2e,	// (0x0001759b) navi_pane_mp_t1

0xac3c,	// (0x000175a9) navi_pane_mp_t2

0x0002,

0xf382,	// (0x0001bcef) navi_pane_mp_t

0xaca7,	// (0x00017614) navi_pane_vt_g1

0xac2e,	// (0x0001759b) navi_pane_vt_t1

0xacaf,	// (0x0001761c) navi_slider_pane

0xa1b4,	// (0x00016b21) zooming_pane

0xacbf,	// (0x0001762c) navi_slider_pane_g1

0xacc8,	// (0x00017635) navi_slider_pane_g2

0x0006,

0xf389,	// (0x0001bcf6) navi_slider_pane_g

0xacf5,	// (0x00017662) aid_levels_zoom

0xacfd,	// (0x0001766a) zooming_pane_g1

0xad05,	// (0x00017672) zooming_pane_g2

0xad05,	// (0x00017672) zooming_pane_g3

0x0002,

0xf398,	// (0x0001bd05) zooming_pane_g

0xad0d,	// (0x0001767a) level_10_zoom

0xad16,	// (0x00017683) level_11_zoom

0xad1f,	// (0x0001768c) level_1_zoom

0xad28,	// (0x00017695) level_2_zoom

0xad31,	// (0x0001769e) level_3_zoom

0xad3a,	// (0x000176a7) level_4_zoom

0xad43,	// (0x000176b0) level_5_zoom

0xad4c,	// (0x000176b9) level_6_zoom

0xad55,	// (0x000176c2) level_7_zoom

0xad5e,	// (0x000176cb) level_8_zoom

0xad67,	// (0x000176d4) level_9_zoom

0xad78,	// (0x000176e5) popup_phob_thumbnail_window_g1

0xad80,	// (0x000176ed) popup_phob_thumbnail_window_g2

0x0001,

0xf39f,	// (0x0001bd0c) popup_phob_thumbnail_window_g

0x4136,	// (0x00010aa3) level_1_location

0x413e,	// (0x00010aab) level_2_location

0x4146,	// (0x00010ab3) level_3_location

0x414e,	// (0x00010abb) level_4_location

0xa1b4,	// (0x00016b21) level_5_location

0x3726,	// (0x00010093) mce_icon_pane_g1

0x3730,	// (0x0001009d) mce_icon_pane_g2

0x0001,

0xf3a4,	// (0x0001bd11) mce_icon_pane_g

0xad88,	// (0x000176f5) main_mup_pane_g1_ParamLimits

0xad88,	// (0x000176f5) main_mup_pane_g1

0xad88,	// (0x000176f5) main_mup_pane_g2_ParamLimits

0xad88,	// (0x000176f5) main_mup_pane_g2

0xad88,	// (0x000176f5) main_mup_pane_g3_ParamLimits

0xad88,	// (0x000176f5) main_mup_pane_g3

0xad88,	// (0x000176f5) main_mup_pane_g4_ParamLimits

0xad88,	// (0x000176f5) main_mup_pane_g4

0xad88,	// (0x000176f5) main_mup_pane_g5_ParamLimits

0xad88,	// (0x000176f5) main_mup_pane_g5

0xad88,	// (0x000176f5) main_mup_pane_g6_ParamLimits

0xad88,	// (0x000176f5) main_mup_pane_g6

0xad88,	// (0x000176f5) main_mup_pane_g7_ParamLimits

0xad88,	// (0x000176f5) main_mup_pane_g7

0xad88,	// (0x000176f5) main_mup_pane_g8_ParamLimits

0xad88,	// (0x000176f5) main_mup_pane_g8

0xad88,	// (0x000176f5) main_mup_pane_g9_ParamLimits

0xad88,	// (0x000176f5) main_mup_pane_g9

0xad88,	// (0x000176f5) main_mup_pane_g10_ParamLimits

0xad88,	// (0x000176f5) main_mup_pane_g10

0xad88,	// (0x000176f5) main_mup_pane_g11_ParamLimits

0xad88,	// (0x000176f5) main_mup_pane_g11

0x9edb,	// (0x00016848) main_mup_pane_g12_ParamLimits

0x9edb,	// (0x00016848) main_mup_pane_g12

0xad88,	// (0x000176f5) main_mup_pane_g13_ParamLimits

0xad88,	// (0x000176f5) main_mup_pane_g13

0x000c,

0xf3a9,	// (0x0001bd16) main_mup_pane_g_ParamLimits

0xf3a9,	// (0x0001bd16) main_mup_pane_g

0xad96,	// (0x00017703) main_mup_pane_t1_ParamLimits

0xad96,	// (0x00017703) main_mup_pane_t1

0xad96,	// (0x00017703) main_mup_pane_t2_ParamLimits

0xad96,	// (0x00017703) main_mup_pane_t2

0xad96,	// (0x00017703) main_mup_pane_t3_ParamLimits

0xad96,	// (0x00017703) main_mup_pane_t3

0xa1c6,	// (0x00016b33) main_mup_pane_t4_ParamLimits

0xa1c6,	// (0x00016b33) main_mup_pane_t4

0xa1c6,	// (0x00016b33) main_mup_pane_t5_ParamLimits

0xa1c6,	// (0x00016b33) main_mup_pane_t5

0xadaa,	// (0x00017717) main_mup_pane_t6_ParamLimits

0xadaa,	// (0x00017717) main_mup_pane_t6

0x0005,

0xf3c4,	// (0x0001bd31) main_mup_pane_t_ParamLimits

0xf3c4,	// (0x0001bd31) main_mup_pane_t

0x9ecd,	// (0x0001683a) mup_progress_pane_ParamLimits

0x9ecd,	// (0x0001683a) mup_progress_pane

0xadbe,	// (0x0001772b) mup_visualizer_pane_ParamLimits

0xadbe,	// (0x0001772b) mup_visualizer_pane

0xadbe,	// (0x0001772b) mup_volume_pane_ParamLimits

0xadbe,	// (0x0001772b) mup_volume_pane

0x9ee9,	// (0x00016856) mup_visualizer_pane_g1_ParamLimits

0x9ee9,	// (0x00016856) mup_visualizer_pane_g1

0xadcc,	// (0x00017739) mup_visualizer_pane_g2_ParamLimits

0xadcc,	// (0x00017739) mup_visualizer_pane_g2

0x9edb,	// (0x00016848) mup_visualizer_pane_g3_ParamLimits

0x9edb,	// (0x00016848) mup_visualizer_pane_g3

0x0002,

0xf3d1,	// (0x0001bd3e) mup_visualizer_pane_g_ParamLimits

0xf3d1,	// (0x0001bd3e) mup_visualizer_pane_g

0xa1f4,	// (0x00016b61) mup_volume_pane_g1

0xa1f4,	// (0x00016b61) mup_volume_pane_g2

0x0001,

0xf3d8,	// (0x0001bd45) mup_volume_pane_g

0xa1f4,	// (0x00016b61) mup_progress_pane_g1

0xa1f4,	// (0x00016b61) mup_progress_pane_g2

0xa1f4,	// (0x00016b61) mup_progress_pane_g3

0x0002,

0xf3dd,	// (0x0001bd4a) mup_progress_pane_g

0x9c05,	// (0x00016572) bg_popup_window_pane_cp05

0xadda,	// (0x00017747) heading_pane_cp02_ParamLimits

0xadda,	// (0x00017747) heading_pane_cp02

0xadf4,	// (0x00017761) list_popup_blid_pane

0xadfc,	// (0x00017769) list_blid_sat_info_pane_ParamLimits

0xadfc,	// (0x00017769) list_blid_sat_info_pane

0xae0f,	// (0x0001777c) list_blid_sat_info_pane_g1

0xae17,	// (0x00017784) list_blid_sat_info_pane_t1

0x3830,	// (0x0001019d) mup_equalizer_pane_ParamLimits

0x3830,	// (0x0001019d) mup_equalizer_pane

0x3849,	// (0x000101b6) mup_equalizer_pane_cp1_ParamLimits

0x3849,	// (0x000101b6) mup_equalizer_pane_cp1

0x3866,	// (0x000101d3) mup_equalizer_pane_cp2_ParamLimits

0x3866,	// (0x000101d3) mup_equalizer_pane_cp2

0x3883,	// (0x000101f0) mup_equalizer_pane_cp3_ParamLimits

0x3883,	// (0x000101f0) mup_equalizer_pane_cp3

0x38a4,	// (0x00010211) mup_equalizer_pane_cp4_ParamLimits

0x38a4,	// (0x00010211) mup_equalizer_pane_cp4

0x38c5,	// (0x00010232) mup_equalizer_pane_cp5

0x38d9,	// (0x00010246) mup_equalizer_pane_cp6

0x38ed,	// (0x0001025a) mup_equalizer_pane_cp7

0xc02b,	// (0x00018998) bg_popup_call_poc_act_pane_g9

0xc033,	// (0x000189a0) bg_popup_call_poc_act_pane_g10

0xc03b,	// (0x000189a8) bg_popup_call_poc_act_pane_g11

0x000a,

0x9e60,	// (0x000167cd) mup_scale_pane

0x9e78,	// (0x000167e5) mup_scale_pane_g1

0xae25,	// (0x00017792) mup_scale_pane_g2

0x0006,

0xf3f9,	// (0x0001bd66) mup_scale_pane_g

0xae49,	// (0x000177b6) msg_data_pane

0xae51,	// (0x000177be) scroll_pane_cp017

0x3913,	// (0x00010280) bg_list_pane_cp04_ParamLimits

0x3913,	// (0x00010280) bg_list_pane_cp04

0xae61,	// (0x000177ce) msg_data_pane_g1

0x392b,	// (0x00010298) msg_data_pane_g2

0x3935,	// (0x000102a2) msg_data_pane_g3

0x393d,	// (0x000102aa) msg_data_pane_g4

0x3945,	// (0x000102b2) msg_data_pane_g5

0x394d,	// (0x000102ba) msg_data_pane_g6

0x3955,	// (0x000102c2) msg_data_pane_g7

0x0006,

0xf408,	// (0x0001bd75) msg_data_pane_g

0x395d,	// (0x000102ca) msg_text_pane_ParamLimits

0x395d,	// (0x000102ca) msg_text_pane

0x3988,	// (0x000102f5) qrid_highlight_pane_cp011_ParamLimits

0x3988,	// (0x000102f5) qrid_highlight_pane_cp011

0x9c05,	// (0x00016572) msg_body_pane

0x9c05,	// (0x00016572) msg_header_pane

0xae72,	// (0x000177df) input_focus_pane_cp07

0xae87,	// (0x000177f4) msg_header_pane_t1_ParamLimits

0xae87,	// (0x000177f4) msg_header_pane_t1

0xae9d,	// (0x0001780a) msg_header_pane_t2_ParamLimits

0xae9d,	// (0x0001780a) msg_header_pane_t2

0x0001,

0xf41c,	// (0x0001bd89) msg_header_pane_t_ParamLimits

0xf41c,	// (0x0001bd89) msg_header_pane_t

0xaeb4,	// (0x00017821) msg_body_pane_g1

0xaebc,	// (0x00017829) msg_body_pane_t1_ParamLimits

0xaebc,	// (0x00017829) msg_body_pane_t1

0xaeed,	// (0x0001785a) msg_body_pane_t2_ParamLimits

0xaeed,	// (0x0001785a) msg_body_pane_t2

0xaeff,	// (0x0001786c) msg_body_pane_t3_ParamLimits

0xaeff,	// (0x0001786c) msg_body_pane_t3

0x0002,

0xf421,	// (0x0001bd8e) msg_body_pane_t_ParamLimits

0xf421,	// (0x0001bd8e) msg_body_pane_t

0x39e6,	// (0x00010353) main_viewer_pane_g1_ParamLimits

0x39e6,	// (0x00010353) main_viewer_pane_g1

0x39f4,	// (0x00010361) main_viewer_pane_g2_ParamLimits

0x39f4,	// (0x00010361) main_viewer_pane_g2

0x3a02,	// (0x0001036f) main_viewer_pane_g3_ParamLimits

0x3a02,	// (0x0001036f) main_viewer_pane_g3

0x3a11,	// (0x0001037e) main_viewer_pane_g4_ParamLimits

0x3a11,	// (0x0001037e) main_viewer_pane_g4

0xaf29,	// (0x00017896) main_viewer_pane_g5_ParamLimits

0xaf29,	// (0x00017896) main_viewer_pane_g5

0xaf29,	// (0x00017896) main_viewer_pane_g7_ParamLimits

0xaf29,	// (0x00017896) main_viewer_pane_g7

0xaf3b,	// (0x000178a8) main_viewer_pane_g8_ParamLimits

0xaf3b,	// (0x000178a8) main_viewer_pane_g8

0x0007,

0xf431,	// (0x0001bd9e) main_viewer_pane_g_ParamLimits

0xf431,	// (0x0001bd9e) main_viewer_pane_g

0xaf53,	// (0x000178c0) viewer_content_pane_ParamLimits

0xaf53,	// (0x000178c0) viewer_content_pane

0x3a4d,	// (0x000103ba) main_postcard_pane_g1_ParamLimits

0x3a4d,	// (0x000103ba) main_postcard_pane_g1

0x3a63,	// (0x000103d0) main_postcard_pane_g2_ParamLimits

0x3a63,	// (0x000103d0) main_postcard_pane_g2

0x3a79,	// (0x000103e6) main_postcard_pane_g3_ParamLimits

0x3a79,	// (0x000103e6) main_postcard_pane_g3

0x0005,

0xf442,	// (0x0001bdaf) main_postcard_pane_g_ParamLimits

0xf442,	// (0x0001bdaf) main_postcard_pane_g

0x3a90,	// (0x000103fd) main_postcard_pane_g4

0xc1c3,	// (0x00018b30) smil_status_volume_pane_g2

0x3ad3,	// (0x00010440) postcard_pane_ParamLimits

0x3ad3,	// (0x00010440) postcard_pane

0xaf61,	// (0x000178ce) postcard_pane_g1_ParamLimits

0xaf61,	// (0x000178ce) postcard_pane_g1

0x3b15,	// (0x00010482) postcard_pane_g2_ParamLimits

0x3b15,	// (0x00010482) postcard_pane_g2

0x3b21,	// (0x0001048e) postcard_pane_g3_ParamLimits

0x3b21,	// (0x0001048e) postcard_pane_g3

0xaf6f,	// (0x000178dc) postcard_pane_g4_ParamLimits

0xaf6f,	// (0x000178dc) postcard_pane_g4

0x3b2d,	// (0x0001049a) postcard_pane_g5_ParamLimits

0x3b2d,	// (0x0001049a) postcard_pane_g5

0x3b42,	// (0x000104af) postcard_pane_g6_ParamLimits

0x3b42,	// (0x000104af) postcard_pane_g6

0xaf61,	// (0x000178ce) postcard_pane_g7_ParamLimits

0xaf61,	// (0x000178ce) postcard_pane_g7

0x0006,

0xf44f,	// (0x0001bdbc) postcard_pane_g_ParamLimits

0xf44f,	// (0x0001bdbc) postcard_pane_g

0x3b56,	// (0x000104c3) main_mp2_pane_g1_ParamLimits

0x3b56,	// (0x000104c3) main_mp2_pane_g1

0x3b62,	// (0x000104cf) main_mp2_pane_g2_ParamLimits

0x3b62,	// (0x000104cf) main_mp2_pane_g2

0x3b6e,	// (0x000104db) main_mp2_pane_g3_ParamLimits

0x3b6e,	// (0x000104db) main_mp2_pane_g3

0x0002,

0xf45e,	// (0x0001bdcb) main_mp2_pane_g_ParamLimits

0xf45e,	// (0x0001bdcb) main_mp2_pane_g

0x3b7a,	// (0x000104e7) main_mp2_pane_t1_ParamLimits

0x3b7a,	// (0x000104e7) main_mp2_pane_t1

0x3b8f,	// (0x000104fc) main_mp2_pane_t2_ParamLimits

0x3b8f,	// (0x000104fc) main_mp2_pane_t2

0x3ba1,	// (0x0001050e) main_mp2_pane_t3_ParamLimits

0x3ba1,	// (0x0001050e) main_mp2_pane_t3

0x0002,

0xf465,	// (0x0001bdd2) main_mp2_pane_t_ParamLimits

0xf465,	// (0x0001bdd2) main_mp2_pane_t

0xaf7d,	// (0x000178ea) pec_content_pane_ParamLimits

0xaf7d,	// (0x000178ea) pec_content_pane

0xa355,	// (0x00016cc2) scroll_pane_cp015

0xaf8f,	// (0x000178fc) pec_attribute_pane_ParamLimits

0xaf8f,	// (0x000178fc) pec_attribute_pane

0x3bb3,	// (0x00010520) pec_content_pane_g1_ParamLimits

0x3bb3,	// (0x00010520) pec_content_pane_g1

0xaf9f,	// (0x0001790c) pec_content_pane_t1_ParamLimits

0xaf9f,	// (0x0001790c) pec_content_pane_t1

0xafb1,	// (0x0001791e) pec_content_pane_t2_ParamLimits

0xafb1,	// (0x0001791e) pec_content_pane_t2

0x0001,

0xf46c,	// (0x0001bdd9) pec_content_pane_t_ParamLimits

0xf46c,	// (0x0001bdd9) pec_content_pane_t

0x3bbf,	// (0x0001052c) list_single_graphic_pane_cp01_ParamLimits

0x3bbf,	// (0x0001052c) list_single_graphic_pane_cp01

0x9e60,	// (0x000167cd) bg_popup_sub_pane_cp04

0xafc3,	// (0x00017930) popup_mup_playback_window_g1

0xafcf,	// (0x0001793c) popup_mup_playback_window_t1

0xafe4,	// (0x00017951) popup_mup_playback_window_t2

0x0001,

0xf471,	// (0x0001bdde) popup_mup_playback_window_t

0xb01b,	// (0x00017988) main_image_pane_g1_ParamLimits

0xb01b,	// (0x00017988) main_image_pane_g1

0xb05e,	// (0x000179cb) scroll_pane_cp018_ParamLimits

0xb05e,	// (0x000179cb) scroll_pane_cp018

0xb076,	// (0x000179e3) scroll_pane_cp016_ParamLimits

0xb076,	// (0x000179e3) scroll_pane_cp016

0x3c8c,	// (0x000105f9) smil2_image_pane_ParamLimits

0x3c8c,	// (0x000105f9) smil2_image_pane

0x3cbc,	// (0x00010629) smil2_root_pane_ParamLimits

0x3cbc,	// (0x00010629) smil2_root_pane

0x3cf4,	// (0x00010661) smil2_text_pane_ParamLimits

0x3cf4,	// (0x00010661) smil2_text_pane

0x9c05,	// (0x00016572) bg_list_pane_cp06

0xb0b2,	// (0x00017a1f) grid_radio_pane

0x9c05,	// (0x00016572) bg_popup_window_pane_cp06

0xb0ba,	// (0x00017a27) main_fmradio_pane_t1

0xc043,	// (0x000189b0) heading_pane_cp04

0xb0c8,	// (0x00017a35) main_fmradio_pane_t2

0xc04b,	// (0x000189b8) popup_cale_lunar_info_window_g1

0xb0d6,	// (0x00017a43) main_fmradio_pane_t3

0xc053,	// (0x000189c0) popup_cale_lunar_info_window_g2

0xb0e4,	// (0x00017a51) main_fmradio_pane_t4

0x0001,

0xb0f2,	// (0x00017a5f) main_fmradio_pane_t5

0x0004,

0xf551,	// (0x0001bebe) popup_cale_lunar_info_window_g

0xf486,	// (0x0001bdf3) main_fmradio_pane_t

0xb100,	// (0x00017a6d) wait_bar_pane_cp03

0xb108,	// (0x00017a75) cell_fmradio_pane_ParamLimits

0xb108,	// (0x00017a75) cell_fmradio_pane

0xaf61,	// (0x000178ce) cell_fmradio_pane_g1_ParamLimits

0xaf61,	// (0x000178ce) cell_fmradio_pane_g1

0x9c05,	// (0x00016572) grid_highlight_pane_cp011

0xb11b,	// (0x00017a88) poc_content_pane_ParamLimits

0xb11b,	// (0x00017a88) poc_content_pane

0xb12d,	// (0x00017a9a) scroll_pane_cp019

0x3d74,	// (0x000106e1) popup_call_poc_act_window_ParamLimits

0x3d74,	// (0x000106e1) popup_call_poc_act_window

0x3d98,	// (0x00010705) popup_call_poc_inact_window_ParamLimits

0x3d98,	// (0x00010705) popup_call_poc_inact_window

0xf528,	// (0x0001be95) bg_popup_call_poc_act_pane_g

0xbfbb,	// (0x00018928) bg_popup_call_poc_inact_pane_g1

0xbfc3,	// (0x00018930) bg_popup_call_poc_inact_pane_g2

0xb135,	// (0x00017aa2) popup_call_poc_act_window_g2

0xbfcb,	// (0x00018938) bg_popup_call_poc_inact_pane_g3

0xbfd3,	// (0x00018940) bg_popup_call_poc_inact_pane_g4

0xbfdb,	// (0x00018948) bg_popup_call_poc_inact_pane_g5

0xb13d,	// (0x00017aaa) popup_call_poc_act_window_t1_ParamLimits

0xb13d,	// (0x00017aaa) popup_call_poc_act_window_t1

0xb165,	// (0x00017ad2) popup_call_poc_act_window_t2_ParamLimits

0xb165,	// (0x00017ad2) popup_call_poc_act_window_t2

0xb18d,	// (0x00017afa) popup_call_poc_act_window_t3_ParamLimits

0xb18d,	// (0x00017afa) popup_call_poc_act_window_t3

0xb1b5,	// (0x00017b22) popup_call_poc_act_window_t4_ParamLimits

0xb1b5,	// (0x00017b22) popup_call_poc_act_window_t4

0x0003,

0xf491,	// (0x0001bdfe) popup_call_poc_act_window_t_ParamLimits

0xf491,	// (0x0001bdfe) popup_call_poc_act_window_t

0xbfe3,	// (0x00018950) bg_popup_call_poc_inact_pane_g6

0xbfeb,	// (0x00018958) bg_popup_call_poc_inact_pane_g7

0xbff3,	// (0x00018960) bg_popup_call_poc_inact_pane_g8

0xb1c7,	// (0x00017b34) popup_call_poc_inact_window_g2

0xbffb,	// (0x00018968) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf515,	// (0x0001be82) bg_popup_call_poc_inact_pane_g

0xb1cf,	// (0x00017b3c) popup_call_poc_inact_window_t1_ParamLimits

0xb1cf,	// (0x00017b3c) popup_call_poc_inact_window_t1

0xb1e4,	// (0x00017b51) popup_call_poc_inact_window_t2_ParamLimits

0xb1e4,	// (0x00017b51) popup_call_poc_inact_window_t2

0xb1f9,	// (0x00017b66) popup_call_poc_inact_window_t3_ParamLimits

0xb1f9,	// (0x00017b66) popup_call_poc_inact_window_t3

0x0002,

0xf49a,	// (0x0001be07) popup_call_poc_inact_window_t_ParamLimits

0xf49a,	// (0x0001be07) popup_call_poc_inact_window_t

0xc13b,	// (0x00018aa8) context_pane_ParamLimits

0x4614,	// (0x00010f81) signal_pane_ParamLimits

0xa1b4,	// (0x00016b21) main_call2_pane

0xc114,	// (0x00018a81) popup_phob_thumbnail2_window_ParamLimits

0xc114,	// (0x00018a81) popup_phob_thumbnail2_window

0xaf11,	// (0x0001787e) aid_hotspot_pointer_arrow_pane

0xaf19,	// (0x00017886) aid_hotspot_pointer_hand_pane

0x4100,	// (0x00010a6d) phob_pre_status_pane_g5

0x97e4,	// (0x00016151) cams_zoom_pane_ParamLimits

0x97e4,	// (0x00016151) image_vga_pane_ParamLimits

0x9edb,	// (0x00016848) main_camera_pane_g1_ParamLimits

0x9edb,	// (0x00016848) main_camera_pane_g2_ParamLimits

0x9edb,	// (0x00016848) main_camera_pane_g3_ParamLimits

0x9edb,	// (0x00016848) main_camera_pane_g4_ParamLimits

0x9edb,	// (0x00016848) main_camera_pane_g5_ParamLimits

0x9edb,	// (0x00016848) main_camera_pane_g6_ParamLimits

0x9edb,	// (0x00016848) main_camera_pane_g7_ParamLimits

0xf1c5,	// (0x0001bb32) main_camera_pane_g_ParamLimits

0xa1c6,	// (0x00016b33) main_camera_pane_t1_ParamLimits

0xa1c6,	// (0x00016b33) main_camera_pane_t2_ParamLimits

0xf1d6,	// (0x0001bb43) main_camera_pane_t_ParamLimits

0x9e60,	// (0x000167cd) bg_popup_preview_window_pane_cp01_ParamLimits

0x9e60,	// (0x000167cd) bg_popup_preview_window_pane_cp01

0xb20e,	// (0x00017b7b) popup_phob_thumbnail2_window_g1_ParamLimits

0xb20e,	// (0x00017b7b) popup_phob_thumbnail2_window_g1

0x9c05,	// (0x00016572) call2_cli_visual_pane

0x3dcc,	// (0x00010739) popup_call2_audio_conf_window_ParamLimits

0x3dcc,	// (0x00010739) popup_call2_audio_conf_window

0x3dec,	// (0x00010759) popup_call2_audio_first_window_ParamLimits

0x3dec,	// (0x00010759) popup_call2_audio_first_window

0x3e82,	// (0x000107ef) popup_call2_audio_in_window_ParamLimits

0x3e82,	// (0x000107ef) popup_call2_audio_in_window

0x3eca,	// (0x00010837) popup_call2_audio_out_window_ParamLimits

0x3eca,	// (0x00010837) popup_call2_audio_out_window

0x3f34,	// (0x000108a1) popup_call2_audio_second_window_ParamLimits

0x3f34,	// (0x000108a1) popup_call2_audio_second_window

0x3f9a,	// (0x00010907) popup_call2_audio_wait_window_ParamLimits

0x3f9a,	// (0x00010907) popup_call2_audio_wait_window

0x9c05,	// (0x00016572) bg_popup_call2_act_pane_cp03

0x9e42,	// (0x000167af) list_conf_pane_cp

0xb21a,	// (0x00017b87) popup_call2_audio_conf_window_t1

0xa9a8,	// (0x00017315) list_single_graphic_popup_conf2_pane_ParamLimits

0xa9a8,	// (0x00017315) list_single_graphic_popup_conf2_pane

0xa9bb,	// (0x00017328) list_highlight_pane_cp04

0xb228,	// (0x00017b95) list_single_graphic_popup_conf2_pane_g1

0xa9cc,	// (0x00017339) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf4a1,	// (0x0001be0e) list_single_graphic_popup_conf2_pane_g

0xb232,	// (0x00017b9f) list_single_graphic_popup_conf2_pane_t1

0xb240,	// (0x00017bad) bg_popup_call2_act_pane_cp01_ParamLimits

0xb240,	// (0x00017bad) bg_popup_call2_act_pane_cp01

0xb2ca,	// (0x00017c37) call_type_pane_cp05_ParamLimits

0xb2ca,	// (0x00017c37) call_type_pane_cp05

0xb31e,	// (0x00017c8b) popup_call2_audio_second_window_g1_ParamLimits

0xb31e,	// (0x00017c8b) popup_call2_audio_second_window_g1

0xb372,	// (0x00017cdf) popup_call2_audio_second_window_g2_ParamLimits

0xb372,	// (0x00017cdf) popup_call2_audio_second_window_g2

0x0002,

0xf4a6,	// (0x0001be13) popup_call2_audio_second_window_g_ParamLimits

0xf4a6,	// (0x0001be13) popup_call2_audio_second_window_g

0xb3d7,	// (0x00017d44) popup_call2_audio_second_window_t1_ParamLimits

0xb3d7,	// (0x00017d44) popup_call2_audio_second_window_t1

0xb492,	// (0x00017dff) popup_call2_audio_second_window_t2_ParamLimits

0xb492,	// (0x00017dff) popup_call2_audio_second_window_t2

0xb4e5,	// (0x00017e52) popup_call2_audio_second_window_t3_ParamLimits

0xb4e5,	// (0x00017e52) popup_call2_audio_second_window_t3

0x0003,

0xf4ad,	// (0x0001be1a) popup_call2_audio_second_window_t_ParamLimits

0xf4ad,	// (0x0001be1a) popup_call2_audio_second_window_t

0x9c05,	// (0x00016572) bg_popup_call2_in_pane_cp02

0x9c0f,	// (0x0001657c) call_type_pane_cp04

0x3fd4,	// (0x00010941) popup_call2_audio_wait_window_g1

0x3fdc,	// (0x00010949) popup_call2_audio_wait_window_g2

0x0001,

0xf4b6,	// (0x0001be23) popup_call2_audio_wait_window_g

0x9c27,	// (0x00016594) popup_call2_audio_wait_window_t3

0xb5d8,	// (0x00017f45) bg_popup_call2_act_pane_ParamLimits

0xb5d8,	// (0x00017f45) bg_popup_call2_act_pane

0xb698,	// (0x00018005) call_type_pane_cp03_ParamLimits

0xb698,	// (0x00018005) call_type_pane_cp03

0xb6fc,	// (0x00018069) popup_call2_audio_first_window_g1_ParamLimits

0xb6fc,	// (0x00018069) popup_call2_audio_first_window_g1

0xb76c,	// (0x000180d9) popup_call2_audio_first_window_g2_ParamLimits

0xb76c,	// (0x000180d9) popup_call2_audio_first_window_g2

0xb7d0,	// (0x0001813d) popup_call2_audio_first_window_g3_ParamLimits

0xb7d0,	// (0x0001813d) popup_call2_audio_first_window_g3

0x0004,

0xf4bb,	// (0x0001be28) popup_call2_audio_first_window_g_ParamLimits

0xf4bb,	// (0x0001be28) popup_call2_audio_first_window_g

0xb858,	// (0x000181c5) popup_call2_audio_first_window_t1_ParamLimits

0xb858,	// (0x000181c5) popup_call2_audio_first_window_t1

0xb95b,	// (0x000182c8) popup_call2_audio_first_window_t4_ParamLimits

0xb95b,	// (0x000182c8) popup_call2_audio_first_window_t4

0xba3e,	// (0x000183ab) popup_call2_audio_first_window_t5_ParamLimits

0xba3e,	// (0x000183ab) popup_call2_audio_first_window_t5

0x0003,

0xf4c6,	// (0x0001be33) popup_call2_audio_first_window_t_ParamLimits

0xf4c6,	// (0x0001be33) popup_call2_audio_first_window_t

0x9e58,	// (0x000167c5) bg_popup_call2_act_pane_g1

0xc05b,	// (0x000189c8) popup_cale_lunar_info_window_t1

0xc069,	// (0x000189d6) popup_cale_lunar_info_window_t2

0xc077,	// (0x000189e4) popup_cale_lunar_info_window_t3

0x9c05,	// (0x00016572) bg_popup_call2_bubble_pane

0xbb3f,	// (0x000184ac) bg_popup_call2_in_pane_cp01_ParamLimits

0xbb3f,	// (0x000184ac) bg_popup_call2_in_pane_cp01

0x98e1,	// (0x0001624e) call_type_pane_cp02

0x3fe4,	// (0x00010951) popup_call2_audio_out_window_g1_ParamLimits

0x3fe4,	// (0x00010951) popup_call2_audio_out_window_g1

0xbb87,	// (0x000184f4) popup_call2_audio_out_window_g2_ParamLimits

0xbb87,	// (0x000184f4) popup_call2_audio_out_window_g2

0x4010,	// (0x0001097d) popup_call2_audio_out_window_g3_ParamLimits

0x4010,	// (0x0001097d) popup_call2_audio_out_window_g3

0x0003,

0xf4cf,	// (0x0001be3c) popup_call2_audio_out_window_g_ParamLimits

0xf4cf,	// (0x0001be3c) popup_call2_audio_out_window_g

0xbbbe,	// (0x0001852b) popup_call2_audio_out_window_t1_ParamLimits

0xbbbe,	// (0x0001852b) popup_call2_audio_out_window_t1

0xbc1d,	// (0x0001858a) popup_call2_audio_out_window_t2_ParamLimits

0xbc1d,	// (0x0001858a) popup_call2_audio_out_window_t2

0xbc71,	// (0x000185de) popup_call2_audio_out_window_t3_ParamLimits

0xbc71,	// (0x000185de) popup_call2_audio_out_window_t3

0xbc87,	// (0x000185f4) popup_call2_audio_out_window_t4_ParamLimits

0xbc87,	// (0x000185f4) popup_call2_audio_out_window_t4

0xbc9d,	// (0x0001860a) popup_call2_audio_out_window_t5_ParamLimits

0xbc9d,	// (0x0001860a) popup_call2_audio_out_window_t5

0x0005,

0xf4d8,	// (0x0001be45) popup_call2_audio_out_window_t_ParamLimits

0xf4d8,	// (0x0001be45) popup_call2_audio_out_window_t

0xbd01,	// (0x0001866e) bg_popup_call2_in_pane_ParamLimits

0xbd01,	// (0x0001866e) bg_popup_call2_in_pane

0xbd5d,	// (0x000186ca) popup_call2_audio_in_window_g1_ParamLimits

0xbd5d,	// (0x000186ca) popup_call2_audio_in_window_g1

0xbd95,	// (0x00018702) popup_call2_audio_in_window_g2_ParamLimits

0xbd95,	// (0x00018702) popup_call2_audio_in_window_g2

0xbdcd,	// (0x0001873a) popup_call2_audio_in_window_g3_ParamLimits

0xbdcd,	// (0x0001873a) popup_call2_audio_in_window_g3

0x0003,

0xf4e5,	// (0x0001be52) popup_call2_audio_in_window_g_ParamLimits

0xf4e5,	// (0x0001be52) popup_call2_audio_in_window_g

0xbe25,	// (0x00018792) popup_call2_audio_in_window_t1_ParamLimits

0xbe25,	// (0x00018792) popup_call2_audio_in_window_t1

0xbea5,	// (0x00018812) popup_call2_audio_in_window_t2_ParamLimits

0xbea5,	// (0x00018812) popup_call2_audio_in_window_t2

0xbf25,	// (0x00018892) popup_call2_audio_in_window_t3_ParamLimits

0xbf25,	// (0x00018892) popup_call2_audio_in_window_t3

0xbf3f,	// (0x000188ac) popup_call2_audio_in_window_t4_ParamLimits

0xbf3f,	// (0x000188ac) popup_call2_audio_in_window_t4

0xbf51,	// (0x000188be) popup_call2_audio_in_window_t5_ParamLimits

0xbf51,	// (0x000188be) popup_call2_audio_in_window_t5

0xbf66,	// (0x000188d3) popup_call2_audio_in_window_t6_ParamLimits

0xbf66,	// (0x000188d3) popup_call2_audio_in_window_t6

0x0005,

0xf4ee,	// (0x0001be5b) popup_call2_audio_in_window_t_ParamLimits

0xf4ee,	// (0x0001be5b) popup_call2_audio_in_window_t

0x9e58,	// (0x000167c5) bg_popup_call2_in_pane_g1

0xc085,	// (0x000189f2) popup_cale_lunar_info_window_t4

0x0003,

0xf556,	// (0x0001bec3) popup_cale_lunar_info_window_t

0x9e60,	// (0x000167cd) bg_popup_call2_rect_pane_ParamLimits

0x9e60,	// (0x000167cd) bg_popup_call2_rect_pane

0x9c05,	// (0x00016572) call2_cli_visual_graphic_pane

0x9c05,	// (0x00016572) call2_cli_visual_text_pane

0xc1d6,	// (0x00018b43) smil_status_volume_pane_g3

0x0002,

0x9e78,	// (0x000167e5) call2_cli_visual_graphic_pane_g1

0x9e78,	// (0x000167e5) call2_cli_visual_graphic_pane_g2

0x9e78,	// (0x000167e5) call2_cli_visual_graphic_pane_g3

0x0002,

0xf4fb,	// (0x0001be68) call2_cli_visual_graphic_pane_g

0xbf7b,	// (0x000188e8) bg_popup_call2_rect_pane_g1

0xa073,	// (0x000169e0) bg_popup_call2_rect_pane_g2

0xbf83,	// (0x000188f0) bg_popup_call2_rect_pane_g3

0xbf8b,	// (0x000188f8) bg_popup_call2_rect_pane_g4

0xbf93,	// (0x00018900) bg_popup_call2_rect_pane_g5

0xbf9b,	// (0x00018908) bg_popup_call2_rect_pane_g6

0xbfa3,	// (0x00018910) bg_popup_call2_rect_pane_g7

0xbfab,	// (0x00018918) bg_popup_call2_rect_pane_g8

0xbfb3,	// (0x00018920) bg_popup_call2_rect_pane_g9

0x0008,

0xf502,	// (0x0001be6f) bg_popup_call2_rect_pane_g

0xbfbb,	// (0x00018928) bg_popup_call2_bubble_pane_g1

0xbfc3,	// (0x00018930) bg_popup_call2_bubble_pane_g2

0xbfcb,	// (0x00018938) bg_popup_call2_bubble_pane_g3

0xbfd3,	// (0x00018940) bg_popup_call2_bubble_pane_g4

0xbfdb,	// (0x00018948) bg_popup_call2_bubble_pane_g5

0xbfe3,	// (0x00018950) bg_popup_call2_bubble_pane_g6

0xbfeb,	// (0x00018958) bg_popup_call2_bubble_pane_g7

0xbff3,	// (0x00018960) bg_popup_call2_bubble_pane_g8

0xbffb,	// (0x00018968) bg_popup_call2_bubble_pane_g9

0x0008,

0xf515,	// (0x0001be82) bg_popup_call2_bubble_pane_g

0x1c9e,	// (0x0000e60b) aid_cale_week_size_cell_pane

0x2244,	// (0x0000ebb1) aid_cams_cif_uncrop_pane_ParamLimits

0x2244,	// (0x0000ebb1) aid_cams_cif_uncrop_pane

0x239a,	// (0x0000ed07) aid_cams_size_cell_ParamLimits

0x239a,	// (0x0000ed07) aid_cams_size_cell

0x23ae,	// (0x0000ed1b) grid_cams_pane_ParamLimits

0x23c8,	// (0x0000ed35) linegrid_cams_pane_ParamLimits

0x24af,	// (0x0000ee1c) call_video_pane_t1

0x24cd,	// (0x0000ee3a) call_video_pane_t2

0x0001,

0xf222,	// (0x0001bb8f) call_video_pane_t

0x28fb,	// (0x0000f268) aid_cale_month_size_cell_pane_ParamLimits

0x28fb,	// (0x0000f268) aid_cale_month_size_cell_pane

0xf59a,	// (0x0001bf07) smil_status_volume_pane_g

0xc1e3,	// (0x00018b50) volume_smil_pane_ParamLimits

0x9787,	// (0x000160f4) aid_popup2_width_pane

0x1c15,	// (0x0000e582) cell_qdial_pane_g4_ParamLimits

0x1c15,	// (0x0000e582) cell_qdial_pane_g4

0x365f,	// (0x0000ffcc) aid_blid_cardinal_pane_ParamLimits

0x366b,	// (0x0000ffd8) aid_blid_destination_pane_ParamLimits

0x366b,	// (0x0000ffd8) aid_blid_destination_pane

0x9e60,	// (0x000167cd) bg_popup_call_poc_act_pane_ParamLimits

0x9e60,	// (0x000167cd) bg_popup_call_poc_act_pane

0x9e60,	// (0x000167cd) bg_popup_call_poc_inact_pane_ParamLimits

0x9e60,	// (0x000167cd) bg_popup_call_poc_inact_pane

0xc003,	// (0x00018970) bg_popup_call_poc_act_pane_g1

0xc00b,	// (0x00018978) bg_popup_call_poc_act_pane_g2

0xc013,	// (0x00018980) bg_popup_call_poc_act_pane_g3

0xbfd3,	// (0x00018940) bg_popup_call_poc_act_pane_g4

0xbfdb,	// (0x00018948) bg_popup_call_poc_act_pane_g5

0xc01b,	// (0x00018988) bg_popup_call_poc_act_pane_g6

0xbfeb,	// (0x00018958) bg_popup_call_poc_act_pane_g7

0xc023,	// (0x00018990) bg_popup_call_poc_act_pane_g8

0x9c05,	// (0x00016572) main_usb_pane

0xc0ef,	// (0x00018a5c) popup_cale_lunar_info_window

0x27a7,	// (0x0000f114) im_reading_pane_t1_ParamLimits

0xa2ad,	// (0x00016c1a) list_im_pane_ParamLimits

0xa2be,	// (0x00016c2b) scroll_pane_cp07_ParamLimits

0x9c05,	// (0x00016572) grid_highlight_pane_cp012

0x9e60,	// (0x000167cd) mup_scale_pane_ParamLimits

0xaf61,	// (0x000178ce) main_usb_pane_g1_ParamLimits

0xaf61,	// (0x000178ce) main_usb_pane_g1

0x405e,	// (0x000109cb) main_usb_pane_g2_ParamLimits

0x405e,	// (0x000109cb) main_usb_pane_g2

0x0001,

0xf53f,	// (0x0001beac) main_usb_pane_g_ParamLimits

0xf53f,	// (0x0001beac) main_usb_pane_g

0x4074,	// (0x000109e1) main_usb_pane_t1_ParamLimits

0x4074,	// (0x000109e1) main_usb_pane_t1

0x4086,	// (0x000109f3) main_usb_pane_t2_ParamLimits

0x4086,	// (0x000109f3) main_usb_pane_t2

0x4098,	// (0x00010a05) main_usb_pane_t3_ParamLimits

0x4098,	// (0x00010a05) main_usb_pane_t3

0x40aa,	// (0x00010a17) main_usb_pane_t4_ParamLimits

0x40aa,	// (0x00010a17) main_usb_pane_t4

0x40bc,	// (0x00010a29) main_usb_pane_t5_ParamLimits

0x40bc,	// (0x00010a29) main_usb_pane_t5

0x40ce,	// (0x00010a3b) main_usb_pane_t6_ParamLimits

0x40ce,	// (0x00010a3b) main_usb_pane_t6

0x0005,

0xf544,	// (0x0001beb1) main_usb_pane_t_ParamLimits

0x360e,	// (0x0000ff7b) aid_text_placing

0x3617,	// (0x0000ff84) main_location2_pane_t1_ParamLimits

0x3629,	// (0x0000ff96) main_location2_pane_t2_ParamLimits

0x363b,	// (0x0000ffa8) main_location2_pane_t3_ParamLimits

0x364d,	// (0x0000ffba) main_location2_pane_t4_ParamLimits

0x364d,	// (0x0000ffba) main_location2_pane_t4

0xf35e,	// (0x0001bccb) main_location2_pane_t_ParamLimits

0x9e8e,	// (0x000167fb) find_pinb_pane_g2_ParamLimits

0x9e8e,	// (0x000167fb) find_pinb_pane_g2

0x0001,

0xf0da,	// (0x0001ba47) find_pinb_pane_g_ParamLimits

0xf0da,	// (0x0001ba47) find_pinb_pane_g

0x9e9a,	// (0x00016807) find_pinb_pane_t1_ParamLimits

0x9eac,	// (0x00016819) find_pinb_pane_t2_ParamLimits

0xf0df,	// (0x0001ba4c) find_pinb_pane_t_ParamLimits

0x9c05,	// (0x00016572) main_call3_pane

0x2de6,	// (0x0000f753) cale_month_day_heading_pane_t1_ParamLimits

0x2e6c,	// (0x0000f7d9) cale_month_day_heading_pane_t2_ParamLimits

0x2ee5,	// (0x0000f852) cale_month_day_heading_pane_t3_ParamLimits

0x2f5e,	// (0x0000f8cb) cale_month_day_heading_pane_t4_ParamLimits

0x2fdf,	// (0x0000f94c) cale_month_day_heading_pane_t5_ParamLimits

0x3068,	// (0x0000f9d5) cale_month_day_heading_pane_t6_ParamLimits

0x30f1,	// (0x0000fa5e) cale_month_day_heading_pane_t7_ParamLimits

0xf25a,	// (0x0001bbc7) cale_month_day_heading_pane_t_ParamLimits

0xa514,	// (0x00016e81) smil_status_volume_pane

0x3af1,	// (0x0001045e) postcard_address_pane_ParamLimits

0x3af1,	// (0x0001045e) postcard_address_pane

0x3b03,	// (0x00010470) postcard_message_pane_ParamLimits

0x3b03,	// (0x00010470) postcard_message_pane

0x403c,	// (0x000109a9) call2_cli_visual_pane_t1_ParamLimits

0x403c,	// (0x000109a9) call2_cli_visual_pane_t1

0xc210,	// (0x00018b7d) postcard_message_pane_t1_ParamLimits

0xc210,	// (0x00018b7d) postcard_message_pane_t1

0xc1f8,	// (0x00018b65) postcard_address_pane_t1_ParamLimits

0xc1f8,	// (0x00018b65) postcard_address_pane_t1

0x47c6,	// (0x00011133) popup_call3_audio_in_window_ParamLimits

0x47c6,	// (0x00011133) popup_call3_audio_in_window

0x4651,	// (0x00010fbe) bg_popup_call3_in_pane_ParamLimits

0x4651,	// (0x00010fbe) bg_popup_call3_in_pane

0x46c7,	// (0x00011034) popup_call3_audio_in_window_g1_ParamLimits

0x46c7,	// (0x00011034) popup_call3_audio_in_window_g1

0x46e7,	// (0x00011054) popup_call3_audio_in_window_g2_ParamLimits

0x46e7,	// (0x00011054) popup_call3_audio_in_window_g2

0x4707,	// (0x00011074) popup_call3_audio_in_window_g3_ParamLimits

0x4707,	// (0x00011074) popup_call3_audio_in_window_g3

0x0003,

0xf5a1,	// (0x0001bf0e) popup_call3_audio_in_window_g_ParamLimits

0xf5a1,	// (0x0001bf0e) popup_call3_audio_in_window_g

0x4738,	// (0x000110a5) popup_call3_audio_in_window_t1_ParamLimits

0x4738,	// (0x000110a5) popup_call3_audio_in_window_t1

0x4776,	// (0x000110e3) popup_call3_audio_in_window_t2_ParamLimits

0x4776,	// (0x000110e3) popup_call3_audio_in_window_t2

0x47b4,	// (0x00011121) popup_call3_audio_in_window_t3_ParamLimits

0x47b4,	// (0x00011121) popup_call3_audio_in_window_t3

0x0002,

0xf5aa,	// (0x0001bf17) popup_call3_audio_in_window_t_ParamLimits

0xf5aa,	// (0x0001bf17) popup_call3_audio_in_window_t

0xa1b4,	// (0x00016b21) bg_popup_call3_rect_pane

0xbf7b,	// (0x000188e8) bg_popup_call3_rect_pane_g1

0xa073,	// (0x000169e0) bg_popup_call3_rect_pane_g2

0xbf83,	// (0x000188f0) bg_popup_call3_rect_pane_g3

0xbf8b,	// (0x000188f8) bg_popup_call3_rect_pane_g4

0xbf93,	// (0x00018900) bg_popup_call3_rect_pane_g5

0xbf9b,	// (0x00018908) bg_popup_call3_rect_pane_g6

0xbfa3,	// (0x00018910) bg_popup_call3_rect_pane_g7

0x9775,	// (0x000160e2) mup_visualizer_osc_pane

0x9775,	// (0x000160e2) mup_visualizer_spec_pane

0x4681,	// (0x00010fee) call3_video_qcif_pane_ParamLimits

0x4681,	// (0x00010fee) call3_video_qcif_pane

0x4694,	// (0x00011001) call3_video_qcif_uncrop_pane_ParamLimits

0x4694,	// (0x00011001) call3_video_qcif_uncrop_pane

0x46a2,	// (0x0001100f) call3_video_subqcif_pane_ParamLimits

0x46a2,	// (0x0001100f) call3_video_subqcif_pane

0x46b6,	// (0x00011023) call3_video_subqcif_uncrop_pane_ParamLimits

0x46b6,	// (0x00011023) call3_video_subqcif_uncrop_pane

0x4727,	// (0x00011094) popup_call3_audio_in_window_g4_ParamLimits

0x4727,	// (0x00011094) popup_call3_audio_in_window_g4

0x9775,	// (0x000160e2) mup_spec_half_pane

0x9775,	// (0x000160e2) mup_spec_half_pane_cp

0x9775,	// (0x000160e2) mup_osc_middle_pane

0xa1f4,	// (0x00016b61) mup_visualizer_osc_pane_g1

0xc189,	// (0x00018af6) mup_spec_bar_pane_ParamLimits

0xc189,	// (0x00018af6) mup_spec_bar_pane

0xa1f4,	// (0x00016b61) mup_spec_bar_pane_g1

0xa1f4,	// (0x00016b61) mup_spec_bar_pane_g2

0x0001,

0xf3d8,	// (0x0001bd45) mup_spec_bar_pane_g

0x1c9e,	// (0x0000e60b) aid_cale_week_size_cell_pane_ParamLimits

0x1cb8,	// (0x0000e625) bg_cale_heading_pane_ParamLimits

0xa116,	// (0x00016a83) bg_cale_pane_cp01_ParamLimits

0x1cd0,	// (0x0000e63d) cale_week_corner_pane_ParamLimits

0x1cef,	// (0x0000e65c) cale_week_day_heading_pane_ParamLimits

0x1d0c,	// (0x0000e679) cale_week_scroll_pane_g1_ParamLimits

0x1d1f,	// (0x0000e68c) cale_week_scroll_pane_g2_ParamLimits

0x1d37,	// (0x0000e6a4) cale_week_scroll_pane_g3_ParamLimits

0x1d4f,	// (0x0000e6bc) cale_week_scroll_pane_g4_ParamLimits

0x1d67,	// (0x0000e6d4) cale_week_scroll_pane_g5_ParamLimits

0x1d87,	// (0x0000e6f4) cale_week_scroll_pane_g6_ParamLimits

0x1da7,	// (0x0000e714) cale_week_scroll_pane_g7_ParamLimits

0x1dc7,	// (0x0000e734) cale_week_scroll_pane_g8_ParamLimits

0x1deb,	// (0x0000e758) cale_week_scroll_pane_g9_ParamLimits

0x1e03,	// (0x0000e770) cale_week_scroll_pane_g10_ParamLimits

0x1e1b,	// (0x0000e788) cale_week_scroll_pane_g11_ParamLimits

0x1e33,	// (0x0000e7a0) cale_week_scroll_pane_g12_ParamLimits

0x1e4b,	// (0x0000e7b8) cale_week_scroll_pane_g13_ParamLimits

0x1e4b,	// (0x0000e7b8) cale_week_scroll_pane_g14_ParamLimits

0x1e4b,	// (0x0000e7b8) cale_week_scroll_pane_g15_ParamLimits

0xf16b,	// (0x0001bad8) cale_week_scroll_pane_g_ParamLimits

0x1e87,	// (0x0000e7f4) cale_week_time_pane_ParamLimits

0x1eab,	// (0x0000e818) grid_cale_week_pane_ParamLimits

0xa133,	// (0x00016aa0) listscroll_cale_week_pane_t1

0xa145,	// (0x00016ab2) scroll_pane_cp08_ParamLimits

0x295b,	// (0x0000f2c8) cale_month_corner_pane_ParamLimits

0xa4de,	// (0x00016e4b) cale_month_pane_t1

0x2d79,	// (0x0000f6e6) cale_month_week_pane_ParamLimits

0x348e,	// (0x0000fdfb) popup_call_status_window_g1_ParamLimits

0x34a2,	// (0x0000fe0f) popup_call_status_window_g2_ParamLimits

0x34b6,	// (0x0000fe23) popup_call_status_window_g3_ParamLimits

0xf2e5,	// (0x0001bc52) popup_call_status_window_g_ParamLimits

0xa8d4,	// (0x00017241) aid_call2_pane

0x399e,	// (0x0001030b) msg_header_pane_g1

0x3af1,	// (0x0001045e) postcard_address2_pane_ParamLimits

0x3af1,	// (0x0001045e) postcard_address2_pane

0x3b03,	// (0x00010470) postcard_message2_pane_ParamLimits

0x3b03,	// (0x00010470) postcard_message2_pane

0x4622,	// (0x00010f8f) message2_row_pane_ParamLimits

0x4622,	// (0x00010f8f) message2_row_pane

0x463e,	// (0x00010fab) address2_row_pane_ParamLimits

0x463e,	// (0x00010fab) address2_row_pane

0xc156,	// (0x00018ac3) postcard_message2_row_pane_g1

0xc15e,	// (0x00018acb) postcard_message2_row_pane_t1

0xc156,	// (0x00018ac3) address2_row_pane_g1

0xc15e,	// (0x00018acb) address2_row_pane_t1

0x21db,	// (0x0000eb48) aid_size_cell_vorec

0x9c05,	// (0x00016572) main_rss_pane

0xc16c,	// (0x00018ad9) rss_list_single_pane_ParamLimits

0xc16c,	// (0x00018ad9) rss_list_single_pane

0xc17a,	// (0x00018ae7) rss_list_single_pane_t1

0xc17a,	// (0x00018ae7) rss_list_single_pane_t2

0x0001,

0xf595,	// (0x0001bf02) rss_list_single_pane_t

0x9c05,	// (0x00016572) main_camera2_pane

0x9c05,	// (0x00016572) main_video2_pane

0xc22c,	// (0x00018b99) cams_zoom_pane_cp2_ParamLimits

0xc22c,	// (0x00018b99) cams_zoom_pane_cp2

0xc22c,	// (0x00018b99) image2_vga_pane_ParamLimits

0xc22c,	// (0x00018b99) image2_vga_pane

0xcc17,	// (0x00019584) main_camera2_pane_g1_ParamLimits

0xcc17,	// (0x00019584) main_camera2_pane_g1

0xcc17,	// (0x00019584) main_camera2_pane_g2_ParamLimits

0xcc17,	// (0x00019584) main_camera2_pane_g2

0xcc17,	// (0x00019584) main_camera2_pane_g3_ParamLimits

0xcc17,	// (0x00019584) main_camera2_pane_g3

0xcc17,	// (0x00019584) main_camera2_pane_g4_ParamLimits

0xcc17,	// (0x00019584) main_camera2_pane_g4

0xcc17,	// (0x00019584) main_camera2_pane_g5_ParamLimits

0xcc17,	// (0x00019584) main_camera2_pane_g5

0xcc17,	// (0x00019584) main_camera2_pane_g6_ParamLimits

0xcc17,	// (0x00019584) main_camera2_pane_g6

0xcc17,	// (0x00019584) main_camera2_pane_g7_ParamLimits

0xcc17,	// (0x00019584) main_camera2_pane_g7

0xcc17,	// (0x00019584) main_camera2_pane_g8_ParamLimits

0xcc17,	// (0x00019584) main_camera2_pane_g8

0x0008,

0xf5b1,	// (0x0001bf1e) main_camera2_pane_g_ParamLimits

0xf5b1,	// (0x0001bf1e) main_camera2_pane_g

0x47e8,	// (0x00011155) main_camera2_pane_t1_ParamLimits

0x47e8,	// (0x00011155) main_camera2_pane_t1

0x47e8,	// (0x00011155) main_camera2_pane_t2_ParamLimits

0x47e8,	// (0x00011155) main_camera2_pane_t2

0x47e8,	// (0x00011155) main_camera2_pane_t3_ParamLimits

0x47e8,	// (0x00011155) main_camera2_pane_t3

0x47e8,	// (0x00011155) main_camera2_pane_t4_ParamLimits

0x47e8,	// (0x00011155) main_camera2_pane_t4

0x0006,

0xf5c4,	// (0x0001bf31) main_camera2_pane_t_ParamLimits

0xf5c4,	// (0x0001bf31) main_camera2_pane_t

0xcc25,	// (0x00019592) cams_zoom_pane_cp4_ParamLimits

0xcc25,	// (0x00019592) cams_zoom_pane_cp4

0xc24e,	// (0x00018bbb) image2_cif_pane_ParamLimits

0xc24e,	// (0x00018bbb) image2_cif_pane

0x97e4,	// (0x00016151) image2_subqcif_pane_ParamLimits

0x97e4,	// (0x00016151) image2_subqcif_pane

0x47fc,	// (0x00011169) main_video2_pane_g1_ParamLimits

0x47fc,	// (0x00011169) main_video2_pane_g1

0x47fc,	// (0x00011169) main_video2_pane_g2_ParamLimits

0x47fc,	// (0x00011169) main_video2_pane_g2

0x47fc,	// (0x00011169) main_video2_pane_g3_ParamLimits

0x47fc,	// (0x00011169) main_video2_pane_g3

0x47fc,	// (0x00011169) main_video2_pane_g4_ParamLimits

0x47fc,	// (0x00011169) main_video2_pane_g4

0x47fc,	// (0x00011169) main_video2_pane_g5_ParamLimits

0x47fc,	// (0x00011169) main_video2_pane_g5

0x47fc,	// (0x00011169) main_video2_pane_g6_ParamLimits

0x47fc,	// (0x00011169) main_video2_pane_g6

0x0005,

0xf5d3,	// (0x0001bf40) main_video2_pane_g_ParamLimits

0xf5d3,	// (0x0001bf40) main_video2_pane_g

0x480a,	// (0x00011177) main_video2_pane_t1_ParamLimits

0x480a,	// (0x00011177) main_video2_pane_t1

0x480a,	// (0x00011177) main_video2_pane_t2_ParamLimits

0x480a,	// (0x00011177) main_video2_pane_t2

0x480a,	// (0x00011177) main_video2_pane_t3_ParamLimits

0x480a,	// (0x00011177) main_video2_pane_t3

0x0002,

0xf5e0,	// (0x0001bf4d) main_video2_pane_t_ParamLimits

0xf5e0,	// (0x0001bf4d) main_video2_pane_t

0x4162,	// (0x00010acf) call_muted_g2

0x0001,

0xf587,	// (0x0001bef4) call_muted_g

0x9c05,	// (0x00016572) main_mup2_pane

0xad88,	// (0x000176f5) main_mup2_pane_g1_ParamLimits

0xad88,	// (0x000176f5) main_mup2_pane_g1

0xad88,	// (0x000176f5) main_mup2_pane_g2_ParamLimits

0xad88,	// (0x000176f5) main_mup2_pane_g2

0xa1f4,	// (0x00016b61) main_mup_pane_g13_cp1

0x9775,	// (0x000160e2) mup_volume_pane_cp1

0xad88,	// (0x000176f5) main_mup2_pane_g4_ParamLimits

0xad88,	// (0x000176f5) main_mup2_pane_g4

0xad88,	// (0x000176f5) main_mup2_pane_g5_ParamLimits

0xad88,	// (0x000176f5) main_mup2_pane_g5

0xad88,	// (0x000176f5) main_mup2_pane_g6_ParamLimits

0xad88,	// (0x000176f5) main_mup2_pane_g6

0xad88,	// (0x000176f5) main_mup2_pane_g7_ParamLimits

0xad88,	// (0x000176f5) main_mup2_pane_g7

0x0006,

0xf5e7,	// (0x0001bf54) main_mup2_pane_g_ParamLimits

0xf5e7,	// (0x0001bf54) main_mup2_pane_g

0xad96,	// (0x00017703) main_mup2_pane_t1_ParamLimits

0xad96,	// (0x00017703) main_mup2_pane_t1

0xad96,	// (0x00017703) main_mup2_pane_t2_ParamLimits

0xad96,	// (0x00017703) main_mup2_pane_t2

0xad96,	// (0x00017703) main_mup2_pane_t3_ParamLimits

0xad96,	// (0x00017703) main_mup2_pane_t3

0xad96,	// (0x00017703) main_mup2_pane_t4_ParamLimits

0xad96,	// (0x00017703) main_mup2_pane_t4

0xad96,	// (0x00017703) main_mup2_pane_t5_ParamLimits

0xad96,	// (0x00017703) main_mup2_pane_t5

0xad96,	// (0x00017703) main_mup2_pane_t6_ParamLimits

0xad96,	// (0x00017703) main_mup2_pane_t6

0x0005,

0xf5f6,	// (0x0001bf63) main_mup2_pane_t_ParamLimits

0xf5f6,	// (0x0001bf63) main_mup2_pane_t

0xadbe,	// (0x0001772b) mup2_visualizer_pane_ParamLimits

0xadbe,	// (0x0001772b) mup2_visualizer_pane

0xadbe,	// (0x0001772b) mup_progress_pane_cp_ParamLimits

0xadbe,	// (0x0001772b) mup_progress_pane_cp

0xc25c,	// (0x00018bc9) mup_volume_pane_cp_ParamLimits

0xc25c,	// (0x00018bc9) mup_volume_pane_cp

0x9edb,	// (0x00016848) mup2_visualizer_pane_g1_ParamLimits

0x9edb,	// (0x00016848) mup2_visualizer_pane_g1

0x9ee9,	// (0x00016856) mup2_visualizer_pane_g2_ParamLimits

0x9ee9,	// (0x00016856) mup2_visualizer_pane_g2

0x9ee9,	// (0x00016856) mup2_visualizer_pane_g3_ParamLimits

0x9ee9,	// (0x00016856) mup2_visualizer_pane_g3

0x0002,

0xf0e4,	// (0x0001ba51) mup2_visualizer_pane_g_ParamLimits

0xf0e4,	// (0x0001ba51) mup2_visualizer_pane_g

0xb0aa,	// (0x00017a17) aid_size_cell_fmradio

0x4314,	// (0x00010c81) aid_height_parent_landcape

0xa33c,	// (0x00016ca9) wml_content_pane_cp

0xa344,	// (0x00016cb1) wml_tabs_pane

0xa34d,	// (0x00016cba) popup_wml_miniature_window

0xa355,	// (0x00016cc2) scroll_pane_cp021

0xa369,	// (0x00016cd6) wml_content_pane_comp8

0x9c05,	// (0x00016572) bg_popup_sub_pane_cp05

0xc272,	// (0x00018bdf) popup_wml_miniature_window_g1

0xc27a,	// (0x00018be7) wml_miniature_view_pane

0x481e,	// (0x0001118b) aid_size_wml_view

0x4826,	// (0x00011193) wml_miniature_view_pane_g1

0x482f,	// (0x0001119c) wml_miniature_view_pane_g2

0x4838,	// (0x000111a5) wml_miniature_view_pane_g3

0x4840,	// (0x000111ad) wml_miniature_view_pane_g4

0x4848,	// (0x000111b5) wml_miniature_view_pane_g5

0x4850,	// (0x000111bd) wml_miniature_view_pane_g6

0x4858,	// (0x000111c5) wml_miniature_view_pane_g7

0x4860,	// (0x000111cd) wml_miniature_view_pane_g8

0x0007,

0xf603,	// (0x0001bf70) wml_miniature_view_pane_g

0xc282,	// (0x00018bef) background_graphic_ParamLimits

0xc282,	// (0x00018bef) background_graphic

0xc28e,	// (0x00018bfb) wml_tabs_2_pane

0xc297,	// (0x00018c04) wml_tabs_3_pane_ParamLimits

0xc297,	// (0x00018c04) wml_tabs_3_pane

0xc2a9,	// (0x00018c16) wml_tabs_4_pane_ParamLimits

0xc2a9,	// (0x00018c16) wml_tabs_4_pane

0xc2bf,	// (0x00018c2c) wml_tabs_5_pane_ParamLimits

0xc2bf,	// (0x00018c2c) wml_tabs_5_pane

0xc2d9,	// (0x00018c46) wml_tabs_pane_g2_ParamLimits

0xc2d9,	// (0x00018c46) wml_tabs_pane_g2

0xc2ee,	// (0x00018c5b) wml_tabs_pane_g3_ParamLimits

0xc2ee,	// (0x00018c5b) wml_tabs_pane_g3

0xc303,	// (0x00018c70) wml_tabs_2_active_pane_ParamLimits

0xc303,	// (0x00018c70) wml_tabs_2_active_pane

0xc303,	// (0x00018c70) wml_tabs_2_passive_pane_ParamLimits

0xc303,	// (0x00018c70) wml_tabs_2_passive_pane

0x4868,	// (0x000111d5) wml_tabs_3_active_pane_cp_ParamLimits

0x4868,	// (0x000111d5) wml_tabs_3_active_pane_cp

0x487d,	// (0x000111ea) wml_tabs_3_passive_pane_ParamLimits

0x487d,	// (0x000111ea) wml_tabs_3_passive_pane

0x4890,	// (0x000111fd) wml_tabs_3_passive_pane_cp_ParamLimits

0x4890,	// (0x000111fd) wml_tabs_3_passive_pane_cp

0x48a7,	// (0x00011214) tabs_4_active_pane

0x48af,	// (0x0001121c) tabs_4_passive_pane

0x48b9,	// (0x00011226) tabs_4_passive_pane_cp

0x48c1,	// (0x0001122e) tabs_4_passive_pane_cp2

0x4056,	// (0x000109c3) aid_height_text

0xadbe,	// (0x0001772b) mup_volume_cont_pane_ParamLimits

0xadbe,	// (0x0001772b) mup_volume_cont_pane

0x9775,	// (0x000160e2) aid_size_cell_pinb

0x9775,	// (0x000160e2) aid_size_list_pinb

0xadbe,	// (0x0001772b) mup2_volume_cont_pane_ParamLimits

0xadbe,	// (0x0001772b) mup2_volume_cont_pane

0xc311,	// (0x00018c7e) mup2_volume_cont_pane_g1_ParamLimits

0xc311,	// (0x00018c7e) mup2_volume_cont_pane_g1

0x169f,	// (0x0000e00c) aid_size_cell_touch_ParamLimits

0x169f,	// (0x0000e00c) aid_size_cell_touch

0x18cc,	// (0x0000e239) touch_pane_ParamLimits

0x18cc,	// (0x0000e239) touch_pane

0x9775,	// (0x000160e2) main_rss2_pane

0xc330,	// (0x00018c9d) listscroll_rss2_pane

0xc339,	// (0x00018ca6) rss2_navigation_pane

0xc341,	// (0x00018cae) list_rss2_pane

0xaa7e,	// (0x000173eb) scroll_pane_cp22

0xc349,	// (0x00018cb6) rss2_navigation_pane_g1

0xc352,	// (0x00018cbf) rss2_navigation_pane_g2

0xc35a,	// (0x00018cc7) rss2_navigation_pane_g3

0x0002,

0xf614,	// (0x0001bf81) rss2_navigation_pane_g

0xc362,	// (0x00018ccf) rss2_navigation_pane_t1

0x48cb,	// (0x00011238) rss2_list_single_pane_ParamLimits

0x48cb,	// (0x00011238) rss2_list_single_pane

0xc370,	// (0x00018cdd) rss2_list_single_pane_t2

0xc37e,	// (0x00018ceb) rss2_list_single_pane_t3_ParamLimits

0xc37e,	// (0x00018ceb) rss2_list_single_pane_t3

0xc39b,	// (0x00018d08) rss2_list_single_pane_t4

0x337b,	// (0x0000fce8) smil_status_pane_g1

0x97e4,	// (0x00016151) main_image2_pane_ParamLimits

0x97e4,	// (0x00016151) main_image2_pane

0xcc17,	// (0x00019584) main_camera2_pane_g9_ParamLimits

0xcc17,	// (0x00019584) main_camera2_pane_g9

0x47e8,	// (0x00011155) main_camera2_pane_t5_ParamLimits

0x47e8,	// (0x00011155) main_camera2_pane_t5

0xc23a,	// (0x00018ba7) main_camera2_pane_t6_ParamLimits

0xc23a,	// (0x00018ba7) main_camera2_pane_t6

0x48e0,	// (0x0001124d) main_image2_pane_g1_ParamLimits

0x48e0,	// (0x0001124d) main_image2_pane_g1

0x3d2a,	// (0x00010697) smil2_video_pane_ParamLimits

0x3d2a,	// (0x00010697) smil2_video_pane

0x9793,	// (0x00016100) aid_zoom_text_primary_cp

0x97da,	// (0x00016147) popup_preview_fixed_window

0xa2a5,	// (0x00016c12) im_reading_pane_g1

0x47da,	// (0x00011147) cams2_bc_adjust_pane_cp_ParamLimits

0x47da,	// (0x00011147) cams2_bc_adjust_pane_cp

0xadbe,	// (0x0001772b) cams2_bc_adjust_pane_ParamLimits

0xadbe,	// (0x0001772b) cams2_bc_adjust_pane

0xa1f4,	// (0x00016b61) cams2_bc_adjust_pane_g1

0x9775,	// (0x000160e2) cams2_slider_pane

0xa1f4,	// (0x00016b61) cams2_slider_pane_g1

0xa1f4,	// (0x00016b61) cams2_slider_pane_g2

0x0006,

0xf61b,	// (0x0001bf88) cams2_slider_pane_g

0x1994,	// (0x0000e301) calc_display_pane_ParamLimits

0x19b9,	// (0x0000e326) calc_paper_pane_ParamLimits

0x19dc,	// (0x0000e349) grid_calc_pane_ParamLimits

0xa93a,	// (0x000172a7) popup_clock_digital_window_t1_ParamLimits

0xb047,	// (0x000179b4) main_image_pane_t1

0x1976,	// (0x0000e2e3) aid_size_cell_calc_ParamLimits

0x1976,	// (0x0000e2e3) aid_size_cell_calc

0x4366,	// (0x00010cd3) popup_blid_sat_info2_window_ParamLimits

0x4366,	// (0x00010cd3) popup_blid_sat_info2_window

0xc3a9,	// (0x00018d16) aid_size_cell_blid

0xc24e,	// (0x00018bbb) bg_popup_window_pane_cp07

0xc3c6,	// (0x00018d33) grid_popup_blid_pane

0xc3d0,	// (0x00018d3d) heading_pane_cp05_ParamLimits

0xc3d0,	// (0x00018d3d) heading_pane_cp05

0xc49a,	// (0x00018e07) cell_popup_blid_pane_ParamLimits

0xc49a,	// (0x00018e07) cell_popup_blid_pane

0xc4be,	// (0x00018e2b) cell_popup_blid_pane_g1

0xc4c6,	// (0x00018e33) cell_popup_blid_pane_t1

0xadbe,	// (0x0001772b) mup2_indicator_pane_ParamLimits

0xadbe,	// (0x0001772b) mup2_indicator_pane

0x9775,	// (0x000160e2) mup2_visualizer_osc_pane

0xc25c,	// (0x00018bc9) mup2_visualizer_spec_pane_ParamLimits

0xc25c,	// (0x00018bc9) mup2_visualizer_spec_pane

0x9775,	// (0x000160e2) mup2_spec_half_pane

0x9775,	// (0x000160e2) mup2_spec_half_pane_cp

0xc4d4,	// (0x00018e41) mup2_spec_bar_pane_ParamLimits

0xc4d4,	// (0x00018e41) mup2_spec_bar_pane

0xa1f4,	// (0x00016b61) mup2_spec_bar_pane_g1

0xc4f3,	// (0x00018e60) mup2_spec_bar_pane_g2

0x0001,

0xf641,	// (0x0001bfae) mup2_spec_bar_pane_g

0x9775,	// (0x000160e2) mup2_osc_middle_pane

0xa1f4,	// (0x00016b61) mup2_visualizer_osc_pane_g1

0x9812,	// (0x0001617f) popup_number_entry_window_t1_ParamLimits

0x9825,	// (0x00016192) popup_number_entry_window_t2_ParamLimits

0x9837,	// (0x000161a4) popup_number_entry_window_t3_ParamLimits

0x191e,	// (0x0000e28b) popup_number_entry_window_t5_ParamLimits

0x191e,	// (0x0000e28b) popup_number_entry_window_t5

0xf085,	// (0x0001b9f2) popup_number_entry_window_t_ParamLimits

0x9849,	// (0x000161b6) text_title_cp2_ParamLimits

0xaf21,	// (0x0001788e) aid_hotspot_pointer_text2_pane

0xaf47,	// (0x000178b4) main_viewer_pane_g9_ParamLimits

0xaf47,	// (0x000178b4) main_viewer_pane_g9

0xa4de,	// (0x00016e4b) cale_month_pane_t1_ParamLimits

0xa549,	// (0x00016eb6) bg_cale_pane_ParamLimits

0xa561,	// (0x00016ece) list_cale_pane_ParamLimits

0xa572,	// (0x00016edf) listscroll_cale_day_pane_t1

0xa584,	// (0x00016ef1) scroll_pane_cp09_ParamLimits

0x3738,	// (0x000100a5) main_mup_eq_pane_t1_ParamLimits

0x3738,	// (0x000100a5) main_mup_eq_pane_t1

0x3752,	// (0x000100bf) main_mup_eq_pane_t2_ParamLimits

0x3752,	// (0x000100bf) main_mup_eq_pane_t2

0x376c,	// (0x000100d9) main_mup_eq_pane_t3_ParamLimits

0x376c,	// (0x000100d9) main_mup_eq_pane_t3

0x3788,	// (0x000100f5) main_mup_eq_pane_t4_ParamLimits

0x3788,	// (0x000100f5) main_mup_eq_pane_t4

0x37a4,	// (0x00010111) main_mup_eq_pane_t5_ParamLimits

0x37a4,	// (0x00010111) main_mup_eq_pane_t5

0x37c0,	// (0x0001012d) main_mup_eq_pane_t6_ParamLimits

0x37c0,	// (0x0001012d) main_mup_eq_pane_t6

0x37d4,	// (0x00010141) main_mup_eq_pane_t7_ParamLimits

0x37d4,	// (0x00010141) main_mup_eq_pane_t7

0x37e8,	// (0x00010155) main_mup_eq_pane_t8_ParamLimits

0x37e8,	// (0x00010155) main_mup_eq_pane_t8

0x37fc,	// (0x00010169) main_mup_eq_pane_t9_ParamLimits

0x37fc,	// (0x00010169) main_mup_eq_pane_t9

0x3816,	// (0x00010183) main_mup_eq_pane_t10_ParamLimits

0x3816,	// (0x00010183) main_mup_eq_pane_t10

0x0009,

0xf3e4,	// (0x0001bd51) main_mup_eq_pane_t_ParamLimits

0xf3e4,	// (0x0001bd51) main_mup_eq_pane_t

0x38c5,	// (0x00010232) mup_equalizer_pane_cp5_ParamLimits

0x38d9,	// (0x00010246) mup_equalizer_pane_cp6_ParamLimits

0x38ed,	// (0x0001025a) mup_equalizer_pane_cp7_ParamLimits

0x9775,	// (0x000160e2) main_gallery_pane

0xc1a8,	// (0x00018b15) smil2_volume_pane

0xc1b0,	// (0x00018b1d) smil_status_volume_pane_g1_ParamLimits

0xc1c3,	// (0x00018b30) smil_status_volume_pane_g2_ParamLimits

0xc1d6,	// (0x00018b43) smil_status_volume_pane_g3_ParamLimits

0xf59a,	// (0x0001bf07) smil_status_volume_pane_g_ParamLimits

0xc24e,	// (0x00018bbb) bg_popup_window_pane_cp07_ParamLimits

0xc3b1,	// (0x00018d1e) blid_firmament_pane

0x97e4,	// (0x00016151) aid_size_cell_gallery_ParamLimits

0x97e4,	// (0x00016151) aid_size_cell_gallery

0x97e4,	// (0x00016151) grid_gallery_pane_ParamLimits

0x97e4,	// (0x00016151) grid_gallery_pane

0xc24e,	// (0x00018bbb) cell_gallery_pane_ParamLimits

0xc24e,	// (0x00018bbb) cell_gallery_pane

0x97e4,	// (0x00016151) bg_cell_gallery_focus_pane_ParamLimits

0x97e4,	// (0x00016151) bg_cell_gallery_focus_pane

0x9edb,	// (0x00016848) cell_gallery_pane_g1_ParamLimits

0x9edb,	// (0x00016848) cell_gallery_pane_g1

0x9edb,	// (0x00016848) cell_gallery_pane_g2_ParamLimits

0x9edb,	// (0x00016848) cell_gallery_pane_g2

0x9edb,	// (0x00016848) cell_gallery_pane_g3_ParamLimits

0x9edb,	// (0x00016848) cell_gallery_pane_g3

0x9ee9,	// (0x00016856) cell_gallery_pane_g4_ParamLimits

0x9ee9,	// (0x00016856) cell_gallery_pane_g4

0x0003,

0xf646,	// (0x0001bfb3) cell_gallery_pane_g_ParamLimits

0xf646,	// (0x0001bfb3) cell_gallery_pane_g

0xc4fd,	// (0x00018e6a) bg_cell_gallery_focus_pane_g1

0xc505,	// (0x00018e72) bg_cell_gallery_focus_pane_g2

0xc50d,	// (0x00018e7a) bg_cell_gallery_focus_pane_g3

0xc515,	// (0x00018e82) bg_cell_gallery_focus_pane_g4

0xc51d,	// (0x00018e8a) bg_cell_gallery_focus_pane_g5

0xc525,	// (0x00018e92) bg_cell_gallery_focus_pane_g6

0xc52d,	// (0x00018e9a) bg_cell_gallery_focus_pane_g7

0xc535,	// (0x00018ea2) bg_cell_gallery_focus_pane_g8

0x0007,

0xf64f,	// (0x0001bfbc) bg_cell_gallery_focus_pane_g

0xc53d,	// (0x00018eaa) aid_firma_cardinal

0xc551,	// (0x00018ebe) blid_firmament_pane_t1

0xc568,	// (0x00018ed5) blid_firmament_pane_t2

0xc57f,	// (0x00018eec) blid_firmament_pane_t3

0xc596,	// (0x00018f03) blid_firmament_pane_t4

0x0003,

0xf660,	// (0x0001bfcd) blid_firmament_pane_t

0xc5ad,	// (0x00018f1a) blid_sat_info_pane

0xa1f4,	// (0x00016b61) blid_sat_info_pane_g1

0xa1f4,	// (0x00016b61) blid_sat_info_pane_g2

0x0001,

0xf3d8,	// (0x0001bd45) blid_sat_info_pane_g

0xc5bd,	// (0x00018f2a) blid_sat_info_pane_t1

0xc5cb,	// (0x00018f38) smil2_volume_content_pane

0xc5d4,	// (0x00018f41) smil2_volume_pane_g1

0xa00a,	// (0x00016977) smil2_volume_content_pane_g1

0xc5dc,	// (0x00018f49) smil2_volume_content_pane_g2

0xc5e5,	// (0x00018f52) smil2_volume_content_pane_g3

0xc5ee,	// (0x00018f5b) smil2_volume_content_pane_g4

0xc5f7,	// (0x00018f64) smil2_volume_content_pane_g5

0xc600,	// (0x00018f6d) smil2_volume_content_pane_g6

0xc609,	// (0x00018f76) smil2_volume_content_pane_g7

0xc612,	// (0x00018f7f) smil2_volume_content_pane_g8

0xc61b,	// (0x00018f88) smil2_volume_content_pane_g9

0xc624,	// (0x00018f91) smil2_volume_content_pane_g10

0x0009,

0xf669,	// (0x0001bfd6) smil2_volume_content_pane_g

0x1f5f,	// (0x0000e8cc) cale_week_day_heading_pane_t1_ParamLimits

0x1f89,	// (0x0000e8f6) cale_week_day_heading_pane_t2_ParamLimits

0x1fb8,	// (0x0000e925) cale_week_day_heading_pane_t3_ParamLimits

0x1fe7,	// (0x0000e954) cale_week_day_heading_pane_t4_ParamLimits

0x2016,	// (0x0000e983) cale_week_day_heading_pane_t5_ParamLimits

0x204d,	// (0x0000e9ba) cale_week_day_heading_pane_t6_ParamLimits

0x2084,	// (0x0000e9f1) cale_week_day_heading_pane_t7_ParamLimits

0xf18c,	// (0x0001baf9) cale_week_day_heading_pane_t_ParamLimits

0xa162,	// (0x00016acf) bg_cale_side_pane_ParamLimits

0x20ae,	// (0x0000ea1b) cale_week_time_pane_t1_ParamLimits

0x20c8,	// (0x0000ea35) cale_week_time_pane_t2_ParamLimits

0x20e2,	// (0x0000ea4f) cale_week_time_pane_t3_ParamLimits

0x20fc,	// (0x0000ea69) cale_week_time_pane_t4_ParamLimits

0x2116,	// (0x0000ea83) cale_week_time_pane_t5_ParamLimits

0x2130,	// (0x0000ea9d) cale_week_time_pane_t6_ParamLimits

0x214a,	// (0x0000eab7) cale_week_time_pane_t7_ParamLimits

0x2164,	// (0x0000ead1) cale_week_time_pane_t8_ParamLimits

0xf19b,	// (0x0001bb08) cale_week_time_pane_t_ParamLimits

0x217e,	// (0x0000eaeb) cell_cale_week_pane_g2_ParamLimits

0xa162,	// (0x00016acf) bg_cale_side_pane_cp01_ParamLimits

0x3182,	// (0x0000faef) cale_month_week_pane_t1_ParamLimits

0x319b,	// (0x0000fb08) cale_month_week_pane_t2_ParamLimits

0x31b4,	// (0x0000fb21) cale_month_week_pane_t3_ParamLimits

0x31cd,	// (0x0000fb3a) cale_month_week_pane_t4_ParamLimits

0x31e6,	// (0x0000fb53) cale_month_week_pane_t5_ParamLimits

0x31ff,	// (0x0000fb6c) cale_month_week_pane_t6_ParamLimits

0xf269,	// (0x0001bbd6) cale_month_week_pane_t_ParamLimits

0xa4f0,	// (0x00016e5d) cell_cale_month_pane_g1_ParamLimits

0x9775,	// (0x000160e2) main_cale_event_viewer_pane

0x9775,	// (0x000160e2) listscroll_cale_event_viewer_pane

0xc62d,	// (0x00018f9a) list_cale_ev_pane

0xc635,	// (0x00018fa2) scroll_pane_cp023

0xc641,	// (0x00018fae) field_cale_ev_pane_ParamLimits

0xc641,	// (0x00018fae) field_cale_ev_pane

0xc65f,	// (0x00018fcc) field_cale_ev_content_pane_ParamLimits

0xc65f,	// (0x00018fcc) field_cale_ev_content_pane

0xc66b,	// (0x00018fd8) field_cale_ev_pane_g1_ParamLimits

0xc66b,	// (0x00018fd8) field_cale_ev_pane_g1

0xc677,	// (0x00018fe4) field_cale_ev_pane_g2_ParamLimits

0xc677,	// (0x00018fe4) field_cale_ev_pane_g2

0xc68f,	// (0x00018ffc) field_cale_ev_pane_g3_ParamLimits

0xc68f,	// (0x00018ffc) field_cale_ev_pane_g3

0x0002,

0xf67e,	// (0x0001bfeb) field_cale_ev_pane_g_ParamLimits

0xf67e,	// (0x0001bfeb) field_cale_ev_pane_g

0xc6a7,	// (0x00019014) field_cale_ev_pane_t1_ParamLimits

0xc6a7,	// (0x00019014) field_cale_ev_pane_t1

0xa08d,	// (0x000169fa) field_cale_ev_content_pane_t1_ParamLimits

0xa08d,	// (0x000169fa) field_cale_ev_content_pane_t1

0xae69,	// (0x000177d6) bg_button_pane_cp01

0x1c8c,	// (0x0000e5f9) listscroll_cale_week_pane_ParamLimits

0xa10d,	// (0x00016a7a) popup_toolbar_window_cp01

0xa133,	// (0x00016aa0) listscroll_cale_week_pane_t1_ParamLimits

0x1c8c,	// (0x0000e5f9) listscroll_cale_day_pane_ParamLimits

0xa10d,	// (0x00016a7a) popup_toolbar_window_cp02

0xa572,	// (0x00016edf) listscroll_cale_day_pane_t1_ParamLimits

0x1c8c,	// (0x0000e5f9) main_cale_month_pane_ParamLimits

0xc126,	// (0x00018a93) popup_toolbar_window_cp03_ParamLimits

0xc126,	// (0x00018a93) popup_toolbar_window_cp03

0x3bf2,	// (0x0001055f) main_image_pane_g2_ParamLimits

0x3bf2,	// (0x0001055f) main_image_pane_g2

0x3c03,	// (0x00010570) main_image_pane_g3_ParamLimits

0x3c03,	// (0x00010570) main_image_pane_g3

0x0002,

0xf476,	// (0x0001bde3) main_image_pane_g_ParamLimits

0xf476,	// (0x0001bde3) main_image_pane_g

0xb047,	// (0x000179b4) main_image_pane_t1_ParamLimits

0x3c14,	// (0x00010581) main_image_pane_t2_ParamLimits

0x3c14,	// (0x00010581) main_image_pane_t2

0x3c26,	// (0x00010593) main_image_pane_t3_ParamLimits

0x3c26,	// (0x00010593) main_image_pane_t3

0x3c4e,	// (0x000105bb) main_image_pane_t4_ParamLimits

0x3c4e,	// (0x000105bb) main_image_pane_t4

0x0003,

0xf47d,	// (0x0001bdea) main_image_pane_t_ParamLimits

0xf47d,	// (0x0001bdea) main_image_pane_t

0x3c6e,	// (0x000105db) popup_image_details_window_cp01

0x3c78,	// (0x000105e5) popup_toobar_trans_pane_cp01_ParamLimits

0x3c78,	// (0x000105e5) popup_toobar_trans_pane_cp01

0x4445,	// (0x00010db2) popup_image_details_window_ParamLimits

0x4445,	// (0x00010db2) popup_image_details_window

0xc0f9,	// (0x00018a66) popup_image_focus_window

0xc22c,	// (0x00018b99) camera2_autofocus_pane_ParamLimits

0xc22c,	// (0x00018b99) camera2_autofocus_pane

0x9775,	// (0x000160e2) bg_popup_sub_pane_cp06

0xc6be,	// (0x0001902b) popup_image_focus_window_g1

0xc6c6,	// (0x00019033) popup_image_focus_window_g2

0xc6ce,	// (0x0001903b) popup_image_focus_window_g3

0xc6d6,	// (0x00019043) popup_image_focus_window_g4

0x0003,

0xf685,	// (0x0001bff2) popup_image_focus_window_g

0xc6de,	// (0x0001904b) popup_image_focus_window_t1

0xc6ec,	// (0x00019059) popup_image_focus_window_t2

0xc6fc,	// (0x00019069) popup_image_focus_window_t3

0x0002,

0xf68e,	// (0x0001bffb) popup_image_focus_window_t

0x9edb,	// (0x00016848) camera2_autofocus_pane_g1

0x97e4,	// (0x00016151) bg_tb_trans_pane_cp01

0xc70a,	// (0x00019077) popup_image_details_window_g1

0xc71d,	// (0x0001908a) popup_image_details_window_g2

0x0002,

0xf6a0,	// (0x0001c00d) popup_image_details_window_g

0xc746,	// (0x000190b3) popup_image_details_window_t1

0xc758,	// (0x000190c5) popup_image_details_window_t2

0xc771,	// (0x000190de) popup_image_details_window_t3

0xc785,	// (0x000190f2) popup_image_details_window_t4

0xc7a0,	// (0x0001910d) popup_image_details_window_t5

0x0004,

0xf6a7,	// (0x0001c014) popup_image_details_window_t

0x9f41,	// (0x000168ae) bg_calc_paper_pane_ParamLimits

0x9775,	// (0x000160e2) grid_highlight_pane_cp013

0x9f55,	// (0x000168c2) list_calc_pane_ParamLimits

0x9f67,	// (0x000168d4) scroll_pane_cp024

0x9f6f,	// (0x000168dc) bg_calc_display_pane_ParamLimits

0x1ada,	// (0x0000e447) calc_display_pane_t1_ParamLimits

0x1aef,	// (0x0000e45c) calc_display_pane_t2_ParamLimits

0x9f7b,	// (0x000168e8) calc_display_pane_t3_ParamLimits

0xf10c,	// (0x0001ba79) calc_display_pane_t_ParamLimits

0x1baf,	// (0x0000e51c) cell_calc_pane_g2

0x0001,

0xf129,	// (0x0001ba96) cell_calc_pane_g

0x1bb8,	// (0x0000e525) cell_calc_pane_t1

0x9fe8,	// (0x00016955) grid_highlight_pane_cp02_ParamLimits

0x9ffe,	// (0x0001696b) toolbar_button_pane_cp01_ParamLimits

0x9ffe,	// (0x0001696b) toolbar_button_pane_cp01

0xb08c,	// (0x000179f9) temp_image_control_pane_ParamLimits

0xb08c,	// (0x000179f9) temp_image_control_pane

0x97e4,	// (0x00016151) main_mp3_pane

0xc7ba,	// (0x00019127) temp_image_control_pane_g1_ParamLimits

0xc7ba,	// (0x00019127) temp_image_control_pane_g1

0xc7c8,	// (0x00019135) temp_image_control_pane_g2_ParamLimits

0xc7c8,	// (0x00019135) temp_image_control_pane_g2

0xc7da,	// (0x00019147) temp_image_control_pane_g3_ParamLimits

0xc7da,	// (0x00019147) temp_image_control_pane_g3

0x48f6,	// (0x00011263) temp_image_control_pane_g4_ParamLimits

0x48f6,	// (0x00011263) temp_image_control_pane_g4

0x0003,

0xf6b2,	// (0x0001c01f) temp_image_control_pane_g_ParamLimits

0xf6b2,	// (0x0001c01f) temp_image_control_pane_g

0xc7ba,	// (0x00019127) main_mp3_pane_g1

0x4909,	// (0x00011276) main_mp3_pane_g2

0x0007,

0xf6bb,	// (0x0001c028) main_mp3_pane_g

0xc80f,	// (0x0001917c) main_mp3_pane_t1

0x9ee9,	// (0x00016856) main_camera_pane_g8_ParamLimits

0x9ee9,	// (0x00016856) main_camera_pane_g8

0x2348,	// (0x0000ecb5) main_video_pane_g7_ParamLimits

0x2348,	// (0x0000ecb5) main_video_pane_g7

0xadaa,	// (0x00017717) main_camera2_pane_t7_ParamLimits

0xadaa,	// (0x00017717) main_camera2_pane_t7

0xa2fc,	// (0x00016c69) scroll_pane_cp025_ParamLimits

0xa2fc,	// (0x00016c69) scroll_pane_cp025

0xa310,	// (0x00016c7d) scroll_pane_cp026_ParamLimits

0xa310,	// (0x00016c7d) scroll_pane_cp026

0xa31f,	// (0x00016c8c) wml_content_pane_ParamLimits

0x9775,	// (0x000160e2) main_touch_calib_pane

0x49dd,	// (0x0001134a) main_touch_calib_pane_g1

0x49ef,	// (0x0001135c) main_touch_calib_pane_g2

0x4a01,	// (0x0001136e) main_touch_calib_pane_g3

0x4a13,	// (0x00011380) main_touch_calib_pane_g4

0x0003,

0xf6d9,	// (0x0001c046) main_touch_calib_pane_g

0x4a25,	// (0x00011392) main_touch_calib_pane_t1

0x4a3f,	// (0x000113ac) main_touch_calib_pane_t2

0x0004,

0xf6e2,	// (0x0001c04f) main_touch_calib_pane_t

0xab5a,	// (0x000174c7) mup_progress_pane_cp02

0xab8f,	// (0x000174fc) navi_pane_g1

0xac4a,	// (0x000175b7) navi_pane_mp_t3

0x97e4,	// (0x00016151) main_mp3_pane_ParamLimits

0x45ca,	// (0x00010f37) navi_pane_ParamLimits

0xc7ba,	// (0x00019127) main_mp3_pane_g1_ParamLimits

0x4909,	// (0x00011276) main_mp3_pane_g2_ParamLimits

0x4917,	// (0x00011284) main_mp3_pane_g3_ParamLimits

0x4917,	// (0x00011284) main_mp3_pane_g3

0x4925,	// (0x00011292) main_mp3_pane_g4_ParamLimits

0x4925,	// (0x00011292) main_mp3_pane_g4

0x9edb,	// (0x00016848) main_mp3_pane_g5_ParamLimits

0x9edb,	// (0x00016848) main_mp3_pane_g5

0xc7ea,	// (0x00019157) main_mp3_pane_g6_ParamLimits

0xc7ea,	// (0x00019157) main_mp3_pane_g6

0xc7f7,	// (0x00019164) main_mp3_pane_g7_ParamLimits

0xc7f7,	// (0x00019164) main_mp3_pane_g7

0xc803,	// (0x00019170) main_mp3_pane_g8_ParamLimits

0xc803,	// (0x00019170) main_mp3_pane_g8

0xf6bb,	// (0x0001c028) main_mp3_pane_g_ParamLimits

0x4931,	// (0x0001129e) main_mp3_pane_t2

0x493f,	// (0x000112ac) main_mp3_pane_t3

0xc81d,	// (0x0001918a) main_mp3_pane_t4

0xc82b,	// (0x00019198) main_mp3_pane_t5

0x0005,

0xf6cc,	// (0x0001c039) main_mp3_pane_t

0xc839,	// (0x000191a6) mup_progress_pane_cp01

0x9793,	// (0x00016100) aid_zoom_text_secondary2

0xc62d,	// (0x00018f9a) list_cale_ev2_pane

0xc635,	// (0x00018fa2) scroll_pane_cp023_ParamLimits

0x4a95,	// (0x00011402) field_cale_ev2_pane_ParamLimits

0x4a95,	// (0x00011402) field_cale_ev2_pane

0x4ab5,	// (0x00011422) field_cale_ev2_pane_g1_ParamLimits

0x4ab5,	// (0x00011422) field_cale_ev2_pane_g1

0x4ac1,	// (0x0001142e) field_cale_ev2_pane_g2_ParamLimits

0x4ac1,	// (0x0001142e) field_cale_ev2_pane_g2

0x4ad9,	// (0x00011446) field_cale_ev2_pane_g3_ParamLimits

0x4ad9,	// (0x00011446) field_cale_ev2_pane_g3

0x0003,

0xf6ed,	// (0x0001c05a) field_cale_ev2_pane_g_ParamLimits

0xf6ed,	// (0x0001c05a) field_cale_ev2_pane_g

0x4af1,	// (0x0001145e) field_cale_ev2_pane_t1_ParamLimits

0x4af1,	// (0x0001145e) field_cale_ev2_pane_t1

0x4b08,	// (0x00011475) field_cale_ev2_pane_t2_ParamLimits

0x4b08,	// (0x00011475) field_cale_ev2_pane_t2

0x0001,

0xf6f6,	// (0x0001c063) field_cale_ev2_pane_t_ParamLimits

0xf6f6,	// (0x0001c063) field_cale_ev2_pane_t

0x3aa7,	// (0x00010414) main_postcard_pane_g5_ParamLimits

0x3aa7,	// (0x00010414) main_postcard_pane_g5

0x3abd,	// (0x0001042a) main_postcard_pane_g6_ParamLimits

0x3abd,	// (0x0001042a) main_postcard_pane_g6

0x97e4,	// (0x00016151) camera2_autofocus_pane_cp_ParamLimits

0x97e4,	// (0x00016151) camera2_autofocus_pane_cp

0x97e4,	// (0x00016151) main_mup3_pane

0x4b61,	// (0x000114ce) main_mup3_pane_g1_ParamLimits

0x4b61,	// (0x000114ce) main_mup3_pane_g1

0x4b83,	// (0x000114f0) main_mup3_pane_g2_ParamLimits

0x4b83,	// (0x000114f0) main_mup3_pane_g2

0x4c01,	// (0x0001156e) main_mup3_pane_g3_ParamLimits

0x4c01,	// (0x0001156e) main_mup3_pane_g3

0x4c47,	// (0x000115b4) main_mup3_pane_g4_ParamLimits

0x4c47,	// (0x000115b4) main_mup3_pane_g4

0x4c8d,	// (0x000115fa) main_mup3_pane_g5_ParamLimits

0x4c8d,	// (0x000115fa) main_mup3_pane_g5

0x4cd3,	// (0x00011640) main_mup3_pane_g6_ParamLimits

0x4cd3,	// (0x00011640) main_mup3_pane_g6

0x9ee9,	// (0x00016856) main_mup3_pane_g7_ParamLimits

0x9ee9,	// (0x00016856) main_mup3_pane_g7

0x0007,

0xf706,	// (0x0001c073) main_mup3_pane_g_ParamLimits

0xf706,	// (0x0001c073) main_mup3_pane_g

0x4d51,	// (0x000116be) main_mup3_pane_t1_ParamLimits

0x4d51,	// (0x000116be) main_mup3_pane_t1

0x4dc5,	// (0x00011732) main_mup3_pane_t2_ParamLimits

0x4dc5,	// (0x00011732) main_mup3_pane_t2

0x4e99,	// (0x00011806) main_mup3_pane_t4_ParamLimits

0x4e99,	// (0x00011806) main_mup3_pane_t4

0x4eef,	// (0x0001185c) main_mup3_pane_t5_ParamLimits

0x4eef,	// (0x0001185c) main_mup3_pane_t5

0x4fab,	// (0x00011918) main_mup3_pane_t6_ParamLimits

0x4fab,	// (0x00011918) main_mup3_pane_t6

0x0005,

0xf717,	// (0x0001c084) main_mup3_pane_t_ParamLimits

0xf717,	// (0x0001c084) main_mup3_pane_t

0x5063,	// (0x000119d0) mup3_progress_pane_ParamLimits

0x5063,	// (0x000119d0) mup3_progress_pane

0x50f9,	// (0x00011a66) popup_mup3_control_window_ParamLimits

0x50f9,	// (0x00011a66) popup_mup3_control_window

0xc84d,	// (0x000191ba) popup_mup3_text_window

0x512b,	// (0x00011a98) mup3_progress_pane_t1

0x514a,	// (0x00011ab7) mup3_progress_pane_t2

0xc855,	// (0x000191c2) mup3_progress_pane_t3

0x0002,

0xf724,	// (0x0001c091) mup3_progress_pane_t

0xc872,	// (0x000191df) mup_progress_pane_cp03

0x9775,	// (0x000160e2) bg_tb_trans_pane_cp04

0x5169,	// (0x00011ad6) mup3_volume_pane

0x5171,	// (0x00011ade) popup_mup3_control_window_g1

0x517a,	// (0x00011ae7) mup3_volume_pane_g1

0x5183,	// (0x00011af0) mup3_volume_pane_g2

0x518c,	// (0x00011af9) mup3_volume_pane_g3

0x0002,

0xf72b,	// (0x0001c098) mup3_volume_pane_g

0x9775,	// (0x000160e2) bg_tb_trans_pane_cp03

0xc882,	// (0x000191ef) popup_mup3_text_window_g1

0xc88a,	// (0x000191f7) popup_mup3_text_window_t1

0x9fc9,	// (0x00016936) list_calc_item_pane_g1_ParamLimits

0xc327,	// (0x00018c94) mup_volume_pane_cp_g1

0x4a59,	// (0x000113c6) main_touch_calib_pane_t3

0x4a6d,	// (0x000113da) main_touch_calib_pane_t4

0x4a81,	// (0x000113ee) main_touch_calib_pane_t5

0x977f,	// (0x000160ec) aid_cell_size_toolbar2

0x9787,	// (0x000160f4) aid_popup3_width_pane

0x9793,	// (0x00016100) aid_zoom_text_msg_primary

0x2223,	// (0x0000eb90) vorec_t7

0x9f8d,	// (0x000168fa) bg_calc_paper_pane_g1_ParamLimits

0x9f99,	// (0x00016906) bg_calc_paper_pane_g2_ParamLimits

0x9fa5,	// (0x00016912) bg_calc_paper_pane_g3_ParamLimits

0x9fb1,	// (0x0001691e) bg_calc_paper_pane_g4_ParamLimits

0x9fbd,	// (0x0001692a) bg_calc_paper_pane_g5_ParamLimits

0x1b39,	// (0x0000e4a6) bg_calc_paper_pane_g6_ParamLimits

0x1b48,	// (0x0000e4b5) bg_calc_paper_pane_g7_ParamLimits

0x1b57,	// (0x0000e4c4) bg_calc_paper_pane_g8_ParamLimits

0xf113,	// (0x0001ba80) bg_calc_paper_pane_g_ParamLimits

0x1b6a,	// (0x0000e4d7) calc_bg_paper_pane_g9_ParamLimits

0x97e4,	// (0x00016151) image_qvga_pane_ParamLimits

0x97e4,	// (0x00016151) image_qvga_pane

0x9e60,	// (0x000167cd) bg_popup_sub_pane_cp04_ParamLimits

0xafc3,	// (0x00017930) popup_mup_playback_window_g1_ParamLimits

0xafcf,	// (0x0001793c) popup_mup_playback_window_t1_ParamLimits

0xafe4,	// (0x00017951) popup_mup_playback_window_t2_ParamLimits

0xf471,	// (0x0001bdde) popup_mup_playback_window_t_ParamLimits

0x9ee9,	// (0x00016856) main_mup2_pane_g3_ParamLimits

0x9ee9,	// (0x00016856) main_mup2_pane_g3

0x2550,	// (0x0000eebd) popup_toolbar_window_cp04

0xb3c6,	// (0x00017d33) popup_call2_audio_second_window_g3_ParamLimits

0xb3c6,	// (0x00017d33) popup_call2_audio_second_window_g3

0xb7de,	// (0x0001814b) popup_call2_audio_first_window_g4_ParamLimits

0xb7de,	// (0x0001814b) popup_call2_audio_first_window_g4

0xbe05,	// (0x00018772) popup_call2_audio_in_window_g4_ParamLimits

0xbe05,	// (0x00018772) popup_call2_audio_in_window_g4

0x3bd4,	// (0x00010541) aid_area_sk_bg_cut_ParamLimits

0x3bd4,	// (0x00010541) aid_area_sk_bg_cut

0xaff9,	// (0x00017966) aid_area_sk_bg_cut_2_ParamLimits

0xaff9,	// (0x00017966) aid_area_sk_bg_cut_2

0x9775,	// (0x000160e2) aid_placing_details_win

0x9775,	// (0x000160e2) aid_placing_details_win_2

0x9edb,	// (0x00016848) camera2_autofocus_pane_g1_ParamLimits

0x1865,	// (0x0000e1d2) popup_fixed_preview_cale_window_ParamLimits

0x1865,	// (0x0000e1d2) popup_fixed_preview_cale_window

0xacd1,	// (0x0001763e) navi_slider_pane_g3

0xacda,	// (0x00017647) navi_slider_pane_g4

0xace3,	// (0x00017650) navi_slider_pane_g5

0xacd1,	// (0x0001763e) navi_slider_pane_g6

0xacec,	// (0x00017659) navi_slider_pane_g7

0xae2e,	// (0x0001779b) mup_scale_pane_g3

0xae37,	// (0x000177a4) mup_scale_pane_g4

0xae40,	// (0x000177ad) mup_scale_pane_g5

0x3901,	// (0x0001026e) mup_scale_pane_g6

0x390a,	// (0x00010277) mup_scale_pane_g7

0xa1f4,	// (0x00016b61) cams2_slider_pane_g3

0xa1f4,	// (0x00016b61) cams2_slider_pane_g4

0xa1f4,	// (0x00016b61) cams2_slider_pane_g5

0xa1f4,	// (0x00016b61) cams2_slider_pane_g6

0xa1f4,	// (0x00016b61) cams2_slider_pane_g7

0xa1f4,	// (0x00016b61) camera2_autofocus_pane_cp_g1

0xc0db,	// (0x00018a48) bg_popup_preview_window_pane_cp02_ParamLimits

0xc0db,	// (0x00018a48) bg_popup_preview_window_pane_cp02

0xc898,	// (0x00019205) list_fp_cale_pane_ParamLimits

0xc898,	// (0x00019205) list_fp_cale_pane

0xc8a4,	// (0x00019211) popup_fixed_preview_cale_window_t1_ParamLimits

0xc8a4,	// (0x00019211) popup_fixed_preview_cale_window_t1

0x5195,	// (0x00011b02) popup_fixed_preview_cale_window_t2_ParamLimits

0x5195,	// (0x00011b02) popup_fixed_preview_cale_window_t2

0x51aa,	// (0x00011b17) popup_fixed_preview_cale_window_t3_ParamLimits

0x51aa,	// (0x00011b17) popup_fixed_preview_cale_window_t3

0x0002,

0xf732,	// (0x0001c09f) popup_fixed_preview_cale_window_t_ParamLimits

0xf732,	// (0x0001c09f) popup_fixed_preview_cale_window_t

0x51bf,	// (0x00011b2c) list_single_fp_cale_pane_ParamLimits

0x51bf,	// (0x00011b2c) list_single_fp_cale_pane

0xc8c2,	// (0x0001922f) list_single_fp_cale_pane_g1_ParamLimits

0xc8c2,	// (0x0001922f) list_single_fp_cale_pane_g1

0xc8ce,	// (0x0001923b) list_single_fp_cale_pane_g2_ParamLimits

0xc8ce,	// (0x0001923b) list_single_fp_cale_pane_g2

0x0002,

0xf739,	// (0x0001c0a6) list_single_fp_cale_pane_g_ParamLimits

0xf739,	// (0x0001c0a6) list_single_fp_cale_pane_g

0xc8e7,	// (0x00019254) list_single_fp_cale_pane_t1_ParamLimits

0xc8e7,	// (0x00019254) list_single_fp_cale_pane_t1

0xc8f9,	// (0x00019266) list_single_fp_cale_pane_t2_ParamLimits

0xc8f9,	// (0x00019266) list_single_fp_cale_pane_t2

0x0001,

0xf740,	// (0x0001c0ad) list_single_fp_cale_pane_t_ParamLimits

0xf740,	// (0x0001c0ad) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x9775,	// (0x000160e2) main_dialer_pane

0x9775,	// (0x000160e2) aid_cell_size_keypad

0x9775,	// (0x000160e2) dialer_ne_pane

0x9775,	// (0x000160e2) grid_dialer_command_1_pane

0x9775,	// (0x000160e2) grid_dialer_command_2_pane

0x9775,	// (0x000160e2) grid_dialer_keypad_pane

0x51d4,	// (0x00011b41) bg_popup_call_pane_cp06_ParamLimits

0x51d4,	// (0x00011b41) bg_popup_call_pane_cp06

0x51d4,	// (0x00011b41) dialer_ne_clear_pane_ParamLimits

0x51d4,	// (0x00011b41) dialer_ne_clear_pane

0xa1f4,	// (0x00016b61) dialer_ne_pane_g1

0xadaa,	// (0x00017717) dialer_ne_pane_t1_ParamLimits

0xadaa,	// (0x00017717) dialer_ne_pane_t1

0x51e2,	// (0x00011b4f) dialer_ne_pane_t2_ParamLimits

0x51e2,	// (0x00011b4f) dialer_ne_pane_t2

0x520a,	// (0x00011b77) dialer_ne_pane_t3_ParamLimits

0x520a,	// (0x00011b77) dialer_ne_pane_t3

0x0002,

0xf745,	// (0x0001c0b2) dialer_ne_pane_t_ParamLimits

0xf745,	// (0x0001c0b2) dialer_ne_pane_t

0x520a,	// (0x00011b77) dialer_ne_pane_t3_copy1_ParamLimits

0x520a,	// (0x00011b77) dialer_ne_pane_t3_copy1

0xc92c,	// (0x00019299) cell_dialer_keypad_pane_ParamLimits

0xc92c,	// (0x00019299) cell_dialer_keypad_pane

0x97e4,	// (0x00016151) cell_dialer_command_1_pane_ParamLimits

0x97e4,	// (0x00016151) cell_dialer_command_1_pane

0xc943,	// (0x000192b0) cell_dialer_command_2_pane_ParamLimits

0xc943,	// (0x000192b0) cell_dialer_command_2_pane

0x97e4,	// (0x00016151) bg_button_pane_cp02_ParamLimits

0x97e4,	// (0x00016151) bg_button_pane_cp02

0x9edb,	// (0x00016848) cell_dialer_keypad_pane_g1_ParamLimits

0x9edb,	// (0x00016848) cell_dialer_keypad_pane_g1

0x97e4,	// (0x00016151) bg_button_pane_cp03_ParamLimits

0x97e4,	// (0x00016151) bg_button_pane_cp03

0x9edb,	// (0x00016848) cell_dialer_command_1_pane_g1_ParamLimits

0x9edb,	// (0x00016848) cell_dialer_command_1_pane_g1

0x9775,	// (0x000160e2) bg_button_pane_cp04

0xa1f4,	// (0x00016b61) cell_dialer_command_2_pane_g1

0x9775,	// (0x000160e2) bg_button_pane_cp06

0xa1f4,	// (0x00016b61) dialer_ne_clear_pane_g1

0xab9b,	// (0x00017508) navi_pane_g2

0xabc9,	// (0x00017536) navi_pane_g3

0x0002,

0xf374,	// (0x0001bce1) navi_pane_g

0xac58,	// (0x000175c5) navi_pane_mv_g2

0xac7f,	// (0x000175ec) navi_pane_mv_g5

0x36e4,	// (0x00010051) navi_pane_mv_t1

0x9f6f,	// (0x000168dc) main_clock2_pane

0x97e4,	// (0x00016151) main_clock2_list_pane_ParamLimits

0x97e4,	// (0x00016151) main_clock2_list_pane

0x52a0,	// (0x00011c0d) main_clock2_pane_t1_ParamLimits

0x52a0,	// (0x00011c0d) main_clock2_pane_t1

0x52db,	// (0x00011c48) main_clock2_pane_t2_ParamLimits

0x52db,	// (0x00011c48) main_clock2_pane_t2

0x0004,

0xf751,	// (0x0001c0be) main_clock2_pane_t_ParamLimits

0xf751,	// (0x0001c0be) main_clock2_pane_t

0x537b,	// (0x00011ce8) popup_clock_analogue_window_cp03_ParamLimits

0x537b,	// (0x00011ce8) popup_clock_analogue_window_cp03

0x53a0,	// (0x00011d0d) popup_clock_digital_window_cp02_ParamLimits

0x53a0,	// (0x00011d0d) popup_clock_digital_window_cp02

0x5419,	// (0x00011d86) main_clock2_list_single_pane_ParamLimits

0x5419,	// (0x00011d86) main_clock2_list_single_pane

0xa1b4,	// (0x00016b21) list_highlight_pane_cp05

0xc98a,	// (0x000192f7) main_clock2_list_single_pane_t1

0x2550,	// (0x0000eebd) popup_toolbar_window_cp04_ParamLimits

0x9ee9,	// (0x00016856) camera2_autofocus_pane_g2_ParamLimits

0x9ee9,	// (0x00016856) camera2_autofocus_pane_g2

0x9ee9,	// (0x00016856) camera2_autofocus_pane_g3_ParamLimits

0x9ee9,	// (0x00016856) camera2_autofocus_pane_g3

0x9ee9,	// (0x00016856) camera2_autofocus_pane_g4_ParamLimits

0x9ee9,	// (0x00016856) camera2_autofocus_pane_g4

0x9ee9,	// (0x00016856) camera2_autofocus_pane_g5_ParamLimits

0x9ee9,	// (0x00016856) camera2_autofocus_pane_g5

0x0004,

0xf695,	// (0x0001c002) camera2_autofocus_pane_g_ParamLimits

0xf695,	// (0x0001c002) camera2_autofocus_pane_g

0x4b1d,	// (0x0001148a) camera2_autofocus_pane_cp_g2

0x4b25,	// (0x00011492) camera2_autofocus_pane_cp_g3

0x4b2d,	// (0x0001149a) camera2_autofocus_pane_cp_g4

0x4b35,	// (0x000114a2) camera2_autofocus_pane_cp_g5

0x0004,

0xf6fb,	// (0x0001c068) camera2_autofocus_pane_cp_g

0x9775,	// (0x000160e2) popup_dialer_spcha_window

0x9775,	// (0x000160e2) bg_popup_sub_pane_cp07

0x9775,	// (0x000160e2) list_spcha_pane

0xc998,	// (0x00019305) list_single_spcha_pane_ParamLimits

0xc998,	// (0x00019305) list_single_spcha_pane

0x9775,	// (0x000160e2) list_highlight_pane_cp06

0xa75d,	// (0x000170ca) list_single_spcha_pane_t1

0xbbaf,	// (0x0001851c) popup_call2_audio_out_window_g4_ParamLimits

0xbbaf,	// (0x0001851c) popup_call2_audio_out_window_g4

0x9775,	// (0x000160e2) main_imed2_pane

0xc101,	// (0x00018a6e) popup_imed_adjust2_window

0x445d,	// (0x00010dca) popup_imed_trans_window_ParamLimits

0x445d,	// (0x00010dca) popup_imed_trans_window

0xc3fc,	// (0x00018d69) popup_blid_sat_info2_window_t1

0xc40a,	// (0x00018d77) popup_blid_sat_info2_window_t2

0x000a,

0xf62a,	// (0x0001bf97) popup_blid_sat_info2_window_t

0x54ca,	// (0x00011e37) aid_size_cell_colour_35

0x54ea,	// (0x00011e57) aid_size_cell_colour_112

0x550a,	// (0x00011e77) aid_size_cell_effect

0xadbe,	// (0x0001772b) bg_tb_trans_pane_cp02

0xa683,	// (0x00016ff0) heading_imed_pane

0x552a,	// (0x00011e97) listscroll_imed_pane

0xc9aa,	// (0x00019317) heading_imed_pane_g1

0xc9b2,	// (0x0001931f) heading_imed_pane_t1

0xc9c0,	// (0x0001932d) grid_imed_colour_35_pane_ParamLimits

0xc9c0,	// (0x0001932d) grid_imed_colour_35_pane

0x5536,	// (0x00011ea3) grid_imed_effect_pane

0xc9d7,	// (0x00019344) list_imed_aspect_pane

0x554c,	// (0x00011eb9) scroll_pane_cp027_ParamLimits

0x554c,	// (0x00011eb9) scroll_pane_cp027

0x555d,	// (0x00011eca) cell_imed_effect_pane_ParamLimits

0x555d,	// (0x00011eca) cell_imed_effect_pane

0xc9df,	// (0x0001934c) cell_imed_colour_pane_ParamLimits

0xc9df,	// (0x0001934c) cell_imed_colour_pane

0xca21,	// (0x0001938e) cell_imed_colour_pane_g1_ParamLimits

0xca21,	// (0x0001938e) cell_imed_colour_pane_g1

0xca32,	// (0x0001939f) hgihlgiht_grid_pane_cp016_ParamLimits

0xca32,	// (0x0001939f) hgihlgiht_grid_pane_cp016

0x5584,	// (0x00011ef1) cell_imed_effect_pane_g1

0x558c,	// (0x00011ef9) grid_highlight_pane_cp017

0xca43,	// (0x000193b0) list_imed_single_pane_ParamLimits

0xca43,	// (0x000193b0) list_imed_single_pane

0x9775,	// (0x000160e2) list_highlight_pane_cp07

0xca58,	// (0x000193c5) list_imed_aspect_pane_comp1_t1

0xadbe,	// (0x0001772b) bg_tb_trans_pane_cp05

0xca7a,	// (0x000193e7) popup_imed_adjust2_window_g1

0xcaa1,	// (0x0001940e) popup_imed_adjust2_window_t1

0xcab9,	// (0x00019426) slider_imed_adjust_pane

0xcacd,	// (0x0001943a) slider_imed_adjust_pane_g1

0xcadd,	// (0x0001944a) slider_imed_adjust_pane_g2

0xcaed,	// (0x0001945a) slider_imed_adjust_pane_g3

0xcafe,	// (0x0001946b) slider_imed_adjust_pane_g4

0x0003,

0xf76e,	// (0x0001c0db) slider_imed_adjust_pane_g

0x5595,	// (0x00011f02) aid_size_cell_clipart2

0x55a1,	// (0x00011f0e) grid_imed_clipart_pane

0xcb0f,	// (0x0001947c) scroll_pane_cp031

0x55ab,	// (0x00011f18) cell_imed_clipart_pane_ParamLimits

0x55ab,	// (0x00011f18) cell_imed_clipart_pane

0x55cd,	// (0x00011f3a) cell_imed_clipart_pane_g1

0x9775,	// (0x000160e2) grid_highlight_pane_cp014

0x527c,	// (0x00011be9) main_clock2_pane_g1_ParamLimits

0x527c,	// (0x00011be9) main_clock2_pane_g1

0x53c0,	// (0x00011d2d) aid_call2_pane_cp10

0x53d2,	// (0x00011d3f) aid_call_pane_cp10

0xaafc,	// (0x00017469) popup_clock_analogue_window_cp10_g1

0xaafc,	// (0x00017469) popup_clock_analogue_window_cp10_g2

0x53e4,	// (0x00011d51) popup_clock_analogue_window_cp10_g3

0x53e4,	// (0x00011d51) popup_clock_analogue_window_cp10_g4

0xaafc,	// (0x00017469) popup_clock_analogue_window_cp10_g5

0x0004,

0xf75c,	// (0x0001c0c9) popup_clock_analogue_window_cp10_g

0x53fa,	// (0x00011d67) popup_clock_analogue_window_cp10_t1

0x542b,	// (0x00011d98) clock_digital_number_pane_cp10_ParamLimits

0x542b,	// (0x00011d98) clock_digital_number_pane_cp10

0x5443,	// (0x00011db0) clock_digital_number_pane_cp11_ParamLimits

0x5443,	// (0x00011db0) clock_digital_number_pane_cp11

0x545b,	// (0x00011dc8) clock_digital_number_pane_cp12_ParamLimits

0x545b,	// (0x00011dc8) clock_digital_number_pane_cp12

0x5475,	// (0x00011de2) clock_digital_number_pane_cp13_ParamLimits

0x5475,	// (0x00011de2) clock_digital_number_pane_cp13

0x548f,	// (0x00011dfc) clock_digital_separator_pane_cp10_ParamLimits

0x548f,	// (0x00011dfc) clock_digital_separator_pane_cp10

0x54a9,	// (0x00011e16) popup_clock_digital_window_cp02_t1_ParamLimits

0x54a9,	// (0x00011e16) popup_clock_digital_window_cp02_t1

0x9e58,	// (0x000167c5) clock_digital_number_pane_cp10_g1

0x9e58,	// (0x000167c5) clock_digital_number_pane_cp10_g2

0x0001,

0xf777,	// (0x0001c0e4) clock_digital_number_pane_cp10_g

0x9e58,	// (0x000167c5) clock_digital_separator_pane_cp10_g1

0x9e58,	// (0x000167c5) clock_digital_separator_pane_g2_cp10

0xac87,	// (0x000175f4) navi_pane_vded_g4

0xac90,	// (0x000175fd) navi_pane_vded_g5

0xac99,	// (0x00017606) navi_pane_vded_t1

0x9775,	// (0x000160e2) main_vded_pane

0x55d6,	// (0x00011f43) main_vded_pane_g1

0x55e0,	// (0x00011f4d) main_vded_pane_g2

0x55ea,	// (0x00011f57) main_vded_pane_g3

0x0002,

0xf77c,	// (0x0001c0e9) main_vded_pane_g

0x55f4,	// (0x00011f61) main_vded_pane_t1

0x5602,	// (0x00011f6f) main_vded_pane_t2

0x0001,

0xf783,	// (0x0001c0f0) main_vded_pane_t

0x5610,	// (0x00011f7d) vded_slider_pane

0x5618,	// (0x00011f85) vded_video_pane

0xcb17,	// (0x00019484) vded_video_pane_g1

0x5620,	// (0x00011f8d) vded_video_pane_g2

0xa1f4,	// (0x00016b61) vded_video_pane_g3

0x0002,

0xf788,	// (0x0001c0f5) vded_video_pane_g

0xcb21,	// (0x0001948e) vded_slider_pane_g1

0xc327,	// (0x00018c94) vded_slider_pane_g2

0xcb2a,	// (0x00019497) vded_slider_pane_g3

0xcb33,	// (0x000194a0) vded_slider_pane_g4

0xcb3c,	// (0x000194a9) vded_slider_pane_g5

0x0004,

0xf78f,	// (0x0001c0fc) vded_slider_pane_g

0x50e1,	// (0x00011a4e) mup3_rocker_pane_ParamLimits

0x50e1,	// (0x00011a4e) mup3_rocker_pane

0x5629,	// (0x00011f96) mup3_control_keys_pane_g1

0x5631,	// (0x00011f9e) mup3_control_keys_pane_g2

0x5639,	// (0x00011fa6) mup3_control_keys_pane_g3

0x5641,	// (0x00011fae) mup3_control_keys_pane_g4

0x0003,

0xf79a,	// (0x0001c107) mup3_control_keys_pane_g

0x189c,	// (0x0000e209) popup_toolbar2_fixed_window_cp01_ParamLimits

0x189c,	// (0x0000e209) popup_toolbar2_fixed_window_cp01

0x5115,	// (0x00011a82) popup_toolbar2_fixed_window_cp02_ParamLimits

0x5115,	// (0x00011a82) popup_toolbar2_fixed_window_cp02

0xb538,	// (0x00017ea5) popup_call2_audio_second_window_t4_ParamLimits

0xb538,	// (0x00017ea5) popup_call2_audio_second_window_t4

0xba74,	// (0x000183e1) popup_call2_audio_first_window_t6_ParamLimits

0xba74,	// (0x000183e1) popup_call2_audio_first_window_t6

0xbcb2,	// (0x0001861f) popup_call2_audio_out_window_t6_ParamLimits

0xbcb2,	// (0x0001861f) popup_call2_audio_out_window_t6

0x9775,	// (0x000160e2) main_vitu_pane

0x97e4,	// (0x00016151) aid_size_cell_itu_ParamLimits

0x97e4,	// (0x00016151) aid_size_cell_itu

0x97e4,	// (0x00016151) bg_popup_window_pane_cp08_ParamLimits

0x97e4,	// (0x00016151) bg_popup_window_pane_cp08

0x97e4,	// (0x00016151) field_vitu_entry_pane_ParamLimits

0x97e4,	// (0x00016151) field_vitu_entry_pane

0x97e4,	// (0x00016151) grid_vitu_function_pane_ParamLimits

0x97e4,	// (0x00016151) grid_vitu_function_pane

0x97e4,	// (0x00016151) grid_vitu_itu_pane_ParamLimits

0x97e4,	// (0x00016151) grid_vitu_itu_pane

0x97e4,	// (0x00016151) cell_vitu_itu_pane_ParamLimits

0x97e4,	// (0x00016151) cell_vitu_itu_pane

0x97e4,	// (0x00016151) cell_vitu_function_pane_ParamLimits

0x97e4,	// (0x00016151) cell_vitu_function_pane

0x97e4,	// (0x00016151) bg_popup_sub_pane_cp08_ParamLimits

0x97e4,	// (0x00016151) bg_popup_sub_pane_cp08

0xa1c6,	// (0x00016b33) field_vitu_entry_pane_t1_ParamLimits

0xa1c6,	// (0x00016b33) field_vitu_entry_pane_t1

0xcb45,	// (0x000194b2) field_vitu_entry_pane_t2_ParamLimits

0xcb45,	// (0x000194b2) field_vitu_entry_pane_t2

0x0001,

0xf7a3,	// (0x0001c110) field_vitu_entry_pane_t_ParamLimits

0xf7a3,	// (0x0001c110) field_vitu_entry_pane_t

0xc24e,	// (0x00018bbb) bg_button_pane_cp05_ParamLimits

0xc24e,	// (0x00018bbb) bg_button_pane_cp05

0xcb62,	// (0x000194cf) cell_vitu_itu_pane_g1

0xad96,	// (0x00017703) cell_vitu_itu_pane_t1_ParamLimits

0xad96,	// (0x00017703) cell_vitu_itu_pane_t1

0xad96,	// (0x00017703) cell_vitu_itu_pane_t2_ParamLimits

0xad96,	// (0x00017703) cell_vitu_itu_pane_t2

0x0002,

0xf7a8,	// (0x0001c115) cell_vitu_itu_pane_t_ParamLimits

0xf7a8,	// (0x0001c115) cell_vitu_itu_pane_t

0x9775,	// (0x000160e2) bg_button_pane_cp07

0xa1f4,	// (0x00016b61) cell_vitu_function_pane_g1

0x9f19,	// (0x00016886) main_calc_pane_g1

0x16c3,	// (0x0000e030) aid_visual_content_pane

0x9775,	// (0x000160e2) main_vradio_pane

0x9edb,	// (0x00016848) main_vradio_pane_g1_ParamLimits

0x9edb,	// (0x00016848) main_vradio_pane_g1

0x9ee9,	// (0x00016856) main_vradio_pane_g2_ParamLimits

0x9ee9,	// (0x00016856) main_vradio_pane_g2

0x0001,

0xf7af,	// (0x0001c11c) main_vradio_pane_g_ParamLimits

0xf7af,	// (0x0001c11c) main_vradio_pane_g

0xa1c6,	// (0x00016b33) main_vradio_pane_t1_ParamLimits

0xa1c6,	// (0x00016b33) main_vradio_pane_t1

0xa1c6,	// (0x00016b33) main_vradio_pane_t2_ParamLimits

0xa1c6,	// (0x00016b33) main_vradio_pane_t2

0xadaa,	// (0x00017717) main_vradio_pane_t3_ParamLimits

0xadaa,	// (0x00017717) main_vradio_pane_t3

0x0002,

0xf7b4,	// (0x0001c121) main_vradio_pane_t_ParamLimits

0xf7b4,	// (0x0001c121) main_vradio_pane_t

0x97e4,	// (0x00016151) vradio_rocker_control_pane_ParamLimits

0x97e4,	// (0x00016151) vradio_rocker_control_pane

0x97e4,	// (0x00016151) vradio_station_info_pane_ParamLimits

0x97e4,	// (0x00016151) vradio_station_info_pane

0x97e4,	// (0x00016151) vradio_frequency_info_pane_ParamLimits

0x97e4,	// (0x00016151) vradio_frequency_info_pane

0xa1f4,	// (0x00016b61) vradio_station_info_pane_g1

0xad96,	// (0x00017703) vradio_station_info_pane_t1_ParamLimits

0xad96,	// (0x00017703) vradio_station_info_pane_t1

0xadaa,	// (0x00017717) vradio_station_info_pane_t2_ParamLimits

0xadaa,	// (0x00017717) vradio_station_info_pane_t2

0x0001,

0xf7bb,	// (0x0001c128) vradio_station_info_pane_t_ParamLimits

0xf7bb,	// (0x0001c128) vradio_station_info_pane_t

0x9775,	// (0x000160e2) vradio_tuning_pane

0x5651,	// (0x00011fbe) vradio_rocker_control_pane_g1

0xcb7e,	// (0x000194eb) vradio_rocker_control_pane_g2

0x565b,	// (0x00011fc8) vradio_rocker_control_pane_g3

0x5665,	// (0x00011fd2) vradio_rocker_control_pane_g4

0x566f,	// (0x00011fdc) vradio_rocker_control_pane_g5

0x0004,

0xf7c0,	// (0x0001c12d) vradio_rocker_control_pane_g

0xa1f4,	// (0x00016b61) vradio_frequency_info_pane_g1

0xa1c6,	// (0x00016b33) vradio_frequency_info_pane_t1_ParamLimits

0xa1c6,	// (0x00016b33) vradio_frequency_info_pane_t1

0x5679,	// (0x00011fe6) vradio_tuning_pane_g1

0x5686,	// (0x00011ff3) vradio_tuning_pane_t1

0x97a3,	// (0x00016110) area_side_right_pane_ParamLimits

0x97a3,	// (0x00016110) area_side_right_pane

0xc0a2,	// (0x00018a0f) status_small_pane_g1

0xc0aa,	// (0x00018a17) status_small_pane_g2

0xc0b3,	// (0x00018a20) status_small_pane_g3

0xc0bc,	// (0x00018a29) status_small_pane_g4

0x0003,

0xf58c,	// (0x0001bef9) status_small_pane_g

0xc0c5,	// (0x00018a32) status_small_pane_t1

0x9775,	// (0x000160e2) main_video3_pane

0xcb86,	// (0x000194f3) cams_zoom_vslider_pane

0xcb8e,	// (0x000194fb) image3_wide_pane_ParamLimits

0xcb8e,	// (0x000194fb) image3_wide_pane

0xcba8,	// (0x00019515) image3_wide_small_pane

0xcbb4,	// (0x00019521) main_video3_pane_g1_ParamLimits

0xcbb4,	// (0x00019521) main_video3_pane_g1

0xcbd0,	// (0x0001953d) main_video3_pane_g2_ParamLimits

0xcbd0,	// (0x0001953d) main_video3_pane_g2

0x0001,

0xf7cb,	// (0x0001c138) main_video3_pane_g_ParamLimits

0xf7cb,	// (0x0001c138) main_video3_pane_g

0xcbec,	// (0x00019559) main_video3_pane_t1_ParamLimits

0xcbec,	// (0x00019559) main_video3_pane_t1

0xcc33,	// (0x000195a0) main_video3_pane_t2_ParamLimits

0xcc33,	// (0x000195a0) main_video3_pane_t2

0xcc5e,	// (0x000195cb) main_video3_pane_t3_ParamLimits

0xcc5e,	// (0x000195cb) main_video3_pane_t3

0x0002,

0xf7d0,	// (0x0001c13d) main_video3_pane_t_ParamLimits

0xf7d0,	// (0x0001c13d) main_video3_pane_t

0xcc8b,	// (0x000195f8) cams_zoom_vslider_pane_g1

0xcc94,	// (0x00019601) cams_zoom_vslider_pane_g2

0x0001,

0xf7d7,	// (0x0001c144) cams_zoom_vslider_pane_g

0xcc9c,	// (0x00019609) small_slider_vertical_pane

0xa1f4,	// (0x00016b61) small_slider_vertical_pane_g1

0xa1f4,	// (0x00016b61) small_slider_vertical_pane_g2

0xcca4,	// (0x00019611) small_slider_vertical_pane_g3

0x0002,

0xf7dc,	// (0x0001c149) small_slider_vertical_pane_g

0x9775,	// (0x000160e2) main_hwr_training_pane

0xccad,	// (0x0001961a) hwr_training_instruct_pane_ParamLimits

0xccad,	// (0x0001961a) hwr_training_instruct_pane

0x5695,	// (0x00012002) hwr_training_navi_pane_ParamLimits

0x5695,	// (0x00012002) hwr_training_navi_pane

0x56b4,	// (0x00012021) hwr_training_write_pane_ParamLimits

0x56b4,	// (0x00012021) hwr_training_write_pane

0x9775,	// (0x000160e2) bg_frame_shadow_pane

0xcce4,	// (0x00019651) hwr_training_write_pane_g1

0xccec,	// (0x00019659) hwr_training_write_pane_g2

0xccf4,	// (0x00019661) hwr_training_write_pane_g3

0xccfc,	// (0x00019669) hwr_training_write_pane_g4

0xcd04,	// (0x00019671) hwr_training_write_pane_g5

0xcd0c,	// (0x00019679) hwr_training_write_pane_g6

0xcd14,	// (0x00019681) hwr_training_write_pane_g7

0x0006,

0xf7e3,	// (0x0001c150) hwr_training_write_pane_g

0xcd1c,	// (0x00019689) hwr_training_navi_pane_g1_ParamLimits

0xcd1c,	// (0x00019689) hwr_training_navi_pane_g1

0xcd2e,	// (0x0001969b) hwr_training_navi_pane_g2_ParamLimits

0xcd2e,	// (0x0001969b) hwr_training_navi_pane_g2

0xcd40,	// (0x000196ad) hwr_training_navi_pane_g3_ParamLimits

0xcd40,	// (0x000196ad) hwr_training_navi_pane_g3

0xcd50,	// (0x000196bd) hwr_training_navi_pane_g4_ParamLimits

0xcd50,	// (0x000196bd) hwr_training_navi_pane_g4

0x0004,

0xf7f2,	// (0x0001c15f) hwr_training_navi_pane_g_ParamLimits

0xf7f2,	// (0x0001c15f) hwr_training_navi_pane_g

0xcd5d,	// (0x000196ca) hwr_training_navi_pane_t1

0x56fc,	// (0x00012069) list_single_hwr_training_instruct_pane_ParamLimits

0x56fc,	// (0x00012069) list_single_hwr_training_instruct_pane

0xcd6b,	// (0x000196d8) list_single_hwr_training_instruct_pane_t1

0xc4fd,	// (0x00018e6a) bg_frame_shadow_pane_g1

0xcd7a,	// (0x000196e7) bg_frame_shadow_pane_g2

0xcd82,	// (0x000196ef) bg_frame_shadow_pane_g3

0xcd8a,	// (0x000196f7) bg_frame_shadow_pane_g4

0xcd92,	// (0x000196ff) bg_frame_shadow_pane_g5

0xcd9a,	// (0x00019707) bg_frame_shadow_pane_g6

0xcda2,	// (0x0001970f) bg_frame_shadow_pane_g7

0xa04b,	// (0x000169b8) bg_frame_shadow_pane_g8

0x0007,

0xf7fd,	// (0x0001c16a) bg_frame_shadow_pane_g

0x9775,	// (0x000160e2) main_video_tele_dialer_pane

0x5711,	// (0x0001207e) aid_size_cell_video_keypad_ParamLimits

0x5711,	// (0x0001207e) aid_size_cell_video_keypad

0x572b,	// (0x00012098) grid_video_dialer_keypad_pane_ParamLimits

0x572b,	// (0x00012098) grid_video_dialer_keypad_pane

0x5777,	// (0x000120e4) video_down_pane_cp_ParamLimits

0x5777,	// (0x000120e4) video_down_pane_cp

0x57a9,	// (0x00012116) cell_video_dialer_keypad_pane_ParamLimits

0x57a9,	// (0x00012116) cell_video_dialer_keypad_pane

0xcdaa,	// (0x00019717) bg_button_pane_cp08_ParamLimits

0xcdaa,	// (0x00019717) bg_button_pane_cp08

0x57cb,	// (0x00012138) cell_video_dialer_keypad_pane_g1_ParamLimits

0x57cb,	// (0x00012138) cell_video_dialer_keypad_pane_g1

0x50cb,	// (0x00011a38) mup3_rocker2_pane_ParamLimits

0x50cb,	// (0x00011a38) mup3_rocker2_pane

0xa1f4,	// (0x00016b61) mup3_rocker2_pane_g1

0x4332,	// (0x00010c9f) main_dialer2_pane

0x9775,	// (0x000160e2) main_mp4_pane

0xcdd4,	// (0x00019741) main_mp4_pane_g1_ParamLimits

0xcdd4,	// (0x00019741) main_mp4_pane_g1

0xcdd4,	// (0x00019741) main_mp4_pane_g2_ParamLimits

0xcdd4,	// (0x00019741) main_mp4_pane_g2

0x5802,	// (0x0001216f) main_mp4_pane_g3_ParamLimits

0x5802,	// (0x0001216f) main_mp4_pane_g3

0xcde2,	// (0x0001974f) main_mp4_pane_g4_ParamLimits

0xcde2,	// (0x0001974f) main_mp4_pane_g4

0xce10,	// (0x0001977d) main_mp4_pane_g5_ParamLimits

0xce10,	// (0x0001977d) main_mp4_pane_g5

0x0007,

0xf81d,	// (0x0001c18a) main_mp4_pane_g_ParamLimits

0xf81d,	// (0x0001c18a) main_mp4_pane_g

0xce84,	// (0x000197f1) main_mp4_pane_t1_ParamLimits

0xce84,	// (0x000197f1) main_mp4_pane_t1

0xcee0,	// (0x0001984d) main_mp4_pane_t2_ParamLimits

0xcee0,	// (0x0001984d) main_mp4_pane_t2

0xcf32,	// (0x0001989f) main_mp4_pane_t3_ParamLimits

0xcf32,	// (0x0001989f) main_mp4_pane_t3

0xcf58,	// (0x000198c5) main_mp4_pane_t4_ParamLimits

0xcf58,	// (0x000198c5) main_mp4_pane_t4

0x0003,

0xf82e,	// (0x0001c19b) main_mp4_pane_t_ParamLimits

0xf82e,	// (0x0001c19b) main_mp4_pane_t

0xcf9c,	// (0x00019909) mp4_progress_pane_ParamLimits

0xcf9c,	// (0x00019909) mp4_progress_pane

0xcfe6,	// (0x00019953) mp4_rocker_pane_ParamLimits

0xcfe6,	// (0x00019953) mp4_rocker_pane

0xd00e,	// (0x0001997b) mp4_progress_pane_t1

0xd027,	// (0x00019994) mp4_progress_pane_t2

0x0001,

0xf837,	// (0x0001c1a4) mp4_progress_pane_t

0xd040,	// (0x000199ad) mup_progress_pane_cp04

0xa1f4,	// (0x00016b61) mp4_rocker_pane_g1

0x583e,	// (0x000121ab) aid_cell_size_keypad2_ParamLimits

0x583e,	// (0x000121ab) aid_cell_size_keypad2

0x5854,	// (0x000121c1) dialer2_ne_pane_ParamLimits

0x5854,	// (0x000121c1) dialer2_ne_pane

0x586e,	// (0x000121db) grid_dialer2_keypad_pane_ParamLimits

0x586e,	// (0x000121db) grid_dialer2_keypad_pane

0xc24e,	// (0x00018bbb) bg_popup_call_pane_cp07_ParamLimits

0xc24e,	// (0x00018bbb) bg_popup_call_pane_cp07

0x588a,	// (0x000121f7) dialer2_ne_pane_t1_ParamLimits

0x588a,	// (0x000121f7) dialer2_ne_pane_t1

0x58c5,	// (0x00012232) cell_dialer2_keypad_pane_ParamLimits

0x58c5,	// (0x00012232) cell_dialer2_keypad_pane

0xd065,	// (0x000199d2) bg_button_pane_pane_cp04_ParamLimits

0xd065,	// (0x000199d2) bg_button_pane_pane_cp04

0x58e7,	// (0x00012254) cell_dialer2_keypad_pane_g1_ParamLimits

0x58e7,	// (0x00012254) cell_dialer2_keypad_pane_g1

0x2424,	// (0x0000ed91) aid_placing_vt_set_content_ParamLimits

0x2424,	// (0x0000ed91) aid_placing_vt_set_content

0x244c,	// (0x0000edb9) aid_placing_vt_set_title_ParamLimits

0x244c,	// (0x0000edb9) aid_placing_vt_set_title

0x9775,	// (0x000160e2) main_image3_pane

0x59ad,	// (0x0001231a) area_side_right_pane_cp01_ParamLimits

0x59ad,	// (0x0001231a) area_side_right_pane_cp01

0xcdd4,	// (0x00019741) main_image3_pane_g1_ParamLimits

0xcdd4,	// (0x00019741) main_image3_pane_g1

0x59c4,	// (0x00012331) main_image3_pane_g2_ParamLimits

0x59c4,	// (0x00012331) main_image3_pane_g2

0x59ec,	// (0x00012359) main_image3_pane_g3_ParamLimits

0x59ec,	// (0x00012359) main_image3_pane_g3

0x5a16,	// (0x00012383) main_image3_pane_g4_ParamLimits

0x5a16,	// (0x00012383) main_image3_pane_g4

0x0003,

0xf846,	// (0x0001c1b3) main_image3_pane_g_ParamLimits

0xf846,	// (0x0001c1b3) main_image3_pane_g

0x5a40,	// (0x000123ad) main_image3_pane_t1_ParamLimits

0x5a40,	// (0x000123ad) main_image3_pane_t1

0x5a98,	// (0x00012405) main_image3_pane_t2_ParamLimits

0x5a98,	// (0x00012405) main_image3_pane_t2

0x5aea,	// (0x00012457) main_image3_pane_t3_ParamLimits

0x5aea,	// (0x00012457) main_image3_pane_t3

0x0003,

0xf84f,	// (0x0001c1bc) main_image3_pane_t_ParamLimits

0xf84f,	// (0x0001c1bc) main_image3_pane_t

0x97e4,	// (0x00016151) grid_sctrl_middle_pane_cp01_ParamLimits

0x97e4,	// (0x00016151) grid_sctrl_middle_pane_cp01

0x5b72,	// (0x000124df) cell_sctrl_middle_pane_cp01_ParamLimits

0x5b72,	// (0x000124df) cell_sctrl_middle_pane_cp01

0x5b8f,	// (0x000124fc) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x5b8f,	// (0x000124fc) cell_sctrl_middle_pane_cp01_g1

0x9775,	// (0x000160e2) main_call4_pane

0x5ba5,	// (0x00012512) aid_size_button_call4_ParamLimits

0x5ba5,	// (0x00012512) aid_size_button_call4

0x5bd8,	// (0x00012545) call4_windows_pane_ParamLimits

0x5bd8,	// (0x00012545) call4_windows_pane

0x5bf7,	// (0x00012564) grid_call4_button_pane_ParamLimits

0x5bf7,	// (0x00012564) grid_call4_button_pane

0x5c2a,	// (0x00012597) call4_windows_conf_pane

0x5c41,	// (0x000125ae) popup_call4_audio_first_window_ParamLimits

0x5c41,	// (0x000125ae) popup_call4_audio_first_window

0x5c91,	// (0x000125fe) popup_call4_audio_second_window_ParamLimits

0x5c91,	// (0x000125fe) popup_call4_audio_second_window

0x5ca8,	// (0x00012615) popup_call4_audio_wait_window_ParamLimits

0x5ca8,	// (0x00012615) popup_call4_audio_wait_window

0x5cb6,	// (0x00012623) cell_call4_button_pane_ParamLimits

0x5cb6,	// (0x00012623) cell_call4_button_pane

0x5cdb,	// (0x00012648) bg_button_pane_cp09_ParamLimits

0x5cdb,	// (0x00012648) bg_button_pane_cp09

0x5ce7,	// (0x00012654) cell_call4_button_pane_g1_ParamLimits

0x5ce7,	// (0x00012654) cell_call4_button_pane_g1

0x5d0d,	// (0x0001267a) cell_call4_button_pane_t1_ParamLimits

0x5d0d,	// (0x0001267a) cell_call4_button_pane_t1

0xd0dd,	// (0x00019a4a) popup_call4_audio_conf_window_ParamLimits

0xd0dd,	// (0x00019a4a) popup_call4_audio_conf_window

0x512b,	// (0x00011a98) mup3_progress_pane_t1_ParamLimits

0x514a,	// (0x00011ab7) mup3_progress_pane_t2_ParamLimits

0xc855,	// (0x000191c2) mup3_progress_pane_t3_ParamLimits

0xf724,	// (0x0001c091) mup3_progress_pane_t_ParamLimits

0xc872,	// (0x000191df) mup_progress_pane_cp03_ParamLimits

0x5649,	// (0x00011fb6) mup3_control_keys_pane_g4_copy1

0xcfca,	// (0x00019937) mp4_rocker2_pane_ParamLimits

0xcfca,	// (0x00019937) mp4_rocker2_pane

0xd0f1,	// (0x00019a5e) mp4_rocker2_pane_g1

0xd0f9,	// (0x00019a66) mp4_rocker2_pane_g2

0xd101,	// (0x00019a6e) mp4_rocker2_pane_g3

0xd109,	// (0x00019a76) mp4_rocker2_pane_g4

0xd111,	// (0x00019a7e) mp4_rocker2_pane_g5

0x0004,

0xf858,	// (0x0001c1c5) mp4_rocker2_pane_g

0x9775,	// (0x000160e2) main_camera4_pane

0x9775,	// (0x000160e2) main_video4_pane

0x5745,	// (0x000120b2) main_video_tele_dialer_pane_t1_ParamLimits

0x5745,	// (0x000120b2) main_video_tele_dialer_pane_t1

0x575e,	// (0x000120cb) main_video_tele_dialer_pane_t2_ParamLimits

0x575e,	// (0x000120cb) main_video_tele_dialer_pane_t2

0x0001,

0xf80e,	// (0x0001c17b) main_video_tele_dialer_pane_t_ParamLimits

0xf80e,	// (0x0001c17b) main_video_tele_dialer_pane_t

0x5d4b,	// (0x000126b8) cam4_autofocus_pane_ParamLimits

0x5d4b,	// (0x000126b8) cam4_autofocus_pane

0x5d61,	// (0x000126ce) cam4_image_uncrop_pane_ParamLimits

0x5d61,	// (0x000126ce) cam4_image_uncrop_pane

0x5d7b,	// (0x000126e8) cam4_indicators_pane_ParamLimits

0x5d7b,	// (0x000126e8) cam4_indicators_pane

0x5da6,	// (0x00012713) main_camera4_pane_g1_ParamLimits

0x5da6,	// (0x00012713) main_camera4_pane_g1

0x5db8,	// (0x00012725) main_camera4_pane_g2_ParamLimits

0x5db8,	// (0x00012725) main_camera4_pane_g2

0x5dcb,	// (0x00012738) main_camera4_pane_g3_ParamLimits

0x5dcb,	// (0x00012738) main_camera4_pane_g3

0x5dde,	// (0x0001274b) main_camera4_pane_g4_ParamLimits

0x5dde,	// (0x0001274b) main_camera4_pane_g4

0x5df1,	// (0x0001275e) main_camera4_pane_g5_ParamLimits

0x5df1,	// (0x0001275e) main_camera4_pane_g5

0x0005,

0xf863,	// (0x0001c1d0) main_camera4_pane_g_ParamLimits

0xf863,	// (0x0001c1d0) main_camera4_pane_g

0x5e15,	// (0x00012782) main_camera4_pane_t1_ParamLimits

0x5e15,	// (0x00012782) main_camera4_pane_t1

0x9edb,	// (0x00016848) bg_tb_trans_pane_cp06

0xd13d,	// (0x00019aaa) cam4_indicators_pane_g1

0xd14e,	// (0x00019abb) cam4_indicators_pane_g2

0x0002,

0xf87e,	// (0x0001c1eb) cam4_indicators_pane_g

0xd16c,	// (0x00019ad9) cam4_indicators_pane_t1

0x5e79,	// (0x000127e6) main_video4_pane_g1_ParamLimits

0x5e79,	// (0x000127e6) main_video4_pane_g1

0x5e88,	// (0x000127f5) main_video4_pane_g2_ParamLimits

0x5e88,	// (0x000127f5) main_video4_pane_g2

0x5e97,	// (0x00012804) main_video4_pane_g3_ParamLimits

0x5e97,	// (0x00012804) main_video4_pane_g3

0x5ea6,	// (0x00012813) main_video4_pane_g4_ParamLimits

0x5ea6,	// (0x00012813) main_video4_pane_g4

0x0004,

0xf885,	// (0x0001c1f2) main_video4_pane_g_ParamLimits

0xf885,	// (0x0001c1f2) main_video4_pane_g

0x5ec4,	// (0x00012831) vid4_indicators_pane_ParamLimits

0x5ec4,	// (0x00012831) vid4_indicators_pane

0x5ef2,	// (0x0001285f) video4_image_uncrop_cif_pane_ParamLimits

0x5ef2,	// (0x0001285f) video4_image_uncrop_cif_pane

0x5f0c,	// (0x00012879) video4_image_uncrop_nhd_pane_ParamLimits

0x5f0c,	// (0x00012879) video4_image_uncrop_nhd_pane

0x5d61,	// (0x000126ce) video4_image_uncrop_vga_pane_ParamLimits

0x5d61,	// (0x000126ce) video4_image_uncrop_vga_pane

0x97e4,	// (0x00016151) bg_tb_trans_pane_cp07

0xd198,	// (0x00019b05) vid4_indicators_pane_g1

0xd1ac,	// (0x00019b19) vid4_indicators_pane_g2

0xd1c0,	// (0x00019b2d) vid4_indicators_pane_g3

0x0004,

0xf890,	// (0x0001c1fd) vid4_indicators_pane_g

0xd1ef,	// (0x00019b5c) vid4_indicators_pane_t1

0x5f20,	// (0x0001288d) cam4_autofocus_pane_g1

0x5f28,	// (0x00012895) cam4_autofocus_pane_g2

0x5f30,	// (0x0001289d) cam4_autofocus_pane_g3

0x0002,

0xf89b,	// (0x0001c208) cam4_autofocus_pane_g

0x5f38,	// (0x000128a5) cam4_autofocus_pane_g3_copy1

0x578d,	// (0x000120fa) video_down_pane_cp_t1

0x579b,	// (0x00012108) video_down_pane_cp_t2

0x0001,

0xf813,	// (0x0001c180) video_down_pane_cp_t

0x97e4,	// (0x00016151) popup_vitu2_window_ParamLimits

0x97e4,	// (0x00016151) popup_vitu2_window

0x5f40,	// (0x000128ad) aid_size_cell2_itu2_ParamLimits

0x5f40,	// (0x000128ad) aid_size_cell2_itu2

0x5f60,	// (0x000128cd) aid_size_cell_itu2_ParamLimits

0x5f60,	// (0x000128cd) aid_size_cell_itu2

0x51d4,	// (0x00011b41) bg_popup_window_pane_cp09_ParamLimits

0x51d4,	// (0x00011b41) bg_popup_window_pane_cp09

0x5fad,	// (0x0001291a) field_vitu2_entry_pane_ParamLimits

0x5fad,	// (0x0001291a) field_vitu2_entry_pane

0x5fd0,	// (0x0001293d) grid_vitu2_function_pane_ParamLimits

0x5fd0,	// (0x0001293d) grid_vitu2_function_pane

0x601b,	// (0x00012988) grid_vitu2_itu_pane_ParamLimits

0x601b,	// (0x00012988) grid_vitu2_itu_pane

0x60a9,	// (0x00012a16) cell_vitu2_itu_pane_ParamLimits

0x60a9,	// (0x00012a16) cell_vitu2_itu_pane

0x60d5,	// (0x00012a42) cell_vitu2_function_pane_ParamLimits

0x60d5,	// (0x00012a42) cell_vitu2_function_pane

0xd206,	// (0x00019b73) bg_popup_call_pane_cp08_ParamLimits

0xd206,	// (0x00019b73) bg_popup_call_pane_cp08

0xd21d,	// (0x00019b8a) field_vitu2_entry_pane_g1

0xd229,	// (0x00019b96) field_vitu2_entry_pane_g2

0x0002,

0xf8a2,	// (0x0001c20f) field_vitu2_entry_pane_g

0x6114,	// (0x00012a81) field_vitu2_entry_pane_t1_ParamLimits

0x6114,	// (0x00012a81) field_vitu2_entry_pane_t1

0xd235,	// (0x00019ba2) field_vitu2_entry_pane_t2_ParamLimits

0xd235,	// (0x00019ba2) field_vitu2_entry_pane_t2

0x0001,

0xf8a9,	// (0x0001c216) field_vitu2_entry_pane_t_ParamLimits

0xf8a9,	// (0x0001c216) field_vitu2_entry_pane_t

0x6144,	// (0x00012ab1) bg_button_pane_cp010_ParamLimits

0x6144,	// (0x00012ab1) bg_button_pane_cp010

0x6152,	// (0x00012abf) cell_vitu2_itu_pane_g1

0x6178,	// (0x00012ae5) cell_vitu2_itu_pane_t1_ParamLimits

0x6178,	// (0x00012ae5) cell_vitu2_itu_pane_t1

0x61d6,	// (0x00012b43) cell_vitu2_itu_pane_t2_ParamLimits

0x61d6,	// (0x00012b43) cell_vitu2_itu_pane_t2

0x0002,

0xf8b3,	// (0x0001c220) cell_vitu2_itu_pane_t_ParamLimits

0xf8b3,	// (0x0001c220) cell_vitu2_itu_pane_t

0x97e4,	// (0x00016151) bg_button_pane_cp011

0x62c2,	// (0x00012c2f) cell_vitu2_function_pane_g1

0x9775,	// (0x000160e2) main_myfav_hc_pane

0x5b3a,	// (0x000124a7) popup_image3_note_pane_ParamLimits

0x5b3a,	// (0x000124a7) popup_image3_note_pane

0x5b56,	// (0x000124c3) popup_image3_tool_bar_pane_ParamLimits

0x5b56,	// (0x000124c3) popup_image3_tool_bar_pane

0x6264,	// (0x00012bd1) cell_vitu2_itu_pane_t3_ParamLimits

0x6264,	// (0x00012bd1) cell_vitu2_itu_pane_t3

0x9775,	// (0x000160e2) bg_popup_trans_pane

0xd25a,	// (0x00019bc7) grid_image3_tool_bar_pane

0xd264,	// (0x00019bd1) bg_popup_trans_pane_g1

0xa405,	// (0x00016d72) bg_popup_trans_pane_g2

0xd26c,	// (0x00019bd9) bg_popup_trans_pane_g3

0xd274,	// (0x00019be1) bg_popup_trans_pane_g4

0xd27c,	// (0x00019be9) bg_popup_trans_pane_g5

0xd284,	// (0x00019bf1) bg_popup_trans_pane_g6

0xd28c,	// (0x00019bf9) bg_popup_trans_pane_g7

0xd294,	// (0x00019c01) bg_popup_trans_pane_g8

0xa3e5,	// (0x00016d52) bg_popup_trans_pane_g9

0x0008,

0xf8ba,	// (0x0001c227) bg_popup_trans_pane_g

0xd29c,	// (0x00019c09) cell_image3_tool_bar_pane_ParamLimits

0xd29c,	// (0x00019c09) cell_image3_tool_bar_pane

0xa1f4,	// (0x00016b61) cell_image3_tool_bar_pane_g1

0x9775,	// (0x000160e2) bg_popup_trans_pane_cp1

0xd2b0,	// (0x00019c1d) popup_image3_note_pane_t1

0xd2be,	// (0x00019c2b) popup_image3_note_pane_t2

0xd2cc,	// (0x00019c39) popup_image3_note_pane_t3

0x0002,

0xf8cd,	// (0x0001c23a) popup_image3_note_pane_t

0xd2da,	// (0x00019c47) popup_image3_note_pane_t3_copy1

0x62d6,	// (0x00012c43) bg_myfav_hc_instruction_pane_ParamLimits

0x62d6,	// (0x00012c43) bg_myfav_hc_instruction_pane

0x62ea,	// (0x00012c57) cell_myfav_contact_pane_ParamLimits

0x62ea,	// (0x00012c57) cell_myfav_contact_pane

0x6308,	// (0x00012c75) cell_myfav_contact_pane_cp1_ParamLimits

0x6308,	// (0x00012c75) cell_myfav_contact_pane_cp1

0x6320,	// (0x00012c8d) cell_myfav_contact_pane_cp2_ParamLimits

0x6320,	// (0x00012c8d) cell_myfav_contact_pane_cp2

0x6338,	// (0x00012ca5) cell_myfav_contact_pane_cp3_ParamLimits

0x6338,	// (0x00012ca5) cell_myfav_contact_pane_cp3

0x634f,	// (0x00012cbc) cell_myfav_contact_pane_cp4_ParamLimits

0x634f,	// (0x00012cbc) cell_myfav_contact_pane_cp4

0x6367,	// (0x00012cd4) cell_myfav_contact_pane_cp5_ParamLimits

0x6367,	// (0x00012cd4) cell_myfav_contact_pane_cp5

0x637b,	// (0x00012ce8) cell_myfav_contact_pane_cp6_ParamLimits

0x637b,	// (0x00012ce8) cell_myfav_contact_pane_cp6

0x6391,	// (0x00012cfe) cell_myfav_contact_pane_cp7_ParamLimits

0x6391,	// (0x00012cfe) cell_myfav_contact_pane_cp7

0xd2e8,	// (0x00019c55) listscroll_gen_pane_cp05

0x63ab,	// (0x00012d18) main_myfav_hc_pane_g1_ParamLimits

0x63ab,	// (0x00012d18) main_myfav_hc_pane_g1

0x63c5,	// (0x00012d32) main_myfav_hc_pane_g2_ParamLimits

0x63c5,	// (0x00012d32) main_myfav_hc_pane_g2

0x0002,

0xf8d4,	// (0x0001c241) main_myfav_hc_pane_g_ParamLimits

0xf8d4,	// (0x0001c241) main_myfav_hc_pane_g

0x63f7,	// (0x00012d64) main_myfav_hc_pane_t1_ParamLimits

0x63f7,	// (0x00012d64) main_myfav_hc_pane_t1

0xd2f1,	// (0x00019c5e) main_myfav_hc_pane_t2_ParamLimits

0xd2f1,	// (0x00019c5e) main_myfav_hc_pane_t2

0xd303,	// (0x00019c70) main_myfav_hc_pane_t3_ParamLimits

0xd303,	// (0x00019c70) main_myfav_hc_pane_t3

0x640e,	// (0x00012d7b) main_myfav_hc_pane_t4_ParamLimits

0x640e,	// (0x00012d7b) main_myfav_hc_pane_t4

0x0004,

0xf8db,	// (0x0001c248) main_myfav_hc_pane_t_ParamLimits

0xf8db,	// (0x0001c248) main_myfav_hc_pane_t

0xa1f4,	// (0x00016b61) bg_myfav_hc_instruction_pane_g1

0xd315,	// (0x00019c82) cell_myfav_contact_pane_g1_ParamLimits

0xd315,	// (0x00019c82) cell_myfav_contact_pane_g1

0xd315,	// (0x00019c82) cell_myfav_contact_pane_g2_ParamLimits

0xd315,	// (0x00019c82) cell_myfav_contact_pane_g2

0xd321,	// (0x00019c8e) cell_myfav_contact_pane_g3_ParamLimits

0xd321,	// (0x00019c8e) cell_myfav_contact_pane_g3

0x9ee9,	// (0x00016856) cell_myfav_contact_pane_g4_ParamLimits

0x9ee9,	// (0x00016856) cell_myfav_contact_pane_g4

0xd32e,	// (0x00019c9b) cell_myfav_contact_pane_g5_ParamLimits

0xd32e,	// (0x00019c9b) cell_myfav_contact_pane_g5

0x0004,

0xf8e6,	// (0x0001c253) cell_myfav_contact_pane_g_ParamLimits

0xf8e6,	// (0x0001c253) cell_myfav_contact_pane_g

0x63df,	// (0x00012d4c) main_myfav_hc_pane_g3_ParamLimits

0x63df,	// (0x00012d4c) main_myfav_hc_pane_g3

0x17fe,	// (0x0000e16b) popup_adpt_find_window

0x6436,	// (0x00012da3) afind_page_pane_ParamLimits

0x6436,	// (0x00012da3) afind_page_pane

0x644b,	// (0x00012db8) aid_size_cell_afind_ParamLimits

0x644b,	// (0x00012db8) aid_size_cell_afind

0x6469,	// (0x00012dd6) bg_popup_sub_pane_cp09_ParamLimits

0x6469,	// (0x00012dd6) bg_popup_sub_pane_cp09

0x6476,	// (0x00012de3) find_pane_cp01_ParamLimits

0x6476,	// (0x00012de3) find_pane_cp01

0xd33a,	// (0x00019ca7) grid_afind_control_pane_ParamLimits

0xd33a,	// (0x00019ca7) grid_afind_control_pane

0x6483,	// (0x00012df0) grid_afind_pane_ParamLimits

0x6483,	// (0x00012df0) grid_afind_pane

0x64a5,	// (0x00012e12) cell_afind_pane_ParamLimits

0x64a5,	// (0x00012e12) cell_afind_pane

0xa1f4,	// (0x00016b61) afind_page_pane_g1

0x650c,	// (0x00012e79) afind_page_pane_g2

0x6515,	// (0x00012e82) afind_page_pane_g3

0x0002,

0xf8f1,	// (0x0001c25e) afind_page_pane_g

0x651e,	// (0x00012e8b) afind_page_pane_t1

0xd34e,	// (0x00019cbb) cell_afind_grid_control_pane_ParamLimits

0xd34e,	// (0x00019cbb) cell_afind_grid_control_pane

0xd065,	// (0x000199d2) bg_button_pane_cp69_ParamLimits

0xd065,	// (0x000199d2) bg_button_pane_cp69

0x653e,	// (0x00012eab) cell_afind_pane_g1_ParamLimits

0x653e,	// (0x00012eab) cell_afind_pane_g1

0x654b,	// (0x00012eb8) cell_afind_pane_t1_ParamLimits

0x654b,	// (0x00012eb8) cell_afind_pane_t1

0xa1fe,	// (0x00016b6b) bg_button_pane_cp72

0xd35d,	// (0x00019cca) cell_afind_grid_control_pane_g1

0x3db1,	// (0x0001071e) aid_image_placing_area_ParamLimits

0x3db1,	// (0x0001071e) aid_image_placing_area

0x9edb,	// (0x00016848) field_vitu_entry_pane_g1_ParamLimits

0x9edb,	// (0x00016848) field_vitu_entry_pane_g1

0x9edb,	// (0x00016848) field_vitu_entry_pane_g2_ParamLimits

0x9edb,	// (0x00016848) field_vitu_entry_pane_g2

0x0001,

0xf201,	// (0x0001bb6e) field_vitu_entry_pane_g_ParamLimits

0xf201,	// (0x0001bb6e) field_vitu_entry_pane_g

0xcb62,	// (0x000194cf) cell_vitu_itu_pane_g1_ParamLimits

0xcb45,	// (0x000194b2) cell_vitu_itu_pane_t3_ParamLimits

0xcb45,	// (0x000194b2) cell_vitu_itu_pane_t3

0xd00e,	// (0x0001997b) mp4_progress_pane_t1_ParamLimits

0xd027,	// (0x00019994) mp4_progress_pane_t2_ParamLimits

0xf837,	// (0x0001c1a4) mp4_progress_pane_t_ParamLimits

0xd040,	// (0x000199ad) mup_progress_pane_cp04_ParamLimits

0x6422,	// (0x00012d8f) main_myfav_hc_pane_t5_ParamLimits

0x6422,	// (0x00012d8f) main_myfav_hc_pane_t5

0x979b,	// (0x00016108) aid_zoom_text_primary

0x17fe,	// (0x0000e16b) popup_adpt_find_window_ParamLimits

0x97e4,	// (0x00016151) main_cam_set_pane

0x5d92,	// (0x000126ff) cam4_zoom_pane_ParamLimits

0x5d92,	// (0x000126ff) cam4_zoom_pane

0x655d,	// (0x00012eca) main_cam_set_pane_g1_ParamLimits

0x655d,	// (0x00012eca) main_cam_set_pane_g1

0x656b,	// (0x00012ed8) main_cam_set_pane_g2_ParamLimits

0x656b,	// (0x00012ed8) main_cam_set_pane_g2

0x0001,

0xf8f8,	// (0x0001c265) main_cam_set_pane_g_ParamLimits

0xf8f8,	// (0x0001c265) main_cam_set_pane_g

0x658c,	// (0x00012ef9) main_cam_set_pane_t1_ParamLimits

0x658c,	// (0x00012ef9) main_cam_set_pane_t1

0x65a7,	// (0x00012f14) main_cset_listscroll_pane_ParamLimits

0x65a7,	// (0x00012f14) main_cset_listscroll_pane

0x65cd,	// (0x00012f3a) main_cset_slider_pane_ParamLimits

0x65cd,	// (0x00012f3a) main_cset_slider_pane

0xd36e,	// (0x00019cdb) main_cset_list_pane_ParamLimits

0xd36e,	// (0x00019cdb) main_cset_list_pane

0xd37e,	// (0x00019ceb) scroll_pane_cp028

0x65f3,	// (0x00012f60) aid_area_touch_slider

0x660f,	// (0x00012f7c) cset_slider_pane

0x6632,	// (0x00012f9f) main_cset_slider_pane_g1

0x6647,	// (0x00012fb4) main_cset_slider_pane_g2

0x0011,

0xf8fd,	// (0x0001c26a) main_cset_slider_pane_g

0xd3b7,	// (0x00019d24) main_cset_slider_pane_t1

0x6703,	// (0x00013070) main_cset_slider_pane_t2

0x671d,	// (0x0001308a) main_cset_slider_pane_t3

0x6737,	// (0x000130a4) main_cset_slider_pane_t4

0x6751,	// (0x000130be) main_cset_slider_pane_t5

0x676b,	// (0x000130d8) main_cset_slider_pane_t6

0x6780,	// (0x000130ed) main_cset_slider_pane_t7

0x000e,

0xf922,	// (0x0001c28f) main_cset_slider_pane_t

0x6884,	// (0x000131f1) cset_list_set_pane_ParamLimits

0x6884,	// (0x000131f1) cset_list_set_pane

0xd451,	// (0x00019dbe) aid_position_infowindow_above

0xd459,	// (0x00019dc6) aid_position_infowindow_below

0xd461,	// (0x00019dce) cset_list_set_pane_g1_ParamLimits

0xd461,	// (0x00019dce) cset_list_set_pane_g1

0xd46d,	// (0x00019dda) cset_list_set_pane_g3_ParamLimits

0xd46d,	// (0x00019dda) cset_list_set_pane_g3

0x0001,

0xf941,	// (0x0001c2ae) cset_list_set_pane_g_ParamLimits

0xf941,	// (0x0001c2ae) cset_list_set_pane_g

0xd47c,	// (0x00019de9) cset_list_set_pane_t1_ParamLimits

0xd47c,	// (0x00019de9) cset_list_set_pane_t1

0x97e4,	// (0x00016151) list_highlight_pane_cp021_ParamLimits

0x97e4,	// (0x00016151) list_highlight_pane_cp021

0xae2e,	// (0x0001779b) cset_slider_pane_g1

0xae40,	// (0x000177ad) cset_slider_pane_g2

0xae37,	// (0x000177a4) cset_slider_pane_g3

0x0002,

0xf946,	// (0x0001c2b3) cset_slider_pane_g

0xd491,	// (0x00019dfe) aid_area_touch_cam4_zoom

0xd499,	// (0x00019e06) cam4_zoom_cont_pane

0xd4a1,	// (0x00019e0e) cam4_zoom_pane_g1

0xd4a9,	// (0x00019e16) cam4_zoom_pane_g2

0x6896,	// (0x00013203) cam4_zoom_pane_g3

0x0002,

0xf94d,	// (0x0001c2ba) cam4_zoom_pane_g

0xd4b1,	// (0x00019e1e) cam4_zoom_cont_pane_g1

0xd4ba,	// (0x00019e27) cam4_zoom_cont_pane_g2

0xd4c3,	// (0x00019e30) cam4_zoom_cont_pane_g3

0x0002,

0xf954,	// (0x0001c2c1) cam4_zoom_cont_pane_g

0x5bc3,	// (0x00012530) call4_image_pane_ParamLimits

0x5bc3,	// (0x00012530) call4_image_pane

0x5c2a,	// (0x00012597) call4_windows_conf_pane_ParamLimits

0x5c6f,	// (0x000125dc) popup_call4_audio_in_window_ParamLimits

0x5c6f,	// (0x000125dc) popup_call4_audio_in_window

0x9775,	// (0x000160e2) bg_popup_call2_act_pane_cp02

0xd0d5,	// (0x00019a42) call4_list_conf_pane

0xa1f4,	// (0x00016b61) call4_image_pane_g1

0xa1f4,	// (0x00016b61) call4_image_pane_g2

0x0001,

0xf3d8,	// (0x0001bd45) call4_image_pane_g

0xd4cc,	// (0x00019e39) list_single_graphic_popup_conf4_pane_ParamLimits

0xd4cc,	// (0x00019e39) list_single_graphic_popup_conf4_pane

0x9775,	// (0x000160e2) list_highlight_pane_cp022

0xd4df,	// (0x00019e4c) list_single_graphic_popup_conf4_pane_g1

0xa9cc,	// (0x00017339) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf95b,	// (0x0001c2c8) list_single_graphic_popup_conf4_pane_g

0xd4e7,	// (0x00019e54) list_single_graphic_popup_conf4_pane_t1

0x2570,	// (0x0000eedd) popup_vtel_slider_window_ParamLimits

0x2570,	// (0x0000eedd) popup_vtel_slider_window

0xd053,	// (0x000199c0) dialer2_ne_pane_t2_ParamLimits

0xd053,	// (0x000199c0) dialer2_ne_pane_t2

0x0001,

0xf83c,	// (0x0001c1a9) dialer2_ne_pane_t_ParamLimits

0xf83c,	// (0x0001c1a9) dialer2_ne_pane_t

0xc24e,	// (0x00018bbb) bg_popup_sub_pane_cp010_ParamLimits

0xc24e,	// (0x00018bbb) bg_popup_sub_pane_cp010

0x689e,	// (0x0001320b) popup_vtel_slider_window_g1_ParamLimits

0x689e,	// (0x0001320b) popup_vtel_slider_window_g1

0x68b1,	// (0x0001321e) popup_vtel_slider_window_g2_ParamLimits

0x68b1,	// (0x0001321e) popup_vtel_slider_window_g2

0x0003,

0xf960,	// (0x0001c2cd) popup_vtel_slider_window_g_ParamLimits

0xf960,	// (0x0001c2cd) popup_vtel_slider_window_g

0x6907,	// (0x00013274) vtel_slider_pane_ParamLimits

0x6907,	// (0x00013274) vtel_slider_pane

0x6929,	// (0x00013296) vtel_slider_pane_g1_ParamLimits

0x6929,	// (0x00013296) vtel_slider_pane_g1

0x693d,	// (0x000132aa) vtel_slider_pane_g2_ParamLimits

0x693d,	// (0x000132aa) vtel_slider_pane_g2

0x6955,	// (0x000132c2) vtel_slider_pane_g3_ParamLimits

0x6955,	// (0x000132c2) vtel_slider_pane_g3

0x6929,	// (0x00013296) vtel_slider_pane_g4_ParamLimits

0x6929,	// (0x00013296) vtel_slider_pane_g4

0x696b,	// (0x000132d8) vtel_slider_pane_g5_ParamLimits

0x696b,	// (0x000132d8) vtel_slider_pane_g5

0x0004,

0xf969,	// (0x0001c2d6) vtel_slider_pane_g_ParamLimits

0xf969,	// (0x0001c2d6) vtel_slider_pane_g

0x97e4,	// (0x00016151) main_gallery2_pane

0x5f80,	// (0x000128ed) aid_size_row_itut2_dropdow_list_ParamLimits

0x5f80,	// (0x000128ed) aid_size_row_itut2_dropdow_list

0x5ff5,	// (0x00012962) grid_vitu2_function_top_pane_ParamLimits

0x5ff5,	// (0x00012962) grid_vitu2_function_top_pane

0x6057,	// (0x000129c4) popup_vitu2_dropdown_list_window_ParamLimits

0x6057,	// (0x000129c4) popup_vitu2_dropdown_list_window

0x607d,	// (0x000129ea) popup_vitu2_match_list_window

0x6981,	// (0x000132ee) cell_vitu2_function_top_pane_ParamLimits

0x6981,	// (0x000132ee) cell_vitu2_function_top_pane

0x699b,	// (0x00013308) cell_vitu2_function_top_pane_cp01_ParamLimits

0x699b,	// (0x00013308) cell_vitu2_function_top_pane_cp01

0x69b7,	// (0x00013324) cell_vitu2_function_top_wide_pane_ParamLimits

0x69b7,	// (0x00013324) cell_vitu2_function_top_wide_pane

0x97e4,	// (0x00016151) bg_button_pane_cp012

0x69d5,	// (0x00013342) cell_vitu2_function_top_pane_g1

0xd4fd,	// (0x00019e6a) bg_button_pane_cp013_ParamLimits

0xd4fd,	// (0x00019e6a) bg_button_pane_cp013

0x69e9,	// (0x00013356) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x69e9,	// (0x00013356) cell_vitu2_function_top_wide_pane_g1

0x97e4,	// (0x00016151) bg_popup_sub_pane_cp20

0x6a01,	// (0x0001336e) list_vitu2_match_list_pane

0xd264,	// (0x00019bd1) bg_popup_sub_pane_cp20_g1

0xd26c,	// (0x00019bd9) bg_popup_sub_pane_cp20_g2

0xa405,	// (0x00016d72) bg_popup_sub_pane_cp20_g3

0xd274,	// (0x00019be1) bg_popup_sub_pane_cp20_g4

0xa3e5,	// (0x00016d52) bg_popup_sub_pane_cp20_g5

0xd519,	// (0x00019e86) bg_popup_sub_pane_cp20_g6

0xd284,	// (0x00019bf1) bg_popup_sub_pane_cp20_g7

0xd28c,	// (0x00019bf9) bg_popup_sub_pane_cp20_g8

0xd294,	// (0x00019c01) bg_popup_sub_pane_cp20_g9

0x0008,

0xf974,	// (0x0001c2e1) bg_popup_sub_pane_cp20_g

0xd521,	// (0x00019e8e) list_vitu2_match_list_item_pane_ParamLimits

0xd521,	// (0x00019e8e) list_vitu2_match_list_item_pane

0xd533,	// (0x00019ea0) list_vitu2_match_list_item_pane_t1

0x9775,	// (0x000160e2) bg_popup_sub_pane_cp21

0xa1b4,	// (0x00016b21) grid_vitu2_dropdown_list_pane

0x6a19,	// (0x00013386) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x6a19,	// (0x00013386) cell_vitu2_dropdown_list_char_pane

0x6a3a,	// (0x000133a7) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x6a3a,	// (0x000133a7) cell_vitu2_dropdown_list_ctrl_pane

0xd541,	// (0x00019eae) cell_vitu2_dropdown_list_char_pane_g1

0xd54a,	// (0x00019eb7) cell_vitu2_dropdown_list_char_pane_g2

0xd553,	// (0x00019ec0) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xf987,	// (0x0001c2f4) cell_vitu2_dropdown_list_char_pane_g

0x6a64,	// (0x000133d1) cell_vitu2_dropdown_list_char_pane_t1

0x6a72,	// (0x000133df) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x6a72,	// (0x000133df) cell_vitu2_dropdown_list_ctrl_pane_g1

0x6a82,	// (0x000133ef) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x6a82,	// (0x000133ef) cell_vitu2_dropdown_list_ctrl_pane_g2

0x6a93,	// (0x00013400) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x6a93,	// (0x00013400) cell_vitu2_dropdown_list_ctrl_pane_g3

0x6aa3,	// (0x00013410) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x6aa3,	// (0x00013410) cell_vitu2_dropdown_list_ctrl_pane_g4

0x9edb,	// (0x00016848) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0x9edb,	// (0x00016848) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xf98e,	// (0x0001c2fb) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xf98e,	// (0x0001c2fb) cell_vitu2_dropdown_list_ctrl_pane_g

0x6abf,	// (0x0001342c) aid_size_cell_gallery2_ParamLimits

0x6abf,	// (0x0001342c) aid_size_cell_gallery2

0x6add,	// (0x0001344a) grid_gallery2_pane_ParamLimits

0x6add,	// (0x0001344a) grid_gallery2_pane

0x6af7,	// (0x00013464) scroll_pane_cp029_ParamLimits

0x6af7,	// (0x00013464) scroll_pane_cp029

0x6b08,	// (0x00013475) cell_gallery2_pane_ParamLimits

0x6b08,	// (0x00013475) cell_gallery2_pane

0xd55c,	// (0x00019ec9) cell_gallery2_pane_g2

0x6b67,	// (0x000134d4) cell_gallery2_pane_g3

0xd564,	// (0x00019ed1) cell_gallery2_pane_g4

0xd56c,	// (0x00019ed9) cell_gallery2_pane_g5

0xa1b4,	// (0x00016b21) grid_highlight_pane_cp10

0x607d,	// (0x000129ea) popup_vitu2_match_list_window_ParamLimits

0x6092,	// (0x000129ff) popup_vitu2_query_window_ParamLimits

0x6092,	// (0x000129ff) popup_vitu2_query_window

0x9775,	// (0x000160e2) bg_vitu2_candi_button_pane

0xd541,	// (0x00019eae) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xd54a,	// (0x00019eb7) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xd553,	// (0x00019ec0) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x6b6f,	// (0x000134dc) bg_button_pane_cp015

0x6b7f,	// (0x000134ec) bg_button_pane_cp016

0x6b92,	// (0x000134ff) bg_button_pane_cp017

0xadbe,	// (0x0001772b) bg_popup_sub_pane_cp22

0xd574,	// (0x00019ee1) popup_vitu2_query_window_g1

0x6bd5,	// (0x00013542) popup_vitu2_query_window_g2

0x0002,

0xf999,	// (0x0001c306) popup_vitu2_query_window_g

0x6bf4,	// (0x00013561) popup_vitu2_query_window_t1_ParamLimits

0x6bf4,	// (0x00013561) popup_vitu2_query_window_t1

0x6c29,	// (0x00013596) popup_vitu2_query_window_t2_ParamLimits

0x6c29,	// (0x00013596) popup_vitu2_query_window_t2

0x6c3b,	// (0x000135a8) popup_vitu2_query_window_t3_ParamLimits

0x6c3b,	// (0x000135a8) popup_vitu2_query_window_t3

0x6c63,	// (0x000135d0) popup_vitu2_query_window_t4_ParamLimits

0x6c63,	// (0x000135d0) popup_vitu2_query_window_t4

0x6c84,	// (0x000135f1) popup_vitu2_query_window_t5_ParamLimits

0x6c84,	// (0x000135f1) popup_vitu2_query_window_t5

0x0006,

0xf9a0,	// (0x0001c30d) popup_vitu2_query_window_t_ParamLimits

0xf9a0,	// (0x0001c30d) popup_vitu2_query_window_t

0xd366,	// (0x00019cd3) main_cset_text_pane

0x65f3,	// (0x00012f60) aid_area_touch_slider_ParamLimits

0x660f,	// (0x00012f7c) cset_slider_pane_ParamLimits

0x6632,	// (0x00012f9f) main_cset_slider_pane_g1_ParamLimits

0x6647,	// (0x00012fb4) main_cset_slider_pane_g2_ParamLimits

0xd387,	// (0x00019cf4) main_cset_slider_pane_g3_ParamLimits

0xd387,	// (0x00019cf4) main_cset_slider_pane_g3

0x665c,	// (0x00012fc9) main_cset_slider_pane_g4_ParamLimits

0x665c,	// (0x00012fc9) main_cset_slider_pane_g4

0x666b,	// (0x00012fd8) main_cset_slider_pane_g5_ParamLimits

0x666b,	// (0x00012fd8) main_cset_slider_pane_g5

0x6677,	// (0x00012fe4) main_cset_slider_pane_g6_ParamLimits

0x6677,	// (0x00012fe4) main_cset_slider_pane_g6

0xf8fd,	// (0x0001c26a) main_cset_slider_pane_g_ParamLimits

0xd3b7,	// (0x00019d24) main_cset_slider_pane_t1_ParamLimits

0x6703,	// (0x00013070) main_cset_slider_pane_t2_ParamLimits

0x671d,	// (0x0001308a) main_cset_slider_pane_t3_ParamLimits

0x6737,	// (0x000130a4) main_cset_slider_pane_t4_ParamLimits

0x6751,	// (0x000130be) main_cset_slider_pane_t5_ParamLimits

0x676b,	// (0x000130d8) main_cset_slider_pane_t6_ParamLimits

0x6780,	// (0x000130ed) main_cset_slider_pane_t7_ParamLimits

0x67aa,	// (0x00013117) main_cset_slider_pane_t8_ParamLimits

0x67aa,	// (0x00013117) main_cset_slider_pane_t8

0x67d2,	// (0x0001313f) main_cset_slider_pane_t9_ParamLimits

0x67d2,	// (0x0001313f) main_cset_slider_pane_t9

0x67fa,	// (0x00013167) main_cset_slider_pane_t10_ParamLimits

0x67fa,	// (0x00013167) main_cset_slider_pane_t10

0x6822,	// (0x0001318f) main_cset_slider_pane_t11_ParamLimits

0x6822,	// (0x0001318f) main_cset_slider_pane_t11

0x684a,	// (0x000131b7) main_cset_slider_pane_t12_ParamLimits

0x684a,	// (0x000131b7) main_cset_slider_pane_t12

0x6867,	// (0x000131d4) main_cset_slider_pane_t13_ParamLimits

0x6867,	// (0x000131d4) main_cset_slider_pane_t13

0xf922,	// (0x0001c28f) main_cset_slider_pane_t_ParamLimits

0x9775,	// (0x000160e2) bg_popup_sub_pane_cp011

0xd580,	// (0x00019eed) main_cset_text_pane_g1

0xd588,	// (0x00019ef5) main_cset_text_pane_t1

0xd596,	// (0x00019f03) main_cset_text_pane_t2

0xd5a4,	// (0x00019f11) main_cset_text_pane_t3

0xd5b2,	// (0x00019f1f) main_cset_text_pane_t4

0xd5c0,	// (0x00019f2d) main_cset_text_pane_t5

0xd5ce,	// (0x00019f3b) main_cset_text_pane_t6

0xd5dc,	// (0x00019f49) main_cset_text_pane_t7

0x0006,

0xf9af,	// (0x0001c31c) main_cset_text_pane_t

0x9775,	// (0x000160e2) main_cam4_burst_pane

0x9775,	// (0x000160e2) main_cam5_pane

0x652c,	// (0x00012e99) bg_button_pane_cp019

0x6535,	// (0x00012ea2) bg_button_pane_cp020

0xd393,	// (0x00019d00) main_cset_slider_pane_g7_ParamLimits

0xd393,	// (0x00019d00) main_cset_slider_pane_g7

0xd39f,	// (0x00019d0c) main_cset_slider_pane_g8_ParamLimits

0xd39f,	// (0x00019d0c) main_cset_slider_pane_g8

0x668b,	// (0x00012ff8) main_cset_slider_pane_g9_ParamLimits

0x668b,	// (0x00012ff8) main_cset_slider_pane_g9

0x6697,	// (0x00013004) main_cset_slider_pane_g10_ParamLimits

0x6697,	// (0x00013004) main_cset_slider_pane_g10

0x66a3,	// (0x00013010) main_cset_slider_pane_g11_ParamLimits

0x66a3,	// (0x00013010) main_cset_slider_pane_g11

0x66af,	// (0x0001301c) main_cset_slider_pane_g12_ParamLimits

0x66af,	// (0x0001301c) main_cset_slider_pane_g12

0x66bb,	// (0x00013028) main_cset_slider_pane_g13_ParamLimits

0x66bb,	// (0x00013028) main_cset_slider_pane_g13

0x66c7,	// (0x00013034) main_cset_slider_pane_g14_ParamLimits

0x66c7,	// (0x00013034) main_cset_slider_pane_g14

0x66d3,	// (0x00013040) main_cset_slider_pane_g15_ParamLimits

0x66d3,	// (0x00013040) main_cset_slider_pane_g15

0xd3df,	// (0x00019d4c) main_cset_slider_pane_t14_ParamLimits

0xd3df,	// (0x00019d4c) main_cset_slider_pane_t14

0xd418,	// (0x00019d85) main_cset_slider_pane_t15_ParamLimits

0xd418,	// (0x00019d85) main_cset_slider_pane_t15

0x6cfb,	// (0x00013668) aid_cam4_burst_size_cell_ParamLimits

0x6cfb,	// (0x00013668) aid_cam4_burst_size_cell

0x6d1b,	// (0x00013688) grid_cam4_burst_pane_ParamLimits

0x6d1b,	// (0x00013688) grid_cam4_burst_pane

0x6d53,	// (0x000136c0) linegrid_cam4_burst_pane_ParamLimits

0x6d53,	// (0x000136c0) linegrid_cam4_burst_pane

0xd5ea,	// (0x00019f57) scroll_pane_cp30_ParamLimits

0xd5ea,	// (0x00019f57) scroll_pane_cp30

0x6d77,	// (0x000136e4) cell_cam4_burst_pane_ParamLimits

0x6d77,	// (0x000136e4) cell_cam4_burst_pane

0xd5f6,	// (0x00019f63) linegrid_cam4_burst_pane_g1_ParamLimits

0xd5f6,	// (0x00019f63) linegrid_cam4_burst_pane_g1

0x6dc4,	// (0x00013731) linegrid_cam4_burst_pane_g2_ParamLimits

0x6dc4,	// (0x00013731) linegrid_cam4_burst_pane_g2

0xd603,	// (0x00019f70) linegrid_cam4_burst_pane_g3_ParamLimits

0xd603,	// (0x00019f70) linegrid_cam4_burst_pane_g3

0x0002,

0xf9be,	// (0x0001c32b) linegrid_cam4_burst_pane_g_ParamLimits

0xf9be,	// (0x0001c32b) linegrid_cam4_burst_pane_g

0x6dd5,	// (0x00013742) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x6dd5,	// (0x00013742) linegrid_cam4_burst_pane_g3_copy1

0xd610,	// (0x00019f7d) linegrid_cam4_burst_pane_g4_ParamLimits

0xd610,	// (0x00019f7d) linegrid_cam4_burst_pane_g4

0x6def,	// (0x0001375c) linegrid_cam4_burst_pane_g5_ParamLimits

0x6def,	// (0x0001375c) linegrid_cam4_burst_pane_g5

0x6e00,	// (0x0001376d) linegrid_cam4_burst_pane_g6_ParamLimits

0x6e00,	// (0x0001376d) linegrid_cam4_burst_pane_g6

0xd61d,	// (0x00019f8a) linegrid_cam4_burst_pane_g7_ParamLimits

0xd61d,	// (0x00019f8a) linegrid_cam4_burst_pane_g7

0x6e17,	// (0x00013784) cell_cam4_burst_pane_g1

0xd636,	// (0x00019fa3) main_cam5_pane_t1_ParamLimits

0xd636,	// (0x00019fa3) main_cam5_pane_t1

0xd648,	// (0x00019fb5) main_cam5_pane_t2_ParamLimits

0xd648,	// (0x00019fb5) main_cam5_pane_t2

0xd65a,	// (0x00019fc7) main_cam5_pane_t3_ParamLimits

0xd65a,	// (0x00019fc7) main_cam5_pane_t3

0xd66c,	// (0x00019fd9) main_cam5_pane_t4_ParamLimits

0xd66c,	// (0x00019fd9) main_cam5_pane_t4

0xd684,	// (0x00019ff1) main_cam5_pane_t5_ParamLimits

0xd684,	// (0x00019ff1) main_cam5_pane_t5

0xd698,	// (0x0001a005) main_cam5_pane_t6_ParamLimits

0xd698,	// (0x0001a005) main_cam5_pane_t6

0xd6ac,	// (0x0001a019) main_cam5_pane_t7_ParamLimits

0xd6ac,	// (0x0001a019) main_cam5_pane_t7

0xd6be,	// (0x0001a02b) main_cam5_pane_t8_ParamLimits

0xd6be,	// (0x0001a02b) main_cam5_pane_t8

0xd6da,	// (0x0001a047) main_cam5_pane_t9_ParamLimits

0xd6da,	// (0x0001a047) main_cam5_pane_t9

0xd6ec,	// (0x0001a059) main_cam5_pane_t10_ParamLimits

0xd6ec,	// (0x0001a059) main_cam5_pane_t10

0xd6fe,	// (0x0001a06b) main_cam5_pane_t11_ParamLimits

0xd6fe,	// (0x0001a06b) main_cam5_pane_t11

0xd710,	// (0x0001a07d) main_cam5_pane_t12_ParamLimits

0xd710,	// (0x0001a07d) main_cam5_pane_t12

0xd725,	// (0x0001a092) main_cam5_pane_t13_ParamLimits

0xd725,	// (0x0001a092) main_cam5_pane_t13

0x000c,

0xf9ca,	// (0x0001c337) main_cam5_pane_t_ParamLimits

0xf9ca,	// (0x0001c337) main_cam5_pane_t

0x1880,	// (0x0000e1ed) popup_scut_keymap_window_ParamLimits

0x1880,	// (0x0000e1ed) popup_scut_keymap_window

0x6e2a,	// (0x00013797) aid_size_cell_brow_shortcut

0xa1b4,	// (0x00016b21) bg_popup_window_pane_cp010

0x6e36,	// (0x000137a3) grid_scut_pane

0x6e42,	// (0x000137af) cell_scut_pane_ParamLimits

0x6e42,	// (0x000137af) cell_scut_pane

0x6e59,	// (0x000137c6) cell_scut_pane_g1

0xd742,	// (0x0001a0af) cell_scut_pane_t1

0xd751,	// (0x0001a0be) cell_scut_pane_t2

0x6e62,	// (0x000137cf) cell_scut_pane_t3

0x0002,

0xf9e5,	// (0x0001c352) cell_scut_pane_t

0x4ce4,	// (0x00011651) main_mup3_pane_g8_ParamLimits

0x4ce4,	// (0x00011651) main_mup3_pane_g8

0x5f97,	// (0x00012904) area_vitu2_query_pane_ParamLimits

0x5f97,	// (0x00012904) area_vitu2_query_pane

0x6ba5,	// (0x00013512) input_focus_pane_cp08

0xd760,	// (0x0001a0cd) area_vitu2_query_pane_g1

0x6e70,	// (0x000137dd) area_vitu2_query_pane_g2

0x0001,

0xf9ec,	// (0x0001c359) area_vitu2_query_pane_g

0x6e81,	// (0x000137ee) area_vitu2_query_pane_t1_ParamLimits

0x6e81,	// (0x000137ee) area_vitu2_query_pane_t1

0x6e95,	// (0x00013802) area_vitu2_query_pane_t2_ParamLimits

0x6e95,	// (0x00013802) area_vitu2_query_pane_t2

0x6ea9,	// (0x00013816) area_vitu2_query_pane_t3_ParamLimits

0x6ea9,	// (0x00013816) area_vitu2_query_pane_t3

0xd76c,	// (0x0001a0d9) area_vitu2_query_pane_t4_ParamLimits

0xd76c,	// (0x0001a0d9) area_vitu2_query_pane_t4

0xd794,	// (0x0001a101) area_vitu2_query_pane_t5_ParamLimits

0xd794,	// (0x0001a101) area_vitu2_query_pane_t5

0xd7bc,	// (0x0001a129) area_vitu2_query_pane_t6_ParamLimits

0xd7bc,	// (0x0001a129) area_vitu2_query_pane_t6

0x0006,

0xf9f1,	// (0x0001c35e) area_vitu2_query_pane_t_ParamLimits

0xf9f1,	// (0x0001c35e) area_vitu2_query_pane_t

0x6ed1,	// (0x0001383e) bg_button_pane_cp018

0x6edf,	// (0x0001384c) bg_button_pane_cp021

0x6eeb,	// (0x00013858) bg_button_pane_cp022

0x6efa,	// (0x00013867) input_focus_pane_cp09

0xab08,	// (0x00017475) aid_size_touch_mv_arrow_left

0xab31,	// (0x0001749e) aid_size_touch_mv_arrow_right

0x66eb,	// (0x00013058) main_cset_slider_pane_g16_ParamLimits

0x66eb,	// (0x00013058) main_cset_slider_pane_g16

0x66f7,	// (0x00013064) main_cset_slider_pane_g17_ParamLimits

0x66f7,	// (0x00013064) main_cset_slider_pane_g17

0x6e17,	// (0x00013784) cell_cam4_burst_pane_g1_ParamLimits

0x9775,	// (0x000160e2) compa_mode_pane

0x68c1,	// (0x0001322e) popup_vtel_slider_window_g3_ParamLimits

0x68c1,	// (0x0001322e) popup_vtel_slider_window_g3

0x68d8,	// (0x00013245) popup_vtel_slider_window_g4_ParamLimits

0x68d8,	// (0x00013245) popup_vtel_slider_window_g4

0x68ef,	// (0x0001325c) popup_vtel_slider_window_t1_ParamLimits

0x68ef,	// (0x0001325c) popup_vtel_slider_window_t1

0x9775,	// (0x000160e2) main_cl_pane

0xc101,	// (0x00018a6e) popup_imed_adjust2_window_ParamLimits

0xadbe,	// (0x0001772b) bg_tb_trans_pane_cp05_ParamLimits

0xca7a,	// (0x000193e7) popup_imed_adjust2_window_g1_ParamLimits

0xca89,	// (0x000193f6) popup_imed_adjust2_window_g2_ParamLimits

0xca89,	// (0x000193f6) popup_imed_adjust2_window_g2

0xca95,	// (0x00019402) popup_imed_adjust2_window_g3_ParamLimits

0xca95,	// (0x00019402) popup_imed_adjust2_window_g3

0x0002,

0xf767,	// (0x0001c0d4) popup_imed_adjust2_window_g_ParamLimits

0xf767,	// (0x0001c0d4) popup_imed_adjust2_window_g

0xcaa1,	// (0x0001940e) popup_imed_adjust2_window_t1_ParamLimits

0xcab9,	// (0x00019426) slider_imed_adjust_pane_ParamLimits

0xcacd,	// (0x0001943a) slider_imed_adjust_pane_g1_ParamLimits

0xcadd,	// (0x0001944a) slider_imed_adjust_pane_g2_ParamLimits

0xcaed,	// (0x0001945a) slider_imed_adjust_pane_g3_ParamLimits

0xcafe,	// (0x0001946b) slider_imed_adjust_pane_g4_ParamLimits

0xf76e,	// (0x0001c0db) slider_imed_adjust_pane_g_ParamLimits

0x5d33,	// (0x000126a0) aid_touch_area_cam4_ParamLimits

0x5d33,	// (0x000126a0) aid_touch_area_cam4

0xd119,	// (0x00019a86) battery_pane_cp01

0x5e02,	// (0x0001276f) main_camera4_pane_g6_ParamLimits

0x5e02,	// (0x0001276f) main_camera4_pane_g6

0x5e2c,	// (0x00012799) main_camera4_pane_t2_ParamLimits

0x5e2c,	// (0x00012799) main_camera4_pane_t2

0x0001,

0xf870,	// (0x0001c1dd) main_camera4_pane_t_ParamLimits

0xf870,	// (0x0001c1dd) main_camera4_pane_t

0x5e61,	// (0x000127ce) aid_touch_area_vid4_ParamLimits

0x5e61,	// (0x000127ce) aid_touch_area_vid4

0x5eb5,	// (0x00012822) main_video4_pane_g5_ParamLimits

0x5eb5,	// (0x00012822) main_video4_pane_g5

0x5eda,	// (0x00012847) vid4_progress_pane_ParamLimits

0x5eda,	// (0x00012847) vid4_progress_pane

0xd3ab,	// (0x00019d18) main_cset_slider_pane_g18_ParamLimits

0xd3ab,	// (0x00019d18) main_cset_slider_pane_g18

0xd62a,	// (0x00019f97) cell_cam4_burst_pane_g2_ParamLimits

0xd62a,	// (0x00019f97) cell_cam4_burst_pane_g2

0x0001,

0xf9c5,	// (0x0001c332) cell_cam4_burst_pane_g_ParamLimits

0xf9c5,	// (0x0001c332) cell_cam4_burst_pane_g

0x9f6f,	// (0x000168dc) bg_cl_pane_ParamLimits

0x9f6f,	// (0x000168dc) bg_cl_pane

0x6f09,	// (0x00013876) cl_header_pane_ParamLimits

0x6f09,	// (0x00013876) cl_header_pane

0x6f1d,	// (0x0001388a) cl_listscroll_pane_ParamLimits

0x6f1d,	// (0x0001388a) cl_listscroll_pane

0xd808,	// (0x0001a175) bg_cl_pane_g1

0xd810,	// (0x0001a17d) bg_cl_pane_g2

0xd818,	// (0x0001a185) bg_cl_pane_g3

0xd820,	// (0x0001a18d) bg_cl_pane_g4

0xd828,	// (0x0001a195) bg_cl_pane_g5

0xd830,	// (0x0001a19d) bg_cl_pane_g6

0xd838,	// (0x0001a1a5) bg_cl_pane_g7

0xd840,	// (0x0001a1ad) bg_cl_pane_g8

0xd848,	// (0x0001a1b5) bg_cl_pane_g9

0x0008,

0xfa00,	// (0x0001c36d) bg_cl_pane_g

0x6f2d,	// (0x0001389a) aid_height_cl_leading_ParamLimits

0x6f2d,	// (0x0001389a) aid_height_cl_leading

0x6f39,	// (0x000138a6) aid_height_cl_text_ParamLimits

0x6f39,	// (0x000138a6) aid_height_cl_text

0x97e4,	// (0x00016151) bg_cl_header_pane_ParamLimits

0x97e4,	// (0x00016151) bg_cl_header_pane

0x6f58,	// (0x000138c5) cl_header_pane_g1_ParamLimits

0x6f58,	// (0x000138c5) cl_header_pane_g1

0x6f6e,	// (0x000138db) cl_header_pane_t1_ParamLimits

0x6f6e,	// (0x000138db) cl_header_pane_t1

0xd850,	// (0x0001a1bd) cl_list_pane

0xd37e,	// (0x00019ceb) hc_scroll_pane_cp01

0xa3e5,	// (0x00016d52) bg_cl_header_pane_g1

0xd264,	// (0x00019bd1) bg_cl_header_pane_g2

0xa405,	// (0x00016d72) bg_cl_header_pane_g3

0xd274,	// (0x00019be1) bg_cl_header_pane_g4

0xd26c,	// (0x00019bd9) bg_cl_header_pane_g5

0xd519,	// (0x00019e86) bg_cl_header_pane_g6

0xd28c,	// (0x00019bf9) bg_cl_header_pane_g7

0xd294,	// (0x00019c01) bg_cl_header_pane_g8

0xd284,	// (0x00019bf1) bg_cl_header_pane_g9

0x0008,

0xfa13,	// (0x0001c380) bg_cl_header_pane_g

0x6f87,	// (0x000138f4) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x6f87,	// (0x000138f4) hc_cl_list_double_graphic_heading_pane

0x6f98,	// (0x00013905) hc_cl_list_single_graphic_pane_ParamLimits

0x6f98,	// (0x00013905) hc_cl_list_single_graphic_pane

0x6fae,	// (0x0001391b) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x6fae,	// (0x0001391b) hc_cl_list_single_graphic_pane_g1

0x6fba,	// (0x00013927) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x6fba,	// (0x00013927) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfa26,	// (0x0001c393) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfa26,	// (0x0001c393) hc_cl_list_single_graphic_pane_g

0x6fce,	// (0x0001393b) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x6fce,	// (0x0001393b) hc_cl_list_single_graphic_pane_t1

0x6fae,	// (0x0001391b) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x6fae,	// (0x0001391b) hc_cl_list_double_graphic_heading_pane_g1

0x6fe3,	// (0x00013950) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x6fe3,	// (0x00013950) hc_cl_list_double_graphic_heading_pane_g2

0x6ff7,	// (0x00013964) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x6ff7,	// (0x00013964) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfa2b,	// (0x0001c398) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfa2b,	// (0x0001c398) hc_cl_list_double_graphic_heading_pane_g

0x700b,	// (0x00013978) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x700b,	// (0x00013978) hc_cl_list_double_graphic_heading_pane_t1

0x7020,	// (0x0001398d) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x7020,	// (0x0001398d) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfa32,	// (0x0001c39f) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfa32,	// (0x0001c39f) hc_cl_list_double_graphic_heading_pane_t

0xd861,	// (0x0001a1ce) vid4_progress_pane_g1

0xd871,	// (0x0001a1de) vid4_progress_pane_g2

0x7035,	// (0x000139a2) vid4_progress_pane_g3

0xd881,	// (0x0001a1ee) vid4_progress_pane_g4

0x0004,

0xfa37,	// (0x0001c3a4) vid4_progress_pane_g

0x7047,	// (0x000139b4) vid4_progress_pane_t1

0xd899,	// (0x0001a206) vid4_progress_pane_t2

0x0002,

0xfa42,	// (0x0001c3af) vid4_progress_pane_t

0x705f,	// (0x000139cc) wait_bar_pane_cp07

0xc3b1,	// (0x00018d1e) blid_firmament_pane_ParamLimits

0xc3f4,	// (0x00018d61) popup_blid_sat_info2_window_g1

0xc418,	// (0x00018d85) popup_blid_sat_info2_window_t3

0xc426,	// (0x00018d93) popup_blid_sat_info2_window_t4

0xc434,	// (0x00018da1) popup_blid_sat_info2_window_t5

0xc442,	// (0x00018daf) popup_blid_sat_info2_window_t6

0xc452,	// (0x00018dbf) popup_blid_sat_info2_window_t7

0xc460,	// (0x00018dcd) popup_blid_sat_info2_window_t8

0xc46e,	// (0x00018ddb) popup_blid_sat_info2_window_t9

0xc47c,	// (0x00018de9) popup_blid_sat_info2_window_t10

0xc53d,	// (0x00018eaa) aid_firma_cardinal_ParamLimits

0xc551,	// (0x00018ebe) blid_firmament_pane_t1_ParamLimits

0xc568,	// (0x00018ed5) blid_firmament_pane_t2_ParamLimits

0xc57f,	// (0x00018eec) blid_firmament_pane_t3_ParamLimits

0xc596,	// (0x00018f03) blid_firmament_pane_t4_ParamLimits

0xf660,	// (0x0001bfcd) blid_firmament_pane_t_ParamLimits

0xc5ad,	// (0x00018f1a) blid_sat_info_pane_ParamLimits

0x97e4,	// (0x00016151) main_cam_set_pane_ParamLimits

0x54ca,	// (0x00011e37) aid_size_cell_colour_35_ParamLimits

0x54ea,	// (0x00011e57) aid_size_cell_colour_112_ParamLimits

0x550a,	// (0x00011e77) aid_size_cell_effect_ParamLimits

0xadbe,	// (0x0001772b) bg_tb_trans_pane_cp02_ParamLimits

0xa683,	// (0x00016ff0) heading_imed_pane_ParamLimits

0x552a,	// (0x00011e97) listscroll_imed_pane_ParamLimits

0xb7f0,	// (0x0001815d) popup_call2_audio_first_window_g5_ParamLimits

0xb7f0,	// (0x0001815d) popup_call2_audio_first_window_g5

0x594f,	// (0x000122bc) aid_size_touch_image3_arrow_left_ParamLimits

0x594f,	// (0x000122bc) aid_size_touch_image3_arrow_left

0x597b,	// (0x000122e8) aid_size_touch_image3_arrow_right_ParamLimits

0x597b,	// (0x000122e8) aid_size_touch_image3_arrow_right

0xd8ae,	// (0x0001a21b) vid4_progress_pane_t3

0x56cf,	// (0x0001203c) main_hwr_training_symbol_option_pane_ParamLimits

0x56cf,	// (0x0001203c) main_hwr_training_symbol_option_pane

0xcccf,	// (0x0001963c) popup_hwr_training_preview_window_ParamLimits

0xcccf,	// (0x0001963c) popup_hwr_training_preview_window

0x56ef,	// (0x0001205c) hwr_training_navi_pane_g5_ParamLimits

0x56ef,	// (0x0001205c) hwr_training_navi_pane_g5

0xd252,	// (0x00019bbf) popup_char_count_window

0x97e4,	// (0x00016151) bg_popup_sub_pane_cp20_ParamLimits

0x6a01,	// (0x0001336e) list_vitu2_match_list_pane_ParamLimits

0x6a0d,	// (0x0001337a) vitu2_page_scroll_pane_ParamLimits

0x6a0d,	// (0x0001337a) vitu2_page_scroll_pane

0xd8e5,	// (0x0001a252) list_single_hwr_training_symbol_option_pane_ParamLimits

0xd8e5,	// (0x0001a252) list_single_hwr_training_symbol_option_pane

0xd8f8,	// (0x0001a265) list_single_hwr_training_symbol_option_pane_g1

0xd900,	// (0x0001a26d) list_single_hwr_training_symbol_option_pane_t1

0xd90e,	// (0x0001a27b) bg_button_pane_cp023

0xd917,	// (0x0001a284) bg_button_pane_cp024

0xd94a,	// (0x0001a2b7) vitu2_page_scroll_pane_g1

0xd952,	// (0x0001a2bf) vitu2_page_scroll_pane_g2

0x0001,

0xfa49,	// (0x0001c3b6) vitu2_page_scroll_pane_g

0xd95a,	// (0x0001a2c7) vitu2_page_scroll_pane_t1

0xc327,	// (0x00018c94) popup_char_count_window_g1

0xd969,	// (0x0001a2d6) popup_char_count_window_g2

0xd972,	// (0x0001a2df) popup_char_count_window_g3

0x0002,

0xfa4e,	// (0x0001c3bb) popup_char_count_window_g

0xd97b,	// (0x0001a2e8) popup_char_count_window_t1

0x9775,	// (0x000160e2) main_vded2_pane

0xca66,	// (0x000193d3) aid_size_cell_imed_line

0xca70,	// (0x000193dd) grid_imed_line_width_pane

0xd1d1,	// (0x00019b3e) vid4_indicators_pane_g4

0xd989,	// (0x0001a2f6) cell_imed_line_width_pane_ParamLimits

0xd989,	// (0x0001a2f6) cell_imed_line_width_pane

0xd99d,	// (0x0001a30a) cell_imed_line_width_pane_g1

0xd9a6,	// (0x0001a313) cell_imed_line_width_pane_g2

0x0001,

0xfa55,	// (0x0001c3c2) cell_imed_line_width_pane_g

0x7086,	// (0x000139f3) main_vded2_pane_g1_ParamLimits

0x7086,	// (0x000139f3) main_vded2_pane_g1

0x709c,	// (0x00013a09) main_vded2_pane_g2_ParamLimits

0x709c,	// (0x00013a09) main_vded2_pane_g2

0x0001,

0xfa5a,	// (0x0001c3c7) main_vded2_pane_g_ParamLimits

0xfa5a,	// (0x0001c3c7) main_vded2_pane_g

0x70ae,	// (0x00013a1b) vded2_slider_pane_ParamLimits

0x70ae,	// (0x00013a1b) vded2_slider_pane

0x70be,	// (0x00013a2b) aid_size_touch_vded2_end

0x70c8,	// (0x00013a35) aid_size_touch_vded2_playhead

0xd9ae,	// (0x0001a31b) aid_size_touch_vded2_start

0xd9b6,	// (0x0001a323) vded2_slider_bg_pane

0xd9bf,	// (0x0001a32c) vded2_slider_pane_g1

0xd9c8,	// (0x0001a335) vded2_slider_pane_g2

0x70d2,	// (0x00013a3f) vded2_slider_pane_g3

0x0002,

0xfa5f,	// (0x0001c3cc) vded2_slider_pane_g

0xd9d0,	// (0x0001a33d) vded2_slider_bg_pane_g1

0xd9d9,	// (0x0001a346) vded2_slider_bg_pane_g2

0xd9e2,	// (0x0001a34f) vded2_slider_bg_pane_g3

0x0002,

0xfa66,	// (0x0001c3d3) vded2_slider_bg_pane_g

0x3a20,	// (0x0001038d) aid_postcard_touch_down_pane_ParamLimits

0x3a20,	// (0x0001038d) aid_postcard_touch_down_pane

0x3a36,	// (0x000103a3) aid_postcard_touch_up_pane_ParamLimits

0x3a36,	// (0x000103a3) aid_postcard_touch_up_pane

0x9775,	// (0x000160e2) main_blid2_pane

0xc0e7,	// (0x00018a54) popup_blid2_search_window

0x9775,	// (0x000160e2) blid2_gps_pane

0x9775,	// (0x000160e2) blid2_navig_pane

0x9775,	// (0x000160e2) blid2_search_pane

0x9775,	// (0x000160e2) blid2_tripm_pane

0x70dd,	// (0x00013a4a) blid2_search_pane_g1_ParamLimits

0x70dd,	// (0x00013a4a) blid2_search_pane_g1

0x70f7,	// (0x00013a64) blid2_search_pane_t1_ParamLimits

0x70f7,	// (0x00013a64) blid2_search_pane_t1

0x7109,	// (0x00013a76) aid_size_cell_blid2_gps_ParamLimits

0x7109,	// (0x00013a76) aid_size_cell_blid2_gps

0x7121,	// (0x00013a8e) blid2_gps_pane_g1_ParamLimits

0x7121,	// (0x00013a8e) blid2_gps_pane_g1

0x7135,	// (0x00013aa2) grid_blid2_satellite_pane_ParamLimits

0x7135,	// (0x00013aa2) grid_blid2_satellite_pane

0x714f,	// (0x00013abc) blid2_navig_pane_g1_ParamLimits

0x714f,	// (0x00013abc) blid2_navig_pane_g1

0x715b,	// (0x00013ac8) blid2_navig_pane_t1_ParamLimits

0x715b,	// (0x00013ac8) blid2_navig_pane_t1

0x7176,	// (0x00013ae3) blid2_navig_pane_t2_ParamLimits

0x7176,	// (0x00013ae3) blid2_navig_pane_t2

0x0001,

0xfa6d,	// (0x0001c3da) blid2_navig_pane_t_ParamLimits

0xfa6d,	// (0x0001c3da) blid2_navig_pane_t

0x7191,	// (0x00013afe) blid2_navig_ring_pane_ParamLimits

0x7191,	// (0x00013afe) blid2_navig_ring_pane

0x71aa,	// (0x00013b17) blid2_speed_pane_ParamLimits

0x71aa,	// (0x00013b17) blid2_speed_pane

0x71b6,	// (0x00013b23) blid2_tripm_pane_g1_ParamLimits

0x71b6,	// (0x00013b23) blid2_tripm_pane_g1

0x71cf,	// (0x00013b3c) blid2_tripm_pane_g2_ParamLimits

0x71cf,	// (0x00013b3c) blid2_tripm_pane_g2

0x71e3,	// (0x00013b50) blid2_tripm_pane_g3_ParamLimits

0x71e3,	// (0x00013b50) blid2_tripm_pane_g3

0x71f7,	// (0x00013b64) blid2_tripm_pane_g4_ParamLimits

0x71f7,	// (0x00013b64) blid2_tripm_pane_g4

0x720b,	// (0x00013b78) blid2_tripm_pane_g5_ParamLimits

0x720b,	// (0x00013b78) blid2_tripm_pane_g5

0x0005,

0xfa72,	// (0x0001c3df) blid2_tripm_pane_g_ParamLimits

0xfa72,	// (0x0001c3df) blid2_tripm_pane_g

0x7231,	// (0x00013b9e) blid2_tripm_pane_t1_ParamLimits

0x7231,	// (0x00013b9e) blid2_tripm_pane_t1

0x724c,	// (0x00013bb9) blid2_tripm_pane_t2_ParamLimits

0x724c,	// (0x00013bb9) blid2_tripm_pane_t2

0x7265,	// (0x00013bd2) blid2_tripm_pane_t3_ParamLimits

0x7265,	// (0x00013bd2) blid2_tripm_pane_t3

0x0003,

0xfa7f,	// (0x0001c3ec) blid2_tripm_pane_t_ParamLimits

0xfa7f,	// (0x0001c3ec) blid2_tripm_pane_t

0x72ac,	// (0x00013c19) cell_blid2_satellite_pane_ParamLimits

0x72ac,	// (0x00013c19) cell_blid2_satellite_pane

0x72ca,	// (0x00013c37) cell_blid2_satellite_pane_g1

0xd9eb,	// (0x0001a358) cell_blid2_satellite_pane_t1

0xa1f4,	// (0x00016b61) blid2_speed_pane_g1

0xd9f9,	// (0x0001a366) blid2_speed_pane_t1

0xda07,	// (0x0001a374) blid2_speed_pane_t2

0x0001,

0xfa88,	// (0x0001c3f5) blid2_speed_pane_t

0xa1f4,	// (0x00016b61) blid2_navig_ring_pane_g1

0x72d3,	// (0x00013c40) blid2_navig_ring_pane_g2

0x72db,	// (0x00013c48) blid2_navig_ring_pane_g3

0x72e3,	// (0x00013c50) blid2_navig_ring_pane_g4

0x72eb,	// (0x00013c58) blid2_navig_ring_pane_g5

0x0004,

0xfa8d,	// (0x0001c3fa) blid2_navig_ring_pane_g

0x9775,	// (0x000160e2) bg_popup_window_pane_cp011

0xda15,	// (0x0001a382) popup_blid2_search_window_g1

0xda1d,	// (0x0001a38a) popup_blid2_search_window_t1

0xda2b,	// (0x0001a398) popup_blid2_search_window_t2

0x0001,

0xfa98,	// (0x0001c405) popup_blid2_search_window_t

0xa2f4,	// (0x00016c61) main_browser_pane_g1

0x9f6f,	// (0x000168dc) main_browser_pane_ParamLimits

0x97e4,	// (0x00016151) bg_button_pane_cp011_ParamLimits

0x62c2,	// (0x00012c2f) cell_vitu2_function_pane_g1_ParamLimits

0xadbe,	// (0x0001772b) bg_popup_sub_pane_cp22_ParamLimits

0x6ba5,	// (0x00013512) input_focus_pane_cp08_ParamLimits

0x6bbc,	// (0x00013529) popup_vitu2_query_button_pane_ParamLimits

0x6bbc,	// (0x00013529) popup_vitu2_query_button_pane

0x6bcd,	// (0x0001353a) popup_vitu2_query_input_button_pane

0xd574,	// (0x00019ee1) popup_vitu2_query_window_g1_ParamLimits

0x6bd5,	// (0x00013542) popup_vitu2_query_window_g2_ParamLimits

0xf999,	// (0x0001c306) popup_vitu2_query_window_g_ParamLimits

0x9775,	// (0x000160e2) bg_button_pane_cp026

0x72f3,	// (0x00013c60) popup_vitu2_query_input_button_pane_g1

0x9775,	// (0x000160e2) bg_button_pane_cp025

0xda39,	// (0x0001a3a6) popup_vitu2_query_button_pane_t1

0x494d,	// (0x000112ba) main_mp3_pane_t6

0x495b,	// (0x000112c8) popup_slider_window_cp01

0xd135,	// (0x00019aa2) cam4_battery_pane

0xd18e,	// (0x00019afb) cam4_battery_pane_cp02

0xd859,	// (0x0001a1c6) cam4_battery_pane_cp01

0xd859,	// (0x0001a1c6) cam4_battery_pane_cp03

0xa1f4,	// (0x00016b61) cam4_battery_pane_g1

0xda47,	// (0x0001a3b4) cam4_battery_pane_g2

0x0001,

0xfa9d,	// (0x0001c40a) cam4_battery_pane_g

0xc48a,	// (0x00018df7) popup_blid_sat_info2_window_t11

0xab08,	// (0x00017475) aid_size_touch_mv_arrow_left_ParamLimits

0xab31,	// (0x0001749e) aid_size_touch_mv_arrow_right_ParamLimits

0xab8f,	// (0x000174fc) navi_pane_g1_ParamLimits

0xab9b,	// (0x00017508) navi_pane_g2_ParamLimits

0xabc9,	// (0x00017536) navi_pane_g3_ParamLimits

0xf374,	// (0x0001bce1) navi_pane_g_ParamLimits

0x36e4,	// (0x00010051) navi_pane_mv_t1_ParamLimits

0x5536,	// (0x00011ea3) grid_imed_effect_pane_ParamLimits

0x246d,	// (0x0000edda) aid_placing_vt_slider_lsc

0xa243,	// (0x00016bb0) aid_placing_vt_slider_prt

0x97e4,	// (0x00016151) bg_tb_trans_pane_cp01_ParamLimits

0xc70a,	// (0x00019077) popup_image_details_window_g1_ParamLimits

0xc71d,	// (0x0001908a) popup_image_details_window_g2_ParamLimits

0xc732,	// (0x0001909f) popup_image_details_window_g3_ParamLimits

0xc732,	// (0x0001909f) popup_image_details_window_g3

0xf6a0,	// (0x0001c00d) popup_image_details_window_g_ParamLimits

0xc746,	// (0x000190b3) popup_image_details_window_t1_ParamLimits

0xc758,	// (0x000190c5) popup_image_details_window_t2_ParamLimits

0xc771,	// (0x000190de) popup_image_details_window_t3_ParamLimits

0xc785,	// (0x000190f2) popup_image_details_window_t4_ParamLimits

0xc7a0,	// (0x0001910d) popup_image_details_window_t5_ParamLimits

0xf6a7,	// (0x0001c014) popup_image_details_window_t_ParamLimits

0x6f45,	// (0x000138b2) cl_header_name_pane_ParamLimits

0x6f45,	// (0x000138b2) cl_header_name_pane

0x72fb,	// (0x00013c68) cl_header_name_pane_t1_ParamLimits

0x72fb,	// (0x00013c68) cl_header_name_pane_t1

0x731c,	// (0x00013c89) cl_header_name_pane_t2_ParamLimits

0x731c,	// (0x00013c89) cl_header_name_pane_t2

0x735e,	// (0x00013ccb) cl_header_name_pane_t3_ParamLimits

0x735e,	// (0x00013ccb) cl_header_name_pane_t3

0x0002,

0xfaa2,	// (0x0001c40f) cl_header_name_pane_t_ParamLimits

0xfaa2,	// (0x0001c40f) cl_header_name_pane_t

0xac58,	// (0x000175c5) navi_pane_mv_g2_ParamLimits

0xd21d,	// (0x00019b8a) field_vitu2_entry_pane_g1_ParamLimits

0xd229,	// (0x00019b96) field_vitu2_entry_pane_g2_ParamLimits

0xad88,	// (0x000176f5) field_vitu2_entry_pane_g3_ParamLimits

0xad88,	// (0x000176f5) field_vitu2_entry_pane_g3

0xf8a2,	// (0x0001c20f) field_vitu2_entry_pane_g_ParamLimits

0x6152,	// (0x00012abf) cell_vitu2_itu_pane_g1_ParamLimits

0x616a,	// (0x00012ad7) cell_vitu2_itu_pane_g2_ParamLimits

0x616a,	// (0x00012ad7) cell_vitu2_itu_pane_g2

0x0001,

0xf8ae,	// (0x0001c21b) cell_vitu2_itu_pane_g_ParamLimits

0xf8ae,	// (0x0001c21b) cell_vitu2_itu_pane_g

0x97e4,	// (0x00016151) bg_vkb2_func_pane_cp05_ParamLimits

0x97e4,	// (0x00016151) bg_vkb2_func_pane_cp05

0x97e4,	// (0x00016151) bg_vkb2_func_pane_cp03

0x97e4,	// (0x00016151) bg_vkb2_func_pane_cp04

0x97e4,	// (0x00016151) bg_vkb2_func_pane_cp10_ParamLimits

0x97e4,	// (0x00016151) bg_vkb2_func_pane_cp10

0x6eeb,	// (0x00013858) bg_vkb2_func_pane_cp08

0x6ed1,	// (0x0001383e) bg_vkb2_func_pane_cp06

0x6edf,	// (0x0001384c) bg_vkb2_func_pane_cp07

0xd920,	// (0x0001a28d) bg_vkb2_func_pane_cp11_ParamLimits

0xd920,	// (0x0001a28d) bg_vkb2_func_pane_cp11

0xd935,	// (0x0001a2a2) bg_vkb2_func_pane_cp12_ParamLimits

0xd935,	// (0x0001a2a2) bg_vkb2_func_pane_cp12

0x9775,	// (0x000160e2) bg_vkb2_func_pane_cp09

0xd264,	// (0x00019bd1) bg_vkb2_func_pane_g1

0xa405,	// (0x00016d72) bg_vkb2_func_pane_g2

0xd26c,	// (0x00019bd9) bg_vkb2_func_pane_g3

0xd274,	// (0x00019be1) bg_vkb2_func_pane_g4

0xd519,	// (0x00019e86) bg_vkb2_func_pane_g5

0xd28c,	// (0x00019bf9) bg_vkb2_func_pane_g6

0xd294,	// (0x00019c01) bg_vkb2_func_pane_g7

0xd284,	// (0x00019bf1) bg_vkb2_func_pane_g8

0xa3e5,	// (0x00016d52) bg_vkb2_func_pane_g9

0x0008,

0xfaa9,	// (0x0001c416) bg_vkb2_func_pane_g

0x721f,	// (0x00013b8c) blid2_tripm_pane_g6_ParamLimits

0x721f,	// (0x00013b8c) blid2_tripm_pane_g6

0xd006,	// (0x00019973) mp4_progress_pane_g1

0x7298,	// (0x00013c05) blid2_tripm_values_pane_ParamLimits

0x7298,	// (0x00013c05) blid2_tripm_values_pane

0x738f,	// (0x00013cfc) blid2_tripm_values_pane_t1

0x739d,	// (0x00013d0a) blid2_tripm_values_pane_t2

0x73ab,	// (0x00013d18) blid2_tripm_values_pane_t3

0x73b9,	// (0x00013d26) blid2_tripm_values_pane_t4

0x73c7,	// (0x00013d34) blid2_tripm_values_pane_t5

0x73d5,	// (0x00013d42) blid2_tripm_values_pane_t6

0x73e3,	// (0x00013d50) blid2_tripm_values_pane_t7

0x73f1,	// (0x00013d5e) blid2_tripm_values_pane_t8

0x73ff,	// (0x00013d6c) blid2_tripm_values_pane_t9

0x0008,

0xfabc,	// (0x0001c429) blid2_tripm_values_pane_t

0x24af,	// (0x0000ee1c) call_video_pane_t1_ParamLimits

0x24cd,	// (0x0000ee3a) call_video_pane_t2_ParamLimits

0xf222,	// (0x0001bb8f) call_video_pane_t_ParamLimits

0x399e,	// (0x0001030b) msg_header_pane_g1_ParamLimits

0xae7b,	// (0x000177e8) msg_header_pane_g2_ParamLimits

0xae7b,	// (0x000177e8) msg_header_pane_g2

0x0001,

0xf417,	// (0x0001bd84) msg_header_pane_g_ParamLimits

0xf417,	// (0x0001bd84) msg_header_pane_g

0x9f6f,	// (0x000168dc) main_clock2_pane_ParamLimits

0x5237,	// (0x00011ba4) grid_clock2_toolbar_pane_ParamLimits

0x5237,	// (0x00011ba4) grid_clock2_toolbar_pane

0x5237,	// (0x00011ba4) listscroll_clock2_pane_ParamLimits

0x5237,	// (0x00011ba4) listscroll_clock2_pane

0x531b,	// (0x00011c88) main_clock2_pane_t3_ParamLimits

0x531b,	// (0x00011c88) main_clock2_pane_t3

0x533f,	// (0x00011cac) main_clock2_pane_t4_ParamLimits

0x533f,	// (0x00011cac) main_clock2_pane_t4

0xda51,	// (0x0001a3be) cell_clock2_toolbar_pane

0xda59,	// (0x0001a3c6) cell_clock2_toolbar_pane_cp01

0xda59,	// (0x0001a3c6) cell_clock2_toolbar_pane_cp02

0xda61,	// (0x0001a3ce) cell_clock2_toolbar_pane_cp03

0xda69,	// (0x0001a3d6) list_clock2_pane

0xaa7e,	// (0x000173eb) scroll_pane_cp10

0xda71,	// (0x0001a3de) list_single_clock2_pane_ParamLimits

0xda71,	// (0x0001a3de) list_single_clock2_pane

0xa1b4,	// (0x00016b21) list_highlight_pane_cp08

0xda7e,	// (0x0001a3eb) list_single_clock2_pane_t1

0xda8c,	// (0x0001a3f9) list_single_clock2_pane_t2

0x0001,

0xfacf,	// (0x0001c43c) list_single_clock2_pane_t

0x9775,	// (0x000160e2) bg_button_pane_cp10

0xda9a,	// (0x0001a407) cell_clock2_toolbar_pane_g1

0x39ac,	// (0x00010319) aid_main_viewer_pane_g1_ParamLimits

0x39ac,	// (0x00010319) aid_main_viewer_pane_g1

0x39ba,	// (0x00010327) aid_main_viewer_pane_g2_ParamLimits

0x39ba,	// (0x00010327) aid_main_viewer_pane_g2

0x39c8,	// (0x00010335) aid_main_viewer_pane_g3_ParamLimits

0x39c8,	// (0x00010335) aid_main_viewer_pane_g3

0x39d7,	// (0x00010344) aid_main_viewer_pane_g4_ParamLimits

0x39d7,	// (0x00010344) aid_main_viewer_pane_g4

0x0003,

0xf428,	// (0x0001bd95) aid_main_viewer_pane_g_ParamLimits

0xf428,	// (0x0001bd95) aid_main_viewer_pane_g

0x431e,	// (0x00010c8b) main_calc_pane_ParamLimits

0x4332,	// (0x00010c9f) main_dialer2_pane_ParamLimits

0x9775,	// (0x000160e2) main_cam6_pane

0x9775,	// (0x000160e2) main_vid6_pane

0x5243,	// (0x00011bb0) listscroll_gen_pane_cp06_ParamLimits

0x5243,	// (0x00011bb0) listscroll_gen_pane_cp06

0x5362,	// (0x00011ccf) main_clock2_pane_t5_ParamLimits

0x5362,	// (0x00011ccf) main_clock2_pane_t5

0x53c0,	// (0x00011d2d) aid_call2_pane_cp10_ParamLimits

0x53d2,	// (0x00011d3f) aid_call_pane_cp10_ParamLimits

0xaafc,	// (0x00017469) popup_clock_analogue_window_cp10_g1_ParamLimits

0xaafc,	// (0x00017469) popup_clock_analogue_window_cp10_g2_ParamLimits

0x53e4,	// (0x00011d51) popup_clock_analogue_window_cp10_g3_ParamLimits

0x53e4,	// (0x00011d51) popup_clock_analogue_window_cp10_g4_ParamLimits

0xaafc,	// (0x00017469) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf75c,	// (0x0001c0c9) popup_clock_analogue_window_cp10_g_ParamLimits

0x53fa,	// (0x00011d67) popup_clock_analogue_window_cp10_t1_ParamLimits

0x58fc,	// (0x00012269) cell_dialer2_keypad_pane_g2_ParamLimits

0x58fc,	// (0x00012269) cell_dialer2_keypad_pane_g2

0x0001,

0xf841,	// (0x0001c1ae) cell_dialer2_keypad_pane_g_ParamLimits

0xf841,	// (0x0001c1ae) cell_dialer2_keypad_pane_g

0x5918,	// (0x00012285) cell_dialer2_keypad_pane_t1

0x65e5,	// (0x00012f52) main_cset_text2_pane_ParamLimits

0x65e5,	// (0x00012f52) main_cset_text2_pane

0xd760,	// (0x0001a0cd) area_vitu2_query_pane_g1_ParamLimits

0x6e70,	// (0x000137dd) area_vitu2_query_pane_g2_ParamLimits

0xf9ec,	// (0x0001c359) area_vitu2_query_pane_g_ParamLimits

0xd7e4,	// (0x0001a151) area_vitu2_query_pane_t7_ParamLimits

0xd7e4,	// (0x0001a151) area_vitu2_query_pane_t7

0x6ed1,	// (0x0001383e) bg_button_pane_cp018_ParamLimits

0x6edf,	// (0x0001384c) bg_button_pane_cp021_ParamLimits

0x6eeb,	// (0x00013858) bg_button_pane_cp022_ParamLimits

0x6eeb,	// (0x00013858) bg_vkb2_func_pane_cp08_ParamLimits

0x6ed1,	// (0x0001383e) bg_vkb2_func_pane_cp06_ParamLimits

0x6edf,	// (0x0001384c) bg_vkb2_func_pane_cp07_ParamLimits

0x6efa,	// (0x00013867) input_focus_pane_cp09_ParamLimits

0xdaa2,	// (0x0001a40f) cam6_autofocus_pane_ParamLimits

0xdaa2,	// (0x0001a40f) cam6_autofocus_pane

0x740d,	// (0x00013d7a) cam6_image_uncrop_pane_ParamLimits

0x740d,	// (0x00013d7a) cam6_image_uncrop_pane

0x741c,	// (0x00013d89) cam6_indi_pane_ParamLimits

0x741c,	// (0x00013d89) cam6_indi_pane

0x7432,	// (0x00013d9f) cam6_mode_pane_ParamLimits

0x7432,	// (0x00013d9f) cam6_mode_pane

0x7444,	// (0x00013db1) cam6_timer_pane_ParamLimits

0x7444,	// (0x00013db1) cam6_timer_pane

0x7450,	// (0x00013dbd) cam6_zoom_pane_ParamLimits

0x7450,	// (0x00013dbd) cam6_zoom_pane

0x745c,	// (0x00013dc9) cam6_mode_pane_g1_ParamLimits

0x745c,	// (0x00013dc9) cam6_mode_pane_g1

0x746c,	// (0x00013dd9) cam6_mode_pane_g2_ParamLimits

0x746c,	// (0x00013dd9) cam6_mode_pane_g2

0x747c,	// (0x00013de9) cam6_mode_pane_g3_ParamLimits

0x747c,	// (0x00013de9) cam6_mode_pane_g3

0x748c,	// (0x00013df9) cam6_mode_pane_g4_ParamLimits

0x748c,	// (0x00013df9) cam6_mode_pane_g4

0x0003,

0xfad4,	// (0x0001c441) cam6_mode_pane_g_ParamLimits

0xfad4,	// (0x0001c441) cam6_mode_pane_g

0xcc25,	// (0x00019592) bg_tb_trans_pane_cp08_ParamLimits

0xcc25,	// (0x00019592) bg_tb_trans_pane_cp08

0xdab0,	// (0x0001a41d) cam6_battery_pane_ParamLimits

0xdab0,	// (0x0001a41d) cam6_battery_pane

0xdac6,	// (0x0001a433) cam6_indi_pane_g1_ParamLimits

0xdac6,	// (0x0001a433) cam6_indi_pane_g1

0xdad8,	// (0x0001a445) cam6_indi_pane_g2_ParamLimits

0xdad8,	// (0x0001a445) cam6_indi_pane_g2

0xdaea,	// (0x0001a457) cam6_indi_pane_g3_ParamLimits

0xdaea,	// (0x0001a457) cam6_indi_pane_g3

0x0002,

0xfadd,	// (0x0001c44a) cam6_indi_pane_g_ParamLimits

0xfadd,	// (0x0001c44a) cam6_indi_pane_g

0xdafc,	// (0x0001a469) cam6_indi_pane_t1_ParamLimits

0xdafc,	// (0x0001a469) cam6_indi_pane_t1

0x749c,	// (0x00013e09) cam6_autofocus_pane_g1

0x74a4,	// (0x00013e11) cam6_autofocus_pane_g2

0x74ac,	// (0x00013e19) cam6_autofocus_pane_g3

0x74b4,	// (0x00013e21) cam6_autofocus_pane_g4

0x0003,

0xfae4,	// (0x0001c451) cam6_autofocus_pane_g

0xdb22,	// (0x0001a48f) cam6_timer_pane_g1

0xdb2a,	// (0x0001a497) cam6_timer_pane_t1

0xdb38,	// (0x0001a4a5) cam6_zoom_cont_pane

0xdb40,	// (0x0001a4ad) cam6_zoom_pane_g1

0xdb48,	// (0x0001a4b5) cam6_zoom_pane_g2

0x74bc,	// (0x00013e29) cam6_zoom_pane_g3

0x0002,

0xfaed,	// (0x0001c45a) cam6_zoom_pane_g

0xa1f4,	// (0x00016b61) cam6_battery_pane_g1

0xa1f4,	// (0x00016b61) cam6_battery_pane_g2

0x0001,

0xf3d8,	// (0x0001bd45) cam6_battery_pane_g

0xdb50,	// (0x0001a4bd) cam6_zoom_cont_pane_g1

0xdb59,	// (0x0001a4c6) cam6_zoom_cont_pane_g2

0xdb62,	// (0x0001a4cf) cam6_zoom_cont_pane_g3

0x0002,

0xfaf4,	// (0x0001c461) cam6_zoom_cont_pane_g

0x74d6,	// (0x00013e43) cam6_mode_pane_cp_ParamLimits

0x74d6,	// (0x00013e43) cam6_mode_pane_cp

0x7450,	// (0x00013dbd) cam6_zoom_pane_cp_ParamLimits

0x7450,	// (0x00013dbd) cam6_zoom_pane_cp

0x74e8,	// (0x00013e55) vid6_image_uncrop_cif_pane_ParamLimits

0x74e8,	// (0x00013e55) vid6_image_uncrop_cif_pane

0x74f8,	// (0x00013e65) vid6_image_uncrop_nhd_pane_ParamLimits

0x74f8,	// (0x00013e65) vid6_image_uncrop_nhd_pane

0x740d,	// (0x00013d7a) vid6_image_uncrop_vga_pane_ParamLimits

0x740d,	// (0x00013d7a) vid6_image_uncrop_vga_pane

0x7507,	// (0x00013e74) vid6_image_uncrop_wvga_pane_ParamLimits

0x7507,	// (0x00013e74) vid6_image_uncrop_wvga_pane

0x7516,	// (0x00013e83) vid6_indi_pane_ParamLimits

0x7516,	// (0x00013e83) vid6_indi_pane

0xcc25,	// (0x00019592) bg_tb_trans_pane_cp09_ParamLimits

0xcc25,	// (0x00019592) bg_tb_trans_pane_cp09

0xdb7a,	// (0x0001a4e7) cam6_battery_pane_cp_ParamLimits

0xdb7a,	// (0x0001a4e7) cam6_battery_pane_cp

0xdb86,	// (0x0001a4f3) vid6_indi_pane_g1_ParamLimits

0xdb86,	// (0x0001a4f3) vid6_indi_pane_g1

0xdb98,	// (0x0001a505) vid6_indi_pane_g2_ParamLimits

0xdb98,	// (0x0001a505) vid6_indi_pane_g2

0xdbaa,	// (0x0001a517) vid6_indi_pane_g3_ParamLimits

0xdbaa,	// (0x0001a517) vid6_indi_pane_g3

0xdbbf,	// (0x0001a52c) vid6_indi_pane_g4_ParamLimits

0xdbbf,	// (0x0001a52c) vid6_indi_pane_g4

0xdbd4,	// (0x0001a541) vid6_indi_pane_g5_ParamLimits

0xdbd4,	// (0x0001a541) vid6_indi_pane_g5

0x0004,

0xfafb,	// (0x0001c468) vid6_indi_pane_g_ParamLimits

0xfafb,	// (0x0001c468) vid6_indi_pane_g

0xdbee,	// (0x0001a55b) vid6_indi_pane_t1_ParamLimits

0xdbee,	// (0x0001a55b) vid6_indi_pane_t1

0xdc04,	// (0x0001a571) vid6_indi_pane_t2_ParamLimits

0xdc04,	// (0x0001a571) vid6_indi_pane_t2

0xdc2c,	// (0x0001a599) vid6_indi_pane_t3_ParamLimits

0xdc2c,	// (0x0001a599) vid6_indi_pane_t3

0xdc54,	// (0x0001a5c1) vid6_indi_pane_t4_ParamLimits

0xdc54,	// (0x0001a5c1) vid6_indi_pane_t4

0x0003,

0xfb06,	// (0x0001c473) vid6_indi_pane_t_ParamLimits

0xfb06,	// (0x0001c473) vid6_indi_pane_t

0xdc78,	// (0x0001a5e5) wait_bar_pane_cp08

0x752e,	// (0x00013e9b) main_cset_text2_pane_t1_ParamLimits

0x752e,	// (0x00013e9b) main_cset_text2_pane_t1

0x74c4,	// (0x00013e31) listscroll_gen_pane_cp06_t1_ParamLimits

0x74c4,	// (0x00013e31) listscroll_gen_pane_cp06_t1

0x9775,	// (0x000160e2) main_cam6_set_pane

0x9edb,	// (0x00016848) bg_tb_trans_pane_cp06_ParamLimits

0xd13d,	// (0x00019aaa) cam4_indicators_pane_g1_ParamLimits

0xd14e,	// (0x00019abb) cam4_indicators_pane_g2_ParamLimits

0xf87e,	// (0x0001c1eb) cam4_indicators_pane_g_ParamLimits

0xd16c,	// (0x00019ad9) cam4_indicators_pane_t1_ParamLimits

0x97e4,	// (0x00016151) bg_tb_trans_pane_cp07_ParamLimits

0xd198,	// (0x00019b05) vid4_indicators_pane_g1_ParamLimits

0xd1ac,	// (0x00019b19) vid4_indicators_pane_g2_ParamLimits

0xd1c0,	// (0x00019b2d) vid4_indicators_pane_g3_ParamLimits

0xd1d1,	// (0x00019b3e) vid4_indicators_pane_g4_ParamLimits

0xf890,	// (0x0001c1fd) vid4_indicators_pane_g_ParamLimits

0xd1ef,	// (0x00019b5c) vid4_indicators_pane_t1_ParamLimits

0xd861,	// (0x0001a1ce) vid4_progress_pane_g1_ParamLimits

0xd871,	// (0x0001a1de) vid4_progress_pane_g2_ParamLimits

0x7035,	// (0x000139a2) vid4_progress_pane_g3_ParamLimits

0xd881,	// (0x0001a1ee) vid4_progress_pane_g4_ParamLimits

0xfa37,	// (0x0001c3a4) vid4_progress_pane_g_ParamLimits

0x7047,	// (0x000139b4) vid4_progress_pane_t1_ParamLimits

0xd899,	// (0x0001a206) vid4_progress_pane_t2_ParamLimits

0xd8ae,	// (0x0001a21b) vid4_progress_pane_t3_ParamLimits

0xfa42,	// (0x0001c3af) vid4_progress_pane_t_ParamLimits

0x705f,	// (0x000139cc) wait_bar_pane_cp07_ParamLimits

0x754b,	// (0x00013eb8) main_cam6_set_pane_g2_ParamLimits

0x754b,	// (0x00013eb8) main_cam6_set_pane_g2

0x756f,	// (0x00013edc) main_cset6_listscroll_pane_ParamLimits

0x756f,	// (0x00013edc) main_cset6_listscroll_pane

0x758f,	// (0x00013efc) main_cset6_slider_pane_ParamLimits

0x758f,	// (0x00013efc) main_cset6_slider_pane

0x75a5,	// (0x00013f12) main_cset6_text2_pane_ParamLimits

0x75a5,	// (0x00013f12) main_cset6_text2_pane

0xdc87,	// (0x0001a5f4) main_cset6_text_pane

0xdc8f,	// (0x0001a5fc) main_cset_list_pane_copy1_ParamLimits

0xdc8f,	// (0x0001a5fc) main_cset_list_pane_copy1

0xdc9f,	// (0x0001a60c) scroll_pane_cp028_copy1

0x75b3,	// (0x00013f20) cset_list_set_pane_copy1

0x75c4,	// (0x00013f31) aid_position_infowindow_above_copy1

0x75cc,	// (0x00013f39) aid_position_infowindow_below_copy1

0x75d4,	// (0x00013f41) cset_list_set_pane_g1_copy1

0x75dc,	// (0x00013f49) cset_list_set_pane_g3_copy1_ParamLimits

0x75dc,	// (0x00013f49) cset_list_set_pane_g3_copy1

0x75eb,	// (0x00013f58) cset_list_set_pane_t1_copy1_ParamLimits

0x75eb,	// (0x00013f58) cset_list_set_pane_t1_copy1

0x97e4,	// (0x00016151) list_highlight_pane_cp021_copy1_ParamLimits

0x97e4,	// (0x00016151) list_highlight_pane_cp021_copy1

0xdca8,	// (0x0001a615) cset6_slider_pane_ParamLimits

0xdca8,	// (0x0001a615) cset6_slider_pane

0xdcd4,	// (0x0001a641) main_cset6_slider_pane_g1_ParamLimits

0xdcd4,	// (0x0001a641) main_cset6_slider_pane_g1

0x7600,	// (0x00013f6d) main_cset6_slider_pane_g2_ParamLimits

0x7600,	// (0x00013f6d) main_cset6_slider_pane_g2

0xdcfc,	// (0x0001a669) main_cset6_slider_pane_g3_ParamLimits

0xdcfc,	// (0x0001a669) main_cset6_slider_pane_g3

0x7628,	// (0x00013f95) main_cset6_slider_pane_g4_ParamLimits

0x7628,	// (0x00013f95) main_cset6_slider_pane_g4

0x7634,	// (0x00013fa1) main_cset6_slider_pane_g5_ParamLimits

0x7634,	// (0x00013fa1) main_cset6_slider_pane_g5

0xd393,	// (0x00019d00) main_cset6_slider_pane_g7_ParamLimits

0xd393,	// (0x00019d00) main_cset6_slider_pane_g7

0xd39f,	// (0x00019d0c) main_cset6_slider_pane_g8_ParamLimits

0xd39f,	// (0x00019d0c) main_cset6_slider_pane_g8

0x668b,	// (0x00012ff8) main_cset6_slider_pane_g9_ParamLimits

0x668b,	// (0x00012ff8) main_cset6_slider_pane_g9

0x6697,	// (0x00013004) main_cset6_slider_pane_g10_ParamLimits

0x6697,	// (0x00013004) main_cset6_slider_pane_g10

0x66a3,	// (0x00013010) main_cset6_slider_pane_g11_ParamLimits

0x66a3,	// (0x00013010) main_cset6_slider_pane_g11

0x66af,	// (0x0001301c) main_cset6_slider_pane_g12_ParamLimits

0x66af,	// (0x0001301c) main_cset6_slider_pane_g12

0x66bb,	// (0x00013028) main_cset6_slider_pane_g13_ParamLimits

0x66bb,	// (0x00013028) main_cset6_slider_pane_g13

0x66c7,	// (0x00013034) main_cset6_slider_pane_g14_ParamLimits

0x66c7,	// (0x00013034) main_cset6_slider_pane_g14

0x7640,	// (0x00013fad) main_cset6_slider_pane_g15_ParamLimits

0x7640,	// (0x00013fad) main_cset6_slider_pane_g15

0x66eb,	// (0x00013058) main_cset6_slider_pane_g16_ParamLimits

0x66eb,	// (0x00013058) main_cset6_slider_pane_g16

0x66f7,	// (0x00013064) main_cset6_slider_pane_g17_ParamLimits

0x66f7,	// (0x00013064) main_cset6_slider_pane_g17

0x0011,

0xfb0f,	// (0x0001c47c) main_cset6_slider_pane_g_ParamLimits

0xfb0f,	// (0x0001c47c) main_cset6_slider_pane_g

0xdd08,	// (0x0001a675) main_cset6_slider_pane_t1_ParamLimits

0xdd08,	// (0x0001a675) main_cset6_slider_pane_t1

0x7670,	// (0x00013fdd) main_cset6_slider_pane_t2_ParamLimits

0x7670,	// (0x00013fdd) main_cset6_slider_pane_t2

0x769b,	// (0x00014008) main_cset6_slider_pane_t3_ParamLimits

0x769b,	// (0x00014008) main_cset6_slider_pane_t3

0x76c6,	// (0x00014033) main_cset6_slider_pane_t4_ParamLimits

0x76c6,	// (0x00014033) main_cset6_slider_pane_t4

0x76f1,	// (0x0001405e) main_cset6_slider_pane_t5_ParamLimits

0x76f1,	// (0x0001405e) main_cset6_slider_pane_t5

0xdd49,	// (0x0001a6b6) main_cset6_slider_pane_t7_ParamLimits

0xdd49,	// (0x0001a6b6) main_cset6_slider_pane_t7

0x771c,	// (0x00014089) main_cset6_slider_pane_t8_ParamLimits

0x771c,	// (0x00014089) main_cset6_slider_pane_t8

0x7740,	// (0x000140ad) main_cset6_slider_pane_t9_ParamLimits

0x7740,	// (0x000140ad) main_cset6_slider_pane_t9

0x7764,	// (0x000140d1) main_cset6_slider_pane_t10_ParamLimits

0x7764,	// (0x000140d1) main_cset6_slider_pane_t10

0x7788,	// (0x000140f5) main_cset6_slider_pane_t11_ParamLimits

0x7788,	// (0x000140f5) main_cset6_slider_pane_t11

0xdd7f,	// (0x0001a6ec) main_cset6_slider_pane_t14_ParamLimits

0xdd7f,	// (0x0001a6ec) main_cset6_slider_pane_t14

0xddb8,	// (0x0001a725) main_cset6_slider_pane_t15_ParamLimits

0xddb8,	// (0x0001a725) main_cset6_slider_pane_t15

0x000b,

0xfb34,	// (0x0001c4a1) main_cset6_slider_pane_t_ParamLimits

0xfb34,	// (0x0001c4a1) main_cset6_slider_pane_t

0xd4b1,	// (0x00019e1e) cset_slider_pane_g1_copy1

0xd4ba,	// (0x00019e27) cset_slider_pane_g2_copy1

0xd4c3,	// (0x00019e30) cset_slider_pane_g3_copy1

0x9775,	// (0x000160e2) bg_popup_sub_pane_cp011_copy1

0xddf1,	// (0x0001a75e) main_cset_text_pane_g1_copy1

0xd588,	// (0x00019ef5) main_cset_text_pane_t1_copy1

0xd596,	// (0x00019f03) main_cset_text_pane_t2_copy1

0xd5a4,	// (0x00019f11) main_cset_text_pane_t3_copy1

0xd5b2,	// (0x00019f1f) main_cset_text_pane_t4_copy1

0xd5c0,	// (0x00019f2d) main_cset_text_pane_t5_copy1

0xddf9,	// (0x0001a766) main_cset_text_pane_t6_copy1

0xde07,	// (0x0001a774) main_cset_text_pane_t7_copy1

0x752e,	// (0x00013e9b) main_cset_text2_pane_t1_copy1

0x97e4,	// (0x00016151) main_ncimui_pane

0x4588,	// (0x00010ef5) popup_query_ncimui_window_ParamLimits

0x4588,	// (0x00010ef5) popup_query_ncimui_window

0xc841,	// (0x000191ae) field_cale_ev2_pane_g4_ParamLimits

0xc841,	// (0x000191ae) field_cale_ev2_pane_g4

0x57dc,	// (0x00012149) cell_video_dialer_keypad_pane_g2_ParamLimits

0x57dc,	// (0x00012149) cell_video_dialer_keypad_pane_g2

0x0001,

0xf818,	// (0x0001c185) cell_video_dialer_keypad_pane_g_ParamLimits

0xf818,	// (0x0001c185) cell_video_dialer_keypad_pane_g

0x57f4,	// (0x00012161) cell_video_dialer_keypad_pane_t1

0x9775,	// (0x000160e2) bg_popup_window_pane_cp012

0xc043,	// (0x000189b0) heading_pane_cp06

0xde33,	// (0x0001a7a0) ncim_query_content_pane

0x9775,	// (0x000160e2) bg_popup_heading_pane_cp01

0xde3b,	// (0x0001a7a8) ncim_heading_pane_t1

0xde49,	// (0x0001a7b6) ncim_indicator_popup_pane

0xde5b,	// (0x0001a7c8) ncim_query_button_pane

0xde6f,	// (0x0001a7dc) ncim_query_content_pane_t1

0xde81,	// (0x0001a7ee) ncim_query_content_pane_t2

0x0005,

0xfb78,	// (0x0001c4e5) ncim_query_content_pane_t

0xdebb,	// (0x0001a828) ncim_query_list_pane

0xdecd,	// (0x0001a83a) ncim_query_popup_pane

0xde49,	// (0x0001a7b6) ncim_indicator_popup_pane_ParamLimits

0x78f2,	// (0x0001425f) ncim_query_content_pane_g1_ParamLimits

0x78f2,	// (0x0001425f) ncim_query_content_pane_g1

0xde6f,	// (0x0001a7dc) ncim_query_content_pane_t1_ParamLimits

0xde81,	// (0x0001a7ee) ncim_query_content_pane_t2_ParamLimits

0x78fe,	// (0x0001426b) ncim_query_content_pane_t3_ParamLimits

0x78fe,	// (0x0001426b) ncim_query_content_pane_t3

0x7926,	// (0x00014293) ncim_query_content_pane_t4_ParamLimits

0x7926,	// (0x00014293) ncim_query_content_pane_t4

0x794e,	// (0x000142bb) ncim_query_content_pane_t5_ParamLimits

0x794e,	// (0x000142bb) ncim_query_content_pane_t5

0xde93,	// (0x0001a800) ncim_query_content_pane_t6_ParamLimits

0xde93,	// (0x0001a800) ncim_query_content_pane_t6

0xfb78,	// (0x0001c4e5) ncim_query_content_pane_t_ParamLimits

0xdebb,	// (0x0001a828) ncim_query_list_pane_ParamLimits

0xdecd,	// (0x0001a83a) ncim_query_popup_pane_ParamLimits

0xdee1,	// (0x0001a84e) wait_bar_pane_cp04

0x9775,	// (0x000160e2) input_focus_pane_cp011

0xdee9,	// (0x0001a856) ncim_query_popup_pane_t1

0xdef7,	// (0x0001a864) ncim_list_query_list_pane_ParamLimits

0xdef7,	// (0x0001a864) ncim_list_query_list_pane

0x9775,	// (0x000160e2) bg_button_pane_cp027

0xdf04,	// (0x0001a871) ncim_query_button_pane_g1

0x9775,	// (0x000160e2) list_highlight_pane_cp012

0xdf0e,	// (0x0001a87b) ncim_list_query_list_pane_g1

0xdf16,	// (0x0001a883) ncim_list_query_list_pane_t1

0xd15d,	// (0x00019aca) cam4_indicators_pane_g3_ParamLimits

0xd15d,	// (0x00019aca) cam4_indicators_pane_g3

0xd1dd,	// (0x00019b4a) vid4_indicators_pane_g5_ParamLimits

0xd1dd,	// (0x00019b4a) vid4_indicators_pane_g5

0xd88d,	// (0x0001a1fa) vid4_progress_pane_g5_ParamLimits

0xd88d,	// (0x0001a1fa) vid4_progress_pane_g5

0x77dd,	// (0x0001414a) main_ncimui_pane_g1

0x7846,	// (0x000141b3) ncimui_group_query_pane_ParamLimits

0x7846,	// (0x000141b3) ncimui_group_query_pane

0x788e,	// (0x000141fb) ncimui_list_pane_ParamLimits

0x788e,	// (0x000141fb) ncimui_list_pane

0x78b5,	// (0x00014222) ncimui_text_pane_ParamLimits

0x78b5,	// (0x00014222) ncimui_text_pane

0x7976,	// (0x000142e3) ncimui_text_pane_t1_ParamLimits

0x7976,	// (0x000142e3) ncimui_text_pane_t1

0xdf24,	// (0x0001a891) ncimui_list_single_graphic_pane_ParamLimits

0xdf24,	// (0x0001a891) ncimui_list_single_graphic_pane

0x7994,	// (0x00014301) ncimui_query_pane_ParamLimits

0x7994,	// (0x00014301) ncimui_query_pane

0x9775,	// (0x000160e2) list_highlight_pane_cp013

0xdf34,	// (0x0001a8a1) ncim_list_query_list_pane_t1_copy1

0xdf0e,	// (0x0001a87b) ncim_list_single_graphic_pane_g1

0x79a7,	// (0x00014314) ncim_query_button_pane_cp01

0x79b3,	// (0x00014320) ncim_query_entry_pane_ParamLimits

0x79b3,	// (0x00014320) ncim_query_entry_pane

0x79c6,	// (0x00014333) ncimui_query_pane_g1

0x79d2,	// (0x0001433f) ncimui_query_pane_t1_ParamLimits

0x79d2,	// (0x0001433f) ncimui_query_pane_t1

0x97e4,	// (0x00016151) input_focus_pane_cp012

0xdf42,	// (0x0001a8af) ncim_query_entry_pane_t1

0x9f6f,	// (0x000168dc) main_im_pane_ParamLimits

0x97e4,	// (0x00016151) main_mobtv_pane_ParamLimits

0x97e4,	// (0x00016151) main_mobtv_pane

0x7658,	// (0x00013fc5) main_cset6_slider_pane_g18_ParamLimits

0x7658,	// (0x00013fc5) main_cset6_slider_pane_g18

0x7664,	// (0x00013fd1) main_cset6_slider_pane_g19_ParamLimits

0x7664,	// (0x00013fd1) main_cset6_slider_pane_g19

0x9ef7,	// (0x00016864) bg_main_mobtv_pane_ParamLimits

0x9ef7,	// (0x00016864) bg_main_mobtv_pane

0x79eb,	// (0x00014358) main_mobtv_info_pane

0x79f4,	// (0x00014361) main_mobtv_loading_pane_ParamLimits

0x79f4,	// (0x00014361) main_mobtv_loading_pane

0xdf54,	// (0x0001a8c1) main_mobtv_pg_channel_list_pane

0xdf5e,	// (0x0001a8cb) main_mobtv_pg_hdr_pane

0x7a01,	// (0x0001436e) main_mobtv_programe_curr_pane_ParamLimits

0x7a01,	// (0x0001436e) main_mobtv_programe_curr_pane

0x7a0e,	// (0x0001437b) main_mobtv_programe_next_pane_ParamLimits

0x7a0e,	// (0x0001437b) main_mobtv_programe_next_pane

0xdf67,	// (0x0001a8d4) popup_mobtv_noti_window

0xa1f4,	// (0x00016b61) main_tv_pg_hdr_pane_g1

0xdf6f,	// (0x0001a8dc) main_tv_pg_hdr_pane_g2

0xdf77,	// (0x0001a8e4) main_tv_pg_hdr_pane_g3

0xdf7f,	// (0x0001a8ec) main_tv_pg_hdr_pane_g4

0xdf87,	// (0x0001a8f4) main_tv_pg_hdr_pane_g5

0xdf91,	// (0x0001a8fe) main_tv_pg_hdr_pane_g6

0xdf9b,	// (0x0001a908) main_tv_pg_hdr_pane_g7

0xdfa5,	// (0x0001a912) main_tv_pg_hdr_pane_g8

0xdfaf,	// (0x0001a91c) main_tv_pg_hdr_pane_g9

0xdfb9,	// (0x0001a926) main_tv_pg_hdr_pane_g10

0xdfc3,	// (0x0001a930) main_tv_pg_hdr_pane_g11

0x000a,

0xfb85,	// (0x0001c4f2) main_tv_pg_hdr_pane_g

0xdfcd,	// (0x0001a93a) main_tv_pg_hdr_pane_t1

0xdfdb,	// (0x0001a948) main_tv_pg_hdr_pane_t2

0xdfe9,	// (0x0001a956) main_tv_pg_hdr_pane_t3

0xdff9,	// (0x0001a966) main_tv_pg_hdr_pane_t4

0xe009,	// (0x0001a976) main_tv_pg_hdr_pane_t5

0x0004,

0xfb9c,	// (0x0001c509) main_tv_pg_hdr_pane_t

0xe019,	// (0x0001a986) single_mobtv_pg_channel_pane_ParamLimits

0xe019,	// (0x0001a986) single_mobtv_pg_channel_pane

0xe02b,	// (0x0001a998) single_mobtv_pg_channel_table_pane

0xe034,	// (0x0001a9a1) single_mobtv_pg_channel_thumb_pane

0xe03d,	// (0x0001a9aa) single_tv_pg_channel_pane_g1

0xe046,	// (0x0001a9b3) single_tv_pg_channel_pane_g2

0x0001,

0xfba7,	// (0x0001c514) single_tv_pg_channel_pane_g

0x9edb,	// (0x00016848) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0x9edb,	// (0x00016848) bg_single_mobtv_pg_channel_thumb_pane

0xe04f,	// (0x0001a9bc) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xe04f,	// (0x0001a9bc) single_mobtv_pg_channel_thumb_pane_g1

0xe05d,	// (0x0001a9ca) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xe05d,	// (0x0001a9ca) single_mobtv_pg_channel_thumb_pane_g2

0xe069,	// (0x0001a9d6) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xe069,	// (0x0001a9d6) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfbac,	// (0x0001c519) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfbac,	// (0x0001c519) single_mobtv_pg_channel_thumb_pane_g

0xe075,	// (0x0001a9e2) single_mobtv_pg_channel_thumb_pane_t1

0xe083,	// (0x0001a9f0) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfbb3,	// (0x0001c520) single_mobtv_pg_channel_thumb_pane_t

0xa1f4,	// (0x00016b61) bg_single_mobtv_pg_channel_table_pane_g1

0xa1f4,	// (0x00016b61) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf3d8,	// (0x0001bd45) bg_single_mobtv_pg_channel_table_pane_g

0xe091,	// (0x0001a9fe) single_mobtv_pg_channel_table_pane_t1

0xe09f,	// (0x0001aa0c) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfbb8,	// (0x0001c525) single_mobtv_pg_channel_table_pane_t

0x7a23,	// (0x00014390) main_mobtv_info_pane_g1_ParamLimits

0x7a23,	// (0x00014390) main_mobtv_info_pane_g1

0x7a41,	// (0x000143ae) main_mobtv_info_pane_t1_ParamLimits

0x7a41,	// (0x000143ae) main_mobtv_info_pane_t1

0x7ab9,	// (0x00014426) main_mobtv_info_pane_t2_ParamLimits

0x7ab9,	// (0x00014426) main_mobtv_info_pane_t2

0x0002,

0xfbc2,	// (0x0001c52f) main_mobtv_info_pane_t_ParamLimits

0xfbc2,	// (0x0001c52f) main_mobtv_info_pane_t

0x7b48,	// (0x000144b5) wait_bar_pane_cp05

0x7b5a,	// (0x000144c7) main_mobtv_loading_pane_g1_ParamLimits

0x7b5a,	// (0x000144c7) main_mobtv_loading_pane_g1

0x7b6d,	// (0x000144da) main_mobtv_loading_pane_g2_ParamLimits

0x7b6d,	// (0x000144da) main_mobtv_loading_pane_g2

0x7b79,	// (0x000144e6) main_mobtv_loading_pane_g3_ParamLimits

0x7b79,	// (0x000144e6) main_mobtv_loading_pane_g3

0x0002,

0xfbc9,	// (0x0001c536) main_mobtv_loading_pane_g_ParamLimits

0xfbc9,	// (0x0001c536) main_mobtv_loading_pane_g

0xe0c1,	// (0x0001aa2e) main_mobtv_loading_pane_t1_ParamLimits

0xe0c1,	// (0x0001aa2e) main_mobtv_loading_pane_t1

0xe0d9,	// (0x0001aa46) main_mobtv_loading_pane_t2_ParamLimits

0xe0d9,	// (0x0001aa46) main_mobtv_loading_pane_t2

0x0001,

0xfbd0,	// (0x0001c53d) main_mobtv_loading_pane_t_ParamLimits

0xfbd0,	// (0x0001c53d) main_mobtv_loading_pane_t

0x7b8c,	// (0x000144f9) wait_bar_pane_cp06_ParamLimits

0x7b8c,	// (0x000144f9) wait_bar_pane_cp06

0xe0fd,	// (0x0001aa6a) main_mobtv_programe_curr_pane_t1

0xe10b,	// (0x0001aa78) main_mobtv_programe_curr_pane_t2

0x0001,

0xfbd5,	// (0x0001c542) main_mobtv_programe_curr_pane_t

0xe119,	// (0x0001aa86) main_mobtv_programe_next_pane_t1

0xe127,	// (0x0001aa94) main_mobtv_programe_next_pane_t2

0xe135,	// (0x0001aaa2) main_mobtv_programe_next_pane_t3

0x0002,

0xfbda,	// (0x0001c547) main_mobtv_programe_next_pane_t

0x9775,	// (0x000160e2) bg_popup_mobtv_noti_window_pane

0xe143,	// (0x0001aab0) popup_mobtv_noti_window_g1

0xe14b,	// (0x0001aab8) popup_mobtv_noti_window_t1

0xe159,	// (0x0001aac6) popup_mobtv_noti_window_t2

0x0001,

0xfbe1,	// (0x0001c54e) popup_mobtv_noti_window_t

0xa1f4,	// (0x00016b61) bg_popup_mobtv_noti_window_pane_g1

0x9775,	// (0x000160e2) sc_clock_pane

0x9775,	// (0x000160e2) main_fs_bigclock_pane

0x7282,	// (0x00013bef) blid2_tripm_pane_t4_ParamLimits

0x7282,	// (0x00013bef) blid2_tripm_pane_t4

0x7b9b,	// (0x00014508) sc_clock_pane_g1_ParamLimits

0x7b9b,	// (0x00014508) sc_clock_pane_g1

0x7bad,	// (0x0001451a) sc_clock_pane_t1_ParamLimits

0x7bad,	// (0x0001451a) sc_clock_pane_t1

0x7bcf,	// (0x0001453c) sc_clock_pane_t2_ParamLimits

0x7bcf,	// (0x0001453c) sc_clock_pane_t2

0x7be7,	// (0x00014554) sc_clock_pane_t3_ParamLimits

0x7be7,	// (0x00014554) sc_clock_pane_t3

0x0004,

0xfbe6,	// (0x0001c553) sc_clock_pane_t_ParamLimits

0xfbe6,	// (0x0001c553) sc_clock_pane_t

0x88cb,	// (0x00015238) main_fs_bigclock_indicator_pane_ParamLimits

0x88cb,	// (0x00015238) main_fs_bigclock_indicator_pane

0x7c8d,	// (0x000145fa) main_fs_bigclock_pane_g1_ParamLimits

0x7c8d,	// (0x000145fa) main_fs_bigclock_pane_g1

0x88d7,	// (0x00015244) main_fs_bigclock_pane_t1_ParamLimits

0x88d7,	// (0x00015244) main_fs_bigclock_pane_t1

0x88e9,	// (0x00015256) main_fs_bigclock_pane_t2_ParamLimits

0x88e9,	// (0x00015256) main_fs_bigclock_pane_t2

0x88fd,	// (0x0001526a) main_fs_bigclock_pane_t3_ParamLimits

0x88fd,	// (0x0001526a) main_fs_bigclock_pane_t3

0x0002,

0xfd77,	// (0x0001c6e4) main_fs_bigclock_pane_t_ParamLimits

0xfd77,	// (0x0001c6e4) main_fs_bigclock_pane_t

0xed30,	// (0x0001b69d) main_fs_bigclock_indicator_pane_g1

0xde63,	// (0x0001a7d0) ncim_query_content_pane_g2_ParamLimits

0xde63,	// (0x0001a7d0) ncim_query_content_pane_g2

0x0001,

0xfb73,	// (0x0001c4e0) ncim_query_content_pane_g_ParamLimits

0xfb73,	// (0x0001c4e0) ncim_query_content_pane_g

0x7c00,	// (0x0001456d) sc_clock_pane_t4_ParamLimits

0x7c00,	// (0x0001456d) sc_clock_pane_t4

0x97e4,	// (0x00016151) main_radioblah_pane

0xd0a3,	// (0x00019a10) cell_call4_button_pane_t1_copy1_ParamLimits

0xd0a3,	// (0x00019a10) cell_call4_button_pane_t1_copy1

0x77f5,	// (0x00014162) main_ncimui_pane_t1_ParamLimits

0x77f5,	// (0x00014162) main_ncimui_pane_t1

0x780f,	// (0x0001417c) main_ncimui_pane_t2_ParamLimits

0x780f,	// (0x0001417c) main_ncimui_pane_t2

0x0002,

0xfb6c,	// (0x0001c4d9) main_ncimui_pane_t_ParamLimits

0xfb6c,	// (0x0001c4d9) main_ncimui_pane_t

0xe29e,	// (0x0001ac0b) main_radioblah_anim_pane_ParamLimits

0xe29e,	// (0x0001ac0b) main_radioblah_anim_pane

0xe2af,	// (0x0001ac1c) main_radioblah_info_pane_ParamLimits

0xe2af,	// (0x0001ac1c) main_radioblah_info_pane

0xe2c3,	// (0x0001ac30) main_radioblah_pane_t1_ParamLimits

0xe2c3,	// (0x0001ac30) main_radioblah_pane_t1

0xe2df,	// (0x0001ac4c) main_radioblah_pane_t2_ParamLimits

0xe2df,	// (0x0001ac4c) main_radioblah_pane_t2

0x0003,

0xfc07,	// (0x0001c574) main_radioblah_pane_t_ParamLimits

0xfc07,	// (0x0001c574) main_radioblah_pane_t

0x7cec,	// (0x00014659) main_radioblah_rocker_ctrl_pane_ParamLimits

0x7cec,	// (0x00014659) main_radioblah_rocker_ctrl_pane

0xe327,	// (0x0001ac94) main_radioblah_info_pane_t1_ParamLimits

0xe327,	// (0x0001ac94) main_radioblah_info_pane_t1

0x7d44,	// (0x000146b1) main_radioblah_info_pane_t2_ParamLimits

0x7d44,	// (0x000146b1) main_radioblah_info_pane_t2

0x0003,

0xfc10,	// (0x0001c57d) main_radioblah_info_pane_t_ParamLimits

0xfc10,	// (0x0001c57d) main_radioblah_info_pane_t

0xa1f4,	// (0x00016b61) main_radioblah_rocker_ctrl_pane_g1

0x7df4,	// (0x00014761) main_radioblah_rocker_ctrl_pane_g2

0x7dfc,	// (0x00014769) main_radioblah_rocker_ctrl_pane_g3

0x7e04,	// (0x00014771) main_radioblah_rocker_ctrl_pane_g4

0x7e0c,	// (0x00014779) main_radioblah_rocker_ctrl_pane_g5

0x7e14,	// (0x00014781) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfc19,	// (0x0001c586) main_radioblah_rocker_ctrl_pane_g

0x752e,	// (0x00013e9b) main_cset_text2_pane_t1_copy1_ParamLimits

0xd12d,	// (0x00019a9a) cam4_image_uncrop_qvga_pane

0xd186,	// (0x00019af3) vid4_image_uncrop_qcif_pane

0xdaa2,	// (0x0001a40f) cam6_image_uncrop_qvga_pane_ParamLimits

0xdaa2,	// (0x0001a40f) cam6_image_uncrop_qvga_pane

0xdb6a,	// (0x0001a4d7) vid6_image_uncrop_qcif_pane_ParamLimits

0xdb6a,	// (0x0001a4d7) vid6_image_uncrop_qcif_pane

0x9775,	// (0x000160e2) bg_popup_preview_window_pane_cp03

0xde15,	// (0x0001a782) list_cset_text2_pane

0xde1d,	// (0x0001a78a) main_cset6_text2_pane_g1

0xde25,	// (0x0001a792) main_cset6_text2_pane_t1

0x7e1c,	// (0x00014789) list_cset_text2_pane_t1_ParamLimits

0x7e1c,	// (0x00014789) list_cset_text2_pane_t1

0x97e4,	// (0x00016151) main_radioblah_pane_ParamLimits

0x7b34,	// (0x000144a1) main_mobtv_info_pane_t3_ParamLimits

0x7b34,	// (0x000144a1) main_mobtv_info_pane_t3

0x7cda,	// (0x00014647) main_radioblah_pane_g1

0x7d14,	// (0x00014681) main_radioblah_info_pane_g1

0x7d99,	// (0x00014706) main_radioblah_info_pane_t3_ParamLimits

0x7d99,	// (0x00014706) main_radioblah_info_pane_t3

0x3320,	// (0x0000fc8d) highlight_cell_cale_month_pane_ParamLimits

0x3320,	// (0x0000fc8d) highlight_cell_cale_month_pane

0x9775,	// (0x000160e2) main_phob_fisheye_pane

0xc8b6,	// (0x00019223) scroll_pane_cp0031_ParamLimits

0xc8b6,	// (0x00019223) scroll_pane_cp0031

0xdc78,	// (0x0001a5e5) wait_bar_pane_cp08_ParamLimits

0x75b3,	// (0x00013f20) cset_list_set_pane_copy1_ParamLimits

0xe361,	// (0x0001acce) highlight_cell_cale_month_pane_g1

0x7e35,	// (0x000147a2) highlight_cell_cale_month_pane_t1

0xd850,	// (0x0001a1bd) list_gen_pane_cp01

0xd37e,	// (0x00019ceb) scroll_pane_01

0x7e43,	// (0x000147b0) list_single_double_fisheye_pane

0x7e4c,	// (0x000147b9) list_double_fisheye_pane_g1_ParamLimits

0x7e4c,	// (0x000147b9) list_double_fisheye_pane_g1

0x7e58,	// (0x000147c5) list_double_fisheye_pane_g2_ParamLimits

0x7e58,	// (0x000147c5) list_double_fisheye_pane_g2

0x7e6c,	// (0x000147d9) list_double_fisheye_pane_g3_ParamLimits

0x7e6c,	// (0x000147d9) list_double_fisheye_pane_g3

0x0004,

0xfc26,	// (0x0001c593) list_double_fisheye_pane_g_ParamLimits

0xfc26,	// (0x0001c593) list_double_fisheye_pane_g

0x7e95,	// (0x00014802) list_double_fisheye_pane_t1_ParamLimits

0x7e95,	// (0x00014802) list_double_fisheye_pane_t1

0x7eb0,	// (0x0001481d) list_double_fisheye_pane_t2_ParamLimits

0x7eb0,	// (0x0001481d) list_double_fisheye_pane_t2

0x0001,

0xfc31,	// (0x0001c59e) list_double_fisheye_pane_t_ParamLimits

0xfc31,	// (0x0001c59e) list_double_fisheye_pane_t

0x9775,	// (0x000160e2) main_call5_pane

0x7c2b,	// (0x00014598) sc_swipe_pane_ParamLimits

0x7c2b,	// (0x00014598) sc_swipe_pane

0x7ee5,	// (0x00014852) call5_image_pane_ParamLimits

0x7ee5,	// (0x00014852) call5_image_pane

0x7f02,	// (0x0001486f) call5_swipe_1_pane_ParamLimits

0x7f02,	// (0x0001486f) call5_swipe_1_pane

0x7f15,	// (0x00014882) call5_swipe_2_pane_ParamLimits

0x7f15,	// (0x00014882) call5_swipe_2_pane

0x7f40,	// (0x000148ad) popup_call5_audio_first_window_ParamLimits

0x7f40,	// (0x000148ad) popup_call5_audio_first_window

0x9edb,	// (0x00016848) call5_swipe_1_pane_g1_ParamLimits

0x9edb,	// (0x00016848) call5_swipe_1_pane_g1

0xe369,	// (0x0001acd6) call5_swipe_1_pane_g2_ParamLimits

0xe369,	// (0x0001acd6) call5_swipe_1_pane_g2

0x0001,

0xfc36,	// (0x0001c5a3) call5_swipe_1_pane_g_ParamLimits

0xfc36,	// (0x0001c5a3) call5_swipe_1_pane_g

0xe375,	// (0x0001ace2) call5_swipe_1_pane_t1_ParamLimits

0xe375,	// (0x0001ace2) call5_swipe_1_pane_t1

0x9edb,	// (0x00016848) call5_swipe_2_pane_g1_ParamLimits

0x9edb,	// (0x00016848) call5_swipe_2_pane_g1

0xe38a,	// (0x0001acf7) call5_swipe_2_pane_g2_ParamLimits

0xe38a,	// (0x0001acf7) call5_swipe_2_pane_g2

0x0001,

0xfc3b,	// (0x0001c5a8) call5_swipe_2_pane_g_ParamLimits

0xfc3b,	// (0x0001c5a8) call5_swipe_2_pane_g

0xe396,	// (0x0001ad03) call5_swipe_2_pane_t1_ParamLimits

0xe396,	// (0x0001ad03) call5_swipe_2_pane_t1

0xe3ab,	// (0x0001ad18) sc_swipe_pane_g1_ParamLimits

0xe3ab,	// (0x0001ad18) sc_swipe_pane_g1

0xe3b8,	// (0x0001ad25) sc_swipe_pane_g2_ParamLimits

0xe3b8,	// (0x0001ad25) sc_swipe_pane_g2

0x0001,

0xfc40,	// (0x0001c5ad) sc_swipe_pane_g_ParamLimits

0xfc40,	// (0x0001c5ad) sc_swipe_pane_g

0xe3c4,	// (0x0001ad31) sc_swipe_pane_t1_ParamLimits

0xe3c4,	// (0x0001ad31) sc_swipe_pane_t1

0x9775,	// (0x000160e2) main_cmail_launcher_pane

0x7f51,	// (0x000148be) aid_size_cell_cmail_l_ParamLimits

0x7f51,	// (0x000148be) aid_size_cell_cmail_l

0x7f5f,	// (0x000148cc) grid_cmail_l_pane_ParamLimits

0x7f5f,	// (0x000148cc) grid_cmail_l_pane

0x7f79,	// (0x000148e6) cell_cmail_l_pane_ParamLimits

0x7f79,	// (0x000148e6) cell_cmail_l_pane

0xe3d9,	// (0x0001ad46) cell_cmail_l_pane_g1_ParamLimits

0xe3d9,	// (0x0001ad46) cell_cmail_l_pane_g1

0xe3e5,	// (0x0001ad52) cell_cmail_l_pane_t1_ParamLimits

0xe3e5,	// (0x0001ad52) cell_cmail_l_pane_t1

0xe3fb,	// (0x0001ad68) cell_cmail_l_pane_t2_ParamLimits

0xe3fb,	// (0x0001ad68) cell_cmail_l_pane_t2

0x0001,

0xfc45,	// (0x0001c5b2) cell_cmail_l_pane_t_ParamLimits

0xfc45,	// (0x0001c5b2) cell_cmail_l_pane_t

0x97e4,	// (0x00016151) grid_highlight_pane_cp018_ParamLimits

0x97e4,	// (0x00016151) grid_highlight_pane_cp018

0x1765,	// (0x0000e0d2) main2_pane_ParamLimits

0x1765,	// (0x0000e0d2) main2_pane

0xa02b,	// (0x00016998) popup_sp_fs_action_menu_bg_pane_g1

0xa033,	// (0x000169a0) popup_sp_fs_action_menu_bg_pane_g2

0xa03b,	// (0x000169a8) popup_sp_fs_action_menu_bg_pane_g3

0xa043,	// (0x000169b0) popup_sp_fs_action_menu_bg_pane_g4

0xa04b,	// (0x000169b8) popup_sp_fs_action_menu_bg_pane_g5

0xa053,	// (0x000169c0) popup_sp_fs_action_menu_bg_pane_g6

0xa05b,	// (0x000169c8) popup_sp_fs_action_menu_bg_pane_g7

0xa063,	// (0x000169d0) popup_sp_fs_action_menu_bg_pane_g8

0xa06b,	// (0x000169d8) popup_sp_fs_action_menu_bg_pane_g9

0xa073,	// (0x000169e0) popup_sp_fs_action_menu_bg_pane_g10

0xa073,	// (0x000169e0) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf145,	// (0x0001bab2) popup_sp_fs_action_menu_bg_pane_g

0x9edb,	// (0x00016848) list_medium_line_x2_t3_g3_g1_ParamLimits

0x9edb,	// (0x00016848) list_medium_line_x2_t3_g3_g1

0x9edb,	// (0x00016848) list_medium_line_x2_t3_g3_g2_ParamLimits

0x9edb,	// (0x00016848) list_medium_line_x2_t3_g3_g2

0x9edb,	// (0x00016848) list_medium_line_x2_t3_g3_g3_ParamLimits

0x9edb,	// (0x00016848) list_medium_line_x2_t3_g3_g3

0x0002,

0xf1f3,	// (0x0001bb60) list_medium_line_x2_t3_g3_g_ParamLimits

0xf1f3,	// (0x0001bb60) list_medium_line_x2_t3_g3_g

0xa1c6,	// (0x00016b33) list_medium_line_x2_t3_g3_t1_ParamLimits

0xa1c6,	// (0x00016b33) list_medium_line_x2_t3_g3_t1

0xa1c6,	// (0x00016b33) list_medium_line_x2_t3_g3_t2_ParamLimits

0xa1c6,	// (0x00016b33) list_medium_line_x2_t3_g3_t2

0xa1c6,	// (0x00016b33) list_medium_line_x2_t3_g3_t3_ParamLimits

0xa1c6,	// (0x00016b33) list_medium_line_x2_t3_g3_t3

0x0002,

0xf1fa,	// (0x0001bb67) list_medium_line_x2_t3_g3_t_ParamLimits

0xf1fa,	// (0x0001bb67) list_medium_line_x2_t3_g3_t

0x9edb,	// (0x00016848) list_medium_line_x2_t3_g2_g1_ParamLimits

0x9edb,	// (0x00016848) list_medium_line_x2_t3_g2_g1

0x9edb,	// (0x00016848) list_medium_line_x2_t3_g2_g2_ParamLimits

0x9edb,	// (0x00016848) list_medium_line_x2_t3_g2_g2

0x0001,

0xf201,	// (0x0001bb6e) list_medium_line_x2_t3_g2_g_ParamLimits

0xf201,	// (0x0001bb6e) list_medium_line_x2_t3_g2_g

0xa1c6,	// (0x00016b33) list_medium_line_x2_t3_g2_t1_ParamLimits

0xa1c6,	// (0x00016b33) list_medium_line_x2_t3_g2_t1

0xa1c6,	// (0x00016b33) list_medium_line_x2_t3_g2_t2_ParamLimits

0xa1c6,	// (0x00016b33) list_medium_line_x2_t3_g2_t2

0xa1c6,	// (0x00016b33) list_medium_line_x2_t3_g2_t3_ParamLimits

0xa1c6,	// (0x00016b33) list_medium_line_x2_t3_g2_t3

0x0002,

0xf1fa,	// (0x0001bb67) list_medium_line_x2_t3_g2_t_ParamLimits

0xf1fa,	// (0x0001bb67) list_medium_line_x2_t3_g2_t

0x9edb,	// (0x00016848) list_medium_line_x2_t4_g4_g1_ParamLimits

0x9edb,	// (0x00016848) list_medium_line_x2_t4_g4_g1

0x9edb,	// (0x00016848) list_medium_line_x2_t4_g4_g2_ParamLimits

0x9edb,	// (0x00016848) list_medium_line_x2_t4_g4_g2

0x9edb,	// (0x00016848) list_medium_line_x2_t4_g4_g3_ParamLimits

0x9edb,	// (0x00016848) list_medium_line_x2_t4_g4_g3

0x9edb,	// (0x00016848) list_medium_line_x2_t4_g4_g4_ParamLimits

0x9edb,	// (0x00016848) list_medium_line_x2_t4_g4_g4

0x0003,

0xf206,	// (0x0001bb73) list_medium_line_x2_t4_g4_g_ParamLimits

0xf206,	// (0x0001bb73) list_medium_line_x2_t4_g4_g

0xa1c6,	// (0x00016b33) list_medium_line_x2_t4_g4_t1_ParamLimits

0xa1c6,	// (0x00016b33) list_medium_line_x2_t4_g4_t1

0xa1c6,	// (0x00016b33) list_medium_line_x2_t4_g4_t2_ParamLimits

0xa1c6,	// (0x00016b33) list_medium_line_x2_t4_g4_t2

0xa1c6,	// (0x00016b33) list_medium_line_x2_t4_g4_t3_ParamLimits

0xa1c6,	// (0x00016b33) list_medium_line_x2_t4_g4_t3

0xa1c6,	// (0x00016b33) list_medium_line_x2_t4_g4_t4_ParamLimits

0xa1c6,	// (0x00016b33) list_medium_line_x2_t4_g4_t4

0x0003,

0xf20f,	// (0x0001bb7c) list_medium_line_x2_t4_g4_t_ParamLimits

0xf20f,	// (0x0001bb7c) list_medium_line_x2_t4_g4_t

0x9edb,	// (0x00016848) list_medium_line_x2_t2_g4_g1_ParamLimits

0x9edb,	// (0x00016848) list_medium_line_x2_t2_g4_g1

0x9edb,	// (0x00016848) list_medium_line_x2_t2_g4_g2_ParamLimits

0x9edb,	// (0x00016848) list_medium_line_x2_t2_g4_g2

0x9edb,	// (0x00016848) list_medium_line_x2_t2_g4_g3_ParamLimits

0x9edb,	// (0x00016848) list_medium_line_x2_t2_g4_g3

0x9edb,	// (0x00016848) list_medium_line_x2_t2_g4_g4_ParamLimits

0x9edb,	// (0x00016848) list_medium_line_x2_t2_g4_g4

0x0003,

0xf206,	// (0x0001bb73) list_medium_line_x2_t2_g4_g_ParamLimits

0xf206,	// (0x0001bb73) list_medium_line_x2_t2_g4_g

0xa1c6,	// (0x00016b33) list_medium_line_x2_t2_g4_t1_ParamLimits

0xa1c6,	// (0x00016b33) list_medium_line_x2_t2_g4_t1

0xa1c6,	// (0x00016b33) list_medium_line_x2_t2_g4_t2_ParamLimits

0xa1c6,	// (0x00016b33) list_medium_line_x2_t2_g4_t2

0x0001,

0xf1d6,	// (0x0001bb43) list_medium_line_x2_t2_g4_t_ParamLimits

0xf1d6,	// (0x0001bb43) list_medium_line_x2_t2_g4_t

0x9edb,	// (0x00016848) list_medium_line_x2_t2_g3_g1_ParamLimits

0x9edb,	// (0x00016848) list_medium_line_x2_t2_g3_g1

0x9edb,	// (0x00016848) list_medium_line_x2_t2_g3_g2_ParamLimits

0x9edb,	// (0x00016848) list_medium_line_x2_t2_g3_g2

0x9edb,	// (0x00016848) list_medium_line_x2_t2_g3_g3_ParamLimits

0x9edb,	// (0x00016848) list_medium_line_x2_t2_g3_g3

0x0002,

0xf1f3,	// (0x0001bb60) list_medium_line_x2_t2_g3_g_ParamLimits

0xf1f3,	// (0x0001bb60) list_medium_line_x2_t2_g3_g

0xa1c6,	// (0x00016b33) list_medium_line_x2_t2_g3_t1_ParamLimits

0xa1c6,	// (0x00016b33) list_medium_line_x2_t2_g3_t1

0xa1c6,	// (0x00016b33) list_medium_line_x2_t2_g3_t2_ParamLimits

0xa1c6,	// (0x00016b33) list_medium_line_x2_t2_g3_t2

0x0001,

0xf1d6,	// (0x0001bb43) list_medium_line_x2_t2_g3_t_ParamLimits

0xf1d6,	// (0x0001bb43) list_medium_line_x2_t2_g3_t

0x3472,	// (0x0000fddf) main_sp_fs_list_pane_ParamLimits

0x3472,	// (0x0000fddf) main_sp_fs_list_pane

0xe0b5,	// (0x0001aa22) sp_fs_scroll_pane_ParamLimits

0xe0b5,	// (0x0001aa22) sp_fs_scroll_pane

0xa75d,	// (0x000170ca) list_medium_line_x2_t3_t1

0xa75d,	// (0x000170ca) list_medium_line_x2_t3_t2

0xa75d,	// (0x000170ca) list_medium_line_x2_t3_t3

0x0002,

0xf2bc,	// (0x0001bc29) list_medium_line_x2_t3_t

0xa75d,	// (0x000170ca) list_medium_line_x3_t4_t1

0xa75d,	// (0x000170ca) list_medium_line_x3_t4_t2

0xa75d,	// (0x000170ca) list_medium_line_x3_t4_t3

0xa75d,	// (0x000170ca) list_medium_line_x3_t4_t4

0x0003,

0xf2c3,	// (0x0001bc30) list_medium_line_x3_t4_t

0xa75d,	// (0x000170ca) list_medium_line_x4_t5_t1

0xa75d,	// (0x000170ca) list_medium_line_x4_t5_t2

0xa75d,	// (0x000170ca) list_medium_line_x4_t5_t3

0xa75d,	// (0x000170ca) list_medium_line_x4_t5_t4

0xa75d,	// (0x000170ca) list_medium_line_x4_t5_t5

0x0004,

0xf2cc,	// (0x0001bc39) list_medium_line_x4_t5_t

0x9edb,	// (0x00016848) list_medium_line_t4_g4_g1_ParamLimits

0x9edb,	// (0x00016848) list_medium_line_t4_g4_g1

0x9edb,	// (0x00016848) list_medium_line_t4_g4_g2_ParamLimits

0x9edb,	// (0x00016848) list_medium_line_t4_g4_g2

0x9edb,	// (0x00016848) list_medium_line_t4_g4_g3_ParamLimits

0x9edb,	// (0x00016848) list_medium_line_t4_g4_g3

0x9edb,	// (0x00016848) list_medium_line_t4_g4_g4_ParamLimits

0x9edb,	// (0x00016848) list_medium_line_t4_g4_g4

0x0003,

0xf206,	// (0x0001bb73) list_medium_line_t4_g4_g_ParamLimits

0xf206,	// (0x0001bb73) list_medium_line_t4_g4_g

0xa1c6,	// (0x00016b33) list_medium_line_t4_g4_t1_ParamLimits

0xa1c6,	// (0x00016b33) list_medium_line_t4_g4_t1

0xa1c6,	// (0x00016b33) list_medium_line_t4_g4_t2_ParamLimits

0xa1c6,	// (0x00016b33) list_medium_line_t4_g4_t2

0xa1c6,	// (0x00016b33) list_medium_line_t4_g4_t3_ParamLimits

0xa1c6,	// (0x00016b33) list_medium_line_t4_g4_t3

0xa1c6,	// (0x00016b33) list_medium_line_t4_g4_t4_ParamLimits

0xa1c6,	// (0x00016b33) list_medium_line_t4_g4_t4

0x0003,

0xf20f,	// (0x0001bb7c) list_medium_line_t4_g4_t_ParamLimits

0xf20f,	// (0x0001bb7c) list_medium_line_t4_g4_t

0x350d,	// (0x0000fe7a) chi_dic_find_pane_g1

0x4352,	// (0x00010cbf) main_tport_pane

0xa75d,	// (0x000170ca) list_medium_line_plain_t1

0x9edb,	// (0x00016848) list_medium_line_t2_g2_g1_ParamLimits

0x9edb,	// (0x00016848) list_medium_line_t2_g2_g1

0x9edb,	// (0x00016848) list_medium_line_t2_g2_g2_ParamLimits

0x9edb,	// (0x00016848) list_medium_line_t2_g2_g2

0x0001,

0xf201,	// (0x0001bb6e) list_medium_line_t2_g2_g_ParamLimits

0xf201,	// (0x0001bb6e) list_medium_line_t2_g2_g

0xa1c6,	// (0x00016b33) list_medium_line_t2_g2_t1_ParamLimits

0xa1c6,	// (0x00016b33) list_medium_line_t2_g2_t1

0xa1c6,	// (0x00016b33) list_medium_line_t2_g2_t2_ParamLimits

0xa1c6,	// (0x00016b33) list_medium_line_t2_g2_t2

0x0001,

0xf1d6,	// (0x0001bb43) list_medium_line_t2_g2_t_ParamLimits

0xf1d6,	// (0x0001bb43) list_medium_line_t2_g2_t

0xd8c3,	// (0x0001a230) aid_sp_fs_list_icon_a_sm

0xd8cb,	// (0x0001a238) aid_sp_fs_list_icon_d

0xd8d3,	// (0x0001a240) aid_sp_fs_text_primary

0xd8dc,	// (0x0001a249) aid_sp_fs_text_secondary

0x9775,	// (0x000160e2) list_medium_line

0x9775,	// (0x000160e2) list_medium_line_g2

0x9775,	// (0x000160e2) list_medium_line_g3

0x9775,	// (0x000160e2) list_medium_line_plain

0x9775,	// (0x000160e2) list_medium_line_plain_t2

0x9775,	// (0x000160e2) list_medium_line_plain_t3

0x9775,	// (0x000160e2) list_medium_line_right_icon

0x9775,	// (0x000160e2) list_medium_line_right_iconx2

0x9775,	// (0x000160e2) list_medium_line_t2

0x9775,	// (0x000160e2) list_medium_line_t2_g2

0x9775,	// (0x000160e2) list_medium_line_t2_g3

0x9775,	// (0x000160e2) list_medium_line_t2_right_icon

0x9775,	// (0x000160e2) list_medium_line_t2_right_iconx2

0x9775,	// (0x000160e2) list_medium_line_t3

0x9775,	// (0x000160e2) list_medium_line_t3_g2

0x9775,	// (0x000160e2) list_medium_line_t3_g3

0x9775,	// (0x000160e2) list_medium_line_t3_right_iconx2

0x9775,	// (0x000160e2) list_medium_line_t4_g4

0x9775,	// (0x000160e2) list_medium_line_x2

0x9775,	// (0x000160e2) list_medium_line_x2_t2_g2

0x9775,	// (0x000160e2) list_medium_line_x2_t2_g3

0x9775,	// (0x000160e2) list_medium_line_x2_t2_g4

0x9775,	// (0x000160e2) list_medium_line_x2_t3

0x9775,	// (0x000160e2) list_medium_line_x2_t3_g2

0x9775,	// (0x000160e2) list_medium_line_x2_t3_g3

0x9775,	// (0x000160e2) list_medium_line_x2_t3_g4

0x9775,	// (0x000160e2) list_medium_line_x2_t4_g2

0x9775,	// (0x000160e2) list_medium_line_x2_t4_g4

0x9775,	// (0x000160e2) list_medium_line_x3

0x9775,	// (0x000160e2) list_medium_line_x3_t4

0x9775,	// (0x000160e2) list_medium_line_x3_t4_g4

0x9775,	// (0x000160e2) list_medium_line_x4_t4

0x9775,	// (0x000160e2) list_medium_line_x4_t4_g7

0x9775,	// (0x000160e2) list_medium_line_x4_t5

0x7072,	// (0x000139df) list_single_fs_dyc_pane_ParamLimits

0x7072,	// (0x000139df) list_single_fs_dyc_pane

0x9edb,	// (0x00016848) list_medium_line_x4_t4_g7_g1_ParamLimits

0x9edb,	// (0x00016848) list_medium_line_x4_t4_g7_g1

0x9edb,	// (0x00016848) list_medium_line_x4_t4_g7_g2_ParamLimits

0x9edb,	// (0x00016848) list_medium_line_x4_t4_g7_g2

0x9edb,	// (0x00016848) list_medium_line_x4_t4_g7_g3_ParamLimits

0x9edb,	// (0x00016848) list_medium_line_x4_t4_g7_g3

0x9edb,	// (0x00016848) list_medium_line_x4_t4_g7_g4_ParamLimits

0x9edb,	// (0x00016848) list_medium_line_x4_t4_g7_g4

0x9edb,	// (0x00016848) list_medium_line_x4_t4_g7_g5_ParamLimits

0x9edb,	// (0x00016848) list_medium_line_x4_t4_g7_g5

0x9edb,	// (0x00016848) list_medium_line_x4_t4_g7_g6_ParamLimits

0x9edb,	// (0x00016848) list_medium_line_x4_t4_g7_g6

0x9ee9,	// (0x00016856) list_medium_line_x4_t4_g7_g7_ParamLimits

0x9ee9,	// (0x00016856) list_medium_line_x4_t4_g7_g7

0x0006,

0xfb4d,	// (0x0001c4ba) list_medium_line_x4_t4_g7_g_ParamLimits

0xfb4d,	// (0x0001c4ba) list_medium_line_x4_t4_g7_g

0xa1c6,	// (0x00016b33) list_medium_line_x4_t4_g7_t1_ParamLimits

0xa1c6,	// (0x00016b33) list_medium_line_x4_t4_g7_t1

0xa1c6,	// (0x00016b33) list_medium_line_x4_t4_g7_t2_ParamLimits

0xa1c6,	// (0x00016b33) list_medium_line_x4_t4_g7_t2

0xa1c6,	// (0x00016b33) list_medium_line_x4_t4_g7_t3_ParamLimits

0xa1c6,	// (0x00016b33) list_medium_line_x4_t4_g7_t3

0xadaa,	// (0x00017717) list_medium_line_x4_t4_g7_t4_ParamLimits

0xadaa,	// (0x00017717) list_medium_line_x4_t4_g7_t4

0xadaa,	// (0x00017717) list_medium_line_x4_t4_g7_t5_ParamLimits

0xadaa,	// (0x00017717) list_medium_line_x4_t4_g7_t5

0x0004,

0xfb5c,	// (0x0001c4c9) list_medium_line_x4_t4_g7_t_ParamLimits

0xfb5c,	// (0x0001c4c9) list_medium_line_x4_t4_g7_t

0x77ac,	// (0x00014119) list_single_dyc_row_pane_ParamLimits

0x77ac,	// (0x00014119) list_single_dyc_row_pane

0x7ed2,	// (0x0001483f) call5_gesture_pane_ParamLimits

0x7ed2,	// (0x0001483f) call5_gesture_pane

0x7f28,	// (0x00014895) call5_windows_pane_ParamLimits

0x7f28,	// (0x00014895) call5_windows_pane

0x7f93,	// (0x00014900) call5_swipe_1_pane_cp_ParamLimits

0x7f93,	// (0x00014900) call5_swipe_1_pane_cp

0x7f9f,	// (0x0001490c) call5_swipe_2_pane_cp_ParamLimits

0x7f9f,	// (0x0001490c) call5_swipe_2_pane_cp

0xa1b4,	// (0x00016b21) call5_image_pane_cp

0x7fab,	// (0x00014918) popup_call5_audio_first_window_cp_ParamLimits

0x7fab,	// (0x00014918) popup_call5_audio_first_window_cp

0xe3ab,	// (0x0001ad18) call5_swipe_1_pane_g1_cp_ParamLimits

0xe3ab,	// (0x0001ad18) call5_swipe_1_pane_g1_cp

0xe418,	// (0x0001ad85) call5_swipe_1_pane_g2_cp

0xe3c4,	// (0x0001ad31) call5_swipe_1_pane_t1_cp_ParamLimits

0xe3c4,	// (0x0001ad31) call5_swipe_1_pane_t1_cp

0xe3ab,	// (0x0001ad18) call5_swipe_2_pane_g1_cp_ParamLimits

0xe3ab,	// (0x0001ad18) call5_swipe_2_pane_g1_cp

0xe420,	// (0x0001ad8d) call5_swipe_2_pane_g2_cp

0xe428,	// (0x0001ad95) call5_swipe_2_pane_t1_cp_ParamLimits

0xe428,	// (0x0001ad95) call5_swipe_2_pane_t1_cp

0x97e4,	// (0x00016151) main_sp_fs_email_pane

0xe43d,	// (0x0001adaa) main_sp_fs_listscroll_pane_te

0xe446,	// (0x0001adb3) popup_sp_fs_action_menu_pane_ParamLimits

0xe446,	// (0x0001adb3) popup_sp_fs_action_menu_pane

0xa1f4,	// (0x00016b61) bg_sp_fs_ctrlbar_pane_g1

0xe48a,	// (0x0001adf7) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xe493,	// (0x0001ae00) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xe49c,	// (0x0001ae09) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xa1f4,	// (0x00016b61) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfc4a,	// (0x0001c5b7) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xc24e,	// (0x00018bbb) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xc24e,	// (0x00018bbb) bg_sp_fs_ctrlbar_ddmenu_pane

0xe4a5,	// (0x0001ae12) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xe4a5,	// (0x0001ae12) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xe4b1,	// (0x0001ae1e) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xe4b1,	// (0x0001ae1e) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfc53,	// (0x0001c5c0) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfc53,	// (0x0001c5c0) main_sp_fs_ctrlbar_ddmenu_pane_g

0xe4bd,	// (0x0001ae2a) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xe4bd,	// (0x0001ae2a) main_sp_fs_ctrlbar_ddmenu_pane_t1

0xa1f4,	// (0x00016b61) list_medium_line_t2_right_icon_g1

0xa75d,	// (0x000170ca) list_medium_line_t2_right_icon_t1

0xa75d,	// (0x000170ca) list_medium_line_t2_right_icon_t2

0x0001,

0xfc58,	// (0x0001c5c5) list_medium_line_t2_right_icon_t

0xadbe,	// (0x0001772b) bg_sp_fs_ctrlbar_pane_ParamLimits

0xadbe,	// (0x0001772b) bg_sp_fs_ctrlbar_pane

0x8001,	// (0x0001496e) main_sp_fs_ctrlbar_button_pane_cp01

0x800b,	// (0x00014978) main_sp_fs_ctrlbar_ddmenu_pane

0xe50f,	// (0x0001ae7c) main_sp_fs_ctrlbar_pane_g1

0xe51b,	// (0x0001ae88) main_sp_fs_ctrlbar_pane_g2

0x0003,

0xfc5d,	// (0x0001c5ca) main_sp_fs_ctrlbar_pane_g

0x8049,	// (0x000149b6) main_sp_fs_ctrlbar_pane_t1

0x8088,	// (0x000149f5) main_sp_fs_ctrlbar_pane

0x80ac,	// (0x00014a19) main_sp_fs_listscroll_pane_te_cp01

0x80cc,	// (0x00014a39) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x80cc,	// (0x00014a39) popup_sp_fs_action_menu_pane_cp01

0x97e4,	// (0x00016151) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0x97e4,	// (0x00016151) bg_sp_fs_highlight_list_pane_cp01

0xe542,	// (0x0001aeaf) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0xe542,	// (0x0001aeaf) sp_fs_action_menu_list_gene_pane_g1

0xe551,	// (0x0001aebe) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xe551,	// (0x0001aebe) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfc6b,	// (0x0001c5d8) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfc6b,	// (0x0001c5d8) sp_fs_action_menu_list_gene_pane_g

0xe55e,	// (0x0001aecb) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0xe55e,	// (0x0001aecb) sp_fs_action_menu_list_gene_pane_t1

0xe576,	// (0x0001aee3) sp_fs_action_menu_list_gene_pane_ParamLimits

0xe576,	// (0x0001aee3) sp_fs_action_menu_list_gene_pane

0xe595,	// (0x0001af02) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xe595,	// (0x0001af02) popup_sp_fs_action_menu_bg_pane

0xe5a3,	// (0x0001af10) sp_fs_action_menu_list_pane_ParamLimits

0xe5a3,	// (0x0001af10) sp_fs_action_menu_list_pane

0xe5c3,	// (0x0001af30) sp_fs_scroll_pane_cp01_ParamLimits

0xe5c3,	// (0x0001af30) sp_fs_scroll_pane_cp01

0xa75d,	// (0x000170ca) list_medium_line_plain_t2_t1

0xa75d,	// (0x000170ca) list_medium_line_plain_t2_t2

0x0001,

0xfc58,	// (0x0001c5c5) list_medium_line_plain_t2_t

0xa75d,	// (0x000170ca) list_medium_line_plain_t3_t1

0xa75d,	// (0x000170ca) list_medium_line_plain_t3_t2

0xa75d,	// (0x000170ca) list_medium_line_plain_t3_t3

0x0002,

0xf2bc,	// (0x0001bc29) list_medium_line_plain_t3_t

0x9edb,	// (0x00016848) list_medium_line_x2_t2_g2_g1_ParamLimits

0x9edb,	// (0x00016848) list_medium_line_x2_t2_g2_g1

0x9edb,	// (0x00016848) list_medium_line_x2_t2_g2_g2_ParamLimits

0x9edb,	// (0x00016848) list_medium_line_x2_t2_g2_g2

0x0001,

0xf201,	// (0x0001bb6e) list_medium_line_x2_t2_g2_g_ParamLimits

0xf201,	// (0x0001bb6e) list_medium_line_x2_t2_g2_g

0xa1c6,	// (0x00016b33) list_medium_line_x2_t2_g2_t1_ParamLimits

0xa1c6,	// (0x00016b33) list_medium_line_x2_t2_g2_t1

0xa1c6,	// (0x00016b33) list_medium_line_x2_t2_g2_t2_ParamLimits

0xa1c6,	// (0x00016b33) list_medium_line_x2_t2_g2_t2

0x0001,

0xf1d6,	// (0x0001bb43) list_medium_line_x2_t2_g2_t_ParamLimits

0xf1d6,	// (0x0001bb43) list_medium_line_x2_t2_g2_t

0x9edb,	// (0x00016848) list_medium_line_x2_t4_g2_g1_ParamLimits

0x9edb,	// (0x00016848) list_medium_line_x2_t4_g2_g1

0x9edb,	// (0x00016848) list_medium_line_x2_t4_g2_g2_ParamLimits

0x9edb,	// (0x00016848) list_medium_line_x2_t4_g2_g2

0x0001,

0xf201,	// (0x0001bb6e) list_medium_line_x2_t4_g2_g_ParamLimits

0xf201,	// (0x0001bb6e) list_medium_line_x2_t4_g2_g

0xa1c6,	// (0x00016b33) list_medium_line_x2_t4_g2_t1_ParamLimits

0xa1c6,	// (0x00016b33) list_medium_line_x2_t4_g2_t1

0xa1c6,	// (0x00016b33) list_medium_line_x2_t4_g2_t2_ParamLimits

0xa1c6,	// (0x00016b33) list_medium_line_x2_t4_g2_t2

0xa1c6,	// (0x00016b33) list_medium_line_x2_t4_g2_t3_ParamLimits

0xa1c6,	// (0x00016b33) list_medium_line_x2_t4_g2_t3

0xa1c6,	// (0x00016b33) list_medium_line_x2_t4_g2_t4_ParamLimits

0xa1c6,	// (0x00016b33) list_medium_line_x2_t4_g2_t4

0x0003,

0xf20f,	// (0x0001bb7c) list_medium_line_x2_t4_g2_t_ParamLimits

0xf20f,	// (0x0001bb7c) list_medium_line_x2_t4_g2_t

0xa1f4,	// (0x00016b61) list_medium_line_t3_right_iconx2_g1

0xa1f4,	// (0x00016b61) list_medium_line_t3_right_iconx2_g2

0xa1f4,	// (0x00016b61) list_medium_line_t3_right_iconx2_g3

0x0002,

0xf3dd,	// (0x0001bd4a) list_medium_line_t3_right_iconx2_g

0xa75d,	// (0x000170ca) list_medium_line_t3_right_iconx2_t1

0xa75d,	// (0x000170ca) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfc58,	// (0x0001c5c5) list_medium_line_t3_right_iconx2_t

0x9edb,	// (0x00016848) list_medium_line_x3_t4_g4_g1_ParamLimits

0x9edb,	// (0x00016848) list_medium_line_x3_t4_g4_g1

0x9edb,	// (0x00016848) list_medium_line_x3_t4_g4_g2_ParamLimits

0x9edb,	// (0x00016848) list_medium_line_x3_t4_g4_g2

0x9edb,	// (0x00016848) list_medium_line_x3_t4_g4_g3_ParamLimits

0x9edb,	// (0x00016848) list_medium_line_x3_t4_g4_g3

0x9edb,	// (0x00016848) list_medium_line_x3_t4_g4_g4_ParamLimits

0x9edb,	// (0x00016848) list_medium_line_x3_t4_g4_g4

0x0003,

0xf206,	// (0x0001bb73) list_medium_line_x3_t4_g4_g_ParamLimits

0xf206,	// (0x0001bb73) list_medium_line_x3_t4_g4_g

0xa1c6,	// (0x00016b33) list_medium_line_x3_t4_g4_t1_ParamLimits

0xa1c6,	// (0x00016b33) list_medium_line_x3_t4_g4_t1

0xa1c6,	// (0x00016b33) list_medium_line_x3_t4_g4_t2_ParamLimits

0xa1c6,	// (0x00016b33) list_medium_line_x3_t4_g4_t2

0xa1c6,	// (0x00016b33) list_medium_line_x3_t4_g4_t3_ParamLimits

0xa1c6,	// (0x00016b33) list_medium_line_x3_t4_g4_t3

0xa1c6,	// (0x00016b33) list_medium_line_x3_t4_g4_t4_ParamLimits

0xa1c6,	// (0x00016b33) list_medium_line_x3_t4_g4_t4

0x0003,

0xf20f,	// (0x0001bb7c) list_medium_line_x3_t4_g4_t_ParamLimits

0xf20f,	// (0x0001bb7c) list_medium_line_x3_t4_g4_t

0x80f1,	// (0x00014a5e) list_single_dyc_row_text_pane_t1_ParamLimits

0x80f1,	// (0x00014a5e) list_single_dyc_row_text_pane_t1

0x813a,	// (0x00014aa7) list_single_dyc_row_text_pane_t2_ParamLimits

0x813a,	// (0x00014aa7) list_single_dyc_row_text_pane_t2

0xe5e9,	// (0x0001af56) list_single_dyc_row_text_pane_t3_ParamLimits

0xe5e9,	// (0x0001af56) list_single_dyc_row_text_pane_t3

0x0005,

0xfc70,	// (0x0001c5dd) list_single_dyc_row_text_pane_t_ParamLimits

0xfc70,	// (0x0001c5dd) list_single_dyc_row_text_pane_t

0xe60d,	// (0x0001af7a) list_single_dyc_row_pane_g1_ParamLimits

0xe60d,	// (0x0001af7a) list_single_dyc_row_pane_g1

0xe619,	// (0x0001af86) list_single_dyc_row_pane_g2_ParamLimits

0xe619,	// (0x0001af86) list_single_dyc_row_pane_g2

0xe625,	// (0x0001af92) list_single_dyc_row_pane_g3_ParamLimits

0xe625,	// (0x0001af92) list_single_dyc_row_pane_g3

0xe631,	// (0x0001af9e) list_single_dyc_row_pane_g4_ParamLimits

0xe631,	// (0x0001af9e) list_single_dyc_row_pane_g4

0x0003,

0xfc7d,	// (0x0001c5ea) list_single_dyc_row_pane_g_ParamLimits

0xfc7d,	// (0x0001c5ea) list_single_dyc_row_pane_g

0xe63d,	// (0x0001afaa) list_single_dyc_row_text_pane_ParamLimits

0xe63d,	// (0x0001afaa) list_single_dyc_row_text_pane

0x9775,	// (0x000160e2) bg_sp_fs_scroll_pane

0xe65c,	// (0x0001afc9) thumb_sp_fs_scroll_pane

0x9edb,	// (0x00016848) list_medium_line_g1_ParamLimits

0x9edb,	// (0x00016848) list_medium_line_g1

0xa1c6,	// (0x00016b33) list_medium_line_t1_ParamLimits

0xa1c6,	// (0x00016b33) list_medium_line_t1

0x9edb,	// (0x00016848) list_medium_line_x2_g1_ParamLimits

0x9edb,	// (0x00016848) list_medium_line_x2_g1

0x9edb,	// (0x00016848) list_medium_line_x2_g2_ParamLimits

0x9edb,	// (0x00016848) list_medium_line_x2_g2

0x0001,

0xf201,	// (0x0001bb6e) list_medium_line_x2_g_ParamLimits

0xf201,	// (0x0001bb6e) list_medium_line_x2_g

0xa1c6,	// (0x00016b33) list_medium_line_x2_t1_ParamLimits

0xa1c6,	// (0x00016b33) list_medium_line_x2_t1

0x9edb,	// (0x00016848) list_medium_line_x3_g1_ParamLimits

0x9edb,	// (0x00016848) list_medium_line_x3_g1

0xe665,	// (0x0001afd2) list_medium_line_x3_g2_ParamLimits

0xe665,	// (0x0001afd2) list_medium_line_x3_g2

0x0001,

0xfc86,	// (0x0001c5f3) list_medium_line_x3_g_ParamLimits

0xfc86,	// (0x0001c5f3) list_medium_line_x3_g

0xe673,	// (0x0001afe0) list_medium_line_x3_t1_ParamLimits

0xe673,	// (0x0001afe0) list_medium_line_x3_t1

0xe687,	// (0x0001aff4) thumb_sp_fs_scroll_pane_g1

0xe690,	// (0x0001affd) thumb_sp_fs_scroll_pane_g2

0xe699,	// (0x0001b006) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfc8b,	// (0x0001c5f8) thumb_sp_fs_scroll_pane_g

0xe687,	// (0x0001aff4) bg_sp_fs_scroll_pane_g1

0xe690,	// (0x0001affd) bg_sp_fs_scroll_pane_g2

0xe699,	// (0x0001b006) bg_sp_fs_scroll_pane_g3

0x0002,

0xfc8b,	// (0x0001c5f8) bg_sp_fs_scroll_pane_g

0x9edb,	// (0x00016848) list_medium_line_x2_t3_g4_g1_ParamLimits

0x9edb,	// (0x00016848) list_medium_line_x2_t3_g4_g1

0x9edb,	// (0x00016848) list_medium_line_x2_t3_g4_g2_ParamLimits

0x9edb,	// (0x00016848) list_medium_line_x2_t3_g4_g2

0x9edb,	// (0x00016848) list_medium_line_x2_t3_g4_g3_ParamLimits

0x9edb,	// (0x00016848) list_medium_line_x2_t3_g4_g3

0x9edb,	// (0x00016848) list_medium_line_x2_t3_g4_g4_ParamLimits

0x9edb,	// (0x00016848) list_medium_line_x2_t3_g4_g4

0x0003,

0xf206,	// (0x0001bb73) list_medium_line_x2_t3_g4_g_ParamLimits

0xf206,	// (0x0001bb73) list_medium_line_x2_t3_g4_g

0xa1c6,	// (0x00016b33) list_medium_line_x2_t3_g4_t1_ParamLimits

0xa1c6,	// (0x00016b33) list_medium_line_x2_t3_g4_t1

0xa1c6,	// (0x00016b33) list_medium_line_x2_t3_g4_t2_ParamLimits

0xa1c6,	// (0x00016b33) list_medium_line_x2_t3_g4_t2

0xa1c6,	// (0x00016b33) list_medium_line_x2_t3_g4_t3_ParamLimits

0xa1c6,	// (0x00016b33) list_medium_line_x2_t3_g4_t3

0x0002,

0xf1fa,	// (0x0001bb67) list_medium_line_x2_t3_g4_t_ParamLimits

0xf1fa,	// (0x0001bb67) list_medium_line_x2_t3_g4_t

0x9edb,	// (0x00016848) list_medium_line_g2_g1_ParamLimits

0x9edb,	// (0x00016848) list_medium_line_g2_g1

0x9edb,	// (0x00016848) list_medium_line_g2_g2_ParamLimits

0x9edb,	// (0x00016848) list_medium_line_g2_g2

0x0001,

0xf201,	// (0x0001bb6e) list_medium_line_g2_g_ParamLimits

0xf201,	// (0x0001bb6e) list_medium_line_g2_g

0xa1c6,	// (0x00016b33) list_medium_line_g2_t1_ParamLimits

0xa1c6,	// (0x00016b33) list_medium_line_g2_t1

0x9edb,	// (0x00016848) list_medium_line_t3_g2_g1_ParamLimits

0x9edb,	// (0x00016848) list_medium_line_t3_g2_g1

0x9edb,	// (0x00016848) list_medium_line_t3_g2_g2_ParamLimits

0x9edb,	// (0x00016848) list_medium_line_t3_g2_g2

0x0001,

0xf201,	// (0x0001bb6e) list_medium_line_t3_g2_g_ParamLimits

0xf201,	// (0x0001bb6e) list_medium_line_t3_g2_g

0xa1c6,	// (0x00016b33) list_medium_line_t3_g2_t1_ParamLimits

0xa1c6,	// (0x00016b33) list_medium_line_t3_g2_t1

0xa1c6,	// (0x00016b33) list_medium_line_t3_g2_t2_ParamLimits

0xa1c6,	// (0x00016b33) list_medium_line_t3_g2_t2

0xa1c6,	// (0x00016b33) list_medium_line_t3_g2_t3_ParamLimits

0xa1c6,	// (0x00016b33) list_medium_line_t3_g2_t3

0x0002,

0xf1fa,	// (0x0001bb67) list_medium_line_t3_g2_t_ParamLimits

0xf1fa,	// (0x0001bb67) list_medium_line_t3_g2_t

0xa1f4,	// (0x00016b61) list_medium_line_right_icon_g1

0xa75d,	// (0x000170ca) list_medium_line_right_icon_t1

0x9edb,	// (0x00016848) list_medium_line_t2_g1_ParamLimits

0x9edb,	// (0x00016848) list_medium_line_t2_g1

0xa1c6,	// (0x00016b33) list_medium_line_t2_t1_ParamLimits

0xa1c6,	// (0x00016b33) list_medium_line_t2_t1

0xa1c6,	// (0x00016b33) list_medium_line_t2_t2_ParamLimits

0xa1c6,	// (0x00016b33) list_medium_line_t2_t2

0x0001,

0xf1d6,	// (0x0001bb43) list_medium_line_t2_t_ParamLimits

0xf1d6,	// (0x0001bb43) list_medium_line_t2_t

0x9edb,	// (0x00016848) list_medium_line_t3_g1_ParamLimits

0x9edb,	// (0x00016848) list_medium_line_t3_g1

0xa1c6,	// (0x00016b33) list_medium_line_t3_t1_ParamLimits

0xa1c6,	// (0x00016b33) list_medium_line_t3_t1

0xa1c6,	// (0x00016b33) list_medium_line_t3_t2_ParamLimits

0xa1c6,	// (0x00016b33) list_medium_line_t3_t2

0xa1c6,	// (0x00016b33) list_medium_line_t3_t3_ParamLimits

0xa1c6,	// (0x00016b33) list_medium_line_t3_t3

0x0002,

0xf1fa,	// (0x0001bb67) list_medium_line_t3_t_ParamLimits

0xf1fa,	// (0x0001bb67) list_medium_line_t3_t

0x9edb,	// (0x00016848) list_medium_line_g3_g1_ParamLimits

0x9edb,	// (0x00016848) list_medium_line_g3_g1

0x9edb,	// (0x00016848) list_medium_line_g3_g2_ParamLimits

0x9edb,	// (0x00016848) list_medium_line_g3_g2

0x9edb,	// (0x00016848) list_medium_line_g3_g3_ParamLimits

0x9edb,	// (0x00016848) list_medium_line_g3_g3

0x0002,

0xf1f3,	// (0x0001bb60) list_medium_line_g3_g_ParamLimits

0xf1f3,	// (0x0001bb60) list_medium_line_g3_g

0xa1c6,	// (0x00016b33) list_medium_line_g3_t1_ParamLimits

0xa1c6,	// (0x00016b33) list_medium_line_g3_t1

0x9edb,	// (0x00016848) list_medium_line_t2_g3_g1_ParamLimits

0x9edb,	// (0x00016848) list_medium_line_t2_g3_g1

0x9edb,	// (0x00016848) list_medium_line_t2_g3_g2_ParamLimits

0x9edb,	// (0x00016848) list_medium_line_t2_g3_g2

0x9edb,	// (0x00016848) list_medium_line_t2_g3_g3_ParamLimits

0x9edb,	// (0x00016848) list_medium_line_t2_g3_g3

0x0002,

0xf1f3,	// (0x0001bb60) list_medium_line_t2_g3_g_ParamLimits

0xf1f3,	// (0x0001bb60) list_medium_line_t2_g3_g

0xa1c6,	// (0x00016b33) list_medium_line_t2_g3_t1_ParamLimits

0xa1c6,	// (0x00016b33) list_medium_line_t2_g3_t1

0xa1c6,	// (0x00016b33) list_medium_line_t2_g3_t2_ParamLimits

0xa1c6,	// (0x00016b33) list_medium_line_t2_g3_t2

0x0001,

0xf1d6,	// (0x0001bb43) list_medium_line_t2_g3_t_ParamLimits

0xf1d6,	// (0x0001bb43) list_medium_line_t2_g3_t

0x9edb,	// (0x00016848) list_medium_line_t3_g3_g1_ParamLimits

0x9edb,	// (0x00016848) list_medium_line_t3_g3_g1

0x9edb,	// (0x00016848) list_medium_line_t3_g3_g2_ParamLimits

0x9edb,	// (0x00016848) list_medium_line_t3_g3_g2

0x9edb,	// (0x00016848) list_medium_line_t3_g3_g3_ParamLimits

0x9edb,	// (0x00016848) list_medium_line_t3_g3_g3

0x0002,

0xf1f3,	// (0x0001bb60) list_medium_line_t3_g3_g_ParamLimits

0xf1f3,	// (0x0001bb60) list_medium_line_t3_g3_g

0xa1c6,	// (0x00016b33) list_medium_line_t3_g3_t1_ParamLimits

0xa1c6,	// (0x00016b33) list_medium_line_t3_g3_t1

0xa1c6,	// (0x00016b33) list_medium_line_t3_g3_t2_ParamLimits

0xa1c6,	// (0x00016b33) list_medium_line_t3_g3_t2

0xa1c6,	// (0x00016b33) list_medium_line_t3_g3_t3_ParamLimits

0xa1c6,	// (0x00016b33) list_medium_line_t3_g3_t3

0x0002,

0xf1fa,	// (0x0001bb67) list_medium_line_t3_g3_t_ParamLimits

0xf1fa,	// (0x0001bb67) list_medium_line_t3_g3_t

0xa1f4,	// (0x00016b61) list_medium_line_right_iconx2_g1

0xa1f4,	// (0x00016b61) list_medium_line_right_iconx2_g2

0x0001,

0xf3d8,	// (0x0001bd45) list_medium_line_right_iconx2_g

0xa75d,	// (0x000170ca) list_medium_line_right_iconx2_t1

0xa1f4,	// (0x00016b61) list_medium_line_t2_right_iconx2_g1

0xa1f4,	// (0x00016b61) list_medium_line_t2_right_iconx2_g2

0x0001,

0xf3d8,	// (0x0001bd45) list_medium_line_t2_right_iconx2_g

0xa75d,	// (0x000170ca) list_medium_line_t2_right_iconx2_t1

0xa75d,	// (0x000170ca) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfc58,	// (0x0001c5c5) list_medium_line_t2_right_iconx2_t

0xa75d,	// (0x000170ca) list_medium_line_x4_t4_t1

0xa75d,	// (0x000170ca) list_medium_line_x4_t4_t2

0xa75d,	// (0x000170ca) list_medium_line_x4_t4_t3

0xa75d,	// (0x000170ca) list_medium_line_x4_t4_t4

0x0003,

0xf2c3,	// (0x0001bc30) list_medium_line_x4_t4_t

0x82b2,	// (0x00014c1f) tport_appsw_pane_ParamLimits

0x82b2,	// (0x00014c1f) tport_appsw_pane

0x82ca,	// (0x00014c37) tport_contact_pane_ParamLimits

0x82ca,	// (0x00014c37) tport_contact_pane

0x82e2,	// (0x00014c4f) tport_listscroll_pane_ParamLimits

0x82e2,	// (0x00014c4f) tport_listscroll_pane

0x82fc,	// (0x00014c69) cell_tport_appsw_pane_ParamLimits

0x82fc,	// (0x00014c69) cell_tport_appsw_pane

0xad88,	// (0x000176f5) tport_appsw_pane_g1_ParamLimits

0xad88,	// (0x000176f5) tport_appsw_pane_g1

0xe6a2,	// (0x0001b00f) tport_contact_pane_g1

0xdee9,	// (0x0001a856) tport_contact_pane_t1

0xe6ab,	// (0x0001b018) tport_contact_pane_t2

0x0001,

0xfc92,	// (0x0001c5ff) tport_contact_pane_t

0xe6b9,	// (0x0001b026) list_tport_pane

0xe6c2,	// (0x0001b02f) scroll_pane_cp_030

0x8344,	// (0x00014cb1) cell_tport_appsw_pane_g1

0x8354,	// (0x00014cc1) cell_tport_appsw_pane_t1

0x8362,	// (0x00014ccf) grid_highlight_pane_cp019

0x836a,	// (0x00014cd7) list_tport_double_graphic_pane_ParamLimits

0x836a,	// (0x00014cd7) list_tport_double_graphic_pane

0x97e4,	// (0x00016151) list_highlight_pane_cp023_ParamLimits

0x97e4,	// (0x00016151) list_highlight_pane_cp023

0x8377,	// (0x00014ce4) list_tport_double_graphic_pane_g1_ParamLimits

0x8377,	// (0x00014ce4) list_tport_double_graphic_pane_g1

0x8384,	// (0x00014cf1) list_tport_double_graphic_pane_t1_ParamLimits

0x8384,	// (0x00014cf1) list_tport_double_graphic_pane_t1

0x8399,	// (0x00014d06) list_tport_double_graphic_pane_t2_ParamLimits

0x8399,	// (0x00014d06) list_tport_double_graphic_pane_t2

0x0001,

0xfc9e,	// (0x0001c60b) list_tport_double_graphic_pane_t_ParamLimits

0xfc9e,	// (0x0001c60b) list_tport_double_graphic_pane_t

0x9775,	// (0x000160e2) main_cale_note_pane

0x60fa,	// (0x00012a67) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x60fa,	// (0x00012a67) cell_vitu2_function_top_wide_pane_cp01

0x7b48,	// (0x000144b5) wait_bar_pane_cp05_ParamLimits

0x97e4,	// (0x00016151) listscroll_cmail_pane

0xe6cb,	// (0x0001b038) list_cmail_pane

0x83ab,	// (0x00014d18) list_cmail_body_pane

0x83c0,	// (0x00014d2d) list_single_cmail_header_caption_pane

0x83d6,	// (0x00014d43) list_single_cmail_header_detail_pane_ParamLimits

0x83d6,	// (0x00014d43) list_single_cmail_header_detail_pane

0xe6db,	// (0x0001b048) list_single_cmail_header_caption_pane_t1

0x83ff,	// (0x00014d6c) list_single_cmail_header_detail_pane_g1_ParamLimits

0x83ff,	// (0x00014d6c) list_single_cmail_header_detail_pane_g1

0xe6f2,	// (0x0001b05f) list_single_cmail_header_detail_pane_g2_ParamLimits

0xe6f2,	// (0x0001b05f) list_single_cmail_header_detail_pane_g2

0x0002,

0xfca3,	// (0x0001c610) list_single_cmail_header_detail_pane_g_ParamLimits

0xfca3,	// (0x0001c610) list_single_cmail_header_detail_pane_g

0xe70b,	// (0x0001b078) list_single_cmail_header_detail_pane_t1_ParamLimits

0xe70b,	// (0x0001b078) list_single_cmail_header_detail_pane_t1

0xe76b,	// (0x0001b0d8) list_single_cmail_header_editor_pane_bg_ParamLimits

0xe76b,	// (0x0001b0d8) list_single_cmail_header_editor_pane_bg

0xe046,	// (0x0001a9b3) list_cmail_body_pane_g1

0xe782,	// (0x0001b0ef) list_cmail_body_pane_t1

0xd264,	// (0x00019bd1) list_single_cmail_header_editor_pane_bg_g1

0xa405,	// (0x00016d72) list_single_cmail_header_editor_pane_bg_g1_copy1

0xd274,	// (0x00019be1) list_single_cmail_header_editor_pane_bg_g1_copy2

0xd26c,	// (0x00019bd9) list_single_cmail_header_editor_pane_bg_g1_copy3

0xd519,	// (0x00019e86) list_single_cmail_header_editor_pane_bg_g1_copy4

0xd294,	// (0x00019c01) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xd284,	// (0x00019bf1) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xd28c,	// (0x00019bf9) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xa3e5,	// (0x00016d52) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0x8417,	// (0x00014d84) calenote_gesture_pane_ParamLimits

0x8417,	// (0x00014d84) calenote_gesture_pane

0x8437,	// (0x00014da4) calenote_window_pane_ParamLimits

0x8437,	// (0x00014da4) calenote_window_pane

0xe790,	// (0x0001b0fd) popup_note_window_cp01

0x8453,	// (0x00014dc0) calenote_swipe_1_pane_ParamLimits

0x8453,	// (0x00014dc0) calenote_swipe_1_pane

0x7f9f,	// (0x0001490c) calenote_swipe_2_pane_ParamLimits

0x7f9f,	// (0x0001490c) calenote_swipe_2_pane

0xe3ab,	// (0x0001ad18) calenote_swipe_1_pane_g1_ParamLimits

0xe3ab,	// (0x0001ad18) calenote_swipe_1_pane_g1

0xe3b8,	// (0x0001ad25) calenote_swipe_1_pane_g2_ParamLimits

0xe3b8,	// (0x0001ad25) calenote_swipe_1_pane_g2

0x0001,

0xfc40,	// (0x0001c5ad) calenote_swipe_1_pane_g_ParamLimits

0xfc40,	// (0x0001c5ad) calenote_swipe_1_pane_g

0xe7a2,	// (0x0001b10f) calenote_swipe_1_pane_t1_ParamLimits

0xe7a2,	// (0x0001b10f) calenote_swipe_1_pane_t1

0xe3ab,	// (0x0001ad18) calenote_swipe_2_pane_g1_ParamLimits

0xe3ab,	// (0x0001ad18) calenote_swipe_2_pane_g1

0xe7c1,	// (0x0001b12e) calenote_swipe_2_pane_g2_ParamLimits

0xe7c1,	// (0x0001b12e) calenote_swipe_2_pane_g2

0x0001,

0xfcaf,	// (0x0001c61c) calenote_swipe_2_pane_g_ParamLimits

0xfcaf,	// (0x0001c61c) calenote_swipe_2_pane_g

0xe7cd,	// (0x0001b13a) calenote_swipe_2_pane_t1_ParamLimits

0xe7cd,	// (0x0001b13a) calenote_swipe_2_pane_t1

0x9775,	// (0x000160e2) main_mup_navstr_pane

0x4fbd,	// (0x0001192a) main_mup3_pane_t7_ParamLimits

0x4fbd,	// (0x0001192a) main_mup3_pane_t7

0xce3e,	// (0x000197ab) main_mp4_pane_g6_ParamLimits

0xce3e,	// (0x000197ab) main_mp4_pane_g6

0xd091,	// (0x000199fe) main_image3_pane_t4_ParamLimits

0xd091,	// (0x000199fe) main_image3_pane_t4

0x8468,	// (0x00014dd5) popup_navstr_preview_pane_ParamLimits

0x8468,	// (0x00014dd5) popup_navstr_preview_pane

0x847c,	// (0x00014de9) scroll_navstr_pane_ParamLimits

0x847c,	// (0x00014de9) scroll_navstr_pane

0x9775,	// (0x000160e2) bg_popup_preview_window_pane_cp04

0xe7f4,	// (0x0001b161) popup_navstr_preview_pane_t1

0x8490,	// (0x00014dfd) scroll_navstr_pane_g1_ParamLimits

0x8490,	// (0x00014dfd) scroll_navstr_pane_g1

0x84a4,	// (0x00014e11) scroll_navstr_pane_t1_ParamLimits

0x84a4,	// (0x00014e11) scroll_navstr_pane_t1

0xe799,	// (0x0001b106) bg_button_pane_cp014

0xe799,	// (0x0001b106) bg_button_pane_cp030

0x7e78,	// (0x000147e5) list_double_fisheye_pane_g4_ParamLimits

0x7e78,	// (0x000147e5) list_double_fisheye_pane_g4

0x7e84,	// (0x000147f1) list_double_fisheye_pane_g5_ParamLimits

0x7e84,	// (0x000147f1) list_double_fisheye_pane_g5

0xe0b5,	// (0x0001aa22) sp_fs_scroll_pane_cp03

0xe50f,	// (0x0001ae7c) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xe51b,	// (0x0001ae88) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfc5d,	// (0x0001c5ca) main_sp_fs_ctrlbar_pane_g_ParamLimits

0x8049,	// (0x000149b6) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xe6d3,	// (0x0001b040) sp_fs_scroll_pane_cp02

0xa0fc,	// (0x00016a69) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0xa0fc,	// (0x00016a69) popup_sp_fs_calendar_preview_list_single_pane

0x9775,	// (0x000160e2) main_cam6_pano_pane

0x97e4,	// (0x00016151) main_mup3_pane_ParamLimits

0x9775,	// (0x000160e2) main_phacti_pane

0x7a1b,	// (0x00014388) bg_button_pane_cp11

0x7a35,	// (0x000143a2) main_mobtv_info_pane_g2_ParamLimits

0x7a35,	// (0x000143a2) main_mobtv_info_pane_g2

0x0001,

0xfbbd,	// (0x0001c52a) main_mobtv_info_pane_g_ParamLimits

0xfbbd,	// (0x0001c52a) main_mobtv_info_pane_g

0x7c12,	// (0x0001457f) sc_clock_pane_t5_ParamLimits

0x7c12,	// (0x0001457f) sc_clock_pane_t5

0x7cda,	// (0x00014647) main_radioblah_pane_g1_ParamLimits

0xe2f7,	// (0x0001ac64) main_radioblah_pane_t3_ParamLimits

0xe2f7,	// (0x0001ac64) main_radioblah_pane_t3

0xe30f,	// (0x0001ac7c) main_radioblah_pane_t4_ParamLimits

0xe30f,	// (0x0001ac7c) main_radioblah_pane_t4

0x7d02,	// (0x0001466f) main_radioblah_text_pane_ParamLimits

0x7d02,	// (0x0001466f) main_radioblah_text_pane

0x7d14,	// (0x00014681) main_radioblah_info_pane_g1_ParamLimits

0x7dad,	// (0x0001471a) main_radioblah_info_pane_t4_ParamLimits

0x7dad,	// (0x0001471a) main_radioblah_info_pane_t4

0x97e4,	// (0x00016151) main_sp_fs_calendar_pane

0x84bb,	// (0x00014e28) main_phacti_pane_g1

0x84c3,	// (0x00014e30) phacti_note_pane_ParamLimits

0x84c3,	// (0x00014e30) phacti_note_pane

0xe80b,	// (0x0001b178) phacti_term_pane_ParamLimits

0xe80b,	// (0x0001b178) phacti_term_pane

0xe820,	// (0x0001b18d) phacti_note_pane_t1_ParamLimits

0xe820,	// (0x0001b18d) phacti_note_pane_t1

0xe837,	// (0x0001b1a4) phacti_term_pane_g1

0xe83f,	// (0x0001b1ac) phacti_term_pane_t1_ParamLimits

0xe83f,	// (0x0001b1ac) phacti_term_pane_t1

0xe869,	// (0x0001b1d6) popup_sp_fs_calendar_preview_list_single_pane_g1

0xa19b,	// (0x00016b08) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfcb9,	// (0x0001c626) popup_sp_fs_calendar_preview_list_single_pane_g

0xe871,	// (0x0001b1de) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xe871,	// (0x0001b1de) popup_sp_fs_calendar_preview_list_single_pane_t1

0xe887,	// (0x0001b1f4) aid_popup_sp_fs_bg_corner_pane

0xa1f4,	// (0x00016b61) popup_sp_fs_calendar_preview_bg_pane_g1

0x9775,	// (0x000160e2) popup_sp_fs_calendar_preview_bg_pane

0xe88f,	// (0x0001b1fc) popup_sp_fs_calendar_preview_list_pane

0xadbe,	// (0x0001772b) bg_main_sp_fs_cale_pane_ParamLimits

0xadbe,	// (0x0001772b) bg_main_sp_fs_cale_pane

0xe8a0,	// (0x0001b20d) listscroll_cale_mrui_pane_ParamLimits

0xe8a0,	// (0x0001b20d) listscroll_cale_mrui_pane

0xe8b5,	// (0x0001b222) listscroll_sp_fs_schedule_track_pane

0xe8be,	// (0x0001b22b) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0xe8be,	// (0x0001b22b) main_sp_fs_ctrlbar_pane_cp01

0xe8d1,	// (0x0001b23e) main_sp_fs_ribbon_pane

0xe8d9,	// (0x0001b246) popup_sp_fs_cale_preview_window

0x8538,	// (0x00014ea5) list_single_sp_fs_schedule_track_pane_ParamLimits

0x8538,	// (0x00014ea5) list_single_sp_fs_schedule_track_pane

0x97e4,	// (0x00016151) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0x97e4,	// (0x00016151) bg_sp_fs_highlight_list_pane_cp03

0x854b,	// (0x00014eb8) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0x854b,	// (0x00014eb8) list_single_sp_fs_schedule_track_pane_g1

0x8557,	// (0x00014ec4) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0x8557,	// (0x00014ec4) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfcbe,	// (0x0001c62b) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfcbe,	// (0x0001c62b) list_single_sp_fs_schedule_track_pane_g

0x8563,	// (0x00014ed0) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0x8563,	// (0x00014ed0) list_single_sp_fs_schedule_track_pane_t1

0x857d,	// (0x00014eea) sp_fs_schedule_track_pane_ParamLimits

0x857d,	// (0x00014eea) sp_fs_schedule_track_pane

0xe8eb,	// (0x0001b258) sp_fs_schedule_track_pane_g1

0xe8f3,	// (0x0001b260) sp_fs_schedule_track_pane_g2

0xe8fb,	// (0x0001b268) sp_fs_schedule_track_pane_g3

0xe903,	// (0x0001b270) sp_fs_schedule_track_pane_g4

0xe90b,	// (0x0001b278) sp_fs_schedule_track_pane_g5

0x0004,

0xfcc3,	// (0x0001c630) sp_fs_schedule_track_pane_g

0xd264,	// (0x00019bd1) bg_sp_fs_schedule_viewer_highlight_g1

0xa405,	// (0x00016d72) bg_sp_fs_schedule_viewer_highlight_g2

0xd26c,	// (0x00019bd9) bg_sp_fs_schedule_viewer_highlight_g3

0xd274,	// (0x00019be1) bg_sp_fs_schedule_viewer_highlight_g4

0xd519,	// (0x00019e86) bg_sp_fs_schedule_viewer_highlight_g5

0xd284,	// (0x00019bf1) bg_sp_fs_schedule_viewer_highlight_g6

0xd28c,	// (0x00019bf9) bg_sp_fs_schedule_viewer_highlight_g7

0xd294,	// (0x00019c01) bg_sp_fs_schedule_viewer_highlight_g8

0xa3e5,	// (0x00016d52) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfcce,	// (0x0001c63b) bg_sp_fs_schedule_viewer_highlight_g

0x9775,	// (0x000160e2) bg_main_sp_fs_ribbon_pane

0x858e,	// (0x00014efb) main_sp_fs_ribbon_pane_g1

0xe913,	// (0x0001b280) main_sp_fs_ribbon_pane_t1

0x8597,	// (0x00014f04) main_sp_fs_ribbon_pane_t2

0xe922,	// (0x0001b28f) main_sp_fs_ribbon_pane_t3

0x0002,

0xfce1,	// (0x0001c64e) main_sp_fs_ribbon_pane_t

0xe931,	// (0x0001b29e) main_sp_fs_ribbon_scheduler_pane

0xe939,	// (0x0001b2a6) bg_main_sp_fs_ribbon_pane_g1

0xe942,	// (0x0001b2af) bg_main_sp_fs_ribbon_pane_g2

0xe94b,	// (0x0001b2b8) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfce8,	// (0x0001c655) bg_main_sp_fs_ribbon_pane_g

0xe953,	// (0x0001b2c0) main_sp_fs_ribbon_scheduler_pane_g1

0xe95c,	// (0x0001b2c9) main_sp_fs_ribbon_scheduler_pane_g2

0xe965,	// (0x0001b2d2) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfcef,	// (0x0001c65c) main_sp_fs_ribbon_scheduler_pane_g

0xe96e,	// (0x0001b2db) list_cale_mrui_pane

0x85a6,	// (0x00014f13) sp_fs_scroll_pane_cp07_ParamLimits

0x85a6,	// (0x00014f13) sp_fs_scroll_pane_cp07

0x85c2,	// (0x00014f2f) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0x85c2,	// (0x00014f2f) bg_sp_fs_schedule_viewer_highlight

0xe97b,	// (0x0001b2e8) list_single_sp_fs_schedule_track_pane_cp01

0xe983,	// (0x0001b2f0) list_sp_fs_schedule_track_pane

0xe98b,	// (0x0001b2f8) sp_fs_scroll_pane_cp06_ParamLimits

0xe98b,	// (0x0001b2f8) sp_fs_scroll_pane_cp06

0xa1f4,	// (0x00016b61) bgmain_sp_fs_calendar_pane_g1

0x85d2,	// (0x00014f3f) list_single_cale_mrui_pane_ParamLimits

0x85d2,	// (0x00014f3f) list_single_cale_mrui_pane

0xe99d,	// (0x0001b30a) list_single_cale_mrui_row_pane_ParamLimits

0xe99d,	// (0x0001b30a) list_single_cale_mrui_row_pane

0xe9aa,	// (0x0001b317) list_single_cale_mrui_row_pane_g1_ParamLimits

0xe9aa,	// (0x0001b317) list_single_cale_mrui_row_pane_g1

0xe9ef,	// (0x0001b35c) list_single_cale_mrui_row_pane_t1_ParamLimits

0xe9ef,	// (0x0001b35c) list_single_cale_mrui_row_pane_t1

0x85f2,	// (0x00014f5f) list_single_cale_mrui_row_pane_t2_ParamLimits

0x85f2,	// (0x00014f5f) list_single_cale_mrui_row_pane_t2

0xea01,	// (0x0001b36e) list_single_cale_mrui_row_pane_t3_ParamLimits

0xea01,	// (0x0001b36e) list_single_cale_mrui_row_pane_t3

0xea30,	// (0x0001b39d) list_single_cale_mrui_row_pane_t4_ParamLimits

0xea30,	// (0x0001b39d) list_single_cale_mrui_row_pane_t4

0x0003,

0xfcfd,	// (0x0001c66a) list_single_cale_mrui_row_pane_t_ParamLimits

0xfcfd,	// (0x0001c66a) list_single_cale_mrui_row_pane_t

0x865a,	// (0x00014fc7) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x865a,	// (0x00014fc7) list_single_cmail_header_editor_pane_bg_cp01

0x8680,	// (0x00014fed) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x8680,	// (0x00014fed) list_single_cmail_header_editor_pane_bg_cp02

0x86a0,	// (0x0001500d) main_radioblah_text_pane_t1_ParamLimits

0x86a0,	// (0x0001500d) main_radioblah_text_pane_t1

0xea5f,	// (0x0001b3cc) cam6_indi_pane_cp01

0xea67,	// (0x0001b3d4) cam6_mode_pane_cp01

0xea6f,	// (0x0001b3dc) cam6_pano_pane

0xea78,	// (0x0001b3e5) cam6_zoom_pane_cp01

0xea80,	// (0x0001b3ed) cam6_pano_image_pane

0xea8b,	// (0x0001b3f8) cam6_pano_pane_g1

0xe046,	// (0x0001a9b3) cam6_pano_pane_g2

0xea94,	// (0x0001b401) cam6_pano_pane_g3

0xea9d,	// (0x0001b40a) cam6_pano_pane_g4

0xcb17,	// (0x00019484) cam6_pano_pane_g5

0xeaa6,	// (0x0001b413) cam6_pano_pane_g6

0xe0ad,	// (0x0001aa1a) cam6_pano_pane_g7

0xeab0,	// (0x0001b41d) cam6_pano_pane_g8

0xeab9,	// (0x0001b426) cam6_pano_pane_g9

0x0008,

0xfd06,	// (0x0001c673) cam6_pano_pane_g

0x9775,	// (0x000160e2) main_browser_tag_pane

0xe7ec,	// (0x0001b159) grid_navstr_albumart_pane

0xeac4,	// (0x0001b431) cell_navstr_albumart_pane_ParamLimits

0xeac4,	// (0x0001b431) cell_navstr_albumart_pane

0xeae4,	// (0x0001b451) cell_navstr_albumart_pane_g1

0xbf83,	// (0x000188f0) cell_navstr_albumart_pane_g2

0xbf93,	// (0x00018900) cell_navstr_albumart_pane_g3

0xbf8b,	// (0x000188f8) cell_navstr_albumart_pane_g4

0x0003,

0xfd19,	// (0x0001c686) cell_navstr_albumart_pane_g

0x86ba,	// (0x00015027) bt_list_pane_ParamLimits

0x86ba,	// (0x00015027) bt_list_pane

0x86ce,	// (0x0001503b) bt_list_pane_t1

0x86dd,	// (0x0001504a) bt_list_pane_t2

0x0001,

0xfd22,	// (0x0001c68f) bt_list_pane_t

0x9775,	// (0x000160e2) main_cale_prevew_pane

0x86ec,	// (0x00015059) popup_cale_preview_window_ParamLimits

0x86ec,	// (0x00015059) popup_cale_preview_window

0x97e4,	// (0x00016151) bg_popup_preview_window_pane_cp05_ParamLimits

0x97e4,	// (0x00016151) bg_popup_preview_window_pane_cp05

0xeaec,	// (0x0001b459) list_cale_preview_pane_ParamLimits

0xeaec,	// (0x0001b459) list_cale_preview_pane

0x8707,	// (0x00015074) list_double_cale_preview_pane_ParamLimits

0x8707,	// (0x00015074) list_double_cale_preview_pane

0x8719,	// (0x00015086) list_single_cale_preview_pane_ParamLimits

0x8719,	// (0x00015086) list_single_cale_preview_pane

0x872f,	// (0x0001509c) list_single_cale_preview_pane_g1

0x8737,	// (0x000150a4) list_single_cale_preview_pane_t1_ParamLimits

0x8737,	// (0x000150a4) list_single_cale_preview_pane_t1

0x874c,	// (0x000150b9) list_double_cale_preview_pane_g1

0x8754,	// (0x000150c1) list_double_cale_preview_pane_t1_ParamLimits

0x8754,	// (0x000150c1) list_double_cale_preview_pane_t1

0x8769,	// (0x000150d6) list_double_cale_preview_pane_t2_ParamLimits

0x8769,	// (0x000150d6) list_double_cale_preview_pane_t2

0x0001,

0xfd27,	// (0x0001c694) list_double_cale_preview_pane_t_ParamLimits

0xfd27,	// (0x0001c694) list_double_cale_preview_pane_t

0x9775,	// (0x000160e2) main_ezdial_pane

0x97e4,	// (0x00016151) main_sp_fs_email_pane_ParamLimits

0x7fb9,	// (0x00014926) cmail_ddmenu_btn01_pane_ParamLimits

0x7fb9,	// (0x00014926) cmail_ddmenu_btn01_pane

0x7fcc,	// (0x00014939) cmail_ddmenu_btn02_pane_ParamLimits

0x7fcc,	// (0x00014939) cmail_ddmenu_btn02_pane

0x7fef,	// (0x0001495c) cmail_ddmenu_btn03_pane_ParamLimits

0x7fef,	// (0x0001495c) cmail_ddmenu_btn03_pane

0x8088,	// (0x000149f5) main_sp_fs_ctrlbar_pane_ParamLimits

0x80ac,	// (0x00014a19) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0x83ab,	// (0x00014d18) list_cmail_body_pane_ParamLimits

0xe6e9,	// (0x0001b056) bg_button_pane_cp12

0xe6fe,	// (0x0001b06b) list_single_cmail_header_detail_pane_g3_ParamLimits

0xe6fe,	// (0x0001b06b) list_single_cmail_header_detail_pane_g3

0xe747,	// (0x0001b0b4) list_single_cmail_header_detail_pane_t2_ParamLimits

0xe747,	// (0x0001b0b4) list_single_cmail_header_detail_pane_t2

0x0001,

0xfcaa,	// (0x0001c617) list_single_cmail_header_detail_pane_t_ParamLimits

0xfcaa,	// (0x0001c617) list_single_cmail_header_detail_pane_t

0xe854,	// (0x0001b1c1) phacti_term_pane_t2_ParamLimits

0xe854,	// (0x0001b1c1) phacti_term_pane_t2

0x0001,

0xfcb4,	// (0x0001c621) phacti_term_pane_t_ParamLimits

0xfcb4,	// (0x0001c621) phacti_term_pane_t

0xeaf8,	// (0x0001b465) aid_size_list_single_double

0x8781,	// (0x000150ee) popup_ezdial_listscroll_window

0x879d,	// (0x0001510a) popup_number_entry_window_cp01

0xa1b4,	// (0x00016b21) bg_popup_call_pane_cp09

0xeb04,	// (0x0001b471) ezdial_list_pane

0xeb0c,	// (0x0001b479) scroll_pane_cp23

0xadbe,	// (0x0001772b) bg_button_pane_cp028_ParamLimits

0xadbe,	// (0x0001772b) bg_button_pane_cp028

0x87ab,	// (0x00015118) cmail_ddmenu_btn01_pane_g1_ParamLimits

0x87ab,	// (0x00015118) cmail_ddmenu_btn01_pane_g1

0x87b7,	// (0x00015124) cmail_ddmenu_btn01_pane_g2_ParamLimits

0x87b7,	// (0x00015124) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfd2c,	// (0x0001c699) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfd2c,	// (0x0001c699) cmail_ddmenu_btn01_pane_g

0xeb14,	// (0x0001b481) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xeb14,	// (0x0001b481) cmail_ddmenu_btn01_pane_t1

0xadbe,	// (0x0001772b) bg_button_pane_cp029_ParamLimits

0xadbe,	// (0x0001772b) bg_button_pane_cp029

0x87cb,	// (0x00015138) cmail_ddmenu_btn02_pane_g1_ParamLimits

0x87cb,	// (0x00015138) cmail_ddmenu_btn02_pane_g1

0x87e3,	// (0x00015150) cmail_ddmenu_btn02_pane_t1_ParamLimits

0x87e3,	// (0x00015150) cmail_ddmenu_btn02_pane_t1

0x97e4,	// (0x00016151) bg_button_pane_cp031_ParamLimits

0x97e4,	// (0x00016151) bg_button_pane_cp031

0x87cb,	// (0x00015138) cmail_ddmenu_btn03_pane_g1_ParamLimits

0x87cb,	// (0x00015138) cmail_ddmenu_btn03_pane_g1

0x87e3,	// (0x00015150) cmail_ddmenu_btn03_pane_t1_ParamLimits

0x87e3,	// (0x00015150) cmail_ddmenu_btn03_pane_t1

0x5918,	// (0x00012285) cell_dialer2_keypad_pane_t1_ParamLimits

0x5932,	// (0x0001229f) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x5932,	// (0x0001229f) cell_dialer2_keypad_pane_t1_copy1

0x783e,	// (0x000141ab) ncimui_group_button_pane

0x97e4,	// (0x00016151) main_sp_fs_calendar_pane_ParamLimits

0x83c0,	// (0x00014d2d) list_single_cmail_header_caption_pane_ParamLimits

0xe897,	// (0x0001b204) aid_recal_txt_sm_pane

0x9775,	// (0x000160e2) mian_recal_day_pane

0xe8d9,	// (0x0001b246) popup_sp_fs_cale_preview_window_ParamLimits

0xeb2a,	// (0x0001b497) list_recal_day_pane

0xeb6c,	// (0x0001b4d9) list_single_recal_day_pane_ParamLimits

0xeb6c,	// (0x0001b4d9) list_single_recal_day_pane

0xeb7e,	// (0x0001b4eb) list_single_recal_day_pane_g1_ParamLimits

0xeb7e,	// (0x0001b4eb) list_single_recal_day_pane_g1

0xeb8a,	// (0x0001b4f7) list_single_recal_day_pane_g2_ParamLimits

0xeb8a,	// (0x0001b4f7) list_single_recal_day_pane_g2

0xeb96,	// (0x0001b503) list_single_recal_day_pane_g3_ParamLimits

0xeb96,	// (0x0001b503) list_single_recal_day_pane_g3

0x8807,	// (0x00015174) list_single_recal_day_pane_g4_ParamLimits

0x8807,	// (0x00015174) list_single_recal_day_pane_g4

0xeba2,	// (0x0001b50f) list_single_recal_day_pane_g5_ParamLimits

0xeba2,	// (0x0001b50f) list_single_recal_day_pane_g5

0xebae,	// (0x0001b51b) list_single_recal_day_pane_g6_ParamLimits

0xebae,	// (0x0001b51b) list_single_recal_day_pane_g6

0x0004,

0xfd3b,	// (0x0001c6a8) list_single_recal_day_pane_g_ParamLimits

0xfd3b,	// (0x0001c6a8) list_single_recal_day_pane_g

0xebc2,	// (0x0001b52f) list_single_recal_day_pane_t1

0xebd4,	// (0x0001b541) list_single_recal_day_pane_t2

0x0001,

0xfd46,	// (0x0001c6b3) list_single_recal_day_pane_t

0x881f,	// (0x0001518c) ncimui_query_button_pane_ParamLimits

0x881f,	// (0x0001518c) ncimui_query_button_pane

0x882f,	// (0x0001519c) ncimui_query_button_pane_t1_ParamLimits

0x882f,	// (0x0001519c) ncimui_query_button_pane_t1

0xebe6,	// (0x0001b553) ncimui_query_button_pane_t2_ParamLimits

0xebe6,	// (0x0001b553) ncimui_query_button_pane_t2

0x0001,

0xfd4b,	// (0x0001c6b8) ncimui_query_button_pane_t_ParamLimits

0xfd4b,	// (0x0001c6b8) ncimui_query_button_pane_t

0x8842,	// (0x000151af) query_button_pane_ParamLimits

0x8842,	// (0x000151af) query_button_pane

0x9775,	// (0x000160e2) bg_button_pane_cp0028

0xebf9,	// (0x0001b566) query_button_pane_t1

0x4352,	// (0x00010cbf) main_tport_pane_ParamLimits

0x826f,	// (0x00014bdc) bg_popup_window_pane_cp01_ParamLimits

0x826f,	// (0x00014bdc) bg_popup_window_pane_cp01

0x828a,	// (0x00014bf7) heading_pane_cp08_ParamLimits

0x828a,	// (0x00014bf7) heading_pane_cp08

0x829d,	// (0x00014c0a) heading_pane_cp07_ParamLimits

0x829d,	// (0x00014c0a) heading_pane_cp07

0x8344,	// (0x00014cb1) cell_tport_appsw_pane_g2

0x0002,

0xfc97,	// (0x0001c604) cell_tport_appsw_pane_g

0xae59,	// (0x000177c6) input_candi_list_open_g1

0xa5fe,	// (0x00016f6b) list_cale_time_pane_g6_ParamLimits

0xa5fe,	// (0x00016f6b) list_cale_time_pane_g6

0x4965,	// (0x000112d2) aid_size_touch_calib_1_ParamLimits

0x4965,	// (0x000112d2) aid_size_touch_calib_1

0x4977,	// (0x000112e4) aid_size_touch_calib_2_ParamLimits

0x4977,	// (0x000112e4) aid_size_touch_calib_2

0x498f,	// (0x000112fc) aid_size_touch_calib_3_ParamLimits

0x498f,	// (0x000112fc) aid_size_touch_calib_3

0x49ad,	// (0x0001131a) aid_size_touch_calib_4_ParamLimits

0x49ad,	// (0x0001131a) aid_size_touch_calib_4

0x49c5,	// (0x00011332) main_touch_calib_button_group_pane_ParamLimits

0x49c5,	// (0x00011332) main_touch_calib_button_group_pane

0x49dd,	// (0x0001134a) main_touch_calib_pane_g1_ParamLimits

0x49ef,	// (0x0001135c) main_touch_calib_pane_g2_ParamLimits

0x4a01,	// (0x0001136e) main_touch_calib_pane_g3_ParamLimits

0x4a13,	// (0x00011380) main_touch_calib_pane_g4_ParamLimits

0xf6d9,	// (0x0001c046) main_touch_calib_pane_g_ParamLimits

0x4a25,	// (0x00011392) main_touch_calib_pane_t1_ParamLimits

0x4a3f,	// (0x000113ac) main_touch_calib_pane_t2_ParamLimits

0x4a59,	// (0x000113c6) main_touch_calib_pane_t3_ParamLimits

0x4a6d,	// (0x000113da) main_touch_calib_pane_t4_ParamLimits

0x4a81,	// (0x000113ee) main_touch_calib_pane_t5_ParamLimits

0xf6e2,	// (0x0001c04f) main_touch_calib_pane_t_ParamLimits

0xc8da,	// (0x00019247) list_single_fp_cale_pane_g3_ParamLimits

0xc8da,	// (0x00019247) list_single_fp_cale_pane_g3

0x97e4,	// (0x00016151) bg_button_pane_cp012_ParamLimits

0x97e4,	// (0x00016151) bg_vkb2_func_pane_cp03_ParamLimits

0x69d5,	// (0x00013342) cell_vitu2_function_top_pane_g1_ParamLimits

0x97e4,	// (0x00016151) bg_vkb2_func_pane_cp04_ParamLimits

0x77c9,	// (0x00014136) main_ncimui_button_group_pane_ParamLimits

0x77c9,	// (0x00014136) main_ncimui_button_group_pane

0x7829,	// (0x00014196) main_ncimui_pane_t3_ParamLimits

0x7829,	// (0x00014196) main_ncimui_pane_t3

0xe802,	// (0x0001b16f) phacti_button_group_pane

0xeaf8,	// (0x0001b465) aid_size_list_single_double_ParamLimits

0x8781,	// (0x000150ee) popup_ezdial_listscroll_window_ParamLimits

0x879d,	// (0x0001510a) popup_number_entry_window_cp01_ParamLimits

0x8855,	// (0x000151c2) phacti_button_pane_ParamLimits

0x8855,	// (0x000151c2) phacti_button_pane

0x9775,	// (0x000160e2) bg_button_pane_cp14

0xec07,	// (0x0001b574) phacti_button_pane_t1

0x8866,	// (0x000151d3) main_touch_calib_button_pane_ParamLimits

0x8866,	// (0x000151d3) main_touch_calib_button_pane

0x9f6f,	// (0x000168dc) bg_button_pane_cp18_ParamLimits

0x9f6f,	// (0x000168dc) bg_button_pane_cp18

0xec15,	// (0x0001b582) main_touch_calib_button_pane_t1_ParamLimits

0xec15,	// (0x0001b582) main_touch_calib_button_pane_t1

0xec2b,	// (0x0001b598) main_touch_calib_button_pane_t2_ParamLimits

0xec2b,	// (0x0001b598) main_touch_calib_button_pane_t2

0x0001,

0xfd50,	// (0x0001c6bd) main_touch_calib_button_pane_t_ParamLimits

0xfd50,	// (0x0001c6bd) main_touch_calib_button_pane_t

0x9775,	// (0x000160e2) cell_ncimui_button_pane

0x9775,	// (0x000160e2) bg_button_pane_cp032

0xec49,	// (0x0001b5b6) cell_ncimui_button_pane_t1

0xd071,	// (0x000199de) image3_infobar_pane_ParamLimits

0xd071,	// (0x000199de) image3_infobar_pane

0x7c3e,	// (0x000145ab) fs_bigclock_status_pane_ParamLimits

0x7c3e,	// (0x000145ab) fs_bigclock_status_pane

0x7c4b,	// (0x000145b8) main_fs_bigclock_clock_pane_ParamLimits

0x7c4b,	// (0x000145b8) main_fs_bigclock_clock_pane

0x7c69,	// (0x000145d6) main_fs_bigclock_indi_pane_ParamLimits

0x7c69,	// (0x000145d6) main_fs_bigclock_indi_pane

0x7c9b,	// (0x00014608) main_fs_bigclock_swipe_pane_ParamLimits

0x7c9b,	// (0x00014608) main_fs_bigclock_swipe_pane

0x9775,	// (0x000160e2) main_fs_clock_dumped_data

0xe167,	// (0x0001aad4) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xe167,	// (0x0001aad4) list_single_fs_bigclock_indicator_pane_g1

0xe182,	// (0x0001aaef) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xe182,	// (0x0001aaef) list_single_fs_bigclock_indicator_pane_g2

0xe19c,	// (0x0001ab09) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xe19c,	// (0x0001ab09) list_single_fs_bigclock_indicator_pane_g3

0xe1b6,	// (0x0001ab23) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xe1b6,	// (0x0001ab23) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfbf1,	// (0x0001c55e) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfbf1,	// (0x0001c55e) list_single_fs_bigclock_indicator_pane_g

0xe1e1,	// (0x0001ab4e) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xe1e1,	// (0x0001ab4e) list_single_fs_bigclock_indicator_pane_t1

0xe209,	// (0x0001ab76) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xe209,	// (0x0001ab76) list_single_fs_bigclock_indicator_pane_t2

0xe231,	// (0x0001ab9e) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xe231,	// (0x0001ab9e) list_single_fs_bigclock_indicator_pane_t3

0xe259,	// (0x0001abc6) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xe259,	// (0x0001abc6) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfbfc,	// (0x0001c569) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfbfc,	// (0x0001c569) list_single_fs_bigclock_indicator_pane_t

0xec57,	// (0x0001b5c4) image3_infobar_fav_pane_ParamLimits

0xec57,	// (0x0001b5c4) image3_infobar_fav_pane

0xec67,	// (0x0001b5d4) image3_infobar_loc_pane_ParamLimits

0xec67,	// (0x0001b5d4) image3_infobar_loc_pane

0xec7b,	// (0x0001b5e8) image3_infobar_time_pane_ParamLimits

0xec7b,	// (0x0001b5e8) image3_infobar_time_pane

0xa1f4,	// (0x00016b61) image3_infobar_time_pane_g1

0xec8b,	// (0x0001b5f8) image3_infobar_time_pane_t1

0xa1f4,	// (0x00016b61) image3_infobar_loc_pane_g1

0xec99,	// (0x0001b606) image3_infobar_loc_pane_g2

0x0001,

0xfd55,	// (0x0001c6c2) image3_infobar_loc_pane_g

0xeca1,	// (0x0001b60e) image3_infobar_loc_pane_t1

0xa1f4,	// (0x00016b61) image3_infobar_fav_pane_g1

0xecaf,	// (0x0001b61c) image3_infobar_fav_pane_g2

0x0001,

0xfd5a,	// (0x0001c6c7) image3_infobar_fav_pane_g

0xecb7,	// (0x0001b624) fs_bigclock_status_battery_pane

0xecc0,	// (0x0001b62d) fs_bigclock_status_signal_pane

0xecc9,	// (0x0001b636) fs_bigclock_status_title_pane

0xecd2,	// (0x0001b63f) fs_bigclock_status_signal_pane_g1

0xecdb,	// (0x0001b648) fs_bigclock_status_signal_pane_g2

0x0001,

0xfd5f,	// (0x0001c6cc) fs_bigclock_status_signal_pane_g

0xece3,	// (0x0001b650) fs_bigclock_status_battery_pane_g1

0xecec,	// (0x0001b659) fs_bigclock_status_battery_pane_g2

0x0001,

0xfd64,	// (0x0001c6d1) fs_bigclock_status_battery_pane_g

0xecf4,	// (0x0001b661) fs_bigclock_status_title_pane_t1

0x887b,	// (0x000151e8) main_fs_bigclock_clock_pane_g1

0x887b,	// (0x000151e8) main_fs_bigclock_clock_pane_g2

0x888c,	// (0x000151f9) main_fs_bigclock_clock_pane_g3

0x888c,	// (0x000151f9) main_fs_bigclock_clock_pane_g4

0x0003,

0xfd69,	// (0x0001c6d6) main_fs_bigclock_clock_pane_g

0x889f,	// (0x0001520c) main_fs_bigclock_clock_pane_t1

0x88b5,	// (0x00015222) main_fs_bigclock_clock_pane_t2

0x0001,

0xfd72,	// (0x0001c6df) main_fs_bigclock_clock_pane_t

0xed02,	// (0x0001b66f) list_single_fs_bigclock_indicator_pane_ParamLimits

0xed02,	// (0x0001b66f) list_single_fs_bigclock_indicator_pane

0xed13,	// (0x0001b680) list_single_fs_bigclock_pane_ParamLimits

0xed13,	// (0x0001b680) list_single_fs_bigclock_pane

0xed39,	// (0x0001b6a6) main_fs_bigclock_indicator_pane_t1

0xed48,	// (0x0001b6b5) list_single_fs_bigclock_pane_g1

0xed50,	// (0x0001b6bd) list_single_fs_bigclock_pane_t1

0xa1f4,	// (0x00016b61) main_fs_bigclock_swipe_pane_g1

0xed93,	// (0x0001b700) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfd83,	// (0x0001c6f0) main_fs_bigclock_swipe_pane_g

0xed9b,	// (0x0001b708) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xed9b,	// (0x0001b708) main_fs_bigclock_swipe_pane_t1

0x347e,	// (0x0000fdeb) call_type_pane_ParamLimits

0x9775,	// (0x000160e2) main_btmg_pane

0xe9d6,	// (0x0001b343) list_single_cale_mrui_row_pane_g2_ParamLimits

0xe9d6,	// (0x0001b343) list_single_cale_mrui_row_pane_g2

0x0002,

0xfcf6,	// (0x0001c663) list_single_cale_mrui_row_pane_g_ParamLimits

0xfcf6,	// (0x0001c663) list_single_cale_mrui_row_pane_g

0xeb53,	// (0x0001b4c0) list_recal_vselct_arw_lo_pane

0xeb5b,	// (0x0001b4c8) list_recal_vselct_arw_up_pane

0xeb63,	// (0x0001b4d0) list_recal_vselct_pane

0x890f,	// (0x0001527c) btmg_button_pane

0x8919,	// (0x00015286) main_btmg_pane_g1

0x9775,	// (0x000160e2) bg_button_pane_cp044

0xedb8,	// (0x0001b725) btmg_button_pane_t1

0xc0d3,	// (0x00018a40) aid_listscroll_gen

0x97e4,	// (0x00016151) main_cntbar_detail_pane

0xe6cb,	// (0x0001b038) list_cmail_folder_pane

0xe0b5,	// (0x0001aa22) sp_fs_scroll_pane_cp03_ParamLimits

0x83c0,	// (0x00014d2d) list_single_fs_dyc_pane_cp01_ParamLimits

0x83c0,	// (0x00014d2d) list_single_fs_dyc_pane_cp01

0xedc6,	// (0x0001b733) aid_size_cmail_indent

0xedcf,	// (0x0001b73c) list_single_dyc_row_pane_cp01

0x894f,	// (0x000152bc) cntbar_detail_list_pane_ParamLimits

0x894f,	// (0x000152bc) cntbar_detail_list_pane

0x899b,	// (0x00015308) main_cntbar_detail_cont_pane_ParamLimits

0x899b,	// (0x00015308) main_cntbar_detail_cont_pane

0xe0b5,	// (0x0001aa22) scroll_pane_cp032_ParamLimits

0xe0b5,	// (0x0001aa22) scroll_pane_cp032

0x89af,	// (0x0001531c) cntbar_detail_list_event_pane_ParamLimits

0x89af,	// (0x0001531c) cntbar_detail_list_event_pane

0x895f,	// (0x000152cc) cntbar_detail_list_shct_pane

0xa453,	// (0x00016dc0) aid_list_gen

0xedd8,	// (0x0001b745) aid_scroll

0xede1,	// (0x0001b74e) aid_size_touch_scroll_bar

0x7e43,	// (0x000147b0) aid_list_double

0xedea,	// (0x0001b757) aid_list_single

0xedea,	// (0x0001b757) aid_list_single_lg

0xedf3,	// (0x0001b760) aid_list_z_g_a_sm

0xedfb,	// (0x0001b768) aid_list_z_g_d

0xee03,	// (0x0001b770) aid_txt_z_prm

0x89bf,	// (0x0001532c) aid_txt_z_prm_cp01

0x89cd,	// (0x0001533a) aid_txt_z_sec

0x89db,	// (0x00015348) main_cntbar_detail_cont_pane_g1_ParamLimits

0x89db,	// (0x00015348) main_cntbar_detail_cont_pane_g1

0x89ef,	// (0x0001535c) main_cntbar_detail_cont_pane_g2_ParamLimits

0x89ef,	// (0x0001535c) main_cntbar_detail_cont_pane_g2

0x0001,

0xfd88,	// (0x0001c6f5) main_cntbar_detail_cont_pane_g_ParamLimits

0xfd88,	// (0x0001c6f5) main_cntbar_detail_cont_pane_g

0xee11,	// (0x0001b77e) main_cntbar_detail_cont_pane_t1

0xee1f,	// (0x0001b78c) main_cntbar_detail_cont_pane_t2

0xee2d,	// (0x0001b79a) main_cntbar_detail_cont_pane_t3

0x0002,

0xfd8d,	// (0x0001c6fa) main_cntbar_detail_cont_pane_t

0x89ff,	// (0x0001536c) cell_cntbar_detail_list_shct_pane_ParamLimits

0x89ff,	// (0x0001536c) cell_cntbar_detail_list_shct_pane

0xee3b,	// (0x0001b7a8) cntbar_detail_list_shct_pane_g1

0xee44,	// (0x0001b7b1) cntbar_detail_list_shct_pane_g2

0x0001,

0xfd94,	// (0x0001c701) cntbar_detail_list_shct_pane_g

0x8a13,	// (0x00015380) cntbar_detail_list_event_pane_g1_ParamLimits

0x8a13,	// (0x00015380) cntbar_detail_list_event_pane_g1

0x8a1f,	// (0x0001538c) cntbar_detail_list_event_pane_g2_ParamLimits

0x8a1f,	// (0x0001538c) cntbar_detail_list_event_pane_g2

0x0005,

0xfd99,	// (0x0001c706) cntbar_detail_list_event_pane_g_ParamLimits

0xfd99,	// (0x0001c706) cntbar_detail_list_event_pane_g

0x8a8b,	// (0x000153f8) cntbar_detail_list_event_pane_t1_ParamLimits

0x8a8b,	// (0x000153f8) cntbar_detail_list_event_pane_t1

0x8aa0,	// (0x0001540d) cntbar_detail_list_event_pane_t2_ParamLimits

0x8aa0,	// (0x0001540d) cntbar_detail_list_event_pane_t2

0x0002,

0xfda6,	// (0x0001c713) cntbar_detail_list_event_pane_t_ParamLimits

0xfda6,	// (0x0001c713) cntbar_detail_list_event_pane_t

0xa1f4,	// (0x00016b61) cell_cntbar_detail_list_shct_pane_g1

0xac77,	// (0x000175e4) navi_pane_mv_g3

0x97e4,	// (0x00016151) main_cntbar_detail_pane_ParamLimits

0x9775,	// (0x000160e2) main_notif_wgt_pane

0xcdcc,	// (0x00019739) aid_tch_main_mp4_pane_g4

0xcffe,	// (0x0001996b) popup_slider_window_cp02

0xeb49,	// (0x0001b4b6) list_recal_day_event_pane

0x8923,	// (0x00015290) cntbar_detail_btn_pane_ParamLimits

0x8923,	// (0x00015290) cntbar_detail_btn_pane

0x8939,	// (0x000152a6) cntbar_detail_btn_pane_cp01_ParamLimits

0x8939,	// (0x000152a6) cntbar_detail_btn_pane_cp01

0x895f,	// (0x000152cc) cntbar_detail_list_shct_pane_ParamLimits

0x896f,	// (0x000152dc) cntbar_detail_pane_g1_ParamLimits

0x896f,	// (0x000152dc) cntbar_detail_pane_g1

0x897f,	// (0x000152ec) cntbar_detail_pane_t1_ParamLimits

0x897f,	// (0x000152ec) cntbar_detail_pane_t1

0x8a2b,	// (0x00015398) cntbar_detail_list_event_pane_g3_ParamLimits

0x8a2b,	// (0x00015398) cntbar_detail_list_event_pane_g3

0x8a43,	// (0x000153b0) cntbar_detail_list_event_pane_g4_ParamLimits

0x8a43,	// (0x000153b0) cntbar_detail_list_event_pane_g4

0x8a5b,	// (0x000153c8) cntbar_detail_list_event_pane_g5_ParamLimits

0x8a5b,	// (0x000153c8) cntbar_detail_list_event_pane_g5

0x8a73,	// (0x000153e0) cntbar_detail_list_event_pane_g6_ParamLimits

0x8a73,	// (0x000153e0) cntbar_detail_list_event_pane_g6

0x8ab5,	// (0x00015422) cntbar_detail_list_event_pane_t3_ParamLimits

0x8ab5,	// (0x00015422) cntbar_detail_list_event_pane_t3

0x8ac7,	// (0x00015434) popup_notif_wgt_window_ParamLimits

0x8ac7,	// (0x00015434) popup_notif_wgt_window

0x8ae0,	// (0x0001544d) popup_submenu_window_cp01_ParamLimits

0x8ae0,	// (0x0001544d) popup_submenu_window_cp01

0xa1b4,	// (0x00016b21) bg_popup_window_pane_cp10

0xee4d,	// (0x0001b7ba) listscroll_notif_wgt_pane

0xee5f,	// (0x0001b7cc) list_notif_wgt_window

0xee68,	// (0x0001b7d5) scroll_pane_cp033

0x8af6,	// (0x00015463) list_notif_wgt_row_pane_ParamLimits

0x8af6,	// (0x00015463) list_notif_wgt_row_pane

0xee71,	// (0x0001b7de) aid_size_list_notif_wgt_del

0xee7e,	// (0x0001b7eb) list_notif_wgt_row_pane_g1

0xee8a,	// (0x0001b7f7) list_notif_wgt_row_pane_g2

0xee99,	// (0x0001b806) list_notif_wgt_row_pane_g3

0x0002,

0xfdad,	// (0x0001c71a) list_notif_wgt_row_pane_g

0xeea6,	// (0x0001b813) list_notif_wgt_row_pane_t1

0xeebc,	// (0x0001b829) list_notif_wgt_row_pane_t2

0xeece,	// (0x0001b83b) list_notif_wgt_row_pane_t3

0x0002,

0xfdb4,	// (0x0001c721) list_notif_wgt_row_pane_t

0xd541,	// (0x00019eae) list_recal_day_event_pane_g1

0xeee0,	// (0x0001b84d) list_recal_day_event_pane_t1

0x9775,	// (0x000160e2) bg_button_pane_cp045

0xeeef,	// (0x0001b85c) cntbar_detail_btn_pane_t1

0xadbe,	// (0x0001772b) main_callh_pane_ParamLimits

0xadbe,	// (0x0001772b) main_callh_pane

0x9775,	// (0x000160e2) main_coverflow0_pane

0x9775,	// (0x000160e2) main_wgtman_pane

0x7cb3,	// (0x00014620) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x7cb3,	// (0x00014620) main_fs_bigclock_unlock_btn_pane

0x833c,	// (0x00014ca9) bg_button_pane_cp16

0x834c,	// (0x00014cb9) cell_tport_appsw_pane_g3

0x8b06,	// (0x00015473) cf0_flow_pane_ParamLimits

0x8b06,	// (0x00015473) cf0_flow_pane

0xeefd,	// (0x0001b86a) listscroll_cf0_pane

0xef08,	// (0x0001b875) main_cf0_pane_g1

0x8b1b,	// (0x00015488) main_cf0_pane_t1_ParamLimits

0x8b1b,	// (0x00015488) main_cf0_pane_t1

0x8b32,	// (0x0001549f) main_cf0_pane_t2_ParamLimits

0x8b32,	// (0x0001549f) main_cf0_pane_t2

0x0001,

0xfdc0,	// (0x0001c72d) main_cf0_pane_t_ParamLimits

0xfdc0,	// (0x0001c72d) main_cf0_pane_t

0xef1a,	// (0x0001b887) scroll_pane_cp11

0x8b49,	// (0x000154b6) cf0_flow_pane_g1

0x8b51,	// (0x000154be) cf0_flow_pane_g2

0x0001,

0xfdc5,	// (0x0001c732) cf0_flow_pane_g

0x8b59,	// (0x000154c6) cf0_flow_pane_t1

0x9775,	// (0x000160e2) main_call6_pane

0x9775,	// (0x000160e2) main_calllock_pane

0x8b67,	// (0x000154d4) call6_btn_grp_pane_ParamLimits

0x8b67,	// (0x000154d4) call6_btn_grp_pane

0x8b81,	// (0x000154ee) call6_pane_g1_ParamLimits

0x8b81,	// (0x000154ee) call6_pane_g1

0x8b97,	// (0x00015504) popup_call6_1st_window_ParamLimits

0x8b97,	// (0x00015504) popup_call6_1st_window

0x8ba8,	// (0x00015515) popup_call6_2nd_window_ParamLimits

0x8ba8,	// (0x00015515) popup_call6_2nd_window

0x8bb9,	// (0x00015526) cell_call6_btn_pane_ParamLimits

0x8bb9,	// (0x00015526) cell_call6_btn_pane

0xa1b4,	// (0x00016b21) bg_popup_call2_in_pane_cp03

0xef25,	// (0x0001b892) popup_call6_1st_window_g1

0xef2d,	// (0x0001b89a) popup_call6_1st_window_g2

0xef35,	// (0x0001b8a2) popup_call6_1st_window_g3

0x0002,

0xfdca,	// (0x0001c737) popup_call6_1st_window_g

0xef3d,	// (0x0001b8aa) popup_call6_1st_window_t1

0xef4c,	// (0x0001b8b9) popup_call6_1st_window_t2

0xef5a,	// (0x0001b8c7) popup_call6_1st_window_t3

0x0002,

0xfdd1,	// (0x0001c73e) popup_call6_1st_window_t

0xa1b4,	// (0x00016b21) bg_popup_call2_in_pane_cp04

0xef68,	// (0x0001b8d5) popup_call6_2nd_window_g1

0xef70,	// (0x0001b8dd) popup_call6_2nd_window_g2

0xef78,	// (0x0001b8e5) popup_call6_2nd_window_g3

0x0002,

0xfdd8,	// (0x0001c745) popup_call6_2nd_window_g

0xef80,	// (0x0001b8ed) popup_call6_2nd_window_t1

0x9775,	// (0x000160e2) bg_button_pane_cp15

0xef8f,	// (0x0001b8fc) cell_call6_btn_pane_g1

0xef98,	// (0x0001b905) cell_call6_btn_pane_t1

0x8bcc,	// (0x00015539) listscroll_wgtman_pane_ParamLimits

0x8bcc,	// (0x00015539) listscroll_wgtman_pane

0x8bed,	// (0x0001555a) wgtman_btn_pane_ParamLimits

0x8bed,	// (0x0001555a) wgtman_btn_pane

0xaa7e,	// (0x000173eb) aid_scroll_copy1

0xefa7,	// (0x0001b914) list_wgtman_pane

0x8c30,	// (0x0001559d) wgtman_btn_pane_g1_ParamLimits

0x8c30,	// (0x0001559d) wgtman_btn_pane_g1

0x8c5c,	// (0x000155c9) wgtman_btn_pane_t1_ParamLimits

0x8c5c,	// (0x000155c9) wgtman_btn_pane_t1

0xefb1,	// (0x0001b91e) wgtman_btn_pane_t2_ParamLimits

0xefb1,	// (0x0001b91e) wgtman_btn_pane_t2

0x0001,

0xfddf,	// (0x0001c74c) wgtman_btn_pane_t_ParamLimits

0xfddf,	// (0x0001c74c) wgtman_btn_pane_t

0x8c99,	// (0x00015606) listrow_wgtman_pane_ParamLimits

0x8c99,	// (0x00015606) listrow_wgtman_pane

0x8cab,	// (0x00015618) listrow_wgtman_pane_g1

0x8cb8,	// (0x00015625) listrow_wgtman_pane_g2

0x0001,

0xfde4,	// (0x0001c751) listrow_wgtman_pane_g

0x8cd6,	// (0x00015643) listrow_wgtman_pane_t1

0x8cee,	// (0x0001565b) listrow_wgtman_pane_t2

0x0001,

0xfde9,	// (0x0001c756) listrow_wgtman_pane_t

0x8d14,	// (0x00015681) wait_bar_pane_cp09

0xefc8,	// (0x0001b935) main_calllock_btn_pane

0xefd2,	// (0x0001b93f) main_calllock_pane_g1

0x9775,	// (0x000160e2) bg_button_pane_cp17

0xef8f,	// (0x0001b8fc) main_calllock_btn_pane_g1

0xefda,	// (0x0001b947) main_calllock_btn_pane_t1

0x9775,	// (0x000160e2) main_dialer3_pane

0x9775,	// (0x000160e2) main_fmrd2_pane

0xa1f4,	// (0x00016b61) main_fs_bigclock_unlock_btn_pane_g1

0x8d2e,	// (0x0001569b) main_fs_bigclock_unlock_btn_pane_t1

0x8d3c,	// (0x000156a9) area_fmrd2_info_pane_ParamLimits

0x8d3c,	// (0x000156a9) area_fmrd2_info_pane

0x8d4d,	// (0x000156ba) area_fmrd2_visual_pane_ParamLimits

0x8d4d,	// (0x000156ba) area_fmrd2_visual_pane

0x8d5b,	// (0x000156c8) fmrd2_indi_pane_ParamLimits

0x8d5b,	// (0x000156c8) fmrd2_indi_pane

0x8d68,	// (0x000156d5) area_fmrd2_visual_pane_g1

0x8d70,	// (0x000156dd) area_fmrd2_visual_pane_t1

0x8d80,	// (0x000156ed) area_fmrd2_visual_pane_t2

0x8d90,	// (0x000156fd) area_fmrd2_visual_pane_t3

0x0002,

0xfdf3,	// (0x0001c760) area_fmrd2_visual_pane_t

0x8da0,	// (0x0001570d) area_fmrd2_info_pane_g1

0x8da8,	// (0x00015715) area_fmrd2_info_pane_t1

0x8db8,	// (0x00015725) area_fmrd2_info_pane_t2

0x8dc8,	// (0x00015735) area_fmrd2_info_pane_t3

0x8dd8,	// (0x00015745) area_fmrd2_info_pane_t4

0x0003,

0xfdfa,	// (0x0001c767) area_fmrd2_info_pane_t

0x8de6,	// (0x00015753) fmrd2_indi_pane_t1

0x8df6,	// (0x00015763) fmrd2_indi_pane_t2

0x8e06,	// (0x00015773) fmrd2_indi_pane_t3

0x0002,

0xfe03,	// (0x0001c770) fmrd2_indi_pane_t

0xe1c5,	// (0x0001ab32) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xe1c5,	// (0x0001ab32) list_single_fs_bigclock_indicator_pane_g5

0xe276,	// (0x0001abe3) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xe276,	// (0x0001abe3) list_single_fs_bigclock_indicator_pane_t5

0x84d7,	// (0x00014e44) aid_cell_bcale_month_pane_ParamLimits

0x84d7,	// (0x00014e44) aid_cell_bcale_month_pane

0x84f5,	// (0x00014e62) bcale_month_pane_ParamLimits

0x84f5,	// (0x00014e62) bcale_month_pane

0x8519,	// (0x00014e86) bcale_preview_pane_ParamLimits

0x8519,	// (0x00014e86) bcale_preview_pane

0xed50,	// (0x0001b6bd) list_single_fs_bigclock_pane_t1_ParamLimits

0xed6f,	// (0x0001b6dc) list_single_fs_bigclock_pane_t2_ParamLimits

0xed6f,	// (0x0001b6dc) list_single_fs_bigclock_pane_t2

0x0001,

0xfd7e,	// (0x0001c6eb) list_single_fs_bigclock_pane_t_ParamLimits

0xfd7e,	// (0x0001c6eb) list_single_fs_bigclock_pane_t

0x8d26,	// (0x00015693) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfdee,	// (0x0001c75b) main_fs_bigclock_unlock_btn_pane_g

0x8e16,	// (0x00015783) aid_dia3_key_size_ParamLimits

0x8e16,	// (0x00015783) aid_dia3_key_size

0x8e25,	// (0x00015792) aid_dia3_listrow_size_ParamLimits

0x8e25,	// (0x00015792) aid_dia3_listrow_size

0x8e3a,	// (0x000157a7) dia3_keypad_fun_pane_ParamLimits

0x8e3a,	// (0x000157a7) dia3_keypad_fun_pane

0x8e56,	// (0x000157c3) dia3_keypad_num_pane_ParamLimits

0x8e56,	// (0x000157c3) dia3_keypad_num_pane

0x8e71,	// (0x000157de) dia3_listscroll_pane_ParamLimits

0x8e71,	// (0x000157de) dia3_listscroll_pane

0x8e84,	// (0x000157f1) dia3_numentry_pane_ParamLimits

0x8e84,	// (0x000157f1) dia3_numentry_pane

0xefe9,	// (0x0001b956) dia3_list_pane

0xeff4,	// (0x0001b961) scroll_pane_cp12

0x9775,	// (0x000160e2) bg_dia3_numentry_pane

0x8e9c,	// (0x00015809) dia3_numentry_pane_t1

0x8eab,	// (0x00015818) cell_dia3_key_num_pane

0x8eb3,	// (0x00015820) cell_dia3_key0_fun_pane_ParamLimits

0x8eb3,	// (0x00015820) cell_dia3_key0_fun_pane

0x8ec7,	// (0x00015834) cell_dia3_key1_fun_pane_ParamLimits

0x8ec7,	// (0x00015834) cell_dia3_key1_fun_pane

0x8edf,	// (0x0001584c) dia3_listrow_pane

0xdf04,	// (0x0001a871) bg_dia3_numentry_pane_g1

0x9775,	// (0x000160e2) bg_button_pane_cp21

0xefff,	// (0x0001b96c) cell_dia3_key_num_pane_t1

0xf00d,	// (0x0001b97a) cell_dia3_key_num_pane_t2

0xf01c,	// (0x0001b989) cell_dia3_key_num_pane_t3

0xf02b,	// (0x0001b998) cell_dia3_key_num_pane_t4

0x0003,

0xfe0a,	// (0x0001c777) cell_dia3_key_num_pane_t

0x9775,	// (0x000160e2) bg_button_pane_cp19

0x8ef1,	// (0x0001585e) cell_dia3_key0_fun_pane_g1

0x9775,	// (0x000160e2) bg_button_pane_cp20

0x8ef9,	// (0x00015866) cell_dia3_key1_fun_pane_g1

0x8f01,	// (0x0001586e) area_left_week_number_pane

0x8f0d,	// (0x0001587a) area_top_day_name_pane

0x8f20,	// (0x0001588d) frame_month_view_pane

0xf03a,	// (0x0001b9a7) grid_month_view_pane

0x8f33,	// (0x000158a0) cell_top_day_name_pane_ParamLimits

0x8f33,	// (0x000158a0) cell_top_day_name_pane

0x8f60,	// (0x000158cd) cell_area_left_week_number_pane_ParamLimits

0x8f60,	// (0x000158cd) cell_area_left_week_number_pane

0x8f74,	// (0x000158e1) cell_month_view_pane_ParamLimits

0x8f74,	// (0x000158e1) cell_month_view_pane

0xf048,	// (0x0001b9b5) frm_month_g1

0x8fa1,	// (0x0001590e) frm_month_g2

0x8fb4,	// (0x00015921) frm_month_g3

0x8fc7,	// (0x00015934) frm_month_g4

0x8fda,	// (0x00015947) frm_month_g5

0x8fed,	// (0x0001595a) frm_month_g6

0x9000,	// (0x0001596d) frm_month_g7

0xf055,	// (0x0001b9c2) frm_month_g8

0x9013,	// (0x00015980) frm_month_g9

0x9023,	// (0x00015990) frm_month_g10

0x9033,	// (0x000159a0) frm_month_g11

0x9043,	// (0x000159b0) frm_month_g12

0x9055,	// (0x000159c2) frm_month_g13

0x9067,	// (0x000159d4) frm_month_g14

0x907b,	// (0x000159e8) frm_month_g15

0x908f,	// (0x000159fc) frm_month_g16

0x000f,

0xfe13,	// (0x0001c780) frm_month_g

0xf062,	// (0x0001b9cf) cell_top_day_name_pane_t1

0x90a3,	// (0x00015a10) cell_area_left_week_number_pane_g1

0x90af,	// (0x00015a1c) cell_area_left_week_number_pane_t1

0x9edb,	// (0x00016848) cell_month_view_pane_g1

0x90c2,	// (0x00015a2f) cell_month_view_pane_t1

0x9775,	// (0x000160e2) main_fps_pane

0xe4d7,	// (0x0001ae44) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xe4d7,	// (0x0001ae44) cmail_ddmenu_btn02_pane_cp1

0xe4f3,	// (0x0001ae60) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xe4f3,	// (0x0001ae60) cmail_ddmenu_btn02_pane_cp2

0x87d7,	// (0x00015144) cmail_ddmenu_btn02_pane_g2_ParamLimits

0x87d7,	// (0x00015144) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfd31,	// (0x0001c69e) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfd31,	// (0x0001c69e) cmail_ddmenu_btn02_pane_g

0x87f5,	// (0x00015162) cmail_ddmenu_btn02_pane_t2_ParamLimits

0x87f5,	// (0x00015162) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfd36,	// (0x0001c6a3) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfd36,	// (0x0001c6a3) cmail_ddmenu_btn02_pane_t

0x90d5,	// (0x00015a42) fps_text_pane_ParamLimits

0x90d5,	// (0x00015a42) fps_text_pane

0x90ec,	// (0x00015a59) main_fps_pane_g1_ParamLimits

0x90ec,	// (0x00015a59) main_fps_pane_g1

0x9106,	// (0x00015a73) wait_bar_pane_cp010_ParamLimits

0x9106,	// (0x00015a73) wait_bar_pane_cp010

0x9117,	// (0x00015a84) fps_text_pane_t1_ParamLimits

0x9117,	// (0x00015a84) fps_text_pane_t1

0x02a0,	// (0x0000cc0d) cam4_image_uncrop_pane_g1

0x02a9,	// (0x0000cc16) cam4_image_uncrop_pane_g2

0x5e4d,	// (0x000127ba) cam4_image_uncrop_pane_g3

0x5e56,	// (0x000127c3) cam4_image_uncrop_pane_g4

0x0003,

0xf875,	// (0x0001c1e2) cam4_image_uncrop_pane_g

0x8edf,	// (0x0001584c) dia3_listrow_pane_ParamLimits

0x9775,	// (0x000160e2) main_phob2_pane

0x830d,	// (0x00014c7a) cell_tport_appsw_pane_cp02_ParamLimits

0x830d,	// (0x00014c7a) cell_tport_appsw_pane_cp02

0x8321,	// (0x00014c8e) cell_tport_appsw_pane_cp03_ParamLimits

0x8321,	// (0x00014c8e) cell_tport_appsw_pane_cp03

0x9775,	// (0x000160e2) phob2_contact_card_pane

0x9775,	// (0x000160e2) phob2_listscroll_pane

0xf075,	// (0x0001b9e2) phob2_list_pane

0xf07d,	// (0x0001b9ea) scroll_pane_cp034

0x912f,	// (0x00015a9c) phob2_cc_data_pane_ParamLimits

0x912f,	// (0x00015a9c) phob2_cc_data_pane

0x914e,	// (0x00015abb) phob2_cc_listscroll_pane_ParamLimits

0x914e,	// (0x00015abb) phob2_cc_listscroll_pane

0x8c99,	// (0x00015606) list_double_large_graphic_phob2_pane_ParamLimits

0x8c99,	// (0x00015606) list_double_large_graphic_phob2_pane

0x916c,	// (0x00015ad9) list_double_large_graphic_phob2_pane_g1_ParamLimits

0x916c,	// (0x00015ad9) list_double_large_graphic_phob2_pane_g1

0x9179,	// (0x00015ae6) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x9179,	// (0x00015ae6) list_double_large_graphic_phob2_pane_g2

0x0003,

0xfe34,	// (0x0001c7a1) list_double_large_graphic_phob2_pane_g_ParamLimits

0xfe34,	// (0x0001c7a1) list_double_large_graphic_phob2_pane_g

0x919f,	// (0x00015b0c) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x919f,	// (0x00015b0c) list_double_large_graphic_phob2_pane_t1

0x91b4,	// (0x00015b21) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x91b4,	// (0x00015b21) list_double_large_graphic_phob2_pane_t2

0x0001,

0xfe3d,	// (0x0001c7aa) list_double_large_graphic_phob2_pane_t_ParamLimits

0xfe3d,	// (0x0001c7aa) list_double_large_graphic_phob2_pane_t

0x9775,	// (0x000160e2) list_highlight_pane_cp024

0x008d,	// (0x0000c9fa) phob2_cc_button_pane

0x91c9,	// (0x00015b36) phob2_cc_data_pane_g1_ParamLimits

0x91c9,	// (0x00015b36) phob2_cc_data_pane_g1

0x91e0,	// (0x00015b4d) phob2_cc_data_pane_g2_ParamLimits

0x91e0,	// (0x00015b4d) phob2_cc_data_pane_g2

0x0001,

0xfe42,	// (0x0001c7af) phob2_cc_data_pane_g_ParamLimits

0xfe42,	// (0x0001c7af) phob2_cc_data_pane_g

0x91f2,	// (0x00015b5f) phob2_cc_data_pane_t1_ParamLimits

0x91f2,	// (0x00015b5f) phob2_cc_data_pane_t1

0x920a,	// (0x00015b77) phob2_cc_data_pane_t2_ParamLimits

0x920a,	// (0x00015b77) phob2_cc_data_pane_t2

0x9222,	// (0x00015b8f) phob2_cc_data_pane_t3_ParamLimits

0x9222,	// (0x00015b8f) phob2_cc_data_pane_t3

0x0002,

0xfe47,	// (0x0001c7b4) phob2_cc_data_pane_t_ParamLimits

0xfe47,	// (0x0001c7b4) phob2_cc_data_pane_t

0x00f2,	// (0x0000ca5f) phob2_cc_list_pane_ParamLimits

0x00f2,	// (0x0000ca5f) phob2_cc_list_pane

0xd5ea,	// (0x00019f57) scroll_pane_cp035_ParamLimits

0xd5ea,	// (0x00019f57) scroll_pane_cp035

0x97e4,	// (0x00016151) bg_button_pane_cp033

0x00fe,	// (0x0000ca6b) phob2_cc_button_pane_g1

0x010a,	// (0x0000ca77) phob2_cc_button_pane_t1

0x011f,	// (0x0000ca8c) phob2_cc_button_pane_t2

0x0001,

0xfe4e,	// (0x0001c7bb) phob2_cc_button_pane_t

0x923a,	// (0x00015ba7) list_double_large_graphic_phob2_cc_pane_ParamLimits

0x923a,	// (0x00015ba7) list_double_large_graphic_phob2_cc_pane

0x926a,	// (0x00015bd7) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0x926a,	// (0x00015bd7) list_double_large_graphic_phob2_cc_pane_g1

0x9276,	// (0x00015be3) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x9276,	// (0x00015be3) list_double_large_graphic_phob2_cc_pane_g2

0x9282,	// (0x00015bef) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x9282,	// (0x00015bef) list_double_large_graphic_phob2_cc_pane_g3

0x928e,	// (0x00015bfb) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x928e,	// (0x00015bfb) list_double_large_graphic_phob2_cc_pane_g4

0x929a,	// (0x00015c07) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x929a,	// (0x00015c07) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xfe53,	// (0x0001c7c0) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xfe53,	// (0x0001c7c0) list_double_large_graphic_phob2_cc_pane_g

0x92a6,	// (0x00015c13) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x92a6,	// (0x00015c13) list_double_large_graphic_phob2_cc_pane_t1

0x92cf,	// (0x00015c3c) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x92cf,	// (0x00015c3c) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xfe5e,	// (0x0001c7cb) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xfe5e,	// (0x0001c7cb) list_double_large_graphic_phob2_cc_pane_t

0x0240,	// (0x0000cbad) list_highlight_pane_cp025_ParamLimits

0x0240,	// (0x0000cbad) list_highlight_pane_cp025

0x97e4,	// (0x00016151) bg_button_pane_cp033_ParamLimits

0x00fe,	// (0x0000ca6b) phob2_cc_button_pane_g1_ParamLimits

0x010a,	// (0x0000ca77) phob2_cc_button_pane_t1_ParamLimits

0x011f,	// (0x0000ca8c) phob2_cc_button_pane_t2_ParamLimits

0xfe4e,	// (0x0001c7bb) phob2_cc_button_pane_t_ParamLimits

0x18c0,	// (0x0000e22d) popup_wgtman_window

0xd37e,	// (0x00019ceb) scroll_pane_cp038

0x8c12,	// (0x0001557f) wgtman_btn_pane_cp_01_ParamLimits

0x8c12,	// (0x0001557f) wgtman_btn_pane_cp_01

0x024e,	// (0x0000cbbb) wgtman_content_pane

0x0257,	// (0x0000cbc4) wgtman_heading_pane

0x9775,	// (0x000160e2) bg_heading_pane_cp02

0x0260,	// (0x0000cbcd) wgtman_heading_pane_g1

0x0268,	// (0x0000cbd5) wgtman_heading_pane_t1

0x0276,	// (0x0000cbe3) scroll_pane_cp036

0x027e,	// (0x0000cbeb) wgtman_list_pane

0x0286,	// (0x0000cbf3) wgtman_list_pane_t1_ParamLimits

0x0286,	// (0x0000cbf3) wgtman_list_pane_t1

0xd121,	// (0x00019a8e) cam4_grid_pane

0x6b6f,	// (0x000134dc) bg_button_pane_cp015_ParamLimits

0x6b7f,	// (0x000134ec) bg_button_pane_cp016_ParamLimits

0x6b92,	// (0x000134ff) bg_button_pane_cp017_ParamLimits

0x6be8,	// (0x00013555) popup_vitu2_query_window_g3_ParamLimits

0x6be8,	// (0x00013555) popup_vitu2_query_window_g3

0x6ca5,	// (0x00013612) popup_vitu2_query_window_t6_ParamLimits

0x6ca5,	// (0x00013612) popup_vitu2_query_window_t6

0x6cd0,	// (0x0001363d) popup_vitu2_query_window_t7_ParamLimits

0x6cd0,	// (0x0001363d) popup_vitu2_query_window_t7

0x02a0,	// (0x0000cc0d) cam4_grid_pane_g1

0x02a9,	// (0x0000cc16) cam4_grid_pane_g2

0x02b2,	// (0x0000cc1f) cam4_grid_pane_g3

0x02bb,	// (0x0000cc28) cam4_grid_pane_g4

0x0003,

0xfe63,	// (0x0001c7d0) cam4_grid_pane_g

0x246d,	// (0x0000edda) aid_placing_vt_slider_lsc_ParamLimits

0x2778,	// (0x0000f0e5) vidtel_button_pane_ParamLimits

0x2778,	// (0x0000f0e5) vidtel_button_pane

0x9775,	// (0x000160e2) bg_button_pane_cp034

0x02c6,	// (0x0000cc33) vidtel_button_pane_g1

0x02ce,	// (0x0000cc3b) vidtel_button_pane_t1

0xd4f5,	// (0x00019e62) aid_size_vtel_slider_touch

0xd5ea,	// (0x00019f57) scroll_pane_cp039

0x79a7,	// (0x00014314) ncim_query_button_pane_cp01_ParamLimits

0x79c6,	// (0x00014333) ncimui_query_pane_g1_ParamLimits

0x97e4,	// (0x00016151) input_focus_pane_cp012_ParamLimits

0xdf42,	// (0x0001a8af) ncim_query_entry_pane_t1_ParamLimits

0xd5ea,	// (0x00019f57) scroll_pane_cp039_ParamLimits

0xab62,	// (0x000174cf) navi_pane_bcale_mc_g1

0xab6a,	// (0x000174d7) navi_pane_bcale_mc_t1

0xe527,	// (0x0001ae94) main_sp_fs_email_pane_g1

0xe533,	// (0x0001aea0) main_sp_fs_email_pane_g2

0x0001,

0xfc66,	// (0x0001c5d3) main_sp_fs_email_pane_g

0xe9e2,	// (0x0001b34f) list_single_cale_mrui_row_pane_g3_ParamLimits

0xe9e2,	// (0x0001b34f) list_single_cale_mrui_row_pane_g3

0x8815,	// (0x00015182) list_single_recal_day_pane_g5_event_pane

0xebba,	// (0x0001b527) list_single_recal_day_pane_g7

0x02e4,	// (0x0000cc51) list_recal_day_event_pane_cp01

0x02ed,	// (0x0000cc5a) list_recal_vselct_arw_lo_pane_cp01

0x02f5,	// (0x0000cc62) list_recal_vselct_arw_up_pane_cp01

0x02fd,	// (0x0000cc6a) list_recal_vselct_pane_cp01

0xd541,	// (0x00019eae) list_recal_day_event_pane_cp01_g1

0x0307,	// (0x0000cc74) list_recal_day_event_pane_cp01_t1

0xebc2,	// (0x0001b52f) list_single_recal_day_pane_t1_ParamLimits

0xebd4,	// (0x0001b541) list_single_recal_day_pane_t2_ParamLimits

0xfd46,	// (0x0001c6b3) list_single_recal_day_pane_t_ParamLimits

0x9e60,	// (0x000167cd) bg_notes_pane_ParamLimits

0x9f33,	// (0x000168a0) list_notes_pane_ParamLimits

0x1ac6,	// (0x0000e433) scroll_pane_cp06_ParamLimits

0x9f6f,	// (0x000168dc) main_notes_pane_ParamLimits

0x97e4,	// (0x00016151) main_welc_pane

0x9314,	// (0x00015c81) main_welc_body_pane_ParamLimits

0x9314,	// (0x00015c81) main_welc_body_pane

0x9332,	// (0x00015c9f) main_welc_opti_pane_ParamLimits

0x9332,	// (0x00015c9f) main_welc_opti_pane

0x93a6,	// (0x00015d13) main_welc_pane_t1_ParamLimits

0x93a6,	// (0x00015d13) main_welc_pane_t1

0x950d,	// (0x00015e7a) main_welc_body_row_pane_ParamLimits

0x950d,	// (0x00015e7a) main_welc_body_row_pane

0x9ecd,	// (0x0001683a) main_welc_opti_row_pane_ParamLimits

0x9ecd,	// (0x0001683a) main_welc_opti_row_pane

0x04dc,	// (0x0000ce49) main_welc_opti_row_pane_g1

0x9521,	// (0x00015e8e) main_welc_opti_row_pane_t1

0x04f3,	// (0x0000ce60) main_welc_body_row_pane_t1

0xee57,	// (0x0001b7c4) popup_notif_wgt_heading_pane

0xee71,	// (0x0001b7de) aid_size_list_notif_wgt_del_ParamLimits

0xee7e,	// (0x0001b7eb) list_notif_wgt_row_pane_g1_ParamLimits

0xee8a,	// (0x0001b7f7) list_notif_wgt_row_pane_g2_ParamLimits

0xee99,	// (0x0001b806) list_notif_wgt_row_pane_g3_ParamLimits

0xfdad,	// (0x0001c71a) list_notif_wgt_row_pane_g_ParamLimits

0xeea6,	// (0x0001b813) list_notif_wgt_row_pane_t1_ParamLimits

0xeebc,	// (0x0001b829) list_notif_wgt_row_pane_t2_ParamLimits

0xeece,	// (0x0001b83b) list_notif_wgt_row_pane_t3_ParamLimits

0xfdb4,	// (0x0001c721) list_notif_wgt_row_pane_t_ParamLimits

0x8cab,	// (0x00015618) listrow_wgtman_pane_g1_ParamLimits

0x8cb8,	// (0x00015625) listrow_wgtman_pane_g2_ParamLimits

0xfde4,	// (0x0001c751) listrow_wgtman_pane_g_ParamLimits

0x8cd6,	// (0x00015643) listrow_wgtman_pane_t1_ParamLimits

0x8cee,	// (0x0001565b) listrow_wgtman_pane_t2_ParamLimits

0xfde9,	// (0x0001c756) listrow_wgtman_pane_t_ParamLimits

0x8d14,	// (0x00015681) wait_bar_pane_cp09_ParamLimits

0x9775,	// (0x000160e2) bg_popup_heading_pane_cp02

0x0502,	// (0x0000ce6f) popup_notif_wgt_heading_pane_g1

0x050a,	// (0x0000ce77) popup_notif_wgt_heading_pane_t1

0x9775,	// (0x000160e2) main_vids_pane

0x9775,	// (0x000160e2) vids_listscroll_pane

0x9530,	// (0x00015e9d) scroll_pane_cp040

0x9775,	// (0x000160e2) vids_list_pane

0x953b,	// (0x00015ea8) vids_list_double_pane_ParamLimits

0x953b,	// (0x00015ea8) vids_list_double_pane

0x954c,	// (0x00015eb9) vids_list_double_pane_g1

0x9555,	// (0x00015ec2) vids_list_double_pane_t1

0x9565,	// (0x00015ed2) vids_list_double_pane_t2

0x0001,

0xfe82,	// (0x0001c7ef) vids_list_double_pane_t

0x97e4,	// (0x00016151) main_ncimui_pane_ParamLimits

0x77dd,	// (0x0001414a) main_ncimui_pane_g1_ParamLimits

0x77e9,	// (0x00014156) main_ncimui_pane_g2_ParamLimits

0x77e9,	// (0x00014156) main_ncimui_pane_g2

0x0001,

0xfb67,	// (0x0001c4d4) main_ncimui_pane_g_ParamLimits

0xfb67,	// (0x0001c4d4) main_ncimui_pane_g

0x934d,	// (0x00015cba) main_welc_pane_g1_ParamLimits

0x934d,	// (0x00015cba) main_welc_pane_g1

0x9362,	// (0x00015ccf) main_welc_pane_g2_ParamLimits

0x9362,	// (0x00015ccf) main_welc_pane_g2

0x0003,

0xfe6c,	// (0x0001c7d9) main_welc_pane_g_ParamLimits

0xfe6c,	// (0x0001c7d9) main_welc_pane_g

0x9e60,	// (0x000167cd) listscroll_mce_pane_ParamLimits

0xacb7,	// (0x00017624) wait_bar_pane_cp10

0xc0db,	// (0x00018a48) main_cale_day_pane_ParamLimits

0xc0db,	// (0x00018a48) main_cale_week_pane_ParamLimits

0x9e60,	// (0x000167cd) main_messa_pane_ParamLimits

0x5268,	// (0x00011bd5) main_clock2_btn_pane_ParamLimits

0x5268,	// (0x00011bd5) main_clock2_btn_pane

0xc954,	// (0x000192c1) main_clock2_btn_pane_cp01_ParamLimits

0xc954,	// (0x000192c1) main_clock2_btn_pane_cp01

0xe96e,	// (0x0001b2db) list_cale_mrui_pane_ParamLimits

0xef12,	// (0x0001b87f) main_cf0_pane_g2

0x0001,

0xfdbb,	// (0x0001c728) main_cf0_pane_g

0x8f01,	// (0x0001586e) area_left_week_number_pane_ParamLimits

0x8f0d,	// (0x0001587a) area_top_day_name_pane_ParamLimits

0x8f20,	// (0x0001588d) frame_month_view_pane_ParamLimits

0xf03a,	// (0x0001b9a7) grid_month_view_pane_ParamLimits

0xf048,	// (0x0001b9b5) frm_month_g1_ParamLimits

0x8fa1,	// (0x0001590e) frm_month_g2_ParamLimits

0x8fb4,	// (0x00015921) frm_month_g3_ParamLimits

0x8fc7,	// (0x00015934) frm_month_g4_ParamLimits

0x8fda,	// (0x00015947) frm_month_g5_ParamLimits

0x8fed,	// (0x0001595a) frm_month_g6_ParamLimits

0x9000,	// (0x0001596d) frm_month_g7_ParamLimits

0xf055,	// (0x0001b9c2) frm_month_g8_ParamLimits

0x9013,	// (0x00015980) frm_month_g9_ParamLimits

0x9023,	// (0x00015990) frm_month_g10_ParamLimits

0x9033,	// (0x000159a0) frm_month_g11_ParamLimits

0x9043,	// (0x000159b0) frm_month_g12_ParamLimits

0x9055,	// (0x000159c2) frm_month_g13_ParamLimits

0x9067,	// (0x000159d4) frm_month_g14_ParamLimits

0x907b,	// (0x000159e8) frm_month_g15_ParamLimits

0x908f,	// (0x000159fc) frm_month_g16_ParamLimits

0xfe13,	// (0x0001c780) frm_month_g_ParamLimits

0xf062,	// (0x0001b9cf) cell_top_day_name_pane_t1_ParamLimits

0x90a3,	// (0x00015a10) cell_area_left_week_number_pane_g1_ParamLimits

0x90af,	// (0x00015a1c) cell_area_left_week_number_pane_t1_ParamLimits

0x9edb,	// (0x00016848) cell_month_view_pane_g1_ParamLimits

0x90c2,	// (0x00015a2f) cell_month_view_pane_t1_ParamLimits

0x9e58,	// (0x000167c5) main_clock2_btn_pane_g1

0x0561,	// (0x0000cece) main_clock2_btn_pane_t1

0x97e4,	// (0x00016151) listscroll_cmail_pane_ParamLimits

0xe527,	// (0x0001ae94) main_sp_fs_email_pane_g1_ParamLimits

0xe533,	// (0x0001aea0) main_sp_fs_email_pane_g2_ParamLimits

0xfc66,	// (0x0001c5d3) main_sp_fs_email_pane_g_ParamLimits

0xeb2a,	// (0x0001b497) list_recal_day_pane_ParamLimits

0xeb3b,	// (0x0001b4a8) mian_recal_day_pane_t1

0x81b0,	// (0x00014b1d) list_single_dyc_row_text_pane_t4_ParamLimits

0x81b0,	// (0x00014b1d) list_single_dyc_row_text_pane_t4

0x81f9,	// (0x00014b66) list_single_dyc_row_text_pane_t5_ParamLimits

0x81f9,	// (0x00014b66) list_single_dyc_row_text_pane_t5

0xe5fb,	// (0x0001af68) list_single_dyc_row_text_pane_t6_ParamLimits

0xe5fb,	// (0x0001af68) list_single_dyc_row_text_pane_t6

0xa5dd,	// (0x00016f4a) aid_mgn_list_cale_time_pane

0x97e4,	// (0x00016151) main_gallery2_pane_ParamLimits

0xc96a,	// (0x000192d7) main_clock2_pane_cp01_t1

0xc97a,	// (0x000192e7) main_clock2_pane_cp01_t3

0x0001,

0xf74c,	// (0x0001c0b9) main_clock2_pane_cp01_t

0x1e63,	// (0x0000e7d0) cale_week_scroll_pane_g16_ParamLimits

0x1e63,	// (0x0000e7d0) cale_week_scroll_pane_g16

0xa1b4,	// (0x00016b21) vorec_slider_pane

0x02ce,	// (0x0000cc3b) vidtel_button_pane_t1_ParamLimits

0x887b,	// (0x000151e8) main_fs_bigclock_clock_pane_g1_ParamLimits

0x887b,	// (0x000151e8) main_fs_bigclock_clock_pane_g2_ParamLimits

0x888c,	// (0x000151f9) main_fs_bigclock_clock_pane_g3_ParamLimits

0x888c,	// (0x000151f9) main_fs_bigclock_clock_pane_g4_ParamLimits

0xfd69,	// (0x0001c6d6) main_fs_bigclock_clock_pane_g_ParamLimits

0x889f,	// (0x0001520c) main_fs_bigclock_clock_pane_t1_ParamLimits

0x88b5,	// (0x00015222) main_fs_bigclock_clock_pane_t2_ParamLimits

0xfd72,	// (0x0001c6df) main_fs_bigclock_clock_pane_t_ParamLimits

0x4b3d,	// (0x000114aa) main_mup3_lyrics_pane_ParamLimits

0x4b3d,	// (0x000114aa) main_mup3_lyrics_pane

0x959b,	// (0x00015f08) main_mup3_lyrics_pane_t1_ParamLimits

0x959b,	// (0x00015f08) main_mup3_lyrics_pane_t1

0xcdb6,	// (0x00019723) aid_main_mp4_pane_t1_area

0xcdc0,	// (0x0001972d) aid_main_mp4_pane_t2_area

0xce6c,	// (0x000197d9) main_mp4_pane_g7_ParamLimits

0xce6c,	// (0x000197d9) main_mp4_pane_g7

0xce78,	// (0x000197e5) main_mp4_pane_g8_ParamLimits

0xce78,	// (0x000197e5) main_mp4_pane_g8

0x5c20,	// (0x0001258d) aid_call6_pane_g1_size

0x9254,	// (0x00015bc1) list_double_large_graphic_phob2_other_pane_ParamLimits

0x9254,	// (0x00015bc1) list_double_large_graphic_phob2_other_pane

0xa595,	// (0x00016f02) list_double_large_graphic_phob2_other_pane_g1

0x9775,	// (0x000160e2) list_highlight_pane_cp026

0x97e4,	// (0x00016151) main_welc_pane_ParamLimits

0x8015,	// (0x00014982) main_sp_fs_ctrlbar_pane_g3_ParamLimits

0x8015,	// (0x00014982) main_sp_fs_ctrlbar_pane_g3

0x802f,	// (0x0001499c) main_sp_fs_ctrlbar_pane_g4_ParamLimits

0x802f,	// (0x0001499c) main_sp_fs_ctrlbar_pane_g4

0x8063,	// (0x000149d0) toolbar2_fixed_button_pane_cp01

0x806e,	// (0x000149db) toolbar2_fixed_button_pane_cp02

0x807b,	// (0x000149e8) toolbar2_fixed_button_pane_cp03

0x92f8,	// (0x00015c65) list_welc_entry_pane_ParamLimits

0x92f8,	// (0x00015c65) list_welc_entry_pane

0x9377,	// (0x00015ce4) main_welc_pane_g3_ParamLimits

0x9377,	// (0x00015ce4) main_welc_pane_g3

0x93c4,	// (0x00015d31) main_welc_pane_t2_ParamLimits

0x93c4,	// (0x00015d31) main_welc_pane_t2

0x93de,	// (0x00015d4b) main_welc_pane_t3_ParamLimits

0x93de,	// (0x00015d4b) main_welc_pane_t3

0x0005,

0xfe75,	// (0x0001c7e2) main_welc_pane_t_ParamLimits

0xfe75,	// (0x0001c7e2) main_welc_pane_t

0x9490,	// (0x00015dfd) welc_button_pane_ParamLimits

0x9490,	// (0x00015dfd) welc_button_pane

0x94f8,	// (0x00015e65) welc_service_logo_pane_ParamLimits

0x94f8,	// (0x00015e65) welc_service_logo_pane

0x95b7,	// (0x00015f24) list_single_welc_entry_pane_ParamLimits

0x95b7,	// (0x00015f24) list_single_welc_entry_pane

0x95c8,	// (0x00015f35) list_single_welc_entry_pane_g1

0x95d0,	// (0x00015f3d) list_single_welc_entry_pane_t1

0x95de,	// (0x00015f4b) list_single_welc_entry_pane_t2

0x0001,

0xfe87,	// (0x0001c7f4) list_single_welc_entry_pane_t

0x9775,	// (0x000160e2) bg_button_pane_cp035

0x05fc,	// (0x0000cf69) welc_button_pane_t1

0x060a,	// (0x0000cf77) welc_service_logo_pane_g1

0x0613,	// (0x0000cf80) welc_service_logo_pane_g2

0x0001,

0xfe8c,	// (0x0001c7f9) welc_service_logo_pane_g

0x9775,	// (0x000160e2) main_int_radio_pane

0xa00a,	// (0x00016977) list_single_fs_dyc_pane_g1

0x9185,	// (0x00015af2) list_double_large_graphic_phob2_pane_g3_ParamLimits

0x9185,	// (0x00015af2) list_double_large_graphic_phob2_pane_g3

0x9191,	// (0x00015afe) list_double_large_graphic_phob2_pane_g4_ParamLimits

0x9191,	// (0x00015afe) list_double_large_graphic_phob2_pane_g4

0x95ec,	// (0x00015f59) main_int_radio1_pane_ParamLimits

0x95ec,	// (0x00015f59) main_int_radio1_pane

0x062e,	// (0x0000cf9b) find_pane_cp02

0x9609,	// (0x00015f76) input_focus_pane_cp12_ParamLimits

0x9609,	// (0x00015f76) input_focus_pane_cp12

0x9619,	// (0x00015f86) input_focus_pane_cp13_ParamLimits

0x9619,	// (0x00015f86) input_focus_pane_cp13

0x962d,	// (0x00015f9a) input_focus_pane_cp14_ParamLimits

0x962d,	// (0x00015f9a) input_focus_pane_cp14

0x0673,	// (0x0000cfe0) int_radio1_listscroll_pane

0x9641,	// (0x00015fae) main_int_radio1_pane_g1_ParamLimits

0x9641,	// (0x00015fae) main_int_radio1_pane_g1

0x9659,	// (0x00015fc6) main_int_radio1_pane_t1_ParamLimits

0x9659,	// (0x00015fc6) main_int_radio1_pane_t1

0x9674,	// (0x00015fe1) main_int_radio1_pane_t2_ParamLimits

0x9674,	// (0x00015fe1) main_int_radio1_pane_t2

0x968f,	// (0x00015ffc) main_int_radio1_pane_t3_ParamLimits

0x968f,	// (0x00015ffc) main_int_radio1_pane_t3

0x96aa,	// (0x00016017) main_int_radio1_pane_t4_ParamLimits

0x96aa,	// (0x00016017) main_int_radio1_pane_t4

0x06e0,	// (0x0000d04d) main_int_radio1_pane_t5_ParamLimits

0x06e0,	// (0x0000d04d) main_int_radio1_pane_t5

0x96bc,	// (0x00016029) main_int_radio1_pane_t6_ParamLimits

0x96bc,	// (0x00016029) main_int_radio1_pane_t6

0x96d1,	// (0x0001603e) main_int_radio1_pane_t7_ParamLimits

0x96d1,	// (0x0001603e) main_int_radio1_pane_t7

0x96e6,	// (0x00016053) main_int_radio1_pane_t8_ParamLimits

0x96e6,	// (0x00016053) main_int_radio1_pane_t8

0x9705,	// (0x00016072) main_int_radio1_pane_t9_ParamLimits

0x9705,	// (0x00016072) main_int_radio1_pane_t9

0x9717,	// (0x00016084) main_int_radio1_pane_t10_ParamLimits

0x9717,	// (0x00016084) main_int_radio1_pane_t10

0x973d,	// (0x000160aa) main_int_radio1_pane_t11_ParamLimits

0x973d,	// (0x000160aa) main_int_radio1_pane_t11

0x9763,	// (0x000160d0) main_int_radio1_pane_t12_ParamLimits

0x9763,	// (0x000160d0) main_int_radio1_pane_t12

0x000b,

0xfe91,	// (0x0001c7fe) main_int_radio1_pane_t_ParamLimits

0xfe91,	// (0x0001c7fe) main_int_radio1_pane_t

0x07b5,	// (0x0000d122) int_radio_list_pane

0xf07d,	// (0x0001b9ea) scroll_pane_cp037

0x07bd,	// (0x0000d12a) list_double_large_graphic_int_radio_pane_ParamLimits

0x07bd,	// (0x0000d12a) list_double_large_graphic_int_radio_pane

0x07d5,	// (0x0000d142) list_double_large_graphic_int_radio_pane_g1

0x07de,	// (0x0000d14b) list_double_large_graphic_int_radio_pane_t1

0x07ec,	// (0x0000d159) list_double_large_graphic_int_radio_pane_t2

0x0001,

0xfeaa,	// (0x0001c817) list_double_large_graphic_int_radio_pane_t

0x9775,	// (0x000160e2) list_highlight_pane_cp027

0x0324,	// (0x0000cc91) main_button_pane_4

0x9387,	// (0x00015cf4) main_welc_pane_g4_ParamLimits

0x9387,	// (0x00015cf4) main_welc_pane_g4

0x93f6,	// (0x00015d63) main_welc_pane_t4_ParamLimits

0x93f6,	// (0x00015d63) main_welc_pane_t4

0x940b,	// (0x00015d78) main_welc_pane_t5_ParamLimits

0x940b,	// (0x00015d78) main_welc_pane_t5

0x9455,	// (0x00015dc2) main_welc_pane_t6_ParamLimits

0x9455,	// (0x00015dc2) main_welc_pane_t6

0x94a7,	// (0x00015e14) welc_button_pane_2_ParamLimits

0x94a7,	// (0x00015e14) welc_button_pane_2

0x94c3,	// (0x00015e30) welc_button_pane_3_ParamLimits

0x94c3,	// (0x00015e30) welc_button_pane_3

0x0324,	// (0x0000cc91) welc_button_pane_4

0x94e2,	// (0x00015e4f) welc_button_pane_5_ParamLimits

0x94e2,	// (0x00015e4f) welc_button_pane_5

0x4346,	// (0x00010cb3) main_popup_welc_pane

0x07fa,	// (0x0000d167) main_welc_sk_g3

0x0804,	// (0x0000d171) main_welc_sk_g4

0x080e,	// (0x0000d17b) main_welc_sk_t3

0x081e,	// (0x0000d18b) main_welc_sk_t4

0x082e,	// (0x0000d19b) popup_welc_pane_t4

0x083c,	// (0x0000d1a9) popup_welc_pane_t5

0x084a,	// (0x0000d1b7) popup_welc_pane_t6
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
	};

} // end of namespace AknLayoutScalable_Elaf_phl_apps_qhd_lsc_tch_Normal
