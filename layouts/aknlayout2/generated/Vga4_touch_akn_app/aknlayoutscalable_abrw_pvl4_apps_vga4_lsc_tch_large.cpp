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

#include "aknlayoutscalable_abrw_pvl4_apps_vga4_lsc_tch_large.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pvp4_apps_vga4_prt_tch[]; }

namespace AknLayoutScalable_Abrw_pvl4_apps_vga4_lsc_tch_Large
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pvp4_apps_vga4_prt_tch + 0x000ad311 };

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
0xfc29,	// (0x000acf3a) Screen

0xfc35,	// (0x000acf46) application_window

0xfc89,	// (0x000acf9a) area_bottom_pane_ParamLimits

0xfc89,	// (0x000acf9a) area_bottom_pane

0xfcc2,	// (0x000acfd3) area_top_pane_ParamLimits

0xfcc2,	// (0x000acfd3) area_top_pane

0x9508,	// (0x000b6819) call_video_uplink_pane_ParamLimits

0x9508,	// (0x000b6819) call_video_uplink_pane

0xfd50,	// (0x000ad061) main_pane_ParamLimits

0xfd50,	// (0x000ad061) main_pane

0xc866,	// (0x000b9b77) context_pane

0x3907,	// (0x000b0c18) navi_pane

0x3937,	// (0x000b0c48) popup_cale_events_window_ParamLimits

0x3937,	// (0x000b0c48) popup_cale_events_window

0xc879,	// (0x000b9b8a) popup_mup_playback_window

0x394f,	// (0x000b0c60) signal_pane

0xa87a,	// (0x000b7b8b) main_browser_pane

0xaa30,	// (0x000b7d41) main_burst_pane

0x3609,	// (0x000b091a) main_calc_pane

0xc809,	// (0x000b9b1a) main_cale_day_pane

0x03a0,	// (0x000ad6b1) main_cale_month_pane

0xc809,	// (0x000b9b1a) main_cale_week_pane

0xaa30,	// (0x000b7d41) main_call_pane

0x9947,	// (0x000b6c58) main_call_poc_pane

0xaa30,	// (0x000b7d41) main_camera_pane

0xaa30,	// (0x000b7d41) main_chi_dic_pane

0xb208,	// (0x000b8519) main_clock_pane

0x9947,	// (0x000b6c58) main_fmradio_pane

0xaa30,	// (0x000b7d41) main_graph_messa_pane

0x9947,	// (0x000b6c58) main_help_pane

0xa87a,	// (0x000b7b8b) main_im_pane

0x9ba2,	// (0x000b6eb3) main_image_pane_ParamLimits

0x9ba2,	// (0x000b6eb3) main_image_pane

0x9947,	// (0x000b6c58) main_location2_pane

0xaa30,	// (0x000b7d41) main_location_pane

0x9ba2,	// (0x000b6eb3) main_messa_pane

0x9947,	// (0x000b6c58) main_mp2_pane

0xaa30,	// (0x000b7d41) main_mp_pane

0x9947,	// (0x000b6c58) main_msg_pane

0x9947,	// (0x000b6c58) main_mup_eq_pane

0x9947,	// (0x000b6c58) main_mup_pane

0xa87a,	// (0x000b7b8b) main_notes_pane

0x9947,	// (0x000b6c58) main_pec_pane

0x9947,	// (0x000b6c58) main_phob_pane

0x9947,	// (0x000b6c58) main_pinb_pane

0x9947,	// (0x000b6c58) main_postcard_pane

0x9947,	// (0x000b6c58) main_qdial_pane

0xaa30,	// (0x000b7d41) main_skin_pane

0x9947,	// (0x000b6c58) main_smil2_pane

0xaa30,	// (0x000b7d41) main_smil_pane

0xaa30,	// (0x000b7d41) main_video_pane

0xaa30,	// (0x000b7d41) main_video_tele_pane

0x9ba2,	// (0x000b6eb3) main_viewer_pane_ParamLimits

0x9ba2,	// (0x000b6eb3) main_viewer_pane

0xaa30,	// (0x000b7d41) main_vorec_pane

0x365f,	// (0x000b0970) popup_blid_sat_info_window_ParamLimits

0x365f,	// (0x000b0970) popup_blid_sat_info_window

0x36c3,	// (0x000b09d4) popup_dyc_status_message_window_ParamLimits

0x36c3,	// (0x000b09d4) popup_dyc_status_message_window

0x36dd,	// (0x000b09ee) popup_grid_large_graphic_window_ParamLimits

0x36dd,	// (0x000b09ee) popup_grid_large_graphic_window

0x379f,	// (0x000b0ab0) popup_loc_request_window_ParamLimits

0x379f,	// (0x000b0ab0) popup_loc_request_window

0x38db,	// (0x000b0bec) popup_wml_address_window_ParamLimits

0x38db,	// (0x000b0bec) popup_wml_address_window

0x3447,	// (0x000b0758) call_muted_g1

0x30db,	// (0x000b03ec) popup_call_audio_conf_window_ParamLimits

0x30db,	// (0x000b03ec) popup_call_audio_conf_window

0x3457,	// (0x000b0768) popup_call_audio_first_window_ParamLimits

0x3457,	// (0x000b0768) popup_call_audio_first_window

0x34cd,	// (0x000b07de) popup_call_audio_in_window_ParamLimits

0x34cd,	// (0x000b07de) popup_call_audio_in_window

0x3509,	// (0x000b081a) popup_call_audio_out_window_ParamLimits

0x3509,	// (0x000b081a) popup_call_audio_out_window

0x3543,	// (0x000b0854) popup_call_audio_second_window_ParamLimits

0x3543,	// (0x000b0854) popup_call_audio_second_window

0x3599,	// (0x000b08aa) popup_call_audio_wait_window_ParamLimits

0x3599,	// (0x000b08aa) popup_call_audio_wait_window

0x35ce,	// (0x000b08df) popup_number_entry_window_ParamLimits

0x35ce,	// (0x000b08df) popup_number_entry_window

0x9534,	// (0x000b6845) bg_popup_call_pane_cp05_ParamLimits

0x9534,	// (0x000b6845) bg_popup_call_pane_cp05

0x9554,	// (0x000b6865) popup_number_entry_window_t1

0x9567,	// (0x000b6878) popup_number_entry_window_t2

0x9579,	// (0x000b688a) popup_number_entry_window_t3

0x0003,

0xf0ca,	// (0x000bc3db) popup_number_entry_window_t

0x958b,	// (0x000b689c) text_title_cp2

0x959e,	// (0x000b68af) bg_popup_call_pane_cp_ParamLimits

0x959e,	// (0x000b68af) bg_popup_call_pane_cp

0x95ac,	// (0x000b68bd) call_thumbnail_pane

0x95b4,	// (0x000b68c5) popup_call_audio_in_window_g1_ParamLimits

0x95b4,	// (0x000b68c5) popup_call_audio_in_window_g1

0x95c0,	// (0x000b68d1) popup_call_audio_in_window_g2_ParamLimits

0x95c0,	// (0x000b68d1) popup_call_audio_in_window_g2

0x95cc,	// (0x000b68dd) popup_call_audio_in_window_g3_ParamLimits

0x95cc,	// (0x000b68dd) popup_call_audio_in_window_g3

0x0002,

0xf0d3,	// (0x000bc3e4) popup_call_audio_in_window_g_ParamLimits

0xf0d3,	// (0x000bc3e4) popup_call_audio_in_window_g

0x95d8,	// (0x000b68e9) popup_call_audio_in_window_t1_ParamLimits

0x95d8,	// (0x000b68e9) popup_call_audio_in_window_t1

0x95f4,	// (0x000b6905) popup_call_audio_in_window_t2_ParamLimits

0x95f4,	// (0x000b6905) popup_call_audio_in_window_t2

0x9610,	// (0x000b6921) popup_call_audio_in_window_t3_ParamLimits

0x9610,	// (0x000b6921) popup_call_audio_in_window_t3

0x0002,

0xf0da,	// (0x000bc3eb) popup_call_audio_in_window_t_ParamLimits

0xf0da,	// (0x000bc3eb) popup_call_audio_in_window_t

0x959e,	// (0x000b68af) bg_popup_call_pane_cp01_ParamLimits

0x959e,	// (0x000b68af) bg_popup_call_pane_cp01

0x95ac,	// (0x000b68bd) call_thumbnail_pane_cp02

0x9623,	// (0x000b6934) call_type_pane_cp022

0x962b,	// (0x000b693c) popup_call_audio_out_window_g1_ParamLimits

0x962b,	// (0x000b693c) popup_call_audio_out_window_g1

0x963d,	// (0x000b694e) popup_call_audio_out_window_g2_ParamLimits

0x963d,	// (0x000b694e) popup_call_audio_out_window_g2

0x9649,	// (0x000b695a) popup_call_audio_out_window_g3_ParamLimits

0x9649,	// (0x000b695a) popup_call_audio_out_window_g3

0x0002,

0xf0e1,	// (0x000bc3f2) popup_call_audio_out_window_g_ParamLimits

0xf0e1,	// (0x000bc3f2) popup_call_audio_out_window_g

0x965b,	// (0x000b696c) popup_call_audio_out_window_t1_ParamLimits

0x965b,	// (0x000b696c) popup_call_audio_out_window_t1

0x9673,	// (0x000b6984) popup_call_audio_out_window_t2_ParamLimits

0x9673,	// (0x000b6984) popup_call_audio_out_window_t2

0x0001,

0xf0e8,	// (0x000bc3f9) popup_call_audio_out_window_t_ParamLimits

0xf0e8,	// (0x000bc3f9) popup_call_audio_out_window_t

0x9688,	// (0x000b6999) bg_popup_call_pane_ParamLimits

0x9688,	// (0x000b6999) bg_popup_call_pane

0xff0f,	// (0x000ad220) call_thumbnail_pane_cp_ParamLimits

0xff0f,	// (0x000ad220) call_thumbnail_pane_cp

0x970c,	// (0x000b6a1d) call_type_pane_cp01_ParamLimits

0x970c,	// (0x000b6a1d) call_type_pane_cp01

0x9750,	// (0x000b6a61) popup_call_audio_first_window_g1_ParamLimits

0x9750,	// (0x000b6a61) popup_call_audio_first_window_g1

0x979c,	// (0x000b6aad) popup_call_audio_first_window_g2_ParamLimits

0x979c,	// (0x000b6aad) popup_call_audio_first_window_g2

0x0001,

0xf0ed,	// (0x000bc3fe) popup_call_audio_first_window_g_ParamLimits

0xf0ed,	// (0x000bc3fe) popup_call_audio_first_window_g

0x97e0,	// (0x000b6af1) popup_call_audio_first_window_t1_ParamLimits

0x97e0,	// (0x000b6af1) popup_call_audio_first_window_t1

0x988c,	// (0x000b6b9d) popup_call_audio_first_window_t4_ParamLimits

0x988c,	// (0x000b6b9d) popup_call_audio_first_window_t4

0x9918,	// (0x000b6c29) popup_call_audio_first_window_t5_ParamLimits

0x9918,	// (0x000b6c29) popup_call_audio_first_window_t5

0x0002,

0xf0f2,	// (0x000bc403) popup_call_audio_first_window_t_ParamLimits

0xf0f2,	// (0x000bc403) popup_call_audio_first_window_t

0x9947,	// (0x000b6c58) bg_popup_call_pane_cp02

0x9951,	// (0x000b6c62) call_type_pane_cp023

0x9959,	// (0x000b6c6a) popup_call_audio_wait_window_g1

0x9961,	// (0x000b6c72) popup_call_audio_wait_window_g2

0x0001,

0xf0f9,	// (0x000bc40a) popup_call_audio_wait_window_g

0x9969,	// (0x000b6c7a) popup_call_audio_wait_window_t3

0x9977,	// (0x000b6c88) bg_popup_call_pane_cp03_ParamLimits

0x9977,	// (0x000b6c88) bg_popup_call_pane_cp03

0x99d7,	// (0x000b6ce8) call_thumbnail_pane_cp011_ParamLimits

0x99d7,	// (0x000b6ce8) call_thumbnail_pane_cp011

0x99e3,	// (0x000b6cf4) call_type_pane_cp034_ParamLimits

0x99e3,	// (0x000b6cf4) call_type_pane_cp034

0x9a1f,	// (0x000b6d30) popup_call_audio_second_window_g1_ParamLimits

0x9a1f,	// (0x000b6d30) popup_call_audio_second_window_g1

0x9a5b,	// (0x000b6d6c) popup_call_audio_second_window_g2_ParamLimits

0x9a5b,	// (0x000b6d6c) popup_call_audio_second_window_g2

0x0001,

0xf0fe,	// (0x000bc40f) popup_call_audio_second_window_g_ParamLimits

0xf0fe,	// (0x000bc40f) popup_call_audio_second_window_g

0x9a97,	// (0x000b6da8) popup_call_audio_second_window_t1_ParamLimits

0x9a97,	// (0x000b6da8) popup_call_audio_second_window_t1

0x9b18,	// (0x000b6e29) popup_call_audio_second_window_t2_ParamLimits

0x9b18,	// (0x000b6e29) popup_call_audio_second_window_t2

0x9b4e,	// (0x000b6e5f) popup_call_audio_second_window_t3_ParamLimits

0x9b4e,	// (0x000b6e5f) popup_call_audio_second_window_t3

0x0002,

0xf103,	// (0x000bc414) popup_call_audio_second_window_t_ParamLimits

0xf103,	// (0x000bc414) popup_call_audio_second_window_t

0x9947,	// (0x000b6c58) bg_popup_call_pane_cp04

0x9b84,	// (0x000b6e95) list_conf_pane

0x9b8c,	// (0x000b6e9d) popup_call_audio_conf_window_t1

0x9b9a,	// (0x000b6eab) call_thumbnail_pane_g1

0x9ba2,	// (0x000b6eb3) bg_pinb_pane_ParamLimits

0x9ba2,	// (0x000b6eb3) bg_pinb_pane

0x9bb0,	// (0x000b6ec1) find_pinb_pane

0x9bb9,	// (0x000b6eca) listscroll_pinb_pane_ParamLimits

0x9bb9,	// (0x000b6eca) listscroll_pinb_pane

0x9bc8,	// (0x000b6ed9) pinb_bg_pane_g1

0xff33,	// (0x000ad244) pinb_bg_pane_g2

0xff3f,	// (0x000ad250) pinb_bg_pane_g3

0xff4b,	// (0x000ad25c) pinb_bg_pane_g4

0xff57,	// (0x000ad268) pinb_bg_pane_g5

0xff63,	// (0x000ad274) pinb_bg_pane_g6

0xff6e,	// (0x000ad27f) pinb_bg_pane_g7

0xff79,	// (0x000ad28a) pinb_bg_pane_g8

0xff84,	// (0x000ad295) pinb_bg_pane_g9

0xff8e,	// (0x000ad29f) pinb_bg_pane_g10

0x0009,

0xf10a,	// (0x000bc41b) pinb_bg_pane_g

0xffab,	// (0x000ad2bc) grid_pinb_pane

0xffb6,	// (0x000ad2c7) list_pinb_pane

0xffc1,	// (0x000ad2d2) scroll_pane_cp01_ParamLimits

0xffc1,	// (0x000ad2d2) scroll_pane_cp01

0x9bd2,	// (0x000b6ee3) find_pinb_pane_g1_ParamLimits

0x9bd2,	// (0x000b6ee3) find_pinb_pane_g1

0x9bea,	// (0x000b6efb) find_pinb_pane_t1

0x9bfc,	// (0x000b6f0d) find_pinb_pane_t2

0x0001,

0xf124,	// (0x000bc435) find_pinb_pane_t

0x9c11,	// (0x000b6f22) input_focus_pane_cp01_ParamLimits

0x9c11,	// (0x000b6f22) input_focus_pane_cp01

0xffd3,	// (0x000ad2e4) cell_pinb_pane_ParamLimits

0xffd3,	// (0x000ad2e4) cell_pinb_pane

0xfff5,	// (0x000ad306) cell_pinb_pane_g1_ParamLimits

0xfff5,	// (0x000ad306) cell_pinb_pane_g1

0x000a,	// (0x000ad31b) cell_pinb_pane_g2_ParamLimits

0x000a,	// (0x000ad31b) cell_pinb_pane_g2

0xa830,	// (0x000b7b41) cell_pinb_pane_g3_ParamLimits

0xa830,	// (0x000b7b41) cell_pinb_pane_g3

0x0002,

0xf129,	// (0x000bc43a) cell_pinb_pane_g_ParamLimits

0xf129,	// (0x000bc43a) cell_pinb_pane_g

0x9947,	// (0x000b6c58) grid_highlight_pane_cp01

0x0016,	// (0x000ad327) list_pinb_item_pane_ParamLimits

0x0016,	// (0x000ad327) list_pinb_item_pane

0x9947,	// (0x000b6c58) list_highlight_pane_cp02

0x0028,	// (0x000ad339) list_pinb_item_pane_g1_ParamLimits

0x0028,	// (0x000ad339) list_pinb_item_pane_g1

0x0035,	// (0x000ad346) list_pinb_item_pane_g2_ParamLimits

0x0035,	// (0x000ad346) list_pinb_item_pane_g2

0x0041,	// (0x000ad352) list_pinb_item_pane_g3_ParamLimits

0x0041,	// (0x000ad352) list_pinb_item_pane_g3

0x0052,	// (0x000ad363) list_pinb_item_pane_g4_ParamLimits

0x0052,	// (0x000ad363) list_pinb_item_pane_g4

0x0003,

0xf130,	// (0x000bc441) list_pinb_item_pane_g_ParamLimits

0xf130,	// (0x000bc441) list_pinb_item_pane_g

0x005e,	// (0x000ad36f) list_pinb_item_pane_t1_ParamLimits

0x005e,	// (0x000ad36f) list_pinb_item_pane_t1

0x0093,	// (0x000ad3a4) calc_display_pane

0x00bb,	// (0x000ad3cc) calc_paper_pane

0x00de,	// (0x000ad3ef) grid_calc_pane

0x9947,	// (0x000b6c58) bg_list_pane_cp01

0x010c,	// (0x000ad41d) clock_g1

0x0114,	// (0x000ad425) clock_g2

0x0001,

0xf139,	// (0x000bc44a) clock_g

0x011c,	// (0x000ad42d) clock_t1_ParamLimits

0x011c,	// (0x000ad42d) clock_t1

0x0131,	// (0x000ad442) clock_t2_ParamLimits

0x0131,	// (0x000ad442) clock_t2

0x0143,	// (0x000ad454) clock_t3_ParamLimits

0x0143,	// (0x000ad454) clock_t3

0x0155,	// (0x000ad466) clock_t4_ParamLimits

0x0155,	// (0x000ad466) clock_t4

0x0167,	// (0x000ad478) clock_t5_ParamLimits

0x0167,	// (0x000ad478) clock_t5

0x017c,	// (0x000ad48d) clock_t6_ParamLimits

0x017c,	// (0x000ad48d) clock_t6

0x018e,	// (0x000ad49f) clock_t7_ParamLimits

0x018e,	// (0x000ad49f) clock_t7

0x01a0,	// (0x000ad4b1) clock_t8_ParamLimits

0x01a0,	// (0x000ad4b1) clock_t8

0x01b4,	// (0x000ad4c5) clock_t9_ParamLimits

0x01b4,	// (0x000ad4c5) clock_t9

0x0008,

0xf13e,	// (0x000bc44f) clock_t_ParamLimits

0xf13e,	// (0x000bc44f) clock_t

0xa83c,	// (0x000b7b4d) popup_clock_analogue_window_cp02

0xa83c,	// (0x000b7b4d) popup_clock_digital_window_cp01

0xa844,	// (0x000b7b55) listscroll_help_pane

0x9947,	// (0x000b6c58) phob_pre_status_pane

0xa84e,	// (0x000b7b5f) grid_qdial_pane

0x9ba2,	// (0x000b6eb3) listscroll_mce_pane

0x9ba2,	// (0x000b6eb3) bg_notes_pane

0xa858,	// (0x000b7b69) list_notes_pane

0x01ca,	// (0x000ad4db) scroll_pane_cp06

0xa866,	// (0x000b7b77) bg_calc_paper_pane

0x9c2f,	// (0x000b6f40) list_calc_pane

0xa87a,	// (0x000b7b8b) bg_calc_display_pane

0x01de,	// (0x000ad4ef) calc_display_pane_t1

0x01f0,	// (0x000ad501) calc_display_pane_t2

0x9c49,	// (0x000b6f5a) calc_display_pane_t3

0x0002,

0xf151,	// (0x000bc462) calc_display_pane_t

0x0202,	// (0x000ad513) cell_calc_pane_ParamLimits

0x0202,	// (0x000ad513) cell_calc_pane

0xa886,	// (0x000b7b97) bg_calc_paper_pane_g1

0xa892,	// (0x000b7ba3) bg_calc_paper_pane_g2

0xa89e,	// (0x000b7baf) bg_calc_paper_pane_g3

0xa8aa,	// (0x000b7bbb) bg_calc_paper_pane_g4

0xa8b6,	// (0x000b7bc7) bg_calc_paper_pane_g5

0x023f,	// (0x000ad550) bg_calc_paper_pane_g6

0x0252,	// (0x000ad563) bg_calc_paper_pane_g7

0x0265,	// (0x000ad576) bg_calc_paper_pane_g8

0x0007,

0xf158,	// (0x000bc469) bg_calc_paper_pane_g

0x0276,	// (0x000ad587) calc_bg_paper_pane_g9

0x0287,	// (0x000ad598) list_calc_item_pane_ParamLimits

0x0287,	// (0x000ad598) list_calc_item_pane

0xa8c2,	// (0x000b7bd3) list_calc_item_pane_g1

0x9c5b,	// (0x000b6f6c) list_calc_item_pane_t1_ParamLimits

0x9c5b,	// (0x000b6f6c) list_calc_item_pane_t1

0x029f,	// (0x000ad5b0) list_calc_item_pane_t2_ParamLimits

0x029f,	// (0x000ad5b0) list_calc_item_pane_t2

0x0001,

0xf169,	// (0x000bc47a) list_calc_item_pane_t_ParamLimits

0xf169,	// (0x000bc47a) list_calc_item_pane_t

0xa8cf,	// (0x000b7be0) cell_calc_pane_g1

0xa8d9,	// (0x000b7bea) grid_highlight_pane_cp02

0xa8fb,	// (0x000b7c0c) bg_calc_display_pane_g1

0x9c6d,	// (0x000b6f7e) bg_calc_display_pane_g2

0xa904,	// (0x000b7c15) bg_calc_display_pane_g3

0x0002,

0xf173,	// (0x000bc484) bg_calc_display_pane_g

0x02d1,	// (0x000ad5e2) cell_qdial_pane_ParamLimits

0x02d1,	// (0x000ad5e2) cell_qdial_pane

0x02e5,	// (0x000ad5f6) cell_qdial_pane_g1_ParamLimits

0x02e5,	// (0x000ad5f6) cell_qdial_pane_g1

0x02fb,	// (0x000ad60c) cell_qdial_pane_g2_ParamLimits

0x02fb,	// (0x000ad60c) cell_qdial_pane_g2

0xa90d,	// (0x000b7c1e) cell_qdial_pane_g3_ParamLimits

0xa90d,	// (0x000b7c1e) cell_qdial_pane_g3

0x0003,

0xf17a,	// (0x000bc48b) cell_qdial_pane_g_ParamLimits

0xf17a,	// (0x000bc48b) cell_qdial_pane_g

0x0322,	// (0x000ad633) cell_qdial_pane_t1_ParamLimits

0x0322,	// (0x000ad633) cell_qdial_pane_t1

0x033a,	// (0x000ad64b) cell_qdial_pane_t2_ParamLimits

0x033a,	// (0x000ad64b) cell_qdial_pane_t2

0x034d,	// (0x000ad65e) cell_qdial_pane_t3_ParamLimits

0x034d,	// (0x000ad65e) cell_qdial_pane_t3

0x0002,

0xf183,	// (0x000bc494) cell_qdial_pane_t_ParamLimits

0xf183,	// (0x000bc494) cell_qdial_pane_t

0x9947,	// (0x000b6c58) grid_highlight_pane_cp04

0xa919,	// (0x000b7c2a) thumbnail_qdial_pane_ParamLimits

0xa919,	// (0x000b7c2a) thumbnail_qdial_pane

0xa975,	// (0x000b7c86) list_help_pane

0xa97e,	// (0x000b7c8f) scroll_pane_cp02

0x0360,	// (0x000ad671) help_list_pane_t1_ParamLimits

0x0360,	// (0x000ad671) help_list_pane_t1

0x9c77,	// (0x000b6f88) bg_notes_pane_g2

0x9c7f,	// (0x000b6f90) bg_notes_pane_g3

0x9c87,	// (0x000b6f98) notes_bg_pane_g1

0x9c8f,	// (0x000b6fa0) notes_bg_pane_g4

0x9c97,	// (0x000b6fa8) notes_bg_pane_g5

0x9c9f,	// (0x000b6fb0) notes_bg_pane_g6

0x9ca7,	// (0x000b6fb8) notes_bg_pane_g7

0x9caf,	// (0x000b6fc0) notes_bg_pane_g8

0x9cb7,	// (0x000b6fc8) notes_bg_pane_g9

0x0006,

0xf1a1,	// (0x000bc4b2) notes_bg_pane_g

0x037e,	// (0x000ad68f) list_notes_text_pane_ParamLimits

0x037e,	// (0x000ad68f) list_notes_text_pane

0xa987,	// (0x000b7c98) list_notes_text_pane_g1

0x0392,	// (0x000ad6a3) list_notes_text_pane_t1

0x03a0,	// (0x000ad6b1) listscroll_cale_week_pane

0x03d6,	// (0x000ad6e7) bg_cale_heading_pane

0x03ff,	// (0x000ad710) bg_cale_pane_cp01

0x0421,	// (0x000ad732) cale_week_corner_pane

0x0440,	// (0x000ad751) cale_week_day_heading_pane

0x046e,	// (0x000ad77f) cale_week_scroll_pane_g1

0x0492,	// (0x000ad7a3) cale_week_scroll_pane_g2

0x04aa,	// (0x000ad7bb) cale_week_scroll_pane_g3

0x04c2,	// (0x000ad7d3) cale_week_scroll_pane_g4

0x04de,	// (0x000ad7ef) cale_week_scroll_pane_g5

0x04fe,	// (0x000ad80f) cale_week_scroll_pane_g6

0x051e,	// (0x000ad82f) cale_week_scroll_pane_g7

0x0542,	// (0x000ad853) cale_week_scroll_pane_g8

0x0566,	// (0x000ad877) cale_week_scroll_pane_g9

0x0583,	// (0x000ad894) cale_week_scroll_pane_g10

0x05a0,	// (0x000ad8b1) cale_week_scroll_pane_g11

0x05bd,	// (0x000ad8ce) cale_week_scroll_pane_g12

0x05da,	// (0x000ad8eb) cale_week_scroll_pane_g13

0x05f7,	// (0x000ad908) cale_week_scroll_pane_g14

0x0620,	// (0x000ad931) cale_week_scroll_pane_g15

0x000f,

0xf1b0,	// (0x000bc4c1) cale_week_scroll_pane_g

0x066d,	// (0x000ad97e) cale_week_time_pane

0x0691,	// (0x000ad9a2) grid_cale_week_pane

0xa9b3,	// (0x000b7cc4) scroll_pane_cp08

0x06c8,	// (0x000ad9d9) cell_cale_week_pane_ParamLimits

0x06c8,	// (0x000ad9d9) cell_cale_week_pane

0x0758,	// (0x000ada69) cale_week_day_heading_pane_t1

0x07a2,	// (0x000adab3) cale_week_day_heading_pane_t2

0x07f1,	// (0x000adb02) cale_week_day_heading_pane_t3

0x0840,	// (0x000adb51) cale_week_day_heading_pane_t4

0x088f,	// (0x000adba0) cale_week_day_heading_pane_t5

0x08e2,	// (0x000adbf3) cale_week_day_heading_pane_t6

0x0939,	// (0x000adc4a) cale_week_day_heading_pane_t7

0x0006,

0xf1d1,	// (0x000bc4e2) cale_week_day_heading_pane_t

0xa9d5,	// (0x000b7ce6) bg_cale_side_pane

0x0983,	// (0x000adc94) cale_week_time_pane_t1

0x09bd,	// (0x000adcce) cale_week_time_pane_t2

0x09f7,	// (0x000add08) cale_week_time_pane_t3

0x0a31,	// (0x000add42) cale_week_time_pane_t4

0x0a6b,	// (0x000add7c) cale_week_time_pane_t5

0x0aa5,	// (0x000addb6) cale_week_time_pane_t6

0x0adf,	// (0x000addf0) cale_week_time_pane_t7

0x0b19,	// (0x000ade2a) cale_week_time_pane_t8

0x0007,

0xf1e0,	// (0x000bc4f1) cale_week_time_pane_t

0x0b59,	// (0x000ade6a) cell_cale_week_pane_g2

0x0b78,	// (0x000ade89) cell_cale_week_pane_g3_ParamLimits

0x0b78,	// (0x000ade89) cell_cale_week_pane_g3

0xa9e3,	// (0x000b7cf4) grid_highlight_pane_cp07

0xa9eb,	// (0x000b7cfc) listscroll_gms_pane

0xa9f5,	// (0x000b7d06) grid_gms_pane

0xa9fe,	// (0x000b7d0f) listscroll_gms_pane_g1

0xaa06,	// (0x000b7d17) listscroll_gms_pane_g2

0x0001,

0xf1f1,	// (0x000bc502) listscroll_gms_pane_g

0x0b90,	// (0x000adea1) scroll_pane_cp010

0x0b9b,	// (0x000adeac) cell_gms_pane_ParamLimits

0x0b9b,	// (0x000adeac) cell_gms_pane

0x0bb5,	// (0x000adec6) cell_gms_pane_g1

0xaa0e,	// (0x000b7d1f) cell_gms_pane_g2

0xaa16,	// (0x000b7d27) cell_gms_pane_g3

0xaa1f,	// (0x000b7d30) cell_gms_pane_g4

0x0003,

0xf1f6,	// (0x000bc507) cell_gms_pane_g

0xaa28,	// (0x000b7d39) grid_highlight_pane_cp09

0x33ef,	// (0x000b0700) phob_pre_status_pane_g1

0x33f7,	// (0x000b0708) phob_pre_status_pane_g2

0x33ff,	// (0x000b0710) phob_pre_status_pane_g3

0x3407,	// (0x000b0718) phob_pre_status_pane_g4

0x0004,

0xf5e1,	// (0x000bc8f2) phob_pre_status_pane_g

0x3417,	// (0x000b0728) phob_pre_status_pane_t1

0x3427,	// (0x000b0738) phob_pre_status_pane_t2

0x3437,	// (0x000b0748) phob_pre_status_pane_t3

0x0002,

0xf5ec,	// (0x000bc8fd) phob_pre_status_pane_t

0xaa30,	// (0x000b7d41) bg_list_pane_cp05

0x0bc5,	// (0x000aded6) grid_vorec_pane

0x0bd1,	// (0x000adee2) vorec_t1

0x0bdf,	// (0x000adef0) vorec_t2

0x0bed,	// (0x000adefe) vorec_t3

0x0bfb,	// (0x000adf0c) vorec_t4

0x94af,	// (0x000b67c0) vorec_t5

0x94bd,	// (0x000b67ce) vorec_t6

0x0004,

0xf1ff,	// (0x000bc510) vorec_t

0x94cb,	// (0x000b67dc) wait_bar_pane_cp01

0x0c17,	// (0x000adf28) cell_vorec_pane_ParamLimits

0x0c17,	// (0x000adf28) cell_vorec_pane

0x9cbf,	// (0x000b6fd0) cell_vorec_pane_g1

0x9947,	// (0x000b6c58) grid_highlight_pane_cp05

0x0c42,	// (0x000adf53) cams_zoom_pane

0x0c51,	// (0x000adf62) image_vga_pane

0x0c6b,	// (0x000adf7c) main_camera_pane_g1

0x0c7d,	// (0x000adf8e) main_camera_pane_g2

0x0c8d,	// (0x000adf9e) main_camera_pane_g3

0x0ca1,	// (0x000adfb2) main_camera_pane_g4

0x0cb5,	// (0x000adfc6) main_camera_pane_g5

0x0cc9,	// (0x000adfda) main_camera_pane_g6

0x0cdd,	// (0x000adfee) main_camera_pane_g7

0x0007,

0xf20a,	// (0x000bc51b) main_camera_pane_g

0x0cf1,	// (0x000ae002) main_camera_pane_t1

0x0d07,	// (0x000ae018) main_camera_pane_t2

0x0001,

0xf21b,	// (0x000bc52c) main_camera_pane_t

0x0d45,	// (0x000ae056) cams_zoom_pane_cp_ParamLimits

0x0d45,	// (0x000ae056) cams_zoom_pane_cp

0x0d6d,	// (0x000ae07e) image_cif_pane_ParamLimits

0x0d6d,	// (0x000ae07e) image_cif_pane

0x0da8,	// (0x000ae0b9) image_subqcif_pane

0x0db2,	// (0x000ae0c3) main_video_pane_g1_ParamLimits

0x0db2,	// (0x000ae0c3) main_video_pane_g1

0x0dd6,	// (0x000ae0e7) main_video_pane_g2_ParamLimits

0x0dd6,	// (0x000ae0e7) main_video_pane_g2

0x0e0c,	// (0x000ae11d) main_video_pane_g3_ParamLimits

0x0e0c,	// (0x000ae11d) main_video_pane_g3

0x0e3a,	// (0x000ae14b) main_video_pane_g4_ParamLimits

0x0e3a,	// (0x000ae14b) main_video_pane_g4

0x0e68,	// (0x000ae179) main_video_pane_g5_ParamLimits

0x0e68,	// (0x000ae179) main_video_pane_g5

0xaa44,	// (0x000b7d55) main_video_pane_g6_ParamLimits

0xaa44,	// (0x000b7d55) main_video_pane_g6

0x0006,

0xf220,	// (0x000bc531) main_video_pane_g_ParamLimits

0xf220,	// (0x000bc531) main_video_pane_g

0x0e91,	// (0x000ae1a2) main_video_pane_t1_ParamLimits

0x0e91,	// (0x000ae1a2) main_video_pane_t1

0xaa5e,	// (0x000b7d6f) cams_zoom_pane_g1

0xaa67,	// (0x000b7d78) cams_zoom_pane_g2

0xaa70,	// (0x000b7d81) cams_zoom_pane_g3

0xaa79,	// (0x000b7d8a) cams_zoom_pane_g4

0x0003,

0xf22f,	// (0x000bc540) cams_zoom_pane_g

0x0eee,	// (0x000ae1ff) grid_cams_pane

0x0f08,	// (0x000ae219) linegrid_cams_pane

0x0f1a,	// (0x000ae22b) cell_cams_pane_ParamLimits

0x0f1a,	// (0x000ae22b) cell_cams_pane

0xaa82,	// (0x000b7d93) cams_burst_image_pane

0xaa8a,	// (0x000b7d9b) cell_cams_pane_g1

0x9947,	// (0x000b6c58) grid_highlight_pane_cp03

0xa8cf,	// (0x000b7be0) mp_bg_pane_g1

0x9947,	// (0x000b6c58) bg_list_pane_cp03

0xc72c,	// (0x000b9a3d) bg_mp_pane

0xc734,	// (0x000b9a45) grid_mp_pane

0xc73c,	// (0x000b9a4d) media_player_g1

0xc746,	// (0x000b9a57) media_player_t1

0xc754,	// (0x000b9a65) media_player_t2

0xc762,	// (0x000b9a73) media_player_t3

0xc770,	// (0x000b9a81) media_player_t4

0xc77e,	// (0x000b9a8f) media_player_t5

0xc78c,	// (0x000b9a9d) media_player_t6

0xc79a,	// (0x000b9aab) media_player_t7

0x0006,

0xf5cb,	// (0x000bc8dc) media_player_t

0xc7a8,	// (0x000b9ab9) wait_bar_pane_cp02

0xf5b0,	// (0x000bc8c1) main_usb_pane_t

0x33e6,	// (0x000b06f7) cell_mp_pane

0xa8cf,	// (0x000b7be0) cell_mp_pane_g1

0x9947,	// (0x000b6c58) grid_highlight_pane_cp06

0xaa92,	// (0x000b7da3) grid_skin_colour_pane

0xaa9a,	// (0x000b7dab) list_highlight_pane_cp03

0x1053,	// (0x000ae364) skin_g1

0xaaa2,	// (0x000b7db3) skin_t1

0xaab1,	// (0x000b7dc2) skin_t2

0x0001,

0xf264,	// (0x000bc575) skin_t

0x105b,	// (0x000ae36c) cell_skin_colour_pane_ParamLimits

0x105b,	// (0x000ae36c) cell_skin_colour_pane

0xaabf,	// (0x000b7dd0) cell_skin_colour_pane_g1

0x10ce,	// (0x000ae3df) call_video_g1_ParamLimits

0x10ce,	// (0x000ae3df) call_video_g1

0x10ea,	// (0x000ae3fb) call_video_g2_ParamLimits

0x10ea,	// (0x000ae3fb) call_video_g2

0x0001,

0xf269,	// (0x000bc57a) call_video_g_ParamLimits

0xf269,	// (0x000bc57a) call_video_g

0x112f,	// (0x000ae440) call_video_uplink_pane_cp1_ParamLimits

0x112f,	// (0x000ae440) call_video_uplink_pane_cp1

0xaad1,	// (0x000b7de2) call_video_uplink_pane_cp2

0x11d0,	// (0x000ae4e1) video_down_crop_pane_ParamLimits

0x11d0,	// (0x000ae4e1) video_down_crop_pane

0x12b9,	// (0x000ae5ca) video_down_pane_ParamLimits

0x12b9,	// (0x000ae5ca) video_down_pane

0xaad9,	// (0x000b7dea) video_down_subqcif_pane_ParamLimits

0xaad9,	// (0x000b7dea) video_down_subqcif_pane

0xaaf3,	// (0x000b7e04) video_down_subqcif_pane_cp_ParamLimits

0xaaf3,	// (0x000b7e04) video_down_subqcif_pane_cp

0xab1b,	// (0x000b7e2c) im_reading_pane_ParamLimits

0xab1b,	// (0x000b7e2c) im_reading_pane

0x13c2,	// (0x000ae6d3) im_writing_pane_ParamLimits

0x13c2,	// (0x000ae6d3) im_writing_pane

0x13de,	// (0x000ae6ef) im_reading_pane_t1

0xab35,	// (0x000b7e46) list_im_pane

0xab46,	// (0x000b7e57) scroll_pane_cp07

0x141a,	// (0x000ae72b) im_writing_pane_t1_ParamLimits

0x141a,	// (0x000ae72b) im_writing_pane_t1

0xab5f,	// (0x000b7e70) im_writing_pane_t2_ParamLimits

0xab5f,	// (0x000b7e70) im_writing_pane_t2

0x0001,

0xf273,	// (0x000bc584) im_writing_pane_t_ParamLimits

0xf273,	// (0x000bc584) im_writing_pane_t

0x9947,	// (0x000b6c58) input_focus_pane_cp04

0x9947,	// (0x000b6c58) input_focus_pane_cp05

0x142f,	// (0x000ae740) list_im_single_pane_ParamLimits

0x142f,	// (0x000ae740) list_im_single_pane

0x1445,	// (0x000ae756) list_single_im_pane_t1

0x33a6,	// (0x000b06b7) blid_accuracy_pane

0x33ae,	// (0x000b06bf) blid_compass_pane

0x33b8,	// (0x000b06c9) main_location_t1

0x33c8,	// (0x000b06d9) main_location_t2

0x33d8,	// (0x000b06e9) main_location_t3

0x0002,

0xf5da,	// (0x000bc8eb) main_location_t

0x9947,	// (0x000b6c58) aid_levels_location

0xa8cf,	// (0x000b7be0) blid_accuracy_pane_g1

0xa8cf,	// (0x000b7be0) blid_accuracy_pane_g2

0x0001,

0xf2d5,	// (0x000bc5e6) blid_accuracy_pane_g

0xaba7,	// (0x000b7eb8) wml_content_pane

0xabe5,	// (0x000b7ef6) wml_button_pane_ParamLimits

0xabe5,	// (0x000b7ef6) wml_button_pane

0x1454,	// (0x000ae765) wml_list_single_large_pane_ParamLimits

0x1454,	// (0x000ae765) wml_list_single_large_pane

0x146a,	// (0x000ae77b) wml_list_single_medium_pane_ParamLimits

0x146a,	// (0x000ae77b) wml_list_single_medium_pane

0x1481,	// (0x000ae792) wml_list_single_small_pane_ParamLimits

0x1481,	// (0x000ae792) wml_list_single_small_pane

0xabf9,	// (0x000b7f0a) wml_selection_box_pane_ParamLimits

0xabf9,	// (0x000b7f0a) wml_selection_box_pane

0xac0c,	// (0x000b7f1d) wml_list_single_pane_t1

0xac1b,	// (0x000b7f2c) wml_list_single_medium_pane_t1

0xac2a,	// (0x000b7f3b) wml_list_single_large_pane_t1

0xac39,	// (0x000b7f4a) input_focus_pane_cp02_ParamLimits

0xac39,	// (0x000b7f4a) input_focus_pane_cp02

0xac4c,	// (0x000b7f5d) wml_selection_box_pane_g1

0xac55,	// (0x000b7f66) wml_selection_box_pane_t1_ParamLimits

0xac55,	// (0x000b7f66) wml_selection_box_pane_t1

0x9ba2,	// (0x000b6eb3) bg_wml_button_pane_ParamLimits

0x9ba2,	// (0x000b6eb3) bg_wml_button_pane

0xac6d,	// (0x000b7f7e) wml_button_pane_g1

0xac75,	// (0x000b7f86) wml_button_pane_t1

0xac6d,	// (0x000b7f7e) wml_button_bg_pane_g1

0xac85,	// (0x000b7f96) wml_button_bg_pane_g2

0xac8d,	// (0x000b7f9e) wml_button_bg_pane_g3

0xac95,	// (0x000b7fa6) wml_button_bg_pane_g4

0xac9d,	// (0x000b7fae) wml_button_bg_pane_g5

0xaca5,	// (0x000b7fb6) wml_button_bg_pane_g6

0xacad,	// (0x000b7fbe) wml_button_bg_pane_g7

0xacb5,	// (0x000b7fc6) wml_button_bg_pane_g8

0xacbd,	// (0x000b7fce) wml_button_bg_pane_g9

0x0008,

0xf278,	// (0x000bc589) wml_button_bg_pane_g

0x149d,	// (0x000ae7ae) bg_list_pane_cp02

0xacc5,	// (0x000b7fd6) mce_header_pane_ParamLimits

0xacc5,	// (0x000b7fd6) mce_header_pane

0xacdb,	// (0x000b7fec) mce_icon_pane

0xacdb,	// (0x000b7fec) mce_image_pane

0xace4,	// (0x000b7ff5) mce_text_pane_ParamLimits

0xace4,	// (0x000b7ff5) mce_text_pane

0x14a7,	// (0x000ae7b8) scroll_pane_cp03

0xabdd,	// (0x000b7eee) scroll_pane_cp04

0xacf7,	// (0x000b8008) scroll_pane_cp05_ParamLimits

0xacf7,	// (0x000b8008) scroll_pane_cp05

0x14b1,	// (0x000ae7c2) mce_header_field_pane_ParamLimits

0x14b1,	// (0x000ae7c2) mce_header_field_pane

0x14ca,	// (0x000ae7db) mce_header_field_pane_2_ParamLimits

0x14ca,	// (0x000ae7db) mce_header_field_pane_2

0x14e0,	// (0x000ae7f1) mce_header_field_pane_3

0x14e8,	// (0x000ae7f9) list_single_mce_message_pane_ParamLimits

0x14e8,	// (0x000ae7f9) list_single_mce_message_pane

0x1501,	// (0x000ae812) list_single_mce_smart_pane_ParamLimits

0x1501,	// (0x000ae812) list_single_mce_smart_pane

0xad03,	// (0x000b8014) input_focus_pane_cp03

0xad0c,	// (0x000b801d) list_header_data_pane

0x1525,	// (0x000ae836) mce_header_field_pane_t1

0x1535,	// (0x000ae846) list_single_mce_header_pane_ParamLimits

0x1535,	// (0x000ae846) list_single_mce_header_pane

0xad14,	// (0x000b8025) list_single_mce_header_pane_t1

0xad23,	// (0x000b8034) list_single_mce_message_pane_g1

0xad2b,	// (0x000b803c) list_single_mce_message_pane_t1

0x156f,	// (0x000ae880) bg_cale_heading_pane_cp01_ParamLimits

0x156f,	// (0x000ae880) bg_cale_heading_pane_cp01

0xad39,	// (0x000b804a) bg_cale_pane_cp02_ParamLimits

0xad39,	// (0x000b804a) bg_cale_pane_cp02

0x15b6,	// (0x000ae8c7) cale_month_corner_pane

0x15d5,	// (0x000ae8e6) cale_month_day_heading_pane_ParamLimits

0x15d5,	// (0x000ae8e6) cale_month_day_heading_pane

0x1634,	// (0x000ae945) cale_month_pane_g1_ParamLimits

0x1634,	// (0x000ae945) cale_month_pane_g1

0x1670,	// (0x000ae981) cale_month_pane_g2_ParamLimits

0x1670,	// (0x000ae981) cale_month_pane_g2

0x16ac,	// (0x000ae9bd) cale_month_pane_g3_ParamLimits

0x16ac,	// (0x000ae9bd) cale_month_pane_g3

0x1700,	// (0x000aea11) cale_month_pane_g4_ParamLimits

0x1700,	// (0x000aea11) cale_month_pane_g4

0x1754,	// (0x000aea65) cale_month_pane_g5_ParamLimits

0x1754,	// (0x000aea65) cale_month_pane_g5

0x17b0,	// (0x000aeac1) cale_month_pane_g6_ParamLimits

0x17b0,	// (0x000aeac1) cale_month_pane_g6

0x1814,	// (0x000aeb25) cale_month_pane_g7_ParamLimits

0x1814,	// (0x000aeb25) cale_month_pane_g7

0x1880,	// (0x000aeb91) cale_month_pane_g8_ParamLimits

0x1880,	// (0x000aeb91) cale_month_pane_g8

0x18ec,	// (0x000aebfd) cale_month_pane_g9_ParamLimits

0x18ec,	// (0x000aebfd) cale_month_pane_g9

0x194a,	// (0x000aec5b) cale_month_pane_g10_ParamLimits

0x194a,	// (0x000aec5b) cale_month_pane_g10

0x199c,	// (0x000aecad) cale_month_pane_g11_ParamLimits

0x199c,	// (0x000aecad) cale_month_pane_g11

0x19ee,	// (0x000aecff) cale_month_pane_g12_ParamLimits

0x19ee,	// (0x000aecff) cale_month_pane_g12

0x1a46,	// (0x000aed57) cale_month_pane_g13_ParamLimits

0x1a46,	// (0x000aed57) cale_month_pane_g13

0x000c,

0xf28b,	// (0x000bc59c) cale_month_pane_g_ParamLimits

0xf28b,	// (0x000bc59c) cale_month_pane_g

0x1a9e,	// (0x000aedaf) cale_month_week_pane

0x1ac2,	// (0x000aedd3) grid_cale_month_pane_ParamLimits

0x1ac2,	// (0x000aedd3) grid_cale_month_pane

0x1b18,	// (0x000aee29) cale_month_day_heading_pane_t1

0x1b9e,	// (0x000aeeaf) cale_month_day_heading_pane_t2

0x1c2f,	// (0x000aef40) cale_month_day_heading_pane_t3

0x1cc0,	// (0x000aefd1) cale_month_day_heading_pane_t4

0x1d51,	// (0x000af062) cale_month_day_heading_pane_t5

0x1df2,	// (0x000af103) cale_month_day_heading_pane_t6

0x1e97,	// (0x000af1a8) cale_month_day_heading_pane_t7

0x0006,

0xf2a6,	// (0x000bc5b7) cale_month_day_heading_pane_t

0xa9d5,	// (0x000b7ce6) bg_cale_side_pane_cp01

0x1f40,	// (0x000af251) cale_month_week_pane_t1

0x1f59,	// (0x000af26a) cale_month_week_pane_t2

0x1f72,	// (0x000af283) cale_month_week_pane_t3

0x1f8b,	// (0x000af29c) cale_month_week_pane_t4

0x1fa4,	// (0x000af2b5) cale_month_week_pane_t5

0x1fbd,	// (0x000af2ce) cale_month_week_pane_t6

0x0005,

0xf2b5,	// (0x000bc5c6) cale_month_week_pane_t

0x1fdc,	// (0x000af2ed) cell_cale_month_pane_ParamLimits

0x1fdc,	// (0x000af2ed) cell_cale_month_pane

0x9cc9,	// (0x000b6fda) cell_cale_month_pane_g1

0x2130,	// (0x000af441) cell_cale_month_pane_t1_ParamLimits

0x2130,	// (0x000af441) cell_cale_month_pane_t1

0xa9e3,	// (0x000b7cf4) grid_highlight_pane_cp08

0xa8cf,	// (0x000b7be0) main_smil_g1

0x2150,	// (0x000af461) smil_status_pane

0xad78,	// (0x000b8089) smil_text_pane

0xc64a,	// (0x000b995b) bg_popup_call3_rect_pane_g8

0xc652,	// (0x000b9963) bg_popup_call3_rect_pane_g9

0x0008,

0xf56e,	// (0x000bc87f) bg_popup_call3_rect_pane_g

0xc8e0,	// (0x000b9bf1) smil_status_volume_pane_g1

0x2163,	// (0x000af474) smil_status_pane_t1

0x9e17,	// (0x000b7128) volume_smil_pane

0xad82,	// (0x000b8093) list_smil_text_pane

0x217c,	// (0x000af48d) scroll_pane_cp011

0x2187,	// (0x000af498) smil_text_list_pane_t1_ParamLimits

0x2187,	// (0x000af498) smil_text_list_pane_t1

0x9cd5,	// (0x000b6fe6) aid_volume_smil_ParamLimits

0x9cd5,	// (0x000b6fe6) aid_volume_smil

0xa8cf,	// (0x000b7be0) smil_volume_pane_g1

0xa8cf,	// (0x000b7be0) smil_volume_pane_g2

0x0001,

0xf2d5,	// (0x000bc5e6) smil_volume_pane_g

0x03a0,	// (0x000ad6b1) listscroll_cale_day_pane

0xad8c,	// (0x000b809d) bg_cale_pane

0xada4,	// (0x000b80b5) list_cale_pane

0xadc7,	// (0x000b80d8) scroll_pane_cp09

0xadd8,	// (0x000b80e9) cale_bg_pane_g1

0xade0,	// (0x000b80f1) cale_bg_pane_g2

0xade8,	// (0x000b80f9) cale_bg_pane_g3

0xadf0,	// (0x000b8101) cale_bg_pane_g4

0xadf8,	// (0x000b8109) cale_bg_pane_g5

0xae00,	// (0x000b8111) cale_bg_pane_g6

0xae08,	// (0x000b8119) cale_bg_pane_g7

0xae10,	// (0x000b8121) cale_bg_pane_g8

0xae18,	// (0x000b8129) cale_bg_pane_g9

0x0008,

0xf2da,	// (0x000bc5eb) cale_bg_pane_g

0x21c0,	// (0x000af4d1) list_cale_time_pane_ParamLimits

0x21c0,	// (0x000af4d1) list_cale_time_pane

0xae28,	// (0x000b8139) list_cale_time_pane_g1_ParamLimits

0xae28,	// (0x000b8139) list_cale_time_pane_g1

0xae34,	// (0x000b8145) list_cale_time_pane_g2_ParamLimits

0xae34,	// (0x000b8145) list_cale_time_pane_g2

0x21d4,	// (0x000af4e5) list_cale_time_pane_g3_ParamLimits

0x21d4,	// (0x000af4e5) list_cale_time_pane_g3

0x21e2,	// (0x000af4f3) list_cale_time_pane_g4_ParamLimits

0x21e2,	// (0x000af4f3) list_cale_time_pane_g4

0x21f0,	// (0x000af501) list_cale_time_pane_g5_ParamLimits

0x21f0,	// (0x000af501) list_cale_time_pane_g5

0x0005,

0xf2ed,	// (0x000bc5fe) list_cale_time_pane_g_ParamLimits

0xf2ed,	// (0x000bc5fe) list_cale_time_pane_g

0xae4e,	// (0x000b815f) list_cale_time_pane_t1_ParamLimits

0xae4e,	// (0x000b815f) list_cale_time_pane_t1

0xae76,	// (0x000b8187) list_cale_time_pane_t2_ParamLimits

0xae76,	// (0x000b8187) list_cale_time_pane_t2

0x258f,	// (0x000af8a0) aid_blid_cardinal_pane

0x25cd,	// (0x000af8de) compass_pane_t4

0xae9e,	// (0x000b81af) list_cale_time_pane_t4_ParamLimits

0xae9e,	// (0x000b81af) list_cale_time_pane_t4

0x25db,	// (0x000af8ec) compass_pane_t5

0x25e9,	// (0x000af8fa) compass_pane_t6

0x25f7,	// (0x000af908) compass_pane_t7

0xb2b8,	// (0x000b85c9) navi_pane_cc_t1

0xb405,	// (0x000b8716) aid_phob_thumbnail_center_pane

0x2d71,	// (0x000b0082) main_postcard_pane_g4_ParamLimits

0x0002,

0xf2fa,	// (0x000bc60b) list_cale_time_pane_t_ParamLimits

0xf2fa,	// (0x000bc60b) list_cale_time_pane_t

0x959e,	// (0x000b68af) bg_popup_window_pane_cp02_ParamLimits

0x959e,	// (0x000b68af) bg_popup_window_pane_cp02

0xaec6,	// (0x000b81d7) heading_pane_cp01_ParamLimits

0xaec6,	// (0x000b81d7) heading_pane_cp01

0xaed2,	// (0x000b81e3) loc_req_pane_ParamLimits

0xaed2,	// (0x000b81e3) loc_req_pane

0xaee2,	// (0x000b81f3) loc_type_pane_ParamLimits

0xaee2,	// (0x000b81f3) loc_type_pane

0xaef4,	// (0x000b8205) loc_type_pane_t1_ParamLimits

0xaef4,	// (0x000b8205) loc_type_pane_t1

0xaf06,	// (0x000b8217) loc_type_pane_t2_ParamLimits

0xaf06,	// (0x000b8217) loc_type_pane_t2

0xaf18,	// (0x000b8229) loc_type_pane_t3_ParamLimits

0xaf18,	// (0x000b8229) loc_type_pane_t3

0x0002,

0xf301,	// (0x000bc612) loc_type_pane_t_ParamLimits

0xf301,	// (0x000bc612) loc_type_pane_t

0xaf2a,	// (0x000b823b) list_loc_req_pane

0xaf34,	// (0x000b8245) scroll_pane_cp012

0x21fe,	// (0x000af50f) list_single_loc_request_popup_menu_pane_ParamLimits

0x21fe,	// (0x000af50f) list_single_loc_request_popup_menu_pane

0xaf3f,	// (0x000b8250) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xaf3f,	// (0x000b8250) list_single_loc_request_popup_menu_pane_g1

0xaf4b,	// (0x000b825c) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xaf4b,	// (0x000b825c) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf308,	// (0x000bc619) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf308,	// (0x000bc619) list_single_loc_request_popup_menu_pane_g

0xaf57,	// (0x000b8268) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xaf57,	// (0x000b8268) list_single_loc_request_popup_menu_pane_t1

0x9ba2,	// (0x000b6eb3) bg_popup_window_pane_cp03_ParamLimits

0x9ba2,	// (0x000b6eb3) bg_popup_window_pane_cp03

0xaf6d,	// (0x000b827e) heading_loc_req_pane_ParamLimits

0xaf6d,	// (0x000b827e) heading_loc_req_pane

0x220b,	// (0x000af51c) popup_dyc_status_message_window_g1_ParamLimits

0x220b,	// (0x000af51c) popup_dyc_status_message_window_g1

0x221f,	// (0x000af530) popup_dyc_status_message_window_t1_ParamLimits

0x221f,	// (0x000af530) popup_dyc_status_message_window_t1

0x2234,	// (0x000af545) popup_dyc_status_message_window_t2_ParamLimits

0x2234,	// (0x000af545) popup_dyc_status_message_window_t2

0x2249,	// (0x000af55a) popup_dyc_status_message_window_t3_ParamLimits

0x2249,	// (0x000af55a) popup_dyc_status_message_window_t3

0x0002,

0xf30d,	// (0x000bc61e) popup_dyc_status_message_window_t_ParamLimits

0xf30d,	// (0x000bc61e) popup_dyc_status_message_window_t

0x9947,	// (0x000b6c58) bg_heading_pane_cp01

0xaf79,	// (0x000b828a) heading_loc_req_pane_g1

0xaf81,	// (0x000b8292) heading_loc_req_pane_g2

0xaf89,	// (0x000b829a) heading_loc_req_pane_g3

0x0002,

0xf314,	// (0x000bc625) heading_loc_req_pane_g

0xaf91,	// (0x000b82a2) heading_loc_req_pane_t1

0xafa1,	// (0x000b82b2) bg_popup_sub_pane_cp01_ParamLimits

0xafa1,	// (0x000b82b2) bg_popup_sub_pane_cp01

0xafaf,	// (0x000b82c0) popup_cale_events_window_g1_ParamLimits

0xafaf,	// (0x000b82c0) popup_cale_events_window_g1

0xafcf,	// (0x000b82e0) popup_cale_events_window_g2_ParamLimits

0xafcf,	// (0x000b82e0) popup_cale_events_window_g2

0x0001,

0xf348,	// (0x000bc659) popup_cale_events_window_g_ParamLimits

0xf348,	// (0x000bc659) popup_cale_events_window_g

0xafef,	// (0x000b8300) popup_cale_events_window_t1_ParamLimits

0xafef,	// (0x000b8300) popup_cale_events_window_t1

0xb001,	// (0x000b8312) popup_cale_events_window_t2_ParamLimits

0xb001,	// (0x000b8312) popup_cale_events_window_t2

0xb03f,	// (0x000b8350) popup_cale_events_window_t3_ParamLimits

0xb03f,	// (0x000b8350) popup_cale_events_window_t3

0xb079,	// (0x000b838a) popup_cale_events_window_t4_ParamLimits

0xb079,	// (0x000b838a) popup_cale_events_window_t4

0x0003,

0xf34d,	// (0x000bc65e) popup_cale_events_window_t_ParamLimits

0xf34d,	// (0x000bc65e) popup_cale_events_window_t

0x234e,	// (0x000af65f) call_type_pane

0x235e,	// (0x000af66f) popup_call_status_window_g1

0x2372,	// (0x000af683) popup_call_status_window_g2

0x2386,	// (0x000af697) popup_call_status_window_g3

0x0002,

0xf356,	// (0x000bc667) popup_call_status_window_g

0xb0af,	// (0x000b83c0) call_type_pane_g1

0xb0b8,	// (0x000b83c9) call_type_pane_g2

0x0001,

0xf35d,	// (0x000bc66e) call_type_pane_g

0x9947,	// (0x000b6c58) bg_popup_sub_pane_cp02

0xb0c1,	// (0x000b83d2) listscroll_popup_wml_pane

0xb0c9,	// (0x000b83da) list_wml_pane

0xb0d3,	// (0x000b83e4) scroll_pane_cp013

0xb0de,	// (0x000b83ef) list_single_graphic_popup_wml_pane_ParamLimits

0xb0de,	// (0x000b83ef) list_single_graphic_popup_wml_pane

0xa8cf,	// (0x000b7be0) list_single_graphic_popup_wml_pane_g1

0xb0f2,	// (0x000b8403) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf362,	// (0x000bc673) list_single_graphic_popup_wml_pane_g

0xb0fa,	// (0x000b840b) list_single_graphic_popup_wml_pane_t1

0xb110,	// (0x000b8421) aid_call_pane

0x9b9a,	// (0x000b6eab) popup_clock_analogue_window_g1

0x9b9a,	// (0x000b6eab) popup_clock_analogue_window_g2

0x9cf7,	// (0x000b7008) popup_clock_analogue_window_g3

0x9cf7,	// (0x000b7008) popup_clock_analogue_window_g4

0xa8cf,	// (0x000b7be0) popup_clock_analogue_window_g5

0x0004,

0xf367,	// (0x000bc678) popup_clock_analogue_window_g

0x9cff,	// (0x000b7010) popup_clock_analogue_window_t1

0x9d0d,	// (0x000b701e) clock_digital_number_pane_ParamLimits

0x9d0d,	// (0x000b701e) clock_digital_number_pane

0x9d19,	// (0x000b702a) clock_digital_number_pane_cp02_ParamLimits

0x9d19,	// (0x000b702a) clock_digital_number_pane_cp02

0x9d25,	// (0x000b7036) clock_digital_number_pane_cp03_ParamLimits

0x9d25,	// (0x000b7036) clock_digital_number_pane_cp03

0x9d31,	// (0x000b7042) clock_digital_number_pane_cp04_ParamLimits

0x9d31,	// (0x000b7042) clock_digital_number_pane_cp04

0x9d3d,	// (0x000b704e) clock_digital_separator_pane_ParamLimits

0x9d3d,	// (0x000b704e) clock_digital_separator_pane

0x9d49,	// (0x000b705a) popup_clock_digital_window_t1

0xa8cf,	// (0x000b7be0) clock_digital_number_pane_g1

0xa8cf,	// (0x000b7be0) clock_digital_number_pane_g2

0x0001,

0xf2d5,	// (0x000bc5e6) clock_digital_number_pane_g

0xa8cf,	// (0x000b7be0) clock_digital_separator_pane_g1

0xa8cf,	// (0x000b7be0) clock_digital_separator_pane_g2

0x0001,

0xf2d5,	// (0x000bc5e6) clock_digital_separator_pane_g

0x9947,	// (0x000b6c58) bg_popup_window_pane_cp04

0xb118,	// (0x000b8429) heading_pane_cp03

0xb120,	// (0x000b8431) listscroll_popup_gms_pane

0xb128,	// (0x000b8439) grid_large_graphic_popup_pane

0xb132,	// (0x000b8443) listscroll_popup_gms_pane_g1

0xb13a,	// (0x000b844b) listscroll_popup_gms_pane_g2

0x0001,

0xf372,	// (0x000bc683) listscroll_popup_gms_pane_g

0xabdd,	// (0x000b7eee) scroll_pane_cp014

0x2396,	// (0x000af6a7) cell_large_graphic_popup_pane_ParamLimits

0x2396,	// (0x000af6a7) cell_large_graphic_popup_pane

0x23ae,	// (0x000af6bf) cell_large_graphic_popup_pane_g1_ParamLimits

0x23ae,	// (0x000af6bf) cell_large_graphic_popup_pane_g1

0xb142,	// (0x000b8453) cell_large_graphic_popup_pane_g2_ParamLimits

0xb142,	// (0x000b8453) cell_large_graphic_popup_pane_g2

0xb14e,	// (0x000b845f) cell_large_graphic_popup_pane_g3_ParamLimits

0xb14e,	// (0x000b845f) cell_large_graphic_popup_pane_g3

0xb15b,	// (0x000b846c) cell_large_graphic_popup_pane_g4_ParamLimits

0xb15b,	// (0x000b846c) cell_large_graphic_popup_pane_g4

0x0003,

0xf377,	// (0x000bc688) cell_large_graphic_popup_pane_g_ParamLimits

0xf377,	// (0x000bc688) cell_large_graphic_popup_pane_g

0xb16b,	// (0x000b847c) grid_highlight_pane_cp010

0xa8cf,	// (0x000b7be0) bg_popup_call_pane_g1

0xb175,	// (0x000b8486) list_single_graphic_popup_conf_pane_ParamLimits

0xb175,	// (0x000b8486) list_single_graphic_popup_conf_pane

0xb187,	// (0x000b8498) list_highlight_pane_cp01

0xb190,	// (0x000b84a1) list_single_graphic_popup_conf_pane_g1

0xb198,	// (0x000b84a9) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf380,	// (0x000bc691) list_single_graphic_popup_conf_pane_g

0xb1a0,	// (0x000b84b1) list_single_graphic_popup_conf_pane_t1

0xb1ae,	// (0x000b84bf) linegrid_cams_pane_g1

0x23ba,	// (0x000af6cb) linegrid_cams_pane_g2

0xaa16,	// (0x000b7d27) linegrid_cams_pane_g3

0xb1b7,	// (0x000b84c8) linegrid_cams_pane_g4

0x23c3,	// (0x000af6d4) linegrid_cams_pane_g5

0x23cc,	// (0x000af6dd) linegrid_cams_pane_g6

0xaa1f,	// (0x000b7d30) linegrid_cams_pane_g7

0x0006,

0xf385,	// (0x000bc696) linegrid_cams_pane_g

0xb1c0,	// (0x000b84d1) popup_clock_analogue_window

0xb1c0,	// (0x000b84d1) popup_clock_digital_window

0x9947,	// (0x000b6c58) popup_phob_thumbnail_window

0xa8cf,	// (0x000b7be0) call_video_uplink_pane_g1

0xb1c9,	// (0x000b84da) call_video_uplink_pane_g2

0x0001,

0xf394,	// (0x000bc6a5) call_video_uplink_pane_g

0xb1d1,	// (0x000b84e2) video_uplink_pane

0xb1d9,	// (0x000b84ea) mce_image_pane_g1

0x23d7,	// (0x000af6e8) mce_image_pane_g2

0x23e1,	// (0x000af6f2) mce_image_pane_g3

0x23eb,	// (0x000af6fc) mce_image_pane_g4

0x23f3,	// (0x000af704) mce_image_pane_g5

0x0004,

0xf399,	// (0x000bc6aa) mce_image_pane_g

0xb1e3,	// (0x000b84f4) control_top_pane_stacon_cp01_ParamLimits

0xb1e3,	// (0x000b84f4) control_top_pane_stacon_cp01

0xb1f7,	// (0x000b8508) uni_indicator_pane_stacon_cp01_ParamLimits

0xb1f7,	// (0x000b8508) uni_indicator_pane_stacon_cp01

0xb208,	// (0x000b8519) bg_popup_sub_pane_cp03

0x23fb,	// (0x000af70c) chi_dic_find_pane

0x2403,	// (0x000af714) listscroll_chi_dic_pane

0x240c,	// (0x000af71d) main_pane_chidic_g1

0x241f,	// (0x000af730) chi_dic_find_pane_t1

0xb212,	// (0x000b8523) find_chidic_pane

0xb21b,	// (0x000b852c) chi_dic_list_pane_ParamLimits

0xb21b,	// (0x000b852c) chi_dic_list_pane

0xb22c,	// (0x000b853d) scroll_pane_cp020

0x242d,	// (0x000af73e) find_chidic_pane_t1

0x9947,	// (0x000b6c58) input_focus_pane_cp06

0x0016,	// (0x000ad327) list_chi_dic_pane_ParamLimits

0x0016,	// (0x000ad327) list_chi_dic_pane

0x243c,	// (0x000af74d) list_chi_dic_pane_t1_ParamLimits

0x243c,	// (0x000af74d) list_chi_dic_pane_t1

0x9947,	// (0x000b6c58) list_highlight_pane_cp020

0xb234,	// (0x000b8545) bg_cale_heading_pane_g1

0x244f,	// (0x000af760) bg_cale_heading_pane_g2

0x2457,	// (0x000af768) bg_cale_heading_pane_g3

0x245f,	// (0x000af770) bg_cale_heading_pane_g4

0x2469,	// (0x000af77a) bg_cale_heading_pane_g5

0x2473,	// (0x000af784) bg_cale_heading_pane_g6

0x247b,	// (0x000af78c) bg_cale_heading_pane_g7

0x2483,	// (0x000af794) bg_cale_heading_pane_g8

0x248d,	// (0x000af79e) bg_cale_heading_pane_g9

0x0008,

0xf3a4,	// (0x000bc6b5) bg_cale_heading_pane_g

0xb234,	// (0x000b8545) bg_cale_side_pane_g1

0x2497,	// (0x000af7a8) bg_cale_side_pane_g2

0x24a1,	// (0x000af7b2) bg_cale_side_pane_g3

0x24ab,	// (0x000af7bc) bg_cale_side_pane_g4

0x24b5,	// (0x000af7c6) bg_cale_side_pane_g5

0x24bf,	// (0x000af7d0) bg_cale_side_pane_g6

0x24c9,	// (0x000af7da) bg_cale_side_pane_g7

0x24d3,	// (0x000af7e4) bg_cale_side_pane_g8

0x24db,	// (0x000af7ec) bg_cale_side_pane_g9

0x0008,

0xf3b7,	// (0x000bc6c8) bg_cale_side_pane_g

0x24e3,	// (0x000af7f4) popup_call_status_window_ParamLimits

0x24e3,	// (0x000af7f4) popup_call_status_window

0xb23c,	// (0x000b854d) stacon_top_pane

0xb244,	// (0x000b8555) status_pane_ParamLimits

0xb244,	// (0x000b8555) status_pane

0xb259,	// (0x000b856a) status_small_pane

0xb261,	// (0x000b8572) control_pane

0x9947,	// (0x000b6c58) stacon_bottom_pane

0xb269,	// (0x000b857a) list_single_mce_smart_pane_t1_ParamLimits

0xb269,	// (0x000b857a) list_single_mce_smart_pane_t1

0xb27c,	// (0x000b858d) list_single_mce_smart_pane_t2_ParamLimits

0xb27c,	// (0x000b858d) list_single_mce_smart_pane_t2

0x0001,

0xf3ca,	// (0x000bc6db) list_single_mce_smart_pane_t_ParamLimits

0xf3ca,	// (0x000bc6db) list_single_mce_smart_pane_t

0x2530,	// (0x000af841) compass_pane

0x253b,	// (0x000af84c) main_location2_pane_t1

0x254f,	// (0x000af860) main_location2_pane_t2

0x2565,	// (0x000af876) main_location2_pane_t3

0x0003,

0xf3cf,	// (0x000bc6e0) main_location2_pane_t

0xb29b,	// (0x000b85ac) compass_pane_g1_ParamLimits

0xb29b,	// (0x000b85ac) compass_pane_g1

0x25af,	// (0x000af8c0) compass_pane_t1

0x25be,	// (0x000af8cf) compass_pane_t2

0x0005,

0xf3d8,	// (0x000bc6e9) compass_pane_t

0x2605,	// (0x000af916) text_secondary_cp61

0xb2af,	// (0x000b85c0) navi_pane_cams_g5

0xb2d2,	// (0x000b85e3) navi_pane_im_t1

0xb2e0,	// (0x000b85f1) navi_pane_mp_g1_ParamLimits

0xb2e0,	// (0x000b85f1) navi_pane_mp_g1

0xb2f4,	// (0x000b8605) navi_pane_mp_g2_ParamLimits

0xb2f4,	// (0x000b8605) navi_pane_mp_g2

0xb300,	// (0x000b8611) navi_pane_mp_g3_ParamLimits

0xb300,	// (0x000b8611) navi_pane_mp_g3

0x0002,

0xf3ec,	// (0x000bc6fd) navi_pane_mp_g_ParamLimits

0xf3ec,	// (0x000bc6fd) navi_pane_mp_g

0xb30c,	// (0x000b861d) navi_pane_mp_t1

0xb31a,	// (0x000b862b) navi_pane_mp_t2

0x0002,

0xf3f3,	// (0x000bc704) navi_pane_mp_t

0xb356,	// (0x000b8667) navi_pane_vt_g1

0xb30c,	// (0x000b861d) navi_pane_vt_t1

0xb35e,	// (0x000b866f) navi_slider_pane

0xaa30,	// (0x000b7d41) zooming_pane

0xb366,	// (0x000b8677) navi_slider_pane_g1

0x9d66,	// (0x000b7077) navi_slider_pane_g2

0x0006,

0xf3fa,	// (0x000bc70b) navi_slider_pane_g

0xb38a,	// (0x000b869b) aid_levels_zoom

0xb392,	// (0x000b86a3) zooming_pane_g1

0xb39a,	// (0x000b86ab) zooming_pane_g2

0xb39a,	// (0x000b86ab) zooming_pane_g3

0x0002,

0xf409,	// (0x000bc71a) zooming_pane_g

0xb3a2,	// (0x000b86b3) level_10_zoom

0xb3ab,	// (0x000b86bc) level_11_zoom

0xb3b4,	// (0x000b86c5) level_1_zoom

0xb3bd,	// (0x000b86ce) level_2_zoom

0xb3c6,	// (0x000b86d7) level_3_zoom

0xb3cf,	// (0x000b86e0) level_4_zoom

0xb3d8,	// (0x000b86e9) level_5_zoom

0xb3e1,	// (0x000b86f2) level_6_zoom

0xb3ea,	// (0x000b86fb) level_7_zoom

0xb3f3,	// (0x000b8704) level_8_zoom

0xb3fc,	// (0x000b870d) level_9_zoom

0xb40d,	// (0x000b871e) popup_phob_thumbnail_window_g1

0xb415,	// (0x000b8726) popup_phob_thumbnail_window_g2

0x0001,

0xf410,	// (0x000bc721) popup_phob_thumbnail_window_g

0xc7b0,	// (0x000b9ac1) level_1_location

0xc7b8,	// (0x000b9ac9) level_2_location

0xc7c0,	// (0x000b9ad1) level_3_location

0xc7c8,	// (0x000b9ad9) level_4_location

0xaa30,	// (0x000b7d41) level_5_location

0x274e,	// (0x000afa5f) mce_icon_pane_g1

0x2758,	// (0x000afa69) mce_icon_pane_g2

0x0001,

0xf415,	// (0x000bc726) mce_icon_pane_g

0x2760,	// (0x000afa71) main_mup_pane_g1_ParamLimits

0x2760,	// (0x000afa71) main_mup_pane_g1

0x2776,	// (0x000afa87) main_mup_pane_g2_ParamLimits

0x2776,	// (0x000afa87) main_mup_pane_g2

0x278e,	// (0x000afa9f) main_mup_pane_g3_ParamLimits

0x278e,	// (0x000afa9f) main_mup_pane_g3

0x27a6,	// (0x000afab7) main_mup_pane_g4_ParamLimits

0x27a6,	// (0x000afab7) main_mup_pane_g4

0x27be,	// (0x000afacf) main_mup_pane_g5_ParamLimits

0x27be,	// (0x000afacf) main_mup_pane_g5

0x27da,	// (0x000afaeb) main_mup_pane_g6_ParamLimits

0x27da,	// (0x000afaeb) main_mup_pane_g6

0x27f4,	// (0x000afb05) main_mup_pane_g7_ParamLimits

0x27f4,	// (0x000afb05) main_mup_pane_g7

0x2812,	// (0x000afb23) main_mup_pane_g8_ParamLimits

0x2812,	// (0x000afb23) main_mup_pane_g8

0x2830,	// (0x000afb41) main_mup_pane_g9_ParamLimits

0x2830,	// (0x000afb41) main_mup_pane_g9

0x284c,	// (0x000afb5d) main_mup_pane_g10_ParamLimits

0x284c,	// (0x000afb5d) main_mup_pane_g10

0x286a,	// (0x000afb7b) main_mup_pane_g11_ParamLimits

0x286a,	// (0x000afb7b) main_mup_pane_g11

0x2884,	// (0x000afb95) main_mup_pane_g12_ParamLimits

0x2884,	// (0x000afb95) main_mup_pane_g12

0x289a,	// (0x000afbab) main_mup_pane_g13_ParamLimits

0x289a,	// (0x000afbab) main_mup_pane_g13

0x000c,

0xf41a,	// (0x000bc72b) main_mup_pane_g_ParamLimits

0xf41a,	// (0x000bc72b) main_mup_pane_g

0x28ae,	// (0x000afbbf) main_mup_pane_t1_ParamLimits

0x28ae,	// (0x000afbbf) main_mup_pane_t1

0x28ca,	// (0x000afbdb) main_mup_pane_t2_ParamLimits

0x28ca,	// (0x000afbdb) main_mup_pane_t2

0x28e2,	// (0x000afbf3) main_mup_pane_t3_ParamLimits

0x28e2,	// (0x000afbf3) main_mup_pane_t3

0x28fa,	// (0x000afc0b) main_mup_pane_t4_ParamLimits

0x28fa,	// (0x000afc0b) main_mup_pane_t4

0x2918,	// (0x000afc29) main_mup_pane_t5_ParamLimits

0x2918,	// (0x000afc29) main_mup_pane_t5

0x292d,	// (0x000afc3e) main_mup_pane_t6_ParamLimits

0x292d,	// (0x000afc3e) main_mup_pane_t6

0x0005,

0xf435,	// (0x000bc746) main_mup_pane_t_ParamLimits

0xf435,	// (0x000bc746) main_mup_pane_t

0x293f,	// (0x000afc50) mup_progress_pane_ParamLimits

0x293f,	// (0x000afc50) mup_progress_pane

0x294b,	// (0x000afc5c) mup_visualizer_pane_ParamLimits

0x294b,	// (0x000afc5c) mup_visualizer_pane

0x297f,	// (0x000afc90) mup_volume_pane_ParamLimits

0x297f,	// (0x000afc90) mup_volume_pane

0xb41d,	// (0x000b872e) mup_visualizer_pane_g1_ParamLimits

0xb41d,	// (0x000b872e) mup_visualizer_pane_g1

0xb41d,	// (0x000b872e) mup_visualizer_pane_g2_ParamLimits

0xb41d,	// (0x000b872e) mup_visualizer_pane_g2

0xb29b,	// (0x000b85ac) mup_visualizer_pane_g3_ParamLimits

0xb29b,	// (0x000b85ac) mup_visualizer_pane_g3

0x0002,

0xf442,	// (0x000bc753) mup_visualizer_pane_g_ParamLimits

0xf442,	// (0x000bc753) mup_visualizer_pane_g

0xa8cf,	// (0x000b7be0) mup_volume_pane_g1

0xb433,	// (0x000b8744) mup_volume_pane_g2

0x0001,

0xf449,	// (0x000bc75a) mup_volume_pane_g

0xa8cf,	// (0x000b7be0) mup_progress_pane_g1

0xb43c,	// (0x000b874d) mup_progress_pane_g2

0xb445,	// (0x000b8756) mup_progress_pane_g3

0x0002,

0xf44e,	// (0x000bc75f) mup_progress_pane_g

0x9947,	// (0x000b6c58) bg_popup_window_pane_cp05

0xb44e,	// (0x000b875f) heading_pane_cp02_ParamLimits

0xb44e,	// (0x000b875f) heading_pane_cp02

0xb46a,	// (0x000b877b) list_popup_blid_pane

0xb472,	// (0x000b8783) list_blid_sat_info_pane_ParamLimits

0xb472,	// (0x000b8783) list_blid_sat_info_pane

0xb485,	// (0x000b8796) list_blid_sat_info_pane_g1

0xb48d,	// (0x000b879e) list_blid_sat_info_pane_t1

0x2aa9,	// (0x000afdba) mup_equalizer_pane_ParamLimits

0x2aa9,	// (0x000afdba) mup_equalizer_pane

0x2aca,	// (0x000afddb) mup_equalizer_pane_cp1_ParamLimits

0x2aca,	// (0x000afddb) mup_equalizer_pane_cp1

0x2aeb,	// (0x000afdfc) mup_equalizer_pane_cp2_ParamLimits

0x2aeb,	// (0x000afdfc) mup_equalizer_pane_cp2

0x2b10,	// (0x000afe21) mup_equalizer_pane_cp3_ParamLimits

0x2b10,	// (0x000afe21) mup_equalizer_pane_cp3

0x2b39,	// (0x000afe4a) mup_equalizer_pane_cp4_ParamLimits

0x2b39,	// (0x000afe4a) mup_equalizer_pane_cp4

0x2b62,	// (0x000afe73) mup_equalizer_pane_cp5

0x2b7a,	// (0x000afe8b) mup_equalizer_pane_cp6

0x2b92,	// (0x000afea3) mup_equalizer_pane_cp7

0xc6ca,	// (0x000b99db) bg_popup_call_poc_act_pane_g9

0xc6d2,	// (0x000b99e3) bg_popup_call_poc_act_pane_g10

0xc6da,	// (0x000b99eb) bg_popup_call_poc_act_pane_g11

0x000a,

0x9ba2,	// (0x000b6eb3) mup_scale_pane

0xa8cf,	// (0x000b7be0) mup_scale_pane_g1

0xb49b,	// (0x000b87ac) mup_scale_pane_g2

0x0006,

0xf46a,	// (0x000bc77b) mup_scale_pane_g

0xb4bf,	// (0x000b87d0) msg_data_pane

0xb4c7,	// (0x000b87d8) scroll_pane_cp017

0x2bbc,	// (0x000afecd) bg_list_pane_cp04_ParamLimits

0x2bbc,	// (0x000afecd) bg_list_pane_cp04

0xb4cf,	// (0x000b87e0) msg_data_pane_g1

0x2bdc,	// (0x000afeed) msg_data_pane_g2

0x2be6,	// (0x000afef7) msg_data_pane_g3

0x2bf0,	// (0x000aff01) msg_data_pane_g4

0x2bf8,	// (0x000aff09) msg_data_pane_g5

0x2c00,	// (0x000aff11) msg_data_pane_g6

0x2c08,	// (0x000aff19) msg_data_pane_g7

0x0006,

0xf479,	// (0x000bc78a) msg_data_pane_g

0x2c10,	// (0x000aff21) msg_text_pane_ParamLimits

0x2c10,	// (0x000aff21) msg_text_pane

0x2c36,	// (0x000aff47) qrid_highlight_pane_cp011_ParamLimits

0x2c36,	// (0x000aff47) qrid_highlight_pane_cp011

0x9947,	// (0x000b6c58) msg_body_pane

0x9947,	// (0x000b6c58) msg_header_pane

0xb4e0,	// (0x000b87f1) input_focus_pane_cp07

0x9d80,	// (0x000b7091) msg_header_pane_t1_ParamLimits

0x9d80,	// (0x000b7091) msg_header_pane_t1

0x9d92,	// (0x000b70a3) msg_header_pane_t2_ParamLimits

0x9d92,	// (0x000b70a3) msg_header_pane_t2

0x0001,

0xf48d,	// (0x000bc79e) msg_header_pane_t_ParamLimits

0xf48d,	// (0x000bc79e) msg_header_pane_t

0xb4f5,	// (0x000b8806) msg_body_pane_g1

0x2c5a,	// (0x000aff6b) msg_body_pane_t1_ParamLimits

0x2c5a,	// (0x000aff6b) msg_body_pane_t1

0x9da4,	// (0x000b70b5) msg_body_pane_t2_ParamLimits

0x9da4,	// (0x000b70b5) msg_body_pane_t2

0x9db6,	// (0x000b70c7) msg_body_pane_t3_ParamLimits

0x9db6,	// (0x000b70c7) msg_body_pane_t3

0x0002,

0xf492,	// (0x000bc7a3) msg_body_pane_t_ParamLimits

0xf492,	// (0x000bc7a3) msg_body_pane_t

0x2cc5,	// (0x000affd6) main_viewer_pane_g1_ParamLimits

0x2cc5,	// (0x000affd6) main_viewer_pane_g1

0x2cd3,	// (0x000affe4) main_viewer_pane_g2_ParamLimits

0x2cd3,	// (0x000affe4) main_viewer_pane_g2

0x2ce1,	// (0x000afff2) main_viewer_pane_g3_ParamLimits

0x2ce1,	// (0x000afff2) main_viewer_pane_g3

0x2cf0,	// (0x000b0001) main_viewer_pane_g4_ParamLimits

0x2cf0,	// (0x000b0001) main_viewer_pane_g4

0x9de0,	// (0x000b70f1) main_viewer_pane_g5_ParamLimits

0x9de0,	// (0x000b70f1) main_viewer_pane_g5

0x9de0,	// (0x000b70f1) main_viewer_pane_g7_ParamLimits

0x9de0,	// (0x000b70f1) main_viewer_pane_g7

0x9df2,	// (0x000b7103) main_viewer_pane_g8_ParamLimits

0x9df2,	// (0x000b7103) main_viewer_pane_g8

0x0007,

0xf4a2,	// (0x000bc7b3) main_viewer_pane_g_ParamLimits

0xf4a2,	// (0x000bc7b3) main_viewer_pane_g

0xb4fd,	// (0x000b880e) viewer_content_pane_ParamLimits

0xb4fd,	// (0x000b880e) viewer_content_pane

0x2d2e,	// (0x000b003f) main_postcard_pane_g1_ParamLimits

0x2d2e,	// (0x000b003f) main_postcard_pane_g1

0x2d44,	// (0x000b0055) main_postcard_pane_g2_ParamLimits

0x2d44,	// (0x000b0055) main_postcard_pane_g2

0x2d5a,	// (0x000b006b) main_postcard_pane_g3_ParamLimits

0x2d5a,	// (0x000b006b) main_postcard_pane_g3

0x0005,

0xf4b3,	// (0x000bc7c4) main_postcard_pane_g_ParamLimits

0xf4b3,	// (0x000bc7c4) main_postcard_pane_g

0x2d71,	// (0x000b0082) main_postcard_pane_g4

0xc8f3,	// (0x000b9c04) smil_status_volume_pane_g2

0x2db4,	// (0x000b00c5) postcard_pane_ParamLimits

0x2db4,	// (0x000b00c5) postcard_pane

0xb50b,	// (0x000b881c) postcard_pane_g1_ParamLimits

0xb50b,	// (0x000b881c) postcard_pane_g1

0x2e04,	// (0x000b0115) postcard_pane_g2_ParamLimits

0x2e04,	// (0x000b0115) postcard_pane_g2

0x2e10,	// (0x000b0121) postcard_pane_g3_ParamLimits

0x2e10,	// (0x000b0121) postcard_pane_g3

0xb519,	// (0x000b882a) postcard_pane_g4_ParamLimits

0xb519,	// (0x000b882a) postcard_pane_g4

0x2e1c,	// (0x000b012d) postcard_pane_g5_ParamLimits

0x2e1c,	// (0x000b012d) postcard_pane_g5

0x2e31,	// (0x000b0142) postcard_pane_g6_ParamLimits

0x2e31,	// (0x000b0142) postcard_pane_g6

0xb50b,	// (0x000b881c) postcard_pane_g7_ParamLimits

0xb50b,	// (0x000b881c) postcard_pane_g7

0x0006,

0xf4c0,	// (0x000bc7d1) postcard_pane_g_ParamLimits

0xf4c0,	// (0x000bc7d1) postcard_pane_g

0x2e49,	// (0x000b015a) main_mp2_pane_g1_ParamLimits

0x2e49,	// (0x000b015a) main_mp2_pane_g1

0x2e57,	// (0x000b0168) main_mp2_pane_g2_ParamLimits

0x2e57,	// (0x000b0168) main_mp2_pane_g2

0x2e63,	// (0x000b0174) main_mp2_pane_g3_ParamLimits

0x2e63,	// (0x000b0174) main_mp2_pane_g3

0x0002,

0xf4cf,	// (0x000bc7e0) main_mp2_pane_g_ParamLimits

0xf4cf,	// (0x000bc7e0) main_mp2_pane_g

0x2e6f,	// (0x000b0180) main_mp2_pane_t1_ParamLimits

0x2e6f,	// (0x000b0180) main_mp2_pane_t1

0x2e86,	// (0x000b0197) main_mp2_pane_t2_ParamLimits

0x2e86,	// (0x000b0197) main_mp2_pane_t2

0x2e98,	// (0x000b01a9) main_mp2_pane_t3_ParamLimits

0x2e98,	// (0x000b01a9) main_mp2_pane_t3

0x0002,

0xf4d6,	// (0x000bc7e7) main_mp2_pane_t_ParamLimits

0xf4d6,	// (0x000bc7e7) main_mp2_pane_t

0xb527,	// (0x000b8838) pec_content_pane_ParamLimits

0xb527,	// (0x000b8838) pec_content_pane

0xabdd,	// (0x000b7eee) scroll_pane_cp015

0xb539,	// (0x000b884a) pec_attribute_pane_ParamLimits

0xb539,	// (0x000b884a) pec_attribute_pane

0x2eaa,	// (0x000b01bb) pec_content_pane_g1_ParamLimits

0x2eaa,	// (0x000b01bb) pec_content_pane_g1

0xb549,	// (0x000b885a) pec_content_pane_t1_ParamLimits

0xb549,	// (0x000b885a) pec_content_pane_t1

0xb55b,	// (0x000b886c) pec_content_pane_t2_ParamLimits

0xb55b,	// (0x000b886c) pec_content_pane_t2

0x0001,

0xf4dd,	// (0x000bc7ee) pec_content_pane_t_ParamLimits

0xf4dd,	// (0x000bc7ee) pec_content_pane_t

0x2eb6,	// (0x000b01c7) list_single_graphic_pane_cp01_ParamLimits

0x2eb6,	// (0x000b01c7) list_single_graphic_pane_cp01

0x9ba2,	// (0x000b6eb3) bg_popup_sub_pane_cp04

0xb56d,	// (0x000b887e) popup_mup_playback_window_g1

0xb579,	// (0x000b888a) popup_mup_playback_window_t1

0xb58e,	// (0x000b889f) popup_mup_playback_window_t2

0x0001,

0xf4e2,	// (0x000bc7f3) popup_mup_playback_window_t

0xb5c5,	// (0x000b88d6) main_image_pane_g1_ParamLimits

0xb5c5,	// (0x000b88d6) main_image_pane_g1

0xb608,	// (0x000b8919) scroll_pane_cp018_ParamLimits

0xb608,	// (0x000b8919) scroll_pane_cp018

0xb620,	// (0x000b8931) scroll_pane_cp016_ParamLimits

0xb620,	// (0x000b8931) scroll_pane_cp016

0x2f85,	// (0x000b0296) smil2_image_pane_ParamLimits

0x2f85,	// (0x000b0296) smil2_image_pane

0x2fbb,	// (0x000b02cc) smil2_root_pane_ParamLimits

0x2fbb,	// (0x000b02cc) smil2_root_pane

0x2ff3,	// (0x000b0304) smil2_text_pane_ParamLimits

0x2ff3,	// (0x000b0304) smil2_text_pane

0x9947,	// (0x000b6c58) bg_list_pane_cp06

0xb65c,	// (0x000b896d) grid_radio_pane

0x9947,	// (0x000b6c58) bg_popup_window_pane_cp06

0xb666,	// (0x000b8977) main_fmradio_pane_t1

0xb118,	// (0x000b8429) heading_pane_cp04

0xb674,	// (0x000b8985) main_fmradio_pane_t2

0xc6e2,	// (0x000b99f3) popup_cale_lunar_info_window_g1

0xb682,	// (0x000b8993) main_fmradio_pane_t3

0xc6ea,	// (0x000b99fb) popup_cale_lunar_info_window_g2

0xb692,	// (0x000b89a3) main_fmradio_pane_t4

0x0001,

0xb6a0,	// (0x000b89b1) main_fmradio_pane_t5

0x0004,

0xf5bd,	// (0x000bc8ce) popup_cale_lunar_info_window_g

0xf4f7,	// (0x000bc808) main_fmradio_pane_t

0xb6ae,	// (0x000b89bf) wait_bar_pane_cp03

0xb6b6,	// (0x000b89c7) cell_fmradio_pane_ParamLimits

0xb6b6,	// (0x000b89c7) cell_fmradio_pane

0xb50b,	// (0x000b881c) cell_fmradio_pane_g1_ParamLimits

0xb50b,	// (0x000b881c) cell_fmradio_pane_g1

0x9947,	// (0x000b6c58) grid_highlight_pane_cp011

0xb6cb,	// (0x000b89dc) poc_content_pane_ParamLimits

0xb6cb,	// (0x000b89dc) poc_content_pane

0xb6dd,	// (0x000b89ee) scroll_pane_cp019

0x3083,	// (0x000b0394) popup_call_poc_act_window_ParamLimits

0x3083,	// (0x000b0394) popup_call_poc_act_window

0x30a7,	// (0x000b03b8) popup_call_poc_inact_window_ParamLimits

0x30a7,	// (0x000b03b8) popup_call_poc_inact_window

0xf594,	// (0x000bc8a5) bg_popup_call_poc_act_pane_g

0xc65a,	// (0x000b996b) bg_popup_call_poc_inact_pane_g1

0xc662,	// (0x000b9973) bg_popup_call_poc_inact_pane_g2

0xb6e5,	// (0x000b89f6) popup_call_poc_act_window_g2

0xc66a,	// (0x000b997b) bg_popup_call_poc_inact_pane_g3

0xc672,	// (0x000b9983) bg_popup_call_poc_inact_pane_g4

0xc67a,	// (0x000b998b) bg_popup_call_poc_inact_pane_g5

0xb6ed,	// (0x000b89fe) popup_call_poc_act_window_t1_ParamLimits

0xb6ed,	// (0x000b89fe) popup_call_poc_act_window_t1

0xb715,	// (0x000b8a26) popup_call_poc_act_window_t2_ParamLimits

0xb715,	// (0x000b8a26) popup_call_poc_act_window_t2

0xb73d,	// (0x000b8a4e) popup_call_poc_act_window_t3_ParamLimits

0xb73d,	// (0x000b8a4e) popup_call_poc_act_window_t3

0xb765,	// (0x000b8a76) popup_call_poc_act_window_t4_ParamLimits

0xb765,	// (0x000b8a76) popup_call_poc_act_window_t4

0x0003,

0xf502,	// (0x000bc813) popup_call_poc_act_window_t_ParamLimits

0xf502,	// (0x000bc813) popup_call_poc_act_window_t

0xc682,	// (0x000b9993) bg_popup_call_poc_inact_pane_g6

0xc68a,	// (0x000b999b) bg_popup_call_poc_inact_pane_g7

0xc692,	// (0x000b99a3) bg_popup_call_poc_inact_pane_g8

0xb777,	// (0x000b8a88) popup_call_poc_inact_window_g2

0xc69a,	// (0x000b99ab) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf581,	// (0x000bc892) bg_popup_call_poc_inact_pane_g

0xb77f,	// (0x000b8a90) popup_call_poc_inact_window_t1_ParamLimits

0xb77f,	// (0x000b8a90) popup_call_poc_inact_window_t1

0xb794,	// (0x000b8aa5) popup_call_poc_inact_window_t2_ParamLimits

0xb794,	// (0x000b8aa5) popup_call_poc_inact_window_t2

0xb7a9,	// (0x000b8aba) popup_call_poc_inact_window_t3_ParamLimits

0xb7a9,	// (0x000b8aba) popup_call_poc_inact_window_t3

0x0002,

0xf50b,	// (0x000bc81c) popup_call_poc_inact_window_t_ParamLimits

0xf50b,	// (0x000bc81c) popup_call_poc_inact_window_t

0xc866,	// (0x000b9b77) context_pane_ParamLimits

0x394f,	// (0x000b0c60) signal_pane_ParamLimits

0xaa30,	// (0x000b7d41) main_call2_pane

0xc854,	// (0x000b9b65) popup_phob_thumbnail2_window_ParamLimits

0xc854,	// (0x000b9b65) popup_phob_thumbnail2_window

0x9dc8,	// (0x000b70d9) aid_hotspot_pointer_arrow_pane

0x9dd0,	// (0x000b70e1) aid_hotspot_pointer_hand_pane

0x340f,	// (0x000b0720) phob_pre_status_pane_g5

0x0c42,	// (0x000adf53) cams_zoom_pane_ParamLimits

0x0c51,	// (0x000adf62) image_vga_pane_ParamLimits

0x0c6b,	// (0x000adf7c) main_camera_pane_g1_ParamLimits

0x0c7d,	// (0x000adf8e) main_camera_pane_g2_ParamLimits

0x0c8d,	// (0x000adf9e) main_camera_pane_g3_ParamLimits

0x0ca1,	// (0x000adfb2) main_camera_pane_g4_ParamLimits

0x0cb5,	// (0x000adfc6) main_camera_pane_g5_ParamLimits

0x0cc9,	// (0x000adfda) main_camera_pane_g6_ParamLimits

0x0cdd,	// (0x000adfee) main_camera_pane_g7_ParamLimits

0xf20a,	// (0x000bc51b) main_camera_pane_g_ParamLimits

0x0cf1,	// (0x000ae002) main_camera_pane_t1_ParamLimits

0x0d07,	// (0x000ae018) main_camera_pane_t2_ParamLimits

0xf21b,	// (0x000bc52c) main_camera_pane_t_ParamLimits

0x9ba2,	// (0x000b6eb3) bg_popup_preview_window_pane_cp01_ParamLimits

0x9ba2,	// (0x000b6eb3) bg_popup_preview_window_pane_cp01

0xb7be,	// (0x000b8acf) popup_phob_thumbnail2_window_g1_ParamLimits

0xb7be,	// (0x000b8acf) popup_phob_thumbnail2_window_g1

0x9947,	// (0x000b6c58) call2_cli_visual_pane

0x30db,	// (0x000b03ec) popup_call2_audio_conf_window_ParamLimits

0x30db,	// (0x000b03ec) popup_call2_audio_conf_window

0x3103,	// (0x000b0414) popup_call2_audio_first_window_ParamLimits

0x3103,	// (0x000b0414) popup_call2_audio_first_window

0x3199,	// (0x000b04aa) popup_call2_audio_in_window_ParamLimits

0x3199,	// (0x000b04aa) popup_call2_audio_in_window

0x31e5,	// (0x000b04f6) popup_call2_audio_out_window_ParamLimits

0x31e5,	// (0x000b04f6) popup_call2_audio_out_window

0x3257,	// (0x000b0568) popup_call2_audio_second_window_ParamLimits

0x3257,	// (0x000b0568) popup_call2_audio_second_window

0x32bd,	// (0x000b05ce) popup_call2_audio_wait_window_ParamLimits

0x32bd,	// (0x000b05ce) popup_call2_audio_wait_window

0x9947,	// (0x000b6c58) bg_popup_call2_act_pane_cp03

0x9b84,	// (0x000b6e95) list_conf_pane_cp

0xb7ca,	// (0x000b8adb) popup_call2_audio_conf_window_t1

0xb7d8,	// (0x000b8ae9) list_single_graphic_popup_conf2_pane_ParamLimits

0xb7d8,	// (0x000b8ae9) list_single_graphic_popup_conf2_pane

0xb187,	// (0x000b8498) list_highlight_pane_cp04

0xb7eb,	// (0x000b8afc) list_single_graphic_popup_conf2_pane_g1

0xb198,	// (0x000b84a9) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf512,	// (0x000bc823) list_single_graphic_popup_conf2_pane_g

0xb7f5,	// (0x000b8b06) list_single_graphic_popup_conf2_pane_t1

0xb803,	// (0x000b8b14) bg_popup_call2_act_pane_cp01_ParamLimits

0xb803,	// (0x000b8b14) bg_popup_call2_act_pane_cp01

0xb88d,	// (0x000b8b9e) call_type_pane_cp05_ParamLimits

0xb88d,	// (0x000b8b9e) call_type_pane_cp05

0xb8e1,	// (0x000b8bf2) popup_call2_audio_second_window_g1_ParamLimits

0xb8e1,	// (0x000b8bf2) popup_call2_audio_second_window_g1

0xb935,	// (0x000b8c46) popup_call2_audio_second_window_g2_ParamLimits

0xb935,	// (0x000b8c46) popup_call2_audio_second_window_g2

0x0002,

0xf517,	// (0x000bc828) popup_call2_audio_second_window_g_ParamLimits

0xf517,	// (0x000bc828) popup_call2_audio_second_window_g

0xb99a,	// (0x000b8cab) popup_call2_audio_second_window_t1_ParamLimits

0xb99a,	// (0x000b8cab) popup_call2_audio_second_window_t1

0xba55,	// (0x000b8d66) popup_call2_audio_second_window_t2_ParamLimits

0xba55,	// (0x000b8d66) popup_call2_audio_second_window_t2

0xbaa8,	// (0x000b8db9) popup_call2_audio_second_window_t3_ParamLimits

0xbaa8,	// (0x000b8db9) popup_call2_audio_second_window_t3

0x0003,

0xf51e,	// (0x000bc82f) popup_call2_audio_second_window_t_ParamLimits

0xf51e,	// (0x000bc82f) popup_call2_audio_second_window_t

0x9947,	// (0x000b6c58) bg_popup_call2_in_pane_cp02

0x9951,	// (0x000b6c62) call_type_pane_cp04

0x9959,	// (0x000b6c6a) popup_call2_audio_wait_window_g1

0x9961,	// (0x000b6c72) popup_call2_audio_wait_window_g2

0x0001,

0xf0f9,	// (0x000bc40a) popup_call2_audio_wait_window_g

0x9969,	// (0x000b6c7a) popup_call2_audio_wait_window_t3

0xbc2d,	// (0x000b8f3e) bg_popup_call2_act_pane_ParamLimits

0xbc2d,	// (0x000b8f3e) bg_popup_call2_act_pane

0xbced,	// (0x000b8ffe) call_type_pane_cp03_ParamLimits

0xbced,	// (0x000b8ffe) call_type_pane_cp03

0xbd51,	// (0x000b9062) popup_call2_audio_first_window_g1_ParamLimits

0xbd51,	// (0x000b9062) popup_call2_audio_first_window_g1

0xbdc1,	// (0x000b90d2) popup_call2_audio_first_window_g2_ParamLimits

0xbdc1,	// (0x000b90d2) popup_call2_audio_first_window_g2

0xb41d,	// (0x000b872e) popup_call2_audio_first_window_g3_ParamLimits

0xb41d,	// (0x000b872e) popup_call2_audio_first_window_g3

0x0004,

0xf527,	// (0x000bc838) popup_call2_audio_first_window_g_ParamLimits

0xf527,	// (0x000bc838) popup_call2_audio_first_window_g

0xbe9f,	// (0x000b91b0) popup_call2_audio_first_window_t1_ParamLimits

0xbe9f,	// (0x000b91b0) popup_call2_audio_first_window_t1

0xbfa2,	// (0x000b92b3) popup_call2_audio_first_window_t4_ParamLimits

0xbfa2,	// (0x000b92b3) popup_call2_audio_first_window_t4

0xc085,	// (0x000b9396) popup_call2_audio_first_window_t5_ParamLimits

0xc085,	// (0x000b9396) popup_call2_audio_first_window_t5

0x0003,

0xf532,	// (0x000bc843) popup_call2_audio_first_window_t_ParamLimits

0xf532,	// (0x000bc843) popup_call2_audio_first_window_t

0x9b9a,	// (0x000b6eab) bg_popup_call2_act_pane_g1

0xc6f4,	// (0x000b9a05) popup_cale_lunar_info_window_t1

0xc702,	// (0x000b9a13) popup_cale_lunar_info_window_t2

0xc710,	// (0x000b9a21) popup_cale_lunar_info_window_t3

0x9947,	// (0x000b6c58) bg_popup_call2_bubble_pane

0xc186,	// (0x000b9497) bg_popup_call2_in_pane_cp01_ParamLimits

0xc186,	// (0x000b9497) bg_popup_call2_in_pane_cp01

0x9623,	// (0x000b6934) call_type_pane_cp02

0xc1ce,	// (0x000b94df) popup_call2_audio_out_window_g1_ParamLimits

0xc1ce,	// (0x000b94df) popup_call2_audio_out_window_g1

0xc1fa,	// (0x000b950b) popup_call2_audio_out_window_g2_ParamLimits

0xc1fa,	// (0x000b950b) popup_call2_audio_out_window_g2

0xc222,	// (0x000b9533) popup_call2_audio_out_window_g3_ParamLimits

0xc222,	// (0x000b9533) popup_call2_audio_out_window_g3

0x0003,

0xf53b,	// (0x000bc84c) popup_call2_audio_out_window_g_ParamLimits

0xf53b,	// (0x000bc84c) popup_call2_audio_out_window_g

0xc25d,	// (0x000b956e) popup_call2_audio_out_window_t1_ParamLimits

0xc25d,	// (0x000b956e) popup_call2_audio_out_window_t1

0xc2bc,	// (0x000b95cd) popup_call2_audio_out_window_t2_ParamLimits

0xc2bc,	// (0x000b95cd) popup_call2_audio_out_window_t2

0xc310,	// (0x000b9621) popup_call2_audio_out_window_t3_ParamLimits

0xc310,	// (0x000b9621) popup_call2_audio_out_window_t3

0xc326,	// (0x000b9637) popup_call2_audio_out_window_t4_ParamLimits

0xc326,	// (0x000b9637) popup_call2_audio_out_window_t4

0xc33c,	// (0x000b964d) popup_call2_audio_out_window_t5_ParamLimits

0xc33c,	// (0x000b964d) popup_call2_audio_out_window_t5

0x0005,

0xf544,	// (0x000bc855) popup_call2_audio_out_window_t_ParamLimits

0xf544,	// (0x000bc855) popup_call2_audio_out_window_t

0xc3a0,	// (0x000b96b1) bg_popup_call2_in_pane_ParamLimits

0xc3a0,	// (0x000b96b1) bg_popup_call2_in_pane

0xc3fc,	// (0x000b970d) popup_call2_audio_in_window_g1_ParamLimits

0xc3fc,	// (0x000b970d) popup_call2_audio_in_window_g1

0xc434,	// (0x000b9745) popup_call2_audio_in_window_g2_ParamLimits

0xc434,	// (0x000b9745) popup_call2_audio_in_window_g2

0xc46c,	// (0x000b977d) popup_call2_audio_in_window_g3_ParamLimits

0xc46c,	// (0x000b977d) popup_call2_audio_in_window_g3

0x0003,

0xf551,	// (0x000bc862) popup_call2_audio_in_window_g_ParamLimits

0xf551,	// (0x000bc862) popup_call2_audio_in_window_g

0xc4c4,	// (0x000b97d5) popup_call2_audio_in_window_t1_ParamLimits

0xc4c4,	// (0x000b97d5) popup_call2_audio_in_window_t1

0xc544,	// (0x000b9855) popup_call2_audio_in_window_t2_ParamLimits

0xc544,	// (0x000b9855) popup_call2_audio_in_window_t2

0xc5c4,	// (0x000b98d5) popup_call2_audio_in_window_t3_ParamLimits

0xc5c4,	// (0x000b98d5) popup_call2_audio_in_window_t3

0xc5de,	// (0x000b98ef) popup_call2_audio_in_window_t4_ParamLimits

0xc5de,	// (0x000b98ef) popup_call2_audio_in_window_t4

0xc5f0,	// (0x000b9901) popup_call2_audio_in_window_t5_ParamLimits

0xc5f0,	// (0x000b9901) popup_call2_audio_in_window_t5

0xc605,	// (0x000b9916) popup_call2_audio_in_window_t6_ParamLimits

0xc605,	// (0x000b9916) popup_call2_audio_in_window_t6

0x0005,

0xf55a,	// (0x000bc86b) popup_call2_audio_in_window_t_ParamLimits

0xf55a,	// (0x000bc86b) popup_call2_audio_in_window_t

0x9b9a,	// (0x000b6eab) bg_popup_call2_in_pane_g1

0xc71e,	// (0x000b9a2f) popup_cale_lunar_info_window_t4

0x0003,

0xf5c2,	// (0x000bc8d3) popup_cale_lunar_info_window_t

0x9ba2,	// (0x000b6eb3) bg_popup_call2_rect_pane_ParamLimits

0x9ba2,	// (0x000b6eb3) bg_popup_call2_rect_pane

0x9947,	// (0x000b6c58) call2_cli_visual_graphic_pane

0x9947,	// (0x000b6c58) call2_cli_visual_text_pane

0x9e0a,	// (0x000b711b) smil_status_volume_pane_g3

0x0002,

0xa8cf,	// (0x000b7be0) call2_cli_visual_graphic_pane_g1

0xa8cf,	// (0x000b7be0) call2_cli_visual_graphic_pane_g2

0xa8cf,	// (0x000b7be0) call2_cli_visual_graphic_pane_g3

0x0002,

0xf567,	// (0x000bc878) call2_cli_visual_graphic_pane_g

0xc61a,	// (0x000b992b) bg_popup_call2_rect_pane_g1

0xa96d,	// (0x000b7c7e) bg_popup_call2_rect_pane_g2

0xc622,	// (0x000b9933) bg_popup_call2_rect_pane_g3

0xc62a,	// (0x000b993b) bg_popup_call2_rect_pane_g4

0xc632,	// (0x000b9943) bg_popup_call2_rect_pane_g5

0xc63a,	// (0x000b994b) bg_popup_call2_rect_pane_g6

0xc642,	// (0x000b9953) bg_popup_call2_rect_pane_g7

0xc64a,	// (0x000b995b) bg_popup_call2_rect_pane_g8

0xc652,	// (0x000b9963) bg_popup_call2_rect_pane_g9

0x0008,

0xf56e,	// (0x000bc87f) bg_popup_call2_rect_pane_g

0xc65a,	// (0x000b996b) bg_popup_call2_bubble_pane_g1

0xc662,	// (0x000b9973) bg_popup_call2_bubble_pane_g2

0xc66a,	// (0x000b997b) bg_popup_call2_bubble_pane_g3

0xc672,	// (0x000b9983) bg_popup_call2_bubble_pane_g4

0xc67a,	// (0x000b998b) bg_popup_call2_bubble_pane_g5

0xc682,	// (0x000b9993) bg_popup_call2_bubble_pane_g6

0xc68a,	// (0x000b999b) bg_popup_call2_bubble_pane_g7

0xc692,	// (0x000b99a3) bg_popup_call2_bubble_pane_g8

0xc69a,	// (0x000b99ab) bg_popup_call2_bubble_pane_g9

0x0008,

0xf581,	// (0x000bc892) bg_popup_call2_bubble_pane_g

0x03bc,	// (0x000ad6cd) aid_cale_week_size_cell_pane

0x0d21,	// (0x000ae032) aid_cams_cif_uncrop_pane_ParamLimits

0x0d21,	// (0x000ae032) aid_cams_cif_uncrop_pane

0x0eda,	// (0x000ae1eb) aid_cams_size_cell_ParamLimits

0x0eda,	// (0x000ae1eb) aid_cams_size_cell

0x0eee,	// (0x000ae1ff) grid_cams_pane_ParamLimits

0x0f08,	// (0x000ae219) linegrid_cams_pane_ParamLimits

0x10fb,	// (0x000ae40c) call_video_pane_t1

0x1115,	// (0x000ae426) call_video_pane_t2

0x0001,

0xf26e,	// (0x000bc57f) call_video_pane_t

0x1549,	// (0x000ae85a) aid_cale_month_size_cell_pane_ParamLimits

0x1549,	// (0x000ae85a) aid_cale_month_size_cell_pane

0xf60b,	// (0x000bc91c) smil_status_volume_pane_g

0x9e17,	// (0x000b7128) volume_smil_pane_ParamLimits

0x94e7,	// (0x000b67f8) aid_popup2_width_pane

0x030c,	// (0x000ad61d) cell_qdial_pane_g4_ParamLimits

0x030c,	// (0x000ad61d) cell_qdial_pane_g4

0x258f,	// (0x000af8a0) aid_blid_cardinal_pane_ParamLimits

0x259b,	// (0x000af8ac) aid_blid_destination_pane_ParamLimits

0x259b,	// (0x000af8ac) aid_blid_destination_pane

0x9ba2,	// (0x000b6eb3) bg_popup_call_poc_act_pane_ParamLimits

0x9ba2,	// (0x000b6eb3) bg_popup_call_poc_act_pane

0x9ba2,	// (0x000b6eb3) bg_popup_call_poc_inact_pane_ParamLimits

0x9ba2,	// (0x000b6eb3) bg_popup_call_poc_inact_pane

0xc6a2,	// (0x000b99b3) bg_popup_call_poc_act_pane_g1

0xc6aa,	// (0x000b99bb) bg_popup_call_poc_act_pane_g2

0xc6b2,	// (0x000b99c3) bg_popup_call_poc_act_pane_g3

0xc672,	// (0x000b9983) bg_popup_call_poc_act_pane_g4

0xc67a,	// (0x000b998b) bg_popup_call_poc_act_pane_g5

0xc6ba,	// (0x000b99cb) bg_popup_call_poc_act_pane_g6

0xc68a,	// (0x000b999b) bg_popup_call_poc_act_pane_g7

0xc6c2,	// (0x000b99d3) bg_popup_call_poc_act_pane_g8

0x9947,	// (0x000b6c58) main_usb_pane

0xc82b,	// (0x000b9b3c) popup_cale_lunar_info_window

0x13de,	// (0x000ae6ef) im_reading_pane_t1_ParamLimits

0xab35,	// (0x000b7e46) list_im_pane_ParamLimits

0xab46,	// (0x000b7e57) scroll_pane_cp07_ParamLimits

0x9947,	// (0x000b6c58) grid_highlight_pane_cp012

0x9ba2,	// (0x000b6eb3) mup_scale_pane_ParamLimits

0xb50b,	// (0x000b881c) main_usb_pane_g1_ParamLimits

0xb50b,	// (0x000b881c) main_usb_pane_g1

0x331b,	// (0x000b062c) main_usb_pane_g2_ParamLimits

0x331b,	// (0x000b062c) main_usb_pane_g2

0x0001,

0xf5ab,	// (0x000bc8bc) main_usb_pane_g_ParamLimits

0xf5ab,	// (0x000bc8bc) main_usb_pane_g

0x3331,	// (0x000b0642) main_usb_pane_t1_ParamLimits

0x3331,	// (0x000b0642) main_usb_pane_t1

0x3343,	// (0x000b0654) main_usb_pane_t2_ParamLimits

0x3343,	// (0x000b0654) main_usb_pane_t2

0x3355,	// (0x000b0666) main_usb_pane_t3_ParamLimits

0x3355,	// (0x000b0666) main_usb_pane_t3

0x3367,	// (0x000b0678) main_usb_pane_t4_ParamLimits

0x3367,	// (0x000b0678) main_usb_pane_t4

0x337c,	// (0x000b068d) main_usb_pane_t5_ParamLimits

0x337c,	// (0x000b068d) main_usb_pane_t5

0x3391,	// (0x000b06a2) main_usb_pane_t6_ParamLimits

0x3391,	// (0x000b06a2) main_usb_pane_t6

0x0005,

0xf5b0,	// (0x000bc8c1) main_usb_pane_t_ParamLimits

0x2530,	// (0x000af841) aid_text_placing

0x253b,	// (0x000af84c) main_location2_pane_t1_ParamLimits

0x254f,	// (0x000af860) main_location2_pane_t2_ParamLimits

0x2565,	// (0x000af876) main_location2_pane_t3_ParamLimits

0x257b,	// (0x000af88c) main_location2_pane_t4_ParamLimits

0x257b,	// (0x000af88c) main_location2_pane_t4

0xf3cf,	// (0x000bc6e0) main_location2_pane_t_ParamLimits

0x9bde,	// (0x000b6eef) find_pinb_pane_g2_ParamLimits

0x9bde,	// (0x000b6eef) find_pinb_pane_g2

0x0001,

0xf11f,	// (0x000bc430) find_pinb_pane_g_ParamLimits

0xf11f,	// (0x000bc430) find_pinb_pane_g

0x9bea,	// (0x000b6efb) find_pinb_pane_t1_ParamLimits

0x9bfc,	// (0x000b6f0d) find_pinb_pane_t2_ParamLimits

0xf124,	// (0x000bc435) find_pinb_pane_t_ParamLimits

0x9947,	// (0x000b6c58) main_call3_pane

0x1b18,	// (0x000aee29) cale_month_day_heading_pane_t1_ParamLimits

0x1b9e,	// (0x000aeeaf) cale_month_day_heading_pane_t2_ParamLimits

0x1c2f,	// (0x000aef40) cale_month_day_heading_pane_t3_ParamLimits

0x1cc0,	// (0x000aefd1) cale_month_day_heading_pane_t4_ParamLimits

0x1d51,	// (0x000af062) cale_month_day_heading_pane_t5_ParamLimits

0x1df2,	// (0x000af103) cale_month_day_heading_pane_t6_ParamLimits

0x1e97,	// (0x000af1a8) cale_month_day_heading_pane_t7_ParamLimits

0xf2a6,	// (0x000bc5b7) cale_month_day_heading_pane_t_ParamLimits

0x2173,	// (0x000af484) smil_status_volume_pane

0x2dd8,	// (0x000b00e9) postcard_address_pane_ParamLimits

0x2dd8,	// (0x000b00e9) postcard_address_pane

0x2dee,	// (0x000b00ff) postcard_message_pane_ParamLimits

0x2dee,	// (0x000b00ff) postcard_message_pane

0x32f7,	// (0x000b0608) call2_cli_visual_pane_t1_ParamLimits

0x32f7,	// (0x000b0608) call2_cli_visual_pane_t1

0x3b84,	// (0x000b0e95) postcard_message_pane_t1_ParamLimits

0x3b84,	// (0x000b0e95) postcard_message_pane_t1

0x3b6d,	// (0x000b0e7e) postcard_address_pane_t1_ParamLimits

0x3b6d,	// (0x000b0e7e) postcard_address_pane_t1

0x3b59,	// (0x000b0e6a) popup_call3_audio_in_window_ParamLimits

0x3b59,	// (0x000b0e6a) popup_call3_audio_in_window

0x39de,	// (0x000b0cef) bg_popup_call3_in_pane_ParamLimits

0x39de,	// (0x000b0cef) bg_popup_call3_in_pane

0x3a5a,	// (0x000b0d6b) popup_call3_audio_in_window_g1_ParamLimits

0x3a5a,	// (0x000b0d6b) popup_call3_audio_in_window_g1

0x3a7a,	// (0x000b0d8b) popup_call3_audio_in_window_g2_ParamLimits

0x3a7a,	// (0x000b0d8b) popup_call3_audio_in_window_g2

0x3a9a,	// (0x000b0dab) popup_call3_audio_in_window_g3_ParamLimits

0x3a9a,	// (0x000b0dab) popup_call3_audio_in_window_g3

0x0003,

0xf612,	// (0x000bc923) popup_call3_audio_in_window_g_ParamLimits

0xf612,	// (0x000bc923) popup_call3_audio_in_window_g

0x3acb,	// (0x000b0ddc) popup_call3_audio_in_window_t1_ParamLimits

0x3acb,	// (0x000b0ddc) popup_call3_audio_in_window_t1

0x3b09,	// (0x000b0e1a) popup_call3_audio_in_window_t2_ParamLimits

0x3b09,	// (0x000b0e1a) popup_call3_audio_in_window_t2

0x3b47,	// (0x000b0e58) popup_call3_audio_in_window_t3_ParamLimits

0x3b47,	// (0x000b0e58) popup_call3_audio_in_window_t3

0x0002,

0xf61b,	// (0x000bc92c) popup_call3_audio_in_window_t_ParamLimits

0xf61b,	// (0x000bc92c) popup_call3_audio_in_window_t

0xaa30,	// (0x000b7d41) bg_popup_call3_rect_pane

0xc61a,	// (0x000b992b) bg_popup_call3_rect_pane_g1

0xa96d,	// (0x000b7c7e) bg_popup_call3_rect_pane_g2

0xc622,	// (0x000b9933) bg_popup_call3_rect_pane_g3

0xc62a,	// (0x000b993b) bg_popup_call3_rect_pane_g4

0xc632,	// (0x000b9943) bg_popup_call3_rect_pane_g5

0xc63a,	// (0x000b994b) bg_popup_call3_rect_pane_g6

0xc642,	// (0x000b9953) bg_popup_call3_rect_pane_g7

0x2995,	// (0x000afca6) mup_visualizer_osc_pane

0xb42b,	// (0x000b873c) mup_visualizer_spec_pane

0x3a0e,	// (0x000b0d1f) call3_video_qcif_pane_ParamLimits

0x3a0e,	// (0x000b0d1f) call3_video_qcif_pane

0x3a21,	// (0x000b0d32) call3_video_qcif_uncrop_pane_ParamLimits

0x3a21,	// (0x000b0d32) call3_video_qcif_uncrop_pane

0x3a31,	// (0x000b0d42) call3_video_subqcif_pane_ParamLimits

0x3a31,	// (0x000b0d42) call3_video_subqcif_pane

0x3a47,	// (0x000b0d58) call3_video_subqcif_uncrop_pane_ParamLimits

0x3a47,	// (0x000b0d58) call3_video_subqcif_uncrop_pane

0x3aba,	// (0x000b0dcb) popup_call3_audio_in_window_g4_ParamLimits

0x3aba,	// (0x000b0dcb) popup_call3_audio_in_window_g4

0x39cd,	// (0x000b0cde) mup_spec_half_pane

0x39d6,	// (0x000b0ce7) mup_spec_half_pane_cp

0xc8c6,	// (0x000b9bd7) mup_osc_middle_pane

0xc8cf,	// (0x000b9be0) mup_visualizer_osc_pane_g1

0x39ad,	// (0x000b0cbe) mup_spec_bar_pane_ParamLimits

0x39ad,	// (0x000b0cbe) mup_spec_bar_pane

0xc8b3,	// (0x000b9bc4) mup_spec_bar_pane_g1

0xc8bd,	// (0x000b9bce) mup_spec_bar_pane_g2

0x0001,

0xf606,	// (0x000bc917) mup_spec_bar_pane_g

0x03bc,	// (0x000ad6cd) aid_cale_week_size_cell_pane_ParamLimits

0x03d6,	// (0x000ad6e7) bg_cale_heading_pane_ParamLimits

0x03ff,	// (0x000ad710) bg_cale_pane_cp01_ParamLimits

0x0421,	// (0x000ad732) cale_week_corner_pane_ParamLimits

0x0440,	// (0x000ad751) cale_week_day_heading_pane_ParamLimits

0x046e,	// (0x000ad77f) cale_week_scroll_pane_g1_ParamLimits

0x0492,	// (0x000ad7a3) cale_week_scroll_pane_g2_ParamLimits

0x04aa,	// (0x000ad7bb) cale_week_scroll_pane_g3_ParamLimits

0x04c2,	// (0x000ad7d3) cale_week_scroll_pane_g4_ParamLimits

0x04de,	// (0x000ad7ef) cale_week_scroll_pane_g5_ParamLimits

0x04fe,	// (0x000ad80f) cale_week_scroll_pane_g6_ParamLimits

0x051e,	// (0x000ad82f) cale_week_scroll_pane_g7_ParamLimits

0x0542,	// (0x000ad853) cale_week_scroll_pane_g8_ParamLimits

0x0566,	// (0x000ad877) cale_week_scroll_pane_g9_ParamLimits

0x0583,	// (0x000ad894) cale_week_scroll_pane_g10_ParamLimits

0x05a0,	// (0x000ad8b1) cale_week_scroll_pane_g11_ParamLimits

0x05bd,	// (0x000ad8ce) cale_week_scroll_pane_g12_ParamLimits

0x05da,	// (0x000ad8eb) cale_week_scroll_pane_g13_ParamLimits

0x05f7,	// (0x000ad908) cale_week_scroll_pane_g14_ParamLimits

0x0620,	// (0x000ad931) cale_week_scroll_pane_g15_ParamLimits

0xf1b0,	// (0x000bc4c1) cale_week_scroll_pane_g_ParamLimits

0x066d,	// (0x000ad97e) cale_week_time_pane_ParamLimits

0x0691,	// (0x000ad9a2) grid_cale_week_pane_ParamLimits

0xa9a1,	// (0x000b7cb2) listscroll_cale_week_pane_t1

0xa9b3,	// (0x000b7cc4) scroll_pane_cp08_ParamLimits

0x15b6,	// (0x000ae8c7) cale_month_corner_pane_ParamLimits

0xad66,	// (0x000b8077) cale_month_pane_t1

0x1a9e,	// (0x000aedaf) cale_month_week_pane_ParamLimits

0x235e,	// (0x000af66f) popup_call_status_window_g1_ParamLimits

0x2372,	// (0x000af683) popup_call_status_window_g2_ParamLimits

0x2386,	// (0x000af697) popup_call_status_window_g3_ParamLimits

0xf356,	// (0x000bc667) popup_call_status_window_g_ParamLimits

0xb108,	// (0x000b8419) aid_call2_pane

0x2c4c,	// (0x000aff5d) msg_header_pane_g1

0x2dd8,	// (0x000b00e9) postcard_address2_pane_ParamLimits

0x2dd8,	// (0x000b00e9) postcard_address2_pane

0x2dee,	// (0x000b00ff) postcard_message2_pane_ParamLimits

0x2dee,	// (0x000b00ff) postcard_message2_pane

0x395d,	// (0x000b0c6e) message2_row_pane_ParamLimits

0x395d,	// (0x000b0c6e) message2_row_pane

0x397a,	// (0x000b0c8b) address2_row_pane_ParamLimits

0x397a,	// (0x000b0c8b) address2_row_pane

0xc881,	// (0x000b9b92) postcard_message2_row_pane_g1

0xc889,	// (0x000b9b9a) postcard_message2_row_pane_t1

0xc881,	// (0x000b9b92) address2_row_pane_g1

0xc889,	// (0x000b9b9a) address2_row_pane_t1

0x0bbd,	// (0x000adece) aid_size_cell_vorec

0x9947,	// (0x000b6c58) main_rss_pane

0x398d,	// (0x000b0c9e) rss_list_single_pane_ParamLimits

0x398d,	// (0x000b0c9e) rss_list_single_pane

0xc897,	// (0x000b9ba8) rss_list_single_pane_t1

0xc8a5,	// (0x000b9bb6) rss_list_single_pane_t2

0x0001,

0xf601,	// (0x000bc912) rss_list_single_pane_t

0x9947,	// (0x000b6c58) main_camera2_pane

0x9947,	// (0x000b6c58) main_video2_pane

0x3bf3,	// (0x000b0f04) cams_zoom_pane_cp2_ParamLimits

0x3bf3,	// (0x000b0f04) cams_zoom_pane_cp2

0x3c0a,	// (0x000b0f1b) image2_vga_pane_ParamLimits

0x3c0a,	// (0x000b0f1b) image2_vga_pane

0x3c52,	// (0x000b0f63) main_camera2_pane_g1_ParamLimits

0x3c52,	// (0x000b0f63) main_camera2_pane_g1

0x3c72,	// (0x000b0f83) main_camera2_pane_g2_ParamLimits

0x3c72,	// (0x000b0f83) main_camera2_pane_g2

0x3c89,	// (0x000b0f9a) main_camera2_pane_g3_ParamLimits

0x3c89,	// (0x000b0f9a) main_camera2_pane_g3

0x3ca0,	// (0x000b0fb1) main_camera2_pane_g4_ParamLimits

0x3ca0,	// (0x000b0fb1) main_camera2_pane_g4

0x3cb7,	// (0x000b0fc8) main_camera2_pane_g5_ParamLimits

0x3cb7,	// (0x000b0fc8) main_camera2_pane_g5

0x3cce,	// (0x000b0fdf) main_camera2_pane_g6_ParamLimits

0x3cce,	// (0x000b0fdf) main_camera2_pane_g6

0x3ce5,	// (0x000b0ff6) main_camera2_pane_g7_ParamLimits

0x3ce5,	// (0x000b0ff6) main_camera2_pane_g7

0x3cfc,	// (0x000b100d) main_camera2_pane_g8_ParamLimits

0x3cfc,	// (0x000b100d) main_camera2_pane_g8

0x0008,

0xf622,	// (0x000bc933) main_camera2_pane_g_ParamLimits

0xf622,	// (0x000bc933) main_camera2_pane_g

0x3d2a,	// (0x000b103b) main_camera2_pane_t1_ParamLimits

0x3d2a,	// (0x000b103b) main_camera2_pane_t1

0x3d5f,	// (0x000b1070) main_camera2_pane_t2_ParamLimits

0x3d5f,	// (0x000b1070) main_camera2_pane_t2

0x3d7c,	// (0x000b108d) main_camera2_pane_t3_ParamLimits

0x3d7c,	// (0x000b108d) main_camera2_pane_t3

0x3dda,	// (0x000b10eb) main_camera2_pane_t4_ParamLimits

0x3dda,	// (0x000b10eb) main_camera2_pane_t4

0x0006,

0xf635,	// (0x000bc946) main_camera2_pane_t_ParamLimits

0xf635,	// (0x000bc946) main_camera2_pane_t

0x3e63,	// (0x000b1174) cams_zoom_pane_cp4_ParamLimits

0x3e63,	// (0x000b1174) cams_zoom_pane_cp4

0x3e79,	// (0x000b118a) image2_cif_pane_ParamLimits

0x3e79,	// (0x000b118a) image2_cif_pane

0x3ea4,	// (0x000b11b5) image2_subqcif_pane_ParamLimits

0x3ea4,	// (0x000b11b5) image2_subqcif_pane

0x3ebf,	// (0x000b11d0) main_video2_pane_g1_ParamLimits

0x3ebf,	// (0x000b11d0) main_video2_pane_g1

0x3ed9,	// (0x000b11ea) main_video2_pane_g2_ParamLimits

0x3ed9,	// (0x000b11ea) main_video2_pane_g2

0x3eef,	// (0x000b1200) main_video2_pane_g3_ParamLimits

0x3eef,	// (0x000b1200) main_video2_pane_g3

0x3f05,	// (0x000b1216) main_video2_pane_g4_ParamLimits

0x3f05,	// (0x000b1216) main_video2_pane_g4

0x3f1b,	// (0x000b122c) main_video2_pane_g5_ParamLimits

0x3f1b,	// (0x000b122c) main_video2_pane_g5

0x3f31,	// (0x000b1242) main_video2_pane_g6_ParamLimits

0x3f31,	// (0x000b1242) main_video2_pane_g6

0x0005,

0xf644,	// (0x000bc955) main_video2_pane_g_ParamLimits

0xf644,	// (0x000bc955) main_video2_pane_g

0x3f4b,	// (0x000b125c) main_video2_pane_t1_ParamLimits

0x3f4b,	// (0x000b125c) main_video2_pane_t1

0x3f6f,	// (0x000b1280) main_video2_pane_t2_ParamLimits

0x3f6f,	// (0x000b1280) main_video2_pane_t2

0x3fbf,	// (0x000b12d0) main_video2_pane_t3_ParamLimits

0x3fbf,	// (0x000b12d0) main_video2_pane_t3

0x0002,

0xf651,	// (0x000bc962) main_video2_pane_t_ParamLimits

0xf651,	// (0x000bc962) main_video2_pane_t

0x344f,	// (0x000b0760) call_muted_g2

0x0001,

0xf5f3,	// (0x000bc904) call_muted_g

0x9947,	// (0x000b6c58) main_mup2_pane

0x4007,	// (0x000b1318) main_mup2_pane_g1_ParamLimits

0x4007,	// (0x000b1318) main_mup2_pane_g1

0x4013,	// (0x000b1324) main_mup2_pane_g2_ParamLimits

0x4013,	// (0x000b1324) main_mup2_pane_g2

0x9e82,	// (0x000b7193) main_mup_pane_g13_cp1

0x9e8a,	// (0x000b719b) mup_volume_pane_cp1

0x4031,	// (0x000b1342) main_mup2_pane_g4_ParamLimits

0x4031,	// (0x000b1342) main_mup2_pane_g4

0x4043,	// (0x000b1354) main_mup2_pane_g5_ParamLimits

0x4043,	// (0x000b1354) main_mup2_pane_g5

0x4055,	// (0x000b1366) main_mup2_pane_g6_ParamLimits

0x4055,	// (0x000b1366) main_mup2_pane_g6

0x4067,	// (0x000b1378) main_mup2_pane_g7_ParamLimits

0x4067,	// (0x000b1378) main_mup2_pane_g7

0x0006,

0xf658,	// (0x000bc969) main_mup2_pane_g_ParamLimits

0xf658,	// (0x000bc969) main_mup2_pane_g

0x407f,	// (0x000b1390) main_mup2_pane_t1_ParamLimits

0x407f,	// (0x000b1390) main_mup2_pane_t1

0x4095,	// (0x000b13a6) main_mup2_pane_t2_ParamLimits

0x4095,	// (0x000b13a6) main_mup2_pane_t2

0x40ab,	// (0x000b13bc) main_mup2_pane_t3_ParamLimits

0x40ab,	// (0x000b13bc) main_mup2_pane_t3

0x40c1,	// (0x000b13d2) main_mup2_pane_t4_ParamLimits

0x40c1,	// (0x000b13d2) main_mup2_pane_t4

0x40d9,	// (0x000b13ea) main_mup2_pane_t5_ParamLimits

0x40d9,	// (0x000b13ea) main_mup2_pane_t5

0x40f1,	// (0x000b1402) main_mup2_pane_t6_ParamLimits

0x40f1,	// (0x000b1402) main_mup2_pane_t6

0x0005,

0xf667,	// (0x000bc978) main_mup2_pane_t_ParamLimits

0xf667,	// (0x000bc978) main_mup2_pane_t

0x4121,	// (0x000b1432) mup2_visualizer_pane_ParamLimits

0x4121,	// (0x000b1432) mup2_visualizer_pane

0x414f,	// (0x000b1460) mup_progress_pane_cp_ParamLimits

0x414f,	// (0x000b1460) mup_progress_pane_cp

0x9e6d,	// (0x000b717e) mup_volume_pane_cp_ParamLimits

0x9e6d,	// (0x000b717e) mup_volume_pane_cp

0x4165,	// (0x000b1476) mup2_visualizer_pane_g1_ParamLimits

0x4165,	// (0x000b1476) mup2_visualizer_pane_g1

0xc906,	// (0x000b9c17) mup2_visualizer_pane_g2_ParamLimits

0xc906,	// (0x000b9c17) mup2_visualizer_pane_g2

0x417c,	// (0x000b148d) mup2_visualizer_pane_g3_ParamLimits

0x417c,	// (0x000b148d) mup2_visualizer_pane_g3

0x0002,

0xf674,	// (0x000bc985) mup2_visualizer_pane_g_ParamLimits

0xf674,	// (0x000bc985) mup2_visualizer_pane_g

0xb654,	// (0x000b8965) aid_size_cell_fmradio

0x35ff,	// (0x000b0910) aid_height_parent_landcape

0xabc4,	// (0x000b7ed5) wml_content_pane_cp

0xabcc,	// (0x000b7edd) wml_tabs_pane

0xabd5,	// (0x000b7ee6) popup_wml_miniature_window

0xabdd,	// (0x000b7eee) scroll_pane_cp021

0xabf1,	// (0x000b7f02) wml_content_pane_comp8

0x9947,	// (0x000b6c58) bg_popup_sub_pane_cp05

0xc924,	// (0x000b9c35) popup_wml_miniature_window_g1

0xc92c,	// (0x000b9c3d) wml_miniature_view_pane

0x4188,	// (0x000b1499) aid_size_wml_view

0x4190,	// (0x000b14a1) wml_miniature_view_pane_g1

0x4199,	// (0x000b14aa) wml_miniature_view_pane_g2

0x41a2,	// (0x000b14b3) wml_miniature_view_pane_g3

0x41aa,	// (0x000b14bb) wml_miniature_view_pane_g4

0x41b2,	// (0x000b14c3) wml_miniature_view_pane_g5

0x41ba,	// (0x000b14cb) wml_miniature_view_pane_g6

0x41c2,	// (0x000b14d3) wml_miniature_view_pane_g7

0x41ca,	// (0x000b14db) wml_miniature_view_pane_g8

0x0007,

0xf67b,	// (0x000bc98c) wml_miniature_view_pane_g

0xc934,	// (0x000b9c45) background_graphic_ParamLimits

0xc934,	// (0x000b9c45) background_graphic

0xc940,	// (0x000b9c51) wml_tabs_2_pane

0xc949,	// (0x000b9c5a) wml_tabs_3_pane_ParamLimits

0xc949,	// (0x000b9c5a) wml_tabs_3_pane

0xc95b,	// (0x000b9c6c) wml_tabs_4_pane_ParamLimits

0xc95b,	// (0x000b9c6c) wml_tabs_4_pane

0xc971,	// (0x000b9c82) wml_tabs_5_pane_ParamLimits

0xc971,	// (0x000b9c82) wml_tabs_5_pane

0xc98b,	// (0x000b9c9c) wml_tabs_pane_g2_ParamLimits

0xc98b,	// (0x000b9c9c) wml_tabs_pane_g2

0xc99f,	// (0x000b9cb0) wml_tabs_pane_g3_ParamLimits

0xc99f,	// (0x000b9cb0) wml_tabs_pane_g3

0x41d2,	// (0x000b14e3) wml_tabs_2_active_pane_ParamLimits

0x41d2,	// (0x000b14e3) wml_tabs_2_active_pane

0x41e6,	// (0x000b14f7) wml_tabs_2_passive_pane_ParamLimits

0x41e6,	// (0x000b14f7) wml_tabs_2_passive_pane

0x41fa,	// (0x000b150b) wml_tabs_3_active_pane_cp_ParamLimits

0x41fa,	// (0x000b150b) wml_tabs_3_active_pane_cp

0x420f,	// (0x000b1520) wml_tabs_3_passive_pane_ParamLimits

0x420f,	// (0x000b1520) wml_tabs_3_passive_pane

0x4222,	// (0x000b1533) wml_tabs_3_passive_pane_cp_ParamLimits

0x4222,	// (0x000b1533) wml_tabs_3_passive_pane_cp

0x4239,	// (0x000b154a) tabs_4_active_pane

0x4241,	// (0x000b1552) tabs_4_passive_pane

0x424b,	// (0x000b155c) tabs_4_passive_pane_cp

0x4253,	// (0x000b1564) tabs_4_passive_pane_cp2

0x3313,	// (0x000b0624) aid_height_text

0x2967,	// (0x000afc78) mup_volume_cont_pane_ParamLimits

0x2967,	// (0x000afc78) mup_volume_cont_pane

0xff99,	// (0x000ad2aa) aid_size_cell_pinb

0xffa3,	// (0x000ad2b4) aid_size_list_pinb

0x413b,	// (0x000b144c) mup2_volume_cont_pane_ParamLimits

0x413b,	// (0x000b144c) mup2_volume_cont_pane

0x9e59,	// (0x000b716a) mup2_volume_cont_pane_g1_ParamLimits

0x9e59,	// (0x000b716a) mup2_volume_cont_pane_g1

0xfc41,	// (0x000acf52) aid_size_cell_touch_ParamLimits

0xfc41,	// (0x000acf52) aid_size_cell_touch

0xfe89,	// (0x000ad19a) touch_pane_ParamLimits

0xfe89,	// (0x000ad19a) touch_pane

0x94d5,	// (0x000b67e6) main_rss2_pane

0xc9bc,	// (0x000b9ccd) listscroll_rss2_pane

0xc9c5,	// (0x000b9cd6) rss2_navigation_pane

0xc9cd,	// (0x000b9cde) list_rss2_pane

0xb22c,	// (0x000b853d) scroll_pane_cp22

0xc9d5,	// (0x000b9ce6) rss2_navigation_pane_g1

0xc9de,	// (0x000b9cef) rss2_navigation_pane_g2

0xc9e6,	// (0x000b9cf7) rss2_navigation_pane_g3

0x0002,

0xf68c,	// (0x000bc99d) rss2_navigation_pane_g

0xc9ee,	// (0x000b9cff) rss2_navigation_pane_t1

0x425d,	// (0x000b156e) rss2_list_single_pane_ParamLimits

0x425d,	// (0x000b156e) rss2_list_single_pane

0xc9fc,	// (0x000b9d0d) rss2_list_single_pane_t2

0xca0a,	// (0x000b9d1b) rss2_list_single_pane_t3_ParamLimits

0xca0a,	// (0x000b9d1b) rss2_list_single_pane_t3

0xca27,	// (0x000b9d38) rss2_list_single_pane_t4

0x215b,	// (0x000af46c) smil_status_pane_g1

0x9526,	// (0x000b6837) main_image2_pane_ParamLimits

0x9526,	// (0x000b6837) main_image2_pane

0x3d13,	// (0x000b1024) main_camera2_pane_g9_ParamLimits

0x3d13,	// (0x000b1024) main_camera2_pane_g9

0x3e2f,	// (0x000b1140) main_camera2_pane_t5_ParamLimits

0x3e2f,	// (0x000b1140) main_camera2_pane_t5

0x9e2e,	// (0x000b713f) main_camera2_pane_t6_ParamLimits

0x9e2e,	// (0x000b713f) main_camera2_pane_t6

0x4273,	// (0x000b1584) main_image2_pane_g1_ParamLimits

0x4273,	// (0x000b1584) main_image2_pane_g1

0x302d,	// (0x000b033e) smil2_video_pane_ParamLimits

0x302d,	// (0x000b033e) smil2_video_pane

0xfc81,	// (0x000acf92) aid_zoom_text_primary_cp

0x951c,	// (0x000b682d) popup_preview_fixed_window

0xab2d,	// (0x000b7e3e) im_reading_pane_g1

0x3be5,	// (0x000b0ef6) cams2_bc_adjust_pane_cp_ParamLimits

0x3be5,	// (0x000b0ef6) cams2_bc_adjust_pane_cp

0x3e55,	// (0x000b1166) cams2_bc_adjust_pane_ParamLimits

0x3e55,	// (0x000b1166) cams2_bc_adjust_pane

0xcee5,	// (0x000ba1f6) cams2_bc_adjust_pane_g1

0x9e92,	// (0x000b71a3) cams2_slider_pane

0x9e9b,	// (0x000b71ac) cams2_slider_pane_g1

0x9ea4,	// (0x000b71b5) cams2_slider_pane_g2

0x0006,

0xf693,	// (0x000bc9a4) cams2_slider_pane_g

0x0093,	// (0x000ad3a4) calc_display_pane_ParamLimits

0x00bb,	// (0x000ad3cc) calc_paper_pane_ParamLimits

0x00de,	// (0x000ad3ef) grid_calc_pane_ParamLimits

0x9d49,	// (0x000b705a) popup_clock_digital_window_t1_ParamLimits

0xb5f1,	// (0x000b8902) main_image_pane_t1

0x0075,	// (0x000ad386) aid_size_cell_calc_ParamLimits

0x0075,	// (0x000ad386) aid_size_cell_calc

0x3645,	// (0x000b0956) popup_blid_sat_info2_window_ParamLimits

0x3645,	// (0x000b0956) popup_blid_sat_info2_window

0xca3d,	// (0x000b9d4e) aid_size_cell_blid

0xca45,	// (0x000b9d56) bg_popup_window_pane_cp07

0xca68,	// (0x000b9d79) grid_popup_blid_pane

0xca72,	// (0x000b9d83) heading_pane_cp05_ParamLimits

0xca72,	// (0x000b9d83) heading_pane_cp05

0xcb3c,	// (0x000b9e4d) cell_popup_blid_pane_ParamLimits

0xcb3c,	// (0x000b9e4d) cell_popup_blid_pane

0xcb66,	// (0x000b9e77) cell_popup_blid_pane_g1

0xcb6e,	// (0x000b9e7f) cell_popup_blid_pane_t1

0x410b,	// (0x000b141c) mup2_indicator_pane_ParamLimits

0x410b,	// (0x000b141c) mup2_indicator_pane

0xaa30,	// (0x000b7d41) mup2_visualizer_osc_pane

0xc912,	// (0x000b9c23) mup2_visualizer_spec_pane_ParamLimits

0xc912,	// (0x000b9c23) mup2_visualizer_spec_pane

0x4289,	// (0x000b159a) mup2_spec_half_pane

0x4292,	// (0x000b15a3) mup2_spec_half_pane_cp

0x429a,	// (0x000b15ab) mup2_spec_bar_pane_ParamLimits

0x429a,	// (0x000b15ab) mup2_spec_bar_pane

0xc8b3,	// (0x000b9bc4) mup2_spec_bar_pane_g1

0xc8bd,	// (0x000b9bce) mup2_spec_bar_pane_g2

0x0001,

0xf606,	// (0x000bc917) mup2_spec_bar_pane_g

0x42ba,	// (0x000b15cb) mup2_osc_middle_pane

0xc8cf,	// (0x000b9be0) mup2_visualizer_osc_pane_g1

0x9554,	// (0x000b6865) popup_number_entry_window_t1_ParamLimits

0x9567,	// (0x000b6878) popup_number_entry_window_t2_ParamLimits

0x9579,	// (0x000b688a) popup_number_entry_window_t3_ParamLimits

0xfedb,	// (0x000ad1ec) popup_number_entry_window_t5_ParamLimits

0xfedb,	// (0x000ad1ec) popup_number_entry_window_t5

0xf0ca,	// (0x000bc3db) popup_number_entry_window_t_ParamLimits

0x958b,	// (0x000b689c) text_title_cp2_ParamLimits

0x9dd8,	// (0x000b70e9) aid_hotspot_pointer_text2_pane

0x9dfe,	// (0x000b710f) main_viewer_pane_g9_ParamLimits

0x9dfe,	// (0x000b710f) main_viewer_pane_g9

0xad66,	// (0x000b8077) cale_month_pane_t1_ParamLimits

0xad8c,	// (0x000b809d) bg_cale_pane_ParamLimits

0xada4,	// (0x000b80b5) list_cale_pane_ParamLimits

0xadb5,	// (0x000b80c6) listscroll_cale_day_pane_t1

0xadc7,	// (0x000b80d8) scroll_pane_cp09_ParamLimits

0x299d,	// (0x000afcae) main_mup_eq_pane_t1_ParamLimits

0x299d,	// (0x000afcae) main_mup_eq_pane_t1

0x29b9,	// (0x000afcca) main_mup_eq_pane_t2_ParamLimits

0x29b9,	// (0x000afcca) main_mup_eq_pane_t2

0x29d5,	// (0x000afce6) main_mup_eq_pane_t3_ParamLimits

0x29d5,	// (0x000afce6) main_mup_eq_pane_t3

0x29f3,	// (0x000afd04) main_mup_eq_pane_t4_ParamLimits

0x29f3,	// (0x000afd04) main_mup_eq_pane_t4

0x2a11,	// (0x000afd22) main_mup_eq_pane_t5_ParamLimits

0x2a11,	// (0x000afd22) main_mup_eq_pane_t5

0x2a2f,	// (0x000afd40) main_mup_eq_pane_t6_ParamLimits

0x2a2f,	// (0x000afd40) main_mup_eq_pane_t6

0x2a45,	// (0x000afd56) main_mup_eq_pane_t7_ParamLimits

0x2a45,	// (0x000afd56) main_mup_eq_pane_t7

0x2a5b,	// (0x000afd6c) main_mup_eq_pane_t8_ParamLimits

0x2a5b,	// (0x000afd6c) main_mup_eq_pane_t8

0x2a71,	// (0x000afd82) main_mup_eq_pane_t9_ParamLimits

0x2a71,	// (0x000afd82) main_mup_eq_pane_t9

0x2a8d,	// (0x000afd9e) main_mup_eq_pane_t10_ParamLimits

0x2a8d,	// (0x000afd9e) main_mup_eq_pane_t10

0x0009,

0xf455,	// (0x000bc766) main_mup_eq_pane_t_ParamLimits

0xf455,	// (0x000bc766) main_mup_eq_pane_t

0x2b62,	// (0x000afe73) mup_equalizer_pane_cp5_ParamLimits

0x2b7a,	// (0x000afe8b) mup_equalizer_pane_cp6_ParamLimits

0x2b92,	// (0x000afea3) mup_equalizer_pane_cp7_ParamLimits

0x94d5,	// (0x000b67e6) main_gallery_pane

0xc8d8,	// (0x000b9be9) smil2_volume_pane

0xc8e0,	// (0x000b9bf1) smil_status_volume_pane_g1_ParamLimits

0xc8f3,	// (0x000b9c04) smil_status_volume_pane_g2_ParamLimits

0x9e0a,	// (0x000b711b) smil_status_volume_pane_g3_ParamLimits

0xf60b,	// (0x000bc91c) smil_status_volume_pane_g_ParamLimits

0xca45,	// (0x000b9d56) bg_popup_window_pane_cp07_ParamLimits

0xca53,	// (0x000b9d64) blid_firmament_pane

0x42c3,	// (0x000b15d4) aid_size_cell_gallery_ParamLimits

0x42c3,	// (0x000b15d4) aid_size_cell_gallery

0x42d9,	// (0x000b15ea) grid_gallery_pane_ParamLimits

0x42d9,	// (0x000b15ea) grid_gallery_pane

0x42f4,	// (0x000b1605) cell_gallery_pane_ParamLimits

0x42f4,	// (0x000b1605) cell_gallery_pane

0xcb7c,	// (0x000b9e8d) bg_cell_gallery_focus_pane_ParamLimits

0xcb7c,	// (0x000b9e8d) bg_cell_gallery_focus_pane

0xcb8e,	// (0x000b9e9f) cell_gallery_pane_g1_ParamLimits

0xcb8e,	// (0x000b9e9f) cell_gallery_pane_g1

0x433f,	// (0x000b1650) cell_gallery_pane_g2_ParamLimits

0x433f,	// (0x000b1650) cell_gallery_pane_g2

0x434c,	// (0x000b165d) cell_gallery_pane_g3_ParamLimits

0x434c,	// (0x000b165d) cell_gallery_pane_g3

0xcb9a,	// (0x000b9eab) cell_gallery_pane_g4_ParamLimits

0xcb9a,	// (0x000b9eab) cell_gallery_pane_g4

0x0003,

0xf6b9,	// (0x000bc9ca) cell_gallery_pane_g_ParamLimits

0xf6b9,	// (0x000bc9ca) cell_gallery_pane_g

0xcba6,	// (0x000b9eb7) bg_cell_gallery_focus_pane_g1

0xcbae,	// (0x000b9ebf) bg_cell_gallery_focus_pane_g2

0xcbb6,	// (0x000b9ec7) bg_cell_gallery_focus_pane_g3

0xcbbe,	// (0x000b9ecf) bg_cell_gallery_focus_pane_g4

0xcbc6,	// (0x000b9ed7) bg_cell_gallery_focus_pane_g5

0xcbce,	// (0x000b9edf) bg_cell_gallery_focus_pane_g6

0xcbd6,	// (0x000b9ee7) bg_cell_gallery_focus_pane_g7

0xcbde,	// (0x000b9eef) bg_cell_gallery_focus_pane_g8

0x0007,

0xf6c2,	// (0x000bc9d3) bg_cell_gallery_focus_pane_g

0xcbe6,	// (0x000b9ef7) aid_firma_cardinal

0xcbfa,	// (0x000b9f0b) blid_firmament_pane_t1

0xcc11,	// (0x000b9f22) blid_firmament_pane_t2

0xcc28,	// (0x000b9f39) blid_firmament_pane_t3

0xcc3f,	// (0x000b9f50) blid_firmament_pane_t4

0x0003,

0xf6d3,	// (0x000bc9e4) blid_firmament_pane_t

0xcc56,	// (0x000b9f67) blid_sat_info_pane

0xcc66,	// (0x000b9f77) blid_sat_info_pane_g1

0xcc66,	// (0x000b9f77) blid_sat_info_pane_g2

0x0001,

0xf6dc,	// (0x000bc9ed) blid_sat_info_pane_g

0xcc70,	// (0x000b9f81) blid_sat_info_pane_t1

0xcc7e,	// (0x000b9f8f) smil2_volume_content_pane

0xcc87,	// (0x000b9f98) smil2_volume_pane_g1

0xcc8f,	// (0x000b9fa0) smil2_volume_content_pane_g1

0xcc98,	// (0x000b9fa9) smil2_volume_content_pane_g2

0xcca1,	// (0x000b9fb2) smil2_volume_content_pane_g3

0xccaa,	// (0x000b9fbb) smil2_volume_content_pane_g4

0xccb3,	// (0x000b9fc4) smil2_volume_content_pane_g5

0xccbc,	// (0x000b9fcd) smil2_volume_content_pane_g6

0xccc5,	// (0x000b9fd6) smil2_volume_content_pane_g7

0xccce,	// (0x000b9fdf) smil2_volume_content_pane_g8

0xccd7,	// (0x000b9fe8) smil2_volume_content_pane_g9

0xcce0,	// (0x000b9ff1) smil2_volume_content_pane_g10

0x0009,

0xf6e1,	// (0x000bc9f2) smil2_volume_content_pane_g

0x0758,	// (0x000ada69) cale_week_day_heading_pane_t1_ParamLimits

0x07a2,	// (0x000adab3) cale_week_day_heading_pane_t2_ParamLimits

0x07f1,	// (0x000adb02) cale_week_day_heading_pane_t3_ParamLimits

0x0840,	// (0x000adb51) cale_week_day_heading_pane_t4_ParamLimits

0x088f,	// (0x000adba0) cale_week_day_heading_pane_t5_ParamLimits

0x08e2,	// (0x000adbf3) cale_week_day_heading_pane_t6_ParamLimits

0x0939,	// (0x000adc4a) cale_week_day_heading_pane_t7_ParamLimits

0xf1d1,	// (0x000bc4e2) cale_week_day_heading_pane_t_ParamLimits

0xa9d5,	// (0x000b7ce6) bg_cale_side_pane_ParamLimits

0x0983,	// (0x000adc94) cale_week_time_pane_t1_ParamLimits

0x09bd,	// (0x000adcce) cale_week_time_pane_t2_ParamLimits

0x09f7,	// (0x000add08) cale_week_time_pane_t3_ParamLimits

0x0a31,	// (0x000add42) cale_week_time_pane_t4_ParamLimits

0x0a6b,	// (0x000add7c) cale_week_time_pane_t5_ParamLimits

0x0aa5,	// (0x000addb6) cale_week_time_pane_t6_ParamLimits

0x0adf,	// (0x000addf0) cale_week_time_pane_t7_ParamLimits

0x0b19,	// (0x000ade2a) cale_week_time_pane_t8_ParamLimits

0xf1e0,	// (0x000bc4f1) cale_week_time_pane_t_ParamLimits

0x0b59,	// (0x000ade6a) cell_cale_week_pane_g2_ParamLimits

0xa9d5,	// (0x000b7ce6) bg_cale_side_pane_cp01_ParamLimits

0x1f40,	// (0x000af251) cale_month_week_pane_t1_ParamLimits

0x1f59,	// (0x000af26a) cale_month_week_pane_t2_ParamLimits

0x1f72,	// (0x000af283) cale_month_week_pane_t3_ParamLimits

0x1f8b,	// (0x000af29c) cale_month_week_pane_t4_ParamLimits

0x1fa4,	// (0x000af2b5) cale_month_week_pane_t5_ParamLimits

0x1fbd,	// (0x000af2ce) cale_month_week_pane_t6_ParamLimits

0xf2b5,	// (0x000bc5c6) cale_month_week_pane_t_ParamLimits

0x9cc9,	// (0x000b6fda) cell_cale_month_pane_g1_ParamLimits

0x94d5,	// (0x000b67e6) main_cale_event_viewer_pane

0x94d5,	// (0x000b67e6) listscroll_cale_event_viewer_pane

0xcce9,	// (0x000b9ffa) list_cale_ev_pane

0xccf1,	// (0x000ba002) scroll_pane_cp023

0x4359,	// (0x000b166a) field_cale_ev_pane_ParamLimits

0x4359,	// (0x000b166a) field_cale_ev_pane

0xccfd,	// (0x000ba00e) field_cale_ev_content_pane_ParamLimits

0xccfd,	// (0x000ba00e) field_cale_ev_content_pane

0xcd09,	// (0x000ba01a) field_cale_ev_pane_g1_ParamLimits

0xcd09,	// (0x000ba01a) field_cale_ev_pane_g1

0xcd15,	// (0x000ba026) field_cale_ev_pane_g2_ParamLimits

0xcd15,	// (0x000ba026) field_cale_ev_pane_g2

0xcd2d,	// (0x000ba03e) field_cale_ev_pane_g3_ParamLimits

0xcd2d,	// (0x000ba03e) field_cale_ev_pane_g3

0x0002,

0xf6f6,	// (0x000bca07) field_cale_ev_pane_g_ParamLimits

0xf6f6,	// (0x000bca07) field_cale_ev_pane_g

0xcd45,	// (0x000ba056) field_cale_ev_pane_t1_ParamLimits

0xcd45,	// (0x000ba056) field_cale_ev_pane_t1

0x437d,	// (0x000b168e) field_cale_ev_content_pane_t1_ParamLimits

0x437d,	// (0x000b168e) field_cale_ev_content_pane_t1

0xb4d7,	// (0x000b87e8) bg_button_pane_cp01

0x03a0,	// (0x000ad6b1) listscroll_cale_week_pane_ParamLimits

0x03b2,	// (0x000ad6c3) popup_toolbar_window_cp01

0xa9a1,	// (0x000b7cb2) listscroll_cale_week_pane_t1_ParamLimits

0x03a0,	// (0x000ad6b1) listscroll_cale_day_pane_ParamLimits

0x03b2,	// (0x000ad6c3) popup_toolbar_window_cp02

0xadb5,	// (0x000b80c6) listscroll_cale_day_pane_t1_ParamLimits

0x03a0,	// (0x000ad6b1) main_cale_month_pane_ParamLimits

0x38c5,	// (0x000b0bd6) popup_toolbar_window_cp03_ParamLimits

0x38c5,	// (0x000b0bd6) popup_toolbar_window_cp03

0x2eeb,	// (0x000b01fc) main_image_pane_g2_ParamLimits

0x2eeb,	// (0x000b01fc) main_image_pane_g2

0x2efc,	// (0x000b020d) main_image_pane_g3_ParamLimits

0x2efc,	// (0x000b020d) main_image_pane_g3

0x0002,

0xf4e7,	// (0x000bc7f8) main_image_pane_g_ParamLimits

0xf4e7,	// (0x000bc7f8) main_image_pane_g

0xb5f1,	// (0x000b8902) main_image_pane_t1_ParamLimits

0x2f0d,	// (0x000b021e) main_image_pane_t2_ParamLimits

0x2f0d,	// (0x000b021e) main_image_pane_t2

0x2f1f,	// (0x000b0230) main_image_pane_t3_ParamLimits

0x2f1f,	// (0x000b0230) main_image_pane_t3

0x2f47,	// (0x000b0258) main_image_pane_t4_ParamLimits

0x2f47,	// (0x000b0258) main_image_pane_t4

0x0003,

0xf4ee,	// (0x000bc7ff) main_image_pane_t_ParamLimits

0xf4ee,	// (0x000bc7ff) main_image_pane_t

0x2f67,	// (0x000b0278) popup_image_details_window_cp01

0x2f71,	// (0x000b0282) popup_toobar_trans_pane_cp01_ParamLimits

0x2f71,	// (0x000b0282) popup_toobar_trans_pane_cp01

0x3738,	// (0x000b0a49) popup_image_details_window_ParamLimits

0x3738,	// (0x000b0a49) popup_image_details_window

0xc837,	// (0x000b9b48) popup_image_focus_window

0x3b9f,	// (0x000b0eb0) camera2_autofocus_pane_ParamLimits

0x3b9f,	// (0x000b0eb0) camera2_autofocus_pane

0x94d5,	// (0x000b67e6) bg_popup_sub_pane_cp06

0xcd5c,	// (0x000ba06d) popup_image_focus_window_g1

0xcd64,	// (0x000ba075) popup_image_focus_window_g2

0xcd6c,	// (0x000ba07d) popup_image_focus_window_g3

0xcd74,	// (0x000ba085) popup_image_focus_window_g4

0x0003,

0xf6fd,	// (0x000bca0e) popup_image_focus_window_g

0xcd7c,	// (0x000ba08d) popup_image_focus_window_t1

0xcd8a,	// (0x000ba09b) popup_image_focus_window_t2

0xcd9a,	// (0x000ba0ab) popup_image_focus_window_t3

0x0002,

0xf706,	// (0x000bca17) popup_image_focus_window_t

0xcda8,	// (0x000ba0b9) camera2_autofocus_pane_g1

0x9526,	// (0x000b6837) bg_tb_trans_pane_cp01

0xcdb6,	// (0x000ba0c7) popup_image_details_window_g1

0xcdc9,	// (0x000ba0da) popup_image_details_window_g2

0x0002,

0xf718,	// (0x000bca29) popup_image_details_window_g

0xcdf2,	// (0x000ba103) popup_image_details_window_t1

0xce04,	// (0x000ba115) popup_image_details_window_t2

0xce1d,	// (0x000ba12e) popup_image_details_window_t3

0xce31,	// (0x000ba142) popup_image_details_window_t4

0xce4c,	// (0x000ba15d) popup_image_details_window_t5

0x0004,

0xf71f,	// (0x000bca30) popup_image_details_window_t

0xa866,	// (0x000b7b77) bg_calc_paper_pane_ParamLimits

0x9c25,	// (0x000b6f36) grid_highlight_pane_cp013

0x9c2f,	// (0x000b6f40) list_calc_pane_ParamLimits

0x9c41,	// (0x000b6f52) scroll_pane_cp024

0xa87a,	// (0x000b7b8b) bg_calc_display_pane_ParamLimits

0x01de,	// (0x000ad4ef) calc_display_pane_t1_ParamLimits

0x01f0,	// (0x000ad501) calc_display_pane_t2_ParamLimits

0x9c49,	// (0x000b6f5a) calc_display_pane_t3_ParamLimits

0xf151,	// (0x000bc462) calc_display_pane_t_ParamLimits

0x02b9,	// (0x000ad5ca) cell_calc_pane_g2

0x0001,

0xf16e,	// (0x000bc47f) cell_calc_pane_g

0x02c2,	// (0x000ad5d3) cell_calc_pane_t1

0xa8d9,	// (0x000b7bea) grid_highlight_pane_cp02_ParamLimits

0xa8ef,	// (0x000b7c00) toolbar_button_pane_cp01_ParamLimits

0xa8ef,	// (0x000b7c00) toolbar_button_pane_cp01

0xb636,	// (0x000b8947) temp_image_control_pane_ParamLimits

0xb636,	// (0x000b8947) temp_image_control_pane

0x9526,	// (0x000b6837) main_mp3_pane

0xce66,	// (0x000ba177) temp_image_control_pane_g1_ParamLimits

0xce66,	// (0x000ba177) temp_image_control_pane_g1

0xce74,	// (0x000ba185) temp_image_control_pane_g2_ParamLimits

0xce74,	// (0x000ba185) temp_image_control_pane_g2

0xce86,	// (0x000ba197) temp_image_control_pane_g3_ParamLimits

0xce86,	// (0x000ba197) temp_image_control_pane_g3

0x43ce,	// (0x000b16df) temp_image_control_pane_g4_ParamLimits

0x43ce,	// (0x000b16df) temp_image_control_pane_g4

0x0003,

0xf72a,	// (0x000bca3b) temp_image_control_pane_g_ParamLimits

0xf72a,	// (0x000bca3b) temp_image_control_pane_g

0xce66,	// (0x000ba177) main_mp3_pane_g1

0x43e1,	// (0x000b16f2) main_mp3_pane_g2

0x0007,

0xf733,	// (0x000bca44) main_mp3_pane_g

0xcec9,	// (0x000ba1da) main_mp3_pane_t1

0xaa38,	// (0x000b7d49) main_camera_pane_g8_ParamLimits

0xaa38,	// (0x000b7d49) main_camera_pane_g8

0x0e80,	// (0x000ae191) main_video_pane_g7_ParamLimits

0x0e80,	// (0x000ae191) main_video_pane_g7

0x9e47,	// (0x000b7158) main_camera2_pane_t7_ParamLimits

0x9e47,	// (0x000b7158) main_camera2_pane_t7

0xab84,	// (0x000b7e95) scroll_pane_cp025_ParamLimits

0xab84,	// (0x000b7e95) scroll_pane_cp025

0xab98,	// (0x000b7ea9) scroll_pane_cp026_ParamLimits

0xab98,	// (0x000b7ea9) scroll_pane_cp026

0xaba7,	// (0x000b7eb8) wml_content_pane_ParamLimits

0x94d5,	// (0x000b67e6) main_touch_calib_pane

0x44b3,	// (0x000b17c4) main_touch_calib_pane_g1

0x44c5,	// (0x000b17d6) main_touch_calib_pane_g2

0x44d7,	// (0x000b17e8) main_touch_calib_pane_g3

0x44e9,	// (0x000b17fa) main_touch_calib_pane_g4

0x0003,

0xf751,	// (0x000bca62) main_touch_calib_pane_g

0x44fb,	// (0x000b180c) main_touch_calib_pane_t1

0x4515,	// (0x000b1826) main_touch_calib_pane_t2

0x0004,

0xf75a,	// (0x000bca6b) main_touch_calib_pane_t

0xb2a7,	// (0x000b85b8) mup_progress_pane_cp02

0xb2c6,	// (0x000b85d7) navi_pane_g1

0xb328,	// (0x000b8639) navi_pane_mp_t3

0x9526,	// (0x000b6837) main_mp3_pane_ParamLimits

0x3907,	// (0x000b0c18) navi_pane_ParamLimits

0xce66,	// (0x000ba177) main_mp3_pane_g1_ParamLimits

0x43e1,	// (0x000b16f2) main_mp3_pane_g2_ParamLimits

0x43ed,	// (0x000b16fe) main_mp3_pane_g3_ParamLimits

0x43ed,	// (0x000b16fe) main_mp3_pane_g3

0x43fb,	// (0x000b170c) main_mp3_pane_g4_ParamLimits

0x43fb,	// (0x000b170c) main_mp3_pane_g4

0xce96,	// (0x000ba1a7) main_mp3_pane_g5_ParamLimits

0xce96,	// (0x000ba1a7) main_mp3_pane_g5

0xcea4,	// (0x000ba1b5) main_mp3_pane_g6_ParamLimits

0xcea4,	// (0x000ba1b5) main_mp3_pane_g6

0xceb1,	// (0x000ba1c2) main_mp3_pane_g7_ParamLimits

0xceb1,	// (0x000ba1c2) main_mp3_pane_g7

0xcebd,	// (0x000ba1ce) main_mp3_pane_g8_ParamLimits

0xcebd,	// (0x000ba1ce) main_mp3_pane_g8

0xf733,	// (0x000bca44) main_mp3_pane_g_ParamLimits

0x4407,	// (0x000b1718) main_mp3_pane_t2

0x4415,	// (0x000b1726) main_mp3_pane_t3

0xced7,	// (0x000ba1e8) main_mp3_pane_t4

0xceed,	// (0x000ba1fe) main_mp3_pane_t5

0x0005,

0xf744,	// (0x000bca55) main_mp3_pane_t

0xcefb,	// (0x000ba20c) mup_progress_pane_cp01

0xf0c2,	// (0x000bc3d3) aid_zoom_text_secondary2

0xcce9,	// (0x000b9ffa) list_cale_ev2_pane

0xccf1,	// (0x000ba002) scroll_pane_cp023_ParamLimits

0x456f,	// (0x000b1880) field_cale_ev2_pane_ParamLimits

0x456f,	// (0x000b1880) field_cale_ev2_pane

0x4593,	// (0x000b18a4) field_cale_ev2_pane_g1_ParamLimits

0x4593,	// (0x000b18a4) field_cale_ev2_pane_g1

0x459f,	// (0x000b18b0) field_cale_ev2_pane_g2_ParamLimits

0x459f,	// (0x000b18b0) field_cale_ev2_pane_g2

0x45b7,	// (0x000b18c8) field_cale_ev2_pane_g3_ParamLimits

0x45b7,	// (0x000b18c8) field_cale_ev2_pane_g3

0x0003,

0xf765,	// (0x000bca76) field_cale_ev2_pane_g_ParamLimits

0xf765,	// (0x000bca76) field_cale_ev2_pane_g

0x45cf,	// (0x000b18e0) field_cale_ev2_pane_t1_ParamLimits

0x45cf,	// (0x000b18e0) field_cale_ev2_pane_t1

0x45e6,	// (0x000b18f7) field_cale_ev2_pane_t2_ParamLimits

0x45e6,	// (0x000b18f7) field_cale_ev2_pane_t2

0x0001,

0xf76e,	// (0x000bca7f) field_cale_ev2_pane_t_ParamLimits

0xf76e,	// (0x000bca7f) field_cale_ev2_pane_t

0x2d88,	// (0x000b0099) main_postcard_pane_g5_ParamLimits

0x2d88,	// (0x000b0099) main_postcard_pane_g5

0x2d9e,	// (0x000b00af) main_postcard_pane_g6_ParamLimits

0x2d9e,	// (0x000b00af) main_postcard_pane_g6

0x0c2c,	// (0x000adf3d) camera2_autofocus_pane_cp_ParamLimits

0x0c2c,	// (0x000adf3d) camera2_autofocus_pane_cp

0x9526,	// (0x000b6837) main_mup3_pane

0x461b,	// (0x000b192c) main_mup3_pane_g1_ParamLimits

0x461b,	// (0x000b192c) main_mup3_pane_g1

0x463d,	// (0x000b194e) main_mup3_pane_g2_ParamLimits

0x463d,	// (0x000b194e) main_mup3_pane_g2

0x46c0,	// (0x000b19d1) main_mup3_pane_g3_ParamLimits

0x46c0,	// (0x000b19d1) main_mup3_pane_g3

0x4708,	// (0x000b1a19) main_mup3_pane_g4_ParamLimits

0x4708,	// (0x000b1a19) main_mup3_pane_g4

0x474e,	// (0x000b1a5f) main_mup3_pane_g5_ParamLimits

0x474e,	// (0x000b1a5f) main_mup3_pane_g5

0x4796,	// (0x000b1aa7) main_mup3_pane_g6_ParamLimits

0x4796,	// (0x000b1aa7) main_mup3_pane_g6

0xcf03,	// (0x000ba214) main_mup3_pane_g7_ParamLimits

0xcf03,	// (0x000ba214) main_mup3_pane_g7

0x0007,

0xf77e,	// (0x000bca8f) main_mup3_pane_g_ParamLimits

0xf77e,	// (0x000bca8f) main_mup3_pane_g

0x4816,	// (0x000b1b27) main_mup3_pane_t1_ParamLimits

0x4816,	// (0x000b1b27) main_mup3_pane_t1

0x4884,	// (0x000b1b95) main_mup3_pane_t2_ParamLimits

0x4884,	// (0x000b1b95) main_mup3_pane_t2

0x495a,	// (0x000b1c6b) main_mup3_pane_t4_ParamLimits

0x495a,	// (0x000b1c6b) main_mup3_pane_t4

0x49b8,	// (0x000b1cc9) main_mup3_pane_t5_ParamLimits

0x49b8,	// (0x000b1cc9) main_mup3_pane_t5

0x4a72,	// (0x000b1d83) main_mup3_pane_t6_ParamLimits

0x4a72,	// (0x000b1d83) main_mup3_pane_t6

0x0005,

0xf78f,	// (0x000bcaa0) main_mup3_pane_t_ParamLimits

0xf78f,	// (0x000bcaa0) main_mup3_pane_t

0x4b2a,	// (0x000b1e3b) mup3_progress_pane_ParamLimits

0x4b2a,	// (0x000b1e3b) mup3_progress_pane

0x4bbc,	// (0x000b1ecd) popup_mup3_control_window_ParamLimits

0x4bbc,	// (0x000b1ecd) popup_mup3_control_window

0xcf11,	// (0x000ba222) popup_mup3_text_window

0x4bf2,	// (0x000b1f03) mup3_progress_pane_t1

0x4c10,	// (0x000b1f21) mup3_progress_pane_t2

0xcf19,	// (0x000ba22a) mup3_progress_pane_t3

0x0002,

0xf79c,	// (0x000bcaad) mup3_progress_pane_t

0xcf36,	// (0x000ba247) mup_progress_pane_cp03

0x94d5,	// (0x000b67e6) bg_tb_trans_pane_cp04

0x4c2e,	// (0x000b1f3f) mup3_volume_pane

0x4c36,	// (0x000b1f47) popup_mup3_control_window_g1

0x4c3f,	// (0x000b1f50) mup3_volume_pane_g1

0x4c48,	// (0x000b1f59) mup3_volume_pane_g2

0x4c51,	// (0x000b1f62) mup3_volume_pane_g3

0x0002,

0xf7a3,	// (0x000bcab4) mup3_volume_pane_g

0x94d5,	// (0x000b67e6) bg_tb_trans_pane_cp03

0xcf46,	// (0x000ba257) popup_mup3_text_window_g1

0xcf4e,	// (0x000ba25f) popup_mup3_text_window_t1

0xa8c2,	// (0x000b7bd3) list_calc_item_pane_g1_ParamLimits

0xc9b3,	// (0x000b9cc4) mup_volume_pane_cp_g1

0x452f,	// (0x000b1840) main_touch_calib_pane_t3

0x4543,	// (0x000b1854) main_touch_calib_pane_t4

0x4559,	// (0x000b186a) main_touch_calib_pane_t5

0x94df,	// (0x000b67f0) aid_cell_size_toolbar2

0x94e7,	// (0x000b67f8) aid_popup3_width_pane

0xfc71,	// (0x000acf82) aid_zoom_text_msg_primary

0x0c09,	// (0x000adf1a) vorec_t7

0xa886,	// (0x000b7b97) bg_calc_paper_pane_g1_ParamLimits

0xa892,	// (0x000b7ba3) bg_calc_paper_pane_g2_ParamLimits

0xa89e,	// (0x000b7baf) bg_calc_paper_pane_g3_ParamLimits

0xa8aa,	// (0x000b7bbb) bg_calc_paper_pane_g4_ParamLimits

0xa8b6,	// (0x000b7bc7) bg_calc_paper_pane_g5_ParamLimits

0x023f,	// (0x000ad550) bg_calc_paper_pane_g6_ParamLimits

0x0252,	// (0x000ad563) bg_calc_paper_pane_g7_ParamLimits

0x0265,	// (0x000ad576) bg_calc_paper_pane_g8_ParamLimits

0xf158,	// (0x000bc469) bg_calc_paper_pane_g_ParamLimits

0x0276,	// (0x000ad587) calc_bg_paper_pane_g9_ParamLimits

0x0d8e,	// (0x000ae09f) image_qvga_pane_ParamLimits

0x0d8e,	// (0x000ae09f) image_qvga_pane

0x9ba2,	// (0x000b6eb3) bg_popup_sub_pane_cp04_ParamLimits

0xb56d,	// (0x000b887e) popup_mup_playback_window_g1_ParamLimits

0xb579,	// (0x000b888a) popup_mup_playback_window_t1_ParamLimits

0xb58e,	// (0x000b889f) popup_mup_playback_window_t2_ParamLimits

0xf4e2,	// (0x000bc7f3) popup_mup_playback_window_t_ParamLimits

0x4023,	// (0x000b1334) main_mup2_pane_g3_ParamLimits

0x4023,	// (0x000b1334) main_mup2_pane_g3

0x1194,	// (0x000ae4a5) popup_toolbar_window_cp04

0xb989,	// (0x000b8c9a) popup_call2_audio_second_window_g3_ParamLimits

0xb989,	// (0x000b8c9a) popup_call2_audio_second_window_g3

0xbe25,	// (0x000b9136) popup_call2_audio_first_window_g4_ParamLimits

0xbe25,	// (0x000b9136) popup_call2_audio_first_window_g4

0xc4a4,	// (0x000b97b5) popup_call2_audio_in_window_g4_ParamLimits

0xc4a4,	// (0x000b97b5) popup_call2_audio_in_window_g4

0x2ecd,	// (0x000b01de) aid_area_sk_bg_cut_ParamLimits

0x2ecd,	// (0x000b01de) aid_area_sk_bg_cut

0xb5a3,	// (0x000b88b4) aid_area_sk_bg_cut_2_ParamLimits

0xb5a3,	// (0x000b88b4) aid_area_sk_bg_cut_2

0x432f,	// (0x000b1640) aid_placing_details_win

0x4337,	// (0x000b1648) aid_placing_details_win_2

0xcda8,	// (0x000ba0b9) camera2_autofocus_pane_g1_ParamLimits

0xfe22,	// (0x000ad133) popup_fixed_preview_cale_window_ParamLimits

0xfe22,	// (0x000ad133) popup_fixed_preview_cale_window

0xb36f,	// (0x000b8680) navi_slider_pane_g3

0xb378,	// (0x000b8689) navi_slider_pane_g4

0xb381,	// (0x000b8692) navi_slider_pane_g5

0xb36f,	// (0x000b8680) navi_slider_pane_g6

0x9d6f,	// (0x000b7080) navi_slider_pane_g7

0xb4a4,	// (0x000b87b5) mup_scale_pane_g3

0xb4ad,	// (0x000b87be) mup_scale_pane_g4

0xb4b6,	// (0x000b87c7) mup_scale_pane_g5

0x2baa,	// (0x000afebb) mup_scale_pane_g6

0x2bb3,	// (0x000afec4) mup_scale_pane_g7

0xb36f,	// (0x000b8680) cams2_slider_pane_g3

0xca35,	// (0x000b9d46) cams2_slider_pane_g4

0x9ead,	// (0x000b71be) cams2_slider_pane_g5

0xb36f,	// (0x000b8680) cams2_slider_pane_g6

0x9eb5,	// (0x000b71c6) cams2_slider_pane_g7

0xcc66,	// (0x000b9f77) camera2_autofocus_pane_cp_g1

0xc809,	// (0x000b9b1a) bg_popup_preview_window_pane_cp02_ParamLimits

0xc809,	// (0x000b9b1a) bg_popup_preview_window_pane_cp02

0xcf5c,	// (0x000ba26d) list_fp_cale_pane_ParamLimits

0xcf5c,	// (0x000ba26d) list_fp_cale_pane

0xcf68,	// (0x000ba279) popup_fixed_preview_cale_window_t1_ParamLimits

0xcf68,	// (0x000ba279) popup_fixed_preview_cale_window_t1

0x4c5a,	// (0x000b1f6b) popup_fixed_preview_cale_window_t2_ParamLimits

0x4c5a,	// (0x000b1f6b) popup_fixed_preview_cale_window_t2

0x4c6f,	// (0x000b1f80) popup_fixed_preview_cale_window_t3_ParamLimits

0x4c6f,	// (0x000b1f80) popup_fixed_preview_cale_window_t3

0x0002,

0xf7aa,	// (0x000bcabb) popup_fixed_preview_cale_window_t_ParamLimits

0xf7aa,	// (0x000bcabb) popup_fixed_preview_cale_window_t

0x4c84,	// (0x000b1f95) list_single_fp_cale_pane_ParamLimits

0x4c84,	// (0x000b1f95) list_single_fp_cale_pane

0xcf86,	// (0x000ba297) list_single_fp_cale_pane_g1_ParamLimits

0xcf86,	// (0x000ba297) list_single_fp_cale_pane_g1

0xcf92,	// (0x000ba2a3) list_single_fp_cale_pane_g2_ParamLimits

0xcf92,	// (0x000ba2a3) list_single_fp_cale_pane_g2

0x0002,

0xf7b1,	// (0x000bcac2) list_single_fp_cale_pane_g_ParamLimits

0xf7b1,	// (0x000bcac2) list_single_fp_cale_pane_g

0xcfab,	// (0x000ba2bc) list_single_fp_cale_pane_t1_ParamLimits

0xcfab,	// (0x000ba2bc) list_single_fp_cale_pane_t1

0xcfbd,	// (0x000ba2ce) list_single_fp_cale_pane_t2_ParamLimits

0xcfbd,	// (0x000ba2ce) list_single_fp_cale_pane_t2

0x0001,

0xf7b8,	// (0x000bcac9) list_single_fp_cale_pane_t_ParamLimits

0xf7b8,	// (0x000bcac9) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x94d5,	// (0x000b67e6) main_dialer_pane

0x4c99,	// (0x000b1faa) aid_cell_size_keypad

0x4ca3,	// (0x000b1fb4) dialer_ne_pane

0x4cad,	// (0x000b1fbe) grid_dialer_command_1_pane

0x4cb5,	// (0x000b1fc6) grid_dialer_command_2_pane

0x4cbd,	// (0x000b1fce) grid_dialer_keypad_pane

0x4ccf,	// (0x000b1fe0) bg_popup_call_pane_cp06_ParamLimits

0x4ccf,	// (0x000b1fe0) bg_popup_call_pane_cp06

0x4cdb,	// (0x000b1fec) dialer_ne_clear_pane_ParamLimits

0x4cdb,	// (0x000b1fec) dialer_ne_clear_pane

0xcff0,	// (0x000ba301) dialer_ne_pane_g1

0xcff8,	// (0x000ba309) dialer_ne_pane_t1_ParamLimits

0xcff8,	// (0x000ba309) dialer_ne_pane_t1

0x4ce7,	// (0x000b1ff8) dialer_ne_pane_t2_ParamLimits

0x4ce7,	// (0x000b1ff8) dialer_ne_pane_t2

0x4d11,	// (0x000b2022) dialer_ne_pane_t3_ParamLimits

0x4d11,	// (0x000b2022) dialer_ne_pane_t3

0x0002,

0xf7bd,	// (0x000bcace) dialer_ne_pane_t_ParamLimits

0xf7bd,	// (0x000bcace) dialer_ne_pane_t

0x4d41,	// (0x000b2052) dialer_ne_pane_t3_copy1_ParamLimits

0x4d41,	// (0x000b2052) dialer_ne_pane_t3_copy1

0x4d70,	// (0x000b2081) cell_dialer_keypad_pane_ParamLimits

0x4d70,	// (0x000b2081) cell_dialer_keypad_pane

0x4d87,	// (0x000b2098) cell_dialer_command_1_pane_ParamLimits

0x4d87,	// (0x000b2098) cell_dialer_command_1_pane

0x4d9d,	// (0x000b20ae) cell_dialer_command_2_pane_ParamLimits

0x4d9d,	// (0x000b20ae) cell_dialer_command_2_pane

0xd00a,	// (0x000ba31b) bg_button_pane_cp02_ParamLimits

0xd00a,	// (0x000ba31b) bg_button_pane_cp02

0x4dac,	// (0x000b20bd) cell_dialer_keypad_pane_g1_ParamLimits

0x4dac,	// (0x000b20bd) cell_dialer_keypad_pane_g1

0xd00a,	// (0x000ba31b) bg_button_pane_cp03_ParamLimits

0xd00a,	// (0x000ba31b) bg_button_pane_cp03

0x4dc1,	// (0x000b20d2) cell_dialer_command_1_pane_g1_ParamLimits

0x4dc1,	// (0x000b20d2) cell_dialer_command_1_pane_g1

0xd016,	// (0x000ba327) bg_button_pane_cp04

0x4dd5,	// (0x000b20e6) cell_dialer_command_2_pane_g1

0xaa30,	// (0x000b7d41) bg_button_pane_cp06

0xd01e,	// (0x000ba32f) dialer_ne_clear_pane_g1

0x267c,	// (0x000af98d) navi_pane_g2

0x26aa,	// (0x000af9bb) navi_pane_g3

0x0002,

0xf3e5,	// (0x000bc6f6) navi_pane_g

0x26d5,	// (0x000af9e6) navi_pane_mv_g2

0x26fc,	// (0x000afa0d) navi_pane_mv_g5

0x2704,	// (0x000afa15) navi_pane_mv_t1

0xa87a,	// (0x000b7b8b) main_clock2_pane

0x4e20,	// (0x000b2131) main_clock2_list_pane_ParamLimits

0x4e20,	// (0x000b2131) main_clock2_list_pane

0x4e58,	// (0x000b2169) main_clock2_pane_t1_ParamLimits

0x4e58,	// (0x000b2169) main_clock2_pane_t1

0x4e94,	// (0x000b21a5) main_clock2_pane_t2_ParamLimits

0x4e94,	// (0x000b21a5) main_clock2_pane_t2

0x0004,

0xf7c9,	// (0x000bcada) main_clock2_pane_t_ParamLimits

0xf7c9,	// (0x000bcada) main_clock2_pane_t

0x4f34,	// (0x000b2245) popup_clock_analogue_window_cp03_ParamLimits

0x4f34,	// (0x000b2245) popup_clock_analogue_window_cp03

0x4f5b,	// (0x000b226c) popup_clock_digital_window_cp02_ParamLimits

0x4f5b,	// (0x000b226c) popup_clock_digital_window_cp02

0x4fd4,	// (0x000b22e5) main_clock2_list_single_pane_ParamLimits

0x4fd4,	// (0x000b22e5) main_clock2_list_single_pane

0xaa30,	// (0x000b7d41) list_highlight_pane_cp05

0xd05a,	// (0x000ba36b) main_clock2_list_single_pane_t1

0x1194,	// (0x000ae4a5) popup_toolbar_window_cp04_ParamLimits

0x439e,	// (0x000b16af) camera2_autofocus_pane_g2_ParamLimits

0x439e,	// (0x000b16af) camera2_autofocus_pane_g2

0x43aa,	// (0x000b16bb) camera2_autofocus_pane_g3_ParamLimits

0x43aa,	// (0x000b16bb) camera2_autofocus_pane_g3

0x43b6,	// (0x000b16c7) camera2_autofocus_pane_g4_ParamLimits

0x43b6,	// (0x000b16c7) camera2_autofocus_pane_g4

0x43c2,	// (0x000b16d3) camera2_autofocus_pane_g5_ParamLimits

0x43c2,	// (0x000b16d3) camera2_autofocus_pane_g5

0x0004,

0xf70d,	// (0x000bca1e) camera2_autofocus_pane_g_ParamLimits

0xf70d,	// (0x000bca1e) camera2_autofocus_pane_g

0x45fb,	// (0x000b190c) camera2_autofocus_pane_cp_g2

0x4603,	// (0x000b1914) camera2_autofocus_pane_cp_g3

0x460b,	// (0x000b191c) camera2_autofocus_pane_cp_g4

0x4613,	// (0x000b1924) camera2_autofocus_pane_cp_g5

0x0004,

0xf773,	// (0x000bca84) camera2_autofocus_pane_cp_g

0x4cc7,	// (0x000b1fd8) popup_dialer_spcha_window

0x94d5,	// (0x000b67e6) bg_popup_sub_pane_cp07

0xd068,	// (0x000ba379) list_spcha_pane

0xd070,	// (0x000ba381) list_single_spcha_pane_ParamLimits

0xd070,	// (0x000ba381) list_single_spcha_pane

0x94d5,	// (0x000b67e6) list_highlight_pane_cp06

0xd081,	// (0x000ba392) list_single_spcha_pane_t1

0xc24e,	// (0x000b955f) popup_call2_audio_out_window_g4_ParamLimits

0xc24e,	// (0x000b955f) popup_call2_audio_out_window_g4

0x94d5,	// (0x000b67e6) main_imed2_pane

0xc841,	// (0x000b9b52) popup_imed_adjust2_window

0x3750,	// (0x000b0a61) popup_imed_trans_window_ParamLimits

0x3750,	// (0x000b0a61) popup_imed_trans_window

0xca9e,	// (0x000b9daf) popup_blid_sat_info2_window_t1

0xcaac,	// (0x000b9dbd) popup_blid_sat_info2_window_t2

0x000a,

0xf6a2,	// (0x000bc9b3) popup_blid_sat_info2_window_t

0x508a,	// (0x000b239b) aid_size_cell_colour_35

0x50aa,	// (0x000b23bb) aid_size_cell_colour_112

0x50ca,	// (0x000b23db) aid_size_cell_effect

0xc815,	// (0x000b9b26) bg_tb_trans_pane_cp02

0xaec6,	// (0x000b81d7) heading_imed_pane

0x50ea,	// (0x000b23fb) listscroll_imed_pane

0xd08f,	// (0x000ba3a0) heading_imed_pane_g1

0xd097,	// (0x000ba3a8) heading_imed_pane_t1

0xd0a5,	// (0x000ba3b6) grid_imed_colour_35_pane_ParamLimits

0xd0a5,	// (0x000ba3b6) grid_imed_colour_35_pane

0x50f6,	// (0x000b2407) grid_imed_effect_pane

0xd0c1,	// (0x000ba3d2) list_imed_aspect_pane

0x510b,	// (0x000b241c) scroll_pane_cp027_ParamLimits

0x510b,	// (0x000b241c) scroll_pane_cp027

0x511c,	// (0x000b242d) cell_imed_effect_pane_ParamLimits

0x511c,	// (0x000b242d) cell_imed_effect_pane

0xd0c9,	// (0x000ba3da) cell_imed_colour_pane_ParamLimits

0xd0c9,	// (0x000ba3da) cell_imed_colour_pane

0xd113,	// (0x000ba424) cell_imed_colour_pane_g1_ParamLimits

0xd113,	// (0x000ba424) cell_imed_colour_pane_g1

0xd124,	// (0x000ba435) hgihlgiht_grid_pane_cp016_ParamLimits

0xd124,	// (0x000ba435) hgihlgiht_grid_pane_cp016

0x5147,	// (0x000b2458) cell_imed_effect_pane_g1

0x514f,	// (0x000b2460) grid_highlight_pane_cp017

0xd135,	// (0x000ba446) list_imed_single_pane_ParamLimits

0xd135,	// (0x000ba446) list_imed_single_pane

0x94d5,	// (0x000b67e6) list_highlight_pane_cp07

0xd149,	// (0x000ba45a) list_imed_aspect_pane_comp1_t1

0xc815,	// (0x000b9b26) bg_tb_trans_pane_cp05

0xd16b,	// (0x000ba47c) popup_imed_adjust2_window_g1

0xd192,	// (0x000ba4a3) popup_imed_adjust2_window_t1

0xd1aa,	// (0x000ba4bb) slider_imed_adjust_pane

0xd1be,	// (0x000ba4cf) slider_imed_adjust_pane_g1

0xd1ce,	// (0x000ba4df) slider_imed_adjust_pane_g2

0xd1de,	// (0x000ba4ef) slider_imed_adjust_pane_g3

0xd1ef,	// (0x000ba500) slider_imed_adjust_pane_g4

0x0003,

0xf7e6,	// (0x000bcaf7) slider_imed_adjust_pane_g

0x5158,	// (0x000b2469) aid_size_cell_clipart2

0x5164,	// (0x000b2475) grid_imed_clipart_pane

0xd200,	// (0x000ba511) scroll_pane_cp031

0x516e,	// (0x000b247f) cell_imed_clipart_pane_ParamLimits

0x516e,	// (0x000b247f) cell_imed_clipart_pane

0x518b,	// (0x000b249c) cell_imed_clipart_pane_g1

0x94d5,	// (0x000b67e6) grid_highlight_pane_cp014

0x4e35,	// (0x000b2146) main_clock2_pane_g1_ParamLimits

0x4e35,	// (0x000b2146) main_clock2_pane_g1

0x4f7b,	// (0x000b228c) aid_call2_pane_cp10

0x4f8d,	// (0x000b229e) aid_call_pane_cp10

0xb29b,	// (0x000b85ac) popup_clock_analogue_window_cp10_g1

0xb29b,	// (0x000b85ac) popup_clock_analogue_window_cp10_g2

0x4f9f,	// (0x000b22b0) popup_clock_analogue_window_cp10_g3

0x4f9f,	// (0x000b22b0) popup_clock_analogue_window_cp10_g4

0xb29b,	// (0x000b85ac) popup_clock_analogue_window_cp10_g5

0x0004,

0xf7d4,	// (0x000bcae5) popup_clock_analogue_window_cp10_g

0x4fb5,	// (0x000b22c6) popup_clock_analogue_window_cp10_t1

0x4fe6,	// (0x000b22f7) clock_digital_number_pane_cp10_ParamLimits

0x4fe6,	// (0x000b22f7) clock_digital_number_pane_cp10

0x5000,	// (0x000b2311) clock_digital_number_pane_cp11_ParamLimits

0x5000,	// (0x000b2311) clock_digital_number_pane_cp11

0x501a,	// (0x000b232b) clock_digital_number_pane_cp12_ParamLimits

0x501a,	// (0x000b232b) clock_digital_number_pane_cp12

0x5034,	// (0x000b2345) clock_digital_number_pane_cp13_ParamLimits

0x5034,	// (0x000b2345) clock_digital_number_pane_cp13

0x504e,	// (0x000b235f) clock_digital_separator_pane_cp10_ParamLimits

0x504e,	// (0x000b235f) clock_digital_separator_pane_cp10

0x5068,	// (0x000b2379) popup_clock_digital_window_cp02_t1_ParamLimits

0x5068,	// (0x000b2379) popup_clock_digital_window_cp02_t1

0x9b9a,	// (0x000b6eab) clock_digital_number_pane_cp10_g1

0x9b9a,	// (0x000b6eab) clock_digital_number_pane_cp10_g2

0x0001,

0xf7ef,	// (0x000bcb00) clock_digital_number_pane_cp10_g

0x9b9a,	// (0x000b6eab) clock_digital_separator_pane_cp10_g1

0x9b9a,	// (0x000b6eab) clock_digital_separator_pane_g2_cp10

0xb336,	// (0x000b8647) navi_pane_vded_g4

0xb33f,	// (0x000b8650) navi_pane_vded_g5

0xb348,	// (0x000b8659) navi_pane_vded_t1

0x94d5,	// (0x000b67e6) main_vded_pane

0x5194,	// (0x000b24a5) main_vded_pane_g1

0x51a0,	// (0x000b24b1) main_vded_pane_g2

0x51ac,	// (0x000b24bd) main_vded_pane_g3

0x0002,

0xf7f4,	// (0x000bcb05) main_vded_pane_g

0x51b8,	// (0x000b24c9) main_vded_pane_t1

0x51c6,	// (0x000b24d7) main_vded_pane_t2

0x0001,

0xf7fb,	// (0x000bcb0c) main_vded_pane_t

0x51d4,	// (0x000b24e5) vded_slider_pane

0x51de,	// (0x000b24ef) vded_video_pane

0xd208,	// (0x000ba519) vded_video_pane_g1

0x51e8,	// (0x000b24f9) vded_video_pane_g2

0xcc66,	// (0x000b9f77) vded_video_pane_g3

0x0002,

0xf800,	// (0x000bcb11) vded_video_pane_g

0xd212,	// (0x000ba523) vded_slider_pane_g1

0xc9b3,	// (0x000b9cc4) vded_slider_pane_g2

0xd21b,	// (0x000ba52c) vded_slider_pane_g3

0xd224,	// (0x000ba535) vded_slider_pane_g4

0xd22d,	// (0x000ba53e) vded_slider_pane_g5

0x0004,

0xf807,	// (0x000bcb18) vded_slider_pane_g

0x4ba6,	// (0x000b1eb7) mup3_rocker_pane_ParamLimits

0x4ba6,	// (0x000b1eb7) mup3_rocker_pane

0x51f1,	// (0x000b2502) mup3_control_keys_pane_g1

0x51f9,	// (0x000b250a) mup3_control_keys_pane_g2

0x5201,	// (0x000b2512) mup3_control_keys_pane_g3

0x5209,	// (0x000b251a) mup3_control_keys_pane_g4

0x0003,

0xf812,	// (0x000bcb23) mup3_control_keys_pane_g

0xfe59,	// (0x000ad16a) popup_toolbar2_fixed_window_cp01_ParamLimits

0xfe59,	// (0x000ad16a) popup_toolbar2_fixed_window_cp01

0x4bdc,	// (0x000b1eed) popup_toolbar2_fixed_window_cp02_ParamLimits

0x4bdc,	// (0x000b1eed) popup_toolbar2_fixed_window_cp02

0xbb8d,	// (0x000b8e9e) popup_call2_audio_second_window_t4_ParamLimits

0xbb8d,	// (0x000b8e9e) popup_call2_audio_second_window_t4

0xc0bb,	// (0x000b93cc) popup_call2_audio_first_window_t6_ParamLimits

0xc0bb,	// (0x000b93cc) popup_call2_audio_first_window_t6

0xc351,	// (0x000b9662) popup_call2_audio_out_window_t6_ParamLimits

0xc351,	// (0x000b9662) popup_call2_audio_out_window_t6

0x94d5,	// (0x000b67e6) main_vitu_pane

0x5219,	// (0x000b252a) aid_size_cell_itu_ParamLimits

0x5219,	// (0x000b252a) aid_size_cell_itu

0x9526,	// (0x000b6837) bg_popup_window_pane_cp08_ParamLimits

0x9526,	// (0x000b6837) bg_popup_window_pane_cp08

0x522f,	// (0x000b2540) field_vitu_entry_pane_ParamLimits

0x522f,	// (0x000b2540) field_vitu_entry_pane

0x5246,	// (0x000b2557) grid_vitu_function_pane_ParamLimits

0x5246,	// (0x000b2557) grid_vitu_function_pane

0x5261,	// (0x000b2572) grid_vitu_itu_pane_ParamLimits

0x5261,	// (0x000b2572) grid_vitu_itu_pane

0x527f,	// (0x000b2590) cell_vitu_itu_pane_ParamLimits

0x527f,	// (0x000b2590) cell_vitu_itu_pane

0x52a5,	// (0x000b25b6) cell_vitu_function_pane_ParamLimits

0x52a5,	// (0x000b25b6) cell_vitu_function_pane

0x9526,	// (0x000b6837) bg_popup_sub_pane_cp08_ParamLimits

0x9526,	// (0x000b6837) bg_popup_sub_pane_cp08

0x52c0,	// (0x000b25d1) field_vitu_entry_pane_t1_ParamLimits

0x52c0,	// (0x000b25d1) field_vitu_entry_pane_t1

0xd24e,	// (0x000ba55f) field_vitu_entry_pane_t2_ParamLimits

0xd24e,	// (0x000ba55f) field_vitu_entry_pane_t2

0x0001,

0xf820,	// (0x000bcb31) field_vitu_entry_pane_t_ParamLimits

0xf820,	// (0x000bcb31) field_vitu_entry_pane_t

0xd26b,	// (0x000ba57c) bg_button_pane_cp05_ParamLimits

0xd26b,	// (0x000ba57c) bg_button_pane_cp05

0x52e0,	// (0x000b25f1) cell_vitu_itu_pane_g1

0x52f8,	// (0x000b2609) cell_vitu_itu_pane_t1_ParamLimits

0x52f8,	// (0x000b2609) cell_vitu_itu_pane_t1

0x530a,	// (0x000b261b) cell_vitu_itu_pane_t2_ParamLimits

0x530a,	// (0x000b261b) cell_vitu_itu_pane_t2

0x0002,

0xf825,	// (0x000bcb36) cell_vitu_itu_pane_t_ParamLimits

0xf825,	// (0x000bcb36) cell_vitu_itu_pane_t

0xd279,	// (0x000ba58a) bg_button_pane_cp07

0x533f,	// (0x000b2650) cell_vitu_function_pane_g1

0x9c1d,	// (0x000b6f2e) main_calc_pane_g1

0xfc65,	// (0x000acf76) aid_visual_content_pane

0x94d5,	// (0x000b67e6) main_vradio_pane

0x5348,	// (0x000b2659) main_vradio_pane_g1_ParamLimits

0x5348,	// (0x000b2659) main_vradio_pane_g1

0xd283,	// (0x000ba594) main_vradio_pane_g2_ParamLimits

0xd283,	// (0x000ba594) main_vradio_pane_g2

0x0001,

0xf82c,	// (0x000bcb3d) main_vradio_pane_g_ParamLimits

0xf82c,	// (0x000bcb3d) main_vradio_pane_g

0x535f,	// (0x000b2670) main_vradio_pane_t1_ParamLimits

0x535f,	// (0x000b2670) main_vradio_pane_t1

0x5374,	// (0x000b2685) main_vradio_pane_t2_ParamLimits

0x5374,	// (0x000b2685) main_vradio_pane_t2

0xd290,	// (0x000ba5a1) main_vradio_pane_t3_ParamLimits

0xd290,	// (0x000ba5a1) main_vradio_pane_t3

0x0002,

0xf831,	// (0x000bcb42) main_vradio_pane_t_ParamLimits

0xf831,	// (0x000bcb42) main_vradio_pane_t

0x5389,	// (0x000b269a) vradio_rocker_control_pane_ParamLimits

0x5389,	// (0x000b269a) vradio_rocker_control_pane

0x539b,	// (0x000b26ac) vradio_station_info_pane_ParamLimits

0x539b,	// (0x000b26ac) vradio_station_info_pane

0xd2a4,	// (0x000ba5b5) vradio_frequency_info_pane_ParamLimits

0xd2a4,	// (0x000ba5b5) vradio_frequency_info_pane

0xcc66,	// (0x000b9f77) vradio_station_info_pane_g1

0xd2b3,	// (0x000ba5c4) vradio_station_info_pane_t1_ParamLimits

0xd2b3,	// (0x000ba5c4) vradio_station_info_pane_t1

0xd2d5,	// (0x000ba5e6) vradio_station_info_pane_t2_ParamLimits

0xd2d5,	// (0x000ba5e6) vradio_station_info_pane_t2

0x0001,

0xf838,	// (0x000bcb49) vradio_station_info_pane_t_ParamLimits

0xf838,	// (0x000bcb49) vradio_station_info_pane_t

0xd2e7,	// (0x000ba5f8) vradio_tuning_pane

0xd2ef,	// (0x000ba600) vradio_rocker_control_pane_g1

0xd2f7,	// (0x000ba608) vradio_rocker_control_pane_g2

0xd2ff,	// (0x000ba610) vradio_rocker_control_pane_g3

0xd307,	// (0x000ba618) vradio_rocker_control_pane_g4

0xd30f,	// (0x000ba620) vradio_rocker_control_pane_g5

0x0004,

0xf83d,	// (0x000bcb4e) vradio_rocker_control_pane_g

0x53ab,	// (0x000b26bc) vradio_frequency_info_pane_g1

0xd317,	// (0x000ba628) vradio_frequency_info_pane_t1_ParamLimits

0xd317,	// (0x000ba628) vradio_frequency_info_pane_t1

0x53b5,	// (0x000b26c6) vradio_tuning_pane_g1

0x53c0,	// (0x000b26d1) vradio_tuning_pane_t1

0x94f3,	// (0x000b6804) area_side_right_pane_ParamLimits

0x94f3,	// (0x000b6804) area_side_right_pane

0xc7d0,	// (0x000b9ae1) status_small_pane_g1

0xc7d8,	// (0x000b9ae9) status_small_pane_g2

0xc7e1,	// (0x000b9af2) status_small_pane_g3

0xc7ea,	// (0x000b9afb) status_small_pane_g4

0x0003,

0xf5f8,	// (0x000bc909) status_small_pane_g

0xc7f3,	// (0x000b9b04) status_small_pane_t1

0x94d5,	// (0x000b67e6) main_video3_pane

0xd32b,	// (0x000ba63c) cams_zoom_vslider_pane

0xd333,	// (0x000ba644) image3_wide_pane_ParamLimits

0xd333,	// (0x000ba644) image3_wide_pane

0xd34d,	// (0x000ba65e) image3_wide_small_pane

0xd359,	// (0x000ba66a) main_video3_pane_g1_ParamLimits

0xd359,	// (0x000ba66a) main_video3_pane_g1

0xd375,	// (0x000ba686) main_video3_pane_g2_ParamLimits

0xd375,	// (0x000ba686) main_video3_pane_g2

0x0001,

0xf848,	// (0x000bcb59) main_video3_pane_g_ParamLimits

0xf848,	// (0x000bcb59) main_video3_pane_g

0xd391,	// (0x000ba6a2) main_video3_pane_t1_ParamLimits

0xd391,	// (0x000ba6a2) main_video3_pane_t1

0xd3bc,	// (0x000ba6cd) main_video3_pane_t2_ParamLimits

0xd3bc,	// (0x000ba6cd) main_video3_pane_t2

0xd3e9,	// (0x000ba6fa) main_video3_pane_t3_ParamLimits

0xd3e9,	// (0x000ba6fa) main_video3_pane_t3

0x0002,

0xf84d,	// (0x000bcb5e) main_video3_pane_t_ParamLimits

0xf84d,	// (0x000bcb5e) main_video3_pane_t

0xd416,	// (0x000ba727) cams_zoom_vslider_pane_g1

0xd41f,	// (0x000ba730) cams_zoom_vslider_pane_g2

0x0001,

0xf854,	// (0x000bcb65) cams_zoom_vslider_pane_g

0xd427,	// (0x000ba738) small_slider_vertical_pane

0xcc66,	// (0x000b9f77) small_slider_vertical_pane_g1

0xcc66,	// (0x000b9f77) small_slider_vertical_pane_g2

0xd42f,	// (0x000ba740) small_slider_vertical_pane_g3

0x0002,

0xf859,	// (0x000bcb6a) small_slider_vertical_pane_g

0x94d5,	// (0x000b67e6) main_hwr_training_pane

0xd438,	// (0x000ba749) hwr_training_instruct_pane_ParamLimits

0xd438,	// (0x000ba749) hwr_training_instruct_pane

0x53cf,	// (0x000b26e0) hwr_training_navi_pane_ParamLimits

0x53cf,	// (0x000b26e0) hwr_training_navi_pane

0x53ee,	// (0x000b26ff) hwr_training_write_pane_ParamLimits

0x53ee,	// (0x000b26ff) hwr_training_write_pane

0x94d5,	// (0x000b67e6) bg_frame_shadow_pane

0xd46f,	// (0x000ba780) hwr_training_write_pane_g1

0xd477,	// (0x000ba788) hwr_training_write_pane_g2

0xd47f,	// (0x000ba790) hwr_training_write_pane_g3

0xd487,	// (0x000ba798) hwr_training_write_pane_g4

0xd48f,	// (0x000ba7a0) hwr_training_write_pane_g5

0xd497,	// (0x000ba7a8) hwr_training_write_pane_g6

0xd49f,	// (0x000ba7b0) hwr_training_write_pane_g7

0x0006,

0xf860,	// (0x000bcb71) hwr_training_write_pane_g

0x9ebe,	// (0x000b71cf) hwr_training_navi_pane_g1_ParamLimits

0x9ebe,	// (0x000b71cf) hwr_training_navi_pane_g1

0x9ed0,	// (0x000b71e1) hwr_training_navi_pane_g2_ParamLimits

0x9ed0,	// (0x000b71e1) hwr_training_navi_pane_g2

0x9ee2,	// (0x000b71f3) hwr_training_navi_pane_g3_ParamLimits

0x9ee2,	// (0x000b71f3) hwr_training_navi_pane_g3

0x9ef2,	// (0x000b7203) hwr_training_navi_pane_g4_ParamLimits

0x9ef2,	// (0x000b7203) hwr_training_navi_pane_g4

0x0004,

0xf86f,	// (0x000bcb80) hwr_training_navi_pane_g_ParamLimits

0xf86f,	// (0x000bcb80) hwr_training_navi_pane_g

0x9eff,	// (0x000b7210) hwr_training_navi_pane_t1

0x5436,	// (0x000b2747) list_single_hwr_training_instruct_pane_ParamLimits

0x5436,	// (0x000b2747) list_single_hwr_training_instruct_pane

0xd4a7,	// (0x000ba7b8) list_single_hwr_training_instruct_pane_t1

0xcba6,	// (0x000b9eb7) bg_frame_shadow_pane_g1

0xd4b6,	// (0x000ba7c7) bg_frame_shadow_pane_g2

0xd4be,	// (0x000ba7cf) bg_frame_shadow_pane_g3

0xd4c6,	// (0x000ba7d7) bg_frame_shadow_pane_g4

0xd4ce,	// (0x000ba7df) bg_frame_shadow_pane_g5

0xd4d6,	// (0x000ba7e7) bg_frame_shadow_pane_g6

0xd4de,	// (0x000ba7ef) bg_frame_shadow_pane_g7

0xa945,	// (0x000b7c56) bg_frame_shadow_pane_g8

0x0007,

0xf87a,	// (0x000bcb8b) bg_frame_shadow_pane_g

0x94d5,	// (0x000b67e6) main_video_tele_dialer_pane

0x544b,	// (0x000b275c) aid_size_cell_video_keypad_ParamLimits

0x544b,	// (0x000b275c) aid_size_cell_video_keypad

0x5465,	// (0x000b2776) grid_video_dialer_keypad_pane_ParamLimits

0x5465,	// (0x000b2776) grid_video_dialer_keypad_pane

0x54b1,	// (0x000b27c2) video_down_pane_cp_ParamLimits

0x54b1,	// (0x000b27c2) video_down_pane_cp

0x54e1,	// (0x000b27f2) cell_video_dialer_keypad_pane_ParamLimits

0x54e1,	// (0x000b27f2) cell_video_dialer_keypad_pane

0xd4e6,	// (0x000ba7f7) bg_button_pane_cp08_ParamLimits

0xd4e6,	// (0x000ba7f7) bg_button_pane_cp08

0x5505,	// (0x000b2816) cell_video_dialer_keypad_pane_g1_ParamLimits

0x5505,	// (0x000b2816) cell_video_dialer_keypad_pane_g1

0x4b90,	// (0x000b1ea1) mup3_rocker2_pane_ParamLimits

0x4b90,	// (0x000b1ea1) mup3_rocker2_pane

0xcc66,	// (0x000b9f77) mup3_rocker2_pane_g1

0x361d,	// (0x000b092e) main_dialer2_pane

0x94d5,	// (0x000b67e6) main_mp4_pane

0x9f15,	// (0x000b7226) main_mp4_pane_g1_ParamLimits

0x9f15,	// (0x000b7226) main_mp4_pane_g1

0x9f15,	// (0x000b7226) main_mp4_pane_g2_ParamLimits

0x9f15,	// (0x000b7226) main_mp4_pane_g2

0x5540,	// (0x000b2851) main_mp4_pane_g3_ParamLimits

0x5540,	// (0x000b2851) main_mp4_pane_g3

0x9f23,	// (0x000b7234) main_mp4_pane_g4_ParamLimits

0x9f23,	// (0x000b7234) main_mp4_pane_g4

0x9f4b,	// (0x000b725c) main_mp4_pane_g5_ParamLimits

0x9f4b,	// (0x000b725c) main_mp4_pane_g5

0x0005,

0xf89a,	// (0x000bcbab) main_mp4_pane_g_ParamLimits

0xf89a,	// (0x000bcbab) main_mp4_pane_g

0x9f9b,	// (0x000b72ac) main_mp4_pane_t1_ParamLimits

0x9f9b,	// (0x000b72ac) main_mp4_pane_t1

0x9ff7,	// (0x000b7308) main_mp4_pane_t2_ParamLimits

0x9ff7,	// (0x000b7308) main_mp4_pane_t2

0xd4f2,	// (0x000ba803) main_mp4_pane_t3_ParamLimits

0xd4f2,	// (0x000ba803) main_mp4_pane_t3

0xa049,	// (0x000b735a) main_mp4_pane_t4_ParamLimits

0xa049,	// (0x000b735a) main_mp4_pane_t4

0x0003,

0xf8a7,	// (0x000bcbb8) main_mp4_pane_t_ParamLimits

0xf8a7,	// (0x000bcbb8) main_mp4_pane_t

0xa089,	// (0x000b739a) mp4_progress_pane_ParamLimits

0xa089,	// (0x000b739a) mp4_progress_pane

0xa0d3,	// (0x000b73e4) mp4_rocker_pane_ParamLimits

0xa0d3,	// (0x000b73e4) mp4_rocker_pane

0xd51a,	// (0x000ba82b) mp4_progress_pane_t1

0xd533,	// (0x000ba844) mp4_progress_pane_t2

0x0001,

0xf8b0,	// (0x000bcbc1) mp4_progress_pane_t

0xd54c,	// (0x000ba85d) mup_progress_pane_cp04

0xd558,	// (0x000ba869) mp4_rocker_pane_g1

0x558a,	// (0x000b289b) aid_cell_size_keypad2_ParamLimits

0x558a,	// (0x000b289b) aid_cell_size_keypad2

0x55a0,	// (0x000b28b1) dialer2_ne_pane_ParamLimits

0x55a0,	// (0x000b28b1) dialer2_ne_pane

0x55b8,	// (0x000b28c9) grid_dialer2_keypad_pane_ParamLimits

0x55b8,	// (0x000b28c9) grid_dialer2_keypad_pane

0xca45,	// (0x000b9d56) bg_popup_call_pane_cp07_ParamLimits

0xca45,	// (0x000b9d56) bg_popup_call_pane_cp07

0x55d4,	// (0x000b28e5) dialer2_ne_pane_t1_ParamLimits

0x55d4,	// (0x000b28e5) dialer2_ne_pane_t1

0x560f,	// (0x000b2920) cell_dialer2_keypad_pane_ParamLimits

0x560f,	// (0x000b2920) cell_dialer2_keypad_pane

0xd574,	// (0x000ba885) bg_button_pane_pane_cp04_ParamLimits

0xd574,	// (0x000ba885) bg_button_pane_pane_cp04

0x5633,	// (0x000b2944) cell_dialer2_keypad_pane_g1_ParamLimits

0x5633,	// (0x000b2944) cell_dialer2_keypad_pane_g1

0x107b,	// (0x000ae38c) aid_placing_vt_set_content_ParamLimits

0x107b,	// (0x000ae38c) aid_placing_vt_set_content

0x109f,	// (0x000ae3b0) aid_placing_vt_set_title_ParamLimits

0x109f,	// (0x000ae3b0) aid_placing_vt_set_title

0x94d5,	// (0x000b67e6) main_image3_pane

0x56f9,	// (0x000b2a0a) area_side_right_pane_cp01_ParamLimits

0x56f9,	// (0x000b2a0a) area_side_right_pane_cp01

0x9f15,	// (0x000b7226) main_image3_pane_g1_ParamLimits

0x9f15,	// (0x000b7226) main_image3_pane_g1

0x5712,	// (0x000b2a23) main_image3_pane_g2_ParamLimits

0x5712,	// (0x000b2a23) main_image3_pane_g2

0x573a,	// (0x000b2a4b) main_image3_pane_g3_ParamLimits

0x573a,	// (0x000b2a4b) main_image3_pane_g3

0x5764,	// (0x000b2a75) main_image3_pane_g4_ParamLimits

0x5764,	// (0x000b2a75) main_image3_pane_g4

0x0003,

0xf8bf,	// (0x000bcbd0) main_image3_pane_g_ParamLimits

0xf8bf,	// (0x000bcbd0) main_image3_pane_g

0x578e,	// (0x000b2a9f) main_image3_pane_t1_ParamLimits

0x578e,	// (0x000b2a9f) main_image3_pane_t1

0x57e6,	// (0x000b2af7) main_image3_pane_t2_ParamLimits

0x57e6,	// (0x000b2af7) main_image3_pane_t2

0x5838,	// (0x000b2b49) main_image3_pane_t3_ParamLimits

0x5838,	// (0x000b2b49) main_image3_pane_t3

0x0003,

0xf8c8,	// (0x000bcbd9) main_image3_pane_t_ParamLimits

0xf8c8,	// (0x000bcbd9) main_image3_pane_t

0x9526,	// (0x000b6837) grid_sctrl_middle_pane_cp01_ParamLimits

0x9526,	// (0x000b6837) grid_sctrl_middle_pane_cp01

0x58c0,	// (0x000b2bd1) cell_sctrl_middle_pane_cp01_ParamLimits

0x58c0,	// (0x000b2bd1) cell_sctrl_middle_pane_cp01

0x58dd,	// (0x000b2bee) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x58dd,	// (0x000b2bee) cell_sctrl_middle_pane_cp01_g1

0x94d5,	// (0x000b67e6) main_call4_pane

0x58f2,	// (0x000b2c03) aid_size_button_call4_ParamLimits

0x58f2,	// (0x000b2c03) aid_size_button_call4

0x5925,	// (0x000b2c36) call4_windows_pane_ParamLimits

0x5925,	// (0x000b2c36) call4_windows_pane

0x5947,	// (0x000b2c58) grid_call4_button_pane_ParamLimits

0x5947,	// (0x000b2c58) grid_call4_button_pane

0xd580,	// (0x000ba891) call4_windows_conf_pane

0x5972,	// (0x000b2c83) popup_call4_audio_first_window_ParamLimits

0x5972,	// (0x000b2c83) popup_call4_audio_first_window

0x599e,	// (0x000b2caf) popup_call4_audio_second_window_ParamLimits

0x599e,	// (0x000b2caf) popup_call4_audio_second_window

0xd5bd,	// (0x000ba8ce) popup_call4_audio_wait_window_ParamLimits

0xd5bd,	// (0x000ba8ce) popup_call4_audio_wait_window

0x59b4,	// (0x000b2cc5) cell_call4_button_pane_ParamLimits

0x59b4,	// (0x000b2cc5) cell_call4_button_pane

0x59db,	// (0x000b2cec) bg_button_pane_cp09_ParamLimits

0x59db,	// (0x000b2cec) bg_button_pane_cp09

0x59e7,	// (0x000b2cf8) cell_call4_button_pane_g1_ParamLimits

0x59e7,	// (0x000b2cf8) cell_call4_button_pane_g1

0x5a0d,	// (0x000b2d1e) cell_call4_button_pane_t1_ParamLimits

0x5a0d,	// (0x000b2d1e) cell_call4_button_pane_t1

0xd605,	// (0x000ba916) popup_call4_audio_conf_window_ParamLimits

0xd605,	// (0x000ba916) popup_call4_audio_conf_window

0x4bf2,	// (0x000b1f03) mup3_progress_pane_t1_ParamLimits

0x4c10,	// (0x000b1f21) mup3_progress_pane_t2_ParamLimits

0xcf19,	// (0x000ba22a) mup3_progress_pane_t3_ParamLimits

0xf79c,	// (0x000bcaad) mup3_progress_pane_t_ParamLimits

0xcf36,	// (0x000ba247) mup_progress_pane_cp03_ParamLimits

0x5211,	// (0x000b2522) mup3_control_keys_pane_g4_copy1

0xa0b7,	// (0x000b73c8) mp4_rocker2_pane_ParamLimits

0xa0b7,	// (0x000b73c8) mp4_rocker2_pane

0xd61f,	// (0x000ba930) mp4_rocker2_pane_g1

0xd627,	// (0x000ba938) mp4_rocker2_pane_g2

0xa129,	// (0x000b743a) mp4_rocker2_pane_g3

0xa131,	// (0x000b7442) mp4_rocker2_pane_g4

0xa139,	// (0x000b744a) mp4_rocker2_pane_g5

0x0004,

0xf8d1,	// (0x000bcbe2) mp4_rocker2_pane_g

0x94d5,	// (0x000b67e6) main_camera4_pane

0x94d5,	// (0x000b67e6) main_video4_pane

0x547f,	// (0x000b2790) main_video_tele_dialer_pane_t1_ParamLimits

0x547f,	// (0x000b2790) main_video_tele_dialer_pane_t1

0x5498,	// (0x000b27a9) main_video_tele_dialer_pane_t2_ParamLimits

0x5498,	// (0x000b27a9) main_video_tele_dialer_pane_t2

0x0001,

0xf88b,	// (0x000bcb9c) main_video_tele_dialer_pane_t_ParamLimits

0xf88b,	// (0x000bcb9c) main_video_tele_dialer_pane_t

0x5a4b,	// (0x000b2d5c) cam4_autofocus_pane_ParamLimits

0x5a4b,	// (0x000b2d5c) cam4_autofocus_pane

0x5a61,	// (0x000b2d72) cam4_image_uncrop_pane_ParamLimits

0x5a61,	// (0x000b2d72) cam4_image_uncrop_pane

0x5a7a,	// (0x000b2d8b) cam4_indicators_pane_ParamLimits

0x5a7a,	// (0x000b2d8b) cam4_indicators_pane

0x5aa9,	// (0x000b2dba) main_camera4_pane_g1_ParamLimits

0x5aa9,	// (0x000b2dba) main_camera4_pane_g1

0x5abb,	// (0x000b2dcc) main_camera4_pane_g2_ParamLimits

0x5abb,	// (0x000b2dcc) main_camera4_pane_g2

0x5ace,	// (0x000b2ddf) main_camera4_pane_g3_ParamLimits

0x5ace,	// (0x000b2ddf) main_camera4_pane_g3

0x5ae1,	// (0x000b2df2) main_camera4_pane_g4_ParamLimits

0x5ae1,	// (0x000b2df2) main_camera4_pane_g4

0x5af4,	// (0x000b2e05) main_camera4_pane_g5_ParamLimits

0x5af4,	// (0x000b2e05) main_camera4_pane_g5

0x0005,

0xf8dc,	// (0x000bcbed) main_camera4_pane_g_ParamLimits

0xf8dc,	// (0x000bcbed) main_camera4_pane_g

0x5b18,	// (0x000b2e29) main_camera4_pane_t1_ParamLimits

0x5b18,	// (0x000b2e29) main_camera4_pane_t1

0xa15f,	// (0x000b7470) bg_tb_trans_pane_cp06

0xa175,	// (0x000b7486) cam4_indicators_pane_g1

0xa186,	// (0x000b7497) cam4_indicators_pane_g2

0x0002,

0xf8f7,	// (0x000bcc08) cam4_indicators_pane_g

0xa19e,	// (0x000b74af) cam4_indicators_pane_t1

0x5b7c,	// (0x000b2e8d) main_video4_pane_g1_ParamLimits

0x5b7c,	// (0x000b2e8d) main_video4_pane_g1

0x5b8b,	// (0x000b2e9c) main_video4_pane_g2_ParamLimits

0x5b8b,	// (0x000b2e9c) main_video4_pane_g2

0x5b9a,	// (0x000b2eab) main_video4_pane_g3_ParamLimits

0x5b9a,	// (0x000b2eab) main_video4_pane_g3

0x5ba9,	// (0x000b2eba) main_video4_pane_g4_ParamLimits

0x5ba9,	// (0x000b2eba) main_video4_pane_g4

0x0004,

0xf8fe,	// (0x000bcc0f) main_video4_pane_g_ParamLimits

0xf8fe,	// (0x000bcc0f) main_video4_pane_g

0x5bc7,	// (0x000b2ed8) vid4_indicators_pane_ParamLimits

0x5bc7,	// (0x000b2ed8) vid4_indicators_pane

0x5bf5,	// (0x000b2f06) video4_image_uncrop_cif_pane_ParamLimits

0x5bf5,	// (0x000b2f06) video4_image_uncrop_cif_pane

0x5c0f,	// (0x000b2f20) video4_image_uncrop_nhd_pane_ParamLimits

0x5c0f,	// (0x000b2f20) video4_image_uncrop_nhd_pane

0x5a61,	// (0x000b2d72) video4_image_uncrop_vga_pane_ParamLimits

0x5a61,	// (0x000b2d72) video4_image_uncrop_vga_pane

0xa1c2,	// (0x000b74d3) bg_tb_trans_pane_cp07

0xa1da,	// (0x000b74eb) vid4_indicators_pane_g1

0xa1f0,	// (0x000b7501) vid4_indicators_pane_g2

0xa204,	// (0x000b7515) vid4_indicators_pane_g3

0x0004,

0xf909,	// (0x000bcc1a) vid4_indicators_pane_g

0xa235,	// (0x000b7546) vid4_indicators_pane_t1

0x5c25,	// (0x000b2f36) cam4_autofocus_pane_g1

0x5c2d,	// (0x000b2f3e) cam4_autofocus_pane_g2

0x5c35,	// (0x000b2f46) cam4_autofocus_pane_g3

0x0002,

0xf914,	// (0x000bcc25) cam4_autofocus_pane_g

0x5c3d,	// (0x000b2f4e) cam4_autofocus_pane_g3_copy1

0x54c5,	// (0x000b27d6) video_down_pane_cp_t1

0x54d3,	// (0x000b27e4) video_down_pane_cp_t2

0x0001,

0xf890,	// (0x000bcba1) video_down_pane_cp_t

0x9526,	// (0x000b6837) popup_vitu2_window_ParamLimits

0x9526,	// (0x000b6837) popup_vitu2_window

0x5c45,	// (0x000b2f56) aid_size_cell2_itu2_ParamLimits

0x5c45,	// (0x000b2f56) aid_size_cell2_itu2

0x5c6b,	// (0x000b2f7c) aid_size_cell_itu2_ParamLimits

0x5c6b,	// (0x000b2f7c) aid_size_cell_itu2

0x5ccb,	// (0x000b2fdc) bg_popup_window_pane_cp09_ParamLimits

0x5ccb,	// (0x000b2fdc) bg_popup_window_pane_cp09

0x5cd9,	// (0x000b2fea) field_vitu2_entry_pane_ParamLimits

0x5cd9,	// (0x000b2fea) field_vitu2_entry_pane

0x5d01,	// (0x000b3012) grid_vitu2_function_pane_ParamLimits

0x5d01,	// (0x000b3012) grid_vitu2_function_pane

0x5d52,	// (0x000b3063) grid_vitu2_itu_pane_ParamLimits

0x5d52,	// (0x000b3063) grid_vitu2_itu_pane

0x5de6,	// (0x000b30f7) cell_vitu2_itu_pane_ParamLimits

0x5de6,	// (0x000b30f7) cell_vitu2_itu_pane

0x5e0c,	// (0x000b311d) cell_vitu2_function_pane_ParamLimits

0x5e0c,	// (0x000b311d) cell_vitu2_function_pane

0xd643,	// (0x000ba954) bg_popup_call_pane_cp08_ParamLimits

0xd643,	// (0x000ba954) bg_popup_call_pane_cp08

0xd65a,	// (0x000ba96b) field_vitu2_entry_pane_g1

0xd666,	// (0x000ba977) field_vitu2_entry_pane_g2

0x0002,

0xf91b,	// (0x000bcc2c) field_vitu2_entry_pane_g

0x5e50,	// (0x000b3161) field_vitu2_entry_pane_t1_ParamLimits

0x5e50,	// (0x000b3161) field_vitu2_entry_pane_t1

0xa24c,	// (0x000b755d) field_vitu2_entry_pane_t2_ParamLimits

0xa24c,	// (0x000b755d) field_vitu2_entry_pane_t2

0x0001,

0xf922,	// (0x000bcc33) field_vitu2_entry_pane_t_ParamLimits

0xf922,	// (0x000bcc33) field_vitu2_entry_pane_t

0x5e7f,	// (0x000b3190) bg_button_pane_cp010_ParamLimits

0x5e7f,	// (0x000b3190) bg_button_pane_cp010

0xa269,	// (0x000b757a) cell_vitu2_itu_pane_g1

0x5e9b,	// (0x000b31ac) cell_vitu2_itu_pane_t1_ParamLimits

0x5e9b,	// (0x000b31ac) cell_vitu2_itu_pane_t1

0xfb3d,	// (0x000ace4e) cell_vitu2_itu_pane_t2_ParamLimits

0xfb3d,	// (0x000ace4e) cell_vitu2_itu_pane_t2

0x0002,

0xf92c,	// (0x000bcc3d) cell_vitu2_itu_pane_t_ParamLimits

0xf92c,	// (0x000bcc3d) cell_vitu2_itu_pane_t

0xa1c2,	// (0x000b74d3) bg_button_pane_cp011

0x5ef9,	// (0x000b320a) cell_vitu2_function_pane_g1

0x94d5,	// (0x000b67e6) main_myfav_hc_pane

0x5888,	// (0x000b2b99) popup_image3_note_pane_ParamLimits

0x5888,	// (0x000b2b99) popup_image3_note_pane

0x58a4,	// (0x000b2bb5) popup_image3_tool_bar_pane_ParamLimits

0x58a4,	// (0x000b2bb5) popup_image3_tool_bar_pane

0xfbcb,	// (0x000acedc) cell_vitu2_itu_pane_t3_ParamLimits

0xfbcb,	// (0x000acedc) cell_vitu2_itu_pane_t3

0x94d5,	// (0x000b67e6) bg_popup_trans_pane

0xd688,	// (0x000ba999) grid_image3_tool_bar_pane

0xd692,	// (0x000ba9a3) bg_popup_trans_pane_g1

0xac8d,	// (0x000b7f9e) bg_popup_trans_pane_g2

0xd69a,	// (0x000ba9ab) bg_popup_trans_pane_g3

0xd6a2,	// (0x000ba9b3) bg_popup_trans_pane_g4

0xd6aa,	// (0x000ba9bb) bg_popup_trans_pane_g5

0xd6b2,	// (0x000ba9c3) bg_popup_trans_pane_g6

0xd6ba,	// (0x000ba9cb) bg_popup_trans_pane_g7

0xd6c2,	// (0x000ba9d3) bg_popup_trans_pane_g8

0xac6d,	// (0x000b7f7e) bg_popup_trans_pane_g9

0x0008,

0xf933,	// (0x000bcc44) bg_popup_trans_pane_g

0xd6ca,	// (0x000ba9db) cell_image3_tool_bar_pane_ParamLimits

0xd6ca,	// (0x000ba9db) cell_image3_tool_bar_pane

0xcc66,	// (0x000b9f77) cell_image3_tool_bar_pane_g1

0x94d5,	// (0x000b67e6) bg_popup_trans_pane_cp1

0xd6e0,	// (0x000ba9f1) popup_image3_note_pane_t1

0xd6ee,	// (0x000ba9ff) popup_image3_note_pane_t2

0xd6fc,	// (0x000baa0d) popup_image3_note_pane_t3

0x0002,

0xf946,	// (0x000bcc57) popup_image3_note_pane_t

0xd70c,	// (0x000baa1d) popup_image3_note_pane_t3_copy1

0x5f0d,	// (0x000b321e) bg_myfav_hc_instruction_pane_ParamLimits

0x5f0d,	// (0x000b321e) bg_myfav_hc_instruction_pane

0x5f25,	// (0x000b3236) cell_myfav_contact_pane_ParamLimits

0x5f25,	// (0x000b3236) cell_myfav_contact_pane

0x5f41,	// (0x000b3252) cell_myfav_contact_pane_cp1_ParamLimits

0x5f41,	// (0x000b3252) cell_myfav_contact_pane_cp1

0x5f59,	// (0x000b326a) cell_myfav_contact_pane_cp2_ParamLimits

0x5f59,	// (0x000b326a) cell_myfav_contact_pane_cp2

0x5f71,	// (0x000b3282) cell_myfav_contact_pane_cp3_ParamLimits

0x5f71,	// (0x000b3282) cell_myfav_contact_pane_cp3

0x5f88,	// (0x000b3299) cell_myfav_contact_pane_cp4_ParamLimits

0x5f88,	// (0x000b3299) cell_myfav_contact_pane_cp4

0x5fa0,	// (0x000b32b1) cell_myfav_contact_pane_cp5_ParamLimits

0x5fa0,	// (0x000b32b1) cell_myfav_contact_pane_cp5

0x5fb4,	// (0x000b32c5) cell_myfav_contact_pane_cp6_ParamLimits

0x5fb4,	// (0x000b32c5) cell_myfav_contact_pane_cp6

0x5fca,	// (0x000b32db) cell_myfav_contact_pane_cp7_ParamLimits

0x5fca,	// (0x000b32db) cell_myfav_contact_pane_cp7

0xd71a,	// (0x000baa2b) listscroll_gen_pane_cp05

0x5fe2,	// (0x000b32f3) main_myfav_hc_pane_g1_ParamLimits

0x5fe2,	// (0x000b32f3) main_myfav_hc_pane_g1

0x5ffc,	// (0x000b330d) main_myfav_hc_pane_g2_ParamLimits

0x5ffc,	// (0x000b330d) main_myfav_hc_pane_g2

0x0002,

0xf94d,	// (0x000bcc5e) main_myfav_hc_pane_g_ParamLimits

0xf94d,	// (0x000bcc5e) main_myfav_hc_pane_g

0x6030,	// (0x000b3341) main_myfav_hc_pane_t1_ParamLimits

0x6030,	// (0x000b3341) main_myfav_hc_pane_t1

0xd723,	// (0x000baa34) main_myfav_hc_pane_t2_ParamLimits

0xd723,	// (0x000baa34) main_myfav_hc_pane_t2

0xd735,	// (0x000baa46) main_myfav_hc_pane_t3_ParamLimits

0xd735,	// (0x000baa46) main_myfav_hc_pane_t3

0x6047,	// (0x000b3358) main_myfav_hc_pane_t4_ParamLimits

0x6047,	// (0x000b3358) main_myfav_hc_pane_t4

0x0004,

0xf954,	// (0x000bcc65) main_myfav_hc_pane_t_ParamLimits

0xf954,	// (0x000bcc65) main_myfav_hc_pane_t

0xcc66,	// (0x000b9f77) bg_myfav_hc_instruction_pane_g1

0xd747,	// (0x000baa58) cell_myfav_contact_pane_g1_ParamLimits

0xd747,	// (0x000baa58) cell_myfav_contact_pane_g1

0xd747,	// (0x000baa58) cell_myfav_contact_pane_g2_ParamLimits

0xd747,	// (0x000baa58) cell_myfav_contact_pane_g2

0xd753,	// (0x000baa64) cell_myfav_contact_pane_g3_ParamLimits

0xd753,	// (0x000baa64) cell_myfav_contact_pane_g3

0xcf03,	// (0x000ba214) cell_myfav_contact_pane_g4_ParamLimits

0xcf03,	// (0x000ba214) cell_myfav_contact_pane_g4

0xd760,	// (0x000baa71) cell_myfav_contact_pane_g5_ParamLimits

0xd760,	// (0x000baa71) cell_myfav_contact_pane_g5

0x0004,

0xf95f,	// (0x000bcc70) cell_myfav_contact_pane_g_ParamLimits

0xf95f,	// (0x000bcc70) cell_myfav_contact_pane_g

0x6016,	// (0x000b3327) main_myfav_hc_pane_g3_ParamLimits

0x6016,	// (0x000b3327) main_myfav_hc_pane_g3

0xfdba,	// (0x000ad0cb) popup_adpt_find_window

0x6071,	// (0x000b3382) afind_page_pane_ParamLimits

0x6071,	// (0x000b3382) afind_page_pane

0x6086,	// (0x000b3397) aid_size_cell_afind_ParamLimits

0x6086,	// (0x000b3397) aid_size_cell_afind

0x60a4,	// (0x000b33b5) bg_popup_sub_pane_cp09_ParamLimits

0x60a4,	// (0x000b33b5) bg_popup_sub_pane_cp09

0x60b1,	// (0x000b33c2) find_pane_cp01_ParamLimits

0x60b1,	// (0x000b33c2) find_pane_cp01

0xd76c,	// (0x000baa7d) grid_afind_control_pane_ParamLimits

0xd76c,	// (0x000baa7d) grid_afind_control_pane

0x60be,	// (0x000b33cf) grid_afind_pane_ParamLimits

0x60be,	// (0x000b33cf) grid_afind_pane

0x60e0,	// (0x000b33f1) cell_afind_pane_ParamLimits

0x60e0,	// (0x000b33f1) cell_afind_pane

0xcc66,	// (0x000b9f77) afind_page_pane_g1

0x6149,	// (0x000b345a) afind_page_pane_g2

0x6152,	// (0x000b3463) afind_page_pane_g3

0x0002,

0xf96a,	// (0x000bcc7b) afind_page_pane_g

0x615b,	// (0x000b346c) afind_page_pane_t1

0xd780,	// (0x000baa91) cell_afind_grid_control_pane_ParamLimits

0xd780,	// (0x000baa91) cell_afind_grid_control_pane

0xd574,	// (0x000ba885) bg_button_pane_cp69_ParamLimits

0xd574,	// (0x000ba885) bg_button_pane_cp69

0x617b,	// (0x000b348c) cell_afind_pane_g1_ParamLimits

0x617b,	// (0x000b348c) cell_afind_pane_g1

0x6188,	// (0x000b3499) cell_afind_pane_t1_ParamLimits

0x6188,	// (0x000b3499) cell_afind_pane_t1

0xaa82,	// (0x000b7d93) bg_button_pane_cp72

0xd78f,	// (0x000baaa0) cell_afind_grid_control_pane_g1

0x30c0,	// (0x000b03d1) aid_image_placing_area_ParamLimits

0x30c0,	// (0x000b03d1) aid_image_placing_area

0xd236,	// (0x000ba547) field_vitu_entry_pane_g1_ParamLimits

0xd236,	// (0x000ba547) field_vitu_entry_pane_g1

0xd242,	// (0x000ba553) field_vitu_entry_pane_g2_ParamLimits

0xd242,	// (0x000ba553) field_vitu_entry_pane_g2

0x0001,

0xf81b,	// (0x000bcb2c) field_vitu_entry_pane_g_ParamLimits

0xf81b,	// (0x000bcb2c) field_vitu_entry_pane_g

0x52e0,	// (0x000b25f1) cell_vitu_itu_pane_g1_ParamLimits

0x5322,	// (0x000b2633) cell_vitu_itu_pane_t3_ParamLimits

0x5322,	// (0x000b2633) cell_vitu_itu_pane_t3

0xd51a,	// (0x000ba82b) mp4_progress_pane_t1_ParamLimits

0xd533,	// (0x000ba844) mp4_progress_pane_t2_ParamLimits

0xf8b0,	// (0x000bcbc1) mp4_progress_pane_t_ParamLimits

0xd54c,	// (0x000ba85d) mup_progress_pane_cp04_ParamLimits

0x605b,	// (0x000b336c) main_myfav_hc_pane_t5_ParamLimits

0x605b,	// (0x000b336c) main_myfav_hc_pane_t5

0xfc79,	// (0x000acf8a) aid_zoom_text_primary

0xfdba,	// (0x000ad0cb) popup_adpt_find_window_ParamLimits

0x9526,	// (0x000b6837) main_cam_set_pane

0x5a93,	// (0x000b2da4) cam4_zoom_pane_ParamLimits

0x5a93,	// (0x000b2da4) cam4_zoom_pane

0x619a,	// (0x000b34ab) main_cam_set_pane_g1_ParamLimits

0x619a,	// (0x000b34ab) main_cam_set_pane_g1

0x61a8,	// (0x000b34b9) main_cam_set_pane_g2_ParamLimits

0x61a8,	// (0x000b34b9) main_cam_set_pane_g2

0x0001,

0xf971,	// (0x000bcc82) main_cam_set_pane_g_ParamLimits

0xf971,	// (0x000bcc82) main_cam_set_pane_g

0x61c9,	// (0x000b34da) main_cam_set_pane_t1_ParamLimits

0x61c9,	// (0x000b34da) main_cam_set_pane_t1

0x61e4,	// (0x000b34f5) main_cset_listscroll_pane_ParamLimits

0x61e4,	// (0x000b34f5) main_cset_listscroll_pane

0x6208,	// (0x000b3519) main_cset_slider_pane_ParamLimits

0x6208,	// (0x000b3519) main_cset_slider_pane

0xd7a0,	// (0x000baab1) main_cset_list_pane_ParamLimits

0xd7a0,	// (0x000baab1) main_cset_list_pane

0xd7b0,	// (0x000baac1) scroll_pane_cp028

0x6232,	// (0x000b3543) aid_area_touch_slider

0x624e,	// (0x000b355f) cset_slider_pane

0x6278,	// (0x000b3589) main_cset_slider_pane_g1

0x628d,	// (0x000b359e) main_cset_slider_pane_g2

0x0011,

0xf976,	// (0x000bcc87) main_cset_slider_pane_g

0xd7e9,	// (0x000baafa) main_cset_slider_pane_t1

0x634f,	// (0x000b3660) main_cset_slider_pane_t2

0x6369,	// (0x000b367a) main_cset_slider_pane_t3

0x6383,	// (0x000b3694) main_cset_slider_pane_t4

0x639d,	// (0x000b36ae) main_cset_slider_pane_t5

0x63bb,	// (0x000b36cc) main_cset_slider_pane_t6

0x63d0,	// (0x000b36e1) main_cset_slider_pane_t7

0x000e,

0xf99b,	// (0x000bccac) main_cset_slider_pane_t

0x64dc,	// (0x000b37ed) cset_list_set_pane_ParamLimits

0x64dc,	// (0x000b37ed) cset_list_set_pane

0x64f0,	// (0x000b3801) aid_position_infowindow_above

0x64f8,	// (0x000b3809) aid_position_infowindow_below

0x6500,	// (0x000b3811) cset_list_set_pane_g1_ParamLimits

0x6500,	// (0x000b3811) cset_list_set_pane_g1

0x650c,	// (0x000b381d) cset_list_set_pane_g3_ParamLimits

0x650c,	// (0x000b381d) cset_list_set_pane_g3

0x0001,

0xf9ba,	// (0x000bcccb) cset_list_set_pane_g_ParamLimits

0xf9ba,	// (0x000bcccb) cset_list_set_pane_g

0x651b,	// (0x000b382c) cset_list_set_pane_t1_ParamLimits

0x651b,	// (0x000b382c) cset_list_set_pane_t1

0x9526,	// (0x000b6837) list_highlight_pane_cp021_ParamLimits

0x9526,	// (0x000b6837) list_highlight_pane_cp021

0xb4a4,	// (0x000b87b5) cset_slider_pane_g1

0xb4b6,	// (0x000b87c7) cset_slider_pane_g2

0xb4ad,	// (0x000b87be) cset_slider_pane_g3

0x0002,

0xf9bf,	// (0x000bccd0) cset_slider_pane_g

0xa27b,	// (0x000b758c) aid_area_touch_cam4_zoom

0xa283,	// (0x000b7594) cam4_zoom_cont_pane

0xa28b,	// (0x000b759c) cam4_zoom_pane_g1

0xa293,	// (0x000b75a4) cam4_zoom_pane_g2

0x6530,	// (0x000b3841) cam4_zoom_pane_g3

0x0002,

0xf9c6,	// (0x000bccd7) cam4_zoom_pane_g

0xa29b,	// (0x000b75ac) cam4_zoom_cont_pane_g1

0xa2a4,	// (0x000b75b5) cam4_zoom_cont_pane_g2

0xa2ad,	// (0x000b75be) cam4_zoom_cont_pane_g3

0x0002,

0xf9cd,	// (0x000bccde) cam4_zoom_cont_pane_g

0x5910,	// (0x000b2c21) call4_image_pane_ParamLimits

0x5910,	// (0x000b2c21) call4_image_pane

0xd580,	// (0x000ba891) call4_windows_conf_pane_ParamLimits

0xd59b,	// (0x000ba8ac) popup_call4_audio_in_window_ParamLimits

0xd59b,	// (0x000ba8ac) popup_call4_audio_in_window

0x94d5,	// (0x000b67e6) bg_popup_call2_act_pane_cp02

0xd5fd,	// (0x000ba90e) call4_list_conf_pane

0xcc66,	// (0x000b9f77) call4_image_pane_g1

0xcc66,	// (0x000b9f77) call4_image_pane_g2

0x0001,

0xf6dc,	// (0x000bc9ed) call4_image_pane_g

0xd889,	// (0x000bab9a) list_single_graphic_popup_conf4_pane_ParamLimits

0xd889,	// (0x000bab9a) list_single_graphic_popup_conf4_pane

0x94d5,	// (0x000b67e6) list_highlight_pane_cp022

0xd89e,	// (0x000babaf) list_single_graphic_popup_conf4_pane_g1

0xb198,	// (0x000b84a9) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf9d4,	// (0x000bcce5) list_single_graphic_popup_conf4_pane_g

0xd8a6,	// (0x000babb7) list_single_graphic_popup_conf4_pane_t1

0x11b6,	// (0x000ae4c7) popup_vtel_slider_window_ParamLimits

0x11b6,	// (0x000ae4c7) popup_vtel_slider_window

0xd562,	// (0x000ba873) dialer2_ne_pane_t2_ParamLimits

0xd562,	// (0x000ba873) dialer2_ne_pane_t2

0x0001,

0xf8b5,	// (0x000bcbc6) dialer2_ne_pane_t_ParamLimits

0xf8b5,	// (0x000bcbc6) dialer2_ne_pane_t

0xca45,	// (0x000b9d56) bg_popup_sub_pane_cp010_ParamLimits

0xca45,	// (0x000b9d56) bg_popup_sub_pane_cp010

0x6538,	// (0x000b3849) popup_vtel_slider_window_g1_ParamLimits

0x6538,	// (0x000b3849) popup_vtel_slider_window_g1

0x654b,	// (0x000b385c) popup_vtel_slider_window_g2_ParamLimits

0x654b,	// (0x000b385c) popup_vtel_slider_window_g2

0x0003,

0xf9d9,	// (0x000bccea) popup_vtel_slider_window_g_ParamLimits

0xf9d9,	// (0x000bccea) popup_vtel_slider_window_g

0x65a1,	// (0x000b38b2) vtel_slider_pane_ParamLimits

0x65a1,	// (0x000b38b2) vtel_slider_pane

0x65c3,	// (0x000b38d4) vtel_slider_pane_g1_ParamLimits

0x65c3,	// (0x000b38d4) vtel_slider_pane_g1

0x65d7,	// (0x000b38e8) vtel_slider_pane_g2_ParamLimits

0x65d7,	// (0x000b38e8) vtel_slider_pane_g2

0x65ef,	// (0x000b3900) vtel_slider_pane_g3_ParamLimits

0x65ef,	// (0x000b3900) vtel_slider_pane_g3

0x65c3,	// (0x000b38d4) vtel_slider_pane_g4_ParamLimits

0x65c3,	// (0x000b38d4) vtel_slider_pane_g4

0x6605,	// (0x000b3916) vtel_slider_pane_g5_ParamLimits

0x6605,	// (0x000b3916) vtel_slider_pane_g5

0x0004,

0xf9e2,	// (0x000bccf3) vtel_slider_pane_g_ParamLimits

0xf9e2,	// (0x000bccf3) vtel_slider_pane_g

0x9526,	// (0x000b6837) main_gallery2_pane

0x5c97,	// (0x000b2fa8) aid_size_row_itut2_dropdow_list_ParamLimits

0x5c97,	// (0x000b2fa8) aid_size_row_itut2_dropdow_list

0x5d29,	// (0x000b303a) grid_vitu2_function_top_pane_ParamLimits

0x5d29,	// (0x000b303a) grid_vitu2_function_top_pane

0x5d8d,	// (0x000b309e) popup_vitu2_dropdown_list_window_ParamLimits

0x5d8d,	// (0x000b309e) popup_vitu2_dropdown_list_window

0x5dba,	// (0x000b30cb) popup_vitu2_match_list_window

0x661b,	// (0x000b392c) cell_vitu2_function_top_pane_ParamLimits

0x661b,	// (0x000b392c) cell_vitu2_function_top_pane

0x663b,	// (0x000b394c) cell_vitu2_function_top_pane_cp01_ParamLimits

0x663b,	// (0x000b394c) cell_vitu2_function_top_pane_cp01

0x6657,	// (0x000b3968) cell_vitu2_function_top_wide_pane_ParamLimits

0x6657,	// (0x000b3968) cell_vitu2_function_top_wide_pane

0xa1c2,	// (0x000b74d3) bg_button_pane_cp012

0x6673,	// (0x000b3984) cell_vitu2_function_top_pane_g1

0xa2c4,	// (0x000b75d5) bg_button_pane_cp013_ParamLimits

0xa2c4,	// (0x000b75d5) bg_button_pane_cp013

0x6687,	// (0x000b3998) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x6687,	// (0x000b3998) cell_vitu2_function_top_wide_pane_g1

0xa1c2,	// (0x000b74d3) bg_popup_sub_pane_cp20

0x669f,	// (0x000b39b0) list_vitu2_match_list_pane

0xd692,	// (0x000ba9a3) bg_popup_sub_pane_cp20_g1

0xd69a,	// (0x000ba9ab) bg_popup_sub_pane_cp20_g2

0xac8d,	// (0x000b7f9e) bg_popup_sub_pane_cp20_g3

0xd6a2,	// (0x000ba9b3) bg_popup_sub_pane_cp20_g4

0xac6d,	// (0x000b7f7e) bg_popup_sub_pane_cp20_g5

0xd8bc,	// (0x000babcd) bg_popup_sub_pane_cp20_g6

0xd6b2,	// (0x000ba9c3) bg_popup_sub_pane_cp20_g7

0xd6ba,	// (0x000ba9cb) bg_popup_sub_pane_cp20_g8

0xd6c2,	// (0x000ba9d3) bg_popup_sub_pane_cp20_g9

0x0008,

0xf9ed,	// (0x000bccfe) bg_popup_sub_pane_cp20_g

0xa2e0,	// (0x000b75f1) list_vitu2_match_list_item_pane_ParamLimits

0xa2e0,	// (0x000b75f1) list_vitu2_match_list_item_pane

0xa2f2,	// (0x000b7603) list_vitu2_match_list_item_pane_t1

0x9c25,	// (0x000b6f36) bg_popup_sub_pane_cp21

0xa30c,	// (0x000b761d) grid_vitu2_dropdown_list_pane

0x66f5,	// (0x000b3a06) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x66f5,	// (0x000b3a06) cell_vitu2_dropdown_list_char_pane

0x6718,	// (0x000b3a29) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x6718,	// (0x000b3a29) cell_vitu2_dropdown_list_ctrl_pane

0xd8c4,	// (0x000babd5) cell_vitu2_dropdown_list_char_pane_g1

0xd8cd,	// (0x000babde) cell_vitu2_dropdown_list_char_pane_g2

0xd8d6,	// (0x000babe7) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xfa0a,	// (0x000bcd1b) cell_vitu2_dropdown_list_char_pane_g

0x6746,	// (0x000b3a57) cell_vitu2_dropdown_list_char_pane_t1

0x6754,	// (0x000b3a65) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x6754,	// (0x000b3a65) cell_vitu2_dropdown_list_ctrl_pane_g1

0x6764,	// (0x000b3a75) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x6764,	// (0x000b3a75) cell_vitu2_dropdown_list_ctrl_pane_g2

0x6775,	// (0x000b3a86) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x6775,	// (0x000b3a86) cell_vitu2_dropdown_list_ctrl_pane_g3

0x6785,	// (0x000b3a96) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x6785,	// (0x000b3a96) cell_vitu2_dropdown_list_ctrl_pane_g4

0xa15f,	// (0x000b7470) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0xa15f,	// (0x000b7470) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa11,	// (0x000bcd22) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa11,	// (0x000bcd22) cell_vitu2_dropdown_list_ctrl_pane_g

0x67a1,	// (0x000b3ab2) aid_size_cell_gallery2_ParamLimits

0x67a1,	// (0x000b3ab2) aid_size_cell_gallery2

0x67bf,	// (0x000b3ad0) grid_gallery2_pane_ParamLimits

0x67bf,	// (0x000b3ad0) grid_gallery2_pane

0x67d9,	// (0x000b3aea) scroll_pane_cp029_ParamLimits

0x67d9,	// (0x000b3aea) scroll_pane_cp029

0x67e5,	// (0x000b3af6) cell_gallery2_pane_ParamLimits

0x67e5,	// (0x000b3af6) cell_gallery2_pane

0xd8df,	// (0x000babf0) cell_gallery2_pane_g2

0x6846,	// (0x000b3b57) cell_gallery2_pane_g3

0xd8e7,	// (0x000babf8) cell_gallery2_pane_g4

0xd8ef,	// (0x000bac00) cell_gallery2_pane_g5

0xaa30,	// (0x000b7d41) grid_highlight_pane_cp10

0x5dba,	// (0x000b30cb) popup_vitu2_match_list_window_ParamLimits

0x5dd1,	// (0x000b30e2) popup_vitu2_query_window_ParamLimits

0x5dd1,	// (0x000b30e2) popup_vitu2_query_window

0x9c25,	// (0x000b6f36) bg_vitu2_candi_button_pane

0xd8c4,	// (0x000babd5) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xd8cd,	// (0x000babde) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xd8d6,	// (0x000babe7) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x684e,	// (0x000b3b5f) bg_button_pane_cp015

0x6862,	// (0x000b3b73) bg_button_pane_cp016

0x6875,	// (0x000b3b86) bg_button_pane_cp017

0xc815,	// (0x000b9b26) bg_popup_sub_pane_cp22

0xd8f7,	// (0x000bac08) popup_vitu2_query_window_g1

0x68ba,	// (0x000b3bcb) popup_vitu2_query_window_g2

0x0002,

0xfa1c,	// (0x000bcd2d) popup_vitu2_query_window_g

0x68d9,	// (0x000b3bea) popup_vitu2_query_window_t1_ParamLimits

0x68d9,	// (0x000b3bea) popup_vitu2_query_window_t1

0x690e,	// (0x000b3c1f) popup_vitu2_query_window_t2_ParamLimits

0x690e,	// (0x000b3c1f) popup_vitu2_query_window_t2

0x6920,	// (0x000b3c31) popup_vitu2_query_window_t3_ParamLimits

0x6920,	// (0x000b3c31) popup_vitu2_query_window_t3

0x6948,	// (0x000b3c59) popup_vitu2_query_window_t4_ParamLimits

0x6948,	// (0x000b3c59) popup_vitu2_query_window_t4

0x6969,	// (0x000b3c7a) popup_vitu2_query_window_t5_ParamLimits

0x6969,	// (0x000b3c7a) popup_vitu2_query_window_t5

0x0006,

0xfa23,	// (0x000bcd34) popup_vitu2_query_window_t_ParamLimits

0xfa23,	// (0x000bcd34) popup_vitu2_query_window_t

0xd798,	// (0x000baaa9) main_cset_text_pane

0x6232,	// (0x000b3543) aid_area_touch_slider_ParamLimits

0x624e,	// (0x000b355f) cset_slider_pane_ParamLimits

0x6278,	// (0x000b3589) main_cset_slider_pane_g1_ParamLimits

0x628d,	// (0x000b359e) main_cset_slider_pane_g2_ParamLimits

0xd7b9,	// (0x000baaca) main_cset_slider_pane_g3_ParamLimits

0xd7b9,	// (0x000baaca) main_cset_slider_pane_g3

0x62a2,	// (0x000b35b3) main_cset_slider_pane_g4_ParamLimits

0x62a2,	// (0x000b35b3) main_cset_slider_pane_g4

0x62b1,	// (0x000b35c2) main_cset_slider_pane_g5_ParamLimits

0x62b1,	// (0x000b35c2) main_cset_slider_pane_g5

0x62bf,	// (0x000b35d0) main_cset_slider_pane_g6_ParamLimits

0x62bf,	// (0x000b35d0) main_cset_slider_pane_g6

0xf976,	// (0x000bcc87) main_cset_slider_pane_g_ParamLimits

0xd7e9,	// (0x000baafa) main_cset_slider_pane_t1_ParamLimits

0x634f,	// (0x000b3660) main_cset_slider_pane_t2_ParamLimits

0x6369,	// (0x000b367a) main_cset_slider_pane_t3_ParamLimits

0x6383,	// (0x000b3694) main_cset_slider_pane_t4_ParamLimits

0x639d,	// (0x000b36ae) main_cset_slider_pane_t5_ParamLimits

0x63bb,	// (0x000b36cc) main_cset_slider_pane_t6_ParamLimits

0x63d0,	// (0x000b36e1) main_cset_slider_pane_t7_ParamLimits

0x63fe,	// (0x000b370f) main_cset_slider_pane_t8_ParamLimits

0x63fe,	// (0x000b370f) main_cset_slider_pane_t8

0x6426,	// (0x000b3737) main_cset_slider_pane_t9_ParamLimits

0x6426,	// (0x000b3737) main_cset_slider_pane_t9

0x644e,	// (0x000b375f) main_cset_slider_pane_t10_ParamLimits

0x644e,	// (0x000b375f) main_cset_slider_pane_t10

0x6476,	// (0x000b3787) main_cset_slider_pane_t11_ParamLimits

0x6476,	// (0x000b3787) main_cset_slider_pane_t11

0x64a0,	// (0x000b37b1) main_cset_slider_pane_t12_ParamLimits

0x64a0,	// (0x000b37b1) main_cset_slider_pane_t12

0x64bd,	// (0x000b37ce) main_cset_slider_pane_t13_ParamLimits

0x64bd,	// (0x000b37ce) main_cset_slider_pane_t13

0xf99b,	// (0x000bccac) main_cset_slider_pane_t_ParamLimits

0x94d5,	// (0x000b67e6) bg_popup_sub_pane_cp011

0xd903,	// (0x000bac14) main_cset_text_pane_g1

0xd90b,	// (0x000bac1c) main_cset_text_pane_t1

0xd919,	// (0x000bac2a) main_cset_text_pane_t2

0xd927,	// (0x000bac38) main_cset_text_pane_t3

0xd935,	// (0x000bac46) main_cset_text_pane_t4

0xd943,	// (0x000bac54) main_cset_text_pane_t5

0xd951,	// (0x000bac62) main_cset_text_pane_t6

0xd95f,	// (0x000bac70) main_cset_text_pane_t7

0x0006,

0xfa32,	// (0x000bcd43) main_cset_text_pane_t

0x94d5,	// (0x000b67e6) main_cam4_burst_pane

0x94d5,	// (0x000b67e6) main_cam5_pane

0x6169,	// (0x000b347a) bg_button_pane_cp019

0x6172,	// (0x000b3483) bg_button_pane_cp020

0xd7c5,	// (0x000baad6) main_cset_slider_pane_g7_ParamLimits

0xd7c5,	// (0x000baad6) main_cset_slider_pane_g7

0xd7d1,	// (0x000baae2) main_cset_slider_pane_g8_ParamLimits

0xd7d1,	// (0x000baae2) main_cset_slider_pane_g8

0x62d3,	// (0x000b35e4) main_cset_slider_pane_g9_ParamLimits

0x62d3,	// (0x000b35e4) main_cset_slider_pane_g9

0x62df,	// (0x000b35f0) main_cset_slider_pane_g10_ParamLimits

0x62df,	// (0x000b35f0) main_cset_slider_pane_g10

0x62eb,	// (0x000b35fc) main_cset_slider_pane_g11_ParamLimits

0x62eb,	// (0x000b35fc) main_cset_slider_pane_g11

0x62f7,	// (0x000b3608) main_cset_slider_pane_g12_ParamLimits

0x62f7,	// (0x000b3608) main_cset_slider_pane_g12

0x6303,	// (0x000b3614) main_cset_slider_pane_g13_ParamLimits

0x6303,	// (0x000b3614) main_cset_slider_pane_g13

0x630f,	// (0x000b3620) main_cset_slider_pane_g14_ParamLimits

0x630f,	// (0x000b3620) main_cset_slider_pane_g14

0x631b,	// (0x000b362c) main_cset_slider_pane_g15_ParamLimits

0x631b,	// (0x000b362c) main_cset_slider_pane_g15

0xd817,	// (0x000bab28) main_cset_slider_pane_t14_ParamLimits

0xd817,	// (0x000bab28) main_cset_slider_pane_t14

0xd850,	// (0x000bab61) main_cset_slider_pane_t15_ParamLimits

0xd850,	// (0x000bab61) main_cset_slider_pane_t15

0x69e0,	// (0x000b3cf1) aid_cam4_burst_size_cell_ParamLimits

0x69e0,	// (0x000b3cf1) aid_cam4_burst_size_cell

0x6a00,	// (0x000b3d11) grid_cam4_burst_pane_ParamLimits

0x6a00,	// (0x000b3d11) grid_cam4_burst_pane

0x6a3a,	// (0x000b3d4b) linegrid_cam4_burst_pane_ParamLimits

0x6a3a,	// (0x000b3d4b) linegrid_cam4_burst_pane

0xd96d,	// (0x000bac7e) scroll_pane_cp30_ParamLimits

0xd96d,	// (0x000bac7e) scroll_pane_cp30

0x6a5c,	// (0x000b3d6d) cell_cam4_burst_pane_ParamLimits

0x6a5c,	// (0x000b3d6d) cell_cam4_burst_pane

0xd979,	// (0x000bac8a) linegrid_cam4_burst_pane_g1_ParamLimits

0xd979,	// (0x000bac8a) linegrid_cam4_burst_pane_g1

0x6ab1,	// (0x000b3dc2) linegrid_cam4_burst_pane_g2_ParamLimits

0x6ab1,	// (0x000b3dc2) linegrid_cam4_burst_pane_g2

0xd986,	// (0x000bac97) linegrid_cam4_burst_pane_g3_ParamLimits

0xd986,	// (0x000bac97) linegrid_cam4_burst_pane_g3

0x0002,

0xfa41,	// (0x000bcd52) linegrid_cam4_burst_pane_g_ParamLimits

0xfa41,	// (0x000bcd52) linegrid_cam4_burst_pane_g

0x6ac2,	// (0x000b3dd3) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x6ac2,	// (0x000b3dd3) linegrid_cam4_burst_pane_g3_copy1

0xd993,	// (0x000baca4) linegrid_cam4_burst_pane_g4_ParamLimits

0xd993,	// (0x000baca4) linegrid_cam4_burst_pane_g4

0x6ae0,	// (0x000b3df1) linegrid_cam4_burst_pane_g5_ParamLimits

0x6ae0,	// (0x000b3df1) linegrid_cam4_burst_pane_g5

0x6af1,	// (0x000b3e02) linegrid_cam4_burst_pane_g6_ParamLimits

0x6af1,	// (0x000b3e02) linegrid_cam4_burst_pane_g6

0xd9a0,	// (0x000bacb1) linegrid_cam4_burst_pane_g7_ParamLimits

0xd9a0,	// (0x000bacb1) linegrid_cam4_burst_pane_g7

0x6b08,	// (0x000b3e19) cell_cam4_burst_pane_g1

0xd9b9,	// (0x000bacca) main_cam5_pane_t1_ParamLimits

0xd9b9,	// (0x000bacca) main_cam5_pane_t1

0xd9cb,	// (0x000bacdc) main_cam5_pane_t2_ParamLimits

0xd9cb,	// (0x000bacdc) main_cam5_pane_t2

0xd9dd,	// (0x000bacee) main_cam5_pane_t3_ParamLimits

0xd9dd,	// (0x000bacee) main_cam5_pane_t3

0xd9ef,	// (0x000bad00) main_cam5_pane_t4_ParamLimits

0xd9ef,	// (0x000bad00) main_cam5_pane_t4

0xda07,	// (0x000bad18) main_cam5_pane_t5_ParamLimits

0xda07,	// (0x000bad18) main_cam5_pane_t5

0xda1b,	// (0x000bad2c) main_cam5_pane_t6_ParamLimits

0xda1b,	// (0x000bad2c) main_cam5_pane_t6

0xda2f,	// (0x000bad40) main_cam5_pane_t7_ParamLimits

0xda2f,	// (0x000bad40) main_cam5_pane_t7

0xda41,	// (0x000bad52) main_cam5_pane_t8_ParamLimits

0xda41,	// (0x000bad52) main_cam5_pane_t8

0xda5f,	// (0x000bad70) main_cam5_pane_t9_ParamLimits

0xda5f,	// (0x000bad70) main_cam5_pane_t9

0xda71,	// (0x000bad82) main_cam5_pane_t10_ParamLimits

0xda71,	// (0x000bad82) main_cam5_pane_t10

0xda83,	// (0x000bad94) main_cam5_pane_t11_ParamLimits

0xda83,	// (0x000bad94) main_cam5_pane_t11

0xda97,	// (0x000bada8) main_cam5_pane_t12_ParamLimits

0xda97,	// (0x000bada8) main_cam5_pane_t12

0xdaae,	// (0x000badbf) main_cam5_pane_t13_ParamLimits

0xdaae,	// (0x000badbf) main_cam5_pane_t13

0x000c,

0xfa4d,	// (0x000bcd5e) main_cam5_pane_t_ParamLimits

0xfa4d,	// (0x000bcd5e) main_cam5_pane_t

0xfe3d,	// (0x000ad14e) popup_scut_keymap_window_ParamLimits

0xfe3d,	// (0x000ad14e) popup_scut_keymap_window

0x6b1b,	// (0x000b3e2c) aid_size_cell_brow_shortcut

0xaa30,	// (0x000b7d41) bg_popup_window_pane_cp010

0x6b27,	// (0x000b3e38) grid_scut_pane

0x6b33,	// (0x000b3e44) cell_scut_pane_ParamLimits

0x6b33,	// (0x000b3e44) cell_scut_pane

0x6b4c,	// (0x000b3e5d) cell_scut_pane_g1

0xdad1,	// (0x000bade2) cell_scut_pane_t1

0xdae0,	// (0x000badf1) cell_scut_pane_t2

0x6b55,	// (0x000b3e66) cell_scut_pane_t3

0x0002,

0xfa68,	// (0x000bcd79) cell_scut_pane_t

0x47a9,	// (0x000b1aba) main_mup3_pane_g8_ParamLimits

0x47a9,	// (0x000b1aba) main_mup3_pane_g8

0x5cb3,	// (0x000b2fc4) area_vitu2_query_pane_ParamLimits

0x5cb3,	// (0x000b2fc4) area_vitu2_query_pane

0x6888,	// (0x000b3b99) input_focus_pane_cp08

0xdaef,	// (0x000bae00) area_vitu2_query_pane_g1

0x6b63,	// (0x000b3e74) area_vitu2_query_pane_g2

0x0001,

0xfa6f,	// (0x000bcd80) area_vitu2_query_pane_g

0x6b76,	// (0x000b3e87) area_vitu2_query_pane_t1_ParamLimits

0x6b76,	// (0x000b3e87) area_vitu2_query_pane_t1

0x6b8a,	// (0x000b3e9b) area_vitu2_query_pane_t2_ParamLimits

0x6b8a,	// (0x000b3e9b) area_vitu2_query_pane_t2

0x6b9e,	// (0x000b3eaf) area_vitu2_query_pane_t3_ParamLimits

0x6b9e,	// (0x000b3eaf) area_vitu2_query_pane_t3

0xa314,	// (0x000b7625) area_vitu2_query_pane_t4_ParamLimits

0xa314,	// (0x000b7625) area_vitu2_query_pane_t4

0xa33c,	// (0x000b764d) area_vitu2_query_pane_t5_ParamLimits

0xa33c,	// (0x000b764d) area_vitu2_query_pane_t5

0xa364,	// (0x000b7675) area_vitu2_query_pane_t6_ParamLimits

0xa364,	// (0x000b7675) area_vitu2_query_pane_t6

0x0006,

0xfa74,	// (0x000bcd85) area_vitu2_query_pane_t_ParamLimits

0xfa74,	// (0x000bcd85) area_vitu2_query_pane_t

0x6bc6,	// (0x000b3ed7) bg_button_pane_cp018

0x6bd4,	// (0x000b3ee5) bg_button_pane_cp021

0x6be0,	// (0x000b3ef1) bg_button_pane_cp022

0x6bf1,	// (0x000b3f02) input_focus_pane_cp09

0x2614,	// (0x000af925) aid_size_touch_mv_arrow_left

0x263d,	// (0x000af94e) aid_size_touch_mv_arrow_right

0x6333,	// (0x000b3644) main_cset_slider_pane_g16_ParamLimits

0x6333,	// (0x000b3644) main_cset_slider_pane_g16

0x6341,	// (0x000b3652) main_cset_slider_pane_g17_ParamLimits

0x6341,	// (0x000b3652) main_cset_slider_pane_g17

0x6b08,	// (0x000b3e19) cell_cam4_burst_pane_g1_ParamLimits

0x94d5,	// (0x000b67e6) compa_mode_pane

0x655b,	// (0x000b386c) popup_vtel_slider_window_g3_ParamLimits

0x655b,	// (0x000b386c) popup_vtel_slider_window_g3

0x6572,	// (0x000b3883) popup_vtel_slider_window_g4_ParamLimits

0x6572,	// (0x000b3883) popup_vtel_slider_window_g4

0x6589,	// (0x000b389a) popup_vtel_slider_window_t1_ParamLimits

0x6589,	// (0x000b389a) popup_vtel_slider_window_t1

0x94d5,	// (0x000b67e6) main_cl_pane

0xc841,	// (0x000b9b52) popup_imed_adjust2_window_ParamLimits

0xc815,	// (0x000b9b26) bg_tb_trans_pane_cp05_ParamLimits

0xd16b,	// (0x000ba47c) popup_imed_adjust2_window_g1_ParamLimits

0xd17a,	// (0x000ba48b) popup_imed_adjust2_window_g2_ParamLimits

0xd17a,	// (0x000ba48b) popup_imed_adjust2_window_g2

0xd186,	// (0x000ba497) popup_imed_adjust2_window_g3_ParamLimits

0xd186,	// (0x000ba497) popup_imed_adjust2_window_g3

0x0002,

0xf7df,	// (0x000bcaf0) popup_imed_adjust2_window_g_ParamLimits

0xf7df,	// (0x000bcaf0) popup_imed_adjust2_window_g

0xd192,	// (0x000ba4a3) popup_imed_adjust2_window_t1_ParamLimits

0xd1aa,	// (0x000ba4bb) slider_imed_adjust_pane_ParamLimits

0xd1be,	// (0x000ba4cf) slider_imed_adjust_pane_g1_ParamLimits

0xd1ce,	// (0x000ba4df) slider_imed_adjust_pane_g2_ParamLimits

0xd1de,	// (0x000ba4ef) slider_imed_adjust_pane_g3_ParamLimits

0xd1ef,	// (0x000ba500) slider_imed_adjust_pane_g4_ParamLimits

0xf7e6,	// (0x000bcaf7) slider_imed_adjust_pane_g_ParamLimits

0x5a33,	// (0x000b2d44) aid_touch_area_cam4_ParamLimits

0x5a33,	// (0x000b2d44) aid_touch_area_cam4

0xa141,	// (0x000b7452) battery_pane_cp01

0x5b05,	// (0x000b2e16) main_camera4_pane_g6_ParamLimits

0x5b05,	// (0x000b2e16) main_camera4_pane_g6

0x5b2f,	// (0x000b2e40) main_camera4_pane_t2_ParamLimits

0x5b2f,	// (0x000b2e40) main_camera4_pane_t2

0x0001,

0xf8e9,	// (0x000bcbfa) main_camera4_pane_t_ParamLimits

0xf8e9,	// (0x000bcbfa) main_camera4_pane_t

0x5b64,	// (0x000b2e75) aid_touch_area_vid4_ParamLimits

0x5b64,	// (0x000b2e75) aid_touch_area_vid4

0x5bb8,	// (0x000b2ec9) main_video4_pane_g5_ParamLimits

0x5bb8,	// (0x000b2ec9) main_video4_pane_g5

0x5bdd,	// (0x000b2eee) vid4_progress_pane_ParamLimits

0x5bdd,	// (0x000b2eee) vid4_progress_pane

0xd7dd,	// (0x000baaee) main_cset_slider_pane_g18_ParamLimits

0xd7dd,	// (0x000baaee) main_cset_slider_pane_g18

0xd9ad,	// (0x000bacbe) cell_cam4_burst_pane_g2_ParamLimits

0xd9ad,	// (0x000bacbe) cell_cam4_burst_pane_g2

0x0001,

0xfa48,	// (0x000bcd59) cell_cam4_burst_pane_g_ParamLimits

0xfa48,	// (0x000bcd59) cell_cam4_burst_pane_g

0xa87a,	// (0x000b7b8b) bg_cl_pane_ParamLimits

0xa87a,	// (0x000b7b8b) bg_cl_pane

0x6c02,	// (0x000b3f13) cl_header_pane_ParamLimits

0x6c02,	// (0x000b3f13) cl_header_pane

0x6c16,	// (0x000b3f27) cl_listscroll_pane_ParamLimits

0x6c16,	// (0x000b3f27) cl_listscroll_pane

0xdafb,	// (0x000bae0c) bg_cl_pane_g1

0xdb03,	// (0x000bae14) bg_cl_pane_g2

0xdb0b,	// (0x000bae1c) bg_cl_pane_g3

0xdb13,	// (0x000bae24) bg_cl_pane_g4

0xdb1b,	// (0x000bae2c) bg_cl_pane_g5

0xdb23,	// (0x000bae34) bg_cl_pane_g6

0xdb2b,	// (0x000bae3c) bg_cl_pane_g7

0xdb33,	// (0x000bae44) bg_cl_pane_g8

0xdb3b,	// (0x000bae4c) bg_cl_pane_g9

0x0008,

0xfa83,	// (0x000bcd94) bg_cl_pane_g

0x6c26,	// (0x000b3f37) aid_height_cl_leading_ParamLimits

0x6c26,	// (0x000b3f37) aid_height_cl_leading

0x6c32,	// (0x000b3f43) aid_height_cl_text_ParamLimits

0x6c32,	// (0x000b3f43) aid_height_cl_text

0x9526,	// (0x000b6837) bg_cl_header_pane_ParamLimits

0x9526,	// (0x000b6837) bg_cl_header_pane

0x6c51,	// (0x000b3f62) cl_header_pane_g1_ParamLimits

0x6c51,	// (0x000b3f62) cl_header_pane_g1

0x6c67,	// (0x000b3f78) cl_header_pane_t1_ParamLimits

0x6c67,	// (0x000b3f78) cl_header_pane_t1

0xdb43,	// (0x000bae54) cl_list_pane

0xd7b0,	// (0x000baac1) hc_scroll_pane_cp01

0xac6d,	// (0x000b7f7e) bg_cl_header_pane_g1

0xd692,	// (0x000ba9a3) bg_cl_header_pane_g2

0xac8d,	// (0x000b7f9e) bg_cl_header_pane_g3

0xd6a2,	// (0x000ba9b3) bg_cl_header_pane_g4

0xd69a,	// (0x000ba9ab) bg_cl_header_pane_g5

0xd8bc,	// (0x000babcd) bg_cl_header_pane_g6

0xd6ba,	// (0x000ba9cb) bg_cl_header_pane_g7

0xd6c2,	// (0x000ba9d3) bg_cl_header_pane_g8

0xd6b2,	// (0x000ba9c3) bg_cl_header_pane_g9

0x0008,

0xfa96,	// (0x000bcda7) bg_cl_header_pane_g

0x6c80,	// (0x000b3f91) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x6c80,	// (0x000b3f91) hc_cl_list_double_graphic_heading_pane

0x6c93,	// (0x000b3fa4) hc_cl_list_single_graphic_pane_ParamLimits

0x6c93,	// (0x000b3fa4) hc_cl_list_single_graphic_pane

0x6cab,	// (0x000b3fbc) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x6cab,	// (0x000b3fbc) hc_cl_list_single_graphic_pane_g1

0x6cb7,	// (0x000b3fc8) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x6cb7,	// (0x000b3fc8) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfaa9,	// (0x000bcdba) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfaa9,	// (0x000bcdba) hc_cl_list_single_graphic_pane_g

0x6ccb,	// (0x000b3fdc) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x6ccb,	// (0x000b3fdc) hc_cl_list_single_graphic_pane_t1

0x6cab,	// (0x000b3fbc) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x6cab,	// (0x000b3fbc) hc_cl_list_double_graphic_heading_pane_g1

0x6ce0,	// (0x000b3ff1) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x6ce0,	// (0x000b3ff1) hc_cl_list_double_graphic_heading_pane_g2

0x6cf4,	// (0x000b4005) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x6cf4,	// (0x000b4005) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfaae,	// (0x000bcdbf) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfaae,	// (0x000bcdbf) hc_cl_list_double_graphic_heading_pane_g

0x6d08,	// (0x000b4019) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x6d08,	// (0x000b4019) hc_cl_list_double_graphic_heading_pane_t1

0x6d1d,	// (0x000b402e) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x6d1d,	// (0x000b402e) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfab5,	// (0x000bcdc6) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfab5,	// (0x000bcdc6) hc_cl_list_double_graphic_heading_pane_t

0x6d32,	// (0x000b4043) vid4_progress_pane_g1

0x6d44,	// (0x000b4055) vid4_progress_pane_g2

0x9df2,	// (0x000b7103) vid4_progress_pane_g3

0xa3b8,	// (0x000b76c9) vid4_progress_pane_g4

0x0004,

0xfaba,	// (0x000bcdcb) vid4_progress_pane_g

0xa3d6,	// (0x000b76e7) vid4_progress_pane_t1

0xa3eb,	// (0x000b76fc) vid4_progress_pane_t2

0x0002,

0xfac5,	// (0x000bcdd6) vid4_progress_pane_t

0xa416,	// (0x000b7727) wait_bar_pane_cp07

0xca53,	// (0x000b9d64) blid_firmament_pane_ParamLimits

0xca96,	// (0x000b9da7) popup_blid_sat_info2_window_g1

0xcaba,	// (0x000b9dcb) popup_blid_sat_info2_window_t3

0xcac8,	// (0x000b9dd9) popup_blid_sat_info2_window_t4

0xcad6,	// (0x000b9de7) popup_blid_sat_info2_window_t5

0xcae4,	// (0x000b9df5) popup_blid_sat_info2_window_t6

0xcaf4,	// (0x000b9e05) popup_blid_sat_info2_window_t7

0xcb02,	// (0x000b9e13) popup_blid_sat_info2_window_t8

0xcb10,	// (0x000b9e21) popup_blid_sat_info2_window_t9

0xcb1e,	// (0x000b9e2f) popup_blid_sat_info2_window_t10

0xcbe6,	// (0x000b9ef7) aid_firma_cardinal_ParamLimits

0xcbfa,	// (0x000b9f0b) blid_firmament_pane_t1_ParamLimits

0xcc11,	// (0x000b9f22) blid_firmament_pane_t2_ParamLimits

0xcc28,	// (0x000b9f39) blid_firmament_pane_t3_ParamLimits

0xcc3f,	// (0x000b9f50) blid_firmament_pane_t4_ParamLimits

0xf6d3,	// (0x000bc9e4) blid_firmament_pane_t_ParamLimits

0xcc56,	// (0x000b9f67) blid_sat_info_pane_ParamLimits

0x9526,	// (0x000b6837) main_cam_set_pane_ParamLimits

0x508a,	// (0x000b239b) aid_size_cell_colour_35_ParamLimits

0x50aa,	// (0x000b23bb) aid_size_cell_colour_112_ParamLimits

0x50ca,	// (0x000b23db) aid_size_cell_effect_ParamLimits

0xc815,	// (0x000b9b26) bg_tb_trans_pane_cp02_ParamLimits

0xaec6,	// (0x000b81d7) heading_imed_pane_ParamLimits

0x50ea,	// (0x000b23fb) listscroll_imed_pane_ParamLimits

0xbe37,	// (0x000b9148) popup_call2_audio_first_window_g5_ParamLimits

0xbe37,	// (0x000b9148) popup_call2_audio_first_window_g5

0x569b,	// (0x000b29ac) aid_size_touch_image3_arrow_left_ParamLimits

0x569b,	// (0x000b29ac) aid_size_touch_image3_arrow_left

0x56c7,	// (0x000b29d8) aid_size_touch_image3_arrow_right_ParamLimits

0x56c7,	// (0x000b29d8) aid_size_touch_image3_arrow_right

0xa401,	// (0x000b7712) vid4_progress_pane_t3

0x5409,	// (0x000b271a) main_hwr_training_symbol_option_pane_ParamLimits

0x5409,	// (0x000b271a) main_hwr_training_symbol_option_pane

0xd45a,	// (0x000ba76b) popup_hwr_training_preview_window_ParamLimits

0xd45a,	// (0x000ba76b) popup_hwr_training_preview_window

0x5429,	// (0x000b273a) hwr_training_navi_pane_g5_ParamLimits

0x5429,	// (0x000b273a) hwr_training_navi_pane_g5

0xd680,	// (0x000ba991) popup_char_count_window

0xa1c2,	// (0x000b74d3) bg_popup_sub_pane_cp20_ParamLimits

0x669f,	// (0x000b39b0) list_vitu2_match_list_pane_ParamLimits

0x66ae,	// (0x000b39bf) vitu2_page_scroll_pane_ParamLimits

0x66ae,	// (0x000b39bf) vitu2_page_scroll_pane

0xdb4c,	// (0x000bae5d) list_single_hwr_training_symbol_option_pane_ParamLimits

0xdb4c,	// (0x000bae5d) list_single_hwr_training_symbol_option_pane

0xdb5f,	// (0x000bae70) list_single_hwr_training_symbol_option_pane_g1

0xdb67,	// (0x000bae78) list_single_hwr_training_symbol_option_pane_t1

0xdb75,	// (0x000bae86) bg_button_pane_cp023

0xdb7e,	// (0x000bae8f) bg_button_pane_cp024

0x6d8e,	// (0x000b409f) vitu2_page_scroll_pane_g1

0x6d96,	// (0x000b40a7) vitu2_page_scroll_pane_g2

0x0001,

0xfacc,	// (0x000bcddd) vitu2_page_scroll_pane_g

0x6da0,	// (0x000b40b1) vitu2_page_scroll_pane_t1

0xdbb1,	// (0x000baec2) popup_char_count_window_g1

0xdbba,	// (0x000baecb) popup_char_count_window_g2

0xdbc3,	// (0x000baed4) popup_char_count_window_g3

0x0002,

0xfad1,	// (0x000bcde2) popup_char_count_window_g

0xdbcc,	// (0x000baedd) popup_char_count_window_t1

0x94d5,	// (0x000b67e6) main_vded2_pane

0xd157,	// (0x000ba468) aid_size_cell_imed_line

0xd161,	// (0x000ba472) grid_imed_line_width_pane

0xa217,	// (0x000b7528) vid4_indicators_pane_g4

0xdbda,	// (0x000baeeb) cell_imed_line_width_pane_ParamLimits

0xdbda,	// (0x000baeeb) cell_imed_line_width_pane

0xdbf0,	// (0x000baf01) cell_imed_line_width_pane_g1

0xcee5,	// (0x000ba1f6) cell_imed_line_width_pane_g2

0x0001,

0xfad8,	// (0x000bcde9) cell_imed_line_width_pane_g

0x6daf,	// (0x000b40c0) main_vded2_pane_g1_ParamLimits

0x6daf,	// (0x000b40c0) main_vded2_pane_g1

0x6dca,	// (0x000b40db) main_vded2_pane_g2_ParamLimits

0x6dca,	// (0x000b40db) main_vded2_pane_g2

0x0001,

0xfadd,	// (0x000bcdee) main_vded2_pane_g_ParamLimits

0xfadd,	// (0x000bcdee) main_vded2_pane_g

0x6ddc,	// (0x000b40ed) vded2_slider_pane_ParamLimits

0x6ddc,	// (0x000b40ed) vded2_slider_pane

0x6dec,	// (0x000b40fd) aid_size_touch_vded2_end

0x6df6,	// (0x000b4107) aid_size_touch_vded2_playhead

0xdbf9,	// (0x000baf0a) aid_size_touch_vded2_start

0xdc01,	// (0x000baf12) vded2_slider_bg_pane

0xdc0a,	// (0x000baf1b) vded2_slider_pane_g1

0xdc13,	// (0x000baf24) vded2_slider_pane_g2

0x6e00,	// (0x000b4111) vded2_slider_pane_g3

0x0002,

0xfae2,	// (0x000bcdf3) vded2_slider_pane_g

0xdc1b,	// (0x000baf2c) vded2_slider_bg_pane_g1

0xdc24,	// (0x000baf35) vded2_slider_bg_pane_g2

0xdc2d,	// (0x000baf3e) vded2_slider_bg_pane_g3

0x0002,

0xfae9,	// (0x000bcdfa) vded2_slider_bg_pane_g

0x2cff,	// (0x000b0010) aid_postcard_touch_down_pane_ParamLimits

0x2cff,	// (0x000b0010) aid_postcard_touch_down_pane

0x2d17,	// (0x000b0028) aid_postcard_touch_up_pane_ParamLimits

0x2d17,	// (0x000b0028) aid_postcard_touch_up_pane

0x94d5,	// (0x000b67e6) main_blid2_pane

0xc823,	// (0x000b9b34) popup_blid2_search_window

0x94d5,	// (0x000b67e6) blid2_gps_pane

0x94d5,	// (0x000b67e6) blid2_navig_pane

0x94d5,	// (0x000b67e6) blid2_search_pane

0x94d5,	// (0x000b67e6) blid2_tripm_pane

0x6e0b,	// (0x000b411c) blid2_search_pane_g1_ParamLimits

0x6e0b,	// (0x000b411c) blid2_search_pane_g1

0x6e1e,	// (0x000b412f) blid2_search_pane_t1_ParamLimits

0x6e1e,	// (0x000b412f) blid2_search_pane_t1

0x6e30,	// (0x000b4141) aid_size_cell_blid2_gps_ParamLimits

0x6e30,	// (0x000b4141) aid_size_cell_blid2_gps

0x6e48,	// (0x000b4159) blid2_gps_pane_g1_ParamLimits

0x6e48,	// (0x000b4159) blid2_gps_pane_g1

0x6e5c,	// (0x000b416d) grid_blid2_satellite_pane_ParamLimits

0x6e5c,	// (0x000b416d) grid_blid2_satellite_pane

0x6e74,	// (0x000b4185) blid2_navig_pane_g1_ParamLimits

0x6e74,	// (0x000b4185) blid2_navig_pane_g1

0x6e80,	// (0x000b4191) blid2_navig_pane_t1_ParamLimits

0x6e80,	// (0x000b4191) blid2_navig_pane_t1

0x6e9b,	// (0x000b41ac) blid2_navig_pane_t2_ParamLimits

0x6e9b,	// (0x000b41ac) blid2_navig_pane_t2

0x0001,

0xfaf0,	// (0x000bce01) blid2_navig_pane_t_ParamLimits

0xfaf0,	// (0x000bce01) blid2_navig_pane_t

0x6eb6,	// (0x000b41c7) blid2_navig_ring_pane_ParamLimits

0x6eb6,	// (0x000b41c7) blid2_navig_ring_pane

0x6ed1,	// (0x000b41e2) blid2_speed_pane_ParamLimits

0x6ed1,	// (0x000b41e2) blid2_speed_pane

0x6edd,	// (0x000b41ee) blid2_tripm_pane_g1_ParamLimits

0x6edd,	// (0x000b41ee) blid2_tripm_pane_g1

0x6ef8,	// (0x000b4209) blid2_tripm_pane_g2_ParamLimits

0x6ef8,	// (0x000b4209) blid2_tripm_pane_g2

0x6f0c,	// (0x000b421d) blid2_tripm_pane_g3_ParamLimits

0x6f0c,	// (0x000b421d) blid2_tripm_pane_g3

0x6f20,	// (0x000b4231) blid2_tripm_pane_g4_ParamLimits

0x6f20,	// (0x000b4231) blid2_tripm_pane_g4

0x6f34,	// (0x000b4245) blid2_tripm_pane_g5_ParamLimits

0x6f34,	// (0x000b4245) blid2_tripm_pane_g5

0x0005,

0xfaf5,	// (0x000bce06) blid2_tripm_pane_g_ParamLimits

0xfaf5,	// (0x000bce06) blid2_tripm_pane_g

0x6f5a,	// (0x000b426b) blid2_tripm_pane_t1_ParamLimits

0x6f5a,	// (0x000b426b) blid2_tripm_pane_t1

0x6f73,	// (0x000b4284) blid2_tripm_pane_t2_ParamLimits

0x6f73,	// (0x000b4284) blid2_tripm_pane_t2

0x6f8c,	// (0x000b429d) blid2_tripm_pane_t3_ParamLimits

0x6f8c,	// (0x000b429d) blid2_tripm_pane_t3

0x0003,

0xfb02,	// (0x000bce13) blid2_tripm_pane_t_ParamLimits

0xfb02,	// (0x000bce13) blid2_tripm_pane_t

0x6fd3,	// (0x000b42e4) cell_blid2_satellite_pane_ParamLimits

0x6fd3,	// (0x000b42e4) cell_blid2_satellite_pane

0x6ff1,	// (0x000b4302) cell_blid2_satellite_pane_g1

0xdc36,	// (0x000baf47) cell_blid2_satellite_pane_t1

0xcc66,	// (0x000b9f77) blid2_speed_pane_g1

0xdc44,	// (0x000baf55) blid2_speed_pane_t1

0xdc52,	// (0x000baf63) blid2_speed_pane_t2

0x0001,

0xfb0b,	// (0x000bce1c) blid2_speed_pane_t

0xcc66,	// (0x000b9f77) blid2_navig_ring_pane_g1

0x6ffa,	// (0x000b430b) blid2_navig_ring_pane_g2

0x7002,	// (0x000b4313) blid2_navig_ring_pane_g3

0x700a,	// (0x000b431b) blid2_navig_ring_pane_g4

0x7012,	// (0x000b4323) blid2_navig_ring_pane_g5

0x0004,

0xfb10,	// (0x000bce21) blid2_navig_ring_pane_g

0x94d5,	// (0x000b67e6) bg_popup_window_pane_cp011

0xdc60,	// (0x000baf71) popup_blid2_search_window_g1

0xdc68,	// (0x000baf79) popup_blid2_search_window_t1

0xdc76,	// (0x000baf87) popup_blid2_search_window_t2

0x0001,

0xfb1b,	// (0x000bce2c) popup_blid2_search_window_t

0xab7c,	// (0x000b7e8d) main_browser_pane_g1

0xa87a,	// (0x000b7b8b) main_browser_pane_ParamLimits

0xa1c2,	// (0x000b74d3) bg_button_pane_cp011_ParamLimits

0x5ef9,	// (0x000b320a) cell_vitu2_function_pane_g1_ParamLimits

0xc815,	// (0x000b9b26) bg_popup_sub_pane_cp22_ParamLimits

0x6888,	// (0x000b3b99) input_focus_pane_cp08_ParamLimits

0x689f,	// (0x000b3bb0) popup_vitu2_query_button_pane_ParamLimits

0x689f,	// (0x000b3bb0) popup_vitu2_query_button_pane

0x68b0,	// (0x000b3bc1) popup_vitu2_query_input_button_pane

0xd8f7,	// (0x000bac08) popup_vitu2_query_window_g1_ParamLimits

0x68ba,	// (0x000b3bcb) popup_vitu2_query_window_g2_ParamLimits

0xfa1c,	// (0x000bcd2d) popup_vitu2_query_window_g_ParamLimits

0x94d5,	// (0x000b67e6) bg_button_pane_cp026

0x701a,	// (0x000b432b) popup_vitu2_query_input_button_pane_g1

0x94d5,	// (0x000b67e6) bg_button_pane_cp025

0xdc84,	// (0x000baf95) popup_vitu2_query_button_pane_t1

0x4423,	// (0x000b1734) main_mp3_pane_t6

0x4431,	// (0x000b1742) popup_slider_window_cp01

0xa16d,	// (0x000b747e) cam4_battery_pane

0xa1d0,	// (0x000b74e1) cam4_battery_pane_cp02

0xa3b0,	// (0x000b76c1) cam4_battery_pane_cp01

0xa3b0,	// (0x000b76c1) cam4_battery_pane_cp03

0xd558,	// (0x000ba869) cam4_battery_pane_g1

0xcc66,	// (0x000b9f77) cam4_battery_pane_g2

0x0001,

0xfb20,	// (0x000bce31) cam4_battery_pane_g

0xcb2c,	// (0x000b9e3d) popup_blid_sat_info2_window_t11

0x2614,	// (0x000af925) aid_size_touch_mv_arrow_left_ParamLimits

0x263d,	// (0x000af94e) aid_size_touch_mv_arrow_right_ParamLimits

0xb2c6,	// (0x000b85d7) navi_pane_g1_ParamLimits

0x267c,	// (0x000af98d) navi_pane_g2_ParamLimits

0x26aa,	// (0x000af9bb) navi_pane_g3_ParamLimits

0xf3e5,	// (0x000bc6f6) navi_pane_g_ParamLimits

0x2704,	// (0x000afa15) navi_pane_mv_t1_ParamLimits

0x50f6,	// (0x000b2407) grid_imed_effect_pane_ParamLimits

0x10be,	// (0x000ae3cf) aid_placing_vt_slider_lsc

0xaac7,	// (0x000b7dd8) aid_placing_vt_slider_prt

0x9526,	// (0x000b6837) bg_tb_trans_pane_cp01_ParamLimits

0xcdb6,	// (0x000ba0c7) popup_image_details_window_g1_ParamLimits

0xcdc9,	// (0x000ba0da) popup_image_details_window_g2_ParamLimits

0xcdde,	// (0x000ba0ef) popup_image_details_window_g3_ParamLimits

0xcdde,	// (0x000ba0ef) popup_image_details_window_g3

0xf718,	// (0x000bca29) popup_image_details_window_g_ParamLimits

0xcdf2,	// (0x000ba103) popup_image_details_window_t1_ParamLimits

0xce04,	// (0x000ba115) popup_image_details_window_t2_ParamLimits

0xce1d,	// (0x000ba12e) popup_image_details_window_t3_ParamLimits

0xce31,	// (0x000ba142) popup_image_details_window_t4_ParamLimits

0xce4c,	// (0x000ba15d) popup_image_details_window_t5_ParamLimits

0xf71f,	// (0x000bca30) popup_image_details_window_t_ParamLimits

0x6c3e,	// (0x000b3f4f) cl_header_name_pane_ParamLimits

0x6c3e,	// (0x000b3f4f) cl_header_name_pane

0x7022,	// (0x000b4333) cl_header_name_pane_t1_ParamLimits

0x7022,	// (0x000b4333) cl_header_name_pane_t1

0x7043,	// (0x000b4354) cl_header_name_pane_t2_ParamLimits

0x7043,	// (0x000b4354) cl_header_name_pane_t2

0x7085,	// (0x000b4396) cl_header_name_pane_t3_ParamLimits

0x7085,	// (0x000b4396) cl_header_name_pane_t3

0x0002,

0xfb25,	// (0x000bce36) cl_header_name_pane_t_ParamLimits

0xfb25,	// (0x000bce36) cl_header_name_pane_t

0x26d5,	// (0x000af9e6) navi_pane_mv_g2_ParamLimits

0xd65a,	// (0x000ba96b) field_vitu2_entry_pane_g1_ParamLimits

0xd666,	// (0x000ba977) field_vitu2_entry_pane_g2_ParamLimits

0xd672,	// (0x000ba983) field_vitu2_entry_pane_g3_ParamLimits

0xd672,	// (0x000ba983) field_vitu2_entry_pane_g3

0xf91b,	// (0x000bcc2c) field_vitu2_entry_pane_g_ParamLimits

0xa269,	// (0x000b757a) cell_vitu2_itu_pane_g1_ParamLimits

0x5e8d,	// (0x000b319e) cell_vitu2_itu_pane_g2_ParamLimits

0x5e8d,	// (0x000b319e) cell_vitu2_itu_pane_g2

0x0001,

0xf927,	// (0x000bcc38) cell_vitu2_itu_pane_g_ParamLimits

0xf927,	// (0x000bcc38) cell_vitu2_itu_pane_g

0xa1c2,	// (0x000b74d3) bg_vkb2_func_pane_cp05_ParamLimits

0xa1c2,	// (0x000b74d3) bg_vkb2_func_pane_cp05

0xa1c2,	// (0x000b74d3) bg_vkb2_func_pane_cp03

0xa1c2,	// (0x000b74d3) bg_vkb2_func_pane_cp04

0xa1c2,	// (0x000b74d3) bg_vkb2_func_pane_cp10_ParamLimits

0xa1c2,	// (0x000b74d3) bg_vkb2_func_pane_cp10

0x6be0,	// (0x000b3ef1) bg_vkb2_func_pane_cp08

0x6bc6,	// (0x000b3ed7) bg_vkb2_func_pane_cp06

0x6bd4,	// (0x000b3ee5) bg_vkb2_func_pane_cp07

0xdb87,	// (0x000bae98) bg_vkb2_func_pane_cp11_ParamLimits

0xdb87,	// (0x000bae98) bg_vkb2_func_pane_cp11

0xdb9c,	// (0x000baead) bg_vkb2_func_pane_cp12_ParamLimits

0xdb9c,	// (0x000baead) bg_vkb2_func_pane_cp12

0x94d5,	// (0x000b67e6) bg_vkb2_func_pane_cp09

0xd692,	// (0x000ba9a3) bg_vkb2_func_pane_g1

0xac8d,	// (0x000b7f9e) bg_vkb2_func_pane_g2

0xd69a,	// (0x000ba9ab) bg_vkb2_func_pane_g3

0xd6a2,	// (0x000ba9b3) bg_vkb2_func_pane_g4

0xd8bc,	// (0x000babcd) bg_vkb2_func_pane_g5

0xd6ba,	// (0x000ba9cb) bg_vkb2_func_pane_g6

0xd6c2,	// (0x000ba9d3) bg_vkb2_func_pane_g7

0xd6b2,	// (0x000ba9c3) bg_vkb2_func_pane_g8

0xac6d,	// (0x000b7f7e) bg_vkb2_func_pane_g9

0x0008,

0xfb2c,	// (0x000bce3d) bg_vkb2_func_pane_g

0x6f48,	// (0x000b4259) blid2_tripm_pane_g6_ParamLimits

0x6f48,	// (0x000b4259) blid2_tripm_pane_g6

0xd512,	// (0x000ba823) mp4_progress_pane_g1

0x6fbf,	// (0x000b42d0) blid2_tripm_values_pane_ParamLimits

0x6fbf,	// (0x000b42d0) blid2_tripm_values_pane

0x70b6,	// (0x000b43c7) blid2_tripm_values_pane_t1

0x70c4,	// (0x000b43d5) blid2_tripm_values_pane_t2

0x70d2,	// (0x000b43e3) blid2_tripm_values_pane_t3

0x70e0,	// (0x000b43f1) blid2_tripm_values_pane_t4

0x70ee,	// (0x000b43ff) blid2_tripm_values_pane_t5

0x70fc,	// (0x000b440d) blid2_tripm_values_pane_t6

0x710a,	// (0x000b441b) blid2_tripm_values_pane_t7

0x7118,	// (0x000b4429) blid2_tripm_values_pane_t8

0x7126,	// (0x000b4437) blid2_tripm_values_pane_t9

0x0008,

0xfb3f,	// (0x000bce50) blid2_tripm_values_pane_t

0x10fb,	// (0x000ae40c) call_video_pane_t1_ParamLimits

0x1115,	// (0x000ae426) call_video_pane_t2_ParamLimits

0xf26e,	// (0x000bc57f) call_video_pane_t_ParamLimits

0x2c4c,	// (0x000aff5d) msg_header_pane_g1_ParamLimits

0xb4e9,	// (0x000b87fa) msg_header_pane_g2_ParamLimits

0xb4e9,	// (0x000b87fa) msg_header_pane_g2

0x0001,

0xf488,	// (0x000bc799) msg_header_pane_g_ParamLimits

0xf488,	// (0x000bc799) msg_header_pane_g

0xa87a,	// (0x000b7b8b) main_clock2_pane_ParamLimits

0x4ddd,	// (0x000b20ee) grid_clock2_toolbar_pane_ParamLimits

0x4ddd,	// (0x000b20ee) grid_clock2_toolbar_pane

0x4ddd,	// (0x000b20ee) listscroll_clock2_pane_ParamLimits

0x4ddd,	// (0x000b20ee) listscroll_clock2_pane

0x4ed4,	// (0x000b21e5) main_clock2_pane_t3_ParamLimits

0x4ed4,	// (0x000b21e5) main_clock2_pane_t3

0x4ef8,	// (0x000b2209) main_clock2_pane_t4_ParamLimits

0x4ef8,	// (0x000b2209) main_clock2_pane_t4

0xdc92,	// (0x000bafa3) cell_clock2_toolbar_pane

0xdc9a,	// (0x000bafab) cell_clock2_toolbar_pane_cp01

0xdc9a,	// (0x000bafab) cell_clock2_toolbar_pane_cp02

0xdca2,	// (0x000bafb3) cell_clock2_toolbar_pane_cp03

0xdcaa,	// (0x000bafbb) list_clock2_pane

0xb22c,	// (0x000b853d) scroll_pane_cp10

0xdcb2,	// (0x000bafc3) list_single_clock2_pane_ParamLimits

0xdcb2,	// (0x000bafc3) list_single_clock2_pane

0xaa30,	// (0x000b7d41) list_highlight_pane_cp08

0xdcbf,	// (0x000bafd0) list_single_clock2_pane_t1

0xdccd,	// (0x000bafde) list_single_clock2_pane_t2

0x0001,

0xfb52,	// (0x000bce63) list_single_clock2_pane_t

0x94d5,	// (0x000b67e6) bg_button_pane_cp10

0xdcdb,	// (0x000bafec) cell_clock2_toolbar_pane_g1

0x2c8b,	// (0x000aff9c) aid_main_viewer_pane_g1_ParamLimits

0x2c8b,	// (0x000aff9c) aid_main_viewer_pane_g1

0x2c99,	// (0x000affaa) aid_main_viewer_pane_g2_ParamLimits

0x2c99,	// (0x000affaa) aid_main_viewer_pane_g2

0x2ca7,	// (0x000affb8) aid_main_viewer_pane_g3_ParamLimits

0x2ca7,	// (0x000affb8) aid_main_viewer_pane_g3

0x2cb6,	// (0x000affc7) aid_main_viewer_pane_g4_ParamLimits

0x2cb6,	// (0x000affc7) aid_main_viewer_pane_g4

0x0003,

0xf499,	// (0x000bc7aa) aid_main_viewer_pane_g_ParamLimits

0xf499,	// (0x000bc7aa) aid_main_viewer_pane_g

0x3609,	// (0x000b091a) main_calc_pane_ParamLimits

0x361d,	// (0x000b092e) main_dialer2_pane_ParamLimits

0x94d5,	// (0x000b67e6) main_cam6_pane

0x94d5,	// (0x000b67e6) main_vid6_pane

0x4de9,	// (0x000b20fa) listscroll_gen_pane_cp06_ParamLimits

0x4de9,	// (0x000b20fa) listscroll_gen_pane_cp06

0x4f1b,	// (0x000b222c) main_clock2_pane_t5_ParamLimits

0x4f1b,	// (0x000b222c) main_clock2_pane_t5

0x4f7b,	// (0x000b228c) aid_call2_pane_cp10_ParamLimits

0x4f8d,	// (0x000b229e) aid_call_pane_cp10_ParamLimits

0xb29b,	// (0x000b85ac) popup_clock_analogue_window_cp10_g1_ParamLimits

0xb29b,	// (0x000b85ac) popup_clock_analogue_window_cp10_g2_ParamLimits

0x4f9f,	// (0x000b22b0) popup_clock_analogue_window_cp10_g3_ParamLimits

0x4f9f,	// (0x000b22b0) popup_clock_analogue_window_cp10_g4_ParamLimits

0xb29b,	// (0x000b85ac) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf7d4,	// (0x000bcae5) popup_clock_analogue_window_cp10_g_ParamLimits

0x4fb5,	// (0x000b22c6) popup_clock_analogue_window_cp10_t1_ParamLimits

0x5648,	// (0x000b2959) cell_dialer2_keypad_pane_g2_ParamLimits

0x5648,	// (0x000b2959) cell_dialer2_keypad_pane_g2

0x0001,

0xf8ba,	// (0x000bcbcb) cell_dialer2_keypad_pane_g_ParamLimits

0xf8ba,	// (0x000bcbcb) cell_dialer2_keypad_pane_g

0x5664,	// (0x000b2975) cell_dialer2_keypad_pane_t1

0x6224,	// (0x000b3535) main_cset_text2_pane_ParamLimits

0x6224,	// (0x000b3535) main_cset_text2_pane

0xdaef,	// (0x000bae00) area_vitu2_query_pane_g1_ParamLimits

0x6b63,	// (0x000b3e74) area_vitu2_query_pane_g2_ParamLimits

0xfa6f,	// (0x000bcd80) area_vitu2_query_pane_g_ParamLimits

0xa38c,	// (0x000b769d) area_vitu2_query_pane_t7_ParamLimits

0xa38c,	// (0x000b769d) area_vitu2_query_pane_t7

0x6bc6,	// (0x000b3ed7) bg_button_pane_cp018_ParamLimits

0x6bd4,	// (0x000b3ee5) bg_button_pane_cp021_ParamLimits

0x6be0,	// (0x000b3ef1) bg_button_pane_cp022_ParamLimits

0x6be0,	// (0x000b3ef1) bg_vkb2_func_pane_cp08_ParamLimits

0x6bc6,	// (0x000b3ed7) bg_vkb2_func_pane_cp06_ParamLimits

0x6bd4,	// (0x000b3ee5) bg_vkb2_func_pane_cp07_ParamLimits

0x6bf1,	// (0x000b3f02) input_focus_pane_cp09_ParamLimits

0xa444,	// (0x000b7755) cam6_autofocus_pane_ParamLimits

0xa444,	// (0x000b7755) cam6_autofocus_pane

0x7134,	// (0x000b4445) cam6_image_uncrop_pane_ParamLimits

0x7134,	// (0x000b4445) cam6_image_uncrop_pane

0x7143,	// (0x000b4454) cam6_indi_pane_ParamLimits

0x7143,	// (0x000b4454) cam6_indi_pane

0x7159,	// (0x000b446a) cam6_mode_pane_ParamLimits

0x7159,	// (0x000b446a) cam6_mode_pane

0x716b,	// (0x000b447c) cam6_timer_pane_ParamLimits

0x716b,	// (0x000b447c) cam6_timer_pane

0x7177,	// (0x000b4488) cam6_zoom_pane_ParamLimits

0x7177,	// (0x000b4488) cam6_zoom_pane

0x7185,	// (0x000b4496) cam6_mode_pane_g1_ParamLimits

0x7185,	// (0x000b4496) cam6_mode_pane_g1

0x7195,	// (0x000b44a6) cam6_mode_pane_g2_ParamLimits

0x7195,	// (0x000b44a6) cam6_mode_pane_g2

0x71a5,	// (0x000b44b6) cam6_mode_pane_g3_ParamLimits

0x71a5,	// (0x000b44b6) cam6_mode_pane_g3

0x71b5,	// (0x000b44c6) cam6_mode_pane_g4_ParamLimits

0x71b5,	// (0x000b44c6) cam6_mode_pane_g4

0x0003,

0xfb57,	// (0x000bce68) cam6_mode_pane_g_ParamLimits

0xfb57,	// (0x000bce68) cam6_mode_pane_g

0xdce3,	// (0x000baff4) bg_tb_trans_pane_cp08_ParamLimits

0xdce3,	// (0x000baff4) bg_tb_trans_pane_cp08

0xdcf1,	// (0x000bb002) cam6_battery_pane_ParamLimits

0xdcf1,	// (0x000bb002) cam6_battery_pane

0xdd07,	// (0x000bb018) cam6_indi_pane_g1_ParamLimits

0xdd07,	// (0x000bb018) cam6_indi_pane_g1

0xdd19,	// (0x000bb02a) cam6_indi_pane_g2_ParamLimits

0xdd19,	// (0x000bb02a) cam6_indi_pane_g2

0xdd2b,	// (0x000bb03c) cam6_indi_pane_g3_ParamLimits

0xdd2b,	// (0x000bb03c) cam6_indi_pane_g3

0x0002,

0xfb60,	// (0x000bce71) cam6_indi_pane_g_ParamLimits

0xfb60,	// (0x000bce71) cam6_indi_pane_g

0xdd3d,	// (0x000bb04e) cam6_indi_pane_t1_ParamLimits

0xdd3d,	// (0x000bb04e) cam6_indi_pane_t1

0x5c2d,	// (0x000b2f3e) cam6_autofocus_pane_g1

0x5c25,	// (0x000b2f36) cam6_autofocus_pane_g2

0x5c3d,	// (0x000b2f4e) cam6_autofocus_pane_g3

0x5c35,	// (0x000b2f46) cam6_autofocus_pane_g4

0x0003,

0xfb67,	// (0x000bce78) cam6_autofocus_pane_g

0xdd63,	// (0x000bb074) cam6_timer_pane_g1

0xdd6b,	// (0x000bb07c) cam6_timer_pane_t1

0xdd79,	// (0x000bb08a) cam6_zoom_cont_pane

0xdd81,	// (0x000bb092) cam6_zoom_pane_g1

0xdd89,	// (0x000bb09a) cam6_zoom_pane_g2

0x71c5,	// (0x000b44d6) cam6_zoom_pane_g3

0x0002,

0xfb70,	// (0x000bce81) cam6_zoom_pane_g

0xcc66,	// (0x000b9f77) cam6_battery_pane_g1

0xcc66,	// (0x000b9f77) cam6_battery_pane_g2

0x0001,

0xf6dc,	// (0x000bc9ed) cam6_battery_pane_g

0xdd91,	// (0x000bb0a2) cam6_zoom_cont_pane_g1

0xdd9a,	// (0x000bb0ab) cam6_zoom_cont_pane_g2

0xdda3,	// (0x000bb0b4) cam6_zoom_cont_pane_g3

0x0002,

0xfb77,	// (0x000bce88) cam6_zoom_cont_pane_g

0x71e2,	// (0x000b44f3) cam6_mode_pane_cp_ParamLimits

0x71e2,	// (0x000b44f3) cam6_mode_pane_cp

0x71f4,	// (0x000b4505) cam6_zoom_pane_cp_ParamLimits

0x71f4,	// (0x000b4505) cam6_zoom_pane_cp

0x7202,	// (0x000b4513) vid6_image_uncrop_cif_pane_ParamLimits

0x7202,	// (0x000b4513) vid6_image_uncrop_cif_pane

0x7212,	// (0x000b4523) vid6_image_uncrop_nhd_pane_ParamLimits

0x7212,	// (0x000b4523) vid6_image_uncrop_nhd_pane

0x7221,	// (0x000b4532) vid6_image_uncrop_vga_pane_ParamLimits

0x7221,	// (0x000b4532) vid6_image_uncrop_vga_pane

0x7230,	// (0x000b4541) vid6_image_uncrop_wvga_pane_ParamLimits

0x7230,	// (0x000b4541) vid6_image_uncrop_wvga_pane

0x723f,	// (0x000b4550) vid6_indi_pane_ParamLimits

0x723f,	// (0x000b4550) vid6_indi_pane

0xdce3,	// (0x000baff4) bg_tb_trans_pane_cp09_ParamLimits

0xdce3,	// (0x000baff4) bg_tb_trans_pane_cp09

0xddbb,	// (0x000bb0cc) cam6_battery_pane_cp_ParamLimits

0xddbb,	// (0x000bb0cc) cam6_battery_pane_cp

0xddc7,	// (0x000bb0d8) vid6_indi_pane_g1_ParamLimits

0xddc7,	// (0x000bb0d8) vid6_indi_pane_g1

0xddd9,	// (0x000bb0ea) vid6_indi_pane_g2_ParamLimits

0xddd9,	// (0x000bb0ea) vid6_indi_pane_g2

0xddeb,	// (0x000bb0fc) vid6_indi_pane_g3_ParamLimits

0xddeb,	// (0x000bb0fc) vid6_indi_pane_g3

0xde02,	// (0x000bb113) vid6_indi_pane_g4_ParamLimits

0xde02,	// (0x000bb113) vid6_indi_pane_g4

0xde19,	// (0x000bb12a) vid6_indi_pane_g5_ParamLimits

0xde19,	// (0x000bb12a) vid6_indi_pane_g5

0x0004,

0xfb7e,	// (0x000bce8f) vid6_indi_pane_g_ParamLimits

0xfb7e,	// (0x000bce8f) vid6_indi_pane_g

0xde33,	// (0x000bb144) vid6_indi_pane_t1_ParamLimits

0xde33,	// (0x000bb144) vid6_indi_pane_t1

0xde49,	// (0x000bb15a) vid6_indi_pane_t2_ParamLimits

0xde49,	// (0x000bb15a) vid6_indi_pane_t2

0xde71,	// (0x000bb182) vid6_indi_pane_t3_ParamLimits

0xde71,	// (0x000bb182) vid6_indi_pane_t3

0xde99,	// (0x000bb1aa) vid6_indi_pane_t4_ParamLimits

0xde99,	// (0x000bb1aa) vid6_indi_pane_t4

0x0003,

0xfb89,	// (0x000bce9a) vid6_indi_pane_t_ParamLimits

0xfb89,	// (0x000bce9a) vid6_indi_pane_t

0xdebd,	// (0x000bb1ce) wait_bar_pane_cp08

0x7257,	// (0x000b4568) main_cset_text2_pane_t1_ParamLimits

0x7257,	// (0x000b4568) main_cset_text2_pane_t1

0x71cd,	// (0x000b44de) listscroll_gen_pane_cp06_t1_ParamLimits

0x71cd,	// (0x000b44de) listscroll_gen_pane_cp06_t1

0x94d5,	// (0x000b67e6) main_cam6_set_pane

0xa15f,	// (0x000b7470) bg_tb_trans_pane_cp06_ParamLimits

0xa175,	// (0x000b7486) cam4_indicators_pane_g1_ParamLimits

0xa186,	// (0x000b7497) cam4_indicators_pane_g2_ParamLimits

0xf8f7,	// (0x000bcc08) cam4_indicators_pane_g_ParamLimits

0xa19e,	// (0x000b74af) cam4_indicators_pane_t1_ParamLimits

0xa1c2,	// (0x000b74d3) bg_tb_trans_pane_cp07_ParamLimits

0xa1da,	// (0x000b74eb) vid4_indicators_pane_g1_ParamLimits

0xa1f0,	// (0x000b7501) vid4_indicators_pane_g2_ParamLimits

0xa204,	// (0x000b7515) vid4_indicators_pane_g3_ParamLimits

0xa217,	// (0x000b7528) vid4_indicators_pane_g4_ParamLimits

0xf909,	// (0x000bcc1a) vid4_indicators_pane_g_ParamLimits

0xa235,	// (0x000b7546) vid4_indicators_pane_t1_ParamLimits

0x6d32,	// (0x000b4043) vid4_progress_pane_g1_ParamLimits

0x6d44,	// (0x000b4055) vid4_progress_pane_g2_ParamLimits

0x9df2,	// (0x000b7103) vid4_progress_pane_g3_ParamLimits

0xa3b8,	// (0x000b76c9) vid4_progress_pane_g4_ParamLimits

0xfaba,	// (0x000bcdcb) vid4_progress_pane_g_ParamLimits

0xa3d6,	// (0x000b76e7) vid4_progress_pane_t1_ParamLimits

0xa3eb,	// (0x000b76fc) vid4_progress_pane_t2_ParamLimits

0xa401,	// (0x000b7712) vid4_progress_pane_t3_ParamLimits

0xfac5,	// (0x000bcdd6) vid4_progress_pane_t_ParamLimits

0xa416,	// (0x000b7727) wait_bar_pane_cp07_ParamLimits

0x7275,	// (0x000b4586) main_cam6_set_pane_g2_ParamLimits

0x7275,	// (0x000b4586) main_cam6_set_pane_g2

0x729b,	// (0x000b45ac) main_cset6_listscroll_pane_ParamLimits

0x729b,	// (0x000b45ac) main_cset6_listscroll_pane

0x72b9,	// (0x000b45ca) main_cset6_slider_pane_ParamLimits

0x72b9,	// (0x000b45ca) main_cset6_slider_pane

0x72cf,	// (0x000b45e0) main_cset6_text2_pane_ParamLimits

0x72cf,	// (0x000b45e0) main_cset6_text2_pane

0xdecc,	// (0x000bb1dd) main_cset6_text_pane

0xded4,	// (0x000bb1e5) main_cset_list_pane_copy1_ParamLimits

0xded4,	// (0x000bb1e5) main_cset_list_pane_copy1

0xdee4,	// (0x000bb1f5) scroll_pane_cp028_copy1

0x21c0,	// (0x000af4d1) cset_list_set_pane_copy1

0x72dd,	// (0x000b45ee) aid_position_infowindow_above_copy1

0x72e5,	// (0x000b45f6) aid_position_infowindow_below_copy1

0x72ed,	// (0x000b45fe) cset_list_set_pane_g1_copy1

0x72f5,	// (0x000b4606) cset_list_set_pane_g3_copy1_ParamLimits

0x72f5,	// (0x000b4606) cset_list_set_pane_g3_copy1

0x7304,	// (0x000b4615) cset_list_set_pane_t1_copy1_ParamLimits

0x7304,	// (0x000b4615) cset_list_set_pane_t1_copy1

0x9526,	// (0x000b6837) list_highlight_pane_cp021_copy1_ParamLimits

0x9526,	// (0x000b6837) list_highlight_pane_cp021_copy1

0xdeed,	// (0x000bb1fe) cset6_slider_pane_ParamLimits

0xdeed,	// (0x000bb1fe) cset6_slider_pane

0xdf19,	// (0x000bb22a) main_cset6_slider_pane_g1_ParamLimits

0xdf19,	// (0x000bb22a) main_cset6_slider_pane_g1

0x7319,	// (0x000b462a) main_cset6_slider_pane_g2_ParamLimits

0x7319,	// (0x000b462a) main_cset6_slider_pane_g2

0xdf41,	// (0x000bb252) main_cset6_slider_pane_g3_ParamLimits

0xdf41,	// (0x000bb252) main_cset6_slider_pane_g3

0x7341,	// (0x000b4652) main_cset6_slider_pane_g4_ParamLimits

0x7341,	// (0x000b4652) main_cset6_slider_pane_g4

0x734d,	// (0x000b465e) main_cset6_slider_pane_g5_ParamLimits

0x734d,	// (0x000b465e) main_cset6_slider_pane_g5

0xd7c5,	// (0x000baad6) main_cset6_slider_pane_g7_ParamLimits

0xd7c5,	// (0x000baad6) main_cset6_slider_pane_g7

0xd7d1,	// (0x000baae2) main_cset6_slider_pane_g8_ParamLimits

0xd7d1,	// (0x000baae2) main_cset6_slider_pane_g8

0x62d3,	// (0x000b35e4) main_cset6_slider_pane_g9_ParamLimits

0x62d3,	// (0x000b35e4) main_cset6_slider_pane_g9

0x62df,	// (0x000b35f0) main_cset6_slider_pane_g10_ParamLimits

0x62df,	// (0x000b35f0) main_cset6_slider_pane_g10

0x62eb,	// (0x000b35fc) main_cset6_slider_pane_g11_ParamLimits

0x62eb,	// (0x000b35fc) main_cset6_slider_pane_g11

0x62f7,	// (0x000b3608) main_cset6_slider_pane_g12_ParamLimits

0x62f7,	// (0x000b3608) main_cset6_slider_pane_g12

0x6303,	// (0x000b3614) main_cset6_slider_pane_g13_ParamLimits

0x6303,	// (0x000b3614) main_cset6_slider_pane_g13

0x630f,	// (0x000b3620) main_cset6_slider_pane_g14_ParamLimits

0x630f,	// (0x000b3620) main_cset6_slider_pane_g14

0x735b,	// (0x000b466c) main_cset6_slider_pane_g15_ParamLimits

0x735b,	// (0x000b466c) main_cset6_slider_pane_g15

0x6333,	// (0x000b3644) main_cset6_slider_pane_g16_ParamLimits

0x6333,	// (0x000b3644) main_cset6_slider_pane_g16

0x6341,	// (0x000b3652) main_cset6_slider_pane_g17_ParamLimits

0x6341,	// (0x000b3652) main_cset6_slider_pane_g17

0x0011,

0xfb92,	// (0x000bcea3) main_cset6_slider_pane_g_ParamLimits

0xfb92,	// (0x000bcea3) main_cset6_slider_pane_g

0xdf4d,	// (0x000bb25e) main_cset6_slider_pane_t1_ParamLimits

0xdf4d,	// (0x000bb25e) main_cset6_slider_pane_t1

0x738b,	// (0x000b469c) main_cset6_slider_pane_t2_ParamLimits

0x738b,	// (0x000b469c) main_cset6_slider_pane_t2

0x73b6,	// (0x000b46c7) main_cset6_slider_pane_t3_ParamLimits

0x73b6,	// (0x000b46c7) main_cset6_slider_pane_t3

0x73e1,	// (0x000b46f2) main_cset6_slider_pane_t4_ParamLimits

0x73e1,	// (0x000b46f2) main_cset6_slider_pane_t4

0x740c,	// (0x000b471d) main_cset6_slider_pane_t5_ParamLimits

0x740c,	// (0x000b471d) main_cset6_slider_pane_t5

0xdf8e,	// (0x000bb29f) main_cset6_slider_pane_t7_ParamLimits

0xdf8e,	// (0x000bb29f) main_cset6_slider_pane_t7

0x7439,	// (0x000b474a) main_cset6_slider_pane_t8_ParamLimits

0x7439,	// (0x000b474a) main_cset6_slider_pane_t8

0x745d,	// (0x000b476e) main_cset6_slider_pane_t9_ParamLimits

0x745d,	// (0x000b476e) main_cset6_slider_pane_t9

0x7481,	// (0x000b4792) main_cset6_slider_pane_t10_ParamLimits

0x7481,	// (0x000b4792) main_cset6_slider_pane_t10

0x74a5,	// (0x000b47b6) main_cset6_slider_pane_t11_ParamLimits

0x74a5,	// (0x000b47b6) main_cset6_slider_pane_t11

0xdfc4,	// (0x000bb2d5) main_cset6_slider_pane_t14_ParamLimits

0xdfc4,	// (0x000bb2d5) main_cset6_slider_pane_t14

0xdffd,	// (0x000bb30e) main_cset6_slider_pane_t15_ParamLimits

0xdffd,	// (0x000bb30e) main_cset6_slider_pane_t15

0x000b,

0xfbb7,	// (0x000bcec8) main_cset6_slider_pane_t_ParamLimits

0xfbb7,	// (0x000bcec8) main_cset6_slider_pane_t

0xe036,	// (0x000bb347) cset_slider_pane_g1_copy1

0xe03f,	// (0x000bb350) cset_slider_pane_g2_copy1

0xe048,	// (0x000bb359) cset_slider_pane_g3_copy1

0x94d5,	// (0x000b67e6) bg_popup_sub_pane_cp011_copy1

0xe051,	// (0x000bb362) main_cset_text_pane_g1_copy1

0xd90b,	// (0x000bac1c) main_cset_text_pane_t1_copy1

0xd919,	// (0x000bac2a) main_cset_text_pane_t2_copy1

0xd927,	// (0x000bac38) main_cset_text_pane_t3_copy1

0xd935,	// (0x000bac46) main_cset_text_pane_t4_copy1

0xd943,	// (0x000bac54) main_cset_text_pane_t5_copy1

0xe059,	// (0x000bb36a) main_cset_text_pane_t6_copy1

0xe067,	// (0x000bb378) main_cset_text_pane_t7_copy1

0x7257,	// (0x000b4568) main_cset_text2_pane_t1_copy1

0x9526,	// (0x000b6837) main_ncimui_pane

0x38ab,	// (0x000b0bbc) popup_query_ncimui_window_ParamLimits

0x38ab,	// (0x000b0bbc) popup_query_ncimui_window

0xbafb,	// (0x000b8e0c) field_cale_ev2_pane_g4_ParamLimits

0xbafb,	// (0x000b8e0c) field_cale_ev2_pane_g4

0x551a,	// (0x000b282b) cell_video_dialer_keypad_pane_g2_ParamLimits

0x551a,	// (0x000b282b) cell_video_dialer_keypad_pane_g2

0x0001,

0xf895,	// (0x000bcba6) cell_video_dialer_keypad_pane_g_ParamLimits

0xf895,	// (0x000bcba6) cell_video_dialer_keypad_pane_g

0x5532,	// (0x000b2843) cell_video_dialer_keypad_pane_t1

0x94d5,	// (0x000b67e6) bg_popup_window_pane_cp012

0xb118,	// (0x000b8429) heading_pane_cp06

0xe093,	// (0x000bb3a4) ncim_query_content_pane

0x94d5,	// (0x000b67e6) bg_popup_heading_pane_cp01

0xe09b,	// (0x000bb3ac) ncim_heading_pane_t1

0xe0a9,	// (0x000bb3ba) ncim_indicator_popup_pane

0xe0bb,	// (0x000bb3cc) ncim_query_button_pane

0xe0d1,	// (0x000bb3e2) ncim_query_content_pane_t1

0xe0e3,	// (0x000bb3f4) ncim_query_content_pane_t2

0x0005,

0xfbfb,	// (0x000bcf0c) ncim_query_content_pane_t

0xe11d,	// (0x000bb42e) ncim_query_list_pane

0xe12f,	// (0x000bb440) ncim_query_popup_pane

0xe0a9,	// (0x000bb3ba) ncim_indicator_popup_pane_ParamLimits

0x76c0,	// (0x000b49d1) ncim_query_content_pane_g1_ParamLimits

0x76c0,	// (0x000b49d1) ncim_query_content_pane_g1

0xe0d1,	// (0x000bb3e2) ncim_query_content_pane_t1_ParamLimits

0xe0e3,	// (0x000bb3f4) ncim_query_content_pane_t2_ParamLimits

0x76cc,	// (0x000b49dd) ncim_query_content_pane_t3_ParamLimits

0x76cc,	// (0x000b49dd) ncim_query_content_pane_t3

0x76f4,	// (0x000b4a05) ncim_query_content_pane_t4_ParamLimits

0x76f4,	// (0x000b4a05) ncim_query_content_pane_t4

0x771c,	// (0x000b4a2d) ncim_query_content_pane_t5_ParamLimits

0x771c,	// (0x000b4a2d) ncim_query_content_pane_t5

0xe0f5,	// (0x000bb406) ncim_query_content_pane_t6_ParamLimits

0xe0f5,	// (0x000bb406) ncim_query_content_pane_t6

0xfbfb,	// (0x000bcf0c) ncim_query_content_pane_t_ParamLimits

0xe11d,	// (0x000bb42e) ncim_query_list_pane_ParamLimits

0xe12f,	// (0x000bb440) ncim_query_popup_pane_ParamLimits

0xe143,	// (0x000bb454) wait_bar_pane_cp04

0x94d5,	// (0x000b67e6) input_focus_pane_cp011

0xe14b,	// (0x000bb45c) ncim_query_popup_pane_t1

0xe159,	// (0x000bb46a) ncim_list_query_list_pane_ParamLimits

0xe159,	// (0x000bb46a) ncim_list_query_list_pane

0x94d5,	// (0x000b67e6) bg_button_pane_cp027

0xe16c,	// (0x000bb47d) ncim_query_button_pane_g1

0x94d5,	// (0x000b67e6) list_highlight_pane_cp012

0xe176,	// (0x000bb487) ncim_list_query_list_pane_g1

0xe17e,	// (0x000bb48f) ncim_list_query_list_pane_t1

0xa192,	// (0x000b74a3) cam4_indicators_pane_g3_ParamLimits

0xa192,	// (0x000b74a3) cam4_indicators_pane_g3

0xa223,	// (0x000b7534) vid4_indicators_pane_g5_ParamLimits

0xa223,	// (0x000b7534) vid4_indicators_pane_g5

0xa3c7,	// (0x000b76d8) vid4_progress_pane_g5_ParamLimits

0xa3c7,	// (0x000b76d8) vid4_progress_pane_g5

0x75ae,	// (0x000b48bf) main_ncimui_pane_g1

0x7614,	// (0x000b4925) ncimui_group_query_pane_ParamLimits

0x7614,	// (0x000b4925) ncimui_group_query_pane

0x765c,	// (0x000b496d) ncimui_list_pane_ParamLimits

0x765c,	// (0x000b496d) ncimui_list_pane

0x7683,	// (0x000b4994) ncimui_text_pane_ParamLimits

0x7683,	// (0x000b4994) ncimui_text_pane

0x7744,	// (0x000b4a55) ncimui_text_pane_t1_ParamLimits

0x7744,	// (0x000b4a55) ncimui_text_pane_t1

0xe18c,	// (0x000bb49d) ncimui_list_single_graphic_pane_ParamLimits

0xe18c,	// (0x000bb49d) ncimui_list_single_graphic_pane

0x7762,	// (0x000b4a73) ncimui_query_pane_ParamLimits

0x7762,	// (0x000b4a73) ncimui_query_pane

0x94d5,	// (0x000b67e6) list_highlight_pane_cp013

0xe19c,	// (0x000bb4ad) ncim_list_query_list_pane_t1_copy1

0xe176,	// (0x000bb487) ncim_list_single_graphic_pane_g1

0xe1aa,	// (0x000bb4bb) ncim_query_button_pane_cp01

0xe1b6,	// (0x000bb4c7) ncim_query_entry_pane_ParamLimits

0xe1b6,	// (0x000bb4c7) ncim_query_entry_pane

0xe1c9,	// (0x000bb4da) ncimui_query_pane_g1

0xe1d5,	// (0x000bb4e6) ncimui_query_pane_t1_ParamLimits

0xe1d5,	// (0x000bb4e6) ncimui_query_pane_t1

0x9526,	// (0x000b6837) input_focus_pane_cp012

0xe1ee,	// (0x000bb4ff) ncim_query_entry_pane_t1

0xa87a,	// (0x000b7b8b) main_im_pane_ParamLimits

0x9526,	// (0x000b6837) main_mobtv_pane_ParamLimits

0x9526,	// (0x000b6837) main_mobtv_pane

0x7373,	// (0x000b4684) main_cset6_slider_pane_g18_ParamLimits

0x7373,	// (0x000b4684) main_cset6_slider_pane_g18

0x737f,	// (0x000b4690) main_cset6_slider_pane_g19_ParamLimits

0x737f,	// (0x000b4690) main_cset6_slider_pane_g19

0x7775,	// (0x000b4a86) bg_main_mobtv_pane_ParamLimits

0x7775,	// (0x000b4a86) bg_main_mobtv_pane

0x7783,	// (0x000b4a94) main_mobtv_info_pane

0x778e,	// (0x000b4a9f) main_mobtv_loading_pane_ParamLimits

0x778e,	// (0x000b4a9f) main_mobtv_loading_pane

0xe200,	// (0x000bb511) main_mobtv_pg_channel_list_pane

0xe20a,	// (0x000bb51b) main_mobtv_pg_hdr_pane

0x779b,	// (0x000b4aac) main_mobtv_programe_curr_pane_ParamLimits

0x779b,	// (0x000b4aac) main_mobtv_programe_curr_pane

0x77a8,	// (0x000b4ab9) main_mobtv_programe_next_pane_ParamLimits

0x77a8,	// (0x000b4ab9) main_mobtv_programe_next_pane

0xe213,	// (0x000bb524) popup_mobtv_noti_window

0xcc66,	// (0x000b9f77) main_tv_pg_hdr_pane_g1

0xe21d,	// (0x000bb52e) main_tv_pg_hdr_pane_g2

0xe225,	// (0x000bb536) main_tv_pg_hdr_pane_g3

0xe22d,	// (0x000bb53e) main_tv_pg_hdr_pane_g4

0xe235,	// (0x000bb546) main_tv_pg_hdr_pane_g5

0xe23f,	// (0x000bb550) main_tv_pg_hdr_pane_g6

0xe249,	// (0x000bb55a) main_tv_pg_hdr_pane_g7

0xe253,	// (0x000bb564) main_tv_pg_hdr_pane_g8

0xe25d,	// (0x000bb56e) main_tv_pg_hdr_pane_g9

0xe267,	// (0x000bb578) main_tv_pg_hdr_pane_g10

0xe271,	// (0x000bb582) main_tv_pg_hdr_pane_g11

0x000a,

0xfc08,	// (0x000bcf19) main_tv_pg_hdr_pane_g

0xe27b,	// (0x000bb58c) main_tv_pg_hdr_pane_t1

0xe289,	// (0x000bb59a) main_tv_pg_hdr_pane_t2

0xe297,	// (0x000bb5a8) main_tv_pg_hdr_pane_t3

0xe2a7,	// (0x000bb5b8) main_tv_pg_hdr_pane_t4

0xe2b7,	// (0x000bb5c8) main_tv_pg_hdr_pane_t5

0x0004,

0xfc1f,	// (0x000bcf30) main_tv_pg_hdr_pane_t

0xe2c7,	// (0x000bb5d8) single_mobtv_pg_channel_pane_ParamLimits

0xe2c7,	// (0x000bb5d8) single_mobtv_pg_channel_pane

0xe2d9,	// (0x000bb5ea) single_mobtv_pg_channel_table_pane

0xe2e2,	// (0x000bb5f3) single_mobtv_pg_channel_thumb_pane

0xe2eb,	// (0x000bb5fc) single_tv_pg_channel_pane_g1

0xe2f4,	// (0x000bb605) single_tv_pg_channel_pane_g2

0x0001,

0xfc2a,	// (0x000bcf3b) single_tv_pg_channel_pane_g

0xce96,	// (0x000ba1a7) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xce96,	// (0x000ba1a7) bg_single_mobtv_pg_channel_thumb_pane

0xe2fd,	// (0x000bb60e) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xe2fd,	// (0x000bb60e) single_mobtv_pg_channel_thumb_pane_g1

0xe30b,	// (0x000bb61c) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xe30b,	// (0x000bb61c) single_mobtv_pg_channel_thumb_pane_g2

0xe317,	// (0x000bb628) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xe317,	// (0x000bb628) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfc2f,	// (0x000bcf40) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfc2f,	// (0x000bcf40) single_mobtv_pg_channel_thumb_pane_g

0xe323,	// (0x000bb634) single_mobtv_pg_channel_thumb_pane_t1

0xe331,	// (0x000bb642) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc36,	// (0x000bcf47) single_mobtv_pg_channel_thumb_pane_t

0xcc66,	// (0x000b9f77) bg_single_mobtv_pg_channel_table_pane_g1

0xcc66,	// (0x000b9f77) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf6dc,	// (0x000bc9ed) bg_single_mobtv_pg_channel_table_pane_g

0xe33f,	// (0x000bb650) single_mobtv_pg_channel_table_pane_t1

0xe34d,	// (0x000bb65e) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc3b,	// (0x000bcf4c) single_mobtv_pg_channel_table_pane_t

0x77bd,	// (0x000b4ace) main_mobtv_info_pane_g1_ParamLimits

0x77bd,	// (0x000b4ace) main_mobtv_info_pane_g1

0x77db,	// (0x000b4aec) main_mobtv_info_pane_t1_ParamLimits

0x77db,	// (0x000b4aec) main_mobtv_info_pane_t1

0x7853,	// (0x000b4b64) main_mobtv_info_pane_t2_ParamLimits

0x7853,	// (0x000b4b64) main_mobtv_info_pane_t2

0x0002,

0xfc45,	// (0x000bcf56) main_mobtv_info_pane_t_ParamLimits

0xfc45,	// (0x000bcf56) main_mobtv_info_pane_t

0x78e2,	// (0x000b4bf3) wait_bar_pane_cp05

0x78f4,	// (0x000b4c05) main_mobtv_loading_pane_g1_ParamLimits

0x78f4,	// (0x000b4c05) main_mobtv_loading_pane_g1

0x7905,	// (0x000b4c16) main_mobtv_loading_pane_g2_ParamLimits

0x7905,	// (0x000b4c16) main_mobtv_loading_pane_g2

0x7911,	// (0x000b4c22) main_mobtv_loading_pane_g3_ParamLimits

0x7911,	// (0x000b4c22) main_mobtv_loading_pane_g3

0x0002,

0xfc4c,	// (0x000bcf5d) main_mobtv_loading_pane_g_ParamLimits

0xfc4c,	// (0x000bcf5d) main_mobtv_loading_pane_g

0xe35b,	// (0x000bb66c) main_mobtv_loading_pane_t1_ParamLimits

0xe35b,	// (0x000bb66c) main_mobtv_loading_pane_t1

0xe373,	// (0x000bb684) main_mobtv_loading_pane_t2_ParamLimits

0xe373,	// (0x000bb684) main_mobtv_loading_pane_t2

0x0001,

0xfc53,	// (0x000bcf64) main_mobtv_loading_pane_t_ParamLimits

0xfc53,	// (0x000bcf64) main_mobtv_loading_pane_t

0x7924,	// (0x000b4c35) wait_bar_pane_cp06_ParamLimits

0x7924,	// (0x000b4c35) wait_bar_pane_cp06

0xe397,	// (0x000bb6a8) main_mobtv_programe_curr_pane_t1

0xe3a5,	// (0x000bb6b6) main_mobtv_programe_curr_pane_t2

0x0001,

0xfc58,	// (0x000bcf69) main_mobtv_programe_curr_pane_t

0xe3b3,	// (0x000bb6c4) main_mobtv_programe_next_pane_t1

0xe3c1,	// (0x000bb6d2) main_mobtv_programe_next_pane_t2

0xe3cf,	// (0x000bb6e0) main_mobtv_programe_next_pane_t3

0x0002,

0xfc5d,	// (0x000bcf6e) main_mobtv_programe_next_pane_t

0x94d5,	// (0x000b67e6) bg_popup_mobtv_noti_window_pane

0xe3dd,	// (0x000bb6ee) popup_mobtv_noti_window_g1

0xe3e5,	// (0x000bb6f6) popup_mobtv_noti_window_t1

0xe3f3,	// (0x000bb704) popup_mobtv_noti_window_t2

0x0001,

0xfc64,	// (0x000bcf75) popup_mobtv_noti_window_t

0xcc66,	// (0x000b9f77) bg_popup_mobtv_noti_window_pane_g1

0x94d5,	// (0x000b67e6) sc_clock_pane

0x94d5,	// (0x000b67e6) main_fs_bigclock_pane

0x6fa9,	// (0x000b42ba) blid2_tripm_pane_t4_ParamLimits

0x6fa9,	// (0x000b42ba) blid2_tripm_pane_t4

0x7933,	// (0x000b4c44) sc_clock_pane_g1_ParamLimits

0x7933,	// (0x000b4c44) sc_clock_pane_g1

0x7945,	// (0x000b4c56) sc_clock_pane_t1_ParamLimits

0x7945,	// (0x000b4c56) sc_clock_pane_t1

0x7969,	// (0x000b4c7a) sc_clock_pane_t2_ParamLimits

0x7969,	// (0x000b4c7a) sc_clock_pane_t2

0x7981,	// (0x000b4c92) sc_clock_pane_t3_ParamLimits

0x7981,	// (0x000b4c92) sc_clock_pane_t3

0x0004,

0xfc69,	// (0x000bcf7a) sc_clock_pane_t_ParamLimits

0xfc69,	// (0x000bcf7a) sc_clock_pane_t

0x897f,	// (0x000b5c90) main_fs_bigclock_indicator_pane_ParamLimits

0x897f,	// (0x000b5c90) main_fs_bigclock_indicator_pane

0x7a3d,	// (0x000b4d4e) main_fs_bigclock_pane_g1_ParamLimits

0x7a3d,	// (0x000b4d4e) main_fs_bigclock_pane_g1

0x898b,	// (0x000b5c9c) main_fs_bigclock_pane_t1_ParamLimits

0x898b,	// (0x000b5c9c) main_fs_bigclock_pane_t1

0x899d,	// (0x000b5cae) main_fs_bigclock_pane_t2_ParamLimits

0x899d,	// (0x000b5cae) main_fs_bigclock_pane_t2

0x89b1,	// (0x000b5cc2) main_fs_bigclock_pane_t3_ParamLimits

0x89b1,	// (0x000b5cc2) main_fs_bigclock_pane_t3

0x0002,

0xfe73,	// (0x000bd184) main_fs_bigclock_pane_t_ParamLimits

0xfe73,	// (0x000bd184) main_fs_bigclock_pane_t

0xec57,	// (0x000bbf68) main_fs_bigclock_indicator_pane_g1

0xe0c3,	// (0x000bb3d4) ncim_query_content_pane_g2_ParamLimits

0xe0c3,	// (0x000bb3d4) ncim_query_content_pane_g2

0x0001,

0xfbf6,	// (0x000bcf07) ncim_query_content_pane_g_ParamLimits

0xfbf6,	// (0x000bcf07) ncim_query_content_pane_g

0x7998,	// (0x000b4ca9) sc_clock_pane_t4_ParamLimits

0x7998,	// (0x000b4ca9) sc_clock_pane_t4

0x9526,	// (0x000b6837) main_radioblah_pane

0xd5cb,	// (0x000ba8dc) cell_call4_button_pane_t1_copy1_ParamLimits

0xd5cb,	// (0x000ba8dc) cell_call4_button_pane_t1_copy1

0x75c6,	// (0x000b48d7) main_ncimui_pane_t1_ParamLimits

0x75c6,	// (0x000b48d7) main_ncimui_pane_t1

0x75e0,	// (0x000b48f1) main_ncimui_pane_t2_ParamLimits

0x75e0,	// (0x000b48f1) main_ncimui_pane_t2

0x0002,

0xfbef,	// (0x000bcf00) main_ncimui_pane_t_ParamLimits

0xfbef,	// (0x000bcf00) main_ncimui_pane_t

0xe546,	// (0x000bb857) main_radioblah_anim_pane_ParamLimits

0xe546,	// (0x000bb857) main_radioblah_anim_pane

0xe557,	// (0x000bb868) main_radioblah_info_pane_ParamLimits

0xe557,	// (0x000bb868) main_radioblah_info_pane

0xe56b,	// (0x000bb87c) main_radioblah_pane_t1_ParamLimits

0xe56b,	// (0x000bb87c) main_radioblah_pane_t1

0xe587,	// (0x000bb898) main_radioblah_pane_t2_ParamLimits

0xe587,	// (0x000bb898) main_radioblah_pane_t2

0x0003,

0xfc8a,	// (0x000bcf9b) main_radioblah_pane_t_ParamLimits

0xfc8a,	// (0x000bcf9b) main_radioblah_pane_t

0x7a9a,	// (0x000b4dab) main_radioblah_rocker_ctrl_pane_ParamLimits

0x7a9a,	// (0x000b4dab) main_radioblah_rocker_ctrl_pane

0xe5cf,	// (0x000bb8e0) main_radioblah_info_pane_t1_ParamLimits

0xe5cf,	// (0x000bb8e0) main_radioblah_info_pane_t1

0x7af2,	// (0x000b4e03) main_radioblah_info_pane_t2_ParamLimits

0x7af2,	// (0x000b4e03) main_radioblah_info_pane_t2

0x0003,

0xfc93,	// (0x000bcfa4) main_radioblah_info_pane_t_ParamLimits

0xfc93,	// (0x000bcfa4) main_radioblah_info_pane_t

0xcc66,	// (0x000b9f77) main_radioblah_rocker_ctrl_pane_g1

0x7ba2,	// (0x000b4eb3) main_radioblah_rocker_ctrl_pane_g2

0x7baa,	// (0x000b4ebb) main_radioblah_rocker_ctrl_pane_g3

0x7bb2,	// (0x000b4ec3) main_radioblah_rocker_ctrl_pane_g4

0x7bba,	// (0x000b4ecb) main_radioblah_rocker_ctrl_pane_g5

0x7bc2,	// (0x000b4ed3) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfc9c,	// (0x000bcfad) main_radioblah_rocker_ctrl_pane_g

0x7257,	// (0x000b4568) main_cset_text2_pane_t1_copy1_ParamLimits

0xa155,	// (0x000b7466) cam4_image_uncrop_qvga_pane

0xa1b8,	// (0x000b74c9) vid4_image_uncrop_qcif_pane

0xa444,	// (0x000b7755) cam6_image_uncrop_qvga_pane_ParamLimits

0xa444,	// (0x000b7755) cam6_image_uncrop_qvga_pane

0xddab,	// (0x000bb0bc) vid6_image_uncrop_qcif_pane_ParamLimits

0xddab,	// (0x000bb0bc) vid6_image_uncrop_qcif_pane

0x94d5,	// (0x000b67e6) bg_popup_preview_window_pane_cp03

0xe075,	// (0x000bb386) list_cset_text2_pane

0xe07d,	// (0x000bb38e) main_cset6_text2_pane_g1

0xe085,	// (0x000bb396) main_cset6_text2_pane_t1

0x7bca,	// (0x000b4edb) list_cset_text2_pane_t1_ParamLimits

0x7bca,	// (0x000b4edb) list_cset_text2_pane_t1

0x9526,	// (0x000b6837) main_radioblah_pane_ParamLimits

0x78ce,	// (0x000b4bdf) main_mobtv_info_pane_t3_ParamLimits

0x78ce,	// (0x000b4bdf) main_mobtv_info_pane_t3

0x7a88,	// (0x000b4d99) main_radioblah_pane_g1

0x7ac2,	// (0x000b4dd3) main_radioblah_info_pane_g1

0x7b47,	// (0x000b4e58) main_radioblah_info_pane_t3_ParamLimits

0x7b47,	// (0x000b4e58) main_radioblah_info_pane_t3

0x20e0,	// (0x000af3f1) highlight_cell_cale_month_pane_ParamLimits

0x20e0,	// (0x000af3f1) highlight_cell_cale_month_pane

0x94d5,	// (0x000b67e6) main_phob_fisheye_pane

0xcf7a,	// (0x000ba28b) scroll_pane_cp0031_ParamLimits

0xcf7a,	// (0x000ba28b) scroll_pane_cp0031

0xdebd,	// (0x000bb1ce) wait_bar_pane_cp08_ParamLimits

0x21c0,	// (0x000af4d1) cset_list_set_pane_copy1_ParamLimits

0xe609,	// (0x000bb91a) highlight_cell_cale_month_pane_g1

0x7be3,	// (0x000b4ef4) highlight_cell_cale_month_pane_t1

0xdb43,	// (0x000bae54) list_gen_pane_cp01

0xd7b0,	// (0x000baac1) scroll_pane_01

0x7bf1,	// (0x000b4f02) list_single_double_fisheye_pane

0x7bfa,	// (0x000b4f0b) list_double_fisheye_pane_g1_ParamLimits

0x7bfa,	// (0x000b4f0b) list_double_fisheye_pane_g1

0x7c06,	// (0x000b4f17) list_double_fisheye_pane_g2_ParamLimits

0x7c06,	// (0x000b4f17) list_double_fisheye_pane_g2

0x7c1a,	// (0x000b4f2b) list_double_fisheye_pane_g3_ParamLimits

0x7c1a,	// (0x000b4f2b) list_double_fisheye_pane_g3

0x0004,

0xfca9,	// (0x000bcfba) list_double_fisheye_pane_g_ParamLimits

0xfca9,	// (0x000bcfba) list_double_fisheye_pane_g

0x7c43,	// (0x000b4f54) list_double_fisheye_pane_t1_ParamLimits

0x7c43,	// (0x000b4f54) list_double_fisheye_pane_t1

0x7c5e,	// (0x000b4f6f) list_double_fisheye_pane_t2_ParamLimits

0x7c5e,	// (0x000b4f6f) list_double_fisheye_pane_t2

0x0001,

0xfcb4,	// (0x000bcfc5) list_double_fisheye_pane_t_ParamLimits

0xfcb4,	// (0x000bcfc5) list_double_fisheye_pane_t

0x94d5,	// (0x000b67e6) main_call5_pane

0x79c3,	// (0x000b4cd4) sc_swipe_pane_ParamLimits

0x79c3,	// (0x000b4cd4) sc_swipe_pane

0x7c93,	// (0x000b4fa4) call5_image_pane_ParamLimits

0x7c93,	// (0x000b4fa4) call5_image_pane

0x7cb0,	// (0x000b4fc1) call5_swipe_1_pane_ParamLimits

0x7cb0,	// (0x000b4fc1) call5_swipe_1_pane

0x7cc3,	// (0x000b4fd4) call5_swipe_2_pane_ParamLimits

0x7cc3,	// (0x000b4fd4) call5_swipe_2_pane

0x7cf0,	// (0x000b5001) popup_call5_audio_first_window_ParamLimits

0x7cf0,	// (0x000b5001) popup_call5_audio_first_window

0xce96,	// (0x000ba1a7) call5_swipe_1_pane_g1_ParamLimits

0xce96,	// (0x000ba1a7) call5_swipe_1_pane_g1

0xe611,	// (0x000bb922) call5_swipe_1_pane_g2_ParamLimits

0xe611,	// (0x000bb922) call5_swipe_1_pane_g2

0x0001,

0xfcb9,	// (0x000bcfca) call5_swipe_1_pane_g_ParamLimits

0xfcb9,	// (0x000bcfca) call5_swipe_1_pane_g

0xe61d,	// (0x000bb92e) call5_swipe_1_pane_t1_ParamLimits

0xe61d,	// (0x000bb92e) call5_swipe_1_pane_t1

0xce96,	// (0x000ba1a7) call5_swipe_2_pane_g1_ParamLimits

0xce96,	// (0x000ba1a7) call5_swipe_2_pane_g1

0xe632,	// (0x000bb943) call5_swipe_2_pane_g2_ParamLimits

0xe632,	// (0x000bb943) call5_swipe_2_pane_g2

0x0001,

0xfcbe,	// (0x000bcfcf) call5_swipe_2_pane_g_ParamLimits

0xfcbe,	// (0x000bcfcf) call5_swipe_2_pane_g

0xe63e,	// (0x000bb94f) call5_swipe_2_pane_t1_ParamLimits

0xe63e,	// (0x000bb94f) call5_swipe_2_pane_t1

0xe653,	// (0x000bb964) sc_swipe_pane_g1_ParamLimits

0xe653,	// (0x000bb964) sc_swipe_pane_g1

0xe660,	// (0x000bb971) sc_swipe_pane_g2_ParamLimits

0xe660,	// (0x000bb971) sc_swipe_pane_g2

0x0001,

0xfcc3,	// (0x000bcfd4) sc_swipe_pane_g_ParamLimits

0xfcc3,	// (0x000bcfd4) sc_swipe_pane_g

0xe66c,	// (0x000bb97d) sc_swipe_pane_t1_ParamLimits

0xe66c,	// (0x000bb97d) sc_swipe_pane_t1

0x94d5,	// (0x000b67e6) main_cmail_launcher_pane

0x7d05,	// (0x000b5016) aid_size_cell_cmail_l_ParamLimits

0x7d05,	// (0x000b5016) aid_size_cell_cmail_l

0x7d1f,	// (0x000b5030) grid_cmail_l_pane_ParamLimits

0x7d1f,	// (0x000b5030) grid_cmail_l_pane

0x7d3a,	// (0x000b504b) cell_cmail_l_pane_ParamLimits

0x7d3a,	// (0x000b504b) cell_cmail_l_pane

0x7d62,	// (0x000b5073) cell_cmail_l_pane_g1_ParamLimits

0x7d62,	// (0x000b5073) cell_cmail_l_pane_g1

0x7d6e,	// (0x000b507f) cell_cmail_l_pane_t1_ParamLimits

0x7d6e,	// (0x000b507f) cell_cmail_l_pane_t1

0xe681,	// (0x000bb992) cell_cmail_l_pane_t2_ParamLimits

0xe681,	// (0x000bb992) cell_cmail_l_pane_t2

0x0001,

0xfcc8,	// (0x000bcfd9) cell_cmail_l_pane_t_ParamLimits

0xfcc8,	// (0x000bcfd9) cell_cmail_l_pane_t

0x9526,	// (0x000b6837) grid_highlight_pane_cp018_ParamLimits

0x9526,	// (0x000b6837) grid_highlight_pane_cp018

0xfd1f,	// (0x000ad030) main2_pane_ParamLimits

0xfd1f,	// (0x000ad030) main2_pane

0xa925,	// (0x000b7c36) popup_sp_fs_action_menu_bg_pane_g1

0xa92d,	// (0x000b7c3e) popup_sp_fs_action_menu_bg_pane_g2

0xa935,	// (0x000b7c46) popup_sp_fs_action_menu_bg_pane_g3

0xa93d,	// (0x000b7c4e) popup_sp_fs_action_menu_bg_pane_g4

0xa945,	// (0x000b7c56) popup_sp_fs_action_menu_bg_pane_g5

0xa94d,	// (0x000b7c5e) popup_sp_fs_action_menu_bg_pane_g6

0xa955,	// (0x000b7c66) popup_sp_fs_action_menu_bg_pane_g7

0xa95d,	// (0x000b7c6e) popup_sp_fs_action_menu_bg_pane_g8

0xa965,	// (0x000b7c76) popup_sp_fs_action_menu_bg_pane_g9

0xa96d,	// (0x000b7c7e) popup_sp_fs_action_menu_bg_pane_g10

0xa96d,	// (0x000b7c7e) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf18a,	// (0x000bc49b) popup_sp_fs_action_menu_bg_pane_g

0x0f3c,	// (0x000ae24d) list_medium_line_x2_t3_g3_g1_ParamLimits

0x0f3c,	// (0x000ae24d) list_medium_line_x2_t3_g3_g1

0x0f48,	// (0x000ae259) list_medium_line_x2_t3_g3_g2_ParamLimits

0x0f48,	// (0x000ae259) list_medium_line_x2_t3_g3_g2

0x0f54,	// (0x000ae265) list_medium_line_x2_t3_g3_g3_ParamLimits

0x0f54,	// (0x000ae265) list_medium_line_x2_t3_g3_g3

0x0002,

0xf238,	// (0x000bc549) list_medium_line_x2_t3_g3_g_ParamLimits

0xf238,	// (0x000bc549) list_medium_line_x2_t3_g3_g

0x0f60,	// (0x000ae271) list_medium_line_x2_t3_g3_t1_ParamLimits

0x0f60,	// (0x000ae271) list_medium_line_x2_t3_g3_t1

0x0f75,	// (0x000ae286) list_medium_line_x2_t3_g3_t2_ParamLimits

0x0f75,	// (0x000ae286) list_medium_line_x2_t3_g3_t2

0x0f89,	// (0x000ae29a) list_medium_line_x2_t3_g3_t3_ParamLimits

0x0f89,	// (0x000ae29a) list_medium_line_x2_t3_g3_t3

0x0002,

0xf23f,	// (0x000bc550) list_medium_line_x2_t3_g3_t_ParamLimits

0xf23f,	// (0x000bc550) list_medium_line_x2_t3_g3_t

0x0f3c,	// (0x000ae24d) list_medium_line_x2_t3_g2_g1_ParamLimits

0x0f3c,	// (0x000ae24d) list_medium_line_x2_t3_g2_g1

0x0f54,	// (0x000ae265) list_medium_line_x2_t3_g2_g2_ParamLimits

0x0f54,	// (0x000ae265) list_medium_line_x2_t3_g2_g2

0x0001,

0xf246,	// (0x000bc557) list_medium_line_x2_t3_g2_g_ParamLimits

0xf246,	// (0x000bc557) list_medium_line_x2_t3_g2_g

0x0f9e,	// (0x000ae2af) list_medium_line_x2_t3_g2_t1_ParamLimits

0x0f9e,	// (0x000ae2af) list_medium_line_x2_t3_g2_t1

0x0fb4,	// (0x000ae2c5) list_medium_line_x2_t3_g2_t2_ParamLimits

0x0fb4,	// (0x000ae2c5) list_medium_line_x2_t3_g2_t2

0x0fc6,	// (0x000ae2d7) list_medium_line_x2_t3_g2_t3_ParamLimits

0x0fc6,	// (0x000ae2d7) list_medium_line_x2_t3_g2_t3

0x0002,

0xf24b,	// (0x000bc55c) list_medium_line_x2_t3_g2_t_ParamLimits

0xf24b,	// (0x000bc55c) list_medium_line_x2_t3_g2_t

0x0f3c,	// (0x000ae24d) list_medium_line_x2_t4_g4_g1_ParamLimits

0x0f3c,	// (0x000ae24d) list_medium_line_x2_t4_g4_g1

0x0fe4,	// (0x000ae2f5) list_medium_line_x2_t4_g4_g2_ParamLimits

0x0fe4,	// (0x000ae2f5) list_medium_line_x2_t4_g4_g2

0x0f48,	// (0x000ae259) list_medium_line_x2_t4_g4_g3_ParamLimits

0x0f48,	// (0x000ae259) list_medium_line_x2_t4_g4_g3

0x0ff0,	// (0x000ae301) list_medium_line_x2_t4_g4_g4_ParamLimits

0x0ff0,	// (0x000ae301) list_medium_line_x2_t4_g4_g4

0x0003,

0xf252,	// (0x000bc563) list_medium_line_x2_t4_g4_g_ParamLimits

0xf252,	// (0x000bc563) list_medium_line_x2_t4_g4_g

0x0ffc,	// (0x000ae30d) list_medium_line_x2_t4_g4_t1_ParamLimits

0x0ffc,	// (0x000ae30d) list_medium_line_x2_t4_g4_t1

0x1016,	// (0x000ae327) list_medium_line_x2_t4_g4_t2_ParamLimits

0x1016,	// (0x000ae327) list_medium_line_x2_t4_g4_t2

0x102c,	// (0x000ae33d) list_medium_line_x2_t4_g4_t3_ParamLimits

0x102c,	// (0x000ae33d) list_medium_line_x2_t4_g4_t3

0x1041,	// (0x000ae352) list_medium_line_x2_t4_g4_t4_ParamLimits

0x1041,	// (0x000ae352) list_medium_line_x2_t4_g4_t4

0x0003,

0xf25b,	// (0x000bc56c) list_medium_line_x2_t4_g4_t_ParamLimits

0xf25b,	// (0x000bc56c) list_medium_line_x2_t4_g4_t

0x0f3c,	// (0x000ae24d) list_medium_line_x2_t2_g4_g1_ParamLimits

0x0f3c,	// (0x000ae24d) list_medium_line_x2_t2_g4_g1

0x0fe4,	// (0x000ae2f5) list_medium_line_x2_t2_g4_g2_ParamLimits

0x0fe4,	// (0x000ae2f5) list_medium_line_x2_t2_g4_g2

0x0f48,	// (0x000ae259) list_medium_line_x2_t2_g4_g3_ParamLimits

0x0f48,	// (0x000ae259) list_medium_line_x2_t2_g4_g3

0x0f54,	// (0x000ae265) list_medium_line_x2_t2_g4_g4_ParamLimits

0x0f54,	// (0x000ae265) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2c2,	// (0x000bc5d3) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2c2,	// (0x000bc5d3) list_medium_line_x2_t2_g4_g

0x2106,	// (0x000af417) list_medium_line_x2_t2_g4_t1_ParamLimits

0x2106,	// (0x000af417) list_medium_line_x2_t2_g4_t1

0x0f89,	// (0x000ae29a) list_medium_line_x2_t2_g4_t2_ParamLimits

0x0f89,	// (0x000ae29a) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2cb,	// (0x000bc5dc) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2cb,	// (0x000bc5dc) list_medium_line_x2_t2_g4_t

0x0f3c,	// (0x000ae24d) list_medium_line_x2_t2_g3_g1_ParamLimits

0x0f3c,	// (0x000ae24d) list_medium_line_x2_t2_g3_g1

0x0f48,	// (0x000ae259) list_medium_line_x2_t2_g3_g2_ParamLimits

0x0f48,	// (0x000ae259) list_medium_line_x2_t2_g3_g2

0x0f54,	// (0x000ae265) list_medium_line_x2_t2_g3_g3_ParamLimits

0x0f54,	// (0x000ae265) list_medium_line_x2_t2_g3_g3

0x0002,

0xf238,	// (0x000bc549) list_medium_line_x2_t2_g3_g_ParamLimits

0xf238,	// (0x000bc549) list_medium_line_x2_t2_g3_g

0x211b,	// (0x000af42c) list_medium_line_x2_t2_g3_t1_ParamLimits

0x211b,	// (0x000af42c) list_medium_line_x2_t2_g3_t1

0x0f89,	// (0x000ae29a) list_medium_line_x2_t2_g3_t2_ParamLimits

0x0f89,	// (0x000ae29a) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2d0,	// (0x000bc5e1) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2d0,	// (0x000bc5e1) list_medium_line_x2_t2_g3_t

0x2265,	// (0x000af576) main_sp_fs_list_pane_ParamLimits

0x2265,	// (0x000af576) main_sp_fs_list_pane

0x2271,	// (0x000af582) sp_fs_scroll_pane_ParamLimits

0x2271,	// (0x000af582) sp_fs_scroll_pane

0x227d,	// (0x000af58e) list_medium_line_x2_t3_t1

0x228d,	// (0x000af59e) list_medium_line_x2_t3_t2

0x229b,	// (0x000af5ac) list_medium_line_x2_t3_t3

0x0002,

0xf31b,	// (0x000bc62c) list_medium_line_x2_t3_t

0x22a9,	// (0x000af5ba) list_medium_line_x3_t4_t1

0x22b9,	// (0x000af5ca) list_medium_line_x3_t4_t2

0x22c7,	// (0x000af5d8) list_medium_line_x3_t4_t3

0x229b,	// (0x000af5ac) list_medium_line_x3_t4_t4

0x0003,

0xf322,	// (0x000bc633) list_medium_line_x3_t4_t

0x22d5,	// (0x000af5e6) list_medium_line_x4_t5_t1

0x22e5,	// (0x000af5f6) list_medium_line_x4_t5_t2

0x22c7,	// (0x000af5d8) list_medium_line_x4_t5_t3

0x22f3,	// (0x000af604) list_medium_line_x4_t5_t4

0x229b,	// (0x000af5ac) list_medium_line_x4_t5_t5

0x0004,

0xf32b,	// (0x000bc63c) list_medium_line_x4_t5_t

0x0f3c,	// (0x000ae24d) list_medium_line_t4_g4_g1_ParamLimits

0x0f3c,	// (0x000ae24d) list_medium_line_t4_g4_g1

0x0ff0,	// (0x000ae301) list_medium_line_t4_g4_g2_ParamLimits

0x0ff0,	// (0x000ae301) list_medium_line_t4_g4_g2

0x2301,	// (0x000af612) list_medium_line_t4_g4_g3_ParamLimits

0x2301,	// (0x000af612) list_medium_line_t4_g4_g3

0x0f54,	// (0x000ae265) list_medium_line_t4_g4_g4_ParamLimits

0x0f54,	// (0x000ae265) list_medium_line_t4_g4_g4

0x0003,

0xf336,	// (0x000bc647) list_medium_line_t4_g4_g_ParamLimits

0xf336,	// (0x000bc647) list_medium_line_t4_g4_g

0x230d,	// (0x000af61e) list_medium_line_t4_g4_t1_ParamLimits

0x230d,	// (0x000af61e) list_medium_line_t4_g4_t1

0x2322,	// (0x000af633) list_medium_line_t4_g4_t2_ParamLimits

0x2322,	// (0x000af633) list_medium_line_t4_g4_t2

0x2338,	// (0x000af649) list_medium_line_t4_g4_t3_ParamLimits

0x2338,	// (0x000af649) list_medium_line_t4_g4_t3

0x0f89,	// (0x000ae29a) list_medium_line_t4_g4_t4_ParamLimits

0x0f89,	// (0x000ae29a) list_medium_line_t4_g4_t4

0x0003,

0xf33f,	// (0x000bc650) list_medium_line_t4_g4_t_ParamLimits

0xf33f,	// (0x000bc650) list_medium_line_t4_g4_t

0x2414,	// (0x000af725) chi_dic_find_pane_g1

0x3631,	// (0x000b0942) main_tport_pane

0xa2b6,	// (0x000b75c7) list_medium_line_plain_t1

0xa300,	// (0x000b7611) list_medium_line_t2_g2_g1_ParamLimits

0xa300,	// (0x000b7611) list_medium_line_t2_g2_g1

0xbb07,	// (0x000b8e18) list_medium_line_t2_g2_g2_ParamLimits

0xbb07,	// (0x000b8e18) list_medium_line_t2_g2_g2

0x0001,

0xfa00,	// (0x000bcd11) list_medium_line_t2_g2_g_ParamLimits

0xfa00,	// (0x000bcd11) list_medium_line_t2_g2_g

0x66bd,	// (0x000b39ce) list_medium_line_t2_g2_t1_ParamLimits

0x66bd,	// (0x000b39ce) list_medium_line_t2_g2_t1

0x66d7,	// (0x000b39e8) list_medium_line_t2_g2_t2_ParamLimits

0x66d7,	// (0x000b39e8) list_medium_line_t2_g2_t2

0x0001,

0xfa05,	// (0x000bcd16) list_medium_line_t2_g2_t_ParamLimits

0xfa05,	// (0x000bcd16) list_medium_line_t2_g2_t

0xa42a,	// (0x000b773b) aid_sp_fs_list_icon_a_sm

0xbb13,	// (0x000b8e24) aid_sp_fs_list_icon_d

0xa432,	// (0x000b7743) aid_sp_fs_text_primary

0xa43b,	// (0x000b774c) aid_sp_fs_text_secondary

0x6d56,	// (0x000b4067) list_medium_line

0x6d56,	// (0x000b4067) list_medium_line_g2

0x6d56,	// (0x000b4067) list_medium_line_g3

0x6d56,	// (0x000b4067) list_medium_line_plain

0x6d56,	// (0x000b4067) list_medium_line_plain_t2

0x6d56,	// (0x000b4067) list_medium_line_plain_t3

0x6d56,	// (0x000b4067) list_medium_line_right_icon

0x6d56,	// (0x000b4067) list_medium_line_right_iconx2

0x6d56,	// (0x000b4067) list_medium_line_t2

0x6d56,	// (0x000b4067) list_medium_line_t2_g2

0x6d56,	// (0x000b4067) list_medium_line_t2_g3

0x6d56,	// (0x000b4067) list_medium_line_t2_right_icon

0x6d56,	// (0x000b4067) list_medium_line_t2_right_iconx2

0x6d56,	// (0x000b4067) list_medium_line_t3

0x6d56,	// (0x000b4067) list_medium_line_t3_g2

0x6d56,	// (0x000b4067) list_medium_line_t3_g3

0x6d56,	// (0x000b4067) list_medium_line_t3_right_iconx2

0x6d5f,	// (0x000b4070) list_medium_line_t4_g4

0x6d68,	// (0x000b4079) list_medium_line_x2

0x6d68,	// (0x000b4079) list_medium_line_x2_t2_g2

0x6d68,	// (0x000b4079) list_medium_line_x2_t2_g3

0x6d68,	// (0x000b4079) list_medium_line_x2_t2_g4

0x6d68,	// (0x000b4079) list_medium_line_x2_t3

0x6d68,	// (0x000b4079) list_medium_line_x2_t3_g2

0x6d68,	// (0x000b4079) list_medium_line_x2_t3_g3

0x6d68,	// (0x000b4079) list_medium_line_x2_t3_g4

0x6d68,	// (0x000b4079) list_medium_line_x2_t4_g2

0x6d68,	// (0x000b4079) list_medium_line_x2_t4_g4

0x6d71,	// (0x000b4082) list_medium_line_x3

0x6d71,	// (0x000b4082) list_medium_line_x3_t4

0x6d71,	// (0x000b4082) list_medium_line_x3_t4_g4

0x6d5f,	// (0x000b4070) list_medium_line_x4_t4

0x6d5f,	// (0x000b4070) list_medium_line_x4_t4_g7

0x6d5f,	// (0x000b4070) list_medium_line_x4_t5

0x6d7a,	// (0x000b408b) list_single_fs_dyc_pane_ParamLimits

0x6d7a,	// (0x000b408b) list_single_fs_dyc_pane

0x0f3c,	// (0x000ae24d) list_medium_line_x4_t4_g7_g1_ParamLimits

0x0f3c,	// (0x000ae24d) list_medium_line_x4_t4_g7_g1

0x74cb,	// (0x000b47dc) list_medium_line_x4_t4_g7_g2_ParamLimits

0x74cb,	// (0x000b47dc) list_medium_line_x4_t4_g7_g2

0x74d7,	// (0x000b47e8) list_medium_line_x4_t4_g7_g3_ParamLimits

0x74d7,	// (0x000b47e8) list_medium_line_x4_t4_g7_g3

0x74e6,	// (0x000b47f7) list_medium_line_x4_t4_g7_g4_ParamLimits

0x74e6,	// (0x000b47f7) list_medium_line_x4_t4_g7_g4

0x74f2,	// (0x000b4803) list_medium_line_x4_t4_g7_g5_ParamLimits

0x74f2,	// (0x000b4803) list_medium_line_x4_t4_g7_g5

0x7501,	// (0x000b4812) list_medium_line_x4_t4_g7_g6_ParamLimits

0x7501,	// (0x000b4812) list_medium_line_x4_t4_g7_g6

0x7510,	// (0x000b4821) list_medium_line_x4_t4_g7_g7_ParamLimits

0x7510,	// (0x000b4821) list_medium_line_x4_t4_g7_g7

0x0006,

0xfbd0,	// (0x000bcee1) list_medium_line_x4_t4_g7_g_ParamLimits

0xfbd0,	// (0x000bcee1) list_medium_line_x4_t4_g7_g

0x751c,	// (0x000b482d) list_medium_line_x4_t4_g7_t1_ParamLimits

0x751c,	// (0x000b482d) list_medium_line_x4_t4_g7_t1

0x7531,	// (0x000b4842) list_medium_line_x4_t4_g7_t2_ParamLimits

0x7531,	// (0x000b4842) list_medium_line_x4_t4_g7_t2

0x7546,	// (0x000b4857) list_medium_line_x4_t4_g7_t3_ParamLimits

0x7546,	// (0x000b4857) list_medium_line_x4_t4_g7_t3

0x755b,	// (0x000b486c) list_medium_line_x4_t4_g7_t4_ParamLimits

0x755b,	// (0x000b486c) list_medium_line_x4_t4_g7_t4

0x756d,	// (0x000b487e) list_medium_line_x4_t4_g7_t5_ParamLimits

0x756d,	// (0x000b487e) list_medium_line_x4_t4_g7_t5

0x0004,

0xfbdf,	// (0x000bcef0) list_medium_line_x4_t4_g7_t_ParamLimits

0xfbdf,	// (0x000bcef0) list_medium_line_x4_t4_g7_t

0x757f,	// (0x000b4890) list_single_dyc_row_pane_ParamLimits

0x757f,	// (0x000b4890) list_single_dyc_row_pane

0x7c80,	// (0x000b4f91) call5_gesture_pane_ParamLimits

0x7c80,	// (0x000b4f91) call5_gesture_pane

0x7cd6,	// (0x000b4fe7) call5_windows_pane_ParamLimits

0x7cd6,	// (0x000b4fe7) call5_windows_pane

0x7d84,	// (0x000b5095) call5_swipe_1_pane_cp_ParamLimits

0x7d84,	// (0x000b5095) call5_swipe_1_pane_cp

0x7d90,	// (0x000b50a1) call5_swipe_2_pane_cp_ParamLimits

0x7d90,	// (0x000b50a1) call5_swipe_2_pane_cp

0xaa30,	// (0x000b7d41) call5_image_pane_cp

0x7d9c,	// (0x000b50ad) popup_call5_audio_first_window_cp_ParamLimits

0x7d9c,	// (0x000b50ad) popup_call5_audio_first_window_cp

0xe653,	// (0x000bb964) call5_swipe_1_pane_g1_cp_ParamLimits

0xe653,	// (0x000bb964) call5_swipe_1_pane_g1_cp

0xe693,	// (0x000bb9a4) call5_swipe_1_pane_g2_cp

0xe66c,	// (0x000bb97d) call5_swipe_1_pane_t1_cp_ParamLimits

0xe66c,	// (0x000bb97d) call5_swipe_1_pane_t1_cp

0xe653,	// (0x000bb964) call5_swipe_2_pane_g1_cp_ParamLimits

0xe653,	// (0x000bb964) call5_swipe_2_pane_g1_cp

0xe69b,	// (0x000bb9ac) call5_swipe_2_pane_g2_cp

0xe6a3,	// (0x000bb9b4) call5_swipe_2_pane_t1_cp_ParamLimits

0xe6a3,	// (0x000bb9b4) call5_swipe_2_pane_t1_cp

0x9526,	// (0x000b6837) main_sp_fs_email_pane

0xe6b8,	// (0x000bb9c9) main_sp_fs_listscroll_pane_te

0xa452,	// (0x000b7763) popup_sp_fs_action_menu_pane_ParamLimits

0xa452,	// (0x000b7763) popup_sp_fs_action_menu_pane

0xcc66,	// (0x000b9f77) bg_sp_fs_ctrlbar_pane_g1

0xd21b,	// (0x000ba52c) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xd22d,	// (0x000ba53e) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xd224,	// (0x000ba535) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xcc66,	// (0x000b9f77) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfccd,	// (0x000bcfde) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xca45,	// (0x000b9d56) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xca45,	// (0x000b9d56) bg_sp_fs_ctrlbar_ddmenu_pane

0xe6c1,	// (0x000bb9d2) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xe6c1,	// (0x000bb9d2) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xe6cd,	// (0x000bb9de) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xe6cd,	// (0x000bb9de) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfcd6,	// (0x000bcfe7) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfcd6,	// (0x000bcfe7) main_sp_fs_ctrlbar_ddmenu_pane_g

0xe6d9,	// (0x000bb9ea) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xe6d9,	// (0x000bb9ea) main_sp_fs_ctrlbar_ddmenu_pane_t1

0xbb1b,	// (0x000b8e2c) list_medium_line_t2_right_icon_g1

0x7daa,	// (0x000b50bb) list_medium_line_t2_right_icon_t1

0x7dba,	// (0x000b50cb) list_medium_line_t2_right_icon_t2

0x0001,

0xfcdb,	// (0x000bcfec) list_medium_line_t2_right_icon_t

0xc815,	// (0x000b9b26) bg_sp_fs_ctrlbar_pane_ParamLimits

0xc815,	// (0x000b9b26) bg_sp_fs_ctrlbar_pane

0x7e19,	// (0x000b512a) main_sp_fs_ctrlbar_button_pane_cp01

0x7e23,	// (0x000b5134) main_sp_fs_ctrlbar_ddmenu_pane

0xe72b,	// (0x000bba3c) main_sp_fs_ctrlbar_pane_g1

0xe737,	// (0x000bba48) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfce0,	// (0x000bcff1) main_sp_fs_ctrlbar_pane_g

0xe743,	// (0x000bba54) main_sp_fs_ctrlbar_pane_t1

0x7e2d,	// (0x000b513e) main_sp_fs_ctrlbar_pane

0x7e51,	// (0x000b5162) main_sp_fs_listscroll_pane_te_cp01

0x7e71,	// (0x000b5182) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x7e71,	// (0x000b5182) popup_sp_fs_action_menu_pane_cp01

0x9526,	// (0x000b6837) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0x9526,	// (0x000b6837) bg_sp_fs_highlight_list_pane_cp01

0xa498,	// (0x000b77a9) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0xa498,	// (0x000b77a9) sp_fs_action_menu_list_gene_pane_g1

0xe773,	// (0x000bba84) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xe773,	// (0x000bba84) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfcea,	// (0x000bcffb) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfcea,	// (0x000bcffb) sp_fs_action_menu_list_gene_pane_g

0xa4a7,	// (0x000b77b8) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0xa4a7,	// (0x000b77b8) sp_fs_action_menu_list_gene_pane_t1

0xa4bf,	// (0x000b77d0) sp_fs_action_menu_list_gene_pane_ParamLimits

0xa4bf,	// (0x000b77d0) sp_fs_action_menu_list_gene_pane

0xe780,	// (0x000bba91) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xe780,	// (0x000bba91) popup_sp_fs_action_menu_bg_pane

0xa4e2,	// (0x000b77f3) sp_fs_action_menu_list_pane_ParamLimits

0xa4e2,	// (0x000b77f3) sp_fs_action_menu_list_pane

0xe78e,	// (0x000bba9f) sp_fs_scroll_pane_cp01_ParamLimits

0xe78e,	// (0x000bba9f) sp_fs_scroll_pane_cp01

0x7ea7,	// (0x000b51b8) list_medium_line_plain_t2_t1

0x7eb7,	// (0x000b51c8) list_medium_line_plain_t2_t2

0x0001,

0xfcef,	// (0x000bd000) list_medium_line_plain_t2_t

0x7ec7,	// (0x000b51d8) list_medium_line_plain_t3_t1

0x7ed7,	// (0x000b51e8) list_medium_line_plain_t3_t2

0x7ee5,	// (0x000b51f6) list_medium_line_plain_t3_t3

0x0002,

0xfcf4,	// (0x000bd005) list_medium_line_plain_t3_t

0x0f3c,	// (0x000ae24d) list_medium_line_x2_t2_g2_g1_ParamLimits

0x0f3c,	// (0x000ae24d) list_medium_line_x2_t2_g2_g1

0x0f54,	// (0x000ae265) list_medium_line_x2_t2_g2_g2_ParamLimits

0x0f54,	// (0x000ae265) list_medium_line_x2_t2_g2_g2

0x0001,

0xf246,	// (0x000bc557) list_medium_line_x2_t2_g2_g_ParamLimits

0xf246,	// (0x000bc557) list_medium_line_x2_t2_g2_g

0x230d,	// (0x000af61e) list_medium_line_x2_t2_g2_t1_ParamLimits

0x230d,	// (0x000af61e) list_medium_line_x2_t2_g2_t1

0x0f89,	// (0x000ae29a) list_medium_line_x2_t2_g2_t2_ParamLimits

0x0f89,	// (0x000ae29a) list_medium_line_x2_t2_g2_t2

0x0001,

0xfcfb,	// (0x000bd00c) list_medium_line_x2_t2_g2_t_ParamLimits

0xfcfb,	// (0x000bd00c) list_medium_line_x2_t2_g2_t

0x0f3c,	// (0x000ae24d) list_medium_line_x2_t4_g2_g1_ParamLimits

0x0f3c,	// (0x000ae24d) list_medium_line_x2_t4_g2_g1

0x7ef3,	// (0x000b5204) list_medium_line_x2_t4_g2_g2_ParamLimits

0x7ef3,	// (0x000b5204) list_medium_line_x2_t4_g2_g2

0x0001,

0xfd00,	// (0x000bd011) list_medium_line_x2_t4_g2_g_ParamLimits

0xfd00,	// (0x000bd011) list_medium_line_x2_t4_g2_g

0x7f05,	// (0x000b5216) list_medium_line_x2_t4_g2_t1_ParamLimits

0x7f05,	// (0x000b5216) list_medium_line_x2_t4_g2_t1

0x7f1f,	// (0x000b5230) list_medium_line_x2_t4_g2_t2_ParamLimits

0x7f1f,	// (0x000b5230) list_medium_line_x2_t4_g2_t2

0x7f35,	// (0x000b5246) list_medium_line_x2_t4_g2_t3_ParamLimits

0x7f35,	// (0x000b5246) list_medium_line_x2_t4_g2_t3

0x0f89,	// (0x000ae29a) list_medium_line_x2_t4_g2_t4_ParamLimits

0x0f89,	// (0x000ae29a) list_medium_line_x2_t4_g2_t4

0x0003,

0xfd05,	// (0x000bd016) list_medium_line_x2_t4_g2_t_ParamLimits

0xfd05,	// (0x000bd016) list_medium_line_x2_t4_g2_t

0xbb23,	// (0x000b8e34) list_medium_line_t3_right_iconx2_g1

0xbb1b,	// (0x000b8e2c) list_medium_line_t3_right_iconx2_g2

0x7f4a,	// (0x000b525b) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfd0e,	// (0x000bd01f) list_medium_line_t3_right_iconx2_g

0x7f54,	// (0x000b5265) list_medium_line_t3_right_iconx2_t1

0x7f64,	// (0x000b5275) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfd15,	// (0x000bd026) list_medium_line_t3_right_iconx2_t

0x0f3c,	// (0x000ae24d) list_medium_line_x3_t4_g4_g1_ParamLimits

0x0f3c,	// (0x000ae24d) list_medium_line_x3_t4_g4_g1

0x0f48,	// (0x000ae259) list_medium_line_x3_t4_g4_g2_ParamLimits

0x0f48,	// (0x000ae259) list_medium_line_x3_t4_g4_g2

0x0ff0,	// (0x000ae301) list_medium_line_x3_t4_g4_g3_ParamLimits

0x0ff0,	// (0x000ae301) list_medium_line_x3_t4_g4_g3

0x7f72,	// (0x000b5283) list_medium_line_x3_t4_g4_g4_ParamLimits

0x7f72,	// (0x000b5283) list_medium_line_x3_t4_g4_g4

0x0003,

0xfd1a,	// (0x000bd02b) list_medium_line_x3_t4_g4_g_ParamLimits

0xfd1a,	// (0x000bd02b) list_medium_line_x3_t4_g4_g

0x7f7e,	// (0x000b528f) list_medium_line_x3_t4_g4_t1_ParamLimits

0x7f7e,	// (0x000b528f) list_medium_line_x3_t4_g4_t1

0x7f95,	// (0x000b52a6) list_medium_line_x3_t4_g4_t2_ParamLimits

0x7f95,	// (0x000b52a6) list_medium_line_x3_t4_g4_t2

0x7fb0,	// (0x000b52c1) list_medium_line_x3_t4_g4_t3_ParamLimits

0x7fb0,	// (0x000b52c1) list_medium_line_x3_t4_g4_t3

0x7fc5,	// (0x000b52d6) list_medium_line_x3_t4_g4_t4_ParamLimits

0x7fc5,	// (0x000b52d6) list_medium_line_x3_t4_g4_t4

0x0003,

0xfd23,	// (0x000bd034) list_medium_line_x3_t4_g4_t_ParamLimits

0xfd23,	// (0x000bd034) list_medium_line_x3_t4_g4_t

0x7fe2,	// (0x000b52f3) list_single_dyc_row_text_pane_t1_ParamLimits

0x7fe2,	// (0x000b52f3) list_single_dyc_row_text_pane_t1

0x802b,	// (0x000b533c) list_single_dyc_row_text_pane_t2_ParamLimits

0x802b,	// (0x000b533c) list_single_dyc_row_text_pane_t2

0xa506,	// (0x000b7817) list_single_dyc_row_text_pane_t3_ParamLimits

0xa506,	// (0x000b7817) list_single_dyc_row_text_pane_t3

0x0005,

0xfd2c,	// (0x000bd03d) list_single_dyc_row_text_pane_t_ParamLimits

0xfd2c,	// (0x000bd03d) list_single_dyc_row_text_pane_t

0xa52a,	// (0x000b783b) list_single_dyc_row_pane_g1_ParamLimits

0xa52a,	// (0x000b783b) list_single_dyc_row_pane_g1

0xa536,	// (0x000b7847) list_single_dyc_row_pane_g2_ParamLimits

0xa536,	// (0x000b7847) list_single_dyc_row_pane_g2

0xa542,	// (0x000b7853) list_single_dyc_row_pane_g3_ParamLimits

0xa542,	// (0x000b7853) list_single_dyc_row_pane_g3

0xa54e,	// (0x000b785f) list_single_dyc_row_pane_g4_ParamLimits

0xa54e,	// (0x000b785f) list_single_dyc_row_pane_g4

0x0003,

0xfd39,	// (0x000bd04a) list_single_dyc_row_pane_g_ParamLimits

0xfd39,	// (0x000bd04a) list_single_dyc_row_pane_g

0xa55a,	// (0x000b786b) list_single_dyc_row_text_pane_ParamLimits

0xa55a,	// (0x000b786b) list_single_dyc_row_text_pane

0x94d5,	// (0x000b67e6) bg_sp_fs_scroll_pane

0xe7b4,	// (0x000bbac5) thumb_sp_fs_scroll_pane

0xa300,	// (0x000b7611) list_medium_line_g1_ParamLimits

0xa300,	// (0x000b7611) list_medium_line_g1

0xa579,	// (0x000b788a) list_medium_line_t1_ParamLimits

0xa579,	// (0x000b788a) list_medium_line_t1

0x0f3c,	// (0x000ae24d) list_medium_line_x2_g1_ParamLimits

0x0f3c,	// (0x000ae24d) list_medium_line_x2_g1

0x0f48,	// (0x000ae259) list_medium_line_x2_g2_ParamLimits

0x0f48,	// (0x000ae259) list_medium_line_x2_g2

0x0001,

0xfd42,	// (0x000bd053) list_medium_line_x2_g_ParamLimits

0xfd42,	// (0x000bd053) list_medium_line_x2_g

0xa58e,	// (0x000b789f) list_medium_line_x2_t1_ParamLimits

0xa58e,	// (0x000b789f) list_medium_line_x2_t1

0x0f3c,	// (0x000ae24d) list_medium_line_x3_g1_ParamLimits

0x0f3c,	// (0x000ae24d) list_medium_line_x3_g1

0x0f48,	// (0x000ae259) list_medium_line_x3_g2_ParamLimits

0x0f48,	// (0x000ae259) list_medium_line_x3_g2

0x0001,

0xfd42,	// (0x000bd053) list_medium_line_x3_g_ParamLimits

0xfd42,	// (0x000bd053) list_medium_line_x3_g

0xa58e,	// (0x000b789f) list_medium_line_x3_t1_ParamLimits

0xa58e,	// (0x000b789f) list_medium_line_x3_t1

0xe7bd,	// (0x000bbace) thumb_sp_fs_scroll_pane_g1

0xe7c6,	// (0x000bbad7) thumb_sp_fs_scroll_pane_g2

0xe7cf,	// (0x000bbae0) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfd47,	// (0x000bd058) thumb_sp_fs_scroll_pane_g

0xe7bd,	// (0x000bbace) bg_sp_fs_scroll_pane_g1

0xe7c6,	// (0x000bbad7) bg_sp_fs_scroll_pane_g2

0xe7cf,	// (0x000bbae0) bg_sp_fs_scroll_pane_g3

0x0002,

0xfd47,	// (0x000bd058) bg_sp_fs_scroll_pane_g

0x0f3c,	// (0x000ae24d) list_medium_line_x2_t3_g4_g1_ParamLimits

0x0f3c,	// (0x000ae24d) list_medium_line_x2_t3_g4_g1

0x0fe4,	// (0x000ae2f5) list_medium_line_x2_t3_g4_g2_ParamLimits

0x0fe4,	// (0x000ae2f5) list_medium_line_x2_t3_g4_g2

0x0f48,	// (0x000ae259) list_medium_line_x2_t3_g4_g3_ParamLimits

0x0f48,	// (0x000ae259) list_medium_line_x2_t3_g4_g3

0x0f54,	// (0x000ae265) list_medium_line_x2_t3_g4_g4_ParamLimits

0x0f54,	// (0x000ae265) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2c2,	// (0x000bc5d3) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2c2,	// (0x000bc5d3) list_medium_line_x2_t3_g4_g

0x8160,	// (0x000b5471) list_medium_line_x2_t3_g4_t1_ParamLimits

0x8160,	// (0x000b5471) list_medium_line_x2_t3_g4_t1

0x8176,	// (0x000b5487) list_medium_line_x2_t3_g4_t2_ParamLimits

0x8176,	// (0x000b5487) list_medium_line_x2_t3_g4_t2

0x0f89,	// (0x000ae29a) list_medium_line_x2_t3_g4_t3_ParamLimits

0x0f89,	// (0x000ae29a) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd4e,	// (0x000bd05f) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd4e,	// (0x000bd05f) list_medium_line_x2_t3_g4_t

0xa300,	// (0x000b7611) list_medium_line_g2_g1_ParamLimits

0xa300,	// (0x000b7611) list_medium_line_g2_g1

0xbb07,	// (0x000b8e18) list_medium_line_g2_g2_ParamLimits

0xbb07,	// (0x000b8e18) list_medium_line_g2_g2

0x0001,

0xfa00,	// (0x000bcd11) list_medium_line_g2_g_ParamLimits

0xfa00,	// (0x000bcd11) list_medium_line_g2_g

0xa5a4,	// (0x000b78b5) list_medium_line_g2_t1_ParamLimits

0xa5a4,	// (0x000b78b5) list_medium_line_g2_t1

0xa300,	// (0x000b7611) list_medium_line_t3_g2_g1_ParamLimits

0xa300,	// (0x000b7611) list_medium_line_t3_g2_g1

0xbb07,	// (0x000b8e18) list_medium_line_t3_g2_g2_ParamLimits

0xbb07,	// (0x000b8e18) list_medium_line_t3_g2_g2

0x0001,

0xfa00,	// (0x000bcd11) list_medium_line_t3_g2_g_ParamLimits

0xfa00,	// (0x000bcd11) list_medium_line_t3_g2_g

0x818f,	// (0x000b54a0) list_medium_line_t3_g2_t1_ParamLimits

0x818f,	// (0x000b54a0) list_medium_line_t3_g2_t1

0x81a6,	// (0x000b54b7) list_medium_line_t3_g2_t2_ParamLimits

0x81a6,	// (0x000b54b7) list_medium_line_t3_g2_t2

0x81bb,	// (0x000b54cc) list_medium_line_t3_g2_t3_ParamLimits

0x81bb,	// (0x000b54cc) list_medium_line_t3_g2_t3

0x0002,

0xfd55,	// (0x000bd066) list_medium_line_t3_g2_t_ParamLimits

0xfd55,	// (0x000bd066) list_medium_line_t3_g2_t

0xbb1b,	// (0x000b8e2c) list_medium_line_right_icon_g1

0xa5b9,	// (0x000b78ca) list_medium_line_right_icon_t1

0xa300,	// (0x000b7611) list_medium_line_t2_g1_ParamLimits

0xa300,	// (0x000b7611) list_medium_line_t2_g1

0x81d4,	// (0x000b54e5) list_medium_line_t2_t1_ParamLimits

0x81d4,	// (0x000b54e5) list_medium_line_t2_t1

0x81ee,	// (0x000b54ff) list_medium_line_t2_t2_ParamLimits

0x81ee,	// (0x000b54ff) list_medium_line_t2_t2

0x0001,

0xfd5c,	// (0x000bd06d) list_medium_line_t2_t_ParamLimits

0xfd5c,	// (0x000bd06d) list_medium_line_t2_t

0xa300,	// (0x000b7611) list_medium_line_t3_g1_ParamLimits

0xa300,	// (0x000b7611) list_medium_line_t3_g1

0x8207,	// (0x000b5518) list_medium_line_t3_t1_ParamLimits

0x8207,	// (0x000b5518) list_medium_line_t3_t1

0x8221,	// (0x000b5532) list_medium_line_t3_t2_ParamLimits

0x8221,	// (0x000b5532) list_medium_line_t3_t2

0x8237,	// (0x000b5548) list_medium_line_t3_t3_ParamLimits

0x8237,	// (0x000b5548) list_medium_line_t3_t3

0x0002,

0xfd61,	// (0x000bd072) list_medium_line_t3_t_ParamLimits

0xfd61,	// (0x000bd072) list_medium_line_t3_t

0xa300,	// (0x000b7611) list_medium_line_g3_g1_ParamLimits

0xa300,	// (0x000b7611) list_medium_line_g3_g1

0xbb2b,	// (0x000b8e3c) list_medium_line_g3_g2_ParamLimits

0xbb2b,	// (0x000b8e3c) list_medium_line_g3_g2

0xbb07,	// (0x000b8e18) list_medium_line_g3_g3_ParamLimits

0xbb07,	// (0x000b8e18) list_medium_line_g3_g3

0x0002,

0xfd68,	// (0x000bd079) list_medium_line_g3_g_ParamLimits

0xfd68,	// (0x000bd079) list_medium_line_g3_g

0xa5c7,	// (0x000b78d8) list_medium_line_g3_t1_ParamLimits

0xa5c7,	// (0x000b78d8) list_medium_line_g3_t1

0xa300,	// (0x000b7611) list_medium_line_t2_g3_g1_ParamLimits

0xa300,	// (0x000b7611) list_medium_line_t2_g3_g1

0xbb2b,	// (0x000b8e3c) list_medium_line_t2_g3_g2_ParamLimits

0xbb2b,	// (0x000b8e3c) list_medium_line_t2_g3_g2

0xbb07,	// (0x000b8e18) list_medium_line_t2_g3_g3_ParamLimits

0xbb07,	// (0x000b8e18) list_medium_line_t2_g3_g3

0x0002,

0xfd68,	// (0x000bd079) list_medium_line_t2_g3_g_ParamLimits

0xfd68,	// (0x000bd079) list_medium_line_t2_g3_g

0x824c,	// (0x000b555d) list_medium_line_t2_g3_t1_ParamLimits

0x824c,	// (0x000b555d) list_medium_line_t2_g3_t1

0x8266,	// (0x000b5577) list_medium_line_t2_g3_t2_ParamLimits

0x8266,	// (0x000b5577) list_medium_line_t2_g3_t2

0x0001,

0xfd6f,	// (0x000bd080) list_medium_line_t2_g3_t_ParamLimits

0xfd6f,	// (0x000bd080) list_medium_line_t2_g3_t

0xa300,	// (0x000b7611) list_medium_line_t3_g3_g1_ParamLimits

0xa300,	// (0x000b7611) list_medium_line_t3_g3_g1

0xbb2b,	// (0x000b8e3c) list_medium_line_t3_g3_g2_ParamLimits

0xbb2b,	// (0x000b8e3c) list_medium_line_t3_g3_g2

0xbb07,	// (0x000b8e18) list_medium_line_t3_g3_g3_ParamLimits

0xbb07,	// (0x000b8e18) list_medium_line_t3_g3_g3

0x0002,

0xfd68,	// (0x000bd079) list_medium_line_t3_g3_g_ParamLimits

0xfd68,	// (0x000bd079) list_medium_line_t3_g3_g

0x8280,	// (0x000b5591) list_medium_line_t3_g3_t1_ParamLimits

0x8280,	// (0x000b5591) list_medium_line_t3_g3_t1

0x8294,	// (0x000b55a5) list_medium_line_t3_g3_t2_ParamLimits

0x8294,	// (0x000b55a5) list_medium_line_t3_g3_t2

0x82a6,	// (0x000b55b7) list_medium_line_t3_g3_t3_ParamLimits

0x82a6,	// (0x000b55b7) list_medium_line_t3_g3_t3

0x0002,

0xfd74,	// (0x000bd085) list_medium_line_t3_g3_t_ParamLimits

0xfd74,	// (0x000bd085) list_medium_line_t3_g3_t

0xbb23,	// (0x000b8e34) list_medium_line_right_iconx2_g1

0xbb1b,	// (0x000b8e2c) list_medium_line_right_iconx2_g2

0x0001,

0xfd7b,	// (0x000bd08c) list_medium_line_right_iconx2_g

0xbb37,	// (0x000b8e48) list_medium_line_right_iconx2_t1

0xbb23,	// (0x000b8e34) list_medium_line_t2_right_iconx2_g1

0xbb1b,	// (0x000b8e2c) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfd7b,	// (0x000bd08c) list_medium_line_t2_right_iconx2_g

0x82ba,	// (0x000b55cb) list_medium_line_t2_right_iconx2_t1

0x82ca,	// (0x000b55db) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfd80,	// (0x000bd091) list_medium_line_t2_right_iconx2_t

0x82dc,	// (0x000b55ed) list_medium_line_x4_t4_t1

0x82ea,	// (0x000b55fb) list_medium_line_x4_t4_t2

0x82fa,	// (0x000b560b) list_medium_line_x4_t4_t3

0x830a,	// (0x000b561b) list_medium_line_x4_t4_t4

0x0003,

0xfd85,	// (0x000bd096) list_medium_line_x4_t4_t

0x835d,	// (0x000b566e) tport_appsw_pane_ParamLimits

0x835d,	// (0x000b566e) tport_appsw_pane

0x8375,	// (0x000b5686) tport_contact_pane_ParamLimits

0x8375,	// (0x000b5686) tport_contact_pane

0x838d,	// (0x000b569e) tport_listscroll_pane_ParamLimits

0x838d,	// (0x000b569e) tport_listscroll_pane

0x83a7,	// (0x000b56b8) cell_tport_appsw_pane_ParamLimits

0x83a7,	// (0x000b56b8) cell_tport_appsw_pane

0xd672,	// (0x000ba983) tport_appsw_pane_g1_ParamLimits

0xd672,	// (0x000ba983) tport_appsw_pane_g1

0xe7d8,	// (0x000bbae9) tport_contact_pane_g1

0xe7e1,	// (0x000bbaf2) tport_contact_pane_t1

0xe7ef,	// (0x000bbb00) tport_contact_pane_t2

0x0001,

0xfd8e,	// (0x000bd09f) tport_contact_pane_t

0xe7fd,	// (0x000bbb0e) list_tport_pane

0xe806,	// (0x000bbb17) scroll_pane_cp_030

0x83f9,	// (0x000b570a) cell_tport_appsw_pane_g1

0x8409,	// (0x000b571a) cell_tport_appsw_pane_t1

0x8417,	// (0x000b5728) grid_highlight_pane_cp019

0x841f,	// (0x000b5730) list_tport_double_graphic_pane_ParamLimits

0x841f,	// (0x000b5730) list_tport_double_graphic_pane

0x9526,	// (0x000b6837) list_highlight_pane_cp023_ParamLimits

0x9526,	// (0x000b6837) list_highlight_pane_cp023

0x842c,	// (0x000b573d) list_tport_double_graphic_pane_g1_ParamLimits

0x842c,	// (0x000b573d) list_tport_double_graphic_pane_g1

0x8439,	// (0x000b574a) list_tport_double_graphic_pane_t1_ParamLimits

0x8439,	// (0x000b574a) list_tport_double_graphic_pane_t1

0x844e,	// (0x000b575f) list_tport_double_graphic_pane_t2_ParamLimits

0x844e,	// (0x000b575f) list_tport_double_graphic_pane_t2

0x0001,

0xfd9a,	// (0x000bd0ab) list_tport_double_graphic_pane_t_ParamLimits

0xfd9a,	// (0x000bd0ab) list_tport_double_graphic_pane_t

0x94d5,	// (0x000b67e6) main_cale_note_pane

0x5e35,	// (0x000b3146) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x5e35,	// (0x000b3146) cell_vitu2_function_top_wide_pane_cp01

0x78e2,	// (0x000b4bf3) wait_bar_pane_cp05_ParamLimits

0x9526,	// (0x000b6837) listscroll_cmail_pane

0xe817,	// (0x000bbb28) list_cmail_pane

0x846a,	// (0x000b577b) list_cmail_body_pane

0xe82e,	// (0x000bbb3f) list_single_cmail_header_caption_pane

0x847d,	// (0x000b578e) list_single_cmail_header_detail_pane_ParamLimits

0x847d,	// (0x000b578e) list_single_cmail_header_detail_pane

0x84a8,	// (0x000b57b9) list_single_cmail_header_caption_pane_t1

0x84b8,	// (0x000b57c9) list_single_cmail_header_detail_pane_g1_ParamLimits

0x84b8,	// (0x000b57c9) list_single_cmail_header_detail_pane_g1

0xbb45,	// (0x000b8e56) list_single_cmail_header_detail_pane_g2_ParamLimits

0xbb45,	// (0x000b8e56) list_single_cmail_header_detail_pane_g2

0x0002,

0xfd9f,	// (0x000bd0b0) list_single_cmail_header_detail_pane_g_ParamLimits

0xfd9f,	// (0x000bd0b0) list_single_cmail_header_detail_pane_g

0xa5dc,	// (0x000b78ed) list_single_cmail_header_detail_pane_t1_ParamLimits

0xa5dc,	// (0x000b78ed) list_single_cmail_header_detail_pane_t1

0xa64e,	// (0x000b795f) list_single_cmail_header_editor_pane_bg_ParamLimits

0xa64e,	// (0x000b795f) list_single_cmail_header_editor_pane_bg

0xe2f4,	// (0x000bb605) list_cmail_body_pane_g1

0xe85f,	// (0x000bbb70) list_cmail_body_pane_t1

0xd692,	// (0x000ba9a3) list_single_cmail_header_editor_pane_bg_g1

0xac8d,	// (0x000b7f9e) list_single_cmail_header_editor_pane_bg_g1_copy1

0xd6a2,	// (0x000ba9b3) list_single_cmail_header_editor_pane_bg_g1_copy2

0xd69a,	// (0x000ba9ab) list_single_cmail_header_editor_pane_bg_g1_copy3

0xd8bc,	// (0x000babcd) list_single_cmail_header_editor_pane_bg_g1_copy4

0xd6c2,	// (0x000ba9d3) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xd6b2,	// (0x000ba9c3) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xd6ba,	// (0x000ba9cb) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xac6d,	// (0x000b7f7e) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0x84d0,	// (0x000b57e1) calenote_gesture_pane_ParamLimits

0x84d0,	// (0x000b57e1) calenote_gesture_pane

0x84f0,	// (0x000b5801) calenote_window_pane_ParamLimits

0x84f0,	// (0x000b5801) calenote_window_pane

0xe86d,	// (0x000bbb7e) popup_note_window_cp01

0x850c,	// (0x000b581d) calenote_swipe_1_pane_ParamLimits

0x850c,	// (0x000b581d) calenote_swipe_1_pane

0x7d90,	// (0x000b50a1) calenote_swipe_2_pane_ParamLimits

0x7d90,	// (0x000b50a1) calenote_swipe_2_pane

0xe653,	// (0x000bb964) calenote_swipe_1_pane_g1_ParamLimits

0xe653,	// (0x000bb964) calenote_swipe_1_pane_g1

0xe660,	// (0x000bb971) calenote_swipe_1_pane_g2_ParamLimits

0xe660,	// (0x000bb971) calenote_swipe_1_pane_g2

0x0001,

0xfcc3,	// (0x000bcfd4) calenote_swipe_1_pane_g_ParamLimits

0xfcc3,	// (0x000bcfd4) calenote_swipe_1_pane_g

0xe87f,	// (0x000bbb90) calenote_swipe_1_pane_t1_ParamLimits

0xe87f,	// (0x000bbb90) calenote_swipe_1_pane_t1

0xe653,	// (0x000bb964) calenote_swipe_2_pane_g1_ParamLimits

0xe653,	// (0x000bb964) calenote_swipe_2_pane_g1

0xe89e,	// (0x000bbbaf) calenote_swipe_2_pane_g2_ParamLimits

0xe89e,	// (0x000bbbaf) calenote_swipe_2_pane_g2

0x0001,

0xfdab,	// (0x000bd0bc) calenote_swipe_2_pane_g_ParamLimits

0xfdab,	// (0x000bd0bc) calenote_swipe_2_pane_g

0xe8aa,	// (0x000bbbbb) calenote_swipe_2_pane_t1_ParamLimits

0xe8aa,	// (0x000bbbbb) calenote_swipe_2_pane_t1

0x94d5,	// (0x000b67e6) main_mup_navstr_pane

0x4a84,	// (0x000b1d95) main_mup3_pane_t7_ParamLimits

0x4a84,	// (0x000b1d95) main_mup3_pane_t7

0x9f73,	// (0x000b7284) main_mp4_pane_g6_ParamLimits

0x9f73,	// (0x000b7284) main_mp4_pane_g6

0xa117,	// (0x000b7428) main_image3_pane_t4_ParamLimits

0xa117,	// (0x000b7428) main_image3_pane_t4

0x8521,	// (0x000b5832) popup_navstr_preview_pane_ParamLimits

0x8521,	// (0x000b5832) popup_navstr_preview_pane

0x8531,	// (0x000b5842) scroll_navstr_pane_ParamLimits

0x8531,	// (0x000b5842) scroll_navstr_pane

0x94d5,	// (0x000b67e6) bg_popup_preview_window_pane_cp04

0xe8d1,	// (0x000bbbe2) popup_navstr_preview_pane_t1

0x8545,	// (0x000b5856) scroll_navstr_pane_g1_ParamLimits

0x8545,	// (0x000b5856) scroll_navstr_pane_g1

0x8559,	// (0x000b586a) scroll_navstr_pane_t1_ParamLimits

0x8559,	// (0x000b586a) scroll_navstr_pane_t1

0xe876,	// (0x000bbb87) bg_button_pane_cp014

0xe876,	// (0x000bbb87) bg_button_pane_cp030

0x7c26,	// (0x000b4f37) list_double_fisheye_pane_g4_ParamLimits

0x7c26,	// (0x000b4f37) list_double_fisheye_pane_g4

0x7c32,	// (0x000b4f43) list_double_fisheye_pane_g5_ParamLimits

0x7c32,	// (0x000b4f43) list_double_fisheye_pane_g5

0xe81f,	// (0x000bbb30) sp_fs_scroll_pane_cp03

0xe72b,	// (0x000bba3c) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xe737,	// (0x000bba48) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfce0,	// (0x000bcff1) main_sp_fs_ctrlbar_pane_g_ParamLimits

0xe743,	// (0x000bba54) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0x8460,	// (0x000b5771) sp_fs_scroll_pane_cp02

0xa990,	// (0x000b7ca1) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0xa990,	// (0x000b7ca1) popup_sp_fs_calendar_preview_list_single_pane

0x94d5,	// (0x000b67e6) main_cam6_pano_pane

0x9526,	// (0x000b6837) main_mup3_pane_ParamLimits

0x94d5,	// (0x000b67e6) main_phacti_pane

0x77b5,	// (0x000b4ac6) bg_button_pane_cp11

0x77cf,	// (0x000b4ae0) main_mobtv_info_pane_g2_ParamLimits

0x77cf,	// (0x000b4ae0) main_mobtv_info_pane_g2

0x0001,

0xfc40,	// (0x000bcf51) main_mobtv_info_pane_g_ParamLimits

0xfc40,	// (0x000bcf51) main_mobtv_info_pane_g

0x79aa,	// (0x000b4cbb) sc_clock_pane_t5_ParamLimits

0x79aa,	// (0x000b4cbb) sc_clock_pane_t5

0x7a88,	// (0x000b4d99) main_radioblah_pane_g1_ParamLimits

0xe59f,	// (0x000bb8b0) main_radioblah_pane_t3_ParamLimits

0xe59f,	// (0x000bb8b0) main_radioblah_pane_t3

0xe5b7,	// (0x000bb8c8) main_radioblah_pane_t4_ParamLimits

0xe5b7,	// (0x000bb8c8) main_radioblah_pane_t4

0x7ab0,	// (0x000b4dc1) main_radioblah_text_pane_ParamLimits

0x7ab0,	// (0x000b4dc1) main_radioblah_text_pane

0x7ac2,	// (0x000b4dd3) main_radioblah_info_pane_g1_ParamLimits

0x7b5b,	// (0x000b4e6c) main_radioblah_info_pane_t4_ParamLimits

0x7b5b,	// (0x000b4e6c) main_radioblah_info_pane_t4

0x9526,	// (0x000b6837) main_sp_fs_calendar_pane

0x8570,	// (0x000b5881) main_phacti_pane_g1

0x8578,	// (0x000b5889) phacti_note_pane_ParamLimits

0x8578,	// (0x000b5889) phacti_note_pane

0xe8e8,	// (0x000bbbf9) phacti_term_pane_ParamLimits

0xe8e8,	// (0x000bbbf9) phacti_term_pane

0xe8fd,	// (0x000bbc0e) phacti_note_pane_t1_ParamLimits

0xe8fd,	// (0x000bbc0e) phacti_note_pane_t1

0xa665,	// (0x000b7976) phacti_term_pane_g1

0xa66d,	// (0x000b797e) phacti_term_pane_t1_ParamLimits

0xa66d,	// (0x000b797e) phacti_term_pane_t1

0xe914,	// (0x000bbc25) popup_sp_fs_calendar_preview_list_single_pane_g1

0xe91c,	// (0x000bbc2d) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfdb5,	// (0x000bd0c6) popup_sp_fs_calendar_preview_list_single_pane_g

0xe924,	// (0x000bbc35) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xe924,	// (0x000bbc35) popup_sp_fs_calendar_preview_list_single_pane_t1

0xe93a,	// (0x000bbc4b) aid_popup_sp_fs_bg_corner_pane

0xcc66,	// (0x000b9f77) popup_sp_fs_calendar_preview_bg_pane_g1

0x94d5,	// (0x000b67e6) popup_sp_fs_calendar_preview_bg_pane

0xe942,	// (0x000bbc53) popup_sp_fs_calendar_preview_list_pane

0xc815,	// (0x000b9b26) bg_main_sp_fs_cale_pane_ParamLimits

0xc815,	// (0x000b9b26) bg_main_sp_fs_cale_pane

0xa6a0,	// (0x000b79b1) listscroll_cale_mrui_pane_ParamLimits

0xa6a0,	// (0x000b79b1) listscroll_cale_mrui_pane

0xa6b5,	// (0x000b79c6) listscroll_sp_fs_schedule_track_pane

0xa6be,	// (0x000b79cf) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0xa6be,	// (0x000b79cf) main_sp_fs_ctrlbar_pane_cp01

0xe94a,	// (0x000bbc5b) main_sp_fs_ribbon_pane

0xa6d1,	// (0x000b79e2) popup_sp_fs_cale_preview_window

0x85e9,	// (0x000b58fa) list_single_sp_fs_schedule_track_pane_ParamLimits

0x85e9,	// (0x000b58fa) list_single_sp_fs_schedule_track_pane

0x9526,	// (0x000b6837) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0x9526,	// (0x000b6837) bg_sp_fs_highlight_list_pane_cp03

0x85fd,	// (0x000b590e) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0x85fd,	// (0x000b590e) list_single_sp_fs_schedule_track_pane_g1

0x8609,	// (0x000b591a) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0x8609,	// (0x000b591a) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfdba,	// (0x000bd0cb) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfdba,	// (0x000bd0cb) list_single_sp_fs_schedule_track_pane_g

0x8615,	// (0x000b5926) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0x8615,	// (0x000b5926) list_single_sp_fs_schedule_track_pane_t1

0x8637,	// (0x000b5948) sp_fs_schedule_track_pane_ParamLimits

0x8637,	// (0x000b5948) sp_fs_schedule_track_pane

0xe952,	// (0x000bbc63) sp_fs_schedule_track_pane_g1

0xe95a,	// (0x000bbc6b) sp_fs_schedule_track_pane_g2

0xe962,	// (0x000bbc73) sp_fs_schedule_track_pane_g3

0xe96a,	// (0x000bbc7b) sp_fs_schedule_track_pane_g4

0xe972,	// (0x000bbc83) sp_fs_schedule_track_pane_g5

0x0004,

0xfdbf,	// (0x000bd0d0) sp_fs_schedule_track_pane_g

0xd692,	// (0x000ba9a3) bg_sp_fs_schedule_viewer_highlight_g1

0xac8d,	// (0x000b7f9e) bg_sp_fs_schedule_viewer_highlight_g2

0xd69a,	// (0x000ba9ab) bg_sp_fs_schedule_viewer_highlight_g3

0xd6a2,	// (0x000ba9b3) bg_sp_fs_schedule_viewer_highlight_g4

0xd8bc,	// (0x000babcd) bg_sp_fs_schedule_viewer_highlight_g5

0xd6b2,	// (0x000ba9c3) bg_sp_fs_schedule_viewer_highlight_g6

0xd6ba,	// (0x000ba9cb) bg_sp_fs_schedule_viewer_highlight_g7

0xd6c2,	// (0x000ba9d3) bg_sp_fs_schedule_viewer_highlight_g8

0xac6d,	// (0x000b7f7e) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfdca,	// (0x000bd0db) bg_sp_fs_schedule_viewer_highlight_g

0x94d5,	// (0x000b67e6) bg_main_sp_fs_ribbon_pane

0x864c,	// (0x000b595d) main_sp_fs_ribbon_pane_g1

0xe97a,	// (0x000bbc8b) main_sp_fs_ribbon_pane_t1

0x8655,	// (0x000b5966) main_sp_fs_ribbon_pane_t2

0xe989,	// (0x000bbc9a) main_sp_fs_ribbon_pane_t3

0x0002,

0xfddd,	// (0x000bd0ee) main_sp_fs_ribbon_pane_t

0xe998,	// (0x000bbca9) main_sp_fs_ribbon_scheduler_pane

0xe9a0,	// (0x000bbcb1) bg_main_sp_fs_ribbon_pane_g1

0xe9a9,	// (0x000bbcba) bg_main_sp_fs_ribbon_pane_g2

0xe9b2,	// (0x000bbcc3) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfde4,	// (0x000bd0f5) bg_main_sp_fs_ribbon_pane_g

0xe9ba,	// (0x000bbccb) main_sp_fs_ribbon_scheduler_pane_g1

0xe9c3,	// (0x000bbcd4) main_sp_fs_ribbon_scheduler_pane_g2

0xe9cc,	// (0x000bbcdd) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfdeb,	// (0x000bd0fc) main_sp_fs_ribbon_scheduler_pane_g

0xe9d5,	// (0x000bbce6) list_cale_mrui_pane

0x8664,	// (0x000b5975) sp_fs_scroll_pane_cp07_ParamLimits

0x8664,	// (0x000b5975) sp_fs_scroll_pane_cp07

0x8680,	// (0x000b5991) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0x8680,	// (0x000b5991) bg_sp_fs_schedule_viewer_highlight

0xe9e2,	// (0x000bbcf3) list_single_sp_fs_schedule_track_pane_cp01

0xe9ea,	// (0x000bbcfb) list_sp_fs_schedule_track_pane

0xe9f2,	// (0x000bbd03) sp_fs_scroll_pane_cp06_ParamLimits

0xe9f2,	// (0x000bbd03) sp_fs_scroll_pane_cp06

0xcc66,	// (0x000b9f77) bgmain_sp_fs_calendar_pane_g1

0x8692,	// (0x000b59a3) list_single_cale_mrui_pane_ParamLimits

0x8692,	// (0x000b59a3) list_single_cale_mrui_pane

0xa6e3,	// (0x000b79f4) list_single_cale_mrui_row_pane_ParamLimits

0xa6e3,	// (0x000b79f4) list_single_cale_mrui_row_pane

0xa6f9,	// (0x000b7a0a) list_single_cale_mrui_row_pane_g1_ParamLimits

0xa6f9,	// (0x000b7a0a) list_single_cale_mrui_row_pane_g1

0xa725,	// (0x000b7a36) list_single_cale_mrui_row_pane_t1_ParamLimits

0xa725,	// (0x000b7a36) list_single_cale_mrui_row_pane_t1

0x86a7,	// (0x000b59b8) list_single_cale_mrui_row_pane_t2_ParamLimits

0x86a7,	// (0x000b59b8) list_single_cale_mrui_row_pane_t2

0xa737,	// (0x000b7a48) list_single_cale_mrui_row_pane_t3_ParamLimits

0xa737,	// (0x000b7a48) list_single_cale_mrui_row_pane_t3

0xa766,	// (0x000b7a77) list_single_cale_mrui_row_pane_t4_ParamLimits

0xa766,	// (0x000b7a77) list_single_cale_mrui_row_pane_t4

0x0003,

0xfdf9,	// (0x000bd10a) list_single_cale_mrui_row_pane_t_ParamLimits

0xfdf9,	// (0x000bd10a) list_single_cale_mrui_row_pane_t

0x870f,	// (0x000b5a20) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x870f,	// (0x000b5a20) list_single_cmail_header_editor_pane_bg_cp01

0x8733,	// (0x000b5a44) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x8733,	// (0x000b5a44) list_single_cmail_header_editor_pane_bg_cp02

0x8751,	// (0x000b5a62) main_radioblah_text_pane_t1_ParamLimits

0x8751,	// (0x000b5a62) main_radioblah_text_pane_t1

0xea11,	// (0x000bbd22) cam6_indi_pane_cp01

0xea19,	// (0x000bbd2a) cam6_mode_pane_cp01

0xea21,	// (0x000bbd32) cam6_pano_pane

0xea2a,	// (0x000bbd3b) cam6_zoom_pane_cp01

0xea34,	// (0x000bbd45) cam6_pano_image_pane

0xea3d,	// (0x000bbd4e) cam6_pano_pane_g1

0xe2f4,	// (0x000bb605) cam6_pano_pane_g2

0xea46,	// (0x000bbd57) cam6_pano_pane_g3

0xea4f,	// (0x000bbd60) cam6_pano_pane_g4

0xd208,	// (0x000ba519) cam6_pano_pane_g5

0xea58,	// (0x000bbd69) cam6_pano_pane_g6

0xea60,	// (0x000bbd71) cam6_pano_pane_g7

0xea68,	// (0x000bbd79) cam6_pano_pane_g8

0xea71,	// (0x000bbd82) cam6_pano_pane_g9

0x0008,

0xfe02,	// (0x000bd113) cam6_pano_pane_g

0x94d5,	// (0x000b67e6) main_browser_tag_pane

0xe8c9,	// (0x000bbbda) grid_navstr_albumart_pane

0xea7c,	// (0x000bbd8d) cell_navstr_albumart_pane_ParamLimits

0xea7c,	// (0x000bbd8d) cell_navstr_albumart_pane

0xea9b,	// (0x000bbdac) cell_navstr_albumart_pane_g1

0xc622,	// (0x000b9933) cell_navstr_albumart_pane_g2

0xc632,	// (0x000b9943) cell_navstr_albumart_pane_g3

0xc62a,	// (0x000b993b) cell_navstr_albumart_pane_g4

0x0003,

0xfe15,	// (0x000bd126) cell_navstr_albumart_pane_g

0x876c,	// (0x000b5a7d) bt_list_pane_ParamLimits

0x876c,	// (0x000b5a7d) bt_list_pane

0x8782,	// (0x000b5a93) bt_list_pane_t1

0x8791,	// (0x000b5aa2) bt_list_pane_t2

0x0001,

0xfe1e,	// (0x000bd12f) bt_list_pane_t

0x94d5,	// (0x000b67e6) main_cale_prevew_pane

0x87a0,	// (0x000b5ab1) popup_cale_preview_window_ParamLimits

0x87a0,	// (0x000b5ab1) popup_cale_preview_window

0x9526,	// (0x000b6837) bg_popup_preview_window_pane_cp05_ParamLimits

0x9526,	// (0x000b6837) bg_popup_preview_window_pane_cp05

0xeaa3,	// (0x000bbdb4) list_cale_preview_pane_ParamLimits

0xeaa3,	// (0x000bbdb4) list_cale_preview_pane

0x87bd,	// (0x000b5ace) list_double_cale_preview_pane_ParamLimits

0x87bd,	// (0x000b5ace) list_double_cale_preview_pane

0x87d1,	// (0x000b5ae2) list_single_cale_preview_pane_ParamLimits

0x87d1,	// (0x000b5ae2) list_single_cale_preview_pane

0x87e9,	// (0x000b5afa) list_single_cale_preview_pane_g1

0x87f1,	// (0x000b5b02) list_single_cale_preview_pane_t1_ParamLimits

0x87f1,	// (0x000b5b02) list_single_cale_preview_pane_t1

0x8806,	// (0x000b5b17) list_double_cale_preview_pane_g1

0x880e,	// (0x000b5b1f) list_double_cale_preview_pane_t1_ParamLimits

0x880e,	// (0x000b5b1f) list_double_cale_preview_pane_t1

0x8823,	// (0x000b5b34) list_double_cale_preview_pane_t2_ParamLimits

0x8823,	// (0x000b5b34) list_double_cale_preview_pane_t2

0x0001,

0xfe23,	// (0x000bd134) list_double_cale_preview_pane_t_ParamLimits

0xfe23,	// (0x000bd134) list_double_cale_preview_pane_t

0x94d5,	// (0x000b67e6) main_ezdial_pane

0x9526,	// (0x000b6837) main_sp_fs_email_pane_ParamLimits

0x7dcc,	// (0x000b50dd) cmail_ddmenu_btn01_pane_ParamLimits

0x7dcc,	// (0x000b50dd) cmail_ddmenu_btn01_pane

0x7ddf,	// (0x000b50f0) cmail_ddmenu_btn02_pane_ParamLimits

0x7ddf,	// (0x000b50f0) cmail_ddmenu_btn02_pane

0x7e02,	// (0x000b5113) cmail_ddmenu_btn03_pane_ParamLimits

0x7e02,	// (0x000b5113) cmail_ddmenu_btn03_pane

0x7e2d,	// (0x000b513e) main_sp_fs_ctrlbar_pane_ParamLimits

0x7e51,	// (0x000b5162) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0x846a,	// (0x000b577b) list_cmail_body_pane_ParamLimits

0xe849,	// (0x000bbb5a) bg_button_pane_cp12

0xe852,	// (0x000bbb63) list_single_cmail_header_detail_pane_g3_ParamLimits

0xe852,	// (0x000bbb63) list_single_cmail_header_detail_pane_g3

0xa62a,	// (0x000b793b) list_single_cmail_header_detail_pane_t2_ParamLimits

0xa62a,	// (0x000b793b) list_single_cmail_header_detail_pane_t2

0x0001,

0xfda6,	// (0x000bd0b7) list_single_cmail_header_detail_pane_t_ParamLimits

0xfda6,	// (0x000bd0b7) list_single_cmail_header_detail_pane_t

0xa682,	// (0x000b7993) phacti_term_pane_t2_ParamLimits

0xa682,	// (0x000b7993) phacti_term_pane_t2

0x0001,

0xfdb0,	// (0x000bd0c1) phacti_term_pane_t_ParamLimits

0xfdb0,	// (0x000bd0c1) phacti_term_pane_t

0xeaaf,	// (0x000bbdc0) aid_size_list_single_double

0x883b,	// (0x000b5b4c) popup_ezdial_listscroll_window

0x8857,	// (0x000b5b68) popup_number_entry_window_cp01

0xaa30,	// (0x000b7d41) bg_popup_call_pane_cp09

0xeabb,	// (0x000bbdcc) ezdial_list_pane

0xeac3,	// (0x000bbdd4) scroll_pane_cp23

0xc815,	// (0x000b9b26) bg_button_pane_cp028_ParamLimits

0xc815,	// (0x000b9b26) bg_button_pane_cp028

0x8865,	// (0x000b5b76) cmail_ddmenu_btn01_pane_g1_ParamLimits

0x8865,	// (0x000b5b76) cmail_ddmenu_btn01_pane_g1

0x8874,	// (0x000b5b85) cmail_ddmenu_btn01_pane_g2_ParamLimits

0x8874,	// (0x000b5b85) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfe28,	// (0x000bd139) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfe28,	// (0x000bd139) cmail_ddmenu_btn01_pane_g

0xeacb,	// (0x000bbddc) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xeacb,	// (0x000bbddc) cmail_ddmenu_btn01_pane_t1

0xc815,	// (0x000b9b26) bg_button_pane_cp029_ParamLimits

0xc815,	// (0x000b9b26) bg_button_pane_cp029

0x888a,	// (0x000b5b9b) cmail_ddmenu_btn02_pane_g1_ParamLimits

0x888a,	// (0x000b5b9b) cmail_ddmenu_btn02_pane_g1

0x88a5,	// (0x000b5bb6) cmail_ddmenu_btn02_pane_t1_ParamLimits

0x88a5,	// (0x000b5bb6) cmail_ddmenu_btn02_pane_t1

0x9526,	// (0x000b6837) bg_button_pane_cp031_ParamLimits

0x9526,	// (0x000b6837) bg_button_pane_cp031

0x888a,	// (0x000b5b9b) cmail_ddmenu_btn03_pane_g1_ParamLimits

0x888a,	// (0x000b5b9b) cmail_ddmenu_btn03_pane_g1

0x88a5,	// (0x000b5bb6) cmail_ddmenu_btn03_pane_t1_ParamLimits

0x88a5,	// (0x000b5bb6) cmail_ddmenu_btn03_pane_t1

0x5664,	// (0x000b2975) cell_dialer2_keypad_pane_t1_ParamLimits

0x567e,	// (0x000b298f) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x567e,	// (0x000b298f) cell_dialer2_keypad_pane_t1_copy1

0x760c,	// (0x000b491d) ncimui_group_button_pane

0x9526,	// (0x000b6837) main_sp_fs_calendar_pane_ParamLimits

0xe82e,	// (0x000bbb3f) list_single_cmail_header_caption_pane_ParamLimits

0xa697,	// (0x000b79a8) aid_recal_txt_sm_pane

0x94d5,	// (0x000b67e6) mian_recal_day_pane

0xa6d1,	// (0x000b79e2) popup_sp_fs_cale_preview_window_ParamLimits

0xeae1,	// (0x000bbdf2) list_recal_day_pane

0xa7b1,	// (0x000b7ac2) list_single_recal_day_pane_ParamLimits

0xa7b1,	// (0x000b7ac2) list_single_recal_day_pane

0xeb08,	// (0x000bbe19) list_single_recal_day_pane_g1_ParamLimits

0xeb08,	// (0x000bbe19) list_single_recal_day_pane_g1

0xa7c3,	// (0x000b7ad4) list_single_recal_day_pane_g2_ParamLimits

0xa7c3,	// (0x000b7ad4) list_single_recal_day_pane_g2

0xa7cf,	// (0x000b7ae0) list_single_recal_day_pane_g3_ParamLimits

0xa7cf,	// (0x000b7ae0) list_single_recal_day_pane_g3

0x88cc,	// (0x000b5bdd) list_single_recal_day_pane_g4_ParamLimits

0x88cc,	// (0x000b5bdd) list_single_recal_day_pane_g4

0xa7db,	// (0x000b7aec) list_single_recal_day_pane_g5_ParamLimits

0xa7db,	// (0x000b7aec) list_single_recal_day_pane_g5

0xa7e7,	// (0x000b7af8) list_single_recal_day_pane_g6_ParamLimits

0xa7e7,	// (0x000b7af8) list_single_recal_day_pane_g6

0x0004,

0xfe37,	// (0x000bd148) list_single_recal_day_pane_g_ParamLimits

0xfe37,	// (0x000bd148) list_single_recal_day_pane_g

0xa7fb,	// (0x000b7b0c) list_single_recal_day_pane_t1

0xa80d,	// (0x000b7b1e) list_single_recal_day_pane_t2

0x0001,

0xfe42,	// (0x000bd153) list_single_recal_day_pane_t

0x88e4,	// (0x000b5bf5) ncimui_query_button_pane_ParamLimits

0x88e4,	// (0x000b5bf5) ncimui_query_button_pane

0x88f4,	// (0x000b5c05) ncimui_query_button_pane_t1_ParamLimits

0x88f4,	// (0x000b5c05) ncimui_query_button_pane_t1

0xeb14,	// (0x000bbe25) ncimui_query_button_pane_t2_ParamLimits

0xeb14,	// (0x000bbe25) ncimui_query_button_pane_t2

0x0001,

0xfe47,	// (0x000bd158) ncimui_query_button_pane_t_ParamLimits

0xfe47,	// (0x000bd158) ncimui_query_button_pane_t

0x8907,	// (0x000b5c18) query_button_pane_ParamLimits

0x8907,	// (0x000b5c18) query_button_pane

0x94d5,	// (0x000b67e6) bg_button_pane_cp0028

0xeb27,	// (0x000bbe38) query_button_pane_t1

0x3631,	// (0x000b0942) main_tport_pane_ParamLimits

0x831a,	// (0x000b562b) bg_popup_window_pane_cp01_ParamLimits

0x831a,	// (0x000b562b) bg_popup_window_pane_cp01

0x8335,	// (0x000b5646) heading_pane_cp08_ParamLimits

0x8335,	// (0x000b5646) heading_pane_cp08

0x8348,	// (0x000b5659) heading_pane_cp07_ParamLimits

0x8348,	// (0x000b5659) heading_pane_cp07

0x83f9,	// (0x000b570a) cell_tport_appsw_pane_g2

0x0002,

0xfd93,	// (0x000bd0a4) cell_tport_appsw_pane_g

0x9d78,	// (0x000b7089) input_candi_list_open_g1

0xae41,	// (0x000b8152) list_cale_time_pane_g6_ParamLimits

0xae41,	// (0x000b8152) list_cale_time_pane_g6

0x443b,	// (0x000b174c) aid_size_touch_calib_1_ParamLimits

0x443b,	// (0x000b174c) aid_size_touch_calib_1

0x444d,	// (0x000b175e) aid_size_touch_calib_2_ParamLimits

0x444d,	// (0x000b175e) aid_size_touch_calib_2

0x4465,	// (0x000b1776) aid_size_touch_calib_3_ParamLimits

0x4465,	// (0x000b1776) aid_size_touch_calib_3

0x4483,	// (0x000b1794) aid_size_touch_calib_4_ParamLimits

0x4483,	// (0x000b1794) aid_size_touch_calib_4

0x449b,	// (0x000b17ac) main_touch_calib_button_group_pane_ParamLimits

0x449b,	// (0x000b17ac) main_touch_calib_button_group_pane

0x44b3,	// (0x000b17c4) main_touch_calib_pane_g1_ParamLimits

0x44c5,	// (0x000b17d6) main_touch_calib_pane_g2_ParamLimits

0x44d7,	// (0x000b17e8) main_touch_calib_pane_g3_ParamLimits

0x44e9,	// (0x000b17fa) main_touch_calib_pane_g4_ParamLimits

0xf751,	// (0x000bca62) main_touch_calib_pane_g_ParamLimits

0x44fb,	// (0x000b180c) main_touch_calib_pane_t1_ParamLimits

0x4515,	// (0x000b1826) main_touch_calib_pane_t2_ParamLimits

0x452f,	// (0x000b1840) main_touch_calib_pane_t3_ParamLimits

0x4543,	// (0x000b1854) main_touch_calib_pane_t4_ParamLimits

0x4559,	// (0x000b186a) main_touch_calib_pane_t5_ParamLimits

0xf75a,	// (0x000bca6b) main_touch_calib_pane_t_ParamLimits

0xcf9e,	// (0x000ba2af) list_single_fp_cale_pane_g3_ParamLimits

0xcf9e,	// (0x000ba2af) list_single_fp_cale_pane_g3

0xa1c2,	// (0x000b74d3) bg_button_pane_cp012_ParamLimits

0xa1c2,	// (0x000b74d3) bg_vkb2_func_pane_cp03_ParamLimits

0x6673,	// (0x000b3984) cell_vitu2_function_top_pane_g1_ParamLimits

0xa1c2,	// (0x000b74d3) bg_vkb2_func_pane_cp04_ParamLimits

0x759a,	// (0x000b48ab) main_ncimui_button_group_pane_ParamLimits

0x759a,	// (0x000b48ab) main_ncimui_button_group_pane

0x75fa,	// (0x000b490b) main_ncimui_pane_t3_ParamLimits

0x75fa,	// (0x000b490b) main_ncimui_pane_t3

0xe8df,	// (0x000bbbf0) phacti_button_group_pane

0xeaaf,	// (0x000bbdc0) aid_size_list_single_double_ParamLimits

0x883b,	// (0x000b5b4c) popup_ezdial_listscroll_window_ParamLimits

0x8857,	// (0x000b5b68) popup_number_entry_window_cp01_ParamLimits

0x891a,	// (0x000b5c2b) phacti_button_pane_ParamLimits

0x891a,	// (0x000b5c2b) phacti_button_pane

0x94d5,	// (0x000b67e6) bg_button_pane_cp14

0xeb35,	// (0x000bbe46) phacti_button_pane_t1

0x892b,	// (0x000b5c3c) main_touch_calib_button_pane_ParamLimits

0x892b,	// (0x000b5c3c) main_touch_calib_button_pane

0xa87a,	// (0x000b7b8b) bg_button_pane_cp18_ParamLimits

0xa87a,	// (0x000b7b8b) bg_button_pane_cp18

0xeb43,	// (0x000bbe54) main_touch_calib_button_pane_t1_ParamLimits

0xeb43,	// (0x000bbe54) main_touch_calib_button_pane_t1

0xeb59,	// (0x000bbe6a) main_touch_calib_button_pane_t2_ParamLimits

0xeb59,	// (0x000bbe6a) main_touch_calib_button_pane_t2

0x0001,

0xfe4c,	// (0x000bd15d) main_touch_calib_button_pane_t_ParamLimits

0xfe4c,	// (0x000bd15d) main_touch_calib_button_pane_t

0x94d5,	// (0x000b67e6) cell_ncimui_button_pane

0x94d5,	// (0x000b67e6) bg_button_pane_cp032

0xeb77,	// (0x000bbe88) cell_ncimui_button_pane_t1

0xa0f5,	// (0x000b7406) image3_infobar_pane_ParamLimits

0xa0f5,	// (0x000b7406) image3_infobar_pane

0x79d6,	// (0x000b4ce7) fs_bigclock_status_pane_ParamLimits

0x79d6,	// (0x000b4ce7) fs_bigclock_status_pane

0x79e3,	// (0x000b4cf4) main_fs_bigclock_clock_pane_ParamLimits

0x79e3,	// (0x000b4cf4) main_fs_bigclock_clock_pane

0x7a0d,	// (0x000b4d1e) main_fs_bigclock_indi_pane_ParamLimits

0x7a0d,	// (0x000b4d1e) main_fs_bigclock_indi_pane

0x7a4b,	// (0x000b4d5c) main_fs_bigclock_swipe_pane_ParamLimits

0x7a4b,	// (0x000b4d5c) main_fs_bigclock_swipe_pane

0x94d5,	// (0x000b67e6) main_fs_clock_dumped_data

0xe401,	// (0x000bb712) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xe401,	// (0x000bb712) list_single_fs_bigclock_indicator_pane_g1

0xe42b,	// (0x000bb73c) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xe42b,	// (0x000bb73c) list_single_fs_bigclock_indicator_pane_g2

0xe445,	// (0x000bb756) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xe445,	// (0x000bb756) list_single_fs_bigclock_indicator_pane_g3

0xe45f,	// (0x000bb770) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xe45f,	// (0x000bb770) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfc74,	// (0x000bcf85) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfc74,	// (0x000bcf85) list_single_fs_bigclock_indicator_pane_g

0xe48a,	// (0x000bb79b) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xe48a,	// (0x000bb79b) list_single_fs_bigclock_indicator_pane_t1

0xe4b2,	// (0x000bb7c3) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xe4b2,	// (0x000bb7c3) list_single_fs_bigclock_indicator_pane_t2

0xe4da,	// (0x000bb7eb) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xe4da,	// (0x000bb7eb) list_single_fs_bigclock_indicator_pane_t3

0xe502,	// (0x000bb813) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xe502,	// (0x000bb813) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfc7f,	// (0x000bcf90) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfc7f,	// (0x000bcf90) list_single_fs_bigclock_indicator_pane_t

0xeb85,	// (0x000bbe96) image3_infobar_fav_pane_ParamLimits

0xeb85,	// (0x000bbe96) image3_infobar_fav_pane

0xeb95,	// (0x000bbea6) image3_infobar_loc_pane_ParamLimits

0xeb95,	// (0x000bbea6) image3_infobar_loc_pane

0xebab,	// (0x000bbebc) image3_infobar_time_pane_ParamLimits

0xebab,	// (0x000bbebc) image3_infobar_time_pane

0xcc66,	// (0x000b9f77) image3_infobar_time_pane_g1

0xebbb,	// (0x000bbecc) image3_infobar_time_pane_t1

0xcc66,	// (0x000b9f77) image3_infobar_loc_pane_g1

0xebc9,	// (0x000bbeda) image3_infobar_loc_pane_g2

0x0001,

0xfe51,	// (0x000bd162) image3_infobar_loc_pane_g

0xebd1,	// (0x000bbee2) image3_infobar_loc_pane_t1

0xcc66,	// (0x000b9f77) image3_infobar_fav_pane_g1

0xebdf,	// (0x000bbef0) image3_infobar_fav_pane_g2

0x0001,

0xfe56,	// (0x000bd167) image3_infobar_fav_pane_g

0xebe7,	// (0x000bbef8) fs_bigclock_status_battery_pane

0xebf0,	// (0x000bbf01) fs_bigclock_status_signal_pane

0xebf9,	// (0x000bbf0a) fs_bigclock_status_title_pane

0xec02,	// (0x000bbf13) fs_bigclock_status_signal_pane_g1

0xec0b,	// (0x000bbf1c) fs_bigclock_status_signal_pane_g2

0x0001,

0xfe5b,	// (0x000bd16c) fs_bigclock_status_signal_pane_g

0xec13,	// (0x000bbf24) fs_bigclock_status_battery_pane_g1

0xec1c,	// (0x000bbf2d) fs_bigclock_status_battery_pane_g2

0x0001,

0xfe60,	// (0x000bd171) fs_bigclock_status_battery_pane_g

0xec24,	// (0x000bbf35) fs_bigclock_status_title_pane_t1

0xcc66,	// (0x000b9f77) main_fs_bigclock_clock_pane_g1

0xec32,	// (0x000bbf43) main_fs_bigclock_clock_pane_g2

0xec3d,	// (0x000bbf4e) main_fs_bigclock_clock_pane_g3

0xec3d,	// (0x000bbf4e) main_fs_bigclock_clock_pane_g4

0x0003,

0xfe65,	// (0x000bd176) main_fs_bigclock_clock_pane_g

0xec49,	// (0x000bbf5a) main_fs_bigclock_clock_pane_t1

0x8940,	// (0x000b5c51) main_fs_bigclock_clock_pane_t2

0x0001,

0xfe6e,	// (0x000bd17f) main_fs_bigclock_clock_pane_t

0x894f,	// (0x000b5c60) list_single_fs_bigclock_indicator_pane_ParamLimits

0x894f,	// (0x000b5c60) list_single_fs_bigclock_indicator_pane

0x8960,	// (0x000b5c71) list_single_fs_bigclock_pane_ParamLimits

0x8960,	// (0x000b5c71) list_single_fs_bigclock_pane

0xec60,	// (0x000bbf71) main_fs_bigclock_indicator_pane_t1

0xec6f,	// (0x000bbf80) list_single_fs_bigclock_pane_g1

0xec77,	// (0x000bbf88) list_single_fs_bigclock_pane_t1

0xcc66,	// (0x000b9f77) main_fs_bigclock_swipe_pane_g1

0xecba,	// (0x000bbfcb) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfe7f,	// (0x000bd190) main_fs_bigclock_swipe_pane_g

0xecc2,	// (0x000bbfd3) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xecc2,	// (0x000bbfd3) main_fs_bigclock_swipe_pane_t1

0x234e,	// (0x000af65f) call_type_pane_ParamLimits

0x94d5,	// (0x000b67e6) main_btmg_pane

0xbb51,	// (0x000b8e62) list_single_cale_mrui_row_pane_g2_ParamLimits

0xbb51,	// (0x000b8e62) list_single_cale_mrui_row_pane_g2

0x0002,

0xfdf2,	// (0x000bd103) list_single_cale_mrui_row_pane_g_ParamLimits

0xfdf2,	// (0x000bd103) list_single_cale_mrui_row_pane_g

0xa79f,	// (0x000b7ab0) list_recal_vselct_arw_lo_pane

0xeb00,	// (0x000bbe11) list_recal_vselct_arw_up_pane

0xa7a7,	// (0x000b7ab8) list_recal_vselct_pane

0x89c3,	// (0x000b5cd4) btmg_button_pane

0x89cd,	// (0x000b5cde) main_btmg_pane_g1

0x94d5,	// (0x000b67e6) bg_button_pane_cp044

0xecdf,	// (0x000bbff0) btmg_button_pane_t1

0xc801,	// (0x000b9b12) aid_listscroll_gen

0x9526,	// (0x000b6837) main_cntbar_detail_pane

0xe80f,	// (0x000bbb20) list_cmail_folder_pane

0xe81f,	// (0x000bbb30) sp_fs_scroll_pane_cp03_ParamLimits

0xbb5d,	// (0x000b8e6e) list_single_fs_dyc_pane_cp01_ParamLimits

0xbb5d,	// (0x000b8e6e) list_single_fs_dyc_pane_cp01

0xeced,	// (0x000bbffe) aid_size_cmail_indent

0xa81f,	// (0x000b7b30) list_single_dyc_row_pane_cp01

0x8a07,	// (0x000b5d18) cntbar_detail_list_pane_ParamLimits

0x8a07,	// (0x000b5d18) cntbar_detail_list_pane

0x8a59,	// (0x000b5d6a) main_cntbar_detail_cont_pane_ParamLimits

0x8a59,	// (0x000b5d6a) main_cntbar_detail_cont_pane

0x2271,	// (0x000af582) scroll_pane_cp032_ParamLimits

0x2271,	// (0x000af582) scroll_pane_cp032

0x8a6d,	// (0x000b5d7e) cntbar_detail_list_event_pane_ParamLimits

0x8a6d,	// (0x000b5d7e) cntbar_detail_list_event_pane

0x8a19,	// (0x000b5d2a) cntbar_detail_list_shct_pane

0xacdb,	// (0x000b7fec) aid_list_gen

0xecf6,	// (0x000bc007) aid_scroll

0xecff,	// (0x000bc010) aid_size_touch_scroll_bar

0x6d68,	// (0x000b4079) aid_list_double

0xed08,	// (0x000bc019) aid_list_single

0x6d56,	// (0x000b4067) aid_list_single_lg

0xa828,	// (0x000b7b39) aid_list_z_g_a_sm

0xbb77,	// (0x000b8e88) aid_list_z_g_d

0x8a7d,	// (0x000b5d8e) aid_txt_z_prm

0x8a8d,	// (0x000b5d9e) aid_txt_z_prm_cp01

0x8a9b,	// (0x000b5dac) aid_txt_z_sec

0x8aa9,	// (0x000b5dba) main_cntbar_detail_cont_pane_g1_ParamLimits

0x8aa9,	// (0x000b5dba) main_cntbar_detail_cont_pane_g1

0x8abd,	// (0x000b5dce) main_cntbar_detail_cont_pane_g2_ParamLimits

0x8abd,	// (0x000b5dce) main_cntbar_detail_cont_pane_g2

0x0001,

0xfe84,	// (0x000bd195) main_cntbar_detail_cont_pane_g_ParamLimits

0xfe84,	// (0x000bd195) main_cntbar_detail_cont_pane_g

0xed11,	// (0x000bc022) main_cntbar_detail_cont_pane_t1

0xed1f,	// (0x000bc030) main_cntbar_detail_cont_pane_t2

0xed2d,	// (0x000bc03e) main_cntbar_detail_cont_pane_t3

0x0002,

0xfe89,	// (0x000bd19a) main_cntbar_detail_cont_pane_t

0x8acd,	// (0x000b5dde) cell_cntbar_detail_list_shct_pane_ParamLimits

0x8acd,	// (0x000b5dde) cell_cntbar_detail_list_shct_pane

0xed3b,	// (0x000bc04c) cntbar_detail_list_shct_pane_g1

0xed44,	// (0x000bc055) cntbar_detail_list_shct_pane_g2

0x0001,

0xfe90,	// (0x000bd1a1) cntbar_detail_list_shct_pane_g

0x8adf,	// (0x000b5df0) cntbar_detail_list_event_pane_g1_ParamLimits

0x8adf,	// (0x000b5df0) cntbar_detail_list_event_pane_g1

0x8aeb,	// (0x000b5dfc) cntbar_detail_list_event_pane_g2_ParamLimits

0x8aeb,	// (0x000b5dfc) cntbar_detail_list_event_pane_g2

0x0005,

0xfe95,	// (0x000bd1a6) cntbar_detail_list_event_pane_g_ParamLimits

0xfe95,	// (0x000bd1a6) cntbar_detail_list_event_pane_g

0x8b59,	// (0x000b5e6a) cntbar_detail_list_event_pane_t1_ParamLimits

0x8b59,	// (0x000b5e6a) cntbar_detail_list_event_pane_t1

0x8b6e,	// (0x000b5e7f) cntbar_detail_list_event_pane_t2_ParamLimits

0x8b6e,	// (0x000b5e7f) cntbar_detail_list_event_pane_t2

0x0002,

0xfea2,	// (0x000bd1b3) cntbar_detail_list_event_pane_t_ParamLimits

0xfea2,	// (0x000bd1b3) cntbar_detail_list_event_pane_t

0xcc66,	// (0x000b9f77) cell_cntbar_detail_list_shct_pane_g1

0x26f4,	// (0x000afa05) navi_pane_mv_g3

0x9526,	// (0x000b6837) main_cntbar_detail_pane_ParamLimits

0x94d5,	// (0x000b67e6) main_notif_wgt_pane

0x9f0d,	// (0x000b721e) aid_tch_main_mp4_pane_g4

0xa0eb,	// (0x000b73fc) popup_slider_window_cp02

0xa795,	// (0x000b7aa6) list_recal_day_event_pane

0x89d7,	// (0x000b5ce8) cntbar_detail_btn_pane_ParamLimits

0x89d7,	// (0x000b5ce8) cntbar_detail_btn_pane

0x89ef,	// (0x000b5d00) cntbar_detail_btn_pane_cp01_ParamLimits

0x89ef,	// (0x000b5d00) cntbar_detail_btn_pane_cp01

0x8a19,	// (0x000b5d2a) cntbar_detail_list_shct_pane_ParamLimits

0x8a29,	// (0x000b5d3a) cntbar_detail_pane_g1_ParamLimits

0x8a29,	// (0x000b5d3a) cntbar_detail_pane_g1

0x8a3d,	// (0x000b5d4e) cntbar_detail_pane_t1_ParamLimits

0x8a3d,	// (0x000b5d4e) cntbar_detail_pane_t1

0x8af7,	// (0x000b5e08) cntbar_detail_list_event_pane_g3_ParamLimits

0x8af7,	// (0x000b5e08) cntbar_detail_list_event_pane_g3

0x8b0f,	// (0x000b5e20) cntbar_detail_list_event_pane_g4_ParamLimits

0x8b0f,	// (0x000b5e20) cntbar_detail_list_event_pane_g4

0x8b27,	// (0x000b5e38) cntbar_detail_list_event_pane_g5_ParamLimits

0x8b27,	// (0x000b5e38) cntbar_detail_list_event_pane_g5

0x8b3f,	// (0x000b5e50) cntbar_detail_list_event_pane_g6_ParamLimits

0x8b3f,	// (0x000b5e50) cntbar_detail_list_event_pane_g6

0x8b83,	// (0x000b5e94) cntbar_detail_list_event_pane_t3_ParamLimits

0x8b83,	// (0x000b5e94) cntbar_detail_list_event_pane_t3

0x8b95,	// (0x000b5ea6) popup_notif_wgt_window_ParamLimits

0x8b95,	// (0x000b5ea6) popup_notif_wgt_window

0x8bae,	// (0x000b5ebf) popup_submenu_window_cp01_ParamLimits

0x8bae,	// (0x000b5ebf) popup_submenu_window_cp01

0xaa30,	// (0x000b7d41) bg_popup_window_pane_cp10

0xed4d,	// (0x000bc05e) listscroll_notif_wgt_pane

0xed5f,	// (0x000bc070) list_notif_wgt_window

0xed68,	// (0x000bc079) scroll_pane_cp033

0x8bc2,	// (0x000b5ed3) list_notif_wgt_row_pane_ParamLimits

0x8bc2,	// (0x000b5ed3) list_notif_wgt_row_pane

0xed71,	// (0x000bc082) aid_size_list_notif_wgt_del

0xed7e,	// (0x000bc08f) list_notif_wgt_row_pane_g1

0xed8a,	// (0x000bc09b) list_notif_wgt_row_pane_g2

0xed9e,	// (0x000bc0af) list_notif_wgt_row_pane_g3

0x0002,

0xfea9,	// (0x000bd1ba) list_notif_wgt_row_pane_g

0xedab,	// (0x000bc0bc) list_notif_wgt_row_pane_t1

0xedc1,	// (0x000bc0d2) list_notif_wgt_row_pane_t2

0xedd3,	// (0x000bc0e4) list_notif_wgt_row_pane_t3

0x0002,

0xfeb0,	// (0x000bd1c1) list_notif_wgt_row_pane_t

0xd8d6,	// (0x000babe7) list_recal_day_event_pane_g1

0xede5,	// (0x000bc0f6) list_recal_day_event_pane_t1

0x94d5,	// (0x000b67e6) bg_button_pane_cp045

0xedf4,	// (0x000bc105) cntbar_detail_btn_pane_t1

0xc815,	// (0x000b9b26) main_callh_pane_ParamLimits

0xc815,	// (0x000b9b26) main_callh_pane

0x94d5,	// (0x000b67e6) main_coverflow0_pane

0x94d5,	// (0x000b67e6) main_wgtman_pane

0x7a63,	// (0x000b4d74) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x7a63,	// (0x000b4d74) main_fs_bigclock_unlock_btn_pane

0x83f1,	// (0x000b5702) bg_button_pane_cp16

0x8401,	// (0x000b5712) cell_tport_appsw_pane_g3

0x8bd2,	// (0x000b5ee3) cf0_flow_pane_ParamLimits

0x8bd2,	// (0x000b5ee3) cf0_flow_pane

0xee02,	// (0x000bc113) listscroll_cf0_pane

0xee0d,	// (0x000bc11e) main_cf0_pane_g1

0x8be7,	// (0x000b5ef8) main_cf0_pane_t1_ParamLimits

0x8be7,	// (0x000b5ef8) main_cf0_pane_t1

0x8bfe,	// (0x000b5f0f) main_cf0_pane_t2_ParamLimits

0x8bfe,	// (0x000b5f0f) main_cf0_pane_t2

0x0001,

0xfebc,	// (0x000bd1cd) main_cf0_pane_t_ParamLimits

0xfebc,	// (0x000bd1cd) main_cf0_pane_t

0xee1f,	// (0x000bc130) scroll_pane_cp11

0x8c15,	// (0x000b5f26) cf0_flow_pane_g1

0x8c21,	// (0x000b5f32) cf0_flow_pane_g2

0x0001,

0xfec1,	// (0x000bd1d2) cf0_flow_pane_g

0x8c2d,	// (0x000b5f3e) cf0_flow_pane_t1

0x94d5,	// (0x000b67e6) main_call6_pane

0x94d5,	// (0x000b67e6) main_calllock_pane

0x8c3f,	// (0x000b5f50) call6_btn_grp_pane_ParamLimits

0x8c3f,	// (0x000b5f50) call6_btn_grp_pane

0x8c59,	// (0x000b5f6a) call6_pane_g1_ParamLimits

0x8c59,	// (0x000b5f6a) call6_pane_g1

0x8c6f,	// (0x000b5f80) popup_call6_1st_window_ParamLimits

0x8c6f,	// (0x000b5f80) popup_call6_1st_window

0x8c80,	// (0x000b5f91) popup_call6_2nd_window_ParamLimits

0x8c80,	// (0x000b5f91) popup_call6_2nd_window

0x8c91,	// (0x000b5fa2) cell_call6_btn_pane_ParamLimits

0x8c91,	// (0x000b5fa2) cell_call6_btn_pane

0xaa30,	// (0x000b7d41) bg_popup_call2_in_pane_cp03

0xee2a,	// (0x000bc13b) popup_call6_1st_window_g1

0xee32,	// (0x000bc143) popup_call6_1st_window_g2

0xee3a,	// (0x000bc14b) popup_call6_1st_window_g3

0x0002,

0xfec6,	// (0x000bd1d7) popup_call6_1st_window_g

0xee42,	// (0x000bc153) popup_call6_1st_window_t1

0xee51,	// (0x000bc162) popup_call6_1st_window_t2

0xee61,	// (0x000bc172) popup_call6_1st_window_t3

0x0002,

0xfecd,	// (0x000bd1de) popup_call6_1st_window_t

0xaa30,	// (0x000b7d41) bg_popup_call2_in_pane_cp04

0xee2a,	// (0x000bc13b) popup_call6_2nd_window_g1

0xee32,	// (0x000bc143) popup_call6_2nd_window_g2

0xee3a,	// (0x000bc14b) popup_call6_2nd_window_g3

0x0002,

0xfec6,	// (0x000bd1d7) popup_call6_2nd_window_g

0xee42,	// (0x000bc153) popup_call6_2nd_window_t1

0x94d5,	// (0x000b67e6) bg_button_pane_cp15

0xee71,	// (0x000bc182) cell_call6_btn_pane_g1

0xee7a,	// (0x000bc18b) cell_call6_btn_pane_t1

0x8ca5,	// (0x000b5fb6) listscroll_wgtman_pane_ParamLimits

0x8ca5,	// (0x000b5fb6) listscroll_wgtman_pane

0x8cc6,	// (0x000b5fd7) wgtman_btn_pane_ParamLimits

0x8cc6,	// (0x000b5fd7) wgtman_btn_pane

0xb22c,	// (0x000b853d) aid_scroll_copy1

0xee89,	// (0x000bc19a) list_wgtman_pane

0x8d09,	// (0x000b601a) wgtman_btn_pane_g1_ParamLimits

0x8d09,	// (0x000b601a) wgtman_btn_pane_g1

0x8d35,	// (0x000b6046) wgtman_btn_pane_t1_ParamLimits

0x8d35,	// (0x000b6046) wgtman_btn_pane_t1

0xee93,	// (0x000bc1a4) wgtman_btn_pane_t2_ParamLimits

0xee93,	// (0x000bc1a4) wgtman_btn_pane_t2

0x0001,

0xfed4,	// (0x000bd1e5) wgtman_btn_pane_t_ParamLimits

0xfed4,	// (0x000bd1e5) wgtman_btn_pane_t

0x8d72,	// (0x000b6083) listrow_wgtman_pane_ParamLimits

0x8d72,	// (0x000b6083) listrow_wgtman_pane

0x8d84,	// (0x000b6095) listrow_wgtman_pane_g1

0x8d91,	// (0x000b60a2) listrow_wgtman_pane_g2

0x0001,

0xfed9,	// (0x000bd1ea) listrow_wgtman_pane_g

0x8daf,	// (0x000b60c0) listrow_wgtman_pane_t1

0x8dc7,	// (0x000b60d8) listrow_wgtman_pane_t2

0x0001,

0xfede,	// (0x000bd1ef) listrow_wgtman_pane_t

0x8ded,	// (0x000b60fe) wait_bar_pane_cp09

0xeeaa,	// (0x000bc1bb) main_calllock_btn_pane

0xeeb4,	// (0x000bc1c5) main_calllock_pane_g1

0x94d5,	// (0x000b67e6) bg_button_pane_cp17

0xeec0,	// (0x000bc1d1) main_calllock_btn_pane_g1

0xeec9,	// (0x000bc1da) main_calllock_btn_pane_t1

0x94d5,	// (0x000b67e6) main_dialer3_pane

0x94d5,	// (0x000b67e6) main_fmrd2_pane

0xcc66,	// (0x000b9f77) main_fs_bigclock_unlock_btn_pane_g1

0xeee0,	// (0x000bc1f1) main_fs_bigclock_unlock_btn_pane_t1

0x8dff,	// (0x000b6110) area_fmrd2_info_pane_ParamLimits

0x8dff,	// (0x000b6110) area_fmrd2_info_pane

0x8e0e,	// (0x000b611f) area_fmrd2_visual_pane_ParamLimits

0x8e0e,	// (0x000b611f) area_fmrd2_visual_pane

0x8e1c,	// (0x000b612d) fmrd2_indi_pane_ParamLimits

0x8e1c,	// (0x000b612d) fmrd2_indi_pane

0x8e29,	// (0x000b613a) area_fmrd2_visual_pane_g1

0x8e31,	// (0x000b6142) area_fmrd2_visual_pane_t1

0x8e41,	// (0x000b6152) area_fmrd2_visual_pane_t2

0x8e51,	// (0x000b6162) area_fmrd2_visual_pane_t3

0x0002,

0xfee8,	// (0x000bd1f9) area_fmrd2_visual_pane_t

0x8e61,	// (0x000b6172) area_fmrd2_info_pane_g1

0x8e69,	// (0x000b617a) area_fmrd2_info_pane_t1

0x8e79,	// (0x000b618a) area_fmrd2_info_pane_t2

0x8e89,	// (0x000b619a) area_fmrd2_info_pane_t3

0x8e99,	// (0x000b61aa) area_fmrd2_info_pane_t4

0x0003,

0xfeef,	// (0x000bd200) area_fmrd2_info_pane_t

0x8ea9,	// (0x000b61ba) fmrd2_indi_pane_t1

0x8eb9,	// (0x000b61ca) fmrd2_indi_pane_t2

0x8ec9,	// (0x000b61da) fmrd2_indi_pane_t3

0x0002,

0xfef8,	// (0x000bd209) fmrd2_indi_pane_t

0xe46e,	// (0x000bb77f) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xe46e,	// (0x000bb77f) list_single_fs_bigclock_indicator_pane_g5

0xe51e,	// (0x000bb82f) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xe51e,	// (0x000bb82f) list_single_fs_bigclock_indicator_pane_t5

0x858c,	// (0x000b589d) aid_cell_bcale_month_pane_ParamLimits

0x858c,	// (0x000b589d) aid_cell_bcale_month_pane

0x85aa,	// (0x000b58bb) bcale_month_pane_ParamLimits

0x85aa,	// (0x000b58bb) bcale_month_pane

0x85cc,	// (0x000b58dd) bcale_preview_pane_ParamLimits

0x85cc,	// (0x000b58dd) bcale_preview_pane

0xec77,	// (0x000bbf88) list_single_fs_bigclock_pane_t1_ParamLimits

0xec96,	// (0x000bbfa7) list_single_fs_bigclock_pane_t2_ParamLimits

0xec96,	// (0x000bbfa7) list_single_fs_bigclock_pane_t2

0x0001,

0xfe7a,	// (0x000bd18b) list_single_fs_bigclock_pane_t_ParamLimits

0xfe7a,	// (0x000bd18b) list_single_fs_bigclock_pane_t

0xeed8,	// (0x000bc1e9) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfee3,	// (0x000bd1f4) main_fs_bigclock_unlock_btn_pane_g

0x8ed9,	// (0x000b61ea) aid_dia3_key_size_ParamLimits

0x8ed9,	// (0x000b61ea) aid_dia3_key_size

0x8ee8,	// (0x000b61f9) aid_dia3_listrow_size_ParamLimits

0x8ee8,	// (0x000b61f9) aid_dia3_listrow_size

0x8efd,	// (0x000b620e) dia3_keypad_fun_pane_ParamLimits

0x8efd,	// (0x000b620e) dia3_keypad_fun_pane

0x8f19,	// (0x000b622a) dia3_keypad_num_pane_ParamLimits

0x8f19,	// (0x000b622a) dia3_keypad_num_pane

0x8f32,	// (0x000b6243) dia3_listscroll_pane_ParamLimits

0x8f32,	// (0x000b6243) dia3_listscroll_pane

0x8f45,	// (0x000b6256) dia3_numentry_pane_ParamLimits

0x8f45,	// (0x000b6256) dia3_numentry_pane

0xeeee,	// (0x000bc1ff) dia3_list_pane

0xeef9,	// (0x000bc20a) scroll_pane_cp12

0x94d5,	// (0x000b67e6) bg_dia3_numentry_pane

0x8f59,	// (0x000b626a) dia3_numentry_pane_t1

0x8f68,	// (0x000b6279) cell_dia3_key_num_pane

0x8f70,	// (0x000b6281) cell_dia3_key0_fun_pane_ParamLimits

0x8f70,	// (0x000b6281) cell_dia3_key0_fun_pane

0x8f84,	// (0x000b6295) cell_dia3_key1_fun_pane_ParamLimits

0x8f84,	// (0x000b6295) cell_dia3_key1_fun_pane

0x8f9c,	// (0x000b62ad) dia3_listrow_pane

0xe16c,	// (0x000bb47d) bg_dia3_numentry_pane_g1

0x94d5,	// (0x000b67e6) bg_button_pane_cp21

0xef04,	// (0x000bc215) cell_dia3_key_num_pane_t1

0xef12,	// (0x000bc223) cell_dia3_key_num_pane_t2

0xef21,	// (0x000bc232) cell_dia3_key_num_pane_t3

0xef30,	// (0x000bc241) cell_dia3_key_num_pane_t4

0x0003,

0xfeff,	// (0x000bd210) cell_dia3_key_num_pane_t

0x94d5,	// (0x000b67e6) bg_button_pane_cp19

0x8fae,	// (0x000b62bf) cell_dia3_key0_fun_pane_g1

0x94d5,	// (0x000b67e6) bg_button_pane_cp20

0x8fb6,	// (0x000b62c7) cell_dia3_key1_fun_pane_g1

0x8fbe,	// (0x000b62cf) area_left_week_number_pane

0x8fcc,	// (0x000b62dd) area_top_day_name_pane

0x8fdf,	// (0x000b62f0) frame_month_view_pane

0xef3f,	// (0x000bc250) grid_month_view_pane

0x8ff4,	// (0x000b6305) cell_top_day_name_pane_ParamLimits

0x8ff4,	// (0x000b6305) cell_top_day_name_pane

0x9023,	// (0x000b6334) cell_area_left_week_number_pane_ParamLimits

0x9023,	// (0x000b6334) cell_area_left_week_number_pane

0x9037,	// (0x000b6348) cell_month_view_pane_ParamLimits

0x9037,	// (0x000b6348) cell_month_view_pane

0xef4d,	// (0x000bc25e) frm_month_g1

0x9066,	// (0x000b6377) frm_month_g2

0x9079,	// (0x000b638a) frm_month_g3

0x908c,	// (0x000b639d) frm_month_g4

0x909f,	// (0x000b63b0) frm_month_g5

0x90b2,	// (0x000b63c3) frm_month_g6

0x90c5,	// (0x000b63d6) frm_month_g7

0xef5a,	// (0x000bc26b) frm_month_g8

0x90da,	// (0x000b63eb) frm_month_g9

0x90ea,	// (0x000b63fb) frm_month_g10

0x90fa,	// (0x000b640b) frm_month_g11

0x910a,	// (0x000b641b) frm_month_g12

0x911c,	// (0x000b642d) frm_month_g13

0x9130,	// (0x000b6441) frm_month_g14

0x9144,	// (0x000b6455) frm_month_g15

0x9158,	// (0x000b6469) frm_month_g16

0x000f,

0xff08,	// (0x000bd219) frm_month_g

0xef67,	// (0x000bc278) cell_top_day_name_pane_t1

0x916c,	// (0x000b647d) cell_area_left_week_number_pane_g1

0x9178,	// (0x000b6489) cell_area_left_week_number_pane_t1

0xce96,	// (0x000ba1a7) cell_month_view_pane_g1

0x918b,	// (0x000b649c) cell_month_view_pane_t1

0x94d5,	// (0x000b67e6) main_fps_pane

0xe6f3,	// (0x000bba04) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xe6f3,	// (0x000bba04) cmail_ddmenu_btn02_pane_cp1

0xe70f,	// (0x000bba20) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xe70f,	// (0x000bba20) cmail_ddmenu_btn02_pane_cp2

0x8899,	// (0x000b5baa) cmail_ddmenu_btn02_pane_g2_ParamLimits

0x8899,	// (0x000b5baa) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfe2d,	// (0x000bd13e) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfe2d,	// (0x000bd13e) cmail_ddmenu_btn02_pane_g

0x88ba,	// (0x000b5bcb) cmail_ddmenu_btn02_pane_t2_ParamLimits

0x88ba,	// (0x000b5bcb) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfe32,	// (0x000bd143) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfe32,	// (0x000bd143) cmail_ddmenu_btn02_pane_t

0x919e,	// (0x000b64af) fps_text_pane_ParamLimits

0x919e,	// (0x000b64af) fps_text_pane

0x91b5,	// (0x000b64c6) main_fps_pane_g1_ParamLimits

0x91b5,	// (0x000b64c6) main_fps_pane_g1

0x91cd,	// (0x000b64de) wait_bar_pane_cp010_ParamLimits

0x91cd,	// (0x000b64de) wait_bar_pane_cp010

0x91e0,	// (0x000b64f1) fps_text_pane_t1_ParamLimits

0x91e0,	// (0x000b64f1) fps_text_pane_t1

0xd62f,	// (0x000ba940) cam4_image_uncrop_pane_g1

0xd638,	// (0x000ba949) cam4_image_uncrop_pane_g2

0x5b50,	// (0x000b2e61) cam4_image_uncrop_pane_g3

0x5b59,	// (0x000b2e6a) cam4_image_uncrop_pane_g4

0x0003,

0xf8ee,	// (0x000bcbff) cam4_image_uncrop_pane_g

0x8f9c,	// (0x000b62ad) dia3_listrow_pane_ParamLimits

0x94d5,	// (0x000b67e6) main_phob2_pane

0x83c0,	// (0x000b56d1) cell_tport_appsw_pane_cp02_ParamLimits

0x83c0,	// (0x000b56d1) cell_tport_appsw_pane_cp02

0x83d4,	// (0x000b56e5) cell_tport_appsw_pane_cp03_ParamLimits

0x83d4,	// (0x000b56e5) cell_tport_appsw_pane_cp03

0x94d5,	// (0x000b67e6) phob2_contact_card_pane

0x94d5,	// (0x000b67e6) phob2_listscroll_pane

0xef7a,	// (0x000bc28b) phob2_list_pane

0xef82,	// (0x000bc293) scroll_pane_cp034

0x91f8,	// (0x000b6509) phob2_cc_data_pane_ParamLimits

0x91f8,	// (0x000b6509) phob2_cc_data_pane

0x9219,	// (0x000b652a) phob2_cc_listscroll_pane_ParamLimits

0x9219,	// (0x000b652a) phob2_cc_listscroll_pane

0x923b,	// (0x000b654c) list_double_large_graphic_phob2_pane_ParamLimits

0x923b,	// (0x000b654c) list_double_large_graphic_phob2_pane

0x924f,	// (0x000b6560) list_double_large_graphic_phob2_pane_g1_ParamLimits

0x924f,	// (0x000b6560) list_double_large_graphic_phob2_pane_g1

0x9265,	// (0x000b6576) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x9265,	// (0x000b6576) list_double_large_graphic_phob2_pane_g2

0x0001,

0xff29,	// (0x000bd23a) list_double_large_graphic_phob2_pane_g_ParamLimits

0xff29,	// (0x000bd23a) list_double_large_graphic_phob2_pane_g

0x9271,	// (0x000b6582) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x9271,	// (0x000b6582) list_double_large_graphic_phob2_pane_t1

0x9286,	// (0x000b6597) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x9286,	// (0x000b6597) list_double_large_graphic_phob2_pane_t2

0x0001,

0xff2e,	// (0x000bd23f) list_double_large_graphic_phob2_pane_t_ParamLimits

0xff2e,	// (0x000bd23f) list_double_large_graphic_phob2_pane_t

0x94d5,	// (0x000b67e6) list_highlight_pane_cp024

0x9298,	// (0x000b65a9) phob2_cc_button_pane

0x92a0,	// (0x000b65b1) phob2_cc_data_pane_g1_ParamLimits

0x92a0,	// (0x000b65b1) phob2_cc_data_pane_g1

0x92b6,	// (0x000b65c7) phob2_cc_data_pane_g2_ParamLimits

0x92b6,	// (0x000b65c7) phob2_cc_data_pane_g2

0x0001,

0xff33,	// (0x000bd244) phob2_cc_data_pane_g_ParamLimits

0xff33,	// (0x000bd244) phob2_cc_data_pane_g

0x92c6,	// (0x000b65d7) phob2_cc_data_pane_t1_ParamLimits

0x92c6,	// (0x000b65d7) phob2_cc_data_pane_t1

0x92de,	// (0x000b65ef) phob2_cc_data_pane_t2_ParamLimits

0x92de,	// (0x000b65ef) phob2_cc_data_pane_t2

0x92f8,	// (0x000b6609) phob2_cc_data_pane_t3_ParamLimits

0x92f8,	// (0x000b6609) phob2_cc_data_pane_t3

0x0002,

0xff38,	// (0x000bd249) phob2_cc_data_pane_t_ParamLimits

0xff38,	// (0x000bd249) phob2_cc_data_pane_t

0xef8a,	// (0x000bc29b) phob2_cc_list_pane_ParamLimits

0xef8a,	// (0x000bc29b) phob2_cc_list_pane

0xd96d,	// (0x000bac7e) scroll_pane_cp035_ParamLimits

0xd96d,	// (0x000bac7e) scroll_pane_cp035

0x9526,	// (0x000b6837) bg_button_pane_cp033

0xef96,	// (0x000bc2a7) phob2_cc_button_pane_g1

0xefa2,	// (0x000bc2b3) phob2_cc_button_pane_t1

0xefb7,	// (0x000bc2c8) phob2_cc_button_pane_t2

0x0001,

0xff3f,	// (0x000bd250) phob2_cc_button_pane_t

0x9312,	// (0x000b6623) list_double_large_graphic_phob2_cc_pane_ParamLimits

0x9312,	// (0x000b6623) list_double_large_graphic_phob2_cc_pane

0x9326,	// (0x000b6637) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0x9326,	// (0x000b6637) list_double_large_graphic_phob2_cc_pane_g1

0x9332,	// (0x000b6643) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x9332,	// (0x000b6643) list_double_large_graphic_phob2_cc_pane_g2

0x933e,	// (0x000b664f) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x933e,	// (0x000b664f) list_double_large_graphic_phob2_cc_pane_g3

0x934a,	// (0x000b665b) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x934a,	// (0x000b665b) list_double_large_graphic_phob2_cc_pane_g4

0x9356,	// (0x000b6667) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x9356,	// (0x000b6667) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xff44,	// (0x000bd255) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xff44,	// (0x000bd255) list_double_large_graphic_phob2_cc_pane_g

0x9362,	// (0x000b6673) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x9362,	// (0x000b6673) list_double_large_graphic_phob2_cc_pane_t1

0x938b,	// (0x000b669c) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x938b,	// (0x000b669c) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xff4f,	// (0x000bd260) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xff4f,	// (0x000bd260) list_double_large_graphic_phob2_cc_pane_t

0xefc9,	// (0x000bc2da) list_highlight_pane_cp025_ParamLimits

0xefc9,	// (0x000bc2da) list_highlight_pane_cp025

0x9526,	// (0x000b6837) bg_button_pane_cp033_ParamLimits

0xef96,	// (0x000bc2a7) phob2_cc_button_pane_g1_ParamLimits

0xefa2,	// (0x000bc2b3) phob2_cc_button_pane_t1_ParamLimits

0xefb7,	// (0x000bc2c8) phob2_cc_button_pane_t2_ParamLimits

0xff3f,	// (0x000bd250) phob2_cc_button_pane_t_ParamLimits

0xfe7d,	// (0x000ad18e) popup_wgtman_window

0xd7b0,	// (0x000baac1) scroll_pane_cp038

0x8ceb,	// (0x000b5ffc) wgtman_btn_pane_cp_01_ParamLimits

0x8ceb,	// (0x000b5ffc) wgtman_btn_pane_cp_01

0xefd7,	// (0x000bc2e8) wgtman_content_pane

0xefe0,	// (0x000bc2f1) wgtman_heading_pane

0x94d5,	// (0x000b67e6) bg_heading_pane_cp02

0xefe9,	// (0x000bc2fa) wgtman_heading_pane_g1

0xeff1,	// (0x000bc302) wgtman_heading_pane_t1

0xefff,	// (0x000bc310) scroll_pane_cp036

0xf007,	// (0x000bc318) wgtman_list_pane

0xf00f,	// (0x000bc320) wgtman_list_pane_t1_ParamLimits

0xf00f,	// (0x000bc320) wgtman_list_pane_t1

0xa149,	// (0x000b745a) cam4_grid_pane

0x684e,	// (0x000b3b5f) bg_button_pane_cp015_ParamLimits

0x6862,	// (0x000b3b73) bg_button_pane_cp016_ParamLimits

0x6875,	// (0x000b3b86) bg_button_pane_cp017_ParamLimits

0x68cd,	// (0x000b3bde) popup_vitu2_query_window_g3_ParamLimits

0x68cd,	// (0x000b3bde) popup_vitu2_query_window_g3

0x698a,	// (0x000b3c9b) popup_vitu2_query_window_t6_ParamLimits

0x698a,	// (0x000b3c9b) popup_vitu2_query_window_t6

0x69b5,	// (0x000b3cc6) popup_vitu2_query_window_t7_ParamLimits

0x69b5,	// (0x000b3cc6) popup_vitu2_query_window_t7

0xd62f,	// (0x000ba940) cam4_grid_pane_g1

0xd638,	// (0x000ba949) cam4_grid_pane_g2

0xf029,	// (0x000bc33a) cam4_grid_pane_g3

0xf032,	// (0x000bc343) cam4_grid_pane_g4

0x0003,

0xff54,	// (0x000bd265) cam4_grid_pane_g

0x10be,	// (0x000ae3cf) aid_placing_vt_slider_lsc_ParamLimits

0x13ab,	// (0x000ae6bc) vidtel_button_pane_ParamLimits

0x13ab,	// (0x000ae6bc) vidtel_button_pane

0xf03d,	// (0x000bc34e) bg_button_pane_cp034

0x93b4,	// (0x000b66c5) vidtel_button_pane_g1

0xf047,	// (0x000bc358) vidtel_button_pane_t1

0xd8b4,	// (0x000babc5) aid_size_vtel_slider_touch

0xd96d,	// (0x000bac7e) scroll_pane_cp039

0xe1aa,	// (0x000bb4bb) ncim_query_button_pane_cp01_ParamLimits

0xe1c9,	// (0x000bb4da) ncimui_query_pane_g1_ParamLimits

0x9526,	// (0x000b6837) input_focus_pane_cp012_ParamLimits

0xe1ee,	// (0x000bb4ff) ncim_query_entry_pane_t1_ParamLimits

0xd96d,	// (0x000bac7e) scroll_pane_cp039_ParamLimits

0x2666,	// (0x000af977) navi_pane_bcale_mc_g1

0x266e,	// (0x000af97f) navi_pane_bcale_mc_t1

0xe758,	// (0x000bba69) main_sp_fs_email_pane_g1

0xe764,	// (0x000bba75) main_sp_fs_email_pane_g2

0x0001,

0xfce5,	// (0x000bcff6) main_sp_fs_email_pane_g

0xea04,	// (0x000bbd15) list_single_cale_mrui_row_pane_g3_ParamLimits

0xea04,	// (0x000bbd15) list_single_cale_mrui_row_pane_g3

0x88da,	// (0x000b5beb) list_single_recal_day_pane_g5_event_pane

0xa7f3,	// (0x000b7b04) list_single_recal_day_pane_g7

0xf055,	// (0x000bc366) list_recal_day_event_pane_cp01

0xf05e,	// (0x000bc36f) list_recal_vselct_arw_lo_pane_cp01

0xf066,	// (0x000bc377) list_recal_vselct_arw_up_pane_cp01

0xf06e,	// (0x000bc37f) list_recal_vselct_pane_cp01

0xd8d6,	// (0x000babe7) list_recal_day_event_pane_cp01_g1

0xbb7f,	// (0x000b8e90) list_recal_day_event_pane_cp01_t1

0xa7fb,	// (0x000b7b0c) list_single_recal_day_pane_t1_ParamLimits

0xa80d,	// (0x000b7b1e) list_single_recal_day_pane_t2_ParamLimits

0xfe42,	// (0x000bd153) list_single_recal_day_pane_t_ParamLimits

0x9ba2,	// (0x000b6eb3) bg_notes_pane_ParamLimits

0xa858,	// (0x000b7b69) list_notes_pane_ParamLimits

0x01ca,	// (0x000ad4db) scroll_pane_cp06_ParamLimits

0xa87a,	// (0x000b7b8b) main_notes_pane_ParamLimits

0x94d5,	// (0x000b67e6) main_welc_pane

0x93bc,	// (0x000b66cd) main_welc_body_pane_ParamLimits

0x93bc,	// (0x000b66cd) main_welc_body_pane

0x93db,	// (0x000b66ec) main_welc_opti_pane_ParamLimits

0x93db,	// (0x000b66ec) main_welc_opti_pane

0x9424,	// (0x000b6735) main_welc_pane_t1_ParamLimits

0x9424,	// (0x000b6735) main_welc_pane_t1

0x9446,	// (0x000b6757) main_welc_body_row_pane_ParamLimits

0x9446,	// (0x000b6757) main_welc_body_row_pane

0x945a,	// (0x000b676b) main_welc_opti_row_pane_ParamLimits

0x945a,	// (0x000b676b) main_welc_opti_row_pane

0xf078,	// (0x000bc389) main_welc_opti_row_pane_g1

0xf080,	// (0x000bc391) main_welc_opti_row_pane_t1

0xf08f,	// (0x000bc3a0) main_welc_body_row_pane_t1

0xed57,	// (0x000bc068) popup_notif_wgt_heading_pane

0xed71,	// (0x000bc082) aid_size_list_notif_wgt_del_ParamLimits

0xed7e,	// (0x000bc08f) list_notif_wgt_row_pane_g1_ParamLimits

0xed8a,	// (0x000bc09b) list_notif_wgt_row_pane_g2_ParamLimits

0xed9e,	// (0x000bc0af) list_notif_wgt_row_pane_g3_ParamLimits

0xfea9,	// (0x000bd1ba) list_notif_wgt_row_pane_g_ParamLimits

0xedab,	// (0x000bc0bc) list_notif_wgt_row_pane_t1_ParamLimits

0xedc1,	// (0x000bc0d2) list_notif_wgt_row_pane_t2_ParamLimits

0xedd3,	// (0x000bc0e4) list_notif_wgt_row_pane_t3_ParamLimits

0xfeb0,	// (0x000bd1c1) list_notif_wgt_row_pane_t_ParamLimits

0x8d84,	// (0x000b6095) listrow_wgtman_pane_g1_ParamLimits

0x8d91,	// (0x000b60a2) listrow_wgtman_pane_g2_ParamLimits

0xfed9,	// (0x000bd1ea) listrow_wgtman_pane_g_ParamLimits

0x8daf,	// (0x000b60c0) listrow_wgtman_pane_t1_ParamLimits

0x8dc7,	// (0x000b60d8) listrow_wgtman_pane_t2_ParamLimits

0xfede,	// (0x000bd1ef) listrow_wgtman_pane_t_ParamLimits

0x8ded,	// (0x000b60fe) wait_bar_pane_cp09_ParamLimits

0x94d5,	// (0x000b67e6) bg_popup_heading_pane_cp02

0xf09e,	// (0x000bc3af) popup_notif_wgt_heading_pane_g1

0xf0a6,	// (0x000bc3b7) popup_notif_wgt_heading_pane_t1

0x94d5,	// (0x000b67e6) main_vids_pane

0x94d5,	// (0x000b67e6) vids_listscroll_pane

0x946a,	// (0x000b677b) scroll_pane_cp040

0x94d5,	// (0x000b67e6) vids_list_pane

0x9475,	// (0x000b6786) vids_list_double_pane_ParamLimits

0x9475,	// (0x000b6786) vids_list_double_pane

0x9486,	// (0x000b6797) vids_list_double_pane_g1

0x948f,	// (0x000b67a0) vids_list_double_pane_t1

0x949f,	// (0x000b67b0) vids_list_double_pane_t2

0x0001,

0xff62,	// (0x000bd273) vids_list_double_pane_t

0x9526,	// (0x000b6837) main_ncimui_pane_ParamLimits

0x75ae,	// (0x000b48bf) main_ncimui_pane_g1_ParamLimits

0x75ba,	// (0x000b48cb) main_ncimui_pane_g2_ParamLimits

0x75ba,	// (0x000b48cb) main_ncimui_pane_g2

0x0001,

0xfbea,	// (0x000bcefb) main_ncimui_pane_g_ParamLimits

0xfbea,	// (0x000bcefb) main_ncimui_pane_g

0x93fa,	// (0x000b670b) main_welc_pane_g1_ParamLimits

0x93fa,	// (0x000b670b) main_welc_pane_g1

0x940f,	// (0x000b6720) main_welc_pane_g2_ParamLimits

0x940f,	// (0x000b6720) main_welc_pane_g2

0x0001,

0xff5d,	// (0x000bd26e) main_welc_pane_g_ParamLimits

0xff5d,	// (0x000bd26e) main_welc_pane_g

0x9ba2,	// (0x000b6eb3) listscroll_mce_pane_ParamLimits

0x2746,	// (0x000afa57) wait_bar_pane_cp10

0xc809,	// (0x000b9b1a) main_cale_day_pane_ParamLimits

0xc809,	// (0x000b9b1a) main_cale_week_pane_ParamLimits

0x9ba2,	// (0x000b6eb3) main_messa_pane_ParamLimits

0x4e0e,	// (0x000b211f) main_clock2_btn_pane_ParamLimits

0x4e0e,	// (0x000b211f) main_clock2_btn_pane

0xd026,	// (0x000ba337) main_clock2_btn_pane_cp01_ParamLimits

0xd026,	// (0x000ba337) main_clock2_btn_pane_cp01

0xe9d5,	// (0x000bbce6) list_cale_mrui_pane_ParamLimits

0xee17,	// (0x000bc128) main_cf0_pane_g2

0x0001,

0xfeb7,	// (0x000bd1c8) main_cf0_pane_g

0x8fbe,	// (0x000b62cf) area_left_week_number_pane_ParamLimits

0x8fcc,	// (0x000b62dd) area_top_day_name_pane_ParamLimits

0x8fdf,	// (0x000b62f0) frame_month_view_pane_ParamLimits

0xef3f,	// (0x000bc250) grid_month_view_pane_ParamLimits

0xef4d,	// (0x000bc25e) frm_month_g1_ParamLimits

0x9066,	// (0x000b6377) frm_month_g2_ParamLimits

0x9079,	// (0x000b638a) frm_month_g3_ParamLimits

0x908c,	// (0x000b639d) frm_month_g4_ParamLimits

0x909f,	// (0x000b63b0) frm_month_g5_ParamLimits

0x90b2,	// (0x000b63c3) frm_month_g6_ParamLimits

0x90c5,	// (0x000b63d6) frm_month_g7_ParamLimits

0xef5a,	// (0x000bc26b) frm_month_g8_ParamLimits

0x90da,	// (0x000b63eb) frm_month_g9_ParamLimits

0x90ea,	// (0x000b63fb) frm_month_g10_ParamLimits

0x90fa,	// (0x000b640b) frm_month_g11_ParamLimits

0x910a,	// (0x000b641b) frm_month_g12_ParamLimits

0x911c,	// (0x000b642d) frm_month_g13_ParamLimits

0x9130,	// (0x000b6441) frm_month_g14_ParamLimits

0x9144,	// (0x000b6455) frm_month_g15_ParamLimits

0x9158,	// (0x000b6469) frm_month_g16_ParamLimits

0xff08,	// (0x000bd219) frm_month_g_ParamLimits

0xef67,	// (0x000bc278) cell_top_day_name_pane_t1_ParamLimits

0x916c,	// (0x000b647d) cell_area_left_week_number_pane_g1_ParamLimits

0x9178,	// (0x000b6489) cell_area_left_week_number_pane_t1_ParamLimits

0xce96,	// (0x000ba1a7) cell_month_view_pane_g1_ParamLimits

0x918b,	// (0x000b649c) cell_month_view_pane_t1_ParamLimits

0x9b9a,	// (0x000b6eab) main_clock2_btn_pane_g1

0xf0b4,	// (0x000bc3c5) main_clock2_btn_pane_t1

0x9526,	// (0x000b6837) listscroll_cmail_pane_ParamLimits

0xe758,	// (0x000bba69) main_sp_fs_email_pane_g1_ParamLimits

0xe764,	// (0x000bba75) main_sp_fs_email_pane_g2_ParamLimits

0xfce5,	// (0x000bcff6) main_sp_fs_email_pane_g_ParamLimits

0xeae1,	// (0x000bbdf2) list_recal_day_pane_ParamLimits

0xeaf2,	// (0x000bbe03) mian_recal_day_pane_t1

0x80a1,	// (0x000b53b2) list_single_dyc_row_text_pane_t4_ParamLimits

0x80a1,	// (0x000b53b2) list_single_dyc_row_text_pane_t4

0x80ea,	// (0x000b53fb) list_single_dyc_row_text_pane_t5_ParamLimits

0x80ea,	// (0x000b53fb) list_single_dyc_row_text_pane_t5

0xa518,	// (0x000b7829) list_single_dyc_row_text_pane_t6_ParamLimits

0xa518,	// (0x000b7829) list_single_dyc_row_text_pane_t6

0xae20,	// (0x000b8131) aid_mgn_list_cale_time_pane

0x9526,	// (0x000b6837) main_gallery2_pane_ParamLimits

0xd03a,	// (0x000ba34b) main_clock2_pane_cp01_t1

0xd04a,	// (0x000ba35b) main_clock2_pane_cp01_t3

0x0001,

0xf7c4,	// (0x000bcad5) main_clock2_pane_cp01_t

0x0649,	// (0x000ad95a) cale_week_scroll_pane_g16_ParamLimits

0x0649,	// (0x000ad95a) cale_week_scroll_pane_g16

0xaa30,	// (0x000b7d41) vorec_slider_pane
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
	};

} // end of namespace AknLayoutScalable_Abrw_pvl4_apps_vga4_lsc_tch_Large
