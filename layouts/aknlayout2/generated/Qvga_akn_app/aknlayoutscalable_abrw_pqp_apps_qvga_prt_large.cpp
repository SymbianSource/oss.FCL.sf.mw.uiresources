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

#include "aknlayoutscalable_abrw_pqp_apps_qvga_prt_large.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pqp_apps_qvga_prt[]; }

namespace AknLayoutScalable_Abrw_pqp_apps_qvga_prt_Large
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pqp_apps_qvga_prt + 0x0007d507 };

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
0x54be,	// (0x000829c5) Screen

0x54c8,	// (0x000829cf) application_window

0x551a,	// (0x00082a21) area_bottom_pane_ParamLimits

0x551a,	// (0x00082a21) area_bottom_pane

0x5556,	// (0x00082a5d) area_top_pane_ParamLimits

0x5556,	// (0x00082a5d) area_top_pane

0x55b2,	// (0x00082ab9) call_video_uplink_pane_ParamLimits

0x55b2,	// (0x00082ab9) call_video_uplink_pane

0x55ed,	// (0x00082af4) main_pane_ParamLimits

0x55ed,	// (0x00082af4) main_pane

0x131e,	// (0x0007e825) context_pane

0x8678,	// (0x00085b7f) navi_pane

0x8692,	// (0x00085b99) popup_cale_events_window_ParamLimits

0x8692,	// (0x00085b99) popup_cale_events_window

0x1331,	// (0x0007e838) popup_mup_playback_window

0x86a9,	// (0x00085bb0) signal_pane

0xde0b,	// (0x0008b312) main_browser_pane

0xdfe2,	// (0x0008b4e9) main_burst_pane

0x5716,	// (0x00082c1d) main_calc_pane

0x12aa,	// (0x0007e7b1) main_cale_day_pane

0x5c67,	// (0x0008316e) main_cale_month_pane

0x12aa,	// (0x0007e7b1) main_cale_week_pane

0xdfe2,	// (0x0008b4e9) main_call_pane

0xdae7,	// (0x0008afee) main_call_poc_pane

0xdfe2,	// (0x0008b4e9) main_camera_pane

0xdfe2,	// (0x0008b4e9) main_chi_dic_pane

0xe7e5,	// (0x0008bcec) main_clock_pane

0xdae7,	// (0x0008afee) main_fmradio_pane

0xdfe2,	// (0x0008b4e9) main_graph_messa_pane

0xdae7,	// (0x0008afee) main_help_pane

0xde0b,	// (0x0008b312) main_im_pane

0xdd42,	// (0x0008b249) main_image_pane_ParamLimits

0xdd42,	// (0x0008b249) main_image_pane

0xdae7,	// (0x0008afee) main_location2_pane

0xdfe2,	// (0x0008b4e9) main_location_pane

0xdd42,	// (0x0008b249) main_messa_pane

0xdae7,	// (0x0008afee) main_mp2_pane

0xdfe2,	// (0x0008b4e9) main_mp_pane

0xdae7,	// (0x0008afee) main_msg_pane

0xdae7,	// (0x0008afee) main_mup_eq_pane

0xdae7,	// (0x0008afee) main_mup_pane

0xde0b,	// (0x0008b312) main_notes_pane

0xdae7,	// (0x0008afee) main_pec_pane

0xdae7,	// (0x0008afee) main_phob_pane

0xdae7,	// (0x0008afee) main_pinb_pane

0xdae7,	// (0x0008afee) main_postcard_pane

0xdae7,	// (0x0008afee) main_qdial_pane

0xdfe2,	// (0x0008b4e9) main_skin_pane

0xdae7,	// (0x0008afee) main_smil2_pane

0xdfe2,	// (0x0008b4e9) main_smil_pane

0xdfe2,	// (0x0008b4e9) main_video_pane

0xdfe2,	// (0x0008b4e9) main_video_tele_pane

0xdd42,	// (0x0008b249) main_viewer_pane_ParamLimits

0xdd42,	// (0x0008b249) main_viewer_pane

0xdfe2,	// (0x0008b4e9) main_vorec_pane

0x8576,	// (0x00085a7d) popup_blid_sat_info_window_ParamLimits

0x8576,	// (0x00085a7d) popup_blid_sat_info_window

0x8592,	// (0x00085a99) popup_dyc_status_message_window_ParamLimits

0x8592,	// (0x00085a99) popup_dyc_status_message_window

0x859e,	// (0x00085aa5) popup_grid_large_graphic_window_ParamLimits

0x859e,	// (0x00085aa5) popup_grid_large_graphic_window

0x860f,	// (0x00085b16) popup_loc_request_window_ParamLimits

0x860f,	// (0x00085b16) popup_loc_request_window

0x8652,	// (0x00085b59) popup_wml_address_window_ParamLimits

0x8652,	// (0x00085b59) popup_wml_address_window

0x8445,	// (0x0008594c) call_muted_g1

0x8180,	// (0x00085687) popup_call_audio_conf_window_ParamLimits

0x8180,	// (0x00085687) popup_call_audio_conf_window

0x8455,	// (0x0008595c) popup_call_audio_first_window_ParamLimits

0x8455,	// (0x0008595c) popup_call_audio_first_window

0x8489,	// (0x00085990) popup_call_audio_in_window_ParamLimits

0x8489,	// (0x00085990) popup_call_audio_in_window

0x84a5,	// (0x000859ac) popup_call_audio_out_window_ParamLimits

0x84a5,	// (0x000859ac) popup_call_audio_out_window

0x84c1,	// (0x000859c8) popup_call_audio_second_window_ParamLimits

0x84c1,	// (0x000859c8) popup_call_audio_second_window

0x84e9,	// (0x000859f0) popup_call_audio_wait_window_ParamLimits

0x84e9,	// (0x000859f0) popup_call_audio_wait_window

0x8508,	// (0x00085a0f) popup_number_entry_window_ParamLimits

0x8508,	// (0x00085a0f) popup_number_entry_window

0xd6d6,	// (0x0008abdd) bg_popup_call_pane_cp05_ParamLimits

0xd6d6,	// (0x0008abdd) bg_popup_call_pane_cp05

0xd6f6,	// (0x0008abfd) popup_number_entry_window_t1

0xd709,	// (0x0008ac10) popup_number_entry_window_t2

0xd71b,	// (0x0008ac22) popup_number_entry_window_t3

0x0003,

0xf0c6,	// (0x0008c5cd) popup_number_entry_window_t

0xd72d,	// (0x0008ac34) text_title_cp2

0xd740,	// (0x0008ac47) bg_popup_call_pane_cp_ParamLimits

0xd740,	// (0x0008ac47) bg_popup_call_pane_cp

0xd74e,	// (0x0008ac55) call_thumbnail_pane

0xd756,	// (0x0008ac5d) popup_call_audio_in_window_g1_ParamLimits

0xd756,	// (0x0008ac5d) popup_call_audio_in_window_g1

0xd762,	// (0x0008ac69) popup_call_audio_in_window_g2_ParamLimits

0xd762,	// (0x0008ac69) popup_call_audio_in_window_g2

0xd76e,	// (0x0008ac75) popup_call_audio_in_window_g3_ParamLimits

0xd76e,	// (0x0008ac75) popup_call_audio_in_window_g3

0x0002,

0xf0cf,	// (0x0008c5d6) popup_call_audio_in_window_g_ParamLimits

0xf0cf,	// (0x0008c5d6) popup_call_audio_in_window_g

0xd77a,	// (0x0008ac81) popup_call_audio_in_window_t1_ParamLimits

0xd77a,	// (0x0008ac81) popup_call_audio_in_window_t1

0xd795,	// (0x0008ac9c) popup_call_audio_in_window_t2_ParamLimits

0xd795,	// (0x0008ac9c) popup_call_audio_in_window_t2

0xd7b0,	// (0x0008acb7) popup_call_audio_in_window_t3_ParamLimits

0xd7b0,	// (0x0008acb7) popup_call_audio_in_window_t3

0x0002,

0xf0d6,	// (0x0008c5dd) popup_call_audio_in_window_t_ParamLimits

0xf0d6,	// (0x0008c5dd) popup_call_audio_in_window_t

0xd740,	// (0x0008ac47) bg_popup_call_pane_cp01_ParamLimits

0xd740,	// (0x0008ac47) bg_popup_call_pane_cp01

0xd74e,	// (0x0008ac55) call_thumbnail_pane_cp02

0xd7c3,	// (0x0008acca) call_type_pane_cp022

0xd7cb,	// (0x0008acd2) popup_call_audio_out_window_g1_ParamLimits

0xd7cb,	// (0x0008acd2) popup_call_audio_out_window_g1

0xd7dd,	// (0x0008ace4) popup_call_audio_out_window_g2_ParamLimits

0xd7dd,	// (0x0008ace4) popup_call_audio_out_window_g2

0xd7e9,	// (0x0008acf0) popup_call_audio_out_window_g3_ParamLimits

0xd7e9,	// (0x0008acf0) popup_call_audio_out_window_g3

0x0002,

0xf0dd,	// (0x0008c5e4) popup_call_audio_out_window_g_ParamLimits

0xf0dd,	// (0x0008c5e4) popup_call_audio_out_window_g

0xd7fb,	// (0x0008ad02) popup_call_audio_out_window_t1_ParamLimits

0xd7fb,	// (0x0008ad02) popup_call_audio_out_window_t1

0xd813,	// (0x0008ad1a) popup_call_audio_out_window_t2_ParamLimits

0xd813,	// (0x0008ad1a) popup_call_audio_out_window_t2

0x0001,

0xf0e4,	// (0x0008c5eb) popup_call_audio_out_window_t_ParamLimits

0xf0e4,	// (0x0008c5eb) popup_call_audio_out_window_t

0xd828,	// (0x0008ad2f) bg_popup_call_pane_ParamLimits

0xd828,	// (0x0008ad2f) bg_popup_call_pane

0x57b8,	// (0x00082cbf) call_thumbnail_pane_cp_ParamLimits

0x57b8,	// (0x00082cbf) call_thumbnail_pane_cp

0xd8ac,	// (0x0008adb3) call_type_pane_cp01_ParamLimits

0xd8ac,	// (0x0008adb3) call_type_pane_cp01

0xd8f0,	// (0x0008adf7) popup_call_audio_first_window_g1_ParamLimits

0xd8f0,	// (0x0008adf7) popup_call_audio_first_window_g1

0xd93c,	// (0x0008ae43) popup_call_audio_first_window_g2_ParamLimits

0xd93c,	// (0x0008ae43) popup_call_audio_first_window_g2

0x0001,

0xf0e9,	// (0x0008c5f0) popup_call_audio_first_window_g_ParamLimits

0xf0e9,	// (0x0008c5f0) popup_call_audio_first_window_g

0xd980,	// (0x0008ae87) popup_call_audio_first_window_t1_ParamLimits

0xd980,	// (0x0008ae87) popup_call_audio_first_window_t1

0xda2c,	// (0x0008af33) popup_call_audio_first_window_t4_ParamLimits

0xda2c,	// (0x0008af33) popup_call_audio_first_window_t4

0xdab8,	// (0x0008afbf) popup_call_audio_first_window_t5_ParamLimits

0xdab8,	// (0x0008afbf) popup_call_audio_first_window_t5

0x0002,

0xf0ee,	// (0x0008c5f5) popup_call_audio_first_window_t_ParamLimits

0xf0ee,	// (0x0008c5f5) popup_call_audio_first_window_t

0xdae7,	// (0x0008afee) bg_popup_call_pane_cp02

0xdaf1,	// (0x0008aff8) call_type_pane_cp023

0xdaf9,	// (0x0008b000) popup_call_audio_wait_window_g1

0xdb01,	// (0x0008b008) popup_call_audio_wait_window_g2

0x0001,

0xf0f5,	// (0x0008c5fc) popup_call_audio_wait_window_g

0xdb09,	// (0x0008b010) popup_call_audio_wait_window_t3

0xdb17,	// (0x0008b01e) bg_popup_call_pane_cp03_ParamLimits

0xdb17,	// (0x0008b01e) bg_popup_call_pane_cp03

0xdb77,	// (0x0008b07e) call_thumbnail_pane_cp011_ParamLimits

0xdb77,	// (0x0008b07e) call_thumbnail_pane_cp011

0xdb83,	// (0x0008b08a) call_type_pane_cp034_ParamLimits

0xdb83,	// (0x0008b08a) call_type_pane_cp034

0xdbbf,	// (0x0008b0c6) popup_call_audio_second_window_g1_ParamLimits

0xdbbf,	// (0x0008b0c6) popup_call_audio_second_window_g1

0xdbfb,	// (0x0008b102) popup_call_audio_second_window_g2_ParamLimits

0xdbfb,	// (0x0008b102) popup_call_audio_second_window_g2

0x0001,

0xf0fa,	// (0x0008c601) popup_call_audio_second_window_g_ParamLimits

0xf0fa,	// (0x0008c601) popup_call_audio_second_window_g

0xdc37,	// (0x0008b13e) popup_call_audio_second_window_t1_ParamLimits

0xdc37,	// (0x0008b13e) popup_call_audio_second_window_t1

0xdcb8,	// (0x0008b1bf) popup_call_audio_second_window_t2_ParamLimits

0xdcb8,	// (0x0008b1bf) popup_call_audio_second_window_t2

0xdcee,	// (0x0008b1f5) popup_call_audio_second_window_t3_ParamLimits

0xdcee,	// (0x0008b1f5) popup_call_audio_second_window_t3

0x0002,

0xf0ff,	// (0x0008c606) popup_call_audio_second_window_t_ParamLimits

0xf0ff,	// (0x0008c606) popup_call_audio_second_window_t

0xdae7,	// (0x0008afee) bg_popup_call_pane_cp04

0xdd24,	// (0x0008b22b) list_conf_pane

0xdd2c,	// (0x0008b233) popup_call_audio_conf_window_t1

0xdd3a,	// (0x0008b241) call_thumbnail_pane_g1

0xdd42,	// (0x0008b249) bg_pinb_pane_ParamLimits

0xdd42,	// (0x0008b249) bg_pinb_pane

0xdd50,	// (0x0008b257) find_pinb_pane

0xdd59,	// (0x0008b260) listscroll_pinb_pane_ParamLimits

0xdd59,	// (0x0008b260) listscroll_pinb_pane

0xdd68,	// (0x0008b26f) pinb_bg_pane_g1

0x57dc,	// (0x00082ce3) pinb_bg_pane_g2

0x57e6,	// (0x00082ced) pinb_bg_pane_g3

0x57f0,	// (0x00082cf7) pinb_bg_pane_g4

0x57fa,	// (0x00082d01) pinb_bg_pane_g5

0x5804,	// (0x00082d0b) pinb_bg_pane_g6

0x580f,	// (0x00082d16) pinb_bg_pane_g7

0x581a,	// (0x00082d21) pinb_bg_pane_g8

0x5823,	// (0x00082d2a) pinb_bg_pane_g9

0x582b,	// (0x00082d32) pinb_bg_pane_g10

0x0009,

0xf106,	// (0x0008c60d) pinb_bg_pane_g

0x5848,	// (0x00082d4f) grid_pinb_pane

0x5851,	// (0x00082d58) list_pinb_pane

0x585c,	// (0x00082d63) scroll_pane_cp01_ParamLimits

0x585c,	// (0x00082d63) scroll_pane_cp01

0xdd72,	// (0x0008b279) find_pinb_pane_g1_ParamLimits

0xdd72,	// (0x0008b279) find_pinb_pane_g1

0xdd8a,	// (0x0008b291) find_pinb_pane_t1

0xdd9c,	// (0x0008b2a3) find_pinb_pane_t2

0x0001,

0xf120,	// (0x0008c627) find_pinb_pane_t

0xddb1,	// (0x0008b2b8) input_focus_pane_cp01_ParamLimits

0xddb1,	// (0x0008b2b8) input_focus_pane_cp01

0x586c,	// (0x00082d73) cell_pinb_pane_ParamLimits

0x586c,	// (0x00082d73) cell_pinb_pane

0x5885,	// (0x00082d8c) cell_pinb_pane_g1_ParamLimits

0x5885,	// (0x00082d8c) cell_pinb_pane_g1

0x5899,	// (0x00082da0) cell_pinb_pane_g2_ParamLimits

0x5899,	// (0x00082da0) cell_pinb_pane_g2

0xddbd,	// (0x0008b2c4) cell_pinb_pane_g3_ParamLimits

0xddbd,	// (0x0008b2c4) cell_pinb_pane_g3

0x0002,

0xf125,	// (0x0008c62c) cell_pinb_pane_g_ParamLimits

0xf125,	// (0x0008c62c) cell_pinb_pane_g

0xdae7,	// (0x0008afee) grid_highlight_pane_cp01

0x58a5,	// (0x00082dac) list_pinb_item_pane_ParamLimits

0x58a5,	// (0x00082dac) list_pinb_item_pane

0xdae7,	// (0x0008afee) list_highlight_pane_cp02

0x58ba,	// (0x00082dc1) list_pinb_item_pane_g1_ParamLimits

0x58ba,	// (0x00082dc1) list_pinb_item_pane_g1

0x58c7,	// (0x00082dce) list_pinb_item_pane_g2_ParamLimits

0x58c7,	// (0x00082dce) list_pinb_item_pane_g2

0x58d3,	// (0x00082dda) list_pinb_item_pane_g3_ParamLimits

0x58d3,	// (0x00082dda) list_pinb_item_pane_g3

0x58e2,	// (0x00082de9) list_pinb_item_pane_g4_ParamLimits

0x58e2,	// (0x00082de9) list_pinb_item_pane_g4

0x0003,

0xf12c,	// (0x0008c633) list_pinb_item_pane_g_ParamLimits

0xf12c,	// (0x0008c633) list_pinb_item_pane_g

0x58ee,	// (0x00082df5) list_pinb_item_pane_t1_ParamLimits

0x58ee,	// (0x00082df5) list_pinb_item_pane_t1

0x591f,	// (0x00082e26) calc_display_pane

0x5937,	// (0x00082e3e) calc_paper_pane

0x5953,	// (0x00082e5a) grid_calc_pane

0xdae7,	// (0x0008afee) bg_list_pane_cp01

0x5973,	// (0x00082e7a) clock_g1

0x597b,	// (0x00082e82) clock_g2

0x0001,

0xf135,	// (0x0008c63c) clock_g

0x5983,	// (0x00082e8a) clock_t1_ParamLimits

0x5983,	// (0x00082e8a) clock_t1

0x5998,	// (0x00082e9f) clock_t2_ParamLimits

0x5998,	// (0x00082e9f) clock_t2

0x59aa,	// (0x00082eb1) clock_t3_ParamLimits

0x59aa,	// (0x00082eb1) clock_t3

0x59bc,	// (0x00082ec3) clock_t4_ParamLimits

0x59bc,	// (0x00082ec3) clock_t4

0x59ce,	// (0x00082ed5) clock_t5_ParamLimits

0x59ce,	// (0x00082ed5) clock_t5

0x59e3,	// (0x00082eea) clock_t6_ParamLimits

0x59e3,	// (0x00082eea) clock_t6

0x59f5,	// (0x00082efc) clock_t7_ParamLimits

0x59f5,	// (0x00082efc) clock_t7

0x5a07,	// (0x00082f0e) clock_t8_ParamLimits

0x5a07,	// (0x00082f0e) clock_t8

0x5a19,	// (0x00082f20) clock_t9_ParamLimits

0x5a19,	// (0x00082f20) clock_t9

0x0008,

0xf13a,	// (0x0008c641) clock_t_ParamLimits

0xf13a,	// (0x0008c641) clock_t

0xddc9,	// (0x0008b2d0) popup_clock_analogue_window_cp02

0xddc9,	// (0x0008b2d0) popup_clock_digital_window_cp01

0xddd1,	// (0x0008b2d8) listscroll_help_pane

0xdae7,	// (0x0008afee) phob_pre_status_pane

0xdddb,	// (0x0008b2e2) grid_qdial_pane

0xdd42,	// (0x0008b249) listscroll_mce_pane

0xdd42,	// (0x0008b249) bg_notes_pane

0xdde5,	// (0x0008b2ec) list_notes_pane

0x5a2b,	// (0x00082f32) scroll_pane_cp06

0xddf3,	// (0x0008b2fa) bg_calc_paper_pane

0x5a38,	// (0x00082f3f) list_calc_pane

0xde0b,	// (0x0008b312) bg_calc_display_pane

0x5a52,	// (0x00082f59) calc_display_pane_t1

0x5a67,	// (0x00082f6e) calc_display_pane_t2

0x5a7c,	// (0x00082f83) calc_display_pane_t3

0x0002,

0xf14d,	// (0x0008c654) calc_display_pane_t

0x5a8e,	// (0x00082f95) cell_calc_pane_ParamLimits

0x5a8e,	// (0x00082f95) cell_calc_pane

0xde17,	// (0x0008b31e) bg_calc_paper_pane_g1

0xde23,	// (0x0008b32a) bg_calc_paper_pane_g2

0xde2f,	// (0x0008b336) bg_calc_paper_pane_g3

0xde3b,	// (0x0008b342) bg_calc_paper_pane_g4

0xde47,	// (0x0008b34e) bg_calc_paper_pane_g5

0x5ab5,	// (0x00082fbc) bg_calc_paper_pane_g6

0x5ac4,	// (0x00082fcb) bg_calc_paper_pane_g7

0x5ad3,	// (0x00082fda) bg_calc_paper_pane_g8

0x0007,

0xf154,	// (0x0008c65b) bg_calc_paper_pane_g

0x5ae2,	// (0x00082fe9) calc_bg_paper_pane_g9

0x5af1,	// (0x00082ff8) list_calc_item_pane_ParamLimits

0x5af1,	// (0x00082ff8) list_calc_item_pane

0xde53,	// (0x0008b35a) list_calc_item_pane_g1

0x5b0a,	// (0x00083011) list_calc_item_pane_t1_ParamLimits

0x5b0a,	// (0x00083011) list_calc_item_pane_t1

0x5b1c,	// (0x00083023) list_calc_item_pane_t2_ParamLimits

0x5b1c,	// (0x00083023) list_calc_item_pane_t2

0x0001,

0xf165,	// (0x0008c66c) list_calc_item_pane_t_ParamLimits

0xf165,	// (0x0008c66c) list_calc_item_pane_t

0xde60,	// (0x0008b367) cell_calc_pane_g1

0xde6a,	// (0x0008b371) grid_highlight_pane_cp02

0xde8c,	// (0x0008b393) bg_calc_display_pane_g1

0x5b4a,	// (0x00083051) bg_calc_display_pane_g2

0xde95,	// (0x0008b39c) bg_calc_display_pane_g3

0x0002,

0xf16f,	// (0x0008c676) bg_calc_display_pane_g

0x5b54,	// (0x0008305b) cell_qdial_pane_ParamLimits

0x5b54,	// (0x0008305b) cell_qdial_pane

0x5b66,	// (0x0008306d) cell_qdial_pane_g1_ParamLimits

0x5b66,	// (0x0008306d) cell_qdial_pane_g1

0x5b73,	// (0x0008307a) cell_qdial_pane_g2_ParamLimits

0x5b73,	// (0x0008307a) cell_qdial_pane_g2

0xde9e,	// (0x0008b3a5) cell_qdial_pane_g3_ParamLimits

0xde9e,	// (0x0008b3a5) cell_qdial_pane_g3

0x0003,

0xf176,	// (0x0008c67d) cell_qdial_pane_g_ParamLimits

0xf176,	// (0x0008c67d) cell_qdial_pane_g

0x5b91,	// (0x00083098) cell_qdial_pane_t1_ParamLimits

0x5b91,	// (0x00083098) cell_qdial_pane_t1

0x5ba9,	// (0x000830b0) cell_qdial_pane_t2_ParamLimits

0x5ba9,	// (0x000830b0) cell_qdial_pane_t2

0x5bbc,	// (0x000830c3) cell_qdial_pane_t3_ParamLimits

0x5bbc,	// (0x000830c3) cell_qdial_pane_t3

0x0002,

0xf17f,	// (0x0008c686) cell_qdial_pane_t_ParamLimits

0xf17f,	// (0x0008c686) cell_qdial_pane_t

0xdae7,	// (0x0008afee) grid_highlight_pane_cp04

0xdeaa,	// (0x0008b3b1) thumbnail_qdial_pane_ParamLimits

0xdeaa,	// (0x0008b3b1) thumbnail_qdial_pane

0xdf06,	// (0x0008b40d) list_help_pane

0xdf10,	// (0x0008b417) scroll_pane_cp02

0x5bcf,	// (0x000830d6) help_list_pane_t1_ParamLimits

0x5bcf,	// (0x000830d6) help_list_pane_t1

0x5bed,	// (0x000830f4) bg_notes_pane_g2

0x5bf5,	// (0x000830fc) bg_notes_pane_g3

0x5bfd,	// (0x00083104) notes_bg_pane_g1

0x5c05,	// (0x0008310c) notes_bg_pane_g4

0x5c0d,	// (0x00083114) notes_bg_pane_g5

0x5c15,	// (0x0008311c) notes_bg_pane_g6

0x5c1d,	// (0x00083124) notes_bg_pane_g7

0x5c25,	// (0x0008312c) notes_bg_pane_g8

0x5c2d,	// (0x00083134) notes_bg_pane_g9

0x0006,

0xf19d,	// (0x0008c6a4) notes_bg_pane_g

0x5c35,	// (0x0008313c) list_notes_text_pane_ParamLimits

0x5c35,	// (0x0008313c) list_notes_text_pane

0xdf19,	// (0x0008b420) list_notes_text_pane_g1

0x5c59,	// (0x00083160) list_notes_text_pane_t1

0x5c67,	// (0x0008316e) listscroll_cale_week_pane

0x5c8c,	// (0x00083193) bg_cale_heading_pane

0xdf3c,	// (0x0008b443) bg_cale_pane_cp01

0x5ca4,	// (0x000831ab) cale_week_corner_pane

0x5cbe,	// (0x000831c5) cale_week_day_heading_pane

0x5cd6,	// (0x000831dd) cale_week_scroll_pane_g1

0x5ce9,	// (0x000831f0) cale_week_scroll_pane_g2

0x5cfc,	// (0x00083203) cale_week_scroll_pane_g3

0x5d0f,	// (0x00083216) cale_week_scroll_pane_g4

0x5d22,	// (0x00083229) cale_week_scroll_pane_g5

0x5d35,	// (0x0008323c) cale_week_scroll_pane_g6

0x5d48,	// (0x0008324f) cale_week_scroll_pane_g7

0x5d5b,	// (0x00083262) cale_week_scroll_pane_g8

0x5d6e,	// (0x00083275) cale_week_scroll_pane_g9

0x5d81,	// (0x00083288) cale_week_scroll_pane_g10

0x5d94,	// (0x0008329b) cale_week_scroll_pane_g11

0x5da7,	// (0x000832ae) cale_week_scroll_pane_g12

0x5dba,	// (0x000832c1) cale_week_scroll_pane_g13

0x5dcd,	// (0x000832d4) cale_week_scroll_pane_g14

0x5de0,	// (0x000832e7) cale_week_scroll_pane_g15

0x000f,

0xf1ac,	// (0x0008c6b3) cale_week_scroll_pane_g

0x5e06,	// (0x0008330d) cale_week_time_pane

0x5e19,	// (0x00083320) grid_cale_week_pane

0xdf6b,	// (0x0008b472) scroll_pane_cp08

0x5e2e,	// (0x00083335) cell_cale_week_pane_ParamLimits

0x5e2e,	// (0x00083335) cell_cale_week_pane

0x5e7c,	// (0x00083383) cale_week_day_heading_pane_t1

0x5eb7,	// (0x000833be) cale_week_day_heading_pane_t2

0x5ef2,	// (0x000833f9) cale_week_day_heading_pane_t3

0x5f2d,	// (0x00083434) cale_week_day_heading_pane_t4

0x5f68,	// (0x0008346f) cale_week_day_heading_pane_t5

0x5fa3,	// (0x000834aa) cale_week_day_heading_pane_t6

0x5fde,	// (0x000834e5) cale_week_day_heading_pane_t7

0x0006,

0xf1cd,	// (0x0008c6d4) cale_week_day_heading_pane_t

0xdf88,	// (0x0008b48f) bg_cale_side_pane

0x6019,	// (0x00083520) cale_week_time_pane_t1

0x6053,	// (0x0008355a) cale_week_time_pane_t2

0x608d,	// (0x00083594) cale_week_time_pane_t3

0x60c7,	// (0x000835ce) cale_week_time_pane_t4

0x6101,	// (0x00083608) cale_week_time_pane_t5

0x613b,	// (0x00083642) cale_week_time_pane_t6

0x6175,	// (0x0008367c) cale_week_time_pane_t7

0x61af,	// (0x000836b6) cale_week_time_pane_t8

0x0007,

0xf1dc,	// (0x0008c6e3) cale_week_time_pane_t

0x61e9,	// (0x000836f0) cell_cale_week_pane_g2

0x620d,	// (0x00083714) cell_cale_week_pane_g3_ParamLimits

0x620d,	// (0x00083714) cell_cale_week_pane_g3

0xdf96,	// (0x0008b49d) grid_highlight_pane_cp07

0xdf9e,	// (0x0008b4a5) listscroll_gms_pane

0xdfa8,	// (0x0008b4af) grid_gms_pane

0xdfb1,	// (0x0008b4b8) listscroll_gms_pane_g1

0xdfb9,	// (0x0008b4c0) listscroll_gms_pane_g2

0x0001,

0xf1ed,	// (0x0008c6f4) listscroll_gms_pane_g

0x6225,	// (0x0008372c) scroll_pane_cp010

0x622e,	// (0x00083735) cell_gms_pane_ParamLimits

0x622e,	// (0x00083735) cell_gms_pane

0x623f,	// (0x00083746) cell_gms_pane_g1

0xdfc1,	// (0x0008b4c8) cell_gms_pane_g2

0xdf19,	// (0x0008b420) cell_gms_pane_g3

0xdfc9,	// (0x0008b4d0) cell_gms_pane_g4

0x0003,

0xf1f2,	// (0x0008c6f9) cell_gms_pane_g

0xdfd2,	// (0x0008b4d9) grid_highlight_pane_cp09

0x83f3,	// (0x000858fa) phob_pre_status_pane_g1

0x83fb,	// (0x00085902) phob_pre_status_pane_g2

0x8403,	// (0x0008590a) phob_pre_status_pane_g3

0x840b,	// (0x00085912) phob_pre_status_pane_g4

0x0004,

0xf5f0,	// (0x0008caf7) phob_pre_status_pane_g

0x841b,	// (0x00085922) phob_pre_status_pane_t1

0x8429,	// (0x00085930) phob_pre_status_pane_t2

0x8437,	// (0x0008593e) phob_pre_status_pane_t3

0x0002,

0xf5fb,	// (0x0008cb02) phob_pre_status_pane_t

0xdfe2,	// (0x0008b4e9) bg_list_pane_cp05

0x6247,	// (0x0008374e) grid_vorec_pane

0xdfea,	// (0x0008b4f1) vorec_t1

0xdff8,	// (0x0008b4ff) vorec_t2

0xe006,	// (0x0008b50d) vorec_t3

0x624f,	// (0x00083756) vorec_t4

0xd68a,	// (0x0008ab91) vorec_t5

0xd698,	// (0x0008ab9f) vorec_t6

0x0004,

0xf1fb,	// (0x0008c702) vorec_t

0xd6a6,	// (0x0008abad) wait_bar_pane_cp01

0xe022,	// (0x0008b529) cell_vorec_pane_ParamLimits

0xe022,	// (0x0008b529) cell_vorec_pane

0x625d,	// (0x00083764) cell_vorec_pane_g1

0xdae7,	// (0x0008afee) grid_highlight_pane_cp05

0x6273,	// (0x0008377a) cams_zoom_pane

0x627f,	// (0x00083786) image_vga_pane

0x628c,	// (0x00083793) main_camera_pane_g1

0x6298,	// (0x0008379f) main_camera_pane_g2

0x62a4,	// (0x000837ab) main_camera_pane_g3

0x62b0,	// (0x000837b7) main_camera_pane_g4

0x62bc,	// (0x000837c3) main_camera_pane_g5

0x62c8,	// (0x000837cf) main_camera_pane_g6

0x62d4,	// (0x000837db) main_camera_pane_g7

0x0007,

0xf206,	// (0x0008c70d) main_camera_pane_g

0x62e0,	// (0x000837e7) main_camera_pane_t1

0x62f2,	// (0x000837f9) main_camera_pane_t2

0x0001,

0xf217,	// (0x0008c71e) main_camera_pane_t

0x6316,	// (0x0008381d) cams_zoom_pane_cp_ParamLimits

0x6316,	// (0x0008381d) cams_zoom_pane_cp

0x633a,	// (0x00083841) image_cif_pane_ParamLimits

0x633a,	// (0x00083841) image_cif_pane

0x6354,	// (0x0008385b) image_subqcif_pane

0x635c,	// (0x00083863) main_video_pane_g1_ParamLimits

0x635c,	// (0x00083863) main_video_pane_g1

0x637c,	// (0x00083883) main_video_pane_g2_ParamLimits

0x637c,	// (0x00083883) main_video_pane_g2

0x63aa,	// (0x000838b1) main_video_pane_g3_ParamLimits

0x63aa,	// (0x000838b1) main_video_pane_g3

0x63d3,	// (0x000838da) main_video_pane_g4_ParamLimits

0x63d3,	// (0x000838da) main_video_pane_g4

0x63fc,	// (0x00083903) main_video_pane_g5_ParamLimits

0x63fc,	// (0x00083903) main_video_pane_g5

0xe041,	// (0x0008b548) main_video_pane_g6_ParamLimits

0xe041,	// (0x0008b548) main_video_pane_g6

0x0006,

0xf21c,	// (0x0008c723) main_video_pane_g_ParamLimits

0xf21c,	// (0x0008c723) main_video_pane_g

0x641e,	// (0x00083925) main_video_pane_t1_ParamLimits

0x641e,	// (0x00083925) main_video_pane_t1

0xe05b,	// (0x0008b562) cams_zoom_pane_g1

0xe064,	// (0x0008b56b) cams_zoom_pane_g2

0xe06d,	// (0x0008b574) cams_zoom_pane_g3

0xe076,	// (0x0008b57d) cams_zoom_pane_g4

0x0003,

0xf22b,	// (0x0008c732) cams_zoom_pane_g

0x6468,	// (0x0008396f) grid_cams_pane

0x6474,	// (0x0008397b) linegrid_cams_pane

0x6480,	// (0x00083987) cell_cams_pane_ParamLimits

0x6480,	// (0x00083987) cell_cams_pane

0xe07f,	// (0x0008b586) cams_burst_image_pane

0xe087,	// (0x0008b58e) cell_cams_pane_g1

0xdae7,	// (0x0008afee) grid_highlight_pane_cp03

0xde60,	// (0x0008b367) mp_bg_pane_g1

0xdae7,	// (0x0008afee) bg_list_pane_cp03

0x11cf,	// (0x0007e6d6) bg_mp_pane

0x11d7,	// (0x0007e6de) grid_mp_pane

0x11df,	// (0x0007e6e6) media_player_g1

0x11e7,	// (0x0007e6ee) media_player_t1

0x11f5,	// (0x0007e6fc) media_player_t2

0x1203,	// (0x0007e70a) media_player_t3

0x1211,	// (0x0007e718) media_player_t4

0x121f,	// (0x0007e726) media_player_t5

0x122d,	// (0x0007e734) media_player_t6

0x123b,	// (0x0007e742) media_player_t7

0x0006,

0xf5da,	// (0x0008cae1) media_player_t

0x1249,	// (0x0007e750) wait_bar_pane_cp02

0xf5bf,	// (0x0008cac6) main_usb_pane_t

0x83ea,	// (0x000858f1) cell_mp_pane

0xde60,	// (0x0008b367) cell_mp_pane_g1

0xdae7,	// (0x0008afee) grid_highlight_pane_cp06

0xe08f,	// (0x0008b596) grid_skin_colour_pane

0xe097,	// (0x0008b59e) list_highlight_pane_cp03

0x6589,	// (0x00083a90) skin_g1

0xe09f,	// (0x0008b5a6) skin_t1

0xe0ae,	// (0x0008b5b5) skin_t2

0x0001,

0xf260,	// (0x0008c767) skin_t

0x6591,	// (0x00083a98) cell_skin_colour_pane_ParamLimits

0x6591,	// (0x00083a98) cell_skin_colour_pane

0xe0bc,	// (0x0008b5c3) cell_skin_colour_pane_g1

0x6607,	// (0x00083b0e) call_video_g1_ParamLimits

0x6607,	// (0x00083b0e) call_video_g1

0x6613,	// (0x00083b1a) call_video_g2_ParamLimits

0x6613,	// (0x00083b1a) call_video_g2

0x0001,

0xf265,	// (0x0008c76c) call_video_g_ParamLimits

0xf265,	// (0x0008c76c) call_video_g

0x6663,	// (0x00083b6a) call_video_uplink_pane_cp1_ParamLimits

0x6663,	// (0x00083b6a) call_video_uplink_pane_cp1

0xe0ce,	// (0x0008b5d5) call_video_uplink_pane_cp2

0x671f,	// (0x00083c26) video_down_crop_pane_ParamLimits

0x671f,	// (0x00083c26) video_down_crop_pane

0x67e9,	// (0x00083cf0) video_down_pane_ParamLimits

0x67e9,	// (0x00083cf0) video_down_pane

0xe0d6,	// (0x0008b5dd) video_down_subqcif_pane_ParamLimits

0xe0d6,	// (0x0008b5dd) video_down_subqcif_pane

0xe0ee,	// (0x0008b5f5) video_down_subqcif_pane_cp_ParamLimits

0xe0ee,	// (0x0008b5f5) video_down_subqcif_pane_cp

0xe112,	// (0x0008b619) im_reading_pane_ParamLimits

0xe112,	// (0x0008b619) im_reading_pane

0x68b5,	// (0x00083dbc) im_writing_pane_ParamLimits

0x68b5,	// (0x00083dbc) im_writing_pane

0x68cb,	// (0x00083dd2) im_reading_pane_t1

0xe12c,	// (0x0008b633) list_im_pane

0xe13d,	// (0x0008b644) scroll_pane_cp07

0x6903,	// (0x00083e0a) im_writing_pane_t1_ParamLimits

0x6903,	// (0x00083e0a) im_writing_pane_t1

0xe156,	// (0x0008b65d) im_writing_pane_t2_ParamLimits

0xe156,	// (0x0008b65d) im_writing_pane_t2

0x0001,

0xf26f,	// (0x0008c776) im_writing_pane_t_ParamLimits

0xf26f,	// (0x0008c776) im_writing_pane_t

0xdae7,	// (0x0008afee) input_focus_pane_cp04

0xdae7,	// (0x0008afee) input_focus_pane_cp05

0x6918,	// (0x00083e1f) list_im_single_pane_ParamLimits

0x6918,	// (0x00083e1f) list_im_single_pane

0xe173,	// (0x0008b67a) list_single_im_pane_t1

0x83b0,	// (0x000858b7) blid_accuracy_pane

0x83b8,	// (0x000858bf) blid_compass_pane

0x83c0,	// (0x000858c7) main_location_t1

0x83ce,	// (0x000858d5) main_location_t2

0x83dc,	// (0x000858e3) main_location_t3

0x0002,

0xf5e9,	// (0x0008caf0) main_location_t

0xdae7,	// (0x0008afee) aid_levels_location

0xde60,	// (0x0008b367) blid_accuracy_pane_g1

0xde60,	// (0x0008b367) blid_accuracy_pane_g2

0x0001,

0xf2d1,	// (0x0008c7d8) blid_accuracy_pane_g

0xe1ad,	// (0x0008b6b4) wml_content_pane

0xe1eb,	// (0x0008b6f2) wml_button_pane_ParamLimits

0xe1eb,	// (0x0008b6f2) wml_button_pane

0x6930,	// (0x00083e37) wml_list_single_large_pane_ParamLimits

0x6930,	// (0x00083e37) wml_list_single_large_pane

0x6947,	// (0x00083e4e) wml_list_single_medium_pane_ParamLimits

0x6947,	// (0x00083e4e) wml_list_single_medium_pane

0x695f,	// (0x00083e66) wml_list_single_small_pane_ParamLimits

0x695f,	// (0x00083e66) wml_list_single_small_pane

0xe1ff,	// (0x0008b706) wml_selection_box_pane_ParamLimits

0xe1ff,	// (0x0008b706) wml_selection_box_pane

0xe212,	// (0x0008b719) wml_list_single_pane_t1

0xe221,	// (0x0008b728) wml_list_single_medium_pane_t1

0xe230,	// (0x0008b737) wml_list_single_large_pane_t1

0xe23f,	// (0x0008b746) input_focus_pane_cp02_ParamLimits

0xe23f,	// (0x0008b746) input_focus_pane_cp02

0xe252,	// (0x0008b759) wml_selection_box_pane_g1

0xe25b,	// (0x0008b762) wml_selection_box_pane_t1_ParamLimits

0xe25b,	// (0x0008b762) wml_selection_box_pane_t1

0xdd42,	// (0x0008b249) bg_wml_button_pane_ParamLimits

0xdd42,	// (0x0008b249) bg_wml_button_pane

0xe273,	// (0x0008b77a) wml_button_pane_g1

0xe27b,	// (0x0008b782) wml_button_pane_t1

0xe273,	// (0x0008b77a) wml_button_bg_pane_g1

0xe28b,	// (0x0008b792) wml_button_bg_pane_g2

0xe293,	// (0x0008b79a) wml_button_bg_pane_g3

0xe29b,	// (0x0008b7a2) wml_button_bg_pane_g4

0xe2a3,	// (0x0008b7aa) wml_button_bg_pane_g5

0xe2ab,	// (0x0008b7b2) wml_button_bg_pane_g6

0xe2b3,	// (0x0008b7ba) wml_button_bg_pane_g7

0xe2bb,	// (0x0008b7c2) wml_button_bg_pane_g8

0xe2c3,	// (0x0008b7ca) wml_button_bg_pane_g9

0x0008,

0xf274,	// (0x0008c77b) wml_button_bg_pane_g

0x697a,	// (0x00083e81) bg_list_pane_cp02

0xe2cb,	// (0x0008b7d2) mce_header_pane_ParamLimits

0xe2cb,	// (0x0008b7d2) mce_header_pane

0xe2df,	// (0x0008b7e6) mce_icon_pane

0xe2df,	// (0x0008b7e6) mce_image_pane

0xe2e8,	// (0x0008b7ef) mce_text_pane_ParamLimits

0xe2e8,	// (0x0008b7ef) mce_text_pane

0x6983,	// (0x00083e8a) scroll_pane_cp03

0x6983,	// (0x00083e8a) scroll_pane_cp04

0xe2fc,	// (0x0008b803) scroll_pane_cp05_ParamLimits

0xe2fc,	// (0x0008b803) scroll_pane_cp05

0x698b,	// (0x00083e92) mce_header_field_pane_ParamLimits

0x698b,	// (0x00083e92) mce_header_field_pane

0x69ab,	// (0x00083eb2) mce_header_field_pane_2_ParamLimits

0x69ab,	// (0x00083eb2) mce_header_field_pane_2

0x69c1,	// (0x00083ec8) mce_header_field_pane_3

0x69c9,	// (0x00083ed0) list_single_mce_message_pane_ParamLimits

0x69c9,	// (0x00083ed0) list_single_mce_message_pane

0x69e0,	// (0x00083ee7) list_single_mce_smart_pane_ParamLimits

0x69e0,	// (0x00083ee7) list_single_mce_smart_pane

0xe308,	// (0x0008b80f) input_focus_pane_cp03

0xe311,	// (0x0008b818) list_header_data_pane

0x6a02,	// (0x00083f09) mce_header_field_pane_t1

0x6a10,	// (0x00083f17) list_single_mce_header_pane_ParamLimits

0x6a10,	// (0x00083f17) list_single_mce_header_pane

0xe319,	// (0x0008b820) list_single_mce_header_pane_t1

0xe328,	// (0x0008b82f) list_single_mce_message_pane_g1

0xe331,	// (0x0008b838) list_single_mce_message_pane_t1

0x6a4e,	// (0x00083f55) bg_cale_heading_pane_cp01_ParamLimits

0x6a4e,	// (0x00083f55) bg_cale_heading_pane_cp01

0xe340,	// (0x0008b847) bg_cale_pane_cp02_ParamLimits

0xe340,	// (0x0008b847) bg_cale_pane_cp02

0x6a7d,	// (0x00083f84) cale_month_corner_pane

0x6a97,	// (0x00083f9e) cale_month_day_heading_pane_ParamLimits

0x6a97,	// (0x00083f9e) cale_month_day_heading_pane

0x6ac6,	// (0x00083fcd) cale_month_pane_g1_ParamLimits

0x6ac6,	// (0x00083fcd) cale_month_pane_g1

0x6aea,	// (0x00083ff1) cale_month_pane_g2_ParamLimits

0x6aea,	// (0x00083ff1) cale_month_pane_g2

0x6b09,	// (0x00084010) cale_month_pane_g3_ParamLimits

0x6b09,	// (0x00084010) cale_month_pane_g3

0x6b45,	// (0x0008404c) cale_month_pane_g4_ParamLimits

0x6b45,	// (0x0008404c) cale_month_pane_g4

0x6b81,	// (0x00084088) cale_month_pane_g5_ParamLimits

0x6b81,	// (0x00084088) cale_month_pane_g5

0x6bbd,	// (0x000840c4) cale_month_pane_g6_ParamLimits

0x6bbd,	// (0x000840c4) cale_month_pane_g6

0x6bf9,	// (0x00084100) cale_month_pane_g7_ParamLimits

0x6bf9,	// (0x00084100) cale_month_pane_g7

0x6c35,	// (0x0008413c) cale_month_pane_g8_ParamLimits

0x6c35,	// (0x0008413c) cale_month_pane_g8

0x6c71,	// (0x00084178) cale_month_pane_g9_ParamLimits

0x6c71,	// (0x00084178) cale_month_pane_g9

0x6cab,	// (0x000841b2) cale_month_pane_g10_ParamLimits

0x6cab,	// (0x000841b2) cale_month_pane_g10

0x6ce5,	// (0x000841ec) cale_month_pane_g11_ParamLimits

0x6ce5,	// (0x000841ec) cale_month_pane_g11

0x6d1f,	// (0x00084226) cale_month_pane_g12_ParamLimits

0x6d1f,	// (0x00084226) cale_month_pane_g12

0x6d59,	// (0x00084260) cale_month_pane_g13_ParamLimits

0x6d59,	// (0x00084260) cale_month_pane_g13

0x000c,

0xf287,	// (0x0008c78e) cale_month_pane_g_ParamLimits

0xf287,	// (0x0008c78e) cale_month_pane_g

0x6d93,	// (0x0008429a) cale_month_week_pane

0x6da6,	// (0x000842ad) grid_cale_month_pane_ParamLimits

0x6da6,	// (0x000842ad) grid_cale_month_pane

0x6dcc,	// (0x000842d3) cale_month_day_heading_pane_t1

0x6e52,	// (0x00084359) cale_month_day_heading_pane_t2

0x6ee3,	// (0x000843ea) cale_month_day_heading_pane_t3

0x6f74,	// (0x0008447b) cale_month_day_heading_pane_t4

0x7005,	// (0x0008450c) cale_month_day_heading_pane_t5

0x7096,	// (0x0008459d) cale_month_day_heading_pane_t6

0x7127,	// (0x0008462e) cale_month_day_heading_pane_t7

0x0006,

0xf2a2,	// (0x0008c7a9) cale_month_day_heading_pane_t

0xdf88,	// (0x0008b48f) bg_cale_side_pane_cp01

0x71b8,	// (0x000846bf) cale_month_week_pane_t1

0x71f1,	// (0x000846f8) cale_month_week_pane_t2

0x722a,	// (0x00084731) cale_month_week_pane_t3

0x7263,	// (0x0008476a) cale_month_week_pane_t4

0x729c,	// (0x000847a3) cale_month_week_pane_t5

0x72d5,	// (0x000847dc) cale_month_week_pane_t6

0x0005,

0xf2b1,	// (0x0008c7b8) cale_month_week_pane_t

0x730e,	// (0x00084815) cell_cale_month_pane_ParamLimits

0x730e,	// (0x00084815) cell_cale_month_pane

0x7426,	// (0x0008492d) cell_cale_month_pane_g1

0x7432,	// (0x00084939) cell_cale_month_pane_t1_ParamLimits

0x7432,	// (0x00084939) cell_cale_month_pane_t1

0xdf96,	// (0x0008b49d) grid_highlight_pane_cp08

0xde60,	// (0x0008b367) main_smil_g1

0x7452,	// (0x00084959) smil_status_pane

0xe37f,	// (0x0008b886) smil_text_pane

0x10af,	// (0x0007e5b6) bg_popup_call3_rect_pane_g8

0x10b7,	// (0x0007e5be) bg_popup_call3_rect_pane_g9

0x0008,

0xf56a,	// (0x0008ca71) bg_popup_call3_rect_pane_g

0x13ab,	// (0x0007e8b2) smil_status_volume_pane_g1

0x7463,	// (0x0008496a) smil_status_pane_t1

0x873b,	// (0x00085c42) volume_smil_pane

0xe389,	// (0x0008b890) list_smil_text_pane

0x747a,	// (0x00084981) scroll_pane_cp011

0x7483,	// (0x0008498a) smil_text_list_pane_t1_ParamLimits

0x7483,	// (0x0008498a) smil_text_list_pane_t1

0x74c2,	// (0x000849c9) aid_volume_smil_ParamLimits

0x74c2,	// (0x000849c9) aid_volume_smil

0xde60,	// (0x0008b367) smil_volume_pane_g1

0xde60,	// (0x0008b367) smil_volume_pane_g2

0x0001,

0xf2d1,	// (0x0008c7d8) smil_volume_pane_g

0x5c67,	// (0x0008316e) listscroll_cale_day_pane

0xe393,	// (0x0008b89a) bg_cale_pane

0xe3ab,	// (0x0008b8b2) list_cale_pane

0xe3ce,	// (0x0008b8d5) scroll_pane_cp09

0xe3df,	// (0x0008b8e6) cale_bg_pane_g1

0xe3e7,	// (0x0008b8ee) cale_bg_pane_g2

0xe3ef,	// (0x0008b8f6) cale_bg_pane_g3

0xe3f7,	// (0x0008b8fe) cale_bg_pane_g4

0xe3ff,	// (0x0008b906) cale_bg_pane_g5

0xe407,	// (0x0008b90e) cale_bg_pane_g6

0xe40f,	// (0x0008b916) cale_bg_pane_g7

0xe417,	// (0x0008b91e) cale_bg_pane_g8

0xe41f,	// (0x0008b926) cale_bg_pane_g9

0x0008,

0xf2d6,	// (0x0008c7dd) cale_bg_pane_g

0x74ec,	// (0x000849f3) list_cale_time_pane_ParamLimits

0x74ec,	// (0x000849f3) list_cale_time_pane

0xe427,	// (0x0008b92e) list_cale_time_pane_g1_ParamLimits

0xe427,	// (0x0008b92e) list_cale_time_pane_g1

0xe433,	// (0x0008b93a) list_cale_time_pane_g2_ParamLimits

0xe433,	// (0x0008b93a) list_cale_time_pane_g2

0x7500,	// (0x00084a07) list_cale_time_pane_g3_ParamLimits

0x7500,	// (0x00084a07) list_cale_time_pane_g3

0x750c,	// (0x00084a13) list_cale_time_pane_g4_ParamLimits

0x750c,	// (0x00084a13) list_cale_time_pane_g4

0x7518,	// (0x00084a1f) list_cale_time_pane_g5_ParamLimits

0x7518,	// (0x00084a1f) list_cale_time_pane_g5

0x0005,

0xf2e9,	// (0x0008c7f0) list_cale_time_pane_g_ParamLimits

0xf2e9,	// (0x0008c7f0) list_cale_time_pane_g

0xe44d,	// (0x0008b954) list_cale_time_pane_t1_ParamLimits

0xe44d,	// (0x0008b954) list_cale_time_pane_t1

0xe475,	// (0x0008b97c) list_cale_time_pane_t2_ParamLimits

0xe475,	// (0x0008b97c) list_cale_time_pane_t2

0x78c9,	// (0x00084dd0) aid_blid_cardinal_pane

0x7907,	// (0x00084e0e) compass_pane_t4

0xe49d,	// (0x0008b9a4) list_cale_time_pane_t4_ParamLimits

0xe49d,	// (0x0008b9a4) list_cale_time_pane_t4

0x7915,	// (0x00084e1c) compass_pane_t5

0x7923,	// (0x00084e2a) compass_pane_t6

0x7931,	// (0x00084e38) compass_pane_t7

0xe90a,	// (0x0008be11) navi_pane_cc_t1

0xeaaf,	// (0x0008bfb6) aid_phob_thumbnail_center_pane

0x7f5d,	// (0x00085464) main_postcard_pane_g4_ParamLimits

0x0002,

0xf2f6,	// (0x0008c7fd) list_cale_time_pane_t_ParamLimits

0xf2f6,	// (0x0008c7fd) list_cale_time_pane_t

0xd740,	// (0x0008ac47) bg_popup_window_pane_cp02_ParamLimits

0xd740,	// (0x0008ac47) bg_popup_window_pane_cp02

0xe4c5,	// (0x0008b9cc) heading_pane_cp01_ParamLimits

0xe4c5,	// (0x0008b9cc) heading_pane_cp01

0xe4d1,	// (0x0008b9d8) loc_req_pane_ParamLimits

0xe4d1,	// (0x0008b9d8) loc_req_pane

0xe4e1,	// (0x0008b9e8) loc_type_pane_ParamLimits

0xe4e1,	// (0x0008b9e8) loc_type_pane

0xe4f3,	// (0x0008b9fa) loc_type_pane_t1_ParamLimits

0xe4f3,	// (0x0008b9fa) loc_type_pane_t1

0xe505,	// (0x0008ba0c) loc_type_pane_t2_ParamLimits

0xe505,	// (0x0008ba0c) loc_type_pane_t2

0xe517,	// (0x0008ba1e) loc_type_pane_t3_ParamLimits

0xe517,	// (0x0008ba1e) loc_type_pane_t3

0x0002,

0xf2fd,	// (0x0008c804) loc_type_pane_t_ParamLimits

0xf2fd,	// (0x0008c804) loc_type_pane_t

0xe529,	// (0x0008ba30) list_loc_req_pane

0xe533,	// (0x0008ba3a) scroll_pane_cp012

0x7524,	// (0x00084a2b) list_single_loc_request_popup_menu_pane_ParamLimits

0x7524,	// (0x00084a2b) list_single_loc_request_popup_menu_pane

0xe53c,	// (0x0008ba43) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xe53c,	// (0x0008ba43) list_single_loc_request_popup_menu_pane_g1

0xe548,	// (0x0008ba4f) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xe548,	// (0x0008ba4f) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf304,	// (0x0008c80b) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf304,	// (0x0008c80b) list_single_loc_request_popup_menu_pane_g

0xe554,	// (0x0008ba5b) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xe554,	// (0x0008ba5b) list_single_loc_request_popup_menu_pane_t1

0x7536,	// (0x00084a3d) bg_popup_window_pane_cp03_ParamLimits

0x7536,	// (0x00084a3d) bg_popup_window_pane_cp03

0x7544,	// (0x00084a4b) heading_loc_req_pane_ParamLimits

0x7544,	// (0x00084a4b) heading_loc_req_pane

0x7550,	// (0x00084a57) popup_dyc_status_message_window_g1_ParamLimits

0x7550,	// (0x00084a57) popup_dyc_status_message_window_g1

0x755c,	// (0x00084a63) popup_dyc_status_message_window_t1_ParamLimits

0x755c,	// (0x00084a63) popup_dyc_status_message_window_t1

0x756e,	// (0x00084a75) popup_dyc_status_message_window_t2_ParamLimits

0x756e,	// (0x00084a75) popup_dyc_status_message_window_t2

0x7580,	// (0x00084a87) popup_dyc_status_message_window_t3_ParamLimits

0x7580,	// (0x00084a87) popup_dyc_status_message_window_t3

0x0002,

0xf309,	// (0x0008c810) popup_dyc_status_message_window_t_ParamLimits

0xf309,	// (0x0008c810) popup_dyc_status_message_window_t

0xdae7,	// (0x0008afee) bg_heading_pane_cp01

0xe56a,	// (0x0008ba71) heading_loc_req_pane_g1

0xe572,	// (0x0008ba79) heading_loc_req_pane_g2

0xe57a,	// (0x0008ba81) heading_loc_req_pane_g3

0x0002,

0xf310,	// (0x0008c817) heading_loc_req_pane_g

0xe582,	// (0x0008ba89) heading_loc_req_pane_t1

0xe591,	// (0x0008ba98) bg_popup_sub_pane_cp01_ParamLimits

0xe591,	// (0x0008ba98) bg_popup_sub_pane_cp01

0xe59f,	// (0x0008baa6) popup_cale_events_window_g1_ParamLimits

0xe59f,	// (0x0008baa6) popup_cale_events_window_g1

0xe5bf,	// (0x0008bac6) popup_cale_events_window_g2_ParamLimits

0xe5bf,	// (0x0008bac6) popup_cale_events_window_g2

0x0001,

0xf344,	// (0x0008c84b) popup_cale_events_window_g_ParamLimits

0xf344,	// (0x0008c84b) popup_cale_events_window_g

0xe5df,	// (0x0008bae6) popup_cale_events_window_t1_ParamLimits

0xe5df,	// (0x0008bae6) popup_cale_events_window_t1

0xe5f1,	// (0x0008baf8) popup_cale_events_window_t2_ParamLimits

0xe5f1,	// (0x0008baf8) popup_cale_events_window_t2

0xe62f,	// (0x0008bb36) popup_cale_events_window_t3_ParamLimits

0xe62f,	// (0x0008bb36) popup_cale_events_window_t3

0xe669,	// (0x0008bb70) popup_cale_events_window_t4_ParamLimits

0xe669,	// (0x0008bb70) popup_cale_events_window_t4

0x0003,

0xf349,	// (0x0008c850) popup_cale_events_window_t_ParamLimits

0xf349,	// (0x0008c850) popup_cale_events_window_t

0x76a0,	// (0x00084ba7) call_type_pane

0xe69f,	// (0x0008bba6) popup_call_status_window_g1

0x76ac,	// (0x00084bb3) popup_call_status_window_g2

0x76b8,	// (0x00084bbf) popup_call_status_window_g3

0x0002,

0xf352,	// (0x0008c859) popup_call_status_window_g

0xe6ad,	// (0x0008bbb4) call_type_pane_g1

0xe6b6,	// (0x0008bbbd) call_type_pane_g2

0x0001,

0xf359,	// (0x0008c860) call_type_pane_g

0xdae7,	// (0x0008afee) bg_popup_sub_pane_cp02

0xe6bf,	// (0x0008bbc6) listscroll_popup_wml_pane

0xe6c7,	// (0x0008bbce) list_wml_pane

0xe6d1,	// (0x0008bbd8) scroll_pane_cp013

0x76c4,	// (0x00084bcb) list_single_graphic_popup_wml_pane_ParamLimits

0x76c4,	// (0x00084bcb) list_single_graphic_popup_wml_pane

0xde60,	// (0x0008b367) list_single_graphic_popup_wml_pane_g1

0xe6da,	// (0x0008bbe1) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf35e,	// (0x0008c865) list_single_graphic_popup_wml_pane_g

0xe6e2,	// (0x0008bbe9) list_single_graphic_popup_wml_pane_t1

0xe6f8,	// (0x0008bbff) aid_call_pane

0xdd3a,	// (0x0008b241) popup_clock_analogue_window_g1

0xdd3a,	// (0x0008b241) popup_clock_analogue_window_g2

0x76d8,	// (0x00084bdf) popup_clock_analogue_window_g3

0x76d8,	// (0x00084bdf) popup_clock_analogue_window_g4

0xde60,	// (0x0008b367) popup_clock_analogue_window_g5

0x0004,

0xf363,	// (0x0008c86a) popup_clock_analogue_window_g

0x76e0,	// (0x00084be7) popup_clock_analogue_window_t1

0x76ee,	// (0x00084bf5) clock_digital_number_pane_ParamLimits

0x76ee,	// (0x00084bf5) clock_digital_number_pane

0x76fa,	// (0x00084c01) clock_digital_number_pane_cp02_ParamLimits

0x76fa,	// (0x00084c01) clock_digital_number_pane_cp02

0x7706,	// (0x00084c0d) clock_digital_number_pane_cp03_ParamLimits

0x7706,	// (0x00084c0d) clock_digital_number_pane_cp03

0x7712,	// (0x00084c19) clock_digital_number_pane_cp04_ParamLimits

0x7712,	// (0x00084c19) clock_digital_number_pane_cp04

0x771e,	// (0x00084c25) clock_digital_separator_pane_ParamLimits

0x771e,	// (0x00084c25) clock_digital_separator_pane

0x772a,	// (0x00084c31) popup_clock_digital_window_t1

0xde60,	// (0x0008b367) clock_digital_number_pane_g1

0xde60,	// (0x0008b367) clock_digital_number_pane_g2

0x0001,

0xf2d1,	// (0x0008c7d8) clock_digital_number_pane_g

0xde60,	// (0x0008b367) clock_digital_separator_pane_g1

0xde60,	// (0x0008b367) clock_digital_separator_pane_g2

0x0001,

0xf2d1,	// (0x0008c7d8) clock_digital_separator_pane_g

0xdae7,	// (0x0008afee) bg_popup_window_pane_cp04

0xe700,	// (0x0008bc07) heading_pane_cp03

0xe708,	// (0x0008bc0f) listscroll_popup_gms_pane

0xe710,	// (0x0008bc17) grid_large_graphic_popup_pane

0xe71a,	// (0x0008bc21) listscroll_popup_gms_pane_g1

0xe722,	// (0x0008bc29) listscroll_popup_gms_pane_g2

0x0001,

0xf36e,	// (0x0008c875) listscroll_popup_gms_pane_g

0xe1e3,	// (0x0008b6ea) scroll_pane_cp014

0x7747,	// (0x00084c4e) cell_large_graphic_popup_pane_ParamLimits

0x7747,	// (0x00084c4e) cell_large_graphic_popup_pane

0x775e,	// (0x00084c65) cell_large_graphic_popup_pane_g1_ParamLimits

0x775e,	// (0x00084c65) cell_large_graphic_popup_pane_g1

0xe72a,	// (0x0008bc31) cell_large_graphic_popup_pane_g2_ParamLimits

0xe72a,	// (0x0008bc31) cell_large_graphic_popup_pane_g2

0xe736,	// (0x0008bc3d) cell_large_graphic_popup_pane_g3_ParamLimits

0xe736,	// (0x0008bc3d) cell_large_graphic_popup_pane_g3

0xe743,	// (0x0008bc4a) cell_large_graphic_popup_pane_g4_ParamLimits

0xe743,	// (0x0008bc4a) cell_large_graphic_popup_pane_g4

0x0003,

0xf373,	// (0x0008c87a) cell_large_graphic_popup_pane_g_ParamLimits

0xf373,	// (0x0008c87a) cell_large_graphic_popup_pane_g

0xe753,	// (0x0008bc5a) grid_highlight_pane_cp010

0xde60,	// (0x0008b367) bg_popup_call_pane_g1

0xe75d,	// (0x0008bc64) list_single_graphic_popup_conf_pane_ParamLimits

0xe75d,	// (0x0008bc64) list_single_graphic_popup_conf_pane

0xe770,	// (0x0008bc77) list_highlight_pane_cp01

0xe779,	// (0x0008bc80) list_single_graphic_popup_conf_pane_g1

0xe781,	// (0x0008bc88) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf37c,	// (0x0008c883) list_single_graphic_popup_conf_pane_g

0xe789,	// (0x0008bc90) list_single_graphic_popup_conf_pane_t1

0xe797,	// (0x0008bc9e) linegrid_cams_pane_g1

0x776a,	// (0x00084c71) linegrid_cams_pane_g2

0xdf19,	// (0x0008b420) linegrid_cams_pane_g3

0xe7a0,	// (0x0008bca7) linegrid_cams_pane_g4

0x7773,	// (0x00084c7a) linegrid_cams_pane_g5

0x777c,	// (0x00084c83) linegrid_cams_pane_g6

0xdfc9,	// (0x0008b4d0) linegrid_cams_pane_g7

0x0006,

0xf381,	// (0x0008c888) linegrid_cams_pane_g

0xe7a9,	// (0x0008bcb0) popup_clock_analogue_window

0xe7a9,	// (0x0008bcb0) popup_clock_digital_window

0xdae7,	// (0x0008afee) popup_phob_thumbnail_window

0xde60,	// (0x0008b367) call_video_uplink_pane_g1

0xe7b2,	// (0x0008bcb9) call_video_uplink_pane_g2

0x0001,

0xf390,	// (0x0008c897) call_video_uplink_pane_g

0xdf96,	// (0x0008b49d) video_uplink_pane

0xe7ba,	// (0x0008bcc1) mce_image_pane_g1

0x7785,	// (0x00084c8c) mce_image_pane_g2

0x778d,	// (0x00084c94) mce_image_pane_g3

0x7795,	// (0x00084c9c) mce_image_pane_g4

0x779d,	// (0x00084ca4) mce_image_pane_g5

0x0004,

0xf395,	// (0x0008c89c) mce_image_pane_g

0xe7c4,	// (0x0008bccb) control_top_pane_stacon_cp01_ParamLimits

0xe7c4,	// (0x0008bccb) control_top_pane_stacon_cp01

0xe7d4,	// (0x0008bcdb) uni_indicator_pane_stacon_cp01_ParamLimits

0xe7d4,	// (0x0008bcdb) uni_indicator_pane_stacon_cp01

0xe7e5,	// (0x0008bcec) bg_popup_sub_pane_cp03

0xe7ef,	// (0x0008bcf6) chi_dic_find_pane

0x77a5,	// (0x00084cac) listscroll_chi_dic_pane

0xe7f7,	// (0x0008bcfe) main_pane_chidic_g1

0xe7ff,	// (0x0008bd06) chi_dic_find_pane_t1

0xe80d,	// (0x0008bd14) find_chidic_pane

0xe816,	// (0x0008bd1d) chi_dic_list_pane_ParamLimits

0xe816,	// (0x0008bd1d) chi_dic_list_pane

0xe827,	// (0x0008bd2e) scroll_pane_cp020

0xe82f,	// (0x0008bd36) find_chidic_pane_t1

0xdae7,	// (0x0008afee) input_focus_pane_cp06

0x77b7,	// (0x00084cbe) list_chi_dic_pane_ParamLimits

0x77b7,	// (0x00084cbe) list_chi_dic_pane

0x77ca,	// (0x00084cd1) list_chi_dic_pane_t1_ParamLimits

0x77ca,	// (0x00084cd1) list_chi_dic_pane_t1

0xdae7,	// (0x0008afee) list_highlight_pane_cp020

0xe83e,	// (0x0008bd45) bg_cale_heading_pane_g1

0x77dd,	// (0x00084ce4) bg_cale_heading_pane_g2

0x77e5,	// (0x00084cec) bg_cale_heading_pane_g3

0x77ed,	// (0x00084cf4) bg_cale_heading_pane_g4

0x77f5,	// (0x00084cfc) bg_cale_heading_pane_g5

0x77fd,	// (0x00084d04) bg_cale_heading_pane_g6

0x7805,	// (0x00084d0c) bg_cale_heading_pane_g7

0x780d,	// (0x00084d14) bg_cale_heading_pane_g8

0x7815,	// (0x00084d1c) bg_cale_heading_pane_g9

0x0008,

0xf3a0,	// (0x0008c8a7) bg_cale_heading_pane_g

0xe83e,	// (0x0008bd45) bg_cale_side_pane_g1

0x781d,	// (0x00084d24) bg_cale_side_pane_g2

0x7825,	// (0x00084d2c) bg_cale_side_pane_g3

0x782d,	// (0x00084d34) bg_cale_side_pane_g4

0x7835,	// (0x00084d3c) bg_cale_side_pane_g5

0x783d,	// (0x00084d44) bg_cale_side_pane_g6

0x7845,	// (0x00084d4c) bg_cale_side_pane_g7

0x784d,	// (0x00084d54) bg_cale_side_pane_g8

0x7855,	// (0x00084d5c) bg_cale_side_pane_g9

0x0008,

0xf3b3,	// (0x0008c8ba) bg_cale_side_pane_g

0x785d,	// (0x00084d64) popup_call_status_window_ParamLimits

0x785d,	// (0x00084d64) popup_call_status_window

0xe846,	// (0x0008bd4d) stacon_top_pane

0xe84e,	// (0x0008bd55) status_pane_ParamLimits

0xe84e,	// (0x0008bd55) status_pane

0xe868,	// (0x0008bd6f) status_small_pane

0xe870,	// (0x0008bd77) control_pane

0xdae7,	// (0x0008afee) stacon_bottom_pane

0xe878,	// (0x0008bd7f) list_single_mce_smart_pane_t1_ParamLimits

0xe878,	// (0x0008bd7f) list_single_mce_smart_pane_t1

0xe88b,	// (0x0008bd92) list_single_mce_smart_pane_t2_ParamLimits

0xe88b,	// (0x0008bd92) list_single_mce_smart_pane_t2

0x0001,

0xf3c6,	// (0x0008c8cd) list_single_mce_smart_pane_t_ParamLimits

0xf3c6,	// (0x0008c8cd) list_single_mce_smart_pane_t

0x786c,	// (0x00084d73) compass_pane

0x7875,	// (0x00084d7c) main_location2_pane_t1

0x788b,	// (0x00084d92) main_location2_pane_t2

0x78a1,	// (0x00084da8) main_location2_pane_t3

0x0003,

0xf3cb,	// (0x0008c8d2) main_location2_pane_t

0xe8b3,	// (0x0008bdba) compass_pane_g1_ParamLimits

0xe8b3,	// (0x0008bdba) compass_pane_g1

0x78e9,	// (0x00084df0) compass_pane_t1

0x78f8,	// (0x00084dff) compass_pane_t2

0x0005,

0xf3d4,	// (0x0008c8db) compass_pane_t

0x793f,	// (0x00084e46) text_secondary_cp61

0xe901,	// (0x0008be08) navi_pane_cams_g5

0xe94d,	// (0x0008be54) navi_pane_im_t1

0xe95b,	// (0x0008be62) navi_pane_mp_g1_ParamLimits

0xe95b,	// (0x0008be62) navi_pane_mp_g1

0xe96f,	// (0x0008be76) navi_pane_mp_g2_ParamLimits

0xe96f,	// (0x0008be76) navi_pane_mp_g2

0xe97b,	// (0x0008be82) navi_pane_mp_g3_ParamLimits

0xe97b,	// (0x0008be82) navi_pane_mp_g3

0x0002,

0xf3e8,	// (0x0008c8ef) navi_pane_mp_g_ParamLimits

0xf3e8,	// (0x0008c8ef) navi_pane_mp_g

0xe987,	// (0x0008be8e) navi_pane_mp_t1

0xe995,	// (0x0008be9c) navi_pane_mp_t2

0x0002,

0xf3ef,	// (0x0008c8f6) navi_pane_mp_t

0xea00,	// (0x0008bf07) navi_pane_vt_g1

0xe987,	// (0x0008be8e) navi_pane_vt_t1

0xea08,	// (0x0008bf0f) navi_slider_pane

0xdfe2,	// (0x0008b4e9) zooming_pane

0xea10,	// (0x0008bf17) navi_slider_pane_g1

0x79c1,	// (0x00084ec8) navi_slider_pane_g2

0x0006,

0xf3f6,	// (0x0008c8fd) navi_slider_pane_g

0xea34,	// (0x0008bf3b) aid_levels_zoom

0xea3c,	// (0x0008bf43) zooming_pane_g1

0xea44,	// (0x0008bf4b) zooming_pane_g2

0xea44,	// (0x0008bf4b) zooming_pane_g3

0x0002,

0xf405,	// (0x0008c90c) zooming_pane_g

0xea4c,	// (0x0008bf53) level_10_zoom

0xea55,	// (0x0008bf5c) level_11_zoom

0xea5e,	// (0x0008bf65) level_1_zoom

0xea67,	// (0x0008bf6e) level_2_zoom

0xea70,	// (0x0008bf77) level_3_zoom

0xea79,	// (0x0008bf80) level_4_zoom

0xea82,	// (0x0008bf89) level_5_zoom

0xea8b,	// (0x0008bf92) level_6_zoom

0xea94,	// (0x0008bf9b) level_7_zoom

0xea9d,	// (0x0008bfa4) level_8_zoom

0xeaa6,	// (0x0008bfad) level_9_zoom

0xeab7,	// (0x0008bfbe) popup_phob_thumbnail_window_g1

0xeabf,	// (0x0008bfc6) popup_phob_thumbnail_window_g2

0x0001,

0xf40c,	// (0x0008c913) popup_phob_thumbnail_window_g

0x1251,	// (0x0007e758) level_1_location

0x1259,	// (0x0007e760) level_2_location

0x1261,	// (0x0007e768) level_3_location

0x1269,	// (0x0007e770) level_4_location

0xdfe2,	// (0x0008b4e9) level_5_location

0x79d3,	// (0x00084eda) mce_icon_pane_g1

0x79db,	// (0x00084ee2) mce_icon_pane_g2

0x0001,

0xf411,	// (0x0008c918) mce_icon_pane_g

0x79e3,	// (0x00084eea) main_mup_pane_g1_ParamLimits

0x79e3,	// (0x00084eea) main_mup_pane_g1

0x79fb,	// (0x00084f02) main_mup_pane_g2_ParamLimits

0x79fb,	// (0x00084f02) main_mup_pane_g2

0x7a17,	// (0x00084f1e) main_mup_pane_g3_ParamLimits

0x7a17,	// (0x00084f1e) main_mup_pane_g3

0x7a33,	// (0x00084f3a) main_mup_pane_g4_ParamLimits

0x7a33,	// (0x00084f3a) main_mup_pane_g4

0x7a4f,	// (0x00084f56) main_mup_pane_g5_ParamLimits

0x7a4f,	// (0x00084f56) main_mup_pane_g5

0x7a6c,	// (0x00084f73) main_mup_pane_g6_ParamLimits

0x7a6c,	// (0x00084f73) main_mup_pane_g6

0x7a88,	// (0x00084f8f) main_mup_pane_g7_ParamLimits

0x7a88,	// (0x00084f8f) main_mup_pane_g7

0x7aa4,	// (0x00084fab) main_mup_pane_g8_ParamLimits

0x7aa4,	// (0x00084fab) main_mup_pane_g8

0x7ac0,	// (0x00084fc7) main_mup_pane_g9_ParamLimits

0x7ac0,	// (0x00084fc7) main_mup_pane_g9

0x7ad7,	// (0x00084fde) main_mup_pane_g10_ParamLimits

0x7ad7,	// (0x00084fde) main_mup_pane_g10

0x7aee,	// (0x00084ff5) main_mup_pane_g11_ParamLimits

0x7aee,	// (0x00084ff5) main_mup_pane_g11

0x7b02,	// (0x00085009) main_mup_pane_g12_ParamLimits

0x7b02,	// (0x00085009) main_mup_pane_g12

0x7b0e,	// (0x00085015) main_mup_pane_g13_ParamLimits

0x7b0e,	// (0x00085015) main_mup_pane_g13

0x000c,

0xf416,	// (0x0008c91d) main_mup_pane_g_ParamLimits

0xf416,	// (0x0008c91d) main_mup_pane_g

0x7b22,	// (0x00085029) main_mup_pane_t1_ParamLimits

0x7b22,	// (0x00085029) main_mup_pane_t1

0x7b3f,	// (0x00085046) main_mup_pane_t2_ParamLimits

0x7b3f,	// (0x00085046) main_mup_pane_t2

0x7b59,	// (0x00085060) main_mup_pane_t3_ParamLimits

0x7b59,	// (0x00085060) main_mup_pane_t3

0x7b73,	// (0x0008507a) main_mup_pane_t4_ParamLimits

0x7b73,	// (0x0008507a) main_mup_pane_t4

0x7b85,	// (0x0008508c) main_mup_pane_t5_ParamLimits

0x7b85,	// (0x0008508c) main_mup_pane_t5

0x7b97,	// (0x0008509e) main_mup_pane_t6_ParamLimits

0x7b97,	// (0x0008509e) main_mup_pane_t6

0x0005,

0xf431,	// (0x0008c938) main_mup_pane_t_ParamLimits

0xf431,	// (0x0008c938) main_mup_pane_t

0x7bad,	// (0x000850b4) mup_progress_pane_ParamLimits

0x7bad,	// (0x000850b4) mup_progress_pane

0x7bb9,	// (0x000850c0) mup_visualizer_pane_ParamLimits

0x7bb9,	// (0x000850c0) mup_visualizer_pane

0x7be7,	// (0x000850ee) mup_volume_pane_ParamLimits

0x7be7,	// (0x000850ee) mup_volume_pane

0xe69f,	// (0x0008bba6) mup_visualizer_pane_g1_ParamLimits

0xe69f,	// (0x0008bba6) mup_visualizer_pane_g1

0xe69f,	// (0x0008bba6) mup_visualizer_pane_g2_ParamLimits

0xe69f,	// (0x0008bba6) mup_visualizer_pane_g2

0xe8b3,	// (0x0008bdba) mup_visualizer_pane_g3_ParamLimits

0xe8b3,	// (0x0008bdba) mup_visualizer_pane_g3

0x0002,

0xf43e,	// (0x0008c945) mup_visualizer_pane_g_ParamLimits

0xf43e,	// (0x0008c945) mup_visualizer_pane_g

0xde60,	// (0x0008b367) mup_volume_pane_g1

0xeacf,	// (0x0008bfd6) mup_volume_pane_g2

0x0001,

0xf445,	// (0x0008c94c) mup_volume_pane_g

0xde60,	// (0x0008b367) mup_progress_pane_g1

0xead8,	// (0x0008bfdf) mup_progress_pane_g2

0xeae1,	// (0x0008bfe8) mup_progress_pane_g3

0x0002,

0xf44a,	// (0x0008c951) mup_progress_pane_g

0xdae7,	// (0x0008afee) bg_popup_window_pane_cp05

0xeaea,	// (0x0008bff1) heading_pane_cp02_ParamLimits

0xeaea,	// (0x0008bff1) heading_pane_cp02

0xeb04,	// (0x0008c00b) list_popup_blid_pane

0xeb0c,	// (0x0008c013) list_blid_sat_info_pane_ParamLimits

0xeb0c,	// (0x0008c013) list_blid_sat_info_pane

0xeb1f,	// (0x0008c026) list_blid_sat_info_pane_g1

0xeb27,	// (0x0008c02e) list_blid_sat_info_pane_t1

0x7cda,	// (0x000851e1) mup_equalizer_pane_ParamLimits

0x7cda,	// (0x000851e1) mup_equalizer_pane

0x7cf3,	// (0x000851fa) mup_equalizer_pane_cp1_ParamLimits

0x7cf3,	// (0x000851fa) mup_equalizer_pane_cp1

0x7d0c,	// (0x00085213) mup_equalizer_pane_cp2_ParamLimits

0x7d0c,	// (0x00085213) mup_equalizer_pane_cp2

0x7d25,	// (0x0008522c) mup_equalizer_pane_cp3_ParamLimits

0x7d25,	// (0x0008522c) mup_equalizer_pane_cp3

0x7d3e,	// (0x00085245) mup_equalizer_pane_cp4_ParamLimits

0x7d3e,	// (0x00085245) mup_equalizer_pane_cp4

0x7d57,	// (0x0008525e) mup_equalizer_pane_cp5

0x7d69,	// (0x00085270) mup_equalizer_pane_cp6

0x7d7b,	// (0x00085282) mup_equalizer_pane_cp7

0x112f,	// (0x0007e636) bg_popup_call_poc_act_pane_g9

0x1137,	// (0x0007e63e) bg_popup_call_poc_act_pane_g10

0x113f,	// (0x0007e646) bg_popup_call_poc_act_pane_g11

0x000a,

0xdd42,	// (0x0008b249) mup_scale_pane

0xde60,	// (0x0008b367) mup_scale_pane_g1

0xeb35,	// (0x0008c03c) mup_scale_pane_g2

0x0006,

0xf466,	// (0x0008c96d) mup_scale_pane_g

0xeb59,	// (0x0008c060) msg_data_pane

0xeb61,	// (0x0008c068) scroll_pane_cp017

0x7d9f,	// (0x000852a6) bg_list_pane_cp04_ParamLimits

0x7d9f,	// (0x000852a6) bg_list_pane_cp04

0xeb69,	// (0x0008c070) msg_data_pane_g1

0x7785,	// (0x00084c8c) msg_data_pane_g2

0x778d,	// (0x00084c94) msg_data_pane_g3

0x7db7,	// (0x000852be) msg_data_pane_g4

0x779d,	// (0x00084ca4) msg_data_pane_g5

0x79d3,	// (0x00084eda) msg_data_pane_g6

0x7dbf,	// (0x000852c6) msg_data_pane_g7

0x0006,

0xf475,	// (0x0008c97c) msg_data_pane_g

0x7dc7,	// (0x000852ce) msg_text_pane_ParamLimits

0x7dc7,	// (0x000852ce) msg_text_pane

0x7df0,	// (0x000852f7) qrid_highlight_pane_cp011_ParamLimits

0x7df0,	// (0x000852f7) qrid_highlight_pane_cp011

0xdae7,	// (0x0008afee) msg_body_pane

0xdae7,	// (0x0008afee) msg_header_pane

0xeb7a,	// (0x0008c081) input_focus_pane_cp07

0x04f8,	// (0x0007d9ff) msg_header_pane_t1_ParamLimits

0x04f8,	// (0x0007d9ff) msg_header_pane_t1

0x7e12,	// (0x00085319) msg_header_pane_t2_ParamLimits

0x7e12,	// (0x00085319) msg_header_pane_t2

0x0001,

0xf489,	// (0x0008c990) msg_header_pane_t_ParamLimits

0xf489,	// (0x0008c990) msg_header_pane_t

0xeb8f,	// (0x0008c096) msg_body_pane_g1

0x7e24,	// (0x0008532b) msg_body_pane_t1_ParamLimits

0x7e24,	// (0x0008532b) msg_body_pane_t1

0x7e4f,	// (0x00085356) msg_body_pane_t2_ParamLimits

0x7e4f,	// (0x00085356) msg_body_pane_t2

0x7e61,	// (0x00085368) msg_body_pane_t3_ParamLimits

0x7e61,	// (0x00085368) msg_body_pane_t3

0x0002,

0xf48e,	// (0x0008c995) msg_body_pane_t_ParamLimits

0xf48e,	// (0x0008c995) msg_body_pane_t

0x7ec1,	// (0x000853c8) main_viewer_pane_g1_ParamLimits

0x7ec1,	// (0x000853c8) main_viewer_pane_g1

0x7ecd,	// (0x000853d4) main_viewer_pane_g2_ParamLimits

0x7ecd,	// (0x000853d4) main_viewer_pane_g2

0x7ed9,	// (0x000853e0) main_viewer_pane_g3_ParamLimits

0x7ed9,	// (0x000853e0) main_viewer_pane_g3

0x7ee8,	// (0x000853ef) main_viewer_pane_g4_ParamLimits

0x7ee8,	// (0x000853ef) main_viewer_pane_g4

0x7ef7,	// (0x000853fe) main_viewer_pane_g5_ParamLimits

0x7ef7,	// (0x000853fe) main_viewer_pane_g5

0x7ef7,	// (0x000853fe) main_viewer_pane_g7_ParamLimits

0x7ef7,	// (0x000853fe) main_viewer_pane_g7

0x7f09,	// (0x00085410) main_viewer_pane_g8_ParamLimits

0x7f09,	// (0x00085410) main_viewer_pane_g8

0x0007,

0xf49e,	// (0x0008c9a5) main_viewer_pane_g_ParamLimits

0xf49e,	// (0x0008c9a5) main_viewer_pane_g

0xeb97,	// (0x0008c09e) viewer_content_pane_ParamLimits

0xeb97,	// (0x0008c09e) viewer_content_pane

0x7f39,	// (0x00085440) main_postcard_pane_g1_ParamLimits

0x7f39,	// (0x00085440) main_postcard_pane_g1

0x7f45,	// (0x0008544c) main_postcard_pane_g2_ParamLimits

0x7f45,	// (0x0008544c) main_postcard_pane_g2

0x7f51,	// (0x00085458) main_postcard_pane_g3_ParamLimits

0x7f51,	// (0x00085458) main_postcard_pane_g3

0x0005,

0xf4af,	// (0x0008c9b6) main_postcard_pane_g_ParamLimits

0xf4af,	// (0x0008c9b6) main_postcard_pane_g

0x7f5d,	// (0x00085464) main_postcard_pane_g4

0x1398,	// (0x0007e89f) smil_status_volume_pane_g2

0x7f81,	// (0x00085488) postcard_pane_ParamLimits

0x7f81,	// (0x00085488) postcard_pane

0xe69f,	// (0x0008bba6) postcard_pane_g1_ParamLimits

0xe69f,	// (0x0008bba6) postcard_pane_g1

0x7fb1,	// (0x000854b8) postcard_pane_g2_ParamLimits

0x7fb1,	// (0x000854b8) postcard_pane_g2

0x7fbd,	// (0x000854c4) postcard_pane_g3_ParamLimits

0x7fbd,	// (0x000854c4) postcard_pane_g3

0xeba5,	// (0x0008c0ac) postcard_pane_g4_ParamLimits

0xeba5,	// (0x0008c0ac) postcard_pane_g4

0x7fc9,	// (0x000854d0) postcard_pane_g5_ParamLimits

0x7fc9,	// (0x000854d0) postcard_pane_g5

0x7fd5,	// (0x000854dc) postcard_pane_g6_ParamLimits

0x7fd5,	// (0x000854dc) postcard_pane_g6

0xebb3,	// (0x0008c0ba) postcard_pane_g7_ParamLimits

0xebb3,	// (0x0008c0ba) postcard_pane_g7

0x0006,

0xf4bc,	// (0x0008c9c3) postcard_pane_g_ParamLimits

0xf4bc,	// (0x0008c9c3) postcard_pane_g

0x7fe1,	// (0x000854e8) main_mp2_pane_g1_ParamLimits

0x7fe1,	// (0x000854e8) main_mp2_pane_g1

0x7fed,	// (0x000854f4) main_mp2_pane_g2_ParamLimits

0x7fed,	// (0x000854f4) main_mp2_pane_g2

0x7ff9,	// (0x00085500) main_mp2_pane_g3_ParamLimits

0x7ff9,	// (0x00085500) main_mp2_pane_g3

0x0002,

0xf4cb,	// (0x0008c9d2) main_mp2_pane_g_ParamLimits

0xf4cb,	// (0x0008c9d2) main_mp2_pane_g

0x8005,	// (0x0008550c) main_mp2_pane_t1_ParamLimits

0x8005,	// (0x0008550c) main_mp2_pane_t1

0x801a,	// (0x00085521) main_mp2_pane_t2_ParamLimits

0x801a,	// (0x00085521) main_mp2_pane_t2

0x802c,	// (0x00085533) main_mp2_pane_t3_ParamLimits

0x802c,	// (0x00085533) main_mp2_pane_t3

0x0002,

0xf4d2,	// (0x0008c9d9) main_mp2_pane_t_ParamLimits

0xf4d2,	// (0x0008c9d9) main_mp2_pane_t

0xebc1,	// (0x0008c0c8) pec_content_pane_ParamLimits

0xebc1,	// (0x0008c0c8) pec_content_pane

0xe1e3,	// (0x0008b6ea) scroll_pane_cp015

0xebd3,	// (0x0008c0da) pec_attribute_pane_ParamLimits

0xebd3,	// (0x0008c0da) pec_attribute_pane

0x803e,	// (0x00085545) pec_content_pane_g1_ParamLimits

0x803e,	// (0x00085545) pec_content_pane_g1

0xebe3,	// (0x0008c0ea) pec_content_pane_t1_ParamLimits

0xebe3,	// (0x0008c0ea) pec_content_pane_t1

0xebf5,	// (0x0008c0fc) pec_content_pane_t2_ParamLimits

0xebf5,	// (0x0008c0fc) pec_content_pane_t2

0x0001,

0xf4d9,	// (0x0008c9e0) pec_content_pane_t_ParamLimits

0xf4d9,	// (0x0008c9e0) pec_content_pane_t

0x804a,	// (0x00085551) list_single_graphic_pane_cp01_ParamLimits

0x804a,	// (0x00085551) list_single_graphic_pane_cp01

0xdd42,	// (0x0008b249) bg_popup_sub_pane_cp04

0xec07,	// (0x0008c10e) popup_mup_playback_window_g1

0xec13,	// (0x0008c11a) popup_mup_playback_window_t1

0xec28,	// (0x0008c12f) popup_mup_playback_window_t2

0x0001,

0xf4de,	// (0x0008c9e5) popup_mup_playback_window_t

0xec5f,	// (0x0008c166) main_image_pane_g1_ParamLimits

0xec5f,	// (0x0008c166) main_image_pane_g1

0xeca2,	// (0x0008c1a9) scroll_pane_cp018_ParamLimits

0xeca2,	// (0x0008c1a9) scroll_pane_cp018

0xecba,	// (0x0008c1c1) scroll_pane_cp016_ParamLimits

0xecba,	// (0x0008c1c1) scroll_pane_cp016

0x80cf,	// (0x000855d6) smil2_image_pane_ParamLimits

0x80cf,	// (0x000855d6) smil2_image_pane

0x80f7,	// (0x000855fe) smil2_root_pane_ParamLimits

0x80f7,	// (0x000855fe) smil2_root_pane

0x8123,	// (0x0008562a) smil2_text_pane_ParamLimits

0x8123,	// (0x0008562a) smil2_text_pane

0xdae7,	// (0x0008afee) bg_list_pane_cp06

0xecee,	// (0x0008c1f5) grid_radio_pane

0xdae7,	// (0x0008afee) bg_popup_window_pane_cp06

0xecf6,	// (0x0008c1fd) main_fmradio_pane_t1

0xe700,	// (0x0008bc07) heading_pane_cp04

0xed04,	// (0x0008c20b) main_fmradio_pane_t2

0x1187,	// (0x0007e68e) popup_cale_lunar_info_window_g1

0xed12,	// (0x0008c219) main_fmradio_pane_t3

0x118f,	// (0x0007e696) popup_cale_lunar_info_window_g2

0xed20,	// (0x0008c227) main_fmradio_pane_t4

0x0001,

0xed2e,	// (0x0008c235) main_fmradio_pane_t5

0x0004,

0xf5cc,	// (0x0008cad3) popup_cale_lunar_info_window_g

0xf4f3,	// (0x0008c9fa) main_fmradio_pane_t

0xed3c,	// (0x0008c243) wait_bar_pane_cp03

0xe022,	// (0x0008b529) cell_fmradio_pane_ParamLimits

0xe022,	// (0x0008b529) cell_fmradio_pane

0xebb3,	// (0x0008c0ba) cell_fmradio_pane_g1_ParamLimits

0xebb3,	// (0x0008c0ba) cell_fmradio_pane_g1

0xdae7,	// (0x0008afee) grid_highlight_pane_cp011

0xed44,	// (0x0008c24b) poc_content_pane_ParamLimits

0xed44,	// (0x0008c24b) poc_content_pane

0xed57,	// (0x0008c25e) scroll_pane_cp019

0x8157,	// (0x0008565e) popup_call_poc_act_window_ParamLimits

0x8157,	// (0x0008565e) popup_call_poc_act_window

0x8164,	// (0x0008566b) popup_call_poc_inact_window_ParamLimits

0x8164,	// (0x0008566b) popup_call_poc_inact_window

0xf590,	// (0x0008ca97) bg_popup_call_poc_act_pane_g

0x1147,	// (0x0007e64e) bg_popup_call_poc_inact_pane_g1

0x114f,	// (0x0007e656) bg_popup_call_poc_inact_pane_g2

0xed5f,	// (0x0008c266) popup_call_poc_act_window_g2

0x1157,	// (0x0007e65e) bg_popup_call_poc_inact_pane_g3

0x10d7,	// (0x0007e5de) bg_popup_call_poc_inact_pane_g4

0x115f,	// (0x0007e666) bg_popup_call_poc_inact_pane_g5

0xed67,	// (0x0008c26e) popup_call_poc_act_window_t1_ParamLimits

0xed67,	// (0x0008c26e) popup_call_poc_act_window_t1

0xed8f,	// (0x0008c296) popup_call_poc_act_window_t2_ParamLimits

0xed8f,	// (0x0008c296) popup_call_poc_act_window_t2

0xedb7,	// (0x0008c2be) popup_call_poc_act_window_t3_ParamLimits

0xedb7,	// (0x0008c2be) popup_call_poc_act_window_t3

0xeddf,	// (0x0008c2e6) popup_call_poc_act_window_t4_ParamLimits

0xeddf,	// (0x0008c2e6) popup_call_poc_act_window_t4

0x0003,

0xf4fe,	// (0x0008ca05) popup_call_poc_act_window_t_ParamLimits

0xf4fe,	// (0x0008ca05) popup_call_poc_act_window_t

0x1167,	// (0x0007e66e) bg_popup_call_poc_inact_pane_g6

0x116f,	// (0x0007e676) bg_popup_call_poc_inact_pane_g7

0x1177,	// (0x0007e67e) bg_popup_call_poc_inact_pane_g8

0xedf1,	// (0x0008c2f8) popup_call_poc_inact_window_g2

0x117f,	// (0x0007e686) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf5a7,	// (0x0008caae) bg_popup_call_poc_inact_pane_g

0xedf9,	// (0x0008c300) popup_call_poc_inact_window_t1_ParamLimits

0xedf9,	// (0x0008c300) popup_call_poc_inact_window_t1

0xee0e,	// (0x0008c315) popup_call_poc_inact_window_t2_ParamLimits

0xee0e,	// (0x0008c315) popup_call_poc_inact_window_t2

0xee23,	// (0x0008c32a) popup_call_poc_inact_window_t3_ParamLimits

0xee23,	// (0x0008c32a) popup_call_poc_inact_window_t3

0x0002,

0xf507,	// (0x0008ca0e) popup_call_poc_inact_window_t_ParamLimits

0xf507,	// (0x0008ca0e) popup_call_poc_inact_window_t

0x131e,	// (0x0007e825) context_pane_ParamLimits

0x86a9,	// (0x00085bb0) signal_pane_ParamLimits

0xdfe2,	// (0x0008b4e9) main_call2_pane

0x862b,	// (0x00085b32) popup_phob_thumbnail2_window_ParamLimits

0x862b,	// (0x00085b32) popup_phob_thumbnail2_window

0x7e73,	// (0x0008537a) aid_hotspot_pointer_arrow_pane

0x7e7b,	// (0x00085382) aid_hotspot_pointer_hand_pane

0x8413,	// (0x0008591a) phob_pre_status_pane_g5

0x6273,	// (0x0008377a) cams_zoom_pane_ParamLimits

0x627f,	// (0x00083786) image_vga_pane_ParamLimits

0x628c,	// (0x00083793) main_camera_pane_g1_ParamLimits

0x6298,	// (0x0008379f) main_camera_pane_g2_ParamLimits

0x62a4,	// (0x000837ab) main_camera_pane_g3_ParamLimits

0x62b0,	// (0x000837b7) main_camera_pane_g4_ParamLimits

0x62bc,	// (0x000837c3) main_camera_pane_g5_ParamLimits

0x62c8,	// (0x000837cf) main_camera_pane_g6_ParamLimits

0x62d4,	// (0x000837db) main_camera_pane_g7_ParamLimits

0xf206,	// (0x0008c70d) main_camera_pane_g_ParamLimits

0x62e0,	// (0x000837e7) main_camera_pane_t1_ParamLimits

0x62f2,	// (0x000837f9) main_camera_pane_t2_ParamLimits

0xf217,	// (0x0008c71e) main_camera_pane_t_ParamLimits

0xdd42,	// (0x0008b249) bg_popup_preview_window_pane_cp01_ParamLimits

0xdd42,	// (0x0008b249) bg_popup_preview_window_pane_cp01

0xee38,	// (0x0008c33f) popup_phob_thumbnail2_window_g1_ParamLimits

0xee38,	// (0x0008c33f) popup_phob_thumbnail2_window_g1

0xdae7,	// (0x0008afee) call2_cli_visual_pane

0x8180,	// (0x00085687) popup_call2_audio_conf_window_ParamLimits

0x8180,	// (0x00085687) popup_call2_audio_conf_window

0x8193,	// (0x0008569a) popup_call2_audio_first_window_ParamLimits

0x8193,	// (0x0008569a) popup_call2_audio_first_window

0x820f,	// (0x00085716) popup_call2_audio_in_window_ParamLimits

0x820f,	// (0x00085716) popup_call2_audio_in_window

0x823f,	// (0x00085746) popup_call2_audio_out_window_ParamLimits

0x823f,	// (0x00085746) popup_call2_audio_out_window

0x828b,	// (0x00085792) popup_call2_audio_second_window_ParamLimits

0x828b,	// (0x00085792) popup_call2_audio_second_window

0x82d7,	// (0x000857de) popup_call2_audio_wait_window_ParamLimits

0x82d7,	// (0x000857de) popup_call2_audio_wait_window

0xdae7,	// (0x0008afee) bg_popup_call2_act_pane_cp03

0xdd24,	// (0x0008b22b) list_conf_pane_cp

0xee44,	// (0x0008c34b) popup_call2_audio_conf_window_t1

0xe75d,	// (0x0008bc64) list_single_graphic_popup_conf2_pane_ParamLimits

0xe75d,	// (0x0008bc64) list_single_graphic_popup_conf2_pane

0xe770,	// (0x0008bc77) list_highlight_pane_cp04

0xee52,	// (0x0008c359) list_single_graphic_popup_conf2_pane_g1

0xe781,	// (0x0008bc88) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf50e,	// (0x0008ca15) list_single_graphic_popup_conf2_pane_g

0xee5a,	// (0x0008c361) list_single_graphic_popup_conf2_pane_t1

0xee68,	// (0x0008c36f) bg_popup_call2_act_pane_cp01_ParamLimits

0xee68,	// (0x0008c36f) bg_popup_call2_act_pane_cp01

0xeef2,	// (0x0008c3f9) call_type_pane_cp05_ParamLimits

0xeef2,	// (0x0008c3f9) call_type_pane_cp05

0xef46,	// (0x0008c44d) popup_call2_audio_second_window_g1_ParamLimits

0xef46,	// (0x0008c44d) popup_call2_audio_second_window_g1

0xef9a,	// (0x0008c4a1) popup_call2_audio_second_window_g2_ParamLimits

0xef9a,	// (0x0008c4a1) popup_call2_audio_second_window_g2

0x0002,

0xf513,	// (0x0008ca1a) popup_call2_audio_second_window_g_ParamLimits

0xf513,	// (0x0008ca1a) popup_call2_audio_second_window_g

0xefff,	// (0x0008c506) popup_call2_audio_second_window_t1_ParamLimits

0xefff,	// (0x0008c506) popup_call2_audio_second_window_t1

0x054c,	// (0x0007da53) popup_call2_audio_second_window_t2_ParamLimits

0x054c,	// (0x0007da53) popup_call2_audio_second_window_t2

0x059f,	// (0x0007daa6) popup_call2_audio_second_window_t3_ParamLimits

0x059f,	// (0x0007daa6) popup_call2_audio_second_window_t3

0x0003,

0xf51a,	// (0x0008ca21) popup_call2_audio_second_window_t_ParamLimits

0xf51a,	// (0x0008ca21) popup_call2_audio_second_window_t

0xdae7,	// (0x0008afee) bg_popup_call2_in_pane_cp02

0xdaf1,	// (0x0008aff8) call_type_pane_cp04

0xdaf9,	// (0x0008b000) popup_call2_audio_wait_window_g1

0xdb01,	// (0x0008b008) popup_call2_audio_wait_window_g2

0x0001,

0xf0f5,	// (0x0008c5fc) popup_call2_audio_wait_window_g

0xdb09,	// (0x0008b010) popup_call2_audio_wait_window_t3

0x0692,	// (0x0007db99) bg_popup_call2_act_pane_ParamLimits

0x0692,	// (0x0007db99) bg_popup_call2_act_pane

0x0752,	// (0x0007dc59) call_type_pane_cp03_ParamLimits

0x0752,	// (0x0007dc59) call_type_pane_cp03

0x07b6,	// (0x0007dcbd) popup_call2_audio_first_window_g1_ParamLimits

0x07b6,	// (0x0007dcbd) popup_call2_audio_first_window_g1

0x0826,	// (0x0007dd2d) popup_call2_audio_first_window_g2_ParamLimits

0x0826,	// (0x0007dd2d) popup_call2_audio_first_window_g2

0xe69f,	// (0x0008bba6) popup_call2_audio_first_window_g3_ParamLimits

0xe69f,	// (0x0008bba6) popup_call2_audio_first_window_g3

0x0004,

0xf523,	// (0x0008ca2a) popup_call2_audio_first_window_g_ParamLimits

0xf523,	// (0x0008ca2a) popup_call2_audio_first_window_g

0x0904,	// (0x0007de0b) popup_call2_audio_first_window_t1_ParamLimits

0x0904,	// (0x0007de0b) popup_call2_audio_first_window_t1

0x0a07,	// (0x0007df0e) popup_call2_audio_first_window_t4_ParamLimits

0x0a07,	// (0x0007df0e) popup_call2_audio_first_window_t4

0x0aea,	// (0x0007dff1) popup_call2_audio_first_window_t5_ParamLimits

0x0aea,	// (0x0007dff1) popup_call2_audio_first_window_t5

0x0003,

0xf52e,	// (0x0008ca35) popup_call2_audio_first_window_t_ParamLimits

0xf52e,	// (0x0008ca35) popup_call2_audio_first_window_t

0xdd3a,	// (0x0008b241) bg_popup_call2_act_pane_g1

0x1197,	// (0x0007e69e) popup_cale_lunar_info_window_t1

0x11a5,	// (0x0007e6ac) popup_cale_lunar_info_window_t2

0x11b3,	// (0x0007e6ba) popup_cale_lunar_info_window_t3

0xdae7,	// (0x0008afee) bg_popup_call2_bubble_pane

0x0beb,	// (0x0007e0f2) bg_popup_call2_in_pane_cp01_ParamLimits

0x0beb,	// (0x0007e0f2) bg_popup_call2_in_pane_cp01

0xd7c3,	// (0x0008acca) call_type_pane_cp02

0x0c33,	// (0x0007e13a) popup_call2_audio_out_window_g1_ParamLimits

0x0c33,	// (0x0007e13a) popup_call2_audio_out_window_g1

0x0c5f,	// (0x0007e166) popup_call2_audio_out_window_g2_ParamLimits

0x0c5f,	// (0x0007e166) popup_call2_audio_out_window_g2

0x0c87,	// (0x0007e18e) popup_call2_audio_out_window_g3_ParamLimits

0x0c87,	// (0x0007e18e) popup_call2_audio_out_window_g3

0x0003,

0xf537,	// (0x0008ca3e) popup_call2_audio_out_window_g_ParamLimits

0xf537,	// (0x0008ca3e) popup_call2_audio_out_window_g

0x0cc2,	// (0x0007e1c9) popup_call2_audio_out_window_t1_ParamLimits

0x0cc2,	// (0x0007e1c9) popup_call2_audio_out_window_t1

0x0d21,	// (0x0007e228) popup_call2_audio_out_window_t2_ParamLimits

0x0d21,	// (0x0007e228) popup_call2_audio_out_window_t2

0x0d75,	// (0x0007e27c) popup_call2_audio_out_window_t3_ParamLimits

0x0d75,	// (0x0007e27c) popup_call2_audio_out_window_t3

0x0d8b,	// (0x0007e292) popup_call2_audio_out_window_t4_ParamLimits

0x0d8b,	// (0x0007e292) popup_call2_audio_out_window_t4

0x0da1,	// (0x0007e2a8) popup_call2_audio_out_window_t5_ParamLimits

0x0da1,	// (0x0007e2a8) popup_call2_audio_out_window_t5

0x0005,

0xf540,	// (0x0008ca47) popup_call2_audio_out_window_t_ParamLimits

0xf540,	// (0x0008ca47) popup_call2_audio_out_window_t

0x0e05,	// (0x0007e30c) bg_popup_call2_in_pane_ParamLimits

0x0e05,	// (0x0007e30c) bg_popup_call2_in_pane

0x0e61,	// (0x0007e368) popup_call2_audio_in_window_g1_ParamLimits

0x0e61,	// (0x0007e368) popup_call2_audio_in_window_g1

0x0e99,	// (0x0007e3a0) popup_call2_audio_in_window_g2_ParamLimits

0x0e99,	// (0x0007e3a0) popup_call2_audio_in_window_g2

0x0ed1,	// (0x0007e3d8) popup_call2_audio_in_window_g3_ParamLimits

0x0ed1,	// (0x0007e3d8) popup_call2_audio_in_window_g3

0x0003,

0xf54d,	// (0x0008ca54) popup_call2_audio_in_window_g_ParamLimits

0xf54d,	// (0x0008ca54) popup_call2_audio_in_window_g

0x0f29,	// (0x0007e430) popup_call2_audio_in_window_t1_ParamLimits

0x0f29,	// (0x0007e430) popup_call2_audio_in_window_t1

0x0fa9,	// (0x0007e4b0) popup_call2_audio_in_window_t2_ParamLimits

0x0fa9,	// (0x0007e4b0) popup_call2_audio_in_window_t2

0x1029,	// (0x0007e530) popup_call2_audio_in_window_t3_ParamLimits

0x1029,	// (0x0007e530) popup_call2_audio_in_window_t3

0x1043,	// (0x0007e54a) popup_call2_audio_in_window_t4_ParamLimits

0x1043,	// (0x0007e54a) popup_call2_audio_in_window_t4

0x1055,	// (0x0007e55c) popup_call2_audio_in_window_t5_ParamLimits

0x1055,	// (0x0007e55c) popup_call2_audio_in_window_t5

0x106a,	// (0x0007e571) popup_call2_audio_in_window_t6_ParamLimits

0x106a,	// (0x0007e571) popup_call2_audio_in_window_t6

0x0005,

0xf556,	// (0x0008ca5d) popup_call2_audio_in_window_t_ParamLimits

0xf556,	// (0x0008ca5d) popup_call2_audio_in_window_t

0xdd3a,	// (0x0008b241) bg_popup_call2_in_pane_g1

0x11c1,	// (0x0007e6c8) popup_cale_lunar_info_window_t4

0x0003,

0xf5d1,	// (0x0008cad8) popup_cale_lunar_info_window_t

0xdd42,	// (0x0008b249) bg_popup_call2_rect_pane_ParamLimits

0xdd42,	// (0x0008b249) bg_popup_call2_rect_pane

0xdae7,	// (0x0008afee) call2_cli_visual_graphic_pane

0xdae7,	// (0x0008afee) call2_cli_visual_text_pane

0x872e,	// (0x00085c35) smil_status_volume_pane_g3

0x0002,

0xde60,	// (0x0008b367) call2_cli_visual_graphic_pane_g1

0xde60,	// (0x0008b367) call2_cli_visual_graphic_pane_g2

0xde60,	// (0x0008b367) call2_cli_visual_graphic_pane_g3

0x0002,

0xf563,	// (0x0008ca6a) call2_cli_visual_graphic_pane_g

0x107f,	// (0x0007e586) bg_popup_call2_rect_pane_g1

0xdefe,	// (0x0008b405) bg_popup_call2_rect_pane_g2

0x1087,	// (0x0007e58e) bg_popup_call2_rect_pane_g3

0x108f,	// (0x0007e596) bg_popup_call2_rect_pane_g4

0x1097,	// (0x0007e59e) bg_popup_call2_rect_pane_g5

0x109f,	// (0x0007e5a6) bg_popup_call2_rect_pane_g6

0x10a7,	// (0x0007e5ae) bg_popup_call2_rect_pane_g7

0x10af,	// (0x0007e5b6) bg_popup_call2_rect_pane_g8

0x10b7,	// (0x0007e5be) bg_popup_call2_rect_pane_g9

0x0008,

0xf56a,	// (0x0008ca71) bg_popup_call2_rect_pane_g

0x10bf,	// (0x0007e5c6) bg_popup_call2_bubble_pane_g1

0x10c7,	// (0x0007e5ce) bg_popup_call2_bubble_pane_g2

0x10cf,	// (0x0007e5d6) bg_popup_call2_bubble_pane_g3

0x10d7,	// (0x0007e5de) bg_popup_call2_bubble_pane_g4

0x10df,	// (0x0007e5e6) bg_popup_call2_bubble_pane_g5

0x10e7,	// (0x0007e5ee) bg_popup_call2_bubble_pane_g6

0x10ef,	// (0x0007e5f6) bg_popup_call2_bubble_pane_g7

0x10f7,	// (0x0007e5fe) bg_popup_call2_bubble_pane_g8

0x10ff,	// (0x0007e606) bg_popup_call2_bubble_pane_g9

0x0008,

0xf57d,	// (0x0008ca84) bg_popup_call2_bubble_pane_g

0x5c77,	// (0x0008317e) aid_cale_week_size_cell_pane

0x6304,	// (0x0008380b) aid_cams_cif_uncrop_pane_ParamLimits

0x6304,	// (0x0008380b) aid_cams_cif_uncrop_pane

0x645c,	// (0x00083963) aid_cams_size_cell_ParamLimits

0x645c,	// (0x00083963) aid_cams_size_cell

0x6468,	// (0x0008396f) grid_cams_pane_ParamLimits

0x6474,	// (0x0008397b) linegrid_cams_pane_ParamLimits

0x6629,	// (0x00083b30) call_video_pane_t1

0x6646,	// (0x00083b4d) call_video_pane_t2

0x0001,

0xf26a,	// (0x0008c771) call_video_pane_t

0x6a28,	// (0x00083f2f) aid_cale_month_size_cell_pane_ParamLimits

0x6a28,	// (0x00083f2f) aid_cale_month_size_cell_pane

0xf61a,	// (0x0008cb21) smil_status_volume_pane_g

0x873b,	// (0x00085c42) volume_smil_pane_ParamLimits

0x54da,	// (0x000829e1) aid_popup2_width_pane

0x5b84,	// (0x0008308b) cell_qdial_pane_g4_ParamLimits

0x5b84,	// (0x0008308b) cell_qdial_pane_g4

0x78c9,	// (0x00084dd0) aid_blid_cardinal_pane_ParamLimits

0x78d5,	// (0x00084ddc) aid_blid_destination_pane_ParamLimits

0x78d5,	// (0x00084ddc) aid_blid_destination_pane

0xdd42,	// (0x0008b249) bg_popup_call_poc_act_pane_ParamLimits

0xdd42,	// (0x0008b249) bg_popup_call_poc_act_pane

0xdd42,	// (0x0008b249) bg_popup_call_poc_inact_pane_ParamLimits

0xdd42,	// (0x0008b249) bg_popup_call_poc_inact_pane

0x1107,	// (0x0007e60e) bg_popup_call_poc_act_pane_g1

0x110f,	// (0x0007e616) bg_popup_call_poc_act_pane_g2

0x1117,	// (0x0007e61e) bg_popup_call_poc_act_pane_g3

0x10d7,	// (0x0007e5de) bg_popup_call_poc_act_pane_g4

0x10df,	// (0x0007e5e6) bg_popup_call_poc_act_pane_g5

0x111f,	// (0x0007e626) bg_popup_call_poc_act_pane_g6

0x10ef,	// (0x0007e5f6) bg_popup_call_poc_act_pane_g7

0x1127,	// (0x0007e62e) bg_popup_call_poc_act_pane_g8

0xdae7,	// (0x0008afee) main_usb_pane

0x858a,	// (0x00085a91) popup_cale_lunar_info_window

0x68cb,	// (0x00083dd2) im_reading_pane_t1_ParamLimits

0xe12c,	// (0x0008b633) list_im_pane_ParamLimits

0xe13d,	// (0x0008b644) scroll_pane_cp07_ParamLimits

0xdae7,	// (0x0008afee) grid_highlight_pane_cp012

0xdd42,	// (0x0008b249) mup_scale_pane_ParamLimits

0xe69f,	// (0x0008bba6) main_usb_pane_g1_ParamLimits

0xe69f,	// (0x0008bba6) main_usb_pane_g1

0x8338,	// (0x0008583f) main_usb_pane_g2_ParamLimits

0x8338,	// (0x0008583f) main_usb_pane_g2

0x0001,

0xf5ba,	// (0x0008cac1) main_usb_pane_g_ParamLimits

0xf5ba,	// (0x0008cac1) main_usb_pane_g

0x8344,	// (0x0008584b) main_usb_pane_t1_ParamLimits

0x8344,	// (0x0008584b) main_usb_pane_t1

0x8356,	// (0x0008585d) main_usb_pane_t2_ParamLimits

0x8356,	// (0x0008585d) main_usb_pane_t2

0x8368,	// (0x0008586f) main_usb_pane_t3_ParamLimits

0x8368,	// (0x0008586f) main_usb_pane_t3

0x837a,	// (0x00085881) main_usb_pane_t4_ParamLimits

0x837a,	// (0x00085881) main_usb_pane_t4

0x838c,	// (0x00085893) main_usb_pane_t5_ParamLimits

0x838c,	// (0x00085893) main_usb_pane_t5

0x839e,	// (0x000858a5) main_usb_pane_t6_ParamLimits

0x839e,	// (0x000858a5) main_usb_pane_t6

0x0005,

0xf5bf,	// (0x0008cac6) main_usb_pane_t_ParamLimits

0xe8aa,	// (0x0008bdb1) aid_text_placing

0x7875,	// (0x00084d7c) main_location2_pane_t1_ParamLimits

0x788b,	// (0x00084d92) main_location2_pane_t2_ParamLimits

0x78a1,	// (0x00084da8) main_location2_pane_t3_ParamLimits

0x78b7,	// (0x00084dbe) main_location2_pane_t4_ParamLimits

0x78b7,	// (0x00084dbe) main_location2_pane_t4

0xf3cb,	// (0x0008c8d2) main_location2_pane_t_ParamLimits

0xdd7e,	// (0x0008b285) find_pinb_pane_g2_ParamLimits

0xdd7e,	// (0x0008b285) find_pinb_pane_g2

0x0001,

0xf11b,	// (0x0008c622) find_pinb_pane_g_ParamLimits

0xf11b,	// (0x0008c622) find_pinb_pane_g

0xdd8a,	// (0x0008b291) find_pinb_pane_t1_ParamLimits

0xdd9c,	// (0x0008b2a3) find_pinb_pane_t2_ParamLimits

0xf120,	// (0x0008c627) find_pinb_pane_t_ParamLimits

0xdae7,	// (0x0008afee) main_call3_pane

0x6dcc,	// (0x000842d3) cale_month_day_heading_pane_t1_ParamLimits

0x6e52,	// (0x00084359) cale_month_day_heading_pane_t2_ParamLimits

0x6ee3,	// (0x000843ea) cale_month_day_heading_pane_t3_ParamLimits

0x6f74,	// (0x0008447b) cale_month_day_heading_pane_t4_ParamLimits

0x7005,	// (0x0008450c) cale_month_day_heading_pane_t5_ParamLimits

0x7096,	// (0x0008459d) cale_month_day_heading_pane_t6_ParamLimits

0x7127,	// (0x0008462e) cale_month_day_heading_pane_t7_ParamLimits

0xf2a2,	// (0x0008c7a9) cale_month_day_heading_pane_t_ParamLimits

0x7471,	// (0x00084978) smil_status_volume_pane

0x7f99,	// (0x000854a0) postcard_address_pane_ParamLimits

0x7f99,	// (0x000854a0) postcard_address_pane

0x7fa5,	// (0x000854ac) postcard_message_pane_ParamLimits

0x7fa5,	// (0x000854ac) postcard_message_pane

0x8314,	// (0x0008581b) call2_cli_visual_pane_t1_ParamLimits

0x8314,	// (0x0008581b) call2_cli_visual_pane_t1

0x888c,	// (0x00085d93) postcard_message_pane_t1_ParamLimits

0x888c,	// (0x00085d93) postcard_message_pane_t1

0x8875,	// (0x00085d7c) postcard_address_pane_t1_ParamLimits

0x8875,	// (0x00085d7c) postcard_address_pane_t1

0x8868,	// (0x00085d6f) popup_call3_audio_in_window_ParamLimits

0x8868,	// (0x00085d6f) popup_call3_audio_in_window

0x8750,	// (0x00085c57) bg_popup_call3_in_pane_ParamLimits

0x8750,	// (0x00085c57) bg_popup_call3_in_pane

0x87ae,	// (0x00085cb5) popup_call3_audio_in_window_g1_ParamLimits

0x87ae,	// (0x00085cb5) popup_call3_audio_in_window_g1

0x87c6,	// (0x00085ccd) popup_call3_audio_in_window_g2_ParamLimits

0x87c6,	// (0x00085ccd) popup_call3_audio_in_window_g2

0x87de,	// (0x00085ce5) popup_call3_audio_in_window_g3_ParamLimits

0x87de,	// (0x00085ce5) popup_call3_audio_in_window_g3

0x0003,

0xf621,	// (0x0008cb28) popup_call3_audio_in_window_g_ParamLimits

0xf621,	// (0x0008cb28) popup_call3_audio_in_window_g

0x8806,	// (0x00085d0d) popup_call3_audio_in_window_t1_ParamLimits

0x8806,	// (0x00085d0d) popup_call3_audio_in_window_t1

0x882e,	// (0x00085d35) popup_call3_audio_in_window_t2_ParamLimits

0x882e,	// (0x00085d35) popup_call3_audio_in_window_t2

0x8856,	// (0x00085d5d) popup_call3_audio_in_window_t3_ParamLimits

0x8856,	// (0x00085d5d) popup_call3_audio_in_window_t3

0x0002,

0xf62a,	// (0x0008cb31) popup_call3_audio_in_window_t_ParamLimits

0xf62a,	// (0x0008cb31) popup_call3_audio_in_window_t

0xdfe2,	// (0x0008b4e9) bg_popup_call3_rect_pane

0x107f,	// (0x0007e586) bg_popup_call3_rect_pane_g1

0xdefe,	// (0x0008b405) bg_popup_call3_rect_pane_g2

0x1087,	// (0x0007e58e) bg_popup_call3_rect_pane_g3

0x108f,	// (0x0007e596) bg_popup_call3_rect_pane_g4

0x1097,	// (0x0007e59e) bg_popup_call3_rect_pane_g5

0x109f,	// (0x0007e5a6) bg_popup_call3_rect_pane_g6

0x10a7,	// (0x0007e5ae) bg_popup_call3_rect_pane_g7

0x7c02,	// (0x00085109) mup_visualizer_osc_pane

0xeac7,	// (0x0008bfce) mup_visualizer_spec_pane

0x8770,	// (0x00085c77) call3_video_qcif_pane_ParamLimits

0x8770,	// (0x00085c77) call3_video_qcif_pane

0x8780,	// (0x00085c87) call3_video_qcif_uncrop_pane_ParamLimits

0x8780,	// (0x00085c87) call3_video_qcif_uncrop_pane

0x878c,	// (0x00085c93) call3_video_subqcif_pane_ParamLimits

0x878c,	// (0x00085c93) call3_video_subqcif_pane

0x879e,	// (0x00085ca5) call3_video_subqcif_uncrop_pane_ParamLimits

0x879e,	// (0x00085ca5) call3_video_subqcif_uncrop_pane

0x87f6,	// (0x00085cfd) popup_call3_audio_in_window_g4_ParamLimits

0x87f6,	// (0x00085cfd) popup_call3_audio_in_window_g4

0x871d,	// (0x00085c24) mup_spec_half_pane

0x8726,	// (0x00085c2d) mup_spec_half_pane_cp

0x137e,	// (0x0007e885) mup_osc_middle_pane

0x1387,	// (0x0007e88e) mup_visualizer_osc_pane_g1

0x86fe,	// (0x00085c05) mup_spec_bar_pane_ParamLimits

0x86fe,	// (0x00085c05) mup_spec_bar_pane

0x136b,	// (0x0007e872) mup_spec_bar_pane_g1

0x1375,	// (0x0007e87c) mup_spec_bar_pane_g2

0x0001,

0xf615,	// (0x0008cb1c) mup_spec_bar_pane_g

0x5c77,	// (0x0008317e) aid_cale_week_size_cell_pane_ParamLimits

0x5c8c,	// (0x00083193) bg_cale_heading_pane_ParamLimits

0xdf3c,	// (0x0008b443) bg_cale_pane_cp01_ParamLimits

0x5ca4,	// (0x000831ab) cale_week_corner_pane_ParamLimits

0x5cbe,	// (0x000831c5) cale_week_day_heading_pane_ParamLimits

0x5cd6,	// (0x000831dd) cale_week_scroll_pane_g1_ParamLimits

0x5ce9,	// (0x000831f0) cale_week_scroll_pane_g2_ParamLimits

0x5cfc,	// (0x00083203) cale_week_scroll_pane_g3_ParamLimits

0x5d0f,	// (0x00083216) cale_week_scroll_pane_g4_ParamLimits

0x5d22,	// (0x00083229) cale_week_scroll_pane_g5_ParamLimits

0x5d35,	// (0x0008323c) cale_week_scroll_pane_g6_ParamLimits

0x5d48,	// (0x0008324f) cale_week_scroll_pane_g7_ParamLimits

0x5d5b,	// (0x00083262) cale_week_scroll_pane_g8_ParamLimits

0x5d6e,	// (0x00083275) cale_week_scroll_pane_g9_ParamLimits

0x5d81,	// (0x00083288) cale_week_scroll_pane_g10_ParamLimits

0x5d94,	// (0x0008329b) cale_week_scroll_pane_g11_ParamLimits

0x5da7,	// (0x000832ae) cale_week_scroll_pane_g12_ParamLimits

0x5dba,	// (0x000832c1) cale_week_scroll_pane_g13_ParamLimits

0x5dcd,	// (0x000832d4) cale_week_scroll_pane_g14_ParamLimits

0x5de0,	// (0x000832e7) cale_week_scroll_pane_g15_ParamLimits

0xf1ac,	// (0x0008c6b3) cale_week_scroll_pane_g_ParamLimits

0x5e06,	// (0x0008330d) cale_week_time_pane_ParamLimits

0x5e19,	// (0x00083320) grid_cale_week_pane_ParamLimits

0xdf59,	// (0x0008b460) listscroll_cale_week_pane_t1

0xdf6b,	// (0x0008b472) scroll_pane_cp08_ParamLimits

0x6a7d,	// (0x00083f84) cale_month_corner_pane_ParamLimits

0xe36d,	// (0x0008b874) cale_month_pane_t1

0x6d93,	// (0x0008429a) cale_month_week_pane_ParamLimits

0xe69f,	// (0x0008bba6) popup_call_status_window_g1_ParamLimits

0x76ac,	// (0x00084bb3) popup_call_status_window_g2_ParamLimits

0x76b8,	// (0x00084bbf) popup_call_status_window_g3_ParamLimits

0xf352,	// (0x0008c859) popup_call_status_window_g_ParamLimits

0xe6f0,	// (0x0008bbf7) aid_call2_pane

0x7e06,	// (0x0008530d) msg_header_pane_g1

0x7f99,	// (0x000854a0) postcard_address2_pane_ParamLimits

0x7f99,	// (0x000854a0) postcard_address2_pane

0x7fa5,	// (0x000854ac) postcard_message2_pane_ParamLimits

0x7fa5,	// (0x000854ac) postcard_message2_pane

0x86b5,	// (0x00085bbc) message2_row_pane_ParamLimits

0x86b5,	// (0x00085bbc) message2_row_pane

0x86cd,	// (0x00085bd4) address2_row_pane_ParamLimits

0x86cd,	// (0x00085bd4) address2_row_pane

0x1339,	// (0x0007e840) postcard_message2_row_pane_g1

0x1341,	// (0x0007e848) postcard_message2_row_pane_t1

0x1339,	// (0x0007e840) address2_row_pane_g1

0x1341,	// (0x0007e848) address2_row_pane_t1

0xdfda,	// (0x0008b4e1) aid_size_cell_vorec

0xdae7,	// (0x0008afee) main_rss_pane

0x86e0,	// (0x00085be7) rss_list_single_pane_ParamLimits

0x86e0,	// (0x00085be7) rss_list_single_pane

0x134f,	// (0x0007e856) rss_list_single_pane_t1

0x135d,	// (0x0007e864) rss_list_single_pane_t2

0x0001,

0xf610,	// (0x0008cb17) rss_list_single_pane_t

0xdae7,	// (0x0008afee) main_camera2_pane

0xdae7,	// (0x0008afee) main_video2_pane

0x88dc,	// (0x00085de3) cams_zoom_pane_cp2_ParamLimits

0x88dc,	// (0x00085de3) cams_zoom_pane_cp2

0x88e8,	// (0x00085def) image2_vga_pane_ParamLimits

0x88e8,	// (0x00085def) image2_vga_pane

0x88f7,	// (0x00085dfe) main_camera2_pane_g1_ParamLimits

0x88f7,	// (0x00085dfe) main_camera2_pane_g1

0x8903,	// (0x00085e0a) main_camera2_pane_g2_ParamLimits

0x8903,	// (0x00085e0a) main_camera2_pane_g2

0x890f,	// (0x00085e16) main_camera2_pane_g3_ParamLimits

0x890f,	// (0x00085e16) main_camera2_pane_g3

0x891b,	// (0x00085e22) main_camera2_pane_g4_ParamLimits

0x891b,	// (0x00085e22) main_camera2_pane_g4

0x8927,	// (0x00085e2e) main_camera2_pane_g5_ParamLimits

0x8927,	// (0x00085e2e) main_camera2_pane_g5

0x8933,	// (0x00085e3a) main_camera2_pane_g6_ParamLimits

0x8933,	// (0x00085e3a) main_camera2_pane_g6

0x893f,	// (0x00085e46) main_camera2_pane_g7_ParamLimits

0x893f,	// (0x00085e46) main_camera2_pane_g7

0x894b,	// (0x00085e52) main_camera2_pane_g8_ParamLimits

0x894b,	// (0x00085e52) main_camera2_pane_g8

0x0008,

0xf631,	// (0x0008cb38) main_camera2_pane_g_ParamLimits

0xf631,	// (0x0008cb38) main_camera2_pane_g

0x8963,	// (0x00085e6a) main_camera2_pane_t1_ParamLimits

0x8963,	// (0x00085e6a) main_camera2_pane_t1

0x8975,	// (0x00085e7c) main_camera2_pane_t2_ParamLimits

0x8975,	// (0x00085e7c) main_camera2_pane_t2

0x8987,	// (0x00085e8e) main_camera2_pane_t3_ParamLimits

0x8987,	// (0x00085e8e) main_camera2_pane_t3

0x8999,	// (0x00085ea0) main_camera2_pane_t4_ParamLimits

0x8999,	// (0x00085ea0) main_camera2_pane_t4

0x0006,

0xf644,	// (0x0008cb4b) main_camera2_pane_t_ParamLimits

0xf644,	// (0x0008cb4b) main_camera2_pane_t

0x89f4,	// (0x00085efb) cams_zoom_pane_cp4_ParamLimits

0x89f4,	// (0x00085efb) cams_zoom_pane_cp4

0x8a04,	// (0x00085f0b) image2_cif_pane_ParamLimits

0x8a04,	// (0x00085f0b) image2_cif_pane

0x8a15,	// (0x00085f1c) image2_subqcif_pane_ParamLimits

0x8a15,	// (0x00085f1c) image2_subqcif_pane

0x8a22,	// (0x00085f29) main_video2_pane_g1_ParamLimits

0x8a22,	// (0x00085f29) main_video2_pane_g1

0x8a34,	// (0x00085f3b) main_video2_pane_g2_ParamLimits

0x8a34,	// (0x00085f3b) main_video2_pane_g2

0x8a44,	// (0x00085f4b) main_video2_pane_g3_ParamLimits

0x8a44,	// (0x00085f4b) main_video2_pane_g3

0x8a54,	// (0x00085f5b) main_video2_pane_g4_ParamLimits

0x8a54,	// (0x00085f5b) main_video2_pane_g4

0x8a64,	// (0x00085f6b) main_video2_pane_g5_ParamLimits

0x8a64,	// (0x00085f6b) main_video2_pane_g5

0x8a74,	// (0x00085f7b) main_video2_pane_g6_ParamLimits

0x8a74,	// (0x00085f7b) main_video2_pane_g6

0x0005,

0xf653,	// (0x0008cb5a) main_video2_pane_g_ParamLimits

0xf653,	// (0x0008cb5a) main_video2_pane_g

0x8a86,	// (0x00085f8d) main_video2_pane_t1_ParamLimits

0x8a86,	// (0x00085f8d) main_video2_pane_t1

0x8aa0,	// (0x00085fa7) main_video2_pane_t2_ParamLimits

0x8aa0,	// (0x00085fa7) main_video2_pane_t2

0x8ac6,	// (0x00085fcd) main_video2_pane_t3_ParamLimits

0x8ac6,	// (0x00085fcd) main_video2_pane_t3

0x0002,

0xf660,	// (0x0008cb67) main_video2_pane_t_ParamLimits

0xf660,	// (0x0008cb67) main_video2_pane_t

0x844d,	// (0x00085954) call_muted_g2

0x0001,

0xf602,	// (0x0008cb09) call_muted_g

0xdae7,	// (0x0008afee) main_mup2_pane

0x1439,	// (0x0007e940) main_mup2_pane_g1_ParamLimits

0x1439,	// (0x0007e940) main_mup2_pane_g1

0x8aec,	// (0x00085ff3) main_mup2_pane_g2_ParamLimits

0x8aec,	// (0x00085ff3) main_mup2_pane_g2

0x8d5c,	// (0x00086263) main_mup_pane_g13_cp1

0x8d64,	// (0x0008626b) mup_volume_pane_cp1

0x8b0c,	// (0x00086013) main_mup2_pane_g4_ParamLimits

0x8b0c,	// (0x00086013) main_mup2_pane_g4

0x8b1d,	// (0x00086024) main_mup2_pane_g5_ParamLimits

0x8b1d,	// (0x00086024) main_mup2_pane_g5

0x8b2e,	// (0x00086035) main_mup2_pane_g6_ParamLimits

0x8b2e,	// (0x00086035) main_mup2_pane_g6

0x8b3f,	// (0x00086046) main_mup2_pane_g7_ParamLimits

0x8b3f,	// (0x00086046) main_mup2_pane_g7

0x0006,

0xf667,	// (0x0008cb6e) main_mup2_pane_g_ParamLimits

0xf667,	// (0x0008cb6e) main_mup2_pane_g

0x8b5b,	// (0x00086062) main_mup2_pane_t1_ParamLimits

0x8b5b,	// (0x00086062) main_mup2_pane_t1

0x8b72,	// (0x00086079) main_mup2_pane_t2_ParamLimits

0x8b72,	// (0x00086079) main_mup2_pane_t2

0x8b89,	// (0x00086090) main_mup2_pane_t3_ParamLimits

0x8b89,	// (0x00086090) main_mup2_pane_t3

0x8ba0,	// (0x000860a7) main_mup2_pane_t4_ParamLimits

0x8ba0,	// (0x000860a7) main_mup2_pane_t4

0x8bba,	// (0x000860c1) main_mup2_pane_t5_ParamLimits

0x8bba,	// (0x000860c1) main_mup2_pane_t5

0x8bd4,	// (0x000860db) main_mup2_pane_t6_ParamLimits

0x8bd4,	// (0x000860db) main_mup2_pane_t6

0x0005,

0xf676,	// (0x0008cb7d) main_mup2_pane_t_ParamLimits

0xf676,	// (0x0008cb7d) main_mup2_pane_t

0x8c0c,	// (0x00086113) mup2_visualizer_pane_ParamLimits

0x8c0c,	// (0x00086113) mup2_visualizer_pane

0x8c3e,	// (0x00086145) mup_progress_pane_cp_ParamLimits

0x8c3e,	// (0x00086145) mup_progress_pane_cp

0x8d47,	// (0x0008624e) mup_volume_pane_cp_ParamLimits

0x8d47,	// (0x0008624e) mup_volume_pane_cp

0x8c55,	// (0x0008615c) mup2_visualizer_pane_g1_ParamLimits

0x8c55,	// (0x0008615c) mup2_visualizer_pane_g1

0x140b,	// (0x0007e912) mup2_visualizer_pane_g2_ParamLimits

0x140b,	// (0x0007e912) mup2_visualizer_pane_g2

0x8c6a,	// (0x00086171) mup2_visualizer_pane_g3_ParamLimits

0x8c6a,	// (0x00086171) mup2_visualizer_pane_g3

0x0002,

0xf683,	// (0x0008cb8a) mup2_visualizer_pane_g_ParamLimits

0xf683,	// (0x0008cb8a) mup2_visualizer_pane_g

0xdfda,	// (0x0008b4e1) aid_size_cell_fmradio

0x852f,	// (0x00085a36) aid_height_parent_landcape

0xe1ca,	// (0x0008b6d1) wml_content_pane_cp

0xe1d2,	// (0x0008b6d9) wml_tabs_pane

0xe1db,	// (0x0008b6e2) popup_wml_miniature_window

0xe1e3,	// (0x0008b6ea) scroll_pane_cp021

0xe1f7,	// (0x0008b6fe) wml_content_pane_comp8

0xdae7,	// (0x0008afee) bg_popup_sub_pane_cp05

0x1429,	// (0x0007e930) popup_wml_miniature_window_g1

0x1431,	// (0x0007e938) wml_miniature_view_pane

0x8c76,	// (0x0008617d) aid_size_wml_view

0x8c7e,	// (0x00086185) wml_miniature_view_pane_g1

0x8c87,	// (0x0008618e) wml_miniature_view_pane_g2

0x8c90,	// (0x00086197) wml_miniature_view_pane_g3

0x8c98,	// (0x0008619f) wml_miniature_view_pane_g4

0x8ca0,	// (0x000861a7) wml_miniature_view_pane_g5

0x8ca8,	// (0x000861af) wml_miniature_view_pane_g6

0x8cb0,	// (0x000861b7) wml_miniature_view_pane_g7

0x8cb8,	// (0x000861bf) wml_miniature_view_pane_g8

0x0007,

0xf68a,	// (0x0008cb91) wml_miniature_view_pane_g

0x1439,	// (0x0007e940) background_graphic_ParamLimits

0x1439,	// (0x0007e940) background_graphic

0x1445,	// (0x0007e94c) wml_tabs_2_pane

0x144e,	// (0x0007e955) wml_tabs_3_pane_ParamLimits

0x144e,	// (0x0007e955) wml_tabs_3_pane

0x1460,	// (0x0007e967) wml_tabs_4_pane_ParamLimits

0x1460,	// (0x0007e967) wml_tabs_4_pane

0x1476,	// (0x0007e97d) wml_tabs_5_pane_ParamLimits

0x1476,	// (0x0007e97d) wml_tabs_5_pane

0x1490,	// (0x0007e997) wml_tabs_pane_g2_ParamLimits

0x1490,	// (0x0007e997) wml_tabs_pane_g2

0x14a4,	// (0x0007e9ab) wml_tabs_pane_g3_ParamLimits

0x14a4,	// (0x0007e9ab) wml_tabs_pane_g3

0x8cc0,	// (0x000861c7) wml_tabs_2_active_pane_ParamLimits

0x8cc0,	// (0x000861c7) wml_tabs_2_active_pane

0x8cd0,	// (0x000861d7) wml_tabs_2_passive_pane_ParamLimits

0x8cd0,	// (0x000861d7) wml_tabs_2_passive_pane

0x8ce0,	// (0x000861e7) wml_tabs_3_active_pane_cp_ParamLimits

0x8ce0,	// (0x000861e7) wml_tabs_3_active_pane_cp

0x8cf1,	// (0x000861f8) wml_tabs_3_passive_pane_ParamLimits

0x8cf1,	// (0x000861f8) wml_tabs_3_passive_pane

0x8d02,	// (0x00086209) wml_tabs_3_passive_pane_cp_ParamLimits

0x8d02,	// (0x00086209) wml_tabs_3_passive_pane_cp

0x8d13,	// (0x0008621a) tabs_4_active_pane

0x8d1b,	// (0x00086222) tabs_4_passive_pane

0x8d23,	// (0x0008622a) tabs_4_passive_pane_cp

0x8d2b,	// (0x00086232) tabs_4_passive_pane_cp2

0x8330,	// (0x00085837) aid_height_text

0x7bcf,	// (0x000850d6) mup_volume_cont_pane_ParamLimits

0x7bcf,	// (0x000850d6) mup_volume_cont_pane

0x5836,	// (0x00082d3d) aid_size_cell_pinb

0x5840,	// (0x00082d47) aid_size_list_pinb

0x8c27,	// (0x0008612e) mup2_volume_cont_pane_ParamLimits

0x8c27,	// (0x0008612e) mup2_volume_cont_pane

0x8d33,	// (0x0008623a) mup2_volume_cont_pane_g1_ParamLimits

0x8d33,	// (0x0008623a) mup2_volume_cont_pane_g1

0x54e2,	// (0x000829e9) aid_size_cell_touch_ParamLimits

0x54e2,	// (0x000829e9) aid_size_cell_touch

0x5736,	// (0x00082c3d) touch_pane_ParamLimits

0x5736,	// (0x00082c3d) touch_pane

0x572c,	// (0x00082c33) main_rss2_pane

0x14fa,	// (0x0007ea01) listscroll_rss2_pane

0x1503,	// (0x0007ea0a) rss2_navigation_pane

0x150b,	// (0x0007ea12) list_rss2_pane

0xe827,	// (0x0008bd2e) scroll_pane_cp22

0x1513,	// (0x0007ea1a) rss2_navigation_pane_g1

0x151c,	// (0x0007ea23) rss2_navigation_pane_g2

0x1524,	// (0x0007ea2b) rss2_navigation_pane_g3

0x0002,

0xf69b,	// (0x0008cba2) rss2_navigation_pane_g

0x152c,	// (0x0007ea33) rss2_navigation_pane_t1

0x8d6c,	// (0x00086273) rss2_list_single_pane_ParamLimits

0x8d6c,	// (0x00086273) rss2_list_single_pane

0x153a,	// (0x0007ea41) rss2_list_single_pane_t2

0x1548,	// (0x0007ea4f) rss2_list_single_pane_t3_ParamLimits

0x1548,	// (0x0007ea4f) rss2_list_single_pane_t3

0x1565,	// (0x0007ea6c) rss2_list_single_pane_t4

0x745b,	// (0x00084962) smil_status_pane_g1

0x8539,	// (0x00085a40) main_image2_pane_ParamLimits

0x8539,	// (0x00085a40) main_image2_pane

0x8957,	// (0x00085e5e) main_camera2_pane_g9_ParamLimits

0x8957,	// (0x00085e5e) main_camera2_pane_g9

0x89ab,	// (0x00085eb2) main_camera2_pane_t5_ParamLimits

0x89ab,	// (0x00085eb2) main_camera2_pane_t5

0x89bd,	// (0x00085ec4) main_camera2_pane_t6_ParamLimits

0x89bd,	// (0x00085ec4) main_camera2_pane_t6

0x8d83,	// (0x0008628a) main_image2_pane_g1_ParamLimits

0x8d83,	// (0x0008628a) main_image2_pane_g1

0x8145,	// (0x0008564c) smil2_video_pane_ParamLimits

0x8145,	// (0x0008564c) smil2_video_pane

0x5512,	// (0x00082a19) aid_zoom_text_primary_cp

0x56cd,	// (0x00082bd4) popup_preview_fixed_window

0xe124,	// (0x0008b62b) im_reading_pane_g1

0x88b3,	// (0x00085dba) cams2_bc_adjust_pane_cp_ParamLimits

0x88b3,	// (0x00085dba) cams2_bc_adjust_pane_cp

0x89e8,	// (0x00085eef) cams2_bc_adjust_pane_ParamLimits

0x89e8,	// (0x00085eef) cams2_bc_adjust_pane

0x2549,	// (0x0007fa50) cams2_bc_adjust_pane_g1

0x8d8f,	// (0x00086296) cams2_slider_pane

0x8d98,	// (0x0008629f) cams2_slider_pane_g1

0x8da1,	// (0x000862a8) cams2_slider_pane_g2

0x0006,

0xf6a2,	// (0x0008cba9) cams2_slider_pane_g

0x591f,	// (0x00082e26) calc_display_pane_ParamLimits

0x5937,	// (0x00082e3e) calc_paper_pane_ParamLimits

0x5953,	// (0x00082e5a) grid_calc_pane_ParamLimits

0x772a,	// (0x00084c31) popup_clock_digital_window_t1_ParamLimits

0xec8b,	// (0x0008c192) main_image_pane_t1

0x5905,	// (0x00082e0c) aid_size_cell_calc_ParamLimits

0x5905,	// (0x00082e0c) aid_size_cell_calc

0x856a,	// (0x00085a71) popup_blid_sat_info2_window_ParamLimits

0x856a,	// (0x00085a71) popup_blid_sat_info2_window

0x15af,	// (0x0007eab6) aid_size_cell_blid

0x15b7,	// (0x0007eabe) bg_popup_window_pane_cp07

0x15da,	// (0x0007eae1) grid_popup_blid_pane

0x15e2,	// (0x0007eae9) heading_pane_cp05_ParamLimits

0x15e2,	// (0x0007eae9) heading_pane_cp05

0x16aa,	// (0x0007ebb1) cell_popup_blid_pane_ParamLimits

0x16aa,	// (0x0007ebb1) cell_popup_blid_pane

0x16ca,	// (0x0007ebd1) cell_popup_blid_pane_g1

0x16d2,	// (0x0007ebd9) cell_popup_blid_pane_t1

0x8bf1,	// (0x000860f8) mup2_indicator_pane_ParamLimits

0x8bf1,	// (0x000860f8) mup2_indicator_pane

0xdfe2,	// (0x0008b4e9) mup2_visualizer_osc_pane

0x1417,	// (0x0007e91e) mup2_visualizer_spec_pane_ParamLimits

0x1417,	// (0x0007e91e) mup2_visualizer_spec_pane

0x8dbb,	// (0x000862c2) mup2_spec_half_pane

0x8dc4,	// (0x000862cb) mup2_spec_half_pane_cp

0x8dcc,	// (0x000862d3) mup2_spec_bar_pane_ParamLimits

0x8dcc,	// (0x000862d3) mup2_spec_bar_pane

0x136b,	// (0x0007e872) mup2_spec_bar_pane_g1

0x1375,	// (0x0007e87c) mup2_spec_bar_pane_g2

0x0001,

0xf615,	// (0x0008cb1c) mup2_spec_bar_pane_g

0x8deb,	// (0x000862f2) mup2_osc_middle_pane

0x1387,	// (0x0007e88e) mup2_visualizer_osc_pane_g1

0xd6f6,	// (0x0008abfd) popup_number_entry_window_t1_ParamLimits

0xd709,	// (0x0008ac10) popup_number_entry_window_t2_ParamLimits

0xd71b,	// (0x0008ac22) popup_number_entry_window_t3_ParamLimits

0x5783,	// (0x00082c8a) popup_number_entry_window_t5_ParamLimits

0x5783,	// (0x00082c8a) popup_number_entry_window_t5

0xf0c6,	// (0x0008c5cd) popup_number_entry_window_t_ParamLimits

0xd72d,	// (0x0008ac34) text_title_cp2_ParamLimits

0x7e83,	// (0x0008538a) aid_hotspot_pointer_text2_pane

0x7f15,	// (0x0008541c) main_viewer_pane_g9_ParamLimits

0x7f15,	// (0x0008541c) main_viewer_pane_g9

0xe36d,	// (0x0008b874) cale_month_pane_t1_ParamLimits

0xe393,	// (0x0008b89a) bg_cale_pane_ParamLimits

0xe3ab,	// (0x0008b8b2) list_cale_pane_ParamLimits

0xe3bc,	// (0x0008b8c3) listscroll_cale_day_pane_t1

0xe3ce,	// (0x0008b8d5) scroll_pane_cp09_ParamLimits

0x7c0a,	// (0x00085111) main_mup_eq_pane_t1_ParamLimits

0x7c0a,	// (0x00085111) main_mup_eq_pane_t1

0x7c20,	// (0x00085127) main_mup_eq_pane_t2_ParamLimits

0x7c20,	// (0x00085127) main_mup_eq_pane_t2

0x7c36,	// (0x0008513d) main_mup_eq_pane_t3_ParamLimits

0x7c36,	// (0x0008513d) main_mup_eq_pane_t3

0x7c4c,	// (0x00085153) main_mup_eq_pane_t4_ParamLimits

0x7c4c,	// (0x00085153) main_mup_eq_pane_t4

0x7c62,	// (0x00085169) main_mup_eq_pane_t5_ParamLimits

0x7c62,	// (0x00085169) main_mup_eq_pane_t5

0x7c78,	// (0x0008517f) main_mup_eq_pane_t6_ParamLimits

0x7c78,	// (0x0008517f) main_mup_eq_pane_t6

0x7c8a,	// (0x00085191) main_mup_eq_pane_t7_ParamLimits

0x7c8a,	// (0x00085191) main_mup_eq_pane_t7

0x7c9c,	// (0x000851a3) main_mup_eq_pane_t8_ParamLimits

0x7c9c,	// (0x000851a3) main_mup_eq_pane_t8

0x7cae,	// (0x000851b5) main_mup_eq_pane_t9_ParamLimits

0x7cae,	// (0x000851b5) main_mup_eq_pane_t9

0x7cc4,	// (0x000851cb) main_mup_eq_pane_t10_ParamLimits

0x7cc4,	// (0x000851cb) main_mup_eq_pane_t10

0x0009,

0xf451,	// (0x0008c958) main_mup_eq_pane_t_ParamLimits

0xf451,	// (0x0008c958) main_mup_eq_pane_t

0x7d57,	// (0x0008525e) mup_equalizer_pane_cp5_ParamLimits

0x7d69,	// (0x00085270) mup_equalizer_pane_cp6_ParamLimits

0x7d7b,	// (0x00085282) mup_equalizer_pane_cp7_ParamLimits

0x572c,	// (0x00082c33) main_gallery_pane

0x1390,	// (0x0007e897) smil2_volume_pane

0x13ab,	// (0x0007e8b2) smil_status_volume_pane_g1_ParamLimits

0x1398,	// (0x0007e89f) smil_status_volume_pane_g2_ParamLimits

0x872e,	// (0x00085c35) smil_status_volume_pane_g3_ParamLimits

0xf61a,	// (0x0008cb21) smil_status_volume_pane_g_ParamLimits

0x15b7,	// (0x0007eabe) bg_popup_window_pane_cp07_ParamLimits

0x15c5,	// (0x0007eacc) blid_firmament_pane

0x8df4,	// (0x000862fb) aid_size_cell_gallery_ParamLimits

0x8df4,	// (0x000862fb) aid_size_cell_gallery

0x8e02,	// (0x00086309) grid_gallery_pane_ParamLimits

0x8e02,	// (0x00086309) grid_gallery_pane

0x8e0e,	// (0x00086315) cell_gallery_pane_ParamLimits

0x8e0e,	// (0x00086315) cell_gallery_pane

0x16e0,	// (0x0007ebe7) bg_cell_gallery_focus_pane_ParamLimits

0x16e0,	// (0x0007ebe7) bg_cell_gallery_focus_pane

0x16f2,	// (0x0007ebf9) cell_gallery_pane_g1_ParamLimits

0x16f2,	// (0x0007ebf9) cell_gallery_pane_g1

0x8e4d,	// (0x00086354) cell_gallery_pane_g2_ParamLimits

0x8e4d,	// (0x00086354) cell_gallery_pane_g2

0x8e5a,	// (0x00086361) cell_gallery_pane_g3_ParamLimits

0x8e5a,	// (0x00086361) cell_gallery_pane_g3

0x16fe,	// (0x0007ec05) cell_gallery_pane_g4_ParamLimits

0x16fe,	// (0x0007ec05) cell_gallery_pane_g4

0x0003,

0xf6c8,	// (0x0008cbcf) cell_gallery_pane_g_ParamLimits

0xf6c8,	// (0x0008cbcf) cell_gallery_pane_g

0x170a,	// (0x0007ec11) bg_cell_gallery_focus_pane_g1

0x1712,	// (0x0007ec19) bg_cell_gallery_focus_pane_g2

0x171a,	// (0x0007ec21) bg_cell_gallery_focus_pane_g3

0x1722,	// (0x0007ec29) bg_cell_gallery_focus_pane_g4

0x172a,	// (0x0007ec31) bg_cell_gallery_focus_pane_g5

0x1732,	// (0x0007ec39) bg_cell_gallery_focus_pane_g6

0x173a,	// (0x0007ec41) bg_cell_gallery_focus_pane_g7

0x1742,	// (0x0007ec49) bg_cell_gallery_focus_pane_g8

0x0007,

0xf6d1,	// (0x0008cbd8) bg_cell_gallery_focus_pane_g

0x174a,	// (0x0007ec51) aid_firma_cardinal

0x175e,	// (0x0007ec65) blid_firmament_pane_t1

0x1775,	// (0x0007ec7c) blid_firmament_pane_t2

0x178c,	// (0x0007ec93) blid_firmament_pane_t3

0x17a3,	// (0x0007ecaa) blid_firmament_pane_t4

0x0003,

0xf6e2,	// (0x0008cbe9) blid_firmament_pane_t

0x17ba,	// (0x0007ecc1) blid_sat_info_pane

0x17ca,	// (0x0007ecd1) blid_sat_info_pane_g1

0x17ca,	// (0x0007ecd1) blid_sat_info_pane_g2

0x0001,

0xf6eb,	// (0x0008cbf2) blid_sat_info_pane_g

0x17d4,	// (0x0007ecdb) blid_sat_info_pane_t1

0x17e2,	// (0x0007ece9) smil2_volume_content_pane

0x17eb,	// (0x0007ecf2) smil2_volume_pane_g1

0x17f3,	// (0x0007ecfa) smil2_volume_content_pane_g1

0x17fc,	// (0x0007ed03) smil2_volume_content_pane_g2

0x1805,	// (0x0007ed0c) smil2_volume_content_pane_g3

0x180e,	// (0x0007ed15) smil2_volume_content_pane_g4

0x1817,	// (0x0007ed1e) smil2_volume_content_pane_g5

0x1820,	// (0x0007ed27) smil2_volume_content_pane_g6

0x1829,	// (0x0007ed30) smil2_volume_content_pane_g7

0x1832,	// (0x0007ed39) smil2_volume_content_pane_g8

0x183b,	// (0x0007ed42) smil2_volume_content_pane_g9

0x1844,	// (0x0007ed4b) smil2_volume_content_pane_g10

0x0009,

0xf6f0,	// (0x0008cbf7) smil2_volume_content_pane_g

0x5e7c,	// (0x00083383) cale_week_day_heading_pane_t1_ParamLimits

0x5eb7,	// (0x000833be) cale_week_day_heading_pane_t2_ParamLimits

0x5ef2,	// (0x000833f9) cale_week_day_heading_pane_t3_ParamLimits

0x5f2d,	// (0x00083434) cale_week_day_heading_pane_t4_ParamLimits

0x5f68,	// (0x0008346f) cale_week_day_heading_pane_t5_ParamLimits

0x5fa3,	// (0x000834aa) cale_week_day_heading_pane_t6_ParamLimits

0x5fde,	// (0x000834e5) cale_week_day_heading_pane_t7_ParamLimits

0xf1cd,	// (0x0008c6d4) cale_week_day_heading_pane_t_ParamLimits

0xdf88,	// (0x0008b48f) bg_cale_side_pane_ParamLimits

0x6019,	// (0x00083520) cale_week_time_pane_t1_ParamLimits

0x6053,	// (0x0008355a) cale_week_time_pane_t2_ParamLimits

0x608d,	// (0x00083594) cale_week_time_pane_t3_ParamLimits

0x60c7,	// (0x000835ce) cale_week_time_pane_t4_ParamLimits

0x6101,	// (0x00083608) cale_week_time_pane_t5_ParamLimits

0x613b,	// (0x00083642) cale_week_time_pane_t6_ParamLimits

0x6175,	// (0x0008367c) cale_week_time_pane_t7_ParamLimits

0x61af,	// (0x000836b6) cale_week_time_pane_t8_ParamLimits

0xf1dc,	// (0x0008c6e3) cale_week_time_pane_t_ParamLimits

0x61e9,	// (0x000836f0) cell_cale_week_pane_g2_ParamLimits

0xdf88,	// (0x0008b48f) bg_cale_side_pane_cp01_ParamLimits

0x71b8,	// (0x000846bf) cale_month_week_pane_t1_ParamLimits

0x71f1,	// (0x000846f8) cale_month_week_pane_t2_ParamLimits

0x722a,	// (0x00084731) cale_month_week_pane_t3_ParamLimits

0x7263,	// (0x0008476a) cale_month_week_pane_t4_ParamLimits

0x729c,	// (0x000847a3) cale_month_week_pane_t5_ParamLimits

0x72d5,	// (0x000847dc) cale_month_week_pane_t6_ParamLimits

0xf2b1,	// (0x0008c7b8) cale_month_week_pane_t_ParamLimits

0x7426,	// (0x0008492d) cell_cale_month_pane_g1_ParamLimits

0x572c,	// (0x00082c33) main_cale_event_viewer_pane

0xd6cc,	// (0x0008abd3) listscroll_cale_event_viewer_pane

0x184d,	// (0x0007ed54) list_cale_ev_pane

0x1855,	// (0x0007ed5c) scroll_pane_cp023

0x8e67,	// (0x0008636e) field_cale_ev_pane_ParamLimits

0x8e67,	// (0x0008636e) field_cale_ev_pane

0x1861,	// (0x0007ed68) field_cale_ev_content_pane_ParamLimits

0x1861,	// (0x0007ed68) field_cale_ev_content_pane

0x186d,	// (0x0007ed74) field_cale_ev_pane_g1_ParamLimits

0x186d,	// (0x0007ed74) field_cale_ev_pane_g1

0x1879,	// (0x0007ed80) field_cale_ev_pane_g2_ParamLimits

0x1879,	// (0x0007ed80) field_cale_ev_pane_g2

0x1891,	// (0x0007ed98) field_cale_ev_pane_g3_ParamLimits

0x1891,	// (0x0007ed98) field_cale_ev_pane_g3

0x0002,

0xf705,	// (0x0008cc0c) field_cale_ev_pane_g_ParamLimits

0xf705,	// (0x0008cc0c) field_cale_ev_pane_g

0x18a9,	// (0x0007edb0) field_cale_ev_pane_t1_ParamLimits

0x18a9,	// (0x0007edb0) field_cale_ev_pane_t1

0x8e81,	// (0x00086388) field_cale_ev_content_pane_t1_ParamLimits

0x8e81,	// (0x00086388) field_cale_ev_content_pane_t1

0xeb71,	// (0x0008c078) bg_button_pane_cp01

0x5c67,	// (0x0008316e) listscroll_cale_week_pane_ParamLimits

0xdf33,	// (0x0008b43a) popup_toolbar_window_cp01

0xdf59,	// (0x0008b460) listscroll_cale_week_pane_t1_ParamLimits

0x5c67,	// (0x0008316e) listscroll_cale_day_pane_ParamLimits

0xdf33,	// (0x0008b43a) popup_toolbar_window_cp02

0xe3bc,	// (0x0008b8c3) listscroll_cale_day_pane_t1_ParamLimits

0x5c67,	// (0x0008316e) main_cale_month_pane_ParamLimits

0x863d,	// (0x00085b44) popup_toolbar_window_cp03_ParamLimits

0x863d,	// (0x00085b44) popup_toolbar_window_cp03

0x806d,	// (0x00085574) main_image_pane_g2_ParamLimits

0x806d,	// (0x00085574) main_image_pane_g2

0x8079,	// (0x00085580) main_image_pane_g3_ParamLimits

0x8079,	// (0x00085580) main_image_pane_g3

0x0002,

0xf4e3,	// (0x0008c9ea) main_image_pane_g_ParamLimits

0xf4e3,	// (0x0008c9ea) main_image_pane_g

0xec8b,	// (0x0008c192) main_image_pane_t1_ParamLimits

0x8085,	// (0x0008558c) main_image_pane_t2_ParamLimits

0x8085,	// (0x0008558c) main_image_pane_t2

0x8097,	// (0x0008559e) main_image_pane_t3_ParamLimits

0x8097,	// (0x0008559e) main_image_pane_t3

0x80a9,	// (0x000855b0) main_image_pane_t4_ParamLimits

0x80a9,	// (0x000855b0) main_image_pane_t4

0x0003,

0xf4ea,	// (0x0008c9f1) main_image_pane_t_ParamLimits

0xf4ea,	// (0x0008c9f1) main_image_pane_t

0x80bb,	// (0x000855c2) popup_image_details_window_cp01

0x80c3,	// (0x000855ca) popup_toobar_trans_pane_cp01_ParamLimits

0x80c3,	// (0x000855ca) popup_toobar_trans_pane_cp01

0x85b1,	// (0x00085ab8) popup_image_details_window_ParamLimits

0x85b1,	// (0x00085ab8) popup_image_details_window

0x85bd,	// (0x00085ac4) popup_image_focus_window

0x88a7,	// (0x00085dae) camera2_autofocus_pane_ParamLimits

0x88a7,	// (0x00085dae) camera2_autofocus_pane

0xd6cc,	// (0x0008abd3) bg_popup_sub_pane_cp06

0x18c0,	// (0x0007edc7) popup_image_focus_window_g1

0x18c8,	// (0x0007edcf) popup_image_focus_window_g2

0x18d0,	// (0x0007edd7) popup_image_focus_window_g3

0x18d8,	// (0x0007eddf) popup_image_focus_window_g4

0x0003,

0xf70c,	// (0x0008cc13) popup_image_focus_window_g

0x18e0,	// (0x0007ede7) popup_image_focus_window_t1

0x18ee,	// (0x0007edf5) popup_image_focus_window_t2

0x18fd,	// (0x0007ee04) popup_image_focus_window_t3

0x0002,

0xf715,	// (0x0008cc1c) popup_image_focus_window_t

0x190b,	// (0x0007ee12) camera2_autofocus_pane_g1

0x0367,	// (0x0007d86e) bg_tb_trans_pane_cp01

0x1919,	// (0x0007ee20) popup_image_details_window_g1

0x192c,	// (0x0007ee33) popup_image_details_window_g2

0x0002,

0xf727,	// (0x0008cc2e) popup_image_details_window_g

0x1955,	// (0x0007ee5c) popup_image_details_window_t1

0x1967,	// (0x0007ee6e) popup_image_details_window_t2

0x1980,	// (0x0007ee87) popup_image_details_window_t3

0x1994,	// (0x0007ee9b) popup_image_details_window_t4

0x19af,	// (0x0007eeb6) popup_image_details_window_t5

0x0004,

0xf72e,	// (0x0008cc35) popup_image_details_window_t

0xddf3,	// (0x0008b2fa) bg_calc_paper_pane_ParamLimits

0x572c,	// (0x00082c33) grid_highlight_pane_cp013

0x5a38,	// (0x00082f3f) list_calc_pane_ParamLimits

0x5a4a,	// (0x00082f51) scroll_pane_cp024

0xde0b,	// (0x0008b312) bg_calc_display_pane_ParamLimits

0x5a52,	// (0x00082f59) calc_display_pane_t1_ParamLimits

0x5a67,	// (0x00082f6e) calc_display_pane_t2_ParamLimits

0x5a7c,	// (0x00082f83) calc_display_pane_t3_ParamLimits

0xf14d,	// (0x0008c654) calc_display_pane_t_ParamLimits

0x5b32,	// (0x00083039) cell_calc_pane_g2

0x0001,

0xf16a,	// (0x0008c671) cell_calc_pane_g

0x5b3b,	// (0x00083042) cell_calc_pane_t1

0xde6a,	// (0x0008b371) grid_highlight_pane_cp02_ParamLimits

0xde80,	// (0x0008b387) toolbar_button_pane_cp01_ParamLimits

0xde80,	// (0x0008b387) toolbar_button_pane_cp01

0xecd0,	// (0x0008c1d7) temp_image_control_pane_ParamLimits

0xecd0,	// (0x0008c1d7) temp_image_control_pane

0x8539,	// (0x00085a40) main_mp3_pane

0x19c9,	// (0x0007eed0) temp_image_control_pane_g1_ParamLimits

0x19c9,	// (0x0007eed0) temp_image_control_pane_g1

0x19d7,	// (0x0007eede) temp_image_control_pane_g2_ParamLimits

0x19d7,	// (0x0007eede) temp_image_control_pane_g2

0x19e9,	// (0x0007eef0) temp_image_control_pane_g3_ParamLimits

0x19e9,	// (0x0007eef0) temp_image_control_pane_g3

0x8ecb,	// (0x000863d2) temp_image_control_pane_g4_ParamLimits

0x8ecb,	// (0x000863d2) temp_image_control_pane_g4

0x0003,

0xf739,	// (0x0008cc40) temp_image_control_pane_g_ParamLimits

0xf739,	// (0x0008cc40) temp_image_control_pane_g

0x19c9,	// (0x0007eed0) main_mp3_pane_g1

0x8edc,	// (0x000863e3) main_mp3_pane_g2

0x0007,

0xf742,	// (0x0008cc49) main_mp3_pane_g

0x1a2c,	// (0x0007ef33) main_mp3_pane_t1

0xe035,	// (0x0008b53c) main_camera_pane_g8_ParamLimits

0xe035,	// (0x0008b53c) main_camera_pane_g8

0x6412,	// (0x00083919) main_video_pane_g7_ParamLimits

0x6412,	// (0x00083919) main_video_pane_g7

0x89d6,	// (0x00085edd) main_camera2_pane_t7_ParamLimits

0x89d6,	// (0x00085edd) main_camera2_pane_t7

0xe18a,	// (0x0008b691) scroll_pane_cp025_ParamLimits

0xe18a,	// (0x0008b691) scroll_pane_cp025

0xe19e,	// (0x0008b6a5) scroll_pane_cp026_ParamLimits

0xe19e,	// (0x0008b6a5) scroll_pane_cp026

0xe1ad,	// (0x0008b6b4) wml_content_pane_ParamLimits

0x572c,	// (0x00082c33) main_touch_calib_pane

0x8f74,	// (0x0008647b) main_touch_calib_pane_g1

0x8f80,	// (0x00086487) main_touch_calib_pane_g2

0x8f8c,	// (0x00086493) main_touch_calib_pane_g3

0x8f98,	// (0x0008649f) main_touch_calib_pane_g4

0x0003,

0xf760,	// (0x0008cc67) main_touch_calib_pane_g

0x8fa4,	// (0x000864ab) main_touch_calib_pane_t1

0x8fb9,	// (0x000864c0) main_touch_calib_pane_t2

0x0004,

0xf769,	// (0x0008cc70) main_touch_calib_pane_t

0xe8e3,	// (0x0008bdea) mup_progress_pane_cp02

0xe918,	// (0x0008be1f) navi_pane_g1

0xe9a3,	// (0x0008beaa) navi_pane_mp_t3

0x8539,	// (0x00085a40) main_mp3_pane_ParamLimits

0x8678,	// (0x00085b7f) navi_pane_ParamLimits

0x19c9,	// (0x0007eed0) main_mp3_pane_g1_ParamLimits

0x8edc,	// (0x000863e3) main_mp3_pane_g2_ParamLimits

0x8ee8,	// (0x000863ef) main_mp3_pane_g3_ParamLimits

0x8ee8,	// (0x000863ef) main_mp3_pane_g3

0x8ef4,	// (0x000863fb) main_mp3_pane_g4_ParamLimits

0x8ef4,	// (0x000863fb) main_mp3_pane_g4

0x19f9,	// (0x0007ef00) main_mp3_pane_g5_ParamLimits

0x19f9,	// (0x0007ef00) main_mp3_pane_g5

0x1a07,	// (0x0007ef0e) main_mp3_pane_g6_ParamLimits

0x1a07,	// (0x0007ef0e) main_mp3_pane_g6

0x1a14,	// (0x0007ef1b) main_mp3_pane_g7_ParamLimits

0x1a14,	// (0x0007ef1b) main_mp3_pane_g7

0x1a20,	// (0x0007ef27) main_mp3_pane_g8_ParamLimits

0x1a20,	// (0x0007ef27) main_mp3_pane_g8

0xf742,	// (0x0008cc49) main_mp3_pane_g_ParamLimits

0x8f00,	// (0x00086407) main_mp3_pane_t2

0x8f0e,	// (0x00086415) main_mp3_pane_t3

0x1a3a,	// (0x0007ef41) main_mp3_pane_t4

0x1a48,	// (0x0007ef4f) main_mp3_pane_t5

0x0005,

0xf753,	// (0x0008cc5a) main_mp3_pane_t

0x1a56,	// (0x0007ef5d) mup_progress_pane_cp01

0x5512,	// (0x00082a19) aid_zoom_text_secondary2

0x184d,	// (0x0007ed54) list_cale_ev2_pane

0x1855,	// (0x0007ed5c) scroll_pane_cp023_ParamLimits

0x9004,	// (0x0008650b) field_cale_ev2_pane_ParamLimits

0x9004,	// (0x0008650b) field_cale_ev2_pane

0x3d1c,	// (0x00081223) field_cale_ev2_pane_g1_ParamLimits

0x3d1c,	// (0x00081223) field_cale_ev2_pane_g1

0x3d28,	// (0x0008122f) field_cale_ev2_pane_g2_ParamLimits

0x3d28,	// (0x0008122f) field_cale_ev2_pane_g2

0x3d40,	// (0x00081247) field_cale_ev2_pane_g3_ParamLimits

0x3d40,	// (0x00081247) field_cale_ev2_pane_g3

0x0003,

0xf774,	// (0x0008cc7b) field_cale_ev2_pane_g_ParamLimits

0xf774,	// (0x0008cc7b) field_cale_ev2_pane_g

0x1a5e,	// (0x0007ef65) field_cale_ev2_pane_t1_ParamLimits

0x1a5e,	// (0x0007ef65) field_cale_ev2_pane_t1

0x1a75,	// (0x0007ef7c) field_cale_ev2_pane_t2_ParamLimits

0x1a75,	// (0x0007ef7c) field_cale_ev2_pane_t2

0x0001,

0xf77d,	// (0x0008cc84) field_cale_ev2_pane_t_ParamLimits

0xf77d,	// (0x0008cc84) field_cale_ev2_pane_t

0x7f69,	// (0x00085470) main_postcard_pane_g5_ParamLimits

0x7f69,	// (0x00085470) main_postcard_pane_g5

0x7f75,	// (0x0008547c) main_postcard_pane_g6_ParamLimits

0x7f75,	// (0x0008547c) main_postcard_pane_g6

0x6267,	// (0x0008376e) camera2_autofocus_pane_cp_ParamLimits

0x6267,	// (0x0008376e) camera2_autofocus_pane_cp

0x8539,	// (0x00085a40) main_mup3_pane

0x9053,	// (0x0008655a) main_mup3_pane_g1_ParamLimits

0x9053,	// (0x0008655a) main_mup3_pane_g1

0x9074,	// (0x0008657b) main_mup3_pane_g2_ParamLimits

0x9074,	// (0x0008657b) main_mup3_pane_g2

0x90e1,	// (0x000865e8) main_mup3_pane_g3_ParamLimits

0x90e1,	// (0x000865e8) main_mup3_pane_g3

0x911c,	// (0x00086623) main_mup3_pane_g4_ParamLimits

0x911c,	// (0x00086623) main_mup3_pane_g4

0x9157,	// (0x0008665e) main_mup3_pane_g5_ParamLimits

0x9157,	// (0x0008665e) main_mup3_pane_g5

0x9192,	// (0x00086699) main_mup3_pane_g6_ParamLimits

0x9192,	// (0x00086699) main_mup3_pane_g6

0x1a8a,	// (0x0007ef91) main_mup3_pane_g7_ParamLimits

0x1a8a,	// (0x0007ef91) main_mup3_pane_g7

0x0007,

0xf78d,	// (0x0008cc94) main_mup3_pane_g_ParamLimits

0xf78d,	// (0x0008cc94) main_mup3_pane_g

0x9200,	// (0x00086707) main_mup3_pane_t1_ParamLimits

0x9200,	// (0x00086707) main_mup3_pane_t1

0x9261,	// (0x00086768) main_mup3_pane_t2_ParamLimits

0x9261,	// (0x00086768) main_mup3_pane_t2

0x931c,	// (0x00086823) main_mup3_pane_t4_ParamLimits

0x931c,	// (0x00086823) main_mup3_pane_t4

0x9362,	// (0x00086869) main_mup3_pane_t5_ParamLimits

0x9362,	// (0x00086869) main_mup3_pane_t5

0x9406,	// (0x0008690d) main_mup3_pane_t6_ParamLimits

0x9406,	// (0x0008690d) main_mup3_pane_t6

0x0005,

0xf79e,	// (0x0008cca5) main_mup3_pane_t_ParamLimits

0xf79e,	// (0x0008cca5) main_mup3_pane_t

0x94ae,	// (0x000869b5) mup3_progress_pane_ParamLimits

0x94ae,	// (0x000869b5) mup3_progress_pane

0x9512,	// (0x00086a19) popup_mup3_control_window_ParamLimits

0x9512,	// (0x00086a19) popup_mup3_control_window

0x1a98,	// (0x0007ef9f) popup_mup3_text_window

0x952b,	// (0x00086a32) mup3_progress_pane_t1

0x9549,	// (0x00086a50) mup3_progress_pane_t2

0x1aa0,	// (0x0007efa7) mup3_progress_pane_t3

0x0002,

0xf7ab,	// (0x0008ccb2) mup3_progress_pane_t

0x1abd,	// (0x0007efc4) mup_progress_pane_cp03

0xd6cc,	// (0x0008abd3) bg_tb_trans_pane_cp04

0x9567,	// (0x00086a6e) mup3_volume_pane

0x956f,	// (0x00086a76) popup_mup3_control_window_g1

0x9578,	// (0x00086a7f) mup3_volume_pane_g1

0x9581,	// (0x00086a88) mup3_volume_pane_g2

0x958a,	// (0x00086a91) mup3_volume_pane_g3

0x0002,

0xf7b2,	// (0x0008ccb9) mup3_volume_pane_g

0xd6cc,	// (0x0008abd3) bg_tb_trans_pane_cp03

0x1acd,	// (0x0007efd4) popup_mup3_text_window_g1

0x1ad5,	// (0x0007efdc) popup_mup3_text_window_t1

0xde53,	// (0x0008b35a) list_calc_item_pane_g1_ParamLimits

0x14e1,	// (0x0007e9e8) mup_volume_pane_cp_g1

0x8fce,	// (0x000864d5) main_touch_calib_pane_t3

0x8fe0,	// (0x000864e7) main_touch_calib_pane_t4

0x8ff2,	// (0x000864f9) main_touch_calib_pane_t5

0x54d2,	// (0x000829d9) aid_cell_size_toolbar2

0x54da,	// (0x000829e1) aid_popup3_width_pane

0x53e6,	// (0x000828ed) aid_zoom_text_msg_primary

0xe014,	// (0x0008b51b) vorec_t7

0xde17,	// (0x0008b31e) bg_calc_paper_pane_g1_ParamLimits

0xde23,	// (0x0008b32a) bg_calc_paper_pane_g2_ParamLimits

0xde2f,	// (0x0008b336) bg_calc_paper_pane_g3_ParamLimits

0xde3b,	// (0x0008b342) bg_calc_paper_pane_g4_ParamLimits

0xde47,	// (0x0008b34e) bg_calc_paper_pane_g5_ParamLimits

0x5ab5,	// (0x00082fbc) bg_calc_paper_pane_g6_ParamLimits

0x5ac4,	// (0x00082fcb) bg_calc_paper_pane_g7_ParamLimits

0x5ad3,	// (0x00082fda) bg_calc_paper_pane_g8_ParamLimits

0xf154,	// (0x0008c65b) bg_calc_paper_pane_g_ParamLimits

0x5ae2,	// (0x00082fe9) calc_bg_paper_pane_g9_ParamLimits

0x6347,	// (0x0008384e) image_qvga_pane_ParamLimits

0x6347,	// (0x0008384e) image_qvga_pane

0xdd42,	// (0x0008b249) bg_popup_sub_pane_cp04_ParamLimits

0xec07,	// (0x0008c10e) popup_mup_playback_window_g1_ParamLimits

0xec13,	// (0x0008c11a) popup_mup_playback_window_t1_ParamLimits

0xec28,	// (0x0008c12f) popup_mup_playback_window_t2_ParamLimits

0xf4de,	// (0x0008c9e5) popup_mup_playback_window_t_ParamLimits

0x8afd,	// (0x00086004) main_mup2_pane_g3_ParamLimits

0x8afd,	// (0x00086004) main_mup2_pane_g3

0x66cd,	// (0x00083bd4) popup_toolbar_window_cp04

0xefee,	// (0x0008c4f5) popup_call2_audio_second_window_g3_ParamLimits

0xefee,	// (0x0008c4f5) popup_call2_audio_second_window_g3

0x088a,	// (0x0007dd91) popup_call2_audio_first_window_g4_ParamLimits

0x088a,	// (0x0007dd91) popup_call2_audio_first_window_g4

0x0f09,	// (0x0007e410) popup_call2_audio_in_window_g4_ParamLimits

0x0f09,	// (0x0007e410) popup_call2_audio_in_window_g4

0x8060,	// (0x00085567) aid_area_sk_bg_cut_ParamLimits

0x8060,	// (0x00085567) aid_area_sk_bg_cut

0xec3d,	// (0x0008c144) aid_area_sk_bg_cut_2_ParamLimits

0xec3d,	// (0x0008c144) aid_area_sk_bg_cut_2

0x8e3d,	// (0x00086344) aid_placing_details_win

0x8e45,	// (0x0008634c) aid_placing_details_win_2

0x190b,	// (0x0007ee12) camera2_autofocus_pane_g1_ParamLimits

0x56c0,	// (0x00082bc7) popup_fixed_preview_cale_window_ParamLimits

0x56c0,	// (0x00082bc7) popup_fixed_preview_cale_window

0xea19,	// (0x0008bf20) navi_slider_pane_g3

0xea22,	// (0x0008bf29) navi_slider_pane_g4

0xea2b,	// (0x0008bf32) navi_slider_pane_g5

0xea19,	// (0x0008bf20) navi_slider_pane_g6

0x79ca,	// (0x00084ed1) navi_slider_pane_g7

0xeb3e,	// (0x0008c045) mup_scale_pane_g3

0xeb47,	// (0x0008c04e) mup_scale_pane_g4

0xeb50,	// (0x0008c057) mup_scale_pane_g5

0x7d8d,	// (0x00085294) mup_scale_pane_g6

0x7d96,	// (0x0008529d) mup_scale_pane_g7

0xea19,	// (0x0008bf20) cams2_slider_pane_g3

0x1596,	// (0x0007ea9d) cams2_slider_pane_g4

0x8daa,	// (0x000862b1) cams2_slider_pane_g5

0xea19,	// (0x0008bf20) cams2_slider_pane_g6

0x8db2,	// (0x000862b9) cams2_slider_pane_g7

0x17ca,	// (0x0007ecd1) camera2_autofocus_pane_cp_g1

0x12aa,	// (0x0007e7b1) bg_popup_preview_window_pane_cp02_ParamLimits

0x12aa,	// (0x0007e7b1) bg_popup_preview_window_pane_cp02

0x1ae3,	// (0x0007efea) list_fp_cale_pane_ParamLimits

0x1ae3,	// (0x0007efea) list_fp_cale_pane

0x1aef,	// (0x0007eff6) popup_fixed_preview_cale_window_t1_ParamLimits

0x1aef,	// (0x0007eff6) popup_fixed_preview_cale_window_t1

0x9593,	// (0x00086a9a) popup_fixed_preview_cale_window_t2_ParamLimits

0x9593,	// (0x00086a9a) popup_fixed_preview_cale_window_t2

0x95a8,	// (0x00086aaf) popup_fixed_preview_cale_window_t3_ParamLimits

0x95a8,	// (0x00086aaf) popup_fixed_preview_cale_window_t3

0x0002,

0xf7b9,	// (0x0008ccc0) popup_fixed_preview_cale_window_t_ParamLimits

0xf7b9,	// (0x0008ccc0) popup_fixed_preview_cale_window_t

0x95bd,	// (0x00086ac4) list_single_fp_cale_pane_ParamLimits

0x95bd,	// (0x00086ac4) list_single_fp_cale_pane

0x1b0d,	// (0x0007f014) list_single_fp_cale_pane_g1_ParamLimits

0x1b0d,	// (0x0007f014) list_single_fp_cale_pane_g1

0x1b19,	// (0x0007f020) list_single_fp_cale_pane_g2_ParamLimits

0x1b19,	// (0x0007f020) list_single_fp_cale_pane_g2

0x0002,

0xf7c0,	// (0x0008ccc7) list_single_fp_cale_pane_g_ParamLimits

0xf7c0,	// (0x0008ccc7) list_single_fp_cale_pane_g

0x1b32,	// (0x0007f039) list_single_fp_cale_pane_t1_ParamLimits

0x1b32,	// (0x0007f039) list_single_fp_cale_pane_t1

0x1b44,	// (0x0007f04b) list_single_fp_cale_pane_t2_ParamLimits

0x1b44,	// (0x0007f04b) list_single_fp_cale_pane_t2

0x0001,

0xf7c7,	// (0x0008ccce) list_single_fp_cale_pane_t_ParamLimits

0xf7c7,	// (0x0008ccce) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x572c,	// (0x00082c33) main_dialer_pane

0x95cd,	// (0x00086ad4) aid_cell_size_keypad

0x95d7,	// (0x00086ade) dialer_ne_pane

0x95df,	// (0x00086ae6) grid_dialer_command_1_pane

0x95e7,	// (0x00086aee) grid_dialer_command_2_pane

0x95ef,	// (0x00086af6) grid_dialer_keypad_pane

0x95ff,	// (0x00086b06) bg_popup_call_pane_cp06_ParamLimits

0x95ff,	// (0x00086b06) bg_popup_call_pane_cp06

0x960b,	// (0x00086b12) dialer_ne_clear_pane_ParamLimits

0x960b,	// (0x00086b12) dialer_ne_clear_pane

0x1b77,	// (0x0007f07e) dialer_ne_pane_g1

0x1b7f,	// (0x0007f086) dialer_ne_pane_t1_ParamLimits

0x1b7f,	// (0x0007f086) dialer_ne_pane_t1

0x9617,	// (0x00086b1e) dialer_ne_pane_t2_ParamLimits

0x9617,	// (0x00086b1e) dialer_ne_pane_t2

0x9634,	// (0x00086b3b) dialer_ne_pane_t3_ParamLimits

0x9634,	// (0x00086b3b) dialer_ne_pane_t3

0x0002,

0xf7cc,	// (0x0008ccd3) dialer_ne_pane_t_ParamLimits

0xf7cc,	// (0x0008ccd3) dialer_ne_pane_t

0x9658,	// (0x00086b5f) dialer_ne_pane_t3_copy1_ParamLimits

0x9658,	// (0x00086b5f) dialer_ne_pane_t3_copy1

0x967c,	// (0x00086b83) cell_dialer_keypad_pane_ParamLimits

0x967c,	// (0x00086b83) cell_dialer_keypad_pane

0x9691,	// (0x00086b98) cell_dialer_command_1_pane_ParamLimits

0x9691,	// (0x00086b98) cell_dialer_command_1_pane

0x96a7,	// (0x00086bae) cell_dialer_command_2_pane_ParamLimits

0x96a7,	// (0x00086bae) cell_dialer_command_2_pane

0x1b91,	// (0x0007f098) bg_button_pane_cp02_ParamLimits

0x1b91,	// (0x0007f098) bg_button_pane_cp02

0x96b6,	// (0x00086bbd) cell_dialer_keypad_pane_g1_ParamLimits

0x96b6,	// (0x00086bbd) cell_dialer_keypad_pane_g1

0x1b91,	// (0x0007f098) bg_button_pane_cp03_ParamLimits

0x1b91,	// (0x0007f098) bg_button_pane_cp03

0x96cb,	// (0x00086bd2) cell_dialer_command_1_pane_g1_ParamLimits

0x96cb,	// (0x00086bd2) cell_dialer_command_1_pane_g1

0x1b9d,	// (0x0007f0a4) bg_button_pane_cp04

0x96de,	// (0x00086be5) cell_dialer_command_2_pane_g1

0xdfe2,	// (0x0008b4e9) bg_button_pane_cp06

0x1ba5,	// (0x0007f0ac) dialer_ne_clear_pane_g1

0xe924,	// (0x0008be2b) navi_pane_g2

0x7972,	// (0x00084e79) navi_pane_g3

0x0002,

0xf3e1,	// (0x0008c8e8) navi_pane_g

0xe9b1,	// (0x0008beb8) navi_pane_mv_g2

0xe9d8,	// (0x0008bedf) navi_pane_mv_g5

0x798f,	// (0x00084e96) navi_pane_mv_t1

0xde0b,	// (0x0008b312) main_clock2_pane

0x971a,	// (0x00086c21) main_clock2_list_pane_ParamLimits

0x971a,	// (0x00086c21) main_clock2_list_pane

0x9740,	// (0x00086c47) main_clock2_pane_t1_ParamLimits

0x9740,	// (0x00086c47) main_clock2_pane_t1

0x9760,	// (0x00086c67) main_clock2_pane_t2_ParamLimits

0x9760,	// (0x00086c67) main_clock2_pane_t2

0x0004,

0xf7d8,	// (0x0008ccdf) main_clock2_pane_t_ParamLimits

0xf7d8,	// (0x0008ccdf) main_clock2_pane_t

0x97b9,	// (0x00086cc0) popup_clock_analogue_window_cp03_ParamLimits

0x97b9,	// (0x00086cc0) popup_clock_analogue_window_cp03

0x97d7,	// (0x00086cde) popup_clock_digital_window_cp02_ParamLimits

0x97d7,	// (0x00086cde) popup_clock_digital_window_cp02

0x9844,	// (0x00086d4b) main_clock2_list_single_pane_ParamLimits

0x9844,	// (0x00086d4b) main_clock2_list_single_pane

0xdfe2,	// (0x0008b4e9) list_highlight_pane_cp05

0x1bdd,	// (0x0007f0e4) main_clock2_list_single_pane_t1

0x66cd,	// (0x00083bd4) popup_toolbar_window_cp04_ParamLimits

0x8e9b,	// (0x000863a2) camera2_autofocus_pane_g2_ParamLimits

0x8e9b,	// (0x000863a2) camera2_autofocus_pane_g2

0x8ea7,	// (0x000863ae) camera2_autofocus_pane_g3_ParamLimits

0x8ea7,	// (0x000863ae) camera2_autofocus_pane_g3

0x8eb3,	// (0x000863ba) camera2_autofocus_pane_g4_ParamLimits

0x8eb3,	// (0x000863ba) camera2_autofocus_pane_g4

0x8ebf,	// (0x000863c6) camera2_autofocus_pane_g5_ParamLimits

0x8ebf,	// (0x000863c6) camera2_autofocus_pane_g5

0x0004,

0xf71c,	// (0x0008cc23) camera2_autofocus_pane_g_ParamLimits

0xf71c,	// (0x0008cc23) camera2_autofocus_pane_g

0x901a,	// (0x00086521) camera2_autofocus_pane_cp_g2

0x9022,	// (0x00086529) camera2_autofocus_pane_cp_g3

0x902a,	// (0x00086531) camera2_autofocus_pane_cp_g4

0x9032,	// (0x00086539) camera2_autofocus_pane_cp_g5

0x0004,

0xf782,	// (0x0008cc89) camera2_autofocus_pane_cp_g

0x95f7,	// (0x00086afe) popup_dialer_spcha_window

0xd6cc,	// (0x0008abd3) bg_popup_sub_pane_cp07

0x1beb,	// (0x0007f0f2) list_spcha_pane

0x1bf3,	// (0x0007f0fa) list_single_spcha_pane_ParamLimits

0x1bf3,	// (0x0007f0fa) list_single_spcha_pane

0xd6cc,	// (0x0008abd3) list_highlight_pane_cp06

0x1c04,	// (0x0007f10b) list_single_spcha_pane_t1

0x0cb3,	// (0x0007e1ba) popup_call2_audio_out_window_g4_ParamLimits

0x0cb3,	// (0x0007e1ba) popup_call2_audio_out_window_g4

0x572c,	// (0x00082c33) main_imed2_pane

0x85c5,	// (0x00085acc) popup_imed_adjust2_window

0x85d6,	// (0x00085add) popup_imed_trans_window_ParamLimits

0x85d6,	// (0x00085add) popup_imed_trans_window

0x160e,	// (0x0007eb15) popup_blid_sat_info2_window_t1

0x161c,	// (0x0007eb23) popup_blid_sat_info2_window_t2

0x000a,

0xf6b1,	// (0x0008cbb8) popup_blid_sat_info2_window_t

0x98ee,	// (0x00086df5) aid_size_cell_colour_35

0x9905,	// (0x00086e0c) aid_size_cell_colour_112

0x991c,	// (0x00086e23) aid_size_cell_effect

0x0367,	// (0x0007d86e) bg_tb_trans_pane_cp02

0xf0ba,	// (0x0008c5c1) heading_imed_pane

0x9936,	// (0x00086e3d) listscroll_imed_pane

0x1c12,	// (0x0007f119) heading_imed_pane_g1

0x1c1a,	// (0x0007f121) heading_imed_pane_t1

0x1c28,	// (0x0007f12f) grid_imed_colour_35_pane_ParamLimits

0x1c28,	// (0x0007f12f) grid_imed_colour_35_pane

0x9942,	// (0x00086e49) grid_imed_effect_pane

0x1c3b,	// (0x0007f142) list_imed_aspect_pane

0x994e,	// (0x00086e55) scroll_pane_cp027_ParamLimits

0x994e,	// (0x00086e55) scroll_pane_cp027

0x995a,	// (0x00086e61) cell_imed_effect_pane_ParamLimits

0x995a,	// (0x00086e61) cell_imed_effect_pane

0x1c43,	// (0x0007f14a) cell_imed_colour_pane_ParamLimits

0x1c43,	// (0x0007f14a) cell_imed_colour_pane

0x1c7d,	// (0x0007f184) cell_imed_colour_pane_g1_ParamLimits

0x1c7d,	// (0x0007f184) cell_imed_colour_pane_g1

0x1c8e,	// (0x0007f195) hgihlgiht_grid_pane_cp016_ParamLimits

0x1c8e,	// (0x0007f195) hgihlgiht_grid_pane_cp016

0x9970,	// (0x00086e77) cell_imed_effect_pane_g1

0x9978,	// (0x00086e7f) grid_highlight_pane_cp017

0x1c9f,	// (0x0007f1a6) list_imed_single_pane_ParamLimits

0x1c9f,	// (0x0007f1a6) list_imed_single_pane

0xd6cc,	// (0x0008abd3) list_highlight_pane_cp07

0x1cb2,	// (0x0007f1b9) list_imed_aspect_pane_comp1_t1

0x12b6,	// (0x0007e7bd) bg_tb_trans_pane_cp05

0x1cd2,	// (0x0007f1d9) popup_imed_adjust2_window_g1

0x1cf9,	// (0x0007f200) popup_imed_adjust2_window_t1

0x1d11,	// (0x0007f218) slider_imed_adjust_pane

0x1d25,	// (0x0007f22c) slider_imed_adjust_pane_g1

0x1d35,	// (0x0007f23c) slider_imed_adjust_pane_g2

0x1d45,	// (0x0007f24c) slider_imed_adjust_pane_g3

0x1d56,	// (0x0007f25d) slider_imed_adjust_pane_g4

0x0003,

0xf7f5,	// (0x0008ccfc) slider_imed_adjust_pane_g

0x9981,	// (0x00086e88) aid_size_cell_clipart2

0x998d,	// (0x00086e94) grid_imed_clipart_pane

0x1d67,	// (0x0007f26e) scroll_pane_cp031

0x9997,	// (0x00086e9e) cell_imed_clipart_pane_ParamLimits

0x9997,	// (0x00086e9e) cell_imed_clipart_pane

0x99ae,	// (0x00086eb5) cell_imed_clipart_pane_g1

0xd6cc,	// (0x0008abd3) grid_highlight_pane_cp014

0x9726,	// (0x00086c2d) main_clock2_pane_g1_ParamLimits

0x9726,	// (0x00086c2d) main_clock2_pane_g1

0x97ef,	// (0x00086cf6) aid_call2_pane_cp10

0x9801,	// (0x00086d08) aid_call_pane_cp10

0xe8b3,	// (0x0008bdba) popup_clock_analogue_window_cp10_g1

0xe8b3,	// (0x0008bdba) popup_clock_analogue_window_cp10_g2

0x9813,	// (0x00086d1a) popup_clock_analogue_window_cp10_g3

0x9813,	// (0x00086d1a) popup_clock_analogue_window_cp10_g4

0xe8b3,	// (0x0008bdba) popup_clock_analogue_window_cp10_g5

0x0004,

0xf7e3,	// (0x0008ccea) popup_clock_analogue_window_cp10_g

0x9825,	// (0x00086d2c) popup_clock_analogue_window_cp10_t1

0x9856,	// (0x00086d5d) clock_digital_number_pane_cp10_ParamLimits

0x9856,	// (0x00086d5d) clock_digital_number_pane_cp10

0x986e,	// (0x00086d75) clock_digital_number_pane_cp11_ParamLimits

0x986e,	// (0x00086d75) clock_digital_number_pane_cp11

0x9886,	// (0x00086d8d) clock_digital_number_pane_cp12_ParamLimits

0x9886,	// (0x00086d8d) clock_digital_number_pane_cp12

0x989e,	// (0x00086da5) clock_digital_number_pane_cp13_ParamLimits

0x989e,	// (0x00086da5) clock_digital_number_pane_cp13

0x98b6,	// (0x00086dbd) clock_digital_separator_pane_cp10_ParamLimits

0x98b6,	// (0x00086dbd) clock_digital_separator_pane_cp10

0x98ce,	// (0x00086dd5) popup_clock_digital_window_cp02_t1_ParamLimits

0x98ce,	// (0x00086dd5) popup_clock_digital_window_cp02_t1

0xdd3a,	// (0x0008b241) clock_digital_number_pane_cp10_g1

0xdd3a,	// (0x0008b241) clock_digital_number_pane_cp10_g2

0x0001,

0xf7fe,	// (0x0008cd05) clock_digital_number_pane_cp10_g

0xdd3a,	// (0x0008b241) clock_digital_separator_pane_cp10_g1

0xdd3a,	// (0x0008b241) clock_digital_separator_pane_g2_cp10

0xe9e0,	// (0x0008bee7) navi_pane_vded_g4

0xe9e9,	// (0x0008bef0) navi_pane_vded_g5

0xe9f2,	// (0x0008bef9) navi_pane_vded_t1

0x572c,	// (0x00082c33) main_vded_pane

0x99b7,	// (0x00086ebe) main_vded_pane_g1

0x99bf,	// (0x00086ec6) main_vded_pane_g2

0x99c7,	// (0x00086ece) main_vded_pane_g3

0x0002,

0xf803,	// (0x0008cd0a) main_vded_pane_g

0x99cf,	// (0x00086ed6) main_vded_pane_t1

0x99dd,	// (0x00086ee4) main_vded_pane_t2

0x0001,

0xf80a,	// (0x0008cd11) main_vded_pane_t

0x99eb,	// (0x00086ef2) vded_slider_pane

0x99f3,	// (0x00086efa) vded_video_pane

0x1d6f,	// (0x0007f276) vded_video_pane_g1

0x99fb,	// (0x00086f02) vded_video_pane_g2

0x17ca,	// (0x0007ecd1) vded_video_pane_g3

0x0002,

0xf80f,	// (0x0008cd16) vded_video_pane_g

0x1d79,	// (0x0007f280) vded_slider_pane_g1

0x14e1,	// (0x0007e9e8) vded_slider_pane_g2

0x1d82,	// (0x0007f289) vded_slider_pane_g3

0x1d8b,	// (0x0007f292) vded_slider_pane_g4

0x1d94,	// (0x0007f29b) vded_slider_pane_g5

0x0004,

0xf816,	// (0x0008cd1d) vded_slider_pane_g

0x9506,	// (0x00086a0d) mup3_rocker_pane_ParamLimits

0x9506,	// (0x00086a0d) mup3_rocker_pane

0x9a04,	// (0x00086f0b) mup3_control_keys_pane_g1

0x9a0c,	// (0x00086f13) mup3_control_keys_pane_g2

0x9a14,	// (0x00086f1b) mup3_control_keys_pane_g3

0x9a1c,	// (0x00086f23) mup3_control_keys_pane_g4

0x0003,

0xf821,	// (0x0008cd28) mup3_control_keys_pane_g

0x56e4,	// (0x00082beb) popup_toolbar2_fixed_window_cp01_ParamLimits

0x56e4,	// (0x00082beb) popup_toolbar2_fixed_window_cp01

0x951e,	// (0x00086a25) popup_toolbar2_fixed_window_cp02_ParamLimits

0x951e,	// (0x00086a25) popup_toolbar2_fixed_window_cp02

0x05f2,	// (0x0007daf9) popup_call2_audio_second_window_t4_ParamLimits

0x05f2,	// (0x0007daf9) popup_call2_audio_second_window_t4

0x0b20,	// (0x0007e027) popup_call2_audio_first_window_t6_ParamLimits

0x0b20,	// (0x0007e027) popup_call2_audio_first_window_t6

0x0db6,	// (0x0007e2bd) popup_call2_audio_out_window_t6_ParamLimits

0x0db6,	// (0x0007e2bd) popup_call2_audio_out_window_t6

0x572c,	// (0x00082c33) main_vitu_pane

0x9a2c,	// (0x00086f33) aid_size_cell_itu_ParamLimits

0x9a2c,	// (0x00086f33) aid_size_cell_itu

0x3ccb,	// (0x000811d2) bg_popup_window_pane_cp08_ParamLimits

0x3ccb,	// (0x000811d2) bg_popup_window_pane_cp08

0x9a3a,	// (0x00086f41) field_vitu_entry_pane_ParamLimits

0x9a3a,	// (0x00086f41) field_vitu_entry_pane

0x9a47,	// (0x00086f4e) grid_vitu_function_pane_ParamLimits

0x9a47,	// (0x00086f4e) grid_vitu_function_pane

0x9a53,	// (0x00086f5a) grid_vitu_itu_pane_ParamLimits

0x9a53,	// (0x00086f5a) grid_vitu_itu_pane

0x9a5f,	// (0x00086f66) cell_vitu_itu_pane_ParamLimits

0x9a5f,	// (0x00086f66) cell_vitu_itu_pane

0x9a74,	// (0x00086f7b) cell_vitu_function_pane_ParamLimits

0x9a74,	// (0x00086f7b) cell_vitu_function_pane

0x0367,	// (0x0007d86e) bg_popup_sub_pane_cp08_ParamLimits

0x0367,	// (0x0007d86e) bg_popup_sub_pane_cp08

0x9a86,	// (0x00086f8d) field_vitu_entry_pane_t1_ParamLimits

0x9a86,	// (0x00086f8d) field_vitu_entry_pane_t1

0x1db5,	// (0x0007f2bc) field_vitu_entry_pane_t2_ParamLimits

0x1db5,	// (0x0007f2bc) field_vitu_entry_pane_t2

0x0001,

0xf82f,	// (0x0008cd36) field_vitu_entry_pane_t_ParamLimits

0xf82f,	// (0x0008cd36) field_vitu_entry_pane_t

0x1dd2,	// (0x0007f2d9) bg_button_pane_cp05_ParamLimits

0x1dd2,	// (0x0007f2d9) bg_button_pane_cp05

0x9a9f,	// (0x00086fa6) cell_vitu_itu_pane_g1

0x9ab7,	// (0x00086fbe) cell_vitu_itu_pane_t1_ParamLimits

0x9ab7,	// (0x00086fbe) cell_vitu_itu_pane_t1

0x9ac9,	// (0x00086fd0) cell_vitu_itu_pane_t2_ParamLimits

0x9ac9,	// (0x00086fd0) cell_vitu_itu_pane_t2

0x0002,

0xf834,	// (0x0008cd3b) cell_vitu_itu_pane_t_ParamLimits

0xf834,	// (0x0008cd3b) cell_vitu_itu_pane_t

0x1de0,	// (0x0007f2e7) bg_button_pane_cp07

0x9afe,	// (0x00087005) cell_vitu_function_pane_g1

0x596b,	// (0x00082e72) main_calc_pane_g1

0x550a,	// (0x00082a11) aid_visual_content_pane

0x572c,	// (0x00082c33) main_vradio_pane

0x9b07,	// (0x0008700e) main_vradio_pane_g1_ParamLimits

0x9b07,	// (0x0008700e) main_vradio_pane_g1

0x1dea,	// (0x0007f2f1) main_vradio_pane_g2_ParamLimits

0x1dea,	// (0x0007f2f1) main_vradio_pane_g2

0x0001,

0xf83b,	// (0x0008cd42) main_vradio_pane_g_ParamLimits

0xf83b,	// (0x0008cd42) main_vradio_pane_g

0x9b15,	// (0x0008701c) main_vradio_pane_t1_ParamLimits

0x9b15,	// (0x0008701c) main_vradio_pane_t1

0x9b27,	// (0x0008702e) main_vradio_pane_t2_ParamLimits

0x9b27,	// (0x0008702e) main_vradio_pane_t2

0x1df7,	// (0x0007f2fe) main_vradio_pane_t3_ParamLimits

0x1df7,	// (0x0007f2fe) main_vradio_pane_t3

0x0002,

0xf840,	// (0x0008cd47) main_vradio_pane_t_ParamLimits

0xf840,	// (0x0008cd47) main_vradio_pane_t

0x9b39,	// (0x00087040) vradio_rocker_control_pane_ParamLimits

0x9b39,	// (0x00087040) vradio_rocker_control_pane

0x9b45,	// (0x0008704c) vradio_station_info_pane_ParamLimits

0x9b45,	// (0x0008704c) vradio_station_info_pane

0x1e09,	// (0x0007f310) vradio_frequency_info_pane_ParamLimits

0x1e09,	// (0x0007f310) vradio_frequency_info_pane

0x17ca,	// (0x0007ecd1) vradio_station_info_pane_g1

0x1e18,	// (0x0007f31f) vradio_station_info_pane_t1_ParamLimits

0x1e18,	// (0x0007f31f) vradio_station_info_pane_t1

0x1e3a,	// (0x0007f341) vradio_station_info_pane_t2_ParamLimits

0x1e3a,	// (0x0007f341) vradio_station_info_pane_t2

0x0001,

0xf847,	// (0x0008cd4e) vradio_station_info_pane_t_ParamLimits

0xf847,	// (0x0008cd4e) vradio_station_info_pane_t

0x1e4c,	// (0x0007f353) vradio_tuning_pane

0x1e54,	// (0x0007f35b) vradio_rocker_control_pane_g1

0x1e5c,	// (0x0007f363) vradio_rocker_control_pane_g2

0x1e64,	// (0x0007f36b) vradio_rocker_control_pane_g3

0x1e6c,	// (0x0007f373) vradio_rocker_control_pane_g4

0x1e74,	// (0x0007f37b) vradio_rocker_control_pane_g5

0x0004,

0xf84c,	// (0x0008cd53) vradio_rocker_control_pane_g

0x9b52,	// (0x00087059) vradio_frequency_info_pane_g1

0x1e7c,	// (0x0007f383) vradio_frequency_info_pane_t1_ParamLimits

0x1e7c,	// (0x0007f383) vradio_frequency_info_pane_t1

0x9b5a,	// (0x00087061) vradio_tuning_pane_g1

0x9b63,	// (0x0008706a) vradio_tuning_pane_t1

0x5549,	// (0x00082a50) area_side_right_pane_ParamLimits

0x5549,	// (0x00082a50) area_side_right_pane

0x1271,	// (0x0007e778) status_small_pane_g1

0x1279,	// (0x0007e780) status_small_pane_g2

0x1282,	// (0x0007e789) status_small_pane_g3

0x128b,	// (0x0007e792) status_small_pane_g4

0x0003,

0xf607,	// (0x0008cb0e) status_small_pane_g

0x1294,	// (0x0007e79b) status_small_pane_t1

0x572c,	// (0x00082c33) main_video3_pane

0x1e90,	// (0x0007f397) cams_zoom_vslider_pane

0x1e98,	// (0x0007f39f) image3_wide_pane_ParamLimits

0x1e98,	// (0x0007f39f) image3_wide_pane

0x1eb2,	// (0x0007f3b9) image3_wide_small_pane

0x1ebc,	// (0x0007f3c3) main_video3_pane_g1_ParamLimits

0x1ebc,	// (0x0007f3c3) main_video3_pane_g1

0x1ed8,	// (0x0007f3df) main_video3_pane_g2_ParamLimits

0x1ed8,	// (0x0007f3df) main_video3_pane_g2

0x0001,

0xf857,	// (0x0008cd5e) main_video3_pane_g_ParamLimits

0xf857,	// (0x0008cd5e) main_video3_pane_g

0x1ef4,	// (0x0007f3fb) main_video3_pane_t1_ParamLimits

0x1ef4,	// (0x0007f3fb) main_video3_pane_t1

0x1f1f,	// (0x0007f426) main_video3_pane_t2_ParamLimits

0x1f1f,	// (0x0007f426) main_video3_pane_t2

0x1f4a,	// (0x0007f451) main_video3_pane_t3_ParamLimits

0x1f4a,	// (0x0007f451) main_video3_pane_t3

0x0002,

0xf85c,	// (0x0008cd63) main_video3_pane_t_ParamLimits

0xf85c,	// (0x0008cd63) main_video3_pane_t

0x1f75,	// (0x0007f47c) cams_zoom_vslider_pane_g1

0x1f7e,	// (0x0007f485) cams_zoom_vslider_pane_g2

0x0001,

0xf863,	// (0x0008cd6a) cams_zoom_vslider_pane_g

0x1f86,	// (0x0007f48d) small_slider_vertical_pane

0x17ca,	// (0x0007ecd1) small_slider_vertical_pane_g1

0x17ca,	// (0x0007ecd1) small_slider_vertical_pane_g2

0x1f8e,	// (0x0007f495) small_slider_vertical_pane_g3

0x0002,

0xf868,	// (0x0008cd6f) small_slider_vertical_pane_g

0x572c,	// (0x00082c33) main_hwr_training_pane

0x1f97,	// (0x0007f49e) hwr_training_instruct_pane_ParamLimits

0x1f97,	// (0x0007f49e) hwr_training_instruct_pane

0x9b72,	// (0x00087079) hwr_training_navi_pane_ParamLimits

0x9b72,	// (0x00087079) hwr_training_navi_pane

0x9b86,	// (0x0008708d) hwr_training_write_pane_ParamLimits

0x9b86,	// (0x0008708d) hwr_training_write_pane

0xd6cc,	// (0x0008abd3) bg_frame_shadow_pane

0x1fc6,	// (0x0007f4cd) hwr_training_write_pane_g1

0x1fce,	// (0x0007f4d5) hwr_training_write_pane_g2

0x1fd6,	// (0x0007f4dd) hwr_training_write_pane_g3

0x1fde,	// (0x0007f4e5) hwr_training_write_pane_g4

0x1fe6,	// (0x0007f4ed) hwr_training_write_pane_g5

0x1fee,	// (0x0007f4f5) hwr_training_write_pane_g6

0x1ff6,	// (0x0007f4fd) hwr_training_write_pane_g7

0x0006,

0xf86f,	// (0x0008cd76) hwr_training_write_pane_g

0x9bb4,	// (0x000870bb) hwr_training_navi_pane_g1_ParamLimits

0x9bb4,	// (0x000870bb) hwr_training_navi_pane_g1

0x9bc6,	// (0x000870cd) hwr_training_navi_pane_g2_ParamLimits

0x9bc6,	// (0x000870cd) hwr_training_navi_pane_g2

0x9bd8,	// (0x000870df) hwr_training_navi_pane_g3_ParamLimits

0x9bd8,	// (0x000870df) hwr_training_navi_pane_g3

0x9be8,	// (0x000870ef) hwr_training_navi_pane_g4_ParamLimits

0x9be8,	// (0x000870ef) hwr_training_navi_pane_g4

0x0004,

0xf87e,	// (0x0008cd85) hwr_training_navi_pane_g_ParamLimits

0xf87e,	// (0x0008cd85) hwr_training_navi_pane_g

0x9c02,	// (0x00087109) hwr_training_navi_pane_t1

0x9c10,	// (0x00087117) list_single_hwr_training_instruct_pane_ParamLimits

0x9c10,	// (0x00087117) list_single_hwr_training_instruct_pane

0x1ffe,	// (0x0007f505) list_single_hwr_training_instruct_pane_t1

0x170a,	// (0x0007ec11) bg_frame_shadow_pane_g1

0x200d,	// (0x0007f514) bg_frame_shadow_pane_g2

0x2015,	// (0x0007f51c) bg_frame_shadow_pane_g3

0x201d,	// (0x0007f524) bg_frame_shadow_pane_g4

0x2025,	// (0x0007f52c) bg_frame_shadow_pane_g5

0x202d,	// (0x0007f534) bg_frame_shadow_pane_g6

0x2035,	// (0x0007f53c) bg_frame_shadow_pane_g7

0xded6,	// (0x0008b3dd) bg_frame_shadow_pane_g8

0x0007,

0xf889,	// (0x0008cd90) bg_frame_shadow_pane_g

0x572c,	// (0x00082c33) main_video_tele_dialer_pane

0x9c28,	// (0x0008712f) aid_size_cell_video_keypad_ParamLimits

0x9c28,	// (0x0008712f) aid_size_cell_video_keypad

0x9c38,	// (0x0008713f) grid_video_dialer_keypad_pane_ParamLimits

0x9c38,	// (0x0008713f) grid_video_dialer_keypad_pane

0x9c68,	// (0x0008716f) video_down_pane_cp_ParamLimits

0x9c68,	// (0x0008716f) video_down_pane_cp

0x9c90,	// (0x00087197) cell_video_dialer_keypad_pane_ParamLimits

0x9c90,	// (0x00087197) cell_video_dialer_keypad_pane

0x203d,	// (0x0007f544) bg_button_pane_cp08_ParamLimits

0x203d,	// (0x0007f544) bg_button_pane_cp08

0x9ca5,	// (0x000871ac) cell_video_dialer_keypad_pane_g1_ParamLimits

0x9ca5,	// (0x000871ac) cell_video_dialer_keypad_pane_g1

0x94fa,	// (0x00086a01) mup3_rocker2_pane_ParamLimits

0x94fa,	// (0x00086a01) mup3_rocker2_pane

0x17ca,	// (0x0007ecd1) mup3_rocker2_pane_g1

0x8547,	// (0x00085a4e) main_dialer2_pane

0x572c,	// (0x00082c33) main_mp4_pane

0x9cec,	// (0x000871f3) main_mp4_pane_g1_ParamLimits

0x9cec,	// (0x000871f3) main_mp4_pane_g1

0x9cfa,	// (0x00087201) main_mp4_pane_g2_ParamLimits

0x9cfa,	// (0x00087201) main_mp4_pane_g2

0x9d08,	// (0x0008720f) main_mp4_pane_g3_ParamLimits

0x9d08,	// (0x0008720f) main_mp4_pane_g3

0x9d3d,	// (0x00087244) main_mp4_pane_g4_ParamLimits

0x9d3d,	// (0x00087244) main_mp4_pane_g4

0x9d6b,	// (0x00087272) main_mp4_pane_g5_ParamLimits

0x9d6b,	// (0x00087272) main_mp4_pane_g5

0x0007,

0xf8a9,	// (0x0008cdb0) main_mp4_pane_g_ParamLimits

0xf8a9,	// (0x0008cdb0) main_mp4_pane_g

0x9ddf,	// (0x000872e6) main_mp4_pane_t1_ParamLimits

0x9ddf,	// (0x000872e6) main_mp4_pane_t1

0x9e37,	// (0x0008733e) main_mp4_pane_t2_ParamLimits

0x9e37,	// (0x0008733e) main_mp4_pane_t2

0x2049,	// (0x0007f550) main_mp4_pane_t3_ParamLimits

0x2049,	// (0x0007f550) main_mp4_pane_t3

0x9e89,	// (0x00087390) main_mp4_pane_t4_ParamLimits

0x9e89,	// (0x00087390) main_mp4_pane_t4

0x0003,

0xf8ba,	// (0x0008cdc1) main_mp4_pane_t_ParamLimits

0xf8ba,	// (0x0008cdc1) main_mp4_pane_t

0x9ec9,	// (0x000873d0) mp4_progress_pane_ParamLimits

0x9ec9,	// (0x000873d0) mp4_progress_pane

0x9f0d,	// (0x00087414) mp4_rocker_pane_ParamLimits

0x9f0d,	// (0x00087414) mp4_rocker_pane

0x2077,	// (0x0007f57e) mp4_progress_pane_t1

0x208e,	// (0x0007f595) mp4_progress_pane_t2

0x0001,

0xf8c3,	// (0x0008cdca) mp4_progress_pane_t

0x20a5,	// (0x0007f5ac) mup_progress_pane_cp04

0x25ad,	// (0x0007fab4) mp4_rocker_pane_g1

0x9f2b,	// (0x00087432) aid_cell_size_keypad2_ParamLimits

0x9f2b,	// (0x00087432) aid_cell_size_keypad2

0x9f3b,	// (0x00087442) dialer2_ne_pane_ParamLimits

0x9f3b,	// (0x00087442) dialer2_ne_pane

0x9f47,	// (0x0008744e) grid_dialer2_keypad_pane_ParamLimits

0x9f47,	// (0x0008744e) grid_dialer2_keypad_pane

0x2610,	// (0x0007fb17) bg_popup_call_pane_cp07_ParamLimits

0x2610,	// (0x0007fb17) bg_popup_call_pane_cp07

0x9f53,	// (0x0008745a) dialer2_ne_pane_t1_ParamLimits

0x9f53,	// (0x0008745a) dialer2_ne_pane_t1

0x9f78,	// (0x0008747f) cell_dialer2_keypad_pane_ParamLimits

0x9f78,	// (0x0008747f) cell_dialer2_keypad_pane

0x20c3,	// (0x0007f5ca) bg_button_pane_pane_cp04_ParamLimits

0x20c3,	// (0x0007f5ca) bg_button_pane_pane_cp04

0x9f8d,	// (0x00087494) cell_dialer2_keypad_pane_g1_ParamLimits

0x9f8d,	// (0x00087494) cell_dialer2_keypad_pane_g1

0x65a9,	// (0x00083ab0) aid_placing_vt_set_content_ParamLimits

0x65a9,	// (0x00083ab0) aid_placing_vt_set_content

0x65cf,	// (0x00083ad6) aid_placing_vt_set_title_ParamLimits

0x65cf,	// (0x00083ad6) aid_placing_vt_set_title

0x572c,	// (0x00082c33) main_image3_pane

0xa001,	// (0x00087508) area_side_right_pane_cp01_ParamLimits

0xa001,	// (0x00087508) area_side_right_pane_cp01

0xa02e,	// (0x00087535) main_image3_pane_g1_ParamLimits

0xa02e,	// (0x00087535) main_image3_pane_g1

0xa03c,	// (0x00087543) main_image3_pane_g2_ParamLimits

0xa03c,	// (0x00087543) main_image3_pane_g2

0xa053,	// (0x0008755a) main_image3_pane_g3_ParamLimits

0xa053,	// (0x0008755a) main_image3_pane_g3

0xa06a,	// (0x00087571) main_image3_pane_g4_ParamLimits

0xa06a,	// (0x00087571) main_image3_pane_g4

0x0003,

0xf8d2,	// (0x0008cdd9) main_image3_pane_g_ParamLimits

0xf8d2,	// (0x0008cdd9) main_image3_pane_g

0xa081,	// (0x00087588) main_image3_pane_t1_ParamLimits

0xa081,	// (0x00087588) main_image3_pane_t1

0xa0a6,	// (0x000875ad) main_image3_pane_t2_ParamLimits

0xa0a6,	// (0x000875ad) main_image3_pane_t2

0xa0c5,	// (0x000875cc) main_image3_pane_t3_ParamLimits

0xa0c5,	// (0x000875cc) main_image3_pane_t3

0x0003,

0xf8db,	// (0x0008cde2) main_image3_pane_t_ParamLimits

0xf8db,	// (0x0008cde2) main_image3_pane_t

0x3ccb,	// (0x000811d2) grid_sctrl_middle_pane_cp01_ParamLimits

0x3ccb,	// (0x000811d2) grid_sctrl_middle_pane_cp01

0xa120,	// (0x00087627) cell_sctrl_middle_pane_cp01_ParamLimits

0xa120,	// (0x00087627) cell_sctrl_middle_pane_cp01

0xa131,	// (0x00087638) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0xa131,	// (0x00087638) cell_sctrl_middle_pane_cp01_g1

0x572c,	// (0x00082c33) main_call4_pane

0xa13e,	// (0x00087645) aid_size_button_call4_ParamLimits

0xa13e,	// (0x00087645) aid_size_button_call4

0xa168,	// (0x0008766f) call4_windows_pane_ParamLimits

0xa168,	// (0x0008766f) call4_windows_pane

0xa17c,	// (0x00087683) grid_call4_button_pane_ParamLimits

0xa17c,	// (0x00087683) grid_call4_button_pane

0x20e7,	// (0x0007f5ee) call4_windows_conf_pane

0xa19e,	// (0x000876a5) popup_call4_audio_first_window_ParamLimits

0xa19e,	// (0x000876a5) popup_call4_audio_first_window

0xa1be,	// (0x000876c5) popup_call4_audio_second_window_ParamLimits

0xa1be,	// (0x000876c5) popup_call4_audio_second_window

0x4286,	// (0x0008178d) popup_call4_audio_wait_window_ParamLimits

0x4286,	// (0x0008178d) popup_call4_audio_wait_window

0xa1d0,	// (0x000876d7) cell_call4_button_pane_ParamLimits

0xa1d0,	// (0x000876d7) cell_call4_button_pane

0xde80,	// (0x0008b387) bg_button_pane_cp09_ParamLimits

0xde80,	// (0x0008b387) bg_button_pane_cp09

0xa1f3,	// (0x000876fa) cell_call4_button_pane_g1_ParamLimits

0xa1f3,	// (0x000876fa) cell_call4_button_pane_g1

0xa200,	// (0x00087707) cell_call4_button_pane_t1_ParamLimits

0xa200,	// (0x00087707) cell_call4_button_pane_t1

0x429a,	// (0x000817a1) popup_call4_audio_conf_window_ParamLimits

0x429a,	// (0x000817a1) popup_call4_audio_conf_window

0x952b,	// (0x00086a32) mup3_progress_pane_t1_ParamLimits

0x9549,	// (0x00086a50) mup3_progress_pane_t2_ParamLimits

0x1aa0,	// (0x0007efa7) mup3_progress_pane_t3_ParamLimits

0xf7ab,	// (0x0008ccb2) mup3_progress_pane_t_ParamLimits

0x1abd,	// (0x0007efc4) mup_progress_pane_cp03_ParamLimits

0x9a24,	// (0x00086f2b) mup3_control_keys_pane_g4_copy1

0x9ef7,	// (0x000873fe) mp4_rocker2_pane_ParamLimits

0x9ef7,	// (0x000873fe) mp4_rocker2_pane

0x42b6,	// (0x000817bd) mp4_rocker2_pane_g1

0x42ae,	// (0x000817b5) mp4_rocker2_pane_g2

0xa244,	// (0x0008774b) mp4_rocker2_pane_g3

0xa24c,	// (0x00087753) mp4_rocker2_pane_g4

0xa254,	// (0x0008775b) mp4_rocker2_pane_g5

0x0004,

0xf8e4,	// (0x0008cdeb) mp4_rocker2_pane_g

0x572c,	// (0x00082c33) main_camera4_pane

0x572c,	// (0x00082c33) main_video4_pane

0x9c44,	// (0x0008714b) main_video_tele_dialer_pane_t1_ParamLimits

0x9c44,	// (0x0008714b) main_video_tele_dialer_pane_t1

0x9c56,	// (0x0008715d) main_video_tele_dialer_pane_t2_ParamLimits

0x9c56,	// (0x0008715d) main_video_tele_dialer_pane_t2

0x0001,

0xf89a,	// (0x0008cda1) main_video_tele_dialer_pane_t_ParamLimits

0xf89a,	// (0x0008cda1) main_video_tele_dialer_pane_t

0xa272,	// (0x00087779) cam4_autofocus_pane_ParamLimits

0xa272,	// (0x00087779) cam4_autofocus_pane

0xa288,	// (0x0008778f) cam4_image_uncrop_pane_ParamLimits

0xa288,	// (0x0008778f) cam4_image_uncrop_pane

0xa29d,	// (0x000877a4) cam4_indicators_pane_ParamLimits

0xa29d,	// (0x000877a4) cam4_indicators_pane

0xa2b7,	// (0x000877be) main_camera4_pane_g1_ParamLimits

0xa2b7,	// (0x000877be) main_camera4_pane_g1

0xa2c3,	// (0x000877ca) main_camera4_pane_g2_ParamLimits

0xa2c3,	// (0x000877ca) main_camera4_pane_g2

0xa2c3,	// (0x000877ca) main_camera4_pane_g3_ParamLimits

0xa2c3,	// (0x000877ca) main_camera4_pane_g3

0xa2cf,	// (0x000877d6) main_camera4_pane_g4_ParamLimits

0xa2cf,	// (0x000877d6) main_camera4_pane_g4

0xa2db,	// (0x000877e2) main_camera4_pane_g5_ParamLimits

0xa2db,	// (0x000877e2) main_camera4_pane_g5

0x0005,

0xf8ef,	// (0x0008cdf6) main_camera4_pane_g_ParamLimits

0xf8ef,	// (0x0008cdf6) main_camera4_pane_g

0xa2f5,	// (0x000877fc) main_camera4_pane_t1_ParamLimits

0xa2f5,	// (0x000877fc) main_camera4_pane_t1

0xa33d,	// (0x00087844) bg_tb_trans_pane_cp06

0xa353,	// (0x0008785a) cam4_indicators_pane_g1

0xa363,	// (0x0008786a) cam4_indicators_pane_g2

0x0002,

0xf90a,	// (0x0008ce11) cam4_indicators_pane_g

0xa383,	// (0x0008788a) cam4_indicators_pane_t1

0xa3ab,	// (0x000878b2) main_video4_pane_g1_ParamLimits

0xa3ab,	// (0x000878b2) main_video4_pane_g1

0xa2c3,	// (0x000877ca) main_video4_pane_g2_ParamLimits

0xa2c3,	// (0x000877ca) main_video4_pane_g2

0xa2c3,	// (0x000877ca) main_video4_pane_g3_ParamLimits

0xa2c3,	// (0x000877ca) main_video4_pane_g3

0xa2cf,	// (0x000877d6) main_video4_pane_g4_ParamLimits

0xa2cf,	// (0x000877d6) main_video4_pane_g4

0x0004,

0xf911,	// (0x0008ce18) main_video4_pane_g_ParamLimits

0xf911,	// (0x0008ce18) main_video4_pane_g

0xa3bf,	// (0x000878c6) vid4_indicators_pane_ParamLimits

0xa3bf,	// (0x000878c6) vid4_indicators_pane

0xa3dd,	// (0x000878e4) video4_image_uncrop_cif_pane_ParamLimits

0xa3dd,	// (0x000878e4) video4_image_uncrop_cif_pane

0xa3ea,	// (0x000878f1) video4_image_uncrop_nhd_pane_ParamLimits

0xa3ea,	// (0x000878f1) video4_image_uncrop_nhd_pane

0xa288,	// (0x0008778f) video4_image_uncrop_vga_pane_ParamLimits

0xa288,	// (0x0008778f) video4_image_uncrop_vga_pane

0x8539,	// (0x00085a40) bg_tb_trans_pane_cp07

0xa353,	// (0x0008785a) vid4_indicators_pane_g1

0xa3f7,	// (0x000878fe) vid4_indicators_pane_g2

0xa407,	// (0x0008790e) vid4_indicators_pane_g3

0x0004,

0xf91c,	// (0x0008ce23) vid4_indicators_pane_g

0xa434,	// (0x0008793b) vid4_indicators_pane_t1

0xa44e,	// (0x00087955) cam4_autofocus_pane_g1

0xa456,	// (0x0008795d) cam4_autofocus_pane_g2

0xa45e,	// (0x00087965) cam4_autofocus_pane_g3

0x0002,

0xf927,	// (0x0008ce2e) cam4_autofocus_pane_g

0xa466,	// (0x0008796d) cam4_autofocus_pane_g3_copy1

0x9c74,	// (0x0008717b) video_down_pane_cp_t1

0x9c82,	// (0x00087189) video_down_pane_cp_t2

0x0001,

0xf89f,	// (0x0008cda6) video_down_pane_cp_t

0x5716,	// (0x00082c1d) popup_vitu2_window_ParamLimits

0x5716,	// (0x00082c1d) popup_vitu2_window

0xa46e,	// (0x00087975) aid_size_cell2_itu2_ParamLimits

0xa46e,	// (0x00087975) aid_size_cell2_itu2

0xa490,	// (0x00087997) aid_size_cell_itu2_ParamLimits

0xa490,	// (0x00087997) aid_size_cell_itu2

0xa4ce,	// (0x000879d5) bg_popup_window_pane_cp09_ParamLimits

0xa4ce,	// (0x000879d5) bg_popup_window_pane_cp09

0xa4dc,	// (0x000879e3) field_vitu2_entry_pane_ParamLimits

0xa4dc,	// (0x000879e3) field_vitu2_entry_pane

0xa4f0,	// (0x000879f7) grid_vitu2_function_pane_ParamLimits

0xa4f0,	// (0x000879f7) grid_vitu2_function_pane

0xa51e,	// (0x00087a25) grid_vitu2_itu_pane_ParamLimits

0xa51e,	// (0x00087a25) grid_vitu2_itu_pane

0xa576,	// (0x00087a7d) cell_vitu2_itu_pane_ParamLimits

0xa576,	// (0x00087a7d) cell_vitu2_itu_pane

0xa58e,	// (0x00087a95) cell_vitu2_function_pane_ParamLimits

0xa58e,	// (0x00087a95) cell_vitu2_function_pane

0x42be,	// (0x000817c5) bg_popup_call_pane_cp08_ParamLimits

0x42be,	// (0x000817c5) bg_popup_call_pane_cp08

0x42d5,	// (0x000817dc) field_vitu2_entry_pane_g1

0x42e1,	// (0x000817e8) field_vitu2_entry_pane_g2

0x0002,

0xf92e,	// (0x0008ce35) field_vitu2_entry_pane_g

0xa5cd,	// (0x00087ad4) field_vitu2_entry_pane_t1_ParamLimits

0xa5cd,	// (0x00087ad4) field_vitu2_entry_pane_t1

0x211a,	// (0x0007f621) field_vitu2_entry_pane_t2_ParamLimits

0x211a,	// (0x0007f621) field_vitu2_entry_pane_t2

0x0001,

0xf935,	// (0x0008ce3c) field_vitu2_entry_pane_t_ParamLimits

0xf935,	// (0x0008ce3c) field_vitu2_entry_pane_t

0xa5fb,	// (0x00087b02) bg_button_pane_cp010_ParamLimits

0xa5fb,	// (0x00087b02) bg_button_pane_cp010

0xa609,	// (0x00087b10) cell_vitu2_itu_pane_g1

0xa629,	// (0x00087b30) cell_vitu2_itu_pane_t1_ParamLimits

0xa629,	// (0x00087b30) cell_vitu2_itu_pane_t1

0x53f6,	// (0x000828fd) cell_vitu2_itu_pane_t2_ParamLimits

0x53f6,	// (0x000828fd) cell_vitu2_itu_pane_t2

0x0002,

0xf93f,	// (0x0008ce46) cell_vitu2_itu_pane_t_ParamLimits

0xf93f,	// (0x0008ce46) cell_vitu2_itu_pane_t

0x8539,	// (0x00085a40) bg_button_pane_cp011

0xa675,	// (0x00087b7c) cell_vitu2_function_pane_g1

0x572c,	// (0x00082c33) main_myfav_hc_pane

0xa105,	// (0x0008760c) popup_image3_note_pane_ParamLimits

0xa105,	// (0x0008760c) popup_image3_note_pane

0xa111,	// (0x00087618) popup_image3_tool_bar_pane_ParamLimits

0xa111,	// (0x00087618) popup_image3_tool_bar_pane

0x546c,	// (0x00082973) cell_vitu2_itu_pane_t3_ParamLimits

0x546c,	// (0x00082973) cell_vitu2_itu_pane_t3

0xd6cc,	// (0x0008abd3) bg_popup_trans_pane

0x4303,	// (0x0008180a) grid_image3_tool_bar_pane

0x430d,	// (0x00081814) bg_popup_trans_pane_g1

0xe293,	// (0x0008b79a) bg_popup_trans_pane_g2

0x4315,	// (0x0008181c) bg_popup_trans_pane_g3

0x431d,	// (0x00081824) bg_popup_trans_pane_g4

0x4325,	// (0x0008182c) bg_popup_trans_pane_g5

0x432d,	// (0x00081834) bg_popup_trans_pane_g6

0x4335,	// (0x0008183c) bg_popup_trans_pane_g7

0x433d,	// (0x00081844) bg_popup_trans_pane_g8

0xe273,	// (0x0008b77a) bg_popup_trans_pane_g9

0x0008,

0xf946,	// (0x0008ce4d) bg_popup_trans_pane_g

0x4345,	// (0x0008184c) cell_image3_tool_bar_pane_ParamLimits

0x4345,	// (0x0008184c) cell_image3_tool_bar_pane

0x17ca,	// (0x0007ecd1) cell_image3_tool_bar_pane_g1

0xd6cc,	// (0x0008abd3) bg_popup_trans_pane_cp1

0x4359,	// (0x00081860) popup_image3_note_pane_t1

0x4367,	// (0x0008186e) popup_image3_note_pane_t2

0x4375,	// (0x0008187c) popup_image3_note_pane_t3

0x0002,

0xf959,	// (0x0008ce60) popup_image3_note_pane_t

0x4383,	// (0x0008188a) popup_image3_note_pane_t3_copy1

0xa689,	// (0x00087b90) bg_myfav_hc_instruction_pane_ParamLimits

0xa689,	// (0x00087b90) bg_myfav_hc_instruction_pane

0xa69b,	// (0x00087ba2) cell_myfav_contact_pane_ParamLimits

0xa69b,	// (0x00087ba2) cell_myfav_contact_pane

0xa6b5,	// (0x00087bbc) cell_myfav_contact_pane_cp1_ParamLimits

0xa6b5,	// (0x00087bbc) cell_myfav_contact_pane_cp1

0xa6cb,	// (0x00087bd2) cell_myfav_contact_pane_cp2_ParamLimits

0xa6cb,	// (0x00087bd2) cell_myfav_contact_pane_cp2

0xa6e1,	// (0x00087be8) cell_myfav_contact_pane_cp3_ParamLimits

0xa6e1,	// (0x00087be8) cell_myfav_contact_pane_cp3

0xa6f6,	// (0x00087bfd) cell_myfav_contact_pane_cp4_ParamLimits

0xa6f6,	// (0x00087bfd) cell_myfav_contact_pane_cp4

0xa70a,	// (0x00087c11) cell_myfav_contact_pane_cp5_ParamLimits

0xa70a,	// (0x00087c11) cell_myfav_contact_pane_cp5

0xa71e,	// (0x00087c25) cell_myfav_contact_pane_cp6_ParamLimits

0xa71e,	// (0x00087c25) cell_myfav_contact_pane_cp6

0xa732,	// (0x00087c39) cell_myfav_contact_pane_cp7_ParamLimits

0xa732,	// (0x00087c39) cell_myfav_contact_pane_cp7

0x4391,	// (0x00081898) listscroll_gen_pane_cp05

0xa74a,	// (0x00087c51) main_myfav_hc_pane_g1_ParamLimits

0xa74a,	// (0x00087c51) main_myfav_hc_pane_g1

0xa760,	// (0x00087c67) main_myfav_hc_pane_g2_ParamLimits

0xa760,	// (0x00087c67) main_myfav_hc_pane_g2

0x0002,

0xf960,	// (0x0008ce67) main_myfav_hc_pane_g_ParamLimits

0xf960,	// (0x0008ce67) main_myfav_hc_pane_g

0xa78a,	// (0x00087c91) main_myfav_hc_pane_t1_ParamLimits

0xa78a,	// (0x00087c91) main_myfav_hc_pane_t1

0x439a,	// (0x000818a1) main_myfav_hc_pane_t2_ParamLimits

0x439a,	// (0x000818a1) main_myfav_hc_pane_t2

0x43ac,	// (0x000818b3) main_myfav_hc_pane_t3_ParamLimits

0x43ac,	// (0x000818b3) main_myfav_hc_pane_t3

0xa79f,	// (0x00087ca6) main_myfav_hc_pane_t4_ParamLimits

0xa79f,	// (0x00087ca6) main_myfav_hc_pane_t4

0x0004,

0xf967,	// (0x0008ce6e) main_myfav_hc_pane_t_ParamLimits

0xf967,	// (0x0008ce6e) main_myfav_hc_pane_t

0x17ca,	// (0x0007ecd1) bg_myfav_hc_instruction_pane_g1

0x43be,	// (0x000818c5) cell_myfav_contact_pane_g1_ParamLimits

0x43be,	// (0x000818c5) cell_myfav_contact_pane_g1

0x43be,	// (0x000818c5) cell_myfav_contact_pane_g2_ParamLimits

0x43be,	// (0x000818c5) cell_myfav_contact_pane_g2

0x43ca,	// (0x000818d1) cell_myfav_contact_pane_g3_ParamLimits

0x43ca,	// (0x000818d1) cell_myfav_contact_pane_g3

0x1a8a,	// (0x0007ef91) cell_myfav_contact_pane_g4_ParamLimits

0x1a8a,	// (0x0007ef91) cell_myfav_contact_pane_g4

0x43d7,	// (0x000818de) cell_myfav_contact_pane_g5_ParamLimits

0x43d7,	// (0x000818de) cell_myfav_contact_pane_g5

0x0004,

0xf972,	// (0x0008ce79) cell_myfav_contact_pane_g_ParamLimits

0xf972,	// (0x0008ce79) cell_myfav_contact_pane_g

0xa776,	// (0x00087c7d) main_myfav_hc_pane_g3_ParamLimits

0xa776,	// (0x00087c7d) main_myfav_hc_pane_g3

0x565a,	// (0x00082b61) popup_adpt_find_window

0xa7c3,	// (0x00087cca) afind_page_pane_ParamLimits

0xa7c3,	// (0x00087cca) afind_page_pane

0xa7d0,	// (0x00087cd7) aid_size_cell_afind_ParamLimits

0xa7d0,	// (0x00087cd7) aid_size_cell_afind

0xa7ea,	// (0x00087cf1) bg_popup_sub_pane_cp09_ParamLimits

0xa7ea,	// (0x00087cf1) bg_popup_sub_pane_cp09

0xa7f7,	// (0x00087cfe) find_pane_cp01_ParamLimits

0xa7f7,	// (0x00087cfe) find_pane_cp01

0x43e3,	// (0x000818ea) grid_afind_control_pane_ParamLimits

0x43e3,	// (0x000818ea) grid_afind_control_pane

0xa804,	// (0x00087d0b) grid_afind_pane_ParamLimits

0xa804,	// (0x00087d0b) grid_afind_pane

0xa81a,	// (0x00087d21) cell_afind_pane_ParamLimits

0xa81a,	// (0x00087d21) cell_afind_pane

0x17ca,	// (0x0007ecd1) afind_page_pane_g1

0xa850,	// (0x00087d57) afind_page_pane_g2

0xa859,	// (0x00087d60) afind_page_pane_g3

0x0002,

0xf97d,	// (0x0008ce84) afind_page_pane_g

0xa862,	// (0x00087d69) afind_page_pane_t1

0x43f7,	// (0x000818fe) cell_afind_grid_control_pane_ParamLimits

0x43f7,	// (0x000818fe) cell_afind_grid_control_pane

0x20c3,	// (0x0007f5ca) bg_button_pane_cp69_ParamLimits

0x20c3,	// (0x0007f5ca) bg_button_pane_cp69

0xa882,	// (0x00087d89) cell_afind_pane_g1_ParamLimits

0xa882,	// (0x00087d89) cell_afind_pane_g1

0xa88f,	// (0x00087d96) cell_afind_pane_t1_ParamLimits

0xa88f,	// (0x00087d96) cell_afind_pane_t1

0xe07f,	// (0x0008b586) bg_button_pane_cp72

0x4406,	// (0x0008190d) cell_afind_grid_control_pane_g1

0x8171,	// (0x00085678) aid_image_placing_area_ParamLimits

0x8171,	// (0x00085678) aid_image_placing_area

0x1d9d,	// (0x0007f2a4) field_vitu_entry_pane_g1_ParamLimits

0x1d9d,	// (0x0007f2a4) field_vitu_entry_pane_g1

0x1da9,	// (0x0007f2b0) field_vitu_entry_pane_g2_ParamLimits

0x1da9,	// (0x0007f2b0) field_vitu_entry_pane_g2

0x0001,

0xf82a,	// (0x0008cd31) field_vitu_entry_pane_g_ParamLimits

0xf82a,	// (0x0008cd31) field_vitu_entry_pane_g

0x9a9f,	// (0x00086fa6) cell_vitu_itu_pane_g1_ParamLimits

0x9ae1,	// (0x00086fe8) cell_vitu_itu_pane_t3_ParamLimits

0x9ae1,	// (0x00086fe8) cell_vitu_itu_pane_t3

0x2077,	// (0x0007f57e) mp4_progress_pane_t1_ParamLimits

0x208e,	// (0x0007f595) mp4_progress_pane_t2_ParamLimits

0xf8c3,	// (0x0008cdca) mp4_progress_pane_t_ParamLimits

0x20a5,	// (0x0007f5ac) mup_progress_pane_cp04_ParamLimits

0xa7b1,	// (0x00087cb8) main_myfav_hc_pane_t5_ParamLimits

0xa7b1,	// (0x00087cb8) main_myfav_hc_pane_t5

0x53ee,	// (0x000828f5) aid_zoom_text_primary

0x565a,	// (0x00082b61) popup_adpt_find_window_ParamLimits

0x8539,	// (0x00085a40) main_cam_set_pane

0xa2ab,	// (0x000877b2) cam4_zoom_pane_ParamLimits

0xa2ab,	// (0x000877b2) cam4_zoom_pane

0xa8a1,	// (0x00087da8) main_cam_set_pane_g1_ParamLimits

0xa8a1,	// (0x00087da8) main_cam_set_pane_g1

0xa8af,	// (0x00087db6) main_cam_set_pane_g2_ParamLimits

0xa8af,	// (0x00087db6) main_cam_set_pane_g2

0x0001,

0xf984,	// (0x0008ce8b) main_cam_set_pane_g_ParamLimits

0xf984,	// (0x0008ce8b) main_cam_set_pane_g

0xa8bb,	// (0x00087dc2) main_cam_set_pane_t1_ParamLimits

0xa8bb,	// (0x00087dc2) main_cam_set_pane_t1

0xa8cd,	// (0x00087dd4) main_cset_listscroll_pane_ParamLimits

0xa8cd,	// (0x00087dd4) main_cset_listscroll_pane

0xa8f6,	// (0x00087dfd) main_cset_slider_pane_ParamLimits

0xa8f6,	// (0x00087dfd) main_cset_slider_pane

0x4417,	// (0x0008191e) main_cset_list_pane_ParamLimits

0x4417,	// (0x0008191e) main_cset_list_pane

0x4427,	// (0x0008192e) scroll_pane_cp028

0xa915,	// (0x00087e1c) aid_area_touch_slider

0xa931,	// (0x00087e38) cset_slider_pane

0xa95b,	// (0x00087e62) main_cset_slider_pane_g1

0xa970,	// (0x00087e77) main_cset_slider_pane_g2

0x0011,

0xf989,	// (0x0008ce90) main_cset_slider_pane_g

0x4460,	// (0x00081967) main_cset_slider_pane_t1

0xaa2c,	// (0x00087f33) main_cset_slider_pane_t2

0xaa46,	// (0x00087f4d) main_cset_slider_pane_t3

0xaa60,	// (0x00087f67) main_cset_slider_pane_t4

0xaa7a,	// (0x00087f81) main_cset_slider_pane_t5

0xaa94,	// (0x00087f9b) main_cset_slider_pane_t6

0xaaa9,	// (0x00087fb0) main_cset_slider_pane_t7

0x000e,

0xf9ae,	// (0x0008ceb5) main_cset_slider_pane_t

0xabad,	// (0x000880b4) cset_list_set_pane_ParamLimits

0xabad,	// (0x000880b4) cset_list_set_pane

0xabbd,	// (0x000880c4) aid_position_infowindow_above

0xabc5,	// (0x000880cc) aid_position_infowindow_below

0xabcd,	// (0x000880d4) cset_list_set_pane_g1_ParamLimits

0xabcd,	// (0x000880d4) cset_list_set_pane_g1

0xabd9,	// (0x000880e0) cset_list_set_pane_g3_ParamLimits

0xabd9,	// (0x000880e0) cset_list_set_pane_g3

0x0001,

0xf9cd,	// (0x0008ced4) cset_list_set_pane_g_ParamLimits

0xf9cd,	// (0x0008ced4) cset_list_set_pane_g

0xabe8,	// (0x000880ef) cset_list_set_pane_t1_ParamLimits

0xabe8,	// (0x000880ef) cset_list_set_pane_t1

0x0367,	// (0x0007d86e) list_highlight_pane_cp021_ParamLimits

0x0367,	// (0x0007d86e) list_highlight_pane_cp021

0xeb3e,	// (0x0008c045) cset_slider_pane_g1

0xeb50,	// (0x0008c057) cset_slider_pane_g2

0xeb47,	// (0x0008c04e) cset_slider_pane_g3

0x0002,

0xf9d2,	// (0x0008ced9) cset_slider_pane_g

0xabfd,	// (0x00088104) aid_area_touch_cam4_zoom

0xac05,	// (0x0008810c) cam4_zoom_cont_pane

0xac0d,	// (0x00088114) cam4_zoom_pane_g1

0xac15,	// (0x0008811c) cam4_zoom_pane_g2

0xac1d,	// (0x00088124) cam4_zoom_pane_g3

0x0002,

0xf9d9,	// (0x0008cee0) cam4_zoom_pane_g

0xac25,	// (0x0008812c) cam4_zoom_cont_pane_g1

0xac2e,	// (0x00088135) cam4_zoom_cont_pane_g2

0xac37,	// (0x0008813e) cam4_zoom_cont_pane_g3

0x0002,

0xf9e0,	// (0x0008cee7) cam4_zoom_cont_pane_g

0xa158,	// (0x0008765f) call4_image_pane_ParamLimits

0xa158,	// (0x0008765f) call4_image_pane

0x20e7,	// (0x0007f5ee) call4_windows_conf_pane_ParamLimits

0x20fa,	// (0x0007f601) popup_call4_audio_in_window_ParamLimits

0x20fa,	// (0x0007f601) popup_call4_audio_in_window

0xd6cc,	// (0x0008abd3) bg_popup_call2_act_pane_cp02

0x4292,	// (0x00081799) call4_list_conf_pane

0x17ca,	// (0x0007ecd1) call4_image_pane_g1

0x17ca,	// (0x0007ecd1) call4_image_pane_g2

0x0001,

0xf6eb,	// (0x0008cbf2) call4_image_pane_g

0x452d,	// (0x00081a34) list_single_graphic_popup_conf4_pane_ParamLimits

0x452d,	// (0x00081a34) list_single_graphic_popup_conf4_pane

0xd6cc,	// (0x0008abd3) list_highlight_pane_cp022

0x2137,	// (0x0007f63e) list_single_graphic_popup_conf4_pane_g1

0xe781,	// (0x0008bc88) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf9e7,	// (0x0008ceee) list_single_graphic_popup_conf4_pane_g

0x213f,	// (0x0007f646) list_single_graphic_popup_conf4_pane_t1

0x6713,	// (0x00083c1a) popup_vtel_slider_window_ParamLimits

0x6713,	// (0x00083c1a) popup_vtel_slider_window

0x20b1,	// (0x0007f5b8) dialer2_ne_pane_t2_ParamLimits

0x20b1,	// (0x0007f5b8) dialer2_ne_pane_t2

0x0001,

0xf8c8,	// (0x0008cdcf) dialer2_ne_pane_t_ParamLimits

0xf8c8,	// (0x0008cdcf) dialer2_ne_pane_t

0x0367,	// (0x0007d86e) bg_popup_sub_pane_cp010_ParamLimits

0x0367,	// (0x0007d86e) bg_popup_sub_pane_cp010

0xac40,	// (0x00088147) popup_vtel_slider_window_g1_ParamLimits

0xac40,	// (0x00088147) popup_vtel_slider_window_g1

0xac4c,	// (0x00088153) popup_vtel_slider_window_g2_ParamLimits

0xac4c,	// (0x00088153) popup_vtel_slider_window_g2

0x0003,

0xf9ec,	// (0x0008cef3) popup_vtel_slider_window_g_ParamLimits

0xf9ec,	// (0x0008cef3) popup_vtel_slider_window_g

0xac92,	// (0x00088199) vtel_slider_pane_ParamLimits

0xac92,	// (0x00088199) vtel_slider_pane

0xaca1,	// (0x000881a8) vtel_slider_pane_g1_ParamLimits

0xaca1,	// (0x000881a8) vtel_slider_pane_g1

0xacae,	// (0x000881b5) vtel_slider_pane_g2_ParamLimits

0xacae,	// (0x000881b5) vtel_slider_pane_g2

0xacbb,	// (0x000881c2) vtel_slider_pane_g3_ParamLimits

0xacbb,	// (0x000881c2) vtel_slider_pane_g3

0xaca1,	// (0x000881a8) vtel_slider_pane_g4_ParamLimits

0xaca1,	// (0x000881a8) vtel_slider_pane_g4

0xacc8,	// (0x000881cf) vtel_slider_pane_g5_ParamLimits

0xacc8,	// (0x000881cf) vtel_slider_pane_g5

0x0004,

0xf9f5,	// (0x0008cefc) vtel_slider_pane_g_ParamLimits

0xf9f5,	// (0x0008cefc) vtel_slider_pane_g

0x8539,	// (0x00085a40) main_gallery2_pane

0xa4b6,	// (0x000879bd) aid_size_row_itut2_dropdow_list_ParamLimits

0xa4b6,	// (0x000879bd) aid_size_row_itut2_dropdow_list

0xa506,	// (0x00087a0d) grid_vitu2_function_top_pane_ParamLimits

0xa506,	// (0x00087a0d) grid_vitu2_function_top_pane

0xa542,	// (0x00087a49) popup_vitu2_dropdown_list_window_ParamLimits

0xa542,	// (0x00087a49) popup_vitu2_dropdown_list_window

0xa55a,	// (0x00087a61) popup_vitu2_match_list_window

0xacd5,	// (0x000881dc) cell_vitu2_function_top_pane_ParamLimits

0xacd5,	// (0x000881dc) cell_vitu2_function_top_pane

0xaced,	// (0x000881f4) cell_vitu2_function_top_pane_cp01_ParamLimits

0xaced,	// (0x000881f4) cell_vitu2_function_top_pane_cp01

0xad09,	// (0x00088210) cell_vitu2_function_top_wide_pane_ParamLimits

0xad09,	// (0x00088210) cell_vitu2_function_top_wide_pane

0x8539,	// (0x00085a40) bg_button_pane_cp012

0xad25,	// (0x0008822c) cell_vitu2_function_top_pane_g1

0xad39,	// (0x00088240) bg_button_pane_cp013_ParamLimits

0xad39,	// (0x00088240) bg_button_pane_cp013

0xad55,	// (0x0008825c) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0xad55,	// (0x0008825c) cell_vitu2_function_top_wide_pane_g1

0x5716,	// (0x00082c1d) bg_popup_sub_pane_cp20

0xad6d,	// (0x00088274) list_vitu2_match_list_pane

0x430d,	// (0x00081814) bg_popup_sub_pane_cp20_g1

0x4315,	// (0x0008181c) bg_popup_sub_pane_cp20_g2

0xe293,	// (0x0008b79a) bg_popup_sub_pane_cp20_g3

0x431d,	// (0x00081824) bg_popup_sub_pane_cp20_g4

0xe273,	// (0x0008b77a) bg_popup_sub_pane_cp20_g5

0x2163,	// (0x0007f66a) bg_popup_sub_pane_cp20_g6

0x432d,	// (0x00081834) bg_popup_sub_pane_cp20_g7

0x4335,	// (0x0008183c) bg_popup_sub_pane_cp20_g8

0x433d,	// (0x00081844) bg_popup_sub_pane_cp20_g9

0x0008,

0xfa00,	// (0x0008cf07) bg_popup_sub_pane_cp20_g

0xad85,	// (0x0008828c) list_vitu2_match_list_item_pane_ParamLimits

0xad85,	// (0x0008828c) list_vitu2_match_list_item_pane

0xad97,	// (0x0008829e) list_vitu2_match_list_item_pane_t1

0x572c,	// (0x00082c33) bg_popup_sub_pane_cp21

0xadd4,	// (0x000882db) grid_vitu2_dropdown_list_pane

0xaddc,	// (0x000882e3) cell_vitu2_dropdown_list_char_pane_ParamLimits

0xaddc,	// (0x000882e3) cell_vitu2_dropdown_list_char_pane

0xadfd,	// (0x00088304) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0xadfd,	// (0x00088304) cell_vitu2_dropdown_list_ctrl_pane

0x2189,	// (0x0007f690) cell_vitu2_dropdown_list_char_pane_g1

0x2180,	// (0x0007f687) cell_vitu2_dropdown_list_char_pane_g2

0x2177,	// (0x0007f67e) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xfa1d,	// (0x0008cf24) cell_vitu2_dropdown_list_char_pane_g

0xae29,	// (0x00088330) cell_vitu2_dropdown_list_char_pane_t1

0xae37,	// (0x0008833e) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0xae37,	// (0x0008833e) cell_vitu2_dropdown_list_ctrl_pane_g1

0xae47,	// (0x0008834e) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0xae47,	// (0x0008834e) cell_vitu2_dropdown_list_ctrl_pane_g2

0xae58,	// (0x0008835f) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0xae58,	// (0x0008835f) cell_vitu2_dropdown_list_ctrl_pane_g3

0xae68,	// (0x0008836f) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0xae68,	// (0x0008836f) cell_vitu2_dropdown_list_ctrl_pane_g4

0xa33d,	// (0x00087844) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0xa33d,	// (0x00087844) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa24,	// (0x0008cf2b) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa24,	// (0x0008cf2b) cell_vitu2_dropdown_list_ctrl_pane_g

0xae81,	// (0x00088388) aid_size_cell_gallery2_ParamLimits

0xae81,	// (0x00088388) aid_size_cell_gallery2

0xae9b,	// (0x000883a2) grid_gallery2_pane_ParamLimits

0xae9b,	// (0x000883a2) grid_gallery2_pane

0x994e,	// (0x00086e55) scroll_pane_cp029_ParamLimits

0x994e,	// (0x00086e55) scroll_pane_cp029

0xaeac,	// (0x000883b3) cell_gallery2_pane_ParamLimits

0xaeac,	// (0x000883b3) cell_gallery2_pane

0x2192,	// (0x0007f699) cell_gallery2_pane_g2

0xaef9,	// (0x00088400) cell_gallery2_pane_g3

0x219a,	// (0x0007f6a1) cell_gallery2_pane_g4

0x21a2,	// (0x0007f6a9) cell_gallery2_pane_g5

0xdfe2,	// (0x0008b4e9) grid_highlight_pane_cp10

0xa55a,	// (0x00087a61) popup_vitu2_match_list_window_ParamLimits

0xa56a,	// (0x00087a71) popup_vitu2_query_window_ParamLimits

0xa56a,	// (0x00087a71) popup_vitu2_query_window

0x572c,	// (0x00082c33) bg_vitu2_candi_button_pane

0x2189,	// (0x0007f690) cell_vitu2_dropdown_list_char_pane_g1_copy1

0x2180,	// (0x0007f687) cell_vitu2_dropdown_list_char_pane_g2_copy1

0x2177,	// (0x0007f67e) cell_vitu2_dropdown_list_char_pane_g2_copy2

0xaf01,	// (0x00088408) bg_button_pane_cp015

0xaf11,	// (0x00088418) bg_button_pane_cp016

0xaf24,	// (0x0008842b) bg_button_pane_cp017

0x12b6,	// (0x0007e7bd) bg_popup_sub_pane_cp22

0x21aa,	// (0x0007f6b1) popup_vitu2_query_window_g1

0xaf67,	// (0x0008846e) popup_vitu2_query_window_g2

0x0002,

0xfa2f,	// (0x0008cf36) popup_vitu2_query_window_g

0xaf82,	// (0x00088489) popup_vitu2_query_window_t1_ParamLimits

0xaf82,	// (0x00088489) popup_vitu2_query_window_t1

0xafb5,	// (0x000884bc) popup_vitu2_query_window_t2_ParamLimits

0xafb5,	// (0x000884bc) popup_vitu2_query_window_t2

0xafc7,	// (0x000884ce) popup_vitu2_query_window_t3_ParamLimits

0xafc7,	// (0x000884ce) popup_vitu2_query_window_t3

0xafef,	// (0x000884f6) popup_vitu2_query_window_t4_ParamLimits

0xafef,	// (0x000884f6) popup_vitu2_query_window_t4

0xb00c,	// (0x00088513) popup_vitu2_query_window_t5_ParamLimits

0xb00c,	// (0x00088513) popup_vitu2_query_window_t5

0x0006,

0xfa36,	// (0x0008cf3d) popup_vitu2_query_window_t_ParamLimits

0xfa36,	// (0x0008cf3d) popup_vitu2_query_window_t

0x440f,	// (0x00081916) main_cset_text_pane

0xa915,	// (0x00087e1c) aid_area_touch_slider_ParamLimits

0xa931,	// (0x00087e38) cset_slider_pane_ParamLimits

0xa95b,	// (0x00087e62) main_cset_slider_pane_g1_ParamLimits

0xa970,	// (0x00087e77) main_cset_slider_pane_g2_ParamLimits

0x4430,	// (0x00081937) main_cset_slider_pane_g3_ParamLimits

0x4430,	// (0x00081937) main_cset_slider_pane_g3

0xa985,	// (0x00087e8c) main_cset_slider_pane_g4_ParamLimits

0xa985,	// (0x00087e8c) main_cset_slider_pane_g4

0xa994,	// (0x00087e9b) main_cset_slider_pane_g5_ParamLimits

0xa994,	// (0x00087e9b) main_cset_slider_pane_g5

0xa9a0,	// (0x00087ea7) main_cset_slider_pane_g6_ParamLimits

0xa9a0,	// (0x00087ea7) main_cset_slider_pane_g6

0xf989,	// (0x0008ce90) main_cset_slider_pane_g_ParamLimits

0x4460,	// (0x00081967) main_cset_slider_pane_t1_ParamLimits

0xaa2c,	// (0x00087f33) main_cset_slider_pane_t2_ParamLimits

0xaa46,	// (0x00087f4d) main_cset_slider_pane_t3_ParamLimits

0xaa60,	// (0x00087f67) main_cset_slider_pane_t4_ParamLimits

0xaa7a,	// (0x00087f81) main_cset_slider_pane_t5_ParamLimits

0xaa94,	// (0x00087f9b) main_cset_slider_pane_t6_ParamLimits

0xaaa9,	// (0x00087fb0) main_cset_slider_pane_t7_ParamLimits

0xaad3,	// (0x00087fda) main_cset_slider_pane_t8_ParamLimits

0xaad3,	// (0x00087fda) main_cset_slider_pane_t8

0xaafb,	// (0x00088002) main_cset_slider_pane_t9_ParamLimits

0xaafb,	// (0x00088002) main_cset_slider_pane_t9

0xab23,	// (0x0008802a) main_cset_slider_pane_t10_ParamLimits

0xab23,	// (0x0008802a) main_cset_slider_pane_t10

0xab4b,	// (0x00088052) main_cset_slider_pane_t11_ParamLimits

0xab4b,	// (0x00088052) main_cset_slider_pane_t11

0xab73,	// (0x0008807a) main_cset_slider_pane_t12_ParamLimits

0xab73,	// (0x0008807a) main_cset_slider_pane_t12

0xab90,	// (0x00088097) main_cset_slider_pane_t13_ParamLimits

0xab90,	// (0x00088097) main_cset_slider_pane_t13

0xf9ae,	// (0x0008ceb5) main_cset_slider_pane_t_ParamLimits

0xd6cc,	// (0x0008abd3) bg_popup_sub_pane_cp011

0x21b6,	// (0x0007f6bd) main_cset_text_pane_g1

0x21be,	// (0x0007f6c5) main_cset_text_pane_t1

0x21cc,	// (0x0007f6d3) main_cset_text_pane_t2

0x21da,	// (0x0007f6e1) main_cset_text_pane_t3

0x21e8,	// (0x0007f6ef) main_cset_text_pane_t4

0x21f6,	// (0x0007f6fd) main_cset_text_pane_t5

0x2204,	// (0x0007f70b) main_cset_text_pane_t6

0x2212,	// (0x0007f719) main_cset_text_pane_t7

0x0006,

0xfa45,	// (0x0008cf4c) main_cset_text_pane_t

0x572c,	// (0x00082c33) main_cam4_burst_pane

0x572c,	// (0x00082c33) main_cam5_pane

0xa870,	// (0x00087d77) bg_button_pane_cp019

0xa879,	// (0x00087d80) bg_button_pane_cp020

0x443c,	// (0x00081943) main_cset_slider_pane_g7_ParamLimits

0x443c,	// (0x00081943) main_cset_slider_pane_g7

0x4448,	// (0x0008194f) main_cset_slider_pane_g8_ParamLimits

0x4448,	// (0x0008194f) main_cset_slider_pane_g8

0xa9b4,	// (0x00087ebb) main_cset_slider_pane_g9_ParamLimits

0xa9b4,	// (0x00087ebb) main_cset_slider_pane_g9

0xa9c0,	// (0x00087ec7) main_cset_slider_pane_g10_ParamLimits

0xa9c0,	// (0x00087ec7) main_cset_slider_pane_g10

0xa9cc,	// (0x00087ed3) main_cset_slider_pane_g11_ParamLimits

0xa9cc,	// (0x00087ed3) main_cset_slider_pane_g11

0xa9d8,	// (0x00087edf) main_cset_slider_pane_g12_ParamLimits

0xa9d8,	// (0x00087edf) main_cset_slider_pane_g12

0xa9e4,	// (0x00087eeb) main_cset_slider_pane_g13_ParamLimits

0xa9e4,	// (0x00087eeb) main_cset_slider_pane_g13

0xa9f0,	// (0x00087ef7) main_cset_slider_pane_g14_ParamLimits

0xa9f0,	// (0x00087ef7) main_cset_slider_pane_g14

0xa9fc,	// (0x00087f03) main_cset_slider_pane_g15_ParamLimits

0xa9fc,	// (0x00087f03) main_cset_slider_pane_g15

0x448e,	// (0x00081995) main_cset_slider_pane_t14_ParamLimits

0x448e,	// (0x00081995) main_cset_slider_pane_t14

0x44c7,	// (0x000819ce) main_cset_slider_pane_t15_ParamLimits

0x44c7,	// (0x000819ce) main_cset_slider_pane_t15

0xb07f,	// (0x00088586) aid_cam4_burst_size_cell_ParamLimits

0xb07f,	// (0x00088586) aid_cam4_burst_size_cell

0xb09b,	// (0x000885a2) grid_cam4_burst_pane_ParamLimits

0xb09b,	// (0x000885a2) grid_cam4_burst_pane

0xb0bd,	// (0x000885c4) linegrid_cam4_burst_pane_ParamLimits

0xb0bd,	// (0x000885c4) linegrid_cam4_burst_pane

0xb0db,	// (0x000885e2) scroll_pane_cp30_ParamLimits

0xb0db,	// (0x000885e2) scroll_pane_cp30

0xb0e7,	// (0x000885ee) cell_cam4_burst_pane_ParamLimits

0xb0e7,	// (0x000885ee) cell_cam4_burst_pane

0x2220,	// (0x0007f727) linegrid_cam4_burst_pane_g1_ParamLimits

0x2220,	// (0x0007f727) linegrid_cam4_burst_pane_g1

0xb11f,	// (0x00088626) linegrid_cam4_burst_pane_g2_ParamLimits

0xb11f,	// (0x00088626) linegrid_cam4_burst_pane_g2

0x222d,	// (0x0007f734) linegrid_cam4_burst_pane_g3_ParamLimits

0x222d,	// (0x0007f734) linegrid_cam4_burst_pane_g3

0x0002,

0xfa54,	// (0x0008cf5b) linegrid_cam4_burst_pane_g_ParamLimits

0xfa54,	// (0x0008cf5b) linegrid_cam4_burst_pane_g

0xb130,	// (0x00088637) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0xb130,	// (0x00088637) linegrid_cam4_burst_pane_g3_copy1

0x223a,	// (0x0007f741) linegrid_cam4_burst_pane_g4_ParamLimits

0x223a,	// (0x0007f741) linegrid_cam4_burst_pane_g4

0xb14a,	// (0x00088651) linegrid_cam4_burst_pane_g5_ParamLimits

0xb14a,	// (0x00088651) linegrid_cam4_burst_pane_g5

0xb15b,	// (0x00088662) linegrid_cam4_burst_pane_g6_ParamLimits

0xb15b,	// (0x00088662) linegrid_cam4_burst_pane_g6

0x2247,	// (0x0007f74e) linegrid_cam4_burst_pane_g7_ParamLimits

0x2247,	// (0x0007f74e) linegrid_cam4_burst_pane_g7

0xb16c,	// (0x00088673) cell_cam4_burst_pane_g1

0x2260,	// (0x0007f767) main_cam5_pane_t1_ParamLimits

0x2260,	// (0x0007f767) main_cam5_pane_t1

0x2272,	// (0x0007f779) main_cam5_pane_t2_ParamLimits

0x2272,	// (0x0007f779) main_cam5_pane_t2

0x2284,	// (0x0007f78b) main_cam5_pane_t3_ParamLimits

0x2284,	// (0x0007f78b) main_cam5_pane_t3

0x2296,	// (0x0007f79d) main_cam5_pane_t4_ParamLimits

0x2296,	// (0x0007f79d) main_cam5_pane_t4

0x22ac,	// (0x0007f7b3) main_cam5_pane_t5_ParamLimits

0x22ac,	// (0x0007f7b3) main_cam5_pane_t5

0x22be,	// (0x0007f7c5) main_cam5_pane_t6_ParamLimits

0x22be,	// (0x0007f7c5) main_cam5_pane_t6

0x22d0,	// (0x0007f7d7) main_cam5_pane_t7_ParamLimits

0x22d0,	// (0x0007f7d7) main_cam5_pane_t7

0x22e2,	// (0x0007f7e9) main_cam5_pane_t8_ParamLimits

0x22e2,	// (0x0007f7e9) main_cam5_pane_t8

0x22fe,	// (0x0007f805) main_cam5_pane_t9_ParamLimits

0x22fe,	// (0x0007f805) main_cam5_pane_t9

0x2310,	// (0x0007f817) main_cam5_pane_t10_ParamLimits

0x2310,	// (0x0007f817) main_cam5_pane_t10

0x2322,	// (0x0007f829) main_cam5_pane_t11_ParamLimits

0x2322,	// (0x0007f829) main_cam5_pane_t11

0x2334,	// (0x0007f83b) main_cam5_pane_t12_ParamLimits

0x2334,	// (0x0007f83b) main_cam5_pane_t12

0x2349,	// (0x0007f850) main_cam5_pane_t13_ParamLimits

0x2349,	// (0x0007f850) main_cam5_pane_t13

0x000c,

0xfa60,	// (0x0008cf67) main_cam5_pane_t_ParamLimits

0xfa60,	// (0x0008cf67) main_cam5_pane_t

0x56d5,	// (0x00082bdc) popup_scut_keymap_window_ParamLimits

0x56d5,	// (0x00082bdc) popup_scut_keymap_window

0xb17f,	// (0x00088686) aid_size_cell_brow_shortcut

0xdfe2,	// (0x0008b4e9) bg_popup_window_pane_cp010

0xb18b,	// (0x00088692) grid_scut_pane

0xb195,	// (0x0008869c) cell_scut_pane_ParamLimits

0xb195,	// (0x0008869c) cell_scut_pane

0xb1aa,	// (0x000886b1) cell_scut_pane_g1

0x2366,	// (0x0007f86d) cell_scut_pane_t1

0x2375,	// (0x0007f87c) cell_scut_pane_t2

0xb1b3,	// (0x000886ba) cell_scut_pane_t3

0x0002,

0xfa7b,	// (0x0008cf82) cell_scut_pane_t

0x919e,	// (0x000866a5) main_mup3_pane_g8_ParamLimits

0x919e,	// (0x000866a5) main_mup3_pane_g8

0xa4c2,	// (0x000879c9) area_vitu2_query_pane_ParamLimits

0xa4c2,	// (0x000879c9) area_vitu2_query_pane

0xaf37,	// (0x0008843e) input_focus_pane_cp08

0x2384,	// (0x0007f88b) area_vitu2_query_pane_g1

0xb1c1,	// (0x000886c8) area_vitu2_query_pane_g2

0x0001,

0xfa82,	// (0x0008cf89) area_vitu2_query_pane_g

0xb1d0,	// (0x000886d7) area_vitu2_query_pane_t1_ParamLimits

0xb1d0,	// (0x000886d7) area_vitu2_query_pane_t1

0xb1e2,	// (0x000886e9) area_vitu2_query_pane_t2_ParamLimits

0xb1e2,	// (0x000886e9) area_vitu2_query_pane_t2

0xb1f4,	// (0x000886fb) area_vitu2_query_pane_t3_ParamLimits

0xb1f4,	// (0x000886fb) area_vitu2_query_pane_t3

0x2390,	// (0x0007f897) area_vitu2_query_pane_t4_ParamLimits

0x2390,	// (0x0007f897) area_vitu2_query_pane_t4

0x23b8,	// (0x0007f8bf) area_vitu2_query_pane_t5_ParamLimits

0x23b8,	// (0x0007f8bf) area_vitu2_query_pane_t5

0x23e0,	// (0x0007f8e7) area_vitu2_query_pane_t6_ParamLimits

0x23e0,	// (0x0007f8e7) area_vitu2_query_pane_t6

0x0006,

0xfa87,	// (0x0008cf8e) area_vitu2_query_pane_t_ParamLimits

0xfa87,	// (0x0008cf8e) area_vitu2_query_pane_t

0xb21c,	// (0x00088723) bg_button_pane_cp018

0xb229,	// (0x00088730) bg_button_pane_cp021

0xb235,	// (0x0008873c) bg_button_pane_cp022

0xb244,	// (0x0008874b) input_focus_pane_cp09

0x794e,	// (0x00084e55) aid_size_touch_mv_arrow_left

0xe8bf,	// (0x0008bdc6) aid_size_touch_mv_arrow_right

0xaa14,	// (0x00087f1b) main_cset_slider_pane_g16_ParamLimits

0xaa14,	// (0x00087f1b) main_cset_slider_pane_g16

0xaa20,	// (0x00087f27) main_cset_slider_pane_g17_ParamLimits

0xaa20,	// (0x00087f27) main_cset_slider_pane_g17

0xb16c,	// (0x00088673) cell_cam4_burst_pane_g1_ParamLimits

0xd6cc,	// (0x0008abd3) compa_mode_pane

0xac58,	// (0x0008815f) popup_vtel_slider_window_g3_ParamLimits

0xac58,	// (0x0008815f) popup_vtel_slider_window_g3

0xac6c,	// (0x00088173) popup_vtel_slider_window_g4_ParamLimits

0xac6c,	// (0x00088173) popup_vtel_slider_window_g4

0xac80,	// (0x00088187) popup_vtel_slider_window_t1_ParamLimits

0xac80,	// (0x00088187) popup_vtel_slider_window_t1

0x572c,	// (0x00082c33) main_cl_pane

0x85c5,	// (0x00085acc) popup_imed_adjust2_window_ParamLimits

0x12b6,	// (0x0007e7bd) bg_tb_trans_pane_cp05_ParamLimits

0x1cd2,	// (0x0007f1d9) popup_imed_adjust2_window_g1_ParamLimits

0x1ce1,	// (0x0007f1e8) popup_imed_adjust2_window_g2_ParamLimits

0x1ce1,	// (0x0007f1e8) popup_imed_adjust2_window_g2

0x1ced,	// (0x0007f1f4) popup_imed_adjust2_window_g3_ParamLimits

0x1ced,	// (0x0007f1f4) popup_imed_adjust2_window_g3

0x0002,

0xf7ee,	// (0x0008ccf5) popup_imed_adjust2_window_g_ParamLimits

0xf7ee,	// (0x0008ccf5) popup_imed_adjust2_window_g

0x1cf9,	// (0x0007f200) popup_imed_adjust2_window_t1_ParamLimits

0x1d11,	// (0x0007f218) slider_imed_adjust_pane_ParamLimits

0x1d25,	// (0x0007f22c) slider_imed_adjust_pane_g1_ParamLimits

0x1d35,	// (0x0007f23c) slider_imed_adjust_pane_g2_ParamLimits

0x1d45,	// (0x0007f24c) slider_imed_adjust_pane_g3_ParamLimits

0x1d56,	// (0x0007f25d) slider_imed_adjust_pane_g4_ParamLimits

0xf7f5,	// (0x0008ccfc) slider_imed_adjust_pane_g_ParamLimits

0xa25c,	// (0x00087763) aid_touch_area_cam4_ParamLimits

0xa25c,	// (0x00087763) aid_touch_area_cam4

0xa26a,	// (0x00087771) battery_pane_cp01

0xa2e9,	// (0x000877f0) main_camera4_pane_g6_ParamLimits

0xa2e9,	// (0x000877f0) main_camera4_pane_g6

0xa307,	// (0x0008780e) main_camera4_pane_t2_ParamLimits

0xa307,	// (0x0008780e) main_camera4_pane_t2

0x0001,

0xf8fc,	// (0x0008ce03) main_camera4_pane_t_ParamLimits

0xf8fc,	// (0x0008ce03) main_camera4_pane_t

0xa39d,	// (0x000878a4) aid_touch_area_vid4_ParamLimits

0xa39d,	// (0x000878a4) aid_touch_area_vid4

0xa2e9,	// (0x000877f0) main_video4_pane_g5_ParamLimits

0xa2e9,	// (0x000877f0) main_video4_pane_g5

0xa3cd,	// (0x000878d4) vid4_progress_pane_ParamLimits

0xa3cd,	// (0x000878d4) vid4_progress_pane

0x4454,	// (0x0008195b) main_cset_slider_pane_g18_ParamLimits

0x4454,	// (0x0008195b) main_cset_slider_pane_g18

0x2254,	// (0x0007f75b) cell_cam4_burst_pane_g2_ParamLimits

0x2254,	// (0x0007f75b) cell_cam4_burst_pane_g2

0x0001,

0xfa5b,	// (0x0008cf62) cell_cam4_burst_pane_g_ParamLimits

0xfa5b,	// (0x0008cf62) cell_cam4_burst_pane_g

0xb253,	// (0x0008875a) bg_cl_pane_ParamLimits

0xb253,	// (0x0008875a) bg_cl_pane

0xb25f,	// (0x00088766) cl_header_pane_ParamLimits

0xb25f,	// (0x00088766) cl_header_pane

0xb26b,	// (0x00088772) cl_listscroll_pane_ParamLimits

0xb26b,	// (0x00088772) cl_listscroll_pane

0x242c,	// (0x0007f933) bg_cl_pane_g1

0x2434,	// (0x0007f93b) bg_cl_pane_g2

0x243c,	// (0x0007f943) bg_cl_pane_g3

0x2444,	// (0x0007f94b) bg_cl_pane_g4

0x244c,	// (0x0007f953) bg_cl_pane_g5

0x2454,	// (0x0007f95b) bg_cl_pane_g6

0x245c,	// (0x0007f963) bg_cl_pane_g7

0x2464,	// (0x0007f96b) bg_cl_pane_g8

0x246c,	// (0x0007f973) bg_cl_pane_g9

0x0008,

0xfa96,	// (0x0008cf9d) bg_cl_pane_g

0xb277,	// (0x0008877e) aid_height_cl_leading_ParamLimits

0xb277,	// (0x0008877e) aid_height_cl_leading

0xb283,	// (0x0008878a) aid_height_cl_text_ParamLimits

0xb283,	// (0x0008878a) aid_height_cl_text

0x3ccb,	// (0x000811d2) bg_cl_header_pane_ParamLimits

0x3ccb,	// (0x000811d2) bg_cl_header_pane

0xb29b,	// (0x000887a2) cl_header_pane_g1_ParamLimits

0xb29b,	// (0x000887a2) cl_header_pane_g1

0xb2a8,	// (0x000887af) cl_header_pane_t1_ParamLimits

0xb2a8,	// (0x000887af) cl_header_pane_t1

0x2474,	// (0x0007f97b) cl_list_pane

0x247d,	// (0x0007f984) hc_scroll_pane_cp01

0xe273,	// (0x0008b77a) bg_cl_header_pane_g1

0x430d,	// (0x00081814) bg_cl_header_pane_g2

0xe293,	// (0x0008b79a) bg_cl_header_pane_g3

0x431d,	// (0x00081824) bg_cl_header_pane_g4

0x4315,	// (0x0008181c) bg_cl_header_pane_g5

0x2163,	// (0x0007f66a) bg_cl_header_pane_g6

0x4335,	// (0x0008183c) bg_cl_header_pane_g7

0x433d,	// (0x00081844) bg_cl_header_pane_g8

0x432d,	// (0x00081834) bg_cl_header_pane_g9

0x0008,

0xfaa9,	// (0x0008cfb0) bg_cl_header_pane_g

0xb2ba,	// (0x000887c1) hc_cl_list_double_graphic_heading_pane_ParamLimits

0xb2ba,	// (0x000887c1) hc_cl_list_double_graphic_heading_pane

0xb2ca,	// (0x000887d1) hc_cl_list_single_graphic_pane_ParamLimits

0xb2ca,	// (0x000887d1) hc_cl_list_single_graphic_pane

0xb2dc,	// (0x000887e3) hc_cl_list_single_graphic_pane_g1_ParamLimits

0xb2dc,	// (0x000887e3) hc_cl_list_single_graphic_pane_g1

0xb2e8,	// (0x000887ef) hc_cl_list_single_graphic_pane_g2_ParamLimits

0xb2e8,	// (0x000887ef) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfabc,	// (0x0008cfc3) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfabc,	// (0x0008cfc3) hc_cl_list_single_graphic_pane_g

0xb2fc,	// (0x00088803) hc_cl_list_single_graphic_pane_t1_ParamLimits

0xb2fc,	// (0x00088803) hc_cl_list_single_graphic_pane_t1

0xb2dc,	// (0x000887e3) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0xb2dc,	// (0x000887e3) hc_cl_list_double_graphic_heading_pane_g1

0xb311,	// (0x00088818) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0xb311,	// (0x00088818) hc_cl_list_double_graphic_heading_pane_g2

0xb325,	// (0x0008882c) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0xb325,	// (0x0008882c) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfac1,	// (0x0008cfc8) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfac1,	// (0x0008cfc8) hc_cl_list_double_graphic_heading_pane_g

0xb339,	// (0x00088840) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0xb339,	// (0x00088840) hc_cl_list_double_graphic_heading_pane_t1

0xb34e,	// (0x00088855) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0xb34e,	// (0x00088855) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfac8,	// (0x0008cfcf) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfac8,	// (0x0008cfcf) hc_cl_list_double_graphic_heading_pane_t

0xb363,	// (0x0008886a) vid4_progress_pane_g1

0xb372,	// (0x00088879) vid4_progress_pane_g2

0xb381,	// (0x00088888) vid4_progress_pane_g3

0xb390,	// (0x00088897) vid4_progress_pane_g4

0x0004,

0xfacd,	// (0x0008cfd4) vid4_progress_pane_g

0xb3a8,	// (0x000888af) vid4_progress_pane_t1

0xb3be,	// (0x000888c5) vid4_progress_pane_t2

0x0002,

0xfad8,	// (0x0008cfdf) vid4_progress_pane_t

0xb3e8,	// (0x000888ef) wait_bar_pane_cp07

0x15c5,	// (0x0007eacc) blid_firmament_pane_ParamLimits

0x1606,	// (0x0007eb0d) popup_blid_sat_info2_window_g1

0x162a,	// (0x0007eb31) popup_blid_sat_info2_window_t3

0x1638,	// (0x0007eb3f) popup_blid_sat_info2_window_t4

0x1646,	// (0x0007eb4d) popup_blid_sat_info2_window_t5

0x1654,	// (0x0007eb5b) popup_blid_sat_info2_window_t6

0x1664,	// (0x0007eb6b) popup_blid_sat_info2_window_t7

0x1672,	// (0x0007eb79) popup_blid_sat_info2_window_t8

0x1680,	// (0x0007eb87) popup_blid_sat_info2_window_t9

0x168e,	// (0x0007eb95) popup_blid_sat_info2_window_t10

0x174a,	// (0x0007ec51) aid_firma_cardinal_ParamLimits

0x175e,	// (0x0007ec65) blid_firmament_pane_t1_ParamLimits

0x1775,	// (0x0007ec7c) blid_firmament_pane_t2_ParamLimits

0x178c,	// (0x0007ec93) blid_firmament_pane_t3_ParamLimits

0x17a3,	// (0x0007ecaa) blid_firmament_pane_t4_ParamLimits

0xf6e2,	// (0x0008cbe9) blid_firmament_pane_t_ParamLimits

0x17ba,	// (0x0007ecc1) blid_sat_info_pane_ParamLimits

0x8539,	// (0x00085a40) main_cam_set_pane_ParamLimits

0x98ee,	// (0x00086df5) aid_size_cell_colour_35_ParamLimits

0x9905,	// (0x00086e0c) aid_size_cell_colour_112_ParamLimits

0x991c,	// (0x00086e23) aid_size_cell_effect_ParamLimits

0x0367,	// (0x0007d86e) bg_tb_trans_pane_cp02_ParamLimits

0xf0ba,	// (0x0008c5c1) heading_imed_pane_ParamLimits

0x9936,	// (0x00086e3d) listscroll_imed_pane_ParamLimits

0x089c,	// (0x0007dda3) popup_call2_audio_first_window_g5_ParamLimits

0x089c,	// (0x0007dda3) popup_call2_audio_first_window_g5

0x9fd9,	// (0x000874e0) aid_size_touch_image3_arrow_left_ParamLimits

0x9fd9,	// (0x000874e0) aid_size_touch_image3_arrow_left

0x9fed,	// (0x000874f4) aid_size_touch_image3_arrow_right_ParamLimits

0x9fed,	// (0x000874f4) aid_size_touch_image3_arrow_right

0xb3d3,	// (0x000888da) vid4_progress_pane_t3

0x9b9a,	// (0x000870a1) main_hwr_training_symbol_option_pane_ParamLimits

0x9b9a,	// (0x000870a1) main_hwr_training_symbol_option_pane

0x1fb1,	// (0x0007f4b8) popup_hwr_training_preview_window_ParamLimits

0x1fb1,	// (0x0007f4b8) popup_hwr_training_preview_window

0x9bf5,	// (0x000870fc) hwr_training_navi_pane_g5_ParamLimits

0x9bf5,	// (0x000870fc) hwr_training_navi_pane_g5

0x42fb,	// (0x00081802) popup_char_count_window

0x5716,	// (0x00082c1d) bg_popup_sub_pane_cp20_ParamLimits

0xad6d,	// (0x00088274) list_vitu2_match_list_pane_ParamLimits

0xad79,	// (0x00088280) vitu2_page_scroll_pane_ParamLimits

0xad79,	// (0x00088280) vitu2_page_scroll_pane

0x24a9,	// (0x0007f9b0) list_single_hwr_training_symbol_option_pane_ParamLimits

0x24a9,	// (0x0007f9b0) list_single_hwr_training_symbol_option_pane

0x24bc,	// (0x0007f9c3) list_single_hwr_training_symbol_option_pane_g1

0x24c4,	// (0x0007f9cb) list_single_hwr_training_symbol_option_pane_t1

0x24d2,	// (0x0007f9d9) bg_button_pane_cp023

0x24db,	// (0x0007f9e2) bg_button_pane_cp024

0xb427,	// (0x0008892e) vitu2_page_scroll_pane_g1

0xb42f,	// (0x00088936) vitu2_page_scroll_pane_g2

0x0001,

0xfadf,	// (0x0008cfe6) vitu2_page_scroll_pane_g

0xb437,	// (0x0008893e) vitu2_page_scroll_pane_t1

0x17f3,	// (0x0007ecfa) popup_char_count_window_g1

0x250e,	// (0x0007fa15) popup_char_count_window_g2

0x2517,	// (0x0007fa1e) popup_char_count_window_g3

0x0002,

0xfae4,	// (0x0008cfeb) popup_char_count_window_g

0x2520,	// (0x0007fa27) popup_char_count_window_t1

0x572c,	// (0x00082c33) main_vded2_pane

0x1cc0,	// (0x0007f1c7) aid_size_cell_imed_line

0x1cca,	// (0x0007f1d1) grid_imed_line_width_pane

0xa418,	// (0x0008791f) vid4_indicators_pane_g4

0x252e,	// (0x0007fa35) cell_imed_line_width_pane_ParamLimits

0x252e,	// (0x0007fa35) cell_imed_line_width_pane

0x2540,	// (0x0007fa47) cell_imed_line_width_pane_g1

0x2549,	// (0x0007fa50) cell_imed_line_width_pane_g2

0x0001,

0xfaeb,	// (0x0008cff2) cell_imed_line_width_pane_g

0xb446,	// (0x0008894d) main_vded2_pane_g1_ParamLimits

0xb446,	// (0x0008894d) main_vded2_pane_g1

0xb453,	// (0x0008895a) main_vded2_pane_g2_ParamLimits

0xb453,	// (0x0008895a) main_vded2_pane_g2

0x0001,

0xfaf0,	// (0x0008cff7) main_vded2_pane_g_ParamLimits

0xfaf0,	// (0x0008cff7) main_vded2_pane_g

0xb45f,	// (0x00088966) vded2_slider_pane_ParamLimits

0xb45f,	// (0x00088966) vded2_slider_pane

0xb46c,	// (0x00088973) aid_size_touch_vded2_end

0xb474,	// (0x0008897b) aid_size_touch_vded2_playhead

0xb47c,	// (0x00088983) aid_size_touch_vded2_start

0xb484,	// (0x0008898b) vded2_slider_bg_pane

0xb48d,	// (0x00088994) vded2_slider_pane_g1

0xb496,	// (0x0008899d) vded2_slider_pane_g2

0xb49e,	// (0x000889a5) vded2_slider_pane_g3

0x0002,

0xfaf5,	// (0x0008cffc) vded2_slider_pane_g

0xb4a7,	// (0x000889ae) vded2_slider_bg_pane_g1

0xb4b0,	// (0x000889b7) vded2_slider_bg_pane_g2

0xb4b9,	// (0x000889c0) vded2_slider_bg_pane_g3

0x0002,

0xfafc,	// (0x0008d003) vded2_slider_bg_pane_g

0x7f21,	// (0x00085428) aid_postcard_touch_down_pane_ParamLimits

0x7f21,	// (0x00085428) aid_postcard_touch_down_pane

0x7f2d,	// (0x00085434) aid_postcard_touch_up_pane_ParamLimits

0x7f2d,	// (0x00085434) aid_postcard_touch_up_pane

0x572c,	// (0x00082c33) main_blid2_pane

0x8562,	// (0x00085a69) popup_blid2_search_window

0xd6cc,	// (0x0008abd3) blid2_gps_pane

0xd6cc,	// (0x0008abd3) blid2_navig_pane

0xd6cc,	// (0x0008abd3) blid2_search_pane

0xd6cc,	// (0x0008abd3) blid2_tripm_pane

0xb4c2,	// (0x000889c9) blid2_search_pane_g1_ParamLimits

0xb4c2,	// (0x000889c9) blid2_search_pane_g1

0xb4ce,	// (0x000889d5) blid2_search_pane_t1_ParamLimits

0xb4ce,	// (0x000889d5) blid2_search_pane_t1

0xb4e0,	// (0x000889e7) aid_size_cell_blid2_gps_ParamLimits

0xb4e0,	// (0x000889e7) aid_size_cell_blid2_gps

0xb4f0,	// (0x000889f7) blid2_gps_pane_g1_ParamLimits

0xb4f0,	// (0x000889f7) blid2_gps_pane_g1

0xb4fc,	// (0x00088a03) grid_blid2_satellite_pane_ParamLimits

0xb4fc,	// (0x00088a03) grid_blid2_satellite_pane

0xb508,	// (0x00088a0f) blid2_navig_pane_g1_ParamLimits

0xb508,	// (0x00088a0f) blid2_navig_pane_g1

0xb514,	// (0x00088a1b) blid2_navig_pane_t1_ParamLimits

0xb514,	// (0x00088a1b) blid2_navig_pane_t1

0xb526,	// (0x00088a2d) blid2_navig_pane_t2_ParamLimits

0xb526,	// (0x00088a2d) blid2_navig_pane_t2

0x0001,

0xfb03,	// (0x0008d00a) blid2_navig_pane_t_ParamLimits

0xfb03,	// (0x0008d00a) blid2_navig_pane_t

0xb538,	// (0x00088a3f) blid2_navig_ring_pane_ParamLimits

0xb538,	// (0x00088a3f) blid2_navig_ring_pane

0xb544,	// (0x00088a4b) blid2_speed_pane_ParamLimits

0xb544,	// (0x00088a4b) blid2_speed_pane

0xb550,	// (0x00088a57) blid2_tripm_pane_g1_ParamLimits

0xb550,	// (0x00088a57) blid2_tripm_pane_g1

0xb55c,	// (0x00088a63) blid2_tripm_pane_g2_ParamLimits

0xb55c,	// (0x00088a63) blid2_tripm_pane_g2

0xb568,	// (0x00088a6f) blid2_tripm_pane_g3_ParamLimits

0xb568,	// (0x00088a6f) blid2_tripm_pane_g3

0xb574,	// (0x00088a7b) blid2_tripm_pane_g4_ParamLimits

0xb574,	// (0x00088a7b) blid2_tripm_pane_g4

0xb580,	// (0x00088a87) blid2_tripm_pane_g5_ParamLimits

0xb580,	// (0x00088a87) blid2_tripm_pane_g5

0x0005,

0xfb08,	// (0x0008d00f) blid2_tripm_pane_g_ParamLimits

0xfb08,	// (0x0008d00f) blid2_tripm_pane_g

0xb598,	// (0x00088a9f) blid2_tripm_pane_t1_ParamLimits

0xb598,	// (0x00088a9f) blid2_tripm_pane_t1

0xb5aa,	// (0x00088ab1) blid2_tripm_pane_t2_ParamLimits

0xb5aa,	// (0x00088ab1) blid2_tripm_pane_t2

0xb5bc,	// (0x00088ac3) blid2_tripm_pane_t3_ParamLimits

0xb5bc,	// (0x00088ac3) blid2_tripm_pane_t3

0x0003,

0xfb15,	// (0x0008d01c) blid2_tripm_pane_t_ParamLimits

0xfb15,	// (0x0008d01c) blid2_tripm_pane_t

0xb5ec,	// (0x00088af3) cell_blid2_satellite_pane_ParamLimits

0xb5ec,	// (0x00088af3) cell_blid2_satellite_pane

0xb604,	// (0x00088b0b) cell_blid2_satellite_pane_g1

0x2551,	// (0x0007fa58) cell_blid2_satellite_pane_t1

0x17ca,	// (0x0007ecd1) blid2_speed_pane_g1

0x255f,	// (0x0007fa66) blid2_speed_pane_t1

0x256d,	// (0x0007fa74) blid2_speed_pane_t2

0x0001,

0xfb1e,	// (0x0008d025) blid2_speed_pane_t

0x17ca,	// (0x0007ecd1) blid2_navig_ring_pane_g1

0xb60d,	// (0x00088b14) blid2_navig_ring_pane_g2

0xb615,	// (0x00088b1c) blid2_navig_ring_pane_g3

0xb61d,	// (0x00088b24) blid2_navig_ring_pane_g4

0xb625,	// (0x00088b2c) blid2_navig_ring_pane_g5

0x0004,

0xfb23,	// (0x0008d02a) blid2_navig_ring_pane_g

0xd6cc,	// (0x0008abd3) bg_popup_window_pane_cp011

0x257b,	// (0x0007fa82) popup_blid2_search_window_g1

0x2583,	// (0x0007fa8a) popup_blid2_search_window_t1

0x2591,	// (0x0007fa98) popup_blid2_search_window_t2

0x0001,

0xfb2e,	// (0x0008d035) popup_blid2_search_window_t

0xe182,	// (0x0008b689) main_browser_pane_g1

0xde0b,	// (0x0008b312) main_browser_pane_ParamLimits

0x8539,	// (0x00085a40) bg_button_pane_cp011_ParamLimits

0xa675,	// (0x00087b7c) cell_vitu2_function_pane_g1_ParamLimits

0x12b6,	// (0x0007e7bd) bg_popup_sub_pane_cp22_ParamLimits

0xaf37,	// (0x0008843e) input_focus_pane_cp08_ParamLimits

0xaf4e,	// (0x00088455) popup_vitu2_query_button_pane_ParamLimits

0xaf4e,	// (0x00088455) popup_vitu2_query_button_pane

0xaf5f,	// (0x00088466) popup_vitu2_query_input_button_pane

0x21aa,	// (0x0007f6b1) popup_vitu2_query_window_g1_ParamLimits

0xaf67,	// (0x0008846e) popup_vitu2_query_window_g2_ParamLimits

0xfa2f,	// (0x0008cf36) popup_vitu2_query_window_g_ParamLimits

0xd6cc,	// (0x0008abd3) bg_button_pane_cp026

0xb62d,	// (0x00088b34) popup_vitu2_query_input_button_pane_g1

0xd6cc,	// (0x0008abd3) bg_button_pane_cp025

0x259f,	// (0x0007faa6) popup_vitu2_query_button_pane_t1

0x8f1c,	// (0x00086423) main_mp3_pane_t6

0x8f2a,	// (0x00086431) popup_slider_window_cp01

0xa34b,	// (0x00087852) cam4_battery_pane

0xa34b,	// (0x00087852) cam4_battery_pane_cp02

0xa34b,	// (0x00087852) cam4_battery_pane_cp01

0xa34b,	// (0x00087852) cam4_battery_pane_cp03

0x25ad,	// (0x0007fab4) cam4_battery_pane_g1

0x17ca,	// (0x0007ecd1) cam4_battery_pane_g2

0x0001,

0xfb33,	// (0x0008d03a) cam4_battery_pane_g

0x169c,	// (0x0007eba3) popup_blid_sat_info2_window_t11

0x794e,	// (0x00084e55) aid_size_touch_mv_arrow_left_ParamLimits

0xe8bf,	// (0x0008bdc6) aid_size_touch_mv_arrow_right_ParamLimits

0xe918,	// (0x0008be1f) navi_pane_g1_ParamLimits

0xe924,	// (0x0008be2b) navi_pane_g2_ParamLimits

0x7972,	// (0x00084e79) navi_pane_g3_ParamLimits

0xf3e1,	// (0x0008c8e8) navi_pane_g_ParamLimits

0x798f,	// (0x00084e96) navi_pane_mv_t1_ParamLimits

0x9942,	// (0x00086e49) grid_imed_effect_pane_ParamLimits

0x65ef,	// (0x00083af6) aid_placing_vt_slider_lsc

0xe0c4,	// (0x0008b5cb) aid_placing_vt_slider_prt

0x0367,	// (0x0007d86e) bg_tb_trans_pane_cp01_ParamLimits

0x1919,	// (0x0007ee20) popup_image_details_window_g1_ParamLimits

0x192c,	// (0x0007ee33) popup_image_details_window_g2_ParamLimits

0x1941,	// (0x0007ee48) popup_image_details_window_g3_ParamLimits

0x1941,	// (0x0007ee48) popup_image_details_window_g3

0xf727,	// (0x0008cc2e) popup_image_details_window_g_ParamLimits

0x1955,	// (0x0007ee5c) popup_image_details_window_t1_ParamLimits

0x1967,	// (0x0007ee6e) popup_image_details_window_t2_ParamLimits

0x1980,	// (0x0007ee87) popup_image_details_window_t3_ParamLimits

0x1994,	// (0x0007ee9b) popup_image_details_window_t4_ParamLimits

0x19af,	// (0x0007eeb6) popup_image_details_window_t5_ParamLimits

0xf72e,	// (0x0008cc35) popup_image_details_window_t_ParamLimits

0xb28f,	// (0x00088796) cl_header_name_pane_ParamLimits

0xb28f,	// (0x00088796) cl_header_name_pane

0xb635,	// (0x00088b3c) cl_header_name_pane_t1_ParamLimits

0xb635,	// (0x00088b3c) cl_header_name_pane_t1

0xb64c,	// (0x00088b53) cl_header_name_pane_t2_ParamLimits

0xb64c,	// (0x00088b53) cl_header_name_pane_t2

0xb676,	// (0x00088b7d) cl_header_name_pane_t3_ParamLimits

0xb676,	// (0x00088b7d) cl_header_name_pane_t3

0x0002,

0xfb38,	// (0x0008d03f) cl_header_name_pane_t_ParamLimits

0xfb38,	// (0x0008d03f) cl_header_name_pane_t

0xe9b1,	// (0x0008beb8) navi_pane_mv_g2_ParamLimits

0x42d5,	// (0x000817dc) field_vitu2_entry_pane_g1_ParamLimits

0x42e1,	// (0x000817e8) field_vitu2_entry_pane_g2_ParamLimits

0x42ed,	// (0x000817f4) field_vitu2_entry_pane_g3_ParamLimits

0x42ed,	// (0x000817f4) field_vitu2_entry_pane_g3

0xf92e,	// (0x0008ce35) field_vitu2_entry_pane_g_ParamLimits

0xa609,	// (0x00087b10) cell_vitu2_itu_pane_g1_ParamLimits

0xa61b,	// (0x00087b22) cell_vitu2_itu_pane_g2_ParamLimits

0xa61b,	// (0x00087b22) cell_vitu2_itu_pane_g2

0x0001,

0xf93a,	// (0x0008ce41) cell_vitu2_itu_pane_g_ParamLimits

0xf93a,	// (0x0008ce41) cell_vitu2_itu_pane_g

0x8539,	// (0x00085a40) bg_vkb2_func_pane_cp05_ParamLimits

0x8539,	// (0x00085a40) bg_vkb2_func_pane_cp05

0x8539,	// (0x00085a40) bg_vkb2_func_pane_cp03

0x8539,	// (0x00085a40) bg_vkb2_func_pane_cp04

0x8539,	// (0x00085a40) bg_vkb2_func_pane_cp10_ParamLimits

0x8539,	// (0x00085a40) bg_vkb2_func_pane_cp10

0xb235,	// (0x0008873c) bg_vkb2_func_pane_cp08

0xb21c,	// (0x00088723) bg_vkb2_func_pane_cp06

0xb229,	// (0x00088730) bg_vkb2_func_pane_cp07

0x24e4,	// (0x0007f9eb) bg_vkb2_func_pane_cp11_ParamLimits

0x24e4,	// (0x0007f9eb) bg_vkb2_func_pane_cp11

0x24f9,	// (0x0007fa00) bg_vkb2_func_pane_cp12_ParamLimits

0x24f9,	// (0x0007fa00) bg_vkb2_func_pane_cp12

0xd6cc,	// (0x0008abd3) bg_vkb2_func_pane_cp09

0x430d,	// (0x00081814) bg_vkb2_func_pane_g1

0xe293,	// (0x0008b79a) bg_vkb2_func_pane_g2

0x4315,	// (0x0008181c) bg_vkb2_func_pane_g3

0x431d,	// (0x00081824) bg_vkb2_func_pane_g4

0x2163,	// (0x0007f66a) bg_vkb2_func_pane_g5

0x4335,	// (0x0008183c) bg_vkb2_func_pane_g6

0x433d,	// (0x00081844) bg_vkb2_func_pane_g7

0x432d,	// (0x00081834) bg_vkb2_func_pane_g8

0xe273,	// (0x0008b77a) bg_vkb2_func_pane_g9

0x0008,

0xfb3f,	// (0x0008d046) bg_vkb2_func_pane_g

0xb58c,	// (0x00088a93) blid2_tripm_pane_g6_ParamLimits

0xb58c,	// (0x00088a93) blid2_tripm_pane_g6

0x206f,	// (0x0007f576) mp4_progress_pane_g1

0xb5e0,	// (0x00088ae7) blid2_tripm_values_pane_ParamLimits

0xb5e0,	// (0x00088ae7) blid2_tripm_values_pane

0xb69b,	// (0x00088ba2) blid2_tripm_values_pane_t1

0xb6a9,	// (0x00088bb0) blid2_tripm_values_pane_t2

0xb6b7,	// (0x00088bbe) blid2_tripm_values_pane_t3

0xb6c5,	// (0x00088bcc) blid2_tripm_values_pane_t4

0xb6d3,	// (0x00088bda) blid2_tripm_values_pane_t5

0xb6e1,	// (0x00088be8) blid2_tripm_values_pane_t6

0xb6ef,	// (0x00088bf6) blid2_tripm_values_pane_t7

0xb6fd,	// (0x00088c04) blid2_tripm_values_pane_t8

0xb70b,	// (0x00088c12) blid2_tripm_values_pane_t9

0x0008,

0xfb52,	// (0x0008d059) blid2_tripm_values_pane_t

0x6629,	// (0x00083b30) call_video_pane_t1_ParamLimits

0x6646,	// (0x00083b4d) call_video_pane_t2_ParamLimits

0xf26a,	// (0x0008c771) call_video_pane_t_ParamLimits

0x7e06,	// (0x0008530d) msg_header_pane_g1_ParamLimits

0xeb83,	// (0x0008c08a) msg_header_pane_g2_ParamLimits

0xeb83,	// (0x0008c08a) msg_header_pane_g2

0x0001,

0xf484,	// (0x0008c98b) msg_header_pane_g_ParamLimits

0xf484,	// (0x0008c98b) msg_header_pane_g

0xde0b,	// (0x0008b312) main_clock2_pane_ParamLimits

0x96e6,	// (0x00086bed) grid_clock2_toolbar_pane_ParamLimits

0x96e6,	// (0x00086bed) grid_clock2_toolbar_pane

0x96e6,	// (0x00086bed) listscroll_clock2_pane_ParamLimits

0x96e6,	// (0x00086bed) listscroll_clock2_pane

0x9782,	// (0x00086c89) main_clock2_pane_t3_ParamLimits

0x9782,	// (0x00086c89) main_clock2_pane_t3

0x9794,	// (0x00086c9b) main_clock2_pane_t4_ParamLimits

0x9794,	// (0x00086c9b) main_clock2_pane_t4

0x25b7,	// (0x0007fabe) cell_clock2_toolbar_pane

0x25bf,	// (0x0007fac6) cell_clock2_toolbar_pane_cp01

0x25bf,	// (0x0007fac6) cell_clock2_toolbar_pane_cp02

0x25c7,	// (0x0007face) cell_clock2_toolbar_pane_cp03

0x25cf,	// (0x0007fad6) list_clock2_pane

0x25d7,	// (0x0007fade) scroll_pane_cp10

0x25df,	// (0x0007fae6) list_single_clock2_pane_ParamLimits

0x25df,	// (0x0007fae6) list_single_clock2_pane

0xdfe2,	// (0x0008b4e9) list_highlight_pane_cp08

0x25ec,	// (0x0007faf3) list_single_clock2_pane_t1

0x25fa,	// (0x0007fb01) list_single_clock2_pane_t2

0x0001,

0xfb65,	// (0x0008d06c) list_single_clock2_pane_t

0xd6cc,	// (0x0008abd3) bg_button_pane_cp10

0x2608,	// (0x0007fb0f) cell_clock2_toolbar_pane_g1

0x7e8b,	// (0x00085392) aid_main_viewer_pane_g1_ParamLimits

0x7e8b,	// (0x00085392) aid_main_viewer_pane_g1

0x7e97,	// (0x0008539e) aid_main_viewer_pane_g2_ParamLimits

0x7e97,	// (0x0008539e) aid_main_viewer_pane_g2

0x7ea3,	// (0x000853aa) aid_main_viewer_pane_g3_ParamLimits

0x7ea3,	// (0x000853aa) aid_main_viewer_pane_g3

0x7eb2,	// (0x000853b9) aid_main_viewer_pane_g4_ParamLimits

0x7eb2,	// (0x000853b9) aid_main_viewer_pane_g4

0x0003,

0xf495,	// (0x0008c99c) aid_main_viewer_pane_g_ParamLimits

0xf495,	// (0x0008c99c) aid_main_viewer_pane_g

0x5716,	// (0x00082c1d) main_calc_pane_ParamLimits

0x8547,	// (0x00085a4e) main_dialer2_pane_ParamLimits

0x572c,	// (0x00082c33) main_cam6_pane

0x572c,	// (0x00082c33) main_vid6_pane

0x96f2,	// (0x00086bf9) listscroll_gen_pane_cp06_ParamLimits

0x96f2,	// (0x00086bf9) listscroll_gen_pane_cp06

0x97a6,	// (0x00086cad) main_clock2_pane_t5_ParamLimits

0x97a6,	// (0x00086cad) main_clock2_pane_t5

0x97ef,	// (0x00086cf6) aid_call2_pane_cp10_ParamLimits

0x9801,	// (0x00086d08) aid_call_pane_cp10_ParamLimits

0xe8b3,	// (0x0008bdba) popup_clock_analogue_window_cp10_g1_ParamLimits

0xe8b3,	// (0x0008bdba) popup_clock_analogue_window_cp10_g2_ParamLimits

0x9813,	// (0x00086d1a) popup_clock_analogue_window_cp10_g3_ParamLimits

0x9813,	// (0x00086d1a) popup_clock_analogue_window_cp10_g4_ParamLimits

0xe8b3,	// (0x0008bdba) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf7e3,	// (0x0008ccea) popup_clock_analogue_window_cp10_g_ParamLimits

0x9825,	// (0x00086d2c) popup_clock_analogue_window_cp10_t1_ParamLimits

0x20cf,	// (0x0007f5d6) cell_dialer2_keypad_pane_g2_ParamLimits

0x20cf,	// (0x0007f5d6) cell_dialer2_keypad_pane_g2

0x0001,

0xf8cd,	// (0x0008cdd4) cell_dialer2_keypad_pane_g_ParamLimits

0xf8cd,	// (0x0008cdd4) cell_dialer2_keypad_pane_g

0x9fa2,	// (0x000874a9) cell_dialer2_keypad_pane_t1

0xa902,	// (0x00087e09) main_cset_text2_pane_ParamLimits

0xa902,	// (0x00087e09) main_cset_text2_pane

0x2384,	// (0x0007f88b) area_vitu2_query_pane_g1_ParamLimits

0xb1c1,	// (0x000886c8) area_vitu2_query_pane_g2_ParamLimits

0xfa82,	// (0x0008cf89) area_vitu2_query_pane_g_ParamLimits

0x2408,	// (0x0007f90f) area_vitu2_query_pane_t7_ParamLimits

0x2408,	// (0x0007f90f) area_vitu2_query_pane_t7

0xb21c,	// (0x00088723) bg_button_pane_cp018_ParamLimits

0xb229,	// (0x00088730) bg_button_pane_cp021_ParamLimits

0xb235,	// (0x0008873c) bg_button_pane_cp022_ParamLimits

0xb235,	// (0x0008873c) bg_vkb2_func_pane_cp08_ParamLimits

0xb21c,	// (0x00088723) bg_vkb2_func_pane_cp06_ParamLimits

0xb229,	// (0x00088730) bg_vkb2_func_pane_cp07_ParamLimits

0xb244,	// (0x0008874b) input_focus_pane_cp09_ParamLimits

0xb719,	// (0x00088c20) cam6_autofocus_pane_ParamLimits

0xb719,	// (0x00088c20) cam6_autofocus_pane

0xb735,	// (0x00088c3c) cam6_image_uncrop_pane_ParamLimits

0xb735,	// (0x00088c3c) cam6_image_uncrop_pane

0xb758,	// (0x00088c5f) cam6_indi_pane_ParamLimits

0xb758,	// (0x00088c5f) cam6_indi_pane

0xb772,	// (0x00088c79) cam6_mode_pane_ParamLimits

0xb772,	// (0x00088c79) cam6_mode_pane

0xb786,	// (0x00088c8d) cam6_timer_pane_ParamLimits

0xb786,	// (0x00088c8d) cam6_timer_pane

0xb792,	// (0x00088c99) cam6_zoom_pane_ParamLimits

0xb792,	// (0x00088c99) cam6_zoom_pane

0xb7a8,	// (0x00088caf) cam6_mode_pane_g1_ParamLimits

0xb7a8,	// (0x00088caf) cam6_mode_pane_g1

0xb7b4,	// (0x00088cbb) cam6_mode_pane_g2_ParamLimits

0xb7b4,	// (0x00088cbb) cam6_mode_pane_g2

0xb7c0,	// (0x00088cc7) cam6_mode_pane_g3_ParamLimits

0xb7c0,	// (0x00088cc7) cam6_mode_pane_g3

0xb7cc,	// (0x00088cd3) cam6_mode_pane_g4_ParamLimits

0xb7cc,	// (0x00088cd3) cam6_mode_pane_g4

0x0003,

0xfb6a,	// (0x0008d071) cam6_mode_pane_g_ParamLimits

0xfb6a,	// (0x0008d071) cam6_mode_pane_g

0x2610,	// (0x0007fb17) bg_tb_trans_pane_cp08_ParamLimits

0x2610,	// (0x0007fb17) bg_tb_trans_pane_cp08

0x261e,	// (0x0007fb25) cam6_battery_pane_ParamLimits

0x261e,	// (0x0007fb25) cam6_battery_pane

0x2634,	// (0x0007fb3b) cam6_indi_pane_g1_ParamLimits

0x2634,	// (0x0007fb3b) cam6_indi_pane_g1

0x2646,	// (0x0007fb4d) cam6_indi_pane_g2_ParamLimits

0x2646,	// (0x0007fb4d) cam6_indi_pane_g2

0x2658,	// (0x0007fb5f) cam6_indi_pane_g3_ParamLimits

0x2658,	// (0x0007fb5f) cam6_indi_pane_g3

0x0002,

0xfb73,	// (0x0008d07a) cam6_indi_pane_g_ParamLimits

0xfb73,	// (0x0008d07a) cam6_indi_pane_g

0x266a,	// (0x0007fb71) cam6_indi_pane_t1_ParamLimits

0x266a,	// (0x0007fb71) cam6_indi_pane_t1

0xa456,	// (0x0008795d) cam6_autofocus_pane_g1

0xa44e,	// (0x00087955) cam6_autofocus_pane_g2

0xa466,	// (0x0008796d) cam6_autofocus_pane_g3

0xa45e,	// (0x00087965) cam6_autofocus_pane_g4

0x0003,

0xfb7a,	// (0x0008d081) cam6_autofocus_pane_g

0x2690,	// (0x0007fb97) cam6_timer_pane_g1

0x2698,	// (0x0007fb9f) cam6_timer_pane_t1

0x26a6,	// (0x0007fbad) cam6_zoom_cont_pane

0x26ae,	// (0x0007fbb5) cam6_zoom_pane_g1

0x26b6,	// (0x0007fbbd) cam6_zoom_pane_g2

0xb7d8,	// (0x00088cdf) cam6_zoom_pane_g3

0x0002,

0xfb83,	// (0x0008d08a) cam6_zoom_pane_g

0x17ca,	// (0x0007ecd1) cam6_battery_pane_g1

0x17ca,	// (0x0007ecd1) cam6_battery_pane_g2

0x0001,

0xf6eb,	// (0x0008cbf2) cam6_battery_pane_g

0x26be,	// (0x0007fbc5) cam6_zoom_cont_pane_g1

0x26c7,	// (0x0007fbce) cam6_zoom_cont_pane_g2

0x26d0,	// (0x0007fbd7) cam6_zoom_cont_pane_g3

0x0002,

0xfb8a,	// (0x0008d091) cam6_zoom_cont_pane_g

0xb7f5,	// (0x00088cfc) cam6_mode_pane_cp_ParamLimits

0xb7f5,	// (0x00088cfc) cam6_mode_pane_cp

0xb809,	// (0x00088d10) cam6_zoom_pane_cp_ParamLimits

0xb809,	// (0x00088d10) cam6_zoom_pane_cp

0xb81f,	// (0x00088d26) vid6_image_uncrop_cif_pane_ParamLimits

0xb81f,	// (0x00088d26) vid6_image_uncrop_cif_pane

0xb841,	// (0x00088d48) vid6_image_uncrop_nhd_pane_ParamLimits

0xb841,	// (0x00088d48) vid6_image_uncrop_nhd_pane

0xb858,	// (0x00088d5f) vid6_image_uncrop_vga_pane_ParamLimits

0xb858,	// (0x00088d5f) vid6_image_uncrop_vga_pane

0xb86f,	// (0x00088d76) vid6_image_uncrop_wvga_pane_ParamLimits

0xb86f,	// (0x00088d76) vid6_image_uncrop_wvga_pane

0xb886,	// (0x00088d8d) vid6_indi_pane_ParamLimits

0xb886,	// (0x00088d8d) vid6_indi_pane

0x2610,	// (0x0007fb17) bg_tb_trans_pane_cp09_ParamLimits

0x2610,	// (0x0007fb17) bg_tb_trans_pane_cp09

0x26e4,	// (0x0007fbeb) cam6_battery_pane_cp_ParamLimits

0x26e4,	// (0x0007fbeb) cam6_battery_pane_cp

0x26f0,	// (0x0007fbf7) vid6_indi_pane_g1_ParamLimits

0x26f0,	// (0x0007fbf7) vid6_indi_pane_g1

0x2702,	// (0x0007fc09) vid6_indi_pane_g2_ParamLimits

0x2702,	// (0x0007fc09) vid6_indi_pane_g2

0x2714,	// (0x0007fc1b) vid6_indi_pane_g3_ParamLimits

0x2714,	// (0x0007fc1b) vid6_indi_pane_g3

0x2729,	// (0x0007fc30) vid6_indi_pane_g4_ParamLimits

0x2729,	// (0x0007fc30) vid6_indi_pane_g4

0x273e,	// (0x0007fc45) vid6_indi_pane_g5_ParamLimits

0x273e,	// (0x0007fc45) vid6_indi_pane_g5

0x0004,

0xfb91,	// (0x0008d098) vid6_indi_pane_g_ParamLimits

0xfb91,	// (0x0008d098) vid6_indi_pane_g

0x2758,	// (0x0007fc5f) vid6_indi_pane_t1_ParamLimits

0x2758,	// (0x0007fc5f) vid6_indi_pane_t1

0x276e,	// (0x0007fc75) vid6_indi_pane_t2_ParamLimits

0x276e,	// (0x0007fc75) vid6_indi_pane_t2

0x2796,	// (0x0007fc9d) vid6_indi_pane_t3_ParamLimits

0x2796,	// (0x0007fc9d) vid6_indi_pane_t3

0x27be,	// (0x0007fcc5) vid6_indi_pane_t4_ParamLimits

0x27be,	// (0x0007fcc5) vid6_indi_pane_t4

0x0003,

0xfb9c,	// (0x0008d0a3) vid6_indi_pane_t_ParamLimits

0xfb9c,	// (0x0008d0a3) vid6_indi_pane_t

0x27e2,	// (0x0007fce9) wait_bar_pane_cp08

0xb8a6,	// (0x00088dad) main_cset_text2_pane_t1_ParamLimits

0xb8a6,	// (0x00088dad) main_cset_text2_pane_t1

0xb7e0,	// (0x00088ce7) listscroll_gen_pane_cp06_t1_ParamLimits

0xb7e0,	// (0x00088ce7) listscroll_gen_pane_cp06_t1

0x572c,	// (0x00082c33) main_cam6_set_pane

0xa33d,	// (0x00087844) bg_tb_trans_pane_cp06_ParamLimits

0xa353,	// (0x0008785a) cam4_indicators_pane_g1_ParamLimits

0xa363,	// (0x0008786a) cam4_indicators_pane_g2_ParamLimits

0xf90a,	// (0x0008ce11) cam4_indicators_pane_g_ParamLimits

0xa383,	// (0x0008788a) cam4_indicators_pane_t1_ParamLimits

0x8539,	// (0x00085a40) bg_tb_trans_pane_cp07_ParamLimits

0xa353,	// (0x0008785a) vid4_indicators_pane_g1_ParamLimits

0xa3f7,	// (0x000878fe) vid4_indicators_pane_g2_ParamLimits

0xa407,	// (0x0008790e) vid4_indicators_pane_g3_ParamLimits

0xa418,	// (0x0008791f) vid4_indicators_pane_g4_ParamLimits

0xf91c,	// (0x0008ce23) vid4_indicators_pane_g_ParamLimits

0xa434,	// (0x0008793b) vid4_indicators_pane_t1_ParamLimits

0xb363,	// (0x0008886a) vid4_progress_pane_g1_ParamLimits

0xb372,	// (0x00088879) vid4_progress_pane_g2_ParamLimits

0xb381,	// (0x00088888) vid4_progress_pane_g3_ParamLimits

0xb390,	// (0x00088897) vid4_progress_pane_g4_ParamLimits

0xfacd,	// (0x0008cfd4) vid4_progress_pane_g_ParamLimits

0xb3a8,	// (0x000888af) vid4_progress_pane_t1_ParamLimits

0xb3be,	// (0x000888c5) vid4_progress_pane_t2_ParamLimits

0xb3d3,	// (0x000888da) vid4_progress_pane_t3_ParamLimits

0xfad8,	// (0x0008cfdf) vid4_progress_pane_t_ParamLimits

0xb3e8,	// (0x000888ef) wait_bar_pane_cp07_ParamLimits

0xb8c2,	// (0x00088dc9) main_cam6_set_pane_g2_ParamLimits

0xb8c2,	// (0x00088dc9) main_cam6_set_pane_g2

0xb8ce,	// (0x00088dd5) main_cset6_listscroll_pane_ParamLimits

0xb8ce,	// (0x00088dd5) main_cset6_listscroll_pane

0xb8f7,	// (0x00088dfe) main_cset6_slider_pane_ParamLimits

0xb8f7,	// (0x00088dfe) main_cset6_slider_pane

0xb903,	// (0x00088e0a) main_cset6_text2_pane_ParamLimits

0xb903,	// (0x00088e0a) main_cset6_text2_pane

0x27f2,	// (0x0007fcf9) main_cset6_text_pane

0x4417,	// (0x0008191e) main_cset_list_pane_copy1_ParamLimits

0x4417,	// (0x0008191e) main_cset_list_pane_copy1

0x4427,	// (0x0008192e) scroll_pane_cp028_copy1

0xb916,	// (0x00088e1d) cset_list_set_pane_copy1

0xabbd,	// (0x000880c4) aid_position_infowindow_above_copy1

0xabc5,	// (0x000880cc) aid_position_infowindow_below_copy1

0xb925,	// (0x00088e2c) cset_list_set_pane_g1_copy1

0xb92d,	// (0x00088e34) cset_list_set_pane_g3_copy1_ParamLimits

0xb92d,	// (0x00088e34) cset_list_set_pane_g3_copy1

0xb93c,	// (0x00088e43) cset_list_set_pane_t1_copy1_ParamLimits

0xb93c,	// (0x00088e43) cset_list_set_pane_t1_copy1

0x0367,	// (0x0007d86e) list_highlight_pane_cp021_copy1_ParamLimits

0x0367,	// (0x0007d86e) list_highlight_pane_cp021_copy1

0x27fa,	// (0x0007fd01) cset6_slider_pane_ParamLimits

0x27fa,	// (0x0007fd01) cset6_slider_pane

0x2826,	// (0x0007fd2d) main_cset6_slider_pane_g1_ParamLimits

0x2826,	// (0x0007fd2d) main_cset6_slider_pane_g1

0xb951,	// (0x00088e58) main_cset6_slider_pane_g2_ParamLimits

0xb951,	// (0x00088e58) main_cset6_slider_pane_g2

0x443c,	// (0x00081943) main_cset6_slider_pane_g3_ParamLimits

0x443c,	// (0x00081943) main_cset6_slider_pane_g3

0xb979,	// (0x00088e80) main_cset6_slider_pane_g4_ParamLimits

0xb979,	// (0x00088e80) main_cset6_slider_pane_g4

0xb985,	// (0x00088e8c) main_cset6_slider_pane_g5_ParamLimits

0xb985,	// (0x00088e8c) main_cset6_slider_pane_g5

0x443c,	// (0x00081943) main_cset6_slider_pane_g7_ParamLimits

0x443c,	// (0x00081943) main_cset6_slider_pane_g7

0x4448,	// (0x0008194f) main_cset6_slider_pane_g8_ParamLimits

0x4448,	// (0x0008194f) main_cset6_slider_pane_g8

0xb991,	// (0x00088e98) main_cset6_slider_pane_g9_ParamLimits

0xb991,	// (0x00088e98) main_cset6_slider_pane_g9

0xb99d,	// (0x00088ea4) main_cset6_slider_pane_g10_ParamLimits

0xb99d,	// (0x00088ea4) main_cset6_slider_pane_g10

0xb979,	// (0x00088e80) main_cset6_slider_pane_g11_ParamLimits

0xb979,	// (0x00088e80) main_cset6_slider_pane_g11

0xb9a9,	// (0x00088eb0) main_cset6_slider_pane_g12_ParamLimits

0xb9a9,	// (0x00088eb0) main_cset6_slider_pane_g12

0xb9b5,	// (0x00088ebc) main_cset6_slider_pane_g13_ParamLimits

0xb9b5,	// (0x00088ebc) main_cset6_slider_pane_g13

0xb9c1,	// (0x00088ec8) main_cset6_slider_pane_g14_ParamLimits

0xb9c1,	// (0x00088ec8) main_cset6_slider_pane_g14

0xb9cd,	// (0x00088ed4) main_cset6_slider_pane_g15_ParamLimits

0xb9cd,	// (0x00088ed4) main_cset6_slider_pane_g15

0xb985,	// (0x00088e8c) main_cset6_slider_pane_g16_ParamLimits

0xb985,	// (0x00088e8c) main_cset6_slider_pane_g16

0xb9e5,	// (0x00088eec) main_cset6_slider_pane_g17_ParamLimits

0xb9e5,	// (0x00088eec) main_cset6_slider_pane_g17

0x0011,

0xfba5,	// (0x0008d0ac) main_cset6_slider_pane_g_ParamLimits

0xfba5,	// (0x0008d0ac) main_cset6_slider_pane_g

0x284e,	// (0x0007fd55) main_cset6_slider_pane_t1_ParamLimits

0x284e,	// (0x0007fd55) main_cset6_slider_pane_t1

0xb9f1,	// (0x00088ef8) main_cset6_slider_pane_t2_ParamLimits

0xb9f1,	// (0x00088ef8) main_cset6_slider_pane_t2

0x288f,	// (0x0007fd96) main_cset6_slider_pane_t3_ParamLimits

0x288f,	// (0x0007fd96) main_cset6_slider_pane_t3

0xba1c,	// (0x00088f23) main_cset6_slider_pane_t4_ParamLimits

0xba1c,	// (0x00088f23) main_cset6_slider_pane_t4

0x28ba,	// (0x0007fdc1) main_cset6_slider_pane_t5_ParamLimits

0x28ba,	// (0x0007fdc1) main_cset6_slider_pane_t5

0x28e5,	// (0x0007fdec) main_cset6_slider_pane_t7_ParamLimits

0x28e5,	// (0x0007fdec) main_cset6_slider_pane_t7

0xba47,	// (0x00088f4e) main_cset6_slider_pane_t8_ParamLimits

0xba47,	// (0x00088f4e) main_cset6_slider_pane_t8

0xba6b,	// (0x00088f72) main_cset6_slider_pane_t9_ParamLimits

0xba6b,	// (0x00088f72) main_cset6_slider_pane_t9

0xba8f,	// (0x00088f96) main_cset6_slider_pane_t10_ParamLimits

0xba8f,	// (0x00088f96) main_cset6_slider_pane_t10

0xbab3,	// (0x00088fba) main_cset6_slider_pane_t11_ParamLimits

0xbab3,	// (0x00088fba) main_cset6_slider_pane_t11

0x291b,	// (0x0007fe22) main_cset6_slider_pane_t14_ParamLimits

0x291b,	// (0x0007fe22) main_cset6_slider_pane_t14

0x2954,	// (0x0007fe5b) main_cset6_slider_pane_t15_ParamLimits

0x2954,	// (0x0007fe5b) main_cset6_slider_pane_t15

0x000b,

0xfbca,	// (0x0008d0d1) main_cset6_slider_pane_t_ParamLimits

0xfbca,	// (0x0008d0d1) main_cset6_slider_pane_t

0x4512,	// (0x00081a19) cset_slider_pane_g1_copy1

0x451b,	// (0x00081a22) cset_slider_pane_g2_copy1

0x4524,	// (0x00081a2b) cset_slider_pane_g3_copy1

0xd6cc,	// (0x0008abd3) bg_popup_sub_pane_cp011_copy1

0x21b6,	// (0x0007f6bd) main_cset_text_pane_g1_copy1

0x21be,	// (0x0007f6c5) main_cset_text_pane_t1_copy1

0x21cc,	// (0x0007f6d3) main_cset_text_pane_t2_copy1

0x21da,	// (0x0007f6e1) main_cset_text_pane_t3_copy1

0x21e8,	// (0x0007f6ef) main_cset_text_pane_t4_copy1

0x21f6,	// (0x0007f6fd) main_cset_text_pane_t5_copy1

0x2204,	// (0x0007f70b) main_cset_text_pane_t6_copy1

0x2212,	// (0x0007f719) main_cset_text_pane_t7_copy1

0xbba8,	// (0x000890af) main_cset_text2_pane_t1_copy1

0x8539,	// (0x00085a40) main_ncimui_pane

0x8592,	// (0x00085a99) popup_query_ncimui_window_ParamLimits

0x8592,	// (0x00085a99) popup_query_ncimui_window

0x3d58,	// (0x0008125f) field_cale_ev2_pane_g4_ParamLimits

0x3d58,	// (0x0008125f) field_cale_ev2_pane_g4

0x9cb6,	// (0x000871bd) cell_video_dialer_keypad_pane_g2_ParamLimits

0x9cb6,	// (0x000871bd) cell_video_dialer_keypad_pane_g2

0x0001,

0xf8a4,	// (0x0008cdab) cell_video_dialer_keypad_pane_g_ParamLimits

0xf8a4,	// (0x0008cdab) cell_video_dialer_keypad_pane_g

0x9cce,	// (0x000871d5) cell_video_dialer_keypad_pane_t1

0xd6cc,	// (0x0008abd3) bg_popup_window_pane_cp012

0xe700,	// (0x0008bc07) heading_pane_cp06

0x29b7,	// (0x0007febe) ncim_query_content_pane

0xd6cc,	// (0x0008abd3) bg_popup_heading_pane_cp01

0x29bf,	// (0x0007fec6) ncim_heading_pane_t1

0x29cd,	// (0x0007fed4) ncim_indicator_popup_pane

0x29df,	// (0x0007fee6) ncim_query_button_pane

0x29f3,	// (0x0007fefa) ncim_query_content_pane_t1

0x2a05,	// (0x0007ff0c) ncim_query_content_pane_t2

0x0005,

0xfc0e,	// (0x0008d115) ncim_query_content_pane_t

0x2a3f,	// (0x0007ff46) ncim_query_list_pane

0x2a51,	// (0x0007ff58) ncim_query_popup_pane

0x29cd,	// (0x0007fed4) ncim_indicator_popup_pane_ParamLimits

0xbce9,	// (0x000891f0) ncim_query_content_pane_g1_ParamLimits

0xbce9,	// (0x000891f0) ncim_query_content_pane_g1

0x29f3,	// (0x0007fefa) ncim_query_content_pane_t1_ParamLimits

0x2a05,	// (0x0007ff0c) ncim_query_content_pane_t2_ParamLimits

0xbcf5,	// (0x000891fc) ncim_query_content_pane_t3_ParamLimits

0xbcf5,	// (0x000891fc) ncim_query_content_pane_t3

0xbd12,	// (0x00089219) ncim_query_content_pane_t4_ParamLimits

0xbd12,	// (0x00089219) ncim_query_content_pane_t4

0xbd2f,	// (0x00089236) ncim_query_content_pane_t5_ParamLimits

0xbd2f,	// (0x00089236) ncim_query_content_pane_t5

0x2a17,	// (0x0007ff1e) ncim_query_content_pane_t6_ParamLimits

0x2a17,	// (0x0007ff1e) ncim_query_content_pane_t6

0xfc0e,	// (0x0008d115) ncim_query_content_pane_t_ParamLimits

0x2a3f,	// (0x0007ff46) ncim_query_list_pane_ParamLimits

0x2a51,	// (0x0007ff58) ncim_query_popup_pane_ParamLimits

0x2a65,	// (0x0007ff6c) wait_bar_pane_cp04

0xd6cc,	// (0x0008abd3) input_focus_pane_cp011

0x2a6d,	// (0x0007ff74) ncim_query_popup_pane_t1

0x2a7b,	// (0x0007ff82) ncim_list_query_list_pane_ParamLimits

0x2a7b,	// (0x0007ff82) ncim_list_query_list_pane

0xd6cc,	// (0x0008abd3) bg_button_pane_cp027

0x2a8e,	// (0x0007ff95) ncim_query_button_pane_g1

0xd6cc,	// (0x0008abd3) list_highlight_pane_cp012

0x2a98,	// (0x0007ff9f) ncim_list_query_list_pane_g1

0x2aa0,	// (0x0007ffa7) ncim_list_query_list_pane_t1

0xa373,	// (0x0008787a) cam4_indicators_pane_g3_ParamLimits

0xa373,	// (0x0008787a) cam4_indicators_pane_g3

0xa424,	// (0x0008792b) vid4_indicators_pane_g5_ParamLimits

0xa424,	// (0x0008792b) vid4_indicators_pane_g5

0xb39c,	// (0x000888a3) vid4_progress_pane_g5_ParamLimits

0xb39c,	// (0x000888a3) vid4_progress_pane_g5

0xbbd9,	// (0x000890e0) main_ncimui_pane_g1

0xbc3f,	// (0x00089146) ncimui_group_query_pane_ParamLimits

0xbc3f,	// (0x00089146) ncimui_group_query_pane

0xbc87,	// (0x0008918e) ncimui_list_pane_ParamLimits

0xbc87,	// (0x0008918e) ncimui_list_pane

0xbcac,	// (0x000891b3) ncimui_text_pane_ParamLimits

0xbcac,	// (0x000891b3) ncimui_text_pane

0xbd4c,	// (0x00089253) ncimui_text_pane_t1_ParamLimits

0xbd4c,	// (0x00089253) ncimui_text_pane_t1

0x2ab7,	// (0x0007ffbe) ncimui_list_single_graphic_pane_ParamLimits

0x2ab7,	// (0x0007ffbe) ncimui_list_single_graphic_pane

0xbd6a,	// (0x00089271) ncimui_query_pane_ParamLimits

0xbd6a,	// (0x00089271) ncimui_query_pane

0xd6cc,	// (0x0008abd3) list_highlight_pane_cp013

0x2ac7,	// (0x0007ffce) ncim_list_query_list_pane_t1_copy1

0x2ad5,	// (0x0007ffdc) ncim_list_single_graphic_pane_g1

0x2add,	// (0x0007ffe4) ncim_query_button_pane_cp01

0x2ae9,	// (0x0007fff0) ncim_query_entry_pane_ParamLimits

0x2ae9,	// (0x0007fff0) ncim_query_entry_pane

0x2afc,	// (0x00080003) ncimui_query_pane_g1

0x2b08,	// (0x0008000f) ncimui_query_pane_t1_ParamLimits

0x2b08,	// (0x0008000f) ncimui_query_pane_t1

0x0367,	// (0x0007d86e) input_focus_pane_cp012

0x2b21,	// (0x00080028) ncim_query_entry_pane_t1

0xde0b,	// (0x0008b312) main_im_pane_ParamLimits

0x8539,	// (0x00085a40) main_mobtv_pane_ParamLimits

0x8539,	// (0x00085a40) main_mobtv_pane

0xb991,	// (0x00088e98) main_cset6_slider_pane_g18_ParamLimits

0xb991,	// (0x00088e98) main_cset6_slider_pane_g18

0xb9b5,	// (0x00088ebc) main_cset6_slider_pane_g19_ParamLimits

0xb9b5,	// (0x00088ebc) main_cset6_slider_pane_g19

0x42ed,	// (0x000817f4) bg_main_mobtv_pane_ParamLimits

0x42ed,	// (0x000817f4) bg_main_mobtv_pane

0xbd7a,	// (0x00089281) main_mobtv_info_pane

0xbd83,	// (0x0008928a) main_mobtv_loading_pane_ParamLimits

0xbd83,	// (0x0008928a) main_mobtv_loading_pane

0x2b41,	// (0x00080048) main_mobtv_pg_channel_list_pane

0x2b4b,	// (0x00080052) main_mobtv_pg_hdr_pane

0xbd90,	// (0x00089297) main_mobtv_programe_curr_pane_ParamLimits

0xbd90,	// (0x00089297) main_mobtv_programe_curr_pane

0xbd9d,	// (0x000892a4) main_mobtv_programe_next_pane_ParamLimits

0xbd9d,	// (0x000892a4) main_mobtv_programe_next_pane

0x2b54,	// (0x0008005b) popup_mobtv_noti_window

0x17ca,	// (0x0007ecd1) main_tv_pg_hdr_pane_g1

0x2b5c,	// (0x00080063) main_tv_pg_hdr_pane_g2

0x2b64,	// (0x0008006b) main_tv_pg_hdr_pane_g3

0x2b6c,	// (0x00080073) main_tv_pg_hdr_pane_g4

0x2b74,	// (0x0008007b) main_tv_pg_hdr_pane_g5

0x2b7c,	// (0x00080083) main_tv_pg_hdr_pane_g6

0x2b84,	// (0x0008008b) main_tv_pg_hdr_pane_g7

0x2b8c,	// (0x00080093) main_tv_pg_hdr_pane_g8

0x2b94,	// (0x0008009b) main_tv_pg_hdr_pane_g9

0x2b9c,	// (0x000800a3) main_tv_pg_hdr_pane_g10

0x2ba6,	// (0x000800ad) main_tv_pg_hdr_pane_g11

0x000a,

0xfc1b,	// (0x0008d122) main_tv_pg_hdr_pane_g

0x2bb0,	// (0x000800b7) main_tv_pg_hdr_pane_t1

0x2bbe,	// (0x000800c5) main_tv_pg_hdr_pane_t2

0x2bcc,	// (0x000800d3) main_tv_pg_hdr_pane_t3

0x2bda,	// (0x000800e1) main_tv_pg_hdr_pane_t4

0x2be8,	// (0x000800ef) main_tv_pg_hdr_pane_t5

0x0004,

0xfc32,	// (0x0008d139) main_tv_pg_hdr_pane_t

0x2bf6,	// (0x000800fd) single_mobtv_pg_channel_pane_ParamLimits

0x2bf6,	// (0x000800fd) single_mobtv_pg_channel_pane

0x2c08,	// (0x0008010f) single_mobtv_pg_channel_table_pane

0x2c11,	// (0x00080118) single_mobtv_pg_channel_thumb_pane

0x2c1a,	// (0x00080121) single_tv_pg_channel_pane_g1

0x2c23,	// (0x0008012a) single_tv_pg_channel_pane_g2

0x0001,

0xfc3d,	// (0x0008d144) single_tv_pg_channel_pane_g

0x19f9,	// (0x0007ef00) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0x19f9,	// (0x0007ef00) bg_single_mobtv_pg_channel_thumb_pane

0x2c2c,	// (0x00080133) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0x2c2c,	// (0x00080133) single_mobtv_pg_channel_thumb_pane_g1

0x2c3a,	// (0x00080141) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0x2c3a,	// (0x00080141) single_mobtv_pg_channel_thumb_pane_g2

0x2c46,	// (0x0008014d) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0x2c46,	// (0x0008014d) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfc42,	// (0x0008d149) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfc42,	// (0x0008d149) single_mobtv_pg_channel_thumb_pane_g

0x2c52,	// (0x00080159) single_mobtv_pg_channel_thumb_pane_t1

0x2c60,	// (0x00080167) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc49,	// (0x0008d150) single_mobtv_pg_channel_thumb_pane_t

0x17ca,	// (0x0007ecd1) bg_single_mobtv_pg_channel_table_pane_g1

0x17ca,	// (0x0007ecd1) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf6eb,	// (0x0008cbf2) bg_single_mobtv_pg_channel_table_pane_g

0x2c6e,	// (0x00080175) single_mobtv_pg_channel_table_pane_t1

0x2c7c,	// (0x00080183) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc4e,	// (0x0008d155) single_mobtv_pg_channel_table_pane_t

0xbdb2,	// (0x000892b9) main_mobtv_info_pane_g1_ParamLimits

0xbdb2,	// (0x000892b9) main_mobtv_info_pane_g1

0xbdce,	// (0x000892d5) main_mobtv_info_pane_t1_ParamLimits

0xbdce,	// (0x000892d5) main_mobtv_info_pane_t1

0xbe34,	// (0x0008933b) main_mobtv_info_pane_t2_ParamLimits

0xbe34,	// (0x0008933b) main_mobtv_info_pane_t2

0x0002,

0xfc58,	// (0x0008d15f) main_mobtv_info_pane_t_ParamLimits

0xfc58,	// (0x0008d15f) main_mobtv_info_pane_t

0xbeb7,	// (0x000893be) wait_bar_pane_cp05

0xbec7,	// (0x000893ce) main_mobtv_loading_pane_g1_ParamLimits

0xbec7,	// (0x000893ce) main_mobtv_loading_pane_g1

0xbed3,	// (0x000893da) main_mobtv_loading_pane_g2_ParamLimits

0xbed3,	// (0x000893da) main_mobtv_loading_pane_g2

0xbedf,	// (0x000893e6) main_mobtv_loading_pane_g3_ParamLimits

0xbedf,	// (0x000893e6) main_mobtv_loading_pane_g3

0x0002,

0xfc5f,	// (0x0008d166) main_mobtv_loading_pane_g_ParamLimits

0xfc5f,	// (0x0008d166) main_mobtv_loading_pane_g

0x2c8a,	// (0x00080191) main_mobtv_loading_pane_t1_ParamLimits

0x2c8a,	// (0x00080191) main_mobtv_loading_pane_t1

0x2ca2,	// (0x000801a9) main_mobtv_loading_pane_t2_ParamLimits

0x2ca2,	// (0x000801a9) main_mobtv_loading_pane_t2

0x0001,

0xfc66,	// (0x0008d16d) main_mobtv_loading_pane_t_ParamLimits

0xfc66,	// (0x0008d16d) main_mobtv_loading_pane_t

0xbeeb,	// (0x000893f2) wait_bar_pane_cp06_ParamLimits

0xbeeb,	// (0x000893f2) wait_bar_pane_cp06

0x2cc6,	// (0x000801cd) main_mobtv_programe_curr_pane_t1

0x2cd4,	// (0x000801db) main_mobtv_programe_curr_pane_t2

0x0001,

0xfc6b,	// (0x0008d172) main_mobtv_programe_curr_pane_t

0x2ce2,	// (0x000801e9) main_mobtv_programe_next_pane_t1

0x2cf0,	// (0x000801f7) main_mobtv_programe_next_pane_t2

0x2cfe,	// (0x00080205) main_mobtv_programe_next_pane_t3

0x0002,

0xfc70,	// (0x0008d177) main_mobtv_programe_next_pane_t

0xd6cc,	// (0x0008abd3) bg_popup_mobtv_noti_window_pane

0x2d0c,	// (0x00080213) popup_mobtv_noti_window_g1

0x2d14,	// (0x0008021b) popup_mobtv_noti_window_t1

0x2d22,	// (0x00080229) popup_mobtv_noti_window_t2

0x0001,

0xfc77,	// (0x0008d17e) popup_mobtv_noti_window_t

0x17ca,	// (0x0007ecd1) bg_popup_mobtv_noti_window_pane_g1

0x572c,	// (0x00082c33) sc_clock_pane

0x572c,	// (0x00082c33) main_fs_bigclock_pane

0xb5ce,	// (0x00088ad5) blid2_tripm_pane_t4_ParamLimits

0xb5ce,	// (0x00088ad5) blid2_tripm_pane_t4

0xbef7,	// (0x000893fe) sc_clock_pane_g1_ParamLimits

0xbef7,	// (0x000893fe) sc_clock_pane_g1

0xbf05,	// (0x0008940c) sc_clock_pane_t1_ParamLimits

0xbf05,	// (0x0008940c) sc_clock_pane_t1

0xbf18,	// (0x0008941f) sc_clock_pane_t2_ParamLimits

0xbf18,	// (0x0008941f) sc_clock_pane_t2

0xbf2a,	// (0x00089431) sc_clock_pane_t3_ParamLimits

0xbf2a,	// (0x00089431) sc_clock_pane_t3

0x0004,

0xfc7c,	// (0x0008d183) sc_clock_pane_t_ParamLimits

0xfc7c,	// (0x0008d183) sc_clock_pane_t

0xccd9,	// (0x0008a1e0) main_fs_bigclock_indicator_pane_ParamLimits

0xccd9,	// (0x0008a1e0) main_fs_bigclock_indicator_pane

0xbfa5,	// (0x000894ac) main_fs_bigclock_pane_g1_ParamLimits

0xbfa5,	// (0x000894ac) main_fs_bigclock_pane_g1

0xcce5,	// (0x0008a1ec) main_fs_bigclock_pane_t1_ParamLimits

0xcce5,	// (0x0008a1ec) main_fs_bigclock_pane_t1

0xccf7,	// (0x0008a1fe) main_fs_bigclock_pane_t2_ParamLimits

0xccf7,	// (0x0008a1fe) main_fs_bigclock_pane_t2

0xcd09,	// (0x0008a210) main_fs_bigclock_pane_t3_ParamLimits

0xcd09,	// (0x0008a210) main_fs_bigclock_pane_t3

0x0002,

0xfe86,	// (0x0008d38d) main_fs_bigclock_pane_t_ParamLimits

0xfe86,	// (0x0008d38d) main_fs_bigclock_pane_t

0x38d7,	// (0x00080dde) main_fs_bigclock_indicator_pane_g1

0x29e7,	// (0x0007feee) ncim_query_content_pane_g2_ParamLimits

0x29e7,	// (0x0007feee) ncim_query_content_pane_g2

0x0001,

0xfc09,	// (0x0008d110) ncim_query_content_pane_g_ParamLimits

0xfc09,	// (0x0008d110) ncim_query_content_pane_g

0xbf3c,	// (0x00089443) sc_clock_pane_t4_ParamLimits

0xbf3c,	// (0x00089443) sc_clock_pane_t4

0x8539,	// (0x00085a40) main_radioblah_pane

0xa212,	// (0x00087719) cell_call4_button_pane_t1_copy1_ParamLimits

0xa212,	// (0x00087719) cell_call4_button_pane_t1_copy1

0xbbf1,	// (0x000890f8) main_ncimui_pane_t1_ParamLimits

0xbbf1,	// (0x000890f8) main_ncimui_pane_t1

0xbc0b,	// (0x00089112) main_ncimui_pane_t2_ParamLimits

0xbc0b,	// (0x00089112) main_ncimui_pane_t2

0x0002,

0xfc02,	// (0x0008d109) main_ncimui_pane_t_ParamLimits

0xfc02,	// (0x0008d109) main_ncimui_pane_t

0x2e63,	// (0x0008036a) main_radioblah_anim_pane_ParamLimits

0x2e63,	// (0x0008036a) main_radioblah_anim_pane

0x2e74,	// (0x0008037b) main_radioblah_info_pane_ParamLimits

0x2e74,	// (0x0008037b) main_radioblah_info_pane

0x2e88,	// (0x0008038f) main_radioblah_pane_t1_ParamLimits

0x2e88,	// (0x0008038f) main_radioblah_pane_t1

0x2ea4,	// (0x000803ab) main_radioblah_pane_t2_ParamLimits

0x2ea4,	// (0x000803ab) main_radioblah_pane_t2

0x0003,

0xfc9d,	// (0x0008d1a4) main_radioblah_pane_t_ParamLimits

0xfc9d,	// (0x0008d1a4) main_radioblah_pane_t

0xbfed,	// (0x000894f4) main_radioblah_rocker_ctrl_pane_ParamLimits

0xbfed,	// (0x000894f4) main_radioblah_rocker_ctrl_pane

0x2eec,	// (0x000803f3) main_radioblah_info_pane_t1_ParamLimits

0x2eec,	// (0x000803f3) main_radioblah_info_pane_t1

0xc032,	// (0x00089539) main_radioblah_info_pane_t2_ParamLimits

0xc032,	// (0x00089539) main_radioblah_info_pane_t2

0x0003,

0xfca6,	// (0x0008d1ad) main_radioblah_info_pane_t_ParamLimits

0xfca6,	// (0x0008d1ad) main_radioblah_info_pane_t

0x17ca,	// (0x0007ecd1) main_radioblah_rocker_ctrl_pane_g1

0xc0da,	// (0x000895e1) main_radioblah_rocker_ctrl_pane_g2

0xc0e2,	// (0x000895e9) main_radioblah_rocker_ctrl_pane_g3

0xc0ea,	// (0x000895f1) main_radioblah_rocker_ctrl_pane_g4

0xc0f2,	// (0x000895f9) main_radioblah_rocker_ctrl_pane_g5

0xc0fa,	// (0x00089601) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfcaf,	// (0x0008d1b6) main_radioblah_rocker_ctrl_pane_g

0xbba8,	// (0x000890af) main_cset_text2_pane_t1_copy1_ParamLimits

0xa295,	// (0x0008779c) cam4_image_uncrop_qvga_pane

0xa3b7,	// (0x000878be) vid4_image_uncrop_qcif_pane

0xb74c,	// (0x00088c53) cam6_image_uncrop_qvga_pane_ParamLimits

0xb74c,	// (0x00088c53) cam6_image_uncrop_qvga_pane

0x26d8,	// (0x0007fbdf) vid6_image_uncrop_qcif_pane_ParamLimits

0x26d8,	// (0x0007fbdf) vid6_image_uncrop_qcif_pane

0xd6cc,	// (0x0008abd3) bg_popup_preview_window_pane_cp03

0x298d,	// (0x0007fe94) list_cset_text2_pane

0x2995,	// (0x0007fe9c) main_cset6_text2_pane_g1

0x299d,	// (0x0007fea4) main_cset6_text2_pane_t1

0x3c71,	// (0x00081178) list_cset_text2_pane_t1_ParamLimits

0x3c71,	// (0x00081178) list_cset_text2_pane_t1

0x8539,	// (0x00085a40) main_radioblah_pane_ParamLimits

0xbea5,	// (0x000893ac) main_mobtv_info_pane_t3_ParamLimits

0xbea5,	// (0x000893ac) main_mobtv_info_pane_t3

0xbfdb,	// (0x000894e2) main_radioblah_pane_g1

0xc006,	// (0x0008950d) main_radioblah_info_pane_g1

0xc081,	// (0x00089588) main_radioblah_info_pane_t3_ParamLimits

0xc081,	// (0x00089588) main_radioblah_info_pane_t3

0x73d6,	// (0x000848dd) highlight_cell_cale_month_pane_ParamLimits

0x73d6,	// (0x000848dd) highlight_cell_cale_month_pane

0x572c,	// (0x00082c33) main_phob_fisheye_pane

0x1b01,	// (0x0007f008) scroll_pane_cp0031_ParamLimits

0x1b01,	// (0x0007f008) scroll_pane_cp0031

0x27e2,	// (0x0007fce9) wait_bar_pane_cp08_ParamLimits

0xb916,	// (0x00088e1d) cset_list_set_pane_copy1_ParamLimits

0x2f26,	// (0x0008042d) highlight_cell_cale_month_pane_g1

0xc102,	// (0x00089609) highlight_cell_cale_month_pane_t1

0x2f2e,	// (0x00080435) list_gen_pane_cp01

0x4427,	// (0x0008192e) scroll_pane_01

0x421a,	// (0x00081721) list_single_double_fisheye_pane

0xc110,	// (0x00089617) list_double_fisheye_pane_g1_ParamLimits

0xc110,	// (0x00089617) list_double_fisheye_pane_g1

0xc11c,	// (0x00089623) list_double_fisheye_pane_g2_ParamLimits

0xc11c,	// (0x00089623) list_double_fisheye_pane_g2

0xc130,	// (0x00089637) list_double_fisheye_pane_g3_ParamLimits

0xc130,	// (0x00089637) list_double_fisheye_pane_g3

0x0004,

0xfcbc,	// (0x0008d1c3) list_double_fisheye_pane_g_ParamLimits

0xfcbc,	// (0x0008d1c3) list_double_fisheye_pane_g

0xc159,	// (0x00089660) list_double_fisheye_pane_t1_ParamLimits

0xc159,	// (0x00089660) list_double_fisheye_pane_t1

0xc174,	// (0x0008967b) list_double_fisheye_pane_t2_ParamLimits

0xc174,	// (0x0008967b) list_double_fisheye_pane_t2

0x0001,

0xfcc7,	// (0x0008d1ce) list_double_fisheye_pane_t_ParamLimits

0xfcc7,	// (0x0008d1ce) list_double_fisheye_pane_t

0x572c,	// (0x00082c33) main_call5_pane

0xbf62,	// (0x00089469) sc_swipe_pane_ParamLimits

0xbf62,	// (0x00089469) sc_swipe_pane

0xc1a2,	// (0x000896a9) call5_image_pane_ParamLimits

0xc1a2,	// (0x000896a9) call5_image_pane

0xc1ae,	// (0x000896b5) call5_swipe_1_pane_ParamLimits

0xc1ae,	// (0x000896b5) call5_swipe_1_pane

0xc1ba,	// (0x000896c1) call5_swipe_2_pane_ParamLimits

0xc1ba,	// (0x000896c1) call5_swipe_2_pane

0xc1d2,	// (0x000896d9) popup_call5_audio_first_window_ParamLimits

0xc1d2,	// (0x000896d9) popup_call5_audio_first_window

0x19f9,	// (0x0007ef00) call5_swipe_1_pane_g1_ParamLimits

0x19f9,	// (0x0007ef00) call5_swipe_1_pane_g1

0x2f37,	// (0x0008043e) call5_swipe_1_pane_g2_ParamLimits

0x2f37,	// (0x0008043e) call5_swipe_1_pane_g2

0x0001,

0xfccc,	// (0x0008d1d3) call5_swipe_1_pane_g_ParamLimits

0xfccc,	// (0x0008d1d3) call5_swipe_1_pane_g

0x2f43,	// (0x0008044a) call5_swipe_1_pane_t1_ParamLimits

0x2f43,	// (0x0008044a) call5_swipe_1_pane_t1

0x19f9,	// (0x0007ef00) call5_swipe_2_pane_g1_ParamLimits

0x19f9,	// (0x0007ef00) call5_swipe_2_pane_g1

0x2f58,	// (0x0008045f) call5_swipe_2_pane_g2_ParamLimits

0x2f58,	// (0x0008045f) call5_swipe_2_pane_g2

0x0001,

0xfcd1,	// (0x0008d1d8) call5_swipe_2_pane_g_ParamLimits

0xfcd1,	// (0x0008d1d8) call5_swipe_2_pane_g

0x2f64,	// (0x0008046b) call5_swipe_2_pane_t1_ParamLimits

0x2f64,	// (0x0008046b) call5_swipe_2_pane_t1

0x2f79,	// (0x00080480) sc_swipe_pane_g1_ParamLimits

0x2f79,	// (0x00080480) sc_swipe_pane_g1

0x2f86,	// (0x0008048d) sc_swipe_pane_g2_ParamLimits

0x2f86,	// (0x0008048d) sc_swipe_pane_g2

0x0001,

0xfcd6,	// (0x0008d1dd) sc_swipe_pane_g_ParamLimits

0xfcd6,	// (0x0008d1dd) sc_swipe_pane_g

0x2f92,	// (0x00080499) sc_swipe_pane_t1_ParamLimits

0x2f92,	// (0x00080499) sc_swipe_pane_t1

0x572c,	// (0x00082c33) main_cmail_launcher_pane

0xc1de,	// (0x000896e5) aid_size_cell_cmail_l_ParamLimits

0xc1de,	// (0x000896e5) aid_size_cell_cmail_l

0xc1ee,	// (0x000896f5) grid_cmail_l_pane_ParamLimits

0xc1ee,	// (0x000896f5) grid_cmail_l_pane

0xc1fa,	// (0x00089701) cell_cmail_l_pane_ParamLimits

0xc1fa,	// (0x00089701) cell_cmail_l_pane

0xc20c,	// (0x00089713) cell_cmail_l_pane_g1_ParamLimits

0xc20c,	// (0x00089713) cell_cmail_l_pane_g1

0xc21c,	// (0x00089723) cell_cmail_l_pane_t1_ParamLimits

0xc21c,	// (0x00089723) cell_cmail_l_pane_t1

0xc232,	// (0x00089739) cell_cmail_l_pane_t2_ParamLimits

0xc232,	// (0x00089739) cell_cmail_l_pane_t2

0x0001,

0xfcdb,	// (0x0008d1e2) cell_cmail_l_pane_t_ParamLimits

0xfcdb,	// (0x0008d1e2) cell_cmail_l_pane_t

0x0367,	// (0x0007d86e) grid_highlight_pane_cp018_ParamLimits

0x0367,	// (0x0007d86e) grid_highlight_pane_cp018

0x55c6,	// (0x00082acd) main2_pane_ParamLimits

0x55c6,	// (0x00082acd) main2_pane

0xdeb6,	// (0x0008b3bd) popup_sp_fs_action_menu_bg_pane_g1

0xdebe,	// (0x0008b3c5) popup_sp_fs_action_menu_bg_pane_g2

0xdec6,	// (0x0008b3cd) popup_sp_fs_action_menu_bg_pane_g3

0xdece,	// (0x0008b3d5) popup_sp_fs_action_menu_bg_pane_g4

0xded6,	// (0x0008b3dd) popup_sp_fs_action_menu_bg_pane_g5

0xdede,	// (0x0008b3e5) popup_sp_fs_action_menu_bg_pane_g6

0xdee6,	// (0x0008b3ed) popup_sp_fs_action_menu_bg_pane_g7

0xdeee,	// (0x0008b3f5) popup_sp_fs_action_menu_bg_pane_g8

0xdef6,	// (0x0008b3fd) popup_sp_fs_action_menu_bg_pane_g9

0xdefe,	// (0x0008b405) popup_sp_fs_action_menu_bg_pane_g10

0xdefe,	// (0x0008b405) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf186,	// (0x0008c68d) popup_sp_fs_action_menu_bg_pane_g

0x6493,	// (0x0008399a) list_medium_line_x2_t3_g3_g1_ParamLimits

0x6493,	// (0x0008399a) list_medium_line_x2_t3_g3_g1

0x649f,	// (0x000839a6) list_medium_line_x2_t3_g3_g2_ParamLimits

0x649f,	// (0x000839a6) list_medium_line_x2_t3_g3_g2

0x64ab,	// (0x000839b2) list_medium_line_x2_t3_g3_g3_ParamLimits

0x64ab,	// (0x000839b2) list_medium_line_x2_t3_g3_g3

0x0002,

0xf234,	// (0x0008c73b) list_medium_line_x2_t3_g3_g_ParamLimits

0xf234,	// (0x0008c73b) list_medium_line_x2_t3_g3_g

0x64b7,	// (0x000839be) list_medium_line_x2_t3_g3_t1_ParamLimits

0x64b7,	// (0x000839be) list_medium_line_x2_t3_g3_t1

0x64cc,	// (0x000839d3) list_medium_line_x2_t3_g3_t2_ParamLimits

0x64cc,	// (0x000839d3) list_medium_line_x2_t3_g3_t2

0x64de,	// (0x000839e5) list_medium_line_x2_t3_g3_t3_ParamLimits

0x64de,	// (0x000839e5) list_medium_line_x2_t3_g3_t3

0x0002,

0xf23b,	// (0x0008c742) list_medium_line_x2_t3_g3_t_ParamLimits

0xf23b,	// (0x0008c742) list_medium_line_x2_t3_g3_t

0x6493,	// (0x0008399a) list_medium_line_x2_t3_g2_g1_ParamLimits

0x6493,	// (0x0008399a) list_medium_line_x2_t3_g2_g1

0x64ab,	// (0x000839b2) list_medium_line_x2_t3_g2_g2_ParamLimits

0x64ab,	// (0x000839b2) list_medium_line_x2_t3_g2_g2

0x0001,

0xf242,	// (0x0008c749) list_medium_line_x2_t3_g2_g_ParamLimits

0xf242,	// (0x0008c749) list_medium_line_x2_t3_g2_g

0x64f3,	// (0x000839fa) list_medium_line_x2_t3_g2_t1_ParamLimits

0x64f3,	// (0x000839fa) list_medium_line_x2_t3_g2_t1

0x6509,	// (0x00083a10) list_medium_line_x2_t3_g2_t2_ParamLimits

0x6509,	// (0x00083a10) list_medium_line_x2_t3_g2_t2

0x64de,	// (0x000839e5) list_medium_line_x2_t3_g2_t3_ParamLimits

0x64de,	// (0x000839e5) list_medium_line_x2_t3_g2_t3

0x0002,

0xf247,	// (0x0008c74e) list_medium_line_x2_t3_g2_t_ParamLimits

0xf247,	// (0x0008c74e) list_medium_line_x2_t3_g2_t

0x6493,	// (0x0008399a) list_medium_line_x2_t4_g4_g1_ParamLimits

0x6493,	// (0x0008399a) list_medium_line_x2_t4_g4_g1

0x651b,	// (0x00083a22) list_medium_line_x2_t4_g4_g2_ParamLimits

0x651b,	// (0x00083a22) list_medium_line_x2_t4_g4_g2

0x649f,	// (0x000839a6) list_medium_line_x2_t4_g4_g3_ParamLimits

0x649f,	// (0x000839a6) list_medium_line_x2_t4_g4_g3

0x6527,	// (0x00083a2e) list_medium_line_x2_t4_g4_g4_ParamLimits

0x6527,	// (0x00083a2e) list_medium_line_x2_t4_g4_g4

0x0003,

0xf24e,	// (0x0008c755) list_medium_line_x2_t4_g4_g_ParamLimits

0xf24e,	// (0x0008c755) list_medium_line_x2_t4_g4_g

0x6533,	// (0x00083a3a) list_medium_line_x2_t4_g4_t1_ParamLimits

0x6533,	// (0x00083a3a) list_medium_line_x2_t4_g4_t1

0x654d,	// (0x00083a54) list_medium_line_x2_t4_g4_t2_ParamLimits

0x654d,	// (0x00083a54) list_medium_line_x2_t4_g4_t2

0x6562,	// (0x00083a69) list_medium_line_x2_t4_g4_t3_ParamLimits

0x6562,	// (0x00083a69) list_medium_line_x2_t4_g4_t3

0x6577,	// (0x00083a7e) list_medium_line_x2_t4_g4_t4_ParamLimits

0x6577,	// (0x00083a7e) list_medium_line_x2_t4_g4_t4

0x0003,

0xf257,	// (0x0008c75e) list_medium_line_x2_t4_g4_t_ParamLimits

0xf257,	// (0x0008c75e) list_medium_line_x2_t4_g4_t

0x6493,	// (0x0008399a) list_medium_line_x2_t2_g4_g1_ParamLimits

0x6493,	// (0x0008399a) list_medium_line_x2_t2_g4_g1

0x651b,	// (0x00083a22) list_medium_line_x2_t2_g4_g2_ParamLimits

0x651b,	// (0x00083a22) list_medium_line_x2_t2_g4_g2

0x649f,	// (0x000839a6) list_medium_line_x2_t2_g4_g3_ParamLimits

0x649f,	// (0x000839a6) list_medium_line_x2_t2_g4_g3

0x64ab,	// (0x000839b2) list_medium_line_x2_t2_g4_g4_ParamLimits

0x64ab,	// (0x000839b2) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2be,	// (0x0008c7c5) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2be,	// (0x0008c7c5) list_medium_line_x2_t2_g4_g

0x73fc,	// (0x00084903) list_medium_line_x2_t2_g4_t1_ParamLimits

0x73fc,	// (0x00084903) list_medium_line_x2_t2_g4_t1

0x64de,	// (0x000839e5) list_medium_line_x2_t2_g4_t2_ParamLimits

0x64de,	// (0x000839e5) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2c7,	// (0x0008c7ce) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2c7,	// (0x0008c7ce) list_medium_line_x2_t2_g4_t

0x6493,	// (0x0008399a) list_medium_line_x2_t2_g3_g1_ParamLimits

0x6493,	// (0x0008399a) list_medium_line_x2_t2_g3_g1

0x649f,	// (0x000839a6) list_medium_line_x2_t2_g3_g2_ParamLimits

0x649f,	// (0x000839a6) list_medium_line_x2_t2_g3_g2

0x64ab,	// (0x000839b2) list_medium_line_x2_t2_g3_g3_ParamLimits

0x64ab,	// (0x000839b2) list_medium_line_x2_t2_g3_g3

0x0002,

0xf234,	// (0x0008c73b) list_medium_line_x2_t2_g3_g_ParamLimits

0xf234,	// (0x0008c73b) list_medium_line_x2_t2_g3_g

0x7411,	// (0x00084918) list_medium_line_x2_t2_g3_t1_ParamLimits

0x7411,	// (0x00084918) list_medium_line_x2_t2_g3_t1

0x64de,	// (0x000839e5) list_medium_line_x2_t2_g3_t2_ParamLimits

0x64de,	// (0x000839e5) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2cc,	// (0x0008c7d3) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2cc,	// (0x0008c7d3) list_medium_line_x2_t2_g3_t

0x7592,	// (0x00084a99) main_sp_fs_list_pane_ParamLimits

0x7592,	// (0x00084a99) main_sp_fs_list_pane

0x759f,	// (0x00084aa6) sp_fs_scroll_pane_ParamLimits

0x759f,	// (0x00084aa6) sp_fs_scroll_pane

0x75ac,	// (0x00084ab3) list_medium_line_x2_t3_t1

0x75bc,	// (0x00084ac3) list_medium_line_x2_t3_t2

0x75ca,	// (0x00084ad1) list_medium_line_x2_t3_t3

0x0002,

0xf317,	// (0x0008c81e) list_medium_line_x2_t3_t

0x75d8,	// (0x00084adf) list_medium_line_x3_t4_t1

0x75e8,	// (0x00084aef) list_medium_line_x3_t4_t2

0x75f6,	// (0x00084afd) list_medium_line_x3_t4_t3

0x7604,	// (0x00084b0b) list_medium_line_x3_t4_t4

0x0003,

0xf31e,	// (0x0008c825) list_medium_line_x3_t4_t

0x7612,	// (0x00084b19) list_medium_line_x4_t5_t1

0x7622,	// (0x00084b29) list_medium_line_x4_t5_t2

0x75f6,	// (0x00084afd) list_medium_line_x4_t5_t3

0x7630,	// (0x00084b37) list_medium_line_x4_t5_t4

0x7604,	// (0x00084b0b) list_medium_line_x4_t5_t5

0x0004,

0xf327,	// (0x0008c82e) list_medium_line_x4_t5_t

0x6493,	// (0x0008399a) list_medium_line_t4_g4_g1_ParamLimits

0x6493,	// (0x0008399a) list_medium_line_t4_g4_g1

0x6527,	// (0x00083a2e) list_medium_line_t4_g4_g2_ParamLimits

0x6527,	// (0x00083a2e) list_medium_line_t4_g4_g2

0x763e,	// (0x00084b45) list_medium_line_t4_g4_g3_ParamLimits

0x763e,	// (0x00084b45) list_medium_line_t4_g4_g3

0x64ab,	// (0x000839b2) list_medium_line_t4_g4_g4_ParamLimits

0x64ab,	// (0x000839b2) list_medium_line_t4_g4_g4

0x0003,

0xf332,	// (0x0008c839) list_medium_line_t4_g4_g_ParamLimits

0xf332,	// (0x0008c839) list_medium_line_t4_g4_g

0x764a,	// (0x00084b51) list_medium_line_t4_g4_t1_ParamLimits

0x764a,	// (0x00084b51) list_medium_line_t4_g4_t1

0x765f,	// (0x00084b66) list_medium_line_t4_g4_t2_ParamLimits

0x765f,	// (0x00084b66) list_medium_line_t4_g4_t2

0x7675,	// (0x00084b7c) list_medium_line_t4_g4_t3_ParamLimits

0x7675,	// (0x00084b7c) list_medium_line_t4_g4_t3

0x768b,	// (0x00084b92) list_medium_line_t4_g4_t4_ParamLimits

0x768b,	// (0x00084b92) list_medium_line_t4_g4_t4

0x0003,

0xf33b,	// (0x0008c842) list_medium_line_t4_g4_t_ParamLimits

0xf33b,	// (0x0008c842) list_medium_line_t4_g4_t

0x77ae,	// (0x00084cb5) chi_dic_find_pane_g1

0x8555,	// (0x00085a5c) main_tport_pane

0x2155,	// (0x0007f65c) list_medium_line_plain_t1

0x216b,	// (0x0007f672) list_medium_line_t2_g2_g1_ParamLimits

0x216b,	// (0x0007f672) list_medium_line_t2_g2_g1

0x4174,	// (0x0008167b) list_medium_line_t2_g2_g2_ParamLimits

0x4174,	// (0x0008167b) list_medium_line_t2_g2_g2

0x0001,

0xfa13,	// (0x0008cf1a) list_medium_line_t2_g2_g_ParamLimits

0xfa13,	// (0x0008cf1a) list_medium_line_t2_g2_g

0xada5,	// (0x000882ac) list_medium_line_t2_g2_t1_ParamLimits

0xada5,	// (0x000882ac) list_medium_line_t2_g2_t1

0xadbf,	// (0x000882c6) list_medium_line_t2_g2_t2_ParamLimits

0xadbf,	// (0x000882c6) list_medium_line_t2_g2_t2

0x0001,

0xfa18,	// (0x0008cf1f) list_medium_line_t2_g2_t_ParamLimits

0xfa18,	// (0x0008cf1f) list_medium_line_t2_g2_t

0x2486,	// (0x0007f98d) aid_sp_fs_list_icon_a_sm

0x4209,	// (0x00081710) aid_sp_fs_list_icon_d

0x248e,	// (0x0007f995) aid_sp_fs_text_primary

0x4211,	// (0x00081718) aid_sp_fs_text_secondary

0x2497,	// (0x0007f99e) list_medium_line

0x2497,	// (0x0007f99e) list_medium_line_g2

0x2497,	// (0x0007f99e) list_medium_line_g3

0x2497,	// (0x0007f99e) list_medium_line_plain

0x2497,	// (0x0007f99e) list_medium_line_plain_t2

0x2497,	// (0x0007f99e) list_medium_line_plain_t3

0x2497,	// (0x0007f99e) list_medium_line_right_icon

0x2497,	// (0x0007f99e) list_medium_line_right_iconx2

0x2497,	// (0x0007f99e) list_medium_line_t2

0x2497,	// (0x0007f99e) list_medium_line_t2_g2

0x2497,	// (0x0007f99e) list_medium_line_t2_g3

0x2497,	// (0x0007f99e) list_medium_line_t2_right_icon

0x2497,	// (0x0007f99e) list_medium_line_t2_right_iconx2

0x2497,	// (0x0007f99e) list_medium_line_t3

0x2497,	// (0x0007f99e) list_medium_line_t3_g2

0x2497,	// (0x0007f99e) list_medium_line_t3_g3

0x2497,	// (0x0007f99e) list_medium_line_t3_right_iconx2

0xb3f8,	// (0x000888ff) list_medium_line_t4_g4

0xb401,	// (0x00088908) list_medium_line_x2

0xb401,	// (0x00088908) list_medium_line_x2_t2_g2

0xb401,	// (0x00088908) list_medium_line_x2_t2_g3

0xb401,	// (0x00088908) list_medium_line_x2_t2_g4

0xb401,	// (0x00088908) list_medium_line_x2_t3

0xb401,	// (0x00088908) list_medium_line_x2_t3_g2

0xb401,	// (0x00088908) list_medium_line_x2_t3_g3

0xb401,	// (0x00088908) list_medium_line_x2_t3_g4

0xb401,	// (0x00088908) list_medium_line_x2_t4_g2

0xb401,	// (0x00088908) list_medium_line_x2_t4_g4

0xb40a,	// (0x00088911) list_medium_line_x3

0xb40a,	// (0x00088911) list_medium_line_x3_t4

0xb40a,	// (0x00088911) list_medium_line_x3_t4_g4

0xb3f8,	// (0x000888ff) list_medium_line_x4_t4

0xb3f8,	// (0x000888ff) list_medium_line_x4_t4_g7

0xb3f8,	// (0x000888ff) list_medium_line_x4_t5

0xb413,	// (0x0008891a) list_single_fs_dyc_pane_ParamLimits

0xb413,	// (0x0008891a) list_single_fs_dyc_pane

0x6493,	// (0x0008399a) list_medium_line_x4_t4_g7_g1_ParamLimits

0x6493,	// (0x0008399a) list_medium_line_x4_t4_g7_g1

0xbad7,	// (0x00088fde) list_medium_line_x4_t4_g7_g2_ParamLimits

0xbad7,	// (0x00088fde) list_medium_line_x4_t4_g7_g2

0xbae3,	// (0x00088fea) list_medium_line_x4_t4_g7_g3_ParamLimits

0xbae3,	// (0x00088fea) list_medium_line_x4_t4_g7_g3

0xbaf2,	// (0x00088ff9) list_medium_line_x4_t4_g7_g4_ParamLimits

0xbaf2,	// (0x00088ff9) list_medium_line_x4_t4_g7_g4

0xbafe,	// (0x00089005) list_medium_line_x4_t4_g7_g5_ParamLimits

0xbafe,	// (0x00089005) list_medium_line_x4_t4_g7_g5

0xbb0d,	// (0x00089014) list_medium_line_x4_t4_g7_g6_ParamLimits

0xbb0d,	// (0x00089014) list_medium_line_x4_t4_g7_g6

0xbb1c,	// (0x00089023) list_medium_line_x4_t4_g7_g7_ParamLimits

0xbb1c,	// (0x00089023) list_medium_line_x4_t4_g7_g7

0x0006,

0xfbe3,	// (0x0008d0ea) list_medium_line_x4_t4_g7_g_ParamLimits

0xfbe3,	// (0x0008d0ea) list_medium_line_x4_t4_g7_g

0xbb28,	// (0x0008902f) list_medium_line_x4_t4_g7_t1_ParamLimits

0xbb28,	// (0x0008902f) list_medium_line_x4_t4_g7_t1

0xbb3d,	// (0x00089044) list_medium_line_x4_t4_g7_t2_ParamLimits

0xbb3d,	// (0x00089044) list_medium_line_x4_t4_g7_t2

0xbb52,	// (0x00089059) list_medium_line_x4_t4_g7_t3_ParamLimits

0xbb52,	// (0x00089059) list_medium_line_x4_t4_g7_t3

0xbb67,	// (0x0008906e) list_medium_line_x4_t4_g7_t4_ParamLimits

0xbb67,	// (0x0008906e) list_medium_line_x4_t4_g7_t4

0xbb79,	// (0x00089080) list_medium_line_x4_t4_g7_t5_ParamLimits

0xbb79,	// (0x00089080) list_medium_line_x4_t4_g7_t5

0x0004,

0xfbf2,	// (0x0008d0f9) list_medium_line_x4_t4_g7_t_ParamLimits

0xfbf2,	// (0x0008d0f9) list_medium_line_x4_t4_g7_t

0xbb8b,	// (0x00089092) list_single_dyc_row_pane_ParamLimits

0xbb8b,	// (0x00089092) list_single_dyc_row_pane

0xc196,	// (0x0008969d) call5_gesture_pane_ParamLimits

0xc196,	// (0x0008969d) call5_gesture_pane

0xc1c6,	// (0x000896cd) call5_windows_pane_ParamLimits

0xc1c6,	// (0x000896cd) call5_windows_pane

0xc24a,	// (0x00089751) call5_swipe_1_pane_cp_ParamLimits

0xc24a,	// (0x00089751) call5_swipe_1_pane_cp

0xc256,	// (0x0008975d) call5_swipe_2_pane_cp_ParamLimits

0xc256,	// (0x0008975d) call5_swipe_2_pane_cp

0xdfe2,	// (0x0008b4e9) call5_image_pane_cp

0xc262,	// (0x00089769) popup_call5_audio_first_window_cp_ParamLimits

0xc262,	// (0x00089769) popup_call5_audio_first_window_cp

0x2f79,	// (0x00080480) call5_swipe_1_pane_g1_cp_ParamLimits

0x2f79,	// (0x00080480) call5_swipe_1_pane_g1_cp

0x2fa7,	// (0x000804ae) call5_swipe_1_pane_g2_cp

0x2f92,	// (0x00080499) call5_swipe_1_pane_t1_cp_ParamLimits

0x2f92,	// (0x00080499) call5_swipe_1_pane_t1_cp

0x2f79,	// (0x00080480) call5_swipe_2_pane_g1_cp_ParamLimits

0x2f79,	// (0x00080480) call5_swipe_2_pane_g1_cp

0x2faf,	// (0x000804b6) call5_swipe_2_pane_g2_cp

0x2fb7,	// (0x000804be) call5_swipe_2_pane_t1_cp_ParamLimits

0x2fb7,	// (0x000804be) call5_swipe_2_pane_t1_cp

0x0367,	// (0x0007d86e) main_sp_fs_email_pane

0x2fcc,	// (0x000804d3) main_sp_fs_listscroll_pane_te

0x2fd5,	// (0x000804dc) popup_sp_fs_action_menu_pane_ParamLimits

0x2fd5,	// (0x000804dc) popup_sp_fs_action_menu_pane

0x17ca,	// (0x0007ecd1) bg_sp_fs_ctrlbar_pane_g1

0x1d82,	// (0x0007f289) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0x1d94,	// (0x0007f29b) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0x1d8b,	// (0x0007f292) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0x17ca,	// (0x0007ecd1) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfce0,	// (0x0008d1e7) bg_sp_fs_ctrlbar_ddmenu_pane_g

0x15b7,	// (0x0007eabe) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0x15b7,	// (0x0007eabe) bg_sp_fs_ctrlbar_ddmenu_pane

0x3009,	// (0x00080510) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0x3009,	// (0x00080510) main_sp_fs_ctrlbar_ddmenu_pane_g1

0x3015,	// (0x0008051c) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0x3015,	// (0x0008051c) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfce9,	// (0x0008d1f0) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfce9,	// (0x0008d1f0) main_sp_fs_ctrlbar_ddmenu_pane_g

0x3021,	// (0x00080528) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0x3021,	// (0x00080528) main_sp_fs_ctrlbar_ddmenu_pane_t1

0x422f,	// (0x00081736) list_medium_line_t2_right_icon_g1

0xc26e,	// (0x00089775) list_medium_line_t2_right_icon_t1

0xc27d,	// (0x00089784) list_medium_line_t2_right_icon_t2

0x0001,

0xfcee,	// (0x0008d1f5) list_medium_line_t2_right_icon_t

0x12b6,	// (0x0007e7bd) bg_sp_fs_ctrlbar_pane_ParamLimits

0x12b6,	// (0x0007e7bd) bg_sp_fs_ctrlbar_pane

0xc2e0,	// (0x000897e7) main_sp_fs_ctrlbar_button_pane_cp01

0xc2e8,	// (0x000897ef) main_sp_fs_ctrlbar_ddmenu_pane

0x3083,	// (0x0008058a) main_sp_fs_ctrlbar_pane_g1

0x308f,	// (0x00080596) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfcf3,	// (0x0008d1fa) main_sp_fs_ctrlbar_pane_g

0x309b,	// (0x000805a2) main_sp_fs_ctrlbar_pane_t1

0xc2f2,	// (0x000897f9) main_sp_fs_ctrlbar_pane

0xc306,	// (0x0008980d) main_sp_fs_listscroll_pane_te_cp01

0xc317,	// (0x0008981e) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0xc317,	// (0x0008981e) popup_sp_fs_action_menu_pane_cp01

0x0367,	// (0x0007d86e) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0x0367,	// (0x0007d86e) bg_sp_fs_highlight_list_pane_cp01

0x30cb,	// (0x000805d2) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0x30cb,	// (0x000805d2) sp_fs_action_menu_list_gene_pane_g1

0x30da,	// (0x000805e1) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0x30da,	// (0x000805e1) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfcfd,	// (0x0008d204) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfcfd,	// (0x0008d204) sp_fs_action_menu_list_gene_pane_g

0x30e7,	// (0x000805ee) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0x30e7,	// (0x000805ee) sp_fs_action_menu_list_gene_pane_t1

0x30ff,	// (0x00080606) sp_fs_action_menu_list_gene_pane_ParamLimits

0x30ff,	// (0x00080606) sp_fs_action_menu_list_gene_pane

0x311e,	// (0x00080625) popup_sp_fs_action_menu_bg_pane_ParamLimits

0x311e,	// (0x00080625) popup_sp_fs_action_menu_bg_pane

0x312c,	// (0x00080633) sp_fs_action_menu_list_pane_ParamLimits

0x312c,	// (0x00080633) sp_fs_action_menu_list_pane

0x314c,	// (0x00080653) sp_fs_scroll_pane_cp01_ParamLimits

0x314c,	// (0x00080653) sp_fs_scroll_pane_cp01

0xc341,	// (0x00089848) list_medium_line_plain_t2_t1

0xc350,	// (0x00089857) list_medium_line_plain_t2_t2

0x0001,

0xfd02,	// (0x0008d209) list_medium_line_plain_t2_t

0xc35e,	// (0x00089865) list_medium_line_plain_t3_t1

0xc36e,	// (0x00089875) list_medium_line_plain_t3_t2

0xc37c,	// (0x00089883) list_medium_line_plain_t3_t3

0x0002,

0xfd07,	// (0x0008d20e) list_medium_line_plain_t3_t

0x6493,	// (0x0008399a) list_medium_line_x2_t2_g2_g1_ParamLimits

0x6493,	// (0x0008399a) list_medium_line_x2_t2_g2_g1

0x64ab,	// (0x000839b2) list_medium_line_x2_t2_g2_g2_ParamLimits

0x64ab,	// (0x000839b2) list_medium_line_x2_t2_g2_g2

0x0001,

0xf242,	// (0x0008c749) list_medium_line_x2_t2_g2_g_ParamLimits

0xf242,	// (0x0008c749) list_medium_line_x2_t2_g2_g

0x764a,	// (0x00084b51) list_medium_line_x2_t2_g2_t1_ParamLimits

0x764a,	// (0x00084b51) list_medium_line_x2_t2_g2_t1

0x64de,	// (0x000839e5) list_medium_line_x2_t2_g2_t2_ParamLimits

0x64de,	// (0x000839e5) list_medium_line_x2_t2_g2_t2

0x0001,

0xfd0e,	// (0x0008d215) list_medium_line_x2_t2_g2_t_ParamLimits

0xfd0e,	// (0x0008d215) list_medium_line_x2_t2_g2_t

0x6493,	// (0x0008399a) list_medium_line_x2_t4_g2_g1_ParamLimits

0x6493,	// (0x0008399a) list_medium_line_x2_t4_g2_g1

0xc38a,	// (0x00089891) list_medium_line_x2_t4_g2_g2_ParamLimits

0xc38a,	// (0x00089891) list_medium_line_x2_t4_g2_g2

0x0001,

0xfd13,	// (0x0008d21a) list_medium_line_x2_t4_g2_g_ParamLimits

0xfd13,	// (0x0008d21a) list_medium_line_x2_t4_g2_g

0xc39b,	// (0x000898a2) list_medium_line_x2_t4_g2_t1_ParamLimits

0xc39b,	// (0x000898a2) list_medium_line_x2_t4_g2_t1

0xc3b5,	// (0x000898bc) list_medium_line_x2_t4_g2_t2_ParamLimits

0xc3b5,	// (0x000898bc) list_medium_line_x2_t4_g2_t2

0xc3ca,	// (0x000898d1) list_medium_line_x2_t4_g2_t3_ParamLimits

0xc3ca,	// (0x000898d1) list_medium_line_x2_t4_g2_t3

0x64de,	// (0x000839e5) list_medium_line_x2_t4_g2_t4_ParamLimits

0x64de,	// (0x000839e5) list_medium_line_x2_t4_g2_t4

0x0003,

0xfd18,	// (0x0008d21f) list_medium_line_x2_t4_g2_t_ParamLimits

0xfd18,	// (0x0008d21f) list_medium_line_x2_t4_g2_t

0x4237,	// (0x0008173e) list_medium_line_t3_right_iconx2_g1

0x422f,	// (0x00081736) list_medium_line_t3_right_iconx2_g2

0xc3df,	// (0x000898e6) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfd21,	// (0x0008d228) list_medium_line_t3_right_iconx2_g

0x303b,	// (0x00080542) list_medium_line_t3_right_iconx2_t1

0xc3e7,	// (0x000898ee) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfd28,	// (0x0008d22f) list_medium_line_t3_right_iconx2_t

0x6493,	// (0x0008399a) list_medium_line_x3_t4_g4_g1_ParamLimits

0x6493,	// (0x0008399a) list_medium_line_x3_t4_g4_g1

0x649f,	// (0x000839a6) list_medium_line_x3_t4_g4_g2_ParamLimits

0x649f,	// (0x000839a6) list_medium_line_x3_t4_g4_g2

0x6527,	// (0x00083a2e) list_medium_line_x3_t4_g4_g3_ParamLimits

0x6527,	// (0x00083a2e) list_medium_line_x3_t4_g4_g3

0xc3f5,	// (0x000898fc) list_medium_line_x3_t4_g4_g4_ParamLimits

0xc3f5,	// (0x000898fc) list_medium_line_x3_t4_g4_g4

0x0003,

0xfd2d,	// (0x0008d234) list_medium_line_x3_t4_g4_g_ParamLimits

0xfd2d,	// (0x0008d234) list_medium_line_x3_t4_g4_g

0xc401,	// (0x00089908) list_medium_line_x3_t4_g4_t1_ParamLimits

0xc401,	// (0x00089908) list_medium_line_x3_t4_g4_t1

0xc418,	// (0x0008991f) list_medium_line_x3_t4_g4_t2_ParamLimits

0xc418,	// (0x0008991f) list_medium_line_x3_t4_g4_t2

0xc42d,	// (0x00089934) list_medium_line_x3_t4_g4_t3_ParamLimits

0xc42d,	// (0x00089934) list_medium_line_x3_t4_g4_t3

0xc442,	// (0x00089949) list_medium_line_x3_t4_g4_t4_ParamLimits

0xc442,	// (0x00089949) list_medium_line_x3_t4_g4_t4

0x0003,

0xfd36,	// (0x0008d23d) list_medium_line_x3_t4_g4_t_ParamLimits

0xfd36,	// (0x0008d23d) list_medium_line_x3_t4_g4_t

0xc45f,	// (0x00089966) list_single_dyc_row_text_pane_t1_ParamLimits

0xc45f,	// (0x00089966) list_single_dyc_row_text_pane_t1

0xc496,	// (0x0008999d) list_single_dyc_row_text_pane_t2_ParamLimits

0xc496,	// (0x0008999d) list_single_dyc_row_text_pane_t2

0x3172,	// (0x00080679) list_single_dyc_row_text_pane_t3_ParamLimits

0x3172,	// (0x00080679) list_single_dyc_row_text_pane_t3

0x0005,

0xfd3f,	// (0x0008d246) list_single_dyc_row_text_pane_t_ParamLimits

0xfd3f,	// (0x0008d246) list_single_dyc_row_text_pane_t

0x3196,	// (0x0008069d) list_single_dyc_row_pane_g1_ParamLimits

0x3196,	// (0x0008069d) list_single_dyc_row_pane_g1

0x31a2,	// (0x000806a9) list_single_dyc_row_pane_g2_ParamLimits

0x31a2,	// (0x000806a9) list_single_dyc_row_pane_g2

0x31ae,	// (0x000806b5) list_single_dyc_row_pane_g3_ParamLimits

0x31ae,	// (0x000806b5) list_single_dyc_row_pane_g3

0x31ba,	// (0x000806c1) list_single_dyc_row_pane_g4_ParamLimits

0x31ba,	// (0x000806c1) list_single_dyc_row_pane_g4

0x0003,

0xfd4c,	// (0x0008d253) list_single_dyc_row_pane_g_ParamLimits

0xfd4c,	// (0x0008d253) list_single_dyc_row_pane_g

0x31c6,	// (0x000806cd) list_single_dyc_row_text_pane_ParamLimits

0x31c6,	// (0x000806cd) list_single_dyc_row_text_pane

0xd6cc,	// (0x0008abd3) bg_sp_fs_scroll_pane

0x31e5,	// (0x000806ec) thumb_sp_fs_scroll_pane

0x216b,	// (0x0007f672) list_medium_line_g1_ParamLimits

0x216b,	// (0x0007f672) list_medium_line_g1

0x31ee,	// (0x000806f5) list_medium_line_t1_ParamLimits

0x31ee,	// (0x000806f5) list_medium_line_t1

0x6493,	// (0x0008399a) list_medium_line_x2_g1_ParamLimits

0x6493,	// (0x0008399a) list_medium_line_x2_g1

0x649f,	// (0x000839a6) list_medium_line_x2_g2_ParamLimits

0x649f,	// (0x000839a6) list_medium_line_x2_g2

0x0001,

0xfd55,	// (0x0008d25c) list_medium_line_x2_g_ParamLimits

0xfd55,	// (0x0008d25c) list_medium_line_x2_g

0x3203,	// (0x0008070a) list_medium_line_x2_t1_ParamLimits

0x3203,	// (0x0008070a) list_medium_line_x2_t1

0x6493,	// (0x0008399a) list_medium_line_x3_g1_ParamLimits

0x6493,	// (0x0008399a) list_medium_line_x3_g1

0x649f,	// (0x000839a6) list_medium_line_x3_g2_ParamLimits

0x649f,	// (0x000839a6) list_medium_line_x3_g2

0x0001,

0xfd55,	// (0x0008d25c) list_medium_line_x3_g_ParamLimits

0xfd55,	// (0x0008d25c) list_medium_line_x3_g

0x3203,	// (0x0008070a) list_medium_line_x3_t1_ParamLimits

0x3203,	// (0x0008070a) list_medium_line_x3_t1

0x3219,	// (0x00080720) thumb_sp_fs_scroll_pane_g1

0x3222,	// (0x00080729) thumb_sp_fs_scroll_pane_g2

0x322b,	// (0x00080732) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfd5a,	// (0x0008d261) thumb_sp_fs_scroll_pane_g

0x3219,	// (0x00080720) bg_sp_fs_scroll_pane_g1

0x3222,	// (0x00080729) bg_sp_fs_scroll_pane_g2

0x322b,	// (0x00080732) bg_sp_fs_scroll_pane_g3

0x0002,

0xfd5a,	// (0x0008d261) bg_sp_fs_scroll_pane_g

0x6493,	// (0x0008399a) list_medium_line_x2_t3_g4_g1_ParamLimits

0x6493,	// (0x0008399a) list_medium_line_x2_t3_g4_g1

0x651b,	// (0x00083a22) list_medium_line_x2_t3_g4_g2_ParamLimits

0x651b,	// (0x00083a22) list_medium_line_x2_t3_g4_g2

0x649f,	// (0x000839a6) list_medium_line_x2_t3_g4_g3_ParamLimits

0x649f,	// (0x000839a6) list_medium_line_x2_t3_g4_g3

0x64ab,	// (0x000839b2) list_medium_line_x2_t3_g4_g4_ParamLimits

0x64ab,	// (0x000839b2) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2be,	// (0x0008c7c5) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2be,	// (0x0008c7c5) list_medium_line_x2_t3_g4_g

0xc5b6,	// (0x00089abd) list_medium_line_x2_t3_g4_t1_ParamLimits

0xc5b6,	// (0x00089abd) list_medium_line_x2_t3_g4_t1

0xc5cc,	// (0x00089ad3) list_medium_line_x2_t3_g4_t2_ParamLimits

0xc5cc,	// (0x00089ad3) list_medium_line_x2_t3_g4_t2

0x64de,	// (0x000839e5) list_medium_line_x2_t3_g4_t3_ParamLimits

0x64de,	// (0x000839e5) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd61,	// (0x0008d268) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd61,	// (0x0008d268) list_medium_line_x2_t3_g4_t

0x216b,	// (0x0007f672) list_medium_line_g2_g1_ParamLimits

0x216b,	// (0x0007f672) list_medium_line_g2_g1

0x4174,	// (0x0008167b) list_medium_line_g2_g2_ParamLimits

0x4174,	// (0x0008167b) list_medium_line_g2_g2

0x0001,

0xfa13,	// (0x0008cf1a) list_medium_line_g2_g_ParamLimits

0xfa13,	// (0x0008cf1a) list_medium_line_g2_g

0x3234,	// (0x0008073b) list_medium_line_g2_t1_ParamLimits

0x3234,	// (0x0008073b) list_medium_line_g2_t1

0x216b,	// (0x0007f672) list_medium_line_t3_g2_g1_ParamLimits

0x216b,	// (0x0007f672) list_medium_line_t3_g2_g1

0x4174,	// (0x0008167b) list_medium_line_t3_g2_g2_ParamLimits

0x4174,	// (0x0008167b) list_medium_line_t3_g2_g2

0x0001,

0xfa13,	// (0x0008cf1a) list_medium_line_t3_g2_g_ParamLimits

0xfa13,	// (0x0008cf1a) list_medium_line_t3_g2_g

0x3257,	// (0x0008075e) list_medium_line_t3_g2_t1_ParamLimits

0x3257,	// (0x0008075e) list_medium_line_t3_g2_t1

0xc5e5,	// (0x00089aec) list_medium_line_t3_g2_t2_ParamLimits

0xc5e5,	// (0x00089aec) list_medium_line_t3_g2_t2

0xc5fa,	// (0x00089b01) list_medium_line_t3_g2_t3_ParamLimits

0xc5fa,	// (0x00089b01) list_medium_line_t3_g2_t3

0x0002,

0xfd68,	// (0x0008d26f) list_medium_line_t3_g2_t_ParamLimits

0xfd68,	// (0x0008d26f) list_medium_line_t3_g2_t

0x422f,	// (0x00081736) list_medium_line_right_icon_g1

0x3249,	// (0x00080750) list_medium_line_right_icon_t1

0x216b,	// (0x0007f672) list_medium_line_t2_g1_ParamLimits

0x216b,	// (0x0007f672) list_medium_line_t2_g1

0xc610,	// (0x00089b17) list_medium_line_t2_t1_ParamLimits

0xc610,	// (0x00089b17) list_medium_line_t2_t1

0xc62a,	// (0x00089b31) list_medium_line_t2_t2_ParamLimits

0xc62a,	// (0x00089b31) list_medium_line_t2_t2

0x0001,

0xfd6f,	// (0x0008d276) list_medium_line_t2_t_ParamLimits

0xfd6f,	// (0x0008d276) list_medium_line_t2_t

0x216b,	// (0x0007f672) list_medium_line_t3_g1_ParamLimits

0x216b,	// (0x0007f672) list_medium_line_t3_g1

0xc63f,	// (0x00089b46) list_medium_line_t3_t1_ParamLimits

0xc63f,	// (0x00089b46) list_medium_line_t3_t1

0xc659,	// (0x00089b60) list_medium_line_t3_t2_ParamLimits

0xc659,	// (0x00089b60) list_medium_line_t3_t2

0xc66e,	// (0x00089b75) list_medium_line_t3_t3_ParamLimits

0xc66e,	// (0x00089b75) list_medium_line_t3_t3

0x0002,

0xfd74,	// (0x0008d27b) list_medium_line_t3_t_ParamLimits

0xfd74,	// (0x0008d27b) list_medium_line_t3_t

0x216b,	// (0x0007f672) list_medium_line_g3_g1_ParamLimits

0x216b,	// (0x0007f672) list_medium_line_g3_g1

0x423f,	// (0x00081746) list_medium_line_g3_g2_ParamLimits

0x423f,	// (0x00081746) list_medium_line_g3_g2

0x4174,	// (0x0008167b) list_medium_line_g3_g3_ParamLimits

0x4174,	// (0x0008167b) list_medium_line_g3_g3

0x0002,

0xfd7b,	// (0x0008d282) list_medium_line_g3_g_ParamLimits

0xfd7b,	// (0x0008d282) list_medium_line_g3_g

0x3271,	// (0x00080778) list_medium_line_g3_t1_ParamLimits

0x3271,	// (0x00080778) list_medium_line_g3_t1

0x216b,	// (0x0007f672) list_medium_line_t2_g3_g1_ParamLimits

0x216b,	// (0x0007f672) list_medium_line_t2_g3_g1

0x423f,	// (0x00081746) list_medium_line_t2_g3_g2_ParamLimits

0x423f,	// (0x00081746) list_medium_line_t2_g3_g2

0x4174,	// (0x0008167b) list_medium_line_t2_g3_g3_ParamLimits

0x4174,	// (0x0008167b) list_medium_line_t2_g3_g3

0x0002,

0xfd7b,	// (0x0008d282) list_medium_line_t2_g3_g_ParamLimits

0xfd7b,	// (0x0008d282) list_medium_line_t2_g3_g

0xc683,	// (0x00089b8a) list_medium_line_t2_g3_t1_ParamLimits

0xc683,	// (0x00089b8a) list_medium_line_t2_g3_t1

0xc69a,	// (0x00089ba1) list_medium_line_t2_g3_t2_ParamLimits

0xc69a,	// (0x00089ba1) list_medium_line_t2_g3_t2

0x0001,

0xfd82,	// (0x0008d289) list_medium_line_t2_g3_t_ParamLimits

0xfd82,	// (0x0008d289) list_medium_line_t2_g3_t

0x216b,	// (0x0007f672) list_medium_line_t3_g3_g1_ParamLimits

0x216b,	// (0x0007f672) list_medium_line_t3_g3_g1

0x423f,	// (0x00081746) list_medium_line_t3_g3_g2_ParamLimits

0x423f,	// (0x00081746) list_medium_line_t3_g3_g2

0x4174,	// (0x0008167b) list_medium_line_t3_g3_g3_ParamLimits

0x4174,	// (0x0008167b) list_medium_line_t3_g3_g3

0x0002,

0xfd7b,	// (0x0008d282) list_medium_line_t3_g3_g_ParamLimits

0xfd7b,	// (0x0008d282) list_medium_line_t3_g3_g

0xc6af,	// (0x00089bb6) list_medium_line_t3_g3_t1_ParamLimits

0xc6af,	// (0x00089bb6) list_medium_line_t3_g3_t1

0xc6c3,	// (0x00089bca) list_medium_line_t3_g3_t2_ParamLimits

0xc6c3,	// (0x00089bca) list_medium_line_t3_g3_t2

0xc6d5,	// (0x00089bdc) list_medium_line_t3_g3_t3_ParamLimits

0xc6d5,	// (0x00089bdc) list_medium_line_t3_g3_t3

0x0002,

0xfd87,	// (0x0008d28e) list_medium_line_t3_g3_t_ParamLimits

0xfd87,	// (0x0008d28e) list_medium_line_t3_g3_t

0x4237,	// (0x0008173e) list_medium_line_right_iconx2_g1

0x422f,	// (0x00081736) list_medium_line_right_iconx2_g2

0x0001,

0xfd8e,	// (0x0008d295) list_medium_line_right_iconx2_g

0x424b,	// (0x00081752) list_medium_line_right_iconx2_t1

0x4237,	// (0x0008173e) list_medium_line_t2_right_iconx2_g1

0x422f,	// (0x00081736) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfd8e,	// (0x0008d295) list_medium_line_t2_right_iconx2_g

0xc6e7,	// (0x00089bee) list_medium_line_t2_right_iconx2_t1

0xc6f7,	// (0x00089bfe) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfd93,	// (0x0008d29a) list_medium_line_t2_right_iconx2_t

0xc705,	// (0x00089c0c) list_medium_line_x4_t4_t1

0xc713,	// (0x00089c1a) list_medium_line_x4_t4_t2

0xc721,	// (0x00089c28) list_medium_line_x4_t4_t3

0xc72f,	// (0x00089c36) list_medium_line_x4_t4_t4

0x0003,

0xfd98,	// (0x0008d29f) list_medium_line_x4_t4_t

0xc761,	// (0x00089c68) tport_appsw_pane_ParamLimits

0xc761,	// (0x00089c68) tport_appsw_pane

0xc76d,	// (0x00089c74) tport_contact_pane_ParamLimits

0xc76d,	// (0x00089c74) tport_contact_pane

0xc77b,	// (0x00089c82) tport_listscroll_pane_ParamLimits

0xc77b,	// (0x00089c82) tport_listscroll_pane

0xc789,	// (0x00089c90) cell_tport_appsw_pane_ParamLimits

0xc789,	// (0x00089c90) cell_tport_appsw_pane

0x1a8a,	// (0x0007ef91) tport_appsw_pane_g1_ParamLimits

0x1a8a,	// (0x0007ef91) tport_appsw_pane_g1

0x3286,	// (0x0008078d) tport_contact_pane_g1

0x328f,	// (0x00080796) tport_contact_pane_t1

0x329d,	// (0x000807a4) tport_contact_pane_t2

0x0001,

0xfda1,	// (0x0008d2a8) tport_contact_pane_t

0x32ab,	// (0x000807b2) list_tport_pane

0xdf10,	// (0x0008b417) scroll_pane_cp_030

0x32bc,	// (0x000807c3) cell_tport_appsw_pane_g1

0x32cc,	// (0x000807d3) cell_tport_appsw_pane_t1

0x32da,	// (0x000807e1) grid_highlight_pane_cp019

0xc7b0,	// (0x00089cb7) list_tport_double_graphic_pane_ParamLimits

0xc7b0,	// (0x00089cb7) list_tport_double_graphic_pane

0x0367,	// (0x0007d86e) list_highlight_pane_cp023_ParamLimits

0x0367,	// (0x0007d86e) list_highlight_pane_cp023

0xc7bd,	// (0x00089cc4) list_tport_double_graphic_pane_g1_ParamLimits

0xc7bd,	// (0x00089cc4) list_tport_double_graphic_pane_g1

0xc7ca,	// (0x00089cd1) list_tport_double_graphic_pane_t1_ParamLimits

0xc7ca,	// (0x00089cd1) list_tport_double_graphic_pane_t1

0xc7df,	// (0x00089ce6) list_tport_double_graphic_pane_t2_ParamLimits

0xc7df,	// (0x00089ce6) list_tport_double_graphic_pane_t2

0x0001,

0xfdad,	// (0x0008d2b4) list_tport_double_graphic_pane_t_ParamLimits

0xfdad,	// (0x0008d2b4) list_tport_double_graphic_pane_t

0xd6cc,	// (0x0008abd3) main_cale_note_pane

0xa5b3,	// (0x00087aba) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0xa5b3,	// (0x00087aba) cell_vitu2_function_top_wide_pane_cp01

0xbeb7,	// (0x000893be) wait_bar_pane_cp05_ParamLimits

0x0367,	// (0x0007d86e) listscroll_cmail_pane

0x32e2,	// (0x000807e9) list_cmail_pane

0xc7f1,	// (0x00089cf8) list_cmail_body_pane

0xc7f1,	// (0x00089cf8) list_single_cmail_header_caption_pane

0xc80a,	// (0x00089d11) list_single_cmail_header_detail_pane_ParamLimits

0xc80a,	// (0x00089d11) list_single_cmail_header_detail_pane

0x32fe,	// (0x00080805) list_single_cmail_header_caption_pane_t1

0xc835,	// (0x00089d3c) list_single_cmail_header_detail_pane_g1_ParamLimits

0xc835,	// (0x00089d3c) list_single_cmail_header_detail_pane_g1

0x4259,	// (0x00081760) list_single_cmail_header_detail_pane_g2_ParamLimits

0x4259,	// (0x00081760) list_single_cmail_header_detail_pane_g2

0x0002,

0xfdb2,	// (0x0008d2b9) list_single_cmail_header_detail_pane_g_ParamLimits

0xfdb2,	// (0x0008d2b9) list_single_cmail_header_detail_pane_g

0xc84b,	// (0x00089d52) list_single_cmail_header_detail_pane_t1_ParamLimits

0xc84b,	// (0x00089d52) list_single_cmail_header_detail_pane_t1

0x3346,	// (0x0008084d) list_single_cmail_header_editor_pane_bg_ParamLimits

0x3346,	// (0x0008084d) list_single_cmail_header_editor_pane_bg

0x335d,	// (0x00080864) list_cmail_body_pane_g1

0x3366,	// (0x0008086d) list_cmail_body_pane_t1

0x430d,	// (0x00081814) list_single_cmail_header_editor_pane_bg_g1

0xe293,	// (0x0008b79a) list_single_cmail_header_editor_pane_bg_g1_copy1

0x431d,	// (0x00081824) list_single_cmail_header_editor_pane_bg_g1_copy2

0x4315,	// (0x0008181c) list_single_cmail_header_editor_pane_bg_g1_copy3

0x2163,	// (0x0007f66a) list_single_cmail_header_editor_pane_bg_g1_copy4

0x433d,	// (0x00081844) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0x432d,	// (0x00081834) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0x4335,	// (0x0008183c) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xe273,	// (0x0008b77a) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0xc887,	// (0x00089d8e) calenote_gesture_pane_ParamLimits

0xc887,	// (0x00089d8e) calenote_gesture_pane

0xc89f,	// (0x00089da6) calenote_window_pane_ParamLimits

0xc89f,	// (0x00089da6) calenote_window_pane

0x3374,	// (0x0008087b) popup_note_window_cp01

0xc8b7,	// (0x00089dbe) calenote_swipe_1_pane_ParamLimits

0xc8b7,	// (0x00089dbe) calenote_swipe_1_pane

0xc256,	// (0x0008975d) calenote_swipe_2_pane_ParamLimits

0xc256,	// (0x0008975d) calenote_swipe_2_pane

0x2f79,	// (0x00080480) calenote_swipe_1_pane_g1_ParamLimits

0x2f79,	// (0x00080480) calenote_swipe_1_pane_g1

0x2f86,	// (0x0008048d) calenote_swipe_1_pane_g2_ParamLimits

0x2f86,	// (0x0008048d) calenote_swipe_1_pane_g2

0x0001,

0xfcd6,	// (0x0008d1dd) calenote_swipe_1_pane_g_ParamLimits

0xfcd6,	// (0x0008d1dd) calenote_swipe_1_pane_g

0x3386,	// (0x0008088d) calenote_swipe_1_pane_t1_ParamLimits

0x3386,	// (0x0008088d) calenote_swipe_1_pane_t1

0x2f79,	// (0x00080480) calenote_swipe_2_pane_g1_ParamLimits

0x2f79,	// (0x00080480) calenote_swipe_2_pane_g1

0x33a5,	// (0x000808ac) calenote_swipe_2_pane_g2_ParamLimits

0x33a5,	// (0x000808ac) calenote_swipe_2_pane_g2

0x0001,

0xfdbe,	// (0x0008d2c5) calenote_swipe_2_pane_g_ParamLimits

0xfdbe,	// (0x0008d2c5) calenote_swipe_2_pane_g

0x33b1,	// (0x000808b8) calenote_swipe_2_pane_t1_ParamLimits

0x33b1,	// (0x000808b8) calenote_swipe_2_pane_t1

0xd6cc,	// (0x0008abd3) main_mup_navstr_pane

0x9418,	// (0x0008691f) main_mup3_pane_t7_ParamLimits

0x9418,	// (0x0008691f) main_mup3_pane_t7

0x9d99,	// (0x000872a0) main_mp4_pane_g6_ParamLimits

0x9d99,	// (0x000872a0) main_mp4_pane_g6

0xa0f3,	// (0x000875fa) main_image3_pane_t4_ParamLimits

0xa0f3,	// (0x000875fa) main_image3_pane_t4

0xc8ca,	// (0x00089dd1) popup_navstr_preview_pane_ParamLimits

0xc8ca,	// (0x00089dd1) popup_navstr_preview_pane

0xc8d6,	// (0x00089ddd) scroll_navstr_pane_ParamLimits

0xc8d6,	// (0x00089ddd) scroll_navstr_pane

0xd6cc,	// (0x0008abd3) bg_popup_preview_window_pane_cp04

0x33d8,	// (0x000808df) popup_navstr_preview_pane_t1

0xc8e2,	// (0x00089de9) scroll_navstr_pane_g1_ParamLimits

0xc8e2,	// (0x00089de9) scroll_navstr_pane_g1

0xc8ef,	// (0x00089df6) scroll_navstr_pane_t1_ParamLimits

0xc8ef,	// (0x00089df6) scroll_navstr_pane_t1

0x337d,	// (0x00080884) bg_button_pane_cp014

0x337d,	// (0x00080884) bg_button_pane_cp030

0xc13c,	// (0x00089643) list_double_fisheye_pane_g4_ParamLimits

0xc13c,	// (0x00089643) list_double_fisheye_pane_g4

0xc148,	// (0x0008964f) list_double_fisheye_pane_g5_ParamLimits

0xc148,	// (0x0008964f) list_double_fisheye_pane_g5

0x32f2,	// (0x000807f9) sp_fs_scroll_pane_cp03

0x3083,	// (0x0008058a) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0x308f,	// (0x00080596) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfcf3,	// (0x0008d1fa) main_sp_fs_ctrlbar_pane_g_ParamLimits

0x309b,	// (0x000805a2) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0x32ea,	// (0x000807f1) sp_fs_scroll_pane_cp02

0xdf22,	// (0x0008b429) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0xdf22,	// (0x0008b429) popup_sp_fs_calendar_preview_list_single_pane

0xd6cc,	// (0x0008abd3) main_cam6_pano_pane

0x8539,	// (0x00085a40) main_mup3_pane_ParamLimits

0xd6cc,	// (0x0008abd3) main_phacti_pane

0xbdaa,	// (0x000892b1) bg_button_pane_cp11

0xbdc2,	// (0x000892c9) main_mobtv_info_pane_g2_ParamLimits

0xbdc2,	// (0x000892c9) main_mobtv_info_pane_g2

0x0001,

0xfc53,	// (0x0008d15a) main_mobtv_info_pane_g_ParamLimits

0xfc53,	// (0x0008d15a) main_mobtv_info_pane_g

0xbf4e,	// (0x00089455) sc_clock_pane_t5_ParamLimits

0xbf4e,	// (0x00089455) sc_clock_pane_t5

0xbfdb,	// (0x000894e2) main_radioblah_pane_g1_ParamLimits

0x2ebc,	// (0x000803c3) main_radioblah_pane_t3_ParamLimits

0x2ebc,	// (0x000803c3) main_radioblah_pane_t3

0x2ed4,	// (0x000803db) main_radioblah_pane_t4_ParamLimits

0x2ed4,	// (0x000803db) main_radioblah_pane_t4

0xbff9,	// (0x00089500) main_radioblah_text_pane_ParamLimits

0xbff9,	// (0x00089500) main_radioblah_text_pane

0xc006,	// (0x0008950d) main_radioblah_info_pane_g1_ParamLimits

0xc093,	// (0x0008959a) main_radioblah_info_pane_t4_ParamLimits

0xc093,	// (0x0008959a) main_radioblah_info_pane_t4

0x0367,	// (0x0007d86e) main_sp_fs_calendar_pane

0xc901,	// (0x00089e08) main_phacti_pane_g1

0xc909,	// (0x00089e10) phacti_note_pane_ParamLimits

0xc909,	// (0x00089e10) phacti_note_pane

0x33ef,	// (0x000808f6) phacti_term_pane_ParamLimits

0x33ef,	// (0x000808f6) phacti_term_pane

0x3404,	// (0x0008090b) phacti_note_pane_t1_ParamLimits

0x3404,	// (0x0008090b) phacti_note_pane_t1

0x341b,	// (0x00080922) phacti_term_pane_g1

0x3423,	// (0x0008092a) phacti_term_pane_t1_ParamLimits

0x3423,	// (0x0008092a) phacti_term_pane_t1

0x344d,	// (0x00080954) popup_sp_fs_calendar_preview_list_single_pane_g1

0x3455,	// (0x0008095c) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfdc8,	// (0x0008d2cf) popup_sp_fs_calendar_preview_list_single_pane_g

0x345d,	// (0x00080964) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0x345d,	// (0x00080964) popup_sp_fs_calendar_preview_list_single_pane_t1

0x3473,	// (0x0008097a) aid_popup_sp_fs_bg_corner_pane

0x17ca,	// (0x0007ecd1) popup_sp_fs_calendar_preview_bg_pane_g1

0xd6cc,	// (0x0008abd3) popup_sp_fs_calendar_preview_bg_pane

0x347b,	// (0x00080982) popup_sp_fs_calendar_preview_list_pane

0x12b6,	// (0x0007e7bd) bg_main_sp_fs_cale_pane_ParamLimits

0x12b6,	// (0x0007e7bd) bg_main_sp_fs_cale_pane

0x3483,	// (0x0008098a) listscroll_cale_mrui_pane_ParamLimits

0x3483,	// (0x0008098a) listscroll_cale_mrui_pane

0x3498,	// (0x0008099f) listscroll_sp_fs_schedule_track_pane

0x34a1,	// (0x000809a8) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0x34a1,	// (0x000809a8) main_sp_fs_ctrlbar_pane_cp01

0x34b4,	// (0x000809bb) main_sp_fs_ribbon_pane

0x34bc,	// (0x000809c3) popup_sp_fs_cale_preview_window

0xc960,	// (0x00089e67) list_single_sp_fs_schedule_track_pane_ParamLimits

0xc960,	// (0x00089e67) list_single_sp_fs_schedule_track_pane

0x3ccb,	// (0x000811d2) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0x3ccb,	// (0x000811d2) bg_sp_fs_highlight_list_pane_cp03

0xc976,	// (0x00089e7d) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0xc976,	// (0x00089e7d) list_single_sp_fs_schedule_track_pane_g1

0xc982,	// (0x00089e89) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0xc982,	// (0x00089e89) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfdcd,	// (0x0008d2d4) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfdcd,	// (0x0008d2d4) list_single_sp_fs_schedule_track_pane_g

0xc98e,	// (0x00089e95) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0xc98e,	// (0x00089e95) list_single_sp_fs_schedule_track_pane_t1

0xc9a6,	// (0x00089ead) sp_fs_schedule_track_pane_ParamLimits

0xc9a6,	// (0x00089ead) sp_fs_schedule_track_pane

0x34ce,	// (0x000809d5) sp_fs_schedule_track_pane_g1

0x34d6,	// (0x000809dd) sp_fs_schedule_track_pane_g2

0x34de,	// (0x000809e5) sp_fs_schedule_track_pane_g3

0x34e6,	// (0x000809ed) sp_fs_schedule_track_pane_g4

0x34ee,	// (0x000809f5) sp_fs_schedule_track_pane_g5

0x0004,

0xfdd2,	// (0x0008d2d9) sp_fs_schedule_track_pane_g

0x430d,	// (0x00081814) bg_sp_fs_schedule_viewer_highlight_g1

0xe293,	// (0x0008b79a) bg_sp_fs_schedule_viewer_highlight_g2

0x4315,	// (0x0008181c) bg_sp_fs_schedule_viewer_highlight_g3

0x431d,	// (0x00081824) bg_sp_fs_schedule_viewer_highlight_g4

0x2163,	// (0x0007f66a) bg_sp_fs_schedule_viewer_highlight_g5

0x432d,	// (0x00081834) bg_sp_fs_schedule_viewer_highlight_g6

0x4335,	// (0x0008183c) bg_sp_fs_schedule_viewer_highlight_g7

0x433d,	// (0x00081844) bg_sp_fs_schedule_viewer_highlight_g8

0xe273,	// (0x0008b77a) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfddd,	// (0x0008d2e4) bg_sp_fs_schedule_viewer_highlight_g

0xd6cc,	// (0x0008abd3) bg_main_sp_fs_ribbon_pane

0xa322,	// (0x00087829) main_sp_fs_ribbon_pane_g1

0x34f6,	// (0x000809fd) main_sp_fs_ribbon_pane_t1

0xc9b6,	// (0x00089ebd) main_sp_fs_ribbon_pane_t2

0x3505,	// (0x00080a0c) main_sp_fs_ribbon_pane_t3

0x0002,

0xfdf0,	// (0x0008d2f7) main_sp_fs_ribbon_pane_t

0x3514,	// (0x00080a1b) main_sp_fs_ribbon_scheduler_pane

0x351c,	// (0x00080a23) bg_main_sp_fs_ribbon_pane_g1

0x3525,	// (0x00080a2c) bg_main_sp_fs_ribbon_pane_g2

0x352e,	// (0x00080a35) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfdf7,	// (0x0008d2fe) bg_main_sp_fs_ribbon_pane_g

0x3536,	// (0x00080a3d) main_sp_fs_ribbon_scheduler_pane_g1

0x353f,	// (0x00080a46) main_sp_fs_ribbon_scheduler_pane_g2

0x3548,	// (0x00080a4f) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfdfe,	// (0x0008d305) main_sp_fs_ribbon_scheduler_pane_g

0x3551,	// (0x00080a58) list_cale_mrui_pane

0xc9c5,	// (0x00089ecc) sp_fs_scroll_pane_cp07_ParamLimits

0xc9c5,	// (0x00089ecc) sp_fs_scroll_pane_cp07

0xc9dd,	// (0x00089ee4) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0xc9dd,	// (0x00089ee4) bg_sp_fs_schedule_viewer_highlight

0x355e,	// (0x00080a65) list_single_sp_fs_schedule_track_pane_cp01

0x3566,	// (0x00080a6d) list_sp_fs_schedule_track_pane

0x356e,	// (0x00080a75) sp_fs_scroll_pane_cp06_ParamLimits

0x356e,	// (0x00080a75) sp_fs_scroll_pane_cp06

0x17ca,	// (0x0007ecd1) bgmain_sp_fs_calendar_pane_g1

0xc9ea,	// (0x00089ef1) list_single_cale_mrui_pane_ParamLimits

0xc9ea,	// (0x00089ef1) list_single_cale_mrui_pane

0x3580,	// (0x00080a87) list_single_cale_mrui_row_pane_ParamLimits

0x3580,	// (0x00080a87) list_single_cale_mrui_row_pane

0x3596,	// (0x00080a9d) list_single_cale_mrui_row_pane_g1_ParamLimits

0x3596,	// (0x00080a9d) list_single_cale_mrui_row_pane_g1

0x35db,	// (0x00080ae2) list_single_cale_mrui_row_pane_t1_ParamLimits

0x35db,	// (0x00080ae2) list_single_cale_mrui_row_pane_t1

0xca0b,	// (0x00089f12) list_single_cale_mrui_row_pane_t2_ParamLimits

0xca0b,	// (0x00089f12) list_single_cale_mrui_row_pane_t2

0x35ed,	// (0x00080af4) list_single_cale_mrui_row_pane_t3_ParamLimits

0x35ed,	// (0x00080af4) list_single_cale_mrui_row_pane_t3

0x361c,	// (0x00080b23) list_single_cale_mrui_row_pane_t4_ParamLimits

0x361c,	// (0x00080b23) list_single_cale_mrui_row_pane_t4

0x0003,

0xfe0c,	// (0x0008d313) list_single_cale_mrui_row_pane_t_ParamLimits

0xfe0c,	// (0x0008d313) list_single_cale_mrui_row_pane_t

0xca71,	// (0x00089f78) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0xca71,	// (0x00089f78) list_single_cmail_header_editor_pane_bg_cp01

0xca95,	// (0x00089f9c) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0xca95,	// (0x00089f9c) list_single_cmail_header_editor_pane_bg_cp02

0xcab3,	// (0x00089fba) main_radioblah_text_pane_t1_ParamLimits

0xcab3,	// (0x00089fba) main_radioblah_text_pane_t1

0x364b,	// (0x00080b52) cam6_indi_pane_cp01

0x3653,	// (0x00080b5a) cam6_mode_pane_cp01

0x365b,	// (0x00080b62) cam6_pano_pane

0x3664,	// (0x00080b6b) cam6_zoom_pane_cp01

0x366c,	// (0x00080b73) cam6_pano_image_pane

0x3675,	// (0x00080b7c) cam6_pano_pane_g1

0x2c23,	// (0x0008012a) cam6_pano_pane_g2

0x367e,	// (0x00080b85) cam6_pano_pane_g3

0x3687,	// (0x00080b8e) cam6_pano_pane_g4

0x1d6f,	// (0x0007f276) cam6_pano_pane_g5

0x3690,	// (0x00080b97) cam6_pano_pane_g6

0x3698,	// (0x00080b9f) cam6_pano_pane_g7

0x36a0,	// (0x00080ba7) cam6_pano_pane_g8

0x36a9,	// (0x00080bb0) cam6_pano_pane_g9

0x0008,

0xfe15,	// (0x0008d31c) cam6_pano_pane_g

0xd6cc,	// (0x0008abd3) main_browser_tag_pane

0x33d0,	// (0x000808d7) grid_navstr_albumart_pane

0x36b2,	// (0x00080bb9) cell_navstr_albumart_pane_ParamLimits

0x36b2,	// (0x00080bb9) cell_navstr_albumart_pane

0xeb69,	// (0x0008c070) cell_navstr_albumart_pane_g1

0x1087,	// (0x0007e58e) cell_navstr_albumart_pane_g2

0x1097,	// (0x0007e59e) cell_navstr_albumart_pane_g3

0x108f,	// (0x0007e596) cell_navstr_albumart_pane_g4

0x0003,

0xfe28,	// (0x0008d32f) cell_navstr_albumart_pane_g

0xcacc,	// (0x00089fd3) bt_list_pane_ParamLimits

0xcacc,	// (0x00089fd3) bt_list_pane

0xcae1,	// (0x00089fe8) bt_list_pane_t1

0xcaf0,	// (0x00089ff7) bt_list_pane_t2

0x0001,

0xfe31,	// (0x0008d338) bt_list_pane_t

0xd6cc,	// (0x0008abd3) main_cale_prevew_pane

0xcaff,	// (0x0008a006) popup_cale_preview_window_ParamLimits

0xcaff,	// (0x0008a006) popup_cale_preview_window

0x0367,	// (0x0007d86e) bg_popup_preview_window_pane_cp05_ParamLimits

0x0367,	// (0x0007d86e) bg_popup_preview_window_pane_cp05

0x36c9,	// (0x00080bd0) list_cale_preview_pane_ParamLimits

0x36c9,	// (0x00080bd0) list_cale_preview_pane

0xcb14,	// (0x0008a01b) list_double_cale_preview_pane_ParamLimits

0xcb14,	// (0x0008a01b) list_double_cale_preview_pane

0xcb25,	// (0x0008a02c) list_single_cale_preview_pane_ParamLimits

0xcb25,	// (0x0008a02c) list_single_cale_preview_pane

0xcb39,	// (0x0008a040) list_single_cale_preview_pane_g1

0xcb41,	// (0x0008a048) list_single_cale_preview_pane_t1_ParamLimits

0xcb41,	// (0x0008a048) list_single_cale_preview_pane_t1

0x36d5,	// (0x00080bdc) list_double_cale_preview_pane_g1

0x36dd,	// (0x00080be4) list_double_cale_preview_pane_t1_ParamLimits

0x36dd,	// (0x00080be4) list_double_cale_preview_pane_t1

0xcb56,	// (0x0008a05d) list_double_cale_preview_pane_t2_ParamLimits

0xcb56,	// (0x0008a05d) list_double_cale_preview_pane_t2

0x0001,

0xfe36,	// (0x0008d33d) list_double_cale_preview_pane_t_ParamLimits

0xfe36,	// (0x0008d33d) list_double_cale_preview_pane_t

0xd6cc,	// (0x0008abd3) main_ezdial_pane

0x0367,	// (0x0007d86e) main_sp_fs_email_pane_ParamLimits

0xc28b,	// (0x00089792) cmail_ddmenu_btn01_pane_ParamLimits

0xc28b,	// (0x00089792) cmail_ddmenu_btn01_pane

0xc2a8,	// (0x000897af) cmail_ddmenu_btn02_pane_ParamLimits

0xc2a8,	// (0x000897af) cmail_ddmenu_btn02_pane

0xc2c6,	// (0x000897cd) cmail_ddmenu_btn03_pane_ParamLimits

0xc2c6,	// (0x000897cd) cmail_ddmenu_btn03_pane

0xc2f2,	// (0x000897f9) main_sp_fs_ctrlbar_pane_ParamLimits

0xc306,	// (0x0008980d) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0xc7f1,	// (0x00089cf8) list_cmail_body_pane_ParamLimits

0x330c,	// (0x00080813) bg_button_pane_cp12

0x3315,	// (0x0008081c) list_single_cmail_header_detail_pane_g3_ParamLimits

0x3315,	// (0x0008081c) list_single_cmail_header_detail_pane_g3

0x3322,	// (0x00080829) list_single_cmail_header_detail_pane_t2_ParamLimits

0x3322,	// (0x00080829) list_single_cmail_header_detail_pane_t2

0x0001,

0xfdb9,	// (0x0008d2c0) list_single_cmail_header_detail_pane_t_ParamLimits

0xfdb9,	// (0x0008d2c0) list_single_cmail_header_detail_pane_t

0x3438,	// (0x0008093f) phacti_term_pane_t2_ParamLimits

0x3438,	// (0x0008093f) phacti_term_pane_t2

0x0001,

0xfdc3,	// (0x0008d2ca) phacti_term_pane_t_ParamLimits

0xfdc3,	// (0x0008d2ca) phacti_term_pane_t

0x36f2,	// (0x00080bf9) aid_size_list_single_double

0xcb6e,	// (0x0008a075) popup_ezdial_listscroll_window

0xcb87,	// (0x0008a08e) popup_number_entry_window_cp01

0xdfe2,	// (0x0008b4e9) bg_popup_call_pane_cp09

0x36fe,	// (0x00080c05) ezdial_list_pane

0x3706,	// (0x00080c0d) scroll_pane_cp23

0x15b7,	// (0x0007eabe) bg_button_pane_cp028_ParamLimits

0x15b7,	// (0x0007eabe) bg_button_pane_cp028

0xcb93,	// (0x0008a09a) cmail_ddmenu_btn01_pane_g1_ParamLimits

0xcb93,	// (0x0008a09a) cmail_ddmenu_btn01_pane_g1

0xcba3,	// (0x0008a0aa) cmail_ddmenu_btn01_pane_g2_ParamLimits

0xcba3,	// (0x0008a0aa) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfe3b,	// (0x0008d342) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfe3b,	// (0x0008d342) cmail_ddmenu_btn01_pane_g

0x370e,	// (0x00080c15) cmail_ddmenu_btn01_pane_t1_ParamLimits

0x370e,	// (0x00080c15) cmail_ddmenu_btn01_pane_t1

0x12b6,	// (0x0007e7bd) bg_button_pane_cp029_ParamLimits

0x12b6,	// (0x0007e7bd) bg_button_pane_cp029

0xcba3,	// (0x0008a0aa) cmail_ddmenu_btn02_pane_g1_ParamLimits

0xcba3,	// (0x0008a0aa) cmail_ddmenu_btn02_pane_g1

0xcbbb,	// (0x0008a0c2) cmail_ddmenu_btn02_pane_t1_ParamLimits

0xcbbb,	// (0x0008a0c2) cmail_ddmenu_btn02_pane_t1

0x3ccb,	// (0x000811d2) bg_button_pane_cp031_ParamLimits

0x3ccb,	// (0x000811d2) bg_button_pane_cp031

0xcba3,	// (0x0008a0aa) cmail_ddmenu_btn03_pane_g1_ParamLimits

0xcba3,	// (0x0008a0aa) cmail_ddmenu_btn03_pane_g1

0xcbbb,	// (0x0008a0c2) cmail_ddmenu_btn03_pane_t1_ParamLimits

0xcbbb,	// (0x0008a0c2) cmail_ddmenu_btn03_pane_t1

0x9fa2,	// (0x000874a9) cell_dialer2_keypad_pane_t1_ParamLimits

0x9fbc,	// (0x000874c3) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x9fbc,	// (0x000874c3) cell_dialer2_keypad_pane_t1_copy1

0xbc37,	// (0x0008913e) ncimui_group_button_pane

0x0367,	// (0x0007d86e) main_sp_fs_calendar_pane_ParamLimits

0xc7f1,	// (0x00089cf8) list_single_cmail_header_caption_pane_ParamLimits

0x4265,	// (0x0008176c) aid_recal_txt_sm_pane

0xd6cc,	// (0x0008abd3) mian_recal_day_pane

0x34bc,	// (0x000809c3) popup_sp_fs_cale_preview_window_ParamLimits

0x3723,	// (0x00080c2a) list_recal_day_pane

0x3765,	// (0x00080c6c) list_single_recal_day_pane_ParamLimits

0x3765,	// (0x00080c6c) list_single_recal_day_pane

0x3777,	// (0x00080c7e) list_single_recal_day_pane_g1_ParamLimits

0x3777,	// (0x00080c7e) list_single_recal_day_pane_g1

0x3783,	// (0x00080c8a) list_single_recal_day_pane_g2_ParamLimits

0x3783,	// (0x00080c8a) list_single_recal_day_pane_g2

0x378f,	// (0x00080c96) list_single_recal_day_pane_g3_ParamLimits

0x378f,	// (0x00080c96) list_single_recal_day_pane_g3

0xcbdf,	// (0x0008a0e6) list_single_recal_day_pane_g4_ParamLimits

0xcbdf,	// (0x0008a0e6) list_single_recal_day_pane_g4

0x379b,	// (0x00080ca2) list_single_recal_day_pane_g5_ParamLimits

0x379b,	// (0x00080ca2) list_single_recal_day_pane_g5

0xcbf3,	// (0x0008a0fa) list_single_recal_day_pane_g6_ParamLimits

0xcbf3,	// (0x0008a0fa) list_single_recal_day_pane_g6

0x0004,

0xfe4a,	// (0x0008d351) list_single_recal_day_pane_g_ParamLimits

0xfe4a,	// (0x0008d351) list_single_recal_day_pane_g

0x37af,	// (0x00080cb6) list_single_recal_day_pane_t1

0xcc02,	// (0x0008a109) list_single_recal_day_pane_t2

0x0001,

0xfe55,	// (0x0008d35c) list_single_recal_day_pane_t

0xcc17,	// (0x0008a11e) ncimui_query_button_pane_ParamLimits

0xcc17,	// (0x0008a11e) ncimui_query_button_pane

0xcc27,	// (0x0008a12e) ncimui_query_button_pane_t1_ParamLimits

0xcc27,	// (0x0008a12e) ncimui_query_button_pane_t1

0x37c1,	// (0x00080cc8) ncimui_query_button_pane_t2_ParamLimits

0x37c1,	// (0x00080cc8) ncimui_query_button_pane_t2

0x0001,

0xfe5a,	// (0x0008d361) ncimui_query_button_pane_t_ParamLimits

0xfe5a,	// (0x0008d361) ncimui_query_button_pane_t

0xcc3a,	// (0x0008a141) query_button_pane_ParamLimits

0xcc3a,	// (0x0008a141) query_button_pane

0xd6cc,	// (0x0008abd3) bg_button_pane_cp0028

0x37d4,	// (0x00080cdb) query_button_pane_t1

0x8555,	// (0x00085a5c) main_tport_pane_ParamLimits

0xc73d,	// (0x00089c44) bg_popup_window_pane_cp01_ParamLimits

0xc73d,	// (0x00089c44) bg_popup_window_pane_cp01

0xc749,	// (0x00089c50) heading_pane_cp08_ParamLimits

0xc749,	// (0x00089c50) heading_pane_cp08

0xc755,	// (0x00089c5c) heading_pane_cp07_ParamLimits

0xc755,	// (0x00089c5c) heading_pane_cp07

0x32bc,	// (0x000807c3) cell_tport_appsw_pane_g2

0x0002,

0xfda6,	// (0x0008d2ad) cell_tport_appsw_pane_g

0x04f0,	// (0x0007d9f7) input_candi_list_open_g1

0xe440,	// (0x0008b947) list_cale_time_pane_g6_ParamLimits

0xe440,	// (0x0008b947) list_cale_time_pane_g6

0x8f32,	// (0x00086439) aid_size_touch_calib_1_ParamLimits

0x8f32,	// (0x00086439) aid_size_touch_calib_1

0x8f3e,	// (0x00086445) aid_size_touch_calib_2_ParamLimits

0x8f3e,	// (0x00086445) aid_size_touch_calib_2

0x8f4a,	// (0x00086451) aid_size_touch_calib_3_ParamLimits

0x8f4a,	// (0x00086451) aid_size_touch_calib_3

0x8f58,	// (0x0008645f) aid_size_touch_calib_4_ParamLimits

0x8f58,	// (0x0008645f) aid_size_touch_calib_4

0x8f66,	// (0x0008646d) main_touch_calib_button_group_pane_ParamLimits

0x8f66,	// (0x0008646d) main_touch_calib_button_group_pane

0x8f74,	// (0x0008647b) main_touch_calib_pane_g1_ParamLimits

0x8f80,	// (0x00086487) main_touch_calib_pane_g2_ParamLimits

0x8f8c,	// (0x00086493) main_touch_calib_pane_g3_ParamLimits

0x8f98,	// (0x0008649f) main_touch_calib_pane_g4_ParamLimits

0xf760,	// (0x0008cc67) main_touch_calib_pane_g_ParamLimits

0x8fa4,	// (0x000864ab) main_touch_calib_pane_t1_ParamLimits

0x8fb9,	// (0x000864c0) main_touch_calib_pane_t2_ParamLimits

0x8fce,	// (0x000864d5) main_touch_calib_pane_t3_ParamLimits

0x8fe0,	// (0x000864e7) main_touch_calib_pane_t4_ParamLimits

0x8ff2,	// (0x000864f9) main_touch_calib_pane_t5_ParamLimits

0xf769,	// (0x0008cc70) main_touch_calib_pane_t_ParamLimits

0x1b25,	// (0x0007f02c) list_single_fp_cale_pane_g3_ParamLimits

0x1b25,	// (0x0007f02c) list_single_fp_cale_pane_g3

0x8539,	// (0x00085a40) bg_button_pane_cp012_ParamLimits

0x8539,	// (0x00085a40) bg_vkb2_func_pane_cp03_ParamLimits

0xad25,	// (0x0008822c) cell_vitu2_function_top_pane_g1_ParamLimits

0x8539,	// (0x00085a40) bg_vkb2_func_pane_cp04_ParamLimits

0xbbc3,	// (0x000890ca) main_ncimui_button_group_pane_ParamLimits

0xbbc3,	// (0x000890ca) main_ncimui_button_group_pane

0xbc25,	// (0x0008912c) main_ncimui_pane_t3_ParamLimits

0xbc25,	// (0x0008912c) main_ncimui_pane_t3

0x33e6,	// (0x000808ed) phacti_button_group_pane

0x36f2,	// (0x00080bf9) aid_size_list_single_double_ParamLimits

0xcb6e,	// (0x0008a075) popup_ezdial_listscroll_window_ParamLimits

0xcb87,	// (0x0008a08e) popup_number_entry_window_cp01_ParamLimits

0xcc47,	// (0x0008a14e) phacti_button_pane_ParamLimits

0xcc47,	// (0x0008a14e) phacti_button_pane

0xd6cc,	// (0x0008abd3) bg_button_pane_cp14

0x37e2,	// (0x00080ce9) phacti_button_pane_t1

0xcc56,	// (0x0008a15d) main_touch_calib_button_pane_ParamLimits

0xcc56,	// (0x0008a15d) main_touch_calib_button_pane

0xde0b,	// (0x0008b312) bg_button_pane_cp18_ParamLimits

0xde0b,	// (0x0008b312) bg_button_pane_cp18

0xcc67,	// (0x0008a16e) main_touch_calib_button_pane_t1_ParamLimits

0xcc67,	// (0x0008a16e) main_touch_calib_button_pane_t1

0xcc7d,	// (0x0008a184) main_touch_calib_button_pane_t2_ParamLimits

0xcc7d,	// (0x0008a184) main_touch_calib_button_pane_t2

0x0001,

0xfe5f,	// (0x0008d366) main_touch_calib_button_pane_t_ParamLimits

0xfe5f,	// (0x0008d366) main_touch_calib_button_pane_t

0xd6cc,	// (0x0008abd3) cell_ncimui_button_pane

0xd6cc,	// (0x0008abd3) bg_button_pane_cp032

0x37f0,	// (0x00080cf7) cell_ncimui_button_pane_t1

0xa00e,	// (0x00087515) image3_infobar_pane_ParamLimits

0xa00e,	// (0x00087515) image3_infobar_pane

0xbf6e,	// (0x00089475) fs_bigclock_status_pane_ParamLimits

0xbf6e,	// (0x00089475) fs_bigclock_status_pane

0xbf7b,	// (0x00089482) main_fs_bigclock_clock_pane_ParamLimits

0xbf7b,	// (0x00089482) main_fs_bigclock_clock_pane

0xbf93,	// (0x0008949a) main_fs_bigclock_indi_pane_ParamLimits

0xbf93,	// (0x0008949a) main_fs_bigclock_indi_pane

0xbfb3,	// (0x000894ba) main_fs_bigclock_swipe_pane_ParamLimits

0xbfb3,	// (0x000894ba) main_fs_bigclock_swipe_pane

0xd6cc,	// (0x0008abd3) main_fs_clock_dumped_data

0x2d30,	// (0x00080237) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0x2d30,	// (0x00080237) list_single_fs_bigclock_indicator_pane_g1

0x2d4a,	// (0x00080251) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0x2d4a,	// (0x00080251) list_single_fs_bigclock_indicator_pane_g2

0x2d64,	// (0x0008026b) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0x2d64,	// (0x0008026b) list_single_fs_bigclock_indicator_pane_g3

0x2d7e,	// (0x00080285) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0x2d7e,	// (0x00080285) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfc87,	// (0x0008d18e) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfc87,	// (0x0008d18e) list_single_fs_bigclock_indicator_pane_g

0x2da7,	// (0x000802ae) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0x2da7,	// (0x000802ae) list_single_fs_bigclock_indicator_pane_t1

0x2dcf,	// (0x000802d6) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0x2dcf,	// (0x000802d6) list_single_fs_bigclock_indicator_pane_t2

0x2df7,	// (0x000802fe) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0x2df7,	// (0x000802fe) list_single_fs_bigclock_indicator_pane_t3

0x2e1f,	// (0x00080326) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0x2e1f,	// (0x00080326) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfc92,	// (0x0008d199) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfc92,	// (0x0008d199) list_single_fs_bigclock_indicator_pane_t

0x37fe,	// (0x00080d05) image3_infobar_fav_pane_ParamLimits

0x37fe,	// (0x00080d05) image3_infobar_fav_pane

0x380e,	// (0x00080d15) image3_infobar_loc_pane_ParamLimits

0x380e,	// (0x00080d15) image3_infobar_loc_pane

0x3822,	// (0x00080d29) image3_infobar_time_pane_ParamLimits

0x3822,	// (0x00080d29) image3_infobar_time_pane

0x17ca,	// (0x0007ecd1) image3_infobar_time_pane_g1

0x3832,	// (0x00080d39) image3_infobar_time_pane_t1

0x17ca,	// (0x0007ecd1) image3_infobar_loc_pane_g1

0x3840,	// (0x00080d47) image3_infobar_loc_pane_g2

0x0001,

0xfe64,	// (0x0008d36b) image3_infobar_loc_pane_g

0x3848,	// (0x00080d4f) image3_infobar_loc_pane_t1

0x17ca,	// (0x0007ecd1) image3_infobar_fav_pane_g1

0x3856,	// (0x00080d5d) image3_infobar_fav_pane_g2

0x0001,

0xfe69,	// (0x0008d370) image3_infobar_fav_pane_g

0x385e,	// (0x00080d65) fs_bigclock_status_battery_pane

0x3867,	// (0x00080d6e) fs_bigclock_status_signal_pane

0x3870,	// (0x00080d77) fs_bigclock_status_title_pane

0x3879,	// (0x00080d80) fs_bigclock_status_signal_pane_g1

0x3882,	// (0x00080d89) fs_bigclock_status_signal_pane_g2

0x0001,

0xfe6e,	// (0x0008d375) fs_bigclock_status_signal_pane_g

0x388a,	// (0x00080d91) fs_bigclock_status_battery_pane_g1

0x3893,	// (0x00080d9a) fs_bigclock_status_battery_pane_g2

0x0001,

0xfe73,	// (0x0008d37a) fs_bigclock_status_battery_pane_g

0x389b,	// (0x00080da2) fs_bigclock_status_title_pane_t1

0x1a8a,	// (0x0007ef91) main_fs_bigclock_clock_pane_g1

0xcc9b,	// (0x0008a1a2) main_fs_bigclock_clock_pane_g2

0xcca8,	// (0x0008a1af) main_fs_bigclock_clock_pane_g3

0xcca8,	// (0x0008a1af) main_fs_bigclock_clock_pane_g4

0x0003,

0xfe78,	// (0x0008d37f) main_fs_bigclock_clock_pane_g

0xccb4,	// (0x0008a1bb) main_fs_bigclock_clock_pane_t1

0xccc6,	// (0x0008a1cd) main_fs_bigclock_clock_pane_t2

0x0001,

0xfe81,	// (0x0008d388) main_fs_bigclock_clock_pane_t

0x38a9,	// (0x00080db0) list_single_fs_bigclock_indicator_pane_ParamLimits

0x38a9,	// (0x00080db0) list_single_fs_bigclock_indicator_pane

0x38ba,	// (0x00080dc1) list_single_fs_bigclock_pane_ParamLimits

0x38ba,	// (0x00080dc1) list_single_fs_bigclock_pane

0x38e0,	// (0x00080de7) main_fs_bigclock_indicator_pane_t1

0x38ef,	// (0x00080df6) list_single_fs_bigclock_pane_g1

0x38f7,	// (0x00080dfe) list_single_fs_bigclock_pane_t1

0x17ca,	// (0x0007ecd1) main_fs_bigclock_swipe_pane_g1

0x3937,	// (0x00080e3e) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfe92,	// (0x0008d399) main_fs_bigclock_swipe_pane_g

0x393f,	// (0x00080e46) main_fs_bigclock_swipe_pane_t1_ParamLimits

0x393f,	// (0x00080e46) main_fs_bigclock_swipe_pane_t1

0x76a0,	// (0x00084ba7) call_type_pane_ParamLimits

0xd6cc,	// (0x0008abd3) main_btmg_pane

0x35c2,	// (0x00080ac9) list_single_cale_mrui_row_pane_g2_ParamLimits

0x35c2,	// (0x00080ac9) list_single_cale_mrui_row_pane_g2

0x0002,

0xfe05,	// (0x0008d30c) list_single_cale_mrui_row_pane_g_ParamLimits

0xfe05,	// (0x0008d30c) list_single_cale_mrui_row_pane_g

0x374c,	// (0x00080c53) list_recal_vselct_arw_lo_pane

0x3754,	// (0x00080c5b) list_recal_vselct_arw_up_pane

0x375c,	// (0x00080c63) list_recal_vselct_pane

0x395c,	// (0x00080e63) btmg_button_pane

0xcd1b,	// (0x0008a222) main_btmg_pane_g1

0xd6cc,	// (0x0008abd3) bg_button_pane_cp044

0x3964,	// (0x00080e6b) btmg_button_pane_t1

0x12a2,	// (0x0007e7a9) aid_listscroll_gen

0x0367,	// (0x0007d86e) main_cntbar_detail_pane

0x32e2,	// (0x000807e9) list_cmail_folder_pane

0x32f2,	// (0x000807f9) sp_fs_scroll_pane_cp03_ParamLimits

0xcd23,	// (0x0008a22a) list_single_fs_dyc_pane_cp01_ParamLimits

0xcd23,	// (0x0008a22a) list_single_fs_dyc_pane_cp01

0x3972,	// (0x00080e79) aid_size_cmail_indent

0x397b,	// (0x00080e82) list_single_dyc_row_pane_cp01

0xcd55,	// (0x0008a25c) cntbar_detail_list_pane_ParamLimits

0xcd55,	// (0x0008a25c) cntbar_detail_list_pane

0xcd8b,	// (0x0008a292) main_cntbar_detail_cont_pane_ParamLimits

0xcd8b,	// (0x0008a292) main_cntbar_detail_cont_pane

0xcd97,	// (0x0008a29e) scroll_pane_cp032_ParamLimits

0xcd97,	// (0x0008a29e) scroll_pane_cp032

0xcda3,	// (0x0008a2aa) cntbar_detail_list_event_pane_ParamLimits

0xcda3,	// (0x0008a2aa) cntbar_detail_list_event_pane

0xcd61,	// (0x0008a268) cntbar_detail_list_shct_pane

0x3984,	// (0x00080e8b) aid_list_gen

0xdf10,	// (0x0008b417) aid_scroll

0x247d,	// (0x0007f984) aid_size_touch_scroll_bar

0xb401,	// (0x00088908) aid_list_double

0x2497,	// (0x0007f99e) aid_list_single

0x2497,	// (0x0007f99e) aid_list_single_lg

0x398d,	// (0x00080e94) aid_list_z_g_a_sm

0x3d14,	// (0x0008121b) aid_list_z_g_d

0x3995,	// (0x00080e9c) aid_txt_z_prm

0xcdb3,	// (0x0008a2ba) aid_txt_z_prm_cp01

0xcdc1,	// (0x0008a2c8) aid_txt_z_sec

0xcdcf,	// (0x0008a2d6) main_cntbar_detail_cont_pane_g1_ParamLimits

0xcdcf,	// (0x0008a2d6) main_cntbar_detail_cont_pane_g1

0xcddc,	// (0x0008a2e3) main_cntbar_detail_cont_pane_g2_ParamLimits

0xcddc,	// (0x0008a2e3) main_cntbar_detail_cont_pane_g2

0x0001,

0xfe97,	// (0x0008d39e) main_cntbar_detail_cont_pane_g_ParamLimits

0xfe97,	// (0x0008d39e) main_cntbar_detail_cont_pane_g

0x39a3,	// (0x00080eaa) main_cntbar_detail_cont_pane_t1

0x39b1,	// (0x00080eb8) main_cntbar_detail_cont_pane_t2

0x39bf,	// (0x00080ec6) main_cntbar_detail_cont_pane_t3

0x0002,

0xfe9c,	// (0x0008d3a3) main_cntbar_detail_cont_pane_t

0xcde8,	// (0x0008a2ef) cell_cntbar_detail_list_shct_pane_ParamLimits

0xcde8,	// (0x0008a2ef) cell_cntbar_detail_list_shct_pane

0x39cd,	// (0x00080ed4) cntbar_detail_list_shct_pane_g1

0x39d6,	// (0x00080edd) cntbar_detail_list_shct_pane_g2

0x0001,

0xfea3,	// (0x0008d3aa) cntbar_detail_list_shct_pane_g

0xcdfa,	// (0x0008a301) cntbar_detail_list_event_pane_g1_ParamLimits

0xcdfa,	// (0x0008a301) cntbar_detail_list_event_pane_g1

0xce06,	// (0x0008a30d) cntbar_detail_list_event_pane_g2_ParamLimits

0xce06,	// (0x0008a30d) cntbar_detail_list_event_pane_g2

0x0005,

0xfea8,	// (0x0008d3af) cntbar_detail_list_event_pane_g_ParamLimits

0xfea8,	// (0x0008d3af) cntbar_detail_list_event_pane_g

0xce72,	// (0x0008a379) cntbar_detail_list_event_pane_t1_ParamLimits

0xce72,	// (0x0008a379) cntbar_detail_list_event_pane_t1

0xce87,	// (0x0008a38e) cntbar_detail_list_event_pane_t2_ParamLimits

0xce87,	// (0x0008a38e) cntbar_detail_list_event_pane_t2

0x0002,

0xfeb5,	// (0x0008d3bc) cntbar_detail_list_event_pane_t_ParamLimits

0xfeb5,	// (0x0008d3bc) cntbar_detail_list_event_pane_t

0x17ca,	// (0x0007ecd1) cell_cntbar_detail_list_shct_pane_g1

0xe9d0,	// (0x0008bed7) navi_pane_mv_g3

0x0367,	// (0x0007d86e) main_cntbar_detail_pane_ParamLimits

0xd6cc,	// (0x0008abd3) main_notif_wgt_pane

0x9ce4,	// (0x000871eb) aid_tch_main_mp4_pane_g4

0x9f23,	// (0x0008742a) popup_slider_window_cp02

0x3742,	// (0x00080c49) list_recal_day_event_pane

0xcd3b,	// (0x0008a242) cntbar_detail_btn_pane_ParamLimits

0xcd3b,	// (0x0008a242) cntbar_detail_btn_pane

0xcd47,	// (0x0008a24e) cntbar_detail_btn_pane_cp01_ParamLimits

0xcd47,	// (0x0008a24e) cntbar_detail_btn_pane_cp01

0xcd61,	// (0x0008a268) cntbar_detail_list_shct_pane_ParamLimits

0xcd6d,	// (0x0008a274) cntbar_detail_pane_g1_ParamLimits

0xcd6d,	// (0x0008a274) cntbar_detail_pane_g1

0xcd79,	// (0x0008a280) cntbar_detail_pane_t1_ParamLimits

0xcd79,	// (0x0008a280) cntbar_detail_pane_t1

0xce12,	// (0x0008a319) cntbar_detail_list_event_pane_g3_ParamLimits

0xce12,	// (0x0008a319) cntbar_detail_list_event_pane_g3

0xce2a,	// (0x0008a331) cntbar_detail_list_event_pane_g4_ParamLimits

0xce2a,	// (0x0008a331) cntbar_detail_list_event_pane_g4

0xce42,	// (0x0008a349) cntbar_detail_list_event_pane_g5_ParamLimits

0xce42,	// (0x0008a349) cntbar_detail_list_event_pane_g5

0xce5a,	// (0x0008a361) cntbar_detail_list_event_pane_g6_ParamLimits

0xce5a,	// (0x0008a361) cntbar_detail_list_event_pane_g6

0xce9c,	// (0x0008a3a3) cntbar_detail_list_event_pane_t3_ParamLimits

0xce9c,	// (0x0008a3a3) cntbar_detail_list_event_pane_t3

0xceae,	// (0x0008a3b5) popup_notif_wgt_window_ParamLimits

0xceae,	// (0x0008a3b5) popup_notif_wgt_window

0xcebc,	// (0x0008a3c3) popup_submenu_window_cp01_ParamLimits

0xcebc,	// (0x0008a3c3) popup_submenu_window_cp01

0xdfe2,	// (0x0008b4e9) bg_popup_window_pane_cp10

0x39df,	// (0x00080ee6) listscroll_notif_wgt_pane

0x39f0,	// (0x00080ef7) list_notif_wgt_window

0x39f9,	// (0x00080f00) scroll_pane_cp033

0xcec8,	// (0x0008a3cf) list_notif_wgt_row_pane_ParamLimits

0xcec8,	// (0x0008a3cf) list_notif_wgt_row_pane

0x3a02,	// (0x00080f09) aid_size_list_notif_wgt_del

0x3a0f,	// (0x00080f16) list_notif_wgt_row_pane_g1

0x3a1b,	// (0x00080f22) list_notif_wgt_row_pane_g2

0x3a2f,	// (0x00080f36) list_notif_wgt_row_pane_g3

0x0002,

0xfebc,	// (0x0008d3c3) list_notif_wgt_row_pane_g

0x3a3c,	// (0x00080f43) list_notif_wgt_row_pane_t1

0x3a52,	// (0x00080f59) list_notif_wgt_row_pane_t2

0x3a64,	// (0x00080f6b) list_notif_wgt_row_pane_t3

0x0002,

0xfec3,	// (0x0008d3ca) list_notif_wgt_row_pane_t

0x2177,	// (0x0007f67e) list_recal_day_event_pane_g1

0x3a76,	// (0x00080f7d) list_recal_day_event_pane_t1

0xd6cc,	// (0x0008abd3) bg_button_pane_cp045

0xceda,	// (0x0008a3e1) cntbar_detail_btn_pane_t1

0x12b6,	// (0x0007e7bd) main_callh_pane_ParamLimits

0x12b6,	// (0x0007e7bd) main_callh_pane

0xd6cc,	// (0x0008abd3) main_coverflow0_pane

0xd6cc,	// (0x0008abd3) main_wgtman_pane

0xbfc5,	// (0x000894cc) main_fs_bigclock_unlock_btn_pane_ParamLimits

0xbfc5,	// (0x000894cc) main_fs_bigclock_unlock_btn_pane

0x32b4,	// (0x000807bb) bg_button_pane_cp16

0x32c4,	// (0x000807cb) cell_tport_appsw_pane_g3

0xcee8,	// (0x0008a3ef) cf0_flow_pane_ParamLimits

0xcee8,	// (0x0008a3ef) cf0_flow_pane

0x3a85,	// (0x00080f8c) listscroll_cf0_pane

0x3a8e,	// (0x00080f95) main_cf0_pane_g1

0xcef7,	// (0x0008a3fe) main_cf0_pane_t1_ParamLimits

0xcef7,	// (0x0008a3fe) main_cf0_pane_t1

0xcf09,	// (0x0008a410) main_cf0_pane_t2_ParamLimits

0xcf09,	// (0x0008a410) main_cf0_pane_t2

0x0001,

0xfecf,	// (0x0008d3d6) main_cf0_pane_t_ParamLimits

0xfecf,	// (0x0008d3d6) main_cf0_pane_t

0x3aa0,	// (0x00080fa7) scroll_pane_cp11

0xcf1b,	// (0x0008a422) cf0_flow_pane_g1

0xcf23,	// (0x0008a42a) cf0_flow_pane_g2

0x0001,

0xfed4,	// (0x0008d3db) cf0_flow_pane_g

0xcf2b,	// (0x0008a432) cf0_flow_pane_t1

0xd6cc,	// (0x0008abd3) main_call6_pane

0xd6cc,	// (0x0008abd3) main_calllock_pane

0xcf39,	// (0x0008a440) call6_btn_grp_pane_ParamLimits

0xcf39,	// (0x0008a440) call6_btn_grp_pane

0xcf46,	// (0x0008a44d) call6_pane_g1_ParamLimits

0xcf46,	// (0x0008a44d) call6_pane_g1

0xcf53,	// (0x0008a45a) popup_call6_1st_window_ParamLimits

0xcf53,	// (0x0008a45a) popup_call6_1st_window

0xcf5f,	// (0x0008a466) popup_call6_2nd_window_ParamLimits

0xcf5f,	// (0x0008a466) popup_call6_2nd_window

0xcf6b,	// (0x0008a472) cell_call6_btn_pane_ParamLimits

0xcf6b,	// (0x0008a472) cell_call6_btn_pane

0xdfe2,	// (0x0008b4e9) bg_popup_call2_in_pane_cp03

0x3aa9,	// (0x00080fb0) popup_call6_1st_window_g1

0x3ab1,	// (0x00080fb8) popup_call6_1st_window_g2

0x3ab9,	// (0x00080fc0) popup_call6_1st_window_g3

0x0002,

0xfed9,	// (0x0008d3e0) popup_call6_1st_window_g

0x3ac1,	// (0x00080fc8) popup_call6_1st_window_t1

0x3ad0,	// (0x00080fd7) popup_call6_1st_window_t2

0x3ade,	// (0x00080fe5) popup_call6_1st_window_t3

0x0002,

0xfee0,	// (0x0008d3e7) popup_call6_1st_window_t

0xdfe2,	// (0x0008b4e9) bg_popup_call2_in_pane_cp04

0x3aa9,	// (0x00080fb0) popup_call6_2nd_window_g1

0x3ab1,	// (0x00080fb8) popup_call6_2nd_window_g2

0x3ab9,	// (0x00080fc0) popup_call6_2nd_window_g3

0x0002,

0xfed9,	// (0x0008d3e0) popup_call6_2nd_window_g

0x3ac1,	// (0x00080fc8) popup_call6_2nd_window_t1

0x572c,	// (0x00082c33) bg_button_pane_cp15

0xcf7a,	// (0x0008a481) cell_call6_btn_pane_g1

0xcf83,	// (0x0008a48a) cell_call6_btn_pane_t1

0xcf92,	// (0x0008a499) listscroll_wgtman_pane_ParamLimits

0xcf92,	// (0x0008a499) listscroll_wgtman_pane

0xcfae,	// (0x0008a4b5) wgtman_btn_pane_ParamLimits

0xcfae,	// (0x0008a4b5) wgtman_btn_pane

0xe827,	// (0x0008bd2e) aid_scroll_copy1

0x3aec,	// (0x00080ff3) list_wgtman_pane

0xcfe1,	// (0x0008a4e8) wgtman_btn_pane_g1_ParamLimits

0xcfe1,	// (0x0008a4e8) wgtman_btn_pane_g1

0xd009,	// (0x0008a510) wgtman_btn_pane_t1_ParamLimits

0xd009,	// (0x0008a510) wgtman_btn_pane_t1

0x3af6,	// (0x00080ffd) wgtman_btn_pane_t2_ParamLimits

0x3af6,	// (0x00080ffd) wgtman_btn_pane_t2

0x0001,

0xfee7,	// (0x0008d3ee) wgtman_btn_pane_t_ParamLimits

0xfee7,	// (0x0008d3ee) wgtman_btn_pane_t

0xd040,	// (0x0008a547) listrow_wgtman_pane_ParamLimits

0xd040,	// (0x0008a547) listrow_wgtman_pane

0xd051,	// (0x0008a558) listrow_wgtman_pane_g1

0xd05e,	// (0x0008a565) listrow_wgtman_pane_g2

0x0001,

0xfeec,	// (0x0008d3f3) listrow_wgtman_pane_g

0xd076,	// (0x0008a57d) listrow_wgtman_pane_t1

0xd08e,	// (0x0008a595) listrow_wgtman_pane_t2

0x0001,

0xfef1,	// (0x0008d3f8) listrow_wgtman_pane_t

0xd0b4,	// (0x0008a5bb) wait_bar_pane_cp09

0x3b0d,	// (0x00081014) main_calllock_btn_pane

0x3b15,	// (0x0008101c) main_calllock_pane_g1

0xd6cc,	// (0x0008abd3) bg_button_pane_cp17

0x3b1e,	// (0x00081025) main_calllock_btn_pane_g1

0x3b27,	// (0x0008102e) main_calllock_btn_pane_t1

0xd6cc,	// (0x0008abd3) main_dialer3_pane

0xd6cc,	// (0x0008abd3) main_fmrd2_pane

0x17ca,	// (0x0007ecd1) main_fs_bigclock_unlock_btn_pane_g1

0x3b3e,	// (0x00081045) main_fs_bigclock_unlock_btn_pane_t1

0xd0c6,	// (0x0008a5cd) area_fmrd2_info_pane_ParamLimits

0xd0c6,	// (0x0008a5cd) area_fmrd2_info_pane

0xd0d2,	// (0x0008a5d9) area_fmrd2_visual_pane_ParamLimits

0xd0d2,	// (0x0008a5d9) area_fmrd2_visual_pane

0xd0e0,	// (0x0008a5e7) fmrd2_indi_pane_ParamLimits

0xd0e0,	// (0x0008a5e7) fmrd2_indi_pane

0xd0ed,	// (0x0008a5f4) area_fmrd2_visual_pane_g1

0xd0f5,	// (0x0008a5fc) area_fmrd2_visual_pane_t1

0xd103,	// (0x0008a60a) area_fmrd2_visual_pane_t2

0xd111,	// (0x0008a618) area_fmrd2_visual_pane_t3

0x0002,

0xfefb,	// (0x0008d402) area_fmrd2_visual_pane_t

0xd11f,	// (0x0008a626) area_fmrd2_info_pane_g1

0xd127,	// (0x0008a62e) area_fmrd2_info_pane_t1

0xd135,	// (0x0008a63c) area_fmrd2_info_pane_t2

0xd143,	// (0x0008a64a) area_fmrd2_info_pane_t3

0xd151,	// (0x0008a658) area_fmrd2_info_pane_t4

0x0003,

0xff02,	// (0x0008d409) area_fmrd2_info_pane_t

0xd15f,	// (0x0008a666) fmrd2_indi_pane_t1

0xd16d,	// (0x0008a674) fmrd2_indi_pane_t2

0xd17b,	// (0x0008a682) fmrd2_indi_pane_t3

0x0002,

0xff0b,	// (0x0008d412) fmrd2_indi_pane_t

0x2d8d,	// (0x00080294) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0x2d8d,	// (0x00080294) list_single_fs_bigclock_indicator_pane_g5

0x2e3b,	// (0x00080342) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0x2e3b,	// (0x00080342) list_single_fs_bigclock_indicator_pane_t5

0xc91d,	// (0x00089e24) aid_cell_bcale_month_pane_ParamLimits

0xc91d,	// (0x00089e24) aid_cell_bcale_month_pane

0xc93b,	// (0x00089e42) bcale_month_pane_ParamLimits

0xc93b,	// (0x00089e42) bcale_month_pane

0xc951,	// (0x00089e58) bcale_preview_pane_ParamLimits

0xc951,	// (0x00089e58) bcale_preview_pane

0x38f7,	// (0x00080dfe) list_single_fs_bigclock_pane_t1_ParamLimits

0x3913,	// (0x00080e1a) list_single_fs_bigclock_pane_t2_ParamLimits

0x3913,	// (0x00080e1a) list_single_fs_bigclock_pane_t2

0x0001,

0xfe8d,	// (0x0008d394) list_single_fs_bigclock_pane_t_ParamLimits

0xfe8d,	// (0x0008d394) list_single_fs_bigclock_pane_t

0x3b36,	// (0x0008103d) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfef6,	// (0x0008d3fd) main_fs_bigclock_unlock_btn_pane_g

0xd189,	// (0x0008a690) aid_dia3_key_size_ParamLimits

0xd189,	// (0x0008a690) aid_dia3_key_size

0xd195,	// (0x0008a69c) aid_dia3_listrow_size_ParamLimits

0xd195,	// (0x0008a69c) aid_dia3_listrow_size

0xd1a3,	// (0x0008a6aa) dia3_keypad_fun_pane_ParamLimits

0xd1a3,	// (0x0008a6aa) dia3_keypad_fun_pane

0xd1af,	// (0x0008a6b6) dia3_keypad_num_pane_ParamLimits

0xd1af,	// (0x0008a6b6) dia3_keypad_num_pane

0xd1bb,	// (0x0008a6c2) dia3_listscroll_pane_ParamLimits

0xd1bb,	// (0x0008a6c2) dia3_listscroll_pane

0xd1c7,	// (0x0008a6ce) dia3_numentry_pane_ParamLimits

0xd1c7,	// (0x0008a6ce) dia3_numentry_pane

0x3b4c,	// (0x00081053) dia3_list_pane

0x3b55,	// (0x0008105c) scroll_pane_cp12

0xd6cc,	// (0x0008abd3) bg_dia3_numentry_pane

0xd1d3,	// (0x0008a6da) dia3_numentry_pane_t1

0xd1e2,	// (0x0008a6e9) cell_dia3_key_num_pane

0xd1ea,	// (0x0008a6f1) cell_dia3_key0_fun_pane_ParamLimits

0xd1ea,	// (0x0008a6f1) cell_dia3_key0_fun_pane

0xd1f7,	// (0x0008a6fe) cell_dia3_key1_fun_pane_ParamLimits

0xd1f7,	// (0x0008a6fe) cell_dia3_key1_fun_pane

0xd204,	// (0x0008a70b) dia3_listrow_pane

0x2a8e,	// (0x0007ff95) bg_dia3_numentry_pane_g1

0xd6cc,	// (0x0008abd3) bg_button_pane_cp21

0x3b5e,	// (0x00081065) cell_dia3_key_num_pane_t1

0x3b6c,	// (0x00081073) cell_dia3_key_num_pane_t2

0x3b7b,	// (0x00081082) cell_dia3_key_num_pane_t3

0x3b8a,	// (0x00081091) cell_dia3_key_num_pane_t4

0x0003,

0xff12,	// (0x0008d419) cell_dia3_key_num_pane_t

0xd6cc,	// (0x0008abd3) bg_button_pane_cp19

0x3b99,	// (0x000810a0) cell_dia3_key0_fun_pane_g1

0xd6cc,	// (0x0008abd3) bg_button_pane_cp20

0xd211,	// (0x0008a718) cell_dia3_key1_fun_pane_g1

0xd219,	// (0x0008a720) area_left_week_number_pane

0xd22a,	// (0x0008a731) area_top_day_name_pane

0xd236,	// (0x0008a73d) frame_month_view_pane

0x3ba1,	// (0x000810a8) grid_month_view_pane

0xd247,	// (0x0008a74e) cell_top_day_name_pane_ParamLimits

0xd247,	// (0x0008a74e) cell_top_day_name_pane

0xd25d,	// (0x0008a764) cell_area_left_week_number_pane_ParamLimits

0xd25d,	// (0x0008a764) cell_area_left_week_number_pane

0xd27c,	// (0x0008a783) cell_month_view_pane_ParamLimits

0xd27c,	// (0x0008a783) cell_month_view_pane

0x3baf,	// (0x000810b6) frm_month_g1

0xd2a2,	// (0x0008a7a9) frm_month_g2

0xd2b1,	// (0x0008a7b8) frm_month_g3

0xd2c0,	// (0x0008a7c7) frm_month_g4

0xd2cf,	// (0x0008a7d6) frm_month_g5

0xd2de,	// (0x0008a7e5) frm_month_g6

0xd2ed,	// (0x0008a7f4) frm_month_g7

0x3bbc,	// (0x000810c3) frm_month_g8

0xd2fc,	// (0x0008a803) frm_month_g9

0xd309,	// (0x0008a810) frm_month_g10

0xd316,	// (0x0008a81d) frm_month_g11

0xd323,	// (0x0008a82a) frm_month_g12

0xd330,	// (0x0008a837) frm_month_g13

0xd33d,	// (0x0008a844) frm_month_g14

0xd34a,	// (0x0008a851) frm_month_g15

0xd357,	// (0x0008a85e) frm_month_g16

0x000f,

0xff1b,	// (0x0008d422) frm_month_g

0x3bc9,	// (0x000810d0) cell_top_day_name_pane_t1

0xd364,	// (0x0008a86b) cell_area_left_week_number_pane_g1

0xd373,	// (0x0008a87a) cell_area_left_week_number_pane_t1

0x19f9,	// (0x0007ef00) cell_month_view_pane_g1

0xd389,	// (0x0008a890) cell_month_view_pane_t1

0xd6cc,	// (0x0008abd3) main_fps_pane

0x304b,	// (0x00080552) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0x304b,	// (0x00080552) cmail_ddmenu_btn02_pane_cp1

0x3067,	// (0x0008056e) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0x3067,	// (0x0008056e) cmail_ddmenu_btn02_pane_cp2

0xcbaf,	// (0x0008a0b6) cmail_ddmenu_btn02_pane_g2_ParamLimits

0xcbaf,	// (0x0008a0b6) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfe40,	// (0x0008d347) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfe40,	// (0x0008d347) cmail_ddmenu_btn02_pane_g

0xcbcd,	// (0x0008a0d4) cmail_ddmenu_btn02_pane_t2_ParamLimits

0xcbcd,	// (0x0008a0d4) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfe45,	// (0x0008d34c) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfe45,	// (0x0008d34c) cmail_ddmenu_btn02_pane_t

0xd39f,	// (0x0008a8a6) fps_text_pane_ParamLimits

0xd39f,	// (0x0008a8a6) fps_text_pane

0xd3ac,	// (0x0008a8b3) main_fps_pane_g1_ParamLimits

0xd3ac,	// (0x0008a8b3) main_fps_pane_g1

0xd3b8,	// (0x0008a8bf) wait_bar_pane_cp010_ParamLimits

0xd3b8,	// (0x0008a8bf) wait_bar_pane_cp010

0xd3c4,	// (0x0008a8cb) fps_text_pane_t1_ParamLimits

0xd3c4,	// (0x0008a8cb) fps_text_pane_t1

0xa319,	// (0x00087820) cam4_image_uncrop_pane_g1

0xa322,	// (0x00087829) cam4_image_uncrop_pane_g2

0xa32b,	// (0x00087832) cam4_image_uncrop_pane_g3

0xa334,	// (0x0008783b) cam4_image_uncrop_pane_g4

0x0003,

0xf901,	// (0x0008ce08) cam4_image_uncrop_pane_g

0xd204,	// (0x0008a70b) dia3_listrow_pane_ParamLimits

0xd6cc,	// (0x0008abd3) main_phob2_pane

0xc796,	// (0x00089c9d) cell_tport_appsw_pane_cp02_ParamLimits

0xc796,	// (0x00089c9d) cell_tport_appsw_pane_cp02

0xc7a3,	// (0x00089caa) cell_tport_appsw_pane_cp03_ParamLimits

0xc7a3,	// (0x00089caa) cell_tport_appsw_pane_cp03

0xd6cc,	// (0x0008abd3) phob2_contact_card_pane

0xd6cc,	// (0x0008abd3) phob2_listscroll_pane

0x3bdc,	// (0x000810e3) phob2_list_pane

0x3be4,	// (0x000810eb) scroll_pane_cp034

0xd3dd,	// (0x0008a8e4) phob2_cc_data_pane_ParamLimits

0xd3dd,	// (0x0008a8e4) phob2_cc_data_pane

0xd3f5,	// (0x0008a8fc) phob2_cc_listscroll_pane_ParamLimits

0xd3f5,	// (0x0008a8fc) phob2_cc_listscroll_pane

0xd40d,	// (0x0008a914) list_double_large_graphic_phob2_pane_ParamLimits

0xd40d,	// (0x0008a914) list_double_large_graphic_phob2_pane

0xd41f,	// (0x0008a926) list_double_large_graphic_phob2_pane_g1_ParamLimits

0xd41f,	// (0x0008a926) list_double_large_graphic_phob2_pane_g1

0xd435,	// (0x0008a93c) list_double_large_graphic_phob2_pane_g2_ParamLimits

0xd435,	// (0x0008a93c) list_double_large_graphic_phob2_pane_g2

0x0001,

0xff3c,	// (0x0008d443) list_double_large_graphic_phob2_pane_g_ParamLimits

0xff3c,	// (0x0008d443) list_double_large_graphic_phob2_pane_g

0xd441,	// (0x0008a948) list_double_large_graphic_phob2_pane_t1_ParamLimits

0xd441,	// (0x0008a948) list_double_large_graphic_phob2_pane_t1

0xd457,	// (0x0008a95e) list_double_large_graphic_phob2_pane_t2_ParamLimits

0xd457,	// (0x0008a95e) list_double_large_graphic_phob2_pane_t2

0x0001,

0xff41,	// (0x0008d448) list_double_large_graphic_phob2_pane_t_ParamLimits

0xff41,	// (0x0008d448) list_double_large_graphic_phob2_pane_t

0xd6cc,	// (0x0008abd3) list_highlight_pane_cp024

0xd46c,	// (0x0008a973) phob2_cc_button_pane

0xd474,	// (0x0008a97b) phob2_cc_data_pane_g1_ParamLimits

0xd474,	// (0x0008a97b) phob2_cc_data_pane_g1

0xd480,	// (0x0008a987) phob2_cc_data_pane_g2_ParamLimits

0xd480,	// (0x0008a987) phob2_cc_data_pane_g2

0x0001,

0xff46,	// (0x0008d44d) phob2_cc_data_pane_g_ParamLimits

0xff46,	// (0x0008d44d) phob2_cc_data_pane_g

0xd48c,	// (0x0008a993) phob2_cc_data_pane_t1_ParamLimits

0xd48c,	// (0x0008a993) phob2_cc_data_pane_t1

0xd49e,	// (0x0008a9a5) phob2_cc_data_pane_t2_ParamLimits

0xd49e,	// (0x0008a9a5) phob2_cc_data_pane_t2

0xd4b0,	// (0x0008a9b7) phob2_cc_data_pane_t3_ParamLimits

0xd4b0,	// (0x0008a9b7) phob2_cc_data_pane_t3

0x0002,

0xff4b,	// (0x0008d452) phob2_cc_data_pane_t_ParamLimits

0xff4b,	// (0x0008d452) phob2_cc_data_pane_t

0x3bec,	// (0x000810f3) phob2_cc_list_pane_ParamLimits

0x3bec,	// (0x000810f3) phob2_cc_list_pane

0x29ab,	// (0x0007feb2) scroll_pane_cp035_ParamLimits

0x29ab,	// (0x0007feb2) scroll_pane_cp035

0x0367,	// (0x0007d86e) bg_button_pane_cp033

0x3bf8,	// (0x000810ff) phob2_cc_button_pane_g1

0x3c04,	// (0x0008110b) phob2_cc_button_pane_t1

0x3c19,	// (0x00081120) phob2_cc_button_pane_t2

0x0001,

0xff52,	// (0x0008d459) phob2_cc_button_pane_t

0xd4c2,	// (0x0008a9c9) list_double_large_graphic_phob2_cc_pane_ParamLimits

0xd4c2,	// (0x0008a9c9) list_double_large_graphic_phob2_cc_pane

0xd508,	// (0x0008aa0f) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0xd508,	// (0x0008aa0f) list_double_large_graphic_phob2_cc_pane_g1

0xd519,	// (0x0008aa20) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0xd519,	// (0x0008aa20) list_double_large_graphic_phob2_cc_pane_g2

0xd528,	// (0x0008aa2f) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0xd528,	// (0x0008aa2f) list_double_large_graphic_phob2_cc_pane_g3

0xd537,	// (0x0008aa3e) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0xd537,	// (0x0008aa3e) list_double_large_graphic_phob2_cc_pane_g4

0xd548,	// (0x0008aa4f) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0xd548,	// (0x0008aa4f) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xff57,	// (0x0008d45e) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xff57,	// (0x0008d45e) list_double_large_graphic_phob2_cc_pane_g

0xd557,	// (0x0008aa5e) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0xd557,	// (0x0008aa5e) list_double_large_graphic_phob2_cc_pane_t1

0xd580,	// (0x0008aa87) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0xd580,	// (0x0008aa87) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xff62,	// (0x0008d469) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xff62,	// (0x0008d469) list_double_large_graphic_phob2_cc_pane_t

0x3c2b,	// (0x00081132) list_highlight_pane_cp025_ParamLimits

0x3c2b,	// (0x00081132) list_highlight_pane_cp025

0x0367,	// (0x0007d86e) bg_button_pane_cp033_ParamLimits

0x3bf8,	// (0x000810ff) phob2_cc_button_pane_g1_ParamLimits

0x3c04,	// (0x0008110b) phob2_cc_button_pane_t1_ParamLimits

0x3c19,	// (0x00081120) phob2_cc_button_pane_t2_ParamLimits

0xff52,	// (0x0008d459) phob2_cc_button_pane_t_ParamLimits

0x5724,	// (0x00082c2b) popup_wgtman_window

0x2aae,	// (0x0007ffb5) scroll_pane_cp038

0xcfc9,	// (0x0008a4d0) wgtman_btn_pane_cp_01_ParamLimits

0xcfc9,	// (0x0008a4d0) wgtman_btn_pane_cp_01

0x3c39,	// (0x00081140) wgtman_content_pane

0x3c42,	// (0x00081149) wgtman_heading_pane

0xd6cc,	// (0x0008abd3) bg_heading_pane_cp02

0x3c4b,	// (0x00081152) wgtman_heading_pane_g1

0x3c53,	// (0x0008115a) wgtman_heading_pane_t1

0x3c61,	// (0x00081168) scroll_pane_cp036

0x3c69,	// (0x00081170) wgtman_list_pane

0x3c71,	// (0x00081178) wgtman_list_pane_t1_ParamLimits

0x3c71,	// (0x00081178) wgtman_list_pane_t1

0xa27e,	// (0x00087785) cam4_grid_pane

0xaf01,	// (0x00088408) bg_button_pane_cp015_ParamLimits

0xaf11,	// (0x00088418) bg_button_pane_cp016_ParamLimits

0xaf24,	// (0x0008842b) bg_button_pane_cp017_ParamLimits

0xaf76,	// (0x0008847d) popup_vitu2_query_window_g3_ParamLimits

0xaf76,	// (0x0008847d) popup_vitu2_query_window_g3

0xb029,	// (0x00088530) popup_vitu2_query_window_t6_ParamLimits

0xb029,	// (0x00088530) popup_vitu2_query_window_t6

0xb054,	// (0x0008855b) popup_vitu2_query_window_t7_ParamLimits

0xb054,	// (0x0008855b) popup_vitu2_query_window_t7

0x4500,	// (0x00081a07) cam4_grid_pane_g1

0x4509,	// (0x00081a10) cam4_grid_pane_g2

0x3c88,	// (0x0008118f) cam4_grid_pane_g3

0x3c91,	// (0x00081198) cam4_grid_pane_g4

0x0003,

0xff67,	// (0x0008d46e) cam4_grid_pane_g

0x65ef,	// (0x00083af6) aid_placing_vt_slider_lsc_ParamLimits

0x6899,	// (0x00083da0) vidtel_button_pane_ParamLimits

0x6899,	// (0x00083da0) vidtel_button_pane

0xd6cc,	// (0x0008abd3) bg_button_pane_cp034

0xd5a9,	// (0x0008aab0) vidtel_button_pane_g1

0xd5b1,	// (0x0008aab8) vidtel_button_pane_t1

0x214d,	// (0x0007f654) aid_size_vtel_slider_touch

0x29ab,	// (0x0007feb2) scroll_pane_cp039

0x2add,	// (0x0007ffe4) ncim_query_button_pane_cp01_ParamLimits

0x2afc,	// (0x00080003) ncimui_query_pane_g1_ParamLimits

0x0367,	// (0x0007d86e) input_focus_pane_cp012_ParamLimits

0x2b21,	// (0x00080028) ncim_query_entry_pane_t1_ParamLimits

0x29ab,	// (0x0007feb2) scroll_pane_cp039_ParamLimits

0xe8eb,	// (0x0008bdf2) navi_pane_bcale_mc_g1

0xe8f3,	// (0x0008bdfa) navi_pane_bcale_mc_t1

0x30b0,	// (0x000805b7) main_sp_fs_email_pane_g1

0x30bc,	// (0x000805c3) main_sp_fs_email_pane_g2

0x0001,

0xfcf8,	// (0x0008d1ff) main_sp_fs_email_pane_g

0x35ce,	// (0x00080ad5) list_single_cale_mrui_row_pane_g3_ParamLimits

0x35ce,	// (0x00080ad5) list_single_cale_mrui_row_pane_g3

0xcbeb,	// (0x0008a0f2) list_single_recal_day_pane_g5_event_pane

0x37a7,	// (0x00080cae) list_single_recal_day_pane_g7

0x3c9a,	// (0x000811a1) list_recal_day_event_pane_cp01

0x3ca3,	// (0x000811aa) list_recal_vselct_arw_lo_pane_cp01

0x3cab,	// (0x000811b2) list_recal_vselct_arw_up_pane_cp01

0x3cb3,	// (0x000811ba) list_recal_vselct_pane_cp01

0x2177,	// (0x0007f67e) list_recal_day_event_pane_cp01_g1

0x3cbd,	// (0x000811c4) list_recal_day_event_pane_cp01_t1

0x37af,	// (0x00080cb6) list_single_recal_day_pane_t1_ParamLimits

0xcc02,	// (0x0008a109) list_single_recal_day_pane_t2_ParamLimits

0xfe55,	// (0x0008d35c) list_single_recal_day_pane_t_ParamLimits

0xdd42,	// (0x0008b249) bg_notes_pane_ParamLimits

0xdde5,	// (0x0008b2ec) list_notes_pane_ParamLimits

0x5a2b,	// (0x00082f32) scroll_pane_cp06_ParamLimits

0xde0b,	// (0x0008b312) main_notes_pane_ParamLimits

0xd6cc,	// (0x0008abd3) main_welc_pane

0xd5c7,	// (0x0008aace) main_welc_body_pane_ParamLimits

0xd5c7,	// (0x0008aace) main_welc_body_pane

0xd5e0,	// (0x0008aae7) main_welc_opti_pane_ParamLimits

0xd5e0,	// (0x0008aae7) main_welc_opti_pane

0xd60d,	// (0x0008ab14) main_welc_pane_t1_ParamLimits

0xd60d,	// (0x0008ab14) main_welc_pane_t1

0xd625,	// (0x0008ab2c) main_welc_body_row_pane_ParamLimits

0xd625,	// (0x0008ab2c) main_welc_body_row_pane

0x3ccb,	// (0x000811d2) main_welc_opti_row_pane_ParamLimits

0x3ccb,	// (0x000811d2) main_welc_opti_row_pane

0x3cd9,	// (0x000811e0) main_welc_opti_row_pane_g1

0xd63a,	// (0x0008ab41) main_welc_opti_row_pane_t1

0x3ce1,	// (0x000811e8) main_welc_body_row_pane_t1

0x39e8,	// (0x00080eef) popup_notif_wgt_heading_pane

0x3a02,	// (0x00080f09) aid_size_list_notif_wgt_del_ParamLimits

0x3a0f,	// (0x00080f16) list_notif_wgt_row_pane_g1_ParamLimits

0x3a1b,	// (0x00080f22) list_notif_wgt_row_pane_g2_ParamLimits

0x3a2f,	// (0x00080f36) list_notif_wgt_row_pane_g3_ParamLimits

0xfebc,	// (0x0008d3c3) list_notif_wgt_row_pane_g_ParamLimits

0x3a3c,	// (0x00080f43) list_notif_wgt_row_pane_t1_ParamLimits

0x3a52,	// (0x00080f59) list_notif_wgt_row_pane_t2_ParamLimits

0x3a64,	// (0x00080f6b) list_notif_wgt_row_pane_t3_ParamLimits

0xfec3,	// (0x0008d3ca) list_notif_wgt_row_pane_t_ParamLimits

0xd051,	// (0x0008a558) listrow_wgtman_pane_g1_ParamLimits

0xd05e,	// (0x0008a565) listrow_wgtman_pane_g2_ParamLimits

0xfeec,	// (0x0008d3f3) listrow_wgtman_pane_g_ParamLimits

0xd076,	// (0x0008a57d) listrow_wgtman_pane_t1_ParamLimits

0xd08e,	// (0x0008a595) listrow_wgtman_pane_t2_ParamLimits

0xfef1,	// (0x0008d3f8) listrow_wgtman_pane_t_ParamLimits

0xd0b4,	// (0x0008a5bb) wait_bar_pane_cp09_ParamLimits

0xd6cc,	// (0x0008abd3) bg_popup_heading_pane_cp02

0x3cf0,	// (0x000811f7) popup_notif_wgt_heading_pane_g1

0x3cf8,	// (0x000811ff) popup_notif_wgt_heading_pane_t1

0x12c4,	// (0x0007e7cb) main_vids_pane

0xd6cc,	// (0x0008abd3) vids_listscroll_pane

0xd649,	// (0x0008ab50) scroll_pane_cp040

0xd6cc,	// (0x0008abd3) vids_list_pane

0xd652,	// (0x0008ab59) vids_list_double_pane_ParamLimits

0xd652,	// (0x0008ab59) vids_list_double_pane

0xd663,	// (0x0008ab6a) vids_list_double_pane_g1

0xd66c,	// (0x0008ab73) vids_list_double_pane_t1

0xd67c,	// (0x0008ab83) vids_list_double_pane_t2

0x0001,

0xff75,	// (0x0008d47c) vids_list_double_pane_t

0x8539,	// (0x00085a40) main_ncimui_pane_ParamLimits

0xbbd9,	// (0x000890e0) main_ncimui_pane_g1_ParamLimits

0xbbe5,	// (0x000890ec) main_ncimui_pane_g2_ParamLimits

0xbbe5,	// (0x000890ec) main_ncimui_pane_g2

0x0001,

0xfbfd,	// (0x0008d104) main_ncimui_pane_g_ParamLimits

0xfbfd,	// (0x0008d104) main_ncimui_pane_g

0xd5f5,	// (0x0008aafc) main_welc_pane_g1_ParamLimits

0xd5f5,	// (0x0008aafc) main_welc_pane_g1

0xd601,	// (0x0008ab08) main_welc_pane_g2_ParamLimits

0xd601,	// (0x0008ab08) main_welc_pane_g2

0x0001,

0xff70,	// (0x0008d477) main_welc_pane_g_ParamLimits

0xff70,	// (0x0008d477) main_welc_pane_g

0xdd42,	// (0x0008b249) listscroll_mce_pane_ParamLimits

0x79b9,	// (0x00084ec0) wait_bar_pane_cp10

0x12aa,	// (0x0007e7b1) main_cale_day_pane_ParamLimits

0x12aa,	// (0x0007e7b1) main_cale_week_pane_ParamLimits

0xdd42,	// (0x0008b249) main_messa_pane_ParamLimits

0x970e,	// (0x00086c15) main_clock2_btn_pane_ParamLimits

0x970e,	// (0x00086c15) main_clock2_btn_pane

0x1bad,	// (0x0007f0b4) main_clock2_btn_pane_cp01_ParamLimits

0x1bad,	// (0x0007f0b4) main_clock2_btn_pane_cp01

0x3551,	// (0x00080a58) list_cale_mrui_pane_ParamLimits

0x3a98,	// (0x00080f9f) main_cf0_pane_g2

0x0001,

0xfeca,	// (0x0008d3d1) main_cf0_pane_g

0xd219,	// (0x0008a720) area_left_week_number_pane_ParamLimits

0xd22a,	// (0x0008a731) area_top_day_name_pane_ParamLimits

0xd236,	// (0x0008a73d) frame_month_view_pane_ParamLimits

0x3ba1,	// (0x000810a8) grid_month_view_pane_ParamLimits

0x3baf,	// (0x000810b6) frm_month_g1_ParamLimits

0xd2a2,	// (0x0008a7a9) frm_month_g2_ParamLimits

0xd2b1,	// (0x0008a7b8) frm_month_g3_ParamLimits

0xd2c0,	// (0x0008a7c7) frm_month_g4_ParamLimits

0xd2cf,	// (0x0008a7d6) frm_month_g5_ParamLimits

0xd2de,	// (0x0008a7e5) frm_month_g6_ParamLimits

0xd2ed,	// (0x0008a7f4) frm_month_g7_ParamLimits

0x3bbc,	// (0x000810c3) frm_month_g8_ParamLimits

0xd2fc,	// (0x0008a803) frm_month_g9_ParamLimits

0xd309,	// (0x0008a810) frm_month_g10_ParamLimits

0xd316,	// (0x0008a81d) frm_month_g11_ParamLimits

0xd323,	// (0x0008a82a) frm_month_g12_ParamLimits

0xd330,	// (0x0008a837) frm_month_g13_ParamLimits

0xd33d,	// (0x0008a844) frm_month_g14_ParamLimits

0xd34a,	// (0x0008a851) frm_month_g15_ParamLimits

0xd357,	// (0x0008a85e) frm_month_g16_ParamLimits

0xff1b,	// (0x0008d422) frm_month_g_ParamLimits

0x3bc9,	// (0x000810d0) cell_top_day_name_pane_t1_ParamLimits

0xd364,	// (0x0008a86b) cell_area_left_week_number_pane_g1_ParamLimits

0xd373,	// (0x0008a87a) cell_area_left_week_number_pane_t1_ParamLimits

0x19f9,	// (0x0007ef00) cell_month_view_pane_g1_ParamLimits

0xd389,	// (0x0008a890) cell_month_view_pane_t1_ParamLimits

0xdd3a,	// (0x0008b241) main_clock2_btn_pane_g1

0x3d06,	// (0x0008120d) main_clock2_btn_pane_t1

0x0367,	// (0x0007d86e) listscroll_cmail_pane_ParamLimits

0x30b0,	// (0x000805b7) main_sp_fs_email_pane_g1_ParamLimits

0x30bc,	// (0x000805c3) main_sp_fs_email_pane_g2_ParamLimits

0xfcf8,	// (0x0008d1ff) main_sp_fs_email_pane_g_ParamLimits

0x3723,	// (0x00080c2a) list_recal_day_pane_ParamLimits

0x3734,	// (0x00080c3b) mian_recal_day_pane_t1

0xc50a,	// (0x00089a11) list_single_dyc_row_text_pane_t4_ParamLimits

0xc50a,	// (0x00089a11) list_single_dyc_row_text_pane_t4

0xc541,	// (0x00089a48) list_single_dyc_row_text_pane_t5_ParamLimits

0xc541,	// (0x00089a48) list_single_dyc_row_text_pane_t5

0x3184,	// (0x0008068b) list_single_dyc_row_text_pane_t6_ParamLimits

0x3184,	// (0x0008068b) list_single_dyc_row_text_pane_t6

0x74e4,	// (0x000849eb) aid_mgn_list_cale_time_pane

0x8539,	// (0x00085a40) main_gallery2_pane_ParamLimits

0x1bc1,	// (0x0007f0c8) main_clock2_pane_cp01_t1

0x1bcf,	// (0x0007f0d6) main_clock2_pane_cp01_t3

0x0001,

0xf7d3,	// (0x0008ccda) main_clock2_pane_cp01_t

0x5df3,	// (0x000832fa) cale_week_scroll_pane_g16_ParamLimits

0x5df3,	// (0x000832fa) cale_week_scroll_pane_g16

0xdfe2,	// (0x0008b4e9) vorec_slider_pane

0xd5b1,	// (0x0008aab8) vidtel_button_pane_t1_ParamLimits

0x1a8a,	// (0x0007ef91) main_fs_bigclock_clock_pane_g1_ParamLimits

0xcc9b,	// (0x0008a1a2) main_fs_bigclock_clock_pane_g2_ParamLimits

0xcca8,	// (0x0008a1af) main_fs_bigclock_clock_pane_g3_ParamLimits

0xcca8,	// (0x0008a1af) main_fs_bigclock_clock_pane_g4_ParamLimits

0xfe78,	// (0x0008d37f) main_fs_bigclock_clock_pane_g_ParamLimits

0xccb4,	// (0x0008a1bb) main_fs_bigclock_clock_pane_t1_ParamLimits

0xccc6,	// (0x0008a1cd) main_fs_bigclock_clock_pane_t2_ParamLimits

0xfe81,	// (0x0008d388) main_fs_bigclock_clock_pane_t_ParamLimits

0x903a,	// (0x00086541) main_mup3_lyrics_pane_ParamLimits

0x903a,	// (0x00086541) main_mup3_lyrics_pane

0xd6ae,	// (0x0008abb5) main_mup3_lyrics_pane_t1_ParamLimits

0xd6ae,	// (0x0008abb5) main_mup3_lyrics_pane_t1

0x9cdc,	// (0x000871e3) aid_main_mp4_pane_t1_area

0x9cdc,	// (0x000871e3) aid_main_mp4_pane_t2_area

0x9dc7,	// (0x000872ce) main_mp4_pane_g7_ParamLimits

0x9dc7,	// (0x000872ce) main_mp4_pane_g7

0x9dd3,	// (0x000872da) main_mp4_pane_g8_ParamLimits

0x9dd3,	// (0x000872da) main_mp4_pane_g8

0xa196,	// (0x0008769d) aid_call6_pane_g1_size

0xd4ec,	// (0x0008a9f3) list_double_large_graphic_phob2_other_pane_ParamLimits

0xd4ec,	// (0x0008a9f3) list_double_large_graphic_phob2_other_pane

0xe83e,	// (0x0008bd45) list_double_large_graphic_phob2_other_pane_g1

0xd6cc,	// (0x0008abd3) list_highlight_pane_cp026
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
	};

} // end of namespace AknLayoutScalable_Abrw_pqp_apps_qvga_prt_Large
