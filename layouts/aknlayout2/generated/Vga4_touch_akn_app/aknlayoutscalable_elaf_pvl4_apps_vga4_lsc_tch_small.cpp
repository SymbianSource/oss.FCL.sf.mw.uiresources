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
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pvp4_apps_vga4_prt_tch + 0x0004e43b };

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
0x0b45,	// (0x0004ef80) Screen

0x0b51,	// (0x0004ef8c) application_window

0x0b9d,	// (0x0004efd8) area_bottom_pane_ParamLimits

0x0b9d,	// (0x0004efd8) area_bottom_pane

0x0bd6,	// (0x0004f011) area_top_pane_ParamLimits

0x0bd6,	// (0x0004f011) area_top_pane

0x9a45,	// (0x00057e80) call_video_uplink_pane_ParamLimits

0x9a45,	// (0x00057e80) call_video_uplink_pane

0x0c64,	// (0x0004f09f) main_pane_ParamLimits

0x0c64,	// (0x0004f09f) main_pane

0xc853,	// (0x0005ac8e) context_pane

0x45f3,	// (0x00052a2e) navi_pane

0x4623,	// (0x00052a5e) popup_cale_events_window_ParamLimits

0x4623,	// (0x00052a5e) popup_cale_events_window

0xc866,	// (0x0005aca1) popup_mup_playback_window

0x463b,	// (0x00052a76) signal_pane

0xa1c6,	// (0x00058601) main_browser_pane

0xb3d4,	// (0x0005980f) main_burst_pane

0x42f5,	// (0x00052730) main_calc_pane

0xc7f6,	// (0x0005ac31) main_cale_day_pane

0x12a6,	// (0x0004f6e1) main_cale_month_pane

0xc7f6,	// (0x0005ac31) main_cale_week_pane

0xb3d4,	// (0x0005980f) main_call_pane

0x9e84,	// (0x000582bf) main_call_poc_pane

0xb3d4,	// (0x0005980f) main_camera_pane

0xb3d4,	// (0x0005980f) main_chi_dic_pane

0xb276,	// (0x000596b1) main_clock_pane

0x9e84,	// (0x000582bf) main_fmradio_pane

0xb3d4,	// (0x0005980f) main_graph_messa_pane

0x9e84,	// (0x000582bf) main_help_pane

0xa1c6,	// (0x00058601) main_im_pane

0xa0df,	// (0x0005851a) main_image_pane_ParamLimits

0xa0df,	// (0x0005851a) main_image_pane

0x9e84,	// (0x000582bf) main_location2_pane

0xb3d4,	// (0x0005980f) main_location_pane

0xa0df,	// (0x0005851a) main_messa_pane

0x9e84,	// (0x000582bf) main_mp2_pane

0xb3d4,	// (0x0005980f) main_mp_pane

0x9e84,	// (0x000582bf) main_msg_pane

0x9e84,	// (0x000582bf) main_mup_eq_pane

0x9e84,	// (0x000582bf) main_mup_pane

0xa1c6,	// (0x00058601) main_notes_pane

0x9e84,	// (0x000582bf) main_pec_pane

0x9e84,	// (0x000582bf) main_phob_pane

0x9e84,	// (0x000582bf) main_pinb_pane

0x9e84,	// (0x000582bf) main_postcard_pane

0x9e84,	// (0x000582bf) main_qdial_pane

0xb3d4,	// (0x0005980f) main_skin_pane

0x9e84,	// (0x000582bf) main_smil2_pane

0xb3d4,	// (0x0005980f) main_smil_pane

0xb3d4,	// (0x0005980f) main_video_pane

0xb3d4,	// (0x0005980f) main_video_tele_pane

0xa0df,	// (0x0005851a) main_viewer_pane_ParamLimits

0xa0df,	// (0x0005851a) main_viewer_pane

0xb3d4,	// (0x0005980f) main_vorec_pane

0x434b,	// (0x00052786) popup_blid_sat_info_window_ParamLimits

0x434b,	// (0x00052786) popup_blid_sat_info_window

0x43af,	// (0x000527ea) popup_dyc_status_message_window_ParamLimits

0x43af,	// (0x000527ea) popup_dyc_status_message_window

0x43c9,	// (0x00052804) popup_grid_large_graphic_window_ParamLimits

0x43c9,	// (0x00052804) popup_grid_large_graphic_window

0x448b,	// (0x000528c6) popup_loc_request_window_ParamLimits

0x448b,	// (0x000528c6) popup_loc_request_window

0x45c7,	// (0x00052a02) popup_wml_address_window_ParamLimits

0x45c7,	// (0x00052a02) popup_wml_address_window

0x4133,	// (0x0005256e) call_muted_g1

0x3dc7,	// (0x00052202) popup_call_audio_conf_window_ParamLimits

0x3dc7,	// (0x00052202) popup_call_audio_conf_window

0x4143,	// (0x0005257e) popup_call_audio_first_window_ParamLimits

0x4143,	// (0x0005257e) popup_call_audio_first_window

0x41b9,	// (0x000525f4) popup_call_audio_in_window_ParamLimits

0x41b9,	// (0x000525f4) popup_call_audio_in_window

0x41f5,	// (0x00052630) popup_call_audio_out_window_ParamLimits

0x41f5,	// (0x00052630) popup_call_audio_out_window

0x422f,	// (0x0005266a) popup_call_audio_second_window_ParamLimits

0x422f,	// (0x0005266a) popup_call_audio_second_window

0x4285,	// (0x000526c0) popup_call_audio_wait_window_ParamLimits

0x4285,	// (0x000526c0) popup_call_audio_wait_window

0x42ba,	// (0x000526f5) popup_number_entry_window_ParamLimits

0x42ba,	// (0x000526f5) popup_number_entry_window

0x9a71,	// (0x00057eac) bg_popup_call_pane_cp05_ParamLimits

0x9a71,	// (0x00057eac) bg_popup_call_pane_cp05

0x9a91,	// (0x00057ecc) popup_number_entry_window_t1

0x9aa4,	// (0x00057edf) popup_number_entry_window_t2

0x9ab6,	// (0x00057ef1) popup_number_entry_window_t3

0x0003,

0xf0cd,	// (0x0005d508) popup_number_entry_window_t

0x9ac8,	// (0x00057f03) text_title_cp2

0x9adb,	// (0x00057f16) bg_popup_call_pane_cp_ParamLimits

0x9adb,	// (0x00057f16) bg_popup_call_pane_cp

0x9ae9,	// (0x00057f24) call_thumbnail_pane

0x9af1,	// (0x00057f2c) popup_call_audio_in_window_g1_ParamLimits

0x9af1,	// (0x00057f2c) popup_call_audio_in_window_g1

0x9afd,	// (0x00057f38) popup_call_audio_in_window_g2_ParamLimits

0x9afd,	// (0x00057f38) popup_call_audio_in_window_g2

0x9b09,	// (0x00057f44) popup_call_audio_in_window_g3_ParamLimits

0x9b09,	// (0x00057f44) popup_call_audio_in_window_g3

0x0002,

0xf0d6,	// (0x0005d511) popup_call_audio_in_window_g_ParamLimits

0xf0d6,	// (0x0005d511) popup_call_audio_in_window_g

0x9b15,	// (0x00057f50) popup_call_audio_in_window_t1_ParamLimits

0x9b15,	// (0x00057f50) popup_call_audio_in_window_t1

0x9b31,	// (0x00057f6c) popup_call_audio_in_window_t2_ParamLimits

0x9b31,	// (0x00057f6c) popup_call_audio_in_window_t2

0x9b4d,	// (0x00057f88) popup_call_audio_in_window_t3_ParamLimits

0x9b4d,	// (0x00057f88) popup_call_audio_in_window_t3

0x0002,

0xf0dd,	// (0x0005d518) popup_call_audio_in_window_t_ParamLimits

0xf0dd,	// (0x0005d518) popup_call_audio_in_window_t

0x9adb,	// (0x00057f16) bg_popup_call_pane_cp01_ParamLimits

0x9adb,	// (0x00057f16) bg_popup_call_pane_cp01

0x9ae9,	// (0x00057f24) call_thumbnail_pane_cp02

0x9b60,	// (0x00057f9b) call_type_pane_cp022

0x9b68,	// (0x00057fa3) popup_call_audio_out_window_g1_ParamLimits

0x9b68,	// (0x00057fa3) popup_call_audio_out_window_g1

0x9b7a,	// (0x00057fb5) popup_call_audio_out_window_g2_ParamLimits

0x9b7a,	// (0x00057fb5) popup_call_audio_out_window_g2

0x9b86,	// (0x00057fc1) popup_call_audio_out_window_g3_ParamLimits

0x9b86,	// (0x00057fc1) popup_call_audio_out_window_g3

0x0002,

0xf0e4,	// (0x0005d51f) popup_call_audio_out_window_g_ParamLimits

0xf0e4,	// (0x0005d51f) popup_call_audio_out_window_g

0x9b98,	// (0x00057fd3) popup_call_audio_out_window_t1_ParamLimits

0x9b98,	// (0x00057fd3) popup_call_audio_out_window_t1

0x9bb0,	// (0x00057feb) popup_call_audio_out_window_t2_ParamLimits

0x9bb0,	// (0x00057feb) popup_call_audio_out_window_t2

0x0001,

0xf0eb,	// (0x0005d526) popup_call_audio_out_window_t_ParamLimits

0xf0eb,	// (0x0005d526) popup_call_audio_out_window_t

0x9bc5,	// (0x00058000) bg_popup_call_pane_ParamLimits

0x9bc5,	// (0x00058000) bg_popup_call_pane

0x0e23,	// (0x0004f25e) call_thumbnail_pane_cp_ParamLimits

0x0e23,	// (0x0004f25e) call_thumbnail_pane_cp

0x9c49,	// (0x00058084) call_type_pane_cp01_ParamLimits

0x9c49,	// (0x00058084) call_type_pane_cp01

0x9c8d,	// (0x000580c8) popup_call_audio_first_window_g1_ParamLimits

0x9c8d,	// (0x000580c8) popup_call_audio_first_window_g1

0x9cd9,	// (0x00058114) popup_call_audio_first_window_g2_ParamLimits

0x9cd9,	// (0x00058114) popup_call_audio_first_window_g2

0x0001,

0xf0f0,	// (0x0005d52b) popup_call_audio_first_window_g_ParamLimits

0xf0f0,	// (0x0005d52b) popup_call_audio_first_window_g

0x9d1d,	// (0x00058158) popup_call_audio_first_window_t1_ParamLimits

0x9d1d,	// (0x00058158) popup_call_audio_first_window_t1

0x9dc9,	// (0x00058204) popup_call_audio_first_window_t4_ParamLimits

0x9dc9,	// (0x00058204) popup_call_audio_first_window_t4

0x9e55,	// (0x00058290) popup_call_audio_first_window_t5_ParamLimits

0x9e55,	// (0x00058290) popup_call_audio_first_window_t5

0x0002,

0xf0f5,	// (0x0005d530) popup_call_audio_first_window_t_ParamLimits

0xf0f5,	// (0x0005d530) popup_call_audio_first_window_t

0x9e84,	// (0x000582bf) bg_popup_call_pane_cp02

0x9e8e,	// (0x000582c9) call_type_pane_cp023

0x9e96,	// (0x000582d1) popup_call_audio_wait_window_g1

0x9e9e,	// (0x000582d9) popup_call_audio_wait_window_g2

0x0001,

0xf0fc,	// (0x0005d537) popup_call_audio_wait_window_g

0x9ea6,	// (0x000582e1) popup_call_audio_wait_window_t3

0x9eb4,	// (0x000582ef) bg_popup_call_pane_cp03_ParamLimits

0x9eb4,	// (0x000582ef) bg_popup_call_pane_cp03

0x9f14,	// (0x0005834f) call_thumbnail_pane_cp011_ParamLimits

0x9f14,	// (0x0005834f) call_thumbnail_pane_cp011

0x9f20,	// (0x0005835b) call_type_pane_cp034_ParamLimits

0x9f20,	// (0x0005835b) call_type_pane_cp034

0x9f5c,	// (0x00058397) popup_call_audio_second_window_g1_ParamLimits

0x9f5c,	// (0x00058397) popup_call_audio_second_window_g1

0x9f98,	// (0x000583d3) popup_call_audio_second_window_g2_ParamLimits

0x9f98,	// (0x000583d3) popup_call_audio_second_window_g2

0x0001,

0xf101,	// (0x0005d53c) popup_call_audio_second_window_g_ParamLimits

0xf101,	// (0x0005d53c) popup_call_audio_second_window_g

0x9fd4,	// (0x0005840f) popup_call_audio_second_window_t1_ParamLimits

0x9fd4,	// (0x0005840f) popup_call_audio_second_window_t1

0xa055,	// (0x00058490) popup_call_audio_second_window_t2_ParamLimits

0xa055,	// (0x00058490) popup_call_audio_second_window_t2

0xa08b,	// (0x000584c6) popup_call_audio_second_window_t3_ParamLimits

0xa08b,	// (0x000584c6) popup_call_audio_second_window_t3

0x0002,

0xf106,	// (0x0005d541) popup_call_audio_second_window_t_ParamLimits

0xf106,	// (0x0005d541) popup_call_audio_second_window_t

0x9e84,	// (0x000582bf) bg_popup_call_pane_cp04

0xa0c1,	// (0x000584fc) list_conf_pane

0xa0c9,	// (0x00058504) popup_call_audio_conf_window_t1

0xa0d7,	// (0x00058512) call_thumbnail_pane_g1

0xa0df,	// (0x0005851a) bg_pinb_pane_ParamLimits

0xa0df,	// (0x0005851a) bg_pinb_pane

0xa0ed,	// (0x00058528) find_pinb_pane

0xa0f6,	// (0x00058531) listscroll_pinb_pane_ParamLimits

0xa0f6,	// (0x00058531) listscroll_pinb_pane

0xa105,	// (0x00058540) pinb_bg_pane_g1

0x0e47,	// (0x0004f282) pinb_bg_pane_g2

0x0e53,	// (0x0004f28e) pinb_bg_pane_g3

0x0e5f,	// (0x0004f29a) pinb_bg_pane_g4

0x0e6b,	// (0x0004f2a6) pinb_bg_pane_g5

0x0e77,	// (0x0004f2b2) pinb_bg_pane_g6

0x0e82,	// (0x0004f2bd) pinb_bg_pane_g7

0x0e8d,	// (0x0004f2c8) pinb_bg_pane_g8

0x0e98,	// (0x0004f2d3) pinb_bg_pane_g9

0x0ea2,	// (0x0004f2dd) pinb_bg_pane_g10

0x0009,

0xf10d,	// (0x0005d548) pinb_bg_pane_g

0x0ebf,	// (0x0004f2fa) grid_pinb_pane

0x0eca,	// (0x0004f305) list_pinb_pane

0x0ed5,	// (0x0004f310) scroll_pane_cp01_ParamLimits

0x0ed5,	// (0x0004f310) scroll_pane_cp01

0xa10f,	// (0x0005854a) find_pinb_pane_g1_ParamLimits

0xa10f,	// (0x0005854a) find_pinb_pane_g1

0xa127,	// (0x00058562) find_pinb_pane_t1

0xa139,	// (0x00058574) find_pinb_pane_t2

0x0001,

0xf127,	// (0x0005d562) find_pinb_pane_t

0xa14e,	// (0x00058589) input_focus_pane_cp01_ParamLimits

0xa14e,	// (0x00058589) input_focus_pane_cp01

0x0ee7,	// (0x0004f322) cell_pinb_pane_ParamLimits

0x0ee7,	// (0x0004f322) cell_pinb_pane

0x0f09,	// (0x0004f344) cell_pinb_pane_g1_ParamLimits

0x0f09,	// (0x0004f344) cell_pinb_pane_g1

0x0f1e,	// (0x0004f359) cell_pinb_pane_g2_ParamLimits

0x0f1e,	// (0x0004f359) cell_pinb_pane_g2

0xa15a,	// (0x00058595) cell_pinb_pane_g3_ParamLimits

0xa15a,	// (0x00058595) cell_pinb_pane_g3

0x0002,

0xf12c,	// (0x0005d567) cell_pinb_pane_g_ParamLimits

0xf12c,	// (0x0005d567) cell_pinb_pane_g

0x9e84,	// (0x000582bf) grid_highlight_pane_cp01

0x0f2a,	// (0x0004f365) list_pinb_item_pane_ParamLimits

0x0f2a,	// (0x0004f365) list_pinb_item_pane

0x9e84,	// (0x000582bf) list_highlight_pane_cp02

0x0f3c,	// (0x0004f377) list_pinb_item_pane_g1_ParamLimits

0x0f3c,	// (0x0004f377) list_pinb_item_pane_g1

0x0f49,	// (0x0004f384) list_pinb_item_pane_g2_ParamLimits

0x0f49,	// (0x0004f384) list_pinb_item_pane_g2

0x0f55,	// (0x0004f390) list_pinb_item_pane_g3_ParamLimits

0x0f55,	// (0x0004f390) list_pinb_item_pane_g3

0x0f66,	// (0x0004f3a1) list_pinb_item_pane_g4_ParamLimits

0x0f66,	// (0x0004f3a1) list_pinb_item_pane_g4

0x0003,

0xf133,	// (0x0005d56e) list_pinb_item_pane_g_ParamLimits

0xf133,	// (0x0005d56e) list_pinb_item_pane_g

0x0f72,	// (0x0004f3ad) list_pinb_item_pane_t1_ParamLimits

0x0f72,	// (0x0004f3ad) list_pinb_item_pane_t1

0x0fa7,	// (0x0004f3e2) calc_display_pane

0x0fcf,	// (0x0004f40a) calc_paper_pane

0x0ff2,	// (0x0004f42d) grid_calc_pane

0x9e84,	// (0x000582bf) bg_list_pane_cp01

0x1020,	// (0x0004f45b) clock_g1

0x1028,	// (0x0004f463) clock_g2

0x0001,

0xf13c,	// (0x0005d577) clock_g

0x1030,	// (0x0004f46b) clock_t1_ParamLimits

0x1030,	// (0x0004f46b) clock_t1

0x1045,	// (0x0004f480) clock_t2_ParamLimits

0x1045,	// (0x0004f480) clock_t2

0x1057,	// (0x0004f492) clock_t3_ParamLimits

0x1057,	// (0x0004f492) clock_t3

0x1069,	// (0x0004f4a4) clock_t4_ParamLimits

0x1069,	// (0x0004f4a4) clock_t4

0x107b,	// (0x0004f4b6) clock_t5_ParamLimits

0x107b,	// (0x0004f4b6) clock_t5

0x1090,	// (0x0004f4cb) clock_t6_ParamLimits

0x1090,	// (0x0004f4cb) clock_t6

0x10a2,	// (0x0004f4dd) clock_t7_ParamLimits

0x10a2,	// (0x0004f4dd) clock_t7

0x10b4,	// (0x0004f4ef) clock_t8_ParamLimits

0x10b4,	// (0x0004f4ef) clock_t8

0x10c8,	// (0x0004f503) clock_t9_ParamLimits

0x10c8,	// (0x0004f503) clock_t9

0x0008,

0xf141,	// (0x0005d57c) clock_t_ParamLimits

0xf141,	// (0x0005d57c) clock_t

0xa16e,	// (0x000585a9) popup_clock_analogue_window_cp02

0xa16e,	// (0x000585a9) popup_clock_digital_window_cp01

0xa176,	// (0x000585b1) listscroll_help_pane

0x9e84,	// (0x000582bf) phob_pre_status_pane

0xa180,	// (0x000585bb) grid_qdial_pane

0xa0df,	// (0x0005851a) listscroll_mce_pane

0xa0df,	// (0x0005851a) bg_notes_pane

0xa18a,	// (0x000585c5) list_notes_pane

0x10de,	// (0x0004f519) scroll_pane_cp06

0xa198,	// (0x000585d3) bg_calc_paper_pane

0xa1ac,	// (0x000585e7) list_calc_pane

0xa1c6,	// (0x00058601) bg_calc_display_pane

0x10f2,	// (0x0004f52d) calc_display_pane_t1

0x1104,	// (0x0004f53f) calc_display_pane_t2

0xa1d2,	// (0x0005860d) calc_display_pane_t3

0x0002,

0xf154,	// (0x0005d58f) calc_display_pane_t

0x1116,	// (0x0004f551) cell_calc_pane_ParamLimits

0x1116,	// (0x0004f551) cell_calc_pane

0xa1e4,	// (0x0005861f) bg_calc_paper_pane_g1

0xa1f0,	// (0x0005862b) bg_calc_paper_pane_g2

0xa1fc,	// (0x00058637) bg_calc_paper_pane_g3

0xa208,	// (0x00058643) bg_calc_paper_pane_g4

0xa214,	// (0x0005864f) bg_calc_paper_pane_g5

0x1153,	// (0x0004f58e) bg_calc_paper_pane_g6

0x1166,	// (0x0004f5a1) bg_calc_paper_pane_g7

0x1179,	// (0x0004f5b4) bg_calc_paper_pane_g8

0x0007,

0xf15b,	// (0x0005d596) bg_calc_paper_pane_g

0x118a,	// (0x0004f5c5) calc_bg_paper_pane_g9

0x119b,	// (0x0004f5d6) list_calc_item_pane_ParamLimits

0x119b,	// (0x0004f5d6) list_calc_item_pane

0xa220,	// (0x0005865b) list_calc_item_pane_g1

0xa22d,	// (0x00058668) list_calc_item_pane_t1_ParamLimits

0xa22d,	// (0x00058668) list_calc_item_pane_t1

0x11b3,	// (0x0004f5ee) list_calc_item_pane_t2_ParamLimits

0x11b3,	// (0x0004f5ee) list_calc_item_pane_t2

0x0001,

0xf16c,	// (0x0005d5a7) list_calc_item_pane_t_ParamLimits

0xf16c,	// (0x0005d5a7) list_calc_item_pane_t

0xa23f,	// (0x0005867a) cell_calc_pane_g1

0xa249,	// (0x00058684) grid_highlight_pane_cp02

0xa26b,	// (0x000586a6) bg_calc_display_pane_g1

0xa274,	// (0x000586af) bg_calc_display_pane_g2

0xa27e,	// (0x000586b9) bg_calc_display_pane_g3

0x0002,

0xf176,	// (0x0005d5b1) bg_calc_display_pane_g

0x11e5,	// (0x0004f620) cell_qdial_pane_ParamLimits

0x11e5,	// (0x0004f620) cell_qdial_pane

0x11f9,	// (0x0004f634) cell_qdial_pane_g1_ParamLimits

0x11f9,	// (0x0004f634) cell_qdial_pane_g1

0x120f,	// (0x0004f64a) cell_qdial_pane_g2_ParamLimits

0x120f,	// (0x0004f64a) cell_qdial_pane_g2

0xa287,	// (0x000586c2) cell_qdial_pane_g3_ParamLimits

0xa287,	// (0x000586c2) cell_qdial_pane_g3

0x0003,

0xf17d,	// (0x0005d5b8) cell_qdial_pane_g_ParamLimits

0xf17d,	// (0x0005d5b8) cell_qdial_pane_g

0x1236,	// (0x0004f671) cell_qdial_pane_t1_ParamLimits

0x1236,	// (0x0004f671) cell_qdial_pane_t1

0x124e,	// (0x0004f689) cell_qdial_pane_t2_ParamLimits

0x124e,	// (0x0004f689) cell_qdial_pane_t2

0x1261,	// (0x0004f69c) cell_qdial_pane_t3_ParamLimits

0x1261,	// (0x0004f69c) cell_qdial_pane_t3

0x0002,

0xf186,	// (0x0005d5c1) cell_qdial_pane_t_ParamLimits

0xf186,	// (0x0005d5c1) cell_qdial_pane_t

0x9e84,	// (0x000582bf) grid_highlight_pane_cp04

0xa293,	// (0x000586ce) thumbnail_qdial_pane_ParamLimits

0xa293,	// (0x000586ce) thumbnail_qdial_pane

0xa2ef,	// (0x0005872a) list_help_pane

0xa2f8,	// (0x00058733) scroll_pane_cp02

0x1274,	// (0x0004f6af) help_list_pane_t1_ParamLimits

0x1274,	// (0x0004f6af) help_list_pane_t1

0xa301,	// (0x0005873c) bg_notes_pane_g2

0xa309,	// (0x00058744) bg_notes_pane_g3

0xa311,	// (0x0005874c) notes_bg_pane_g1

0xa319,	// (0x00058754) notes_bg_pane_g4

0xa321,	// (0x0005875c) notes_bg_pane_g5

0xa329,	// (0x00058764) notes_bg_pane_g6

0xa331,	// (0x0005876c) notes_bg_pane_g7

0xa339,	// (0x00058774) notes_bg_pane_g8

0xa341,	// (0x0005877c) notes_bg_pane_g9

0x0006,

0xf1a4,	// (0x0005d5df) notes_bg_pane_g

0x1292,	// (0x0004f6cd) list_notes_text_pane_ParamLimits

0x1292,	// (0x0004f6cd) list_notes_text_pane

0xa349,	// (0x00058784) list_notes_text_pane_g1

0xfc0e,	// (0x0004e049) list_notes_text_pane_t1

0x12a6,	// (0x0004f6e1) listscroll_cale_week_pane

0x12dc,	// (0x0004f717) bg_cale_heading_pane

0xa363,	// (0x0005879e) bg_cale_pane_cp01

0x1305,	// (0x0004f740) cale_week_corner_pane

0x1324,	// (0x0004f75f) cale_week_day_heading_pane

0x1352,	// (0x0004f78d) cale_week_scroll_pane_g1

0x1376,	// (0x0004f7b1) cale_week_scroll_pane_g2

0x138e,	// (0x0004f7c9) cale_week_scroll_pane_g3

0x13a6,	// (0x0004f7e1) cale_week_scroll_pane_g4

0x13c2,	// (0x0004f7fd) cale_week_scroll_pane_g5

0x13e2,	// (0x0004f81d) cale_week_scroll_pane_g6

0x1402,	// (0x0004f83d) cale_week_scroll_pane_g7

0x1426,	// (0x0004f861) cale_week_scroll_pane_g8

0x144a,	// (0x0004f885) cale_week_scroll_pane_g9

0x1467,	// (0x0004f8a2) cale_week_scroll_pane_g10

0x1484,	// (0x0004f8bf) cale_week_scroll_pane_g11

0x14a1,	// (0x0004f8dc) cale_week_scroll_pane_g12

0x14be,	// (0x0004f8f9) cale_week_scroll_pane_g13

0x14db,	// (0x0004f916) cale_week_scroll_pane_g14

0x1504,	// (0x0004f93f) cale_week_scroll_pane_g15

0x000e,

0xf1b3,	// (0x0005d5ee) cale_week_scroll_pane_g

0x152d,	// (0x0004f968) cale_week_time_pane

0x1551,	// (0x0004f98c) grid_cale_week_pane

0xa393,	// (0x000587ce) scroll_pane_cp08

0x1588,	// (0x0004f9c3) cell_cale_week_pane_ParamLimits

0x1588,	// (0x0004f9c3) cell_cale_week_pane

0x1618,	// (0x0004fa53) cale_week_day_heading_pane_t1

0x1662,	// (0x0004fa9d) cale_week_day_heading_pane_t2

0x16b1,	// (0x0004faec) cale_week_day_heading_pane_t3

0x1700,	// (0x0004fb3b) cale_week_day_heading_pane_t4

0x174f,	// (0x0004fb8a) cale_week_day_heading_pane_t5

0x17a2,	// (0x0004fbdd) cale_week_day_heading_pane_t6

0x17f9,	// (0x0004fc34) cale_week_day_heading_pane_t7

0x0006,

0xf1d2,	// (0x0005d60d) cale_week_day_heading_pane_t

0xa3b5,	// (0x000587f0) bg_cale_side_pane

0x1843,	// (0x0004fc7e) cale_week_time_pane_t1

0x187d,	// (0x0004fcb8) cale_week_time_pane_t2

0x18b7,	// (0x0004fcf2) cale_week_time_pane_t3

0x18f1,	// (0x0004fd2c) cale_week_time_pane_t4

0x192b,	// (0x0004fd66) cale_week_time_pane_t5

0x1965,	// (0x0004fda0) cale_week_time_pane_t6

0x199f,	// (0x0004fdda) cale_week_time_pane_t7

0x19d9,	// (0x0004fe14) cale_week_time_pane_t8

0x0007,

0xf1e1,	// (0x0005d61c) cale_week_time_pane_t

0x1a19,	// (0x0004fe54) cell_cale_week_pane_g2

0x1a38,	// (0x0004fe73) cell_cale_week_pane_g3_ParamLimits

0x1a38,	// (0x0004fe73) cell_cale_week_pane_g3

0xa3c3,	// (0x000587fe) grid_highlight_pane_cp07

0xa3cb,	// (0x00058806) listscroll_gms_pane

0xa3d5,	// (0x00058810) grid_gms_pane

0xa3de,	// (0x00058819) listscroll_gms_pane_g1

0xa3e6,	// (0x00058821) listscroll_gms_pane_g2

0x0001,

0xf1f2,	// (0x0005d62d) listscroll_gms_pane_g

0x1a50,	// (0x0004fe8b) scroll_pane_cp010

0x1a5b,	// (0x0004fe96) cell_gms_pane_ParamLimits

0x1a5b,	// (0x0004fe96) cell_gms_pane

0x1a75,	// (0x0004feb0) cell_gms_pane_g1

0xa3ee,	// (0x00058829) cell_gms_pane_g2

0xa3f6,	// (0x00058831) cell_gms_pane_g3

0xa3ff,	// (0x0005883a) cell_gms_pane_g4

0x0003,

0xf1f7,	// (0x0005d632) cell_gms_pane_g

0xa408,	// (0x00058843) grid_highlight_pane_cp09

0x40db,	// (0x00052516) phob_pre_status_pane_g1

0x40e3,	// (0x0005251e) phob_pre_status_pane_g2

0x40eb,	// (0x00052526) phob_pre_status_pane_g3

0x40f3,	// (0x0005252e) phob_pre_status_pane_g4

0x0004,

0xf5ed,	// (0x0005da28) phob_pre_status_pane_g

0x4103,	// (0x0005253e) phob_pre_status_pane_t1

0x4113,	// (0x0005254e) phob_pre_status_pane_t2

0x4123,	// (0x0005255e) phob_pre_status_pane_t3

0x0002,

0xf5f8,	// (0x0005da33) phob_pre_status_pane_t

0x9e84,	// (0x000582bf) bg_list_pane_cp05

0x1a85,	// (0x0004fec0) grid_vorec_pane

0x1a91,	// (0x0004fecc) vorec_t1

0x1a9f,	// (0x0004feda) vorec_t2

0x1aad,	// (0x0004fee8) vorec_t3

0x1abb,	// (0x0004fef6) vorec_t4

0x1ac9,	// (0x0004ff04) vorec_t5

0xa410,	// (0x0005884b) vorec_t6

0x0006,

0xf200,	// (0x0005d63b) vorec_t

0x1ae5,	// (0x0004ff20) wait_bar_pane_cp01

0x1aed,	// (0x0004ff28) cell_vorec_pane_ParamLimits

0x1aed,	// (0x0004ff28) cell_vorec_pane

0xa41e,	// (0x00058859) cell_vorec_pane_g1

0x9e84,	// (0x000582bf) grid_highlight_pane_cp05

0x1b18,	// (0x0004ff53) cams_zoom_pane

0x1b27,	// (0x0004ff62) image_vga_pane

0x1b41,	// (0x0004ff7c) main_camera_pane_g1

0x1b53,	// (0x0004ff8e) main_camera_pane_g2

0x1b63,	// (0x0004ff9e) main_camera_pane_g3

0x1b77,	// (0x0004ffb2) main_camera_pane_g4

0x1b8b,	// (0x0004ffc6) main_camera_pane_g5

0x1b9f,	// (0x0004ffda) main_camera_pane_g6

0x1bb3,	// (0x0004ffee) main_camera_pane_g7

0x0007,

0xf20f,	// (0x0005d64a) main_camera_pane_g

0x1bc7,	// (0x00050002) main_camera_pane_t1

0x1bdd,	// (0x00050018) main_camera_pane_t2

0x0001,

0xf220,	// (0x0005d65b) main_camera_pane_t

0x1c1b,	// (0x00050056) cams_zoom_pane_cp_ParamLimits

0x1c1b,	// (0x00050056) cams_zoom_pane_cp

0x1c43,	// (0x0005007e) image_cif_pane_ParamLimits

0x1c43,	// (0x0005007e) image_cif_pane

0x1c7e,	// (0x000500b9) image_subqcif_pane

0x1c88,	// (0x000500c3) main_video_pane_g1_ParamLimits

0x1c88,	// (0x000500c3) main_video_pane_g1

0x1cac,	// (0x000500e7) main_video_pane_g2_ParamLimits

0x1cac,	// (0x000500e7) main_video_pane_g2

0x1ce2,	// (0x0005011d) main_video_pane_g3_ParamLimits

0x1ce2,	// (0x0005011d) main_video_pane_g3

0x1d10,	// (0x0005014b) main_video_pane_g4_ParamLimits

0x1d10,	// (0x0005014b) main_video_pane_g4

0x1d3e,	// (0x00050179) main_video_pane_g5_ParamLimits

0x1d3e,	// (0x00050179) main_video_pane_g5

0xa434,	// (0x0005886f) main_video_pane_g6_ParamLimits

0xa434,	// (0x0005886f) main_video_pane_g6

0x0006,

0xf225,	// (0x0005d660) main_video_pane_g_ParamLimits

0xf225,	// (0x0005d660) main_video_pane_g

0x1d67,	// (0x000501a2) main_video_pane_t1_ParamLimits

0x1d67,	// (0x000501a2) main_video_pane_t1

0xa44e,	// (0x00058889) cams_zoom_pane_g1

0xa457,	// (0x00058892) cams_zoom_pane_g2

0xa460,	// (0x0005889b) cams_zoom_pane_g3

0xa469,	// (0x000588a4) cams_zoom_pane_g4

0x0003,

0xf234,	// (0x0005d66f) cams_zoom_pane_g

0x1dc4,	// (0x000501ff) grid_cams_pane

0x1dde,	// (0x00050219) linegrid_cams_pane

0x1df0,	// (0x0005022b) cell_cams_pane_ParamLimits

0x1df0,	// (0x0005022b) cell_cams_pane

0xa472,	// (0x000588ad) cams_burst_image_pane

0xa47a,	// (0x000588b5) cell_cams_pane_g1

0x9e84,	// (0x000582bf) grid_highlight_pane_cp03

0xa23f,	// (0x0005867a) mp_bg_pane_g1

0x9e84,	// (0x000582bf) bg_list_pane_cp03

0xc719,	// (0x0005ab54) bg_mp_pane

0xc721,	// (0x0005ab5c) grid_mp_pane

0xc729,	// (0x0005ab64) media_player_g1

0xc733,	// (0x0005ab6e) media_player_t1

0xc741,	// (0x0005ab7c) media_player_t2

0xc74f,	// (0x0005ab8a) media_player_t3

0xc75d,	// (0x0005ab98) media_player_t4

0xc76b,	// (0x0005aba6) media_player_t5

0xc779,	// (0x0005abb4) media_player_t6

0xc787,	// (0x0005abc2) media_player_t7

0x0006,

0xf5d7,	// (0x0005da12) media_player_t

0xc795,	// (0x0005abd0) wait_bar_pane_cp02

0xf5bc,	// (0x0005d9f7) main_usb_pane_t

0x40d2,	// (0x0005250d) cell_mp_pane

0xa23f,	// (0x0005867a) cell_mp_pane_g1

0x9e84,	// (0x000582bf) grid_highlight_pane_cp06

0xa482,	// (0x000588bd) grid_skin_colour_pane

0xa48a,	// (0x000588c5) list_highlight_pane_cp03

0x1e36,	// (0x00050271) skin_g1

0xa492,	// (0x000588cd) skin_t1

0xa4a1,	// (0x000588dc) skin_t2

0x0001,

0xf269,	// (0x0005d6a4) skin_t

0x1e3e,	// (0x00050279) cell_skin_colour_pane_ParamLimits

0x1e3e,	// (0x00050279) cell_skin_colour_pane

0xa4af,	// (0x000588ea) cell_skin_colour_pane_g1

0x1eb1,	// (0x000502ec) call_video_g1_ParamLimits

0x1eb1,	// (0x000502ec) call_video_g1

0x1ecd,	// (0x00050308) call_video_g2_ParamLimits

0x1ecd,	// (0x00050308) call_video_g2

0x0001,

0xf26e,	// (0x0005d6a9) call_video_g_ParamLimits

0xf26e,	// (0x0005d6a9) call_video_g

0x1f12,	// (0x0005034d) call_video_uplink_pane_cp1_ParamLimits

0x1f12,	// (0x0005034d) call_video_uplink_pane_cp1

0xa4c1,	// (0x000588fc) call_video_uplink_pane_cp2

0x1fb3,	// (0x000503ee) video_down_crop_pane_ParamLimits

0x1fb3,	// (0x000503ee) video_down_crop_pane

0x209c,	// (0x000504d7) video_down_pane_ParamLimits

0x209c,	// (0x000504d7) video_down_pane

0xa4c9,	// (0x00058904) video_down_subqcif_pane_ParamLimits

0xa4c9,	// (0x00058904) video_down_subqcif_pane

0xa4e3,	// (0x0005891e) video_down_subqcif_pane_cp_ParamLimits

0xa4e3,	// (0x0005891e) video_down_subqcif_pane_cp

0xa50b,	// (0x00058946) im_reading_pane_ParamLimits

0xa50b,	// (0x00058946) im_reading_pane

0x21a5,	// (0x000505e0) im_writing_pane_ParamLimits

0x21a5,	// (0x000505e0) im_writing_pane

0x21c1,	// (0x000505fc) im_reading_pane_t1

0xa525,	// (0x00058960) list_im_pane

0xa536,	// (0x00058971) scroll_pane_cp07

0x21fd,	// (0x00050638) im_writing_pane_t1_ParamLimits

0x21fd,	// (0x00050638) im_writing_pane_t1

0xa54f,	// (0x0005898a) im_writing_pane_t2_ParamLimits

0xa54f,	// (0x0005898a) im_writing_pane_t2

0x0001,

0xf278,	// (0x0005d6b3) im_writing_pane_t_ParamLimits

0xf278,	// (0x0005d6b3) im_writing_pane_t

0x9e84,	// (0x000582bf) input_focus_pane_cp04

0x9e84,	// (0x000582bf) input_focus_pane_cp05

0x2212,	// (0x0005064d) list_im_single_pane_ParamLimits

0x2212,	// (0x0005064d) list_im_single_pane

0x2228,	// (0x00050663) list_single_im_pane_t1

0x4092,	// (0x000524cd) blid_accuracy_pane

0x409a,	// (0x000524d5) blid_compass_pane

0x40a4,	// (0x000524df) main_location_t1

0x40b4,	// (0x000524ef) main_location_t2

0x40c4,	// (0x000524ff) main_location_t3

0x0002,

0xf5e6,	// (0x0005da21) main_location_t

0x9e84,	// (0x000582bf) aid_levels_location

0xa23f,	// (0x0005867a) blid_accuracy_pane_g1

0xa23f,	// (0x0005867a) blid_accuracy_pane_g2

0x0001,

0xf2e1,	// (0x0005d71c) blid_accuracy_pane_g

0xa597,	// (0x000589d2) wml_content_pane

0xac53,	// (0x0005908e) wml_button_pane_ParamLimits

0xac53,	// (0x0005908e) wml_button_pane

0x2237,	// (0x00050672) wml_list_single_large_pane_ParamLimits

0x2237,	// (0x00050672) wml_list_single_large_pane

0x224d,	// (0x00050688) wml_list_single_medium_pane_ParamLimits

0x224d,	// (0x00050688) wml_list_single_medium_pane

0x2264,	// (0x0005069f) wml_list_single_small_pane_ParamLimits

0x2264,	// (0x0005069f) wml_list_single_small_pane

0xac67,	// (0x000590a2) wml_selection_box_pane_ParamLimits

0xac67,	// (0x000590a2) wml_selection_box_pane

0xac7a,	// (0x000590b5) wml_list_single_pane_t1

0xac89,	// (0x000590c4) wml_list_single_medium_pane_t1

0xac98,	// (0x000590d3) wml_list_single_large_pane_t1

0xaca7,	// (0x000590e2) input_focus_pane_cp02_ParamLimits

0xaca7,	// (0x000590e2) input_focus_pane_cp02

0xacba,	// (0x000590f5) wml_selection_box_pane_g1

0xacc3,	// (0x000590fe) wml_selection_box_pane_t1_ParamLimits

0xacc3,	// (0x000590fe) wml_selection_box_pane_t1

0xa0df,	// (0x0005851a) bg_wml_button_pane_ParamLimits

0xa0df,	// (0x0005851a) bg_wml_button_pane

0xacdb,	// (0x00059116) wml_button_pane_g1

0xace3,	// (0x0005911e) wml_button_pane_t1

0xacdb,	// (0x00059116) wml_button_bg_pane_g1

0xacf3,	// (0x0005912e) wml_button_bg_pane_g2

0xacfb,	// (0x00059136) wml_button_bg_pane_g3

0xad03,	// (0x0005913e) wml_button_bg_pane_g4

0xad0b,	// (0x00059146) wml_button_bg_pane_g5

0xad13,	// (0x0005914e) wml_button_bg_pane_g6

0xad1b,	// (0x00059156) wml_button_bg_pane_g7

0xad23,	// (0x0005915e) wml_button_bg_pane_g8

0xad2b,	// (0x00059166) wml_button_bg_pane_g9

0x0008,

0xf27d,	// (0x0005d6b8) wml_button_bg_pane_g

0x2280,	// (0x000506bb) bg_list_pane_cp02

0xad33,	// (0x0005916e) mce_header_pane_ParamLimits

0xad33,	// (0x0005916e) mce_header_pane

0xad49,	// (0x00059184) mce_icon_pane

0xad49,	// (0x00059184) mce_image_pane

0xad52,	// (0x0005918d) mce_text_pane_ParamLimits

0xad52,	// (0x0005918d) mce_text_pane

0x228a,	// (0x000506c5) scroll_pane_cp03

0xac4b,	// (0x00059086) scroll_pane_cp04

0xad65,	// (0x000591a0) scroll_pane_cp05_ParamLimits

0xad65,	// (0x000591a0) scroll_pane_cp05

0x2294,	// (0x000506cf) mce_header_field_pane_ParamLimits

0x2294,	// (0x000506cf) mce_header_field_pane

0x22ad,	// (0x000506e8) mce_header_field_pane_2_ParamLimits

0x22ad,	// (0x000506e8) mce_header_field_pane_2

0x22c3,	// (0x000506fe) mce_header_field_pane_3

0x22cb,	// (0x00050706) list_single_mce_message_pane_ParamLimits

0x22cb,	// (0x00050706) list_single_mce_message_pane

0x22e4,	// (0x0005071f) list_single_mce_smart_pane_ParamLimits

0x22e4,	// (0x0005071f) list_single_mce_smart_pane

0xad71,	// (0x000591ac) input_focus_pane_cp03

0xad7a,	// (0x000591b5) list_header_data_pane

0x2308,	// (0x00050743) mce_header_field_pane_t1

0x2318,	// (0x00050753) list_single_mce_header_pane_ParamLimits

0x2318,	// (0x00050753) list_single_mce_header_pane

0xad82,	// (0x000591bd) list_single_mce_header_pane_t1

0xad91,	// (0x000591cc) list_single_mce_message_pane_g1

0xad99,	// (0x000591d4) list_single_mce_message_pane_t1

0x2352,	// (0x0005078d) bg_cale_heading_pane_cp01_ParamLimits

0x2352,	// (0x0005078d) bg_cale_heading_pane_cp01

0xada7,	// (0x000591e2) bg_cale_pane_cp02_ParamLimits

0xada7,	// (0x000591e2) bg_cale_pane_cp02

0x2399,	// (0x000507d4) cale_month_corner_pane

0x23b8,	// (0x000507f3) cale_month_day_heading_pane_ParamLimits

0x23b8,	// (0x000507f3) cale_month_day_heading_pane

0x2417,	// (0x00050852) cale_month_pane_g1_ParamLimits

0x2417,	// (0x00050852) cale_month_pane_g1

0x2453,	// (0x0005088e) cale_month_pane_g2_ParamLimits

0x2453,	// (0x0005088e) cale_month_pane_g2

0x248f,	// (0x000508ca) cale_month_pane_g3_ParamLimits

0x248f,	// (0x000508ca) cale_month_pane_g3

0x24e3,	// (0x0005091e) cale_month_pane_g4_ParamLimits

0x24e3,	// (0x0005091e) cale_month_pane_g4

0x2537,	// (0x00050972) cale_month_pane_g5_ParamLimits

0x2537,	// (0x00050972) cale_month_pane_g5

0x2593,	// (0x000509ce) cale_month_pane_g6_ParamLimits

0x2593,	// (0x000509ce) cale_month_pane_g6

0x25f7,	// (0x00050a32) cale_month_pane_g7_ParamLimits

0x25f7,	// (0x00050a32) cale_month_pane_g7

0x2663,	// (0x00050a9e) cale_month_pane_g8_ParamLimits

0x2663,	// (0x00050a9e) cale_month_pane_g8

0x26cf,	// (0x00050b0a) cale_month_pane_g9_ParamLimits

0x26cf,	// (0x00050b0a) cale_month_pane_g9

0x272d,	// (0x00050b68) cale_month_pane_g10_ParamLimits

0x272d,	// (0x00050b68) cale_month_pane_g10

0x277f,	// (0x00050bba) cale_month_pane_g11_ParamLimits

0x277f,	// (0x00050bba) cale_month_pane_g11

0x27d1,	// (0x00050c0c) cale_month_pane_g12_ParamLimits

0x27d1,	// (0x00050c0c) cale_month_pane_g12

0x2829,	// (0x00050c64) cale_month_pane_g13_ParamLimits

0x2829,	// (0x00050c64) cale_month_pane_g13

0x000c,

0xf290,	// (0x0005d6cb) cale_month_pane_g_ParamLimits

0xf290,	// (0x0005d6cb) cale_month_pane_g

0x2881,	// (0x00050cbc) cale_month_week_pane

0x28a5,	// (0x00050ce0) grid_cale_month_pane_ParamLimits

0x28a5,	// (0x00050ce0) grid_cale_month_pane

0x28fb,	// (0x00050d36) cale_month_day_heading_pane_t1

0x2981,	// (0x00050dbc) cale_month_day_heading_pane_t2

0x2a12,	// (0x00050e4d) cale_month_day_heading_pane_t3

0x2aa3,	// (0x00050ede) cale_month_day_heading_pane_t4

0x2b34,	// (0x00050f6f) cale_month_day_heading_pane_t5

0x2bd5,	// (0x00051010) cale_month_day_heading_pane_t6

0x2c7a,	// (0x000510b5) cale_month_day_heading_pane_t7

0x0006,

0xf2ab,	// (0x0005d6e6) cale_month_day_heading_pane_t

0xa3b5,	// (0x000587f0) bg_cale_side_pane_cp01

0x2d23,	// (0x0005115e) cale_month_week_pane_t1

0x2d3c,	// (0x00051177) cale_month_week_pane_t2

0x2d55,	// (0x00051190) cale_month_week_pane_t3

0x2d6e,	// (0x000511a9) cale_month_week_pane_t4

0x2d87,	// (0x000511c2) cale_month_week_pane_t5

0x2da0,	// (0x000511db) cale_month_week_pane_t6

0x0005,

0xf2ba,	// (0x0005d6f5) cale_month_week_pane_t

0x2dbf,	// (0x000511fa) cell_cale_month_pane_ParamLimits

0x2dbf,	// (0x000511fa) cell_cale_month_pane

0xa5b4,	// (0x000589ef) cell_cale_month_pane_g1

0x2ee9,	// (0x00051324) cell_cale_month_pane_t1_ParamLimits

0x2ee9,	// (0x00051324) cell_cale_month_pane_t1

0xa3c3,	// (0x000587fe) grid_highlight_pane_cp08

0xa23f,	// (0x0005867a) main_smil_g1

0x2f09,	// (0x00051344) smil_status_pane

0xade6,	// (0x00059221) smil_text_pane

0xc637,	// (0x0005aa72) bg_popup_call3_rect_pane_g8

0xc63f,	// (0x0005aa7a) bg_popup_call3_rect_pane_g9

0x0008,

0xf57a,	// (0x0005d9b5) bg_popup_call3_rect_pane_g

0xc8cd,	// (0x0005ad08) smil_status_volume_pane_g1

0x2f1c,	// (0x00051357) smil_status_pane_t1

0xa6b2,	// (0x00058aed) volume_smil_pane

0xadf0,	// (0x0005922b) list_smil_text_pane

0x2f35,	// (0x00051370) scroll_pane_cp011

0x2f40,	// (0x0005137b) smil_text_list_pane_t1_ParamLimits

0x2f40,	// (0x0005137b) smil_text_list_pane_t1

0xa5c0,	// (0x000589fb) aid_volume_smil_ParamLimits

0xa5c0,	// (0x000589fb) aid_volume_smil

0xa23f,	// (0x0005867a) smil_volume_pane_g1

0xa23f,	// (0x0005867a) smil_volume_pane_g2

0x0001,

0xf2e1,	// (0x0005d71c) smil_volume_pane_g

0x12a6,	// (0x0004f6e1) listscroll_cale_day_pane

0xadfa,	// (0x00059235) bg_cale_pane

0xae12,	// (0x0005924d) list_cale_pane

0xae35,	// (0x00059270) scroll_pane_cp09

0xae46,	// (0x00059281) cale_bg_pane_g1

0xae4e,	// (0x00059289) cale_bg_pane_g2

0xae56,	// (0x00059291) cale_bg_pane_g3

0xae5e,	// (0x00059299) cale_bg_pane_g4

0xae66,	// (0x000592a1) cale_bg_pane_g5

0xae6e,	// (0x000592a9) cale_bg_pane_g6

0xae76,	// (0x000592b1) cale_bg_pane_g7

0xae7e,	// (0x000592b9) cale_bg_pane_g8

0xae86,	// (0x000592c1) cale_bg_pane_g9

0x0008,

0xf2e6,	// (0x0005d721) cale_bg_pane_g

0x2f79,	// (0x000513b4) list_cale_time_pane_ParamLimits

0x2f79,	// (0x000513b4) list_cale_time_pane

0xae96,	// (0x000592d1) list_cale_time_pane_g1_ParamLimits

0xae96,	// (0x000592d1) list_cale_time_pane_g1

0xaea2,	// (0x000592dd) list_cale_time_pane_g2_ParamLimits

0xaea2,	// (0x000592dd) list_cale_time_pane_g2

0x2f8d,	// (0x000513c8) list_cale_time_pane_g3_ParamLimits

0x2f8d,	// (0x000513c8) list_cale_time_pane_g3

0x2f9b,	// (0x000513d6) list_cale_time_pane_g4_ParamLimits

0x2f9b,	// (0x000513d6) list_cale_time_pane_g4

0x2fa9,	// (0x000513e4) list_cale_time_pane_g5_ParamLimits

0x2fa9,	// (0x000513e4) list_cale_time_pane_g5

0x0005,

0xf2f9,	// (0x0005d734) list_cale_time_pane_g_ParamLimits

0xf2f9,	// (0x0005d734) list_cale_time_pane_g

0xaebc,	// (0x000592f7) list_cale_time_pane_t1_ParamLimits

0xaebc,	// (0x000592f7) list_cale_time_pane_t1

0xaee4,	// (0x0005931f) list_cale_time_pane_t2_ParamLimits

0xaee4,	// (0x0005931f) list_cale_time_pane_t2

0x3277,	// (0x000516b2) aid_blid_cardinal_pane

0x32b5,	// (0x000516f0) compass_pane_t4

0xaf0c,	// (0x00059347) list_cale_time_pane_t4_ParamLimits

0xaf0c,	// (0x00059347) list_cale_time_pane_t4

0x32c3,	// (0x000516fe) compass_pane_t5

0x32d1,	// (0x0005170c) compass_pane_t6

0x32df,	// (0x0005171a) compass_pane_t7

0xb326,	// (0x00059761) navi_pane_cc_t1

0xb47b,	// (0x000598b6) aid_phob_thumbnail_center_pane

0x3a5d,	// (0x00051e98) main_postcard_pane_g4_ParamLimits

0x0002,

0xf306,	// (0x0005d741) list_cale_time_pane_t_ParamLimits

0xf306,	// (0x0005d741) list_cale_time_pane_t

0x9adb,	// (0x00057f16) bg_popup_window_pane_cp02_ParamLimits

0x9adb,	// (0x00057f16) bg_popup_window_pane_cp02

0xaf34,	// (0x0005936f) heading_pane_cp01_ParamLimits

0xaf34,	// (0x0005936f) heading_pane_cp01

0xaf40,	// (0x0005937b) loc_req_pane_ParamLimits

0xaf40,	// (0x0005937b) loc_req_pane

0xaf50,	// (0x0005938b) loc_type_pane_ParamLimits

0xaf50,	// (0x0005938b) loc_type_pane

0xaf62,	// (0x0005939d) loc_type_pane_t1_ParamLimits

0xaf62,	// (0x0005939d) loc_type_pane_t1

0xaf74,	// (0x000593af) loc_type_pane_t2_ParamLimits

0xaf74,	// (0x000593af) loc_type_pane_t2

0xaf86,	// (0x000593c1) loc_type_pane_t3_ParamLimits

0xaf86,	// (0x000593c1) loc_type_pane_t3

0x0002,

0xf30d,	// (0x0005d748) loc_type_pane_t_ParamLimits

0xf30d,	// (0x0005d748) loc_type_pane_t

0xaf98,	// (0x000593d3) list_loc_req_pane

0xafa2,	// (0x000593dd) scroll_pane_cp012

0x2fb7,	// (0x000513f2) list_single_loc_request_popup_menu_pane_ParamLimits

0x2fb7,	// (0x000513f2) list_single_loc_request_popup_menu_pane

0xafad,	// (0x000593e8) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xafad,	// (0x000593e8) list_single_loc_request_popup_menu_pane_g1

0xafb9,	// (0x000593f4) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xafb9,	// (0x000593f4) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf314,	// (0x0005d74f) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf314,	// (0x0005d74f) list_single_loc_request_popup_menu_pane_g

0xafc5,	// (0x00059400) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xafc5,	// (0x00059400) list_single_loc_request_popup_menu_pane_t1

0xa0df,	// (0x0005851a) bg_popup_window_pane_cp03_ParamLimits

0xa0df,	// (0x0005851a) bg_popup_window_pane_cp03

0xafdb,	// (0x00059416) heading_loc_req_pane_ParamLimits

0xafdb,	// (0x00059416) heading_loc_req_pane

0x2fc4,	// (0x000513ff) popup_dyc_status_message_window_g1_ParamLimits

0x2fc4,	// (0x000513ff) popup_dyc_status_message_window_g1

0x2fd8,	// (0x00051413) popup_dyc_status_message_window_t1_ParamLimits

0x2fd8,	// (0x00051413) popup_dyc_status_message_window_t1

0x2fed,	// (0x00051428) popup_dyc_status_message_window_t2_ParamLimits

0x2fed,	// (0x00051428) popup_dyc_status_message_window_t2

0x3002,	// (0x0005143d) popup_dyc_status_message_window_t3_ParamLimits

0x3002,	// (0x0005143d) popup_dyc_status_message_window_t3

0x0002,

0xf319,	// (0x0005d754) popup_dyc_status_message_window_t_ParamLimits

0xf319,	// (0x0005d754) popup_dyc_status_message_window_t

0x9e84,	// (0x000582bf) bg_heading_pane_cp01

0xafe7,	// (0x00059422) heading_loc_req_pane_g1

0xafef,	// (0x0005942a) heading_loc_req_pane_g2

0xaff7,	// (0x00059432) heading_loc_req_pane_g3

0x0002,

0xf320,	// (0x0005d75b) heading_loc_req_pane_g

0xafff,	// (0x0005943a) heading_loc_req_pane_t1

0xb00f,	// (0x0005944a) bg_popup_sub_pane_cp01_ParamLimits

0xb00f,	// (0x0005944a) bg_popup_sub_pane_cp01

0xb01d,	// (0x00059458) popup_cale_events_window_g1_ParamLimits

0xb01d,	// (0x00059458) popup_cale_events_window_g1

0xb03d,	// (0x00059478) popup_cale_events_window_g2_ParamLimits

0xb03d,	// (0x00059478) popup_cale_events_window_g2

0x0001,

0xf354,	// (0x0005d78f) popup_cale_events_window_g_ParamLimits

0xf354,	// (0x0005d78f) popup_cale_events_window_g

0xb05d,	// (0x00059498) popup_cale_events_window_t1_ParamLimits

0xb05d,	// (0x00059498) popup_cale_events_window_t1

0xb06f,	// (0x000594aa) popup_cale_events_window_t2_ParamLimits

0xb06f,	// (0x000594aa) popup_cale_events_window_t2

0xb0ad,	// (0x000594e8) popup_cale_events_window_t3_ParamLimits

0xb0ad,	// (0x000594e8) popup_cale_events_window_t3

0xb0e7,	// (0x00059522) popup_cale_events_window_t4_ParamLimits

0xb0e7,	// (0x00059522) popup_cale_events_window_t4

0x0003,

0xf359,	// (0x0005d794) popup_cale_events_window_t_ParamLimits

0xf359,	// (0x0005d794) popup_cale_events_window_t

0x3036,	// (0x00051471) call_type_pane

0x3046,	// (0x00051481) popup_call_status_window_g1

0x305a,	// (0x00051495) popup_call_status_window_g2

0x306e,	// (0x000514a9) popup_call_status_window_g3

0x0002,

0xf362,	// (0x0005d79d) popup_call_status_window_g

0xb11d,	// (0x00059558) call_type_pane_g1

0xb126,	// (0x00059561) call_type_pane_g2

0x0001,

0xf369,	// (0x0005d7a4) call_type_pane_g

0x9e84,	// (0x000582bf) bg_popup_sub_pane_cp02

0xb12f,	// (0x0005956a) listscroll_popup_wml_pane

0xb137,	// (0x00059572) list_wml_pane

0xb141,	// (0x0005957c) scroll_pane_cp013

0xb14c,	// (0x00059587) list_single_graphic_popup_wml_pane_ParamLimits

0xb14c,	// (0x00059587) list_single_graphic_popup_wml_pane

0xa23f,	// (0x0005867a) list_single_graphic_popup_wml_pane_g1

0xb160,	// (0x0005959b) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf36e,	// (0x0005d7a9) list_single_graphic_popup_wml_pane_g

0xb168,	// (0x000595a3) list_single_graphic_popup_wml_pane_t1

0xb17e,	// (0x000595b9) aid_call_pane

0xa0d7,	// (0x00058512) popup_clock_analogue_window_g1

0xa0d7,	// (0x00058512) popup_clock_analogue_window_g2

0xa5e2,	// (0x00058a1d) popup_clock_analogue_window_g3

0xa5e2,	// (0x00058a1d) popup_clock_analogue_window_g4

0xa23f,	// (0x0005867a) popup_clock_analogue_window_g5

0x0004,

0xf373,	// (0x0005d7ae) popup_clock_analogue_window_g

0xa5ea,	// (0x00058a25) popup_clock_analogue_window_t1

0xa5f8,	// (0x00058a33) clock_digital_number_pane_ParamLimits

0xa5f8,	// (0x00058a33) clock_digital_number_pane

0xa604,	// (0x00058a3f) clock_digital_number_pane_cp02_ParamLimits

0xa604,	// (0x00058a3f) clock_digital_number_pane_cp02

0xa610,	// (0x00058a4b) clock_digital_number_pane_cp03_ParamLimits

0xa610,	// (0x00058a4b) clock_digital_number_pane_cp03

0xa61c,	// (0x00058a57) clock_digital_number_pane_cp04_ParamLimits

0xa61c,	// (0x00058a57) clock_digital_number_pane_cp04

0xa628,	// (0x00058a63) clock_digital_separator_pane_ParamLimits

0xa628,	// (0x00058a63) clock_digital_separator_pane

0xa634,	// (0x00058a6f) popup_clock_digital_window_t1

0xa23f,	// (0x0005867a) clock_digital_number_pane_g1

0xa23f,	// (0x0005867a) clock_digital_number_pane_g2

0x0001,

0xf2e1,	// (0x0005d71c) clock_digital_number_pane_g

0xa23f,	// (0x0005867a) clock_digital_separator_pane_g1

0xa23f,	// (0x0005867a) clock_digital_separator_pane_g2

0x0001,

0xf2e1,	// (0x0005d71c) clock_digital_separator_pane_g

0x9e84,	// (0x000582bf) bg_popup_window_pane_cp04

0xb186,	// (0x000595c1) heading_pane_cp03

0xb18e,	// (0x000595c9) listscroll_popup_gms_pane

0xb196,	// (0x000595d1) grid_large_graphic_popup_pane

0xb1a0,	// (0x000595db) listscroll_popup_gms_pane_g1

0xb1a8,	// (0x000595e3) listscroll_popup_gms_pane_g2

0x0001,

0xf37e,	// (0x0005d7b9) listscroll_popup_gms_pane_g

0xac4b,	// (0x00059086) scroll_pane_cp014

0x307e,	// (0x000514b9) cell_large_graphic_popup_pane_ParamLimits

0x307e,	// (0x000514b9) cell_large_graphic_popup_pane

0x3096,	// (0x000514d1) cell_large_graphic_popup_pane_g1_ParamLimits

0x3096,	// (0x000514d1) cell_large_graphic_popup_pane_g1

0xb1b0,	// (0x000595eb) cell_large_graphic_popup_pane_g2_ParamLimits

0xb1b0,	// (0x000595eb) cell_large_graphic_popup_pane_g2

0xb1bc,	// (0x000595f7) cell_large_graphic_popup_pane_g3_ParamLimits

0xb1bc,	// (0x000595f7) cell_large_graphic_popup_pane_g3

0xb1c9,	// (0x00059604) cell_large_graphic_popup_pane_g4_ParamLimits

0xb1c9,	// (0x00059604) cell_large_graphic_popup_pane_g4

0x0003,

0xf383,	// (0x0005d7be) cell_large_graphic_popup_pane_g_ParamLimits

0xf383,	// (0x0005d7be) cell_large_graphic_popup_pane_g

0xb1d9,	// (0x00059614) grid_highlight_pane_cp010

0xa23f,	// (0x0005867a) bg_popup_call_pane_g1

0xb1e3,	// (0x0005961e) list_single_graphic_popup_conf_pane_ParamLimits

0xb1e3,	// (0x0005961e) list_single_graphic_popup_conf_pane

0xb1f5,	// (0x00059630) list_highlight_pane_cp01

0xb1fe,	// (0x00059639) list_single_graphic_popup_conf_pane_g1

0xb206,	// (0x00059641) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf38c,	// (0x0005d7c7) list_single_graphic_popup_conf_pane_g

0xb20e,	// (0x00059649) list_single_graphic_popup_conf_pane_t1

0xb21c,	// (0x00059657) linegrid_cams_pane_g1

0x30a2,	// (0x000514dd) linegrid_cams_pane_g2

0xa3f6,	// (0x00058831) linegrid_cams_pane_g3

0xb225,	// (0x00059660) linegrid_cams_pane_g4

0x30ab,	// (0x000514e6) linegrid_cams_pane_g5

0x30b4,	// (0x000514ef) linegrid_cams_pane_g6

0xa3ff,	// (0x0005883a) linegrid_cams_pane_g7

0x0006,

0xf391,	// (0x0005d7cc) linegrid_cams_pane_g

0xb22e,	// (0x00059669) popup_clock_analogue_window

0xb22e,	// (0x00059669) popup_clock_digital_window

0x9e84,	// (0x000582bf) popup_phob_thumbnail_window

0xa23f,	// (0x0005867a) call_video_uplink_pane_g1

0xb237,	// (0x00059672) call_video_uplink_pane_g2

0x0001,

0xf3a0,	// (0x0005d7db) call_video_uplink_pane_g

0xb23f,	// (0x0005967a) video_uplink_pane

0xb247,	// (0x00059682) mce_image_pane_g1

0x30bf,	// (0x000514fa) mce_image_pane_g2

0x30c9,	// (0x00051504) mce_image_pane_g3

0x30d3,	// (0x0005150e) mce_image_pane_g4

0x30db,	// (0x00051516) mce_image_pane_g5

0x0004,

0xf3a5,	// (0x0005d7e0) mce_image_pane_g

0xb251,	// (0x0005968c) control_top_pane_stacon_cp01_ParamLimits

0xb251,	// (0x0005968c) control_top_pane_stacon_cp01

0xb265,	// (0x000596a0) uni_indicator_pane_stacon_cp01_ParamLimits

0xb265,	// (0x000596a0) uni_indicator_pane_stacon_cp01

0xb276,	// (0x000596b1) bg_popup_sub_pane_cp03

0x30e3,	// (0x0005151e) chi_dic_find_pane

0x30eb,	// (0x00051526) listscroll_chi_dic_pane

0x30f4,	// (0x0005152f) main_pane_chidic_g1

0x3107,	// (0x00051542) chi_dic_find_pane_t1

0xb280,	// (0x000596bb) find_chidic_pane

0xb289,	// (0x000596c4) chi_dic_list_pane_ParamLimits

0xb289,	// (0x000596c4) chi_dic_list_pane

0xb29a,	// (0x000596d5) scroll_pane_cp020

0x3115,	// (0x00051550) find_chidic_pane_t1

0x9e84,	// (0x000582bf) input_focus_pane_cp06

0x0f2a,	// (0x0004f365) list_chi_dic_pane_ParamLimits

0x0f2a,	// (0x0004f365) list_chi_dic_pane

0x3124,	// (0x0005155f) list_chi_dic_pane_t1_ParamLimits

0x3124,	// (0x0005155f) list_chi_dic_pane_t1

0x9e84,	// (0x000582bf) list_highlight_pane_cp020

0xb2a2,	// (0x000596dd) bg_cale_heading_pane_g1

0x3137,	// (0x00051572) bg_cale_heading_pane_g2

0x313f,	// (0x0005157a) bg_cale_heading_pane_g3

0x3147,	// (0x00051582) bg_cale_heading_pane_g4

0x3151,	// (0x0005158c) bg_cale_heading_pane_g5

0x315b,	// (0x00051596) bg_cale_heading_pane_g6

0x3163,	// (0x0005159e) bg_cale_heading_pane_g7

0x316b,	// (0x000515a6) bg_cale_heading_pane_g8

0x3175,	// (0x000515b0) bg_cale_heading_pane_g9

0x0008,

0xf3b0,	// (0x0005d7eb) bg_cale_heading_pane_g

0xb2a2,	// (0x000596dd) bg_cale_side_pane_g1

0x317f,	// (0x000515ba) bg_cale_side_pane_g2

0x3189,	// (0x000515c4) bg_cale_side_pane_g3

0x3193,	// (0x000515ce) bg_cale_side_pane_g4

0x319d,	// (0x000515d8) bg_cale_side_pane_g5

0x31a7,	// (0x000515e2) bg_cale_side_pane_g6

0x31b1,	// (0x000515ec) bg_cale_side_pane_g7

0x31bb,	// (0x000515f6) bg_cale_side_pane_g8

0x31c3,	// (0x000515fe) bg_cale_side_pane_g9

0x0008,

0xf3c3,	// (0x0005d7fe) bg_cale_side_pane_g

0x31cb,	// (0x00051606) popup_call_status_window_ParamLimits

0x31cb,	// (0x00051606) popup_call_status_window

0xb2aa,	// (0x000596e5) stacon_top_pane

0xb2b2,	// (0x000596ed) status_pane_ParamLimits

0xb2b2,	// (0x000596ed) status_pane

0xb2c7,	// (0x00059702) status_small_pane

0xb2cf,	// (0x0005970a) control_pane

0x9e84,	// (0x000582bf) stacon_bottom_pane

0xb2d7,	// (0x00059712) list_single_mce_smart_pane_t1_ParamLimits

0xb2d7,	// (0x00059712) list_single_mce_smart_pane_t1

0xb2ea,	// (0x00059725) list_single_mce_smart_pane_t2_ParamLimits

0xb2ea,	// (0x00059725) list_single_mce_smart_pane_t2

0x0001,

0xf3d6,	// (0x0005d811) list_single_mce_smart_pane_t_ParamLimits

0xf3d6,	// (0x0005d811) list_single_mce_smart_pane_t

0x3218,	// (0x00051653) compass_pane

0x3223,	// (0x0005165e) main_location2_pane_t1

0x3237,	// (0x00051672) main_location2_pane_t2

0x324d,	// (0x00051688) main_location2_pane_t3

0x0003,

0xf3db,	// (0x0005d816) main_location2_pane_t

0xb309,	// (0x00059744) compass_pane_g1_ParamLimits

0xb309,	// (0x00059744) compass_pane_g1

0x3297,	// (0x000516d2) compass_pane_t1

0x32a6,	// (0x000516e1) compass_pane_t2

0x0005,

0xf3e4,	// (0x0005d81f) compass_pane_t

0x32ed,	// (0x00051728) text_secondary_cp61

0xb31d,	// (0x00059758) navi_pane_cams_g5

0xb340,	// (0x0005977b) navi_pane_im_t1

0xb34e,	// (0x00059789) navi_pane_mp_g1_ParamLimits

0xb34e,	// (0x00059789) navi_pane_mp_g1

0xb362,	// (0x0005979d) navi_pane_mp_g2_ParamLimits

0xb362,	// (0x0005979d) navi_pane_mp_g2

0xb36e,	// (0x000597a9) navi_pane_mp_g3_ParamLimits

0xb36e,	// (0x000597a9) navi_pane_mp_g3

0x0002,

0xf3f8,	// (0x0005d833) navi_pane_mp_g_ParamLimits

0xf3f8,	// (0x0005d833) navi_pane_mp_g

0xb37a,	// (0x000597b5) navi_pane_mp_t1

0xb388,	// (0x000597c3) navi_pane_mp_t2

0x0002,

0xf3ff,	// (0x0005d83a) navi_pane_mp_t

0xb3c4,	// (0x000597ff) navi_pane_vt_g1

0xb37a,	// (0x000597b5) navi_pane_vt_t1

0xb3cc,	// (0x00059807) navi_slider_pane

0xb3d4,	// (0x0005980f) zooming_pane

0xb3dc,	// (0x00059817) navi_slider_pane_g1

0xa651,	// (0x00058a8c) navi_slider_pane_g2

0x0006,

0xf406,	// (0x0005d841) navi_slider_pane_g

0xb400,	// (0x0005983b) aid_levels_zoom

0xb408,	// (0x00059843) zooming_pane_g1

0xb410,	// (0x0005984b) zooming_pane_g2

0xb410,	// (0x0005984b) zooming_pane_g3

0x0002,

0xf415,	// (0x0005d850) zooming_pane_g

0xb418,	// (0x00059853) level_10_zoom

0xb421,	// (0x0005985c) level_11_zoom

0xb42a,	// (0x00059865) level_1_zoom

0xb433,	// (0x0005986e) level_2_zoom

0xb43c,	// (0x00059877) level_3_zoom

0xb445,	// (0x00059880) level_4_zoom

0xb44e,	// (0x00059889) level_5_zoom

0xb457,	// (0x00059892) level_6_zoom

0xb460,	// (0x0005989b) level_7_zoom

0xb469,	// (0x000598a4) level_8_zoom

0xb472,	// (0x000598ad) level_9_zoom

0xb483,	// (0x000598be) popup_phob_thumbnail_window_g1

0xb48b,	// (0x000598c6) popup_phob_thumbnail_window_g2

0x0001,

0xf41c,	// (0x0005d857) popup_phob_thumbnail_window_g

0xc79d,	// (0x0005abd8) level_1_location

0xc7a5,	// (0x0005abe0) level_2_location

0xc7ad,	// (0x0005abe8) level_3_location

0xc7b5,	// (0x0005abf0) level_4_location

0xb3d4,	// (0x0005980f) level_5_location

0x3436,	// (0x00051871) mce_icon_pane_g1

0x3440,	// (0x0005187b) mce_icon_pane_g2

0x0001,

0xf421,	// (0x0005d85c) mce_icon_pane_g

0x3448,	// (0x00051883) main_mup_pane_g1_ParamLimits

0x3448,	// (0x00051883) main_mup_pane_g1

0x345e,	// (0x00051899) main_mup_pane_g2_ParamLimits

0x345e,	// (0x00051899) main_mup_pane_g2

0x3476,	// (0x000518b1) main_mup_pane_g3_ParamLimits

0x3476,	// (0x000518b1) main_mup_pane_g3

0x348e,	// (0x000518c9) main_mup_pane_g4_ParamLimits

0x348e,	// (0x000518c9) main_mup_pane_g4

0x34a6,	// (0x000518e1) main_mup_pane_g5_ParamLimits

0x34a6,	// (0x000518e1) main_mup_pane_g5

0x34c2,	// (0x000518fd) main_mup_pane_g6_ParamLimits

0x34c2,	// (0x000518fd) main_mup_pane_g6

0x34dc,	// (0x00051917) main_mup_pane_g7_ParamLimits

0x34dc,	// (0x00051917) main_mup_pane_g7

0x34fa,	// (0x00051935) main_mup_pane_g8_ParamLimits

0x34fa,	// (0x00051935) main_mup_pane_g8

0x3518,	// (0x00051953) main_mup_pane_g9_ParamLimits

0x3518,	// (0x00051953) main_mup_pane_g9

0x3534,	// (0x0005196f) main_mup_pane_g10_ParamLimits

0x3534,	// (0x0005196f) main_mup_pane_g10

0x3552,	// (0x0005198d) main_mup_pane_g11_ParamLimits

0x3552,	// (0x0005198d) main_mup_pane_g11

0x356c,	// (0x000519a7) main_mup_pane_g12_ParamLimits

0x356c,	// (0x000519a7) main_mup_pane_g12

0x3582,	// (0x000519bd) main_mup_pane_g13_ParamLimits

0x3582,	// (0x000519bd) main_mup_pane_g13

0x000c,

0xf426,	// (0x0005d861) main_mup_pane_g_ParamLimits

0xf426,	// (0x0005d861) main_mup_pane_g

0x3596,	// (0x000519d1) main_mup_pane_t1_ParamLimits

0x3596,	// (0x000519d1) main_mup_pane_t1

0x35b2,	// (0x000519ed) main_mup_pane_t2_ParamLimits

0x35b2,	// (0x000519ed) main_mup_pane_t2

0x35ca,	// (0x00051a05) main_mup_pane_t3_ParamLimits

0x35ca,	// (0x00051a05) main_mup_pane_t3

0x35e2,	// (0x00051a1d) main_mup_pane_t4_ParamLimits

0x35e2,	// (0x00051a1d) main_mup_pane_t4

0x3600,	// (0x00051a3b) main_mup_pane_t5_ParamLimits

0x3600,	// (0x00051a3b) main_mup_pane_t5

0x3615,	// (0x00051a50) main_mup_pane_t6_ParamLimits

0x3615,	// (0x00051a50) main_mup_pane_t6

0x0005,

0xf441,	// (0x0005d87c) main_mup_pane_t_ParamLimits

0xf441,	// (0x0005d87c) main_mup_pane_t

0x3627,	// (0x00051a62) mup_progress_pane_ParamLimits

0x3627,	// (0x00051a62) mup_progress_pane

0x3633,	// (0x00051a6e) mup_visualizer_pane_ParamLimits

0x3633,	// (0x00051a6e) mup_visualizer_pane

0x3667,	// (0x00051aa2) mup_volume_pane_ParamLimits

0x3667,	// (0x00051aa2) mup_volume_pane

0xb493,	// (0x000598ce) mup_visualizer_pane_g1_ParamLimits

0xb493,	// (0x000598ce) mup_visualizer_pane_g1

0xb493,	// (0x000598ce) mup_visualizer_pane_g2_ParamLimits

0xb493,	// (0x000598ce) mup_visualizer_pane_g2

0xb309,	// (0x00059744) mup_visualizer_pane_g3_ParamLimits

0xb309,	// (0x00059744) mup_visualizer_pane_g3

0x0002,

0xf44e,	// (0x0005d889) mup_visualizer_pane_g_ParamLimits

0xf44e,	// (0x0005d889) mup_visualizer_pane_g

0xa23f,	// (0x0005867a) mup_volume_pane_g1

0xb4a9,	// (0x000598e4) mup_volume_pane_g2

0x0001,

0xf455,	// (0x0005d890) mup_volume_pane_g

0xa23f,	// (0x0005867a) mup_progress_pane_g1

0xb4b2,	// (0x000598ed) mup_progress_pane_g2

0xb4bb,	// (0x000598f6) mup_progress_pane_g3

0x0002,

0xf45a,	// (0x0005d895) mup_progress_pane_g

0x9e84,	// (0x000582bf) bg_popup_window_pane_cp05

0xb4c4,	// (0x000598ff) heading_pane_cp02_ParamLimits

0xb4c4,	// (0x000598ff) heading_pane_cp02

0xb4e0,	// (0x0005991b) list_popup_blid_pane

0xb4e8,	// (0x00059923) list_blid_sat_info_pane_ParamLimits

0xb4e8,	// (0x00059923) list_blid_sat_info_pane

0xb4fb,	// (0x00059936) list_blid_sat_info_pane_g1

0xb503,	// (0x0005993e) list_blid_sat_info_pane_t1

0x3791,	// (0x00051bcc) mup_equalizer_pane_ParamLimits

0x3791,	// (0x00051bcc) mup_equalizer_pane

0x37b2,	// (0x00051bed) mup_equalizer_pane_cp1_ParamLimits

0x37b2,	// (0x00051bed) mup_equalizer_pane_cp1

0x37d3,	// (0x00051c0e) mup_equalizer_pane_cp2_ParamLimits

0x37d3,	// (0x00051c0e) mup_equalizer_pane_cp2

0x37f8,	// (0x00051c33) mup_equalizer_pane_cp3_ParamLimits

0x37f8,	// (0x00051c33) mup_equalizer_pane_cp3

0x3821,	// (0x00051c5c) mup_equalizer_pane_cp4_ParamLimits

0x3821,	// (0x00051c5c) mup_equalizer_pane_cp4

0x384a,	// (0x00051c85) mup_equalizer_pane_cp5

0x3862,	// (0x00051c9d) mup_equalizer_pane_cp6

0x387a,	// (0x00051cb5) mup_equalizer_pane_cp7

0xc6b7,	// (0x0005aaf2) bg_popup_call_poc_act_pane_g9

0xc6bf,	// (0x0005aafa) bg_popup_call_poc_act_pane_g10

0xc6c7,	// (0x0005ab02) bg_popup_call_poc_act_pane_g11

0x000a,

0xa0df,	// (0x0005851a) mup_scale_pane

0xa23f,	// (0x0005867a) mup_scale_pane_g1

0xb511,	// (0x0005994c) mup_scale_pane_g2

0x0006,

0xf476,	// (0x0005d8b1) mup_scale_pane_g

0xb535,	// (0x00059970) msg_data_pane

0xb53d,	// (0x00059978) scroll_pane_cp017

0x38a4,	// (0x00051cdf) bg_list_pane_cp04_ParamLimits

0x38a4,	// (0x00051cdf) bg_list_pane_cp04

0xb545,	// (0x00059980) msg_data_pane_g1

0x38c4,	// (0x00051cff) msg_data_pane_g2

0x38ce,	// (0x00051d09) msg_data_pane_g3

0x38d8,	// (0x00051d13) msg_data_pane_g4

0x38e0,	// (0x00051d1b) msg_data_pane_g5

0x38e8,	// (0x00051d23) msg_data_pane_g6

0x38f0,	// (0x00051d2b) msg_data_pane_g7

0x0006,

0xf485,	// (0x0005d8c0) msg_data_pane_g

0x38f8,	// (0x00051d33) msg_text_pane_ParamLimits

0x38f8,	// (0x00051d33) msg_text_pane

0x3920,	// (0x00051d5b) qrid_highlight_pane_cp011_ParamLimits

0x3920,	// (0x00051d5b) qrid_highlight_pane_cp011

0x9e84,	// (0x000582bf) msg_body_pane

0x9e84,	// (0x000582bf) msg_header_pane

0xb54d,	// (0x00059988) input_focus_pane_cp07

0xb562,	// (0x0005999d) msg_header_pane_t1_ParamLimits

0xb562,	// (0x0005999d) msg_header_pane_t1

0x3941,	// (0x00051d7c) msg_header_pane_t2_ParamLimits

0x3941,	// (0x00051d7c) msg_header_pane_t2

0x0001,

0xf499,	// (0x0005d8d4) msg_header_pane_t_ParamLimits

0xf499,	// (0x0005d8d4) msg_header_pane_t

0xb574,	// (0x000599af) msg_body_pane_g1

0xfe20,	// (0x0004e25b) msg_body_pane_t1_ParamLimits

0xfe20,	// (0x0004e25b) msg_body_pane_t1

0x3953,	// (0x00051d8e) msg_body_pane_t2_ParamLimits

0x3953,	// (0x00051d8e) msg_body_pane_t2

0x3965,	// (0x00051da0) msg_body_pane_t3_ParamLimits

0x3965,	// (0x00051da0) msg_body_pane_t3

0x0002,

0xf49e,	// (0x0005d8d9) msg_body_pane_t_ParamLimits

0xf49e,	// (0x0005d8d9) msg_body_pane_t

0x39b1,	// (0x00051dec) main_viewer_pane_g1_ParamLimits

0x39b1,	// (0x00051dec) main_viewer_pane_g1

0x39bf,	// (0x00051dfa) main_viewer_pane_g2_ParamLimits

0x39bf,	// (0x00051dfa) main_viewer_pane_g2

0x39cd,	// (0x00051e08) main_viewer_pane_g3_ParamLimits

0x39cd,	// (0x00051e08) main_viewer_pane_g3

0x39dc,	// (0x00051e17) main_viewer_pane_g4_ParamLimits

0x39dc,	// (0x00051e17) main_viewer_pane_g4

0xa67b,	// (0x00058ab6) main_viewer_pane_g5_ParamLimits

0xa67b,	// (0x00058ab6) main_viewer_pane_g5

0xa67b,	// (0x00058ab6) main_viewer_pane_g7_ParamLimits

0xa67b,	// (0x00058ab6) main_viewer_pane_g7

0xa68d,	// (0x00058ac8) main_viewer_pane_g8_ParamLimits

0xa68d,	// (0x00058ac8) main_viewer_pane_g8

0x0007,

0xf4ae,	// (0x0005d8e9) main_viewer_pane_g_ParamLimits

0xf4ae,	// (0x0005d8e9) main_viewer_pane_g

0xb57c,	// (0x000599b7) viewer_content_pane_ParamLimits

0xb57c,	// (0x000599b7) viewer_content_pane

0x3a1a,	// (0x00051e55) main_postcard_pane_g1_ParamLimits

0x3a1a,	// (0x00051e55) main_postcard_pane_g1

0x3a30,	// (0x00051e6b) main_postcard_pane_g2_ParamLimits

0x3a30,	// (0x00051e6b) main_postcard_pane_g2

0x3a46,	// (0x00051e81) main_postcard_pane_g3_ParamLimits

0x3a46,	// (0x00051e81) main_postcard_pane_g3

0x0005,

0xf4bf,	// (0x0005d8fa) main_postcard_pane_g_ParamLimits

0xf4bf,	// (0x0005d8fa) main_postcard_pane_g

0x3a5d,	// (0x00051e98) main_postcard_pane_g4

0xc8e0,	// (0x0005ad1b) smil_status_volume_pane_g2

0x3aa0,	// (0x00051edb) postcard_pane_ParamLimits

0x3aa0,	// (0x00051edb) postcard_pane

0xb58a,	// (0x000599c5) postcard_pane_g1_ParamLimits

0xb58a,	// (0x000599c5) postcard_pane_g1

0x3af0,	// (0x00051f2b) postcard_pane_g2_ParamLimits

0x3af0,	// (0x00051f2b) postcard_pane_g2

0x3afc,	// (0x00051f37) postcard_pane_g3_ParamLimits

0x3afc,	// (0x00051f37) postcard_pane_g3

0xb598,	// (0x000599d3) postcard_pane_g4_ParamLimits

0xb598,	// (0x000599d3) postcard_pane_g4

0x3b08,	// (0x00051f43) postcard_pane_g5_ParamLimits

0x3b08,	// (0x00051f43) postcard_pane_g5

0x3b1d,	// (0x00051f58) postcard_pane_g6_ParamLimits

0x3b1d,	// (0x00051f58) postcard_pane_g6

0xb58a,	// (0x000599c5) postcard_pane_g7_ParamLimits

0xb58a,	// (0x000599c5) postcard_pane_g7

0x0006,

0xf4cc,	// (0x0005d907) postcard_pane_g_ParamLimits

0xf4cc,	// (0x0005d907) postcard_pane_g

0x3b35,	// (0x00051f70) main_mp2_pane_g1_ParamLimits

0x3b35,	// (0x00051f70) main_mp2_pane_g1

0x3b43,	// (0x00051f7e) main_mp2_pane_g2_ParamLimits

0x3b43,	// (0x00051f7e) main_mp2_pane_g2

0x3b4f,	// (0x00051f8a) main_mp2_pane_g3_ParamLimits

0x3b4f,	// (0x00051f8a) main_mp2_pane_g3

0x0002,

0xf4db,	// (0x0005d916) main_mp2_pane_g_ParamLimits

0xf4db,	// (0x0005d916) main_mp2_pane_g

0x3b5b,	// (0x00051f96) main_mp2_pane_t1_ParamLimits

0x3b5b,	// (0x00051f96) main_mp2_pane_t1

0x3b72,	// (0x00051fad) main_mp2_pane_t2_ParamLimits

0x3b72,	// (0x00051fad) main_mp2_pane_t2

0x3b84,	// (0x00051fbf) main_mp2_pane_t3_ParamLimits

0x3b84,	// (0x00051fbf) main_mp2_pane_t3

0x0002,

0xf4e2,	// (0x0005d91d) main_mp2_pane_t_ParamLimits

0xf4e2,	// (0x0005d91d) main_mp2_pane_t

0xb5a6,	// (0x000599e1) pec_content_pane_ParamLimits

0xb5a6,	// (0x000599e1) pec_content_pane

0xac4b,	// (0x00059086) scroll_pane_cp015

0xb5b8,	// (0x000599f3) pec_attribute_pane_ParamLimits

0xb5b8,	// (0x000599f3) pec_attribute_pane

0x3b96,	// (0x00051fd1) pec_content_pane_g1_ParamLimits

0x3b96,	// (0x00051fd1) pec_content_pane_g1

0xb5c8,	// (0x00059a03) pec_content_pane_t1_ParamLimits

0xb5c8,	// (0x00059a03) pec_content_pane_t1

0xb5da,	// (0x00059a15) pec_content_pane_t2_ParamLimits

0xb5da,	// (0x00059a15) pec_content_pane_t2

0x0001,

0xf4e9,	// (0x0005d924) pec_content_pane_t_ParamLimits

0xf4e9,	// (0x0005d924) pec_content_pane_t

0x3ba2,	// (0x00051fdd) list_single_graphic_pane_cp01_ParamLimits

0x3ba2,	// (0x00051fdd) list_single_graphic_pane_cp01

0xa0df,	// (0x0005851a) bg_popup_sub_pane_cp04

0xb5ec,	// (0x00059a27) popup_mup_playback_window_g1

0xb5f8,	// (0x00059a33) popup_mup_playback_window_t1

0xb60d,	// (0x00059a48) popup_mup_playback_window_t2

0x0001,

0xf4ee,	// (0x0005d929) popup_mup_playback_window_t

0xb644,	// (0x00059a7f) main_image_pane_g1_ParamLimits

0xb644,	// (0x00059a7f) main_image_pane_g1

0xb687,	// (0x00059ac2) scroll_pane_cp018_ParamLimits

0xb687,	// (0x00059ac2) scroll_pane_cp018

0xb69f,	// (0x00059ada) scroll_pane_cp016_ParamLimits

0xb69f,	// (0x00059ada) scroll_pane_cp016

0x3c71,	// (0x000520ac) smil2_image_pane_ParamLimits

0x3c71,	// (0x000520ac) smil2_image_pane

0x3ca7,	// (0x000520e2) smil2_root_pane_ParamLimits

0x3ca7,	// (0x000520e2) smil2_root_pane

0x3cdf,	// (0x0005211a) smil2_text_pane_ParamLimits

0x3cdf,	// (0x0005211a) smil2_text_pane

0x9e84,	// (0x000582bf) bg_list_pane_cp06

0xb6db,	// (0x00059b16) grid_radio_pane

0x9e84,	// (0x000582bf) bg_popup_window_pane_cp06

0xb6e5,	// (0x00059b20) main_fmradio_pane_t1

0xb186,	// (0x000595c1) heading_pane_cp04

0xb6f3,	// (0x00059b2e) main_fmradio_pane_t2

0xc6cf,	// (0x0005ab0a) popup_cale_lunar_info_window_g1

0xb701,	// (0x00059b3c) main_fmradio_pane_t3

0xc6d7,	// (0x0005ab12) popup_cale_lunar_info_window_g2

0xb711,	// (0x00059b4c) main_fmradio_pane_t4

0x0001,

0xb71f,	// (0x00059b5a) main_fmradio_pane_t5

0x0004,

0xf5c9,	// (0x0005da04) popup_cale_lunar_info_window_g

0xf503,	// (0x0005d93e) main_fmradio_pane_t

0xb72d,	// (0x00059b68) wait_bar_pane_cp03

0xb735,	// (0x00059b70) cell_fmradio_pane_ParamLimits

0xb735,	// (0x00059b70) cell_fmradio_pane

0xb58a,	// (0x000599c5) cell_fmradio_pane_g1_ParamLimits

0xb58a,	// (0x000599c5) cell_fmradio_pane_g1

0x9e84,	// (0x000582bf) grid_highlight_pane_cp011

0xb74a,	// (0x00059b85) poc_content_pane_ParamLimits

0xb74a,	// (0x00059b85) poc_content_pane

0xb75c,	// (0x00059b97) scroll_pane_cp019

0x3d6f,	// (0x000521aa) popup_call_poc_act_window_ParamLimits

0x3d6f,	// (0x000521aa) popup_call_poc_act_window

0x3d93,	// (0x000521ce) popup_call_poc_inact_window_ParamLimits

0x3d93,	// (0x000521ce) popup_call_poc_inact_window

0xf5a0,	// (0x0005d9db) bg_popup_call_poc_act_pane_g

0xc647,	// (0x0005aa82) bg_popup_call_poc_inact_pane_g1

0xc64f,	// (0x0005aa8a) bg_popup_call_poc_inact_pane_g2

0xb764,	// (0x00059b9f) popup_call_poc_act_window_g2

0xc657,	// (0x0005aa92) bg_popup_call_poc_inact_pane_g3

0xc65f,	// (0x0005aa9a) bg_popup_call_poc_inact_pane_g4

0xc667,	// (0x0005aaa2) bg_popup_call_poc_inact_pane_g5

0xb76c,	// (0x00059ba7) popup_call_poc_act_window_t1_ParamLimits

0xb76c,	// (0x00059ba7) popup_call_poc_act_window_t1

0xb794,	// (0x00059bcf) popup_call_poc_act_window_t2_ParamLimits

0xb794,	// (0x00059bcf) popup_call_poc_act_window_t2

0xb7bc,	// (0x00059bf7) popup_call_poc_act_window_t3_ParamLimits

0xb7bc,	// (0x00059bf7) popup_call_poc_act_window_t3

0xb7e4,	// (0x00059c1f) popup_call_poc_act_window_t4_ParamLimits

0xb7e4,	// (0x00059c1f) popup_call_poc_act_window_t4

0x0003,

0xf50e,	// (0x0005d949) popup_call_poc_act_window_t_ParamLimits

0xf50e,	// (0x0005d949) popup_call_poc_act_window_t

0xc66f,	// (0x0005aaaa) bg_popup_call_poc_inact_pane_g6

0xc677,	// (0x0005aab2) bg_popup_call_poc_inact_pane_g7

0xc67f,	// (0x0005aaba) bg_popup_call_poc_inact_pane_g8

0xb7f6,	// (0x00059c31) popup_call_poc_inact_window_g2

0xc687,	// (0x0005aac2) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf58d,	// (0x0005d9c8) bg_popup_call_poc_inact_pane_g

0xb7fe,	// (0x00059c39) popup_call_poc_inact_window_t1_ParamLimits

0xb7fe,	// (0x00059c39) popup_call_poc_inact_window_t1

0xb813,	// (0x00059c4e) popup_call_poc_inact_window_t2_ParamLimits

0xb813,	// (0x00059c4e) popup_call_poc_inact_window_t2

0xb828,	// (0x00059c63) popup_call_poc_inact_window_t3_ParamLimits

0xb828,	// (0x00059c63) popup_call_poc_inact_window_t3

0x0002,

0xf517,	// (0x0005d952) popup_call_poc_inact_window_t_ParamLimits

0xf517,	// (0x0005d952) popup_call_poc_inact_window_t

0xc853,	// (0x0005ac8e) context_pane_ParamLimits

0x463b,	// (0x00052a76) signal_pane_ParamLimits

0xb3d4,	// (0x0005980f) main_call2_pane

0xc841,	// (0x0005ac7c) popup_phob_thumbnail2_window_ParamLimits

0xc841,	// (0x0005ac7c) popup_phob_thumbnail2_window

0xa663,	// (0x00058a9e) aid_hotspot_pointer_arrow_pane

0xa66b,	// (0x00058aa6) aid_hotspot_pointer_hand_pane

0x40fb,	// (0x00052536) phob_pre_status_pane_g5

0x1b18,	// (0x0004ff53) cams_zoom_pane_ParamLimits

0x1b27,	// (0x0004ff62) image_vga_pane_ParamLimits

0x1b41,	// (0x0004ff7c) main_camera_pane_g1_ParamLimits

0x1b53,	// (0x0004ff8e) main_camera_pane_g2_ParamLimits

0x1b63,	// (0x0004ff9e) main_camera_pane_g3_ParamLimits

0x1b77,	// (0x0004ffb2) main_camera_pane_g4_ParamLimits

0x1b8b,	// (0x0004ffc6) main_camera_pane_g5_ParamLimits

0x1b9f,	// (0x0004ffda) main_camera_pane_g6_ParamLimits

0x1bb3,	// (0x0004ffee) main_camera_pane_g7_ParamLimits

0xf20f,	// (0x0005d64a) main_camera_pane_g_ParamLimits

0x1bc7,	// (0x00050002) main_camera_pane_t1_ParamLimits

0x1bdd,	// (0x00050018) main_camera_pane_t2_ParamLimits

0xf220,	// (0x0005d65b) main_camera_pane_t_ParamLimits

0xa0df,	// (0x0005851a) bg_popup_preview_window_pane_cp01_ParamLimits

0xa0df,	// (0x0005851a) bg_popup_preview_window_pane_cp01

0xb83d,	// (0x00059c78) popup_phob_thumbnail2_window_g1_ParamLimits

0xb83d,	// (0x00059c78) popup_phob_thumbnail2_window_g1

0x9e84,	// (0x000582bf) call2_cli_visual_pane

0x3dc7,	// (0x00052202) popup_call2_audio_conf_window_ParamLimits

0x3dc7,	// (0x00052202) popup_call2_audio_conf_window

0x3def,	// (0x0005222a) popup_call2_audio_first_window_ParamLimits

0x3def,	// (0x0005222a) popup_call2_audio_first_window

0x3e85,	// (0x000522c0) popup_call2_audio_in_window_ParamLimits

0x3e85,	// (0x000522c0) popup_call2_audio_in_window

0x3ed1,	// (0x0005230c) popup_call2_audio_out_window_ParamLimits

0x3ed1,	// (0x0005230c) popup_call2_audio_out_window

0x3f43,	// (0x0005237e) popup_call2_audio_second_window_ParamLimits

0x3f43,	// (0x0005237e) popup_call2_audio_second_window

0x3fa9,	// (0x000523e4) popup_call2_audio_wait_window_ParamLimits

0x3fa9,	// (0x000523e4) popup_call2_audio_wait_window

0x9e84,	// (0x000582bf) bg_popup_call2_act_pane_cp03

0xa0c1,	// (0x000584fc) list_conf_pane_cp

0xb849,	// (0x00059c84) popup_call2_audio_conf_window_t1

0xb857,	// (0x00059c92) list_single_graphic_popup_conf2_pane_ParamLimits

0xb857,	// (0x00059c92) list_single_graphic_popup_conf2_pane

0xb1f5,	// (0x00059630) list_highlight_pane_cp04

0xb86a,	// (0x00059ca5) list_single_graphic_popup_conf2_pane_g1

0xb206,	// (0x00059641) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf51e,	// (0x0005d959) list_single_graphic_popup_conf2_pane_g

0xb874,	// (0x00059caf) list_single_graphic_popup_conf2_pane_t1

0xb882,	// (0x00059cbd) bg_popup_call2_act_pane_cp01_ParamLimits

0xb882,	// (0x00059cbd) bg_popup_call2_act_pane_cp01

0xb90c,	// (0x00059d47) call_type_pane_cp05_ParamLimits

0xb90c,	// (0x00059d47) call_type_pane_cp05

0xb960,	// (0x00059d9b) popup_call2_audio_second_window_g1_ParamLimits

0xb960,	// (0x00059d9b) popup_call2_audio_second_window_g1

0xb9b4,	// (0x00059def) popup_call2_audio_second_window_g2_ParamLimits

0xb9b4,	// (0x00059def) popup_call2_audio_second_window_g2

0x0002,

0xf523,	// (0x0005d95e) popup_call2_audio_second_window_g_ParamLimits

0xf523,	// (0x0005d95e) popup_call2_audio_second_window_g

0xba19,	// (0x00059e54) popup_call2_audio_second_window_t1_ParamLimits

0xba19,	// (0x00059e54) popup_call2_audio_second_window_t1

0xbad4,	// (0x00059f0f) popup_call2_audio_second_window_t2_ParamLimits

0xbad4,	// (0x00059f0f) popup_call2_audio_second_window_t2

0xbb27,	// (0x00059f62) popup_call2_audio_second_window_t3_ParamLimits

0xbb27,	// (0x00059f62) popup_call2_audio_second_window_t3

0x0003,

0xf52a,	// (0x0005d965) popup_call2_audio_second_window_t_ParamLimits

0xf52a,	// (0x0005d965) popup_call2_audio_second_window_t

0x9e84,	// (0x000582bf) bg_popup_call2_in_pane_cp02

0x9e8e,	// (0x000582c9) call_type_pane_cp04

0x9e96,	// (0x000582d1) popup_call2_audio_wait_window_g1

0x9e9e,	// (0x000582d9) popup_call2_audio_wait_window_g2

0x0001,

0xf0fc,	// (0x0005d537) popup_call2_audio_wait_window_g

0x9ea6,	// (0x000582e1) popup_call2_audio_wait_window_t3

0xbc1a,	// (0x0005a055) bg_popup_call2_act_pane_ParamLimits

0xbc1a,	// (0x0005a055) bg_popup_call2_act_pane

0xbcda,	// (0x0005a115) call_type_pane_cp03_ParamLimits

0xbcda,	// (0x0005a115) call_type_pane_cp03

0xbd3e,	// (0x0005a179) popup_call2_audio_first_window_g1_ParamLimits

0xbd3e,	// (0x0005a179) popup_call2_audio_first_window_g1

0xbdae,	// (0x0005a1e9) popup_call2_audio_first_window_g2_ParamLimits

0xbdae,	// (0x0005a1e9) popup_call2_audio_first_window_g2

0xb493,	// (0x000598ce) popup_call2_audio_first_window_g3_ParamLimits

0xb493,	// (0x000598ce) popup_call2_audio_first_window_g3

0x0004,

0xf533,	// (0x0005d96e) popup_call2_audio_first_window_g_ParamLimits

0xf533,	// (0x0005d96e) popup_call2_audio_first_window_g

0xbe8c,	// (0x0005a2c7) popup_call2_audio_first_window_t1_ParamLimits

0xbe8c,	// (0x0005a2c7) popup_call2_audio_first_window_t1

0xbf8f,	// (0x0005a3ca) popup_call2_audio_first_window_t4_ParamLimits

0xbf8f,	// (0x0005a3ca) popup_call2_audio_first_window_t4

0xc072,	// (0x0005a4ad) popup_call2_audio_first_window_t5_ParamLimits

0xc072,	// (0x0005a4ad) popup_call2_audio_first_window_t5

0x0003,

0xf53e,	// (0x0005d979) popup_call2_audio_first_window_t_ParamLimits

0xf53e,	// (0x0005d979) popup_call2_audio_first_window_t

0xa0d7,	// (0x00058512) bg_popup_call2_act_pane_g1

0xc6e1,	// (0x0005ab1c) popup_cale_lunar_info_window_t1

0xc6ef,	// (0x0005ab2a) popup_cale_lunar_info_window_t2

0xc6fd,	// (0x0005ab38) popup_cale_lunar_info_window_t3

0x9e84,	// (0x000582bf) bg_popup_call2_bubble_pane

0xc173,	// (0x0005a5ae) bg_popup_call2_in_pane_cp01_ParamLimits

0xc173,	// (0x0005a5ae) bg_popup_call2_in_pane_cp01

0x9b60,	// (0x00057f9b) call_type_pane_cp02

0xc1bb,	// (0x0005a5f6) popup_call2_audio_out_window_g1_ParamLimits

0xc1bb,	// (0x0005a5f6) popup_call2_audio_out_window_g1

0xc1e7,	// (0x0005a622) popup_call2_audio_out_window_g2_ParamLimits

0xc1e7,	// (0x0005a622) popup_call2_audio_out_window_g2

0xc20f,	// (0x0005a64a) popup_call2_audio_out_window_g3_ParamLimits

0xc20f,	// (0x0005a64a) popup_call2_audio_out_window_g3

0x0003,

0xf547,	// (0x0005d982) popup_call2_audio_out_window_g_ParamLimits

0xf547,	// (0x0005d982) popup_call2_audio_out_window_g

0xc24a,	// (0x0005a685) popup_call2_audio_out_window_t1_ParamLimits

0xc24a,	// (0x0005a685) popup_call2_audio_out_window_t1

0xc2a9,	// (0x0005a6e4) popup_call2_audio_out_window_t2_ParamLimits

0xc2a9,	// (0x0005a6e4) popup_call2_audio_out_window_t2

0xc2fd,	// (0x0005a738) popup_call2_audio_out_window_t3_ParamLimits

0xc2fd,	// (0x0005a738) popup_call2_audio_out_window_t3

0xc313,	// (0x0005a74e) popup_call2_audio_out_window_t4_ParamLimits

0xc313,	// (0x0005a74e) popup_call2_audio_out_window_t4

0xc329,	// (0x0005a764) popup_call2_audio_out_window_t5_ParamLimits

0xc329,	// (0x0005a764) popup_call2_audio_out_window_t5

0x0005,

0xf550,	// (0x0005d98b) popup_call2_audio_out_window_t_ParamLimits

0xf550,	// (0x0005d98b) popup_call2_audio_out_window_t

0xc38d,	// (0x0005a7c8) bg_popup_call2_in_pane_ParamLimits

0xc38d,	// (0x0005a7c8) bg_popup_call2_in_pane

0xc3e9,	// (0x0005a824) popup_call2_audio_in_window_g1_ParamLimits

0xc3e9,	// (0x0005a824) popup_call2_audio_in_window_g1

0xc421,	// (0x0005a85c) popup_call2_audio_in_window_g2_ParamLimits

0xc421,	// (0x0005a85c) popup_call2_audio_in_window_g2

0xc459,	// (0x0005a894) popup_call2_audio_in_window_g3_ParamLimits

0xc459,	// (0x0005a894) popup_call2_audio_in_window_g3

0x0003,

0xf55d,	// (0x0005d998) popup_call2_audio_in_window_g_ParamLimits

0xf55d,	// (0x0005d998) popup_call2_audio_in_window_g

0xc4b1,	// (0x0005a8ec) popup_call2_audio_in_window_t1_ParamLimits

0xc4b1,	// (0x0005a8ec) popup_call2_audio_in_window_t1

0xc531,	// (0x0005a96c) popup_call2_audio_in_window_t2_ParamLimits

0xc531,	// (0x0005a96c) popup_call2_audio_in_window_t2

0xc5b1,	// (0x0005a9ec) popup_call2_audio_in_window_t3_ParamLimits

0xc5b1,	// (0x0005a9ec) popup_call2_audio_in_window_t3

0xc5cb,	// (0x0005aa06) popup_call2_audio_in_window_t4_ParamLimits

0xc5cb,	// (0x0005aa06) popup_call2_audio_in_window_t4

0xc5dd,	// (0x0005aa18) popup_call2_audio_in_window_t5_ParamLimits

0xc5dd,	// (0x0005aa18) popup_call2_audio_in_window_t5

0xc5f2,	// (0x0005aa2d) popup_call2_audio_in_window_t6_ParamLimits

0xc5f2,	// (0x0005aa2d) popup_call2_audio_in_window_t6

0x0005,

0xf566,	// (0x0005d9a1) popup_call2_audio_in_window_t_ParamLimits

0xf566,	// (0x0005d9a1) popup_call2_audio_in_window_t

0xa0d7,	// (0x00058512) bg_popup_call2_in_pane_g1

0xc70b,	// (0x0005ab46) popup_cale_lunar_info_window_t4

0x0003,

0xf5ce,	// (0x0005da09) popup_cale_lunar_info_window_t

0xa0df,	// (0x0005851a) bg_popup_call2_rect_pane_ParamLimits

0xa0df,	// (0x0005851a) bg_popup_call2_rect_pane

0x9e84,	// (0x000582bf) call2_cli_visual_graphic_pane

0x9e84,	// (0x000582bf) call2_cli_visual_text_pane

0xa6a5,	// (0x00058ae0) smil_status_volume_pane_g3

0x0002,

0xa23f,	// (0x0005867a) call2_cli_visual_graphic_pane_g1

0xa23f,	// (0x0005867a) call2_cli_visual_graphic_pane_g2

0xa23f,	// (0x0005867a) call2_cli_visual_graphic_pane_g3

0x0002,

0xf573,	// (0x0005d9ae) call2_cli_visual_graphic_pane_g

0xc607,	// (0x0005aa42) bg_popup_call2_rect_pane_g1

0xa2e7,	// (0x00058722) bg_popup_call2_rect_pane_g2

0xc60f,	// (0x0005aa4a) bg_popup_call2_rect_pane_g3

0xc617,	// (0x0005aa52) bg_popup_call2_rect_pane_g4

0xc61f,	// (0x0005aa5a) bg_popup_call2_rect_pane_g5

0xc627,	// (0x0005aa62) bg_popup_call2_rect_pane_g6

0xc62f,	// (0x0005aa6a) bg_popup_call2_rect_pane_g7

0xc637,	// (0x0005aa72) bg_popup_call2_rect_pane_g8

0xc63f,	// (0x0005aa7a) bg_popup_call2_rect_pane_g9

0x0008,

0xf57a,	// (0x0005d9b5) bg_popup_call2_rect_pane_g

0xc647,	// (0x0005aa82) bg_popup_call2_bubble_pane_g1

0xc64f,	// (0x0005aa8a) bg_popup_call2_bubble_pane_g2

0xc657,	// (0x0005aa92) bg_popup_call2_bubble_pane_g3

0xc65f,	// (0x0005aa9a) bg_popup_call2_bubble_pane_g4

0xc667,	// (0x0005aaa2) bg_popup_call2_bubble_pane_g5

0xc66f,	// (0x0005aaaa) bg_popup_call2_bubble_pane_g6

0xc677,	// (0x0005aab2) bg_popup_call2_bubble_pane_g7

0xc67f,	// (0x0005aaba) bg_popup_call2_bubble_pane_g8

0xc687,	// (0x0005aac2) bg_popup_call2_bubble_pane_g9

0x0008,

0xf58d,	// (0x0005d9c8) bg_popup_call2_bubble_pane_g

0x12c2,	// (0x0004f6fd) aid_cale_week_size_cell_pane

0x1bf7,	// (0x00050032) aid_cams_cif_uncrop_pane_ParamLimits

0x1bf7,	// (0x00050032) aid_cams_cif_uncrop_pane

0x1db0,	// (0x000501eb) aid_cams_size_cell_ParamLimits

0x1db0,	// (0x000501eb) aid_cams_size_cell

0x1dc4,	// (0x000501ff) grid_cams_pane_ParamLimits

0x1dde,	// (0x00050219) linegrid_cams_pane_ParamLimits

0x1ede,	// (0x00050319) call_video_pane_t1

0x1ef8,	// (0x00050333) call_video_pane_t2

0x0001,

0xf273,	// (0x0005d6ae) call_video_pane_t

0x232c,	// (0x00050767) aid_cale_month_size_cell_pane_ParamLimits

0x232c,	// (0x00050767) aid_cale_month_size_cell_pane

0xf617,	// (0x0005da52) smil_status_volume_pane_g

0xa6b2,	// (0x00058aed) volume_smil_pane_ParamLimits

0x9a1c,	// (0x00057e57) aid_popup2_width_pane

0x1220,	// (0x0004f65b) cell_qdial_pane_g4_ParamLimits

0x1220,	// (0x0004f65b) cell_qdial_pane_g4

0x3277,	// (0x000516b2) aid_blid_cardinal_pane_ParamLimits

0x3283,	// (0x000516be) aid_blid_destination_pane_ParamLimits

0x3283,	// (0x000516be) aid_blid_destination_pane

0xa0df,	// (0x0005851a) bg_popup_call_poc_act_pane_ParamLimits

0xa0df,	// (0x0005851a) bg_popup_call_poc_act_pane

0xa0df,	// (0x0005851a) bg_popup_call_poc_inact_pane_ParamLimits

0xa0df,	// (0x0005851a) bg_popup_call_poc_inact_pane

0xc68f,	// (0x0005aaca) bg_popup_call_poc_act_pane_g1

0xc697,	// (0x0005aad2) bg_popup_call_poc_act_pane_g2

0xc69f,	// (0x0005aada) bg_popup_call_poc_act_pane_g3

0xc65f,	// (0x0005aa9a) bg_popup_call_poc_act_pane_g4

0xc667,	// (0x0005aaa2) bg_popup_call_poc_act_pane_g5

0xc6a7,	// (0x0005aae2) bg_popup_call_poc_act_pane_g6

0xc677,	// (0x0005aab2) bg_popup_call_poc_act_pane_g7

0xc6af,	// (0x0005aaea) bg_popup_call_poc_act_pane_g8

0x9e84,	// (0x000582bf) main_usb_pane

0xc818,	// (0x0005ac53) popup_cale_lunar_info_window

0x21c1,	// (0x000505fc) im_reading_pane_t1_ParamLimits

0xa525,	// (0x00058960) list_im_pane_ParamLimits

0xa536,	// (0x00058971) scroll_pane_cp07_ParamLimits

0x9e84,	// (0x000582bf) grid_highlight_pane_cp012

0xa0df,	// (0x0005851a) mup_scale_pane_ParamLimits

0xb58a,	// (0x000599c5) main_usb_pane_g1_ParamLimits

0xb58a,	// (0x000599c5) main_usb_pane_g1

0x4007,	// (0x00052442) main_usb_pane_g2_ParamLimits

0x4007,	// (0x00052442) main_usb_pane_g2

0x0001,

0xf5b7,	// (0x0005d9f2) main_usb_pane_g_ParamLimits

0xf5b7,	// (0x0005d9f2) main_usb_pane_g

0x401d,	// (0x00052458) main_usb_pane_t1_ParamLimits

0x401d,	// (0x00052458) main_usb_pane_t1

0x402f,	// (0x0005246a) main_usb_pane_t2_ParamLimits

0x402f,	// (0x0005246a) main_usb_pane_t2

0x4041,	// (0x0005247c) main_usb_pane_t3_ParamLimits

0x4041,	// (0x0005247c) main_usb_pane_t3

0x4053,	// (0x0005248e) main_usb_pane_t4_ParamLimits

0x4053,	// (0x0005248e) main_usb_pane_t4

0x4068,	// (0x000524a3) main_usb_pane_t5_ParamLimits

0x4068,	// (0x000524a3) main_usb_pane_t5

0x407d,	// (0x000524b8) main_usb_pane_t6_ParamLimits

0x407d,	// (0x000524b8) main_usb_pane_t6

0x0005,

0xf5bc,	// (0x0005d9f7) main_usb_pane_t_ParamLimits

0x3218,	// (0x00051653) aid_text_placing

0x3223,	// (0x0005165e) main_location2_pane_t1_ParamLimits

0x3237,	// (0x00051672) main_location2_pane_t2_ParamLimits

0x324d,	// (0x00051688) main_location2_pane_t3_ParamLimits

0x3263,	// (0x0005169e) main_location2_pane_t4_ParamLimits

0x3263,	// (0x0005169e) main_location2_pane_t4

0xf3db,	// (0x0005d816) main_location2_pane_t_ParamLimits

0xa11b,	// (0x00058556) find_pinb_pane_g2_ParamLimits

0xa11b,	// (0x00058556) find_pinb_pane_g2

0x0001,

0xf122,	// (0x0005d55d) find_pinb_pane_g_ParamLimits

0xf122,	// (0x0005d55d) find_pinb_pane_g

0xa127,	// (0x00058562) find_pinb_pane_t1_ParamLimits

0xa139,	// (0x00058574) find_pinb_pane_t2_ParamLimits

0xf127,	// (0x0005d562) find_pinb_pane_t_ParamLimits

0x9e84,	// (0x000582bf) main_call3_pane

0x28fb,	// (0x00050d36) cale_month_day_heading_pane_t1_ParamLimits

0x2981,	// (0x00050dbc) cale_month_day_heading_pane_t2_ParamLimits

0x2a12,	// (0x00050e4d) cale_month_day_heading_pane_t3_ParamLimits

0x2aa3,	// (0x00050ede) cale_month_day_heading_pane_t4_ParamLimits

0x2b34,	// (0x00050f6f) cale_month_day_heading_pane_t5_ParamLimits

0x2bd5,	// (0x00051010) cale_month_day_heading_pane_t6_ParamLimits

0x2c7a,	// (0x000510b5) cale_month_day_heading_pane_t7_ParamLimits

0xf2ab,	// (0x0005d6e6) cale_month_day_heading_pane_t_ParamLimits

0x2f2c,	// (0x00051367) smil_status_volume_pane

0x3ac4,	// (0x00051eff) postcard_address_pane_ParamLimits

0x3ac4,	// (0x00051eff) postcard_address_pane

0x3ada,	// (0x00051f15) postcard_message_pane_ParamLimits

0x3ada,	// (0x00051f15) postcard_message_pane

0x3fe3,	// (0x0005241e) call2_cli_visual_pane_t1_ParamLimits

0x3fe3,	// (0x0005241e) call2_cli_visual_pane_t1

0x4870,	// (0x00052cab) postcard_message_pane_t1_ParamLimits

0x4870,	// (0x00052cab) postcard_message_pane_t1

0x4859,	// (0x00052c94) postcard_address_pane_t1_ParamLimits

0x4859,	// (0x00052c94) postcard_address_pane_t1

0x4845,	// (0x00052c80) popup_call3_audio_in_window_ParamLimits

0x4845,	// (0x00052c80) popup_call3_audio_in_window

0x46ca,	// (0x00052b05) bg_popup_call3_in_pane_ParamLimits

0x46ca,	// (0x00052b05) bg_popup_call3_in_pane

0x4746,	// (0x00052b81) popup_call3_audio_in_window_g1_ParamLimits

0x4746,	// (0x00052b81) popup_call3_audio_in_window_g1

0x4766,	// (0x00052ba1) popup_call3_audio_in_window_g2_ParamLimits

0x4766,	// (0x00052ba1) popup_call3_audio_in_window_g2

0x4786,	// (0x00052bc1) popup_call3_audio_in_window_g3_ParamLimits

0x4786,	// (0x00052bc1) popup_call3_audio_in_window_g3

0x0003,

0xf61e,	// (0x0005da59) popup_call3_audio_in_window_g_ParamLimits

0xf61e,	// (0x0005da59) popup_call3_audio_in_window_g

0x47b7,	// (0x00052bf2) popup_call3_audio_in_window_t1_ParamLimits

0x47b7,	// (0x00052bf2) popup_call3_audio_in_window_t1

0x47f5,	// (0x00052c30) popup_call3_audio_in_window_t2_ParamLimits

0x47f5,	// (0x00052c30) popup_call3_audio_in_window_t2

0x4833,	// (0x00052c6e) popup_call3_audio_in_window_t3_ParamLimits

0x4833,	// (0x00052c6e) popup_call3_audio_in_window_t3

0x0002,

0xf627,	// (0x0005da62) popup_call3_audio_in_window_t_ParamLimits

0xf627,	// (0x0005da62) popup_call3_audio_in_window_t

0xb3d4,	// (0x0005980f) bg_popup_call3_rect_pane

0xc607,	// (0x0005aa42) bg_popup_call3_rect_pane_g1

0xa2e7,	// (0x00058722) bg_popup_call3_rect_pane_g2

0xc60f,	// (0x0005aa4a) bg_popup_call3_rect_pane_g3

0xc617,	// (0x0005aa52) bg_popup_call3_rect_pane_g4

0xc61f,	// (0x0005aa5a) bg_popup_call3_rect_pane_g5

0xc627,	// (0x0005aa62) bg_popup_call3_rect_pane_g6

0xc62f,	// (0x0005aa6a) bg_popup_call3_rect_pane_g7

0x367d,	// (0x00051ab8) mup_visualizer_osc_pane

0xb4a1,	// (0x000598dc) mup_visualizer_spec_pane

0x46fa,	// (0x00052b35) call3_video_qcif_pane_ParamLimits

0x46fa,	// (0x00052b35) call3_video_qcif_pane

0x470d,	// (0x00052b48) call3_video_qcif_uncrop_pane_ParamLimits

0x470d,	// (0x00052b48) call3_video_qcif_uncrop_pane

0x471d,	// (0x00052b58) call3_video_subqcif_pane_ParamLimits

0x471d,	// (0x00052b58) call3_video_subqcif_pane

0x4733,	// (0x00052b6e) call3_video_subqcif_uncrop_pane_ParamLimits

0x4733,	// (0x00052b6e) call3_video_subqcif_uncrop_pane

0x47a6,	// (0x00052be1) popup_call3_audio_in_window_g4_ParamLimits

0x47a6,	// (0x00052be1) popup_call3_audio_in_window_g4

0x46b9,	// (0x00052af4) mup_spec_half_pane

0x46c2,	// (0x00052afd) mup_spec_half_pane_cp

0xc8b3,	// (0x0005acee) mup_osc_middle_pane

0xc8bc,	// (0x0005acf7) mup_visualizer_osc_pane_g1

0x4699,	// (0x00052ad4) mup_spec_bar_pane_ParamLimits

0x4699,	// (0x00052ad4) mup_spec_bar_pane

0xc8a0,	// (0x0005acdb) mup_spec_bar_pane_g1

0xc8aa,	// (0x0005ace5) mup_spec_bar_pane_g2

0x0001,

0xf612,	// (0x0005da4d) mup_spec_bar_pane_g

0x12c2,	// (0x0004f6fd) aid_cale_week_size_cell_pane_ParamLimits

0x12dc,	// (0x0004f717) bg_cale_heading_pane_ParamLimits

0xa363,	// (0x0005879e) bg_cale_pane_cp01_ParamLimits

0x1305,	// (0x0004f740) cale_week_corner_pane_ParamLimits

0x1324,	// (0x0004f75f) cale_week_day_heading_pane_ParamLimits

0x1352,	// (0x0004f78d) cale_week_scroll_pane_g1_ParamLimits

0x1376,	// (0x0004f7b1) cale_week_scroll_pane_g2_ParamLimits

0x138e,	// (0x0004f7c9) cale_week_scroll_pane_g3_ParamLimits

0x13a6,	// (0x0004f7e1) cale_week_scroll_pane_g4_ParamLimits

0x13c2,	// (0x0004f7fd) cale_week_scroll_pane_g5_ParamLimits

0x13e2,	// (0x0004f81d) cale_week_scroll_pane_g6_ParamLimits

0x1402,	// (0x0004f83d) cale_week_scroll_pane_g7_ParamLimits

0x1426,	// (0x0004f861) cale_week_scroll_pane_g8_ParamLimits

0x144a,	// (0x0004f885) cale_week_scroll_pane_g9_ParamLimits

0x1467,	// (0x0004f8a2) cale_week_scroll_pane_g10_ParamLimits

0x1484,	// (0x0004f8bf) cale_week_scroll_pane_g11_ParamLimits

0x14a1,	// (0x0004f8dc) cale_week_scroll_pane_g12_ParamLimits

0x14be,	// (0x0004f8f9) cale_week_scroll_pane_g13_ParamLimits

0x14db,	// (0x0004f916) cale_week_scroll_pane_g14_ParamLimits

0x1504,	// (0x0004f93f) cale_week_scroll_pane_g15_ParamLimits

0xf1b3,	// (0x0005d5ee) cale_week_scroll_pane_g_ParamLimits

0x152d,	// (0x0004f968) cale_week_time_pane_ParamLimits

0x1551,	// (0x0004f98c) grid_cale_week_pane_ParamLimits

0xa381,	// (0x000587bc) listscroll_cale_week_pane_t1

0xa393,	// (0x000587ce) scroll_pane_cp08_ParamLimits

0x2399,	// (0x000507d4) cale_month_corner_pane_ParamLimits

0xadd4,	// (0x0005920f) cale_month_pane_t1

0x2881,	// (0x00050cbc) cale_month_week_pane_ParamLimits

0x3046,	// (0x00051481) popup_call_status_window_g1_ParamLimits

0x305a,	// (0x00051495) popup_call_status_window_g2_ParamLimits

0x306e,	// (0x000514a9) popup_call_status_window_g3_ParamLimits

0xf362,	// (0x0005d79d) popup_call_status_window_g_ParamLimits

0xb176,	// (0x000595b1) aid_call2_pane

0xfe12,	// (0x0004e24d) msg_header_pane_g1

0x3ac4,	// (0x00051eff) postcard_address2_pane_ParamLimits

0x3ac4,	// (0x00051eff) postcard_address2_pane

0x3ada,	// (0x00051f15) postcard_message2_pane_ParamLimits

0x3ada,	// (0x00051f15) postcard_message2_pane

0x4649,	// (0x00052a84) message2_row_pane_ParamLimits

0x4649,	// (0x00052a84) message2_row_pane

0x4666,	// (0x00052aa1) address2_row_pane_ParamLimits

0x4666,	// (0x00052aa1) address2_row_pane

0xc86e,	// (0x0005aca9) postcard_message2_row_pane_g1

0xc876,	// (0x0005acb1) postcard_message2_row_pane_t1

0xc86e,	// (0x0005aca9) address2_row_pane_g1

0xc876,	// (0x0005acb1) address2_row_pane_t1

0x1a7d,	// (0x0004feb8) aid_size_cell_vorec

0x9e84,	// (0x000582bf) main_rss_pane

0x4679,	// (0x00052ab4) rss_list_single_pane_ParamLimits

0x4679,	// (0x00052ab4) rss_list_single_pane

0xc884,	// (0x0005acbf) rss_list_single_pane_t1

0xc892,	// (0x0005accd) rss_list_single_pane_t2

0x0001,

0xf60d,	// (0x0005da48) rss_list_single_pane_t

0x9e84,	// (0x000582bf) main_camera2_pane

0x9e84,	// (0x000582bf) main_video2_pane

0x48df,	// (0x00052d1a) cams_zoom_pane_cp2_ParamLimits

0x48df,	// (0x00052d1a) cams_zoom_pane_cp2

0x48f6,	// (0x00052d31) image2_vga_pane_ParamLimits

0x48f6,	// (0x00052d31) image2_vga_pane

0x493e,	// (0x00052d79) main_camera2_pane_g1_ParamLimits

0x493e,	// (0x00052d79) main_camera2_pane_g1

0x495e,	// (0x00052d99) main_camera2_pane_g2_ParamLimits

0x495e,	// (0x00052d99) main_camera2_pane_g2

0x4975,	// (0x00052db0) main_camera2_pane_g3_ParamLimits

0x4975,	// (0x00052db0) main_camera2_pane_g3

0x498c,	// (0x00052dc7) main_camera2_pane_g4_ParamLimits

0x498c,	// (0x00052dc7) main_camera2_pane_g4

0x49a3,	// (0x00052dde) main_camera2_pane_g5_ParamLimits

0x49a3,	// (0x00052dde) main_camera2_pane_g5

0x49ba,	// (0x00052df5) main_camera2_pane_g6_ParamLimits

0x49ba,	// (0x00052df5) main_camera2_pane_g6

0x49d1,	// (0x00052e0c) main_camera2_pane_g7_ParamLimits

0x49d1,	// (0x00052e0c) main_camera2_pane_g7

0x49e8,	// (0x00052e23) main_camera2_pane_g8_ParamLimits

0x49e8,	// (0x00052e23) main_camera2_pane_g8

0x0008,

0xf62e,	// (0x0005da69) main_camera2_pane_g_ParamLimits

0xf62e,	// (0x0005da69) main_camera2_pane_g

0x4a16,	// (0x00052e51) main_camera2_pane_t1_ParamLimits

0x4a16,	// (0x00052e51) main_camera2_pane_t1

0x4a4b,	// (0x00052e86) main_camera2_pane_t2_ParamLimits

0x4a4b,	// (0x00052e86) main_camera2_pane_t2

0x4a68,	// (0x00052ea3) main_camera2_pane_t3_ParamLimits

0x4a68,	// (0x00052ea3) main_camera2_pane_t3

0x4ac6,	// (0x00052f01) main_camera2_pane_t4_ParamLimits

0x4ac6,	// (0x00052f01) main_camera2_pane_t4

0x0006,

0xf641,	// (0x0005da7c) main_camera2_pane_t_ParamLimits

0xf641,	// (0x0005da7c) main_camera2_pane_t

0x4b4f,	// (0x00052f8a) cams_zoom_pane_cp4_ParamLimits

0x4b4f,	// (0x00052f8a) cams_zoom_pane_cp4

0x4b65,	// (0x00052fa0) image2_cif_pane_ParamLimits

0x4b65,	// (0x00052fa0) image2_cif_pane

0x4b90,	// (0x00052fcb) image2_subqcif_pane_ParamLimits

0x4b90,	// (0x00052fcb) image2_subqcif_pane

0x4bab,	// (0x00052fe6) main_video2_pane_g1_ParamLimits

0x4bab,	// (0x00052fe6) main_video2_pane_g1

0x4bc5,	// (0x00053000) main_video2_pane_g2_ParamLimits

0x4bc5,	// (0x00053000) main_video2_pane_g2

0x4bdb,	// (0x00053016) main_video2_pane_g3_ParamLimits

0x4bdb,	// (0x00053016) main_video2_pane_g3

0x4bf1,	// (0x0005302c) main_video2_pane_g4_ParamLimits

0x4bf1,	// (0x0005302c) main_video2_pane_g4

0x4c07,	// (0x00053042) main_video2_pane_g5_ParamLimits

0x4c07,	// (0x00053042) main_video2_pane_g5

0x4c1d,	// (0x00053058) main_video2_pane_g6_ParamLimits

0x4c1d,	// (0x00053058) main_video2_pane_g6

0x0005,

0xf650,	// (0x0005da8b) main_video2_pane_g_ParamLimits

0xf650,	// (0x0005da8b) main_video2_pane_g

0x4c37,	// (0x00053072) main_video2_pane_t1_ParamLimits

0x4c37,	// (0x00053072) main_video2_pane_t1

0x4c5b,	// (0x00053096) main_video2_pane_t2_ParamLimits

0x4c5b,	// (0x00053096) main_video2_pane_t2

0x4cab,	// (0x000530e6) main_video2_pane_t3_ParamLimits

0x4cab,	// (0x000530e6) main_video2_pane_t3

0x0002,

0xf65d,	// (0x0005da98) main_video2_pane_t_ParamLimits

0xf65d,	// (0x0005da98) main_video2_pane_t

0x413b,	// (0x00052576) call_muted_g2

0x0001,

0xf5ff,	// (0x0005da3a) call_muted_g

0x9e84,	// (0x000582bf) main_mup2_pane

0x4cf3,	// (0x0005312e) main_mup2_pane_g1_ParamLimits

0x4cf3,	// (0x0005312e) main_mup2_pane_g1

0x4cff,	// (0x0005313a) main_mup2_pane_g2_ParamLimits

0x4cff,	// (0x0005313a) main_mup2_pane_g2

0xa71d,	// (0x00058b58) main_mup_pane_g13_cp1

0xa725,	// (0x00058b60) mup_volume_pane_cp1

0x4d1d,	// (0x00053158) main_mup2_pane_g4_ParamLimits

0x4d1d,	// (0x00053158) main_mup2_pane_g4

0x4d2f,	// (0x0005316a) main_mup2_pane_g5_ParamLimits

0x4d2f,	// (0x0005316a) main_mup2_pane_g5

0x4d41,	// (0x0005317c) main_mup2_pane_g6_ParamLimits

0x4d41,	// (0x0005317c) main_mup2_pane_g6

0x4d53,	// (0x0005318e) main_mup2_pane_g7_ParamLimits

0x4d53,	// (0x0005318e) main_mup2_pane_g7

0x0006,

0xf664,	// (0x0005da9f) main_mup2_pane_g_ParamLimits

0xf664,	// (0x0005da9f) main_mup2_pane_g

0x4d6b,	// (0x000531a6) main_mup2_pane_t1_ParamLimits

0x4d6b,	// (0x000531a6) main_mup2_pane_t1

0x4d81,	// (0x000531bc) main_mup2_pane_t2_ParamLimits

0x4d81,	// (0x000531bc) main_mup2_pane_t2

0x4d97,	// (0x000531d2) main_mup2_pane_t3_ParamLimits

0x4d97,	// (0x000531d2) main_mup2_pane_t3

0x4dad,	// (0x000531e8) main_mup2_pane_t4_ParamLimits

0x4dad,	// (0x000531e8) main_mup2_pane_t4

0x4dc5,	// (0x00053200) main_mup2_pane_t5_ParamLimits

0x4dc5,	// (0x00053200) main_mup2_pane_t5

0x4ddd,	// (0x00053218) main_mup2_pane_t6_ParamLimits

0x4ddd,	// (0x00053218) main_mup2_pane_t6

0x0005,

0xf673,	// (0x0005daae) main_mup2_pane_t_ParamLimits

0xf673,	// (0x0005daae) main_mup2_pane_t

0x4e0d,	// (0x00053248) mup2_visualizer_pane_ParamLimits

0x4e0d,	// (0x00053248) mup2_visualizer_pane

0x4e3b,	// (0x00053276) mup_progress_pane_cp_ParamLimits

0x4e3b,	// (0x00053276) mup_progress_pane_cp

0xa708,	// (0x00058b43) mup_volume_pane_cp_ParamLimits

0xa708,	// (0x00058b43) mup_volume_pane_cp

0x4e51,	// (0x0005328c) mup2_visualizer_pane_g1_ParamLimits

0x4e51,	// (0x0005328c) mup2_visualizer_pane_g1

0xc8f3,	// (0x0005ad2e) mup2_visualizer_pane_g2_ParamLimits

0xc8f3,	// (0x0005ad2e) mup2_visualizer_pane_g2

0x4e68,	// (0x000532a3) mup2_visualizer_pane_g3_ParamLimits

0x4e68,	// (0x000532a3) mup2_visualizer_pane_g3

0x0002,

0xf680,	// (0x0005dabb) mup2_visualizer_pane_g_ParamLimits

0xf680,	// (0x0005dabb) mup2_visualizer_pane_g

0xb6d3,	// (0x00059b0e) aid_size_cell_fmradio

0x42eb,	// (0x00052726) aid_height_parent_landcape

0xac32,	// (0x0005906d) wml_content_pane_cp

0xac3a,	// (0x00059075) wml_tabs_pane

0xac43,	// (0x0005907e) popup_wml_miniature_window

0xac4b,	// (0x00059086) scroll_pane_cp021

0xac5f,	// (0x0005909a) wml_content_pane_comp8

0x9e84,	// (0x000582bf) bg_popup_sub_pane_cp05

0xc911,	// (0x0005ad4c) popup_wml_miniature_window_g1

0xc919,	// (0x0005ad54) wml_miniature_view_pane

0x4e74,	// (0x000532af) aid_size_wml_view

0x4e7c,	// (0x000532b7) wml_miniature_view_pane_g1

0x4e85,	// (0x000532c0) wml_miniature_view_pane_g2

0x4e8e,	// (0x000532c9) wml_miniature_view_pane_g3

0x4e96,	// (0x000532d1) wml_miniature_view_pane_g4

0x4e9e,	// (0x000532d9) wml_miniature_view_pane_g5

0x4ea6,	// (0x000532e1) wml_miniature_view_pane_g6

0x4eae,	// (0x000532e9) wml_miniature_view_pane_g7

0x4eb6,	// (0x000532f1) wml_miniature_view_pane_g8

0x0007,

0xf687,	// (0x0005dac2) wml_miniature_view_pane_g

0xc921,	// (0x0005ad5c) background_graphic_ParamLimits

0xc921,	// (0x0005ad5c) background_graphic

0xc92d,	// (0x0005ad68) wml_tabs_2_pane

0xc936,	// (0x0005ad71) wml_tabs_3_pane_ParamLimits

0xc936,	// (0x0005ad71) wml_tabs_3_pane

0xc948,	// (0x0005ad83) wml_tabs_4_pane_ParamLimits

0xc948,	// (0x0005ad83) wml_tabs_4_pane

0xc95e,	// (0x0005ad99) wml_tabs_5_pane_ParamLimits

0xc95e,	// (0x0005ad99) wml_tabs_5_pane

0xc978,	// (0x0005adb3) wml_tabs_pane_g2_ParamLimits

0xc978,	// (0x0005adb3) wml_tabs_pane_g2

0xc98c,	// (0x0005adc7) wml_tabs_pane_g3_ParamLimits

0xc98c,	// (0x0005adc7) wml_tabs_pane_g3

0x4ebe,	// (0x000532f9) wml_tabs_2_active_pane_ParamLimits

0x4ebe,	// (0x000532f9) wml_tabs_2_active_pane

0x4ed2,	// (0x0005330d) wml_tabs_2_passive_pane_ParamLimits

0x4ed2,	// (0x0005330d) wml_tabs_2_passive_pane

0x4ee6,	// (0x00053321) wml_tabs_3_active_pane_cp_ParamLimits

0x4ee6,	// (0x00053321) wml_tabs_3_active_pane_cp

0x4efb,	// (0x00053336) wml_tabs_3_passive_pane_ParamLimits

0x4efb,	// (0x00053336) wml_tabs_3_passive_pane

0x4f0e,	// (0x00053349) wml_tabs_3_passive_pane_cp_ParamLimits

0x4f0e,	// (0x00053349) wml_tabs_3_passive_pane_cp

0x4f25,	// (0x00053360) tabs_4_active_pane

0x4f2d,	// (0x00053368) tabs_4_passive_pane

0x4f37,	// (0x00053372) tabs_4_passive_pane_cp

0x4f3f,	// (0x0005337a) tabs_4_passive_pane_cp2

0x3fff,	// (0x0005243a) aid_height_text

0x364f,	// (0x00051a8a) mup_volume_cont_pane_ParamLimits

0x364f,	// (0x00051a8a) mup_volume_cont_pane

0x0ead,	// (0x0004f2e8) aid_size_cell_pinb

0x0eb7,	// (0x0004f2f2) aid_size_list_pinb

0x4e27,	// (0x00053262) mup2_volume_cont_pane_ParamLimits

0x4e27,	// (0x00053262) mup2_volume_cont_pane

0xa6f4,	// (0x00058b2f) mup2_volume_cont_pane_g1_ParamLimits

0xa6f4,	// (0x00058b2f) mup2_volume_cont_pane_g1

0x0b5d,	// (0x0004ef98) aid_size_cell_touch_ParamLimits

0x0b5d,	// (0x0004ef98) aid_size_cell_touch

0x0d9d,	// (0x0004f1d8) touch_pane_ParamLimits

0x0d9d,	// (0x0004f1d8) touch_pane

0x9a0a,	// (0x00057e45) main_rss2_pane

0xc9a9,	// (0x0005ade4) listscroll_rss2_pane

0xc9b2,	// (0x0005aded) rss2_navigation_pane

0xc9ba,	// (0x0005adf5) list_rss2_pane

0xb29a,	// (0x000596d5) scroll_pane_cp22

0xc9c2,	// (0x0005adfd) rss2_navigation_pane_g1

0xc9cb,	// (0x0005ae06) rss2_navigation_pane_g2

0xc9d3,	// (0x0005ae0e) rss2_navigation_pane_g3

0x0002,

0xf698,	// (0x0005dad3) rss2_navigation_pane_g

0xc9db,	// (0x0005ae16) rss2_navigation_pane_t1

0x4f49,	// (0x00053384) rss2_list_single_pane_ParamLimits

0x4f49,	// (0x00053384) rss2_list_single_pane

0xc9e9,	// (0x0005ae24) rss2_list_single_pane_t2

0xc9f7,	// (0x0005ae32) rss2_list_single_pane_t3_ParamLimits

0xc9f7,	// (0x0005ae32) rss2_list_single_pane_t3

0xca14,	// (0x0005ae4f) rss2_list_single_pane_t4

0x2f14,	// (0x0005134f) smil_status_pane_g1

0x9a63,	// (0x00057e9e) main_image2_pane_ParamLimits

0x9a63,	// (0x00057e9e) main_image2_pane

0x49ff,	// (0x00052e3a) main_camera2_pane_g9_ParamLimits

0x49ff,	// (0x00052e3a) main_camera2_pane_g9

0x4b1b,	// (0x00052f56) main_camera2_pane_t5_ParamLimits

0x4b1b,	// (0x00052f56) main_camera2_pane_t5

0xa6c9,	// (0x00058b04) main_camera2_pane_t6_ParamLimits

0xa6c9,	// (0x00058b04) main_camera2_pane_t6

0x4f5f,	// (0x0005339a) main_image2_pane_g1_ParamLimits

0x4f5f,	// (0x0005339a) main_image2_pane_g1

0x3d19,	// (0x00052154) smil2_video_pane_ParamLimits

0x3d19,	// (0x00052154) smil2_video_pane

0x0b95,	// (0x0004efd0) aid_zoom_text_primary_cp

0x9a59,	// (0x00057e94) popup_preview_fixed_window

0xa51d,	// (0x00058958) im_reading_pane_g1

0x48d1,	// (0x00052d0c) cams2_bc_adjust_pane_cp_ParamLimits

0x48d1,	// (0x00052d0c) cams2_bc_adjust_pane_cp

0x4b41,	// (0x00052f7c) cams2_bc_adjust_pane_ParamLimits

0x4b41,	// (0x00052f7c) cams2_bc_adjust_pane

0xa72d,	// (0x00058b68) cams2_bc_adjust_pane_g1

0xa735,	// (0x00058b70) cams2_slider_pane

0xa73e,	// (0x00058b79) cams2_slider_pane_g1

0xa747,	// (0x00058b82) cams2_slider_pane_g2

0x0006,

0xf69f,	// (0x0005dada) cams2_slider_pane_g

0x0fa7,	// (0x0004f3e2) calc_display_pane_ParamLimits

0x0fcf,	// (0x0004f40a) calc_paper_pane_ParamLimits

0x0ff2,	// (0x0004f42d) grid_calc_pane_ParamLimits

0xa634,	// (0x00058a6f) popup_clock_digital_window_t1_ParamLimits

0xb670,	// (0x00059aab) main_image_pane_t1

0x0f89,	// (0x0004f3c4) aid_size_cell_calc_ParamLimits

0x0f89,	// (0x0004f3c4) aid_size_cell_calc

0x4331,	// (0x0005276c) popup_blid_sat_info2_window_ParamLimits

0x4331,	// (0x0005276c) popup_blid_sat_info2_window

0xca2a,	// (0x0005ae65) aid_size_cell_blid

0xca32,	// (0x0005ae6d) bg_popup_window_pane_cp07

0xca55,	// (0x0005ae90) grid_popup_blid_pane

0xca5f,	// (0x0005ae9a) heading_pane_cp05_ParamLimits

0xca5f,	// (0x0005ae9a) heading_pane_cp05

0xcb29,	// (0x0005af64) cell_popup_blid_pane_ParamLimits

0xcb29,	// (0x0005af64) cell_popup_blid_pane

0xcb53,	// (0x0005af8e) cell_popup_blid_pane_g1

0xcb5b,	// (0x0005af96) cell_popup_blid_pane_t1

0x4df7,	// (0x00053232) mup2_indicator_pane_ParamLimits

0x4df7,	// (0x00053232) mup2_indicator_pane

0xb3d4,	// (0x0005980f) mup2_visualizer_osc_pane

0xc8ff,	// (0x0005ad3a) mup2_visualizer_spec_pane_ParamLimits

0xc8ff,	// (0x0005ad3a) mup2_visualizer_spec_pane

0x4f75,	// (0x000533b0) mup2_spec_half_pane

0x4f7e,	// (0x000533b9) mup2_spec_half_pane_cp

0x4f86,	// (0x000533c1) mup2_spec_bar_pane_ParamLimits

0x4f86,	// (0x000533c1) mup2_spec_bar_pane

0xc8a0,	// (0x0005acdb) mup2_spec_bar_pane_g1

0xc8aa,	// (0x0005ace5) mup2_spec_bar_pane_g2

0x0001,

0xf612,	// (0x0005da4d) mup2_spec_bar_pane_g

0x4fa6,	// (0x000533e1) mup2_osc_middle_pane

0xc8bc,	// (0x0005acf7) mup2_visualizer_osc_pane_g1

0x9a91,	// (0x00057ecc) popup_number_entry_window_t1_ParamLimits

0x9aa4,	// (0x00057edf) popup_number_entry_window_t2_ParamLimits

0x9ab6,	// (0x00057ef1) popup_number_entry_window_t3_ParamLimits

0x0def,	// (0x0004f22a) popup_number_entry_window_t5_ParamLimits

0x0def,	// (0x0004f22a) popup_number_entry_window_t5

0xf0cd,	// (0x0005d508) popup_number_entry_window_t_ParamLimits

0x9ac8,	// (0x00057f03) text_title_cp2_ParamLimits

0xa673,	// (0x00058aae) aid_hotspot_pointer_text2_pane

0xa699,	// (0x00058ad4) main_viewer_pane_g9_ParamLimits

0xa699,	// (0x00058ad4) main_viewer_pane_g9

0xadd4,	// (0x0005920f) cale_month_pane_t1_ParamLimits

0xadfa,	// (0x00059235) bg_cale_pane_ParamLimits

0xae12,	// (0x0005924d) list_cale_pane_ParamLimits

0xae23,	// (0x0005925e) listscroll_cale_day_pane_t1

0xae35,	// (0x00059270) scroll_pane_cp09_ParamLimits

0x3685,	// (0x00051ac0) main_mup_eq_pane_t1_ParamLimits

0x3685,	// (0x00051ac0) main_mup_eq_pane_t1

0x36a1,	// (0x00051adc) main_mup_eq_pane_t2_ParamLimits

0x36a1,	// (0x00051adc) main_mup_eq_pane_t2

0x36bd,	// (0x00051af8) main_mup_eq_pane_t3_ParamLimits

0x36bd,	// (0x00051af8) main_mup_eq_pane_t3

0x36db,	// (0x00051b16) main_mup_eq_pane_t4_ParamLimits

0x36db,	// (0x00051b16) main_mup_eq_pane_t4

0x36f9,	// (0x00051b34) main_mup_eq_pane_t5_ParamLimits

0x36f9,	// (0x00051b34) main_mup_eq_pane_t5

0x3717,	// (0x00051b52) main_mup_eq_pane_t6_ParamLimits

0x3717,	// (0x00051b52) main_mup_eq_pane_t6

0x372d,	// (0x00051b68) main_mup_eq_pane_t7_ParamLimits

0x372d,	// (0x00051b68) main_mup_eq_pane_t7

0x3743,	// (0x00051b7e) main_mup_eq_pane_t8_ParamLimits

0x3743,	// (0x00051b7e) main_mup_eq_pane_t8

0x3759,	// (0x00051b94) main_mup_eq_pane_t9_ParamLimits

0x3759,	// (0x00051b94) main_mup_eq_pane_t9

0x3775,	// (0x00051bb0) main_mup_eq_pane_t10_ParamLimits

0x3775,	// (0x00051bb0) main_mup_eq_pane_t10

0x0009,

0xf461,	// (0x0005d89c) main_mup_eq_pane_t_ParamLimits

0xf461,	// (0x0005d89c) main_mup_eq_pane_t

0x384a,	// (0x00051c85) mup_equalizer_pane_cp5_ParamLimits

0x3862,	// (0x00051c9d) mup_equalizer_pane_cp6_ParamLimits

0x387a,	// (0x00051cb5) mup_equalizer_pane_cp7_ParamLimits

0x9a0a,	// (0x00057e45) main_gallery_pane

0xc8c5,	// (0x0005ad00) smil2_volume_pane

0xc8cd,	// (0x0005ad08) smil_status_volume_pane_g1_ParamLimits

0xc8e0,	// (0x0005ad1b) smil_status_volume_pane_g2_ParamLimits

0xa6a5,	// (0x00058ae0) smil_status_volume_pane_g3_ParamLimits

0xf617,	// (0x0005da52) smil_status_volume_pane_g_ParamLimits

0xca32,	// (0x0005ae6d) bg_popup_window_pane_cp07_ParamLimits

0xca40,	// (0x0005ae7b) blid_firmament_pane

0x4faf,	// (0x000533ea) aid_size_cell_gallery_ParamLimits

0x4faf,	// (0x000533ea) aid_size_cell_gallery

0x4fc5,	// (0x00053400) grid_gallery_pane_ParamLimits

0x4fc5,	// (0x00053400) grid_gallery_pane

0x4fe0,	// (0x0005341b) cell_gallery_pane_ParamLimits

0x4fe0,	// (0x0005341b) cell_gallery_pane

0xcb69,	// (0x0005afa4) bg_cell_gallery_focus_pane_ParamLimits

0xcb69,	// (0x0005afa4) bg_cell_gallery_focus_pane

0xcb7b,	// (0x0005afb6) cell_gallery_pane_g1_ParamLimits

0xcb7b,	// (0x0005afb6) cell_gallery_pane_g1

0x502b,	// (0x00053466) cell_gallery_pane_g2_ParamLimits

0x502b,	// (0x00053466) cell_gallery_pane_g2

0x5038,	// (0x00053473) cell_gallery_pane_g3_ParamLimits

0x5038,	// (0x00053473) cell_gallery_pane_g3

0xcb87,	// (0x0005afc2) cell_gallery_pane_g4_ParamLimits

0xcb87,	// (0x0005afc2) cell_gallery_pane_g4

0x0003,

0xf6c5,	// (0x0005db00) cell_gallery_pane_g_ParamLimits

0xf6c5,	// (0x0005db00) cell_gallery_pane_g

0xcb93,	// (0x0005afce) bg_cell_gallery_focus_pane_g1

0xcb9b,	// (0x0005afd6) bg_cell_gallery_focus_pane_g2

0xcba3,	// (0x0005afde) bg_cell_gallery_focus_pane_g3

0xcbab,	// (0x0005afe6) bg_cell_gallery_focus_pane_g4

0xcbb3,	// (0x0005afee) bg_cell_gallery_focus_pane_g5

0xcbbb,	// (0x0005aff6) bg_cell_gallery_focus_pane_g6

0xcbc3,	// (0x0005affe) bg_cell_gallery_focus_pane_g7

0xcbcb,	// (0x0005b006) bg_cell_gallery_focus_pane_g8

0x0007,

0xf6ce,	// (0x0005db09) bg_cell_gallery_focus_pane_g

0xcbd3,	// (0x0005b00e) aid_firma_cardinal

0xcbe7,	// (0x0005b022) blid_firmament_pane_t1

0xcbfe,	// (0x0005b039) blid_firmament_pane_t2

0xcc15,	// (0x0005b050) blid_firmament_pane_t3

0xcc2c,	// (0x0005b067) blid_firmament_pane_t4

0x0003,

0xf6df,	// (0x0005db1a) blid_firmament_pane_t

0xcc43,	// (0x0005b07e) blid_sat_info_pane

0xcc53,	// (0x0005b08e) blid_sat_info_pane_g1

0xcc53,	// (0x0005b08e) blid_sat_info_pane_g2

0x0001,

0xf6e8,	// (0x0005db23) blid_sat_info_pane_g

0xcc5d,	// (0x0005b098) blid_sat_info_pane_t1

0xcc6b,	// (0x0005b0a6) smil2_volume_content_pane

0xcc74,	// (0x0005b0af) smil2_volume_pane_g1

0xcc7c,	// (0x0005b0b7) smil2_volume_content_pane_g1

0xcc85,	// (0x0005b0c0) smil2_volume_content_pane_g2

0xcc8e,	// (0x0005b0c9) smil2_volume_content_pane_g3

0xcc97,	// (0x0005b0d2) smil2_volume_content_pane_g4

0xcca0,	// (0x0005b0db) smil2_volume_content_pane_g5

0xcca9,	// (0x0005b0e4) smil2_volume_content_pane_g6

0xccb2,	// (0x0005b0ed) smil2_volume_content_pane_g7

0xccbb,	// (0x0005b0f6) smil2_volume_content_pane_g8

0xccc4,	// (0x0005b0ff) smil2_volume_content_pane_g9

0xcccd,	// (0x0005b108) smil2_volume_content_pane_g10

0x0009,

0xf6ed,	// (0x0005db28) smil2_volume_content_pane_g

0x1618,	// (0x0004fa53) cale_week_day_heading_pane_t1_ParamLimits

0x1662,	// (0x0004fa9d) cale_week_day_heading_pane_t2_ParamLimits

0x16b1,	// (0x0004faec) cale_week_day_heading_pane_t3_ParamLimits

0x1700,	// (0x0004fb3b) cale_week_day_heading_pane_t4_ParamLimits

0x174f,	// (0x0004fb8a) cale_week_day_heading_pane_t5_ParamLimits

0x17a2,	// (0x0004fbdd) cale_week_day_heading_pane_t6_ParamLimits

0x17f9,	// (0x0004fc34) cale_week_day_heading_pane_t7_ParamLimits

0xf1d2,	// (0x0005d60d) cale_week_day_heading_pane_t_ParamLimits

0xa3b5,	// (0x000587f0) bg_cale_side_pane_ParamLimits

0x1843,	// (0x0004fc7e) cale_week_time_pane_t1_ParamLimits

0x187d,	// (0x0004fcb8) cale_week_time_pane_t2_ParamLimits

0x18b7,	// (0x0004fcf2) cale_week_time_pane_t3_ParamLimits

0x18f1,	// (0x0004fd2c) cale_week_time_pane_t4_ParamLimits

0x192b,	// (0x0004fd66) cale_week_time_pane_t5_ParamLimits

0x1965,	// (0x0004fda0) cale_week_time_pane_t6_ParamLimits

0x199f,	// (0x0004fdda) cale_week_time_pane_t7_ParamLimits

0x19d9,	// (0x0004fe14) cale_week_time_pane_t8_ParamLimits

0xf1e1,	// (0x0005d61c) cale_week_time_pane_t_ParamLimits

0x1a19,	// (0x0004fe54) cell_cale_week_pane_g2_ParamLimits

0xa3b5,	// (0x000587f0) bg_cale_side_pane_cp01_ParamLimits

0x2d23,	// (0x0005115e) cale_month_week_pane_t1_ParamLimits

0x2d3c,	// (0x00051177) cale_month_week_pane_t2_ParamLimits

0x2d55,	// (0x00051190) cale_month_week_pane_t3_ParamLimits

0x2d6e,	// (0x000511a9) cale_month_week_pane_t4_ParamLimits

0x2d87,	// (0x000511c2) cale_month_week_pane_t5_ParamLimits

0x2da0,	// (0x000511db) cale_month_week_pane_t6_ParamLimits

0xf2ba,	// (0x0005d6f5) cale_month_week_pane_t_ParamLimits

0xa5b4,	// (0x000589ef) cell_cale_month_pane_g1_ParamLimits

0x9a0a,	// (0x00057e45) main_cale_event_viewer_pane

0x9a0a,	// (0x00057e45) listscroll_cale_event_viewer_pane

0xccd6,	// (0x0005b111) list_cale_ev_pane

0xccde,	// (0x0005b119) scroll_pane_cp023

0x5045,	// (0x00053480) field_cale_ev_pane_ParamLimits

0x5045,	// (0x00053480) field_cale_ev_pane

0xccea,	// (0x0005b125) field_cale_ev_content_pane_ParamLimits

0xccea,	// (0x0005b125) field_cale_ev_content_pane

0xccf6,	// (0x0005b131) field_cale_ev_pane_g1_ParamLimits

0xccf6,	// (0x0005b131) field_cale_ev_pane_g1

0xcd02,	// (0x0005b13d) field_cale_ev_pane_g2_ParamLimits

0xcd02,	// (0x0005b13d) field_cale_ev_pane_g2

0xcd1a,	// (0x0005b155) field_cale_ev_pane_g3_ParamLimits

0xcd1a,	// (0x0005b155) field_cale_ev_pane_g3

0x0002,

0xf702,	// (0x0005db3d) field_cale_ev_pane_g_ParamLimits

0xf702,	// (0x0005db3d) field_cale_ev_pane_g

0xcd32,	// (0x0005b16d) field_cale_ev_pane_t1_ParamLimits

0xcd32,	// (0x0005b16d) field_cale_ev_pane_t1

0x5069,	// (0x000534a4) field_cale_ev_content_pane_t1_ParamLimits

0x5069,	// (0x000534a4) field_cale_ev_content_pane_t1

0x3936,	// (0x00051d71) bg_button_pane_cp01

0x12a6,	// (0x0004f6e1) listscroll_cale_week_pane_ParamLimits

0x12b8,	// (0x0004f6f3) popup_toolbar_window_cp01

0xa381,	// (0x000587bc) listscroll_cale_week_pane_t1_ParamLimits

0x12a6,	// (0x0004f6e1) listscroll_cale_day_pane_ParamLimits

0x12b8,	// (0x0004f6f3) popup_toolbar_window_cp02

0xae23,	// (0x0005925e) listscroll_cale_day_pane_t1_ParamLimits

0x12a6,	// (0x0004f6e1) main_cale_month_pane_ParamLimits

0x45b1,	// (0x000529ec) popup_toolbar_window_cp03_ParamLimits

0x45b1,	// (0x000529ec) popup_toolbar_window_cp03

0x3bd7,	// (0x00052012) main_image_pane_g2_ParamLimits

0x3bd7,	// (0x00052012) main_image_pane_g2

0x3be8,	// (0x00052023) main_image_pane_g3_ParamLimits

0x3be8,	// (0x00052023) main_image_pane_g3

0x0002,

0xf4f3,	// (0x0005d92e) main_image_pane_g_ParamLimits

0xf4f3,	// (0x0005d92e) main_image_pane_g

0xb670,	// (0x00059aab) main_image_pane_t1_ParamLimits

0x3bf9,	// (0x00052034) main_image_pane_t2_ParamLimits

0x3bf9,	// (0x00052034) main_image_pane_t2

0x3c0b,	// (0x00052046) main_image_pane_t3_ParamLimits

0x3c0b,	// (0x00052046) main_image_pane_t3

0x3c33,	// (0x0005206e) main_image_pane_t4_ParamLimits

0x3c33,	// (0x0005206e) main_image_pane_t4

0x0003,

0xf4fa,	// (0x0005d935) main_image_pane_t_ParamLimits

0xf4fa,	// (0x0005d935) main_image_pane_t

0x3c53,	// (0x0005208e) popup_image_details_window_cp01

0x3c5d,	// (0x00052098) popup_toobar_trans_pane_cp01_ParamLimits

0x3c5d,	// (0x00052098) popup_toobar_trans_pane_cp01

0x4424,	// (0x0005285f) popup_image_details_window_ParamLimits

0x4424,	// (0x0005285f) popup_image_details_window

0xc824,	// (0x0005ac5f) popup_image_focus_window

0x488b,	// (0x00052cc6) camera2_autofocus_pane_ParamLimits

0x488b,	// (0x00052cc6) camera2_autofocus_pane

0x9a0a,	// (0x00057e45) bg_popup_sub_pane_cp06

0xcd49,	// (0x0005b184) popup_image_focus_window_g1

0xcd51,	// (0x0005b18c) popup_image_focus_window_g2

0xcd59,	// (0x0005b194) popup_image_focus_window_g3

0xcd61,	// (0x0005b19c) popup_image_focus_window_g4

0x0003,

0xf709,	// (0x0005db44) popup_image_focus_window_g

0xcd69,	// (0x0005b1a4) popup_image_focus_window_t1

0xcd77,	// (0x0005b1b2) popup_image_focus_window_t2

0xcd87,	// (0x0005b1c2) popup_image_focus_window_t3

0x0002,

0xf712,	// (0x0005db4d) popup_image_focus_window_t

0xcd95,	// (0x0005b1d0) camera2_autofocus_pane_g1

0x9a63,	// (0x00057e9e) bg_tb_trans_pane_cp01

0xcda3,	// (0x0005b1de) popup_image_details_window_g1

0xcdb6,	// (0x0005b1f1) popup_image_details_window_g2

0x0002,

0xf724,	// (0x0005db5f) popup_image_details_window_g

0xcddf,	// (0x0005b21a) popup_image_details_window_t1

0xcdf1,	// (0x0005b22c) popup_image_details_window_t2

0xce0a,	// (0x0005b245) popup_image_details_window_t3

0xce1e,	// (0x0005b259) popup_image_details_window_t4

0xce39,	// (0x0005b274) popup_image_details_window_t5

0x0004,

0xf72b,	// (0x0005db66) popup_image_details_window_t

0xa198,	// (0x000585d3) bg_calc_paper_pane_ParamLimits

0x9a0a,	// (0x00057e45) grid_highlight_pane_cp013

0xa1ac,	// (0x000585e7) list_calc_pane_ParamLimits

0xa1be,	// (0x000585f9) scroll_pane_cp024

0xa1c6,	// (0x00058601) bg_calc_display_pane_ParamLimits

0x10f2,	// (0x0004f52d) calc_display_pane_t1_ParamLimits

0x1104,	// (0x0004f53f) calc_display_pane_t2_ParamLimits

0xa1d2,	// (0x0005860d) calc_display_pane_t3_ParamLimits

0xf154,	// (0x0005d58f) calc_display_pane_t_ParamLimits

0x11cd,	// (0x0004f608) cell_calc_pane_g2

0x0001,

0xf171,	// (0x0005d5ac) cell_calc_pane_g

0x11d6,	// (0x0004f611) cell_calc_pane_t1

0xa249,	// (0x00058684) grid_highlight_pane_cp02_ParamLimits

0xa25f,	// (0x0005869a) toolbar_button_pane_cp01_ParamLimits

0xa25f,	// (0x0005869a) toolbar_button_pane_cp01

0xb6b5,	// (0x00059af0) temp_image_control_pane_ParamLimits

0xb6b5,	// (0x00059af0) temp_image_control_pane

0x9a63,	// (0x00057e9e) main_mp3_pane

0xce53,	// (0x0005b28e) temp_image_control_pane_g1_ParamLimits

0xce53,	// (0x0005b28e) temp_image_control_pane_g1

0xce61,	// (0x0005b29c) temp_image_control_pane_g2_ParamLimits

0xce61,	// (0x0005b29c) temp_image_control_pane_g2

0xce73,	// (0x0005b2ae) temp_image_control_pane_g3_ParamLimits

0xce73,	// (0x0005b2ae) temp_image_control_pane_g3

0x50ba,	// (0x000534f5) temp_image_control_pane_g4_ParamLimits

0x50ba,	// (0x000534f5) temp_image_control_pane_g4

0x0003,

0xf736,	// (0x0005db71) temp_image_control_pane_g_ParamLimits

0xf736,	// (0x0005db71) temp_image_control_pane_g

0xce53,	// (0x0005b28e) main_mp3_pane_g1

0x50cd,	// (0x00053508) main_mp3_pane_g2

0x0007,

0xf73f,	// (0x0005db7a) main_mp3_pane_g

0xceb6,	// (0x0005b2f1) main_mp3_pane_t1

0xa428,	// (0x00058863) main_camera_pane_g8_ParamLimits

0xa428,	// (0x00058863) main_camera_pane_g8

0x1d56,	// (0x00050191) main_video_pane_g7_ParamLimits

0x1d56,	// (0x00050191) main_video_pane_g7

0xa6e2,	// (0x00058b1d) main_camera2_pane_t7_ParamLimits

0xa6e2,	// (0x00058b1d) main_camera2_pane_t7

0xa574,	// (0x000589af) scroll_pane_cp025_ParamLimits

0xa574,	// (0x000589af) scroll_pane_cp025

0xa588,	// (0x000589c3) scroll_pane_cp026_ParamLimits

0xa588,	// (0x000589c3) scroll_pane_cp026

0xa597,	// (0x000589d2) wml_content_pane_ParamLimits

0x9a0a,	// (0x00057e45) main_touch_calib_pane

0x519f,	// (0x000535da) main_touch_calib_pane_g1

0x51b1,	// (0x000535ec) main_touch_calib_pane_g2

0x51c3,	// (0x000535fe) main_touch_calib_pane_g3

0x51d5,	// (0x00053610) main_touch_calib_pane_g4

0x0003,

0xf75d,	// (0x0005db98) main_touch_calib_pane_g

0x51e7,	// (0x00053622) main_touch_calib_pane_t1

0x5201,	// (0x0005363c) main_touch_calib_pane_t2

0x0004,

0xf766,	// (0x0005dba1) main_touch_calib_pane_t

0xb315,	// (0x00059750) mup_progress_pane_cp02

0xb334,	// (0x0005976f) navi_pane_g1

0xb396,	// (0x000597d1) navi_pane_mp_t3

0x9a63,	// (0x00057e9e) main_mp3_pane_ParamLimits

0x45f3,	// (0x00052a2e) navi_pane_ParamLimits

0xce53,	// (0x0005b28e) main_mp3_pane_g1_ParamLimits

0x50cd,	// (0x00053508) main_mp3_pane_g2_ParamLimits

0x50d9,	// (0x00053514) main_mp3_pane_g3_ParamLimits

0x50d9,	// (0x00053514) main_mp3_pane_g3

0x50e7,	// (0x00053522) main_mp3_pane_g4_ParamLimits

0x50e7,	// (0x00053522) main_mp3_pane_g4

0xce83,	// (0x0005b2be) main_mp3_pane_g5_ParamLimits

0xce83,	// (0x0005b2be) main_mp3_pane_g5

0xce91,	// (0x0005b2cc) main_mp3_pane_g6_ParamLimits

0xce91,	// (0x0005b2cc) main_mp3_pane_g6

0xce9e,	// (0x0005b2d9) main_mp3_pane_g7_ParamLimits

0xce9e,	// (0x0005b2d9) main_mp3_pane_g7

0xceaa,	// (0x0005b2e5) main_mp3_pane_g8_ParamLimits

0xceaa,	// (0x0005b2e5) main_mp3_pane_g8

0xf73f,	// (0x0005db7a) main_mp3_pane_g_ParamLimits

0x50f3,	// (0x0005352e) main_mp3_pane_t2

0x5101,	// (0x0005353c) main_mp3_pane_t3

0xcec4,	// (0x0005b2ff) main_mp3_pane_t4

0xced2,	// (0x0005b30d) main_mp3_pane_t5

0x0005,

0xf750,	// (0x0005db8b) main_mp3_pane_t

0xcee0,	// (0x0005b31b) mup_progress_pane_cp01

0x0b95,	// (0x0004efd0) aid_zoom_text_secondary2

0xccd6,	// (0x0005b111) list_cale_ev2_pane

0xccde,	// (0x0005b119) scroll_pane_cp023_ParamLimits

0x525b,	// (0x00053696) field_cale_ev2_pane_ParamLimits

0x525b,	// (0x00053696) field_cale_ev2_pane

0xfe51,	// (0x0004e28c) field_cale_ev2_pane_g1_ParamLimits

0xfe51,	// (0x0004e28c) field_cale_ev2_pane_g1

0xfe5d,	// (0x0004e298) field_cale_ev2_pane_g2_ParamLimits

0xfe5d,	// (0x0004e298) field_cale_ev2_pane_g2

0xfe75,	// (0x0004e2b0) field_cale_ev2_pane_g3_ParamLimits

0xfe75,	// (0x0004e2b0) field_cale_ev2_pane_g3

0x0003,

0xf771,	// (0x0005dbac) field_cale_ev2_pane_g_ParamLimits

0xf771,	// (0x0005dbac) field_cale_ev2_pane_g

0xfe8d,	// (0x0004e2c8) field_cale_ev2_pane_t1_ParamLimits

0xfe8d,	// (0x0004e2c8) field_cale_ev2_pane_t1

0xfea4,	// (0x0004e2df) field_cale_ev2_pane_t2_ParamLimits

0xfea4,	// (0x0004e2df) field_cale_ev2_pane_t2

0x0001,

0xf77a,	// (0x0005dbb5) field_cale_ev2_pane_t_ParamLimits

0xf77a,	// (0x0005dbb5) field_cale_ev2_pane_t

0x3a74,	// (0x00051eaf) main_postcard_pane_g5_ParamLimits

0x3a74,	// (0x00051eaf) main_postcard_pane_g5

0x3a8a,	// (0x00051ec5) main_postcard_pane_g6_ParamLimits

0x3a8a,	// (0x00051ec5) main_postcard_pane_g6

0x1b02,	// (0x0004ff3d) camera2_autofocus_pane_cp_ParamLimits

0x1b02,	// (0x0004ff3d) camera2_autofocus_pane_cp

0x9a63,	// (0x00057e9e) main_mup3_pane

0x52ab,	// (0x000536e6) main_mup3_pane_g1_ParamLimits

0x52ab,	// (0x000536e6) main_mup3_pane_g1

0x52cd,	// (0x00053708) main_mup3_pane_g2_ParamLimits

0x52cd,	// (0x00053708) main_mup3_pane_g2

0x5350,	// (0x0005378b) main_mup3_pane_g3_ParamLimits

0x5350,	// (0x0005378b) main_mup3_pane_g3

0x5398,	// (0x000537d3) main_mup3_pane_g4_ParamLimits

0x5398,	// (0x000537d3) main_mup3_pane_g4

0x53de,	// (0x00053819) main_mup3_pane_g5_ParamLimits

0x53de,	// (0x00053819) main_mup3_pane_g5

0x5426,	// (0x00053861) main_mup3_pane_g6_ParamLimits

0x5426,	// (0x00053861) main_mup3_pane_g6

0xcee8,	// (0x0005b323) main_mup3_pane_g7_ParamLimits

0xcee8,	// (0x0005b323) main_mup3_pane_g7

0x0007,

0xf78a,	// (0x0005dbc5) main_mup3_pane_g_ParamLimits

0xf78a,	// (0x0005dbc5) main_mup3_pane_g

0x54a6,	// (0x000538e1) main_mup3_pane_t1_ParamLimits

0x54a6,	// (0x000538e1) main_mup3_pane_t1

0x5514,	// (0x0005394f) main_mup3_pane_t2_ParamLimits

0x5514,	// (0x0005394f) main_mup3_pane_t2

0x55ea,	// (0x00053a25) main_mup3_pane_t4_ParamLimits

0x55ea,	// (0x00053a25) main_mup3_pane_t4

0x5648,	// (0x00053a83) main_mup3_pane_t5_ParamLimits

0x5648,	// (0x00053a83) main_mup3_pane_t5

0x5702,	// (0x00053b3d) main_mup3_pane_t6_ParamLimits

0x5702,	// (0x00053b3d) main_mup3_pane_t6

0x0005,

0xf79b,	// (0x0005dbd6) main_mup3_pane_t_ParamLimits

0xf79b,	// (0x0005dbd6) main_mup3_pane_t

0x57ba,	// (0x00053bf5) mup3_progress_pane_ParamLimits

0x57ba,	// (0x00053bf5) mup3_progress_pane

0x584c,	// (0x00053c87) popup_mup3_control_window_ParamLimits

0x584c,	// (0x00053c87) popup_mup3_control_window

0xcef6,	// (0x0005b331) popup_mup3_text_window

0x5882,	// (0x00053cbd) mup3_progress_pane_t1

0x58a0,	// (0x00053cdb) mup3_progress_pane_t2

0xcefe,	// (0x0005b339) mup3_progress_pane_t3

0x0002,

0xf7a8,	// (0x0005dbe3) mup3_progress_pane_t

0xcf1b,	// (0x0005b356) mup_progress_pane_cp03

0x9a0a,	// (0x00057e45) bg_tb_trans_pane_cp04

0x58be,	// (0x00053cf9) mup3_volume_pane

0x58c6,	// (0x00053d01) popup_mup3_control_window_g1

0x58cf,	// (0x00053d0a) mup3_volume_pane_g1

0x58d8,	// (0x00053d13) mup3_volume_pane_g2

0x58e1,	// (0x00053d1c) mup3_volume_pane_g3

0x0002,

0xf7af,	// (0x0005dbea) mup3_volume_pane_g

0x9a0a,	// (0x00057e45) bg_tb_trans_pane_cp03

0xcf2b,	// (0x0005b366) popup_mup3_text_window_g1

0xcf33,	// (0x0005b36e) popup_mup3_text_window_t1

0xa220,	// (0x0005865b) list_calc_item_pane_g1_ParamLimits

0xc9a0,	// (0x0005addb) mup_volume_pane_cp_g1

0x521b,	// (0x00053656) main_touch_calib_pane_t3

0x522f,	// (0x0005366a) main_touch_calib_pane_t4

0x5245,	// (0x00053680) main_touch_calib_pane_t5

0x9a14,	// (0x00057e4f) aid_cell_size_toolbar2

0x9a1c,	// (0x00057e57) aid_popup3_width_pane

0x0b8d,	// (0x0004efc8) aid_zoom_text_msg_primary

0x1ad7,	// (0x0004ff12) vorec_t7

0xa1e4,	// (0x0005861f) bg_calc_paper_pane_g1_ParamLimits

0xa1f0,	// (0x0005862b) bg_calc_paper_pane_g2_ParamLimits

0xa1fc,	// (0x00058637) bg_calc_paper_pane_g3_ParamLimits

0xa208,	// (0x00058643) bg_calc_paper_pane_g4_ParamLimits

0xa214,	// (0x0005864f) bg_calc_paper_pane_g5_ParamLimits

0x1153,	// (0x0004f58e) bg_calc_paper_pane_g6_ParamLimits

0x1166,	// (0x0004f5a1) bg_calc_paper_pane_g7_ParamLimits

0x1179,	// (0x0004f5b4) bg_calc_paper_pane_g8_ParamLimits

0xf15b,	// (0x0005d596) bg_calc_paper_pane_g_ParamLimits

0x118a,	// (0x0004f5c5) calc_bg_paper_pane_g9_ParamLimits

0x1c64,	// (0x0005009f) image_qvga_pane_ParamLimits

0x1c64,	// (0x0005009f) image_qvga_pane

0xa0df,	// (0x0005851a) bg_popup_sub_pane_cp04_ParamLimits

0xb5ec,	// (0x00059a27) popup_mup_playback_window_g1_ParamLimits

0xb5f8,	// (0x00059a33) popup_mup_playback_window_t1_ParamLimits

0xb60d,	// (0x00059a48) popup_mup_playback_window_t2_ParamLimits

0xf4ee,	// (0x0005d929) popup_mup_playback_window_t_ParamLimits

0x4d0f,	// (0x0005314a) main_mup2_pane_g3_ParamLimits

0x4d0f,	// (0x0005314a) main_mup2_pane_g3

0x1f77,	// (0x000503b2) popup_toolbar_window_cp04

0xba08,	// (0x00059e43) popup_call2_audio_second_window_g3_ParamLimits

0xba08,	// (0x00059e43) popup_call2_audio_second_window_g3

0xbe12,	// (0x0005a24d) popup_call2_audio_first_window_g4_ParamLimits

0xbe12,	// (0x0005a24d) popup_call2_audio_first_window_g4

0xc491,	// (0x0005a8cc) popup_call2_audio_in_window_g4_ParamLimits

0xc491,	// (0x0005a8cc) popup_call2_audio_in_window_g4

0x3bb9,	// (0x00051ff4) aid_area_sk_bg_cut_ParamLimits

0x3bb9,	// (0x00051ff4) aid_area_sk_bg_cut

0xb622,	// (0x00059a5d) aid_area_sk_bg_cut_2_ParamLimits

0xb622,	// (0x00059a5d) aid_area_sk_bg_cut_2

0x501b,	// (0x00053456) aid_placing_details_win

0x5023,	// (0x0005345e) aid_placing_details_win_2

0xcd95,	// (0x0005b1d0) camera2_autofocus_pane_g1_ParamLimits

0x0d36,	// (0x0004f171) popup_fixed_preview_cale_window_ParamLimits

0x0d36,	// (0x0004f171) popup_fixed_preview_cale_window

0xb3e5,	// (0x00059820) navi_slider_pane_g3

0xb3ee,	// (0x00059829) navi_slider_pane_g4

0xb3f7,	// (0x00059832) navi_slider_pane_g5

0xb3e5,	// (0x00059820) navi_slider_pane_g6

0xa65a,	// (0x00058a95) navi_slider_pane_g7

0xb51a,	// (0x00059955) mup_scale_pane_g3

0xb523,	// (0x0005995e) mup_scale_pane_g4

0xb52c,	// (0x00059967) mup_scale_pane_g5

0x3892,	// (0x00051ccd) mup_scale_pane_g6

0x389b,	// (0x00051cd6) mup_scale_pane_g7

0xb3e5,	// (0x00059820) cams2_slider_pane_g3

0xca22,	// (0x0005ae5d) cams2_slider_pane_g4

0xa750,	// (0x00058b8b) cams2_slider_pane_g5

0xb3e5,	// (0x00059820) cams2_slider_pane_g6

0xa758,	// (0x00058b93) cams2_slider_pane_g7

0xcc53,	// (0x0005b08e) camera2_autofocus_pane_cp_g1

0xc7f6,	// (0x0005ac31) bg_popup_preview_window_pane_cp02_ParamLimits

0xc7f6,	// (0x0005ac31) bg_popup_preview_window_pane_cp02

0xcf41,	// (0x0005b37c) list_fp_cale_pane_ParamLimits

0xcf41,	// (0x0005b37c) list_fp_cale_pane

0xcf4d,	// (0x0005b388) popup_fixed_preview_cale_window_t1_ParamLimits

0xcf4d,	// (0x0005b388) popup_fixed_preview_cale_window_t1

0x58ea,	// (0x00053d25) popup_fixed_preview_cale_window_t2_ParamLimits

0x58ea,	// (0x00053d25) popup_fixed_preview_cale_window_t2

0x58ff,	// (0x00053d3a) popup_fixed_preview_cale_window_t3_ParamLimits

0x58ff,	// (0x00053d3a) popup_fixed_preview_cale_window_t3

0x0002,

0xf7b6,	// (0x0005dbf1) popup_fixed_preview_cale_window_t_ParamLimits

0xf7b6,	// (0x0005dbf1) popup_fixed_preview_cale_window_t

0x5914,	// (0x00053d4f) list_single_fp_cale_pane_ParamLimits

0x5914,	// (0x00053d4f) list_single_fp_cale_pane

0xcf6b,	// (0x0005b3a6) list_single_fp_cale_pane_g1_ParamLimits

0xcf6b,	// (0x0005b3a6) list_single_fp_cale_pane_g1

0xcf77,	// (0x0005b3b2) list_single_fp_cale_pane_g2_ParamLimits

0xcf77,	// (0x0005b3b2) list_single_fp_cale_pane_g2

0x0002,

0xf7bd,	// (0x0005dbf8) list_single_fp_cale_pane_g_ParamLimits

0xf7bd,	// (0x0005dbf8) list_single_fp_cale_pane_g

0xcf90,	// (0x0005b3cb) list_single_fp_cale_pane_t1_ParamLimits

0xcf90,	// (0x0005b3cb) list_single_fp_cale_pane_t1

0xcfa2,	// (0x0005b3dd) list_single_fp_cale_pane_t2_ParamLimits

0xcfa2,	// (0x0005b3dd) list_single_fp_cale_pane_t2

0x0001,

0xf7c4,	// (0x0005dbff) list_single_fp_cale_pane_t_ParamLimits

0xf7c4,	// (0x0005dbff) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x9a0a,	// (0x00057e45) main_dialer_pane

0x5929,	// (0x00053d64) aid_cell_size_keypad

0x5933,	// (0x00053d6e) dialer_ne_pane

0x593d,	// (0x00053d78) grid_dialer_command_1_pane

0x5945,	// (0x00053d80) grid_dialer_command_2_pane

0x594d,	// (0x00053d88) grid_dialer_keypad_pane

0x595f,	// (0x00053d9a) bg_popup_call_pane_cp06_ParamLimits

0x595f,	// (0x00053d9a) bg_popup_call_pane_cp06

0x596b,	// (0x00053da6) dialer_ne_clear_pane_ParamLimits

0x596b,	// (0x00053da6) dialer_ne_clear_pane

0xcfd5,	// (0x0005b410) dialer_ne_pane_g1

0xcfdd,	// (0x0005b418) dialer_ne_pane_t1_ParamLimits

0xcfdd,	// (0x0005b418) dialer_ne_pane_t1

0x5977,	// (0x00053db2) dialer_ne_pane_t2_ParamLimits

0x5977,	// (0x00053db2) dialer_ne_pane_t2

0x59a1,	// (0x00053ddc) dialer_ne_pane_t3_ParamLimits

0x59a1,	// (0x00053ddc) dialer_ne_pane_t3

0x0002,

0xf7c9,	// (0x0005dc04) dialer_ne_pane_t_ParamLimits

0xf7c9,	// (0x0005dc04) dialer_ne_pane_t

0x59d1,	// (0x00053e0c) dialer_ne_pane_t3_copy1_ParamLimits

0x59d1,	// (0x00053e0c) dialer_ne_pane_t3_copy1

0x5a00,	// (0x00053e3b) cell_dialer_keypad_pane_ParamLimits

0x5a00,	// (0x00053e3b) cell_dialer_keypad_pane

0x5a17,	// (0x00053e52) cell_dialer_command_1_pane_ParamLimits

0x5a17,	// (0x00053e52) cell_dialer_command_1_pane

0x5a2d,	// (0x00053e68) cell_dialer_command_2_pane_ParamLimits

0x5a2d,	// (0x00053e68) cell_dialer_command_2_pane

0xcfef,	// (0x0005b42a) bg_button_pane_cp02_ParamLimits

0xcfef,	// (0x0005b42a) bg_button_pane_cp02

0x5a3c,	// (0x00053e77) cell_dialer_keypad_pane_g1_ParamLimits

0x5a3c,	// (0x00053e77) cell_dialer_keypad_pane_g1

0xcfef,	// (0x0005b42a) bg_button_pane_cp03_ParamLimits

0xcfef,	// (0x0005b42a) bg_button_pane_cp03

0x5a51,	// (0x00053e8c) cell_dialer_command_1_pane_g1_ParamLimits

0x5a51,	// (0x00053e8c) cell_dialer_command_1_pane_g1

0xcffb,	// (0x0005b436) bg_button_pane_cp04

0x5a65,	// (0x00053ea0) cell_dialer_command_2_pane_g1

0xb3d4,	// (0x0005980f) bg_button_pane_cp06

0xd003,	// (0x0005b43e) dialer_ne_clear_pane_g1

0x3364,	// (0x0005179f) navi_pane_g2

0x3392,	// (0x000517cd) navi_pane_g3

0x0002,

0xf3f1,	// (0x0005d82c) navi_pane_g

0x33bd,	// (0x000517f8) navi_pane_mv_g2

0x33e4,	// (0x0005181f) navi_pane_mv_g5

0x33ec,	// (0x00051827) navi_pane_mv_t1

0xa1c6,	// (0x00058601) main_clock2_pane

0x5ab0,	// (0x00053eeb) main_clock2_list_pane_ParamLimits

0x5ab0,	// (0x00053eeb) main_clock2_list_pane

0x5ae8,	// (0x00053f23) main_clock2_pane_t1_ParamLimits

0x5ae8,	// (0x00053f23) main_clock2_pane_t1

0x5b24,	// (0x00053f5f) main_clock2_pane_t2_ParamLimits

0x5b24,	// (0x00053f5f) main_clock2_pane_t2

0x0004,

0xf7d0,	// (0x0005dc0b) main_clock2_pane_t_ParamLimits

0xf7d0,	// (0x0005dc0b) main_clock2_pane_t

0x5bc4,	// (0x00053fff) popup_clock_analogue_window_cp03_ParamLimits

0x5bc4,	// (0x00053fff) popup_clock_analogue_window_cp03

0x5beb,	// (0x00054026) popup_clock_digital_window_cp02_ParamLimits

0x5beb,	// (0x00054026) popup_clock_digital_window_cp02

0x5c64,	// (0x0005409f) main_clock2_list_single_pane_ParamLimits

0x5c64,	// (0x0005409f) main_clock2_list_single_pane

0xb3d4,	// (0x0005980f) list_highlight_pane_cp05

0xd01f,	// (0x0005b45a) main_clock2_list_single_pane_t1

0x1f77,	// (0x000503b2) popup_toolbar_window_cp04_ParamLimits

0x508a,	// (0x000534c5) camera2_autofocus_pane_g2_ParamLimits

0x508a,	// (0x000534c5) camera2_autofocus_pane_g2

0x5096,	// (0x000534d1) camera2_autofocus_pane_g3_ParamLimits

0x5096,	// (0x000534d1) camera2_autofocus_pane_g3

0x50a2,	// (0x000534dd) camera2_autofocus_pane_g4_ParamLimits

0x50a2,	// (0x000534dd) camera2_autofocus_pane_g4

0x50ae,	// (0x000534e9) camera2_autofocus_pane_g5_ParamLimits

0x50ae,	// (0x000534e9) camera2_autofocus_pane_g5

0x0004,

0xf719,	// (0x0005db54) camera2_autofocus_pane_g_ParamLimits

0xf719,	// (0x0005db54) camera2_autofocus_pane_g

0x528b,	// (0x000536c6) camera2_autofocus_pane_cp_g2

0x5293,	// (0x000536ce) camera2_autofocus_pane_cp_g3

0x529b,	// (0x000536d6) camera2_autofocus_pane_cp_g4

0x52a3,	// (0x000536de) camera2_autofocus_pane_cp_g5

0x0004,

0xf77f,	// (0x0005dbba) camera2_autofocus_pane_cp_g

0x5957,	// (0x00053d92) popup_dialer_spcha_window

0x9a0a,	// (0x00057e45) bg_popup_sub_pane_cp07

0xd02d,	// (0x0005b468) list_spcha_pane

0xd035,	// (0x0005b470) list_single_spcha_pane_ParamLimits

0xd035,	// (0x0005b470) list_single_spcha_pane

0x9a0a,	// (0x00057e45) list_highlight_pane_cp06

0xd046,	// (0x0005b481) list_single_spcha_pane_t1

0xc23b,	// (0x0005a676) popup_call2_audio_out_window_g4_ParamLimits

0xc23b,	// (0x0005a676) popup_call2_audio_out_window_g4

0x9a0a,	// (0x00057e45) main_imed2_pane

0xc82e,	// (0x0005ac69) popup_imed_adjust2_window

0x443c,	// (0x00052877) popup_imed_trans_window_ParamLimits

0x443c,	// (0x00052877) popup_imed_trans_window

0xca8b,	// (0x0005aec6) popup_blid_sat_info2_window_t1

0xca99,	// (0x0005aed4) popup_blid_sat_info2_window_t2

0x000a,

0xf6ae,	// (0x0005dae9) popup_blid_sat_info2_window_t

0x5d1a,	// (0x00054155) aid_size_cell_colour_35

0x5d3a,	// (0x00054175) aid_size_cell_colour_112

0x5d5a,	// (0x00054195) aid_size_cell_effect

0xc802,	// (0x0005ac3d) bg_tb_trans_pane_cp02

0xaf34,	// (0x0005936f) heading_imed_pane

0x5d7a,	// (0x000541b5) listscroll_imed_pane

0xd054,	// (0x0005b48f) heading_imed_pane_g1

0xd05c,	// (0x0005b497) heading_imed_pane_t1

0xd06a,	// (0x0005b4a5) grid_imed_colour_35_pane_ParamLimits

0xd06a,	// (0x0005b4a5) grid_imed_colour_35_pane

0x5d86,	// (0x000541c1) grid_imed_effect_pane

0xd086,	// (0x0005b4c1) list_imed_aspect_pane

0x5d9b,	// (0x000541d6) scroll_pane_cp027_ParamLimits

0x5d9b,	// (0x000541d6) scroll_pane_cp027

0x5dac,	// (0x000541e7) cell_imed_effect_pane_ParamLimits

0x5dac,	// (0x000541e7) cell_imed_effect_pane

0xd08e,	// (0x0005b4c9) cell_imed_colour_pane_ParamLimits

0xd08e,	// (0x0005b4c9) cell_imed_colour_pane

0xd0d8,	// (0x0005b513) cell_imed_colour_pane_g1_ParamLimits

0xd0d8,	// (0x0005b513) cell_imed_colour_pane_g1

0xd0e9,	// (0x0005b524) hgihlgiht_grid_pane_cp016_ParamLimits

0xd0e9,	// (0x0005b524) hgihlgiht_grid_pane_cp016

0x5dd7,	// (0x00054212) cell_imed_effect_pane_g1

0x5ddf,	// (0x0005421a) grid_highlight_pane_cp017

0xd0fa,	// (0x0005b535) list_imed_single_pane_ParamLimits

0xd0fa,	// (0x0005b535) list_imed_single_pane

0x9a0a,	// (0x00057e45) list_highlight_pane_cp07

0xd10e,	// (0x0005b549) list_imed_aspect_pane_comp1_t1

0xc802,	// (0x0005ac3d) bg_tb_trans_pane_cp05

0xd130,	// (0x0005b56b) popup_imed_adjust2_window_g1

0xd157,	// (0x0005b592) popup_imed_adjust2_window_t1

0xd16f,	// (0x0005b5aa) slider_imed_adjust_pane

0xd183,	// (0x0005b5be) slider_imed_adjust_pane_g1

0xd193,	// (0x0005b5ce) slider_imed_adjust_pane_g2

0xd1a3,	// (0x0005b5de) slider_imed_adjust_pane_g3

0xd1b4,	// (0x0005b5ef) slider_imed_adjust_pane_g4

0x0003,

0xf7ed,	// (0x0005dc28) slider_imed_adjust_pane_g

0x5de8,	// (0x00054223) aid_size_cell_clipart2

0x5df4,	// (0x0005422f) grid_imed_clipart_pane

0xd1c5,	// (0x0005b600) scroll_pane_cp031

0x5dfe,	// (0x00054239) cell_imed_clipart_pane_ParamLimits

0x5dfe,	// (0x00054239) cell_imed_clipart_pane

0x5e1b,	// (0x00054256) cell_imed_clipart_pane_g1

0x9a0a,	// (0x00057e45) grid_highlight_pane_cp014

0x5ac5,	// (0x00053f00) main_clock2_pane_g1_ParamLimits

0x5ac5,	// (0x00053f00) main_clock2_pane_g1

0x5c0b,	// (0x00054046) aid_call2_pane_cp10

0x5c1d,	// (0x00054058) aid_call_pane_cp10

0xb309,	// (0x00059744) popup_clock_analogue_window_cp10_g1

0xb309,	// (0x00059744) popup_clock_analogue_window_cp10_g2

0x5c2f,	// (0x0005406a) popup_clock_analogue_window_cp10_g3

0x5c2f,	// (0x0005406a) popup_clock_analogue_window_cp10_g4

0xb309,	// (0x00059744) popup_clock_analogue_window_cp10_g5

0x0004,

0xf7db,	// (0x0005dc16) popup_clock_analogue_window_cp10_g

0x5c45,	// (0x00054080) popup_clock_analogue_window_cp10_t1

0x5c76,	// (0x000540b1) clock_digital_number_pane_cp10_ParamLimits

0x5c76,	// (0x000540b1) clock_digital_number_pane_cp10

0x5c90,	// (0x000540cb) clock_digital_number_pane_cp11_ParamLimits

0x5c90,	// (0x000540cb) clock_digital_number_pane_cp11

0x5caa,	// (0x000540e5) clock_digital_number_pane_cp12_ParamLimits

0x5caa,	// (0x000540e5) clock_digital_number_pane_cp12

0x5cc4,	// (0x000540ff) clock_digital_number_pane_cp13_ParamLimits

0x5cc4,	// (0x000540ff) clock_digital_number_pane_cp13

0x5cde,	// (0x00054119) clock_digital_separator_pane_cp10_ParamLimits

0x5cde,	// (0x00054119) clock_digital_separator_pane_cp10

0x5cf8,	// (0x00054133) popup_clock_digital_window_cp02_t1_ParamLimits

0x5cf8,	// (0x00054133) popup_clock_digital_window_cp02_t1

0xa0d7,	// (0x00058512) clock_digital_number_pane_cp10_g1

0xa0d7,	// (0x00058512) clock_digital_number_pane_cp10_g2

0x0001,

0xf7f6,	// (0x0005dc31) clock_digital_number_pane_cp10_g

0xa0d7,	// (0x00058512) clock_digital_separator_pane_cp10_g1

0xa0d7,	// (0x00058512) clock_digital_separator_pane_g2_cp10

0xb3a4,	// (0x000597df) navi_pane_vded_g4

0xb3ad,	// (0x000597e8) navi_pane_vded_g5

0xb3b6,	// (0x000597f1) navi_pane_vded_t1

0x9a0a,	// (0x00057e45) main_vded_pane

0x5e24,	// (0x0005425f) main_vded_pane_g1

0x5e30,	// (0x0005426b) main_vded_pane_g2

0x5e3c,	// (0x00054277) main_vded_pane_g3

0x0002,

0xf7fb,	// (0x0005dc36) main_vded_pane_g

0x5e48,	// (0x00054283) main_vded_pane_t1

0x5e56,	// (0x00054291) main_vded_pane_t2

0x0001,

0xf802,	// (0x0005dc3d) main_vded_pane_t

0x5e64,	// (0x0005429f) vded_slider_pane

0x5e6e,	// (0x000542a9) vded_video_pane

0xd1cd,	// (0x0005b608) vded_video_pane_g1

0x5e78,	// (0x000542b3) vded_video_pane_g2

0xcc53,	// (0x0005b08e) vded_video_pane_g3

0x0002,

0xf807,	// (0x0005dc42) vded_video_pane_g

0xd1d7,	// (0x0005b612) vded_slider_pane_g1

0xc9a0,	// (0x0005addb) vded_slider_pane_g2

0xd1e0,	// (0x0005b61b) vded_slider_pane_g3

0xd1e9,	// (0x0005b624) vded_slider_pane_g4

0xd1f2,	// (0x0005b62d) vded_slider_pane_g5

0x0004,

0xf80e,	// (0x0005dc49) vded_slider_pane_g

0x5836,	// (0x00053c71) mup3_rocker_pane_ParamLimits

0x5836,	// (0x00053c71) mup3_rocker_pane

0x5e81,	// (0x000542bc) mup3_control_keys_pane_g1

0x5e89,	// (0x000542c4) mup3_control_keys_pane_g2

0x5e91,	// (0x000542cc) mup3_control_keys_pane_g3

0x5e99,	// (0x000542d4) mup3_control_keys_pane_g4

0x0003,

0xf819,	// (0x0005dc54) mup3_control_keys_pane_g

0x0d6d,	// (0x0004f1a8) popup_toolbar2_fixed_window_cp01_ParamLimits

0x0d6d,	// (0x0004f1a8) popup_toolbar2_fixed_window_cp01

0x586c,	// (0x00053ca7) popup_toolbar2_fixed_window_cp02_ParamLimits

0x586c,	// (0x00053ca7) popup_toolbar2_fixed_window_cp02

0xbb7a,	// (0x00059fb5) popup_call2_audio_second_window_t4_ParamLimits

0xbb7a,	// (0x00059fb5) popup_call2_audio_second_window_t4

0xc0a8,	// (0x0005a4e3) popup_call2_audio_first_window_t6_ParamLimits

0xc0a8,	// (0x0005a4e3) popup_call2_audio_first_window_t6

0xc33e,	// (0x0005a779) popup_call2_audio_out_window_t6_ParamLimits

0xc33e,	// (0x0005a779) popup_call2_audio_out_window_t6

0x9a0a,	// (0x00057e45) main_vitu_pane

0x5ea9,	// (0x000542e4) aid_size_cell_itu_ParamLimits

0x5ea9,	// (0x000542e4) aid_size_cell_itu

0x9a63,	// (0x00057e9e) bg_popup_window_pane_cp08_ParamLimits

0x9a63,	// (0x00057e9e) bg_popup_window_pane_cp08

0x5ebf,	// (0x000542fa) field_vitu_entry_pane_ParamLimits

0x5ebf,	// (0x000542fa) field_vitu_entry_pane

0x5ed6,	// (0x00054311) grid_vitu_function_pane_ParamLimits

0x5ed6,	// (0x00054311) grid_vitu_function_pane

0x5ef1,	// (0x0005432c) grid_vitu_itu_pane_ParamLimits

0x5ef1,	// (0x0005432c) grid_vitu_itu_pane

0x5f0f,	// (0x0005434a) cell_vitu_itu_pane_ParamLimits

0x5f0f,	// (0x0005434a) cell_vitu_itu_pane

0x5f35,	// (0x00054370) cell_vitu_function_pane_ParamLimits

0x5f35,	// (0x00054370) cell_vitu_function_pane

0x9a63,	// (0x00057e9e) bg_popup_sub_pane_cp08_ParamLimits

0x9a63,	// (0x00057e9e) bg_popup_sub_pane_cp08

0x5f50,	// (0x0005438b) field_vitu_entry_pane_t1_ParamLimits

0x5f50,	// (0x0005438b) field_vitu_entry_pane_t1

0xd213,	// (0x0005b64e) field_vitu_entry_pane_t2_ParamLimits

0xd213,	// (0x0005b64e) field_vitu_entry_pane_t2

0x0001,

0xf827,	// (0x0005dc62) field_vitu_entry_pane_t_ParamLimits

0xf827,	// (0x0005dc62) field_vitu_entry_pane_t

0xd230,	// (0x0005b66b) bg_button_pane_cp05_ParamLimits

0xd230,	// (0x0005b66b) bg_button_pane_cp05

0x5f70,	// (0x000543ab) cell_vitu_itu_pane_g1

0x5f88,	// (0x000543c3) cell_vitu_itu_pane_t1_ParamLimits

0x5f88,	// (0x000543c3) cell_vitu_itu_pane_t1

0x5f9a,	// (0x000543d5) cell_vitu_itu_pane_t2_ParamLimits

0x5f9a,	// (0x000543d5) cell_vitu_itu_pane_t2

0x0002,

0xf82c,	// (0x0005dc67) cell_vitu_itu_pane_t_ParamLimits

0xf82c,	// (0x0005dc67) cell_vitu_itu_pane_t

0xd23e,	// (0x0005b679) bg_button_pane_cp07

0x5fcf,	// (0x0005440a) cell_vitu_function_pane_g1

0xa166,	// (0x000585a1) main_calc_pane_g1

0x0b81,	// (0x0004efbc) aid_visual_content_pane

0x9a0a,	// (0x00057e45) main_vradio_pane

0x5fd8,	// (0x00054413) main_vradio_pane_g1_ParamLimits

0x5fd8,	// (0x00054413) main_vradio_pane_g1

0xd248,	// (0x0005b683) main_vradio_pane_g2_ParamLimits

0xd248,	// (0x0005b683) main_vradio_pane_g2

0x0001,

0xf833,	// (0x0005dc6e) main_vradio_pane_g_ParamLimits

0xf833,	// (0x0005dc6e) main_vradio_pane_g

0x5fef,	// (0x0005442a) main_vradio_pane_t1_ParamLimits

0x5fef,	// (0x0005442a) main_vradio_pane_t1

0x6004,	// (0x0005443f) main_vradio_pane_t2_ParamLimits

0x6004,	// (0x0005443f) main_vradio_pane_t2

0xd255,	// (0x0005b690) main_vradio_pane_t3_ParamLimits

0xd255,	// (0x0005b690) main_vradio_pane_t3

0x0002,

0xf838,	// (0x0005dc73) main_vradio_pane_t_ParamLimits

0xf838,	// (0x0005dc73) main_vradio_pane_t

0x6019,	// (0x00054454) vradio_rocker_control_pane_ParamLimits

0x6019,	// (0x00054454) vradio_rocker_control_pane

0x602b,	// (0x00054466) vradio_station_info_pane_ParamLimits

0x602b,	// (0x00054466) vradio_station_info_pane

0xd269,	// (0x0005b6a4) vradio_frequency_info_pane_ParamLimits

0xd269,	// (0x0005b6a4) vradio_frequency_info_pane

0xcc53,	// (0x0005b08e) vradio_station_info_pane_g1

0xd278,	// (0x0005b6b3) vradio_station_info_pane_t1_ParamLimits

0xd278,	// (0x0005b6b3) vradio_station_info_pane_t1

0xd29a,	// (0x0005b6d5) vradio_station_info_pane_t2_ParamLimits

0xd29a,	// (0x0005b6d5) vradio_station_info_pane_t2

0x0001,

0xf83f,	// (0x0005dc7a) vradio_station_info_pane_t_ParamLimits

0xf83f,	// (0x0005dc7a) vradio_station_info_pane_t

0xd2ac,	// (0x0005b6e7) vradio_tuning_pane

0xd2b4,	// (0x0005b6ef) vradio_rocker_control_pane_g1

0xd2bc,	// (0x0005b6f7) vradio_rocker_control_pane_g2

0xd2c4,	// (0x0005b6ff) vradio_rocker_control_pane_g3

0xd2cc,	// (0x0005b707) vradio_rocker_control_pane_g4

0xd2d4,	// (0x0005b70f) vradio_rocker_control_pane_g5

0x0004,

0xf844,	// (0x0005dc7f) vradio_rocker_control_pane_g

0x603b,	// (0x00054476) vradio_frequency_info_pane_g1

0xd2dc,	// (0x0005b717) vradio_frequency_info_pane_t1_ParamLimits

0xd2dc,	// (0x0005b717) vradio_frequency_info_pane_t1

0x6045,	// (0x00054480) vradio_tuning_pane_g1

0x6050,	// (0x0005448b) vradio_tuning_pane_t1

0x9a30,	// (0x00057e6b) area_side_right_pane_ParamLimits

0x9a30,	// (0x00057e6b) area_side_right_pane

0xc7bd,	// (0x0005abf8) status_small_pane_g1

0xc7c5,	// (0x0005ac00) status_small_pane_g2

0xc7ce,	// (0x0005ac09) status_small_pane_g3

0xc7d7,	// (0x0005ac12) status_small_pane_g4

0x0003,

0xf604,	// (0x0005da3f) status_small_pane_g

0xc7e0,	// (0x0005ac1b) status_small_pane_t1

0x9a0a,	// (0x00057e45) main_video3_pane

0xd2f0,	// (0x0005b72b) cams_zoom_vslider_pane

0xd2f8,	// (0x0005b733) image3_wide_pane_ParamLimits

0xd2f8,	// (0x0005b733) image3_wide_pane

0xd312,	// (0x0005b74d) image3_wide_small_pane

0xd31e,	// (0x0005b759) main_video3_pane_g1_ParamLimits

0xd31e,	// (0x0005b759) main_video3_pane_g1

0xd33a,	// (0x0005b775) main_video3_pane_g2_ParamLimits

0xd33a,	// (0x0005b775) main_video3_pane_g2

0x0001,

0xf84f,	// (0x0005dc8a) main_video3_pane_g_ParamLimits

0xf84f,	// (0x0005dc8a) main_video3_pane_g

0xd356,	// (0x0005b791) main_video3_pane_t1_ParamLimits

0xd356,	// (0x0005b791) main_video3_pane_t1

0xd381,	// (0x0005b7bc) main_video3_pane_t2_ParamLimits

0xd381,	// (0x0005b7bc) main_video3_pane_t2

0xd3ae,	// (0x0005b7e9) main_video3_pane_t3_ParamLimits

0xd3ae,	// (0x0005b7e9) main_video3_pane_t3

0x0002,

0xf854,	// (0x0005dc8f) main_video3_pane_t_ParamLimits

0xf854,	// (0x0005dc8f) main_video3_pane_t

0xd3db,	// (0x0005b816) cams_zoom_vslider_pane_g1

0xd3e4,	// (0x0005b81f) cams_zoom_vslider_pane_g2

0x0001,

0xf85b,	// (0x0005dc96) cams_zoom_vslider_pane_g

0xd3ec,	// (0x0005b827) small_slider_vertical_pane

0xcc53,	// (0x0005b08e) small_slider_vertical_pane_g1

0xcc53,	// (0x0005b08e) small_slider_vertical_pane_g2

0xd3f4,	// (0x0005b82f) small_slider_vertical_pane_g3

0x0002,

0xf860,	// (0x0005dc9b) small_slider_vertical_pane_g

0x9a0a,	// (0x00057e45) main_hwr_training_pane

0xd3fd,	// (0x0005b838) hwr_training_instruct_pane_ParamLimits

0xd3fd,	// (0x0005b838) hwr_training_instruct_pane

0x605f,	// (0x0005449a) hwr_training_navi_pane_ParamLimits

0x605f,	// (0x0005449a) hwr_training_navi_pane

0x607e,	// (0x000544b9) hwr_training_write_pane_ParamLimits

0x607e,	// (0x000544b9) hwr_training_write_pane

0x9a0a,	// (0x00057e45) bg_frame_shadow_pane

0xd434,	// (0x0005b86f) hwr_training_write_pane_g1

0xd43c,	// (0x0005b877) hwr_training_write_pane_g2

0xd444,	// (0x0005b87f) hwr_training_write_pane_g3

0xd44c,	// (0x0005b887) hwr_training_write_pane_g4

0xd454,	// (0x0005b88f) hwr_training_write_pane_g5

0xd45c,	// (0x0005b897) hwr_training_write_pane_g6

0xd464,	// (0x0005b89f) hwr_training_write_pane_g7

0x0006,

0xf867,	// (0x0005dca2) hwr_training_write_pane_g

0xa761,	// (0x00058b9c) hwr_training_navi_pane_g1_ParamLimits

0xa761,	// (0x00058b9c) hwr_training_navi_pane_g1

0xa773,	// (0x00058bae) hwr_training_navi_pane_g2_ParamLimits

0xa773,	// (0x00058bae) hwr_training_navi_pane_g2

0xa785,	// (0x00058bc0) hwr_training_navi_pane_g3_ParamLimits

0xa785,	// (0x00058bc0) hwr_training_navi_pane_g3

0xa795,	// (0x00058bd0) hwr_training_navi_pane_g4_ParamLimits

0xa795,	// (0x00058bd0) hwr_training_navi_pane_g4

0x0004,

0xf876,	// (0x0005dcb1) hwr_training_navi_pane_g_ParamLimits

0xf876,	// (0x0005dcb1) hwr_training_navi_pane_g

0xa7a2,	// (0x00058bdd) hwr_training_navi_pane_t1

0x60c6,	// (0x00054501) list_single_hwr_training_instruct_pane_ParamLimits

0x60c6,	// (0x00054501) list_single_hwr_training_instruct_pane

0xd46c,	// (0x0005b8a7) list_single_hwr_training_instruct_pane_t1

0xcb93,	// (0x0005afce) bg_frame_shadow_pane_g1

0xd47b,	// (0x0005b8b6) bg_frame_shadow_pane_g2

0xd483,	// (0x0005b8be) bg_frame_shadow_pane_g3

0xd48b,	// (0x0005b8c6) bg_frame_shadow_pane_g4

0xd493,	// (0x0005b8ce) bg_frame_shadow_pane_g5

0xd49b,	// (0x0005b8d6) bg_frame_shadow_pane_g6

0xd4a3,	// (0x0005b8de) bg_frame_shadow_pane_g7

0xa2bf,	// (0x000586fa) bg_frame_shadow_pane_g8

0x0007,

0xf881,	// (0x0005dcbc) bg_frame_shadow_pane_g

0x9a0a,	// (0x00057e45) main_video_tele_dialer_pane

0x60db,	// (0x00054516) aid_size_cell_video_keypad_ParamLimits

0x60db,	// (0x00054516) aid_size_cell_video_keypad

0x60f5,	// (0x00054530) grid_video_dialer_keypad_pane_ParamLimits

0x60f5,	// (0x00054530) grid_video_dialer_keypad_pane

0x6141,	// (0x0005457c) video_down_pane_cp_ParamLimits

0x6141,	// (0x0005457c) video_down_pane_cp

0x6171,	// (0x000545ac) cell_video_dialer_keypad_pane_ParamLimits

0x6171,	// (0x000545ac) cell_video_dialer_keypad_pane

0xd4ab,	// (0x0005b8e6) bg_button_pane_cp08_ParamLimits

0xd4ab,	// (0x0005b8e6) bg_button_pane_cp08

0x6195,	// (0x000545d0) cell_video_dialer_keypad_pane_g1_ParamLimits

0x6195,	// (0x000545d0) cell_video_dialer_keypad_pane_g1

0x5820,	// (0x00053c5b) mup3_rocker2_pane_ParamLimits

0x5820,	// (0x00053c5b) mup3_rocker2_pane

0xcc53,	// (0x0005b08e) mup3_rocker2_pane_g1

0x4309,	// (0x00052744) main_dialer2_pane

0x9a0a,	// (0x00057e45) main_mp4_pane

0xa7b8,	// (0x00058bf3) main_mp4_pane_g1_ParamLimits

0xa7b8,	// (0x00058bf3) main_mp4_pane_g1

0xa7b8,	// (0x00058bf3) main_mp4_pane_g2_ParamLimits

0xa7b8,	// (0x00058bf3) main_mp4_pane_g2

0x61d0,	// (0x0005460b) main_mp4_pane_g3_ParamLimits

0x61d0,	// (0x0005460b) main_mp4_pane_g3

0xa7c6,	// (0x00058c01) main_mp4_pane_g4_ParamLimits

0xa7c6,	// (0x00058c01) main_mp4_pane_g4

0xa7ee,	// (0x00058c29) main_mp4_pane_g5_ParamLimits

0xa7ee,	// (0x00058c29) main_mp4_pane_g5

0x0005,

0xf8a1,	// (0x0005dcdc) main_mp4_pane_g_ParamLimits

0xf8a1,	// (0x0005dcdc) main_mp4_pane_g

0xa83e,	// (0x00058c79) main_mp4_pane_t1_ParamLimits

0xa83e,	// (0x00058c79) main_mp4_pane_t1

0xa89a,	// (0x00058cd5) main_mp4_pane_t2_ParamLimits

0xa89a,	// (0x00058cd5) main_mp4_pane_t2

0xd4b7,	// (0x0005b8f2) main_mp4_pane_t3_ParamLimits

0xd4b7,	// (0x0005b8f2) main_mp4_pane_t3

0xa8ec,	// (0x00058d27) main_mp4_pane_t4_ParamLimits

0xa8ec,	// (0x00058d27) main_mp4_pane_t4

0x0003,

0xf8ae,	// (0x0005dce9) main_mp4_pane_t_ParamLimits

0xf8ae,	// (0x0005dce9) main_mp4_pane_t

0xa92c,	// (0x00058d67) mp4_progress_pane_ParamLimits

0xa92c,	// (0x00058d67) mp4_progress_pane

0xa976,	// (0x00058db1) mp4_rocker_pane_ParamLimits

0xa976,	// (0x00058db1) mp4_rocker_pane

0xd4df,	// (0x0005b91a) mp4_progress_pane_t1

0xd4f8,	// (0x0005b933) mp4_progress_pane_t2

0x0001,

0xf8b7,	// (0x0005dcf2) mp4_progress_pane_t

0xd511,	// (0x0005b94c) mup_progress_pane_cp04

0xcc53,	// (0x0005b08e) mp4_rocker_pane_g1

0x621a,	// (0x00054655) aid_cell_size_keypad2_ParamLimits

0x621a,	// (0x00054655) aid_cell_size_keypad2

0x6230,	// (0x0005466b) dialer2_ne_pane_ParamLimits

0x6230,	// (0x0005466b) dialer2_ne_pane

0x6248,	// (0x00054683) grid_dialer2_keypad_pane_ParamLimits

0x6248,	// (0x00054683) grid_dialer2_keypad_pane

0xca32,	// (0x0005ae6d) bg_popup_call_pane_cp07_ParamLimits

0xca32,	// (0x0005ae6d) bg_popup_call_pane_cp07

0x6264,	// (0x0005469f) dialer2_ne_pane_t1_ParamLimits

0x6264,	// (0x0005469f) dialer2_ne_pane_t1

0x629f,	// (0x000546da) cell_dialer2_keypad_pane_ParamLimits

0x629f,	// (0x000546da) cell_dialer2_keypad_pane

0xd52f,	// (0x0005b96a) bg_button_pane_pane_cp04_ParamLimits

0xd52f,	// (0x0005b96a) bg_button_pane_pane_cp04

0x62c3,	// (0x000546fe) cell_dialer2_keypad_pane_g1_ParamLimits

0x62c3,	// (0x000546fe) cell_dialer2_keypad_pane_g1

0x1e5e,	// (0x00050299) aid_placing_vt_set_content_ParamLimits

0x1e5e,	// (0x00050299) aid_placing_vt_set_content

0x1e82,	// (0x000502bd) aid_placing_vt_set_title_ParamLimits

0x1e82,	// (0x000502bd) aid_placing_vt_set_title

0x9a0a,	// (0x00057e45) main_image3_pane

0x6389,	// (0x000547c4) area_side_right_pane_cp01_ParamLimits

0x6389,	// (0x000547c4) area_side_right_pane_cp01

0xa7b8,	// (0x00058bf3) main_image3_pane_g1_ParamLimits

0xa7b8,	// (0x00058bf3) main_image3_pane_g1

0x63a2,	// (0x000547dd) main_image3_pane_g2_ParamLimits

0x63a2,	// (0x000547dd) main_image3_pane_g2

0x63ca,	// (0x00054805) main_image3_pane_g3_ParamLimits

0x63ca,	// (0x00054805) main_image3_pane_g3

0x63f4,	// (0x0005482f) main_image3_pane_g4_ParamLimits

0x63f4,	// (0x0005482f) main_image3_pane_g4

0x0003,

0xf8c6,	// (0x0005dd01) main_image3_pane_g_ParamLimits

0xf8c6,	// (0x0005dd01) main_image3_pane_g

0x641e,	// (0x00054859) main_image3_pane_t1_ParamLimits

0x641e,	// (0x00054859) main_image3_pane_t1

0x6476,	// (0x000548b1) main_image3_pane_t2_ParamLimits

0x6476,	// (0x000548b1) main_image3_pane_t2

0x64c8,	// (0x00054903) main_image3_pane_t3_ParamLimits

0x64c8,	// (0x00054903) main_image3_pane_t3

0x0003,

0xf8cf,	// (0x0005dd0a) main_image3_pane_t_ParamLimits

0xf8cf,	// (0x0005dd0a) main_image3_pane_t

0x9a63,	// (0x00057e9e) grid_sctrl_middle_pane_cp01_ParamLimits

0x9a63,	// (0x00057e9e) grid_sctrl_middle_pane_cp01

0x6550,	// (0x0005498b) cell_sctrl_middle_pane_cp01_ParamLimits

0x6550,	// (0x0005498b) cell_sctrl_middle_pane_cp01

0x656d,	// (0x000549a8) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x656d,	// (0x000549a8) cell_sctrl_middle_pane_cp01_g1

0x9a0a,	// (0x00057e45) main_call4_pane

0x6582,	// (0x000549bd) aid_size_button_call4_ParamLimits

0x6582,	// (0x000549bd) aid_size_button_call4

0x65b5,	// (0x000549f0) call4_windows_pane_ParamLimits

0x65b5,	// (0x000549f0) call4_windows_pane

0x65d7,	// (0x00054a12) grid_call4_button_pane_ParamLimits

0x65d7,	// (0x00054a12) grid_call4_button_pane

0xd53b,	// (0x0005b976) call4_windows_conf_pane

0x6602,	// (0x00054a3d) popup_call4_audio_first_window_ParamLimits

0x6602,	// (0x00054a3d) popup_call4_audio_first_window

0x662e,	// (0x00054a69) popup_call4_audio_second_window_ParamLimits

0x662e,	// (0x00054a69) popup_call4_audio_second_window

0xd578,	// (0x0005b9b3) popup_call4_audio_wait_window_ParamLimits

0xd578,	// (0x0005b9b3) popup_call4_audio_wait_window

0x6644,	// (0x00054a7f) cell_call4_button_pane_ParamLimits

0x6644,	// (0x00054a7f) cell_call4_button_pane

0x666b,	// (0x00054aa6) bg_button_pane_cp09_ParamLimits

0x666b,	// (0x00054aa6) bg_button_pane_cp09

0x6677,	// (0x00054ab2) cell_call4_button_pane_g1_ParamLimits

0x6677,	// (0x00054ab2) cell_call4_button_pane_g1

0x669d,	// (0x00054ad8) cell_call4_button_pane_t1_ParamLimits

0x669d,	// (0x00054ad8) cell_call4_button_pane_t1

0xd5c0,	// (0x0005b9fb) popup_call4_audio_conf_window_ParamLimits

0xd5c0,	// (0x0005b9fb) popup_call4_audio_conf_window

0x5882,	// (0x00053cbd) mup3_progress_pane_t1_ParamLimits

0x58a0,	// (0x00053cdb) mup3_progress_pane_t2_ParamLimits

0xcefe,	// (0x0005b339) mup3_progress_pane_t3_ParamLimits

0xf7a8,	// (0x0005dbe3) mup3_progress_pane_t_ParamLimits

0xcf1b,	// (0x0005b356) mup_progress_pane_cp03_ParamLimits

0x5ea1,	// (0x000542dc) mup3_control_keys_pane_g4_copy1

0xa95a,	// (0x00058d95) mp4_rocker2_pane_ParamLimits

0xa95a,	// (0x00058d95) mp4_rocker2_pane

0xd5da,	// (0x0005ba15) mp4_rocker2_pane_g1

0xd5e2,	// (0x0005ba1d) mp4_rocker2_pane_g2

0xa9cc,	// (0x00058e07) mp4_rocker2_pane_g3

0xa9d4,	// (0x00058e0f) mp4_rocker2_pane_g4

0xa9dc,	// (0x00058e17) mp4_rocker2_pane_g5

0x0004,

0xf8d8,	// (0x0005dd13) mp4_rocker2_pane_g

0x9a0a,	// (0x00057e45) main_camera4_pane

0x9a0a,	// (0x00057e45) main_video4_pane

0x610f,	// (0x0005454a) main_video_tele_dialer_pane_t1_ParamLimits

0x610f,	// (0x0005454a) main_video_tele_dialer_pane_t1

0x6128,	// (0x00054563) main_video_tele_dialer_pane_t2_ParamLimits

0x6128,	// (0x00054563) main_video_tele_dialer_pane_t2

0x0001,

0xf892,	// (0x0005dccd) main_video_tele_dialer_pane_t_ParamLimits

0xf892,	// (0x0005dccd) main_video_tele_dialer_pane_t

0x66db,	// (0x00054b16) cam4_autofocus_pane_ParamLimits

0x66db,	// (0x00054b16) cam4_autofocus_pane

0x66f1,	// (0x00054b2c) cam4_image_uncrop_pane_ParamLimits

0x66f1,	// (0x00054b2c) cam4_image_uncrop_pane

0x670a,	// (0x00054b45) cam4_indicators_pane_ParamLimits

0x670a,	// (0x00054b45) cam4_indicators_pane

0x6739,	// (0x00054b74) main_camera4_pane_g1_ParamLimits

0x6739,	// (0x00054b74) main_camera4_pane_g1

0x674b,	// (0x00054b86) main_camera4_pane_g2_ParamLimits

0x674b,	// (0x00054b86) main_camera4_pane_g2

0x675e,	// (0x00054b99) main_camera4_pane_g3_ParamLimits

0x675e,	// (0x00054b99) main_camera4_pane_g3

0x6771,	// (0x00054bac) main_camera4_pane_g4_ParamLimits

0x6771,	// (0x00054bac) main_camera4_pane_g4

0x6784,	// (0x00054bbf) main_camera4_pane_g5_ParamLimits

0x6784,	// (0x00054bbf) main_camera4_pane_g5

0x0005,

0xf8e3,	// (0x0005dd1e) main_camera4_pane_g_ParamLimits

0xf8e3,	// (0x0005dd1e) main_camera4_pane_g

0x67a8,	// (0x00054be3) main_camera4_pane_t1_ParamLimits

0x67a8,	// (0x00054be3) main_camera4_pane_t1

0xce83,	// (0x0005b2be) bg_tb_trans_pane_cp06

0xaa0a,	// (0x00058e45) cam4_indicators_pane_g1

0xaa1b,	// (0x00058e56) cam4_indicators_pane_g2

0x0002,

0xf8fe,	// (0x0005dd39) cam4_indicators_pane_g

0xaa33,	// (0x00058e6e) cam4_indicators_pane_t1

0x680c,	// (0x00054c47) main_video4_pane_g1_ParamLimits

0x680c,	// (0x00054c47) main_video4_pane_g1

0x681b,	// (0x00054c56) main_video4_pane_g2_ParamLimits

0x681b,	// (0x00054c56) main_video4_pane_g2

0x682a,	// (0x00054c65) main_video4_pane_g3_ParamLimits

0x682a,	// (0x00054c65) main_video4_pane_g3

0x6839,	// (0x00054c74) main_video4_pane_g4_ParamLimits

0x6839,	// (0x00054c74) main_video4_pane_g4

0x0004,

0xf905,	// (0x0005dd40) main_video4_pane_g_ParamLimits

0xf905,	// (0x0005dd40) main_video4_pane_g

0x6857,	// (0x00054c92) vid4_indicators_pane_ParamLimits

0x6857,	// (0x00054c92) vid4_indicators_pane

0x6885,	// (0x00054cc0) video4_image_uncrop_cif_pane_ParamLimits

0x6885,	// (0x00054cc0) video4_image_uncrop_cif_pane

0x689f,	// (0x00054cda) video4_image_uncrop_nhd_pane_ParamLimits

0x689f,	// (0x00054cda) video4_image_uncrop_nhd_pane

0x66f1,	// (0x00054b2c) video4_image_uncrop_vga_pane_ParamLimits

0x66f1,	// (0x00054b2c) video4_image_uncrop_vga_pane

0x9a63,	// (0x00057e9e) bg_tb_trans_pane_cp07

0xaa61,	// (0x00058e9c) vid4_indicators_pane_g1

0xaa77,	// (0x00058eb2) vid4_indicators_pane_g2

0xaa8b,	// (0x00058ec6) vid4_indicators_pane_g3

0x0004,

0xf910,	// (0x0005dd4b) vid4_indicators_pane_g

0xaabc,	// (0x00058ef7) vid4_indicators_pane_t1

0x68b5,	// (0x00054cf0) cam4_autofocus_pane_g1

0x68bd,	// (0x00054cf8) cam4_autofocus_pane_g2

0x68c5,	// (0x00054d00) cam4_autofocus_pane_g3

0x0002,

0xf91b,	// (0x0005dd56) cam4_autofocus_pane_g

0x68cd,	// (0x00054d08) cam4_autofocus_pane_g3_copy1

0x6155,	// (0x00054590) video_down_pane_cp_t1

0x6163,	// (0x0005459e) video_down_pane_cp_t2

0x0001,

0xf897,	// (0x0005dcd2) video_down_pane_cp_t

0x9a63,	// (0x00057e9e) popup_vitu2_window_ParamLimits

0x9a63,	// (0x00057e9e) popup_vitu2_window

0x68d5,	// (0x00054d10) aid_size_cell2_itu2_ParamLimits

0x68d5,	// (0x00054d10) aid_size_cell2_itu2

0x68fb,	// (0x00054d36) aid_size_cell_itu2_ParamLimits

0x68fb,	// (0x00054d36) aid_size_cell_itu2

0x695b,	// (0x00054d96) bg_popup_window_pane_cp09_ParamLimits

0x695b,	// (0x00054d96) bg_popup_window_pane_cp09

0x6969,	// (0x00054da4) field_vitu2_entry_pane_ParamLimits

0x6969,	// (0x00054da4) field_vitu2_entry_pane

0x6991,	// (0x00054dcc) grid_vitu2_function_pane_ParamLimits

0x6991,	// (0x00054dcc) grid_vitu2_function_pane

0x69e2,	// (0x00054e1d) grid_vitu2_itu_pane_ParamLimits

0x69e2,	// (0x00054e1d) grid_vitu2_itu_pane

0x6a71,	// (0x00054eac) cell_vitu2_itu_pane_ParamLimits

0x6a71,	// (0x00054eac) cell_vitu2_itu_pane

0x6a97,	// (0x00054ed2) cell_vitu2_function_pane_ParamLimits

0x6a97,	// (0x00054ed2) cell_vitu2_function_pane

0xd5ea,	// (0x0005ba25) bg_popup_call_pane_cp08_ParamLimits

0xd5ea,	// (0x0005ba25) bg_popup_call_pane_cp08

0xd603,	// (0x0005ba3e) field_vitu2_entry_pane_g1

0xd60f,	// (0x0005ba4a) field_vitu2_entry_pane_g2

0x0002,

0xf922,	// (0x0005dd5d) field_vitu2_entry_pane_g

0xfeb9,	// (0x0004e2f4) field_vitu2_entry_pane_t1_ParamLimits

0xfeb9,	// (0x0004e2f4) field_vitu2_entry_pane_t1

0x6adb,	// (0x00054f16) field_vitu2_entry_pane_t2_ParamLimits

0x6adb,	// (0x00054f16) field_vitu2_entry_pane_t2

0x0001,

0xf929,	// (0x0005dd64) field_vitu2_entry_pane_t_ParamLimits

0xf929,	// (0x0005dd64) field_vitu2_entry_pane_t

0x6af8,	// (0x00054f33) bg_button_pane_cp010_ParamLimits

0x6af8,	// (0x00054f33) bg_button_pane_cp010

0x6b06,	// (0x00054f41) cell_vitu2_itu_pane_g1

0x6b31,	// (0x00054f6c) cell_vitu2_itu_pane_t1_ParamLimits

0x6b31,	// (0x00054f6c) cell_vitu2_itu_pane_t1

0xfee8,	// (0x0004e323) cell_vitu2_itu_pane_t2_ParamLimits

0xfee8,	// (0x0004e323) cell_vitu2_itu_pane_t2

0x0002,

0xf933,	// (0x0005dd6e) cell_vitu2_itu_pane_t_ParamLimits

0xf933,	// (0x0005dd6e) cell_vitu2_itu_pane_t

0x9a63,	// (0x00057e9e) bg_button_pane_cp011

0x6b8f,	// (0x00054fca) cell_vitu2_function_pane_g1

0x9a0a,	// (0x00057e45) main_myfav_hc_pane

0x6518,	// (0x00054953) popup_image3_note_pane_ParamLimits

0x6518,	// (0x00054953) popup_image3_note_pane

0x6534,	// (0x0005496f) popup_image3_tool_bar_pane_ParamLimits

0x6534,	// (0x0005496f) popup_image3_tool_bar_pane

0xff76,	// (0x0004e3b1) cell_vitu2_itu_pane_t3_ParamLimits

0xff76,	// (0x0004e3b1) cell_vitu2_itu_pane_t3

0x9a0a,	// (0x00057e45) bg_popup_trans_pane

0xd631,	// (0x0005ba6c) grid_image3_tool_bar_pane

0xd63b,	// (0x0005ba76) bg_popup_trans_pane_g1

0xacfb,	// (0x00059136) bg_popup_trans_pane_g2

0xd643,	// (0x0005ba7e) bg_popup_trans_pane_g3

0xd64b,	// (0x0005ba86) bg_popup_trans_pane_g4

0xd653,	// (0x0005ba8e) bg_popup_trans_pane_g5

0xd65b,	// (0x0005ba96) bg_popup_trans_pane_g6

0xd663,	// (0x0005ba9e) bg_popup_trans_pane_g7

0xd66b,	// (0x0005baa6) bg_popup_trans_pane_g8

0xacdb,	// (0x00059116) bg_popup_trans_pane_g9

0x0008,

0xf93a,	// (0x0005dd75) bg_popup_trans_pane_g

0xd673,	// (0x0005baae) cell_image3_tool_bar_pane_ParamLimits

0xd673,	// (0x0005baae) cell_image3_tool_bar_pane

0xcc53,	// (0x0005b08e) cell_image3_tool_bar_pane_g1

0x9a0a,	// (0x00057e45) bg_popup_trans_pane_cp1

0xd689,	// (0x0005bac4) popup_image3_note_pane_t1

0xd697,	// (0x0005bad2) popup_image3_note_pane_t2

0xd6a5,	// (0x0005bae0) popup_image3_note_pane_t3

0x0002,

0xf94d,	// (0x0005dd88) popup_image3_note_pane_t

0xd6b5,	// (0x0005baf0) popup_image3_note_pane_t3_copy1

0x6ba3,	// (0x00054fde) bg_myfav_hc_instruction_pane_ParamLimits

0x6ba3,	// (0x00054fde) bg_myfav_hc_instruction_pane

0x6bbb,	// (0x00054ff6) cell_myfav_contact_pane_ParamLimits

0x6bbb,	// (0x00054ff6) cell_myfav_contact_pane

0x6bd7,	// (0x00055012) cell_myfav_contact_pane_cp1_ParamLimits

0x6bd7,	// (0x00055012) cell_myfav_contact_pane_cp1

0x6bef,	// (0x0005502a) cell_myfav_contact_pane_cp2_ParamLimits

0x6bef,	// (0x0005502a) cell_myfav_contact_pane_cp2

0x6c07,	// (0x00055042) cell_myfav_contact_pane_cp3_ParamLimits

0x6c07,	// (0x00055042) cell_myfav_contact_pane_cp3

0x6c1e,	// (0x00055059) cell_myfav_contact_pane_cp4_ParamLimits

0x6c1e,	// (0x00055059) cell_myfav_contact_pane_cp4

0x6c36,	// (0x00055071) cell_myfav_contact_pane_cp5_ParamLimits

0x6c36,	// (0x00055071) cell_myfav_contact_pane_cp5

0x6c4a,	// (0x00055085) cell_myfav_contact_pane_cp6_ParamLimits

0x6c4a,	// (0x00055085) cell_myfav_contact_pane_cp6

0x6c60,	// (0x0005509b) cell_myfav_contact_pane_cp7_ParamLimits

0x6c60,	// (0x0005509b) cell_myfav_contact_pane_cp7

0xd6c3,	// (0x0005bafe) listscroll_gen_pane_cp05

0x6c78,	// (0x000550b3) main_myfav_hc_pane_g1_ParamLimits

0x6c78,	// (0x000550b3) main_myfav_hc_pane_g1

0x6c92,	// (0x000550cd) main_myfav_hc_pane_g2_ParamLimits

0x6c92,	// (0x000550cd) main_myfav_hc_pane_g2

0x0002,

0xf954,	// (0x0005dd8f) main_myfav_hc_pane_g_ParamLimits

0xf954,	// (0x0005dd8f) main_myfav_hc_pane_g

0x6cc6,	// (0x00055101) main_myfav_hc_pane_t1_ParamLimits

0x6cc6,	// (0x00055101) main_myfav_hc_pane_t1

0xd6cc,	// (0x0005bb07) main_myfav_hc_pane_t2_ParamLimits

0xd6cc,	// (0x0005bb07) main_myfav_hc_pane_t2

0xd6de,	// (0x0005bb19) main_myfav_hc_pane_t3_ParamLimits

0xd6de,	// (0x0005bb19) main_myfav_hc_pane_t3

0x6cdd,	// (0x00055118) main_myfav_hc_pane_t4_ParamLimits

0x6cdd,	// (0x00055118) main_myfav_hc_pane_t4

0x0004,

0xf95b,	// (0x0005dd96) main_myfav_hc_pane_t_ParamLimits

0xf95b,	// (0x0005dd96) main_myfav_hc_pane_t

0xcc53,	// (0x0005b08e) bg_myfav_hc_instruction_pane_g1

0xd6f0,	// (0x0005bb2b) cell_myfav_contact_pane_g1_ParamLimits

0xd6f0,	// (0x0005bb2b) cell_myfav_contact_pane_g1

0xd6f0,	// (0x0005bb2b) cell_myfav_contact_pane_g2_ParamLimits

0xd6f0,	// (0x0005bb2b) cell_myfav_contact_pane_g2

0xd6fc,	// (0x0005bb37) cell_myfav_contact_pane_g3_ParamLimits

0xd6fc,	// (0x0005bb37) cell_myfav_contact_pane_g3

0xcee8,	// (0x0005b323) cell_myfav_contact_pane_g4_ParamLimits

0xcee8,	// (0x0005b323) cell_myfav_contact_pane_g4

0xd709,	// (0x0005bb44) cell_myfav_contact_pane_g5_ParamLimits

0xd709,	// (0x0005bb44) cell_myfav_contact_pane_g5

0x0004,

0xf966,	// (0x0005dda1) cell_myfav_contact_pane_g_ParamLimits

0xf966,	// (0x0005dda1) cell_myfav_contact_pane_g

0x6cac,	// (0x000550e7) main_myfav_hc_pane_g3_ParamLimits

0x6cac,	// (0x000550e7) main_myfav_hc_pane_g3

0x0cce,	// (0x0004f109) popup_adpt_find_window

0x6d07,	// (0x00055142) afind_page_pane_ParamLimits

0x6d07,	// (0x00055142) afind_page_pane

0x6d1c,	// (0x00055157) aid_size_cell_afind_ParamLimits

0x6d1c,	// (0x00055157) aid_size_cell_afind

0x6d3a,	// (0x00055175) bg_popup_sub_pane_cp09_ParamLimits

0x6d3a,	// (0x00055175) bg_popup_sub_pane_cp09

0x6d47,	// (0x00055182) find_pane_cp01_ParamLimits

0x6d47,	// (0x00055182) find_pane_cp01

0xd715,	// (0x0005bb50) grid_afind_control_pane_ParamLimits

0xd715,	// (0x0005bb50) grid_afind_control_pane

0x6d54,	// (0x0005518f) grid_afind_pane_ParamLimits

0x6d54,	// (0x0005518f) grid_afind_pane

0x6d76,	// (0x000551b1) cell_afind_pane_ParamLimits

0x6d76,	// (0x000551b1) cell_afind_pane

0xcc53,	// (0x0005b08e) afind_page_pane_g1

0x6ddd,	// (0x00055218) afind_page_pane_g2

0x6de6,	// (0x00055221) afind_page_pane_g3

0x0002,

0xf971,	// (0x0005ddac) afind_page_pane_g

0x6def,	// (0x0005522a) afind_page_pane_t1

0xd729,	// (0x0005bb64) cell_afind_grid_control_pane_ParamLimits

0xd729,	// (0x0005bb64) cell_afind_grid_control_pane

0xd52f,	// (0x0005b96a) bg_button_pane_cp69_ParamLimits

0xd52f,	// (0x0005b96a) bg_button_pane_cp69

0x6e0f,	// (0x0005524a) cell_afind_pane_g1_ParamLimits

0x6e0f,	// (0x0005524a) cell_afind_pane_g1

0x6e1c,	// (0x00055257) cell_afind_pane_t1_ParamLimits

0x6e1c,	// (0x00055257) cell_afind_pane_t1

0xa472,	// (0x000588ad) bg_button_pane_cp72

0xd738,	// (0x0005bb73) cell_afind_grid_control_pane_g1

0x3dac,	// (0x000521e7) aid_image_placing_area_ParamLimits

0x3dac,	// (0x000521e7) aid_image_placing_area

0xd1fb,	// (0x0005b636) field_vitu_entry_pane_g1_ParamLimits

0xd1fb,	// (0x0005b636) field_vitu_entry_pane_g1

0xd207,	// (0x0005b642) field_vitu_entry_pane_g2_ParamLimits

0xd207,	// (0x0005b642) field_vitu_entry_pane_g2

0x0001,

0xf822,	// (0x0005dc5d) field_vitu_entry_pane_g_ParamLimits

0xf822,	// (0x0005dc5d) field_vitu_entry_pane_g

0x5f70,	// (0x000543ab) cell_vitu_itu_pane_g1_ParamLimits

0x5fb2,	// (0x000543ed) cell_vitu_itu_pane_t3_ParamLimits

0x5fb2,	// (0x000543ed) cell_vitu_itu_pane_t3

0xd4df,	// (0x0005b91a) mp4_progress_pane_t1_ParamLimits

0xd4f8,	// (0x0005b933) mp4_progress_pane_t2_ParamLimits

0xf8b7,	// (0x0005dcf2) mp4_progress_pane_t_ParamLimits

0xd511,	// (0x0005b94c) mup_progress_pane_cp04_ParamLimits

0x6cf1,	// (0x0005512c) main_myfav_hc_pane_t5_ParamLimits

0x6cf1,	// (0x0005512c) main_myfav_hc_pane_t5

0x9a28,	// (0x00057e63) aid_zoom_text_primary

0x0cce,	// (0x0004f109) popup_adpt_find_window_ParamLimits

0x9a63,	// (0x00057e9e) main_cam_set_pane

0x6723,	// (0x00054b5e) cam4_zoom_pane_ParamLimits

0x6723,	// (0x00054b5e) cam4_zoom_pane

0x6e2e,	// (0x00055269) main_cam_set_pane_g1_ParamLimits

0x6e2e,	// (0x00055269) main_cam_set_pane_g1

0x6e3c,	// (0x00055277) main_cam_set_pane_g2_ParamLimits

0x6e3c,	// (0x00055277) main_cam_set_pane_g2

0x0001,

0xf978,	// (0x0005ddb3) main_cam_set_pane_g_ParamLimits

0xf978,	// (0x0005ddb3) main_cam_set_pane_g

0x6e5d,	// (0x00055298) main_cam_set_pane_t1_ParamLimits

0x6e5d,	// (0x00055298) main_cam_set_pane_t1

0x6e78,	// (0x000552b3) main_cset_listscroll_pane_ParamLimits

0x6e78,	// (0x000552b3) main_cset_listscroll_pane

0x6e9c,	// (0x000552d7) main_cset_slider_pane_ParamLimits

0x6e9c,	// (0x000552d7) main_cset_slider_pane

0xd749,	// (0x0005bb84) main_cset_list_pane_ParamLimits

0xd749,	// (0x0005bb84) main_cset_list_pane

0xd759,	// (0x0005bb94) scroll_pane_cp028

0x6ec6,	// (0x00055301) aid_area_touch_slider

0x6ee2,	// (0x0005531d) cset_slider_pane

0x6f0c,	// (0x00055347) main_cset_slider_pane_g1

0x6f21,	// (0x0005535c) main_cset_slider_pane_g2

0x0011,

0xf97d,	// (0x0005ddb8) main_cset_slider_pane_g

0xd792,	// (0x0005bbcd) main_cset_slider_pane_t1

0x6fe3,	// (0x0005541e) main_cset_slider_pane_t2

0x6ffd,	// (0x00055438) main_cset_slider_pane_t3

0x7017,	// (0x00055452) main_cset_slider_pane_t4

0x7031,	// (0x0005546c) main_cset_slider_pane_t5

0x704f,	// (0x0005548a) main_cset_slider_pane_t6

0x7064,	// (0x0005549f) main_cset_slider_pane_t7

0x000e,

0xf9a2,	// (0x0005dddd) main_cset_slider_pane_t

0x7170,	// (0x000555ab) cset_list_set_pane_ParamLimits

0x7170,	// (0x000555ab) cset_list_set_pane

0x7184,	// (0x000555bf) aid_position_infowindow_above

0x718c,	// (0x000555c7) aid_position_infowindow_below

0xffd4,	// (0x0004e40f) cset_list_set_pane_g1_ParamLimits

0xffd4,	// (0x0004e40f) cset_list_set_pane_g1

0xffe0,	// (0x0004e41b) cset_list_set_pane_g3_ParamLimits

0xffe0,	// (0x0004e41b) cset_list_set_pane_g3

0x0001,

0xf9c1,	// (0x0005ddfc) cset_list_set_pane_g_ParamLimits

0xf9c1,	// (0x0005ddfc) cset_list_set_pane_g

0xffef,	// (0x0004e42a) cset_list_set_pane_t1_ParamLimits

0xffef,	// (0x0004e42a) cset_list_set_pane_t1

0x9a63,	// (0x00057e9e) list_highlight_pane_cp021_ParamLimits

0x9a63,	// (0x00057e9e) list_highlight_pane_cp021

0xb51a,	// (0x00059955) cset_slider_pane_g1

0xb52c,	// (0x00059967) cset_slider_pane_g2

0xb523,	// (0x0005995e) cset_slider_pane_g3

0x0002,

0xf9c6,	// (0x0005de01) cset_slider_pane_g

0xaad3,	// (0x00058f0e) aid_area_touch_cam4_zoom

0xaadb,	// (0x00058f16) cam4_zoom_cont_pane

0xaae3,	// (0x00058f1e) cam4_zoom_pane_g1

0xaaeb,	// (0x00058f26) cam4_zoom_pane_g2

0x7194,	// (0x000555cf) cam4_zoom_pane_g3

0x0002,

0xf9cd,	// (0x0005de08) cam4_zoom_pane_g

0xd832,	// (0x0005bc6d) cam4_zoom_cont_pane_g1

0xd83b,	// (0x0005bc76) cam4_zoom_cont_pane_g2

0xd844,	// (0x0005bc7f) cam4_zoom_cont_pane_g3

0x0002,

0xf9d4,	// (0x0005de0f) cam4_zoom_cont_pane_g

0x65a0,	// (0x000549db) call4_image_pane_ParamLimits

0x65a0,	// (0x000549db) call4_image_pane

0xd53b,	// (0x0005b976) call4_windows_conf_pane_ParamLimits

0xd556,	// (0x0005b991) popup_call4_audio_in_window_ParamLimits

0xd556,	// (0x0005b991) popup_call4_audio_in_window

0x9a0a,	// (0x00057e45) bg_popup_call2_act_pane_cp02

0xd5b8,	// (0x0005b9f3) call4_list_conf_pane

0xcc53,	// (0x0005b08e) call4_image_pane_g1

0xcc53,	// (0x0005b08e) call4_image_pane_g2

0x0001,

0xf6e8,	// (0x0005db23) call4_image_pane_g

0xd84d,	// (0x0005bc88) list_single_graphic_popup_conf4_pane_ParamLimits

0xd84d,	// (0x0005bc88) list_single_graphic_popup_conf4_pane

0x9a0a,	// (0x00057e45) list_highlight_pane_cp022

0xd862,	// (0x0005bc9d) list_single_graphic_popup_conf4_pane_g1

0xb206,	// (0x00059641) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf9db,	// (0x0005de16) list_single_graphic_popup_conf4_pane_g

0xd86a,	// (0x0005bca5) list_single_graphic_popup_conf4_pane_t1

0x1f99,	// (0x000503d4) popup_vtel_slider_window_ParamLimits

0x1f99,	// (0x000503d4) popup_vtel_slider_window

0xd51d,	// (0x0005b958) dialer2_ne_pane_t2_ParamLimits

0xd51d,	// (0x0005b958) dialer2_ne_pane_t2

0x0001,

0xf8bc,	// (0x0005dcf7) dialer2_ne_pane_t_ParamLimits

0xf8bc,	// (0x0005dcf7) dialer2_ne_pane_t

0xca32,	// (0x0005ae6d) bg_popup_sub_pane_cp010_ParamLimits

0xca32,	// (0x0005ae6d) bg_popup_sub_pane_cp010

0x719c,	// (0x000555d7) popup_vtel_slider_window_g1_ParamLimits

0x719c,	// (0x000555d7) popup_vtel_slider_window_g1

0x71af,	// (0x000555ea) popup_vtel_slider_window_g2_ParamLimits

0x71af,	// (0x000555ea) popup_vtel_slider_window_g2

0x0003,

0xf9e0,	// (0x0005de1b) popup_vtel_slider_window_g_ParamLimits

0xf9e0,	// (0x0005de1b) popup_vtel_slider_window_g

0x7205,	// (0x00055640) vtel_slider_pane_ParamLimits

0x7205,	// (0x00055640) vtel_slider_pane

0x7227,	// (0x00055662) vtel_slider_pane_g1_ParamLimits

0x7227,	// (0x00055662) vtel_slider_pane_g1

0x723b,	// (0x00055676) vtel_slider_pane_g2_ParamLimits

0x723b,	// (0x00055676) vtel_slider_pane_g2

0x7253,	// (0x0005568e) vtel_slider_pane_g3_ParamLimits

0x7253,	// (0x0005568e) vtel_slider_pane_g3

0x7227,	// (0x00055662) vtel_slider_pane_g4_ParamLimits

0x7227,	// (0x00055662) vtel_slider_pane_g4

0x7269,	// (0x000556a4) vtel_slider_pane_g5_ParamLimits

0x7269,	// (0x000556a4) vtel_slider_pane_g5

0x0004,

0xf9e9,	// (0x0005de24) vtel_slider_pane_g_ParamLimits

0xf9e9,	// (0x0005de24) vtel_slider_pane_g

0x9a63,	// (0x00057e9e) main_gallery2_pane

0x6927,	// (0x00054d62) aid_size_row_itut2_dropdow_list_ParamLimits

0x6927,	// (0x00054d62) aid_size_row_itut2_dropdow_list

0x69b9,	// (0x00054df4) grid_vitu2_function_top_pane_ParamLimits

0x69b9,	// (0x00054df4) grid_vitu2_function_top_pane

0x6a18,	// (0x00054e53) popup_vitu2_dropdown_list_window_ParamLimits

0x6a18,	// (0x00054e53) popup_vitu2_dropdown_list_window

0x6a45,	// (0x00054e80) popup_vitu2_match_list_window

0x727f,	// (0x000556ba) cell_vitu2_function_top_pane_ParamLimits

0x727f,	// (0x000556ba) cell_vitu2_function_top_pane

0x729f,	// (0x000556da) cell_vitu2_function_top_pane_cp01_ParamLimits

0x729f,	// (0x000556da) cell_vitu2_function_top_pane_cp01

0x72bd,	// (0x000556f8) cell_vitu2_function_top_wide_pane_ParamLimits

0x72bd,	// (0x000556f8) cell_vitu2_function_top_wide_pane

0x9a63,	// (0x00057e9e) bg_button_pane_cp012

0x72db,	// (0x00055716) cell_vitu2_function_top_pane_g1

0xaaf3,	// (0x00058f2e) bg_button_pane_cp013_ParamLimits

0xaaf3,	// (0x00058f2e) bg_button_pane_cp013

0x72ef,	// (0x0005572a) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x72ef,	// (0x0005572a) cell_vitu2_function_top_wide_pane_g1

0x9a63,	// (0x00057e9e) bg_popup_sub_pane_cp20

0x7307,	// (0x00055742) list_vitu2_match_list_pane

0xd63b,	// (0x0005ba76) bg_popup_sub_pane_cp20_g1

0xd643,	// (0x0005ba7e) bg_popup_sub_pane_cp20_g2

0xacfb,	// (0x00059136) bg_popup_sub_pane_cp20_g3

0xd64b,	// (0x0005ba86) bg_popup_sub_pane_cp20_g4

0xacdb,	// (0x00059116) bg_popup_sub_pane_cp20_g5

0xd880,	// (0x0005bcbb) bg_popup_sub_pane_cp20_g6

0xd65b,	// (0x0005ba96) bg_popup_sub_pane_cp20_g7

0xd663,	// (0x0005ba9e) bg_popup_sub_pane_cp20_g8

0xd66b,	// (0x0005baa6) bg_popup_sub_pane_cp20_g9

0x0008,

0xf9f4,	// (0x0005de2f) bg_popup_sub_pane_cp20_g

0xab0f,	// (0x00058f4a) list_vitu2_match_list_item_pane_ParamLimits

0xab0f,	// (0x00058f4a) list_vitu2_match_list_item_pane

0xab21,	// (0x00058f5c) list_vitu2_match_list_item_pane_t1

0x9a0a,	// (0x00057e45) bg_popup_sub_pane_cp21

0xb12f,	// (0x0005956a) grid_vitu2_dropdown_list_pane

0x7325,	// (0x00055760) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x7325,	// (0x00055760) cell_vitu2_dropdown_list_char_pane

0x7348,	// (0x00055783) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x7348,	// (0x00055783) cell_vitu2_dropdown_list_ctrl_pane

0xd888,	// (0x0005bcc3) cell_vitu2_dropdown_list_char_pane_g1

0xd891,	// (0x0005bccc) cell_vitu2_dropdown_list_char_pane_g2

0xd89a,	// (0x0005bcd5) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xfa11,	// (0x0005de4c) cell_vitu2_dropdown_list_char_pane_g

0x7376,	// (0x000557b1) cell_vitu2_dropdown_list_char_pane_t1

0x7384,	// (0x000557bf) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x7384,	// (0x000557bf) cell_vitu2_dropdown_list_ctrl_pane_g1

0x7394,	// (0x000557cf) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x7394,	// (0x000557cf) cell_vitu2_dropdown_list_ctrl_pane_g2

0x73a5,	// (0x000557e0) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x73a5,	// (0x000557e0) cell_vitu2_dropdown_list_ctrl_pane_g3

0x73b5,	// (0x000557f0) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x73b5,	// (0x000557f0) cell_vitu2_dropdown_list_ctrl_pane_g4

0xce83,	// (0x0005b2be) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0xce83,	// (0x0005b2be) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa18,	// (0x0005de53) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa18,	// (0x0005de53) cell_vitu2_dropdown_list_ctrl_pane_g

0x73d1,	// (0x0005580c) aid_size_cell_gallery2_ParamLimits

0x73d1,	// (0x0005580c) aid_size_cell_gallery2

0x73ef,	// (0x0005582a) grid_gallery2_pane_ParamLimits

0x73ef,	// (0x0005582a) grid_gallery2_pane

0x7409,	// (0x00055844) scroll_pane_cp029_ParamLimits

0x7409,	// (0x00055844) scroll_pane_cp029

0x7415,	// (0x00055850) cell_gallery2_pane_ParamLimits

0x7415,	// (0x00055850) cell_gallery2_pane

0xd8a3,	// (0x0005bcde) cell_gallery2_pane_g2

0x7476,	// (0x000558b1) cell_gallery2_pane_g3

0xd8ab,	// (0x0005bce6) cell_gallery2_pane_g4

0xd8b3,	// (0x0005bcee) cell_gallery2_pane_g5

0xb3d4,	// (0x0005980f) grid_highlight_pane_cp10

0x6a45,	// (0x00054e80) popup_vitu2_match_list_window_ParamLimits

0x6a5c,	// (0x00054e97) popup_vitu2_query_window_ParamLimits

0x6a5c,	// (0x00054e97) popup_vitu2_query_window

0x9a0a,	// (0x00057e45) bg_vitu2_candi_button_pane

0xd888,	// (0x0005bcc3) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xd891,	// (0x0005bccc) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xd89a,	// (0x0005bcd5) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x005c,	// (0x0004e497) bg_button_pane_cp015

0x747e,	// (0x000558b9) bg_button_pane_cp016

0x7491,	// (0x000558cc) bg_button_pane_cp017

0xc802,	// (0x0005ac3d) bg_popup_sub_pane_cp22

0xd8bb,	// (0x0005bcf6) popup_vitu2_query_window_g1

0x0091,	// (0x0004e4cc) popup_vitu2_query_window_g2

0x0002,

0xfa23,	// (0x0005de5e) popup_vitu2_query_window_g

0x00b0,	// (0x0004e4eb) popup_vitu2_query_window_t1_ParamLimits

0x00b0,	// (0x0004e4eb) popup_vitu2_query_window_t1

0x00e5,	// (0x0004e520) popup_vitu2_query_window_t2_ParamLimits

0x00e5,	// (0x0004e520) popup_vitu2_query_window_t2

0x00f7,	// (0x0004e532) popup_vitu2_query_window_t3_ParamLimits

0x00f7,	// (0x0004e532) popup_vitu2_query_window_t3

0x74b5,	// (0x000558f0) popup_vitu2_query_window_t4_ParamLimits

0x74b5,	// (0x000558f0) popup_vitu2_query_window_t4

0x74d6,	// (0x00055911) popup_vitu2_query_window_t5_ParamLimits

0x74d6,	// (0x00055911) popup_vitu2_query_window_t5

0x0006,

0xfa2a,	// (0x0005de65) popup_vitu2_query_window_t_ParamLimits

0xfa2a,	// (0x0005de65) popup_vitu2_query_window_t

0xd741,	// (0x0005bb7c) main_cset_text_pane

0x6ec6,	// (0x00055301) aid_area_touch_slider_ParamLimits

0x6ee2,	// (0x0005531d) cset_slider_pane_ParamLimits

0x6f0c,	// (0x00055347) main_cset_slider_pane_g1_ParamLimits

0x6f21,	// (0x0005535c) main_cset_slider_pane_g2_ParamLimits

0xd762,	// (0x0005bb9d) main_cset_slider_pane_g3_ParamLimits

0xd762,	// (0x0005bb9d) main_cset_slider_pane_g3

0x6f36,	// (0x00055371) main_cset_slider_pane_g4_ParamLimits

0x6f36,	// (0x00055371) main_cset_slider_pane_g4

0x6f45,	// (0x00055380) main_cset_slider_pane_g5_ParamLimits

0x6f45,	// (0x00055380) main_cset_slider_pane_g5

0x6f53,	// (0x0005538e) main_cset_slider_pane_g6_ParamLimits

0x6f53,	// (0x0005538e) main_cset_slider_pane_g6

0xf97d,	// (0x0005ddb8) main_cset_slider_pane_g_ParamLimits

0xd792,	// (0x0005bbcd) main_cset_slider_pane_t1_ParamLimits

0x6fe3,	// (0x0005541e) main_cset_slider_pane_t2_ParamLimits

0x6ffd,	// (0x00055438) main_cset_slider_pane_t3_ParamLimits

0x7017,	// (0x00055452) main_cset_slider_pane_t4_ParamLimits

0x7031,	// (0x0005546c) main_cset_slider_pane_t5_ParamLimits

0x704f,	// (0x0005548a) main_cset_slider_pane_t6_ParamLimits

0x7064,	// (0x0005549f) main_cset_slider_pane_t7_ParamLimits

0x7092,	// (0x000554cd) main_cset_slider_pane_t8_ParamLimits

0x7092,	// (0x000554cd) main_cset_slider_pane_t8

0x70ba,	// (0x000554f5) main_cset_slider_pane_t9_ParamLimits

0x70ba,	// (0x000554f5) main_cset_slider_pane_t9

0x70e2,	// (0x0005551d) main_cset_slider_pane_t10_ParamLimits

0x70e2,	// (0x0005551d) main_cset_slider_pane_t10

0x710a,	// (0x00055545) main_cset_slider_pane_t11_ParamLimits

0x710a,	// (0x00055545) main_cset_slider_pane_t11

0x7134,	// (0x0005556f) main_cset_slider_pane_t12_ParamLimits

0x7134,	// (0x0005556f) main_cset_slider_pane_t12

0x7151,	// (0x0005558c) main_cset_slider_pane_t13_ParamLimits

0x7151,	// (0x0005558c) main_cset_slider_pane_t13

0xf9a2,	// (0x0005dddd) main_cset_slider_pane_t_ParamLimits

0x9a0a,	// (0x00057e45) bg_popup_sub_pane_cp011

0xd8c7,	// (0x0005bd02) main_cset_text_pane_g1

0xd8cf,	// (0x0005bd0a) main_cset_text_pane_t1

0xd8dd,	// (0x0005bd18) main_cset_text_pane_t2

0xd8eb,	// (0x0005bd26) main_cset_text_pane_t3

0xd8f9,	// (0x0005bd34) main_cset_text_pane_t4

0xd907,	// (0x0005bd42) main_cset_text_pane_t5

0xd915,	// (0x0005bd50) main_cset_text_pane_t6

0xd923,	// (0x0005bd5e) main_cset_text_pane_t7

0x0006,

0xfa39,	// (0x0005de74) main_cset_text_pane_t

0x9a0a,	// (0x00057e45) main_cam4_burst_pane

0x9a0a,	// (0x00057e45) main_cam5_pane

0x6dfd,	// (0x00055238) bg_button_pane_cp019

0x6e06,	// (0x00055241) bg_button_pane_cp020

0xd76e,	// (0x0005bba9) main_cset_slider_pane_g7_ParamLimits

0xd76e,	// (0x0005bba9) main_cset_slider_pane_g7

0xd77a,	// (0x0005bbb5) main_cset_slider_pane_g8_ParamLimits

0xd77a,	// (0x0005bbb5) main_cset_slider_pane_g8

0x6f67,	// (0x000553a2) main_cset_slider_pane_g9_ParamLimits

0x6f67,	// (0x000553a2) main_cset_slider_pane_g9

0x6f73,	// (0x000553ae) main_cset_slider_pane_g10_ParamLimits

0x6f73,	// (0x000553ae) main_cset_slider_pane_g10

0x6f7f,	// (0x000553ba) main_cset_slider_pane_g11_ParamLimits

0x6f7f,	// (0x000553ba) main_cset_slider_pane_g11

0x6f8b,	// (0x000553c6) main_cset_slider_pane_g12_ParamLimits

0x6f8b,	// (0x000553c6) main_cset_slider_pane_g12

0x6f97,	// (0x000553d2) main_cset_slider_pane_g13_ParamLimits

0x6f97,	// (0x000553d2) main_cset_slider_pane_g13

0x6fa3,	// (0x000553de) main_cset_slider_pane_g14_ParamLimits

0x6fa3,	// (0x000553de) main_cset_slider_pane_g14

0x6faf,	// (0x000553ea) main_cset_slider_pane_g15_ParamLimits

0x6faf,	// (0x000553ea) main_cset_slider_pane_g15

0xd7c0,	// (0x0005bbfb) main_cset_slider_pane_t14_ParamLimits

0xd7c0,	// (0x0005bbfb) main_cset_slider_pane_t14

0xd7f9,	// (0x0005bc34) main_cset_slider_pane_t15_ParamLimits

0xd7f9,	// (0x0005bc34) main_cset_slider_pane_t15

0x74f7,	// (0x00055932) aid_cam4_burst_size_cell_ParamLimits

0x74f7,	// (0x00055932) aid_cam4_burst_size_cell

0x7517,	// (0x00055952) grid_cam4_burst_pane_ParamLimits

0x7517,	// (0x00055952) grid_cam4_burst_pane

0x7551,	// (0x0005598c) linegrid_cam4_burst_pane_ParamLimits

0x7551,	// (0x0005598c) linegrid_cam4_burst_pane

0xd931,	// (0x0005bd6c) scroll_pane_cp30_ParamLimits

0xd931,	// (0x0005bd6c) scroll_pane_cp30

0x7573,	// (0x000559ae) cell_cam4_burst_pane_ParamLimits

0x7573,	// (0x000559ae) cell_cam4_burst_pane

0xd93d,	// (0x0005bd78) linegrid_cam4_burst_pane_g1_ParamLimits

0xd93d,	// (0x0005bd78) linegrid_cam4_burst_pane_g1

0x75c8,	// (0x00055a03) linegrid_cam4_burst_pane_g2_ParamLimits

0x75c8,	// (0x00055a03) linegrid_cam4_burst_pane_g2

0xd94a,	// (0x0005bd85) linegrid_cam4_burst_pane_g3_ParamLimits

0xd94a,	// (0x0005bd85) linegrid_cam4_burst_pane_g3

0x0002,

0xfa48,	// (0x0005de83) linegrid_cam4_burst_pane_g_ParamLimits

0xfa48,	// (0x0005de83) linegrid_cam4_burst_pane_g

0x75d9,	// (0x00055a14) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x75d9,	// (0x00055a14) linegrid_cam4_burst_pane_g3_copy1

0xd957,	// (0x0005bd92) linegrid_cam4_burst_pane_g4_ParamLimits

0xd957,	// (0x0005bd92) linegrid_cam4_burst_pane_g4

0x75f7,	// (0x00055a32) linegrid_cam4_burst_pane_g5_ParamLimits

0x75f7,	// (0x00055a32) linegrid_cam4_burst_pane_g5

0x7608,	// (0x00055a43) linegrid_cam4_burst_pane_g6_ParamLimits

0x7608,	// (0x00055a43) linegrid_cam4_burst_pane_g6

0xd964,	// (0x0005bd9f) linegrid_cam4_burst_pane_g7_ParamLimits

0xd964,	// (0x0005bd9f) linegrid_cam4_burst_pane_g7

0x761f,	// (0x00055a5a) cell_cam4_burst_pane_g1

0xd97d,	// (0x0005bdb8) main_cam5_pane_t1_ParamLimits

0xd97d,	// (0x0005bdb8) main_cam5_pane_t1

0xd98f,	// (0x0005bdca) main_cam5_pane_t2_ParamLimits

0xd98f,	// (0x0005bdca) main_cam5_pane_t2

0xd9a1,	// (0x0005bddc) main_cam5_pane_t3_ParamLimits

0xd9a1,	// (0x0005bddc) main_cam5_pane_t3

0xd9b3,	// (0x0005bdee) main_cam5_pane_t4_ParamLimits

0xd9b3,	// (0x0005bdee) main_cam5_pane_t4

0xd9cb,	// (0x0005be06) main_cam5_pane_t5_ParamLimits

0xd9cb,	// (0x0005be06) main_cam5_pane_t5

0xd9df,	// (0x0005be1a) main_cam5_pane_t6_ParamLimits

0xd9df,	// (0x0005be1a) main_cam5_pane_t6

0xd9f3,	// (0x0005be2e) main_cam5_pane_t7_ParamLimits

0xd9f3,	// (0x0005be2e) main_cam5_pane_t7

0xda05,	// (0x0005be40) main_cam5_pane_t8_ParamLimits

0xda05,	// (0x0005be40) main_cam5_pane_t8

0xda23,	// (0x0005be5e) main_cam5_pane_t9_ParamLimits

0xda23,	// (0x0005be5e) main_cam5_pane_t9

0xda35,	// (0x0005be70) main_cam5_pane_t10_ParamLimits

0xda35,	// (0x0005be70) main_cam5_pane_t10

0xda47,	// (0x0005be82) main_cam5_pane_t11_ParamLimits

0xda47,	// (0x0005be82) main_cam5_pane_t11

0xda5b,	// (0x0005be96) main_cam5_pane_t12_ParamLimits

0xda5b,	// (0x0005be96) main_cam5_pane_t12

0xda72,	// (0x0005bead) main_cam5_pane_t13_ParamLimits

0xda72,	// (0x0005bead) main_cam5_pane_t13

0x000c,

0xfa54,	// (0x0005de8f) main_cam5_pane_t_ParamLimits

0xfa54,	// (0x0005de8f) main_cam5_pane_t

0x0d51,	// (0x0004f18c) popup_scut_keymap_window_ParamLimits

0x0d51,	// (0x0004f18c) popup_scut_keymap_window

0x7632,	// (0x00055a6d) aid_size_cell_brow_shortcut

0xb3d4,	// (0x0005980f) bg_popup_window_pane_cp010

0x763e,	// (0x00055a79) grid_scut_pane

0x764a,	// (0x00055a85) cell_scut_pane_ParamLimits

0x764a,	// (0x00055a85) cell_scut_pane

0x7663,	// (0x00055a9e) cell_scut_pane_g1

0xda95,	// (0x0005bed0) cell_scut_pane_t1

0xdaa4,	// (0x0005bedf) cell_scut_pane_t2

0x766c,	// (0x00055aa7) cell_scut_pane_t3

0x0002,

0xfa6f,	// (0x0005deaa) cell_scut_pane_t

0x5439,	// (0x00053874) main_mup3_pane_g8_ParamLimits

0x5439,	// (0x00053874) main_mup3_pane_g8

0x6943,	// (0x00054d7e) area_vitu2_query_pane_ParamLimits

0x6943,	// (0x00054d7e) area_vitu2_query_pane

0x0070,	// (0x0004e4ab) input_focus_pane_cp08

0xdab3,	// (0x0005beee) area_vitu2_query_pane_g1

0x0175,	// (0x0004e5b0) area_vitu2_query_pane_g2

0x0001,

0xfa76,	// (0x0005deb1) area_vitu2_query_pane_g

0x767a,	// (0x00055ab5) area_vitu2_query_pane_t1_ParamLimits

0x767a,	// (0x00055ab5) area_vitu2_query_pane_t1

0x768e,	// (0x00055ac9) area_vitu2_query_pane_t2_ParamLimits

0x768e,	// (0x00055ac9) area_vitu2_query_pane_t2

0x0186,	// (0x0004e5c1) area_vitu2_query_pane_t3_ParamLimits

0x0186,	// (0x0004e5c1) area_vitu2_query_pane_t3

0x76a2,	// (0x00055add) area_vitu2_query_pane_t4_ParamLimits

0x76a2,	// (0x00055add) area_vitu2_query_pane_t4

0x76ca,	// (0x00055b05) area_vitu2_query_pane_t5_ParamLimits

0x76ca,	// (0x00055b05) area_vitu2_query_pane_t5

0x76f2,	// (0x00055b2d) area_vitu2_query_pane_t6_ParamLimits

0x76f2,	// (0x00055b2d) area_vitu2_query_pane_t6

0x0006,

0xfa7b,	// (0x0005deb6) area_vitu2_query_pane_t_ParamLimits

0xfa7b,	// (0x0005deb6) area_vitu2_query_pane_t

0x773e,	// (0x00055b79) bg_button_pane_cp018

0x774c,	// (0x00055b87) bg_button_pane_cp021

0x01ae,	// (0x0004e5e9) bg_button_pane_cp022

0x01bf,	// (0x0004e5fa) input_focus_pane_cp09

0x32fc,	// (0x00051737) aid_size_touch_mv_arrow_left

0x3325,	// (0x00051760) aid_size_touch_mv_arrow_right

0x6fc7,	// (0x00055402) main_cset_slider_pane_g16_ParamLimits

0x6fc7,	// (0x00055402) main_cset_slider_pane_g16

0x6fd5,	// (0x00055410) main_cset_slider_pane_g17_ParamLimits

0x6fd5,	// (0x00055410) main_cset_slider_pane_g17

0x761f,	// (0x00055a5a) cell_cam4_burst_pane_g1_ParamLimits

0x9a0a,	// (0x00057e45) compa_mode_pane

0x71bf,	// (0x000555fa) popup_vtel_slider_window_g3_ParamLimits

0x71bf,	// (0x000555fa) popup_vtel_slider_window_g3

0x71d6,	// (0x00055611) popup_vtel_slider_window_g4_ParamLimits

0x71d6,	// (0x00055611) popup_vtel_slider_window_g4

0x71ed,	// (0x00055628) popup_vtel_slider_window_t1_ParamLimits

0x71ed,	// (0x00055628) popup_vtel_slider_window_t1

0x9a0a,	// (0x00057e45) main_cl_pane

0xc82e,	// (0x0005ac69) popup_imed_adjust2_window_ParamLimits

0xc802,	// (0x0005ac3d) bg_tb_trans_pane_cp05_ParamLimits

0xd130,	// (0x0005b56b) popup_imed_adjust2_window_g1_ParamLimits

0xd13f,	// (0x0005b57a) popup_imed_adjust2_window_g2_ParamLimits

0xd13f,	// (0x0005b57a) popup_imed_adjust2_window_g2

0xd14b,	// (0x0005b586) popup_imed_adjust2_window_g3_ParamLimits

0xd14b,	// (0x0005b586) popup_imed_adjust2_window_g3

0x0002,

0xf7e6,	// (0x0005dc21) popup_imed_adjust2_window_g_ParamLimits

0xf7e6,	// (0x0005dc21) popup_imed_adjust2_window_g

0xd157,	// (0x0005b592) popup_imed_adjust2_window_t1_ParamLimits

0xd16f,	// (0x0005b5aa) slider_imed_adjust_pane_ParamLimits

0xd183,	// (0x0005b5be) slider_imed_adjust_pane_g1_ParamLimits

0xd193,	// (0x0005b5ce) slider_imed_adjust_pane_g2_ParamLimits

0xd1a3,	// (0x0005b5de) slider_imed_adjust_pane_g3_ParamLimits

0xd1b4,	// (0x0005b5ef) slider_imed_adjust_pane_g4_ParamLimits

0xf7ed,	// (0x0005dc28) slider_imed_adjust_pane_g_ParamLimits

0x66c3,	// (0x00054afe) aid_touch_area_cam4_ParamLimits

0x66c3,	// (0x00054afe) aid_touch_area_cam4

0xa9e4,	// (0x00058e1f) battery_pane_cp01

0x6795,	// (0x00054bd0) main_camera4_pane_g6_ParamLimits

0x6795,	// (0x00054bd0) main_camera4_pane_g6

0x67bf,	// (0x00054bfa) main_camera4_pane_t2_ParamLimits

0x67bf,	// (0x00054bfa) main_camera4_pane_t2

0x0001,

0xf8f0,	// (0x0005dd2b) main_camera4_pane_t_ParamLimits

0xf8f0,	// (0x0005dd2b) main_camera4_pane_t

0x67f4,	// (0x00054c2f) aid_touch_area_vid4_ParamLimits

0x67f4,	// (0x00054c2f) aid_touch_area_vid4

0x6848,	// (0x00054c83) main_video4_pane_g5_ParamLimits

0x6848,	// (0x00054c83) main_video4_pane_g5

0x686d,	// (0x00054ca8) vid4_progress_pane_ParamLimits

0x686d,	// (0x00054ca8) vid4_progress_pane

0xd786,	// (0x0005bbc1) main_cset_slider_pane_g18_ParamLimits

0xd786,	// (0x0005bbc1) main_cset_slider_pane_g18

0xd971,	// (0x0005bdac) cell_cam4_burst_pane_g2_ParamLimits

0xd971,	// (0x0005bdac) cell_cam4_burst_pane_g2

0x0001,

0xfa4f,	// (0x0005de8a) cell_cam4_burst_pane_g_ParamLimits

0xfa4f,	// (0x0005de8a) cell_cam4_burst_pane_g

0xa1c6,	// (0x00058601) bg_cl_pane_ParamLimits

0xa1c6,	// (0x00058601) bg_cl_pane

0x7758,	// (0x00055b93) cl_header_pane_ParamLimits

0x7758,	// (0x00055b93) cl_header_pane

0x776c,	// (0x00055ba7) cl_listscroll_pane_ParamLimits

0x776c,	// (0x00055ba7) cl_listscroll_pane

0xdabf,	// (0x0005befa) bg_cl_pane_g1

0xdac7,	// (0x0005bf02) bg_cl_pane_g2

0xdacf,	// (0x0005bf0a) bg_cl_pane_g3

0xdad7,	// (0x0005bf12) bg_cl_pane_g4

0xdadf,	// (0x0005bf1a) bg_cl_pane_g5

0xdae7,	// (0x0005bf22) bg_cl_pane_g6

0xdaef,	// (0x0005bf2a) bg_cl_pane_g7

0xdaf7,	// (0x0005bf32) bg_cl_pane_g8

0xdaff,	// (0x0005bf3a) bg_cl_pane_g9

0x0008,

0xfa8a,	// (0x0005dec5) bg_cl_pane_g

0x777c,	// (0x00055bb7) aid_height_cl_leading_ParamLimits

0x777c,	// (0x00055bb7) aid_height_cl_leading

0x7788,	// (0x00055bc3) aid_height_cl_text_ParamLimits

0x7788,	// (0x00055bc3) aid_height_cl_text

0x9a63,	// (0x00057e9e) bg_cl_header_pane_ParamLimits

0x9a63,	// (0x00057e9e) bg_cl_header_pane

0x77a7,	// (0x00055be2) cl_header_pane_g1_ParamLimits

0x77a7,	// (0x00055be2) cl_header_pane_g1

0x77bd,	// (0x00055bf8) cl_header_pane_t1_ParamLimits

0x77bd,	// (0x00055bf8) cl_header_pane_t1

0xdb07,	// (0x0005bf42) cl_list_pane

0xd759,	// (0x0005bb94) hc_scroll_pane_cp01

0xacdb,	// (0x00059116) bg_cl_header_pane_g1

0xd63b,	// (0x0005ba76) bg_cl_header_pane_g2

0xacfb,	// (0x00059136) bg_cl_header_pane_g3

0xd64b,	// (0x0005ba86) bg_cl_header_pane_g4

0xd643,	// (0x0005ba7e) bg_cl_header_pane_g5

0xd880,	// (0x0005bcbb) bg_cl_header_pane_g6

0xd663,	// (0x0005ba9e) bg_cl_header_pane_g7

0xd66b,	// (0x0005baa6) bg_cl_header_pane_g8

0xd65b,	// (0x0005ba96) bg_cl_header_pane_g9

0x0008,

0xfa9d,	// (0x0005ded8) bg_cl_header_pane_g

0x77d6,	// (0x00055c11) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x77d6,	// (0x00055c11) hc_cl_list_double_graphic_heading_pane

0x77e9,	// (0x00055c24) hc_cl_list_single_graphic_pane_ParamLimits

0x77e9,	// (0x00055c24) hc_cl_list_single_graphic_pane

0x7801,	// (0x00055c3c) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x7801,	// (0x00055c3c) hc_cl_list_single_graphic_pane_g1

0x780d,	// (0x00055c48) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x780d,	// (0x00055c48) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfab0,	// (0x0005deeb) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfab0,	// (0x0005deeb) hc_cl_list_single_graphic_pane_g

0x7821,	// (0x00055c5c) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x7821,	// (0x00055c5c) hc_cl_list_single_graphic_pane_t1

0x7801,	// (0x00055c3c) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x7801,	// (0x00055c3c) hc_cl_list_double_graphic_heading_pane_g1

0x7836,	// (0x00055c71) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x7836,	// (0x00055c71) hc_cl_list_double_graphic_heading_pane_g2

0x784a,	// (0x00055c85) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x784a,	// (0x00055c85) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfab5,	// (0x0005def0) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfab5,	// (0x0005def0) hc_cl_list_double_graphic_heading_pane_g

0x785e,	// (0x00055c99) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x785e,	// (0x00055c99) hc_cl_list_double_graphic_heading_pane_t1

0x7873,	// (0x00055cae) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x7873,	// (0x00055cae) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfabc,	// (0x0005def7) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfabc,	// (0x0005def7) hc_cl_list_double_graphic_heading_pane_t

0x7888,	// (0x00055cc3) vid4_progress_pane_g1

0x789a,	// (0x00055cd5) vid4_progress_pane_g2

0xa68d,	// (0x00058ac8) vid4_progress_pane_g3

0xab37,	// (0x00058f72) vid4_progress_pane_g4

0x0004,

0xfac1,	// (0x0005defc) vid4_progress_pane_g

0xab55,	// (0x00058f90) vid4_progress_pane_t1

0xab6a,	// (0x00058fa5) vid4_progress_pane_t2

0x0002,

0xfacc,	// (0x0005df07) vid4_progress_pane_t

0xab95,	// (0x00058fd0) wait_bar_pane_cp07

0xca40,	// (0x0005ae7b) blid_firmament_pane_ParamLimits

0xca83,	// (0x0005aebe) popup_blid_sat_info2_window_g1

0xcaa7,	// (0x0005aee2) popup_blid_sat_info2_window_t3

0xcab5,	// (0x0005aef0) popup_blid_sat_info2_window_t4

0xcac3,	// (0x0005aefe) popup_blid_sat_info2_window_t5

0xcad1,	// (0x0005af0c) popup_blid_sat_info2_window_t6

0xcae1,	// (0x0005af1c) popup_blid_sat_info2_window_t7

0xcaef,	// (0x0005af2a) popup_blid_sat_info2_window_t8

0xcafd,	// (0x0005af38) popup_blid_sat_info2_window_t9

0xcb0b,	// (0x0005af46) popup_blid_sat_info2_window_t10

0xcbd3,	// (0x0005b00e) aid_firma_cardinal_ParamLimits

0xcbe7,	// (0x0005b022) blid_firmament_pane_t1_ParamLimits

0xcbfe,	// (0x0005b039) blid_firmament_pane_t2_ParamLimits

0xcc15,	// (0x0005b050) blid_firmament_pane_t3_ParamLimits

0xcc2c,	// (0x0005b067) blid_firmament_pane_t4_ParamLimits

0xf6df,	// (0x0005db1a) blid_firmament_pane_t_ParamLimits

0xcc43,	// (0x0005b07e) blid_sat_info_pane_ParamLimits

0x9a63,	// (0x00057e9e) main_cam_set_pane_ParamLimits

0x5d1a,	// (0x00054155) aid_size_cell_colour_35_ParamLimits

0x5d3a,	// (0x00054175) aid_size_cell_colour_112_ParamLimits

0x5d5a,	// (0x00054195) aid_size_cell_effect_ParamLimits

0xc802,	// (0x0005ac3d) bg_tb_trans_pane_cp02_ParamLimits

0xaf34,	// (0x0005936f) heading_imed_pane_ParamLimits

0x5d7a,	// (0x000541b5) listscroll_imed_pane_ParamLimits

0xbe24,	// (0x0005a25f) popup_call2_audio_first_window_g5_ParamLimits

0xbe24,	// (0x0005a25f) popup_call2_audio_first_window_g5

0x632b,	// (0x00054766) aid_size_touch_image3_arrow_left_ParamLimits

0x632b,	// (0x00054766) aid_size_touch_image3_arrow_left

0x6357,	// (0x00054792) aid_size_touch_image3_arrow_right_ParamLimits

0x6357,	// (0x00054792) aid_size_touch_image3_arrow_right

0xab80,	// (0x00058fbb) vid4_progress_pane_t3

0x6099,	// (0x000544d4) main_hwr_training_symbol_option_pane_ParamLimits

0x6099,	// (0x000544d4) main_hwr_training_symbol_option_pane

0xd41f,	// (0x0005b85a) popup_hwr_training_preview_window_ParamLimits

0xd41f,	// (0x0005b85a) popup_hwr_training_preview_window

0x60b9,	// (0x000544f4) hwr_training_navi_pane_g5_ParamLimits

0x60b9,	// (0x000544f4) hwr_training_navi_pane_g5

0xd629,	// (0x0005ba64) popup_char_count_window

0x9a63,	// (0x00057e9e) bg_popup_sub_pane_cp20_ParamLimits

0x7307,	// (0x00055742) list_vitu2_match_list_pane_ParamLimits

0x7316,	// (0x00055751) vitu2_page_scroll_pane_ParamLimits

0x7316,	// (0x00055751) vitu2_page_scroll_pane

0xdb10,	// (0x0005bf4b) list_single_hwr_training_symbol_option_pane_ParamLimits

0xdb10,	// (0x0005bf4b) list_single_hwr_training_symbol_option_pane

0xdb23,	// (0x0005bf5e) list_single_hwr_training_symbol_option_pane_g1

0xdb2b,	// (0x0005bf66) list_single_hwr_training_symbol_option_pane_t1

0xdb39,	// (0x0005bf74) bg_button_pane_cp023

0xdb42,	// (0x0005bf7d) bg_button_pane_cp024

0x78e9,	// (0x00055d24) vitu2_page_scroll_pane_g1

0x78f1,	// (0x00055d2c) vitu2_page_scroll_pane_g2

0x0001,

0xfad3,	// (0x0005df0e) vitu2_page_scroll_pane_g

0x78fb,	// (0x00055d36) vitu2_page_scroll_pane_t1

0xc9a0,	// (0x0005addb) popup_char_count_window_g1

0xdb75,	// (0x0005bfb0) popup_char_count_window_g2

0xdb7e,	// (0x0005bfb9) popup_char_count_window_g3

0x0002,

0xfad8,	// (0x0005df13) popup_char_count_window_g

0xdb87,	// (0x0005bfc2) popup_char_count_window_t1

0x9a0a,	// (0x00057e45) main_vded2_pane

0xd11c,	// (0x0005b557) aid_size_cell_imed_line

0xd126,	// (0x0005b561) grid_imed_line_width_pane

0xaa9e,	// (0x00058ed9) vid4_indicators_pane_g4

0xdb95,	// (0x0005bfd0) cell_imed_line_width_pane_ParamLimits

0xdb95,	// (0x0005bfd0) cell_imed_line_width_pane

0xdbab,	// (0x0005bfe6) cell_imed_line_width_pane_g1

0xdbb4,	// (0x0005bfef) cell_imed_line_width_pane_g2

0x0001,

0xfadf,	// (0x0005df1a) cell_imed_line_width_pane_g

0x790a,	// (0x00055d45) main_vded2_pane_g1_ParamLimits

0x790a,	// (0x00055d45) main_vded2_pane_g1

0x7925,	// (0x00055d60) main_vded2_pane_g2_ParamLimits

0x7925,	// (0x00055d60) main_vded2_pane_g2

0x0001,

0xfae4,	// (0x0005df1f) main_vded2_pane_g_ParamLimits

0xfae4,	// (0x0005df1f) main_vded2_pane_g

0x7937,	// (0x00055d72) vded2_slider_pane_ParamLimits

0x7937,	// (0x00055d72) vded2_slider_pane

0x7947,	// (0x00055d82) aid_size_touch_vded2_end

0x7951,	// (0x00055d8c) aid_size_touch_vded2_playhead

0xdbbc,	// (0x0005bff7) aid_size_touch_vded2_start

0xdbc4,	// (0x0005bfff) vded2_slider_bg_pane

0xdbcd,	// (0x0005c008) vded2_slider_pane_g1

0xdbd6,	// (0x0005c011) vded2_slider_pane_g2

0x795b,	// (0x00055d96) vded2_slider_pane_g3

0x0002,

0xfae9,	// (0x0005df24) vded2_slider_pane_g

0xdbde,	// (0x0005c019) vded2_slider_bg_pane_g1

0xdbe7,	// (0x0005c022) vded2_slider_bg_pane_g2

0xdbf0,	// (0x0005c02b) vded2_slider_bg_pane_g3

0x0002,

0xfaf0,	// (0x0005df2b) vded2_slider_bg_pane_g

0x39eb,	// (0x00051e26) aid_postcard_touch_down_pane_ParamLimits

0x39eb,	// (0x00051e26) aid_postcard_touch_down_pane

0x3a03,	// (0x00051e3e) aid_postcard_touch_up_pane_ParamLimits

0x3a03,	// (0x00051e3e) aid_postcard_touch_up_pane

0x9a0a,	// (0x00057e45) main_blid2_pane

0xc810,	// (0x0005ac4b) popup_blid2_search_window

0x9a0a,	// (0x00057e45) blid2_gps_pane

0x9a0a,	// (0x00057e45) blid2_navig_pane

0x9a0a,	// (0x00057e45) blid2_search_pane

0x9a0a,	// (0x00057e45) blid2_tripm_pane

0x7966,	// (0x00055da1) blid2_search_pane_g1_ParamLimits

0x7966,	// (0x00055da1) blid2_search_pane_g1

0x7979,	// (0x00055db4) blid2_search_pane_t1_ParamLimits

0x7979,	// (0x00055db4) blid2_search_pane_t1

0x798b,	// (0x00055dc6) aid_size_cell_blid2_gps_ParamLimits

0x798b,	// (0x00055dc6) aid_size_cell_blid2_gps

0x79a3,	// (0x00055dde) blid2_gps_pane_g1_ParamLimits

0x79a3,	// (0x00055dde) blid2_gps_pane_g1

0x79b7,	// (0x00055df2) grid_blid2_satellite_pane_ParamLimits

0x79b7,	// (0x00055df2) grid_blid2_satellite_pane

0x79cf,	// (0x00055e0a) blid2_navig_pane_g1_ParamLimits

0x79cf,	// (0x00055e0a) blid2_navig_pane_g1

0x79db,	// (0x00055e16) blid2_navig_pane_t1_ParamLimits

0x79db,	// (0x00055e16) blid2_navig_pane_t1

0x79f6,	// (0x00055e31) blid2_navig_pane_t2_ParamLimits

0x79f6,	// (0x00055e31) blid2_navig_pane_t2

0x0001,

0xfaf7,	// (0x0005df32) blid2_navig_pane_t_ParamLimits

0xfaf7,	// (0x0005df32) blid2_navig_pane_t

0x7a11,	// (0x00055e4c) blid2_navig_ring_pane_ParamLimits

0x7a11,	// (0x00055e4c) blid2_navig_ring_pane

0x7a2c,	// (0x00055e67) blid2_speed_pane_ParamLimits

0x7a2c,	// (0x00055e67) blid2_speed_pane

0x7a38,	// (0x00055e73) blid2_tripm_pane_g1_ParamLimits

0x7a38,	// (0x00055e73) blid2_tripm_pane_g1

0x7a53,	// (0x00055e8e) blid2_tripm_pane_g2_ParamLimits

0x7a53,	// (0x00055e8e) blid2_tripm_pane_g2

0x7a67,	// (0x00055ea2) blid2_tripm_pane_g3_ParamLimits

0x7a67,	// (0x00055ea2) blid2_tripm_pane_g3

0x7a7b,	// (0x00055eb6) blid2_tripm_pane_g4_ParamLimits

0x7a7b,	// (0x00055eb6) blid2_tripm_pane_g4

0x7a8f,	// (0x00055eca) blid2_tripm_pane_g5_ParamLimits

0x7a8f,	// (0x00055eca) blid2_tripm_pane_g5

0x0005,

0xfafc,	// (0x0005df37) blid2_tripm_pane_g_ParamLimits

0xfafc,	// (0x0005df37) blid2_tripm_pane_g

0x7ab5,	// (0x00055ef0) blid2_tripm_pane_t1_ParamLimits

0x7ab5,	// (0x00055ef0) blid2_tripm_pane_t1

0x7ace,	// (0x00055f09) blid2_tripm_pane_t2_ParamLimits

0x7ace,	// (0x00055f09) blid2_tripm_pane_t2

0x7ae7,	// (0x00055f22) blid2_tripm_pane_t3_ParamLimits

0x7ae7,	// (0x00055f22) blid2_tripm_pane_t3

0x0003,

0xfb09,	// (0x0005df44) blid2_tripm_pane_t_ParamLimits

0xfb09,	// (0x0005df44) blid2_tripm_pane_t

0x7b2e,	// (0x00055f69) cell_blid2_satellite_pane_ParamLimits

0x7b2e,	// (0x00055f69) cell_blid2_satellite_pane

0x7b4c,	// (0x00055f87) cell_blid2_satellite_pane_g1

0xdbf9,	// (0x0005c034) cell_blid2_satellite_pane_t1

0xcc53,	// (0x0005b08e) blid2_speed_pane_g1

0xdc07,	// (0x0005c042) blid2_speed_pane_t1

0xdc15,	// (0x0005c050) blid2_speed_pane_t2

0x0001,

0xfb12,	// (0x0005df4d) blid2_speed_pane_t

0xcc53,	// (0x0005b08e) blid2_navig_ring_pane_g1

0x7b55,	// (0x00055f90) blid2_navig_ring_pane_g2

0x7b5d,	// (0x00055f98) blid2_navig_ring_pane_g3

0x7b65,	// (0x00055fa0) blid2_navig_ring_pane_g4

0x7b6d,	// (0x00055fa8) blid2_navig_ring_pane_g5

0x0004,

0xfb17,	// (0x0005df52) blid2_navig_ring_pane_g

0x9a0a,	// (0x00057e45) bg_popup_window_pane_cp011

0xdc23,	// (0x0005c05e) popup_blid2_search_window_g1

0xdc2b,	// (0x0005c066) popup_blid2_search_window_t1

0xdc39,	// (0x0005c074) popup_blid2_search_window_t2

0x0001,

0xfb22,	// (0x0005df5d) popup_blid2_search_window_t

0xa56c,	// (0x000589a7) main_browser_pane_g1

0xa1c6,	// (0x00058601) main_browser_pane_ParamLimits

0x9a63,	// (0x00057e9e) bg_button_pane_cp011_ParamLimits

0x6b8f,	// (0x00054fca) cell_vitu2_function_pane_g1_ParamLimits

0xc802,	// (0x0005ac3d) bg_popup_sub_pane_cp22_ParamLimits

0x0070,	// (0x0004e4ab) input_focus_pane_cp08_ParamLimits

0x74a4,	// (0x000558df) popup_vitu2_query_button_pane_ParamLimits

0x74a4,	// (0x000558df) popup_vitu2_query_button_pane

0x0087,	// (0x0004e4c2) popup_vitu2_query_input_button_pane

0xd8bb,	// (0x0005bcf6) popup_vitu2_query_window_g1_ParamLimits

0x0091,	// (0x0004e4cc) popup_vitu2_query_window_g2_ParamLimits

0xfa23,	// (0x0005de5e) popup_vitu2_query_window_g_ParamLimits

0x9a0a,	// (0x00057e45) bg_button_pane_cp026

0x7b75,	// (0x00055fb0) popup_vitu2_query_input_button_pane_g1

0x9a0a,	// (0x00057e45) bg_button_pane_cp025

0xdc47,	// (0x0005c082) popup_vitu2_query_button_pane_t1

0x510f,	// (0x0005354a) main_mp3_pane_t6

0x511d,	// (0x00053558) popup_slider_window_cp01

0xaa02,	// (0x00058e3d) cam4_battery_pane

0xaa57,	// (0x00058e92) cam4_battery_pane_cp02

0xab2f,	// (0x00058f6a) cam4_battery_pane_cp01

0xab2f,	// (0x00058f6a) cam4_battery_pane_cp03

0xcc53,	// (0x0005b08e) cam4_battery_pane_g1

0xdc55,	// (0x0005c090) cam4_battery_pane_g2

0x0001,

0xfb27,	// (0x0005df62) cam4_battery_pane_g

0xcb19,	// (0x0005af54) popup_blid_sat_info2_window_t11

0x32fc,	// (0x00051737) aid_size_touch_mv_arrow_left_ParamLimits

0x3325,	// (0x00051760) aid_size_touch_mv_arrow_right_ParamLimits

0xb334,	// (0x0005976f) navi_pane_g1_ParamLimits

0x3364,	// (0x0005179f) navi_pane_g2_ParamLimits

0x3392,	// (0x000517cd) navi_pane_g3_ParamLimits

0xf3f1,	// (0x0005d82c) navi_pane_g_ParamLimits

0x33ec,	// (0x00051827) navi_pane_mv_t1_ParamLimits

0x5d86,	// (0x000541c1) grid_imed_effect_pane_ParamLimits

0x1ea1,	// (0x000502dc) aid_placing_vt_slider_lsc

0xa4b7,	// (0x000588f2) aid_placing_vt_slider_prt

0x9a63,	// (0x00057e9e) bg_tb_trans_pane_cp01_ParamLimits

0xcda3,	// (0x0005b1de) popup_image_details_window_g1_ParamLimits

0xcdb6,	// (0x0005b1f1) popup_image_details_window_g2_ParamLimits

0xcdcb,	// (0x0005b206) popup_image_details_window_g3_ParamLimits

0xcdcb,	// (0x0005b206) popup_image_details_window_g3

0xf724,	// (0x0005db5f) popup_image_details_window_g_ParamLimits

0xcddf,	// (0x0005b21a) popup_image_details_window_t1_ParamLimits

0xcdf1,	// (0x0005b22c) popup_image_details_window_t2_ParamLimits

0xce0a,	// (0x0005b245) popup_image_details_window_t3_ParamLimits

0xce1e,	// (0x0005b259) popup_image_details_window_t4_ParamLimits

0xce39,	// (0x0005b274) popup_image_details_window_t5_ParamLimits

0xf72b,	// (0x0005db66) popup_image_details_window_t_ParamLimits

0x7794,	// (0x00055bcf) cl_header_name_pane_ParamLimits

0x7794,	// (0x00055bcf) cl_header_name_pane

0x7b7d,	// (0x00055fb8) cl_header_name_pane_t1_ParamLimits

0x7b7d,	// (0x00055fb8) cl_header_name_pane_t1

0x7b9e,	// (0x00055fd9) cl_header_name_pane_t2_ParamLimits

0x7b9e,	// (0x00055fd9) cl_header_name_pane_t2

0x7be0,	// (0x0005601b) cl_header_name_pane_t3_ParamLimits

0x7be0,	// (0x0005601b) cl_header_name_pane_t3

0x0002,

0xfb2c,	// (0x0005df67) cl_header_name_pane_t_ParamLimits

0xfb2c,	// (0x0005df67) cl_header_name_pane_t

0x33bd,	// (0x000517f8) navi_pane_mv_g2_ParamLimits

0xd603,	// (0x0005ba3e) field_vitu2_entry_pane_g1_ParamLimits

0xd60f,	// (0x0005ba4a) field_vitu2_entry_pane_g2_ParamLimits

0xd61b,	// (0x0005ba56) field_vitu2_entry_pane_g3_ParamLimits

0xd61b,	// (0x0005ba56) field_vitu2_entry_pane_g3

0xf922,	// (0x0005dd5d) field_vitu2_entry_pane_g_ParamLimits

0x6b06,	// (0x00054f41) cell_vitu2_itu_pane_g1_ParamLimits

0x6b16,	// (0x00054f51) cell_vitu2_itu_pane_g2_ParamLimits

0x6b16,	// (0x00054f51) cell_vitu2_itu_pane_g2

0x0001,

0xf92e,	// (0x0005dd69) cell_vitu2_itu_pane_g_ParamLimits

0xf92e,	// (0x0005dd69) cell_vitu2_itu_pane_g

0x9a63,	// (0x00057e9e) bg_vkb2_func_pane_cp05_ParamLimits

0x9a63,	// (0x00057e9e) bg_vkb2_func_pane_cp05

0x9a63,	// (0x00057e9e) bg_vkb2_func_pane_cp03

0x9a63,	// (0x00057e9e) bg_vkb2_func_pane_cp04

0x9a63,	// (0x00057e9e) bg_vkb2_func_pane_cp10_ParamLimits

0x9a63,	// (0x00057e9e) bg_vkb2_func_pane_cp10

0x01ae,	// (0x0004e5e9) bg_vkb2_func_pane_cp08

0x773e,	// (0x00055b79) bg_vkb2_func_pane_cp06

0x774c,	// (0x00055b87) bg_vkb2_func_pane_cp07

0xdb4b,	// (0x0005bf86) bg_vkb2_func_pane_cp11_ParamLimits

0xdb4b,	// (0x0005bf86) bg_vkb2_func_pane_cp11

0xdb60,	// (0x0005bf9b) bg_vkb2_func_pane_cp12_ParamLimits

0xdb60,	// (0x0005bf9b) bg_vkb2_func_pane_cp12

0x9a0a,	// (0x00057e45) bg_vkb2_func_pane_cp09

0xd63b,	// (0x0005ba76) bg_vkb2_func_pane_g1

0xacfb,	// (0x00059136) bg_vkb2_func_pane_g2

0xd643,	// (0x0005ba7e) bg_vkb2_func_pane_g3

0xd64b,	// (0x0005ba86) bg_vkb2_func_pane_g4

0xd880,	// (0x0005bcbb) bg_vkb2_func_pane_g5

0xd663,	// (0x0005ba9e) bg_vkb2_func_pane_g6

0xd66b,	// (0x0005baa6) bg_vkb2_func_pane_g7

0xd65b,	// (0x0005ba96) bg_vkb2_func_pane_g8

0xacdb,	// (0x00059116) bg_vkb2_func_pane_g9

0x0008,

0xfb33,	// (0x0005df6e) bg_vkb2_func_pane_g

0x7aa3,	// (0x00055ede) blid2_tripm_pane_g6_ParamLimits

0x7aa3,	// (0x00055ede) blid2_tripm_pane_g6

0xd4d7,	// (0x0005b912) mp4_progress_pane_g1

0x7b1a,	// (0x00055f55) blid2_tripm_values_pane_ParamLimits

0x7b1a,	// (0x00055f55) blid2_tripm_values_pane

0x7c11,	// (0x0005604c) blid2_tripm_values_pane_t1

0x7c1f,	// (0x0005605a) blid2_tripm_values_pane_t2

0x7c2d,	// (0x00056068) blid2_tripm_values_pane_t3

0x7c3b,	// (0x00056076) blid2_tripm_values_pane_t4

0x7c49,	// (0x00056084) blid2_tripm_values_pane_t5

0x7c57,	// (0x00056092) blid2_tripm_values_pane_t6

0x7c65,	// (0x000560a0) blid2_tripm_values_pane_t7

0x7c73,	// (0x000560ae) blid2_tripm_values_pane_t8

0x7c81,	// (0x000560bc) blid2_tripm_values_pane_t9

0x0008,

0xfb46,	// (0x0005df81) blid2_tripm_values_pane_t

0x1ede,	// (0x00050319) call_video_pane_t1_ParamLimits

0x1ef8,	// (0x00050333) call_video_pane_t2_ParamLimits

0xf273,	// (0x0005d6ae) call_video_pane_t_ParamLimits

0xfe12,	// (0x0004e24d) msg_header_pane_g1_ParamLimits

0xb556,	// (0x00059991) msg_header_pane_g2_ParamLimits

0xb556,	// (0x00059991) msg_header_pane_g2

0x0001,

0xf494,	// (0x0005d8cf) msg_header_pane_g_ParamLimits

0xf494,	// (0x0005d8cf) msg_header_pane_g

0xa1c6,	// (0x00058601) main_clock2_pane_ParamLimits

0x5a6d,	// (0x00053ea8) grid_clock2_toolbar_pane_ParamLimits

0x5a6d,	// (0x00053ea8) grid_clock2_toolbar_pane

0x5a6d,	// (0x00053ea8) listscroll_clock2_pane_ParamLimits

0x5a6d,	// (0x00053ea8) listscroll_clock2_pane

0x5b64,	// (0x00053f9f) main_clock2_pane_t3_ParamLimits

0x5b64,	// (0x00053f9f) main_clock2_pane_t3

0x5b88,	// (0x00053fc3) main_clock2_pane_t4_ParamLimits

0x5b88,	// (0x00053fc3) main_clock2_pane_t4

0xdc5f,	// (0x0005c09a) cell_clock2_toolbar_pane

0xdc67,	// (0x0005c0a2) cell_clock2_toolbar_pane_cp01

0xdc67,	// (0x0005c0a2) cell_clock2_toolbar_pane_cp02

0xdc6f,	// (0x0005c0aa) cell_clock2_toolbar_pane_cp03

0xdc77,	// (0x0005c0b2) list_clock2_pane

0xb29a,	// (0x000596d5) scroll_pane_cp10

0xdc7f,	// (0x0005c0ba) list_single_clock2_pane_ParamLimits

0xdc7f,	// (0x0005c0ba) list_single_clock2_pane

0xb3d4,	// (0x0005980f) list_highlight_pane_cp08

0xdc8c,	// (0x0005c0c7) list_single_clock2_pane_t1

0xdc9a,	// (0x0005c0d5) list_single_clock2_pane_t2

0x0001,

0xfb59,	// (0x0005df94) list_single_clock2_pane_t

0x9a0a,	// (0x00057e45) bg_button_pane_cp10

0xdca8,	// (0x0005c0e3) cell_clock2_toolbar_pane_g1

0x3977,	// (0x00051db2) aid_main_viewer_pane_g1_ParamLimits

0x3977,	// (0x00051db2) aid_main_viewer_pane_g1

0x3985,	// (0x00051dc0) aid_main_viewer_pane_g2_ParamLimits

0x3985,	// (0x00051dc0) aid_main_viewer_pane_g2

0x3993,	// (0x00051dce) aid_main_viewer_pane_g3_ParamLimits

0x3993,	// (0x00051dce) aid_main_viewer_pane_g3

0x39a2,	// (0x00051ddd) aid_main_viewer_pane_g4_ParamLimits

0x39a2,	// (0x00051ddd) aid_main_viewer_pane_g4

0x0003,

0xf4a5,	// (0x0005d8e0) aid_main_viewer_pane_g_ParamLimits

0xf4a5,	// (0x0005d8e0) aid_main_viewer_pane_g

0x42f5,	// (0x00052730) main_calc_pane_ParamLimits

0x4309,	// (0x00052744) main_dialer2_pane_ParamLimits

0x9a0a,	// (0x00057e45) main_cam6_pane

0x9a0a,	// (0x00057e45) main_vid6_pane

0x5a79,	// (0x00053eb4) listscroll_gen_pane_cp06_ParamLimits

0x5a79,	// (0x00053eb4) listscroll_gen_pane_cp06

0x5bab,	// (0x00053fe6) main_clock2_pane_t5_ParamLimits

0x5bab,	// (0x00053fe6) main_clock2_pane_t5

0x5c0b,	// (0x00054046) aid_call2_pane_cp10_ParamLimits

0x5c1d,	// (0x00054058) aid_call_pane_cp10_ParamLimits

0xb309,	// (0x00059744) popup_clock_analogue_window_cp10_g1_ParamLimits

0xb309,	// (0x00059744) popup_clock_analogue_window_cp10_g2_ParamLimits

0x5c2f,	// (0x0005406a) popup_clock_analogue_window_cp10_g3_ParamLimits

0x5c2f,	// (0x0005406a) popup_clock_analogue_window_cp10_g4_ParamLimits

0xb309,	// (0x00059744) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf7db,	// (0x0005dc16) popup_clock_analogue_window_cp10_g_ParamLimits

0x5c45,	// (0x00054080) popup_clock_analogue_window_cp10_t1_ParamLimits

0x62d8,	// (0x00054713) cell_dialer2_keypad_pane_g2_ParamLimits

0x62d8,	// (0x00054713) cell_dialer2_keypad_pane_g2

0x0001,

0xf8c1,	// (0x0005dcfc) cell_dialer2_keypad_pane_g_ParamLimits

0xf8c1,	// (0x0005dcfc) cell_dialer2_keypad_pane_g

0x62f4,	// (0x0005472f) cell_dialer2_keypad_pane_t1

0x6eb8,	// (0x000552f3) main_cset_text2_pane_ParamLimits

0x6eb8,	// (0x000552f3) main_cset_text2_pane

0xdab3,	// (0x0005beee) area_vitu2_query_pane_g1_ParamLimits

0x0175,	// (0x0004e5b0) area_vitu2_query_pane_g2_ParamLimits

0xfa76,	// (0x0005deb1) area_vitu2_query_pane_g_ParamLimits

0x771a,	// (0x00055b55) area_vitu2_query_pane_t7_ParamLimits

0x771a,	// (0x00055b55) area_vitu2_query_pane_t7

0x773e,	// (0x00055b79) bg_button_pane_cp018_ParamLimits

0x774c,	// (0x00055b87) bg_button_pane_cp021_ParamLimits

0x01ae,	// (0x0004e5e9) bg_button_pane_cp022_ParamLimits

0x01ae,	// (0x0004e5e9) bg_vkb2_func_pane_cp08_ParamLimits

0x773e,	// (0x00055b79) bg_vkb2_func_pane_cp06_ParamLimits

0x774c,	// (0x00055b87) bg_vkb2_func_pane_cp07_ParamLimits

0x01bf,	// (0x0004e5fa) input_focus_pane_cp09_ParamLimits

0xaba9,	// (0x00058fe4) cam6_autofocus_pane_ParamLimits

0xaba9,	// (0x00058fe4) cam6_autofocus_pane

0x7c8f,	// (0x000560ca) cam6_image_uncrop_pane_ParamLimits

0x7c8f,	// (0x000560ca) cam6_image_uncrop_pane

0x7c9e,	// (0x000560d9) cam6_indi_pane_ParamLimits

0x7c9e,	// (0x000560d9) cam6_indi_pane

0x7cb4,	// (0x000560ef) cam6_mode_pane_ParamLimits

0x7cb4,	// (0x000560ef) cam6_mode_pane

0x7cc6,	// (0x00056101) cam6_timer_pane_ParamLimits

0x7cc6,	// (0x00056101) cam6_timer_pane

0x7cd2,	// (0x0005610d) cam6_zoom_pane_ParamLimits

0x7cd2,	// (0x0005610d) cam6_zoom_pane

0x7ce0,	// (0x0005611b) cam6_mode_pane_g1_ParamLimits

0x7ce0,	// (0x0005611b) cam6_mode_pane_g1

0x7cf0,	// (0x0005612b) cam6_mode_pane_g2_ParamLimits

0x7cf0,	// (0x0005612b) cam6_mode_pane_g2

0x7d00,	// (0x0005613b) cam6_mode_pane_g3_ParamLimits

0x7d00,	// (0x0005613b) cam6_mode_pane_g3

0x7d10,	// (0x0005614b) cam6_mode_pane_g4_ParamLimits

0x7d10,	// (0x0005614b) cam6_mode_pane_g4

0x0003,

0xfb5e,	// (0x0005df99) cam6_mode_pane_g_ParamLimits

0xfb5e,	// (0x0005df99) cam6_mode_pane_g

0xdcb0,	// (0x0005c0eb) bg_tb_trans_pane_cp08_ParamLimits

0xdcb0,	// (0x0005c0eb) bg_tb_trans_pane_cp08

0xdcbe,	// (0x0005c0f9) cam6_battery_pane_ParamLimits

0xdcbe,	// (0x0005c0f9) cam6_battery_pane

0xdcd4,	// (0x0005c10f) cam6_indi_pane_g1_ParamLimits

0xdcd4,	// (0x0005c10f) cam6_indi_pane_g1

0xdce6,	// (0x0005c121) cam6_indi_pane_g2_ParamLimits

0xdce6,	// (0x0005c121) cam6_indi_pane_g2

0xdcf8,	// (0x0005c133) cam6_indi_pane_g3_ParamLimits

0xdcf8,	// (0x0005c133) cam6_indi_pane_g3

0x0002,

0xfb67,	// (0x0005dfa2) cam6_indi_pane_g_ParamLimits

0xfb67,	// (0x0005dfa2) cam6_indi_pane_g

0xdd0a,	// (0x0005c145) cam6_indi_pane_t1_ParamLimits

0xdd0a,	// (0x0005c145) cam6_indi_pane_t1

0x68b5,	// (0x00054cf0) cam6_autofocus_pane_g1

0x68bd,	// (0x00054cf8) cam6_autofocus_pane_g2

0x68c5,	// (0x00054d00) cam6_autofocus_pane_g3

0x68cd,	// (0x00054d08) cam6_autofocus_pane_g4

0x0003,

0xfb6e,	// (0x0005dfa9) cam6_autofocus_pane_g

0xdd30,	// (0x0005c16b) cam6_timer_pane_g1

0xdd38,	// (0x0005c173) cam6_timer_pane_t1

0xdd46,	// (0x0005c181) cam6_zoom_cont_pane

0xdd4e,	// (0x0005c189) cam6_zoom_pane_g1

0xdd56,	// (0x0005c191) cam6_zoom_pane_g2

0x7d20,	// (0x0005615b) cam6_zoom_pane_g3

0x0002,

0xfb77,	// (0x0005dfb2) cam6_zoom_pane_g

0xcc53,	// (0x0005b08e) cam6_battery_pane_g1

0xcc53,	// (0x0005b08e) cam6_battery_pane_g2

0x0001,

0xf6e8,	// (0x0005db23) cam6_battery_pane_g

0xdd5e,	// (0x0005c199) cam6_zoom_cont_pane_g1

0xdd67,	// (0x0005c1a2) cam6_zoom_cont_pane_g2

0xdd70,	// (0x0005c1ab) cam6_zoom_cont_pane_g3

0x0002,

0xfb7e,	// (0x0005dfb9) cam6_zoom_cont_pane_g

0x7d3d,	// (0x00056178) cam6_mode_pane_cp_ParamLimits

0x7d3d,	// (0x00056178) cam6_mode_pane_cp

0x7cd2,	// (0x0005610d) cam6_zoom_pane_cp_ParamLimits

0x7cd2,	// (0x0005610d) cam6_zoom_pane_cp

0x7d4f,	// (0x0005618a) vid6_image_uncrop_cif_pane_ParamLimits

0x7d4f,	// (0x0005618a) vid6_image_uncrop_cif_pane

0x7d5f,	// (0x0005619a) vid6_image_uncrop_nhd_pane_ParamLimits

0x7d5f,	// (0x0005619a) vid6_image_uncrop_nhd_pane

0x7c8f,	// (0x000560ca) vid6_image_uncrop_vga_pane_ParamLimits

0x7c8f,	// (0x000560ca) vid6_image_uncrop_vga_pane

0x7d6e,	// (0x000561a9) vid6_image_uncrop_wvga_pane_ParamLimits

0x7d6e,	// (0x000561a9) vid6_image_uncrop_wvga_pane

0x7d7d,	// (0x000561b8) vid6_indi_pane_ParamLimits

0x7d7d,	// (0x000561b8) vid6_indi_pane

0xdcb0,	// (0x0005c0eb) bg_tb_trans_pane_cp09_ParamLimits

0xdcb0,	// (0x0005c0eb) bg_tb_trans_pane_cp09

0xdd88,	// (0x0005c1c3) cam6_battery_pane_cp_ParamLimits

0xdd88,	// (0x0005c1c3) cam6_battery_pane_cp

0xdd94,	// (0x0005c1cf) vid6_indi_pane_g1_ParamLimits

0xdd94,	// (0x0005c1cf) vid6_indi_pane_g1

0xdda6,	// (0x0005c1e1) vid6_indi_pane_g2_ParamLimits

0xdda6,	// (0x0005c1e1) vid6_indi_pane_g2

0xddb8,	// (0x0005c1f3) vid6_indi_pane_g3_ParamLimits

0xddb8,	// (0x0005c1f3) vid6_indi_pane_g3

0xddcf,	// (0x0005c20a) vid6_indi_pane_g4_ParamLimits

0xddcf,	// (0x0005c20a) vid6_indi_pane_g4

0xdde6,	// (0x0005c221) vid6_indi_pane_g5_ParamLimits

0xdde6,	// (0x0005c221) vid6_indi_pane_g5

0x0004,

0xfb85,	// (0x0005dfc0) vid6_indi_pane_g_ParamLimits

0xfb85,	// (0x0005dfc0) vid6_indi_pane_g

0xde00,	// (0x0005c23b) vid6_indi_pane_t1_ParamLimits

0xde00,	// (0x0005c23b) vid6_indi_pane_t1

0xde16,	// (0x0005c251) vid6_indi_pane_t2_ParamLimits

0xde16,	// (0x0005c251) vid6_indi_pane_t2

0xde3e,	// (0x0005c279) vid6_indi_pane_t3_ParamLimits

0xde3e,	// (0x0005c279) vid6_indi_pane_t3

0xde66,	// (0x0005c2a1) vid6_indi_pane_t4_ParamLimits

0xde66,	// (0x0005c2a1) vid6_indi_pane_t4

0x0003,

0xfb90,	// (0x0005dfcb) vid6_indi_pane_t_ParamLimits

0xfb90,	// (0x0005dfcb) vid6_indi_pane_t

0xde8a,	// (0x0005c2c5) wait_bar_pane_cp08

0x7d95,	// (0x000561d0) main_cset_text2_pane_t1_ParamLimits

0x7d95,	// (0x000561d0) main_cset_text2_pane_t1

0x7d28,	// (0x00056163) listscroll_gen_pane_cp06_t1_ParamLimits

0x7d28,	// (0x00056163) listscroll_gen_pane_cp06_t1

0x9a0a,	// (0x00057e45) main_cam6_set_pane

0xce83,	// (0x0005b2be) bg_tb_trans_pane_cp06_ParamLimits

0xaa0a,	// (0x00058e45) cam4_indicators_pane_g1_ParamLimits

0xaa1b,	// (0x00058e56) cam4_indicators_pane_g2_ParamLimits

0xf8fe,	// (0x0005dd39) cam4_indicators_pane_g_ParamLimits

0xaa33,	// (0x00058e6e) cam4_indicators_pane_t1_ParamLimits

0x9a63,	// (0x00057e9e) bg_tb_trans_pane_cp07_ParamLimits

0xaa61,	// (0x00058e9c) vid4_indicators_pane_g1_ParamLimits

0xaa77,	// (0x00058eb2) vid4_indicators_pane_g2_ParamLimits

0xaa8b,	// (0x00058ec6) vid4_indicators_pane_g3_ParamLimits

0xaa9e,	// (0x00058ed9) vid4_indicators_pane_g4_ParamLimits

0xf910,	// (0x0005dd4b) vid4_indicators_pane_g_ParamLimits

0xaabc,	// (0x00058ef7) vid4_indicators_pane_t1_ParamLimits

0x7888,	// (0x00055cc3) vid4_progress_pane_g1_ParamLimits

0x789a,	// (0x00055cd5) vid4_progress_pane_g2_ParamLimits

0xa68d,	// (0x00058ac8) vid4_progress_pane_g3_ParamLimits

0xab37,	// (0x00058f72) vid4_progress_pane_g4_ParamLimits

0xfac1,	// (0x0005defc) vid4_progress_pane_g_ParamLimits

0xab55,	// (0x00058f90) vid4_progress_pane_t1_ParamLimits

0xab6a,	// (0x00058fa5) vid4_progress_pane_t2_ParamLimits

0xab80,	// (0x00058fbb) vid4_progress_pane_t3_ParamLimits

0xfacc,	// (0x0005df07) vid4_progress_pane_t_ParamLimits

0xab95,	// (0x00058fd0) wait_bar_pane_cp07_ParamLimits

0x7db3,	// (0x000561ee) main_cam6_set_pane_g2_ParamLimits

0x7db3,	// (0x000561ee) main_cam6_set_pane_g2

0x7dd9,	// (0x00056214) main_cset6_listscroll_pane_ParamLimits

0x7dd9,	// (0x00056214) main_cset6_listscroll_pane

0x7df7,	// (0x00056232) main_cset6_slider_pane_ParamLimits

0x7df7,	// (0x00056232) main_cset6_slider_pane

0x7e0d,	// (0x00056248) main_cset6_text2_pane_ParamLimits

0x7e0d,	// (0x00056248) main_cset6_text2_pane

0xde99,	// (0x0005c2d4) main_cset6_text_pane

0xdea1,	// (0x0005c2dc) main_cset_list_pane_copy1_ParamLimits

0xdea1,	// (0x0005c2dc) main_cset_list_pane_copy1

0xdeb1,	// (0x0005c2ec) scroll_pane_cp028_copy1

0x2f79,	// (0x000513b4) cset_list_set_pane_copy1

0x7e1b,	// (0x00056256) aid_position_infowindow_above_copy1

0x7e23,	// (0x0005625e) aid_position_infowindow_below_copy1

0x01ed,	// (0x0004e628) cset_list_set_pane_g1_copy1

0x01f5,	// (0x0004e630) cset_list_set_pane_g3_copy1_ParamLimits

0x01f5,	// (0x0004e630) cset_list_set_pane_g3_copy1

0x0204,	// (0x0004e63f) cset_list_set_pane_t1_copy1_ParamLimits

0x0204,	// (0x0004e63f) cset_list_set_pane_t1_copy1

0x9a63,	// (0x00057e9e) list_highlight_pane_cp021_copy1_ParamLimits

0x9a63,	// (0x00057e9e) list_highlight_pane_cp021_copy1

0xdeba,	// (0x0005c2f5) cset6_slider_pane_ParamLimits

0xdeba,	// (0x0005c2f5) cset6_slider_pane

0xdee6,	// (0x0005c321) main_cset6_slider_pane_g1_ParamLimits

0xdee6,	// (0x0005c321) main_cset6_slider_pane_g1

0x7e2b,	// (0x00056266) main_cset6_slider_pane_g2_ParamLimits

0x7e2b,	// (0x00056266) main_cset6_slider_pane_g2

0xdf0e,	// (0x0005c349) main_cset6_slider_pane_g3_ParamLimits

0xdf0e,	// (0x0005c349) main_cset6_slider_pane_g3

0x7e53,	// (0x0005628e) main_cset6_slider_pane_g4_ParamLimits

0x7e53,	// (0x0005628e) main_cset6_slider_pane_g4

0x7e5f,	// (0x0005629a) main_cset6_slider_pane_g5_ParamLimits

0x7e5f,	// (0x0005629a) main_cset6_slider_pane_g5

0xd76e,	// (0x0005bba9) main_cset6_slider_pane_g7_ParamLimits

0xd76e,	// (0x0005bba9) main_cset6_slider_pane_g7

0xd77a,	// (0x0005bbb5) main_cset6_slider_pane_g8_ParamLimits

0xd77a,	// (0x0005bbb5) main_cset6_slider_pane_g8

0x6f67,	// (0x000553a2) main_cset6_slider_pane_g9_ParamLimits

0x6f67,	// (0x000553a2) main_cset6_slider_pane_g9

0x6f73,	// (0x000553ae) main_cset6_slider_pane_g10_ParamLimits

0x6f73,	// (0x000553ae) main_cset6_slider_pane_g10

0x6f7f,	// (0x000553ba) main_cset6_slider_pane_g11_ParamLimits

0x6f7f,	// (0x000553ba) main_cset6_slider_pane_g11

0x6f8b,	// (0x000553c6) main_cset6_slider_pane_g12_ParamLimits

0x6f8b,	// (0x000553c6) main_cset6_slider_pane_g12

0x6f97,	// (0x000553d2) main_cset6_slider_pane_g13_ParamLimits

0x6f97,	// (0x000553d2) main_cset6_slider_pane_g13

0x6fa3,	// (0x000553de) main_cset6_slider_pane_g14_ParamLimits

0x6fa3,	// (0x000553de) main_cset6_slider_pane_g14

0x7e6d,	// (0x000562a8) main_cset6_slider_pane_g15_ParamLimits

0x7e6d,	// (0x000562a8) main_cset6_slider_pane_g15

0x6fc7,	// (0x00055402) main_cset6_slider_pane_g16_ParamLimits

0x6fc7,	// (0x00055402) main_cset6_slider_pane_g16

0x6fd5,	// (0x00055410) main_cset6_slider_pane_g17_ParamLimits

0x6fd5,	// (0x00055410) main_cset6_slider_pane_g17

0x0011,

0xfb99,	// (0x0005dfd4) main_cset6_slider_pane_g_ParamLimits

0xfb99,	// (0x0005dfd4) main_cset6_slider_pane_g

0xdf1a,	// (0x0005c355) main_cset6_slider_pane_t1_ParamLimits

0xdf1a,	// (0x0005c355) main_cset6_slider_pane_t1

0x7e9d,	// (0x000562d8) main_cset6_slider_pane_t2_ParamLimits

0x7e9d,	// (0x000562d8) main_cset6_slider_pane_t2

0x7ec8,	// (0x00056303) main_cset6_slider_pane_t3_ParamLimits

0x7ec8,	// (0x00056303) main_cset6_slider_pane_t3

0x7ef3,	// (0x0005632e) main_cset6_slider_pane_t4_ParamLimits

0x7ef3,	// (0x0005632e) main_cset6_slider_pane_t4

0x7f1e,	// (0x00056359) main_cset6_slider_pane_t5_ParamLimits

0x7f1e,	// (0x00056359) main_cset6_slider_pane_t5

0xdf5b,	// (0x0005c396) main_cset6_slider_pane_t7_ParamLimits

0xdf5b,	// (0x0005c396) main_cset6_slider_pane_t7

0x7f4b,	// (0x00056386) main_cset6_slider_pane_t8_ParamLimits

0x7f4b,	// (0x00056386) main_cset6_slider_pane_t8

0x7f6f,	// (0x000563aa) main_cset6_slider_pane_t9_ParamLimits

0x7f6f,	// (0x000563aa) main_cset6_slider_pane_t9

0x7f93,	// (0x000563ce) main_cset6_slider_pane_t10_ParamLimits

0x7f93,	// (0x000563ce) main_cset6_slider_pane_t10

0x7fb7,	// (0x000563f2) main_cset6_slider_pane_t11_ParamLimits

0x7fb7,	// (0x000563f2) main_cset6_slider_pane_t11

0xdf91,	// (0x0005c3cc) main_cset6_slider_pane_t14_ParamLimits

0xdf91,	// (0x0005c3cc) main_cset6_slider_pane_t14

0xdfca,	// (0x0005c405) main_cset6_slider_pane_t15_ParamLimits

0xdfca,	// (0x0005c405) main_cset6_slider_pane_t15

0x000b,

0xfbbe,	// (0x0005dff9) main_cset6_slider_pane_t_ParamLimits

0xfbbe,	// (0x0005dff9) main_cset6_slider_pane_t

0xd832,	// (0x0005bc6d) cset_slider_pane_g1_copy1

0xd83b,	// (0x0005bc76) cset_slider_pane_g2_copy1

0xd844,	// (0x0005bc7f) cset_slider_pane_g3_copy1

0x9a0a,	// (0x00057e45) bg_popup_sub_pane_cp011_copy1

0xe003,	// (0x0005c43e) main_cset_text_pane_g1_copy1

0xd8cf,	// (0x0005bd0a) main_cset_text_pane_t1_copy1

0xd8dd,	// (0x0005bd18) main_cset_text_pane_t2_copy1

0xd8eb,	// (0x0005bd26) main_cset_text_pane_t3_copy1

0xd8f9,	// (0x0005bd34) main_cset_text_pane_t4_copy1

0xd907,	// (0x0005bd42) main_cset_text_pane_t5_copy1

0xe00b,	// (0x0005c446) main_cset_text_pane_t6_copy1

0xe019,	// (0x0005c454) main_cset_text_pane_t7_copy1

0x7d95,	// (0x000561d0) main_cset_text2_pane_t1_copy1

0x9a63,	// (0x00057e9e) main_ncimui_pane

0x4597,	// (0x000529d2) popup_query_ncimui_window_ParamLimits

0x4597,	// (0x000529d2) popup_query_ncimui_window

0x527f,	// (0x000536ba) field_cale_ev2_pane_g4_ParamLimits

0x527f,	// (0x000536ba) field_cale_ev2_pane_g4

0x61aa,	// (0x000545e5) cell_video_dialer_keypad_pane_g2_ParamLimits

0x61aa,	// (0x000545e5) cell_video_dialer_keypad_pane_g2

0x0001,

0xf89c,	// (0x0005dcd7) cell_video_dialer_keypad_pane_g_ParamLimits

0xf89c,	// (0x0005dcd7) cell_video_dialer_keypad_pane_g

0x61c2,	// (0x000545fd) cell_video_dialer_keypad_pane_t1

0x9a0a,	// (0x00057e45) bg_popup_window_pane_cp012

0xb186,	// (0x000595c1) heading_pane_cp06

0xe045,	// (0x0005c480) ncim_query_content_pane

0x9a0a,	// (0x00057e45) bg_popup_heading_pane_cp01

0xe04d,	// (0x0005c488) ncim_heading_pane_t1

0xe05b,	// (0x0005c496) ncim_indicator_popup_pane

0xe06d,	// (0x0005c4a8) ncim_query_button_pane

0xe083,	// (0x0005c4be) ncim_query_content_pane_t1

0xe095,	// (0x0005c4d0) ncim_query_content_pane_t2

0x0005,

0xfc02,	// (0x0005e03d) ncim_query_content_pane_t

0xe0cf,	// (0x0005c50a) ncim_query_list_pane

0xe0e1,	// (0x0005c51c) ncim_query_popup_pane

0xe05b,	// (0x0005c496) ncim_indicator_popup_pane_ParamLimits

0x812d,	// (0x00056568) ncim_query_content_pane_g1_ParamLimits

0x812d,	// (0x00056568) ncim_query_content_pane_g1

0xe083,	// (0x0005c4be) ncim_query_content_pane_t1_ParamLimits

0xe095,	// (0x0005c4d0) ncim_query_content_pane_t2_ParamLimits

0x8139,	// (0x00056574) ncim_query_content_pane_t3_ParamLimits

0x8139,	// (0x00056574) ncim_query_content_pane_t3

0x8161,	// (0x0005659c) ncim_query_content_pane_t4_ParamLimits

0x8161,	// (0x0005659c) ncim_query_content_pane_t4

0x8189,	// (0x000565c4) ncim_query_content_pane_t5_ParamLimits

0x8189,	// (0x000565c4) ncim_query_content_pane_t5

0xe0a7,	// (0x0005c4e2) ncim_query_content_pane_t6_ParamLimits

0xe0a7,	// (0x0005c4e2) ncim_query_content_pane_t6

0xfc02,	// (0x0005e03d) ncim_query_content_pane_t_ParamLimits

0xe0cf,	// (0x0005c50a) ncim_query_list_pane_ParamLimits

0xe0e1,	// (0x0005c51c) ncim_query_popup_pane_ParamLimits

0xe0f5,	// (0x0005c530) wait_bar_pane_cp04

0x9a0a,	// (0x00057e45) input_focus_pane_cp011

0xe0fd,	// (0x0005c538) ncim_query_popup_pane_t1

0xe10b,	// (0x0005c546) ncim_list_query_list_pane_ParamLimits

0xe10b,	// (0x0005c546) ncim_list_query_list_pane

0x9a0a,	// (0x00057e45) bg_button_pane_cp027

0xe11e,	// (0x0005c559) ncim_query_button_pane_g1

0x9a0a,	// (0x00057e45) list_highlight_pane_cp012

0xe128,	// (0x0005c563) ncim_list_query_list_pane_g1

0xe130,	// (0x0005c56b) ncim_list_query_list_pane_t1

0xaa27,	// (0x00058e62) cam4_indicators_pane_g3_ParamLimits

0xaa27,	// (0x00058e62) cam4_indicators_pane_g3

0xaaaa,	// (0x00058ee5) vid4_indicators_pane_g5_ParamLimits

0xaaaa,	// (0x00058ee5) vid4_indicators_pane_g5

0xab46,	// (0x00058f81) vid4_progress_pane_g5_ParamLimits

0xab46,	// (0x00058f81) vid4_progress_pane_g5

0x801b,	// (0x00056456) main_ncimui_pane_g1

0x8081,	// (0x000564bc) ncimui_group_query_pane_ParamLimits

0x8081,	// (0x000564bc) ncimui_group_query_pane

0x80c9,	// (0x00056504) ncimui_list_pane_ParamLimits

0x80c9,	// (0x00056504) ncimui_list_pane

0x80f0,	// (0x0005652b) ncimui_text_pane_ParamLimits

0x80f0,	// (0x0005652b) ncimui_text_pane

0x81b1,	// (0x000565ec) ncimui_text_pane_t1_ParamLimits

0x81b1,	// (0x000565ec) ncimui_text_pane_t1

0xe13e,	// (0x0005c579) ncimui_list_single_graphic_pane_ParamLimits

0xe13e,	// (0x0005c579) ncimui_list_single_graphic_pane

0x81cf,	// (0x0005660a) ncimui_query_pane_ParamLimits

0x81cf,	// (0x0005660a) ncimui_query_pane

0x9a0a,	// (0x00057e45) list_highlight_pane_cp013

0xe14e,	// (0x0005c589) ncim_list_query_list_pane_t1_copy1

0xe128,	// (0x0005c563) ncim_list_single_graphic_pane_g1

0xe15c,	// (0x0005c597) ncim_query_button_pane_cp01

0xe168,	// (0x0005c5a3) ncim_query_entry_pane_ParamLimits

0xe168,	// (0x0005c5a3) ncim_query_entry_pane

0xe17b,	// (0x0005c5b6) ncimui_query_pane_g1

0xe187,	// (0x0005c5c2) ncimui_query_pane_t1_ParamLimits

0xe187,	// (0x0005c5c2) ncimui_query_pane_t1

0x9a63,	// (0x00057e9e) input_focus_pane_cp012

0xe1a0,	// (0x0005c5db) ncim_query_entry_pane_t1

0xa1c6,	// (0x00058601) main_im_pane_ParamLimits

0x9a63,	// (0x00057e9e) main_mobtv_pane_ParamLimits

0x9a63,	// (0x00057e9e) main_mobtv_pane

0x7e85,	// (0x000562c0) main_cset6_slider_pane_g18_ParamLimits

0x7e85,	// (0x000562c0) main_cset6_slider_pane_g18

0x7e91,	// (0x000562cc) main_cset6_slider_pane_g19_ParamLimits

0x7e91,	// (0x000562cc) main_cset6_slider_pane_g19

0xabb7,	// (0x00058ff2) bg_main_mobtv_pane_ParamLimits

0xabb7,	// (0x00058ff2) bg_main_mobtv_pane

0x81e2,	// (0x0005661d) main_mobtv_info_pane

0x81ed,	// (0x00056628) main_mobtv_loading_pane_ParamLimits

0x81ed,	// (0x00056628) main_mobtv_loading_pane

0xe1b2,	// (0x0005c5ed) main_mobtv_pg_channel_list_pane

0xe1bc,	// (0x0005c5f7) main_mobtv_pg_hdr_pane

0x81fa,	// (0x00056635) main_mobtv_programe_curr_pane_ParamLimits

0x81fa,	// (0x00056635) main_mobtv_programe_curr_pane

0x8207,	// (0x00056642) main_mobtv_programe_next_pane_ParamLimits

0x8207,	// (0x00056642) main_mobtv_programe_next_pane

0xe1c5,	// (0x0005c600) popup_mobtv_noti_window

0xcc53,	// (0x0005b08e) main_tv_pg_hdr_pane_g1

0xe1cf,	// (0x0005c60a) main_tv_pg_hdr_pane_g2

0xe1d7,	// (0x0005c612) main_tv_pg_hdr_pane_g3

0xe1df,	// (0x0005c61a) main_tv_pg_hdr_pane_g4

0xe1e7,	// (0x0005c622) main_tv_pg_hdr_pane_g5

0xe1f1,	// (0x0005c62c) main_tv_pg_hdr_pane_g6

0xe1fb,	// (0x0005c636) main_tv_pg_hdr_pane_g7

0xe205,	// (0x0005c640) main_tv_pg_hdr_pane_g8

0xe20f,	// (0x0005c64a) main_tv_pg_hdr_pane_g9

0xe219,	// (0x0005c654) main_tv_pg_hdr_pane_g10

0xe223,	// (0x0005c65e) main_tv_pg_hdr_pane_g11

0x000a,

0xfc0f,	// (0x0005e04a) main_tv_pg_hdr_pane_g

0xe22d,	// (0x0005c668) main_tv_pg_hdr_pane_t1

0xe23b,	// (0x0005c676) main_tv_pg_hdr_pane_t2

0xe249,	// (0x0005c684) main_tv_pg_hdr_pane_t3

0xe259,	// (0x0005c694) main_tv_pg_hdr_pane_t4

0xe269,	// (0x0005c6a4) main_tv_pg_hdr_pane_t5

0x0004,

0xfc26,	// (0x0005e061) main_tv_pg_hdr_pane_t

0xe279,	// (0x0005c6b4) single_mobtv_pg_channel_pane_ParamLimits

0xe279,	// (0x0005c6b4) single_mobtv_pg_channel_pane

0xe28b,	// (0x0005c6c6) single_mobtv_pg_channel_table_pane

0xe294,	// (0x0005c6cf) single_mobtv_pg_channel_thumb_pane

0xe29d,	// (0x0005c6d8) single_tv_pg_channel_pane_g1

0xe2a6,	// (0x0005c6e1) single_tv_pg_channel_pane_g2

0x0001,

0xfc31,	// (0x0005e06c) single_tv_pg_channel_pane_g

0xce83,	// (0x0005b2be) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xce83,	// (0x0005b2be) bg_single_mobtv_pg_channel_thumb_pane

0xe2af,	// (0x0005c6ea) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xe2af,	// (0x0005c6ea) single_mobtv_pg_channel_thumb_pane_g1

0xe2bd,	// (0x0005c6f8) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xe2bd,	// (0x0005c6f8) single_mobtv_pg_channel_thumb_pane_g2

0xe2c9,	// (0x0005c704) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xe2c9,	// (0x0005c704) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfc36,	// (0x0005e071) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfc36,	// (0x0005e071) single_mobtv_pg_channel_thumb_pane_g

0xe2d5,	// (0x0005c710) single_mobtv_pg_channel_thumb_pane_t1

0xe31e,	// (0x0005c759) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc3d,	// (0x0005e078) single_mobtv_pg_channel_thumb_pane_t

0xcc53,	// (0x0005b08e) bg_single_mobtv_pg_channel_table_pane_g1

0xcc53,	// (0x0005b08e) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf6e8,	// (0x0005db23) bg_single_mobtv_pg_channel_table_pane_g

0xe32c,	// (0x0005c767) single_mobtv_pg_channel_table_pane_t1

0xe33a,	// (0x0005c775) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc42,	// (0x0005e07d) single_mobtv_pg_channel_table_pane_t

0x821c,	// (0x00056657) main_mobtv_info_pane_g1_ParamLimits

0x821c,	// (0x00056657) main_mobtv_info_pane_g1

0x823a,	// (0x00056675) main_mobtv_info_pane_t1_ParamLimits

0x823a,	// (0x00056675) main_mobtv_info_pane_t1

0x82b2,	// (0x000566ed) main_mobtv_info_pane_t2_ParamLimits

0x82b2,	// (0x000566ed) main_mobtv_info_pane_t2

0x0002,

0xfc4c,	// (0x0005e087) main_mobtv_info_pane_t_ParamLimits

0xfc4c,	// (0x0005e087) main_mobtv_info_pane_t

0x8341,	// (0x0005677c) wait_bar_pane_cp05

0x8353,	// (0x0005678e) main_mobtv_loading_pane_g1_ParamLimits

0x8353,	// (0x0005678e) main_mobtv_loading_pane_g1

0x8364,	// (0x0005679f) main_mobtv_loading_pane_g2_ParamLimits

0x8364,	// (0x0005679f) main_mobtv_loading_pane_g2

0x8370,	// (0x000567ab) main_mobtv_loading_pane_g3_ParamLimits

0x8370,	// (0x000567ab) main_mobtv_loading_pane_g3

0x0002,

0xfc53,	// (0x0005e08e) main_mobtv_loading_pane_g_ParamLimits

0xfc53,	// (0x0005e08e) main_mobtv_loading_pane_g

0xe348,	// (0x0005c783) main_mobtv_loading_pane_t1_ParamLimits

0xe348,	// (0x0005c783) main_mobtv_loading_pane_t1

0xe360,	// (0x0005c79b) main_mobtv_loading_pane_t2_ParamLimits

0xe360,	// (0x0005c79b) main_mobtv_loading_pane_t2

0x0001,

0xfc5a,	// (0x0005e095) main_mobtv_loading_pane_t_ParamLimits

0xfc5a,	// (0x0005e095) main_mobtv_loading_pane_t

0x8383,	// (0x000567be) wait_bar_pane_cp06_ParamLimits

0x8383,	// (0x000567be) wait_bar_pane_cp06

0xe384,	// (0x0005c7bf) main_mobtv_programe_curr_pane_t1

0xe392,	// (0x0005c7cd) main_mobtv_programe_curr_pane_t2

0x0001,

0xfc5f,	// (0x0005e09a) main_mobtv_programe_curr_pane_t

0xe3a0,	// (0x0005c7db) main_mobtv_programe_next_pane_t1

0xe3ae,	// (0x0005c7e9) main_mobtv_programe_next_pane_t2

0xe3bc,	// (0x0005c7f7) main_mobtv_programe_next_pane_t3

0x0002,

0xfc64,	// (0x0005e09f) main_mobtv_programe_next_pane_t

0x9a0a,	// (0x00057e45) bg_popup_mobtv_noti_window_pane

0xe3ca,	// (0x0005c805) popup_mobtv_noti_window_g1

0xe3d2,	// (0x0005c80d) popup_mobtv_noti_window_t1

0xe3e0,	// (0x0005c81b) popup_mobtv_noti_window_t2

0x0001,

0xfc6b,	// (0x0005e0a6) popup_mobtv_noti_window_t

0xcc53,	// (0x0005b08e) bg_popup_mobtv_noti_window_pane_g1

0x9a0a,	// (0x00057e45) sc_clock_pane

0x9a0a,	// (0x00057e45) main_fs_bigclock_pane

0x7b04,	// (0x00055f3f) blid2_tripm_pane_t4_ParamLimits

0x7b04,	// (0x00055f3f) blid2_tripm_pane_t4

0x8392,	// (0x000567cd) sc_clock_pane_g1_ParamLimits

0x8392,	// (0x000567cd) sc_clock_pane_g1

0x83a4,	// (0x000567df) sc_clock_pane_t1_ParamLimits

0x83a4,	// (0x000567df) sc_clock_pane_t1

0x83c8,	// (0x00056803) sc_clock_pane_t2_ParamLimits

0x83c8,	// (0x00056803) sc_clock_pane_t2

0x83e0,	// (0x0005681b) sc_clock_pane_t3_ParamLimits

0x83e0,	// (0x0005681b) sc_clock_pane_t3

0x0004,

0xfc70,	// (0x0005e0ab) sc_clock_pane_t_ParamLimits

0xfc70,	// (0x0005e0ab) sc_clock_pane_t

0x901d,	// (0x00057458) main_fs_bigclock_indicator_pane_ParamLimits

0x901d,	// (0x00057458) main_fs_bigclock_indicator_pane

0xce53,	// (0x0005b28e) main_fs_bigclock_pane_g1_ParamLimits

0xce53,	// (0x0005b28e) main_fs_bigclock_pane_g1

0x9029,	// (0x00057464) main_fs_bigclock_pane_t1_ParamLimits

0x9029,	// (0x00057464) main_fs_bigclock_pane_t1

0x903b,	// (0x00057476) main_fs_bigclock_pane_t2_ParamLimits

0x903b,	// (0x00057476) main_fs_bigclock_pane_t2

0x904f,	// (0x0005748a) main_fs_bigclock_pane_t3_ParamLimits

0x904f,	// (0x0005748a) main_fs_bigclock_pane_t3

0x0002,

0xfe7a,	// (0x0005e2b5) main_fs_bigclock_pane_t_ParamLimits

0xfe7a,	// (0x0005e2b5) main_fs_bigclock_pane_t

0xec0d,	// (0x0005d048) main_fs_bigclock_indicator_pane_g1

0xe075,	// (0x0005c4b0) ncim_query_content_pane_g2_ParamLimits

0xe075,	// (0x0005c4b0) ncim_query_content_pane_g2

0x0001,

0xfbfd,	// (0x0005e038) ncim_query_content_pane_g_ParamLimits

0xfbfd,	// (0x0005e038) ncim_query_content_pane_g

0x83f7,	// (0x00056832) sc_clock_pane_t4_ParamLimits

0x83f7,	// (0x00056832) sc_clock_pane_t4

0x9a63,	// (0x00057e9e) main_radioblah_pane

0xd586,	// (0x0005b9c1) cell_call4_button_pane_t1_copy1_ParamLimits

0xd586,	// (0x0005b9c1) cell_call4_button_pane_t1_copy1

0x8033,	// (0x0005646e) main_ncimui_pane_t1_ParamLimits

0x8033,	// (0x0005646e) main_ncimui_pane_t1

0x804d,	// (0x00056488) main_ncimui_pane_t2_ParamLimits

0x804d,	// (0x00056488) main_ncimui_pane_t2

0x0002,

0xfbf6,	// (0x0005e031) main_ncimui_pane_t_ParamLimits

0xfbf6,	// (0x0005e031) main_ncimui_pane_t

0xe52c,	// (0x0005c967) main_radioblah_anim_pane_ParamLimits

0xe52c,	// (0x0005c967) main_radioblah_anim_pane

0xe53d,	// (0x0005c978) main_radioblah_info_pane_ParamLimits

0xe53d,	// (0x0005c978) main_radioblah_info_pane

0xe551,	// (0x0005c98c) main_radioblah_pane_t1_ParamLimits

0xe551,	// (0x0005c98c) main_radioblah_pane_t1

0xe56d,	// (0x0005c9a8) main_radioblah_pane_t2_ParamLimits

0xe56d,	// (0x0005c9a8) main_radioblah_pane_t2

0x0003,

0xfc91,	// (0x0005e0cc) main_radioblah_pane_t_ParamLimits

0xfc91,	// (0x0005e0cc) main_radioblah_pane_t

0x84a7,	// (0x000568e2) main_radioblah_rocker_ctrl_pane_ParamLimits

0x84a7,	// (0x000568e2) main_radioblah_rocker_ctrl_pane

0xe5b5,	// (0x0005c9f0) main_radioblah_info_pane_t1_ParamLimits

0xe5b5,	// (0x0005c9f0) main_radioblah_info_pane_t1

0x84ff,	// (0x0005693a) main_radioblah_info_pane_t2_ParamLimits

0x84ff,	// (0x0005693a) main_radioblah_info_pane_t2

0x0003,

0xfc9a,	// (0x0005e0d5) main_radioblah_info_pane_t_ParamLimits

0xfc9a,	// (0x0005e0d5) main_radioblah_info_pane_t

0xcc53,	// (0x0005b08e) main_radioblah_rocker_ctrl_pane_g1

0x85af,	// (0x000569ea) main_radioblah_rocker_ctrl_pane_g2

0x85b7,	// (0x000569f2) main_radioblah_rocker_ctrl_pane_g3

0x85bf,	// (0x000569fa) main_radioblah_rocker_ctrl_pane_g4

0x85c7,	// (0x00056a02) main_radioblah_rocker_ctrl_pane_g5

0x85cf,	// (0x00056a0a) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfca3,	// (0x0005e0de) main_radioblah_rocker_ctrl_pane_g

0x7d95,	// (0x000561d0) main_cset_text2_pane_t1_copy1_ParamLimits

0xa9f8,	// (0x00058e33) cam4_image_uncrop_qvga_pane

0xaa4d,	// (0x00058e88) vid4_image_uncrop_qcif_pane

0xaba9,	// (0x00058fe4) cam6_image_uncrop_qvga_pane_ParamLimits

0xaba9,	// (0x00058fe4) cam6_image_uncrop_qvga_pane

0xdd78,	// (0x0005c1b3) vid6_image_uncrop_qcif_pane_ParamLimits

0xdd78,	// (0x0005c1b3) vid6_image_uncrop_qcif_pane

0x9a0a,	// (0x00057e45) bg_popup_preview_window_pane_cp03

0xe027,	// (0x0005c462) list_cset_text2_pane

0xe02f,	// (0x0005c46a) main_cset6_text2_pane_g1

0xe037,	// (0x0005c472) main_cset6_text2_pane_t1

0x85d7,	// (0x00056a12) list_cset_text2_pane_t1_ParamLimits

0x85d7,	// (0x00056a12) list_cset_text2_pane_t1

0x9a63,	// (0x00057e9e) main_radioblah_pane_ParamLimits

0x832d,	// (0x00056768) main_mobtv_info_pane_t3_ParamLimits

0x832d,	// (0x00056768) main_mobtv_info_pane_t3

0x8495,	// (0x000568d0) main_radioblah_pane_g1

0x84cf,	// (0x0005690a) main_radioblah_info_pane_g1

0x8554,	// (0x0005698f) main_radioblah_info_pane_t3_ParamLimits

0x8554,	// (0x0005698f) main_radioblah_info_pane_t3

0x2ec3,	// (0x000512fe) highlight_cell_cale_month_pane_ParamLimits

0x2ec3,	// (0x000512fe) highlight_cell_cale_month_pane

0x9a0a,	// (0x00057e45) main_phob_fisheye_pane

0xcf5f,	// (0x0005b39a) scroll_pane_cp0031_ParamLimits

0xcf5f,	// (0x0005b39a) scroll_pane_cp0031

0xde8a,	// (0x0005c2c5) wait_bar_pane_cp08_ParamLimits

0x2f79,	// (0x000513b4) cset_list_set_pane_copy1_ParamLimits

0xe5ef,	// (0x0005ca2a) highlight_cell_cale_month_pane_g1

0x85f0,	// (0x00056a2b) highlight_cell_cale_month_pane_t1

0xdb07,	// (0x0005bf42) list_gen_pane_cp01

0xd759,	// (0x0005bb94) scroll_pane_01

0x85fe,	// (0x00056a39) list_single_double_fisheye_pane

0x02be,	// (0x0004e6f9) list_double_fisheye_pane_g1_ParamLimits

0x02be,	// (0x0004e6f9) list_double_fisheye_pane_g1

0x02ca,	// (0x0004e705) list_double_fisheye_pane_g2_ParamLimits

0x02ca,	// (0x0004e705) list_double_fisheye_pane_g2

0x8607,	// (0x00056a42) list_double_fisheye_pane_g3_ParamLimits

0x8607,	// (0x00056a42) list_double_fisheye_pane_g3

0x0004,

0xfcb0,	// (0x0005e0eb) list_double_fisheye_pane_g_ParamLimits

0xfcb0,	// (0x0005e0eb) list_double_fisheye_pane_g

0x02fb,	// (0x0004e736) list_double_fisheye_pane_t1_ParamLimits

0x02fb,	// (0x0004e736) list_double_fisheye_pane_t1

0x0316,	// (0x0004e751) list_double_fisheye_pane_t2_ParamLimits

0x0316,	// (0x0004e751) list_double_fisheye_pane_t2

0x0001,

0xfcbb,	// (0x0005e0f6) list_double_fisheye_pane_t_ParamLimits

0xfcbb,	// (0x0005e0f6) list_double_fisheye_pane_t

0x9a0a,	// (0x00057e45) main_call5_pane

0x8422,	// (0x0005685d) sc_swipe_pane_ParamLimits

0x8422,	// (0x0005685d) sc_swipe_pane

0x8626,	// (0x00056a61) call5_image_pane_ParamLimits

0x8626,	// (0x00056a61) call5_image_pane

0x8643,	// (0x00056a7e) call5_swipe_1_pane_ParamLimits

0x8643,	// (0x00056a7e) call5_swipe_1_pane

0x8656,	// (0x00056a91) call5_swipe_2_pane_ParamLimits

0x8656,	// (0x00056a91) call5_swipe_2_pane

0x8683,	// (0x00056abe) popup_call5_audio_first_window_ParamLimits

0x8683,	// (0x00056abe) popup_call5_audio_first_window

0xce83,	// (0x0005b2be) call5_swipe_1_pane_g1_ParamLimits

0xce83,	// (0x0005b2be) call5_swipe_1_pane_g1

0xe5f7,	// (0x0005ca32) call5_swipe_1_pane_g2_ParamLimits

0xe5f7,	// (0x0005ca32) call5_swipe_1_pane_g2

0x0001,

0xfcc0,	// (0x0005e0fb) call5_swipe_1_pane_g_ParamLimits

0xfcc0,	// (0x0005e0fb) call5_swipe_1_pane_g

0xe603,	// (0x0005ca3e) call5_swipe_1_pane_t1_ParamLimits

0xe603,	// (0x0005ca3e) call5_swipe_1_pane_t1

0xce83,	// (0x0005b2be) call5_swipe_2_pane_g1_ParamLimits

0xce83,	// (0x0005b2be) call5_swipe_2_pane_g1

0xe618,	// (0x0005ca53) call5_swipe_2_pane_g2_ParamLimits

0xe618,	// (0x0005ca53) call5_swipe_2_pane_g2

0x0001,

0xfcc5,	// (0x0005e100) call5_swipe_2_pane_g_ParamLimits

0xfcc5,	// (0x0005e100) call5_swipe_2_pane_g

0xe624,	// (0x0005ca5f) call5_swipe_2_pane_t1_ParamLimits

0xe624,	// (0x0005ca5f) call5_swipe_2_pane_t1

0xe639,	// (0x0005ca74) sc_swipe_pane_g1_ParamLimits

0xe639,	// (0x0005ca74) sc_swipe_pane_g1

0xe646,	// (0x0005ca81) sc_swipe_pane_g2_ParamLimits

0xe646,	// (0x0005ca81) sc_swipe_pane_g2

0x0001,

0xfcca,	// (0x0005e105) sc_swipe_pane_g_ParamLimits

0xfcca,	// (0x0005e105) sc_swipe_pane_g

0xe652,	// (0x0005ca8d) sc_swipe_pane_t1_ParamLimits

0xe652,	// (0x0005ca8d) sc_swipe_pane_t1

0x9a0a,	// (0x00057e45) main_cmail_launcher_pane

0x8698,	// (0x00056ad3) aid_size_cell_cmail_l_ParamLimits

0x8698,	// (0x00056ad3) aid_size_cell_cmail_l

0x86b2,	// (0x00056aed) grid_cmail_l_pane_ParamLimits

0x86b2,	// (0x00056aed) grid_cmail_l_pane

0x86cd,	// (0x00056b08) cell_cmail_l_pane_ParamLimits

0x86cd,	// (0x00056b08) cell_cmail_l_pane

0x86f5,	// (0x00056b30) cell_cmail_l_pane_g1_ParamLimits

0x86f5,	// (0x00056b30) cell_cmail_l_pane_g1

0x8701,	// (0x00056b3c) cell_cmail_l_pane_t1_ParamLimits

0x8701,	// (0x00056b3c) cell_cmail_l_pane_t1

0xe667,	// (0x0005caa2) cell_cmail_l_pane_t2_ParamLimits

0xe667,	// (0x0005caa2) cell_cmail_l_pane_t2

0x0001,

0xfccf,	// (0x0005e10a) cell_cmail_l_pane_t_ParamLimits

0xfccf,	// (0x0005e10a) cell_cmail_l_pane_t

0x9a63,	// (0x00057e9e) grid_highlight_pane_cp018_ParamLimits

0x9a63,	// (0x00057e9e) grid_highlight_pane_cp018

0x0c33,	// (0x0004f06e) main2_pane_ParamLimits

0x0c33,	// (0x0004f06e) main2_pane

0xa29f,	// (0x000586da) popup_sp_fs_action_menu_bg_pane_g1

0xa2a7,	// (0x000586e2) popup_sp_fs_action_menu_bg_pane_g2

0xa2af,	// (0x000586ea) popup_sp_fs_action_menu_bg_pane_g3

0xa2b7,	// (0x000586f2) popup_sp_fs_action_menu_bg_pane_g4

0xa2bf,	// (0x000586fa) popup_sp_fs_action_menu_bg_pane_g5

0xa2c7,	// (0x00058702) popup_sp_fs_action_menu_bg_pane_g6

0xa2cf,	// (0x0005870a) popup_sp_fs_action_menu_bg_pane_g7

0xa2d7,	// (0x00058712) popup_sp_fs_action_menu_bg_pane_g8

0xa2df,	// (0x0005871a) popup_sp_fs_action_menu_bg_pane_g9

0xa2e7,	// (0x00058722) popup_sp_fs_action_menu_bg_pane_g10

0xa2e7,	// (0x00058722) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf18d,	// (0x0005d5c8) popup_sp_fs_action_menu_bg_pane_g

0x1e12,	// (0x0005024d) list_medium_line_x2_t3_g3_g1_ParamLimits

0x1e12,	// (0x0005024d) list_medium_line_x2_t3_g3_g1

0xfc1c,	// (0x0004e057) list_medium_line_x2_t3_g3_g2_ParamLimits

0xfc1c,	// (0x0004e057) list_medium_line_x2_t3_g3_g2

0x1e1e,	// (0x00050259) list_medium_line_x2_t3_g3_g3_ParamLimits

0x1e1e,	// (0x00050259) list_medium_line_x2_t3_g3_g3

0x0002,

0xf23d,	// (0x0005d678) list_medium_line_x2_t3_g3_g_ParamLimits

0xf23d,	// (0x0005d678) list_medium_line_x2_t3_g3_g

0xfc28,	// (0x0004e063) list_medium_line_x2_t3_g3_t1_ParamLimits

0xfc28,	// (0x0004e063) list_medium_line_x2_t3_g3_t1

0xfc3d,	// (0x0004e078) list_medium_line_x2_t3_g3_t2_ParamLimits

0xfc3d,	// (0x0004e078) list_medium_line_x2_t3_g3_t2

0xfc51,	// (0x0004e08c) list_medium_line_x2_t3_g3_t3_ParamLimits

0xfc51,	// (0x0004e08c) list_medium_line_x2_t3_g3_t3

0x0002,

0xf244,	// (0x0005d67f) list_medium_line_x2_t3_g3_t_ParamLimits

0xf244,	// (0x0005d67f) list_medium_line_x2_t3_g3_t

0x1e12,	// (0x0005024d) list_medium_line_x2_t3_g2_g1_ParamLimits

0x1e12,	// (0x0005024d) list_medium_line_x2_t3_g2_g1

0x1e1e,	// (0x00050259) list_medium_line_x2_t3_g2_g2_ParamLimits

0x1e1e,	// (0x00050259) list_medium_line_x2_t3_g2_g2

0x0001,

0xf24b,	// (0x0005d686) list_medium_line_x2_t3_g2_g_ParamLimits

0xf24b,	// (0x0005d686) list_medium_line_x2_t3_g2_g

0xfc66,	// (0x0004e0a1) list_medium_line_x2_t3_g2_t1_ParamLimits

0xfc66,	// (0x0004e0a1) list_medium_line_x2_t3_g2_t1

0xfc7c,	// (0x0004e0b7) list_medium_line_x2_t3_g2_t2_ParamLimits

0xfc7c,	// (0x0004e0b7) list_medium_line_x2_t3_g2_t2

0xfc8e,	// (0x0004e0c9) list_medium_line_x2_t3_g2_t3_ParamLimits

0xfc8e,	// (0x0004e0c9) list_medium_line_x2_t3_g2_t3

0x0002,

0xf250,	// (0x0005d68b) list_medium_line_x2_t3_g2_t_ParamLimits

0xf250,	// (0x0005d68b) list_medium_line_x2_t3_g2_t

0x1e12,	// (0x0005024d) list_medium_line_x2_t4_g4_g1_ParamLimits

0x1e12,	// (0x0005024d) list_medium_line_x2_t4_g4_g1

0xfcac,	// (0x0004e0e7) list_medium_line_x2_t4_g4_g2_ParamLimits

0xfcac,	// (0x0004e0e7) list_medium_line_x2_t4_g4_g2

0xf06f,	// (0x0005d4aa) list_medium_line_x2_t4_g4_g3_ParamLimits

0xf06f,	// (0x0005d4aa) list_medium_line_x2_t4_g4_g3

0x1e2a,	// (0x00050265) list_medium_line_x2_t4_g4_g4_ParamLimits

0x1e2a,	// (0x00050265) list_medium_line_x2_t4_g4_g4

0x0003,

0xf257,	// (0x0005d692) list_medium_line_x2_t4_g4_g_ParamLimits

0xf257,	// (0x0005d692) list_medium_line_x2_t4_g4_g

0xfcb8,	// (0x0004e0f3) list_medium_line_x2_t4_g4_t1_ParamLimits

0xfcb8,	// (0x0004e0f3) list_medium_line_x2_t4_g4_t1

0xfcd2,	// (0x0004e10d) list_medium_line_x2_t4_g4_t2_ParamLimits

0xfcd2,	// (0x0004e10d) list_medium_line_x2_t4_g4_t2

0xfce8,	// (0x0004e123) list_medium_line_x2_t4_g4_t3_ParamLimits

0xfce8,	// (0x0004e123) list_medium_line_x2_t4_g4_t3

0xfcfd,	// (0x0004e138) list_medium_line_x2_t4_g4_t4_ParamLimits

0xfcfd,	// (0x0004e138) list_medium_line_x2_t4_g4_t4

0x0003,

0xf260,	// (0x0005d69b) list_medium_line_x2_t4_g4_t_ParamLimits

0xf260,	// (0x0005d69b) list_medium_line_x2_t4_g4_t

0x1e12,	// (0x0005024d) list_medium_line_x2_t2_g4_g1_ParamLimits

0x1e12,	// (0x0005024d) list_medium_line_x2_t2_g4_g1

0xf07b,	// (0x0005d4b6) list_medium_line_x2_t2_g4_g2_ParamLimits

0xf07b,	// (0x0005d4b6) list_medium_line_x2_t2_g4_g2

0xf06f,	// (0x0005d4aa) list_medium_line_x2_t2_g4_g3_ParamLimits

0xf06f,	// (0x0005d4aa) list_medium_line_x2_t2_g4_g3

0x1e1e,	// (0x00050259) list_medium_line_x2_t2_g4_g4_ParamLimits

0x1e1e,	// (0x00050259) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2c7,	// (0x0005d702) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2c7,	// (0x0005d702) list_medium_line_x2_t2_g4_g

0xfd0f,	// (0x0004e14a) list_medium_line_x2_t2_g4_t1_ParamLimits

0xfd0f,	// (0x0004e14a) list_medium_line_x2_t2_g4_t1

0xf087,	// (0x0005d4c2) list_medium_line_x2_t2_g4_t2_ParamLimits

0xf087,	// (0x0005d4c2) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2d0,	// (0x0005d70b) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2d0,	// (0x0005d70b) list_medium_line_x2_t2_g4_t

0x1e12,	// (0x0005024d) list_medium_line_x2_t2_g3_g1_ParamLimits

0x1e12,	// (0x0005024d) list_medium_line_x2_t2_g3_g1

0xf06f,	// (0x0005d4aa) list_medium_line_x2_t2_g3_g2_ParamLimits

0xf06f,	// (0x0005d4aa) list_medium_line_x2_t2_g3_g2

0x1e1e,	// (0x00050259) list_medium_line_x2_t2_g3_g3_ParamLimits

0x1e1e,	// (0x00050259) list_medium_line_x2_t2_g3_g3

0x0002,

0xf2d5,	// (0x0005d710) list_medium_line_x2_t2_g3_g_ParamLimits

0xf2d5,	// (0x0005d710) list_medium_line_x2_t2_g3_g

0xfd24,	// (0x0004e15f) list_medium_line_x2_t2_g3_t1_ParamLimits

0xfd24,	// (0x0004e15f) list_medium_line_x2_t2_g3_t1

0xf087,	// (0x0005d4c2) list_medium_line_x2_t2_g3_t2_ParamLimits

0xf087,	// (0x0005d4c2) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2dc,	// (0x0005d717) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2dc,	// (0x0005d717) list_medium_line_x2_t2_g3_t

0x301e,	// (0x00051459) main_sp_fs_list_pane_ParamLimits

0x301e,	// (0x00051459) main_sp_fs_list_pane

0x302a,	// (0x00051465) sp_fs_scroll_pane_ParamLimits

0x302a,	// (0x00051465) sp_fs_scroll_pane

0xfd39,	// (0x0004e174) list_medium_line_x2_t3_t1

0xfd49,	// (0x0004e184) list_medium_line_x2_t3_t2

0xfd57,	// (0x0004e192) list_medium_line_x2_t3_t3

0x0002,

0xf327,	// (0x0005d762) list_medium_line_x2_t3_t

0xfd65,	// (0x0004e1a0) list_medium_line_x3_t4_t1

0xfd75,	// (0x0004e1b0) list_medium_line_x3_t4_t2

0xfd83,	// (0x0004e1be) list_medium_line_x3_t4_t3

0xf09c,	// (0x0005d4d7) list_medium_line_x3_t4_t4

0x0003,

0xf32e,	// (0x0005d769) list_medium_line_x3_t4_t

0xfd91,	// (0x0004e1cc) list_medium_line_x4_t5_t1

0xfda1,	// (0x0004e1dc) list_medium_line_x4_t5_t2

0xf0aa,	// (0x0005d4e5) list_medium_line_x4_t5_t3

0xfdaf,	// (0x0004e1ea) list_medium_line_x4_t5_t4

0xf09c,	// (0x0005d4d7) list_medium_line_x4_t5_t5

0x0004,

0xf337,	// (0x0005d772) list_medium_line_x4_t5_t

0x1e12,	// (0x0005024d) list_medium_line_t4_g4_g1_ParamLimits

0x1e12,	// (0x0005024d) list_medium_line_t4_g4_g1

0x1e2a,	// (0x00050265) list_medium_line_t4_g4_g2_ParamLimits

0x1e2a,	// (0x00050265) list_medium_line_t4_g4_g2

0xfdbd,	// (0x0004e1f8) list_medium_line_t4_g4_g3_ParamLimits

0xfdbd,	// (0x0004e1f8) list_medium_line_t4_g4_g3

0x1e1e,	// (0x00050259) list_medium_line_t4_g4_g4_ParamLimits

0x1e1e,	// (0x00050259) list_medium_line_t4_g4_g4

0x0003,

0xf342,	// (0x0005d77d) list_medium_line_t4_g4_g_ParamLimits

0xf342,	// (0x0005d77d) list_medium_line_t4_g4_g

0xfdc9,	// (0x0004e204) list_medium_line_t4_g4_t1_ParamLimits

0xfdc9,	// (0x0004e204) list_medium_line_t4_g4_t1

0xfdde,	// (0x0004e219) list_medium_line_t4_g4_t2_ParamLimits

0xfdde,	// (0x0004e219) list_medium_line_t4_g4_t2

0xfdf4,	// (0x0004e22f) list_medium_line_t4_g4_t3_ParamLimits

0xfdf4,	// (0x0004e22f) list_medium_line_t4_g4_t3

0xf087,	// (0x0005d4c2) list_medium_line_t4_g4_t4_ParamLimits

0xf087,	// (0x0005d4c2) list_medium_line_t4_g4_t4

0x0003,

0xf34b,	// (0x0005d786) list_medium_line_t4_g4_t_ParamLimits

0xf34b,	// (0x0005d786) list_medium_line_t4_g4_t

0x30fc,	// (0x00051537) chi_dic_find_pane_g1

0x431d,	// (0x00052758) main_tport_pane

0x0004,	// (0x0004e43f) list_medium_line_plain_t1

0x0012,	// (0x0004e44d) list_medium_line_t2_g2_g1_ParamLimits

0x0012,	// (0x0004e44d) list_medium_line_t2_g2_g1

0x001e,	// (0x0004e459) list_medium_line_t2_g2_g2_ParamLimits

0x001e,	// (0x0004e459) list_medium_line_t2_g2_g2

0x0001,

0xfa07,	// (0x0005de42) list_medium_line_t2_g2_g_ParamLimits

0xfa07,	// (0x0005de42) list_medium_line_t2_g2_g

0x002a,	// (0x0004e465) list_medium_line_t2_g2_t1_ParamLimits

0x002a,	// (0x0004e465) list_medium_line_t2_g2_t1

0x0041,	// (0x0004e47c) list_medium_line_t2_g2_t2_ParamLimits

0x0041,	// (0x0004e47c) list_medium_line_t2_g2_t2

0x0001,

0xfa0c,	// (0x0005de47) list_medium_line_t2_g2_t_ParamLimits

0xfa0c,	// (0x0005de47) list_medium_line_t2_g2_t

0x78ac,	// (0x00055ce7) aid_sp_fs_list_icon_a_sm

0x78b4,	// (0x00055cef) aid_sp_fs_list_icon_d

0x78bc,	// (0x00055cf7) aid_sp_fs_text_primary

0x78c5,	// (0x00055d00) aid_sp_fs_text_secondary

0x01d0,	// (0x0004e60b) list_medium_line

0x01d0,	// (0x0004e60b) list_medium_line_g2

0x01d0,	// (0x0004e60b) list_medium_line_g3

0x01d0,	// (0x0004e60b) list_medium_line_plain

0x01d0,	// (0x0004e60b) list_medium_line_plain_t2

0x01d0,	// (0x0004e60b) list_medium_line_plain_t3

0x01d0,	// (0x0004e60b) list_medium_line_right_icon

0x01d0,	// (0x0004e60b) list_medium_line_right_iconx2

0x01d0,	// (0x0004e60b) list_medium_line_t2

0x01d0,	// (0x0004e60b) list_medium_line_t2_g2

0x01d0,	// (0x0004e60b) list_medium_line_t2_g3

0x01d0,	// (0x0004e60b) list_medium_line_t2_right_icon

0x01d0,	// (0x0004e60b) list_medium_line_t2_right_iconx2

0x01d0,	// (0x0004e60b) list_medium_line_t3

0x01d0,	// (0x0004e60b) list_medium_line_t3_g2

0x01d0,	// (0x0004e60b) list_medium_line_t3_g3

0x01d0,	// (0x0004e60b) list_medium_line_t3_right_iconx2

0x78ce,	// (0x00055d09) list_medium_line_t4_g4

0x78d7,	// (0x00055d12) list_medium_line_x2

0x78d7,	// (0x00055d12) list_medium_line_x2_t2_g2

0x78d7,	// (0x00055d12) list_medium_line_x2_t2_g3

0x78d7,	// (0x00055d12) list_medium_line_x2_t2_g4

0x78d7,	// (0x00055d12) list_medium_line_x2_t3

0x78d7,	// (0x00055d12) list_medium_line_x2_t3_g2

0x78d7,	// (0x00055d12) list_medium_line_x2_t3_g3

0x78d7,	// (0x00055d12) list_medium_line_x2_t3_g4

0x78d7,	// (0x00055d12) list_medium_line_x2_t4_g2

0x78d7,	// (0x00055d12) list_medium_line_x2_t4_g4

0x78e0,	// (0x00055d1b) list_medium_line_x3

0x78e0,	// (0x00055d1b) list_medium_line_x3_t4

0x78e0,	// (0x00055d1b) list_medium_line_x3_t4_g4

0x78ce,	// (0x00055d09) list_medium_line_x4_t4

0x78ce,	// (0x00055d09) list_medium_line_x4_t4_g7

0x78ce,	// (0x00055d09) list_medium_line_x4_t5

0x01d9,	// (0x0004e614) list_single_fs_dyc_pane_ParamLimits

0x01d9,	// (0x0004e614) list_single_fs_dyc_pane

0x1e12,	// (0x0005024d) list_medium_line_x4_t4_g7_g1_ParamLimits

0x1e12,	// (0x0005024d) list_medium_line_x4_t4_g7_g1

0x7fdd,	// (0x00056418) list_medium_line_x4_t4_g7_g2_ParamLimits

0x7fdd,	// (0x00056418) list_medium_line_x4_t4_g7_g2

0x0219,	// (0x0004e654) list_medium_line_x4_t4_g7_g3_ParamLimits

0x0219,	// (0x0004e654) list_medium_line_x4_t4_g7_g3

0x0228,	// (0x0004e663) list_medium_line_x4_t4_g7_g4_ParamLimits

0x0228,	// (0x0004e663) list_medium_line_x4_t4_g7_g4

0x0234,	// (0x0004e66f) list_medium_line_x4_t4_g7_g5_ParamLimits

0x0234,	// (0x0004e66f) list_medium_line_x4_t4_g7_g5

0x0243,	// (0x0004e67e) list_medium_line_x4_t4_g7_g6_ParamLimits

0x0243,	// (0x0004e67e) list_medium_line_x4_t4_g7_g6

0x7fe9,	// (0x00056424) list_medium_line_x4_t4_g7_g7_ParamLimits

0x7fe9,	// (0x00056424) list_medium_line_x4_t4_g7_g7

0x0006,

0xfbd7,	// (0x0005e012) list_medium_line_x4_t4_g7_g_ParamLimits

0xfbd7,	// (0x0005e012) list_medium_line_x4_t4_g7_g

0x0252,	// (0x0004e68d) list_medium_line_x4_t4_g7_t1_ParamLimits

0x0252,	// (0x0004e68d) list_medium_line_x4_t4_g7_t1

0x0267,	// (0x0004e6a2) list_medium_line_x4_t4_g7_t2_ParamLimits

0x0267,	// (0x0004e6a2) list_medium_line_x4_t4_g7_t2

0x027c,	// (0x0004e6b7) list_medium_line_x4_t4_g7_t3_ParamLimits

0x027c,	// (0x0004e6b7) list_medium_line_x4_t4_g7_t3

0x0291,	// (0x0004e6cc) list_medium_line_x4_t4_g7_t4_ParamLimits

0x0291,	// (0x0004e6cc) list_medium_line_x4_t4_g7_t4

0x7ff5,	// (0x00056430) list_medium_line_x4_t4_g7_t5_ParamLimits

0x7ff5,	// (0x00056430) list_medium_line_x4_t4_g7_t5

0x0004,

0xfbe6,	// (0x0005e021) list_medium_line_x4_t4_g7_t_ParamLimits

0xfbe6,	// (0x0005e021) list_medium_line_x4_t4_g7_t

0x02a3,	// (0x0004e6de) list_single_dyc_row_pane_ParamLimits

0x02a3,	// (0x0004e6de) list_single_dyc_row_pane

0x8613,	// (0x00056a4e) call5_gesture_pane_ParamLimits

0x8613,	// (0x00056a4e) call5_gesture_pane

0x8669,	// (0x00056aa4) call5_windows_pane_ParamLimits

0x8669,	// (0x00056aa4) call5_windows_pane

0x8717,	// (0x00056b52) call5_swipe_1_pane_cp_ParamLimits

0x8717,	// (0x00056b52) call5_swipe_1_pane_cp

0x8723,	// (0x00056b5e) call5_swipe_2_pane_cp_ParamLimits

0x8723,	// (0x00056b5e) call5_swipe_2_pane_cp

0xb3d4,	// (0x0005980f) call5_image_pane_cp

0x872f,	// (0x00056b6a) popup_call5_audio_first_window_cp_ParamLimits

0x872f,	// (0x00056b6a) popup_call5_audio_first_window_cp

0xe639,	// (0x0005ca74) call5_swipe_1_pane_g1_cp_ParamLimits

0xe639,	// (0x0005ca74) call5_swipe_1_pane_g1_cp

0xe679,	// (0x0005cab4) call5_swipe_1_pane_g2_cp

0xe652,	// (0x0005ca8d) call5_swipe_1_pane_t1_cp_ParamLimits

0xe652,	// (0x0005ca8d) call5_swipe_1_pane_t1_cp

0xe639,	// (0x0005ca74) call5_swipe_2_pane_g1_cp_ParamLimits

0xe639,	// (0x0005ca74) call5_swipe_2_pane_g1_cp

0xe681,	// (0x0005cabc) call5_swipe_2_pane_g2_cp

0xe689,	// (0x0005cac4) call5_swipe_2_pane_t1_cp_ParamLimits

0xe689,	// (0x0005cac4) call5_swipe_2_pane_t1_cp

0x9a63,	// (0x00057e9e) main_sp_fs_email_pane

0xe69e,	// (0x0005cad9) main_sp_fs_listscroll_pane_te

0x873d,	// (0x00056b78) popup_sp_fs_action_menu_pane_ParamLimits

0x873d,	// (0x00056b78) popup_sp_fs_action_menu_pane

0xcc53,	// (0x0005b08e) bg_sp_fs_ctrlbar_pane_g1

0xd1e0,	// (0x0005b61b) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xd1f2,	// (0x0005b62d) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xd1e9,	// (0x0005b624) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xcc53,	// (0x0005b08e) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfcd4,	// (0x0005e10f) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xca32,	// (0x0005ae6d) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xca32,	// (0x0005ae6d) bg_sp_fs_ctrlbar_ddmenu_pane

0xe6a7,	// (0x0005cae2) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xe6a7,	// (0x0005cae2) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xe6b3,	// (0x0005caee) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xe6b3,	// (0x0005caee) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfcdd,	// (0x0005e118) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfcdd,	// (0x0005e118) main_sp_fs_ctrlbar_ddmenu_pane_g

0xe6bf,	// (0x0005cafa) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xe6bf,	// (0x0005cafa) main_sp_fs_ctrlbar_ddmenu_pane_t1

0x0338,	// (0x0004e773) list_medium_line_t2_right_icon_g1

0x0340,	// (0x0004e77b) list_medium_line_t2_right_icon_t1

0x0350,	// (0x0004e78b) list_medium_line_t2_right_icon_t2

0x0001,

0xfce2,	// (0x0005e11d) list_medium_line_t2_right_icon_t

0xc802,	// (0x0005ac3d) bg_sp_fs_ctrlbar_pane_ParamLimits

0xc802,	// (0x0005ac3d) bg_sp_fs_ctrlbar_pane

0x87d0,	// (0x00056c0b) main_sp_fs_ctrlbar_button_pane_cp01

0x87da,	// (0x00056c15) main_sp_fs_ctrlbar_ddmenu_pane

0xe2e3,	// (0x0005c71e) main_sp_fs_ctrlbar_pane_g1

0xe711,	// (0x0005cb4c) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfce7,	// (0x0005e122) main_sp_fs_ctrlbar_pane_g

0xe71d,	// (0x0005cb58) main_sp_fs_ctrlbar_pane_t1

0x0362,	// (0x0004e79d) main_sp_fs_ctrlbar_pane

0x0386,	// (0x0004e7c1) main_sp_fs_listscroll_pane_te_cp01

0x03a6,	// (0x0004e7e1) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x03a6,	// (0x0004e7e1) popup_sp_fs_action_menu_pane_cp01

0x9a63,	// (0x00057e9e) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0x9a63,	// (0x00057e9e) bg_sp_fs_highlight_list_pane_cp01

0x87e4,	// (0x00056c1f) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0x87e4,	// (0x00056c1f) sp_fs_action_menu_list_gene_pane_g1

0xe74d,	// (0x0005cb88) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xe74d,	// (0x0005cb88) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfcf1,	// (0x0005e12c) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfcf1,	// (0x0005e12c) sp_fs_action_menu_list_gene_pane_g

0x87f3,	// (0x00056c2e) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0x87f3,	// (0x00056c2e) sp_fs_action_menu_list_gene_pane_t1

0x880b,	// (0x00056c46) sp_fs_action_menu_list_gene_pane_ParamLimits

0x880b,	// (0x00056c46) sp_fs_action_menu_list_gene_pane

0xe75a,	// (0x0005cb95) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xe75a,	// (0x0005cb95) popup_sp_fs_action_menu_bg_pane

0x882e,	// (0x00056c69) sp_fs_action_menu_list_pane_ParamLimits

0x882e,	// (0x00056c69) sp_fs_action_menu_list_pane

0xe768,	// (0x0005cba3) sp_fs_scroll_pane_cp01_ParamLimits

0xe768,	// (0x0005cba3) sp_fs_scroll_pane_cp01

0x03d6,	// (0x0004e811) list_medium_line_plain_t2_t1

0x03e6,	// (0x0004e821) list_medium_line_plain_t2_t2

0x0001,

0xfcf6,	// (0x0005e131) list_medium_line_plain_t2_t

0x03f6,	// (0x0004e831) list_medium_line_plain_t3_t1

0x0406,	// (0x0004e841) list_medium_line_plain_t3_t2

0x0414,	// (0x0004e84f) list_medium_line_plain_t3_t3

0x0002,

0xfcfb,	// (0x0005e136) list_medium_line_plain_t3_t

0x1e12,	// (0x0005024d) list_medium_line_x2_t2_g2_g1_ParamLimits

0x1e12,	// (0x0005024d) list_medium_line_x2_t2_g2_g1

0x1e1e,	// (0x00050259) list_medium_line_x2_t2_g2_g2_ParamLimits

0x1e1e,	// (0x00050259) list_medium_line_x2_t2_g2_g2

0x0001,

0xf24b,	// (0x0005d686) list_medium_line_x2_t2_g2_g_ParamLimits

0xf24b,	// (0x0005d686) list_medium_line_x2_t2_g2_g

0xf0b8,	// (0x0005d4f3) list_medium_line_x2_t2_g2_t1_ParamLimits

0xf0b8,	// (0x0005d4f3) list_medium_line_x2_t2_g2_t1

0xf087,	// (0x0005d4c2) list_medium_line_x2_t2_g2_t2_ParamLimits

0xf087,	// (0x0005d4c2) list_medium_line_x2_t2_g2_t2

0x0001,

0xfd02,	// (0x0005e13d) list_medium_line_x2_t2_g2_t_ParamLimits

0xfd02,	// (0x0005e13d) list_medium_line_x2_t2_g2_t

0x1e12,	// (0x0005024d) list_medium_line_x2_t4_g2_g1_ParamLimits

0x1e12,	// (0x0005024d) list_medium_line_x2_t4_g2_g1

0x8852,	// (0x00056c8d) list_medium_line_x2_t4_g2_g2_ParamLimits

0x8852,	// (0x00056c8d) list_medium_line_x2_t4_g2_g2

0x0001,

0xfd07,	// (0x0005e142) list_medium_line_x2_t4_g2_g_ParamLimits

0xfd07,	// (0x0005e142) list_medium_line_x2_t4_g2_g

0x0422,	// (0x0004e85d) list_medium_line_x2_t4_g2_t1_ParamLimits

0x0422,	// (0x0004e85d) list_medium_line_x2_t4_g2_t1

0x043c,	// (0x0004e877) list_medium_line_x2_t4_g2_t2_ParamLimits

0x043c,	// (0x0004e877) list_medium_line_x2_t4_g2_t2

0x0452,	// (0x0004e88d) list_medium_line_x2_t4_g2_t3_ParamLimits

0x0452,	// (0x0004e88d) list_medium_line_x2_t4_g2_t3

0xf087,	// (0x0005d4c2) list_medium_line_x2_t4_g2_t4_ParamLimits

0xf087,	// (0x0005d4c2) list_medium_line_x2_t4_g2_t4

0x0003,

0xfd0c,	// (0x0005e147) list_medium_line_x2_t4_g2_t_ParamLimits

0xfd0c,	// (0x0005e147) list_medium_line_x2_t4_g2_t

0x0467,	// (0x0004e8a2) list_medium_line_t3_right_iconx2_g1

0x0338,	// (0x0004e773) list_medium_line_t3_right_iconx2_g2

0x046f,	// (0x0004e8aa) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfd15,	// (0x0005e150) list_medium_line_t3_right_iconx2_g

0x0479,	// (0x0004e8b4) list_medium_line_t3_right_iconx2_t1

0x0489,	// (0x0004e8c4) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfd1c,	// (0x0005e157) list_medium_line_t3_right_iconx2_t

0x1e12,	// (0x0005024d) list_medium_line_x3_t4_g4_g1_ParamLimits

0x1e12,	// (0x0005024d) list_medium_line_x3_t4_g4_g1

0xf06f,	// (0x0005d4aa) list_medium_line_x3_t4_g4_g2_ParamLimits

0xf06f,	// (0x0005d4aa) list_medium_line_x3_t4_g4_g2

0x1e2a,	// (0x00050265) list_medium_line_x3_t4_g4_g3_ParamLimits

0x1e2a,	// (0x00050265) list_medium_line_x3_t4_g4_g3

0x0497,	// (0x0004e8d2) list_medium_line_x3_t4_g4_g4_ParamLimits

0x0497,	// (0x0004e8d2) list_medium_line_x3_t4_g4_g4

0x0003,

0xfd21,	// (0x0005e15c) list_medium_line_x3_t4_g4_g_ParamLimits

0xfd21,	// (0x0005e15c) list_medium_line_x3_t4_g4_g

0x04a3,	// (0x0004e8de) list_medium_line_x3_t4_g4_t1_ParamLimits

0x04a3,	// (0x0004e8de) list_medium_line_x3_t4_g4_t1

0x04ba,	// (0x0004e8f5) list_medium_line_x3_t4_g4_t2_ParamLimits

0x04ba,	// (0x0004e8f5) list_medium_line_x3_t4_g4_t2

0x04d5,	// (0x0004e910) list_medium_line_x3_t4_g4_t3_ParamLimits

0x04d5,	// (0x0004e910) list_medium_line_x3_t4_g4_t3

0x04ea,	// (0x0004e925) list_medium_line_x3_t4_g4_t4_ParamLimits

0x04ea,	// (0x0004e925) list_medium_line_x3_t4_g4_t4

0x0003,

0xfd2a,	// (0x0005e165) list_medium_line_x3_t4_g4_t_ParamLimits

0xfd2a,	// (0x0005e165) list_medium_line_x3_t4_g4_t

0x0507,	// (0x0004e942) list_single_dyc_row_text_pane_t1_ParamLimits

0x0507,	// (0x0004e942) list_single_dyc_row_text_pane_t1

0x0550,	// (0x0004e98b) list_single_dyc_row_text_pane_t2_ParamLimits

0x0550,	// (0x0004e98b) list_single_dyc_row_text_pane_t2

0x8864,	// (0x00056c9f) list_single_dyc_row_text_pane_t3_ParamLimits

0x8864,	// (0x00056c9f) list_single_dyc_row_text_pane_t3

0x0005,

0xfd33,	// (0x0005e16e) list_single_dyc_row_text_pane_t_ParamLimits

0xfd33,	// (0x0005e16e) list_single_dyc_row_text_pane_t

0x8888,	// (0x00056cc3) list_single_dyc_row_pane_g1_ParamLimits

0x8888,	// (0x00056cc3) list_single_dyc_row_pane_g1

0x8894,	// (0x00056ccf) list_single_dyc_row_pane_g2_ParamLimits

0x8894,	// (0x00056ccf) list_single_dyc_row_pane_g2

0x88a0,	// (0x00056cdb) list_single_dyc_row_pane_g3_ParamLimits

0x88a0,	// (0x00056cdb) list_single_dyc_row_pane_g3

0x88ac,	// (0x00056ce7) list_single_dyc_row_pane_g4_ParamLimits

0x88ac,	// (0x00056ce7) list_single_dyc_row_pane_g4

0x0003,

0xfd40,	// (0x0005e17b) list_single_dyc_row_pane_g_ParamLimits

0xfd40,	// (0x0005e17b) list_single_dyc_row_pane_g

0x88b8,	// (0x00056cf3) list_single_dyc_row_text_pane_ParamLimits

0x88b8,	// (0x00056cf3) list_single_dyc_row_text_pane

0x9a0a,	// (0x00057e45) bg_sp_fs_scroll_pane

0xe78e,	// (0x0005cbc9) thumb_sp_fs_scroll_pane

0x0012,	// (0x0004e44d) list_medium_line_g1_ParamLimits

0x0012,	// (0x0004e44d) list_medium_line_g1

0x0685,	// (0x0004eac0) list_medium_line_t1_ParamLimits

0x0685,	// (0x0004eac0) list_medium_line_t1

0x1e12,	// (0x0005024d) list_medium_line_x2_g1_ParamLimits

0x1e12,	// (0x0005024d) list_medium_line_x2_g1

0xf06f,	// (0x0005d4aa) list_medium_line_x2_g2_ParamLimits

0xf06f,	// (0x0005d4aa) list_medium_line_x2_g2

0x0001,

0xfd49,	// (0x0005e184) list_medium_line_x2_g_ParamLimits

0xfd49,	// (0x0005e184) list_medium_line_x2_g

0x88d7,	// (0x00056d12) list_medium_line_x2_t1_ParamLimits

0x88d7,	// (0x00056d12) list_medium_line_x2_t1

0x1e12,	// (0x0005024d) list_medium_line_x3_g1_ParamLimits

0x1e12,	// (0x0005024d) list_medium_line_x3_g1

0xf06f,	// (0x0005d4aa) list_medium_line_x3_g2_ParamLimits

0xf06f,	// (0x0005d4aa) list_medium_line_x3_g2

0x0001,

0xfd49,	// (0x0005e184) list_medium_line_x3_g_ParamLimits

0xfd49,	// (0x0005e184) list_medium_line_x3_g

0x88d7,	// (0x00056d12) list_medium_line_x3_t1_ParamLimits

0x88d7,	// (0x00056d12) list_medium_line_x3_t1

0xe797,	// (0x0005cbd2) thumb_sp_fs_scroll_pane_g1

0xe7a0,	// (0x0005cbdb) thumb_sp_fs_scroll_pane_g2

0xe7a9,	// (0x0005cbe4) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfd4e,	// (0x0005e189) thumb_sp_fs_scroll_pane_g

0xe797,	// (0x0005cbd2) bg_sp_fs_scroll_pane_g1

0xe7a0,	// (0x0005cbdb) bg_sp_fs_scroll_pane_g2

0xe7a9,	// (0x0005cbe4) bg_sp_fs_scroll_pane_g3

0x0002,

0xfd4e,	// (0x0005e189) bg_sp_fs_scroll_pane_g

0x1e12,	// (0x0005024d) list_medium_line_x2_t3_g4_g1_ParamLimits

0x1e12,	// (0x0005024d) list_medium_line_x2_t3_g4_g1

0xf07b,	// (0x0005d4b6) list_medium_line_x2_t3_g4_g2_ParamLimits

0xf07b,	// (0x0005d4b6) list_medium_line_x2_t3_g4_g2

0xf06f,	// (0x0005d4aa) list_medium_line_x2_t3_g4_g3_ParamLimits

0xf06f,	// (0x0005d4aa) list_medium_line_x2_t3_g4_g3

0x1e1e,	// (0x00050259) list_medium_line_x2_t3_g4_g4_ParamLimits

0x1e1e,	// (0x00050259) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2c7,	// (0x0005d702) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2c7,	// (0x0005d702) list_medium_line_x2_t3_g4_g

0x069a,	// (0x0004ead5) list_medium_line_x2_t3_g4_t1_ParamLimits

0x069a,	// (0x0004ead5) list_medium_line_x2_t3_g4_t1

0x06b0,	// (0x0004eaeb) list_medium_line_x2_t3_g4_t2_ParamLimits

0x06b0,	// (0x0004eaeb) list_medium_line_x2_t3_g4_t2

0xf087,	// (0x0005d4c2) list_medium_line_x2_t3_g4_t3_ParamLimits

0xf087,	// (0x0005d4c2) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd55,	// (0x0005e190) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd55,	// (0x0005e190) list_medium_line_x2_t3_g4_t

0x0012,	// (0x0004e44d) list_medium_line_g2_g1_ParamLimits

0x0012,	// (0x0004e44d) list_medium_line_g2_g1

0x001e,	// (0x0004e459) list_medium_line_g2_g2_ParamLimits

0x001e,	// (0x0004e459) list_medium_line_g2_g2

0x0001,

0xfa07,	// (0x0005de42) list_medium_line_g2_g_ParamLimits

0xfa07,	// (0x0005de42) list_medium_line_g2_g

0x06c9,	// (0x0004eb04) list_medium_line_g2_t1_ParamLimits

0x06c9,	// (0x0004eb04) list_medium_line_g2_t1

0x0012,	// (0x0004e44d) list_medium_line_t3_g2_g1_ParamLimits

0x0012,	// (0x0004e44d) list_medium_line_t3_g2_g1

0x001e,	// (0x0004e459) list_medium_line_t3_g2_g2_ParamLimits

0x001e,	// (0x0004e459) list_medium_line_t3_g2_g2

0x0001,

0xfa07,	// (0x0005de42) list_medium_line_t3_g2_g_ParamLimits

0xfa07,	// (0x0005de42) list_medium_line_t3_g2_g

0x06de,	// (0x0004eb19) list_medium_line_t3_g2_t1_ParamLimits

0x06de,	// (0x0004eb19) list_medium_line_t3_g2_t1

0x06f8,	// (0x0004eb33) list_medium_line_t3_g2_t2_ParamLimits

0x06f8,	// (0x0004eb33) list_medium_line_t3_g2_t2

0x070e,	// (0x0004eb49) list_medium_line_t3_g2_t3_ParamLimits

0x070e,	// (0x0004eb49) list_medium_line_t3_g2_t3

0x0002,

0xfd5c,	// (0x0005e197) list_medium_line_t3_g2_t_ParamLimits

0xfd5c,	// (0x0005e197) list_medium_line_t3_g2_t

0x0338,	// (0x0004e773) list_medium_line_right_icon_g1

0x0725,	// (0x0004eb60) list_medium_line_right_icon_t1

0x0012,	// (0x0004e44d) list_medium_line_t2_g1_ParamLimits

0x0012,	// (0x0004e44d) list_medium_line_t2_g1

0x0733,	// (0x0004eb6e) list_medium_line_t2_t1_ParamLimits

0x0733,	// (0x0004eb6e) list_medium_line_t2_t1

0x074d,	// (0x0004eb88) list_medium_line_t2_t2_ParamLimits

0x074d,	// (0x0004eb88) list_medium_line_t2_t2

0x0001,

0xfd63,	// (0x0005e19e) list_medium_line_t2_t_ParamLimits

0xfd63,	// (0x0005e19e) list_medium_line_t2_t

0x0012,	// (0x0004e44d) list_medium_line_t3_g1_ParamLimits

0x0012,	// (0x0004e44d) list_medium_line_t3_g1

0x0766,	// (0x0004eba1) list_medium_line_t3_t1_ParamLimits

0x0766,	// (0x0004eba1) list_medium_line_t3_t1

0x0780,	// (0x0004ebbb) list_medium_line_t3_t2_ParamLimits

0x0780,	// (0x0004ebbb) list_medium_line_t3_t2

0x0796,	// (0x0004ebd1) list_medium_line_t3_t3_ParamLimits

0x0796,	// (0x0004ebd1) list_medium_line_t3_t3

0x0002,

0xfd68,	// (0x0005e1a3) list_medium_line_t3_t_ParamLimits

0xfd68,	// (0x0005e1a3) list_medium_line_t3_t

0x0012,	// (0x0004e44d) list_medium_line_g3_g1_ParamLimits

0x0012,	// (0x0004e44d) list_medium_line_g3_g1

0x07ab,	// (0x0004ebe6) list_medium_line_g3_g2_ParamLimits

0x07ab,	// (0x0004ebe6) list_medium_line_g3_g2

0x001e,	// (0x0004e459) list_medium_line_g3_g3_ParamLimits

0x001e,	// (0x0004e459) list_medium_line_g3_g3

0x0002,

0xfd6f,	// (0x0005e1aa) list_medium_line_g3_g_ParamLimits

0xfd6f,	// (0x0005e1aa) list_medium_line_g3_g

0x07b7,	// (0x0004ebf2) list_medium_line_g3_t1_ParamLimits

0x07b7,	// (0x0004ebf2) list_medium_line_g3_t1

0x0012,	// (0x0004e44d) list_medium_line_t2_g3_g1_ParamLimits

0x0012,	// (0x0004e44d) list_medium_line_t2_g3_g1

0x07ab,	// (0x0004ebe6) list_medium_line_t2_g3_g2_ParamLimits

0x07ab,	// (0x0004ebe6) list_medium_line_t2_g3_g2

0x001e,	// (0x0004e459) list_medium_line_t2_g3_g3_ParamLimits

0x001e,	// (0x0004e459) list_medium_line_t2_g3_g3

0x0002,

0xfd6f,	// (0x0005e1aa) list_medium_line_t2_g3_g_ParamLimits

0xfd6f,	// (0x0005e1aa) list_medium_line_t2_g3_g

0x07cc,	// (0x0004ec07) list_medium_line_t2_g3_t1_ParamLimits

0x07cc,	// (0x0004ec07) list_medium_line_t2_g3_t1

0x07e3,	// (0x0004ec1e) list_medium_line_t2_g3_t2_ParamLimits

0x07e3,	// (0x0004ec1e) list_medium_line_t2_g3_t2

0x0001,

0xfd76,	// (0x0005e1b1) list_medium_line_t2_g3_t_ParamLimits

0xfd76,	// (0x0005e1b1) list_medium_line_t2_g3_t

0x0012,	// (0x0004e44d) list_medium_line_t3_g3_g1_ParamLimits

0x0012,	// (0x0004e44d) list_medium_line_t3_g3_g1

0x07ab,	// (0x0004ebe6) list_medium_line_t3_g3_g2_ParamLimits

0x07ab,	// (0x0004ebe6) list_medium_line_t3_g3_g2

0x001e,	// (0x0004e459) list_medium_line_t3_g3_g3_ParamLimits

0x001e,	// (0x0004e459) list_medium_line_t3_g3_g3

0x0002,

0xfd6f,	// (0x0005e1aa) list_medium_line_t3_g3_g_ParamLimits

0xfd6f,	// (0x0005e1aa) list_medium_line_t3_g3_g

0x07fc,	// (0x0004ec37) list_medium_line_t3_g3_t1_ParamLimits

0x07fc,	// (0x0004ec37) list_medium_line_t3_g3_t1

0x0815,	// (0x0004ec50) list_medium_line_t3_g3_t2_ParamLimits

0x0815,	// (0x0004ec50) list_medium_line_t3_g3_t2

0x082b,	// (0x0004ec66) list_medium_line_t3_g3_t3_ParamLimits

0x082b,	// (0x0004ec66) list_medium_line_t3_g3_t3

0x0002,

0xfd7b,	// (0x0005e1b6) list_medium_line_t3_g3_t_ParamLimits

0xfd7b,	// (0x0005e1b6) list_medium_line_t3_g3_t

0x0467,	// (0x0004e8a2) list_medium_line_right_iconx2_g1

0x0338,	// (0x0004e773) list_medium_line_right_iconx2_g2

0x0001,

0xfd82,	// (0x0005e1bd) list_medium_line_right_iconx2_g

0x0845,	// (0x0004ec80) list_medium_line_right_iconx2_t1

0x0467,	// (0x0004e8a2) list_medium_line_t2_right_iconx2_g1

0x0338,	// (0x0004e773) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfd82,	// (0x0005e1bd) list_medium_line_t2_right_iconx2_g

0x0853,	// (0x0004ec8e) list_medium_line_t2_right_iconx2_t1

0x0863,	// (0x0004ec9e) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfd87,	// (0x0005e1c2) list_medium_line_t2_right_iconx2_t

0x0875,	// (0x0004ecb0) list_medium_line_x4_t4_t1

0x0883,	// (0x0004ecbe) list_medium_line_x4_t4_t2

0x0893,	// (0x0004ecce) list_medium_line_x4_t4_t3

0x08a3,	// (0x0004ecde) list_medium_line_x4_t4_t4

0x0003,

0xfd8c,	// (0x0005e1c7) list_medium_line_x4_t4_t

0x8930,	// (0x00056d6b) tport_appsw_pane_ParamLimits

0x8930,	// (0x00056d6b) tport_appsw_pane

0x8948,	// (0x00056d83) tport_contact_pane_ParamLimits

0x8948,	// (0x00056d83) tport_contact_pane

0x8960,	// (0x00056d9b) tport_listscroll_pane_ParamLimits

0x8960,	// (0x00056d9b) tport_listscroll_pane

0x897a,	// (0x00056db5) cell_tport_appsw_pane_ParamLimits

0x897a,	// (0x00056db5) cell_tport_appsw_pane

0xd61b,	// (0x0005ba56) tport_appsw_pane_g1_ParamLimits

0xd61b,	// (0x0005ba56) tport_appsw_pane_g1

0xe7b2,	// (0x0005cbed) tport_contact_pane_g1

0xe7bb,	// (0x0005cbf6) tport_contact_pane_t1

0xe7c9,	// (0x0005cc04) tport_contact_pane_t2

0x0001,

0xfd95,	// (0x0005e1d0) tport_contact_pane_t

0xe7d7,	// (0x0005cc12) list_tport_pane

0xe7e0,	// (0x0005cc1b) scroll_pane_cp_030

0x89cc,	// (0x00056e07) cell_tport_appsw_pane_g1

0x89dc,	// (0x00056e17) cell_tport_appsw_pane_t1

0x89ea,	// (0x00056e25) grid_highlight_pane_cp019

0x89f2,	// (0x00056e2d) list_tport_double_graphic_pane_ParamLimits

0x89f2,	// (0x00056e2d) list_tport_double_graphic_pane

0x9a63,	// (0x00057e9e) list_highlight_pane_cp023_ParamLimits

0x9a63,	// (0x00057e9e) list_highlight_pane_cp023

0x89ff,	// (0x00056e3a) list_tport_double_graphic_pane_g1_ParamLimits

0x89ff,	// (0x00056e3a) list_tport_double_graphic_pane_g1

0x8a0c,	// (0x00056e47) list_tport_double_graphic_pane_t1_ParamLimits

0x8a0c,	// (0x00056e47) list_tport_double_graphic_pane_t1

0x8a21,	// (0x00056e5c) list_tport_double_graphic_pane_t2_ParamLimits

0x8a21,	// (0x00056e5c) list_tport_double_graphic_pane_t2

0x0001,

0xfda1,	// (0x0005e1dc) list_tport_double_graphic_pane_t_ParamLimits

0xfda1,	// (0x0005e1dc) list_tport_double_graphic_pane_t

0x9a0a,	// (0x00057e45) main_cale_note_pane

0x6ac0,	// (0x00054efb) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x6ac0,	// (0x00054efb) cell_vitu2_function_top_wide_pane_cp01

0x8341,	// (0x0005677c) wait_bar_pane_cp05_ParamLimits

0x9a63,	// (0x00057e9e) listscroll_cmail_pane

0xe7f1,	// (0x0005cc2c) list_cmail_pane

0x8a3d,	// (0x00056e78) list_cmail_body_pane

0xe2ef,	// (0x0005c72a) list_single_cmail_header_caption_pane

0x8a50,	// (0x00056e8b) list_single_cmail_header_detail_pane_ParamLimits

0x8a50,	// (0x00056e8b) list_single_cmail_header_detail_pane

0x8a7b,	// (0x00056eb6) list_single_cmail_header_caption_pane_t1

0x08b3,	// (0x0004ecee) list_single_cmail_header_detail_pane_g1_ParamLimits

0x08b3,	// (0x0004ecee) list_single_cmail_header_detail_pane_g1

0x8a96,	// (0x00056ed1) list_single_cmail_header_detail_pane_g2_ParamLimits

0x8a96,	// (0x00056ed1) list_single_cmail_header_detail_pane_g2

0x0002,

0xfda6,	// (0x0005e1e1) list_single_cmail_header_detail_pane_g_ParamLimits

0xfda6,	// (0x0005e1e1) list_single_cmail_header_detail_pane_g

0x08cb,	// (0x0004ed06) list_single_cmail_header_detail_pane_t1_ParamLimits

0x08cb,	// (0x0004ed06) list_single_cmail_header_detail_pane_t1

0x0915,	// (0x0004ed50) list_single_cmail_header_editor_pane_bg_ParamLimits

0x0915,	// (0x0004ed50) list_single_cmail_header_editor_pane_bg

0xe2a6,	// (0x0005c6e1) list_cmail_body_pane_g1

0xe815,	// (0x0005cc50) list_cmail_body_pane_t1

0xd63b,	// (0x0005ba76) list_single_cmail_header_editor_pane_bg_g1

0xacfb,	// (0x00059136) list_single_cmail_header_editor_pane_bg_g1_copy1

0xd64b,	// (0x0005ba86) list_single_cmail_header_editor_pane_bg_g1_copy2

0xd643,	// (0x0005ba7e) list_single_cmail_header_editor_pane_bg_g1_copy3

0xd880,	// (0x0005bcbb) list_single_cmail_header_editor_pane_bg_g1_copy4

0xd66b,	// (0x0005baa6) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xd65b,	// (0x0005ba96) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xd663,	// (0x0005ba9e) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xacdb,	// (0x00059116) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0x8ac6,	// (0x00056f01) calenote_gesture_pane_ParamLimits

0x8ac6,	// (0x00056f01) calenote_gesture_pane

0x8ae6,	// (0x00056f21) calenote_window_pane_ParamLimits

0x8ae6,	// (0x00056f21) calenote_window_pane

0xe823,	// (0x0005cc5e) popup_note_window_cp01

0x8b02,	// (0x00056f3d) calenote_swipe_1_pane_ParamLimits

0x8b02,	// (0x00056f3d) calenote_swipe_1_pane

0x8723,	// (0x00056b5e) calenote_swipe_2_pane_ParamLimits

0x8723,	// (0x00056b5e) calenote_swipe_2_pane

0xe639,	// (0x0005ca74) calenote_swipe_1_pane_g1_ParamLimits

0xe639,	// (0x0005ca74) calenote_swipe_1_pane_g1

0xe646,	// (0x0005ca81) calenote_swipe_1_pane_g2_ParamLimits

0xe646,	// (0x0005ca81) calenote_swipe_1_pane_g2

0x0001,

0xfcca,	// (0x0005e105) calenote_swipe_1_pane_g_ParamLimits

0xfcca,	// (0x0005e105) calenote_swipe_1_pane_g

0xe835,	// (0x0005cc70) calenote_swipe_1_pane_t1_ParamLimits

0xe835,	// (0x0005cc70) calenote_swipe_1_pane_t1

0xe639,	// (0x0005ca74) calenote_swipe_2_pane_g1_ParamLimits

0xe639,	// (0x0005ca74) calenote_swipe_2_pane_g1

0xe854,	// (0x0005cc8f) calenote_swipe_2_pane_g2_ParamLimits

0xe854,	// (0x0005cc8f) calenote_swipe_2_pane_g2

0x0001,

0xfdb2,	// (0x0005e1ed) calenote_swipe_2_pane_g_ParamLimits

0xfdb2,	// (0x0005e1ed) calenote_swipe_2_pane_g

0xe860,	// (0x0005cc9b) calenote_swipe_2_pane_t1_ParamLimits

0xe860,	// (0x0005cc9b) calenote_swipe_2_pane_t1

0x9a0a,	// (0x00057e45) main_mup_navstr_pane

0x5714,	// (0x00053b4f) main_mup3_pane_t7_ParamLimits

0x5714,	// (0x00053b4f) main_mup3_pane_t7

0xa816,	// (0x00058c51) main_mp4_pane_g6_ParamLimits

0xa816,	// (0x00058c51) main_mp4_pane_g6

0xa9ba,	// (0x00058df5) main_image3_pane_t4_ParamLimits

0xa9ba,	// (0x00058df5) main_image3_pane_t4

0x8b17,	// (0x00056f52) popup_navstr_preview_pane_ParamLimits

0x8b17,	// (0x00056f52) popup_navstr_preview_pane

0x8b27,	// (0x00056f62) scroll_navstr_pane_ParamLimits

0x8b27,	// (0x00056f62) scroll_navstr_pane

0x9a0a,	// (0x00057e45) bg_popup_preview_window_pane_cp04

0xe887,	// (0x0005ccc2) popup_navstr_preview_pane_t1

0x8b3b,	// (0x00056f76) scroll_navstr_pane_g1_ParamLimits

0x8b3b,	// (0x00056f76) scroll_navstr_pane_g1

0x8b4f,	// (0x00056f8a) scroll_navstr_pane_t1_ParamLimits

0x8b4f,	// (0x00056f8a) scroll_navstr_pane_t1

0xe82c,	// (0x0005cc67) bg_button_pane_cp014

0xe82c,	// (0x0005cc67) bg_button_pane_cp030

0x02de,	// (0x0004e719) list_double_fisheye_pane_g4_ParamLimits

0x02de,	// (0x0004e719) list_double_fisheye_pane_g4

0x02ea,	// (0x0004e725) list_double_fisheye_pane_g5_ParamLimits

0x02ea,	// (0x0004e725) list_double_fisheye_pane_g5

0xe7f9,	// (0x0005cc34) sp_fs_scroll_pane_cp03

0xe2e3,	// (0x0005c71e) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xe711,	// (0x0005cb4c) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfce7,	// (0x0005e122) main_sp_fs_ctrlbar_pane_g_ParamLimits

0xe71d,	// (0x0005cb58) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0x8a33,	// (0x00056e6e) sp_fs_scroll_pane_cp02

0xa352,	// (0x0005878d) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0xa352,	// (0x0005878d) popup_sp_fs_calendar_preview_list_single_pane

0x9a0a,	// (0x00057e45) main_cam6_pano_pane

0x9a63,	// (0x00057e9e) main_mup3_pane_ParamLimits

0x9a0a,	// (0x00057e45) main_phacti_pane

0x8214,	// (0x0005664f) bg_button_pane_cp11

0x822e,	// (0x00056669) main_mobtv_info_pane_g2_ParamLimits

0x822e,	// (0x00056669) main_mobtv_info_pane_g2

0x0001,

0xfc47,	// (0x0005e082) main_mobtv_info_pane_g_ParamLimits

0xfc47,	// (0x0005e082) main_mobtv_info_pane_g

0x8409,	// (0x00056844) sc_clock_pane_t5_ParamLimits

0x8409,	// (0x00056844) sc_clock_pane_t5

0x8495,	// (0x000568d0) main_radioblah_pane_g1_ParamLimits

0xe585,	// (0x0005c9c0) main_radioblah_pane_t3_ParamLimits

0xe585,	// (0x0005c9c0) main_radioblah_pane_t3

0xe59d,	// (0x0005c9d8) main_radioblah_pane_t4_ParamLimits

0xe59d,	// (0x0005c9d8) main_radioblah_pane_t4

0x84bd,	// (0x000568f8) main_radioblah_text_pane_ParamLimits

0x84bd,	// (0x000568f8) main_radioblah_text_pane

0x84cf,	// (0x0005690a) main_radioblah_info_pane_g1_ParamLimits

0x8568,	// (0x000569a3) main_radioblah_info_pane_t4_ParamLimits

0x8568,	// (0x000569a3) main_radioblah_info_pane_t4

0x9a63,	// (0x00057e9e) main_sp_fs_calendar_pane

0x8b66,	// (0x00056fa1) main_phacti_pane_g1

0x8b6e,	// (0x00056fa9) phacti_note_pane_ParamLimits

0x8b6e,	// (0x00056fa9) phacti_note_pane

0xe89e,	// (0x0005ccd9) phacti_term_pane_ParamLimits

0xe89e,	// (0x0005ccd9) phacti_term_pane

0xe8b3,	// (0x0005ccee) phacti_note_pane_t1_ParamLimits

0xe8b3,	// (0x0005ccee) phacti_note_pane_t1

0x8b82,	// (0x00056fbd) phacti_term_pane_g1

0x8b8a,	// (0x00056fc5) phacti_term_pane_t1_ParamLimits

0x8b8a,	// (0x00056fc5) phacti_term_pane_t1

0xe8ca,	// (0x0005cd05) popup_sp_fs_calendar_preview_list_single_pane_g1

0xe8d2,	// (0x0005cd0d) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfdbc,	// (0x0005e1f7) popup_sp_fs_calendar_preview_list_single_pane_g

0xe8da,	// (0x0005cd15) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xe8da,	// (0x0005cd15) popup_sp_fs_calendar_preview_list_single_pane_t1

0xe8f0,	// (0x0005cd2b) aid_popup_sp_fs_bg_corner_pane

0xcc53,	// (0x0005b08e) popup_sp_fs_calendar_preview_bg_pane_g1

0x9a0a,	// (0x00057e45) popup_sp_fs_calendar_preview_bg_pane

0xe8f8,	// (0x0005cd33) popup_sp_fs_calendar_preview_list_pane

0xc802,	// (0x0005ac3d) bg_main_sp_fs_cale_pane_ParamLimits

0xc802,	// (0x0005ac3d) bg_main_sp_fs_cale_pane

0x8c1a,	// (0x00057055) listscroll_cale_mrui_pane_ParamLimits

0x8c1a,	// (0x00057055) listscroll_cale_mrui_pane

0x8c2f,	// (0x0005706a) listscroll_sp_fs_schedule_track_pane

0x8c38,	// (0x00057073) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0x8c38,	// (0x00057073) main_sp_fs_ctrlbar_pane_cp01

0xe900,	// (0x0005cd3b) main_sp_fs_ribbon_pane

0x8c4b,	// (0x00057086) popup_sp_fs_cale_preview_window

0x8c5d,	// (0x00057098) list_single_sp_fs_schedule_track_pane_ParamLimits

0x8c5d,	// (0x00057098) list_single_sp_fs_schedule_track_pane

0x9a63,	// (0x00057e9e) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0x9a63,	// (0x00057e9e) bg_sp_fs_highlight_list_pane_cp03

0x8c71,	// (0x000570ac) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0x8c71,	// (0x000570ac) list_single_sp_fs_schedule_track_pane_g1

0x8c7d,	// (0x000570b8) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0x8c7d,	// (0x000570b8) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfdc1,	// (0x0005e1fc) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfdc1,	// (0x0005e1fc) list_single_sp_fs_schedule_track_pane_g

0x8c89,	// (0x000570c4) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0x8c89,	// (0x000570c4) list_single_sp_fs_schedule_track_pane_t1

0x8cab,	// (0x000570e6) sp_fs_schedule_track_pane_ParamLimits

0x8cab,	// (0x000570e6) sp_fs_schedule_track_pane

0xe908,	// (0x0005cd43) sp_fs_schedule_track_pane_g1

0xe910,	// (0x0005cd4b) sp_fs_schedule_track_pane_g2

0xe918,	// (0x0005cd53) sp_fs_schedule_track_pane_g3

0xe920,	// (0x0005cd5b) sp_fs_schedule_track_pane_g4

0xe928,	// (0x0005cd63) sp_fs_schedule_track_pane_g5

0x0004,

0xfdc6,	// (0x0005e201) sp_fs_schedule_track_pane_g

0xd63b,	// (0x0005ba76) bg_sp_fs_schedule_viewer_highlight_g1

0xacfb,	// (0x00059136) bg_sp_fs_schedule_viewer_highlight_g2

0xd643,	// (0x0005ba7e) bg_sp_fs_schedule_viewer_highlight_g3

0xd64b,	// (0x0005ba86) bg_sp_fs_schedule_viewer_highlight_g4

0xd880,	// (0x0005bcbb) bg_sp_fs_schedule_viewer_highlight_g5

0xd65b,	// (0x0005ba96) bg_sp_fs_schedule_viewer_highlight_g6

0xd663,	// (0x0005ba9e) bg_sp_fs_schedule_viewer_highlight_g7

0xd66b,	// (0x0005baa6) bg_sp_fs_schedule_viewer_highlight_g8

0xacdb,	// (0x00059116) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfdd1,	// (0x0005e20c) bg_sp_fs_schedule_viewer_highlight_g

0x9a0a,	// (0x00057e45) bg_main_sp_fs_ribbon_pane

0x8cc0,	// (0x000570fb) main_sp_fs_ribbon_pane_g1

0xe930,	// (0x0005cd6b) main_sp_fs_ribbon_pane_t1

0x8cc9,	// (0x00057104) main_sp_fs_ribbon_pane_t2

0xe93f,	// (0x0005cd7a) main_sp_fs_ribbon_pane_t3

0x0002,

0xfde4,	// (0x0005e21f) main_sp_fs_ribbon_pane_t

0xe94e,	// (0x0005cd89) main_sp_fs_ribbon_scheduler_pane

0xe956,	// (0x0005cd91) bg_main_sp_fs_ribbon_pane_g1

0xe95f,	// (0x0005cd9a) bg_main_sp_fs_ribbon_pane_g2

0xe968,	// (0x0005cda3) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfdeb,	// (0x0005e226) bg_main_sp_fs_ribbon_pane_g

0xe970,	// (0x0005cdab) main_sp_fs_ribbon_scheduler_pane_g1

0xe979,	// (0x0005cdb4) main_sp_fs_ribbon_scheduler_pane_g2

0xe982,	// (0x0005cdbd) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfdf2,	// (0x0005e22d) main_sp_fs_ribbon_scheduler_pane_g

0xe98b,	// (0x0005cdc6) list_cale_mrui_pane

0x8cd8,	// (0x00057113) sp_fs_scroll_pane_cp07_ParamLimits

0x8cd8,	// (0x00057113) sp_fs_scroll_pane_cp07

0x8cf4,	// (0x0005712f) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0x8cf4,	// (0x0005712f) bg_sp_fs_schedule_viewer_highlight

0xe998,	// (0x0005cdd3) list_single_sp_fs_schedule_track_pane_cp01

0xe9a0,	// (0x0005cddb) list_sp_fs_schedule_track_pane

0xe9a8,	// (0x0005cde3) sp_fs_scroll_pane_cp06_ParamLimits

0xe9a8,	// (0x0005cde3) sp_fs_scroll_pane_cp06

0xcc53,	// (0x0005b08e) bgmain_sp_fs_calendar_pane_g1

0x092e,	// (0x0004ed69) list_single_cale_mrui_pane_ParamLimits

0x092e,	// (0x0004ed69) list_single_cale_mrui_pane

0x8d06,	// (0x00057141) list_single_cale_mrui_row_pane_ParamLimits

0x8d06,	// (0x00057141) list_single_cale_mrui_row_pane

0x8d1c,	// (0x00057157) list_single_cale_mrui_row_pane_g1_ParamLimits

0x8d1c,	// (0x00057157) list_single_cale_mrui_row_pane_g1

0x8d54,	// (0x0005718f) list_single_cale_mrui_row_pane_t1_ParamLimits

0x8d54,	// (0x0005718f) list_single_cale_mrui_row_pane_t1

0x0943,	// (0x0004ed7e) list_single_cale_mrui_row_pane_t2_ParamLimits

0x0943,	// (0x0004ed7e) list_single_cale_mrui_row_pane_t2

0x8d66,	// (0x000571a1) list_single_cale_mrui_row_pane_t3_ParamLimits

0x8d66,	// (0x000571a1) list_single_cale_mrui_row_pane_t3

0x8d95,	// (0x000571d0) list_single_cale_mrui_row_pane_t4_ParamLimits

0x8d95,	// (0x000571d0) list_single_cale_mrui_row_pane_t4

0x0003,

0xfe00,	// (0x0005e23b) list_single_cale_mrui_row_pane_t_ParamLimits

0xfe00,	// (0x0005e23b) list_single_cale_mrui_row_pane_t

0x09ab,	// (0x0004ede6) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x09ab,	// (0x0004ede6) list_single_cmail_header_editor_pane_bg_cp01

0x09d1,	// (0x0004ee0c) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x09d1,	// (0x0004ee0c) list_single_cmail_header_editor_pane_bg_cp02

0x8dc4,	// (0x000571ff) main_radioblah_text_pane_t1_ParamLimits

0x8dc4,	// (0x000571ff) main_radioblah_text_pane_t1

0xe9c7,	// (0x0005ce02) cam6_indi_pane_cp01

0xe9cf,	// (0x0005ce0a) cam6_mode_pane_cp01

0xe9d7,	// (0x0005ce12) cam6_pano_pane

0xe9e0,	// (0x0005ce1b) cam6_zoom_pane_cp01

0xe9ea,	// (0x0005ce25) cam6_pano_image_pane

0xe9f3,	// (0x0005ce2e) cam6_pano_pane_g1

0xe2a6,	// (0x0005c6e1) cam6_pano_pane_g2

0xe9fc,	// (0x0005ce37) cam6_pano_pane_g3

0xea05,	// (0x0005ce40) cam6_pano_pane_g4

0xd1cd,	// (0x0005b608) cam6_pano_pane_g5

0xea0e,	// (0x0005ce49) cam6_pano_pane_g6

0xea16,	// (0x0005ce51) cam6_pano_pane_g7

0xea1e,	// (0x0005ce59) cam6_pano_pane_g8

0xea27,	// (0x0005ce62) cam6_pano_pane_g9

0x0008,

0xfe09,	// (0x0005e244) cam6_pano_pane_g

0x9a0a,	// (0x00057e45) main_browser_tag_pane

0xe87f,	// (0x0005ccba) grid_navstr_albumart_pane

0xea32,	// (0x0005ce6d) cell_navstr_albumart_pane_ParamLimits

0xea32,	// (0x0005ce6d) cell_navstr_albumart_pane

0xea51,	// (0x0005ce8c) cell_navstr_albumart_pane_g1

0xc60f,	// (0x0005aa4a) cell_navstr_albumart_pane_g2

0xc61f,	// (0x0005aa5a) cell_navstr_albumart_pane_g3

0xc617,	// (0x0005aa52) cell_navstr_albumart_pane_g4

0x0003,

0xfe1c,	// (0x0005e257) cell_navstr_albumart_pane_g

0x8ddf,	// (0x0005721a) bt_list_pane_ParamLimits

0x8ddf,	// (0x0005721a) bt_list_pane

0x8df5,	// (0x00057230) bt_list_pane_t1

0x8e04,	// (0x0005723f) bt_list_pane_t2

0x0001,

0xfe25,	// (0x0005e260) bt_list_pane_t

0x9a0a,	// (0x00057e45) main_cale_prevew_pane

0x8e13,	// (0x0005724e) popup_cale_preview_window_ParamLimits

0x8e13,	// (0x0005724e) popup_cale_preview_window

0x9a63,	// (0x00057e9e) bg_popup_preview_window_pane_cp05_ParamLimits

0x9a63,	// (0x00057e9e) bg_popup_preview_window_pane_cp05

0xea59,	// (0x0005ce94) list_cale_preview_pane_ParamLimits

0xea59,	// (0x0005ce94) list_cale_preview_pane

0x8e30,	// (0x0005726b) list_double_cale_preview_pane_ParamLimits

0x8e30,	// (0x0005726b) list_double_cale_preview_pane

0x8e44,	// (0x0005727f) list_single_cale_preview_pane_ParamLimits

0x8e44,	// (0x0005727f) list_single_cale_preview_pane

0x8e5c,	// (0x00057297) list_single_cale_preview_pane_g1

0x8e64,	// (0x0005729f) list_single_cale_preview_pane_t1_ParamLimits

0x8e64,	// (0x0005729f) list_single_cale_preview_pane_t1

0x8e79,	// (0x000572b4) list_double_cale_preview_pane_g1

0x8e81,	// (0x000572bc) list_double_cale_preview_pane_t1_ParamLimits

0x8e81,	// (0x000572bc) list_double_cale_preview_pane_t1

0x8e96,	// (0x000572d1) list_double_cale_preview_pane_t2_ParamLimits

0x8e96,	// (0x000572d1) list_double_cale_preview_pane_t2

0x0001,

0xfe2a,	// (0x0005e265) list_double_cale_preview_pane_t_ParamLimits

0xfe2a,	// (0x0005e265) list_double_cale_preview_pane_t

0x9a0a,	// (0x00057e45) main_ezdial_pane

0x9a63,	// (0x00057e9e) main_sp_fs_email_pane_ParamLimits

0x8783,	// (0x00056bbe) cmail_ddmenu_btn01_pane_ParamLimits

0x8783,	// (0x00056bbe) cmail_ddmenu_btn01_pane

0x8796,	// (0x00056bd1) cmail_ddmenu_btn02_pane_ParamLimits

0x8796,	// (0x00056bd1) cmail_ddmenu_btn02_pane

0x87b9,	// (0x00056bf4) cmail_ddmenu_btn03_pane_ParamLimits

0x87b9,	// (0x00056bf4) cmail_ddmenu_btn03_pane

0x0362,	// (0x0004e79d) main_sp_fs_ctrlbar_pane_ParamLimits

0x0386,	// (0x0004e7c1) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0x8a3d,	// (0x00056e78) list_cmail_body_pane_ParamLimits

0x8a8b,	// (0x00056ec6) bg_button_pane_cp12

0xe808,	// (0x0005cc43) list_single_cmail_header_detail_pane_g3_ParamLimits

0xe808,	// (0x0005cc43) list_single_cmail_header_detail_pane_g3

0x8aa2,	// (0x00056edd) list_single_cmail_header_detail_pane_t2_ParamLimits

0x8aa2,	// (0x00056edd) list_single_cmail_header_detail_pane_t2

0x0001,

0xfdad,	// (0x0005e1e8) list_single_cmail_header_detail_pane_t_ParamLimits

0xfdad,	// (0x0005e1e8) list_single_cmail_header_detail_pane_t

0x8b9f,	// (0x00056fda) phacti_term_pane_t2_ParamLimits

0x8b9f,	// (0x00056fda) phacti_term_pane_t2

0x0001,

0xfdb7,	// (0x0005e1f2) phacti_term_pane_t_ParamLimits

0xfdb7,	// (0x0005e1f2) phacti_term_pane_t

0xea65,	// (0x0005cea0) aid_size_list_single_double

0x8eae,	// (0x000572e9) popup_ezdial_listscroll_window

0x8eca,	// (0x00057305) popup_number_entry_window_cp01

0xb3d4,	// (0x0005980f) bg_popup_call_pane_cp09

0xea71,	// (0x0005ceac) ezdial_list_pane

0xea79,	// (0x0005ceb4) scroll_pane_cp23

0xc802,	// (0x0005ac3d) bg_button_pane_cp028_ParamLimits

0xc802,	// (0x0005ac3d) bg_button_pane_cp028

0x8ed8,	// (0x00057313) cmail_ddmenu_btn01_pane_g1_ParamLimits

0x8ed8,	// (0x00057313) cmail_ddmenu_btn01_pane_g1

0x8ee7,	// (0x00057322) cmail_ddmenu_btn01_pane_g2_ParamLimits

0x8ee7,	// (0x00057322) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfe2f,	// (0x0005e26a) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfe2f,	// (0x0005e26a) cmail_ddmenu_btn01_pane_g

0xea81,	// (0x0005cebc) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xea81,	// (0x0005cebc) cmail_ddmenu_btn01_pane_t1

0xc802,	// (0x0005ac3d) bg_button_pane_cp029_ParamLimits

0xc802,	// (0x0005ac3d) bg_button_pane_cp029

0x8efd,	// (0x00057338) cmail_ddmenu_btn02_pane_g1_ParamLimits

0x8efd,	// (0x00057338) cmail_ddmenu_btn02_pane_g1

0x8f18,	// (0x00057353) cmail_ddmenu_btn02_pane_t1_ParamLimits

0x8f18,	// (0x00057353) cmail_ddmenu_btn02_pane_t1

0x9a63,	// (0x00057e9e) bg_button_pane_cp031_ParamLimits

0x9a63,	// (0x00057e9e) bg_button_pane_cp031

0x8efd,	// (0x00057338) cmail_ddmenu_btn03_pane_g1_ParamLimits

0x8efd,	// (0x00057338) cmail_ddmenu_btn03_pane_g1

0x8f18,	// (0x00057353) cmail_ddmenu_btn03_pane_t1_ParamLimits

0x8f18,	// (0x00057353) cmail_ddmenu_btn03_pane_t1

0x62f4,	// (0x0005472f) cell_dialer2_keypad_pane_t1_ParamLimits

0x630e,	// (0x00054749) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x630e,	// (0x00054749) cell_dialer2_keypad_pane_t1_copy1

0x8079,	// (0x000564b4) ncimui_group_button_pane

0x9a63,	// (0x00057e9e) main_sp_fs_calendar_pane_ParamLimits

0xe2ef,	// (0x0005c72a) list_single_cmail_header_caption_pane_ParamLimits

0x8bd2,	// (0x0005700d) aid_recal_txt_sm_pane

0x9a0a,	// (0x00057e45) mian_recal_day_pane

0x8c4b,	// (0x00057086) popup_sp_fs_cale_preview_window_ParamLimits

0xea97,	// (0x0005ced2) list_recal_day_pane

0x8f5b,	// (0x00057396) list_single_recal_day_pane_ParamLimits

0x8f5b,	// (0x00057396) list_single_recal_day_pane

0xeabe,	// (0x0005cef9) list_single_recal_day_pane_g1_ParamLimits

0xeabe,	// (0x0005cef9) list_single_recal_day_pane_g1

0x8f6d,	// (0x000573a8) list_single_recal_day_pane_g2_ParamLimits

0x8f6d,	// (0x000573a8) list_single_recal_day_pane_g2

0x8f79,	// (0x000573b4) list_single_recal_day_pane_g3_ParamLimits

0x8f79,	// (0x000573b4) list_single_recal_day_pane_g3

0x09f1,	// (0x0004ee2c) list_single_recal_day_pane_g4_ParamLimits

0x09f1,	// (0x0004ee2c) list_single_recal_day_pane_g4

0x8f85,	// (0x000573c0) list_single_recal_day_pane_g5_ParamLimits

0x8f85,	// (0x000573c0) list_single_recal_day_pane_g5

0xabc5,	// (0x00059000) list_single_recal_day_pane_g6_ParamLimits

0xabc5,	// (0x00059000) list_single_recal_day_pane_g6

0x0004,

0xfe3e,	// (0x0005e279) list_single_recal_day_pane_g_ParamLimits

0xfe3e,	// (0x0005e279) list_single_recal_day_pane_g

0xabd9,	// (0x00059014) list_single_recal_day_pane_t1

0xabeb,	// (0x00059026) list_single_recal_day_pane_t2

0x0001,

0xfe49,	// (0x0005e284) list_single_recal_day_pane_t

0x8f91,	// (0x000573cc) ncimui_query_button_pane_ParamLimits

0x8f91,	// (0x000573cc) ncimui_query_button_pane

0x8fa1,	// (0x000573dc) ncimui_query_button_pane_t1_ParamLimits

0x8fa1,	// (0x000573dc) ncimui_query_button_pane_t1

0xeaca,	// (0x0005cf05) ncimui_query_button_pane_t2_ParamLimits

0xeaca,	// (0x0005cf05) ncimui_query_button_pane_t2

0x0001,

0xfe4e,	// (0x0005e289) ncimui_query_button_pane_t_ParamLimits

0xfe4e,	// (0x0005e289) ncimui_query_button_pane_t

0x8fb4,	// (0x000573ef) query_button_pane_ParamLimits

0x8fb4,	// (0x000573ef) query_button_pane

0x9a0a,	// (0x00057e45) bg_button_pane_cp0028

0xeadd,	// (0x0005cf18) query_button_pane_t1

0x431d,	// (0x00052758) main_tport_pane_ParamLimits

0x88ed,	// (0x00056d28) bg_popup_window_pane_cp01_ParamLimits

0x88ed,	// (0x00056d28) bg_popup_window_pane_cp01

0x8908,	// (0x00056d43) heading_pane_cp08_ParamLimits

0x8908,	// (0x00056d43) heading_pane_cp08

0x891b,	// (0x00056d56) heading_pane_cp07_ParamLimits

0x891b,	// (0x00056d56) heading_pane_cp07

0x89cc,	// (0x00056e07) cell_tport_appsw_pane_g2

0x0002,

0xfd9a,	// (0x0005e1d5) cell_tport_appsw_pane_g

0xfe0a,	// (0x0004e245) input_candi_list_open_g1

0xaeaf,	// (0x000592ea) list_cale_time_pane_g6_ParamLimits

0xaeaf,	// (0x000592ea) list_cale_time_pane_g6

0x5127,	// (0x00053562) aid_size_touch_calib_1_ParamLimits

0x5127,	// (0x00053562) aid_size_touch_calib_1

0x5139,	// (0x00053574) aid_size_touch_calib_2_ParamLimits

0x5139,	// (0x00053574) aid_size_touch_calib_2

0x5151,	// (0x0005358c) aid_size_touch_calib_3_ParamLimits

0x5151,	// (0x0005358c) aid_size_touch_calib_3

0x516f,	// (0x000535aa) aid_size_touch_calib_4_ParamLimits

0x516f,	// (0x000535aa) aid_size_touch_calib_4

0x5187,	// (0x000535c2) main_touch_calib_button_group_pane_ParamLimits

0x5187,	// (0x000535c2) main_touch_calib_button_group_pane

0x519f,	// (0x000535da) main_touch_calib_pane_g1_ParamLimits

0x51b1,	// (0x000535ec) main_touch_calib_pane_g2_ParamLimits

0x51c3,	// (0x000535fe) main_touch_calib_pane_g3_ParamLimits

0x51d5,	// (0x00053610) main_touch_calib_pane_g4_ParamLimits

0xf75d,	// (0x0005db98) main_touch_calib_pane_g_ParamLimits

0x51e7,	// (0x00053622) main_touch_calib_pane_t1_ParamLimits

0x5201,	// (0x0005363c) main_touch_calib_pane_t2_ParamLimits

0x521b,	// (0x00053656) main_touch_calib_pane_t3_ParamLimits

0x522f,	// (0x0005366a) main_touch_calib_pane_t4_ParamLimits

0x5245,	// (0x00053680) main_touch_calib_pane_t5_ParamLimits

0xf766,	// (0x0005dba1) main_touch_calib_pane_t_ParamLimits

0xcf83,	// (0x0005b3be) list_single_fp_cale_pane_g3_ParamLimits

0xcf83,	// (0x0005b3be) list_single_fp_cale_pane_g3

0x9a63,	// (0x00057e9e) bg_button_pane_cp012_ParamLimits

0x9a63,	// (0x00057e9e) bg_vkb2_func_pane_cp03_ParamLimits

0x72db,	// (0x00055716) cell_vitu2_function_top_pane_g1_ParamLimits

0x9a63,	// (0x00057e9e) bg_vkb2_func_pane_cp04_ParamLimits

0x8007,	// (0x00056442) main_ncimui_button_group_pane_ParamLimits

0x8007,	// (0x00056442) main_ncimui_button_group_pane

0x8067,	// (0x000564a2) main_ncimui_pane_t3_ParamLimits

0x8067,	// (0x000564a2) main_ncimui_pane_t3

0xe895,	// (0x0005ccd0) phacti_button_group_pane

0xea65,	// (0x0005cea0) aid_size_list_single_double_ParamLimits

0x8eae,	// (0x000572e9) popup_ezdial_listscroll_window_ParamLimits

0x8eca,	// (0x00057305) popup_number_entry_window_cp01_ParamLimits

0x8fc7,	// (0x00057402) phacti_button_pane_ParamLimits

0x8fc7,	// (0x00057402) phacti_button_pane

0x9a0a,	// (0x00057e45) bg_button_pane_cp14

0xeaeb,	// (0x0005cf26) phacti_button_pane_t1

0x8fd8,	// (0x00057413) main_touch_calib_button_pane_ParamLimits

0x8fd8,	// (0x00057413) main_touch_calib_button_pane

0xa1c6,	// (0x00058601) bg_button_pane_cp18_ParamLimits

0xa1c6,	// (0x00058601) bg_button_pane_cp18

0xeaf9,	// (0x0005cf34) main_touch_calib_button_pane_t1_ParamLimits

0xeaf9,	// (0x0005cf34) main_touch_calib_button_pane_t1

0xeb0f,	// (0x0005cf4a) main_touch_calib_button_pane_t2_ParamLimits

0xeb0f,	// (0x0005cf4a) main_touch_calib_button_pane_t2

0x0001,

0xfe53,	// (0x0005e28e) main_touch_calib_button_pane_t_ParamLimits

0xfe53,	// (0x0005e28e) main_touch_calib_button_pane_t

0x9a0a,	// (0x00057e45) cell_ncimui_button_pane

0x9a0a,	// (0x00057e45) bg_button_pane_cp032

0xeb2d,	// (0x0005cf68) cell_ncimui_button_pane_t1

0xa998,	// (0x00058dd3) image3_infobar_pane_ParamLimits

0xa998,	// (0x00058dd3) image3_infobar_pane

0x8435,	// (0x00056870) fs_bigclock_status_pane_ParamLimits

0x8435,	// (0x00056870) fs_bigclock_status_pane

0x8442,	// (0x0005687d) main_fs_bigclock_clock_pane_ParamLimits

0x8442,	// (0x0005687d) main_fs_bigclock_clock_pane

0x8456,	// (0x00056891) main_fs_bigclock_indi_pane_ParamLimits

0x8456,	// (0x00056891) main_fs_bigclock_indi_pane

0x8471,	// (0x000568ac) main_fs_bigclock_swipe_pane_ParamLimits

0x8471,	// (0x000568ac) main_fs_bigclock_swipe_pane

0x9a0a,	// (0x00057e45) main_fs_clock_dumped_data

0xe3ee,	// (0x0005c829) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xe3ee,	// (0x0005c829) list_single_fs_bigclock_indicator_pane_g1

0xe418,	// (0x0005c853) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xe418,	// (0x0005c853) list_single_fs_bigclock_indicator_pane_g2

0xe432,	// (0x0005c86d) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xe432,	// (0x0005c86d) list_single_fs_bigclock_indicator_pane_g3

0xe44c,	// (0x0005c887) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xe44c,	// (0x0005c887) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfc7b,	// (0x0005e0b6) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfc7b,	// (0x0005e0b6) list_single_fs_bigclock_indicator_pane_g

0xe477,	// (0x0005c8b2) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xe477,	// (0x0005c8b2) list_single_fs_bigclock_indicator_pane_t1

0xe49f,	// (0x0005c8da) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xe49f,	// (0x0005c8da) list_single_fs_bigclock_indicator_pane_t2

0xe4c7,	// (0x0005c902) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xe4c7,	// (0x0005c902) list_single_fs_bigclock_indicator_pane_t3

0xe4ef,	// (0x0005c92a) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xe4ef,	// (0x0005c92a) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfc86,	// (0x0005e0c1) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfc86,	// (0x0005e0c1) list_single_fs_bigclock_indicator_pane_t

0xeb3b,	// (0x0005cf76) image3_infobar_fav_pane_ParamLimits

0xeb3b,	// (0x0005cf76) image3_infobar_fav_pane

0xeb4b,	// (0x0005cf86) image3_infobar_loc_pane_ParamLimits

0xeb4b,	// (0x0005cf86) image3_infobar_loc_pane

0xeb61,	// (0x0005cf9c) image3_infobar_time_pane_ParamLimits

0xeb61,	// (0x0005cf9c) image3_infobar_time_pane

0xcc53,	// (0x0005b08e) image3_infobar_time_pane_g1

0xeb71,	// (0x0005cfac) image3_infobar_time_pane_t1

0xcc53,	// (0x0005b08e) image3_infobar_loc_pane_g1

0xeb7f,	// (0x0005cfba) image3_infobar_loc_pane_g2

0x0001,

0xfe58,	// (0x0005e293) image3_infobar_loc_pane_g

0xeb87,	// (0x0005cfc2) image3_infobar_loc_pane_t1

0xcc53,	// (0x0005b08e) image3_infobar_fav_pane_g1

0xeb95,	// (0x0005cfd0) image3_infobar_fav_pane_g2

0x0001,

0xfe5d,	// (0x0005e298) image3_infobar_fav_pane_g

0xeb9d,	// (0x0005cfd8) fs_bigclock_status_battery_pane

0xeba6,	// (0x0005cfe1) fs_bigclock_status_signal_pane

0xebaf,	// (0x0005cfea) fs_bigclock_status_title_pane

0xebb8,	// (0x0005cff3) fs_bigclock_status_signal_pane_g1

0xebc1,	// (0x0005cffc) fs_bigclock_status_signal_pane_g2

0x0001,

0xfe62,	// (0x0005e29d) fs_bigclock_status_signal_pane_g

0xebc9,	// (0x0005d004) fs_bigclock_status_battery_pane_g1

0xebd2,	// (0x0005d00d) fs_bigclock_status_battery_pane_g2

0x0001,

0xfe67,	// (0x0005e2a2) fs_bigclock_status_battery_pane_g

0xebda,	// (0x0005d015) fs_bigclock_status_title_pane_t1

0xcc53,	// (0x0005b08e) main_fs_bigclock_clock_pane_g1

0xebe8,	// (0x0005d023) main_fs_bigclock_clock_pane_g2

0xebe8,	// (0x0005d023) main_fs_bigclock_clock_pane_g3

0xebe8,	// (0x0005d023) main_fs_bigclock_clock_pane_g4

0x0003,

0xfe6c,	// (0x0005e2a7) main_fs_bigclock_clock_pane_g

0xebf0,	// (0x0005d02b) main_fs_bigclock_clock_pane_t1

0xebfe,	// (0x0005d039) main_fs_bigclock_clock_pane_t2

0x0001,

0xfe75,	// (0x0005e2b0) main_fs_bigclock_clock_pane_t

0x8fed,	// (0x00057428) list_single_fs_bigclock_indicator_pane_ParamLimits

0x8fed,	// (0x00057428) list_single_fs_bigclock_indicator_pane

0x8ffe,	// (0x00057439) list_single_fs_bigclock_pane_ParamLimits

0x8ffe,	// (0x00057439) list_single_fs_bigclock_pane

0xec16,	// (0x0005d051) main_fs_bigclock_indicator_pane_t1

0xec25,	// (0x0005d060) list_single_fs_bigclock_pane_g1

0xec2d,	// (0x0005d068) list_single_fs_bigclock_pane_t1

0xcc53,	// (0x0005b08e) main_fs_bigclock_swipe_pane_g1

0xec70,	// (0x0005d0ab) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfe86,	// (0x0005e2c1) main_fs_bigclock_swipe_pane_g

0xec78,	// (0x0005d0b3) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xec78,	// (0x0005d0b3) main_fs_bigclock_swipe_pane_t1

0x3036,	// (0x00051471) call_type_pane_ParamLimits

0x9a0a,	// (0x00057e45) main_btmg_pane

0x8d48,	// (0x00057183) list_single_cale_mrui_row_pane_g2_ParamLimits

0x8d48,	// (0x00057183) list_single_cale_mrui_row_pane_g2

0x0002,

0xfdf9,	// (0x0005e234) list_single_cale_mrui_row_pane_g_ParamLimits

0xfdf9,	// (0x0005e234) list_single_cale_mrui_row_pane_g

0x8f49,	// (0x00057384) list_recal_vselct_arw_lo_pane

0xeab6,	// (0x0005cef1) list_recal_vselct_arw_up_pane

0x8f51,	// (0x0005738c) list_recal_vselct_pane

0x9061,	// (0x0005749c) btmg_button_pane

0x906b,	// (0x000574a6) main_btmg_pane_g1

0x9a0a,	// (0x00057e45) bg_button_pane_cp044

0xec95,	// (0x0005d0d0) btmg_button_pane_t1

0xc7ee,	// (0x0005ac29) aid_listscroll_gen

0x9a63,	// (0x00057e9e) main_cntbar_detail_pane

0xe7e9,	// (0x0005cc24) list_cmail_folder_pane

0xe7f9,	// (0x0005cc34) sp_fs_scroll_pane_cp03_ParamLimits

0x0a09,	// (0x0004ee44) list_single_fs_dyc_pane_cp01_ParamLimits

0x0a09,	// (0x0004ee44) list_single_fs_dyc_pane_cp01

0xeca3,	// (0x0005d0de) aid_size_cmail_indent

0xabfd,	// (0x00059038) list_single_dyc_row_pane_cp01

0x90a5,	// (0x000574e0) cntbar_detail_list_pane_ParamLimits

0x90a5,	// (0x000574e0) cntbar_detail_list_pane

0x90f7,	// (0x00057532) main_cntbar_detail_cont_pane_ParamLimits

0x90f7,	// (0x00057532) main_cntbar_detail_cont_pane

0x302a,	// (0x00051465) scroll_pane_cp032_ParamLimits

0x302a,	// (0x00051465) scroll_pane_cp032

0x910b,	// (0x00057546) cntbar_detail_list_event_pane_ParamLimits

0x910b,	// (0x00057546) cntbar_detail_list_event_pane

0x90b7,	// (0x000574f2) cntbar_detail_list_shct_pane

0xad49,	// (0x00059184) aid_list_gen

0xecac,	// (0x0005d0e7) aid_scroll

0xecb5,	// (0x0005d0f0) aid_size_touch_scroll_bar

0x78d7,	// (0x00055d12) aid_list_double

0xecbe,	// (0x0005d0f9) aid_list_single

0x01d0,	// (0x0004e60b) aid_list_single_lg

0xac06,	// (0x00059041) aid_list_z_g_a_sm

0xac0e,	// (0x00059049) aid_list_z_g_d

0xac16,	// (0x00059051) aid_txt_z_prm

0x0a24,	// (0x0004ee5f) aid_txt_z_prm_cp01

0x0a32,	// (0x0004ee6d) aid_txt_z_sec

0x911b,	// (0x00057556) main_cntbar_detail_cont_pane_g1_ParamLimits

0x911b,	// (0x00057556) main_cntbar_detail_cont_pane_g1

0x912f,	// (0x0005756a) main_cntbar_detail_cont_pane_g2_ParamLimits

0x912f,	// (0x0005756a) main_cntbar_detail_cont_pane_g2

0x0001,

0xfe8b,	// (0x0005e2c6) main_cntbar_detail_cont_pane_g_ParamLimits

0xfe8b,	// (0x0005e2c6) main_cntbar_detail_cont_pane_g

0xecc7,	// (0x0005d102) main_cntbar_detail_cont_pane_t1

0xecd5,	// (0x0005d110) main_cntbar_detail_cont_pane_t2

0xece3,	// (0x0005d11e) main_cntbar_detail_cont_pane_t3

0x0002,

0xfe90,	// (0x0005e2cb) main_cntbar_detail_cont_pane_t

0x913f,	// (0x0005757a) cell_cntbar_detail_list_shct_pane_ParamLimits

0x913f,	// (0x0005757a) cell_cntbar_detail_list_shct_pane

0xecf1,	// (0x0005d12c) cntbar_detail_list_shct_pane_g1

0xecfa,	// (0x0005d135) cntbar_detail_list_shct_pane_g2

0x0001,

0xfe97,	// (0x0005e2d2) cntbar_detail_list_shct_pane_g

0x9151,	// (0x0005758c) cntbar_detail_list_event_pane_g1_ParamLimits

0x9151,	// (0x0005758c) cntbar_detail_list_event_pane_g1

0x915d,	// (0x00057598) cntbar_detail_list_event_pane_g2_ParamLimits

0x915d,	// (0x00057598) cntbar_detail_list_event_pane_g2

0x0005,

0xfe9c,	// (0x0005e2d7) cntbar_detail_list_event_pane_g_ParamLimits

0xfe9c,	// (0x0005e2d7) cntbar_detail_list_event_pane_g

0x91cb,	// (0x00057606) cntbar_detail_list_event_pane_t1_ParamLimits

0x91cb,	// (0x00057606) cntbar_detail_list_event_pane_t1

0x91e0,	// (0x0005761b) cntbar_detail_list_event_pane_t2_ParamLimits

0x91e0,	// (0x0005761b) cntbar_detail_list_event_pane_t2

0x0002,

0xfea9,	// (0x0005e2e4) cntbar_detail_list_event_pane_t_ParamLimits

0xfea9,	// (0x0005e2e4) cntbar_detail_list_event_pane_t

0xcc53,	// (0x0005b08e) cell_cntbar_detail_list_shct_pane_g1

0x33dc,	// (0x00051817) navi_pane_mv_g3

0x9a63,	// (0x00057e9e) main_cntbar_detail_pane_ParamLimits

0x9a0a,	// (0x00057e45) main_notif_wgt_pane

0xa7b0,	// (0x00058beb) aid_tch_main_mp4_pane_g4

0xa98e,	// (0x00058dc9) popup_slider_window_cp02

0x8f3f,	// (0x0005737a) list_recal_day_event_pane

0x9075,	// (0x000574b0) cntbar_detail_btn_pane_ParamLimits

0x9075,	// (0x000574b0) cntbar_detail_btn_pane

0x908d,	// (0x000574c8) cntbar_detail_btn_pane_cp01_ParamLimits

0x908d,	// (0x000574c8) cntbar_detail_btn_pane_cp01

0x90b7,	// (0x000574f2) cntbar_detail_list_shct_pane_ParamLimits

0x90c7,	// (0x00057502) cntbar_detail_pane_g1_ParamLimits

0x90c7,	// (0x00057502) cntbar_detail_pane_g1

0x90db,	// (0x00057516) cntbar_detail_pane_t1_ParamLimits

0x90db,	// (0x00057516) cntbar_detail_pane_t1

0x9169,	// (0x000575a4) cntbar_detail_list_event_pane_g3_ParamLimits

0x9169,	// (0x000575a4) cntbar_detail_list_event_pane_g3

0x9181,	// (0x000575bc) cntbar_detail_list_event_pane_g4_ParamLimits

0x9181,	// (0x000575bc) cntbar_detail_list_event_pane_g4

0x9199,	// (0x000575d4) cntbar_detail_list_event_pane_g5_ParamLimits

0x9199,	// (0x000575d4) cntbar_detail_list_event_pane_g5

0x91b1,	// (0x000575ec) cntbar_detail_list_event_pane_g6_ParamLimits

0x91b1,	// (0x000575ec) cntbar_detail_list_event_pane_g6

0x91f5,	// (0x00057630) cntbar_detail_list_event_pane_t3_ParamLimits

0x91f5,	// (0x00057630) cntbar_detail_list_event_pane_t3

0x9207,	// (0x00057642) popup_notif_wgt_window_ParamLimits

0x9207,	// (0x00057642) popup_notif_wgt_window

0x9220,	// (0x0005765b) popup_submenu_window_cp01_ParamLimits

0x9220,	// (0x0005765b) popup_submenu_window_cp01

0xb3d4,	// (0x0005980f) bg_popup_window_pane_cp10

0xed03,	// (0x0005d13e) listscroll_notif_wgt_pane

0xed15,	// (0x0005d150) list_notif_wgt_window

0xed1e,	// (0x0005d159) scroll_pane_cp033

0x9234,	// (0x0005766f) list_notif_wgt_row_pane_ParamLimits

0x9234,	// (0x0005766f) list_notif_wgt_row_pane

0xed27,	// (0x0005d162) aid_size_list_notif_wgt_del

0xed34,	// (0x0005d16f) list_notif_wgt_row_pane_g1

0xed40,	// (0x0005d17b) list_notif_wgt_row_pane_g2

0xed4c,	// (0x0005d187) list_notif_wgt_row_pane_g3

0x0002,

0xfeb0,	// (0x0005e2eb) list_notif_wgt_row_pane_g

0xed59,	// (0x0005d194) list_notif_wgt_row_pane_t1

0xed6e,	// (0x0005d1a9) list_notif_wgt_row_pane_t2

0xed80,	// (0x0005d1bb) list_notif_wgt_row_pane_t3

0x0002,

0xfeb7,	// (0x0005e2f2) list_notif_wgt_row_pane_t

0xd888,	// (0x0005bcc3) list_recal_day_event_pane_g1

0xed92,	// (0x0005d1cd) list_recal_day_event_pane_t1

0x9a0a,	// (0x00057e45) bg_button_pane_cp045

0xeda1,	// (0x0005d1dc) cntbar_detail_btn_pane_t1

0xc802,	// (0x0005ac3d) main_callh_pane_ParamLimits

0xc802,	// (0x0005ac3d) main_callh_pane

0x9a0a,	// (0x00057e45) main_coverflow0_pane

0x9a0a,	// (0x00057e45) main_wgtman_pane

0x847f,	// (0x000568ba) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x847f,	// (0x000568ba) main_fs_bigclock_unlock_btn_pane

0x89c4,	// (0x00056dff) bg_button_pane_cp16

0x89d4,	// (0x00056e0f) cell_tport_appsw_pane_g3

0x9244,	// (0x0005767f) cf0_flow_pane_ParamLimits

0x9244,	// (0x0005767f) cf0_flow_pane

0xedaf,	// (0x0005d1ea) listscroll_cf0_pane

0xedba,	// (0x0005d1f5) main_cf0_pane_g1

0x9259,	// (0x00057694) main_cf0_pane_t1_ParamLimits

0x9259,	// (0x00057694) main_cf0_pane_t1

0x9270,	// (0x000576ab) main_cf0_pane_t2_ParamLimits

0x9270,	// (0x000576ab) main_cf0_pane_t2

0x0001,

0xfec3,	// (0x0005e2fe) main_cf0_pane_t_ParamLimits

0xfec3,	// (0x0005e2fe) main_cf0_pane_t

0xedcc,	// (0x0005d207) scroll_pane_cp11

0x9287,	// (0x000576c2) cf0_flow_pane_g1

0x9293,	// (0x000576ce) cf0_flow_pane_g2

0x0001,

0xfec8,	// (0x0005e303) cf0_flow_pane_g

0x929f,	// (0x000576da) cf0_flow_pane_t1

0x9a0a,	// (0x00057e45) main_call6_pane

0x9a0a,	// (0x00057e45) main_calllock_pane

0x92b1,	// (0x000576ec) call6_btn_grp_pane_ParamLimits

0x92b1,	// (0x000576ec) call6_btn_grp_pane

0x92cb,	// (0x00057706) call6_pane_g1_ParamLimits

0x92cb,	// (0x00057706) call6_pane_g1

0x92e1,	// (0x0005771c) popup_call6_1st_window_ParamLimits

0x92e1,	// (0x0005771c) popup_call6_1st_window

0x92f2,	// (0x0005772d) popup_call6_2nd_window_ParamLimits

0x92f2,	// (0x0005772d) popup_call6_2nd_window

0x9303,	// (0x0005773e) cell_call6_btn_pane_ParamLimits

0x9303,	// (0x0005773e) cell_call6_btn_pane

0xb3d4,	// (0x0005980f) bg_popup_call2_in_pane_cp03

0xedd7,	// (0x0005d212) popup_call6_1st_window_g1

0xeddf,	// (0x0005d21a) popup_call6_1st_window_g2

0xede7,	// (0x0005d222) popup_call6_1st_window_g3

0x0002,

0xfecd,	// (0x0005e308) popup_call6_1st_window_g

0xedef,	// (0x0005d22a) popup_call6_1st_window_t1

0xedfe,	// (0x0005d239) popup_call6_1st_window_t2

0xee0e,	// (0x0005d249) popup_call6_1st_window_t3

0x0002,

0xfed4,	// (0x0005e30f) popup_call6_1st_window_t

0xb3d4,	// (0x0005980f) bg_popup_call2_in_pane_cp04

0xedd7,	// (0x0005d212) popup_call6_2nd_window_g1

0xeddf,	// (0x0005d21a) popup_call6_2nd_window_g2

0xede7,	// (0x0005d222) popup_call6_2nd_window_g3

0x0002,

0xfecd,	// (0x0005e308) popup_call6_2nd_window_g

0xedef,	// (0x0005d22a) popup_call6_2nd_window_t1

0x9a0a,	// (0x00057e45) bg_button_pane_cp15

0xee1e,	// (0x0005d259) cell_call6_btn_pane_g1

0xee27,	// (0x0005d262) cell_call6_btn_pane_t1

0x9317,	// (0x00057752) listscroll_wgtman_pane_ParamLimits

0x9317,	// (0x00057752) listscroll_wgtman_pane

0x9338,	// (0x00057773) wgtman_btn_pane_ParamLimits

0x9338,	// (0x00057773) wgtman_btn_pane

0xb29a,	// (0x000596d5) aid_scroll_copy1

0xee36,	// (0x0005d271) list_wgtman_pane

0x937b,	// (0x000577b6) wgtman_btn_pane_g1_ParamLimits

0x937b,	// (0x000577b6) wgtman_btn_pane_g1

0x93a7,	// (0x000577e2) wgtman_btn_pane_t1_ParamLimits

0x93a7,	// (0x000577e2) wgtman_btn_pane_t1

0xee40,	// (0x0005d27b) wgtman_btn_pane_t2_ParamLimits

0xee40,	// (0x0005d27b) wgtman_btn_pane_t2

0x0001,

0xfedb,	// (0x0005e316) wgtman_btn_pane_t_ParamLimits

0xfedb,	// (0x0005e316) wgtman_btn_pane_t

0xab0f,	// (0x00058f4a) listrow_wgtman_pane_ParamLimits

0xab0f,	// (0x00058f4a) listrow_wgtman_pane

0x93e4,	// (0x0005781f) listrow_wgtman_pane_g1

0x93f1,	// (0x0005782c) listrow_wgtman_pane_g2

0x0001,

0xfee0,	// (0x0005e31b) listrow_wgtman_pane_g

0x0a40,	// (0x0004ee7b) listrow_wgtman_pane_t1

0x0a58,	// (0x0004ee93) listrow_wgtman_pane_t2

0x0001,

0xfee5,	// (0x0005e320) listrow_wgtman_pane_t

0x0a7e,	// (0x0004eeb9) wait_bar_pane_cp09

0xee57,	// (0x0005d292) main_calllock_btn_pane

0xee61,	// (0x0005d29c) main_calllock_pane_g1

0x9a0a,	// (0x00057e45) bg_button_pane_cp17

0xee6d,	// (0x0005d2a8) main_calllock_btn_pane_g1

0xee76,	// (0x0005d2b1) main_calllock_btn_pane_t1

0x9a0a,	// (0x00057e45) main_dialer3_pane

0x9a0a,	// (0x00057e45) main_fmrd2_pane

0xcc53,	// (0x0005b08e) main_fs_bigclock_unlock_btn_pane_g1

0xee8d,	// (0x0005d2c8) main_fs_bigclock_unlock_btn_pane_t1

0x940f,	// (0x0005784a) area_fmrd2_info_pane_ParamLimits

0x940f,	// (0x0005784a) area_fmrd2_info_pane

0x941e,	// (0x00057859) area_fmrd2_visual_pane_ParamLimits

0x941e,	// (0x00057859) area_fmrd2_visual_pane

0x942c,	// (0x00057867) fmrd2_indi_pane_ParamLimits

0x942c,	// (0x00057867) fmrd2_indi_pane

0x9439,	// (0x00057874) area_fmrd2_visual_pane_g1

0x9441,	// (0x0005787c) area_fmrd2_visual_pane_t1

0x9451,	// (0x0005788c) area_fmrd2_visual_pane_t2

0x9461,	// (0x0005789c) area_fmrd2_visual_pane_t3

0x0002,

0xfeef,	// (0x0005e32a) area_fmrd2_visual_pane_t

0x9471,	// (0x000578ac) area_fmrd2_info_pane_g1

0x9479,	// (0x000578b4) area_fmrd2_info_pane_t1

0x9489,	// (0x000578c4) area_fmrd2_info_pane_t2

0x9499,	// (0x000578d4) area_fmrd2_info_pane_t3

0x94a9,	// (0x000578e4) area_fmrd2_info_pane_t4

0x0003,

0xfef6,	// (0x0005e331) area_fmrd2_info_pane_t

0x94b9,	// (0x000578f4) fmrd2_indi_pane_t1

0x94c9,	// (0x00057904) fmrd2_indi_pane_t2

0x94d9,	// (0x00057914) fmrd2_indi_pane_t3

0x0002,

0xfeff,	// (0x0005e33a) fmrd2_indi_pane_t

0xe45b,	// (0x0005c896) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xe45b,	// (0x0005c896) list_single_fs_bigclock_indicator_pane_g5

0xe504,	// (0x0005c93f) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xe504,	// (0x0005c93f) list_single_fs_bigclock_indicator_pane_t5

0x8bb4,	// (0x00056fef) aid_cell_bcale_month_pane_ParamLimits

0x8bb4,	// (0x00056fef) aid_cell_bcale_month_pane

0x8bdb,	// (0x00057016) bcale_month_pane_ParamLimits

0x8bdb,	// (0x00057016) bcale_month_pane

0x8bfd,	// (0x00057038) bcale_preview_pane_ParamLimits

0x8bfd,	// (0x00057038) bcale_preview_pane

0xec2d,	// (0x0005d068) list_single_fs_bigclock_pane_t1_ParamLimits

0xec4c,	// (0x0005d087) list_single_fs_bigclock_pane_t2_ParamLimits

0xec4c,	// (0x0005d087) list_single_fs_bigclock_pane_t2

0x0001,

0xfe81,	// (0x0005e2bc) list_single_fs_bigclock_pane_t_ParamLimits

0xfe81,	// (0x0005e2bc) list_single_fs_bigclock_pane_t

0xee85,	// (0x0005d2c0) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfeea,	// (0x0005e325) main_fs_bigclock_unlock_btn_pane_g

0x94e9,	// (0x00057924) aid_dia3_key_size_ParamLimits

0x94e9,	// (0x00057924) aid_dia3_key_size

0x94f8,	// (0x00057933) aid_dia3_listrow_size_ParamLimits

0x94f8,	// (0x00057933) aid_dia3_listrow_size

0x950d,	// (0x00057948) dia3_keypad_fun_pane_ParamLimits

0x950d,	// (0x00057948) dia3_keypad_fun_pane

0x9529,	// (0x00057964) dia3_keypad_num_pane_ParamLimits

0x9529,	// (0x00057964) dia3_keypad_num_pane

0x9542,	// (0x0005797d) dia3_listscroll_pane_ParamLimits

0x9542,	// (0x0005797d) dia3_listscroll_pane

0x9555,	// (0x00057990) dia3_numentry_pane_ParamLimits

0x9555,	// (0x00057990) dia3_numentry_pane

0xee9b,	// (0x0005d2d6) dia3_list_pane

0xeea6,	// (0x0005d2e1) scroll_pane_cp12

0x9a0a,	// (0x00057e45) bg_dia3_numentry_pane

0x9569,	// (0x000579a4) dia3_numentry_pane_t1

0x9578,	// (0x000579b3) cell_dia3_key_num_pane

0x9580,	// (0x000579bb) cell_dia3_key0_fun_pane_ParamLimits

0x9580,	// (0x000579bb) cell_dia3_key0_fun_pane

0x9594,	// (0x000579cf) cell_dia3_key1_fun_pane_ParamLimits

0x9594,	// (0x000579cf) cell_dia3_key1_fun_pane

0x95ac,	// (0x000579e7) dia3_listrow_pane

0xe11e,	// (0x0005c559) bg_dia3_numentry_pane_g1

0x9a0a,	// (0x00057e45) bg_button_pane_cp21

0xeeb1,	// (0x0005d2ec) cell_dia3_key_num_pane_t1

0xeebf,	// (0x0005d2fa) cell_dia3_key_num_pane_t2

0xeece,	// (0x0005d309) cell_dia3_key_num_pane_t3

0xeedd,	// (0x0005d318) cell_dia3_key_num_pane_t4

0x0003,

0xff06,	// (0x0005e341) cell_dia3_key_num_pane_t

0x9a0a,	// (0x00057e45) bg_button_pane_cp19

0x95be,	// (0x000579f9) cell_dia3_key0_fun_pane_g1

0x9a0a,	// (0x00057e45) bg_button_pane_cp20

0x95c6,	// (0x00057a01) cell_dia3_key1_fun_pane_g1

0x95ce,	// (0x00057a09) area_left_week_number_pane

0x95dc,	// (0x00057a17) area_top_day_name_pane

0x95ef,	// (0x00057a2a) frame_month_view_pane

0xeeec,	// (0x0005d327) grid_month_view_pane

0x9604,	// (0x00057a3f) cell_top_day_name_pane_ParamLimits

0x9604,	// (0x00057a3f) cell_top_day_name_pane

0x9633,	// (0x00057a6e) cell_area_left_week_number_pane_ParamLimits

0x9633,	// (0x00057a6e) cell_area_left_week_number_pane

0x9647,	// (0x00057a82) cell_month_view_pane_ParamLimits

0x9647,	// (0x00057a82) cell_month_view_pane

0xeefa,	// (0x0005d335) frm_month_g1

0x9676,	// (0x00057ab1) frm_month_g2

0x9689,	// (0x00057ac4) frm_month_g3

0x969c,	// (0x00057ad7) frm_month_g4

0x96af,	// (0x00057aea) frm_month_g5

0x96c2,	// (0x00057afd) frm_month_g6

0x96d5,	// (0x00057b10) frm_month_g7

0xef07,	// (0x0005d342) frm_month_g8

0x96ea,	// (0x00057b25) frm_month_g9

0x96fa,	// (0x00057b35) frm_month_g10

0x970a,	// (0x00057b45) frm_month_g11

0x971a,	// (0x00057b55) frm_month_g12

0x972c,	// (0x00057b67) frm_month_g13

0x9740,	// (0x00057b7b) frm_month_g14

0x9754,	// (0x00057b8f) frm_month_g15

0x9768,	// (0x00057ba3) frm_month_g16

0x000f,

0xff0f,	// (0x0005e34a) frm_month_g

0xef14,	// (0x0005d34f) cell_top_day_name_pane_t1

0x977c,	// (0x00057bb7) cell_area_left_week_number_pane_g1

0x9788,	// (0x00057bc3) cell_area_left_week_number_pane_t1

0xce83,	// (0x0005b2be) cell_month_view_pane_g1

0x979b,	// (0x00057bd6) cell_month_view_pane_t1

0x9a0a,	// (0x00057e45) main_fps_pane

0xe6d9,	// (0x0005cb14) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xe6d9,	// (0x0005cb14) cmail_ddmenu_btn02_pane_cp1

0xe6f5,	// (0x0005cb30) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xe6f5,	// (0x0005cb30) cmail_ddmenu_btn02_pane_cp2

0x8f0c,	// (0x00057347) cmail_ddmenu_btn02_pane_g2_ParamLimits

0x8f0c,	// (0x00057347) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfe34,	// (0x0005e26f) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfe34,	// (0x0005e26f) cmail_ddmenu_btn02_pane_g

0x8f2d,	// (0x00057368) cmail_ddmenu_btn02_pane_t2_ParamLimits

0x8f2d,	// (0x00057368) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfe39,	// (0x0005e274) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfe39,	// (0x0005e274) cmail_ddmenu_btn02_pane_t

0x97ae,	// (0x00057be9) fps_text_pane_ParamLimits

0x97ae,	// (0x00057be9) fps_text_pane

0x97c5,	// (0x00057c00) main_fps_pane_g1_ParamLimits

0x97c5,	// (0x00057c00) main_fps_pane_g1

0x97dd,	// (0x00057c18) wait_bar_pane_cp010_ParamLimits

0x97dd,	// (0x00057c18) wait_bar_pane_cp010

0x97f0,	// (0x00057c2b) fps_text_pane_t1_ParamLimits

0x97f0,	// (0x00057c2b) fps_text_pane_t1

0xe30a,	// (0x0005c745) cam4_image_uncrop_pane_g1

0xe313,	// (0x0005c74e) cam4_image_uncrop_pane_g2

0x67e0,	// (0x00054c1b) cam4_image_uncrop_pane_g3

0x67e9,	// (0x00054c24) cam4_image_uncrop_pane_g4

0x0003,

0xf8f5,	// (0x0005dd30) cam4_image_uncrop_pane_g

0x95ac,	// (0x000579e7) dia3_listrow_pane_ParamLimits

0x9a0a,	// (0x00057e45) main_phob2_pane

0x8993,	// (0x00056dce) cell_tport_appsw_pane_cp02_ParamLimits

0x8993,	// (0x00056dce) cell_tport_appsw_pane_cp02

0x89a7,	// (0x00056de2) cell_tport_appsw_pane_cp03_ParamLimits

0x89a7,	// (0x00056de2) cell_tport_appsw_pane_cp03

0x9a0a,	// (0x00057e45) phob2_contact_card_pane

0x9a0a,	// (0x00057e45) phob2_listscroll_pane

0xef27,	// (0x0005d362) phob2_list_pane

0xef2f,	// (0x0005d36a) scroll_pane_cp034

0x9808,	// (0x00057c43) phob2_cc_data_pane_ParamLimits

0x9808,	// (0x00057c43) phob2_cc_data_pane

0x9829,	// (0x00057c64) phob2_cc_listscroll_pane_ParamLimits

0x9829,	// (0x00057c64) phob2_cc_listscroll_pane

0x984b,	// (0x00057c86) list_double_large_graphic_phob2_pane_ParamLimits

0x984b,	// (0x00057c86) list_double_large_graphic_phob2_pane

0x985f,	// (0x00057c9a) list_double_large_graphic_phob2_pane_g1_ParamLimits

0x985f,	// (0x00057c9a) list_double_large_graphic_phob2_pane_g1

0x0a90,	// (0x0004eecb) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x0a90,	// (0x0004eecb) list_double_large_graphic_phob2_pane_g2

0x0001,

0xff30,	// (0x0005e36b) list_double_large_graphic_phob2_pane_g_ParamLimits

0xff30,	// (0x0005e36b) list_double_large_graphic_phob2_pane_g

0x0a9c,	// (0x0004eed7) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x0a9c,	// (0x0004eed7) list_double_large_graphic_phob2_pane_t1

0x0ab1,	// (0x0004eeec) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x0ab1,	// (0x0004eeec) list_double_large_graphic_phob2_pane_t2

0x0001,

0xff35,	// (0x0005e370) list_double_large_graphic_phob2_pane_t_ParamLimits

0xff35,	// (0x0005e370) list_double_large_graphic_phob2_pane_t

0x9a0a,	// (0x00057e45) list_highlight_pane_cp024

0x9875,	// (0x00057cb0) phob2_cc_button_pane

0x987d,	// (0x00057cb8) phob2_cc_data_pane_g1_ParamLimits

0x987d,	// (0x00057cb8) phob2_cc_data_pane_g1

0x9893,	// (0x00057cce) phob2_cc_data_pane_g2_ParamLimits

0x9893,	// (0x00057cce) phob2_cc_data_pane_g2

0x0001,

0xff3a,	// (0x0005e375) phob2_cc_data_pane_g_ParamLimits

0xff3a,	// (0x0005e375) phob2_cc_data_pane_g

0x98a3,	// (0x00057cde) phob2_cc_data_pane_t1_ParamLimits

0x98a3,	// (0x00057cde) phob2_cc_data_pane_t1

0x98bb,	// (0x00057cf6) phob2_cc_data_pane_t2_ParamLimits

0x98bb,	// (0x00057cf6) phob2_cc_data_pane_t2

0x98d5,	// (0x00057d10) phob2_cc_data_pane_t3_ParamLimits

0x98d5,	// (0x00057d10) phob2_cc_data_pane_t3

0x0002,

0xff3f,	// (0x0005e37a) phob2_cc_data_pane_t_ParamLimits

0xff3f,	// (0x0005e37a) phob2_cc_data_pane_t

0xef37,	// (0x0005d372) phob2_cc_list_pane_ParamLimits

0xef37,	// (0x0005d372) phob2_cc_list_pane

0xd931,	// (0x0005bd6c) scroll_pane_cp035_ParamLimits

0xd931,	// (0x0005bd6c) scroll_pane_cp035

0x9a63,	// (0x00057e9e) bg_button_pane_cp033

0xef43,	// (0x0005d37e) phob2_cc_button_pane_g1

0xef4f,	// (0x0005d38a) phob2_cc_button_pane_t1

0xef64,	// (0x0005d39f) phob2_cc_button_pane_t2

0x0001,

0xff46,	// (0x0005e381) phob2_cc_button_pane_t

0x98ef,	// (0x00057d2a) list_double_large_graphic_phob2_cc_pane_ParamLimits

0x98ef,	// (0x00057d2a) list_double_large_graphic_phob2_cc_pane

0x9903,	// (0x00057d3e) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0x9903,	// (0x00057d3e) list_double_large_graphic_phob2_cc_pane_g1

0x0ac3,	// (0x0004eefe) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x0ac3,	// (0x0004eefe) list_double_large_graphic_phob2_cc_pane_g2

0x0acf,	// (0x0004ef0a) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x0acf,	// (0x0004ef0a) list_double_large_graphic_phob2_cc_pane_g3

0x0adb,	// (0x0004ef16) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x0adb,	// (0x0004ef16) list_double_large_graphic_phob2_cc_pane_g4

0x0ae7,	// (0x0004ef22) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x0ae7,	// (0x0004ef22) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xff4b,	// (0x0005e386) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xff4b,	// (0x0005e386) list_double_large_graphic_phob2_cc_pane_g

0x0af3,	// (0x0004ef2e) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x0af3,	// (0x0004ef2e) list_double_large_graphic_phob2_cc_pane_t1

0x0b1c,	// (0x0004ef57) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x0b1c,	// (0x0004ef57) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xff56,	// (0x0005e391) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xff56,	// (0x0005e391) list_double_large_graphic_phob2_cc_pane_t

0xef76,	// (0x0005d3b1) list_highlight_pane_cp025_ParamLimits

0xef76,	// (0x0005d3b1) list_highlight_pane_cp025

0x9a63,	// (0x00057e9e) bg_button_pane_cp033_ParamLimits

0xef43,	// (0x0005d37e) phob2_cc_button_pane_g1_ParamLimits

0xef4f,	// (0x0005d38a) phob2_cc_button_pane_t1_ParamLimits

0xef64,	// (0x0005d39f) phob2_cc_button_pane_t2_ParamLimits

0xff46,	// (0x0005e381) phob2_cc_button_pane_t_ParamLimits

0x0d91,	// (0x0004f1cc) popup_wgtman_window

0xd759,	// (0x0005bb94) scroll_pane_cp038

0x935d,	// (0x00057798) wgtman_btn_pane_cp_01_ParamLimits

0x935d,	// (0x00057798) wgtman_btn_pane_cp_01

0xef84,	// (0x0005d3bf) wgtman_content_pane

0xef8d,	// (0x0005d3c8) wgtman_heading_pane

0x9a0a,	// (0x00057e45) bg_heading_pane_cp02

0xef96,	// (0x0005d3d1) wgtman_heading_pane_g1

0xef9e,	// (0x0005d3d9) wgtman_heading_pane_t1

0xefac,	// (0x0005d3e7) scroll_pane_cp036

0xefb4,	// (0x0005d3ef) wgtman_list_pane

0xefbc,	// (0x0005d3f7) wgtman_list_pane_t1_ParamLimits

0xefbc,	// (0x0005d3f7) wgtman_list_pane_t1

0xa9ec,	// (0x00058e27) cam4_grid_pane

0x005c,	// (0x0004e497) bg_button_pane_cp015_ParamLimits

0x747e,	// (0x000558b9) bg_button_pane_cp016_ParamLimits

0x7491,	// (0x000558cc) bg_button_pane_cp017_ParamLimits

0x00a4,	// (0x0004e4df) popup_vitu2_query_window_g3_ParamLimits

0x00a4,	// (0x0004e4df) popup_vitu2_query_window_g3

0x011f,	// (0x0004e55a) popup_vitu2_query_window_t6_ParamLimits

0x011f,	// (0x0004e55a) popup_vitu2_query_window_t6

0x014a,	// (0x0004e585) popup_vitu2_query_window_t7_ParamLimits

0x014a,	// (0x0004e585) popup_vitu2_query_window_t7

0xe30a,	// (0x0005c745) cam4_grid_pane_g1

0xe313,	// (0x0005c74e) cam4_grid_pane_g2

0xefd6,	// (0x0005d411) cam4_grid_pane_g3

0xefdf,	// (0x0005d41a) cam4_grid_pane_g4

0x0003,

0xff5b,	// (0x0005e396) cam4_grid_pane_g

0x1ea1,	// (0x000502dc) aid_placing_vt_slider_lsc_ParamLimits

0x218e,	// (0x000505c9) vidtel_button_pane_ParamLimits

0x218e,	// (0x000505c9) vidtel_button_pane

0xefea,	// (0x0005d425) bg_button_pane_cp034

0x990f,	// (0x00057d4a) vidtel_button_pane_g1

0xeff4,	// (0x0005d42f) vidtel_button_pane_t1

0xd878,	// (0x0005bcb3) aid_size_vtel_slider_touch

0xd931,	// (0x0005bd6c) scroll_pane_cp039

0xe15c,	// (0x0005c597) ncim_query_button_pane_cp01_ParamLimits

0xe17b,	// (0x0005c5b6) ncimui_query_pane_g1_ParamLimits

0x9a63,	// (0x00057e9e) input_focus_pane_cp012_ParamLimits

0xe1a0,	// (0x0005c5db) ncim_query_entry_pane_t1_ParamLimits

0xd931,	// (0x0005bd6c) scroll_pane_cp039_ParamLimits

0x334e,	// (0x00051789) navi_pane_bcale_mc_g1

0x3356,	// (0x00051791) navi_pane_bcale_mc_t1

0xe732,	// (0x0005cb6d) main_sp_fs_email_pane_g1

0xe73e,	// (0x0005cb79) main_sp_fs_email_pane_g2

0x0001,

0xfcec,	// (0x0005e127) main_sp_fs_email_pane_g

0xe9ba,	// (0x0005cdf5) list_single_cale_mrui_row_pane_g3_ParamLimits

0xe9ba,	// (0x0005cdf5) list_single_cale_mrui_row_pane_g3

0x09ff,	// (0x0004ee3a) list_single_recal_day_pane_g5_event_pane

0xabd1,	// (0x0005900c) list_single_recal_day_pane_g7

0xf002,	// (0x0005d43d) list_recal_day_event_pane_cp01

0xf00b,	// (0x0005d446) list_recal_vselct_arw_lo_pane_cp01

0xf013,	// (0x0005d44e) list_recal_vselct_arw_up_pane_cp01

0xf01b,	// (0x0005d456) list_recal_vselct_pane_cp01

0xd888,	// (0x0005bcc3) list_recal_day_event_pane_cp01_g1

0xac24,	// (0x0005905f) list_recal_day_event_pane_cp01_t1

0xabd9,	// (0x00059014) list_single_recal_day_pane_t1_ParamLimits

0xabeb,	// (0x00059026) list_single_recal_day_pane_t2_ParamLimits

0xfe49,	// (0x0005e284) list_single_recal_day_pane_t_ParamLimits

0xa0df,	// (0x0005851a) bg_notes_pane_ParamLimits

0xa18a,	// (0x000585c5) list_notes_pane_ParamLimits

0x10de,	// (0x0004f519) scroll_pane_cp06_ParamLimits

0xa1c6,	// (0x00058601) main_notes_pane_ParamLimits

0x9a0a,	// (0x00057e45) main_welc_pane

0x9917,	// (0x00057d52) main_welc_body_pane_ParamLimits

0x9917,	// (0x00057d52) main_welc_body_pane

0x9936,	// (0x00057d71) main_welc_opti_pane_ParamLimits

0x9936,	// (0x00057d71) main_welc_opti_pane

0x997f,	// (0x00057dba) main_welc_pane_t1_ParamLimits

0x997f,	// (0x00057dba) main_welc_pane_t1

0x99a1,	// (0x00057ddc) main_welc_body_row_pane_ParamLimits

0x99a1,	// (0x00057ddc) main_welc_body_row_pane

0x99b5,	// (0x00057df0) main_welc_opti_row_pane_ParamLimits

0x99b5,	// (0x00057df0) main_welc_opti_row_pane

0xf025,	// (0x0005d460) main_welc_opti_row_pane_g1

0xf02d,	// (0x0005d468) main_welc_opti_row_pane_t1

0xf03c,	// (0x0005d477) main_welc_body_row_pane_t1

0xed0d,	// (0x0005d148) popup_notif_wgt_heading_pane

0xed27,	// (0x0005d162) aid_size_list_notif_wgt_del_ParamLimits

0xed34,	// (0x0005d16f) list_notif_wgt_row_pane_g1_ParamLimits

0xed40,	// (0x0005d17b) list_notif_wgt_row_pane_g2_ParamLimits

0xed4c,	// (0x0005d187) list_notif_wgt_row_pane_g3_ParamLimits

0xfeb0,	// (0x0005e2eb) list_notif_wgt_row_pane_g_ParamLimits

0xed59,	// (0x0005d194) list_notif_wgt_row_pane_t1_ParamLimits

0xed6e,	// (0x0005d1a9) list_notif_wgt_row_pane_t2_ParamLimits

0xed80,	// (0x0005d1bb) list_notif_wgt_row_pane_t3_ParamLimits

0xfeb7,	// (0x0005e2f2) list_notif_wgt_row_pane_t_ParamLimits

0x93e4,	// (0x0005781f) listrow_wgtman_pane_g1_ParamLimits

0x93f1,	// (0x0005782c) listrow_wgtman_pane_g2_ParamLimits

0xfee0,	// (0x0005e31b) listrow_wgtman_pane_g_ParamLimits

0x0a40,	// (0x0004ee7b) listrow_wgtman_pane_t1_ParamLimits

0x0a58,	// (0x0004ee93) listrow_wgtman_pane_t2_ParamLimits

0xfee5,	// (0x0005e320) listrow_wgtman_pane_t_ParamLimits

0x0a7e,	// (0x0004eeb9) wait_bar_pane_cp09_ParamLimits

0x9a0a,	// (0x00057e45) bg_popup_heading_pane_cp02

0xf04b,	// (0x0005d486) popup_notif_wgt_heading_pane_g1

0xf053,	// (0x0005d48e) popup_notif_wgt_heading_pane_t1

0x9a0a,	// (0x00057e45) main_vids_pane

0x9a0a,	// (0x00057e45) vids_listscroll_pane

0x99c5,	// (0x00057e00) scroll_pane_cp040

0x9a0a,	// (0x00057e45) vids_list_pane

0x99d0,	// (0x00057e0b) vids_list_double_pane_ParamLimits

0x99d0,	// (0x00057e0b) vids_list_double_pane

0x99e1,	// (0x00057e1c) vids_list_double_pane_g1

0x99ea,	// (0x00057e25) vids_list_double_pane_t1

0x99fa,	// (0x00057e35) vids_list_double_pane_t2

0x0001,

0xff69,	// (0x0005e3a4) vids_list_double_pane_t

0x9a63,	// (0x00057e9e) main_ncimui_pane_ParamLimits

0x801b,	// (0x00056456) main_ncimui_pane_g1_ParamLimits

0x8027,	// (0x00056462) main_ncimui_pane_g2_ParamLimits

0x8027,	// (0x00056462) main_ncimui_pane_g2

0x0001,

0xfbf1,	// (0x0005e02c) main_ncimui_pane_g_ParamLimits

0xfbf1,	// (0x0005e02c) main_ncimui_pane_g

0x9955,	// (0x00057d90) main_welc_pane_g1_ParamLimits

0x9955,	// (0x00057d90) main_welc_pane_g1

0x996a,	// (0x00057da5) main_welc_pane_g2_ParamLimits

0x996a,	// (0x00057da5) main_welc_pane_g2

0x0001,

0xff64,	// (0x0005e39f) main_welc_pane_g_ParamLimits

0xff64,	// (0x0005e39f) main_welc_pane_g

0xa0df,	// (0x0005851a) listscroll_mce_pane_ParamLimits

0x342e,	// (0x00051869) wait_bar_pane_cp10

0xc7f6,	// (0x0005ac31) main_cale_day_pane_ParamLimits

0xc7f6,	// (0x0005ac31) main_cale_week_pane_ParamLimits

0xa0df,	// (0x0005851a) main_messa_pane_ParamLimits

0x5a9e,	// (0x00053ed9) main_clock2_btn_pane_ParamLimits

0x5a9e,	// (0x00053ed9) main_clock2_btn_pane

0xd00b,	// (0x0005b446) main_clock2_btn_pane_cp01_ParamLimits

0xd00b,	// (0x0005b446) main_clock2_btn_pane_cp01

0xe98b,	// (0x0005cdc6) list_cale_mrui_pane_ParamLimits

0xedc4,	// (0x0005d1ff) main_cf0_pane_g2

0x0001,

0xfebe,	// (0x0005e2f9) main_cf0_pane_g

0x95ce,	// (0x00057a09) area_left_week_number_pane_ParamLimits

0x95dc,	// (0x00057a17) area_top_day_name_pane_ParamLimits

0x95ef,	// (0x00057a2a) frame_month_view_pane_ParamLimits

0xeeec,	// (0x0005d327) grid_month_view_pane_ParamLimits

0xeefa,	// (0x0005d335) frm_month_g1_ParamLimits

0x9676,	// (0x00057ab1) frm_month_g2_ParamLimits

0x9689,	// (0x00057ac4) frm_month_g3_ParamLimits

0x969c,	// (0x00057ad7) frm_month_g4_ParamLimits

0x96af,	// (0x00057aea) frm_month_g5_ParamLimits

0x96c2,	// (0x00057afd) frm_month_g6_ParamLimits

0x96d5,	// (0x00057b10) frm_month_g7_ParamLimits

0xef07,	// (0x0005d342) frm_month_g8_ParamLimits

0x96ea,	// (0x00057b25) frm_month_g9_ParamLimits

0x96fa,	// (0x00057b35) frm_month_g10_ParamLimits

0x970a,	// (0x00057b45) frm_month_g11_ParamLimits

0x971a,	// (0x00057b55) frm_month_g12_ParamLimits

0x972c,	// (0x00057b67) frm_month_g13_ParamLimits

0x9740,	// (0x00057b7b) frm_month_g14_ParamLimits

0x9754,	// (0x00057b8f) frm_month_g15_ParamLimits

0x9768,	// (0x00057ba3) frm_month_g16_ParamLimits

0xff0f,	// (0x0005e34a) frm_month_g_ParamLimits

0xef14,	// (0x0005d34f) cell_top_day_name_pane_t1_ParamLimits

0x977c,	// (0x00057bb7) cell_area_left_week_number_pane_g1_ParamLimits

0x9788,	// (0x00057bc3) cell_area_left_week_number_pane_t1_ParamLimits

0xce83,	// (0x0005b2be) cell_month_view_pane_g1_ParamLimits

0x979b,	// (0x00057bd6) cell_month_view_pane_t1_ParamLimits

0xa0d7,	// (0x00058512) main_clock2_btn_pane_g1

0xf061,	// (0x0005d49c) main_clock2_btn_pane_t1

0x9a63,	// (0x00057e9e) listscroll_cmail_pane_ParamLimits

0xe732,	// (0x0005cb6d) main_sp_fs_email_pane_g1_ParamLimits

0xe73e,	// (0x0005cb79) main_sp_fs_email_pane_g2_ParamLimits

0xfcec,	// (0x0005e127) main_sp_fs_email_pane_g_ParamLimits

0xea97,	// (0x0005ced2) list_recal_day_pane_ParamLimits

0xeaa8,	// (0x0005cee3) mian_recal_day_pane_t1

0x05c6,	// (0x0004ea01) list_single_dyc_row_text_pane_t4_ParamLimits

0x05c6,	// (0x0004ea01) list_single_dyc_row_text_pane_t4

0x060f,	// (0x0004ea4a) list_single_dyc_row_text_pane_t5_ParamLimits

0x060f,	// (0x0004ea4a) list_single_dyc_row_text_pane_t5

0x8876,	// (0x00056cb1) list_single_dyc_row_text_pane_t6_ParamLimits

0x8876,	// (0x00056cb1) list_single_dyc_row_text_pane_t6

0xae8e,	// (0x000592c9) aid_mgn_list_cale_time_pane

0x9a63,	// (0x00057e9e) main_gallery2_pane_ParamLimits
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
	};

} // end of namespace AknLayoutScalable_Elaf_pvl4_apps_vga4_lsc_tch_Small
