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
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pnp4_apps_nhd4_prt_tch + 0x000aa578 };

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
0x00e2,	// (0x000aa65a) Screen

0x00ee,	// (0x000aa666) application_window

0x013a,	// (0x000aa6b2) area_bottom_pane_ParamLimits

0x013a,	// (0x000aa6b2) area_bottom_pane

0x0173,	// (0x000aa6eb) area_top_pane_ParamLimits

0x0173,	// (0x000aa6eb) area_top_pane

0x936f,	// (0x000b38e7) call_video_uplink_pane_ParamLimits

0x936f,	// (0x000b38e7) call_video_uplink_pane

0x0201,	// (0x000aa779) main_pane_ParamLimits

0x0201,	// (0x000aa779) main_pane

0xc7c4,	// (0x000b6d3c) context_pane

0x38c6,	// (0x000ade3e) navi_pane

0x38f8,	// (0x000ade70) popup_cale_events_window_ParamLimits

0x38f8,	// (0x000ade70) popup_cale_events_window

0xc7d7,	// (0x000b6d4f) popup_mup_playback_window

0x3910,	// (0x000ade88) signal_pane

0xa213,	// (0x000b478b) main_browser_pane

0xb346,	// (0x000b58be) main_burst_pane

0x3624,	// (0x000adb9c) main_calc_pane

0xc7aa,	// (0x000b6d22) main_cale_day_pane

0x3638,	// (0x000adbb0) main_cale_month_pane

0xc7aa,	// (0x000b6d22) main_cale_week_pane

0xb346,	// (0x000b58be) main_call_pane

0x97b8,	// (0x000b3d30) main_call_poc_pane

0xb346,	// (0x000b58be) main_camera_pane

0xb346,	// (0x000b58be) main_chi_dic_pane

0xb0d1,	// (0x000b5649) main_clock_pane

0x97b8,	// (0x000b3d30) main_fmradio_pane

0xb346,	// (0x000b58be) main_graph_messa_pane

0x97b8,	// (0x000b3d30) main_help_pane

0xa213,	// (0x000b478b) main_im_pane

0xa12f,	// (0x000b46a7) main_image_pane_ParamLimits

0xa12f,	// (0x000b46a7) main_image_pane

0x97b8,	// (0x000b3d30) main_location2_pane

0xb346,	// (0x000b58be) main_location_pane

0xa12f,	// (0x000b46a7) main_messa_pane

0x97b8,	// (0x000b3d30) main_mp2_pane

0xb346,	// (0x000b58be) main_mp_pane

0x97b8,	// (0x000b3d30) main_msg_pane

0x97b8,	// (0x000b3d30) main_mup_eq_pane

0x97b8,	// (0x000b3d30) main_mup_pane

0xa213,	// (0x000b478b) main_notes_pane

0x97b8,	// (0x000b3d30) main_pec_pane

0x97b8,	// (0x000b3d30) main_phob_pane

0x97b8,	// (0x000b3d30) main_pinb_pane

0x97b8,	// (0x000b3d30) main_postcard_pane

0x97b8,	// (0x000b3d30) main_qdial_pane

0xb346,	// (0x000b58be) main_skin_pane

0x97b8,	// (0x000b3d30) main_smil2_pane

0xb346,	// (0x000b58be) main_smil_pane

0xb346,	// (0x000b58be) main_video_pane

0xb346,	// (0x000b58be) main_video_tele_pane

0xa12f,	// (0x000b46a7) main_viewer_pane_ParamLimits

0xa12f,	// (0x000b46a7) main_viewer_pane

0xb346,	// (0x000b58be) main_vorec_pane

0x368a,	// (0x000adc02) popup_blid_sat_info_window_ParamLimits

0x368a,	// (0x000adc02) popup_blid_sat_info_window

0x36e2,	// (0x000adc5a) popup_dyc_status_message_window_ParamLimits

0x36e2,	// (0x000adc5a) popup_dyc_status_message_window

0x36fa,	// (0x000adc72) popup_grid_large_graphic_window_ParamLimits

0x36fa,	// (0x000adc72) popup_grid_large_graphic_window

0x37b0,	// (0x000add28) popup_loc_request_window_ParamLimits

0x37b0,	// (0x000add28) popup_loc_request_window

0x389e,	// (0x000ade16) popup_wml_address_window_ParamLimits

0x389e,	// (0x000ade16) popup_wml_address_window

0x345e,	// (0x000ad9d6) call_muted_g1

0x3111,	// (0x000ad689) popup_call_audio_conf_window_ParamLimits

0x3111,	// (0x000ad689) popup_call_audio_conf_window

0x3472,	// (0x000ad9ea) popup_call_audio_first_window_ParamLimits

0x3472,	// (0x000ad9ea) popup_call_audio_first_window

0x34e8,	// (0x000ada60) popup_call_audio_in_window_ParamLimits

0x34e8,	// (0x000ada60) popup_call_audio_in_window

0x3524,	// (0x000ada9c) popup_call_audio_out_window_ParamLimits

0x3524,	// (0x000ada9c) popup_call_audio_out_window

0x355e,	// (0x000adad6) popup_call_audio_second_window_ParamLimits

0x355e,	// (0x000adad6) popup_call_audio_second_window

0x35b4,	// (0x000adb2c) popup_call_audio_wait_window_ParamLimits

0x35b4,	// (0x000adb2c) popup_call_audio_wait_window

0x35e9,	// (0x000adb61) popup_number_entry_window_ParamLimits

0x35e9,	// (0x000adb61) popup_number_entry_window

0x93a5,	// (0x000b391d) bg_popup_call_pane_cp05_ParamLimits

0x93a5,	// (0x000b391d) bg_popup_call_pane_cp05

0x93c5,	// (0x000b393d) popup_number_entry_window_t1

0x93d8,	// (0x000b3950) popup_number_entry_window_t2

0x93ea,	// (0x000b3962) popup_number_entry_window_t3

0x0003,

0xf0c6,	// (0x000b963e) popup_number_entry_window_t

0x93fc,	// (0x000b3974) text_title_cp2

0x940f,	// (0x000b3987) bg_popup_call_pane_cp_ParamLimits

0x940f,	// (0x000b3987) bg_popup_call_pane_cp

0x941d,	// (0x000b3995) call_thumbnail_pane

0x9425,	// (0x000b399d) popup_call_audio_in_window_g1_ParamLimits

0x9425,	// (0x000b399d) popup_call_audio_in_window_g1

0x9431,	// (0x000b39a9) popup_call_audio_in_window_g2_ParamLimits

0x9431,	// (0x000b39a9) popup_call_audio_in_window_g2

0x943d,	// (0x000b39b5) popup_call_audio_in_window_g3_ParamLimits

0x943d,	// (0x000b39b5) popup_call_audio_in_window_g3

0x0002,

0xf0cf,	// (0x000b9647) popup_call_audio_in_window_g_ParamLimits

0xf0cf,	// (0x000b9647) popup_call_audio_in_window_g

0x9449,	// (0x000b39c1) popup_call_audio_in_window_t1_ParamLimits

0x9449,	// (0x000b39c1) popup_call_audio_in_window_t1

0x9465,	// (0x000b39dd) popup_call_audio_in_window_t2_ParamLimits

0x9465,	// (0x000b39dd) popup_call_audio_in_window_t2

0x9481,	// (0x000b39f9) popup_call_audio_in_window_t3_ParamLimits

0x9481,	// (0x000b39f9) popup_call_audio_in_window_t3

0x0002,

0xf0d6,	// (0x000b964e) popup_call_audio_in_window_t_ParamLimits

0xf0d6,	// (0x000b964e) popup_call_audio_in_window_t

0x940f,	// (0x000b3987) bg_popup_call_pane_cp01_ParamLimits

0x940f,	// (0x000b3987) bg_popup_call_pane_cp01

0x941d,	// (0x000b3995) call_thumbnail_pane_cp02

0x9494,	// (0x000b3a0c) call_type_pane_cp022

0x949c,	// (0x000b3a14) popup_call_audio_out_window_g1_ParamLimits

0x949c,	// (0x000b3a14) popup_call_audio_out_window_g1

0x94ae,	// (0x000b3a26) popup_call_audio_out_window_g2_ParamLimits

0x94ae,	// (0x000b3a26) popup_call_audio_out_window_g2

0x94ba,	// (0x000b3a32) popup_call_audio_out_window_g3_ParamLimits

0x94ba,	// (0x000b3a32) popup_call_audio_out_window_g3

0x0002,

0xf0dd,	// (0x000b9655) popup_call_audio_out_window_g_ParamLimits

0xf0dd,	// (0x000b9655) popup_call_audio_out_window_g

0x94cc,	// (0x000b3a44) popup_call_audio_out_window_t1_ParamLimits

0x94cc,	// (0x000b3a44) popup_call_audio_out_window_t1

0x94e4,	// (0x000b3a5c) popup_call_audio_out_window_t2_ParamLimits

0x94e4,	// (0x000b3a5c) popup_call_audio_out_window_t2

0x0001,

0xf0e4,	// (0x000b965c) popup_call_audio_out_window_t_ParamLimits

0xf0e4,	// (0x000b965c) popup_call_audio_out_window_t

0x94f9,	// (0x000b3a71) bg_popup_call_pane_ParamLimits

0x94f9,	// (0x000b3a71) bg_popup_call_pane

0x03be,	// (0x000aa936) call_thumbnail_pane_cp_ParamLimits

0x03be,	// (0x000aa936) call_thumbnail_pane_cp

0x957d,	// (0x000b3af5) call_type_pane_cp01_ParamLimits

0x957d,	// (0x000b3af5) call_type_pane_cp01

0x95c1,	// (0x000b3b39) popup_call_audio_first_window_g1_ParamLimits

0x95c1,	// (0x000b3b39) popup_call_audio_first_window_g1

0x960d,	// (0x000b3b85) popup_call_audio_first_window_g2_ParamLimits

0x960d,	// (0x000b3b85) popup_call_audio_first_window_g2

0x0001,

0xf0e9,	// (0x000b9661) popup_call_audio_first_window_g_ParamLimits

0xf0e9,	// (0x000b9661) popup_call_audio_first_window_g

0x9651,	// (0x000b3bc9) popup_call_audio_first_window_t1_ParamLimits

0x9651,	// (0x000b3bc9) popup_call_audio_first_window_t1

0x96fd,	// (0x000b3c75) popup_call_audio_first_window_t4_ParamLimits

0x96fd,	// (0x000b3c75) popup_call_audio_first_window_t4

0x9789,	// (0x000b3d01) popup_call_audio_first_window_t5_ParamLimits

0x9789,	// (0x000b3d01) popup_call_audio_first_window_t5

0x0002,

0xf0ee,	// (0x000b9666) popup_call_audio_first_window_t_ParamLimits

0xf0ee,	// (0x000b9666) popup_call_audio_first_window_t

0x97b8,	// (0x000b3d30) bg_popup_call_pane_cp02

0x97c2,	// (0x000b3d3a) call_type_pane_cp023

0x97ca,	// (0x000b3d42) popup_call_audio_wait_window_g1

0x97d2,	// (0x000b3d4a) popup_call_audio_wait_window_g2

0x0001,

0xf0f5,	// (0x000b966d) popup_call_audio_wait_window_g

0x9ef6,	// (0x000b446e) popup_call_audio_wait_window_t3

0x9f04,	// (0x000b447c) bg_popup_call_pane_cp03_ParamLimits

0x9f04,	// (0x000b447c) bg_popup_call_pane_cp03

0x9f64,	// (0x000b44dc) call_thumbnail_pane_cp011_ParamLimits

0x9f64,	// (0x000b44dc) call_thumbnail_pane_cp011

0x9f70,	// (0x000b44e8) call_type_pane_cp034_ParamLimits

0x9f70,	// (0x000b44e8) call_type_pane_cp034

0x9fac,	// (0x000b4524) popup_call_audio_second_window_g1_ParamLimits

0x9fac,	// (0x000b4524) popup_call_audio_second_window_g1

0x9fe8,	// (0x000b4560) popup_call_audio_second_window_g2_ParamLimits

0x9fe8,	// (0x000b4560) popup_call_audio_second_window_g2

0x0001,

0xf0fa,	// (0x000b9672) popup_call_audio_second_window_g_ParamLimits

0xf0fa,	// (0x000b9672) popup_call_audio_second_window_g

0xa024,	// (0x000b459c) popup_call_audio_second_window_t1_ParamLimits

0xa024,	// (0x000b459c) popup_call_audio_second_window_t1

0xa0a5,	// (0x000b461d) popup_call_audio_second_window_t2_ParamLimits

0xa0a5,	// (0x000b461d) popup_call_audio_second_window_t2

0xa0db,	// (0x000b4653) popup_call_audio_second_window_t3_ParamLimits

0xa0db,	// (0x000b4653) popup_call_audio_second_window_t3

0x0002,

0xf0ff,	// (0x000b9677) popup_call_audio_second_window_t_ParamLimits

0xf0ff,	// (0x000b9677) popup_call_audio_second_window_t

0x97b8,	// (0x000b3d30) bg_popup_call_pane_cp04

0xa111,	// (0x000b4689) list_conf_pane

0xa119,	// (0x000b4691) popup_call_audio_conf_window_t1

0xa127,	// (0x000b469f) call_thumbnail_pane_g1

0xa12f,	// (0x000b46a7) bg_pinb_pane_ParamLimits

0xa12f,	// (0x000b46a7) bg_pinb_pane

0xa13d,	// (0x000b46b5) find_pinb_pane

0xa146,	// (0x000b46be) listscroll_pinb_pane_ParamLimits

0xa146,	// (0x000b46be) listscroll_pinb_pane

0xa155,	// (0x000b46cd) pinb_bg_pane_g1

0x03e2,	// (0x000aa95a) pinb_bg_pane_g2

0x03ee,	// (0x000aa966) pinb_bg_pane_g3

0x03fa,	// (0x000aa972) pinb_bg_pane_g4

0x0406,	// (0x000aa97e) pinb_bg_pane_g5

0x0412,	// (0x000aa98a) pinb_bg_pane_g6

0x041d,	// (0x000aa995) pinb_bg_pane_g7

0x0428,	// (0x000aa9a0) pinb_bg_pane_g8

0x0433,	// (0x000aa9ab) pinb_bg_pane_g9

0x043d,	// (0x000aa9b5) pinb_bg_pane_g10

0x0009,

0xf106,	// (0x000b967e) pinb_bg_pane_g

0x045a,	// (0x000aa9d2) grid_pinb_pane

0x0463,	// (0x000aa9db) list_pinb_pane

0x046c,	// (0x000aa9e4) scroll_pane_cp01_ParamLimits

0x046c,	// (0x000aa9e4) scroll_pane_cp01

0xa15f,	// (0x000b46d7) find_pinb_pane_g1_ParamLimits

0xa15f,	// (0x000b46d7) find_pinb_pane_g1

0xa177,	// (0x000b46ef) find_pinb_pane_t1

0xa189,	// (0x000b4701) find_pinb_pane_t2

0x0001,

0xf120,	// (0x000b9698) find_pinb_pane_t

0xa19e,	// (0x000b4716) input_focus_pane_cp01_ParamLimits

0xa19e,	// (0x000b4716) input_focus_pane_cp01

0x047e,	// (0x000aa9f6) cell_pinb_pane_ParamLimits

0x047e,	// (0x000aa9f6) cell_pinb_pane

0xa1aa,	// (0x000b4722) cell_pinb_pane_g1_ParamLimits

0xa1aa,	// (0x000b4722) cell_pinb_pane_g1

0xa1bd,	// (0x000b4735) cell_pinb_pane_g2_ParamLimits

0xa1bd,	// (0x000b4735) cell_pinb_pane_g2

0xa1c9,	// (0x000b4741) cell_pinb_pane_g3_ParamLimits

0xa1c9,	// (0x000b4741) cell_pinb_pane_g3

0x0002,

0xf125,	// (0x000b969d) cell_pinb_pane_g_ParamLimits

0xf125,	// (0x000b969d) cell_pinb_pane_g

0x97b8,	// (0x000b3d30) grid_highlight_pane_cp01

0x04ac,	// (0x000aaa24) list_pinb_item_pane_ParamLimits

0x04ac,	// (0x000aaa24) list_pinb_item_pane

0x97b8,	// (0x000b3d30) list_highlight_pane_cp02

0x04bf,	// (0x000aaa37) list_pinb_item_pane_g1_ParamLimits

0x04bf,	// (0x000aaa37) list_pinb_item_pane_g1

0x04cc,	// (0x000aaa44) list_pinb_item_pane_g2_ParamLimits

0x04cc,	// (0x000aaa44) list_pinb_item_pane_g2

0x04d8,	// (0x000aaa50) list_pinb_item_pane_g3_ParamLimits

0x04d8,	// (0x000aaa50) list_pinb_item_pane_g3

0x04e9,	// (0x000aaa61) list_pinb_item_pane_g4_ParamLimits

0x04e9,	// (0x000aaa61) list_pinb_item_pane_g4

0x0003,

0xf12c,	// (0x000b96a4) list_pinb_item_pane_g_ParamLimits

0xf12c,	// (0x000b96a4) list_pinb_item_pane_g

0x04f5,	// (0x000aaa6d) list_pinb_item_pane_t1_ParamLimits

0x04f5,	// (0x000aaa6d) list_pinb_item_pane_t1

0x052a,	// (0x000aaaa2) calc_display_pane

0x0552,	// (0x000aaaca) calc_paper_pane

0x0575,	// (0x000aaaed) grid_calc_pane

0x97b8,	// (0x000b3d30) bg_list_pane_cp01

0x05a3,	// (0x000aab1b) clock_g1

0x05ab,	// (0x000aab23) clock_g2

0x0001,

0xf135,	// (0x000b96ad) clock_g

0x05b3,	// (0x000aab2b) clock_t1_ParamLimits

0x05b3,	// (0x000aab2b) clock_t1

0x05c8,	// (0x000aab40) clock_t2_ParamLimits

0x05c8,	// (0x000aab40) clock_t2

0x05da,	// (0x000aab52) clock_t3_ParamLimits

0x05da,	// (0x000aab52) clock_t3

0x05ec,	// (0x000aab64) clock_t4_ParamLimits

0x05ec,	// (0x000aab64) clock_t4

0x05fe,	// (0x000aab76) clock_t5_ParamLimits

0x05fe,	// (0x000aab76) clock_t5

0x0613,	// (0x000aab8b) clock_t6_ParamLimits

0x0613,	// (0x000aab8b) clock_t6

0x0625,	// (0x000aab9d) clock_t7_ParamLimits

0x0625,	// (0x000aab9d) clock_t7

0x0637,	// (0x000aabaf) clock_t8_ParamLimits

0x0637,	// (0x000aabaf) clock_t8

0x064b,	// (0x000aabc3) clock_t9_ParamLimits

0x064b,	// (0x000aabc3) clock_t9

0x0008,

0xf13a,	// (0x000b96b2) clock_t_ParamLimits

0xf13a,	// (0x000b96b2) clock_t

0xa1d5,	// (0x000b474d) popup_clock_analogue_window_cp02

0xa1d5,	// (0x000b474d) popup_clock_digital_window_cp01

0xa1dd,	// (0x000b4755) listscroll_help_pane

0x97b8,	// (0x000b3d30) phob_pre_status_pane

0xa1e7,	// (0x000b475f) grid_qdial_pane

0xa12f,	// (0x000b46a7) listscroll_mce_pane

0xa12f,	// (0x000b46a7) bg_notes_pane

0xa1f1,	// (0x000b4769) list_notes_pane

0x065f,	// (0x000aabd7) scroll_pane_cp06

0xa1ff,	// (0x000b4777) bg_calc_paper_pane

0x97e2,	// (0x000b3d5a) list_calc_pane

0xa213,	// (0x000b478b) bg_calc_display_pane

0x0673,	// (0x000aabeb) calc_display_pane_t1

0x0685,	// (0x000aabfd) calc_display_pane_t2

0x97fc,	// (0x000b3d74) calc_display_pane_t3

0x0002,

0xf14d,	// (0x000b96c5) calc_display_pane_t

0x0697,	// (0x000aac0f) cell_calc_pane_ParamLimits

0x0697,	// (0x000aac0f) cell_calc_pane

0xa21f,	// (0x000b4797) bg_calc_paper_pane_g1

0xa22b,	// (0x000b47a3) bg_calc_paper_pane_g2

0xa237,	// (0x000b47af) bg_calc_paper_pane_g3

0xa243,	// (0x000b47bb) bg_calc_paper_pane_g4

0xa24f,	// (0x000b47c7) bg_calc_paper_pane_g5

0x06ce,	// (0x000aac46) bg_calc_paper_pane_g6

0x06df,	// (0x000aac57) bg_calc_paper_pane_g7

0x06f0,	// (0x000aac68) bg_calc_paper_pane_g8

0x0007,

0xf154,	// (0x000b96cc) bg_calc_paper_pane_g

0x0703,	// (0x000aac7b) calc_bg_paper_pane_g9

0x0716,	// (0x000aac8e) list_calc_item_pane_ParamLimits

0x0716,	// (0x000aac8e) list_calc_item_pane

0xa25b,	// (0x000b47d3) list_calc_item_pane_g1

0x980e,	// (0x000b3d86) list_calc_item_pane_t1_ParamLimits

0x980e,	// (0x000b3d86) list_calc_item_pane_t1

0x0730,	// (0x000aaca8) list_calc_item_pane_t2_ParamLimits

0x0730,	// (0x000aaca8) list_calc_item_pane_t2

0x0001,

0xf165,	// (0x000b96dd) list_calc_item_pane_t_ParamLimits

0xf165,	// (0x000b96dd) list_calc_item_pane_t

0xa268,	// (0x000b47e0) cell_calc_pane_g1

0xa272,	// (0x000b47ea) grid_highlight_pane_cp02

0xa294,	// (0x000b480c) bg_calc_display_pane_g1

0x9820,	// (0x000b3d98) bg_calc_display_pane_g2

0xa29d,	// (0x000b4815) bg_calc_display_pane_g3

0x0002,

0xf16f,	// (0x000b96e7) bg_calc_display_pane_g

0x0762,	// (0x000aacda) cell_qdial_pane_ParamLimits

0x0762,	// (0x000aacda) cell_qdial_pane

0x0776,	// (0x000aacee) cell_qdial_pane_g1_ParamLimits

0x0776,	// (0x000aacee) cell_qdial_pane_g1

0x078c,	// (0x000aad04) cell_qdial_pane_g2_ParamLimits

0x078c,	// (0x000aad04) cell_qdial_pane_g2

0xa2a6,	// (0x000b481e) cell_qdial_pane_g3_ParamLimits

0xa2a6,	// (0x000b481e) cell_qdial_pane_g3

0x0003,

0xf176,	// (0x000b96ee) cell_qdial_pane_g_ParamLimits

0xf176,	// (0x000b96ee) cell_qdial_pane_g

0x07b2,	// (0x000aad2a) cell_qdial_pane_t1_ParamLimits

0x07b2,	// (0x000aad2a) cell_qdial_pane_t1

0x07ca,	// (0x000aad42) cell_qdial_pane_t2_ParamLimits

0x07ca,	// (0x000aad42) cell_qdial_pane_t2

0x07dd,	// (0x000aad55) cell_qdial_pane_t3_ParamLimits

0x07dd,	// (0x000aad55) cell_qdial_pane_t3

0x0002,

0xf17f,	// (0x000b96f7) cell_qdial_pane_t_ParamLimits

0xf17f,	// (0x000b96f7) cell_qdial_pane_t

0x97b8,	// (0x000b3d30) grid_highlight_pane_cp04

0xa2b2,	// (0x000b482a) thumbnail_qdial_pane_ParamLimits

0xa2b2,	// (0x000b482a) thumbnail_qdial_pane

0xa30e,	// (0x000b4886) list_help_pane

0xa317,	// (0x000b488f) scroll_pane_cp02

0x07f0,	// (0x000aad68) help_list_pane_t1_ParamLimits

0x07f0,	// (0x000aad68) help_list_pane_t1

0x982a,	// (0x000b3da2) bg_notes_pane_g2

0x9832,	// (0x000b3daa) bg_notes_pane_g3

0x983a,	// (0x000b3db2) notes_bg_pane_g1

0x9842,	// (0x000b3dba) notes_bg_pane_g4

0x984a,	// (0x000b3dc2) notes_bg_pane_g5

0x9852,	// (0x000b3dca) notes_bg_pane_g6

0x985a,	// (0x000b3dd2) notes_bg_pane_g7

0x9862,	// (0x000b3dda) notes_bg_pane_g8

0x986a,	// (0x000b3de2) notes_bg_pane_g9

0x0006,

0xf19d,	// (0x000b9715) notes_bg_pane_g

0x080f,	// (0x000aad87) list_notes_text_pane_ParamLimits

0x080f,	// (0x000aad87) list_notes_text_pane

0xa320,	// (0x000b4898) list_notes_text_pane_g1

0xa329,	// (0x000b48a1) list_notes_text_pane_t1

0x0825,	// (0x000aad9d) listscroll_cale_week_pane

0x0851,	// (0x000aadc9) bg_cale_heading_pane

0xa351,	// (0x000b48c9) bg_cale_pane_cp01

0x086f,	// (0x000aade7) cale_week_corner_pane

0x088e,	// (0x000aae06) cale_week_day_heading_pane

0x08b1,	// (0x000aae29) cale_week_scroll_pane_g1

0x08ca,	// (0x000aae42) cale_week_scroll_pane_g2

0x08e2,	// (0x000aae5a) cale_week_scroll_pane_g3

0x08fa,	// (0x000aae72) cale_week_scroll_pane_g4

0x0912,	// (0x000aae8a) cale_week_scroll_pane_g5

0x092e,	// (0x000aaea6) cale_week_scroll_pane_g6

0x094e,	// (0x000aaec6) cale_week_scroll_pane_g7

0x096e,	// (0x000aaee6) cale_week_scroll_pane_g8

0x0992,	// (0x000aaf0a) cale_week_scroll_pane_g9

0x09aa,	// (0x000aaf22) cale_week_scroll_pane_g10

0x09c2,	// (0x000aaf3a) cale_week_scroll_pane_g11

0x09da,	// (0x000aaf52) cale_week_scroll_pane_g12

0x09f2,	// (0x000aaf6a) cale_week_scroll_pane_g13

0x09f2,	// (0x000aaf6a) cale_week_scroll_pane_g14

0x09f2,	// (0x000aaf6a) cale_week_scroll_pane_g15

0x000f,

0xf1ac,	// (0x000b9724) cale_week_scroll_pane_g

0x0a2e,	// (0x000aafa6) cale_week_time_pane

0x0a52,	// (0x000aafca) grid_cale_week_pane

0xa381,	// (0x000b48f9) scroll_pane_cp08

0x0a78,	// (0x000aaff0) cell_cale_week_pane_ParamLimits

0x0a78,	// (0x000aaff0) cell_cale_week_pane

0x0b06,	// (0x000ab07e) cale_week_day_heading_pane_t1

0x0b50,	// (0x000ab0c8) cale_week_day_heading_pane_t2

0x0b9f,	// (0x000ab117) cale_week_day_heading_pane_t3

0x0bee,	// (0x000ab166) cale_week_day_heading_pane_t4

0x0c3d,	// (0x000ab1b5) cale_week_day_heading_pane_t5

0x0c94,	// (0x000ab20c) cale_week_day_heading_pane_t6

0x0ceb,	// (0x000ab263) cale_week_day_heading_pane_t7

0x0006,

0xf1cd,	// (0x000b9745) cale_week_day_heading_pane_t

0xa39e,	// (0x000b4916) bg_cale_side_pane

0x0d35,	// (0x000ab2ad) cale_week_time_pane_t1

0x0d4f,	// (0x000ab2c7) cale_week_time_pane_t2

0x0d69,	// (0x000ab2e1) cale_week_time_pane_t3

0x0d83,	// (0x000ab2fb) cale_week_time_pane_t4

0x0d9d,	// (0x000ab315) cale_week_time_pane_t5

0x0db7,	// (0x000ab32f) cale_week_time_pane_t6

0x0dd1,	// (0x000ab349) cale_week_time_pane_t7

0x0df1,	// (0x000ab369) cale_week_time_pane_t8

0x0007,

0xf1dc,	// (0x000b9754) cale_week_time_pane_t

0x0e11,	// (0x000ab389) cell_cale_week_pane_g2

0x0e35,	// (0x000ab3ad) cell_cale_week_pane_g3_ParamLimits

0x0e35,	// (0x000ab3ad) cell_cale_week_pane_g3

0xa3ac,	// (0x000b4924) grid_highlight_pane_cp07

0xa3b4,	// (0x000b492c) listscroll_gms_pane

0xa3be,	// (0x000b4936) grid_gms_pane

0xa3c7,	// (0x000b493f) listscroll_gms_pane_g1

0xa3cf,	// (0x000b4947) listscroll_gms_pane_g2

0x0001,

0xf1ed,	// (0x000b9765) listscroll_gms_pane_g

0x0e4d,	// (0x000ab3c5) scroll_pane_cp010

0x0e58,	// (0x000ab3d0) cell_gms_pane_ParamLimits

0x0e58,	// (0x000ab3d0) cell_gms_pane

0x0e6a,	// (0x000ab3e2) cell_gms_pane_g1

0xa3d7,	// (0x000b494f) cell_gms_pane_g2

0xa320,	// (0x000b4898) cell_gms_pane_g3

0xa3df,	// (0x000b4957) cell_gms_pane_g4

0x0003,

0xf1f2,	// (0x000b976a) cell_gms_pane_g

0xa3e8,	// (0x000b4960) grid_highlight_pane_cp09

0x3408,	// (0x000ad980) phob_pre_status_pane_g1

0x3410,	// (0x000ad988) phob_pre_status_pane_g2

0x3418,	// (0x000ad990) phob_pre_status_pane_g3

0x3420,	// (0x000ad998) phob_pre_status_pane_g4

0x0004,

0xf5e1,	// (0x000b9b59) phob_pre_status_pane_g

0x3430,	// (0x000ad9a8) phob_pre_status_pane_t1

0x343e,	// (0x000ad9b6) phob_pre_status_pane_t2

0x344e,	// (0x000ad9c6) phob_pre_status_pane_t3

0x0002,

0xf5ec,	// (0x000b9b64) phob_pre_status_pane_t

0x97b8,	// (0x000b3d30) bg_list_pane_cp05

0x0e7a,	// (0x000ab3f2) grid_vorec_pane

0x0e84,	// (0x000ab3fc) vorec_t1

0x0e92,	// (0x000ab40a) vorec_t2

0x0ea0,	// (0x000ab418) vorec_t3

0x0eae,	// (0x000ab426) vorec_t4

0x9872,	// (0x000b3dea) vorec_t5

0x0ebc,	// (0x000ab434) vorec_t6

0x0006,

0xf1fb,	// (0x000b9773) vorec_t

0x0ed8,	// (0x000ab450) wait_bar_pane_cp01

0x0ee0,	// (0x000ab458) cell_vorec_pane_ParamLimits

0x0ee0,	// (0x000ab458) cell_vorec_pane

0x9880,	// (0x000b3df8) cell_vorec_pane_g1

0x97b8,	// (0x000b3d30) grid_highlight_pane_cp05

0x0f0b,	// (0x000ab483) cams_zoom_pane

0x0f1a,	// (0x000ab492) image_vga_pane

0x0f34,	// (0x000ab4ac) main_camera_pane_g1

0x0f46,	// (0x000ab4be) main_camera_pane_g2

0x0f56,	// (0x000ab4ce) main_camera_pane_g3

0x0f68,	// (0x000ab4e0) main_camera_pane_g4

0x0f7a,	// (0x000ab4f2) main_camera_pane_g5

0x0f8c,	// (0x000ab504) main_camera_pane_g6

0x0f9e,	// (0x000ab516) main_camera_pane_g7

0x0007,

0xf20a,	// (0x000b9782) main_camera_pane_g

0x0fb0,	// (0x000ab528) main_camera_pane_t1

0x0fc6,	// (0x000ab53e) main_camera_pane_t2

0x0001,

0xf21b,	// (0x000b9793) main_camera_pane_t

0x1002,	// (0x000ab57a) cams_zoom_pane_cp_ParamLimits

0x1002,	// (0x000ab57a) cams_zoom_pane_cp

0x102a,	// (0x000ab5a2) image_cif_pane_ParamLimits

0x102a,	// (0x000ab5a2) image_cif_pane

0x1065,	// (0x000ab5dd) image_subqcif_pane

0x106d,	// (0x000ab5e5) main_video_pane_g1_ParamLimits

0x106d,	// (0x000ab5e5) main_video_pane_g1

0x1091,	// (0x000ab609) main_video_pane_g2_ParamLimits

0x1091,	// (0x000ab609) main_video_pane_g2

0x10c5,	// (0x000ab63d) main_video_pane_g3_ParamLimits

0x10c5,	// (0x000ab63d) main_video_pane_g3

0x10f3,	// (0x000ab66b) main_video_pane_g4_ParamLimits

0x10f3,	// (0x000ab66b) main_video_pane_g4

0x1121,	// (0x000ab699) main_video_pane_g5_ParamLimits

0x1121,	// (0x000ab699) main_video_pane_g5

0xa3fc,	// (0x000b4974) main_video_pane_g6_ParamLimits

0xa3fc,	// (0x000b4974) main_video_pane_g6

0x0006,

0xf220,	// (0x000b9798) main_video_pane_g_ParamLimits

0xf220,	// (0x000b9798) main_video_pane_g

0x114a,	// (0x000ab6c2) main_video_pane_t1_ParamLimits

0x114a,	// (0x000ab6c2) main_video_pane_t1

0xa416,	// (0x000b498e) cams_zoom_pane_g1

0xa41f,	// (0x000b4997) cams_zoom_pane_g2

0xa428,	// (0x000b49a0) cams_zoom_pane_g3

0xa431,	// (0x000b49a9) cams_zoom_pane_g4

0x0003,

0xf22f,	// (0x000b97a7) cams_zoom_pane_g

0x11a7,	// (0x000ab71f) grid_cams_pane

0x11c1,	// (0x000ab739) linegrid_cams_pane

0x11d4,	// (0x000ab74c) cell_cams_pane_ParamLimits

0x11d4,	// (0x000ab74c) cell_cams_pane

0xa43a,	// (0x000b49b2) cams_burst_image_pane

0xa442,	// (0x000b49ba) cell_cams_pane_g1

0x97b8,	// (0x000b3d30) grid_highlight_pane_cp03

0xa268,	// (0x000b47e0) mp_bg_pane_g1

0x97b8,	// (0x000b3d30) bg_list_pane_cp03

0xc6cf,	// (0x000b6c47) bg_mp_pane

0xc6d7,	// (0x000b6c4f) grid_mp_pane

0xc6df,	// (0x000b6c57) media_player_g1

0xc6e7,	// (0x000b6c5f) media_player_t1

0xc6f5,	// (0x000b6c6d) media_player_t2

0xc703,	// (0x000b6c7b) media_player_t3

0xc711,	// (0x000b6c89) media_player_t4

0xc71f,	// (0x000b6c97) media_player_t5

0xc72d,	// (0x000b6ca5) media_player_t6

0xc73b,	// (0x000b6cb3) media_player_t7

0x0006,

0xf5cb,	// (0x000b9b43) media_player_t

0xc749,	// (0x000b6cc1) wait_bar_pane_cp02

0xf5b0,	// (0x000b9b28) main_usb_pane_t

0x33ff,	// (0x000ad977) cell_mp_pane

0xa268,	// (0x000b47e0) cell_mp_pane_g1

0x97b8,	// (0x000b3d30) grid_highlight_pane_cp06

0xa44a,	// (0x000b49c2) grid_skin_colour_pane

0xa452,	// (0x000b49ca) list_highlight_pane_cp03

0x1309,	// (0x000ab881) skin_g1

0xa45a,	// (0x000b49d2) skin_t1

0xa469,	// (0x000b49e1) skin_t2

0x0001,

0xf264,	// (0x000b97dc) skin_t

0x1311,	// (0x000ab889) cell_skin_colour_pane_ParamLimits

0x1311,	// (0x000ab889) cell_skin_colour_pane

0xa477,	// (0x000b49ef) cell_skin_colour_pane_g1

0x138a,	// (0x000ab902) call_video_g1_ParamLimits

0x138a,	// (0x000ab902) call_video_g1

0x13a6,	// (0x000ab91e) call_video_g2_ParamLimits

0x13a6,	// (0x000ab91e) call_video_g2

0x0001,

0xf269,	// (0x000b97e1) call_video_g_ParamLimits

0xf269,	// (0x000b97e1) call_video_g

0x13f8,	// (0x000ab970) call_video_uplink_pane_cp1_ParamLimits

0x13f8,	// (0x000ab970) call_video_uplink_pane_cp1

0xa489,	// (0x000b4a01) call_video_uplink_pane_cp2

0x1497,	// (0x000aba0f) video_down_crop_pane_ParamLimits

0x1497,	// (0x000aba0f) video_down_crop_pane

0x1580,	// (0x000abaf8) video_down_pane_ParamLimits

0x1580,	// (0x000abaf8) video_down_pane

0xa491,	// (0x000b4a09) video_down_subqcif_pane_ParamLimits

0xa491,	// (0x000b4a09) video_down_subqcif_pane

0xa4a9,	// (0x000b4a21) video_down_subqcif_pane_cp_ParamLimits

0xa4a9,	// (0x000b4a21) video_down_subqcif_pane_cp

0xa4cf,	// (0x000b4a47) im_reading_pane_ParamLimits

0xa4cf,	// (0x000b4a47) im_reading_pane

0x168e,	// (0x000abc06) im_writing_pane_ParamLimits

0x168e,	// (0x000abc06) im_writing_pane

0x16a4,	// (0x000abc1c) im_reading_pane_t1

0xa4e9,	// (0x000b4a61) list_im_pane

0xa4fa,	// (0x000b4a72) scroll_pane_cp07

0x16e1,	// (0x000abc59) im_writing_pane_t1_ParamLimits

0x16e1,	// (0x000abc59) im_writing_pane_t1

0xa513,	// (0x000b4a8b) im_writing_pane_t2_ParamLimits

0xa513,	// (0x000b4a8b) im_writing_pane_t2

0x0001,

0xf273,	// (0x000b97eb) im_writing_pane_t_ParamLimits

0xf273,	// (0x000b97eb) im_writing_pane_t

0x97b8,	// (0x000b3d30) input_focus_pane_cp04

0x97b8,	// (0x000b3d30) input_focus_pane_cp05

0x16f6,	// (0x000abc6e) list_im_single_pane_ParamLimits

0x16f6,	// (0x000abc6e) list_im_single_pane

0x170c,	// (0x000abc84) list_single_im_pane_t1

0x33bf,	// (0x000ad937) blid_accuracy_pane

0x33c7,	// (0x000ad93f) blid_compass_pane

0x33d1,	// (0x000ad949) main_location_t1

0x33e1,	// (0x000ad959) main_location_t2

0x33f1,	// (0x000ad969) main_location_t3

0x0002,

0xf5da,	// (0x000b9b52) main_location_t

0x97b8,	// (0x000b3d30) aid_levels_location

0xa268,	// (0x000b47e0) blid_accuracy_pane_g1

0xa268,	// (0x000b47e0) blid_accuracy_pane_g2

0x0001,

0xf2d5,	// (0x000b984d) blid_accuracy_pane_g

0xa55b,	// (0x000b4ad3) wml_content_pane

0xa599,	// (0x000b4b11) wml_button_pane_ParamLimits

0xa599,	// (0x000b4b11) wml_button_pane

0x171b,	// (0x000abc93) wml_list_single_large_pane_ParamLimits

0x171b,	// (0x000abc93) wml_list_single_large_pane

0x1731,	// (0x000abca9) wml_list_single_medium_pane_ParamLimits

0x1731,	// (0x000abca9) wml_list_single_medium_pane

0x174b,	// (0x000abcc3) wml_list_single_small_pane_ParamLimits

0x174b,	// (0x000abcc3) wml_list_single_small_pane

0xa5ad,	// (0x000b4b25) wml_selection_box_pane_ParamLimits

0xa5ad,	// (0x000b4b25) wml_selection_box_pane

0xa5c0,	// (0x000b4b38) wml_list_single_pane_t1

0xa5cf,	// (0x000b4b47) wml_list_single_medium_pane_t1

0xaac0,	// (0x000b5038) wml_list_single_large_pane_t1

0xaacf,	// (0x000b5047) input_focus_pane_cp02_ParamLimits

0xaacf,	// (0x000b5047) input_focus_pane_cp02

0xaae2,	// (0x000b505a) wml_selection_box_pane_g1

0xaaeb,	// (0x000b5063) wml_selection_box_pane_t1_ParamLimits

0xaaeb,	// (0x000b5063) wml_selection_box_pane_t1

0xa12f,	// (0x000b46a7) bg_wml_button_pane_ParamLimits

0xa12f,	// (0x000b46a7) bg_wml_button_pane

0xab03,	// (0x000b507b) wml_button_pane_g1

0xab0b,	// (0x000b5083) wml_button_pane_t1

0xab03,	// (0x000b507b) wml_button_bg_pane_g1

0xab1b,	// (0x000b5093) wml_button_bg_pane_g2

0xab23,	// (0x000b509b) wml_button_bg_pane_g3

0xab2b,	// (0x000b50a3) wml_button_bg_pane_g4

0xab33,	// (0x000b50ab) wml_button_bg_pane_g5

0xab3b,	// (0x000b50b3) wml_button_bg_pane_g6

0xab43,	// (0x000b50bb) wml_button_bg_pane_g7

0xab4b,	// (0x000b50c3) wml_button_bg_pane_g8

0xab53,	// (0x000b50cb) wml_button_bg_pane_g9

0x0008,

0xf278,	// (0x000b97f0) wml_button_bg_pane_g

0x1765,	// (0x000abcdd) bg_list_pane_cp02

0xab5b,	// (0x000b50d3) mce_header_pane_ParamLimits

0xab5b,	// (0x000b50d3) mce_header_pane

0xab71,	// (0x000b50e9) mce_icon_pane

0xab71,	// (0x000b50e9) mce_image_pane

0xab7a,	// (0x000b50f2) mce_text_pane_ParamLimits

0xab7a,	// (0x000b50f2) mce_text_pane

0x176d,	// (0x000abce5) scroll_pane_cp03

0xa591,	// (0x000b4b09) scroll_pane_cp04

0xab8d,	// (0x000b5105) scroll_pane_cp05_ParamLimits

0xab8d,	// (0x000b5105) scroll_pane_cp05

0x1777,	// (0x000abcef) mce_header_field_pane_ParamLimits

0x1777,	// (0x000abcef) mce_header_field_pane

0x178e,	// (0x000abd06) mce_header_field_pane_2_ParamLimits

0x178e,	// (0x000abd06) mce_header_field_pane_2

0x17a4,	// (0x000abd1c) mce_header_field_pane_3

0x17ac,	// (0x000abd24) list_single_mce_message_pane_ParamLimits

0x17ac,	// (0x000abd24) list_single_mce_message_pane

0x17c3,	// (0x000abd3b) list_single_mce_smart_pane_ParamLimits

0x17c3,	// (0x000abd3b) list_single_mce_smart_pane

0xab99,	// (0x000b5111) input_focus_pane_cp03

0xaba2,	// (0x000b511a) list_header_data_pane

0x17e5,	// (0x000abd5d) mce_header_field_pane_t1

0x17f5,	// (0x000abd6d) list_single_mce_header_pane_ParamLimits

0x17f5,	// (0x000abd6d) list_single_mce_header_pane

0xabaa,	// (0x000b5122) list_single_mce_header_pane_t1

0xabb9,	// (0x000b5131) list_single_mce_message_pane_g1

0xabc1,	// (0x000b5139) list_single_mce_message_pane_t1

0x182f,	// (0x000abda7) bg_cale_heading_pane_cp01_ParamLimits

0x182f,	// (0x000abda7) bg_cale_heading_pane_cp01

0xabcf,	// (0x000b5147) bg_cale_pane_cp02_ParamLimits

0xabcf,	// (0x000b5147) bg_cale_pane_cp02

0x186a,	// (0x000abde2) cale_month_corner_pane

0x1889,	// (0x000abe01) cale_month_day_heading_pane_ParamLimits

0x1889,	// (0x000abe01) cale_month_day_heading_pane

0x18dc,	// (0x000abe54) cale_month_pane_g1_ParamLimits

0x18dc,	// (0x000abe54) cale_month_pane_g1

0x190c,	// (0x000abe84) cale_month_pane_g2_ParamLimits

0x190c,	// (0x000abe84) cale_month_pane_g2

0x193c,	// (0x000abeb4) cale_month_pane_g3_ParamLimits

0x193c,	// (0x000abeb4) cale_month_pane_g3

0x1978,	// (0x000abef0) cale_month_pane_g4_ParamLimits

0x1978,	// (0x000abef0) cale_month_pane_g4

0x19b4,	// (0x000abf2c) cale_month_pane_g5_ParamLimits

0x19b4,	// (0x000abf2c) cale_month_pane_g5

0x19fc,	// (0x000abf74) cale_month_pane_g6_ParamLimits

0x19fc,	// (0x000abf74) cale_month_pane_g6

0x1a48,	// (0x000abfc0) cale_month_pane_g7_ParamLimits

0x1a48,	// (0x000abfc0) cale_month_pane_g7

0x1a9c,	// (0x000ac014) cale_month_pane_g8_ParamLimits

0x1a9c,	// (0x000ac014) cale_month_pane_g8

0x1af0,	// (0x000ac068) cale_month_pane_g9_ParamLimits

0x1af0,	// (0x000ac068) cale_month_pane_g9

0x1b42,	// (0x000ac0ba) cale_month_pane_g10_ParamLimits

0x1b42,	// (0x000ac0ba) cale_month_pane_g10

0x1b94,	// (0x000ac10c) cale_month_pane_g11_ParamLimits

0x1b94,	// (0x000ac10c) cale_month_pane_g11

0x1be6,	// (0x000ac15e) cale_month_pane_g12_ParamLimits

0x1be6,	// (0x000ac15e) cale_month_pane_g12

0x1c38,	// (0x000ac1b0) cale_month_pane_g13_ParamLimits

0x1c38,	// (0x000ac1b0) cale_month_pane_g13

0x000c,

0xf28b,	// (0x000b9803) cale_month_pane_g_ParamLimits

0xf28b,	// (0x000b9803) cale_month_pane_g

0x1c8a,	// (0x000ac202) cale_month_week_pane

0x1cae,	// (0x000ac226) grid_cale_month_pane_ParamLimits

0x1cae,	// (0x000ac226) grid_cale_month_pane

0x1cec,	// (0x000ac264) cale_month_day_heading_pane_t1

0x1d72,	// (0x000ac2ea) cale_month_day_heading_pane_t2

0x1e03,	// (0x000ac37b) cale_month_day_heading_pane_t3

0x1e94,	// (0x000ac40c) cale_month_day_heading_pane_t4

0x1f2d,	// (0x000ac4a5) cale_month_day_heading_pane_t5

0x1fce,	// (0x000ac546) cale_month_day_heading_pane_t6

0x206f,	// (0x000ac5e7) cale_month_day_heading_pane_t7

0x0006,

0xf2a6,	// (0x000b981e) cale_month_day_heading_pane_t

0xa39e,	// (0x000b4916) bg_cale_side_pane_cp01

0x2118,	// (0x000ac690) cale_month_week_pane_t1

0x2131,	// (0x000ac6a9) cale_month_week_pane_t2

0x214a,	// (0x000ac6c2) cale_month_week_pane_t3

0x2163,	// (0x000ac6db) cale_month_week_pane_t4

0x217c,	// (0x000ac6f4) cale_month_week_pane_t5

0x2195,	// (0x000ac70d) cale_month_week_pane_t6

0x0005,

0xf2b5,	// (0x000b982d) cale_month_week_pane_t

0x21ae,	// (0x000ac726) cell_cale_month_pane_ParamLimits

0x21ae,	// (0x000ac726) cell_cale_month_pane

0x988a,	// (0x000b3e02) cell_cale_month_pane_g1

0x2306,	// (0x000ac87e) cell_cale_month_pane_t1_ParamLimits

0x2306,	// (0x000ac87e) cell_cale_month_pane_t1

0xa3ac,	// (0x000b4924) grid_highlight_pane_cp08

0xa268,	// (0x000b47e0) main_smil_g1

0x2326,	// (0x000ac89e) smil_status_pane

0xac0e,	// (0x000b5186) smil_text_pane

0xc5ef,	// (0x000b6b67) bg_popup_call3_rect_pane_g8

0xc5f7,	// (0x000b6b6f) bg_popup_call3_rect_pane_g9

0x0008,

0xf56e,	// (0x000b9ae6) bg_popup_call3_rect_pane_g

0xc83e,	// (0x000b6db6) smil_status_volume_pane_g1

0xac18,	// (0x000b5190) smil_status_pane_t1

0x99d4,	// (0x000b3f4c) volume_smil_pane

0xac2f,	// (0x000b51a7) list_smil_text_pane

0x233b,	// (0x000ac8b3) scroll_pane_cp011

0x2346,	// (0x000ac8be) smil_text_list_pane_t1_ParamLimits

0x2346,	// (0x000ac8be) smil_text_list_pane_t1

0x9896,	// (0x000b3e0e) aid_volume_smil_ParamLimits

0x9896,	// (0x000b3e0e) aid_volume_smil

0xa268,	// (0x000b47e0) smil_volume_pane_g1

0xa268,	// (0x000b47e0) smil_volume_pane_g2

0x0001,

0xf2d5,	// (0x000b984d) smil_volume_pane_g

0x0825,	// (0x000aad9d) listscroll_cale_day_pane

0xac39,	// (0x000b51b1) bg_cale_pane

0xac51,	// (0x000b51c9) list_cale_pane

0xac74,	// (0x000b51ec) scroll_pane_cp09

0xac85,	// (0x000b51fd) cale_bg_pane_g1

0xac8d,	// (0x000b5205) cale_bg_pane_g2

0xac95,	// (0x000b520d) cale_bg_pane_g3

0xac9d,	// (0x000b5215) cale_bg_pane_g4

0xaca5,	// (0x000b521d) cale_bg_pane_g5

0xacad,	// (0x000b5225) cale_bg_pane_g6

0xacb5,	// (0x000b522d) cale_bg_pane_g7

0xacbd,	// (0x000b5235) cale_bg_pane_g8

0xacc5,	// (0x000b523d) cale_bg_pane_g9

0x0008,

0xf2da,	// (0x000b9852) cale_bg_pane_g

0x2388,	// (0x000ac900) list_cale_time_pane_ParamLimits

0x2388,	// (0x000ac900) list_cale_time_pane

0xacd5,	// (0x000b524d) list_cale_time_pane_g1_ParamLimits

0xacd5,	// (0x000b524d) list_cale_time_pane_g1

0xace1,	// (0x000b5259) list_cale_time_pane_g2_ParamLimits

0xace1,	// (0x000b5259) list_cale_time_pane_g2

0x239f,	// (0x000ac917) list_cale_time_pane_g3_ParamLimits

0x239f,	// (0x000ac917) list_cale_time_pane_g3

0x23ad,	// (0x000ac925) list_cale_time_pane_g4_ParamLimits

0x23ad,	// (0x000ac925) list_cale_time_pane_g4

0x23bb,	// (0x000ac933) list_cale_time_pane_g5_ParamLimits

0x23bb,	// (0x000ac933) list_cale_time_pane_g5

0x0005,

0xf2ed,	// (0x000b9865) list_cale_time_pane_g_ParamLimits

0xf2ed,	// (0x000b9865) list_cale_time_pane_g

0xacfb,	// (0x000b5273) list_cale_time_pane_t1_ParamLimits

0xacfb,	// (0x000b5273) list_cale_time_pane_t1

0xad23,	// (0x000b529b) list_cale_time_pane_t2_ParamLimits

0xad23,	// (0x000b529b) list_cale_time_pane_t2

0x26fd,	// (0x000acc75) aid_blid_cardinal_pane

0x273b,	// (0x000accb3) compass_pane_t4

0xad4b,	// (0x000b52c3) list_cale_time_pane_t4_ParamLimits

0xad4b,	// (0x000b52c3) list_cale_time_pane_t4

0x2749,	// (0x000accc1) compass_pane_t5

0x2757,	// (0x000acccf) compass_pane_t6

0x2765,	// (0x000accdd) compass_pane_t7

0xb208,	// (0x000b5780) navi_pane_cc_t1

0xb3ed,	// (0x000b5965) aid_phob_thumbnail_center_pane

0x2dcf,	// (0x000ad347) main_postcard_pane_g4_ParamLimits

0x0002,

0xf2fa,	// (0x000b9872) list_cale_time_pane_t_ParamLimits

0xf2fa,	// (0x000b9872) list_cale_time_pane_t

0x940f,	// (0x000b3987) bg_popup_window_pane_cp02_ParamLimits

0x940f,	// (0x000b3987) bg_popup_window_pane_cp02

0xad73,	// (0x000b52eb) heading_pane_cp01_ParamLimits

0xad73,	// (0x000b52eb) heading_pane_cp01

0xad7f,	// (0x000b52f7) loc_req_pane_ParamLimits

0xad7f,	// (0x000b52f7) loc_req_pane

0xad8f,	// (0x000b5307) loc_type_pane_ParamLimits

0xad8f,	// (0x000b5307) loc_type_pane

0xada1,	// (0x000b5319) loc_type_pane_t1_ParamLimits

0xada1,	// (0x000b5319) loc_type_pane_t1

0xadb3,	// (0x000b532b) loc_type_pane_t2_ParamLimits

0xadb3,	// (0x000b532b) loc_type_pane_t2

0xadc5,	// (0x000b533d) loc_type_pane_t3_ParamLimits

0xadc5,	// (0x000b533d) loc_type_pane_t3

0x0002,

0xf301,	// (0x000b9879) loc_type_pane_t_ParamLimits

0xf301,	// (0x000b9879) loc_type_pane_t

0xadd7,	// (0x000b534f) list_loc_req_pane

0xade1,	// (0x000b5359) scroll_pane_cp012

0x23c9,	// (0x000ac941) list_single_loc_request_popup_menu_pane_ParamLimits

0x23c9,	// (0x000ac941) list_single_loc_request_popup_menu_pane

0xadec,	// (0x000b5364) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xadec,	// (0x000b5364) list_single_loc_request_popup_menu_pane_g1

0xadf8,	// (0x000b5370) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xadf8,	// (0x000b5370) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf308,	// (0x000b9880) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf308,	// (0x000b9880) list_single_loc_request_popup_menu_pane_g

0xae04,	// (0x000b537c) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xae04,	// (0x000b537c) list_single_loc_request_popup_menu_pane_t1

0xa12f,	// (0x000b46a7) bg_popup_window_pane_cp03_ParamLimits

0xa12f,	// (0x000b46a7) bg_popup_window_pane_cp03

0xae1a,	// (0x000b5392) heading_loc_req_pane_ParamLimits

0xae1a,	// (0x000b5392) heading_loc_req_pane

0x23d6,	// (0x000ac94e) popup_dyc_status_message_window_g1_ParamLimits

0x23d6,	// (0x000ac94e) popup_dyc_status_message_window_g1

0x23ea,	// (0x000ac962) popup_dyc_status_message_window_t1_ParamLimits

0x23ea,	// (0x000ac962) popup_dyc_status_message_window_t1

0x23ff,	// (0x000ac977) popup_dyc_status_message_window_t2_ParamLimits

0x23ff,	// (0x000ac977) popup_dyc_status_message_window_t2

0x2414,	// (0x000ac98c) popup_dyc_status_message_window_t3_ParamLimits

0x2414,	// (0x000ac98c) popup_dyc_status_message_window_t3

0x0002,

0xf30d,	// (0x000b9885) popup_dyc_status_message_window_t_ParamLimits

0xf30d,	// (0x000b9885) popup_dyc_status_message_window_t

0x97b8,	// (0x000b3d30) bg_heading_pane_cp01

0xae26,	// (0x000b539e) heading_loc_req_pane_g1

0xae2e,	// (0x000b53a6) heading_loc_req_pane_g2

0xae36,	// (0x000b53ae) heading_loc_req_pane_g3

0x0002,

0xf314,	// (0x000b988c) heading_loc_req_pane_g

0xae3e,	// (0x000b53b6) heading_loc_req_pane_t1

0xae4d,	// (0x000b53c5) bg_popup_sub_pane_cp01_ParamLimits

0xae4d,	// (0x000b53c5) bg_popup_sub_pane_cp01

0xae5b,	// (0x000b53d3) popup_cale_events_window_g1_ParamLimits

0xae5b,	// (0x000b53d3) popup_cale_events_window_g1

0xae7b,	// (0x000b53f3) popup_cale_events_window_g2_ParamLimits

0xae7b,	// (0x000b53f3) popup_cale_events_window_g2

0x0001,

0xf348,	// (0x000b98c0) popup_cale_events_window_g_ParamLimits

0xf348,	// (0x000b98c0) popup_cale_events_window_g

0xae9b,	// (0x000b5413) popup_cale_events_window_t1_ParamLimits

0xae9b,	// (0x000b5413) popup_cale_events_window_t1

0xaead,	// (0x000b5425) popup_cale_events_window_t2_ParamLimits

0xaead,	// (0x000b5425) popup_cale_events_window_t2

0xaeeb,	// (0x000b5463) popup_cale_events_window_t3_ParamLimits

0xaeeb,	// (0x000b5463) popup_cale_events_window_t3

0xaf25,	// (0x000b549d) popup_cale_events_window_t4_ParamLimits

0xaf25,	// (0x000b549d) popup_cale_events_window_t4

0x0003,

0xf34d,	// (0x000b98c5) popup_cale_events_window_t_ParamLimits

0xf34d,	// (0x000b98c5) popup_cale_events_window_t

0x250b,	// (0x000aca83) call_type_pane

0x251b,	// (0x000aca93) popup_call_status_window_g1

0x252f,	// (0x000acaa7) popup_call_status_window_g2

0x2543,	// (0x000acabb) popup_call_status_window_g3

0x0002,

0xf356,	// (0x000b98ce) popup_call_status_window_g

0xaf5b,	// (0x000b54d3) call_type_pane_g1

0xaf64,	// (0x000b54dc) call_type_pane_g2

0x0001,

0xf35d,	// (0x000b98d5) call_type_pane_g

0x97b8,	// (0x000b3d30) bg_popup_sub_pane_cp02

0xaf6d,	// (0x000b54e5) listscroll_popup_wml_pane

0xaf75,	// (0x000b54ed) list_wml_pane

0xaf7f,	// (0x000b54f7) scroll_pane_cp013

0xaf8a,	// (0x000b5502) list_single_graphic_popup_wml_pane_ParamLimits

0xaf8a,	// (0x000b5502) list_single_graphic_popup_wml_pane

0xa268,	// (0x000b47e0) list_single_graphic_popup_wml_pane_g1

0xaf9e,	// (0x000b5516) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf362,	// (0x000b98da) list_single_graphic_popup_wml_pane_g

0xafa6,	// (0x000b551e) list_single_graphic_popup_wml_pane_t1

0xafbc,	// (0x000b5534) aid_call_pane

0xa127,	// (0x000b469f) popup_clock_analogue_window_g1

0xa127,	// (0x000b469f) popup_clock_analogue_window_g2

0x98b8,	// (0x000b3e30) popup_clock_analogue_window_g3

0x98b8,	// (0x000b3e30) popup_clock_analogue_window_g4

0xa268,	// (0x000b47e0) popup_clock_analogue_window_g5

0x0004,

0xf367,	// (0x000b98df) popup_clock_analogue_window_g

0x98c0,	// (0x000b3e38) popup_clock_analogue_window_t1

0x98ce,	// (0x000b3e46) clock_digital_number_pane_ParamLimits

0x98ce,	// (0x000b3e46) clock_digital_number_pane

0x98da,	// (0x000b3e52) clock_digital_number_pane_cp02_ParamLimits

0x98da,	// (0x000b3e52) clock_digital_number_pane_cp02

0x98e6,	// (0x000b3e5e) clock_digital_number_pane_cp03_ParamLimits

0x98e6,	// (0x000b3e5e) clock_digital_number_pane_cp03

0x98f2,	// (0x000b3e6a) clock_digital_number_pane_cp04_ParamLimits

0x98f2,	// (0x000b3e6a) clock_digital_number_pane_cp04

0x9902,	// (0x000b3e7a) clock_digital_separator_pane_ParamLimits

0x9902,	// (0x000b3e7a) clock_digital_separator_pane

0x990e,	// (0x000b3e86) popup_clock_digital_window_t1

0xa268,	// (0x000b47e0) clock_digital_number_pane_g1

0xa268,	// (0x000b47e0) clock_digital_number_pane_g2

0x0001,

0xf2d5,	// (0x000b984d) clock_digital_number_pane_g

0xa268,	// (0x000b47e0) clock_digital_separator_pane_g1

0xa268,	// (0x000b47e0) clock_digital_separator_pane_g2

0x0001,

0xf2d5,	// (0x000b984d) clock_digital_separator_pane_g

0x97b8,	// (0x000b3d30) bg_popup_window_pane_cp04

0xafc4,	// (0x000b553c) heading_pane_cp03

0xafcc,	// (0x000b5544) listscroll_popup_gms_pane

0xafd4,	// (0x000b554c) grid_large_graphic_popup_pane

0xafde,	// (0x000b5556) listscroll_popup_gms_pane_g1

0xafe6,	// (0x000b555e) listscroll_popup_gms_pane_g2

0x0001,

0xf372,	// (0x000b98ea) listscroll_popup_gms_pane_g

0xa591,	// (0x000b4b09) scroll_pane_cp014

0xafee,	// (0x000b5566) cell_large_graphic_popup_pane_ParamLimits

0xafee,	// (0x000b5566) cell_large_graphic_popup_pane

0xb006,	// (0x000b557e) cell_large_graphic_popup_pane_g1_ParamLimits

0xb006,	// (0x000b557e) cell_large_graphic_popup_pane_g1

0xb012,	// (0x000b558a) cell_large_graphic_popup_pane_g2_ParamLimits

0xb012,	// (0x000b558a) cell_large_graphic_popup_pane_g2

0xb01e,	// (0x000b5596) cell_large_graphic_popup_pane_g3_ParamLimits

0xb01e,	// (0x000b5596) cell_large_graphic_popup_pane_g3

0xb02b,	// (0x000b55a3) cell_large_graphic_popup_pane_g4_ParamLimits

0xb02b,	// (0x000b55a3) cell_large_graphic_popup_pane_g4

0x0003,

0xf377,	// (0x000b98ef) cell_large_graphic_popup_pane_g_ParamLimits

0xf377,	// (0x000b98ef) cell_large_graphic_popup_pane_g

0xb03b,	// (0x000b55b3) grid_highlight_pane_cp010

0xa268,	// (0x000b47e0) bg_popup_call_pane_g1

0xb045,	// (0x000b55bd) list_single_graphic_popup_conf_pane_ParamLimits

0xb045,	// (0x000b55bd) list_single_graphic_popup_conf_pane

0xb058,	// (0x000b55d0) list_highlight_pane_cp01

0xb061,	// (0x000b55d9) list_single_graphic_popup_conf_pane_g1

0xb069,	// (0x000b55e1) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf380,	// (0x000b98f8) list_single_graphic_popup_conf_pane_g

0xb071,	// (0x000b55e9) list_single_graphic_popup_conf_pane_t1

0xb07f,	// (0x000b55f7) linegrid_cams_pane_g1

0x2552,	// (0x000acaca) linegrid_cams_pane_g2

0xa320,	// (0x000b4898) linegrid_cams_pane_g3

0xb088,	// (0x000b5600) linegrid_cams_pane_g4

0x255b,	// (0x000acad3) linegrid_cams_pane_g5

0x2564,	// (0x000acadc) linegrid_cams_pane_g6

0xa3df,	// (0x000b4957) linegrid_cams_pane_g7

0x0006,

0xf385,	// (0x000b98fd) linegrid_cams_pane_g

0xb091,	// (0x000b5609) popup_clock_analogue_window

0xb091,	// (0x000b5609) popup_clock_digital_window

0x97b8,	// (0x000b3d30) popup_phob_thumbnail_window

0xa268,	// (0x000b47e0) call_video_uplink_pane_g1

0xb09a,	// (0x000b5612) call_video_uplink_pane_g2

0x0001,

0xf394,	// (0x000b990c) call_video_uplink_pane_g

0xa3ac,	// (0x000b4924) video_uplink_pane

0xb0a2,	// (0x000b561a) mce_image_pane_g1

0x256f,	// (0x000acae7) mce_image_pane_g2

0x2577,	// (0x000acaef) mce_image_pane_g3

0x257f,	// (0x000acaf7) mce_image_pane_g4

0x2589,	// (0x000acb01) mce_image_pane_g5

0x0004,

0xf399,	// (0x000b9911) mce_image_pane_g

0xb0ac,	// (0x000b5624) control_top_pane_stacon_cp01_ParamLimits

0xb0ac,	// (0x000b5624) control_top_pane_stacon_cp01

0xb0c0,	// (0x000b5638) uni_indicator_pane_stacon_cp01_ParamLimits

0xb0c0,	// (0x000b5638) uni_indicator_pane_stacon_cp01

0xb0d1,	// (0x000b5649) bg_popup_sub_pane_cp03

0x2591,	// (0x000acb09) chi_dic_find_pane

0x2599,	// (0x000acb11) listscroll_chi_dic_pane

0x25a2,	// (0x000acb1a) main_pane_chidic_g1

0xb0db,	// (0x000b5653) chi_dic_find_pane_t1

0xb0e9,	// (0x000b5661) find_chidic_pane

0xb0f2,	// (0x000b566a) chi_dic_list_pane_ParamLimits

0xb0f2,	// (0x000b566a) chi_dic_list_pane

0xb103,	// (0x000b567b) scroll_pane_cp020

0xb10b,	// (0x000b5683) find_chidic_pane_t1

0x97b8,	// (0x000b3d30) input_focus_pane_cp06

0x25b5,	// (0x000acb2d) list_chi_dic_pane_ParamLimits

0x25b5,	// (0x000acb2d) list_chi_dic_pane

0x25c8,	// (0x000acb40) list_chi_dic_pane_t1_ParamLimits

0x25c8,	// (0x000acb40) list_chi_dic_pane_t1

0x97b8,	// (0x000b3d30) list_highlight_pane_cp020

0xb11a,	// (0x000b5692) bg_cale_heading_pane_g1

0x25db,	// (0x000acb53) bg_cale_heading_pane_g2

0x25e3,	// (0x000acb5b) bg_cale_heading_pane_g3

0x25eb,	// (0x000acb63) bg_cale_heading_pane_g4

0x25f5,	// (0x000acb6d) bg_cale_heading_pane_g5

0x25ff,	// (0x000acb77) bg_cale_heading_pane_g6

0x2607,	// (0x000acb7f) bg_cale_heading_pane_g7

0x260f,	// (0x000acb87) bg_cale_heading_pane_g8

0x2619,	// (0x000acb91) bg_cale_heading_pane_g9

0x0008,

0xf3a4,	// (0x000b991c) bg_cale_heading_pane_g

0xb11a,	// (0x000b5692) bg_cale_side_pane_g1

0x2623,	// (0x000acb9b) bg_cale_side_pane_g2

0x262b,	// (0x000acba3) bg_cale_side_pane_g3

0x2633,	// (0x000acbab) bg_cale_side_pane_g4

0x263b,	// (0x000acbb3) bg_cale_side_pane_g5

0x2643,	// (0x000acbbb) bg_cale_side_pane_g6

0x264b,	// (0x000acbc3) bg_cale_side_pane_g7

0x2653,	// (0x000acbcb) bg_cale_side_pane_g8

0x265b,	// (0x000acbd3) bg_cale_side_pane_g9

0x0008,

0xf3b7,	// (0x000b992f) bg_cale_side_pane_g

0x2663,	// (0x000acbdb) popup_call_status_window_ParamLimits

0x2663,	// (0x000acbdb) popup_call_status_window

0xb122,	// (0x000b569a) stacon_top_pane

0xb12a,	// (0x000b56a2) status_pane_ParamLimits

0xb12a,	// (0x000b56a2) status_pane

0xb13f,	// (0x000b56b7) status_small_pane

0xb147,	// (0x000b56bf) control_pane

0x97b8,	// (0x000b3d30) stacon_bottom_pane

0xb14f,	// (0x000b56c7) list_single_mce_smart_pane_t1_ParamLimits

0xb14f,	// (0x000b56c7) list_single_mce_smart_pane_t1

0xb162,	// (0x000b56da) list_single_mce_smart_pane_t2_ParamLimits

0xb162,	// (0x000b56da) list_single_mce_smart_pane_t2

0x0001,

0xf3ca,	// (0x000b9942) list_single_mce_smart_pane_t_ParamLimits

0xf3ca,	// (0x000b9942) list_single_mce_smart_pane_t

0x26aa,	// (0x000acc22) compass_pane

0x26b3,	// (0x000acc2b) main_location2_pane_t1

0x26c5,	// (0x000acc3d) main_location2_pane_t2

0x26d7,	// (0x000acc4f) main_location2_pane_t3

0x0003,

0xf3cf,	// (0x000b9947) main_location2_pane_t

0xb181,	// (0x000b56f9) compass_pane_g1_ParamLimits

0xb181,	// (0x000b56f9) compass_pane_g1

0x271d,	// (0x000acc95) compass_pane_t1

0x272c,	// (0x000acca4) compass_pane_t2

0x0005,

0xf3d8,	// (0x000b9950) compass_pane_t

0x2773,	// (0x000acceb) text_secondary_cp61

0xb1ff,	// (0x000b5777) navi_pane_cams_g5

0xb27b,	// (0x000b57f3) navi_pane_im_t1

0xb289,	// (0x000b5801) navi_pane_mp_g1_ParamLimits

0xb289,	// (0x000b5801) navi_pane_mp_g1

0xb29d,	// (0x000b5815) navi_pane_mp_g2_ParamLimits

0xb29d,	// (0x000b5815) navi_pane_mp_g2

0xb2a9,	// (0x000b5821) navi_pane_mp_g3_ParamLimits

0xb2a9,	// (0x000b5821) navi_pane_mp_g3

0x0002,

0xf3ec,	// (0x000b9964) navi_pane_mp_g_ParamLimits

0xf3ec,	// (0x000b9964) navi_pane_mp_g

0xb2b5,	// (0x000b582d) navi_pane_mp_t1

0xb2c3,	// (0x000b583b) navi_pane_mp_t2

0x0002,

0xf3f3,	// (0x000b996b) navi_pane_mp_t

0xb32e,	// (0x000b58a6) navi_pane_vt_g1

0xb2b5,	// (0x000b582d) navi_pane_vt_t1

0xb336,	// (0x000b58ae) navi_slider_pane

0xb346,	// (0x000b58be) zooming_pane

0xb34e,	// (0x000b58c6) navi_slider_pane_g1

0x992b,	// (0x000b3ea3) navi_slider_pane_g2

0x0006,

0xf3fa,	// (0x000b9972) navi_slider_pane_g

0xb372,	// (0x000b58ea) aid_levels_zoom

0xb37a,	// (0x000b58f2) zooming_pane_g1

0xb382,	// (0x000b58fa) zooming_pane_g2

0xb382,	// (0x000b58fa) zooming_pane_g3

0x0002,

0xf409,	// (0x000b9981) zooming_pane_g

0xb38a,	// (0x000b5902) level_10_zoom

0xb393,	// (0x000b590b) level_11_zoom

0xb39c,	// (0x000b5914) level_1_zoom

0xb3a5,	// (0x000b591d) level_2_zoom

0xb3ae,	// (0x000b5926) level_3_zoom

0xb3b7,	// (0x000b592f) level_4_zoom

0xb3c0,	// (0x000b5938) level_5_zoom

0xb3c9,	// (0x000b5941) level_6_zoom

0xb3d2,	// (0x000b594a) level_7_zoom

0xb3db,	// (0x000b5953) level_8_zoom

0xb3e4,	// (0x000b595c) level_9_zoom

0xb3f5,	// (0x000b596d) popup_phob_thumbnail_window_g1

0xb3fd,	// (0x000b5975) popup_phob_thumbnail_window_g2

0x0001,

0xf410,	// (0x000b9988) popup_phob_thumbnail_window_g

0xc751,	// (0x000b6cc9) level_1_location

0xc759,	// (0x000b6cd1) level_2_location

0xc761,	// (0x000b6cd9) level_3_location

0xc769,	// (0x000b6ce1) level_4_location

0xb346,	// (0x000b58be) level_5_location

0x27c4,	// (0x000acd3c) mce_icon_pane_g1

0x27ce,	// (0x000acd46) mce_icon_pane_g2

0x0001,

0xf415,	// (0x000b998d) mce_icon_pane_g

0x27d8,	// (0x000acd50) main_mup_pane_g1_ParamLimits

0x27d8,	// (0x000acd50) main_mup_pane_g1

0x27ee,	// (0x000acd66) main_mup_pane_g2_ParamLimits

0x27ee,	// (0x000acd66) main_mup_pane_g2

0x2806,	// (0x000acd7e) main_mup_pane_g3_ParamLimits

0x2806,	// (0x000acd7e) main_mup_pane_g3

0x281e,	// (0x000acd96) main_mup_pane_g4_ParamLimits

0x281e,	// (0x000acd96) main_mup_pane_g4

0x2836,	// (0x000acdae) main_mup_pane_g5_ParamLimits

0x2836,	// (0x000acdae) main_mup_pane_g5

0x2852,	// (0x000acdca) main_mup_pane_g6_ParamLimits

0x2852,	// (0x000acdca) main_mup_pane_g6

0x286a,	// (0x000acde2) main_mup_pane_g7_ParamLimits

0x286a,	// (0x000acde2) main_mup_pane_g7

0x2882,	// (0x000acdfa) main_mup_pane_g8_ParamLimits

0x2882,	// (0x000acdfa) main_mup_pane_g8

0x289a,	// (0x000ace12) main_mup_pane_g9_ParamLimits

0x289a,	// (0x000ace12) main_mup_pane_g9

0x28b4,	// (0x000ace2c) main_mup_pane_g10_ParamLimits

0x28b4,	// (0x000ace2c) main_mup_pane_g10

0x28ce,	// (0x000ace46) main_mup_pane_g11_ParamLimits

0x28ce,	// (0x000ace46) main_mup_pane_g11

0x28e2,	// (0x000ace5a) main_mup_pane_g12_ParamLimits

0x28e2,	// (0x000ace5a) main_mup_pane_g12

0x28f8,	// (0x000ace70) main_mup_pane_g13_ParamLimits

0x28f8,	// (0x000ace70) main_mup_pane_g13

0x000c,

0xf41a,	// (0x000b9992) main_mup_pane_g_ParamLimits

0xf41a,	// (0x000b9992) main_mup_pane_g

0x290c,	// (0x000ace84) main_mup_pane_t1_ParamLimits

0x290c,	// (0x000ace84) main_mup_pane_t1

0x2926,	// (0x000ace9e) main_mup_pane_t2_ParamLimits

0x2926,	// (0x000ace9e) main_mup_pane_t2

0x293e,	// (0x000aceb6) main_mup_pane_t3_ParamLimits

0x293e,	// (0x000aceb6) main_mup_pane_t3

0x2956,	// (0x000acece) main_mup_pane_t4_ParamLimits

0x2956,	// (0x000acece) main_mup_pane_t4

0x2974,	// (0x000aceec) main_mup_pane_t5_ParamLimits

0x2974,	// (0x000aceec) main_mup_pane_t5

0x2989,	// (0x000acf01) main_mup_pane_t6_ParamLimits

0x2989,	// (0x000acf01) main_mup_pane_t6

0x0005,

0xf435,	// (0x000b99ad) main_mup_pane_t_ParamLimits

0xf435,	// (0x000b99ad) main_mup_pane_t

0x299b,	// (0x000acf13) mup_progress_pane_ParamLimits

0x299b,	// (0x000acf13) mup_progress_pane

0x29a7,	// (0x000acf1f) mup_visualizer_pane_ParamLimits

0x29a7,	// (0x000acf1f) mup_visualizer_pane

0x29db,	// (0x000acf53) mup_volume_pane_ParamLimits

0x29db,	// (0x000acf53) mup_volume_pane

0xb405,	// (0x000b597d) mup_visualizer_pane_g1_ParamLimits

0xb405,	// (0x000b597d) mup_visualizer_pane_g1

0xb405,	// (0x000b597d) mup_visualizer_pane_g2_ParamLimits

0xb405,	// (0x000b597d) mup_visualizer_pane_g2

0xb181,	// (0x000b56f9) mup_visualizer_pane_g3_ParamLimits

0xb181,	// (0x000b56f9) mup_visualizer_pane_g3

0x0002,

0xf442,	// (0x000b99ba) mup_visualizer_pane_g_ParamLimits

0xf442,	// (0x000b99ba) mup_visualizer_pane_g

0xa268,	// (0x000b47e0) mup_volume_pane_g1

0xb41b,	// (0x000b5993) mup_volume_pane_g2

0x0001,

0xf449,	// (0x000b99c1) mup_volume_pane_g

0xa268,	// (0x000b47e0) mup_progress_pane_g1

0xb424,	// (0x000b599c) mup_progress_pane_g2

0xb42d,	// (0x000b59a5) mup_progress_pane_g3

0x0002,

0xf44e,	// (0x000b99c6) mup_progress_pane_g

0x97b8,	// (0x000b3d30) bg_popup_window_pane_cp05

0xb436,	// (0x000b59ae) heading_pane_cp02_ParamLimits

0xb436,	// (0x000b59ae) heading_pane_cp02

0xb450,	// (0x000b59c8) list_popup_blid_pane

0xb458,	// (0x000b59d0) list_blid_sat_info_pane_ParamLimits

0xb458,	// (0x000b59d0) list_blid_sat_info_pane

0xb46b,	// (0x000b59e3) list_blid_sat_info_pane_g1

0xb473,	// (0x000b59eb) list_blid_sat_info_pane_t1

0x2af1,	// (0x000ad069) mup_equalizer_pane_ParamLimits

0x2af1,	// (0x000ad069) mup_equalizer_pane

0x2b0a,	// (0x000ad082) mup_equalizer_pane_cp1_ParamLimits

0x2b0a,	// (0x000ad082) mup_equalizer_pane_cp1

0x2b27,	// (0x000ad09f) mup_equalizer_pane_cp2_ParamLimits

0x2b27,	// (0x000ad09f) mup_equalizer_pane_cp2

0x2b44,	// (0x000ad0bc) mup_equalizer_pane_cp3_ParamLimits

0x2b44,	// (0x000ad0bc) mup_equalizer_pane_cp3

0x2b65,	// (0x000ad0dd) mup_equalizer_pane_cp4_ParamLimits

0x2b65,	// (0x000ad0dd) mup_equalizer_pane_cp4

0x2b86,	// (0x000ad0fe) mup_equalizer_pane_cp5

0x2b9a,	// (0x000ad112) mup_equalizer_pane_cp6

0x2bae,	// (0x000ad126) mup_equalizer_pane_cp7

0xc66f,	// (0x000b6be7) bg_popup_call_poc_act_pane_g9

0xc677,	// (0x000b6bef) bg_popup_call_poc_act_pane_g10

0xc67f,	// (0x000b6bf7) bg_popup_call_poc_act_pane_g11

0x000a,

0xa12f,	// (0x000b46a7) mup_scale_pane

0xa268,	// (0x000b47e0) mup_scale_pane_g1

0xb481,	// (0x000b59f9) mup_scale_pane_g2

0x0006,

0xf46a,	// (0x000b99e2) mup_scale_pane_g

0xb4a5,	// (0x000b5a1d) msg_data_pane

0xb4ad,	// (0x000b5a25) scroll_pane_cp017

0x2bd4,	// (0x000ad14c) bg_list_pane_cp04_ParamLimits

0x2bd4,	// (0x000ad14c) bg_list_pane_cp04

0xb4b5,	// (0x000b5a2d) msg_data_pane_g1

0x2bf8,	// (0x000ad170) msg_data_pane_g2

0x2c00,	// (0x000ad178) msg_data_pane_g3

0x2c08,	// (0x000ad180) msg_data_pane_g4

0x2c10,	// (0x000ad188) msg_data_pane_g5

0x2c18,	// (0x000ad190) msg_data_pane_g6

0x2c20,	// (0x000ad198) msg_data_pane_g7

0x0006,

0xf479,	// (0x000b99f1) msg_data_pane_g

0x2c28,	// (0x000ad1a0) msg_text_pane_ParamLimits

0x2c28,	// (0x000ad1a0) msg_text_pane

0x2c4e,	// (0x000ad1c6) qrid_highlight_pane_cp011_ParamLimits

0x2c4e,	// (0x000ad1c6) qrid_highlight_pane_cp011

0x97b8,	// (0x000b3d30) msg_body_pane

0x97b8,	// (0x000b3d30) msg_header_pane

0xb4c6,	// (0x000b5a3e) input_focus_pane_cp07

0x2c72,	// (0x000ad1ea) msg_header_pane_t1_ParamLimits

0x2c72,	// (0x000ad1ea) msg_header_pane_t1

0x2c84,	// (0x000ad1fc) msg_header_pane_t2_ParamLimits

0x2c84,	// (0x000ad1fc) msg_header_pane_t2

0x0001,

0xf48d,	// (0x000b9a05) msg_header_pane_t_ParamLimits

0xf48d,	// (0x000b9a05) msg_header_pane_t

0xb4db,	// (0x000b5a53) msg_body_pane_g1

0x2c96,	// (0x000ad20e) msg_body_pane_t1_ParamLimits

0x2c96,	// (0x000ad20e) msg_body_pane_t1

0x2cc7,	// (0x000ad23f) msg_body_pane_t2_ParamLimits

0x2cc7,	// (0x000ad23f) msg_body_pane_t2

0x2cd9,	// (0x000ad251) msg_body_pane_t3_ParamLimits

0x2cd9,	// (0x000ad251) msg_body_pane_t3

0x0002,

0xf492,	// (0x000b9a0a) msg_body_pane_t_ParamLimits

0xf492,	// (0x000b9a0a) msg_body_pane_t

0x2d25,	// (0x000ad29d) main_viewer_pane_g1_ParamLimits

0x2d25,	// (0x000ad29d) main_viewer_pane_g1

0x2d33,	// (0x000ad2ab) main_viewer_pane_g2_ParamLimits

0x2d33,	// (0x000ad2ab) main_viewer_pane_g2

0x2d41,	// (0x000ad2b9) main_viewer_pane_g3_ParamLimits

0x2d41,	// (0x000ad2b9) main_viewer_pane_g3

0x2d50,	// (0x000ad2c8) main_viewer_pane_g4_ParamLimits

0x2d50,	// (0x000ad2c8) main_viewer_pane_g4

0x9955,	// (0x000b3ecd) main_viewer_pane_g5_ParamLimits

0x9955,	// (0x000b3ecd) main_viewer_pane_g5

0x9955,	// (0x000b3ecd) main_viewer_pane_g7_ParamLimits

0x9955,	// (0x000b3ecd) main_viewer_pane_g7

0xadec,	// (0x000b5364) main_viewer_pane_g8_ParamLimits

0xadec,	// (0x000b5364) main_viewer_pane_g8

0x0007,

0xf4a2,	// (0x000b9a1a) main_viewer_pane_g_ParamLimits

0xf4a2,	// (0x000b9a1a) main_viewer_pane_g

0xb4e3,	// (0x000b5a5b) viewer_content_pane_ParamLimits

0xb4e3,	// (0x000b5a5b) viewer_content_pane

0x2d8c,	// (0x000ad304) main_postcard_pane_g1_ParamLimits

0x2d8c,	// (0x000ad304) main_postcard_pane_g1

0x2da2,	// (0x000ad31a) main_postcard_pane_g2_ParamLimits

0x2da2,	// (0x000ad31a) main_postcard_pane_g2

0x2db8,	// (0x000ad330) main_postcard_pane_g3_ParamLimits

0x2db8,	// (0x000ad330) main_postcard_pane_g3

0x0005,

0xf4b3,	// (0x000b9a2b) main_postcard_pane_g_ParamLimits

0xf4b3,	// (0x000b9a2b) main_postcard_pane_g

0x2dcf,	// (0x000ad347) main_postcard_pane_g4

0xc851,	// (0x000b6dc9) smil_status_volume_pane_g2

0x2e12,	// (0x000ad38a) postcard_pane_ParamLimits

0x2e12,	// (0x000ad38a) postcard_pane

0xb4f1,	// (0x000b5a69) postcard_pane_g1_ParamLimits

0xb4f1,	// (0x000b5a69) postcard_pane_g1

0x2e54,	// (0x000ad3cc) postcard_pane_g2_ParamLimits

0x2e54,	// (0x000ad3cc) postcard_pane_g2

0x2e60,	// (0x000ad3d8) postcard_pane_g3_ParamLimits

0x2e60,	// (0x000ad3d8) postcard_pane_g3

0xb4ff,	// (0x000b5a77) postcard_pane_g4_ParamLimits

0xb4ff,	// (0x000b5a77) postcard_pane_g4

0x2e6c,	// (0x000ad3e4) postcard_pane_g5_ParamLimits

0x2e6c,	// (0x000ad3e4) postcard_pane_g5

0x2e81,	// (0x000ad3f9) postcard_pane_g6_ParamLimits

0x2e81,	// (0x000ad3f9) postcard_pane_g6

0xb4f1,	// (0x000b5a69) postcard_pane_g7_ParamLimits

0xb4f1,	// (0x000b5a69) postcard_pane_g7

0x0006,

0xf4c0,	// (0x000b9a38) postcard_pane_g_ParamLimits

0xf4c0,	// (0x000b9a38) postcard_pane_g

0x2e95,	// (0x000ad40d) main_mp2_pane_g1_ParamLimits

0x2e95,	// (0x000ad40d) main_mp2_pane_g1

0x2ea1,	// (0x000ad419) main_mp2_pane_g2_ParamLimits

0x2ea1,	// (0x000ad419) main_mp2_pane_g2

0x2ead,	// (0x000ad425) main_mp2_pane_g3_ParamLimits

0x2ead,	// (0x000ad425) main_mp2_pane_g3

0x0002,

0xf4cf,	// (0x000b9a47) main_mp2_pane_g_ParamLimits

0xf4cf,	// (0x000b9a47) main_mp2_pane_g

0x2eb9,	// (0x000ad431) main_mp2_pane_t1_ParamLimits

0x2eb9,	// (0x000ad431) main_mp2_pane_t1

0x2ece,	// (0x000ad446) main_mp2_pane_t2_ParamLimits

0x2ece,	// (0x000ad446) main_mp2_pane_t2

0x2ee0,	// (0x000ad458) main_mp2_pane_t3_ParamLimits

0x2ee0,	// (0x000ad458) main_mp2_pane_t3

0x0002,

0xf4d6,	// (0x000b9a4e) main_mp2_pane_t_ParamLimits

0xf4d6,	// (0x000b9a4e) main_mp2_pane_t

0xb50d,	// (0x000b5a85) pec_content_pane_ParamLimits

0xb50d,	// (0x000b5a85) pec_content_pane

0xa591,	// (0x000b4b09) scroll_pane_cp015

0xb51f,	// (0x000b5a97) pec_attribute_pane_ParamLimits

0xb51f,	// (0x000b5a97) pec_attribute_pane

0x2ef2,	// (0x000ad46a) pec_content_pane_g1_ParamLimits

0x2ef2,	// (0x000ad46a) pec_content_pane_g1

0xb52f,	// (0x000b5aa7) pec_content_pane_t1_ParamLimits

0xb52f,	// (0x000b5aa7) pec_content_pane_t1

0xb541,	// (0x000b5ab9) pec_content_pane_t2_ParamLimits

0xb541,	// (0x000b5ab9) pec_content_pane_t2

0x0001,

0xf4dd,	// (0x000b9a55) pec_content_pane_t_ParamLimits

0xf4dd,	// (0x000b9a55) pec_content_pane_t

0x2efe,	// (0x000ad476) list_single_graphic_pane_cp01_ParamLimits

0x2efe,	// (0x000ad476) list_single_graphic_pane_cp01

0xa12f,	// (0x000b46a7) bg_popup_sub_pane_cp04

0xb553,	// (0x000b5acb) popup_mup_playback_window_g1

0xb55f,	// (0x000b5ad7) popup_mup_playback_window_t1

0xb574,	// (0x000b5aec) popup_mup_playback_window_t2

0x0001,

0xf4e2,	// (0x000b9a5a) popup_mup_playback_window_t

0xb5ab,	// (0x000b5b23) main_image_pane_g1_ParamLimits

0xb5ab,	// (0x000b5b23) main_image_pane_g1

0xb5ee,	// (0x000b5b66) scroll_pane_cp018_ParamLimits

0xb5ee,	// (0x000b5b66) scroll_pane_cp018

0xb606,	// (0x000b5b7e) scroll_pane_cp016_ParamLimits

0xb606,	// (0x000b5b7e) scroll_pane_cp016

0x2fcd,	// (0x000ad545) smil2_image_pane_ParamLimits

0x2fcd,	// (0x000ad545) smil2_image_pane

0x3001,	// (0x000ad579) smil2_root_pane_ParamLimits

0x3001,	// (0x000ad579) smil2_root_pane

0x3039,	// (0x000ad5b1) smil2_text_pane_ParamLimits

0x3039,	// (0x000ad5b1) smil2_text_pane

0x97b8,	// (0x000b3d30) bg_list_pane_cp06

0xb68d,	// (0x000b5c05) grid_radio_pane

0x97b8,	// (0x000b3d30) bg_popup_window_pane_cp06

0xb695,	// (0x000b5c0d) main_fmradio_pane_t1

0xafc4,	// (0x000b553c) heading_pane_cp04

0xb6a3,	// (0x000b5c1b) main_fmradio_pane_t2

0xc687,	// (0x000b6bff) popup_cale_lunar_info_window_g1

0xb6b1,	// (0x000b5c29) main_fmradio_pane_t3

0xc68f,	// (0x000b6c07) popup_cale_lunar_info_window_g2

0xb6bf,	// (0x000b5c37) main_fmradio_pane_t4

0x0001,

0xb6cd,	// (0x000b5c45) main_fmradio_pane_t5

0x0004,

0xf5bd,	// (0x000b9b35) popup_cale_lunar_info_window_g

0xf4f7,	// (0x000b9a6f) main_fmradio_pane_t

0xb6db,	// (0x000b5c53) wait_bar_pane_cp03

0xb6e3,	// (0x000b5c5b) cell_fmradio_pane_ParamLimits

0xb6e3,	// (0x000b5c5b) cell_fmradio_pane

0xb4f1,	// (0x000b5a69) cell_fmradio_pane_g1_ParamLimits

0xb4f1,	// (0x000b5a69) cell_fmradio_pane_g1

0x97b8,	// (0x000b3d30) grid_highlight_pane_cp011

0xb6f6,	// (0x000b5c6e) poc_content_pane_ParamLimits

0xb6f6,	// (0x000b5c6e) poc_content_pane

0xb708,	// (0x000b5c80) scroll_pane_cp019

0x30b9,	// (0x000ad631) popup_call_poc_act_window_ParamLimits

0x30b9,	// (0x000ad631) popup_call_poc_act_window

0x30dd,	// (0x000ad655) popup_call_poc_inact_window_ParamLimits

0x30dd,	// (0x000ad655) popup_call_poc_inact_window

0xf594,	// (0x000b9b0c) bg_popup_call_poc_act_pane_g

0xc5ff,	// (0x000b6b77) bg_popup_call_poc_inact_pane_g1

0xc607,	// (0x000b6b7f) bg_popup_call_poc_inact_pane_g2

0xb710,	// (0x000b5c88) popup_call_poc_act_window_g2

0xc60f,	// (0x000b6b87) bg_popup_call_poc_inact_pane_g3

0xc617,	// (0x000b6b8f) bg_popup_call_poc_inact_pane_g4

0xc61f,	// (0x000b6b97) bg_popup_call_poc_inact_pane_g5

0xb718,	// (0x000b5c90) popup_call_poc_act_window_t1_ParamLimits

0xb718,	// (0x000b5c90) popup_call_poc_act_window_t1

0xb740,	// (0x000b5cb8) popup_call_poc_act_window_t2_ParamLimits

0xb740,	// (0x000b5cb8) popup_call_poc_act_window_t2

0xb768,	// (0x000b5ce0) popup_call_poc_act_window_t3_ParamLimits

0xb768,	// (0x000b5ce0) popup_call_poc_act_window_t3

0xb790,	// (0x000b5d08) popup_call_poc_act_window_t4_ParamLimits

0xb790,	// (0x000b5d08) popup_call_poc_act_window_t4

0x0003,

0xf502,	// (0x000b9a7a) popup_call_poc_act_window_t_ParamLimits

0xf502,	// (0x000b9a7a) popup_call_poc_act_window_t

0xc627,	// (0x000b6b9f) bg_popup_call_poc_inact_pane_g6

0xc62f,	// (0x000b6ba7) bg_popup_call_poc_inact_pane_g7

0xc637,	// (0x000b6baf) bg_popup_call_poc_inact_pane_g8

0xb7a2,	// (0x000b5d1a) popup_call_poc_inact_window_g2

0xc63f,	// (0x000b6bb7) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf581,	// (0x000b9af9) bg_popup_call_poc_inact_pane_g

0xb7aa,	// (0x000b5d22) popup_call_poc_inact_window_t1_ParamLimits

0xb7aa,	// (0x000b5d22) popup_call_poc_inact_window_t1

0xb7bf,	// (0x000b5d37) popup_call_poc_inact_window_t2_ParamLimits

0xb7bf,	// (0x000b5d37) popup_call_poc_inact_window_t2

0xb7d4,	// (0x000b5d4c) popup_call_poc_inact_window_t3_ParamLimits

0xb7d4,	// (0x000b5d4c) popup_call_poc_inact_window_t3

0x0002,

0xf50b,	// (0x000b9a83) popup_call_poc_inact_window_t_ParamLimits

0xf50b,	// (0x000b9a83) popup_call_poc_inact_window_t

0xc7c4,	// (0x000b6d3c) context_pane_ParamLimits

0x3910,	// (0x000ade88) signal_pane_ParamLimits

0xb346,	// (0x000b58be) main_call2_pane

0x99a0,	// (0x000b3f18) popup_phob_thumbnail2_window_ParamLimits

0x99a0,	// (0x000b3f18) popup_phob_thumbnail2_window

0x993d,	// (0x000b3eb5) aid_hotspot_pointer_arrow_pane

0x9945,	// (0x000b3ebd) aid_hotspot_pointer_hand_pane

0x3428,	// (0x000ad9a0) phob_pre_status_pane_g5

0x0f0b,	// (0x000ab483) cams_zoom_pane_ParamLimits

0x0f1a,	// (0x000ab492) image_vga_pane_ParamLimits

0x0f34,	// (0x000ab4ac) main_camera_pane_g1_ParamLimits

0x0f46,	// (0x000ab4be) main_camera_pane_g2_ParamLimits

0x0f56,	// (0x000ab4ce) main_camera_pane_g3_ParamLimits

0x0f68,	// (0x000ab4e0) main_camera_pane_g4_ParamLimits

0x0f7a,	// (0x000ab4f2) main_camera_pane_g5_ParamLimits

0x0f8c,	// (0x000ab504) main_camera_pane_g6_ParamLimits

0x0f9e,	// (0x000ab516) main_camera_pane_g7_ParamLimits

0xf20a,	// (0x000b9782) main_camera_pane_g_ParamLimits

0x0fb0,	// (0x000ab528) main_camera_pane_t1_ParamLimits

0x0fc6,	// (0x000ab53e) main_camera_pane_t2_ParamLimits

0xf21b,	// (0x000b9793) main_camera_pane_t_ParamLimits

0xa12f,	// (0x000b46a7) bg_popup_preview_window_pane_cp01_ParamLimits

0xa12f,	// (0x000b46a7) bg_popup_preview_window_pane_cp01

0xb7e9,	// (0x000b5d61) popup_phob_thumbnail2_window_g1_ParamLimits

0xb7e9,	// (0x000b5d61) popup_phob_thumbnail2_window_g1

0x97b8,	// (0x000b3d30) call2_cli_visual_pane

0x3111,	// (0x000ad689) popup_call2_audio_conf_window_ParamLimits

0x3111,	// (0x000ad689) popup_call2_audio_conf_window

0x3131,	// (0x000ad6a9) popup_call2_audio_first_window_ParamLimits

0x3131,	// (0x000ad6a9) popup_call2_audio_first_window

0x31c7,	// (0x000ad73f) popup_call2_audio_in_window_ParamLimits

0x31c7,	// (0x000ad73f) popup_call2_audio_in_window

0x320f,	// (0x000ad787) popup_call2_audio_out_window_ParamLimits

0x320f,	// (0x000ad787) popup_call2_audio_out_window

0x3279,	// (0x000ad7f1) popup_call2_audio_second_window_ParamLimits

0x3279,	// (0x000ad7f1) popup_call2_audio_second_window

0x32df,	// (0x000ad857) popup_call2_audio_wait_window_ParamLimits

0x32df,	// (0x000ad857) popup_call2_audio_wait_window

0x97b8,	// (0x000b3d30) bg_popup_call2_act_pane_cp03

0xa111,	// (0x000b4689) list_conf_pane_cp

0xb7f5,	// (0x000b5d6d) popup_call2_audio_conf_window_t1

0xb803,	// (0x000b5d7b) list_single_graphic_popup_conf2_pane_ParamLimits

0xb803,	// (0x000b5d7b) list_single_graphic_popup_conf2_pane

0xb058,	// (0x000b55d0) list_highlight_pane_cp04

0xb816,	// (0x000b5d8e) list_single_graphic_popup_conf2_pane_g1

0xb069,	// (0x000b55e1) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf512,	// (0x000b9a8a) list_single_graphic_popup_conf2_pane_g

0xb820,	// (0x000b5d98) list_single_graphic_popup_conf2_pane_t1

0xb82e,	// (0x000b5da6) bg_popup_call2_act_pane_cp01_ParamLimits

0xb82e,	// (0x000b5da6) bg_popup_call2_act_pane_cp01

0xb8b8,	// (0x000b5e30) call_type_pane_cp05_ParamLimits

0xb8b8,	// (0x000b5e30) call_type_pane_cp05

0xb90c,	// (0x000b5e84) popup_call2_audio_second_window_g1_ParamLimits

0xb90c,	// (0x000b5e84) popup_call2_audio_second_window_g1

0xb960,	// (0x000b5ed8) popup_call2_audio_second_window_g2_ParamLimits

0xb960,	// (0x000b5ed8) popup_call2_audio_second_window_g2

0x0002,

0xf517,	// (0x000b9a8f) popup_call2_audio_second_window_g_ParamLimits

0xf517,	// (0x000b9a8f) popup_call2_audio_second_window_g

0xb9c5,	// (0x000b5f3d) popup_call2_audio_second_window_t1_ParamLimits

0xb9c5,	// (0x000b5f3d) popup_call2_audio_second_window_t1

0xba80,	// (0x000b5ff8) popup_call2_audio_second_window_t2_ParamLimits

0xba80,	// (0x000b5ff8) popup_call2_audio_second_window_t2

0xbad3,	// (0x000b604b) popup_call2_audio_second_window_t3_ParamLimits

0xbad3,	// (0x000b604b) popup_call2_audio_second_window_t3

0x0003,

0xf51e,	// (0x000b9a96) popup_call2_audio_second_window_t_ParamLimits

0xf51e,	// (0x000b9a96) popup_call2_audio_second_window_t

0x97b8,	// (0x000b3d30) bg_popup_call2_in_pane_cp02

0x97c2,	// (0x000b3d3a) call_type_pane_cp04

0x97ca,	// (0x000b3d42) popup_call2_audio_wait_window_g1

0x97d2,	// (0x000b3d4a) popup_call2_audio_wait_window_g2

0x0001,

0xf0f5,	// (0x000b966d) popup_call2_audio_wait_window_g

0x9ef6,	// (0x000b446e) popup_call2_audio_wait_window_t3

0xbbc6,	// (0x000b613e) bg_popup_call2_act_pane_ParamLimits

0xbbc6,	// (0x000b613e) bg_popup_call2_act_pane

0xbc86,	// (0x000b61fe) call_type_pane_cp03_ParamLimits

0xbc86,	// (0x000b61fe) call_type_pane_cp03

0xbcea,	// (0x000b6262) popup_call2_audio_first_window_g1_ParamLimits

0xbcea,	// (0x000b6262) popup_call2_audio_first_window_g1

0xbd5a,	// (0x000b62d2) popup_call2_audio_first_window_g2_ParamLimits

0xbd5a,	// (0x000b62d2) popup_call2_audio_first_window_g2

0xb405,	// (0x000b597d) popup_call2_audio_first_window_g3_ParamLimits

0xb405,	// (0x000b597d) popup_call2_audio_first_window_g3

0x0004,

0xf527,	// (0x000b9a9f) popup_call2_audio_first_window_g_ParamLimits

0xf527,	// (0x000b9a9f) popup_call2_audio_first_window_g

0xbe38,	// (0x000b63b0) popup_call2_audio_first_window_t1_ParamLimits

0xbe38,	// (0x000b63b0) popup_call2_audio_first_window_t1

0xbf3b,	// (0x000b64b3) popup_call2_audio_first_window_t4_ParamLimits

0xbf3b,	// (0x000b64b3) popup_call2_audio_first_window_t4

0xc01e,	// (0x000b6596) popup_call2_audio_first_window_t5_ParamLimits

0xc01e,	// (0x000b6596) popup_call2_audio_first_window_t5

0x0003,

0xf532,	// (0x000b9aaa) popup_call2_audio_first_window_t_ParamLimits

0xf532,	// (0x000b9aaa) popup_call2_audio_first_window_t

0xa127,	// (0x000b469f) bg_popup_call2_act_pane_g1

0xc697,	// (0x000b6c0f) popup_cale_lunar_info_window_t1

0xc6a5,	// (0x000b6c1d) popup_cale_lunar_info_window_t2

0xc6b3,	// (0x000b6c2b) popup_cale_lunar_info_window_t3

0x97b8,	// (0x000b3d30) bg_popup_call2_bubble_pane

0xc11f,	// (0x000b6697) bg_popup_call2_in_pane_cp01_ParamLimits

0xc11f,	// (0x000b6697) bg_popup_call2_in_pane_cp01

0x9494,	// (0x000b3a0c) call_type_pane_cp02

0xc167,	// (0x000b66df) popup_call2_audio_out_window_g1_ParamLimits

0xc167,	// (0x000b66df) popup_call2_audio_out_window_g1

0xc193,	// (0x000b670b) popup_call2_audio_out_window_g2_ParamLimits

0xc193,	// (0x000b670b) popup_call2_audio_out_window_g2

0xc1bb,	// (0x000b6733) popup_call2_audio_out_window_g3_ParamLimits

0xc1bb,	// (0x000b6733) popup_call2_audio_out_window_g3

0x0003,

0xf53b,	// (0x000b9ab3) popup_call2_audio_out_window_g_ParamLimits

0xf53b,	// (0x000b9ab3) popup_call2_audio_out_window_g

0xc1f6,	// (0x000b676e) popup_call2_audio_out_window_t1_ParamLimits

0xc1f6,	// (0x000b676e) popup_call2_audio_out_window_t1

0xc255,	// (0x000b67cd) popup_call2_audio_out_window_t2_ParamLimits

0xc255,	// (0x000b67cd) popup_call2_audio_out_window_t2

0xc2b5,	// (0x000b682d) popup_call2_audio_out_window_t3_ParamLimits

0xc2b5,	// (0x000b682d) popup_call2_audio_out_window_t3

0xc2cb,	// (0x000b6843) popup_call2_audio_out_window_t4_ParamLimits

0xc2cb,	// (0x000b6843) popup_call2_audio_out_window_t4

0xc2e1,	// (0x000b6859) popup_call2_audio_out_window_t5_ParamLimits

0xc2e1,	// (0x000b6859) popup_call2_audio_out_window_t5

0x0005,

0xf544,	// (0x000b9abc) popup_call2_audio_out_window_t_ParamLimits

0xf544,	// (0x000b9abc) popup_call2_audio_out_window_t

0xc345,	// (0x000b68bd) bg_popup_call2_in_pane_ParamLimits

0xc345,	// (0x000b68bd) bg_popup_call2_in_pane

0xc3a1,	// (0x000b6919) popup_call2_audio_in_window_g1_ParamLimits

0xc3a1,	// (0x000b6919) popup_call2_audio_in_window_g1

0xc3d9,	// (0x000b6951) popup_call2_audio_in_window_g2_ParamLimits

0xc3d9,	// (0x000b6951) popup_call2_audio_in_window_g2

0xc411,	// (0x000b6989) popup_call2_audio_in_window_g3_ParamLimits

0xc411,	// (0x000b6989) popup_call2_audio_in_window_g3

0x0003,

0xf551,	// (0x000b9ac9) popup_call2_audio_in_window_g_ParamLimits

0xf551,	// (0x000b9ac9) popup_call2_audio_in_window_g

0xc469,	// (0x000b69e1) popup_call2_audio_in_window_t1_ParamLimits

0xc469,	// (0x000b69e1) popup_call2_audio_in_window_t1

0xc4e9,	// (0x000b6a61) popup_call2_audio_in_window_t2_ParamLimits

0xc4e9,	// (0x000b6a61) popup_call2_audio_in_window_t2

0xc569,	// (0x000b6ae1) popup_call2_audio_in_window_t3_ParamLimits

0xc569,	// (0x000b6ae1) popup_call2_audio_in_window_t3

0xc583,	// (0x000b6afb) popup_call2_audio_in_window_t4_ParamLimits

0xc583,	// (0x000b6afb) popup_call2_audio_in_window_t4

0xc595,	// (0x000b6b0d) popup_call2_audio_in_window_t5_ParamLimits

0xc595,	// (0x000b6b0d) popup_call2_audio_in_window_t5

0xc5aa,	// (0x000b6b22) popup_call2_audio_in_window_t6_ParamLimits

0xc5aa,	// (0x000b6b22) popup_call2_audio_in_window_t6

0x0005,

0xf55a,	// (0x000b9ad2) popup_call2_audio_in_window_t_ParamLimits

0xf55a,	// (0x000b9ad2) popup_call2_audio_in_window_t

0xa127,	// (0x000b469f) bg_popup_call2_in_pane_g1

0xc6c1,	// (0x000b6c39) popup_cale_lunar_info_window_t4

0x0003,

0xf5c2,	// (0x000b9b3a) popup_cale_lunar_info_window_t

0xa12f,	// (0x000b46a7) bg_popup_call2_rect_pane_ParamLimits

0xa12f,	// (0x000b46a7) bg_popup_call2_rect_pane

0x97b8,	// (0x000b3d30) call2_cli_visual_graphic_pane

0x97b8,	// (0x000b3d30) call2_cli_visual_text_pane

0x99c7,	// (0x000b3f3f) smil_status_volume_pane_g3

0x0002,

0xa268,	// (0x000b47e0) call2_cli_visual_graphic_pane_g1

0xa268,	// (0x000b47e0) call2_cli_visual_graphic_pane_g2

0xa268,	// (0x000b47e0) call2_cli_visual_graphic_pane_g3

0x0002,

0xf567,	// (0x000b9adf) call2_cli_visual_graphic_pane_g

0xc5bf,	// (0x000b6b37) bg_popup_call2_rect_pane_g1

0xa306,	// (0x000b487e) bg_popup_call2_rect_pane_g2

0xc5c7,	// (0x000b6b3f) bg_popup_call2_rect_pane_g3

0xc5cf,	// (0x000b6b47) bg_popup_call2_rect_pane_g4

0xc5d7,	// (0x000b6b4f) bg_popup_call2_rect_pane_g5

0xc5df,	// (0x000b6b57) bg_popup_call2_rect_pane_g6

0xc5e7,	// (0x000b6b5f) bg_popup_call2_rect_pane_g7

0xc5ef,	// (0x000b6b67) bg_popup_call2_rect_pane_g8

0xc5f7,	// (0x000b6b6f) bg_popup_call2_rect_pane_g9

0x0008,

0xf56e,	// (0x000b9ae6) bg_popup_call2_rect_pane_g

0xc5ff,	// (0x000b6b77) bg_popup_call2_bubble_pane_g1

0xc607,	// (0x000b6b7f) bg_popup_call2_bubble_pane_g2

0xc60f,	// (0x000b6b87) bg_popup_call2_bubble_pane_g3

0xc617,	// (0x000b6b8f) bg_popup_call2_bubble_pane_g4

0xc61f,	// (0x000b6b97) bg_popup_call2_bubble_pane_g5

0xc627,	// (0x000b6b9f) bg_popup_call2_bubble_pane_g6

0xc62f,	// (0x000b6ba7) bg_popup_call2_bubble_pane_g7

0xc637,	// (0x000b6baf) bg_popup_call2_bubble_pane_g8

0xc63f,	// (0x000b6bb7) bg_popup_call2_bubble_pane_g9

0x0008,

0xf581,	// (0x000b9af9) bg_popup_call2_bubble_pane_g

0x0837,	// (0x000aadaf) aid_cale_week_size_cell_pane

0x0fde,	// (0x000ab556) aid_cams_cif_uncrop_pane_ParamLimits

0x0fde,	// (0x000ab556) aid_cams_cif_uncrop_pane

0x1193,	// (0x000ab70b) aid_cams_size_cell_ParamLimits

0x1193,	// (0x000ab70b) aid_cams_size_cell

0x11a7,	// (0x000ab71f) grid_cams_pane_ParamLimits

0x11c1,	// (0x000ab739) linegrid_cams_pane_ParamLimits

0x13bc,	// (0x000ab934) call_video_pane_t1

0x13da,	// (0x000ab952) call_video_pane_t2

0x0001,

0xf26e,	// (0x000b97e6) call_video_pane_t

0x1809,	// (0x000abd81) aid_cale_month_size_cell_pane_ParamLimits

0x1809,	// (0x000abd81) aid_cale_month_size_cell_pane

0xf60b,	// (0x000b9b83) smil_status_volume_pane_g

0x99d4,	// (0x000b3f4c) volume_smil_pane_ParamLimits

0x9337,	// (0x000b38af) aid_popup2_width_pane

0x079c,	// (0x000aad14) cell_qdial_pane_g4_ParamLimits

0x079c,	// (0x000aad14) cell_qdial_pane_g4

0x26fd,	// (0x000acc75) aid_blid_cardinal_pane_ParamLimits

0x2709,	// (0x000acc81) aid_blid_destination_pane_ParamLimits

0x2709,	// (0x000acc81) aid_blid_destination_pane

0xa12f,	// (0x000b46a7) bg_popup_call_poc_act_pane_ParamLimits

0xa12f,	// (0x000b46a7) bg_popup_call_poc_act_pane

0xa12f,	// (0x000b46a7) bg_popup_call_poc_inact_pane_ParamLimits

0xa12f,	// (0x000b46a7) bg_popup_call_poc_inact_pane

0xc647,	// (0x000b6bbf) bg_popup_call_poc_act_pane_g1

0xc64f,	// (0x000b6bc7) bg_popup_call_poc_act_pane_g2

0xc657,	// (0x000b6bcf) bg_popup_call_poc_act_pane_g3

0xc617,	// (0x000b6b8f) bg_popup_call_poc_act_pane_g4

0xc61f,	// (0x000b6b97) bg_popup_call_poc_act_pane_g5

0xc65f,	// (0x000b6bd7) bg_popup_call_poc_act_pane_g6

0xc62f,	// (0x000b6ba7) bg_popup_call_poc_act_pane_g7

0xc667,	// (0x000b6bdf) bg_popup_call_poc_act_pane_g8

0x97b8,	// (0x000b3d30) main_usb_pane

0x997b,	// (0x000b3ef3) popup_cale_lunar_info_window

0x16a4,	// (0x000abc1c) im_reading_pane_t1_ParamLimits

0xa4e9,	// (0x000b4a61) list_im_pane_ParamLimits

0xa4fa,	// (0x000b4a72) scroll_pane_cp07_ParamLimits

0x97b8,	// (0x000b3d30) grid_highlight_pane_cp012

0xa12f,	// (0x000b46a7) mup_scale_pane_ParamLimits

0xb4f1,	// (0x000b5a69) main_usb_pane_g1_ParamLimits

0xb4f1,	// (0x000b5a69) main_usb_pane_g1

0x333d,	// (0x000ad8b5) main_usb_pane_g2_ParamLimits

0x333d,	// (0x000ad8b5) main_usb_pane_g2

0x0001,

0xf5ab,	// (0x000b9b23) main_usb_pane_g_ParamLimits

0xf5ab,	// (0x000b9b23) main_usb_pane_g

0x3353,	// (0x000ad8cb) main_usb_pane_t1_ParamLimits

0x3353,	// (0x000ad8cb) main_usb_pane_t1

0x3365,	// (0x000ad8dd) main_usb_pane_t2_ParamLimits

0x3365,	// (0x000ad8dd) main_usb_pane_t2

0x3377,	// (0x000ad8ef) main_usb_pane_t3_ParamLimits

0x3377,	// (0x000ad8ef) main_usb_pane_t3

0x3389,	// (0x000ad901) main_usb_pane_t4_ParamLimits

0x3389,	// (0x000ad901) main_usb_pane_t4

0x339b,	// (0x000ad913) main_usb_pane_t5_ParamLimits

0x339b,	// (0x000ad913) main_usb_pane_t5

0x33ad,	// (0x000ad925) main_usb_pane_t6_ParamLimits

0x33ad,	// (0x000ad925) main_usb_pane_t6

0x0005,

0xf5b0,	// (0x000b9b28) main_usb_pane_t_ParamLimits

0x26aa,	// (0x000acc22) aid_text_placing

0x26b3,	// (0x000acc2b) main_location2_pane_t1_ParamLimits

0x26c5,	// (0x000acc3d) main_location2_pane_t2_ParamLimits

0x26d7,	// (0x000acc4f) main_location2_pane_t3_ParamLimits

0x26eb,	// (0x000acc63) main_location2_pane_t4_ParamLimits

0x26eb,	// (0x000acc63) main_location2_pane_t4

0xf3cf,	// (0x000b9947) main_location2_pane_t_ParamLimits

0xa16b,	// (0x000b46e3) find_pinb_pane_g2_ParamLimits

0xa16b,	// (0x000b46e3) find_pinb_pane_g2

0x0001,

0xf11b,	// (0x000b9693) find_pinb_pane_g_ParamLimits

0xf11b,	// (0x000b9693) find_pinb_pane_g

0xa177,	// (0x000b46ef) find_pinb_pane_t1_ParamLimits

0xa189,	// (0x000b4701) find_pinb_pane_t2_ParamLimits

0xf120,	// (0x000b9698) find_pinb_pane_t_ParamLimits

0x97b8,	// (0x000b3d30) main_call3_pane

0x1cec,	// (0x000ac264) cale_month_day_heading_pane_t1_ParamLimits

0x1d72,	// (0x000ac2ea) cale_month_day_heading_pane_t2_ParamLimits

0x1e03,	// (0x000ac37b) cale_month_day_heading_pane_t3_ParamLimits

0x1e94,	// (0x000ac40c) cale_month_day_heading_pane_t4_ParamLimits

0x1f2d,	// (0x000ac4a5) cale_month_day_heading_pane_t5_ParamLimits

0x1fce,	// (0x000ac546) cale_month_day_heading_pane_t6_ParamLimits

0x206f,	// (0x000ac5e7) cale_month_day_heading_pane_t7_ParamLimits

0xf2a6,	// (0x000b981e) cale_month_day_heading_pane_t_ParamLimits

0xac26,	// (0x000b519e) smil_status_volume_pane

0x2e30,	// (0x000ad3a8) postcard_address_pane_ParamLimits

0x2e30,	// (0x000ad3a8) postcard_address_pane

0x2e42,	// (0x000ad3ba) postcard_message_pane_ParamLimits

0x2e42,	// (0x000ad3ba) postcard_message_pane

0x3319,	// (0x000ad891) call2_cli_visual_pane_t1_ParamLimits

0x3319,	// (0x000ad891) call2_cli_visual_pane_t1

0x3b3f,	// (0x000ae0b7) postcard_message_pane_t1_ParamLimits

0x3b3f,	// (0x000ae0b7) postcard_message_pane_t1

0x3b28,	// (0x000ae0a0) postcard_address_pane_t1_ParamLimits

0x3b28,	// (0x000ae0a0) postcard_address_pane_t1

0x3b14,	// (0x000ae08c) popup_call3_audio_in_window_ParamLimits

0x3b14,	// (0x000ae08c) popup_call3_audio_in_window

0x39a1,	// (0x000adf19) bg_popup_call3_in_pane_ParamLimits

0x39a1,	// (0x000adf19) bg_popup_call3_in_pane

0x3a15,	// (0x000adf8d) popup_call3_audio_in_window_g1_ParamLimits

0x3a15,	// (0x000adf8d) popup_call3_audio_in_window_g1

0x3a35,	// (0x000adfad) popup_call3_audio_in_window_g2_ParamLimits

0x3a35,	// (0x000adfad) popup_call3_audio_in_window_g2

0x3a55,	// (0x000adfcd) popup_call3_audio_in_window_g3_ParamLimits

0x3a55,	// (0x000adfcd) popup_call3_audio_in_window_g3

0x0003,

0xf612,	// (0x000b9b8a) popup_call3_audio_in_window_g_ParamLimits

0xf612,	// (0x000b9b8a) popup_call3_audio_in_window_g

0x3a86,	// (0x000adffe) popup_call3_audio_in_window_t1_ParamLimits

0x3a86,	// (0x000adffe) popup_call3_audio_in_window_t1

0x3ac4,	// (0x000ae03c) popup_call3_audio_in_window_t2_ParamLimits

0x3ac4,	// (0x000ae03c) popup_call3_audio_in_window_t2

0x3b02,	// (0x000ae07a) popup_call3_audio_in_window_t3_ParamLimits

0x3b02,	// (0x000ae07a) popup_call3_audio_in_window_t3

0x0002,

0xf61b,	// (0x000b9b93) popup_call3_audio_in_window_t_ParamLimits

0xf61b,	// (0x000b9b93) popup_call3_audio_in_window_t

0xb346,	// (0x000b58be) bg_popup_call3_rect_pane

0xc5bf,	// (0x000b6b37) bg_popup_call3_rect_pane_g1

0xa306,	// (0x000b487e) bg_popup_call3_rect_pane_g2

0xc5c7,	// (0x000b6b3f) bg_popup_call3_rect_pane_g3

0xc5cf,	// (0x000b6b47) bg_popup_call3_rect_pane_g4

0xc5d7,	// (0x000b6b4f) bg_popup_call3_rect_pane_g5

0xc5df,	// (0x000b6b57) bg_popup_call3_rect_pane_g6

0xc5e7,	// (0x000b6b5f) bg_popup_call3_rect_pane_g7

0x29f1,	// (0x000acf69) mup_visualizer_osc_pane

0xb413,	// (0x000b598b) mup_visualizer_spec_pane

0x39d1,	// (0x000adf49) call3_video_qcif_pane_ParamLimits

0x39d1,	// (0x000adf49) call3_video_qcif_pane

0x39e2,	// (0x000adf5a) call3_video_qcif_uncrop_pane_ParamLimits

0x39e2,	// (0x000adf5a) call3_video_qcif_uncrop_pane

0x39f0,	// (0x000adf68) call3_video_subqcif_pane_ParamLimits

0x39f0,	// (0x000adf68) call3_video_subqcif_pane

0x3a04,	// (0x000adf7c) call3_video_subqcif_uncrop_pane_ParamLimits

0x3a04,	// (0x000adf7c) call3_video_subqcif_uncrop_pane

0x3a75,	// (0x000adfed) popup_call3_audio_in_window_g4_ParamLimits

0x3a75,	// (0x000adfed) popup_call3_audio_in_window_g4

0x3990,	// (0x000adf08) mup_spec_half_pane

0x3999,	// (0x000adf11) mup_spec_half_pane_cp

0xc824,	// (0x000b6d9c) mup_osc_middle_pane

0xc82d,	// (0x000b6da5) mup_visualizer_osc_pane_g1

0x3970,	// (0x000adee8) mup_spec_bar_pane_ParamLimits

0x3970,	// (0x000adee8) mup_spec_bar_pane

0xc811,	// (0x000b6d89) mup_spec_bar_pane_g1

0xc81b,	// (0x000b6d93) mup_spec_bar_pane_g2

0x0001,

0xf606,	// (0x000b9b7e) mup_spec_bar_pane_g

0x0837,	// (0x000aadaf) aid_cale_week_size_cell_pane_ParamLimits

0x0851,	// (0x000aadc9) bg_cale_heading_pane_ParamLimits

0xa351,	// (0x000b48c9) bg_cale_pane_cp01_ParamLimits

0x086f,	// (0x000aade7) cale_week_corner_pane_ParamLimits

0x088e,	// (0x000aae06) cale_week_day_heading_pane_ParamLimits

0x08b1,	// (0x000aae29) cale_week_scroll_pane_g1_ParamLimits

0x08ca,	// (0x000aae42) cale_week_scroll_pane_g2_ParamLimits

0x08e2,	// (0x000aae5a) cale_week_scroll_pane_g3_ParamLimits

0x08fa,	// (0x000aae72) cale_week_scroll_pane_g4_ParamLimits

0x0912,	// (0x000aae8a) cale_week_scroll_pane_g5_ParamLimits

0x092e,	// (0x000aaea6) cale_week_scroll_pane_g6_ParamLimits

0x094e,	// (0x000aaec6) cale_week_scroll_pane_g7_ParamLimits

0x096e,	// (0x000aaee6) cale_week_scroll_pane_g8_ParamLimits

0x0992,	// (0x000aaf0a) cale_week_scroll_pane_g9_ParamLimits

0x09aa,	// (0x000aaf22) cale_week_scroll_pane_g10_ParamLimits

0x09c2,	// (0x000aaf3a) cale_week_scroll_pane_g11_ParamLimits

0x09da,	// (0x000aaf52) cale_week_scroll_pane_g12_ParamLimits

0x09f2,	// (0x000aaf6a) cale_week_scroll_pane_g13_ParamLimits

0x09f2,	// (0x000aaf6a) cale_week_scroll_pane_g14_ParamLimits

0x09f2,	// (0x000aaf6a) cale_week_scroll_pane_g15_ParamLimits

0xf1ac,	// (0x000b9724) cale_week_scroll_pane_g_ParamLimits

0x0a2e,	// (0x000aafa6) cale_week_time_pane_ParamLimits

0x0a52,	// (0x000aafca) grid_cale_week_pane_ParamLimits

0xa36f,	// (0x000b48e7) listscroll_cale_week_pane_t1

0xa381,	// (0x000b48f9) scroll_pane_cp08_ParamLimits

0x186a,	// (0x000abde2) cale_month_corner_pane_ParamLimits

0xabfc,	// (0x000b5174) cale_month_pane_t1

0x1c8a,	// (0x000ac202) cale_month_week_pane_ParamLimits

0x251b,	// (0x000aca93) popup_call_status_window_g1_ParamLimits

0x252f,	// (0x000acaa7) popup_call_status_window_g2_ParamLimits

0x2543,	// (0x000acabb) popup_call_status_window_g3_ParamLimits

0xf356,	// (0x000b98ce) popup_call_status_window_g_ParamLimits

0xafb4,	// (0x000b552c) aid_call2_pane

0x2c64,	// (0x000ad1dc) msg_header_pane_g1

0x2e30,	// (0x000ad3a8) postcard_address2_pane_ParamLimits

0x2e30,	// (0x000ad3a8) postcard_address2_pane

0x2e42,	// (0x000ad3ba) postcard_message2_pane_ParamLimits

0x2e42,	// (0x000ad3ba) postcard_message2_pane

0x391e,	// (0x000ade96) message2_row_pane_ParamLimits

0x391e,	// (0x000ade96) message2_row_pane

0x393d,	// (0x000adeb5) address2_row_pane_ParamLimits

0x393d,	// (0x000adeb5) address2_row_pane

0xc7df,	// (0x000b6d57) postcard_message2_row_pane_g1

0xc7e7,	// (0x000b6d5f) postcard_message2_row_pane_t1

0xc7df,	// (0x000b6d57) address2_row_pane_g1

0xc7e7,	// (0x000b6d5f) address2_row_pane_t1

0x0e72,	// (0x000ab3ea) aid_size_cell_vorec

0x97b8,	// (0x000b3d30) main_rss_pane

0x3950,	// (0x000adec8) rss_list_single_pane_ParamLimits

0x3950,	// (0x000adec8) rss_list_single_pane

0xc7f5,	// (0x000b6d6d) rss_list_single_pane_t1

0xc803,	// (0x000b6d7b) rss_list_single_pane_t2

0x0001,

0xf601,	// (0x000b9b79) rss_list_single_pane_t

0x97b8,	// (0x000b3d30) main_camera2_pane

0x97b8,	// (0x000b3d30) main_video2_pane

0x3bb8,	// (0x000ae130) cams_zoom_pane_cp2_ParamLimits

0x3bb8,	// (0x000ae130) cams_zoom_pane_cp2

0x3bd8,	// (0x000ae150) image2_vga_pane_ParamLimits

0x3bd8,	// (0x000ae150) image2_vga_pane

0x3c29,	// (0x000ae1a1) main_camera2_pane_g1_ParamLimits

0x3c29,	// (0x000ae1a1) main_camera2_pane_g1

0x3c49,	// (0x000ae1c1) main_camera2_pane_g2_ParamLimits

0x3c49,	// (0x000ae1c1) main_camera2_pane_g2

0x3c69,	// (0x000ae1e1) main_camera2_pane_g3_ParamLimits

0x3c69,	// (0x000ae1e1) main_camera2_pane_g3

0x3c89,	// (0x000ae201) main_camera2_pane_g4_ParamLimits

0x3c89,	// (0x000ae201) main_camera2_pane_g4

0x3ca9,	// (0x000ae221) main_camera2_pane_g5_ParamLimits

0x3ca9,	// (0x000ae221) main_camera2_pane_g5

0x3cc9,	// (0x000ae241) main_camera2_pane_g6_ParamLimits

0x3cc9,	// (0x000ae241) main_camera2_pane_g6

0x3ce9,	// (0x000ae261) main_camera2_pane_g7_ParamLimits

0x3ce9,	// (0x000ae261) main_camera2_pane_g7

0x3d09,	// (0x000ae281) main_camera2_pane_g8_ParamLimits

0x3d09,	// (0x000ae281) main_camera2_pane_g8

0x0008,

0xf622,	// (0x000b9b9a) main_camera2_pane_g_ParamLimits

0xf622,	// (0x000b9b9a) main_camera2_pane_g

0x3d49,	// (0x000ae2c1) main_camera2_pane_t1_ParamLimits

0x3d49,	// (0x000ae2c1) main_camera2_pane_t1

0x3d7e,	// (0x000ae2f6) main_camera2_pane_t2_ParamLimits

0x3d7e,	// (0x000ae2f6) main_camera2_pane_t2

0x3da4,	// (0x000ae31c) main_camera2_pane_t3_ParamLimits

0x3da4,	// (0x000ae31c) main_camera2_pane_t3

0x3e02,	// (0x000ae37a) main_camera2_pane_t4_ParamLimits

0x3e02,	// (0x000ae37a) main_camera2_pane_t4

0x0006,

0xf635,	// (0x000b9bad) main_camera2_pane_t_ParamLimits

0xf635,	// (0x000b9bad) main_camera2_pane_t

0x3e94,	// (0x000ae40c) cams_zoom_pane_cp4_ParamLimits

0x3e94,	// (0x000ae40c) cams_zoom_pane_cp4

0x3eaa,	// (0x000ae422) image2_cif_pane_ParamLimits

0x3eaa,	// (0x000ae422) image2_cif_pane

0x3ed5,	// (0x000ae44d) image2_subqcif_pane_ParamLimits

0x3ed5,	// (0x000ae44d) image2_subqcif_pane

0x3eef,	// (0x000ae467) main_video2_pane_g1_ParamLimits

0x3eef,	// (0x000ae467) main_video2_pane_g1

0x3f09,	// (0x000ae481) main_video2_pane_g2_ParamLimits

0x3f09,	// (0x000ae481) main_video2_pane_g2

0x3f1f,	// (0x000ae497) main_video2_pane_g3_ParamLimits

0x3f1f,	// (0x000ae497) main_video2_pane_g3

0x3f35,	// (0x000ae4ad) main_video2_pane_g4_ParamLimits

0x3f35,	// (0x000ae4ad) main_video2_pane_g4

0x3f4b,	// (0x000ae4c3) main_video2_pane_g5_ParamLimits

0x3f4b,	// (0x000ae4c3) main_video2_pane_g5

0x3f61,	// (0x000ae4d9) main_video2_pane_g6_ParamLimits

0x3f61,	// (0x000ae4d9) main_video2_pane_g6

0x0005,

0xf644,	// (0x000b9bbc) main_video2_pane_g_ParamLimits

0xf644,	// (0x000b9bbc) main_video2_pane_g

0x3f7b,	// (0x000ae4f3) main_video2_pane_t1_ParamLimits

0x3f7b,	// (0x000ae4f3) main_video2_pane_t1

0x3f9f,	// (0x000ae517) main_video2_pane_t2_ParamLimits

0x3f9f,	// (0x000ae517) main_video2_pane_t2

0x3fed,	// (0x000ae565) main_video2_pane_t3_ParamLimits

0x3fed,	// (0x000ae565) main_video2_pane_t3

0x0002,

0xf651,	// (0x000b9bc9) main_video2_pane_t_ParamLimits

0xf651,	// (0x000b9bc9) main_video2_pane_t

0x3468,	// (0x000ad9e0) call_muted_g2

0x0001,

0xf5f3,	// (0x000b9b6b) call_muted_g

0x97b8,	// (0x000b3d30) main_mup2_pane

0x4035,	// (0x000ae5ad) main_mup2_pane_g1_ParamLimits

0x4035,	// (0x000ae5ad) main_mup2_pane_g1

0x4041,	// (0x000ae5b9) main_mup2_pane_g2_ParamLimits

0x4041,	// (0x000ae5b9) main_mup2_pane_g2

0x9a42,	// (0x000b3fba) main_mup_pane_g13_cp1

0x9a4a,	// (0x000b3fc2) mup_volume_pane_cp1

0x405d,	// (0x000ae5d5) main_mup2_pane_g4_ParamLimits

0x405d,	// (0x000ae5d5) main_mup2_pane_g4

0x406f,	// (0x000ae5e7) main_mup2_pane_g5_ParamLimits

0x406f,	// (0x000ae5e7) main_mup2_pane_g5

0x4081,	// (0x000ae5f9) main_mup2_pane_g6_ParamLimits

0x4081,	// (0x000ae5f9) main_mup2_pane_g6

0x4093,	// (0x000ae60b) main_mup2_pane_g7_ParamLimits

0x4093,	// (0x000ae60b) main_mup2_pane_g7

0x0006,

0xf658,	// (0x000b9bd0) main_mup2_pane_g_ParamLimits

0xf658,	// (0x000b9bd0) main_mup2_pane_g

0x40ab,	// (0x000ae623) main_mup2_pane_t1_ParamLimits

0x40ab,	// (0x000ae623) main_mup2_pane_t1

0x40c1,	// (0x000ae639) main_mup2_pane_t2_ParamLimits

0x40c1,	// (0x000ae639) main_mup2_pane_t2

0x40d7,	// (0x000ae64f) main_mup2_pane_t3_ParamLimits

0x40d7,	// (0x000ae64f) main_mup2_pane_t3

0x40ed,	// (0x000ae665) main_mup2_pane_t4_ParamLimits

0x40ed,	// (0x000ae665) main_mup2_pane_t4

0x4105,	// (0x000ae67d) main_mup2_pane_t5_ParamLimits

0x4105,	// (0x000ae67d) main_mup2_pane_t5

0x411d,	// (0x000ae695) main_mup2_pane_t6_ParamLimits

0x411d,	// (0x000ae695) main_mup2_pane_t6

0x0005,

0xf667,	// (0x000b9bdf) main_mup2_pane_t_ParamLimits

0xf667,	// (0x000b9bdf) main_mup2_pane_t

0x414d,	// (0x000ae6c5) mup2_visualizer_pane_ParamLimits

0x414d,	// (0x000ae6c5) mup2_visualizer_pane

0x417b,	// (0x000ae6f3) mup_progress_pane_cp_ParamLimits

0x417b,	// (0x000ae6f3) mup_progress_pane_cp

0x9a2d,	// (0x000b3fa5) mup_volume_pane_cp_ParamLimits

0x9a2d,	// (0x000b3fa5) mup_volume_pane_cp

0x418f,	// (0x000ae707) mup2_visualizer_pane_g1_ParamLimits

0x418f,	// (0x000ae707) mup2_visualizer_pane_g1

0xc864,	// (0x000b6ddc) mup2_visualizer_pane_g2_ParamLimits

0xc864,	// (0x000b6ddc) mup2_visualizer_pane_g2

0x41a6,	// (0x000ae71e) mup2_visualizer_pane_g3_ParamLimits

0x41a6,	// (0x000ae71e) mup2_visualizer_pane_g3

0x0002,

0xf674,	// (0x000b9bec) mup2_visualizer_pane_g_ParamLimits

0xf674,	// (0x000b9bec) mup2_visualizer_pane_g

0xb63a,	// (0x000b5bb2) aid_size_cell_fmradio

0x361a,	// (0x000adb92) aid_height_parent_landcape

0xa578,	// (0x000b4af0) wml_content_pane_cp

0xa580,	// (0x000b4af8) wml_tabs_pane

0xa589,	// (0x000b4b01) popup_wml_miniature_window

0xa591,	// (0x000b4b09) scroll_pane_cp021

0xa5a5,	// (0x000b4b1d) wml_content_pane_comp8

0x97b8,	// (0x000b3d30) bg_popup_sub_pane_cp05

0xc882,	// (0x000b6dfa) popup_wml_miniature_window_g1

0xc88a,	// (0x000b6e02) wml_miniature_view_pane

0x41b2,	// (0x000ae72a) aid_size_wml_view

0x41ba,	// (0x000ae732) wml_miniature_view_pane_g1

0x41c3,	// (0x000ae73b) wml_miniature_view_pane_g2

0x41cc,	// (0x000ae744) wml_miniature_view_pane_g3

0x41d4,	// (0x000ae74c) wml_miniature_view_pane_g4

0x41dc,	// (0x000ae754) wml_miniature_view_pane_g5

0x41e4,	// (0x000ae75c) wml_miniature_view_pane_g6

0x41ec,	// (0x000ae764) wml_miniature_view_pane_g7

0x41f4,	// (0x000ae76c) wml_miniature_view_pane_g8

0x0007,

0xf67b,	// (0x000b9bf3) wml_miniature_view_pane_g

0xc892,	// (0x000b6e0a) background_graphic_ParamLimits

0xc892,	// (0x000b6e0a) background_graphic

0xc89e,	// (0x000b6e16) wml_tabs_2_pane

0xc8a7,	// (0x000b6e1f) wml_tabs_3_pane_ParamLimits

0xc8a7,	// (0x000b6e1f) wml_tabs_3_pane

0xc8b9,	// (0x000b6e31) wml_tabs_4_pane_ParamLimits

0xc8b9,	// (0x000b6e31) wml_tabs_4_pane

0xc8cf,	// (0x000b6e47) wml_tabs_5_pane_ParamLimits

0xc8cf,	// (0x000b6e47) wml_tabs_5_pane

0xc8e9,	// (0x000b6e61) wml_tabs_pane_g2_ParamLimits

0xc8e9,	// (0x000b6e61) wml_tabs_pane_g2

0xc8fd,	// (0x000b6e75) wml_tabs_pane_g3_ParamLimits

0xc8fd,	// (0x000b6e75) wml_tabs_pane_g3

0x41fc,	// (0x000ae774) wml_tabs_2_active_pane_ParamLimits

0x41fc,	// (0x000ae774) wml_tabs_2_active_pane

0x4210,	// (0x000ae788) wml_tabs_2_passive_pane_ParamLimits

0x4210,	// (0x000ae788) wml_tabs_2_passive_pane

0x4224,	// (0x000ae79c) wml_tabs_3_active_pane_cp_ParamLimits

0x4224,	// (0x000ae79c) wml_tabs_3_active_pane_cp

0x4239,	// (0x000ae7b1) wml_tabs_3_passive_pane_ParamLimits

0x4239,	// (0x000ae7b1) wml_tabs_3_passive_pane

0x424c,	// (0x000ae7c4) wml_tabs_3_passive_pane_cp_ParamLimits

0x424c,	// (0x000ae7c4) wml_tabs_3_passive_pane_cp

0x4263,	// (0x000ae7db) tabs_4_active_pane

0x426b,	// (0x000ae7e3) tabs_4_passive_pane

0x4275,	// (0x000ae7ed) tabs_4_passive_pane_cp

0x427d,	// (0x000ae7f5) tabs_4_passive_pane_cp2

0x3335,	// (0x000ad8ad) aid_height_text

0x29c3,	// (0x000acf3b) mup_volume_cont_pane_ParamLimits

0x29c3,	// (0x000acf3b) mup_volume_cont_pane

0x0448,	// (0x000aa9c0) aid_size_cell_pinb

0x0452,	// (0x000aa9ca) aid_size_list_pinb

0x4167,	// (0x000ae6df) mup2_volume_cont_pane_ParamLimits

0x4167,	// (0x000ae6df) mup2_volume_cont_pane

0x9a19,	// (0x000b3f91) mup2_volume_cont_pane_g1_ParamLimits

0x9a19,	// (0x000b3f91) mup2_volume_cont_pane_g1

0x00fa,	// (0x000aa672) aid_size_cell_touch_ParamLimits

0x00fa,	// (0x000aa672) aid_size_cell_touch

0x0337,	// (0x000aa8af) touch_pane_ParamLimits

0x0337,	// (0x000aa8af) touch_pane

0x939b,	// (0x000b3913) main_rss2_pane

0xc91a,	// (0x000b6e92) listscroll_rss2_pane

0xc923,	// (0x000b6e9b) rss2_navigation_pane

0xc92b,	// (0x000b6ea3) list_rss2_pane

0xb103,	// (0x000b567b) scroll_pane_cp22

0xc933,	// (0x000b6eab) rss2_navigation_pane_g1

0xc93c,	// (0x000b6eb4) rss2_navigation_pane_g2

0xc944,	// (0x000b6ebc) rss2_navigation_pane_g3

0x0002,

0xf68c,	// (0x000b9c04) rss2_navigation_pane_g

0xc94c,	// (0x000b6ec4) rss2_navigation_pane_t1

0x4287,	// (0x000ae7ff) rss2_list_single_pane_ParamLimits

0x4287,	// (0x000ae7ff) rss2_list_single_pane

0xc95a,	// (0x000b6ed2) rss2_list_single_pane_t2

0xc968,	// (0x000b6ee0) rss2_list_single_pane_t3_ParamLimits

0xc968,	// (0x000b6ee0) rss2_list_single_pane_t3

0xc985,	// (0x000b6efd) rss2_list_single_pane_t4

0x2331,	// (0x000ac8a9) smil_status_pane_g1

0x938d,	// (0x000b3905) main_image2_pane_ParamLimits

0x938d,	// (0x000b3905) main_image2_pane

0x3d29,	// (0x000ae2a1) main_camera2_pane_g9_ParamLimits

0x3d29,	// (0x000ae2a1) main_camera2_pane_g9

0x3e57,	// (0x000ae3cf) main_camera2_pane_t5_ParamLimits

0x3e57,	// (0x000ae3cf) main_camera2_pane_t5

0x99e9,	// (0x000b3f61) main_camera2_pane_t6_ParamLimits

0x99e9,	// (0x000b3f61) main_camera2_pane_t6

0x429e,	// (0x000ae816) main_image2_pane_g1_ParamLimits

0x429e,	// (0x000ae816) main_image2_pane_g1

0x306f,	// (0x000ad5e7) smil2_video_pane_ParamLimits

0x306f,	// (0x000ad5e7) smil2_video_pane

0x0132,	// (0x000aa6aa) aid_zoom_text_primary_cp

0x9383,	// (0x000b38fb) popup_preview_fixed_window

0xa4e1,	// (0x000b4a59) im_reading_pane_g1

0x3ba0,	// (0x000ae118) cams2_bc_adjust_pane_cp_ParamLimits

0x3ba0,	// (0x000ae118) cams2_bc_adjust_pane_cp

0x3e86,	// (0x000ae3fe) cams2_bc_adjust_pane_ParamLimits

0x3e86,	// (0x000ae3fe) cams2_bc_adjust_pane

0xce7d,	// (0x000b73f5) cams2_bc_adjust_pane_g1

0x9a52,	// (0x000b3fca) cams2_slider_pane

0x9a5b,	// (0x000b3fd3) cams2_slider_pane_g1

0x9a64,	// (0x000b3fdc) cams2_slider_pane_g2

0x0006,

0xf693,	// (0x000b9c0b) cams2_slider_pane_g

0x052a,	// (0x000aaaa2) calc_display_pane_ParamLimits

0x0552,	// (0x000aaaca) calc_paper_pane_ParamLimits

0x0575,	// (0x000aaaed) grid_calc_pane_ParamLimits

0x990e,	// (0x000b3e86) popup_clock_digital_window_t1_ParamLimits

0xb5d7,	// (0x000b5b4f) main_image_pane_t1

0x050c,	// (0x000aaa84) aid_size_cell_calc_ParamLimits

0x050c,	// (0x000aaa84) aid_size_cell_calc

0x3672,	// (0x000adbea) popup_blid_sat_info2_window_ParamLimits

0x3672,	// (0x000adbea) popup_blid_sat_info2_window

0xc99b,	// (0x000b6f13) aid_size_cell_blid

0xc9a3,	// (0x000b6f1b) bg_popup_window_pane_cp07

0xc9c6,	// (0x000b6f3e) grid_popup_blid_pane

0xc9d0,	// (0x000b6f48) heading_pane_cp05_ParamLimits

0xc9d0,	// (0x000b6f48) heading_pane_cp05

0xca9a,	// (0x000b7012) cell_popup_blid_pane_ParamLimits

0xca9a,	// (0x000b7012) cell_popup_blid_pane

0xcac0,	// (0x000b7038) cell_popup_blid_pane_g1

0xcac8,	// (0x000b7040) cell_popup_blid_pane_t1

0x4137,	// (0x000ae6af) mup2_indicator_pane_ParamLimits

0x4137,	// (0x000ae6af) mup2_indicator_pane

0xb346,	// (0x000b58be) mup2_visualizer_osc_pane

0xc870,	// (0x000b6de8) mup2_visualizer_spec_pane_ParamLimits

0xc870,	// (0x000b6de8) mup2_visualizer_spec_pane

0x42b4,	// (0x000ae82c) mup2_spec_half_pane

0x42bd,	// (0x000ae835) mup2_spec_half_pane_cp

0x42c5,	// (0x000ae83d) mup2_spec_bar_pane_ParamLimits

0x42c5,	// (0x000ae83d) mup2_spec_bar_pane

0xc811,	// (0x000b6d89) mup2_spec_bar_pane_g1

0xc81b,	// (0x000b6d93) mup2_spec_bar_pane_g2

0x0001,

0xf606,	// (0x000b9b7e) mup2_spec_bar_pane_g

0x42e5,	// (0x000ae85d) mup2_osc_middle_pane

0xc82d,	// (0x000b6da5) mup2_visualizer_osc_pane_g1

0x93c5,	// (0x000b393d) popup_number_entry_window_t1_ParamLimits

0x93d8,	// (0x000b3950) popup_number_entry_window_t2_ParamLimits

0x93ea,	// (0x000b3962) popup_number_entry_window_t3_ParamLimits

0x0389,	// (0x000aa901) popup_number_entry_window_t5_ParamLimits

0x0389,	// (0x000aa901) popup_number_entry_window_t5

0xf0c6,	// (0x000b963e) popup_number_entry_window_t_ParamLimits

0x93fc,	// (0x000b3974) text_title_cp2_ParamLimits

0x994d,	// (0x000b3ec5) aid_hotspot_pointer_text2_pane

0x9967,	// (0x000b3edf) main_viewer_pane_g9_ParamLimits

0x9967,	// (0x000b3edf) main_viewer_pane_g9

0xabfc,	// (0x000b5174) cale_month_pane_t1_ParamLimits

0xac39,	// (0x000b51b1) bg_cale_pane_ParamLimits

0xac51,	// (0x000b51c9) list_cale_pane_ParamLimits

0xac62,	// (0x000b51da) listscroll_cale_day_pane_t1

0xac74,	// (0x000b51ec) scroll_pane_cp09_ParamLimits

0x29f9,	// (0x000acf71) main_mup_eq_pane_t1_ParamLimits

0x29f9,	// (0x000acf71) main_mup_eq_pane_t1

0x2a13,	// (0x000acf8b) main_mup_eq_pane_t2_ParamLimits

0x2a13,	// (0x000acf8b) main_mup_eq_pane_t2

0x2a2d,	// (0x000acfa5) main_mup_eq_pane_t3_ParamLimits

0x2a2d,	// (0x000acfa5) main_mup_eq_pane_t3

0x2a49,	// (0x000acfc1) main_mup_eq_pane_t4_ParamLimits

0x2a49,	// (0x000acfc1) main_mup_eq_pane_t4

0x2a65,	// (0x000acfdd) main_mup_eq_pane_t5_ParamLimits

0x2a65,	// (0x000acfdd) main_mup_eq_pane_t5

0x2a81,	// (0x000acff9) main_mup_eq_pane_t6_ParamLimits

0x2a81,	// (0x000acff9) main_mup_eq_pane_t6

0x2a95,	// (0x000ad00d) main_mup_eq_pane_t7_ParamLimits

0x2a95,	// (0x000ad00d) main_mup_eq_pane_t7

0x2aa9,	// (0x000ad021) main_mup_eq_pane_t8_ParamLimits

0x2aa9,	// (0x000ad021) main_mup_eq_pane_t8

0x2abd,	// (0x000ad035) main_mup_eq_pane_t9_ParamLimits

0x2abd,	// (0x000ad035) main_mup_eq_pane_t9

0x2ad7,	// (0x000ad04f) main_mup_eq_pane_t10_ParamLimits

0x2ad7,	// (0x000ad04f) main_mup_eq_pane_t10

0x0009,

0xf455,	// (0x000b99cd) main_mup_eq_pane_t_ParamLimits

0xf455,	// (0x000b99cd) main_mup_eq_pane_t

0x2b86,	// (0x000ad0fe) mup_equalizer_pane_cp5_ParamLimits

0x2b9a,	// (0x000ad112) mup_equalizer_pane_cp6_ParamLimits

0x2bae,	// (0x000ad126) mup_equalizer_pane_cp7_ParamLimits

0x939b,	// (0x000b3913) main_gallery_pane

0xc836,	// (0x000b6dae) smil2_volume_pane

0xc83e,	// (0x000b6db6) smil_status_volume_pane_g1_ParamLimits

0xc851,	// (0x000b6dc9) smil_status_volume_pane_g2_ParamLimits

0x99c7,	// (0x000b3f3f) smil_status_volume_pane_g3_ParamLimits

0xf60b,	// (0x000b9b83) smil_status_volume_pane_g_ParamLimits

0xc9a3,	// (0x000b6f1b) bg_popup_window_pane_cp07_ParamLimits

0xc9b1,	// (0x000b6f29) blid_firmament_pane

0x42ee,	// (0x000ae866) aid_size_cell_gallery_ParamLimits

0x42ee,	// (0x000ae866) aid_size_cell_gallery

0x4304,	// (0x000ae87c) grid_gallery_pane_ParamLimits

0x4304,	// (0x000ae87c) grid_gallery_pane

0x431d,	// (0x000ae895) cell_gallery_pane_ParamLimits

0x431d,	// (0x000ae895) cell_gallery_pane

0xcad6,	// (0x000b704e) bg_cell_gallery_focus_pane_ParamLimits

0xcad6,	// (0x000b704e) bg_cell_gallery_focus_pane

0xcae8,	// (0x000b7060) cell_gallery_pane_g1_ParamLimits

0xcae8,	// (0x000b7060) cell_gallery_pane_g1

0x4366,	// (0x000ae8de) cell_gallery_pane_g2_ParamLimits

0x4366,	// (0x000ae8de) cell_gallery_pane_g2

0x4373,	// (0x000ae8eb) cell_gallery_pane_g3_ParamLimits

0x4373,	// (0x000ae8eb) cell_gallery_pane_g3

0xcaf4,	// (0x000b706c) cell_gallery_pane_g4_ParamLimits

0xcaf4,	// (0x000b706c) cell_gallery_pane_g4

0x0003,

0xf6b9,	// (0x000b9c31) cell_gallery_pane_g_ParamLimits

0xf6b9,	// (0x000b9c31) cell_gallery_pane_g

0xcb00,	// (0x000b7078) bg_cell_gallery_focus_pane_g1

0xcb08,	// (0x000b7080) bg_cell_gallery_focus_pane_g2

0xcb10,	// (0x000b7088) bg_cell_gallery_focus_pane_g3

0xcb18,	// (0x000b7090) bg_cell_gallery_focus_pane_g4

0xcb20,	// (0x000b7098) bg_cell_gallery_focus_pane_g5

0xcb28,	// (0x000b70a0) bg_cell_gallery_focus_pane_g6

0xcb30,	// (0x000b70a8) bg_cell_gallery_focus_pane_g7

0xcb38,	// (0x000b70b0) bg_cell_gallery_focus_pane_g8

0x0007,

0xf6c2,	// (0x000b9c3a) bg_cell_gallery_focus_pane_g

0xcb40,	// (0x000b70b8) aid_firma_cardinal

0xcb54,	// (0x000b70cc) blid_firmament_pane_t1

0xcb6b,	// (0x000b70e3) blid_firmament_pane_t2

0xcb82,	// (0x000b70fa) blid_firmament_pane_t3

0xcb99,	// (0x000b7111) blid_firmament_pane_t4

0x0003,

0xf6d3,	// (0x000b9c4b) blid_firmament_pane_t

0xcbb0,	// (0x000b7128) blid_sat_info_pane

0xcbc0,	// (0x000b7138) blid_sat_info_pane_g1

0xcbc0,	// (0x000b7138) blid_sat_info_pane_g2

0x0001,

0xf6dc,	// (0x000b9c54) blid_sat_info_pane_g

0xcbca,	// (0x000b7142) blid_sat_info_pane_t1

0xcbd8,	// (0x000b7150) smil2_volume_content_pane

0xcbe1,	// (0x000b7159) smil2_volume_pane_g1

0xa29d,	// (0x000b4815) smil2_volume_content_pane_g1

0xcbe9,	// (0x000b7161) smil2_volume_content_pane_g2

0xcbf2,	// (0x000b716a) smil2_volume_content_pane_g3

0xcbfb,	// (0x000b7173) smil2_volume_content_pane_g4

0xcc04,	// (0x000b717c) smil2_volume_content_pane_g5

0xcc0d,	// (0x000b7185) smil2_volume_content_pane_g6

0xcc16,	// (0x000b718e) smil2_volume_content_pane_g7

0xcc1f,	// (0x000b7197) smil2_volume_content_pane_g8

0xcc28,	// (0x000b71a0) smil2_volume_content_pane_g9

0xcc31,	// (0x000b71a9) smil2_volume_content_pane_g10

0x0009,

0xf6e1,	// (0x000b9c59) smil2_volume_content_pane_g

0x0b06,	// (0x000ab07e) cale_week_day_heading_pane_t1_ParamLimits

0x0b50,	// (0x000ab0c8) cale_week_day_heading_pane_t2_ParamLimits

0x0b9f,	// (0x000ab117) cale_week_day_heading_pane_t3_ParamLimits

0x0bee,	// (0x000ab166) cale_week_day_heading_pane_t4_ParamLimits

0x0c3d,	// (0x000ab1b5) cale_week_day_heading_pane_t5_ParamLimits

0x0c94,	// (0x000ab20c) cale_week_day_heading_pane_t6_ParamLimits

0x0ceb,	// (0x000ab263) cale_week_day_heading_pane_t7_ParamLimits

0xf1cd,	// (0x000b9745) cale_week_day_heading_pane_t_ParamLimits

0xa39e,	// (0x000b4916) bg_cale_side_pane_ParamLimits

0x0d35,	// (0x000ab2ad) cale_week_time_pane_t1_ParamLimits

0x0d4f,	// (0x000ab2c7) cale_week_time_pane_t2_ParamLimits

0x0d69,	// (0x000ab2e1) cale_week_time_pane_t3_ParamLimits

0x0d83,	// (0x000ab2fb) cale_week_time_pane_t4_ParamLimits

0x0d9d,	// (0x000ab315) cale_week_time_pane_t5_ParamLimits

0x0db7,	// (0x000ab32f) cale_week_time_pane_t6_ParamLimits

0x0dd1,	// (0x000ab349) cale_week_time_pane_t7_ParamLimits

0x0df1,	// (0x000ab369) cale_week_time_pane_t8_ParamLimits

0xf1dc,	// (0x000b9754) cale_week_time_pane_t_ParamLimits

0x0e11,	// (0x000ab389) cell_cale_week_pane_g2_ParamLimits

0xa39e,	// (0x000b4916) bg_cale_side_pane_cp01_ParamLimits

0x2118,	// (0x000ac690) cale_month_week_pane_t1_ParamLimits

0x2131,	// (0x000ac6a9) cale_month_week_pane_t2_ParamLimits

0x214a,	// (0x000ac6c2) cale_month_week_pane_t3_ParamLimits

0x2163,	// (0x000ac6db) cale_month_week_pane_t4_ParamLimits

0x217c,	// (0x000ac6f4) cale_month_week_pane_t5_ParamLimits

0x2195,	// (0x000ac70d) cale_month_week_pane_t6_ParamLimits

0xf2b5,	// (0x000b982d) cale_month_week_pane_t_ParamLimits

0x988a,	// (0x000b3e02) cell_cale_month_pane_g1_ParamLimits

0x939b,	// (0x000b3913) main_cale_event_viewer_pane

0x9325,	// (0x000b389d) listscroll_cale_event_viewer_pane

0xcc3a,	// (0x000b71b2) list_cale_ev_pane

0xcc42,	// (0x000b71ba) scroll_pane_cp023

0xcc4e,	// (0x000b71c6) field_cale_ev_pane_ParamLimits

0xcc4e,	// (0x000b71c6) field_cale_ev_pane

0xcc6a,	// (0x000b71e2) field_cale_ev_content_pane_ParamLimits

0xcc6a,	// (0x000b71e2) field_cale_ev_content_pane

0xcc76,	// (0x000b71ee) field_cale_ev_pane_g1_ParamLimits

0xcc76,	// (0x000b71ee) field_cale_ev_pane_g1

0xcc82,	// (0x000b71fa) field_cale_ev_pane_g2_ParamLimits

0xcc82,	// (0x000b71fa) field_cale_ev_pane_g2

0xcc9a,	// (0x000b7212) field_cale_ev_pane_g3_ParamLimits

0xcc9a,	// (0x000b7212) field_cale_ev_pane_g3

0x0002,

0xf6f6,	// (0x000b9c6e) field_cale_ev_pane_g_ParamLimits

0xf6f6,	// (0x000b9c6e) field_cale_ev_pane_g

0xccb2,	// (0x000b722a) field_cale_ev_pane_t1_ParamLimits

0xccb2,	// (0x000b722a) field_cale_ev_pane_t1

0xccc9,	// (0x000b7241) field_cale_ev_content_pane_t1_ParamLimits

0xccc9,	// (0x000b7241) field_cale_ev_content_pane_t1

0xb4bd,	// (0x000b5a35) bg_button_pane_cp01

0x0825,	// (0x000aad9d) listscroll_cale_week_pane_ParamLimits

0xa348,	// (0x000b48c0) popup_toolbar_window_cp01

0xa36f,	// (0x000b48e7) listscroll_cale_week_pane_t1_ParamLimits

0x0825,	// (0x000aad9d) listscroll_cale_day_pane_ParamLimits

0xa348,	// (0x000b48c0) popup_toolbar_window_cp02

0xac62,	// (0x000b51da) listscroll_cale_day_pane_t1_ParamLimits

0x3638,	// (0x000adbb0) main_cale_month_pane_ParamLimits

0x99b2,	// (0x000b3f2a) popup_toolbar_window_cp03_ParamLimits

0x99b2,	// (0x000b3f2a) popup_toolbar_window_cp03

0x2f33,	// (0x000ad4ab) main_image_pane_g2_ParamLimits

0x2f33,	// (0x000ad4ab) main_image_pane_g2

0x2f44,	// (0x000ad4bc) main_image_pane_g3_ParamLimits

0x2f44,	// (0x000ad4bc) main_image_pane_g3

0x0002,

0xf4e7,	// (0x000b9a5f) main_image_pane_g_ParamLimits

0xf4e7,	// (0x000b9a5f) main_image_pane_g

0xb5d7,	// (0x000b5b4f) main_image_pane_t1_ParamLimits

0x2f55,	// (0x000ad4cd) main_image_pane_t2_ParamLimits

0x2f55,	// (0x000ad4cd) main_image_pane_t2

0x2f67,	// (0x000ad4df) main_image_pane_t3_ParamLimits

0x2f67,	// (0x000ad4df) main_image_pane_t3

0x2f8f,	// (0x000ad507) main_image_pane_t4_ParamLimits

0x2f8f,	// (0x000ad507) main_image_pane_t4

0x0003,

0xf4ee,	// (0x000b9a66) main_image_pane_t_ParamLimits

0xf4ee,	// (0x000b9a66) main_image_pane_t

0x2faf,	// (0x000ad527) popup_image_details_window_cp01

0x2fb9,	// (0x000ad531) popup_toobar_trans_pane_cp01_ParamLimits

0x2fb9,	// (0x000ad531) popup_toobar_trans_pane_cp01

0x3749,	// (0x000adcc1) popup_image_details_window_ParamLimits

0x3749,	// (0x000adcc1) popup_image_details_window

0x9985,	// (0x000b3efd) popup_image_focus_window

0x3b5a,	// (0x000ae0d2) camera2_autofocus_pane_ParamLimits

0x3b5a,	// (0x000ae0d2) camera2_autofocus_pane

0x9325,	// (0x000b389d) bg_popup_sub_pane_cp06

0xcce6,	// (0x000b725e) popup_image_focus_window_g1

0xccee,	// (0x000b7266) popup_image_focus_window_g2

0xccf6,	// (0x000b726e) popup_image_focus_window_g3

0xccfe,	// (0x000b7276) popup_image_focus_window_g4

0x0003,

0xf6fd,	// (0x000b9c75) popup_image_focus_window_g

0xcd06,	// (0x000b727e) popup_image_focus_window_t1

0xcd14,	// (0x000b728c) popup_image_focus_window_t2

0xcd24,	// (0x000b729c) popup_image_focus_window_t3

0x0002,

0xf706,	// (0x000b9c7e) popup_image_focus_window_t

0xcd32,	// (0x000b72aa) camera2_autofocus_pane_g1

0xa5de,	// (0x000b4b56) bg_tb_trans_pane_cp01

0xcd40,	// (0x000b72b8) popup_image_details_window_g1

0xcd53,	// (0x000b72cb) popup_image_details_window_g2

0x0002,

0xf718,	// (0x000b9c90) popup_image_details_window_g

0xcd7c,	// (0x000b72f4) popup_image_details_window_t1

0xcd8e,	// (0x000b7306) popup_image_details_window_t2

0xcda7,	// (0x000b731f) popup_image_details_window_t3

0xcdbb,	// (0x000b7333) popup_image_details_window_t4

0xcdd6,	// (0x000b734e) popup_image_details_window_t5

0x0004,

0xf71f,	// (0x000b9c97) popup_image_details_window_t

0xa1ff,	// (0x000b4777) bg_calc_paper_pane_ParamLimits

0x939b,	// (0x000b3913) grid_highlight_pane_cp013

0x97e2,	// (0x000b3d5a) list_calc_pane_ParamLimits

0x97f4,	// (0x000b3d6c) scroll_pane_cp024

0xa213,	// (0x000b478b) bg_calc_display_pane_ParamLimits

0x0673,	// (0x000aabeb) calc_display_pane_t1_ParamLimits

0x0685,	// (0x000aabfd) calc_display_pane_t2_ParamLimits

0x97fc,	// (0x000b3d74) calc_display_pane_t3_ParamLimits

0xf14d,	// (0x000b96c5) calc_display_pane_t_ParamLimits

0x074a,	// (0x000aacc2) cell_calc_pane_g2

0x0001,

0xf16a,	// (0x000b96e2) cell_calc_pane_g

0x0753,	// (0x000aaccb) cell_calc_pane_t1

0xa272,	// (0x000b47ea) grid_highlight_pane_cp02_ParamLimits

0xa288,	// (0x000b4800) toolbar_button_pane_cp01_ParamLimits

0xa288,	// (0x000b4800) toolbar_button_pane_cp01

0xb61c,	// (0x000b5b94) temp_image_control_pane_ParamLimits

0xb61c,	// (0x000b5b94) temp_image_control_pane

0x938d,	// (0x000b3905) main_mp3_pane

0xcdf0,	// (0x000b7368) temp_image_control_pane_g1_ParamLimits

0xcdf0,	// (0x000b7368) temp_image_control_pane_g1

0xcdfe,	// (0x000b7376) temp_image_control_pane_g2_ParamLimits

0xcdfe,	// (0x000b7376) temp_image_control_pane_g2

0xce10,	// (0x000b7388) temp_image_control_pane_g3_ParamLimits

0xce10,	// (0x000b7388) temp_image_control_pane_g3

0x43b0,	// (0x000ae928) temp_image_control_pane_g4_ParamLimits

0x43b0,	// (0x000ae928) temp_image_control_pane_g4

0x0003,

0xf72a,	// (0x000b9ca2) temp_image_control_pane_g_ParamLimits

0xf72a,	// (0x000b9ca2) temp_image_control_pane_g

0xcdf0,	// (0x000b7368) main_mp3_pane_g1

0x43c3,	// (0x000ae93b) main_mp3_pane_g2

0x0007,

0xf733,	// (0x000b9cab) main_mp3_pane_g

0xce53,	// (0x000b73cb) main_mp3_pane_t1

0xa3f0,	// (0x000b4968) main_camera_pane_g8_ParamLimits

0xa3f0,	// (0x000b4968) main_camera_pane_g8

0x1139,	// (0x000ab6b1) main_video_pane_g7_ParamLimits

0x1139,	// (0x000ab6b1) main_video_pane_g7

0x9a07,	// (0x000b3f7f) main_camera2_pane_t7_ParamLimits

0x9a07,	// (0x000b3f7f) main_camera2_pane_t7

0xa538,	// (0x000b4ab0) scroll_pane_cp025_ParamLimits

0xa538,	// (0x000b4ab0) scroll_pane_cp025

0xa54c,	// (0x000b4ac4) scroll_pane_cp026_ParamLimits

0xa54c,	// (0x000b4ac4) scroll_pane_cp026

0xa55b,	// (0x000b4ad3) wml_content_pane_ParamLimits

0x939b,	// (0x000b3913) main_touch_calib_pane

0x4499,	// (0x000aea11) main_touch_calib_pane_g1

0x44ab,	// (0x000aea23) main_touch_calib_pane_g2

0x44bd,	// (0x000aea35) main_touch_calib_pane_g3

0x44cf,	// (0x000aea47) main_touch_calib_pane_g4

0x0003,

0xf751,	// (0x000b9cc9) main_touch_calib_pane_g

0x44e1,	// (0x000aea59) main_touch_calib_pane_t1

0x44fb,	// (0x000aea73) main_touch_calib_pane_t2

0x0004,

0xf75a,	// (0x000b9cd2) main_touch_calib_pane_t

0xb1e1,	// (0x000b5759) mup_progress_pane_cp02

0xb216,	// (0x000b578e) navi_pane_g1

0xb2d1,	// (0x000b5849) navi_pane_mp_t3

0x938d,	// (0x000b3905) main_mp3_pane_ParamLimits

0x38c6,	// (0x000ade3e) navi_pane_ParamLimits

0xcdf0,	// (0x000b7368) main_mp3_pane_g1_ParamLimits

0x43c3,	// (0x000ae93b) main_mp3_pane_g2_ParamLimits

0x43d1,	// (0x000ae949) main_mp3_pane_g3_ParamLimits

0x43d1,	// (0x000ae949) main_mp3_pane_g3

0x43df,	// (0x000ae957) main_mp3_pane_g4_ParamLimits

0x43df,	// (0x000ae957) main_mp3_pane_g4

0xce20,	// (0x000b7398) main_mp3_pane_g5_ParamLimits

0xce20,	// (0x000b7398) main_mp3_pane_g5

0xce2e,	// (0x000b73a6) main_mp3_pane_g6_ParamLimits

0xce2e,	// (0x000b73a6) main_mp3_pane_g6

0xce3b,	// (0x000b73b3) main_mp3_pane_g7_ParamLimits

0xce3b,	// (0x000b73b3) main_mp3_pane_g7

0xce47,	// (0x000b73bf) main_mp3_pane_g8_ParamLimits

0xce47,	// (0x000b73bf) main_mp3_pane_g8

0xf733,	// (0x000b9cab) main_mp3_pane_g_ParamLimits

0x43ed,	// (0x000ae965) main_mp3_pane_t2

0x43fb,	// (0x000ae973) main_mp3_pane_t3

0xce61,	// (0x000b73d9) main_mp3_pane_t4

0xce6f,	// (0x000b73e7) main_mp3_pane_t5

0x0005,

0xf744,	// (0x000b9cbc) main_mp3_pane_t

0xce85,	// (0x000b73fd) mup_progress_pane_cp01

0x0132,	// (0x000aa6aa) aid_zoom_text_secondary2

0xcc3a,	// (0x000b71b2) list_cale_ev2_pane

0xcc42,	// (0x000b71ba) scroll_pane_cp023_ParamLimits

0x4551,	// (0x000aeac9) field_cale_ev2_pane_ParamLimits

0x4551,	// (0x000aeac9) field_cale_ev2_pane

0xa5ec,	// (0x000b4b64) field_cale_ev2_pane_g1_ParamLimits

0xa5ec,	// (0x000b4b64) field_cale_ev2_pane_g1

0xa5f8,	// (0x000b4b70) field_cale_ev2_pane_g2_ParamLimits

0xa5f8,	// (0x000b4b70) field_cale_ev2_pane_g2

0xa610,	// (0x000b4b88) field_cale_ev2_pane_g3_ParamLimits

0xa610,	// (0x000b4b88) field_cale_ev2_pane_g3

0x0003,

0xf765,	// (0x000b9cdd) field_cale_ev2_pane_g_ParamLimits

0xf765,	// (0x000b9cdd) field_cale_ev2_pane_g

0xa634,	// (0x000b4bac) field_cale_ev2_pane_t1_ParamLimits

0xa634,	// (0x000b4bac) field_cale_ev2_pane_t1

0xa64b,	// (0x000b4bc3) field_cale_ev2_pane_t2_ParamLimits

0xa64b,	// (0x000b4bc3) field_cale_ev2_pane_t2

0x0001,

0xf76e,	// (0x000b9ce6) field_cale_ev2_pane_t_ParamLimits

0xf76e,	// (0x000b9ce6) field_cale_ev2_pane_t

0x2de6,	// (0x000ad35e) main_postcard_pane_g5_ParamLimits

0x2de6,	// (0x000ad35e) main_postcard_pane_g5

0x2dfc,	// (0x000ad374) main_postcard_pane_g6_ParamLimits

0x2dfc,	// (0x000ad374) main_postcard_pane_g6

0x0ef3,	// (0x000ab46b) camera2_autofocus_pane_cp_ParamLimits

0x0ef3,	// (0x000ab46b) camera2_autofocus_pane_cp

0x938d,	// (0x000b3905) main_mup3_pane

0x4593,	// (0x000aeb0b) main_mup3_pane_g1_ParamLimits

0x4593,	// (0x000aeb0b) main_mup3_pane_g1

0x45b5,	// (0x000aeb2d) main_mup3_pane_g2_ParamLimits

0x45b5,	// (0x000aeb2d) main_mup3_pane_g2

0x4637,	// (0x000aebaf) main_mup3_pane_g3_ParamLimits

0x4637,	// (0x000aebaf) main_mup3_pane_g3

0x467d,	// (0x000aebf5) main_mup3_pane_g4_ParamLimits

0x467d,	// (0x000aebf5) main_mup3_pane_g4

0x46c3,	// (0x000aec3b) main_mup3_pane_g5_ParamLimits

0x46c3,	// (0x000aec3b) main_mup3_pane_g5

0x470b,	// (0x000aec83) main_mup3_pane_g6_ParamLimits

0x470b,	// (0x000aec83) main_mup3_pane_g6

0xce8d,	// (0x000b7405) main_mup3_pane_g7_ParamLimits

0xce8d,	// (0x000b7405) main_mup3_pane_g7

0x0007,

0xf77e,	// (0x000b9cf6) main_mup3_pane_g_ParamLimits

0xf77e,	// (0x000b9cf6) main_mup3_pane_g

0x4789,	// (0x000aed01) main_mup3_pane_t1_ParamLimits

0x4789,	// (0x000aed01) main_mup3_pane_t1

0x47fd,	// (0x000aed75) main_mup3_pane_t2_ParamLimits

0x47fd,	// (0x000aed75) main_mup3_pane_t2

0x48d1,	// (0x000aee49) main_mup3_pane_t4_ParamLimits

0x48d1,	// (0x000aee49) main_mup3_pane_t4

0x4927,	// (0x000aee9f) main_mup3_pane_t5_ParamLimits

0x4927,	// (0x000aee9f) main_mup3_pane_t5

0x49e3,	// (0x000aef5b) main_mup3_pane_t6_ParamLimits

0x49e3,	// (0x000aef5b) main_mup3_pane_t6

0x0005,

0xf78f,	// (0x000b9d07) main_mup3_pane_t_ParamLimits

0xf78f,	// (0x000b9d07) main_mup3_pane_t

0x4a9b,	// (0x000af013) mup3_progress_pane_ParamLimits

0x4a9b,	// (0x000af013) mup3_progress_pane

0x4b27,	// (0x000af09f) popup_mup3_control_window_ParamLimits

0x4b27,	// (0x000af09f) popup_mup3_control_window

0xce9b,	// (0x000b7413) popup_mup3_text_window

0x4b59,	// (0x000af0d1) mup3_progress_pane_t1

0x4b78,	// (0x000af0f0) mup3_progress_pane_t2

0xcea3,	// (0x000b741b) mup3_progress_pane_t3

0x0002,

0xf79c,	// (0x000b9d14) mup3_progress_pane_t

0xcec0,	// (0x000b7438) mup_progress_pane_cp03

0x9325,	// (0x000b389d) bg_tb_trans_pane_cp04

0x4b97,	// (0x000af10f) mup3_volume_pane

0x4b9f,	// (0x000af117) popup_mup3_control_window_g1

0x4ba8,	// (0x000af120) mup3_volume_pane_g1

0x4bb1,	// (0x000af129) mup3_volume_pane_g2

0x4bba,	// (0x000af132) mup3_volume_pane_g3

0x0002,

0xf7a3,	// (0x000b9d1b) mup3_volume_pane_g

0x9325,	// (0x000b389d) bg_tb_trans_pane_cp03

0xced0,	// (0x000b7448) popup_mup3_text_window_g1

0xced8,	// (0x000b7450) popup_mup3_text_window_t1

0xa25b,	// (0x000b47d3) list_calc_item_pane_g1_ParamLimits

0xc911,	// (0x000b6e89) mup_volume_pane_cp_g1

0x4515,	// (0x000aea8d) main_touch_calib_pane_t3

0x4529,	// (0x000aeaa1) main_touch_calib_pane_t4

0x453d,	// (0x000aeab5) main_touch_calib_pane_t5

0x932f,	// (0x000b38a7) aid_cell_size_toolbar2

0x9337,	// (0x000b38af) aid_popup3_width_pane

0x9343,	// (0x000b38bb) aid_zoom_text_msg_primary

0x0eca,	// (0x000ab442) vorec_t7

0xa21f,	// (0x000b4797) bg_calc_paper_pane_g1_ParamLimits

0xa22b,	// (0x000b47a3) bg_calc_paper_pane_g2_ParamLimits

0xa237,	// (0x000b47af) bg_calc_paper_pane_g3_ParamLimits

0xa243,	// (0x000b47bb) bg_calc_paper_pane_g4_ParamLimits

0xa24f,	// (0x000b47c7) bg_calc_paper_pane_g5_ParamLimits

0x06ce,	// (0x000aac46) bg_calc_paper_pane_g6_ParamLimits

0x06df,	// (0x000aac57) bg_calc_paper_pane_g7_ParamLimits

0x06f0,	// (0x000aac68) bg_calc_paper_pane_g8_ParamLimits

0xf154,	// (0x000b96cc) bg_calc_paper_pane_g_ParamLimits

0x0703,	// (0x000aac7b) calc_bg_paper_pane_g9_ParamLimits

0x104b,	// (0x000ab5c3) image_qvga_pane_ParamLimits

0x104b,	// (0x000ab5c3) image_qvga_pane

0xa12f,	// (0x000b46a7) bg_popup_sub_pane_cp04_ParamLimits

0xb553,	// (0x000b5acb) popup_mup_playback_window_g1_ParamLimits

0xb55f,	// (0x000b5ad7) popup_mup_playback_window_t1_ParamLimits

0xb574,	// (0x000b5aec) popup_mup_playback_window_t2_ParamLimits

0xf4e2,	// (0x000b9a5a) popup_mup_playback_window_t_ParamLimits

0x4051,	// (0x000ae5c9) main_mup2_pane_g3_ParamLimits

0x4051,	// (0x000ae5c9) main_mup2_pane_g3

0x145d,	// (0x000ab9d5) popup_toolbar_window_cp04

0xb9b4,	// (0x000b5f2c) popup_call2_audio_second_window_g3_ParamLimits

0xb9b4,	// (0x000b5f2c) popup_call2_audio_second_window_g3

0xbdbe,	// (0x000b6336) popup_call2_audio_first_window_g4_ParamLimits

0xbdbe,	// (0x000b6336) popup_call2_audio_first_window_g4

0xc449,	// (0x000b69c1) popup_call2_audio_in_window_g4_ParamLimits

0xc449,	// (0x000b69c1) popup_call2_audio_in_window_g4

0x2f15,	// (0x000ad48d) aid_area_sk_bg_cut_ParamLimits

0x2f15,	// (0x000ad48d) aid_area_sk_bg_cut

0xb589,	// (0x000b5b01) aid_area_sk_bg_cut_2_ParamLimits

0xb589,	// (0x000b5b01) aid_area_sk_bg_cut_2

0x4356,	// (0x000ae8ce) aid_placing_details_win

0x435e,	// (0x000ae8d6) aid_placing_details_win_2

0xcd32,	// (0x000b72aa) camera2_autofocus_pane_g1_ParamLimits

0x02d0,	// (0x000aa848) popup_fixed_preview_cale_window_ParamLimits

0x02d0,	// (0x000aa848) popup_fixed_preview_cale_window

0xb357,	// (0x000b58cf) navi_slider_pane_g3

0xb360,	// (0x000b58d8) navi_slider_pane_g4

0xb369,	// (0x000b58e1) navi_slider_pane_g5

0xb357,	// (0x000b58cf) navi_slider_pane_g6

0x9934,	// (0x000b3eac) navi_slider_pane_g7

0xb48a,	// (0x000b5a02) mup_scale_pane_g3

0xb493,	// (0x000b5a0b) mup_scale_pane_g4

0xb49c,	// (0x000b5a14) mup_scale_pane_g5

0x2bc2,	// (0x000ad13a) mup_scale_pane_g6

0x2bcb,	// (0x000ad143) mup_scale_pane_g7

0xb357,	// (0x000b58cf) cams2_slider_pane_g3

0xc993,	// (0x000b6f0b) cams2_slider_pane_g4

0x9a6d,	// (0x000b3fe5) cams2_slider_pane_g5

0xb357,	// (0x000b58cf) cams2_slider_pane_g6

0x9a75,	// (0x000b3fed) cams2_slider_pane_g7

0xcbc0,	// (0x000b7138) camera2_autofocus_pane_cp_g1

0xc7aa,	// (0x000b6d22) bg_popup_preview_window_pane_cp02_ParamLimits

0xc7aa,	// (0x000b6d22) bg_popup_preview_window_pane_cp02

0xcee6,	// (0x000b745e) list_fp_cale_pane_ParamLimits

0xcee6,	// (0x000b745e) list_fp_cale_pane

0xcef2,	// (0x000b746a) popup_fixed_preview_cale_window_t1_ParamLimits

0xcef2,	// (0x000b746a) popup_fixed_preview_cale_window_t1

0x4bc3,	// (0x000af13b) popup_fixed_preview_cale_window_t2_ParamLimits

0x4bc3,	// (0x000af13b) popup_fixed_preview_cale_window_t2

0x4bd8,	// (0x000af150) popup_fixed_preview_cale_window_t3_ParamLimits

0x4bd8,	// (0x000af150) popup_fixed_preview_cale_window_t3

0x0002,

0xf7aa,	// (0x000b9d22) popup_fixed_preview_cale_window_t_ParamLimits

0xf7aa,	// (0x000b9d22) popup_fixed_preview_cale_window_t

0x4bed,	// (0x000af165) list_single_fp_cale_pane_ParamLimits

0x4bed,	// (0x000af165) list_single_fp_cale_pane

0xcf10,	// (0x000b7488) list_single_fp_cale_pane_g1_ParamLimits

0xcf10,	// (0x000b7488) list_single_fp_cale_pane_g1

0xcf1c,	// (0x000b7494) list_single_fp_cale_pane_g2_ParamLimits

0xcf1c,	// (0x000b7494) list_single_fp_cale_pane_g2

0x0002,

0xf7b1,	// (0x000b9d29) list_single_fp_cale_pane_g_ParamLimits

0xf7b1,	// (0x000b9d29) list_single_fp_cale_pane_g

0xcf35,	// (0x000b74ad) list_single_fp_cale_pane_t1_ParamLimits

0xcf35,	// (0x000b74ad) list_single_fp_cale_pane_t1

0xcf47,	// (0x000b74bf) list_single_fp_cale_pane_t2_ParamLimits

0xcf47,	// (0x000b74bf) list_single_fp_cale_pane_t2

0x0001,

0xf7b8,	// (0x000b9d30) list_single_fp_cale_pane_t_ParamLimits

0xf7b8,	// (0x000b9d30) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x939b,	// (0x000b3913) main_dialer_pane

0x4c04,	// (0x000af17c) aid_cell_size_keypad

0x4c0e,	// (0x000af186) dialer_ne_pane

0x4c16,	// (0x000af18e) grid_dialer_command_1_pane

0x4c1e,	// (0x000af196) grid_dialer_command_2_pane

0x4c26,	// (0x000af19e) grid_dialer_keypad_pane

0x4c38,	// (0x000af1b0) bg_popup_call_pane_cp06_ParamLimits

0x4c38,	// (0x000af1b0) bg_popup_call_pane_cp06

0x4c44,	// (0x000af1bc) dialer_ne_clear_pane_ParamLimits

0x4c44,	// (0x000af1bc) dialer_ne_clear_pane

0xcf7a,	// (0x000b74f2) dialer_ne_pane_g1

0xcf82,	// (0x000b74fa) dialer_ne_pane_t1_ParamLimits

0xcf82,	// (0x000b74fa) dialer_ne_pane_t1

0x4c50,	// (0x000af1c8) dialer_ne_pane_t2_ParamLimits

0x4c50,	// (0x000af1c8) dialer_ne_pane_t2

0x4c7a,	// (0x000af1f2) dialer_ne_pane_t3_ParamLimits

0x4c7a,	// (0x000af1f2) dialer_ne_pane_t3

0x0002,

0xf7bd,	// (0x000b9d35) dialer_ne_pane_t_ParamLimits

0xf7bd,	// (0x000b9d35) dialer_ne_pane_t

0x4caa,	// (0x000af222) dialer_ne_pane_t3_copy1_ParamLimits

0x4caa,	// (0x000af222) dialer_ne_pane_t3_copy1

0x4cd9,	// (0x000af251) cell_dialer_keypad_pane_ParamLimits

0x4cd9,	// (0x000af251) cell_dialer_keypad_pane

0x4cf0,	// (0x000af268) cell_dialer_command_1_pane_ParamLimits

0x4cf0,	// (0x000af268) cell_dialer_command_1_pane

0x4d06,	// (0x000af27e) cell_dialer_command_2_pane_ParamLimits

0x4d06,	// (0x000af27e) cell_dialer_command_2_pane

0xcf94,	// (0x000b750c) bg_button_pane_cp02_ParamLimits

0xcf94,	// (0x000b750c) bg_button_pane_cp02

0x4d15,	// (0x000af28d) cell_dialer_keypad_pane_g1_ParamLimits

0x4d15,	// (0x000af28d) cell_dialer_keypad_pane_g1

0xcf94,	// (0x000b750c) bg_button_pane_cp03_ParamLimits

0xcf94,	// (0x000b750c) bg_button_pane_cp03

0x4d2a,	// (0x000af2a2) cell_dialer_command_1_pane_g1_ParamLimits

0x4d2a,	// (0x000af2a2) cell_dialer_command_1_pane_g1

0xcfa0,	// (0x000b7518) bg_button_pane_cp04

0x4d3d,	// (0x000af2b5) cell_dialer_command_2_pane_g1

0xb346,	// (0x000b58be) bg_button_pane_cp06

0xcfa8,	// (0x000b7520) dialer_ne_clear_pane_g1

0xb222,	// (0x000b579a) navi_pane_g2

0xb250,	// (0x000b57c8) navi_pane_g3

0x0002,

0xf3e5,	// (0x000b995d) navi_pane_g

0xb2df,	// (0x000b5857) navi_pane_mv_g2

0xb306,	// (0x000b587e) navi_pane_mv_g5

0x2782,	// (0x000accfa) navi_pane_mv_t1

0xa213,	// (0x000b478b) main_clock2_pane

0x4d8a,	// (0x000af302) main_clock2_list_pane_ParamLimits

0x4d8a,	// (0x000af302) main_clock2_list_pane

0x4dc2,	// (0x000af33a) main_clock2_pane_t1_ParamLimits

0x4dc2,	// (0x000af33a) main_clock2_pane_t1

0x4e00,	// (0x000af378) main_clock2_pane_t2_ParamLimits

0x4e00,	// (0x000af378) main_clock2_pane_t2

0x0004,

0xf7c9,	// (0x000b9d41) main_clock2_pane_t_ParamLimits

0xf7c9,	// (0x000b9d41) main_clock2_pane_t

0x4e9e,	// (0x000af416) popup_clock_analogue_window_cp03_ParamLimits

0x4e9e,	// (0x000af416) popup_clock_analogue_window_cp03

0x4ec3,	// (0x000af43b) popup_clock_digital_window_cp02_ParamLimits

0x4ec3,	// (0x000af43b) popup_clock_digital_window_cp02

0x4f36,	// (0x000af4ae) main_clock2_list_single_pane_ParamLimits

0x4f36,	// (0x000af4ae) main_clock2_list_single_pane

0xb346,	// (0x000b58be) list_highlight_pane_cp05

0xcfe2,	// (0x000b755a) main_clock2_list_single_pane_t1

0x145d,	// (0x000ab9d5) popup_toolbar_window_cp04_ParamLimits

0x4380,	// (0x000ae8f8) camera2_autofocus_pane_g2_ParamLimits

0x4380,	// (0x000ae8f8) camera2_autofocus_pane_g2

0x438c,	// (0x000ae904) camera2_autofocus_pane_g3_ParamLimits

0x438c,	// (0x000ae904) camera2_autofocus_pane_g3

0x4398,	// (0x000ae910) camera2_autofocus_pane_g4_ParamLimits

0x4398,	// (0x000ae910) camera2_autofocus_pane_g4

0x43a4,	// (0x000ae91c) camera2_autofocus_pane_g5_ParamLimits

0x43a4,	// (0x000ae91c) camera2_autofocus_pane_g5

0x0004,

0xf70d,	// (0x000b9c85) camera2_autofocus_pane_g_ParamLimits

0xf70d,	// (0x000b9c85) camera2_autofocus_pane_g

0x4573,	// (0x000aeaeb) camera2_autofocus_pane_cp_g2

0x457b,	// (0x000aeaf3) camera2_autofocus_pane_cp_g3

0x4583,	// (0x000aeafb) camera2_autofocus_pane_cp_g4

0x458b,	// (0x000aeb03) camera2_autofocus_pane_cp_g5

0x0004,

0xf773,	// (0x000b9ceb) camera2_autofocus_pane_cp_g

0x4c30,	// (0x000af1a8) popup_dialer_spcha_window

0x9325,	// (0x000b389d) bg_popup_sub_pane_cp07

0xcff0,	// (0x000b7568) list_spcha_pane

0xcff8,	// (0x000b7570) list_single_spcha_pane_ParamLimits

0xcff8,	// (0x000b7570) list_single_spcha_pane

0x9325,	// (0x000b389d) list_highlight_pane_cp06

0xd009,	// (0x000b7581) list_single_spcha_pane_t1

0xc1e7,	// (0x000b675f) popup_call2_audio_out_window_g4_ParamLimits

0xc1e7,	// (0x000b675f) popup_call2_audio_out_window_g4

0x939b,	// (0x000b3913) main_imed2_pane

0x998d,	// (0x000b3f05) popup_imed_adjust2_window

0x3761,	// (0x000adcd9) popup_imed_trans_window_ParamLimits

0x3761,	// (0x000adcd9) popup_imed_trans_window

0xc9fc,	// (0x000b6f74) popup_blid_sat_info2_window_t1

0xca0a,	// (0x000b6f82) popup_blid_sat_info2_window_t2

0x000a,

0xf6a2,	// (0x000b9c1a) popup_blid_sat_info2_window_t

0x4fe0,	// (0x000af558) aid_size_cell_colour_35

0x5000,	// (0x000af578) aid_size_cell_colour_112

0x5020,	// (0x000af598) aid_size_cell_effect

0xc7b6,	// (0x000b6d2e) bg_tb_trans_pane_cp02

0xad73,	// (0x000b52eb) heading_imed_pane

0x5040,	// (0x000af5b8) listscroll_imed_pane

0xd017,	// (0x000b758f) heading_imed_pane_g1

0xd01f,	// (0x000b7597) heading_imed_pane_t1

0xd02d,	// (0x000b75a5) grid_imed_colour_35_pane_ParamLimits

0xd02d,	// (0x000b75a5) grid_imed_colour_35_pane

0x504c,	// (0x000af5c4) grid_imed_effect_pane

0xd045,	// (0x000b75bd) list_imed_aspect_pane

0x5062,	// (0x000af5da) scroll_pane_cp027_ParamLimits

0x5062,	// (0x000af5da) scroll_pane_cp027

0x5073,	// (0x000af5eb) cell_imed_effect_pane_ParamLimits

0x5073,	// (0x000af5eb) cell_imed_effect_pane

0xd04d,	// (0x000b75c5) cell_imed_colour_pane_ParamLimits

0xd04d,	// (0x000b75c5) cell_imed_colour_pane

0xd08f,	// (0x000b7607) cell_imed_colour_pane_g1_ParamLimits

0xd08f,	// (0x000b7607) cell_imed_colour_pane_g1

0xd0a0,	// (0x000b7618) hgihlgiht_grid_pane_cp016_ParamLimits

0xd0a0,	// (0x000b7618) hgihlgiht_grid_pane_cp016

0x509a,	// (0x000af612) cell_imed_effect_pane_g1

0x50a2,	// (0x000af61a) grid_highlight_pane_cp017

0xd0b1,	// (0x000b7629) list_imed_single_pane_ParamLimits

0xd0b1,	// (0x000b7629) list_imed_single_pane

0x9325,	// (0x000b389d) list_highlight_pane_cp07

0xd0c7,	// (0x000b763f) list_imed_aspect_pane_comp1_t1

0xc7b6,	// (0x000b6d2e) bg_tb_trans_pane_cp05

0xd0e9,	// (0x000b7661) popup_imed_adjust2_window_g1

0xd110,	// (0x000b7688) popup_imed_adjust2_window_t1

0xd128,	// (0x000b76a0) slider_imed_adjust_pane

0xd13c,	// (0x000b76b4) slider_imed_adjust_pane_g1

0xd14c,	// (0x000b76c4) slider_imed_adjust_pane_g2

0xd15c,	// (0x000b76d4) slider_imed_adjust_pane_g3

0xd16d,	// (0x000b76e5) slider_imed_adjust_pane_g4

0x0003,

0xf7e6,	// (0x000b9d5e) slider_imed_adjust_pane_g

0x50ab,	// (0x000af623) aid_size_cell_clipart2

0x50b7,	// (0x000af62f) grid_imed_clipart_pane

0xd17e,	// (0x000b76f6) scroll_pane_cp031

0x50c1,	// (0x000af639) cell_imed_clipart_pane_ParamLimits

0x50c1,	// (0x000af639) cell_imed_clipart_pane

0x50e5,	// (0x000af65d) cell_imed_clipart_pane_g1

0x9325,	// (0x000b389d) grid_highlight_pane_cp014

0x4d9f,	// (0x000af317) main_clock2_pane_g1_ParamLimits

0x4d9f,	// (0x000af317) main_clock2_pane_g1

0x4ee1,	// (0x000af459) aid_call2_pane_cp10

0x4ef3,	// (0x000af46b) aid_call_pane_cp10

0xb181,	// (0x000b56f9) popup_clock_analogue_window_cp10_g1

0xb181,	// (0x000b56f9) popup_clock_analogue_window_cp10_g2

0x4f05,	// (0x000af47d) popup_clock_analogue_window_cp10_g3

0x4f05,	// (0x000af47d) popup_clock_analogue_window_cp10_g4

0xb181,	// (0x000b56f9) popup_clock_analogue_window_cp10_g5

0x0004,

0xf7d4,	// (0x000b9d4c) popup_clock_analogue_window_cp10_g

0x4f17,	// (0x000af48f) popup_clock_analogue_window_cp10_t1

0x4f48,	// (0x000af4c0) clock_digital_number_pane_cp10_ParamLimits

0x4f48,	// (0x000af4c0) clock_digital_number_pane_cp10

0x4f60,	// (0x000af4d8) clock_digital_number_pane_cp11_ParamLimits

0x4f60,	// (0x000af4d8) clock_digital_number_pane_cp11

0x4f78,	// (0x000af4f0) clock_digital_number_pane_cp12_ParamLimits

0x4f78,	// (0x000af4f0) clock_digital_number_pane_cp12

0x4f90,	// (0x000af508) clock_digital_number_pane_cp13_ParamLimits

0x4f90,	// (0x000af508) clock_digital_number_pane_cp13

0x4fa8,	// (0x000af520) clock_digital_separator_pane_cp10_ParamLimits

0x4fa8,	// (0x000af520) clock_digital_separator_pane_cp10

0x4fc0,	// (0x000af538) popup_clock_digital_window_cp02_t1_ParamLimits

0x4fc0,	// (0x000af538) popup_clock_digital_window_cp02_t1

0xa127,	// (0x000b469f) clock_digital_number_pane_cp10_g1

0xa127,	// (0x000b469f) clock_digital_number_pane_cp10_g2

0x0001,

0xf7ef,	// (0x000b9d67) clock_digital_number_pane_cp10_g

0xa127,	// (0x000b469f) clock_digital_separator_pane_cp10_g1

0xa127,	// (0x000b469f) clock_digital_separator_pane_g2_cp10

0xb30e,	// (0x000b5886) navi_pane_vded_g4

0xb317,	// (0x000b588f) navi_pane_vded_g5

0xb320,	// (0x000b5898) navi_pane_vded_t1

0x939b,	// (0x000b3913) main_vded_pane

0x50ee,	// (0x000af666) main_vded_pane_g1

0x50f8,	// (0x000af670) main_vded_pane_g2

0x5102,	// (0x000af67a) main_vded_pane_g3

0x0002,

0xf7f4,	// (0x000b9d6c) main_vded_pane_g

0x510c,	// (0x000af684) main_vded_pane_t1

0x511a,	// (0x000af692) main_vded_pane_t2

0x0001,

0xf7fb,	// (0x000b9d73) main_vded_pane_t

0x5128,	// (0x000af6a0) vded_slider_pane

0x5132,	// (0x000af6aa) vded_video_pane

0xd186,	// (0x000b76fe) vded_video_pane_g1

0x513c,	// (0x000af6b4) vded_video_pane_g2

0xcbc0,	// (0x000b7138) vded_video_pane_g3

0x0002,

0xf800,	// (0x000b9d78) vded_video_pane_g

0xd190,	// (0x000b7708) vded_slider_pane_g1

0xd199,	// (0x000b7711) vded_slider_pane_g2

0xd1a2,	// (0x000b771a) vded_slider_pane_g3

0xd1ab,	// (0x000b7723) vded_slider_pane_g4

0xd1b4,	// (0x000b772c) vded_slider_pane_g5

0x0004,

0xf807,	// (0x000b9d7f) vded_slider_pane_g

0x4b0f,	// (0x000af087) mup3_rocker_pane_ParamLimits

0x4b0f,	// (0x000af087) mup3_rocker_pane

0x5145,	// (0x000af6bd) mup3_control_keys_pane_g1

0x514d,	// (0x000af6c5) mup3_control_keys_pane_g2

0x5155,	// (0x000af6cd) mup3_control_keys_pane_g3

0x515d,	// (0x000af6d5) mup3_control_keys_pane_g4

0x0003,

0xf812,	// (0x000b9d8a) mup3_control_keys_pane_g

0x0307,	// (0x000aa87f) popup_toolbar2_fixed_window_cp01_ParamLimits

0x0307,	// (0x000aa87f) popup_toolbar2_fixed_window_cp01

0x4b43,	// (0x000af0bb) popup_toolbar2_fixed_window_cp02_ParamLimits

0x4b43,	// (0x000af0bb) popup_toolbar2_fixed_window_cp02

0xbb26,	// (0x000b609e) popup_call2_audio_second_window_t4_ParamLimits

0xbb26,	// (0x000b609e) popup_call2_audio_second_window_t4

0xc054,	// (0x000b65cc) popup_call2_audio_first_window_t6_ParamLimits

0xc054,	// (0x000b65cc) popup_call2_audio_first_window_t6

0xc2f6,	// (0x000b686e) popup_call2_audio_out_window_t6_ParamLimits

0xc2f6,	// (0x000b686e) popup_call2_audio_out_window_t6

0x939b,	// (0x000b3913) main_vitu_pane

0x516d,	// (0x000af6e5) aid_size_cell_itu_ParamLimits

0x516d,	// (0x000af6e5) aid_size_cell_itu

0xa5de,	// (0x000b4b56) bg_popup_window_pane_cp08_ParamLimits

0xa5de,	// (0x000b4b56) bg_popup_window_pane_cp08

0x5183,	// (0x000af6fb) field_vitu_entry_pane_ParamLimits

0x5183,	// (0x000af6fb) field_vitu_entry_pane

0x519a,	// (0x000af712) grid_vitu_function_pane_ParamLimits

0x519a,	// (0x000af712) grid_vitu_function_pane

0x51b5,	// (0x000af72d) grid_vitu_itu_pane_ParamLimits

0x51b5,	// (0x000af72d) grid_vitu_itu_pane

0x51d3,	// (0x000af74b) cell_vitu_itu_pane_ParamLimits

0x51d3,	// (0x000af74b) cell_vitu_itu_pane

0x51f7,	// (0x000af76f) cell_vitu_function_pane_ParamLimits

0x51f7,	// (0x000af76f) cell_vitu_function_pane

0xa5de,	// (0x000b4b56) bg_popup_sub_pane_cp08_ParamLimits

0xa5de,	// (0x000b4b56) bg_popup_sub_pane_cp08

0x5212,	// (0x000af78a) field_vitu_entry_pane_t1_ParamLimits

0x5212,	// (0x000af78a) field_vitu_entry_pane_t1

0xd1d5,	// (0x000b774d) field_vitu_entry_pane_t2_ParamLimits

0xd1d5,	// (0x000b774d) field_vitu_entry_pane_t2

0x0001,

0xf820,	// (0x000b9d98) field_vitu_entry_pane_t_ParamLimits

0xf820,	// (0x000b9d98) field_vitu_entry_pane_t

0xd1f2,	// (0x000b776a) bg_button_pane_cp05_ParamLimits

0xd1f2,	// (0x000b776a) bg_button_pane_cp05

0x5231,	// (0x000af7a9) cell_vitu_itu_pane_g1

0x5249,	// (0x000af7c1) cell_vitu_itu_pane_t1_ParamLimits

0x5249,	// (0x000af7c1) cell_vitu_itu_pane_t1

0x525b,	// (0x000af7d3) cell_vitu_itu_pane_t2_ParamLimits

0x525b,	// (0x000af7d3) cell_vitu_itu_pane_t2

0x0002,

0xf825,	// (0x000b9d9d) cell_vitu_itu_pane_t_ParamLimits

0xf825,	// (0x000b9d9d) cell_vitu_itu_pane_t

0xd200,	// (0x000b7778) bg_button_pane_cp07

0x529e,	// (0x000af816) cell_vitu_function_pane_g1

0x97da,	// (0x000b3d52) main_calc_pane_g1

0x011e,	// (0x000aa696) aid_visual_content_pane

0x939b,	// (0x000b3913) main_vradio_pane

0x52a7,	// (0x000af81f) main_vradio_pane_g1_ParamLimits

0x52a7,	// (0x000af81f) main_vradio_pane_g1

0xd20a,	// (0x000b7782) main_vradio_pane_g2_ParamLimits

0xd20a,	// (0x000b7782) main_vradio_pane_g2

0x0001,

0xf82c,	// (0x000b9da4) main_vradio_pane_g_ParamLimits

0xf82c,	// (0x000b9da4) main_vradio_pane_g

0x52c0,	// (0x000af838) main_vradio_pane_t1_ParamLimits

0x52c0,	// (0x000af838) main_vradio_pane_t1

0x52d5,	// (0x000af84d) main_vradio_pane_t2_ParamLimits

0x52d5,	// (0x000af84d) main_vradio_pane_t2

0xd217,	// (0x000b778f) main_vradio_pane_t3_ParamLimits

0xd217,	// (0x000b778f) main_vradio_pane_t3

0x0002,

0xf831,	// (0x000b9da9) main_vradio_pane_t_ParamLimits

0xf831,	// (0x000b9da9) main_vradio_pane_t

0x52ea,	// (0x000af862) vradio_rocker_control_pane_ParamLimits

0x52ea,	// (0x000af862) vradio_rocker_control_pane

0x52fc,	// (0x000af874) vradio_station_info_pane_ParamLimits

0x52fc,	// (0x000af874) vradio_station_info_pane

0xd22b,	// (0x000b77a3) vradio_frequency_info_pane_ParamLimits

0xd22b,	// (0x000b77a3) vradio_frequency_info_pane

0xcbc0,	// (0x000b7138) vradio_station_info_pane_g1

0xd23a,	// (0x000b77b2) vradio_station_info_pane_t1_ParamLimits

0xd23a,	// (0x000b77b2) vradio_station_info_pane_t1

0xd25c,	// (0x000b77d4) vradio_station_info_pane_t2_ParamLimits

0xd25c,	// (0x000b77d4) vradio_station_info_pane_t2

0x0001,

0xf838,	// (0x000b9db0) vradio_station_info_pane_t_ParamLimits

0xf838,	// (0x000b9db0) vradio_station_info_pane_t

0xd26e,	// (0x000b77e6) vradio_tuning_pane

0xd276,	// (0x000b77ee) vradio_rocker_control_pane_g1

0xd27e,	// (0x000b77f6) vradio_rocker_control_pane_g2

0xd286,	// (0x000b77fe) vradio_rocker_control_pane_g3

0xd28e,	// (0x000b7806) vradio_rocker_control_pane_g4

0xd296,	// (0x000b780e) vradio_rocker_control_pane_g5

0x0004,

0xf83d,	// (0x000b9db5) vradio_rocker_control_pane_g

0x530e,	// (0x000af886) vradio_frequency_info_pane_g1

0xd29e,	// (0x000b7816) vradio_frequency_info_pane_t1_ParamLimits

0xd29e,	// (0x000b7816) vradio_frequency_info_pane_t1

0x5318,	// (0x000af890) vradio_tuning_pane_g1

0x5323,	// (0x000af89b) vradio_tuning_pane_t1

0x934b,	// (0x000b38c3) area_side_right_pane_ParamLimits

0x934b,	// (0x000b38c3) area_side_right_pane

0xc771,	// (0x000b6ce9) status_small_pane_g1

0xc779,	// (0x000b6cf1) status_small_pane_g2

0xc782,	// (0x000b6cfa) status_small_pane_g3

0xc78b,	// (0x000b6d03) status_small_pane_g4

0x0003,

0xf5f8,	// (0x000b9b70) status_small_pane_g

0xc794,	// (0x000b6d0c) status_small_pane_t1

0x939b,	// (0x000b3913) main_video3_pane

0xd2b2,	// (0x000b782a) cams_zoom_vslider_pane

0xd2ba,	// (0x000b7832) image3_wide_pane_ParamLimits

0xd2ba,	// (0x000b7832) image3_wide_pane

0xd2d4,	// (0x000b784c) image3_wide_small_pane

0xd2e0,	// (0x000b7858) main_video3_pane_g1_ParamLimits

0xd2e0,	// (0x000b7858) main_video3_pane_g1

0xd2fc,	// (0x000b7874) main_video3_pane_g2_ParamLimits

0xd2fc,	// (0x000b7874) main_video3_pane_g2

0x0001,

0xf848,	// (0x000b9dc0) main_video3_pane_g_ParamLimits

0xf848,	// (0x000b9dc0) main_video3_pane_g

0xd318,	// (0x000b7890) main_video3_pane_t1_ParamLimits

0xd318,	// (0x000b7890) main_video3_pane_t1

0xd343,	// (0x000b78bb) main_video3_pane_t2_ParamLimits

0xd343,	// (0x000b78bb) main_video3_pane_t2

0xd36e,	// (0x000b78e6) main_video3_pane_t3_ParamLimits

0xd36e,	// (0x000b78e6) main_video3_pane_t3

0x0002,

0xf84d,	// (0x000b9dc5) main_video3_pane_t_ParamLimits

0xf84d,	// (0x000b9dc5) main_video3_pane_t

0xd39b,	// (0x000b7913) cams_zoom_vslider_pane_g1

0xd3a4,	// (0x000b791c) cams_zoom_vslider_pane_g2

0x0001,

0xf854,	// (0x000b9dcc) cams_zoom_vslider_pane_g

0xd3ac,	// (0x000b7924) small_slider_vertical_pane

0xcbc0,	// (0x000b7138) small_slider_vertical_pane_g1

0xcbc0,	// (0x000b7138) small_slider_vertical_pane_g2

0xd3b4,	// (0x000b792c) small_slider_vertical_pane_g3

0x0002,

0xf859,	// (0x000b9dd1) small_slider_vertical_pane_g

0x939b,	// (0x000b3913) main_hwr_training_pane

0xd3bd,	// (0x000b7935) hwr_training_instruct_pane_ParamLimits

0xd3bd,	// (0x000b7935) hwr_training_instruct_pane

0x5332,	// (0x000af8aa) hwr_training_navi_pane_ParamLimits

0x5332,	// (0x000af8aa) hwr_training_navi_pane

0x5351,	// (0x000af8c9) hwr_training_write_pane_ParamLimits

0x5351,	// (0x000af8c9) hwr_training_write_pane

0x9325,	// (0x000b389d) bg_frame_shadow_pane

0xd3f4,	// (0x000b796c) hwr_training_write_pane_g1

0xd3fc,	// (0x000b7974) hwr_training_write_pane_g2

0xd404,	// (0x000b797c) hwr_training_write_pane_g3

0xd40c,	// (0x000b7984) hwr_training_write_pane_g4

0xd414,	// (0x000b798c) hwr_training_write_pane_g5

0xd41c,	// (0x000b7994) hwr_training_write_pane_g6

0xd424,	// (0x000b799c) hwr_training_write_pane_g7

0x0006,

0xf860,	// (0x000b9dd8) hwr_training_write_pane_g

0x9a7e,	// (0x000b3ff6) hwr_training_navi_pane_g1_ParamLimits

0x9a7e,	// (0x000b3ff6) hwr_training_navi_pane_g1

0x9a90,	// (0x000b4008) hwr_training_navi_pane_g2_ParamLimits

0x9a90,	// (0x000b4008) hwr_training_navi_pane_g2

0x9aa2,	// (0x000b401a) hwr_training_navi_pane_g3_ParamLimits

0x9aa2,	// (0x000b401a) hwr_training_navi_pane_g3

0x9ab2,	// (0x000b402a) hwr_training_navi_pane_g4_ParamLimits

0x9ab2,	// (0x000b402a) hwr_training_navi_pane_g4

0x0004,

0xf86f,	// (0x000b9de7) hwr_training_navi_pane_g_ParamLimits

0xf86f,	// (0x000b9de7) hwr_training_navi_pane_g

0x9abf,	// (0x000b4037) hwr_training_navi_pane_t1

0x539b,	// (0x000af913) list_single_hwr_training_instruct_pane_ParamLimits

0x539b,	// (0x000af913) list_single_hwr_training_instruct_pane

0xd42c,	// (0x000b79a4) list_single_hwr_training_instruct_pane_t1

0xcb00,	// (0x000b7078) bg_frame_shadow_pane_g1

0xd43b,	// (0x000b79b3) bg_frame_shadow_pane_g2

0xd443,	// (0x000b79bb) bg_frame_shadow_pane_g3

0xd44b,	// (0x000b79c3) bg_frame_shadow_pane_g4

0xd453,	// (0x000b79cb) bg_frame_shadow_pane_g5

0xd45b,	// (0x000b79d3) bg_frame_shadow_pane_g6

0xd463,	// (0x000b79db) bg_frame_shadow_pane_g7

0xa2de,	// (0x000b4856) bg_frame_shadow_pane_g8

0x0007,

0xf87a,	// (0x000b9df2) bg_frame_shadow_pane_g

0x939b,	// (0x000b3913) main_video_tele_dialer_pane

0x53b2,	// (0x000af92a) aid_size_cell_video_keypad_ParamLimits

0x53b2,	// (0x000af92a) aid_size_cell_video_keypad

0x53cc,	// (0x000af944) grid_video_dialer_keypad_pane_ParamLimits

0x53cc,	// (0x000af944) grid_video_dialer_keypad_pane

0x541a,	// (0x000af992) video_down_pane_cp_ParamLimits

0x541a,	// (0x000af992) video_down_pane_cp

0x544c,	// (0x000af9c4) cell_video_dialer_keypad_pane_ParamLimits

0x544c,	// (0x000af9c4) cell_video_dialer_keypad_pane

0xd46b,	// (0x000b79e3) bg_button_pane_cp08_ParamLimits

0xd46b,	// (0x000b79e3) bg_button_pane_cp08

0x546e,	// (0x000af9e6) cell_video_dialer_keypad_pane_g1_ParamLimits

0x546e,	// (0x000af9e6) cell_video_dialer_keypad_pane_g1

0x4af9,	// (0x000af071) mup3_rocker2_pane_ParamLimits

0x4af9,	// (0x000af071) mup3_rocker2_pane

0xcbc0,	// (0x000b7138) mup3_rocker2_pane_g1

0x364a,	// (0x000adbc2) main_dialer2_pane

0x939b,	// (0x000b3913) main_mp4_pane

0x9ad5,	// (0x000b404d) main_mp4_pane_g1_ParamLimits

0x9ad5,	// (0x000b404d) main_mp4_pane_g1

0x9ad5,	// (0x000b404d) main_mp4_pane_g2_ParamLimits

0x9ad5,	// (0x000b404d) main_mp4_pane_g2

0x54a9,	// (0x000afa21) main_mp4_pane_g3_ParamLimits

0x54a9,	// (0x000afa21) main_mp4_pane_g3

0x9ae3,	// (0x000b405b) main_mp4_pane_g4_ParamLimits

0x9ae3,	// (0x000b405b) main_mp4_pane_g4

0x9b0b,	// (0x000b4083) main_mp4_pane_g5_ParamLimits

0x9b0b,	// (0x000b4083) main_mp4_pane_g5

0x0005,

0xf89a,	// (0x000b9e12) main_mp4_pane_g_ParamLimits

0xf89a,	// (0x000b9e12) main_mp4_pane_g

0x9b5b,	// (0x000b40d3) main_mp4_pane_t1_ParamLimits

0x9b5b,	// (0x000b40d3) main_mp4_pane_t1

0x9bb7,	// (0x000b412f) main_mp4_pane_t2_ParamLimits

0x9bb7,	// (0x000b412f) main_mp4_pane_t2

0xd477,	// (0x000b79ef) main_mp4_pane_t3_ParamLimits

0xd477,	// (0x000b79ef) main_mp4_pane_t3

0x9c09,	// (0x000b4181) main_mp4_pane_t4_ParamLimits

0x9c09,	// (0x000b4181) main_mp4_pane_t4

0x0003,

0xf8a7,	// (0x000b9e1f) main_mp4_pane_t_ParamLimits

0xf8a7,	// (0x000b9e1f) main_mp4_pane_t

0x9c4d,	// (0x000b41c5) mp4_progress_pane_ParamLimits

0x9c4d,	// (0x000b41c5) mp4_progress_pane

0x9c97,	// (0x000b420f) mp4_rocker_pane_ParamLimits

0x9c97,	// (0x000b420f) mp4_rocker_pane

0xd49f,	// (0x000b7a17) mp4_progress_pane_t1

0xd4b8,	// (0x000b7a30) mp4_progress_pane_t2

0x0001,

0xf8b0,	// (0x000b9e28) mp4_progress_pane_t

0xd4d1,	// (0x000b7a49) mup_progress_pane_cp04

0xd4dd,	// (0x000b7a55) mp4_rocker_pane_g1

0x54e5,	// (0x000afa5d) aid_cell_size_keypad2_ParamLimits

0x54e5,	// (0x000afa5d) aid_cell_size_keypad2

0x54fb,	// (0x000afa73) dialer2_ne_pane_ParamLimits

0x54fb,	// (0x000afa73) dialer2_ne_pane

0x5515,	// (0x000afa8d) grid_dialer2_keypad_pane_ParamLimits

0x5515,	// (0x000afa8d) grid_dialer2_keypad_pane

0xc9a3,	// (0x000b6f1b) bg_popup_call_pane_cp07_ParamLimits

0xc9a3,	// (0x000b6f1b) bg_popup_call_pane_cp07

0x5533,	// (0x000afaab) dialer2_ne_pane_t1_ParamLimits

0x5533,	// (0x000afaab) dialer2_ne_pane_t1

0x5570,	// (0x000afae8) cell_dialer2_keypad_pane_ParamLimits

0x5570,	// (0x000afae8) cell_dialer2_keypad_pane

0xd4f9,	// (0x000b7a71) bg_button_pane_pane_cp04_ParamLimits

0xd4f9,	// (0x000b7a71) bg_button_pane_pane_cp04

0x5592,	// (0x000afb0a) cell_dialer2_keypad_pane_g1_ParamLimits

0x5592,	// (0x000afb0a) cell_dialer2_keypad_pane_g1

0x1331,	// (0x000ab8a9) aid_placing_vt_set_content_ParamLimits

0x1331,	// (0x000ab8a9) aid_placing_vt_set_content

0x1359,	// (0x000ab8d1) aid_placing_vt_set_title_ParamLimits

0x1359,	// (0x000ab8d1) aid_placing_vt_set_title

0x939b,	// (0x000b3913) main_image3_pane

0x5658,	// (0x000afbd0) area_side_right_pane_cp01_ParamLimits

0x5658,	// (0x000afbd0) area_side_right_pane_cp01

0x9ad5,	// (0x000b404d) main_image3_pane_g1_ParamLimits

0x9ad5,	// (0x000b404d) main_image3_pane_g1

0x566f,	// (0x000afbe7) main_image3_pane_g2_ParamLimits

0x566f,	// (0x000afbe7) main_image3_pane_g2

0x5697,	// (0x000afc0f) main_image3_pane_g3_ParamLimits

0x5697,	// (0x000afc0f) main_image3_pane_g3

0x56c1,	// (0x000afc39) main_image3_pane_g4_ParamLimits

0x56c1,	// (0x000afc39) main_image3_pane_g4

0x0003,

0xf8bf,	// (0x000b9e37) main_image3_pane_g_ParamLimits

0xf8bf,	// (0x000b9e37) main_image3_pane_g

0x56eb,	// (0x000afc63) main_image3_pane_t1_ParamLimits

0x56eb,	// (0x000afc63) main_image3_pane_t1

0x5743,	// (0x000afcbb) main_image3_pane_t2_ParamLimits

0x5743,	// (0x000afcbb) main_image3_pane_t2

0x5795,	// (0x000afd0d) main_image3_pane_t3_ParamLimits

0x5795,	// (0x000afd0d) main_image3_pane_t3

0x0003,

0xf8c8,	// (0x000b9e40) main_image3_pane_t_ParamLimits

0xf8c8,	// (0x000b9e40) main_image3_pane_t

0xa5de,	// (0x000b4b56) grid_sctrl_middle_pane_cp01_ParamLimits

0xa5de,	// (0x000b4b56) grid_sctrl_middle_pane_cp01

0x581d,	// (0x000afd95) cell_sctrl_middle_pane_cp01_ParamLimits

0x581d,	// (0x000afd95) cell_sctrl_middle_pane_cp01

0x583a,	// (0x000afdb2) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x583a,	// (0x000afdb2) cell_sctrl_middle_pane_cp01_g1

0x939b,	// (0x000b3913) main_call4_pane

0x5850,	// (0x000afdc8) aid_size_button_call4_ParamLimits

0x5850,	// (0x000afdc8) aid_size_button_call4

0x5881,	// (0x000afdf9) call4_windows_pane_ParamLimits

0x5881,	// (0x000afdf9) call4_windows_pane

0x58a1,	// (0x000afe19) grid_call4_button_pane_ParamLimits

0x58a1,	// (0x000afe19) grid_call4_button_pane

0xd505,	// (0x000b7a7d) call4_windows_conf_pane

0xd51a,	// (0x000b7a92) popup_call4_audio_first_window_ParamLimits

0xd51a,	// (0x000b7a92) popup_call4_audio_first_window

0xd566,	// (0x000b7ade) popup_call4_audio_second_window_ParamLimits

0xd566,	// (0x000b7ade) popup_call4_audio_second_window

0xd57a,	// (0x000b7af2) popup_call4_audio_wait_window_ParamLimits

0xd57a,	// (0x000b7af2) popup_call4_audio_wait_window

0x58ce,	// (0x000afe46) cell_call4_button_pane_ParamLimits

0x58ce,	// (0x000afe46) cell_call4_button_pane

0x58f7,	// (0x000afe6f) bg_button_pane_cp09_ParamLimits

0x58f7,	// (0x000afe6f) bg_button_pane_cp09

0x5903,	// (0x000afe7b) cell_call4_button_pane_g1_ParamLimits

0x5903,	// (0x000afe7b) cell_call4_button_pane_g1

0x5929,	// (0x000afea1) cell_call4_button_pane_t1_ParamLimits

0x5929,	// (0x000afea1) cell_call4_button_pane_t1

0xd5c2,	// (0x000b7b3a) popup_call4_audio_conf_window_ParamLimits

0xd5c2,	// (0x000b7b3a) popup_call4_audio_conf_window

0x4b59,	// (0x000af0d1) mup3_progress_pane_t1_ParamLimits

0x4b78,	// (0x000af0f0) mup3_progress_pane_t2_ParamLimits

0xcea3,	// (0x000b741b) mup3_progress_pane_t3_ParamLimits

0xf79c,	// (0x000b9d14) mup3_progress_pane_t_ParamLimits

0xcec0,	// (0x000b7438) mup_progress_pane_cp03_ParamLimits

0x5165,	// (0x000af6dd) mup3_control_keys_pane_g4_copy1

0x9c7b,	// (0x000b41f3) mp4_rocker2_pane_ParamLimits

0x9c7b,	// (0x000b41f3) mp4_rocker2_pane

0xd5d6,	// (0x000b7b4e) mp4_rocker2_pane_g1

0xd5de,	// (0x000b7b56) mp4_rocker2_pane_g2

0x9ce9,	// (0x000b4261) mp4_rocker2_pane_g3

0x9cf1,	// (0x000b4269) mp4_rocker2_pane_g4

0x9cf9,	// (0x000b4271) mp4_rocker2_pane_g5

0x0004,

0xf8d1,	// (0x000b9e49) mp4_rocker2_pane_g

0x939b,	// (0x000b3913) main_camera4_pane

0x939b,	// (0x000b3913) main_video4_pane

0x53e8,	// (0x000af960) main_video_tele_dialer_pane_t1_ParamLimits

0x53e8,	// (0x000af960) main_video_tele_dialer_pane_t1

0x5401,	// (0x000af979) main_video_tele_dialer_pane_t2_ParamLimits

0x5401,	// (0x000af979) main_video_tele_dialer_pane_t2

0x0001,

0xf88b,	// (0x000b9e03) main_video_tele_dialer_pane_t_ParamLimits

0xf88b,	// (0x000b9e03) main_video_tele_dialer_pane_t

0x5967,	// (0x000afedf) cam4_autofocus_pane_ParamLimits

0x5967,	// (0x000afedf) cam4_autofocus_pane

0x597d,	// (0x000afef5) cam4_image_uncrop_pane_ParamLimits

0x597d,	// (0x000afef5) cam4_image_uncrop_pane

0x5997,	// (0x000aff0f) cam4_indicators_pane_ParamLimits

0x5997,	// (0x000aff0f) cam4_indicators_pane

0x59c2,	// (0x000aff3a) main_camera4_pane_g1_ParamLimits

0x59c2,	// (0x000aff3a) main_camera4_pane_g1

0x59d4,	// (0x000aff4c) main_camera4_pane_g2_ParamLimits

0x59d4,	// (0x000aff4c) main_camera4_pane_g2

0x59e7,	// (0x000aff5f) main_camera4_pane_g3_ParamLimits

0x59e7,	// (0x000aff5f) main_camera4_pane_g3

0x59fa,	// (0x000aff72) main_camera4_pane_g4_ParamLimits

0x59fa,	// (0x000aff72) main_camera4_pane_g4

0x5a0d,	// (0x000aff85) main_camera4_pane_g5_ParamLimits

0x5a0d,	// (0x000aff85) main_camera4_pane_g5

0x0005,

0xf8dc,	// (0x000b9e54) main_camera4_pane_g_ParamLimits

0xf8dc,	// (0x000b9e54) main_camera4_pane_g

0x5a31,	// (0x000affa9) main_camera4_pane_t1_ParamLimits

0x5a31,	// (0x000affa9) main_camera4_pane_t1

0x9d1d,	// (0x000b4295) bg_tb_trans_pane_cp06

0x9d33,	// (0x000b42ab) cam4_indicators_pane_g1

0x9d44,	// (0x000b42bc) cam4_indicators_pane_g2

0x0002,

0xf8f7,	// (0x000b9e6f) cam4_indicators_pane_g

0x9d62,	// (0x000b42da) cam4_indicators_pane_t1

0x5a95,	// (0x000b000d) main_video4_pane_g1_ParamLimits

0x5a95,	// (0x000b000d) main_video4_pane_g1

0x5aa4,	// (0x000b001c) main_video4_pane_g2_ParamLimits

0x5aa4,	// (0x000b001c) main_video4_pane_g2

0x5ab3,	// (0x000b002b) main_video4_pane_g3_ParamLimits

0x5ab3,	// (0x000b002b) main_video4_pane_g3

0x5ac2,	// (0x000b003a) main_video4_pane_g4_ParamLimits

0x5ac2,	// (0x000b003a) main_video4_pane_g4

0x0004,

0xf8fe,	// (0x000b9e76) main_video4_pane_g_ParamLimits

0xf8fe,	// (0x000b9e76) main_video4_pane_g

0x5ae0,	// (0x000b0058) vid4_indicators_pane_ParamLimits

0x5ae0,	// (0x000b0058) vid4_indicators_pane

0x5b0e,	// (0x000b0086) video4_image_uncrop_cif_pane_ParamLimits

0x5b0e,	// (0x000b0086) video4_image_uncrop_cif_pane

0x5b28,	// (0x000b00a0) video4_image_uncrop_nhd_pane_ParamLimits

0x5b28,	// (0x000b00a0) video4_image_uncrop_nhd_pane

0x597d,	// (0x000afef5) video4_image_uncrop_vga_pane_ParamLimits

0x597d,	// (0x000afef5) video4_image_uncrop_vga_pane

0x938d,	// (0x000b3905) bg_tb_trans_pane_cp07

0x9d8c,	// (0x000b4304) vid4_indicators_pane_g1

0x9da0,	// (0x000b4318) vid4_indicators_pane_g2

0x9db4,	// (0x000b432c) vid4_indicators_pane_g3

0x0004,

0xf909,	// (0x000b9e81) vid4_indicators_pane_g

0x9de1,	// (0x000b4359) vid4_indicators_pane_t1

0x5b3c,	// (0x000b00b4) cam4_autofocus_pane_g1

0x5b44,	// (0x000b00bc) cam4_autofocus_pane_g2

0x5b4c,	// (0x000b00c4) cam4_autofocus_pane_g3

0x0002,

0xf914,	// (0x000b9e8c) cam4_autofocus_pane_g

0x5b54,	// (0x000b00cc) cam4_autofocus_pane_g3_copy1

0x5430,	// (0x000af9a8) video_down_pane_cp_t1

0x543e,	// (0x000af9b6) video_down_pane_cp_t2

0x0001,

0xf890,	// (0x000b9e08) video_down_pane_cp_t

0x938d,	// (0x000b3905) popup_vitu2_window_ParamLimits

0x938d,	// (0x000b3905) popup_vitu2_window

0x5b5c,	// (0x000b00d4) aid_size_cell2_itu2_ParamLimits

0x5b5c,	// (0x000b00d4) aid_size_cell2_itu2

0x5b82,	// (0x000b00fa) aid_size_cell_itu2_ParamLimits

0x5b82,	// (0x000b00fa) aid_size_cell_itu2

0x5bde,	// (0x000b0156) bg_popup_window_pane_cp09_ParamLimits

0x5bde,	// (0x000b0156) bg_popup_window_pane_cp09

0x5bec,	// (0x000b0164) field_vitu2_entry_pane_ParamLimits

0x5bec,	// (0x000b0164) field_vitu2_entry_pane

0x5c12,	// (0x000b018a) grid_vitu2_function_pane_ParamLimits

0x5c12,	// (0x000b018a) grid_vitu2_function_pane

0x5c63,	// (0x000b01db) grid_vitu2_itu_pane_ParamLimits

0x5c63,	// (0x000b01db) grid_vitu2_itu_pane

0x5cf4,	// (0x000b026c) cell_vitu2_itu_pane_ParamLimits

0x5cf4,	// (0x000b026c) cell_vitu2_itu_pane

0x5d18,	// (0x000b0290) cell_vitu2_function_pane_ParamLimits

0x5d18,	// (0x000b0290) cell_vitu2_function_pane

0xd5f8,	// (0x000b7b70) bg_popup_call_pane_cp08_ParamLimits

0xd5f8,	// (0x000b7b70) bg_popup_call_pane_cp08

0xd60f,	// (0x000b7b87) field_vitu2_entry_pane_g1

0xd61b,	// (0x000b7b93) field_vitu2_entry_pane_g2

0x0002,

0xf91b,	// (0x000b9e93) field_vitu2_entry_pane_g

0xa660,	// (0x000b4bd8) field_vitu2_entry_pane_t1_ParamLimits

0xa660,	// (0x000b4bd8) field_vitu2_entry_pane_t1

0xa68c,	// (0x000b4c04) field_vitu2_entry_pane_t2_ParamLimits

0xa68c,	// (0x000b4c04) field_vitu2_entry_pane_t2

0x0001,

0xf922,	// (0x000b9e9a) field_vitu2_entry_pane_t_ParamLimits

0xf922,	// (0x000b9e9a) field_vitu2_entry_pane_t

0x5d57,	// (0x000b02cf) bg_button_pane_cp010_ParamLimits

0x5d57,	// (0x000b02cf) bg_button_pane_cp010

0x5d65,	// (0x000b02dd) cell_vitu2_itu_pane_g1

0x5d90,	// (0x000b0308) cell_vitu2_itu_pane_t1_ParamLimits

0x5d90,	// (0x000b0308) cell_vitu2_itu_pane_t1

0x0006,	// (0x000aa57e) cell_vitu2_itu_pane_t2_ParamLimits

0x0006,	// (0x000aa57e) cell_vitu2_itu_pane_t2

0x0002,

0xf92c,	// (0x000b9ea4) cell_vitu2_itu_pane_t_ParamLimits

0xf92c,	// (0x000b9ea4) cell_vitu2_itu_pane_t

0x938d,	// (0x000b3905) bg_button_pane_cp011

0x5dee,	// (0x000b0366) cell_vitu2_function_pane_g1

0x939b,	// (0x000b3913) main_myfav_hc_pane

0x57e5,	// (0x000afd5d) popup_image3_note_pane_ParamLimits

0x57e5,	// (0x000afd5d) popup_image3_note_pane

0x5801,	// (0x000afd79) popup_image3_tool_bar_pane_ParamLimits

0x5801,	// (0x000afd79) popup_image3_tool_bar_pane

0x008a,	// (0x000aa602) cell_vitu2_itu_pane_t3_ParamLimits

0x008a,	// (0x000aa602) cell_vitu2_itu_pane_t3

0x9325,	// (0x000b389d) bg_popup_trans_pane

0xd63d,	// (0x000b7bb5) grid_image3_tool_bar_pane

0xd647,	// (0x000b7bbf) bg_popup_trans_pane_g1

0xab23,	// (0x000b509b) bg_popup_trans_pane_g2

0xd64f,	// (0x000b7bc7) bg_popup_trans_pane_g3

0xd657,	// (0x000b7bcf) bg_popup_trans_pane_g4

0xd65f,	// (0x000b7bd7) bg_popup_trans_pane_g5

0xd667,	// (0x000b7bdf) bg_popup_trans_pane_g6

0xd66f,	// (0x000b7be7) bg_popup_trans_pane_g7

0xd677,	// (0x000b7bef) bg_popup_trans_pane_g8

0xab03,	// (0x000b507b) bg_popup_trans_pane_g9

0x0008,

0xf933,	// (0x000b9eab) bg_popup_trans_pane_g

0xd67f,	// (0x000b7bf7) cell_image3_tool_bar_pane_ParamLimits

0xd67f,	// (0x000b7bf7) cell_image3_tool_bar_pane

0xcbc0,	// (0x000b7138) cell_image3_tool_bar_pane_g1

0x9325,	// (0x000b389d) bg_popup_trans_pane_cp1

0xd693,	// (0x000b7c0b) popup_image3_note_pane_t1

0xd6a1,	// (0x000b7c19) popup_image3_note_pane_t2

0xd6af,	// (0x000b7c27) popup_image3_note_pane_t3

0x0002,

0xf946,	// (0x000b9ebe) popup_image3_note_pane_t

0xd6bd,	// (0x000b7c35) popup_image3_note_pane_t3_copy1

0x5e02,	// (0x000b037a) bg_myfav_hc_instruction_pane_ParamLimits

0x5e02,	// (0x000b037a) bg_myfav_hc_instruction_pane

0x5e18,	// (0x000b0390) cell_myfav_contact_pane_ParamLimits

0x5e18,	// (0x000b0390) cell_myfav_contact_pane

0x5e36,	// (0x000b03ae) cell_myfav_contact_pane_cp1_ParamLimits

0x5e36,	// (0x000b03ae) cell_myfav_contact_pane_cp1

0x5e4e,	// (0x000b03c6) cell_myfav_contact_pane_cp2_ParamLimits

0x5e4e,	// (0x000b03c6) cell_myfav_contact_pane_cp2

0x5e66,	// (0x000b03de) cell_myfav_contact_pane_cp3_ParamLimits

0x5e66,	// (0x000b03de) cell_myfav_contact_pane_cp3

0x5e7d,	// (0x000b03f5) cell_myfav_contact_pane_cp4_ParamLimits

0x5e7d,	// (0x000b03f5) cell_myfav_contact_pane_cp4

0x5e95,	// (0x000b040d) cell_myfav_contact_pane_cp5_ParamLimits

0x5e95,	// (0x000b040d) cell_myfav_contact_pane_cp5

0x5ea9,	// (0x000b0421) cell_myfav_contact_pane_cp6_ParamLimits

0x5ea9,	// (0x000b0421) cell_myfav_contact_pane_cp6

0x5ebf,	// (0x000b0437) cell_myfav_contact_pane_cp7_ParamLimits

0x5ebf,	// (0x000b0437) cell_myfav_contact_pane_cp7

0xd6cb,	// (0x000b7c43) listscroll_gen_pane_cp05

0x5ed9,	// (0x000b0451) main_myfav_hc_pane_g1_ParamLimits

0x5ed9,	// (0x000b0451) main_myfav_hc_pane_g1

0x5ef3,	// (0x000b046b) main_myfav_hc_pane_g2_ParamLimits

0x5ef3,	// (0x000b046b) main_myfav_hc_pane_g2

0x0002,

0xf94d,	// (0x000b9ec5) main_myfav_hc_pane_g_ParamLimits

0xf94d,	// (0x000b9ec5) main_myfav_hc_pane_g

0x5f25,	// (0x000b049d) main_myfav_hc_pane_t1_ParamLimits

0x5f25,	// (0x000b049d) main_myfav_hc_pane_t1

0xd6d4,	// (0x000b7c4c) main_myfav_hc_pane_t2_ParamLimits

0xd6d4,	// (0x000b7c4c) main_myfav_hc_pane_t2

0xd6e6,	// (0x000b7c5e) main_myfav_hc_pane_t3_ParamLimits

0xd6e6,	// (0x000b7c5e) main_myfav_hc_pane_t3

0x5f3c,	// (0x000b04b4) main_myfav_hc_pane_t4_ParamLimits

0x5f3c,	// (0x000b04b4) main_myfav_hc_pane_t4

0x0004,

0xf954,	// (0x000b9ecc) main_myfav_hc_pane_t_ParamLimits

0xf954,	// (0x000b9ecc) main_myfav_hc_pane_t

0xcbc0,	// (0x000b7138) bg_myfav_hc_instruction_pane_g1

0xd6f8,	// (0x000b7c70) cell_myfav_contact_pane_g1_ParamLimits

0xd6f8,	// (0x000b7c70) cell_myfav_contact_pane_g1

0xd6f8,	// (0x000b7c70) cell_myfav_contact_pane_g2_ParamLimits

0xd6f8,	// (0x000b7c70) cell_myfav_contact_pane_g2

0xd704,	// (0x000b7c7c) cell_myfav_contact_pane_g3_ParamLimits

0xd704,	// (0x000b7c7c) cell_myfav_contact_pane_g3

0xce8d,	// (0x000b7405) cell_myfav_contact_pane_g4_ParamLimits

0xce8d,	// (0x000b7405) cell_myfav_contact_pane_g4

0xd711,	// (0x000b7c89) cell_myfav_contact_pane_g5_ParamLimits

0xd711,	// (0x000b7c89) cell_myfav_contact_pane_g5

0x0004,

0xf95f,	// (0x000b9ed7) cell_myfav_contact_pane_g_ParamLimits

0xf95f,	// (0x000b9ed7) cell_myfav_contact_pane_g

0x5f0d,	// (0x000b0485) main_myfav_hc_pane_g3_ParamLimits

0x5f0d,	// (0x000b0485) main_myfav_hc_pane_g3

0x0269,	// (0x000aa7e1) popup_adpt_find_window

0x5f64,	// (0x000b04dc) afind_page_pane_ParamLimits

0x5f64,	// (0x000b04dc) afind_page_pane

0x5f79,	// (0x000b04f1) aid_size_cell_afind_ParamLimits

0x5f79,	// (0x000b04f1) aid_size_cell_afind

0x5f97,	// (0x000b050f) bg_popup_sub_pane_cp09_ParamLimits

0x5f97,	// (0x000b050f) bg_popup_sub_pane_cp09

0x5fa4,	// (0x000b051c) find_pane_cp01_ParamLimits

0x5fa4,	// (0x000b051c) find_pane_cp01

0xd71d,	// (0x000b7c95) grid_afind_control_pane_ParamLimits

0xd71d,	// (0x000b7c95) grid_afind_control_pane

0x5fb1,	// (0x000b0529) grid_afind_pane_ParamLimits

0x5fb1,	// (0x000b0529) grid_afind_pane

0x5fd0,	// (0x000b0548) cell_afind_pane_ParamLimits

0x5fd0,	// (0x000b0548) cell_afind_pane

0xcbc0,	// (0x000b7138) afind_page_pane_g1

0x6031,	// (0x000b05a9) afind_page_pane_g2

0x603a,	// (0x000b05b2) afind_page_pane_g3

0x0002,

0xf96a,	// (0x000b9ee2) afind_page_pane_g

0x6043,	// (0x000b05bb) afind_page_pane_t1

0xd731,	// (0x000b7ca9) cell_afind_grid_control_pane_ParamLimits

0xd731,	// (0x000b7ca9) cell_afind_grid_control_pane

0xd4f9,	// (0x000b7a71) bg_button_pane_cp69_ParamLimits

0xd4f9,	// (0x000b7a71) bg_button_pane_cp69

0x6063,	// (0x000b05db) cell_afind_pane_g1_ParamLimits

0x6063,	// (0x000b05db) cell_afind_pane_g1

0x6070,	// (0x000b05e8) cell_afind_pane_t1_ParamLimits

0x6070,	// (0x000b05e8) cell_afind_pane_t1

0xa43a,	// (0x000b49b2) bg_button_pane_cp72

0xd740,	// (0x000b7cb8) cell_afind_grid_control_pane_g1

0x30f6,	// (0x000ad66e) aid_image_placing_area_ParamLimits

0x30f6,	// (0x000ad66e) aid_image_placing_area

0xd1bd,	// (0x000b7735) field_vitu_entry_pane_g1_ParamLimits

0xd1bd,	// (0x000b7735) field_vitu_entry_pane_g1

0xd1c9,	// (0x000b7741) field_vitu_entry_pane_g2_ParamLimits

0xd1c9,	// (0x000b7741) field_vitu_entry_pane_g2

0x0001,

0xf81b,	// (0x000b9d93) field_vitu_entry_pane_g_ParamLimits

0xf81b,	// (0x000b9d93) field_vitu_entry_pane_g

0x5231,	// (0x000af7a9) cell_vitu_itu_pane_g1_ParamLimits

0x5281,	// (0x000af7f9) cell_vitu_itu_pane_t3_ParamLimits

0x5281,	// (0x000af7f9) cell_vitu_itu_pane_t3

0xd49f,	// (0x000b7a17) mp4_progress_pane_t1_ParamLimits

0xd4b8,	// (0x000b7a30) mp4_progress_pane_t2_ParamLimits

0xf8b0,	// (0x000b9e28) mp4_progress_pane_t_ParamLimits

0xd4d1,	// (0x000b7a49) mup_progress_pane_cp04_ParamLimits

0x5f50,	// (0x000b04c8) main_myfav_hc_pane_t5_ParamLimits

0x5f50,	// (0x000b04c8) main_myfav_hc_pane_t5

0x012a,	// (0x000aa6a2) aid_zoom_text_primary

0x0269,	// (0x000aa7e1) popup_adpt_find_window_ParamLimits

0x938d,	// (0x000b3905) main_cam_set_pane

0x59ae,	// (0x000aff26) cam4_zoom_pane_ParamLimits

0x59ae,	// (0x000aff26) cam4_zoom_pane

0x6082,	// (0x000b05fa) main_cam_set_pane_g1_ParamLimits

0x6082,	// (0x000b05fa) main_cam_set_pane_g1

0x6090,	// (0x000b0608) main_cam_set_pane_g2_ParamLimits

0x6090,	// (0x000b0608) main_cam_set_pane_g2

0x0001,

0xf971,	// (0x000b9ee9) main_cam_set_pane_g_ParamLimits

0xf971,	// (0x000b9ee9) main_cam_set_pane_g

0x60b1,	// (0x000b0629) main_cam_set_pane_t1_ParamLimits

0x60b1,	// (0x000b0629) main_cam_set_pane_t1

0x60cc,	// (0x000b0644) main_cset_listscroll_pane_ParamLimits

0x60cc,	// (0x000b0644) main_cset_listscroll_pane

0x60ec,	// (0x000b0664) main_cset_slider_pane_ParamLimits

0x60ec,	// (0x000b0664) main_cset_slider_pane

0xd751,	// (0x000b7cc9) main_cset_list_pane_ParamLimits

0xd751,	// (0x000b7cc9) main_cset_list_pane

0xd761,	// (0x000b7cd9) scroll_pane_cp028

0x6112,	// (0x000b068a) aid_area_touch_slider

0x612e,	// (0x000b06a6) cset_slider_pane

0x6158,	// (0x000b06d0) main_cset_slider_pane_g1

0x616d,	// (0x000b06e5) main_cset_slider_pane_g2

0x0011,

0xf976,	// (0x000b9eee) main_cset_slider_pane_g

0xd79a,	// (0x000b7d12) main_cset_slider_pane_t1

0x6229,	// (0x000b07a1) main_cset_slider_pane_t2

0x6243,	// (0x000b07bb) main_cset_slider_pane_t3

0x625d,	// (0x000b07d5) main_cset_slider_pane_t4

0x6277,	// (0x000b07ef) main_cset_slider_pane_t5

0x6291,	// (0x000b0809) main_cset_slider_pane_t6

0x62a6,	// (0x000b081e) main_cset_slider_pane_t7

0x000e,

0xf99b,	// (0x000b9f13) main_cset_slider_pane_t

0x63aa,	// (0x000b0922) cset_list_set_pane_ParamLimits

0x63aa,	// (0x000b0922) cset_list_set_pane

0x63bd,	// (0x000b0935) aid_position_infowindow_above

0x63c5,	// (0x000b093d) aid_position_infowindow_below

0x63cd,	// (0x000b0945) cset_list_set_pane_g1_ParamLimits

0x63cd,	// (0x000b0945) cset_list_set_pane_g1

0xa6a9,	// (0x000b4c21) cset_list_set_pane_g3_ParamLimits

0xa6a9,	// (0x000b4c21) cset_list_set_pane_g3

0x0001,

0xf9ba,	// (0x000b9f32) cset_list_set_pane_g_ParamLimits

0xf9ba,	// (0x000b9f32) cset_list_set_pane_g

0xa6b8,	// (0x000b4c30) cset_list_set_pane_t1_ParamLimits

0xa6b8,	// (0x000b4c30) cset_list_set_pane_t1

0xa5de,	// (0x000b4b56) list_highlight_pane_cp021_ParamLimits

0xa5de,	// (0x000b4b56) list_highlight_pane_cp021

0xb48a,	// (0x000b5a02) cset_slider_pane_g1

0xb49c,	// (0x000b5a14) cset_slider_pane_g2

0xb493,	// (0x000b5a0b) cset_slider_pane_g3

0x0002,

0xf9bf,	// (0x000b9f37) cset_slider_pane_g

0x9df8,	// (0x000b4370) aid_area_touch_cam4_zoom

0x9e00,	// (0x000b4378) cam4_zoom_cont_pane

0x9e08,	// (0x000b4380) cam4_zoom_pane_g1

0x9e10,	// (0x000b4388) cam4_zoom_pane_g2

0x63d9,	// (0x000b0951) cam4_zoom_pane_g3

0x0002,

0xf9c6,	// (0x000b9f3e) cam4_zoom_pane_g

0x9e18,	// (0x000b4390) cam4_zoom_cont_pane_g1

0x9e21,	// (0x000b4399) cam4_zoom_cont_pane_g2

0x9e2a,	// (0x000b43a2) cam4_zoom_cont_pane_g3

0x0002,

0xf9cd,	// (0x000b9f45) cam4_zoom_cont_pane_g

0x586e,	// (0x000afde6) call4_image_pane_ParamLimits

0x586e,	// (0x000afde6) call4_image_pane

0xd505,	// (0x000b7a7d) call4_windows_conf_pane_ParamLimits

0xd544,	// (0x000b7abc) popup_call4_audio_in_window_ParamLimits

0xd544,	// (0x000b7abc) popup_call4_audio_in_window

0x9325,	// (0x000b389d) bg_popup_call2_act_pane_cp02

0xd5ba,	// (0x000b7b32) call4_list_conf_pane

0xcbc0,	// (0x000b7138) call4_image_pane_g1

0xcbc0,	// (0x000b7138) call4_image_pane_g2

0x0001,

0xf6dc,	// (0x000b9c54) call4_image_pane_g

0xd83a,	// (0x000b7db2) list_single_graphic_popup_conf4_pane_ParamLimits

0xd83a,	// (0x000b7db2) list_single_graphic_popup_conf4_pane

0x9325,	// (0x000b389d) list_highlight_pane_cp022

0xd84d,	// (0x000b7dc5) list_single_graphic_popup_conf4_pane_g1

0xb069,	// (0x000b55e1) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf9d4,	// (0x000b9f4c) list_single_graphic_popup_conf4_pane_g

0xd855,	// (0x000b7dcd) list_single_graphic_popup_conf4_pane_t1

0x147d,	// (0x000ab9f5) popup_vtel_slider_window_ParamLimits

0x147d,	// (0x000ab9f5) popup_vtel_slider_window

0xd4e7,	// (0x000b7a5f) dialer2_ne_pane_t2_ParamLimits

0xd4e7,	// (0x000b7a5f) dialer2_ne_pane_t2

0x0001,

0xf8b5,	// (0x000b9e2d) dialer2_ne_pane_t_ParamLimits

0xf8b5,	// (0x000b9e2d) dialer2_ne_pane_t

0xc9a3,	// (0x000b6f1b) bg_popup_sub_pane_cp010_ParamLimits

0xc9a3,	// (0x000b6f1b) bg_popup_sub_pane_cp010

0x63e1,	// (0x000b0959) popup_vtel_slider_window_g1_ParamLimits

0x63e1,	// (0x000b0959) popup_vtel_slider_window_g1

0x63f4,	// (0x000b096c) popup_vtel_slider_window_g2_ParamLimits

0x63f4,	// (0x000b096c) popup_vtel_slider_window_g2

0x0003,

0xf9d9,	// (0x000b9f51) popup_vtel_slider_window_g_ParamLimits

0xf9d9,	// (0x000b9f51) popup_vtel_slider_window_g

0x644a,	// (0x000b09c2) vtel_slider_pane_ParamLimits

0x644a,	// (0x000b09c2) vtel_slider_pane

0x646c,	// (0x000b09e4) vtel_slider_pane_g1_ParamLimits

0x646c,	// (0x000b09e4) vtel_slider_pane_g1

0x6480,	// (0x000b09f8) vtel_slider_pane_g2_ParamLimits

0x6480,	// (0x000b09f8) vtel_slider_pane_g2

0x6498,	// (0x000b0a10) vtel_slider_pane_g3_ParamLimits

0x6498,	// (0x000b0a10) vtel_slider_pane_g3

0x646c,	// (0x000b09e4) vtel_slider_pane_g4_ParamLimits

0x646c,	// (0x000b09e4) vtel_slider_pane_g4

0x64ae,	// (0x000b0a26) vtel_slider_pane_g5_ParamLimits

0x64ae,	// (0x000b0a26) vtel_slider_pane_g5

0x0004,

0xf9e2,	// (0x000b9f5a) vtel_slider_pane_g_ParamLimits

0xf9e2,	// (0x000b9f5a) vtel_slider_pane_g

0x938d,	// (0x000b3905) main_gallery2_pane

0x5bae,	// (0x000b0126) aid_size_row_itut2_dropdow_list_ParamLimits

0x5bae,	// (0x000b0126) aid_size_row_itut2_dropdow_list

0x5c3a,	// (0x000b01b2) grid_vitu2_function_top_pane_ParamLimits

0x5c3a,	// (0x000b01b2) grid_vitu2_function_top_pane

0x5c9f,	// (0x000b0217) popup_vitu2_dropdown_list_window_ParamLimits

0x5c9f,	// (0x000b0217) popup_vitu2_dropdown_list_window

0x5cc8,	// (0x000b0240) popup_vitu2_match_list_window

0x64d2,	// (0x000b0a4a) cell_vitu2_function_top_pane_ParamLimits

0x64d2,	// (0x000b0a4a) cell_vitu2_function_top_pane

0x64f0,	// (0x000b0a68) cell_vitu2_function_top_pane_cp01_ParamLimits

0x64f0,	// (0x000b0a68) cell_vitu2_function_top_pane_cp01

0x650e,	// (0x000b0a86) cell_vitu2_function_top_wide_pane_ParamLimits

0x650e,	// (0x000b0a86) cell_vitu2_function_top_wide_pane

0x938d,	// (0x000b3905) bg_button_pane_cp012

0x652c,	// (0x000b0aa4) cell_vitu2_function_top_pane_g1

0x9e33,	// (0x000b43ab) bg_button_pane_cp013_ParamLimits

0x9e33,	// (0x000b43ab) bg_button_pane_cp013

0x6540,	// (0x000b0ab8) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x6540,	// (0x000b0ab8) cell_vitu2_function_top_wide_pane_g1

0x938d,	// (0x000b3905) bg_popup_sub_pane_cp20

0x6558,	// (0x000b0ad0) list_vitu2_match_list_pane

0xd647,	// (0x000b7bbf) bg_popup_sub_pane_cp20_g1

0xd64f,	// (0x000b7bc7) bg_popup_sub_pane_cp20_g2

0xab23,	// (0x000b509b) bg_popup_sub_pane_cp20_g3

0xd657,	// (0x000b7bcf) bg_popup_sub_pane_cp20_g4

0xab03,	// (0x000b507b) bg_popup_sub_pane_cp20_g5

0xd86b,	// (0x000b7de3) bg_popup_sub_pane_cp20_g6

0xd667,	// (0x000b7bdf) bg_popup_sub_pane_cp20_g7

0xd66f,	// (0x000b7be7) bg_popup_sub_pane_cp20_g8

0xd677,	// (0x000b7bef) bg_popup_sub_pane_cp20_g9

0x0008,

0xf9ed,	// (0x000b9f65) bg_popup_sub_pane_cp20_g

0x9e4f,	// (0x000b43c7) list_vitu2_match_list_item_pane_ParamLimits

0x9e4f,	// (0x000b43c7) list_vitu2_match_list_item_pane

0x9e61,	// (0x000b43d9) list_vitu2_match_list_item_pane_t1

0x939b,	// (0x000b3913) bg_popup_sub_pane_cp21

0x9e6f,	// (0x000b43e7) grid_vitu2_dropdown_list_pane

0x65c0,	// (0x000b0b38) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x65c0,	// (0x000b0b38) cell_vitu2_dropdown_list_char_pane

0x65e1,	// (0x000b0b59) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x65e1,	// (0x000b0b59) cell_vitu2_dropdown_list_ctrl_pane

0xd873,	// (0x000b7deb) cell_vitu2_dropdown_list_char_pane_g1

0xd87c,	// (0x000b7df4) cell_vitu2_dropdown_list_char_pane_g2

0xd885,	// (0x000b7dfd) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xfa0a,	// (0x000b9f82) cell_vitu2_dropdown_list_char_pane_g

0x660d,	// (0x000b0b85) cell_vitu2_dropdown_list_char_pane_t1

0x661b,	// (0x000b0b93) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x661b,	// (0x000b0b93) cell_vitu2_dropdown_list_ctrl_pane_g1

0x662b,	// (0x000b0ba3) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x662b,	// (0x000b0ba3) cell_vitu2_dropdown_list_ctrl_pane_g2

0x663c,	// (0x000b0bb4) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x663c,	// (0x000b0bb4) cell_vitu2_dropdown_list_ctrl_pane_g3

0x664c,	// (0x000b0bc4) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x664c,	// (0x000b0bc4) cell_vitu2_dropdown_list_ctrl_pane_g4

0x9d1d,	// (0x000b4295) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0x9d1d,	// (0x000b4295) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa11,	// (0x000b9f89) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa11,	// (0x000b9f89) cell_vitu2_dropdown_list_ctrl_pane_g

0x6668,	// (0x000b0be0) aid_size_cell_gallery2_ParamLimits

0x6668,	// (0x000b0be0) aid_size_cell_gallery2

0x6686,	// (0x000b0bfe) grid_gallery2_pane_ParamLimits

0x6686,	// (0x000b0bfe) grid_gallery2_pane

0x66a0,	// (0x000b0c18) scroll_pane_cp029_ParamLimits

0x66a0,	// (0x000b0c18) scroll_pane_cp029

0x66ac,	// (0x000b0c24) cell_gallery2_pane_ParamLimits

0x66ac,	// (0x000b0c24) cell_gallery2_pane

0xd88e,	// (0x000b7e06) cell_gallery2_pane_g2

0x6708,	// (0x000b0c80) cell_gallery2_pane_g3

0xd896,	// (0x000b7e0e) cell_gallery2_pane_g4

0xd89e,	// (0x000b7e16) cell_gallery2_pane_g5

0xb346,	// (0x000b58be) grid_highlight_pane_cp10

0x5cc8,	// (0x000b0240) popup_vitu2_match_list_window_ParamLimits

0x5cdd,	// (0x000b0255) popup_vitu2_query_window_ParamLimits

0x5cdd,	// (0x000b0255) popup_vitu2_query_window

0x939b,	// (0x000b3913) bg_vitu2_candi_button_pane

0xd873,	// (0x000b7deb) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xd87c,	// (0x000b7df4) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xd885,	// (0x000b7dfd) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x6710,	// (0x000b0c88) bg_button_pane_cp015

0x6724,	// (0x000b0c9c) bg_button_pane_cp016

0x6737,	// (0x000b0caf) bg_button_pane_cp017

0xc7b6,	// (0x000b6d2e) bg_popup_sub_pane_cp22

0xd8a6,	// (0x000b7e1e) popup_vitu2_query_window_g1

0x677c,	// (0x000b0cf4) popup_vitu2_query_window_g2

0x0002,

0xfa1c,	// (0x000b9f94) popup_vitu2_query_window_g

0x679b,	// (0x000b0d13) popup_vitu2_query_window_t1_ParamLimits

0x679b,	// (0x000b0d13) popup_vitu2_query_window_t1

0x67d0,	// (0x000b0d48) popup_vitu2_query_window_t2_ParamLimits

0x67d0,	// (0x000b0d48) popup_vitu2_query_window_t2

0x67e2,	// (0x000b0d5a) popup_vitu2_query_window_t3_ParamLimits

0x67e2,	// (0x000b0d5a) popup_vitu2_query_window_t3

0x680a,	// (0x000b0d82) popup_vitu2_query_window_t4_ParamLimits

0x680a,	// (0x000b0d82) popup_vitu2_query_window_t4

0x682b,	// (0x000b0da3) popup_vitu2_query_window_t5_ParamLimits

0x682b,	// (0x000b0da3) popup_vitu2_query_window_t5

0x0006,

0xfa23,	// (0x000b9f9b) popup_vitu2_query_window_t_ParamLimits

0xfa23,	// (0x000b9f9b) popup_vitu2_query_window_t

0xd749,	// (0x000b7cc1) main_cset_text_pane

0x6112,	// (0x000b068a) aid_area_touch_slider_ParamLimits

0x612e,	// (0x000b06a6) cset_slider_pane_ParamLimits

0x6158,	// (0x000b06d0) main_cset_slider_pane_g1_ParamLimits

0x616d,	// (0x000b06e5) main_cset_slider_pane_g2_ParamLimits

0xd76a,	// (0x000b7ce2) main_cset_slider_pane_g3_ParamLimits

0xd76a,	// (0x000b7ce2) main_cset_slider_pane_g3

0x6182,	// (0x000b06fa) main_cset_slider_pane_g4_ParamLimits

0x6182,	// (0x000b06fa) main_cset_slider_pane_g4

0x6191,	// (0x000b0709) main_cset_slider_pane_g5_ParamLimits

0x6191,	// (0x000b0709) main_cset_slider_pane_g5

0x619d,	// (0x000b0715) main_cset_slider_pane_g6_ParamLimits

0x619d,	// (0x000b0715) main_cset_slider_pane_g6

0xf976,	// (0x000b9eee) main_cset_slider_pane_g_ParamLimits

0xd79a,	// (0x000b7d12) main_cset_slider_pane_t1_ParamLimits

0x6229,	// (0x000b07a1) main_cset_slider_pane_t2_ParamLimits

0x6243,	// (0x000b07bb) main_cset_slider_pane_t3_ParamLimits

0x625d,	// (0x000b07d5) main_cset_slider_pane_t4_ParamLimits

0x6277,	// (0x000b07ef) main_cset_slider_pane_t5_ParamLimits

0x6291,	// (0x000b0809) main_cset_slider_pane_t6_ParamLimits

0x62a6,	// (0x000b081e) main_cset_slider_pane_t7_ParamLimits

0x62d0,	// (0x000b0848) main_cset_slider_pane_t8_ParamLimits

0x62d0,	// (0x000b0848) main_cset_slider_pane_t8

0x62f8,	// (0x000b0870) main_cset_slider_pane_t9_ParamLimits

0x62f8,	// (0x000b0870) main_cset_slider_pane_t9

0x6320,	// (0x000b0898) main_cset_slider_pane_t10_ParamLimits

0x6320,	// (0x000b0898) main_cset_slider_pane_t10

0x6348,	// (0x000b08c0) main_cset_slider_pane_t11_ParamLimits

0x6348,	// (0x000b08c0) main_cset_slider_pane_t11

0x6370,	// (0x000b08e8) main_cset_slider_pane_t12_ParamLimits

0x6370,	// (0x000b08e8) main_cset_slider_pane_t12

0x638d,	// (0x000b0905) main_cset_slider_pane_t13_ParamLimits

0x638d,	// (0x000b0905) main_cset_slider_pane_t13

0xf99b,	// (0x000b9f13) main_cset_slider_pane_t_ParamLimits

0x9325,	// (0x000b389d) bg_popup_sub_pane_cp011

0xd8b2,	// (0x000b7e2a) main_cset_text_pane_g1

0xd8ba,	// (0x000b7e32) main_cset_text_pane_t1

0xd8c8,	// (0x000b7e40) main_cset_text_pane_t2

0xd8d6,	// (0x000b7e4e) main_cset_text_pane_t3

0xd8e4,	// (0x000b7e5c) main_cset_text_pane_t4

0xd8f2,	// (0x000b7e6a) main_cset_text_pane_t5

0xd900,	// (0x000b7e78) main_cset_text_pane_t6

0xd90e,	// (0x000b7e86) main_cset_text_pane_t7

0x0006,

0xfa32,	// (0x000b9faa) main_cset_text_pane_t

0x939b,	// (0x000b3913) main_cam4_burst_pane

0x939b,	// (0x000b3913) main_cam5_pane

0x6051,	// (0x000b05c9) bg_button_pane_cp019

0x605a,	// (0x000b05d2) bg_button_pane_cp020

0xd776,	// (0x000b7cee) main_cset_slider_pane_g7_ParamLimits

0xd776,	// (0x000b7cee) main_cset_slider_pane_g7

0xd782,	// (0x000b7cfa) main_cset_slider_pane_g8_ParamLimits

0xd782,	// (0x000b7cfa) main_cset_slider_pane_g8

0x61b1,	// (0x000b0729) main_cset_slider_pane_g9_ParamLimits

0x61b1,	// (0x000b0729) main_cset_slider_pane_g9

0x61bd,	// (0x000b0735) main_cset_slider_pane_g10_ParamLimits

0x61bd,	// (0x000b0735) main_cset_slider_pane_g10

0x61c9,	// (0x000b0741) main_cset_slider_pane_g11_ParamLimits

0x61c9,	// (0x000b0741) main_cset_slider_pane_g11

0x61d5,	// (0x000b074d) main_cset_slider_pane_g12_ParamLimits

0x61d5,	// (0x000b074d) main_cset_slider_pane_g12

0x61e1,	// (0x000b0759) main_cset_slider_pane_g13_ParamLimits

0x61e1,	// (0x000b0759) main_cset_slider_pane_g13

0x61ed,	// (0x000b0765) main_cset_slider_pane_g14_ParamLimits

0x61ed,	// (0x000b0765) main_cset_slider_pane_g14

0x61f9,	// (0x000b0771) main_cset_slider_pane_g15_ParamLimits

0x61f9,	// (0x000b0771) main_cset_slider_pane_g15

0xd7c8,	// (0x000b7d40) main_cset_slider_pane_t14_ParamLimits

0xd7c8,	// (0x000b7d40) main_cset_slider_pane_t14

0xd801,	// (0x000b7d79) main_cset_slider_pane_t15_ParamLimits

0xd801,	// (0x000b7d79) main_cset_slider_pane_t15

0x68a2,	// (0x000b0e1a) aid_cam4_burst_size_cell_ParamLimits

0x68a2,	// (0x000b0e1a) aid_cam4_burst_size_cell

0x68c2,	// (0x000b0e3a) grid_cam4_burst_pane_ParamLimits

0x68c2,	// (0x000b0e3a) grid_cam4_burst_pane

0x68fa,	// (0x000b0e72) linegrid_cam4_burst_pane_ParamLimits

0x68fa,	// (0x000b0e72) linegrid_cam4_burst_pane

0xd91c,	// (0x000b7e94) scroll_pane_cp30_ParamLimits

0xd91c,	// (0x000b7e94) scroll_pane_cp30

0x6920,	// (0x000b0e98) cell_cam4_burst_pane_ParamLimits

0x6920,	// (0x000b0e98) cell_cam4_burst_pane

0xd928,	// (0x000b7ea0) linegrid_cam4_burst_pane_g1_ParamLimits

0xd928,	// (0x000b7ea0) linegrid_cam4_burst_pane_g1

0x696d,	// (0x000b0ee5) linegrid_cam4_burst_pane_g2_ParamLimits

0x696d,	// (0x000b0ee5) linegrid_cam4_burst_pane_g2

0xd935,	// (0x000b7ead) linegrid_cam4_burst_pane_g3_ParamLimits

0xd935,	// (0x000b7ead) linegrid_cam4_burst_pane_g3

0x0002,

0xfa41,	// (0x000b9fb9) linegrid_cam4_burst_pane_g_ParamLimits

0xfa41,	// (0x000b9fb9) linegrid_cam4_burst_pane_g

0x697e,	// (0x000b0ef6) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x697e,	// (0x000b0ef6) linegrid_cam4_burst_pane_g3_copy1

0xd942,	// (0x000b7eba) linegrid_cam4_burst_pane_g4_ParamLimits

0xd942,	// (0x000b7eba) linegrid_cam4_burst_pane_g4

0x6998,	// (0x000b0f10) linegrid_cam4_burst_pane_g5_ParamLimits

0x6998,	// (0x000b0f10) linegrid_cam4_burst_pane_g5

0x69a9,	// (0x000b0f21) linegrid_cam4_burst_pane_g6_ParamLimits

0x69a9,	// (0x000b0f21) linegrid_cam4_burst_pane_g6

0xd94f,	// (0x000b7ec7) linegrid_cam4_burst_pane_g7_ParamLimits

0xd94f,	// (0x000b7ec7) linegrid_cam4_burst_pane_g7

0x69c0,	// (0x000b0f38) cell_cam4_burst_pane_g1

0xd968,	// (0x000b7ee0) main_cam5_pane_t1_ParamLimits

0xd968,	// (0x000b7ee0) main_cam5_pane_t1

0xd97a,	// (0x000b7ef2) main_cam5_pane_t2_ParamLimits

0xd97a,	// (0x000b7ef2) main_cam5_pane_t2

0xd98c,	// (0x000b7f04) main_cam5_pane_t3_ParamLimits

0xd98c,	// (0x000b7f04) main_cam5_pane_t3

0xd99e,	// (0x000b7f16) main_cam5_pane_t4_ParamLimits

0xd99e,	// (0x000b7f16) main_cam5_pane_t4

0xd9b6,	// (0x000b7f2e) main_cam5_pane_t5_ParamLimits

0xd9b6,	// (0x000b7f2e) main_cam5_pane_t5

0xd9ca,	// (0x000b7f42) main_cam5_pane_t6_ParamLimits

0xd9ca,	// (0x000b7f42) main_cam5_pane_t6

0xd9de,	// (0x000b7f56) main_cam5_pane_t7_ParamLimits

0xd9de,	// (0x000b7f56) main_cam5_pane_t7

0xd9f0,	// (0x000b7f68) main_cam5_pane_t8_ParamLimits

0xd9f0,	// (0x000b7f68) main_cam5_pane_t8

0xda0c,	// (0x000b7f84) main_cam5_pane_t9_ParamLimits

0xda0c,	// (0x000b7f84) main_cam5_pane_t9

0xda1e,	// (0x000b7f96) main_cam5_pane_t10_ParamLimits

0xda1e,	// (0x000b7f96) main_cam5_pane_t10

0xda30,	// (0x000b7fa8) main_cam5_pane_t11_ParamLimits

0xda30,	// (0x000b7fa8) main_cam5_pane_t11

0xda42,	// (0x000b7fba) main_cam5_pane_t12_ParamLimits

0xda42,	// (0x000b7fba) main_cam5_pane_t12

0xda57,	// (0x000b7fcf) main_cam5_pane_t13_ParamLimits

0xda57,	// (0x000b7fcf) main_cam5_pane_t13

0x000c,

0xfa4d,	// (0x000b9fc5) main_cam5_pane_t_ParamLimits

0xfa4d,	// (0x000b9fc5) main_cam5_pane_t

0x02eb,	// (0x000aa863) popup_scut_keymap_window_ParamLimits

0x02eb,	// (0x000aa863) popup_scut_keymap_window

0x69d5,	// (0x000b0f4d) aid_size_cell_brow_shortcut

0xb346,	// (0x000b58be) bg_popup_window_pane_cp010

0x69e1,	// (0x000b0f59) grid_scut_pane

0x69ed,	// (0x000b0f65) cell_scut_pane_ParamLimits

0x69ed,	// (0x000b0f65) cell_scut_pane

0x6a04,	// (0x000b0f7c) cell_scut_pane_g1

0xda74,	// (0x000b7fec) cell_scut_pane_t1

0xda83,	// (0x000b7ffb) cell_scut_pane_t2

0x6a0d,	// (0x000b0f85) cell_scut_pane_t3

0x0002,

0xfa68,	// (0x000b9fe0) cell_scut_pane_t

0x471c,	// (0x000aec94) main_mup3_pane_g8_ParamLimits

0x471c,	// (0x000aec94) main_mup3_pane_g8

0x5bc6,	// (0x000b013e) area_vitu2_query_pane_ParamLimits

0x5bc6,	// (0x000b013e) area_vitu2_query_pane

0x674a,	// (0x000b0cc2) input_focus_pane_cp08

0xda92,	// (0x000b800a) area_vitu2_query_pane_g1

0x6a1b,	// (0x000b0f93) area_vitu2_query_pane_g2

0x0001,

0xfa6f,	// (0x000b9fe7) area_vitu2_query_pane_g

0x6a2c,	// (0x000b0fa4) area_vitu2_query_pane_t1_ParamLimits

0x6a2c,	// (0x000b0fa4) area_vitu2_query_pane_t1

0x6a40,	// (0x000b0fb8) area_vitu2_query_pane_t2_ParamLimits

0x6a40,	// (0x000b0fb8) area_vitu2_query_pane_t2

0x6a54,	// (0x000b0fcc) area_vitu2_query_pane_t3_ParamLimits

0x6a54,	// (0x000b0fcc) area_vitu2_query_pane_t3

0xa6cd,	// (0x000b4c45) area_vitu2_query_pane_t4_ParamLimits

0xa6cd,	// (0x000b4c45) area_vitu2_query_pane_t4

0xa6f5,	// (0x000b4c6d) area_vitu2_query_pane_t5_ParamLimits

0xa6f5,	// (0x000b4c6d) area_vitu2_query_pane_t5

0xa71d,	// (0x000b4c95) area_vitu2_query_pane_t6_ParamLimits

0xa71d,	// (0x000b4c95) area_vitu2_query_pane_t6

0x0006,

0xfa74,	// (0x000b9fec) area_vitu2_query_pane_t_ParamLimits

0xfa74,	// (0x000b9fec) area_vitu2_query_pane_t

0x6a7c,	// (0x000b0ff4) bg_button_pane_cp018

0x6a8a,	// (0x000b1002) bg_button_pane_cp021

0x6a96,	// (0x000b100e) bg_button_pane_cp022

0x6aa7,	// (0x000b101f) input_focus_pane_cp09

0xb18d,	// (0x000b5705) aid_size_touch_mv_arrow_left

0xb1b8,	// (0x000b5730) aid_size_touch_mv_arrow_right

0x6211,	// (0x000b0789) main_cset_slider_pane_g16_ParamLimits

0x6211,	// (0x000b0789) main_cset_slider_pane_g16

0x621d,	// (0x000b0795) main_cset_slider_pane_g17_ParamLimits

0x621d,	// (0x000b0795) main_cset_slider_pane_g17

0x69c0,	// (0x000b0f38) cell_cam4_burst_pane_g1_ParamLimits

0x9325,	// (0x000b389d) compa_mode_pane

0x6404,	// (0x000b097c) popup_vtel_slider_window_g3_ParamLimits

0x6404,	// (0x000b097c) popup_vtel_slider_window_g3

0x641b,	// (0x000b0993) popup_vtel_slider_window_g4_ParamLimits

0x641b,	// (0x000b0993) popup_vtel_slider_window_g4

0x6432,	// (0x000b09aa) popup_vtel_slider_window_t1_ParamLimits

0x6432,	// (0x000b09aa) popup_vtel_slider_window_t1

0x939b,	// (0x000b3913) main_cl_pane

0x998d,	// (0x000b3f05) popup_imed_adjust2_window_ParamLimits

0xc7b6,	// (0x000b6d2e) bg_tb_trans_pane_cp05_ParamLimits

0xd0e9,	// (0x000b7661) popup_imed_adjust2_window_g1_ParamLimits

0xd0f8,	// (0x000b7670) popup_imed_adjust2_window_g2_ParamLimits

0xd0f8,	// (0x000b7670) popup_imed_adjust2_window_g2

0xd104,	// (0x000b767c) popup_imed_adjust2_window_g3_ParamLimits

0xd104,	// (0x000b767c) popup_imed_adjust2_window_g3

0x0002,

0xf7df,	// (0x000b9d57) popup_imed_adjust2_window_g_ParamLimits

0xf7df,	// (0x000b9d57) popup_imed_adjust2_window_g

0xd110,	// (0x000b7688) popup_imed_adjust2_window_t1_ParamLimits

0xd128,	// (0x000b76a0) slider_imed_adjust_pane_ParamLimits

0xd13c,	// (0x000b76b4) slider_imed_adjust_pane_g1_ParamLimits

0xd14c,	// (0x000b76c4) slider_imed_adjust_pane_g2_ParamLimits

0xd15c,	// (0x000b76d4) slider_imed_adjust_pane_g3_ParamLimits

0xd16d,	// (0x000b76e5) slider_imed_adjust_pane_g4_ParamLimits

0xf7e6,	// (0x000b9d5e) slider_imed_adjust_pane_g_ParamLimits

0x594f,	// (0x000afec7) aid_touch_area_cam4_ParamLimits

0x594f,	// (0x000afec7) aid_touch_area_cam4

0x9d01,	// (0x000b4279) battery_pane_cp01

0x5a1e,	// (0x000aff96) main_camera4_pane_g6_ParamLimits

0x5a1e,	// (0x000aff96) main_camera4_pane_g6

0x5a48,	// (0x000affc0) main_camera4_pane_t2_ParamLimits

0x5a48,	// (0x000affc0) main_camera4_pane_t2

0x0001,

0xf8e9,	// (0x000b9e61) main_camera4_pane_t_ParamLimits

0xf8e9,	// (0x000b9e61) main_camera4_pane_t

0x5a7d,	// (0x000afff5) aid_touch_area_vid4_ParamLimits

0x5a7d,	// (0x000afff5) aid_touch_area_vid4

0x5ad1,	// (0x000b0049) main_video4_pane_g5_ParamLimits

0x5ad1,	// (0x000b0049) main_video4_pane_g5

0x5af6,	// (0x000b006e) vid4_progress_pane_ParamLimits

0x5af6,	// (0x000b006e) vid4_progress_pane

0xd78e,	// (0x000b7d06) main_cset_slider_pane_g18_ParamLimits

0xd78e,	// (0x000b7d06) main_cset_slider_pane_g18

0xd95c,	// (0x000b7ed4) cell_cam4_burst_pane_g2_ParamLimits

0xd95c,	// (0x000b7ed4) cell_cam4_burst_pane_g2

0x0001,

0xfa48,	// (0x000b9fc0) cell_cam4_burst_pane_g_ParamLimits

0xfa48,	// (0x000b9fc0) cell_cam4_burst_pane_g

0xa213,	// (0x000b478b) bg_cl_pane_ParamLimits

0xa213,	// (0x000b478b) bg_cl_pane

0x6ab8,	// (0x000b1030) cl_header_pane_ParamLimits

0x6ab8,	// (0x000b1030) cl_header_pane

0x6acc,	// (0x000b1044) cl_listscroll_pane_ParamLimits

0x6acc,	// (0x000b1044) cl_listscroll_pane

0xda9e,	// (0x000b8016) bg_cl_pane_g1

0xdaa6,	// (0x000b801e) bg_cl_pane_g2

0xdaae,	// (0x000b8026) bg_cl_pane_g3

0xdab6,	// (0x000b802e) bg_cl_pane_g4

0xdabe,	// (0x000b8036) bg_cl_pane_g5

0xdac6,	// (0x000b803e) bg_cl_pane_g6

0xdace,	// (0x000b8046) bg_cl_pane_g7

0xdad6,	// (0x000b804e) bg_cl_pane_g8

0xdade,	// (0x000b8056) bg_cl_pane_g9

0x0008,

0xfa83,	// (0x000b9ffb) bg_cl_pane_g

0x6adc,	// (0x000b1054) aid_height_cl_leading_ParamLimits

0x6adc,	// (0x000b1054) aid_height_cl_leading

0x6ae8,	// (0x000b1060) aid_height_cl_text_ParamLimits

0x6ae8,	// (0x000b1060) aid_height_cl_text

0xa5de,	// (0x000b4b56) bg_cl_header_pane_ParamLimits

0xa5de,	// (0x000b4b56) bg_cl_header_pane

0x6b07,	// (0x000b107f) cl_header_pane_g1_ParamLimits

0x6b07,	// (0x000b107f) cl_header_pane_g1

0x6b1d,	// (0x000b1095) cl_header_pane_t1_ParamLimits

0x6b1d,	// (0x000b1095) cl_header_pane_t1

0xdae6,	// (0x000b805e) cl_list_pane

0xd761,	// (0x000b7cd9) hc_scroll_pane_cp01

0xab03,	// (0x000b507b) bg_cl_header_pane_g1

0xd647,	// (0x000b7bbf) bg_cl_header_pane_g2

0xab23,	// (0x000b509b) bg_cl_header_pane_g3

0xd657,	// (0x000b7bcf) bg_cl_header_pane_g4

0xd64f,	// (0x000b7bc7) bg_cl_header_pane_g5

0xd86b,	// (0x000b7de3) bg_cl_header_pane_g6

0xd66f,	// (0x000b7be7) bg_cl_header_pane_g7

0xd677,	// (0x000b7bef) bg_cl_header_pane_g8

0xd667,	// (0x000b7bdf) bg_cl_header_pane_g9

0x0008,

0xfa96,	// (0x000ba00e) bg_cl_header_pane_g

0x6b36,	// (0x000b10ae) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x6b36,	// (0x000b10ae) hc_cl_list_double_graphic_heading_pane

0x6b47,	// (0x000b10bf) hc_cl_list_single_graphic_pane_ParamLimits

0x6b47,	// (0x000b10bf) hc_cl_list_single_graphic_pane

0x6b60,	// (0x000b10d8) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x6b60,	// (0x000b10d8) hc_cl_list_single_graphic_pane_g1

0x6b6c,	// (0x000b10e4) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x6b6c,	// (0x000b10e4) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfaa9,	// (0x000ba021) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfaa9,	// (0x000ba021) hc_cl_list_single_graphic_pane_g

0x6b80,	// (0x000b10f8) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x6b80,	// (0x000b10f8) hc_cl_list_single_graphic_pane_t1

0x6b60,	// (0x000b10d8) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x6b60,	// (0x000b10d8) hc_cl_list_double_graphic_heading_pane_g1

0x6b95,	// (0x000b110d) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x6b95,	// (0x000b110d) hc_cl_list_double_graphic_heading_pane_g2

0x6ba9,	// (0x000b1121) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x6ba9,	// (0x000b1121) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfaae,	// (0x000ba026) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfaae,	// (0x000ba026) hc_cl_list_double_graphic_heading_pane_g

0x6bbd,	// (0x000b1135) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x6bbd,	// (0x000b1135) hc_cl_list_double_graphic_heading_pane_t1

0x6bd2,	// (0x000b114a) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x6bd2,	// (0x000b114a) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfab5,	// (0x000ba02d) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfab5,	// (0x000ba02d) hc_cl_list_double_graphic_heading_pane_t

0x9e7f,	// (0x000b43f7) vid4_progress_pane_g1

0x9e8f,	// (0x000b4407) vid4_progress_pane_g2

0x6be7,	// (0x000b115f) vid4_progress_pane_g3

0x9e9f,	// (0x000b4417) vid4_progress_pane_g4

0x0004,

0xfaba,	// (0x000ba032) vid4_progress_pane_g

0x6bf9,	// (0x000b1171) vid4_progress_pane_t1

0x9ebd,	// (0x000b4435) vid4_progress_pane_t2

0x0002,

0xfac5,	// (0x000ba03d) vid4_progress_pane_t

0x6c0f,	// (0x000b1187) wait_bar_pane_cp07

0xc9b1,	// (0x000b6f29) blid_firmament_pane_ParamLimits

0xc9f4,	// (0x000b6f6c) popup_blid_sat_info2_window_g1

0xca18,	// (0x000b6f90) popup_blid_sat_info2_window_t3

0xca26,	// (0x000b6f9e) popup_blid_sat_info2_window_t4

0xca34,	// (0x000b6fac) popup_blid_sat_info2_window_t5

0xca42,	// (0x000b6fba) popup_blid_sat_info2_window_t6

0xca52,	// (0x000b6fca) popup_blid_sat_info2_window_t7

0xca60,	// (0x000b6fd8) popup_blid_sat_info2_window_t8

0xca6e,	// (0x000b6fe6) popup_blid_sat_info2_window_t9

0xca7c,	// (0x000b6ff4) popup_blid_sat_info2_window_t10

0xcb40,	// (0x000b70b8) aid_firma_cardinal_ParamLimits

0xcb54,	// (0x000b70cc) blid_firmament_pane_t1_ParamLimits

0xcb6b,	// (0x000b70e3) blid_firmament_pane_t2_ParamLimits

0xcb82,	// (0x000b70fa) blid_firmament_pane_t3_ParamLimits

0xcb99,	// (0x000b7111) blid_firmament_pane_t4_ParamLimits

0xf6d3,	// (0x000b9c4b) blid_firmament_pane_t_ParamLimits

0xcbb0,	// (0x000b7128) blid_sat_info_pane_ParamLimits

0x938d,	// (0x000b3905) main_cam_set_pane_ParamLimits

0x4fe0,	// (0x000af558) aid_size_cell_colour_35_ParamLimits

0x5000,	// (0x000af578) aid_size_cell_colour_112_ParamLimits

0x5020,	// (0x000af598) aid_size_cell_effect_ParamLimits

0xc7b6,	// (0x000b6d2e) bg_tb_trans_pane_cp02_ParamLimits

0xad73,	// (0x000b52eb) heading_imed_pane_ParamLimits

0x5040,	// (0x000af5b8) listscroll_imed_pane_ParamLimits

0xbdd0,	// (0x000b6348) popup_call2_audio_first_window_g5_ParamLimits

0xbdd0,	// (0x000b6348) popup_call2_audio_first_window_g5

0x55fa,	// (0x000afb72) aid_size_touch_image3_arrow_left_ParamLimits

0x55fa,	// (0x000afb72) aid_size_touch_image3_arrow_left

0x5626,	// (0x000afb9e) aid_size_touch_image3_arrow_right_ParamLimits

0x5626,	// (0x000afb9e) aid_size_touch_image3_arrow_right

0x9ed2,	// (0x000b444a) vid4_progress_pane_t3

0x536c,	// (0x000af8e4) main_hwr_training_symbol_option_pane_ParamLimits

0x536c,	// (0x000af8e4) main_hwr_training_symbol_option_pane

0xd3df,	// (0x000b7957) popup_hwr_training_preview_window_ParamLimits

0xd3df,	// (0x000b7957) popup_hwr_training_preview_window

0x538c,	// (0x000af904) hwr_training_navi_pane_g5_ParamLimits

0x538c,	// (0x000af904) hwr_training_navi_pane_g5

0xd635,	// (0x000b7bad) popup_char_count_window

0x938d,	// (0x000b3905) bg_popup_sub_pane_cp20_ParamLimits

0x6558,	// (0x000b0ad0) list_vitu2_match_list_pane_ParamLimits

0x6567,	// (0x000b0adf) vitu2_page_scroll_pane_ParamLimits

0x6567,	// (0x000b0adf) vitu2_page_scroll_pane

0xdaef,	// (0x000b8067) list_single_hwr_training_symbol_option_pane_ParamLimits

0xdaef,	// (0x000b8067) list_single_hwr_training_symbol_option_pane

0xdb02,	// (0x000b807a) list_single_hwr_training_symbol_option_pane_g1

0xdb0a,	// (0x000b8082) list_single_hwr_training_symbol_option_pane_t1

0xdb18,	// (0x000b8090) bg_button_pane_cp023

0xdb21,	// (0x000b8099) bg_button_pane_cp024

0x6c58,	// (0x000b11d0) vitu2_page_scroll_pane_g1

0x6c60,	// (0x000b11d8) vitu2_page_scroll_pane_g2

0x0001,

0xfacc,	// (0x000ba044) vitu2_page_scroll_pane_g

0x6c68,	// (0x000b11e0) vitu2_page_scroll_pane_t1

0xd199,	// (0x000b7711) popup_char_count_window_g1

0xdb54,	// (0x000b80cc) popup_char_count_window_g2

0xdb5d,	// (0x000b80d5) popup_char_count_window_g3

0x0002,

0xfad1,	// (0x000ba049) popup_char_count_window_g

0xdb66,	// (0x000b80de) popup_char_count_window_t1

0x939b,	// (0x000b3913) main_vded2_pane

0xd0d5,	// (0x000b764d) aid_size_cell_imed_line

0xd0df,	// (0x000b7657) grid_imed_line_width_pane

0x9dc5,	// (0x000b433d) vid4_indicators_pane_g4

0xdb74,	// (0x000b80ec) cell_imed_line_width_pane_ParamLimits

0xdb74,	// (0x000b80ec) cell_imed_line_width_pane

0xdb88,	// (0x000b8100) cell_imed_line_width_pane_g1

0xce7d,	// (0x000b73f5) cell_imed_line_width_pane_g2

0x0001,

0xfad8,	// (0x000ba050) cell_imed_line_width_pane_g

0x6c77,	// (0x000b11ef) main_vded2_pane_g1_ParamLimits

0x6c77,	// (0x000b11ef) main_vded2_pane_g1

0x6c8d,	// (0x000b1205) main_vded2_pane_g2_ParamLimits

0x6c8d,	// (0x000b1205) main_vded2_pane_g2

0x0001,

0xfadd,	// (0x000ba055) main_vded2_pane_g_ParamLimits

0xfadd,	// (0x000ba055) main_vded2_pane_g

0x6c9f,	// (0x000b1217) vded2_slider_pane_ParamLimits

0x6c9f,	// (0x000b1217) vded2_slider_pane

0x6caf,	// (0x000b1227) aid_size_touch_vded2_end

0x6cb9,	// (0x000b1231) aid_size_touch_vded2_playhead

0xdb91,	// (0x000b8109) aid_size_touch_vded2_start

0xdb99,	// (0x000b8111) vded2_slider_bg_pane

0xdba2,	// (0x000b811a) vded2_slider_pane_g1

0xdbab,	// (0x000b8123) vded2_slider_pane_g2

0x6cc3,	// (0x000b123b) vded2_slider_pane_g3

0x0002,

0xfae2,	// (0x000ba05a) vded2_slider_pane_g

0xdbb3,	// (0x000b812b) vded2_slider_bg_pane_g1

0xdbbc,	// (0x000b8134) vded2_slider_bg_pane_g2

0xdbc5,	// (0x000b813d) vded2_slider_bg_pane_g3

0x0002,

0xfae9,	// (0x000ba061) vded2_slider_bg_pane_g

0x2d5f,	// (0x000ad2d7) aid_postcard_touch_down_pane_ParamLimits

0x2d5f,	// (0x000ad2d7) aid_postcard_touch_down_pane

0x2d75,	// (0x000ad2ed) aid_postcard_touch_up_pane_ParamLimits

0x2d75,	// (0x000ad2ed) aid_postcard_touch_up_pane

0x939b,	// (0x000b3913) main_blid2_pane

0x9973,	// (0x000b3eeb) popup_blid2_search_window

0x9325,	// (0x000b389d) blid2_gps_pane

0x9325,	// (0x000b389d) blid2_navig_pane

0x9325,	// (0x000b389d) blid2_search_pane

0x9325,	// (0x000b389d) blid2_tripm_pane

0x6cce,	// (0x000b1246) blid2_search_pane_g1_ParamLimits

0x6cce,	// (0x000b1246) blid2_search_pane_g1

0x6ce6,	// (0x000b125e) blid2_search_pane_t1_ParamLimits

0x6ce6,	// (0x000b125e) blid2_search_pane_t1

0x6cf8,	// (0x000b1270) aid_size_cell_blid2_gps_ParamLimits

0x6cf8,	// (0x000b1270) aid_size_cell_blid2_gps

0x6d10,	// (0x000b1288) blid2_gps_pane_g1_ParamLimits

0x6d10,	// (0x000b1288) blid2_gps_pane_g1

0x6d24,	// (0x000b129c) grid_blid2_satellite_pane_ParamLimits

0x6d24,	// (0x000b129c) grid_blid2_satellite_pane

0x6d3e,	// (0x000b12b6) blid2_navig_pane_g1_ParamLimits

0x6d3e,	// (0x000b12b6) blid2_navig_pane_g1

0x6d4a,	// (0x000b12c2) blid2_navig_pane_t1_ParamLimits

0x6d4a,	// (0x000b12c2) blid2_navig_pane_t1

0x6d65,	// (0x000b12dd) blid2_navig_pane_t2_ParamLimits

0x6d65,	// (0x000b12dd) blid2_navig_pane_t2

0x0001,

0xfaf0,	// (0x000ba068) blid2_navig_pane_t_ParamLimits

0xfaf0,	// (0x000ba068) blid2_navig_pane_t

0x6d80,	// (0x000b12f8) blid2_navig_ring_pane_ParamLimits

0x6d80,	// (0x000b12f8) blid2_navig_ring_pane

0x6d99,	// (0x000b1311) blid2_speed_pane_ParamLimits

0x6d99,	// (0x000b1311) blid2_speed_pane

0x6da5,	// (0x000b131d) blid2_tripm_pane_g1_ParamLimits

0x6da5,	// (0x000b131d) blid2_tripm_pane_g1

0x6dc0,	// (0x000b1338) blid2_tripm_pane_g2_ParamLimits

0x6dc0,	// (0x000b1338) blid2_tripm_pane_g2

0x6dd4,	// (0x000b134c) blid2_tripm_pane_g3_ParamLimits

0x6dd4,	// (0x000b134c) blid2_tripm_pane_g3

0x6de8,	// (0x000b1360) blid2_tripm_pane_g4_ParamLimits

0x6de8,	// (0x000b1360) blid2_tripm_pane_g4

0x6dfc,	// (0x000b1374) blid2_tripm_pane_g5_ParamLimits

0x6dfc,	// (0x000b1374) blid2_tripm_pane_g5

0x0005,

0xfaf5,	// (0x000ba06d) blid2_tripm_pane_g_ParamLimits

0xfaf5,	// (0x000ba06d) blid2_tripm_pane_g

0x6e22,	// (0x000b139a) blid2_tripm_pane_t1_ParamLimits

0x6e22,	// (0x000b139a) blid2_tripm_pane_t1

0x6e3d,	// (0x000b13b5) blid2_tripm_pane_t2_ParamLimits

0x6e3d,	// (0x000b13b5) blid2_tripm_pane_t2

0x6e56,	// (0x000b13ce) blid2_tripm_pane_t3_ParamLimits

0x6e56,	// (0x000b13ce) blid2_tripm_pane_t3

0x0003,

0xfb02,	// (0x000ba07a) blid2_tripm_pane_t_ParamLimits

0xfb02,	// (0x000ba07a) blid2_tripm_pane_t

0x6e9d,	// (0x000b1415) cell_blid2_satellite_pane_ParamLimits

0x6e9d,	// (0x000b1415) cell_blid2_satellite_pane

0x6ebb,	// (0x000b1433) cell_blid2_satellite_pane_g1

0xdbce,	// (0x000b8146) cell_blid2_satellite_pane_t1

0xcbc0,	// (0x000b7138) blid2_speed_pane_g1

0xdbdc,	// (0x000b8154) blid2_speed_pane_t1

0xdbea,	// (0x000b8162) blid2_speed_pane_t2

0x0001,

0xfb0b,	// (0x000ba083) blid2_speed_pane_t

0xcbc0,	// (0x000b7138) blid2_navig_ring_pane_g1

0x6ec4,	// (0x000b143c) blid2_navig_ring_pane_g2

0x6ecc,	// (0x000b1444) blid2_navig_ring_pane_g3

0x6ed4,	// (0x000b144c) blid2_navig_ring_pane_g4

0x6edc,	// (0x000b1454) blid2_navig_ring_pane_g5

0x0004,

0xfb10,	// (0x000ba088) blid2_navig_ring_pane_g

0x9325,	// (0x000b389d) bg_popup_window_pane_cp011

0xdbf8,	// (0x000b8170) popup_blid2_search_window_g1

0xdc00,	// (0x000b8178) popup_blid2_search_window_t1

0xdc0e,	// (0x000b8186) popup_blid2_search_window_t2

0x0001,

0xfb1b,	// (0x000ba093) popup_blid2_search_window_t

0xa530,	// (0x000b4aa8) main_browser_pane_g1

0xa213,	// (0x000b478b) main_browser_pane_ParamLimits

0x938d,	// (0x000b3905) bg_button_pane_cp011_ParamLimits

0x5dee,	// (0x000b0366) cell_vitu2_function_pane_g1_ParamLimits

0xc7b6,	// (0x000b6d2e) bg_popup_sub_pane_cp22_ParamLimits

0x674a,	// (0x000b0cc2) input_focus_pane_cp08_ParamLimits

0x6761,	// (0x000b0cd9) popup_vitu2_query_button_pane_ParamLimits

0x6761,	// (0x000b0cd9) popup_vitu2_query_button_pane

0x6772,	// (0x000b0cea) popup_vitu2_query_input_button_pane

0xd8a6,	// (0x000b7e1e) popup_vitu2_query_window_g1_ParamLimits

0x677c,	// (0x000b0cf4) popup_vitu2_query_window_g2_ParamLimits

0xfa1c,	// (0x000b9f94) popup_vitu2_query_window_g_ParamLimits

0x9325,	// (0x000b389d) bg_button_pane_cp026

0x6ee4,	// (0x000b145c) popup_vitu2_query_input_button_pane_g1

0x9325,	// (0x000b389d) bg_button_pane_cp025

0xdc1c,	// (0x000b8194) popup_vitu2_query_button_pane_t1

0x4409,	// (0x000ae981) main_mp3_pane_t6

0x4417,	// (0x000ae98f) popup_slider_window_cp01

0x9d2b,	// (0x000b42a3) cam4_battery_pane

0x9d84,	// (0x000b42fc) cam4_battery_pane_cp02

0x9e77,	// (0x000b43ef) cam4_battery_pane_cp01

0x9e77,	// (0x000b43ef) cam4_battery_pane_cp03

0xd4dd,	// (0x000b7a55) cam4_battery_pane_g1

0xcbc0,	// (0x000b7138) cam4_battery_pane_g2

0x0001,

0xfb20,	// (0x000ba098) cam4_battery_pane_g

0xca8a,	// (0x000b7002) popup_blid_sat_info2_window_t11

0xb18d,	// (0x000b5705) aid_size_touch_mv_arrow_left_ParamLimits

0xb1b8,	// (0x000b5730) aid_size_touch_mv_arrow_right_ParamLimits

0xb216,	// (0x000b578e) navi_pane_g1_ParamLimits

0xb222,	// (0x000b579a) navi_pane_g2_ParamLimits

0xb250,	// (0x000b57c8) navi_pane_g3_ParamLimits

0xf3e5,	// (0x000b995d) navi_pane_g_ParamLimits

0x2782,	// (0x000accfa) navi_pane_mv_t1_ParamLimits

0x504c,	// (0x000af5c4) grid_imed_effect_pane_ParamLimits

0x137a,	// (0x000ab8f2) aid_placing_vt_slider_lsc

0xa47f,	// (0x000b49f7) aid_placing_vt_slider_prt

0xa5de,	// (0x000b4b56) bg_tb_trans_pane_cp01_ParamLimits

0xcd40,	// (0x000b72b8) popup_image_details_window_g1_ParamLimits

0xcd53,	// (0x000b72cb) popup_image_details_window_g2_ParamLimits

0xcd68,	// (0x000b72e0) popup_image_details_window_g3_ParamLimits

0xcd68,	// (0x000b72e0) popup_image_details_window_g3

0xf718,	// (0x000b9c90) popup_image_details_window_g_ParamLimits

0xcd7c,	// (0x000b72f4) popup_image_details_window_t1_ParamLimits

0xcd8e,	// (0x000b7306) popup_image_details_window_t2_ParamLimits

0xcda7,	// (0x000b731f) popup_image_details_window_t3_ParamLimits

0xcdbb,	// (0x000b7333) popup_image_details_window_t4_ParamLimits

0xcdd6,	// (0x000b734e) popup_image_details_window_t5_ParamLimits

0xf71f,	// (0x000b9c97) popup_image_details_window_t_ParamLimits

0x6af4,	// (0x000b106c) cl_header_name_pane_ParamLimits

0x6af4,	// (0x000b106c) cl_header_name_pane

0x6eec,	// (0x000b1464) cl_header_name_pane_t1_ParamLimits

0x6eec,	// (0x000b1464) cl_header_name_pane_t1

0x6f0d,	// (0x000b1485) cl_header_name_pane_t2_ParamLimits

0x6f0d,	// (0x000b1485) cl_header_name_pane_t2

0x6f4f,	// (0x000b14c7) cl_header_name_pane_t3_ParamLimits

0x6f4f,	// (0x000b14c7) cl_header_name_pane_t3

0x0002,

0xfb25,	// (0x000ba09d) cl_header_name_pane_t_ParamLimits

0xfb25,	// (0x000ba09d) cl_header_name_pane_t

0xb2df,	// (0x000b5857) navi_pane_mv_g2_ParamLimits

0xd60f,	// (0x000b7b87) field_vitu2_entry_pane_g1_ParamLimits

0xd61b,	// (0x000b7b93) field_vitu2_entry_pane_g2_ParamLimits

0xd627,	// (0x000b7b9f) field_vitu2_entry_pane_g3_ParamLimits

0xd627,	// (0x000b7b9f) field_vitu2_entry_pane_g3

0xf91b,	// (0x000b9e93) field_vitu2_entry_pane_g_ParamLimits

0x5d65,	// (0x000b02dd) cell_vitu2_itu_pane_g1_ParamLimits

0x5d75,	// (0x000b02ed) cell_vitu2_itu_pane_g2_ParamLimits

0x5d75,	// (0x000b02ed) cell_vitu2_itu_pane_g2

0x0001,

0xf927,	// (0x000b9e9f) cell_vitu2_itu_pane_g_ParamLimits

0xf927,	// (0x000b9e9f) cell_vitu2_itu_pane_g

0x938d,	// (0x000b3905) bg_vkb2_func_pane_cp05_ParamLimits

0x938d,	// (0x000b3905) bg_vkb2_func_pane_cp05

0x938d,	// (0x000b3905) bg_vkb2_func_pane_cp03

0x938d,	// (0x000b3905) bg_vkb2_func_pane_cp04

0x938d,	// (0x000b3905) bg_vkb2_func_pane_cp10_ParamLimits

0x938d,	// (0x000b3905) bg_vkb2_func_pane_cp10

0x6a96,	// (0x000b100e) bg_vkb2_func_pane_cp08

0x6a7c,	// (0x000b0ff4) bg_vkb2_func_pane_cp06

0x6a8a,	// (0x000b1002) bg_vkb2_func_pane_cp07

0xdb2a,	// (0x000b80a2) bg_vkb2_func_pane_cp11_ParamLimits

0xdb2a,	// (0x000b80a2) bg_vkb2_func_pane_cp11

0xdb3f,	// (0x000b80b7) bg_vkb2_func_pane_cp12_ParamLimits

0xdb3f,	// (0x000b80b7) bg_vkb2_func_pane_cp12

0x9325,	// (0x000b389d) bg_vkb2_func_pane_cp09

0xd647,	// (0x000b7bbf) bg_vkb2_func_pane_g1

0xab23,	// (0x000b509b) bg_vkb2_func_pane_g2

0xd64f,	// (0x000b7bc7) bg_vkb2_func_pane_g3

0xd657,	// (0x000b7bcf) bg_vkb2_func_pane_g4

0xd86b,	// (0x000b7de3) bg_vkb2_func_pane_g5

0xd66f,	// (0x000b7be7) bg_vkb2_func_pane_g6

0xd677,	// (0x000b7bef) bg_vkb2_func_pane_g7

0xd667,	// (0x000b7bdf) bg_vkb2_func_pane_g8

0xab03,	// (0x000b507b) bg_vkb2_func_pane_g9

0x0008,

0xfb2c,	// (0x000ba0a4) bg_vkb2_func_pane_g

0x6e10,	// (0x000b1388) blid2_tripm_pane_g6_ParamLimits

0x6e10,	// (0x000b1388) blid2_tripm_pane_g6

0xd497,	// (0x000b7a0f) mp4_progress_pane_g1

0x6e89,	// (0x000b1401) blid2_tripm_values_pane_ParamLimits

0x6e89,	// (0x000b1401) blid2_tripm_values_pane

0x6f80,	// (0x000b14f8) blid2_tripm_values_pane_t1

0x6f8e,	// (0x000b1506) blid2_tripm_values_pane_t2

0x6f9c,	// (0x000b1514) blid2_tripm_values_pane_t3

0x6faa,	// (0x000b1522) blid2_tripm_values_pane_t4

0x6fb8,	// (0x000b1530) blid2_tripm_values_pane_t5

0x6fc6,	// (0x000b153e) blid2_tripm_values_pane_t6

0x6fd4,	// (0x000b154c) blid2_tripm_values_pane_t7

0x6fe2,	// (0x000b155a) blid2_tripm_values_pane_t8

0x6ff0,	// (0x000b1568) blid2_tripm_values_pane_t9

0x0008,

0xfb3f,	// (0x000ba0b7) blid2_tripm_values_pane_t

0x13bc,	// (0x000ab934) call_video_pane_t1_ParamLimits

0x13da,	// (0x000ab952) call_video_pane_t2_ParamLimits

0xf26e,	// (0x000b97e6) call_video_pane_t_ParamLimits

0x2c64,	// (0x000ad1dc) msg_header_pane_g1_ParamLimits

0xb4cf,	// (0x000b5a47) msg_header_pane_g2_ParamLimits

0xb4cf,	// (0x000b5a47) msg_header_pane_g2

0x0001,

0xf488,	// (0x000b9a00) msg_header_pane_g_ParamLimits

0xf488,	// (0x000b9a00) msg_header_pane_g

0xa213,	// (0x000b478b) main_clock2_pane_ParamLimits

0x4d45,	// (0x000af2bd) grid_clock2_toolbar_pane_ParamLimits

0x4d45,	// (0x000af2bd) grid_clock2_toolbar_pane

0x4d45,	// (0x000af2bd) listscroll_clock2_pane_ParamLimits

0x4d45,	// (0x000af2bd) listscroll_clock2_pane

0x4e3e,	// (0x000af3b6) main_clock2_pane_t3_ParamLimits

0x4e3e,	// (0x000af3b6) main_clock2_pane_t3

0x4e62,	// (0x000af3da) main_clock2_pane_t4_ParamLimits

0x4e62,	// (0x000af3da) main_clock2_pane_t4

0xdc2a,	// (0x000b81a2) cell_clock2_toolbar_pane

0xdc32,	// (0x000b81aa) cell_clock2_toolbar_pane_cp01

0xdc32,	// (0x000b81aa) cell_clock2_toolbar_pane_cp02

0xdc3a,	// (0x000b81b2) cell_clock2_toolbar_pane_cp03

0xdc42,	// (0x000b81ba) list_clock2_pane

0xb103,	// (0x000b567b) scroll_pane_cp10

0xdc4a,	// (0x000b81c2) list_single_clock2_pane_ParamLimits

0xdc4a,	// (0x000b81c2) list_single_clock2_pane

0xb346,	// (0x000b58be) list_highlight_pane_cp08

0xdc57,	// (0x000b81cf) list_single_clock2_pane_t1

0xdc65,	// (0x000b81dd) list_single_clock2_pane_t2

0x0001,

0xfb52,	// (0x000ba0ca) list_single_clock2_pane_t

0x9325,	// (0x000b389d) bg_button_pane_cp10

0xdc73,	// (0x000b81eb) cell_clock2_toolbar_pane_g1

0x2ceb,	// (0x000ad263) aid_main_viewer_pane_g1_ParamLimits

0x2ceb,	// (0x000ad263) aid_main_viewer_pane_g1

0x2cf9,	// (0x000ad271) aid_main_viewer_pane_g2_ParamLimits

0x2cf9,	// (0x000ad271) aid_main_viewer_pane_g2

0x2d07,	// (0x000ad27f) aid_main_viewer_pane_g3_ParamLimits

0x2d07,	// (0x000ad27f) aid_main_viewer_pane_g3

0x2d16,	// (0x000ad28e) aid_main_viewer_pane_g4_ParamLimits

0x2d16,	// (0x000ad28e) aid_main_viewer_pane_g4

0x0003,

0xf499,	// (0x000b9a11) aid_main_viewer_pane_g_ParamLimits

0xf499,	// (0x000b9a11) aid_main_viewer_pane_g

0x3624,	// (0x000adb9c) main_calc_pane_ParamLimits

0x364a,	// (0x000adbc2) main_dialer2_pane_ParamLimits

0x939b,	// (0x000b3913) main_cam6_pane

0x939b,	// (0x000b3913) main_vid6_pane

0x4d51,	// (0x000af2c9) listscroll_gen_pane_cp06_ParamLimits

0x4d51,	// (0x000af2c9) listscroll_gen_pane_cp06

0x4e85,	// (0x000af3fd) main_clock2_pane_t5_ParamLimits

0x4e85,	// (0x000af3fd) main_clock2_pane_t5

0x4ee1,	// (0x000af459) aid_call2_pane_cp10_ParamLimits

0x4ef3,	// (0x000af46b) aid_call_pane_cp10_ParamLimits

0xb181,	// (0x000b56f9) popup_clock_analogue_window_cp10_g1_ParamLimits

0xb181,	// (0x000b56f9) popup_clock_analogue_window_cp10_g2_ParamLimits

0x4f05,	// (0x000af47d) popup_clock_analogue_window_cp10_g3_ParamLimits

0x4f05,	// (0x000af47d) popup_clock_analogue_window_cp10_g4_ParamLimits

0xb181,	// (0x000b56f9) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf7d4,	// (0x000b9d4c) popup_clock_analogue_window_cp10_g_ParamLimits

0x4f17,	// (0x000af48f) popup_clock_analogue_window_cp10_t1_ParamLimits

0x55a7,	// (0x000afb1f) cell_dialer2_keypad_pane_g2_ParamLimits

0x55a7,	// (0x000afb1f) cell_dialer2_keypad_pane_g2

0x0001,

0xf8ba,	// (0x000b9e32) cell_dialer2_keypad_pane_g_ParamLimits

0xf8ba,	// (0x000b9e32) cell_dialer2_keypad_pane_g

0x55c3,	// (0x000afb3b) cell_dialer2_keypad_pane_t1

0x6104,	// (0x000b067c) main_cset_text2_pane_ParamLimits

0x6104,	// (0x000b067c) main_cset_text2_pane

0xda92,	// (0x000b800a) area_vitu2_query_pane_g1_ParamLimits

0x6a1b,	// (0x000b0f93) area_vitu2_query_pane_g2_ParamLimits

0xfa6f,	// (0x000b9fe7) area_vitu2_query_pane_g_ParamLimits

0xa745,	// (0x000b4cbd) area_vitu2_query_pane_t7_ParamLimits

0xa745,	// (0x000b4cbd) area_vitu2_query_pane_t7

0x6a7c,	// (0x000b0ff4) bg_button_pane_cp018_ParamLimits

0x6a8a,	// (0x000b1002) bg_button_pane_cp021_ParamLimits

0x6a96,	// (0x000b100e) bg_button_pane_cp022_ParamLimits

0x6a96,	// (0x000b100e) bg_vkb2_func_pane_cp08_ParamLimits

0x6a7c,	// (0x000b0ff4) bg_vkb2_func_pane_cp06_ParamLimits

0x6a8a,	// (0x000b1002) bg_vkb2_func_pane_cp07_ParamLimits

0x6aa7,	// (0x000b101f) input_focus_pane_cp09_ParamLimits

0x9ee8,	// (0x000b4460) cam6_autofocus_pane_ParamLimits

0x9ee8,	// (0x000b4460) cam6_autofocus_pane

0x6ffe,	// (0x000b1576) cam6_image_uncrop_pane_ParamLimits

0x6ffe,	// (0x000b1576) cam6_image_uncrop_pane

0x700d,	// (0x000b1585) cam6_indi_pane_ParamLimits

0x700d,	// (0x000b1585) cam6_indi_pane

0x7023,	// (0x000b159b) cam6_mode_pane_ParamLimits

0x7023,	// (0x000b159b) cam6_mode_pane

0x7035,	// (0x000b15ad) cam6_timer_pane_ParamLimits

0x7035,	// (0x000b15ad) cam6_timer_pane

0x7041,	// (0x000b15b9) cam6_zoom_pane_ParamLimits

0x7041,	// (0x000b15b9) cam6_zoom_pane

0x704d,	// (0x000b15c5) cam6_mode_pane_g1_ParamLimits

0x704d,	// (0x000b15c5) cam6_mode_pane_g1

0x705d,	// (0x000b15d5) cam6_mode_pane_g2_ParamLimits

0x705d,	// (0x000b15d5) cam6_mode_pane_g2

0x706d,	// (0x000b15e5) cam6_mode_pane_g3_ParamLimits

0x706d,	// (0x000b15e5) cam6_mode_pane_g3

0x707d,	// (0x000b15f5) cam6_mode_pane_g4_ParamLimits

0x707d,	// (0x000b15f5) cam6_mode_pane_g4

0x0003,

0xfb57,	// (0x000ba0cf) cam6_mode_pane_g_ParamLimits

0xfb57,	// (0x000ba0cf) cam6_mode_pane_g

0xdc7b,	// (0x000b81f3) bg_tb_trans_pane_cp08_ParamLimits

0xdc7b,	// (0x000b81f3) bg_tb_trans_pane_cp08

0xdc89,	// (0x000b8201) cam6_battery_pane_ParamLimits

0xdc89,	// (0x000b8201) cam6_battery_pane

0xdc9f,	// (0x000b8217) cam6_indi_pane_g1_ParamLimits

0xdc9f,	// (0x000b8217) cam6_indi_pane_g1

0xdcb1,	// (0x000b8229) cam6_indi_pane_g2_ParamLimits

0xdcb1,	// (0x000b8229) cam6_indi_pane_g2

0xdcc3,	// (0x000b823b) cam6_indi_pane_g3_ParamLimits

0xdcc3,	// (0x000b823b) cam6_indi_pane_g3

0x0002,

0xfb60,	// (0x000ba0d8) cam6_indi_pane_g_ParamLimits

0xfb60,	// (0x000ba0d8) cam6_indi_pane_g

0xdcd5,	// (0x000b824d) cam6_indi_pane_t1_ParamLimits

0xdcd5,	// (0x000b824d) cam6_indi_pane_t1

0x708d,	// (0x000b1605) cam6_autofocus_pane_g1

0x7095,	// (0x000b160d) cam6_autofocus_pane_g2

0x709d,	// (0x000b1615) cam6_autofocus_pane_g3

0x70a5,	// (0x000b161d) cam6_autofocus_pane_g4

0x0003,

0xfb67,	// (0x000ba0df) cam6_autofocus_pane_g

0xdcfb,	// (0x000b8273) cam6_timer_pane_g1

0xdd03,	// (0x000b827b) cam6_timer_pane_t1

0xdd11,	// (0x000b8289) cam6_zoom_cont_pane

0xdd19,	// (0x000b8291) cam6_zoom_pane_g1

0xdd21,	// (0x000b8299) cam6_zoom_pane_g2

0x70ad,	// (0x000b1625) cam6_zoom_pane_g3

0x0002,

0xfb70,	// (0x000ba0e8) cam6_zoom_pane_g

0xcbc0,	// (0x000b7138) cam6_battery_pane_g1

0xcbc0,	// (0x000b7138) cam6_battery_pane_g2

0x0001,

0xf6dc,	// (0x000b9c54) cam6_battery_pane_g

0xdd29,	// (0x000b82a1) cam6_zoom_cont_pane_g1

0xdd32,	// (0x000b82aa) cam6_zoom_cont_pane_g2

0xdd3b,	// (0x000b82b3) cam6_zoom_cont_pane_g3

0x0002,

0xfb77,	// (0x000ba0ef) cam6_zoom_cont_pane_g

0x70ca,	// (0x000b1642) cam6_mode_pane_cp_ParamLimits

0x70ca,	// (0x000b1642) cam6_mode_pane_cp

0x70dc,	// (0x000b1654) cam6_zoom_pane_cp_ParamLimits

0x70dc,	// (0x000b1654) cam6_zoom_pane_cp

0x70e8,	// (0x000b1660) vid6_image_uncrop_cif_pane_ParamLimits

0x70e8,	// (0x000b1660) vid6_image_uncrop_cif_pane

0x70f8,	// (0x000b1670) vid6_image_uncrop_nhd_pane_ParamLimits

0x70f8,	// (0x000b1670) vid6_image_uncrop_nhd_pane

0x7107,	// (0x000b167f) vid6_image_uncrop_vga_pane_ParamLimits

0x7107,	// (0x000b167f) vid6_image_uncrop_vga_pane

0x7116,	// (0x000b168e) vid6_image_uncrop_wvga_pane_ParamLimits

0x7116,	// (0x000b168e) vid6_image_uncrop_wvga_pane

0x7125,	// (0x000b169d) vid6_indi_pane_ParamLimits

0x7125,	// (0x000b169d) vid6_indi_pane

0xdc7b,	// (0x000b81f3) bg_tb_trans_pane_cp09_ParamLimits

0xdc7b,	// (0x000b81f3) bg_tb_trans_pane_cp09

0xdd53,	// (0x000b82cb) cam6_battery_pane_cp_ParamLimits

0xdd53,	// (0x000b82cb) cam6_battery_pane_cp

0xdd5f,	// (0x000b82d7) vid6_indi_pane_g1_ParamLimits

0xdd5f,	// (0x000b82d7) vid6_indi_pane_g1

0xdd71,	// (0x000b82e9) vid6_indi_pane_g2_ParamLimits

0xdd71,	// (0x000b82e9) vid6_indi_pane_g2

0xdd83,	// (0x000b82fb) vid6_indi_pane_g3_ParamLimits

0xdd83,	// (0x000b82fb) vid6_indi_pane_g3

0xdd98,	// (0x000b8310) vid6_indi_pane_g4_ParamLimits

0xdd98,	// (0x000b8310) vid6_indi_pane_g4

0xddad,	// (0x000b8325) vid6_indi_pane_g5_ParamLimits

0xddad,	// (0x000b8325) vid6_indi_pane_g5

0x0004,

0xfb7e,	// (0x000ba0f6) vid6_indi_pane_g_ParamLimits

0xfb7e,	// (0x000ba0f6) vid6_indi_pane_g

0xddc7,	// (0x000b833f) vid6_indi_pane_t1_ParamLimits

0xddc7,	// (0x000b833f) vid6_indi_pane_t1

0xdddd,	// (0x000b8355) vid6_indi_pane_t2_ParamLimits

0xdddd,	// (0x000b8355) vid6_indi_pane_t2

0xde05,	// (0x000b837d) vid6_indi_pane_t3_ParamLimits

0xde05,	// (0x000b837d) vid6_indi_pane_t3

0xde2d,	// (0x000b83a5) vid6_indi_pane_t4_ParamLimits

0xde2d,	// (0x000b83a5) vid6_indi_pane_t4

0x0003,

0xfb89,	// (0x000ba101) vid6_indi_pane_t_ParamLimits

0xfb89,	// (0x000ba101) vid6_indi_pane_t

0xde51,	// (0x000b83c9) wait_bar_pane_cp08

0x713d,	// (0x000b16b5) main_cset_text2_pane_t1_ParamLimits

0x713d,	// (0x000b16b5) main_cset_text2_pane_t1

0x70b5,	// (0x000b162d) listscroll_gen_pane_cp06_t1_ParamLimits

0x70b5,	// (0x000b162d) listscroll_gen_pane_cp06_t1

0x939b,	// (0x000b3913) main_cam6_set_pane

0x9d1d,	// (0x000b4295) bg_tb_trans_pane_cp06_ParamLimits

0x9d33,	// (0x000b42ab) cam4_indicators_pane_g1_ParamLimits

0x9d44,	// (0x000b42bc) cam4_indicators_pane_g2_ParamLimits

0xf8f7,	// (0x000b9e6f) cam4_indicators_pane_g_ParamLimits

0x9d62,	// (0x000b42da) cam4_indicators_pane_t1_ParamLimits

0x938d,	// (0x000b3905) bg_tb_trans_pane_cp07_ParamLimits

0x9d8c,	// (0x000b4304) vid4_indicators_pane_g1_ParamLimits

0x9da0,	// (0x000b4318) vid4_indicators_pane_g2_ParamLimits

0x9db4,	// (0x000b432c) vid4_indicators_pane_g3_ParamLimits

0x9dc5,	// (0x000b433d) vid4_indicators_pane_g4_ParamLimits

0xf909,	// (0x000b9e81) vid4_indicators_pane_g_ParamLimits

0x9de1,	// (0x000b4359) vid4_indicators_pane_t1_ParamLimits

0x9e7f,	// (0x000b43f7) vid4_progress_pane_g1_ParamLimits

0x9e8f,	// (0x000b4407) vid4_progress_pane_g2_ParamLimits

0x6be7,	// (0x000b115f) vid4_progress_pane_g3_ParamLimits

0x9e9f,	// (0x000b4417) vid4_progress_pane_g4_ParamLimits

0xfaba,	// (0x000ba032) vid4_progress_pane_g_ParamLimits

0x6bf9,	// (0x000b1171) vid4_progress_pane_t1_ParamLimits

0x9ebd,	// (0x000b4435) vid4_progress_pane_t2_ParamLimits

0x9ed2,	// (0x000b444a) vid4_progress_pane_t3_ParamLimits

0xfac5,	// (0x000ba03d) vid4_progress_pane_t_ParamLimits

0x6c0f,	// (0x000b1187) wait_bar_pane_cp07_ParamLimits

0x715c,	// (0x000b16d4) main_cam6_set_pane_g2_ParamLimits

0x715c,	// (0x000b16d4) main_cam6_set_pane_g2

0x7180,	// (0x000b16f8) main_cset6_listscroll_pane_ParamLimits

0x7180,	// (0x000b16f8) main_cset6_listscroll_pane

0x719c,	// (0x000b1714) main_cset6_slider_pane_ParamLimits

0x719c,	// (0x000b1714) main_cset6_slider_pane

0x71b2,	// (0x000b172a) main_cset6_text2_pane_ParamLimits

0x71b2,	// (0x000b172a) main_cset6_text2_pane

0xde60,	// (0x000b83d8) main_cset6_text_pane

0xde68,	// (0x000b83e0) main_cset_list_pane_copy1_ParamLimits

0xde68,	// (0x000b83e0) main_cset_list_pane_copy1

0xde78,	// (0x000b83f0) scroll_pane_cp028_copy1

0x71c0,	// (0x000b1738) cset_list_set_pane_copy1

0x71d2,	// (0x000b174a) aid_position_infowindow_above_copy1

0x71da,	// (0x000b1752) aid_position_infowindow_below_copy1

0x71e2,	// (0x000b175a) cset_list_set_pane_g1_copy1

0x71ea,	// (0x000b1762) cset_list_set_pane_g3_copy1_ParamLimits

0x71ea,	// (0x000b1762) cset_list_set_pane_g3_copy1

0x71f9,	// (0x000b1771) cset_list_set_pane_t1_copy1_ParamLimits

0x71f9,	// (0x000b1771) cset_list_set_pane_t1_copy1

0xa5de,	// (0x000b4b56) list_highlight_pane_cp021_copy1_ParamLimits

0xa5de,	// (0x000b4b56) list_highlight_pane_cp021_copy1

0xde81,	// (0x000b83f9) cset6_slider_pane_ParamLimits

0xde81,	// (0x000b83f9) cset6_slider_pane

0xdead,	// (0x000b8425) main_cset6_slider_pane_g1_ParamLimits

0xdead,	// (0x000b8425) main_cset6_slider_pane_g1

0x720e,	// (0x000b1786) main_cset6_slider_pane_g2_ParamLimits

0x720e,	// (0x000b1786) main_cset6_slider_pane_g2

0xded5,	// (0x000b844d) main_cset6_slider_pane_g3_ParamLimits

0xded5,	// (0x000b844d) main_cset6_slider_pane_g3

0x7236,	// (0x000b17ae) main_cset6_slider_pane_g4_ParamLimits

0x7236,	// (0x000b17ae) main_cset6_slider_pane_g4

0x7242,	// (0x000b17ba) main_cset6_slider_pane_g5_ParamLimits

0x7242,	// (0x000b17ba) main_cset6_slider_pane_g5

0xd776,	// (0x000b7cee) main_cset6_slider_pane_g7_ParamLimits

0xd776,	// (0x000b7cee) main_cset6_slider_pane_g7

0xd782,	// (0x000b7cfa) main_cset6_slider_pane_g8_ParamLimits

0xd782,	// (0x000b7cfa) main_cset6_slider_pane_g8

0x61b1,	// (0x000b0729) main_cset6_slider_pane_g9_ParamLimits

0x61b1,	// (0x000b0729) main_cset6_slider_pane_g9

0x61bd,	// (0x000b0735) main_cset6_slider_pane_g10_ParamLimits

0x61bd,	// (0x000b0735) main_cset6_slider_pane_g10

0x61c9,	// (0x000b0741) main_cset6_slider_pane_g11_ParamLimits

0x61c9,	// (0x000b0741) main_cset6_slider_pane_g11

0x61d5,	// (0x000b074d) main_cset6_slider_pane_g12_ParamLimits

0x61d5,	// (0x000b074d) main_cset6_slider_pane_g12

0x61e1,	// (0x000b0759) main_cset6_slider_pane_g13_ParamLimits

0x61e1,	// (0x000b0759) main_cset6_slider_pane_g13

0x61ed,	// (0x000b0765) main_cset6_slider_pane_g14_ParamLimits

0x61ed,	// (0x000b0765) main_cset6_slider_pane_g14

0x724e,	// (0x000b17c6) main_cset6_slider_pane_g15_ParamLimits

0x724e,	// (0x000b17c6) main_cset6_slider_pane_g15

0x6211,	// (0x000b0789) main_cset6_slider_pane_g16_ParamLimits

0x6211,	// (0x000b0789) main_cset6_slider_pane_g16

0x621d,	// (0x000b0795) main_cset6_slider_pane_g17_ParamLimits

0x621d,	// (0x000b0795) main_cset6_slider_pane_g17

0x0011,

0xfb92,	// (0x000ba10a) main_cset6_slider_pane_g_ParamLimits

0xfb92,	// (0x000ba10a) main_cset6_slider_pane_g

0xdee1,	// (0x000b8459) main_cset6_slider_pane_t1_ParamLimits

0xdee1,	// (0x000b8459) main_cset6_slider_pane_t1

0x727e,	// (0x000b17f6) main_cset6_slider_pane_t2_ParamLimits

0x727e,	// (0x000b17f6) main_cset6_slider_pane_t2

0x72a9,	// (0x000b1821) main_cset6_slider_pane_t3_ParamLimits

0x72a9,	// (0x000b1821) main_cset6_slider_pane_t3

0x72d4,	// (0x000b184c) main_cset6_slider_pane_t4_ParamLimits

0x72d4,	// (0x000b184c) main_cset6_slider_pane_t4

0x72ff,	// (0x000b1877) main_cset6_slider_pane_t5_ParamLimits

0x72ff,	// (0x000b1877) main_cset6_slider_pane_t5

0xdf22,	// (0x000b849a) main_cset6_slider_pane_t7_ParamLimits

0xdf22,	// (0x000b849a) main_cset6_slider_pane_t7

0x732a,	// (0x000b18a2) main_cset6_slider_pane_t8_ParamLimits

0x732a,	// (0x000b18a2) main_cset6_slider_pane_t8

0x734e,	// (0x000b18c6) main_cset6_slider_pane_t9_ParamLimits

0x734e,	// (0x000b18c6) main_cset6_slider_pane_t9

0x7372,	// (0x000b18ea) main_cset6_slider_pane_t10_ParamLimits

0x7372,	// (0x000b18ea) main_cset6_slider_pane_t10

0x7396,	// (0x000b190e) main_cset6_slider_pane_t11_ParamLimits

0x7396,	// (0x000b190e) main_cset6_slider_pane_t11

0xdf58,	// (0x000b84d0) main_cset6_slider_pane_t14_ParamLimits

0xdf58,	// (0x000b84d0) main_cset6_slider_pane_t14

0xdf91,	// (0x000b8509) main_cset6_slider_pane_t15_ParamLimits

0xdf91,	// (0x000b8509) main_cset6_slider_pane_t15

0x000b,

0xfbb7,	// (0x000ba12f) main_cset6_slider_pane_t_ParamLimits

0xfbb7,	// (0x000ba12f) main_cset6_slider_pane_t

0xdfca,	// (0x000b8542) cset_slider_pane_g1_copy1

0xdfd3,	// (0x000b854b) cset_slider_pane_g2_copy1

0xdfdc,	// (0x000b8554) cset_slider_pane_g3_copy1

0x9325,	// (0x000b389d) bg_popup_sub_pane_cp011_copy1

0xdfe5,	// (0x000b855d) main_cset_text_pane_g1_copy1

0xd8ba,	// (0x000b7e32) main_cset_text_pane_t1_copy1

0xd8c8,	// (0x000b7e40) main_cset_text_pane_t2_copy1

0xd8d6,	// (0x000b7e4e) main_cset_text_pane_t3_copy1

0xd8e4,	// (0x000b7e5c) main_cset_text_pane_t4_copy1

0xd8f2,	// (0x000b7e6a) main_cset_text_pane_t5_copy1

0xdfed,	// (0x000b8565) main_cset_text_pane_t6_copy1

0xdffb,	// (0x000b8573) main_cset_text_pane_t7_copy1

0x7489,	// (0x000b1a01) main_cset_text2_pane_t1_copy1

0x938d,	// (0x000b3905) main_ncimui_pane

0x3886,	// (0x000addfe) popup_query_ncimui_window_ParamLimits

0x3886,	// (0x000addfe) popup_query_ncimui_window

0xa628,	// (0x000b4ba0) field_cale_ev2_pane_g4_ParamLimits

0xa628,	// (0x000b4ba0) field_cale_ev2_pane_g4

0x5483,	// (0x000af9fb) cell_video_dialer_keypad_pane_g2_ParamLimits

0x5483,	// (0x000af9fb) cell_video_dialer_keypad_pane_g2

0x0001,

0xf895,	// (0x000b9e0d) cell_video_dialer_keypad_pane_g_ParamLimits

0xf895,	// (0x000b9e0d) cell_video_dialer_keypad_pane_g

0x549b,	// (0x000afa13) cell_video_dialer_keypad_pane_t1

0x9325,	// (0x000b389d) bg_popup_window_pane_cp012

0xafc4,	// (0x000b553c) heading_pane_cp06

0xe027,	// (0x000b859f) ncim_query_content_pane

0x9325,	// (0x000b389d) bg_popup_heading_pane_cp01

0xe02f,	// (0x000b85a7) ncim_heading_pane_t1

0xe03d,	// (0x000b85b5) ncim_indicator_popup_pane

0xe04f,	// (0x000b85c7) ncim_query_button_pane

0xe063,	// (0x000b85db) ncim_query_content_pane_t1

0xe075,	// (0x000b85ed) ncim_query_content_pane_t2

0x0005,

0xfbfb,	// (0x000ba173) ncim_query_content_pane_t

0xe0af,	// (0x000b8627) ncim_query_list_pane

0xe0c1,	// (0x000b8639) ncim_query_popup_pane

0xe03d,	// (0x000b85b5) ncim_indicator_popup_pane_ParamLimits

0x75cd,	// (0x000b1b45) ncim_query_content_pane_g1_ParamLimits

0x75cd,	// (0x000b1b45) ncim_query_content_pane_g1

0xe063,	// (0x000b85db) ncim_query_content_pane_t1_ParamLimits

0xe075,	// (0x000b85ed) ncim_query_content_pane_t2_ParamLimits

0x75d9,	// (0x000b1b51) ncim_query_content_pane_t3_ParamLimits

0x75d9,	// (0x000b1b51) ncim_query_content_pane_t3

0x7601,	// (0x000b1b79) ncim_query_content_pane_t4_ParamLimits

0x7601,	// (0x000b1b79) ncim_query_content_pane_t4

0x7629,	// (0x000b1ba1) ncim_query_content_pane_t5_ParamLimits

0x7629,	// (0x000b1ba1) ncim_query_content_pane_t5

0xe087,	// (0x000b85ff) ncim_query_content_pane_t6_ParamLimits

0xe087,	// (0x000b85ff) ncim_query_content_pane_t6

0xfbfb,	// (0x000ba173) ncim_query_content_pane_t_ParamLimits

0xe0af,	// (0x000b8627) ncim_query_list_pane_ParamLimits

0xe0c1,	// (0x000b8639) ncim_query_popup_pane_ParamLimits

0xe0d5,	// (0x000b864d) wait_bar_pane_cp04

0x9325,	// (0x000b389d) input_focus_pane_cp011

0xe0dd,	// (0x000b8655) ncim_query_popup_pane_t1

0xe0eb,	// (0x000b8663) ncim_list_query_list_pane_ParamLimits

0xe0eb,	// (0x000b8663) ncim_list_query_list_pane

0x9325,	// (0x000b389d) bg_button_pane_cp027

0xe0fe,	// (0x000b8676) ncim_query_button_pane_g1

0x9325,	// (0x000b389d) list_highlight_pane_cp012

0xe108,	// (0x000b8680) ncim_list_query_list_pane_g1

0xe110,	// (0x000b8688) ncim_list_query_list_pane_t1

0x9d53,	// (0x000b42cb) cam4_indicators_pane_g3_ParamLimits

0x9d53,	// (0x000b42cb) cam4_indicators_pane_g3

0x9dd1,	// (0x000b4349) vid4_indicators_pane_g5_ParamLimits

0x9dd1,	// (0x000b4349) vid4_indicators_pane_g5

0x9eae,	// (0x000b4426) vid4_progress_pane_g5_ParamLimits

0x9eae,	// (0x000b4426) vid4_progress_pane_g5

0x74bb,	// (0x000b1a33) main_ncimui_pane_g1

0x7521,	// (0x000b1a99) ncimui_group_query_pane_ParamLimits

0x7521,	// (0x000b1a99) ncimui_group_query_pane

0x7569,	// (0x000b1ae1) ncimui_list_pane_ParamLimits

0x7569,	// (0x000b1ae1) ncimui_list_pane

0x7590,	// (0x000b1b08) ncimui_text_pane_ParamLimits

0x7590,	// (0x000b1b08) ncimui_text_pane

0x7651,	// (0x000b1bc9) ncimui_text_pane_t1_ParamLimits

0x7651,	// (0x000b1bc9) ncimui_text_pane_t1

0xe11e,	// (0x000b8696) ncimui_list_single_graphic_pane_ParamLimits

0xe11e,	// (0x000b8696) ncimui_list_single_graphic_pane

0x766f,	// (0x000b1be7) ncimui_query_pane_ParamLimits

0x766f,	// (0x000b1be7) ncimui_query_pane

0x9325,	// (0x000b389d) list_highlight_pane_cp013

0xe12e,	// (0x000b86a6) ncim_list_query_list_pane_t1_copy1

0xe108,	// (0x000b8680) ncim_list_single_graphic_pane_g1

0xe13c,	// (0x000b86b4) ncim_query_button_pane_cp01

0xe148,	// (0x000b86c0) ncim_query_entry_pane_ParamLimits

0xe148,	// (0x000b86c0) ncim_query_entry_pane

0xe15b,	// (0x000b86d3) ncimui_query_pane_g1

0xe167,	// (0x000b86df) ncimui_query_pane_t1_ParamLimits

0xe167,	// (0x000b86df) ncimui_query_pane_t1

0xa5de,	// (0x000b4b56) input_focus_pane_cp012

0xe180,	// (0x000b86f8) ncim_query_entry_pane_t1

0xa213,	// (0x000b478b) main_im_pane_ParamLimits

0x938d,	// (0x000b3905) main_mobtv_pane_ParamLimits

0x938d,	// (0x000b3905) main_mobtv_pane

0x7266,	// (0x000b17de) main_cset6_slider_pane_g18_ParamLimits

0x7266,	// (0x000b17de) main_cset6_slider_pane_g18

0x7272,	// (0x000b17ea) main_cset6_slider_pane_g19_ParamLimits

0x7272,	// (0x000b17ea) main_cset6_slider_pane_g19

0x7682,	// (0x000b1bfa) bg_main_mobtv_pane_ParamLimits

0x7682,	// (0x000b1bfa) bg_main_mobtv_pane

0x7690,	// (0x000b1c08) main_mobtv_info_pane

0x7699,	// (0x000b1c11) main_mobtv_loading_pane_ParamLimits

0x7699,	// (0x000b1c11) main_mobtv_loading_pane

0xe192,	// (0x000b870a) main_mobtv_pg_channel_list_pane

0xe19c,	// (0x000b8714) main_mobtv_pg_hdr_pane

0x76a6,	// (0x000b1c1e) main_mobtv_programe_curr_pane_ParamLimits

0x76a6,	// (0x000b1c1e) main_mobtv_programe_curr_pane

0x76b3,	// (0x000b1c2b) main_mobtv_programe_next_pane_ParamLimits

0x76b3,	// (0x000b1c2b) main_mobtv_programe_next_pane

0xe1a5,	// (0x000b871d) popup_mobtv_noti_window

0xcbc0,	// (0x000b7138) main_tv_pg_hdr_pane_g1

0xe1ad,	// (0x000b8725) main_tv_pg_hdr_pane_g2

0xe1b5,	// (0x000b872d) main_tv_pg_hdr_pane_g3

0xe1bd,	// (0x000b8735) main_tv_pg_hdr_pane_g4

0xe1c5,	// (0x000b873d) main_tv_pg_hdr_pane_g5

0xe1cf,	// (0x000b8747) main_tv_pg_hdr_pane_g6

0xe1d9,	// (0x000b8751) main_tv_pg_hdr_pane_g7

0xe1e3,	// (0x000b875b) main_tv_pg_hdr_pane_g8

0xe1ed,	// (0x000b8765) main_tv_pg_hdr_pane_g9

0xe1f7,	// (0x000b876f) main_tv_pg_hdr_pane_g10

0xe201,	// (0x000b8779) main_tv_pg_hdr_pane_g11

0x000a,

0xfc08,	// (0x000ba180) main_tv_pg_hdr_pane_g

0xe20b,	// (0x000b8783) main_tv_pg_hdr_pane_t1

0xe219,	// (0x000b8791) main_tv_pg_hdr_pane_t2

0xe227,	// (0x000b879f) main_tv_pg_hdr_pane_t3

0xe237,	// (0x000b87af) main_tv_pg_hdr_pane_t4

0xe247,	// (0x000b87bf) main_tv_pg_hdr_pane_t5

0x0004,

0xfc1f,	// (0x000ba197) main_tv_pg_hdr_pane_t

0xe257,	// (0x000b87cf) single_mobtv_pg_channel_pane_ParamLimits

0xe257,	// (0x000b87cf) single_mobtv_pg_channel_pane

0xe269,	// (0x000b87e1) single_mobtv_pg_channel_table_pane

0xe272,	// (0x000b87ea) single_mobtv_pg_channel_thumb_pane

0xe27b,	// (0x000b87f3) single_tv_pg_channel_pane_g1

0xe284,	// (0x000b87fc) single_tv_pg_channel_pane_g2

0x0001,

0xfc2a,	// (0x000ba1a2) single_tv_pg_channel_pane_g

0xce20,	// (0x000b7398) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xce20,	// (0x000b7398) bg_single_mobtv_pg_channel_thumb_pane

0xe28d,	// (0x000b8805) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xe28d,	// (0x000b8805) single_mobtv_pg_channel_thumb_pane_g1

0xe29b,	// (0x000b8813) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xe29b,	// (0x000b8813) single_mobtv_pg_channel_thumb_pane_g2

0xe2a7,	// (0x000b881f) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xe2a7,	// (0x000b881f) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfc2f,	// (0x000ba1a7) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfc2f,	// (0x000ba1a7) single_mobtv_pg_channel_thumb_pane_g

0xe2b3,	// (0x000b882b) single_mobtv_pg_channel_thumb_pane_t1

0xe2c1,	// (0x000b8839) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc36,	// (0x000ba1ae) single_mobtv_pg_channel_thumb_pane_t

0xcbc0,	// (0x000b7138) bg_single_mobtv_pg_channel_table_pane_g1

0xcbc0,	// (0x000b7138) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf6dc,	// (0x000b9c54) bg_single_mobtv_pg_channel_table_pane_g

0xe2cf,	// (0x000b8847) single_mobtv_pg_channel_table_pane_t1

0xe2dd,	// (0x000b8855) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc3b,	// (0x000ba1b3) single_mobtv_pg_channel_table_pane_t

0x76c8,	// (0x000b1c40) main_mobtv_info_pane_g1_ParamLimits

0x76c8,	// (0x000b1c40) main_mobtv_info_pane_g1

0x76e6,	// (0x000b1c5e) main_mobtv_info_pane_t1_ParamLimits

0x76e6,	// (0x000b1c5e) main_mobtv_info_pane_t1

0x775e,	// (0x000b1cd6) main_mobtv_info_pane_t2_ParamLimits

0x775e,	// (0x000b1cd6) main_mobtv_info_pane_t2

0x0002,

0xfc45,	// (0x000ba1bd) main_mobtv_info_pane_t_ParamLimits

0xfc45,	// (0x000ba1bd) main_mobtv_info_pane_t

0x77ed,	// (0x000b1d65) wait_bar_pane_cp05

0x77ff,	// (0x000b1d77) main_mobtv_loading_pane_g1_ParamLimits

0x77ff,	// (0x000b1d77) main_mobtv_loading_pane_g1

0x7812,	// (0x000b1d8a) main_mobtv_loading_pane_g2_ParamLimits

0x7812,	// (0x000b1d8a) main_mobtv_loading_pane_g2

0x781e,	// (0x000b1d96) main_mobtv_loading_pane_g3_ParamLimits

0x781e,	// (0x000b1d96) main_mobtv_loading_pane_g3

0x0002,

0xfc4c,	// (0x000ba1c4) main_mobtv_loading_pane_g_ParamLimits

0xfc4c,	// (0x000ba1c4) main_mobtv_loading_pane_g

0xe2eb,	// (0x000b8863) main_mobtv_loading_pane_t1_ParamLimits

0xe2eb,	// (0x000b8863) main_mobtv_loading_pane_t1

0xe303,	// (0x000b887b) main_mobtv_loading_pane_t2_ParamLimits

0xe303,	// (0x000b887b) main_mobtv_loading_pane_t2

0x0001,

0xfc53,	// (0x000ba1cb) main_mobtv_loading_pane_t_ParamLimits

0xfc53,	// (0x000ba1cb) main_mobtv_loading_pane_t

0x7831,	// (0x000b1da9) wait_bar_pane_cp06_ParamLimits

0x7831,	// (0x000b1da9) wait_bar_pane_cp06

0xe327,	// (0x000b889f) main_mobtv_programe_curr_pane_t1

0xe335,	// (0x000b88ad) main_mobtv_programe_curr_pane_t2

0x0001,

0xfc58,	// (0x000ba1d0) main_mobtv_programe_curr_pane_t

0xe343,	// (0x000b88bb) main_mobtv_programe_next_pane_t1

0xe351,	// (0x000b88c9) main_mobtv_programe_next_pane_t2

0xe35f,	// (0x000b88d7) main_mobtv_programe_next_pane_t3

0x0002,

0xfc5d,	// (0x000ba1d5) main_mobtv_programe_next_pane_t

0x9325,	// (0x000b389d) bg_popup_mobtv_noti_window_pane

0xe36d,	// (0x000b88e5) popup_mobtv_noti_window_g1

0xe375,	// (0x000b88ed) popup_mobtv_noti_window_t1

0xe383,	// (0x000b88fb) popup_mobtv_noti_window_t2

0x0001,

0xfc64,	// (0x000ba1dc) popup_mobtv_noti_window_t

0xcbc0,	// (0x000b7138) bg_popup_mobtv_noti_window_pane_g1

0x939b,	// (0x000b3913) sc_clock_pane

0x939b,	// (0x000b3913) main_fs_bigclock_pane

0x6e73,	// (0x000b13eb) blid2_tripm_pane_t4_ParamLimits

0x6e73,	// (0x000b13eb) blid2_tripm_pane_t4

0x7840,	// (0x000b1db8) sc_clock_pane_g1_ParamLimits

0x7840,	// (0x000b1db8) sc_clock_pane_g1

0x7852,	// (0x000b1dca) sc_clock_pane_t1_ParamLimits

0x7852,	// (0x000b1dca) sc_clock_pane_t1

0x7874,	// (0x000b1dec) sc_clock_pane_t2_ParamLimits

0x7874,	// (0x000b1dec) sc_clock_pane_t2

0x788c,	// (0x000b1e04) sc_clock_pane_t3_ParamLimits

0x788c,	// (0x000b1e04) sc_clock_pane_t3

0x0004,

0xfc69,	// (0x000ba1e1) sc_clock_pane_t_ParamLimits

0xfc69,	// (0x000ba1e1) sc_clock_pane_t

0x881c,	// (0x000b2d94) main_fs_bigclock_indicator_pane_ParamLimits

0x881c,	// (0x000b2d94) main_fs_bigclock_indicator_pane

0x792c,	// (0x000b1ea4) main_fs_bigclock_pane_g1_ParamLimits

0x792c,	// (0x000b1ea4) main_fs_bigclock_pane_g1

0x8828,	// (0x000b2da0) main_fs_bigclock_pane_t1_ParamLimits

0x8828,	// (0x000b2da0) main_fs_bigclock_pane_t1

0x883a,	// (0x000b2db2) main_fs_bigclock_pane_t2_ParamLimits

0x883a,	// (0x000b2db2) main_fs_bigclock_pane_t2

0x884c,	// (0x000b2dc4) main_fs_bigclock_pane_t3_ParamLimits

0x884c,	// (0x000b2dc4) main_fs_bigclock_pane_t3

0x0002,

0xfe73,	// (0x000ba3eb) main_fs_bigclock_pane_t_ParamLimits

0xfe73,	// (0x000ba3eb) main_fs_bigclock_pane_t

0xec78,	// (0x000b91f0) main_fs_bigclock_indicator_pane_g1

0xe057,	// (0x000b85cf) ncim_query_content_pane_g2_ParamLimits

0xe057,	// (0x000b85cf) ncim_query_content_pane_g2

0x0001,

0xfbf6,	// (0x000ba16e) ncim_query_content_pane_g_ParamLimits

0xfbf6,	// (0x000ba16e) ncim_query_content_pane_g

0x78a5,	// (0x000b1e1d) sc_clock_pane_t4_ParamLimits

0x78a5,	// (0x000b1e1d) sc_clock_pane_t4

0x938d,	// (0x000b3905) main_radioblah_pane

0xd588,	// (0x000b7b00) cell_call4_button_pane_t1_copy1_ParamLimits

0xd588,	// (0x000b7b00) cell_call4_button_pane_t1_copy1

0x74d3,	// (0x000b1a4b) main_ncimui_pane_t1_ParamLimits

0x74d3,	// (0x000b1a4b) main_ncimui_pane_t1

0x74ed,	// (0x000b1a65) main_ncimui_pane_t2_ParamLimits

0x74ed,	// (0x000b1a65) main_ncimui_pane_t2

0x0002,

0xfbef,	// (0x000ba167) main_ncimui_pane_t_ParamLimits

0xfbef,	// (0x000ba167) main_ncimui_pane_t

0xe4c8,	// (0x000b8a40) main_radioblah_anim_pane_ParamLimits

0xe4c8,	// (0x000b8a40) main_radioblah_anim_pane

0xe4d9,	// (0x000b8a51) main_radioblah_info_pane_ParamLimits

0xe4d9,	// (0x000b8a51) main_radioblah_info_pane

0xe4ed,	// (0x000b8a65) main_radioblah_pane_t1_ParamLimits

0xe4ed,	// (0x000b8a65) main_radioblah_pane_t1

0xe509,	// (0x000b8a81) main_radioblah_pane_t2_ParamLimits

0xe509,	// (0x000b8a81) main_radioblah_pane_t2

0x0003,

0xfc8a,	// (0x000ba202) main_radioblah_pane_t_ParamLimits

0xfc8a,	// (0x000ba202) main_radioblah_pane_t

0x7984,	// (0x000b1efc) main_radioblah_rocker_ctrl_pane_ParamLimits

0x7984,	// (0x000b1efc) main_radioblah_rocker_ctrl_pane

0xe551,	// (0x000b8ac9) main_radioblah_info_pane_t1_ParamLimits

0xe551,	// (0x000b8ac9) main_radioblah_info_pane_t1

0x79dc,	// (0x000b1f54) main_radioblah_info_pane_t2_ParamLimits

0x79dc,	// (0x000b1f54) main_radioblah_info_pane_t2

0x0003,

0xfc93,	// (0x000ba20b) main_radioblah_info_pane_t_ParamLimits

0xfc93,	// (0x000ba20b) main_radioblah_info_pane_t

0xcbc0,	// (0x000b7138) main_radioblah_rocker_ctrl_pane_g1

0x7a8c,	// (0x000b2004) main_radioblah_rocker_ctrl_pane_g2

0x7a94,	// (0x000b200c) main_radioblah_rocker_ctrl_pane_g3

0x7a9c,	// (0x000b2014) main_radioblah_rocker_ctrl_pane_g4

0x7aa4,	// (0x000b201c) main_radioblah_rocker_ctrl_pane_g5

0x7aac,	// (0x000b2024) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfc9c,	// (0x000ba214) main_radioblah_rocker_ctrl_pane_g

0x7489,	// (0x000b1a01) main_cset_text2_pane_t1_copy1_ParamLimits

0x9d15,	// (0x000b428d) cam4_image_uncrop_qvga_pane

0x9d7c,	// (0x000b42f4) vid4_image_uncrop_qcif_pane

0x9ee8,	// (0x000b4460) cam6_image_uncrop_qvga_pane_ParamLimits

0x9ee8,	// (0x000b4460) cam6_image_uncrop_qvga_pane

0xdd43,	// (0x000b82bb) vid6_image_uncrop_qcif_pane_ParamLimits

0xdd43,	// (0x000b82bb) vid6_image_uncrop_qcif_pane

0x9325,	// (0x000b389d) bg_popup_preview_window_pane_cp03

0xe009,	// (0x000b8581) list_cset_text2_pane

0xe011,	// (0x000b8589) main_cset6_text2_pane_g1

0xe019,	// (0x000b8591) main_cset6_text2_pane_t1

0xe58b,	// (0x000b8b03) list_cset_text2_pane_t1_ParamLimits

0xe58b,	// (0x000b8b03) list_cset_text2_pane_t1

0x938d,	// (0x000b3905) main_radioblah_pane_ParamLimits

0x77d9,	// (0x000b1d51) main_mobtv_info_pane_t3_ParamLimits

0x77d9,	// (0x000b1d51) main_mobtv_info_pane_t3

0x7972,	// (0x000b1eea) main_radioblah_pane_g1

0x79ac,	// (0x000b1f24) main_radioblah_info_pane_g1

0x7a31,	// (0x000b1fa9) main_radioblah_info_pane_t3_ParamLimits

0x7a31,	// (0x000b1fa9) main_radioblah_info_pane_t3

0x22b6,	// (0x000ac82e) highlight_cell_cale_month_pane_ParamLimits

0x22b6,	// (0x000ac82e) highlight_cell_cale_month_pane

0x939b,	// (0x000b3913) main_phob_fisheye_pane

0xcf04,	// (0x000b747c) scroll_pane_cp0031_ParamLimits

0xcf04,	// (0x000b747c) scroll_pane_cp0031

0xde51,	// (0x000b83c9) wait_bar_pane_cp08_ParamLimits

0x71c0,	// (0x000b1738) cset_list_set_pane_copy1_ParamLimits

0xe5a6,	// (0x000b8b1e) highlight_cell_cale_month_pane_g1

0x7ab4,	// (0x000b202c) highlight_cell_cale_month_pane_t1

0xdae6,	// (0x000b805e) list_gen_pane_cp01

0xd761,	// (0x000b7cd9) scroll_pane_01

0x7ac2,	// (0x000b203a) list_single_double_fisheye_pane

0x7acb,	// (0x000b2043) list_double_fisheye_pane_g1_ParamLimits

0x7acb,	// (0x000b2043) list_double_fisheye_pane_g1

0x7ad7,	// (0x000b204f) list_double_fisheye_pane_g2_ParamLimits

0x7ad7,	// (0x000b204f) list_double_fisheye_pane_g2

0x7aeb,	// (0x000b2063) list_double_fisheye_pane_g3_ParamLimits

0x7aeb,	// (0x000b2063) list_double_fisheye_pane_g3

0x0004,

0xfca9,	// (0x000ba221) list_double_fisheye_pane_g_ParamLimits

0xfca9,	// (0x000ba221) list_double_fisheye_pane_g

0x7b14,	// (0x000b208c) list_double_fisheye_pane_t1_ParamLimits

0x7b14,	// (0x000b208c) list_double_fisheye_pane_t1

0x7b2f,	// (0x000b20a7) list_double_fisheye_pane_t2_ParamLimits

0x7b2f,	// (0x000b20a7) list_double_fisheye_pane_t2

0x0001,

0xfcb4,	// (0x000ba22c) list_double_fisheye_pane_t_ParamLimits

0xfcb4,	// (0x000ba22c) list_double_fisheye_pane_t

0x939b,	// (0x000b3913) main_call5_pane

0x78d0,	// (0x000b1e48) sc_swipe_pane_ParamLimits

0x78d0,	// (0x000b1e48) sc_swipe_pane

0x7b64,	// (0x000b20dc) call5_image_pane_ParamLimits

0x7b64,	// (0x000b20dc) call5_image_pane

0x7b81,	// (0x000b20f9) call5_swipe_1_pane_ParamLimits

0x7b81,	// (0x000b20f9) call5_swipe_1_pane

0x7b94,	// (0x000b210c) call5_swipe_2_pane_ParamLimits

0x7b94,	// (0x000b210c) call5_swipe_2_pane

0x7bbf,	// (0x000b2137) popup_call5_audio_first_window_ParamLimits

0x7bbf,	// (0x000b2137) popup_call5_audio_first_window

0xce20,	// (0x000b7398) call5_swipe_1_pane_g1_ParamLimits

0xce20,	// (0x000b7398) call5_swipe_1_pane_g1

0xe5ae,	// (0x000b8b26) call5_swipe_1_pane_g2_ParamLimits

0xe5ae,	// (0x000b8b26) call5_swipe_1_pane_g2

0x0001,

0xfcb9,	// (0x000ba231) call5_swipe_1_pane_g_ParamLimits

0xfcb9,	// (0x000ba231) call5_swipe_1_pane_g

0xe5ba,	// (0x000b8b32) call5_swipe_1_pane_t1_ParamLimits

0xe5ba,	// (0x000b8b32) call5_swipe_1_pane_t1

0xce20,	// (0x000b7398) call5_swipe_2_pane_g1_ParamLimits

0xce20,	// (0x000b7398) call5_swipe_2_pane_g1

0xe5cf,	// (0x000b8b47) call5_swipe_2_pane_g2_ParamLimits

0xe5cf,	// (0x000b8b47) call5_swipe_2_pane_g2

0x0001,

0xfcbe,	// (0x000ba236) call5_swipe_2_pane_g_ParamLimits

0xfcbe,	// (0x000ba236) call5_swipe_2_pane_g

0xe5db,	// (0x000b8b53) call5_swipe_2_pane_t1_ParamLimits

0xe5db,	// (0x000b8b53) call5_swipe_2_pane_t1

0xe5f0,	// (0x000b8b68) sc_swipe_pane_g1_ParamLimits

0xe5f0,	// (0x000b8b68) sc_swipe_pane_g1

0xe5fd,	// (0x000b8b75) sc_swipe_pane_g2_ParamLimits

0xe5fd,	// (0x000b8b75) sc_swipe_pane_g2

0x0001,

0xfcc3,	// (0x000ba23b) sc_swipe_pane_g_ParamLimits

0xfcc3,	// (0x000ba23b) sc_swipe_pane_g

0xe609,	// (0x000b8b81) sc_swipe_pane_t1_ParamLimits

0xe609,	// (0x000b8b81) sc_swipe_pane_t1

0x939b,	// (0x000b3913) main_cmail_launcher_pane

0x7bd0,	// (0x000b2148) aid_size_cell_cmail_l_ParamLimits

0x7bd0,	// (0x000b2148) aid_size_cell_cmail_l

0x7bea,	// (0x000b2162) grid_cmail_l_pane_ParamLimits

0x7bea,	// (0x000b2162) grid_cmail_l_pane

0x7c05,	// (0x000b217d) cell_cmail_l_pane_ParamLimits

0x7c05,	// (0x000b217d) cell_cmail_l_pane

0x7c2b,	// (0x000b21a3) cell_cmail_l_pane_g1_ParamLimits

0x7c2b,	// (0x000b21a3) cell_cmail_l_pane_g1

0x7c3c,	// (0x000b21b4) cell_cmail_l_pane_t1_ParamLimits

0x7c3c,	// (0x000b21b4) cell_cmail_l_pane_t1

0xe61e,	// (0x000b8b96) cell_cmail_l_pane_t2_ParamLimits

0xe61e,	// (0x000b8b96) cell_cmail_l_pane_t2

0x0001,

0xfcc8,	// (0x000ba240) cell_cmail_l_pane_t_ParamLimits

0xfcc8,	// (0x000ba240) cell_cmail_l_pane_t

0xa5de,	// (0x000b4b56) grid_highlight_pane_cp018_ParamLimits

0xa5de,	// (0x000b4b56) grid_highlight_pane_cp018

0x01d0,	// (0x000aa748) main2_pane_ParamLimits

0x01d0,	// (0x000aa748) main2_pane

0xa2be,	// (0x000b4836) popup_sp_fs_action_menu_bg_pane_g1

0xa2c6,	// (0x000b483e) popup_sp_fs_action_menu_bg_pane_g2

0xa2ce,	// (0x000b4846) popup_sp_fs_action_menu_bg_pane_g3

0xa2d6,	// (0x000b484e) popup_sp_fs_action_menu_bg_pane_g4

0xa2de,	// (0x000b4856) popup_sp_fs_action_menu_bg_pane_g5

0xa2e6,	// (0x000b485e) popup_sp_fs_action_menu_bg_pane_g6

0xa2ee,	// (0x000b4866) popup_sp_fs_action_menu_bg_pane_g7

0xa2f6,	// (0x000b486e) popup_sp_fs_action_menu_bg_pane_g8

0xa2fe,	// (0x000b4876) popup_sp_fs_action_menu_bg_pane_g9

0xa306,	// (0x000b487e) popup_sp_fs_action_menu_bg_pane_g10

0xa306,	// (0x000b487e) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf186,	// (0x000b96fe) popup_sp_fs_action_menu_bg_pane_g

0x11f4,	// (0x000ab76c) list_medium_line_x2_t3_g3_g1_ParamLimits

0x11f4,	// (0x000ab76c) list_medium_line_x2_t3_g3_g1

0x1200,	// (0x000ab778) list_medium_line_x2_t3_g3_g2_ParamLimits

0x1200,	// (0x000ab778) list_medium_line_x2_t3_g3_g2

0x120c,	// (0x000ab784) list_medium_line_x2_t3_g3_g3_ParamLimits

0x120c,	// (0x000ab784) list_medium_line_x2_t3_g3_g3

0x0002,

0xf238,	// (0x000b97b0) list_medium_line_x2_t3_g3_g_ParamLimits

0xf238,	// (0x000b97b0) list_medium_line_x2_t3_g3_g

0x1218,	// (0x000ab790) list_medium_line_x2_t3_g3_t1_ParamLimits

0x1218,	// (0x000ab790) list_medium_line_x2_t3_g3_t1

0x122d,	// (0x000ab7a5) list_medium_line_x2_t3_g3_t2_ParamLimits

0x122d,	// (0x000ab7a5) list_medium_line_x2_t3_g3_t2

0x1241,	// (0x000ab7b9) list_medium_line_x2_t3_g3_t3_ParamLimits

0x1241,	// (0x000ab7b9) list_medium_line_x2_t3_g3_t3

0x0002,

0xf23f,	// (0x000b97b7) list_medium_line_x2_t3_g3_t_ParamLimits

0xf23f,	// (0x000b97b7) list_medium_line_x2_t3_g3_t

0x11f4,	// (0x000ab76c) list_medium_line_x2_t3_g2_g1_ParamLimits

0x11f4,	// (0x000ab76c) list_medium_line_x2_t3_g2_g1

0x120c,	// (0x000ab784) list_medium_line_x2_t3_g2_g2_ParamLimits

0x120c,	// (0x000ab784) list_medium_line_x2_t3_g2_g2

0x0001,

0xf246,	// (0x000b97be) list_medium_line_x2_t3_g2_g_ParamLimits

0xf246,	// (0x000b97be) list_medium_line_x2_t3_g2_g

0x1256,	// (0x000ab7ce) list_medium_line_x2_t3_g2_t1_ParamLimits

0x1256,	// (0x000ab7ce) list_medium_line_x2_t3_g2_t1

0x126c,	// (0x000ab7e4) list_medium_line_x2_t3_g2_t2_ParamLimits

0x126c,	// (0x000ab7e4) list_medium_line_x2_t3_g2_t2

0x127e,	// (0x000ab7f6) list_medium_line_x2_t3_g2_t3_ParamLimits

0x127e,	// (0x000ab7f6) list_medium_line_x2_t3_g2_t3

0x0002,

0xf24b,	// (0x000b97c3) list_medium_line_x2_t3_g2_t_ParamLimits

0xf24b,	// (0x000b97c3) list_medium_line_x2_t3_g2_t

0x11f4,	// (0x000ab76c) list_medium_line_x2_t4_g4_g1_ParamLimits

0x11f4,	// (0x000ab76c) list_medium_line_x2_t4_g4_g1

0x129b,	// (0x000ab813) list_medium_line_x2_t4_g4_g2_ParamLimits

0x129b,	// (0x000ab813) list_medium_line_x2_t4_g4_g2

0x1200,	// (0x000ab778) list_medium_line_x2_t4_g4_g3_ParamLimits

0x1200,	// (0x000ab778) list_medium_line_x2_t4_g4_g3

0x12a7,	// (0x000ab81f) list_medium_line_x2_t4_g4_g4_ParamLimits

0x12a7,	// (0x000ab81f) list_medium_line_x2_t4_g4_g4

0x0003,

0xf252,	// (0x000b97ca) list_medium_line_x2_t4_g4_g_ParamLimits

0xf252,	// (0x000b97ca) list_medium_line_x2_t4_g4_g

0x12b3,	// (0x000ab82b) list_medium_line_x2_t4_g4_t1_ParamLimits

0x12b3,	// (0x000ab82b) list_medium_line_x2_t4_g4_t1

0x12cd,	// (0x000ab845) list_medium_line_x2_t4_g4_t2_ParamLimits

0x12cd,	// (0x000ab845) list_medium_line_x2_t4_g4_t2

0x12e2,	// (0x000ab85a) list_medium_line_x2_t4_g4_t3_ParamLimits

0x12e2,	// (0x000ab85a) list_medium_line_x2_t4_g4_t3

0x12f7,	// (0x000ab86f) list_medium_line_x2_t4_g4_t4_ParamLimits

0x12f7,	// (0x000ab86f) list_medium_line_x2_t4_g4_t4

0x0003,

0xf25b,	// (0x000b97d3) list_medium_line_x2_t4_g4_t_ParamLimits

0xf25b,	// (0x000b97d3) list_medium_line_x2_t4_g4_t

0x11f4,	// (0x000ab76c) list_medium_line_x2_t2_g4_g1_ParamLimits

0x11f4,	// (0x000ab76c) list_medium_line_x2_t2_g4_g1

0x129b,	// (0x000ab813) list_medium_line_x2_t2_g4_g2_ParamLimits

0x129b,	// (0x000ab813) list_medium_line_x2_t2_g4_g2

0x1200,	// (0x000ab778) list_medium_line_x2_t2_g4_g3_ParamLimits

0x1200,	// (0x000ab778) list_medium_line_x2_t2_g4_g3

0x120c,	// (0x000ab784) list_medium_line_x2_t2_g4_g4_ParamLimits

0x120c,	// (0x000ab784) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2c2,	// (0x000b983a) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2c2,	// (0x000b983a) list_medium_line_x2_t2_g4_g

0x22dc,	// (0x000ac854) list_medium_line_x2_t2_g4_t1_ParamLimits

0x22dc,	// (0x000ac854) list_medium_line_x2_t2_g4_t1

0x1241,	// (0x000ab7b9) list_medium_line_x2_t2_g4_t2_ParamLimits

0x1241,	// (0x000ab7b9) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2cb,	// (0x000b9843) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2cb,	// (0x000b9843) list_medium_line_x2_t2_g4_t

0x11f4,	// (0x000ab76c) list_medium_line_x2_t2_g3_g1_ParamLimits

0x11f4,	// (0x000ab76c) list_medium_line_x2_t2_g3_g1

0x1200,	// (0x000ab778) list_medium_line_x2_t2_g3_g2_ParamLimits

0x1200,	// (0x000ab778) list_medium_line_x2_t2_g3_g2

0x120c,	// (0x000ab784) list_medium_line_x2_t2_g3_g3_ParamLimits

0x120c,	// (0x000ab784) list_medium_line_x2_t2_g3_g3

0x0002,

0xf238,	// (0x000b97b0) list_medium_line_x2_t2_g3_g_ParamLimits

0xf238,	// (0x000b97b0) list_medium_line_x2_t2_g3_g

0x22f1,	// (0x000ac869) list_medium_line_x2_t2_g3_t1_ParamLimits

0x22f1,	// (0x000ac869) list_medium_line_x2_t2_g3_t1

0x1241,	// (0x000ab7b9) list_medium_line_x2_t2_g3_t2_ParamLimits

0x1241,	// (0x000ab7b9) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2d0,	// (0x000b9848) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2d0,	// (0x000b9848) list_medium_line_x2_t2_g3_t

0x2430,	// (0x000ac9a8) main_sp_fs_list_pane_ParamLimits

0x2430,	// (0x000ac9a8) main_sp_fs_list_pane

0xc2a9,	// (0x000b6821) sp_fs_scroll_pane_ParamLimits

0xc2a9,	// (0x000b6821) sp_fs_scroll_pane

0x243c,	// (0x000ac9b4) list_medium_line_x2_t3_t1

0x244c,	// (0x000ac9c4) list_medium_line_x2_t3_t2

0x245a,	// (0x000ac9d2) list_medium_line_x2_t3_t3

0x0002,

0xf31b,	// (0x000b9893) list_medium_line_x2_t3_t

0x2468,	// (0x000ac9e0) list_medium_line_x3_t4_t1

0x2478,	// (0x000ac9f0) list_medium_line_x3_t4_t2

0x2486,	// (0x000ac9fe) list_medium_line_x3_t4_t3

0x245a,	// (0x000ac9d2) list_medium_line_x3_t4_t4

0x0003,

0xf322,	// (0x000b989a) list_medium_line_x3_t4_t

0x2494,	// (0x000aca0c) list_medium_line_x4_t5_t1

0x24a4,	// (0x000aca1c) list_medium_line_x4_t5_t2

0x2486,	// (0x000ac9fe) list_medium_line_x4_t5_t3

0x24b2,	// (0x000aca2a) list_medium_line_x4_t5_t4

0x245a,	// (0x000ac9d2) list_medium_line_x4_t5_t5

0x0004,

0xf32b,	// (0x000b98a3) list_medium_line_x4_t5_t

0x11f4,	// (0x000ab76c) list_medium_line_t4_g4_g1_ParamLimits

0x11f4,	// (0x000ab76c) list_medium_line_t4_g4_g1

0x12a7,	// (0x000ab81f) list_medium_line_t4_g4_g2_ParamLimits

0x12a7,	// (0x000ab81f) list_medium_line_t4_g4_g2

0x24c0,	// (0x000aca38) list_medium_line_t4_g4_g3_ParamLimits

0x24c0,	// (0x000aca38) list_medium_line_t4_g4_g3

0x120c,	// (0x000ab784) list_medium_line_t4_g4_g4_ParamLimits

0x120c,	// (0x000ab784) list_medium_line_t4_g4_g4

0x0003,

0xf336,	// (0x000b98ae) list_medium_line_t4_g4_g_ParamLimits

0xf336,	// (0x000b98ae) list_medium_line_t4_g4_g

0x24cc,	// (0x000aca44) list_medium_line_t4_g4_t1_ParamLimits

0x24cc,	// (0x000aca44) list_medium_line_t4_g4_t1

0x24e1,	// (0x000aca59) list_medium_line_t4_g4_t2_ParamLimits

0x24e1,	// (0x000aca59) list_medium_line_t4_g4_t2

0x24f6,	// (0x000aca6e) list_medium_line_t4_g4_t3_ParamLimits

0x24f6,	// (0x000aca6e) list_medium_line_t4_g4_t3

0x1241,	// (0x000ab7b9) list_medium_line_t4_g4_t4_ParamLimits

0x1241,	// (0x000ab7b9) list_medium_line_t4_g4_t4

0x0003,

0xf33f,	// (0x000b98b7) list_medium_line_t4_g4_t_ParamLimits

0xf33f,	// (0x000b98b7) list_medium_line_t4_g4_t

0x25aa,	// (0x000acb22) chi_dic_find_pane_g1

0x365e,	// (0x000adbd6) main_tport_pane

0x64c4,	// (0x000b0a3c) list_medium_line_plain_t1

0x6576,	// (0x000b0aee) list_medium_line_t2_g2_g1_ParamLimits

0x6576,	// (0x000b0aee) list_medium_line_t2_g2_g1

0x6582,	// (0x000b0afa) list_medium_line_t2_g2_g2_ParamLimits

0x6582,	// (0x000b0afa) list_medium_line_t2_g2_g2

0x0001,

0xfa00,	// (0x000b9f78) list_medium_line_t2_g2_g_ParamLimits

0xfa00,	// (0x000b9f78) list_medium_line_t2_g2_g

0x658e,	// (0x000b0b06) list_medium_line_t2_g2_t1_ParamLimits

0x658e,	// (0x000b0b06) list_medium_line_t2_g2_t1

0x65a5,	// (0x000b0b1d) list_medium_line_t2_g2_t2_ParamLimits

0x65a5,	// (0x000b0b1d) list_medium_line_t2_g2_t2

0x0001,

0xfa05,	// (0x000b9f7d) list_medium_line_t2_g2_t_ParamLimits

0xfa05,	// (0x000b9f7d) list_medium_line_t2_g2_t

0xa769,	// (0x000b4ce1) aid_sp_fs_list_icon_a_sm

0xa771,	// (0x000b4ce9) aid_sp_fs_list_icon_d

0xb642,	// (0x000b5bba) aid_sp_fs_text_primary

0xa779,	// (0x000b4cf1) aid_sp_fs_text_secondary

0x6c20,	// (0x000b1198) list_medium_line

0x6c20,	// (0x000b1198) list_medium_line_g2

0x6c20,	// (0x000b1198) list_medium_line_g3

0x6c20,	// (0x000b1198) list_medium_line_plain

0x6c20,	// (0x000b1198) list_medium_line_plain_t2

0x6c20,	// (0x000b1198) list_medium_line_plain_t3

0x6c20,	// (0x000b1198) list_medium_line_right_icon

0x6c20,	// (0x000b1198) list_medium_line_right_iconx2

0x6c20,	// (0x000b1198) list_medium_line_t2

0x6c20,	// (0x000b1198) list_medium_line_t2_g2

0x6c20,	// (0x000b1198) list_medium_line_t2_g3

0x6c20,	// (0x000b1198) list_medium_line_t2_right_icon

0x6c20,	// (0x000b1198) list_medium_line_t2_right_iconx2

0x6c20,	// (0x000b1198) list_medium_line_t3

0x6c20,	// (0x000b1198) list_medium_line_t3_g2

0x6c20,	// (0x000b1198) list_medium_line_t3_g3

0x6c20,	// (0x000b1198) list_medium_line_t3_right_iconx2

0x6c29,	// (0x000b11a1) list_medium_line_t4_g4

0x6c32,	// (0x000b11aa) list_medium_line_x2

0x6c32,	// (0x000b11aa) list_medium_line_x2_t2_g2

0x6c32,	// (0x000b11aa) list_medium_line_x2_t2_g3

0x6c32,	// (0x000b11aa) list_medium_line_x2_t2_g4

0x6c32,	// (0x000b11aa) list_medium_line_x2_t3

0x6c32,	// (0x000b11aa) list_medium_line_x2_t3_g2

0x6c32,	// (0x000b11aa) list_medium_line_x2_t3_g3

0x6c32,	// (0x000b11aa) list_medium_line_x2_t3_g4

0x6c32,	// (0x000b11aa) list_medium_line_x2_t4_g2

0x6c32,	// (0x000b11aa) list_medium_line_x2_t4_g4

0x6c3b,	// (0x000b11b3) list_medium_line_x3

0x6c3b,	// (0x000b11b3) list_medium_line_x3_t4

0x6c3b,	// (0x000b11b3) list_medium_line_x3_t4_g4

0x6c29,	// (0x000b11a1) list_medium_line_x4_t4

0x6c29,	// (0x000b11a1) list_medium_line_x4_t4_g7

0x6c29,	// (0x000b11a1) list_medium_line_x4_t5

0x6c44,	// (0x000b11bc) list_single_fs_dyc_pane_ParamLimits

0x6c44,	// (0x000b11bc) list_single_fs_dyc_pane

0x11f4,	// (0x000ab76c) list_medium_line_x4_t4_g7_g1_ParamLimits

0x11f4,	// (0x000ab76c) list_medium_line_x4_t4_g7_g1

0x73ba,	// (0x000b1932) list_medium_line_x4_t4_g7_g2_ParamLimits

0x73ba,	// (0x000b1932) list_medium_line_x4_t4_g7_g2

0x73c6,	// (0x000b193e) list_medium_line_x4_t4_g7_g3_ParamLimits

0x73c6,	// (0x000b193e) list_medium_line_x4_t4_g7_g3

0x73d5,	// (0x000b194d) list_medium_line_x4_t4_g7_g4_ParamLimits

0x73d5,	// (0x000b194d) list_medium_line_x4_t4_g7_g4

0x73e1,	// (0x000b1959) list_medium_line_x4_t4_g7_g5_ParamLimits

0x73e1,	// (0x000b1959) list_medium_line_x4_t4_g7_g5

0x73f0,	// (0x000b1968) list_medium_line_x4_t4_g7_g6_ParamLimits

0x73f0,	// (0x000b1968) list_medium_line_x4_t4_g7_g6

0x73ff,	// (0x000b1977) list_medium_line_x4_t4_g7_g7_ParamLimits

0x73ff,	// (0x000b1977) list_medium_line_x4_t4_g7_g7

0x0006,

0xfbd0,	// (0x000ba148) list_medium_line_x4_t4_g7_g_ParamLimits

0xfbd0,	// (0x000ba148) list_medium_line_x4_t4_g7_g

0x740b,	// (0x000b1983) list_medium_line_x4_t4_g7_t1_ParamLimits

0x740b,	// (0x000b1983) list_medium_line_x4_t4_g7_t1

0x7420,	// (0x000b1998) list_medium_line_x4_t4_g7_t2_ParamLimits

0x7420,	// (0x000b1998) list_medium_line_x4_t4_g7_t2

0x7435,	// (0x000b19ad) list_medium_line_x4_t4_g7_t3_ParamLimits

0x7435,	// (0x000b19ad) list_medium_line_x4_t4_g7_t3

0x744a,	// (0x000b19c2) list_medium_line_x4_t4_g7_t4_ParamLimits

0x744a,	// (0x000b19c2) list_medium_line_x4_t4_g7_t4

0x745c,	// (0x000b19d4) list_medium_line_x4_t4_g7_t5_ParamLimits

0x745c,	// (0x000b19d4) list_medium_line_x4_t4_g7_t5

0x0004,

0xfbdf,	// (0x000ba157) list_medium_line_x4_t4_g7_t_ParamLimits

0xfbdf,	// (0x000ba157) list_medium_line_x4_t4_g7_t

0x746e,	// (0x000b19e6) list_single_dyc_row_pane_ParamLimits

0x746e,	// (0x000b19e6) list_single_dyc_row_pane

0x7b51,	// (0x000b20c9) call5_gesture_pane_ParamLimits

0x7b51,	// (0x000b20c9) call5_gesture_pane

0x7ba7,	// (0x000b211f) call5_windows_pane_ParamLimits

0x7ba7,	// (0x000b211f) call5_windows_pane

0x7c52,	// (0x000b21ca) call5_swipe_1_pane_cp_ParamLimits

0x7c52,	// (0x000b21ca) call5_swipe_1_pane_cp

0x7c5e,	// (0x000b21d6) call5_swipe_2_pane_cp_ParamLimits

0x7c5e,	// (0x000b21d6) call5_swipe_2_pane_cp

0xb346,	// (0x000b58be) call5_image_pane_cp

0x7c6a,	// (0x000b21e2) popup_call5_audio_first_window_cp_ParamLimits

0x7c6a,	// (0x000b21e2) popup_call5_audio_first_window_cp

0xe5f0,	// (0x000b8b68) call5_swipe_1_pane_g1_cp_ParamLimits

0xe5f0,	// (0x000b8b68) call5_swipe_1_pane_g1_cp

0xe630,	// (0x000b8ba8) call5_swipe_1_pane_g2_cp

0xe609,	// (0x000b8b81) call5_swipe_1_pane_t1_cp_ParamLimits

0xe609,	// (0x000b8b81) call5_swipe_1_pane_t1_cp

0xe5f0,	// (0x000b8b68) call5_swipe_2_pane_g1_cp_ParamLimits

0xe5f0,	// (0x000b8b68) call5_swipe_2_pane_g1_cp

0xe638,	// (0x000b8bb0) call5_swipe_2_pane_g2_cp

0xe640,	// (0x000b8bb8) call5_swipe_2_pane_t1_cp_ParamLimits

0xe640,	// (0x000b8bb8) call5_swipe_2_pane_t1_cp

0xa5de,	// (0x000b4b56) main_sp_fs_email_pane

0xe655,	// (0x000b8bcd) main_sp_fs_listscroll_pane_te

0xb64b,	// (0x000b5bc3) popup_sp_fs_action_menu_pane_ParamLimits

0xb64b,	// (0x000b5bc3) popup_sp_fs_action_menu_pane

0xcbc0,	// (0x000b7138) bg_sp_fs_ctrlbar_pane_g1

0xe65e,	// (0x000b8bd6) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xe667,	// (0x000b8bdf) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xe670,	// (0x000b8be8) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xcbc0,	// (0x000b7138) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfccd,	// (0x000ba245) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xc9a3,	// (0x000b6f1b) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xc9a3,	// (0x000b6f1b) bg_sp_fs_ctrlbar_ddmenu_pane

0xe679,	// (0x000b8bf1) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xe679,	// (0x000b8bf1) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xe685,	// (0x000b8bfd) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xe685,	// (0x000b8bfd) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfcd6,	// (0x000ba24e) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfcd6,	// (0x000ba24e) main_sp_fs_ctrlbar_ddmenu_pane_g

0xe691,	// (0x000b8c09) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xe691,	// (0x000b8c09) main_sp_fs_ctrlbar_ddmenu_pane_t1

0x7c78,	// (0x000b21f0) list_medium_line_t2_right_icon_g1

0x7c80,	// (0x000b21f8) list_medium_line_t2_right_icon_t1

0x7c90,	// (0x000b2208) list_medium_line_t2_right_icon_t2

0x0001,

0xfcdb,	// (0x000ba253) list_medium_line_t2_right_icon_t

0xc7b6,	// (0x000b6d2e) bg_sp_fs_ctrlbar_pane_ParamLimits

0xc7b6,	// (0x000b6d2e) bg_sp_fs_ctrlbar_pane

0x7cea,	// (0x000b2262) main_sp_fs_ctrlbar_button_pane_cp01

0x7cf4,	// (0x000b226c) main_sp_fs_ctrlbar_ddmenu_pane

0xe6e3,	// (0x000b8c5b) main_sp_fs_ctrlbar_pane_g1

0xe6ef,	// (0x000b8c67) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfce0,	// (0x000ba258) main_sp_fs_ctrlbar_pane_g

0xe6fb,	// (0x000b8c73) main_sp_fs_ctrlbar_pane_t1

0x7cfe,	// (0x000b2276) main_sp_fs_ctrlbar_pane

0x7d22,	// (0x000b229a) main_sp_fs_listscroll_pane_te_cp01

0x7d42,	// (0x000b22ba) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x7d42,	// (0x000b22ba) popup_sp_fs_action_menu_pane_cp01

0xa5de,	// (0x000b4b56) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0xa5de,	// (0x000b4b56) bg_sp_fs_highlight_list_pane_cp01

0xa782,	// (0x000b4cfa) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0xa782,	// (0x000b4cfa) sp_fs_action_menu_list_gene_pane_g1

0xe72b,	// (0x000b8ca3) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xe72b,	// (0x000b8ca3) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfcea,	// (0x000ba262) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfcea,	// (0x000ba262) sp_fs_action_menu_list_gene_pane_g

0xa791,	// (0x000b4d09) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0xa791,	// (0x000b4d09) sp_fs_action_menu_list_gene_pane_t1

0xa7a9,	// (0x000b4d21) sp_fs_action_menu_list_gene_pane_ParamLimits

0xa7a9,	// (0x000b4d21) sp_fs_action_menu_list_gene_pane

0xe738,	// (0x000b8cb0) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xe738,	// (0x000b8cb0) popup_sp_fs_action_menu_bg_pane

0xa7c8,	// (0x000b4d40) sp_fs_action_menu_list_pane_ParamLimits

0xa7c8,	// (0x000b4d40) sp_fs_action_menu_list_pane

0xa7e8,	// (0x000b4d60) sp_fs_scroll_pane_cp01_ParamLimits

0xa7e8,	// (0x000b4d60) sp_fs_scroll_pane_cp01

0x7d72,	// (0x000b22ea) list_medium_line_plain_t2_t1

0x7d82,	// (0x000b22fa) list_medium_line_plain_t2_t2

0x0001,

0xfcef,	// (0x000ba267) list_medium_line_plain_t2_t

0x7d92,	// (0x000b230a) list_medium_line_plain_t3_t1

0x7da2,	// (0x000b231a) list_medium_line_plain_t3_t2

0x7db0,	// (0x000b2328) list_medium_line_plain_t3_t3

0x0002,

0xfcf4,	// (0x000ba26c) list_medium_line_plain_t3_t

0x11f4,	// (0x000ab76c) list_medium_line_x2_t2_g2_g1_ParamLimits

0x11f4,	// (0x000ab76c) list_medium_line_x2_t2_g2_g1

0x120c,	// (0x000ab784) list_medium_line_x2_t2_g2_g2_ParamLimits

0x120c,	// (0x000ab784) list_medium_line_x2_t2_g2_g2

0x0001,

0xf246,	// (0x000b97be) list_medium_line_x2_t2_g2_g_ParamLimits

0xf246,	// (0x000b97be) list_medium_line_x2_t2_g2_g

0x24cc,	// (0x000aca44) list_medium_line_x2_t2_g2_t1_ParamLimits

0x24cc,	// (0x000aca44) list_medium_line_x2_t2_g2_t1

0x1241,	// (0x000ab7b9) list_medium_line_x2_t2_g2_t2_ParamLimits

0x1241,	// (0x000ab7b9) list_medium_line_x2_t2_g2_t2

0x0001,

0xfcfb,	// (0x000ba273) list_medium_line_x2_t2_g2_t_ParamLimits

0xfcfb,	// (0x000ba273) list_medium_line_x2_t2_g2_t

0x11f4,	// (0x000ab76c) list_medium_line_x2_t4_g2_g1_ParamLimits

0x11f4,	// (0x000ab76c) list_medium_line_x2_t4_g2_g1

0x7dbe,	// (0x000b2336) list_medium_line_x2_t4_g2_g2_ParamLimits

0x7dbe,	// (0x000b2336) list_medium_line_x2_t4_g2_g2

0x0001,

0xfd00,	// (0x000ba278) list_medium_line_x2_t4_g2_g_ParamLimits

0xfd00,	// (0x000ba278) list_medium_line_x2_t4_g2_g

0x7dd0,	// (0x000b2348) list_medium_line_x2_t4_g2_t1_ParamLimits

0x7dd0,	// (0x000b2348) list_medium_line_x2_t4_g2_t1

0x7dea,	// (0x000b2362) list_medium_line_x2_t4_g2_t2_ParamLimits

0x7dea,	// (0x000b2362) list_medium_line_x2_t4_g2_t2

0x7dff,	// (0x000b2377) list_medium_line_x2_t4_g2_t3_ParamLimits

0x7dff,	// (0x000b2377) list_medium_line_x2_t4_g2_t3

0x1241,	// (0x000ab7b9) list_medium_line_x2_t4_g2_t4_ParamLimits

0x1241,	// (0x000ab7b9) list_medium_line_x2_t4_g2_t4

0x0003,

0xfd05,	// (0x000ba27d) list_medium_line_x2_t4_g2_t_ParamLimits

0xfd05,	// (0x000ba27d) list_medium_line_x2_t4_g2_t

0x7e14,	// (0x000b238c) list_medium_line_t3_right_iconx2_g1

0x7c78,	// (0x000b21f0) list_medium_line_t3_right_iconx2_g2

0x7e1c,	// (0x000b2394) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfd0e,	// (0x000ba286) list_medium_line_t3_right_iconx2_g

0x7e26,	// (0x000b239e) list_medium_line_t3_right_iconx2_t1

0x7e36,	// (0x000b23ae) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfd15,	// (0x000ba28d) list_medium_line_t3_right_iconx2_t

0x11f4,	// (0x000ab76c) list_medium_line_x3_t4_g4_g1_ParamLimits

0x11f4,	// (0x000ab76c) list_medium_line_x3_t4_g4_g1

0x1200,	// (0x000ab778) list_medium_line_x3_t4_g4_g2_ParamLimits

0x1200,	// (0x000ab778) list_medium_line_x3_t4_g4_g2

0x12a7,	// (0x000ab81f) list_medium_line_x3_t4_g4_g3_ParamLimits

0x12a7,	// (0x000ab81f) list_medium_line_x3_t4_g4_g3

0x7e44,	// (0x000b23bc) list_medium_line_x3_t4_g4_g4_ParamLimits

0x7e44,	// (0x000b23bc) list_medium_line_x3_t4_g4_g4

0x0003,

0xfd1a,	// (0x000ba292) list_medium_line_x3_t4_g4_g_ParamLimits

0xfd1a,	// (0x000ba292) list_medium_line_x3_t4_g4_g

0x7e50,	// (0x000b23c8) list_medium_line_x3_t4_g4_t1_ParamLimits

0x7e50,	// (0x000b23c8) list_medium_line_x3_t4_g4_t1

0x7e67,	// (0x000b23df) list_medium_line_x3_t4_g4_t2_ParamLimits

0x7e67,	// (0x000b23df) list_medium_line_x3_t4_g4_t2

0x24e1,	// (0x000aca59) list_medium_line_x3_t4_g4_t3_ParamLimits

0x24e1,	// (0x000aca59) list_medium_line_x3_t4_g4_t3

0x7e82,	// (0x000b23fa) list_medium_line_x3_t4_g4_t4_ParamLimits

0x7e82,	// (0x000b23fa) list_medium_line_x3_t4_g4_t4

0x0003,

0xfd23,	// (0x000ba29b) list_medium_line_x3_t4_g4_t_ParamLimits

0xfd23,	// (0x000ba29b) list_medium_line_x3_t4_g4_t

0x7e9f,	// (0x000b2417) list_single_dyc_row_text_pane_t1_ParamLimits

0x7e9f,	// (0x000b2417) list_single_dyc_row_text_pane_t1

0x7ee8,	// (0x000b2460) list_single_dyc_row_text_pane_t2_ParamLimits

0x7ee8,	// (0x000b2460) list_single_dyc_row_text_pane_t2

0xa80e,	// (0x000b4d86) list_single_dyc_row_text_pane_t3_ParamLimits

0xa80e,	// (0x000b4d86) list_single_dyc_row_text_pane_t3

0x0005,

0xfd2c,	// (0x000ba2a4) list_single_dyc_row_text_pane_t_ParamLimits

0xfd2c,	// (0x000ba2a4) list_single_dyc_row_text_pane_t

0xa832,	// (0x000b4daa) list_single_dyc_row_pane_g1_ParamLimits

0xa832,	// (0x000b4daa) list_single_dyc_row_pane_g1

0xa83e,	// (0x000b4db6) list_single_dyc_row_pane_g2_ParamLimits

0xa83e,	// (0x000b4db6) list_single_dyc_row_pane_g2

0xa84a,	// (0x000b4dc2) list_single_dyc_row_pane_g3_ParamLimits

0xa84a,	// (0x000b4dc2) list_single_dyc_row_pane_g3

0xa856,	// (0x000b4dce) list_single_dyc_row_pane_g4_ParamLimits

0xa856,	// (0x000b4dce) list_single_dyc_row_pane_g4

0x0003,

0xfd39,	// (0x000ba2b1) list_single_dyc_row_pane_g_ParamLimits

0xfd39,	// (0x000ba2b1) list_single_dyc_row_pane_g

0xa862,	// (0x000b4dda) list_single_dyc_row_text_pane_ParamLimits

0xa862,	// (0x000b4dda) list_single_dyc_row_text_pane

0x9325,	// (0x000b389d) bg_sp_fs_scroll_pane

0xe746,	// (0x000b8cbe) thumb_sp_fs_scroll_pane

0x6576,	// (0x000b0aee) list_medium_line_g1_ParamLimits

0x6576,	// (0x000b0aee) list_medium_line_g1

0x801d,	// (0x000b2595) list_medium_line_t1_ParamLimits

0x801d,	// (0x000b2595) list_medium_line_t1

0x11f4,	// (0x000ab76c) list_medium_line_x2_g1_ParamLimits

0x11f4,	// (0x000ab76c) list_medium_line_x2_g1

0x1200,	// (0x000ab778) list_medium_line_x2_g2_ParamLimits

0x1200,	// (0x000ab778) list_medium_line_x2_g2

0x0001,

0xfd42,	// (0x000ba2ba) list_medium_line_x2_g_ParamLimits

0xfd42,	// (0x000ba2ba) list_medium_line_x2_g

0xa881,	// (0x000b4df9) list_medium_line_x2_t1_ParamLimits

0xa881,	// (0x000b4df9) list_medium_line_x2_t1

0x11f4,	// (0x000ab76c) list_medium_line_x3_g1_ParamLimits

0x11f4,	// (0x000ab76c) list_medium_line_x3_g1

0x1200,	// (0x000ab778) list_medium_line_x3_g2_ParamLimits

0x1200,	// (0x000ab778) list_medium_line_x3_g2

0x0001,

0xfd42,	// (0x000ba2ba) list_medium_line_x3_g_ParamLimits

0xfd42,	// (0x000ba2ba) list_medium_line_x3_g

0xa881,	// (0x000b4df9) list_medium_line_x3_t1_ParamLimits

0xa881,	// (0x000b4df9) list_medium_line_x3_t1

0xe74f,	// (0x000b8cc7) thumb_sp_fs_scroll_pane_g1

0xe758,	// (0x000b8cd0) thumb_sp_fs_scroll_pane_g2

0xe761,	// (0x000b8cd9) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfd47,	// (0x000ba2bf) thumb_sp_fs_scroll_pane_g

0xe74f,	// (0x000b8cc7) bg_sp_fs_scroll_pane_g1

0xe758,	// (0x000b8cd0) bg_sp_fs_scroll_pane_g2

0xe761,	// (0x000b8cd9) bg_sp_fs_scroll_pane_g3

0x0002,

0xfd47,	// (0x000ba2bf) bg_sp_fs_scroll_pane_g

0x11f4,	// (0x000ab76c) list_medium_line_x2_t3_g4_g1_ParamLimits

0x11f4,	// (0x000ab76c) list_medium_line_x2_t3_g4_g1

0x129b,	// (0x000ab813) list_medium_line_x2_t3_g4_g2_ParamLimits

0x129b,	// (0x000ab813) list_medium_line_x2_t3_g4_g2

0x1200,	// (0x000ab778) list_medium_line_x2_t3_g4_g3_ParamLimits

0x1200,	// (0x000ab778) list_medium_line_x2_t3_g4_g3

0x120c,	// (0x000ab784) list_medium_line_x2_t3_g4_g4_ParamLimits

0x120c,	// (0x000ab784) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2c2,	// (0x000b983a) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2c2,	// (0x000b983a) list_medium_line_x2_t3_g4_g

0x8032,	// (0x000b25aa) list_medium_line_x2_t3_g4_t1_ParamLimits

0x8032,	// (0x000b25aa) list_medium_line_x2_t3_g4_t1

0x804c,	// (0x000b25c4) list_medium_line_x2_t3_g4_t2_ParamLimits

0x804c,	// (0x000b25c4) list_medium_line_x2_t3_g4_t2

0x1241,	// (0x000ab7b9) list_medium_line_x2_t3_g4_t3_ParamLimits

0x1241,	// (0x000ab7b9) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd4e,	// (0x000ba2c6) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd4e,	// (0x000ba2c6) list_medium_line_x2_t3_g4_t

0x6576,	// (0x000b0aee) list_medium_line_g2_g1_ParamLimits

0x6576,	// (0x000b0aee) list_medium_line_g2_g1

0x6582,	// (0x000b0afa) list_medium_line_g2_g2_ParamLimits

0x6582,	// (0x000b0afa) list_medium_line_g2_g2

0x0001,

0xfa00,	// (0x000b9f78) list_medium_line_g2_g_ParamLimits

0xfa00,	// (0x000b9f78) list_medium_line_g2_g

0x8065,	// (0x000b25dd) list_medium_line_g2_t1_ParamLimits

0x8065,	// (0x000b25dd) list_medium_line_g2_t1

0x6576,	// (0x000b0aee) list_medium_line_t3_g2_g1_ParamLimits

0x6576,	// (0x000b0aee) list_medium_line_t3_g2_g1

0x6582,	// (0x000b0afa) list_medium_line_t3_g2_g2_ParamLimits

0x6582,	// (0x000b0afa) list_medium_line_t3_g2_g2

0x0001,

0xfa00,	// (0x000b9f78) list_medium_line_t3_g2_g_ParamLimits

0xfa00,	// (0x000b9f78) list_medium_line_t3_g2_g

0x807a,	// (0x000b25f2) list_medium_line_t3_g2_t1_ParamLimits

0x807a,	// (0x000b25f2) list_medium_line_t3_g2_t1

0x8091,	// (0x000b2609) list_medium_line_t3_g2_t2_ParamLimits

0x8091,	// (0x000b2609) list_medium_line_t3_g2_t2

0x80a6,	// (0x000b261e) list_medium_line_t3_g2_t3_ParamLimits

0x80a6,	// (0x000b261e) list_medium_line_t3_g2_t3

0x0002,

0xfd55,	// (0x000ba2cd) list_medium_line_t3_g2_t_ParamLimits

0xfd55,	// (0x000ba2cd) list_medium_line_t3_g2_t

0x7c78,	// (0x000b21f0) list_medium_line_right_icon_g1

0x80bf,	// (0x000b2637) list_medium_line_right_icon_t1

0x6576,	// (0x000b0aee) list_medium_line_t2_g1_ParamLimits

0x6576,	// (0x000b0aee) list_medium_line_t2_g1

0x80cd,	// (0x000b2645) list_medium_line_t2_t1_ParamLimits

0x80cd,	// (0x000b2645) list_medium_line_t2_t1

0x80e7,	// (0x000b265f) list_medium_line_t2_t2_ParamLimits

0x80e7,	// (0x000b265f) list_medium_line_t2_t2

0x0001,

0xfd5c,	// (0x000ba2d4) list_medium_line_t2_t_ParamLimits

0xfd5c,	// (0x000ba2d4) list_medium_line_t2_t

0x6576,	// (0x000b0aee) list_medium_line_t3_g1_ParamLimits

0x6576,	// (0x000b0aee) list_medium_line_t3_g1

0x8100,	// (0x000b2678) list_medium_line_t3_t1_ParamLimits

0x8100,	// (0x000b2678) list_medium_line_t3_t1

0x8117,	// (0x000b268f) list_medium_line_t3_t2_ParamLimits

0x8117,	// (0x000b268f) list_medium_line_t3_t2

0x812c,	// (0x000b26a4) list_medium_line_t3_t3_ParamLimits

0x812c,	// (0x000b26a4) list_medium_line_t3_t3

0x0002,

0xfd61,	// (0x000ba2d9) list_medium_line_t3_t_ParamLimits

0xfd61,	// (0x000ba2d9) list_medium_line_t3_t

0x6576,	// (0x000b0aee) list_medium_line_g3_g1_ParamLimits

0x6576,	// (0x000b0aee) list_medium_line_g3_g1

0x813e,	// (0x000b26b6) list_medium_line_g3_g2_ParamLimits

0x813e,	// (0x000b26b6) list_medium_line_g3_g2

0x6582,	// (0x000b0afa) list_medium_line_g3_g3_ParamLimits

0x6582,	// (0x000b0afa) list_medium_line_g3_g3

0x0002,

0xfd68,	// (0x000ba2e0) list_medium_line_g3_g_ParamLimits

0xfd68,	// (0x000ba2e0) list_medium_line_g3_g

0x814a,	// (0x000b26c2) list_medium_line_g3_t1_ParamLimits

0x814a,	// (0x000b26c2) list_medium_line_g3_t1

0x6576,	// (0x000b0aee) list_medium_line_t2_g3_g1_ParamLimits

0x6576,	// (0x000b0aee) list_medium_line_t2_g3_g1

0x813e,	// (0x000b26b6) list_medium_line_t2_g3_g2_ParamLimits

0x813e,	// (0x000b26b6) list_medium_line_t2_g3_g2

0x6582,	// (0x000b0afa) list_medium_line_t2_g3_g3_ParamLimits

0x6582,	// (0x000b0afa) list_medium_line_t2_g3_g3

0x0002,

0xfd68,	// (0x000ba2e0) list_medium_line_t2_g3_g_ParamLimits

0xfd68,	// (0x000ba2e0) list_medium_line_t2_g3_g

0x815f,	// (0x000b26d7) list_medium_line_t2_g3_t1_ParamLimits

0x815f,	// (0x000b26d7) list_medium_line_t2_g3_t1

0x8179,	// (0x000b26f1) list_medium_line_t2_g3_t2_ParamLimits

0x8179,	// (0x000b26f1) list_medium_line_t2_g3_t2

0x0001,

0xfd6f,	// (0x000ba2e7) list_medium_line_t2_g3_t_ParamLimits

0xfd6f,	// (0x000ba2e7) list_medium_line_t2_g3_t

0x6576,	// (0x000b0aee) list_medium_line_t3_g3_g1_ParamLimits

0x6576,	// (0x000b0aee) list_medium_line_t3_g3_g1

0x813e,	// (0x000b26b6) list_medium_line_t3_g3_g2_ParamLimits

0x813e,	// (0x000b26b6) list_medium_line_t3_g3_g2

0x6582,	// (0x000b0afa) list_medium_line_t3_g3_g3_ParamLimits

0x6582,	// (0x000b0afa) list_medium_line_t3_g3_g3

0x0002,

0xfd68,	// (0x000ba2e0) list_medium_line_t3_g3_g_ParamLimits

0xfd68,	// (0x000ba2e0) list_medium_line_t3_g3_g

0x8194,	// (0x000b270c) list_medium_line_t3_g3_t1_ParamLimits

0x8194,	// (0x000b270c) list_medium_line_t3_g3_t1

0x81a8,	// (0x000b2720) list_medium_line_t3_g3_t2_ParamLimits

0x81a8,	// (0x000b2720) list_medium_line_t3_g3_t2

0x81ba,	// (0x000b2732) list_medium_line_t3_g3_t3_ParamLimits

0x81ba,	// (0x000b2732) list_medium_line_t3_g3_t3

0x0002,

0xfd74,	// (0x000ba2ec) list_medium_line_t3_g3_t_ParamLimits

0xfd74,	// (0x000ba2ec) list_medium_line_t3_g3_t

0x7e14,	// (0x000b238c) list_medium_line_right_iconx2_g1

0x7c78,	// (0x000b21f0) list_medium_line_right_iconx2_g2

0x0001,

0xfd7b,	// (0x000ba2f3) list_medium_line_right_iconx2_g

0x81ce,	// (0x000b2746) list_medium_line_right_iconx2_t1

0x7e14,	// (0x000b238c) list_medium_line_t2_right_iconx2_g1

0x7c78,	// (0x000b21f0) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfd7b,	// (0x000ba2f3) list_medium_line_t2_right_iconx2_g

0x81dc,	// (0x000b2754) list_medium_line_t2_right_iconx2_t1

0x81ec,	// (0x000b2764) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfd80,	// (0x000ba2f8) list_medium_line_t2_right_iconx2_t

0x81fe,	// (0x000b2776) list_medium_line_x4_t4_t1

0x820c,	// (0x000b2784) list_medium_line_x4_t4_t2

0x821c,	// (0x000b2794) list_medium_line_x4_t4_t3

0x822c,	// (0x000b27a4) list_medium_line_x4_t4_t4

0x0003,

0xfd85,	// (0x000ba2fd) list_medium_line_x4_t4_t

0x827f,	// (0x000b27f7) tport_appsw_pane_ParamLimits

0x827f,	// (0x000b27f7) tport_appsw_pane

0x8297,	// (0x000b280f) tport_contact_pane_ParamLimits

0x8297,	// (0x000b280f) tport_contact_pane

0x82af,	// (0x000b2827) tport_listscroll_pane_ParamLimits

0x82af,	// (0x000b2827) tport_listscroll_pane

0x82c9,	// (0x000b2841) cell_tport_appsw_pane_ParamLimits

0x82c9,	// (0x000b2841) cell_tport_appsw_pane

0xd627,	// (0x000b7b9f) tport_appsw_pane_g1_ParamLimits

0xd627,	// (0x000b7b9f) tport_appsw_pane_g1

0xe76a,	// (0x000b8ce2) tport_contact_pane_g1

0xe0dd,	// (0x000b8655) tport_contact_pane_t1

0xe773,	// (0x000b8ceb) tport_contact_pane_t2

0x0001,

0xfd8e,	// (0x000ba306) tport_contact_pane_t

0xe781,	// (0x000b8cf9) list_tport_pane

0xe78a,	// (0x000b8d02) scroll_pane_cp_030

0x8311,	// (0x000b2889) cell_tport_appsw_pane_g1

0x8321,	// (0x000b2899) cell_tport_appsw_pane_t1

0x832f,	// (0x000b28a7) grid_highlight_pane_cp019

0x8337,	// (0x000b28af) list_tport_double_graphic_pane_ParamLimits

0x8337,	// (0x000b28af) list_tport_double_graphic_pane

0xa5de,	// (0x000b4b56) list_highlight_pane_cp023_ParamLimits

0xa5de,	// (0x000b4b56) list_highlight_pane_cp023

0x8344,	// (0x000b28bc) list_tport_double_graphic_pane_g1_ParamLimits

0x8344,	// (0x000b28bc) list_tport_double_graphic_pane_g1

0x8351,	// (0x000b28c9) list_tport_double_graphic_pane_t1_ParamLimits

0x8351,	// (0x000b28c9) list_tport_double_graphic_pane_t1

0x8366,	// (0x000b28de) list_tport_double_graphic_pane_t2_ParamLimits

0x8366,	// (0x000b28de) list_tport_double_graphic_pane_t2

0x0001,

0xfd9a,	// (0x000ba312) list_tport_double_graphic_pane_t_ParamLimits

0xfd9a,	// (0x000ba312) list_tport_double_graphic_pane_t

0x9325,	// (0x000b389d) main_cale_note_pane

0x5d3d,	// (0x000b02b5) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x5d3d,	// (0x000b02b5) cell_vitu2_function_top_wide_pane_cp01

0x77ed,	// (0x000b1d65) wait_bar_pane_cp05_ParamLimits

0xa5de,	// (0x000b4b56) listscroll_cmail_pane

0xe793,	// (0x000b8d0b) list_cmail_pane

0x8378,	// (0x000b28f0) list_cmail_body_pane

0x838d,	// (0x000b2905) list_single_cmail_header_caption_pane

0x83a6,	// (0x000b291e) list_single_cmail_header_detail_pane_ParamLimits

0x83a6,	// (0x000b291e) list_single_cmail_header_detail_pane

0xe7a3,	// (0x000b8d1b) list_single_cmail_header_caption_pane_t1

0x83cf,	// (0x000b2947) list_single_cmail_header_detail_pane_g1_ParamLimits

0x83cf,	// (0x000b2947) list_single_cmail_header_detail_pane_g1

0xa897,	// (0x000b4e0f) list_single_cmail_header_detail_pane_g2_ParamLimits

0xa897,	// (0x000b4e0f) list_single_cmail_header_detail_pane_g2

0x0002,

0xfd9f,	// (0x000ba317) list_single_cmail_header_detail_pane_g_ParamLimits

0xfd9f,	// (0x000ba317) list_single_cmail_header_detail_pane_g

0x83e7,	// (0x000b295f) list_single_cmail_header_detail_pane_t1_ParamLimits

0x83e7,	// (0x000b295f) list_single_cmail_header_detail_pane_t1

0x8425,	// (0x000b299d) list_single_cmail_header_editor_pane_bg_ParamLimits

0x8425,	// (0x000b299d) list_single_cmail_header_editor_pane_bg

0xe7c7,	// (0x000b8d3f) list_cmail_body_pane_g1

0xe7d0,	// (0x000b8d48) list_cmail_body_pane_t1

0xd647,	// (0x000b7bbf) list_single_cmail_header_editor_pane_bg_g1

0xab23,	// (0x000b509b) list_single_cmail_header_editor_pane_bg_g1_copy1

0xd657,	// (0x000b7bcf) list_single_cmail_header_editor_pane_bg_g1_copy2

0xd64f,	// (0x000b7bc7) list_single_cmail_header_editor_pane_bg_g1_copy3

0xd86b,	// (0x000b7de3) list_single_cmail_header_editor_pane_bg_g1_copy4

0xd677,	// (0x000b7bef) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xd667,	// (0x000b7bdf) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xd66f,	// (0x000b7be7) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xab03,	// (0x000b507b) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0x843e,	// (0x000b29b6) calenote_gesture_pane_ParamLimits

0x843e,	// (0x000b29b6) calenote_gesture_pane

0x845e,	// (0x000b29d6) calenote_window_pane_ParamLimits

0x845e,	// (0x000b29d6) calenote_window_pane

0xe7de,	// (0x000b8d56) popup_note_window_cp01

0x847a,	// (0x000b29f2) calenote_swipe_1_pane_ParamLimits

0x847a,	// (0x000b29f2) calenote_swipe_1_pane

0x7c5e,	// (0x000b21d6) calenote_swipe_2_pane_ParamLimits

0x7c5e,	// (0x000b21d6) calenote_swipe_2_pane

0xe5f0,	// (0x000b8b68) calenote_swipe_1_pane_g1_ParamLimits

0xe5f0,	// (0x000b8b68) calenote_swipe_1_pane_g1

0xe5fd,	// (0x000b8b75) calenote_swipe_1_pane_g2_ParamLimits

0xe5fd,	// (0x000b8b75) calenote_swipe_1_pane_g2

0x0001,

0xfcc3,	// (0x000ba23b) calenote_swipe_1_pane_g_ParamLimits

0xfcc3,	// (0x000ba23b) calenote_swipe_1_pane_g

0xe7f0,	// (0x000b8d68) calenote_swipe_1_pane_t1_ParamLimits

0xe7f0,	// (0x000b8d68) calenote_swipe_1_pane_t1

0xe5f0,	// (0x000b8b68) calenote_swipe_2_pane_g1_ParamLimits

0xe5f0,	// (0x000b8b68) calenote_swipe_2_pane_g1

0xe80f,	// (0x000b8d87) calenote_swipe_2_pane_g2_ParamLimits

0xe80f,	// (0x000b8d87) calenote_swipe_2_pane_g2

0x0001,

0xfdab,	// (0x000ba323) calenote_swipe_2_pane_g_ParamLimits

0xfdab,	// (0x000ba323) calenote_swipe_2_pane_g

0xe81b,	// (0x000b8d93) calenote_swipe_2_pane_t1_ParamLimits

0xe81b,	// (0x000b8d93) calenote_swipe_2_pane_t1

0x9325,	// (0x000b389d) main_mup_navstr_pane

0x49f5,	// (0x000aef6d) main_mup3_pane_t7_ParamLimits

0x49f5,	// (0x000aef6d) main_mup3_pane_t7

0x9b33,	// (0x000b40ab) main_mp4_pane_g6_ParamLimits

0x9b33,	// (0x000b40ab) main_mp4_pane_g6

0x9cd7,	// (0x000b424f) main_image3_pane_t4_ParamLimits

0x9cd7,	// (0x000b424f) main_image3_pane_t4

0x848f,	// (0x000b2a07) popup_navstr_preview_pane_ParamLimits

0x848f,	// (0x000b2a07) popup_navstr_preview_pane

0x84a3,	// (0x000b2a1b) scroll_navstr_pane_ParamLimits

0x84a3,	// (0x000b2a1b) scroll_navstr_pane

0x9325,	// (0x000b389d) bg_popup_preview_window_pane_cp04

0xe842,	// (0x000b8dba) popup_navstr_preview_pane_t1

0x84b7,	// (0x000b2a2f) scroll_navstr_pane_g1_ParamLimits

0x84b7,	// (0x000b2a2f) scroll_navstr_pane_g1

0x84cb,	// (0x000b2a43) scroll_navstr_pane_t1_ParamLimits

0x84cb,	// (0x000b2a43) scroll_navstr_pane_t1

0xe7e7,	// (0x000b8d5f) bg_button_pane_cp014

0xe7e7,	// (0x000b8d5f) bg_button_pane_cp030

0x7af7,	// (0x000b206f) list_double_fisheye_pane_g4_ParamLimits

0x7af7,	// (0x000b206f) list_double_fisheye_pane_g4

0x7b03,	// (0x000b207b) list_double_fisheye_pane_g5_ParamLimits

0x7b03,	// (0x000b207b) list_double_fisheye_pane_g5

0xc2a9,	// (0x000b6821) sp_fs_scroll_pane_cp03

0xe6e3,	// (0x000b8c5b) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xe6ef,	// (0x000b8c67) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfce0,	// (0x000ba258) main_sp_fs_ctrlbar_pane_g_ParamLimits

0xe6fb,	// (0x000b8c73) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xe79b,	// (0x000b8d13) sp_fs_scroll_pane_cp02

0xa337,	// (0x000b48af) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0xa337,	// (0x000b48af) popup_sp_fs_calendar_preview_list_single_pane

0x9325,	// (0x000b389d) main_cam6_pano_pane

0x938d,	// (0x000b3905) main_mup3_pane_ParamLimits

0x9325,	// (0x000b389d) main_phacti_pane

0x76c0,	// (0x000b1c38) bg_button_pane_cp11

0x76da,	// (0x000b1c52) main_mobtv_info_pane_g2_ParamLimits

0x76da,	// (0x000b1c52) main_mobtv_info_pane_g2

0x0001,

0xfc40,	// (0x000ba1b8) main_mobtv_info_pane_g_ParamLimits

0xfc40,	// (0x000ba1b8) main_mobtv_info_pane_g

0x78b7,	// (0x000b1e2f) sc_clock_pane_t5_ParamLimits

0x78b7,	// (0x000b1e2f) sc_clock_pane_t5

0x7972,	// (0x000b1eea) main_radioblah_pane_g1_ParamLimits

0xe521,	// (0x000b8a99) main_radioblah_pane_t3_ParamLimits

0xe521,	// (0x000b8a99) main_radioblah_pane_t3

0xe539,	// (0x000b8ab1) main_radioblah_pane_t4_ParamLimits

0xe539,	// (0x000b8ab1) main_radioblah_pane_t4

0x799a,	// (0x000b1f12) main_radioblah_text_pane_ParamLimits

0x799a,	// (0x000b1f12) main_radioblah_text_pane

0x79ac,	// (0x000b1f24) main_radioblah_info_pane_g1_ParamLimits

0x7a45,	// (0x000b1fbd) main_radioblah_info_pane_t4_ParamLimits

0x7a45,	// (0x000b1fbd) main_radioblah_info_pane_t4

0xa5de,	// (0x000b4b56) main_sp_fs_calendar_pane

0x84e1,	// (0x000b2a59) main_phacti_pane_g1

0x84e9,	// (0x000b2a61) phacti_note_pane_ParamLimits

0x84e9,	// (0x000b2a61) phacti_note_pane

0xe859,	// (0x000b8dd1) phacti_term_pane_ParamLimits

0xe859,	// (0x000b8dd1) phacti_term_pane

0xe86e,	// (0x000b8de6) phacti_note_pane_t1_ParamLimits

0xe86e,	// (0x000b8de6) phacti_note_pane_t1

0xa8c7,	// (0x000b4e3f) phacti_term_pane_g1

0xa8cf,	// (0x000b4e47) phacti_term_pane_t1_ParamLimits

0xa8cf,	// (0x000b4e47) phacti_term_pane_t1

0xe885,	// (0x000b8dfd) popup_sp_fs_calendar_preview_list_single_pane_g1

0xe88d,	// (0x000b8e05) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfdb5,	// (0x000ba32d) popup_sp_fs_calendar_preview_list_single_pane_g

0xe895,	// (0x000b8e0d) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xe895,	// (0x000b8e0d) popup_sp_fs_calendar_preview_list_single_pane_t1

0xe8ab,	// (0x000b8e23) aid_popup_sp_fs_bg_corner_pane

0xcbc0,	// (0x000b7138) popup_sp_fs_calendar_preview_bg_pane_g1

0x9325,	// (0x000b389d) popup_sp_fs_calendar_preview_bg_pane

0x107d,	// (0x000ab5f5) popup_sp_fs_calendar_preview_list_pane

0xc7b6,	// (0x000b6d2e) bg_main_sp_fs_cale_pane_ParamLimits

0xc7b6,	// (0x000b6d2e) bg_main_sp_fs_cale_pane

0xa902,	// (0x000b4e7a) listscroll_cale_mrui_pane_ParamLimits

0xa902,	// (0x000b4e7a) listscroll_cale_mrui_pane

0xa917,	// (0x000b4e8f) listscroll_sp_fs_schedule_track_pane

0xa920,	// (0x000b4e98) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0xa920,	// (0x000b4e98) main_sp_fs_ctrlbar_pane_cp01

0xe8b3,	// (0x000b8e2b) main_sp_fs_ribbon_pane

0xa933,	// (0x000b4eab) popup_sp_fs_cale_preview_window

0x855e,	// (0x000b2ad6) list_single_sp_fs_schedule_track_pane_ParamLimits

0x855e,	// (0x000b2ad6) list_single_sp_fs_schedule_track_pane

0xa5de,	// (0x000b4b56) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0xa5de,	// (0x000b4b56) bg_sp_fs_highlight_list_pane_cp03

0x8574,	// (0x000b2aec) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0x8574,	// (0x000b2aec) list_single_sp_fs_schedule_track_pane_g1

0x8580,	// (0x000b2af8) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0x8580,	// (0x000b2af8) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfdba,	// (0x000ba332) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfdba,	// (0x000ba332) list_single_sp_fs_schedule_track_pane_g

0x858c,	// (0x000b2b04) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0x858c,	// (0x000b2b04) list_single_sp_fs_schedule_track_pane_t1

0x85a6,	// (0x000b2b1e) sp_fs_schedule_track_pane_ParamLimits

0x85a6,	// (0x000b2b1e) sp_fs_schedule_track_pane

0xe8bb,	// (0x000b8e33) sp_fs_schedule_track_pane_g1

0xe8c3,	// (0x000b8e3b) sp_fs_schedule_track_pane_g2

0xe8cb,	// (0x000b8e43) sp_fs_schedule_track_pane_g3

0xe8d3,	// (0x000b8e4b) sp_fs_schedule_track_pane_g4

0xe8db,	// (0x000b8e53) sp_fs_schedule_track_pane_g5

0x0004,

0xfdbf,	// (0x000ba337) sp_fs_schedule_track_pane_g

0xd647,	// (0x000b7bbf) bg_sp_fs_schedule_viewer_highlight_g1

0xab23,	// (0x000b509b) bg_sp_fs_schedule_viewer_highlight_g2

0xd64f,	// (0x000b7bc7) bg_sp_fs_schedule_viewer_highlight_g3

0xd657,	// (0x000b7bcf) bg_sp_fs_schedule_viewer_highlight_g4

0xd86b,	// (0x000b7de3) bg_sp_fs_schedule_viewer_highlight_g5

0xd667,	// (0x000b7bdf) bg_sp_fs_schedule_viewer_highlight_g6

0xd66f,	// (0x000b7be7) bg_sp_fs_schedule_viewer_highlight_g7

0xd677,	// (0x000b7bef) bg_sp_fs_schedule_viewer_highlight_g8

0xab03,	// (0x000b507b) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfdca,	// (0x000ba342) bg_sp_fs_schedule_viewer_highlight_g

0x9325,	// (0x000b389d) bg_main_sp_fs_ribbon_pane

0x85b7,	// (0x000b2b2f) main_sp_fs_ribbon_pane_g1

0xe8e3,	// (0x000b8e5b) main_sp_fs_ribbon_pane_t1

0x85c0,	// (0x000b2b38) main_sp_fs_ribbon_pane_t2

0xe8f2,	// (0x000b8e6a) main_sp_fs_ribbon_pane_t3

0x0002,

0xfddd,	// (0x000ba355) main_sp_fs_ribbon_pane_t

0xe901,	// (0x000b8e79) main_sp_fs_ribbon_scheduler_pane

0xe909,	// (0x000b8e81) bg_main_sp_fs_ribbon_pane_g1

0xe912,	// (0x000b8e8a) bg_main_sp_fs_ribbon_pane_g2

0xe91b,	// (0x000b8e93) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfde4,	// (0x000ba35c) bg_main_sp_fs_ribbon_pane_g

0xe923,	// (0x000b8e9b) main_sp_fs_ribbon_scheduler_pane_g1

0xe92c,	// (0x000b8ea4) main_sp_fs_ribbon_scheduler_pane_g2

0xe935,	// (0x000b8ead) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfdeb,	// (0x000ba363) main_sp_fs_ribbon_scheduler_pane_g

0xe93e,	// (0x000b8eb6) list_cale_mrui_pane

0x85cf,	// (0x000b2b47) sp_fs_scroll_pane_cp07_ParamLimits

0x85cf,	// (0x000b2b47) sp_fs_scroll_pane_cp07

0x85eb,	// (0x000b2b63) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0x85eb,	// (0x000b2b63) bg_sp_fs_schedule_viewer_highlight

0xe94b,	// (0x000b8ec3) list_single_sp_fs_schedule_track_pane_cp01

0xe953,	// (0x000b8ecb) list_sp_fs_schedule_track_pane

0xe95b,	// (0x000b8ed3) sp_fs_scroll_pane_cp06_ParamLimits

0xe95b,	// (0x000b8ed3) sp_fs_scroll_pane_cp06

0xcbc0,	// (0x000b7138) bgmain_sp_fs_calendar_pane_g1

0x85fb,	// (0x000b2b73) list_single_cale_mrui_pane_ParamLimits

0x85fb,	// (0x000b2b73) list_single_cale_mrui_pane

0xa945,	// (0x000b4ebd) list_single_cale_mrui_row_pane_ParamLimits

0xa945,	// (0x000b4ebd) list_single_cale_mrui_row_pane

0xa952,	// (0x000b4eca) list_single_cale_mrui_row_pane_g1_ParamLimits

0xa952,	// (0x000b4eca) list_single_cale_mrui_row_pane_g1

0xa98a,	// (0x000b4f02) list_single_cale_mrui_row_pane_t1_ParamLimits

0xa98a,	// (0x000b4f02) list_single_cale_mrui_row_pane_t1

0x861d,	// (0x000b2b95) list_single_cale_mrui_row_pane_t2_ParamLimits

0x861d,	// (0x000b2b95) list_single_cale_mrui_row_pane_t2

0xa99c,	// (0x000b4f14) list_single_cale_mrui_row_pane_t3_ParamLimits

0xa99c,	// (0x000b4f14) list_single_cale_mrui_row_pane_t3

0xa9cb,	// (0x000b4f43) list_single_cale_mrui_row_pane_t4_ParamLimits

0xa9cb,	// (0x000b4f43) list_single_cale_mrui_row_pane_t4

0x0003,

0xfdf9,	// (0x000ba371) list_single_cale_mrui_row_pane_t_ParamLimits

0xfdf9,	// (0x000ba371) list_single_cale_mrui_row_pane_t

0x8685,	// (0x000b2bfd) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x8685,	// (0x000b2bfd) list_single_cmail_header_editor_pane_bg_cp01

0x86ab,	// (0x000b2c23) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x86ab,	// (0x000b2c23) list_single_cmail_header_editor_pane_bg_cp02

0x86cb,	// (0x000b2c43) main_radioblah_text_pane_t1_ParamLimits

0x86cb,	// (0x000b2c43) main_radioblah_text_pane_t1

0xe97a,	// (0x000b8ef2) cam6_indi_pane_cp01

0xe982,	// (0x000b8efa) cam6_mode_pane_cp01

0xe98a,	// (0x000b8f02) cam6_pano_pane

0xe993,	// (0x000b8f0b) cam6_zoom_pane_cp01

0xe99b,	// (0x000b8f13) cam6_pano_image_pane

0xe9a6,	// (0x000b8f1e) cam6_pano_pane_g1

0xe284,	// (0x000b87fc) cam6_pano_pane_g2

0xe9af,	// (0x000b8f27) cam6_pano_pane_g3

0xe9b8,	// (0x000b8f30) cam6_pano_pane_g4

0xd186,	// (0x000b76fe) cam6_pano_pane_g5

0xe9c1,	// (0x000b8f39) cam6_pano_pane_g6

0xe9cb,	// (0x000b8f43) cam6_pano_pane_g7

0xe9d3,	// (0x000b8f4b) cam6_pano_pane_g8

0xe9dc,	// (0x000b8f54) cam6_pano_pane_g9

0x0008,

0xfe02,	// (0x000ba37a) cam6_pano_pane_g

0x9325,	// (0x000b389d) main_browser_tag_pane

0xe83a,	// (0x000b8db2) grid_navstr_albumart_pane

0xe9e7,	// (0x000b8f5f) cell_navstr_albumart_pane_ParamLimits

0xe9e7,	// (0x000b8f5f) cell_navstr_albumart_pane

0xb4b5,	// (0x000b5a2d) cell_navstr_albumart_pane_g1

0xc5c7,	// (0x000b6b3f) cell_navstr_albumart_pane_g2

0xc5d7,	// (0x000b6b4f) cell_navstr_albumart_pane_g3

0xc5cf,	// (0x000b6b47) cell_navstr_albumart_pane_g4

0x0003,

0xfe15,	// (0x000ba38d) cell_navstr_albumart_pane_g

0x86e6,	// (0x000b2c5e) bt_list_pane_ParamLimits

0x86e6,	// (0x000b2c5e) bt_list_pane

0xea09,	// (0x000b8f81) bt_list_pane_t1

0xea18,	// (0x000b8f90) bt_list_pane_t2

0x0001,

0xfe1e,	// (0x000ba396) bt_list_pane_t

0x9325,	// (0x000b389d) main_cale_prevew_pane

0x86fb,	// (0x000b2c73) popup_cale_preview_window_ParamLimits

0x86fb,	// (0x000b2c73) popup_cale_preview_window

0xa5de,	// (0x000b4b56) bg_popup_preview_window_pane_cp05_ParamLimits

0xa5de,	// (0x000b4b56) bg_popup_preview_window_pane_cp05

0xea27,	// (0x000b8f9f) list_cale_preview_pane_ParamLimits

0xea27,	// (0x000b8f9f) list_cale_preview_pane

0xea33,	// (0x000b8fab) list_double_cale_preview_pane_ParamLimits

0xea33,	// (0x000b8fab) list_double_cale_preview_pane

0xea45,	// (0x000b8fbd) list_single_cale_preview_pane_ParamLimits

0xea45,	// (0x000b8fbd) list_single_cale_preview_pane

0xea59,	// (0x000b8fd1) list_single_cale_preview_pane_g1

0xea61,	// (0x000b8fd9) list_single_cale_preview_pane_t1_ParamLimits

0xea61,	// (0x000b8fd9) list_single_cale_preview_pane_t1

0xea76,	// (0x000b8fee) list_double_cale_preview_pane_g1

0xea7e,	// (0x000b8ff6) list_double_cale_preview_pane_t1_ParamLimits

0xea7e,	// (0x000b8ff6) list_double_cale_preview_pane_t1

0xea93,	// (0x000b900b) list_double_cale_preview_pane_t2_ParamLimits

0xea93,	// (0x000b900b) list_double_cale_preview_pane_t2

0x0001,

0xfe23,	// (0x000ba39b) list_double_cale_preview_pane_t_ParamLimits

0xfe23,	// (0x000ba39b) list_double_cale_preview_pane_t

0x9325,	// (0x000b389d) main_ezdial_pane

0xa5de,	// (0x000b4b56) main_sp_fs_email_pane_ParamLimits

0x7ca2,	// (0x000b221a) cmail_ddmenu_btn01_pane_ParamLimits

0x7ca2,	// (0x000b221a) cmail_ddmenu_btn01_pane

0x7cb5,	// (0x000b222d) cmail_ddmenu_btn02_pane_ParamLimits

0x7cb5,	// (0x000b222d) cmail_ddmenu_btn02_pane

0x7cd8,	// (0x000b2250) cmail_ddmenu_btn03_pane_ParamLimits

0x7cd8,	// (0x000b2250) cmail_ddmenu_btn03_pane

0x7cfe,	// (0x000b2276) main_sp_fs_ctrlbar_pane_ParamLimits

0x7d22,	// (0x000b229a) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0x8378,	// (0x000b28f0) list_cmail_body_pane_ParamLimits

0xe7b1,	// (0x000b8d29) bg_button_pane_cp12

0xe7ba,	// (0x000b8d32) list_single_cmail_header_detail_pane_g3_ParamLimits

0xe7ba,	// (0x000b8d32) list_single_cmail_header_detail_pane_g3

0xa8a3,	// (0x000b4e1b) list_single_cmail_header_detail_pane_t2_ParamLimits

0xa8a3,	// (0x000b4e1b) list_single_cmail_header_detail_pane_t2

0x0001,

0xfda6,	// (0x000ba31e) list_single_cmail_header_detail_pane_t_ParamLimits

0xfda6,	// (0x000ba31e) list_single_cmail_header_detail_pane_t

0xa8e4,	// (0x000b4e5c) phacti_term_pane_t2_ParamLimits

0xa8e4,	// (0x000b4e5c) phacti_term_pane_t2

0x0001,

0xfdb0,	// (0x000ba328) phacti_term_pane_t_ParamLimits

0xfdb0,	// (0x000ba328) phacti_term_pane_t

0xeaab,	// (0x000b9023) aid_size_list_single_double

0x8714,	// (0x000b2c8c) popup_ezdial_listscroll_window

0x872f,	// (0x000b2ca7) popup_number_entry_window_cp01

0xb346,	// (0x000b58be) bg_popup_call_pane_cp09

0xeab7,	// (0x000b902f) ezdial_list_pane

0xeabf,	// (0x000b9037) scroll_pane_cp23

0xc7b6,	// (0x000b6d2e) bg_button_pane_cp028_ParamLimits

0xc7b6,	// (0x000b6d2e) bg_button_pane_cp028

0x873d,	// (0x000b2cb5) cmail_ddmenu_btn01_pane_g1_ParamLimits

0x873d,	// (0x000b2cb5) cmail_ddmenu_btn01_pane_g1

0x8749,	// (0x000b2cc1) cmail_ddmenu_btn01_pane_g2_ParamLimits

0x8749,	// (0x000b2cc1) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfe28,	// (0x000ba3a0) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfe28,	// (0x000ba3a0) cmail_ddmenu_btn01_pane_g

0xeac7,	// (0x000b903f) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xeac7,	// (0x000b903f) cmail_ddmenu_btn01_pane_t1

0xc7b6,	// (0x000b6d2e) bg_button_pane_cp029_ParamLimits

0xc7b6,	// (0x000b6d2e) bg_button_pane_cp029

0x8755,	// (0x000b2ccd) cmail_ddmenu_btn02_pane_g1_ParamLimits

0x8755,	// (0x000b2ccd) cmail_ddmenu_btn02_pane_g1

0x876d,	// (0x000b2ce5) cmail_ddmenu_btn02_pane_t1_ParamLimits

0x876d,	// (0x000b2ce5) cmail_ddmenu_btn02_pane_t1

0xa5de,	// (0x000b4b56) bg_button_pane_cp031_ParamLimits

0xa5de,	// (0x000b4b56) bg_button_pane_cp031

0x8755,	// (0x000b2ccd) cmail_ddmenu_btn03_pane_g1_ParamLimits

0x8755,	// (0x000b2ccd) cmail_ddmenu_btn03_pane_g1

0x876d,	// (0x000b2ce5) cmail_ddmenu_btn03_pane_t1_ParamLimits

0x876d,	// (0x000b2ce5) cmail_ddmenu_btn03_pane_t1

0x55c3,	// (0x000afb3b) cell_dialer2_keypad_pane_t1_ParamLimits

0x55dd,	// (0x000afb55) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x55dd,	// (0x000afb55) cell_dialer2_keypad_pane_t1_copy1

0x7519,	// (0x000b1a91) ncimui_group_button_pane

0xa5de,	// (0x000b4b56) main_sp_fs_calendar_pane_ParamLimits

0x838d,	// (0x000b2905) list_single_cmail_header_caption_pane_ParamLimits

0xa8f9,	// (0x000b4e71) aid_recal_txt_sm_pane

0x9325,	// (0x000b389d) mian_recal_day_pane

0xa933,	// (0x000b4eab) popup_sp_fs_cale_preview_window_ParamLimits

0xeadc,	// (0x000b9054) list_recal_day_pane

0xaa15,	// (0x000b4f8d) list_single_recal_day_pane_ParamLimits

0xaa15,	// (0x000b4f8d) list_single_recal_day_pane

0xeb03,	// (0x000b907b) list_single_recal_day_pane_g1_ParamLimits

0xeb03,	// (0x000b907b) list_single_recal_day_pane_g1

0xaa27,	// (0x000b4f9f) list_single_recal_day_pane_g2_ParamLimits

0xaa27,	// (0x000b4f9f) list_single_recal_day_pane_g2

0xaa37,	// (0x000b4faf) list_single_recal_day_pane_g3_ParamLimits

0xaa37,	// (0x000b4faf) list_single_recal_day_pane_g3

0x8791,	// (0x000b2d09) list_single_recal_day_pane_g4_ParamLimits

0x8791,	// (0x000b2d09) list_single_recal_day_pane_g4

0xaa43,	// (0x000b4fbb) list_single_recal_day_pane_g5_ParamLimits

0xaa43,	// (0x000b4fbb) list_single_recal_day_pane_g5

0xaa53,	// (0x000b4fcb) list_single_recal_day_pane_g6_ParamLimits

0xaa53,	// (0x000b4fcb) list_single_recal_day_pane_g6

0x0004,

0xfe37,	// (0x000ba3af) list_single_recal_day_pane_g_ParamLimits

0xfe37,	// (0x000ba3af) list_single_recal_day_pane_g

0xaa67,	// (0x000b4fdf) list_single_recal_day_pane_t1

0xaa79,	// (0x000b4ff1) list_single_recal_day_pane_t2

0x0001,

0xfe42,	// (0x000ba3ba) list_single_recal_day_pane_t

0x87b1,	// (0x000b2d29) ncimui_query_button_pane_ParamLimits

0x87b1,	// (0x000b2d29) ncimui_query_button_pane

0x87c1,	// (0x000b2d39) ncimui_query_button_pane_t1_ParamLimits

0x87c1,	// (0x000b2d39) ncimui_query_button_pane_t1

0xeb0f,	// (0x000b9087) ncimui_query_button_pane_t2_ParamLimits

0xeb0f,	// (0x000b9087) ncimui_query_button_pane_t2

0x0001,

0xfe47,	// (0x000ba3bf) ncimui_query_button_pane_t_ParamLimits

0xfe47,	// (0x000ba3bf) ncimui_query_button_pane_t

0x87d4,	// (0x000b2d4c) query_button_pane_ParamLimits

0x87d4,	// (0x000b2d4c) query_button_pane

0x9325,	// (0x000b389d) bg_button_pane_cp0028

0xeb22,	// (0x000b909a) query_button_pane_t1

0x365e,	// (0x000adbd6) main_tport_pane_ParamLimits

0x823c,	// (0x000b27b4) bg_popup_window_pane_cp01_ParamLimits

0x823c,	// (0x000b27b4) bg_popup_window_pane_cp01

0x8257,	// (0x000b27cf) heading_pane_cp08_ParamLimits

0x8257,	// (0x000b27cf) heading_pane_cp08

0x826a,	// (0x000b27e2) heading_pane_cp07_ParamLimits

0x826a,	// (0x000b27e2) heading_pane_cp07

0x8311,	// (0x000b2889) cell_tport_appsw_pane_g2

0x0002,

0xfd93,	// (0x000ba30b) cell_tport_appsw_pane_g

0x2bf0,	// (0x000ad168) input_candi_list_open_g1

0xacee,	// (0x000b5266) list_cale_time_pane_g6_ParamLimits

0xacee,	// (0x000b5266) list_cale_time_pane_g6

0x4421,	// (0x000ae999) aid_size_touch_calib_1_ParamLimits

0x4421,	// (0x000ae999) aid_size_touch_calib_1

0x4433,	// (0x000ae9ab) aid_size_touch_calib_2_ParamLimits

0x4433,	// (0x000ae9ab) aid_size_touch_calib_2

0x444b,	// (0x000ae9c3) aid_size_touch_calib_3_ParamLimits

0x444b,	// (0x000ae9c3) aid_size_touch_calib_3

0x4469,	// (0x000ae9e1) aid_size_touch_calib_4_ParamLimits

0x4469,	// (0x000ae9e1) aid_size_touch_calib_4

0x4481,	// (0x000ae9f9) main_touch_calib_button_group_pane_ParamLimits

0x4481,	// (0x000ae9f9) main_touch_calib_button_group_pane

0x4499,	// (0x000aea11) main_touch_calib_pane_g1_ParamLimits

0x44ab,	// (0x000aea23) main_touch_calib_pane_g2_ParamLimits

0x44bd,	// (0x000aea35) main_touch_calib_pane_g3_ParamLimits

0x44cf,	// (0x000aea47) main_touch_calib_pane_g4_ParamLimits

0xf751,	// (0x000b9cc9) main_touch_calib_pane_g_ParamLimits

0x44e1,	// (0x000aea59) main_touch_calib_pane_t1_ParamLimits

0x44fb,	// (0x000aea73) main_touch_calib_pane_t2_ParamLimits

0x4515,	// (0x000aea8d) main_touch_calib_pane_t3_ParamLimits

0x4529,	// (0x000aeaa1) main_touch_calib_pane_t4_ParamLimits

0x453d,	// (0x000aeab5) main_touch_calib_pane_t5_ParamLimits

0xf75a,	// (0x000b9cd2) main_touch_calib_pane_t_ParamLimits

0xcf28,	// (0x000b74a0) list_single_fp_cale_pane_g3_ParamLimits

0xcf28,	// (0x000b74a0) list_single_fp_cale_pane_g3

0x938d,	// (0x000b3905) bg_button_pane_cp012_ParamLimits

0x938d,	// (0x000b3905) bg_vkb2_func_pane_cp03_ParamLimits

0x652c,	// (0x000b0aa4) cell_vitu2_function_top_pane_g1_ParamLimits

0x938d,	// (0x000b3905) bg_vkb2_func_pane_cp04_ParamLimits

0x74a7,	// (0x000b1a1f) main_ncimui_button_group_pane_ParamLimits

0x74a7,	// (0x000b1a1f) main_ncimui_button_group_pane

0x7507,	// (0x000b1a7f) main_ncimui_pane_t3_ParamLimits

0x7507,	// (0x000b1a7f) main_ncimui_pane_t3

0xe850,	// (0x000b8dc8) phacti_button_group_pane

0xeaab,	// (0x000b9023) aid_size_list_single_double_ParamLimits

0x8714,	// (0x000b2c8c) popup_ezdial_listscroll_window_ParamLimits

0x872f,	// (0x000b2ca7) popup_number_entry_window_cp01_ParamLimits

0x87e7,	// (0x000b2d5f) phacti_button_pane_ParamLimits

0x87e7,	// (0x000b2d5f) phacti_button_pane

0x9325,	// (0x000b389d) bg_button_pane_cp14

0xeb30,	// (0x000b90a8) phacti_button_pane_t1

0x87f8,	// (0x000b2d70) main_touch_calib_button_pane_ParamLimits

0x87f8,	// (0x000b2d70) main_touch_calib_button_pane

0xa213,	// (0x000b478b) bg_button_pane_cp18_ParamLimits

0xa213,	// (0x000b478b) bg_button_pane_cp18

0xeb3e,	// (0x000b90b6) main_touch_calib_button_pane_t1_ParamLimits

0xeb3e,	// (0x000b90b6) main_touch_calib_button_pane_t1

0xeb54,	// (0x000b90cc) main_touch_calib_button_pane_t2_ParamLimits

0xeb54,	// (0x000b90cc) main_touch_calib_button_pane_t2

0x0001,

0xfe4c,	// (0x000ba3c4) main_touch_calib_button_pane_t_ParamLimits

0xfe4c,	// (0x000ba3c4) main_touch_calib_button_pane_t

0x9325,	// (0x000b389d) cell_ncimui_button_pane

0x9325,	// (0x000b389d) bg_button_pane_cp032

0xeb72,	// (0x000b90ea) cell_ncimui_button_pane_t1

0x9cb7,	// (0x000b422f) image3_infobar_pane_ParamLimits

0x9cb7,	// (0x000b422f) image3_infobar_pane

0x78e3,	// (0x000b1e5b) fs_bigclock_status_pane_ParamLimits

0x78e3,	// (0x000b1e5b) fs_bigclock_status_pane

0x78f0,	// (0x000b1e68) main_fs_bigclock_clock_pane_ParamLimits

0x78f0,	// (0x000b1e68) main_fs_bigclock_clock_pane

0x7910,	// (0x000b1e88) main_fs_bigclock_indi_pane_ParamLimits

0x7910,	// (0x000b1e88) main_fs_bigclock_indi_pane

0x793a,	// (0x000b1eb2) main_fs_bigclock_swipe_pane_ParamLimits

0x793a,	// (0x000b1eb2) main_fs_bigclock_swipe_pane

0x9325,	// (0x000b389d) main_fs_clock_dumped_data

0xe391,	// (0x000b8909) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xe391,	// (0x000b8909) list_single_fs_bigclock_indicator_pane_g1

0xe3ad,	// (0x000b8925) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xe3ad,	// (0x000b8925) list_single_fs_bigclock_indicator_pane_g2

0xe3c7,	// (0x000b893f) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xe3c7,	// (0x000b893f) list_single_fs_bigclock_indicator_pane_g3

0xe3e1,	// (0x000b8959) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xe3e1,	// (0x000b8959) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfc74,	// (0x000ba1ec) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfc74,	// (0x000ba1ec) list_single_fs_bigclock_indicator_pane_g

0xe40c,	// (0x000b8984) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xe40c,	// (0x000b8984) list_single_fs_bigclock_indicator_pane_t1

0xe434,	// (0x000b89ac) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xe434,	// (0x000b89ac) list_single_fs_bigclock_indicator_pane_t2

0xe45c,	// (0x000b89d4) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xe45c,	// (0x000b89d4) list_single_fs_bigclock_indicator_pane_t3

0xe484,	// (0x000b89fc) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xe484,	// (0x000b89fc) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfc7f,	// (0x000ba1f7) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfc7f,	// (0x000ba1f7) list_single_fs_bigclock_indicator_pane_t

0xeb80,	// (0x000b90f8) image3_infobar_fav_pane_ParamLimits

0xeb80,	// (0x000b90f8) image3_infobar_fav_pane

0xeb90,	// (0x000b9108) image3_infobar_loc_pane_ParamLimits

0xeb90,	// (0x000b9108) image3_infobar_loc_pane

0xeba4,	// (0x000b911c) image3_infobar_time_pane_ParamLimits

0xeba4,	// (0x000b911c) image3_infobar_time_pane

0xcbc0,	// (0x000b7138) image3_infobar_time_pane_g1

0xebb4,	// (0x000b912c) image3_infobar_time_pane_t1

0xcbc0,	// (0x000b7138) image3_infobar_loc_pane_g1

0xebc2,	// (0x000b913a) image3_infobar_loc_pane_g2

0x0001,

0xfe51,	// (0x000ba3c9) image3_infobar_loc_pane_g

0xebca,	// (0x000b9142) image3_infobar_loc_pane_t1

0xcbc0,	// (0x000b7138) image3_infobar_fav_pane_g1

0xebd8,	// (0x000b9150) image3_infobar_fav_pane_g2

0x0001,

0xfe56,	// (0x000ba3ce) image3_infobar_fav_pane_g

0xebe0,	// (0x000b9158) fs_bigclock_status_battery_pane

0xebe9,	// (0x000b9161) fs_bigclock_status_signal_pane

0xebf2,	// (0x000b916a) fs_bigclock_status_title_pane

0xebfb,	// (0x000b9173) fs_bigclock_status_signal_pane_g1

0xec04,	// (0x000b917c) fs_bigclock_status_signal_pane_g2

0x0001,

0xfe5b,	// (0x000ba3d3) fs_bigclock_status_signal_pane_g

0xec0c,	// (0x000b9184) fs_bigclock_status_battery_pane_g1

0xec15,	// (0x000b918d) fs_bigclock_status_battery_pane_g2

0x0001,

0xfe60,	// (0x000ba3d8) fs_bigclock_status_battery_pane_g

0xec1d,	// (0x000b9195) fs_bigclock_status_title_pane_t1

0xcbc0,	// (0x000b7138) main_fs_bigclock_clock_pane_g1

0xec2b,	// (0x000b91a3) main_fs_bigclock_clock_pane_g2

0xec34,	// (0x000b91ac) main_fs_bigclock_clock_pane_g3

0xec34,	// (0x000b91ac) main_fs_bigclock_clock_pane_g4

0x0003,

0xfe65,	// (0x000ba3dd) main_fs_bigclock_clock_pane_g

0xec3c,	// (0x000b91b4) main_fs_bigclock_clock_pane_t1

0x880d,	// (0x000b2d85) main_fs_bigclock_clock_pane_t2

0x0001,

0xfe6e,	// (0x000ba3e6) main_fs_bigclock_clock_pane_t

0xec4a,	// (0x000b91c2) list_single_fs_bigclock_indicator_pane_ParamLimits

0xec4a,	// (0x000b91c2) list_single_fs_bigclock_indicator_pane

0xec5b,	// (0x000b91d3) list_single_fs_bigclock_pane_ParamLimits

0xec5b,	// (0x000b91d3) list_single_fs_bigclock_pane

0xec81,	// (0x000b91f9) main_fs_bigclock_indicator_pane_t1

0xec90,	// (0x000b9208) list_single_fs_bigclock_pane_g1

0xec98,	// (0x000b9210) list_single_fs_bigclock_pane_t1

0xcbc0,	// (0x000b7138) main_fs_bigclock_swipe_pane_g1

0xecdb,	// (0x000b9253) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfe7f,	// (0x000ba3f7) main_fs_bigclock_swipe_pane_g

0xece3,	// (0x000b925b) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xece3,	// (0x000b925b) main_fs_bigclock_swipe_pane_t1

0x250b,	// (0x000aca83) call_type_pane_ParamLimits

0x9325,	// (0x000b389d) main_btmg_pane

0xa97e,	// (0x000b4ef6) list_single_cale_mrui_row_pane_g2_ParamLimits

0xa97e,	// (0x000b4ef6) list_single_cale_mrui_row_pane_g2

0x0002,

0xfdf2,	// (0x000ba36a) list_single_cale_mrui_row_pane_g_ParamLimits

0xfdf2,	// (0x000ba36a) list_single_cale_mrui_row_pane_g

0xaa04,	// (0x000b4f7c) list_recal_vselct_arw_lo_pane

0xeafb,	// (0x000b9073) list_recal_vselct_arw_up_pane

0xaa0c,	// (0x000b4f84) list_recal_vselct_pane

0x885e,	// (0x000b2dd6) btmg_button_pane

0x8868,	// (0x000b2de0) main_btmg_pane_g1

0x9325,	// (0x000b389d) bg_button_pane_cp044

0xed00,	// (0x000b9278) btmg_button_pane_t1

0xc7a2,	// (0x000b6d1a) aid_listscroll_gen

0xa5de,	// (0x000b4b56) main_cntbar_detail_pane

0xe793,	// (0x000b8d0b) list_cmail_folder_pane

0xc2a9,	// (0x000b6821) sp_fs_scroll_pane_cp03_ParamLimits

0x8872,	// (0x000b2dea) list_single_fs_dyc_pane_cp01_ParamLimits

0x8872,	// (0x000b2dea) list_single_fs_dyc_pane_cp01

0xed0e,	// (0x000b9286) aid_size_cmail_indent

0xaa8b,	// (0x000b5003) list_single_dyc_row_pane_cp01

0x88b6,	// (0x000b2e2e) cntbar_detail_list_pane_ParamLimits

0x88b6,	// (0x000b2e2e) cntbar_detail_list_pane

0x8902,	// (0x000b2e7a) main_cntbar_detail_cont_pane_ParamLimits

0x8902,	// (0x000b2e7a) main_cntbar_detail_cont_pane

0xc2a9,	// (0x000b6821) scroll_pane_cp032_ParamLimits

0xc2a9,	// (0x000b6821) scroll_pane_cp032

0x8916,	// (0x000b2e8e) cntbar_detail_list_event_pane_ParamLimits

0x8916,	// (0x000b2e8e) cntbar_detail_list_event_pane

0x88c6,	// (0x000b2e3e) cntbar_detail_list_shct_pane

0xab71,	// (0x000b50e9) aid_list_gen

0xed17,	// (0x000b928f) aid_scroll

0xed20,	// (0x000b9298) aid_size_touch_scroll_bar

0x6c32,	// (0x000b11aa) aid_list_double

0xed29,	// (0x000b92a1) aid_list_single

0x6c20,	// (0x000b1198) aid_list_single_lg

0xaa94,	// (0x000b500c) aid_list_z_g_a_sm

0xaa9c,	// (0x000b5014) aid_list_z_g_d

0xaaa4,	// (0x000b501c) aid_txt_z_prm

0x8926,	// (0x000b2e9e) aid_txt_z_prm_cp01

0x8934,	// (0x000b2eac) aid_txt_z_sec

0x8942,	// (0x000b2eba) main_cntbar_detail_cont_pane_g1_ParamLimits

0x8942,	// (0x000b2eba) main_cntbar_detail_cont_pane_g1

0x8956,	// (0x000b2ece) main_cntbar_detail_cont_pane_g2_ParamLimits

0x8956,	// (0x000b2ece) main_cntbar_detail_cont_pane_g2

0x0001,

0xfe84,	// (0x000ba3fc) main_cntbar_detail_cont_pane_g_ParamLimits

0xfe84,	// (0x000ba3fc) main_cntbar_detail_cont_pane_g

0xed32,	// (0x000b92aa) main_cntbar_detail_cont_pane_t1

0xed40,	// (0x000b92b8) main_cntbar_detail_cont_pane_t2

0xed4e,	// (0x000b92c6) main_cntbar_detail_cont_pane_t3

0x0002,

0xfe89,	// (0x000ba401) main_cntbar_detail_cont_pane_t

0x8966,	// (0x000b2ede) cell_cntbar_detail_list_shct_pane_ParamLimits

0x8966,	// (0x000b2ede) cell_cntbar_detail_list_shct_pane

0xed5c,	// (0x000b92d4) cntbar_detail_list_shct_pane_g1

0xed65,	// (0x000b92dd) cntbar_detail_list_shct_pane_g2

0x0001,

0xfe90,	// (0x000ba408) cntbar_detail_list_shct_pane_g

0x897a,	// (0x000b2ef2) cntbar_detail_list_event_pane_g1_ParamLimits

0x897a,	// (0x000b2ef2) cntbar_detail_list_event_pane_g1

0x8986,	// (0x000b2efe) cntbar_detail_list_event_pane_g2_ParamLimits

0x8986,	// (0x000b2efe) cntbar_detail_list_event_pane_g2

0x0005,

0xfe95,	// (0x000ba40d) cntbar_detail_list_event_pane_g_ParamLimits

0xfe95,	// (0x000ba40d) cntbar_detail_list_event_pane_g

0x89f2,	// (0x000b2f6a) cntbar_detail_list_event_pane_t1_ParamLimits

0x89f2,	// (0x000b2f6a) cntbar_detail_list_event_pane_t1

0x8a07,	// (0x000b2f7f) cntbar_detail_list_event_pane_t2_ParamLimits

0x8a07,	// (0x000b2f7f) cntbar_detail_list_event_pane_t2

0x0002,

0xfea2,	// (0x000ba41a) cntbar_detail_list_event_pane_t_ParamLimits

0xfea2,	// (0x000ba41a) cntbar_detail_list_event_pane_t

0xcbc0,	// (0x000b7138) cell_cntbar_detail_list_shct_pane_g1

0xb2fe,	// (0x000b5876) navi_pane_mv_g3

0xa5de,	// (0x000b4b56) main_cntbar_detail_pane_ParamLimits

0x9325,	// (0x000b389d) main_notif_wgt_pane

0x9acd,	// (0x000b4045) aid_tch_main_mp4_pane_g4

0x9caf,	// (0x000b4227) popup_slider_window_cp02

0xa9fa,	// (0x000b4f72) list_recal_day_event_pane

0x888a,	// (0x000b2e02) cntbar_detail_btn_pane_ParamLimits

0x888a,	// (0x000b2e02) cntbar_detail_btn_pane

0x88a0,	// (0x000b2e18) cntbar_detail_btn_pane_cp01_ParamLimits

0x88a0,	// (0x000b2e18) cntbar_detail_btn_pane_cp01

0x88c6,	// (0x000b2e3e) cntbar_detail_list_shct_pane_ParamLimits

0x88d6,	// (0x000b2e4e) cntbar_detail_pane_g1_ParamLimits

0x88d6,	// (0x000b2e4e) cntbar_detail_pane_g1

0x88e6,	// (0x000b2e5e) cntbar_detail_pane_t1_ParamLimits

0x88e6,	// (0x000b2e5e) cntbar_detail_pane_t1

0x8992,	// (0x000b2f0a) cntbar_detail_list_event_pane_g3_ParamLimits

0x8992,	// (0x000b2f0a) cntbar_detail_list_event_pane_g3

0x89aa,	// (0x000b2f22) cntbar_detail_list_event_pane_g4_ParamLimits

0x89aa,	// (0x000b2f22) cntbar_detail_list_event_pane_g4

0x89c2,	// (0x000b2f3a) cntbar_detail_list_event_pane_g5_ParamLimits

0x89c2,	// (0x000b2f3a) cntbar_detail_list_event_pane_g5

0x89da,	// (0x000b2f52) cntbar_detail_list_event_pane_g6_ParamLimits

0x89da,	// (0x000b2f52) cntbar_detail_list_event_pane_g6

0x8a1c,	// (0x000b2f94) cntbar_detail_list_event_pane_t3_ParamLimits

0x8a1c,	// (0x000b2f94) cntbar_detail_list_event_pane_t3

0x8a2e,	// (0x000b2fa6) popup_notif_wgt_window_ParamLimits

0x8a2e,	// (0x000b2fa6) popup_notif_wgt_window

0x8a47,	// (0x000b2fbf) popup_submenu_window_cp01_ParamLimits

0x8a47,	// (0x000b2fbf) popup_submenu_window_cp01

0xb346,	// (0x000b58be) bg_popup_window_pane_cp10

0xed6e,	// (0x000b92e6) listscroll_notif_wgt_pane

0xed7f,	// (0x000b92f7) list_notif_wgt_window

0xed88,	// (0x000b9300) scroll_pane_cp033

0x8a59,	// (0x000b2fd1) list_notif_wgt_row_pane_ParamLimits

0x8a59,	// (0x000b2fd1) list_notif_wgt_row_pane

0xed91,	// (0x000b9309) aid_size_list_notif_wgt_del

0xed9e,	// (0x000b9316) list_notif_wgt_row_pane_g1

0xedaa,	// (0x000b9322) list_notif_wgt_row_pane_g2

0xedbe,	// (0x000b9336) list_notif_wgt_row_pane_g3

0x0002,

0xfea9,	// (0x000ba421) list_notif_wgt_row_pane_g

0xedcb,	// (0x000b9343) list_notif_wgt_row_pane_t1

0xede1,	// (0x000b9359) list_notif_wgt_row_pane_t2

0xedf3,	// (0x000b936b) list_notif_wgt_row_pane_t3

0x0002,

0xfeb0,	// (0x000ba428) list_notif_wgt_row_pane_t

0xd885,	// (0x000b7dfd) list_recal_day_event_pane_g1

0xee05,	// (0x000b937d) list_recal_day_event_pane_t1

0x9325,	// (0x000b389d) bg_button_pane_cp045

0xee14,	// (0x000b938c) cntbar_detail_btn_pane_t1

0xc7b6,	// (0x000b6d2e) main_callh_pane_ParamLimits

0xc7b6,	// (0x000b6d2e) main_callh_pane

0x9325,	// (0x000b389d) main_coverflow0_pane

0x9325,	// (0x000b389d) main_wgtman_pane

0x7952,	// (0x000b1eca) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x7952,	// (0x000b1eca) main_fs_bigclock_unlock_btn_pane

0x8309,	// (0x000b2881) bg_button_pane_cp16

0x8319,	// (0x000b2891) cell_tport_appsw_pane_g3

0x8a69,	// (0x000b2fe1) cf0_flow_pane_ParamLimits

0x8a69,	// (0x000b2fe1) cf0_flow_pane

0xee22,	// (0x000b939a) listscroll_cf0_pane

0xee2d,	// (0x000b93a5) main_cf0_pane_g1

0x8a7e,	// (0x000b2ff6) main_cf0_pane_t1_ParamLimits

0x8a7e,	// (0x000b2ff6) main_cf0_pane_t1

0x8a95,	// (0x000b300d) main_cf0_pane_t2_ParamLimits

0x8a95,	// (0x000b300d) main_cf0_pane_t2

0x0001,

0xfebc,	// (0x000ba434) main_cf0_pane_t_ParamLimits

0xfebc,	// (0x000ba434) main_cf0_pane_t

0xee3f,	// (0x000b93b7) scroll_pane_cp11

0x8aac,	// (0x000b3024) cf0_flow_pane_g1

0x8ab4,	// (0x000b302c) cf0_flow_pane_g2

0x0001,

0xfec1,	// (0x000ba439) cf0_flow_pane_g

0x8abc,	// (0x000b3034) cf0_flow_pane_t1

0x9325,	// (0x000b389d) main_call6_pane

0x9325,	// (0x000b389d) main_calllock_pane

0x8aca,	// (0x000b3042) call6_btn_grp_pane_ParamLimits

0x8aca,	// (0x000b3042) call6_btn_grp_pane

0x8ae4,	// (0x000b305c) call6_pane_g1_ParamLimits

0x8ae4,	// (0x000b305c) call6_pane_g1

0x8af9,	// (0x000b3071) popup_call6_1st_window_ParamLimits

0x8af9,	// (0x000b3071) popup_call6_1st_window

0x8b0a,	// (0x000b3082) popup_call6_2nd_window_ParamLimits

0x8b0a,	// (0x000b3082) popup_call6_2nd_window

0x8b1b,	// (0x000b3093) cell_call6_btn_pane_ParamLimits

0x8b1b,	// (0x000b3093) cell_call6_btn_pane

0xb346,	// (0x000b58be) bg_popup_call2_in_pane_cp03

0xee4a,	// (0x000b93c2) popup_call6_1st_window_g1

0xee52,	// (0x000b93ca) popup_call6_1st_window_g2

0xee5a,	// (0x000b93d2) popup_call6_1st_window_g3

0x0002,

0xfec6,	// (0x000ba43e) popup_call6_1st_window_g

0xee62,	// (0x000b93da) popup_call6_1st_window_t1

0xee71,	// (0x000b93e9) popup_call6_1st_window_t2

0xee81,	// (0x000b93f9) popup_call6_1st_window_t3

0x0002,

0xfecd,	// (0x000ba445) popup_call6_1st_window_t

0xb346,	// (0x000b58be) bg_popup_call2_in_pane_cp04

0xee4a,	// (0x000b93c2) popup_call6_2nd_window_g1

0xee52,	// (0x000b93ca) popup_call6_2nd_window_g2

0xee5a,	// (0x000b93d2) popup_call6_2nd_window_g3

0x0002,

0xfec6,	// (0x000ba43e) popup_call6_2nd_window_g

0xee62,	// (0x000b93da) popup_call6_2nd_window_t1

0x9325,	// (0x000b389d) bg_button_pane_cp15

0xee91,	// (0x000b9409) cell_call6_btn_pane_g1

0xee9a,	// (0x000b9412) cell_call6_btn_pane_t1

0x8b2f,	// (0x000b30a7) listscroll_wgtman_pane_ParamLimits

0x8b2f,	// (0x000b30a7) listscroll_wgtman_pane

0x8b50,	// (0x000b30c8) wgtman_btn_pane_ParamLimits

0x8b50,	// (0x000b30c8) wgtman_btn_pane

0xb103,	// (0x000b567b) aid_scroll_copy1

0xeea9,	// (0x000b9421) list_wgtman_pane

0x8b93,	// (0x000b310b) wgtman_btn_pane_g1_ParamLimits

0x8b93,	// (0x000b310b) wgtman_btn_pane_g1

0x8bbf,	// (0x000b3137) wgtman_btn_pane_t1_ParamLimits

0x8bbf,	// (0x000b3137) wgtman_btn_pane_t1

0xeeb3,	// (0x000b942b) wgtman_btn_pane_t2_ParamLimits

0xeeb3,	// (0x000b942b) wgtman_btn_pane_t2

0x0001,

0xfed4,	// (0x000ba44c) wgtman_btn_pane_t_ParamLimits

0xfed4,	// (0x000ba44c) wgtman_btn_pane_t

0x8bfc,	// (0x000b3174) listrow_wgtman_pane_ParamLimits

0x8bfc,	// (0x000b3174) listrow_wgtman_pane

0x8c0f,	// (0x000b3187) listrow_wgtman_pane_g1

0x8c1c,	// (0x000b3194) listrow_wgtman_pane_g2

0x0001,

0xfed9,	// (0x000ba451) listrow_wgtman_pane_g

0x8c3a,	// (0x000b31b2) listrow_wgtman_pane_t1

0x8c52,	// (0x000b31ca) listrow_wgtman_pane_t2

0x0001,

0xfede,	// (0x000ba456) listrow_wgtman_pane_t

0x8c78,	// (0x000b31f0) wait_bar_pane_cp09

0xeeca,	// (0x000b9442) main_calllock_btn_pane

0xeed4,	// (0x000b944c) main_calllock_pane_g1

0x9325,	// (0x000b389d) bg_button_pane_cp17

0xeedf,	// (0x000b9457) main_calllock_btn_pane_g1

0xeee8,	// (0x000b9460) main_calllock_btn_pane_t1

0x9325,	// (0x000b389d) main_dialer3_pane

0x9325,	// (0x000b389d) main_fmrd2_pane

0xcbc0,	// (0x000b7138) main_fs_bigclock_unlock_btn_pane_g1

0xeeff,	// (0x000b9477) main_fs_bigclock_unlock_btn_pane_t1

0x8c8a,	// (0x000b3202) area_fmrd2_info_pane_ParamLimits

0x8c8a,	// (0x000b3202) area_fmrd2_info_pane

0x8c9b,	// (0x000b3213) area_fmrd2_visual_pane_ParamLimits

0x8c9b,	// (0x000b3213) area_fmrd2_visual_pane

0x8ca9,	// (0x000b3221) fmrd2_indi_pane_ParamLimits

0x8ca9,	// (0x000b3221) fmrd2_indi_pane

0x8cb6,	// (0x000b322e) area_fmrd2_visual_pane_g1

0x8cbe,	// (0x000b3236) area_fmrd2_visual_pane_t1

0x8cce,	// (0x000b3246) area_fmrd2_visual_pane_t2

0x8cde,	// (0x000b3256) area_fmrd2_visual_pane_t3

0x0002,

0xfee8,	// (0x000ba460) area_fmrd2_visual_pane_t

0x8cee,	// (0x000b3266) area_fmrd2_info_pane_g1

0x8cf6,	// (0x000b326e) area_fmrd2_info_pane_t1

0x8d06,	// (0x000b327e) area_fmrd2_info_pane_t2

0x8d16,	// (0x000b328e) area_fmrd2_info_pane_t3

0x8d26,	// (0x000b329e) area_fmrd2_info_pane_t4

0x0003,

0xfeef,	// (0x000ba467) area_fmrd2_info_pane_t

0x8d34,	// (0x000b32ac) fmrd2_indi_pane_t1

0x8d44,	// (0x000b32bc) fmrd2_indi_pane_t2

0x8d54,	// (0x000b32cc) fmrd2_indi_pane_t3

0x0002,

0xfef8,	// (0x000ba470) fmrd2_indi_pane_t

0xe3f0,	// (0x000b8968) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xe3f0,	// (0x000b8968) list_single_fs_bigclock_indicator_pane_g5

0xe4a0,	// (0x000b8a18) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xe4a0,	// (0x000b8a18) list_single_fs_bigclock_indicator_pane_t5

0x84fd,	// (0x000b2a75) aid_cell_bcale_month_pane_ParamLimits

0x84fd,	// (0x000b2a75) aid_cell_bcale_month_pane

0x851b,	// (0x000b2a93) bcale_month_pane_ParamLimits

0x851b,	// (0x000b2a93) bcale_month_pane

0x853f,	// (0x000b2ab7) bcale_preview_pane_ParamLimits

0x853f,	// (0x000b2ab7) bcale_preview_pane

0xec98,	// (0x000b9210) list_single_fs_bigclock_pane_t1_ParamLimits

0xecb7,	// (0x000b922f) list_single_fs_bigclock_pane_t2_ParamLimits

0xecb7,	// (0x000b922f) list_single_fs_bigclock_pane_t2

0x0001,

0xfe7a,	// (0x000ba3f2) list_single_fs_bigclock_pane_t_ParamLimits

0xfe7a,	// (0x000ba3f2) list_single_fs_bigclock_pane_t

0xeef7,	// (0x000b946f) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfee3,	// (0x000ba45b) main_fs_bigclock_unlock_btn_pane_g

0x8d64,	// (0x000b32dc) aid_dia3_key_size_ParamLimits

0x8d64,	// (0x000b32dc) aid_dia3_key_size

0x8d73,	// (0x000b32eb) aid_dia3_listrow_size_ParamLimits

0x8d73,	// (0x000b32eb) aid_dia3_listrow_size

0x8d88,	// (0x000b3300) dia3_keypad_fun_pane_ParamLimits

0x8d88,	// (0x000b3300) dia3_keypad_fun_pane

0x8da4,	// (0x000b331c) dia3_keypad_num_pane_ParamLimits

0x8da4,	// (0x000b331c) dia3_keypad_num_pane

0x8dbf,	// (0x000b3337) dia3_listscroll_pane_ParamLimits

0x8dbf,	// (0x000b3337) dia3_listscroll_pane

0x8dd2,	// (0x000b334a) dia3_numentry_pane_ParamLimits

0x8dd2,	// (0x000b334a) dia3_numentry_pane

0xef0d,	// (0x000b9485) dia3_list_pane

0xef18,	// (0x000b9490) scroll_pane_cp12

0x9325,	// (0x000b389d) bg_dia3_numentry_pane

0x8de6,	// (0x000b335e) dia3_numentry_pane_t1

0x8df5,	// (0x000b336d) cell_dia3_key_num_pane

0x8dfd,	// (0x000b3375) cell_dia3_key0_fun_pane_ParamLimits

0x8dfd,	// (0x000b3375) cell_dia3_key0_fun_pane

0x8e11,	// (0x000b3389) cell_dia3_key1_fun_pane_ParamLimits

0x8e11,	// (0x000b3389) cell_dia3_key1_fun_pane

0x8e29,	// (0x000b33a1) dia3_listrow_pane

0xe0fe,	// (0x000b8676) bg_dia3_numentry_pane_g1

0x9325,	// (0x000b389d) bg_button_pane_cp21

0xef23,	// (0x000b949b) cell_dia3_key_num_pane_t1

0xef31,	// (0x000b94a9) cell_dia3_key_num_pane_t2

0xef40,	// (0x000b94b8) cell_dia3_key_num_pane_t3

0xef4f,	// (0x000b94c7) cell_dia3_key_num_pane_t4

0x0003,

0xfeff,	// (0x000ba477) cell_dia3_key_num_pane_t

0x9325,	// (0x000b389d) bg_button_pane_cp19

0x8e3b,	// (0x000b33b3) cell_dia3_key0_fun_pane_g1

0x9325,	// (0x000b389d) bg_button_pane_cp20

0x8e43,	// (0x000b33bb) cell_dia3_key1_fun_pane_g1

0x8e4b,	// (0x000b33c3) area_left_week_number_pane

0x8e57,	// (0x000b33cf) area_top_day_name_pane

0x8e6a,	// (0x000b33e2) frame_month_view_pane

0xef5e,	// (0x000b94d6) grid_month_view_pane

0x8e7d,	// (0x000b33f5) cell_top_day_name_pane_ParamLimits

0x8e7d,	// (0x000b33f5) cell_top_day_name_pane

0x8eaa,	// (0x000b3422) cell_area_left_week_number_pane_ParamLimits

0x8eaa,	// (0x000b3422) cell_area_left_week_number_pane

0x8ebe,	// (0x000b3436) cell_month_view_pane_ParamLimits

0x8ebe,	// (0x000b3436) cell_month_view_pane

0xef6c,	// (0x000b94e4) frm_month_g1

0x8eeb,	// (0x000b3463) frm_month_g2

0x8efe,	// (0x000b3476) frm_month_g3

0x8f11,	// (0x000b3489) frm_month_g4

0x8f24,	// (0x000b349c) frm_month_g5

0x8f37,	// (0x000b34af) frm_month_g6

0x8f4a,	// (0x000b34c2) frm_month_g7

0xef79,	// (0x000b94f1) frm_month_g8

0x8f5d,	// (0x000b34d5) frm_month_g9

0x8f6d,	// (0x000b34e5) frm_month_g10

0x8f7d,	// (0x000b34f5) frm_month_g11

0x8f8d,	// (0x000b3505) frm_month_g12

0x8f9f,	// (0x000b3517) frm_month_g13

0x8fb1,	// (0x000b3529) frm_month_g14

0x8fc5,	// (0x000b353d) frm_month_g15

0x8fd9,	// (0x000b3551) frm_month_g16

0x000f,

0xff08,	// (0x000ba480) frm_month_g

0xef86,	// (0x000b94fe) cell_top_day_name_pane_t1

0x8fed,	// (0x000b3565) cell_area_left_week_number_pane_g1

0x8ff9,	// (0x000b3571) cell_area_left_week_number_pane_t1

0xce20,	// (0x000b7398) cell_month_view_pane_g1

0x900c,	// (0x000b3584) cell_month_view_pane_t1

0x9325,	// (0x000b389d) main_fps_pane

0xe6ab,	// (0x000b8c23) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xe6ab,	// (0x000b8c23) cmail_ddmenu_btn02_pane_cp1

0xe6c7,	// (0x000b8c3f) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xe6c7,	// (0x000b8c3f) cmail_ddmenu_btn02_pane_cp2

0x8761,	// (0x000b2cd9) cmail_ddmenu_btn02_pane_g2_ParamLimits

0x8761,	// (0x000b2cd9) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfe2d,	// (0x000ba3a5) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfe2d,	// (0x000ba3a5) cmail_ddmenu_btn02_pane_g

0x877f,	// (0x000b2cf7) cmail_ddmenu_btn02_pane_t2_ParamLimits

0x877f,	// (0x000b2cf7) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfe32,	// (0x000ba3aa) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfe32,	// (0x000ba3aa) cmail_ddmenu_btn02_pane_t

0x901f,	// (0x000b3597) fps_text_pane_ParamLimits

0x901f,	// (0x000b3597) fps_text_pane

0x9036,	// (0x000b35ae) main_fps_pane_g1_ParamLimits

0x9036,	// (0x000b35ae) main_fps_pane_g1

0x9050,	// (0x000b35c8) wait_bar_pane_cp010_ParamLimits

0x9050,	// (0x000b35c8) wait_bar_pane_cp010

0x9061,	// (0x000b35d9) fps_text_pane_t1_ParamLimits

0x9061,	// (0x000b35d9) fps_text_pane_t1

0xd5e6,	// (0x000b7b5e) cam4_image_uncrop_pane_g1

0xd5ef,	// (0x000b7b67) cam4_image_uncrop_pane_g2

0x5a69,	// (0x000affe1) cam4_image_uncrop_pane_g3

0x5a72,	// (0x000affea) cam4_image_uncrop_pane_g4

0x0003,

0xf8ee,	// (0x000b9e66) cam4_image_uncrop_pane_g

0x8e29,	// (0x000b33a1) dia3_listrow_pane_ParamLimits

0x9325,	// (0x000b389d) main_phob2_pane

0x82da,	// (0x000b2852) cell_tport_appsw_pane_cp02_ParamLimits

0x82da,	// (0x000b2852) cell_tport_appsw_pane_cp02

0x82ee,	// (0x000b2866) cell_tport_appsw_pane_cp03_ParamLimits

0x82ee,	// (0x000b2866) cell_tport_appsw_pane_cp03

0x9325,	// (0x000b389d) phob2_contact_card_pane

0x9325,	// (0x000b389d) phob2_listscroll_pane

0xef99,	// (0x000b9511) phob2_list_pane

0xefa1,	// (0x000b9519) scroll_pane_cp034

0x9079,	// (0x000b35f1) phob2_cc_data_pane_ParamLimits

0x9079,	// (0x000b35f1) phob2_cc_data_pane

0x9098,	// (0x000b3610) phob2_cc_listscroll_pane_ParamLimits

0x9098,	// (0x000b3610) phob2_cc_listscroll_pane

0x90b6,	// (0x000b362e) list_double_large_graphic_phob2_pane_ParamLimits

0x90b6,	// (0x000b362e) list_double_large_graphic_phob2_pane

0x90c9,	// (0x000b3641) list_double_large_graphic_phob2_pane_g1_ParamLimits

0x90c9,	// (0x000b3641) list_double_large_graphic_phob2_pane_g1

0x90df,	// (0x000b3657) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x90df,	// (0x000b3657) list_double_large_graphic_phob2_pane_g2

0x0001,

0xff29,	// (0x000ba4a1) list_double_large_graphic_phob2_pane_g_ParamLimits

0xff29,	// (0x000ba4a1) list_double_large_graphic_phob2_pane_g

0x90eb,	// (0x000b3663) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x90eb,	// (0x000b3663) list_double_large_graphic_phob2_pane_t1

0x9101,	// (0x000b3679) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x9101,	// (0x000b3679) list_double_large_graphic_phob2_pane_t2

0x0001,

0xff2e,	// (0x000ba4a6) list_double_large_graphic_phob2_pane_t_ParamLimits

0xff2e,	// (0x000ba4a6) list_double_large_graphic_phob2_pane_t

0x9325,	// (0x000b389d) list_highlight_pane_cp024

0x9116,	// (0x000b368e) phob2_cc_button_pane

0x911e,	// (0x000b3696) phob2_cc_data_pane_g1_ParamLimits

0x911e,	// (0x000b3696) phob2_cc_data_pane_g1

0x9133,	// (0x000b36ab) phob2_cc_data_pane_g2_ParamLimits

0x9133,	// (0x000b36ab) phob2_cc_data_pane_g2

0x0001,

0xff33,	// (0x000ba4ab) phob2_cc_data_pane_g_ParamLimits

0xff33,	// (0x000ba4ab) phob2_cc_data_pane_g

0x9143,	// (0x000b36bb) phob2_cc_data_pane_t1_ParamLimits

0x9143,	// (0x000b36bb) phob2_cc_data_pane_t1

0x915b,	// (0x000b36d3) phob2_cc_data_pane_t2_ParamLimits

0x915b,	// (0x000b36d3) phob2_cc_data_pane_t2

0x9173,	// (0x000b36eb) phob2_cc_data_pane_t3_ParamLimits

0x9173,	// (0x000b36eb) phob2_cc_data_pane_t3

0x0002,

0xff38,	// (0x000ba4b0) phob2_cc_data_pane_t_ParamLimits

0xff38,	// (0x000ba4b0) phob2_cc_data_pane_t

0xefa9,	// (0x000b9521) phob2_cc_list_pane_ParamLimits

0xefa9,	// (0x000b9521) phob2_cc_list_pane

0xd91c,	// (0x000b7e94) scroll_pane_cp035_ParamLimits

0xd91c,	// (0x000b7e94) scroll_pane_cp035

0xa5de,	// (0x000b4b56) bg_button_pane_cp033

0xefb5,	// (0x000b952d) phob2_cc_button_pane_g1

0xefc1,	// (0x000b9539) phob2_cc_button_pane_t1

0xefd6,	// (0x000b954e) phob2_cc_button_pane_t2

0x0001,

0xff3f,	// (0x000ba4b7) phob2_cc_button_pane_t

0x918b,	// (0x000b3703) list_double_large_graphic_phob2_cc_pane_ParamLimits

0x918b,	// (0x000b3703) list_double_large_graphic_phob2_cc_pane

0x919e,	// (0x000b3716) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0x919e,	// (0x000b3716) list_double_large_graphic_phob2_cc_pane_g1

0x91aa,	// (0x000b3722) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x91aa,	// (0x000b3722) list_double_large_graphic_phob2_cc_pane_g2

0x91b6,	// (0x000b372e) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x91b6,	// (0x000b372e) list_double_large_graphic_phob2_cc_pane_g3

0x91c2,	// (0x000b373a) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x91c2,	// (0x000b373a) list_double_large_graphic_phob2_cc_pane_g4

0x91ce,	// (0x000b3746) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x91ce,	// (0x000b3746) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xff44,	// (0x000ba4bc) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xff44,	// (0x000ba4bc) list_double_large_graphic_phob2_cc_pane_g

0x91da,	// (0x000b3752) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x91da,	// (0x000b3752) list_double_large_graphic_phob2_cc_pane_t1

0x9203,	// (0x000b377b) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x9203,	// (0x000b377b) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xff4f,	// (0x000ba4c7) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xff4f,	// (0x000ba4c7) list_double_large_graphic_phob2_cc_pane_t

0xefe8,	// (0x000b9560) list_highlight_pane_cp025_ParamLimits

0xefe8,	// (0x000b9560) list_highlight_pane_cp025

0xa5de,	// (0x000b4b56) bg_button_pane_cp033_ParamLimits

0xefb5,	// (0x000b952d) phob2_cc_button_pane_g1_ParamLimits

0xefc1,	// (0x000b9539) phob2_cc_button_pane_t1_ParamLimits

0xefd6,	// (0x000b954e) phob2_cc_button_pane_t2_ParamLimits

0xff3f,	// (0x000ba4b7) phob2_cc_button_pane_t_ParamLimits

0x032b,	// (0x000aa8a3) popup_wgtman_window

0xd761,	// (0x000b7cd9) scroll_pane_cp038

0x8b75,	// (0x000b30ed) wgtman_btn_pane_cp_01_ParamLimits

0x8b75,	// (0x000b30ed) wgtman_btn_pane_cp_01

0xeff6,	// (0x000b956e) wgtman_content_pane

0xefff,	// (0x000b9577) wgtman_heading_pane

0x9325,	// (0x000b389d) bg_heading_pane_cp02

0xf008,	// (0x000b9580) wgtman_heading_pane_g1

0xf010,	// (0x000b9588) wgtman_heading_pane_t1

0xf01e,	// (0x000b9596) scroll_pane_cp036

0xf026,	// (0x000b959e) wgtman_list_pane

0xe58b,	// (0x000b8b03) wgtman_list_pane_t1_ParamLimits

0xe58b,	// (0x000b8b03) wgtman_list_pane_t1

0x9d09,	// (0x000b4281) cam4_grid_pane

0x6710,	// (0x000b0c88) bg_button_pane_cp015_ParamLimits

0x6724,	// (0x000b0c9c) bg_button_pane_cp016_ParamLimits

0x6737,	// (0x000b0caf) bg_button_pane_cp017_ParamLimits

0x678f,	// (0x000b0d07) popup_vitu2_query_window_g3_ParamLimits

0x678f,	// (0x000b0d07) popup_vitu2_query_window_g3

0x684c,	// (0x000b0dc4) popup_vitu2_query_window_t6_ParamLimits

0x684c,	// (0x000b0dc4) popup_vitu2_query_window_t6

0x6877,	// (0x000b0def) popup_vitu2_query_window_t7_ParamLimits

0x6877,	// (0x000b0def) popup_vitu2_query_window_t7

0xd5e6,	// (0x000b7b5e) cam4_grid_pane_g1

0xd5ef,	// (0x000b7b67) cam4_grid_pane_g2

0xf02e,	// (0x000b95a6) cam4_grid_pane_g3

0xf037,	// (0x000b95af) cam4_grid_pane_g4

0x0003,

0xff54,	// (0x000ba4cc) cam4_grid_pane_g

0x137a,	// (0x000ab8f2) aid_placing_vt_slider_lsc_ParamLimits

0x1677,	// (0x000abbef) vidtel_button_pane_ParamLimits

0x1677,	// (0x000abbef) vidtel_button_pane

0xf042,	// (0x000b95ba) bg_button_pane_cp034

0x922c,	// (0x000b37a4) vidtel_button_pane_g1

0xf04c,	// (0x000b95c4) vidtel_button_pane_t1

0xd863,	// (0x000b7ddb) aid_size_vtel_slider_touch

0xd91c,	// (0x000b7e94) scroll_pane_cp039

0xe13c,	// (0x000b86b4) ncim_query_button_pane_cp01_ParamLimits

0xe15b,	// (0x000b86d3) ncimui_query_pane_g1_ParamLimits

0xa5de,	// (0x000b4b56) input_focus_pane_cp012_ParamLimits

0xe180,	// (0x000b86f8) ncim_query_entry_pane_t1_ParamLimits

0xd91c,	// (0x000b7e94) scroll_pane_cp039_ParamLimits

0xb1e9,	// (0x000b5761) navi_pane_bcale_mc_g1

0xb1f1,	// (0x000b5769) navi_pane_bcale_mc_t1

0xe710,	// (0x000b8c88) main_sp_fs_email_pane_g1

0xe71c,	// (0x000b8c94) main_sp_fs_email_pane_g2

0x0001,

0xfce5,	// (0x000ba25d) main_sp_fs_email_pane_g

0xe96d,	// (0x000b8ee5) list_single_cale_mrui_row_pane_g3_ParamLimits

0xe96d,	// (0x000b8ee5) list_single_cale_mrui_row_pane_g3

0x87a7,	// (0x000b2d1f) list_single_recal_day_pane_g5_event_pane

0xaa5f,	// (0x000b4fd7) list_single_recal_day_pane_g7

0xf05a,	// (0x000b95d2) list_recal_day_event_pane_cp01

0xf063,	// (0x000b95db) list_recal_vselct_arw_lo_pane_cp01

0xf06b,	// (0x000b95e3) list_recal_vselct_arw_up_pane_cp01

0xf073,	// (0x000b95eb) list_recal_vselct_pane_cp01

0xd885,	// (0x000b7dfd) list_recal_day_event_pane_cp01_g1

0xaab2,	// (0x000b502a) list_recal_day_event_pane_cp01_t1

0xaa67,	// (0x000b4fdf) list_single_recal_day_pane_t1_ParamLimits

0xaa79,	// (0x000b4ff1) list_single_recal_day_pane_t2_ParamLimits

0xfe42,	// (0x000ba3ba) list_single_recal_day_pane_t_ParamLimits

0xa12f,	// (0x000b46a7) bg_notes_pane_ParamLimits

0xa1f1,	// (0x000b4769) list_notes_pane_ParamLimits

0x065f,	// (0x000aabd7) scroll_pane_cp06_ParamLimits

0xa213,	// (0x000b478b) main_notes_pane_ParamLimits

0x9325,	// (0x000b389d) main_welc_pane

0x9234,	// (0x000b37ac) main_welc_body_pane_ParamLimits

0x9234,	// (0x000b37ac) main_welc_body_pane

0x9251,	// (0x000b37c9) main_welc_opti_pane_ParamLimits

0x9251,	// (0x000b37c9) main_welc_opti_pane

0x929a,	// (0x000b3812) main_welc_pane_t1_ParamLimits

0x929a,	// (0x000b3812) main_welc_pane_t1

0x92bc,	// (0x000b3834) main_welc_body_row_pane_ParamLimits

0x92bc,	// (0x000b3834) main_welc_body_row_pane

0xf07d,	// (0x000b95f5) main_welc_opti_row_pane_ParamLimits

0xf07d,	// (0x000b95f5) main_welc_opti_row_pane

0xf08b,	// (0x000b9603) main_welc_opti_row_pane_g1

0x92d2,	// (0x000b384a) main_welc_opti_row_pane_t1

0xf093,	// (0x000b960b) main_welc_body_row_pane_t1

0xed77,	// (0x000b92ef) popup_notif_wgt_heading_pane

0xed91,	// (0x000b9309) aid_size_list_notif_wgt_del_ParamLimits

0xed9e,	// (0x000b9316) list_notif_wgt_row_pane_g1_ParamLimits

0xedaa,	// (0x000b9322) list_notif_wgt_row_pane_g2_ParamLimits

0xedbe,	// (0x000b9336) list_notif_wgt_row_pane_g3_ParamLimits

0xfea9,	// (0x000ba421) list_notif_wgt_row_pane_g_ParamLimits

0xedcb,	// (0x000b9343) list_notif_wgt_row_pane_t1_ParamLimits

0xede1,	// (0x000b9359) list_notif_wgt_row_pane_t2_ParamLimits

0xedf3,	// (0x000b936b) list_notif_wgt_row_pane_t3_ParamLimits

0xfeb0,	// (0x000ba428) list_notif_wgt_row_pane_t_ParamLimits

0x8c0f,	// (0x000b3187) listrow_wgtman_pane_g1_ParamLimits

0x8c1c,	// (0x000b3194) listrow_wgtman_pane_g2_ParamLimits

0xfed9,	// (0x000ba451) listrow_wgtman_pane_g_ParamLimits

0x8c3a,	// (0x000b31b2) listrow_wgtman_pane_t1_ParamLimits

0x8c52,	// (0x000b31ca) listrow_wgtman_pane_t2_ParamLimits

0xfede,	// (0x000ba456) listrow_wgtman_pane_t_ParamLimits

0x8c78,	// (0x000b31f0) wait_bar_pane_cp09_ParamLimits

0x9325,	// (0x000b389d) bg_popup_heading_pane_cp02

0xf0a2,	// (0x000b961a) popup_notif_wgt_heading_pane_g1

0xf0aa,	// (0x000b9622) popup_notif_wgt_heading_pane_t1

0x9325,	// (0x000b389d) main_vids_pane

0x9325,	// (0x000b389d) vids_listscroll_pane

0x92e1,	// (0x000b3859) scroll_pane_cp040

0x9325,	// (0x000b389d) vids_list_pane

0x92ec,	// (0x000b3864) vids_list_double_pane_ParamLimits

0x92ec,	// (0x000b3864) vids_list_double_pane

0x92fd,	// (0x000b3875) vids_list_double_pane_g1

0x9306,	// (0x000b387e) vids_list_double_pane_t1

0x9315,	// (0x000b388d) vids_list_double_pane_t2

0x0001,

0xff62,	// (0x000ba4da) vids_list_double_pane_t

0x938d,	// (0x000b3905) main_ncimui_pane_ParamLimits

0x74bb,	// (0x000b1a33) main_ncimui_pane_g1_ParamLimits

0x74c7,	// (0x000b1a3f) main_ncimui_pane_g2_ParamLimits

0x74c7,	// (0x000b1a3f) main_ncimui_pane_g2

0x0001,

0xfbea,	// (0x000ba162) main_ncimui_pane_g_ParamLimits

0xfbea,	// (0x000ba162) main_ncimui_pane_g

0x9270,	// (0x000b37e8) main_welc_pane_g1_ParamLimits

0x9270,	// (0x000b37e8) main_welc_pane_g1

0x9285,	// (0x000b37fd) main_welc_pane_g2_ParamLimits

0x9285,	// (0x000b37fd) main_welc_pane_g2

0x0001,

0xff5d,	// (0x000ba4d5) main_welc_pane_g_ParamLimits

0xff5d,	// (0x000ba4d5) main_welc_pane_g

0xa12f,	// (0x000b46a7) listscroll_mce_pane_ParamLimits

0xb33e,	// (0x000b58b6) wait_bar_pane_cp10

0xc7aa,	// (0x000b6d22) main_cale_day_pane_ParamLimits

0xc7aa,	// (0x000b6d22) main_cale_week_pane_ParamLimits

0xa12f,	// (0x000b46a7) main_messa_pane_ParamLimits

0x4d76,	// (0x000af2ee) main_clock2_btn_pane_ParamLimits

0x4d76,	// (0x000af2ee) main_clock2_btn_pane

0xcfb0,	// (0x000b7528) main_clock2_btn_pane_cp01_ParamLimits

0xcfb0,	// (0x000b7528) main_clock2_btn_pane_cp01

0xe93e,	// (0x000b8eb6) list_cale_mrui_pane_ParamLimits

0xee37,	// (0x000b93af) main_cf0_pane_g2

0x0001,

0xfeb7,	// (0x000ba42f) main_cf0_pane_g

0x8e4b,	// (0x000b33c3) area_left_week_number_pane_ParamLimits

0x8e57,	// (0x000b33cf) area_top_day_name_pane_ParamLimits

0x8e6a,	// (0x000b33e2) frame_month_view_pane_ParamLimits

0xef5e,	// (0x000b94d6) grid_month_view_pane_ParamLimits

0xef6c,	// (0x000b94e4) frm_month_g1_ParamLimits

0x8eeb,	// (0x000b3463) frm_month_g2_ParamLimits

0x8efe,	// (0x000b3476) frm_month_g3_ParamLimits

0x8f11,	// (0x000b3489) frm_month_g4_ParamLimits

0x8f24,	// (0x000b349c) frm_month_g5_ParamLimits

0x8f37,	// (0x000b34af) frm_month_g6_ParamLimits

0x8f4a,	// (0x000b34c2) frm_month_g7_ParamLimits

0xef79,	// (0x000b94f1) frm_month_g8_ParamLimits

0x8f5d,	// (0x000b34d5) frm_month_g9_ParamLimits

0x8f6d,	// (0x000b34e5) frm_month_g10_ParamLimits

0x8f7d,	// (0x000b34f5) frm_month_g11_ParamLimits

0x8f8d,	// (0x000b3505) frm_month_g12_ParamLimits

0x8f9f,	// (0x000b3517) frm_month_g13_ParamLimits

0x8fb1,	// (0x000b3529) frm_month_g14_ParamLimits

0x8fc5,	// (0x000b353d) frm_month_g15_ParamLimits

0x8fd9,	// (0x000b3551) frm_month_g16_ParamLimits

0xff08,	// (0x000ba480) frm_month_g_ParamLimits

0xef86,	// (0x000b94fe) cell_top_day_name_pane_t1_ParamLimits

0x8fed,	// (0x000b3565) cell_area_left_week_number_pane_g1_ParamLimits

0x8ff9,	// (0x000b3571) cell_area_left_week_number_pane_t1_ParamLimits

0xce20,	// (0x000b7398) cell_month_view_pane_g1_ParamLimits

0x900c,	// (0x000b3584) cell_month_view_pane_t1_ParamLimits

0xa127,	// (0x000b469f) main_clock2_btn_pane_g1

0xf0b8,	// (0x000b9630) main_clock2_btn_pane_t1

0xa5de,	// (0x000b4b56) listscroll_cmail_pane_ParamLimits

0xe710,	// (0x000b8c88) main_sp_fs_email_pane_g1_ParamLimits

0xe71c,	// (0x000b8c94) main_sp_fs_email_pane_g2_ParamLimits

0xfce5,	// (0x000ba25d) main_sp_fs_email_pane_g_ParamLimits

0xeadc,	// (0x000b9054) list_recal_day_pane_ParamLimits

0xeaed,	// (0x000b9065) mian_recal_day_pane_t1

0x7f5e,	// (0x000b24d6) list_single_dyc_row_text_pane_t4_ParamLimits

0x7f5e,	// (0x000b24d6) list_single_dyc_row_text_pane_t4

0x7fa7,	// (0x000b251f) list_single_dyc_row_text_pane_t5_ParamLimits

0x7fa7,	// (0x000b251f) list_single_dyc_row_text_pane_t5

0xa820,	// (0x000b4d98) list_single_dyc_row_text_pane_t6_ParamLimits

0xa820,	// (0x000b4d98) list_single_dyc_row_text_pane_t6

0xaccd,	// (0x000b5245) aid_mgn_list_cale_time_pane

0x938d,	// (0x000b3905) main_gallery2_pane_ParamLimits

0xcfc6,	// (0x000b753e) main_clock2_pane_cp01_t1

0xcfd4,	// (0x000b754c) main_clock2_pane_cp01_t3

0x0001,

0xf7c4,	// (0x000b9d3c) main_clock2_pane_cp01_t

0x0a0a,	// (0x000aaf82) cale_week_scroll_pane_g16_ParamLimits

0x0a0a,	// (0x000aaf82) cale_week_scroll_pane_g16
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

} // end of namespace AknLayoutScalable_Abrw_pnl4_apps_nhd4_lsc_tch_Large
