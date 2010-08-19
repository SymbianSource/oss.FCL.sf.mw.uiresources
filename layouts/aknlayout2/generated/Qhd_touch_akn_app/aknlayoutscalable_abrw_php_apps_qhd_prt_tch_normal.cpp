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

#include "aknlayoutscalable_abrw_php_apps_qhd_prt_tch_normal.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_php_apps_qhd_prt_tch[]; }

namespace AknLayoutScalable_Abrw_php_apps_qhd_prt_tch_Normal
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_php_apps_qhd_prt_tch + 0x000158aa };

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
0x8741,	// (0x0001dfeb) Screen

0x874d,	// (0x0001dff7) application_window

0x8759,	// (0x0001e003) area_bottom_pane_ParamLimits

0x8759,	// (0x0001e003) area_bottom_pane

0x6fed,	// (0x0001c897) area_top_pane_ParamLimits

0x6fed,	// (0x0001c897) area_top_pane

0x7051,	// (0x0001c8fb) call_video_uplink_pane_ParamLimits

0x7051,	// (0x0001c8fb) call_video_uplink_pane

0x7090,	// (0x0001c93a) main_pane_ParamLimits

0x7090,	// (0x0001c93a) main_pane

0x31fe,	// (0x00018aa8) context_pane

0xae78,	// (0x00020722) navi_pane

0xae9e,	// (0x00020748) popup_cale_events_window_ParamLimits

0xae9e,	// (0x00020748) popup_cale_events_window

0x3211,	// (0x00018abb) popup_mup_playback_window

0xaeb6,	// (0x00020760) signal_pane

0x1032,	// (0x000168dc) main_browser_pane

0x1277,	// (0x00016b21) main_burst_pane

0x764e,	// (0x0001cef8) main_calc_pane

0x319e,	// (0x00018a48) main_cale_day_pane

0x8a1f,	// (0x0001e2c9) main_cale_month_pane

0x319e,	// (0x00018a48) main_cale_week_pane

0x1277,	// (0x00016b21) main_call_pane

0x0cc8,	// (0x00016572) main_call_poc_pane

0x1277,	// (0x00016b21) main_camera_pane

0x1277,	// (0x00016b21) main_chi_dic_pane

0x1aff,	// (0x000173a9) main_clock_pane

0x0cc8,	// (0x00016572) main_fmradio_pane

0x1277,	// (0x00016b21) main_graph_messa_pane

0x0cc8,	// (0x00016572) main_help_pane

0x1032,	// (0x000168dc) main_im_pane

0x0f23,	// (0x000167cd) main_image_pane_ParamLimits

0x0f23,	// (0x000167cd) main_image_pane

0x0cc8,	// (0x00016572) main_location2_pane

0x1277,	// (0x00016b21) main_location_pane

0x0f23,	// (0x000167cd) main_messa_pane

0x0cc8,	// (0x00016572) main_mp2_pane

0x1277,	// (0x00016b21) main_mp_pane

0x0cc8,	// (0x00016572) main_msg_pane

0x0cc8,	// (0x00016572) main_mup_eq_pane

0x0cc8,	// (0x00016572) main_mup_pane

0x1032,	// (0x000168dc) main_notes_pane

0x0cc8,	// (0x00016572) main_pec_pane

0x0cc8,	// (0x00016572) main_phob_pane

0x0cc8,	// (0x00016572) main_pinb_pane

0x0cc8,	// (0x00016572) main_postcard_pane

0x0cc8,	// (0x00016572) main_qdial_pane

0x1277,	// (0x00016b21) main_skin_pane

0x0cc8,	// (0x00016572) main_smil2_pane

0x1277,	// (0x00016b21) main_smil_pane

0x1277,	// (0x00016b21) main_video_pane

0x1277,	// (0x00016b21) main_video_tele_pane

0x0f23,	// (0x000167cd) main_viewer_pane_ParamLimits

0x0f23,	// (0x000167cd) main_viewer_pane

0x1277,	// (0x00016b21) main_vorec_pane

0x76a6,	// (0x0001cf50) popup_blid_sat_info_window_ParamLimits

0x76a6,	// (0x0001cf50) popup_blid_sat_info_window

0x76c6,	// (0x0001cf70) popup_dyc_status_message_window_ParamLimits

0x76c6,	// (0x0001cf70) popup_dyc_status_message_window

0x76d6,	// (0x0001cf80) popup_grid_large_graphic_window_ParamLimits

0x76d6,	// (0x0001cf80) popup_grid_large_graphic_window

0x7767,	// (0x0001d011) popup_loc_request_window_ParamLimits

0x7767,	// (0x0001d011) popup_loc_request_window

0x77b4,	// (0x0001d05e) popup_wml_address_window_ParamLimits

0x77b4,	// (0x0001d05e) popup_wml_address_window

0xad5a,	// (0x00020604) call_muted_g1

0xa9d5,	// (0x0002027f) popup_call_audio_conf_window_ParamLimits

0xa9d5,	// (0x0002027f) popup_call_audio_conf_window

0xad6a,	// (0x00020614) popup_call_audio_first_window_ParamLimits

0xad6a,	// (0x00020614) popup_call_audio_first_window

0xadaa,	// (0x00020654) popup_call_audio_in_window_ParamLimits

0xadaa,	// (0x00020654) popup_call_audio_in_window

0xadce,	// (0x00020678) popup_call_audio_out_window_ParamLimits

0xadce,	// (0x00020678) popup_call_audio_out_window

0xadf0,	// (0x0002069a) popup_call_audio_second_window_ParamLimits

0xadf0,	// (0x0002069a) popup_call_audio_second_window

0xae20,	// (0x000206ca) popup_call_audio_wait_window_ParamLimits

0xae20,	// (0x000206ca) popup_call_audio_wait_window

0xae41,	// (0x000206eb) popup_number_entry_window_ParamLimits

0xae41,	// (0x000206eb) popup_number_entry_window

0x08b5,	// (0x0001615f) bg_popup_call_pane_cp05_ParamLimits

0x08b5,	// (0x0001615f) bg_popup_call_pane_cp05

0x08d5,	// (0x0001617f) popup_number_entry_window_t1

0x08e8,	// (0x00016192) popup_number_entry_window_t2

0x08fa,	// (0x000161a4) popup_number_entry_window_t3

0x0003,

0xf085,	// (0x0002492f) popup_number_entry_window_t

0x090c,	// (0x000161b6) text_title_cp2

0x091f,	// (0x000161c9) bg_popup_call_pane_cp_ParamLimits

0x091f,	// (0x000161c9) bg_popup_call_pane_cp

0x092d,	// (0x000161d7) call_thumbnail_pane

0x0935,	// (0x000161df) popup_call_audio_in_window_g1_ParamLimits

0x0935,	// (0x000161df) popup_call_audio_in_window_g1

0x0941,	// (0x000161eb) popup_call_audio_in_window_g2_ParamLimits

0x0941,	// (0x000161eb) popup_call_audio_in_window_g2

0x094d,	// (0x000161f7) popup_call_audio_in_window_g3_ParamLimits

0x094d,	// (0x000161f7) popup_call_audio_in_window_g3

0x0002,

0xf08e,	// (0x00024938) popup_call_audio_in_window_g_ParamLimits

0xf08e,	// (0x00024938) popup_call_audio_in_window_g

0x0959,	// (0x00016203) popup_call_audio_in_window_t1_ParamLimits

0x0959,	// (0x00016203) popup_call_audio_in_window_t1

0x0975,	// (0x0001621f) popup_call_audio_in_window_t2_ParamLimits

0x0975,	// (0x0001621f) popup_call_audio_in_window_t2

0x0991,	// (0x0001623b) popup_call_audio_in_window_t3_ParamLimits

0x0991,	// (0x0001623b) popup_call_audio_in_window_t3

0x0002,

0xf095,	// (0x0002493f) popup_call_audio_in_window_t_ParamLimits

0xf095,	// (0x0002493f) popup_call_audio_in_window_t

0x091f,	// (0x000161c9) bg_popup_call_pane_cp01_ParamLimits

0x091f,	// (0x000161c9) bg_popup_call_pane_cp01

0x092d,	// (0x000161d7) call_thumbnail_pane_cp02

0x09a4,	// (0x0001624e) call_type_pane_cp022

0x09ac,	// (0x00016256) popup_call_audio_out_window_g1_ParamLimits

0x09ac,	// (0x00016256) popup_call_audio_out_window_g1

0x09be,	// (0x00016268) popup_call_audio_out_window_g2_ParamLimits

0x09be,	// (0x00016268) popup_call_audio_out_window_g2

0x09ca,	// (0x00016274) popup_call_audio_out_window_g3_ParamLimits

0x09ca,	// (0x00016274) popup_call_audio_out_window_g3

0x0002,

0xf09c,	// (0x00024946) popup_call_audio_out_window_g_ParamLimits

0xf09c,	// (0x00024946) popup_call_audio_out_window_g

0x09dc,	// (0x00016286) popup_call_audio_out_window_t1_ParamLimits

0x09dc,	// (0x00016286) popup_call_audio_out_window_t1

0x09f4,	// (0x0001629e) popup_call_audio_out_window_t2_ParamLimits

0x09f4,	// (0x0001629e) popup_call_audio_out_window_t2

0x0001,

0xf0a3,	// (0x0002494d) popup_call_audio_out_window_t_ParamLimits

0xf0a3,	// (0x0002494d) popup_call_audio_out_window_t

0x0a09,	// (0x000162b3) bg_popup_call_pane_ParamLimits

0x0a09,	// (0x000162b3) bg_popup_call_pane

0x87d3,	// (0x0001e07d) call_thumbnail_pane_cp_ParamLimits

0x87d3,	// (0x0001e07d) call_thumbnail_pane_cp

0x0a8d,	// (0x00016337) call_type_pane_cp01_ParamLimits

0x0a8d,	// (0x00016337) call_type_pane_cp01

0x0ad1,	// (0x0001637b) popup_call_audio_first_window_g1_ParamLimits

0x0ad1,	// (0x0001637b) popup_call_audio_first_window_g1

0x0b1d,	// (0x000163c7) popup_call_audio_first_window_g2_ParamLimits

0x0b1d,	// (0x000163c7) popup_call_audio_first_window_g2

0x0001,

0xf0a8,	// (0x00024952) popup_call_audio_first_window_g_ParamLimits

0xf0a8,	// (0x00024952) popup_call_audio_first_window_g

0x0b61,	// (0x0001640b) popup_call_audio_first_window_t1_ParamLimits

0x0b61,	// (0x0001640b) popup_call_audio_first_window_t1

0x0c0d,	// (0x000164b7) popup_call_audio_first_window_t4_ParamLimits

0x0c0d,	// (0x000164b7) popup_call_audio_first_window_t4

0x0c99,	// (0x00016543) popup_call_audio_first_window_t5_ParamLimits

0x0c99,	// (0x00016543) popup_call_audio_first_window_t5

0x0002,

0xf0ad,	// (0x00024957) popup_call_audio_first_window_t_ParamLimits

0xf0ad,	// (0x00024957) popup_call_audio_first_window_t

0x0cc8,	// (0x00016572) bg_popup_call_pane_cp02

0x0cd2,	// (0x0001657c) call_type_pane_cp023

0x0cda,	// (0x00016584) popup_call_audio_wait_window_g1

0x0ce2,	// (0x0001658c) popup_call_audio_wait_window_g2

0x0001,

0xf0b4,	// (0x0002495e) popup_call_audio_wait_window_g

0x0cea,	// (0x00016594) popup_call_audio_wait_window_t3

0x0cf8,	// (0x000165a2) bg_popup_call_pane_cp03_ParamLimits

0x0cf8,	// (0x000165a2) bg_popup_call_pane_cp03

0x0d58,	// (0x00016602) call_thumbnail_pane_cp011_ParamLimits

0x0d58,	// (0x00016602) call_thumbnail_pane_cp011

0x0d64,	// (0x0001660e) call_type_pane_cp034_ParamLimits

0x0d64,	// (0x0001660e) call_type_pane_cp034

0x0da0,	// (0x0001664a) popup_call_audio_second_window_g1_ParamLimits

0x0da0,	// (0x0001664a) popup_call_audio_second_window_g1

0x0ddc,	// (0x00016686) popup_call_audio_second_window_g2_ParamLimits

0x0ddc,	// (0x00016686) popup_call_audio_second_window_g2

0x0001,

0xf0b9,	// (0x00024963) popup_call_audio_second_window_g_ParamLimits

0xf0b9,	// (0x00024963) popup_call_audio_second_window_g

0x0e18,	// (0x000166c2) popup_call_audio_second_window_t1_ParamLimits

0x0e18,	// (0x000166c2) popup_call_audio_second_window_t1

0x0e99,	// (0x00016743) popup_call_audio_second_window_t2_ParamLimits

0x0e99,	// (0x00016743) popup_call_audio_second_window_t2

0x0ecf,	// (0x00016779) popup_call_audio_second_window_t3_ParamLimits

0x0ecf,	// (0x00016779) popup_call_audio_second_window_t3

0x0002,

0xf0be,	// (0x00024968) popup_call_audio_second_window_t_ParamLimits

0xf0be,	// (0x00024968) popup_call_audio_second_window_t

0x0cc8,	// (0x00016572) bg_popup_call_pane_cp04

0x0f05,	// (0x000167af) list_conf_pane

0x0f0d,	// (0x000167b7) popup_call_audio_conf_window_t1

0x0f1b,	// (0x000167c5) call_thumbnail_pane_g1

0x0f23,	// (0x000167cd) bg_pinb_pane_ParamLimits

0x0f23,	// (0x000167cd) bg_pinb_pane

0x0f31,	// (0x000167db) find_pinb_pane

0x0f23,	// (0x000167cd) listscroll_pinb_pane_ParamLimits

0x0f23,	// (0x000167cd) listscroll_pinb_pane

0x0f3b,	// (0x000167e5) pinb_bg_pane_g1

0x0f3b,	// (0x000167e5) pinb_bg_pane_g2

0x0f3b,	// (0x000167e5) pinb_bg_pane_g3

0x0f3b,	// (0x000167e5) pinb_bg_pane_g4

0x0f3b,	// (0x000167e5) pinb_bg_pane_g5

0x0f3b,	// (0x000167e5) pinb_bg_pane_g6

0x0f3b,	// (0x000167e5) pinb_bg_pane_g7

0x0f3b,	// (0x000167e5) pinb_bg_pane_g8

0x0f3b,	// (0x000167e5) pinb_bg_pane_g9

0x0f3b,	// (0x000167e5) pinb_bg_pane_g10

0x0009,

0xf0c5,	// (0x0002496f) pinb_bg_pane_g

0x0838,	// (0x000160e2) grid_pinb_pane

0x0838,	// (0x000160e2) list_pinb_pane

0x08a7,	// (0x00016151) scroll_pane_cp01_ParamLimits

0x08a7,	// (0x00016151) scroll_pane_cp01

0x0f45,	// (0x000167ef) find_pinb_pane_g1_ParamLimits

0x0f45,	// (0x000167ef) find_pinb_pane_g1

0x0f5d,	// (0x00016807) find_pinb_pane_t1

0x0f6f,	// (0x00016819) find_pinb_pane_t2

0x0001,

0xf0df,	// (0x00024989) find_pinb_pane_t

0x0f84,	// (0x0001682e) input_focus_pane_cp01_ParamLimits

0x0f84,	// (0x0001682e) input_focus_pane_cp01

0x0f90,	// (0x0001683a) cell_pinb_pane_ParamLimits

0x0f90,	// (0x0001683a) cell_pinb_pane

0x0f9e,	// (0x00016848) cell_pinb_pane_g1_ParamLimits

0x0f9e,	// (0x00016848) cell_pinb_pane_g1

0x0fac,	// (0x00016856) cell_pinb_pane_g2_ParamLimits

0x0fac,	// (0x00016856) cell_pinb_pane_g2

0x0fac,	// (0x00016856) cell_pinb_pane_g3_ParamLimits

0x0fac,	// (0x00016856) cell_pinb_pane_g3

0x0002,

0xf0e4,	// (0x0002498e) cell_pinb_pane_g_ParamLimits

0xf0e4,	// (0x0002498e) cell_pinb_pane_g

0x0cc8,	// (0x00016572) grid_highlight_pane_cp01

0x0f90,	// (0x0001683a) list_pinb_item_pane_ParamLimits

0x0f90,	// (0x0001683a) list_pinb_item_pane

0x0838,	// (0x000160e2) list_highlight_pane_cp02

0x0fba,	// (0x00016864) list_pinb_item_pane_g1_ParamLimits

0x0fba,	// (0x00016864) list_pinb_item_pane_g1

0x0fac,	// (0x00016856) list_pinb_item_pane_g2_ParamLimits

0x0fac,	// (0x00016856) list_pinb_item_pane_g2

0x0f9e,	// (0x00016848) list_pinb_item_pane_g3_ParamLimits

0x0f9e,	// (0x00016848) list_pinb_item_pane_g3

0x0fac,	// (0x00016856) list_pinb_item_pane_g4_ParamLimits

0x0fac,	// (0x00016856) list_pinb_item_pane_g4

0x0003,

0xf0eb,	// (0x00024995) list_pinb_item_pane_g_ParamLimits

0xf0eb,	// (0x00024995) list_pinb_item_pane_g

0x0fc8,	// (0x00016872) list_pinb_item_pane_t1_ParamLimits

0x0fc8,	// (0x00016872) list_pinb_item_pane_t1

0x727e,	// (0x0001cb28) calc_display_pane

0x729c,	// (0x0001cb46) calc_paper_pane

0x72b8,	// (0x0001cb62) grid_calc_pane

0x0cc8,	// (0x00016572) bg_list_pane_cp01

0x87f7,	// (0x0001e0a1) clock_g1

0x87ff,	// (0x0001e0a9) clock_g2

0x0001,

0xf0f4,	// (0x0002499e) clock_g

0x8809,	// (0x0001e0b3) clock_t1_ParamLimits

0x8809,	// (0x0001e0b3) clock_t1

0x881e,	// (0x0001e0c8) clock_t2_ParamLimits

0x881e,	// (0x0001e0c8) clock_t2

0x8830,	// (0x0001e0da) clock_t3_ParamLimits

0x8830,	// (0x0001e0da) clock_t3

0x8842,	// (0x0001e0ec) clock_t4_ParamLimits

0x8842,	// (0x0001e0ec) clock_t4

0x8854,	// (0x0001e0fe) clock_t5_ParamLimits

0x8854,	// (0x0001e0fe) clock_t5

0x8869,	// (0x0001e113) clock_t6_ParamLimits

0x8869,	// (0x0001e113) clock_t6

0x887b,	// (0x0001e125) clock_t7_ParamLimits

0x887b,	// (0x0001e125) clock_t7

0x888d,	// (0x0001e137) clock_t8_ParamLimits

0x888d,	// (0x0001e137) clock_t8

0x88a3,	// (0x0001e14d) clock_t9_ParamLimits

0x88a3,	// (0x0001e14d) clock_t9

0x0008,

0xf0f9,	// (0x000249a3) clock_t_ParamLimits

0xf0f9,	// (0x000249a3) clock_t

0x0fe4,	// (0x0001688e) popup_clock_analogue_window_cp02

0x0fe4,	// (0x0001688e) popup_clock_digital_window_cp01

0x0cc8,	// (0x00016572) listscroll_help_pane

0x0cc8,	// (0x00016572) phob_pre_status_pane

0x0fec,	// (0x00016896) grid_qdial_pane

0x0f23,	// (0x000167cd) listscroll_mce_pane

0x0f23,	// (0x000167cd) bg_notes_pane

0x0ff6,	// (0x000168a0) list_notes_pane

0x88b9,	// (0x0001e163) scroll_pane_cp06

0x1004,	// (0x000168ae) bg_calc_paper_pane

0x72e4,	// (0x0001cb8e) list_calc_pane

0x1032,	// (0x000168dc) bg_calc_display_pane

0x72fe,	// (0x0001cba8) calc_display_pane_t1

0x7313,	// (0x0001cbbd) calc_display_pane_t2

0x7328,	// (0x0001cbd2) calc_display_pane_t3

0x0002,

0xf10c,	// (0x000249b6) calc_display_pane_t

0x733a,	// (0x0001cbe4) cell_calc_pane_ParamLimits

0x733a,	// (0x0001cbe4) cell_calc_pane

0x1050,	// (0x000168fa) bg_calc_paper_pane_g1

0x1068,	// (0x00016912) bg_calc_paper_pane_g2

0x105c,	// (0x00016906) bg_calc_paper_pane_g3

0x1080,	// (0x0001692a) bg_calc_paper_pane_g4

0x1074,	// (0x0001691e) bg_calc_paper_pane_g5

0x88c8,	// (0x0001e172) bg_calc_paper_pane_g6

0x88d9,	// (0x0001e183) bg_calc_paper_pane_g7

0x88ea,	// (0x0001e194) bg_calc_paper_pane_g8

0x0007,

0xf113,	// (0x000249bd) bg_calc_paper_pane_g

0x88fb,	// (0x0001e1a5) calc_bg_paper_pane_g9

0x890c,	// (0x0001e1b6) list_calc_item_pane_ParamLimits

0x890c,	// (0x0001e1b6) list_calc_item_pane

0x108c,	// (0x00016936) list_calc_item_pane_g1

0x7367,	// (0x0001cc11) list_calc_item_pane_t1_ParamLimits

0x7367,	// (0x0001cc11) list_calc_item_pane_t1

0x7379,	// (0x0001cc23) list_calc_item_pane_t2_ParamLimits

0x7379,	// (0x0001cc23) list_calc_item_pane_t2

0x0001,

0xf124,	// (0x000249ce) list_calc_item_pane_t_ParamLimits

0xf124,	// (0x000249ce) list_calc_item_pane_t

0x0f3b,	// (0x000167e5) cell_calc_pane_g1

0x10ab,	// (0x00016955) grid_highlight_pane_cp02

0x8938,	// (0x0001e1e2) bg_calc_display_pane_g1

0x73a9,	// (0x0001cc53) bg_calc_display_pane_g2

0x8941,	// (0x0001e1eb) bg_calc_display_pane_g3

0x0002,

0xf12e,	// (0x000249d8) bg_calc_display_pane_g

0x73b3,	// (0x0001cc5d) cell_qdial_pane_ParamLimits

0x73b3,	// (0x0001cc5d) cell_qdial_pane

0x894a,	// (0x0001e1f4) cell_qdial_pane_g1_ParamLimits

0x894a,	// (0x0001e1f4) cell_qdial_pane_g1

0x8957,	// (0x0001e201) cell_qdial_pane_g2_ParamLimits

0x8957,	// (0x0001e201) cell_qdial_pane_g2

0x10d6,	// (0x00016980) cell_qdial_pane_g3_ParamLimits

0x10d6,	// (0x00016980) cell_qdial_pane_g3

0x0003,

0xf135,	// (0x000249df) cell_qdial_pane_g_ParamLimits

0xf135,	// (0x000249df) cell_qdial_pane_g

0x8975,	// (0x0001e21f) cell_qdial_pane_t1_ParamLimits

0x8975,	// (0x0001e21f) cell_qdial_pane_t1

0x898d,	// (0x0001e237) cell_qdial_pane_t2_ParamLimits

0x898d,	// (0x0001e237) cell_qdial_pane_t2

0x89a0,	// (0x0001e24a) cell_qdial_pane_t3_ParamLimits

0x89a0,	// (0x0001e24a) cell_qdial_pane_t3

0x0002,

0xf13e,	// (0x000249e8) cell_qdial_pane_t_ParamLimits

0xf13e,	// (0x000249e8) cell_qdial_pane_t

0x0cc8,	// (0x00016572) grid_highlight_pane_cp04

0x10e2,	// (0x0001698c) thumbnail_qdial_pane_ParamLimits

0x10e2,	// (0x0001698c) thumbnail_qdial_pane

0x113e,	// (0x000169e8) list_help_pane

0x1147,	// (0x000169f1) scroll_pane_cp02

0x89b3,	// (0x0001e25d) help_list_pane_t1_ParamLimits

0x89b3,	// (0x0001e25d) help_list_pane_t1

0x73c7,	// (0x0001cc71) bg_notes_pane_g2

0x73cf,	// (0x0001cc79) bg_notes_pane_g3

0x73d7,	// (0x0001cc81) notes_bg_pane_g1

0x73df,	// (0x0001cc89) notes_bg_pane_g4

0x73e7,	// (0x0001cc91) notes_bg_pane_g5

0x73ef,	// (0x0001cc99) notes_bg_pane_g6

0x73f7,	// (0x0001cca1) notes_bg_pane_g7

0x73ff,	// (0x0001cca9) notes_bg_pane_g8

0x7407,	// (0x0001ccb1) notes_bg_pane_g9

0x0006,

0xf15c,	// (0x00024a06) notes_bg_pane_g

0x89e9,	// (0x0001e293) list_notes_text_pane_ParamLimits

0x89e9,	// (0x0001e293) list_notes_text_pane

0x11b6,	// (0x00016a60) list_notes_text_pane_g1

0x8a11,	// (0x0001e2bb) list_notes_text_pane_t1

0x8a1f,	// (0x0001e2c9) listscroll_cale_week_pane

0x8a44,	// (0x0001e2ee) bg_cale_heading_pane

0x11d9,	// (0x00016a83) bg_cale_pane_cp01

0x8a64,	// (0x0001e30e) cale_week_corner_pane

0x8a7e,	// (0x0001e328) cale_week_day_heading_pane

0x8a9e,	// (0x0001e348) cale_week_scroll_pane_g1

0x8ab9,	// (0x0001e363) cale_week_scroll_pane_g2

0x8acc,	// (0x0001e376) cale_week_scroll_pane_g3

0x8adf,	// (0x0001e389) cale_week_scroll_pane_g4

0x8af2,	// (0x0001e39c) cale_week_scroll_pane_g5

0x8b05,	// (0x0001e3af) cale_week_scroll_pane_g6

0x8b18,	// (0x0001e3c2) cale_week_scroll_pane_g7

0x8b2d,	// (0x0001e3d7) cale_week_scroll_pane_g8

0x8b42,	// (0x0001e3ec) cale_week_scroll_pane_g9

0x8b55,	// (0x0001e3ff) cale_week_scroll_pane_g10

0x8b68,	// (0x0001e412) cale_week_scroll_pane_g11

0x8b7b,	// (0x0001e425) cale_week_scroll_pane_g12

0x8b92,	// (0x0001e43c) cale_week_scroll_pane_g13

0x8bad,	// (0x0001e457) cale_week_scroll_pane_g14

0x8bc8,	// (0x0001e472) cale_week_scroll_pane_g15

0x000f,

0xf16b,	// (0x00024a15) cale_week_scroll_pane_g

0x8bf8,	// (0x0001e4a2) cale_week_time_pane

0x8c0d,	// (0x0001e4b7) grid_cale_week_pane

0x1208,	// (0x00016ab2) scroll_pane_cp08

0x8c2c,	// (0x0001e4d6) cell_cale_week_pane_ParamLimits

0x8c2c,	// (0x0001e4d6) cell_cale_week_pane

0x8c8e,	// (0x0001e538) cale_week_day_heading_pane_t1

0x8ca9,	// (0x0001e553) cale_week_day_heading_pane_t2

0x8cc4,	// (0x0001e56e) cale_week_day_heading_pane_t3

0x8cdf,	// (0x0001e589) cale_week_day_heading_pane_t4

0x8cfa,	// (0x0001e5a4) cale_week_day_heading_pane_t5

0x8d15,	// (0x0001e5bf) cale_week_day_heading_pane_t6

0x8d30,	// (0x0001e5da) cale_week_day_heading_pane_t7

0x0006,

0xf18c,	// (0x00024a36) cale_week_day_heading_pane_t

0x1225,	// (0x00016acf) bg_cale_side_pane

0x740f,	// (0x0001ccb9) cale_week_time_pane_t1

0x7429,	// (0x0001ccd3) cale_week_time_pane_t2

0x7443,	// (0x0001cced) cale_week_time_pane_t3

0x745d,	// (0x0001cd07) cale_week_time_pane_t4

0x7477,	// (0x0001cd21) cale_week_time_pane_t5

0x7491,	// (0x0001cd3b) cale_week_time_pane_t6

0x74af,	// (0x0001cd59) cale_week_time_pane_t7

0x74d1,	// (0x0001cd7b) cale_week_time_pane_t8

0x0007,

0xf19b,	// (0x00024a45) cale_week_time_pane_t

0x8d4b,	// (0x0001e5f5) cell_cale_week_pane_g2

0x8d6f,	// (0x0001e619) cell_cale_week_pane_g3_ParamLimits

0x8d6f,	// (0x0001e619) cell_cale_week_pane_g3

0x1233,	// (0x00016add) grid_highlight_pane_cp07

0x123b,	// (0x00016ae5) listscroll_gms_pane

0x1245,	// (0x00016aef) grid_gms_pane

0x124e,	// (0x00016af8) listscroll_gms_pane_g1

0x1256,	// (0x00016b00) listscroll_gms_pane_g2

0x0001,

0xf1ac,	// (0x00024a56) listscroll_gms_pane_g

0x8d87,	// (0x0001e631) scroll_pane_cp010

0x8d92,	// (0x0001e63c) cell_gms_pane_ParamLimits

0x8d92,	// (0x0001e63c) cell_gms_pane

0x8da5,	// (0x0001e64f) cell_gms_pane_g1

0x125e,	// (0x00016b08) cell_gms_pane_g2

0x11b6,	// (0x00016a60) cell_gms_pane_g3

0x1266,	// (0x00016b10) cell_gms_pane_g4

0x0003,

0xf1b1,	// (0x00024a5b) cell_gms_pane_g

0x126f,	// (0x00016b19) grid_highlight_pane_cp09

0xacde,	// (0x00020588) phob_pre_status_pane_g1

0xace6,	// (0x00020590) phob_pre_status_pane_g2

0xacee,	// (0x00020598) phob_pre_status_pane_g3

0xacf6,	// (0x000205a0) phob_pre_status_pane_g4

0x0004,

0xf57a,	// (0x00024e24) phob_pre_status_pane_g

0xad06,	// (0x000205b0) phob_pre_status_pane_t1

0xad16,	// (0x000205c0) phob_pre_status_pane_t2

0xad26,	// (0x000205d0) phob_pre_status_pane_t3

0x0002,

0xf585,	// (0x00024e2f) phob_pre_status_pane_t

0x1277,	// (0x00016b21) bg_list_pane_cp05

0x8db5,	// (0x0001e65f) grid_vorec_pane

0x8dbf,	// (0x0001e669) vorec_t1

0x8dcd,	// (0x0001e677) vorec_t2

0x8ddb,	// (0x0001e685) vorec_t3

0x8de9,	// (0x0001e693) vorec_t4

0x871b,	// (0x0001dfc5) vorec_t5

0x8729,	// (0x0001dfd3) vorec_t6

0x0004,

0xf1ba,	// (0x00024a64) vorec_t

0x8737,	// (0x0001dfe1) wait_bar_pane_cp01

0x8e05,	// (0x0001e6af) cell_vorec_pane_ParamLimits

0x8e05,	// (0x0001e6af) cell_vorec_pane

0x74f5,	// (0x0001cd9f) cell_vorec_pane_g1

0x0cc8,	// (0x00016572) grid_highlight_pane_cp05

0x0f90,	// (0x0001683a) cams_zoom_pane

0x0f90,	// (0x0001683a) image_vga_pane

0x0fac,	// (0x00016856) main_camera_pane_g1

0x0fac,	// (0x00016856) main_camera_pane_g2

0x0fac,	// (0x00016856) main_camera_pane_g3

0x0fac,	// (0x00016856) main_camera_pane_g4

0x0fac,	// (0x00016856) main_camera_pane_g5

0x0fac,	// (0x00016856) main_camera_pane_g6

0x0fac,	// (0x00016856) main_camera_pane_g7

0x0007,

0xf1c5,	// (0x00024a6f) main_camera_pane_g

0x1e6d,	// (0x00017717) main_camera_pane_t1

0x1e6d,	// (0x00017717) main_camera_pane_t2

0x0001,

0xf1d6,	// (0x00024a80) main_camera_pane_t

0x8e18,	// (0x0001e6c2) cams_zoom_pane_cp_ParamLimits

0x8e18,	// (0x0001e6c2) cams_zoom_pane_cp

0x8e46,	// (0x0001e6f0) image_cif_pane_ParamLimits

0x8e46,	// (0x0001e6f0) image_cif_pane

0x0838,	// (0x000160e2) image_subqcif_pane

0x8e54,	// (0x0001e6fe) main_video_pane_g1_ParamLimits

0x8e54,	// (0x0001e6fe) main_video_pane_g1

0x8e7c,	// (0x0001e726) main_video_pane_g2_ParamLimits

0x8e7c,	// (0x0001e726) main_video_pane_g2

0x8eaf,	// (0x0001e759) main_video_pane_g3_ParamLimits

0x8eaf,	// (0x0001e759) main_video_pane_g3

0x8eaf,	// (0x0001e759) main_video_pane_g4_ParamLimits

0x8eaf,	// (0x0001e759) main_video_pane_g4

0x8edd,	// (0x0001e787) main_video_pane_g5_ParamLimits

0x8edd,	// (0x0001e787) main_video_pane_g5

0x129d,	// (0x00016b47) main_video_pane_g6_ParamLimits

0x129d,	// (0x00016b47) main_video_pane_g6

0x0006,

0xf1db,	// (0x00024a85) main_video_pane_g_ParamLimits

0xf1db,	// (0x00024a85) main_video_pane_g

0x8ef9,	// (0x0001e7a3) main_video_pane_t1_ParamLimits

0x8ef9,	// (0x0001e7a3) main_video_pane_t1

0x12b7,	// (0x00016b61) cams_zoom_pane_g1

0x12b7,	// (0x00016b61) cams_zoom_pane_g2

0x12b7,	// (0x00016b61) cams_zoom_pane_g3

0x12b7,	// (0x00016b61) cams_zoom_pane_g4

0x0003,

0xf1ea,	// (0x00024a94) cams_zoom_pane_g

0x8f3f,	// (0x0001e7e9) grid_cams_pane

0x8f4d,	// (0x0001e7f7) linegrid_cams_pane

0x8f5b,	// (0x0001e805) cell_cams_pane_ParamLimits

0x8f5b,	// (0x0001e805) cell_cams_pane

0x12c1,	// (0x00016b6b) cams_burst_image_pane

0x12c9,	// (0x00016b73) cell_cams_pane_g1

0x0cc8,	// (0x00016572) grid_highlight_pane_cp03

0x0f3b,	// (0x000167e5) mp_bg_pane_g1

0x0838,	// (0x000160e2) bg_list_pane_cp03

0x0838,	// (0x000160e2) bg_mp_pane

0x0838,	// (0x000160e2) grid_mp_pane

0x12b7,	// (0x00016b61) media_player_g1

0x1820,	// (0x000170ca) media_player_t1

0x1820,	// (0x000170ca) media_player_t2

0x1820,	// (0x000170ca) media_player_t3

0x1820,	// (0x000170ca) media_player_t4

0x1820,	// (0x000170ca) media_player_t5

0x1820,	// (0x000170ca) media_player_t6

0x1820,	// (0x000170ca) media_player_t7

0x0006,

0xf564,	// (0x00024e0e) media_player_t

0x0838,	// (0x000160e2) wait_bar_pane_cp02

0xf549,	// (0x00024df3) main_usb_pane_t

0x1aff,	// (0x000173a9) cell_mp_pane

0x0f3b,	// (0x000167e5) cell_mp_pane_g1

0x0cc8,	// (0x00016572) grid_highlight_pane_cp06

0x12d1,	// (0x00016b7b) grid_skin_colour_pane

0x12d9,	// (0x00016b83) list_highlight_pane_cp03

0x8f6e,	// (0x0001e818) skin_g1

0x12e1,	// (0x00016b8b) skin_t1

0x12f0,	// (0x00016b9a) skin_t2

0x0001,

0xf218,	// (0x00024ac2) skin_t

0x8f78,	// (0x0001e822) cell_skin_colour_pane_ParamLimits

0x8f78,	// (0x0001e822) cell_skin_colour_pane

0x12fe,	// (0x00016ba8) cell_skin_colour_pane_g1

0x8ffc,	// (0x0001e8a6) call_video_g1_ParamLimits

0x8ffc,	// (0x0001e8a6) call_video_g1

0x900c,	// (0x0001e8b6) call_video_g2_ParamLimits

0x900c,	// (0x0001e8b6) call_video_g2

0x0001,

0xf21d,	// (0x00024ac7) call_video_g_ParamLimits

0xf21d,	// (0x00024ac7) call_video_g

0x9066,	// (0x0001e910) call_video_uplink_pane_cp1_ParamLimits

0x9066,	// (0x0001e910) call_video_uplink_pane_cp1

0x1310,	// (0x00016bba) call_video_uplink_pane_cp2

0x9132,	// (0x0001e9dc) video_down_crop_pane_ParamLimits

0x9132,	// (0x0001e9dc) video_down_crop_pane

0x9230,	// (0x0001eada) video_down_pane_ParamLimits

0x9230,	// (0x0001eada) video_down_pane

0x1318,	// (0x00016bc2) video_down_subqcif_pane_ParamLimits

0x1318,	// (0x00016bc2) video_down_subqcif_pane

0x1330,	// (0x00016bda) video_down_subqcif_pane_cp_ParamLimits

0x1330,	// (0x00016bda) video_down_subqcif_pane_cp

0x1356,	// (0x00016c00) im_reading_pane_ParamLimits

0x1356,	// (0x00016c00) im_reading_pane

0x9350,	// (0x0001ebfa) im_writing_pane_ParamLimits

0x9350,	// (0x0001ebfa) im_writing_pane

0x936e,	// (0x0001ec18) im_reading_pane_t1

0x1370,	// (0x00016c1a) list_im_pane

0x1381,	// (0x00016c2b) scroll_pane_cp07

0x93c2,	// (0x0001ec6c) im_writing_pane_t1_ParamLimits

0x93c2,	// (0x0001ec6c) im_writing_pane_t1

0x139a,	// (0x00016c44) im_writing_pane_t2_ParamLimits

0x139a,	// (0x00016c44) im_writing_pane_t2

0x0001,

0xf227,	// (0x00024ad1) im_writing_pane_t_ParamLimits

0xf227,	// (0x00024ad1) im_writing_pane_t

0x0cc8,	// (0x00016572) input_focus_pane_cp04

0x0cc8,	// (0x00016572) input_focus_pane_cp05

0x93d7,	// (0x0001ec81) list_im_single_pane_ParamLimits

0x93d7,	// (0x0001ec81) list_im_single_pane

0x93fb,	// (0x0001eca5) list_single_im_pane_t1

0x1277,	// (0x00016b21) blid_accuracy_pane

0x1277,	// (0x00016b21) blid_compass_pane

0x3156,	// (0x00018a00) main_location_t1

0x3156,	// (0x00018a00) main_location_t2

0x3156,	// (0x00018a00) main_location_t3

0x0002,

0xf573,	// (0x00024e1d) main_location_t

0x0cc8,	// (0x00016572) aid_levels_location

0x0f3b,	// (0x000167e5) blid_accuracy_pane_g1

0x0f3b,	// (0x000167e5) blid_accuracy_pane_g2

0x0001,

0xf27b,	// (0x00024b25) blid_accuracy_pane_g

0x13e2,	// (0x00016c8c) wml_content_pane

0x1420,	// (0x00016cca) wml_button_pane_ParamLimits

0x1420,	// (0x00016cca) wml_button_pane

0x940a,	// (0x0001ecb4) wml_list_single_large_pane_ParamLimits

0x940a,	// (0x0001ecb4) wml_list_single_large_pane

0x9434,	// (0x0001ecde) wml_list_single_medium_pane_ParamLimits

0x9434,	// (0x0001ecde) wml_list_single_medium_pane

0x9465,	// (0x0001ed0f) wml_list_single_small_pane_ParamLimits

0x9465,	// (0x0001ed0f) wml_list_single_small_pane

0x1434,	// (0x00016cde) wml_selection_box_pane_ParamLimits

0x1434,	// (0x00016cde) wml_selection_box_pane

0x1447,	// (0x00016cf1) wml_list_single_pane_t1

0x1456,	// (0x00016d00) wml_list_single_medium_pane_t1

0x1465,	// (0x00016d0f) wml_list_single_large_pane_t1

0x1474,	// (0x00016d1e) input_focus_pane_cp02_ParamLimits

0x1474,	// (0x00016d1e) input_focus_pane_cp02

0x1487,	// (0x00016d31) wml_selection_box_pane_g1

0x1490,	// (0x00016d3a) wml_selection_box_pane_t1_ParamLimits

0x1490,	// (0x00016d3a) wml_selection_box_pane_t1

0x0f23,	// (0x000167cd) bg_wml_button_pane_ParamLimits

0x0f23,	// (0x000167cd) bg_wml_button_pane

0x14a8,	// (0x00016d52) wml_button_pane_g1

0x14b0,	// (0x00016d5a) wml_button_pane_t1

0x14a8,	// (0x00016d52) wml_button_bg_pane_g1

0x14c0,	// (0x00016d6a) wml_button_bg_pane_g2

0x14c8,	// (0x00016d72) wml_button_bg_pane_g3

0x14d0,	// (0x00016d7a) wml_button_bg_pane_g4

0x14d8,	// (0x00016d82) wml_button_bg_pane_g5

0x14e0,	// (0x00016d8a) wml_button_bg_pane_g6

0x14e8,	// (0x00016d92) wml_button_bg_pane_g7

0x14f0,	// (0x00016d9a) wml_button_bg_pane_g8

0x14f8,	// (0x00016da2) wml_button_bg_pane_g9

0x0008,

0xf22c,	// (0x00024ad6) wml_button_bg_pane_g

0x949f,	// (0x0001ed49) bg_list_pane_cp02

0x1500,	// (0x00016daa) mce_header_pane_ParamLimits

0x1500,	// (0x00016daa) mce_header_pane

0x1516,	// (0x00016dc0) mce_icon_pane

0x1516,	// (0x00016dc0) mce_image_pane

0x151f,	// (0x00016dc9) mce_text_pane_ParamLimits

0x151f,	// (0x00016dc9) mce_text_pane

0x94a9,	// (0x0001ed53) scroll_pane_cp03

0x1418,	// (0x00016cc2) scroll_pane_cp04

0x1532,	// (0x00016ddc) scroll_pane_cp05_ParamLimits

0x1532,	// (0x00016ddc) scroll_pane_cp05

0x94b3,	// (0x0001ed5d) mce_header_field_pane_ParamLimits

0x94b3,	// (0x0001ed5d) mce_header_field_pane

0x94d3,	// (0x0001ed7d) mce_header_field_pane_2_ParamLimits

0x94d3,	// (0x0001ed7d) mce_header_field_pane_2

0x94e9,	// (0x0001ed93) mce_header_field_pane_3

0x94f1,	// (0x0001ed9b) list_single_mce_message_pane_ParamLimits

0x94f1,	// (0x0001ed9b) list_single_mce_message_pane

0x951c,	// (0x0001edc6) list_single_mce_smart_pane_ParamLimits

0x951c,	// (0x0001edc6) list_single_mce_smart_pane

0x153e,	// (0x00016de8) input_focus_pane_cp03

0x1547,	// (0x00016df1) list_header_data_pane

0x9552,	// (0x0001edfc) mce_header_field_pane_t1

0x9560,	// (0x0001ee0a) list_single_mce_header_pane_ParamLimits

0x9560,	// (0x0001ee0a) list_single_mce_header_pane

0x154f,	// (0x00016df9) list_single_mce_header_pane_t1

0x155e,	// (0x00016e08) list_single_mce_message_pane_g1

0x1566,	// (0x00016e10) list_single_mce_message_pane_t1

0x95b2,	// (0x0001ee5c) bg_cale_heading_pane_cp01_ParamLimits

0x95b2,	// (0x0001ee5c) bg_cale_heading_pane_cp01

0x1574,	// (0x00016e1e) bg_cale_pane_cp02_ParamLimits

0x1574,	// (0x00016e1e) bg_cale_pane_cp02

0x9600,	// (0x0001eeaa) cale_month_corner_pane

0x961f,	// (0x0001eec9) cale_month_day_heading_pane_ParamLimits

0x961f,	// (0x0001eec9) cale_month_day_heading_pane

0x9685,	// (0x0001ef2f) cale_month_pane_g1_ParamLimits

0x9685,	// (0x0001ef2f) cale_month_pane_g1

0x96c8,	// (0x0001ef72) cale_month_pane_g2_ParamLimits

0x96c8,	// (0x0001ef72) cale_month_pane_g2

0x9700,	// (0x0001efaa) cale_month_pane_g3_ParamLimits

0x9700,	// (0x0001efaa) cale_month_pane_g3

0x974c,	// (0x0001eff6) cale_month_pane_g4_ParamLimits

0x974c,	// (0x0001eff6) cale_month_pane_g4

0x9798,	// (0x0001f042) cale_month_pane_g5_ParamLimits

0x9798,	// (0x0001f042) cale_month_pane_g5

0x97e4,	// (0x0001f08e) cale_month_pane_g6_ParamLimits

0x97e4,	// (0x0001f08e) cale_month_pane_g6

0x9830,	// (0x0001f0da) cale_month_pane_g7_ParamLimits

0x9830,	// (0x0001f0da) cale_month_pane_g7

0x9894,	// (0x0001f13e) cale_month_pane_g8_ParamLimits

0x9894,	// (0x0001f13e) cale_month_pane_g8

0x98f8,	// (0x0001f1a2) cale_month_pane_g9_ParamLimits

0x98f8,	// (0x0001f1a2) cale_month_pane_g9

0x9956,	// (0x0001f200) cale_month_pane_g10_ParamLimits

0x9956,	// (0x0001f200) cale_month_pane_g10

0x99b2,	// (0x0001f25c) cale_month_pane_g11_ParamLimits

0x99b2,	// (0x0001f25c) cale_month_pane_g11

0x9a06,	// (0x0001f2b0) cale_month_pane_g12_ParamLimits

0x9a06,	// (0x0001f2b0) cale_month_pane_g12

0x9a5c,	// (0x0001f306) cale_month_pane_g13_ParamLimits

0x9a5c,	// (0x0001f306) cale_month_pane_g13

0x000c,

0xf23f,	// (0x00024ae9) cale_month_pane_g_ParamLimits

0xf23f,	// (0x00024ae9) cale_month_pane_g

0x9ab2,	// (0x0001f35c) cale_month_week_pane

0x9ad6,	// (0x0001f380) grid_cale_month_pane_ParamLimits

0x9ad6,	// (0x0001f380) grid_cale_month_pane

0x9b2f,	// (0x0001f3d9) cale_month_day_heading_pane_t1

0x9bb5,	// (0x0001f45f) cale_month_day_heading_pane_t2

0x9c2e,	// (0x0001f4d8) cale_month_day_heading_pane_t3

0x9ca7,	// (0x0001f551) cale_month_day_heading_pane_t4

0x9d20,	// (0x0001f5ca) cale_month_day_heading_pane_t5

0x9d99,	// (0x0001f643) cale_month_day_heading_pane_t6

0x9e12,	// (0x0001f6bc) cale_month_day_heading_pane_t7

0x0006,

0xf25a,	// (0x00024b04) cale_month_day_heading_pane_t

0x1225,	// (0x00016acf) bg_cale_side_pane_cp01

0x9ea3,	// (0x0001f74d) cale_month_week_pane_t1

0x9ebc,	// (0x0001f766) cale_month_week_pane_t2

0x9ed5,	// (0x0001f77f) cale_month_week_pane_t3

0x9eee,	// (0x0001f798) cale_month_week_pane_t4

0x9f07,	// (0x0001f7b1) cale_month_week_pane_t5

0x9f28,	// (0x0001f7d2) cale_month_week_pane_t6

0x0005,

0xf269,	// (0x00024b13) cale_month_week_pane_t

0x9f49,	// (0x0001f7f3) cell_cale_month_pane_ParamLimits

0x9f49,	// (0x0001f7f3) cell_cale_month_pane

0x74ff,	// (0x0001cda9) cell_cale_month_pane_g1

0x750b,	// (0x0001cdb5) cell_cale_month_pane_t1_ParamLimits

0x750b,	// (0x0001cdb5) cell_cale_month_pane_t1

0x1233,	// (0x00016add) grid_highlight_pane_cp08

0x0f3b,	// (0x000167e5) main_smil_g1

0xa06b,	// (0x0001f915) smil_status_pane

0x15bf,	// (0x00016e69) smil_text_pane

0x306e,	// (0x00018918) bg_popup_call3_rect_pane_g8

0x3076,	// (0x00018920) bg_popup_call3_rect_pane_g9

0x0008,

0xf507,	// (0x00024db1) bg_popup_call3_rect_pane_g

0x3286,	// (0x00018b30) smil_status_volume_pane_g1

0x15c9,	// (0x00016e73) smil_status_pane_t1

0x77e9,	// (0x0001d093) volume_smil_pane

0x15e0,	// (0x00016e8a) list_smil_text_pane

0xa07e,	// (0x0001f928) scroll_pane_cp011

0xa089,	// (0x0001f933) smil_text_list_pane_t1_ParamLimits

0xa089,	// (0x0001f933) smil_text_list_pane_t1

0x7537,	// (0x0001cde1) aid_volume_smil_ParamLimits

0x7537,	// (0x0001cde1) aid_volume_smil

0x0f3b,	// (0x000167e5) smil_volume_pane_g1

0x0f3b,	// (0x000167e5) smil_volume_pane_g2

0x0001,

0xf27b,	// (0x00024b25) smil_volume_pane_g

0x8a1f,	// (0x0001e2c9) listscroll_cale_day_pane

0x160c,	// (0x00016eb6) bg_cale_pane

0x1624,	// (0x00016ece) list_cale_pane

0x1647,	// (0x00016ef1) scroll_pane_cp09

0x1658,	// (0x00016f02) cale_bg_pane_g1

0x1660,	// (0x00016f0a) cale_bg_pane_g2

0x1668,	// (0x00016f12) cale_bg_pane_g3

0x1670,	// (0x00016f1a) cale_bg_pane_g4

0x1678,	// (0x00016f22) cale_bg_pane_g5

0x1680,	// (0x00016f2a) cale_bg_pane_g6

0x1688,	// (0x00016f32) cale_bg_pane_g7

0x1690,	// (0x00016f3a) cale_bg_pane_g8

0x1698,	// (0x00016f42) cale_bg_pane_g9

0x0008,

0xf280,	// (0x00024b2a) cale_bg_pane_g

0xa101,	// (0x0001f9ab) list_cale_time_pane_ParamLimits

0xa101,	// (0x0001f9ab) list_cale_time_pane

0x16a8,	// (0x00016f52) list_cale_time_pane_g1_ParamLimits

0x16a8,	// (0x00016f52) list_cale_time_pane_g1

0x16b4,	// (0x00016f5e) list_cale_time_pane_g2_ParamLimits

0x16b4,	// (0x00016f5e) list_cale_time_pane_g2

0xa123,	// (0x0001f9cd) list_cale_time_pane_g3_ParamLimits

0xa123,	// (0x0001f9cd) list_cale_time_pane_g3

0xa131,	// (0x0001f9db) list_cale_time_pane_g4_ParamLimits

0xa131,	// (0x0001f9db) list_cale_time_pane_g4

0xa13f,	// (0x0001f9e9) list_cale_time_pane_g5_ParamLimits

0xa13f,	// (0x0001f9e9) list_cale_time_pane_g5

0x0005,

0xf293,	// (0x00024b3d) list_cale_time_pane_g_ParamLimits

0xf293,	// (0x00024b3d) list_cale_time_pane_g

0x16ce,	// (0x00016f78) list_cale_time_pane_t1_ParamLimits

0x16ce,	// (0x00016f78) list_cale_time_pane_t1

0x16f6,	// (0x00016fa0) list_cale_time_pane_t2_ParamLimits

0x16f6,	// (0x00016fa0) list_cale_time_pane_t2

0xa36f,	// (0x0001fc19) aid_blid_cardinal_pane

0xa3b1,	// (0x0001fc5b) compass_pane_t4

0x171e,	// (0x00016fc8) list_cale_time_pane_t4_ParamLimits

0x171e,	// (0x00016fc8) list_cale_time_pane_t4

0xa3bf,	// (0x0001fc69) compass_pane_t5

0xa3cf,	// (0x0001fc79) compass_pane_t6

0xa3dd,	// (0x0001fc87) compass_pane_t7

0x1c44,	// (0x000174ee) navi_pane_cc_t1

0x1e33,	// (0x000176dd) aid_phob_thumbnail_center_pane

0xa77c,	// (0x00020026) main_postcard_pane_g4_ParamLimits

0x0002,

0xf2a0,	// (0x00024b4a) list_cale_time_pane_t_ParamLimits

0xf2a0,	// (0x00024b4a) list_cale_time_pane_t

0x091f,	// (0x000161c9) bg_popup_window_pane_cp02_ParamLimits

0x091f,	// (0x000161c9) bg_popup_window_pane_cp02

0x1746,	// (0x00016ff0) heading_pane_cp01_ParamLimits

0x1746,	// (0x00016ff0) heading_pane_cp01

0x1752,	// (0x00016ffc) loc_req_pane_ParamLimits

0x1752,	// (0x00016ffc) loc_req_pane

0x1762,	// (0x0001700c) loc_type_pane_ParamLimits

0x1762,	// (0x0001700c) loc_type_pane

0x1774,	// (0x0001701e) loc_type_pane_t1_ParamLimits

0x1774,	// (0x0001701e) loc_type_pane_t1

0x1786,	// (0x00017030) loc_type_pane_t2_ParamLimits

0x1786,	// (0x00017030) loc_type_pane_t2

0x1798,	// (0x00017042) loc_type_pane_t3_ParamLimits

0x1798,	// (0x00017042) loc_type_pane_t3

0x0002,

0xf2a7,	// (0x00024b51) loc_type_pane_t_ParamLimits

0xf2a7,	// (0x00024b51) loc_type_pane_t

0x17aa,	// (0x00017054) list_loc_req_pane

0x17b4,	// (0x0001705e) scroll_pane_cp012

0xa14d,	// (0x0001f9f7) list_single_loc_request_popup_menu_pane_ParamLimits

0xa14d,	// (0x0001f9f7) list_single_loc_request_popup_menu_pane

0x17bf,	// (0x00017069) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0x17bf,	// (0x00017069) list_single_loc_request_popup_menu_pane_g1

0x17cb,	// (0x00017075) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0x17cb,	// (0x00017075) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf2ae,	// (0x00024b58) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf2ae,	// (0x00024b58) list_single_loc_request_popup_menu_pane_g

0x17d7,	// (0x00017081) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0x17d7,	// (0x00017081) list_single_loc_request_popup_menu_pane_t1

0xa15f,	// (0x0001fa09) bg_popup_window_pane_cp03_ParamLimits

0xa15f,	// (0x0001fa09) bg_popup_window_pane_cp03

0xa16d,	// (0x0001fa17) heading_loc_req_pane_ParamLimits

0xa16d,	// (0x0001fa17) heading_loc_req_pane

0xa179,	// (0x0001fa23) popup_dyc_status_message_window_g1_ParamLimits

0xa179,	// (0x0001fa23) popup_dyc_status_message_window_g1

0xa185,	// (0x0001fa2f) popup_dyc_status_message_window_t1_ParamLimits

0xa185,	// (0x0001fa2f) popup_dyc_status_message_window_t1

0xa197,	// (0x0001fa41) popup_dyc_status_message_window_t2_ParamLimits

0xa197,	// (0x0001fa41) popup_dyc_status_message_window_t2

0xa1a9,	// (0x0001fa53) popup_dyc_status_message_window_t3_ParamLimits

0xa1a9,	// (0x0001fa53) popup_dyc_status_message_window_t3

0x0002,

0xf2b3,	// (0x00024b5d) popup_dyc_status_message_window_t_ParamLimits

0xf2b3,	// (0x00024b5d) popup_dyc_status_message_window_t

0x0cc8,	// (0x00016572) bg_heading_pane_cp01

0x17f9,	// (0x000170a3) heading_loc_req_pane_g1

0x1801,	// (0x000170ab) heading_loc_req_pane_g2

0x1809,	// (0x000170b3) heading_loc_req_pane_g3

0x0002,

0xf2ba,	// (0x00024b64) heading_loc_req_pane_g

0x1811,	// (0x000170bb) heading_loc_req_pane_t1

0x1830,	// (0x000170da) bg_popup_sub_pane_cp01_ParamLimits

0x1830,	// (0x000170da) bg_popup_sub_pane_cp01

0x183e,	// (0x000170e8) popup_cale_events_window_g1_ParamLimits

0x183e,	// (0x000170e8) popup_cale_events_window_g1

0x185e,	// (0x00017108) popup_cale_events_window_g2_ParamLimits

0x185e,	// (0x00017108) popup_cale_events_window_g2

0x0001,

0xf2dc,	// (0x00024b86) popup_cale_events_window_g_ParamLimits

0xf2dc,	// (0x00024b86) popup_cale_events_window_g

0x187e,	// (0x00017128) popup_cale_events_window_t1_ParamLimits

0x187e,	// (0x00017128) popup_cale_events_window_t1

0x1890,	// (0x0001713a) popup_cale_events_window_t2_ParamLimits

0x1890,	// (0x0001713a) popup_cale_events_window_t2

0x18ce,	// (0x00017178) popup_cale_events_window_t3_ParamLimits

0x18ce,	// (0x00017178) popup_cale_events_window_t3

0x1908,	// (0x000171b2) popup_cale_events_window_t4_ParamLimits

0x1908,	// (0x000171b2) popup_cale_events_window_t4

0x0003,

0xf2e1,	// (0x00024b8b) popup_cale_events_window_t_ParamLimits

0xf2e1,	// (0x00024b8b) popup_cale_events_window_t

0xa1d3,	// (0x0001fa7d) call_type_pane

0x2893,	// (0x0001813d) popup_call_status_window_g1

0xa1df,	// (0x0001fa89) popup_call_status_window_g2

0xa1eb,	// (0x0001fa95) popup_call_status_window_g3

0x0002,

0xf2ea,	// (0x00024b94) popup_call_status_window_g

0x193e,	// (0x000171e8) call_type_pane_g1

0x1947,	// (0x000171f1) call_type_pane_g2

0x0001,

0xf2f1,	// (0x00024b9b) call_type_pane_g

0x0cc8,	// (0x00016572) bg_popup_sub_pane_cp02

0x1950,	// (0x000171fa) listscroll_popup_wml_pane

0x1958,	// (0x00017202) list_wml_pane

0x1962,	// (0x0001720c) scroll_pane_cp013

0x196d,	// (0x00017217) list_single_graphic_popup_wml_pane_ParamLimits

0x196d,	// (0x00017217) list_single_graphic_popup_wml_pane

0x0f3b,	// (0x000167e5) list_single_graphic_popup_wml_pane_g1

0x1981,	// (0x0001722b) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf2f6,	// (0x00024ba0) list_single_graphic_popup_wml_pane_g

0x1989,	// (0x00017233) list_single_graphic_popup_wml_pane_t1

0x1997,	// (0x00017241) aid_call_pane

0x0f1b,	// (0x000167c5) popup_clock_analogue_window_g1

0x0f1b,	// (0x000167c5) popup_clock_analogue_window_g2

0x7559,	// (0x0001ce03) popup_clock_analogue_window_g3

0x7559,	// (0x0001ce03) popup_clock_analogue_window_g4

0x0f3b,	// (0x000167e5) popup_clock_analogue_window_g5

0x0004,

0xf2fb,	// (0x00024ba5) popup_clock_analogue_window_g

0x7561,	// (0x0001ce0b) popup_clock_analogue_window_t1

0x756f,	// (0x0001ce19) clock_digital_number_pane_ParamLimits

0x756f,	// (0x0001ce19) clock_digital_number_pane

0x757b,	// (0x0001ce25) clock_digital_number_pane_cp02_ParamLimits

0x757b,	// (0x0001ce25) clock_digital_number_pane_cp02

0x7587,	// (0x0001ce31) clock_digital_number_pane_cp03_ParamLimits

0x7587,	// (0x0001ce31) clock_digital_number_pane_cp03

0x7593,	// (0x0001ce3d) clock_digital_number_pane_cp04_ParamLimits

0x7593,	// (0x0001ce3d) clock_digital_number_pane_cp04

0x75a3,	// (0x0001ce4d) clock_digital_separator_pane_ParamLimits

0x75a3,	// (0x0001ce4d) clock_digital_separator_pane

0x75af,	// (0x0001ce59) popup_clock_digital_window_t1

0x0f3b,	// (0x000167e5) clock_digital_number_pane_g1

0x0f3b,	// (0x000167e5) clock_digital_number_pane_g2

0x0001,

0xf27b,	// (0x00024b25) clock_digital_number_pane_g

0x0f3b,	// (0x000167e5) clock_digital_separator_pane_g1

0x0f3b,	// (0x000167e5) clock_digital_separator_pane_g2

0x0001,

0xf27b,	// (0x00024b25) clock_digital_separator_pane_g

0x0cc8,	// (0x00016572) bg_popup_window_pane_cp04

0x1a1a,	// (0x000172c4) heading_pane_cp03

0x1277,	// (0x00016b21) listscroll_popup_gms_pane

0x0cc8,	// (0x00016572) grid_large_graphic_popup_pane

0x1a23,	// (0x000172cd) listscroll_popup_gms_pane_g1

0x1a2c,	// (0x000172d6) listscroll_popup_gms_pane_g2

0x0001,

0xf306,	// (0x00024bb0) listscroll_popup_gms_pane_g

0x1a35,	// (0x000172df) scroll_pane_cp014

0x0f90,	// (0x0001683a) cell_large_graphic_popup_pane_ParamLimits

0x0f90,	// (0x0001683a) cell_large_graphic_popup_pane

0x0f9e,	// (0x00016848) cell_large_graphic_popup_pane_g1_ParamLimits

0x0f9e,	// (0x00016848) cell_large_graphic_popup_pane_g1

0x1a3e,	// (0x000172e8) cell_large_graphic_popup_pane_g2_ParamLimits

0x1a3e,	// (0x000172e8) cell_large_graphic_popup_pane_g2

0x1a4c,	// (0x000172f6) cell_large_graphic_popup_pane_g3_ParamLimits

0x1a4c,	// (0x000172f6) cell_large_graphic_popup_pane_g3

0x1a5a,	// (0x00017304) cell_large_graphic_popup_pane_g4_ParamLimits

0x1a5a,	// (0x00017304) cell_large_graphic_popup_pane_g4

0x0003,

0xf30b,	// (0x00024bb5) cell_large_graphic_popup_pane_g_ParamLimits

0xf30b,	// (0x00024bb5) cell_large_graphic_popup_pane_g

0x0cc8,	// (0x00016572) grid_highlight_pane_cp010

0x0f3b,	// (0x000167e5) bg_popup_call_pane_g1

0x1a6b,	// (0x00017315) list_single_graphic_popup_conf_pane_ParamLimits

0x1a6b,	// (0x00017315) list_single_graphic_popup_conf_pane

0x1a7e,	// (0x00017328) list_highlight_pane_cp01

0x1a87,	// (0x00017331) list_single_graphic_popup_conf_pane_g1

0x1a8f,	// (0x00017339) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf314,	// (0x00024bbe) list_single_graphic_popup_conf_pane_g

0x1a97,	// (0x00017341) list_single_graphic_popup_conf_pane_t1

0x1aa5,	// (0x0001734f) linegrid_cams_pane_g1

0xa1f7,	// (0x0001faa1) linegrid_cams_pane_g2

0x11b6,	// (0x00016a60) linegrid_cams_pane_g3

0x1aae,	// (0x00017358) linegrid_cams_pane_g4

0xa200,	// (0x0001faaa) linegrid_cams_pane_g5

0xa209,	// (0x0001fab3) linegrid_cams_pane_g6

0x1266,	// (0x00016b10) linegrid_cams_pane_g7

0x0006,

0xf319,	// (0x00024bc3) linegrid_cams_pane_g

0x1ab7,	// (0x00017361) popup_clock_analogue_window

0x1ab7,	// (0x00017361) popup_clock_digital_window

0x0cc8,	// (0x00016572) popup_phob_thumbnail_window

0x0f3b,	// (0x000167e5) call_video_uplink_pane_g1

0x1ac0,	// (0x0001736a) call_video_uplink_pane_g2

0x0001,

0xf328,	// (0x00024bd2) call_video_uplink_pane_g

0x1ac8,	// (0x00017372) video_uplink_pane

0x1ad0,	// (0x0001737a) mce_image_pane_g1

0xa212,	// (0x0001fabc) mce_image_pane_g2

0xa21c,	// (0x0001fac6) mce_image_pane_g3

0xa224,	// (0x0001face) mce_image_pane_g4

0xa22c,	// (0x0001fad6) mce_image_pane_g5

0x0004,

0xf32d,	// (0x00024bd7) mce_image_pane_g

0x1ada,	// (0x00017384) control_top_pane_stacon_cp01_ParamLimits

0x1ada,	// (0x00017384) control_top_pane_stacon_cp01

0x1aee,	// (0x00017398) uni_indicator_pane_stacon_cp01_ParamLimits

0x1aee,	// (0x00017398) uni_indicator_pane_stacon_cp01

0x1aff,	// (0x000173a9) bg_popup_sub_pane_cp03

0x1b09,	// (0x000173b3) chi_dic_find_pane

0xa234,	// (0x0001fade) listscroll_chi_dic_pane

0x1b11,	// (0x000173bb) main_pane_chidic_g1

0x1b19,	// (0x000173c3) chi_dic_find_pane_t1

0x1b27,	// (0x000173d1) find_chidic_pane

0x1b30,	// (0x000173da) chi_dic_list_pane_ParamLimits

0x1b30,	// (0x000173da) chi_dic_list_pane

0x1b41,	// (0x000173eb) scroll_pane_cp020

0x1b49,	// (0x000173f3) find_chidic_pane_t1

0x0cc8,	// (0x00016572) input_focus_pane_cp06

0xa248,	// (0x0001faf2) list_chi_dic_pane_ParamLimits

0xa248,	// (0x0001faf2) list_chi_dic_pane

0xa262,	// (0x0001fb0c) list_chi_dic_pane_t1_ParamLimits

0xa262,	// (0x0001fb0c) list_chi_dic_pane_t1

0x0cc8,	// (0x00016572) list_highlight_pane_cp020

0x1b58,	// (0x00017402) bg_cale_heading_pane_g1

0xa275,	// (0x0001fb1f) bg_cale_heading_pane_g2

0xa27d,	// (0x0001fb27) bg_cale_heading_pane_g3

0xa285,	// (0x0001fb2f) bg_cale_heading_pane_g4

0xa28f,	// (0x0001fb39) bg_cale_heading_pane_g5

0xa299,	// (0x0001fb43) bg_cale_heading_pane_g6

0xa2a1,	// (0x0001fb4b) bg_cale_heading_pane_g7

0xa2a9,	// (0x0001fb53) bg_cale_heading_pane_g8

0xa2b3,	// (0x0001fb5d) bg_cale_heading_pane_g9

0x0008,

0xf338,	// (0x00024be2) bg_cale_heading_pane_g

0x1b58,	// (0x00017402) bg_cale_side_pane_g1

0xa2bd,	// (0x0001fb67) bg_cale_side_pane_g2

0xa2c7,	// (0x0001fb71) bg_cale_side_pane_g3

0xa2d1,	// (0x0001fb7b) bg_cale_side_pane_g4

0xa2db,	// (0x0001fb85) bg_cale_side_pane_g5

0xa2e5,	// (0x0001fb8f) bg_cale_side_pane_g6

0xa2ef,	// (0x0001fb99) bg_cale_side_pane_g7

0xa2f9,	// (0x0001fba3) bg_cale_side_pane_g8

0xa301,	// (0x0001fbab) bg_cale_side_pane_g9

0x0008,

0xf34b,	// (0x00024bf5) bg_cale_side_pane_g

0xa309,	// (0x0001fbb3) popup_call_status_window_ParamLimits

0xa309,	// (0x0001fbb3) popup_call_status_window

0x1b60,	// (0x0001740a) stacon_top_pane

0x1b68,	// (0x00017412) status_pane_ParamLimits

0x1b68,	// (0x00017412) status_pane

0x1b7d,	// (0x00017427) status_small_pane

0x1b85,	// (0x0001742f) control_pane

0x0cc8,	// (0x00016572) stacon_bottom_pane

0x1b8d,	// (0x00017437) list_single_mce_smart_pane_t1_ParamLimits

0x1b8d,	// (0x00017437) list_single_mce_smart_pane_t1

0x1ba0,	// (0x0001744a) list_single_mce_smart_pane_t2_ParamLimits

0x1ba0,	// (0x0001744a) list_single_mce_smart_pane_t2

0x0001,

0xf35e,	// (0x00024c08) list_single_mce_smart_pane_t_ParamLimits

0xf35e,	// (0x00024c08) list_single_mce_smart_pane_t

0xa315,	// (0x0001fbbf) compass_pane

0xa321,	// (0x0001fbcb) main_location2_pane_t1

0xa335,	// (0x0001fbdf) main_location2_pane_t2

0xa349,	// (0x0001fbf3) main_location2_pane_t3

0x0003,

0xf363,	// (0x00024c0d) main_location2_pane_t

0x1bbf,	// (0x00017469) compass_pane_g1_ParamLimits

0x1bbf,	// (0x00017469) compass_pane_g1

0xa393,	// (0x0001fc3d) compass_pane_t1

0xa3a2,	// (0x0001fc4c) compass_pane_t2

0x0005,

0xf36c,	// (0x00024c16) compass_pane_t

0xa3ed,	// (0x0001fc97) text_secondary_cp61

0x1c3b,	// (0x000174e5) navi_pane_cams_g5

0x1cb7,	// (0x00017561) navi_pane_im_t1

0x1cc5,	// (0x0001756f) navi_pane_mp_g1_ParamLimits

0x1cc5,	// (0x0001756f) navi_pane_mp_g1

0x1cd9,	// (0x00017583) navi_pane_mp_g2_ParamLimits

0x1cd9,	// (0x00017583) navi_pane_mp_g2

0x1ce5,	// (0x0001758f) navi_pane_mp_g3_ParamLimits

0x1ce5,	// (0x0001758f) navi_pane_mp_g3

0x0002,

0xf380,	// (0x00024c2a) navi_pane_mp_g_ParamLimits

0xf380,	// (0x00024c2a) navi_pane_mp_g

0x1cf1,	// (0x0001759b) navi_pane_mp_t1

0x1cff,	// (0x000175a9) navi_pane_mp_t2

0x0002,

0xf387,	// (0x00024c31) navi_pane_mp_t

0x1d6a,	// (0x00017614) navi_pane_vt_g1

0x1cf1,	// (0x0001759b) navi_pane_vt_t1

0x1d72,	// (0x0001761c) navi_slider_pane

0x1277,	// (0x00016b21) zooming_pane

0x1d82,	// (0x0001762c) navi_slider_pane_g1

0x75cc,	// (0x0001ce76) navi_slider_pane_g2

0x0006,

0xf38e,	// (0x00024c38) navi_slider_pane_g

0x1db8,	// (0x00017662) aid_levels_zoom

0x1dc0,	// (0x0001766a) zooming_pane_g1

0x1dc8,	// (0x00017672) zooming_pane_g2

0x1dc8,	// (0x00017672) zooming_pane_g3

0x0002,

0xf39d,	// (0x00024c47) zooming_pane_g

0x1dd0,	// (0x0001767a) level_10_zoom

0x1dd9,	// (0x00017683) level_11_zoom

0x1de2,	// (0x0001768c) level_1_zoom

0x1deb,	// (0x00017695) level_2_zoom

0x1df4,	// (0x0001769e) level_3_zoom

0x1dfd,	// (0x000176a7) level_4_zoom

0x1e06,	// (0x000176b0) level_5_zoom

0x1e0f,	// (0x000176b9) level_6_zoom

0x1e18,	// (0x000176c2) level_7_zoom

0x1e21,	// (0x000176cb) level_8_zoom

0x1e2a,	// (0x000176d4) level_9_zoom

0x1e3b,	// (0x000176e5) popup_phob_thumbnail_window_g1

0x1e43,	// (0x000176ed) popup_phob_thumbnail_window_g2

0x0001,

0xf3a4,	// (0x00024c4e) popup_phob_thumbnail_window_g

0xad36,	// (0x000205e0) level_1_location

0xad3e,	// (0x000205e8) level_2_location

0xad46,	// (0x000205f0) level_3_location

0xad50,	// (0x000205fa) level_4_location

0x1277,	// (0x00016b21) level_5_location

0xa428,	// (0x0001fcd2) mce_icon_pane_g1

0xa430,	// (0x0001fcda) mce_icon_pane_g2

0x0001,

0xf3a9,	// (0x00024c53) mce_icon_pane_g

0xa438,	// (0x0001fce2) main_mup_pane_g1_ParamLimits

0xa438,	// (0x0001fce2) main_mup_pane_g1

0x0fba,	// (0x00016864) main_mup_pane_g2_ParamLimits

0x0fba,	// (0x00016864) main_mup_pane_g2

0x0fba,	// (0x00016864) main_mup_pane_g3_ParamLimits

0x0fba,	// (0x00016864) main_mup_pane_g3

0x0fba,	// (0x00016864) main_mup_pane_g4_ParamLimits

0x0fba,	// (0x00016864) main_mup_pane_g4

0x0fba,	// (0x00016864) main_mup_pane_g5_ParamLimits

0x0fba,	// (0x00016864) main_mup_pane_g5

0x0fba,	// (0x00016864) main_mup_pane_g6_ParamLimits

0x0fba,	// (0x00016864) main_mup_pane_g6

0x0fba,	// (0x00016864) main_mup_pane_g7_ParamLimits

0x0fba,	// (0x00016864) main_mup_pane_g7

0x0fba,	// (0x00016864) main_mup_pane_g8_ParamLimits

0x0fba,	// (0x00016864) main_mup_pane_g8

0x0fba,	// (0x00016864) main_mup_pane_g9_ParamLimits

0x0fba,	// (0x00016864) main_mup_pane_g9

0x0fba,	// (0x00016864) main_mup_pane_g10_ParamLimits

0x0fba,	// (0x00016864) main_mup_pane_g10

0x0fba,	// (0x00016864) main_mup_pane_g11_ParamLimits

0x0fba,	// (0x00016864) main_mup_pane_g11

0x0fac,	// (0x00016856) main_mup_pane_g12_ParamLimits

0x0fac,	// (0x00016856) main_mup_pane_g12

0x0fba,	// (0x00016864) main_mup_pane_g13_ParamLimits

0x0fba,	// (0x00016864) main_mup_pane_g13

0x000c,

0xf3ae,	// (0x00024c58) main_mup_pane_g_ParamLimits

0xf3ae,	// (0x00024c58) main_mup_pane_g

0x0fc8,	// (0x00016872) main_mup_pane_t1_ParamLimits

0x0fc8,	// (0x00016872) main_mup_pane_t1

0x0fc8,	// (0x00016872) main_mup_pane_t2_ParamLimits

0x0fc8,	// (0x00016872) main_mup_pane_t2

0x0fc8,	// (0x00016872) main_mup_pane_t3_ParamLimits

0x0fc8,	// (0x00016872) main_mup_pane_t3

0x1e6d,	// (0x00017717) main_mup_pane_t4_ParamLimits

0x1e6d,	// (0x00017717) main_mup_pane_t4

0x1e6d,	// (0x00017717) main_mup_pane_t5_ParamLimits

0x1e6d,	// (0x00017717) main_mup_pane_t5

0x1289,	// (0x00016b33) main_mup_pane_t6_ParamLimits

0x1289,	// (0x00016b33) main_mup_pane_t6

0x0005,

0xf3c9,	// (0x00024c73) main_mup_pane_t_ParamLimits

0xf3c9,	// (0x00024c73) main_mup_pane_t

0x08a7,	// (0x00016151) mup_progress_pane_ParamLimits

0x08a7,	// (0x00016151) mup_progress_pane

0x3311,	// (0x00018bbb) mup_visualizer_pane_ParamLimits

0x3311,	// (0x00018bbb) mup_visualizer_pane

0x3311,	// (0x00018bbb) mup_volume_pane_ParamLimits

0x3311,	// (0x00018bbb) mup_volume_pane

0x0fac,	// (0x00016856) mup_visualizer_pane_g1_ParamLimits

0x0fac,	// (0x00016856) mup_visualizer_pane_g1

0x1e8f,	// (0x00017739) mup_visualizer_pane_g2_ParamLimits

0x1e8f,	// (0x00017739) mup_visualizer_pane_g2

0x0f9e,	// (0x00016848) mup_visualizer_pane_g3_ParamLimits

0x0f9e,	// (0x00016848) mup_visualizer_pane_g3

0x0002,

0xf3d6,	// (0x00024c80) mup_visualizer_pane_g_ParamLimits

0xf3d6,	// (0x00024c80) mup_visualizer_pane_g

0x12b7,	// (0x00016b61) mup_volume_pane_g1

0x12b7,	// (0x00016b61) mup_volume_pane_g2

0x0001,

0xf3dd,	// (0x00024c87) mup_volume_pane_g

0x12b7,	// (0x00016b61) mup_progress_pane_g1

0x12b7,	// (0x00016b61) mup_progress_pane_g2

0x12b7,	// (0x00016b61) mup_progress_pane_g3

0x0002,

0xf3e2,	// (0x00024c8c) mup_progress_pane_g

0x0cc8,	// (0x00016572) bg_popup_window_pane_cp05

0x1e9d,	// (0x00017747) heading_pane_cp02_ParamLimits

0x1e9d,	// (0x00017747) heading_pane_cp02

0x1eb7,	// (0x00017761) list_popup_blid_pane

0x1ebf,	// (0x00017769) list_blid_sat_info_pane_ParamLimits

0x1ebf,	// (0x00017769) list_blid_sat_info_pane

0x1ed2,	// (0x0001777c) list_blid_sat_info_pane_g1

0x1eda,	// (0x00017784) list_blid_sat_info_pane_t1

0xa535,	// (0x0001fddf) mup_equalizer_pane_ParamLimits

0xa535,	// (0x0001fddf) mup_equalizer_pane

0xa556,	// (0x0001fe00) mup_equalizer_pane_cp1_ParamLimits

0xa556,	// (0x0001fe00) mup_equalizer_pane_cp1

0xa577,	// (0x0001fe21) mup_equalizer_pane_cp2_ParamLimits

0xa577,	// (0x0001fe21) mup_equalizer_pane_cp2

0xa598,	// (0x0001fe42) mup_equalizer_pane_cp3_ParamLimits

0xa598,	// (0x0001fe42) mup_equalizer_pane_cp3

0xa5b9,	// (0x0001fe63) mup_equalizer_pane_cp4_ParamLimits

0xa5b9,	// (0x0001fe63) mup_equalizer_pane_cp4

0xa5da,	// (0x0001fe84) mup_equalizer_pane_cp5

0xa5f0,	// (0x0001fe9a) mup_equalizer_pane_cp6

0xa608,	// (0x0001feb2) mup_equalizer_pane_cp7

0x30ee,	// (0x00018998) bg_popup_call_poc_act_pane_g9

0x30f6,	// (0x000189a0) bg_popup_call_poc_act_pane_g10

0x30fe,	// (0x000189a8) bg_popup_call_poc_act_pane_g11

0x000a,

0x0f23,	// (0x000167cd) mup_scale_pane

0x0f3b,	// (0x000167e5) mup_scale_pane_g1

0x1ee8,	// (0x00017792) mup_scale_pane_g2

0x0006,

0xf3fe,	// (0x00024ca8) mup_scale_pane_g

0x1f0c,	// (0x000177b6) msg_data_pane

0x1f14,	// (0x000177be) scroll_pane_cp017

0xa632,	// (0x0001fedc) bg_list_pane_cp04_ParamLimits

0xa632,	// (0x0001fedc) bg_list_pane_cp04

0x1f24,	// (0x000177ce) msg_data_pane_g1

0xa64e,	// (0x0001fef8) msg_data_pane_g2

0xa658,	// (0x0001ff02) msg_data_pane_g3

0xa660,	// (0x0001ff0a) msg_data_pane_g4

0xa668,	// (0x0001ff12) msg_data_pane_g5

0xa670,	// (0x0001ff1a) msg_data_pane_g6

0xa678,	// (0x0001ff22) msg_data_pane_g7

0x0006,

0xf40d,	// (0x00024cb7) msg_data_pane_g

0xa680,	// (0x0001ff2a) msg_text_pane_ParamLimits

0xa680,	// (0x0001ff2a) msg_text_pane

0xa6c6,	// (0x0001ff70) qrid_highlight_pane_cp011_ParamLimits

0xa6c6,	// (0x0001ff70) qrid_highlight_pane_cp011

0x0cc8,	// (0x00016572) msg_body_pane

0x0cc8,	// (0x00016572) msg_header_pane

0x1f35,	// (0x000177df) input_focus_pane_cp07

0x1f4a,	// (0x000177f4) msg_header_pane_t1_ParamLimits

0x1f4a,	// (0x000177f4) msg_header_pane_t1

0x1f60,	// (0x0001780a) msg_header_pane_t2_ParamLimits

0x1f60,	// (0x0001780a) msg_header_pane_t2

0x0001,

0xf421,	// (0x00024ccb) msg_header_pane_t_ParamLimits

0xf421,	// (0x00024ccb) msg_header_pane_t

0x1f77,	// (0x00017821) msg_body_pane_g1

0x1f7f,	// (0x00017829) msg_body_pane_t1_ParamLimits

0x1f7f,	// (0x00017829) msg_body_pane_t1

0x1fb0,	// (0x0001785a) msg_body_pane_t2_ParamLimits

0x1fb0,	// (0x0001785a) msg_body_pane_t2

0x1fc2,	// (0x0001786c) msg_body_pane_t3_ParamLimits

0x1fc2,	// (0x0001786c) msg_body_pane_t3

0x0002,

0xf426,	// (0x00024cd0) msg_body_pane_t_ParamLimits

0xf426,	// (0x00024cd0) msg_body_pane_t

0x760e,	// (0x0001ceb8) main_viewer_pane_g1_ParamLimits

0x760e,	// (0x0001ceb8) main_viewer_pane_g1

0x761a,	// (0x0001cec4) main_viewer_pane_g2_ParamLimits

0x761a,	// (0x0001cec4) main_viewer_pane_g2

0xa70e,	// (0x0001ffb8) main_viewer_pane_g3_ParamLimits

0xa70e,	// (0x0001ffb8) main_viewer_pane_g3

0xa71f,	// (0x0001ffc9) main_viewer_pane_g4_ParamLimits

0xa71f,	// (0x0001ffc9) main_viewer_pane_g4

0x7626,	// (0x0001ced0) main_viewer_pane_g5_ParamLimits

0x7626,	// (0x0001ced0) main_viewer_pane_g5

0x7626,	// (0x0001ced0) main_viewer_pane_g7_ParamLimits

0x7626,	// (0x0001ced0) main_viewer_pane_g7

0x17bf,	// (0x00017069) main_viewer_pane_g8_ParamLimits

0x17bf,	// (0x00017069) main_viewer_pane_g8

0x0007,

0xf436,	// (0x00024ce0) main_viewer_pane_g_ParamLimits

0xf436,	// (0x00024ce0) main_viewer_pane_g

0x2016,	// (0x000178c0) viewer_content_pane_ParamLimits

0x2016,	// (0x000178c0) viewer_content_pane

0xa750,	// (0x0001fffa) main_postcard_pane_g1_ParamLimits

0xa750,	// (0x0001fffa) main_postcard_pane_g1

0xa75e,	// (0x00020008) main_postcard_pane_g2_ParamLimits

0xa75e,	// (0x00020008) main_postcard_pane_g2

0xa76c,	// (0x00020016) main_postcard_pane_g3_ParamLimits

0xa76c,	// (0x00020016) main_postcard_pane_g3

0x0005,

0xf447,	// (0x00024cf1) main_postcard_pane_g_ParamLimits

0xf447,	// (0x00024cf1) main_postcard_pane_g

0xa77c,	// (0x00020026) main_postcard_pane_g4

0x3273,	// (0x00018b1d) smil_status_volume_pane_g2

0xa7a8,	// (0x00020052) postcard_pane_ParamLimits

0xa7a8,	// (0x00020052) postcard_pane

0x2893,	// (0x0001813d) postcard_pane_g1_ParamLimits

0x2893,	// (0x0001813d) postcard_pane_g1

0xa7da,	// (0x00020084) postcard_pane_g2_ParamLimits

0xa7da,	// (0x00020084) postcard_pane_g2

0xa7e6,	// (0x00020090) postcard_pane_g3_ParamLimits

0xa7e6,	// (0x00020090) postcard_pane_g3

0x2032,	// (0x000178dc) postcard_pane_g4_ParamLimits

0x2032,	// (0x000178dc) postcard_pane_g4

0xa7f2,	// (0x0002009c) postcard_pane_g5_ParamLimits

0xa7f2,	// (0x0002009c) postcard_pane_g5

0xa7fe,	// (0x000200a8) postcard_pane_g6_ParamLimits

0xa7fe,	// (0x000200a8) postcard_pane_g6

0x2024,	// (0x000178ce) postcard_pane_g7_ParamLimits

0x2024,	// (0x000178ce) postcard_pane_g7

0x0006,

0xf454,	// (0x00024cfe) postcard_pane_g_ParamLimits

0xf454,	// (0x00024cfe) postcard_pane_g

0xa80a,	// (0x000200b4) main_mp2_pane_g1_ParamLimits

0xa80a,	// (0x000200b4) main_mp2_pane_g1

0xa816,	// (0x000200c0) main_mp2_pane_g2_ParamLimits

0xa816,	// (0x000200c0) main_mp2_pane_g2

0xa822,	// (0x000200cc) main_mp2_pane_g3_ParamLimits

0xa822,	// (0x000200cc) main_mp2_pane_g3

0x0002,

0xf463,	// (0x00024d0d) main_mp2_pane_g_ParamLimits

0xf463,	// (0x00024d0d) main_mp2_pane_g

0xa82e,	// (0x000200d8) main_mp2_pane_t1_ParamLimits

0xa82e,	// (0x000200d8) main_mp2_pane_t1

0xa845,	// (0x000200ef) main_mp2_pane_t2_ParamLimits

0xa845,	// (0x000200ef) main_mp2_pane_t2

0xa859,	// (0x00020103) main_mp2_pane_t3_ParamLimits

0xa859,	// (0x00020103) main_mp2_pane_t3

0x0002,

0xf46a,	// (0x00024d14) main_mp2_pane_t_ParamLimits

0xf46a,	// (0x00024d14) main_mp2_pane_t

0x2040,	// (0x000178ea) pec_content_pane_ParamLimits

0x2040,	// (0x000178ea) pec_content_pane

0x1418,	// (0x00016cc2) scroll_pane_cp015

0x2052,	// (0x000178fc) pec_attribute_pane_ParamLimits

0x2052,	// (0x000178fc) pec_attribute_pane

0xa86b,	// (0x00020115) pec_content_pane_g1_ParamLimits

0xa86b,	// (0x00020115) pec_content_pane_g1

0x2062,	// (0x0001790c) pec_content_pane_t1_ParamLimits

0x2062,	// (0x0001790c) pec_content_pane_t1

0x2074,	// (0x0001791e) pec_content_pane_t2_ParamLimits

0x2074,	// (0x0001791e) pec_content_pane_t2

0x0001,

0xf471,	// (0x00024d1b) pec_content_pane_t_ParamLimits

0xf471,	// (0x00024d1b) pec_content_pane_t

0xa877,	// (0x00020121) list_single_graphic_pane_cp01_ParamLimits

0xa877,	// (0x00020121) list_single_graphic_pane_cp01

0x0f23,	// (0x000167cd) bg_popup_sub_pane_cp04

0x2086,	// (0x00017930) popup_mup_playback_window_g1

0x2092,	// (0x0001793c) popup_mup_playback_window_t1

0x20a7,	// (0x00017951) popup_mup_playback_window_t2

0x0001,

0xf476,	// (0x00024d20) popup_mup_playback_window_t

0x20de,	// (0x00017988) main_image_pane_g1_ParamLimits

0x20de,	// (0x00017988) main_image_pane_g1

0x2121,	// (0x000179cb) scroll_pane_cp018_ParamLimits

0x2121,	// (0x000179cb) scroll_pane_cp018

0x2139,	// (0x000179e3) scroll_pane_cp016_ParamLimits

0x2139,	// (0x000179e3) scroll_pane_cp016

0xa910,	// (0x000201ba) smil2_image_pane_ParamLimits

0xa910,	// (0x000201ba) smil2_image_pane

0xa940,	// (0x000201ea) smil2_root_pane_ParamLimits

0xa940,	// (0x000201ea) smil2_root_pane

0xa96c,	// (0x00020216) smil2_text_pane_ParamLimits

0xa96c,	// (0x00020216) smil2_text_pane

0x0cc8,	// (0x00016572) bg_list_pane_cp06

0x2175,	// (0x00017a1f) grid_radio_pane

0x0cc8,	// (0x00016572) bg_popup_window_pane_cp06

0x217d,	// (0x00017a27) main_fmradio_pane_t1

0x3106,	// (0x000189b0) heading_pane_cp04

0x218b,	// (0x00017a35) main_fmradio_pane_t2

0x310e,	// (0x000189b8) popup_cale_lunar_info_window_g1

0x2199,	// (0x00017a43) main_fmradio_pane_t3

0x3116,	// (0x000189c0) popup_cale_lunar_info_window_g2

0x21a7,	// (0x00017a51) main_fmradio_pane_t4

0x0001,

0x21b5,	// (0x00017a5f) main_fmradio_pane_t5

0x0004,

0xf556,	// (0x00024e00) popup_cale_lunar_info_window_g

0xf48b,	// (0x00024d35) main_fmradio_pane_t

0x21c3,	// (0x00017a6d) wait_bar_pane_cp03

0x21cb,	// (0x00017a75) cell_fmradio_pane_ParamLimits

0x21cb,	// (0x00017a75) cell_fmradio_pane

0x2024,	// (0x000178ce) cell_fmradio_pane_g1_ParamLimits

0x2024,	// (0x000178ce) cell_fmradio_pane_g1

0x0cc8,	// (0x00016572) grid_highlight_pane_cp011

0x21de,	// (0x00017a88) poc_content_pane_ParamLimits

0x21de,	// (0x00017a88) poc_content_pane

0x21f0,	// (0x00017a9a) scroll_pane_cp019

0xa9ac,	// (0x00020256) popup_call_poc_act_window_ParamLimits

0xa9ac,	// (0x00020256) popup_call_poc_act_window

0xa9b9,	// (0x00020263) popup_call_poc_inact_window_ParamLimits

0xa9b9,	// (0x00020263) popup_call_poc_inact_window

0xf52d,	// (0x00024dd7) bg_popup_call_poc_act_pane_g

0x307e,	// (0x00018928) bg_popup_call_poc_inact_pane_g1

0x3086,	// (0x00018930) bg_popup_call_poc_inact_pane_g2

0x21f8,	// (0x00017aa2) popup_call_poc_act_window_g2

0x308e,	// (0x00018938) bg_popup_call_poc_inact_pane_g3

0x3096,	// (0x00018940) bg_popup_call_poc_inact_pane_g4

0x309e,	// (0x00018948) bg_popup_call_poc_inact_pane_g5

0x2200,	// (0x00017aaa) popup_call_poc_act_window_t1_ParamLimits

0x2200,	// (0x00017aaa) popup_call_poc_act_window_t1

0x2228,	// (0x00017ad2) popup_call_poc_act_window_t2_ParamLimits

0x2228,	// (0x00017ad2) popup_call_poc_act_window_t2

0x2250,	// (0x00017afa) popup_call_poc_act_window_t3_ParamLimits

0x2250,	// (0x00017afa) popup_call_poc_act_window_t3

0x2278,	// (0x00017b22) popup_call_poc_act_window_t4_ParamLimits

0x2278,	// (0x00017b22) popup_call_poc_act_window_t4

0x0003,

0xf496,	// (0x00024d40) popup_call_poc_act_window_t_ParamLimits

0xf496,	// (0x00024d40) popup_call_poc_act_window_t

0x30a6,	// (0x00018950) bg_popup_call_poc_inact_pane_g6

0x30ae,	// (0x00018958) bg_popup_call_poc_inact_pane_g7

0x30b6,	// (0x00018960) bg_popup_call_poc_inact_pane_g8

0x228a,	// (0x00017b34) popup_call_poc_inact_window_g2

0x30be,	// (0x00018968) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf51a,	// (0x00024dc4) bg_popup_call_poc_inact_pane_g

0x2292,	// (0x00017b3c) popup_call_poc_inact_window_t1_ParamLimits

0x2292,	// (0x00017b3c) popup_call_poc_inact_window_t1

0x22a7,	// (0x00017b51) popup_call_poc_inact_window_t2_ParamLimits

0x22a7,	// (0x00017b51) popup_call_poc_inact_window_t2

0x22bc,	// (0x00017b66) popup_call_poc_inact_window_t3_ParamLimits

0x22bc,	// (0x00017b66) popup_call_poc_inact_window_t3

0x0002,

0xf49f,	// (0x00024d49) popup_call_poc_inact_window_t_ParamLimits

0xf49f,	// (0x00024d49) popup_call_poc_inact_window_t

0x31fe,	// (0x00018aa8) context_pane_ParamLimits

0xaeb6,	// (0x00020760) signal_pane_ParamLimits

0x1277,	// (0x00016b21) main_call2_pane

0x778d,	// (0x0001d037) popup_phob_thumbnail2_window_ParamLimits

0x778d,	// (0x0001d037) popup_phob_thumbnail2_window

0x75de,	// (0x0001ce88) aid_hotspot_pointer_arrow_pane

0x75e6,	// (0x0001ce90) aid_hotspot_pointer_hand_pane

0xacfe,	// (0x000205a8) phob_pre_status_pane_g5

0x0f90,	// (0x0001683a) cams_zoom_pane_ParamLimits

0x0f90,	// (0x0001683a) image_vga_pane_ParamLimits

0x0fac,	// (0x00016856) main_camera_pane_g1_ParamLimits

0x0fac,	// (0x00016856) main_camera_pane_g2_ParamLimits

0x0fac,	// (0x00016856) main_camera_pane_g3_ParamLimits

0x0fac,	// (0x00016856) main_camera_pane_g4_ParamLimits

0x0fac,	// (0x00016856) main_camera_pane_g5_ParamLimits

0x0fac,	// (0x00016856) main_camera_pane_g6_ParamLimits

0x0fac,	// (0x00016856) main_camera_pane_g7_ParamLimits

0xf1c5,	// (0x00024a6f) main_camera_pane_g_ParamLimits

0x1e6d,	// (0x00017717) main_camera_pane_t1_ParamLimits

0x1e6d,	// (0x00017717) main_camera_pane_t2_ParamLimits

0xf1d6,	// (0x00024a80) main_camera_pane_t_ParamLimits

0x0f23,	// (0x000167cd) bg_popup_preview_window_pane_cp01_ParamLimits

0x0f23,	// (0x000167cd) bg_popup_preview_window_pane_cp01

0x22d1,	// (0x00017b7b) popup_phob_thumbnail2_window_g1_ParamLimits

0x22d1,	// (0x00017b7b) popup_phob_thumbnail2_window_g1

0x0cc8,	// (0x00016572) call2_cli_visual_pane

0xa9d5,	// (0x0002027f) popup_call2_audio_conf_window_ParamLimits

0xa9d5,	// (0x0002027f) popup_call2_audio_conf_window

0xa9ea,	// (0x00020294) popup_call2_audio_first_window_ParamLimits

0xa9ea,	// (0x00020294) popup_call2_audio_first_window

0xaa88,	// (0x00020332) popup_call2_audio_in_window_ParamLimits

0xaa88,	// (0x00020332) popup_call2_audio_in_window

0xaaca,	// (0x00020374) popup_call2_audio_out_window_ParamLimits

0xaaca,	// (0x00020374) popup_call2_audio_out_window

0xab2c,	// (0x000203d6) popup_call2_audio_second_window_ParamLimits

0xab2c,	// (0x000203d6) popup_call2_audio_second_window

0xab8a,	// (0x00020434) popup_call2_audio_wait_window_ParamLimits

0xab8a,	// (0x00020434) popup_call2_audio_wait_window

0x0cc8,	// (0x00016572) bg_popup_call2_act_pane_cp03

0x0f05,	// (0x000167af) list_conf_pane_cp

0x22dd,	// (0x00017b87) popup_call2_audio_conf_window_t1

0x1a6b,	// (0x00017315) list_single_graphic_popup_conf2_pane_ParamLimits

0x1a6b,	// (0x00017315) list_single_graphic_popup_conf2_pane

0x1a7e,	// (0x00017328) list_highlight_pane_cp04

0x22eb,	// (0x00017b95) list_single_graphic_popup_conf2_pane_g1

0x1a8f,	// (0x00017339) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf4a6,	// (0x00024d50) list_single_graphic_popup_conf2_pane_g

0x22f5,	// (0x00017b9f) list_single_graphic_popup_conf2_pane_t1

0x2303,	// (0x00017bad) bg_popup_call2_act_pane_cp01_ParamLimits

0x2303,	// (0x00017bad) bg_popup_call2_act_pane_cp01

0x238d,	// (0x00017c37) call_type_pane_cp05_ParamLimits

0x238d,	// (0x00017c37) call_type_pane_cp05

0x23e1,	// (0x00017c8b) popup_call2_audio_second_window_g1_ParamLimits

0x23e1,	// (0x00017c8b) popup_call2_audio_second_window_g1

0x2435,	// (0x00017cdf) popup_call2_audio_second_window_g2_ParamLimits

0x2435,	// (0x00017cdf) popup_call2_audio_second_window_g2

0x0002,

0xf4ab,	// (0x00024d55) popup_call2_audio_second_window_g_ParamLimits

0xf4ab,	// (0x00024d55) popup_call2_audio_second_window_g

0x249a,	// (0x00017d44) popup_call2_audio_second_window_t1_ParamLimits

0x249a,	// (0x00017d44) popup_call2_audio_second_window_t1

0x2555,	// (0x00017dff) popup_call2_audio_second_window_t2_ParamLimits

0x2555,	// (0x00017dff) popup_call2_audio_second_window_t2

0x25a8,	// (0x00017e52) popup_call2_audio_second_window_t3_ParamLimits

0x25a8,	// (0x00017e52) popup_call2_audio_second_window_t3

0x0003,

0xf4b2,	// (0x00024d5c) popup_call2_audio_second_window_t_ParamLimits

0xf4b2,	// (0x00024d5c) popup_call2_audio_second_window_t

0x0cc8,	// (0x00016572) bg_popup_call2_in_pane_cp02

0x0cd2,	// (0x0001657c) call_type_pane_cp04

0xabc9,	// (0x00020473) popup_call2_audio_wait_window_g1

0xabd1,	// (0x0002047b) popup_call2_audio_wait_window_g2

0x0001,

0xf4bb,	// (0x00024d65) popup_call2_audio_wait_window_g

0x0cea,	// (0x00016594) popup_call2_audio_wait_window_t3

0x269b,	// (0x00017f45) bg_popup_call2_act_pane_ParamLimits

0x269b,	// (0x00017f45) bg_popup_call2_act_pane

0x275b,	// (0x00018005) call_type_pane_cp03_ParamLimits

0x275b,	// (0x00018005) call_type_pane_cp03

0x27bf,	// (0x00018069) popup_call2_audio_first_window_g1_ParamLimits

0x27bf,	// (0x00018069) popup_call2_audio_first_window_g1

0x282f,	// (0x000180d9) popup_call2_audio_first_window_g2_ParamLimits

0x282f,	// (0x000180d9) popup_call2_audio_first_window_g2

0x2893,	// (0x0001813d) popup_call2_audio_first_window_g3_ParamLimits

0x2893,	// (0x0001813d) popup_call2_audio_first_window_g3

0x0004,

0xf4c0,	// (0x00024d6a) popup_call2_audio_first_window_g_ParamLimits

0xf4c0,	// (0x00024d6a) popup_call2_audio_first_window_g

0x291b,	// (0x000181c5) popup_call2_audio_first_window_t1_ParamLimits

0x291b,	// (0x000181c5) popup_call2_audio_first_window_t1

0x2a1e,	// (0x000182c8) popup_call2_audio_first_window_t4_ParamLimits

0x2a1e,	// (0x000182c8) popup_call2_audio_first_window_t4

0x2b01,	// (0x000183ab) popup_call2_audio_first_window_t5_ParamLimits

0x2b01,	// (0x000183ab) popup_call2_audio_first_window_t5

0x0003,

0xf4cb,	// (0x00024d75) popup_call2_audio_first_window_t_ParamLimits

0xf4cb,	// (0x00024d75) popup_call2_audio_first_window_t

0x0f1b,	// (0x000167c5) bg_popup_call2_act_pane_g1

0x311e,	// (0x000189c8) popup_cale_lunar_info_window_t1

0x312c,	// (0x000189d6) popup_cale_lunar_info_window_t2

0x313a,	// (0x000189e4) popup_cale_lunar_info_window_t3

0x0cc8,	// (0x00016572) bg_popup_call2_bubble_pane

0x2c02,	// (0x000184ac) bg_popup_call2_in_pane_cp01_ParamLimits

0x2c02,	// (0x000184ac) bg_popup_call2_in_pane_cp01

0x09a4,	// (0x0001624e) call_type_pane_cp02

0xabd9,	// (0x00020483) popup_call2_audio_out_window_g1_ParamLimits

0xabd9,	// (0x00020483) popup_call2_audio_out_window_g1

0x2c4a,	// (0x000184f4) popup_call2_audio_out_window_g2_ParamLimits

0x2c4a,	// (0x000184f4) popup_call2_audio_out_window_g2

0xac05,	// (0x000204af) popup_call2_audio_out_window_g3_ParamLimits

0xac05,	// (0x000204af) popup_call2_audio_out_window_g3

0x0003,

0xf4d4,	// (0x00024d7e) popup_call2_audio_out_window_g_ParamLimits

0xf4d4,	// (0x00024d7e) popup_call2_audio_out_window_g

0x2c81,	// (0x0001852b) popup_call2_audio_out_window_t1_ParamLimits

0x2c81,	// (0x0001852b) popup_call2_audio_out_window_t1

0x2ce0,	// (0x0001858a) popup_call2_audio_out_window_t2_ParamLimits

0x2ce0,	// (0x0001858a) popup_call2_audio_out_window_t2

0x2d34,	// (0x000185de) popup_call2_audio_out_window_t3_ParamLimits

0x2d34,	// (0x000185de) popup_call2_audio_out_window_t3

0x2d4a,	// (0x000185f4) popup_call2_audio_out_window_t4_ParamLimits

0x2d4a,	// (0x000185f4) popup_call2_audio_out_window_t4

0x2d60,	// (0x0001860a) popup_call2_audio_out_window_t5_ParamLimits

0x2d60,	// (0x0001860a) popup_call2_audio_out_window_t5

0x0005,

0xf4dd,	// (0x00024d87) popup_call2_audio_out_window_t_ParamLimits

0xf4dd,	// (0x00024d87) popup_call2_audio_out_window_t

0x2dc4,	// (0x0001866e) bg_popup_call2_in_pane_ParamLimits

0x2dc4,	// (0x0001866e) bg_popup_call2_in_pane

0x2e20,	// (0x000186ca) popup_call2_audio_in_window_g1_ParamLimits

0x2e20,	// (0x000186ca) popup_call2_audio_in_window_g1

0x2e58,	// (0x00018702) popup_call2_audio_in_window_g2_ParamLimits

0x2e58,	// (0x00018702) popup_call2_audio_in_window_g2

0x2e90,	// (0x0001873a) popup_call2_audio_in_window_g3_ParamLimits

0x2e90,	// (0x0001873a) popup_call2_audio_in_window_g3

0x0003,

0xf4ea,	// (0x00024d94) popup_call2_audio_in_window_g_ParamLimits

0xf4ea,	// (0x00024d94) popup_call2_audio_in_window_g

0x2ee8,	// (0x00018792) popup_call2_audio_in_window_t1_ParamLimits

0x2ee8,	// (0x00018792) popup_call2_audio_in_window_t1

0x2f68,	// (0x00018812) popup_call2_audio_in_window_t2_ParamLimits

0x2f68,	// (0x00018812) popup_call2_audio_in_window_t2

0x2fe8,	// (0x00018892) popup_call2_audio_in_window_t3_ParamLimits

0x2fe8,	// (0x00018892) popup_call2_audio_in_window_t3

0x3002,	// (0x000188ac) popup_call2_audio_in_window_t4_ParamLimits

0x3002,	// (0x000188ac) popup_call2_audio_in_window_t4

0x3014,	// (0x000188be) popup_call2_audio_in_window_t5_ParamLimits

0x3014,	// (0x000188be) popup_call2_audio_in_window_t5

0x3029,	// (0x000188d3) popup_call2_audio_in_window_t6_ParamLimits

0x3029,	// (0x000188d3) popup_call2_audio_in_window_t6

0x0005,

0xf4f3,	// (0x00024d9d) popup_call2_audio_in_window_t_ParamLimits

0xf4f3,	// (0x00024d9d) popup_call2_audio_in_window_t

0x0f1b,	// (0x000167c5) bg_popup_call2_in_pane_g1

0x3148,	// (0x000189f2) popup_cale_lunar_info_window_t4

0x0003,

0xf55b,	// (0x00024e05) popup_cale_lunar_info_window_t

0x0f23,	// (0x000167cd) bg_popup_call2_rect_pane_ParamLimits

0x0f23,	// (0x000167cd) bg_popup_call2_rect_pane

0x0cc8,	// (0x00016572) call2_cli_visual_graphic_pane

0x0cc8,	// (0x00016572) call2_cli_visual_text_pane

0x77dc,	// (0x0001d086) smil_status_volume_pane_g3

0x0002,

0x0f3b,	// (0x000167e5) call2_cli_visual_graphic_pane_g1

0x0f3b,	// (0x000167e5) call2_cli_visual_graphic_pane_g2

0x0f3b,	// (0x000167e5) call2_cli_visual_graphic_pane_g3

0x0002,

0xf500,	// (0x00024daa) call2_cli_visual_graphic_pane_g

0x303e,	// (0x000188e8) bg_popup_call2_rect_pane_g1

0x1136,	// (0x000169e0) bg_popup_call2_rect_pane_g2

0x3046,	// (0x000188f0) bg_popup_call2_rect_pane_g3

0x304e,	// (0x000188f8) bg_popup_call2_rect_pane_g4

0x3056,	// (0x00018900) bg_popup_call2_rect_pane_g5

0x305e,	// (0x00018908) bg_popup_call2_rect_pane_g6

0x3066,	// (0x00018910) bg_popup_call2_rect_pane_g7

0x306e,	// (0x00018918) bg_popup_call2_rect_pane_g8

0x3076,	// (0x00018920) bg_popup_call2_rect_pane_g9

0x0008,

0xf507,	// (0x00024db1) bg_popup_call2_rect_pane_g

0x307e,	// (0x00018928) bg_popup_call2_bubble_pane_g1

0x3086,	// (0x00018930) bg_popup_call2_bubble_pane_g2

0x308e,	// (0x00018938) bg_popup_call2_bubble_pane_g3

0x3096,	// (0x00018940) bg_popup_call2_bubble_pane_g4

0x309e,	// (0x00018948) bg_popup_call2_bubble_pane_g5

0x30a6,	// (0x00018950) bg_popup_call2_bubble_pane_g6

0x30ae,	// (0x00018958) bg_popup_call2_bubble_pane_g7

0x30b6,	// (0x00018960) bg_popup_call2_bubble_pane_g8

0x30be,	// (0x00018968) bg_popup_call2_bubble_pane_g9

0x0008,

0xf51a,	// (0x00024dc4) bg_popup_call2_bubble_pane_g

0x8a2f,	// (0x0001e2d9) aid_cale_week_size_cell_pane

0x0f23,	// (0x000167cd) aid_cams_cif_uncrop_pane_ParamLimits

0x0f23,	// (0x000167cd) aid_cams_cif_uncrop_pane

0x8f33,	// (0x0001e7dd) aid_cams_size_cell_ParamLimits

0x8f33,	// (0x0001e7dd) aid_cams_size_cell

0x8f3f,	// (0x0001e7e9) grid_cams_pane_ParamLimits

0x8f4d,	// (0x0001e7f7) linegrid_cams_pane_ParamLimits

0x9024,	// (0x0001e8ce) call_video_pane_t1

0x9045,	// (0x0001e8ef) call_video_pane_t2

0x0001,

0xf222,	// (0x00024acc) call_video_pane_t

0x958c,	// (0x0001ee36) aid_cale_month_size_cell_pane_ParamLimits

0x958c,	// (0x0001ee36) aid_cale_month_size_cell_pane

0xf59f,	// (0x00024e49) smil_status_volume_pane_g

0x77e9,	// (0x0001d093) volume_smil_pane_ParamLimits

0x6f7a,	// (0x0001c824) aid_popup2_width_pane

0x8968,	// (0x0001e212) cell_qdial_pane_g4_ParamLimits

0x8968,	// (0x0001e212) cell_qdial_pane_g4

0xa36f,	// (0x0001fc19) aid_blid_cardinal_pane_ParamLimits

0xa37f,	// (0x0001fc29) aid_blid_destination_pane_ParamLimits

0xa37f,	// (0x0001fc29) aid_blid_destination_pane

0x0f23,	// (0x000167cd) bg_popup_call_poc_act_pane_ParamLimits

0x0f23,	// (0x000167cd) bg_popup_call_poc_act_pane

0x0f23,	// (0x000167cd) bg_popup_call_poc_inact_pane_ParamLimits

0x0f23,	// (0x000167cd) bg_popup_call_poc_inact_pane

0x30c6,	// (0x00018970) bg_popup_call_poc_act_pane_g1

0x30ce,	// (0x00018978) bg_popup_call_poc_act_pane_g2

0x30d6,	// (0x00018980) bg_popup_call_poc_act_pane_g3

0x3096,	// (0x00018940) bg_popup_call_poc_act_pane_g4

0x309e,	// (0x00018948) bg_popup_call_poc_act_pane_g5

0x30de,	// (0x00018988) bg_popup_call_poc_act_pane_g6

0x30ae,	// (0x00018958) bg_popup_call_poc_act_pane_g7

0x30e6,	// (0x00018990) bg_popup_call_poc_act_pane_g8

0x0cc8,	// (0x00016572) main_usb_pane

0x76bc,	// (0x0001cf66) popup_cale_lunar_info_window

0x936e,	// (0x0001ec18) im_reading_pane_t1_ParamLimits

0x1370,	// (0x00016c1a) list_im_pane_ParamLimits

0x1381,	// (0x00016c2b) scroll_pane_cp07_ParamLimits

0x0cc8,	// (0x00016572) grid_highlight_pane_cp012

0x0f23,	// (0x000167cd) mup_scale_pane_ParamLimits

0x2893,	// (0x0001813d) main_usb_pane_g1_ParamLimits

0x2893,	// (0x0001813d) main_usb_pane_g1

0xac66,	// (0x00020510) main_usb_pane_g2_ParamLimits

0xac66,	// (0x00020510) main_usb_pane_g2

0x0001,

0xf544,	// (0x00024dee) main_usb_pane_g_ParamLimits

0xf544,	// (0x00024dee) main_usb_pane_g

0xac72,	// (0x0002051c) main_usb_pane_t1_ParamLimits

0xac72,	// (0x0002051c) main_usb_pane_t1

0xac84,	// (0x0002052e) main_usb_pane_t2_ParamLimits

0xac84,	// (0x0002052e) main_usb_pane_t2

0xac96,	// (0x00020540) main_usb_pane_t3_ParamLimits

0xac96,	// (0x00020540) main_usb_pane_t3

0xaca8,	// (0x00020552) main_usb_pane_t4_ParamLimits

0xaca8,	// (0x00020552) main_usb_pane_t4

0xacba,	// (0x00020564) main_usb_pane_t5_ParamLimits

0xacba,	// (0x00020564) main_usb_pane_t5

0xaccc,	// (0x00020576) main_usb_pane_t6_ParamLimits

0xaccc,	// (0x00020576) main_usb_pane_t6

0x0005,

0xf549,	// (0x00024df3) main_usb_pane_t_ParamLimits

0xa315,	// (0x0001fbbf) aid_text_placing

0xa321,	// (0x0001fbcb) main_location2_pane_t1_ParamLimits

0xa335,	// (0x0001fbdf) main_location2_pane_t2_ParamLimits

0xa349,	// (0x0001fbf3) main_location2_pane_t3_ParamLimits

0xa35d,	// (0x0001fc07) main_location2_pane_t4_ParamLimits

0xa35d,	// (0x0001fc07) main_location2_pane_t4

0xf363,	// (0x00024c0d) main_location2_pane_t_ParamLimits

0x0f51,	// (0x000167fb) find_pinb_pane_g2_ParamLimits

0x0f51,	// (0x000167fb) find_pinb_pane_g2

0x0001,

0xf0da,	// (0x00024984) find_pinb_pane_g_ParamLimits

0xf0da,	// (0x00024984) find_pinb_pane_g

0x0f5d,	// (0x00016807) find_pinb_pane_t1_ParamLimits

0x0f6f,	// (0x00016819) find_pinb_pane_t2_ParamLimits

0xf0df,	// (0x00024989) find_pinb_pane_t_ParamLimits

0x0cc8,	// (0x00016572) main_call3_pane

0x9b2f,	// (0x0001f3d9) cale_month_day_heading_pane_t1_ParamLimits

0x9bb5,	// (0x0001f45f) cale_month_day_heading_pane_t2_ParamLimits

0x9c2e,	// (0x0001f4d8) cale_month_day_heading_pane_t3_ParamLimits

0x9ca7,	// (0x0001f551) cale_month_day_heading_pane_t4_ParamLimits

0x9d20,	// (0x0001f5ca) cale_month_day_heading_pane_t5_ParamLimits

0x9d99,	// (0x0001f643) cale_month_day_heading_pane_t6_ParamLimits

0x9e12,	// (0x0001f6bc) cale_month_day_heading_pane_t7_ParamLimits

0xf25a,	// (0x00024b04) cale_month_day_heading_pane_t_ParamLimits

0x15d7,	// (0x00016e81) smil_status_volume_pane

0xa7c2,	// (0x0002006c) postcard_address_pane_ParamLimits

0xa7c2,	// (0x0002006c) postcard_address_pane

0xa7ce,	// (0x00020078) postcard_message_pane_ParamLimits

0xa7ce,	// (0x00020078) postcard_message_pane

0xac31,	// (0x000204db) call2_cli_visual_pane_t1_ParamLimits

0xac31,	// (0x000204db) call2_cli_visual_pane_t1

0x32d3,	// (0x00018b7d) postcard_message_pane_t1_ParamLimits

0x32d3,	// (0x00018b7d) postcard_message_pane_t1

0x32bb,	// (0x00018b65) postcard_address_pane_t1_ParamLimits

0x32bb,	// (0x00018b65) postcard_address_pane_t1

0xb00e,	// (0x000208b8) popup_call3_audio_in_window_ParamLimits

0xb00e,	// (0x000208b8) popup_call3_audio_in_window

0xaef2,	// (0x0002079c) bg_popup_call3_in_pane_ParamLimits

0xaef2,	// (0x0002079c) bg_popup_call3_in_pane

0xaf54,	// (0x000207fe) popup_call3_audio_in_window_g1_ParamLimits

0xaf54,	// (0x000207fe) popup_call3_audio_in_window_g1

0xaf6c,	// (0x00020816) popup_call3_audio_in_window_g2_ParamLimits

0xaf6c,	// (0x00020816) popup_call3_audio_in_window_g2

0xaf84,	// (0x0002082e) popup_call3_audio_in_window_g3_ParamLimits

0xaf84,	// (0x0002082e) popup_call3_audio_in_window_g3

0x0003,

0xf5a6,	// (0x00024e50) popup_call3_audio_in_window_g_ParamLimits

0xf5a6,	// (0x00024e50) popup_call3_audio_in_window_g

0xafac,	// (0x00020856) popup_call3_audio_in_window_t1_ParamLimits

0xafac,	// (0x00020856) popup_call3_audio_in_window_t1

0xafd4,	// (0x0002087e) popup_call3_audio_in_window_t2_ParamLimits

0xafd4,	// (0x0002087e) popup_call3_audio_in_window_t2

0xaffc,	// (0x000208a6) popup_call3_audio_in_window_t3_ParamLimits

0xaffc,	// (0x000208a6) popup_call3_audio_in_window_t3

0x0002,

0xf5af,	// (0x00024e59) popup_call3_audio_in_window_t_ParamLimits

0xf5af,	// (0x00024e59) popup_call3_audio_in_window_t

0x1277,	// (0x00016b21) bg_popup_call3_rect_pane

0x303e,	// (0x000188e8) bg_popup_call3_rect_pane_g1

0x1136,	// (0x000169e0) bg_popup_call3_rect_pane_g2

0x3046,	// (0x000188f0) bg_popup_call3_rect_pane_g3

0x304e,	// (0x000188f8) bg_popup_call3_rect_pane_g4

0x3056,	// (0x00018900) bg_popup_call3_rect_pane_g5

0x305e,	// (0x00018908) bg_popup_call3_rect_pane_g6

0x3066,	// (0x00018910) bg_popup_call3_rect_pane_g7

0x0838,	// (0x000160e2) mup_visualizer_osc_pane

0x0838,	// (0x000160e2) mup_visualizer_spec_pane

0xaf12,	// (0x000207bc) call3_video_qcif_pane_ParamLimits

0xaf12,	// (0x000207bc) call3_video_qcif_pane

0xaf24,	// (0x000207ce) call3_video_qcif_uncrop_pane_ParamLimits

0xaf24,	// (0x000207ce) call3_video_qcif_uncrop_pane

0xaf32,	// (0x000207dc) call3_video_subqcif_pane_ParamLimits

0xaf32,	// (0x000207dc) call3_video_subqcif_pane

0xaf44,	// (0x000207ee) call3_video_subqcif_uncrop_pane_ParamLimits

0xaf44,	// (0x000207ee) call3_video_subqcif_uncrop_pane

0xaf9c,	// (0x00020846) popup_call3_audio_in_window_g4_ParamLimits

0xaf9c,	// (0x00020846) popup_call3_audio_in_window_g4

0x0838,	// (0x000160e2) mup_spec_half_pane

0x0838,	// (0x000160e2) mup_spec_half_pane_cp

0x0838,	// (0x000160e2) mup_osc_middle_pane

0x12b7,	// (0x00016b61) mup_visualizer_osc_pane_g1

0x324c,	// (0x00018af6) mup_spec_bar_pane_ParamLimits

0x324c,	// (0x00018af6) mup_spec_bar_pane

0x12b7,	// (0x00016b61) mup_spec_bar_pane_g1

0x12b7,	// (0x00016b61) mup_spec_bar_pane_g2

0x0001,

0xf3dd,	// (0x00024c87) mup_spec_bar_pane_g

0x8a2f,	// (0x0001e2d9) aid_cale_week_size_cell_pane_ParamLimits

0x8a44,	// (0x0001e2ee) bg_cale_heading_pane_ParamLimits

0x11d9,	// (0x00016a83) bg_cale_pane_cp01_ParamLimits

0x8a64,	// (0x0001e30e) cale_week_corner_pane_ParamLimits

0x8a7e,	// (0x0001e328) cale_week_day_heading_pane_ParamLimits

0x8a9e,	// (0x0001e348) cale_week_scroll_pane_g1_ParamLimits

0x8ab9,	// (0x0001e363) cale_week_scroll_pane_g2_ParamLimits

0x8acc,	// (0x0001e376) cale_week_scroll_pane_g3_ParamLimits

0x8adf,	// (0x0001e389) cale_week_scroll_pane_g4_ParamLimits

0x8af2,	// (0x0001e39c) cale_week_scroll_pane_g5_ParamLimits

0x8b05,	// (0x0001e3af) cale_week_scroll_pane_g6_ParamLimits

0x8b18,	// (0x0001e3c2) cale_week_scroll_pane_g7_ParamLimits

0x8b2d,	// (0x0001e3d7) cale_week_scroll_pane_g8_ParamLimits

0x8b42,	// (0x0001e3ec) cale_week_scroll_pane_g9_ParamLimits

0x8b55,	// (0x0001e3ff) cale_week_scroll_pane_g10_ParamLimits

0x8b68,	// (0x0001e412) cale_week_scroll_pane_g11_ParamLimits

0x8b7b,	// (0x0001e425) cale_week_scroll_pane_g12_ParamLimits

0x8b92,	// (0x0001e43c) cale_week_scroll_pane_g13_ParamLimits

0x8bad,	// (0x0001e457) cale_week_scroll_pane_g14_ParamLimits

0x8bc8,	// (0x0001e472) cale_week_scroll_pane_g15_ParamLimits

0xf16b,	// (0x00024a15) cale_week_scroll_pane_g_ParamLimits

0x8bf8,	// (0x0001e4a2) cale_week_time_pane_ParamLimits

0x8c0d,	// (0x0001e4b7) grid_cale_week_pane_ParamLimits

0x11f6,	// (0x00016aa0) listscroll_cale_week_pane_t1

0x1208,	// (0x00016ab2) scroll_pane_cp08_ParamLimits

0x9600,	// (0x0001eeaa) cale_month_corner_pane_ParamLimits

0x15a1,	// (0x00016e4b) cale_month_pane_t1

0x9ab2,	// (0x0001f35c) cale_month_week_pane_ParamLimits

0x2893,	// (0x0001813d) popup_call_status_window_g1_ParamLimits

0xa1df,	// (0x0001fa89) popup_call_status_window_g2_ParamLimits

0xa1eb,	// (0x0001fa95) popup_call_status_window_g3_ParamLimits

0xf2ea,	// (0x00024b94) popup_call_status_window_g_ParamLimits

0x199f,	// (0x00017249) aid_call2_pane

0xa6e0,	// (0x0001ff8a) msg_header_pane_g1

0xa7c2,	// (0x0002006c) postcard_address2_pane_ParamLimits

0xa7c2,	// (0x0002006c) postcard_address2_pane

0xa7ce,	// (0x00020078) postcard_message2_pane_ParamLimits

0xa7ce,	// (0x00020078) postcard_message2_pane

0xaec4,	// (0x0002076e) message2_row_pane_ParamLimits

0xaec4,	// (0x0002076e) message2_row_pane

0xaedf,	// (0x00020789) address2_row_pane_ParamLimits

0xaedf,	// (0x00020789) address2_row_pane

0x3219,	// (0x00018ac3) postcard_message2_row_pane_g1

0x3221,	// (0x00018acb) postcard_message2_row_pane_t1

0x3219,	// (0x00018ac3) address2_row_pane_g1

0x3221,	// (0x00018acb) address2_row_pane_t1

0x8dad,	// (0x0001e657) aid_size_cell_vorec

0x0cc8,	// (0x00016572) main_rss_pane

0x322f,	// (0x00018ad9) rss_list_single_pane_ParamLimits

0x322f,	// (0x00018ad9) rss_list_single_pane

0x323d,	// (0x00018ae7) rss_list_single_pane_t1

0x323d,	// (0x00018ae7) rss_list_single_pane_t2

0x0001,

0xf59a,	// (0x00024e44) rss_list_single_pane_t

0x0cc8,	// (0x00016572) main_camera2_pane

0x0cc8,	// (0x00016572) main_video2_pane

0x71f5,	// (0x0001ca9f) cams_zoom_pane_cp2_ParamLimits

0x71f5,	// (0x0001ca9f) cams_zoom_pane_cp2

0x71f5,	// (0x0001ca9f) image2_vga_pane_ParamLimits

0x71f5,	// (0x0001ca9f) image2_vga_pane

0x1a3e,	// (0x000172e8) main_camera2_pane_g1_ParamLimits

0x1a3e,	// (0x000172e8) main_camera2_pane_g1

0x1a3e,	// (0x000172e8) main_camera2_pane_g2_ParamLimits

0x1a3e,	// (0x000172e8) main_camera2_pane_g2

0x1a3e,	// (0x000172e8) main_camera2_pane_g3_ParamLimits

0x1a3e,	// (0x000172e8) main_camera2_pane_g3

0x1a3e,	// (0x000172e8) main_camera2_pane_g4_ParamLimits

0x1a3e,	// (0x000172e8) main_camera2_pane_g4

0x1a3e,	// (0x000172e8) main_camera2_pane_g5_ParamLimits

0x1a3e,	// (0x000172e8) main_camera2_pane_g5

0x1a3e,	// (0x000172e8) main_camera2_pane_g6_ParamLimits

0x1a3e,	// (0x000172e8) main_camera2_pane_g6

0x1a3e,	// (0x000172e8) main_camera2_pane_g7_ParamLimits

0x1a3e,	// (0x000172e8) main_camera2_pane_g7

0x1a3e,	// (0x000172e8) main_camera2_pane_g8_ParamLimits

0x1a3e,	// (0x000172e8) main_camera2_pane_g8

0x0008,

0xf5b6,	// (0x00024e60) main_camera2_pane_g_ParamLimits

0xf5b6,	// (0x00024e60) main_camera2_pane_g

0x780c,	// (0x0001d0b6) main_camera2_pane_t1_ParamLimits

0x780c,	// (0x0001d0b6) main_camera2_pane_t1

0x780c,	// (0x0001d0b6) main_camera2_pane_t2_ParamLimits

0x780c,	// (0x0001d0b6) main_camera2_pane_t2

0x780c,	// (0x0001d0b6) main_camera2_pane_t3_ParamLimits

0x780c,	// (0x0001d0b6) main_camera2_pane_t3

0x780c,	// (0x0001d0b6) main_camera2_pane_t4_ParamLimits

0x780c,	// (0x0001d0b6) main_camera2_pane_t4

0x0006,

0xf5c9,	// (0x00024e73) main_camera2_pane_t_ParamLimits

0xf5c9,	// (0x00024e73) main_camera2_pane_t

0x7834,	// (0x0001d0de) cams_zoom_pane_cp4_ParamLimits

0x7834,	// (0x0001d0de) cams_zoom_pane_cp4

0x765b,	// (0x0001cf05) image2_cif_pane_ParamLimits

0x765b,	// (0x0001cf05) image2_cif_pane

0x71f5,	// (0x0001ca9f) image2_subqcif_pane_ParamLimits

0x71f5,	// (0x0001ca9f) image2_subqcif_pane

0x7842,	// (0x0001d0ec) main_video2_pane_g1_ParamLimits

0x7842,	// (0x0001d0ec) main_video2_pane_g1

0x7842,	// (0x0001d0ec) main_video2_pane_g2_ParamLimits

0x7842,	// (0x0001d0ec) main_video2_pane_g2

0x7842,	// (0x0001d0ec) main_video2_pane_g3_ParamLimits

0x7842,	// (0x0001d0ec) main_video2_pane_g3

0x7842,	// (0x0001d0ec) main_video2_pane_g4_ParamLimits

0x7842,	// (0x0001d0ec) main_video2_pane_g4

0x7842,	// (0x0001d0ec) main_video2_pane_g5_ParamLimits

0x7842,	// (0x0001d0ec) main_video2_pane_g5

0x7842,	// (0x0001d0ec) main_video2_pane_g6_ParamLimits

0x7842,	// (0x0001d0ec) main_video2_pane_g6

0x0005,

0xf5d8,	// (0x00024e82) main_video2_pane_g_ParamLimits

0xf5d8,	// (0x00024e82) main_video2_pane_g

0x7850,	// (0x0001d0fa) main_video2_pane_t1_ParamLimits

0x7850,	// (0x0001d0fa) main_video2_pane_t1

0x7850,	// (0x0001d0fa) main_video2_pane_t2_ParamLimits

0x7850,	// (0x0001d0fa) main_video2_pane_t2

0x7850,	// (0x0001d0fa) main_video2_pane_t3_ParamLimits

0x7850,	// (0x0001d0fa) main_video2_pane_t3

0x0002,

0xf5e5,	// (0x00024e8f) main_video2_pane_t_ParamLimits

0xf5e5,	// (0x00024e8f) main_video2_pane_t

0xad62,	// (0x0002060c) call_muted_g2

0x0001,

0xf58c,	// (0x00024e36) call_muted_g

0x0cc8,	// (0x00016572) main_mup2_pane

0x0fba,	// (0x00016864) main_mup2_pane_g1_ParamLimits

0x0fba,	// (0x00016864) main_mup2_pane_g1

0x0fba,	// (0x00016864) main_mup2_pane_g2_ParamLimits

0x0fba,	// (0x00016864) main_mup2_pane_g2

0x4b0a,	// (0x0001a3b4) main_mup_pane_g13_cp1

0x7203,	// (0x0001caad) mup_volume_pane_cp1

0x0fba,	// (0x00016864) main_mup2_pane_g4_ParamLimits

0x0fba,	// (0x00016864) main_mup2_pane_g4

0x0fba,	// (0x00016864) main_mup2_pane_g5_ParamLimits

0x0fba,	// (0x00016864) main_mup2_pane_g5

0x0fba,	// (0x00016864) main_mup2_pane_g6_ParamLimits

0x0fba,	// (0x00016864) main_mup2_pane_g6

0x0fba,	// (0x00016864) main_mup2_pane_g7_ParamLimits

0x0fba,	// (0x00016864) main_mup2_pane_g7

0x0006,

0xf5ec,	// (0x00024e96) main_mup2_pane_g_ParamLimits

0xf5ec,	// (0x00024e96) main_mup2_pane_g

0x0fc8,	// (0x00016872) main_mup2_pane_t1_ParamLimits

0x0fc8,	// (0x00016872) main_mup2_pane_t1

0x0fc8,	// (0x00016872) main_mup2_pane_t2_ParamLimits

0x0fc8,	// (0x00016872) main_mup2_pane_t2

0x0fc8,	// (0x00016872) main_mup2_pane_t3_ParamLimits

0x0fc8,	// (0x00016872) main_mup2_pane_t3

0x0fc8,	// (0x00016872) main_mup2_pane_t4_ParamLimits

0x0fc8,	// (0x00016872) main_mup2_pane_t4

0x0fc8,	// (0x00016872) main_mup2_pane_t5_ParamLimits

0x0fc8,	// (0x00016872) main_mup2_pane_t5

0x0fc8,	// (0x00016872) main_mup2_pane_t6_ParamLimits

0x0fc8,	// (0x00016872) main_mup2_pane_t6

0x0005,

0xf5fb,	// (0x00024ea5) main_mup2_pane_t_ParamLimits

0xf5fb,	// (0x00024ea5) main_mup2_pane_t

0x3311,	// (0x00018bbb) mup2_visualizer_pane_ParamLimits

0x3311,	// (0x00018bbb) mup2_visualizer_pane

0x3311,	// (0x00018bbb) mup_progress_pane_cp_ParamLimits

0x3311,	// (0x00018bbb) mup_progress_pane_cp

0x787a,	// (0x0001d124) mup_volume_pane_cp_ParamLimits

0x787a,	// (0x0001d124) mup_volume_pane_cp

0x0f9e,	// (0x00016848) mup2_visualizer_pane_g1_ParamLimits

0x0f9e,	// (0x00016848) mup2_visualizer_pane_g1

0x0fac,	// (0x00016856) mup2_visualizer_pane_g2_ParamLimits

0x0fac,	// (0x00016856) mup2_visualizer_pane_g2

0x0fac,	// (0x00016856) mup2_visualizer_pane_g3_ParamLimits

0x0fac,	// (0x00016856) mup2_visualizer_pane_g3

0x0002,

0xf0e4,	// (0x0002498e) mup2_visualizer_pane_g_ParamLimits

0xf0e4,	// (0x0002498e) mup2_visualizer_pane_g

0x216d,	// (0x00017a17) aid_size_cell_fmradio

0x7644,	// (0x0001ceee) aid_height_parent_landcape

0x13ff,	// (0x00016ca9) wml_content_pane_cp

0x1407,	// (0x00016cb1) wml_tabs_pane

0x1410,	// (0x00016cba) popup_wml_miniature_window

0x1418,	// (0x00016cc2) scroll_pane_cp021

0x142c,	// (0x00016cd6) wml_content_pane_comp8

0x0cc8,	// (0x00016572) bg_popup_sub_pane_cp05

0x3335,	// (0x00018bdf) popup_wml_miniature_window_g1

0x333d,	// (0x00018be7) wml_miniature_view_pane

0xb01d,	// (0x000208c7) aid_size_wml_view

0xb025,	// (0x000208cf) wml_miniature_view_pane_g1

0xb02e,	// (0x000208d8) wml_miniature_view_pane_g2

0xb037,	// (0x000208e1) wml_miniature_view_pane_g3

0xb03f,	// (0x000208e9) wml_miniature_view_pane_g4

0xb047,	// (0x000208f1) wml_miniature_view_pane_g5

0xb04f,	// (0x000208f9) wml_miniature_view_pane_g6

0xb057,	// (0x00020901) wml_miniature_view_pane_g7

0xb05f,	// (0x00020909) wml_miniature_view_pane_g8

0x0007,

0xf608,	// (0x00024eb2) wml_miniature_view_pane_g

0x3345,	// (0x00018bef) background_graphic_ParamLimits

0x3345,	// (0x00018bef) background_graphic

0x3351,	// (0x00018bfb) wml_tabs_2_pane

0x335a,	// (0x00018c04) wml_tabs_3_pane_ParamLimits

0x335a,	// (0x00018c04) wml_tabs_3_pane

0x336c,	// (0x00018c16) wml_tabs_4_pane_ParamLimits

0x336c,	// (0x00018c16) wml_tabs_4_pane

0x3382,	// (0x00018c2c) wml_tabs_5_pane_ParamLimits

0x3382,	// (0x00018c2c) wml_tabs_5_pane

0x339c,	// (0x00018c46) wml_tabs_pane_g2_ParamLimits

0x339c,	// (0x00018c46) wml_tabs_pane_g2

0x33b1,	// (0x00018c5b) wml_tabs_pane_g3_ParamLimits

0x33b1,	// (0x00018c5b) wml_tabs_pane_g3

0x33c6,	// (0x00018c70) wml_tabs_2_active_pane_ParamLimits

0x33c6,	// (0x00018c70) wml_tabs_2_active_pane

0x33c6,	// (0x00018c70) wml_tabs_2_passive_pane_ParamLimits

0x33c6,	// (0x00018c70) wml_tabs_2_passive_pane

0xb067,	// (0x00020911) wml_tabs_3_active_pane_cp_ParamLimits

0xb067,	// (0x00020911) wml_tabs_3_active_pane_cp

0xb078,	// (0x00020922) wml_tabs_3_passive_pane_ParamLimits

0xb078,	// (0x00020922) wml_tabs_3_passive_pane

0xb089,	// (0x00020933) wml_tabs_3_passive_pane_cp_ParamLimits

0xb089,	// (0x00020933) wml_tabs_3_passive_pane_cp

0xb09a,	// (0x00020944) tabs_4_active_pane

0xb0a2,	// (0x0002094c) tabs_4_passive_pane

0xb0aa,	// (0x00020954) tabs_4_passive_pane_cp

0xb0b2,	// (0x0002095c) tabs_4_passive_pane_cp2

0xac5e,	// (0x00020508) aid_height_text

0x3311,	// (0x00018bbb) mup_volume_cont_pane_ParamLimits

0x3311,	// (0x00018bbb) mup_volume_cont_pane

0x0838,	// (0x000160e2) aid_size_cell_pinb

0x0838,	// (0x000160e2) aid_size_list_pinb

0x3311,	// (0x00018bbb) mup2_volume_cont_pane_ParamLimits

0x3311,	// (0x00018bbb) mup2_volume_cont_pane

0x7864,	// (0x0001d10e) mup2_volume_cont_pane_g1_ParamLimits

0x7864,	// (0x0001d10e) mup2_volume_cont_pane_g1

0x6f86,	// (0x0001c830) aid_size_cell_touch_ParamLimits

0x6f86,	// (0x0001c830) aid_size_cell_touch

0x720d,	// (0x0001cab7) touch_pane_ParamLimits

0x720d,	// (0x0001cab7) touch_pane

0x7203,	// (0x0001caad) main_rss2_pane

0x33f3,	// (0x00018c9d) listscroll_rss2_pane

0x33fc,	// (0x00018ca6) rss2_navigation_pane

0x3404,	// (0x00018cae) list_rss2_pane

0x1b41,	// (0x000173eb) scroll_pane_cp22

0x340c,	// (0x00018cb6) rss2_navigation_pane_g1

0x3415,	// (0x00018cbf) rss2_navigation_pane_g2

0x341d,	// (0x00018cc7) rss2_navigation_pane_g3

0x0002,

0xf619,	// (0x00024ec3) rss2_navigation_pane_g

0x3425,	// (0x00018ccf) rss2_navigation_pane_t1

0xb0ba,	// (0x00020964) rss2_list_single_pane_ParamLimits

0xb0ba,	// (0x00020964) rss2_list_single_pane

0x3433,	// (0x00018cdd) rss2_list_single_pane_t2

0x3441,	// (0x00018ceb) rss2_list_single_pane_t3_ParamLimits

0x3441,	// (0x00018ceb) rss2_list_single_pane_t3

0x345e,	// (0x00018d08) rss2_list_single_pane_t4

0xa076,	// (0x0001f920) smil_status_pane_g1

0x765b,	// (0x0001cf05) main_image2_pane_ParamLimits

0x765b,	// (0x0001cf05) main_image2_pane

0x1a3e,	// (0x000172e8) main_camera2_pane_g9_ParamLimits

0x1a3e,	// (0x000172e8) main_camera2_pane_g9

0x780c,	// (0x0001d0b6) main_camera2_pane_t5_ParamLimits

0x780c,	// (0x0001d0b6) main_camera2_pane_t5

0x7820,	// (0x0001d0ca) main_camera2_pane_t6_ParamLimits

0x7820,	// (0x0001d0ca) main_camera2_pane_t6

0xb0eb,	// (0x00020995) main_image2_pane_g1_ParamLimits

0xb0eb,	// (0x00020995) main_image2_pane_g1

0xa996,	// (0x00020240) smil2_video_pane_ParamLimits

0xa996,	// (0x00020240) smil2_video_pane

0x6fba,	// (0x0001c864) aid_zoom_text_primary_cp

0x71aa,	// (0x0001ca54) popup_preview_fixed_window

0x1368,	// (0x00016c12) im_reading_pane_g1

0x77fe,	// (0x0001d0a8) cams2_bc_adjust_pane_cp_ParamLimits

0x77fe,	// (0x0001d0a8) cams2_bc_adjust_pane_cp

0x71f5,	// (0x0001ca9f) cams2_bc_adjust_pane_ParamLimits

0x71f5,	// (0x0001ca9f) cams2_bc_adjust_pane

0x4b0a,	// (0x0001a3b4) cams2_bc_adjust_pane_g1

0x7203,	// (0x0001caad) cams2_slider_pane

0x4b0a,	// (0x0001a3b4) cams2_slider_pane_g1

0x4b0a,	// (0x0001a3b4) cams2_slider_pane_g2

0x0006,

0xf620,	// (0x00024eca) cams2_slider_pane_g

0x727e,	// (0x0001cb28) calc_display_pane_ParamLimits

0x729c,	// (0x0001cb46) calc_paper_pane_ParamLimits

0x72b8,	// (0x0001cb62) grid_calc_pane_ParamLimits

0x75af,	// (0x0001ce59) popup_clock_digital_window_t1_ParamLimits

0x210a,	// (0x000179b4) main_image_pane_t1

0x7264,	// (0x0001cb0e) aid_size_cell_calc_ParamLimits

0x7264,	// (0x0001cb0e) aid_size_cell_calc

0x7698,	// (0x0001cf42) popup_blid_sat_info2_window_ParamLimits

0x7698,	// (0x0001cf42) popup_blid_sat_info2_window

0x346c,	// (0x00018d16) aid_size_cell_blid

0x3311,	// (0x00018bbb) bg_popup_window_pane_cp07

0x3489,	// (0x00018d33) grid_popup_blid_pane

0x3493,	// (0x00018d3d) heading_pane_cp05_ParamLimits

0x3493,	// (0x00018d3d) heading_pane_cp05

0x355d,	// (0x00018e07) cell_popup_blid_pane_ParamLimits

0x355d,	// (0x00018e07) cell_popup_blid_pane

0x3581,	// (0x00018e2b) cell_popup_blid_pane_g1

0x3589,	// (0x00018e33) cell_popup_blid_pane_t1

0x3311,	// (0x00018bbb) mup2_indicator_pane_ParamLimits

0x3311,	// (0x00018bbb) mup2_indicator_pane

0x0838,	// (0x000160e2) mup2_visualizer_osc_pane

0x331f,	// (0x00018bc9) mup2_visualizer_spec_pane_ParamLimits

0x331f,	// (0x00018bc9) mup2_visualizer_spec_pane

0x0838,	// (0x000160e2) mup2_spec_half_pane

0x0838,	// (0x000160e2) mup2_spec_half_pane_cp

0x3597,	// (0x00018e41) mup2_spec_bar_pane_ParamLimits

0x3597,	// (0x00018e41) mup2_spec_bar_pane

0x12b7,	// (0x00016b61) mup2_spec_bar_pane_g1

0x35b6,	// (0x00018e60) mup2_spec_bar_pane_g2

0x0001,

0xf646,	// (0x00024ef0) mup2_spec_bar_pane_g

0x0838,	// (0x000160e2) mup2_osc_middle_pane

0x12b7,	// (0x00016b61) mup2_visualizer_osc_pane_g1

0x08d5,	// (0x0001617f) popup_number_entry_window_t1_ParamLimits

0x08e8,	// (0x00016192) popup_number_entry_window_t2_ParamLimits

0x08fa,	// (0x000161a4) popup_number_entry_window_t3_ParamLimits

0x879a,	// (0x0001e044) popup_number_entry_window_t5_ParamLimits

0x879a,	// (0x0001e044) popup_number_entry_window_t5

0xf085,	// (0x0002492f) popup_number_entry_window_t_ParamLimits

0x090c,	// (0x000161b6) text_title_cp2_ParamLimits

0x75ee,	// (0x0001ce98) aid_hotspot_pointer_text2_pane

0x7638,	// (0x0001cee2) main_viewer_pane_g9_ParamLimits

0x7638,	// (0x0001cee2) main_viewer_pane_g9

0x15a1,	// (0x00016e4b) cale_month_pane_t1_ParamLimits

0x160c,	// (0x00016eb6) bg_cale_pane_ParamLimits

0x1624,	// (0x00016ece) list_cale_pane_ParamLimits

0x1635,	// (0x00016edf) listscroll_cale_day_pane_t1

0x1647,	// (0x00016ef1) scroll_pane_cp09_ParamLimits

0xa44b,	// (0x0001fcf5) main_mup_eq_pane_t1_ParamLimits

0xa44b,	// (0x0001fcf5) main_mup_eq_pane_t1

0xa465,	// (0x0001fd0f) main_mup_eq_pane_t2_ParamLimits

0xa465,	// (0x0001fd0f) main_mup_eq_pane_t2

0xa47f,	// (0x0001fd29) main_mup_eq_pane_t3_ParamLimits

0xa47f,	// (0x0001fd29) main_mup_eq_pane_t3

0xa497,	// (0x0001fd41) main_mup_eq_pane_t4_ParamLimits

0xa497,	// (0x0001fd41) main_mup_eq_pane_t4

0xa4af,	// (0x0001fd59) main_mup_eq_pane_t5_ParamLimits

0xa4af,	// (0x0001fd59) main_mup_eq_pane_t5

0xa4c7,	// (0x0001fd71) main_mup_eq_pane_t6_ParamLimits

0xa4c7,	// (0x0001fd71) main_mup_eq_pane_t6

0xa4db,	// (0x0001fd85) main_mup_eq_pane_t7_ParamLimits

0xa4db,	// (0x0001fd85) main_mup_eq_pane_t7

0xa4ef,	// (0x0001fd99) main_mup_eq_pane_t8_ParamLimits

0xa4ef,	// (0x0001fd99) main_mup_eq_pane_t8

0xa505,	// (0x0001fdaf) main_mup_eq_pane_t9_ParamLimits

0xa505,	// (0x0001fdaf) main_mup_eq_pane_t9

0xa51d,	// (0x0001fdc7) main_mup_eq_pane_t10_ParamLimits

0xa51d,	// (0x0001fdc7) main_mup_eq_pane_t10

0x0009,

0xf3e9,	// (0x00024c93) main_mup_eq_pane_t_ParamLimits

0xf3e9,	// (0x00024c93) main_mup_eq_pane_t

0xa5da,	// (0x0001fe84) mup_equalizer_pane_cp5_ParamLimits

0xa5f0,	// (0x0001fe9a) mup_equalizer_pane_cp6_ParamLimits

0xa608,	// (0x0001feb2) mup_equalizer_pane_cp7_ParamLimits

0x7203,	// (0x0001caad) main_gallery_pane

0x326b,	// (0x00018b15) smil2_volume_pane

0x3286,	// (0x00018b30) smil_status_volume_pane_g1_ParamLimits

0x3273,	// (0x00018b1d) smil_status_volume_pane_g2_ParamLimits

0x77dc,	// (0x0001d086) smil_status_volume_pane_g3_ParamLimits

0xf59f,	// (0x00024e49) smil_status_volume_pane_g_ParamLimits

0x3311,	// (0x00018bbb) bg_popup_window_pane_cp07_ParamLimits

0x3474,	// (0x00018d1e) blid_firmament_pane

0x0f90,	// (0x0001683a) aid_size_cell_gallery_ParamLimits

0x0f90,	// (0x0001683a) aid_size_cell_gallery

0x0f90,	// (0x0001683a) grid_gallery_pane_ParamLimits

0x0f90,	// (0x0001683a) grid_gallery_pane

0x1e81,	// (0x0001772b) cell_gallery_pane_ParamLimits

0x1e81,	// (0x0001772b) cell_gallery_pane

0x08a7,	// (0x00016151) bg_cell_gallery_focus_pane_ParamLimits

0x08a7,	// (0x00016151) bg_cell_gallery_focus_pane

0x0f9e,	// (0x00016848) cell_gallery_pane_g1_ParamLimits

0x0f9e,	// (0x00016848) cell_gallery_pane_g1

0x0f9e,	// (0x00016848) cell_gallery_pane_g2_ParamLimits

0x0f9e,	// (0x00016848) cell_gallery_pane_g2

0x0f9e,	// (0x00016848) cell_gallery_pane_g3_ParamLimits

0x0f9e,	// (0x00016848) cell_gallery_pane_g3

0x0fac,	// (0x00016856) cell_gallery_pane_g4_ParamLimits

0x0fac,	// (0x00016856) cell_gallery_pane_g4

0x0003,

0xf64b,	// (0x00024ef5) cell_gallery_pane_g_ParamLimits

0xf64b,	// (0x00024ef5) cell_gallery_pane_g

0x35c0,	// (0x00018e6a) bg_cell_gallery_focus_pane_g1

0x35c8,	// (0x00018e72) bg_cell_gallery_focus_pane_g2

0x35d0,	// (0x00018e7a) bg_cell_gallery_focus_pane_g3

0x35d8,	// (0x00018e82) bg_cell_gallery_focus_pane_g4

0x35e0,	// (0x00018e8a) bg_cell_gallery_focus_pane_g5

0x35e8,	// (0x00018e92) bg_cell_gallery_focus_pane_g6

0x35f0,	// (0x00018e9a) bg_cell_gallery_focus_pane_g7

0x35f8,	// (0x00018ea2) bg_cell_gallery_focus_pane_g8

0x0007,

0xf654,	// (0x00024efe) bg_cell_gallery_focus_pane_g

0x3600,	// (0x00018eaa) aid_firma_cardinal

0x3614,	// (0x00018ebe) blid_firmament_pane_t1

0x362b,	// (0x00018ed5) blid_firmament_pane_t2

0x3642,	// (0x00018eec) blid_firmament_pane_t3

0x3659,	// (0x00018f03) blid_firmament_pane_t4

0x0003,

0xf665,	// (0x00024f0f) blid_firmament_pane_t

0x3670,	// (0x00018f1a) blid_sat_info_pane

0x12b7,	// (0x00016b61) blid_sat_info_pane_g1

0x12b7,	// (0x00016b61) blid_sat_info_pane_g2

0x0001,

0xf3dd,	// (0x00024c87) blid_sat_info_pane_g

0x3680,	// (0x00018f2a) blid_sat_info_pane_t1

0x368e,	// (0x00018f38) smil2_volume_content_pane

0x3697,	// (0x00018f41) smil2_volume_pane_g1

0x10cd,	// (0x00016977) smil2_volume_content_pane_g1

0x369f,	// (0x00018f49) smil2_volume_content_pane_g2

0x36a8,	// (0x00018f52) smil2_volume_content_pane_g3

0x36b1,	// (0x00018f5b) smil2_volume_content_pane_g4

0x36ba,	// (0x00018f64) smil2_volume_content_pane_g5

0x36c3,	// (0x00018f6d) smil2_volume_content_pane_g6

0x36cc,	// (0x00018f76) smil2_volume_content_pane_g7

0x36d5,	// (0x00018f7f) smil2_volume_content_pane_g8

0x36de,	// (0x00018f88) smil2_volume_content_pane_g9

0x36e7,	// (0x00018f91) smil2_volume_content_pane_g10

0x0009,

0xf66e,	// (0x00024f18) smil2_volume_content_pane_g

0x8c8e,	// (0x0001e538) cale_week_day_heading_pane_t1_ParamLimits

0x8ca9,	// (0x0001e553) cale_week_day_heading_pane_t2_ParamLimits

0x8cc4,	// (0x0001e56e) cale_week_day_heading_pane_t3_ParamLimits

0x8cdf,	// (0x0001e589) cale_week_day_heading_pane_t4_ParamLimits

0x8cfa,	// (0x0001e5a4) cale_week_day_heading_pane_t5_ParamLimits

0x8d15,	// (0x0001e5bf) cale_week_day_heading_pane_t6_ParamLimits

0x8d30,	// (0x0001e5da) cale_week_day_heading_pane_t7_ParamLimits

0xf18c,	// (0x00024a36) cale_week_day_heading_pane_t_ParamLimits

0x1225,	// (0x00016acf) bg_cale_side_pane_ParamLimits

0x740f,	// (0x0001ccb9) cale_week_time_pane_t1_ParamLimits

0x7429,	// (0x0001ccd3) cale_week_time_pane_t2_ParamLimits

0x7443,	// (0x0001cced) cale_week_time_pane_t3_ParamLimits

0x745d,	// (0x0001cd07) cale_week_time_pane_t4_ParamLimits

0x7477,	// (0x0001cd21) cale_week_time_pane_t5_ParamLimits

0x7491,	// (0x0001cd3b) cale_week_time_pane_t6_ParamLimits

0x74af,	// (0x0001cd59) cale_week_time_pane_t7_ParamLimits

0x74d1,	// (0x0001cd7b) cale_week_time_pane_t8_ParamLimits

0xf19b,	// (0x00024a45) cale_week_time_pane_t_ParamLimits

0x8d4b,	// (0x0001e5f5) cell_cale_week_pane_g2_ParamLimits

0x1225,	// (0x00016acf) bg_cale_side_pane_cp01_ParamLimits

0x9ea3,	// (0x0001f74d) cale_month_week_pane_t1_ParamLimits

0x9ebc,	// (0x0001f766) cale_month_week_pane_t2_ParamLimits

0x9ed5,	// (0x0001f77f) cale_month_week_pane_t3_ParamLimits

0x9eee,	// (0x0001f798) cale_month_week_pane_t4_ParamLimits

0x9f07,	// (0x0001f7b1) cale_month_week_pane_t5_ParamLimits

0x9f28,	// (0x0001f7d2) cale_month_week_pane_t6_ParamLimits

0xf269,	// (0x00024b13) cale_month_week_pane_t_ParamLimits

0x74ff,	// (0x0001cda9) cell_cale_month_pane_g1_ParamLimits

0x7203,	// (0x0001caad) main_cale_event_viewer_pane

0x0838,	// (0x000160e2) listscroll_cale_event_viewer_pane

0x36f0,	// (0x00018f9a) list_cale_ev_pane

0x36f8,	// (0x00018fa2) scroll_pane_cp023

0x3704,	// (0x00018fae) field_cale_ev_pane_ParamLimits

0x3704,	// (0x00018fae) field_cale_ev_pane

0x3722,	// (0x00018fcc) field_cale_ev_content_pane_ParamLimits

0x3722,	// (0x00018fcc) field_cale_ev_content_pane

0x372e,	// (0x00018fd8) field_cale_ev_pane_g1_ParamLimits

0x372e,	// (0x00018fd8) field_cale_ev_pane_g1

0x373a,	// (0x00018fe4) field_cale_ev_pane_g2_ParamLimits

0x373a,	// (0x00018fe4) field_cale_ev_pane_g2

0x3752,	// (0x00018ffc) field_cale_ev_pane_g3_ParamLimits

0x3752,	// (0x00018ffc) field_cale_ev_pane_g3

0x0002,

0xf683,	// (0x00024f2d) field_cale_ev_pane_g_ParamLimits

0xf683,	// (0x00024f2d) field_cale_ev_pane_g

0x376a,	// (0x00019014) field_cale_ev_pane_t1_ParamLimits

0x376a,	// (0x00019014) field_cale_ev_pane_t1

0x1150,	// (0x000169fa) field_cale_ev_content_pane_t1_ParamLimits

0x1150,	// (0x000169fa) field_cale_ev_content_pane_t1

0x1f2c,	// (0x000177d6) bg_button_pane_cp01

0x8a1f,	// (0x0001e2c9) listscroll_cale_week_pane_ParamLimits

0x11d0,	// (0x00016a7a) popup_toolbar_window_cp01

0x11f6,	// (0x00016aa0) listscroll_cale_week_pane_t1_ParamLimits

0x8a1f,	// (0x0001e2c9) listscroll_cale_day_pane_ParamLimits

0x11d0,	// (0x00016a7a) popup_toolbar_window_cp02

0x1635,	// (0x00016edf) listscroll_cale_day_pane_t1_ParamLimits

0x8a1f,	// (0x0001e2c9) main_cale_month_pane_ParamLimits

0x779f,	// (0x0001d049) popup_toolbar_window_cp03_ParamLimits

0x779f,	// (0x0001d049) popup_toolbar_window_cp03

0xa8ac,	// (0x00020156) main_image_pane_g2_ParamLimits

0xa8ac,	// (0x00020156) main_image_pane_g2

0xa8b8,	// (0x00020162) main_image_pane_g3_ParamLimits

0xa8b8,	// (0x00020162) main_image_pane_g3

0x0002,

0xf47b,	// (0x00024d25) main_image_pane_g_ParamLimits

0xf47b,	// (0x00024d25) main_image_pane_g

0x210a,	// (0x000179b4) main_image_pane_t1_ParamLimits

0xa8c4,	// (0x0002016e) main_image_pane_t2_ParamLimits

0xa8c4,	// (0x0002016e) main_image_pane_t2

0xa8d6,	// (0x00020180) main_image_pane_t3_ParamLimits

0xa8d6,	// (0x00020180) main_image_pane_t3

0xa8e8,	// (0x00020192) main_image_pane_t4_ParamLimits

0xa8e8,	// (0x00020192) main_image_pane_t4

0x0003,

0xf482,	// (0x00024d2c) main_image_pane_t_ParamLimits

0xf482,	// (0x00024d2c) main_image_pane_t

0xa8fa,	// (0x000201a4) popup_image_details_window_cp01

0xa904,	// (0x000201ae) popup_toobar_trans_pane_cp01_ParamLimits

0xa904,	// (0x000201ae) popup_toobar_trans_pane_cp01

0x76ef,	// (0x0001cf99) popup_image_details_window_ParamLimits

0x76ef,	// (0x0001cf99) popup_image_details_window

0x76fd,	// (0x0001cfa7) popup_image_focus_window

0x71f5,	// (0x0001ca9f) camera2_autofocus_pane_ParamLimits

0x71f5,	// (0x0001ca9f) camera2_autofocus_pane

0x0838,	// (0x000160e2) bg_popup_sub_pane_cp06

0x3781,	// (0x0001902b) popup_image_focus_window_g1

0x3789,	// (0x00019033) popup_image_focus_window_g2

0x3791,	// (0x0001903b) popup_image_focus_window_g3

0x3799,	// (0x00019043) popup_image_focus_window_g4

0x0003,

0xf68a,	// (0x00024f34) popup_image_focus_window_g

0x37a1,	// (0x0001904b) popup_image_focus_window_t1

0x37af,	// (0x00019059) popup_image_focus_window_t2

0x37bf,	// (0x00019069) popup_image_focus_window_t3

0x0002,

0xf693,	// (0x00024f3d) popup_image_focus_window_t

0x0f9e,	// (0x00016848) camera2_autofocus_pane_g1

0x08a7,	// (0x00016151) bg_tb_trans_pane_cp01

0x37cd,	// (0x00019077) popup_image_details_window_g1

0x37e0,	// (0x0001908a) popup_image_details_window_g2

0x0002,

0xf6a5,	// (0x00024f4f) popup_image_details_window_g

0x3809,	// (0x000190b3) popup_image_details_window_t1

0x381b,	// (0x000190c5) popup_image_details_window_t2

0x3834,	// (0x000190de) popup_image_details_window_t3

0x3848,	// (0x000190f2) popup_image_details_window_t4

0x3863,	// (0x0001910d) popup_image_details_window_t5

0x0004,

0xf6ac,	// (0x00024f56) popup_image_details_window_t

0x1004,	// (0x000168ae) bg_calc_paper_pane_ParamLimits

0x7203,	// (0x0001caad) grid_highlight_pane_cp013

0x72e4,	// (0x0001cb8e) list_calc_pane_ParamLimits

0x72f6,	// (0x0001cba0) scroll_pane_cp024

0x1032,	// (0x000168dc) bg_calc_display_pane_ParamLimits

0x72fe,	// (0x0001cba8) calc_display_pane_t1_ParamLimits

0x7313,	// (0x0001cbbd) calc_display_pane_t2_ParamLimits

0x7328,	// (0x0001cbd2) calc_display_pane_t3_ParamLimits

0xf10c,	// (0x000249b6) calc_display_pane_t_ParamLimits

0x7391,	// (0x0001cc3b) cell_calc_pane_g2

0x0001,

0xf129,	// (0x000249d3) cell_calc_pane_g

0x739a,	// (0x0001cc44) cell_calc_pane_t1

0x10ab,	// (0x00016955) grid_highlight_pane_cp02_ParamLimits

0x10c1,	// (0x0001696b) toolbar_button_pane_cp01_ParamLimits

0x10c1,	// (0x0001696b) toolbar_button_pane_cp01

0x214f,	// (0x000179f9) temp_image_control_pane_ParamLimits

0x214f,	// (0x000179f9) temp_image_control_pane

0x765b,	// (0x0001cf05) main_mp3_pane

0x387d,	// (0x00019127) temp_image_control_pane_g1_ParamLimits

0x387d,	// (0x00019127) temp_image_control_pane_g1

0x388b,	// (0x00019135) temp_image_control_pane_g2_ParamLimits

0x388b,	// (0x00019135) temp_image_control_pane_g2

0x389d,	// (0x00019147) temp_image_control_pane_g3_ParamLimits

0x389d,	// (0x00019147) temp_image_control_pane_g3

0xb0f7,	// (0x000209a1) temp_image_control_pane_g4_ParamLimits

0xb0f7,	// (0x000209a1) temp_image_control_pane_g4

0x0003,

0xf6b7,	// (0x00024f61) temp_image_control_pane_g_ParamLimits

0xf6b7,	// (0x00024f61) temp_image_control_pane_g

0x387d,	// (0x00019127) main_mp3_pane_g1

0xb108,	// (0x000209b2) main_mp3_pane_g2

0x0007,

0xf6c0,	// (0x00024f6a) main_mp3_pane_g

0x38d2,	// (0x0001917c) main_mp3_pane_t1

0x0fac,	// (0x00016856) main_camera_pane_g8_ParamLimits

0x0fac,	// (0x00016856) main_camera_pane_g8

0x8eeb,	// (0x0001e795) main_video_pane_g7_ParamLimits

0x8eeb,	// (0x0001e795) main_video_pane_g7

0x780c,	// (0x0001d0b6) main_camera2_pane_t7_ParamLimits

0x780c,	// (0x0001d0b6) main_camera2_pane_t7

0x13bf,	// (0x00016c69) scroll_pane_cp025_ParamLimits

0x13bf,	// (0x00016c69) scroll_pane_cp025

0x13d3,	// (0x00016c7d) scroll_pane_cp026_ParamLimits

0x13d3,	// (0x00016c7d) scroll_pane_cp026

0x13e2,	// (0x00016c8c) wml_content_pane_ParamLimits

0x7203,	// (0x0001caad) main_touch_calib_pane

0xb1ac,	// (0x00020a56) main_touch_calib_pane_g1

0xb1b8,	// (0x00020a62) main_touch_calib_pane_g2

0xb1c4,	// (0x00020a6e) main_touch_calib_pane_g3

0xb1d0,	// (0x00020a7a) main_touch_calib_pane_g4

0x0003,

0xf6de,	// (0x00024f88) main_touch_calib_pane_g

0xb1dc,	// (0x00020a86) main_touch_calib_pane_t1

0xb1f5,	// (0x00020a9f) main_touch_calib_pane_t2

0x0004,

0xf6e7,	// (0x00024f91) main_touch_calib_pane_t

0x1c1d,	// (0x000174c7) mup_progress_pane_cp02

0x1c52,	// (0x000174fc) navi_pane_g1

0x1d0d,	// (0x000175b7) navi_pane_mp_t3

0x765b,	// (0x0001cf05) main_mp3_pane_ParamLimits

0xae78,	// (0x00020722) navi_pane_ParamLimits

0x387d,	// (0x00019127) main_mp3_pane_g1_ParamLimits

0xb108,	// (0x000209b2) main_mp3_pane_g2_ParamLimits

0xb114,	// (0x000209be) main_mp3_pane_g3_ParamLimits

0xb114,	// (0x000209be) main_mp3_pane_g3

0xb120,	// (0x000209ca) main_mp3_pane_g4_ParamLimits

0xb120,	// (0x000209ca) main_mp3_pane_g4

0x0f9e,	// (0x00016848) main_mp3_pane_g5_ParamLimits

0x0f9e,	// (0x00016848) main_mp3_pane_g5

0x38ad,	// (0x00019157) main_mp3_pane_g6_ParamLimits

0x38ad,	// (0x00019157) main_mp3_pane_g6

0x38ba,	// (0x00019164) main_mp3_pane_g7_ParamLimits

0x38ba,	// (0x00019164) main_mp3_pane_g7

0x38c6,	// (0x00019170) main_mp3_pane_g8_ParamLimits

0x38c6,	// (0x00019170) main_mp3_pane_g8

0xf6c0,	// (0x00024f6a) main_mp3_pane_g_ParamLimits

0xb12c,	// (0x000209d6) main_mp3_pane_t2

0xb13c,	// (0x000209e6) main_mp3_pane_t3

0x38e0,	// (0x0001918a) main_mp3_pane_t4

0x38ee,	// (0x00019198) main_mp3_pane_t5

0x0005,

0xf6d1,	// (0x00024f7b) main_mp3_pane_t

0x38fc,	// (0x000191a6) mup_progress_pane_cp01

0x6fba,	// (0x0001c864) aid_zoom_text_secondary2

0x36f0,	// (0x00018f9a) list_cale_ev2_pane

0x36f8,	// (0x00018fa2) scroll_pane_cp023_ParamLimits

0xb250,	// (0x00020afa) field_cale_ev2_pane_ParamLimits

0xb250,	// (0x00020afa) field_cale_ev2_pane

0xb279,	// (0x00020b23) field_cale_ev2_pane_g1_ParamLimits

0xb279,	// (0x00020b23) field_cale_ev2_pane_g1

0xb285,	// (0x00020b2f) field_cale_ev2_pane_g2_ParamLimits

0xb285,	// (0x00020b2f) field_cale_ev2_pane_g2

0xb29d,	// (0x00020b47) field_cale_ev2_pane_g3_ParamLimits

0xb29d,	// (0x00020b47) field_cale_ev2_pane_g3

0x0003,

0xf6f2,	// (0x00024f9c) field_cale_ev2_pane_g_ParamLimits

0xf6f2,	// (0x00024f9c) field_cale_ev2_pane_g

0xb2b5,	// (0x00020b5f) field_cale_ev2_pane_t1_ParamLimits

0xb2b5,	// (0x00020b5f) field_cale_ev2_pane_t1

0xb2cc,	// (0x00020b76) field_cale_ev2_pane_t2_ParamLimits

0xb2cc,	// (0x00020b76) field_cale_ev2_pane_t2

0x0001,

0xf6fb,	// (0x00024fa5) field_cale_ev2_pane_t_ParamLimits

0xf6fb,	// (0x00024fa5) field_cale_ev2_pane_t

0xa78c,	// (0x00020036) main_postcard_pane_g5_ParamLimits

0xa78c,	// (0x00020036) main_postcard_pane_g5

0xa79a,	// (0x00020044) main_postcard_pane_g6_ParamLimits

0xa79a,	// (0x00020044) main_postcard_pane_g6

0x0f90,	// (0x0001683a) camera2_autofocus_pane_cp_ParamLimits

0x0f90,	// (0x0001683a) camera2_autofocus_pane_cp

0x765b,	// (0x0001cf05) main_mup3_pane

0xb320,	// (0x00020bca) main_mup3_pane_g1_ParamLimits

0xb320,	// (0x00020bca) main_mup3_pane_g1

0xb341,	// (0x00020beb) main_mup3_pane_g2_ParamLimits

0xb341,	// (0x00020beb) main_mup3_pane_g2

0xb3b9,	// (0x00020c63) main_mup3_pane_g3_ParamLimits

0xb3b9,	// (0x00020c63) main_mup3_pane_g3

0xb3fc,	// (0x00020ca6) main_mup3_pane_g4_ParamLimits

0xb3fc,	// (0x00020ca6) main_mup3_pane_g4

0xb43f,	// (0x00020ce9) main_mup3_pane_g5_ParamLimits

0xb43f,	// (0x00020ce9) main_mup3_pane_g5

0xb482,	// (0x00020d2c) main_mup3_pane_g6_ParamLimits

0xb482,	// (0x00020d2c) main_mup3_pane_g6

0x0fac,	// (0x00016856) main_mup3_pane_g7_ParamLimits

0x0fac,	// (0x00016856) main_mup3_pane_g7

0x0007,

0xf70b,	// (0x00024fb5) main_mup3_pane_g_ParamLimits

0xf70b,	// (0x00024fb5) main_mup3_pane_g

0xb4f8,	// (0x00020da2) main_mup3_pane_t1_ParamLimits

0xb4f8,	// (0x00020da2) main_mup3_pane_t1

0xb567,	// (0x00020e11) main_mup3_pane_t2_ParamLimits

0xb567,	// (0x00020e11) main_mup3_pane_t2

0xb630,	// (0x00020eda) main_mup3_pane_t4_ParamLimits

0xb630,	// (0x00020eda) main_mup3_pane_t4

0xb67e,	// (0x00020f28) main_mup3_pane_t5_ParamLimits

0xb67e,	// (0x00020f28) main_mup3_pane_t5

0xb72e,	// (0x00020fd8) main_mup3_pane_t6_ParamLimits

0xb72e,	// (0x00020fd8) main_mup3_pane_t6

0x0005,

0xf71c,	// (0x00024fc6) main_mup3_pane_t_ParamLimits

0xf71c,	// (0x00024fc6) main_mup3_pane_t

0xb7da,	// (0x00021084) mup3_progress_pane_ParamLimits

0xb7da,	// (0x00021084) mup3_progress_pane

0xb858,	// (0x00021102) popup_mup3_control_window_ParamLimits

0xb858,	// (0x00021102) popup_mup3_control_window

0x3910,	// (0x000191ba) popup_mup3_text_window

0xb871,	// (0x0002111b) mup3_progress_pane_t1

0xb890,	// (0x0002113a) mup3_progress_pane_t2

0x3918,	// (0x000191c2) mup3_progress_pane_t3

0x0002,

0xf729,	// (0x00024fd3) mup3_progress_pane_t

0x3935,	// (0x000191df) mup_progress_pane_cp03

0x0838,	// (0x000160e2) bg_tb_trans_pane_cp04

0xb8af,	// (0x00021159) mup3_volume_pane

0xb8b7,	// (0x00021161) popup_mup3_control_window_g1

0xb8c0,	// (0x0002116a) mup3_volume_pane_g1

0xb8c9,	// (0x00021173) mup3_volume_pane_g2

0xb8d2,	// (0x0002117c) mup3_volume_pane_g3

0x0002,

0xf730,	// (0x00024fda) mup3_volume_pane_g

0x0838,	// (0x000160e2) bg_tb_trans_pane_cp03

0x3945,	// (0x000191ef) popup_mup3_text_window_g1

0x394d,	// (0x000191f7) popup_mup3_text_window_t1

0x108c,	// (0x00016936) list_calc_item_pane_g1_ParamLimits

0x33ea,	// (0x00018c94) mup_volume_pane_cp_g1

0xb20e,	// (0x00020ab8) main_touch_calib_pane_t3

0xb224,	// (0x00020ace) main_touch_calib_pane_t4

0xb23a,	// (0x00020ae4) main_touch_calib_pane_t5

0x6f72,	// (0x0001c81c) aid_cell_size_toolbar2

0x6f7a,	// (0x0001c824) aid_popup3_width_pane

0x6fba,	// (0x0001c864) aid_zoom_text_msg_primary

0x8df7,	// (0x0001e6a1) vorec_t7

0x1050,	// (0x000168fa) bg_calc_paper_pane_g1_ParamLimits

0x1068,	// (0x00016912) bg_calc_paper_pane_g2_ParamLimits

0x105c,	// (0x00016906) bg_calc_paper_pane_g3_ParamLimits

0x1080,	// (0x0001692a) bg_calc_paper_pane_g4_ParamLimits

0x1074,	// (0x0001691e) bg_calc_paper_pane_g5_ParamLimits

0x88c8,	// (0x0001e172) bg_calc_paper_pane_g6_ParamLimits

0x88d9,	// (0x0001e183) bg_calc_paper_pane_g7_ParamLimits

0x88ea,	// (0x0001e194) bg_calc_paper_pane_g8_ParamLimits

0xf113,	// (0x000249bd) bg_calc_paper_pane_g_ParamLimits

0x88fb,	// (0x0001e1a5) calc_bg_paper_pane_g9_ParamLimits

0x0f90,	// (0x0001683a) image_qvga_pane_ParamLimits

0x0f90,	// (0x0001683a) image_qvga_pane

0x0f23,	// (0x000167cd) bg_popup_sub_pane_cp04_ParamLimits

0x2086,	// (0x00017930) popup_mup_playback_window_g1_ParamLimits

0x2092,	// (0x0001793c) popup_mup_playback_window_t1_ParamLimits

0x20a7,	// (0x00017951) popup_mup_playback_window_t2_ParamLimits

0xf476,	// (0x00024d20) popup_mup_playback_window_t_ParamLimits

0x0f9e,	// (0x00016848) main_mup2_pane_g3_ParamLimits

0x0f9e,	// (0x00016848) main_mup2_pane_g3

0x90d2,	// (0x0001e97c) popup_toolbar_window_cp04

0x2489,	// (0x00017d33) popup_call2_audio_second_window_g3_ParamLimits

0x2489,	// (0x00017d33) popup_call2_audio_second_window_g3

0x28a1,	// (0x0001814b) popup_call2_audio_first_window_g4_ParamLimits

0x28a1,	// (0x0001814b) popup_call2_audio_first_window_g4

0x2ec8,	// (0x00018772) popup_call2_audio_in_window_g4_ParamLimits

0x2ec8,	// (0x00018772) popup_call2_audio_in_window_g4

0xa89f,	// (0x00020149) aid_area_sk_bg_cut_ParamLimits

0xa89f,	// (0x00020149) aid_area_sk_bg_cut

0x20bc,	// (0x00017966) aid_area_sk_bg_cut_2_ParamLimits

0x20bc,	// (0x00017966) aid_area_sk_bg_cut_2

0x0838,	// (0x000160e2) aid_placing_details_win

0x0838,	// (0x000160e2) aid_placing_details_win_2

0x0f9e,	// (0x00016848) camera2_autofocus_pane_g1_ParamLimits

0x719b,	// (0x0001ca45) popup_fixed_preview_cale_window_ParamLimits

0x719b,	// (0x0001ca45) popup_fixed_preview_cale_window

0x1da6,	// (0x00017650) navi_slider_pane_g3

0x1d9d,	// (0x00017647) navi_slider_pane_g4

0x1d94,	// (0x0001763e) navi_slider_pane_g5

0x1da6,	// (0x00017650) navi_slider_pane_g6

0x75d5,	// (0x0001ce7f) navi_slider_pane_g7

0x1ef1,	// (0x0001779b) mup_scale_pane_g3

0x1efa,	// (0x000177a4) mup_scale_pane_g4

0x1f03,	// (0x000177ad) mup_scale_pane_g5

0xa620,	// (0x0001feca) mup_scale_pane_g6

0xa629,	// (0x0001fed3) mup_scale_pane_g7

0x4b0a,	// (0x0001a3b4) cams2_slider_pane_g3

0x4b0a,	// (0x0001a3b4) cams2_slider_pane_g4

0x4b0a,	// (0x0001a3b4) cams2_slider_pane_g5

0x4b0a,	// (0x0001a3b4) cams2_slider_pane_g6

0x4b0a,	// (0x0001a3b4) cams2_slider_pane_g7

0x12b7,	// (0x00016b61) camera2_autofocus_pane_cp_g1

0x319e,	// (0x00018a48) bg_popup_preview_window_pane_cp02_ParamLimits

0x319e,	// (0x00018a48) bg_popup_preview_window_pane_cp02

0x395b,	// (0x00019205) list_fp_cale_pane_ParamLimits

0x395b,	// (0x00019205) list_fp_cale_pane

0x3967,	// (0x00019211) popup_fixed_preview_cale_window_t1_ParamLimits

0x3967,	// (0x00019211) popup_fixed_preview_cale_window_t1

0xb8db,	// (0x00021185) popup_fixed_preview_cale_window_t2_ParamLimits

0xb8db,	// (0x00021185) popup_fixed_preview_cale_window_t2

0xb8f0,	// (0x0002119a) popup_fixed_preview_cale_window_t3_ParamLimits

0xb8f0,	// (0x0002119a) popup_fixed_preview_cale_window_t3

0x0002,

0xf737,	// (0x00024fe1) popup_fixed_preview_cale_window_t_ParamLimits

0xf737,	// (0x00024fe1) popup_fixed_preview_cale_window_t

0xb905,	// (0x000211af) list_single_fp_cale_pane_ParamLimits

0xb905,	// (0x000211af) list_single_fp_cale_pane

0x3985,	// (0x0001922f) list_single_fp_cale_pane_g1_ParamLimits

0x3985,	// (0x0001922f) list_single_fp_cale_pane_g1

0x3991,	// (0x0001923b) list_single_fp_cale_pane_g2_ParamLimits

0x3991,	// (0x0001923b) list_single_fp_cale_pane_g2

0x0002,

0xf73e,	// (0x00024fe8) list_single_fp_cale_pane_g_ParamLimits

0xf73e,	// (0x00024fe8) list_single_fp_cale_pane_g

0x39aa,	// (0x00019254) list_single_fp_cale_pane_t1_ParamLimits

0x39aa,	// (0x00019254) list_single_fp_cale_pane_t1

0x39bc,	// (0x00019266) list_single_fp_cale_pane_t2_ParamLimits

0x39bc,	// (0x00019266) list_single_fp_cale_pane_t2

0x0001,

0xf745,	// (0x00024fef) list_single_fp_cale_pane_t_ParamLimits

0xf745,	// (0x00024fef) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x7203,	// (0x0001caad) main_dialer_pane

0x0838,	// (0x000160e2) aid_cell_size_keypad

0x0838,	// (0x000160e2) dialer_ne_pane

0x0838,	// (0x000160e2) grid_dialer_command_1_pane

0x0838,	// (0x000160e2) grid_dialer_command_2_pane

0x0838,	// (0x000160e2) grid_dialer_keypad_pane

0x3311,	// (0x00018bbb) bg_popup_call_pane_cp06_ParamLimits

0x3311,	// (0x00018bbb) bg_popup_call_pane_cp06

0x3311,	// (0x00018bbb) dialer_ne_clear_pane_ParamLimits

0x3311,	// (0x00018bbb) dialer_ne_clear_pane

0x12b7,	// (0x00016b61) dialer_ne_pane_g1

0x1e6d,	// (0x00017717) dialer_ne_pane_t1_ParamLimits

0x1e6d,	// (0x00017717) dialer_ne_pane_t1

0x3c08,	// (0x000194b2) dialer_ne_pane_t2_ParamLimits

0x3c08,	// (0x000194b2) dialer_ne_pane_t2

0xb918,	// (0x000211c2) dialer_ne_pane_t3_ParamLimits

0xb918,	// (0x000211c2) dialer_ne_pane_t3

0x0002,

0xf74a,	// (0x00024ff4) dialer_ne_pane_t_ParamLimits

0xf74a,	// (0x00024ff4) dialer_ne_pane_t

0xb918,	// (0x000211c2) dialer_ne_pane_t3_copy1_ParamLimits

0xb918,	// (0x000211c2) dialer_ne_pane_t3_copy1

0x39ef,	// (0x00019299) cell_dialer_keypad_pane_ParamLimits

0x39ef,	// (0x00019299) cell_dialer_keypad_pane

0x08a7,	// (0x00016151) cell_dialer_command_1_pane_ParamLimits

0x08a7,	// (0x00016151) cell_dialer_command_1_pane

0x3a06,	// (0x000192b0) cell_dialer_command_2_pane_ParamLimits

0x3a06,	// (0x000192b0) cell_dialer_command_2_pane

0x08a7,	// (0x00016151) bg_button_pane_cp02_ParamLimits

0x08a7,	// (0x00016151) bg_button_pane_cp02

0x0f9e,	// (0x00016848) cell_dialer_keypad_pane_g1_ParamLimits

0x0f9e,	// (0x00016848) cell_dialer_keypad_pane_g1

0x08a7,	// (0x00016151) bg_button_pane_cp03_ParamLimits

0x08a7,	// (0x00016151) bg_button_pane_cp03

0x0f9e,	// (0x00016848) cell_dialer_command_1_pane_g1_ParamLimits

0x0f9e,	// (0x00016848) cell_dialer_command_1_pane_g1

0x0838,	// (0x000160e2) bg_button_pane_cp04

0x12b7,	// (0x00016b61) cell_dialer_command_2_pane_g1

0x0838,	// (0x000160e2) bg_button_pane_cp06

0x12b7,	// (0x00016b61) dialer_ne_clear_pane_g1

0x1c5e,	// (0x00017508) navi_pane_g2

0x1c8c,	// (0x00017536) navi_pane_g3

0x0002,

0xf379,	// (0x00024c23) navi_pane_g

0x1d1b,	// (0x000175c5) navi_pane_mv_g2

0x1d42,	// (0x000175ec) navi_pane_mv_g5

0xa3fc,	// (0x0001fca6) navi_pane_mv_t1

0x1032,	// (0x000168dc) main_clock2_pane

0x0f90,	// (0x0001683a) main_clock2_list_pane_ParamLimits

0x0f90,	// (0x0001683a) main_clock2_list_pane

0xb98e,	// (0x00021238) main_clock2_pane_t1_ParamLimits

0xb98e,	// (0x00021238) main_clock2_pane_t1

0xb9bc,	// (0x00021266) main_clock2_pane_t2_ParamLimits

0xb9bc,	// (0x00021266) main_clock2_pane_t2

0x0004,

0xf756,	// (0x00025000) main_clock2_pane_t_ParamLimits

0xf756,	// (0x00025000) main_clock2_pane_t

0xba21,	// (0x000212cb) popup_clock_analogue_window_cp03_ParamLimits

0xba21,	// (0x000212cb) popup_clock_analogue_window_cp03

0xba3f,	// (0x000212e9) popup_clock_digital_window_cp02_ParamLimits

0xba3f,	// (0x000212e9) popup_clock_digital_window_cp02

0xba9e,	// (0x00021348) main_clock2_list_single_pane_ParamLimits

0xba9e,	// (0x00021348) main_clock2_list_single_pane

0x1277,	// (0x00016b21) list_highlight_pane_cp05

0x3a4d,	// (0x000192f7) main_clock2_list_single_pane_t1

0x90d2,	// (0x0001e97c) popup_toolbar_window_cp04_ParamLimits

0x0fac,	// (0x00016856) camera2_autofocus_pane_g2_ParamLimits

0x0fac,	// (0x00016856) camera2_autofocus_pane_g2

0x0fac,	// (0x00016856) camera2_autofocus_pane_g3_ParamLimits

0x0fac,	// (0x00016856) camera2_autofocus_pane_g3

0x0fac,	// (0x00016856) camera2_autofocus_pane_g4_ParamLimits

0x0fac,	// (0x00016856) camera2_autofocus_pane_g4

0x0fac,	// (0x00016856) camera2_autofocus_pane_g5_ParamLimits

0x0fac,	// (0x00016856) camera2_autofocus_pane_g5

0x0004,

0xf69a,	// (0x00024f44) camera2_autofocus_pane_g_ParamLimits

0xf69a,	// (0x00024f44) camera2_autofocus_pane_g

0xb2e1,	// (0x00020b8b) camera2_autofocus_pane_cp_g2

0xb2e9,	// (0x00020b93) camera2_autofocus_pane_cp_g3

0xb2f1,	// (0x00020b9b) camera2_autofocus_pane_cp_g4

0xb2f9,	// (0x00020ba3) camera2_autofocus_pane_cp_g5

0x0004,

0xf700,	// (0x00024faa) camera2_autofocus_pane_cp_g

0x0838,	// (0x000160e2) popup_dialer_spcha_window

0x0838,	// (0x000160e2) bg_popup_sub_pane_cp07

0x0838,	// (0x000160e2) list_spcha_pane

0x3a5b,	// (0x00019305) list_single_spcha_pane_ParamLimits

0x3a5b,	// (0x00019305) list_single_spcha_pane

0x0838,	// (0x000160e2) list_highlight_pane_cp06

0x1820,	// (0x000170ca) list_single_spcha_pane_t1

0x2c72,	// (0x0001851c) popup_call2_audio_out_window_g4_ParamLimits

0x2c72,	// (0x0001851c) popup_call2_audio_out_window_g4

0x7203,	// (0x0001caad) main_imed2_pane

0x7705,	// (0x0001cfaf) popup_imed_adjust2_window

0x7718,	// (0x0001cfc2) popup_imed_trans_window_ParamLimits

0x7718,	// (0x0001cfc2) popup_imed_trans_window

0x34bf,	// (0x00018d69) popup_blid_sat_info2_window_t1

0x34cd,	// (0x00018d77) popup_blid_sat_info2_window_t2

0x000a,

0xf62f,	// (0x00024ed9) popup_blid_sat_info2_window_t

0xbab0,	// (0x0002135a) aid_size_cell_colour_35

0xbaca,	// (0x00021374) aid_size_cell_colour_112

0xbae1,	// (0x0002138b) aid_size_cell_effect

0x08a7,	// (0x00016151) bg_tb_trans_pane_cp02

0x17ed,	// (0x00017097) heading_imed_pane

0xbafb,	// (0x000213a5) listscroll_imed_pane

0x3a6d,	// (0x00019317) heading_imed_pane_g1

0x3a75,	// (0x0001931f) heading_imed_pane_t1

0x3a83,	// (0x0001932d) grid_imed_colour_35_pane_ParamLimits

0x3a83,	// (0x0001932d) grid_imed_colour_35_pane

0xbb07,	// (0x000213b1) grid_imed_effect_pane

0x3a9a,	// (0x00019344) list_imed_aspect_pane

0xbb17,	// (0x000213c1) scroll_pane_cp027_ParamLimits

0xbb17,	// (0x000213c1) scroll_pane_cp027

0xbb23,	// (0x000213cd) cell_imed_effect_pane_ParamLimits

0xbb23,	// (0x000213cd) cell_imed_effect_pane

0x3aa2,	// (0x0001934c) cell_imed_colour_pane_ParamLimits

0x3aa2,	// (0x0001934c) cell_imed_colour_pane

0x3ae4,	// (0x0001938e) cell_imed_colour_pane_g1_ParamLimits

0x3ae4,	// (0x0001938e) cell_imed_colour_pane_g1

0x3af5,	// (0x0001939f) hgihlgiht_grid_pane_cp016_ParamLimits

0x3af5,	// (0x0001939f) hgihlgiht_grid_pane_cp016

0xbb3b,	// (0x000213e5) cell_imed_effect_pane_g1

0xbb43,	// (0x000213ed) grid_highlight_pane_cp017

0x3b06,	// (0x000193b0) list_imed_single_pane_ParamLimits

0x3b06,	// (0x000193b0) list_imed_single_pane

0x0838,	// (0x000160e2) list_highlight_pane_cp07

0x3b1b,	// (0x000193c5) list_imed_aspect_pane_comp1_t1

0x1e81,	// (0x0001772b) bg_tb_trans_pane_cp05

0x3b3d,	// (0x000193e7) popup_imed_adjust2_window_g1

0x3b64,	// (0x0001940e) popup_imed_adjust2_window_t1

0x3b7c,	// (0x00019426) slider_imed_adjust_pane

0x3b90,	// (0x0001943a) slider_imed_adjust_pane_g1

0x3ba0,	// (0x0001944a) slider_imed_adjust_pane_g2

0x3bb0,	// (0x0001945a) slider_imed_adjust_pane_g3

0x3bc1,	// (0x0001946b) slider_imed_adjust_pane_g4

0x0003,

0xf773,	// (0x0002501d) slider_imed_adjust_pane_g

0xbb4c,	// (0x000213f6) aid_size_cell_clipart2

0xbb58,	// (0x00021402) grid_imed_clipart_pane

0x3bd2,	// (0x0001947c) scroll_pane_cp031

0xbb62,	// (0x0002140c) cell_imed_clipart_pane_ParamLimits

0xbb62,	// (0x0002140c) cell_imed_clipart_pane

0xbb84,	// (0x0002142e) cell_imed_clipart_pane_g1

0x0838,	// (0x000160e2) grid_highlight_pane_cp014

0xb970,	// (0x0002121a) main_clock2_pane_g1_ParamLimits

0xb970,	// (0x0002121a) main_clock2_pane_g1

0xba5b,	// (0x00021305) aid_call2_pane_cp10

0xba6d,	// (0x00021317) aid_call_pane_cp10

0x1bbf,	// (0x00017469) popup_clock_analogue_window_cp10_g1

0x1bbf,	// (0x00017469) popup_clock_analogue_window_cp10_g2

0x7890,	// (0x0001d13a) popup_clock_analogue_window_cp10_g3

0x7890,	// (0x0001d13a) popup_clock_analogue_window_cp10_g4

0x1bbf,	// (0x00017469) popup_clock_analogue_window_cp10_g5

0x0004,

0xf761,	// (0x0002500b) popup_clock_analogue_window_cp10_g

0xba7f,	// (0x00021329) popup_clock_analogue_window_cp10_t1

0x78a6,	// (0x0001d150) clock_digital_number_pane_cp10_ParamLimits

0x78a6,	// (0x0001d150) clock_digital_number_pane_cp10

0x78c0,	// (0x0001d16a) clock_digital_number_pane_cp11_ParamLimits

0x78c0,	// (0x0001d16a) clock_digital_number_pane_cp11

0x78da,	// (0x0001d184) clock_digital_number_pane_cp12_ParamLimits

0x78da,	// (0x0001d184) clock_digital_number_pane_cp12

0x78f4,	// (0x0001d19e) clock_digital_number_pane_cp13_ParamLimits

0x78f4,	// (0x0001d19e) clock_digital_number_pane_cp13

0x790e,	// (0x0001d1b8) clock_digital_separator_pane_cp10_ParamLimits

0x790e,	// (0x0001d1b8) clock_digital_separator_pane_cp10

0x7928,	// (0x0001d1d2) popup_clock_digital_window_cp02_t1_ParamLimits

0x7928,	// (0x0001d1d2) popup_clock_digital_window_cp02_t1

0x0f1b,	// (0x000167c5) clock_digital_number_pane_cp10_g1

0x0f1b,	// (0x000167c5) clock_digital_number_pane_cp10_g2

0x0001,

0xf77c,	// (0x00025026) clock_digital_number_pane_cp10_g

0x0f1b,	// (0x000167c5) clock_digital_separator_pane_cp10_g1

0x0f1b,	// (0x000167c5) clock_digital_separator_pane_g2_cp10

0x1d4a,	// (0x000175f4) navi_pane_vded_g4

0x1d53,	// (0x000175fd) navi_pane_vded_g5

0x1d5c,	// (0x00017606) navi_pane_vded_t1

0x7203,	// (0x0001caad) main_vded_pane

0xbb8d,	// (0x00021437) main_vded_pane_g1

0xbb99,	// (0x00021443) main_vded_pane_g2

0xbba3,	// (0x0002144d) main_vded_pane_g3

0x0002,

0xf781,	// (0x0002502b) main_vded_pane_g

0xbbad,	// (0x00021457) main_vded_pane_t1

0xbbbb,	// (0x00021465) main_vded_pane_t2

0x0001,

0xf788,	// (0x00025032) main_vded_pane_t

0xbbc9,	// (0x00021473) vded_slider_pane

0xbbd3,	// (0x0002147d) vded_video_pane

0x3bda,	// (0x00019484) vded_video_pane_g1

0xbbdd,	// (0x00021487) vded_video_pane_g2

0x12b7,	// (0x00016b61) vded_video_pane_g3

0x0002,

0xf78d,	// (0x00025037) vded_video_pane_g

0x3be4,	// (0x0001948e) vded_slider_pane_g1

0x33ea,	// (0x00018c94) vded_slider_pane_g2

0x3bed,	// (0x00019497) vded_slider_pane_g3

0x3bf6,	// (0x000194a0) vded_slider_pane_g4

0x3bff,	// (0x000194a9) vded_slider_pane_g5

0x0004,

0xf794,	// (0x0002503e) vded_slider_pane_g

0xb84a,	// (0x000210f4) mup3_rocker_pane_ParamLimits

0xb84a,	// (0x000210f4) mup3_rocker_pane

0xbbe6,	// (0x00021490) mup3_control_keys_pane_g1

0xbbee,	// (0x00021498) mup3_control_keys_pane_g2

0xbbf6,	// (0x000214a0) mup3_control_keys_pane_g3

0xbbfe,	// (0x000214a8) mup3_control_keys_pane_g4

0x0003,

0xf79f,	// (0x00025049) mup3_control_keys_pane_g

0x71c3,	// (0x0001ca6d) popup_toolbar2_fixed_window_cp01_ParamLimits

0x71c3,	// (0x0001ca6d) popup_toolbar2_fixed_window_cp01

0xb864,	// (0x0002110e) popup_toolbar2_fixed_window_cp02_ParamLimits

0xb864,	// (0x0002110e) popup_toolbar2_fixed_window_cp02

0x25fb,	// (0x00017ea5) popup_call2_audio_second_window_t4_ParamLimits

0x25fb,	// (0x00017ea5) popup_call2_audio_second_window_t4

0x2b37,	// (0x000183e1) popup_call2_audio_first_window_t6_ParamLimits

0x2b37,	// (0x000183e1) popup_call2_audio_first_window_t6

0x2d75,	// (0x0001861f) popup_call2_audio_out_window_t6_ParamLimits

0x2d75,	// (0x0001861f) popup_call2_audio_out_window_t6

0x7203,	// (0x0001caad) main_vitu_pane

0x0f90,	// (0x0001683a) aid_size_cell_itu_ParamLimits

0x0f90,	// (0x0001683a) aid_size_cell_itu

0x0f90,	// (0x0001683a) bg_popup_window_pane_cp08_ParamLimits

0x0f90,	// (0x0001683a) bg_popup_window_pane_cp08

0x0f90,	// (0x0001683a) field_vitu_entry_pane_ParamLimits

0x0f90,	// (0x0001683a) field_vitu_entry_pane

0x0f90,	// (0x0001683a) grid_vitu_function_pane_ParamLimits

0x0f90,	// (0x0001683a) grid_vitu_function_pane

0x0f90,	// (0x0001683a) grid_vitu_itu_pane_ParamLimits

0x0f90,	// (0x0001683a) grid_vitu_itu_pane

0x0f90,	// (0x0001683a) cell_vitu_itu_pane_ParamLimits

0x0f90,	// (0x0001683a) cell_vitu_itu_pane

0x0f90,	// (0x0001683a) cell_vitu_function_pane_ParamLimits

0x0f90,	// (0x0001683a) cell_vitu_function_pane

0x08a7,	// (0x00016151) bg_popup_sub_pane_cp08_ParamLimits

0x08a7,	// (0x00016151) bg_popup_sub_pane_cp08

0x1289,	// (0x00016b33) field_vitu_entry_pane_t1_ParamLimits

0x1289,	// (0x00016b33) field_vitu_entry_pane_t1

0x3c08,	// (0x000194b2) field_vitu_entry_pane_t2_ParamLimits

0x3c08,	// (0x000194b2) field_vitu_entry_pane_t2

0x0001,

0xf7a8,	// (0x00025052) field_vitu_entry_pane_t_ParamLimits

0xf7a8,	// (0x00025052) field_vitu_entry_pane_t

0x3311,	// (0x00018bbb) bg_button_pane_cp05_ParamLimits

0x3311,	// (0x00018bbb) bg_button_pane_cp05

0x3c25,	// (0x000194cf) cell_vitu_itu_pane_g1

0x1e59,	// (0x00017703) cell_vitu_itu_pane_t1_ParamLimits

0x1e59,	// (0x00017703) cell_vitu_itu_pane_t1

0x1e59,	// (0x00017703) cell_vitu_itu_pane_t2_ParamLimits

0x1e59,	// (0x00017703) cell_vitu_itu_pane_t2

0x0002,

0xf7ad,	// (0x00025057) cell_vitu_itu_pane_t_ParamLimits

0xf7ad,	// (0x00025057) cell_vitu_itu_pane_t

0x0838,	// (0x000160e2) bg_button_pane_cp07

0x12b7,	// (0x00016b61) cell_vitu_function_pane_g1

0x72dc,	// (0x0001cb86) main_calc_pane_g1

0x6fae,	// (0x0001c858) aid_visual_content_pane

0x7203,	// (0x0001caad) main_vradio_pane

0x0fac,	// (0x00016856) main_vradio_pane_g1_ParamLimits

0x0fac,	// (0x00016856) main_vradio_pane_g1

0x0fac,	// (0x00016856) main_vradio_pane_g2_ParamLimits

0x0fac,	// (0x00016856) main_vradio_pane_g2

0x0001,

0xf7b4,	// (0x0002505e) main_vradio_pane_g_ParamLimits

0xf7b4,	// (0x0002505e) main_vradio_pane_g

0x1e6d,	// (0x00017717) main_vradio_pane_t1_ParamLimits

0x1e6d,	// (0x00017717) main_vradio_pane_t1

0x1e6d,	// (0x00017717) main_vradio_pane_t2_ParamLimits

0x1e6d,	// (0x00017717) main_vradio_pane_t2

0x1e6d,	// (0x00017717) main_vradio_pane_t3_ParamLimits

0x1e6d,	// (0x00017717) main_vradio_pane_t3

0x0002,

0xf7b9,	// (0x00025063) main_vradio_pane_t_ParamLimits

0xf7b9,	// (0x00025063) main_vradio_pane_t

0x0f90,	// (0x0001683a) vradio_rocker_control_pane_ParamLimits

0x0f90,	// (0x0001683a) vradio_rocker_control_pane

0x0f90,	// (0x0001683a) vradio_station_info_pane_ParamLimits

0x0f90,	// (0x0001683a) vradio_station_info_pane

0x08a7,	// (0x00016151) vradio_frequency_info_pane_ParamLimits

0x08a7,	// (0x00016151) vradio_frequency_info_pane

0x12b7,	// (0x00016b61) vradio_station_info_pane_g1

0x1e59,	// (0x00017703) vradio_station_info_pane_t1_ParamLimits

0x1e59,	// (0x00017703) vradio_station_info_pane_t1

0x1e6d,	// (0x00017717) vradio_station_info_pane_t2_ParamLimits

0x1e6d,	// (0x00017717) vradio_station_info_pane_t2

0x0001,

0xf7c0,	// (0x0002506a) vradio_station_info_pane_t_ParamLimits

0xf7c0,	// (0x0002506a) vradio_station_info_pane_t

0x0838,	// (0x000160e2) vradio_tuning_pane

0xbc0e,	// (0x000214b8) vradio_rocker_control_pane_g1

0x3c41,	// (0x000194eb) vradio_rocker_control_pane_g2

0xbc16,	// (0x000214c0) vradio_rocker_control_pane_g3

0xbc1e,	// (0x000214c8) vradio_rocker_control_pane_g4

0xbc26,	// (0x000214d0) vradio_rocker_control_pane_g5

0x0004,

0xf7c5,	// (0x0002506f) vradio_rocker_control_pane_g

0x12b7,	// (0x00016b61) vradio_frequency_info_pane_g1

0x1289,	// (0x00016b33) vradio_frequency_info_pane_t1_ParamLimits

0x1289,	// (0x00016b33) vradio_frequency_info_pane_t1

0xbc2e,	// (0x000214d8) vradio_tuning_pane_g1

0xbc3b,	// (0x000214e5) vradio_tuning_pane_t1

0x6fca,	// (0x0001c874) area_side_right_pane_ParamLimits

0x6fca,	// (0x0001c874) area_side_right_pane

0x3165,	// (0x00018a0f) status_small_pane_g1

0x316d,	// (0x00018a17) status_small_pane_g2

0x3176,	// (0x00018a20) status_small_pane_g3

0x317f,	// (0x00018a29) status_small_pane_g4

0x0003,

0xf591,	// (0x00024e3b) status_small_pane_g

0x3188,	// (0x00018a32) status_small_pane_t1

0x7203,	// (0x0001caad) main_video3_pane

0x3c49,	// (0x000194f3) cams_zoom_vslider_pane

0x3c51,	// (0x000194fb) image3_wide_pane_ParamLimits

0x3c51,	// (0x000194fb) image3_wide_pane

0x3c6b,	// (0x00019515) image3_wide_small_pane

0x3c77,	// (0x00019521) main_video3_pane_g1_ParamLimits

0x3c77,	// (0x00019521) main_video3_pane_g1

0x3c93,	// (0x0001953d) main_video3_pane_g2_ParamLimits

0x3c93,	// (0x0001953d) main_video3_pane_g2

0x0001,

0xf7d0,	// (0x0002507a) main_video3_pane_g_ParamLimits

0xf7d0,	// (0x0002507a) main_video3_pane_g

0x3caf,	// (0x00019559) main_video3_pane_t1_ParamLimits

0x3caf,	// (0x00019559) main_video3_pane_t1

0x3cf6,	// (0x000195a0) main_video3_pane_t2_ParamLimits

0x3cf6,	// (0x000195a0) main_video3_pane_t2

0x3d21,	// (0x000195cb) main_video3_pane_t3_ParamLimits

0x3d21,	// (0x000195cb) main_video3_pane_t3

0x0002,

0xf7d5,	// (0x0002507f) main_video3_pane_t_ParamLimits

0xf7d5,	// (0x0002507f) main_video3_pane_t

0x3d4e,	// (0x000195f8) cams_zoom_vslider_pane_g1

0x3d57,	// (0x00019601) cams_zoom_vslider_pane_g2

0x0001,

0xf7dc,	// (0x00025086) cams_zoom_vslider_pane_g

0x3d5f,	// (0x00019609) small_slider_vertical_pane

0x12b7,	// (0x00016b61) small_slider_vertical_pane_g1

0x12b7,	// (0x00016b61) small_slider_vertical_pane_g2

0x3d67,	// (0x00019611) small_slider_vertical_pane_g3

0x0002,

0xf7e1,	// (0x0002508b) small_slider_vertical_pane_g

0x7203,	// (0x0001caad) main_hwr_training_pane

0x3d70,	// (0x0001961a) hwr_training_instruct_pane_ParamLimits

0x3d70,	// (0x0001961a) hwr_training_instruct_pane

0xbc4a,	// (0x000214f4) hwr_training_navi_pane_ParamLimits

0xbc4a,	// (0x000214f4) hwr_training_navi_pane

0xbc64,	// (0x0002150e) hwr_training_write_pane_ParamLimits

0xbc64,	// (0x0002150e) hwr_training_write_pane

0x0838,	// (0x000160e2) bg_frame_shadow_pane

0x3da7,	// (0x00019651) hwr_training_write_pane_g1

0x3daf,	// (0x00019659) hwr_training_write_pane_g2

0x3db7,	// (0x00019661) hwr_training_write_pane_g3

0x3dbf,	// (0x00019669) hwr_training_write_pane_g4

0x3dc7,	// (0x00019671) hwr_training_write_pane_g5

0x3dcf,	// (0x00019679) hwr_training_write_pane_g6

0x3dd7,	// (0x00019681) hwr_training_write_pane_g7

0x0006,

0xf7e8,	// (0x00025092) hwr_training_write_pane_g

0x7949,	// (0x0001d1f3) hwr_training_navi_pane_g1_ParamLimits

0x7949,	// (0x0001d1f3) hwr_training_navi_pane_g1

0x795b,	// (0x0001d205) hwr_training_navi_pane_g2_ParamLimits

0x795b,	// (0x0001d205) hwr_training_navi_pane_g2

0x796d,	// (0x0001d217) hwr_training_navi_pane_g3_ParamLimits

0x796d,	// (0x0001d217) hwr_training_navi_pane_g3

0x797d,	// (0x0001d227) hwr_training_navi_pane_g4_ParamLimits

0x797d,	// (0x0001d227) hwr_training_navi_pane_g4

0x0004,

0xf7f7,	// (0x000250a1) hwr_training_navi_pane_g_ParamLimits

0xf7f7,	// (0x000250a1) hwr_training_navi_pane_g

0x7997,	// (0x0001d241) hwr_training_navi_pane_t1

0xbc9c,	// (0x00021546) list_single_hwr_training_instruct_pane_ParamLimits

0xbc9c,	// (0x00021546) list_single_hwr_training_instruct_pane

0x3e2e,	// (0x000196d8) list_single_hwr_training_instruct_pane_t1

0x35c0,	// (0x00018e6a) bg_frame_shadow_pane_g1

0x3e3d,	// (0x000196e7) bg_frame_shadow_pane_g2

0x3e45,	// (0x000196ef) bg_frame_shadow_pane_g3

0x3e4d,	// (0x000196f7) bg_frame_shadow_pane_g4

0x3e55,	// (0x000196ff) bg_frame_shadow_pane_g5

0x3e5d,	// (0x00019707) bg_frame_shadow_pane_g6

0x3e65,	// (0x0001970f) bg_frame_shadow_pane_g7

0x110e,	// (0x000169b8) bg_frame_shadow_pane_g8

0x0007,

0xf802,	// (0x000250ac) bg_frame_shadow_pane_g

0x7203,	// (0x0001caad) main_video_tele_dialer_pane

0x79a5,	// (0x0001d24f) aid_size_cell_video_keypad_ParamLimits

0x79a5,	// (0x0001d24f) aid_size_cell_video_keypad

0x79b5,	// (0x0001d25f) grid_video_dialer_keypad_pane_ParamLimits

0x79b5,	// (0x0001d25f) grid_video_dialer_keypad_pane

0x79e9,	// (0x0001d293) video_down_pane_cp_ParamLimits

0x79e9,	// (0x0001d293) video_down_pane_cp

0x79f7,	// (0x0001d2a1) cell_video_dialer_keypad_pane_ParamLimits

0x79f7,	// (0x0001d2a1) cell_video_dialer_keypad_pane

0x3e6d,	// (0x00019717) bg_button_pane_cp08_ParamLimits

0x3e6d,	// (0x00019717) bg_button_pane_cp08

0xbcdd,	// (0x00021587) cell_video_dialer_keypad_pane_g1_ParamLimits

0xbcdd,	// (0x00021587) cell_video_dialer_keypad_pane_g1

0xb83e,	// (0x000210e8) mup3_rocker2_pane_ParamLimits

0xb83e,	// (0x000210e8) mup3_rocker2_pane

0x12b7,	// (0x00016b61) mup3_rocker2_pane_g1

0x7669,	// (0x0001cf13) main_dialer2_pane

0x7203,	// (0x0001caad) main_mp4_pane

0x7a2a,	// (0x0001d2d4) main_mp4_pane_g1_ParamLimits

0x7a2a,	// (0x0001d2d4) main_mp4_pane_g1

0x7a38,	// (0x0001d2e2) main_mp4_pane_g2_ParamLimits

0x7a38,	// (0x0001d2e2) main_mp4_pane_g2

0x7a46,	// (0x0001d2f0) main_mp4_pane_g3_ParamLimits

0x7a46,	// (0x0001d2f0) main_mp4_pane_g3

0x7a8b,	// (0x0001d335) main_mp4_pane_g4_ParamLimits

0x7a8b,	// (0x0001d335) main_mp4_pane_g4

0x7ab9,	// (0x0001d363) main_mp4_pane_g5_ParamLimits

0x7ab9,	// (0x0001d363) main_mp4_pane_g5

0x0007,

0xf822,	// (0x000250cc) main_mp4_pane_g_ParamLimits

0xf822,	// (0x000250cc) main_mp4_pane_g

0x7b2d,	// (0x0001d3d7) main_mp4_pane_t1_ParamLimits

0x7b2d,	// (0x0001d3d7) main_mp4_pane_t1

0x7b89,	// (0x0001d433) main_mp4_pane_t2_ParamLimits

0x7b89,	// (0x0001d433) main_mp4_pane_t2

0x3ff5,	// (0x0001989f) main_mp4_pane_t3_ParamLimits

0x3ff5,	// (0x0001989f) main_mp4_pane_t3

0x7bdb,	// (0x0001d485) main_mp4_pane_t4_ParamLimits

0x7bdb,	// (0x0001d485) main_mp4_pane_t4

0x0003,

0xf833,	// (0x000250dd) main_mp4_pane_t_ParamLimits

0xf833,	// (0x000250dd) main_mp4_pane_t

0x7c1f,	// (0x0001d4c9) mp4_progress_pane_ParamLimits

0x7c1f,	// (0x0001d4c9) mp4_progress_pane

0x7c69,	// (0x0001d513) mp4_rocker_pane_ParamLimits

0x7c69,	// (0x0001d513) mp4_rocker_pane

0x40d1,	// (0x0001997b) mp4_progress_pane_t1

0x40ea,	// (0x00019994) mp4_progress_pane_t2

0x0001,

0xf83c,	// (0x000250e6) mp4_progress_pane_t

0x4103,	// (0x000199ad) mup_progress_pane_cp04

0x4b0a,	// (0x0001a3b4) mp4_rocker_pane_g1

0x7c89,	// (0x0001d533) aid_cell_size_keypad2_ParamLimits

0x7c89,	// (0x0001d533) aid_cell_size_keypad2

0x7c99,	// (0x0001d543) dialer2_ne_pane_ParamLimits

0x7c99,	// (0x0001d543) dialer2_ne_pane

0x7ca7,	// (0x0001d551) grid_dialer2_keypad_pane_ParamLimits

0x7ca7,	// (0x0001d551) grid_dialer2_keypad_pane

0x3ce8,	// (0x00019592) bg_popup_call_pane_cp07_ParamLimits

0x3ce8,	// (0x00019592) bg_popup_call_pane_cp07

0xbd14,	// (0x000215be) dialer2_ne_pane_t1_ParamLimits

0xbd14,	// (0x000215be) dialer2_ne_pane_t1

0x7cb7,	// (0x0001d561) cell_dialer2_keypad_pane_ParamLimits

0x7cb7,	// (0x0001d561) cell_dialer2_keypad_pane

0x4128,	// (0x000199d2) bg_button_pane_pane_cp04_ParamLimits

0x4128,	// (0x000199d2) bg_button_pane_pane_cp04

0xbd39,	// (0x000215e3) cell_dialer2_keypad_pane_g1_ParamLimits

0xbd39,	// (0x000215e3) cell_dialer2_keypad_pane_g1

0x8f94,	// (0x0001e83e) aid_placing_vt_set_content_ParamLimits

0x8f94,	// (0x0001e83e) aid_placing_vt_set_content

0x8fc0,	// (0x0001e86a) aid_placing_vt_set_title_ParamLimits

0x8fc0,	// (0x0001e86a) aid_placing_vt_set_title

0x7203,	// (0x0001caad) main_image3_pane

0x7cfe,	// (0x0001d5a8) area_side_right_pane_cp01_ParamLimits

0x7cfe,	// (0x0001d5a8) area_side_right_pane_cp01

0x7d2b,	// (0x0001d5d5) main_image3_pane_g1_ParamLimits

0x7d2b,	// (0x0001d5d5) main_image3_pane_g1

0x7d39,	// (0x0001d5e3) main_image3_pane_g2_ParamLimits

0x7d39,	// (0x0001d5e3) main_image3_pane_g2

0x7d52,	// (0x0001d5fc) main_image3_pane_g3_ParamLimits

0x7d52,	// (0x0001d5fc) main_image3_pane_g3

0x7d6b,	// (0x0001d615) main_image3_pane_g4_ParamLimits

0x7d6b,	// (0x0001d615) main_image3_pane_g4

0x0003,

0xf84b,	// (0x000250f5) main_image3_pane_g_ParamLimits

0xf84b,	// (0x000250f5) main_image3_pane_g

0x7d84,	// (0x0001d62e) main_image3_pane_t1_ParamLimits

0x7d84,	// (0x0001d62e) main_image3_pane_t1

0x7da9,	// (0x0001d653) main_image3_pane_t2_ParamLimits

0x7da9,	// (0x0001d653) main_image3_pane_t2

0x7dc8,	// (0x0001d672) main_image3_pane_t3_ParamLimits

0x7dc8,	// (0x0001d672) main_image3_pane_t3

0x0003,

0xf854,	// (0x000250fe) main_image3_pane_t_ParamLimits

0xf854,	// (0x000250fe) main_image3_pane_t

0x0f90,	// (0x0001683a) grid_sctrl_middle_pane_cp01_ParamLimits

0x0f90,	// (0x0001683a) grid_sctrl_middle_pane_cp01

0xbda1,	// (0x0002164b) cell_sctrl_middle_pane_cp01_ParamLimits

0xbda1,	// (0x0002164b) cell_sctrl_middle_pane_cp01

0xbdb2,	// (0x0002165c) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0xbdb2,	// (0x0002165c) cell_sctrl_middle_pane_cp01_g1

0x7203,	// (0x0001caad) main_call4_pane

0x7e29,	// (0x0001d6d3) aid_size_button_call4_ParamLimits

0x7e29,	// (0x0001d6d3) aid_size_button_call4

0x7e5f,	// (0x0001d709) call4_windows_pane_ParamLimits

0x7e5f,	// (0x0001d709) call4_windows_pane

0x7e74,	// (0x0001d71e) grid_call4_button_pane_ParamLimits

0x7e74,	// (0x0001d71e) grid_call4_button_pane

0xbdcb,	// (0x00021675) call4_windows_conf_pane

0xbde2,	// (0x0002168c) popup_call4_audio_first_window_ParamLimits

0xbde2,	// (0x0002168c) popup_call4_audio_first_window

0xbe32,	// (0x000216dc) popup_call4_audio_second_window_ParamLimits

0xbe32,	// (0x000216dc) popup_call4_audio_second_window

0xbe4b,	// (0x000216f5) popup_call4_audio_wait_window_ParamLimits

0xbe4b,	// (0x000216f5) popup_call4_audio_wait_window

0x7e96,	// (0x0001d740) cell_call4_button_pane_ParamLimits

0x7e96,	// (0x0001d740) cell_call4_button_pane

0xbe59,	// (0x00021703) bg_button_pane_cp09_ParamLimits

0xbe59,	// (0x00021703) bg_button_pane_cp09

0x7eb9,	// (0x0001d763) cell_call4_button_pane_g1_ParamLimits

0x7eb9,	// (0x0001d763) cell_call4_button_pane_g1

0xbe65,	// (0x0002170f) cell_call4_button_pane_t1_ParamLimits

0xbe65,	// (0x0002170f) cell_call4_button_pane_t1

0x41a0,	// (0x00019a4a) popup_call4_audio_conf_window_ParamLimits

0x41a0,	// (0x00019a4a) popup_call4_audio_conf_window

0xb871,	// (0x0002111b) mup3_progress_pane_t1_ParamLimits

0xb890,	// (0x0002113a) mup3_progress_pane_t2_ParamLimits

0x3918,	// (0x000191c2) mup3_progress_pane_t3_ParamLimits

0xf729,	// (0x00024fd3) mup3_progress_pane_t_ParamLimits

0x3935,	// (0x000191df) mup_progress_pane_cp03_ParamLimits

0xbc06,	// (0x000214b0) mup3_control_keys_pane_g4_copy1

0x7c4d,	// (0x0001d4f7) mp4_rocker2_pane_ParamLimits

0x7c4d,	// (0x0001d4f7) mp4_rocker2_pane

0x41bc,	// (0x00019a66) mp4_rocker2_pane_g1

0x41b4,	// (0x00019a5e) mp4_rocker2_pane_g2

0x7ef8,	// (0x0001d7a2) mp4_rocker2_pane_g3

0x7f00,	// (0x0001d7aa) mp4_rocker2_pane_g4

0x7f08,	// (0x0001d7b2) mp4_rocker2_pane_g5

0x0004,

0xf85d,	// (0x00025107) mp4_rocker2_pane_g

0x7203,	// (0x0001caad) main_camera4_pane

0x7203,	// (0x0001caad) main_video4_pane

0x79c5,	// (0x0001d26f) main_video_tele_dialer_pane_t1_ParamLimits

0x79c5,	// (0x0001d26f) main_video_tele_dialer_pane_t1

0x79d7,	// (0x0001d281) main_video_tele_dialer_pane_t2_ParamLimits

0x79d7,	// (0x0001d281) main_video_tele_dialer_pane_t2

0x0001,

0xf813,	// (0x000250bd) main_video_tele_dialer_pane_t_ParamLimits

0xf813,	// (0x000250bd) main_video_tele_dialer_pane_t

0x7f28,	// (0x0001d7d2) cam4_autofocus_pane_ParamLimits

0x7f28,	// (0x0001d7d2) cam4_autofocus_pane

0x7f42,	// (0x0001d7ec) cam4_image_uncrop_pane_ParamLimits

0x7f42,	// (0x0001d7ec) cam4_image_uncrop_pane

0x7f59,	// (0x0001d803) cam4_indicators_pane_ParamLimits

0x7f59,	// (0x0001d803) cam4_indicators_pane

0x7f75,	// (0x0001d81f) main_camera4_pane_g1_ParamLimits

0x7f75,	// (0x0001d81f) main_camera4_pane_g1

0x7f81,	// (0x0001d82b) main_camera4_pane_g2_ParamLimits

0x7f81,	// (0x0001d82b) main_camera4_pane_g2

0x7f81,	// (0x0001d82b) main_camera4_pane_g3_ParamLimits

0x7f81,	// (0x0001d82b) main_camera4_pane_g3

0x7f8d,	// (0x0001d837) main_camera4_pane_g4_ParamLimits

0x7f8d,	// (0x0001d837) main_camera4_pane_g4

0x7f99,	// (0x0001d843) main_camera4_pane_g5_ParamLimits

0x7f99,	// (0x0001d843) main_camera4_pane_g5

0x0005,

0xf868,	// (0x00025112) main_camera4_pane_g_ParamLimits

0xf868,	// (0x00025112) main_camera4_pane_g

0x7fb3,	// (0x0001d85d) main_camera4_pane_t1_ParamLimits

0x7fb3,	// (0x0001d85d) main_camera4_pane_t1

0x5728,	// (0x0001afd2) bg_tb_trans_pane_cp06

0x7fdf,	// (0x0001d889) cam4_indicators_pane_g1

0x7ff0,	// (0x0001d89a) cam4_indicators_pane_g2

0x0002,

0xf883,	// (0x0002512d) cam4_indicators_pane_g

0x800e,	// (0x0001d8b8) cam4_indicators_pane_t1

0x8038,	// (0x0001d8e2) main_video4_pane_g1_ParamLimits

0x8038,	// (0x0001d8e2) main_video4_pane_g1

0x8044,	// (0x0001d8ee) main_video4_pane_g2_ParamLimits

0x8044,	// (0x0001d8ee) main_video4_pane_g2

0x8050,	// (0x0001d8fa) main_video4_pane_g3_ParamLimits

0x8050,	// (0x0001d8fa) main_video4_pane_g3

0x805c,	// (0x0001d906) main_video4_pane_g4_ParamLimits

0x805c,	// (0x0001d906) main_video4_pane_g4

0x0004,

0xf88a,	// (0x00025134) main_video4_pane_g_ParamLimits

0xf88a,	// (0x00025134) main_video4_pane_g

0x807c,	// (0x0001d926) vid4_indicators_pane_ParamLimits

0x807c,	// (0x0001d926) vid4_indicators_pane

0x809b,	// (0x0001d945) video4_image_uncrop_cif_pane_ParamLimits

0x809b,	// (0x0001d945) video4_image_uncrop_cif_pane

0x80aa,	// (0x0001d954) video4_image_uncrop_nhd_pane_ParamLimits

0x80aa,	// (0x0001d954) video4_image_uncrop_nhd_pane

0x7f42,	// (0x0001d7ec) video4_image_uncrop_vga_pane_ParamLimits

0x7f42,	// (0x0001d7ec) video4_image_uncrop_vga_pane

0x765b,	// (0x0001cf05) bg_tb_trans_pane_cp07

0x80c1,	// (0x0001d96b) vid4_indicators_pane_g1

0x80d5,	// (0x0001d97f) vid4_indicators_pane_g2

0x80e9,	// (0x0001d993) vid4_indicators_pane_g3

0x0004,

0xf895,	// (0x0002513f) vid4_indicators_pane_g

0x8118,	// (0x0001d9c2) vid4_indicators_pane_t1

0xbe9b,	// (0x00021745) cam4_autofocus_pane_g1

0xbea3,	// (0x0002174d) cam4_autofocus_pane_g2

0xbeab,	// (0x00021755) cam4_autofocus_pane_g3

0x0002,

0xf8a0,	// (0x0002514a) cam4_autofocus_pane_g

0xbeb3,	// (0x0002175d) cam4_autofocus_pane_g3_copy1

0xbcc1,	// (0x0002156b) video_down_pane_cp_t1

0xbccf,	// (0x00021579) video_down_pane_cp_t2

0x0001,

0xf818,	// (0x000250c2) video_down_pane_cp_t

0x71f5,	// (0x0001ca9f) popup_vitu2_window_ParamLimits

0x71f5,	// (0x0001ca9f) popup_vitu2_window

0x812f,	// (0x0001d9d9) aid_size_cell2_itu2_ParamLimits

0x812f,	// (0x0001d9d9) aid_size_cell2_itu2

0x814b,	// (0x0001d9f5) aid_size_cell_itu2_ParamLimits

0x814b,	// (0x0001d9f5) aid_size_cell_itu2

0x8185,	// (0x0001da2f) bg_popup_window_pane_cp09_ParamLimits

0x8185,	// (0x0001da2f) bg_popup_window_pane_cp09

0x8193,	// (0x0001da3d) field_vitu2_entry_pane_ParamLimits

0x8193,	// (0x0001da3d) field_vitu2_entry_pane

0x81b1,	// (0x0001da5b) grid_vitu2_function_pane_ParamLimits

0x81b1,	// (0x0001da5b) grid_vitu2_function_pane

0x81f1,	// (0x0001da9b) grid_vitu2_itu_pane_ParamLimits

0x81f1,	// (0x0001da9b) grid_vitu2_itu_pane

0x8255,	// (0x0001daff) cell_vitu2_itu_pane_ParamLimits

0x8255,	// (0x0001daff) cell_vitu2_itu_pane

0x826e,	// (0x0001db18) cell_vitu2_function_pane_ParamLimits

0x826e,	// (0x0001db18) cell_vitu2_function_pane

0x42c9,	// (0x00019b73) bg_popup_call_pane_cp08_ParamLimits

0x42c9,	// (0x00019b73) bg_popup_call_pane_cp08

0x42e0,	// (0x00019b8a) field_vitu2_entry_pane_g1

0x42ec,	// (0x00019b96) field_vitu2_entry_pane_g2

0x0002,

0xf8a7,	// (0x00025151) field_vitu2_entry_pane_g

0xbebb,	// (0x00021765) field_vitu2_entry_pane_t1_ParamLimits

0xbebb,	// (0x00021765) field_vitu2_entry_pane_t1

0x42f8,	// (0x00019ba2) field_vitu2_entry_pane_t2_ParamLimits

0x42f8,	// (0x00019ba2) field_vitu2_entry_pane_t2

0x0001,

0xf8ae,	// (0x00025158) field_vitu2_entry_pane_t_ParamLimits

0xf8ae,	// (0x00025158) field_vitu2_entry_pane_t

0x77fe,	// (0x0001d0a8) bg_button_pane_cp010_ParamLimits

0x77fe,	// (0x0001d0a8) bg_button_pane_cp010

0x82af,	// (0x0001db59) cell_vitu2_itu_pane_g1

0x82d5,	// (0x0001db7f) cell_vitu2_itu_pane_t1_ParamLimits

0x82d5,	// (0x0001db7f) cell_vitu2_itu_pane_t1

0x8321,	// (0x0001dbcb) cell_vitu2_itu_pane_t2_ParamLimits

0x8321,	// (0x0001dbcb) cell_vitu2_itu_pane_t2

0x0002,

0xf8b8,	// (0x00025162) cell_vitu2_itu_pane_t_ParamLimits

0xf8b8,	// (0x00025162) cell_vitu2_itu_pane_t

0x765b,	// (0x0001cf05) bg_button_pane_cp011

0x83e9,	// (0x0001dc93) cell_vitu2_function_pane_g1

0x7203,	// (0x0001caad) main_myfav_hc_pane

0x7e0a,	// (0x0001d6b4) popup_image3_note_pane_ParamLimits

0x7e0a,	// (0x0001d6b4) popup_image3_note_pane

0x7e18,	// (0x0001d6c2) popup_image3_tool_bar_pane_ParamLimits

0x7e18,	// (0x0001d6c2) popup_image3_tool_bar_pane

0x8397,	// (0x0001dc41) cell_vitu2_itu_pane_t3_ParamLimits

0x8397,	// (0x0001dc41) cell_vitu2_itu_pane_t3

0x0838,	// (0x000160e2) bg_popup_trans_pane

0x431d,	// (0x00019bc7) grid_image3_tool_bar_pane

0x4327,	// (0x00019bd1) bg_popup_trans_pane_g1

0x14c8,	// (0x00016d72) bg_popup_trans_pane_g2

0x432f,	// (0x00019bd9) bg_popup_trans_pane_g3

0x4337,	// (0x00019be1) bg_popup_trans_pane_g4

0x433f,	// (0x00019be9) bg_popup_trans_pane_g5

0x4347,	// (0x00019bf1) bg_popup_trans_pane_g6

0x434f,	// (0x00019bf9) bg_popup_trans_pane_g7

0x4357,	// (0x00019c01) bg_popup_trans_pane_g8

0x14a8,	// (0x00016d52) bg_popup_trans_pane_g9

0x0008,

0xf8bf,	// (0x00025169) bg_popup_trans_pane_g

0x435f,	// (0x00019c09) cell_image3_tool_bar_pane_ParamLimits

0x435f,	// (0x00019c09) cell_image3_tool_bar_pane

0x12b7,	// (0x00016b61) cell_image3_tool_bar_pane_g1

0x0838,	// (0x000160e2) bg_popup_trans_pane_cp1

0x4373,	// (0x00019c1d) popup_image3_note_pane_t1

0x4381,	// (0x00019c2b) popup_image3_note_pane_t2

0x438f,	// (0x00019c39) popup_image3_note_pane_t3

0x0002,

0xf8d2,	// (0x0002517c) popup_image3_note_pane_t

0x439d,	// (0x00019c47) popup_image3_note_pane_t3_copy1

0xbeee,	// (0x00021798) bg_myfav_hc_instruction_pane_ParamLimits

0xbeee,	// (0x00021798) bg_myfav_hc_instruction_pane

0xbf06,	// (0x000217b0) cell_myfav_contact_pane_ParamLimits

0xbf06,	// (0x000217b0) cell_myfav_contact_pane

0xbf20,	// (0x000217ca) cell_myfav_contact_pane_cp1_ParamLimits

0xbf20,	// (0x000217ca) cell_myfav_contact_pane_cp1

0xbf38,	// (0x000217e2) cell_myfav_contact_pane_cp2_ParamLimits

0xbf38,	// (0x000217e2) cell_myfav_contact_pane_cp2

0xbf50,	// (0x000217fa) cell_myfav_contact_pane_cp3_ParamLimits

0xbf50,	// (0x000217fa) cell_myfav_contact_pane_cp3

0xbf67,	// (0x00021811) cell_myfav_contact_pane_cp4_ParamLimits

0xbf67,	// (0x00021811) cell_myfav_contact_pane_cp4

0xbf7d,	// (0x00021827) cell_myfav_contact_pane_cp5_ParamLimits

0xbf7d,	// (0x00021827) cell_myfav_contact_pane_cp5

0xbf91,	// (0x0002183b) cell_myfav_contact_pane_cp6_ParamLimits

0xbf91,	// (0x0002183b) cell_myfav_contact_pane_cp6

0xbfa5,	// (0x0002184f) cell_myfav_contact_pane_cp7_ParamLimits

0xbfa5,	// (0x0002184f) cell_myfav_contact_pane_cp7

0x43ab,	// (0x00019c55) listscroll_gen_pane_cp05

0xbfbd,	// (0x00021867) main_myfav_hc_pane_g1_ParamLimits

0xbfbd,	// (0x00021867) main_myfav_hc_pane_g1

0xbfd3,	// (0x0002187d) main_myfav_hc_pane_g2_ParamLimits

0xbfd3,	// (0x0002187d) main_myfav_hc_pane_g2

0x0002,

0xf8d9,	// (0x00025183) main_myfav_hc_pane_g_ParamLimits

0xf8d9,	// (0x00025183) main_myfav_hc_pane_g

0xc001,	// (0x000218ab) main_myfav_hc_pane_t1_ParamLimits

0xc001,	// (0x000218ab) main_myfav_hc_pane_t1

0x43b4,	// (0x00019c5e) main_myfav_hc_pane_t2_ParamLimits

0x43b4,	// (0x00019c5e) main_myfav_hc_pane_t2

0x43c6,	// (0x00019c70) main_myfav_hc_pane_t3_ParamLimits

0x43c6,	// (0x00019c70) main_myfav_hc_pane_t3

0xc018,	// (0x000218c2) main_myfav_hc_pane_t4_ParamLimits

0xc018,	// (0x000218c2) main_myfav_hc_pane_t4

0x0004,

0xf8e0,	// (0x0002518a) main_myfav_hc_pane_t_ParamLimits

0xf8e0,	// (0x0002518a) main_myfav_hc_pane_t

0x12b7,	// (0x00016b61) bg_myfav_hc_instruction_pane_g1

0x43d8,	// (0x00019c82) cell_myfav_contact_pane_g1_ParamLimits

0x43d8,	// (0x00019c82) cell_myfav_contact_pane_g1

0x43d8,	// (0x00019c82) cell_myfav_contact_pane_g2_ParamLimits

0x43d8,	// (0x00019c82) cell_myfav_contact_pane_g2

0x43e4,	// (0x00019c8e) cell_myfav_contact_pane_g3_ParamLimits

0x43e4,	// (0x00019c8e) cell_myfav_contact_pane_g3

0x0fac,	// (0x00016856) cell_myfav_contact_pane_g4_ParamLimits

0x0fac,	// (0x00016856) cell_myfav_contact_pane_g4

0x43f1,	// (0x00019c9b) cell_myfav_contact_pane_g5_ParamLimits

0x43f1,	// (0x00019c9b) cell_myfav_contact_pane_g5

0x0004,

0xf8eb,	// (0x00025195) cell_myfav_contact_pane_g_ParamLimits

0xf8eb,	// (0x00025195) cell_myfav_contact_pane_g

0xbfe9,	// (0x00021893) main_myfav_hc_pane_g3_ParamLimits

0xbfe9,	// (0x00021893) main_myfav_hc_pane_g3

0x70fe,	// (0x0001c9a8) popup_adpt_find_window

0xc042,	// (0x000218ec) afind_page_pane_ParamLimits

0xc042,	// (0x000218ec) afind_page_pane

0xc04f,	// (0x000218f9) aid_size_cell_afind_ParamLimits

0xc04f,	// (0x000218f9) aid_size_cell_afind

0xc069,	// (0x00021913) bg_popup_sub_pane_cp09_ParamLimits

0xc069,	// (0x00021913) bg_popup_sub_pane_cp09

0xc076,	// (0x00021920) find_pane_cp01_ParamLimits

0xc076,	// (0x00021920) find_pane_cp01

0x43fd,	// (0x00019ca7) grid_afind_control_pane_ParamLimits

0x43fd,	// (0x00019ca7) grid_afind_control_pane

0xc083,	// (0x0002192d) grid_afind_pane_ParamLimits

0xc083,	// (0x0002192d) grid_afind_pane

0xc09f,	// (0x00021949) cell_afind_pane_ParamLimits

0xc09f,	// (0x00021949) cell_afind_pane

0x12b7,	// (0x00016b61) afind_page_pane_g1

0xc0e7,	// (0x00021991) afind_page_pane_g2

0xc0f0,	// (0x0002199a) afind_page_pane_g3

0x0002,

0xf8f6,	// (0x000251a0) afind_page_pane_g

0xc0f9,	// (0x000219a3) afind_page_pane_t1

0x4411,	// (0x00019cbb) cell_afind_grid_control_pane_ParamLimits

0x4411,	// (0x00019cbb) cell_afind_grid_control_pane

0x4128,	// (0x000199d2) bg_button_pane_cp69_ParamLimits

0x4128,	// (0x000199d2) bg_button_pane_cp69

0xc119,	// (0x000219c3) cell_afind_pane_g1_ParamLimits

0xc119,	// (0x000219c3) cell_afind_pane_g1

0xc126,	// (0x000219d0) cell_afind_pane_t1_ParamLimits

0xc126,	// (0x000219d0) cell_afind_pane_t1

0x12c1,	// (0x00016b6b) bg_button_pane_cp72

0x4420,	// (0x00019cca) cell_afind_grid_control_pane_g1

0xa9c6,	// (0x00020270) aid_image_placing_area_ParamLimits

0xa9c6,	// (0x00020270) aid_image_placing_area

0x0f9e,	// (0x00016848) field_vitu_entry_pane_g1_ParamLimits

0x0f9e,	// (0x00016848) field_vitu_entry_pane_g1

0x0f9e,	// (0x00016848) field_vitu_entry_pane_g2_ParamLimits

0x0f9e,	// (0x00016848) field_vitu_entry_pane_g2

0x0001,

0xf201,	// (0x00024aab) field_vitu_entry_pane_g_ParamLimits

0xf201,	// (0x00024aab) field_vitu_entry_pane_g

0x3c25,	// (0x000194cf) cell_vitu_itu_pane_g1_ParamLimits

0x3c08,	// (0x000194b2) cell_vitu_itu_pane_t3_ParamLimits

0x3c08,	// (0x000194b2) cell_vitu_itu_pane_t3

0x40d1,	// (0x0001997b) mp4_progress_pane_t1_ParamLimits

0x40ea,	// (0x00019994) mp4_progress_pane_t2_ParamLimits

0xf83c,	// (0x000250e6) mp4_progress_pane_t_ParamLimits

0x4103,	// (0x000199ad) mup_progress_pane_cp04_ParamLimits

0xc02c,	// (0x000218d6) main_myfav_hc_pane_t5_ParamLimits

0xc02c,	// (0x000218d6) main_myfav_hc_pane_t5

0x6fc2,	// (0x0001c86c) aid_zoom_text_primary

0x70fe,	// (0x0001c9a8) popup_adpt_find_window_ParamLimits

0x765b,	// (0x0001cf05) main_cam_set_pane

0x7f67,	// (0x0001d811) cam4_zoom_pane_ParamLimits

0x7f67,	// (0x0001d811) cam4_zoom_pane

0xc138,	// (0x000219e2) main_cam_set_pane_g1_ParamLimits

0xc138,	// (0x000219e2) main_cam_set_pane_g1

0xc146,	// (0x000219f0) main_cam_set_pane_g2_ParamLimits

0xc146,	// (0x000219f0) main_cam_set_pane_g2

0x0001,

0xf8fd,	// (0x000251a7) main_cam_set_pane_g_ParamLimits

0xf8fd,	// (0x000251a7) main_cam_set_pane_g

0xc152,	// (0x000219fc) main_cam_set_pane_t1_ParamLimits

0xc152,	// (0x000219fc) main_cam_set_pane_t1

0xc16e,	// (0x00021a18) main_cset_listscroll_pane_ParamLimits

0xc16e,	// (0x00021a18) main_cset_listscroll_pane

0xc1a0,	// (0x00021a4a) main_cset_slider_pane_ParamLimits

0xc1a0,	// (0x00021a4a) main_cset_slider_pane

0x4431,	// (0x00019cdb) main_cset_list_pane_ParamLimits

0x4431,	// (0x00019cdb) main_cset_list_pane

0x4441,	// (0x00019ceb) scroll_pane_cp028

0xc1bf,	// (0x00021a69) aid_area_touch_slider

0xc1db,	// (0x00021a85) cset_slider_pane

0xc1fe,	// (0x00021aa8) main_cset_slider_pane_g1

0xc213,	// (0x00021abd) main_cset_slider_pane_g2

0x0011,

0xf902,	// (0x000251ac) main_cset_slider_pane_g

0x447a,	// (0x00019d24) main_cset_slider_pane_t1

0xc2d5,	// (0x00021b7f) main_cset_slider_pane_t2

0xc2ef,	// (0x00021b99) main_cset_slider_pane_t3

0xc309,	// (0x00021bb3) main_cset_slider_pane_t4

0xc323,	// (0x00021bcd) main_cset_slider_pane_t5

0xc341,	// (0x00021beb) main_cset_slider_pane_t6

0xc358,	// (0x00021c02) main_cset_slider_pane_t7

0x000e,

0xf927,	// (0x000251d1) main_cset_slider_pane_t

0xc464,	// (0x00021d0e) cset_list_set_pane_ParamLimits

0xc464,	// (0x00021d0e) cset_list_set_pane

0x4514,	// (0x00019dbe) aid_position_infowindow_above

0x451c,	// (0x00019dc6) aid_position_infowindow_below

0x4524,	// (0x00019dce) cset_list_set_pane_g1_ParamLimits

0x4524,	// (0x00019dce) cset_list_set_pane_g1

0x4530,	// (0x00019dda) cset_list_set_pane_g3_ParamLimits

0x4530,	// (0x00019dda) cset_list_set_pane_g3

0x0001,

0xf946,	// (0x000251f0) cset_list_set_pane_g_ParamLimits

0xf946,	// (0x000251f0) cset_list_set_pane_g

0x453f,	// (0x00019de9) cset_list_set_pane_t1_ParamLimits

0x453f,	// (0x00019de9) cset_list_set_pane_t1

0x08a7,	// (0x00016151) list_highlight_pane_cp021_ParamLimits

0x08a7,	// (0x00016151) list_highlight_pane_cp021

0x1ef1,	// (0x0001779b) cset_slider_pane_g1

0x1f03,	// (0x000177ad) cset_slider_pane_g2

0x1efa,	// (0x000177a4) cset_slider_pane_g3

0x0002,

0xf94b,	// (0x000251f5) cset_slider_pane_g

0x83fd,	// (0x0001dca7) aid_area_touch_cam4_zoom

0x8405,	// (0x0001dcaf) cam4_zoom_cont_pane

0x840d,	// (0x0001dcb7) cam4_zoom_pane_g1

0x8415,	// (0x0001dcbf) cam4_zoom_pane_g2

0x841d,	// (0x0001dcc7) cam4_zoom_pane_g3

0x0002,

0xf952,	// (0x000251fc) cam4_zoom_pane_g

0x8425,	// (0x0001dccf) cam4_zoom_cont_pane_g1

0x842e,	// (0x0001dcd8) cam4_zoom_cont_pane_g2

0x8437,	// (0x0001dce1) cam4_zoom_cont_pane_g3

0x0002,

0xf959,	// (0x00025203) cam4_zoom_cont_pane_g

0x7e43,	// (0x0001d6ed) call4_image_pane_ParamLimits

0x7e43,	// (0x0001d6ed) call4_image_pane

0xbdcb,	// (0x00021675) call4_windows_conf_pane_ParamLimits

0xbe10,	// (0x000216ba) popup_call4_audio_in_window_ParamLimits

0xbe10,	// (0x000216ba) popup_call4_audio_in_window

0x0838,	// (0x000160e2) bg_popup_call2_act_pane_cp02

0x4198,	// (0x00019a42) call4_list_conf_pane

0x12b7,	// (0x00016b61) call4_image_pane_g1

0x12b7,	// (0x00016b61) call4_image_pane_g2

0x0001,

0xf3dd,	// (0x00024c87) call4_image_pane_g

0x458f,	// (0x00019e39) list_single_graphic_popup_conf4_pane_ParamLimits

0x458f,	// (0x00019e39) list_single_graphic_popup_conf4_pane

0x0838,	// (0x000160e2) list_highlight_pane_cp022

0x45a2,	// (0x00019e4c) list_single_graphic_popup_conf4_pane_g1

0x1a8f,	// (0x00017339) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf960,	// (0x0002520a) list_single_graphic_popup_conf4_pane_g

0x45aa,	// (0x00019e54) list_single_graphic_popup_conf4_pane_t1

0x9124,	// (0x0001e9ce) popup_vtel_slider_window_ParamLimits

0x9124,	// (0x0001e9ce) popup_vtel_slider_window

0x4116,	// (0x000199c0) dialer2_ne_pane_t2_ParamLimits

0x4116,	// (0x000199c0) dialer2_ne_pane_t2

0x0001,

0xf841,	// (0x000250eb) dialer2_ne_pane_t_ParamLimits

0xf841,	// (0x000250eb) dialer2_ne_pane_t

0x08a7,	// (0x00016151) bg_popup_sub_pane_cp010_ParamLimits

0x08a7,	// (0x00016151) bg_popup_sub_pane_cp010

0xc47a,	// (0x00021d24) popup_vtel_slider_window_g1_ParamLimits

0xc47a,	// (0x00021d24) popup_vtel_slider_window_g1

0xc486,	// (0x00021d30) popup_vtel_slider_window_g2_ParamLimits

0xc486,	// (0x00021d30) popup_vtel_slider_window_g2

0x0003,

0xf965,	// (0x0002520f) popup_vtel_slider_window_g_ParamLimits

0xf965,	// (0x0002520f) popup_vtel_slider_window_g

0xc4ce,	// (0x00021d78) vtel_slider_pane_ParamLimits

0xc4ce,	// (0x00021d78) vtel_slider_pane

0xc4dd,	// (0x00021d87) vtel_slider_pane_g1_ParamLimits

0xc4dd,	// (0x00021d87) vtel_slider_pane_g1

0xc4ea,	// (0x00021d94) vtel_slider_pane_g2_ParamLimits

0xc4ea,	// (0x00021d94) vtel_slider_pane_g2

0xc4f7,	// (0x00021da1) vtel_slider_pane_g3_ParamLimits

0xc4f7,	// (0x00021da1) vtel_slider_pane_g3

0xc4dd,	// (0x00021d87) vtel_slider_pane_g4_ParamLimits

0xc4dd,	// (0x00021d87) vtel_slider_pane_g4

0xc504,	// (0x00021dae) vtel_slider_pane_g5_ParamLimits

0xc504,	// (0x00021dae) vtel_slider_pane_g5

0x0004,

0xf96e,	// (0x00025218) vtel_slider_pane_g_ParamLimits

0xf96e,	// (0x00025218) vtel_slider_pane_g

0x765b,	// (0x0001cf05) main_gallery2_pane

0x8167,	// (0x0001da11) aid_size_row_itut2_dropdow_list_ParamLimits

0x8167,	// (0x0001da11) aid_size_row_itut2_dropdow_list

0x81d1,	// (0x0001da7b) grid_vitu2_function_top_pane_ParamLimits

0x81d1,	// (0x0001da7b) grid_vitu2_function_top_pane

0x8225,	// (0x0001dacf) popup_vitu2_dropdown_list_window_ParamLimits

0x8225,	// (0x0001dacf) popup_vitu2_dropdown_list_window

0x8243,	// (0x0001daed) popup_vitu2_match_list_window

0x8440,	// (0x0001dcea) cell_vitu2_function_top_pane_ParamLimits

0x8440,	// (0x0001dcea) cell_vitu2_function_top_pane

0x845a,	// (0x0001dd04) cell_vitu2_function_top_pane_cp01_ParamLimits

0x845a,	// (0x0001dd04) cell_vitu2_function_top_pane_cp01

0x8476,	// (0x0001dd20) cell_vitu2_function_top_wide_pane_ParamLimits

0x8476,	// (0x0001dd20) cell_vitu2_function_top_wide_pane

0x765b,	// (0x0001cf05) bg_button_pane_cp012

0x8494,	// (0x0001dd3e) cell_vitu2_function_top_pane_g1

0x84a8,	// (0x0001dd52) bg_button_pane_cp013_ParamLimits

0x84a8,	// (0x0001dd52) bg_button_pane_cp013

0xc511,	// (0x00021dbb) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0xc511,	// (0x00021dbb) cell_vitu2_function_top_wide_pane_g1

0x71f5,	// (0x0001ca9f) bg_popup_sub_pane_cp20

0x84c4,	// (0x0001dd6e) list_vitu2_match_list_pane

0x4327,	// (0x00019bd1) bg_popup_sub_pane_cp20_g1

0x432f,	// (0x00019bd9) bg_popup_sub_pane_cp20_g2

0x14c8,	// (0x00016d72) bg_popup_sub_pane_cp20_g3

0x4337,	// (0x00019be1) bg_popup_sub_pane_cp20_g4

0x14a8,	// (0x00016d52) bg_popup_sub_pane_cp20_g5

0x45dc,	// (0x00019e86) bg_popup_sub_pane_cp20_g6

0x4347,	// (0x00019bf1) bg_popup_sub_pane_cp20_g7

0x434f,	// (0x00019bf9) bg_popup_sub_pane_cp20_g8

0x4357,	// (0x00019c01) bg_popup_sub_pane_cp20_g9

0x0008,

0xf979,	// (0x00025223) bg_popup_sub_pane_cp20_g

0x84dc,	// (0x0001dd86) list_vitu2_match_list_item_pane_ParamLimits

0x84dc,	// (0x0001dd86) list_vitu2_match_list_item_pane

0x84ee,	// (0x0001dd98) list_vitu2_match_list_item_pane_t1

0x7203,	// (0x0001caad) bg_popup_sub_pane_cp21

0x1277,	// (0x00016b21) grid_vitu2_dropdown_list_pane

0x84fc,	// (0x0001dda6) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x84fc,	// (0x0001dda6) cell_vitu2_dropdown_list_char_pane

0x851f,	// (0x0001ddc9) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x851f,	// (0x0001ddc9) cell_vitu2_dropdown_list_ctrl_pane

0x4616,	// (0x00019ec0) cell_vitu2_dropdown_list_char_pane_g1

0x460d,	// (0x00019eb7) cell_vitu2_dropdown_list_char_pane_g2

0x4604,	// (0x00019eae) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xf98c,	// (0x00025236) cell_vitu2_dropdown_list_char_pane_g

0x8549,	// (0x0001ddf3) cell_vitu2_dropdown_list_char_pane_t1

0xc529,	// (0x00021dd3) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0xc529,	// (0x00021dd3) cell_vitu2_dropdown_list_ctrl_pane_g1

0xc536,	// (0x00021de0) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0xc536,	// (0x00021de0) cell_vitu2_dropdown_list_ctrl_pane_g2

0xc543,	// (0x00021ded) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0xc543,	// (0x00021ded) cell_vitu2_dropdown_list_ctrl_pane_g3

0x8557,	// (0x0001de01) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x8557,	// (0x0001de01) cell_vitu2_dropdown_list_ctrl_pane_g4

0x5728,	// (0x0001afd2) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0x5728,	// (0x0001afd2) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xf993,	// (0x0002523d) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xf993,	// (0x0002523d) cell_vitu2_dropdown_list_ctrl_pane_g

0xc550,	// (0x00021dfa) aid_size_cell_gallery2_ParamLimits

0xc550,	// (0x00021dfa) aid_size_cell_gallery2

0xc56a,	// (0x00021e14) grid_gallery2_pane_ParamLimits

0xc56a,	// (0x00021e14) grid_gallery2_pane

0xc581,	// (0x00021e2b) scroll_pane_cp029_ParamLimits

0xc581,	// (0x00021e2b) scroll_pane_cp029

0xc591,	// (0x00021e3b) cell_gallery2_pane_ParamLimits

0xc591,	// (0x00021e3b) cell_gallery2_pane

0x461f,	// (0x00019ec9) cell_gallery2_pane_g2

0x5170,	// (0x0001aa1a) cell_gallery2_pane_g3

0x4627,	// (0x00019ed1) cell_gallery2_pane_g4

0x462f,	// (0x00019ed9) cell_gallery2_pane_g5

0x1277,	// (0x00016b21) grid_highlight_pane_cp10

0x8243,	// (0x0001daed) popup_vitu2_match_list_window_ParamLimits

0x8175,	// (0x0001da1f) popup_vitu2_query_window_ParamLimits

0x8175,	// (0x0001da1f) popup_vitu2_query_window

0x7203,	// (0x0001caad) bg_vitu2_candi_button_pane

0x4616,	// (0x00019ec0) cell_vitu2_dropdown_list_char_pane_g1_copy1

0x460d,	// (0x00019eb7) cell_vitu2_dropdown_list_char_pane_g2_copy1

0x4604,	// (0x00019eae) cell_vitu2_dropdown_list_char_pane_g2_copy2

0xc5e6,	// (0x00021e90) bg_button_pane_cp015

0xc5f8,	// (0x00021ea2) bg_button_pane_cp016

0xc60b,	// (0x00021eb5) bg_button_pane_cp017

0x1e81,	// (0x0001772b) bg_popup_sub_pane_cp22

0x4637,	// (0x00019ee1) popup_vitu2_query_window_g1

0xc650,	// (0x00021efa) popup_vitu2_query_window_g2

0x0002,

0xf99e,	// (0x00025248) popup_vitu2_query_window_g

0xc66d,	// (0x00021f17) popup_vitu2_query_window_t1_ParamLimits

0xc66d,	// (0x00021f17) popup_vitu2_query_window_t1

0xc6a0,	// (0x00021f4a) popup_vitu2_query_window_t2_ParamLimits

0xc6a0,	// (0x00021f4a) popup_vitu2_query_window_t2

0xc6b2,	// (0x00021f5c) popup_vitu2_query_window_t3_ParamLimits

0xc6b2,	// (0x00021f5c) popup_vitu2_query_window_t3

0xc6da,	// (0x00021f84) popup_vitu2_query_window_t4_ParamLimits

0xc6da,	// (0x00021f84) popup_vitu2_query_window_t4

0xc6fb,	// (0x00021fa5) popup_vitu2_query_window_t5_ParamLimits

0xc6fb,	// (0x00021fa5) popup_vitu2_query_window_t5

0x0006,

0xf9a5,	// (0x0002524f) popup_vitu2_query_window_t_ParamLimits

0xf9a5,	// (0x0002524f) popup_vitu2_query_window_t

0x4429,	// (0x00019cd3) main_cset_text_pane

0xc1bf,	// (0x00021a69) aid_area_touch_slider_ParamLimits

0xc1db,	// (0x00021a85) cset_slider_pane_ParamLimits

0xc1fe,	// (0x00021aa8) main_cset_slider_pane_g1_ParamLimits

0xc213,	// (0x00021abd) main_cset_slider_pane_g2_ParamLimits

0x444a,	// (0x00019cf4) main_cset_slider_pane_g3_ParamLimits

0x444a,	// (0x00019cf4) main_cset_slider_pane_g3

0xc228,	// (0x00021ad2) main_cset_slider_pane_g4_ParamLimits

0xc228,	// (0x00021ad2) main_cset_slider_pane_g4

0xc237,	// (0x00021ae1) main_cset_slider_pane_g5_ParamLimits

0xc237,	// (0x00021ae1) main_cset_slider_pane_g5

0xc245,	// (0x00021aef) main_cset_slider_pane_g6_ParamLimits

0xc245,	// (0x00021aef) main_cset_slider_pane_g6

0xf902,	// (0x000251ac) main_cset_slider_pane_g_ParamLimits

0x447a,	// (0x00019d24) main_cset_slider_pane_t1_ParamLimits

0xc2d5,	// (0x00021b7f) main_cset_slider_pane_t2_ParamLimits

0xc2ef,	// (0x00021b99) main_cset_slider_pane_t3_ParamLimits

0xc309,	// (0x00021bb3) main_cset_slider_pane_t4_ParamLimits

0xc323,	// (0x00021bcd) main_cset_slider_pane_t5_ParamLimits

0xc341,	// (0x00021beb) main_cset_slider_pane_t6_ParamLimits

0xc358,	// (0x00021c02) main_cset_slider_pane_t7_ParamLimits

0xc386,	// (0x00021c30) main_cset_slider_pane_t8_ParamLimits

0xc386,	// (0x00021c30) main_cset_slider_pane_t8

0xc3ae,	// (0x00021c58) main_cset_slider_pane_t9_ParamLimits

0xc3ae,	// (0x00021c58) main_cset_slider_pane_t9

0xc3d6,	// (0x00021c80) main_cset_slider_pane_t10_ParamLimits

0xc3d6,	// (0x00021c80) main_cset_slider_pane_t10

0xc3fe,	// (0x00021ca8) main_cset_slider_pane_t11_ParamLimits

0xc3fe,	// (0x00021ca8) main_cset_slider_pane_t11

0xc428,	// (0x00021cd2) main_cset_slider_pane_t12_ParamLimits

0xc428,	// (0x00021cd2) main_cset_slider_pane_t12

0xc445,	// (0x00021cef) main_cset_slider_pane_t13_ParamLimits

0xc445,	// (0x00021cef) main_cset_slider_pane_t13

0xf927,	// (0x000251d1) main_cset_slider_pane_t_ParamLimits

0x0838,	// (0x000160e2) bg_popup_sub_pane_cp011

0x4643,	// (0x00019eed) main_cset_text_pane_g1

0x464b,	// (0x00019ef5) main_cset_text_pane_t1

0x4659,	// (0x00019f03) main_cset_text_pane_t2

0x4667,	// (0x00019f11) main_cset_text_pane_t3

0x4675,	// (0x00019f1f) main_cset_text_pane_t4

0x4683,	// (0x00019f2d) main_cset_text_pane_t5

0x4691,	// (0x00019f3b) main_cset_text_pane_t6

0x469f,	// (0x00019f49) main_cset_text_pane_t7

0x0006,

0xf9b4,	// (0x0002525e) main_cset_text_pane_t

0x7203,	// (0x0001caad) main_cam4_burst_pane

0x7203,	// (0x0001caad) main_cam5_pane

0xc107,	// (0x000219b1) bg_button_pane_cp019

0xc110,	// (0x000219ba) bg_button_pane_cp020

0x4456,	// (0x00019d00) main_cset_slider_pane_g7_ParamLimits

0x4456,	// (0x00019d00) main_cset_slider_pane_g7

0x4462,	// (0x00019d0c) main_cset_slider_pane_g8_ParamLimits

0x4462,	// (0x00019d0c) main_cset_slider_pane_g8

0xc259,	// (0x00021b03) main_cset_slider_pane_g9_ParamLimits

0xc259,	// (0x00021b03) main_cset_slider_pane_g9

0xc265,	// (0x00021b0f) main_cset_slider_pane_g10_ParamLimits

0xc265,	// (0x00021b0f) main_cset_slider_pane_g10

0xc271,	// (0x00021b1b) main_cset_slider_pane_g11_ParamLimits

0xc271,	// (0x00021b1b) main_cset_slider_pane_g11

0xc27d,	// (0x00021b27) main_cset_slider_pane_g12_ParamLimits

0xc27d,	// (0x00021b27) main_cset_slider_pane_g12

0xc289,	// (0x00021b33) main_cset_slider_pane_g13_ParamLimits

0xc289,	// (0x00021b33) main_cset_slider_pane_g13

0xc295,	// (0x00021b3f) main_cset_slider_pane_g14_ParamLimits

0xc295,	// (0x00021b3f) main_cset_slider_pane_g14

0xc2a1,	// (0x00021b4b) main_cset_slider_pane_g15_ParamLimits

0xc2a1,	// (0x00021b4b) main_cset_slider_pane_g15

0x44a2,	// (0x00019d4c) main_cset_slider_pane_t14_ParamLimits

0x44a2,	// (0x00019d4c) main_cset_slider_pane_t14

0x44db,	// (0x00019d85) main_cset_slider_pane_t15_ParamLimits

0x44db,	// (0x00019d85) main_cset_slider_pane_t15

0xc772,	// (0x0002201c) aid_cam4_burst_size_cell_ParamLimits

0xc772,	// (0x0002201c) aid_cam4_burst_size_cell

0xc78e,	// (0x00022038) grid_cam4_burst_pane_ParamLimits

0xc78e,	// (0x00022038) grid_cam4_burst_pane

0xc7be,	// (0x00022068) linegrid_cam4_burst_pane_ParamLimits

0xc7be,	// (0x00022068) linegrid_cam4_burst_pane

0xc7de,	// (0x00022088) scroll_pane_cp30_ParamLimits

0xc7de,	// (0x00022088) scroll_pane_cp30

0xc7ea,	// (0x00022094) cell_cam4_burst_pane_ParamLimits

0xc7ea,	// (0x00022094) cell_cam4_burst_pane

0x46b9,	// (0x00019f63) linegrid_cam4_burst_pane_g1_ParamLimits

0x46b9,	// (0x00019f63) linegrid_cam4_burst_pane_g1

0xc826,	// (0x000220d0) linegrid_cam4_burst_pane_g2_ParamLimits

0xc826,	// (0x000220d0) linegrid_cam4_burst_pane_g2

0x46c6,	// (0x00019f70) linegrid_cam4_burst_pane_g3_ParamLimits

0x46c6,	// (0x00019f70) linegrid_cam4_burst_pane_g3

0x0002,

0xf9c3,	// (0x0002526d) linegrid_cam4_burst_pane_g_ParamLimits

0xf9c3,	// (0x0002526d) linegrid_cam4_burst_pane_g

0xc837,	// (0x000220e1) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0xc837,	// (0x000220e1) linegrid_cam4_burst_pane_g3_copy1

0x46d3,	// (0x00019f7d) linegrid_cam4_burst_pane_g4_ParamLimits

0x46d3,	// (0x00019f7d) linegrid_cam4_burst_pane_g4

0xc851,	// (0x000220fb) linegrid_cam4_burst_pane_g5_ParamLimits

0xc851,	// (0x000220fb) linegrid_cam4_burst_pane_g5

0xc862,	// (0x0002210c) linegrid_cam4_burst_pane_g6_ParamLimits

0xc862,	// (0x0002210c) linegrid_cam4_burst_pane_g6

0x46e0,	// (0x00019f8a) linegrid_cam4_burst_pane_g7_ParamLimits

0x46e0,	// (0x00019f8a) linegrid_cam4_burst_pane_g7

0xc873,	// (0x0002211d) cell_cam4_burst_pane_g1

0x46f9,	// (0x00019fa3) main_cam5_pane_t1_ParamLimits

0x46f9,	// (0x00019fa3) main_cam5_pane_t1

0x470b,	// (0x00019fb5) main_cam5_pane_t2_ParamLimits

0x470b,	// (0x00019fb5) main_cam5_pane_t2

0x471d,	// (0x00019fc7) main_cam5_pane_t3_ParamLimits

0x471d,	// (0x00019fc7) main_cam5_pane_t3

0x472f,	// (0x00019fd9) main_cam5_pane_t4_ParamLimits

0x472f,	// (0x00019fd9) main_cam5_pane_t4

0x4747,	// (0x00019ff1) main_cam5_pane_t5_ParamLimits

0x4747,	// (0x00019ff1) main_cam5_pane_t5

0x475b,	// (0x0001a005) main_cam5_pane_t6_ParamLimits

0x475b,	// (0x0001a005) main_cam5_pane_t6

0x476f,	// (0x0001a019) main_cam5_pane_t7_ParamLimits

0x476f,	// (0x0001a019) main_cam5_pane_t7

0x4781,	// (0x0001a02b) main_cam5_pane_t8_ParamLimits

0x4781,	// (0x0001a02b) main_cam5_pane_t8

0x479d,	// (0x0001a047) main_cam5_pane_t9_ParamLimits

0x479d,	// (0x0001a047) main_cam5_pane_t9

0x47af,	// (0x0001a059) main_cam5_pane_t10_ParamLimits

0x47af,	// (0x0001a059) main_cam5_pane_t10

0x47c1,	// (0x0001a06b) main_cam5_pane_t11_ParamLimits

0x47c1,	// (0x0001a06b) main_cam5_pane_t11

0x47d3,	// (0x0001a07d) main_cam5_pane_t12_ParamLimits

0x47d3,	// (0x0001a07d) main_cam5_pane_t12

0x47e8,	// (0x0001a092) main_cam5_pane_t13_ParamLimits

0x47e8,	// (0x0001a092) main_cam5_pane_t13

0x000c,

0xf9cf,	// (0x00025279) main_cam5_pane_t_ParamLimits

0xf9cf,	// (0x00025279) main_cam5_pane_t

0x71b4,	// (0x0001ca5e) popup_scut_keymap_window_ParamLimits

0x71b4,	// (0x0001ca5e) popup_scut_keymap_window

0xc886,	// (0x00022130) aid_size_cell_brow_shortcut

0x1277,	// (0x00016b21) bg_popup_window_pane_cp010

0xc892,	// (0x0002213c) grid_scut_pane

0xc89e,	// (0x00022148) cell_scut_pane_ParamLimits

0xc89e,	// (0x00022148) cell_scut_pane

0xc8b5,	// (0x0002215f) cell_scut_pane_g1

0x4805,	// (0x0001a0af) cell_scut_pane_t1

0x4814,	// (0x0001a0be) cell_scut_pane_t2

0xc8be,	// (0x00022168) cell_scut_pane_t3

0x0002,

0xf9ea,	// (0x00025294) cell_scut_pane_t

0xb490,	// (0x00020d3a) main_mup3_pane_g8_ParamLimits

0xb490,	// (0x00020d3a) main_mup3_pane_g8

0x8175,	// (0x0001da1f) area_vitu2_query_pane_ParamLimits

0x8175,	// (0x0001da1f) area_vitu2_query_pane

0xc61e,	// (0x00021ec8) input_focus_pane_cp08

0x4823,	// (0x0001a0cd) area_vitu2_query_pane_g1

0xc8cc,	// (0x00022176) area_vitu2_query_pane_g2

0x0001,

0xf9f1,	// (0x0002529b) area_vitu2_query_pane_g

0xc8dd,	// (0x00022187) area_vitu2_query_pane_t1_ParamLimits

0xc8dd,	// (0x00022187) area_vitu2_query_pane_t1

0xc8f1,	// (0x0002219b) area_vitu2_query_pane_t2_ParamLimits

0xc8f1,	// (0x0002219b) area_vitu2_query_pane_t2

0xc905,	// (0x000221af) area_vitu2_query_pane_t3_ParamLimits

0xc905,	// (0x000221af) area_vitu2_query_pane_t3

0x482f,	// (0x0001a0d9) area_vitu2_query_pane_t4_ParamLimits

0x482f,	// (0x0001a0d9) area_vitu2_query_pane_t4

0x4857,	// (0x0001a101) area_vitu2_query_pane_t5_ParamLimits

0x4857,	// (0x0001a101) area_vitu2_query_pane_t5

0x487f,	// (0x0001a129) area_vitu2_query_pane_t6_ParamLimits

0x487f,	// (0x0001a129) area_vitu2_query_pane_t6

0x0006,

0xf9f6,	// (0x000252a0) area_vitu2_query_pane_t_ParamLimits

0xf9f6,	// (0x000252a0) area_vitu2_query_pane_t

0xc92d,	// (0x000221d7) bg_button_pane_cp018

0xc93b,	// (0x000221e5) bg_button_pane_cp021

0xc947,	// (0x000221f1) bg_button_pane_cp022

0xc958,	// (0x00022202) input_focus_pane_cp09

0x1bcb,	// (0x00017475) aid_size_touch_mv_arrow_left

0x1bf4,	// (0x0001749e) aid_size_touch_mv_arrow_right

0xc2b9,	// (0x00021b63) main_cset_slider_pane_g16_ParamLimits

0xc2b9,	// (0x00021b63) main_cset_slider_pane_g16

0xc2c7,	// (0x00021b71) main_cset_slider_pane_g17_ParamLimits

0xc2c7,	// (0x00021b71) main_cset_slider_pane_g17

0xc873,	// (0x0002211d) cell_cam4_burst_pane_g1_ParamLimits

0x0838,	// (0x000160e2) compa_mode_pane

0xc492,	// (0x00021d3c) popup_vtel_slider_window_g3_ParamLimits

0xc492,	// (0x00021d3c) popup_vtel_slider_window_g3

0xc4a6,	// (0x00021d50) popup_vtel_slider_window_g4_ParamLimits

0xc4a6,	// (0x00021d50) popup_vtel_slider_window_g4

0xc4ba,	// (0x00021d64) popup_vtel_slider_window_t1_ParamLimits

0xc4ba,	// (0x00021d64) popup_vtel_slider_window_t1

0x7203,	// (0x0001caad) main_cl_pane

0x7705,	// (0x0001cfaf) popup_imed_adjust2_window_ParamLimits

0x1e81,	// (0x0001772b) bg_tb_trans_pane_cp05_ParamLimits

0x3b3d,	// (0x000193e7) popup_imed_adjust2_window_g1_ParamLimits

0x3b4c,	// (0x000193f6) popup_imed_adjust2_window_g2_ParamLimits

0x3b4c,	// (0x000193f6) popup_imed_adjust2_window_g2

0x3b58,	// (0x00019402) popup_imed_adjust2_window_g3_ParamLimits

0x3b58,	// (0x00019402) popup_imed_adjust2_window_g3

0x0002,

0xf76c,	// (0x00025016) popup_imed_adjust2_window_g_ParamLimits

0xf76c,	// (0x00025016) popup_imed_adjust2_window_g

0x3b64,	// (0x0001940e) popup_imed_adjust2_window_t1_ParamLimits

0x3b7c,	// (0x00019426) slider_imed_adjust_pane_ParamLimits

0x3b90,	// (0x0001943a) slider_imed_adjust_pane_g1_ParamLimits

0x3ba0,	// (0x0001944a) slider_imed_adjust_pane_g2_ParamLimits

0x3bb0,	// (0x0001945a) slider_imed_adjust_pane_g3_ParamLimits

0x3bc1,	// (0x0001946b) slider_imed_adjust_pane_g4_ParamLimits

0xf773,	// (0x0002501d) slider_imed_adjust_pane_g_ParamLimits

0x7f10,	// (0x0001d7ba) aid_touch_area_cam4_ParamLimits

0x7f10,	// (0x0001d7ba) aid_touch_area_cam4

0x7f20,	// (0x0001d7ca) battery_pane_cp01

0x7fa7,	// (0x0001d851) main_camera4_pane_g6_ParamLimits

0x7fa7,	// (0x0001d851) main_camera4_pane_g6

0x7fc5,	// (0x0001d86f) main_camera4_pane_t2_ParamLimits

0x7fc5,	// (0x0001d86f) main_camera4_pane_t2

0x0001,

0xf875,	// (0x0002511f) main_camera4_pane_t_ParamLimits

0xf875,	// (0x0002511f) main_camera4_pane_t

0x8028,	// (0x0001d8d2) aid_touch_area_vid4_ParamLimits

0x8028,	// (0x0001d8d2) aid_touch_area_vid4

0x8068,	// (0x0001d912) main_video4_pane_g5_ParamLimits

0x8068,	// (0x0001d912) main_video4_pane_g5

0x808c,	// (0x0001d936) vid4_progress_pane_ParamLimits

0x808c,	// (0x0001d936) vid4_progress_pane

0x446e,	// (0x00019d18) main_cset_slider_pane_g18_ParamLimits

0x446e,	// (0x00019d18) main_cset_slider_pane_g18

0x46ed,	// (0x00019f97) cell_cam4_burst_pane_g2_ParamLimits

0x46ed,	// (0x00019f97) cell_cam4_burst_pane_g2

0x0001,

0xf9ca,	// (0x00025274) cell_cam4_burst_pane_g_ParamLimits

0xf9ca,	// (0x00025274) cell_cam4_burst_pane_g

0xc969,	// (0x00022213) bg_cl_pane_ParamLimits

0xc969,	// (0x00022213) bg_cl_pane

0xc975,	// (0x0002221f) cl_header_pane_ParamLimits

0xc975,	// (0x0002221f) cl_header_pane

0xc981,	// (0x0002222b) cl_listscroll_pane_ParamLimits

0xc981,	// (0x0002222b) cl_listscroll_pane

0x48cb,	// (0x0001a175) bg_cl_pane_g1

0x48d3,	// (0x0001a17d) bg_cl_pane_g2

0x48db,	// (0x0001a185) bg_cl_pane_g3

0x48e3,	// (0x0001a18d) bg_cl_pane_g4

0x48eb,	// (0x0001a195) bg_cl_pane_g5

0x48f3,	// (0x0001a19d) bg_cl_pane_g6

0x48fb,	// (0x0001a1a5) bg_cl_pane_g7

0x4903,	// (0x0001a1ad) bg_cl_pane_g8

0x490b,	// (0x0001a1b5) bg_cl_pane_g9

0x0008,

0xfa05,	// (0x000252af) bg_cl_pane_g

0xc98d,	// (0x00022237) aid_height_cl_leading_ParamLimits

0xc98d,	// (0x00022237) aid_height_cl_leading

0xc999,	// (0x00022243) aid_height_cl_text_ParamLimits

0xc999,	// (0x00022243) aid_height_cl_text

0x0f90,	// (0x0001683a) bg_cl_header_pane_ParamLimits

0x0f90,	// (0x0001683a) bg_cl_header_pane

0xc9b1,	// (0x0002225b) cl_header_pane_g1_ParamLimits

0xc9b1,	// (0x0002225b) cl_header_pane_g1

0xc9be,	// (0x00022268) cl_header_pane_t1_ParamLimits

0xc9be,	// (0x00022268) cl_header_pane_t1

0x4913,	// (0x0001a1bd) cl_list_pane

0x4441,	// (0x00019ceb) hc_scroll_pane_cp01

0x14a8,	// (0x00016d52) bg_cl_header_pane_g1

0x4327,	// (0x00019bd1) bg_cl_header_pane_g2

0x14c8,	// (0x00016d72) bg_cl_header_pane_g3

0x4337,	// (0x00019be1) bg_cl_header_pane_g4

0x432f,	// (0x00019bd9) bg_cl_header_pane_g5

0x45dc,	// (0x00019e86) bg_cl_header_pane_g6

0x434f,	// (0x00019bf9) bg_cl_header_pane_g7

0x4357,	// (0x00019c01) bg_cl_header_pane_g8

0x4347,	// (0x00019bf1) bg_cl_header_pane_g9

0x0008,

0xfa18,	// (0x000252c2) bg_cl_header_pane_g

0xc9d0,	// (0x0002227a) hc_cl_list_double_graphic_heading_pane_ParamLimits

0xc9d0,	// (0x0002227a) hc_cl_list_double_graphic_heading_pane

0xc9e1,	// (0x0002228b) hc_cl_list_single_graphic_pane_ParamLimits

0xc9e1,	// (0x0002228b) hc_cl_list_single_graphic_pane

0xc9fa,	// (0x000222a4) hc_cl_list_single_graphic_pane_g1_ParamLimits

0xc9fa,	// (0x000222a4) hc_cl_list_single_graphic_pane_g1

0xca06,	// (0x000222b0) hc_cl_list_single_graphic_pane_g2_ParamLimits

0xca06,	// (0x000222b0) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfa2b,	// (0x000252d5) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfa2b,	// (0x000252d5) hc_cl_list_single_graphic_pane_g

0xca1a,	// (0x000222c4) hc_cl_list_single_graphic_pane_t1_ParamLimits

0xca1a,	// (0x000222c4) hc_cl_list_single_graphic_pane_t1

0xc9fa,	// (0x000222a4) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0xc9fa,	// (0x000222a4) hc_cl_list_double_graphic_heading_pane_g1

0xca2f,	// (0x000222d9) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0xca2f,	// (0x000222d9) hc_cl_list_double_graphic_heading_pane_g2

0xca43,	// (0x000222ed) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0xca43,	// (0x000222ed) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfa30,	// (0x000252da) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfa30,	// (0x000252da) hc_cl_list_double_graphic_heading_pane_g

0xca57,	// (0x00022301) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0xca57,	// (0x00022301) hc_cl_list_double_graphic_heading_pane_t1

0xca6c,	// (0x00022316) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0xca6c,	// (0x00022316) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfa37,	// (0x000252e1) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfa37,	// (0x000252e1) hc_cl_list_double_graphic_heading_pane_t

0x857b,	// (0x0001de25) vid4_progress_pane_g1

0x858b,	// (0x0001de35) vid4_progress_pane_g2

0x859b,	// (0x0001de45) vid4_progress_pane_g3

0x85ad,	// (0x0001de57) vid4_progress_pane_g4

0x0004,

0xfa3c,	// (0x000252e6) vid4_progress_pane_g

0x85c5,	// (0x0001de6f) vid4_progress_pane_t1

0x85db,	// (0x0001de85) vid4_progress_pane_t2

0x0002,

0xfa47,	// (0x000252f1) vid4_progress_pane_t

0x8605,	// (0x0001deaf) wait_bar_pane_cp07

0x3474,	// (0x00018d1e) blid_firmament_pane_ParamLimits

0x34b7,	// (0x00018d61) popup_blid_sat_info2_window_g1

0x34db,	// (0x00018d85) popup_blid_sat_info2_window_t3

0x34e9,	// (0x00018d93) popup_blid_sat_info2_window_t4

0x34f7,	// (0x00018da1) popup_blid_sat_info2_window_t5

0x3505,	// (0x00018daf) popup_blid_sat_info2_window_t6

0x3515,	// (0x00018dbf) popup_blid_sat_info2_window_t7

0x3523,	// (0x00018dcd) popup_blid_sat_info2_window_t8

0x3531,	// (0x00018ddb) popup_blid_sat_info2_window_t9

0x353f,	// (0x00018de9) popup_blid_sat_info2_window_t10

0x3600,	// (0x00018eaa) aid_firma_cardinal_ParamLimits

0x3614,	// (0x00018ebe) blid_firmament_pane_t1_ParamLimits

0x362b,	// (0x00018ed5) blid_firmament_pane_t2_ParamLimits

0x3642,	// (0x00018eec) blid_firmament_pane_t3_ParamLimits

0x3659,	// (0x00018f03) blid_firmament_pane_t4_ParamLimits

0xf665,	// (0x00024f0f) blid_firmament_pane_t_ParamLimits

0x3670,	// (0x00018f1a) blid_sat_info_pane_ParamLimits

0x765b,	// (0x0001cf05) main_cam_set_pane_ParamLimits

0xbab0,	// (0x0002135a) aid_size_cell_colour_35_ParamLimits

0xbaca,	// (0x00021374) aid_size_cell_colour_112_ParamLimits

0xbae1,	// (0x0002138b) aid_size_cell_effect_ParamLimits

0x08a7,	// (0x00016151) bg_tb_trans_pane_cp02_ParamLimits

0x17ed,	// (0x00017097) heading_imed_pane_ParamLimits

0xbafb,	// (0x000213a5) listscroll_imed_pane_ParamLimits

0x28b3,	// (0x0001815d) popup_call2_audio_first_window_g5_ParamLimits

0x28b3,	// (0x0001815d) popup_call2_audio_first_window_g5

0x7ccc,	// (0x0001d576) aid_size_touch_image3_arrow_left_ParamLimits

0x7ccc,	// (0x0001d576) aid_size_touch_image3_arrow_left

0x7ce2,	// (0x0001d58c) aid_size_touch_image3_arrow_right_ParamLimits

0x7ce2,	// (0x0001d58c) aid_size_touch_image3_arrow_right

0x85f0,	// (0x0001de9a) vid4_progress_pane_t3

0xbc7c,	// (0x00021526) main_hwr_training_symbol_option_pane_ParamLimits

0xbc7c,	// (0x00021526) main_hwr_training_symbol_option_pane

0x3d92,	// (0x0001963c) popup_hwr_training_preview_window_ParamLimits

0x3d92,	// (0x0001963c) popup_hwr_training_preview_window

0x798a,	// (0x0001d234) hwr_training_navi_pane_g5_ParamLimits

0x798a,	// (0x0001d234) hwr_training_navi_pane_g5

0x4315,	// (0x00019bbf) popup_char_count_window

0x71f5,	// (0x0001ca9f) bg_popup_sub_pane_cp20_ParamLimits

0x84c4,	// (0x0001dd6e) list_vitu2_match_list_pane_ParamLimits

0x84d0,	// (0x0001dd7a) vitu2_page_scroll_pane_ParamLimits

0x84d0,	// (0x0001dd7a) vitu2_page_scroll_pane

0x49a8,	// (0x0001a252) list_single_hwr_training_symbol_option_pane_ParamLimits

0x49a8,	// (0x0001a252) list_single_hwr_training_symbol_option_pane

0x49bb,	// (0x0001a265) list_single_hwr_training_symbol_option_pane_g1

0x49c3,	// (0x0001a26d) list_single_hwr_training_symbol_option_pane_t1

0x49d1,	// (0x0001a27b) bg_button_pane_cp023

0x49da,	// (0x0001a284) bg_button_pane_cp024

0x4a0d,	// (0x0001a2b7) vitu2_page_scroll_pane_g1

0x4a15,	// (0x0001a2bf) vitu2_page_scroll_pane_g2

0x0001,

0xfa4e,	// (0x000252f8) vitu2_page_scroll_pane_g

0x4a1d,	// (0x0001a2c7) vitu2_page_scroll_pane_t1

0x33ea,	// (0x00018c94) popup_char_count_window_g1

0x4a2c,	// (0x0001a2d6) popup_char_count_window_g2

0x4a35,	// (0x0001a2df) popup_char_count_window_g3

0x0002,

0xfa53,	// (0x000252fd) popup_char_count_window_g

0x4a3e,	// (0x0001a2e8) popup_char_count_window_t1

0x7203,	// (0x0001caad) main_vded2_pane

0x3b29,	// (0x000193d3) aid_size_cell_imed_line

0x3b33,	// (0x000193dd) grid_imed_line_width_pane

0x80fa,	// (0x0001d9a4) vid4_indicators_pane_g4

0x4a4c,	// (0x0001a2f6) cell_imed_line_width_pane_ParamLimits

0x4a4c,	// (0x0001a2f6) cell_imed_line_width_pane

0x4a60,	// (0x0001a30a) cell_imed_line_width_pane_g1

0x4a69,	// (0x0001a313) cell_imed_line_width_pane_g2

0x0001,

0xfa5a,	// (0x00025304) cell_imed_line_width_pane_g

0xca95,	// (0x0002233f) main_vded2_pane_g1_ParamLimits

0xca95,	// (0x0002233f) main_vded2_pane_g1

0xcaa2,	// (0x0002234c) main_vded2_pane_g2_ParamLimits

0xcaa2,	// (0x0002234c) main_vded2_pane_g2

0x0001,

0xfa5f,	// (0x00025309) main_vded2_pane_g_ParamLimits

0xfa5f,	// (0x00025309) main_vded2_pane_g

0xcab0,	// (0x0002235a) vded2_slider_pane_ParamLimits

0xcab0,	// (0x0002235a) vded2_slider_pane

0xcabd,	// (0x00022367) aid_size_touch_vded2_end

0xcac7,	// (0x00022371) aid_size_touch_vded2_playhead

0x4a71,	// (0x0001a31b) aid_size_touch_vded2_start

0x4a79,	// (0x0001a323) vded2_slider_bg_pane

0x4a82,	// (0x0001a32c) vded2_slider_pane_g1

0x4a8b,	// (0x0001a335) vded2_slider_pane_g2

0xcacf,	// (0x00022379) vded2_slider_pane_g3

0x0002,

0xfa64,	// (0x0002530e) vded2_slider_pane_g

0x4a93,	// (0x0001a33d) vded2_slider_bg_pane_g1

0x4a9c,	// (0x0001a346) vded2_slider_bg_pane_g2

0x4aa5,	// (0x0001a34f) vded2_slider_bg_pane_g3

0x0002,

0xfa6b,	// (0x00025315) vded2_slider_bg_pane_g

0xa730,	// (0x0001ffda) aid_postcard_touch_down_pane_ParamLimits

0xa730,	// (0x0001ffda) aid_postcard_touch_down_pane

0xa740,	// (0x0001ffea) aid_postcard_touch_up_pane_ParamLimits

0xa740,	// (0x0001ffea) aid_postcard_touch_up_pane

0x7203,	// (0x0001caad) main_blid2_pane

0x7690,	// (0x0001cf3a) popup_blid2_search_window

0x0838,	// (0x000160e2) blid2_gps_pane

0x0838,	// (0x000160e2) blid2_navig_pane

0x0838,	// (0x000160e2) blid2_search_pane

0x0838,	// (0x000160e2) blid2_tripm_pane

0xcad8,	// (0x00022382) blid2_search_pane_g1_ParamLimits

0xcad8,	// (0x00022382) blid2_search_pane_g1

0xcae8,	// (0x00022392) blid2_search_pane_t1_ParamLimits

0xcae8,	// (0x00022392) blid2_search_pane_t1

0xcafa,	// (0x000223a4) aid_size_cell_blid2_gps_ParamLimits

0xcafa,	// (0x000223a4) aid_size_cell_blid2_gps

0xcb0a,	// (0x000223b4) blid2_gps_pane_g1_ParamLimits

0xcb0a,	// (0x000223b4) blid2_gps_pane_g1

0xcb16,	// (0x000223c0) grid_blid2_satellite_pane_ParamLimits

0xcb16,	// (0x000223c0) grid_blid2_satellite_pane

0xcb26,	// (0x000223d0) blid2_navig_pane_g1_ParamLimits

0xcb26,	// (0x000223d0) blid2_navig_pane_g1

0xcb32,	// (0x000223dc) blid2_navig_pane_t1_ParamLimits

0xcb32,	// (0x000223dc) blid2_navig_pane_t1

0xcb44,	// (0x000223ee) blid2_navig_pane_t2_ParamLimits

0xcb44,	// (0x000223ee) blid2_navig_pane_t2

0x0001,

0xfa72,	// (0x0002531c) blid2_navig_pane_t_ParamLimits

0xfa72,	// (0x0002531c) blid2_navig_pane_t

0xcb56,	// (0x00022400) blid2_navig_ring_pane_ParamLimits

0xcb56,	// (0x00022400) blid2_navig_ring_pane

0xcb66,	// (0x00022410) blid2_speed_pane_ParamLimits

0xcb66,	// (0x00022410) blid2_speed_pane

0xcb72,	// (0x0002241c) blid2_tripm_pane_g1_ParamLimits

0xcb72,	// (0x0002241c) blid2_tripm_pane_g1

0xcb82,	// (0x0002242c) blid2_tripm_pane_g2_ParamLimits

0xcb82,	// (0x0002242c) blid2_tripm_pane_g2

0xcb8e,	// (0x00022438) blid2_tripm_pane_g3_ParamLimits

0xcb8e,	// (0x00022438) blid2_tripm_pane_g3

0xcb9a,	// (0x00022444) blid2_tripm_pane_g4_ParamLimits

0xcb9a,	// (0x00022444) blid2_tripm_pane_g4

0xcba6,	// (0x00022450) blid2_tripm_pane_g5_ParamLimits

0xcba6,	// (0x00022450) blid2_tripm_pane_g5

0x0005,

0xfa77,	// (0x00025321) blid2_tripm_pane_g_ParamLimits

0xfa77,	// (0x00025321) blid2_tripm_pane_g

0xcbc2,	// (0x0002246c) blid2_tripm_pane_t1_ParamLimits

0xcbc2,	// (0x0002246c) blid2_tripm_pane_t1

0xcbd6,	// (0x00022480) blid2_tripm_pane_t2_ParamLimits

0xcbd6,	// (0x00022480) blid2_tripm_pane_t2

0xcbe8,	// (0x00022492) blid2_tripm_pane_t3_ParamLimits

0xcbe8,	// (0x00022492) blid2_tripm_pane_t3

0x0003,

0xfa84,	// (0x0002532e) blid2_tripm_pane_t_ParamLimits

0xfa84,	// (0x0002532e) blid2_tripm_pane_t

0xcc1a,	// (0x000224c4) cell_blid2_satellite_pane_ParamLimits

0xcc1a,	// (0x000224c4) cell_blid2_satellite_pane

0xcc34,	// (0x000224de) cell_blid2_satellite_pane_g1

0x4aae,	// (0x0001a358) cell_blid2_satellite_pane_t1

0x12b7,	// (0x00016b61) blid2_speed_pane_g1

0x4abc,	// (0x0001a366) blid2_speed_pane_t1

0x4aca,	// (0x0001a374) blid2_speed_pane_t2

0x0001,

0xfa8d,	// (0x00025337) blid2_speed_pane_t

0x12b7,	// (0x00016b61) blid2_navig_ring_pane_g1

0xcc3d,	// (0x000224e7) blid2_navig_ring_pane_g2

0xcc45,	// (0x000224ef) blid2_navig_ring_pane_g3

0xcc4d,	// (0x000224f7) blid2_navig_ring_pane_g4

0xcc55,	// (0x000224ff) blid2_navig_ring_pane_g5

0x0004,

0xfa92,	// (0x0002533c) blid2_navig_ring_pane_g

0x0838,	// (0x000160e2) bg_popup_window_pane_cp011

0x4ad8,	// (0x0001a382) popup_blid2_search_window_g1

0x4ae0,	// (0x0001a38a) popup_blid2_search_window_t1

0x4aee,	// (0x0001a398) popup_blid2_search_window_t2

0x0001,

0xfa9d,	// (0x00025347) popup_blid2_search_window_t

0x13b7,	// (0x00016c61) main_browser_pane_g1

0x1032,	// (0x000168dc) main_browser_pane_ParamLimits

0x765b,	// (0x0001cf05) bg_button_pane_cp011_ParamLimits

0x83e9,	// (0x0001dc93) cell_vitu2_function_pane_g1_ParamLimits

0x1e81,	// (0x0001772b) bg_popup_sub_pane_cp22_ParamLimits

0xc61e,	// (0x00021ec8) input_focus_pane_cp08_ParamLimits

0xc635,	// (0x00021edf) popup_vitu2_query_button_pane_ParamLimits

0xc635,	// (0x00021edf) popup_vitu2_query_button_pane

0xc646,	// (0x00021ef0) popup_vitu2_query_input_button_pane

0x4637,	// (0x00019ee1) popup_vitu2_query_window_g1_ParamLimits

0xc650,	// (0x00021efa) popup_vitu2_query_window_g2_ParamLimits

0xf99e,	// (0x00025248) popup_vitu2_query_window_g_ParamLimits

0x0838,	// (0x000160e2) bg_button_pane_cp026

0xcc5d,	// (0x00022507) popup_vitu2_query_input_button_pane_g1

0x0838,	// (0x000160e2) bg_button_pane_cp025

0x4afc,	// (0x0001a3a6) popup_vitu2_query_button_pane_t1

0xb14c,	// (0x000209f6) main_mp3_pane_t6

0xb15c,	// (0x00020a06) popup_slider_window_cp01

0x7fd7,	// (0x0001d881) cam4_battery_pane

0x80b7,	// (0x0001d961) cam4_battery_pane_cp02

0x8573,	// (0x0001de1d) cam4_battery_pane_cp01

0x8573,	// (0x0001de1d) cam4_battery_pane_cp03

0x4b0a,	// (0x0001a3b4) cam4_battery_pane_g1

0x12b7,	// (0x00016b61) cam4_battery_pane_g2

0x0001,

0xfaa2,	// (0x0002534c) cam4_battery_pane_g

0x354d,	// (0x00018df7) popup_blid_sat_info2_window_t11

0x1bcb,	// (0x00017475) aid_size_touch_mv_arrow_left_ParamLimits

0x1bf4,	// (0x0001749e) aid_size_touch_mv_arrow_right_ParamLimits

0x1c52,	// (0x000174fc) navi_pane_g1_ParamLimits

0x1c5e,	// (0x00017508) navi_pane_g2_ParamLimits

0x1c8c,	// (0x00017536) navi_pane_g3_ParamLimits

0xf379,	// (0x00024c23) navi_pane_g_ParamLimits

0xa3fc,	// (0x0001fca6) navi_pane_mv_t1_ParamLimits

0xbb07,	// (0x000213b1) grid_imed_effect_pane_ParamLimits

0x8fe4,	// (0x0001e88e) aid_placing_vt_slider_lsc

0x1306,	// (0x00016bb0) aid_placing_vt_slider_prt

0x08a7,	// (0x00016151) bg_tb_trans_pane_cp01_ParamLimits

0x37cd,	// (0x00019077) popup_image_details_window_g1_ParamLimits

0x37e0,	// (0x0001908a) popup_image_details_window_g2_ParamLimits

0x37f5,	// (0x0001909f) popup_image_details_window_g3_ParamLimits

0x37f5,	// (0x0001909f) popup_image_details_window_g3

0xf6a5,	// (0x00024f4f) popup_image_details_window_g_ParamLimits

0x3809,	// (0x000190b3) popup_image_details_window_t1_ParamLimits

0x381b,	// (0x000190c5) popup_image_details_window_t2_ParamLimits

0x3834,	// (0x000190de) popup_image_details_window_t3_ParamLimits

0x3848,	// (0x000190f2) popup_image_details_window_t4_ParamLimits

0x3863,	// (0x0001910d) popup_image_details_window_t5_ParamLimits

0xf6ac,	// (0x00024f56) popup_image_details_window_t_ParamLimits

0xc9a5,	// (0x0002224f) cl_header_name_pane_ParamLimits

0xc9a5,	// (0x0002224f) cl_header_name_pane

0xcc65,	// (0x0002250f) cl_header_name_pane_t1_ParamLimits

0xcc65,	// (0x0002250f) cl_header_name_pane_t1

0xcc7c,	// (0x00022526) cl_header_name_pane_t2_ParamLimits

0xcc7c,	// (0x00022526) cl_header_name_pane_t2

0xcca6,	// (0x00022550) cl_header_name_pane_t3_ParamLimits

0xcca6,	// (0x00022550) cl_header_name_pane_t3

0x0002,

0xfaa7,	// (0x00025351) cl_header_name_pane_t_ParamLimits

0xfaa7,	// (0x00025351) cl_header_name_pane_t

0x1d1b,	// (0x000175c5) navi_pane_mv_g2_ParamLimits

0x42e0,	// (0x00019b8a) field_vitu2_entry_pane_g1_ParamLimits

0x42ec,	// (0x00019b96) field_vitu2_entry_pane_g2_ParamLimits

0x1e4b,	// (0x000176f5) field_vitu2_entry_pane_g3_ParamLimits

0x1e4b,	// (0x000176f5) field_vitu2_entry_pane_g3

0xf8a7,	// (0x00025151) field_vitu2_entry_pane_g_ParamLimits

0x82af,	// (0x0001db59) cell_vitu2_itu_pane_g1_ParamLimits

0x82c7,	// (0x0001db71) cell_vitu2_itu_pane_g2_ParamLimits

0x82c7,	// (0x0001db71) cell_vitu2_itu_pane_g2

0x0001,

0xf8b3,	// (0x0002515d) cell_vitu2_itu_pane_g_ParamLimits

0xf8b3,	// (0x0002515d) cell_vitu2_itu_pane_g

0x765b,	// (0x0001cf05) bg_vkb2_func_pane_cp05_ParamLimits

0x765b,	// (0x0001cf05) bg_vkb2_func_pane_cp05

0x765b,	// (0x0001cf05) bg_vkb2_func_pane_cp03

0x765b,	// (0x0001cf05) bg_vkb2_func_pane_cp04

0x765b,	// (0x0001cf05) bg_vkb2_func_pane_cp10_ParamLimits

0x765b,	// (0x0001cf05) bg_vkb2_func_pane_cp10

0xc947,	// (0x000221f1) bg_vkb2_func_pane_cp08

0xc92d,	// (0x000221d7) bg_vkb2_func_pane_cp06

0xc93b,	// (0x000221e5) bg_vkb2_func_pane_cp07

0x49e3,	// (0x0001a28d) bg_vkb2_func_pane_cp11_ParamLimits

0x49e3,	// (0x0001a28d) bg_vkb2_func_pane_cp11

0x49f8,	// (0x0001a2a2) bg_vkb2_func_pane_cp12_ParamLimits

0x49f8,	// (0x0001a2a2) bg_vkb2_func_pane_cp12

0x0838,	// (0x000160e2) bg_vkb2_func_pane_cp09

0x4327,	// (0x00019bd1) bg_vkb2_func_pane_g1

0x14c8,	// (0x00016d72) bg_vkb2_func_pane_g2

0x432f,	// (0x00019bd9) bg_vkb2_func_pane_g3

0x4337,	// (0x00019be1) bg_vkb2_func_pane_g4

0x45dc,	// (0x00019e86) bg_vkb2_func_pane_g5

0x434f,	// (0x00019bf9) bg_vkb2_func_pane_g6

0x4357,	// (0x00019c01) bg_vkb2_func_pane_g7

0x4347,	// (0x00019bf1) bg_vkb2_func_pane_g8

0x14a8,	// (0x00016d52) bg_vkb2_func_pane_g9

0x0008,

0xfaae,	// (0x00025358) bg_vkb2_func_pane_g

0xcbb4,	// (0x0002245e) blid2_tripm_pane_g6_ParamLimits

0xcbb4,	// (0x0002245e) blid2_tripm_pane_g6

0x40c9,	// (0x00019973) mp4_progress_pane_g1

0xcc0e,	// (0x000224b8) blid2_tripm_values_pane_ParamLimits

0xcc0e,	// (0x000224b8) blid2_tripm_values_pane

0xcccb,	// (0x00022575) blid2_tripm_values_pane_t1

0xccd9,	// (0x00022583) blid2_tripm_values_pane_t2

0xcce7,	// (0x00022591) blid2_tripm_values_pane_t3

0xccf5,	// (0x0002259f) blid2_tripm_values_pane_t4

0xcd03,	// (0x000225ad) blid2_tripm_values_pane_t5

0xcd11,	// (0x000225bb) blid2_tripm_values_pane_t6

0xcd1f,	// (0x000225c9) blid2_tripm_values_pane_t7

0xcd2d,	// (0x000225d7) blid2_tripm_values_pane_t8

0xcd3b,	// (0x000225e5) blid2_tripm_values_pane_t9

0x0008,

0xfac1,	// (0x0002536b) blid2_tripm_values_pane_t

0x9024,	// (0x0001e8ce) call_video_pane_t1_ParamLimits

0x9045,	// (0x0001e8ef) call_video_pane_t2_ParamLimits

0xf222,	// (0x00024acc) call_video_pane_t_ParamLimits

0xa6e0,	// (0x0001ff8a) msg_header_pane_g1_ParamLimits

0x1f3e,	// (0x000177e8) msg_header_pane_g2_ParamLimits

0x1f3e,	// (0x000177e8) msg_header_pane_g2

0x0001,

0xf41c,	// (0x00024cc6) msg_header_pane_g_ParamLimits

0xf41c,	// (0x00024cc6) msg_header_pane_g

0x1032,	// (0x000168dc) main_clock2_pane_ParamLimits

0xb93a,	// (0x000211e4) grid_clock2_toolbar_pane_ParamLimits

0xb93a,	// (0x000211e4) grid_clock2_toolbar_pane

0xb93a,	// (0x000211e4) listscroll_clock2_pane_ParamLimits

0xb93a,	// (0x000211e4) listscroll_clock2_pane

0xb9ea,	// (0x00021294) main_clock2_pane_t3_ParamLimits

0xb9ea,	// (0x00021294) main_clock2_pane_t3

0xb9fc,	// (0x000212a6) main_clock2_pane_t4_ParamLimits

0xb9fc,	// (0x000212a6) main_clock2_pane_t4

0x4b14,	// (0x0001a3be) cell_clock2_toolbar_pane

0x4b1c,	// (0x0001a3c6) cell_clock2_toolbar_pane_cp01

0x4b1c,	// (0x0001a3c6) cell_clock2_toolbar_pane_cp02

0x4b24,	// (0x0001a3ce) cell_clock2_toolbar_pane_cp03

0x4b2c,	// (0x0001a3d6) list_clock2_pane

0x1b41,	// (0x000173eb) scroll_pane_cp10

0x4b34,	// (0x0001a3de) list_single_clock2_pane_ParamLimits

0x4b34,	// (0x0001a3de) list_single_clock2_pane

0x1277,	// (0x00016b21) list_highlight_pane_cp08

0x4b41,	// (0x0001a3eb) list_single_clock2_pane_t1

0x4b4f,	// (0x0001a3f9) list_single_clock2_pane_t2

0x0001,

0xfad4,	// (0x0002537e) list_single_clock2_pane_t

0x0838,	// (0x000160e2) bg_button_pane_cp10

0x4b5d,	// (0x0001a407) cell_clock2_toolbar_pane_g1

0x75f6,	// (0x0001cea0) aid_main_viewer_pane_g1_ParamLimits

0x75f6,	// (0x0001cea0) aid_main_viewer_pane_g1

0x7602,	// (0x0001ceac) aid_main_viewer_pane_g2_ParamLimits

0x7602,	// (0x0001ceac) aid_main_viewer_pane_g2

0xa6ec,	// (0x0001ff96) aid_main_viewer_pane_g3_ParamLimits

0xa6ec,	// (0x0001ff96) aid_main_viewer_pane_g3

0xa6fd,	// (0x0001ffa7) aid_main_viewer_pane_g4_ParamLimits

0xa6fd,	// (0x0001ffa7) aid_main_viewer_pane_g4

0x0003,

0xf42d,	// (0x00024cd7) aid_main_viewer_pane_g_ParamLimits

0xf42d,	// (0x00024cd7) aid_main_viewer_pane_g

0x764e,	// (0x0001cef8) main_calc_pane_ParamLimits

0x7669,	// (0x0001cf13) main_dialer2_pane_ParamLimits

0x7203,	// (0x0001caad) main_cam6_pane

0x7203,	// (0x0001caad) main_vid6_pane

0xb946,	// (0x000211f0) listscroll_gen_pane_cp06_ParamLimits

0xb946,	// (0x000211f0) listscroll_gen_pane_cp06

0xba0e,	// (0x000212b8) main_clock2_pane_t5_ParamLimits

0xba0e,	// (0x000212b8) main_clock2_pane_t5

0xba5b,	// (0x00021305) aid_call2_pane_cp10_ParamLimits

0xba6d,	// (0x00021317) aid_call_pane_cp10_ParamLimits

0x1bbf,	// (0x00017469) popup_clock_analogue_window_cp10_g1_ParamLimits

0x1bbf,	// (0x00017469) popup_clock_analogue_window_cp10_g2_ParamLimits

0x7890,	// (0x0001d13a) popup_clock_analogue_window_cp10_g3_ParamLimits

0x7890,	// (0x0001d13a) popup_clock_analogue_window_cp10_g4_ParamLimits

0x1bbf,	// (0x00017469) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf761,	// (0x0002500b) popup_clock_analogue_window_cp10_g_ParamLimits

0xba7f,	// (0x00021329) popup_clock_analogue_window_cp10_t1_ParamLimits

0xbd4e,	// (0x000215f8) cell_dialer2_keypad_pane_g2_ParamLimits

0xbd4e,	// (0x000215f8) cell_dialer2_keypad_pane_g2

0x0001,

0xf846,	// (0x000250f0) cell_dialer2_keypad_pane_g_ParamLimits

0xf846,	// (0x000250f0) cell_dialer2_keypad_pane_g

0xbd6a,	// (0x00021614) cell_dialer2_keypad_pane_t1

0xc1ac,	// (0x00021a56) main_cset_text2_pane_ParamLimits

0xc1ac,	// (0x00021a56) main_cset_text2_pane

0x4823,	// (0x0001a0cd) area_vitu2_query_pane_g1_ParamLimits

0xc8cc,	// (0x00022176) area_vitu2_query_pane_g2_ParamLimits

0xf9f1,	// (0x0002529b) area_vitu2_query_pane_g_ParamLimits

0x48a7,	// (0x0001a151) area_vitu2_query_pane_t7_ParamLimits

0x48a7,	// (0x0001a151) area_vitu2_query_pane_t7

0xc92d,	// (0x000221d7) bg_button_pane_cp018_ParamLimits

0xc93b,	// (0x000221e5) bg_button_pane_cp021_ParamLimits

0xc947,	// (0x000221f1) bg_button_pane_cp022_ParamLimits

0xc947,	// (0x000221f1) bg_vkb2_func_pane_cp08_ParamLimits

0xc92d,	// (0x000221d7) bg_vkb2_func_pane_cp06_ParamLimits

0xc93b,	// (0x000221e5) bg_vkb2_func_pane_cp07_ParamLimits

0xc958,	// (0x00022202) input_focus_pane_cp09_ParamLimits

0x8618,	// (0x0001dec2) cam6_autofocus_pane_ParamLimits

0x8618,	// (0x0001dec2) cam6_autofocus_pane

0x863a,	// (0x0001dee4) cam6_image_uncrop_pane_ParamLimits

0x863a,	// (0x0001dee4) cam6_image_uncrop_pane

0x8667,	// (0x0001df11) cam6_indi_pane_ParamLimits

0x8667,	// (0x0001df11) cam6_indi_pane

0x8681,	// (0x0001df2b) cam6_mode_pane_ParamLimits

0x8681,	// (0x0001df2b) cam6_mode_pane

0x8695,	// (0x0001df3f) cam6_timer_pane_ParamLimits

0x8695,	// (0x0001df3f) cam6_timer_pane

0x86a1,	// (0x0001df4b) cam6_zoom_pane_ParamLimits

0x86a1,	// (0x0001df4b) cam6_zoom_pane

0xcd49,	// (0x000225f3) cam6_mode_pane_g1_ParamLimits

0xcd49,	// (0x000225f3) cam6_mode_pane_g1

0xcd55,	// (0x000225ff) cam6_mode_pane_g2_ParamLimits

0xcd55,	// (0x000225ff) cam6_mode_pane_g2

0xcd61,	// (0x0002260b) cam6_mode_pane_g3_ParamLimits

0xcd61,	// (0x0002260b) cam6_mode_pane_g3

0xcd6d,	// (0x00022617) cam6_mode_pane_g4_ParamLimits

0xcd6d,	// (0x00022617) cam6_mode_pane_g4

0x0003,

0xfad9,	// (0x00025383) cam6_mode_pane_g_ParamLimits

0xfad9,	// (0x00025383) cam6_mode_pane_g

0x3ce8,	// (0x00019592) bg_tb_trans_pane_cp08_ParamLimits

0x3ce8,	// (0x00019592) bg_tb_trans_pane_cp08

0x4b73,	// (0x0001a41d) cam6_battery_pane_ParamLimits

0x4b73,	// (0x0001a41d) cam6_battery_pane

0x4b89,	// (0x0001a433) cam6_indi_pane_g1_ParamLimits

0x4b89,	// (0x0001a433) cam6_indi_pane_g1

0x4b9b,	// (0x0001a445) cam6_indi_pane_g2_ParamLimits

0x4b9b,	// (0x0001a445) cam6_indi_pane_g2

0x4bad,	// (0x0001a457) cam6_indi_pane_g3_ParamLimits

0x4bad,	// (0x0001a457) cam6_indi_pane_g3

0x0002,

0xfae2,	// (0x0002538c) cam6_indi_pane_g_ParamLimits

0xfae2,	// (0x0002538c) cam6_indi_pane_g

0x4bbf,	// (0x0001a469) cam6_indi_pane_t1_ParamLimits

0x4bbf,	// (0x0001a469) cam6_indi_pane_t1

0xbea3,	// (0x0002174d) cam6_autofocus_pane_g1

0xbe9b,	// (0x00021745) cam6_autofocus_pane_g2

0xbeb3,	// (0x0002175d) cam6_autofocus_pane_g3

0xbeab,	// (0x00021755) cam6_autofocus_pane_g4

0x0003,

0xfae9,	// (0x00025393) cam6_autofocus_pane_g

0x4be5,	// (0x0001a48f) cam6_timer_pane_g1

0x4bed,	// (0x0001a497) cam6_timer_pane_t1

0x4bfb,	// (0x0001a4a5) cam6_zoom_cont_pane

0x4c03,	// (0x0001a4ad) cam6_zoom_pane_g1

0x4c0b,	// (0x0001a4b5) cam6_zoom_pane_g2

0xcd79,	// (0x00022623) cam6_zoom_pane_g3

0x0002,

0xfaf2,	// (0x0002539c) cam6_zoom_pane_g

0x12b7,	// (0x00016b61) cam6_battery_pane_g1

0x12b7,	// (0x00016b61) cam6_battery_pane_g2

0x0001,

0xf3dd,	// (0x00024c87) cam6_battery_pane_g

0x4c13,	// (0x0001a4bd) cam6_zoom_cont_pane_g1

0x4c1c,	// (0x0001a4c6) cam6_zoom_cont_pane_g2

0x4c25,	// (0x0001a4cf) cam6_zoom_cont_pane_g3

0x0002,

0xfaf9,	// (0x000253a3) cam6_zoom_cont_pane_g

0xcd96,	// (0x00022640) cam6_mode_pane_cp_ParamLimits

0xcd96,	// (0x00022640) cam6_mode_pane_cp

0xcdaa,	// (0x00022654) cam6_zoom_pane_cp_ParamLimits

0xcdaa,	// (0x00022654) cam6_zoom_pane_cp

0xcdc2,	// (0x0002266c) vid6_image_uncrop_cif_pane_ParamLimits

0xcdc2,	// (0x0002266c) vid6_image_uncrop_cif_pane

0xcdee,	// (0x00022698) vid6_image_uncrop_nhd_pane_ParamLimits

0xcdee,	// (0x00022698) vid6_image_uncrop_nhd_pane

0xce0b,	// (0x000226b5) vid6_image_uncrop_vga_pane_ParamLimits

0xce0b,	// (0x000226b5) vid6_image_uncrop_vga_pane

0xce2a,	// (0x000226d4) vid6_image_uncrop_wvga_pane_ParamLimits

0xce2a,	// (0x000226d4) vid6_image_uncrop_wvga_pane

0xce47,	// (0x000226f1) vid6_indi_pane_ParamLimits

0xce47,	// (0x000226f1) vid6_indi_pane

0x3ce8,	// (0x00019592) bg_tb_trans_pane_cp09_ParamLimits

0x3ce8,	// (0x00019592) bg_tb_trans_pane_cp09

0x4c3d,	// (0x0001a4e7) cam6_battery_pane_cp_ParamLimits

0x4c3d,	// (0x0001a4e7) cam6_battery_pane_cp

0x4c49,	// (0x0001a4f3) vid6_indi_pane_g1_ParamLimits

0x4c49,	// (0x0001a4f3) vid6_indi_pane_g1

0x4c5b,	// (0x0001a505) vid6_indi_pane_g2_ParamLimits

0x4c5b,	// (0x0001a505) vid6_indi_pane_g2

0x4c6d,	// (0x0001a517) vid6_indi_pane_g3_ParamLimits

0x4c6d,	// (0x0001a517) vid6_indi_pane_g3

0x4c82,	// (0x0001a52c) vid6_indi_pane_g4_ParamLimits

0x4c82,	// (0x0001a52c) vid6_indi_pane_g4

0x4c97,	// (0x0001a541) vid6_indi_pane_g5_ParamLimits

0x4c97,	// (0x0001a541) vid6_indi_pane_g5

0x0004,

0xfb00,	// (0x000253aa) vid6_indi_pane_g_ParamLimits

0xfb00,	// (0x000253aa) vid6_indi_pane_g

0x4cb1,	// (0x0001a55b) vid6_indi_pane_t1_ParamLimits

0x4cb1,	// (0x0001a55b) vid6_indi_pane_t1

0x4cc7,	// (0x0001a571) vid6_indi_pane_t2_ParamLimits

0x4cc7,	// (0x0001a571) vid6_indi_pane_t2

0x4cef,	// (0x0001a599) vid6_indi_pane_t3_ParamLimits

0x4cef,	// (0x0001a599) vid6_indi_pane_t3

0x4d17,	// (0x0001a5c1) vid6_indi_pane_t4_ParamLimits

0x4d17,	// (0x0001a5c1) vid6_indi_pane_t4

0x0003,

0xfb0b,	// (0x000253b5) vid6_indi_pane_t_ParamLimits

0xfb0b,	// (0x000253b5) vid6_indi_pane_t

0x4d3b,	// (0x0001a5e5) wait_bar_pane_cp08

0xce6c,	// (0x00022716) main_cset_text2_pane_t1_ParamLimits

0xce6c,	// (0x00022716) main_cset_text2_pane_t1

0xcd81,	// (0x0002262b) listscroll_gen_pane_cp06_t1_ParamLimits

0xcd81,	// (0x0002262b) listscroll_gen_pane_cp06_t1

0x7203,	// (0x0001caad) main_cam6_set_pane

0x5728,	// (0x0001afd2) bg_tb_trans_pane_cp06_ParamLimits

0x7fdf,	// (0x0001d889) cam4_indicators_pane_g1_ParamLimits

0x7ff0,	// (0x0001d89a) cam4_indicators_pane_g2_ParamLimits

0xf883,	// (0x0002512d) cam4_indicators_pane_g_ParamLimits

0x800e,	// (0x0001d8b8) cam4_indicators_pane_t1_ParamLimits

0x765b,	// (0x0001cf05) bg_tb_trans_pane_cp07_ParamLimits

0x80c1,	// (0x0001d96b) vid4_indicators_pane_g1_ParamLimits

0x80d5,	// (0x0001d97f) vid4_indicators_pane_g2_ParamLimits

0x80e9,	// (0x0001d993) vid4_indicators_pane_g3_ParamLimits

0x80fa,	// (0x0001d9a4) vid4_indicators_pane_g4_ParamLimits

0xf895,	// (0x0002513f) vid4_indicators_pane_g_ParamLimits

0x8118,	// (0x0001d9c2) vid4_indicators_pane_t1_ParamLimits

0x857b,	// (0x0001de25) vid4_progress_pane_g1_ParamLimits

0x858b,	// (0x0001de35) vid4_progress_pane_g2_ParamLimits

0x859b,	// (0x0001de45) vid4_progress_pane_g3_ParamLimits

0x85ad,	// (0x0001de57) vid4_progress_pane_g4_ParamLimits

0xfa3c,	// (0x000252e6) vid4_progress_pane_g_ParamLimits

0x85c5,	// (0x0001de6f) vid4_progress_pane_t1_ParamLimits

0x85db,	// (0x0001de85) vid4_progress_pane_t2_ParamLimits

0x85f0,	// (0x0001de9a) vid4_progress_pane_t3_ParamLimits

0xfa47,	// (0x000252f1) vid4_progress_pane_t_ParamLimits

0x8605,	// (0x0001deaf) wait_bar_pane_cp07_ParamLimits

0xce9f,	// (0x00022749) main_cam6_set_pane_g2_ParamLimits

0xce9f,	// (0x00022749) main_cam6_set_pane_g2

0xceab,	// (0x00022755) main_cset6_listscroll_pane_ParamLimits

0xceab,	// (0x00022755) main_cset6_listscroll_pane

0xced6,	// (0x00022780) main_cset6_slider_pane_ParamLimits

0xced6,	// (0x00022780) main_cset6_slider_pane

0xcee2,	// (0x0002278c) main_cset6_text2_pane_ParamLimits

0xcee2,	// (0x0002278c) main_cset6_text2_pane

0x4d4a,	// (0x0001a5f4) main_cset6_text_pane

0x4d52,	// (0x0001a5fc) main_cset_list_pane_copy1_ParamLimits

0x4d52,	// (0x0001a5fc) main_cset_list_pane_copy1

0x4d62,	// (0x0001a60c) scroll_pane_cp028_copy1

0xcef5,	// (0x0002279f) cset_list_set_pane_copy1

0xcf08,	// (0x000227b2) aid_position_infowindow_above_copy1

0xcf10,	// (0x000227ba) aid_position_infowindow_below_copy1

0xcf18,	// (0x000227c2) cset_list_set_pane_g1_copy1

0x4530,	// (0x00019dda) cset_list_set_pane_g3_copy1_ParamLimits

0x4530,	// (0x00019dda) cset_list_set_pane_g3_copy1

0x453f,	// (0x00019de9) cset_list_set_pane_t1_copy1_ParamLimits

0x453f,	// (0x00019de9) cset_list_set_pane_t1_copy1

0x08a7,	// (0x00016151) list_highlight_pane_cp021_copy1_ParamLimits

0x08a7,	// (0x00016151) list_highlight_pane_cp021_copy1

0x4d6b,	// (0x0001a615) cset6_slider_pane_ParamLimits

0x4d6b,	// (0x0001a615) cset6_slider_pane

0x4d97,	// (0x0001a641) main_cset6_slider_pane_g1_ParamLimits

0x4d97,	// (0x0001a641) main_cset6_slider_pane_g1

0xcf20,	// (0x000227ca) main_cset6_slider_pane_g2_ParamLimits

0xcf20,	// (0x000227ca) main_cset6_slider_pane_g2

0x4dbf,	// (0x0001a669) main_cset6_slider_pane_g3_ParamLimits

0x4dbf,	// (0x0001a669) main_cset6_slider_pane_g3

0xcf48,	// (0x000227f2) main_cset6_slider_pane_g4_ParamLimits

0xcf48,	// (0x000227f2) main_cset6_slider_pane_g4

0xcf54,	// (0x000227fe) main_cset6_slider_pane_g5_ParamLimits

0xcf54,	// (0x000227fe) main_cset6_slider_pane_g5

0x4456,	// (0x00019d00) main_cset6_slider_pane_g7_ParamLimits

0x4456,	// (0x00019d00) main_cset6_slider_pane_g7

0x4462,	// (0x00019d0c) main_cset6_slider_pane_g8_ParamLimits

0x4462,	// (0x00019d0c) main_cset6_slider_pane_g8

0xcf62,	// (0x0002280c) main_cset6_slider_pane_g9_ParamLimits

0xcf62,	// (0x0002280c) main_cset6_slider_pane_g9

0xcf6e,	// (0x00022818) main_cset6_slider_pane_g10_ParamLimits

0xcf6e,	// (0x00022818) main_cset6_slider_pane_g10

0xcf7a,	// (0x00022824) main_cset6_slider_pane_g11_ParamLimits

0xcf7a,	// (0x00022824) main_cset6_slider_pane_g11

0xcf86,	// (0x00022830) main_cset6_slider_pane_g12_ParamLimits

0xcf86,	// (0x00022830) main_cset6_slider_pane_g12

0xcf92,	// (0x0002283c) main_cset6_slider_pane_g13_ParamLimits

0xcf92,	// (0x0002283c) main_cset6_slider_pane_g13

0xcf9e,	// (0x00022848) main_cset6_slider_pane_g14_ParamLimits

0xcf9e,	// (0x00022848) main_cset6_slider_pane_g14

0xcfaa,	// (0x00022854) main_cset6_slider_pane_g15_ParamLimits

0xcfaa,	// (0x00022854) main_cset6_slider_pane_g15

0xcfc2,	// (0x0002286c) main_cset6_slider_pane_g16_ParamLimits

0xcfc2,	// (0x0002286c) main_cset6_slider_pane_g16

0xcfd0,	// (0x0002287a) main_cset6_slider_pane_g17_ParamLimits

0xcfd0,	// (0x0002287a) main_cset6_slider_pane_g17

0x0011,

0xfb14,	// (0x000253be) main_cset6_slider_pane_g_ParamLimits

0xfb14,	// (0x000253be) main_cset6_slider_pane_g

0x4dcb,	// (0x0001a675) main_cset6_slider_pane_t1_ParamLimits

0x4dcb,	// (0x0001a675) main_cset6_slider_pane_t1

0xcff6,	// (0x000228a0) main_cset6_slider_pane_t2_ParamLimits

0xcff6,	// (0x000228a0) main_cset6_slider_pane_t2

0xd021,	// (0x000228cb) main_cset6_slider_pane_t3_ParamLimits

0xd021,	// (0x000228cb) main_cset6_slider_pane_t3

0xd04c,	// (0x000228f6) main_cset6_slider_pane_t4_ParamLimits

0xd04c,	// (0x000228f6) main_cset6_slider_pane_t4

0xd077,	// (0x00022921) main_cset6_slider_pane_t5_ParamLimits

0xd077,	// (0x00022921) main_cset6_slider_pane_t5

0x4e0c,	// (0x0001a6b6) main_cset6_slider_pane_t7_ParamLimits

0x4e0c,	// (0x0001a6b6) main_cset6_slider_pane_t7

0xd0a4,	// (0x0002294e) main_cset6_slider_pane_t8_ParamLimits

0xd0a4,	// (0x0002294e) main_cset6_slider_pane_t8

0xd0c8,	// (0x00022972) main_cset6_slider_pane_t9_ParamLimits

0xd0c8,	// (0x00022972) main_cset6_slider_pane_t9

0xd0ec,	// (0x00022996) main_cset6_slider_pane_t10_ParamLimits

0xd0ec,	// (0x00022996) main_cset6_slider_pane_t10

0xd110,	// (0x000229ba) main_cset6_slider_pane_t11_ParamLimits

0xd110,	// (0x000229ba) main_cset6_slider_pane_t11

0x4e42,	// (0x0001a6ec) main_cset6_slider_pane_t14_ParamLimits

0x4e42,	// (0x0001a6ec) main_cset6_slider_pane_t14

0x4e7b,	// (0x0001a725) main_cset6_slider_pane_t15_ParamLimits

0x4e7b,	// (0x0001a725) main_cset6_slider_pane_t15

0x000b,

0xfb39,	// (0x000253e3) main_cset6_slider_pane_t_ParamLimits

0xfb39,	// (0x000253e3) main_cset6_slider_pane_t

0x4574,	// (0x00019e1e) cset_slider_pane_g1_copy1

0x457d,	// (0x00019e27) cset_slider_pane_g2_copy1

0x4586,	// (0x00019e30) cset_slider_pane_g3_copy1

0x0838,	// (0x000160e2) bg_popup_sub_pane_cp011_copy1

0x4eb4,	// (0x0001a75e) main_cset_text_pane_g1_copy1

0x464b,	// (0x00019ef5) main_cset_text_pane_t1_copy1

0x4659,	// (0x00019f03) main_cset_text_pane_t2_copy1

0x4667,	// (0x00019f11) main_cset_text_pane_t3_copy1

0x4675,	// (0x00019f1f) main_cset_text_pane_t4_copy1

0x4683,	// (0x00019f2d) main_cset_text_pane_t5_copy1

0x4ebc,	// (0x0001a766) main_cset_text_pane_t6_copy1

0x4eca,	// (0x0001a774) main_cset_text_pane_t7_copy1

0xd151,	// (0x000229fb) main_cset_text2_pane_t1_copy1

0x765b,	// (0x0001cf05) main_ncimui_pane

0x76c6,	// (0x0001cf70) popup_query_ncimui_window_ParamLimits

0x76c6,	// (0x0001cf70) popup_query_ncimui_window

0x3904,	// (0x000191ae) field_cale_ev2_pane_g4_ParamLimits

0x3904,	// (0x000191ae) field_cale_ev2_pane_g4

0xbcee,	// (0x00021598) cell_video_dialer_keypad_pane_g2_ParamLimits

0xbcee,	// (0x00021598) cell_video_dialer_keypad_pane_g2

0x0001,

0xf81d,	// (0x000250c7) cell_video_dialer_keypad_pane_g_ParamLimits

0xf81d,	// (0x000250c7) cell_video_dialer_keypad_pane_g

0xbd06,	// (0x000215b0) cell_video_dialer_keypad_pane_t1

0x0838,	// (0x000160e2) bg_popup_window_pane_cp012

0x3106,	// (0x000189b0) heading_pane_cp06

0x4ef6,	// (0x0001a7a0) ncim_query_content_pane

0x0838,	// (0x000160e2) bg_popup_heading_pane_cp01

0x4efe,	// (0x0001a7a8) ncim_heading_pane_t1

0x4f0c,	// (0x0001a7b6) ncim_indicator_popup_pane

0x4f1e,	// (0x0001a7c8) ncim_query_button_pane

0x4f32,	// (0x0001a7dc) ncim_query_content_pane_t1

0x4f44,	// (0x0001a7ee) ncim_query_content_pane_t2

0x0005,

0xfb7d,	// (0x00025427) ncim_query_content_pane_t

0x4f7e,	// (0x0001a828) ncim_query_list_pane

0x4f90,	// (0x0001a83a) ncim_query_popup_pane

0x4f0c,	// (0x0001a7b6) ncim_indicator_popup_pane_ParamLimits

0xd2a4,	// (0x00022b4e) ncim_query_content_pane_g1_ParamLimits

0xd2a4,	// (0x00022b4e) ncim_query_content_pane_g1

0x4f32,	// (0x0001a7dc) ncim_query_content_pane_t1_ParamLimits

0x4f44,	// (0x0001a7ee) ncim_query_content_pane_t2_ParamLimits

0xd2b0,	// (0x00022b5a) ncim_query_content_pane_t3_ParamLimits

0xd2b0,	// (0x00022b5a) ncim_query_content_pane_t3

0xd2cd,	// (0x00022b77) ncim_query_content_pane_t4_ParamLimits

0xd2cd,	// (0x00022b77) ncim_query_content_pane_t4

0xd2ea,	// (0x00022b94) ncim_query_content_pane_t5_ParamLimits

0xd2ea,	// (0x00022b94) ncim_query_content_pane_t5

0x4f56,	// (0x0001a800) ncim_query_content_pane_t6_ParamLimits

0x4f56,	// (0x0001a800) ncim_query_content_pane_t6

0xfb7d,	// (0x00025427) ncim_query_content_pane_t_ParamLimits

0x4f7e,	// (0x0001a828) ncim_query_list_pane_ParamLimits

0x4f90,	// (0x0001a83a) ncim_query_popup_pane_ParamLimits

0x4fa4,	// (0x0001a84e) wait_bar_pane_cp04

0x0838,	// (0x000160e2) input_focus_pane_cp011

0x4fac,	// (0x0001a856) ncim_query_popup_pane_t1

0x4fba,	// (0x0001a864) ncim_list_query_list_pane_ParamLimits

0x4fba,	// (0x0001a864) ncim_list_query_list_pane

0x0838,	// (0x000160e2) bg_button_pane_cp027

0x4fc7,	// (0x0001a871) ncim_query_button_pane_g1

0x0838,	// (0x000160e2) list_highlight_pane_cp012

0x4fd1,	// (0x0001a87b) ncim_list_query_list_pane_g1

0x4fd9,	// (0x0001a883) ncim_list_query_list_pane_t1

0x7fff,	// (0x0001d8a9) cam4_indicators_pane_g3_ParamLimits

0x7fff,	// (0x0001d8a9) cam4_indicators_pane_g3

0x8106,	// (0x0001d9b0) vid4_indicators_pane_g5_ParamLimits

0x8106,	// (0x0001d9b0) vid4_indicators_pane_g5

0x85b9,	// (0x0001de63) vid4_progress_pane_g5_ParamLimits

0x85b9,	// (0x0001de63) vid4_progress_pane_g5

0xd190,	// (0x00022a3a) main_ncimui_pane_g1

0xd1f8,	// (0x00022aa2) ncimui_group_query_pane_ParamLimits

0xd1f8,	// (0x00022aa2) ncimui_group_query_pane

0xd240,	// (0x00022aea) ncimui_list_pane_ParamLimits

0xd240,	// (0x00022aea) ncimui_list_pane

0xd267,	// (0x00022b11) ncimui_text_pane_ParamLimits

0xd267,	// (0x00022b11) ncimui_text_pane

0xd307,	// (0x00022bb1) ncimui_text_pane_t1_ParamLimits

0xd307,	// (0x00022bb1) ncimui_text_pane_t1

0x4fe7,	// (0x0001a891) ncimui_list_single_graphic_pane_ParamLimits

0x4fe7,	// (0x0001a891) ncimui_list_single_graphic_pane

0xd326,	// (0x00022bd0) ncimui_query_pane_ParamLimits

0xd326,	// (0x00022bd0) ncimui_query_pane

0x0838,	// (0x000160e2) list_highlight_pane_cp013

0x4ff7,	// (0x0001a8a1) ncim_list_query_list_pane_t1_copy1

0x4fd1,	// (0x0001a87b) ncim_list_single_graphic_pane_g1

0xd339,	// (0x00022be3) ncim_query_button_pane_cp01

0xd345,	// (0x00022bef) ncim_query_entry_pane_ParamLimits

0xd345,	// (0x00022bef) ncim_query_entry_pane

0xd358,	// (0x00022c02) ncimui_query_pane_g1

0xd364,	// (0x00022c0e) ncimui_query_pane_t1_ParamLimits

0xd364,	// (0x00022c0e) ncimui_query_pane_t1

0x08a7,	// (0x00016151) input_focus_pane_cp012

0x5005,	// (0x0001a8af) ncim_query_entry_pane_t1

0x1032,	// (0x000168dc) main_im_pane_ParamLimits

0x765b,	// (0x0001cf05) main_mobtv_pane_ParamLimits

0x765b,	// (0x0001cf05) main_mobtv_pane

0xcfde,	// (0x00022888) main_cset6_slider_pane_g18_ParamLimits

0xcfde,	// (0x00022888) main_cset6_slider_pane_g18

0xcfea,	// (0x00022894) main_cset6_slider_pane_g19_ParamLimits

0xcfea,	// (0x00022894) main_cset6_slider_pane_g19

0x1e4b,	// (0x000176f5) bg_main_mobtv_pane_ParamLimits

0x1e4b,	// (0x000176f5) bg_main_mobtv_pane

0xd37d,	// (0x00022c27) main_mobtv_info_pane

0xd388,	// (0x00022c32) main_mobtv_loading_pane_ParamLimits

0xd388,	// (0x00022c32) main_mobtv_loading_pane

0x5017,	// (0x0001a8c1) main_mobtv_pg_channel_list_pane

0x5021,	// (0x0001a8cb) main_mobtv_pg_hdr_pane

0xd395,	// (0x00022c3f) main_mobtv_programe_curr_pane_ParamLimits

0xd395,	// (0x00022c3f) main_mobtv_programe_curr_pane

0xd3a2,	// (0x00022c4c) main_mobtv_programe_next_pane_ParamLimits

0xd3a2,	// (0x00022c4c) main_mobtv_programe_next_pane

0x502a,	// (0x0001a8d4) popup_mobtv_noti_window

0x12b7,	// (0x00016b61) main_tv_pg_hdr_pane_g1

0x5032,	// (0x0001a8dc) main_tv_pg_hdr_pane_g2

0x503a,	// (0x0001a8e4) main_tv_pg_hdr_pane_g3

0x5042,	// (0x0001a8ec) main_tv_pg_hdr_pane_g4

0x504a,	// (0x0001a8f4) main_tv_pg_hdr_pane_g5

0x5054,	// (0x0001a8fe) main_tv_pg_hdr_pane_g6

0x505e,	// (0x0001a908) main_tv_pg_hdr_pane_g7

0x5068,	// (0x0001a912) main_tv_pg_hdr_pane_g8

0x5072,	// (0x0001a91c) main_tv_pg_hdr_pane_g9

0x507c,	// (0x0001a926) main_tv_pg_hdr_pane_g10

0x5086,	// (0x0001a930) main_tv_pg_hdr_pane_g11

0x000a,

0xfb8a,	// (0x00025434) main_tv_pg_hdr_pane_g

0x5090,	// (0x0001a93a) main_tv_pg_hdr_pane_t1

0x509e,	// (0x0001a948) main_tv_pg_hdr_pane_t2

0x50ac,	// (0x0001a956) main_tv_pg_hdr_pane_t3

0x50bc,	// (0x0001a966) main_tv_pg_hdr_pane_t4

0x50cc,	// (0x0001a976) main_tv_pg_hdr_pane_t5

0x0004,

0xfba1,	// (0x0002544b) main_tv_pg_hdr_pane_t

0x50dc,	// (0x0001a986) single_mobtv_pg_channel_pane_ParamLimits

0x50dc,	// (0x0001a986) single_mobtv_pg_channel_pane

0x50ee,	// (0x0001a998) single_mobtv_pg_channel_table_pane

0x50f7,	// (0x0001a9a1) single_mobtv_pg_channel_thumb_pane

0x5100,	// (0x0001a9aa) single_tv_pg_channel_pane_g1

0x5109,	// (0x0001a9b3) single_tv_pg_channel_pane_g2

0x0001,

0xfbac,	// (0x00025456) single_tv_pg_channel_pane_g

0x0f9e,	// (0x00016848) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0x0f9e,	// (0x00016848) bg_single_mobtv_pg_channel_thumb_pane

0x5112,	// (0x0001a9bc) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0x5112,	// (0x0001a9bc) single_mobtv_pg_channel_thumb_pane_g1

0x5120,	// (0x0001a9ca) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0x5120,	// (0x0001a9ca) single_mobtv_pg_channel_thumb_pane_g2

0x512c,	// (0x0001a9d6) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0x512c,	// (0x0001a9d6) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfbb1,	// (0x0002545b) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfbb1,	// (0x0002545b) single_mobtv_pg_channel_thumb_pane_g

0x5138,	// (0x0001a9e2) single_mobtv_pg_channel_thumb_pane_t1

0x5146,	// (0x0001a9f0) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfbb8,	// (0x00025462) single_mobtv_pg_channel_thumb_pane_t

0x12b7,	// (0x00016b61) bg_single_mobtv_pg_channel_table_pane_g1

0x12b7,	// (0x00016b61) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf3dd,	// (0x00024c87) bg_single_mobtv_pg_channel_table_pane_g

0x5154,	// (0x0001a9fe) single_mobtv_pg_channel_table_pane_t1

0x5162,	// (0x0001aa0c) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfbbd,	// (0x00025467) single_mobtv_pg_channel_table_pane_t

0xd3b7,	// (0x00022c61) main_mobtv_info_pane_g1_ParamLimits

0xd3b7,	// (0x00022c61) main_mobtv_info_pane_g1

0xd3d3,	// (0x00022c7d) main_mobtv_info_pane_t1_ParamLimits

0xd3d3,	// (0x00022c7d) main_mobtv_info_pane_t1

0xd44b,	// (0x00022cf5) main_mobtv_info_pane_t2_ParamLimits

0xd44b,	// (0x00022cf5) main_mobtv_info_pane_t2

0x0002,

0xfbc7,	// (0x00025471) main_mobtv_info_pane_t_ParamLimits

0xfbc7,	// (0x00025471) main_mobtv_info_pane_t

0xd4da,	// (0x00022d84) wait_bar_pane_cp05

0xd4ec,	// (0x00022d96) main_mobtv_loading_pane_g1_ParamLimits

0xd4ec,	// (0x00022d96) main_mobtv_loading_pane_g1

0xd4fa,	// (0x00022da4) main_mobtv_loading_pane_g2_ParamLimits

0xd4fa,	// (0x00022da4) main_mobtv_loading_pane_g2

0xd506,	// (0x00022db0) main_mobtv_loading_pane_g3_ParamLimits

0xd506,	// (0x00022db0) main_mobtv_loading_pane_g3

0x0002,

0xfbce,	// (0x00025478) main_mobtv_loading_pane_g_ParamLimits

0xfbce,	// (0x00025478) main_mobtv_loading_pane_g

0x5184,	// (0x0001aa2e) main_mobtv_loading_pane_t1_ParamLimits

0x5184,	// (0x0001aa2e) main_mobtv_loading_pane_t1

0x519c,	// (0x0001aa46) main_mobtv_loading_pane_t2_ParamLimits

0x519c,	// (0x0001aa46) main_mobtv_loading_pane_t2

0x0001,

0xfbd5,	// (0x0002547f) main_mobtv_loading_pane_t_ParamLimits

0xfbd5,	// (0x0002547f) main_mobtv_loading_pane_t

0xd514,	// (0x00022dbe) wait_bar_pane_cp06_ParamLimits

0xd514,	// (0x00022dbe) wait_bar_pane_cp06

0x51c0,	// (0x0001aa6a) main_mobtv_programe_curr_pane_t1

0x51ce,	// (0x0001aa78) main_mobtv_programe_curr_pane_t2

0x0001,

0xfbda,	// (0x00025484) main_mobtv_programe_curr_pane_t

0x51dc,	// (0x0001aa86) main_mobtv_programe_next_pane_t1

0x51ea,	// (0x0001aa94) main_mobtv_programe_next_pane_t2

0x51f8,	// (0x0001aaa2) main_mobtv_programe_next_pane_t3

0x0002,

0xfbdf,	// (0x00025489) main_mobtv_programe_next_pane_t

0x0838,	// (0x000160e2) bg_popup_mobtv_noti_window_pane

0x5206,	// (0x0001aab0) popup_mobtv_noti_window_g1

0x520e,	// (0x0001aab8) popup_mobtv_noti_window_t1

0x521c,	// (0x0001aac6) popup_mobtv_noti_window_t2

0x0001,

0xfbe6,	// (0x00025490) popup_mobtv_noti_window_t

0x12b7,	// (0x00016b61) bg_popup_mobtv_noti_window_pane_g1

0x7203,	// (0x0001caad) sc_clock_pane

0x7203,	// (0x0001caad) main_fs_bigclock_pane

0xcbfc,	// (0x000224a6) blid2_tripm_pane_t4_ParamLimits

0xcbfc,	// (0x000224a6) blid2_tripm_pane_t4

0xd520,	// (0x00022dca) sc_clock_pane_g1_ParamLimits

0xd520,	// (0x00022dca) sc_clock_pane_g1

0xd52e,	// (0x00022dd8) sc_clock_pane_t1_ParamLimits

0xd52e,	// (0x00022dd8) sc_clock_pane_t1

0xd541,	// (0x00022deb) sc_clock_pane_t2_ParamLimits

0xd541,	// (0x00022deb) sc_clock_pane_t2

0xd553,	// (0x00022dfd) sc_clock_pane_t3_ParamLimits

0xd553,	// (0x00022dfd) sc_clock_pane_t3

0x0004,

0xfbeb,	// (0x00025495) sc_clock_pane_t_ParamLimits

0xfbeb,	// (0x00025495) sc_clock_pane_t

0xe128,	// (0x000239d2) main_fs_bigclock_indicator_pane_ParamLimits

0xe128,	// (0x000239d2) main_fs_bigclock_indicator_pane

0xd5d6,	// (0x00022e80) main_fs_bigclock_pane_g1_ParamLimits

0xd5d6,	// (0x00022e80) main_fs_bigclock_pane_g1

0xe134,	// (0x000239de) main_fs_bigclock_pane_t1_ParamLimits

0xe134,	// (0x000239de) main_fs_bigclock_pane_t1

0xe146,	// (0x000239f0) main_fs_bigclock_pane_t2_ParamLimits

0xe146,	// (0x000239f0) main_fs_bigclock_pane_t2

0xe15a,	// (0x00023a04) main_fs_bigclock_pane_t3_ParamLimits

0xe15a,	// (0x00023a04) main_fs_bigclock_pane_t3

0x0002,

0xfd7c,	// (0x00025626) main_fs_bigclock_pane_t_ParamLimits

0xfd7c,	// (0x00025626) main_fs_bigclock_pane_t

0x5df3,	// (0x0001b69d) main_fs_bigclock_indicator_pane_g1

0x4f26,	// (0x0001a7d0) ncim_query_content_pane_g2_ParamLimits

0x4f26,	// (0x0001a7d0) ncim_query_content_pane_g2

0x0001,

0xfb78,	// (0x00025422) ncim_query_content_pane_g_ParamLimits

0xfb78,	// (0x00025422) ncim_query_content_pane_g

0xd567,	// (0x00022e11) sc_clock_pane_t4_ParamLimits

0xd567,	// (0x00022e11) sc_clock_pane_t4

0x765b,	// (0x0001cf05) main_radioblah_pane

0x7ec6,	// (0x0001d770) cell_call4_button_pane_t1_copy1_ParamLimits

0x7ec6,	// (0x0001d770) cell_call4_button_pane_t1_copy1

0xd1aa,	// (0x00022a54) main_ncimui_pane_t1_ParamLimits

0xd1aa,	// (0x00022a54) main_ncimui_pane_t1

0xd1c4,	// (0x00022a6e) main_ncimui_pane_t2_ParamLimits

0xd1c4,	// (0x00022a6e) main_ncimui_pane_t2

0x0002,

0xfb71,	// (0x0002541b) main_ncimui_pane_t_ParamLimits

0xfb71,	// (0x0002541b) main_ncimui_pane_t

0x5361,	// (0x0001ac0b) main_radioblah_anim_pane_ParamLimits

0x5361,	// (0x0001ac0b) main_radioblah_anim_pane

0x5372,	// (0x0001ac1c) main_radioblah_info_pane_ParamLimits

0x5372,	// (0x0001ac1c) main_radioblah_info_pane

0x5386,	// (0x0001ac30) main_radioblah_pane_t1_ParamLimits

0x5386,	// (0x0001ac30) main_radioblah_pane_t1

0x53a2,	// (0x0001ac4c) main_radioblah_pane_t2_ParamLimits

0x53a2,	// (0x0001ac4c) main_radioblah_pane_t2

0x0003,

0xfc0c,	// (0x000254b6) main_radioblah_pane_t_ParamLimits

0xfc0c,	// (0x000254b6) main_radioblah_pane_t

0xd62c,	// (0x00022ed6) main_radioblah_rocker_ctrl_pane_ParamLimits

0xd62c,	// (0x00022ed6) main_radioblah_rocker_ctrl_pane

0x53ea,	// (0x0001ac94) main_radioblah_info_pane_t1_ParamLimits

0x53ea,	// (0x0001ac94) main_radioblah_info_pane_t1

0xd671,	// (0x00022f1b) main_radioblah_info_pane_t2_ParamLimits

0xd671,	// (0x00022f1b) main_radioblah_info_pane_t2

0x0003,

0xfc15,	// (0x000254bf) main_radioblah_info_pane_t_ParamLimits

0xfc15,	// (0x000254bf) main_radioblah_info_pane_t

0x12b7,	// (0x00016b61) main_radioblah_rocker_ctrl_pane_g1

0xd721,	// (0x00022fcb) main_radioblah_rocker_ctrl_pane_g2

0xd729,	// (0x00022fd3) main_radioblah_rocker_ctrl_pane_g3

0xd731,	// (0x00022fdb) main_radioblah_rocker_ctrl_pane_g4

0xd739,	// (0x00022fe3) main_radioblah_rocker_ctrl_pane_g5

0xd741,	// (0x00022feb) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfc1e,	// (0x000254c8) main_radioblah_rocker_ctrl_pane_g

0xd151,	// (0x000229fb) main_cset_text2_pane_t1_copy1_ParamLimits

0x7f51,	// (0x0001d7fb) cam4_image_uncrop_qvga_pane

0x8074,	// (0x0001d91e) vid4_image_uncrop_qcif_pane

0x8659,	// (0x0001df03) cam6_image_uncrop_qvga_pane_ParamLimits

0x8659,	// (0x0001df03) cam6_image_uncrop_qvga_pane

0x4c2d,	// (0x0001a4d7) vid6_image_uncrop_qcif_pane_ParamLimits

0x4c2d,	// (0x0001a4d7) vid6_image_uncrop_qcif_pane

0x0838,	// (0x000160e2) bg_popup_preview_window_pane_cp03

0x4ed8,	// (0x0001a782) list_cset_text2_pane

0x4ee0,	// (0x0001a78a) main_cset6_text2_pane_g1

0x4ee8,	// (0x0001a792) main_cset6_text2_pane_t1

0xd749,	// (0x00022ff3) list_cset_text2_pane_t1_ParamLimits

0xd749,	// (0x00022ff3) list_cset_text2_pane_t1

0x765b,	// (0x0001cf05) main_radioblah_pane_ParamLimits

0xd4c6,	// (0x00022d70) main_mobtv_info_pane_t3_ParamLimits

0xd4c6,	// (0x00022d70) main_mobtv_info_pane_t3

0xd61a,	// (0x00022ec4) main_radioblah_pane_g1

0xd645,	// (0x00022eef) main_radioblah_info_pane_g1

0xd6c6,	// (0x00022f70) main_radioblah_info_pane_t3_ParamLimits

0xd6c6,	// (0x00022f70) main_radioblah_info_pane_t3

0xa045,	// (0x0001f8ef) highlight_cell_cale_month_pane_ParamLimits

0xa045,	// (0x0001f8ef) highlight_cell_cale_month_pane

0x7203,	// (0x0001caad) main_phob_fisheye_pane

0x3979,	// (0x00019223) scroll_pane_cp0031_ParamLimits

0x3979,	// (0x00019223) scroll_pane_cp0031

0x4d3b,	// (0x0001a5e5) wait_bar_pane_cp08_ParamLimits

0xcef5,	// (0x0002279f) cset_list_set_pane_copy1_ParamLimits

0x5424,	// (0x0001acce) highlight_cell_cale_month_pane_g1

0xd766,	// (0x00023010) highlight_cell_cale_month_pane_t1

0x4913,	// (0x0001a1bd) list_gen_pane_cp01

0x4441,	// (0x00019ceb) scroll_pane_01

0xd774,	// (0x0002301e) list_single_double_fisheye_pane

0xd77d,	// (0x00023027) list_double_fisheye_pane_g1_ParamLimits

0xd77d,	// (0x00023027) list_double_fisheye_pane_g1

0xd789,	// (0x00023033) list_double_fisheye_pane_g2_ParamLimits

0xd789,	// (0x00023033) list_double_fisheye_pane_g2

0xd79d,	// (0x00023047) list_double_fisheye_pane_g3_ParamLimits

0xd79d,	// (0x00023047) list_double_fisheye_pane_g3

0x0004,

0xfc2b,	// (0x000254d5) list_double_fisheye_pane_g_ParamLimits

0xfc2b,	// (0x000254d5) list_double_fisheye_pane_g

0xd7c6,	// (0x00023070) list_double_fisheye_pane_t1_ParamLimits

0xd7c6,	// (0x00023070) list_double_fisheye_pane_t1

0xd7e1,	// (0x0002308b) list_double_fisheye_pane_t2_ParamLimits

0xd7e1,	// (0x0002308b) list_double_fisheye_pane_t2

0x0001,

0xfc36,	// (0x000254e0) list_double_fisheye_pane_t_ParamLimits

0xfc36,	// (0x000254e0) list_double_fisheye_pane_t

0x7203,	// (0x0001caad) main_call5_pane

0xd58d,	// (0x00022e37) sc_swipe_pane_ParamLimits

0xd58d,	// (0x00022e37) sc_swipe_pane

0xd80f,	// (0x000230b9) call5_image_pane_ParamLimits

0xd80f,	// (0x000230b9) call5_image_pane

0xd81f,	// (0x000230c9) call5_swipe_1_pane_ParamLimits

0xd81f,	// (0x000230c9) call5_swipe_1_pane

0xd82b,	// (0x000230d5) call5_swipe_2_pane_ParamLimits

0xd82b,	// (0x000230d5) call5_swipe_2_pane

0xd845,	// (0x000230ef) popup_call5_audio_first_window_ParamLimits

0xd845,	// (0x000230ef) popup_call5_audio_first_window

0x0f9e,	// (0x00016848) call5_swipe_1_pane_g1_ParamLimits

0x0f9e,	// (0x00016848) call5_swipe_1_pane_g1

0x542c,	// (0x0001acd6) call5_swipe_1_pane_g2_ParamLimits

0x542c,	// (0x0001acd6) call5_swipe_1_pane_g2

0x0001,

0xfc3b,	// (0x000254e5) call5_swipe_1_pane_g_ParamLimits

0xfc3b,	// (0x000254e5) call5_swipe_1_pane_g

0x5438,	// (0x0001ace2) call5_swipe_1_pane_t1_ParamLimits

0x5438,	// (0x0001ace2) call5_swipe_1_pane_t1

0x0f9e,	// (0x00016848) call5_swipe_2_pane_g1_ParamLimits

0x0f9e,	// (0x00016848) call5_swipe_2_pane_g1

0x544d,	// (0x0001acf7) call5_swipe_2_pane_g2_ParamLimits

0x544d,	// (0x0001acf7) call5_swipe_2_pane_g2

0x0001,

0xfc40,	// (0x000254ea) call5_swipe_2_pane_g_ParamLimits

0xfc40,	// (0x000254ea) call5_swipe_2_pane_g

0x5459,	// (0x0001ad03) call5_swipe_2_pane_t1_ParamLimits

0x5459,	// (0x0001ad03) call5_swipe_2_pane_t1

0x546e,	// (0x0001ad18) sc_swipe_pane_g1_ParamLimits

0x546e,	// (0x0001ad18) sc_swipe_pane_g1

0x547b,	// (0x0001ad25) sc_swipe_pane_g2_ParamLimits

0x547b,	// (0x0001ad25) sc_swipe_pane_g2

0x0001,

0xfc45,	// (0x000254ef) sc_swipe_pane_g_ParamLimits

0xfc45,	// (0x000254ef) sc_swipe_pane_g

0x5487,	// (0x0001ad31) sc_swipe_pane_t1_ParamLimits

0x5487,	// (0x0001ad31) sc_swipe_pane_t1

0x7203,	// (0x0001caad) main_cmail_launcher_pane

0xd853,	// (0x000230fd) aid_size_cell_cmail_l_ParamLimits

0xd853,	// (0x000230fd) aid_size_cell_cmail_l

0xd861,	// (0x0002310b) grid_cmail_l_pane_ParamLimits

0xd861,	// (0x0002310b) grid_cmail_l_pane

0xd871,	// (0x0002311b) cell_cmail_l_pane_ParamLimits

0xd871,	// (0x0002311b) cell_cmail_l_pane

0x549c,	// (0x0001ad46) cell_cmail_l_pane_g1_ParamLimits

0x549c,	// (0x0001ad46) cell_cmail_l_pane_g1

0x54a8,	// (0x0001ad52) cell_cmail_l_pane_t1_ParamLimits

0x54a8,	// (0x0001ad52) cell_cmail_l_pane_t1

0x54be,	// (0x0001ad68) cell_cmail_l_pane_t2_ParamLimits

0x54be,	// (0x0001ad68) cell_cmail_l_pane_t2

0x0001,

0xfc4a,	// (0x000254f4) cell_cmail_l_pane_t_ParamLimits

0xfc4a,	// (0x000254f4) cell_cmail_l_pane_t

0x08a7,	// (0x00016151) grid_highlight_pane_cp018_ParamLimits

0x08a7,	// (0x00016151) grid_highlight_pane_cp018

0x7065,	// (0x0001c90f) main2_pane_ParamLimits

0x7065,	// (0x0001c90f) main2_pane

0x10ee,	// (0x00016998) popup_sp_fs_action_menu_bg_pane_g1

0x10f6,	// (0x000169a0) popup_sp_fs_action_menu_bg_pane_g2

0x10fe,	// (0x000169a8) popup_sp_fs_action_menu_bg_pane_g3

0x1106,	// (0x000169b0) popup_sp_fs_action_menu_bg_pane_g4

0x110e,	// (0x000169b8) popup_sp_fs_action_menu_bg_pane_g5

0x1116,	// (0x000169c0) popup_sp_fs_action_menu_bg_pane_g6

0x111e,	// (0x000169c8) popup_sp_fs_action_menu_bg_pane_g7

0x1126,	// (0x000169d0) popup_sp_fs_action_menu_bg_pane_g8

0x112e,	// (0x000169d8) popup_sp_fs_action_menu_bg_pane_g9

0x1136,	// (0x000169e0) popup_sp_fs_action_menu_bg_pane_g10

0x1136,	// (0x000169e0) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf145,	// (0x000249ef) popup_sp_fs_action_menu_bg_pane_g

0x0f9e,	// (0x00016848) list_medium_line_x2_t3_g3_g1_ParamLimits

0x0f9e,	// (0x00016848) list_medium_line_x2_t3_g3_g1

0x0f9e,	// (0x00016848) list_medium_line_x2_t3_g3_g2_ParamLimits

0x0f9e,	// (0x00016848) list_medium_line_x2_t3_g3_g2

0x0f9e,	// (0x00016848) list_medium_line_x2_t3_g3_g3_ParamLimits

0x0f9e,	// (0x00016848) list_medium_line_x2_t3_g3_g3

0x0002,

0xf1f3,	// (0x00024a9d) list_medium_line_x2_t3_g3_g_ParamLimits

0xf1f3,	// (0x00024a9d) list_medium_line_x2_t3_g3_g

0x1289,	// (0x00016b33) list_medium_line_x2_t3_g3_t1_ParamLimits

0x1289,	// (0x00016b33) list_medium_line_x2_t3_g3_t1

0x1289,	// (0x00016b33) list_medium_line_x2_t3_g3_t2_ParamLimits

0x1289,	// (0x00016b33) list_medium_line_x2_t3_g3_t2

0x1289,	// (0x00016b33) list_medium_line_x2_t3_g3_t3_ParamLimits

0x1289,	// (0x00016b33) list_medium_line_x2_t3_g3_t3

0x0002,

0xf1fa,	// (0x00024aa4) list_medium_line_x2_t3_g3_t_ParamLimits

0xf1fa,	// (0x00024aa4) list_medium_line_x2_t3_g3_t

0x0f9e,	// (0x00016848) list_medium_line_x2_t3_g2_g1_ParamLimits

0x0f9e,	// (0x00016848) list_medium_line_x2_t3_g2_g1

0x0f9e,	// (0x00016848) list_medium_line_x2_t3_g2_g2_ParamLimits

0x0f9e,	// (0x00016848) list_medium_line_x2_t3_g2_g2

0x0001,

0xf201,	// (0x00024aab) list_medium_line_x2_t3_g2_g_ParamLimits

0xf201,	// (0x00024aab) list_medium_line_x2_t3_g2_g

0x1289,	// (0x00016b33) list_medium_line_x2_t3_g2_t1_ParamLimits

0x1289,	// (0x00016b33) list_medium_line_x2_t3_g2_t1

0x1289,	// (0x00016b33) list_medium_line_x2_t3_g2_t2_ParamLimits

0x1289,	// (0x00016b33) list_medium_line_x2_t3_g2_t2

0x1289,	// (0x00016b33) list_medium_line_x2_t3_g2_t3_ParamLimits

0x1289,	// (0x00016b33) list_medium_line_x2_t3_g2_t3

0x0002,

0xf1fa,	// (0x00024aa4) list_medium_line_x2_t3_g2_t_ParamLimits

0xf1fa,	// (0x00024aa4) list_medium_line_x2_t3_g2_t

0x0f9e,	// (0x00016848) list_medium_line_x2_t4_g4_g1_ParamLimits

0x0f9e,	// (0x00016848) list_medium_line_x2_t4_g4_g1

0x0f9e,	// (0x00016848) list_medium_line_x2_t4_g4_g2_ParamLimits

0x0f9e,	// (0x00016848) list_medium_line_x2_t4_g4_g2

0x0f9e,	// (0x00016848) list_medium_line_x2_t4_g4_g3_ParamLimits

0x0f9e,	// (0x00016848) list_medium_line_x2_t4_g4_g3

0x0f9e,	// (0x00016848) list_medium_line_x2_t4_g4_g4_ParamLimits

0x0f9e,	// (0x00016848) list_medium_line_x2_t4_g4_g4

0x0003,

0xf206,	// (0x00024ab0) list_medium_line_x2_t4_g4_g_ParamLimits

0xf206,	// (0x00024ab0) list_medium_line_x2_t4_g4_g

0x1289,	// (0x00016b33) list_medium_line_x2_t4_g4_t1_ParamLimits

0x1289,	// (0x00016b33) list_medium_line_x2_t4_g4_t1

0x1289,	// (0x00016b33) list_medium_line_x2_t4_g4_t2_ParamLimits

0x1289,	// (0x00016b33) list_medium_line_x2_t4_g4_t2

0x1289,	// (0x00016b33) list_medium_line_x2_t4_g4_t3_ParamLimits

0x1289,	// (0x00016b33) list_medium_line_x2_t4_g4_t3

0x1289,	// (0x00016b33) list_medium_line_x2_t4_g4_t4_ParamLimits

0x1289,	// (0x00016b33) list_medium_line_x2_t4_g4_t4

0x0003,

0xf20f,	// (0x00024ab9) list_medium_line_x2_t4_g4_t_ParamLimits

0xf20f,	// (0x00024ab9) list_medium_line_x2_t4_g4_t

0x0f9e,	// (0x00016848) list_medium_line_x2_t2_g4_g1_ParamLimits

0x0f9e,	// (0x00016848) list_medium_line_x2_t2_g4_g1

0x0f9e,	// (0x00016848) list_medium_line_x2_t2_g4_g2_ParamLimits

0x0f9e,	// (0x00016848) list_medium_line_x2_t2_g4_g2

0x0f9e,	// (0x00016848) list_medium_line_x2_t2_g4_g3_ParamLimits

0x0f9e,	// (0x00016848) list_medium_line_x2_t2_g4_g3

0x0f9e,	// (0x00016848) list_medium_line_x2_t2_g4_g4_ParamLimits

0x0f9e,	// (0x00016848) list_medium_line_x2_t2_g4_g4

0x0003,

0xf206,	// (0x00024ab0) list_medium_line_x2_t2_g4_g_ParamLimits

0xf206,	// (0x00024ab0) list_medium_line_x2_t2_g4_g

0x1289,	// (0x00016b33) list_medium_line_x2_t2_g4_t1_ParamLimits

0x1289,	// (0x00016b33) list_medium_line_x2_t2_g4_t1

0x1289,	// (0x00016b33) list_medium_line_x2_t2_g4_t2_ParamLimits

0x1289,	// (0x00016b33) list_medium_line_x2_t2_g4_t2

0x0001,

0xf276,	// (0x00024b20) list_medium_line_x2_t2_g4_t_ParamLimits

0xf276,	// (0x00024b20) list_medium_line_x2_t2_g4_t

0x0f9e,	// (0x00016848) list_medium_line_x2_t2_g3_g1_ParamLimits

0x0f9e,	// (0x00016848) list_medium_line_x2_t2_g3_g1

0x0f9e,	// (0x00016848) list_medium_line_x2_t2_g3_g2_ParamLimits

0x0f9e,	// (0x00016848) list_medium_line_x2_t2_g3_g2

0x0f9e,	// (0x00016848) list_medium_line_x2_t2_g3_g3_ParamLimits

0x0f9e,	// (0x00016848) list_medium_line_x2_t2_g3_g3

0x0002,

0xf1f3,	// (0x00024a9d) list_medium_line_x2_t2_g3_g_ParamLimits

0xf1f3,	// (0x00024a9d) list_medium_line_x2_t2_g3_g

0x1289,	// (0x00016b33) list_medium_line_x2_t2_g3_t1_ParamLimits

0x1289,	// (0x00016b33) list_medium_line_x2_t2_g3_t1

0x1289,	// (0x00016b33) list_medium_line_x2_t2_g3_t2_ParamLimits

0x1289,	// (0x00016b33) list_medium_line_x2_t2_g3_t2

0x0001,

0xf276,	// (0x00024b20) list_medium_line_x2_t2_g3_t_ParamLimits

0xf276,	// (0x00024b20) list_medium_line_x2_t2_g3_t

0xa1bb,	// (0x0001fa65) main_sp_fs_list_pane_ParamLimits

0xa1bb,	// (0x0001fa65) main_sp_fs_list_pane

0xa1c7,	// (0x0001fa71) sp_fs_scroll_pane_ParamLimits

0xa1c7,	// (0x0001fa71) sp_fs_scroll_pane

0x1820,	// (0x000170ca) list_medium_line_x2_t3_t1

0x1820,	// (0x000170ca) list_medium_line_x2_t3_t2

0x1820,	// (0x000170ca) list_medium_line_x2_t3_t3

0x0002,

0xf2c1,	// (0x00024b6b) list_medium_line_x2_t3_t

0x1820,	// (0x000170ca) list_medium_line_x3_t4_t1

0x1820,	// (0x000170ca) list_medium_line_x3_t4_t2

0x1820,	// (0x000170ca) list_medium_line_x3_t4_t3

0x1820,	// (0x000170ca) list_medium_line_x3_t4_t4

0x0003,

0xf2c8,	// (0x00024b72) list_medium_line_x3_t4_t

0x1820,	// (0x000170ca) list_medium_line_x4_t5_t1

0x1820,	// (0x000170ca) list_medium_line_x4_t5_t2

0x1820,	// (0x000170ca) list_medium_line_x4_t5_t3

0x1820,	// (0x000170ca) list_medium_line_x4_t5_t4

0x1820,	// (0x000170ca) list_medium_line_x4_t5_t5

0x0004,

0xf2d1,	// (0x00024b7b) list_medium_line_x4_t5_t

0x0f9e,	// (0x00016848) list_medium_line_t4_g4_g1_ParamLimits

0x0f9e,	// (0x00016848) list_medium_line_t4_g4_g1

0x0f9e,	// (0x00016848) list_medium_line_t4_g4_g2_ParamLimits

0x0f9e,	// (0x00016848) list_medium_line_t4_g4_g2

0x0f9e,	// (0x00016848) list_medium_line_t4_g4_g3_ParamLimits

0x0f9e,	// (0x00016848) list_medium_line_t4_g4_g3

0x0f9e,	// (0x00016848) list_medium_line_t4_g4_g4_ParamLimits

0x0f9e,	// (0x00016848) list_medium_line_t4_g4_g4

0x0003,

0xf206,	// (0x00024ab0) list_medium_line_t4_g4_g_ParamLimits

0xf206,	// (0x00024ab0) list_medium_line_t4_g4_g

0x1289,	// (0x00016b33) list_medium_line_t4_g4_t1_ParamLimits

0x1289,	// (0x00016b33) list_medium_line_t4_g4_t1

0x1289,	// (0x00016b33) list_medium_line_t4_g4_t2_ParamLimits

0x1289,	// (0x00016b33) list_medium_line_t4_g4_t2

0x1289,	// (0x00016b33) list_medium_line_t4_g4_t3_ParamLimits

0x1289,	// (0x00016b33) list_medium_line_t4_g4_t3

0x1289,	// (0x00016b33) list_medium_line_t4_g4_t4_ParamLimits

0x1289,	// (0x00016b33) list_medium_line_t4_g4_t4

0x0003,

0xf20f,	// (0x00024ab9) list_medium_line_t4_g4_t_ParamLimits

0xf20f,	// (0x00024ab9) list_medium_line_t4_g4_t

0xa23d,	// (0x0001fae7) chi_dic_find_pane_g1

0x7683,	// (0x0001cf2d) main_tport_pane

0x1820,	// (0x000170ca) list_medium_line_plain_t1

0x0f9e,	// (0x00016848) list_medium_line_t2_g2_g1_ParamLimits

0x0f9e,	// (0x00016848) list_medium_line_t2_g2_g1

0x0f9e,	// (0x00016848) list_medium_line_t2_g2_g2_ParamLimits

0x0f9e,	// (0x00016848) list_medium_line_t2_g2_g2

0x0001,

0xf201,	// (0x00024aab) list_medium_line_t2_g2_g_ParamLimits

0xf201,	// (0x00024aab) list_medium_line_t2_g2_g

0x1289,	// (0x00016b33) list_medium_line_t2_g2_t1_ParamLimits

0x1289,	// (0x00016b33) list_medium_line_t2_g2_t1

0x1289,	// (0x00016b33) list_medium_line_t2_g2_t2_ParamLimits

0x1289,	// (0x00016b33) list_medium_line_t2_g2_t2

0x0001,

0xf276,	// (0x00024b20) list_medium_line_t2_g2_t_ParamLimits

0xf276,	// (0x00024b20) list_medium_line_t2_g2_t

0x4986,	// (0x0001a230) aid_sp_fs_list_icon_a_sm

0x498e,	// (0x0001a238) aid_sp_fs_list_icon_d

0x4996,	// (0x0001a240) aid_sp_fs_text_primary

0x499f,	// (0x0001a249) aid_sp_fs_text_secondary

0x0838,	// (0x000160e2) list_medium_line

0x0838,	// (0x000160e2) list_medium_line_g2

0x0838,	// (0x000160e2) list_medium_line_g3

0x0838,	// (0x000160e2) list_medium_line_plain

0x0838,	// (0x000160e2) list_medium_line_plain_t2

0x0838,	// (0x000160e2) list_medium_line_plain_t3

0x0838,	// (0x000160e2) list_medium_line_right_icon

0x0838,	// (0x000160e2) list_medium_line_right_iconx2

0x0838,	// (0x000160e2) list_medium_line_t2

0x0838,	// (0x000160e2) list_medium_line_t2_g2

0x0838,	// (0x000160e2) list_medium_line_t2_g3

0x0838,	// (0x000160e2) list_medium_line_t2_right_icon

0x0838,	// (0x000160e2) list_medium_line_t2_right_iconx2

0x0838,	// (0x000160e2) list_medium_line_t3

0x0838,	// (0x000160e2) list_medium_line_t3_g2

0x0838,	// (0x000160e2) list_medium_line_t3_g3

0x0838,	// (0x000160e2) list_medium_line_t3_right_iconx2

0x0838,	// (0x000160e2) list_medium_line_t4_g4

0x0838,	// (0x000160e2) list_medium_line_x2

0x0838,	// (0x000160e2) list_medium_line_x2_t2_g2

0x0838,	// (0x000160e2) list_medium_line_x2_t2_g3

0x0838,	// (0x000160e2) list_medium_line_x2_t2_g4

0x0838,	// (0x000160e2) list_medium_line_x2_t3

0x0838,	// (0x000160e2) list_medium_line_x2_t3_g2

0x0838,	// (0x000160e2) list_medium_line_x2_t3_g3

0x0838,	// (0x000160e2) list_medium_line_x2_t3_g4

0x0838,	// (0x000160e2) list_medium_line_x2_t4_g2

0x0838,	// (0x000160e2) list_medium_line_x2_t4_g4

0x0838,	// (0x000160e2) list_medium_line_x3

0x0838,	// (0x000160e2) list_medium_line_x3_t4

0x0838,	// (0x000160e2) list_medium_line_x3_t4_g4

0x0838,	// (0x000160e2) list_medium_line_x4_t4

0x0838,	// (0x000160e2) list_medium_line_x4_t4_g7

0x0838,	// (0x000160e2) list_medium_line_x4_t5

0xca81,	// (0x0002232b) list_single_fs_dyc_pane_ParamLimits

0xca81,	// (0x0002232b) list_single_fs_dyc_pane

0x0f9e,	// (0x00016848) list_medium_line_x4_t4_g7_g1_ParamLimits

0x0f9e,	// (0x00016848) list_medium_line_x4_t4_g7_g1

0x0f9e,	// (0x00016848) list_medium_line_x4_t4_g7_g2_ParamLimits

0x0f9e,	// (0x00016848) list_medium_line_x4_t4_g7_g2

0x0f9e,	// (0x00016848) list_medium_line_x4_t4_g7_g3_ParamLimits

0x0f9e,	// (0x00016848) list_medium_line_x4_t4_g7_g3

0x0f9e,	// (0x00016848) list_medium_line_x4_t4_g7_g4_ParamLimits

0x0f9e,	// (0x00016848) list_medium_line_x4_t4_g7_g4

0x0f9e,	// (0x00016848) list_medium_line_x4_t4_g7_g5_ParamLimits

0x0f9e,	// (0x00016848) list_medium_line_x4_t4_g7_g5

0x0f9e,	// (0x00016848) list_medium_line_x4_t4_g7_g6_ParamLimits

0x0f9e,	// (0x00016848) list_medium_line_x4_t4_g7_g6

0x0fac,	// (0x00016856) list_medium_line_x4_t4_g7_g7_ParamLimits

0x0fac,	// (0x00016856) list_medium_line_x4_t4_g7_g7

0x0006,

0xfb52,	// (0x000253fc) list_medium_line_x4_t4_g7_g_ParamLimits

0xfb52,	// (0x000253fc) list_medium_line_x4_t4_g7_g

0x1289,	// (0x00016b33) list_medium_line_x4_t4_g7_t1_ParamLimits

0x1289,	// (0x00016b33) list_medium_line_x4_t4_g7_t1

0x1289,	// (0x00016b33) list_medium_line_x4_t4_g7_t2_ParamLimits

0x1289,	// (0x00016b33) list_medium_line_x4_t4_g7_t2

0x1289,	// (0x00016b33) list_medium_line_x4_t4_g7_t3_ParamLimits

0x1289,	// (0x00016b33) list_medium_line_x4_t4_g7_t3

0x1e6d,	// (0x00017717) list_medium_line_x4_t4_g7_t4_ParamLimits

0x1e6d,	// (0x00017717) list_medium_line_x4_t4_g7_t4

0x1e6d,	// (0x00017717) list_medium_line_x4_t4_g7_t5_ParamLimits

0x1e6d,	// (0x00017717) list_medium_line_x4_t4_g7_t5

0x0004,

0xfb61,	// (0x0002540b) list_medium_line_x4_t4_g7_t_ParamLimits

0xfb61,	// (0x0002540b) list_medium_line_x4_t4_g7_t

0xd134,	// (0x000229de) list_single_dyc_row_pane_ParamLimits

0xd134,	// (0x000229de) list_single_dyc_row_pane

0xd803,	// (0x000230ad) call5_gesture_pane_ParamLimits

0xd803,	// (0x000230ad) call5_gesture_pane

0xd837,	// (0x000230e1) call5_windows_pane_ParamLimits

0xd837,	// (0x000230e1) call5_windows_pane

0xd88a,	// (0x00023134) call5_swipe_1_pane_cp_ParamLimits

0xd88a,	// (0x00023134) call5_swipe_1_pane_cp

0xd896,	// (0x00023140) call5_swipe_2_pane_cp_ParamLimits

0xd896,	// (0x00023140) call5_swipe_2_pane_cp

0x1277,	// (0x00016b21) call5_image_pane_cp

0xd8a2,	// (0x0002314c) popup_call5_audio_first_window_cp_ParamLimits

0xd8a2,	// (0x0002314c) popup_call5_audio_first_window_cp

0x546e,	// (0x0001ad18) call5_swipe_1_pane_g1_cp_ParamLimits

0x546e,	// (0x0001ad18) call5_swipe_1_pane_g1_cp

0x54db,	// (0x0001ad85) call5_swipe_1_pane_g2_cp

0x5487,	// (0x0001ad31) call5_swipe_1_pane_t1_cp_ParamLimits

0x5487,	// (0x0001ad31) call5_swipe_1_pane_t1_cp

0x546e,	// (0x0001ad18) call5_swipe_2_pane_g1_cp_ParamLimits

0x546e,	// (0x0001ad18) call5_swipe_2_pane_g1_cp

0x54e3,	// (0x0001ad8d) call5_swipe_2_pane_g2_cp

0x54eb,	// (0x0001ad95) call5_swipe_2_pane_t1_cp_ParamLimits

0x54eb,	// (0x0001ad95) call5_swipe_2_pane_t1_cp

0x08a7,	// (0x00016151) main_sp_fs_email_pane

0x5500,	// (0x0001adaa) main_sp_fs_listscroll_pane_te

0x5509,	// (0x0001adb3) popup_sp_fs_action_menu_pane_ParamLimits

0x5509,	// (0x0001adb3) popup_sp_fs_action_menu_pane

0x12b7,	// (0x00016b61) bg_sp_fs_ctrlbar_pane_g1

0x554d,	// (0x0001adf7) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0x5556,	// (0x0001ae00) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0x555f,	// (0x0001ae09) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0x12b7,	// (0x00016b61) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfc4f,	// (0x000254f9) bg_sp_fs_ctrlbar_ddmenu_pane_g

0x3311,	// (0x00018bbb) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0x3311,	// (0x00018bbb) bg_sp_fs_ctrlbar_ddmenu_pane

0x5568,	// (0x0001ae12) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0x5568,	// (0x0001ae12) main_sp_fs_ctrlbar_ddmenu_pane_g1

0x5574,	// (0x0001ae1e) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0x5574,	// (0x0001ae1e) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfc58,	// (0x00025502) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfc58,	// (0x00025502) main_sp_fs_ctrlbar_ddmenu_pane_g

0x5580,	// (0x0001ae2a) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0x5580,	// (0x0001ae2a) main_sp_fs_ctrlbar_ddmenu_pane_t1

0x12b7,	// (0x00016b61) list_medium_line_t2_right_icon_g1

0x1820,	// (0x000170ca) list_medium_line_t2_right_icon_t1

0x1820,	// (0x000170ca) list_medium_line_t2_right_icon_t2

0x0001,

0xfc5d,	// (0x00025507) list_medium_line_t2_right_icon_t

0x1e81,	// (0x0001772b) bg_sp_fs_ctrlbar_pane_ParamLimits

0x1e81,	// (0x0001772b) bg_sp_fs_ctrlbar_pane

0xd907,	// (0x000231b1) main_sp_fs_ctrlbar_button_pane_cp01

0xd90f,	// (0x000231b9) main_sp_fs_ctrlbar_ddmenu_pane

0x55d2,	// (0x0001ae7c) main_sp_fs_ctrlbar_pane_g1

0x55de,	// (0x0001ae88) main_sp_fs_ctrlbar_pane_g2

0x0003,

0xfc62,	// (0x0002550c) main_sp_fs_ctrlbar_pane_g

0xd94b,	// (0x000231f5) main_sp_fs_ctrlbar_pane_t1

0xd986,	// (0x00023230) main_sp_fs_ctrlbar_pane

0xd99c,	// (0x00023246) main_sp_fs_listscroll_pane_te_cp01

0xd9ad,	// (0x00023257) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0xd9ad,	// (0x00023257) popup_sp_fs_action_menu_pane_cp01

0x08a7,	// (0x00016151) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0x08a7,	// (0x00016151) bg_sp_fs_highlight_list_pane_cp01

0x5605,	// (0x0001aeaf) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0x5605,	// (0x0001aeaf) sp_fs_action_menu_list_gene_pane_g1

0x5614,	// (0x0001aebe) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0x5614,	// (0x0001aebe) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfc70,	// (0x0002551a) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfc70,	// (0x0002551a) sp_fs_action_menu_list_gene_pane_g

0x5621,	// (0x0001aecb) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0x5621,	// (0x0001aecb) sp_fs_action_menu_list_gene_pane_t1

0x5639,	// (0x0001aee3) sp_fs_action_menu_list_gene_pane_ParamLimits

0x5639,	// (0x0001aee3) sp_fs_action_menu_list_gene_pane

0x5658,	// (0x0001af02) popup_sp_fs_action_menu_bg_pane_ParamLimits

0x5658,	// (0x0001af02) popup_sp_fs_action_menu_bg_pane

0x5666,	// (0x0001af10) sp_fs_action_menu_list_pane_ParamLimits

0x5666,	// (0x0001af10) sp_fs_action_menu_list_pane

0x5686,	// (0x0001af30) sp_fs_scroll_pane_cp01_ParamLimits

0x5686,	// (0x0001af30) sp_fs_scroll_pane_cp01

0x1820,	// (0x000170ca) list_medium_line_plain_t2_t1

0x1820,	// (0x000170ca) list_medium_line_plain_t2_t2

0x0001,

0xfc5d,	// (0x00025507) list_medium_line_plain_t2_t

0x1820,	// (0x000170ca) list_medium_line_plain_t3_t1

0x1820,	// (0x000170ca) list_medium_line_plain_t3_t2

0x1820,	// (0x000170ca) list_medium_line_plain_t3_t3

0x0002,

0xf2c1,	// (0x00024b6b) list_medium_line_plain_t3_t

0x0f9e,	// (0x00016848) list_medium_line_x2_t2_g2_g1_ParamLimits

0x0f9e,	// (0x00016848) list_medium_line_x2_t2_g2_g1

0x0f9e,	// (0x00016848) list_medium_line_x2_t2_g2_g2_ParamLimits

0x0f9e,	// (0x00016848) list_medium_line_x2_t2_g2_g2

0x0001,

0xf201,	// (0x00024aab) list_medium_line_x2_t2_g2_g_ParamLimits

0xf201,	// (0x00024aab) list_medium_line_x2_t2_g2_g

0x1289,	// (0x00016b33) list_medium_line_x2_t2_g2_t1_ParamLimits

0x1289,	// (0x00016b33) list_medium_line_x2_t2_g2_t1

0x1289,	// (0x00016b33) list_medium_line_x2_t2_g2_t2_ParamLimits

0x1289,	// (0x00016b33) list_medium_line_x2_t2_g2_t2

0x0001,

0xf276,	// (0x00024b20) list_medium_line_x2_t2_g2_t_ParamLimits

0xf276,	// (0x00024b20) list_medium_line_x2_t2_g2_t

0x0f9e,	// (0x00016848) list_medium_line_x2_t4_g2_g1_ParamLimits

0x0f9e,	// (0x00016848) list_medium_line_x2_t4_g2_g1

0x0f9e,	// (0x00016848) list_medium_line_x2_t4_g2_g2_ParamLimits

0x0f9e,	// (0x00016848) list_medium_line_x2_t4_g2_g2

0x0001,

0xf201,	// (0x00024aab) list_medium_line_x2_t4_g2_g_ParamLimits

0xf201,	// (0x00024aab) list_medium_line_x2_t4_g2_g

0x1289,	// (0x00016b33) list_medium_line_x2_t4_g2_t1_ParamLimits

0x1289,	// (0x00016b33) list_medium_line_x2_t4_g2_t1

0x1289,	// (0x00016b33) list_medium_line_x2_t4_g2_t2_ParamLimits

0x1289,	// (0x00016b33) list_medium_line_x2_t4_g2_t2

0x1289,	// (0x00016b33) list_medium_line_x2_t4_g2_t3_ParamLimits

0x1289,	// (0x00016b33) list_medium_line_x2_t4_g2_t3

0x1289,	// (0x00016b33) list_medium_line_x2_t4_g2_t4_ParamLimits

0x1289,	// (0x00016b33) list_medium_line_x2_t4_g2_t4

0x0003,

0xf20f,	// (0x00024ab9) list_medium_line_x2_t4_g2_t_ParamLimits

0xf20f,	// (0x00024ab9) list_medium_line_x2_t4_g2_t

0x12b7,	// (0x00016b61) list_medium_line_t3_right_iconx2_g1

0x12b7,	// (0x00016b61) list_medium_line_t3_right_iconx2_g2

0x12b7,	// (0x00016b61) list_medium_line_t3_right_iconx2_g3

0x0002,

0xf3e2,	// (0x00024c8c) list_medium_line_t3_right_iconx2_g

0x1820,	// (0x000170ca) list_medium_line_t3_right_iconx2_t1

0x1820,	// (0x000170ca) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfc5d,	// (0x00025507) list_medium_line_t3_right_iconx2_t

0x0f9e,	// (0x00016848) list_medium_line_x3_t4_g4_g1_ParamLimits

0x0f9e,	// (0x00016848) list_medium_line_x3_t4_g4_g1

0x0f9e,	// (0x00016848) list_medium_line_x3_t4_g4_g2_ParamLimits

0x0f9e,	// (0x00016848) list_medium_line_x3_t4_g4_g2

0x0f9e,	// (0x00016848) list_medium_line_x3_t4_g4_g3_ParamLimits

0x0f9e,	// (0x00016848) list_medium_line_x3_t4_g4_g3

0x0f9e,	// (0x00016848) list_medium_line_x3_t4_g4_g4_ParamLimits

0x0f9e,	// (0x00016848) list_medium_line_x3_t4_g4_g4

0x0003,

0xf206,	// (0x00024ab0) list_medium_line_x3_t4_g4_g_ParamLimits

0xf206,	// (0x00024ab0) list_medium_line_x3_t4_g4_g

0x1289,	// (0x00016b33) list_medium_line_x3_t4_g4_t1_ParamLimits

0x1289,	// (0x00016b33) list_medium_line_x3_t4_g4_t1

0x1289,	// (0x00016b33) list_medium_line_x3_t4_g4_t2_ParamLimits

0x1289,	// (0x00016b33) list_medium_line_x3_t4_g4_t2

0x1289,	// (0x00016b33) list_medium_line_x3_t4_g4_t3_ParamLimits

0x1289,	// (0x00016b33) list_medium_line_x3_t4_g4_t3

0x1289,	// (0x00016b33) list_medium_line_x3_t4_g4_t4_ParamLimits

0x1289,	// (0x00016b33) list_medium_line_x3_t4_g4_t4

0x0003,

0xf20f,	// (0x00024ab9) list_medium_line_x3_t4_g4_t_ParamLimits

0xf20f,	// (0x00024ab9) list_medium_line_x3_t4_g4_t

0xd9cd,	// (0x00023277) list_single_dyc_row_text_pane_t1_ParamLimits

0xd9cd,	// (0x00023277) list_single_dyc_row_text_pane_t1

0xda04,	// (0x000232ae) list_single_dyc_row_text_pane_t2_ParamLimits

0xda04,	// (0x000232ae) list_single_dyc_row_text_pane_t2

0x56ac,	// (0x0001af56) list_single_dyc_row_text_pane_t3_ParamLimits

0x56ac,	// (0x0001af56) list_single_dyc_row_text_pane_t3

0x0005,

0xfc75,	// (0x0002551f) list_single_dyc_row_text_pane_t_ParamLimits

0xfc75,	// (0x0002551f) list_single_dyc_row_text_pane_t

0x56d0,	// (0x0001af7a) list_single_dyc_row_pane_g1_ParamLimits

0x56d0,	// (0x0001af7a) list_single_dyc_row_pane_g1

0x56dc,	// (0x0001af86) list_single_dyc_row_pane_g2_ParamLimits

0x56dc,	// (0x0001af86) list_single_dyc_row_pane_g2

0x56e8,	// (0x0001af92) list_single_dyc_row_pane_g3_ParamLimits

0x56e8,	// (0x0001af92) list_single_dyc_row_pane_g3

0x56f4,	// (0x0001af9e) list_single_dyc_row_pane_g4_ParamLimits

0x56f4,	// (0x0001af9e) list_single_dyc_row_pane_g4

0x0003,

0xfc82,	// (0x0002552c) list_single_dyc_row_pane_g_ParamLimits

0xfc82,	// (0x0002552c) list_single_dyc_row_pane_g

0x5700,	// (0x0001afaa) list_single_dyc_row_text_pane_ParamLimits

0x5700,	// (0x0001afaa) list_single_dyc_row_text_pane

0x0838,	// (0x000160e2) bg_sp_fs_scroll_pane

0x571f,	// (0x0001afc9) thumb_sp_fs_scroll_pane

0x0f9e,	// (0x00016848) list_medium_line_g1_ParamLimits

0x0f9e,	// (0x00016848) list_medium_line_g1

0x1289,	// (0x00016b33) list_medium_line_t1_ParamLimits

0x1289,	// (0x00016b33) list_medium_line_t1

0x0f9e,	// (0x00016848) list_medium_line_x2_g1_ParamLimits

0x0f9e,	// (0x00016848) list_medium_line_x2_g1

0x0f9e,	// (0x00016848) list_medium_line_x2_g2_ParamLimits

0x0f9e,	// (0x00016848) list_medium_line_x2_g2

0x0001,

0xf201,	// (0x00024aab) list_medium_line_x2_g_ParamLimits

0xf201,	// (0x00024aab) list_medium_line_x2_g

0x1289,	// (0x00016b33) list_medium_line_x2_t1_ParamLimits

0x1289,	// (0x00016b33) list_medium_line_x2_t1

0x0f9e,	// (0x00016848) list_medium_line_x3_g1_ParamLimits

0x0f9e,	// (0x00016848) list_medium_line_x3_g1

0x5728,	// (0x0001afd2) list_medium_line_x3_g2_ParamLimits

0x5728,	// (0x0001afd2) list_medium_line_x3_g2

0x0001,

0xfc8b,	// (0x00025535) list_medium_line_x3_g_ParamLimits

0xfc8b,	// (0x00025535) list_medium_line_x3_g

0x5736,	// (0x0001afe0) list_medium_line_x3_t1_ParamLimits

0x5736,	// (0x0001afe0) list_medium_line_x3_t1

0x574a,	// (0x0001aff4) thumb_sp_fs_scroll_pane_g1

0x5753,	// (0x0001affd) thumb_sp_fs_scroll_pane_g2

0x575c,	// (0x0001b006) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfc90,	// (0x0002553a) thumb_sp_fs_scroll_pane_g

0x574a,	// (0x0001aff4) bg_sp_fs_scroll_pane_g1

0x5753,	// (0x0001affd) bg_sp_fs_scroll_pane_g2

0x575c,	// (0x0001b006) bg_sp_fs_scroll_pane_g3

0x0002,

0xfc90,	// (0x0002553a) bg_sp_fs_scroll_pane_g

0x0f9e,	// (0x00016848) list_medium_line_x2_t3_g4_g1_ParamLimits

0x0f9e,	// (0x00016848) list_medium_line_x2_t3_g4_g1

0x0f9e,	// (0x00016848) list_medium_line_x2_t3_g4_g2_ParamLimits

0x0f9e,	// (0x00016848) list_medium_line_x2_t3_g4_g2

0x0f9e,	// (0x00016848) list_medium_line_x2_t3_g4_g3_ParamLimits

0x0f9e,	// (0x00016848) list_medium_line_x2_t3_g4_g3

0x0f9e,	// (0x00016848) list_medium_line_x2_t3_g4_g4_ParamLimits

0x0f9e,	// (0x00016848) list_medium_line_x2_t3_g4_g4

0x0003,

0xf206,	// (0x00024ab0) list_medium_line_x2_t3_g4_g_ParamLimits

0xf206,	// (0x00024ab0) list_medium_line_x2_t3_g4_g

0x1289,	// (0x00016b33) list_medium_line_x2_t3_g4_t1_ParamLimits

0x1289,	// (0x00016b33) list_medium_line_x2_t3_g4_t1

0x1289,	// (0x00016b33) list_medium_line_x2_t3_g4_t2_ParamLimits

0x1289,	// (0x00016b33) list_medium_line_x2_t3_g4_t2

0x1289,	// (0x00016b33) list_medium_line_x2_t3_g4_t3_ParamLimits

0x1289,	// (0x00016b33) list_medium_line_x2_t3_g4_t3

0x0002,

0xf1fa,	// (0x00024aa4) list_medium_line_x2_t3_g4_t_ParamLimits

0xf1fa,	// (0x00024aa4) list_medium_line_x2_t3_g4_t

0x0f9e,	// (0x00016848) list_medium_line_g2_g1_ParamLimits

0x0f9e,	// (0x00016848) list_medium_line_g2_g1

0x0f9e,	// (0x00016848) list_medium_line_g2_g2_ParamLimits

0x0f9e,	// (0x00016848) list_medium_line_g2_g2

0x0001,

0xf201,	// (0x00024aab) list_medium_line_g2_g_ParamLimits

0xf201,	// (0x00024aab) list_medium_line_g2_g

0x1289,	// (0x00016b33) list_medium_line_g2_t1_ParamLimits

0x1289,	// (0x00016b33) list_medium_line_g2_t1

0x0f9e,	// (0x00016848) list_medium_line_t3_g2_g1_ParamLimits

0x0f9e,	// (0x00016848) list_medium_line_t3_g2_g1

0x0f9e,	// (0x00016848) list_medium_line_t3_g2_g2_ParamLimits

0x0f9e,	// (0x00016848) list_medium_line_t3_g2_g2

0x0001,

0xf201,	// (0x00024aab) list_medium_line_t3_g2_g_ParamLimits

0xf201,	// (0x00024aab) list_medium_line_t3_g2_g

0x1289,	// (0x00016b33) list_medium_line_t3_g2_t1_ParamLimits

0x1289,	// (0x00016b33) list_medium_line_t3_g2_t1

0x1289,	// (0x00016b33) list_medium_line_t3_g2_t2_ParamLimits

0x1289,	// (0x00016b33) list_medium_line_t3_g2_t2

0x1289,	// (0x00016b33) list_medium_line_t3_g2_t3_ParamLimits

0x1289,	// (0x00016b33) list_medium_line_t3_g2_t3

0x0002,

0xf1fa,	// (0x00024aa4) list_medium_line_t3_g2_t_ParamLimits

0xf1fa,	// (0x00024aa4) list_medium_line_t3_g2_t

0x12b7,	// (0x00016b61) list_medium_line_right_icon_g1

0x1820,	// (0x000170ca) list_medium_line_right_icon_t1

0x0f9e,	// (0x00016848) list_medium_line_t2_g1_ParamLimits

0x0f9e,	// (0x00016848) list_medium_line_t2_g1

0x1289,	// (0x00016b33) list_medium_line_t2_t1_ParamLimits

0x1289,	// (0x00016b33) list_medium_line_t2_t1

0x1289,	// (0x00016b33) list_medium_line_t2_t2_ParamLimits

0x1289,	// (0x00016b33) list_medium_line_t2_t2

0x0001,

0xf276,	// (0x00024b20) list_medium_line_t2_t_ParamLimits

0xf276,	// (0x00024b20) list_medium_line_t2_t

0x0f9e,	// (0x00016848) list_medium_line_t3_g1_ParamLimits

0x0f9e,	// (0x00016848) list_medium_line_t3_g1

0x1289,	// (0x00016b33) list_medium_line_t3_t1_ParamLimits

0x1289,	// (0x00016b33) list_medium_line_t3_t1

0x1289,	// (0x00016b33) list_medium_line_t3_t2_ParamLimits

0x1289,	// (0x00016b33) list_medium_line_t3_t2

0x1289,	// (0x00016b33) list_medium_line_t3_t3_ParamLimits

0x1289,	// (0x00016b33) list_medium_line_t3_t3

0x0002,

0xf1fa,	// (0x00024aa4) list_medium_line_t3_t_ParamLimits

0xf1fa,	// (0x00024aa4) list_medium_line_t3_t

0x0f9e,	// (0x00016848) list_medium_line_g3_g1_ParamLimits

0x0f9e,	// (0x00016848) list_medium_line_g3_g1

0x0f9e,	// (0x00016848) list_medium_line_g3_g2_ParamLimits

0x0f9e,	// (0x00016848) list_medium_line_g3_g2

0x0f9e,	// (0x00016848) list_medium_line_g3_g3_ParamLimits

0x0f9e,	// (0x00016848) list_medium_line_g3_g3

0x0002,

0xf1f3,	// (0x00024a9d) list_medium_line_g3_g_ParamLimits

0xf1f3,	// (0x00024a9d) list_medium_line_g3_g

0x1289,	// (0x00016b33) list_medium_line_g3_t1_ParamLimits

0x1289,	// (0x00016b33) list_medium_line_g3_t1

0x0f9e,	// (0x00016848) list_medium_line_t2_g3_g1_ParamLimits

0x0f9e,	// (0x00016848) list_medium_line_t2_g3_g1

0x0f9e,	// (0x00016848) list_medium_line_t2_g3_g2_ParamLimits

0x0f9e,	// (0x00016848) list_medium_line_t2_g3_g2

0x0f9e,	// (0x00016848) list_medium_line_t2_g3_g3_ParamLimits

0x0f9e,	// (0x00016848) list_medium_line_t2_g3_g3

0x0002,

0xf1f3,	// (0x00024a9d) list_medium_line_t2_g3_g_ParamLimits

0xf1f3,	// (0x00024a9d) list_medium_line_t2_g3_g

0x1289,	// (0x00016b33) list_medium_line_t2_g3_t1_ParamLimits

0x1289,	// (0x00016b33) list_medium_line_t2_g3_t1

0x1289,	// (0x00016b33) list_medium_line_t2_g3_t2_ParamLimits

0x1289,	// (0x00016b33) list_medium_line_t2_g3_t2

0x0001,

0xf276,	// (0x00024b20) list_medium_line_t2_g3_t_ParamLimits

0xf276,	// (0x00024b20) list_medium_line_t2_g3_t

0x0f9e,	// (0x00016848) list_medium_line_t3_g3_g1_ParamLimits

0x0f9e,	// (0x00016848) list_medium_line_t3_g3_g1

0x0f9e,	// (0x00016848) list_medium_line_t3_g3_g2_ParamLimits

0x0f9e,	// (0x00016848) list_medium_line_t3_g3_g2

0x0f9e,	// (0x00016848) list_medium_line_t3_g3_g3_ParamLimits

0x0f9e,	// (0x00016848) list_medium_line_t3_g3_g3

0x0002,

0xf1f3,	// (0x00024a9d) list_medium_line_t3_g3_g_ParamLimits

0xf1f3,	// (0x00024a9d) list_medium_line_t3_g3_g

0x1289,	// (0x00016b33) list_medium_line_t3_g3_t1_ParamLimits

0x1289,	// (0x00016b33) list_medium_line_t3_g3_t1

0x1289,	// (0x00016b33) list_medium_line_t3_g3_t2_ParamLimits

0x1289,	// (0x00016b33) list_medium_line_t3_g3_t2

0x1289,	// (0x00016b33) list_medium_line_t3_g3_t3_ParamLimits

0x1289,	// (0x00016b33) list_medium_line_t3_g3_t3

0x0002,

0xf1fa,	// (0x00024aa4) list_medium_line_t3_g3_t_ParamLimits

0xf1fa,	// (0x00024aa4) list_medium_line_t3_g3_t

0x12b7,	// (0x00016b61) list_medium_line_right_iconx2_g1

0x12b7,	// (0x00016b61) list_medium_line_right_iconx2_g2

0x0001,

0xf3dd,	// (0x00024c87) list_medium_line_right_iconx2_g

0x1820,	// (0x000170ca) list_medium_line_right_iconx2_t1

0x12b7,	// (0x00016b61) list_medium_line_t2_right_iconx2_g1

0x12b7,	// (0x00016b61) list_medium_line_t2_right_iconx2_g2

0x0001,

0xf3dd,	// (0x00024c87) list_medium_line_t2_right_iconx2_g

0x1820,	// (0x000170ca) list_medium_line_t2_right_iconx2_t1

0x1820,	// (0x000170ca) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfc5d,	// (0x00025507) list_medium_line_t2_right_iconx2_t

0x1820,	// (0x000170ca) list_medium_line_x4_t4_t1

0x1820,	// (0x000170ca) list_medium_line_x4_t4_t2

0x1820,	// (0x000170ca) list_medium_line_x4_t4_t3

0x1820,	// (0x000170ca) list_medium_line_x4_t4_t4

0x0003,

0xf2c8,	// (0x00024b72) list_medium_line_x4_t4_t

0xdb51,	// (0x000233fb) tport_appsw_pane_ParamLimits

0xdb51,	// (0x000233fb) tport_appsw_pane

0xdb5f,	// (0x00023409) tport_contact_pane_ParamLimits

0xdb5f,	// (0x00023409) tport_contact_pane

0xdb6f,	// (0x00023419) tport_listscroll_pane_ParamLimits

0xdb6f,	// (0x00023419) tport_listscroll_pane

0xdb7f,	// (0x00023429) cell_tport_appsw_pane_ParamLimits

0xdb7f,	// (0x00023429) cell_tport_appsw_pane

0x0fac,	// (0x00016856) tport_appsw_pane_g1_ParamLimits

0x0fac,	// (0x00016856) tport_appsw_pane_g1

0x5765,	// (0x0001b00f) tport_contact_pane_g1

0x4fac,	// (0x0001a856) tport_contact_pane_t1

0x576e,	// (0x0001b018) tport_contact_pane_t2

0x0001,

0xfc97,	// (0x00025541) tport_contact_pane_t

0x577c,	// (0x0001b026) list_tport_pane

0x5785,	// (0x0001b02f) scroll_pane_cp_030

0xdbb2,	// (0x0002345c) cell_tport_appsw_pane_g1

0xdbc2,	// (0x0002346c) cell_tport_appsw_pane_t1

0xdbd0,	// (0x0002347a) grid_highlight_pane_cp019

0xdbd8,	// (0x00023482) list_tport_double_graphic_pane_ParamLimits

0xdbd8,	// (0x00023482) list_tport_double_graphic_pane

0x08a7,	// (0x00016151) list_highlight_pane_cp023_ParamLimits

0x08a7,	// (0x00016151) list_highlight_pane_cp023

0xdbe9,	// (0x00023493) list_tport_double_graphic_pane_g1_ParamLimits

0xdbe9,	// (0x00023493) list_tport_double_graphic_pane_g1

0xdbf6,	// (0x000234a0) list_tport_double_graphic_pane_t1_ParamLimits

0xdbf6,	// (0x000234a0) list_tport_double_graphic_pane_t1

0xdc0b,	// (0x000234b5) list_tport_double_graphic_pane_t2_ParamLimits

0xdc0b,	// (0x000234b5) list_tport_double_graphic_pane_t2

0x0001,

0xfca3,	// (0x0002554d) list_tport_double_graphic_pane_t_ParamLimits

0xfca3,	// (0x0002554d) list_tport_double_graphic_pane_t

0x0838,	// (0x000160e2) main_cale_note_pane

0x8295,	// (0x0001db3f) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x8295,	// (0x0001db3f) cell_vitu2_function_top_wide_pane_cp01

0xd4da,	// (0x00022d84) wait_bar_pane_cp05_ParamLimits

0x08a7,	// (0x00016151) listscroll_cmail_pane

0x578e,	// (0x0001b038) list_cmail_pane

0xdc1d,	// (0x000234c7) list_cmail_body_pane

0xdc44,	// (0x000234ee) list_single_cmail_header_caption_pane

0xdc6d,	// (0x00023517) list_single_cmail_header_detail_pane_ParamLimits

0xdc6d,	// (0x00023517) list_single_cmail_header_detail_pane

0x579e,	// (0x0001b048) list_single_cmail_header_caption_pane_t1

0xdca3,	// (0x0002354d) list_single_cmail_header_detail_pane_g1_ParamLimits

0xdca3,	// (0x0002354d) list_single_cmail_header_detail_pane_g1

0x57b5,	// (0x0001b05f) list_single_cmail_header_detail_pane_g2_ParamLimits

0x57b5,	// (0x0001b05f) list_single_cmail_header_detail_pane_g2

0x0002,

0xfca8,	// (0x00025552) list_single_cmail_header_detail_pane_g_ParamLimits

0xfca8,	// (0x00025552) list_single_cmail_header_detail_pane_g

0x57ce,	// (0x0001b078) list_single_cmail_header_detail_pane_t1_ParamLimits

0x57ce,	// (0x0001b078) list_single_cmail_header_detail_pane_t1

0x582e,	// (0x0001b0d8) list_single_cmail_header_editor_pane_bg_ParamLimits

0x582e,	// (0x0001b0d8) list_single_cmail_header_editor_pane_bg

0x5109,	// (0x0001a9b3) list_cmail_body_pane_g1

0x5845,	// (0x0001b0ef) list_cmail_body_pane_t1

0x4327,	// (0x00019bd1) list_single_cmail_header_editor_pane_bg_g1

0x14c8,	// (0x00016d72) list_single_cmail_header_editor_pane_bg_g1_copy1

0x4337,	// (0x00019be1) list_single_cmail_header_editor_pane_bg_g1_copy2

0x432f,	// (0x00019bd9) list_single_cmail_header_editor_pane_bg_g1_copy3

0x45dc,	// (0x00019e86) list_single_cmail_header_editor_pane_bg_g1_copy4

0x4357,	// (0x00019c01) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0x4347,	// (0x00019bf1) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0x434f,	// (0x00019bf9) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0x14a8,	// (0x00016d52) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0xdcb9,	// (0x00023563) calenote_gesture_pane_ParamLimits

0xdcb9,	// (0x00023563) calenote_gesture_pane

0xdcd3,	// (0x0002357d) calenote_window_pane_ParamLimits

0xdcd3,	// (0x0002357d) calenote_window_pane

0x5853,	// (0x0001b0fd) popup_note_window_cp01

0xdceb,	// (0x00023595) calenote_swipe_1_pane_ParamLimits

0xdceb,	// (0x00023595) calenote_swipe_1_pane

0xd896,	// (0x00023140) calenote_swipe_2_pane_ParamLimits

0xd896,	// (0x00023140) calenote_swipe_2_pane

0x546e,	// (0x0001ad18) calenote_swipe_1_pane_g1_ParamLimits

0x546e,	// (0x0001ad18) calenote_swipe_1_pane_g1

0x547b,	// (0x0001ad25) calenote_swipe_1_pane_g2_ParamLimits

0x547b,	// (0x0001ad25) calenote_swipe_1_pane_g2

0x0001,

0xfc45,	// (0x000254ef) calenote_swipe_1_pane_g_ParamLimits

0xfc45,	// (0x000254ef) calenote_swipe_1_pane_g

0x5865,	// (0x0001b10f) calenote_swipe_1_pane_t1_ParamLimits

0x5865,	// (0x0001b10f) calenote_swipe_1_pane_t1

0x546e,	// (0x0001ad18) calenote_swipe_2_pane_g1_ParamLimits

0x546e,	// (0x0001ad18) calenote_swipe_2_pane_g1

0x5884,	// (0x0001b12e) calenote_swipe_2_pane_g2_ParamLimits

0x5884,	// (0x0001b12e) calenote_swipe_2_pane_g2

0x0001,

0xfcb4,	// (0x0002555e) calenote_swipe_2_pane_g_ParamLimits

0xfcb4,	// (0x0002555e) calenote_swipe_2_pane_g

0x5890,	// (0x0001b13a) calenote_swipe_2_pane_t1_ParamLimits

0x5890,	// (0x0001b13a) calenote_swipe_2_pane_t1

0x0838,	// (0x000160e2) main_mup_navstr_pane

0xb740,	// (0x00020fea) main_mup3_pane_t7_ParamLimits

0xb740,	// (0x00020fea) main_mup3_pane_t7

0x7ae7,	// (0x0001d391) main_mp4_pane_g6_ParamLimits

0x7ae7,	// (0x0001d391) main_mp4_pane_g6

0x7df8,	// (0x0001d6a2) main_image3_pane_t4_ParamLimits

0x7df8,	// (0x0001d6a2) main_image3_pane_t4

0xdcfe,	// (0x000235a8) popup_navstr_preview_pane_ParamLimits

0xdcfe,	// (0x000235a8) popup_navstr_preview_pane

0xdd0a,	// (0x000235b4) scroll_navstr_pane_ParamLimits

0xdd0a,	// (0x000235b4) scroll_navstr_pane

0x0838,	// (0x000160e2) bg_popup_preview_window_pane_cp04

0x58b7,	// (0x0001b161) popup_navstr_preview_pane_t1

0xdd16,	// (0x000235c0) scroll_navstr_pane_g1_ParamLimits

0xdd16,	// (0x000235c0) scroll_navstr_pane_g1

0xdd23,	// (0x000235cd) scroll_navstr_pane_t1_ParamLimits

0xdd23,	// (0x000235cd) scroll_navstr_pane_t1

0x585c,	// (0x0001b106) bg_button_pane_cp014

0x585c,	// (0x0001b106) bg_button_pane_cp030

0xd7a9,	// (0x00023053) list_double_fisheye_pane_g4_ParamLimits

0xd7a9,	// (0x00023053) list_double_fisheye_pane_g4

0xd7b5,	// (0x0002305f) list_double_fisheye_pane_g5_ParamLimits

0xd7b5,	// (0x0002305f) list_double_fisheye_pane_g5

0x5178,	// (0x0001aa22) sp_fs_scroll_pane_cp03

0x55d2,	// (0x0001ae7c) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0x55de,	// (0x0001ae88) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfc62,	// (0x0002550c) main_sp_fs_ctrlbar_pane_g_ParamLimits

0xd94b,	// (0x000231f5) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0x5796,	// (0x0001b040) sp_fs_scroll_pane_cp02

0x11bf,	// (0x00016a69) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0x11bf,	// (0x00016a69) popup_sp_fs_calendar_preview_list_single_pane

0x0838,	// (0x000160e2) main_cam6_pano_pane

0x765b,	// (0x0001cf05) main_mup3_pane_ParamLimits

0x0838,	// (0x000160e2) main_phacti_pane

0xd3af,	// (0x00022c59) bg_button_pane_cp11

0xd3c7,	// (0x00022c71) main_mobtv_info_pane_g2_ParamLimits

0xd3c7,	// (0x00022c71) main_mobtv_info_pane_g2

0x0001,

0xfbc2,	// (0x0002546c) main_mobtv_info_pane_g_ParamLimits

0xfbc2,	// (0x0002546c) main_mobtv_info_pane_g

0xd579,	// (0x00022e23) sc_clock_pane_t5_ParamLimits

0xd579,	// (0x00022e23) sc_clock_pane_t5

0xd61a,	// (0x00022ec4) main_radioblah_pane_g1_ParamLimits

0x53ba,	// (0x0001ac64) main_radioblah_pane_t3_ParamLimits

0x53ba,	// (0x0001ac64) main_radioblah_pane_t3

0x53d2,	// (0x0001ac7c) main_radioblah_pane_t4_ParamLimits

0x53d2,	// (0x0001ac7c) main_radioblah_pane_t4

0xd638,	// (0x00022ee2) main_radioblah_text_pane_ParamLimits

0xd638,	// (0x00022ee2) main_radioblah_text_pane

0xd645,	// (0x00022eef) main_radioblah_info_pane_g1_ParamLimits

0xd6da,	// (0x00022f84) main_radioblah_info_pane_t4_ParamLimits

0xd6da,	// (0x00022f84) main_radioblah_info_pane_t4

0x08a7,	// (0x00016151) main_sp_fs_calendar_pane

0xdd35,	// (0x000235df) main_phacti_pane_g1

0xdd3d,	// (0x000235e7) phacti_note_pane_ParamLimits

0xdd3d,	// (0x000235e7) phacti_note_pane

0x58ce,	// (0x0001b178) phacti_term_pane_ParamLimits

0x58ce,	// (0x0001b178) phacti_term_pane

0x58e3,	// (0x0001b18d) phacti_note_pane_t1_ParamLimits

0x58e3,	// (0x0001b18d) phacti_note_pane_t1

0x58fa,	// (0x0001b1a4) phacti_term_pane_g1

0x5902,	// (0x0001b1ac) phacti_term_pane_t1_ParamLimits

0x5902,	// (0x0001b1ac) phacti_term_pane_t1

0x592c,	// (0x0001b1d6) popup_sp_fs_calendar_preview_list_single_pane_g1

0x125e,	// (0x00016b08) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfcbe,	// (0x00025568) popup_sp_fs_calendar_preview_list_single_pane_g

0x5934,	// (0x0001b1de) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0x5934,	// (0x0001b1de) popup_sp_fs_calendar_preview_list_single_pane_t1

0x594a,	// (0x0001b1f4) aid_popup_sp_fs_bg_corner_pane

0x12b7,	// (0x00016b61) popup_sp_fs_calendar_preview_bg_pane_g1

0x0838,	// (0x000160e2) popup_sp_fs_calendar_preview_bg_pane

0x5952,	// (0x0001b1fc) popup_sp_fs_calendar_preview_list_pane

0x1e81,	// (0x0001772b) bg_main_sp_fs_cale_pane_ParamLimits

0x1e81,	// (0x0001772b) bg_main_sp_fs_cale_pane

0x5963,	// (0x0001b20d) listscroll_cale_mrui_pane_ParamLimits

0x5963,	// (0x0001b20d) listscroll_cale_mrui_pane

0x5978,	// (0x0001b222) listscroll_sp_fs_schedule_track_pane

0x5981,	// (0x0001b22b) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0x5981,	// (0x0001b22b) main_sp_fs_ctrlbar_pane_cp01

0x5994,	// (0x0001b23e) main_sp_fs_ribbon_pane

0x599c,	// (0x0001b246) popup_sp_fs_cale_preview_window

0xdda0,	// (0x0002364a) list_single_sp_fs_schedule_track_pane_ParamLimits

0xdda0,	// (0x0002364a) list_single_sp_fs_schedule_track_pane

0x0f90,	// (0x0001683a) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0x0f90,	// (0x0001683a) bg_sp_fs_highlight_list_pane_cp03

0xddc0,	// (0x0002366a) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0xddc0,	// (0x0002366a) list_single_sp_fs_schedule_track_pane_g1

0xddcc,	// (0x00023676) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0xddcc,	// (0x00023676) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfcc3,	// (0x0002556d) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfcc3,	// (0x0002556d) list_single_sp_fs_schedule_track_pane_g

0xddd8,	// (0x00023682) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0xddd8,	// (0x00023682) list_single_sp_fs_schedule_track_pane_t1

0xddf0,	// (0x0002369a) sp_fs_schedule_track_pane_ParamLimits

0xddf0,	// (0x0002369a) sp_fs_schedule_track_pane

0x59ae,	// (0x0001b258) sp_fs_schedule_track_pane_g1

0x59b6,	// (0x0001b260) sp_fs_schedule_track_pane_g2

0x59be,	// (0x0001b268) sp_fs_schedule_track_pane_g3

0x59c6,	// (0x0001b270) sp_fs_schedule_track_pane_g4

0x59ce,	// (0x0001b278) sp_fs_schedule_track_pane_g5

0x0004,

0xfcc8,	// (0x00025572) sp_fs_schedule_track_pane_g

0x4327,	// (0x00019bd1) bg_sp_fs_schedule_viewer_highlight_g1

0x14c8,	// (0x00016d72) bg_sp_fs_schedule_viewer_highlight_g2

0x432f,	// (0x00019bd9) bg_sp_fs_schedule_viewer_highlight_g3

0x4337,	// (0x00019be1) bg_sp_fs_schedule_viewer_highlight_g4

0x45dc,	// (0x00019e86) bg_sp_fs_schedule_viewer_highlight_g5

0x4347,	// (0x00019bf1) bg_sp_fs_schedule_viewer_highlight_g6

0x434f,	// (0x00019bf9) bg_sp_fs_schedule_viewer_highlight_g7

0x4357,	// (0x00019c01) bg_sp_fs_schedule_viewer_highlight_g8

0x14a8,	// (0x00016d52) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfcd3,	// (0x0002557d) bg_sp_fs_schedule_viewer_highlight_g

0x0838,	// (0x000160e2) bg_main_sp_fs_ribbon_pane

0xde00,	// (0x000236aa) main_sp_fs_ribbon_pane_g1

0x59d6,	// (0x0001b280) main_sp_fs_ribbon_pane_t1

0xde09,	// (0x000236b3) main_sp_fs_ribbon_pane_t2

0x59e5,	// (0x0001b28f) main_sp_fs_ribbon_pane_t3

0x0002,

0xfce6,	// (0x00025590) main_sp_fs_ribbon_pane_t

0x59f4,	// (0x0001b29e) main_sp_fs_ribbon_scheduler_pane

0x59fc,	// (0x0001b2a6) bg_main_sp_fs_ribbon_pane_g1

0x5a05,	// (0x0001b2af) bg_main_sp_fs_ribbon_pane_g2

0x5a0e,	// (0x0001b2b8) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfced,	// (0x00025597) bg_main_sp_fs_ribbon_pane_g

0x5a16,	// (0x0001b2c0) main_sp_fs_ribbon_scheduler_pane_g1

0x5a1f,	// (0x0001b2c9) main_sp_fs_ribbon_scheduler_pane_g2

0x5a28,	// (0x0001b2d2) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfcf4,	// (0x0002559e) main_sp_fs_ribbon_scheduler_pane_g

0x5a31,	// (0x0001b2db) list_cale_mrui_pane

0xde18,	// (0x000236c2) sp_fs_scroll_pane_cp07_ParamLimits

0xde18,	// (0x000236c2) sp_fs_scroll_pane_cp07

0xde34,	// (0x000236de) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0xde34,	// (0x000236de) bg_sp_fs_schedule_viewer_highlight

0x5a3e,	// (0x0001b2e8) list_single_sp_fs_schedule_track_pane_cp01

0x5a46,	// (0x0001b2f0) list_sp_fs_schedule_track_pane

0x5a4e,	// (0x0001b2f8) sp_fs_scroll_pane_cp06_ParamLimits

0x5a4e,	// (0x0001b2f8) sp_fs_scroll_pane_cp06

0x12b7,	// (0x00016b61) bgmain_sp_fs_calendar_pane_g1

0xde41,	// (0x000236eb) list_single_cale_mrui_pane_ParamLimits

0xde41,	// (0x000236eb) list_single_cale_mrui_pane

0x5a60,	// (0x0001b30a) list_single_cale_mrui_row_pane_ParamLimits

0x5a60,	// (0x0001b30a) list_single_cale_mrui_row_pane

0x5a6d,	// (0x0001b317) list_single_cale_mrui_row_pane_g1_ParamLimits

0x5a6d,	// (0x0001b317) list_single_cale_mrui_row_pane_g1

0x5ab2,	// (0x0001b35c) list_single_cale_mrui_row_pane_t1_ParamLimits

0x5ab2,	// (0x0001b35c) list_single_cale_mrui_row_pane_t1

0xde6b,	// (0x00023715) list_single_cale_mrui_row_pane_t2_ParamLimits

0xde6b,	// (0x00023715) list_single_cale_mrui_row_pane_t2

0x5ac4,	// (0x0001b36e) list_single_cale_mrui_row_pane_t3_ParamLimits

0x5ac4,	// (0x0001b36e) list_single_cale_mrui_row_pane_t3

0x5af3,	// (0x0001b39d) list_single_cale_mrui_row_pane_t4_ParamLimits

0x5af3,	// (0x0001b39d) list_single_cale_mrui_row_pane_t4

0x0003,

0xfd02,	// (0x000255ac) list_single_cale_mrui_row_pane_t_ParamLimits

0xfd02,	// (0x000255ac) list_single_cale_mrui_row_pane_t

0xded1,	// (0x0002377b) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0xded1,	// (0x0002377b) list_single_cmail_header_editor_pane_bg_cp01

0xdef1,	// (0x0002379b) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0xdef1,	// (0x0002379b) list_single_cmail_header_editor_pane_bg_cp02

0xdf0d,	// (0x000237b7) main_radioblah_text_pane_t1_ParamLimits

0xdf0d,	// (0x000237b7) main_radioblah_text_pane_t1

0x5b22,	// (0x0001b3cc) cam6_indi_pane_cp01

0x5b2a,	// (0x0001b3d4) cam6_mode_pane_cp01

0x5b32,	// (0x0001b3dc) cam6_pano_pane

0x5b3b,	// (0x0001b3e5) cam6_zoom_pane_cp01

0x5b43,	// (0x0001b3ed) cam6_pano_image_pane

0x5b4e,	// (0x0001b3f8) cam6_pano_pane_g1

0x5109,	// (0x0001a9b3) cam6_pano_pane_g2

0x5b57,	// (0x0001b401) cam6_pano_pane_g3

0x5b60,	// (0x0001b40a) cam6_pano_pane_g4

0x3bda,	// (0x00019484) cam6_pano_pane_g5

0x5b69,	// (0x0001b413) cam6_pano_pane_g6

0x5170,	// (0x0001aa1a) cam6_pano_pane_g7

0x5b73,	// (0x0001b41d) cam6_pano_pane_g8

0x5b7c,	// (0x0001b426) cam6_pano_pane_g9

0x0008,

0xfd0b,	// (0x000255b5) cam6_pano_pane_g

0x0838,	// (0x000160e2) main_browser_tag_pane

0x58af,	// (0x0001b159) grid_navstr_albumart_pane

0x5b87,	// (0x0001b431) cell_navstr_albumart_pane_ParamLimits

0x5b87,	// (0x0001b431) cell_navstr_albumart_pane

0x5ba7,	// (0x0001b451) cell_navstr_albumart_pane_g1

0x3046,	// (0x000188f0) cell_navstr_albumart_pane_g2

0x3056,	// (0x00018900) cell_navstr_albumart_pane_g3

0x304e,	// (0x000188f8) cell_navstr_albumart_pane_g4

0x0003,

0xfd1e,	// (0x000255c8) cell_navstr_albumart_pane_g

0xdf28,	// (0x000237d2) bt_list_pane_ParamLimits

0xdf28,	// (0x000237d2) bt_list_pane

0xdf48,	// (0x000237f2) bt_list_pane_t1

0xdf57,	// (0x00023801) bt_list_pane_t2

0x0001,

0xfd27,	// (0x000255d1) bt_list_pane_t

0x0838,	// (0x000160e2) main_cale_prevew_pane

0xdf66,	// (0x00023810) popup_cale_preview_window_ParamLimits

0xdf66,	// (0x00023810) popup_cale_preview_window

0x08a7,	// (0x00016151) bg_popup_preview_window_pane_cp05_ParamLimits

0x08a7,	// (0x00016151) bg_popup_preview_window_pane_cp05

0x5baf,	// (0x0001b459) list_cale_preview_pane_ParamLimits

0x5baf,	// (0x0001b459) list_cale_preview_pane

0xdf7f,	// (0x00023829) list_double_cale_preview_pane_ParamLimits

0xdf7f,	// (0x00023829) list_double_cale_preview_pane

0xdf91,	// (0x0002383b) list_single_cale_preview_pane_ParamLimits

0xdf91,	// (0x0002383b) list_single_cale_preview_pane

0xdfa7,	// (0x00023851) list_single_cale_preview_pane_g1

0xdfaf,	// (0x00023859) list_single_cale_preview_pane_t1_ParamLimits

0xdfaf,	// (0x00023859) list_single_cale_preview_pane_t1

0xdfc4,	// (0x0002386e) list_double_cale_preview_pane_g1

0xdfcc,	// (0x00023876) list_double_cale_preview_pane_t1_ParamLimits

0xdfcc,	// (0x00023876) list_double_cale_preview_pane_t1

0xdfe1,	// (0x0002388b) list_double_cale_preview_pane_t2_ParamLimits

0xdfe1,	// (0x0002388b) list_double_cale_preview_pane_t2

0x0001,

0xfd2c,	// (0x000255d6) list_double_cale_preview_pane_t_ParamLimits

0xfd2c,	// (0x000255d6) list_double_cale_preview_pane_t

0x0838,	// (0x000160e2) main_ezdial_pane

0x08a7,	// (0x00016151) main_sp_fs_email_pane_ParamLimits

0xd8b0,	// (0x0002315a) cmail_ddmenu_btn01_pane_ParamLimits

0xd8b0,	// (0x0002315a) cmail_ddmenu_btn01_pane

0xd8cd,	// (0x00023177) cmail_ddmenu_btn02_pane_ParamLimits

0xd8cd,	// (0x00023177) cmail_ddmenu_btn02_pane

0xd8eb,	// (0x00023195) cmail_ddmenu_btn03_pane_ParamLimits

0xd8eb,	// (0x00023195) cmail_ddmenu_btn03_pane

0xd986,	// (0x00023230) main_sp_fs_ctrlbar_pane_ParamLimits

0xd99c,	// (0x00023246) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0xdc1d,	// (0x000234c7) list_cmail_body_pane_ParamLimits

0x57ac,	// (0x0001b056) bg_button_pane_cp12

0x57c1,	// (0x0001b06b) list_single_cmail_header_detail_pane_g3_ParamLimits

0x57c1,	// (0x0001b06b) list_single_cmail_header_detail_pane_g3

0x580a,	// (0x0001b0b4) list_single_cmail_header_detail_pane_t2_ParamLimits

0x580a,	// (0x0001b0b4) list_single_cmail_header_detail_pane_t2

0x0001,

0xfcaf,	// (0x00025559) list_single_cmail_header_detail_pane_t_ParamLimits

0xfcaf,	// (0x00025559) list_single_cmail_header_detail_pane_t

0x5917,	// (0x0001b1c1) phacti_term_pane_t2_ParamLimits

0x5917,	// (0x0001b1c1) phacti_term_pane_t2

0x0001,

0xfcb9,	// (0x00025563) phacti_term_pane_t_ParamLimits

0xfcb9,	// (0x00025563) phacti_term_pane_t

0x5bbb,	// (0x0001b465) aid_size_list_single_double

0xdff9,	// (0x000238a3) popup_ezdial_listscroll_window

0xe01a,	// (0x000238c4) popup_number_entry_window_cp01

0x1277,	// (0x00016b21) bg_popup_call_pane_cp09

0x5bc7,	// (0x0001b471) ezdial_list_pane

0x5bcf,	// (0x0001b479) scroll_pane_cp23

0x3311,	// (0x00018bbb) bg_button_pane_cp028_ParamLimits

0x3311,	// (0x00018bbb) bg_button_pane_cp028

0xe028,	// (0x000238d2) cmail_ddmenu_btn01_pane_g1_ParamLimits

0xe028,	// (0x000238d2) cmail_ddmenu_btn01_pane_g1

0xe038,	// (0x000238e2) cmail_ddmenu_btn01_pane_g2_ParamLimits

0xe038,	// (0x000238e2) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfd31,	// (0x000255db) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfd31,	// (0x000255db) cmail_ddmenu_btn01_pane_g

0x5bd7,	// (0x0001b481) cmail_ddmenu_btn01_pane_t1_ParamLimits

0x5bd7,	// (0x0001b481) cmail_ddmenu_btn01_pane_t1

0x1e81,	// (0x0001772b) bg_button_pane_cp029_ParamLimits

0x1e81,	// (0x0001772b) bg_button_pane_cp029

0xe044,	// (0x000238ee) cmail_ddmenu_btn02_pane_g1_ParamLimits

0xe044,	// (0x000238ee) cmail_ddmenu_btn02_pane_g1

0xe05c,	// (0x00023906) cmail_ddmenu_btn02_pane_t1_ParamLimits

0xe05c,	// (0x00023906) cmail_ddmenu_btn02_pane_t1

0x0f90,	// (0x0001683a) bg_button_pane_cp031_ParamLimits

0x0f90,	// (0x0001683a) bg_button_pane_cp031

0xe044,	// (0x000238ee) cmail_ddmenu_btn03_pane_g1_ParamLimits

0xe044,	// (0x000238ee) cmail_ddmenu_btn03_pane_g1

0xe05c,	// (0x00023906) cmail_ddmenu_btn03_pane_t1_ParamLimits

0xe05c,	// (0x00023906) cmail_ddmenu_btn03_pane_t1

0xbd6a,	// (0x00021614) cell_dialer2_keypad_pane_t1_ParamLimits

0xbd84,	// (0x0002162e) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0xbd84,	// (0x0002162e) cell_dialer2_keypad_pane_t1_copy1

0xd1f0,	// (0x00022a9a) ncimui_group_button_pane

0x08a7,	// (0x00016151) main_sp_fs_calendar_pane_ParamLimits

0xdc44,	// (0x000234ee) list_single_cmail_header_caption_pane_ParamLimits

0x595a,	// (0x0001b204) aid_recal_txt_sm_pane

0x0838,	// (0x000160e2) mian_recal_day_pane

0x599c,	// (0x0001b246) popup_sp_fs_cale_preview_window_ParamLimits

0x5bed,	// (0x0001b497) list_recal_day_pane

0x5c2f,	// (0x0001b4d9) list_single_recal_day_pane_ParamLimits

0x5c2f,	// (0x0001b4d9) list_single_recal_day_pane

0x5c41,	// (0x0001b4eb) list_single_recal_day_pane_g1_ParamLimits

0x5c41,	// (0x0001b4eb) list_single_recal_day_pane_g1

0x5c4d,	// (0x0001b4f7) list_single_recal_day_pane_g2_ParamLimits

0x5c4d,	// (0x0001b4f7) list_single_recal_day_pane_g2

0x5c59,	// (0x0001b503) list_single_recal_day_pane_g3_ParamLimits

0x5c59,	// (0x0001b503) list_single_recal_day_pane_g3

0xe080,	// (0x0002392a) list_single_recal_day_pane_g4_ParamLimits

0xe080,	// (0x0002392a) list_single_recal_day_pane_g4

0x5c65,	// (0x0001b50f) list_single_recal_day_pane_g5_ParamLimits

0x5c65,	// (0x0001b50f) list_single_recal_day_pane_g5

0x5c71,	// (0x0001b51b) list_single_recal_day_pane_g6_ParamLimits

0x5c71,	// (0x0001b51b) list_single_recal_day_pane_g6

0x0004,

0xfd40,	// (0x000255ea) list_single_recal_day_pane_g_ParamLimits

0xfd40,	// (0x000255ea) list_single_recal_day_pane_g

0x5c85,	// (0x0001b52f) list_single_recal_day_pane_t1

0x5c97,	// (0x0001b541) list_single_recal_day_pane_t2

0x0001,

0xfd4b,	// (0x000255f5) list_single_recal_day_pane_t

0xe098,	// (0x00023942) ncimui_query_button_pane_ParamLimits

0xe098,	// (0x00023942) ncimui_query_button_pane

0xe0a8,	// (0x00023952) ncimui_query_button_pane_t1_ParamLimits

0xe0a8,	// (0x00023952) ncimui_query_button_pane_t1

0x5ca9,	// (0x0001b553) ncimui_query_button_pane_t2_ParamLimits

0x5ca9,	// (0x0001b553) ncimui_query_button_pane_t2

0x0001,

0xfd50,	// (0x000255fa) ncimui_query_button_pane_t_ParamLimits

0xfd50,	// (0x000255fa) ncimui_query_button_pane_t

0xe0bb,	// (0x00023965) query_button_pane_ParamLimits

0xe0bb,	// (0x00023965) query_button_pane

0x0838,	// (0x000160e2) bg_button_pane_cp0028

0x5cbc,	// (0x0001b566) query_button_pane_t1

0x7683,	// (0x0001cf2d) main_tport_pane_ParamLimits

0xdb27,	// (0x000233d1) bg_popup_window_pane_cp01_ParamLimits

0xdb27,	// (0x000233d1) bg_popup_window_pane_cp01

0xdb35,	// (0x000233df) heading_pane_cp08_ParamLimits

0xdb35,	// (0x000233df) heading_pane_cp08

0xdb43,	// (0x000233ed) heading_pane_cp07_ParamLimits

0xdb43,	// (0x000233ed) heading_pane_cp07

0xdbb2,	// (0x0002345c) cell_tport_appsw_pane_g2

0x0002,

0xfc9c,	// (0x00025546) cell_tport_appsw_pane_g

0x1f1c,	// (0x000177c6) input_candi_list_open_g1

0x16c1,	// (0x00016f6b) list_cale_time_pane_g6_ParamLimits

0x16c1,	// (0x00016f6b) list_cale_time_pane_g6

0xb166,	// (0x00020a10) aid_size_touch_calib_1_ParamLimits

0xb166,	// (0x00020a10) aid_size_touch_calib_1

0xb172,	// (0x00020a1c) aid_size_touch_calib_2_ParamLimits

0xb172,	// (0x00020a1c) aid_size_touch_calib_2

0xb180,	// (0x00020a2a) aid_size_touch_calib_3_ParamLimits

0xb180,	// (0x00020a2a) aid_size_touch_calib_3

0xb190,	// (0x00020a3a) aid_size_touch_calib_4_ParamLimits

0xb190,	// (0x00020a3a) aid_size_touch_calib_4

0xb19e,	// (0x00020a48) main_touch_calib_button_group_pane_ParamLimits

0xb19e,	// (0x00020a48) main_touch_calib_button_group_pane

0xb1ac,	// (0x00020a56) main_touch_calib_pane_g1_ParamLimits

0xb1b8,	// (0x00020a62) main_touch_calib_pane_g2_ParamLimits

0xb1c4,	// (0x00020a6e) main_touch_calib_pane_g3_ParamLimits

0xb1d0,	// (0x00020a7a) main_touch_calib_pane_g4_ParamLimits

0xf6de,	// (0x00024f88) main_touch_calib_pane_g_ParamLimits

0xb1dc,	// (0x00020a86) main_touch_calib_pane_t1_ParamLimits

0xb1f5,	// (0x00020a9f) main_touch_calib_pane_t2_ParamLimits

0xb20e,	// (0x00020ab8) main_touch_calib_pane_t3_ParamLimits

0xb224,	// (0x00020ace) main_touch_calib_pane_t4_ParamLimits

0xb23a,	// (0x00020ae4) main_touch_calib_pane_t5_ParamLimits

0xf6e7,	// (0x00024f91) main_touch_calib_pane_t_ParamLimits

0x399d,	// (0x00019247) list_single_fp_cale_pane_g3_ParamLimits

0x399d,	// (0x00019247) list_single_fp_cale_pane_g3

0x765b,	// (0x0001cf05) bg_button_pane_cp012_ParamLimits

0x765b,	// (0x0001cf05) bg_vkb2_func_pane_cp03_ParamLimits

0x8494,	// (0x0001dd3e) cell_vitu2_function_top_pane_g1_ParamLimits

0x765b,	// (0x0001cf05) bg_vkb2_func_pane_cp04_ParamLimits

0xd178,	// (0x00022a22) main_ncimui_button_group_pane_ParamLimits

0xd178,	// (0x00022a22) main_ncimui_button_group_pane

0xd1de,	// (0x00022a88) main_ncimui_pane_t3_ParamLimits

0xd1de,	// (0x00022a88) main_ncimui_pane_t3

0x58c5,	// (0x0001b16f) phacti_button_group_pane

0x5bbb,	// (0x0001b465) aid_size_list_single_double_ParamLimits

0xdff9,	// (0x000238a3) popup_ezdial_listscroll_window_ParamLimits

0xe01a,	// (0x000238c4) popup_number_entry_window_cp01_ParamLimits

0xe0c8,	// (0x00023972) phacti_button_pane_ParamLimits

0xe0c8,	// (0x00023972) phacti_button_pane

0x0838,	// (0x000160e2) bg_button_pane_cp14

0x5cca,	// (0x0001b574) phacti_button_pane_t1

0xe0d9,	// (0x00023983) main_touch_calib_button_pane_ParamLimits

0xe0d9,	// (0x00023983) main_touch_calib_button_pane

0x1032,	// (0x000168dc) bg_button_pane_cp18_ParamLimits

0x1032,	// (0x000168dc) bg_button_pane_cp18

0x5cd8,	// (0x0001b582) main_touch_calib_button_pane_t1_ParamLimits

0x5cd8,	// (0x0001b582) main_touch_calib_button_pane_t1

0x5cee,	// (0x0001b598) main_touch_calib_button_pane_t2_ParamLimits

0x5cee,	// (0x0001b598) main_touch_calib_button_pane_t2

0x0001,

0xfd55,	// (0x000255ff) main_touch_calib_button_pane_t_ParamLimits

0xfd55,	// (0x000255ff) main_touch_calib_button_pane_t

0x0838,	// (0x000160e2) cell_ncimui_button_pane

0x0838,	// (0x000160e2) bg_button_pane_cp032

0x5d0c,	// (0x0001b5b6) cell_ncimui_button_pane_t1

0x7d0b,	// (0x0001d5b5) image3_infobar_pane_ParamLimits

0x7d0b,	// (0x0001d5b5) image3_infobar_pane

0xd59b,	// (0x00022e45) fs_bigclock_status_pane_ParamLimits

0xd59b,	// (0x00022e45) fs_bigclock_status_pane

0xd5a8,	// (0x00022e52) main_fs_bigclock_clock_pane_ParamLimits

0xd5a8,	// (0x00022e52) main_fs_bigclock_clock_pane

0xd5bc,	// (0x00022e66) main_fs_bigclock_indi_pane_ParamLimits

0xd5bc,	// (0x00022e66) main_fs_bigclock_indi_pane

0xd5e4,	// (0x00022e8e) main_fs_bigclock_swipe_pane_ParamLimits

0xd5e4,	// (0x00022e8e) main_fs_bigclock_swipe_pane

0x0838,	// (0x000160e2) main_fs_clock_dumped_data

0x522a,	// (0x0001aad4) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0x522a,	// (0x0001aad4) list_single_fs_bigclock_indicator_pane_g1

0x5245,	// (0x0001aaef) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0x5245,	// (0x0001aaef) list_single_fs_bigclock_indicator_pane_g2

0x525f,	// (0x0001ab09) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0x525f,	// (0x0001ab09) list_single_fs_bigclock_indicator_pane_g3

0x5279,	// (0x0001ab23) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0x5279,	// (0x0001ab23) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfbf6,	// (0x000254a0) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfbf6,	// (0x000254a0) list_single_fs_bigclock_indicator_pane_g

0x52a4,	// (0x0001ab4e) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0x52a4,	// (0x0001ab4e) list_single_fs_bigclock_indicator_pane_t1

0x52cc,	// (0x0001ab76) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0x52cc,	// (0x0001ab76) list_single_fs_bigclock_indicator_pane_t2

0x52f4,	// (0x0001ab9e) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0x52f4,	// (0x0001ab9e) list_single_fs_bigclock_indicator_pane_t3

0x531c,	// (0x0001abc6) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0x531c,	// (0x0001abc6) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfc01,	// (0x000254ab) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfc01,	// (0x000254ab) list_single_fs_bigclock_indicator_pane_t

0x5d1a,	// (0x0001b5c4) image3_infobar_fav_pane_ParamLimits

0x5d1a,	// (0x0001b5c4) image3_infobar_fav_pane

0x5d2a,	// (0x0001b5d4) image3_infobar_loc_pane_ParamLimits

0x5d2a,	// (0x0001b5d4) image3_infobar_loc_pane

0x5d3e,	// (0x0001b5e8) image3_infobar_time_pane_ParamLimits

0x5d3e,	// (0x0001b5e8) image3_infobar_time_pane

0x12b7,	// (0x00016b61) image3_infobar_time_pane_g1

0x5d4e,	// (0x0001b5f8) image3_infobar_time_pane_t1

0x12b7,	// (0x00016b61) image3_infobar_loc_pane_g1

0x5d5c,	// (0x0001b606) image3_infobar_loc_pane_g2

0x0001,

0xfd5a,	// (0x00025604) image3_infobar_loc_pane_g

0x5d64,	// (0x0001b60e) image3_infobar_loc_pane_t1

0x12b7,	// (0x00016b61) image3_infobar_fav_pane_g1

0x5d72,	// (0x0001b61c) image3_infobar_fav_pane_g2

0x0001,

0xfd5f,	// (0x00025609) image3_infobar_fav_pane_g

0x5d7a,	// (0x0001b624) fs_bigclock_status_battery_pane

0x5d83,	// (0x0001b62d) fs_bigclock_status_signal_pane

0x5d8c,	// (0x0001b636) fs_bigclock_status_title_pane

0x5d95,	// (0x0001b63f) fs_bigclock_status_signal_pane_g1

0x5d9e,	// (0x0001b648) fs_bigclock_status_signal_pane_g2

0x0001,

0xfd64,	// (0x0002560e) fs_bigclock_status_signal_pane_g

0x5da6,	// (0x0001b650) fs_bigclock_status_battery_pane_g1

0x5daf,	// (0x0001b659) fs_bigclock_status_battery_pane_g2

0x0001,

0xfd69,	// (0x00025613) fs_bigclock_status_battery_pane_g

0x5db7,	// (0x0001b661) fs_bigclock_status_title_pane_t1

0xe0e9,	// (0x00023993) main_fs_bigclock_clock_pane_g1

0xe0e9,	// (0x00023993) main_fs_bigclock_clock_pane_g2

0xe0f6,	// (0x000239a0) main_fs_bigclock_clock_pane_g3

0xe0f6,	// (0x000239a0) main_fs_bigclock_clock_pane_g4

0x0003,

0xfd6e,	// (0x00025618) main_fs_bigclock_clock_pane_g

0xe102,	// (0x000239ac) main_fs_bigclock_clock_pane_t1

0xe115,	// (0x000239bf) main_fs_bigclock_clock_pane_t2

0x0001,

0xfd77,	// (0x00025621) main_fs_bigclock_clock_pane_t

0x5dc5,	// (0x0001b66f) list_single_fs_bigclock_indicator_pane_ParamLimits

0x5dc5,	// (0x0001b66f) list_single_fs_bigclock_indicator_pane

0x5dd6,	// (0x0001b680) list_single_fs_bigclock_pane_ParamLimits

0x5dd6,	// (0x0001b680) list_single_fs_bigclock_pane

0x5dfc,	// (0x0001b6a6) main_fs_bigclock_indicator_pane_t1

0x5e0b,	// (0x0001b6b5) list_single_fs_bigclock_pane_g1

0x5e13,	// (0x0001b6bd) list_single_fs_bigclock_pane_t1

0x12b7,	// (0x00016b61) main_fs_bigclock_swipe_pane_g1

0x5e56,	// (0x0001b700) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfd88,	// (0x00025632) main_fs_bigclock_swipe_pane_g

0x5e5e,	// (0x0001b708) main_fs_bigclock_swipe_pane_t1_ParamLimits

0x5e5e,	// (0x0001b708) main_fs_bigclock_swipe_pane_t1

0xa1d3,	// (0x0001fa7d) call_type_pane_ParamLimits

0x0838,	// (0x000160e2) main_btmg_pane

0x5a99,	// (0x0001b343) list_single_cale_mrui_row_pane_g2_ParamLimits

0x5a99,	// (0x0001b343) list_single_cale_mrui_row_pane_g2

0x0002,

0xfcfb,	// (0x000255a5) list_single_cale_mrui_row_pane_g_ParamLimits

0xfcfb,	// (0x000255a5) list_single_cale_mrui_row_pane_g

0x5c16,	// (0x0001b4c0) list_recal_vselct_arw_lo_pane

0x5c1e,	// (0x0001b4c8) list_recal_vselct_arw_up_pane

0x5c26,	// (0x0001b4d0) list_recal_vselct_pane

0xe16c,	// (0x00023a16) btmg_button_pane

0xe178,	// (0x00023a22) main_btmg_pane_g1

0x0838,	// (0x000160e2) bg_button_pane_cp044

0x5e7b,	// (0x0001b725) btmg_button_pane_t1

0x3196,	// (0x00018a40) aid_listscroll_gen

0x08a7,	// (0x00016151) main_cntbar_detail_pane

0x578e,	// (0x0001b038) list_cmail_folder_pane

0x5178,	// (0x0001aa22) sp_fs_scroll_pane_cp03_ParamLimits

0xdc44,	// (0x000234ee) list_single_fs_dyc_pane_cp01_ParamLimits

0xdc44,	// (0x000234ee) list_single_fs_dyc_pane_cp01

0x5e89,	// (0x0001b733) aid_size_cmail_indent

0x5e92,	// (0x0001b73c) list_single_dyc_row_pane_cp01

0xe1a0,	// (0x00023a4a) cntbar_detail_list_pane_ParamLimits

0xe1a0,	// (0x00023a4a) cntbar_detail_list_pane

0xe1da,	// (0x00023a84) main_cntbar_detail_cont_pane_ParamLimits

0xe1da,	// (0x00023a84) main_cntbar_detail_cont_pane

0xa1c7,	// (0x0001fa71) scroll_pane_cp032_ParamLimits

0xa1c7,	// (0x0001fa71) scroll_pane_cp032

0xe1e6,	// (0x00023a90) cntbar_detail_list_event_pane_ParamLimits

0xe1e6,	// (0x00023a90) cntbar_detail_list_event_pane

0xe1ac,	// (0x00023a56) cntbar_detail_list_shct_pane

0x1516,	// (0x00016dc0) aid_list_gen

0x5e9b,	// (0x0001b745) aid_scroll

0x5ea4,	// (0x0001b74e) aid_size_touch_scroll_bar

0xd774,	// (0x0002301e) aid_list_double

0x5ead,	// (0x0001b757) aid_list_single

0x5ead,	// (0x0001b757) aid_list_single_lg

0x5eb6,	// (0x0001b760) aid_list_z_g_a_sm

0x5ebe,	// (0x0001b768) aid_list_z_g_d

0x5ec6,	// (0x0001b770) aid_txt_z_prm

0xe1fa,	// (0x00023aa4) aid_txt_z_prm_cp01

0xe208,	// (0x00023ab2) aid_txt_z_sec

0xe216,	// (0x00023ac0) main_cntbar_detail_cont_pane_g1_ParamLimits

0xe216,	// (0x00023ac0) main_cntbar_detail_cont_pane_g1

0xe223,	// (0x00023acd) main_cntbar_detail_cont_pane_g2_ParamLimits

0xe223,	// (0x00023acd) main_cntbar_detail_cont_pane_g2

0x0001,

0xfd8d,	// (0x00025637) main_cntbar_detail_cont_pane_g_ParamLimits

0xfd8d,	// (0x00025637) main_cntbar_detail_cont_pane_g

0x5ed4,	// (0x0001b77e) main_cntbar_detail_cont_pane_t1

0x5ee2,	// (0x0001b78c) main_cntbar_detail_cont_pane_t2

0x5ef0,	// (0x0001b79a) main_cntbar_detail_cont_pane_t3

0x0002,

0xfd92,	// (0x0002563c) main_cntbar_detail_cont_pane_t

0xe22f,	// (0x00023ad9) cell_cntbar_detail_list_shct_pane_ParamLimits

0xe22f,	// (0x00023ad9) cell_cntbar_detail_list_shct_pane

0x5efe,	// (0x0001b7a8) cntbar_detail_list_shct_pane_g1

0x5f07,	// (0x0001b7b1) cntbar_detail_list_shct_pane_g2

0x0001,

0xfd99,	// (0x00025643) cntbar_detail_list_shct_pane_g

0xe243,	// (0x00023aed) cntbar_detail_list_event_pane_g1_ParamLimits

0xe243,	// (0x00023aed) cntbar_detail_list_event_pane_g1

0xe24f,	// (0x00023af9) cntbar_detail_list_event_pane_g2_ParamLimits

0xe24f,	// (0x00023af9) cntbar_detail_list_event_pane_g2

0x0005,

0xfd9e,	// (0x00025648) cntbar_detail_list_event_pane_g_ParamLimits

0xfd9e,	// (0x00025648) cntbar_detail_list_event_pane_g

0xe2bb,	// (0x00023b65) cntbar_detail_list_event_pane_t1_ParamLimits

0xe2bb,	// (0x00023b65) cntbar_detail_list_event_pane_t1

0xe2d0,	// (0x00023b7a) cntbar_detail_list_event_pane_t2_ParamLimits

0xe2d0,	// (0x00023b7a) cntbar_detail_list_event_pane_t2

0x0002,

0xfdab,	// (0x00025655) cntbar_detail_list_event_pane_t_ParamLimits

0xfdab,	// (0x00025655) cntbar_detail_list_event_pane_t

0x12b7,	// (0x00016b61) cell_cntbar_detail_list_shct_pane_g1

0x1d3a,	// (0x000175e4) navi_pane_mv_g3

0x08a7,	// (0x00016151) main_cntbar_detail_pane_ParamLimits

0x0838,	// (0x000160e2) main_notif_wgt_pane

0x7a22,	// (0x0001d2cc) aid_tch_main_mp4_pane_g4

0x7c81,	// (0x0001d52b) popup_slider_window_cp02

0x5c0c,	// (0x0001b4b6) list_recal_day_event_pane

0xe180,	// (0x00023a2a) cntbar_detail_btn_pane_ParamLimits

0xe180,	// (0x00023a2a) cntbar_detail_btn_pane

0xe190,	// (0x00023a3a) cntbar_detail_btn_pane_cp01_ParamLimits

0xe190,	// (0x00023a3a) cntbar_detail_btn_pane_cp01

0xe1ac,	// (0x00023a56) cntbar_detail_list_shct_pane_ParamLimits

0xe1b8,	// (0x00023a62) cntbar_detail_pane_g1_ParamLimits

0xe1b8,	// (0x00023a62) cntbar_detail_pane_g1

0xe1c4,	// (0x00023a6e) cntbar_detail_pane_t1_ParamLimits

0xe1c4,	// (0x00023a6e) cntbar_detail_pane_t1

0xe25b,	// (0x00023b05) cntbar_detail_list_event_pane_g3_ParamLimits

0xe25b,	// (0x00023b05) cntbar_detail_list_event_pane_g3

0xe273,	// (0x00023b1d) cntbar_detail_list_event_pane_g4_ParamLimits

0xe273,	// (0x00023b1d) cntbar_detail_list_event_pane_g4

0xe28b,	// (0x00023b35) cntbar_detail_list_event_pane_g5_ParamLimits

0xe28b,	// (0x00023b35) cntbar_detail_list_event_pane_g5

0xe2a3,	// (0x00023b4d) cntbar_detail_list_event_pane_g6_ParamLimits

0xe2a3,	// (0x00023b4d) cntbar_detail_list_event_pane_g6

0xe2e5,	// (0x00023b8f) cntbar_detail_list_event_pane_t3_ParamLimits

0xe2e5,	// (0x00023b8f) cntbar_detail_list_event_pane_t3

0xe2f7,	// (0x00023ba1) popup_notif_wgt_window_ParamLimits

0xe2f7,	// (0x00023ba1) popup_notif_wgt_window

0xe307,	// (0x00023bb1) popup_submenu_window_cp01_ParamLimits

0xe307,	// (0x00023bb1) popup_submenu_window_cp01

0x1277,	// (0x00016b21) bg_popup_window_pane_cp10

0x5f10,	// (0x0001b7ba) listscroll_notif_wgt_pane

0x5f22,	// (0x0001b7cc) list_notif_wgt_window

0x5f2b,	// (0x0001b7d5) scroll_pane_cp033

0xe319,	// (0x00023bc3) list_notif_wgt_row_pane_ParamLimits

0xe319,	// (0x00023bc3) list_notif_wgt_row_pane

0x5f34,	// (0x0001b7de) aid_size_list_notif_wgt_del

0x5f41,	// (0x0001b7eb) list_notif_wgt_row_pane_g1

0x5f4d,	// (0x0001b7f7) list_notif_wgt_row_pane_g2

0x5f5c,	// (0x0001b806) list_notif_wgt_row_pane_g3

0x0002,

0xfdb2,	// (0x0002565c) list_notif_wgt_row_pane_g

0x5f69,	// (0x0001b813) list_notif_wgt_row_pane_t1

0x5f7f,	// (0x0001b829) list_notif_wgt_row_pane_t2

0x5f91,	// (0x0001b83b) list_notif_wgt_row_pane_t3

0x0002,

0xfdb9,	// (0x00025663) list_notif_wgt_row_pane_t

0x4604,	// (0x00019eae) list_recal_day_event_pane_g1

0x5fa3,	// (0x0001b84d) list_recal_day_event_pane_t1

0x0838,	// (0x000160e2) bg_button_pane_cp045

0x5fb2,	// (0x0001b85c) cntbar_detail_btn_pane_t1

0x1e81,	// (0x0001772b) main_callh_pane_ParamLimits

0x1e81,	// (0x0001772b) main_callh_pane

0x0838,	// (0x000160e2) main_coverflow0_pane

0x0838,	// (0x000160e2) main_wgtman_pane

0xd5fc,	// (0x00022ea6) main_fs_bigclock_unlock_btn_pane_ParamLimits

0xd5fc,	// (0x00022ea6) main_fs_bigclock_unlock_btn_pane

0xdbaa,	// (0x00023454) bg_button_pane_cp16

0xdbba,	// (0x00023464) cell_tport_appsw_pane_g3

0xe32b,	// (0x00023bd5) cf0_flow_pane_ParamLimits

0xe32b,	// (0x00023bd5) cf0_flow_pane

0x5fc0,	// (0x0001b86a) listscroll_cf0_pane

0x5fcb,	// (0x0001b875) main_cf0_pane_g1

0xe33a,	// (0x00023be4) main_cf0_pane_t1_ParamLimits

0xe33a,	// (0x00023be4) main_cf0_pane_t1

0xe34e,	// (0x00023bf8) main_cf0_pane_t2_ParamLimits

0xe34e,	// (0x00023bf8) main_cf0_pane_t2

0x0001,

0xfdc5,	// (0x0002566f) main_cf0_pane_t_ParamLimits

0xfdc5,	// (0x0002566f) main_cf0_pane_t

0x5fdd,	// (0x0001b887) scroll_pane_cp11

0xe362,	// (0x00023c0c) cf0_flow_pane_g1

0xe36a,	// (0x00023c14) cf0_flow_pane_g2

0x0001,

0xfdca,	// (0x00025674) cf0_flow_pane_g

0xe372,	// (0x00023c1c) cf0_flow_pane_t1

0x0838,	// (0x000160e2) main_call6_pane

0x0838,	// (0x000160e2) main_calllock_pane

0x86b9,	// (0x0001df63) call6_btn_grp_pane_ParamLimits

0x86b9,	// (0x0001df63) call6_btn_grp_pane

0x86c8,	// (0x0001df72) call6_pane_g1_ParamLimits

0x86c8,	// (0x0001df72) call6_pane_g1

0x86d8,	// (0x0001df82) popup_call6_1st_window_ParamLimits

0x86d8,	// (0x0001df82) popup_call6_1st_window

0x86e6,	// (0x0001df90) popup_call6_2nd_window_ParamLimits

0x86e6,	// (0x0001df90) popup_call6_2nd_window

0x86f4,	// (0x0001df9e) cell_call6_btn_pane_ParamLimits

0x86f4,	// (0x0001df9e) cell_call6_btn_pane

0x1277,	// (0x00016b21) bg_popup_call2_in_pane_cp03

0x5fe8,	// (0x0001b892) popup_call6_1st_window_g1

0x5ff0,	// (0x0001b89a) popup_call6_1st_window_g2

0x5ff8,	// (0x0001b8a2) popup_call6_1st_window_g3

0x0002,

0xfdcf,	// (0x00025679) popup_call6_1st_window_g

0x6000,	// (0x0001b8aa) popup_call6_1st_window_t1

0x600f,	// (0x0001b8b9) popup_call6_1st_window_t2

0x601d,	// (0x0001b8c7) popup_call6_1st_window_t3

0x0002,

0xfdd6,	// (0x00025680) popup_call6_1st_window_t

0x1277,	// (0x00016b21) bg_popup_call2_in_pane_cp04

0x602b,	// (0x0001b8d5) popup_call6_2nd_window_g1

0x6033,	// (0x0001b8dd) popup_call6_2nd_window_g2

0x603b,	// (0x0001b8e5) popup_call6_2nd_window_g3

0x0002,

0xfddd,	// (0x00025687) popup_call6_2nd_window_g

0x6043,	// (0x0001b8ed) popup_call6_2nd_window_t1

0x7203,	// (0x0001caad) bg_button_pane_cp15

0x8703,	// (0x0001dfad) cell_call6_btn_pane_g1

0x870c,	// (0x0001dfb6) cell_call6_btn_pane_t1

0xe380,	// (0x00023c2a) listscroll_wgtman_pane_ParamLimits

0xe380,	// (0x00023c2a) listscroll_wgtman_pane

0xe39c,	// (0x00023c46) wgtman_btn_pane_ParamLimits

0xe39c,	// (0x00023c46) wgtman_btn_pane

0x1b41,	// (0x000173eb) aid_scroll_copy1

0x606a,	// (0x0001b914) list_wgtman_pane

0xe3d1,	// (0x00023c7b) wgtman_btn_pane_g1_ParamLimits

0xe3d1,	// (0x00023c7b) wgtman_btn_pane_g1

0xe3f9,	// (0x00023ca3) wgtman_btn_pane_t1_ParamLimits

0xe3f9,	// (0x00023ca3) wgtman_btn_pane_t1

0x6074,	// (0x0001b91e) wgtman_btn_pane_t2_ParamLimits

0x6074,	// (0x0001b91e) wgtman_btn_pane_t2

0x0001,

0xfde4,	// (0x0002568e) wgtman_btn_pane_t_ParamLimits

0xfde4,	// (0x0002568e) wgtman_btn_pane_t

0xe430,	// (0x00023cda) listrow_wgtman_pane_ParamLimits

0xe430,	// (0x00023cda) listrow_wgtman_pane

0xe44b,	// (0x00023cf5) listrow_wgtman_pane_g1

0xe458,	// (0x00023d02) listrow_wgtman_pane_g2

0x0001,

0xfde9,	// (0x00025693) listrow_wgtman_pane_g

0xe476,	// (0x00023d20) listrow_wgtman_pane_t1

0xe48e,	// (0x00023d38) listrow_wgtman_pane_t2

0x0001,

0xfdee,	// (0x00025698) listrow_wgtman_pane_t

0xe4b4,	// (0x00023d5e) wait_bar_pane_cp09

0x608b,	// (0x0001b935) main_calllock_btn_pane

0x6095,	// (0x0001b93f) main_calllock_pane_g1

0x0838,	// (0x000160e2) bg_button_pane_cp17

0x6052,	// (0x0001b8fc) main_calllock_btn_pane_g1

0x609d,	// (0x0001b947) main_calllock_btn_pane_t1

0x0838,	// (0x000160e2) main_dialer3_pane

0x0838,	// (0x000160e2) main_fmrd2_pane

0x12b7,	// (0x00016b61) main_fs_bigclock_unlock_btn_pane_g1

0xe4ce,	// (0x00023d78) main_fs_bigclock_unlock_btn_pane_t1

0xe4dc,	// (0x00023d86) area_fmrd2_info_pane_ParamLimits

0xe4dc,	// (0x00023d86) area_fmrd2_info_pane

0xe4ea,	// (0x00023d94) area_fmrd2_visual_pane_ParamLimits

0xe4ea,	// (0x00023d94) area_fmrd2_visual_pane

0xe4f8,	// (0x00023da2) fmrd2_indi_pane_ParamLimits

0xe4f8,	// (0x00023da2) fmrd2_indi_pane

0xe505,	// (0x00023daf) area_fmrd2_visual_pane_g1

0xe50d,	// (0x00023db7) area_fmrd2_visual_pane_t1

0xe51d,	// (0x00023dc7) area_fmrd2_visual_pane_t2

0xe52d,	// (0x00023dd7) area_fmrd2_visual_pane_t3

0x0002,

0xfdf8,	// (0x000256a2) area_fmrd2_visual_pane_t

0xe53d,	// (0x00023de7) area_fmrd2_info_pane_g1

0xe545,	// (0x00023def) area_fmrd2_info_pane_t1

0xe555,	// (0x00023dff) area_fmrd2_info_pane_t2

0xe565,	// (0x00023e0f) area_fmrd2_info_pane_t3

0xe575,	// (0x00023e1f) area_fmrd2_info_pane_t4

0x0003,

0xfdff,	// (0x000256a9) area_fmrd2_info_pane_t

0xe583,	// (0x00023e2d) fmrd2_indi_pane_t1

0xe593,	// (0x00023e3d) fmrd2_indi_pane_t2

0xe5a3,	// (0x00023e4d) fmrd2_indi_pane_t3

0x0002,

0xfe08,	// (0x000256b2) fmrd2_indi_pane_t

0x5288,	// (0x0001ab32) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0x5288,	// (0x0001ab32) list_single_fs_bigclock_indicator_pane_g5

0x5339,	// (0x0001abe3) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0x5339,	// (0x0001abe3) list_single_fs_bigclock_indicator_pane_t5

0xdd53,	// (0x000235fd) aid_cell_bcale_month_pane_ParamLimits

0xdd53,	// (0x000235fd) aid_cell_bcale_month_pane

0xdd71,	// (0x0002361b) bcale_month_pane_ParamLimits

0xdd71,	// (0x0002361b) bcale_month_pane

0xdd8f,	// (0x00023639) bcale_preview_pane_ParamLimits

0xdd8f,	// (0x00023639) bcale_preview_pane

0x5e13,	// (0x0001b6bd) list_single_fs_bigclock_pane_t1_ParamLimits

0x5e32,	// (0x0001b6dc) list_single_fs_bigclock_pane_t2_ParamLimits

0x5e32,	// (0x0001b6dc) list_single_fs_bigclock_pane_t2

0x0001,

0xfd83,	// (0x0002562d) list_single_fs_bigclock_pane_t_ParamLimits

0xfd83,	// (0x0002562d) list_single_fs_bigclock_pane_t

0xe4c6,	// (0x00023d70) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfdf3,	// (0x0002569d) main_fs_bigclock_unlock_btn_pane_g

0xe5b1,	// (0x00023e5b) aid_dia3_key_size_ParamLimits

0xe5b1,	// (0x00023e5b) aid_dia3_key_size

0xe5bd,	// (0x00023e67) aid_dia3_listrow_size_ParamLimits

0xe5bd,	// (0x00023e67) aid_dia3_listrow_size

0xe5cd,	// (0x00023e77) dia3_keypad_fun_pane_ParamLimits

0xe5cd,	// (0x00023e77) dia3_keypad_fun_pane

0xe5df,	// (0x00023e89) dia3_keypad_num_pane_ParamLimits

0xe5df,	// (0x00023e89) dia3_keypad_num_pane

0xe5f1,	// (0x00023e9b) dia3_listscroll_pane_ParamLimits

0xe5f1,	// (0x00023e9b) dia3_listscroll_pane

0xe5ff,	// (0x00023ea9) dia3_numentry_pane_ParamLimits

0xe5ff,	// (0x00023ea9) dia3_numentry_pane

0x60ac,	// (0x0001b956) dia3_list_pane

0x60b7,	// (0x0001b961) scroll_pane_cp12

0x0838,	// (0x000160e2) bg_dia3_numentry_pane

0xe60d,	// (0x00023eb7) dia3_numentry_pane_t1

0xe61c,	// (0x00023ec6) cell_dia3_key_num_pane

0xe624,	// (0x00023ece) cell_dia3_key0_fun_pane_ParamLimits

0xe624,	// (0x00023ece) cell_dia3_key0_fun_pane

0xe631,	// (0x00023edb) cell_dia3_key1_fun_pane_ParamLimits

0xe631,	// (0x00023edb) cell_dia3_key1_fun_pane

0xe63e,	// (0x00023ee8) dia3_listrow_pane

0x4fc7,	// (0x0001a871) bg_dia3_numentry_pane_g1

0x0838,	// (0x000160e2) bg_button_pane_cp21

0x60c2,	// (0x0001b96c) cell_dia3_key_num_pane_t1

0x60d0,	// (0x0001b97a) cell_dia3_key_num_pane_t2

0x60df,	// (0x0001b989) cell_dia3_key_num_pane_t3

0x60ee,	// (0x0001b998) cell_dia3_key_num_pane_t4

0x0003,

0xfe0f,	// (0x000256b9) cell_dia3_key_num_pane_t

0x0838,	// (0x000160e2) bg_button_pane_cp19

0xe64b,	// (0x00023ef5) cell_dia3_key0_fun_pane_g1

0x0838,	// (0x000160e2) bg_button_pane_cp20

0xe653,	// (0x00023efd) cell_dia3_key1_fun_pane_g1

0xe65b,	// (0x00023f05) area_left_week_number_pane

0xe66e,	// (0x00023f18) area_top_day_name_pane

0xe67c,	// (0x00023f26) frame_month_view_pane

0x60fd,	// (0x0001b9a7) grid_month_view_pane

0xe691,	// (0x00023f3b) cell_top_day_name_pane_ParamLimits

0xe691,	// (0x00023f3b) cell_top_day_name_pane

0xe6ab,	// (0x00023f55) cell_area_left_week_number_pane_ParamLimits

0xe6ab,	// (0x00023f55) cell_area_left_week_number_pane

0xe6ce,	// (0x00023f78) cell_month_view_pane_ParamLimits

0xe6ce,	// (0x00023f78) cell_month_view_pane

0x610b,	// (0x0001b9b5) frm_month_g1

0xe6fa,	// (0x00023fa4) frm_month_g2

0xe70b,	// (0x00023fb5) frm_month_g3

0xe71c,	// (0x00023fc6) frm_month_g4

0xe72d,	// (0x00023fd7) frm_month_g5

0xe740,	// (0x00023fea) frm_month_g6

0xe753,	// (0x00023ffd) frm_month_g7

0x6118,	// (0x0001b9c2) frm_month_g8

0xe766,	// (0x00024010) frm_month_g9

0xe773,	// (0x0002401d) frm_month_g10

0xe780,	// (0x0002402a) frm_month_g11

0xe78d,	// (0x00024037) frm_month_g12

0xe79a,	// (0x00024044) frm_month_g13

0xe7a7,	// (0x00024051) frm_month_g14

0xe7b6,	// (0x00024060) frm_month_g15

0xe7c5,	// (0x0002406f) frm_month_g16

0x000f,

0xfe18,	// (0x000256c2) frm_month_g

0x6125,	// (0x0001b9cf) cell_top_day_name_pane_t1

0xe7d4,	// (0x0002407e) cell_area_left_week_number_pane_g1

0xe7e3,	// (0x0002408d) cell_area_left_week_number_pane_t1

0x0f9e,	// (0x00016848) cell_month_view_pane_g1

0xe7f9,	// (0x000240a3) cell_month_view_pane_t1

0x0838,	// (0x000160e2) main_fps_pane

0x559a,	// (0x0001ae44) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0x559a,	// (0x0001ae44) cmail_ddmenu_btn02_pane_cp1

0x55b6,	// (0x0001ae60) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0x55b6,	// (0x0001ae60) cmail_ddmenu_btn02_pane_cp2

0xe050,	// (0x000238fa) cmail_ddmenu_btn02_pane_g2_ParamLimits

0xe050,	// (0x000238fa) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfd36,	// (0x000255e0) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfd36,	// (0x000255e0) cmail_ddmenu_btn02_pane_g

0xe06e,	// (0x00023918) cmail_ddmenu_btn02_pane_t2_ParamLimits

0xe06e,	// (0x00023918) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfd3b,	// (0x000255e5) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfd3b,	// (0x000255e5) cmail_ddmenu_btn02_pane_t

0xe80f,	// (0x000240b9) fps_text_pane_ParamLimits

0xe80f,	// (0x000240b9) fps_text_pane

0xe81c,	// (0x000240c6) main_fps_pane_g1_ParamLimits

0xe81c,	// (0x000240c6) main_fps_pane_g1

0xe82a,	// (0x000240d4) wait_bar_pane_cp010_ParamLimits

0xe82a,	// (0x000240d4) wait_bar_pane_cp010

0xe836,	// (0x000240e0) fps_text_pane_t1_ParamLimits

0xe836,	// (0x000240e0) fps_text_pane_t1

0xbe77,	// (0x00021721) cam4_image_uncrop_pane_g1

0xbe80,	// (0x0002172a) cam4_image_uncrop_pane_g2

0xbe89,	// (0x00021733) cam4_image_uncrop_pane_g3

0xbe92,	// (0x0002173c) cam4_image_uncrop_pane_g4

0x0003,

0xf87a,	// (0x00025124) cam4_image_uncrop_pane_g

0xe63e,	// (0x00023ee8) dia3_listrow_pane_ParamLimits

0x0838,	// (0x000160e2) main_phob2_pane

0xdb8c,	// (0x00023436) cell_tport_appsw_pane_cp02_ParamLimits

0xdb8c,	// (0x00023436) cell_tport_appsw_pane_cp02

0xdb9b,	// (0x00023445) cell_tport_appsw_pane_cp03_ParamLimits

0xdb9b,	// (0x00023445) cell_tport_appsw_pane_cp03

0x0838,	// (0x000160e2) phob2_contact_card_pane

0x0838,	// (0x000160e2) phob2_listscroll_pane

0x6138,	// (0x0001b9e2) phob2_list_pane

0x6140,	// (0x0001b9ea) scroll_pane_cp034

0xe84f,	// (0x000240f9) phob2_cc_data_pane_ParamLimits

0xe84f,	// (0x000240f9) phob2_cc_data_pane

0xe869,	// (0x00024113) phob2_cc_listscroll_pane_ParamLimits

0xe869,	// (0x00024113) phob2_cc_listscroll_pane

0xe430,	// (0x00023cda) list_double_large_graphic_phob2_pane_ParamLimits

0xe430,	// (0x00023cda) list_double_large_graphic_phob2_pane

0xe883,	// (0x0002412d) list_double_large_graphic_phob2_pane_g1_ParamLimits

0xe883,	// (0x0002412d) list_double_large_graphic_phob2_pane_g1

0xe890,	// (0x0002413a) list_double_large_graphic_phob2_pane_g2_ParamLimits

0xe890,	// (0x0002413a) list_double_large_graphic_phob2_pane_g2

0x0003,

0xfe39,	// (0x000256e3) list_double_large_graphic_phob2_pane_g_ParamLimits

0xfe39,	// (0x000256e3) list_double_large_graphic_phob2_pane_g

0xe8b6,	// (0x00024160) list_double_large_graphic_phob2_pane_t1_ParamLimits

0xe8b6,	// (0x00024160) list_double_large_graphic_phob2_pane_t1

0xe8cb,	// (0x00024175) list_double_large_graphic_phob2_pane_t2_ParamLimits

0xe8cb,	// (0x00024175) list_double_large_graphic_phob2_pane_t2

0x0001,

0xfe42,	// (0x000256ec) list_double_large_graphic_phob2_pane_t_ParamLimits

0xfe42,	// (0x000256ec) list_double_large_graphic_phob2_pane_t

0x0838,	// (0x000160e2) list_highlight_pane_cp024

0xe8e0,	// (0x0002418a) phob2_cc_button_pane

0xe8e8,	// (0x00024192) phob2_cc_data_pane_g1_ParamLimits

0xe8e8,	// (0x00024192) phob2_cc_data_pane_g1

0xe8f7,	// (0x000241a1) phob2_cc_data_pane_g2_ParamLimits

0xe8f7,	// (0x000241a1) phob2_cc_data_pane_g2

0x0001,

0xfe47,	// (0x000256f1) phob2_cc_data_pane_g_ParamLimits

0xfe47,	// (0x000256f1) phob2_cc_data_pane_g

0xe906,	// (0x000241b0) phob2_cc_data_pane_t1_ParamLimits

0xe906,	// (0x000241b0) phob2_cc_data_pane_t1

0xe91b,	// (0x000241c5) phob2_cc_data_pane_t2_ParamLimits

0xe91b,	// (0x000241c5) phob2_cc_data_pane_t2

0xe930,	// (0x000241da) phob2_cc_data_pane_t3_ParamLimits

0xe930,	// (0x000241da) phob2_cc_data_pane_t3

0x0002,

0xfe4c,	// (0x000256f6) phob2_cc_data_pane_t_ParamLimits

0xfe4c,	// (0x000256f6) phob2_cc_data_pane_t

0xe945,	// (0x000241ef) phob2_cc_list_pane_ParamLimits

0xe945,	// (0x000241ef) phob2_cc_list_pane

0x46ad,	// (0x00019f57) scroll_pane_cp035_ParamLimits

0x46ad,	// (0x00019f57) scroll_pane_cp035

0x08a7,	// (0x00016151) bg_button_pane_cp033

0xe951,	// (0x000241fb) phob2_cc_button_pane_g1

0xe95d,	// (0x00024207) phob2_cc_button_pane_t1

0xe972,	// (0x0002421c) phob2_cc_button_pane_t2

0x0001,

0xfe53,	// (0x000256fd) phob2_cc_button_pane_t

0xe984,	// (0x0002422e) list_double_large_graphic_phob2_cc_pane_ParamLimits

0xe984,	// (0x0002422e) list_double_large_graphic_phob2_cc_pane

0xe9f2,	// (0x0002429c) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0xe9f2,	// (0x0002429c) list_double_large_graphic_phob2_cc_pane_g1

0xea03,	// (0x000242ad) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0xea03,	// (0x000242ad) list_double_large_graphic_phob2_cc_pane_g2

0xea12,	// (0x000242bc) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0xea12,	// (0x000242bc) list_double_large_graphic_phob2_cc_pane_g3

0xea21,	// (0x000242cb) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0xea21,	// (0x000242cb) list_double_large_graphic_phob2_cc_pane_g4

0xea32,	// (0x000242dc) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0xea32,	// (0x000242dc) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xfe58,	// (0x00025702) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xfe58,	// (0x00025702) list_double_large_graphic_phob2_cc_pane_g

0xea41,	// (0x000242eb) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0xea41,	// (0x000242eb) list_double_large_graphic_phob2_cc_pane_t1

0xea6a,	// (0x00024314) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0xea6a,	// (0x00024314) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xfe63,	// (0x0002570d) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xfe63,	// (0x0002570d) list_double_large_graphic_phob2_cc_pane_t

0xea93,	// (0x0002433d) list_highlight_pane_cp025_ParamLimits

0xea93,	// (0x0002433d) list_highlight_pane_cp025

0x08a7,	// (0x00016151) bg_button_pane_cp033_ParamLimits

0xe951,	// (0x000241fb) phob2_cc_button_pane_g1_ParamLimits

0xe95d,	// (0x00024207) phob2_cc_button_pane_t1_ParamLimits

0xe972,	// (0x0002421c) phob2_cc_button_pane_t2_ParamLimits

0xfe53,	// (0x000256fd) phob2_cc_button_pane_t_ParamLimits

0x878e,	// (0x0001e038) popup_wgtman_window

0x4441,	// (0x00019ceb) scroll_pane_cp038

0xe3b9,	// (0x00023c63) wgtman_btn_pane_cp_01_ParamLimits

0xe3b9,	// (0x00023c63) wgtman_btn_pane_cp_01

0xeaa1,	// (0x0002434b) wgtman_content_pane

0xeaaa,	// (0x00024354) wgtman_heading_pane

0x0838,	// (0x000160e2) bg_heading_pane_cp02

0xeab3,	// (0x0002435d) wgtman_heading_pane_g1

0xeabb,	// (0x00024365) wgtman_heading_pane_t1

0xeac9,	// (0x00024373) scroll_pane_cp036

0xead1,	// (0x0002437b) wgtman_list_pane

0xead9,	// (0x00024383) wgtman_list_pane_t1_ParamLimits

0xead9,	// (0x00024383) wgtman_list_pane_t1

0x7f36,	// (0x0001d7e0) cam4_grid_pane

0xc5e6,	// (0x00021e90) bg_button_pane_cp015_ParamLimits

0xc5f8,	// (0x00021ea2) bg_button_pane_cp016_ParamLimits

0xc60b,	// (0x00021eb5) bg_button_pane_cp017_ParamLimits

0xc661,	// (0x00021f0b) popup_vitu2_query_window_g3_ParamLimits

0xc661,	// (0x00021f0b) popup_vitu2_query_window_g3

0xc71c,	// (0x00021fc6) popup_vitu2_query_window_t6_ParamLimits

0xc71c,	// (0x00021fc6) popup_vitu2_query_window_t6

0xc747,	// (0x00021ff1) popup_vitu2_query_window_t7_ParamLimits

0xc747,	// (0x00021ff1) popup_vitu2_query_window_t7

0xeaf3,	// (0x0002439d) cam4_grid_pane_g1

0xeafc,	// (0x000243a6) cam4_grid_pane_g2

0xeb05,	// (0x000243af) cam4_grid_pane_g3

0xeb0e,	// (0x000243b8) cam4_grid_pane_g4

0x0003,

0xfe68,	// (0x00025712) cam4_grid_pane_g

0x8fe4,	// (0x0001e88e) aid_placing_vt_slider_lsc_ParamLimits

0x9330,	// (0x0001ebda) vidtel_button_pane_ParamLimits

0x9330,	// (0x0001ebda) vidtel_button_pane

0x0838,	// (0x000160e2) bg_button_pane_cp034

0xeb19,	// (0x000243c3) vidtel_button_pane_g1

0xeb21,	// (0x000243cb) vidtel_button_pane_t1

0x45b8,	// (0x00019e62) aid_size_vtel_slider_touch

0x46ad,	// (0x00019f57) scroll_pane_cp039

0xd339,	// (0x00022be3) ncim_query_button_pane_cp01_ParamLimits

0xd358,	// (0x00022c02) ncimui_query_pane_g1_ParamLimits

0x08a7,	// (0x00016151) input_focus_pane_cp012_ParamLimits

0x5005,	// (0x0001a8af) ncim_query_entry_pane_t1_ParamLimits

0x46ad,	// (0x00019f57) scroll_pane_cp039_ParamLimits

0x1c25,	// (0x000174cf) navi_pane_bcale_mc_g1

0x1c2d,	// (0x000174d7) navi_pane_bcale_mc_t1

0x55ea,	// (0x0001ae94) main_sp_fs_email_pane_g1

0x55f6,	// (0x0001aea0) main_sp_fs_email_pane_g2

0x0001,

0xfc6b,	// (0x00025515) main_sp_fs_email_pane_g

0x5aa5,	// (0x0001b34f) list_single_cale_mrui_row_pane_g3_ParamLimits

0x5aa5,	// (0x0001b34f) list_single_cale_mrui_row_pane_g3

0xe08e,	// (0x00023938) list_single_recal_day_pane_g5_event_pane

0x5c7d,	// (0x0001b527) list_single_recal_day_pane_g7

0xeb37,	// (0x000243e1) list_recal_day_event_pane_cp01

0xeb40,	// (0x000243ea) list_recal_vselct_arw_lo_pane_cp01

0xeb48,	// (0x000243f2) list_recal_vselct_arw_up_pane_cp01

0xeb50,	// (0x000243fa) list_recal_vselct_pane_cp01

0x4604,	// (0x00019eae) list_recal_day_event_pane_cp01_g1

0xeb5a,	// (0x00024404) list_recal_day_event_pane_cp01_t1

0x5c85,	// (0x0001b52f) list_single_recal_day_pane_t1_ParamLimits

0x5c97,	// (0x0001b541) list_single_recal_day_pane_t2_ParamLimits

0xfd4b,	// (0x000255f5) list_single_recal_day_pane_t_ParamLimits

0x0f23,	// (0x000167cd) bg_notes_pane_ParamLimits

0x0ff6,	// (0x000168a0) list_notes_pane_ParamLimits

0x88b9,	// (0x0001e163) scroll_pane_cp06_ParamLimits

0x1032,	// (0x000168dc) main_notes_pane_ParamLimits

0x08a7,	// (0x00016151) main_welc_pane

0xeb7f,	// (0x00024429) main_welc_body_pane_ParamLimits

0xeb7f,	// (0x00024429) main_welc_body_pane

0xeb99,	// (0x00024443) main_welc_opti_pane_ParamLimits

0xeb99,	// (0x00024443) main_welc_opti_pane

0xebf4,	// (0x0002449e) main_welc_pane_t1_ParamLimits

0xebf4,	// (0x0002449e) main_welc_pane_t1

0xed0a,	// (0x000245b4) main_welc_body_row_pane_ParamLimits

0xed0a,	// (0x000245b4) main_welc_body_row_pane

0x0f90,	// (0x0001683a) main_welc_opti_row_pane_ParamLimits

0x0f90,	// (0x0001683a) main_welc_opti_row_pane

0xed2f,	// (0x000245d9) main_welc_opti_row_pane_g1

0xed37,	// (0x000245e1) main_welc_opti_row_pane_t1

0xed46,	// (0x000245f0) main_welc_body_row_pane_t1

0x5f1a,	// (0x0001b7c4) popup_notif_wgt_heading_pane

0x5f34,	// (0x0001b7de) aid_size_list_notif_wgt_del_ParamLimits

0x5f41,	// (0x0001b7eb) list_notif_wgt_row_pane_g1_ParamLimits

0x5f4d,	// (0x0001b7f7) list_notif_wgt_row_pane_g2_ParamLimits

0x5f5c,	// (0x0001b806) list_notif_wgt_row_pane_g3_ParamLimits

0xfdb2,	// (0x0002565c) list_notif_wgt_row_pane_g_ParamLimits

0x5f69,	// (0x0001b813) list_notif_wgt_row_pane_t1_ParamLimits

0x5f7f,	// (0x0001b829) list_notif_wgt_row_pane_t2_ParamLimits

0x5f91,	// (0x0001b83b) list_notif_wgt_row_pane_t3_ParamLimits

0xfdb9,	// (0x00025663) list_notif_wgt_row_pane_t_ParamLimits

0xe44b,	// (0x00023cf5) listrow_wgtman_pane_g1_ParamLimits

0xe458,	// (0x00023d02) listrow_wgtman_pane_g2_ParamLimits

0xfde9,	// (0x00025693) listrow_wgtman_pane_g_ParamLimits

0xe476,	// (0x00023d20) listrow_wgtman_pane_t1_ParamLimits

0xe48e,	// (0x00023d38) listrow_wgtman_pane_t2_ParamLimits

0xfdee,	// (0x00025698) listrow_wgtman_pane_t_ParamLimits

0xe4b4,	// (0x00023d5e) wait_bar_pane_cp09_ParamLimits

0x0838,	// (0x000160e2) bg_popup_heading_pane_cp02

0xed55,	// (0x000245ff) popup_notif_wgt_heading_pane_g1

0xed5d,	// (0x00024607) popup_notif_wgt_heading_pane_t1

0x0838,	// (0x000160e2) main_vids_pane

0x0838,	// (0x000160e2) vids_listscroll_pane

0xed6b,	// (0x00024615) scroll_pane_cp040

0x0838,	// (0x000160e2) vids_list_pane

0xed76,	// (0x00024620) vids_list_double_pane_ParamLimits

0xed76,	// (0x00024620) vids_list_double_pane

0xed8d,	// (0x00024637) vids_list_double_pane_g1

0xed96,	// (0x00024640) vids_list_double_pane_t1

0xeda6,	// (0x00024650) vids_list_double_pane_t2

0x0001,

0xfe87,	// (0x00025731) vids_list_double_pane_t

0x765b,	// (0x0001cf05) main_ncimui_pane_ParamLimits

0xd190,	// (0x00022a3a) main_ncimui_pane_g1_ParamLimits

0xd19c,	// (0x00022a46) main_ncimui_pane_g2_ParamLimits

0xd19c,	// (0x00022a46) main_ncimui_pane_g2

0x0001,

0xfb6c,	// (0x00025416) main_ncimui_pane_g_ParamLimits

0xfb6c,	// (0x00025416) main_ncimui_pane_g

0xebb2,	// (0x0002445c) main_welc_pane_g1_ParamLimits

0xebb2,	// (0x0002445c) main_welc_pane_g1

0xebbe,	// (0x00024468) main_welc_pane_g2_ParamLimits

0xebbe,	// (0x00024468) main_welc_pane_g2

0x0003,

0xfe71,	// (0x0002571b) main_welc_pane_g_ParamLimits

0xfe71,	// (0x0002571b) main_welc_pane_g

0x0f23,	// (0x000167cd) listscroll_mce_pane_ParamLimits

0x1d7a,	// (0x00017624) wait_bar_pane_cp10

0x319e,	// (0x00018a48) main_cale_day_pane_ParamLimits

0x319e,	// (0x00018a48) main_cale_week_pane_ParamLimits

0x0f23,	// (0x000167cd) main_messa_pane_ParamLimits

0xb964,	// (0x0002120e) main_clock2_btn_pane_ParamLimits

0xb964,	// (0x0002120e) main_clock2_btn_pane

0x3a17,	// (0x000192c1) main_clock2_btn_pane_cp01_ParamLimits

0x3a17,	// (0x000192c1) main_clock2_btn_pane_cp01

0x5a31,	// (0x0001b2db) list_cale_mrui_pane_ParamLimits

0x5fd5,	// (0x0001b87f) main_cf0_pane_g2

0x0001,

0xfdc0,	// (0x0002566a) main_cf0_pane_g

0xe65b,	// (0x00023f05) area_left_week_number_pane_ParamLimits

0xe66e,	// (0x00023f18) area_top_day_name_pane_ParamLimits

0xe67c,	// (0x00023f26) frame_month_view_pane_ParamLimits

0x60fd,	// (0x0001b9a7) grid_month_view_pane_ParamLimits

0x610b,	// (0x0001b9b5) frm_month_g1_ParamLimits

0xe6fa,	// (0x00023fa4) frm_month_g2_ParamLimits

0xe70b,	// (0x00023fb5) frm_month_g3_ParamLimits

0xe71c,	// (0x00023fc6) frm_month_g4_ParamLimits

0xe72d,	// (0x00023fd7) frm_month_g5_ParamLimits

0xe740,	// (0x00023fea) frm_month_g6_ParamLimits

0xe753,	// (0x00023ffd) frm_month_g7_ParamLimits

0x6118,	// (0x0001b9c2) frm_month_g8_ParamLimits

0xe766,	// (0x00024010) frm_month_g9_ParamLimits

0xe773,	// (0x0002401d) frm_month_g10_ParamLimits

0xe780,	// (0x0002402a) frm_month_g11_ParamLimits

0xe78d,	// (0x00024037) frm_month_g12_ParamLimits

0xe79a,	// (0x00024044) frm_month_g13_ParamLimits

0xe7a7,	// (0x00024051) frm_month_g14_ParamLimits

0xe7b6,	// (0x00024060) frm_month_g15_ParamLimits

0xe7c5,	// (0x0002406f) frm_month_g16_ParamLimits

0xfe18,	// (0x000256c2) frm_month_g_ParamLimits

0x6125,	// (0x0001b9cf) cell_top_day_name_pane_t1_ParamLimits

0xe7d4,	// (0x0002407e) cell_area_left_week_number_pane_g1_ParamLimits

0xe7e3,	// (0x0002408d) cell_area_left_week_number_pane_t1_ParamLimits

0x0f9e,	// (0x00016848) cell_month_view_pane_g1_ParamLimits

0xe7f9,	// (0x000240a3) cell_month_view_pane_t1_ParamLimits

0x0f1b,	// (0x000167c5) main_clock2_btn_pane_g1

0xedb4,	// (0x0002465e) main_clock2_btn_pane_t1

0x08a7,	// (0x00016151) listscroll_cmail_pane_ParamLimits

0x55ea,	// (0x0001ae94) main_sp_fs_email_pane_g1_ParamLimits

0x55f6,	// (0x0001aea0) main_sp_fs_email_pane_g2_ParamLimits

0xfc6b,	// (0x00025515) main_sp_fs_email_pane_g_ParamLimits

0x5bed,	// (0x0001b497) list_recal_day_pane_ParamLimits

0x5bfe,	// (0x0001b4a8) mian_recal_day_pane_t1

0xda7a,	// (0x00023324) list_single_dyc_row_text_pane_t4_ParamLimits

0xda7a,	// (0x00023324) list_single_dyc_row_text_pane_t4

0xdab1,	// (0x0002335b) list_single_dyc_row_text_pane_t5_ParamLimits

0xdab1,	// (0x0002335b) list_single_dyc_row_text_pane_t5

0x56be,	// (0x0001af68) list_single_dyc_row_text_pane_t6_ParamLimits

0x56be,	// (0x0001af68) list_single_dyc_row_text_pane_t6

0x16a0,	// (0x00016f4a) aid_mgn_list_cale_time_pane

0x765b,	// (0x0001cf05) main_gallery2_pane_ParamLimits

0x3a2d,	// (0x000192d7) main_clock2_pane_cp01_t1

0x3a3d,	// (0x000192e7) main_clock2_pane_cp01_t3

0x0001,

0xf751,	// (0x00024ffb) main_clock2_pane_cp01_t

0x8be3,	// (0x0001e48d) cale_week_scroll_pane_g16_ParamLimits

0x8be3,	// (0x0001e48d) cale_week_scroll_pane_g16

0x1277,	// (0x00016b21) vorec_slider_pane

0xeb21,	// (0x000243cb) vidtel_button_pane_t1_ParamLimits

0xe0e9,	// (0x00023993) main_fs_bigclock_clock_pane_g1_ParamLimits

0xe0e9,	// (0x00023993) main_fs_bigclock_clock_pane_g2_ParamLimits

0xe0f6,	// (0x000239a0) main_fs_bigclock_clock_pane_g3_ParamLimits

0xe0f6,	// (0x000239a0) main_fs_bigclock_clock_pane_g4_ParamLimits

0xfd6e,	// (0x00025618) main_fs_bigclock_clock_pane_g_ParamLimits

0xe102,	// (0x000239ac) main_fs_bigclock_clock_pane_t1_ParamLimits

0xe115,	// (0x000239bf) main_fs_bigclock_clock_pane_t2_ParamLimits

0xfd77,	// (0x00025621) main_fs_bigclock_clock_pane_t_ParamLimits

0xb301,	// (0x00020bab) main_mup3_lyrics_pane_ParamLimits

0xb301,	// (0x00020bab) main_mup3_lyrics_pane

0xedc2,	// (0x0002466c) main_mup3_lyrics_pane_t1_ParamLimits

0xedc2,	// (0x0002466c) main_mup3_lyrics_pane_t1

0x7a0c,	// (0x0001d2b6) aid_main_mp4_pane_t1_area

0x7a16,	// (0x0001d2c0) aid_main_mp4_pane_t2_area

0x7b15,	// (0x0001d3bf) main_mp4_pane_g7_ParamLimits

0x7b15,	// (0x0001d3bf) main_mp4_pane_g7

0x7b21,	// (0x0001d3cb) main_mp4_pane_g8_ParamLimits

0x7b21,	// (0x0001d3cb) main_mp4_pane_g8

0xbdbf,	// (0x00021669) aid_call6_pane_g1_size

0xe9c6,	// (0x00024270) list_double_large_graphic_phob2_other_pane_ParamLimits

0xe9c6,	// (0x00024270) list_double_large_graphic_phob2_other_pane

0x1658,	// (0x00016f02) list_double_large_graphic_phob2_other_pane_g1

0x0838,	// (0x000160e2) list_highlight_pane_cp026

0x08a7,	// (0x00016151) main_welc_pane_ParamLimits

0xd919,	// (0x000231c3) main_sp_fs_ctrlbar_pane_g3_ParamLimits

0xd919,	// (0x000231c3) main_sp_fs_ctrlbar_pane_g3

0xd931,	// (0x000231db) main_sp_fs_ctrlbar_pane_g4_ParamLimits

0xd931,	// (0x000231db) main_sp_fs_ctrlbar_pane_g4

0xd963,	// (0x0002320d) toolbar2_fixed_button_pane_cp01

0xd96e,	// (0x00023218) toolbar2_fixed_button_pane_cp02

0xd979,	// (0x00023223) toolbar2_fixed_button_pane_cp03

0xeb68,	// (0x00024412) list_welc_entry_pane_ParamLimits

0xeb68,	// (0x00024412) list_welc_entry_pane

0xebcc,	// (0x00024476) main_welc_pane_g3_ParamLimits

0xebcc,	// (0x00024476) main_welc_pane_g3

0xec0e,	// (0x000244b8) main_welc_pane_t2_ParamLimits

0xec0e,	// (0x000244b8) main_welc_pane_t2

0xec22,	// (0x000244cc) main_welc_pane_t3_ParamLimits

0xec22,	// (0x000244cc) main_welc_pane_t3

0x0005,

0xfe7a,	// (0x00025724) main_welc_pane_t_ParamLimits

0xfe7a,	// (0x00025724) main_welc_pane_t

0xecac,	// (0x00024556) welc_button_pane_ParamLimits

0xecac,	// (0x00024556) welc_button_pane

0xecfc,	// (0x000245a6) welc_service_logo_pane_ParamLimits

0xecfc,	// (0x000245a6) welc_service_logo_pane

0xedf4,	// (0x0002469e) list_single_welc_entry_pane_ParamLimits

0xedf4,	// (0x0002469e) list_single_welc_entry_pane

0xee05,	// (0x000246af) list_single_welc_entry_pane_g1

0xee0d,	// (0x000246b7) list_single_welc_entry_pane_t1

0xee1b,	// (0x000246c5) list_single_welc_entry_pane_t2

0x0001,

0xfe8c,	// (0x00025736) list_single_welc_entry_pane_t

0x0838,	// (0x000160e2) bg_button_pane_cp035

0xee29,	// (0x000246d3) welc_button_pane_t1

0xee37,	// (0x000246e1) welc_service_logo_pane_g1

0xee40,	// (0x000246ea) welc_service_logo_pane_g2

0x0001,

0xfe91,	// (0x0002573b) welc_service_logo_pane_g

0x7203,	// (0x0001caad) main_int_radio_pane

0x10cd,	// (0x00016977) list_single_fs_dyc_pane_g1

0xe89c,	// (0x00024146) list_double_large_graphic_phob2_pane_g3_ParamLimits

0xe89c,	// (0x00024146) list_double_large_graphic_phob2_pane_g3

0xe8a8,	// (0x00024152) list_double_large_graphic_phob2_pane_g4_ParamLimits

0xe8a8,	// (0x00024152) list_double_large_graphic_phob2_pane_g4

0xee49,	// (0x000246f3) main_int_radio1_pane_ParamLimits

0xee49,	// (0x000246f3) main_int_radio1_pane

0xee5b,	// (0x00024705) find_pane_cp02

0xee64,	// (0x0002470e) input_focus_pane_cp12_ParamLimits

0xee64,	// (0x0002470e) input_focus_pane_cp12

0xee70,	// (0x0002471a) input_focus_pane_cp13_ParamLimits

0xee70,	// (0x0002471a) input_focus_pane_cp13

0xee88,	// (0x00024732) input_focus_pane_cp14_ParamLimits

0xee88,	// (0x00024732) input_focus_pane_cp14

0xeea0,	// (0x0002474a) int_radio1_listscroll_pane

0xeeaa,	// (0x00024754) main_int_radio1_pane_g1_ParamLimits

0xeeaa,	// (0x00024754) main_int_radio1_pane_g1

0xeeba,	// (0x00024764) main_int_radio1_pane_t1_ParamLimits

0xeeba,	// (0x00024764) main_int_radio1_pane_t1

0xeece,	// (0x00024778) main_int_radio1_pane_t2_ParamLimits

0xeece,	// (0x00024778) main_int_radio1_pane_t2

0xeee2,	// (0x0002478c) main_int_radio1_pane_t3_ParamLimits

0xeee2,	// (0x0002478c) main_int_radio1_pane_t3

0xeef6,	// (0x000247a0) main_int_radio1_pane_t4_ParamLimits

0xeef6,	// (0x000247a0) main_int_radio1_pane_t4

0xef0d,	// (0x000247b7) main_int_radio1_pane_t5_ParamLimits

0xef0d,	// (0x000247b7) main_int_radio1_pane_t5

0xef1f,	// (0x000247c9) main_int_radio1_pane_t6_ParamLimits

0xef1f,	// (0x000247c9) main_int_radio1_pane_t6

0xef31,	// (0x000247db) main_int_radio1_pane_t7_ParamLimits

0xef31,	// (0x000247db) main_int_radio1_pane_t7

0xef43,	// (0x000247ed) main_int_radio1_pane_t8_ParamLimits

0xef43,	// (0x000247ed) main_int_radio1_pane_t8

0xef57,	// (0x00024801) main_int_radio1_pane_t9_ParamLimits

0xef57,	// (0x00024801) main_int_radio1_pane_t9

0xef69,	// (0x00024813) main_int_radio1_pane_t10_ParamLimits

0xef69,	// (0x00024813) main_int_radio1_pane_t10

0xef9a,	// (0x00024844) main_int_radio1_pane_t11_ParamLimits

0xef9a,	// (0x00024844) main_int_radio1_pane_t11

0xefcb,	// (0x00024875) main_int_radio1_pane_t12_ParamLimits

0xefcb,	// (0x00024875) main_int_radio1_pane_t12

0x000b,

0xfe96,	// (0x00025740) main_int_radio1_pane_t_ParamLimits

0xfe96,	// (0x00025740) main_int_radio1_pane_t

0xefe2,	// (0x0002488c) int_radio_list_pane

0x6140,	// (0x0001b9ea) scroll_pane_cp037

0xefea,	// (0x00024894) list_double_large_graphic_int_radio_pane_ParamLimits

0xefea,	// (0x00024894) list_double_large_graphic_int_radio_pane

0xf002,	// (0x000248ac) list_double_large_graphic_int_radio_pane_g1

0xf00b,	// (0x000248b5) list_double_large_graphic_int_radio_pane_t1

0xf019,	// (0x000248c3) list_double_large_graphic_int_radio_pane_t2

0x0001,

0xfeaf,	// (0x00025759) list_double_large_graphic_int_radio_pane_t

0x0838,	// (0x000160e2) list_highlight_pane_cp027

0xeb77,	// (0x00024421) main_button_pane_4

0xebd8,	// (0x00024482) main_welc_pane_g4_ParamLimits

0xebd8,	// (0x00024482) main_welc_pane_g4

0xec34,	// (0x000244de) main_welc_pane_t4_ParamLimits

0xec34,	// (0x000244de) main_welc_pane_t4

0xec46,	// (0x000244f0) main_welc_pane_t5_ParamLimits

0xec46,	// (0x000244f0) main_welc_pane_t5

0xec78,	// (0x00024522) main_welc_pane_t6_ParamLimits

0xec78,	// (0x00024522) main_welc_pane_t6

0xecba,	// (0x00024564) welc_button_pane_2_ParamLimits

0xecba,	// (0x00024564) welc_button_pane_2

0xecd2,	// (0x0002457c) welc_button_pane_3_ParamLimits

0xecd2,	// (0x0002457c) welc_button_pane_3

0xeb77,	// (0x00024421) welc_button_pane_4

0xecec,	// (0x00024596) welc_button_pane_5_ParamLimits

0xecec,	// (0x00024596) welc_button_pane_5

0x7677,	// (0x0001cf21) main_popup_welc_pane

0xf027,	// (0x000248d1) main_welc_sk_g3

0xf031,	// (0x000248db) main_welc_sk_g4

0xf03b,	// (0x000248e5) main_welc_sk_t3

0xf04b,	// (0x000248f5) main_welc_sk_t4

0xf05b,	// (0x00024905) popup_welc_pane_t4

0xf069,	// (0x00024913) popup_welc_pane_t5

0xf077,	// (0x00024921) popup_welc_pane_t6
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

} // end of namespace AknLayoutScalable_Abrw_php_apps_qhd_prt_tch_Normal
