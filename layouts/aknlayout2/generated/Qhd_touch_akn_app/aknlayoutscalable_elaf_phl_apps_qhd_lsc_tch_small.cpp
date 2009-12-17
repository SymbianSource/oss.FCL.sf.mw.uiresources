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

#include "aknlayoutscalable_elaf_phl_apps_qhd_lsc_tch_small.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_php_apps_qhd_prt_tch[]; }

namespace AknLayoutScalable_Elaf_phl_apps_qhd_lsc_tch_Small
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_php_apps_qhd_prt_tch + 0x0003bc61 };

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
0x32a9,	// (0x0003ef0a) Screen

0x32b5,	// (0x0003ef16) application_window

0x32f1,	// (0x0003ef52) area_bottom_pane_ParamLimits

0x32f1,	// (0x0003ef52) area_bottom_pane

0x332a,	// (0x0003ef8b) area_top_pane_ParamLimits

0x332a,	// (0x0003ef8b) area_top_pane

0x0867,	// (0x0003c4c8) call_video_uplink_pane_ParamLimits

0x0867,	// (0x0003c4c8) call_video_uplink_pane

0x33a4,	// (0x0003f005) main_pane_ParamLimits

0x33a4,	// (0x0003f005) main_pane

0xc27b,	// (0x00047edc) context_pane

0x7181,	// (0x00042de2) navi_pane

0x71a9,	// (0x00042e0a) popup_cale_events_window_ParamLimits

0x71a9,	// (0x00042e0a) popup_cale_events_window

0xc28e,	// (0x00047eef) popup_mup_playback_window

0x71c1,	// (0x00042e22) signal_pane

0x0fca,	// (0x0003cc2b) main_browser_pane

0x1aa3,	// (0x0003d704) main_burst_pane

0x6ed3,	// (0x00042b34) main_calc_pane

0x1aa3,	// (0x0003d704) main_cale_day_pane

0x0fca,	// (0x0003cc2b) main_cale_month_pane

0x1aa3,	// (0x0003d704) main_cale_week_pane

0x1aa3,	// (0x0003d704) main_call_pane

0x0c98,	// (0x0003c8f9) main_call_poc_pane

0x1aa3,	// (0x0003d704) main_camera_pane

0x1aa3,	// (0x0003d704) main_chi_dic_pane

0x1928,	// (0x0003d589) main_clock_pane

0x0c98,	// (0x0003c8f9) main_fmradio_pane

0x1aa3,	// (0x0003d704) main_graph_messa_pane

0x0c98,	// (0x0003c8f9) main_help_pane

0x0fca,	// (0x0003cc2b) main_im_pane

0x0ef3,	// (0x0003cb54) main_image_pane_ParamLimits

0x0ef3,	// (0x0003cb54) main_image_pane

0x0c98,	// (0x0003c8f9) main_location2_pane

0x1aa3,	// (0x0003d704) main_location_pane

0x0c98,	// (0x0003c8f9) main_messa_pane

0x0c98,	// (0x0003c8f9) main_mp2_pane

0x1aa3,	// (0x0003d704) main_mp_pane

0x0c98,	// (0x0003c8f9) main_msg_pane

0x0c98,	// (0x0003c8f9) main_mup_eq_pane

0x0c98,	// (0x0003c8f9) main_mup_pane

0x1aa3,	// (0x0003d704) main_notes_pane

0x0c98,	// (0x0003c8f9) main_pec_pane

0x0c98,	// (0x0003c8f9) main_phob_pane

0x0c98,	// (0x0003c8f9) main_pinb_pane

0x0c98,	// (0x0003c8f9) main_postcard_pane

0x0c98,	// (0x0003c8f9) main_qdial_pane

0x1aa3,	// (0x0003d704) main_skin_pane

0x0c98,	// (0x0003c8f9) main_smil2_pane

0x1aa3,	// (0x0003d704) main_smil_pane

0x1aa3,	// (0x0003d704) main_video_pane

0x1aa3,	// (0x0003d704) main_video_tele_pane

0x0ef3,	// (0x0003cb54) main_viewer_pane_ParamLimits

0x0ef3,	// (0x0003cb54) main_viewer_pane

0x1aa3,	// (0x0003d704) main_vorec_pane

0x6f27,	// (0x00042b88) popup_blid_sat_info_window_ParamLimits

0x6f27,	// (0x00042b88) popup_blid_sat_info_window

0x6f7f,	// (0x00042be0) popup_dyc_status_message_window_ParamLimits

0x6f7f,	// (0x00042be0) popup_dyc_status_message_window

0x6f99,	// (0x00042bfa) popup_grid_large_graphic_window_ParamLimits

0x6f99,	// (0x00042bfa) popup_grid_large_graphic_window

0x7055,	// (0x00042cb6) popup_loc_request_window_ParamLimits

0x7055,	// (0x00042cb6) popup_loc_request_window

0x7159,	// (0x00042dba) popup_wml_address_window_ParamLimits

0x7159,	// (0x00042dba) popup_wml_address_window

0x6d0d,	// (0x0004296e) call_muted_g1

0x5dc5,	// (0x00041a26) popup_call_audio_conf_window_ParamLimits

0x5dc5,	// (0x00041a26) popup_call_audio_conf_window

0x6d21,	// (0x00042982) popup_call_audio_first_window_ParamLimits

0x6d21,	// (0x00042982) popup_call_audio_first_window

0x6d97,	// (0x000429f8) popup_call_audio_in_window_ParamLimits

0x6d97,	// (0x000429f8) popup_call_audio_in_window

0x6dd3,	// (0x00042a34) popup_call_audio_out_window_ParamLimits

0x6dd3,	// (0x00042a34) popup_call_audio_out_window

0x6e0d,	// (0x00042a6e) popup_call_audio_second_window_ParamLimits

0x6e0d,	// (0x00042a6e) popup_call_audio_second_window

0x6e63,	// (0x00042ac4) popup_call_audio_wait_window_ParamLimits

0x6e63,	// (0x00042ac4) popup_call_audio_wait_window

0x6e98,	// (0x00042af9) popup_number_entry_window_ParamLimits

0x6e98,	// (0x00042af9) popup_number_entry_window

0x0885,	// (0x0003c4e6) bg_popup_call_pane_cp05_ParamLimits

0x0885,	// (0x0003c4e6) bg_popup_call_pane_cp05

0x08a5,	// (0x0003c506) popup_number_entry_window_t1

0x08b8,	// (0x0003c519) popup_number_entry_window_t2

0x08ca,	// (0x0003c52b) popup_number_entry_window_t3

0x0003,

0xf12f,	// (0x0004ad90) popup_number_entry_window_t

0x08dc,	// (0x0003c53d) text_title_cp2

0x08ef,	// (0x0003c550) bg_popup_call_pane_cp_ParamLimits

0x08ef,	// (0x0003c550) bg_popup_call_pane_cp

0x08fd,	// (0x0003c55e) call_thumbnail_pane

0x0905,	// (0x0003c566) popup_call_audio_in_window_g1_ParamLimits

0x0905,	// (0x0003c566) popup_call_audio_in_window_g1

0x0911,	// (0x0003c572) popup_call_audio_in_window_g2_ParamLimits

0x0911,	// (0x0003c572) popup_call_audio_in_window_g2

0x091d,	// (0x0003c57e) popup_call_audio_in_window_g3_ParamLimits

0x091d,	// (0x0003c57e) popup_call_audio_in_window_g3

0x0002,

0xf138,	// (0x0004ad99) popup_call_audio_in_window_g_ParamLimits

0xf138,	// (0x0004ad99) popup_call_audio_in_window_g

0x0929,	// (0x0003c58a) popup_call_audio_in_window_t1_ParamLimits

0x0929,	// (0x0003c58a) popup_call_audio_in_window_t1

0x0945,	// (0x0003c5a6) popup_call_audio_in_window_t2_ParamLimits

0x0945,	// (0x0003c5a6) popup_call_audio_in_window_t2

0x0961,	// (0x0003c5c2) popup_call_audio_in_window_t3_ParamLimits

0x0961,	// (0x0003c5c2) popup_call_audio_in_window_t3

0x0002,

0xf13f,	// (0x0004ada0) popup_call_audio_in_window_t_ParamLimits

0xf13f,	// (0x0004ada0) popup_call_audio_in_window_t

0x08ef,	// (0x0003c550) bg_popup_call_pane_cp01_ParamLimits

0x08ef,	// (0x0003c550) bg_popup_call_pane_cp01

0x08fd,	// (0x0003c55e) call_thumbnail_pane_cp02

0x0974,	// (0x0003c5d5) call_type_pane_cp022

0x097c,	// (0x0003c5dd) popup_call_audio_out_window_g1_ParamLimits

0x097c,	// (0x0003c5dd) popup_call_audio_out_window_g1

0x098e,	// (0x0003c5ef) popup_call_audio_out_window_g2_ParamLimits

0x098e,	// (0x0003c5ef) popup_call_audio_out_window_g2

0x099a,	// (0x0003c5fb) popup_call_audio_out_window_g3_ParamLimits

0x099a,	// (0x0003c5fb) popup_call_audio_out_window_g3

0x0002,

0xf146,	// (0x0004ada7) popup_call_audio_out_window_g_ParamLimits

0xf146,	// (0x0004ada7) popup_call_audio_out_window_g

0x09ac,	// (0x0003c60d) popup_call_audio_out_window_t1_ParamLimits

0x09ac,	// (0x0003c60d) popup_call_audio_out_window_t1

0x09c4,	// (0x0003c625) popup_call_audio_out_window_t2_ParamLimits

0x09c4,	// (0x0003c625) popup_call_audio_out_window_t2

0x0001,

0xf14d,	// (0x0004adae) popup_call_audio_out_window_t_ParamLimits

0xf14d,	// (0x0004adae) popup_call_audio_out_window_t

0x09d9,	// (0x0003c63a) bg_popup_call_pane_ParamLimits

0x09d9,	// (0x0003c63a) bg_popup_call_pane

0x3553,	// (0x0003f1b4) call_thumbnail_pane_cp_ParamLimits

0x3553,	// (0x0003f1b4) call_thumbnail_pane_cp

0x0a5d,	// (0x0003c6be) call_type_pane_cp01_ParamLimits

0x0a5d,	// (0x0003c6be) call_type_pane_cp01

0x0aa1,	// (0x0003c702) popup_call_audio_first_window_g1_ParamLimits

0x0aa1,	// (0x0003c702) popup_call_audio_first_window_g1

0x0aed,	// (0x0003c74e) popup_call_audio_first_window_g2_ParamLimits

0x0aed,	// (0x0003c74e) popup_call_audio_first_window_g2

0x0001,

0xf152,	// (0x0004adb3) popup_call_audio_first_window_g_ParamLimits

0xf152,	// (0x0004adb3) popup_call_audio_first_window_g

0x0b31,	// (0x0003c792) popup_call_audio_first_window_t1_ParamLimits

0x0b31,	// (0x0003c792) popup_call_audio_first_window_t1

0x0bdd,	// (0x0003c83e) popup_call_audio_first_window_t4_ParamLimits

0x0bdd,	// (0x0003c83e) popup_call_audio_first_window_t4

0x0c69,	// (0x0003c8ca) popup_call_audio_first_window_t5_ParamLimits

0x0c69,	// (0x0003c8ca) popup_call_audio_first_window_t5

0x0002,

0xf157,	// (0x0004adb8) popup_call_audio_first_window_t_ParamLimits

0xf157,	// (0x0004adb8) popup_call_audio_first_window_t

0x0c98,	// (0x0003c8f9) bg_popup_call_pane_cp02

0x0ca2,	// (0x0003c903) call_type_pane_cp023

0x0caa,	// (0x0003c90b) popup_call_audio_wait_window_g1

0x0cb2,	// (0x0003c913) popup_call_audio_wait_window_g2

0x0001,

0xf15e,	// (0x0004adbf) popup_call_audio_wait_window_g

0x0cba,	// (0x0003c91b) popup_call_audio_wait_window_t3

0x0cc8,	// (0x0003c929) bg_popup_call_pane_cp03_ParamLimits

0x0cc8,	// (0x0003c929) bg_popup_call_pane_cp03

0x0d28,	// (0x0003c989) call_thumbnail_pane_cp011_ParamLimits

0x0d28,	// (0x0003c989) call_thumbnail_pane_cp011

0x0d34,	// (0x0003c995) call_type_pane_cp034_ParamLimits

0x0d34,	// (0x0003c995) call_type_pane_cp034

0x0d70,	// (0x0003c9d1) popup_call_audio_second_window_g1_ParamLimits

0x0d70,	// (0x0003c9d1) popup_call_audio_second_window_g1

0x0dac,	// (0x0003ca0d) popup_call_audio_second_window_g2_ParamLimits

0x0dac,	// (0x0003ca0d) popup_call_audio_second_window_g2

0x0001,

0xf163,	// (0x0004adc4) popup_call_audio_second_window_g_ParamLimits

0xf163,	// (0x0004adc4) popup_call_audio_second_window_g

0x0de8,	// (0x0003ca49) popup_call_audio_second_window_t1_ParamLimits

0x0de8,	// (0x0003ca49) popup_call_audio_second_window_t1

0x0e69,	// (0x0003caca) popup_call_audio_second_window_t2_ParamLimits

0x0e69,	// (0x0003caca) popup_call_audio_second_window_t2

0x0e9f,	// (0x0003cb00) popup_call_audio_second_window_t3_ParamLimits

0x0e9f,	// (0x0003cb00) popup_call_audio_second_window_t3

0x0002,

0xf168,	// (0x0004adc9) popup_call_audio_second_window_t_ParamLimits

0xf168,	// (0x0004adc9) popup_call_audio_second_window_t

0x0c98,	// (0x0003c8f9) bg_popup_call_pane_cp04

0x0ed5,	// (0x0003cb36) list_conf_pane

0x0edd,	// (0x0003cb3e) popup_call_audio_conf_window_t1

0x0eeb,	// (0x0003cb4c) call_thumbnail_pane_g1

0x0ef3,	// (0x0003cb54) bg_pinb_pane_ParamLimits

0x0ef3,	// (0x0003cb54) bg_pinb_pane

0x0f01,	// (0x0003cb62) find_pinb_pane

0x0f0a,	// (0x0003cb6b) listscroll_pinb_pane_ParamLimits

0x0f0a,	// (0x0003cb6b) listscroll_pinb_pane

0x0f19,	// (0x0003cb7a) pinb_bg_pane_g1

0x3577,	// (0x0003f1d8) pinb_bg_pane_g2

0x3583,	// (0x0003f1e4) pinb_bg_pane_g3

0x358f,	// (0x0003f1f0) pinb_bg_pane_g4

0x359b,	// (0x0003f1fc) pinb_bg_pane_g5

0x35a7,	// (0x0003f208) pinb_bg_pane_g6

0x35b2,	// (0x0003f213) pinb_bg_pane_g7

0x35bd,	// (0x0003f21e) pinb_bg_pane_g8

0x35c8,	// (0x0003f229) pinb_bg_pane_g9

0x35d2,	// (0x0003f233) pinb_bg_pane_g10

0x0009,

0xf16f,	// (0x0004add0) pinb_bg_pane_g

0x35ef,	// (0x0003f250) grid_pinb_pane

0x35f8,	// (0x0003f259) list_pinb_pane

0x3601,	// (0x0003f262) scroll_pane_cp01_ParamLimits

0x3601,	// (0x0003f262) scroll_pane_cp01

0x0f23,	// (0x0003cb84) find_pinb_pane_g1_ParamLimits

0x0f23,	// (0x0003cb84) find_pinb_pane_g1

0x0f3b,	// (0x0003cb9c) find_pinb_pane_t1

0x0f4d,	// (0x0003cbae) find_pinb_pane_t2

0x0001,

0xf189,	// (0x0004adea) find_pinb_pane_t

0x0f62,	// (0x0003cbc3) input_focus_pane_cp01_ParamLimits

0x0f62,	// (0x0003cbc3) input_focus_pane_cp01

0x3613,	// (0x0003f274) cell_pinb_pane_ParamLimits

0x3613,	// (0x0003f274) cell_pinb_pane

0x363c,	// (0x0003f29d) cell_pinb_pane_g1_ParamLimits

0x363c,	// (0x0003f29d) cell_pinb_pane_g1

0x364c,	// (0x0003f2ad) cell_pinb_pane_g2_ParamLimits

0x364c,	// (0x0003f2ad) cell_pinb_pane_g2

0x0f6e,	// (0x0003cbcf) cell_pinb_pane_g3_ParamLimits

0x0f6e,	// (0x0003cbcf) cell_pinb_pane_g3

0x0002,

0xf18e,	// (0x0004adef) cell_pinb_pane_g_ParamLimits

0xf18e,	// (0x0004adef) cell_pinb_pane_g

0x0c98,	// (0x0003c8f9) grid_highlight_pane_cp01

0x3658,	// (0x0003f2b9) list_pinb_item_pane_ParamLimits

0x3658,	// (0x0003f2b9) list_pinb_item_pane

0x0c98,	// (0x0003c8f9) list_highlight_pane_cp02

0x366a,	// (0x0003f2cb) list_pinb_item_pane_g1_ParamLimits

0x366a,	// (0x0003f2cb) list_pinb_item_pane_g1

0x0f7a,	// (0x0003cbdb) list_pinb_item_pane_g2_ParamLimits

0x0f7a,	// (0x0003cbdb) list_pinb_item_pane_g2

0x3677,	// (0x0003f2d8) list_pinb_item_pane_g3_ParamLimits

0x3677,	// (0x0003f2d8) list_pinb_item_pane_g3

0x3688,	// (0x0003f2e9) list_pinb_item_pane_g4_ParamLimits

0x3688,	// (0x0003f2e9) list_pinb_item_pane_g4

0x0003,

0xf195,	// (0x0004adf6) list_pinb_item_pane_g_ParamLimits

0xf195,	// (0x0004adf6) list_pinb_item_pane_g

0x3694,	// (0x0003f2f5) list_pinb_item_pane_t1_ParamLimits

0x3694,	// (0x0003f2f5) list_pinb_item_pane_t1

0x36c9,	// (0x0003f32a) calc_display_pane

0x36ef,	// (0x0003f350) calc_paper_pane

0x3710,	// (0x0003f371) grid_calc_pane

0x0c98,	// (0x0003c8f9) bg_list_pane_cp01

0x3738,	// (0x0003f399) clock_g1

0x3740,	// (0x0003f3a1) clock_g2

0x0001,

0xf19e,	// (0x0004adff) clock_g

0x3748,	// (0x0003f3a9) clock_t1_ParamLimits

0x3748,	// (0x0003f3a9) clock_t1

0x375d,	// (0x0003f3be) clock_t2_ParamLimits

0x375d,	// (0x0003f3be) clock_t2

0x376f,	// (0x0003f3d0) clock_t3_ParamLimits

0x376f,	// (0x0003f3d0) clock_t3

0x3781,	// (0x0003f3e2) clock_t4_ParamLimits

0x3781,	// (0x0003f3e2) clock_t4

0x3793,	// (0x0003f3f4) clock_t5_ParamLimits

0x3793,	// (0x0003f3f4) clock_t5

0x37a8,	// (0x0003f409) clock_t6_ParamLimits

0x37a8,	// (0x0003f409) clock_t6

0x37ba,	// (0x0003f41b) clock_t7_ParamLimits

0x37ba,	// (0x0003f41b) clock_t7

0x37cc,	// (0x0003f42d) clock_t8_ParamLimits

0x37cc,	// (0x0003f42d) clock_t8

0x37e0,	// (0x0003f441) clock_t9_ParamLimits

0x37e0,	// (0x0003f441) clock_t9

0x0008,

0xf1a3,	// (0x0004ae04) clock_t_ParamLimits

0xf1a3,	// (0x0004ae04) clock_t

0x0f86,	// (0x0003cbe7) popup_clock_analogue_window_cp02

0x0f86,	// (0x0003cbe7) popup_clock_digital_window_cp01

0x0f8e,	// (0x0003cbef) listscroll_help_pane

0x0c98,	// (0x0003c8f9) phob_pre_status_pane

0x0f98,	// (0x0003cbf9) grid_qdial_pane

0x0c98,	// (0x0003c8f9) listscroll_mce_pane

0x0fa2,	// (0x0003cc03) bg_notes_pane

0x0fac,	// (0x0003cc0d) list_notes_pane

0x37f4,	// (0x0003f455) scroll_pane_cp06

0x0fb6,	// (0x0003cc17) bg_calc_paper_pane

0xbb71,	// (0x000477d2) list_calc_pane

0x0fca,	// (0x0003cc2b) bg_calc_display_pane

0x37ff,	// (0x0003f460) calc_display_pane_t1

0x3811,	// (0x0003f472) calc_display_pane_t2

0xbb8b,	// (0x000477ec) calc_display_pane_t3

0x0002,

0xf1b6,	// (0x0004ae17) calc_display_pane_t

0x3823,	// (0x0003f484) cell_calc_pane_ParamLimits

0x3823,	// (0x0003f484) cell_calc_pane

0x0fd6,	// (0x0003cc37) bg_calc_paper_pane_g1

0x0fe2,	// (0x0003cc43) bg_calc_paper_pane_g2

0x0fee,	// (0x0003cc4f) bg_calc_paper_pane_g3

0x0ffa,	// (0x0003cc5b) bg_calc_paper_pane_g4

0x1006,	// (0x0003cc67) bg_calc_paper_pane_g5

0x3858,	// (0x0003f4b9) bg_calc_paper_pane_g6

0x3867,	// (0x0003f4c8) bg_calc_paper_pane_g7

0x3876,	// (0x0003f4d7) bg_calc_paper_pane_g8

0x0007,

0xf1bd,	// (0x0004ae1e) bg_calc_paper_pane_g

0x3889,	// (0x0003f4ea) calc_bg_paper_pane_g9

0x389c,	// (0x0003f4fd) list_calc_item_pane_ParamLimits

0x389c,	// (0x0003f4fd) list_calc_item_pane

0x1012,	// (0x0003cc73) list_calc_item_pane_g1

0xbb9d,	// (0x000477fe) list_calc_item_pane_t1_ParamLimits

0xbb9d,	// (0x000477fe) list_calc_item_pane_t1

0x38af,	// (0x0003f510) list_calc_item_pane_t2_ParamLimits

0x38af,	// (0x0003f510) list_calc_item_pane_t2

0x0001,

0xf1ce,	// (0x0004ae2f) list_calc_item_pane_t_ParamLimits

0xf1ce,	// (0x0004ae2f) list_calc_item_pane_t

0x101f,	// (0x0003cc80) cell_calc_pane_g1

0x1029,	// (0x0003cc8a) grid_highlight_pane_cp02

0x38e3,	// (0x0003f544) bg_calc_display_pane_g1

0x38ec,	// (0x0003f54d) bg_calc_display_pane_g2

0x38f6,	// (0x0003f557) bg_calc_display_pane_g3

0x0002,

0xf1d8,	// (0x0004ae39) bg_calc_display_pane_g

0x38ff,	// (0x0003f560) cell_qdial_pane_ParamLimits

0x38ff,	// (0x0003f560) cell_qdial_pane

0x3913,	// (0x0003f574) cell_qdial_pane_g1_ParamLimits

0x3913,	// (0x0003f574) cell_qdial_pane_g1

0x3929,	// (0x0003f58a) cell_qdial_pane_g2_ParamLimits

0x3929,	// (0x0003f58a) cell_qdial_pane_g2

0x104b,	// (0x0003ccac) cell_qdial_pane_g3_ParamLimits

0x104b,	// (0x0003ccac) cell_qdial_pane_g3

0x0003,

0xf1df,	// (0x0004ae40) cell_qdial_pane_g_ParamLimits

0xf1df,	// (0x0004ae40) cell_qdial_pane_g

0x3950,	// (0x0003f5b1) cell_qdial_pane_t1_ParamLimits

0x3950,	// (0x0003f5b1) cell_qdial_pane_t1

0x3968,	// (0x0003f5c9) cell_qdial_pane_t2_ParamLimits

0x3968,	// (0x0003f5c9) cell_qdial_pane_t2

0x397b,	// (0x0003f5dc) cell_qdial_pane_t3_ParamLimits

0x397b,	// (0x0003f5dc) cell_qdial_pane_t3

0x0002,

0xf1e8,	// (0x0004ae49) cell_qdial_pane_t_ParamLimits

0xf1e8,	// (0x0004ae49) cell_qdial_pane_t

0x0c98,	// (0x0003c8f9) grid_highlight_pane_cp04

0x1057,	// (0x0003ccb8) thumbnail_qdial_pane_ParamLimits

0x1057,	// (0x0003ccb8) thumbnail_qdial_pane

0x10b3,	// (0x0003cd14) list_help_pane

0x10bc,	// (0x0003cd1d) scroll_pane_cp02

0x398e,	// (0x0003f5ef) help_list_pane_t1_ParamLimits

0x398e,	// (0x0003f5ef) help_list_pane_t1

0xbbaf,	// (0x00047810) bg_notes_pane_g2

0xbbb7,	// (0x00047818) bg_notes_pane_g3

0xbbbf,	// (0x00047820) notes_bg_pane_g1

0xbbc7,	// (0x00047828) notes_bg_pane_g4

0xbbcf,	// (0x00047830) notes_bg_pane_g5

0xbbd7,	// (0x00047838) notes_bg_pane_g6

0xbbdf,	// (0x00047840) notes_bg_pane_g7

0xbbe7,	// (0x00047848) notes_bg_pane_g8

0xbbef,	// (0x00047850) notes_bg_pane_g9

0x0006,

0xf206,	// (0x0004ae67) notes_bg_pane_g

0x39ab,	// (0x0003f60c) list_notes_text_pane_ParamLimits

0x39ab,	// (0x0003f60c) list_notes_text_pane

0x10c5,	// (0x0003cd26) list_notes_text_pane_g1

0x291d,	// (0x0003e57e) list_notes_text_pane_t1

0x0fca,	// (0x0003cc2b) listscroll_cale_week_pane

0x39dd,	// (0x0003f63e) bg_cale_heading_pane

0x10df,	// (0x0003cd40) bg_cale_pane_cp01

0x39f1,	// (0x0003f652) cale_week_corner_pane

0x3a07,	// (0x0003f668) cale_week_day_heading_pane

0x3a1b,	// (0x0003f67c) cale_week_scroll_pane_g1

0x3a2c,	// (0x0003f68d) cale_week_scroll_pane_g2

0x3a3d,	// (0x0003f69e) cale_week_scroll_pane_g3

0x3a4e,	// (0x0003f6af) cale_week_scroll_pane_g4

0x3a5f,	// (0x0003f6c0) cale_week_scroll_pane_g5

0x3a70,	// (0x0003f6d1) cale_week_scroll_pane_g6

0x3a81,	// (0x0003f6e2) cale_week_scroll_pane_g7

0x3a92,	// (0x0003f6f3) cale_week_scroll_pane_g8

0x3aa3,	// (0x0003f704) cale_week_scroll_pane_g9

0x3ab4,	// (0x0003f715) cale_week_scroll_pane_g10

0x3ac5,	// (0x0003f726) cale_week_scroll_pane_g11

0x3ad6,	// (0x0003f737) cale_week_scroll_pane_g12

0x3ae7,	// (0x0003f748) cale_week_scroll_pane_g13

0x3af8,	// (0x0003f759) cale_week_scroll_pane_g14

0x3b09,	// (0x0003f76a) cale_week_scroll_pane_g15

0x000e,

0xf215,	// (0x0004ae76) cale_week_scroll_pane_g

0x3b1a,	// (0x0003f77b) cale_week_time_pane

0x3b2b,	// (0x0003f78c) grid_cale_week_pane

0x3b3e,	// (0x0003f79f) scroll_pane_cp08

0x3b58,	// (0x0003f7b9) cell_cale_week_pane_ParamLimits

0x3b58,	// (0x0003f7b9) cell_cale_week_pane

0x3b94,	// (0x0003f7f5) cale_week_day_heading_pane_t1

0x3bc1,	// (0x0003f822) cale_week_day_heading_pane_t2

0x3bee,	// (0x0003f84f) cale_week_day_heading_pane_t3

0x3c1b,	// (0x0003f87c) cale_week_day_heading_pane_t4

0x3c48,	// (0x0003f8a9) cale_week_day_heading_pane_t5

0x3c75,	// (0x0003f8d6) cale_week_day_heading_pane_t6

0x3ca2,	// (0x0003f903) cale_week_day_heading_pane_t7

0x0006,

0xf234,	// (0x0004ae95) cale_week_day_heading_pane_t

0x110a,	// (0x0003cd6b) bg_cale_side_pane

0x3ccf,	// (0x0003f930) cale_week_time_pane_t1

0x3ce7,	// (0x0003f948) cale_week_time_pane_t2

0x3cff,	// (0x0003f960) cale_week_time_pane_t3

0x3d17,	// (0x0003f978) cale_week_time_pane_t4

0x3d2f,	// (0x0003f990) cale_week_time_pane_t5

0x3d47,	// (0x0003f9a8) cale_week_time_pane_t6

0x3d5f,	// (0x0003f9c0) cale_week_time_pane_t7

0x3d77,	// (0x0003f9d8) cale_week_time_pane_t8

0x0007,

0xf243,	// (0x0004aea4) cale_week_time_pane_t

0x3d8f,	// (0x0003f9f0) cell_cale_week_pane_g2

0x3da8,	// (0x0003fa09) cell_cale_week_pane_g3_ParamLimits

0x3da8,	// (0x0003fa09) cell_cale_week_pane_g3

0x1118,	// (0x0003cd79) grid_highlight_pane_cp07

0x1120,	// (0x0003cd81) listscroll_gms_pane

0x112a,	// (0x0003cd8b) grid_gms_pane

0x1133,	// (0x0003cd94) listscroll_gms_pane_g1

0x113b,	// (0x0003cd9c) listscroll_gms_pane_g2

0x0001,

0xf254,	// (0x0004aeb5) listscroll_gms_pane_g

0x3dc0,	// (0x0003fa21) scroll_pane_cp010

0x3dcb,	// (0x0003fa2c) cell_gms_pane_ParamLimits

0x3dcb,	// (0x0003fa2c) cell_gms_pane

0x3dde,	// (0x0003fa3f) cell_gms_pane_g1

0x1143,	// (0x0003cda4) cell_gms_pane_g2

0x114b,	// (0x0003cdac) cell_gms_pane_g3

0x1154,	// (0x0003cdb5) cell_gms_pane_g4

0x0003,

0xf259,	// (0x0004aeba) cell_gms_pane_g

0x115d,	// (0x0003cdbe) grid_highlight_pane_cp09

0x6cb7,	// (0x00042918) phob_pre_status_pane_g1

0x6cbf,	// (0x00042920) phob_pre_status_pane_g2

0x6cc7,	// (0x00042928) phob_pre_status_pane_g3

0x6ccf,	// (0x00042930) phob_pre_status_pane_g4

0x0004,

0xf648,	// (0x0004b2a9) phob_pre_status_pane_g

0x6cdf,	// (0x00042940) phob_pre_status_pane_t1

0x6ced,	// (0x0004294e) phob_pre_status_pane_t2

0x6cfd,	// (0x0004295e) phob_pre_status_pane_t3

0x0002,

0xf653,	// (0x0004b2b4) phob_pre_status_pane_t

0x0c98,	// (0x0003c8f9) bg_list_pane_cp05

0x3dee,	// (0x0003fa4f) grid_vorec_pane

0xbbf7,	// (0x00047858) vorec_t1

0xbc05,	// (0x00047866) vorec_t2

0xbc13,	// (0x00047874) vorec_t3

0xbc21,	// (0x00047882) vorec_t4

0xbc2f,	// (0x00047890) vorec_t5

0xbc3d,	// (0x0004789e) vorec_t6

0x0006,

0xf262,	// (0x0004aec3) vorec_t

0xbc59,	// (0x000478ba) wait_bar_pane_cp01

0x3df6,	// (0x0003fa57) cell_vorec_pane_ParamLimits

0x3df6,	// (0x0003fa57) cell_vorec_pane

0x1165,	// (0x0003cdc6) cell_vorec_pane_g1

0x0c98,	// (0x0003c8f9) grid_highlight_pane_cp05

0x3e21,	// (0x0003fa82) cams_zoom_pane

0x3e30,	// (0x0003fa91) image_vga_pane

0x3e4a,	// (0x0003faab) main_camera_pane_g1

0x3e5c,	// (0x0003fabd) main_camera_pane_g2

0x3e6c,	// (0x0003facd) main_camera_pane_g3

0x3e7c,	// (0x0003fadd) main_camera_pane_g4

0x3e8c,	// (0x0003faed) main_camera_pane_g5

0x3e9c,	// (0x0003fafd) main_camera_pane_g6

0x3eae,	// (0x0003fb0f) main_camera_pane_g7

0x0007,

0xf271,	// (0x0004aed2) main_camera_pane_g

0x3ebe,	// (0x0003fb1f) main_camera_pane_t1

0x3ed4,	// (0x0003fb35) main_camera_pane_t2

0x0001,

0xf282,	// (0x0004aee3) main_camera_pane_t

0x3f0e,	// (0x0003fb6f) cams_zoom_pane_cp_ParamLimits

0x3f0e,	// (0x0003fb6f) cams_zoom_pane_cp

0x3f36,	// (0x0003fb97) image_cif_pane_ParamLimits

0x3f36,	// (0x0003fb97) image_cif_pane

0x3f71,	// (0x0003fbd2) image_subqcif_pane

0x3f79,	// (0x0003fbda) main_video_pane_g1_ParamLimits

0x3f79,	// (0x0003fbda) main_video_pane_g1

0x3f9d,	// (0x0003fbfe) main_video_pane_g2_ParamLimits

0x3f9d,	// (0x0003fbfe) main_video_pane_g2

0x3fd1,	// (0x0003fc32) main_video_pane_g3_ParamLimits

0x3fd1,	// (0x0003fc32) main_video_pane_g3

0x3fff,	// (0x0003fc60) main_video_pane_g4_ParamLimits

0x3fff,	// (0x0003fc60) main_video_pane_g4

0x402d,	// (0x0003fc8e) main_video_pane_g5_ParamLimits

0x402d,	// (0x0003fc8e) main_video_pane_g5

0x117b,	// (0x0003cddc) main_video_pane_g6_ParamLimits

0x117b,	// (0x0003cddc) main_video_pane_g6

0x0006,

0xf287,	// (0x0004aee8) main_video_pane_g_ParamLimits

0xf287,	// (0x0004aee8) main_video_pane_g

0x405a,	// (0x0003fcbb) main_video_pane_t1_ParamLimits

0x405a,	// (0x0003fcbb) main_video_pane_t1

0x1195,	// (0x0003cdf6) cams_zoom_pane_g1

0x119e,	// (0x0003cdff) cams_zoom_pane_g2

0x11a7,	// (0x0003ce08) cams_zoom_pane_g3

0x11b0,	// (0x0003ce11) cams_zoom_pane_g4

0x0003,

0xf296,	// (0x0004aef7) cams_zoom_pane_g

0x40b7,	// (0x0003fd18) grid_cams_pane

0x40d1,	// (0x0003fd32) linegrid_cams_pane

0x40e5,	// (0x0003fd46) cell_cams_pane_ParamLimits

0x40e5,	// (0x0003fd46) cell_cams_pane

0x11b9,	// (0x0003ce1a) cams_burst_image_pane

0x11c1,	// (0x0003ce22) cell_cams_pane_g1

0x0c98,	// (0x0003c8f9) grid_highlight_pane_cp03

0x101f,	// (0x0003cc80) mp_bg_pane_g1

0x0c98,	// (0x0003c8f9) bg_list_pane_cp03

0xc153,	// (0x00047db4) bg_mp_pane

0xc15b,	// (0x00047dbc) grid_mp_pane

0xc163,	// (0x00047dc4) media_player_g1

0xc16b,	// (0x00047dcc) media_player_t1

0xc179,	// (0x00047dda) media_player_t2

0xc187,	// (0x00047de8) media_player_t3

0xc195,	// (0x00047df6) media_player_t4

0xc1a3,	// (0x00047e04) media_player_t5

0xc1b1,	// (0x00047e12) media_player_t6

0xc1bf,	// (0x00047e20) media_player_t7

0x0006,

0xf632,	// (0x0004b293) media_player_t

0xc1cd,	// (0x00047e2e) wait_bar_pane_cp02

0xf617,	// (0x0004b278) main_usb_pane_t

0x6cae,	// (0x0004290f) cell_mp_pane

0x101f,	// (0x0003cc80) cell_mp_pane_g1

0x0c98,	// (0x0003c8f9) grid_highlight_pane_cp06

0x11c9,	// (0x0003ce2a) grid_skin_colour_pane

0x11d1,	// (0x0003ce32) list_highlight_pane_cp03

0x4105,	// (0x0003fd66) skin_g1

0x11d9,	// (0x0003ce3a) skin_t1

0x11e8,	// (0x0003ce49) skin_t2

0x0001,

0xf2cb,	// (0x0004af2c) skin_t

0x410d,	// (0x0003fd6e) cell_skin_colour_pane_ParamLimits

0x410d,	// (0x0003fd6e) cell_skin_colour_pane

0x11f6,	// (0x0003ce57) cell_skin_colour_pane_g1

0x4171,	// (0x0003fdd2) call_video_g1_ParamLimits

0x4171,	// (0x0003fdd2) call_video_g1

0x418d,	// (0x0003fdee) call_video_g2_ParamLimits

0x418d,	// (0x0003fdee) call_video_g2

0x0001,

0xf2d0,	// (0x0004af31) call_video_g_ParamLimits

0xf2d0,	// (0x0004af31) call_video_g

0x41c7,	// (0x0003fe28) call_video_uplink_pane_cp1_ParamLimits

0x41c7,	// (0x0003fe28) call_video_uplink_pane_cp1

0x1210,	// (0x0003ce71) call_video_uplink_pane_cp2

0x4245,	// (0x0003fea6) video_down_crop_pane_ParamLimits

0x4245,	// (0x0003fea6) video_down_crop_pane

0x431b,	// (0x0003ff7c) video_down_pane_ParamLimits

0x431b,	// (0x0003ff7c) video_down_pane

0x1218,	// (0x0003ce79) video_down_subqcif_pane_ParamLimits

0x1218,	// (0x0003ce79) video_down_subqcif_pane

0x1230,	// (0x0003ce91) video_down_subqcif_pane_cp_ParamLimits

0x1230,	// (0x0003ce91) video_down_subqcif_pane_cp

0x1254,	// (0x0003ceb5) im_reading_pane_ParamLimits

0x1254,	// (0x0003ceb5) im_reading_pane

0x43ec,	// (0x0004004d) im_writing_pane_ParamLimits

0x43ec,	// (0x0004004d) im_writing_pane

0x4402,	// (0x00040063) im_reading_pane_t1

0x126e,	// (0x0003cecf) list_im_pane

0x127f,	// (0x0003cee0) scroll_pane_cp07

0x443b,	// (0x0004009c) im_writing_pane_t1_ParamLimits

0x443b,	// (0x0004009c) im_writing_pane_t1

0x1298,	// (0x0003cef9) im_writing_pane_t2_ParamLimits

0x1298,	// (0x0003cef9) im_writing_pane_t2

0x0001,

0xf2da,	// (0x0004af3b) im_writing_pane_t_ParamLimits

0xf2da,	// (0x0004af3b) im_writing_pane_t

0x0c98,	// (0x0003c8f9) input_focus_pane_cp04

0x0c98,	// (0x0003c8f9) input_focus_pane_cp05

0x4450,	// (0x000400b1) list_im_single_pane_ParamLimits

0x4450,	// (0x000400b1) list_im_single_pane

0x4464,	// (0x000400c5) list_single_im_pane_t1

0x6c6e,	// (0x000428cf) blid_accuracy_pane

0x6c76,	// (0x000428d7) blid_compass_pane

0x6c80,	// (0x000428e1) main_location_t1

0x6c90,	// (0x000428f1) main_location_t2

0x6ca0,	// (0x00042901) main_location_t3

0x0002,

0xf641,	// (0x0004b2a2) main_location_t

0x0c98,	// (0x0003c8f9) aid_levels_location

0x101f,	// (0x0003cc80) blid_accuracy_pane_g1

0x101f,	// (0x0003cc80) blid_accuracy_pane_g2

0x0001,

0xf33c,	// (0x0004af9d) blid_accuracy_pane_g

0x12e0,	// (0x0003cf41) wml_content_pane

0x131e,	// (0x0003cf7f) wml_button_pane_ParamLimits

0x131e,	// (0x0003cf7f) wml_button_pane

0x4473,	// (0x000400d4) wml_list_single_large_pane_ParamLimits

0x4473,	// (0x000400d4) wml_list_single_large_pane

0x4488,	// (0x000400e9) wml_list_single_medium_pane_ParamLimits

0x4488,	// (0x000400e9) wml_list_single_medium_pane

0x449e,	// (0x000400ff) wml_list_single_small_pane_ParamLimits

0x449e,	// (0x000400ff) wml_list_single_small_pane

0x1332,	// (0x0003cf93) wml_selection_box_pane_ParamLimits

0x1332,	// (0x0003cf93) wml_selection_box_pane

0x1345,	// (0x0003cfa6) wml_list_single_pane_t1

0x1354,	// (0x0003cfb5) wml_list_single_medium_pane_t1

0x1363,	// (0x0003cfc4) wml_list_single_large_pane_t1

0x1372,	// (0x0003cfd3) input_focus_pane_cp02_ParamLimits

0x1372,	// (0x0003cfd3) input_focus_pane_cp02

0x1385,	// (0x0003cfe6) wml_selection_box_pane_g1

0x138e,	// (0x0003cfef) wml_selection_box_pane_t1_ParamLimits

0x138e,	// (0x0003cfef) wml_selection_box_pane_t1

0x0ef3,	// (0x0003cb54) bg_wml_button_pane_ParamLimits

0x0ef3,	// (0x0003cb54) bg_wml_button_pane

0x13a6,	// (0x0003d007) wml_button_pane_g1

0x13ae,	// (0x0003d00f) wml_button_pane_t1

0x13a6,	// (0x0003d007) wml_button_bg_pane_g1

0x13be,	// (0x0003d01f) wml_button_bg_pane_g2

0x13c6,	// (0x0003d027) wml_button_bg_pane_g3

0x13ce,	// (0x0003d02f) wml_button_bg_pane_g4

0x13d6,	// (0x0003d037) wml_button_bg_pane_g5

0x13de,	// (0x0003d03f) wml_button_bg_pane_g6

0x13e6,	// (0x0003d047) wml_button_bg_pane_g7

0x13ee,	// (0x0003d04f) wml_button_bg_pane_g8

0x13f6,	// (0x0003d057) wml_button_bg_pane_g9

0x0008,

0xf2df,	// (0x0004af40) wml_button_bg_pane_g

0x44b6,	// (0x00040117) bg_list_pane_cp02

0x13fe,	// (0x0003d05f) mce_header_pane_ParamLimits

0x13fe,	// (0x0003d05f) mce_header_pane

0x1414,	// (0x0003d075) mce_icon_pane

0x1414,	// (0x0003d075) mce_image_pane

0x141d,	// (0x0003d07e) mce_text_pane_ParamLimits

0x141d,	// (0x0003d07e) mce_text_pane

0x44be,	// (0x0004011f) scroll_pane_cp03

0x1316,	// (0x0003cf77) scroll_pane_cp04

0x1430,	// (0x0003d091) scroll_pane_cp05_ParamLimits

0x1430,	// (0x0003d091) scroll_pane_cp05

0x44c8,	// (0x00040129) mce_header_field_pane_ParamLimits

0x44c8,	// (0x00040129) mce_header_field_pane

0x44df,	// (0x00040140) mce_header_field_pane_2_ParamLimits

0x44df,	// (0x00040140) mce_header_field_pane_2

0x44f5,	// (0x00040156) mce_header_field_pane_3

0x44fd,	// (0x0004015e) list_single_mce_message_pane_ParamLimits

0x44fd,	// (0x0004015e) list_single_mce_message_pane

0x4512,	// (0x00040173) list_single_mce_smart_pane_ParamLimits

0x4512,	// (0x00040173) list_single_mce_smart_pane

0x143c,	// (0x0003d09d) input_focus_pane_cp03

0x1445,	// (0x0003d0a6) list_header_data_pane

0x4532,	// (0x00040193) mce_header_field_pane_t1

0x4542,	// (0x000401a3) list_single_mce_header_pane_ParamLimits

0x4542,	// (0x000401a3) list_single_mce_header_pane

0x144d,	// (0x0003d0ae) list_single_mce_header_pane_t1

0x145c,	// (0x0003d0bd) list_single_mce_message_pane_g1

0x1464,	// (0x0003d0c5) list_single_mce_message_pane_t1

0x4574,	// (0x000401d5) bg_cale_heading_pane_cp01_ParamLimits

0x4574,	// (0x000401d5) bg_cale_heading_pane_cp01

0x1472,	// (0x0003d0d3) bg_cale_pane_cp02_ParamLimits

0x1472,	// (0x0003d0d3) bg_cale_pane_cp02

0x4597,	// (0x000401f8) cale_month_corner_pane

0x45ad,	// (0x0004020e) cale_month_day_heading_pane_ParamLimits

0x45ad,	// (0x0004020e) cale_month_day_heading_pane

0x45d8,	// (0x00040239) cale_month_pane_g1_ParamLimits

0x45d8,	// (0x00040239) cale_month_pane_g1

0x45f4,	// (0x00040255) cale_month_pane_g2_ParamLimits

0x45f4,	// (0x00040255) cale_month_pane_g2

0x460f,	// (0x00040270) cale_month_pane_g3_ParamLimits

0x460f,	// (0x00040270) cale_month_pane_g3

0x463b,	// (0x0004029c) cale_month_pane_g4_ParamLimits

0x463b,	// (0x0004029c) cale_month_pane_g4

0x4667,	// (0x000402c8) cale_month_pane_g5_ParamLimits

0x4667,	// (0x000402c8) cale_month_pane_g5

0x4693,	// (0x000402f4) cale_month_pane_g6_ParamLimits

0x4693,	// (0x000402f4) cale_month_pane_g6

0x46bf,	// (0x00040320) cale_month_pane_g7_ParamLimits

0x46bf,	// (0x00040320) cale_month_pane_g7

0x46eb,	// (0x0004034c) cale_month_pane_g8_ParamLimits

0x46eb,	// (0x0004034c) cale_month_pane_g8

0x471f,	// (0x00040380) cale_month_pane_g9_ParamLimits

0x471f,	// (0x00040380) cale_month_pane_g9

0x4751,	// (0x000403b2) cale_month_pane_g10_ParamLimits

0x4751,	// (0x000403b2) cale_month_pane_g10

0x4783,	// (0x000403e4) cale_month_pane_g11_ParamLimits

0x4783,	// (0x000403e4) cale_month_pane_g11

0x47b5,	// (0x00040416) cale_month_pane_g12_ParamLimits

0x47b5,	// (0x00040416) cale_month_pane_g12

0x47e7,	// (0x00040448) cale_month_pane_g13_ParamLimits

0x47e7,	// (0x00040448) cale_month_pane_g13

0x000c,

0xf2f2,	// (0x0004af53) cale_month_pane_g_ParamLimits

0xf2f2,	// (0x0004af53) cale_month_pane_g

0x4819,	// (0x0004047a) cale_month_week_pane

0x482c,	// (0x0004048d) grid_cale_month_pane_ParamLimits

0x482c,	// (0x0004048d) grid_cale_month_pane

0x4852,	// (0x000404b3) cale_month_day_heading_pane_t1

0x48b0,	// (0x00040511) cale_month_day_heading_pane_t2

0x4915,	// (0x00040576) cale_month_day_heading_pane_t3

0x497a,	// (0x000405db) cale_month_day_heading_pane_t4

0x49df,	// (0x00040640) cale_month_day_heading_pane_t5

0x4a44,	// (0x000406a5) cale_month_day_heading_pane_t6

0x4aa9,	// (0x0004070a) cale_month_day_heading_pane_t7

0x0006,

0xf30d,	// (0x0004af6e) cale_month_day_heading_pane_t

0x110a,	// (0x0003cd6b) bg_cale_side_pane_cp01

0x4b0e,	// (0x0004076f) cale_month_week_pane_t1

0x4b25,	// (0x00040786) cale_month_week_pane_t2

0x4b3c,	// (0x0004079d) cale_month_week_pane_t3

0x4b53,	// (0x000407b4) cale_month_week_pane_t4

0x4b6a,	// (0x000407cb) cale_month_week_pane_t5

0x4b81,	// (0x000407e2) cale_month_week_pane_t6

0x0005,

0xf31c,	// (0x0004af7d) cale_month_week_pane_t

0x4b98,	// (0x000407f9) cell_cale_month_pane_ParamLimits

0x4b98,	// (0x000407f9) cell_cale_month_pane

0xbd2b,	// (0x0004798c) cell_cale_month_pane_g1

0x4c3e,	// (0x0004089f) cell_cale_month_pane_t1_ParamLimits

0x4c3e,	// (0x0004089f) cell_cale_month_pane_t1

0x1118,	// (0x0003cd79) grid_highlight_pane_cp08

0x101f,	// (0x0003cc80) main_smil_g1

0x4c5a,	// (0x000408bb) smil_status_pane

0x14a7,	// (0x0003d108) smil_text_pane

0xc073,	// (0x00047cd4) bg_popup_call3_rect_pane_g8

0xc07b,	// (0x00047cdc) bg_popup_call3_rect_pane_g9

0x0008,

0xf5d5,	// (0x0004b236) bg_popup_call3_rect_pane_g

0xc2f5,	// (0x00047f56) smil_status_volume_pane_g1

0x14b1,	// (0x0003d112) smil_status_pane_t1

0xc328,	// (0x00047f89) volume_smil_pane

0x14c8,	// (0x0003d129) list_smil_text_pane

0x4c6d,	// (0x000408ce) scroll_pane_cp011

0x4c78,	// (0x000408d9) smil_text_list_pane_t1_ParamLimits

0x4c78,	// (0x000408d9) smil_text_list_pane_t1

0xbd37,	// (0x00047998) aid_volume_smil_ParamLimits

0xbd37,	// (0x00047998) aid_volume_smil

0x101f,	// (0x0003cc80) smil_volume_pane_g1

0x101f,	// (0x0003cc80) smil_volume_pane_g2

0x0001,

0xf33c,	// (0x0004af9d) smil_volume_pane_g

0x0fca,	// (0x0003cc2b) listscroll_cale_day_pane

0x14d2,	// (0x0003d133) bg_cale_pane

0x14ea,	// (0x0003d14b) list_cale_pane

0x14fb,	// (0x0003d15c) scroll_pane_cp09

0x150c,	// (0x0003d16d) cale_bg_pane_g1

0x1514,	// (0x0003d175) cale_bg_pane_g2

0x151c,	// (0x0003d17d) cale_bg_pane_g3

0x1524,	// (0x0003d185) cale_bg_pane_g4

0x152c,	// (0x0003d18d) cale_bg_pane_g5

0x1534,	// (0x0003d195) cale_bg_pane_g6

0x153c,	// (0x0003d19d) cale_bg_pane_g7

0x1544,	// (0x0003d1a5) cale_bg_pane_g8

0x154c,	// (0x0003d1ad) cale_bg_pane_g9

0x0008,

0xf341,	// (0x0004afa2) cale_bg_pane_g

0x3df6,	// (0x0003fa57) list_cale_time_pane_ParamLimits

0x3df6,	// (0x0003fa57) list_cale_time_pane

0x1554,	// (0x0003d1b5) list_cale_time_pane_g1_ParamLimits

0x1554,	// (0x0003d1b5) list_cale_time_pane_g1

0x1560,	// (0x0003d1c1) list_cale_time_pane_g2_ParamLimits

0x1560,	// (0x0003d1c1) list_cale_time_pane_g2

0x4cbe,	// (0x0004091f) list_cale_time_pane_g3_ParamLimits

0x4cbe,	// (0x0004091f) list_cale_time_pane_g3

0x4ccc,	// (0x0004092d) list_cale_time_pane_g4_ParamLimits

0x4ccc,	// (0x0004092d) list_cale_time_pane_g4

0x4cda,	// (0x0004093b) list_cale_time_pane_g5_ParamLimits

0x4cda,	// (0x0004093b) list_cale_time_pane_g5

0x0005,

0xf354,	// (0x0004afb5) list_cale_time_pane_g_ParamLimits

0xf354,	// (0x0004afb5) list_cale_time_pane_g

0x157a,	// (0x0003d1db) list_cale_time_pane_t1_ParamLimits

0x157a,	// (0x0003d1db) list_cale_time_pane_t1

0x15a2,	// (0x0003d203) list_cale_time_pane_t2_ParamLimits

0x15a2,	// (0x0003d203) list_cale_time_pane_t2

0x4f88,	// (0x00040be9) aid_blid_cardinal_pane

0x4fc6,	// (0x00040c27) compass_pane_t4

0x15ca,	// (0x0003d22b) list_cale_time_pane_t4_ParamLimits

0x15ca,	// (0x0003d22b) list_cale_time_pane_t4

0x4fd4,	// (0x00040c35) compass_pane_t5

0x4fe2,	// (0x00040c43) compass_pane_t6

0x4ff0,	// (0x00040c51) compass_pane_t7

0x19f5,	// (0x0003d656) navi_pane_cc_t1

0x5196,	// (0x00040df7) aid_phob_thumbnail_center_pane

0x57d0,	// (0x00041431) main_postcard_pane_g4_ParamLimits

0x0002,

0xf361,	// (0x0004afc2) list_cale_time_pane_t_ParamLimits

0xf361,	// (0x0004afc2) list_cale_time_pane_t

0x08ef,	// (0x0003c550) bg_popup_window_pane_cp02_ParamLimits

0x08ef,	// (0x0003c550) bg_popup_window_pane_cp02

0x15f2,	// (0x0003d253) heading_pane_cp01_ParamLimits

0x15f2,	// (0x0003d253) heading_pane_cp01

0x15fe,	// (0x0003d25f) loc_req_pane_ParamLimits

0x15fe,	// (0x0003d25f) loc_req_pane

0x160e,	// (0x0003d26f) loc_type_pane_ParamLimits

0x160e,	// (0x0003d26f) loc_type_pane

0x1620,	// (0x0003d281) loc_type_pane_t1_ParamLimits

0x1620,	// (0x0003d281) loc_type_pane_t1

0x1632,	// (0x0003d293) loc_type_pane_t2_ParamLimits

0x1632,	// (0x0003d293) loc_type_pane_t2

0x1644,	// (0x0003d2a5) loc_type_pane_t3_ParamLimits

0x1644,	// (0x0003d2a5) loc_type_pane_t3

0x0002,

0xf368,	// (0x0004afc9) loc_type_pane_t_ParamLimits

0xf368,	// (0x0004afc9) loc_type_pane_t

0x1656,	// (0x0003d2b7) list_loc_req_pane

0x1660,	// (0x0003d2c1) scroll_pane_cp012

0x4ce8,	// (0x00040949) list_single_loc_request_popup_menu_pane_ParamLimits

0x4ce8,	// (0x00040949) list_single_loc_request_popup_menu_pane

0x166b,	// (0x0003d2cc) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0x166b,	// (0x0003d2cc) list_single_loc_request_popup_menu_pane_g1

0x1677,	// (0x0003d2d8) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0x1677,	// (0x0003d2d8) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf36f,	// (0x0004afd0) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf36f,	// (0x0004afd0) list_single_loc_request_popup_menu_pane_g

0x1683,	// (0x0003d2e4) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0x1683,	// (0x0003d2e4) list_single_loc_request_popup_menu_pane_t1

0x0ef3,	// (0x0003cb54) bg_popup_window_pane_cp03_ParamLimits

0x0ef3,	// (0x0003cb54) bg_popup_window_pane_cp03

0x4cf5,	// (0x00040956) heading_loc_req_pane_ParamLimits

0x4cf5,	// (0x00040956) heading_loc_req_pane

0x4d01,	// (0x00040962) popup_dyc_status_message_window_g1_ParamLimits

0x4d01,	// (0x00040962) popup_dyc_status_message_window_g1

0x4d15,	// (0x00040976) popup_dyc_status_message_window_t1_ParamLimits

0x4d15,	// (0x00040976) popup_dyc_status_message_window_t1

0x4d2a,	// (0x0004098b) popup_dyc_status_message_window_t2_ParamLimits

0x4d2a,	// (0x0004098b) popup_dyc_status_message_window_t2

0x4d3f,	// (0x000409a0) popup_dyc_status_message_window_t3_ParamLimits

0x4d3f,	// (0x000409a0) popup_dyc_status_message_window_t3

0x0002,

0xf374,	// (0x0004afd5) popup_dyc_status_message_window_t_ParamLimits

0xf374,	// (0x0004afd5) popup_dyc_status_message_window_t

0x0c98,	// (0x0003c8f9) bg_heading_pane_cp01

0x1699,	// (0x0003d2fa) heading_loc_req_pane_g1

0x16a1,	// (0x0003d302) heading_loc_req_pane_g2

0x16a9,	// (0x0003d30a) heading_loc_req_pane_g3

0x0002,

0xf37b,	// (0x0004afdc) heading_loc_req_pane_g

0x16b1,	// (0x0003d312) heading_loc_req_pane_t1

0x16c0,	// (0x0003d321) bg_popup_sub_pane_cp01_ParamLimits

0x16c0,	// (0x0003d321) bg_popup_sub_pane_cp01

0x16ce,	// (0x0003d32f) popup_cale_events_window_g1_ParamLimits

0x16ce,	// (0x0003d32f) popup_cale_events_window_g1

0x16ee,	// (0x0003d34f) popup_cale_events_window_g2_ParamLimits

0x16ee,	// (0x0003d34f) popup_cale_events_window_g2

0x0001,

0xf3af,	// (0x0004b010) popup_cale_events_window_g_ParamLimits

0xf3af,	// (0x0004b010) popup_cale_events_window_g

0x170e,	// (0x0003d36f) popup_cale_events_window_t1_ParamLimits

0x170e,	// (0x0003d36f) popup_cale_events_window_t1

0x1720,	// (0x0003d381) popup_cale_events_window_t2_ParamLimits

0x1720,	// (0x0003d381) popup_cale_events_window_t2

0x175e,	// (0x0003d3bf) popup_cale_events_window_t3_ParamLimits

0x175e,	// (0x0003d3bf) popup_cale_events_window_t3

0x1798,	// (0x0003d3f9) popup_cale_events_window_t4_ParamLimits

0x1798,	// (0x0003d3f9) popup_cale_events_window_t4

0x0003,

0xf3b4,	// (0x0004b015) popup_cale_events_window_t_ParamLimits

0xf3b4,	// (0x0004b015) popup_cale_events_window_t

0x4d73,	// (0x000409d4) call_type_pane

0x4d83,	// (0x000409e4) popup_call_status_window_g1

0x4d97,	// (0x000409f8) popup_call_status_window_g2

0x4dab,	// (0x00040a0c) popup_call_status_window_g3

0x0002,

0xf3bd,	// (0x0004b01e) popup_call_status_window_g

0x17ce,	// (0x0003d42f) call_type_pane_g1

0x17d7,	// (0x0003d438) call_type_pane_g2

0x0001,

0xf3c4,	// (0x0004b025) call_type_pane_g

0x0c98,	// (0x0003c8f9) bg_popup_sub_pane_cp02

0x17e0,	// (0x0003d441) listscroll_popup_wml_pane

0x17e8,	// (0x0003d449) list_wml_pane

0x17f2,	// (0x0003d453) scroll_pane_cp013

0x17fd,	// (0x0003d45e) list_single_graphic_popup_wml_pane_ParamLimits

0x17fd,	// (0x0003d45e) list_single_graphic_popup_wml_pane

0x101f,	// (0x0003cc80) list_single_graphic_popup_wml_pane_g1

0x1811,	// (0x0003d472) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf3c9,	// (0x0004b02a) list_single_graphic_popup_wml_pane_g

0x1819,	// (0x0003d47a) list_single_graphic_popup_wml_pane_t1

0x182f,	// (0x0003d490) aid_call_pane

0x0eeb,	// (0x0003cb4c) popup_clock_analogue_window_g1

0x0eeb,	// (0x0003cb4c) popup_clock_analogue_window_g2

0xbdce,	// (0x00047a2f) popup_clock_analogue_window_g3

0xbdce,	// (0x00047a2f) popup_clock_analogue_window_g4

0x101f,	// (0x0003cc80) popup_clock_analogue_window_g5

0x0004,

0xf3ce,	// (0x0004b02f) popup_clock_analogue_window_g

0xbdd6,	// (0x00047a37) popup_clock_analogue_window_t1

0xbde4,	// (0x00047a45) clock_digital_number_pane_ParamLimits

0xbde4,	// (0x00047a45) clock_digital_number_pane

0xbdf0,	// (0x00047a51) clock_digital_number_pane_cp02_ParamLimits

0xbdf0,	// (0x00047a51) clock_digital_number_pane_cp02

0xbdfc,	// (0x00047a5d) clock_digital_number_pane_cp03_ParamLimits

0xbdfc,	// (0x00047a5d) clock_digital_number_pane_cp03

0xbe08,	// (0x00047a69) clock_digital_number_pane_cp04_ParamLimits

0xbe08,	// (0x00047a69) clock_digital_number_pane_cp04

0xbe18,	// (0x00047a79) clock_digital_separator_pane_ParamLimits

0xbe18,	// (0x00047a79) clock_digital_separator_pane

0xbe24,	// (0x00047a85) popup_clock_digital_window_t1

0x101f,	// (0x0003cc80) clock_digital_number_pane_g1

0x101f,	// (0x0003cc80) clock_digital_number_pane_g2

0x0001,

0xf33c,	// (0x0004af9d) clock_digital_number_pane_g

0x101f,	// (0x0003cc80) clock_digital_separator_pane_g1

0x101f,	// (0x0003cc80) clock_digital_separator_pane_g2

0x0001,

0xf33c,	// (0x0004af9d) clock_digital_separator_pane_g

0x0c98,	// (0x0003c8f9) bg_popup_window_pane_cp04

0x1837,	// (0x0003d498) heading_pane_cp03

0x183f,	// (0x0003d4a0) listscroll_popup_gms_pane

0x1847,	// (0x0003d4a8) grid_large_graphic_popup_pane

0x1851,	// (0x0003d4b2) listscroll_popup_gms_pane_g1

0x1859,	// (0x0003d4ba) listscroll_popup_gms_pane_g2

0x0001,

0xf3d9,	// (0x0004b03a) listscroll_popup_gms_pane_g

0x1316,	// (0x0003cf77) scroll_pane_cp014

0x4dba,	// (0x00040a1b) cell_large_graphic_popup_pane_ParamLimits

0x4dba,	// (0x00040a1b) cell_large_graphic_popup_pane

0x4dd2,	// (0x00040a33) cell_large_graphic_popup_pane_g1_ParamLimits

0x4dd2,	// (0x00040a33) cell_large_graphic_popup_pane_g1

0x1861,	// (0x0003d4c2) cell_large_graphic_popup_pane_g2_ParamLimits

0x1861,	// (0x0003d4c2) cell_large_graphic_popup_pane_g2

0x186d,	// (0x0003d4ce) cell_large_graphic_popup_pane_g3_ParamLimits

0x186d,	// (0x0003d4ce) cell_large_graphic_popup_pane_g3

0x187a,	// (0x0003d4db) cell_large_graphic_popup_pane_g4_ParamLimits

0x187a,	// (0x0003d4db) cell_large_graphic_popup_pane_g4

0x0003,

0xf3de,	// (0x0004b03f) cell_large_graphic_popup_pane_g_ParamLimits

0xf3de,	// (0x0004b03f) cell_large_graphic_popup_pane_g

0x188a,	// (0x0003d4eb) grid_highlight_pane_cp010

0x101f,	// (0x0003cc80) bg_popup_call_pane_g1

0x1894,	// (0x0003d4f5) list_single_graphic_popup_conf_pane_ParamLimits

0x1894,	// (0x0003d4f5) list_single_graphic_popup_conf_pane

0x18a7,	// (0x0003d508) list_highlight_pane_cp01

0x18b0,	// (0x0003d511) list_single_graphic_popup_conf_pane_g1

0x18b8,	// (0x0003d519) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf3e7,	// (0x0004b048) list_single_graphic_popup_conf_pane_g

0x18c0,	// (0x0003d521) list_single_graphic_popup_conf_pane_t1

0x18ce,	// (0x0003d52f) linegrid_cams_pane_g1

0x4dde,	// (0x00040a3f) linegrid_cams_pane_g2

0x114b,	// (0x0003cdac) linegrid_cams_pane_g3

0x18d7,	// (0x0003d538) linegrid_cams_pane_g4

0x4de7,	// (0x00040a48) linegrid_cams_pane_g5

0x4df0,	// (0x00040a51) linegrid_cams_pane_g6

0x1154,	// (0x0003cdb5) linegrid_cams_pane_g7

0x0006,

0xf3ec,	// (0x0004b04d) linegrid_cams_pane_g

0x18e0,	// (0x0003d541) popup_clock_analogue_window

0x18e0,	// (0x0003d541) popup_clock_digital_window

0x0c98,	// (0x0003c8f9) popup_phob_thumbnail_window

0x101f,	// (0x0003cc80) call_video_uplink_pane_g1

0x18e9,	// (0x0003d54a) call_video_uplink_pane_g2

0x0001,

0xf3fb,	// (0x0004b05c) call_video_uplink_pane_g

0x18f1,	// (0x0003d552) video_uplink_pane

0x18f9,	// (0x0003d55a) mce_image_pane_g1

0x4dfb,	// (0x00040a5c) mce_image_pane_g2

0x4e05,	// (0x00040a66) mce_image_pane_g3

0x4e0d,	// (0x00040a6e) mce_image_pane_g4

0x4e15,	// (0x00040a76) mce_image_pane_g5

0x0004,

0xf400,	// (0x0004b061) mce_image_pane_g

0x1903,	// (0x0003d564) control_top_pane_stacon_cp01_ParamLimits

0x1903,	// (0x0003d564) control_top_pane_stacon_cp01

0x1917,	// (0x0003d578) uni_indicator_pane_stacon_cp01_ParamLimits

0x1917,	// (0x0003d578) uni_indicator_pane_stacon_cp01

0x1928,	// (0x0003d589) bg_popup_sub_pane_cp03

0x4e1d,	// (0x00040a7e) chi_dic_find_pane

0x4e25,	// (0x00040a86) listscroll_chi_dic_pane

0x4e2e,	// (0x00040a8f) main_pane_chidic_g1

0x1932,	// (0x0003d593) chi_dic_find_pane_t1

0x1940,	// (0x0003d5a1) find_chidic_pane

0x1949,	// (0x0003d5aa) chi_dic_list_pane_ParamLimits

0x1949,	// (0x0003d5aa) chi_dic_list_pane

0x195a,	// (0x0003d5bb) scroll_pane_cp020

0x1962,	// (0x0003d5c3) find_chidic_pane_t1

0x0c98,	// (0x0003c8f9) input_focus_pane_cp06

0x4e41,	// (0x00040aa2) list_chi_dic_pane_ParamLimits

0x4e41,	// (0x00040aa2) list_chi_dic_pane

0x4e53,	// (0x00040ab4) list_chi_dic_pane_t1_ParamLimits

0x4e53,	// (0x00040ab4) list_chi_dic_pane_t1

0x0c98,	// (0x0003c8f9) list_highlight_pane_cp020

0x1971,	// (0x0003d5d2) bg_cale_heading_pane_g1

0x4e66,	// (0x00040ac7) bg_cale_heading_pane_g2

0x4e6e,	// (0x00040acf) bg_cale_heading_pane_g3

0x4e76,	// (0x00040ad7) bg_cale_heading_pane_g4

0x4e80,	// (0x00040ae1) bg_cale_heading_pane_g5

0x4e8a,	// (0x00040aeb) bg_cale_heading_pane_g6

0x4e92,	// (0x00040af3) bg_cale_heading_pane_g7

0x4e9a,	// (0x00040afb) bg_cale_heading_pane_g8

0x4ea4,	// (0x00040b05) bg_cale_heading_pane_g9

0x0008,

0xf40b,	// (0x0004b06c) bg_cale_heading_pane_g

0x1971,	// (0x0003d5d2) bg_cale_side_pane_g1

0x4eae,	// (0x00040b0f) bg_cale_side_pane_g2

0x4eb6,	// (0x00040b17) bg_cale_side_pane_g3

0x4ebe,	// (0x00040b1f) bg_cale_side_pane_g4

0x4ec6,	// (0x00040b27) bg_cale_side_pane_g5

0x4ece,	// (0x00040b2f) bg_cale_side_pane_g6

0x4ed6,	// (0x00040b37) bg_cale_side_pane_g7

0x4ede,	// (0x00040b3f) bg_cale_side_pane_g8

0x4ee6,	// (0x00040b47) bg_cale_side_pane_g9

0x0008,

0xf41e,	// (0x0004b07f) bg_cale_side_pane_g

0x4eee,	// (0x00040b4f) popup_call_status_window_ParamLimits

0x4eee,	// (0x00040b4f) popup_call_status_window

0x1979,	// (0x0003d5da) stacon_top_pane

0x1981,	// (0x0003d5e2) status_pane_ParamLimits

0x1981,	// (0x0003d5e2) status_pane

0x1996,	// (0x0003d5f7) status_small_pane

0x199e,	// (0x0003d5ff) control_pane

0x0c98,	// (0x0003c8f9) stacon_bottom_pane

0x19a6,	// (0x0003d607) list_single_mce_smart_pane_t1_ParamLimits

0x19a6,	// (0x0003d607) list_single_mce_smart_pane_t1

0x19b9,	// (0x0003d61a) list_single_mce_smart_pane_t2_ParamLimits

0x19b9,	// (0x0003d61a) list_single_mce_smart_pane_t2

0x0001,

0xf431,	// (0x0004b092) list_single_mce_smart_pane_t_ParamLimits

0xf431,	// (0x0004b092) list_single_mce_smart_pane_t

0x4f37,	// (0x00040b98) compass_pane

0x4f40,	// (0x00040ba1) main_location2_pane_t1

0x4f52,	// (0x00040bb3) main_location2_pane_t2

0x4f64,	// (0x00040bc5) main_location2_pane_t3

0x0003,

0xf436,	// (0x0004b097) main_location2_pane_t

0x19d8,	// (0x0003d639) compass_pane_g1_ParamLimits

0x19d8,	// (0x0003d639) compass_pane_g1

0x4fa8,	// (0x00040c09) compass_pane_t1

0x4fb7,	// (0x00040c18) compass_pane_t2

0x0005,

0xf43f,	// (0x0004b0a0) compass_pane_t

0x4ffe,	// (0x00040c5f) text_secondary_cp61

0x19ec,	// (0x0003d64d) navi_pane_cams_g5

0x1a0f,	// (0x0003d670) navi_pane_im_t1

0x1a1d,	// (0x0003d67e) navi_pane_mp_g1_ParamLimits

0x1a1d,	// (0x0003d67e) navi_pane_mp_g1

0x1a31,	// (0x0003d692) navi_pane_mp_g2_ParamLimits

0x1a31,	// (0x0003d692) navi_pane_mp_g2

0x1a3d,	// (0x0003d69e) navi_pane_mp_g3_ParamLimits

0x1a3d,	// (0x0003d69e) navi_pane_mp_g3

0x0002,

0xf453,	// (0x0004b0b4) navi_pane_mp_g_ParamLimits

0xf453,	// (0x0004b0b4) navi_pane_mp_g

0x1a49,	// (0x0003d6aa) navi_pane_mp_t1

0x1a57,	// (0x0003d6b8) navi_pane_mp_t2

0x0002,

0xf45a,	// (0x0004b0bb) navi_pane_mp_t

0x1a93,	// (0x0003d6f4) navi_pane_vt_g1

0x1a49,	// (0x0003d6aa) navi_pane_vt_t1

0x1a9b,	// (0x0003d6fc) navi_slider_pane

0x1aa3,	// (0x0003d704) zooming_pane

0x1aab,	// (0x0003d70c) navi_slider_pane_g1

0xbe41,	// (0x00047aa2) navi_slider_pane_g2

0x0006,

0xf461,	// (0x0004b0c2) navi_slider_pane_g

0x1acf,	// (0x0003d730) aid_levels_zoom

0x5123,	// (0x00040d84) zooming_pane_g1

0x512b,	// (0x00040d8c) zooming_pane_g2

0x512b,	// (0x00040d8c) zooming_pane_g3

0x0002,

0xf470,	// (0x0004b0d1) zooming_pane_g

0x5133,	// (0x00040d94) level_10_zoom

0x513c,	// (0x00040d9d) level_11_zoom

0x5145,	// (0x00040da6) level_1_zoom

0x514e,	// (0x00040daf) level_2_zoom

0x5157,	// (0x00040db8) level_3_zoom

0x5160,	// (0x00040dc1) level_4_zoom

0x5169,	// (0x00040dca) level_5_zoom

0x5172,	// (0x00040dd3) level_6_zoom

0x517b,	// (0x00040ddc) level_7_zoom

0x5184,	// (0x00040de5) level_8_zoom

0x518d,	// (0x00040dee) level_9_zoom

0x519e,	// (0x00040dff) popup_phob_thumbnail_window_g1

0x51a6,	// (0x00040e07) popup_phob_thumbnail_window_g2

0x0001,

0xf477,	// (0x0004b0d8) popup_phob_thumbnail_window_g

0xc1d5,	// (0x00047e36) level_1_location

0xc1dd,	// (0x00047e3e) level_2_location

0xc1e5,	// (0x00047e46) level_3_location

0xc1ed,	// (0x00047e4e) level_4_location

0x1aa3,	// (0x0003d704) level_5_location

0x51ae,	// (0x00040e0f) mce_icon_pane_g1

0x51b6,	// (0x00040e17) mce_icon_pane_g2

0x0001,

0xf47c,	// (0x0004b0dd) mce_icon_pane_g

0x51be,	// (0x00040e1f) main_mup_pane_g1_ParamLimits

0x51be,	// (0x00040e1f) main_mup_pane_g1

0x51d4,	// (0x00040e35) main_mup_pane_g2_ParamLimits

0x51d4,	// (0x00040e35) main_mup_pane_g2

0x51ec,	// (0x00040e4d) main_mup_pane_g3_ParamLimits

0x51ec,	// (0x00040e4d) main_mup_pane_g3

0x5204,	// (0x00040e65) main_mup_pane_g4_ParamLimits

0x5204,	// (0x00040e65) main_mup_pane_g4

0x521c,	// (0x00040e7d) main_mup_pane_g5_ParamLimits

0x521c,	// (0x00040e7d) main_mup_pane_g5

0x5238,	// (0x00040e99) main_mup_pane_g6_ParamLimits

0x5238,	// (0x00040e99) main_mup_pane_g6

0x5250,	// (0x00040eb1) main_mup_pane_g7_ParamLimits

0x5250,	// (0x00040eb1) main_mup_pane_g7

0x5268,	// (0x00040ec9) main_mup_pane_g8_ParamLimits

0x5268,	// (0x00040ec9) main_mup_pane_g8

0x5282,	// (0x00040ee3) main_mup_pane_g9_ParamLimits

0x5282,	// (0x00040ee3) main_mup_pane_g9

0x529c,	// (0x00040efd) main_mup_pane_g10_ParamLimits

0x529c,	// (0x00040efd) main_mup_pane_g10

0x52b6,	// (0x00040f17) main_mup_pane_g11_ParamLimits

0x52b6,	// (0x00040f17) main_mup_pane_g11

0x52ca,	// (0x00040f2b) main_mup_pane_g12_ParamLimits

0x52ca,	// (0x00040f2b) main_mup_pane_g12

0x52e0,	// (0x00040f41) main_mup_pane_g13_ParamLimits

0x52e0,	// (0x00040f41) main_mup_pane_g13

0x000c,

0xf481,	// (0x0004b0e2) main_mup_pane_g_ParamLimits

0xf481,	// (0x0004b0e2) main_mup_pane_g

0x52f4,	// (0x00040f55) main_mup_pane_t1_ParamLimits

0x52f4,	// (0x00040f55) main_mup_pane_t1

0x530e,	// (0x00040f6f) main_mup_pane_t2_ParamLimits

0x530e,	// (0x00040f6f) main_mup_pane_t2

0x5326,	// (0x00040f87) main_mup_pane_t3_ParamLimits

0x5326,	// (0x00040f87) main_mup_pane_t3

0x533e,	// (0x00040f9f) main_mup_pane_t4_ParamLimits

0x533e,	// (0x00040f9f) main_mup_pane_t4

0x535c,	// (0x00040fbd) main_mup_pane_t5_ParamLimits

0x535c,	// (0x00040fbd) main_mup_pane_t5

0x5371,	// (0x00040fd2) main_mup_pane_t6_ParamLimits

0x5371,	// (0x00040fd2) main_mup_pane_t6

0x0005,

0xf49c,	// (0x0004b0fd) main_mup_pane_t_ParamLimits

0xf49c,	// (0x0004b0fd) main_mup_pane_t

0x5383,	// (0x00040fe4) mup_progress_pane_ParamLimits

0x5383,	// (0x00040fe4) mup_progress_pane

0x538f,	// (0x00040ff0) mup_visualizer_pane_ParamLimits

0x538f,	// (0x00040ff0) mup_visualizer_pane

0x53bf,	// (0x00041020) mup_volume_pane_ParamLimits

0x53bf,	// (0x00041020) mup_volume_pane

0x53dd,	// (0x0004103e) mup_visualizer_pane_g1_ParamLimits

0x53dd,	// (0x0004103e) mup_visualizer_pane_g1

0x53dd,	// (0x0004103e) mup_visualizer_pane_g2_ParamLimits

0x53dd,	// (0x0004103e) mup_visualizer_pane_g2

0x19d8,	// (0x0003d639) mup_visualizer_pane_g3_ParamLimits

0x19d8,	// (0x0003d639) mup_visualizer_pane_g3

0x0002,

0xf4a9,	// (0x0004b10a) mup_visualizer_pane_g_ParamLimits

0xf4a9,	// (0x0004b10a) mup_visualizer_pane_g

0x101f,	// (0x0003cc80) mup_volume_pane_g1

0x53f3,	// (0x00041054) mup_volume_pane_g2

0x0001,

0xf4b0,	// (0x0004b111) mup_volume_pane_g

0x101f,	// (0x0003cc80) mup_progress_pane_g1

0x53fc,	// (0x0004105d) mup_progress_pane_g2

0x5405,	// (0x00041066) mup_progress_pane_g3

0x0002,

0xf4b5,	// (0x0004b116) mup_progress_pane_g

0x0c98,	// (0x0003c8f9) bg_popup_window_pane_cp05

0x540e,	// (0x0004106f) heading_pane_cp02_ParamLimits

0x540e,	// (0x0004106f) heading_pane_cp02

0x5428,	// (0x00041089) list_popup_blid_pane

0x5430,	// (0x00041091) list_blid_sat_info_pane_ParamLimits

0x5430,	// (0x00041091) list_blid_sat_info_pane

0x5443,	// (0x000410a4) list_blid_sat_info_pane_g1

0x544b,	// (0x000410ac) list_blid_sat_info_pane_t1

0x5551,	// (0x000411b2) mup_equalizer_pane_ParamLimits

0x5551,	// (0x000411b2) mup_equalizer_pane

0x556a,	// (0x000411cb) mup_equalizer_pane_cp1_ParamLimits

0x556a,	// (0x000411cb) mup_equalizer_pane_cp1

0x5587,	// (0x000411e8) mup_equalizer_pane_cp2_ParamLimits

0x5587,	// (0x000411e8) mup_equalizer_pane_cp2

0x55a4,	// (0x00041205) mup_equalizer_pane_cp3_ParamLimits

0x55a4,	// (0x00041205) mup_equalizer_pane_cp3

0x55c5,	// (0x00041226) mup_equalizer_pane_cp4_ParamLimits

0x55c5,	// (0x00041226) mup_equalizer_pane_cp4

0x55e6,	// (0x00041247) mup_equalizer_pane_cp5

0x55fa,	// (0x0004125b) mup_equalizer_pane_cp6

0x560e,	// (0x0004126f) mup_equalizer_pane_cp7

0xc0f3,	// (0x00047d54) bg_popup_call_poc_act_pane_g9

0xc0fb,	// (0x00047d5c) bg_popup_call_poc_act_pane_g10

0xc103,	// (0x00047d64) bg_popup_call_poc_act_pane_g11

0x000a,

0x0ef3,	// (0x0003cb54) mup_scale_pane

0x101f,	// (0x0003cc80) mup_scale_pane_g1

0x5622,	// (0x00041283) mup_scale_pane_g2

0x0006,

0xf4d1,	// (0x0004b132) mup_scale_pane_g

0x5658,	// (0x000412b9) msg_data_pane

0x5660,	// (0x000412c1) scroll_pane_cp017

0x29de,	// (0x0003e63f) bg_list_pane_cp04_ParamLimits

0x29de,	// (0x0003e63f) bg_list_pane_cp04

0x5668,	// (0x000412c9) msg_data_pane_g1

0x5670,	// (0x000412d1) msg_data_pane_g2

0x567a,	// (0x000412db) msg_data_pane_g3

0x5682,	// (0x000412e3) msg_data_pane_g4

0x568a,	// (0x000412eb) msg_data_pane_g5

0x5692,	// (0x000412f3) msg_data_pane_g6

0x569a,	// (0x000412fb) msg_data_pane_g7

0x0006,

0xf4e0,	// (0x0004b141) msg_data_pane_g

0x29fe,	// (0x0003e65f) msg_text_pane_ParamLimits

0x29fe,	// (0x0003e65f) msg_text_pane

0x56a2,	// (0x00041303) qrid_highlight_pane_cp011_ParamLimits

0x56a2,	// (0x00041303) qrid_highlight_pane_cp011

0x0c98,	// (0x0003c8f9) msg_body_pane

0x0c98,	// (0x0003c8f9) msg_header_pane

0x56c1,	// (0x00041322) input_focus_pane_cp07

0x2a31,	// (0x0003e692) msg_header_pane_t1_ParamLimits

0x2a31,	// (0x0003e692) msg_header_pane_t1

0x2a45,	// (0x0003e6a6) msg_header_pane_t2_ParamLimits

0x2a45,	// (0x0003e6a6) msg_header_pane_t2

0x0001,

0xf4f4,	// (0x0004b155) msg_header_pane_t_ParamLimits

0xf4f4,	// (0x0004b155) msg_header_pane_t

0x56d6,	// (0x00041337) msg_body_pane_g1

0x2a57,	// (0x0003e6b8) msg_body_pane_t1_ParamLimits

0x2a57,	// (0x0003e6b8) msg_body_pane_t1

0x2a88,	// (0x0003e6e9) msg_body_pane_t2_ParamLimits

0x2a88,	// (0x0003e6e9) msg_body_pane_t2

0x2a9a,	// (0x0003e6fb) msg_body_pane_t3_ParamLimits

0x2a9a,	// (0x0003e6fb) msg_body_pane_t3

0x0002,

0xf4f9,	// (0x0004b15a) msg_body_pane_t_ParamLimits

0xf4f9,	// (0x0004b15a) msg_body_pane_t

0x5718,	// (0x00041379) main_viewer_pane_g1_ParamLimits

0x5718,	// (0x00041379) main_viewer_pane_g1

0x5726,	// (0x00041387) main_viewer_pane_g2_ParamLimits

0x5726,	// (0x00041387) main_viewer_pane_g2

0x5734,	// (0x00041395) main_viewer_pane_g3_ParamLimits

0x5734,	// (0x00041395) main_viewer_pane_g3

0x5743,	// (0x000413a4) main_viewer_pane_g4_ParamLimits

0x5743,	// (0x000413a4) main_viewer_pane_g4

0xbe6b,	// (0x00047acc) main_viewer_pane_g5_ParamLimits

0xbe6b,	// (0x00047acc) main_viewer_pane_g5

0xbe6b,	// (0x00047acc) main_viewer_pane_g7_ParamLimits

0xbe6b,	// (0x00047acc) main_viewer_pane_g7

0xbe7d,	// (0x00047ade) main_viewer_pane_g8_ParamLimits

0xbe7d,	// (0x00047ade) main_viewer_pane_g8

0x0007,

0xf509,	// (0x0004b16a) main_viewer_pane_g_ParamLimits

0xf509,	// (0x0004b16a) main_viewer_pane_g

0x5752,	// (0x000413b3) viewer_content_pane_ParamLimits

0x5752,	// (0x000413b3) viewer_content_pane

0x578d,	// (0x000413ee) main_postcard_pane_g1_ParamLimits

0x578d,	// (0x000413ee) main_postcard_pane_g1

0x57a3,	// (0x00041404) main_postcard_pane_g2_ParamLimits

0x57a3,	// (0x00041404) main_postcard_pane_g2

0x57b9,	// (0x0004141a) main_postcard_pane_g3_ParamLimits

0x57b9,	// (0x0004141a) main_postcard_pane_g3

0x0005,

0xf51a,	// (0x0004b17b) main_postcard_pane_g_ParamLimits

0xf51a,	// (0x0004b17b) main_postcard_pane_g

0x57d0,	// (0x00041431) main_postcard_pane_g4

0xc308,	// (0x00047f69) smil_status_volume_pane_g2

0x5813,	// (0x00041474) postcard_pane_ParamLimits

0x5813,	// (0x00041474) postcard_pane

0x5855,	// (0x000414b6) postcard_pane_g1_ParamLimits

0x5855,	// (0x000414b6) postcard_pane_g1

0x5863,	// (0x000414c4) postcard_pane_g2_ParamLimits

0x5863,	// (0x000414c4) postcard_pane_g2

0x586f,	// (0x000414d0) postcard_pane_g3_ParamLimits

0x586f,	// (0x000414d0) postcard_pane_g3

0x587b,	// (0x000414dc) postcard_pane_g4_ParamLimits

0x587b,	// (0x000414dc) postcard_pane_g4

0x5889,	// (0x000414ea) postcard_pane_g5_ParamLimits

0x5889,	// (0x000414ea) postcard_pane_g5

0x589e,	// (0x000414ff) postcard_pane_g6_ParamLimits

0x589e,	// (0x000414ff) postcard_pane_g6

0x5855,	// (0x000414b6) postcard_pane_g7_ParamLimits

0x5855,	// (0x000414b6) postcard_pane_g7

0x0006,

0xf527,	// (0x0004b188) postcard_pane_g_ParamLimits

0xf527,	// (0x0004b188) postcard_pane_g

0x58b2,	// (0x00041513) main_mp2_pane_g1_ParamLimits

0x58b2,	// (0x00041513) main_mp2_pane_g1

0x58be,	// (0x0004151f) main_mp2_pane_g2_ParamLimits

0x58be,	// (0x0004151f) main_mp2_pane_g2

0x58ca,	// (0x0004152b) main_mp2_pane_g3_ParamLimits

0x58ca,	// (0x0004152b) main_mp2_pane_g3

0x0002,

0xf536,	// (0x0004b197) main_mp2_pane_g_ParamLimits

0xf536,	// (0x0004b197) main_mp2_pane_g

0x58d6,	// (0x00041537) main_mp2_pane_t1_ParamLimits

0x58d6,	// (0x00041537) main_mp2_pane_t1

0x58eb,	// (0x0004154c) main_mp2_pane_t2_ParamLimits

0x58eb,	// (0x0004154c) main_mp2_pane_t2

0x58fd,	// (0x0004155e) main_mp2_pane_t3_ParamLimits

0x58fd,	// (0x0004155e) main_mp2_pane_t3

0x0002,

0xf53d,	// (0x0004b19e) main_mp2_pane_t_ParamLimits

0xf53d,	// (0x0004b19e) main_mp2_pane_t

0x590f,	// (0x00041570) pec_content_pane_ParamLimits

0x590f,	// (0x00041570) pec_content_pane

0x1316,	// (0x0003cf77) scroll_pane_cp015

0x5921,	// (0x00041582) pec_attribute_pane_ParamLimits

0x5921,	// (0x00041582) pec_attribute_pane

0x5931,	// (0x00041592) pec_content_pane_g1_ParamLimits

0x5931,	// (0x00041592) pec_content_pane_g1

0x593d,	// (0x0004159e) pec_content_pane_t1_ParamLimits

0x593d,	// (0x0004159e) pec_content_pane_t1

0x594f,	// (0x000415b0) pec_content_pane_t2_ParamLimits

0x594f,	// (0x000415b0) pec_content_pane_t2

0x0001,

0xf544,	// (0x0004b1a5) pec_content_pane_t_ParamLimits

0xf544,	// (0x0004b1a5) pec_content_pane_t

0x5961,	// (0x000415c2) list_single_graphic_pane_cp01_ParamLimits

0x5961,	// (0x000415c2) list_single_graphic_pane_cp01

0x0ef3,	// (0x0003cb54) bg_popup_sub_pane_cp04

0x5976,	// (0x000415d7) popup_mup_playback_window_g1

0x5982,	// (0x000415e3) popup_mup_playback_window_t1

0x5997,	// (0x000415f8) popup_mup_playback_window_t2

0x0001,

0xf549,	// (0x0004b1aa) popup_mup_playback_window_t

0x59ec,	// (0x0004164d) main_image_pane_g1_ParamLimits

0x59ec,	// (0x0004164d) main_image_pane_g1

0x5ac9,	// (0x0004172a) scroll_pane_cp018_ParamLimits

0x5ac9,	// (0x0004172a) scroll_pane_cp018

0x5ae1,	// (0x00041742) scroll_pane_cp016_ParamLimits

0x5ae1,	// (0x00041742) scroll_pane_cp016

0x5b15,	// (0x00041776) smil2_image_pane_ParamLimits

0x5b15,	// (0x00041776) smil2_image_pane

0x5b45,	// (0x000417a6) smil2_root_pane_ParamLimits

0x5b45,	// (0x000417a6) smil2_root_pane

0x5b7d,	// (0x000417de) smil2_text_pane_ParamLimits

0x5b7d,	// (0x000417de) smil2_text_pane

0x0c98,	// (0x0003c8f9) bg_list_pane_cp06

0x5c05,	// (0x00041866) grid_radio_pane

0x0c98,	// (0x0003c8f9) bg_popup_window_pane_cp06

0x5c0d,	// (0x0004186e) main_fmradio_pane_t1

0x1837,	// (0x0003d498) heading_pane_cp04

0x5c1b,	// (0x0004187c) main_fmradio_pane_t2

0xc10b,	// (0x00047d6c) popup_cale_lunar_info_window_g1

0x5c29,	// (0x0004188a) main_fmradio_pane_t3

0xc113,	// (0x00047d74) popup_cale_lunar_info_window_g2

0x5c37,	// (0x00041898) main_fmradio_pane_t4

0x0001,

0x5c45,	// (0x000418a6) main_fmradio_pane_t5

0x0004,

0xf624,	// (0x0004b285) popup_cale_lunar_info_window_g

0xf55e,	// (0x0004b1bf) main_fmradio_pane_t

0x5c53,	// (0x000418b4) wait_bar_pane_cp03

0x5c5b,	// (0x000418bc) cell_fmradio_pane_ParamLimits

0x5c5b,	// (0x000418bc) cell_fmradio_pane

0x5855,	// (0x000414b6) cell_fmradio_pane_g1_ParamLimits

0x5855,	// (0x000414b6) cell_fmradio_pane_g1

0x0c98,	// (0x0003c8f9) grid_highlight_pane_cp011

0x5c6e,	// (0x000418cf) poc_content_pane_ParamLimits

0x5c6e,	// (0x000418cf) poc_content_pane

0x5c80,	// (0x000418e1) scroll_pane_cp019

0x5c88,	// (0x000418e9) popup_call_poc_act_window_ParamLimits

0x5c88,	// (0x000418e9) popup_call_poc_act_window

0x5cac,	// (0x0004190d) popup_call_poc_inact_window_ParamLimits

0x5cac,	// (0x0004190d) popup_call_poc_inact_window

0xf5fb,	// (0x0004b25c) bg_popup_call_poc_act_pane_g

0xc083,	// (0x00047ce4) bg_popup_call_poc_inact_pane_g1

0xc08b,	// (0x00047cec) bg_popup_call_poc_inact_pane_g2

0x5cc5,	// (0x00041926) popup_call_poc_act_window_g2

0xc093,	// (0x00047cf4) bg_popup_call_poc_inact_pane_g3

0xc09b,	// (0x00047cfc) bg_popup_call_poc_inact_pane_g4

0xc0a3,	// (0x00047d04) bg_popup_call_poc_inact_pane_g5

0x5ccd,	// (0x0004192e) popup_call_poc_act_window_t1_ParamLimits

0x5ccd,	// (0x0004192e) popup_call_poc_act_window_t1

0x5cf5,	// (0x00041956) popup_call_poc_act_window_t2_ParamLimits

0x5cf5,	// (0x00041956) popup_call_poc_act_window_t2

0x5d1d,	// (0x0004197e) popup_call_poc_act_window_t3_ParamLimits

0x5d1d,	// (0x0004197e) popup_call_poc_act_window_t3

0x5d45,	// (0x000419a6) popup_call_poc_act_window_t4_ParamLimits

0x5d45,	// (0x000419a6) popup_call_poc_act_window_t4

0x0003,

0xf569,	// (0x0004b1ca) popup_call_poc_act_window_t_ParamLimits

0xf569,	// (0x0004b1ca) popup_call_poc_act_window_t

0xc0ab,	// (0x00047d0c) bg_popup_call_poc_inact_pane_g6

0xc0b3,	// (0x00047d14) bg_popup_call_poc_inact_pane_g7

0xc0bb,	// (0x00047d1c) bg_popup_call_poc_inact_pane_g8

0x5d57,	// (0x000419b8) popup_call_poc_inact_window_g2

0xc0c3,	// (0x00047d24) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf5e8,	// (0x0004b249) bg_popup_call_poc_inact_pane_g

0x5d5f,	// (0x000419c0) popup_call_poc_inact_window_t1_ParamLimits

0x5d5f,	// (0x000419c0) popup_call_poc_inact_window_t1

0x5d74,	// (0x000419d5) popup_call_poc_inact_window_t2_ParamLimits

0x5d74,	// (0x000419d5) popup_call_poc_inact_window_t2

0x5d89,	// (0x000419ea) popup_call_poc_inact_window_t3_ParamLimits

0x5d89,	// (0x000419ea) popup_call_poc_inact_window_t3

0x0002,

0xf572,	// (0x0004b1d3) popup_call_poc_inact_window_t_ParamLimits

0xf572,	// (0x0004b1d3) popup_call_poc_inact_window_t

0xc27b,	// (0x00047edc) context_pane_ParamLimits

0x71c1,	// (0x00042e22) signal_pane_ParamLimits

0x1aa3,	// (0x0003d704) main_call2_pane

0xc269,	// (0x00047eca) popup_phob_thumbnail2_window_ParamLimits

0xc269,	// (0x00047eca) popup_phob_thumbnail2_window

0xbe53,	// (0x00047ab4) aid_hotspot_pointer_arrow_pane

0xbe5b,	// (0x00047abc) aid_hotspot_pointer_hand_pane

0x6cd7,	// (0x00042938) phob_pre_status_pane_g5

0x3e21,	// (0x0003fa82) cams_zoom_pane_ParamLimits

0x3e30,	// (0x0003fa91) image_vga_pane_ParamLimits

0x3e4a,	// (0x0003faab) main_camera_pane_g1_ParamLimits

0x3e5c,	// (0x0003fabd) main_camera_pane_g2_ParamLimits

0x3e6c,	// (0x0003facd) main_camera_pane_g3_ParamLimits

0x3e7c,	// (0x0003fadd) main_camera_pane_g4_ParamLimits

0x3e8c,	// (0x0003faed) main_camera_pane_g5_ParamLimits

0x3e9c,	// (0x0003fafd) main_camera_pane_g6_ParamLimits

0x3eae,	// (0x0003fb0f) main_camera_pane_g7_ParamLimits

0xf271,	// (0x0004aed2) main_camera_pane_g_ParamLimits

0x3ebe,	// (0x0003fb1f) main_camera_pane_t1_ParamLimits

0x3ed4,	// (0x0003fb35) main_camera_pane_t2_ParamLimits

0xf282,	// (0x0004aee3) main_camera_pane_t_ParamLimits

0x0ef3,	// (0x0003cb54) bg_popup_preview_window_pane_cp01_ParamLimits

0x0ef3,	// (0x0003cb54) bg_popup_preview_window_pane_cp01

0x5d9e,	// (0x000419ff) popup_phob_thumbnail2_window_g1_ParamLimits

0x5d9e,	// (0x000419ff) popup_phob_thumbnail2_window_g1

0x0c98,	// (0x0003c8f9) call2_cli_visual_pane

0x5dc5,	// (0x00041a26) popup_call2_audio_conf_window_ParamLimits

0x5dc5,	// (0x00041a26) popup_call2_audio_conf_window

0x5de5,	// (0x00041a46) popup_call2_audio_first_window_ParamLimits

0x5de5,	// (0x00041a46) popup_call2_audio_first_window

0x5e7b,	// (0x00041adc) popup_call2_audio_in_window_ParamLimits

0x5e7b,	// (0x00041adc) popup_call2_audio_in_window

0x5ec3,	// (0x00041b24) popup_call2_audio_out_window_ParamLimits

0x5ec3,	// (0x00041b24) popup_call2_audio_out_window

0x5f2d,	// (0x00041b8e) popup_call2_audio_second_window_ParamLimits

0x5f2d,	// (0x00041b8e) popup_call2_audio_second_window

0x5f93,	// (0x00041bf4) popup_call2_audio_wait_window_ParamLimits

0x5f93,	// (0x00041bf4) popup_call2_audio_wait_window

0x0c98,	// (0x0003c8f9) bg_popup_call2_act_pane_cp03

0x0ed5,	// (0x0003cb36) list_conf_pane_cp

0x5fcd,	// (0x00041c2e) popup_call2_audio_conf_window_t1

0x1894,	// (0x0003d4f5) list_single_graphic_popup_conf2_pane_ParamLimits

0x1894,	// (0x0003d4f5) list_single_graphic_popup_conf2_pane

0x18a7,	// (0x0003d508) list_highlight_pane_cp04

0x5fdb,	// (0x00041c3c) list_single_graphic_popup_conf2_pane_g1

0x18b8,	// (0x0003d519) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf579,	// (0x0004b1da) list_single_graphic_popup_conf2_pane_g

0x5fe5,	// (0x00041c46) list_single_graphic_popup_conf2_pane_t1

0x5ff3,	// (0x00041c54) bg_popup_call2_act_pane_cp01_ParamLimits

0x5ff3,	// (0x00041c54) bg_popup_call2_act_pane_cp01

0x607d,	// (0x00041cde) call_type_pane_cp05_ParamLimits

0x607d,	// (0x00041cde) call_type_pane_cp05

0x60d1,	// (0x00041d32) popup_call2_audio_second_window_g1_ParamLimits

0x60d1,	// (0x00041d32) popup_call2_audio_second_window_g1

0x6125,	// (0x00041d86) popup_call2_audio_second_window_g2_ParamLimits

0x6125,	// (0x00041d86) popup_call2_audio_second_window_g2

0x0002,

0xf57e,	// (0x0004b1df) popup_call2_audio_second_window_g_ParamLimits

0xf57e,	// (0x0004b1df) popup_call2_audio_second_window_g

0x618a,	// (0x00041deb) popup_call2_audio_second_window_t1_ParamLimits

0x618a,	// (0x00041deb) popup_call2_audio_second_window_t1

0x6245,	// (0x00041ea6) popup_call2_audio_second_window_t2_ParamLimits

0x6245,	// (0x00041ea6) popup_call2_audio_second_window_t2

0x6298,	// (0x00041ef9) popup_call2_audio_second_window_t3_ParamLimits

0x6298,	// (0x00041ef9) popup_call2_audio_second_window_t3

0x0003,

0xf585,	// (0x0004b1e6) popup_call2_audio_second_window_t_ParamLimits

0xf585,	// (0x0004b1e6) popup_call2_audio_second_window_t

0x0c98,	// (0x0003c8f9) bg_popup_call2_in_pane_cp02

0x0ca2,	// (0x0003c903) call_type_pane_cp04

0x0caa,	// (0x0003c90b) popup_call2_audio_wait_window_g1

0x0cb2,	// (0x0003c913) popup_call2_audio_wait_window_g2

0x0001,

0xf15e,	// (0x0004adbf) popup_call2_audio_wait_window_g

0x0cba,	// (0x0003c91b) popup_call2_audio_wait_window_t3

0x638b,	// (0x00041fec) bg_popup_call2_act_pane_ParamLimits

0x638b,	// (0x00041fec) bg_popup_call2_act_pane

0x644b,	// (0x000420ac) call_type_pane_cp03_ParamLimits

0x644b,	// (0x000420ac) call_type_pane_cp03

0x64af,	// (0x00042110) popup_call2_audio_first_window_g1_ParamLimits

0x64af,	// (0x00042110) popup_call2_audio_first_window_g1

0x651f,	// (0x00042180) popup_call2_audio_first_window_g2_ParamLimits

0x651f,	// (0x00042180) popup_call2_audio_first_window_g2

0x53dd,	// (0x0004103e) popup_call2_audio_first_window_g3_ParamLimits

0x53dd,	// (0x0004103e) popup_call2_audio_first_window_g3

0x0004,

0xf58e,	// (0x0004b1ef) popup_call2_audio_first_window_g_ParamLimits

0xf58e,	// (0x0004b1ef) popup_call2_audio_first_window_g

0x65fd,	// (0x0004225e) popup_call2_audio_first_window_t1_ParamLimits

0x65fd,	// (0x0004225e) popup_call2_audio_first_window_t1

0x6700,	// (0x00042361) popup_call2_audio_first_window_t4_ParamLimits

0x6700,	// (0x00042361) popup_call2_audio_first_window_t4

0x67e3,	// (0x00042444) popup_call2_audio_first_window_t5_ParamLimits

0x67e3,	// (0x00042444) popup_call2_audio_first_window_t5

0x0003,

0xf599,	// (0x0004b1fa) popup_call2_audio_first_window_t_ParamLimits

0xf599,	// (0x0004b1fa) popup_call2_audio_first_window_t

0x0eeb,	// (0x0003cb4c) bg_popup_call2_act_pane_g1

0xc11b,	// (0x00047d7c) popup_cale_lunar_info_window_t1

0xc129,	// (0x00047d8a) popup_cale_lunar_info_window_t2

0xc137,	// (0x00047d98) popup_cale_lunar_info_window_t3

0x0c98,	// (0x0003c8f9) bg_popup_call2_bubble_pane

0x68e4,	// (0x00042545) bg_popup_call2_in_pane_cp01_ParamLimits

0x68e4,	// (0x00042545) bg_popup_call2_in_pane_cp01

0x0974,	// (0x0003c5d5) call_type_pane_cp02

0x692c,	// (0x0004258d) popup_call2_audio_out_window_g1_ParamLimits

0x692c,	// (0x0004258d) popup_call2_audio_out_window_g1

0x6958,	// (0x000425b9) popup_call2_audio_out_window_g2_ParamLimits

0x6958,	// (0x000425b9) popup_call2_audio_out_window_g2

0x6980,	// (0x000425e1) popup_call2_audio_out_window_g3_ParamLimits

0x6980,	// (0x000425e1) popup_call2_audio_out_window_g3

0x0003,

0xf5a2,	// (0x0004b203) popup_call2_audio_out_window_g_ParamLimits

0xf5a2,	// (0x0004b203) popup_call2_audio_out_window_g

0x69bb,	// (0x0004261c) popup_call2_audio_out_window_t1_ParamLimits

0x69bb,	// (0x0004261c) popup_call2_audio_out_window_t1

0x6a1a,	// (0x0004267b) popup_call2_audio_out_window_t2_ParamLimits

0x6a1a,	// (0x0004267b) popup_call2_audio_out_window_t2

0x6a6e,	// (0x000426cf) popup_call2_audio_out_window_t3_ParamLimits

0x6a6e,	// (0x000426cf) popup_call2_audio_out_window_t3

0x6a84,	// (0x000426e5) popup_call2_audio_out_window_t4_ParamLimits

0x6a84,	// (0x000426e5) popup_call2_audio_out_window_t4

0x6a9a,	// (0x000426fb) popup_call2_audio_out_window_t5_ParamLimits

0x6a9a,	// (0x000426fb) popup_call2_audio_out_window_t5

0x0005,

0xf5ab,	// (0x0004b20c) popup_call2_audio_out_window_t_ParamLimits

0xf5ab,	// (0x0004b20c) popup_call2_audio_out_window_t

0x6afe,	// (0x0004275f) bg_popup_call2_in_pane_ParamLimits

0x6afe,	// (0x0004275f) bg_popup_call2_in_pane

0x6b5a,	// (0x000427bb) popup_call2_audio_in_window_g1_ParamLimits

0x6b5a,	// (0x000427bb) popup_call2_audio_in_window_g1

0x6b92,	// (0x000427f3) popup_call2_audio_in_window_g2_ParamLimits

0x6b92,	// (0x000427f3) popup_call2_audio_in_window_g2

0xbe95,	// (0x00047af6) popup_call2_audio_in_window_g3_ParamLimits

0xbe95,	// (0x00047af6) popup_call2_audio_in_window_g3

0x0003,

0xf5b8,	// (0x0004b219) popup_call2_audio_in_window_g_ParamLimits

0xf5b8,	// (0x0004b219) popup_call2_audio_in_window_g

0xbeed,	// (0x00047b4e) popup_call2_audio_in_window_t1_ParamLimits

0xbeed,	// (0x00047b4e) popup_call2_audio_in_window_t1

0xbf6d,	// (0x00047bce) popup_call2_audio_in_window_t2_ParamLimits

0xbf6d,	// (0x00047bce) popup_call2_audio_in_window_t2

0xbfed,	// (0x00047c4e) popup_call2_audio_in_window_t3_ParamLimits

0xbfed,	// (0x00047c4e) popup_call2_audio_in_window_t3

0xc007,	// (0x00047c68) popup_call2_audio_in_window_t4_ParamLimits

0xc007,	// (0x00047c68) popup_call2_audio_in_window_t4

0xc019,	// (0x00047c7a) popup_call2_audio_in_window_t5_ParamLimits

0xc019,	// (0x00047c7a) popup_call2_audio_in_window_t5

0xc02e,	// (0x00047c8f) popup_call2_audio_in_window_t6_ParamLimits

0xc02e,	// (0x00047c8f) popup_call2_audio_in_window_t6

0x0005,

0xf5c1,	// (0x0004b222) popup_call2_audio_in_window_t_ParamLimits

0xf5c1,	// (0x0004b222) popup_call2_audio_in_window_t

0x0eeb,	// (0x0003cb4c) bg_popup_call2_in_pane_g1

0xc145,	// (0x00047da6) popup_cale_lunar_info_window_t4

0x0003,

0xf629,	// (0x0004b28a) popup_cale_lunar_info_window_t

0x0ef3,	// (0x0003cb54) bg_popup_call2_rect_pane_ParamLimits

0x0ef3,	// (0x0003cb54) bg_popup_call2_rect_pane

0x0c98,	// (0x0003c8f9) call2_cli_visual_graphic_pane

0x0c98,	// (0x0003c8f9) call2_cli_visual_text_pane

0xc31b,	// (0x00047f7c) smil_status_volume_pane_g3

0x0002,

0x101f,	// (0x0003cc80) call2_cli_visual_graphic_pane_g1

0x101f,	// (0x0003cc80) call2_cli_visual_graphic_pane_g2

0x101f,	// (0x0003cc80) call2_cli_visual_graphic_pane_g3

0x0002,

0xf5ce,	// (0x0004b22f) call2_cli_visual_graphic_pane_g

0xc043,	// (0x00047ca4) bg_popup_call2_rect_pane_g1

0x10ab,	// (0x0003cd0c) bg_popup_call2_rect_pane_g2

0xc04b,	// (0x00047cac) bg_popup_call2_rect_pane_g3

0xc053,	// (0x00047cb4) bg_popup_call2_rect_pane_g4

0xc05b,	// (0x00047cbc) bg_popup_call2_rect_pane_g5

0xc063,	// (0x00047cc4) bg_popup_call2_rect_pane_g6

0xc06b,	// (0x00047ccc) bg_popup_call2_rect_pane_g7

0xc073,	// (0x00047cd4) bg_popup_call2_rect_pane_g8

0xc07b,	// (0x00047cdc) bg_popup_call2_rect_pane_g9

0x0008,

0xf5d5,	// (0x0004b236) bg_popup_call2_rect_pane_g

0xc083,	// (0x00047ce4) bg_popup_call2_bubble_pane_g1

0xc08b,	// (0x00047cec) bg_popup_call2_bubble_pane_g2

0xc093,	// (0x00047cf4) bg_popup_call2_bubble_pane_g3

0xc09b,	// (0x00047cfc) bg_popup_call2_bubble_pane_g4

0xc0a3,	// (0x00047d04) bg_popup_call2_bubble_pane_g5

0xc0ab,	// (0x00047d0c) bg_popup_call2_bubble_pane_g6

0xc0b3,	// (0x00047d14) bg_popup_call2_bubble_pane_g7

0xc0bb,	// (0x00047d1c) bg_popup_call2_bubble_pane_g8

0xc0c3,	// (0x00047d24) bg_popup_call2_bubble_pane_g9

0x0008,

0xf5e8,	// (0x0004b249) bg_popup_call2_bubble_pane_g

0x39ca,	// (0x0003f62b) aid_cale_week_size_cell_pane

0x3eea,	// (0x0003fb4b) aid_cams_cif_uncrop_pane_ParamLimits

0x3eea,	// (0x0003fb4b) aid_cams_cif_uncrop_pane

0x40a3,	// (0x0003fd04) aid_cams_size_cell_ParamLimits

0x40a3,	// (0x0003fd04) aid_cams_size_cell

0x40b7,	// (0x0003fd18) grid_cams_pane_ParamLimits

0x40d1,	// (0x0003fd32) linegrid_cams_pane_ParamLimits

0x419f,	// (0x0003fe00) call_video_pane_t1

0x41b3,	// (0x0003fe14) call_video_pane_t2

0x0001,

0xf2d5,	// (0x0004af36) call_video_pane_t

0x4556,	// (0x000401b7) aid_cale_month_size_cell_pane_ParamLimits

0x4556,	// (0x000401b7) aid_cale_month_size_cell_pane

0xf672,	// (0x0004b2d3) smil_status_volume_pane_g

0xc328,	// (0x00047f89) volume_smil_pane_ParamLimits

0x082f,	// (0x0003c490) aid_popup2_width_pane

0x393a,	// (0x0003f59b) cell_qdial_pane_g4_ParamLimits

0x393a,	// (0x0003f59b) cell_qdial_pane_g4

0x4f88,	// (0x00040be9) aid_blid_cardinal_pane_ParamLimits

0x4f94,	// (0x00040bf5) aid_blid_destination_pane_ParamLimits

0x4f94,	// (0x00040bf5) aid_blid_destination_pane

0x0ef3,	// (0x0003cb54) bg_popup_call_poc_act_pane_ParamLimits

0x0ef3,	// (0x0003cb54) bg_popup_call_poc_act_pane

0x0ef3,	// (0x0003cb54) bg_popup_call_poc_inact_pane_ParamLimits

0x0ef3,	// (0x0003cb54) bg_popup_call_poc_inact_pane

0xc0cb,	// (0x00047d2c) bg_popup_call_poc_act_pane_g1

0xc0d3,	// (0x00047d34) bg_popup_call_poc_act_pane_g2

0xc0db,	// (0x00047d3c) bg_popup_call_poc_act_pane_g3

0xc09b,	// (0x00047cfc) bg_popup_call_poc_act_pane_g4

0xc0a3,	// (0x00047d04) bg_popup_call_poc_act_pane_g5

0xc0e3,	// (0x00047d44) bg_popup_call_poc_act_pane_g6

0xc0b3,	// (0x00047d14) bg_popup_call_poc_act_pane_g7

0xc0eb,	// (0x00047d4c) bg_popup_call_poc_act_pane_g8

0x0c98,	// (0x0003c8f9) main_usb_pane

0xc244,	// (0x00047ea5) popup_cale_lunar_info_window

0x4402,	// (0x00040063) im_reading_pane_t1_ParamLimits

0x126e,	// (0x0003cecf) list_im_pane_ParamLimits

0x127f,	// (0x0003cee0) scroll_pane_cp07_ParamLimits

0x0c98,	// (0x0003c8f9) grid_highlight_pane_cp012

0x0ef3,	// (0x0003cb54) mup_scale_pane_ParamLimits

0x5855,	// (0x000414b6) main_usb_pane_g1_ParamLimits

0x5855,	// (0x000414b6) main_usb_pane_g1

0x6bec,	// (0x0004284d) main_usb_pane_g2_ParamLimits

0x6bec,	// (0x0004284d) main_usb_pane_g2

0x0001,

0xf612,	// (0x0004b273) main_usb_pane_g_ParamLimits

0xf612,	// (0x0004b273) main_usb_pane_g

0x6c02,	// (0x00042863) main_usb_pane_t1_ParamLimits

0x6c02,	// (0x00042863) main_usb_pane_t1

0x6c14,	// (0x00042875) main_usb_pane_t2_ParamLimits

0x6c14,	// (0x00042875) main_usb_pane_t2

0x6c26,	// (0x00042887) main_usb_pane_t3_ParamLimits

0x6c26,	// (0x00042887) main_usb_pane_t3

0x6c38,	// (0x00042899) main_usb_pane_t4_ParamLimits

0x6c38,	// (0x00042899) main_usb_pane_t4

0x6c4a,	// (0x000428ab) main_usb_pane_t5_ParamLimits

0x6c4a,	// (0x000428ab) main_usb_pane_t5

0x6c5c,	// (0x000428bd) main_usb_pane_t6_ParamLimits

0x6c5c,	// (0x000428bd) main_usb_pane_t6

0x0005,

0xf617,	// (0x0004b278) main_usb_pane_t_ParamLimits

0x4f37,	// (0x00040b98) aid_text_placing

0x4f40,	// (0x00040ba1) main_location2_pane_t1_ParamLimits

0x4f52,	// (0x00040bb3) main_location2_pane_t2_ParamLimits

0x4f64,	// (0x00040bc5) main_location2_pane_t3_ParamLimits

0x4f76,	// (0x00040bd7) main_location2_pane_t4_ParamLimits

0x4f76,	// (0x00040bd7) main_location2_pane_t4

0xf436,	// (0x0004b097) main_location2_pane_t_ParamLimits

0x0f2f,	// (0x0003cb90) find_pinb_pane_g2_ParamLimits

0x0f2f,	// (0x0003cb90) find_pinb_pane_g2

0x0001,

0xf184,	// (0x0004ade5) find_pinb_pane_g_ParamLimits

0xf184,	// (0x0004ade5) find_pinb_pane_g

0x0f3b,	// (0x0003cb9c) find_pinb_pane_t1_ParamLimits

0x0f4d,	// (0x0003cbae) find_pinb_pane_t2_ParamLimits

0xf189,	// (0x0004adea) find_pinb_pane_t_ParamLimits

0x0c98,	// (0x0003c8f9) main_call3_pane

0x4852,	// (0x000404b3) cale_month_day_heading_pane_t1_ParamLimits

0x48b0,	// (0x00040511) cale_month_day_heading_pane_t2_ParamLimits

0x4915,	// (0x00040576) cale_month_day_heading_pane_t3_ParamLimits

0x497a,	// (0x000405db) cale_month_day_heading_pane_t4_ParamLimits

0x49df,	// (0x00040640) cale_month_day_heading_pane_t5_ParamLimits

0x4a44,	// (0x000406a5) cale_month_day_heading_pane_t6_ParamLimits

0x4aa9,	// (0x0004070a) cale_month_day_heading_pane_t7_ParamLimits

0xf30d,	// (0x0004af6e) cale_month_day_heading_pane_t_ParamLimits

0x14bf,	// (0x0003d120) smil_status_volume_pane

0x5831,	// (0x00041492) postcard_address_pane_ParamLimits

0x5831,	// (0x00041492) postcard_address_pane

0x5843,	// (0x000414a4) postcard_message_pane_ParamLimits

0x5843,	// (0x000414a4) postcard_message_pane

0x6bca,	// (0x0004282b) call2_cli_visual_pane_t1_ParamLimits

0x6bca,	// (0x0004282b) call2_cli_visual_pane_t1

0x73ee,	// (0x0004304f) postcard_message_pane_t1_ParamLimits

0x73ee,	// (0x0004304f) postcard_message_pane_t1

0x73d7,	// (0x00043038) postcard_address_pane_t1_ParamLimits

0x73d7,	// (0x00043038) postcard_address_pane_t1

0x73c3,	// (0x00043024) popup_call3_audio_in_window_ParamLimits

0x73c3,	// (0x00043024) popup_call3_audio_in_window

0x724e,	// (0x00042eaf) bg_popup_call3_in_pane_ParamLimits

0x724e,	// (0x00042eaf) bg_popup_call3_in_pane

0x72c4,	// (0x00042f25) popup_call3_audio_in_window_g1_ParamLimits

0x72c4,	// (0x00042f25) popup_call3_audio_in_window_g1

0x72e4,	// (0x00042f45) popup_call3_audio_in_window_g2_ParamLimits

0x72e4,	// (0x00042f45) popup_call3_audio_in_window_g2

0x7304,	// (0x00042f65) popup_call3_audio_in_window_g3_ParamLimits

0x7304,	// (0x00042f65) popup_call3_audio_in_window_g3

0x0003,

0xf679,	// (0x0004b2da) popup_call3_audio_in_window_g_ParamLimits

0xf679,	// (0x0004b2da) popup_call3_audio_in_window_g

0x7335,	// (0x00042f96) popup_call3_audio_in_window_t1_ParamLimits

0x7335,	// (0x00042f96) popup_call3_audio_in_window_t1

0x7373,	// (0x00042fd4) popup_call3_audio_in_window_t2_ParamLimits

0x7373,	// (0x00042fd4) popup_call3_audio_in_window_t2

0x73b1,	// (0x00043012) popup_call3_audio_in_window_t3_ParamLimits

0x73b1,	// (0x00043012) popup_call3_audio_in_window_t3

0x0002,

0xf682,	// (0x0004b2e3) popup_call3_audio_in_window_t_ParamLimits

0xf682,	// (0x0004b2e3) popup_call3_audio_in_window_t

0x1aa3,	// (0x0003d704) bg_popup_call3_rect_pane

0xc043,	// (0x00047ca4) bg_popup_call3_rect_pane_g1

0x10ab,	// (0x0003cd0c) bg_popup_call3_rect_pane_g2

0xc04b,	// (0x00047cac) bg_popup_call3_rect_pane_g3

0xc053,	// (0x00047cb4) bg_popup_call3_rect_pane_g4

0xc05b,	// (0x00047cbc) bg_popup_call3_rect_pane_g5

0xc063,	// (0x00047cc4) bg_popup_call3_rect_pane_g6

0xc06b,	// (0x00047ccc) bg_popup_call3_rect_pane_g7

0x53d5,	// (0x00041036) mup_visualizer_osc_pane

0x53eb,	// (0x0004104c) mup_visualizer_spec_pane

0x727e,	// (0x00042edf) call3_video_qcif_pane_ParamLimits

0x727e,	// (0x00042edf) call3_video_qcif_pane

0x7291,	// (0x00042ef2) call3_video_qcif_uncrop_pane_ParamLimits

0x7291,	// (0x00042ef2) call3_video_qcif_uncrop_pane

0x729f,	// (0x00042f00) call3_video_subqcif_pane_ParamLimits

0x729f,	// (0x00042f00) call3_video_subqcif_pane

0x72b3,	// (0x00042f14) call3_video_subqcif_uncrop_pane_ParamLimits

0x72b3,	// (0x00042f14) call3_video_subqcif_uncrop_pane

0x7324,	// (0x00042f85) popup_call3_audio_in_window_g4_ParamLimits

0x7324,	// (0x00042f85) popup_call3_audio_in_window_g4

0x723d,	// (0x00042e9e) mup_spec_half_pane

0x7246,	// (0x00042ea7) mup_spec_half_pane_cp

0xc2db,	// (0x00047f3c) mup_osc_middle_pane

0xc2e4,	// (0x00047f45) mup_visualizer_osc_pane_g1

0x721d,	// (0x00042e7e) mup_spec_bar_pane_ParamLimits

0x721d,	// (0x00042e7e) mup_spec_bar_pane

0xc2c8,	// (0x00047f29) mup_spec_bar_pane_g1

0xc2d2,	// (0x00047f33) mup_spec_bar_pane_g2

0x0001,

0xf66d,	// (0x0004b2ce) mup_spec_bar_pane_g

0x39ca,	// (0x0003f62b) aid_cale_week_size_cell_pane_ParamLimits

0x39dd,	// (0x0003f63e) bg_cale_heading_pane_ParamLimits

0x10df,	// (0x0003cd40) bg_cale_pane_cp01_ParamLimits

0x39f1,	// (0x0003f652) cale_week_corner_pane_ParamLimits

0x3a07,	// (0x0003f668) cale_week_day_heading_pane_ParamLimits

0x3a1b,	// (0x0003f67c) cale_week_scroll_pane_g1_ParamLimits

0x3a2c,	// (0x0003f68d) cale_week_scroll_pane_g2_ParamLimits

0x3a3d,	// (0x0003f69e) cale_week_scroll_pane_g3_ParamLimits

0x3a4e,	// (0x0003f6af) cale_week_scroll_pane_g4_ParamLimits

0x3a5f,	// (0x0003f6c0) cale_week_scroll_pane_g5_ParamLimits

0x3a70,	// (0x0003f6d1) cale_week_scroll_pane_g6_ParamLimits

0x3a81,	// (0x0003f6e2) cale_week_scroll_pane_g7_ParamLimits

0x3a92,	// (0x0003f6f3) cale_week_scroll_pane_g8_ParamLimits

0x3aa3,	// (0x0003f704) cale_week_scroll_pane_g9_ParamLimits

0x3ab4,	// (0x0003f715) cale_week_scroll_pane_g10_ParamLimits

0x3ac5,	// (0x0003f726) cale_week_scroll_pane_g11_ParamLimits

0x3ad6,	// (0x0003f737) cale_week_scroll_pane_g12_ParamLimits

0x3ae7,	// (0x0003f748) cale_week_scroll_pane_g13_ParamLimits

0x3af8,	// (0x0003f759) cale_week_scroll_pane_g14_ParamLimits

0x3b09,	// (0x0003f76a) cale_week_scroll_pane_g15_ParamLimits

0xf215,	// (0x0004ae76) cale_week_scroll_pane_g_ParamLimits

0x3b1a,	// (0x0003f77b) cale_week_time_pane_ParamLimits

0x3b2b,	// (0x0003f78c) grid_cale_week_pane_ParamLimits

0x10f8,	// (0x0003cd59) listscroll_cale_week_pane_t1

0x3b3e,	// (0x0003f79f) scroll_pane_cp08_ParamLimits

0x4597,	// (0x000401f8) cale_month_corner_pane_ParamLimits

0x1495,	// (0x0003d0f6) cale_month_pane_t1

0x4819,	// (0x0004047a) cale_month_week_pane_ParamLimits

0x4d83,	// (0x000409e4) popup_call_status_window_g1_ParamLimits

0x4d97,	// (0x000409f8) popup_call_status_window_g2_ParamLimits

0x4dab,	// (0x00040a0c) popup_call_status_window_g3_ParamLimits

0xf3bd,	// (0x0004b01e) popup_call_status_window_g_ParamLimits

0x1827,	// (0x0003d488) aid_call2_pane

0x2a23,	// (0x0003e684) msg_header_pane_g1

0x5831,	// (0x00041492) postcard_address2_pane_ParamLimits

0x5831,	// (0x00041492) postcard_address2_pane

0x5843,	// (0x000414a4) postcard_message2_pane_ParamLimits

0x5843,	// (0x000414a4) postcard_message2_pane

0x71cf,	// (0x00042e30) message2_row_pane_ParamLimits

0x71cf,	// (0x00042e30) message2_row_pane

0x71eb,	// (0x00042e4c) address2_row_pane_ParamLimits

0x71eb,	// (0x00042e4c) address2_row_pane

0xc296,	// (0x00047ef7) postcard_message2_row_pane_g1

0xc29e,	// (0x00047eff) postcard_message2_row_pane_t1

0xc296,	// (0x00047ef7) address2_row_pane_g1

0xc29e,	// (0x00047eff) address2_row_pane_t1

0x3de6,	// (0x0003fa47) aid_size_cell_vorec

0x0c98,	// (0x0003c8f9) main_rss_pane

0x71fe,	// (0x00042e5f) rss_list_single_pane_ParamLimits

0x71fe,	// (0x00042e5f) rss_list_single_pane

0xc2ac,	// (0x00047f0d) rss_list_single_pane_t1

0xc2ba,	// (0x00047f1b) rss_list_single_pane_t2

0x0001,

0xf668,	// (0x0004b2c9) rss_list_single_pane_t

0x0c98,	// (0x0003c8f9) main_camera2_pane

0x0c98,	// (0x0003c8f9) main_video2_pane

0x7467,	// (0x000430c8) cams_zoom_pane_cp2_ParamLimits

0x7467,	// (0x000430c8) cams_zoom_pane_cp2

0x7487,	// (0x000430e8) image2_vga_pane_ParamLimits

0x7487,	// (0x000430e8) image2_vga_pane

0x74d8,	// (0x00043139) main_camera2_pane_g1_ParamLimits

0x74d8,	// (0x00043139) main_camera2_pane_g1

0x74f8,	// (0x00043159) main_camera2_pane_g2_ParamLimits

0x74f8,	// (0x00043159) main_camera2_pane_g2

0x7518,	// (0x00043179) main_camera2_pane_g3_ParamLimits

0x7518,	// (0x00043179) main_camera2_pane_g3

0x7538,	// (0x00043199) main_camera2_pane_g4_ParamLimits

0x7538,	// (0x00043199) main_camera2_pane_g4

0x7558,	// (0x000431b9) main_camera2_pane_g5_ParamLimits

0x7558,	// (0x000431b9) main_camera2_pane_g5

0x7578,	// (0x000431d9) main_camera2_pane_g6_ParamLimits

0x7578,	// (0x000431d9) main_camera2_pane_g6

0x7598,	// (0x000431f9) main_camera2_pane_g7_ParamLimits

0x7598,	// (0x000431f9) main_camera2_pane_g7

0x75b8,	// (0x00043219) main_camera2_pane_g8_ParamLimits

0x75b8,	// (0x00043219) main_camera2_pane_g8

0x0008,

0xf689,	// (0x0004b2ea) main_camera2_pane_g_ParamLimits

0xf689,	// (0x0004b2ea) main_camera2_pane_g

0x75f8,	// (0x00043259) main_camera2_pane_t1_ParamLimits

0x75f8,	// (0x00043259) main_camera2_pane_t1

0x762d,	// (0x0004328e) main_camera2_pane_t2_ParamLimits

0x762d,	// (0x0004328e) main_camera2_pane_t2

0x7653,	// (0x000432b4) main_camera2_pane_t3_ParamLimits

0x7653,	// (0x000432b4) main_camera2_pane_t3

0x76b1,	// (0x00043312) main_camera2_pane_t4_ParamLimits

0x76b1,	// (0x00043312) main_camera2_pane_t4

0x0006,

0xf69c,	// (0x0004b2fd) main_camera2_pane_t_ParamLimits

0xf69c,	// (0x0004b2fd) main_camera2_pane_t

0x7743,	// (0x000433a4) cams_zoom_pane_cp4_ParamLimits

0x7743,	// (0x000433a4) cams_zoom_pane_cp4

0x7759,	// (0x000433ba) image2_cif_pane_ParamLimits

0x7759,	// (0x000433ba) image2_cif_pane

0x7784,	// (0x000433e5) image2_subqcif_pane_ParamLimits

0x7784,	// (0x000433e5) image2_subqcif_pane

0x779e,	// (0x000433ff) main_video2_pane_g1_ParamLimits

0x779e,	// (0x000433ff) main_video2_pane_g1

0x77b8,	// (0x00043419) main_video2_pane_g2_ParamLimits

0x77b8,	// (0x00043419) main_video2_pane_g2

0x77ce,	// (0x0004342f) main_video2_pane_g3_ParamLimits

0x77ce,	// (0x0004342f) main_video2_pane_g3

0x77e4,	// (0x00043445) main_video2_pane_g4_ParamLimits

0x77e4,	// (0x00043445) main_video2_pane_g4

0x77fa,	// (0x0004345b) main_video2_pane_g5_ParamLimits

0x77fa,	// (0x0004345b) main_video2_pane_g5

0x7810,	// (0x00043471) main_video2_pane_g6_ParamLimits

0x7810,	// (0x00043471) main_video2_pane_g6

0x0005,

0xf6ab,	// (0x0004b30c) main_video2_pane_g_ParamLimits

0xf6ab,	// (0x0004b30c) main_video2_pane_g

0x782a,	// (0x0004348b) main_video2_pane_t1_ParamLimits

0x782a,	// (0x0004348b) main_video2_pane_t1

0x784e,	// (0x000434af) main_video2_pane_t2_ParamLimits

0x784e,	// (0x000434af) main_video2_pane_t2

0x789c,	// (0x000434fd) main_video2_pane_t3_ParamLimits

0x789c,	// (0x000434fd) main_video2_pane_t3

0x0002,

0xf6b8,	// (0x0004b319) main_video2_pane_t_ParamLimits

0xf6b8,	// (0x0004b319) main_video2_pane_t

0x6d17,	// (0x00042978) call_muted_g2

0x0001,

0xf65a,	// (0x0004b2bb) call_muted_g

0x0c98,	// (0x0003c8f9) main_mup2_pane

0x78e0,	// (0x00043541) main_mup2_pane_g1_ParamLimits

0x78e0,	// (0x00043541) main_mup2_pane_g1

0x78ec,	// (0x0004354d) main_mup2_pane_g2_ParamLimits

0x78ec,	// (0x0004354d) main_mup2_pane_g2

0xc44c,	// (0x000480ad) main_mup_pane_g13_cp1

0xc454,	// (0x000480b5) mup_volume_pane_cp1

0x7908,	// (0x00043569) main_mup2_pane_g4_ParamLimits

0x7908,	// (0x00043569) main_mup2_pane_g4

0x791a,	// (0x0004357b) main_mup2_pane_g5_ParamLimits

0x791a,	// (0x0004357b) main_mup2_pane_g5

0x792c,	// (0x0004358d) main_mup2_pane_g6_ParamLimits

0x792c,	// (0x0004358d) main_mup2_pane_g6

0x793e,	// (0x0004359f) main_mup2_pane_g7_ParamLimits

0x793e,	// (0x0004359f) main_mup2_pane_g7

0x0006,

0xf6bf,	// (0x0004b320) main_mup2_pane_g_ParamLimits

0xf6bf,	// (0x0004b320) main_mup2_pane_g

0x7956,	// (0x000435b7) main_mup2_pane_t1_ParamLimits

0x7956,	// (0x000435b7) main_mup2_pane_t1

0x796c,	// (0x000435cd) main_mup2_pane_t2_ParamLimits

0x796c,	// (0x000435cd) main_mup2_pane_t2

0x7982,	// (0x000435e3) main_mup2_pane_t3_ParamLimits

0x7982,	// (0x000435e3) main_mup2_pane_t3

0x7998,	// (0x000435f9) main_mup2_pane_t4_ParamLimits

0x7998,	// (0x000435f9) main_mup2_pane_t4

0x79b0,	// (0x00043611) main_mup2_pane_t5_ParamLimits

0x79b0,	// (0x00043611) main_mup2_pane_t5

0x79c8,	// (0x00043629) main_mup2_pane_t6_ParamLimits

0x79c8,	// (0x00043629) main_mup2_pane_t6

0x0005,

0xf6ce,	// (0x0004b32f) main_mup2_pane_t_ParamLimits

0xf6ce,	// (0x0004b32f) main_mup2_pane_t

0x79f8,	// (0x00043659) mup2_visualizer_pane_ParamLimits

0x79f8,	// (0x00043659) mup2_visualizer_pane

0x7a26,	// (0x00043687) mup_progress_pane_cp_ParamLimits

0x7a26,	// (0x00043687) mup_progress_pane_cp

0xc42e,	// (0x0004808f) mup_volume_pane_cp_ParamLimits

0xc42e,	// (0x0004808f) mup_volume_pane_cp

0x7a3a,	// (0x0004369b) mup2_visualizer_pane_g1_ParamLimits

0x7a3a,	// (0x0004369b) mup2_visualizer_pane_g1

0xc36d,	// (0x00047fce) mup2_visualizer_pane_g2_ParamLimits

0xc36d,	// (0x00047fce) mup2_visualizer_pane_g2

0x7a51,	// (0x000436b2) mup2_visualizer_pane_g3_ParamLimits

0x7a51,	// (0x000436b2) mup2_visualizer_pane_g3

0x0002,

0xf6db,	// (0x0004b33c) mup2_visualizer_pane_g_ParamLimits

0xf6db,	// (0x0004b33c) mup2_visualizer_pane_g

0x5bfd,	// (0x0004185e) aid_size_cell_fmradio

0x6ec9,	// (0x00042b2a) aid_height_parent_landcape

0x12fd,	// (0x0003cf5e) wml_content_pane_cp

0x1305,	// (0x0003cf66) wml_tabs_pane

0x130e,	// (0x0003cf6f) popup_wml_miniature_window

0x1316,	// (0x0003cf77) scroll_pane_cp021

0x132a,	// (0x0003cf8b) wml_content_pane_comp8

0x0c98,	// (0x0003c8f9) bg_popup_sub_pane_cp05

0xc38b,	// (0x00047fec) popup_wml_miniature_window_g1

0xc393,	// (0x00047ff4) wml_miniature_view_pane

0x7a5d,	// (0x000436be) aid_size_wml_view

0x7a65,	// (0x000436c6) wml_miniature_view_pane_g1

0x7a6e,	// (0x000436cf) wml_miniature_view_pane_g2

0x7a77,	// (0x000436d8) wml_miniature_view_pane_g3

0x7a7f,	// (0x000436e0) wml_miniature_view_pane_g4

0x7a87,	// (0x000436e8) wml_miniature_view_pane_g5

0x7a8f,	// (0x000436f0) wml_miniature_view_pane_g6

0x7a97,	// (0x000436f8) wml_miniature_view_pane_g7

0x7a9f,	// (0x00043700) wml_miniature_view_pane_g8

0x0007,

0xf6e2,	// (0x0004b343) wml_miniature_view_pane_g

0xc39b,	// (0x00047ffc) background_graphic_ParamLimits

0xc39b,	// (0x00047ffc) background_graphic

0xc3a7,	// (0x00048008) wml_tabs_2_pane

0xc3b0,	// (0x00048011) wml_tabs_3_pane_ParamLimits

0xc3b0,	// (0x00048011) wml_tabs_3_pane

0xc3c2,	// (0x00048023) wml_tabs_4_pane_ParamLimits

0xc3c2,	// (0x00048023) wml_tabs_4_pane

0xc3d8,	// (0x00048039) wml_tabs_5_pane_ParamLimits

0xc3d8,	// (0x00048039) wml_tabs_5_pane

0xc3f2,	// (0x00048053) wml_tabs_pane_g2_ParamLimits

0xc3f2,	// (0x00048053) wml_tabs_pane_g2

0xc406,	// (0x00048067) wml_tabs_pane_g3_ParamLimits

0xc406,	// (0x00048067) wml_tabs_pane_g3

0x7aa7,	// (0x00043708) wml_tabs_2_active_pane_ParamLimits

0x7aa7,	// (0x00043708) wml_tabs_2_active_pane

0x7abb,	// (0x0004371c) wml_tabs_2_passive_pane_ParamLimits

0x7abb,	// (0x0004371c) wml_tabs_2_passive_pane

0x7acf,	// (0x00043730) wml_tabs_3_active_pane_cp_ParamLimits

0x7acf,	// (0x00043730) wml_tabs_3_active_pane_cp

0x7ae4,	// (0x00043745) wml_tabs_3_passive_pane_ParamLimits

0x7ae4,	// (0x00043745) wml_tabs_3_passive_pane

0x7af7,	// (0x00043758) wml_tabs_3_passive_pane_cp_ParamLimits

0x7af7,	// (0x00043758) wml_tabs_3_passive_pane_cp

0x7b0e,	// (0x0004376f) tabs_4_active_pane

0x7b16,	// (0x00043777) tabs_4_passive_pane

0x7b20,	// (0x00043781) tabs_4_passive_pane_cp

0x7b28,	// (0x00043789) tabs_4_passive_pane_cp2

0x6be4,	// (0x00042845) aid_height_text

0x53ab,	// (0x0004100c) mup_volume_cont_pane_ParamLimits

0x53ab,	// (0x0004100c) mup_volume_cont_pane

0x35dd,	// (0x0003f23e) aid_size_cell_pinb

0x35e7,	// (0x0003f248) aid_size_list_pinb

0x7a12,	// (0x00043673) mup2_volume_cont_pane_ParamLimits

0x7a12,	// (0x00043673) mup2_volume_cont_pane

0xc41a,	// (0x0004807b) mup2_volume_cont_pane_g1_ParamLimits

0xc41a,	// (0x0004807b) mup2_volume_cont_pane_g1

0x32c1,	// (0x0003ef22) aid_size_cell_touch_ParamLimits

0x32c1,	// (0x0003ef22) aid_size_cell_touch

0x34cd,	// (0x0003f12e) touch_pane_ParamLimits

0x34cd,	// (0x0003f12e) touch_pane

0x081d,	// (0x0003c47e) main_rss2_pane

0xc45c,	// (0x000480bd) listscroll_rss2_pane

0xc465,	// (0x000480c6) rss2_navigation_pane

0xc46d,	// (0x000480ce) list_rss2_pane

0x195a,	// (0x0003d5bb) scroll_pane_cp22

0xc475,	// (0x000480d6) rss2_navigation_pane_g1

0xc47e,	// (0x000480df) rss2_navigation_pane_g2

0xc486,	// (0x000480e7) rss2_navigation_pane_g3

0x0002,

0xf6f3,	// (0x0004b354) rss2_navigation_pane_g

0xc48e,	// (0x000480ef) rss2_navigation_pane_t1

0x7b32,	// (0x00043793) rss2_list_single_pane_ParamLimits

0x7b32,	// (0x00043793) rss2_list_single_pane

0xc49c,	// (0x000480fd) rss2_list_single_pane_t2

0xc4aa,	// (0x0004810b) rss2_list_single_pane_t3_ParamLimits

0xc4aa,	// (0x0004810b) rss2_list_single_pane_t3

0xc4c7,	// (0x00048128) rss2_list_single_pane_t4

0x4c63,	// (0x000408c4) smil_status_pane_g1

0x1ad7,	// (0x0003d738) main_image2_pane_ParamLimits

0x1ad7,	// (0x0003d738) main_image2_pane

0x75d8,	// (0x00043239) main_camera2_pane_g9_ParamLimits

0x75d8,	// (0x00043239) main_camera2_pane_g9

0x7706,	// (0x00043367) main_camera2_pane_t5_ParamLimits

0x7706,	// (0x00043367) main_camera2_pane_t5

0xc33d,	// (0x00047f9e) main_camera2_pane_t6_ParamLimits

0xc33d,	// (0x00047f9e) main_camera2_pane_t6

0x7b47,	// (0x000437a8) main_image2_pane_g1_ParamLimits

0x7b47,	// (0x000437a8) main_image2_pane_g1

0x5bb3,	// (0x00041814) smil2_video_pane_ParamLimits

0x5bb3,	// (0x00041814) smil2_video_pane

0xbb61,	// (0x000477c2) aid_zoom_text_primary_cp

0x087b,	// (0x0003c4dc) popup_preview_fixed_window

0x1266,	// (0x0003cec7) im_reading_pane_g1

0x744f,	// (0x000430b0) cams2_bc_adjust_pane_cp_ParamLimits

0x744f,	// (0x000430b0) cams2_bc_adjust_pane_cp

0x7735,	// (0x00043396) cams2_bc_adjust_pane_ParamLimits

0x7735,	// (0x00043396) cams2_bc_adjust_pane

0xc4d5,	// (0x00048136) cams2_bc_adjust_pane_g1

0xc4dd,	// (0x0004813e) cams2_slider_pane

0xc4e6,	// (0x00048147) cams2_slider_pane_g1

0xc4ef,	// (0x00048150) cams2_slider_pane_g2

0x0006,

0xf6fa,	// (0x0004b35b) cams2_slider_pane_g

0x36c9,	// (0x0003f32a) calc_display_pane_ParamLimits

0x36ef,	// (0x0003f350) calc_paper_pane_ParamLimits

0x3710,	// (0x0003f371) grid_calc_pane_ParamLimits

0xbe24,	// (0x00047a85) popup_clock_digital_window_t1_ParamLimits

0x5a3a,	// (0x0004169b) main_image_pane_t1

0x36ab,	// (0x0003f30c) aid_size_cell_calc_ParamLimits

0x36ab,	// (0x0003f30c) aid_size_cell_calc

0x6f0f,	// (0x00042b70) popup_blid_sat_info2_window_ParamLimits

0x6f0f,	// (0x00042b70) popup_blid_sat_info2_window

0xc511,	// (0x00048172) aid_size_cell_blid

0xc519,	// (0x0004817a) bg_popup_window_pane_cp07

0xc53c,	// (0x0004819d) grid_popup_blid_pane

0xc546,	// (0x000481a7) heading_pane_cp05_ParamLimits

0xc546,	// (0x000481a7) heading_pane_cp05

0xc610,	// (0x00048271) cell_popup_blid_pane_ParamLimits

0xc610,	// (0x00048271) cell_popup_blid_pane

0xc634,	// (0x00048295) cell_popup_blid_pane_g1

0xc63c,	// (0x0004829d) cell_popup_blid_pane_t1

0x79e2,	// (0x00043643) mup2_indicator_pane_ParamLimits

0x79e2,	// (0x00043643) mup2_indicator_pane

0x1aa3,	// (0x0003d704) mup2_visualizer_osc_pane

0xc379,	// (0x00047fda) mup2_visualizer_spec_pane_ParamLimits

0xc379,	// (0x00047fda) mup2_visualizer_spec_pane

0x7b5d,	// (0x000437be) mup2_spec_half_pane

0x7b66,	// (0x000437c7) mup2_spec_half_pane_cp

0x7b6e,	// (0x000437cf) mup2_spec_bar_pane_ParamLimits

0x7b6e,	// (0x000437cf) mup2_spec_bar_pane

0xc2c8,	// (0x00047f29) mup2_spec_bar_pane_g1

0xc2d2,	// (0x00047f33) mup2_spec_bar_pane_g2

0x0001,

0xf66d,	// (0x0004b2ce) mup2_spec_bar_pane_g

0x7b8e,	// (0x000437ef) mup2_osc_middle_pane

0xc2e4,	// (0x00047f45) mup2_visualizer_osc_pane_g1

0x08a5,	// (0x0003c506) popup_number_entry_window_t1_ParamLimits

0x08b8,	// (0x0003c519) popup_number_entry_window_t2_ParamLimits

0x08ca,	// (0x0003c52b) popup_number_entry_window_t3_ParamLimits

0x351f,	// (0x0003f180) popup_number_entry_window_t5_ParamLimits

0x351f,	// (0x0003f180) popup_number_entry_window_t5

0xf12f,	// (0x0004ad90) popup_number_entry_window_t_ParamLimits

0x08dc,	// (0x0003c53d) text_title_cp2_ParamLimits

0xbe63,	// (0x00047ac4) aid_hotspot_pointer_text2_pane

0xbe89,	// (0x00047aea) main_viewer_pane_g9_ParamLimits

0xbe89,	// (0x00047aea) main_viewer_pane_g9

0x1495,	// (0x0003d0f6) cale_month_pane_t1_ParamLimits

0x14d2,	// (0x0003d133) bg_cale_pane_ParamLimits

0x14ea,	// (0x0003d14b) list_cale_pane_ParamLimits

0x10f8,	// (0x0003cd59) listscroll_cale_day_pane_t1

0x14fb,	// (0x0003d15c) scroll_pane_cp09_ParamLimits

0x5459,	// (0x000410ba) main_mup_eq_pane_t1_ParamLimits

0x5459,	// (0x000410ba) main_mup_eq_pane_t1

0x5473,	// (0x000410d4) main_mup_eq_pane_t2_ParamLimits

0x5473,	// (0x000410d4) main_mup_eq_pane_t2

0x548d,	// (0x000410ee) main_mup_eq_pane_t3_ParamLimits

0x548d,	// (0x000410ee) main_mup_eq_pane_t3

0x54a9,	// (0x0004110a) main_mup_eq_pane_t4_ParamLimits

0x54a9,	// (0x0004110a) main_mup_eq_pane_t4

0x54c5,	// (0x00041126) main_mup_eq_pane_t5_ParamLimits

0x54c5,	// (0x00041126) main_mup_eq_pane_t5

0x54e1,	// (0x00041142) main_mup_eq_pane_t6_ParamLimits

0x54e1,	// (0x00041142) main_mup_eq_pane_t6

0x54f5,	// (0x00041156) main_mup_eq_pane_t7_ParamLimits

0x54f5,	// (0x00041156) main_mup_eq_pane_t7

0x5509,	// (0x0004116a) main_mup_eq_pane_t8_ParamLimits

0x5509,	// (0x0004116a) main_mup_eq_pane_t8

0x551d,	// (0x0004117e) main_mup_eq_pane_t9_ParamLimits

0x551d,	// (0x0004117e) main_mup_eq_pane_t9

0x5537,	// (0x00041198) main_mup_eq_pane_t10_ParamLimits

0x5537,	// (0x00041198) main_mup_eq_pane_t10

0x0009,

0xf4bc,	// (0x0004b11d) main_mup_eq_pane_t_ParamLimits

0xf4bc,	// (0x0004b11d) main_mup_eq_pane_t

0x55e6,	// (0x00041247) mup_equalizer_pane_cp5_ParamLimits

0x55fa,	// (0x0004125b) mup_equalizer_pane_cp6_ParamLimits

0x560e,	// (0x0004126f) mup_equalizer_pane_cp7_ParamLimits

0x081d,	// (0x0003c47e) main_gallery_pane

0xc2ed,	// (0x00047f4e) smil2_volume_pane

0xc2f5,	// (0x00047f56) smil_status_volume_pane_g1_ParamLimits

0xc308,	// (0x00047f69) smil_status_volume_pane_g2_ParamLimits

0xc31b,	// (0x00047f7c) smil_status_volume_pane_g3_ParamLimits

0xf672,	// (0x0004b2d3) smil_status_volume_pane_g_ParamLimits

0xc519,	// (0x0004817a) bg_popup_window_pane_cp07_ParamLimits

0xc527,	// (0x00048188) blid_firmament_pane

0x7b97,	// (0x000437f8) aid_size_cell_gallery_ParamLimits

0x7b97,	// (0x000437f8) aid_size_cell_gallery

0x7bad,	// (0x0004380e) grid_gallery_pane_ParamLimits

0x7bad,	// (0x0004380e) grid_gallery_pane

0x7bc6,	// (0x00043827) cell_gallery_pane_ParamLimits

0x7bc6,	// (0x00043827) cell_gallery_pane

0xc64a,	// (0x000482ab) bg_cell_gallery_focus_pane_ParamLimits

0xc64a,	// (0x000482ab) bg_cell_gallery_focus_pane

0xc65c,	// (0x000482bd) cell_gallery_pane_g1_ParamLimits

0xc65c,	// (0x000482bd) cell_gallery_pane_g1

0x7c0f,	// (0x00043870) cell_gallery_pane_g2_ParamLimits

0x7c0f,	// (0x00043870) cell_gallery_pane_g2

0x7c1c,	// (0x0004387d) cell_gallery_pane_g3_ParamLimits

0x7c1c,	// (0x0004387d) cell_gallery_pane_g3

0xc668,	// (0x000482c9) cell_gallery_pane_g4_ParamLimits

0xc668,	// (0x000482c9) cell_gallery_pane_g4

0x0003,

0xf720,	// (0x0004b381) cell_gallery_pane_g_ParamLimits

0xf720,	// (0x0004b381) cell_gallery_pane_g

0xc674,	// (0x000482d5) bg_cell_gallery_focus_pane_g1

0xc67c,	// (0x000482dd) bg_cell_gallery_focus_pane_g2

0xc684,	// (0x000482e5) bg_cell_gallery_focus_pane_g3

0xc68c,	// (0x000482ed) bg_cell_gallery_focus_pane_g4

0xc694,	// (0x000482f5) bg_cell_gallery_focus_pane_g5

0xc69c,	// (0x000482fd) bg_cell_gallery_focus_pane_g6

0xc6a4,	// (0x00048305) bg_cell_gallery_focus_pane_g7

0xc6ac,	// (0x0004830d) bg_cell_gallery_focus_pane_g8

0x0007,

0xf729,	// (0x0004b38a) bg_cell_gallery_focus_pane_g

0xc6b4,	// (0x00048315) aid_firma_cardinal

0xc6c8,	// (0x00048329) blid_firmament_pane_t1

0xc6df,	// (0x00048340) blid_firmament_pane_t2

0xc6f6,	// (0x00048357) blid_firmament_pane_t3

0xc70d,	// (0x0004836e) blid_firmament_pane_t4

0x0003,

0xf73a,	// (0x0004b39b) blid_firmament_pane_t

0xc724,	// (0x00048385) blid_sat_info_pane

0xc734,	// (0x00048395) blid_sat_info_pane_g1

0xc734,	// (0x00048395) blid_sat_info_pane_g2

0x0001,

0xf743,	// (0x0004b3a4) blid_sat_info_pane_g

0xc73e,	// (0x0004839f) blid_sat_info_pane_t1

0xc74c,	// (0x000483ad) smil2_volume_content_pane

0xc755,	// (0x000483b6) smil2_volume_pane_g1

0xc75d,	// (0x000483be) smil2_volume_content_pane_g1

0xc766,	// (0x000483c7) smil2_volume_content_pane_g2

0xc76f,	// (0x000483d0) smil2_volume_content_pane_g3

0xc778,	// (0x000483d9) smil2_volume_content_pane_g4

0xc781,	// (0x000483e2) smil2_volume_content_pane_g5

0xc78a,	// (0x000483eb) smil2_volume_content_pane_g6

0xc793,	// (0x000483f4) smil2_volume_content_pane_g7

0xc79c,	// (0x000483fd) smil2_volume_content_pane_g8

0xc7a5,	// (0x00048406) smil2_volume_content_pane_g9

0xc7ae,	// (0x0004840f) smil2_volume_content_pane_g10

0x0009,

0xf748,	// (0x0004b3a9) smil2_volume_content_pane_g

0x3b94,	// (0x0003f7f5) cale_week_day_heading_pane_t1_ParamLimits

0x3bc1,	// (0x0003f822) cale_week_day_heading_pane_t2_ParamLimits

0x3bee,	// (0x0003f84f) cale_week_day_heading_pane_t3_ParamLimits

0x3c1b,	// (0x0003f87c) cale_week_day_heading_pane_t4_ParamLimits

0x3c48,	// (0x0003f8a9) cale_week_day_heading_pane_t5_ParamLimits

0x3c75,	// (0x0003f8d6) cale_week_day_heading_pane_t6_ParamLimits

0x3ca2,	// (0x0003f903) cale_week_day_heading_pane_t7_ParamLimits

0xf234,	// (0x0004ae95) cale_week_day_heading_pane_t_ParamLimits

0x110a,	// (0x0003cd6b) bg_cale_side_pane_ParamLimits

0x3ccf,	// (0x0003f930) cale_week_time_pane_t1_ParamLimits

0x3ce7,	// (0x0003f948) cale_week_time_pane_t2_ParamLimits

0x3cff,	// (0x0003f960) cale_week_time_pane_t3_ParamLimits

0x3d17,	// (0x0003f978) cale_week_time_pane_t4_ParamLimits

0x3d2f,	// (0x0003f990) cale_week_time_pane_t5_ParamLimits

0x3d47,	// (0x0003f9a8) cale_week_time_pane_t6_ParamLimits

0x3d5f,	// (0x0003f9c0) cale_week_time_pane_t7_ParamLimits

0x3d77,	// (0x0003f9d8) cale_week_time_pane_t8_ParamLimits

0xf243,	// (0x0004aea4) cale_week_time_pane_t_ParamLimits

0x3d8f,	// (0x0003f9f0) cell_cale_week_pane_g2_ParamLimits

0x110a,	// (0x0003cd6b) bg_cale_side_pane_cp01_ParamLimits

0x4b0e,	// (0x0004076f) cale_month_week_pane_t1_ParamLimits

0x4b25,	// (0x00040786) cale_month_week_pane_t2_ParamLimits

0x4b3c,	// (0x0004079d) cale_month_week_pane_t3_ParamLimits

0x4b53,	// (0x000407b4) cale_month_week_pane_t4_ParamLimits

0x4b6a,	// (0x000407cb) cale_month_week_pane_t5_ParamLimits

0x4b81,	// (0x000407e2) cale_month_week_pane_t6_ParamLimits

0xf31c,	// (0x0004af7d) cale_month_week_pane_t_ParamLimits

0xbd2b,	// (0x0004798c) cell_cale_month_pane_g1_ParamLimits

0x081d,	// (0x0003c47e) main_cale_event_viewer_pane

0x081d,	// (0x0003c47e) listscroll_cale_event_viewer_pane

0xc7b7,	// (0x00048418) list_cale_ev_pane

0xc7bf,	// (0x00048420) scroll_pane_cp023

0xc7cb,	// (0x0004842c) field_cale_ev_pane_ParamLimits

0xc7cb,	// (0x0004842c) field_cale_ev_pane

0xc7e9,	// (0x0004844a) field_cale_ev_content_pane_ParamLimits

0xc7e9,	// (0x0004844a) field_cale_ev_content_pane

0xc7f5,	// (0x00048456) field_cale_ev_pane_g1_ParamLimits

0xc7f5,	// (0x00048456) field_cale_ev_pane_g1

0xc801,	// (0x00048462) field_cale_ev_pane_g2_ParamLimits

0xc801,	// (0x00048462) field_cale_ev_pane_g2

0xc819,	// (0x0004847a) field_cale_ev_pane_g3_ParamLimits

0xc819,	// (0x0004847a) field_cale_ev_pane_g3

0x0002,

0xf75d,	// (0x0004b3be) field_cale_ev_pane_g_ParamLimits

0xf75d,	// (0x0004b3be) field_cale_ev_pane_g

0xc831,	// (0x00048492) field_cale_ev_pane_t1_ParamLimits

0xc831,	// (0x00048492) field_cale_ev_pane_t1

0xc848,	// (0x000484a9) field_cale_ev_content_pane_t1_ParamLimits

0xc848,	// (0x000484a9) field_cale_ev_content_pane_t1

0x56b8,	// (0x00041319) bg_button_pane_cp01

0x0fca,	// (0x0003cc2b) listscroll_cale_week_pane_ParamLimits

0x39c0,	// (0x0003f621) popup_toolbar_window_cp01

0x10f8,	// (0x0003cd59) listscroll_cale_week_pane_t1_ParamLimits

0x0fca,	// (0x0003cc2b) listscroll_cale_day_pane_ParamLimits

0x4cb4,	// (0x00040915) popup_toolbar_window_cp02

0x10f8,	// (0x0003cd59) listscroll_cale_day_pane_t1_ParamLimits

0x0fca,	// (0x0003cc2b) main_cale_month_pane_ParamLimits

0x7143,	// (0x00042da4) popup_toolbar_window_cp03_ParamLimits

0x7143,	// (0x00042da4) popup_toolbar_window_cp03

0x5a18,	// (0x00041679) main_image_pane_g2_ParamLimits

0x5a18,	// (0x00041679) main_image_pane_g2

0x5a29,	// (0x0004168a) main_image_pane_g3_ParamLimits

0x5a29,	// (0x0004168a) main_image_pane_g3

0x0002,

0xf54e,	// (0x0004b1af) main_image_pane_g_ParamLimits

0xf54e,	// (0x0004b1af) main_image_pane_g

0x5a3a,	// (0x0004169b) main_image_pane_t1_ParamLimits

0x5a51,	// (0x000416b2) main_image_pane_t2_ParamLimits

0x5a51,	// (0x000416b2) main_image_pane_t2

0x5a63,	// (0x000416c4) main_image_pane_t3_ParamLimits

0x5a63,	// (0x000416c4) main_image_pane_t3

0x5a8b,	// (0x000416ec) main_image_pane_t4_ParamLimits

0x5a8b,	// (0x000416ec) main_image_pane_t4

0x0003,

0xf555,	// (0x0004b1b6) main_image_pane_t_ParamLimits

0xf555,	// (0x0004b1b6) main_image_pane_t

0x5aab,	// (0x0004170c) popup_image_details_window_cp01

0x5ab5,	// (0x00041716) popup_toobar_trans_pane_cp01_ParamLimits

0x5ab5,	// (0x00041716) popup_toobar_trans_pane_cp01

0x6fee,	// (0x00042c4f) popup_image_details_window_ParamLimits

0x6fee,	// (0x00042c4f) popup_image_details_window

0xc24e,	// (0x00047eaf) popup_image_focus_window

0x7409,	// (0x0004306a) camera2_autofocus_pane_ParamLimits

0x7409,	// (0x0004306a) camera2_autofocus_pane

0x081d,	// (0x0003c47e) bg_popup_sub_pane_cp06

0xc866,	// (0x000484c7) popup_image_focus_window_g1

0xc86e,	// (0x000484cf) popup_image_focus_window_g2

0xc876,	// (0x000484d7) popup_image_focus_window_g3

0xc87e,	// (0x000484df) popup_image_focus_window_g4

0x0003,

0xf764,	// (0x0004b3c5) popup_image_focus_window_g

0xc886,	// (0x000484e7) popup_image_focus_window_t1

0xc894,	// (0x000484f5) popup_image_focus_window_t2

0xc8a4,	// (0x00048505) popup_image_focus_window_t3

0x0002,

0xf76d,	// (0x0004b3ce) popup_image_focus_window_t

0xc8b2,	// (0x00048513) camera2_autofocus_pane_g1

0x1ad7,	// (0x0003d738) bg_tb_trans_pane_cp01

0xc8c0,	// (0x00048521) popup_image_details_window_g1

0xc8d3,	// (0x00048534) popup_image_details_window_g2

0x0002,

0xf77f,	// (0x0004b3e0) popup_image_details_window_g

0xc8fc,	// (0x0004855d) popup_image_details_window_t1

0xc90e,	// (0x0004856f) popup_image_details_window_t2

0xc927,	// (0x00048588) popup_image_details_window_t3

0xc93b,	// (0x0004859c) popup_image_details_window_t4

0xc956,	// (0x000485b7) popup_image_details_window_t5

0x0004,

0xf786,	// (0x0004b3e7) popup_image_details_window_t

0x0fb6,	// (0x0003cc17) bg_calc_paper_pane_ParamLimits

0x081d,	// (0x0003c47e) grid_highlight_pane_cp013

0xbb71,	// (0x000477d2) list_calc_pane_ParamLimits

0xbb83,	// (0x000477e4) scroll_pane_cp024

0x0fca,	// (0x0003cc2b) bg_calc_display_pane_ParamLimits

0x37ff,	// (0x0003f460) calc_display_pane_t1_ParamLimits

0x3811,	// (0x0003f472) calc_display_pane_t2_ParamLimits

0xbb8b,	// (0x000477ec) calc_display_pane_t3_ParamLimits

0xf1b6,	// (0x0004ae17) calc_display_pane_t_ParamLimits

0x38cb,	// (0x0003f52c) cell_calc_pane_g2

0x0001,

0xf1d3,	// (0x0004ae34) cell_calc_pane_g

0x38d4,	// (0x0003f535) cell_calc_pane_t1

0x1029,	// (0x0003cc8a) grid_highlight_pane_cp02_ParamLimits

0x103f,	// (0x0003cca0) toolbar_button_pane_cp01_ParamLimits

0x103f,	// (0x0003cca0) toolbar_button_pane_cp01

0x5af7,	// (0x00041758) temp_image_control_pane_ParamLimits

0x5af7,	// (0x00041758) temp_image_control_pane

0x1ad7,	// (0x0003d738) main_mp3_pane

0xc970,	// (0x000485d1) temp_image_control_pane_g1_ParamLimits

0xc970,	// (0x000485d1) temp_image_control_pane_g1

0xc97e,	// (0x000485df) temp_image_control_pane_g2_ParamLimits

0xc97e,	// (0x000485df) temp_image_control_pane_g2

0xc990,	// (0x000485f1) temp_image_control_pane_g3_ParamLimits

0xc990,	// (0x000485f1) temp_image_control_pane_g3

0x7c59,	// (0x000438ba) temp_image_control_pane_g4_ParamLimits

0x7c59,	// (0x000438ba) temp_image_control_pane_g4

0x0003,

0xf791,	// (0x0004b3f2) temp_image_control_pane_g_ParamLimits

0xf791,	// (0x0004b3f2) temp_image_control_pane_g

0xc970,	// (0x000485d1) main_mp3_pane_g1

0x7c6c,	// (0x000438cd) main_mp3_pane_g2

0x0007,

0xf79a,	// (0x0004b3fb) main_mp3_pane_g

0xc9d3,	// (0x00048634) main_mp3_pane_t1

0x116f,	// (0x0003cdd0) main_camera_pane_g8_ParamLimits

0x116f,	// (0x0003cdd0) main_camera_pane_g8

0x4049,	// (0x0003fcaa) main_video_pane_g7_ParamLimits

0x4049,	// (0x0003fcaa) main_video_pane_g7

0xc35b,	// (0x00047fbc) main_camera2_pane_t7_ParamLimits

0xc35b,	// (0x00047fbc) main_camera2_pane_t7

0x12bd,	// (0x0003cf1e) scroll_pane_cp025_ParamLimits

0x12bd,	// (0x0003cf1e) scroll_pane_cp025

0x12d1,	// (0x0003cf32) scroll_pane_cp026_ParamLimits

0x12d1,	// (0x0003cf32) scroll_pane_cp026

0x12e0,	// (0x0003cf41) wml_content_pane_ParamLimits

0x081d,	// (0x0003c47e) main_touch_calib_pane

0x7d35,	// (0x00043996) main_touch_calib_pane_g1

0x7d41,	// (0x000439a2) main_touch_calib_pane_g2

0x7d4d,	// (0x000439ae) main_touch_calib_pane_g3

0x7d59,	// (0x000439ba) main_touch_calib_pane_g4

0x0003,

0xf7b8,	// (0x0004b419) main_touch_calib_pane_g

0x7d65,	// (0x000439c6) main_touch_calib_pane_t1

0x7d7f,	// (0x000439e0) main_touch_calib_pane_t2

0x0004,

0xf7c1,	// (0x0004b422) main_touch_calib_pane_t

0x19e4,	// (0x0003d645) mup_progress_pane_cp02

0x1a03,	// (0x0003d664) navi_pane_g1

0x1a65,	// (0x0003d6c6) navi_pane_mp_t3

0x1ad7,	// (0x0003d738) main_mp3_pane_ParamLimits

0x7181,	// (0x00042de2) navi_pane_ParamLimits

0xc970,	// (0x000485d1) main_mp3_pane_g1_ParamLimits

0x7c6c,	// (0x000438cd) main_mp3_pane_g2_ParamLimits

0x7c7a,	// (0x000438db) main_mp3_pane_g3_ParamLimits

0x7c7a,	// (0x000438db) main_mp3_pane_g3

0x7c88,	// (0x000438e9) main_mp3_pane_g4_ParamLimits

0x7c88,	// (0x000438e9) main_mp3_pane_g4

0xc9a0,	// (0x00048601) main_mp3_pane_g5_ParamLimits

0xc9a0,	// (0x00048601) main_mp3_pane_g5

0xc9ae,	// (0x0004860f) main_mp3_pane_g6_ParamLimits

0xc9ae,	// (0x0004860f) main_mp3_pane_g6

0xc9bb,	// (0x0004861c) main_mp3_pane_g7_ParamLimits

0xc9bb,	// (0x0004861c) main_mp3_pane_g7

0xc9c7,	// (0x00048628) main_mp3_pane_g8_ParamLimits

0xc9c7,	// (0x00048628) main_mp3_pane_g8

0xf79a,	// (0x0004b3fb) main_mp3_pane_g_ParamLimits

0x7c94,	// (0x000438f5) main_mp3_pane_t2

0x7ca2,	// (0x00043903) main_mp3_pane_t3

0xc9e1,	// (0x00048642) main_mp3_pane_t4

0xc9ef,	// (0x00048650) main_mp3_pane_t5

0x0005,

0xf7ab,	// (0x0004b40c) main_mp3_pane_t

0xc9fd,	// (0x0004865e) mup_progress_pane_cp01

0xbb61,	// (0x000477c2) aid_zoom_text_secondary2

0xc7b7,	// (0x00048418) list_cale_ev2_pane

0xc7bf,	// (0x00048420) scroll_pane_cp023_ParamLimits

0x7dd5,	// (0x00043a36) field_cale_ev2_pane_ParamLimits

0x7dd5,	// (0x00043a36) field_cale_ev2_pane

0xca05,	// (0x00048666) field_cale_ev2_pane_g1_ParamLimits

0xca05,	// (0x00048666) field_cale_ev2_pane_g1

0xca11,	// (0x00048672) field_cale_ev2_pane_g2_ParamLimits

0xca11,	// (0x00048672) field_cale_ev2_pane_g2

0xca29,	// (0x0004868a) field_cale_ev2_pane_g3_ParamLimits

0xca29,	// (0x0004868a) field_cale_ev2_pane_g3

0x0003,

0xf7cc,	// (0x0004b42d) field_cale_ev2_pane_g_ParamLimits

0xf7cc,	// (0x0004b42d) field_cale_ev2_pane_g

0x2aac,	// (0x0003e70d) field_cale_ev2_pane_t1_ParamLimits

0x2aac,	// (0x0003e70d) field_cale_ev2_pane_t1

0x2ac3,	// (0x0003e724) field_cale_ev2_pane_t2_ParamLimits

0x2ac3,	// (0x0003e724) field_cale_ev2_pane_t2

0x0001,

0xf7d5,	// (0x0004b436) field_cale_ev2_pane_t_ParamLimits

0xf7d5,	// (0x0004b436) field_cale_ev2_pane_t

0x57e7,	// (0x00041448) main_postcard_pane_g5_ParamLimits

0x57e7,	// (0x00041448) main_postcard_pane_g5

0x57fd,	// (0x0004145e) main_postcard_pane_g6_ParamLimits

0x57fd,	// (0x0004145e) main_postcard_pane_g6

0x3e09,	// (0x0003fa6a) camera2_autofocus_pane_cp_ParamLimits

0x3e09,	// (0x0003fa6a) camera2_autofocus_pane_cp

0x1ad7,	// (0x0003d738) main_mup3_pane

0x7e15,	// (0x00043a76) main_mup3_pane_g1_ParamLimits

0x7e15,	// (0x00043a76) main_mup3_pane_g1

0x7e37,	// (0x00043a98) main_mup3_pane_g2_ParamLimits

0x7e37,	// (0x00043a98) main_mup3_pane_g2

0x7eb5,	// (0x00043b16) main_mup3_pane_g3_ParamLimits

0x7eb5,	// (0x00043b16) main_mup3_pane_g3

0x7ef7,	// (0x00043b58) main_mup3_pane_g4_ParamLimits

0x7ef7,	// (0x00043b58) main_mup3_pane_g4

0x7f39,	// (0x00043b9a) main_mup3_pane_g5_ParamLimits

0x7f39,	// (0x00043b9a) main_mup3_pane_g5

0x7f7b,	// (0x00043bdc) main_mup3_pane_g6_ParamLimits

0x7f7b,	// (0x00043bdc) main_mup3_pane_g6

0xca4d,	// (0x000486ae) main_mup3_pane_g7_ParamLimits

0xca4d,	// (0x000486ae) main_mup3_pane_g7

0x0007,

0xf7e5,	// (0x0004b446) main_mup3_pane_g_ParamLimits

0xf7e5,	// (0x0004b446) main_mup3_pane_g

0x7ff5,	// (0x00043c56) main_mup3_pane_t1_ParamLimits

0x7ff5,	// (0x00043c56) main_mup3_pane_t1

0x8065,	// (0x00043cc6) main_mup3_pane_t2_ParamLimits

0x8065,	// (0x00043cc6) main_mup3_pane_t2

0x8135,	// (0x00043d96) main_mup3_pane_t4_ParamLimits

0x8135,	// (0x00043d96) main_mup3_pane_t4

0x818b,	// (0x00043dec) main_mup3_pane_t5_ParamLimits

0x818b,	// (0x00043dec) main_mup3_pane_t5

0x823f,	// (0x00043ea0) main_mup3_pane_t6_ParamLimits

0x823f,	// (0x00043ea0) main_mup3_pane_t6

0x0005,

0xf7f6,	// (0x0004b457) main_mup3_pane_t_ParamLimits

0xf7f6,	// (0x0004b457) main_mup3_pane_t

0x82f3,	// (0x00043f54) mup3_progress_pane_ParamLimits

0x82f3,	// (0x00043f54) mup3_progress_pane

0x8375,	// (0x00043fd6) popup_mup3_control_window_ParamLimits

0x8375,	// (0x00043fd6) popup_mup3_control_window

0xca5b,	// (0x000486bc) popup_mup3_text_window

0x83a7,	// (0x00044008) mup3_progress_pane_t1

0x83be,	// (0x0004401f) mup3_progress_pane_t2

0xca63,	// (0x000486c4) mup3_progress_pane_t3

0x0002,

0xf803,	// (0x0004b464) mup3_progress_pane_t

0xca7a,	// (0x000486db) mup_progress_pane_cp03

0x081d,	// (0x0003c47e) bg_tb_trans_pane_cp04

0x83d5,	// (0x00044036) mup3_volume_pane

0x83dd,	// (0x0004403e) popup_mup3_control_window_g1

0x83e6,	// (0x00044047) mup3_volume_pane_g1

0x83ef,	// (0x00044050) mup3_volume_pane_g2

0x83f8,	// (0x00044059) mup3_volume_pane_g3

0x0002,

0xf80a,	// (0x0004b46b) mup3_volume_pane_g

0x081d,	// (0x0003c47e) bg_tb_trans_pane_cp03

0xca8a,	// (0x000486eb) popup_mup3_text_window_g1

0xca92,	// (0x000486f3) popup_mup3_text_window_t1

0x1012,	// (0x0003cc73) list_calc_item_pane_g1_ParamLimits

0xc443,	// (0x000480a4) mup_volume_pane_cp_g1

0x7d99,	// (0x000439fa) main_touch_calib_pane_t3

0x7dad,	// (0x00043a0e) main_touch_calib_pane_t4

0x7dc1,	// (0x00043a22) main_touch_calib_pane_t5

0x0827,	// (0x0003c488) aid_cell_size_toolbar2

0x082f,	// (0x0003c490) aid_popup3_width_pane

0xbb59,	// (0x000477ba) aid_zoom_text_msg_primary

0xbc4b,	// (0x000478ac) vorec_t7

0x0fd6,	// (0x0003cc37) bg_calc_paper_pane_g1_ParamLimits

0x0fe2,	// (0x0003cc43) bg_calc_paper_pane_g2_ParamLimits

0x0fee,	// (0x0003cc4f) bg_calc_paper_pane_g3_ParamLimits

0x0ffa,	// (0x0003cc5b) bg_calc_paper_pane_g4_ParamLimits

0x1006,	// (0x0003cc67) bg_calc_paper_pane_g5_ParamLimits

0x3858,	// (0x0003f4b9) bg_calc_paper_pane_g6_ParamLimits

0x3867,	// (0x0003f4c8) bg_calc_paper_pane_g7_ParamLimits

0x3876,	// (0x0003f4d7) bg_calc_paper_pane_g8_ParamLimits

0xf1bd,	// (0x0004ae1e) bg_calc_paper_pane_g_ParamLimits

0x3889,	// (0x0003f4ea) calc_bg_paper_pane_g9_ParamLimits

0x3f57,	// (0x0003fbb8) image_qvga_pane_ParamLimits

0x3f57,	// (0x0003fbb8) image_qvga_pane

0x0ef3,	// (0x0003cb54) bg_popup_sub_pane_cp04_ParamLimits

0x5976,	// (0x000415d7) popup_mup_playback_window_g1_ParamLimits

0x5982,	// (0x000415e3) popup_mup_playback_window_t1_ParamLimits

0x5997,	// (0x000415f8) popup_mup_playback_window_t2_ParamLimits

0xf549,	// (0x0004b1aa) popup_mup_playback_window_t_ParamLimits

0x78fc,	// (0x0004355d) main_mup2_pane_g3_ParamLimits

0x78fc,	// (0x0004355d) main_mup2_pane_g3

0x420b,	// (0x0003fe6c) popup_toolbar_window_cp04

0x6179,	// (0x00041dda) popup_call2_audio_second_window_g3_ParamLimits

0x6179,	// (0x00041dda) popup_call2_audio_second_window_g3

0x6583,	// (0x000421e4) popup_call2_audio_first_window_g4_ParamLimits

0x6583,	// (0x000421e4) popup_call2_audio_first_window_g4

0xbecd,	// (0x00047b2e) popup_call2_audio_in_window_g4_ParamLimits

0xbecd,	// (0x00047b2e) popup_call2_audio_in_window_g4

0x59ac,	// (0x0004160d) aid_area_sk_bg_cut_ParamLimits

0x59ac,	// (0x0004160d) aid_area_sk_bg_cut

0x59ca,	// (0x0004162b) aid_area_sk_bg_cut_2_ParamLimits

0x59ca,	// (0x0004162b) aid_area_sk_bg_cut_2

0x7bff,	// (0x00043860) aid_placing_details_win

0x7c07,	// (0x00043868) aid_placing_details_win_2

0xc8b2,	// (0x00048513) camera2_autofocus_pane_g1_ParamLimits

0x3478,	// (0x0003f0d9) popup_fixed_preview_cale_window_ParamLimits

0x3478,	// (0x0003f0d9) popup_fixed_preview_cale_window

0x1ab4,	// (0x0003d715) navi_slider_pane_g3

0x1abd,	// (0x0003d71e) navi_slider_pane_g4

0x1ac6,	// (0x0003d727) navi_slider_pane_g5

0x1ab4,	// (0x0003d715) navi_slider_pane_g6

0xbe4a,	// (0x00047aab) navi_slider_pane_g7

0x562b,	// (0x0004128c) mup_scale_pane_g3

0x5634,	// (0x00041295) mup_scale_pane_g4

0x563d,	// (0x0004129e) mup_scale_pane_g5

0x5646,	// (0x000412a7) mup_scale_pane_g6

0x564f,	// (0x000412b0) mup_scale_pane_g7

0x1ab4,	// (0x0003d715) cams2_slider_pane_g3

0xc4f8,	// (0x00048159) cams2_slider_pane_g4

0xc500,	// (0x00048161) cams2_slider_pane_g5

0x1ab4,	// (0x0003d715) cams2_slider_pane_g6

0xc508,	// (0x00048169) cams2_slider_pane_g7

0xc734,	// (0x00048395) camera2_autofocus_pane_cp_g1

0xcaa0,	// (0x00048701) bg_popup_preview_window_pane_cp02_ParamLimits

0xcaa0,	// (0x00048701) bg_popup_preview_window_pane_cp02

0xcaac,	// (0x0004870d) list_fp_cale_pane_ParamLimits

0xcaac,	// (0x0004870d) list_fp_cale_pane

0xcab8,	// (0x00048719) popup_fixed_preview_cale_window_t1_ParamLimits

0xcab8,	// (0x00048719) popup_fixed_preview_cale_window_t1

0x8401,	// (0x00044062) popup_fixed_preview_cale_window_t2_ParamLimits

0x8401,	// (0x00044062) popup_fixed_preview_cale_window_t2

0x8416,	// (0x00044077) popup_fixed_preview_cale_window_t3_ParamLimits

0x8416,	// (0x00044077) popup_fixed_preview_cale_window_t3

0x0002,

0xf811,	// (0x0004b472) popup_fixed_preview_cale_window_t_ParamLimits

0xf811,	// (0x0004b472) popup_fixed_preview_cale_window_t

0x842b,	// (0x0004408c) list_single_fp_cale_pane_ParamLimits

0x842b,	// (0x0004408c) list_single_fp_cale_pane

0xcad6,	// (0x00048737) list_single_fp_cale_pane_g1_ParamLimits

0xcad6,	// (0x00048737) list_single_fp_cale_pane_g1

0xcae2,	// (0x00048743) list_single_fp_cale_pane_g2_ParamLimits

0xcae2,	// (0x00048743) list_single_fp_cale_pane_g2

0x0002,

0xf818,	// (0x0004b479) list_single_fp_cale_pane_g_ParamLimits

0xf818,	// (0x0004b479) list_single_fp_cale_pane_g

0xcafb,	// (0x0004875c) list_single_fp_cale_pane_t1_ParamLimits

0xcafb,	// (0x0004875c) list_single_fp_cale_pane_t1

0xcb0d,	// (0x0004876e) list_single_fp_cale_pane_t2_ParamLimits

0xcb0d,	// (0x0004876e) list_single_fp_cale_pane_t2

0x0001,

0xf81f,	// (0x0004b480) list_single_fp_cale_pane_t_ParamLimits

0xf81f,	// (0x0004b480) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x081d,	// (0x0003c47e) main_dialer_pane

0x8440,	// (0x000440a1) aid_cell_size_keypad

0x844a,	// (0x000440ab) dialer_ne_pane

0x8452,	// (0x000440b3) grid_dialer_command_1_pane

0x845a,	// (0x000440bb) grid_dialer_command_2_pane

0x8462,	// (0x000440c3) grid_dialer_keypad_pane

0x8474,	// (0x000440d5) bg_popup_call_pane_cp06_ParamLimits

0x8474,	// (0x000440d5) bg_popup_call_pane_cp06

0x8480,	// (0x000440e1) dialer_ne_clear_pane_ParamLimits

0x8480,	// (0x000440e1) dialer_ne_clear_pane

0xcb40,	// (0x000487a1) dialer_ne_pane_g1

0xcb48,	// (0x000487a9) dialer_ne_pane_t1_ParamLimits

0xcb48,	// (0x000487a9) dialer_ne_pane_t1

0x848c,	// (0x000440ed) dialer_ne_pane_t2_ParamLimits

0x848c,	// (0x000440ed) dialer_ne_pane_t2

0x84b6,	// (0x00044117) dialer_ne_pane_t3_ParamLimits

0x84b6,	// (0x00044117) dialer_ne_pane_t3

0x0002,

0xf824,	// (0x0004b485) dialer_ne_pane_t_ParamLimits

0xf824,	// (0x0004b485) dialer_ne_pane_t

0x84e6,	// (0x00044147) dialer_ne_pane_t3_copy1_ParamLimits

0x84e6,	// (0x00044147) dialer_ne_pane_t3_copy1

0x8515,	// (0x00044176) cell_dialer_keypad_pane_ParamLimits

0x8515,	// (0x00044176) cell_dialer_keypad_pane

0x852c,	// (0x0004418d) cell_dialer_command_1_pane_ParamLimits

0x852c,	// (0x0004418d) cell_dialer_command_1_pane

0x8542,	// (0x000441a3) cell_dialer_command_2_pane_ParamLimits

0x8542,	// (0x000441a3) cell_dialer_command_2_pane

0xcb5a,	// (0x000487bb) bg_button_pane_cp02_ParamLimits

0xcb5a,	// (0x000487bb) bg_button_pane_cp02

0x8551,	// (0x000441b2) cell_dialer_keypad_pane_g1_ParamLimits

0x8551,	// (0x000441b2) cell_dialer_keypad_pane_g1

0xcb5a,	// (0x000487bb) bg_button_pane_cp03_ParamLimits

0xcb5a,	// (0x000487bb) bg_button_pane_cp03

0x8565,	// (0x000441c6) cell_dialer_command_1_pane_g1_ParamLimits

0x8565,	// (0x000441c6) cell_dialer_command_1_pane_g1

0xcb66,	// (0x000487c7) bg_button_pane_cp04

0x8579,	// (0x000441da) cell_dialer_command_2_pane_g1

0x1aa3,	// (0x0003d704) bg_button_pane_cp06

0xcb6e,	// (0x000487cf) dialer_ne_clear_pane_g1

0x505f,	// (0x00040cc0) navi_pane_g2

0x508d,	// (0x00040cee) navi_pane_g3

0x0002,

0xf44c,	// (0x0004b0ad) navi_pane_g

0x50b6,	// (0x00040d17) navi_pane_mv_g2

0x50dd,	// (0x00040d3e) navi_pane_mv_g5

0x50e5,	// (0x00040d46) navi_pane_mv_t1

0x0fca,	// (0x0003cc2b) main_clock2_pane

0x85ad,	// (0x0004420e) main_clock2_list_pane_ParamLimits

0x85ad,	// (0x0004420e) main_clock2_list_pane

0x85e3,	// (0x00044244) main_clock2_pane_t1_ParamLimits

0x85e3,	// (0x00044244) main_clock2_pane_t1

0x861f,	// (0x00044280) main_clock2_pane_t2_ParamLimits

0x861f,	// (0x00044280) main_clock2_pane_t2

0x0004,

0xf82b,	// (0x0004b48c) main_clock2_pane_t_ParamLimits

0xf82b,	// (0x0004b48c) main_clock2_pane_t

0x86a9,	// (0x0004430a) popup_clock_analogue_window_cp03_ParamLimits

0x86a9,	// (0x0004430a) popup_clock_analogue_window_cp03

0x86ce,	// (0x0004432f) popup_clock_digital_window_cp02_ParamLimits

0x86ce,	// (0x0004432f) popup_clock_digital_window_cp02

0x873f,	// (0x000443a0) main_clock2_list_single_pane_ParamLimits

0x873f,	// (0x000443a0) main_clock2_list_single_pane

0x1aa3,	// (0x0003d704) list_highlight_pane_cp05

0xcb76,	// (0x000487d7) main_clock2_list_single_pane_t1

0x420b,	// (0x0003fe6c) popup_toolbar_window_cp04_ParamLimits

0x7c29,	// (0x0004388a) camera2_autofocus_pane_g2_ParamLimits

0x7c29,	// (0x0004388a) camera2_autofocus_pane_g2

0x7c35,	// (0x00043896) camera2_autofocus_pane_g3_ParamLimits

0x7c35,	// (0x00043896) camera2_autofocus_pane_g3

0x7c41,	// (0x000438a2) camera2_autofocus_pane_g4_ParamLimits

0x7c41,	// (0x000438a2) camera2_autofocus_pane_g4

0x7c4d,	// (0x000438ae) camera2_autofocus_pane_g5_ParamLimits

0x7c4d,	// (0x000438ae) camera2_autofocus_pane_g5

0x0004,

0xf774,	// (0x0004b3d5) camera2_autofocus_pane_g_ParamLimits

0xf774,	// (0x0004b3d5) camera2_autofocus_pane_g

0x7df5,	// (0x00043a56) camera2_autofocus_pane_cp_g2

0x7dfd,	// (0x00043a5e) camera2_autofocus_pane_cp_g3

0x7e05,	// (0x00043a66) camera2_autofocus_pane_cp_g4

0x7e0d,	// (0x00043a6e) camera2_autofocus_pane_cp_g5

0x0004,

0xf7da,	// (0x0004b43b) camera2_autofocus_pane_cp_g

0x846c,	// (0x000440cd) popup_dialer_spcha_window

0x081d,	// (0x0003c47e) bg_popup_sub_pane_cp07

0xcb84,	// (0x000487e5) list_spcha_pane

0xcb8c,	// (0x000487ed) list_single_spcha_pane_ParamLimits

0xcb8c,	// (0x000487ed) list_single_spcha_pane

0x081d,	// (0x0003c47e) list_highlight_pane_cp06

0xcb9d,	// (0x000487fe) list_single_spcha_pane_t1

0x69ac,	// (0x0004260d) popup_call2_audio_out_window_g4_ParamLimits

0x69ac,	// (0x0004260d) popup_call2_audio_out_window_g4

0x081d,	// (0x0003c47e) main_imed2_pane

0xc256,	// (0x00047eb7) popup_imed_adjust2_window

0x7006,	// (0x00042c67) popup_imed_trans_window_ParamLimits

0x7006,	// (0x00042c67) popup_imed_trans_window

0xc572,	// (0x000481d3) popup_blid_sat_info2_window_t1

0xc580,	// (0x000481e1) popup_blid_sat_info2_window_t2

0x000a,

0xf709,	// (0x0004b36a) popup_blid_sat_info2_window_t

0x87e9,	// (0x0004444a) aid_size_cell_colour_35

0x8809,	// (0x0004446a) aid_size_cell_colour_112

0x8829,	// (0x0004448a) aid_size_cell_effect

0xc22e,	// (0x00047e8f) bg_tb_trans_pane_cp02

0x15f2,	// (0x0003d253) heading_imed_pane

0x8849,	// (0x000444aa) listscroll_imed_pane

0xcbab,	// (0x0004880c) heading_imed_pane_g1

0xcbb3,	// (0x00048814) heading_imed_pane_t1

0xcbc1,	// (0x00048822) grid_imed_colour_35_pane_ParamLimits

0xcbc1,	// (0x00048822) grid_imed_colour_35_pane

0x8855,	// (0x000444b6) grid_imed_effect_pane

0xcbd8,	// (0x00048839) list_imed_aspect_pane

0x886b,	// (0x000444cc) scroll_pane_cp027_ParamLimits

0x886b,	// (0x000444cc) scroll_pane_cp027

0x887c,	// (0x000444dd) cell_imed_effect_pane_ParamLimits

0x887c,	// (0x000444dd) cell_imed_effect_pane

0xcbe0,	// (0x00048841) cell_imed_colour_pane_ParamLimits

0xcbe0,	// (0x00048841) cell_imed_colour_pane

0xcc22,	// (0x00048883) cell_imed_colour_pane_g1_ParamLimits

0xcc22,	// (0x00048883) cell_imed_colour_pane_g1

0xcc33,	// (0x00048894) hgihlgiht_grid_pane_cp016_ParamLimits

0xcc33,	// (0x00048894) hgihlgiht_grid_pane_cp016

0x88a3,	// (0x00044504) cell_imed_effect_pane_g1

0x88ab,	// (0x0004450c) grid_highlight_pane_cp017

0xcc44,	// (0x000488a5) list_imed_single_pane_ParamLimits

0xcc44,	// (0x000488a5) list_imed_single_pane

0x081d,	// (0x0003c47e) list_highlight_pane_cp07

0xcc59,	// (0x000488ba) list_imed_aspect_pane_comp1_t1

0xc22e,	// (0x00047e8f) bg_tb_trans_pane_cp05

0xcc7b,	// (0x000488dc) popup_imed_adjust2_window_g1

0xcca2,	// (0x00048903) popup_imed_adjust2_window_t1

0xccba,	// (0x0004891b) slider_imed_adjust_pane

0xccce,	// (0x0004892f) slider_imed_adjust_pane_g1

0xccde,	// (0x0004893f) slider_imed_adjust_pane_g2

0xccee,	// (0x0004894f) slider_imed_adjust_pane_g3

0xccff,	// (0x00048960) slider_imed_adjust_pane_g4

0x0003,

0xf848,	// (0x0004b4a9) slider_imed_adjust_pane_g

0x88b4,	// (0x00044515) aid_size_cell_clipart2

0x88c0,	// (0x00044521) grid_imed_clipart_pane

0xcd10,	// (0x00048971) scroll_pane_cp031

0x88ca,	// (0x0004452b) cell_imed_clipart_pane_ParamLimits

0x88ca,	// (0x0004452b) cell_imed_clipart_pane

0x88ec,	// (0x0004454d) cell_imed_clipart_pane_g1

0x081d,	// (0x0003c47e) grid_highlight_pane_cp014

0x85c2,	// (0x00044223) main_clock2_pane_g1_ParamLimits

0x85c2,	// (0x00044223) main_clock2_pane_g1

0x86ea,	// (0x0004434b) aid_call2_pane_cp10

0x86fc,	// (0x0004435d) aid_call_pane_cp10

0x19d8,	// (0x0003d639) popup_clock_analogue_window_cp10_g1

0x19d8,	// (0x0003d639) popup_clock_analogue_window_cp10_g2

0x870e,	// (0x0004436f) popup_clock_analogue_window_cp10_g3

0x870e,	// (0x0004436f) popup_clock_analogue_window_cp10_g4

0x19d8,	// (0x0003d639) popup_clock_analogue_window_cp10_g5

0x0004,

0xf836,	// (0x0004b497) popup_clock_analogue_window_cp10_g

0x8720,	// (0x00044381) popup_clock_analogue_window_cp10_t1

0x8751,	// (0x000443b2) clock_digital_number_pane_cp10_ParamLimits

0x8751,	// (0x000443b2) clock_digital_number_pane_cp10

0x8769,	// (0x000443ca) clock_digital_number_pane_cp11_ParamLimits

0x8769,	// (0x000443ca) clock_digital_number_pane_cp11

0x8781,	// (0x000443e2) clock_digital_number_pane_cp12_ParamLimits

0x8781,	// (0x000443e2) clock_digital_number_pane_cp12

0x8799,	// (0x000443fa) clock_digital_number_pane_cp13_ParamLimits

0x8799,	// (0x000443fa) clock_digital_number_pane_cp13

0x87b1,	// (0x00044412) clock_digital_separator_pane_cp10_ParamLimits

0x87b1,	// (0x00044412) clock_digital_separator_pane_cp10

0x87c9,	// (0x0004442a) popup_clock_digital_window_cp02_t1_ParamLimits

0x87c9,	// (0x0004442a) popup_clock_digital_window_cp02_t1

0x0eeb,	// (0x0003cb4c) clock_digital_number_pane_cp10_g1

0x0eeb,	// (0x0003cb4c) clock_digital_number_pane_cp10_g2

0x0001,

0xf851,	// (0x0004b4b2) clock_digital_number_pane_cp10_g

0x0eeb,	// (0x0003cb4c) clock_digital_separator_pane_cp10_g1

0x0eeb,	// (0x0003cb4c) clock_digital_separator_pane_g2_cp10

0x1a73,	// (0x0003d6d4) navi_pane_vded_g4

0x1a7c,	// (0x0003d6dd) navi_pane_vded_g5

0x1a85,	// (0x0003d6e6) navi_pane_vded_t1

0x081d,	// (0x0003c47e) main_vded_pane

0x88f5,	// (0x00044556) main_vded_pane_g1

0x88ff,	// (0x00044560) main_vded_pane_g2

0x8909,	// (0x0004456a) main_vded_pane_g3

0x0002,

0xf856,	// (0x0004b4b7) main_vded_pane_g

0x8913,	// (0x00044574) main_vded_pane_t1

0x8921,	// (0x00044582) main_vded_pane_t2

0x0001,

0xf85d,	// (0x0004b4be) main_vded_pane_t

0x892f,	// (0x00044590) vded_slider_pane

0x8937,	// (0x00044598) vded_video_pane

0xcd18,	// (0x00048979) vded_video_pane_g1

0x893f,	// (0x000445a0) vded_video_pane_g2

0xc734,	// (0x00048395) vded_video_pane_g3

0x0002,

0xf862,	// (0x0004b4c3) vded_video_pane_g

0xcd22,	// (0x00048983) vded_slider_pane_g1

0xc443,	// (0x000480a4) vded_slider_pane_g2

0xcd2b,	// (0x0004898c) vded_slider_pane_g3

0xcd34,	// (0x00048995) vded_slider_pane_g4

0xcd3d,	// (0x0004899e) vded_slider_pane_g5

0x0004,

0xf869,	// (0x0004b4ca) vded_slider_pane_g

0x835d,	// (0x00043fbe) mup3_rocker_pane_ParamLimits

0x835d,	// (0x00043fbe) mup3_rocker_pane

0x8948,	// (0x000445a9) mup3_control_keys_pane_g1

0x8950,	// (0x000445b1) mup3_control_keys_pane_g2

0x8958,	// (0x000445b9) mup3_control_keys_pane_g3

0x8960,	// (0x000445c1) mup3_control_keys_pane_g4

0x0003,

0xf874,	// (0x0004b4d5) mup3_control_keys_pane_g

0x34af,	// (0x0003f110) popup_toolbar2_fixed_window_cp01_ParamLimits

0x34af,	// (0x0003f110) popup_toolbar2_fixed_window_cp01

0x8391,	// (0x00043ff2) popup_toolbar2_fixed_window_cp02_ParamLimits

0x8391,	// (0x00043ff2) popup_toolbar2_fixed_window_cp02

0x62eb,	// (0x00041f4c) popup_call2_audio_second_window_t4_ParamLimits

0x62eb,	// (0x00041f4c) popup_call2_audio_second_window_t4

0x6819,	// (0x0004247a) popup_call2_audio_first_window_t6_ParamLimits

0x6819,	// (0x0004247a) popup_call2_audio_first_window_t6

0x6aaf,	// (0x00042710) popup_call2_audio_out_window_t6_ParamLimits

0x6aaf,	// (0x00042710) popup_call2_audio_out_window_t6

0x081d,	// (0x0003c47e) main_vitu_pane

0x8970,	// (0x000445d1) aid_size_cell_itu_ParamLimits

0x8970,	// (0x000445d1) aid_size_cell_itu

0x1ad7,	// (0x0003d738) bg_popup_window_pane_cp08_ParamLimits

0x1ad7,	// (0x0003d738) bg_popup_window_pane_cp08

0x8986,	// (0x000445e7) field_vitu_entry_pane_ParamLimits

0x8986,	// (0x000445e7) field_vitu_entry_pane

0x899d,	// (0x000445fe) grid_vitu_function_pane_ParamLimits

0x899d,	// (0x000445fe) grid_vitu_function_pane

0x89b8,	// (0x00044619) grid_vitu_itu_pane_ParamLimits

0x89b8,	// (0x00044619) grid_vitu_itu_pane

0x89d6,	// (0x00044637) cell_vitu_itu_pane_ParamLimits

0x89d6,	// (0x00044637) cell_vitu_itu_pane

0x89f8,	// (0x00044659) cell_vitu_function_pane_ParamLimits

0x89f8,	// (0x00044659) cell_vitu_function_pane

0x1ad7,	// (0x0003d738) bg_popup_sub_pane_cp08_ParamLimits

0x1ad7,	// (0x0003d738) bg_popup_sub_pane_cp08

0x8a11,	// (0x00044672) field_vitu_entry_pane_t1_ParamLimits

0x8a11,	// (0x00044672) field_vitu_entry_pane_t1

0xcd5e,	// (0x000489bf) field_vitu_entry_pane_t2_ParamLimits

0xcd5e,	// (0x000489bf) field_vitu_entry_pane_t2

0x0001,

0xf882,	// (0x0004b4e3) field_vitu_entry_pane_t_ParamLimits

0xf882,	// (0x0004b4e3) field_vitu_entry_pane_t

0xcd7b,	// (0x000489dc) bg_button_pane_cp05_ParamLimits

0xcd7b,	// (0x000489dc) bg_button_pane_cp05

0x8a2f,	// (0x00044690) cell_vitu_itu_pane_g1

0x8a47,	// (0x000446a8) cell_vitu_itu_pane_t1_ParamLimits

0x8a47,	// (0x000446a8) cell_vitu_itu_pane_t1

0x8a59,	// (0x000446ba) cell_vitu_itu_pane_t2_ParamLimits

0x8a59,	// (0x000446ba) cell_vitu_itu_pane_t2

0x0002,

0xf887,	// (0x0004b4e8) cell_vitu_itu_pane_t_ParamLimits

0xf887,	// (0x0004b4e8) cell_vitu_itu_pane_t

0xcd89,	// (0x000489ea) bg_button_pane_cp07

0x8a8e,	// (0x000446ef) cell_vitu_function_pane_g1

0xbb69,	// (0x000477ca) main_calc_pane_g1

0x32e5,	// (0x0003ef46) aid_visual_content_pane

0x081d,	// (0x0003c47e) main_vradio_pane

0x8a97,	// (0x000446f8) main_vradio_pane_g1_ParamLimits

0x8a97,	// (0x000446f8) main_vradio_pane_g1

0xcd93,	// (0x000489f4) main_vradio_pane_g2_ParamLimits

0xcd93,	// (0x000489f4) main_vradio_pane_g2

0x0001,

0xf88e,	// (0x0004b4ef) main_vradio_pane_g_ParamLimits

0xf88e,	// (0x0004b4ef) main_vradio_pane_g

0x8ab0,	// (0x00044711) main_vradio_pane_t1_ParamLimits

0x8ab0,	// (0x00044711) main_vradio_pane_t1

0x8ac5,	// (0x00044726) main_vradio_pane_t2_ParamLimits

0x8ac5,	// (0x00044726) main_vradio_pane_t2

0xcda0,	// (0x00048a01) main_vradio_pane_t3_ParamLimits

0xcda0,	// (0x00048a01) main_vradio_pane_t3

0x0002,

0xf893,	// (0x0004b4f4) main_vradio_pane_t_ParamLimits

0xf893,	// (0x0004b4f4) main_vradio_pane_t

0x8ada,	// (0x0004473b) vradio_rocker_control_pane_ParamLimits

0x8ada,	// (0x0004473b) vradio_rocker_control_pane

0x8aec,	// (0x0004474d) vradio_station_info_pane_ParamLimits

0x8aec,	// (0x0004474d) vradio_station_info_pane

0xcdb4,	// (0x00048a15) vradio_frequency_info_pane_ParamLimits

0xcdb4,	// (0x00048a15) vradio_frequency_info_pane

0xc734,	// (0x00048395) vradio_station_info_pane_g1

0xcdc3,	// (0x00048a24) vradio_station_info_pane_t1_ParamLimits

0xcdc3,	// (0x00048a24) vradio_station_info_pane_t1

0xcde5,	// (0x00048a46) vradio_station_info_pane_t2_ParamLimits

0xcde5,	// (0x00048a46) vradio_station_info_pane_t2

0x0001,

0xf89a,	// (0x0004b4fb) vradio_station_info_pane_t_ParamLimits

0xf89a,	// (0x0004b4fb) vradio_station_info_pane_t

0xcdf7,	// (0x00048a58) vradio_tuning_pane

0xcdff,	// (0x00048a60) vradio_rocker_control_pane_g1

0xce07,	// (0x00048a68) vradio_rocker_control_pane_g2

0xce0f,	// (0x00048a70) vradio_rocker_control_pane_g3

0xce17,	// (0x00048a78) vradio_rocker_control_pane_g4

0xce1f,	// (0x00048a80) vradio_rocker_control_pane_g5

0x0004,

0xf89f,	// (0x0004b500) vradio_rocker_control_pane_g

0x8afe,	// (0x0004475f) vradio_frequency_info_pane_g1

0xce27,	// (0x00048a88) vradio_frequency_info_pane_t1_ParamLimits

0xce27,	// (0x00048a88) vradio_frequency_info_pane_t1

0x8b08,	// (0x00044769) vradio_tuning_pane_g1

0x8b13,	// (0x00044774) vradio_tuning_pane_t1

0x0843,	// (0x0003c4a4) area_side_right_pane_ParamLimits

0x0843,	// (0x0003c4a4) area_side_right_pane

0xc1f5,	// (0x00047e56) status_small_pane_g1

0xc1fd,	// (0x00047e5e) status_small_pane_g2

0xc206,	// (0x00047e67) status_small_pane_g3

0xc20f,	// (0x00047e70) status_small_pane_g4

0x0003,

0xf65f,	// (0x0004b2c0) status_small_pane_g

0xc218,	// (0x00047e79) status_small_pane_t1

0x081d,	// (0x0003c47e) main_video3_pane

0xce3b,	// (0x00048a9c) cams_zoom_vslider_pane

0xce43,	// (0x00048aa4) image3_wide_pane_ParamLimits

0xce43,	// (0x00048aa4) image3_wide_pane

0xce5d,	// (0x00048abe) image3_wide_small_pane

0xce69,	// (0x00048aca) main_video3_pane_g1_ParamLimits

0xce69,	// (0x00048aca) main_video3_pane_g1

0xce85,	// (0x00048ae6) main_video3_pane_g2_ParamLimits

0xce85,	// (0x00048ae6) main_video3_pane_g2

0x0001,

0xf8aa,	// (0x0004b50b) main_video3_pane_g_ParamLimits

0xf8aa,	// (0x0004b50b) main_video3_pane_g

0xcea1,	// (0x00048b02) main_video3_pane_t1_ParamLimits

0xcea1,	// (0x00048b02) main_video3_pane_t1

0xcecc,	// (0x00048b2d) main_video3_pane_t2_ParamLimits

0xcecc,	// (0x00048b2d) main_video3_pane_t2

0xcef7,	// (0x00048b58) main_video3_pane_t3_ParamLimits

0xcef7,	// (0x00048b58) main_video3_pane_t3

0x0002,

0xf8af,	// (0x0004b510) main_video3_pane_t_ParamLimits

0xf8af,	// (0x0004b510) main_video3_pane_t

0xcf24,	// (0x00048b85) cams_zoom_vslider_pane_g1

0xcf2d,	// (0x00048b8e) cams_zoom_vslider_pane_g2

0x0001,

0xf8b6,	// (0x0004b517) cams_zoom_vslider_pane_g

0xcf35,	// (0x00048b96) small_slider_vertical_pane

0xc734,	// (0x00048395) small_slider_vertical_pane_g1

0xc734,	// (0x00048395) small_slider_vertical_pane_g2

0xcf3d,	// (0x00048b9e) small_slider_vertical_pane_g3

0x0002,

0xf8bb,	// (0x0004b51c) small_slider_vertical_pane_g

0x081d,	// (0x0003c47e) main_hwr_training_pane

0xcf46,	// (0x00048ba7) hwr_training_instruct_pane_ParamLimits

0xcf46,	// (0x00048ba7) hwr_training_instruct_pane

0x8b22,	// (0x00044783) hwr_training_navi_pane_ParamLimits

0x8b22,	// (0x00044783) hwr_training_navi_pane

0x8b41,	// (0x000447a2) hwr_training_write_pane_ParamLimits

0x8b41,	// (0x000447a2) hwr_training_write_pane

0x081d,	// (0x0003c47e) bg_frame_shadow_pane

0xcf7d,	// (0x00048bde) hwr_training_write_pane_g1

0xcf85,	// (0x00048be6) hwr_training_write_pane_g2

0xcf8d,	// (0x00048bee) hwr_training_write_pane_g3

0xcf95,	// (0x00048bf6) hwr_training_write_pane_g4

0xcf9d,	// (0x00048bfe) hwr_training_write_pane_g5

0xcfa5,	// (0x00048c06) hwr_training_write_pane_g6

0xcfad,	// (0x00048c0e) hwr_training_write_pane_g7

0x0006,

0xf8c2,	// (0x0004b523) hwr_training_write_pane_g

0xeda4,	// (0x0004aa05) hwr_training_navi_pane_g1_ParamLimits

0xeda4,	// (0x0004aa05) hwr_training_navi_pane_g1

0xedb6,	// (0x0004aa17) hwr_training_navi_pane_g2_ParamLimits

0xedb6,	// (0x0004aa17) hwr_training_navi_pane_g2

0xedc8,	// (0x0004aa29) hwr_training_navi_pane_g3_ParamLimits

0xedc8,	// (0x0004aa29) hwr_training_navi_pane_g3

0xedd8,	// (0x0004aa39) hwr_training_navi_pane_g4_ParamLimits

0xedd8,	// (0x0004aa39) hwr_training_navi_pane_g4

0x0004,

0xf8d1,	// (0x0004b532) hwr_training_navi_pane_g_ParamLimits

0xf8d1,	// (0x0004b532) hwr_training_navi_pane_g

0xede5,	// (0x0004aa46) hwr_training_navi_pane_t1

0x8b89,	// (0x000447ea) list_single_hwr_training_instruct_pane_ParamLimits

0x8b89,	// (0x000447ea) list_single_hwr_training_instruct_pane

0xcfb5,	// (0x00048c16) list_single_hwr_training_instruct_pane_t1

0xc674,	// (0x000482d5) bg_frame_shadow_pane_g1

0xcfc4,	// (0x00048c25) bg_frame_shadow_pane_g2

0xcfcc,	// (0x00048c2d) bg_frame_shadow_pane_g3

0xcfd4,	// (0x00048c35) bg_frame_shadow_pane_g4

0xcfdc,	// (0x00048c3d) bg_frame_shadow_pane_g5

0xcfe4,	// (0x00048c45) bg_frame_shadow_pane_g6

0xcfec,	// (0x00048c4d) bg_frame_shadow_pane_g7

0x1083,	// (0x0003cce4) bg_frame_shadow_pane_g8

0x0007,

0xf8dc,	// (0x0004b53d) bg_frame_shadow_pane_g

0x081d,	// (0x0003c47e) main_video_tele_dialer_pane

0x8b9e,	// (0x000447ff) aid_size_cell_video_keypad_ParamLimits

0x8b9e,	// (0x000447ff) aid_size_cell_video_keypad

0x8bb8,	// (0x00044819) grid_video_dialer_keypad_pane_ParamLimits

0x8bb8,	// (0x00044819) grid_video_dialer_keypad_pane

0x8c04,	// (0x00044865) video_down_pane_cp_ParamLimits

0x8c04,	// (0x00044865) video_down_pane_cp

0x8c38,	// (0x00044899) cell_video_dialer_keypad_pane_ParamLimits

0x8c38,	// (0x00044899) cell_video_dialer_keypad_pane

0xcff4,	// (0x00048c55) bg_button_pane_cp08_ParamLimits

0xcff4,	// (0x00048c55) bg_button_pane_cp08

0x8c5a,	// (0x000448bb) cell_video_dialer_keypad_pane_g1_ParamLimits

0x8c5a,	// (0x000448bb) cell_video_dialer_keypad_pane_g1

0x8347,	// (0x00043fa8) mup3_rocker2_pane_ParamLimits

0x8347,	// (0x00043fa8) mup3_rocker2_pane

0xc734,	// (0x00048395) mup3_rocker2_pane_g1

0x6ee7,	// (0x00042b48) main_dialer2_pane

0x081d,	// (0x0003c47e) main_mp4_pane

0xedfb,	// (0x0004aa5c) main_mp4_pane_g1_ParamLimits

0xedfb,	// (0x0004aa5c) main_mp4_pane_g1

0xedfb,	// (0x0004aa5c) main_mp4_pane_g2_ParamLimits

0xedfb,	// (0x0004aa5c) main_mp4_pane_g2

0x8c94,	// (0x000448f5) main_mp4_pane_g3_ParamLimits

0x8c94,	// (0x000448f5) main_mp4_pane_g3

0xee09,	// (0x0004aa6a) main_mp4_pane_g4_ParamLimits

0xee09,	// (0x0004aa6a) main_mp4_pane_g4

0xee23,	// (0x0004aa84) main_mp4_pane_g5_ParamLimits

0xee23,	// (0x0004aa84) main_mp4_pane_g5

0x0005,

0xf8fc,	// (0x0004b55d) main_mp4_pane_g_ParamLimits

0xf8fc,	// (0x0004b55d) main_mp4_pane_g

0xee57,	// (0x0004aab8) main_mp4_pane_t1_ParamLimits

0xee57,	// (0x0004aab8) main_mp4_pane_t1

0xeeb3,	// (0x0004ab14) main_mp4_pane_t2_ParamLimits

0xeeb3,	// (0x0004ab14) main_mp4_pane_t2

0xd000,	// (0x00048c61) main_mp4_pane_t3_ParamLimits

0xd000,	// (0x00048c61) main_mp4_pane_t3

0xef05,	// (0x0004ab66) main_mp4_pane_t4_ParamLimits

0xef05,	// (0x0004ab66) main_mp4_pane_t4

0x0003,

0xf909,	// (0x0004b56a) main_mp4_pane_t_ParamLimits

0xf909,	// (0x0004b56a) main_mp4_pane_t

0xef49,	// (0x0004abaa) mp4_progress_pane_ParamLimits

0xef49,	// (0x0004abaa) mp4_progress_pane

0xef93,	// (0x0004abf4) mp4_rocker_pane_ParamLimits

0xef93,	// (0x0004abf4) mp4_rocker_pane

0xd028,	// (0x00048c89) mp4_progress_pane_t1

0xd041,	// (0x00048ca2) mp4_progress_pane_t2

0x0001,

0xf912,	// (0x0004b573) mp4_progress_pane_t

0xd05a,	// (0x00048cbb) mup_progress_pane_cp04

0xc734,	// (0x00048395) mp4_rocker_pane_g1

0x8cd0,	// (0x00044931) aid_cell_size_keypad2_ParamLimits

0x8cd0,	// (0x00044931) aid_cell_size_keypad2

0x8ce6,	// (0x00044947) dialer2_ne_pane_ParamLimits

0x8ce6,	// (0x00044947) dialer2_ne_pane

0x8d00,	// (0x00044961) grid_dialer2_keypad_pane_ParamLimits

0x8d00,	// (0x00044961) grid_dialer2_keypad_pane

0xc519,	// (0x0004817a) bg_popup_call_pane_cp07_ParamLimits

0xc519,	// (0x0004817a) bg_popup_call_pane_cp07

0x8d1c,	// (0x0004497d) dialer2_ne_pane_t1_ParamLimits

0x8d1c,	// (0x0004497d) dialer2_ne_pane_t1

0x8d57,	// (0x000449b8) cell_dialer2_keypad_pane_ParamLimits

0x8d57,	// (0x000449b8) cell_dialer2_keypad_pane

0xd078,	// (0x00048cd9) bg_button_pane_pane_cp04_ParamLimits

0xd078,	// (0x00048cd9) bg_button_pane_pane_cp04

0x8d79,	// (0x000449da) cell_dialer2_keypad_pane_g1_ParamLimits

0x8d79,	// (0x000449da) cell_dialer2_keypad_pane_g1

0x412d,	// (0x0003fd8e) aid_placing_vt_set_content_ParamLimits

0x412d,	// (0x0003fd8e) aid_placing_vt_set_content

0x4151,	// (0x0003fdb2) aid_placing_vt_set_title_ParamLimits

0x4151,	// (0x0003fdb2) aid_placing_vt_set_title

0x081d,	// (0x0003c47e) main_image3_pane

0x8e3f,	// (0x00044aa0) area_side_right_pane_cp01_ParamLimits

0x8e3f,	// (0x00044aa0) area_side_right_pane_cp01

0xedfb,	// (0x0004aa5c) main_image3_pane_g1_ParamLimits

0xedfb,	// (0x0004aa5c) main_image3_pane_g1

0x8e56,	// (0x00044ab7) main_image3_pane_g2_ParamLimits

0x8e56,	// (0x00044ab7) main_image3_pane_g2

0x8e7e,	// (0x00044adf) main_image3_pane_g3_ParamLimits

0x8e7e,	// (0x00044adf) main_image3_pane_g3

0x8ea8,	// (0x00044b09) main_image3_pane_g4_ParamLimits

0x8ea8,	// (0x00044b09) main_image3_pane_g4

0x0003,

0xf921,	// (0x0004b582) main_image3_pane_g_ParamLimits

0xf921,	// (0x0004b582) main_image3_pane_g

0x8ed2,	// (0x00044b33) main_image3_pane_t1_ParamLimits

0x8ed2,	// (0x00044b33) main_image3_pane_t1

0x8f2a,	// (0x00044b8b) main_image3_pane_t2_ParamLimits

0x8f2a,	// (0x00044b8b) main_image3_pane_t2

0x8f7c,	// (0x00044bdd) main_image3_pane_t3_ParamLimits

0x8f7c,	// (0x00044bdd) main_image3_pane_t3

0x0003,

0xf92a,	// (0x0004b58b) main_image3_pane_t_ParamLimits

0xf92a,	// (0x0004b58b) main_image3_pane_t

0x1ad7,	// (0x0003d738) grid_sctrl_middle_pane_cp01_ParamLimits

0x1ad7,	// (0x0003d738) grid_sctrl_middle_pane_cp01

0x9004,	// (0x00044c65) cell_sctrl_middle_pane_cp01_ParamLimits

0x9004,	// (0x00044c65) cell_sctrl_middle_pane_cp01

0x9021,	// (0x00044c82) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x9021,	// (0x00044c82) cell_sctrl_middle_pane_cp01_g1

0x081d,	// (0x0003c47e) main_call4_pane

0x9037,	// (0x00044c98) aid_size_button_call4_ParamLimits

0x9037,	// (0x00044c98) aid_size_button_call4

0x9068,	// (0x00044cc9) call4_windows_pane_ParamLimits

0x9068,	// (0x00044cc9) call4_windows_pane

0x9088,	// (0x00044ce9) grid_call4_button_pane_ParamLimits

0x9088,	// (0x00044ce9) grid_call4_button_pane

0xd084,	// (0x00048ce5) call4_windows_conf_pane

0xd09b,	// (0x00048cfc) popup_call4_audio_first_window_ParamLimits

0xd09b,	// (0x00048cfc) popup_call4_audio_first_window

0xd0e7,	// (0x00048d48) popup_call4_audio_second_window_ParamLimits

0xd0e7,	// (0x00048d48) popup_call4_audio_second_window

0xd0fb,	// (0x00048d5c) popup_call4_audio_wait_window_ParamLimits

0xd0fb,	// (0x00048d5c) popup_call4_audio_wait_window

0x90b5,	// (0x00044d16) cell_call4_button_pane_ParamLimits

0x90b5,	// (0x00044d16) cell_call4_button_pane

0x90de,	// (0x00044d3f) bg_button_pane_cp09_ParamLimits

0x90de,	// (0x00044d3f) bg_button_pane_cp09

0x90ea,	// (0x00044d4b) cell_call4_button_pane_g1_ParamLimits

0x90ea,	// (0x00044d4b) cell_call4_button_pane_g1

0x9110,	// (0x00044d71) cell_call4_button_pane_t1_ParamLimits

0x9110,	// (0x00044d71) cell_call4_button_pane_t1

0xd143,	// (0x00048da4) popup_call4_audio_conf_window_ParamLimits

0xd143,	// (0x00048da4) popup_call4_audio_conf_window

0x83a7,	// (0x00044008) mup3_progress_pane_t1_ParamLimits

0x83be,	// (0x0004401f) mup3_progress_pane_t2_ParamLimits

0xca63,	// (0x000486c4) mup3_progress_pane_t3_ParamLimits

0xf803,	// (0x0004b464) mup3_progress_pane_t_ParamLimits

0xca7a,	// (0x000486db) mup_progress_pane_cp03_ParamLimits

0x8968,	// (0x000445c9) mup3_control_keys_pane_g4_copy1

0xef77,	// (0x0004abd8) mp4_rocker2_pane_ParamLimits

0xef77,	// (0x0004abd8) mp4_rocker2_pane

0xd157,	// (0x00048db8) mp4_rocker2_pane_g1

0xd15f,	// (0x00048dc0) mp4_rocker2_pane_g2

0xefe5,	// (0x0004ac46) mp4_rocker2_pane_g3

0xefed,	// (0x0004ac4e) mp4_rocker2_pane_g4

0xeff5,	// (0x0004ac56) mp4_rocker2_pane_g5

0x0004,

0xf933,	// (0x0004b594) mp4_rocker2_pane_g

0x081d,	// (0x0003c47e) main_camera4_pane

0x081d,	// (0x0003c47e) main_video4_pane

0x8bd2,	// (0x00044833) main_video_tele_dialer_pane_t1_ParamLimits

0x8bd2,	// (0x00044833) main_video_tele_dialer_pane_t1

0x8beb,	// (0x0004484c) main_video_tele_dialer_pane_t2_ParamLimits

0x8beb,	// (0x0004484c) main_video_tele_dialer_pane_t2

0x0001,

0xf8ed,	// (0x0004b54e) main_video_tele_dialer_pane_t_ParamLimits

0xf8ed,	// (0x0004b54e) main_video_tele_dialer_pane_t

0x914e,	// (0x00044daf) cam4_autofocus_pane_ParamLimits

0x914e,	// (0x00044daf) cam4_autofocus_pane

0x9164,	// (0x00044dc5) cam4_image_uncrop_pane_ParamLimits

0x9164,	// (0x00044dc5) cam4_image_uncrop_pane

0x917e,	// (0x00044ddf) cam4_indicators_pane_ParamLimits

0x917e,	// (0x00044ddf) cam4_indicators_pane

0x91a9,	// (0x00044e0a) main_camera4_pane_g1_ParamLimits

0x91a9,	// (0x00044e0a) main_camera4_pane_g1

0x91b5,	// (0x00044e16) main_camera4_pane_g2_ParamLimits

0x91b5,	// (0x00044e16) main_camera4_pane_g2

0x91c1,	// (0x00044e22) main_camera4_pane_g3_ParamLimits

0x91c1,	// (0x00044e22) main_camera4_pane_g3

0x91cd,	// (0x00044e2e) main_camera4_pane_g4_ParamLimits

0x91cd,	// (0x00044e2e) main_camera4_pane_g4

0x91d9,	// (0x00044e3a) main_camera4_pane_g5_ParamLimits

0x91d9,	// (0x00044e3a) main_camera4_pane_g5

0x0005,

0xf93e,	// (0x0004b59f) main_camera4_pane_g_ParamLimits

0xf93e,	// (0x0004b59f) main_camera4_pane_g

0x91f6,	// (0x00044e57) main_camera4_pane_t1_ParamLimits

0x91f6,	// (0x00044e57) main_camera4_pane_t1

0xca4d,	// (0x000486ae) bg_tb_trans_pane_cp06

0x922e,	// (0x00044e8f) cam4_indicators_pane_g1

0x923b,	// (0x00044e9c) cam4_indicators_pane_g2

0x0002,

0xf950,	// (0x0004b5b1) cam4_indicators_pane_g

0x9253,	// (0x00044eb4) cam4_indicators_pane_t1

0x927d,	// (0x00044ede) main_video4_pane_g1_ParamLimits

0x927d,	// (0x00044ede) main_video4_pane_g1

0x928f,	// (0x00044ef0) main_video4_pane_g2_ParamLimits

0x928f,	// (0x00044ef0) main_video4_pane_g2

0x92a3,	// (0x00044f04) main_video4_pane_g3_ParamLimits

0x92a3,	// (0x00044f04) main_video4_pane_g3

0x92b3,	// (0x00044f14) main_video4_pane_g4_ParamLimits

0x92b3,	// (0x00044f14) main_video4_pane_g4

0x0004,

0xf957,	// (0x0004b5b8) main_video4_pane_g_ParamLimits

0xf957,	// (0x0004b5b8) main_video4_pane_g

0x92d3,	// (0x00044f34) vid4_indicators_pane_ParamLimits

0x92d3,	// (0x00044f34) vid4_indicators_pane

0x9303,	// (0x00044f64) video4_image_uncrop_cif_pane_ParamLimits

0x9303,	// (0x00044f64) video4_image_uncrop_cif_pane

0x931d,	// (0x00044f7e) video4_image_uncrop_nhd_pane_ParamLimits

0x931d,	// (0x00044f7e) video4_image_uncrop_nhd_pane

0x9164,	// (0x00044dc5) video4_image_uncrop_vga_pane_ParamLimits

0x9164,	// (0x00044dc5) video4_image_uncrop_vga_pane

0xd167,	// (0x00048dc8) bg_tb_trans_pane_cp07

0x922e,	// (0x00044e8f) vid4_indicators_pane_g1

0x9331,	// (0x00044f92) vid4_indicators_pane_g2

0x933e,	// (0x00044f9f) vid4_indicators_pane_g3

0x0004,

0xf962,	// (0x0004b5c3) vid4_indicators_pane_g

0x9363,	// (0x00044fc4) vid4_indicators_pane_t1

0x9375,	// (0x00044fd6) cam4_autofocus_pane_g1

0x937d,	// (0x00044fde) cam4_autofocus_pane_g2

0x9385,	// (0x00044fe6) cam4_autofocus_pane_g3

0x0002,

0xf96d,	// (0x0004b5ce) cam4_autofocus_pane_g

0x938d,	// (0x00044fee) cam4_autofocus_pane_g3_copy1

0x8c1c,	// (0x0004487d) video_down_pane_cp_t1

0x8c2a,	// (0x0004488b) video_down_pane_cp_t2

0x0001,

0xf8f2,	// (0x0004b553) video_down_pane_cp_t

0x1ad7,	// (0x0003d738) popup_vitu2_window_ParamLimits

0x1ad7,	// (0x0003d738) popup_vitu2_window

0x9395,	// (0x00044ff6) aid_size_cell2_itu2_ParamLimits

0x9395,	// (0x00044ff6) aid_size_cell2_itu2

0x93bb,	// (0x0004501c) aid_size_cell_itu2_ParamLimits

0x93bb,	// (0x0004501c) aid_size_cell_itu2

0x9417,	// (0x00045078) bg_popup_window_pane_cp09_ParamLimits

0x9417,	// (0x00045078) bg_popup_window_pane_cp09

0x9425,	// (0x00045086) field_vitu2_entry_pane_ParamLimits

0x9425,	// (0x00045086) field_vitu2_entry_pane

0x944b,	// (0x000450ac) grid_vitu2_function_pane_ParamLimits

0x944b,	// (0x000450ac) grid_vitu2_function_pane

0x949c,	// (0x000450fd) grid_vitu2_itu_pane_ParamLimits

0x949c,	// (0x000450fd) grid_vitu2_itu_pane

0x952f,	// (0x00045190) cell_vitu2_itu_pane_ParamLimits

0x952f,	// (0x00045190) cell_vitu2_itu_pane

0x9553,	// (0x000451b4) cell_vitu2_function_pane_ParamLimits

0x9553,	// (0x000451b4) cell_vitu2_function_pane

0xd175,	// (0x00048dd6) bg_popup_call_pane_cp08_ParamLimits

0xd175,	// (0x00048dd6) bg_popup_call_pane_cp08

0xd18e,	// (0x00048def) field_vitu2_entry_pane_g1

0xd19a,	// (0x00048dfb) field_vitu2_entry_pane_g2

0x0002,

0xf974,	// (0x0004b5d5) field_vitu2_entry_pane_g

0x2ad8,	// (0x0003e739) field_vitu2_entry_pane_t1_ParamLimits

0x2ad8,	// (0x0003e739) field_vitu2_entry_pane_t1

0xd1b4,	// (0x00048e15) field_vitu2_entry_pane_t2_ParamLimits

0xd1b4,	// (0x00048e15) field_vitu2_entry_pane_t2

0x0001,

0xf97b,	// (0x0004b5dc) field_vitu2_entry_pane_t_ParamLimits

0xf97b,	// (0x0004b5dc) field_vitu2_entry_pane_t

0x9592,	// (0x000451f3) bg_button_pane_cp010_ParamLimits

0x9592,	// (0x000451f3) bg_button_pane_cp010

0x95a0,	// (0x00045201) cell_vitu2_itu_pane_g1

0x95be,	// (0x0004521f) cell_vitu2_itu_pane_t1_ParamLimits

0x95be,	// (0x0004521f) cell_vitu2_itu_pane_t1

0x2af5,	// (0x0003e756) cell_vitu2_itu_pane_t2_ParamLimits

0x2af5,	// (0x0003e756) cell_vitu2_itu_pane_t2

0x0002,

0xf985,	// (0x0004b5e6) cell_vitu2_itu_pane_t_ParamLimits

0xf985,	// (0x0004b5e6) cell_vitu2_itu_pane_t

0x1ad7,	// (0x0003d738) bg_button_pane_cp011

0x9624,	// (0x00045285) cell_vitu2_function_pane_g1

0x081d,	// (0x0003c47e) main_myfav_hc_pane

0x8fcc,	// (0x00044c2d) popup_image3_note_pane_ParamLimits

0x8fcc,	// (0x00044c2d) popup_image3_note_pane

0x8fe8,	// (0x00044c49) popup_image3_tool_bar_pane_ParamLimits

0x8fe8,	// (0x00044c49) popup_image3_tool_bar_pane

0x2b79,	// (0x0003e7da) cell_vitu2_itu_pane_t3_ParamLimits

0x2b79,	// (0x0003e7da) cell_vitu2_itu_pane_t3

0x081d,	// (0x0003c47e) bg_popup_trans_pane

0xd1d9,	// (0x00048e3a) grid_image3_tool_bar_pane

0xd1e3,	// (0x00048e44) bg_popup_trans_pane_g1

0x13c6,	// (0x0003d027) bg_popup_trans_pane_g2

0xd1eb,	// (0x00048e4c) bg_popup_trans_pane_g3

0xd1f3,	// (0x00048e54) bg_popup_trans_pane_g4

0xd1fb,	// (0x00048e5c) bg_popup_trans_pane_g5

0xd203,	// (0x00048e64) bg_popup_trans_pane_g6

0xd20b,	// (0x00048e6c) bg_popup_trans_pane_g7

0xd213,	// (0x00048e74) bg_popup_trans_pane_g8

0x13a6,	// (0x0003d007) bg_popup_trans_pane_g9

0x0008,

0xf98c,	// (0x0004b5ed) bg_popup_trans_pane_g

0xd21b,	// (0x00048e7c) cell_image3_tool_bar_pane_ParamLimits

0xd21b,	// (0x00048e7c) cell_image3_tool_bar_pane

0xc734,	// (0x00048395) cell_image3_tool_bar_pane_g1

0x081d,	// (0x0003c47e) bg_popup_trans_pane_cp1

0xd22f,	// (0x00048e90) popup_image3_note_pane_t1

0xd23d,	// (0x00048e9e) popup_image3_note_pane_t2

0xd24b,	// (0x00048eac) popup_image3_note_pane_t3

0x0002,

0xf99f,	// (0x0004b600) popup_image3_note_pane_t

0xd259,	// (0x00048eba) popup_image3_note_pane_t3_copy1

0x9638,	// (0x00045299) bg_myfav_hc_instruction_pane_ParamLimits

0x9638,	// (0x00045299) bg_myfav_hc_instruction_pane

0x964c,	// (0x000452ad) cell_myfav_contact_pane_ParamLimits

0x964c,	// (0x000452ad) cell_myfav_contact_pane

0x966a,	// (0x000452cb) cell_myfav_contact_pane_cp1_ParamLimits

0x966a,	// (0x000452cb) cell_myfav_contact_pane_cp1

0x9682,	// (0x000452e3) cell_myfav_contact_pane_cp2_ParamLimits

0x9682,	// (0x000452e3) cell_myfav_contact_pane_cp2

0x969a,	// (0x000452fb) cell_myfav_contact_pane_cp3_ParamLimits

0x969a,	// (0x000452fb) cell_myfav_contact_pane_cp3

0x96b1,	// (0x00045312) cell_myfav_contact_pane_cp4_ParamLimits

0x96b1,	// (0x00045312) cell_myfav_contact_pane_cp4

0x96c9,	// (0x0004532a) cell_myfav_contact_pane_cp5_ParamLimits

0x96c9,	// (0x0004532a) cell_myfav_contact_pane_cp5

0x96dd,	// (0x0004533e) cell_myfav_contact_pane_cp6_ParamLimits

0x96dd,	// (0x0004533e) cell_myfav_contact_pane_cp6

0x96f3,	// (0x00045354) cell_myfav_contact_pane_cp7_ParamLimits

0x96f3,	// (0x00045354) cell_myfav_contact_pane_cp7

0xd267,	// (0x00048ec8) listscroll_gen_pane_cp05

0x970d,	// (0x0004536e) main_myfav_hc_pane_g1_ParamLimits

0x970d,	// (0x0004536e) main_myfav_hc_pane_g1

0x9727,	// (0x00045388) main_myfav_hc_pane_g2_ParamLimits

0x9727,	// (0x00045388) main_myfav_hc_pane_g2

0x0002,

0xf9a6,	// (0x0004b607) main_myfav_hc_pane_g_ParamLimits

0xf9a6,	// (0x0004b607) main_myfav_hc_pane_g

0x9759,	// (0x000453ba) main_myfav_hc_pane_t1_ParamLimits

0x9759,	// (0x000453ba) main_myfav_hc_pane_t1

0xd270,	// (0x00048ed1) main_myfav_hc_pane_t2_ParamLimits

0xd270,	// (0x00048ed1) main_myfav_hc_pane_t2

0xd282,	// (0x00048ee3) main_myfav_hc_pane_t3_ParamLimits

0xd282,	// (0x00048ee3) main_myfav_hc_pane_t3

0x9770,	// (0x000453d1) main_myfav_hc_pane_t4_ParamLimits

0x9770,	// (0x000453d1) main_myfav_hc_pane_t4

0x0004,

0xf9ad,	// (0x0004b60e) main_myfav_hc_pane_t_ParamLimits

0xf9ad,	// (0x0004b60e) main_myfav_hc_pane_t

0xc734,	// (0x00048395) bg_myfav_hc_instruction_pane_g1

0xd294,	// (0x00048ef5) cell_myfav_contact_pane_g1_ParamLimits

0xd294,	// (0x00048ef5) cell_myfav_contact_pane_g1

0xd294,	// (0x00048ef5) cell_myfav_contact_pane_g2_ParamLimits

0xd294,	// (0x00048ef5) cell_myfav_contact_pane_g2

0xd2a0,	// (0x00048f01) cell_myfav_contact_pane_g3_ParamLimits

0xd2a0,	// (0x00048f01) cell_myfav_contact_pane_g3

0xca4d,	// (0x000486ae) cell_myfav_contact_pane_g4_ParamLimits

0xca4d,	// (0x000486ae) cell_myfav_contact_pane_g4

0xd2ad,	// (0x00048f0e) cell_myfav_contact_pane_g5_ParamLimits

0xd2ad,	// (0x00048f0e) cell_myfav_contact_pane_g5

0x0004,

0xf9b8,	// (0x0004b619) cell_myfav_contact_pane_g_ParamLimits

0xf9b8,	// (0x0004b619) cell_myfav_contact_pane_g

0x9741,	// (0x000453a2) main_myfav_hc_pane_g3_ParamLimits

0x9741,	// (0x000453a2) main_myfav_hc_pane_g3

0x3410,	// (0x0003f071) popup_adpt_find_window

0x9798,	// (0x000453f9) afind_page_pane_ParamLimits

0x9798,	// (0x000453f9) afind_page_pane

0x97ad,	// (0x0004540e) aid_size_cell_afind_ParamLimits

0x97ad,	// (0x0004540e) aid_size_cell_afind

0x97cb,	// (0x0004542c) bg_popup_sub_pane_cp09_ParamLimits

0x97cb,	// (0x0004542c) bg_popup_sub_pane_cp09

0x97d8,	// (0x00045439) find_pane_cp01_ParamLimits

0x97d8,	// (0x00045439) find_pane_cp01

0xd2b9,	// (0x00048f1a) grid_afind_control_pane_ParamLimits

0xd2b9,	// (0x00048f1a) grid_afind_control_pane

0x97e5,	// (0x00045446) grid_afind_pane_ParamLimits

0x97e5,	// (0x00045446) grid_afind_pane

0x9807,	// (0x00045468) cell_afind_pane_ParamLimits

0x9807,	// (0x00045468) cell_afind_pane

0xc734,	// (0x00048395) afind_page_pane_g1

0x9864,	// (0x000454c5) afind_page_pane_g2

0x986d,	// (0x000454ce) afind_page_pane_g3

0x0002,

0xf9c3,	// (0x0004b624) afind_page_pane_g

0x9876,	// (0x000454d7) afind_page_pane_t1

0xd2cd,	// (0x00048f2e) cell_afind_grid_control_pane_ParamLimits

0xd2cd,	// (0x00048f2e) cell_afind_grid_control_pane

0xd078,	// (0x00048cd9) bg_button_pane_cp69_ParamLimits

0xd078,	// (0x00048cd9) bg_button_pane_cp69

0x9896,	// (0x000454f7) cell_afind_pane_g1_ParamLimits

0x9896,	// (0x000454f7) cell_afind_pane_g1

0x98a3,	// (0x00045504) cell_afind_pane_t1_ParamLimits

0x98a3,	// (0x00045504) cell_afind_pane_t1

0x11b9,	// (0x0003ce1a) bg_button_pane_cp72

0xd2dc,	// (0x00048f3d) cell_afind_grid_control_pane_g1

0x5daa,	// (0x00041a0b) aid_image_placing_area_ParamLimits

0x5daa,	// (0x00041a0b) aid_image_placing_area

0xcd46,	// (0x000489a7) field_vitu_entry_pane_g1_ParamLimits

0xcd46,	// (0x000489a7) field_vitu_entry_pane_g1

0xcd52,	// (0x000489b3) field_vitu_entry_pane_g2_ParamLimits

0xcd52,	// (0x000489b3) field_vitu_entry_pane_g2

0x0001,

0xf87d,	// (0x0004b4de) field_vitu_entry_pane_g_ParamLimits

0xf87d,	// (0x0004b4de) field_vitu_entry_pane_g

0x8a2f,	// (0x00044690) cell_vitu_itu_pane_g1_ParamLimits

0x8a71,	// (0x000446d2) cell_vitu_itu_pane_t3_ParamLimits

0x8a71,	// (0x000446d2) cell_vitu_itu_pane_t3

0xd028,	// (0x00048c89) mp4_progress_pane_t1_ParamLimits

0xd041,	// (0x00048ca2) mp4_progress_pane_t2_ParamLimits

0xf912,	// (0x0004b573) mp4_progress_pane_t_ParamLimits

0xd05a,	// (0x00048cbb) mup_progress_pane_cp04_ParamLimits

0x9784,	// (0x000453e5) main_myfav_hc_pane_t5_ParamLimits

0x9784,	// (0x000453e5) main_myfav_hc_pane_t5

0x083b,	// (0x0003c49c) aid_zoom_text_primary

0x3410,	// (0x0003f071) popup_adpt_find_window_ParamLimits

0x1ad7,	// (0x0003d738) main_cam_set_pane

0x9195,	// (0x00044df6) cam4_zoom_pane_ParamLimits

0x9195,	// (0x00044df6) cam4_zoom_pane

0x98b5,	// (0x00045516) main_cam_set_pane_g1_ParamLimits

0x98b5,	// (0x00045516) main_cam_set_pane_g1

0x98c3,	// (0x00045524) main_cam_set_pane_g2_ParamLimits

0x98c3,	// (0x00045524) main_cam_set_pane_g2

0x0001,

0xf9ca,	// (0x0004b62b) main_cam_set_pane_g_ParamLimits

0xf9ca,	// (0x0004b62b) main_cam_set_pane_g

0x98e6,	// (0x00045547) main_cam_set_pane_t1_ParamLimits

0x98e6,	// (0x00045547) main_cam_set_pane_t1

0x9901,	// (0x00045562) main_cset_listscroll_pane_ParamLimits

0x9901,	// (0x00045562) main_cset_listscroll_pane

0x9923,	// (0x00045584) main_cset_slider_pane_ParamLimits

0x9923,	// (0x00045584) main_cset_slider_pane

0xd2ed,	// (0x00048f4e) main_cset_list_pane_ParamLimits

0xd2ed,	// (0x00048f4e) main_cset_list_pane

0xd2fd,	// (0x00048f5e) scroll_pane_cp028

0x9949,	// (0x000455aa) aid_area_touch_slider

0x9965,	// (0x000455c6) cset_slider_pane

0x998f,	// (0x000455f0) main_cset_slider_pane_g1

0x99a4,	// (0x00045605) main_cset_slider_pane_g2

0x0011,

0xf9cf,	// (0x0004b630) main_cset_slider_pane_g

0xd336,	// (0x00048f97) main_cset_slider_pane_t1

0x9a60,	// (0x000456c1) main_cset_slider_pane_t2

0x9a7a,	// (0x000456db) main_cset_slider_pane_t3

0x9a94,	// (0x000456f5) main_cset_slider_pane_t4

0x9aae,	// (0x0004570f) main_cset_slider_pane_t5

0x9ac8,	// (0x00045729) main_cset_slider_pane_t6

0x9add,	// (0x0004573e) main_cset_slider_pane_t7

0x000e,

0xf9f4,	// (0x0004b655) main_cset_slider_pane_t

0x9be1,	// (0x00045842) cset_list_set_pane_ParamLimits

0x9be1,	// (0x00045842) cset_list_set_pane

0x9bf3,	// (0x00045854) aid_position_infowindow_above

0x9bfb,	// (0x0004585c) aid_position_infowindow_below

0xd3d6,	// (0x00049037) cset_list_set_pane_g1_ParamLimits

0xd3d6,	// (0x00049037) cset_list_set_pane_g1

0xd3e2,	// (0x00049043) cset_list_set_pane_g3_ParamLimits

0xd3e2,	// (0x00049043) cset_list_set_pane_g3

0x0001,

0xfa13,	// (0x0004b674) cset_list_set_pane_g_ParamLimits

0xfa13,	// (0x0004b674) cset_list_set_pane_g

0x2bd1,	// (0x0003e832) cset_list_set_pane_t1_ParamLimits

0x2bd1,	// (0x0003e832) cset_list_set_pane_t1

0x1ad7,	// (0x0003d738) list_highlight_pane_cp021_ParamLimits

0x1ad7,	// (0x0003d738) list_highlight_pane_cp021

0x562b,	// (0x0004128c) cset_slider_pane_g1

0x563d,	// (0x0004129e) cset_slider_pane_g2

0x5634,	// (0x00041295) cset_slider_pane_g3

0x0002,

0xfa18,	// (0x0004b679) cset_slider_pane_g

0xf027,	// (0x0004ac88) aid_area_touch_cam4_zoom

0xf02f,	// (0x0004ac90) cam4_zoom_cont_pane

0xf037,	// (0x0004ac98) cam4_zoom_pane_g1

0xf03f,	// (0x0004aca0) cam4_zoom_pane_g2

0x9c03,	// (0x00045864) cam4_zoom_pane_g3

0x0002,

0xfa1f,	// (0x0004b680) cam4_zoom_pane_g

0xd3f1,	// (0x00049052) cam4_zoom_cont_pane_g1

0xd3fa,	// (0x0004905b) cam4_zoom_cont_pane_g2

0xd403,	// (0x00049064) cam4_zoom_cont_pane_g3

0x0002,

0xfa26,	// (0x0004b687) cam4_zoom_cont_pane_g

0x9055,	// (0x00044cb6) call4_image_pane_ParamLimits

0x9055,	// (0x00044cb6) call4_image_pane

0xd084,	// (0x00048ce5) call4_windows_conf_pane_ParamLimits

0xd0c5,	// (0x00048d26) popup_call4_audio_in_window_ParamLimits

0xd0c5,	// (0x00048d26) popup_call4_audio_in_window

0x081d,	// (0x0003c47e) bg_popup_call2_act_pane_cp02

0xd13b,	// (0x00048d9c) call4_list_conf_pane

0xc734,	// (0x00048395) call4_image_pane_g1

0xc734,	// (0x00048395) call4_image_pane_g2

0x0001,

0xf743,	// (0x0004b3a4) call4_image_pane_g

0xd40c,	// (0x0004906d) list_single_graphic_popup_conf4_pane_ParamLimits

0xd40c,	// (0x0004906d) list_single_graphic_popup_conf4_pane

0x081d,	// (0x0003c47e) list_highlight_pane_cp022

0xd41f,	// (0x00049080) list_single_graphic_popup_conf4_pane_g1

0x18b8,	// (0x0003d519) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xfa2d,	// (0x0004b68e) list_single_graphic_popup_conf4_pane_g

0xd427,	// (0x00049088) list_single_graphic_popup_conf4_pane_t1

0x422b,	// (0x0003fe8c) popup_vtel_slider_window_ParamLimits

0x422b,	// (0x0003fe8c) popup_vtel_slider_window

0xd066,	// (0x00048cc7) dialer2_ne_pane_t2_ParamLimits

0xd066,	// (0x00048cc7) dialer2_ne_pane_t2

0x0001,

0xf917,	// (0x0004b578) dialer2_ne_pane_t_ParamLimits

0xf917,	// (0x0004b578) dialer2_ne_pane_t

0xc519,	// (0x0004817a) bg_popup_sub_pane_cp010_ParamLimits

0xc519,	// (0x0004817a) bg_popup_sub_pane_cp010

0x9c0b,	// (0x0004586c) popup_vtel_slider_window_g1_ParamLimits

0x9c0b,	// (0x0004586c) popup_vtel_slider_window_g1

0x9c1e,	// (0x0004587f) popup_vtel_slider_window_g2_ParamLimits

0x9c1e,	// (0x0004587f) popup_vtel_slider_window_g2

0x0003,

0xfa32,	// (0x0004b693) popup_vtel_slider_window_g_ParamLimits

0xfa32,	// (0x0004b693) popup_vtel_slider_window_g

0x9c74,	// (0x000458d5) vtel_slider_pane_ParamLimits

0x9c74,	// (0x000458d5) vtel_slider_pane

0x9c96,	// (0x000458f7) vtel_slider_pane_g1_ParamLimits

0x9c96,	// (0x000458f7) vtel_slider_pane_g1

0x9caa,	// (0x0004590b) vtel_slider_pane_g2_ParamLimits

0x9caa,	// (0x0004590b) vtel_slider_pane_g2

0x9cc2,	// (0x00045923) vtel_slider_pane_g3_ParamLimits

0x9cc2,	// (0x00045923) vtel_slider_pane_g3

0x9c96,	// (0x000458f7) vtel_slider_pane_g4_ParamLimits

0x9c96,	// (0x000458f7) vtel_slider_pane_g4

0x9cd8,	// (0x00045939) vtel_slider_pane_g5_ParamLimits

0x9cd8,	// (0x00045939) vtel_slider_pane_g5

0x0004,

0xfa3b,	// (0x0004b69c) vtel_slider_pane_g_ParamLimits

0xfa3b,	// (0x0004b69c) vtel_slider_pane_g

0x081d,	// (0x0003c47e) main_gallery2_pane

0x93e7,	// (0x00045048) aid_size_row_itut2_dropdow_list_ParamLimits

0x93e7,	// (0x00045048) aid_size_row_itut2_dropdow_list

0x9473,	// (0x000450d4) grid_vitu2_function_top_pane_ParamLimits

0x9473,	// (0x000450d4) grid_vitu2_function_top_pane

0x94d8,	// (0x00045139) popup_vitu2_dropdown_list_window_ParamLimits

0x94d8,	// (0x00045139) popup_vitu2_dropdown_list_window

0x9501,	// (0x00045162) popup_vitu2_match_list_window

0x9cee,	// (0x0004594f) cell_vitu2_function_top_pane_ParamLimits

0x9cee,	// (0x0004594f) cell_vitu2_function_top_pane

0x9d0c,	// (0x0004596d) cell_vitu2_function_top_pane_cp01_ParamLimits

0x9d0c,	// (0x0004596d) cell_vitu2_function_top_pane_cp01

0x9d2a,	// (0x0004598b) cell_vitu2_function_top_wide_pane_ParamLimits

0x9d2a,	// (0x0004598b) cell_vitu2_function_top_wide_pane

0x1ad7,	// (0x0003d738) bg_button_pane_cp012

0x9d48,	// (0x000459a9) cell_vitu2_function_top_pane_g1

0xf047,	// (0x0004aca8) bg_button_pane_cp013_ParamLimits

0xf047,	// (0x0004aca8) bg_button_pane_cp013

0x9d5c,	// (0x000459bd) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x9d5c,	// (0x000459bd) cell_vitu2_function_top_wide_pane_g1

0x1ad7,	// (0x0003d738) bg_popup_sub_pane_cp20

0x9d74,	// (0x000459d5) list_vitu2_match_list_pane

0xd1e3,	// (0x00048e44) bg_popup_sub_pane_cp20_g1

0xd1eb,	// (0x00048e4c) bg_popup_sub_pane_cp20_g2

0x13c6,	// (0x0003d027) bg_popup_sub_pane_cp20_g3

0xd1f3,	// (0x00048e54) bg_popup_sub_pane_cp20_g4

0x13a6,	// (0x0003d007) bg_popup_sub_pane_cp20_g5

0xd443,	// (0x000490a4) bg_popup_sub_pane_cp20_g6

0xd203,	// (0x00048e64) bg_popup_sub_pane_cp20_g7

0xd20b,	// (0x00048e6c) bg_popup_sub_pane_cp20_g8

0xd213,	// (0x00048e74) bg_popup_sub_pane_cp20_g9

0x0008,

0xfa46,	// (0x0004b6a7) bg_popup_sub_pane_cp20_g

0xf063,	// (0x0004acc4) list_vitu2_match_list_item_pane_ParamLimits

0xf063,	// (0x0004acc4) list_vitu2_match_list_item_pane

0xf075,	// (0x0004acd6) list_vitu2_match_list_item_pane_t1

0x081d,	// (0x0003c47e) bg_popup_sub_pane_cp21

0x17e0,	// (0x0003d441) grid_vitu2_dropdown_list_pane

0x9d92,	// (0x000459f3) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x9d92,	// (0x000459f3) cell_vitu2_dropdown_list_char_pane

0x9db3,	// (0x00045a14) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x9db3,	// (0x00045a14) cell_vitu2_dropdown_list_ctrl_pane

0xd463,	// (0x000490c4) cell_vitu2_dropdown_list_char_pane_g1

0xd46c,	// (0x000490cd) cell_vitu2_dropdown_list_char_pane_g2

0xd475,	// (0x000490d6) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xfa63,	// (0x0004b6c4) cell_vitu2_dropdown_list_char_pane_g

0x9ddf,	// (0x00045a40) cell_vitu2_dropdown_list_char_pane_t1

0x9ded,	// (0x00045a4e) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x9ded,	// (0x00045a4e) cell_vitu2_dropdown_list_ctrl_pane_g1

0x9dfa,	// (0x00045a5b) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x9dfa,	// (0x00045a5b) cell_vitu2_dropdown_list_ctrl_pane_g2

0x9e07,	// (0x00045a68) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x9e07,	// (0x00045a68) cell_vitu2_dropdown_list_ctrl_pane_g3

0x9e14,	// (0x00045a75) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x9e14,	// (0x00045a75) cell_vitu2_dropdown_list_ctrl_pane_g4

0xc9a0,	// (0x00048601) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0xc9a0,	// (0x00048601) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa6a,	// (0x0004b6cb) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa6a,	// (0x0004b6cb) cell_vitu2_dropdown_list_ctrl_pane_g

0x9e30,	// (0x00045a91) aid_size_cell_gallery2_ParamLimits

0x9e30,	// (0x00045a91) aid_size_cell_gallery2

0x9e46,	// (0x00045aa7) grid_gallery2_pane_ParamLimits

0x9e46,	// (0x00045aa7) grid_gallery2_pane

0x9e5a,	// (0x00045abb) scroll_pane_cp029_ParamLimits

0x9e5a,	// (0x00045abb) scroll_pane_cp029

0x9e66,	// (0x00045ac7) cell_gallery2_pane_ParamLimits

0x9e66,	// (0x00045ac7) cell_gallery2_pane

0xd47e,	// (0x000490df) cell_gallery2_pane_g2

0x9e9c,	// (0x00045afd) cell_gallery2_pane_g3

0xd488,	// (0x000490e9) cell_gallery2_pane_g4

0xd490,	// (0x000490f1) cell_gallery2_pane_g5

0x1aa3,	// (0x0003d704) grid_highlight_pane_cp10

0x9501,	// (0x00045162) popup_vitu2_match_list_window_ParamLimits

0x9518,	// (0x00045179) popup_vitu2_query_window_ParamLimits

0x9518,	// (0x00045179) popup_vitu2_query_window

0x081d,	// (0x0003c47e) bg_vitu2_candi_button_pane

0xd463,	// (0x000490c4) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xd46c,	// (0x000490cd) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xd475,	// (0x000490d6) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x2c17,	// (0x0003e878) bg_button_pane_cp015

0x9ea4,	// (0x00045b05) bg_button_pane_cp016

0x9eae,	// (0x00045b0f) bg_button_pane_cp017

0x1ad7,	// (0x0003d738) bg_popup_sub_pane_cp22

0xd498,	// (0x000490f9) popup_vitu2_query_window_g1

0x2c2e,	// (0x0003e88f) popup_vitu2_query_window_g2

0x0001,

0xfa75,	// (0x0004b6d6) popup_vitu2_query_window_g

0x2c3c,	// (0x0003e89d) popup_vitu2_query_window_t1_ParamLimits

0x2c3c,	// (0x0003e89d) popup_vitu2_query_window_t1

0x2c64,	// (0x0003e8c5) popup_vitu2_query_window_t2_ParamLimits

0x2c64,	// (0x0003e8c5) popup_vitu2_query_window_t2

0x2c76,	// (0x0003e8d7) popup_vitu2_query_window_t3_ParamLimits

0x2c76,	// (0x0003e8d7) popup_vitu2_query_window_t3

0x9ec9,	// (0x00045b2a) popup_vitu2_query_window_t4_ParamLimits

0x9ec9,	// (0x00045b2a) popup_vitu2_query_window_t4

0x9edd,	// (0x00045b3e) popup_vitu2_query_window_t5_ParamLimits

0x9edd,	// (0x00045b3e) popup_vitu2_query_window_t5

0x0004,

0xfa7a,	// (0x0004b6db) popup_vitu2_query_window_t_ParamLimits

0xfa7a,	// (0x0004b6db) popup_vitu2_query_window_t

0xd2e5,	// (0x00048f46) main_cset_text_pane

0x9949,	// (0x000455aa) aid_area_touch_slider_ParamLimits

0x9965,	// (0x000455c6) cset_slider_pane_ParamLimits

0x998f,	// (0x000455f0) main_cset_slider_pane_g1_ParamLimits

0x99a4,	// (0x00045605) main_cset_slider_pane_g2_ParamLimits

0xd306,	// (0x00048f67) main_cset_slider_pane_g3_ParamLimits

0xd306,	// (0x00048f67) main_cset_slider_pane_g3

0x99b9,	// (0x0004561a) main_cset_slider_pane_g4_ParamLimits

0x99b9,	// (0x0004561a) main_cset_slider_pane_g4

0x99c8,	// (0x00045629) main_cset_slider_pane_g5_ParamLimits

0x99c8,	// (0x00045629) main_cset_slider_pane_g5

0x99d4,	// (0x00045635) main_cset_slider_pane_g6_ParamLimits

0x99d4,	// (0x00045635) main_cset_slider_pane_g6

0xf9cf,	// (0x0004b630) main_cset_slider_pane_g_ParamLimits

0xd336,	// (0x00048f97) main_cset_slider_pane_t1_ParamLimits

0x9a60,	// (0x000456c1) main_cset_slider_pane_t2_ParamLimits

0x9a7a,	// (0x000456db) main_cset_slider_pane_t3_ParamLimits

0x9a94,	// (0x000456f5) main_cset_slider_pane_t4_ParamLimits

0x9aae,	// (0x0004570f) main_cset_slider_pane_t5_ParamLimits

0x9ac8,	// (0x00045729) main_cset_slider_pane_t6_ParamLimits

0x9add,	// (0x0004573e) main_cset_slider_pane_t7_ParamLimits

0x9b07,	// (0x00045768) main_cset_slider_pane_t8_ParamLimits

0x9b07,	// (0x00045768) main_cset_slider_pane_t8

0x9b2f,	// (0x00045790) main_cset_slider_pane_t9_ParamLimits

0x9b2f,	// (0x00045790) main_cset_slider_pane_t9

0x9b57,	// (0x000457b8) main_cset_slider_pane_t10_ParamLimits

0x9b57,	// (0x000457b8) main_cset_slider_pane_t10

0x9b7f,	// (0x000457e0) main_cset_slider_pane_t11_ParamLimits

0x9b7f,	// (0x000457e0) main_cset_slider_pane_t11

0x9ba7,	// (0x00045808) main_cset_slider_pane_t12_ParamLimits

0x9ba7,	// (0x00045808) main_cset_slider_pane_t12

0x9bc4,	// (0x00045825) main_cset_slider_pane_t13_ParamLimits

0x9bc4,	// (0x00045825) main_cset_slider_pane_t13

0xf9f4,	// (0x0004b655) main_cset_slider_pane_t_ParamLimits

0x081d,	// (0x0003c47e) bg_popup_sub_pane_cp011

0xd4a4,	// (0x00049105) main_cset_text_pane_g1

0xd4ac,	// (0x0004910d) main_cset_text_pane_t1

0xd4ba,	// (0x0004911b) main_cset_text_pane_t2

0xd4c8,	// (0x00049129) main_cset_text_pane_t3

0xd4d6,	// (0x00049137) main_cset_text_pane_t4

0xd4e4,	// (0x00049145) main_cset_text_pane_t5

0xd4f2,	// (0x00049153) main_cset_text_pane_t6

0xd500,	// (0x00049161) main_cset_text_pane_t7

0x0006,

0xfa85,	// (0x0004b6e6) main_cset_text_pane_t

0x081d,	// (0x0003c47e) main_cam4_burst_pane

0x081d,	// (0x0003c47e) main_cam5_pane

0x9884,	// (0x000454e5) bg_button_pane_cp019

0x988d,	// (0x000454ee) bg_button_pane_cp020

0xd312,	// (0x00048f73) main_cset_slider_pane_g7_ParamLimits

0xd312,	// (0x00048f73) main_cset_slider_pane_g7

0xd31e,	// (0x00048f7f) main_cset_slider_pane_g8_ParamLimits

0xd31e,	// (0x00048f7f) main_cset_slider_pane_g8

0x99e8,	// (0x00045649) main_cset_slider_pane_g9_ParamLimits

0x99e8,	// (0x00045649) main_cset_slider_pane_g9

0x99f4,	// (0x00045655) main_cset_slider_pane_g10_ParamLimits

0x99f4,	// (0x00045655) main_cset_slider_pane_g10

0x9a00,	// (0x00045661) main_cset_slider_pane_g11_ParamLimits

0x9a00,	// (0x00045661) main_cset_slider_pane_g11

0x9a0c,	// (0x0004566d) main_cset_slider_pane_g12_ParamLimits

0x9a0c,	// (0x0004566d) main_cset_slider_pane_g12

0x9a18,	// (0x00045679) main_cset_slider_pane_g13_ParamLimits

0x9a18,	// (0x00045679) main_cset_slider_pane_g13

0x9a24,	// (0x00045685) main_cset_slider_pane_g14_ParamLimits

0x9a24,	// (0x00045685) main_cset_slider_pane_g14

0x9a30,	// (0x00045691) main_cset_slider_pane_g15_ParamLimits

0x9a30,	// (0x00045691) main_cset_slider_pane_g15

0xd364,	// (0x00048fc5) main_cset_slider_pane_t14_ParamLimits

0xd364,	// (0x00048fc5) main_cset_slider_pane_t14

0xd39d,	// (0x00048ffe) main_cset_slider_pane_t15_ParamLimits

0xd39d,	// (0x00048ffe) main_cset_slider_pane_t15

0x9ef1,	// (0x00045b52) aid_cam4_burst_size_cell_ParamLimits

0x9ef1,	// (0x00045b52) aid_cam4_burst_size_cell

0x9f11,	// (0x00045b72) grid_cam4_burst_pane_ParamLimits

0x9f11,	// (0x00045b72) grid_cam4_burst_pane

0x9f49,	// (0x00045baa) linegrid_cam4_burst_pane_ParamLimits

0x9f49,	// (0x00045baa) linegrid_cam4_burst_pane

0x9f6d,	// (0x00045bce) scroll_pane_cp30_ParamLimits

0x9f6d,	// (0x00045bce) scroll_pane_cp30

0x9f79,	// (0x00045bda) cell_cam4_burst_pane_ParamLimits

0x9f79,	// (0x00045bda) cell_cam4_burst_pane

0xd50e,	// (0x0004916f) linegrid_cam4_burst_pane_g1_ParamLimits

0xd50e,	// (0x0004916f) linegrid_cam4_burst_pane_g1

0x9fc6,	// (0x00045c27) linegrid_cam4_burst_pane_g2_ParamLimits

0x9fc6,	// (0x00045c27) linegrid_cam4_burst_pane_g2

0xd51b,	// (0x0004917c) linegrid_cam4_burst_pane_g3_ParamLimits

0xd51b,	// (0x0004917c) linegrid_cam4_burst_pane_g3

0x0002,

0xfa94,	// (0x0004b6f5) linegrid_cam4_burst_pane_g_ParamLimits

0xfa94,	// (0x0004b6f5) linegrid_cam4_burst_pane_g

0x9fd7,	// (0x00045c38) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x9fd7,	// (0x00045c38) linegrid_cam4_burst_pane_g3_copy1

0xd528,	// (0x00049189) linegrid_cam4_burst_pane_g4_ParamLimits

0xd528,	// (0x00049189) linegrid_cam4_burst_pane_g4

0x9ff1,	// (0x00045c52) linegrid_cam4_burst_pane_g5_ParamLimits

0x9ff1,	// (0x00045c52) linegrid_cam4_burst_pane_g5

0xa002,	// (0x00045c63) linegrid_cam4_burst_pane_g6_ParamLimits

0xa002,	// (0x00045c63) linegrid_cam4_burst_pane_g6

0xd535,	// (0x00049196) linegrid_cam4_burst_pane_g7_ParamLimits

0xd535,	// (0x00049196) linegrid_cam4_burst_pane_g7

0xa019,	// (0x00045c7a) cell_cam4_burst_pane_g1

0xd54e,	// (0x000491af) main_cam5_pane_t1_ParamLimits

0xd54e,	// (0x000491af) main_cam5_pane_t1

0xd560,	// (0x000491c1) main_cam5_pane_t2_ParamLimits

0xd560,	// (0x000491c1) main_cam5_pane_t2

0xd572,	// (0x000491d3) main_cam5_pane_t3_ParamLimits

0xd572,	// (0x000491d3) main_cam5_pane_t3

0xd584,	// (0x000491e5) main_cam5_pane_t4_ParamLimits

0xd584,	// (0x000491e5) main_cam5_pane_t4

0xd59c,	// (0x000491fd) main_cam5_pane_t5_ParamLimits

0xd59c,	// (0x000491fd) main_cam5_pane_t5

0xd5b0,	// (0x00049211) main_cam5_pane_t6_ParamLimits

0xd5b0,	// (0x00049211) main_cam5_pane_t6

0xd5c4,	// (0x00049225) main_cam5_pane_t7_ParamLimits

0xd5c4,	// (0x00049225) main_cam5_pane_t7

0xd5d6,	// (0x00049237) main_cam5_pane_t8_ParamLimits

0xd5d6,	// (0x00049237) main_cam5_pane_t8

0xd5f2,	// (0x00049253) main_cam5_pane_t9_ParamLimits

0xd5f2,	// (0x00049253) main_cam5_pane_t9

0xd604,	// (0x00049265) main_cam5_pane_t10_ParamLimits

0xd604,	// (0x00049265) main_cam5_pane_t10

0xd616,	// (0x00049277) main_cam5_pane_t11_ParamLimits

0xd616,	// (0x00049277) main_cam5_pane_t11

0xd628,	// (0x00049289) main_cam5_pane_t12_ParamLimits

0xd628,	// (0x00049289) main_cam5_pane_t12

0xd63d,	// (0x0004929e) main_cam5_pane_t13_ParamLimits

0xd63d,	// (0x0004929e) main_cam5_pane_t13

0x000c,

0xfaa0,	// (0x0004b701) main_cam5_pane_t_ParamLimits

0xfaa0,	// (0x0004b701) main_cam5_pane_t

0x3493,	// (0x0003f0f4) popup_scut_keymap_window_ParamLimits

0x3493,	// (0x0003f0f4) popup_scut_keymap_window

0xa02c,	// (0x00045c8d) aid_size_cell_brow_shortcut

0x1aa3,	// (0x0003d704) bg_popup_window_pane_cp010

0xa038,	// (0x00045c99) grid_scut_pane

0xa044,	// (0x00045ca5) cell_scut_pane_ParamLimits

0xa044,	// (0x00045ca5) cell_scut_pane

0xa05b,	// (0x00045cbc) cell_scut_pane_g1

0xd65a,	// (0x000492bb) cell_scut_pane_t1

0xd669,	// (0x000492ca) cell_scut_pane_t2

0xa064,	// (0x00045cc5) cell_scut_pane_t3

0x0002,

0xfabb,	// (0x0004b71c) cell_scut_pane_t

0x7f8c,	// (0x00043bed) main_mup3_pane_g8_ParamLimits

0x7f8c,	// (0x00043bed) main_mup3_pane_g8

0x93ff,	// (0x00045060) area_vitu2_query_pane_ParamLimits

0x93ff,	// (0x00045060) area_vitu2_query_pane

0x2c21,	// (0x0003e882) input_focus_pane_cp08

0xd678,	// (0x000492d9) area_vitu2_query_pane_g1

0x2c9e,	// (0x0003e8ff) area_vitu2_query_pane_g2

0x0001,

0xfac2,	// (0x0004b723) area_vitu2_query_pane_g

0xa072,	// (0x00045cd3) area_vitu2_query_pane_t1_ParamLimits

0xa072,	// (0x00045cd3) area_vitu2_query_pane_t1

0xa086,	// (0x00045ce7) area_vitu2_query_pane_t2_ParamLimits

0xa086,	// (0x00045ce7) area_vitu2_query_pane_t2

0x2caf,	// (0x0003e910) area_vitu2_query_pane_t3_ParamLimits

0x2caf,	// (0x0003e910) area_vitu2_query_pane_t3

0xd684,	// (0x000492e5) area_vitu2_query_pane_t4_ParamLimits

0xd684,	// (0x000492e5) area_vitu2_query_pane_t4

0xd6ac,	// (0x0004930d) area_vitu2_query_pane_t5_ParamLimits

0xd6ac,	// (0x0004930d) area_vitu2_query_pane_t5

0xd6d4,	// (0x00049335) area_vitu2_query_pane_t6_ParamLimits

0xd6d4,	// (0x00049335) area_vitu2_query_pane_t6

0x0006,

0xfac7,	// (0x0004b728) area_vitu2_query_pane_t_ParamLimits

0xfac7,	// (0x0004b728) area_vitu2_query_pane_t

0xa09a,	// (0x00045cfb) bg_button_pane_cp018

0xa0a8,	// (0x00045d09) bg_button_pane_cp021

0x2cd7,	// (0x0003e938) bg_button_pane_cp022

0x2ce6,	// (0x0003e947) input_focus_pane_cp09

0x500d,	// (0x00040c6e) aid_size_touch_mv_arrow_left

0x5036,	// (0x00040c97) aid_size_touch_mv_arrow_right

0x9a48,	// (0x000456a9) main_cset_slider_pane_g16_ParamLimits

0x9a48,	// (0x000456a9) main_cset_slider_pane_g16

0x9a54,	// (0x000456b5) main_cset_slider_pane_g17_ParamLimits

0x9a54,	// (0x000456b5) main_cset_slider_pane_g17

0xa019,	// (0x00045c7a) cell_cam4_burst_pane_g1_ParamLimits

0x081d,	// (0x0003c47e) compa_mode_pane

0x9c2e,	// (0x0004588f) popup_vtel_slider_window_g3_ParamLimits

0x9c2e,	// (0x0004588f) popup_vtel_slider_window_g3

0x9c45,	// (0x000458a6) popup_vtel_slider_window_g4_ParamLimits

0x9c45,	// (0x000458a6) popup_vtel_slider_window_g4

0x9c5c,	// (0x000458bd) popup_vtel_slider_window_t1_ParamLimits

0x9c5c,	// (0x000458bd) popup_vtel_slider_window_t1

0x081d,	// (0x0003c47e) main_cl_pane

0xc256,	// (0x00047eb7) popup_imed_adjust2_window_ParamLimits

0xc22e,	// (0x00047e8f) bg_tb_trans_pane_cp05_ParamLimits

0xcc7b,	// (0x000488dc) popup_imed_adjust2_window_g1_ParamLimits

0xcc8a,	// (0x000488eb) popup_imed_adjust2_window_g2_ParamLimits

0xcc8a,	// (0x000488eb) popup_imed_adjust2_window_g2

0xcc96,	// (0x000488f7) popup_imed_adjust2_window_g3_ParamLimits

0xcc96,	// (0x000488f7) popup_imed_adjust2_window_g3

0x0002,

0xf841,	// (0x0004b4a2) popup_imed_adjust2_window_g_ParamLimits

0xf841,	// (0x0004b4a2) popup_imed_adjust2_window_g

0xcca2,	// (0x00048903) popup_imed_adjust2_window_t1_ParamLimits

0xccba,	// (0x0004891b) slider_imed_adjust_pane_ParamLimits

0xccce,	// (0x0004892f) slider_imed_adjust_pane_g1_ParamLimits

0xccde,	// (0x0004893f) slider_imed_adjust_pane_g2_ParamLimits

0xccee,	// (0x0004894f) slider_imed_adjust_pane_g3_ParamLimits

0xccff,	// (0x00048960) slider_imed_adjust_pane_g4_ParamLimits

0xf848,	// (0x0004b4a9) slider_imed_adjust_pane_g_ParamLimits

0x9136,	// (0x00044d97) aid_touch_area_cam4_ParamLimits

0x9136,	// (0x00044d97) aid_touch_area_cam4

0xeffd,	// (0x0004ac5e) battery_pane_cp01

0x91ea,	// (0x00044e4b) main_camera4_pane_g6_ParamLimits

0x91ea,	// (0x00044e4b) main_camera4_pane_g6

0x920d,	// (0x00044e6e) main_camera4_pane_t2_ParamLimits

0x920d,	// (0x00044e6e) main_camera4_pane_t2

0x0001,

0xf94b,	// (0x0004b5ac) main_camera4_pane_t_ParamLimits

0xf94b,	// (0x0004b5ac) main_camera4_pane_t

0x9265,	// (0x00044ec6) aid_touch_area_vid4_ParamLimits

0x9265,	// (0x00044ec6) aid_touch_area_vid4

0x92c3,	// (0x00044f24) main_video4_pane_g5_ParamLimits

0x92c3,	// (0x00044f24) main_video4_pane_g5

0x92ea,	// (0x00044f4b) vid4_progress_pane_ParamLimits

0x92ea,	// (0x00044f4b) vid4_progress_pane

0xd32a,	// (0x00048f8b) main_cset_slider_pane_g18_ParamLimits

0xd32a,	// (0x00048f8b) main_cset_slider_pane_g18

0xd542,	// (0x000491a3) cell_cam4_burst_pane_g2_ParamLimits

0xd542,	// (0x000491a3) cell_cam4_burst_pane_g2

0x0001,

0xfa9b,	// (0x0004b6fc) cell_cam4_burst_pane_g_ParamLimits

0xfa9b,	// (0x0004b6fc) cell_cam4_burst_pane_g

0x0fca,	// (0x0003cc2b) bg_cl_pane_ParamLimits

0x0fca,	// (0x0003cc2b) bg_cl_pane

0xa0b4,	// (0x00045d15) cl_header_pane_ParamLimits

0xa0b4,	// (0x00045d15) cl_header_pane

0xa0c8,	// (0x00045d29) cl_listscroll_pane_ParamLimits

0xa0c8,	// (0x00045d29) cl_listscroll_pane

0xd720,	// (0x00049381) bg_cl_pane_g1

0xd728,	// (0x00049389) bg_cl_pane_g2

0xd730,	// (0x00049391) bg_cl_pane_g3

0xd738,	// (0x00049399) bg_cl_pane_g4

0xd740,	// (0x000493a1) bg_cl_pane_g5

0xd748,	// (0x000493a9) bg_cl_pane_g6

0xd750,	// (0x000493b1) bg_cl_pane_g7

0xd758,	// (0x000493b9) bg_cl_pane_g8

0xd760,	// (0x000493c1) bg_cl_pane_g9

0x0008,

0xfad6,	// (0x0004b737) bg_cl_pane_g

0xa0d8,	// (0x00045d39) aid_height_cl_leading_ParamLimits

0xa0d8,	// (0x00045d39) aid_height_cl_leading

0xa0e4,	// (0x00045d45) aid_height_cl_text_ParamLimits

0xa0e4,	// (0x00045d45) aid_height_cl_text

0x1ad7,	// (0x0003d738) bg_cl_header_pane_ParamLimits

0x1ad7,	// (0x0003d738) bg_cl_header_pane

0xa103,	// (0x00045d64) cl_header_pane_g1_ParamLimits

0xa103,	// (0x00045d64) cl_header_pane_g1

0xa119,	// (0x00045d7a) cl_header_pane_t1_ParamLimits

0xa119,	// (0x00045d7a) cl_header_pane_t1

0xd768,	// (0x000493c9) cl_list_pane

0xd2fd,	// (0x00048f5e) hc_scroll_pane_cp01

0x13a6,	// (0x0003d007) bg_cl_header_pane_g1

0xd1e3,	// (0x00048e44) bg_cl_header_pane_g2

0x13c6,	// (0x0003d027) bg_cl_header_pane_g3

0xd1f3,	// (0x00048e54) bg_cl_header_pane_g4

0xd1eb,	// (0x00048e4c) bg_cl_header_pane_g5

0xd443,	// (0x000490a4) bg_cl_header_pane_g6

0xd20b,	// (0x00048e6c) bg_cl_header_pane_g7

0xd213,	// (0x00048e74) bg_cl_header_pane_g8

0xd203,	// (0x00048e64) bg_cl_header_pane_g9

0x0008,

0xfae9,	// (0x0004b74a) bg_cl_header_pane_g

0xa132,	// (0x00045d93) hc_cl_list_double_graphic_heading_pane_ParamLimits

0xa132,	// (0x00045d93) hc_cl_list_double_graphic_heading_pane

0xa143,	// (0x00045da4) hc_cl_list_single_graphic_pane_ParamLimits

0xa143,	// (0x00045da4) hc_cl_list_single_graphic_pane

0xa159,	// (0x00045dba) hc_cl_list_single_graphic_pane_g1_ParamLimits

0xa159,	// (0x00045dba) hc_cl_list_single_graphic_pane_g1

0xa165,	// (0x00045dc6) hc_cl_list_single_graphic_pane_g2_ParamLimits

0xa165,	// (0x00045dc6) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfafc,	// (0x0004b75d) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfafc,	// (0x0004b75d) hc_cl_list_single_graphic_pane_g

0xa179,	// (0x00045dda) hc_cl_list_single_graphic_pane_t1_ParamLimits

0xa179,	// (0x00045dda) hc_cl_list_single_graphic_pane_t1

0xa159,	// (0x00045dba) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0xa159,	// (0x00045dba) hc_cl_list_double_graphic_heading_pane_g1

0xa18e,	// (0x00045def) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0xa18e,	// (0x00045def) hc_cl_list_double_graphic_heading_pane_g2

0xa1a2,	// (0x00045e03) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0xa1a2,	// (0x00045e03) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfb01,	// (0x0004b762) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfb01,	// (0x0004b762) hc_cl_list_double_graphic_heading_pane_g

0xa1b6,	// (0x00045e17) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0xa1b6,	// (0x00045e17) hc_cl_list_double_graphic_heading_pane_t1

0xa1cb,	// (0x00045e2c) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0xa1cb,	// (0x00045e2c) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfb08,	// (0x0004b769) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfb08,	// (0x0004b769) hc_cl_list_double_graphic_heading_pane_t

0xf08b,	// (0x0004acec) vid4_progress_pane_g1

0xf097,	// (0x0004acf8) vid4_progress_pane_g2

0xf0a3,	// (0x0004ad04) vid4_progress_pane_g3

0xf0b2,	// (0x0004ad13) vid4_progress_pane_g4

0x0004,

0xfb0d,	// (0x0004b76e) vid4_progress_pane_g

0xf0d0,	// (0x0004ad31) vid4_progress_pane_t1

0xf0e6,	// (0x0004ad47) vid4_progress_pane_t2

0x0002,

0xfb18,	// (0x0004b779) vid4_progress_pane_t

0xf111,	// (0x0004ad72) wait_bar_pane_cp07

0xc527,	// (0x00048188) blid_firmament_pane_ParamLimits

0xc56a,	// (0x000481cb) popup_blid_sat_info2_window_g1

0xc58e,	// (0x000481ef) popup_blid_sat_info2_window_t3

0xc59c,	// (0x000481fd) popup_blid_sat_info2_window_t4

0xc5aa,	// (0x0004820b) popup_blid_sat_info2_window_t5

0xc5b8,	// (0x00048219) popup_blid_sat_info2_window_t6

0xc5c8,	// (0x00048229) popup_blid_sat_info2_window_t7

0xc5d6,	// (0x00048237) popup_blid_sat_info2_window_t8

0xc5e4,	// (0x00048245) popup_blid_sat_info2_window_t9

0xc5f2,	// (0x00048253) popup_blid_sat_info2_window_t10

0xc6b4,	// (0x00048315) aid_firma_cardinal_ParamLimits

0xc6c8,	// (0x00048329) blid_firmament_pane_t1_ParamLimits

0xc6df,	// (0x00048340) blid_firmament_pane_t2_ParamLimits

0xc6f6,	// (0x00048357) blid_firmament_pane_t3_ParamLimits

0xc70d,	// (0x0004836e) blid_firmament_pane_t4_ParamLimits

0xf73a,	// (0x0004b39b) blid_firmament_pane_t_ParamLimits

0xc724,	// (0x00048385) blid_sat_info_pane_ParamLimits

0x1ad7,	// (0x0003d738) main_cam_set_pane_ParamLimits

0x87e9,	// (0x0004444a) aid_size_cell_colour_35_ParamLimits

0x8809,	// (0x0004446a) aid_size_cell_colour_112_ParamLimits

0x8829,	// (0x0004448a) aid_size_cell_effect_ParamLimits

0xc22e,	// (0x00047e8f) bg_tb_trans_pane_cp02_ParamLimits

0x15f2,	// (0x0003d253) heading_imed_pane_ParamLimits

0x8849,	// (0x000444aa) listscroll_imed_pane_ParamLimits

0x6595,	// (0x000421f6) popup_call2_audio_first_window_g5_ParamLimits

0x6595,	// (0x000421f6) popup_call2_audio_first_window_g5

0x8de1,	// (0x00044a42) aid_size_touch_image3_arrow_left_ParamLimits

0x8de1,	// (0x00044a42) aid_size_touch_image3_arrow_left

0x8e0d,	// (0x00044a6e) aid_size_touch_image3_arrow_right_ParamLimits

0x8e0d,	// (0x00044a6e) aid_size_touch_image3_arrow_right

0xf0fc,	// (0x0004ad5d) vid4_progress_pane_t3

0x8b5c,	// (0x000447bd) main_hwr_training_symbol_option_pane_ParamLimits

0x8b5c,	// (0x000447bd) main_hwr_training_symbol_option_pane

0xcf68,	// (0x00048bc9) popup_hwr_training_preview_window_ParamLimits

0xcf68,	// (0x00048bc9) popup_hwr_training_preview_window

0x8b7c,	// (0x000447dd) hwr_training_navi_pane_g5_ParamLimits

0x8b7c,	// (0x000447dd) hwr_training_navi_pane_g5

0xd1d1,	// (0x00048e32) popup_char_count_window

0x1ad7,	// (0x0003d738) bg_popup_sub_pane_cp20_ParamLimits

0x9d74,	// (0x000459d5) list_vitu2_match_list_pane_ParamLimits

0x9d83,	// (0x000459e4) vitu2_page_scroll_pane_ParamLimits

0x9d83,	// (0x000459e4) vitu2_page_scroll_pane

0xd7cb,	// (0x0004942c) list_single_hwr_training_symbol_option_pane_ParamLimits

0xd7cb,	// (0x0004942c) list_single_hwr_training_symbol_option_pane

0xd7de,	// (0x0004943f) list_single_hwr_training_symbol_option_pane_g1

0xd7e6,	// (0x00049447) list_single_hwr_training_symbol_option_pane_t1

0xd7f4,	// (0x00049455) bg_button_pane_cp023

0xd7fd,	// (0x0004945e) bg_button_pane_cp024

0xa1ea,	// (0x00045e4b) vitu2_page_scroll_pane_g1

0xa1f2,	// (0x00045e53) vitu2_page_scroll_pane_g2

0x0001,

0xfb1f,	// (0x0004b780) vitu2_page_scroll_pane_g

0xa1fa,	// (0x00045e5b) vitu2_page_scroll_pane_t1

0xd830,	// (0x00049491) popup_char_count_window_g1

0xd839,	// (0x0004949a) popup_char_count_window_g2

0xd842,	// (0x000494a3) popup_char_count_window_g3

0x0002,

0xfb24,	// (0x0004b785) popup_char_count_window_g

0xd84b,	// (0x000494ac) popup_char_count_window_t1

0x081d,	// (0x0003c47e) main_vded2_pane

0xcc67,	// (0x000488c8) aid_size_cell_imed_line

0xcc71,	// (0x000488d2) grid_imed_line_width_pane

0x934b,	// (0x00044fac) vid4_indicators_pane_g4

0xd859,	// (0x000494ba) cell_imed_line_width_pane_ParamLimits

0xd859,	// (0x000494ba) cell_imed_line_width_pane

0xd86d,	// (0x000494ce) cell_imed_line_width_pane_g1

0xd876,	// (0x000494d7) cell_imed_line_width_pane_g2

0x0001,

0xfb2b,	// (0x0004b78c) cell_imed_line_width_pane_g

0xa209,	// (0x00045e6a) main_vded2_pane_g1_ParamLimits

0xa209,	// (0x00045e6a) main_vded2_pane_g1

0xa21f,	// (0x00045e80) main_vded2_pane_g2_ParamLimits

0xa21f,	// (0x00045e80) main_vded2_pane_g2

0x0001,

0xfb30,	// (0x0004b791) main_vded2_pane_g_ParamLimits

0xfb30,	// (0x0004b791) main_vded2_pane_g

0xa231,	// (0x00045e92) vded2_slider_pane_ParamLimits

0xa231,	// (0x00045e92) vded2_slider_pane

0xa241,	// (0x00045ea2) aid_size_touch_vded2_end

0xa24b,	// (0x00045eac) aid_size_touch_vded2_playhead

0xd87e,	// (0x000494df) aid_size_touch_vded2_start

0xd886,	// (0x000494e7) vded2_slider_bg_pane

0xd88f,	// (0x000494f0) vded2_slider_pane_g1

0xd898,	// (0x000494f9) vded2_slider_pane_g2

0xa255,	// (0x00045eb6) vded2_slider_pane_g3

0x0002,

0xfb35,	// (0x0004b796) vded2_slider_pane_g

0xd8a0,	// (0x00049501) vded2_slider_bg_pane_g1

0xd8a9,	// (0x0004950a) vded2_slider_bg_pane_g2

0xd8b2,	// (0x00049513) vded2_slider_bg_pane_g3

0x0002,

0xfb3c,	// (0x0004b79d) vded2_slider_bg_pane_g

0x5760,	// (0x000413c1) aid_postcard_touch_down_pane_ParamLimits

0x5760,	// (0x000413c1) aid_postcard_touch_down_pane

0x5776,	// (0x000413d7) aid_postcard_touch_up_pane_ParamLimits

0x5776,	// (0x000413d7) aid_postcard_touch_up_pane

0x081d,	// (0x0003c47e) main_blid2_pane

0xc23c,	// (0x00047e9d) popup_blid2_search_window

0x081d,	// (0x0003c47e) blid2_gps_pane

0x081d,	// (0x0003c47e) blid2_navig_pane

0x081d,	// (0x0003c47e) blid2_search_pane

0x081d,	// (0x0003c47e) blid2_tripm_pane

0xa260,	// (0x00045ec1) blid2_search_pane_g1_ParamLimits

0xa260,	// (0x00045ec1) blid2_search_pane_g1

0xa27a,	// (0x00045edb) blid2_search_pane_t1_ParamLimits

0xa27a,	// (0x00045edb) blid2_search_pane_t1

0xa28c,	// (0x00045eed) aid_size_cell_blid2_gps_ParamLimits

0xa28c,	// (0x00045eed) aid_size_cell_blid2_gps

0xa2a4,	// (0x00045f05) blid2_gps_pane_g1_ParamLimits

0xa2a4,	// (0x00045f05) blid2_gps_pane_g1

0xa2b8,	// (0x00045f19) grid_blid2_satellite_pane_ParamLimits

0xa2b8,	// (0x00045f19) grid_blid2_satellite_pane

0xa2d2,	// (0x00045f33) blid2_navig_pane_g1_ParamLimits

0xa2d2,	// (0x00045f33) blid2_navig_pane_g1

0xa2de,	// (0x00045f3f) blid2_navig_pane_t1_ParamLimits

0xa2de,	// (0x00045f3f) blid2_navig_pane_t1

0xa2f9,	// (0x00045f5a) blid2_navig_pane_t2_ParamLimits

0xa2f9,	// (0x00045f5a) blid2_navig_pane_t2

0x0001,

0xfb43,	// (0x0004b7a4) blid2_navig_pane_t_ParamLimits

0xfb43,	// (0x0004b7a4) blid2_navig_pane_t

0xa314,	// (0x00045f75) blid2_navig_ring_pane_ParamLimits

0xa314,	// (0x00045f75) blid2_navig_ring_pane

0xa32d,	// (0x00045f8e) blid2_speed_pane_ParamLimits

0xa32d,	// (0x00045f8e) blid2_speed_pane

0xa339,	// (0x00045f9a) blid2_tripm_pane_g1_ParamLimits

0xa339,	// (0x00045f9a) blid2_tripm_pane_g1

0xa352,	// (0x00045fb3) blid2_tripm_pane_g2_ParamLimits

0xa352,	// (0x00045fb3) blid2_tripm_pane_g2

0xa366,	// (0x00045fc7) blid2_tripm_pane_g3_ParamLimits

0xa366,	// (0x00045fc7) blid2_tripm_pane_g3

0xa37a,	// (0x00045fdb) blid2_tripm_pane_g4_ParamLimits

0xa37a,	// (0x00045fdb) blid2_tripm_pane_g4

0xa38e,	// (0x00045fef) blid2_tripm_pane_g5_ParamLimits

0xa38e,	// (0x00045fef) blid2_tripm_pane_g5

0x0005,

0xfb48,	// (0x0004b7a9) blid2_tripm_pane_g_ParamLimits

0xfb48,	// (0x0004b7a9) blid2_tripm_pane_g

0xa3b4,	// (0x00046015) blid2_tripm_pane_t1_ParamLimits

0xa3b4,	// (0x00046015) blid2_tripm_pane_t1

0xa3cf,	// (0x00046030) blid2_tripm_pane_t2_ParamLimits

0xa3cf,	// (0x00046030) blid2_tripm_pane_t2

0xa3e8,	// (0x00046049) blid2_tripm_pane_t3_ParamLimits

0xa3e8,	// (0x00046049) blid2_tripm_pane_t3

0x0003,

0xfb55,	// (0x0004b7b6) blid2_tripm_pane_t_ParamLimits

0xfb55,	// (0x0004b7b6) blid2_tripm_pane_t

0xa42f,	// (0x00046090) cell_blid2_satellite_pane_ParamLimits

0xa42f,	// (0x00046090) cell_blid2_satellite_pane

0xa44d,	// (0x000460ae) cell_blid2_satellite_pane_g1

0xd8bb,	// (0x0004951c) cell_blid2_satellite_pane_t1

0xc734,	// (0x00048395) blid2_speed_pane_g1

0xd8c9,	// (0x0004952a) blid2_speed_pane_t1

0xd8d7,	// (0x00049538) blid2_speed_pane_t2

0x0001,

0xfb5e,	// (0x0004b7bf) blid2_speed_pane_t

0xc734,	// (0x00048395) blid2_navig_ring_pane_g1

0xa456,	// (0x000460b7) blid2_navig_ring_pane_g2

0xa45e,	// (0x000460bf) blid2_navig_ring_pane_g3

0xa466,	// (0x000460c7) blid2_navig_ring_pane_g4

0xa46e,	// (0x000460cf) blid2_navig_ring_pane_g5

0x0004,

0xfb63,	// (0x0004b7c4) blid2_navig_ring_pane_g

0x081d,	// (0x0003c47e) bg_popup_window_pane_cp011

0xd8e5,	// (0x00049546) popup_blid2_search_window_g1

0xd8ed,	// (0x0004954e) popup_blid2_search_window_t1

0xd8fb,	// (0x0004955c) popup_blid2_search_window_t2

0x0001,

0xfb6e,	// (0x0004b7cf) popup_blid2_search_window_t

0x12b5,	// (0x0003cf16) main_browser_pane_g1

0x0fca,	// (0x0003cc2b) main_browser_pane_ParamLimits

0x1ad7,	// (0x0003d738) bg_button_pane_cp011_ParamLimits

0x9624,	// (0x00045285) cell_vitu2_function_pane_g1_ParamLimits

0x1ad7,	// (0x0003d738) bg_popup_sub_pane_cp22_ParamLimits

0x2c21,	// (0x0003e882) input_focus_pane_cp08_ParamLimits

0x9eb8,	// (0x00045b19) popup_vitu2_query_button_pane_ParamLimits

0x9eb8,	// (0x00045b19) popup_vitu2_query_button_pane

0x2c17,	// (0x0003e878) popup_vitu2_query_input_button_pane

0xd498,	// (0x000490f9) popup_vitu2_query_window_g1_ParamLimits

0x2c2e,	// (0x0003e88f) popup_vitu2_query_window_g2_ParamLimits

0xfa75,	// (0x0004b6d6) popup_vitu2_query_window_g_ParamLimits

0x081d,	// (0x0003c47e) bg_button_pane_cp026

0xa476,	// (0x000460d7) popup_vitu2_query_input_button_pane_g1

0x081d,	// (0x0003c47e) bg_button_pane_cp025

0xd909,	// (0x0004956a) popup_vitu2_query_button_pane_t1

0x7cb0,	// (0x00043911) main_mp3_pane_t6

0x7cbe,	// (0x0004391f) popup_slider_window_cp01

0xf00d,	// (0x0004ac6e) cam4_battery_pane

0xf01d,	// (0x0004ac7e) cam4_battery_pane_cp02

0xa1e0,	// (0x00045e41) cam4_battery_pane_cp01

0xf083,	// (0x0004ace4) cam4_battery_pane_cp03

0xc734,	// (0x00048395) cam4_battery_pane_g1

0xd917,	// (0x00049578) cam4_battery_pane_g2

0x0001,

0xfb73,	// (0x0004b7d4) cam4_battery_pane_g

0xc600,	// (0x00048261) popup_blid_sat_info2_window_t11

0x500d,	// (0x00040c6e) aid_size_touch_mv_arrow_left_ParamLimits

0x5036,	// (0x00040c97) aid_size_touch_mv_arrow_right_ParamLimits

0x1a03,	// (0x0003d664) navi_pane_g1_ParamLimits

0x505f,	// (0x00040cc0) navi_pane_g2_ParamLimits

0x508d,	// (0x00040cee) navi_pane_g3_ParamLimits

0xf44c,	// (0x0004b0ad) navi_pane_g_ParamLimits

0x50e5,	// (0x00040d46) navi_pane_mv_t1_ParamLimits

0x8855,	// (0x000444b6) grid_imed_effect_pane_ParamLimits

0x11fe,	// (0x0003ce5f) aid_placing_vt_slider_lsc

0x1206,	// (0x0003ce67) aid_placing_vt_slider_prt

0x1ad7,	// (0x0003d738) bg_tb_trans_pane_cp01_ParamLimits

0xc8c0,	// (0x00048521) popup_image_details_window_g1_ParamLimits

0xc8d3,	// (0x00048534) popup_image_details_window_g2_ParamLimits

0xc8e8,	// (0x00048549) popup_image_details_window_g3_ParamLimits

0xc8e8,	// (0x00048549) popup_image_details_window_g3

0xf77f,	// (0x0004b3e0) popup_image_details_window_g_ParamLimits

0xc8fc,	// (0x0004855d) popup_image_details_window_t1_ParamLimits

0xc90e,	// (0x0004856f) popup_image_details_window_t2_ParamLimits

0xc927,	// (0x00048588) popup_image_details_window_t3_ParamLimits

0xc93b,	// (0x0004859c) popup_image_details_window_t4_ParamLimits

0xc956,	// (0x000485b7) popup_image_details_window_t5_ParamLimits

0xf786,	// (0x0004b3e7) popup_image_details_window_t_ParamLimits

0xa0f0,	// (0x00045d51) cl_header_name_pane_ParamLimits

0xa0f0,	// (0x00045d51) cl_header_name_pane

0xa47e,	// (0x000460df) cl_header_name_pane_t1_ParamLimits

0xa47e,	// (0x000460df) cl_header_name_pane_t1

0xa49f,	// (0x00046100) cl_header_name_pane_t2_ParamLimits

0xa49f,	// (0x00046100) cl_header_name_pane_t2

0xa4e1,	// (0x00046142) cl_header_name_pane_t3_ParamLimits

0xa4e1,	// (0x00046142) cl_header_name_pane_t3

0x0002,

0xfb78,	// (0x0004b7d9) cl_header_name_pane_t_ParamLimits

0xfb78,	// (0x0004b7d9) cl_header_name_pane_t

0x50b6,	// (0x00040d17) navi_pane_mv_g2_ParamLimits

0xd18e,	// (0x00048def) field_vitu2_entry_pane_g1_ParamLimits

0xd19a,	// (0x00048dfb) field_vitu2_entry_pane_g2_ParamLimits

0xd1a6,	// (0x00048e07) field_vitu2_entry_pane_g3_ParamLimits

0xd1a6,	// (0x00048e07) field_vitu2_entry_pane_g3

0xf974,	// (0x0004b5d5) field_vitu2_entry_pane_g_ParamLimits

0x95a0,	// (0x00045201) cell_vitu2_itu_pane_g1_ParamLimits

0x95b0,	// (0x00045211) cell_vitu2_itu_pane_g2_ParamLimits

0x95b0,	// (0x00045211) cell_vitu2_itu_pane_g2

0x0001,

0xf980,	// (0x0004b5e1) cell_vitu2_itu_pane_g_ParamLimits

0xf980,	// (0x0004b5e1) cell_vitu2_itu_pane_g

0x1ad7,	// (0x0003d738) bg_vkb2_func_pane_cp05_ParamLimits

0x1ad7,	// (0x0003d738) bg_vkb2_func_pane_cp05

0x1ad7,	// (0x0003d738) bg_vkb2_func_pane_cp03

0x1ad7,	// (0x0003d738) bg_vkb2_func_pane_cp04

0x1ad7,	// (0x0003d738) bg_vkb2_func_pane_cp10_ParamLimits

0x1ad7,	// (0x0003d738) bg_vkb2_func_pane_cp10

0x2cd7,	// (0x0003e938) bg_vkb2_func_pane_cp08

0xa09a,	// (0x00045cfb) bg_vkb2_func_pane_cp06

0xa0a8,	// (0x00045d09) bg_vkb2_func_pane_cp07

0xd806,	// (0x00049467) bg_vkb2_func_pane_cp11_ParamLimits

0xd806,	// (0x00049467) bg_vkb2_func_pane_cp11

0xd81b,	// (0x0004947c) bg_vkb2_func_pane_cp12_ParamLimits

0xd81b,	// (0x0004947c) bg_vkb2_func_pane_cp12

0x081d,	// (0x0003c47e) bg_vkb2_func_pane_cp09

0xd1e3,	// (0x00048e44) bg_vkb2_func_pane_g1

0x13c6,	// (0x0003d027) bg_vkb2_func_pane_g2

0xd1eb,	// (0x00048e4c) bg_vkb2_func_pane_g3

0xd1f3,	// (0x00048e54) bg_vkb2_func_pane_g4

0xd443,	// (0x000490a4) bg_vkb2_func_pane_g5

0xd20b,	// (0x00048e6c) bg_vkb2_func_pane_g6

0xd213,	// (0x00048e74) bg_vkb2_func_pane_g7

0xd203,	// (0x00048e64) bg_vkb2_func_pane_g8

0x13a6,	// (0x0003d007) bg_vkb2_func_pane_g9

0x0008,

0xfb7f,	// (0x0004b7e0) bg_vkb2_func_pane_g

0xa3a2,	// (0x00046003) blid2_tripm_pane_g6_ParamLimits

0xa3a2,	// (0x00046003) blid2_tripm_pane_g6

0xd020,	// (0x00048c81) mp4_progress_pane_g1

0xa41b,	// (0x0004607c) blid2_tripm_values_pane_ParamLimits

0xa41b,	// (0x0004607c) blid2_tripm_values_pane

0xa512,	// (0x00046173) blid2_tripm_values_pane_t1

0xa520,	// (0x00046181) blid2_tripm_values_pane_t2

0xa52e,	// (0x0004618f) blid2_tripm_values_pane_t3

0xa53c,	// (0x0004619d) blid2_tripm_values_pane_t4

0xa54a,	// (0x000461ab) blid2_tripm_values_pane_t5

0xa558,	// (0x000461b9) blid2_tripm_values_pane_t6

0xa566,	// (0x000461c7) blid2_tripm_values_pane_t7

0xa574,	// (0x000461d5) blid2_tripm_values_pane_t8

0xa582,	// (0x000461e3) blid2_tripm_values_pane_t9

0x0008,

0xfb92,	// (0x0004b7f3) blid2_tripm_values_pane_t

0x419f,	// (0x0003fe00) call_video_pane_t1_ParamLimits

0x41b3,	// (0x0003fe14) call_video_pane_t2_ParamLimits

0xf2d5,	// (0x0004af36) call_video_pane_t_ParamLimits

0x2a23,	// (0x0003e684) msg_header_pane_g1_ParamLimits

0x56ca,	// (0x0004132b) msg_header_pane_g2_ParamLimits

0x56ca,	// (0x0004132b) msg_header_pane_g2

0x0001,

0xf4ef,	// (0x0004b150) msg_header_pane_g_ParamLimits

0xf4ef,	// (0x0004b150) msg_header_pane_g

0x0fca,	// (0x0003cc2b) main_clock2_pane_ParamLimits

0x8581,	// (0x000441e2) grid_clock2_toolbar_pane_ParamLimits

0x8581,	// (0x000441e2) grid_clock2_toolbar_pane

0x8581,	// (0x000441e2) listscroll_clock2_pane_ParamLimits

0x8581,	// (0x000441e2) listscroll_clock2_pane

0x865d,	// (0x000442be) main_clock2_pane_t3_ParamLimits

0x865d,	// (0x000442be) main_clock2_pane_t3

0x8678,	// (0x000442d9) main_clock2_pane_t4_ParamLimits

0x8678,	// (0x000442d9) main_clock2_pane_t4

0xd921,	// (0x00049582) cell_clock2_toolbar_pane

0xd929,	// (0x0004958a) cell_clock2_toolbar_pane_cp01

0xd929,	// (0x0004958a) cell_clock2_toolbar_pane_cp02

0xd931,	// (0x00049592) cell_clock2_toolbar_pane_cp03

0xd939,	// (0x0004959a) list_clock2_pane

0x195a,	// (0x0003d5bb) scroll_pane_cp10

0xd941,	// (0x000495a2) list_single_clock2_pane_ParamLimits

0xd941,	// (0x000495a2) list_single_clock2_pane

0x1aa3,	// (0x0003d704) list_highlight_pane_cp08

0xd94e,	// (0x000495af) list_single_clock2_pane_t1

0xd95c,	// (0x000495bd) list_single_clock2_pane_t2

0x0001,

0xfba5,	// (0x0004b806) list_single_clock2_pane_t

0x081d,	// (0x0003c47e) bg_button_pane_cp10

0xd96a,	// (0x000495cb) cell_clock2_toolbar_pane_g1

0x56de,	// (0x0004133f) aid_main_viewer_pane_g1_ParamLimits

0x56de,	// (0x0004133f) aid_main_viewer_pane_g1

0x56ec,	// (0x0004134d) aid_main_viewer_pane_g2_ParamLimits

0x56ec,	// (0x0004134d) aid_main_viewer_pane_g2

0x56fa,	// (0x0004135b) aid_main_viewer_pane_g3_ParamLimits

0x56fa,	// (0x0004135b) aid_main_viewer_pane_g3

0x5709,	// (0x0004136a) aid_main_viewer_pane_g4_ParamLimits

0x5709,	// (0x0004136a) aid_main_viewer_pane_g4

0x0003,

0xf500,	// (0x0004b161) aid_main_viewer_pane_g_ParamLimits

0xf500,	// (0x0004b161) aid_main_viewer_pane_g

0x6ed3,	// (0x00042b34) main_calc_pane_ParamLimits

0x6ee7,	// (0x00042b48) main_dialer2_pane_ParamLimits

0x081d,	// (0x0003c47e) main_cam6_pane

0x081d,	// (0x0003c47e) main_vid6_pane

0x858d,	// (0x000441ee) listscroll_gen_pane_cp06_ParamLimits

0x858d,	// (0x000441ee) listscroll_gen_pane_cp06

0x8693,	// (0x000442f4) main_clock2_pane_t5_ParamLimits

0x8693,	// (0x000442f4) main_clock2_pane_t5

0x86ea,	// (0x0004434b) aid_call2_pane_cp10_ParamLimits

0x86fc,	// (0x0004435d) aid_call_pane_cp10_ParamLimits

0x19d8,	// (0x0003d639) popup_clock_analogue_window_cp10_g1_ParamLimits

0x19d8,	// (0x0003d639) popup_clock_analogue_window_cp10_g2_ParamLimits

0x870e,	// (0x0004436f) popup_clock_analogue_window_cp10_g3_ParamLimits

0x870e,	// (0x0004436f) popup_clock_analogue_window_cp10_g4_ParamLimits

0x19d8,	// (0x0003d639) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf836,	// (0x0004b497) popup_clock_analogue_window_cp10_g_ParamLimits

0x8720,	// (0x00044381) popup_clock_analogue_window_cp10_t1_ParamLimits

0x8d8e,	// (0x000449ef) cell_dialer2_keypad_pane_g2_ParamLimits

0x8d8e,	// (0x000449ef) cell_dialer2_keypad_pane_g2

0x0001,

0xf91c,	// (0x0004b57d) cell_dialer2_keypad_pane_g_ParamLimits

0xf91c,	// (0x0004b57d) cell_dialer2_keypad_pane_g

0x8daa,	// (0x00044a0b) cell_dialer2_keypad_pane_t1

0x993b,	// (0x0004559c) main_cset_text2_pane_ParamLimits

0x993b,	// (0x0004559c) main_cset_text2_pane

0xd678,	// (0x000492d9) area_vitu2_query_pane_g1_ParamLimits

0x2c9e,	// (0x0003e8ff) area_vitu2_query_pane_g2_ParamLimits

0xfac2,	// (0x0004b723) area_vitu2_query_pane_g_ParamLimits

0xd6fc,	// (0x0004935d) area_vitu2_query_pane_t7_ParamLimits

0xd6fc,	// (0x0004935d) area_vitu2_query_pane_t7

0xa09a,	// (0x00045cfb) bg_button_pane_cp018_ParamLimits

0xa0a8,	// (0x00045d09) bg_button_pane_cp021_ParamLimits

0x2cd7,	// (0x0003e938) bg_button_pane_cp022_ParamLimits

0x2cd7,	// (0x0003e938) bg_vkb2_func_pane_cp08_ParamLimits

0xa09a,	// (0x00045cfb) bg_vkb2_func_pane_cp06_ParamLimits

0xa0a8,	// (0x00045d09) bg_vkb2_func_pane_cp07_ParamLimits

0x2ce6,	// (0x0003e947) input_focus_pane_cp09_ParamLimits

0xf121,	// (0x0004ad82) cam6_autofocus_pane_ParamLimits

0xf121,	// (0x0004ad82) cam6_autofocus_pane

0xa590,	// (0x000461f1) cam6_image_uncrop_pane_ParamLimits

0xa590,	// (0x000461f1) cam6_image_uncrop_pane

0xa59f,	// (0x00046200) cam6_indi_pane_ParamLimits

0xa59f,	// (0x00046200) cam6_indi_pane

0xa5b5,	// (0x00046216) cam6_mode_pane_ParamLimits

0xa5b5,	// (0x00046216) cam6_mode_pane

0xa5c7,	// (0x00046228) cam6_timer_pane_ParamLimits

0xa5c7,	// (0x00046228) cam6_timer_pane

0xa5d3,	// (0x00046234) cam6_zoom_pane_ParamLimits

0xa5d3,	// (0x00046234) cam6_zoom_pane

0xa5df,	// (0x00046240) cam6_mode_pane_g1_ParamLimits

0xa5df,	// (0x00046240) cam6_mode_pane_g1

0xa5ef,	// (0x00046250) cam6_mode_pane_g2_ParamLimits

0xa5ef,	// (0x00046250) cam6_mode_pane_g2

0xa5ff,	// (0x00046260) cam6_mode_pane_g3_ParamLimits

0xa5ff,	// (0x00046260) cam6_mode_pane_g3

0xa60f,	// (0x00046270) cam6_mode_pane_g4_ParamLimits

0xa60f,	// (0x00046270) cam6_mode_pane_g4

0x0003,

0xfbaa,	// (0x0004b80b) cam6_mode_pane_g_ParamLimits

0xfbaa,	// (0x0004b80b) cam6_mode_pane_g

0xd972,	// (0x000495d3) bg_tb_trans_pane_cp08_ParamLimits

0xd972,	// (0x000495d3) bg_tb_trans_pane_cp08

0xd980,	// (0x000495e1) cam6_battery_pane_ParamLimits

0xd980,	// (0x000495e1) cam6_battery_pane

0xd996,	// (0x000495f7) cam6_indi_pane_g1_ParamLimits

0xd996,	// (0x000495f7) cam6_indi_pane_g1

0xd9a8,	// (0x00049609) cam6_indi_pane_g2_ParamLimits

0xd9a8,	// (0x00049609) cam6_indi_pane_g2

0xd9ba,	// (0x0004961b) cam6_indi_pane_g3_ParamLimits

0xd9ba,	// (0x0004961b) cam6_indi_pane_g3

0x0002,

0xfbb3,	// (0x0004b814) cam6_indi_pane_g_ParamLimits

0xfbb3,	// (0x0004b814) cam6_indi_pane_g

0xd9cc,	// (0x0004962d) cam6_indi_pane_t1_ParamLimits

0xd9cc,	// (0x0004962d) cam6_indi_pane_t1

0xa61f,	// (0x00046280) cam6_autofocus_pane_g1

0xa627,	// (0x00046288) cam6_autofocus_pane_g2

0xa62f,	// (0x00046290) cam6_autofocus_pane_g3

0xa637,	// (0x00046298) cam6_autofocus_pane_g4

0x0003,

0xfbba,	// (0x0004b81b) cam6_autofocus_pane_g

0xd9f2,	// (0x00049653) cam6_timer_pane_g1

0xd9fa,	// (0x0004965b) cam6_timer_pane_t1

0xda08,	// (0x00049669) cam6_zoom_cont_pane

0xda10,	// (0x00049671) cam6_zoom_pane_g1

0xda18,	// (0x00049679) cam6_zoom_pane_g2

0xa63f,	// (0x000462a0) cam6_zoom_pane_g3

0x0002,

0xfbc3,	// (0x0004b824) cam6_zoom_pane_g

0xc734,	// (0x00048395) cam6_battery_pane_g1

0xc734,	// (0x00048395) cam6_battery_pane_g2

0x0001,

0xf743,	// (0x0004b3a4) cam6_battery_pane_g

0xda20,	// (0x00049681) cam6_zoom_cont_pane_g1

0xda29,	// (0x0004968a) cam6_zoom_cont_pane_g2

0xda32,	// (0x00049693) cam6_zoom_cont_pane_g3

0x0002,

0xfbca,	// (0x0004b82b) cam6_zoom_cont_pane_g

0xa65c,	// (0x000462bd) cam6_mode_pane_cp_ParamLimits

0xa65c,	// (0x000462bd) cam6_mode_pane_cp

0xa5d3,	// (0x00046234) cam6_zoom_pane_cp_ParamLimits

0xa5d3,	// (0x00046234) cam6_zoom_pane_cp

0xa66e,	// (0x000462cf) vid6_image_uncrop_cif_pane_ParamLimits

0xa66e,	// (0x000462cf) vid6_image_uncrop_cif_pane

0xa67e,	// (0x000462df) vid6_image_uncrop_nhd_pane_ParamLimits

0xa67e,	// (0x000462df) vid6_image_uncrop_nhd_pane

0xa590,	// (0x000461f1) vid6_image_uncrop_vga_pane_ParamLimits

0xa590,	// (0x000461f1) vid6_image_uncrop_vga_pane

0xa68d,	// (0x000462ee) vid6_image_uncrop_wvga_pane_ParamLimits

0xa68d,	// (0x000462ee) vid6_image_uncrop_wvga_pane

0xa69c,	// (0x000462fd) vid6_indi_pane_ParamLimits

0xa69c,	// (0x000462fd) vid6_indi_pane

0xd972,	// (0x000495d3) bg_tb_trans_pane_cp09_ParamLimits

0xd972,	// (0x000495d3) bg_tb_trans_pane_cp09

0xda4a,	// (0x000496ab) cam6_battery_pane_cp_ParamLimits

0xda4a,	// (0x000496ab) cam6_battery_pane_cp

0xda56,	// (0x000496b7) vid6_indi_pane_g1_ParamLimits

0xda56,	// (0x000496b7) vid6_indi_pane_g1

0xda68,	// (0x000496c9) vid6_indi_pane_g2_ParamLimits

0xda68,	// (0x000496c9) vid6_indi_pane_g2

0xda7a,	// (0x000496db) vid6_indi_pane_g3_ParamLimits

0xda7a,	// (0x000496db) vid6_indi_pane_g3

0xda8f,	// (0x000496f0) vid6_indi_pane_g4_ParamLimits

0xda8f,	// (0x000496f0) vid6_indi_pane_g4

0xdaa4,	// (0x00049705) vid6_indi_pane_g5_ParamLimits

0xdaa4,	// (0x00049705) vid6_indi_pane_g5

0x0004,

0xfbd1,	// (0x0004b832) vid6_indi_pane_g_ParamLimits

0xfbd1,	// (0x0004b832) vid6_indi_pane_g

0xdabe,	// (0x0004971f) vid6_indi_pane_t1_ParamLimits

0xdabe,	// (0x0004971f) vid6_indi_pane_t1

0xdad4,	// (0x00049735) vid6_indi_pane_t2_ParamLimits

0xdad4,	// (0x00049735) vid6_indi_pane_t2

0xdafc,	// (0x0004975d) vid6_indi_pane_t3_ParamLimits

0xdafc,	// (0x0004975d) vid6_indi_pane_t3

0xdb24,	// (0x00049785) vid6_indi_pane_t4_ParamLimits

0xdb24,	// (0x00049785) vid6_indi_pane_t4

0x0003,

0xfbdc,	// (0x0004b83d) vid6_indi_pane_t_ParamLimits

0xfbdc,	// (0x0004b83d) vid6_indi_pane_t

0xdb48,	// (0x000497a9) wait_bar_pane_cp08

0xa6b4,	// (0x00046315) main_cset_text2_pane_t1_ParamLimits

0xa6b4,	// (0x00046315) main_cset_text2_pane_t1

0xa647,	// (0x000462a8) listscroll_gen_pane_cp06_t1_ParamLimits

0xa647,	// (0x000462a8) listscroll_gen_pane_cp06_t1

0x081d,	// (0x0003c47e) main_cam6_set_pane

0xca4d,	// (0x000486ae) bg_tb_trans_pane_cp06_ParamLimits

0x922e,	// (0x00044e8f) cam4_indicators_pane_g1_ParamLimits

0x923b,	// (0x00044e9c) cam4_indicators_pane_g2_ParamLimits

0xf950,	// (0x0004b5b1) cam4_indicators_pane_g_ParamLimits

0x9253,	// (0x00044eb4) cam4_indicators_pane_t1_ParamLimits

0xd167,	// (0x00048dc8) bg_tb_trans_pane_cp07_ParamLimits

0x922e,	// (0x00044e8f) vid4_indicators_pane_g1_ParamLimits

0x9331,	// (0x00044f92) vid4_indicators_pane_g2_ParamLimits

0x933e,	// (0x00044f9f) vid4_indicators_pane_g3_ParamLimits

0x934b,	// (0x00044fac) vid4_indicators_pane_g4_ParamLimits

0xf962,	// (0x0004b5c3) vid4_indicators_pane_g_ParamLimits

0x9363,	// (0x00044fc4) vid4_indicators_pane_t1_ParamLimits

0xf08b,	// (0x0004acec) vid4_progress_pane_g1_ParamLimits

0xf097,	// (0x0004acf8) vid4_progress_pane_g2_ParamLimits

0xf0a3,	// (0x0004ad04) vid4_progress_pane_g3_ParamLimits

0xf0b2,	// (0x0004ad13) vid4_progress_pane_g4_ParamLimits

0xfb0d,	// (0x0004b76e) vid4_progress_pane_g_ParamLimits

0xf0d0,	// (0x0004ad31) vid4_progress_pane_t1_ParamLimits

0xf0e6,	// (0x0004ad47) vid4_progress_pane_t2_ParamLimits

0xf0fc,	// (0x0004ad5d) vid4_progress_pane_t3_ParamLimits

0xfb18,	// (0x0004b779) vid4_progress_pane_t_ParamLimits

0xf111,	// (0x0004ad72) wait_bar_pane_cp07_ParamLimits

0xa6d1,	// (0x00046332) main_cam6_set_pane_g2_ParamLimits

0xa6d1,	// (0x00046332) main_cam6_set_pane_g2

0xa6f5,	// (0x00046356) main_cset6_listscroll_pane_ParamLimits

0xa6f5,	// (0x00046356) main_cset6_listscroll_pane

0xa715,	// (0x00046376) main_cset6_slider_pane_ParamLimits

0xa715,	// (0x00046376) main_cset6_slider_pane

0xa72b,	// (0x0004638c) main_cset6_text2_pane_ParamLimits

0xa72b,	// (0x0004638c) main_cset6_text2_pane

0xdb57,	// (0x000497b8) main_cset6_text_pane

0xdb5f,	// (0x000497c0) main_cset_list_pane_copy1_ParamLimits

0xdb5f,	// (0x000497c0) main_cset_list_pane_copy1

0xdb6f,	// (0x000497d0) scroll_pane_cp028_copy1

0xa739,	// (0x0004639a) cset_list_set_pane_copy1

0xa74a,	// (0x000463ab) aid_position_infowindow_above_copy1

0xa752,	// (0x000463b3) aid_position_infowindow_below_copy1

0x2cf5,	// (0x0003e956) cset_list_set_pane_g1_copy1

0x2cfd,	// (0x0003e95e) cset_list_set_pane_g3_copy1_ParamLimits

0x2cfd,	// (0x0003e95e) cset_list_set_pane_g3_copy1

0x2d0c,	// (0x0003e96d) cset_list_set_pane_t1_copy1_ParamLimits

0x2d0c,	// (0x0003e96d) cset_list_set_pane_t1_copy1

0x1ad7,	// (0x0003d738) list_highlight_pane_cp021_copy1_ParamLimits

0x1ad7,	// (0x0003d738) list_highlight_pane_cp021_copy1

0xdb78,	// (0x000497d9) cset6_slider_pane_ParamLimits

0xdb78,	// (0x000497d9) cset6_slider_pane

0xdba4,	// (0x00049805) main_cset6_slider_pane_g1_ParamLimits

0xdba4,	// (0x00049805) main_cset6_slider_pane_g1

0xa75a,	// (0x000463bb) main_cset6_slider_pane_g2_ParamLimits

0xa75a,	// (0x000463bb) main_cset6_slider_pane_g2

0xdbcc,	// (0x0004982d) main_cset6_slider_pane_g3_ParamLimits

0xdbcc,	// (0x0004982d) main_cset6_slider_pane_g3

0xa782,	// (0x000463e3) main_cset6_slider_pane_g4_ParamLimits

0xa782,	// (0x000463e3) main_cset6_slider_pane_g4

0xa78e,	// (0x000463ef) main_cset6_slider_pane_g5_ParamLimits

0xa78e,	// (0x000463ef) main_cset6_slider_pane_g5

0xd312,	// (0x00048f73) main_cset6_slider_pane_g7_ParamLimits

0xd312,	// (0x00048f73) main_cset6_slider_pane_g7

0xd31e,	// (0x00048f7f) main_cset6_slider_pane_g8_ParamLimits

0xd31e,	// (0x00048f7f) main_cset6_slider_pane_g8

0x99e8,	// (0x00045649) main_cset6_slider_pane_g9_ParamLimits

0x99e8,	// (0x00045649) main_cset6_slider_pane_g9

0x99f4,	// (0x00045655) main_cset6_slider_pane_g10_ParamLimits

0x99f4,	// (0x00045655) main_cset6_slider_pane_g10

0x9a00,	// (0x00045661) main_cset6_slider_pane_g11_ParamLimits

0x9a00,	// (0x00045661) main_cset6_slider_pane_g11

0x9a0c,	// (0x0004566d) main_cset6_slider_pane_g12_ParamLimits

0x9a0c,	// (0x0004566d) main_cset6_slider_pane_g12

0x9a18,	// (0x00045679) main_cset6_slider_pane_g13_ParamLimits

0x9a18,	// (0x00045679) main_cset6_slider_pane_g13

0x9a24,	// (0x00045685) main_cset6_slider_pane_g14_ParamLimits

0x9a24,	// (0x00045685) main_cset6_slider_pane_g14

0xa79a,	// (0x000463fb) main_cset6_slider_pane_g15_ParamLimits

0xa79a,	// (0x000463fb) main_cset6_slider_pane_g15

0x9a48,	// (0x000456a9) main_cset6_slider_pane_g16_ParamLimits

0x9a48,	// (0x000456a9) main_cset6_slider_pane_g16

0x9a54,	// (0x000456b5) main_cset6_slider_pane_g17_ParamLimits

0x9a54,	// (0x000456b5) main_cset6_slider_pane_g17

0x0011,

0xfbe5,	// (0x0004b846) main_cset6_slider_pane_g_ParamLimits

0xfbe5,	// (0x0004b846) main_cset6_slider_pane_g

0xdbd8,	// (0x00049839) main_cset6_slider_pane_t1_ParamLimits

0xdbd8,	// (0x00049839) main_cset6_slider_pane_t1

0xa7ca,	// (0x0004642b) main_cset6_slider_pane_t2_ParamLimits

0xa7ca,	// (0x0004642b) main_cset6_slider_pane_t2

0xa7f5,	// (0x00046456) main_cset6_slider_pane_t3_ParamLimits

0xa7f5,	// (0x00046456) main_cset6_slider_pane_t3

0xa820,	// (0x00046481) main_cset6_slider_pane_t4_ParamLimits

0xa820,	// (0x00046481) main_cset6_slider_pane_t4

0xa84b,	// (0x000464ac) main_cset6_slider_pane_t5_ParamLimits

0xa84b,	// (0x000464ac) main_cset6_slider_pane_t5

0xdc19,	// (0x0004987a) main_cset6_slider_pane_t7_ParamLimits

0xdc19,	// (0x0004987a) main_cset6_slider_pane_t7

0xa876,	// (0x000464d7) main_cset6_slider_pane_t8_ParamLimits

0xa876,	// (0x000464d7) main_cset6_slider_pane_t8

0xa89a,	// (0x000464fb) main_cset6_slider_pane_t9_ParamLimits

0xa89a,	// (0x000464fb) main_cset6_slider_pane_t9

0xa8be,	// (0x0004651f) main_cset6_slider_pane_t10_ParamLimits

0xa8be,	// (0x0004651f) main_cset6_slider_pane_t10

0xa8e2,	// (0x00046543) main_cset6_slider_pane_t11_ParamLimits

0xa8e2,	// (0x00046543) main_cset6_slider_pane_t11

0xdc4f,	// (0x000498b0) main_cset6_slider_pane_t14_ParamLimits

0xdc4f,	// (0x000498b0) main_cset6_slider_pane_t14

0xdc88,	// (0x000498e9) main_cset6_slider_pane_t15_ParamLimits

0xdc88,	// (0x000498e9) main_cset6_slider_pane_t15

0x000b,

0xfc0a,	// (0x0004b86b) main_cset6_slider_pane_t_ParamLimits

0xfc0a,	// (0x0004b86b) main_cset6_slider_pane_t

0xd3f1,	// (0x00049052) cset_slider_pane_g1_copy1

0xd3fa,	// (0x0004905b) cset_slider_pane_g2_copy1

0xd403,	// (0x00049064) cset_slider_pane_g3_copy1

0x081d,	// (0x0003c47e) bg_popup_sub_pane_cp011_copy1

0xd4a4,	// (0x00049105) main_cset_text_pane_g1_copy1

0xd4ac,	// (0x0004910d) main_cset_text_pane_t1_copy1

0xd4ba,	// (0x0004911b) main_cset_text_pane_t2_copy1

0xd4c8,	// (0x00049129) main_cset_text_pane_t3_copy1

0xd4d6,	// (0x00049137) main_cset_text_pane_t4_copy1

0xd4e4,	// (0x00049145) main_cset_text_pane_t5_copy1

0xd4f2,	// (0x00049153) main_cset_text_pane_t6_copy1

0xd500,	// (0x00049161) main_cset_text_pane_t7_copy1

0xa906,	// (0x00046567) main_cset_text2_pane_t1_copy1

0x081d,	// (0x0003c47e) main_ncimui_pane

0x7129,	// (0x00042d8a) popup_query_ncimui_window_ParamLimits

0x7129,	// (0x00042d8a) popup_query_ncimui_window

0xca41,	// (0x000486a2) field_cale_ev2_pane_g4_ParamLimits

0xca41,	// (0x000486a2) field_cale_ev2_pane_g4

0x8c6e,	// (0x000448cf) cell_video_dialer_keypad_pane_g2_ParamLimits

0x8c6e,	// (0x000448cf) cell_video_dialer_keypad_pane_g2

0x0001,

0xf8f7,	// (0x0004b558) cell_video_dialer_keypad_pane_g_ParamLimits

0xf8f7,	// (0x0004b558) cell_video_dialer_keypad_pane_g

0x8c86,	// (0x000448e7) cell_video_dialer_keypad_pane_t1

0x081d,	// (0x0003c47e) bg_popup_window_pane_cp012

0x1837,	// (0x0003d498) heading_pane_cp06

0xddb0,	// (0x00049a11) ncim_query_content_pane

0x081d,	// (0x0003c47e) bg_popup_heading_pane_cp01

0xddb8,	// (0x00049a19) ncim_heading_pane_t1

0xddc6,	// (0x00049a27) ncim_indicator_popup_pane

0xddd8,	// (0x00049a39) ncim_query_button_pane

0xddec,	// (0x00049a4d) ncim_query_content_pane_t1

0xddfe,	// (0x00049a5f) ncim_query_content_pane_t2

0x0005,

0xfc49,	// (0x0004b8aa) ncim_query_content_pane_t

0xde38,	// (0x00049a99) ncim_query_list_pane

0xde4a,	// (0x00049aab) ncim_query_popup_pane

0xddc6,	// (0x00049a27) ncim_indicator_popup_pane_ParamLimits

0xa9e8,	// (0x00046649) ncim_query_content_pane_g1_ParamLimits

0xa9e8,	// (0x00046649) ncim_query_content_pane_g1

0xddec,	// (0x00049a4d) ncim_query_content_pane_t1_ParamLimits

0xddfe,	// (0x00049a5f) ncim_query_content_pane_t2_ParamLimits

0xa9f4,	// (0x00046655) ncim_query_content_pane_t3_ParamLimits

0xa9f4,	// (0x00046655) ncim_query_content_pane_t3

0xaa1c,	// (0x0004667d) ncim_query_content_pane_t4_ParamLimits

0xaa1c,	// (0x0004667d) ncim_query_content_pane_t4

0xaa44,	// (0x000466a5) ncim_query_content_pane_t5_ParamLimits

0xaa44,	// (0x000466a5) ncim_query_content_pane_t5

0xde10,	// (0x00049a71) ncim_query_content_pane_t6_ParamLimits

0xde10,	// (0x00049a71) ncim_query_content_pane_t6

0xfc49,	// (0x0004b8aa) ncim_query_content_pane_t_ParamLimits

0xde38,	// (0x00049a99) ncim_query_list_pane_ParamLimits

0xde4a,	// (0x00049aab) ncim_query_popup_pane_ParamLimits

0xde5e,	// (0x00049abf) wait_bar_pane_cp04

0x081d,	// (0x0003c47e) input_focus_pane_cp011

0xde66,	// (0x00049ac7) ncim_query_popup_pane_t1

0xde74,	// (0x00049ad5) ncim_list_query_list_pane_ParamLimits

0xde74,	// (0x00049ad5) ncim_list_query_list_pane

0x081d,	// (0x0003c47e) bg_button_pane_cp027

0xde81,	// (0x00049ae2) ncim_query_button_pane_g1

0x081d,	// (0x0003c47e) list_highlight_pane_cp012

0xde8b,	// (0x00049aec) ncim_list_query_list_pane_g1

0xde93,	// (0x00049af4) ncim_list_query_list_pane_t1

0x9247,	// (0x00044ea8) cam4_indicators_pane_g3_ParamLimits

0x9247,	// (0x00044ea8) cam4_indicators_pane_g3

0x9357,	// (0x00044fb8) vid4_indicators_pane_g5_ParamLimits

0x9357,	// (0x00044fb8) vid4_indicators_pane_g5

0xf0c1,	// (0x0004ad22) vid4_progress_pane_g5_ParamLimits

0xf0c1,	// (0x0004ad22) vid4_progress_pane_g5

0xa930,	// (0x00046591) main_ncimui_pane_g1

0xa976,	// (0x000465d7) ncimui_group_query_pane_ParamLimits

0xa976,	// (0x000465d7) ncimui_group_query_pane

0xa9aa,	// (0x0004660b) ncimui_list_pane_ParamLimits

0xa9aa,	// (0x0004660b) ncimui_list_pane

0xa9c4,	// (0x00046625) ncimui_text_pane_ParamLimits

0xa9c4,	// (0x00046625) ncimui_text_pane

0xaa6c,	// (0x000466cd) ncimui_text_pane_t1_ParamLimits

0xaa6c,	// (0x000466cd) ncimui_text_pane_t1

0xdea1,	// (0x00049b02) ncimui_list_single_graphic_pane_ParamLimits

0xdea1,	// (0x00049b02) ncimui_list_single_graphic_pane

0xaa89,	// (0x000466ea) ncimui_query_pane_ParamLimits

0xaa89,	// (0x000466ea) ncimui_query_pane

0x081d,	// (0x0003c47e) list_highlight_pane_cp013

0xdeb1,	// (0x00049b12) ncim_list_query_list_pane_t1_copy1

0xde8b,	// (0x00049aec) ncim_list_single_graphic_pane_g1

0xdebf,	// (0x00049b20) ncim_query_button_pane_cp01

0xdec7,	// (0x00049b28) ncim_query_entry_pane_ParamLimits

0xdec7,	// (0x00049b28) ncim_query_entry_pane

0xded7,	// (0x00049b38) ncimui_query_pane_g1

0xdedf,	// (0x00049b40) ncimui_query_pane_t1_ParamLimits

0xdedf,	// (0x00049b40) ncimui_query_pane_t1

0x081d,	// (0x0003c47e) input_focus_pane_cp012

0xde66,	// (0x00049ac7) ncim_query_entry_pane_t1

0x0fca,	// (0x0003cc2b) main_im_pane_ParamLimits

0x1ad7,	// (0x0003d738) main_mobtv_pane_ParamLimits

0x1ad7,	// (0x0003d738) main_mobtv_pane

0xa7b2,	// (0x00046413) main_cset6_slider_pane_g18_ParamLimits

0xa7b2,	// (0x00046413) main_cset6_slider_pane_g18

0xa7be,	// (0x0004641f) main_cset6_slider_pane_g19_ParamLimits

0xa7be,	// (0x0004641f) main_cset6_slider_pane_g19

0xdef5,	// (0x00049b56) bg_main_mobtv_pane_ParamLimits

0xdef5,	// (0x00049b56) bg_main_mobtv_pane

0xaa99,	// (0x000466fa) main_mobtv_info_pane

0xaaa2,	// (0x00046703) main_mobtv_loading_pane_ParamLimits

0xaaa2,	// (0x00046703) main_mobtv_loading_pane

0xdf03,	// (0x00049b64) main_mobtv_pg_channel_list_pane

0xdf0d,	// (0x00049b6e) main_mobtv_pg_hdr_pane

0xaaaf,	// (0x00046710) main_mobtv_programe_curr_pane_ParamLimits

0xaaaf,	// (0x00046710) main_mobtv_programe_curr_pane

0xaabc,	// (0x0004671d) main_mobtv_programe_next_pane_ParamLimits

0xaabc,	// (0x0004671d) main_mobtv_programe_next_pane

0xdf16,	// (0x00049b77) popup_mobtv_noti_window

0xc734,	// (0x00048395) main_tv_pg_hdr_pane_g1

0xdf1e,	// (0x00049b7f) main_tv_pg_hdr_pane_g2

0xdf26,	// (0x00049b87) main_tv_pg_hdr_pane_g3

0xdf2e,	// (0x00049b8f) main_tv_pg_hdr_pane_g4

0xdf36,	// (0x00049b97) main_tv_pg_hdr_pane_g5

0xdf40,	// (0x00049ba1) main_tv_pg_hdr_pane_g6

0xdf4a,	// (0x00049bab) main_tv_pg_hdr_pane_g7

0xdf54,	// (0x00049bb5) main_tv_pg_hdr_pane_g8

0xdf5e,	// (0x00049bbf) main_tv_pg_hdr_pane_g9

0xdf68,	// (0x00049bc9) main_tv_pg_hdr_pane_g10

0xdf72,	// (0x00049bd3) main_tv_pg_hdr_pane_g11

0x000a,

0xfc56,	// (0x0004b8b7) main_tv_pg_hdr_pane_g

0xdf7c,	// (0x00049bdd) main_tv_pg_hdr_pane_t1

0xdf8a,	// (0x00049beb) main_tv_pg_hdr_pane_t2

0xdf98,	// (0x00049bf9) main_tv_pg_hdr_pane_t3

0xdfa8,	// (0x00049c09) main_tv_pg_hdr_pane_t4

0xdfb8,	// (0x00049c19) main_tv_pg_hdr_pane_t5

0x0004,

0xfc6d,	// (0x0004b8ce) main_tv_pg_hdr_pane_t

0xdfc8,	// (0x00049c29) single_mobtv_pg_channel_pane_ParamLimits

0xdfc8,	// (0x00049c29) single_mobtv_pg_channel_pane

0xdfda,	// (0x00049c3b) single_mobtv_pg_channel_table_pane

0xdfe3,	// (0x00049c44) single_mobtv_pg_channel_thumb_pane

0xdfec,	// (0x00049c4d) single_tv_pg_channel_pane_g1

0xdff5,	// (0x00049c56) single_tv_pg_channel_pane_g2

0x0001,

0xfc78,	// (0x0004b8d9) single_tv_pg_channel_pane_g

0xc9a0,	// (0x00048601) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xc9a0,	// (0x00048601) bg_single_mobtv_pg_channel_thumb_pane

0xdffe,	// (0x00049c5f) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xdffe,	// (0x00049c5f) single_mobtv_pg_channel_thumb_pane_g1

0xe00c,	// (0x00049c6d) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xe00c,	// (0x00049c6d) single_mobtv_pg_channel_thumb_pane_g2

0xe018,	// (0x00049c79) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xe018,	// (0x00049c79) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfc7d,	// (0x0004b8de) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfc7d,	// (0x0004b8de) single_mobtv_pg_channel_thumb_pane_g

0xe024,	// (0x00049c85) single_mobtv_pg_channel_thumb_pane_t1

0xe032,	// (0x00049c93) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc84,	// (0x0004b8e5) single_mobtv_pg_channel_thumb_pane_t

0xc734,	// (0x00048395) bg_single_mobtv_pg_channel_table_pane_g1

0xc734,	// (0x00048395) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf743,	// (0x0004b3a4) bg_single_mobtv_pg_channel_table_pane_g

0xe040,	// (0x00049ca1) single_mobtv_pg_channel_table_pane_t1

0xe04e,	// (0x00049caf) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc89,	// (0x0004b8ea) single_mobtv_pg_channel_table_pane_t

0xaad1,	// (0x00046732) main_mobtv_info_pane_g1_ParamLimits

0xaad1,	// (0x00046732) main_mobtv_info_pane_g1

0xaaef,	// (0x00046750) main_mobtv_info_pane_t1_ParamLimits

0xaaef,	// (0x00046750) main_mobtv_info_pane_t1

0xab67,	// (0x000467c8) main_mobtv_info_pane_t2_ParamLimits

0xab67,	// (0x000467c8) main_mobtv_info_pane_t2

0x0002,

0xfc93,	// (0x0004b8f4) main_mobtv_info_pane_t_ParamLimits

0xfc93,	// (0x0004b8f4) main_mobtv_info_pane_t

0xabf6,	// (0x00046857) wait_bar_pane_cp05

0xac08,	// (0x00046869) main_mobtv_loading_pane_g1_ParamLimits

0xac08,	// (0x00046869) main_mobtv_loading_pane_g1

0xac1b,	// (0x0004687c) main_mobtv_loading_pane_g2_ParamLimits

0xac1b,	// (0x0004687c) main_mobtv_loading_pane_g2

0xac27,	// (0x00046888) main_mobtv_loading_pane_g3_ParamLimits

0xac27,	// (0x00046888) main_mobtv_loading_pane_g3

0x0002,

0xfc9a,	// (0x0004b8fb) main_mobtv_loading_pane_g_ParamLimits

0xfc9a,	// (0x0004b8fb) main_mobtv_loading_pane_g

0xe05c,	// (0x00049cbd) main_mobtv_loading_pane_t1_ParamLimits

0xe05c,	// (0x00049cbd) main_mobtv_loading_pane_t1

0xe074,	// (0x00049cd5) main_mobtv_loading_pane_t2_ParamLimits

0xe074,	// (0x00049cd5) main_mobtv_loading_pane_t2

0x0001,

0xfca1,	// (0x0004b902) main_mobtv_loading_pane_t_ParamLimits

0xfca1,	// (0x0004b902) main_mobtv_loading_pane_t

0xac3a,	// (0x0004689b) wait_bar_pane_cp06_ParamLimits

0xac3a,	// (0x0004689b) wait_bar_pane_cp06

0xe098,	// (0x00049cf9) main_mobtv_programe_curr_pane_t1

0xe0a6,	// (0x00049d07) main_mobtv_programe_curr_pane_t2

0x0001,

0xfca6,	// (0x0004b907) main_mobtv_programe_curr_pane_t

0xe0b4,	// (0x00049d15) main_mobtv_programe_next_pane_t1

0xe0c2,	// (0x00049d23) main_mobtv_programe_next_pane_t2

0xe0d0,	// (0x00049d31) main_mobtv_programe_next_pane_t3

0x0002,

0xfcab,	// (0x0004b90c) main_mobtv_programe_next_pane_t

0x081d,	// (0x0003c47e) bg_popup_mobtv_noti_window_pane

0xe0de,	// (0x00049d3f) popup_mobtv_noti_window_g1

0xe0e6,	// (0x00049d47) popup_mobtv_noti_window_t1

0xe0f4,	// (0x00049d55) popup_mobtv_noti_window_t2

0x0001,

0xfcb2,	// (0x0004b913) popup_mobtv_noti_window_t

0xc734,	// (0x00048395) bg_popup_mobtv_noti_window_pane_g1

0x081d,	// (0x0003c47e) sc_clock_pane

0x081d,	// (0x0003c47e) main_fs_bigclock_pane

0xa405,	// (0x00046066) blid2_tripm_pane_t4_ParamLimits

0xa405,	// (0x00046066) blid2_tripm_pane_t4

0xac49,	// (0x000468aa) sc_clock_pane_g1_ParamLimits

0xac49,	// (0x000468aa) sc_clock_pane_g1

0xac5b,	// (0x000468bc) sc_clock_pane_t1_ParamLimits

0xac5b,	// (0x000468bc) sc_clock_pane_t1

0xac7d,	// (0x000468de) sc_clock_pane_t2_ParamLimits

0xac7d,	// (0x000468de) sc_clock_pane_t2

0xac95,	// (0x000468f6) sc_clock_pane_t3_ParamLimits

0xac95,	// (0x000468f6) sc_clock_pane_t3

0x0004,

0xfcb7,	// (0x0004b918) sc_clock_pane_t_ParamLimits

0xfcb7,	// (0x0004b918) sc_clock_pane_t

0xb50c,	// (0x0004716d) main_fs_bigclock_indicator_pane_ParamLimits

0xb50c,	// (0x0004716d) main_fs_bigclock_indicator_pane

0xc970,	// (0x000485d1) main_fs_bigclock_pane_g1_ParamLimits

0xc970,	// (0x000485d1) main_fs_bigclock_pane_g1

0xb518,	// (0x00047179) main_fs_bigclock_pane_t1_ParamLimits

0xb518,	// (0x00047179) main_fs_bigclock_pane_t1

0xb52a,	// (0x0004718b) main_fs_bigclock_pane_t2_ParamLimits

0xb52a,	// (0x0004718b) main_fs_bigclock_pane_t2

0xb53e,	// (0x0004719f) main_fs_bigclock_pane_t3_ParamLimits

0xb53e,	// (0x0004719f) main_fs_bigclock_pane_t3

0x0002,

0xfeb6,	// (0x0004bb17) main_fs_bigclock_pane_t_ParamLimits

0xfeb6,	// (0x0004bb17) main_fs_bigclock_pane_t

0xecde,	// (0x0004a93f) main_fs_bigclock_indicator_pane_g1

0xdde0,	// (0x00049a41) ncim_query_content_pane_g2_ParamLimits

0xdde0,	// (0x00049a41) ncim_query_content_pane_g2

0x0001,

0xfc44,	// (0x0004b8a5) ncim_query_content_pane_g_ParamLimits

0xfc44,	// (0x0004b8a5) ncim_query_content_pane_g

0xacac,	// (0x0004690d) sc_clock_pane_t4_ParamLimits

0xacac,	// (0x0004690d) sc_clock_pane_t4

0x1ad7,	// (0x0003d738) main_radioblah_pane

0xd109,	// (0x00048d6a) cell_call4_button_pane_t1_copy1_ParamLimits

0xd109,	// (0x00048d6a) cell_call4_button_pane_t1_copy1

0xa938,	// (0x00046599) main_ncimui_pane_t1_ParamLimits

0xa938,	// (0x00046599) main_ncimui_pane_t1

0xa94a,	// (0x000465ab) main_ncimui_pane_t2_ParamLimits

0xa94a,	// (0x000465ab) main_ncimui_pane_t2

0x0002,

0xfc3d,	// (0x0004b89e) main_ncimui_pane_t_ParamLimits

0xfc3d,	// (0x0004b89e) main_ncimui_pane_t

0xe222,	// (0x00049e83) main_radioblah_anim_pane_ParamLimits

0xe222,	// (0x00049e83) main_radioblah_anim_pane

0xe233,	// (0x00049e94) main_radioblah_info_pane_ParamLimits

0xe233,	// (0x00049e94) main_radioblah_info_pane

0xe247,	// (0x00049ea8) main_radioblah_pane_t1_ParamLimits

0xe247,	// (0x00049ea8) main_radioblah_pane_t1

0xe263,	// (0x00049ec4) main_radioblah_pane_t2_ParamLimits

0xe263,	// (0x00049ec4) main_radioblah_pane_t2

0x0003,

0xfcd8,	// (0x0004b939) main_radioblah_pane_t_ParamLimits

0xfcd8,	// (0x0004b939) main_radioblah_pane_t

0xad55,	// (0x000469b6) main_radioblah_rocker_ctrl_pane_ParamLimits

0xad55,	// (0x000469b6) main_radioblah_rocker_ctrl_pane

0xe2ab,	// (0x00049f0c) main_radioblah_info_pane_t1_ParamLimits

0xe2ab,	// (0x00049f0c) main_radioblah_info_pane_t1

0xadad,	// (0x00046a0e) main_radioblah_info_pane_t2_ParamLimits

0xadad,	// (0x00046a0e) main_radioblah_info_pane_t2

0x0003,

0xfce1,	// (0x0004b942) main_radioblah_info_pane_t_ParamLimits

0xfce1,	// (0x0004b942) main_radioblah_info_pane_t

0xc734,	// (0x00048395) main_radioblah_rocker_ctrl_pane_g1

0xae5d,	// (0x00046abe) main_radioblah_rocker_ctrl_pane_g2

0xae65,	// (0x00046ac6) main_radioblah_rocker_ctrl_pane_g3

0xae6d,	// (0x00046ace) main_radioblah_rocker_ctrl_pane_g4

0xae75,	// (0x00046ad6) main_radioblah_rocker_ctrl_pane_g5

0xae7d,	// (0x00046ade) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfcea,	// (0x0004b94b) main_radioblah_rocker_ctrl_pane_g

0xa906,	// (0x00046567) main_cset_text2_pane_t1_copy1_ParamLimits

0xf005,	// (0x0004ac66) cam4_image_uncrop_qvga_pane

0xf015,	// (0x0004ac76) vid4_image_uncrop_qcif_pane

0xf121,	// (0x0004ad82) cam6_image_uncrop_qvga_pane_ParamLimits

0xf121,	// (0x0004ad82) cam6_image_uncrop_qvga_pane

0xda3a,	// (0x0004969b) vid6_image_uncrop_qcif_pane_ParamLimits

0xda3a,	// (0x0004969b) vid6_image_uncrop_qcif_pane

0x081d,	// (0x0003c47e) bg_popup_preview_window_pane_cp03

0xdd92,	// (0x000499f3) list_cset_text2_pane

0xdd9a,	// (0x000499fb) main_cset6_text2_pane_g1

0xdda2,	// (0x00049a03) main_cset6_text2_pane_t1

0xae85,	// (0x00046ae6) list_cset_text2_pane_t1_ParamLimits

0xae85,	// (0x00046ae6) list_cset_text2_pane_t1

0x1ad7,	// (0x0003d738) main_radioblah_pane_ParamLimits

0xabe2,	// (0x00046843) main_mobtv_info_pane_t3_ParamLimits

0xabe2,	// (0x00046843) main_mobtv_info_pane_t3

0xad43,	// (0x000469a4) main_radioblah_pane_g1

0xad7d,	// (0x000469de) main_radioblah_info_pane_g1

0xae02,	// (0x00046a63) main_radioblah_info_pane_t3_ParamLimits

0xae02,	// (0x00046a63) main_radioblah_info_pane_t3

0x4c20,	// (0x00040881) highlight_cell_cale_month_pane_ParamLimits

0x4c20,	// (0x00040881) highlight_cell_cale_month_pane

0x081d,	// (0x0003c47e) main_phob_fisheye_pane

0xcaca,	// (0x0004872b) scroll_pane_cp0031_ParamLimits

0xcaca,	// (0x0004872b) scroll_pane_cp0031

0xdb48,	// (0x000497a9) wait_bar_pane_cp08_ParamLimits

0xa739,	// (0x0004639a) cset_list_set_pane_copy1_ParamLimits

0xe2e5,	// (0x00049f46) highlight_cell_cale_month_pane_g1

0xae9e,	// (0x00046aff) highlight_cell_cale_month_pane_t1

0xd768,	// (0x000493c9) list_gen_pane_cp01

0xd2fd,	// (0x00048f5e) scroll_pane_01

0x012f,	// (0x0003bd90) list_single_double_fisheye_pane

0x2d21,	// (0x0003e982) list_double_fisheye_pane_g1_ParamLimits

0x2d21,	// (0x0003e982) list_double_fisheye_pane_g1

0x2d2d,	// (0x0003e98e) list_double_fisheye_pane_g2_ParamLimits

0x2d2d,	// (0x0003e98e) list_double_fisheye_pane_g2

0xaeac,	// (0x00046b0d) list_double_fisheye_pane_g3_ParamLimits

0xaeac,	// (0x00046b0d) list_double_fisheye_pane_g3

0x0004,

0xfcf7,	// (0x0004b958) list_double_fisheye_pane_g_ParamLimits

0xfcf7,	// (0x0004b958) list_double_fisheye_pane_g

0x2d5e,	// (0x0003e9bf) list_double_fisheye_pane_t1_ParamLimits

0x2d5e,	// (0x0003e9bf) list_double_fisheye_pane_t1

0x2d79,	// (0x0003e9da) list_double_fisheye_pane_t2_ParamLimits

0x2d79,	// (0x0003e9da) list_double_fisheye_pane_t2

0x0001,

0xfd02,	// (0x0004b963) list_double_fisheye_pane_t_ParamLimits

0xfd02,	// (0x0004b963) list_double_fisheye_pane_t

0x081d,	// (0x0003c47e) main_call5_pane

0xacd7,	// (0x00046938) sc_swipe_pane_ParamLimits

0xacd7,	// (0x00046938) sc_swipe_pane

0xaecb,	// (0x00046b2c) call5_image_pane_ParamLimits

0xaecb,	// (0x00046b2c) call5_image_pane

0xaee8,	// (0x00046b49) call5_swipe_1_pane_ParamLimits

0xaee8,	// (0x00046b49) call5_swipe_1_pane

0xaefb,	// (0x00046b5c) call5_swipe_2_pane_ParamLimits

0xaefb,	// (0x00046b5c) call5_swipe_2_pane

0xaf26,	// (0x00046b87) popup_call5_audio_first_window_ParamLimits

0xaf26,	// (0x00046b87) popup_call5_audio_first_window

0xc9a0,	// (0x00048601) call5_swipe_1_pane_g1_ParamLimits

0xc9a0,	// (0x00048601) call5_swipe_1_pane_g1

0xe2ed,	// (0x00049f4e) call5_swipe_1_pane_g2_ParamLimits

0xe2ed,	// (0x00049f4e) call5_swipe_1_pane_g2

0x0001,

0xfd07,	// (0x0004b968) call5_swipe_1_pane_g_ParamLimits

0xfd07,	// (0x0004b968) call5_swipe_1_pane_g

0xe2f9,	// (0x00049f5a) call5_swipe_1_pane_t1_ParamLimits

0xe2f9,	// (0x00049f5a) call5_swipe_1_pane_t1

0xc9a0,	// (0x00048601) call5_swipe_2_pane_g1_ParamLimits

0xc9a0,	// (0x00048601) call5_swipe_2_pane_g1

0xe30e,	// (0x00049f6f) call5_swipe_2_pane_g2_ParamLimits

0xe30e,	// (0x00049f6f) call5_swipe_2_pane_g2

0x0001,

0xfd0c,	// (0x0004b96d) call5_swipe_2_pane_g_ParamLimits

0xfd0c,	// (0x0004b96d) call5_swipe_2_pane_g

0xe31a,	// (0x00049f7b) call5_swipe_2_pane_t1_ParamLimits

0xe31a,	// (0x00049f7b) call5_swipe_2_pane_t1

0xe32f,	// (0x00049f90) sc_swipe_pane_g1_ParamLimits

0xe32f,	// (0x00049f90) sc_swipe_pane_g1

0xe33c,	// (0x00049f9d) sc_swipe_pane_g2_ParamLimits

0xe33c,	// (0x00049f9d) sc_swipe_pane_g2

0x0001,

0xfd11,	// (0x0004b972) sc_swipe_pane_g_ParamLimits

0xfd11,	// (0x0004b972) sc_swipe_pane_g

0xe348,	// (0x00049fa9) sc_swipe_pane_t1_ParamLimits

0xe348,	// (0x00049fa9) sc_swipe_pane_t1

0x081d,	// (0x0003c47e) main_cmail_launcher_pane

0xaf37,	// (0x00046b98) aid_size_cell_cmail_l_ParamLimits

0xaf37,	// (0x00046b98) aid_size_cell_cmail_l

0xaf51,	// (0x00046bb2) grid_cmail_l_pane_ParamLimits

0xaf51,	// (0x00046bb2) grid_cmail_l_pane

0xaf6c,	// (0x00046bcd) cell_cmail_l_pane_ParamLimits

0xaf6c,	// (0x00046bcd) cell_cmail_l_pane

0xaf92,	// (0x00046bf3) cell_cmail_l_pane_g1_ParamLimits

0xaf92,	// (0x00046bf3) cell_cmail_l_pane_g1

0xaf9e,	// (0x00046bff) cell_cmail_l_pane_t1_ParamLimits

0xaf9e,	// (0x00046bff) cell_cmail_l_pane_t1

0xe35d,	// (0x00049fbe) cell_cmail_l_pane_t2_ParamLimits

0xe35d,	// (0x00049fbe) cell_cmail_l_pane_t2

0x0001,

0xfd16,	// (0x0004b977) cell_cmail_l_pane_t_ParamLimits

0xfd16,	// (0x0004b977) cell_cmail_l_pane_t

0x1ad7,	// (0x0003d738) grid_highlight_pane_cp018_ParamLimits

0x1ad7,	// (0x0003d738) grid_highlight_pane_cp018

0x3387,	// (0x0003efe8) main2_pane_ParamLimits

0x3387,	// (0x0003efe8) main2_pane

0x1063,	// (0x0003ccc4) popup_sp_fs_action_menu_bg_pane_g1

0x106b,	// (0x0003cccc) popup_sp_fs_action_menu_bg_pane_g2

0x1073,	// (0x0003ccd4) popup_sp_fs_action_menu_bg_pane_g3

0x107b,	// (0x0003ccdc) popup_sp_fs_action_menu_bg_pane_g4

0x1083,	// (0x0003cce4) popup_sp_fs_action_menu_bg_pane_g5

0x108b,	// (0x0003ccec) popup_sp_fs_action_menu_bg_pane_g6

0x1093,	// (0x0003ccf4) popup_sp_fs_action_menu_bg_pane_g7

0x109b,	// (0x0003ccfc) popup_sp_fs_action_menu_bg_pane_g8

0x10a3,	// (0x0003cd04) popup_sp_fs_action_menu_bg_pane_g9

0x10ab,	// (0x0003cd0c) popup_sp_fs_action_menu_bg_pane_g10

0x10ab,	// (0x0003cd0c) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf1ef,	// (0x0004ae50) popup_sp_fs_action_menu_bg_pane_g

0xbc61,	// (0x000478c2) list_medium_line_x2_t3_g3_g1_ParamLimits

0xbc61,	// (0x000478c2) list_medium_line_x2_t3_g3_g1

0xbc6d,	// (0x000478ce) list_medium_line_x2_t3_g3_g2_ParamLimits

0xbc6d,	// (0x000478ce) list_medium_line_x2_t3_g3_g2

0xbc79,	// (0x000478da) list_medium_line_x2_t3_g3_g3_ParamLimits

0xbc79,	// (0x000478da) list_medium_line_x2_t3_g3_g3

0x0002,

0xf29f,	// (0x0004af00) list_medium_line_x2_t3_g3_g_ParamLimits

0xf29f,	// (0x0004af00) list_medium_line_x2_t3_g3_g

0xbc85,	// (0x000478e6) list_medium_line_x2_t3_g3_t1_ParamLimits

0xbc85,	// (0x000478e6) list_medium_line_x2_t3_g3_t1

0x292b,	// (0x0003e58c) list_medium_line_x2_t3_g3_t2_ParamLimits

0x292b,	// (0x0003e58c) list_medium_line_x2_t3_g3_t2

0xbc9a,	// (0x000478fb) list_medium_line_x2_t3_g3_t3_ParamLimits

0xbc9a,	// (0x000478fb) list_medium_line_x2_t3_g3_t3

0x0002,

0xf2a6,	// (0x0004af07) list_medium_line_x2_t3_g3_t_ParamLimits

0xf2a6,	// (0x0004af07) list_medium_line_x2_t3_g3_t

0xbc61,	// (0x000478c2) list_medium_line_x2_t3_g2_g1_ParamLimits

0xbc61,	// (0x000478c2) list_medium_line_x2_t3_g2_g1

0xbc79,	// (0x000478da) list_medium_line_x2_t3_g2_g2_ParamLimits

0xbc79,	// (0x000478da) list_medium_line_x2_t3_g2_g2

0x0001,

0xf2ad,	// (0x0004af0e) list_medium_line_x2_t3_g2_g_ParamLimits

0xf2ad,	// (0x0004af0e) list_medium_line_x2_t3_g2_g

0xbcaf,	// (0x00047910) list_medium_line_x2_t3_g2_t1_ParamLimits

0xbcaf,	// (0x00047910) list_medium_line_x2_t3_g2_t1

0xbcc5,	// (0x00047926) list_medium_line_x2_t3_g2_t2_ParamLimits

0xbcc5,	// (0x00047926) list_medium_line_x2_t3_g2_t2

0xbc9a,	// (0x000478fb) list_medium_line_x2_t3_g2_t3_ParamLimits

0xbc9a,	// (0x000478fb) list_medium_line_x2_t3_g2_t3

0x0002,

0xf2b2,	// (0x0004af13) list_medium_line_x2_t3_g2_t_ParamLimits

0xf2b2,	// (0x0004af13) list_medium_line_x2_t3_g2_t

0xbc61,	// (0x000478c2) list_medium_line_x2_t4_g4_g1_ParamLimits

0xbc61,	// (0x000478c2) list_medium_line_x2_t4_g4_g1

0xbcd7,	// (0x00047938) list_medium_line_x2_t4_g4_g2_ParamLimits

0xbcd7,	// (0x00047938) list_medium_line_x2_t4_g4_g2

0xbc6d,	// (0x000478ce) list_medium_line_x2_t4_g4_g3_ParamLimits

0xbc6d,	// (0x000478ce) list_medium_line_x2_t4_g4_g3

0xbce3,	// (0x00047944) list_medium_line_x2_t4_g4_g4_ParamLimits

0xbce3,	// (0x00047944) list_medium_line_x2_t4_g4_g4

0x0003,

0xf2b9,	// (0x0004af1a) list_medium_line_x2_t4_g4_g_ParamLimits

0xf2b9,	// (0x0004af1a) list_medium_line_x2_t4_g4_g

0x293f,	// (0x0003e5a0) list_medium_line_x2_t4_g4_t1_ParamLimits

0x293f,	// (0x0003e5a0) list_medium_line_x2_t4_g4_t1

0x2959,	// (0x0003e5ba) list_medium_line_x2_t4_g4_t2_ParamLimits

0x2959,	// (0x0003e5ba) list_medium_line_x2_t4_g4_t2

0x296f,	// (0x0003e5d0) list_medium_line_x2_t4_g4_t3_ParamLimits

0x296f,	// (0x0003e5d0) list_medium_line_x2_t4_g4_t3

0xbcef,	// (0x00047950) list_medium_line_x2_t4_g4_t4_ParamLimits

0xbcef,	// (0x00047950) list_medium_line_x2_t4_g4_t4

0x0003,

0xf2c2,	// (0x0004af23) list_medium_line_x2_t4_g4_t_ParamLimits

0xf2c2,	// (0x0004af23) list_medium_line_x2_t4_g4_t

0xbc61,	// (0x000478c2) list_medium_line_x2_t2_g4_g1_ParamLimits

0xbc61,	// (0x000478c2) list_medium_line_x2_t2_g4_g1

0xbcd7,	// (0x00047938) list_medium_line_x2_t2_g4_g2_ParamLimits

0xbcd7,	// (0x00047938) list_medium_line_x2_t2_g4_g2

0xbc6d,	// (0x000478ce) list_medium_line_x2_t2_g4_g3_ParamLimits

0xbc6d,	// (0x000478ce) list_medium_line_x2_t2_g4_g3

0xbc79,	// (0x000478da) list_medium_line_x2_t2_g4_g4_ParamLimits

0xbc79,	// (0x000478da) list_medium_line_x2_t2_g4_g4

0x0003,

0xf329,	// (0x0004af8a) list_medium_line_x2_t2_g4_g_ParamLimits

0xf329,	// (0x0004af8a) list_medium_line_x2_t2_g4_g

0xbd01,	// (0x00047962) list_medium_line_x2_t2_g4_t1_ParamLimits

0xbd01,	// (0x00047962) list_medium_line_x2_t2_g4_t1

0xbc9a,	// (0x000478fb) list_medium_line_x2_t2_g4_t2_ParamLimits

0xbc9a,	// (0x000478fb) list_medium_line_x2_t2_g4_t2

0x0001,

0xf332,	// (0x0004af93) list_medium_line_x2_t2_g4_t_ParamLimits

0xf332,	// (0x0004af93) list_medium_line_x2_t2_g4_t

0xbc61,	// (0x000478c2) list_medium_line_x2_t2_g3_g1_ParamLimits

0xbc61,	// (0x000478c2) list_medium_line_x2_t2_g3_g1

0xbc6d,	// (0x000478ce) list_medium_line_x2_t2_g3_g2_ParamLimits

0xbc6d,	// (0x000478ce) list_medium_line_x2_t2_g3_g2

0xbc79,	// (0x000478da) list_medium_line_x2_t2_g3_g3_ParamLimits

0xbc79,	// (0x000478da) list_medium_line_x2_t2_g3_g3

0x0002,

0xf29f,	// (0x0004af00) list_medium_line_x2_t2_g3_g_ParamLimits

0xf29f,	// (0x0004af00) list_medium_line_x2_t2_g3_g

0xbd16,	// (0x00047977) list_medium_line_x2_t2_g3_t1_ParamLimits

0xbd16,	// (0x00047977) list_medium_line_x2_t2_g3_t1

0xbc9a,	// (0x000478fb) list_medium_line_x2_t2_g3_t2_ParamLimits

0xbc9a,	// (0x000478fb) list_medium_line_x2_t2_g3_t2

0x0001,

0xf337,	// (0x0004af98) list_medium_line_x2_t2_g3_t_ParamLimits

0xf337,	// (0x0004af98) list_medium_line_x2_t2_g3_t

0x4d5b,	// (0x000409bc) main_sp_fs_list_pane_ParamLimits

0x4d5b,	// (0x000409bc) main_sp_fs_list_pane

0x4d67,	// (0x000409c8) sp_fs_scroll_pane_ParamLimits

0x4d67,	// (0x000409c8) sp_fs_scroll_pane

0x2984,	// (0x0003e5e5) list_medium_line_x2_t3_t1

0x2994,	// (0x0003e5f5) list_medium_line_x2_t3_t2

0xbd59,	// (0x000479ba) list_medium_line_x2_t3_t3

0x0002,

0xf382,	// (0x0004afe3) list_medium_line_x2_t3_t

0x29a2,	// (0x0003e603) list_medium_line_x3_t4_t1

0x29b2,	// (0x0003e613) list_medium_line_x3_t4_t2

0xbd67,	// (0x000479c8) list_medium_line_x3_t4_t3

0xbd59,	// (0x000479ba) list_medium_line_x3_t4_t4

0x0003,

0xf389,	// (0x0004afea) list_medium_line_x3_t4_t

0x29c0,	// (0x0003e621) list_medium_line_x4_t5_t1

0x29d0,	// (0x0003e631) list_medium_line_x4_t5_t2

0xbd67,	// (0x000479c8) list_medium_line_x4_t5_t3

0xbd75,	// (0x000479d6) list_medium_line_x4_t5_t4

0xbd59,	// (0x000479ba) list_medium_line_x4_t5_t5

0x0004,

0xf392,	// (0x0004aff3) list_medium_line_x4_t5_t

0xbc61,	// (0x000478c2) list_medium_line_t4_g4_g1_ParamLimits

0xbc61,	// (0x000478c2) list_medium_line_t4_g4_g1

0xbce3,	// (0x00047944) list_medium_line_t4_g4_g2_ParamLimits

0xbce3,	// (0x00047944) list_medium_line_t4_g4_g2

0xbd83,	// (0x000479e4) list_medium_line_t4_g4_g3_ParamLimits

0xbd83,	// (0x000479e4) list_medium_line_t4_g4_g3

0xbc79,	// (0x000478da) list_medium_line_t4_g4_g4_ParamLimits

0xbc79,	// (0x000478da) list_medium_line_t4_g4_g4

0x0003,

0xf39d,	// (0x0004affe) list_medium_line_t4_g4_g_ParamLimits

0xf39d,	// (0x0004affe) list_medium_line_t4_g4_g

0xbd8f,	// (0x000479f0) list_medium_line_t4_g4_t1_ParamLimits

0xbd8f,	// (0x000479f0) list_medium_line_t4_g4_t1

0xbda4,	// (0x00047a05) list_medium_line_t4_g4_t2_ParamLimits

0xbda4,	// (0x00047a05) list_medium_line_t4_g4_t2

0xbdb9,	// (0x00047a1a) list_medium_line_t4_g4_t3_ParamLimits

0xbdb9,	// (0x00047a1a) list_medium_line_t4_g4_t3

0xbc9a,	// (0x000478fb) list_medium_line_t4_g4_t4_ParamLimits

0xbc9a,	// (0x000478fb) list_medium_line_t4_g4_t4

0x0003,

0xf3a6,	// (0x0004b007) list_medium_line_t4_g4_t_ParamLimits

0xf3a6,	// (0x0004b007) list_medium_line_t4_g4_t

0x4e36,	// (0x00040a97) chi_dic_find_pane_g1

0x6efb,	// (0x00042b5c) main_tport_pane

0xd435,	// (0x00049096) list_medium_line_plain_t1

0xd44b,	// (0x000490ac) list_medium_line_t2_g2_g1_ParamLimits

0xd44b,	// (0x000490ac) list_medium_line_t2_g2_g1

0xd457,	// (0x000490b8) list_medium_line_t2_g2_g2_ParamLimits

0xd457,	// (0x000490b8) list_medium_line_t2_g2_g2

0x0001,

0xfa59,	// (0x0004b6ba) list_medium_line_t2_g2_g_ParamLimits

0xfa59,	// (0x0004b6ba) list_medium_line_t2_g2_g

0x2be6,	// (0x0003e847) list_medium_line_t2_g2_t1_ParamLimits

0x2be6,	// (0x0003e847) list_medium_line_t2_g2_t1

0x2c00,	// (0x0003e861) list_medium_line_t2_g2_t2_ParamLimits

0x2c00,	// (0x0003e861) list_medium_line_t2_g2_t2

0x0001,

0xfa5e,	// (0x0004b6bf) list_medium_line_t2_g2_t_ParamLimits

0xfa5e,	// (0x0004b6bf) list_medium_line_t2_g2_t

0xd771,	// (0x000493d2) aid_sp_fs_list_icon_a_sm

0xd779,	// (0x000493da) aid_sp_fs_list_icon_d

0xd781,	// (0x000493e2) aid_sp_fs_text_primary

0xd78a,	// (0x000493eb) aid_sp_fs_text_secondary

0xd793,	// (0x000493f4) list_medium_line

0xd793,	// (0x000493f4) list_medium_line_g2

0xd793,	// (0x000493f4) list_medium_line_g3

0xd793,	// (0x000493f4) list_medium_line_plain

0xd793,	// (0x000493f4) list_medium_line_plain_t2

0xd793,	// (0x000493f4) list_medium_line_plain_t3

0xd793,	// (0x000493f4) list_medium_line_right_icon

0xd793,	// (0x000493f4) list_medium_line_right_iconx2

0xd793,	// (0x000493f4) list_medium_line_t2

0xd793,	// (0x000493f4) list_medium_line_t2_g2

0xd793,	// (0x000493f4) list_medium_line_t2_g3

0xd793,	// (0x000493f4) list_medium_line_t2_right_icon

0xd793,	// (0x000493f4) list_medium_line_t2_right_iconx2

0xd793,	// (0x000493f4) list_medium_line_t3

0xd793,	// (0x000493f4) list_medium_line_t3_g2

0xd793,	// (0x000493f4) list_medium_line_t3_g3

0xd793,	// (0x000493f4) list_medium_line_t3_right_iconx2

0xd79c,	// (0x000493fd) list_medium_line_t4_g4

0xd7a5,	// (0x00049406) list_medium_line_x2

0xd7a5,	// (0x00049406) list_medium_line_x2_t2_g2

0xd7a5,	// (0x00049406) list_medium_line_x2_t2_g3

0xd7a5,	// (0x00049406) list_medium_line_x2_t2_g4

0xd7a5,	// (0x00049406) list_medium_line_x2_t3

0xd7a5,	// (0x00049406) list_medium_line_x2_t3_g2

0xd7a5,	// (0x00049406) list_medium_line_x2_t3_g3

0xd7a5,	// (0x00049406) list_medium_line_x2_t3_g4

0xd7a5,	// (0x00049406) list_medium_line_x2_t4_g2

0xd7a5,	// (0x00049406) list_medium_line_x2_t4_g4

0xd7ae,	// (0x0004940f) list_medium_line_x3

0xd7ae,	// (0x0004940f) list_medium_line_x3_t4

0xd7ae,	// (0x0004940f) list_medium_line_x3_t4_g4

0xd79c,	// (0x000493fd) list_medium_line_x4_t4

0xd79c,	// (0x000493fd) list_medium_line_x4_t4_g7

0xd79c,	// (0x000493fd) list_medium_line_x4_t5

0xd7b7,	// (0x00049418) list_single_fs_dyc_pane_ParamLimits

0xd7b7,	// (0x00049418) list_single_fs_dyc_pane

0xbc61,	// (0x000478c2) list_medium_line_x4_t4_g7_g1_ParamLimits

0xbc61,	// (0x000478c2) list_medium_line_x4_t4_g7_g1

0xdcc1,	// (0x00049922) list_medium_line_x4_t4_g7_g2_ParamLimits

0xdcc1,	// (0x00049922) list_medium_line_x4_t4_g7_g2

0xdccd,	// (0x0004992e) list_medium_line_x4_t4_g7_g3_ParamLimits

0xdccd,	// (0x0004992e) list_medium_line_x4_t4_g7_g3

0xdcdc,	// (0x0004993d) list_medium_line_x4_t4_g7_g4_ParamLimits

0xdcdc,	// (0x0004993d) list_medium_line_x4_t4_g7_g4

0xdce8,	// (0x00049949) list_medium_line_x4_t4_g7_g5_ParamLimits

0xdce8,	// (0x00049949) list_medium_line_x4_t4_g7_g5

0xdcf7,	// (0x00049958) list_medium_line_x4_t4_g7_g6_ParamLimits

0xdcf7,	// (0x00049958) list_medium_line_x4_t4_g7_g6

0xdd06,	// (0x00049967) list_medium_line_x4_t4_g7_g7_ParamLimits

0xdd06,	// (0x00049967) list_medium_line_x4_t4_g7_g7

0x0006,

0xfc23,	// (0x0004b884) list_medium_line_x4_t4_g7_g_ParamLimits

0xfc23,	// (0x0004b884) list_medium_line_x4_t4_g7_g

0xdd12,	// (0x00049973) list_medium_line_x4_t4_g7_t1_ParamLimits

0xdd12,	// (0x00049973) list_medium_line_x4_t4_g7_t1

0xdd27,	// (0x00049988) list_medium_line_x4_t4_g7_t2_ParamLimits

0xdd27,	// (0x00049988) list_medium_line_x4_t4_g7_t2

0xdd3c,	// (0x0004999d) list_medium_line_x4_t4_g7_t3_ParamLimits

0xdd3c,	// (0x0004999d) list_medium_line_x4_t4_g7_t3

0xdd51,	// (0x000499b2) list_medium_line_x4_t4_g7_t4_ParamLimits

0xdd51,	// (0x000499b2) list_medium_line_x4_t4_g7_t4

0xdd63,	// (0x000499c4) list_medium_line_x4_t4_g7_t5_ParamLimits

0xdd63,	// (0x000499c4) list_medium_line_x4_t4_g7_t5

0x0004,

0xfc32,	// (0x0004b893) list_medium_line_x4_t4_g7_t_ParamLimits

0xfc32,	// (0x0004b893) list_medium_line_x4_t4_g7_t

0xdd75,	// (0x000499d6) list_single_dyc_row_pane_ParamLimits

0xdd75,	// (0x000499d6) list_single_dyc_row_pane

0xaeb8,	// (0x00046b19) call5_gesture_pane_ParamLimits

0xaeb8,	// (0x00046b19) call5_gesture_pane

0xaf0e,	// (0x00046b6f) call5_windows_pane_ParamLimits

0xaf0e,	// (0x00046b6f) call5_windows_pane

0xafb4,	// (0x00046c15) call5_swipe_1_pane_cp_ParamLimits

0xafb4,	// (0x00046c15) call5_swipe_1_pane_cp

0xafc0,	// (0x00046c21) call5_swipe_2_pane_cp_ParamLimits

0xafc0,	// (0x00046c21) call5_swipe_2_pane_cp

0x1aa3,	// (0x0003d704) call5_image_pane_cp

0xafcc,	// (0x00046c2d) popup_call5_audio_first_window_cp_ParamLimits

0xafcc,	// (0x00046c2d) popup_call5_audio_first_window_cp

0xe32f,	// (0x00049f90) call5_swipe_1_pane_g1_cp_ParamLimits

0xe32f,	// (0x00049f90) call5_swipe_1_pane_g1_cp

0xe36f,	// (0x00049fd0) call5_swipe_1_pane_g2_cp

0xe348,	// (0x00049fa9) call5_swipe_1_pane_t1_cp_ParamLimits

0xe348,	// (0x00049fa9) call5_swipe_1_pane_t1_cp

0xe32f,	// (0x00049f90) call5_swipe_2_pane_g1_cp_ParamLimits

0xe32f,	// (0x00049f90) call5_swipe_2_pane_g1_cp

0xe377,	// (0x00049fd8) call5_swipe_2_pane_g2_cp

0xe37f,	// (0x00049fe0) call5_swipe_2_pane_t1_cp_ParamLimits

0xe37f,	// (0x00049fe0) call5_swipe_2_pane_t1_cp

0x1ad7,	// (0x0003d738) main_sp_fs_email_pane

0xe394,	// (0x00049ff5) main_sp_fs_listscroll_pane_te

0xe39d,	// (0x00049ffe) popup_sp_fs_action_menu_pane_ParamLimits

0xe39d,	// (0x00049ffe) popup_sp_fs_action_menu_pane

0xc734,	// (0x00048395) bg_sp_fs_ctrlbar_pane_g1

0xe3e1,	// (0x0004a042) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xe3ea,	// (0x0004a04b) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xe3f3,	// (0x0004a054) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xc734,	// (0x00048395) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfd1b,	// (0x0004b97c) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xc519,	// (0x0004817a) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xc519,	// (0x0004817a) bg_sp_fs_ctrlbar_ddmenu_pane

0xe3fc,	// (0x0004a05d) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xe3fc,	// (0x0004a05d) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xe408,	// (0x0004a069) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xe408,	// (0x0004a069) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfd24,	// (0x0004b985) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfd24,	// (0x0004b985) main_sp_fs_ctrlbar_ddmenu_pane_g

0xe414,	// (0x0004a075) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xe414,	// (0x0004a075) main_sp_fs_ctrlbar_ddmenu_pane_t1

0xe42e,	// (0x0004a08f) list_medium_line_t2_right_icon_g1

0x2d9b,	// (0x0003e9fc) list_medium_line_t2_right_icon_t1

0x2dab,	// (0x0003ea0c) list_medium_line_t2_right_icon_t2

0x0001,

0xfd29,	// (0x0004b98a) list_medium_line_t2_right_icon_t

0xc22e,	// (0x00047e8f) bg_sp_fs_ctrlbar_pane_ParamLimits

0xc22e,	// (0x00047e8f) bg_sp_fs_ctrlbar_pane

0xb022,	// (0x00046c83) main_sp_fs_ctrlbar_button_pane_cp01

0xb02a,	// (0x00046c8b) main_sp_fs_ctrlbar_ddmenu_pane

0xe46e,	// (0x0004a0cf) main_sp_fs_ctrlbar_pane_g1

0xe47a,	// (0x0004a0db) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfd2e,	// (0x0004b98f) main_sp_fs_ctrlbar_pane_g

0xe486,	// (0x0004a0e7) main_sp_fs_ctrlbar_pane_t1

0x2db9,	// (0x0003ea1a) main_sp_fs_ctrlbar_pane

0x2ddd,	// (0x0003ea3e) main_sp_fs_listscroll_pane_te_cp01

0x2dfd,	// (0x0003ea5e) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x2dfd,	// (0x0003ea5e) popup_sp_fs_action_menu_pane_cp01

0x1ad7,	// (0x0003d738) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0x1ad7,	// (0x0003d738) bg_sp_fs_highlight_list_pane_cp01

0xe49b,	// (0x0004a0fc) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0xe49b,	// (0x0004a0fc) sp_fs_action_menu_list_gene_pane_g1

0xe4aa,	// (0x0004a10b) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xe4aa,	// (0x0004a10b) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfd33,	// (0x0004b994) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfd33,	// (0x0004b994) sp_fs_action_menu_list_gene_pane_g

0xe4b7,	// (0x0004a118) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0xe4b7,	// (0x0004a118) sp_fs_action_menu_list_gene_pane_t1

0xe4cf,	// (0x0004a130) sp_fs_action_menu_list_gene_pane_ParamLimits

0xe4cf,	// (0x0004a130) sp_fs_action_menu_list_gene_pane

0xe4ee,	// (0x0004a14f) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xe4ee,	// (0x0004a14f) popup_sp_fs_action_menu_bg_pane

0xe4fc,	// (0x0004a15d) sp_fs_action_menu_list_pane_ParamLimits

0xe4fc,	// (0x0004a15d) sp_fs_action_menu_list_pane

0xe51c,	// (0x0004a17d) sp_fs_scroll_pane_cp01_ParamLimits

0xe51c,	// (0x0004a17d) sp_fs_scroll_pane_cp01

0x2e17,	// (0x0003ea78) list_medium_line_plain_t2_t1

0x2e27,	// (0x0003ea88) list_medium_line_plain_t2_t2

0x0001,

0xfd38,	// (0x0004b999) list_medium_line_plain_t2_t

0x2e37,	// (0x0003ea98) list_medium_line_plain_t3_t1

0x2e47,	// (0x0003eaa8) list_medium_line_plain_t3_t2

0x2e55,	// (0x0003eab6) list_medium_line_plain_t3_t3

0x0002,

0xfd3d,	// (0x0004b99e) list_medium_line_plain_t3_t

0xbc61,	// (0x000478c2) list_medium_line_x2_t2_g2_g1_ParamLimits

0xbc61,	// (0x000478c2) list_medium_line_x2_t2_g2_g1

0xbc79,	// (0x000478da) list_medium_line_x2_t2_g2_g2_ParamLimits

0xbc79,	// (0x000478da) list_medium_line_x2_t2_g2_g2

0x0001,

0xf2ad,	// (0x0004af0e) list_medium_line_x2_t2_g2_g_ParamLimits

0xf2ad,	// (0x0004af0e) list_medium_line_x2_t2_g2_g

0xbd8f,	// (0x000479f0) list_medium_line_x2_t2_g2_t1_ParamLimits

0xbd8f,	// (0x000479f0) list_medium_line_x2_t2_g2_t1

0xbc9a,	// (0x000478fb) list_medium_line_x2_t2_g2_t2_ParamLimits

0xbc9a,	// (0x000478fb) list_medium_line_x2_t2_g2_t2

0x0001,

0xfd44,	// (0x0004b9a5) list_medium_line_x2_t2_g2_t_ParamLimits

0xfd44,	// (0x0004b9a5) list_medium_line_x2_t2_g2_t

0xbc61,	// (0x000478c2) list_medium_line_x2_t4_g2_g1_ParamLimits

0xbc61,	// (0x000478c2) list_medium_line_x2_t4_g2_g1

0xe542,	// (0x0004a1a3) list_medium_line_x2_t4_g2_g2_ParamLimits

0xe542,	// (0x0004a1a3) list_medium_line_x2_t4_g2_g2

0x0001,

0xfd49,	// (0x0004b9aa) list_medium_line_x2_t4_g2_g_ParamLimits

0xfd49,	// (0x0004b9aa) list_medium_line_x2_t4_g2_g

0x2e63,	// (0x0003eac4) list_medium_line_x2_t4_g2_t1_ParamLimits

0x2e63,	// (0x0003eac4) list_medium_line_x2_t4_g2_t1

0x2e7a,	// (0x0003eadb) list_medium_line_x2_t4_g2_t2_ParamLimits

0x2e7a,	// (0x0003eadb) list_medium_line_x2_t4_g2_t2

0x2e8f,	// (0x0003eaf0) list_medium_line_x2_t4_g2_t3_ParamLimits

0x2e8f,	// (0x0003eaf0) list_medium_line_x2_t4_g2_t3

0xbc9a,	// (0x000478fb) list_medium_line_x2_t4_g2_t4_ParamLimits

0xbc9a,	// (0x000478fb) list_medium_line_x2_t4_g2_t4

0x0003,

0xfd4e,	// (0x0004b9af) list_medium_line_x2_t4_g2_t_ParamLimits

0xfd4e,	// (0x0004b9af) list_medium_line_x2_t4_g2_t

0xe554,	// (0x0004a1b5) list_medium_line_t3_right_iconx2_g1

0xe42e,	// (0x0004a08f) list_medium_line_t3_right_iconx2_g2

0x2ea1,	// (0x0003eb02) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfd57,	// (0x0004b9b8) list_medium_line_t3_right_iconx2_g

0x2eab,	// (0x0003eb0c) list_medium_line_t3_right_iconx2_t1

0x2ebb,	// (0x0003eb1c) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfd5e,	// (0x0004b9bf) list_medium_line_t3_right_iconx2_t

0xbc61,	// (0x000478c2) list_medium_line_x3_t4_g4_g1_ParamLimits

0xbc61,	// (0x000478c2) list_medium_line_x3_t4_g4_g1

0xbc6d,	// (0x000478ce) list_medium_line_x3_t4_g4_g2_ParamLimits

0xbc6d,	// (0x000478ce) list_medium_line_x3_t4_g4_g2

0xbce3,	// (0x00047944) list_medium_line_x3_t4_g4_g3_ParamLimits

0xbce3,	// (0x00047944) list_medium_line_x3_t4_g4_g3

0xe55c,	// (0x0004a1bd) list_medium_line_x3_t4_g4_g4_ParamLimits

0xe55c,	// (0x0004a1bd) list_medium_line_x3_t4_g4_g4

0x0003,

0xfd63,	// (0x0004b9c4) list_medium_line_x3_t4_g4_g_ParamLimits

0xfd63,	// (0x0004b9c4) list_medium_line_x3_t4_g4_g

0x2ec9,	// (0x0003eb2a) list_medium_line_x3_t4_g4_t1_ParamLimits

0x2ec9,	// (0x0003eb2a) list_medium_line_x3_t4_g4_t1

0x2ee0,	// (0x0003eb41) list_medium_line_x3_t4_g4_t2_ParamLimits

0x2ee0,	// (0x0003eb41) list_medium_line_x3_t4_g4_t2

0xbda4,	// (0x00047a05) list_medium_line_x3_t4_g4_t3_ParamLimits

0xbda4,	// (0x00047a05) list_medium_line_x3_t4_g4_t3

0xe568,	// (0x0004a1c9) list_medium_line_x3_t4_g4_t4_ParamLimits

0xe568,	// (0x0004a1c9) list_medium_line_x3_t4_g4_t4

0x0003,

0xfd6c,	// (0x0004b9cd) list_medium_line_x3_t4_g4_t_ParamLimits

0xfd6c,	// (0x0004b9cd) list_medium_line_x3_t4_g4_t

0x2ef9,	// (0x0003eb5a) list_single_dyc_row_text_pane_t1_ParamLimits

0x2ef9,	// (0x0003eb5a) list_single_dyc_row_text_pane_t1

0x2f42,	// (0x0003eba3) list_single_dyc_row_text_pane_t2_ParamLimits

0x2f42,	// (0x0003eba3) list_single_dyc_row_text_pane_t2

0xe585,	// (0x0004a1e6) list_single_dyc_row_text_pane_t3_ParamLimits

0xe585,	// (0x0004a1e6) list_single_dyc_row_text_pane_t3

0x0002,

0xfd75,	// (0x0004b9d6) list_single_dyc_row_text_pane_t_ParamLimits

0xfd75,	// (0x0004b9d6) list_single_dyc_row_text_pane_t

0xe597,	// (0x0004a1f8) list_single_dyc_row_pane_g1_ParamLimits

0xe597,	// (0x0004a1f8) list_single_dyc_row_pane_g1

0xe5a3,	// (0x0004a204) list_single_dyc_row_pane_g2_ParamLimits

0xe5a3,	// (0x0004a204) list_single_dyc_row_pane_g2

0xe5af,	// (0x0004a210) list_single_dyc_row_pane_g3_ParamLimits

0xe5af,	// (0x0004a210) list_single_dyc_row_pane_g3

0xe5bb,	// (0x0004a21c) list_single_dyc_row_pane_g4_ParamLimits

0xe5bb,	// (0x0004a21c) list_single_dyc_row_pane_g4

0x0003,

0xfd7c,	// (0x0004b9dd) list_single_dyc_row_pane_g_ParamLimits

0xfd7c,	// (0x0004b9dd) list_single_dyc_row_pane_g

0xe5c7,	// (0x0004a228) list_single_dyc_row_text_pane_ParamLimits

0xe5c7,	// (0x0004a228) list_single_dyc_row_text_pane

0x081d,	// (0x0003c47e) bg_sp_fs_scroll_pane

0xe5e6,	// (0x0004a247) thumb_sp_fs_scroll_pane

0xd44b,	// (0x000490ac) list_medium_line_g1_ParamLimits

0xd44b,	// (0x000490ac) list_medium_line_g1

0xe5ef,	// (0x0004a250) list_medium_line_t1_ParamLimits

0xe5ef,	// (0x0004a250) list_medium_line_t1

0xbc61,	// (0x000478c2) list_medium_line_x2_g1_ParamLimits

0xbc61,	// (0x000478c2) list_medium_line_x2_g1

0xbc6d,	// (0x000478ce) list_medium_line_x2_g2_ParamLimits

0xbc6d,	// (0x000478ce) list_medium_line_x2_g2

0x0001,

0xfd85,	// (0x0004b9e6) list_medium_line_x2_g_ParamLimits

0xfd85,	// (0x0004b9e6) list_medium_line_x2_g

0xe604,	// (0x0004a265) list_medium_line_x2_t1_ParamLimits

0xe604,	// (0x0004a265) list_medium_line_x2_t1

0xbc61,	// (0x000478c2) list_medium_line_x3_g1_ParamLimits

0xbc61,	// (0x000478c2) list_medium_line_x3_g1

0xbc6d,	// (0x000478ce) list_medium_line_x3_g2_ParamLimits

0xbc6d,	// (0x000478ce) list_medium_line_x3_g2

0x0001,

0xfd85,	// (0x0004b9e6) list_medium_line_x3_g_ParamLimits

0xfd85,	// (0x0004b9e6) list_medium_line_x3_g

0xe604,	// (0x0004a265) list_medium_line_x3_t1_ParamLimits

0xe604,	// (0x0004a265) list_medium_line_x3_t1

0xe61a,	// (0x0004a27b) thumb_sp_fs_scroll_pane_g1

0xe623,	// (0x0004a284) thumb_sp_fs_scroll_pane_g2

0xe62c,	// (0x0004a28d) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfd8a,	// (0x0004b9eb) thumb_sp_fs_scroll_pane_g

0xe61a,	// (0x0004a27b) bg_sp_fs_scroll_pane_g1

0xe623,	// (0x0004a284) bg_sp_fs_scroll_pane_g2

0xe62c,	// (0x0004a28d) bg_sp_fs_scroll_pane_g3

0x0002,

0xfd8a,	// (0x0004b9eb) bg_sp_fs_scroll_pane_g

0xbc61,	// (0x000478c2) list_medium_line_x2_t3_g4_g1_ParamLimits

0xbc61,	// (0x000478c2) list_medium_line_x2_t3_g4_g1

0xbcd7,	// (0x00047938) list_medium_line_x2_t3_g4_g2_ParamLimits

0xbcd7,	// (0x00047938) list_medium_line_x2_t3_g4_g2

0xbc6d,	// (0x000478ce) list_medium_line_x2_t3_g4_g3_ParamLimits

0xbc6d,	// (0x000478ce) list_medium_line_x2_t3_g4_g3

0xbc79,	// (0x000478da) list_medium_line_x2_t3_g4_g4_ParamLimits

0xbc79,	// (0x000478da) list_medium_line_x2_t3_g4_g4

0x0003,

0xf329,	// (0x0004af8a) list_medium_line_x2_t3_g4_g_ParamLimits

0xf329,	// (0x0004af8a) list_medium_line_x2_t3_g4_g

0x2f9c,	// (0x0003ebfd) list_medium_line_x2_t3_g4_t1_ParamLimits

0x2f9c,	// (0x0003ebfd) list_medium_line_x2_t3_g4_t1

0x2fb2,	// (0x0003ec13) list_medium_line_x2_t3_g4_t2_ParamLimits

0x2fb2,	// (0x0003ec13) list_medium_line_x2_t3_g4_t2

0xbc9a,	// (0x000478fb) list_medium_line_x2_t3_g4_t3_ParamLimits

0xbc9a,	// (0x000478fb) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd91,	// (0x0004b9f2) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd91,	// (0x0004b9f2) list_medium_line_x2_t3_g4_t

0xd44b,	// (0x000490ac) list_medium_line_g2_g1_ParamLimits

0xd44b,	// (0x000490ac) list_medium_line_g2_g1

0xd457,	// (0x000490b8) list_medium_line_g2_g2_ParamLimits

0xd457,	// (0x000490b8) list_medium_line_g2_g2

0x0001,

0xfa59,	// (0x0004b6ba) list_medium_line_g2_g_ParamLimits

0xfa59,	// (0x0004b6ba) list_medium_line_g2_g

0xe635,	// (0x0004a296) list_medium_line_g2_t1_ParamLimits

0xe635,	// (0x0004a296) list_medium_line_g2_t1

0xd44b,	// (0x000490ac) list_medium_line_t3_g2_g1_ParamLimits

0xd44b,	// (0x000490ac) list_medium_line_t3_g2_g1

0xd457,	// (0x000490b8) list_medium_line_t3_g2_g2_ParamLimits

0xd457,	// (0x000490b8) list_medium_line_t3_g2_g2

0x0001,

0xfa59,	// (0x0004b6ba) list_medium_line_t3_g2_g_ParamLimits

0xfa59,	// (0x0004b6ba) list_medium_line_t3_g2_g

0x2fcc,	// (0x0003ec2d) list_medium_line_t3_g2_t1_ParamLimits

0x2fcc,	// (0x0003ec2d) list_medium_line_t3_g2_t1

0x2fe6,	// (0x0003ec47) list_medium_line_t3_g2_t2_ParamLimits

0x2fe6,	// (0x0003ec47) list_medium_line_t3_g2_t2

0x2ffb,	// (0x0003ec5c) list_medium_line_t3_g2_t3_ParamLimits

0x2ffb,	// (0x0003ec5c) list_medium_line_t3_g2_t3

0x0002,

0xfd98,	// (0x0004b9f9) list_medium_line_t3_g2_t_ParamLimits

0xfd98,	// (0x0004b9f9) list_medium_line_t3_g2_t

0xe42e,	// (0x0004a08f) list_medium_line_right_icon_g1

0xe64a,	// (0x0004a2ab) list_medium_line_right_icon_t1

0xd44b,	// (0x000490ac) list_medium_line_t2_g1_ParamLimits

0xd44b,	// (0x000490ac) list_medium_line_t2_g1

0x3015,	// (0x0003ec76) list_medium_line_t2_t1_ParamLimits

0x3015,	// (0x0003ec76) list_medium_line_t2_t1

0x302f,	// (0x0003ec90) list_medium_line_t2_t2_ParamLimits

0x302f,	// (0x0003ec90) list_medium_line_t2_t2

0x0001,

0xfd9f,	// (0x0004ba00) list_medium_line_t2_t_ParamLimits

0xfd9f,	// (0x0004ba00) list_medium_line_t2_t

0xd44b,	// (0x000490ac) list_medium_line_t3_g1_ParamLimits

0xd44b,	// (0x000490ac) list_medium_line_t3_g1

0x3044,	// (0x0003eca5) list_medium_line_t3_t1_ParamLimits

0x3044,	// (0x0003eca5) list_medium_line_t3_t1

0x305b,	// (0x0003ecbc) list_medium_line_t3_t2_ParamLimits

0x305b,	// (0x0003ecbc) list_medium_line_t3_t2

0x3070,	// (0x0003ecd1) list_medium_line_t3_t3_ParamLimits

0x3070,	// (0x0003ecd1) list_medium_line_t3_t3

0x0002,

0xfda4,	// (0x0004ba05) list_medium_line_t3_t_ParamLimits

0xfda4,	// (0x0004ba05) list_medium_line_t3_t

0xd44b,	// (0x000490ac) list_medium_line_g3_g1_ParamLimits

0xd44b,	// (0x000490ac) list_medium_line_g3_g1

0xe658,	// (0x0004a2b9) list_medium_line_g3_g2_ParamLimits

0xe658,	// (0x0004a2b9) list_medium_line_g3_g2

0xd457,	// (0x000490b8) list_medium_line_g3_g3_ParamLimits

0xd457,	// (0x000490b8) list_medium_line_g3_g3

0x0002,

0xfdab,	// (0x0004ba0c) list_medium_line_g3_g_ParamLimits

0xfdab,	// (0x0004ba0c) list_medium_line_g3_g

0xe664,	// (0x0004a2c5) list_medium_line_g3_t1_ParamLimits

0xe664,	// (0x0004a2c5) list_medium_line_g3_t1

0xd44b,	// (0x000490ac) list_medium_line_t2_g3_g1_ParamLimits

0xd44b,	// (0x000490ac) list_medium_line_t2_g3_g1

0xe658,	// (0x0004a2b9) list_medium_line_t2_g3_g2_ParamLimits

0xe658,	// (0x0004a2b9) list_medium_line_t2_g3_g2

0xd457,	// (0x000490b8) list_medium_line_t2_g3_g3_ParamLimits

0xd457,	// (0x000490b8) list_medium_line_t2_g3_g3

0x0002,

0xfdab,	// (0x0004ba0c) list_medium_line_t2_g3_g_ParamLimits

0xfdab,	// (0x0004ba0c) list_medium_line_t2_g3_g

0x3082,	// (0x0003ece3) list_medium_line_t2_g3_t1_ParamLimits

0x3082,	// (0x0003ece3) list_medium_line_t2_g3_t1

0x309c,	// (0x0003ecfd) list_medium_line_t2_g3_t2_ParamLimits

0x309c,	// (0x0003ecfd) list_medium_line_t2_g3_t2

0x0001,

0xfdb2,	// (0x0004ba13) list_medium_line_t2_g3_t_ParamLimits

0xfdb2,	// (0x0004ba13) list_medium_line_t2_g3_t

0xd44b,	// (0x000490ac) list_medium_line_t3_g3_g1_ParamLimits

0xd44b,	// (0x000490ac) list_medium_line_t3_g3_g1

0xe658,	// (0x0004a2b9) list_medium_line_t3_g3_g2_ParamLimits

0xe658,	// (0x0004a2b9) list_medium_line_t3_g3_g2

0xd457,	// (0x000490b8) list_medium_line_t3_g3_g3_ParamLimits

0xd457,	// (0x000490b8) list_medium_line_t3_g3_g3

0x0002,

0xfdab,	// (0x0004ba0c) list_medium_line_t3_g3_g_ParamLimits

0xfdab,	// (0x0004ba0c) list_medium_line_t3_g3_g

0x30b1,	// (0x0003ed12) list_medium_line_t3_g3_t1_ParamLimits

0x30b1,	// (0x0003ed12) list_medium_line_t3_g3_t1

0x30c5,	// (0x0003ed26) list_medium_line_t3_g3_t2_ParamLimits

0x30c5,	// (0x0003ed26) list_medium_line_t3_g3_t2

0x30d7,	// (0x0003ed38) list_medium_line_t3_g3_t3_ParamLimits

0x30d7,	// (0x0003ed38) list_medium_line_t3_g3_t3

0x0002,

0xfdb7,	// (0x0004ba18) list_medium_line_t3_g3_t_ParamLimits

0xfdb7,	// (0x0004ba18) list_medium_line_t3_g3_t

0xe554,	// (0x0004a1b5) list_medium_line_right_iconx2_g1

0xe42e,	// (0x0004a08f) list_medium_line_right_iconx2_g2

0x0001,

0xfdbe,	// (0x0004ba1f) list_medium_line_right_iconx2_g

0xe679,	// (0x0004a2da) list_medium_line_right_iconx2_t1

0xe554,	// (0x0004a1b5) list_medium_line_t2_right_iconx2_g1

0xe42e,	// (0x0004a08f) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfdbe,	// (0x0004ba1f) list_medium_line_t2_right_iconx2_g

0x30eb,	// (0x0003ed4c) list_medium_line_t2_right_iconx2_t1

0x30fb,	// (0x0003ed5c) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfdc3,	// (0x0004ba24) list_medium_line_t2_right_iconx2_t

0xe687,	// (0x0004a2e8) list_medium_line_x4_t4_t1

0x3109,	// (0x0003ed6a) list_medium_line_x4_t4_t2

0x3119,	// (0x0003ed7a) list_medium_line_x4_t4_t3

0x3129,	// (0x0003ed8a) list_medium_line_x4_t4_t4

0x0003,

0xfdc8,	// (0x0004ba29) list_medium_line_x4_t4_t

0xb077,	// (0x00046cd8) tport_appsw_pane_ParamLimits

0xb077,	// (0x00046cd8) tport_appsw_pane

0xb088,	// (0x00046ce9) tport_contact_pane_ParamLimits

0xb088,	// (0x00046ce9) tport_contact_pane

0xb0a1,	// (0x00046d02) tport_listscroll_pane_ParamLimits

0xb0a1,	// (0x00046d02) tport_listscroll_pane

0xb0bc,	// (0x00046d1d) cell_tport_appsw_pane_ParamLimits

0xb0bc,	// (0x00046d1d) cell_tport_appsw_pane

0xd1a6,	// (0x00048e07) tport_appsw_pane_g1_ParamLimits

0xd1a6,	// (0x00048e07) tport_appsw_pane_g1

0xe695,	// (0x0004a2f6) tport_contact_pane_g1

0xde66,	// (0x00049ac7) tport_contact_pane_t1

0xe69e,	// (0x0004a2ff) tport_contact_pane_t2

0x0001,

0xfdd1,	// (0x0004ba32) tport_contact_pane_t

0xe6ac,	// (0x0004a30d) list_tport_pane

0xe6b5,	// (0x0004a316) scroll_pane_cp_030

0xb0d7,	// (0x00046d38) cell_tport_appsw_pane_g1

0xe6be,	// (0x0004a31f) cell_tport_appsw_pane_t1

0x081d,	// (0x0003c47e) grid_highlight_pane_cp019

0xb0ef,	// (0x00046d50) list_tport_double_graphic_pane_ParamLimits

0xb0ef,	// (0x00046d50) list_tport_double_graphic_pane

0x1ad7,	// (0x0003d738) list_highlight_pane_cp023_ParamLimits

0x1ad7,	// (0x0003d738) list_highlight_pane_cp023

0xb0fc,	// (0x00046d5d) list_tport_double_graphic_pane_g1_ParamLimits

0xb0fc,	// (0x00046d5d) list_tport_double_graphic_pane_g1

0xb109,	// (0x00046d6a) list_tport_double_graphic_pane_t1_ParamLimits

0xb109,	// (0x00046d6a) list_tport_double_graphic_pane_t1

0xb11e,	// (0x00046d7f) list_tport_double_graphic_pane_t2_ParamLimits

0xb11e,	// (0x00046d7f) list_tport_double_graphic_pane_t2

0x0001,

0xfddd,	// (0x0004ba3e) list_tport_double_graphic_pane_t_ParamLimits

0xfddd,	// (0x0004ba3e) list_tport_double_graphic_pane_t

0x081d,	// (0x0003c47e) main_cale_note_pane

0x9578,	// (0x000451d9) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x9578,	// (0x000451d9) cell_vitu2_function_top_wide_pane_cp01

0xabf6,	// (0x00046857) wait_bar_pane_cp05_ParamLimits

0x081d,	// (0x0003c47e) listscroll_cmail_pane

0xe6d4,	// (0x0004a335) list_cmail_pane

0xb13a,	// (0x00046d9b) list_cmail_body_pane

0xe6ec,	// (0x0004a34d) list_single_cmail_header_caption_pane

0xb14e,	// (0x00046daf) list_single_cmail_header_detail_pane_ParamLimits

0xb14e,	// (0x00046daf) list_single_cmail_header_detail_pane

0xb178,	// (0x00046dd9) list_single_cmail_header_caption_pane_t1

0x3139,	// (0x0003ed9a) list_single_cmail_header_detail_pane_g1_ParamLimits

0x3139,	// (0x0003ed9a) list_single_cmail_header_detail_pane_g1

0xe70e,	// (0x0004a36f) list_single_cmail_header_detail_pane_g2_ParamLimits

0xe70e,	// (0x0004a36f) list_single_cmail_header_detail_pane_g2

0x0002,

0xfde2,	// (0x0004ba43) list_single_cmail_header_detail_pane_g_ParamLimits

0xfde2,	// (0x0004ba43) list_single_cmail_header_detail_pane_g

0xe727,	// (0x0004a388) list_single_cmail_header_detail_pane_t1_ParamLimits

0xe727,	// (0x0004a388) list_single_cmail_header_detail_pane_t1

0xe75d,	// (0x0004a3be) list_single_cmail_header_editor_pane_bg_ParamLimits

0xe75d,	// (0x0004a3be) list_single_cmail_header_editor_pane_bg

0xdff5,	// (0x00049c56) list_cmail_body_pane_g1

0xe76f,	// (0x0004a3d0) list_cmail_body_pane_t1

0xd1e3,	// (0x00048e44) list_single_cmail_header_editor_pane_bg_g1

0x13c6,	// (0x0003d027) list_single_cmail_header_editor_pane_bg_g1_copy1

0xd1f3,	// (0x00048e54) list_single_cmail_header_editor_pane_bg_g1_copy2

0xd1eb,	// (0x00048e4c) list_single_cmail_header_editor_pane_bg_g1_copy3

0xd443,	// (0x000490a4) list_single_cmail_header_editor_pane_bg_g1_copy4

0xd213,	// (0x00048e74) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xd203,	// (0x00048e64) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xd20b,	// (0x00048e6c) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0x13a6,	// (0x0003d007) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0xb188,	// (0x00046de9) calenote_gesture_pane_ParamLimits

0xb188,	// (0x00046de9) calenote_gesture_pane

0xb1a8,	// (0x00046e09) calenote_window_pane_ParamLimits

0xb1a8,	// (0x00046e09) calenote_window_pane

0xe77d,	// (0x0004a3de) popup_note_window_cp01

0xb1c4,	// (0x00046e25) calenote_swipe_1_pane_ParamLimits

0xb1c4,	// (0x00046e25) calenote_swipe_1_pane

0xafc0,	// (0x00046c21) calenote_swipe_2_pane_ParamLimits

0xafc0,	// (0x00046c21) calenote_swipe_2_pane

0xe32f,	// (0x00049f90) calenote_swipe_1_pane_g1_ParamLimits

0xe32f,	// (0x00049f90) calenote_swipe_1_pane_g1

0xe33c,	// (0x00049f9d) calenote_swipe_1_pane_g2_ParamLimits

0xe33c,	// (0x00049f9d) calenote_swipe_1_pane_g2

0x0001,

0xfd11,	// (0x0004b972) calenote_swipe_1_pane_g_ParamLimits

0xfd11,	// (0x0004b972) calenote_swipe_1_pane_g

0xe78f,	// (0x0004a3f0) calenote_swipe_1_pane_t1_ParamLimits

0xe78f,	// (0x0004a3f0) calenote_swipe_1_pane_t1

0xe32f,	// (0x00049f90) calenote_swipe_2_pane_g1_ParamLimits

0xe32f,	// (0x00049f90) calenote_swipe_2_pane_g1

0xe7ae,	// (0x0004a40f) calenote_swipe_2_pane_g2_ParamLimits

0xe7ae,	// (0x0004a40f) calenote_swipe_2_pane_g2

0x0001,

0xfdee,	// (0x0004ba4f) calenote_swipe_2_pane_g_ParamLimits

0xfdee,	// (0x0004ba4f) calenote_swipe_2_pane_g

0xe7ba,	// (0x0004a41b) calenote_swipe_2_pane_t1_ParamLimits

0xe7ba,	// (0x0004a41b) calenote_swipe_2_pane_t1

0x081d,	// (0x0003c47e) main_mup_navstr_pane

0x8251,	// (0x00043eb2) main_mup3_pane_t7_ParamLimits

0x8251,	// (0x00043eb2) main_mup3_pane_t7

0xee3d,	// (0x0004aa9e) main_mp4_pane_g6_ParamLimits

0xee3d,	// (0x0004aa9e) main_mp4_pane_g6

0xefd3,	// (0x0004ac34) main_image3_pane_t4_ParamLimits

0xefd3,	// (0x0004ac34) main_image3_pane_t4

0xb1d9,	// (0x00046e3a) popup_navstr_preview_pane_ParamLimits

0xb1d9,	// (0x00046e3a) popup_navstr_preview_pane

0xb1ed,	// (0x00046e4e) scroll_navstr_pane_ParamLimits

0xb1ed,	// (0x00046e4e) scroll_navstr_pane

0x081d,	// (0x0003c47e) bg_popup_preview_window_pane_cp04

0xe7e1,	// (0x0004a442) popup_navstr_preview_pane_t1

0xb201,	// (0x00046e62) scroll_navstr_pane_g1_ParamLimits

0xb201,	// (0x00046e62) scroll_navstr_pane_g1

0xb215,	// (0x00046e76) scroll_navstr_pane_t1_ParamLimits

0xb215,	// (0x00046e76) scroll_navstr_pane_t1

0xe786,	// (0x0004a3e7) bg_button_pane_cp014

0xe786,	// (0x0004a3e7) bg_button_pane_cp030

0x2d41,	// (0x0003e9a2) list_double_fisheye_pane_g4_ParamLimits

0x2d41,	// (0x0003e9a2) list_double_fisheye_pane_g4

0x2d4d,	// (0x0003e9ae) list_double_fisheye_pane_g5_ParamLimits

0x2d4d,	// (0x0003e9ae) list_double_fisheye_pane_g5

0xe6dc,	// (0x0004a33d) sp_fs_scroll_pane_cp03

0xe46e,	// (0x0004a0cf) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xe47a,	// (0x0004a0db) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfd2e,	// (0x0004b98f) main_sp_fs_ctrlbar_pane_g_ParamLimits

0xe486,	// (0x0004a0e7) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xb130,	// (0x00046d91) sp_fs_scroll_pane_cp02

0x10ce,	// (0x0003cd2f) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0x10ce,	// (0x0003cd2f) popup_sp_fs_calendar_preview_list_single_pane

0x081d,	// (0x0003c47e) main_cam6_pano_pane

0x1ad7,	// (0x0003d738) main_mup3_pane_ParamLimits

0x081d,	// (0x0003c47e) main_phacti_pane

0xaac9,	// (0x0004672a) bg_button_pane_cp11

0xaae3,	// (0x00046744) main_mobtv_info_pane_g2_ParamLimits

0xaae3,	// (0x00046744) main_mobtv_info_pane_g2

0x0001,

0xfc8e,	// (0x0004b8ef) main_mobtv_info_pane_g_ParamLimits

0xfc8e,	// (0x0004b8ef) main_mobtv_info_pane_g

0xacbe,	// (0x0004691f) sc_clock_pane_t5_ParamLimits

0xacbe,	// (0x0004691f) sc_clock_pane_t5

0xad43,	// (0x000469a4) main_radioblah_pane_g1_ParamLimits

0xe27b,	// (0x00049edc) main_radioblah_pane_t3_ParamLimits

0xe27b,	// (0x00049edc) main_radioblah_pane_t3

0xe293,	// (0x00049ef4) main_radioblah_pane_t4_ParamLimits

0xe293,	// (0x00049ef4) main_radioblah_pane_t4

0xad6b,	// (0x000469cc) main_radioblah_text_pane_ParamLimits

0xad6b,	// (0x000469cc) main_radioblah_text_pane

0xad7d,	// (0x000469de) main_radioblah_info_pane_g1_ParamLimits

0xae16,	// (0x00046a77) main_radioblah_info_pane_t4_ParamLimits

0xae16,	// (0x00046a77) main_radioblah_info_pane_t4

0x1ad7,	// (0x0003d738) main_sp_fs_calendar_pane

0xb22c,	// (0x00046e8d) main_phacti_pane_g1

0xb234,	// (0x00046e95) phacti_note_pane_ParamLimits

0xb234,	// (0x00046e95) phacti_note_pane

0xe7f8,	// (0x0004a459) phacti_term_pane_ParamLimits

0xe7f8,	// (0x0004a459) phacti_term_pane

0xe80d,	// (0x0004a46e) phacti_note_pane_t1_ParamLimits

0xe80d,	// (0x0004a46e) phacti_note_pane_t1

0xe824,	// (0x0004a485) phacti_term_pane_g1

0xe82c,	// (0x0004a48d) phacti_term_pane_t1_ParamLimits

0xe82c,	// (0x0004a48d) phacti_term_pane_t1

0xe856,	// (0x0004a4b7) popup_sp_fs_calendar_preview_list_single_pane_g1

0x11c1,	// (0x0003ce22) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfdf8,	// (0x0004ba59) popup_sp_fs_calendar_preview_list_single_pane_g

0xe85e,	// (0x0004a4bf) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xe85e,	// (0x0004a4bf) popup_sp_fs_calendar_preview_list_single_pane_t1

0xe873,	// (0x0004a4d4) aid_popup_sp_fs_bg_corner_pane

0xc734,	// (0x00048395) popup_sp_fs_calendar_preview_bg_pane_g1

0x081d,	// (0x0003c47e) popup_sp_fs_calendar_preview_bg_pane

0xe87b,	// (0x0004a4dc) popup_sp_fs_calendar_preview_list_pane

0x1ad7,	// (0x0003d738) bg_main_sp_fs_cale_pane_ParamLimits

0x1ad7,	// (0x0003d738) bg_main_sp_fs_cale_pane

0xe883,	// (0x0004a4e4) listscroll_cale_mrui_pane_ParamLimits

0xe883,	// (0x0004a4e4) listscroll_cale_mrui_pane

0xe897,	// (0x0004a4f8) listscroll_sp_fs_schedule_track_pane

0xe8a0,	// (0x0004a501) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0xe8a0,	// (0x0004a501) main_sp_fs_ctrlbar_pane_cp01

0xe8b1,	// (0x0004a512) main_sp_fs_ribbon_pane

0xe8b9,	// (0x0004a51a) popup_sp_fs_cale_preview_window

0xb28b,	// (0x00046eec) list_single_sp_fs_schedule_track_pane_ParamLimits

0xb28b,	// (0x00046eec) list_single_sp_fs_schedule_track_pane

0x1ad7,	// (0x0003d738) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0x1ad7,	// (0x0003d738) bg_sp_fs_highlight_list_pane_cp03

0xb29e,	// (0x00046eff) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0xb29e,	// (0x00046eff) list_single_sp_fs_schedule_track_pane_g1

0xb2aa,	// (0x00046f0b) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0xb2aa,	// (0x00046f0b) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfdfd,	// (0x0004ba5e) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfdfd,	// (0x0004ba5e) list_single_sp_fs_schedule_track_pane_g

0xb2b6,	// (0x00046f17) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0xb2b6,	// (0x00046f17) list_single_sp_fs_schedule_track_pane_t1

0xb2d0,	// (0x00046f31) sp_fs_schedule_track_pane_ParamLimits

0xb2d0,	// (0x00046f31) sp_fs_schedule_track_pane

0xe8cb,	// (0x0004a52c) sp_fs_schedule_track_pane_g1

0xe8d3,	// (0x0004a534) sp_fs_schedule_track_pane_g2

0xe8db,	// (0x0004a53c) sp_fs_schedule_track_pane_g3

0xe8e3,	// (0x0004a544) sp_fs_schedule_track_pane_g4

0xe8eb,	// (0x0004a54c) sp_fs_schedule_track_pane_g5

0x0004,

0xfe02,	// (0x0004ba63) sp_fs_schedule_track_pane_g

0xd1e3,	// (0x00048e44) bg_sp_fs_schedule_viewer_highlight_g1

0x13c6,	// (0x0003d027) bg_sp_fs_schedule_viewer_highlight_g2

0xd1eb,	// (0x00048e4c) bg_sp_fs_schedule_viewer_highlight_g3

0xd1f3,	// (0x00048e54) bg_sp_fs_schedule_viewer_highlight_g4

0xd443,	// (0x000490a4) bg_sp_fs_schedule_viewer_highlight_g5

0xd203,	// (0x00048e64) bg_sp_fs_schedule_viewer_highlight_g6

0xd20b,	// (0x00048e6c) bg_sp_fs_schedule_viewer_highlight_g7

0xd213,	// (0x00048e74) bg_sp_fs_schedule_viewer_highlight_g8

0x13a6,	// (0x0003d007) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfe0d,	// (0x0004ba6e) bg_sp_fs_schedule_viewer_highlight_g

0x081d,	// (0x0003c47e) bg_main_sp_fs_ribbon_pane

0xb2e1,	// (0x00046f42) main_sp_fs_ribbon_pane_g1

0xe8f3,	// (0x0004a554) main_sp_fs_ribbon_pane_t1

0xb2ea,	// (0x00046f4b) main_sp_fs_ribbon_pane_t2

0xe902,	// (0x0004a563) main_sp_fs_ribbon_pane_t3

0x0002,

0xfe20,	// (0x0004ba81) main_sp_fs_ribbon_pane_t

0xe911,	// (0x0004a572) main_sp_fs_ribbon_scheduler_pane

0xe919,	// (0x0004a57a) bg_main_sp_fs_ribbon_pane_g1

0xe922,	// (0x0004a583) bg_main_sp_fs_ribbon_pane_g2

0xe92b,	// (0x0004a58c) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfe27,	// (0x0004ba88) bg_main_sp_fs_ribbon_pane_g

0xe933,	// (0x0004a594) main_sp_fs_ribbon_scheduler_pane_g1

0xe93c,	// (0x0004a59d) main_sp_fs_ribbon_scheduler_pane_g2

0xe945,	// (0x0004a5a6) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfe2e,	// (0x0004ba8f) main_sp_fs_ribbon_scheduler_pane_g

0xe94e,	// (0x0004a5af) list_cale_mrui_pane

0xb2f9,	// (0x00046f5a) sp_fs_scroll_pane_cp07_ParamLimits

0xb2f9,	// (0x00046f5a) sp_fs_scroll_pane_cp07

0xb30f,	// (0x00046f70) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0xb30f,	// (0x00046f70) bg_sp_fs_schedule_viewer_highlight

0xe957,	// (0x0004a5b8) list_single_sp_fs_schedule_track_pane_cp01

0xe95f,	// (0x0004a5c0) list_sp_fs_schedule_track_pane

0xe967,	// (0x0004a5c8) sp_fs_scroll_pane_cp06_ParamLimits

0xe967,	// (0x0004a5c8) sp_fs_scroll_pane_cp06

0xc734,	// (0x00048395) bgmain_sp_fs_calendar_pane_g1

0x3177,	// (0x0003edd8) list_single_cale_mrui_pane_ParamLimits

0x3177,	// (0x0003edd8) list_single_cale_mrui_pane

0xe979,	// (0x0004a5da) list_single_cale_mrui_row_pane_ParamLimits

0xe979,	// (0x0004a5da) list_single_cale_mrui_row_pane

0xe986,	// (0x0004a5e7) list_single_cale_mrui_row_pane_g1_ParamLimits

0xe986,	// (0x0004a5e7) list_single_cale_mrui_row_pane_g1

0xe9be,	// (0x0004a61f) list_single_cale_mrui_row_pane_t1_ParamLimits

0xe9be,	// (0x0004a61f) list_single_cale_mrui_row_pane_t1

0x3198,	// (0x0003edf9) list_single_cale_mrui_row_pane_t2_ParamLimits

0x3198,	// (0x0003edf9) list_single_cale_mrui_row_pane_t2

0xe9d0,	// (0x0004a631) list_single_cale_mrui_row_pane_t3_ParamLimits

0xe9d0,	// (0x0004a631) list_single_cale_mrui_row_pane_t3

0xe9ff,	// (0x0004a660) list_single_cale_mrui_row_pane_t4_ParamLimits

0xe9ff,	// (0x0004a660) list_single_cale_mrui_row_pane_t4

0x0003,

0xfe3a,	// (0x0004ba9b) list_single_cale_mrui_row_pane_t_ParamLimits

0xfe3a,	// (0x0004ba9b) list_single_cale_mrui_row_pane_t

0x3200,	// (0x0003ee61) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x3200,	// (0x0003ee61) list_single_cmail_header_editor_pane_bg_cp01

0x3226,	// (0x0003ee87) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x3226,	// (0x0003ee87) list_single_cmail_header_editor_pane_bg_cp02

0xb31f,	// (0x00046f80) main_radioblah_text_pane_t1_ParamLimits

0xb31f,	// (0x00046f80) main_radioblah_text_pane_t1

0xea2e,	// (0x0004a68f) cam6_indi_pane_cp01

0xea36,	// (0x0004a697) cam6_mode_pane_cp01

0xea3e,	// (0x0004a69f) cam6_pano_pane

0xea47,	// (0x0004a6a8) cam6_zoom_pane_cp01

0xea4f,	// (0x0004a6b0) cam6_pano_image_pane

0xea5a,	// (0x0004a6bb) cam6_pano_pane_g1

0xdff5,	// (0x00049c56) cam6_pano_pane_g2

0xea63,	// (0x0004a6c4) cam6_pano_pane_g3

0xea6c,	// (0x0004a6cd) cam6_pano_pane_g4

0xcd18,	// (0x00048979) cam6_pano_pane_g5

0xea75,	// (0x0004a6d6) cam6_pano_pane_g6

0xea7f,	// (0x0004a6e0) cam6_pano_pane_g7

0xea87,	// (0x0004a6e8) cam6_pano_pane_g8

0xea90,	// (0x0004a6f1) cam6_pano_pane_g9

0x0008,

0xfe43,	// (0x0004baa4) cam6_pano_pane_g

0x081d,	// (0x0003c47e) main_browser_tag_pane

0xe7d9,	// (0x0004a43a) grid_navstr_albumart_pane

0xea9b,	// (0x0004a6fc) cell_navstr_albumart_pane_ParamLimits

0xea9b,	// (0x0004a6fc) cell_navstr_albumart_pane

0xeabe,	// (0x0004a71f) cell_navstr_albumart_pane_g1

0xc04b,	// (0x00047cac) cell_navstr_albumart_pane_g2

0xc05b,	// (0x00047cbc) cell_navstr_albumart_pane_g3

0xc053,	// (0x00047cb4) cell_navstr_albumart_pane_g4

0x0003,

0xfe56,	// (0x0004bab7) cell_navstr_albumart_pane_g

0xb339,	// (0x00046f9a) bt_list_pane_ParamLimits

0xb339,	// (0x00046f9a) bt_list_pane

0xb34d,	// (0x00046fae) bt_list_pane_t1

0xb35c,	// (0x00046fbd) bt_list_pane_t2

0x0001,

0xfe5f,	// (0x0004bac0) bt_list_pane_t

0x081d,	// (0x0003c47e) main_cale_prevew_pane

0xb36b,	// (0x00046fcc) popup_cale_preview_window_ParamLimits

0xb36b,	// (0x00046fcc) popup_cale_preview_window

0x1ad7,	// (0x0003d738) bg_popup_preview_window_pane_cp05_ParamLimits

0x1ad7,	// (0x0003d738) bg_popup_preview_window_pane_cp05

0xeac6,	// (0x0004a727) list_cale_preview_pane_ParamLimits

0xeac6,	// (0x0004a727) list_cale_preview_pane

0xb384,	// (0x00046fe5) list_double_cale_preview_pane_ParamLimits

0xb384,	// (0x00046fe5) list_double_cale_preview_pane

0xb396,	// (0x00046ff7) list_single_cale_preview_pane_ParamLimits

0xb396,	// (0x00046ff7) list_single_cale_preview_pane

0xb3ac,	// (0x0004700d) list_single_cale_preview_pane_g1

0xb3b4,	// (0x00047015) list_single_cale_preview_pane_t1_ParamLimits

0xb3b4,	// (0x00047015) list_single_cale_preview_pane_t1

0xb3c9,	// (0x0004702a) list_double_cale_preview_pane_g1

0xb3d1,	// (0x00047032) list_double_cale_preview_pane_t1_ParamLimits

0xb3d1,	// (0x00047032) list_double_cale_preview_pane_t1

0xb3e6,	// (0x00047047) list_double_cale_preview_pane_t2_ParamLimits

0xb3e6,	// (0x00047047) list_double_cale_preview_pane_t2

0x0001,

0xfe64,	// (0x0004bac5) list_double_cale_preview_pane_t_ParamLimits

0xfe64,	// (0x0004bac5) list_double_cale_preview_pane_t

0x081d,	// (0x0003c47e) main_ezdial_pane

0x1ad7,	// (0x0003d738) main_sp_fs_email_pane_ParamLimits

0xafda,	// (0x00046c3b) cmail_ddmenu_btn01_pane_ParamLimits

0xafda,	// (0x00046c3b) cmail_ddmenu_btn01_pane

0xafed,	// (0x00046c4e) cmail_ddmenu_btn02_pane_ParamLimits

0xafed,	// (0x00046c4e) cmail_ddmenu_btn02_pane

0xb010,	// (0x00046c71) cmail_ddmenu_btn03_pane_ParamLimits

0xb010,	// (0x00046c71) cmail_ddmenu_btn03_pane

0x2db9,	// (0x0003ea1a) main_sp_fs_ctrlbar_pane_ParamLimits

0x2ddd,	// (0x0003ea3e) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0xb13a,	// (0x00046d9b) list_cmail_body_pane_ParamLimits

0xe705,	// (0x0004a366) bg_button_pane_cp12

0xe71a,	// (0x0004a37b) list_single_cmail_header_detail_pane_g3_ParamLimits

0xe71a,	// (0x0004a37b) list_single_cmail_header_detail_pane_g3

0x3151,	// (0x0003edb2) list_single_cmail_header_detail_pane_t2_ParamLimits

0x3151,	// (0x0003edb2) list_single_cmail_header_detail_pane_t2

0x0001,

0xfde9,	// (0x0004ba4a) list_single_cmail_header_detail_pane_t_ParamLimits

0xfde9,	// (0x0004ba4a) list_single_cmail_header_detail_pane_t

0xe841,	// (0x0004a4a2) phacti_term_pane_t2_ParamLimits

0xe841,	// (0x0004a4a2) phacti_term_pane_t2

0x0001,

0xfdf3,	// (0x0004ba54) phacti_term_pane_t_ParamLimits

0xfdf3,	// (0x0004ba54) phacti_term_pane_t

0xead2,	// (0x0004a733) aid_size_list_single_double

0xb3fe,	// (0x0004705f) popup_ezdial_listscroll_window

0xb41a,	// (0x0004707b) popup_number_entry_window_cp01

0x1aa3,	// (0x0003d704) bg_popup_call_pane_cp09

0xeade,	// (0x0004a73f) ezdial_list_pane

0xeae6,	// (0x0004a747) scroll_pane_cp23

0xc22e,	// (0x00047e8f) bg_button_pane_cp028_ParamLimits

0xc22e,	// (0x00047e8f) bg_button_pane_cp028

0xb428,	// (0x00047089) cmail_ddmenu_btn01_pane_g1_ParamLimits

0xb428,	// (0x00047089) cmail_ddmenu_btn01_pane_g1

0xb434,	// (0x00047095) cmail_ddmenu_btn01_pane_g2_ParamLimits

0xb434,	// (0x00047095) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfe69,	// (0x0004baca) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfe69,	// (0x0004baca) cmail_ddmenu_btn01_pane_g

0xeaee,	// (0x0004a74f) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xeaee,	// (0x0004a74f) cmail_ddmenu_btn01_pane_t1

0xc22e,	// (0x00047e8f) bg_button_pane_cp029_ParamLimits

0xc22e,	// (0x00047e8f) bg_button_pane_cp029

0xb440,	// (0x000470a1) cmail_ddmenu_btn02_pane_g1_ParamLimits

0xb440,	// (0x000470a1) cmail_ddmenu_btn02_pane_g1

0xb458,	// (0x000470b9) cmail_ddmenu_btn02_pane_t1_ParamLimits

0xb458,	// (0x000470b9) cmail_ddmenu_btn02_pane_t1

0x1ad7,	// (0x0003d738) bg_button_pane_cp031_ParamLimits

0x1ad7,	// (0x0003d738) bg_button_pane_cp031

0xb440,	// (0x000470a1) cmail_ddmenu_btn03_pane_g1_ParamLimits

0xb440,	// (0x000470a1) cmail_ddmenu_btn03_pane_g1

0xb458,	// (0x000470b9) cmail_ddmenu_btn03_pane_t1_ParamLimits

0xb458,	// (0x000470b9) cmail_ddmenu_btn03_pane_t1

0x8daa,	// (0x00044a0b) cell_dialer2_keypad_pane_t1_ParamLimits

0x8dc4,	// (0x00044a25) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x8dc4,	// (0x00044a25) cell_dialer2_keypad_pane_t1_copy1

0xa96e,	// (0x000465cf) ncimui_group_button_pane

0x1ad7,	// (0x0003d738) main_sp_fs_calendar_pane_ParamLimits

0xe6ec,	// (0x0004a34d) list_single_cmail_header_caption_pane_ParamLimits

0xd78a,	// (0x000493eb) aid_recal_txt_sm_pane

0x081d,	// (0x0003c47e) mian_recal_day_pane

0xe8b9,	// (0x0004a51a) popup_sp_fs_cale_preview_window_ParamLimits

0x081d,	// (0x0003c47e) list_recal_day_pane

0xeb1c,	// (0x0004a77d) list_single_recal_day_pane_ParamLimits

0xeb1c,	// (0x0004a77d) list_single_recal_day_pane

0xeb2e,	// (0x0004a78f) list_single_recal_day_pane_g1_ParamLimits

0xeb2e,	// (0x0004a78f) list_single_recal_day_pane_g1

0xeb3a,	// (0x0004a79b) list_single_recal_day_pane_g2_ParamLimits

0xeb3a,	// (0x0004a79b) list_single_recal_day_pane_g2

0xeb49,	// (0x0004a7aa) list_single_recal_day_pane_g3_ParamLimits

0xeb49,	// (0x0004a7aa) list_single_recal_day_pane_g3

0xb47c,	// (0x000470dd) list_single_recal_day_pane_g4_ParamLimits

0xb47c,	// (0x000470dd) list_single_recal_day_pane_g4

0xeb55,	// (0x0004a7b6) list_single_recal_day_pane_g5_ParamLimits

0xeb55,	// (0x0004a7b6) list_single_recal_day_pane_g5

0xeb64,	// (0x0004a7c5) list_single_recal_day_pane_g6_ParamLimits

0xeb64,	// (0x0004a7c5) list_single_recal_day_pane_g6

0x0005,

0xfe78,	// (0x0004bad9) list_single_recal_day_pane_g_ParamLimits

0xfe78,	// (0x0004bad9) list_single_recal_day_pane_g

0xeb70,	// (0x0004a7d1) list_single_recal_day_pane_t1

0xeb7e,	// (0x0004a7df) list_single_recal_day_pane_t2

0x0001,

0xfe85,	// (0x0004bae6) list_single_recal_day_pane_t

0xb48f,	// (0x000470f0) ncimui_query_button_pane_ParamLimits

0xb48f,	// (0x000470f0) ncimui_query_button_pane

0xb49f,	// (0x00047100) ncimui_query_button_pane_t1_ParamLimits

0xb49f,	// (0x00047100) ncimui_query_button_pane_t1

0xeb8c,	// (0x0004a7ed) ncimui_query_button_pane_t2_ParamLimits

0xeb8c,	// (0x0004a7ed) ncimui_query_button_pane_t2

0x0001,

0xfe8a,	// (0x0004baeb) ncimui_query_button_pane_t_ParamLimits

0xfe8a,	// (0x0004baeb) ncimui_query_button_pane_t

0xb4b2,	// (0x00047113) query_button_pane_ParamLimits

0xb4b2,	// (0x00047113) query_button_pane

0x081d,	// (0x0003c47e) bg_button_pane_cp0028

0xeb9f,	// (0x0004a800) query_button_pane_t1

0x6efb,	// (0x00042b5c) main_tport_pane_ParamLimits

0xb034,	// (0x00046c95) bg_popup_window_pane_cp01_ParamLimits

0xb034,	// (0x00046c95) bg_popup_window_pane_cp01

0xb04e,	// (0x00046caf) heading_pane_cp08_ParamLimits

0xb04e,	// (0x00046caf) heading_pane_cp08

0xb062,	// (0x00046cc3) heading_pane_cp07_ParamLimits

0xb062,	// (0x00046cc3) heading_pane_cp07

0xb0df,	// (0x00046d40) cell_tport_appsw_pane_g2

0x0002,

0xfdd6,	// (0x0004ba37) cell_tport_appsw_pane_g

0x29f6,	// (0x0003e657) input_candi_list_open_g1

0x156d,	// (0x0003d1ce) list_cale_time_pane_g6_ParamLimits

0x156d,	// (0x0003d1ce) list_cale_time_pane_g6

0x7cc8,	// (0x00043929) aid_size_touch_calib_1_ParamLimits

0x7cc8,	// (0x00043929) aid_size_touch_calib_1

0x7cd4,	// (0x00043935) aid_size_touch_calib_2_ParamLimits

0x7cd4,	// (0x00043935) aid_size_touch_calib_2

0x7cea,	// (0x0004394b) aid_size_touch_calib_3_ParamLimits

0x7cea,	// (0x0004394b) aid_size_touch_calib_3

0x7d08,	// (0x00043969) aid_size_touch_calib_4_ParamLimits

0x7d08,	// (0x00043969) aid_size_touch_calib_4

0x7d1e,	// (0x0004397f) main_touch_calib_button_group_pane_ParamLimits

0x7d1e,	// (0x0004397f) main_touch_calib_button_group_pane

0x7d35,	// (0x00043996) main_touch_calib_pane_g1_ParamLimits

0x7d41,	// (0x000439a2) main_touch_calib_pane_g2_ParamLimits

0x7d4d,	// (0x000439ae) main_touch_calib_pane_g3_ParamLimits

0x7d59,	// (0x000439ba) main_touch_calib_pane_g4_ParamLimits

0xf7b8,	// (0x0004b419) main_touch_calib_pane_g_ParamLimits

0x7d65,	// (0x000439c6) main_touch_calib_pane_t1_ParamLimits

0x7d7f,	// (0x000439e0) main_touch_calib_pane_t2_ParamLimits

0x7d99,	// (0x000439fa) main_touch_calib_pane_t3_ParamLimits

0x7dad,	// (0x00043a0e) main_touch_calib_pane_t4_ParamLimits

0x7dc1,	// (0x00043a22) main_touch_calib_pane_t5_ParamLimits

0xf7c1,	// (0x0004b422) main_touch_calib_pane_t_ParamLimits

0xcaee,	// (0x0004874f) list_single_fp_cale_pane_g3_ParamLimits

0xcaee,	// (0x0004874f) list_single_fp_cale_pane_g3

0x1ad7,	// (0x0003d738) bg_button_pane_cp012_ParamLimits

0x1ad7,	// (0x0003d738) bg_vkb2_func_pane_cp03_ParamLimits

0x9d48,	// (0x000459a9) cell_vitu2_function_top_pane_g1_ParamLimits

0x1ad7,	// (0x0003d738) bg_vkb2_func_pane_cp04_ParamLimits

0xa922,	// (0x00046583) main_ncimui_button_group_pane_ParamLimits

0xa922,	// (0x00046583) main_ncimui_button_group_pane

0xa95c,	// (0x000465bd) main_ncimui_pane_t3_ParamLimits

0xa95c,	// (0x000465bd) main_ncimui_pane_t3

0xe7ef,	// (0x0004a450) phacti_button_group_pane

0xead2,	// (0x0004a733) aid_size_list_single_double_ParamLimits

0xb3fe,	// (0x0004705f) popup_ezdial_listscroll_window_ParamLimits

0xb41a,	// (0x0004707b) popup_number_entry_window_cp01_ParamLimits

0xb4c5,	// (0x00047126) phacti_button_pane_ParamLimits

0xb4c5,	// (0x00047126) phacti_button_pane

0x081d,	// (0x0003c47e) bg_button_pane_cp14

0xebad,	// (0x0004a80e) phacti_button_pane_t1

0xb4d6,	// (0x00047137) main_touch_calib_button_pane_ParamLimits

0xb4d6,	// (0x00047137) main_touch_calib_button_pane

0x0fca,	// (0x0003cc2b) bg_button_pane_cp18_ParamLimits

0x0fca,	// (0x0003cc2b) bg_button_pane_cp18

0xebbb,	// (0x0004a81c) main_touch_calib_button_pane_t1_ParamLimits

0xebbb,	// (0x0004a81c) main_touch_calib_button_pane_t1

0xebd1,	// (0x0004a832) main_touch_calib_button_pane_t2_ParamLimits

0xebd1,	// (0x0004a832) main_touch_calib_button_pane_t2

0x0001,

0xfe8f,	// (0x0004baf0) main_touch_calib_button_pane_t_ParamLimits

0xfe8f,	// (0x0004baf0) main_touch_calib_button_pane_t

0x081d,	// (0x0003c47e) cell_ncimui_button_pane

0x081d,	// (0x0003c47e) bg_button_pane_cp032

0xebef,	// (0x0004a850) cell_ncimui_button_pane_t1

0xefb3,	// (0x0004ac14) image3_infobar_pane_ParamLimits

0xefb3,	// (0x0004ac14) image3_infobar_pane

0xacea,	// (0x0004694b) fs_bigclock_status_pane_ParamLimits

0xacea,	// (0x0004694b) fs_bigclock_status_pane

0xacf7,	// (0x00046958) main_fs_bigclock_clock_pane_ParamLimits

0xacf7,	// (0x00046958) main_fs_bigclock_clock_pane

0xad0a,	// (0x0004696b) main_fs_bigclock_indi_pane_ParamLimits

0xad0a,	// (0x0004696b) main_fs_bigclock_indi_pane

0xad22,	// (0x00046983) main_fs_bigclock_swipe_pane_ParamLimits

0xad22,	// (0x00046983) main_fs_bigclock_swipe_pane

0x081d,	// (0x0003c47e) main_fs_clock_dumped_data

0xe102,	// (0x00049d63) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xe102,	// (0x00049d63) list_single_fs_bigclock_indicator_pane_g1

0xe11e,	// (0x00049d7f) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xe11e,	// (0x00049d7f) list_single_fs_bigclock_indicator_pane_g2

0xe138,	// (0x00049d99) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xe138,	// (0x00049d99) list_single_fs_bigclock_indicator_pane_g3

0xe152,	// (0x00049db3) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xe152,	// (0x00049db3) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfcc2,	// (0x0004b923) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfcc2,	// (0x0004b923) list_single_fs_bigclock_indicator_pane_g

0xe178,	// (0x00049dd9) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xe178,	// (0x00049dd9) list_single_fs_bigclock_indicator_pane_t1

0xe1a0,	// (0x00049e01) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xe1a0,	// (0x00049e01) list_single_fs_bigclock_indicator_pane_t2

0xe1c8,	// (0x00049e29) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xe1c8,	// (0x00049e29) list_single_fs_bigclock_indicator_pane_t3

0xe1f0,	// (0x00049e51) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xe1f0,	// (0x00049e51) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfccd,	// (0x0004b92e) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfccd,	// (0x0004b92e) list_single_fs_bigclock_indicator_pane_t

0xebfd,	// (0x0004a85e) image3_infobar_fav_pane_ParamLimits

0xebfd,	// (0x0004a85e) image3_infobar_fav_pane

0xec0d,	// (0x0004a86e) image3_infobar_loc_pane_ParamLimits

0xec0d,	// (0x0004a86e) image3_infobar_loc_pane

0xec21,	// (0x0004a882) image3_infobar_time_pane_ParamLimits

0xec21,	// (0x0004a882) image3_infobar_time_pane

0xc734,	// (0x00048395) image3_infobar_time_pane_g1

0xec31,	// (0x0004a892) image3_infobar_time_pane_t1

0xc734,	// (0x00048395) image3_infobar_loc_pane_g1

0xec3f,	// (0x0004a8a0) image3_infobar_loc_pane_g2

0x0001,

0xfe94,	// (0x0004baf5) image3_infobar_loc_pane_g

0xec47,	// (0x0004a8a8) image3_infobar_loc_pane_t1

0xc734,	// (0x00048395) image3_infobar_fav_pane_g1

0xec55,	// (0x0004a8b6) image3_infobar_fav_pane_g2

0x0001,

0xfe99,	// (0x0004bafa) image3_infobar_fav_pane_g

0xec5d,	// (0x0004a8be) fs_bigclock_status_battery_pane

0xec66,	// (0x0004a8c7) fs_bigclock_status_signal_pane

0xec6f,	// (0x0004a8d0) fs_bigclock_status_title_pane

0xec78,	// (0x0004a8d9) fs_bigclock_status_signal_pane_g1

0xec81,	// (0x0004a8e2) fs_bigclock_status_signal_pane_g2

0x0001,

0xfe9e,	// (0x0004baff) fs_bigclock_status_signal_pane_g

0xec89,	// (0x0004a8ea) fs_bigclock_status_battery_pane_g1

0xec92,	// (0x0004a8f3) fs_bigclock_status_battery_pane_g2

0x0001,

0xfea3,	// (0x0004bb04) fs_bigclock_status_battery_pane_g

0xec9a,	// (0x0004a8fb) fs_bigclock_status_title_pane_t1

0xc734,	// (0x00048395) main_fs_bigclock_clock_pane_g1

0xeca8,	// (0x0004a909) main_fs_bigclock_clock_pane_g2

0xeca8,	// (0x0004a909) main_fs_bigclock_clock_pane_g3

0xeca8,	// (0x0004a909) main_fs_bigclock_clock_pane_g4

0x0003,

0xfea8,	// (0x0004bb09) main_fs_bigclock_clock_pane_g

0xecb0,	// (0x0004a911) main_fs_bigclock_clock_pane_t1

0xecbe,	// (0x0004a91f) main_fs_bigclock_clock_pane_t2

0x0001,

0xfeb1,	// (0x0004bb12) main_fs_bigclock_clock_pane_t

0xeccd,	// (0x0004a92e) list_single_fs_bigclock_indicator_pane_ParamLimits

0xeccd,	// (0x0004a92e) list_single_fs_bigclock_indicator_pane

0xb4eb,	// (0x0004714c) list_single_fs_bigclock_pane_ParamLimits

0xb4eb,	// (0x0004714c) list_single_fs_bigclock_pane

0xece7,	// (0x0004a948) main_fs_bigclock_indicator_pane_t1

0xecf6,	// (0x0004a957) list_single_fs_bigclock_pane_g1

0xecfe,	// (0x0004a95f) list_single_fs_bigclock_pane_t1

0xc734,	// (0x00048395) main_fs_bigclock_swipe_pane_g1

0xed3c,	// (0x0004a99d) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfec2,	// (0x0004bb23) main_fs_bigclock_swipe_pane_g

0xed44,	// (0x0004a9a5) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xed44,	// (0x0004a9a5) main_fs_bigclock_swipe_pane_t1

0x4d73,	// (0x000409d4) call_type_pane_ParamLimits

0x081d,	// (0x0003c47e) main_btmg_pane

0xe9b2,	// (0x0004a613) list_single_cale_mrui_row_pane_g2_ParamLimits

0xe9b2,	// (0x0004a613) list_single_cale_mrui_row_pane_g2

0x0001,

0xfe35,	// (0x0004ba96) list_single_cale_mrui_row_pane_g_ParamLimits

0xfe35,	// (0x0004ba96) list_single_cale_mrui_row_pane_g

0xeb0c,	// (0x0004a76d) list_recal_vselct_arw_lo_pane

0xeb14,	// (0x0004a775) list_recal_vselct_arw_up_pane

0xd781,	// (0x000493e2) list_recal_vselct_pane

0xed61,	// (0x0004a9c2) btmg_button_pane

0xb550,	// (0x000471b1) main_btmg_pane_g1

0x081d,	// (0x0003c47e) bg_button_pane_cp044

0x008c,	// (0x0003bced) btmg_button_pane_t1

0xc226,	// (0x00047e87) aid_listscroll_gen

0x1ad7,	// (0x0003d738) main_cntbar_detail_pane

0xe6cc,	// (0x0004a32d) list_cmail_folder_pane

0xe6dc,	// (0x0004a33d) sp_fs_scroll_pane_cp03_ParamLimits

0x3246,	// (0x0003eea7) list_single_fs_dyc_pane_cp01_ParamLimits

0x3246,	// (0x0003eea7) list_single_fs_dyc_pane_cp01

0x009a,	// (0x0003bcfb) aid_size_cmail_indent

0xed6b,	// (0x0004a9cc) list_single_dyc_row_pane_cp01

0xb586,	// (0x000471e7) cntbar_detail_list_pane_ParamLimits

0xb586,	// (0x000471e7) cntbar_detail_list_pane

0xb5d2,	// (0x00047233) main_cntbar_detail_cont_pane_ParamLimits

0xb5d2,	// (0x00047233) main_cntbar_detail_cont_pane

0x4d67,	// (0x000409c8) scroll_pane_cp032_ParamLimits

0x4d67,	// (0x000409c8) scroll_pane_cp032

0xb5e6,	// (0x00047247) cntbar_detail_list_event_pane_ParamLimits

0xb5e6,	// (0x00047247) cntbar_detail_list_event_pane

0xb596,	// (0x000471f7) cntbar_detail_list_shct_pane

0x1414,	// (0x0003d075) aid_list_gen

0x011d,	// (0x0003bd7e) aid_scroll

0x0126,	// (0x0003bd87) aid_size_touch_scroll_bar

0xb5f6,	// (0x00047257) aid_list_double

0x0138,	// (0x0003bd99) aid_list_single

0x3260,	// (0x0003eec1) aid_list_single_lg

0xed74,	// (0x0004a9d5) aid_list_z_g_a_sm

0xed7c,	// (0x0004a9dd) aid_list_z_g_d

0xed84,	// (0x0004a9e5) aid_txt_z_prm

0x3269,	// (0x0003eeca) aid_txt_z_prm_cp01

0x3277,	// (0x0003eed8) aid_txt_z_sec

0xb5ff,	// (0x00047260) main_cntbar_detail_cont_pane_g1_ParamLimits

0xb5ff,	// (0x00047260) main_cntbar_detail_cont_pane_g1

0xb613,	// (0x00047274) main_cntbar_detail_cont_pane_g2_ParamLimits

0xb613,	// (0x00047274) main_cntbar_detail_cont_pane_g2

0x0001,

0xfec7,	// (0x0004bb28) main_cntbar_detail_cont_pane_g_ParamLimits

0xfec7,	// (0x0004bb28) main_cntbar_detail_cont_pane_g

0x015a,	// (0x0003bdbb) main_cntbar_detail_cont_pane_t1

0x0168,	// (0x0003bdc9) main_cntbar_detail_cont_pane_t2

0x0176,	// (0x0003bdd7) main_cntbar_detail_cont_pane_t3

0x0002,

0xfecc,	// (0x0004bb2d) main_cntbar_detail_cont_pane_t

0xb623,	// (0x00047284) cell_cntbar_detail_list_shct_pane_ParamLimits

0xb623,	// (0x00047284) cell_cntbar_detail_list_shct_pane

0x0198,	// (0x0003bdf9) cntbar_detail_list_shct_pane_g1

0x01a1,	// (0x0003be02) cntbar_detail_list_shct_pane_g2

0x0001,

0xfed3,	// (0x0004bb34) cntbar_detail_list_shct_pane_g

0xb637,	// (0x00047298) cntbar_detail_list_event_pane_g1_ParamLimits

0xb637,	// (0x00047298) cntbar_detail_list_event_pane_g1

0xb643,	// (0x000472a4) cntbar_detail_list_event_pane_g2_ParamLimits

0xb643,	// (0x000472a4) cntbar_detail_list_event_pane_g2

0x0005,

0xfed8,	// (0x0004bb39) cntbar_detail_list_event_pane_g_ParamLimits

0xfed8,	// (0x0004bb39) cntbar_detail_list_event_pane_g

0xb6af,	// (0x00047310) cntbar_detail_list_event_pane_t1_ParamLimits

0xb6af,	// (0x00047310) cntbar_detail_list_event_pane_t1

0xb6c4,	// (0x00047325) cntbar_detail_list_event_pane_t2_ParamLimits

0xb6c4,	// (0x00047325) cntbar_detail_list_event_pane_t2

0x0002,

0xfee5,	// (0x0004bb46) cntbar_detail_list_event_pane_t_ParamLimits

0xfee5,	// (0x0004bb46) cntbar_detail_list_event_pane_t

0xc734,	// (0x00048395) cell_cntbar_detail_list_shct_pane_g1

0x50d5,	// (0x00040d36) navi_pane_mv_g3

0x1ad7,	// (0x0003d738) main_cntbar_detail_pane_ParamLimits

0x081d,	// (0x0003c47e) main_notif_wgt_pane

0xedf3,	// (0x0004aa54) aid_tch_main_mp4_pane_g4

0xefab,	// (0x0004ac0c) popup_slider_window_cp02

0xeb03,	// (0x0004a764) list_recal_day_event_pane

0xb55a,	// (0x000471bb) cntbar_detail_btn_pane_ParamLimits

0xb55a,	// (0x000471bb) cntbar_detail_btn_pane

0xb570,	// (0x000471d1) cntbar_detail_btn_pane_cp01_ParamLimits

0xb570,	// (0x000471d1) cntbar_detail_btn_pane_cp01

0xb596,	// (0x000471f7) cntbar_detail_list_shct_pane_ParamLimits

0xb5a6,	// (0x00047207) cntbar_detail_pane_g1_ParamLimits

0xb5a6,	// (0x00047207) cntbar_detail_pane_g1

0xb5b6,	// (0x00047217) cntbar_detail_pane_t1_ParamLimits

0xb5b6,	// (0x00047217) cntbar_detail_pane_t1

0xb64f,	// (0x000472b0) cntbar_detail_list_event_pane_g3_ParamLimits

0xb64f,	// (0x000472b0) cntbar_detail_list_event_pane_g3

0xb667,	// (0x000472c8) cntbar_detail_list_event_pane_g4_ParamLimits

0xb667,	// (0x000472c8) cntbar_detail_list_event_pane_g4

0xb67f,	// (0x000472e0) cntbar_detail_list_event_pane_g5_ParamLimits

0xb67f,	// (0x000472e0) cntbar_detail_list_event_pane_g5

0xb697,	// (0x000472f8) cntbar_detail_list_event_pane_g6_ParamLimits

0xb697,	// (0x000472f8) cntbar_detail_list_event_pane_g6

0xb6d9,	// (0x0004733a) cntbar_detail_list_event_pane_t3_ParamLimits

0xb6d9,	// (0x0004733a) cntbar_detail_list_event_pane_t3

0xb6eb,	// (0x0004734c) popup_notif_wgt_window_ParamLimits

0xb6eb,	// (0x0004734c) popup_notif_wgt_window

0xb704,	// (0x00047365) popup_submenu_window_cp01_ParamLimits

0xb704,	// (0x00047365) popup_submenu_window_cp01

0x1aa3,	// (0x0003d704) bg_popup_window_pane_cp10

0x027c,	// (0x0003bedd) listscroll_notif_wgt_pane

0x0286,	// (0x0003bee7) list_notif_wgt_window

0x028f,	// (0x0003bef0) scroll_pane_cp033

0xed92,	// (0x0004a9f3) list_notif_wgt_row_pane_ParamLimits

0xed92,	// (0x0004a9f3) list_notif_wgt_row_pane

0x0298,	// (0x0003bef9) aid_size_list_notif_wgt_del

0x02a1,	// (0x0003bf02) list_notif_wgt_row_pane_g1

0x02a9,	// (0x0003bf0a) list_notif_wgt_row_pane_g2

0x02b1,	// (0x0003bf12) list_notif_wgt_row_pane_g3

0x0002,

0xfeec,	// (0x0004bb4d) list_notif_wgt_row_pane_g

0x02ba,	// (0x0003bf1b) list_notif_wgt_row_pane_t1

0x02c8,	// (0x0003bf29) list_notif_wgt_row_pane_t2

0x02d6,	// (0x0003bf37) list_notif_wgt_row_pane_t3

0x0002,

0xfef3,	// (0x0004bb54) list_notif_wgt_row_pane_t

0xd463,	// (0x000490c4) list_recal_day_event_pane_g1

0x02e4,	// (0x0003bf45) list_recal_day_event_pane_t1

0x081d,	// (0x0003c47e) bg_button_pane_cp045

0x02f3,	// (0x0003bf54) cntbar_detail_btn_pane_t1

0xc22e,	// (0x00047e8f) main_callh_pane_ParamLimits

0xc22e,	// (0x00047e8f) main_callh_pane

0x081d,	// (0x0003c47e) main_coverflow0_pane

0x081d,	// (0x0003c47e) main_wgtman_pane

0xad30,	// (0x00046991) main_fs_bigclock_unlock_btn_pane_ParamLimits

0xad30,	// (0x00046991) main_fs_bigclock_unlock_btn_pane

0xb0cf,	// (0x00046d30) bg_button_pane_cp16

0xb0e7,	// (0x00046d48) cell_tport_appsw_pane_g3

0xb716,	// (0x00047377) cf0_flow_pane_ParamLimits

0xb716,	// (0x00047377) cf0_flow_pane

0x0310,	// (0x0003bf71) listscroll_cf0_pane

0x0319,	// (0x0003bf7a) main_cf0_pane_g1

0xb72b,	// (0x0004738c) main_cf0_pane_t1_ParamLimits

0xb72b,	// (0x0004738c) main_cf0_pane_t1

0xb743,	// (0x000473a4) main_cf0_pane_t2_ParamLimits

0xb743,	// (0x000473a4) main_cf0_pane_t2

0x0001,

0xfefa,	// (0x0004bb5b) main_cf0_pane_t_ParamLimits

0xfefa,	// (0x0004bb5b) main_cf0_pane_t

0x034b,	// (0x0003bfac) scroll_pane_cp11

0xb75b,	// (0x000473bc) cf0_flow_pane_g1

0xb763,	// (0x000473c4) cf0_flow_pane_g2

0x0001,

0xfeff,	// (0x0004bb60) cf0_flow_pane_g

0xb76b,	// (0x000473cc) cf0_flow_pane_t1

0x081d,	// (0x0003c47e) main_call6_pane

0x081d,	// (0x0003c47e) main_calllock_pane

0xb779,	// (0x000473da) call6_btn_grp_pane_ParamLimits

0xb779,	// (0x000473da) call6_btn_grp_pane

0xb793,	// (0x000473f4) call6_pane_g1_ParamLimits

0xb793,	// (0x000473f4) call6_pane_g1

0xb7a8,	// (0x00047409) popup_call6_1st_window_ParamLimits

0xb7a8,	// (0x00047409) popup_call6_1st_window

0xb7b9,	// (0x0004741a) popup_call6_2nd_window_ParamLimits

0xb7b9,	// (0x0004741a) popup_call6_2nd_window

0xb7ca,	// (0x0004742b) cell_call6_btn_pane_ParamLimits

0xb7ca,	// (0x0004742b) cell_call6_btn_pane

0x1aa3,	// (0x0003d704) bg_popup_call2_in_pane_cp03

0x03bd,	// (0x0003c01e) popup_call6_1st_window_g1

0x03c5,	// (0x0003c026) popup_call6_1st_window_g2

0x03cd,	// (0x0003c02e) popup_call6_1st_window_g3

0x0002,

0xff04,	// (0x0004bb65) popup_call6_1st_window_g

0x03d5,	// (0x0003c036) popup_call6_1st_window_t1

0x03e4,	// (0x0003c045) popup_call6_1st_window_t2

0x03f4,	// (0x0003c055) popup_call6_1st_window_t3

0x0002,

0xff0b,	// (0x0004bb6c) popup_call6_1st_window_t

0x1aa3,	// (0x0003d704) bg_popup_call2_in_pane_cp04

0x03bd,	// (0x0003c01e) popup_call6_2nd_window_g1

0x03c5,	// (0x0003c026) popup_call6_2nd_window_g2

0x03cd,	// (0x0003c02e) popup_call6_2nd_window_g3

0x0002,

0xff04,	// (0x0004bb65) popup_call6_2nd_window_g

0x03d5,	// (0x0003c036) popup_call6_2nd_window_t1

0x081d,	// (0x0003c47e) bg_button_pane_cp15

0x0404,	// (0x0003c065) cell_call6_btn_pane_g1

0x040d,	// (0x0003c06e) cell_call6_btn_pane_t1

0xb7de,	// (0x0004743f) listscroll_wgtman_pane_ParamLimits

0xb7de,	// (0x0004743f) listscroll_wgtman_pane

0xb7f6,	// (0x00047457) wgtman_btn_pane_ParamLimits

0xb7f6,	// (0x00047457) wgtman_btn_pane

0x195a,	// (0x0003d5bb) aid_scroll_copy1

0x0439,	// (0x0003c09a) list_wgtman_pane

0xb80f,	// (0x00047470) wgtman_btn_pane_g1_ParamLimits

0xb80f,	// (0x00047470) wgtman_btn_pane_g1

0xb823,	// (0x00047484) wgtman_btn_pane_t1_ParamLimits

0xb823,	// (0x00047484) wgtman_btn_pane_t1

0x0461,	// (0x0003c0c2) wgtman_btn_pane_t2_ParamLimits

0x0461,	// (0x0003c0c2) wgtman_btn_pane_t2

0x0001,

0xff12,	// (0x0004bb73) wgtman_btn_pane_t_ParamLimits

0xff12,	// (0x0004bb73) wgtman_btn_pane_t

0xb83e,	// (0x0004749f) listrow_wgtman_pane_ParamLimits

0xb83e,	// (0x0004749f) listrow_wgtman_pane

0xb850,	// (0x000474b1) listrow_wgtman_pane_g1

0xb859,	// (0x000474ba) listrow_wgtman_pane_g2

0x0001,

0xff17,	// (0x0004bb78) listrow_wgtman_pane_g

0x3285,	// (0x0003eee6) listrow_wgtman_pane_t1

0x3293,	// (0x0003eef4) listrow_wgtman_pane_t2

0x0001,

0xff1c,	// (0x0004bb7d) listrow_wgtman_pane_t

0x32a1,	// (0x0003ef02) wait_bar_pane_cp09

0x04a1,	// (0x0003c102) main_calllock_btn_pane

0x04ab,	// (0x0003c10c) main_calllock_pane_g1

0x081d,	// (0x0003c47e) bg_button_pane_cp17

0x04b7,	// (0x0003c118) main_calllock_btn_pane_g1

0x04c0,	// (0x0003c121) main_calllock_btn_pane_t1

0x081d,	// (0x0003c47e) main_dialer3_pane

0x081d,	// (0x0003c47e) main_fmrd2_pane

0xc734,	// (0x00048395) main_fs_bigclock_unlock_btn_pane_g1

0x04d7,	// (0x0003c138) main_fs_bigclock_unlock_btn_pane_t1

0xb863,	// (0x000474c4) area_fmrd2_info_pane_ParamLimits

0xb863,	// (0x000474c4) area_fmrd2_info_pane

0xb875,	// (0x000474d6) area_fmrd2_visual_pane_ParamLimits

0xb875,	// (0x000474d6) area_fmrd2_visual_pane

0xb883,	// (0x000474e4) fmrd2_indi_pane_ParamLimits

0xb883,	// (0x000474e4) fmrd2_indi_pane

0xb890,	// (0x000474f1) area_fmrd2_visual_pane_g1

0xb898,	// (0x000474f9) area_fmrd2_visual_pane_t1

0xb8a8,	// (0x00047509) area_fmrd2_visual_pane_t2

0xb8b8,	// (0x00047519) area_fmrd2_visual_pane_t3

0x0002,

0xff26,	// (0x0004bb87) area_fmrd2_visual_pane_t

0xb8c8,	// (0x00047529) area_fmrd2_info_pane_g1

0xb8d0,	// (0x00047531) area_fmrd2_info_pane_t1

0xb8e0,	// (0x00047541) area_fmrd2_info_pane_t2

0xb8f0,	// (0x00047551) area_fmrd2_info_pane_t3

0xb900,	// (0x00047561) area_fmrd2_info_pane_t4

0x0003,

0xff2d,	// (0x0004bb8e) area_fmrd2_info_pane_t

0xb90e,	// (0x0004756f) fmrd2_indi_pane_t1

0xb91e,	// (0x0004757f) fmrd2_indi_pane_t2

0xb92e,	// (0x0004758f) fmrd2_indi_pane_t3

0x0002,

0xff36,	// (0x0004bb97) fmrd2_indi_pane_t

0xe161,	// (0x00049dc2) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xe161,	// (0x00049dc2) list_single_fs_bigclock_indicator_pane_g5

0xe205,	// (0x00049e66) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xe205,	// (0x00049e66) list_single_fs_bigclock_indicator_pane_t5

0xb248,	// (0x00046ea9) aid_cell_bcale_month_pane_ParamLimits

0xb248,	// (0x00046ea9) aid_cell_bcale_month_pane

0xb25a,	// (0x00046ebb) bcale_month_pane_ParamLimits

0xb25a,	// (0x00046ebb) bcale_month_pane

0xb272,	// (0x00046ed3) bcale_preview_pane_ParamLimits

0xb272,	// (0x00046ed3) bcale_preview_pane

0xecfe,	// (0x0004a95f) list_single_fs_bigclock_pane_t1_ParamLimits

0xed18,	// (0x0004a979) list_single_fs_bigclock_pane_t2_ParamLimits

0xed18,	// (0x0004a979) list_single_fs_bigclock_pane_t2

0x0001,

0xfebd,	// (0x0004bb1e) list_single_fs_bigclock_pane_t_ParamLimits

0xfebd,	// (0x0004bb1e) list_single_fs_bigclock_pane_t

0x04cf,	// (0x0003c130) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xff21,	// (0x0004bb82) main_fs_bigclock_unlock_btn_pane_g

0xb93e,	// (0x0004759f) aid_dia3_key_size_ParamLimits

0xb93e,	// (0x0004759f) aid_dia3_key_size

0xb94d,	// (0x000475ae) aid_dia3_listrow_size_ParamLimits

0xb94d,	// (0x000475ae) aid_dia3_listrow_size

0xb95b,	// (0x000475bc) dia3_keypad_fun_pane_ParamLimits

0xb95b,	// (0x000475bc) dia3_keypad_fun_pane

0xb975,	// (0x000475d6) dia3_keypad_num_pane_ParamLimits

0xb975,	// (0x000475d6) dia3_keypad_num_pane

0xb98e,	// (0x000475ef) dia3_listscroll_pane_ParamLimits

0xb98e,	// (0x000475ef) dia3_listscroll_pane

0xb9a1,	// (0x00047602) dia3_numentry_pane_ParamLimits

0xb9a1,	// (0x00047602) dia3_numentry_pane

0x0611,	// (0x0003c272) dia3_list_pane

0x061c,	// (0x0003c27d) scroll_pane_cp12

0x081d,	// (0x0003c47e) bg_dia3_numentry_pane

0x0627,	// (0x0003c288) dia3_numentry_pane_t1

0xb9b2,	// (0x00047613) cell_dia3_key_num_pane

0xb9ba,	// (0x0004761b) cell_dia3_key0_fun_pane_ParamLimits

0xb9ba,	// (0x0004761b) cell_dia3_key0_fun_pane

0xb9ce,	// (0x0004762f) cell_dia3_key1_fun_pane_ParamLimits

0xb9ce,	// (0x0004762f) cell_dia3_key1_fun_pane

0x06b5,	// (0x0003c316) dia3_listrow_pane

0xde81,	// (0x00049ae2) bg_dia3_numentry_pane_g1

0x081d,	// (0x0003c47e) bg_button_pane_cp21

0x0661,	// (0x0003c2c2) cell_dia3_key_num_pane_t1

0x066f,	// (0x0003c2d0) cell_dia3_key_num_pane_t2

0x067e,	// (0x0003c2df) cell_dia3_key_num_pane_t3

0x068d,	// (0x0003c2ee) cell_dia3_key_num_pane_t4

0x0003,

0xff3d,	// (0x0004bb9e) cell_dia3_key_num_pane_t

0x081d,	// (0x0003c47e) bg_button_pane_cp19

0xb9e6,	// (0x00047647) cell_dia3_key0_fun_pane_g1

0x081d,	// (0x0003c47e) bg_button_pane_cp20

0xb9ee,	// (0x0004764f) cell_dia3_key1_fun_pane_g1

0xb9f6,	// (0x00047657) area_left_week_number_pane

0xb9ff,	// (0x00047660) area_top_day_name_pane

0xba08,	// (0x00047669) frame_month_view_pane

0xba14,	// (0x00047675) grid_month_view_pane

0xba1e,	// (0x0004767f) cell_top_day_name_pane_ParamLimits

0xba1e,	// (0x0004767f) cell_top_day_name_pane

0xd21b,	// (0x00048e7c) cell_area_left_week_number_pane_ParamLimits

0xd21b,	// (0x00048e7c) cell_area_left_week_number_pane

0xba36,	// (0x00047697) cell_month_view_pane_ParamLimits

0xba36,	// (0x00047697) cell_month_view_pane

0x071d,	// (0x0003c37e) frm_month_g1

0xba51,	// (0x000476b2) frm_month_g2

0xba5b,	// (0x000476bc) frm_month_g3

0xba65,	// (0x000476c6) frm_month_g4

0xba6f,	// (0x000476d0) frm_month_g5

0xba79,	// (0x000476da) frm_month_g6

0xba83,	// (0x000476e4) frm_month_g7

0x0762,	// (0x0003c3c3) frm_month_g8

0xba8f,	// (0x000476f0) frm_month_g9

0xba98,	// (0x000476f9) frm_month_g10

0xbaa1,	// (0x00047702) frm_month_g11

0xbaaa,	// (0x0004770b) frm_month_g12

0xbab3,	// (0x00047714) frm_month_g13

0xbabc,	// (0x0004771d) frm_month_g14

0xbac5,	// (0x00047726) frm_month_g15

0xbace,	// (0x0004772f) frm_month_g16

0x000f,

0xff46,	// (0x0004bba7) frm_month_g

0xbad9,	// (0x0004773a) cell_top_day_name_pane_t1

0xbae8,	// (0x00047749) cell_area_left_week_number_pane_g1

0xbad9,	// (0x0004773a) cell_area_left_week_number_pane_t1

0xc734,	// (0x00048395) cell_month_view_pane_g1

0xbaf0,	// (0x00047751) cell_month_view_pane_t1

0x081d,	// (0x0003c47e) main_fps_pane

0xe436,	// (0x0004a097) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xe436,	// (0x0004a097) cmail_ddmenu_btn02_pane_cp1

0xe452,	// (0x0004a0b3) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xe452,	// (0x0004a0b3) cmail_ddmenu_btn02_pane_cp2

0xb44c,	// (0x000470ad) cmail_ddmenu_btn02_pane_g2_ParamLimits

0xb44c,	// (0x000470ad) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfe6e,	// (0x0004bacf) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfe6e,	// (0x0004bacf) cmail_ddmenu_btn02_pane_g

0xb46a,	// (0x000470cb) cmail_ddmenu_btn02_pane_t2_ParamLimits

0xb46a,	// (0x000470cb) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfe73,	// (0x0004bad4) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfe73,	// (0x0004bad4) cmail_ddmenu_btn02_pane_t

0xbaff,	// (0x00047760) fps_text_pane_ParamLimits

0xbaff,	// (0x00047760) fps_text_pane

0xbb16,	// (0x00047777) main_fps_pane_g1_ParamLimits

0xbb16,	// (0x00047777) main_fps_pane_g1

0xbb30,	// (0x00047791) wait_bar_pane_cp010_ParamLimits

0xbb30,	// (0x00047791) wait_bar_pane_cp010

0xbb41,	// (0x000477a2) fps_text_pane_t1_ParamLimits

0xbb41,	// (0x000477a2) fps_text_pane_t1
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

} // end of namespace AknLayoutScalable_Elaf_phl_apps_qhd_lsc_tch_Small
