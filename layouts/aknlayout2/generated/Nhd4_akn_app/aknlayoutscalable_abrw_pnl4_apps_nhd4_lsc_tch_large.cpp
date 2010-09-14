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
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pnp4_apps_nhd4_prt_tch + 0x00089bf4 };

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
0x3285,	// (0x0008ce79) Screen

0x3291,	// (0x0008ce85) application_window

0x32cd,	// (0x0008cec1) area_bottom_pane_ParamLimits

0x32cd,	// (0x0008cec1) area_bottom_pane

0x3306,	// (0x0008cefa) area_top_pane_ParamLimits

0x3306,	// (0x0008cefa) area_top_pane

0xc1cd,	// (0x00095dc1) call_video_uplink_pane_ParamLimits

0xc1cd,	// (0x00095dc1) call_video_uplink_pane

0x3394,	// (0x0008cf88) main_pane_ParamLimits

0x3394,	// (0x0008cf88) main_pane

0xd1ba,	// (0x00096dae) context_pane

0x6cbb,	// (0x000908af) navi_pane

0x6ced,	// (0x000908e1) popup_cale_events_window_ParamLimits

0x6ced,	// (0x000908e1) popup_cale_events_window

0xd1cd,	// (0x00096dc1) popup_mup_playback_window

0x6d05,	// (0x000908f9) signal_pane

0x0812,	// (0x0008a406) main_browser_pane

0x09c4,	// (0x0008a5b8) main_burst_pane

0x6a11,	// (0x00090605) main_calc_pane

0xd15a,	// (0x00096d4e) main_cale_day_pane

0x6a25,	// (0x00090619) main_cale_month_pane

0xd15a,	// (0x00096d4e) main_cale_week_pane

0x09c4,	// (0x0008a5b8) main_call_pane

0x04bc,	// (0x0008a0b0) main_call_poc_pane

0x09c4,	// (0x0008a5b8) main_camera_pane

0x09c4,	// (0x0008a5b8) main_chi_dic_pane

0x533a,	// (0x0008ef2e) main_clock_pane

0x04bc,	// (0x0008a0b0) main_fmradio_pane

0x09c4,	// (0x0008a5b8) main_graph_messa_pane

0x04bc,	// (0x0008a0b0) main_help_pane

0x0812,	// (0x0008a406) main_im_pane

0x0717,	// (0x0008a30b) main_image_pane_ParamLimits

0x0717,	// (0x0008a30b) main_image_pane

0x04bc,	// (0x0008a0b0) main_location2_pane

0x09c4,	// (0x0008a5b8) main_location_pane

0x0717,	// (0x0008a30b) main_messa_pane

0x04bc,	// (0x0008a0b0) main_mp2_pane

0x09c4,	// (0x0008a5b8) main_mp_pane

0x04bc,	// (0x0008a0b0) main_msg_pane

0x04bc,	// (0x0008a0b0) main_mup_eq_pane

0x04bc,	// (0x0008a0b0) main_mup_pane

0x0812,	// (0x0008a406) main_notes_pane

0x04bc,	// (0x0008a0b0) main_pec_pane

0x04bc,	// (0x0008a0b0) main_phob_pane

0x04bc,	// (0x0008a0b0) main_pinb_pane

0x04bc,	// (0x0008a0b0) main_postcard_pane

0x04bc,	// (0x0008a0b0) main_qdial_pane

0x09c4,	// (0x0008a5b8) main_skin_pane

0x04bc,	// (0x0008a0b0) main_smil2_pane

0x09c4,	// (0x0008a5b8) main_smil_pane

0x09c4,	// (0x0008a5b8) main_video_pane

0x09c4,	// (0x0008a5b8) main_video_tele_pane

0x0717,	// (0x0008a30b) main_viewer_pane_ParamLimits

0x0717,	// (0x0008a30b) main_viewer_pane

0x09c4,	// (0x0008a5b8) main_vorec_pane

0x6a77,	// (0x0009066b) popup_blid_sat_info_window_ParamLimits

0x6a77,	// (0x0009066b) popup_blid_sat_info_window

0x6acf,	// (0x000906c3) popup_dyc_status_message_window_ParamLimits

0x6acf,	// (0x000906c3) popup_dyc_status_message_window

0x6ae7,	// (0x000906db) popup_grid_large_graphic_window_ParamLimits

0x6ae7,	// (0x000906db) popup_grid_large_graphic_window

0x6b97,	// (0x0009078b) popup_loc_request_window_ParamLimits

0x6b97,	// (0x0009078b) popup_loc_request_window

0x6c93,	// (0x00090887) popup_wml_address_window_ParamLimits

0x6c93,	// (0x00090887) popup_wml_address_window

0x684b,	// (0x0009043f) call_muted_g1

0x6353,	// (0x0008ff47) popup_call_audio_conf_window_ParamLimits

0x6353,	// (0x0008ff47) popup_call_audio_conf_window

0x685f,	// (0x00090453) popup_call_audio_first_window_ParamLimits

0x685f,	// (0x00090453) popup_call_audio_first_window

0x68d5,	// (0x000904c9) popup_call_audio_in_window_ParamLimits

0x68d5,	// (0x000904c9) popup_call_audio_in_window

0x6911,	// (0x00090505) popup_call_audio_out_window_ParamLimits

0x6911,	// (0x00090505) popup_call_audio_out_window

0x694b,	// (0x0009053f) popup_call_audio_second_window_ParamLimits

0x694b,	// (0x0009053f) popup_call_audio_second_window

0x69a1,	// (0x00090595) popup_call_audio_wait_window_ParamLimits

0x69a1,	// (0x00090595) popup_call_audio_wait_window

0x69d6,	// (0x000905ca) popup_number_entry_window_ParamLimits

0x69d6,	// (0x000905ca) popup_number_entry_window

0x00a9,	// (0x00089c9d) bg_popup_call_pane_cp05_ParamLimits

0x00a9,	// (0x00089c9d) bg_popup_call_pane_cp05

0x00c9,	// (0x00089cbd) popup_number_entry_window_t1

0x00dc,	// (0x00089cd0) popup_number_entry_window_t2

0x00ee,	// (0x00089ce2) popup_number_entry_window_t3

0x0003,

0xf06b,	// (0x00098c5f) popup_number_entry_window_t

0x0100,	// (0x00089cf4) text_title_cp2

0x0113,	// (0x00089d07) bg_popup_call_pane_cp_ParamLimits

0x0113,	// (0x00089d07) bg_popup_call_pane_cp

0x0121,	// (0x00089d15) call_thumbnail_pane

0x0129,	// (0x00089d1d) popup_call_audio_in_window_g1_ParamLimits

0x0129,	// (0x00089d1d) popup_call_audio_in_window_g1

0x0135,	// (0x00089d29) popup_call_audio_in_window_g2_ParamLimits

0x0135,	// (0x00089d29) popup_call_audio_in_window_g2

0x0141,	// (0x00089d35) popup_call_audio_in_window_g3_ParamLimits

0x0141,	// (0x00089d35) popup_call_audio_in_window_g3

0x0002,

0xf074,	// (0x00098c68) popup_call_audio_in_window_g_ParamLimits

0xf074,	// (0x00098c68) popup_call_audio_in_window_g

0x014d,	// (0x00089d41) popup_call_audio_in_window_t1_ParamLimits

0x014d,	// (0x00089d41) popup_call_audio_in_window_t1

0x0169,	// (0x00089d5d) popup_call_audio_in_window_t2_ParamLimits

0x0169,	// (0x00089d5d) popup_call_audio_in_window_t2

0x0185,	// (0x00089d79) popup_call_audio_in_window_t3_ParamLimits

0x0185,	// (0x00089d79) popup_call_audio_in_window_t3

0x0002,

0xf07b,	// (0x00098c6f) popup_call_audio_in_window_t_ParamLimits

0xf07b,	// (0x00098c6f) popup_call_audio_in_window_t

0x0113,	// (0x00089d07) bg_popup_call_pane_cp01_ParamLimits

0x0113,	// (0x00089d07) bg_popup_call_pane_cp01

0x0121,	// (0x00089d15) call_thumbnail_pane_cp02

0x0198,	// (0x00089d8c) call_type_pane_cp022

0x01a0,	// (0x00089d94) popup_call_audio_out_window_g1_ParamLimits

0x01a0,	// (0x00089d94) popup_call_audio_out_window_g1

0x01b2,	// (0x00089da6) popup_call_audio_out_window_g2_ParamLimits

0x01b2,	// (0x00089da6) popup_call_audio_out_window_g2

0x01be,	// (0x00089db2) popup_call_audio_out_window_g3_ParamLimits

0x01be,	// (0x00089db2) popup_call_audio_out_window_g3

0x0002,

0xf082,	// (0x00098c76) popup_call_audio_out_window_g_ParamLimits

0xf082,	// (0x00098c76) popup_call_audio_out_window_g

0x01d0,	// (0x00089dc4) popup_call_audio_out_window_t1_ParamLimits

0x01d0,	// (0x00089dc4) popup_call_audio_out_window_t1

0x01e8,	// (0x00089ddc) popup_call_audio_out_window_t2_ParamLimits

0x01e8,	// (0x00089ddc) popup_call_audio_out_window_t2

0x0001,

0xf089,	// (0x00098c7d) popup_call_audio_out_window_t_ParamLimits

0xf089,	// (0x00098c7d) popup_call_audio_out_window_t

0x01fd,	// (0x00089df1) bg_popup_call_pane_ParamLimits

0x01fd,	// (0x00089df1) bg_popup_call_pane

0x3551,	// (0x0008d145) call_thumbnail_pane_cp_ParamLimits

0x3551,	// (0x0008d145) call_thumbnail_pane_cp

0x0281,	// (0x00089e75) call_type_pane_cp01_ParamLimits

0x0281,	// (0x00089e75) call_type_pane_cp01

0x02c5,	// (0x00089eb9) popup_call_audio_first_window_g1_ParamLimits

0x02c5,	// (0x00089eb9) popup_call_audio_first_window_g1

0x0311,	// (0x00089f05) popup_call_audio_first_window_g2_ParamLimits

0x0311,	// (0x00089f05) popup_call_audio_first_window_g2

0x0001,

0xf08e,	// (0x00098c82) popup_call_audio_first_window_g_ParamLimits

0xf08e,	// (0x00098c82) popup_call_audio_first_window_g

0x0355,	// (0x00089f49) popup_call_audio_first_window_t1_ParamLimits

0x0355,	// (0x00089f49) popup_call_audio_first_window_t1

0x0401,	// (0x00089ff5) popup_call_audio_first_window_t4_ParamLimits

0x0401,	// (0x00089ff5) popup_call_audio_first_window_t4

0x048d,	// (0x0008a081) popup_call_audio_first_window_t5_ParamLimits

0x048d,	// (0x0008a081) popup_call_audio_first_window_t5

0x0002,

0xf093,	// (0x00098c87) popup_call_audio_first_window_t_ParamLimits

0xf093,	// (0x00098c87) popup_call_audio_first_window_t

0x04bc,	// (0x0008a0b0) bg_popup_call_pane_cp02

0x04c6,	// (0x0008a0ba) call_type_pane_cp023

0x04ce,	// (0x0008a0c2) popup_call_audio_wait_window_g1

0x04d6,	// (0x0008a0ca) popup_call_audio_wait_window_g2

0x0001,

0xf09a,	// (0x00098c8e) popup_call_audio_wait_window_g

0x04de,	// (0x0008a0d2) popup_call_audio_wait_window_t3

0x04ec,	// (0x0008a0e0) bg_popup_call_pane_cp03_ParamLimits

0x04ec,	// (0x0008a0e0) bg_popup_call_pane_cp03

0x054c,	// (0x0008a140) call_thumbnail_pane_cp011_ParamLimits

0x054c,	// (0x0008a140) call_thumbnail_pane_cp011

0x0558,	// (0x0008a14c) call_type_pane_cp034_ParamLimits

0x0558,	// (0x0008a14c) call_type_pane_cp034

0x0594,	// (0x0008a188) popup_call_audio_second_window_g1_ParamLimits

0x0594,	// (0x0008a188) popup_call_audio_second_window_g1

0x05d0,	// (0x0008a1c4) popup_call_audio_second_window_g2_ParamLimits

0x05d0,	// (0x0008a1c4) popup_call_audio_second_window_g2

0x0001,

0xf09f,	// (0x00098c93) popup_call_audio_second_window_g_ParamLimits

0xf09f,	// (0x00098c93) popup_call_audio_second_window_g

0x060c,	// (0x0008a200) popup_call_audio_second_window_t1_ParamLimits

0x060c,	// (0x0008a200) popup_call_audio_second_window_t1

0x068d,	// (0x0008a281) popup_call_audio_second_window_t2_ParamLimits

0x068d,	// (0x0008a281) popup_call_audio_second_window_t2

0x06c3,	// (0x0008a2b7) popup_call_audio_second_window_t3_ParamLimits

0x06c3,	// (0x0008a2b7) popup_call_audio_second_window_t3

0x0002,

0xf0a4,	// (0x00098c98) popup_call_audio_second_window_t_ParamLimits

0xf0a4,	// (0x00098c98) popup_call_audio_second_window_t

0x04bc,	// (0x0008a0b0) bg_popup_call_pane_cp04

0x06f9,	// (0x0008a2ed) list_conf_pane

0x0701,	// (0x0008a2f5) popup_call_audio_conf_window_t1

0x070f,	// (0x0008a303) call_thumbnail_pane_g1

0x0717,	// (0x0008a30b) bg_pinb_pane_ParamLimits

0x0717,	// (0x0008a30b) bg_pinb_pane

0x0725,	// (0x0008a319) find_pinb_pane

0x0717,	// (0x0008a30b) listscroll_pinb_pane_ParamLimits

0x0717,	// (0x0008a30b) listscroll_pinb_pane

0x072f,	// (0x0008a323) pinb_bg_pane_g1

0x072f,	// (0x0008a323) pinb_bg_pane_g2

0x072f,	// (0x0008a323) pinb_bg_pane_g3

0x072f,	// (0x0008a323) pinb_bg_pane_g4

0x072f,	// (0x0008a323) pinb_bg_pane_g5

0x072f,	// (0x0008a323) pinb_bg_pane_g6

0x072f,	// (0x0008a323) pinb_bg_pane_g7

0x072f,	// (0x0008a323) pinb_bg_pane_g8

0x072f,	// (0x0008a323) pinb_bg_pane_g9

0x072f,	// (0x0008a323) pinb_bg_pane_g10

0x0009,

0xf0ab,	// (0x00098c9f) pinb_bg_pane_g

0x009f,	// (0x00089c93) grid_pinb_pane

0x009f,	// (0x00089c93) list_pinb_pane

0x0739,	// (0x0008a32d) scroll_pane_cp01_ParamLimits

0x0739,	// (0x0008a32d) scroll_pane_cp01

0x0747,	// (0x0008a33b) find_pinb_pane_g1_ParamLimits

0x0747,	// (0x0008a33b) find_pinb_pane_g1

0x075f,	// (0x0008a353) find_pinb_pane_t1

0x0771,	// (0x0008a365) find_pinb_pane_t2

0x0001,

0xf0c5,	// (0x00098cb9) find_pinb_pane_t

0x0786,	// (0x0008a37a) input_focus_pane_cp01_ParamLimits

0x0786,	// (0x0008a37a) input_focus_pane_cp01

0x0792,	// (0x0008a386) cell_pinb_pane_ParamLimits

0x0792,	// (0x0008a386) cell_pinb_pane

0x07a0,	// (0x0008a394) cell_pinb_pane_g1_ParamLimits

0x07a0,	// (0x0008a394) cell_pinb_pane_g1

0x07ae,	// (0x0008a3a2) cell_pinb_pane_g2_ParamLimits

0x07ae,	// (0x0008a3a2) cell_pinb_pane_g2

0x07ae,	// (0x0008a3a2) cell_pinb_pane_g3_ParamLimits

0x07ae,	// (0x0008a3a2) cell_pinb_pane_g3

0x0002,

0xf0ca,	// (0x00098cbe) cell_pinb_pane_g_ParamLimits

0xf0ca,	// (0x00098cbe) cell_pinb_pane_g

0x04bc,	// (0x0008a0b0) grid_highlight_pane_cp01

0x0792,	// (0x0008a386) list_pinb_item_pane_ParamLimits

0x0792,	// (0x0008a386) list_pinb_item_pane

0x009f,	// (0x00089c93) list_highlight_pane_cp02

0x07bc,	// (0x0008a3b0) list_pinb_item_pane_g1_ParamLimits

0x07bc,	// (0x0008a3b0) list_pinb_item_pane_g1

0x07ae,	// (0x0008a3a2) list_pinb_item_pane_g2_ParamLimits

0x07ae,	// (0x0008a3a2) list_pinb_item_pane_g2

0x07a0,	// (0x0008a394) list_pinb_item_pane_g3_ParamLimits

0x07a0,	// (0x0008a394) list_pinb_item_pane_g3

0x07ae,	// (0x0008a3a2) list_pinb_item_pane_g4_ParamLimits

0x07ae,	// (0x0008a3a2) list_pinb_item_pane_g4

0x0003,

0xf0d1,	// (0x00098cc5) list_pinb_item_pane_g_ParamLimits

0xf0d1,	// (0x00098cc5) list_pinb_item_pane_g

0x07ca,	// (0x0008a3be) list_pinb_item_pane_t1_ParamLimits

0x07ca,	// (0x0008a3be) list_pinb_item_pane_t1

0x3593,	// (0x0008d187) calc_display_pane

0x35b8,	// (0x0008d1ac) calc_paper_pane

0x35db,	// (0x0008d1cf) grid_calc_pane

0x04bc,	// (0x0008a0b0) bg_list_pane_cp01

0x3609,	// (0x0008d1fd) clock_g1

0x3611,	// (0x0008d205) clock_g2

0x0001,

0xf0da,	// (0x00098cce) clock_g

0x3619,	// (0x0008d20d) clock_t1_ParamLimits

0x3619,	// (0x0008d20d) clock_t1

0x362e,	// (0x0008d222) clock_t2_ParamLimits

0x362e,	// (0x0008d222) clock_t2

0x3640,	// (0x0008d234) clock_t3_ParamLimits

0x3640,	// (0x0008d234) clock_t3

0x3652,	// (0x0008d246) clock_t4_ParamLimits

0x3652,	// (0x0008d246) clock_t4

0x3664,	// (0x0008d258) clock_t5_ParamLimits

0x3664,	// (0x0008d258) clock_t5

0x3679,	// (0x0008d26d) clock_t6_ParamLimits

0x3679,	// (0x0008d26d) clock_t6

0x368b,	// (0x0008d27f) clock_t7_ParamLimits

0x368b,	// (0x0008d27f) clock_t7

0x369d,	// (0x0008d291) clock_t8_ParamLimits

0x369d,	// (0x0008d291) clock_t8

0x36b1,	// (0x0008d2a5) clock_t9_ParamLimits

0x36b1,	// (0x0008d2a5) clock_t9

0x0008,

0xf0df,	// (0x00098cd3) clock_t_ParamLimits

0xf0df,	// (0x00098cd3) clock_t

0x07de,	// (0x0008a3d2) popup_clock_analogue_window_cp02

0x07de,	// (0x0008a3d2) popup_clock_digital_window_cp01

0x04bc,	// (0x0008a0b0) listscroll_help_pane

0x04bc,	// (0x0008a0b0) phob_pre_status_pane

0x07e6,	// (0x0008a3da) grid_qdial_pane

0x36c5,	// (0x0008d2b9) listscroll_mce_pane

0x0717,	// (0x0008a30b) bg_notes_pane

0x07f0,	// (0x0008a3e4) list_notes_pane

0x36df,	// (0x0008d2d3) scroll_pane_cp06

0x07fe,	// (0x0008a3f2) bg_calc_paper_pane

0xc20b,	// (0x00095dff) list_calc_pane

0x0812,	// (0x0008a406) bg_calc_display_pane

0x36f3,	// (0x0008d2e7) calc_display_pane_t1

0x3705,	// (0x0008d2f9) calc_display_pane_t2

0xc225,	// (0x00095e19) calc_display_pane_t3

0x0002,

0xf0f2,	// (0x00098ce6) calc_display_pane_t

0x3717,	// (0x0008d30b) cell_calc_pane_ParamLimits

0x3717,	// (0x0008d30b) cell_calc_pane

0x081e,	// (0x0008a412) bg_calc_paper_pane_g1

0x082a,	// (0x0008a41e) bg_calc_paper_pane_g2

0x0836,	// (0x0008a42a) bg_calc_paper_pane_g3

0x0842,	// (0x0008a436) bg_calc_paper_pane_g4

0x084e,	// (0x0008a442) bg_calc_paper_pane_g5

0x374c,	// (0x0008d340) bg_calc_paper_pane_g6

0x375b,	// (0x0008d34f) bg_calc_paper_pane_g7

0x376a,	// (0x0008d35e) bg_calc_paper_pane_g8

0x0007,

0xf0f9,	// (0x00098ced) bg_calc_paper_pane_g

0x377d,	// (0x0008d371) calc_bg_paper_pane_g9

0x3790,	// (0x0008d384) list_calc_item_pane_ParamLimits

0x3790,	// (0x0008d384) list_calc_item_pane

0x085a,	// (0x0008a44e) list_calc_item_pane_g1

0xc237,	// (0x00095e2b) list_calc_item_pane_t1_ParamLimits

0xc237,	// (0x00095e2b) list_calc_item_pane_t1

0x37a5,	// (0x0008d399) list_calc_item_pane_t2_ParamLimits

0x37a5,	// (0x0008d399) list_calc_item_pane_t2

0x0001,

0xf10a,	// (0x00098cfe) list_calc_item_pane_t_ParamLimits

0xf10a,	// (0x00098cfe) list_calc_item_pane_t

0x072f,	// (0x0008a323) cell_calc_pane_g1

0x0867,	// (0x0008a45b) grid_highlight_pane_cp02

0x1118,	// (0x0008ad0c) bg_calc_display_pane_g1

0x37d7,	// (0x0008d3cb) bg_calc_display_pane_g2

0xc249,	// (0x00095e3d) bg_calc_display_pane_g3

0x0002,

0xf114,	// (0x00098d08) bg_calc_display_pane_g

0x37e1,	// (0x0008d3d5) cell_qdial_pane_ParamLimits

0x37e1,	// (0x0008d3d5) cell_qdial_pane

0x37f5,	// (0x0008d3e9) cell_qdial_pane_g1_ParamLimits

0x37f5,	// (0x0008d3e9) cell_qdial_pane_g1

0x380b,	// (0x0008d3ff) cell_qdial_pane_g2_ParamLimits

0x380b,	// (0x0008d3ff) cell_qdial_pane_g2

0x0889,	// (0x0008a47d) cell_qdial_pane_g3_ParamLimits

0x0889,	// (0x0008a47d) cell_qdial_pane_g3

0x0003,

0xf11b,	// (0x00098d0f) cell_qdial_pane_g_ParamLimits

0xf11b,	// (0x00098d0f) cell_qdial_pane_g

0x3831,	// (0x0008d425) cell_qdial_pane_t1_ParamLimits

0x3831,	// (0x0008d425) cell_qdial_pane_t1

0x3849,	// (0x0008d43d) cell_qdial_pane_t2_ParamLimits

0x3849,	// (0x0008d43d) cell_qdial_pane_t2

0x385c,	// (0x0008d450) cell_qdial_pane_t3_ParamLimits

0x385c,	// (0x0008d450) cell_qdial_pane_t3

0x0002,

0xf124,	// (0x00098d18) cell_qdial_pane_t_ParamLimits

0xf124,	// (0x00098d18) cell_qdial_pane_t

0x04bc,	// (0x0008a0b0) grid_highlight_pane_cp04

0x0895,	// (0x0008a489) thumbnail_qdial_pane_ParamLimits

0x0895,	// (0x0008a489) thumbnail_qdial_pane

0x08f1,	// (0x0008a4e5) list_help_pane

0x08fa,	// (0x0008a4ee) scroll_pane_cp02

0x386f,	// (0x0008d463) help_list_pane_t1_ParamLimits

0x386f,	// (0x0008d463) help_list_pane_t1

0xc252,	// (0x00095e46) bg_notes_pane_g2

0xc25a,	// (0x00095e4e) bg_notes_pane_g3

0xc262,	// (0x00095e56) notes_bg_pane_g1

0xc26a,	// (0x00095e5e) notes_bg_pane_g4

0xc272,	// (0x00095e66) notes_bg_pane_g5

0xc27a,	// (0x00095e6e) notes_bg_pane_g6

0xc282,	// (0x00095e76) notes_bg_pane_g7

0xc28a,	// (0x00095e7e) notes_bg_pane_g8

0xc292,	// (0x00095e86) notes_bg_pane_g9

0x0006,

0xf142,	// (0x00098d36) notes_bg_pane_g

0x388e,	// (0x0008d482) list_notes_text_pane_ParamLimits

0x388e,	// (0x0008d482) list_notes_text_pane

0x0903,	// (0x0008a4f7) list_notes_text_pane_g1

0x38a4,	// (0x0008d498) list_notes_text_pane_t1

0x38b2,	// (0x0008d4a6) listscroll_cale_week_pane

0x38de,	// (0x0008d4d2) bg_cale_heading_pane

0x0926,	// (0x0008a51a) bg_cale_pane_cp01

0x38f6,	// (0x0008d4ea) cale_week_corner_pane

0x3915,	// (0x0008d509) cale_week_day_heading_pane

0x3932,	// (0x0008d526) cale_week_scroll_pane_g1

0x3945,	// (0x0008d539) cale_week_scroll_pane_g2

0x395d,	// (0x0008d551) cale_week_scroll_pane_g3

0x3975,	// (0x0008d569) cale_week_scroll_pane_g4

0x398d,	// (0x0008d581) cale_week_scroll_pane_g5

0x39ad,	// (0x0008d5a1) cale_week_scroll_pane_g6

0x39cd,	// (0x0008d5c1) cale_week_scroll_pane_g7

0x39ed,	// (0x0008d5e1) cale_week_scroll_pane_g8

0x3a11,	// (0x0008d605) cale_week_scroll_pane_g9

0x3a29,	// (0x0008d61d) cale_week_scroll_pane_g10

0x3a41,	// (0x0008d635) cale_week_scroll_pane_g11

0x3a59,	// (0x0008d64d) cale_week_scroll_pane_g12

0x3a71,	// (0x0008d665) cale_week_scroll_pane_g13

0x3a71,	// (0x0008d665) cale_week_scroll_pane_g14

0x3a71,	// (0x0008d665) cale_week_scroll_pane_g15

0x000f,

0xf151,	// (0x00098d45) cale_week_scroll_pane_g

0x3aad,	// (0x0008d6a1) cale_week_time_pane

0x3ad1,	// (0x0008d6c5) grid_cale_week_pane

0x0955,	// (0x0008a549) scroll_pane_cp08

0x3af7,	// (0x0008d6eb) cell_cale_week_pane_ParamLimits

0x3af7,	// (0x0008d6eb) cell_cale_week_pane

0x3b85,	// (0x0008d779) cale_week_day_heading_pane_t1

0x3baf,	// (0x0008d7a3) cale_week_day_heading_pane_t2

0x3bde,	// (0x0008d7d2) cale_week_day_heading_pane_t3

0x3c0d,	// (0x0008d801) cale_week_day_heading_pane_t4

0x3c3c,	// (0x0008d830) cale_week_day_heading_pane_t5

0x3c73,	// (0x0008d867) cale_week_day_heading_pane_t6

0x3caa,	// (0x0008d89e) cale_week_day_heading_pane_t7

0x0006,

0xf172,	// (0x00098d66) cale_week_day_heading_pane_t

0x0972,	// (0x0008a566) bg_cale_side_pane

0x3cd4,	// (0x0008d8c8) cale_week_time_pane_t1

0x3cee,	// (0x0008d8e2) cale_week_time_pane_t2

0x3d08,	// (0x0008d8fc) cale_week_time_pane_t3

0x3d22,	// (0x0008d916) cale_week_time_pane_t4

0x3d3c,	// (0x0008d930) cale_week_time_pane_t5

0x3d56,	// (0x0008d94a) cale_week_time_pane_t6

0x3d70,	// (0x0008d964) cale_week_time_pane_t7

0x3d8a,	// (0x0008d97e) cale_week_time_pane_t8

0x0007,

0xf181,	// (0x00098d75) cale_week_time_pane_t

0x3daa,	// (0x0008d99e) cell_cale_week_pane_g2

0x3dce,	// (0x0008d9c2) cell_cale_week_pane_g3_ParamLimits

0x3dce,	// (0x0008d9c2) cell_cale_week_pane_g3

0x0980,	// (0x0008a574) grid_highlight_pane_cp07

0x0988,	// (0x0008a57c) listscroll_gms_pane

0x0992,	// (0x0008a586) grid_gms_pane

0x099b,	// (0x0008a58f) listscroll_gms_pane_g1

0x09a3,	// (0x0008a597) listscroll_gms_pane_g2

0x0001,

0xf192,	// (0x00098d86) listscroll_gms_pane_g

0x3de6,	// (0x0008d9da) scroll_pane_cp010

0x3df1,	// (0x0008d9e5) cell_gms_pane_ParamLimits

0x3df1,	// (0x0008d9e5) cell_gms_pane

0x3e03,	// (0x0008d9f7) cell_gms_pane_g1

0x09ab,	// (0x0008a59f) cell_gms_pane_g2

0x0903,	// (0x0008a4f7) cell_gms_pane_g3

0x09b3,	// (0x0008a5a7) cell_gms_pane_g4

0x0003,

0xf197,	// (0x00098d8b) cell_gms_pane_g

0x09bc,	// (0x0008a5b0) grid_highlight_pane_cp09

0x67d3,	// (0x000903c7) phob_pre_status_pane_g1

0x67db,	// (0x000903cf) phob_pre_status_pane_g2

0x67e3,	// (0x000903d7) phob_pre_status_pane_g3

0x67eb,	// (0x000903df) phob_pre_status_pane_g4

0x0004,

0xf56e,	// (0x00099162) phob_pre_status_pane_g

0x67fb,	// (0x000903ef) phob_pre_status_pane_t1

0x6809,	// (0x000903fd) phob_pre_status_pane_t2

0x6819,	// (0x0009040d) phob_pre_status_pane_t3

0x0002,

0xf579,	// (0x0009916d) phob_pre_status_pane_t

0x09c4,	// (0x0008a5b8) bg_list_pane_cp05

0x3e13,	// (0x0008da07) grid_vorec_pane

0x3e1b,	// (0x0008da0f) vorec_t1

0x3e29,	// (0x0008da1d) vorec_t2

0x3e37,	// (0x0008da2b) vorec_t3

0x3e45,	// (0x0008da39) vorec_t4

0xbc07,	// (0x000957fb) vorec_t5

0xbc15,	// (0x00095809) vorec_t6

0x0004,

0xf1a0,	// (0x00098d94) vorec_t

0xbc23,	// (0x00095817) wait_bar_pane_cp01

0x3e61,	// (0x0008da55) cell_vorec_pane_ParamLimits

0x3e61,	// (0x0008da55) cell_vorec_pane

0xc29a,	// (0x00095e8e) cell_vorec_pane_g1

0x04bc,	// (0x0008a0b0) grid_highlight_pane_cp05

0x0739,	// (0x0008a32d) cams_zoom_pane

0x0739,	// (0x0008a32d) image_vga_pane

0x07a0,	// (0x0008a394) main_camera_pane_g1

0x07a0,	// (0x0008a394) main_camera_pane_g2

0x07a0,	// (0x0008a394) main_camera_pane_g3

0x07a0,	// (0x0008a394) main_camera_pane_g4

0x07a0,	// (0x0008a394) main_camera_pane_g5

0x07a0,	// (0x0008a394) main_camera_pane_g6

0x07a0,	// (0x0008a394) main_camera_pane_g7

0x0007,

0xf1ab,	// (0x00098d9f) main_camera_pane_g

0x0a14,	// (0x0008a608) main_camera_pane_t1

0x0a14,	// (0x0008a608) main_camera_pane_t2

0x0001,

0xf1bc,	// (0x00098db0) main_camera_pane_t

0x3e88,	// (0x0008da7c) cams_zoom_pane_cp_ParamLimits

0x3e88,	// (0x0008da7c) cams_zoom_pane_cp

0x3ebc,	// (0x0008dab0) image_cif_pane_ParamLimits

0x3ebc,	// (0x0008dab0) image_cif_pane

0x009f,	// (0x00089c93) image_subqcif_pane

0x3ece,	// (0x0008dac2) main_video_pane_g1_ParamLimits

0x3ece,	// (0x0008dac2) main_video_pane_g1

0x3efc,	// (0x0008daf0) main_video_pane_g2_ParamLimits

0x3efc,	// (0x0008daf0) main_video_pane_g2

0x3f36,	// (0x0008db2a) main_video_pane_g3_ParamLimits

0x3f36,	// (0x0008db2a) main_video_pane_g3

0x3f36,	// (0x0008db2a) main_video_pane_g4_ParamLimits

0x3f36,	// (0x0008db2a) main_video_pane_g4

0x3f6a,	// (0x0008db5e) main_video_pane_g5_ParamLimits

0x3f6a,	// (0x0008db5e) main_video_pane_g5

0x09e0,	// (0x0008a5d4) main_video_pane_g6_ParamLimits

0x09e0,	// (0x0008a5d4) main_video_pane_g6

0x0006,

0xf1c1,	// (0x00098db5) main_video_pane_g_ParamLimits

0xf1c1,	// (0x00098db5) main_video_pane_g

0x3f86,	// (0x0008db7a) main_video_pane_t1_ParamLimits

0x3f86,	// (0x0008db7a) main_video_pane_t1

0x09fa,	// (0x0008a5ee) cams_zoom_pane_g1

0x09fa,	// (0x0008a5ee) cams_zoom_pane_g2

0x09fa,	// (0x0008a5ee) cams_zoom_pane_g3

0x09fa,	// (0x0008a5ee) cams_zoom_pane_g4

0x0003,

0xf1d0,	// (0x00098dc4) cams_zoom_pane_g

0x3fde,	// (0x0008dbd2) grid_cams_pane

0x3ff8,	// (0x0008dbec) linegrid_cams_pane

0x400b,	// (0x0008dbff) cell_cams_pane_ParamLimits

0x400b,	// (0x0008dbff) cell_cams_pane

0x0a04,	// (0x0008a5f8) cams_burst_image_pane

0x0a0c,	// (0x0008a600) cell_cams_pane_g1

0x04bc,	// (0x0008a0b0) grid_highlight_pane_cp03

0x072f,	// (0x0008a323) mp_bg_pane_g1

0x009f,	// (0x00089c93) bg_list_pane_cp03

0x009f,	// (0x00089c93) bg_mp_pane

0x009f,	// (0x00089c93) grid_mp_pane

0x09fa,	// (0x0008a5ee) media_player_g1

0x504a,	// (0x0008ec3e) media_player_t1

0x504a,	// (0x0008ec3e) media_player_t2

0x504a,	// (0x0008ec3e) media_player_t3

0x504a,	// (0x0008ec3e) media_player_t4

0x504a,	// (0x0008ec3e) media_player_t5

0x504a,	// (0x0008ec3e) media_player_t6

0x504a,	// (0x0008ec3e) media_player_t7

0x0006,

0xf558,	// (0x0009914c) media_player_t

0x009f,	// (0x00089c93) wait_bar_pane_cp02

0xf53d,	// (0x00099131) main_usb_pane_t

0x533a,	// (0x0008ef2e) cell_mp_pane

0x072f,	// (0x0008a323) cell_mp_pane_g1

0x04bc,	// (0x0008a0b0) grid_highlight_pane_cp06

0x0a28,	// (0x0008a61c) grid_skin_colour_pane

0x0a30,	// (0x0008a624) list_highlight_pane_cp03

0x402b,	// (0x0008dc1f) skin_g1

0x0a38,	// (0x0008a62c) skin_t1

0x0a47,	// (0x0008a63b) skin_t2

0x0001,

0xf1fe,	// (0x00098df2) skin_t

0x4033,	// (0x0008dc27) cell_skin_colour_pane_ParamLimits

0x4033,	// (0x0008dc27) cell_skin_colour_pane

0x0a55,	// (0x0008a649) cell_skin_colour_pane_g1

0x40ac,	// (0x0008dca0) call_video_g1_ParamLimits

0x40ac,	// (0x0008dca0) call_video_g1

0x40c8,	// (0x0008dcbc) call_video_g2_ParamLimits

0x40c8,	// (0x0008dcbc) call_video_g2

0x0001,

0xf203,	// (0x00098df7) call_video_g_ParamLimits

0xf203,	// (0x00098df7) call_video_g

0x411a,	// (0x0008dd0e) call_video_uplink_pane_cp1_ParamLimits

0x411a,	// (0x0008dd0e) call_video_uplink_pane_cp1

0x0a67,	// (0x0008a65b) call_video_uplink_pane_cp2

0x41b9,	// (0x0008ddad) video_down_crop_pane_ParamLimits

0x41b9,	// (0x0008ddad) video_down_crop_pane

0x42a2,	// (0x0008de96) video_down_pane_ParamLimits

0x42a2,	// (0x0008de96) video_down_pane

0x0a6f,	// (0x0008a663) video_down_subqcif_pane_ParamLimits

0x0a6f,	// (0x0008a663) video_down_subqcif_pane

0x0a87,	// (0x0008a67b) video_down_subqcif_pane_cp_ParamLimits

0x0a87,	// (0x0008a67b) video_down_subqcif_pane_cp

0x0aad,	// (0x0008a6a1) im_reading_pane_ParamLimits

0x0aad,	// (0x0008a6a1) im_reading_pane

0x43b2,	// (0x0008dfa6) im_writing_pane_ParamLimits

0x43b2,	// (0x0008dfa6) im_writing_pane

0x43c8,	// (0x0008dfbc) im_reading_pane_t1

0x0ac7,	// (0x0008a6bb) list_im_pane

0x0ad8,	// (0x0008a6cc) scroll_pane_cp07

0x4402,	// (0x0008dff6) im_writing_pane_t1_ParamLimits

0x4402,	// (0x0008dff6) im_writing_pane_t1

0x0af1,	// (0x0008a6e5) im_writing_pane_t2_ParamLimits

0x0af1,	// (0x0008a6e5) im_writing_pane_t2

0x0001,

0xf20d,	// (0x00098e01) im_writing_pane_t_ParamLimits

0xf20d,	// (0x00098e01) im_writing_pane_t

0x04bc,	// (0x0008a0b0) input_focus_pane_cp04

0x04bc,	// (0x0008a0b0) input_focus_pane_cp05

0x4417,	// (0x0008e00b) list_im_single_pane_ParamLimits

0x4417,	// (0x0008e00b) list_im_single_pane

0x442c,	// (0x0008e020) list_single_im_pane_t1

0x09c4,	// (0x0008a5b8) blid_accuracy_pane

0x09c4,	// (0x0008a5b8) blid_compass_pane

0xd112,	// (0x00096d06) main_location_t1

0xd112,	// (0x00096d06) main_location_t2

0xd112,	// (0x00096d06) main_location_t3

0x0002,

0xf567,	// (0x0009915b) main_location_t

0x04bc,	// (0x0008a0b0) aid_levels_location

0x072f,	// (0x0008a323) blid_accuracy_pane_g1

0x072f,	// (0x0008a323) blid_accuracy_pane_g2

0x0001,

0xf25c,	// (0x00098e50) blid_accuracy_pane_g

0x0b39,	// (0x0008a72d) wml_content_pane

0x0b77,	// (0x0008a76b) wml_button_pane_ParamLimits

0x0b77,	// (0x0008a76b) wml_button_pane

0x443b,	// (0x0008e02f) wml_list_single_large_pane_ParamLimits

0x443b,	// (0x0008e02f) wml_list_single_large_pane

0x4450,	// (0x0008e044) wml_list_single_medium_pane_ParamLimits

0x4450,	// (0x0008e044) wml_list_single_medium_pane

0x4467,	// (0x0008e05b) wml_list_single_small_pane_ParamLimits

0x4467,	// (0x0008e05b) wml_list_single_small_pane

0x0b8b,	// (0x0008a77f) wml_selection_box_pane_ParamLimits

0x0b8b,	// (0x0008a77f) wml_selection_box_pane

0x0b9e,	// (0x0008a792) wml_list_single_pane_t1

0x0bad,	// (0x0008a7a1) wml_list_single_medium_pane_t1

0x0bbc,	// (0x0008a7b0) wml_list_single_large_pane_t1

0x0bcb,	// (0x0008a7bf) input_focus_pane_cp02_ParamLimits

0x0bcb,	// (0x0008a7bf) input_focus_pane_cp02

0x0bde,	// (0x0008a7d2) wml_selection_box_pane_g1

0x0be7,	// (0x0008a7db) wml_selection_box_pane_t1_ParamLimits

0x0be7,	// (0x0008a7db) wml_selection_box_pane_t1

0x0717,	// (0x0008a30b) bg_wml_button_pane_ParamLimits

0x0717,	// (0x0008a30b) bg_wml_button_pane

0x0bff,	// (0x0008a7f3) wml_button_pane_g1

0x0c07,	// (0x0008a7fb) wml_button_pane_t1

0x0bff,	// (0x0008a7f3) wml_button_bg_pane_g1

0x0c17,	// (0x0008a80b) wml_button_bg_pane_g2

0x0c1f,	// (0x0008a813) wml_button_bg_pane_g3

0x0c27,	// (0x0008a81b) wml_button_bg_pane_g4

0x0c2f,	// (0x0008a823) wml_button_bg_pane_g5

0x0c37,	// (0x0008a82b) wml_button_bg_pane_g6

0x0c3f,	// (0x0008a833) wml_button_bg_pane_g7

0x0c47,	// (0x0008a83b) wml_button_bg_pane_g8

0x0c4f,	// (0x0008a843) wml_button_bg_pane_g9

0x0008,

0xf212,	// (0x00098e06) wml_button_bg_pane_g

0x4480,	// (0x0008e074) bg_list_pane_cp02

0x0c57,	// (0x0008a84b) mce_header_pane_ParamLimits

0x0c57,	// (0x0008a84b) mce_header_pane

0x0c6d,	// (0x0008a861) mce_icon_pane

0x0c6d,	// (0x0008a861) mce_image_pane

0x0c76,	// (0x0008a86a) mce_text_pane_ParamLimits

0x0c76,	// (0x0008a86a) mce_text_pane

0x4488,	// (0x0008e07c) scroll_pane_cp03

0x0b6f,	// (0x0008a763) scroll_pane_cp04

0x0c89,	// (0x0008a87d) scroll_pane_cp05_ParamLimits

0x0c89,	// (0x0008a87d) scroll_pane_cp05

0x4490,	// (0x0008e084) mce_header_field_pane_ParamLimits

0x4490,	// (0x0008e084) mce_header_field_pane

0x44a7,	// (0x0008e09b) mce_header_field_pane_2_ParamLimits

0x44a7,	// (0x0008e09b) mce_header_field_pane_2

0x44bd,	// (0x0008e0b1) mce_header_field_pane_3

0x44c5,	// (0x0008e0b9) list_single_mce_message_pane_ParamLimits

0x44c5,	// (0x0008e0b9) list_single_mce_message_pane

0x44d4,	// (0x0008e0c8) list_single_mce_smart_pane_ParamLimits

0x44d4,	// (0x0008e0c8) list_single_mce_smart_pane

0x0c95,	// (0x0008a889) input_focus_pane_cp03

0x0c9e,	// (0x0008a892) list_header_data_pane

0x44ee,	// (0x0008e0e2) mce_header_field_pane_t1

0x44fc,	// (0x0008e0f0) list_single_mce_header_pane_ParamLimits

0x44fc,	// (0x0008e0f0) list_single_mce_header_pane

0x0ca6,	// (0x0008a89a) list_single_mce_header_pane_t1

0x0cb5,	// (0x0008a8a9) list_single_mce_message_pane_g1

0x0cbd,	// (0x0008a8b1) list_single_mce_message_pane_t1

0x4536,	// (0x0008e12a) bg_cale_heading_pane_cp01_ParamLimits

0x4536,	// (0x0008e12a) bg_cale_heading_pane_cp01

0x0ccb,	// (0x0008a8bf) bg_cale_pane_cp02_ParamLimits

0x0ccb,	// (0x0008a8bf) bg_cale_pane_cp02

0x4570,	// (0x0008e164) cale_month_corner_pane

0x458f,	// (0x0008e183) cale_month_day_heading_pane_ParamLimits

0x458f,	// (0x0008e183) cale_month_day_heading_pane

0x45e1,	// (0x0008e1d5) cale_month_pane_g1_ParamLimits

0x45e1,	// (0x0008e1d5) cale_month_pane_g1

0x4610,	// (0x0008e204) cale_month_pane_g2_ParamLimits

0x4610,	// (0x0008e204) cale_month_pane_g2

0x4640,	// (0x0008e234) cale_month_pane_g3_ParamLimits

0x4640,	// (0x0008e234) cale_month_pane_g3

0x467c,	// (0x0008e270) cale_month_pane_g4_ParamLimits

0x467c,	// (0x0008e270) cale_month_pane_g4

0x46b8,	// (0x0008e2ac) cale_month_pane_g5_ParamLimits

0x46b8,	// (0x0008e2ac) cale_month_pane_g5

0x4700,	// (0x0008e2f4) cale_month_pane_g6_ParamLimits

0x4700,	// (0x0008e2f4) cale_month_pane_g6

0x474c,	// (0x0008e340) cale_month_pane_g7_ParamLimits

0x474c,	// (0x0008e340) cale_month_pane_g7

0x479c,	// (0x0008e390) cale_month_pane_g8_ParamLimits

0x479c,	// (0x0008e390) cale_month_pane_g8

0x47f0,	// (0x0008e3e4) cale_month_pane_g9_ParamLimits

0x47f0,	// (0x0008e3e4) cale_month_pane_g9

0x4842,	// (0x0008e436) cale_month_pane_g10_ParamLimits

0x4842,	// (0x0008e436) cale_month_pane_g10

0x4894,	// (0x0008e488) cale_month_pane_g11_ParamLimits

0x4894,	// (0x0008e488) cale_month_pane_g11

0x48e6,	// (0x0008e4da) cale_month_pane_g12_ParamLimits

0x48e6,	// (0x0008e4da) cale_month_pane_g12

0x4938,	// (0x0008e52c) cale_month_pane_g13_ParamLimits

0x4938,	// (0x0008e52c) cale_month_pane_g13

0x000c,

0xf225,	// (0x00098e19) cale_month_pane_g_ParamLimits

0xf225,	// (0x00098e19) cale_month_pane_g

0x498a,	// (0x0008e57e) cale_month_week_pane

0x49ae,	// (0x0008e5a2) grid_cale_month_pane_ParamLimits

0x49ae,	// (0x0008e5a2) grid_cale_month_pane

0x49f7,	// (0x0008e5eb) cale_month_day_heading_pane_t1

0x4a39,	// (0x0008e62d) cale_month_day_heading_pane_t2

0x4a6e,	// (0x0008e662) cale_month_day_heading_pane_t3

0x4aa3,	// (0x0008e697) cale_month_day_heading_pane_t4

0x4ae0,	// (0x0008e6d4) cale_month_day_heading_pane_t5

0x4b25,	// (0x0008e719) cale_month_day_heading_pane_t6

0x4b6a,	// (0x0008e75e) cale_month_day_heading_pane_t7

0x0006,

0xf240,	// (0x00098e34) cale_month_day_heading_pane_t

0x0972,	// (0x0008a566) bg_cale_side_pane_cp01

0x4bb7,	// (0x0008e7ab) cale_month_week_pane_t1

0x4bd0,	// (0x0008e7c4) cale_month_week_pane_t2

0x4be9,	// (0x0008e7dd) cale_month_week_pane_t3

0x4c02,	// (0x0008e7f6) cale_month_week_pane_t4

0x4c1b,	// (0x0008e80f) cale_month_week_pane_t5

0x4c34,	// (0x0008e828) cale_month_week_pane_t6

0x0005,

0xf24f,	// (0x00098e43) cale_month_week_pane_t

0x4c4d,	// (0x0008e841) cell_cale_month_pane_ParamLimits

0x4c4d,	// (0x0008e841) cell_cale_month_pane

0xc2a4,	// (0x00095e98) cell_cale_month_pane_g1

0x4d7b,	// (0x0008e96f) cell_cale_month_pane_t1_ParamLimits

0x4d7b,	// (0x0008e96f) cell_cale_month_pane_t1

0x0980,	// (0x0008a574) grid_highlight_pane_cp08

0x072f,	// (0x0008a323) main_smil_g1

0x4da7,	// (0x0008e99b) smil_status_pane

0x0d0a,	// (0x0008a8fe) smil_text_pane

0xcfea,	// (0x00096bde) bg_popup_call3_rect_pane_g8

0xcff2,	// (0x00096be6) bg_popup_call3_rect_pane_g9

0x0008,

0xf4e8,	// (0x000990dc) bg_popup_call3_rect_pane_g

0xd22f,	// (0x00096e23) smil_status_volume_pane_g1

0x0d14,	// (0x0008a908) smil_status_pane_t1

0xd262,	// (0x00096e56) volume_smil_pane

0x0d2b,	// (0x0008a91f) list_smil_text_pane

0x4dbc,	// (0x0008e9b0) scroll_pane_cp011

0x4dc7,	// (0x0008e9bb) smil_text_list_pane_t1_ParamLimits

0x4dc7,	// (0x0008e9bb) smil_text_list_pane_t1

0xc2b0,	// (0x00095ea4) aid_volume_smil_ParamLimits

0xc2b0,	// (0x00095ea4) aid_volume_smil

0x072f,	// (0x0008a323) smil_volume_pane_g1

0x072f,	// (0x0008a323) smil_volume_pane_g2

0x0001,

0xf25c,	// (0x00098e50) smil_volume_pane_g

0x38b2,	// (0x0008d4a6) listscroll_cale_day_pane

0x0d35,	// (0x0008a929) bg_cale_pane

0x0d4d,	// (0x0008a941) list_cale_pane

0x0d70,	// (0x0008a964) scroll_pane_cp09

0x0d81,	// (0x0008a975) cale_bg_pane_g1

0x0d89,	// (0x0008a97d) cale_bg_pane_g2

0x0d91,	// (0x0008a985) cale_bg_pane_g3

0x0d99,	// (0x0008a98d) cale_bg_pane_g4

0x0da1,	// (0x0008a995) cale_bg_pane_g5

0x0da9,	// (0x0008a99d) cale_bg_pane_g6

0x4e0b,	// (0x0008e9ff) cale_bg_pane_g7

0x4e13,	// (0x0008ea07) cale_bg_pane_g8

0x4e1b,	// (0x0008ea0f) cale_bg_pane_g9

0x0008,

0xf261,	// (0x00098e55) cale_bg_pane_g

0x4e2b,	// (0x0008ea1f) list_cale_time_pane_ParamLimits

0x4e2b,	// (0x0008ea1f) list_cale_time_pane

0x4e41,	// (0x0008ea35) list_cale_time_pane_g1_ParamLimits

0x4e41,	// (0x0008ea35) list_cale_time_pane_g1

0x4e4d,	// (0x0008ea41) list_cale_time_pane_g2_ParamLimits

0x4e4d,	// (0x0008ea41) list_cale_time_pane_g2

0x4e5a,	// (0x0008ea4e) list_cale_time_pane_g3_ParamLimits

0x4e5a,	// (0x0008ea4e) list_cale_time_pane_g3

0x4e68,	// (0x0008ea5c) list_cale_time_pane_g4_ParamLimits

0x4e68,	// (0x0008ea5c) list_cale_time_pane_g4

0x4e76,	// (0x0008ea6a) list_cale_time_pane_g5_ParamLimits

0x4e76,	// (0x0008ea6a) list_cale_time_pane_g5

0x0005,

0xf274,	// (0x00098e68) list_cale_time_pane_g_ParamLimits

0xf274,	// (0x00098e68) list_cale_time_pane_g

0x4e91,	// (0x0008ea85) list_cale_time_pane_t1_ParamLimits

0x4e91,	// (0x0008ea85) list_cale_time_pane_t1

0x4eb9,	// (0x0008eaad) list_cale_time_pane_t2_ParamLimits

0x4eb9,	// (0x0008eaad) list_cale_time_pane_t2

0x5553,	// (0x0008f147) aid_blid_cardinal_pane

0x559d,	// (0x0008f191) compass_pane_t4

0x4ee1,	// (0x0008ead5) list_cale_time_pane_t4_ParamLimits

0x4ee1,	// (0x0008ead5) list_cale_time_pane_t4

0x55ab,	// (0x0008f19f) compass_pane_t5

0x55b9,	// (0x0008f1ad) compass_pane_t6

0x55c7,	// (0x0008f1bb) compass_pane_t7

0x565f,	// (0x0008f253) navi_pane_cc_t1

0x587e,	// (0x0008f472) aid_phob_thumbnail_center_pane

0x5d5d,	// (0x0008f951) main_postcard_pane_g4_ParamLimits

0x0002,

0xf281,	// (0x00098e75) list_cale_time_pane_t_ParamLimits

0xf281,	// (0x00098e75) list_cale_time_pane_t

0x0113,	// (0x00089d07) bg_popup_window_pane_cp02_ParamLimits

0x0113,	// (0x00089d07) bg_popup_window_pane_cp02

0x4f09,	// (0x0008eafd) heading_pane_cp01_ParamLimits

0x4f09,	// (0x0008eafd) heading_pane_cp01

0x4f15,	// (0x0008eb09) loc_req_pane_ParamLimits

0x4f15,	// (0x0008eb09) loc_req_pane

0x4f25,	// (0x0008eb19) loc_type_pane_ParamLimits

0x4f25,	// (0x0008eb19) loc_type_pane

0x4f37,	// (0x0008eb2b) loc_type_pane_t1_ParamLimits

0x4f37,	// (0x0008eb2b) loc_type_pane_t1

0x4f49,	// (0x0008eb3d) loc_type_pane_t2_ParamLimits

0x4f49,	// (0x0008eb3d) loc_type_pane_t2

0x4f5b,	// (0x0008eb4f) loc_type_pane_t3_ParamLimits

0x4f5b,	// (0x0008eb4f) loc_type_pane_t3

0x0002,

0xf288,	// (0x00098e7c) loc_type_pane_t_ParamLimits

0xf288,	// (0x00098e7c) loc_type_pane_t

0x4f6d,	// (0x0008eb61) list_loc_req_pane

0x4f77,	// (0x0008eb6b) scroll_pane_cp012

0x4f82,	// (0x0008eb76) list_single_loc_request_popup_menu_pane_ParamLimits

0x4f82,	// (0x0008eb76) list_single_loc_request_popup_menu_pane

0x4f8f,	// (0x0008eb83) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0x4f8f,	// (0x0008eb83) list_single_loc_request_popup_menu_pane_g1

0x4f9b,	// (0x0008eb8f) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0x4f9b,	// (0x0008eb8f) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf28f,	// (0x00098e83) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf28f,	// (0x00098e83) list_single_loc_request_popup_menu_pane_g

0x4fa7,	// (0x0008eb9b) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0x4fa7,	// (0x0008eb9b) list_single_loc_request_popup_menu_pane_t1

0x0717,	// (0x0008a30b) bg_popup_window_pane_cp03_ParamLimits

0x0717,	// (0x0008a30b) bg_popup_window_pane_cp03

0xc2d2,	// (0x00095ec6) heading_loc_req_pane_ParamLimits

0xc2d2,	// (0x00095ec6) heading_loc_req_pane

0x4fbd,	// (0x0008ebb1) popup_dyc_status_message_window_g1_ParamLimits

0x4fbd,	// (0x0008ebb1) popup_dyc_status_message_window_g1

0x4fd1,	// (0x0008ebc5) popup_dyc_status_message_window_t1_ParamLimits

0x4fd1,	// (0x0008ebc5) popup_dyc_status_message_window_t1

0x4fe6,	// (0x0008ebda) popup_dyc_status_message_window_t2_ParamLimits

0x4fe6,	// (0x0008ebda) popup_dyc_status_message_window_t2

0x4ffb,	// (0x0008ebef) popup_dyc_status_message_window_t3_ParamLimits

0x4ffb,	// (0x0008ebef) popup_dyc_status_message_window_t3

0x0002,

0xf294,	// (0x00098e88) popup_dyc_status_message_window_t_ParamLimits

0xf294,	// (0x00098e88) popup_dyc_status_message_window_t

0x04bc,	// (0x0008a0b0) bg_heading_pane_cp01

0x5017,	// (0x0008ec0b) heading_loc_req_pane_g1

0x501f,	// (0x0008ec13) heading_loc_req_pane_g2

0x5027,	// (0x0008ec1b) heading_loc_req_pane_g3

0x0002,

0xf29b,	// (0x00098e8f) heading_loc_req_pane_g

0x502f,	// (0x0008ec23) heading_loc_req_pane_t1

0x505a,	// (0x0008ec4e) bg_popup_sub_pane_cp01_ParamLimits

0x505a,	// (0x0008ec4e) bg_popup_sub_pane_cp01

0x5068,	// (0x0008ec5c) popup_cale_events_window_g1_ParamLimits

0x5068,	// (0x0008ec5c) popup_cale_events_window_g1

0x5088,	// (0x0008ec7c) popup_cale_events_window_g2_ParamLimits

0x5088,	// (0x0008ec7c) popup_cale_events_window_g2

0x0001,

0xf2bd,	// (0x00098eb1) popup_cale_events_window_g_ParamLimits

0xf2bd,	// (0x00098eb1) popup_cale_events_window_g

0x50a8,	// (0x0008ec9c) popup_cale_events_window_t1_ParamLimits

0x50a8,	// (0x0008ec9c) popup_cale_events_window_t1

0x50ba,	// (0x0008ecae) popup_cale_events_window_t2_ParamLimits

0x50ba,	// (0x0008ecae) popup_cale_events_window_t2

0x50f8,	// (0x0008ecec) popup_cale_events_window_t3_ParamLimits

0x50f8,	// (0x0008ecec) popup_cale_events_window_t3

0x5132,	// (0x0008ed26) popup_cale_events_window_t4_ParamLimits

0x5132,	// (0x0008ed26) popup_cale_events_window_t4

0x0003,

0xf2c2,	// (0x00098eb6) popup_cale_events_window_t_ParamLimits

0xf2c2,	// (0x00098eb6) popup_cale_events_window_t

0x5168,	// (0x0008ed5c) call_type_pane

0x5178,	// (0x0008ed6c) popup_call_status_window_g1

0x518c,	// (0x0008ed80) popup_call_status_window_g2

0x51a0,	// (0x0008ed94) popup_call_status_window_g3

0x0002,

0xf2cb,	// (0x00098ebf) popup_call_status_window_g

0x51af,	// (0x0008eda3) call_type_pane_g1

0x51b8,	// (0x0008edac) call_type_pane_g2

0x0001,

0xf2d2,	// (0x00098ec6) call_type_pane_g

0x04bc,	// (0x0008a0b0) bg_popup_sub_pane_cp02

0x51c1,	// (0x0008edb5) listscroll_popup_wml_pane

0x51c9,	// (0x0008edbd) list_wml_pane

0x51d3,	// (0x0008edc7) scroll_pane_cp013

0x51de,	// (0x0008edd2) list_single_graphic_popup_wml_pane_ParamLimits

0x51de,	// (0x0008edd2) list_single_graphic_popup_wml_pane

0x072f,	// (0x0008a323) list_single_graphic_popup_wml_pane_g1

0x51f2,	// (0x0008ede6) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf2d7,	// (0x00098ecb) list_single_graphic_popup_wml_pane_g

0x51fa,	// (0x0008edee) list_single_graphic_popup_wml_pane_t1

0x5210,	// (0x0008ee04) aid_call_pane

0x070f,	// (0x0008a303) popup_clock_analogue_window_g1

0x070f,	// (0x0008a303) popup_clock_analogue_window_g2

0xc2de,	// (0x00095ed2) popup_clock_analogue_window_g3

0xc2de,	// (0x00095ed2) popup_clock_analogue_window_g4

0x072f,	// (0x0008a323) popup_clock_analogue_window_g5

0x0004,

0xf2dc,	// (0x00098ed0) popup_clock_analogue_window_g

0xc2e6,	// (0x00095eda) popup_clock_analogue_window_t1

0xc2f4,	// (0x00095ee8) clock_digital_number_pane_ParamLimits

0xc2f4,	// (0x00095ee8) clock_digital_number_pane

0xc300,	// (0x00095ef4) clock_digital_number_pane_cp02_ParamLimits

0xc300,	// (0x00095ef4) clock_digital_number_pane_cp02

0xc30c,	// (0x00095f00) clock_digital_number_pane_cp03_ParamLimits

0xc30c,	// (0x00095f00) clock_digital_number_pane_cp03

0xc318,	// (0x00095f0c) clock_digital_number_pane_cp04_ParamLimits

0xc318,	// (0x00095f0c) clock_digital_number_pane_cp04

0xc324,	// (0x00095f18) clock_digital_separator_pane_ParamLimits

0xc324,	// (0x00095f18) clock_digital_separator_pane

0xc330,	// (0x00095f24) popup_clock_digital_window_t1

0x072f,	// (0x0008a323) clock_digital_number_pane_g1

0x072f,	// (0x0008a323) clock_digital_number_pane_g2

0x0001,

0xf25c,	// (0x00098e50) clock_digital_number_pane_g

0x072f,	// (0x0008a323) clock_digital_separator_pane_g1

0x072f,	// (0x0008a323) clock_digital_separator_pane_g2

0x0001,

0xf25c,	// (0x00098e50) clock_digital_separator_pane_g

0x04bc,	// (0x0008a0b0) bg_popup_window_pane_cp04

0x5218,	// (0x0008ee0c) heading_pane_cp03

0x09c4,	// (0x0008a5b8) listscroll_popup_gms_pane

0x04bc,	// (0x0008a0b0) grid_large_graphic_popup_pane

0x5221,	// (0x0008ee15) listscroll_popup_gms_pane_g1

0x522a,	// (0x0008ee1e) listscroll_popup_gms_pane_g2

0x0001,

0xf2e7,	// (0x00098edb) listscroll_popup_gms_pane_g

0x5233,	// (0x0008ee27) scroll_pane_cp014

0x0792,	// (0x0008a386) cell_large_graphic_popup_pane_ParamLimits

0x0792,	// (0x0008a386) cell_large_graphic_popup_pane

0x07a0,	// (0x0008a394) cell_large_graphic_popup_pane_g1_ParamLimits

0x07a0,	// (0x0008a394) cell_large_graphic_popup_pane_g1

0x523c,	// (0x0008ee30) cell_large_graphic_popup_pane_g2_ParamLimits

0x523c,	// (0x0008ee30) cell_large_graphic_popup_pane_g2

0x524a,	// (0x0008ee3e) cell_large_graphic_popup_pane_g3_ParamLimits

0x524a,	// (0x0008ee3e) cell_large_graphic_popup_pane_g3

0x5258,	// (0x0008ee4c) cell_large_graphic_popup_pane_g4_ParamLimits

0x5258,	// (0x0008ee4c) cell_large_graphic_popup_pane_g4

0x0003,

0xf2ec,	// (0x00098ee0) cell_large_graphic_popup_pane_g_ParamLimits

0xf2ec,	// (0x00098ee0) cell_large_graphic_popup_pane_g

0x04bc,	// (0x0008a0b0) grid_highlight_pane_cp010

0x072f,	// (0x0008a323) bg_popup_call_pane_g1

0x5269,	// (0x0008ee5d) list_single_graphic_popup_conf_pane_ParamLimits

0x5269,	// (0x0008ee5d) list_single_graphic_popup_conf_pane

0x527c,	// (0x0008ee70) list_highlight_pane_cp01

0x5285,	// (0x0008ee79) list_single_graphic_popup_conf_pane_g1

0x528d,	// (0x0008ee81) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf2f5,	// (0x00098ee9) list_single_graphic_popup_conf_pane_g

0x5295,	// (0x0008ee89) list_single_graphic_popup_conf_pane_t1

0x52a3,	// (0x0008ee97) linegrid_cams_pane_g1

0x52ac,	// (0x0008eea0) linegrid_cams_pane_g2

0x0903,	// (0x0008a4f7) linegrid_cams_pane_g3

0x52b5,	// (0x0008eea9) linegrid_cams_pane_g4

0x52be,	// (0x0008eeb2) linegrid_cams_pane_g5

0x52c7,	// (0x0008eebb) linegrid_cams_pane_g6

0x09b3,	// (0x0008a5a7) linegrid_cams_pane_g7

0x0006,

0xf2fa,	// (0x00098eee) linegrid_cams_pane_g

0x52d2,	// (0x0008eec6) popup_clock_analogue_window

0x52d2,	// (0x0008eec6) popup_clock_digital_window

0x04bc,	// (0x0008a0b0) popup_phob_thumbnail_window

0x072f,	// (0x0008a323) call_video_uplink_pane_g1

0x52db,	// (0x0008eecf) call_video_uplink_pane_g2

0x0001,

0xf309,	// (0x00098efd) call_video_uplink_pane_g

0x52e3,	// (0x0008eed7) video_uplink_pane

0x52eb,	// (0x0008eedf) mce_image_pane_g1

0x52f5,	// (0x0008eee9) mce_image_pane_g2

0x52fd,	// (0x0008eef1) mce_image_pane_g3

0x5305,	// (0x0008eef9) mce_image_pane_g4

0x530d,	// (0x0008ef01) mce_image_pane_g5

0x0004,

0xf30e,	// (0x00098f02) mce_image_pane_g

0x5315,	// (0x0008ef09) control_top_pane_stacon_cp01_ParamLimits

0x5315,	// (0x0008ef09) control_top_pane_stacon_cp01

0x5329,	// (0x0008ef1d) uni_indicator_pane_stacon_cp01_ParamLimits

0x5329,	// (0x0008ef1d) uni_indicator_pane_stacon_cp01

0x533a,	// (0x0008ef2e) bg_popup_sub_pane_cp03

0x5344,	// (0x0008ef38) chi_dic_find_pane

0x534c,	// (0x0008ef40) listscroll_chi_dic_pane

0x5355,	// (0x0008ef49) main_pane_chidic_g1

0x5368,	// (0x0008ef5c) chi_dic_find_pane_t1

0x5376,	// (0x0008ef6a) find_chidic_pane

0x537f,	// (0x0008ef73) chi_dic_list_pane_ParamLimits

0x537f,	// (0x0008ef73) chi_dic_list_pane

0x5390,	// (0x0008ef84) scroll_pane_cp020

0x5398,	// (0x0008ef8c) find_chidic_pane_t1

0x04bc,	// (0x0008a0b0) input_focus_pane_cp06

0x53a7,	// (0x0008ef9b) list_chi_dic_pane_ParamLimits

0x53a7,	// (0x0008ef9b) list_chi_dic_pane

0x53b9,	// (0x0008efad) list_chi_dic_pane_t1_ParamLimits

0x53b9,	// (0x0008efad) list_chi_dic_pane_t1

0x04bc,	// (0x0008a0b0) list_highlight_pane_cp020

0x53cc,	// (0x0008efc0) bg_cale_heading_pane_g1

0x53d4,	// (0x0008efc8) bg_cale_heading_pane_g2

0x53dc,	// (0x0008efd0) bg_cale_heading_pane_g3

0x53e4,	// (0x0008efd8) bg_cale_heading_pane_g4

0x53ee,	// (0x0008efe2) bg_cale_heading_pane_g5

0x53f8,	// (0x0008efec) bg_cale_heading_pane_g6

0x5400,	// (0x0008eff4) bg_cale_heading_pane_g7

0x5408,	// (0x0008effc) bg_cale_heading_pane_g8

0x5412,	// (0x0008f006) bg_cale_heading_pane_g9

0x0008,

0xf319,	// (0x00098f0d) bg_cale_heading_pane_g

0x53cc,	// (0x0008efc0) bg_cale_side_pane_g1

0x541c,	// (0x0008f010) bg_cale_side_pane_g2

0x5424,	// (0x0008f018) bg_cale_side_pane_g3

0x542c,	// (0x0008f020) bg_cale_side_pane_g4

0x5434,	// (0x0008f028) bg_cale_side_pane_g5

0x543c,	// (0x0008f030) bg_cale_side_pane_g6

0x5444,	// (0x0008f038) bg_cale_side_pane_g7

0x544c,	// (0x0008f040) bg_cale_side_pane_g8

0x5454,	// (0x0008f048) bg_cale_side_pane_g9

0x0008,

0xf32c,	// (0x00098f20) bg_cale_side_pane_g

0x545c,	// (0x0008f050) popup_call_status_window_ParamLimits

0x545c,	// (0x0008f050) popup_call_status_window

0x54a3,	// (0x0008f097) stacon_top_pane

0x54ab,	// (0x0008f09f) status_pane_ParamLimits

0x54ab,	// (0x0008f09f) status_pane

0x54c0,	// (0x0008f0b4) status_small_pane

0x54c8,	// (0x0008f0bc) control_pane

0x04bc,	// (0x0008a0b0) stacon_bottom_pane

0x54d0,	// (0x0008f0c4) list_single_mce_smart_pane_t1_ParamLimits

0x54d0,	// (0x0008f0c4) list_single_mce_smart_pane_t1

0x54e3,	// (0x0008f0d7) list_single_mce_smart_pane_t2_ParamLimits

0x54e3,	// (0x0008f0d7) list_single_mce_smart_pane_t2

0x0001,

0xf33f,	// (0x00098f33) list_single_mce_smart_pane_t_ParamLimits

0xf33f,	// (0x00098f33) list_single_mce_smart_pane_t

0x5502,	// (0x0008f0f6) compass_pane

0x550b,	// (0x0008f0ff) main_location2_pane_t1

0x551d,	// (0x0008f111) main_location2_pane_t2

0x552f,	// (0x0008f123) main_location2_pane_t3

0x0003,

0xf344,	// (0x00098f38) main_location2_pane_t

0x5573,	// (0x0008f167) compass_pane_g1_ParamLimits

0x5573,	// (0x0008f167) compass_pane_g1

0x557f,	// (0x0008f173) compass_pane_t1

0x558e,	// (0x0008f182) compass_pane_t2

0x0005,

0xf34d,	// (0x00098f41) compass_pane_t

0x55d5,	// (0x0008f1c9) text_secondary_cp61

0x5656,	// (0x0008f24a) navi_pane_cams_g5

0x56d2,	// (0x0008f2c6) navi_pane_im_t1

0x56e0,	// (0x0008f2d4) navi_pane_mp_g1_ParamLimits

0x56e0,	// (0x0008f2d4) navi_pane_mp_g1

0x56f4,	// (0x0008f2e8) navi_pane_mp_g2_ParamLimits

0x56f4,	// (0x0008f2e8) navi_pane_mp_g2

0x5700,	// (0x0008f2f4) navi_pane_mp_g3_ParamLimits

0x5700,	// (0x0008f2f4) navi_pane_mp_g3

0x0002,

0xf361,	// (0x00098f55) navi_pane_mp_g_ParamLimits

0xf361,	// (0x00098f55) navi_pane_mp_g

0x570c,	// (0x0008f300) navi_pane_mp_t1

0x571a,	// (0x0008f30e) navi_pane_mp_t2

0x0002,

0xf368,	// (0x00098f5c) navi_pane_mp_t

0x57c7,	// (0x0008f3bb) navi_pane_vt_g1

0x570c,	// (0x0008f300) navi_pane_vt_t1

0x57cf,	// (0x0008f3c3) navi_slider_pane

0x09c4,	// (0x0008a5b8) zooming_pane

0x57df,	// (0x0008f3d3) navi_slider_pane_g1

0xc34d,	// (0x00095f41) navi_slider_pane_g2

0x0006,

0xf36f,	// (0x00098f63) navi_slider_pane_g

0x5803,	// (0x0008f3f7) aid_levels_zoom

0x580b,	// (0x0008f3ff) zooming_pane_g1

0x5813,	// (0x0008f407) zooming_pane_g2

0x5813,	// (0x0008f407) zooming_pane_g3

0x0002,

0xf37e,	// (0x00098f72) zooming_pane_g

0x581b,	// (0x0008f40f) level_10_zoom

0x5824,	// (0x0008f418) level_11_zoom

0x582d,	// (0x0008f421) level_1_zoom

0x5836,	// (0x0008f42a) level_2_zoom

0x583f,	// (0x0008f433) level_3_zoom

0x5848,	// (0x0008f43c) level_4_zoom

0x5851,	// (0x0008f445) level_5_zoom

0x585a,	// (0x0008f44e) level_6_zoom

0x5863,	// (0x0008f457) level_7_zoom

0x586c,	// (0x0008f460) level_8_zoom

0x5875,	// (0x0008f469) level_9_zoom

0x5886,	// (0x0008f47a) popup_phob_thumbnail_window_g1

0x588e,	// (0x0008f482) popup_phob_thumbnail_window_g2

0x0001,

0xf385,	// (0x00098f79) popup_phob_thumbnail_window_g

0x6829,	// (0x0009041d) level_1_location

0x6831,	// (0x00090425) level_2_location

0x6839,	// (0x0009042d) level_3_location

0x6841,	// (0x00090435) level_4_location

0x09c4,	// (0x0008a5b8) level_5_location

0x5896,	// (0x0008f48a) mce_icon_pane_g1

0x589e,	// (0x0008f492) mce_icon_pane_g2

0x0001,

0xf38a,	// (0x00098f7e) mce_icon_pane_g

0xc35f,	// (0x00095f53) main_mup_pane_g1_ParamLimits

0xc35f,	// (0x00095f53) main_mup_pane_g1

0xc35f,	// (0x00095f53) main_mup_pane_g2_ParamLimits

0xc35f,	// (0x00095f53) main_mup_pane_g2

0xc35f,	// (0x00095f53) main_mup_pane_g3_ParamLimits

0xc35f,	// (0x00095f53) main_mup_pane_g3

0xc35f,	// (0x00095f53) main_mup_pane_g4_ParamLimits

0xc35f,	// (0x00095f53) main_mup_pane_g4

0xc35f,	// (0x00095f53) main_mup_pane_g5_ParamLimits

0xc35f,	// (0x00095f53) main_mup_pane_g5

0xc35f,	// (0x00095f53) main_mup_pane_g6_ParamLimits

0xc35f,	// (0x00095f53) main_mup_pane_g6

0xc35f,	// (0x00095f53) main_mup_pane_g7_ParamLimits

0xc35f,	// (0x00095f53) main_mup_pane_g7

0xc35f,	// (0x00095f53) main_mup_pane_g8_ParamLimits

0xc35f,	// (0x00095f53) main_mup_pane_g8

0xc35f,	// (0x00095f53) main_mup_pane_g9_ParamLimits

0xc35f,	// (0x00095f53) main_mup_pane_g9

0xc35f,	// (0x00095f53) main_mup_pane_g10_ParamLimits

0xc35f,	// (0x00095f53) main_mup_pane_g10

0xc35f,	// (0x00095f53) main_mup_pane_g11_ParamLimits

0xc35f,	// (0x00095f53) main_mup_pane_g11

0x07a0,	// (0x0008a394) main_mup_pane_g12_ParamLimits

0x07a0,	// (0x0008a394) main_mup_pane_g12

0xc35f,	// (0x00095f53) main_mup_pane_g13_ParamLimits

0xc35f,	// (0x00095f53) main_mup_pane_g13

0x000c,

0xf38f,	// (0x00098f83) main_mup_pane_g_ParamLimits

0xf38f,	// (0x00098f83) main_mup_pane_g

0xc36d,	// (0x00095f61) main_mup_pane_t1_ParamLimits

0xc36d,	// (0x00095f61) main_mup_pane_t1

0xc36d,	// (0x00095f61) main_mup_pane_t2_ParamLimits

0xc36d,	// (0x00095f61) main_mup_pane_t2

0xc36d,	// (0x00095f61) main_mup_pane_t3_ParamLimits

0xc36d,	// (0x00095f61) main_mup_pane_t3

0x0a14,	// (0x0008a608) main_mup_pane_t4_ParamLimits

0x0a14,	// (0x0008a608) main_mup_pane_t4

0x0a14,	// (0x0008a608) main_mup_pane_t5_ParamLimits

0x0a14,	// (0x0008a608) main_mup_pane_t5

0x09cc,	// (0x0008a5c0) main_mup_pane_t6_ParamLimits

0x09cc,	// (0x0008a5c0) main_mup_pane_t6

0x0005,

0xf3aa,	// (0x00098f9e) main_mup_pane_t_ParamLimits

0xf3aa,	// (0x00098f9e) main_mup_pane_t

0x0792,	// (0x0008a386) mup_progress_pane_ParamLimits

0x0792,	// (0x0008a386) mup_progress_pane

0x58a6,	// (0x0008f49a) mup_visualizer_pane_ParamLimits

0x58a6,	// (0x0008f49a) mup_visualizer_pane

0x58a6,	// (0x0008f49a) mup_volume_pane_ParamLimits

0x58a6,	// (0x0008f49a) mup_volume_pane

0x07ae,	// (0x0008a3a2) mup_visualizer_pane_g1_ParamLimits

0x07ae,	// (0x0008a3a2) mup_visualizer_pane_g1

0x58b4,	// (0x0008f4a8) mup_visualizer_pane_g2_ParamLimits

0x58b4,	// (0x0008f4a8) mup_visualizer_pane_g2

0x07a0,	// (0x0008a394) mup_visualizer_pane_g3_ParamLimits

0x07a0,	// (0x0008a394) mup_visualizer_pane_g3

0x0002,

0xf3b7,	// (0x00098fab) mup_visualizer_pane_g_ParamLimits

0xf3b7,	// (0x00098fab) mup_visualizer_pane_g

0x09fa,	// (0x0008a5ee) mup_volume_pane_g1

0x09fa,	// (0x0008a5ee) mup_volume_pane_g2

0x0001,

0xf3be,	// (0x00098fb2) mup_volume_pane_g

0x09fa,	// (0x0008a5ee) mup_progress_pane_g1

0x09fa,	// (0x0008a5ee) mup_progress_pane_g2

0x09fa,	// (0x0008a5ee) mup_progress_pane_g3

0x0002,

0xf3c3,	// (0x00098fb7) mup_progress_pane_g

0x04bc,	// (0x0008a0b0) bg_popup_window_pane_cp05

0x58c2,	// (0x0008f4b6) heading_pane_cp02_ParamLimits

0x58c2,	// (0x0008f4b6) heading_pane_cp02

0x58dc,	// (0x0008f4d0) list_popup_blid_pane

0x58e4,	// (0x0008f4d8) list_blid_sat_info_pane_ParamLimits

0x58e4,	// (0x0008f4d8) list_blid_sat_info_pane

0x58f7,	// (0x0008f4eb) list_blid_sat_info_pane_g1

0x58ff,	// (0x0008f4f3) list_blid_sat_info_pane_t1

0x5a05,	// (0x0008f5f9) mup_equalizer_pane_ParamLimits

0x5a05,	// (0x0008f5f9) mup_equalizer_pane

0x5a1e,	// (0x0008f612) mup_equalizer_pane_cp1_ParamLimits

0x5a1e,	// (0x0008f612) mup_equalizer_pane_cp1

0x5a3b,	// (0x0008f62f) mup_equalizer_pane_cp2_ParamLimits

0x5a3b,	// (0x0008f62f) mup_equalizer_pane_cp2

0x5a58,	// (0x0008f64c) mup_equalizer_pane_cp3_ParamLimits

0x5a58,	// (0x0008f64c) mup_equalizer_pane_cp3

0x5a79,	// (0x0008f66d) mup_equalizer_pane_cp4_ParamLimits

0x5a79,	// (0x0008f66d) mup_equalizer_pane_cp4

0x5a9a,	// (0x0008f68e) mup_equalizer_pane_cp5

0x5aae,	// (0x0008f6a2) mup_equalizer_pane_cp6

0x5ac2,	// (0x0008f6b6) mup_equalizer_pane_cp7

0xd06a,	// (0x00096c5e) bg_popup_call_poc_act_pane_g9

0xd072,	// (0x00096c66) bg_popup_call_poc_act_pane_g10

0xd07a,	// (0x00096c6e) bg_popup_call_poc_act_pane_g11

0x000a,

0x0717,	// (0x0008a30b) mup_scale_pane

0x072f,	// (0x0008a323) mup_scale_pane_g1

0x5ad6,	// (0x0008f6ca) mup_scale_pane_g2

0x0006,

0xf3df,	// (0x00098fd3) mup_scale_pane_g

0x5b0c,	// (0x0008f700) msg_data_pane

0x5b14,	// (0x0008f708) scroll_pane_cp017

0x5b1c,	// (0x0008f710) bg_list_pane_cp04_ParamLimits

0x5b1c,	// (0x0008f710) bg_list_pane_cp04

0x5b3c,	// (0x0008f730) msg_data_pane_g1

0x5b44,	// (0x0008f738) msg_data_pane_g2

0x5b4c,	// (0x0008f740) msg_data_pane_g3

0x5b54,	// (0x0008f748) msg_data_pane_g4

0x5b5c,	// (0x0008f750) msg_data_pane_g5

0x5b64,	// (0x0008f758) msg_data_pane_g6

0x5b6c,	// (0x0008f760) msg_data_pane_g7

0x0006,

0xf3ee,	// (0x00098fe2) msg_data_pane_g

0x5b74,	// (0x0008f768) msg_text_pane_ParamLimits

0x5b74,	// (0x0008f768) msg_text_pane

0x5b9f,	// (0x0008f793) qrid_highlight_pane_cp011_ParamLimits

0x5b9f,	// (0x0008f793) qrid_highlight_pane_cp011

0x04bc,	// (0x0008a0b0) msg_body_pane

0x04bc,	// (0x0008a0b0) msg_header_pane

0x5bbe,	// (0x0008f7b2) input_focus_pane_cp07

0x5be1,	// (0x0008f7d5) msg_header_pane_t1_ParamLimits

0x5be1,	// (0x0008f7d5) msg_header_pane_t1

0x5bf7,	// (0x0008f7eb) msg_header_pane_t2_ParamLimits

0x5bf7,	// (0x0008f7eb) msg_header_pane_t2

0x0001,

0xf402,	// (0x00098ff6) msg_header_pane_t_ParamLimits

0xf402,	// (0x00098ff6) msg_header_pane_t

0x5c0e,	// (0x0008f802) msg_body_pane_g1

0x5c16,	// (0x0008f80a) msg_body_pane_t1_ParamLimits

0x5c16,	// (0x0008f80a) msg_body_pane_t1

0x5c47,	// (0x0008f83b) msg_body_pane_t2_ParamLimits

0x5c47,	// (0x0008f83b) msg_body_pane_t2

0x5c59,	// (0x0008f84d) msg_body_pane_t3_ParamLimits

0x5c59,	// (0x0008f84d) msg_body_pane_t3

0x0002,

0xf407,	// (0x00098ffb) msg_body_pane_t_ParamLimits

0xf407,	// (0x00098ffb) msg_body_pane_t

0x5ca5,	// (0x0008f899) main_viewer_pane_g1_ParamLimits

0x5ca5,	// (0x0008f899) main_viewer_pane_g1

0x5cb3,	// (0x0008f8a7) main_viewer_pane_g2_ParamLimits

0x5cb3,	// (0x0008f8a7) main_viewer_pane_g2

0x5cc1,	// (0x0008f8b5) main_viewer_pane_g3_ParamLimits

0x5cc1,	// (0x0008f8b5) main_viewer_pane_g3

0x5cd0,	// (0x0008f8c4) main_viewer_pane_g4_ParamLimits

0x5cd0,	// (0x0008f8c4) main_viewer_pane_g4

0xc399,	// (0x00095f8d) main_viewer_pane_g5_ParamLimits

0xc399,	// (0x00095f8d) main_viewer_pane_g5

0xc399,	// (0x00095f8d) main_viewer_pane_g7_ParamLimits

0xc399,	// (0x00095f8d) main_viewer_pane_g7

0x4f8f,	// (0x0008eb83) main_viewer_pane_g8_ParamLimits

0x4f8f,	// (0x0008eb83) main_viewer_pane_g8

0x0007,

0xf417,	// (0x0009900b) main_viewer_pane_g_ParamLimits

0xf417,	// (0x0009900b) main_viewer_pane_g

0x5cdf,	// (0x0008f8d3) viewer_content_pane_ParamLimits

0x5cdf,	// (0x0008f8d3) viewer_content_pane

0x5d1a,	// (0x0008f90e) main_postcard_pane_g1_ParamLimits

0x5d1a,	// (0x0008f90e) main_postcard_pane_g1

0x5d30,	// (0x0008f924) main_postcard_pane_g2_ParamLimits

0x5d30,	// (0x0008f924) main_postcard_pane_g2

0x5d46,	// (0x0008f93a) main_postcard_pane_g3_ParamLimits

0x5d46,	// (0x0008f93a) main_postcard_pane_g3

0x0005,

0xf428,	// (0x0009901c) main_postcard_pane_g_ParamLimits

0xf428,	// (0x0009901c) main_postcard_pane_g

0x5d5d,	// (0x0008f951) main_postcard_pane_g4

0xd242,	// (0x00096e36) smil_status_volume_pane_g2

0x5da0,	// (0x0008f994) postcard_pane_ParamLimits

0x5da0,	// (0x0008f994) postcard_pane

0x5de2,	// (0x0008f9d6) postcard_pane_g1_ParamLimits

0x5de2,	// (0x0008f9d6) postcard_pane_g1

0x5df0,	// (0x0008f9e4) postcard_pane_g2_ParamLimits

0x5df0,	// (0x0008f9e4) postcard_pane_g2

0x5dfc,	// (0x0008f9f0) postcard_pane_g3_ParamLimits

0x5dfc,	// (0x0008f9f0) postcard_pane_g3

0x5e08,	// (0x0008f9fc) postcard_pane_g4_ParamLimits

0x5e08,	// (0x0008f9fc) postcard_pane_g4

0x5e16,	// (0x0008fa0a) postcard_pane_g5_ParamLimits

0x5e16,	// (0x0008fa0a) postcard_pane_g5

0x5e2b,	// (0x0008fa1f) postcard_pane_g6_ParamLimits

0x5e2b,	// (0x0008fa1f) postcard_pane_g6

0x5de2,	// (0x0008f9d6) postcard_pane_g7_ParamLimits

0x5de2,	// (0x0008f9d6) postcard_pane_g7

0x0006,

0xf435,	// (0x00099029) postcard_pane_g_ParamLimits

0xf435,	// (0x00099029) postcard_pane_g

0x5e3f,	// (0x0008fa33) main_mp2_pane_g1_ParamLimits

0x5e3f,	// (0x0008fa33) main_mp2_pane_g1

0x5e4b,	// (0x0008fa3f) main_mp2_pane_g2_ParamLimits

0x5e4b,	// (0x0008fa3f) main_mp2_pane_g2

0x5e57,	// (0x0008fa4b) main_mp2_pane_g3_ParamLimits

0x5e57,	// (0x0008fa4b) main_mp2_pane_g3

0x0002,

0xf444,	// (0x00099038) main_mp2_pane_g_ParamLimits

0xf444,	// (0x00099038) main_mp2_pane_g

0x5e63,	// (0x0008fa57) main_mp2_pane_t1_ParamLimits

0x5e63,	// (0x0008fa57) main_mp2_pane_t1

0x5e78,	// (0x0008fa6c) main_mp2_pane_t2_ParamLimits

0x5e78,	// (0x0008fa6c) main_mp2_pane_t2

0x5e8a,	// (0x0008fa7e) main_mp2_pane_t3_ParamLimits

0x5e8a,	// (0x0008fa7e) main_mp2_pane_t3

0x0002,

0xf44b,	// (0x0009903f) main_mp2_pane_t_ParamLimits

0xf44b,	// (0x0009903f) main_mp2_pane_t

0x5e9c,	// (0x0008fa90) pec_content_pane_ParamLimits

0x5e9c,	// (0x0008fa90) pec_content_pane

0x0b6f,	// (0x0008a763) scroll_pane_cp015

0x5eae,	// (0x0008faa2) pec_attribute_pane_ParamLimits

0x5eae,	// (0x0008faa2) pec_attribute_pane

0x5ebe,	// (0x0008fab2) pec_content_pane_g1_ParamLimits

0x5ebe,	// (0x0008fab2) pec_content_pane_g1

0x5eca,	// (0x0008fabe) pec_content_pane_t1_ParamLimits

0x5eca,	// (0x0008fabe) pec_content_pane_t1

0x5edc,	// (0x0008fad0) pec_content_pane_t2_ParamLimits

0x5edc,	// (0x0008fad0) pec_content_pane_t2

0x0001,

0xf452,	// (0x00099046) pec_content_pane_t_ParamLimits

0xf452,	// (0x00099046) pec_content_pane_t

0x5eee,	// (0x0008fae2) list_single_graphic_pane_cp01_ParamLimits

0x5eee,	// (0x0008fae2) list_single_graphic_pane_cp01

0x0717,	// (0x0008a30b) bg_popup_sub_pane_cp04

0x5f04,	// (0x0008faf8) popup_mup_playback_window_g1

0x5f10,	// (0x0008fb04) popup_mup_playback_window_t1

0x5f25,	// (0x0008fb19) popup_mup_playback_window_t2

0x0001,

0xf457,	// (0x0009904b) popup_mup_playback_window_t

0x5f7a,	// (0x0008fb6e) main_image_pane_g1_ParamLimits

0x5f7a,	// (0x0008fb6e) main_image_pane_g1

0x6057,	// (0x0008fc4b) scroll_pane_cp018_ParamLimits

0x6057,	// (0x0008fc4b) scroll_pane_cp018

0x606f,	// (0x0008fc63) scroll_pane_cp016_ParamLimits

0x606f,	// (0x0008fc63) scroll_pane_cp016

0x60a3,	// (0x0008fc97) smil2_image_pane_ParamLimits

0x60a3,	// (0x0008fc97) smil2_image_pane

0x60d3,	// (0x0008fcc7) smil2_root_pane_ParamLimits

0x60d3,	// (0x0008fcc7) smil2_root_pane

0x610b,	// (0x0008fcff) smil2_text_pane_ParamLimits

0x610b,	// (0x0008fcff) smil2_text_pane

0x04bc,	// (0x0008a0b0) bg_list_pane_cp06

0x6193,	// (0x0008fd87) grid_radio_pane

0x04bc,	// (0x0008a0b0) bg_popup_window_pane_cp06

0x619b,	// (0x0008fd8f) main_fmradio_pane_t1

0xd0c2,	// (0x00096cb6) heading_pane_cp04

0x61a9,	// (0x0008fd9d) main_fmradio_pane_t2

0xd0ca,	// (0x00096cbe) popup_cale_lunar_info_window_g1

0x61b7,	// (0x0008fdab) main_fmradio_pane_t3

0xd0d2,	// (0x00096cc6) popup_cale_lunar_info_window_g2

0x61c5,	// (0x0008fdb9) main_fmradio_pane_t4

0x0001,

0x61d3,	// (0x0008fdc7) main_fmradio_pane_t5

0x0004,

0xf54a,	// (0x0009913e) popup_cale_lunar_info_window_g

0xf46c,	// (0x00099060) main_fmradio_pane_t

0x61e1,	// (0x0008fdd5) wait_bar_pane_cp03

0x61e9,	// (0x0008fddd) cell_fmradio_pane_ParamLimits

0x61e9,	// (0x0008fddd) cell_fmradio_pane

0x5de2,	// (0x0008f9d6) cell_fmradio_pane_g1_ParamLimits

0x5de2,	// (0x0008f9d6) cell_fmradio_pane_g1

0x04bc,	// (0x0008a0b0) grid_highlight_pane_cp011

0x61fc,	// (0x0008fdf0) poc_content_pane_ParamLimits

0x61fc,	// (0x0008fdf0) poc_content_pane

0x620e,	// (0x0008fe02) scroll_pane_cp019

0x6216,	// (0x0008fe0a) popup_call_poc_act_window_ParamLimits

0x6216,	// (0x0008fe0a) popup_call_poc_act_window

0x623a,	// (0x0008fe2e) popup_call_poc_inact_window_ParamLimits

0x623a,	// (0x0008fe2e) popup_call_poc_inact_window

0xf50e,	// (0x00099102) bg_popup_call_poc_act_pane_g

0xd082,	// (0x00096c76) bg_popup_call_poc_inact_pane_g1

0xd08a,	// (0x00096c7e) bg_popup_call_poc_inact_pane_g2

0x6253,	// (0x0008fe47) popup_call_poc_act_window_g2

0xd092,	// (0x00096c86) bg_popup_call_poc_inact_pane_g3

0xd012,	// (0x00096c06) bg_popup_call_poc_inact_pane_g4

0xd09a,	// (0x00096c8e) bg_popup_call_poc_inact_pane_g5

0x625b,	// (0x0008fe4f) popup_call_poc_act_window_t1_ParamLimits

0x625b,	// (0x0008fe4f) popup_call_poc_act_window_t1

0x6283,	// (0x0008fe77) popup_call_poc_act_window_t2_ParamLimits

0x6283,	// (0x0008fe77) popup_call_poc_act_window_t2

0x62ab,	// (0x0008fe9f) popup_call_poc_act_window_t3_ParamLimits

0x62ab,	// (0x0008fe9f) popup_call_poc_act_window_t3

0x62d3,	// (0x0008fec7) popup_call_poc_act_window_t4_ParamLimits

0x62d3,	// (0x0008fec7) popup_call_poc_act_window_t4

0x0003,

0xf477,	// (0x0009906b) popup_call_poc_act_window_t_ParamLimits

0xf477,	// (0x0009906b) popup_call_poc_act_window_t

0xd0a2,	// (0x00096c96) bg_popup_call_poc_inact_pane_g6

0xd0aa,	// (0x00096c9e) bg_popup_call_poc_inact_pane_g7

0xd0b2,	// (0x00096ca6) bg_popup_call_poc_inact_pane_g8

0x62e5,	// (0x0008fed9) popup_call_poc_inact_window_g2

0xd0ba,	// (0x00096cae) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf525,	// (0x00099119) bg_popup_call_poc_inact_pane_g

0x62ed,	// (0x0008fee1) popup_call_poc_inact_window_t1_ParamLimits

0x62ed,	// (0x0008fee1) popup_call_poc_inact_window_t1

0x6302,	// (0x0008fef6) popup_call_poc_inact_window_t2_ParamLimits

0x6302,	// (0x0008fef6) popup_call_poc_inact_window_t2

0x6317,	// (0x0008ff0b) popup_call_poc_inact_window_t3_ParamLimits

0x6317,	// (0x0008ff0b) popup_call_poc_inact_window_t3

0x0002,

0xf480,	// (0x00099074) popup_call_poc_inact_window_t_ParamLimits

0xf480,	// (0x00099074) popup_call_poc_inact_window_t

0xd1ba,	// (0x00096dae) context_pane_ParamLimits

0x6d05,	// (0x000908f9) signal_pane_ParamLimits

0x09c4,	// (0x0008a5b8) main_call2_pane

0xd193,	// (0x00096d87) popup_phob_thumbnail2_window_ParamLimits

0xd193,	// (0x00096d87) popup_phob_thumbnail2_window

0xc381,	// (0x00095f75) aid_hotspot_pointer_arrow_pane

0xc389,	// (0x00095f7d) aid_hotspot_pointer_hand_pane

0x67f3,	// (0x000903e7) phob_pre_status_pane_g5

0x0739,	// (0x0008a32d) cams_zoom_pane_ParamLimits

0x0739,	// (0x0008a32d) image_vga_pane_ParamLimits

0x07a0,	// (0x0008a394) main_camera_pane_g1_ParamLimits

0x07a0,	// (0x0008a394) main_camera_pane_g2_ParamLimits

0x07a0,	// (0x0008a394) main_camera_pane_g3_ParamLimits

0x07a0,	// (0x0008a394) main_camera_pane_g4_ParamLimits

0x07a0,	// (0x0008a394) main_camera_pane_g5_ParamLimits

0x07a0,	// (0x0008a394) main_camera_pane_g6_ParamLimits

0x07a0,	// (0x0008a394) main_camera_pane_g7_ParamLimits

0xf1ab,	// (0x00098d9f) main_camera_pane_g_ParamLimits

0x0a14,	// (0x0008a608) main_camera_pane_t1_ParamLimits

0x0a14,	// (0x0008a608) main_camera_pane_t2_ParamLimits

0xf1bc,	// (0x00098db0) main_camera_pane_t_ParamLimits

0x0717,	// (0x0008a30b) bg_popup_preview_window_pane_cp01_ParamLimits

0x0717,	// (0x0008a30b) bg_popup_preview_window_pane_cp01

0x632c,	// (0x0008ff20) popup_phob_thumbnail2_window_g1_ParamLimits

0x632c,	// (0x0008ff20) popup_phob_thumbnail2_window_g1

0x04bc,	// (0x0008a0b0) call2_cli_visual_pane

0x6353,	// (0x0008ff47) popup_call2_audio_conf_window_ParamLimits

0x6353,	// (0x0008ff47) popup_call2_audio_conf_window

0x6373,	// (0x0008ff67) popup_call2_audio_first_window_ParamLimits

0x6373,	// (0x0008ff67) popup_call2_audio_first_window

0x6409,	// (0x0008fffd) popup_call2_audio_in_window_ParamLimits

0x6409,	// (0x0008fffd) popup_call2_audio_in_window

0x6451,	// (0x00090045) popup_call2_audio_out_window_ParamLimits

0x6451,	// (0x00090045) popup_call2_audio_out_window

0x64bb,	// (0x000900af) popup_call2_audio_second_window_ParamLimits

0x64bb,	// (0x000900af) popup_call2_audio_second_window

0x6521,	// (0x00090115) popup_call2_audio_wait_window_ParamLimits

0x6521,	// (0x00090115) popup_call2_audio_wait_window

0x04bc,	// (0x0008a0b0) bg_popup_call2_act_pane_cp03

0x06f9,	// (0x0008a2ed) list_conf_pane_cp

0x655b,	// (0x0009014f) popup_call2_audio_conf_window_t1

0x6569,	// (0x0009015d) list_single_graphic_popup_conf2_pane_ParamLimits

0x6569,	// (0x0009015d) list_single_graphic_popup_conf2_pane

0x527c,	// (0x0008ee70) list_highlight_pane_cp04

0x657c,	// (0x00090170) list_single_graphic_popup_conf2_pane_g1

0x528d,	// (0x0008ee81) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf487,	// (0x0009907b) list_single_graphic_popup_conf2_pane_g

0x6586,	// (0x0009017a) list_single_graphic_popup_conf2_pane_t1

0x6594,	// (0x00090188) bg_popup_call2_act_pane_cp01_ParamLimits

0x6594,	// (0x00090188) bg_popup_call2_act_pane_cp01

0x661e,	// (0x00090212) call_type_pane_cp05_ParamLimits

0x661e,	// (0x00090212) call_type_pane_cp05

0x6672,	// (0x00090266) popup_call2_audio_second_window_g1_ParamLimits

0x6672,	// (0x00090266) popup_call2_audio_second_window_g1

0xc3b7,	// (0x00095fab) popup_call2_audio_second_window_g2_ParamLimits

0xc3b7,	// (0x00095fab) popup_call2_audio_second_window_g2

0x0002,

0xf48c,	// (0x00099080) popup_call2_audio_second_window_g_ParamLimits

0xf48c,	// (0x00099080) popup_call2_audio_second_window_g

0xc41c,	// (0x00096010) popup_call2_audio_second_window_t1_ParamLimits

0xc41c,	// (0x00096010) popup_call2_audio_second_window_t1

0xc4d7,	// (0x000960cb) popup_call2_audio_second_window_t2_ParamLimits

0xc4d7,	// (0x000960cb) popup_call2_audio_second_window_t2

0xc52a,	// (0x0009611e) popup_call2_audio_second_window_t3_ParamLimits

0xc52a,	// (0x0009611e) popup_call2_audio_second_window_t3

0x0003,

0xf493,	// (0x00099087) popup_call2_audio_second_window_t_ParamLimits

0xf493,	// (0x00099087) popup_call2_audio_second_window_t

0x04bc,	// (0x0008a0b0) bg_popup_call2_in_pane_cp02

0x04c6,	// (0x0008a0ba) call_type_pane_cp04

0x66c6,	// (0x000902ba) popup_call2_audio_wait_window_g1

0x66ce,	// (0x000902c2) popup_call2_audio_wait_window_g2

0x0001,

0xf49c,	// (0x00099090) popup_call2_audio_wait_window_g

0x04de,	// (0x0008a0d2) popup_call2_audio_wait_window_t3

0xc61d,	// (0x00096211) bg_popup_call2_act_pane_ParamLimits

0xc61d,	// (0x00096211) bg_popup_call2_act_pane

0xc6dd,	// (0x000962d1) call_type_pane_cp03_ParamLimits

0xc6dd,	// (0x000962d1) call_type_pane_cp03

0xc741,	// (0x00096335) popup_call2_audio_first_window_g1_ParamLimits

0xc741,	// (0x00096335) popup_call2_audio_first_window_g1

0xc7b1,	// (0x000963a5) popup_call2_audio_first_window_g2_ParamLimits

0xc7b1,	// (0x000963a5) popup_call2_audio_first_window_g2

0xc815,	// (0x00096409) popup_call2_audio_first_window_g3_ParamLimits

0xc815,	// (0x00096409) popup_call2_audio_first_window_g3

0x0004,

0xf4a1,	// (0x00099095) popup_call2_audio_first_window_g_ParamLimits

0xf4a1,	// (0x00099095) popup_call2_audio_first_window_g

0xc89d,	// (0x00096491) popup_call2_audio_first_window_t1_ParamLimits

0xc89d,	// (0x00096491) popup_call2_audio_first_window_t1

0xc9a0,	// (0x00096594) popup_call2_audio_first_window_t4_ParamLimits

0xc9a0,	// (0x00096594) popup_call2_audio_first_window_t4

0xca83,	// (0x00096677) popup_call2_audio_first_window_t5_ParamLimits

0xca83,	// (0x00096677) popup_call2_audio_first_window_t5

0x0003,

0xf4ac,	// (0x000990a0) popup_call2_audio_first_window_t_ParamLimits

0xf4ac,	// (0x000990a0) popup_call2_audio_first_window_t

0x070f,	// (0x0008a303) bg_popup_call2_act_pane_g1

0xd0da,	// (0x00096cce) popup_cale_lunar_info_window_t1

0xd0e8,	// (0x00096cdc) popup_cale_lunar_info_window_t2

0xd0f6,	// (0x00096cea) popup_cale_lunar_info_window_t3

0x04bc,	// (0x0008a0b0) bg_popup_call2_bubble_pane

0xcb84,	// (0x00096778) bg_popup_call2_in_pane_cp01_ParamLimits

0xcb84,	// (0x00096778) bg_popup_call2_in_pane_cp01

0x0198,	// (0x00089d8c) call_type_pane_cp02

0x66d6,	// (0x000902ca) popup_call2_audio_out_window_g1_ParamLimits

0x66d6,	// (0x000902ca) popup_call2_audio_out_window_g1

0xcbcc,	// (0x000967c0) popup_call2_audio_out_window_g2_ParamLimits

0xcbcc,	// (0x000967c0) popup_call2_audio_out_window_g2

0x6702,	// (0x000902f6) popup_call2_audio_out_window_g3_ParamLimits

0x6702,	// (0x000902f6) popup_call2_audio_out_window_g3

0x0003,

0xf4b5,	// (0x000990a9) popup_call2_audio_out_window_g_ParamLimits

0xf4b5,	// (0x000990a9) popup_call2_audio_out_window_g

0xcc03,	// (0x000967f7) popup_call2_audio_out_window_t1_ParamLimits

0xcc03,	// (0x000967f7) popup_call2_audio_out_window_t1

0xcc62,	// (0x00096856) popup_call2_audio_out_window_t2_ParamLimits

0xcc62,	// (0x00096856) popup_call2_audio_out_window_t2

0xccb6,	// (0x000968aa) popup_call2_audio_out_window_t3_ParamLimits

0xccb6,	// (0x000968aa) popup_call2_audio_out_window_t3

0xcccc,	// (0x000968c0) popup_call2_audio_out_window_t4_ParamLimits

0xcccc,	// (0x000968c0) popup_call2_audio_out_window_t4

0xcce2,	// (0x000968d6) popup_call2_audio_out_window_t5_ParamLimits

0xcce2,	// (0x000968d6) popup_call2_audio_out_window_t5

0x0005,

0xf4be,	// (0x000990b2) popup_call2_audio_out_window_t_ParamLimits

0xf4be,	// (0x000990b2) popup_call2_audio_out_window_t

0xcd46,	// (0x0009693a) bg_popup_call2_in_pane_ParamLimits

0xcd46,	// (0x0009693a) bg_popup_call2_in_pane

0xcda2,	// (0x00096996) popup_call2_audio_in_window_g1_ParamLimits

0xcda2,	// (0x00096996) popup_call2_audio_in_window_g1

0xcdda,	// (0x000969ce) popup_call2_audio_in_window_g2_ParamLimits

0xcdda,	// (0x000969ce) popup_call2_audio_in_window_g2

0xce12,	// (0x00096a06) popup_call2_audio_in_window_g3_ParamLimits

0xce12,	// (0x00096a06) popup_call2_audio_in_window_g3

0x0003,

0xf4cb,	// (0x000990bf) popup_call2_audio_in_window_g_ParamLimits

0xf4cb,	// (0x000990bf) popup_call2_audio_in_window_g

0xce6a,	// (0x00096a5e) popup_call2_audio_in_window_t1_ParamLimits

0xce6a,	// (0x00096a5e) popup_call2_audio_in_window_t1

0xceea,	// (0x00096ade) popup_call2_audio_in_window_t2_ParamLimits

0xceea,	// (0x00096ade) popup_call2_audio_in_window_t2

0xcf6a,	// (0x00096b5e) popup_call2_audio_in_window_t3_ParamLimits

0xcf6a,	// (0x00096b5e) popup_call2_audio_in_window_t3

0xcf84,	// (0x00096b78) popup_call2_audio_in_window_t4_ParamLimits

0xcf84,	// (0x00096b78) popup_call2_audio_in_window_t4

0xcf96,	// (0x00096b8a) popup_call2_audio_in_window_t5_ParamLimits

0xcf96,	// (0x00096b8a) popup_call2_audio_in_window_t5

0xcfa8,	// (0x00096b9c) popup_call2_audio_in_window_t6_ParamLimits

0xcfa8,	// (0x00096b9c) popup_call2_audio_in_window_t6

0x0005,

0xf4d4,	// (0x000990c8) popup_call2_audio_in_window_t_ParamLimits

0xf4d4,	// (0x000990c8) popup_call2_audio_in_window_t

0x070f,	// (0x0008a303) bg_popup_call2_in_pane_g1

0xd104,	// (0x00096cf8) popup_cale_lunar_info_window_t4

0x0003,

0xf54f,	// (0x00099143) popup_cale_lunar_info_window_t

0x0717,	// (0x0008a30b) bg_popup_call2_rect_pane_ParamLimits

0x0717,	// (0x0008a30b) bg_popup_call2_rect_pane

0x04bc,	// (0x0008a0b0) call2_cli_visual_graphic_pane

0x04bc,	// (0x0008a0b0) call2_cli_visual_text_pane

0xd255,	// (0x00096e49) smil_status_volume_pane_g3

0x0002,

0x072f,	// (0x0008a323) call2_cli_visual_graphic_pane_g1

0x072f,	// (0x0008a323) call2_cli_visual_graphic_pane_g2

0x072f,	// (0x0008a323) call2_cli_visual_graphic_pane_g3

0x0002,

0xf4e1,	// (0x000990d5) call2_cli_visual_graphic_pane_g

0xcfba,	// (0x00096bae) bg_popup_call2_rect_pane_g1

0x08e9,	// (0x0008a4dd) bg_popup_call2_rect_pane_g2

0xcfc2,	// (0x00096bb6) bg_popup_call2_rect_pane_g3

0xcfca,	// (0x00096bbe) bg_popup_call2_rect_pane_g4

0xcfd2,	// (0x00096bc6) bg_popup_call2_rect_pane_g5

0xcfda,	// (0x00096bce) bg_popup_call2_rect_pane_g6

0xcfe2,	// (0x00096bd6) bg_popup_call2_rect_pane_g7

0xcfea,	// (0x00096bde) bg_popup_call2_rect_pane_g8

0xcff2,	// (0x00096be6) bg_popup_call2_rect_pane_g9

0x0008,

0xf4e8,	// (0x000990dc) bg_popup_call2_rect_pane_g

0xcffa,	// (0x00096bee) bg_popup_call2_bubble_pane_g1

0xd002,	// (0x00096bf6) bg_popup_call2_bubble_pane_g2

0xd00a,	// (0x00096bfe) bg_popup_call2_bubble_pane_g3

0xd012,	// (0x00096c06) bg_popup_call2_bubble_pane_g4

0xd01a,	// (0x00096c0e) bg_popup_call2_bubble_pane_g5

0xd022,	// (0x00096c16) bg_popup_call2_bubble_pane_g6

0xd02a,	// (0x00096c1e) bg_popup_call2_bubble_pane_g7

0xd032,	// (0x00096c26) bg_popup_call2_bubble_pane_g8

0xd03a,	// (0x00096c2e) bg_popup_call2_bubble_pane_g9

0x0008,

0xf4fb,	// (0x000990ef) bg_popup_call2_bubble_pane_g

0x38c4,	// (0x0008d4b8) aid_cale_week_size_cell_pane

0x3e74,	// (0x0008da68) aid_cams_cif_uncrop_pane_ParamLimits

0x3e74,	// (0x0008da68) aid_cams_cif_uncrop_pane

0x3fca,	// (0x0008dbbe) aid_cams_size_cell_ParamLimits

0x3fca,	// (0x0008dbbe) aid_cams_size_cell

0x3fde,	// (0x0008dbd2) grid_cams_pane_ParamLimits

0x3ff8,	// (0x0008dbec) linegrid_cams_pane_ParamLimits

0x40de,	// (0x0008dcd2) call_video_pane_t1

0x40fc,	// (0x0008dcf0) call_video_pane_t2

0x0001,

0xf208,	// (0x00098dfc) call_video_pane_t

0x4510,	// (0x0008e104) aid_cale_month_size_cell_pane_ParamLimits

0x4510,	// (0x0008e104) aid_cale_month_size_cell_pane

0xf593,	// (0x00099187) smil_status_volume_pane_g

0xd262,	// (0x00096e56) volume_smil_pane_ParamLimits

0xc186,	// (0x00095d7a) aid_popup2_width_pane

0x381b,	// (0x0008d40f) cell_qdial_pane_g4_ParamLimits

0x381b,	// (0x0008d40f) cell_qdial_pane_g4

0x5553,	// (0x0008f147) aid_blid_cardinal_pane_ParamLimits

0x555f,	// (0x0008f153) aid_blid_destination_pane_ParamLimits

0x555f,	// (0x0008f153) aid_blid_destination_pane

0x0717,	// (0x0008a30b) bg_popup_call_poc_act_pane_ParamLimits

0x0717,	// (0x0008a30b) bg_popup_call_poc_act_pane

0x0717,	// (0x0008a30b) bg_popup_call_poc_inact_pane_ParamLimits

0x0717,	// (0x0008a30b) bg_popup_call_poc_inact_pane

0xd042,	// (0x00096c36) bg_popup_call_poc_act_pane_g1

0xd04a,	// (0x00096c3e) bg_popup_call_poc_act_pane_g2

0xd052,	// (0x00096c46) bg_popup_call_poc_act_pane_g3

0xd012,	// (0x00096c06) bg_popup_call_poc_act_pane_g4

0xd01a,	// (0x00096c0e) bg_popup_call_poc_act_pane_g5

0xd05a,	// (0x00096c4e) bg_popup_call_poc_act_pane_g6

0xd02a,	// (0x00096c1e) bg_popup_call_poc_act_pane_g7

0xd062,	// (0x00096c56) bg_popup_call_poc_act_pane_g8

0x04bc,	// (0x0008a0b0) main_usb_pane

0xd16e,	// (0x00096d62) popup_cale_lunar_info_window

0x43c8,	// (0x0008dfbc) im_reading_pane_t1_ParamLimits

0x0ac7,	// (0x0008a6bb) list_im_pane_ParamLimits

0x0ad8,	// (0x0008a6cc) scroll_pane_cp07_ParamLimits

0x04bc,	// (0x0008a0b0) grid_highlight_pane_cp012

0x0717,	// (0x0008a30b) mup_scale_pane_ParamLimits

0x5de2,	// (0x0008f9d6) main_usb_pane_g1_ParamLimits

0x5de2,	// (0x0008f9d6) main_usb_pane_g1

0x6751,	// (0x00090345) main_usb_pane_g2_ParamLimits

0x6751,	// (0x00090345) main_usb_pane_g2

0x0001,

0xf538,	// (0x0009912c) main_usb_pane_g_ParamLimits

0xf538,	// (0x0009912c) main_usb_pane_g

0x6767,	// (0x0009035b) main_usb_pane_t1_ParamLimits

0x6767,	// (0x0009035b) main_usb_pane_t1

0x6779,	// (0x0009036d) main_usb_pane_t2_ParamLimits

0x6779,	// (0x0009036d) main_usb_pane_t2

0x678b,	// (0x0009037f) main_usb_pane_t3_ParamLimits

0x678b,	// (0x0009037f) main_usb_pane_t3

0x679d,	// (0x00090391) main_usb_pane_t4_ParamLimits

0x679d,	// (0x00090391) main_usb_pane_t4

0x67af,	// (0x000903a3) main_usb_pane_t5_ParamLimits

0x67af,	// (0x000903a3) main_usb_pane_t5

0x67c1,	// (0x000903b5) main_usb_pane_t6_ParamLimits

0x67c1,	// (0x000903b5) main_usb_pane_t6

0x0005,

0xf53d,	// (0x00099131) main_usb_pane_t_ParamLimits

0x5502,	// (0x0008f0f6) aid_text_placing

0x550b,	// (0x0008f0ff) main_location2_pane_t1_ParamLimits

0x551d,	// (0x0008f111) main_location2_pane_t2_ParamLimits

0x552f,	// (0x0008f123) main_location2_pane_t3_ParamLimits

0x5541,	// (0x0008f135) main_location2_pane_t4_ParamLimits

0x5541,	// (0x0008f135) main_location2_pane_t4

0xf344,	// (0x00098f38) main_location2_pane_t_ParamLimits

0x0753,	// (0x0008a347) find_pinb_pane_g2_ParamLimits

0x0753,	// (0x0008a347) find_pinb_pane_g2

0x0001,

0xf0c0,	// (0x00098cb4) find_pinb_pane_g_ParamLimits

0xf0c0,	// (0x00098cb4) find_pinb_pane_g

0x075f,	// (0x0008a353) find_pinb_pane_t1_ParamLimits

0x0771,	// (0x0008a365) find_pinb_pane_t2_ParamLimits

0xf0c5,	// (0x00098cb9) find_pinb_pane_t_ParamLimits

0x04bc,	// (0x0008a0b0) main_call3_pane

0x49f7,	// (0x0008e5eb) cale_month_day_heading_pane_t1_ParamLimits

0x4a39,	// (0x0008e62d) cale_month_day_heading_pane_t2_ParamLimits

0x4a6e,	// (0x0008e662) cale_month_day_heading_pane_t3_ParamLimits

0x4aa3,	// (0x0008e697) cale_month_day_heading_pane_t4_ParamLimits

0x4ae0,	// (0x0008e6d4) cale_month_day_heading_pane_t5_ParamLimits

0x4b25,	// (0x0008e719) cale_month_day_heading_pane_t6_ParamLimits

0x4b6a,	// (0x0008e75e) cale_month_day_heading_pane_t7_ParamLimits

0xf240,	// (0x00098e34) cale_month_day_heading_pane_t_ParamLimits

0x0d22,	// (0x0008a916) smil_status_volume_pane

0x5dbe,	// (0x0008f9b2) postcard_address_pane_ParamLimits

0x5dbe,	// (0x0008f9b2) postcard_address_pane

0x5dd0,	// (0x0008f9c4) postcard_message_pane_ParamLimits

0x5dd0,	// (0x0008f9c4) postcard_message_pane

0x672e,	// (0x00090322) call2_cli_visual_pane_t1_ParamLimits

0x672e,	// (0x00090322) call2_cli_visual_pane_t1

0xd28f,	// (0x00096e83) postcard_message_pane_t1_ParamLimits

0xd28f,	// (0x00096e83) postcard_message_pane_t1

0xd277,	// (0x00096e6b) postcard_address_pane_t1_ParamLimits

0xd277,	// (0x00096e6b) postcard_address_pane_t1

0x6eb8,	// (0x00090aac) popup_call3_audio_in_window_ParamLimits

0x6eb8,	// (0x00090aac) popup_call3_audio_in_window

0x6d43,	// (0x00090937) bg_popup_call3_in_pane_ParamLimits

0x6d43,	// (0x00090937) bg_popup_call3_in_pane

0x6db9,	// (0x000909ad) popup_call3_audio_in_window_g1_ParamLimits

0x6db9,	// (0x000909ad) popup_call3_audio_in_window_g1

0x6dd9,	// (0x000909cd) popup_call3_audio_in_window_g2_ParamLimits

0x6dd9,	// (0x000909cd) popup_call3_audio_in_window_g2

0x6df9,	// (0x000909ed) popup_call3_audio_in_window_g3_ParamLimits

0x6df9,	// (0x000909ed) popup_call3_audio_in_window_g3

0x0003,

0xf59a,	// (0x0009918e) popup_call3_audio_in_window_g_ParamLimits

0xf59a,	// (0x0009918e) popup_call3_audio_in_window_g

0x6e2a,	// (0x00090a1e) popup_call3_audio_in_window_t1_ParamLimits

0x6e2a,	// (0x00090a1e) popup_call3_audio_in_window_t1

0x6e68,	// (0x00090a5c) popup_call3_audio_in_window_t2_ParamLimits

0x6e68,	// (0x00090a5c) popup_call3_audio_in_window_t2

0x6ea6,	// (0x00090a9a) popup_call3_audio_in_window_t3_ParamLimits

0x6ea6,	// (0x00090a9a) popup_call3_audio_in_window_t3

0x0002,

0xf5a3,	// (0x00099197) popup_call3_audio_in_window_t_ParamLimits

0xf5a3,	// (0x00099197) popup_call3_audio_in_window_t

0x09c4,	// (0x0008a5b8) bg_popup_call3_rect_pane

0xcfba,	// (0x00096bae) bg_popup_call3_rect_pane_g1

0x08e9,	// (0x0008a4dd) bg_popup_call3_rect_pane_g2

0xcfc2,	// (0x00096bb6) bg_popup_call3_rect_pane_g3

0xcfca,	// (0x00096bbe) bg_popup_call3_rect_pane_g4

0xcfd2,	// (0x00096bc6) bg_popup_call3_rect_pane_g5

0xcfda,	// (0x00096bce) bg_popup_call3_rect_pane_g6

0xcfe2,	// (0x00096bd6) bg_popup_call3_rect_pane_g7

0x009f,	// (0x00089c93) mup_visualizer_osc_pane

0x009f,	// (0x00089c93) mup_visualizer_spec_pane

0x6d73,	// (0x00090967) call3_video_qcif_pane_ParamLimits

0x6d73,	// (0x00090967) call3_video_qcif_pane

0x6d86,	// (0x0009097a) call3_video_qcif_uncrop_pane_ParamLimits

0x6d86,	// (0x0009097a) call3_video_qcif_uncrop_pane

0x6d94,	// (0x00090988) call3_video_subqcif_pane_ParamLimits

0x6d94,	// (0x00090988) call3_video_subqcif_pane

0x6da8,	// (0x0009099c) call3_video_subqcif_uncrop_pane_ParamLimits

0x6da8,	// (0x0009099c) call3_video_subqcif_uncrop_pane

0x6e19,	// (0x00090a0d) popup_call3_audio_in_window_g4_ParamLimits

0x6e19,	// (0x00090a0d) popup_call3_audio_in_window_g4

0x009f,	// (0x00089c93) mup_spec_half_pane

0x009f,	// (0x00089c93) mup_spec_half_pane_cp

0x009f,	// (0x00089c93) mup_osc_middle_pane

0x09fa,	// (0x0008a5ee) mup_visualizer_osc_pane_g1

0xd208,	// (0x00096dfc) mup_spec_bar_pane_ParamLimits

0xd208,	// (0x00096dfc) mup_spec_bar_pane

0x09fa,	// (0x0008a5ee) mup_spec_bar_pane_g1

0x09fa,	// (0x0008a5ee) mup_spec_bar_pane_g2

0x0001,

0xf3be,	// (0x00098fb2) mup_spec_bar_pane_g

0x38c4,	// (0x0008d4b8) aid_cale_week_size_cell_pane_ParamLimits

0x38de,	// (0x0008d4d2) bg_cale_heading_pane_ParamLimits

0x0926,	// (0x0008a51a) bg_cale_pane_cp01_ParamLimits

0x38f6,	// (0x0008d4ea) cale_week_corner_pane_ParamLimits

0x3915,	// (0x0008d509) cale_week_day_heading_pane_ParamLimits

0x3932,	// (0x0008d526) cale_week_scroll_pane_g1_ParamLimits

0x3945,	// (0x0008d539) cale_week_scroll_pane_g2_ParamLimits

0x395d,	// (0x0008d551) cale_week_scroll_pane_g3_ParamLimits

0x3975,	// (0x0008d569) cale_week_scroll_pane_g4_ParamLimits

0x398d,	// (0x0008d581) cale_week_scroll_pane_g5_ParamLimits

0x39ad,	// (0x0008d5a1) cale_week_scroll_pane_g6_ParamLimits

0x39cd,	// (0x0008d5c1) cale_week_scroll_pane_g7_ParamLimits

0x39ed,	// (0x0008d5e1) cale_week_scroll_pane_g8_ParamLimits

0x3a11,	// (0x0008d605) cale_week_scroll_pane_g9_ParamLimits

0x3a29,	// (0x0008d61d) cale_week_scroll_pane_g10_ParamLimits

0x3a41,	// (0x0008d635) cale_week_scroll_pane_g11_ParamLimits

0x3a59,	// (0x0008d64d) cale_week_scroll_pane_g12_ParamLimits

0x3a71,	// (0x0008d665) cale_week_scroll_pane_g13_ParamLimits

0x3a71,	// (0x0008d665) cale_week_scroll_pane_g14_ParamLimits

0x3a71,	// (0x0008d665) cale_week_scroll_pane_g15_ParamLimits

0xf151,	// (0x00098d45) cale_week_scroll_pane_g_ParamLimits

0x3aad,	// (0x0008d6a1) cale_week_time_pane_ParamLimits

0x3ad1,	// (0x0008d6c5) grid_cale_week_pane_ParamLimits

0x0943,	// (0x0008a537) listscroll_cale_week_pane_t1

0x0955,	// (0x0008a549) scroll_pane_cp08_ParamLimits

0x4570,	// (0x0008e164) cale_month_corner_pane_ParamLimits

0x0cf8,	// (0x0008a8ec) cale_month_pane_t1

0x498a,	// (0x0008e57e) cale_month_week_pane_ParamLimits

0x5178,	// (0x0008ed6c) popup_call_status_window_g1_ParamLimits

0x518c,	// (0x0008ed80) popup_call_status_window_g2_ParamLimits

0x51a0,	// (0x0008ed94) popup_call_status_window_g3_ParamLimits

0xf2cb,	// (0x00098ebf) popup_call_status_window_g_ParamLimits

0x5208,	// (0x0008edfc) aid_call2_pane

0x5bc7,	// (0x0008f7bb) msg_header_pane_g1

0x5dbe,	// (0x0008f9b2) postcard_address2_pane_ParamLimits

0x5dbe,	// (0x0008f9b2) postcard_address2_pane

0x5dd0,	// (0x0008f9c4) postcard_message2_pane_ParamLimits

0x5dd0,	// (0x0008f9c4) postcard_message2_pane

0x6d13,	// (0x00090907) message2_row_pane_ParamLimits

0x6d13,	// (0x00090907) message2_row_pane

0x6d30,	// (0x00090924) address2_row_pane_ParamLimits

0x6d30,	// (0x00090924) address2_row_pane

0xd1d5,	// (0x00096dc9) postcard_message2_row_pane_g1

0xd1dd,	// (0x00096dd1) postcard_message2_row_pane_t1

0xd1d5,	// (0x00096dc9) address2_row_pane_g1

0xd1dd,	// (0x00096dd1) address2_row_pane_t1

0x3e0b,	// (0x0008d9ff) aid_size_cell_vorec

0x04bc,	// (0x0008a0b0) main_rss_pane

0xd1eb,	// (0x00096ddf) rss_list_single_pane_ParamLimits

0xd1eb,	// (0x00096ddf) rss_list_single_pane

0xd1f9,	// (0x00096ded) rss_list_single_pane_t1

0xd1f9,	// (0x00096ded) rss_list_single_pane_t2

0x0001,

0xf58e,	// (0x00099182) rss_list_single_pane_t

0x04bc,	// (0x0008a0b0) main_camera2_pane

0x04bc,	// (0x0008a0b0) main_video2_pane

0xd2ab,	// (0x00096e9f) cams_zoom_pane_cp2_ParamLimits

0xd2ab,	// (0x00096e9f) cams_zoom_pane_cp2

0xd2ab,	// (0x00096e9f) image2_vga_pane_ParamLimits

0xd2ab,	// (0x00096e9f) image2_vga_pane

0xd2b9,	// (0x00096ead) main_camera2_pane_g1_ParamLimits

0xd2b9,	// (0x00096ead) main_camera2_pane_g1

0xd2b9,	// (0x00096ead) main_camera2_pane_g2_ParamLimits

0xd2b9,	// (0x00096ead) main_camera2_pane_g2

0xd2b9,	// (0x00096ead) main_camera2_pane_g3_ParamLimits

0xd2b9,	// (0x00096ead) main_camera2_pane_g3

0xd2b9,	// (0x00096ead) main_camera2_pane_g4_ParamLimits

0xd2b9,	// (0x00096ead) main_camera2_pane_g4

0xd2b9,	// (0x00096ead) main_camera2_pane_g5_ParamLimits

0xd2b9,	// (0x00096ead) main_camera2_pane_g5

0xd2b9,	// (0x00096ead) main_camera2_pane_g6_ParamLimits

0xd2b9,	// (0x00096ead) main_camera2_pane_g6

0xd2b9,	// (0x00096ead) main_camera2_pane_g7_ParamLimits

0xd2b9,	// (0x00096ead) main_camera2_pane_g7

0xd2b9,	// (0x00096ead) main_camera2_pane_g8_ParamLimits

0xd2b9,	// (0x00096ead) main_camera2_pane_g8

0x0008,

0xf5aa,	// (0x0009919e) main_camera2_pane_g_ParamLimits

0xf5aa,	// (0x0009919e) main_camera2_pane_g

0x6eda,	// (0x00090ace) main_camera2_pane_t1_ParamLimits

0x6eda,	// (0x00090ace) main_camera2_pane_t1

0x6eda,	// (0x00090ace) main_camera2_pane_t2_ParamLimits

0x6eda,	// (0x00090ace) main_camera2_pane_t2

0x6eda,	// (0x00090ace) main_camera2_pane_t3_ParamLimits

0x6eda,	// (0x00090ace) main_camera2_pane_t3

0x6eda,	// (0x00090ace) main_camera2_pane_t4_ParamLimits

0x6eda,	// (0x00090ace) main_camera2_pane_t4

0x0006,

0xf5bd,	// (0x000991b1) main_camera2_pane_t_ParamLimits

0xf5bd,	// (0x000991b1) main_camera2_pane_t

0xd2fd,	// (0x00096ef1) cams_zoom_pane_cp4_ParamLimits

0xd2fd,	// (0x00096ef1) cams_zoom_pane_cp4

0x6eee,	// (0x00090ae2) image2_cif_pane_ParamLimits

0x6eee,	// (0x00090ae2) image2_cif_pane

0xc1eb,	// (0x00095ddf) image2_subqcif_pane_ParamLimits

0xc1eb,	// (0x00095ddf) image2_subqcif_pane

0x6efc,	// (0x00090af0) main_video2_pane_g1_ParamLimits

0x6efc,	// (0x00090af0) main_video2_pane_g1

0x6efc,	// (0x00090af0) main_video2_pane_g2_ParamLimits

0x6efc,	// (0x00090af0) main_video2_pane_g2

0x6efc,	// (0x00090af0) main_video2_pane_g3_ParamLimits

0x6efc,	// (0x00090af0) main_video2_pane_g3

0x6efc,	// (0x00090af0) main_video2_pane_g4_ParamLimits

0x6efc,	// (0x00090af0) main_video2_pane_g4

0x6efc,	// (0x00090af0) main_video2_pane_g5_ParamLimits

0x6efc,	// (0x00090af0) main_video2_pane_g5

0x6efc,	// (0x00090af0) main_video2_pane_g6_ParamLimits

0x6efc,	// (0x00090af0) main_video2_pane_g6

0x0005,

0xf5cc,	// (0x000991c0) main_video2_pane_g_ParamLimits

0xf5cc,	// (0x000991c0) main_video2_pane_g

0x6f0a,	// (0x00090afe) main_video2_pane_t1_ParamLimits

0x6f0a,	// (0x00090afe) main_video2_pane_t1

0x6f0a,	// (0x00090afe) main_video2_pane_t2_ParamLimits

0x6f0a,	// (0x00090afe) main_video2_pane_t2

0x6f0a,	// (0x00090afe) main_video2_pane_t3_ParamLimits

0x6f0a,	// (0x00090afe) main_video2_pane_t3

0x0002,

0xf5d9,	// (0x000991cd) main_video2_pane_t_ParamLimits

0xf5d9,	// (0x000991cd) main_video2_pane_t

0x6855,	// (0x00090449) call_muted_g2

0x0001,

0xf580,	// (0x00099174) call_muted_g

0x04bc,	// (0x0008a0b0) main_mup2_pane

0xc35f,	// (0x00095f53) main_mup2_pane_g1_ParamLimits

0xc35f,	// (0x00095f53) main_mup2_pane_g1

0xc35f,	// (0x00095f53) main_mup2_pane_g2_ParamLimits

0xc35f,	// (0x00095f53) main_mup2_pane_g2

0x0db1,	// (0x0008a9a5) main_mup_pane_g13_cp1

0xc1f9,	// (0x00095ded) mup_volume_pane_cp1

0xc35f,	// (0x00095f53) main_mup2_pane_g4_ParamLimits

0xc35f,	// (0x00095f53) main_mup2_pane_g4

0xc35f,	// (0x00095f53) main_mup2_pane_g5_ParamLimits

0xc35f,	// (0x00095f53) main_mup2_pane_g5

0xc35f,	// (0x00095f53) main_mup2_pane_g6_ParamLimits

0xc35f,	// (0x00095f53) main_mup2_pane_g6

0xc35f,	// (0x00095f53) main_mup2_pane_g7_ParamLimits

0xc35f,	// (0x00095f53) main_mup2_pane_g7

0x0006,

0xf5e0,	// (0x000991d4) main_mup2_pane_g_ParamLimits

0xf5e0,	// (0x000991d4) main_mup2_pane_g

0xc36d,	// (0x00095f61) main_mup2_pane_t1_ParamLimits

0xc36d,	// (0x00095f61) main_mup2_pane_t1

0xc36d,	// (0x00095f61) main_mup2_pane_t2_ParamLimits

0xc36d,	// (0x00095f61) main_mup2_pane_t2

0xc36d,	// (0x00095f61) main_mup2_pane_t3_ParamLimits

0xc36d,	// (0x00095f61) main_mup2_pane_t3

0xc36d,	// (0x00095f61) main_mup2_pane_t4_ParamLimits

0xc36d,	// (0x00095f61) main_mup2_pane_t4

0xc36d,	// (0x00095f61) main_mup2_pane_t5_ParamLimits

0xc36d,	// (0x00095f61) main_mup2_pane_t5

0xc36d,	// (0x00095f61) main_mup2_pane_t6_ParamLimits

0xc36d,	// (0x00095f61) main_mup2_pane_t6

0x0005,

0xf5ef,	// (0x000991e3) main_mup2_pane_t_ParamLimits

0xf5ef,	// (0x000991e3) main_mup2_pane_t

0x58a6,	// (0x0008f49a) mup2_visualizer_pane_ParamLimits

0x58a6,	// (0x0008f49a) mup2_visualizer_pane

0x58a6,	// (0x0008f49a) mup_progress_pane_cp_ParamLimits

0x58a6,	// (0x0008f49a) mup_progress_pane_cp

0xd3d6,	// (0x00096fca) mup_volume_pane_cp_ParamLimits

0xd3d6,	// (0x00096fca) mup_volume_pane_cp

0x07a0,	// (0x0008a394) mup2_visualizer_pane_g1_ParamLimits

0x07a0,	// (0x0008a394) mup2_visualizer_pane_g1

0x07ae,	// (0x0008a3a2) mup2_visualizer_pane_g2_ParamLimits

0x07ae,	// (0x0008a3a2) mup2_visualizer_pane_g2

0x07ae,	// (0x0008a3a2) mup2_visualizer_pane_g3_ParamLimits

0x07ae,	// (0x0008a3a2) mup2_visualizer_pane_g3

0x0002,

0xf0ca,	// (0x00098cbe) mup2_visualizer_pane_g_ParamLimits

0xf0ca,	// (0x00098cbe) mup2_visualizer_pane_g

0x618b,	// (0x0008fd7f) aid_size_cell_fmradio

0x6a07,	// (0x000905fb) aid_height_parent_landcape

0x0b56,	// (0x0008a74a) wml_content_pane_cp

0x0b5e,	// (0x0008a752) wml_tabs_pane

0x0b67,	// (0x0008a75b) popup_wml_miniature_window

0x0b6f,	// (0x0008a763) scroll_pane_cp021

0x0b83,	// (0x0008a777) wml_content_pane_comp8

0x04bc,	// (0x0008a0b0) bg_popup_sub_pane_cp05

0xd321,	// (0x00096f15) popup_wml_miniature_window_g1

0xd329,	// (0x00096f1d) wml_miniature_view_pane

0x6f1e,	// (0x00090b12) aid_size_wml_view

0x6f26,	// (0x00090b1a) wml_miniature_view_pane_g1

0x6f2f,	// (0x00090b23) wml_miniature_view_pane_g2

0x6f38,	// (0x00090b2c) wml_miniature_view_pane_g3

0x6f40,	// (0x00090b34) wml_miniature_view_pane_g4

0x6f48,	// (0x00090b3c) wml_miniature_view_pane_g5

0x6f50,	// (0x00090b44) wml_miniature_view_pane_g6

0x6f58,	// (0x00090b4c) wml_miniature_view_pane_g7

0x6f60,	// (0x00090b54) wml_miniature_view_pane_g8

0x0007,

0xf5fc,	// (0x000991f0) wml_miniature_view_pane_g

0xd331,	// (0x00096f25) background_graphic_ParamLimits

0xd331,	// (0x00096f25) background_graphic

0xd33d,	// (0x00096f31) wml_tabs_2_pane

0xd346,	// (0x00096f3a) wml_tabs_3_pane_ParamLimits

0xd346,	// (0x00096f3a) wml_tabs_3_pane

0xd358,	// (0x00096f4c) wml_tabs_4_pane_ParamLimits

0xd358,	// (0x00096f4c) wml_tabs_4_pane

0xd36e,	// (0x00096f62) wml_tabs_5_pane_ParamLimits

0xd36e,	// (0x00096f62) wml_tabs_5_pane

0xd388,	// (0x00096f7c) wml_tabs_pane_g2_ParamLimits

0xd388,	// (0x00096f7c) wml_tabs_pane_g2

0xd39d,	// (0x00096f91) wml_tabs_pane_g3_ParamLimits

0xd39d,	// (0x00096f91) wml_tabs_pane_g3

0xd3b2,	// (0x00096fa6) wml_tabs_2_active_pane_ParamLimits

0xd3b2,	// (0x00096fa6) wml_tabs_2_active_pane

0xd3b2,	// (0x00096fa6) wml_tabs_2_passive_pane_ParamLimits

0xd3b2,	// (0x00096fa6) wml_tabs_2_passive_pane

0x6f68,	// (0x00090b5c) wml_tabs_3_active_pane_cp_ParamLimits

0x6f68,	// (0x00090b5c) wml_tabs_3_active_pane_cp

0x6f7d,	// (0x00090b71) wml_tabs_3_passive_pane_ParamLimits

0x6f7d,	// (0x00090b71) wml_tabs_3_passive_pane

0x6f90,	// (0x00090b84) wml_tabs_3_passive_pane_cp_ParamLimits

0x6f90,	// (0x00090b84) wml_tabs_3_passive_pane_cp

0x6fa7,	// (0x00090b9b) tabs_4_active_pane

0x6faf,	// (0x00090ba3) tabs_4_passive_pane

0x6fb9,	// (0x00090bad) tabs_4_passive_pane_cp

0x6fc1,	// (0x00090bb5) tabs_4_passive_pane_cp2

0x6749,	// (0x0009033d) aid_height_text

0x58a6,	// (0x0008f49a) mup_volume_cont_pane_ParamLimits

0x58a6,	// (0x0008f49a) mup_volume_cont_pane

0x009f,	// (0x00089c93) aid_size_cell_pinb

0x009f,	// (0x00089c93) aid_size_list_pinb

0x58a6,	// (0x0008f49a) mup2_volume_cont_pane_ParamLimits

0x58a6,	// (0x0008f49a) mup2_volume_cont_pane

0xd3c0,	// (0x00096fb4) mup2_volume_cont_pane_g1_ParamLimits

0xd3c0,	// (0x00096fb4) mup2_volume_cont_pane_g1

0x329d,	// (0x0008ce91) aid_size_cell_touch_ParamLimits

0x329d,	// (0x0008ce91) aid_size_cell_touch

0x34ca,	// (0x0008d0be) touch_pane_ParamLimits

0x34ca,	// (0x0008d0be) touch_pane

0xc1f9,	// (0x00095ded) main_rss2_pane

0xd3f5,	// (0x00096fe9) listscroll_rss2_pane

0xd3fe,	// (0x00096ff2) rss2_navigation_pane

0xd406,	// (0x00096ffa) list_rss2_pane

0x5390,	// (0x0008ef84) scroll_pane_cp22

0xd40e,	// (0x00097002) rss2_navigation_pane_g1

0xd417,	// (0x0009700b) rss2_navigation_pane_g2

0xd41f,	// (0x00097013) rss2_navigation_pane_g3

0x0002,

0xf60d,	// (0x00099201) rss2_navigation_pane_g

0xd427,	// (0x0009701b) rss2_navigation_pane_t1

0x6fcb,	// (0x00090bbf) rss2_list_single_pane_ParamLimits

0x6fcb,	// (0x00090bbf) rss2_list_single_pane

0xd435,	// (0x00097029) rss2_list_single_pane_t2

0xd443,	// (0x00097037) rss2_list_single_pane_t3_ParamLimits

0xd443,	// (0x00097037) rss2_list_single_pane_t3

0xd460,	// (0x00097054) rss2_list_single_pane_t4

0x4db2,	// (0x0008e9a6) smil_status_pane_g1

0xc1eb,	// (0x00095ddf) main_image2_pane_ParamLimits

0xc1eb,	// (0x00095ddf) main_image2_pane

0xd2b9,	// (0x00096ead) main_camera2_pane_g9_ParamLimits

0xd2b9,	// (0x00096ead) main_camera2_pane_g9

0x6eda,	// (0x00090ace) main_camera2_pane_t5_ParamLimits

0x6eda,	// (0x00090ace) main_camera2_pane_t5

0xd2c7,	// (0x00096ebb) main_camera2_pane_t6_ParamLimits

0xd2c7,	// (0x00096ebb) main_camera2_pane_t6

0x6fe1,	// (0x00090bd5) main_image2_pane_g1_ParamLimits

0x6fe1,	// (0x00090bd5) main_image2_pane_g1

0x6141,	// (0x0008fd35) smil2_video_pane_ParamLimits

0x6141,	// (0x0008fd35) smil2_video_pane

0xc1a2,	// (0x00095d96) aid_zoom_text_primary_cp

0xc1e1,	// (0x00095dd5) popup_preview_fixed_window

0x0abf,	// (0x0008a6b3) im_reading_pane_g1

0x6ecc,	// (0x00090ac0) cams2_bc_adjust_pane_cp_ParamLimits

0x6ecc,	// (0x00090ac0) cams2_bc_adjust_pane_cp

0xd2ef,	// (0x00096ee3) cams2_bc_adjust_pane_ParamLimits

0xd2ef,	// (0x00096ee3) cams2_bc_adjust_pane

0x0db1,	// (0x0008a9a5) cams2_bc_adjust_pane_g1

0xc1f9,	// (0x00095ded) cams2_slider_pane

0x0db1,	// (0x0008a9a5) cams2_slider_pane_g1

0x0db1,	// (0x0008a9a5) cams2_slider_pane_g2

0x0006,

0xf614,	// (0x00099208) cams2_slider_pane_g

0x3593,	// (0x0008d187) calc_display_pane_ParamLimits

0x35b8,	// (0x0008d1ac) calc_paper_pane_ParamLimits

0x35db,	// (0x0008d1cf) grid_calc_pane_ParamLimits

0xc330,	// (0x00095f24) popup_clock_digital_window_t1_ParamLimits

0x5fc8,	// (0x0008fbbc) main_image_pane_t1

0x3575,	// (0x0008d169) aid_size_cell_calc_ParamLimits

0x3575,	// (0x0008d169) aid_size_cell_calc

0x6a5f,	// (0x00090653) popup_blid_sat_info2_window_ParamLimits

0x6a5f,	// (0x00090653) popup_blid_sat_info2_window

0xd46e,	// (0x00097062) aid_size_cell_blid

0xd476,	// (0x0009706a) bg_popup_window_pane_cp07

0xd499,	// (0x0009708d) grid_popup_blid_pane

0xd4a3,	// (0x00097097) heading_pane_cp05_ParamLimits

0xd4a3,	// (0x00097097) heading_pane_cp05

0xd56d,	// (0x00097161) cell_popup_blid_pane_ParamLimits

0xd56d,	// (0x00097161) cell_popup_blid_pane

0xd591,	// (0x00097185) cell_popup_blid_pane_g1

0xd599,	// (0x0009718d) cell_popup_blid_pane_t1

0x58a6,	// (0x0008f49a) mup2_indicator_pane_ParamLimits

0x58a6,	// (0x0008f49a) mup2_indicator_pane

0x009f,	// (0x00089c93) mup2_visualizer_osc_pane

0xd30b,	// (0x00096eff) mup2_visualizer_spec_pane_ParamLimits

0xd30b,	// (0x00096eff) mup2_visualizer_spec_pane

0x009f,	// (0x00089c93) mup2_spec_half_pane

0x009f,	// (0x00089c93) mup2_spec_half_pane_cp

0xd5a7,	// (0x0009719b) mup2_spec_bar_pane_ParamLimits

0xd5a7,	// (0x0009719b) mup2_spec_bar_pane

0x09fa,	// (0x0008a5ee) mup2_spec_bar_pane_g1

0xd5c6,	// (0x000971ba) mup2_spec_bar_pane_g2

0x0001,

0xf63a,	// (0x0009922e) mup2_spec_bar_pane_g

0x009f,	// (0x00089c93) mup2_osc_middle_pane

0x09fa,	// (0x0008a5ee) mup2_visualizer_osc_pane_g1

0x00c9,	// (0x00089cbd) popup_number_entry_window_t1_ParamLimits

0x00dc,	// (0x00089cd0) popup_number_entry_window_t2_ParamLimits

0x00ee,	// (0x00089ce2) popup_number_entry_window_t3_ParamLimits

0x351c,	// (0x0008d110) popup_number_entry_window_t5_ParamLimits

0x351c,	// (0x0008d110) popup_number_entry_window_t5

0xf06b,	// (0x00098c5f) popup_number_entry_window_t_ParamLimits

0x0100,	// (0x00089cf4) text_title_cp2_ParamLimits

0xc391,	// (0x00095f85) aid_hotspot_pointer_text2_pane

0xc3ab,	// (0x00095f9f) main_viewer_pane_g9_ParamLimits

0xc3ab,	// (0x00095f9f) main_viewer_pane_g9

0x0cf8,	// (0x0008a8ec) cale_month_pane_t1_ParamLimits

0x0d35,	// (0x0008a929) bg_cale_pane_ParamLimits

0x0d4d,	// (0x0008a941) list_cale_pane_ParamLimits

0x0d5e,	// (0x0008a952) listscroll_cale_day_pane_t1

0x0d70,	// (0x0008a964) scroll_pane_cp09_ParamLimits

0x590d,	// (0x0008f501) main_mup_eq_pane_t1_ParamLimits

0x590d,	// (0x0008f501) main_mup_eq_pane_t1

0x5927,	// (0x0008f51b) main_mup_eq_pane_t2_ParamLimits

0x5927,	// (0x0008f51b) main_mup_eq_pane_t2

0x5941,	// (0x0008f535) main_mup_eq_pane_t3_ParamLimits

0x5941,	// (0x0008f535) main_mup_eq_pane_t3

0x595d,	// (0x0008f551) main_mup_eq_pane_t4_ParamLimits

0x595d,	// (0x0008f551) main_mup_eq_pane_t4

0x5979,	// (0x0008f56d) main_mup_eq_pane_t5_ParamLimits

0x5979,	// (0x0008f56d) main_mup_eq_pane_t5

0x5995,	// (0x0008f589) main_mup_eq_pane_t6_ParamLimits

0x5995,	// (0x0008f589) main_mup_eq_pane_t6

0x59a9,	// (0x0008f59d) main_mup_eq_pane_t7_ParamLimits

0x59a9,	// (0x0008f59d) main_mup_eq_pane_t7

0x59bd,	// (0x0008f5b1) main_mup_eq_pane_t8_ParamLimits

0x59bd,	// (0x0008f5b1) main_mup_eq_pane_t8

0x59d1,	// (0x0008f5c5) main_mup_eq_pane_t9_ParamLimits

0x59d1,	// (0x0008f5c5) main_mup_eq_pane_t9

0x59eb,	// (0x0008f5df) main_mup_eq_pane_t10_ParamLimits

0x59eb,	// (0x0008f5df) main_mup_eq_pane_t10

0x0009,

0xf3ca,	// (0x00098fbe) main_mup_eq_pane_t_ParamLimits

0xf3ca,	// (0x00098fbe) main_mup_eq_pane_t

0x5a9a,	// (0x0008f68e) mup_equalizer_pane_cp5_ParamLimits

0x5aae,	// (0x0008f6a2) mup_equalizer_pane_cp6_ParamLimits

0x5ac2,	// (0x0008f6b6) mup_equalizer_pane_cp7_ParamLimits

0xc1f9,	// (0x00095ded) main_gallery_pane

0xd227,	// (0x00096e1b) smil2_volume_pane

0xd22f,	// (0x00096e23) smil_status_volume_pane_g1_ParamLimits

0xd242,	// (0x00096e36) smil_status_volume_pane_g2_ParamLimits

0xd255,	// (0x00096e49) smil_status_volume_pane_g3_ParamLimits

0xf593,	// (0x00099187) smil_status_volume_pane_g_ParamLimits

0xd476,	// (0x0009706a) bg_popup_window_pane_cp07_ParamLimits

0xd484,	// (0x00097078) blid_firmament_pane

0x0739,	// (0x0008a32d) aid_size_cell_gallery_ParamLimits

0x0739,	// (0x0008a32d) aid_size_cell_gallery

0x0739,	// (0x0008a32d) grid_gallery_pane_ParamLimits

0x0739,	// (0x0008a32d) grid_gallery_pane

0xd476,	// (0x0009706a) cell_gallery_pane_ParamLimits

0xd476,	// (0x0009706a) cell_gallery_pane

0x0739,	// (0x0008a32d) bg_cell_gallery_focus_pane_ParamLimits

0x0739,	// (0x0008a32d) bg_cell_gallery_focus_pane

0x07a0,	// (0x0008a394) cell_gallery_pane_g1_ParamLimits

0x07a0,	// (0x0008a394) cell_gallery_pane_g1

0x07a0,	// (0x0008a394) cell_gallery_pane_g2_ParamLimits

0x07a0,	// (0x0008a394) cell_gallery_pane_g2

0x07a0,	// (0x0008a394) cell_gallery_pane_g3_ParamLimits

0x07a0,	// (0x0008a394) cell_gallery_pane_g3

0x07ae,	// (0x0008a3a2) cell_gallery_pane_g4_ParamLimits

0x07ae,	// (0x0008a3a2) cell_gallery_pane_g4

0x0003,

0xf63f,	// (0x00099233) cell_gallery_pane_g_ParamLimits

0xf63f,	// (0x00099233) cell_gallery_pane_g

0xd5d0,	// (0x000971c4) bg_cell_gallery_focus_pane_g1

0xd5d8,	// (0x000971cc) bg_cell_gallery_focus_pane_g2

0xd5e0,	// (0x000971d4) bg_cell_gallery_focus_pane_g3

0xd5e8,	// (0x000971dc) bg_cell_gallery_focus_pane_g4

0xd5f0,	// (0x000971e4) bg_cell_gallery_focus_pane_g5

0xd5f8,	// (0x000971ec) bg_cell_gallery_focus_pane_g6

0xd600,	// (0x000971f4) bg_cell_gallery_focus_pane_g7

0xd608,	// (0x000971fc) bg_cell_gallery_focus_pane_g8

0x0007,

0xf648,	// (0x0009923c) bg_cell_gallery_focus_pane_g

0xd610,	// (0x00097204) aid_firma_cardinal

0xd624,	// (0x00097218) blid_firmament_pane_t1

0xd63b,	// (0x0009722f) blid_firmament_pane_t2

0xd652,	// (0x00097246) blid_firmament_pane_t3

0xd669,	// (0x0009725d) blid_firmament_pane_t4

0x0003,

0xf659,	// (0x0009924d) blid_firmament_pane_t

0xd680,	// (0x00097274) blid_sat_info_pane

0x09fa,	// (0x0008a5ee) blid_sat_info_pane_g1

0x09fa,	// (0x0008a5ee) blid_sat_info_pane_g2

0x0001,

0xf3be,	// (0x00098fb2) blid_sat_info_pane_g

0xd690,	// (0x00097284) blid_sat_info_pane_t1

0xd69e,	// (0x00097292) smil2_volume_content_pane

0xd6a7,	// (0x0009729b) smil2_volume_pane_g1

0xc249,	// (0x00095e3d) smil2_volume_content_pane_g1

0xd6af,	// (0x000972a3) smil2_volume_content_pane_g2

0xd6b8,	// (0x000972ac) smil2_volume_content_pane_g3

0xd6c1,	// (0x000972b5) smil2_volume_content_pane_g4

0xd6ca,	// (0x000972be) smil2_volume_content_pane_g5

0xd6d3,	// (0x000972c7) smil2_volume_content_pane_g6

0xd6dc,	// (0x000972d0) smil2_volume_content_pane_g7

0xd6e5,	// (0x000972d9) smil2_volume_content_pane_g8

0xd6ee,	// (0x000972e2) smil2_volume_content_pane_g9

0xd6f7,	// (0x000972eb) smil2_volume_content_pane_g10

0x0009,

0xf662,	// (0x00099256) smil2_volume_content_pane_g

0x3b85,	// (0x0008d779) cale_week_day_heading_pane_t1_ParamLimits

0x3baf,	// (0x0008d7a3) cale_week_day_heading_pane_t2_ParamLimits

0x3bde,	// (0x0008d7d2) cale_week_day_heading_pane_t3_ParamLimits

0x3c0d,	// (0x0008d801) cale_week_day_heading_pane_t4_ParamLimits

0x3c3c,	// (0x0008d830) cale_week_day_heading_pane_t5_ParamLimits

0x3c73,	// (0x0008d867) cale_week_day_heading_pane_t6_ParamLimits

0x3caa,	// (0x0008d89e) cale_week_day_heading_pane_t7_ParamLimits

0xf172,	// (0x00098d66) cale_week_day_heading_pane_t_ParamLimits

0x0972,	// (0x0008a566) bg_cale_side_pane_ParamLimits

0x3cd4,	// (0x0008d8c8) cale_week_time_pane_t1_ParamLimits

0x3cee,	// (0x0008d8e2) cale_week_time_pane_t2_ParamLimits

0x3d08,	// (0x0008d8fc) cale_week_time_pane_t3_ParamLimits

0x3d22,	// (0x0008d916) cale_week_time_pane_t4_ParamLimits

0x3d3c,	// (0x0008d930) cale_week_time_pane_t5_ParamLimits

0x3d56,	// (0x0008d94a) cale_week_time_pane_t6_ParamLimits

0x3d70,	// (0x0008d964) cale_week_time_pane_t7_ParamLimits

0x3d8a,	// (0x0008d97e) cale_week_time_pane_t8_ParamLimits

0xf181,	// (0x00098d75) cale_week_time_pane_t_ParamLimits

0x3daa,	// (0x0008d99e) cell_cale_week_pane_g2_ParamLimits

0x0972,	// (0x0008a566) bg_cale_side_pane_cp01_ParamLimits

0x4bb7,	// (0x0008e7ab) cale_month_week_pane_t1_ParamLimits

0x4bd0,	// (0x0008e7c4) cale_month_week_pane_t2_ParamLimits

0x4be9,	// (0x0008e7dd) cale_month_week_pane_t3_ParamLimits

0x4c02,	// (0x0008e7f6) cale_month_week_pane_t4_ParamLimits

0x4c1b,	// (0x0008e80f) cale_month_week_pane_t5_ParamLimits

0x4c34,	// (0x0008e828) cale_month_week_pane_t6_ParamLimits

0xf24f,	// (0x00098e43) cale_month_week_pane_t_ParamLimits

0xc2a4,	// (0x00095e98) cell_cale_month_pane_g1_ParamLimits

0xc1f9,	// (0x00095ded) main_cale_event_viewer_pane

0x009f,	// (0x00089c93) listscroll_cale_event_viewer_pane

0xd700,	// (0x000972f4) list_cale_ev_pane

0xd708,	// (0x000972fc) scroll_pane_cp023

0xd714,	// (0x00097308) field_cale_ev_pane_ParamLimits

0xd714,	// (0x00097308) field_cale_ev_pane

0xd732,	// (0x00097326) field_cale_ev_content_pane_ParamLimits

0xd732,	// (0x00097326) field_cale_ev_content_pane

0xd73e,	// (0x00097332) field_cale_ev_pane_g1_ParamLimits

0xd73e,	// (0x00097332) field_cale_ev_pane_g1

0xd74a,	// (0x0009733e) field_cale_ev_pane_g2_ParamLimits

0xd74a,	// (0x0009733e) field_cale_ev_pane_g2

0xd762,	// (0x00097356) field_cale_ev_pane_g3_ParamLimits

0xd762,	// (0x00097356) field_cale_ev_pane_g3

0x0002,

0xf677,	// (0x0009926b) field_cale_ev_pane_g_ParamLimits

0xf677,	// (0x0009926b) field_cale_ev_pane_g

0xd77a,	// (0x0009736e) field_cale_ev_pane_t1_ParamLimits

0xd77a,	// (0x0009736e) field_cale_ev_pane_t1

0xd791,	// (0x00097385) field_cale_ev_content_pane_t1_ParamLimits

0xd791,	// (0x00097385) field_cale_ev_content_pane_t1

0x5bb5,	// (0x0008f7a9) bg_button_pane_cp01

0x38b2,	// (0x0008d4a6) listscroll_cale_week_pane_ParamLimits

0x091d,	// (0x0008a511) popup_toolbar_window_cp01

0x0943,	// (0x0008a537) listscroll_cale_week_pane_t1_ParamLimits

0x38b2,	// (0x0008d4a6) listscroll_cale_day_pane_ParamLimits

0x091d,	// (0x0008a511) popup_toolbar_window_cp02

0x0d5e,	// (0x0008a952) listscroll_cale_day_pane_t1_ParamLimits

0x6a25,	// (0x00090619) main_cale_month_pane_ParamLimits

0xd1a5,	// (0x00096d99) popup_toolbar_window_cp03_ParamLimits

0xd1a5,	// (0x00096d99) popup_toolbar_window_cp03

0x5fa6,	// (0x0008fb9a) main_image_pane_g2_ParamLimits

0x5fa6,	// (0x0008fb9a) main_image_pane_g2

0x5fb7,	// (0x0008fbab) main_image_pane_g3_ParamLimits

0x5fb7,	// (0x0008fbab) main_image_pane_g3

0x0002,

0xf45c,	// (0x00099050) main_image_pane_g_ParamLimits

0xf45c,	// (0x00099050) main_image_pane_g

0x5fc8,	// (0x0008fbbc) main_image_pane_t1_ParamLimits

0x5fdf,	// (0x0008fbd3) main_image_pane_t2_ParamLimits

0x5fdf,	// (0x0008fbd3) main_image_pane_t2

0x5ff1,	// (0x0008fbe5) main_image_pane_t3_ParamLimits

0x5ff1,	// (0x0008fbe5) main_image_pane_t3

0x6019,	// (0x0008fc0d) main_image_pane_t4_ParamLimits

0x6019,	// (0x0008fc0d) main_image_pane_t4

0x0003,

0xf463,	// (0x00099057) main_image_pane_t_ParamLimits

0xf463,	// (0x00099057) main_image_pane_t

0x6039,	// (0x0008fc2d) popup_image_details_window_cp01

0x6043,	// (0x0008fc37) popup_toobar_trans_pane_cp01_ParamLimits

0x6043,	// (0x0008fc37) popup_toobar_trans_pane_cp01

0x6b30,	// (0x00090724) popup_image_details_window_ParamLimits

0x6b30,	// (0x00090724) popup_image_details_window

0xd178,	// (0x00096d6c) popup_image_focus_window

0xd2ab,	// (0x00096e9f) camera2_autofocus_pane_ParamLimits

0xd2ab,	// (0x00096e9f) camera2_autofocus_pane

0x009f,	// (0x00089c93) bg_popup_sub_pane_cp06

0xd7af,	// (0x000973a3) popup_image_focus_window_g1

0xd7b7,	// (0x000973ab) popup_image_focus_window_g2

0xd7bf,	// (0x000973b3) popup_image_focus_window_g3

0xd7c7,	// (0x000973bb) popup_image_focus_window_g4

0x0003,

0xf67e,	// (0x00099272) popup_image_focus_window_g

0xd7cf,	// (0x000973c3) popup_image_focus_window_t1

0xd7dd,	// (0x000973d1) popup_image_focus_window_t2

0xd7ed,	// (0x000973e1) popup_image_focus_window_t3

0x0002,

0xf687,	// (0x0009927b) popup_image_focus_window_t

0x07a0,	// (0x0008a394) camera2_autofocus_pane_g1

0x0739,	// (0x0008a32d) bg_tb_trans_pane_cp01

0xd7fb,	// (0x000973ef) popup_image_details_window_g1

0xd80e,	// (0x00097402) popup_image_details_window_g2

0x0002,

0xf699,	// (0x0009928d) popup_image_details_window_g

0xd837,	// (0x0009742b) popup_image_details_window_t1

0xd849,	// (0x0009743d) popup_image_details_window_t2

0xd862,	// (0x00097456) popup_image_details_window_t3

0xd876,	// (0x0009746a) popup_image_details_window_t4

0xd891,	// (0x00097485) popup_image_details_window_t5

0x0004,

0xf6a0,	// (0x00099294) popup_image_details_window_t

0x07fe,	// (0x0008a3f2) bg_calc_paper_pane_ParamLimits

0xc1f9,	// (0x00095ded) grid_highlight_pane_cp013

0xc20b,	// (0x00095dff) list_calc_pane_ParamLimits

0xc21d,	// (0x00095e11) scroll_pane_cp024

0x0812,	// (0x0008a406) bg_calc_display_pane_ParamLimits

0x36f3,	// (0x0008d2e7) calc_display_pane_t1_ParamLimits

0x3705,	// (0x0008d2f9) calc_display_pane_t2_ParamLimits

0xc225,	// (0x00095e19) calc_display_pane_t3_ParamLimits

0xf0f2,	// (0x00098ce6) calc_display_pane_t_ParamLimits

0x37bf,	// (0x0008d3b3) cell_calc_pane_g2

0x0001,

0xf10f,	// (0x00098d03) cell_calc_pane_g

0x37c8,	// (0x0008d3bc) cell_calc_pane_t1

0x0867,	// (0x0008a45b) grid_highlight_pane_cp02_ParamLimits

0x087d,	// (0x0008a471) toolbar_button_pane_cp01_ParamLimits

0x087d,	// (0x0008a471) toolbar_button_pane_cp01

0x6085,	// (0x0008fc79) temp_image_control_pane_ParamLimits

0x6085,	// (0x0008fc79) temp_image_control_pane

0xc1eb,	// (0x00095ddf) main_mp3_pane

0xd8ab,	// (0x0009749f) temp_image_control_pane_g1_ParamLimits

0xd8ab,	// (0x0009749f) temp_image_control_pane_g1

0xd8b9,	// (0x000974ad) temp_image_control_pane_g2_ParamLimits

0xd8b9,	// (0x000974ad) temp_image_control_pane_g2

0xd8cb,	// (0x000974bf) temp_image_control_pane_g3_ParamLimits

0xd8cb,	// (0x000974bf) temp_image_control_pane_g3

0x6ff7,	// (0x00090beb) temp_image_control_pane_g4_ParamLimits

0x6ff7,	// (0x00090beb) temp_image_control_pane_g4

0x0003,

0xf6ab,	// (0x0009929f) temp_image_control_pane_g_ParamLimits

0xf6ab,	// (0x0009929f) temp_image_control_pane_g

0xd8ab,	// (0x0009749f) main_mp3_pane_g1

0x700a,	// (0x00090bfe) main_mp3_pane_g2

0x0007,

0xf6b4,	// (0x000992a8) main_mp3_pane_g

0xd900,	// (0x000974f4) main_mp3_pane_t1

0x07ae,	// (0x0008a3a2) main_camera_pane_g8_ParamLimits

0x07ae,	// (0x0008a3a2) main_camera_pane_g8

0x3f78,	// (0x0008db6c) main_video_pane_g7_ParamLimits

0x3f78,	// (0x0008db6c) main_video_pane_g7

0xd2db,	// (0x00096ecf) main_camera2_pane_t7_ParamLimits

0xd2db,	// (0x00096ecf) main_camera2_pane_t7

0x0b16,	// (0x0008a70a) scroll_pane_cp025_ParamLimits

0x0b16,	// (0x0008a70a) scroll_pane_cp025

0x0b2a,	// (0x0008a71e) scroll_pane_cp026_ParamLimits

0x0b2a,	// (0x0008a71e) scroll_pane_cp026

0x0b39,	// (0x0008a72d) wml_content_pane_ParamLimits

0xc1f9,	// (0x00095ded) main_touch_calib_pane

0x70de,	// (0x00090cd2) main_touch_calib_pane_g1

0x70f0,	// (0x00090ce4) main_touch_calib_pane_g2

0x7102,	// (0x00090cf6) main_touch_calib_pane_g3

0x7114,	// (0x00090d08) main_touch_calib_pane_g4

0x0003,

0xf6d2,	// (0x000992c6) main_touch_calib_pane_g

0x7126,	// (0x00090d1a) main_touch_calib_pane_t1

0x7140,	// (0x00090d34) main_touch_calib_pane_t2

0x0004,

0xf6db,	// (0x000992cf) main_touch_calib_pane_t

0x5638,	// (0x0008f22c) mup_progress_pane_cp02

0x566d,	// (0x0008f261) navi_pane_g1

0x5728,	// (0x0008f31c) navi_pane_mp_t3

0xc1eb,	// (0x00095ddf) main_mp3_pane_ParamLimits

0x6cbb,	// (0x000908af) navi_pane_ParamLimits

0xd8ab,	// (0x0009749f) main_mp3_pane_g1_ParamLimits

0x700a,	// (0x00090bfe) main_mp3_pane_g2_ParamLimits

0x7018,	// (0x00090c0c) main_mp3_pane_g3_ParamLimits

0x7018,	// (0x00090c0c) main_mp3_pane_g3

0x7026,	// (0x00090c1a) main_mp3_pane_g4_ParamLimits

0x7026,	// (0x00090c1a) main_mp3_pane_g4

0x07a0,	// (0x0008a394) main_mp3_pane_g5_ParamLimits

0x07a0,	// (0x0008a394) main_mp3_pane_g5

0xd8db,	// (0x000974cf) main_mp3_pane_g6_ParamLimits

0xd8db,	// (0x000974cf) main_mp3_pane_g6

0xd8e8,	// (0x000974dc) main_mp3_pane_g7_ParamLimits

0xd8e8,	// (0x000974dc) main_mp3_pane_g7

0xd8f4,	// (0x000974e8) main_mp3_pane_g8_ParamLimits

0xd8f4,	// (0x000974e8) main_mp3_pane_g8

0xf6b4,	// (0x000992a8) main_mp3_pane_g_ParamLimits

0x7032,	// (0x00090c26) main_mp3_pane_t2

0x7040,	// (0x00090c34) main_mp3_pane_t3

0xd90e,	// (0x00097502) main_mp3_pane_t4

0xd91c,	// (0x00097510) main_mp3_pane_t5

0x0005,

0xf6c5,	// (0x000992b9) main_mp3_pane_t

0xd92a,	// (0x0009751e) mup_progress_pane_cp01

0xc1a2,	// (0x00095d96) aid_zoom_text_secondary2

0xd700,	// (0x000972f4) list_cale_ev2_pane

0xd708,	// (0x000972fc) scroll_pane_cp023_ParamLimits

0x7196,	// (0x00090d8a) field_cale_ev2_pane_ParamLimits

0x7196,	// (0x00090d8a) field_cale_ev2_pane

0xd932,	// (0x00097526) field_cale_ev2_pane_g1_ParamLimits

0xd932,	// (0x00097526) field_cale_ev2_pane_g1

0xd93e,	// (0x00097532) field_cale_ev2_pane_g2_ParamLimits

0xd93e,	// (0x00097532) field_cale_ev2_pane_g2

0xd956,	// (0x0009754a) field_cale_ev2_pane_g3_ParamLimits

0xd956,	// (0x0009754a) field_cale_ev2_pane_g3

0x0003,

0xf6e6,	// (0x000992da) field_cale_ev2_pane_g_ParamLimits

0xf6e6,	// (0x000992da) field_cale_ev2_pane_g

0xd97a,	// (0x0009756e) field_cale_ev2_pane_t1_ParamLimits

0xd97a,	// (0x0009756e) field_cale_ev2_pane_t1

0xd991,	// (0x00097585) field_cale_ev2_pane_t2_ParamLimits

0xd991,	// (0x00097585) field_cale_ev2_pane_t2

0x0001,

0xf6ef,	// (0x000992e3) field_cale_ev2_pane_t_ParamLimits

0xf6ef,	// (0x000992e3) field_cale_ev2_pane_t

0x5d74,	// (0x0008f968) main_postcard_pane_g5_ParamLimits

0x5d74,	// (0x0008f968) main_postcard_pane_g5

0x5d8a,	// (0x0008f97e) main_postcard_pane_g6_ParamLimits

0x5d8a,	// (0x0008f97e) main_postcard_pane_g6

0x0739,	// (0x0008a32d) camera2_autofocus_pane_cp_ParamLimits

0x0739,	// (0x0008a32d) camera2_autofocus_pane_cp

0xc1eb,	// (0x00095ddf) main_mup3_pane

0x71fb,	// (0x00090def) main_mup3_pane_g1_ParamLimits

0x71fb,	// (0x00090def) main_mup3_pane_g1

0x721d,	// (0x00090e11) main_mup3_pane_g2_ParamLimits

0x721d,	// (0x00090e11) main_mup3_pane_g2

0x729d,	// (0x00090e91) main_mup3_pane_g3_ParamLimits

0x729d,	// (0x00090e91) main_mup3_pane_g3

0x72e3,	// (0x00090ed7) main_mup3_pane_g4_ParamLimits

0x72e3,	// (0x00090ed7) main_mup3_pane_g4

0x7329,	// (0x00090f1d) main_mup3_pane_g5_ParamLimits

0x7329,	// (0x00090f1d) main_mup3_pane_g5

0x736f,	// (0x00090f63) main_mup3_pane_g6_ParamLimits

0x736f,	// (0x00090f63) main_mup3_pane_g6

0x07ae,	// (0x0008a3a2) main_mup3_pane_g7_ParamLimits

0x07ae,	// (0x0008a3a2) main_mup3_pane_g7

0x0007,

0xf6ff,	// (0x000992f3) main_mup3_pane_g_ParamLimits

0xf6ff,	// (0x000992f3) main_mup3_pane_g

0x73ed,	// (0x00090fe1) main_mup3_pane_t1_ParamLimits

0x73ed,	// (0x00090fe1) main_mup3_pane_t1

0x7461,	// (0x00091055) main_mup3_pane_t2_ParamLimits

0x7461,	// (0x00091055) main_mup3_pane_t2

0x7535,	// (0x00091129) main_mup3_pane_t4_ParamLimits

0x7535,	// (0x00091129) main_mup3_pane_t4

0x758b,	// (0x0009117f) main_mup3_pane_t5_ParamLimits

0x758b,	// (0x0009117f) main_mup3_pane_t5

0x7647,	// (0x0009123b) main_mup3_pane_t6_ParamLimits

0x7647,	// (0x0009123b) main_mup3_pane_t6

0x0005,

0xf710,	// (0x00099304) main_mup3_pane_t_ParamLimits

0xf710,	// (0x00099304) main_mup3_pane_t

0x76ff,	// (0x000912f3) mup3_progress_pane_ParamLimits

0x76ff,	// (0x000912f3) mup3_progress_pane

0x778b,	// (0x0009137f) popup_mup3_control_window_ParamLimits

0x778b,	// (0x0009137f) popup_mup3_control_window

0xd9a6,	// (0x0009759a) popup_mup3_text_window

0x77bd,	// (0x000913b1) mup3_progress_pane_t1

0x77dc,	// (0x000913d0) mup3_progress_pane_t2

0xd9ae,	// (0x000975a2) mup3_progress_pane_t3

0x0002,

0xf71d,	// (0x00099311) mup3_progress_pane_t

0xd9cb,	// (0x000975bf) mup_progress_pane_cp03

0x009f,	// (0x00089c93) bg_tb_trans_pane_cp04

0x77fb,	// (0x000913ef) mup3_volume_pane

0x7803,	// (0x000913f7) popup_mup3_control_window_g1

0x780c,	// (0x00091400) mup3_volume_pane_g1

0x7815,	// (0x00091409) mup3_volume_pane_g2

0x781e,	// (0x00091412) mup3_volume_pane_g3

0x0002,

0xf724,	// (0x00099318) mup3_volume_pane_g

0x009f,	// (0x00089c93) bg_tb_trans_pane_cp03

0xd9db,	// (0x000975cf) popup_mup3_text_window_g1

0xd9e3,	// (0x000975d7) popup_mup3_text_window_t1

0x085a,	// (0x0008a44e) list_calc_item_pane_g1_ParamLimits

0xd3ec,	// (0x00096fe0) mup_volume_pane_cp_g1

0x715a,	// (0x00090d4e) main_touch_calib_pane_t3

0x716e,	// (0x00090d62) main_touch_calib_pane_t4

0x7182,	// (0x00090d76) main_touch_calib_pane_t5

0xc17e,	// (0x00095d72) aid_cell_size_toolbar2

0xc186,	// (0x00095d7a) aid_popup3_width_pane

0xc192,	// (0x00095d86) aid_zoom_text_msg_primary

0x3e53,	// (0x0008da47) vorec_t7

0x081e,	// (0x0008a412) bg_calc_paper_pane_g1_ParamLimits

0x082a,	// (0x0008a41e) bg_calc_paper_pane_g2_ParamLimits

0x0836,	// (0x0008a42a) bg_calc_paper_pane_g3_ParamLimits

0x0842,	// (0x0008a436) bg_calc_paper_pane_g4_ParamLimits

0x084e,	// (0x0008a442) bg_calc_paper_pane_g5_ParamLimits

0x374c,	// (0x0008d340) bg_calc_paper_pane_g6_ParamLimits

0x375b,	// (0x0008d34f) bg_calc_paper_pane_g7_ParamLimits

0x376a,	// (0x0008d35e) bg_calc_paper_pane_g8_ParamLimits

0xf0f9,	// (0x00098ced) bg_calc_paper_pane_g_ParamLimits

0x377d,	// (0x0008d371) calc_bg_paper_pane_g9_ParamLimits

0x0739,	// (0x0008a32d) image_qvga_pane_ParamLimits

0x0739,	// (0x0008a32d) image_qvga_pane

0x0717,	// (0x0008a30b) bg_popup_sub_pane_cp04_ParamLimits

0x5f04,	// (0x0008faf8) popup_mup_playback_window_g1_ParamLimits

0x5f10,	// (0x0008fb04) popup_mup_playback_window_t1_ParamLimits

0x5f25,	// (0x0008fb19) popup_mup_playback_window_t2_ParamLimits

0xf457,	// (0x0009904b) popup_mup_playback_window_t_ParamLimits

0x07ae,	// (0x0008a3a2) main_mup2_pane_g3_ParamLimits

0x07ae,	// (0x0008a3a2) main_mup2_pane_g3

0x417f,	// (0x0008dd73) popup_toolbar_window_cp04

0xc40b,	// (0x00095fff) popup_call2_audio_second_window_g3_ParamLimits

0xc40b,	// (0x00095fff) popup_call2_audio_second_window_g3

0xc823,	// (0x00096417) popup_call2_audio_first_window_g4_ParamLimits

0xc823,	// (0x00096417) popup_call2_audio_first_window_g4

0xce4a,	// (0x00096a3e) popup_call2_audio_in_window_g4_ParamLimits

0xce4a,	// (0x00096a3e) popup_call2_audio_in_window_g4

0x5f3a,	// (0x0008fb2e) aid_area_sk_bg_cut_ParamLimits

0x5f3a,	// (0x0008fb2e) aid_area_sk_bg_cut

0x5f58,	// (0x0008fb4c) aid_area_sk_bg_cut_2_ParamLimits

0x5f58,	// (0x0008fb4c) aid_area_sk_bg_cut_2

0x009f,	// (0x00089c93) aid_placing_details_win

0x009f,	// (0x00089c93) aid_placing_details_win_2

0x07a0,	// (0x0008a394) camera2_autofocus_pane_g1_ParamLimits

0x3463,	// (0x0008d057) popup_fixed_preview_cale_window_ParamLimits

0x3463,	// (0x0008d057) popup_fixed_preview_cale_window

0x57e8,	// (0x0008f3dc) navi_slider_pane_g3

0x57f1,	// (0x0008f3e5) navi_slider_pane_g4

0x57fa,	// (0x0008f3ee) navi_slider_pane_g5

0x57e8,	// (0x0008f3dc) navi_slider_pane_g6

0xc356,	// (0x00095f4a) navi_slider_pane_g7

0x5adf,	// (0x0008f6d3) mup_scale_pane_g3

0x5ae8,	// (0x0008f6dc) mup_scale_pane_g4

0x5af1,	// (0x0008f6e5) mup_scale_pane_g5

0x5afa,	// (0x0008f6ee) mup_scale_pane_g6

0x5b03,	// (0x0008f6f7) mup_scale_pane_g7

0x0db1,	// (0x0008a9a5) cams2_slider_pane_g3

0x0db1,	// (0x0008a9a5) cams2_slider_pane_g4

0x0db1,	// (0x0008a9a5) cams2_slider_pane_g5

0x0db1,	// (0x0008a9a5) cams2_slider_pane_g6

0x0db1,	// (0x0008a9a5) cams2_slider_pane_g7

0x09fa,	// (0x0008a5ee) camera2_autofocus_pane_cp_g1

0xd15a,	// (0x00096d4e) bg_popup_preview_window_pane_cp02_ParamLimits

0xd15a,	// (0x00096d4e) bg_popup_preview_window_pane_cp02

0xd9f1,	// (0x000975e5) list_fp_cale_pane_ParamLimits

0xd9f1,	// (0x000975e5) list_fp_cale_pane

0xd9fd,	// (0x000975f1) popup_fixed_preview_cale_window_t1_ParamLimits

0xd9fd,	// (0x000975f1) popup_fixed_preview_cale_window_t1

0x7827,	// (0x0009141b) popup_fixed_preview_cale_window_t2_ParamLimits

0x7827,	// (0x0009141b) popup_fixed_preview_cale_window_t2

0x783c,	// (0x00091430) popup_fixed_preview_cale_window_t3_ParamLimits

0x783c,	// (0x00091430) popup_fixed_preview_cale_window_t3

0x0002,

0xf72b,	// (0x0009931f) popup_fixed_preview_cale_window_t_ParamLimits

0xf72b,	// (0x0009931f) popup_fixed_preview_cale_window_t

0x7851,	// (0x00091445) list_single_fp_cale_pane_ParamLimits

0x7851,	// (0x00091445) list_single_fp_cale_pane

0xda1b,	// (0x0009760f) list_single_fp_cale_pane_g1_ParamLimits

0xda1b,	// (0x0009760f) list_single_fp_cale_pane_g1

0xda27,	// (0x0009761b) list_single_fp_cale_pane_g2_ParamLimits

0xda27,	// (0x0009761b) list_single_fp_cale_pane_g2

0x0002,

0xf732,	// (0x00099326) list_single_fp_cale_pane_g_ParamLimits

0xf732,	// (0x00099326) list_single_fp_cale_pane_g

0xda40,	// (0x00097634) list_single_fp_cale_pane_t1_ParamLimits

0xda40,	// (0x00097634) list_single_fp_cale_pane_t1

0xda52,	// (0x00097646) list_single_fp_cale_pane_t2_ParamLimits

0xda52,	// (0x00097646) list_single_fp_cale_pane_t2

0x0001,

0xf739,	// (0x0009932d) list_single_fp_cale_pane_t_ParamLimits

0xf739,	// (0x0009932d) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0xc1f9,	// (0x00095ded) main_dialer_pane

0x009f,	// (0x00089c93) aid_cell_size_keypad

0x009f,	// (0x00089c93) dialer_ne_pane

0x009f,	// (0x00089c93) grid_dialer_command_1_pane

0x009f,	// (0x00089c93) grid_dialer_command_2_pane

0x009f,	// (0x00089c93) grid_dialer_keypad_pane

0x7867,	// (0x0009145b) bg_popup_call_pane_cp06_ParamLimits

0x7867,	// (0x0009145b) bg_popup_call_pane_cp06

0x7867,	// (0x0009145b) dialer_ne_clear_pane_ParamLimits

0x7867,	// (0x0009145b) dialer_ne_clear_pane

0x09fa,	// (0x0008a5ee) dialer_ne_pane_g1

0x09cc,	// (0x0008a5c0) dialer_ne_pane_t1_ParamLimits

0x09cc,	// (0x0008a5c0) dialer_ne_pane_t1

0x7875,	// (0x00091469) dialer_ne_pane_t2_ParamLimits

0x7875,	// (0x00091469) dialer_ne_pane_t2

0x789d,	// (0x00091491) dialer_ne_pane_t3_ParamLimits

0x789d,	// (0x00091491) dialer_ne_pane_t3

0x0002,

0xf73e,	// (0x00099332) dialer_ne_pane_t_ParamLimits

0xf73e,	// (0x00099332) dialer_ne_pane_t

0x789d,	// (0x00091491) dialer_ne_pane_t3_copy1_ParamLimits

0x789d,	// (0x00091491) dialer_ne_pane_t3_copy1

0xda85,	// (0x00097679) cell_dialer_keypad_pane_ParamLimits

0xda85,	// (0x00097679) cell_dialer_keypad_pane

0x0739,	// (0x0008a32d) cell_dialer_command_1_pane_ParamLimits

0x0739,	// (0x0008a32d) cell_dialer_command_1_pane

0xda9c,	// (0x00097690) cell_dialer_command_2_pane_ParamLimits

0xda9c,	// (0x00097690) cell_dialer_command_2_pane

0x0739,	// (0x0008a32d) bg_button_pane_cp02_ParamLimits

0x0739,	// (0x0008a32d) bg_button_pane_cp02

0x07a0,	// (0x0008a394) cell_dialer_keypad_pane_g1_ParamLimits

0x07a0,	// (0x0008a394) cell_dialer_keypad_pane_g1

0x0739,	// (0x0008a32d) bg_button_pane_cp03_ParamLimits

0x0739,	// (0x0008a32d) bg_button_pane_cp03

0x07a0,	// (0x0008a394) cell_dialer_command_1_pane_g1_ParamLimits

0x07a0,	// (0x0008a394) cell_dialer_command_1_pane_g1

0x009f,	// (0x00089c93) bg_button_pane_cp04

0x09fa,	// (0x0008a5ee) cell_dialer_command_2_pane_g1

0x009f,	// (0x00089c93) bg_button_pane_cp06

0x09fa,	// (0x0008a5ee) dialer_ne_clear_pane_g1

0x5679,	// (0x0008f26d) navi_pane_g2

0x56a7,	// (0x0008f29b) navi_pane_g3

0x0002,

0xf35a,	// (0x00098f4e) navi_pane_g

0x5736,	// (0x0008f32a) navi_pane_mv_g2

0x575d,	// (0x0008f351) navi_pane_mv_g5

0x5765,	// (0x0008f359) navi_pane_mv_t1

0x0812,	// (0x0008a406) main_clock2_pane

0x0739,	// (0x0008a32d) main_clock2_list_pane_ParamLimits

0x0739,	// (0x0008a32d) main_clock2_list_pane

0x7933,	// (0x00091527) main_clock2_pane_t1_ParamLimits

0x7933,	// (0x00091527) main_clock2_pane_t1

0x796e,	// (0x00091562) main_clock2_pane_t2_ParamLimits

0x796e,	// (0x00091562) main_clock2_pane_t2

0x0004,

0xf74a,	// (0x0009933e) main_clock2_pane_t_ParamLimits

0xf74a,	// (0x0009933e) main_clock2_pane_t

0x7a0e,	// (0x00091602) popup_clock_analogue_window_cp03_ParamLimits

0x7a0e,	// (0x00091602) popup_clock_analogue_window_cp03

0x7a33,	// (0x00091627) popup_clock_digital_window_cp02_ParamLimits

0x7a33,	// (0x00091627) popup_clock_digital_window_cp02

0x7aac,	// (0x000916a0) main_clock2_list_single_pane_ParamLimits

0x7aac,	// (0x000916a0) main_clock2_list_single_pane

0x09c4,	// (0x0008a5b8) list_highlight_pane_cp05

0xdadf,	// (0x000976d3) main_clock2_list_single_pane_t1

0x417f,	// (0x0008dd73) popup_toolbar_window_cp04_ParamLimits

0x07ae,	// (0x0008a3a2) camera2_autofocus_pane_g2_ParamLimits

0x07ae,	// (0x0008a3a2) camera2_autofocus_pane_g2

0x07ae,	// (0x0008a3a2) camera2_autofocus_pane_g3_ParamLimits

0x07ae,	// (0x0008a3a2) camera2_autofocus_pane_g3

0x07ae,	// (0x0008a3a2) camera2_autofocus_pane_g4_ParamLimits

0x07ae,	// (0x0008a3a2) camera2_autofocus_pane_g4

0x07ae,	// (0x0008a3a2) camera2_autofocus_pane_g5_ParamLimits

0x07ae,	// (0x0008a3a2) camera2_autofocus_pane_g5

0x0004,

0xf68e,	// (0x00099282) camera2_autofocus_pane_g_ParamLimits

0xf68e,	// (0x00099282) camera2_autofocus_pane_g

0x71b7,	// (0x00090dab) camera2_autofocus_pane_cp_g2

0x71bf,	// (0x00090db3) camera2_autofocus_pane_cp_g3

0x71c7,	// (0x00090dbb) camera2_autofocus_pane_cp_g4

0x71cf,	// (0x00090dc3) camera2_autofocus_pane_cp_g5

0x0004,

0xf6f4,	// (0x000992e8) camera2_autofocus_pane_cp_g

0x009f,	// (0x00089c93) popup_dialer_spcha_window

0x009f,	// (0x00089c93) bg_popup_sub_pane_cp07

0x009f,	// (0x00089c93) list_spcha_pane

0xdaed,	// (0x000976e1) list_single_spcha_pane_ParamLimits

0xdaed,	// (0x000976e1) list_single_spcha_pane

0x009f,	// (0x00089c93) list_highlight_pane_cp06

0x504a,	// (0x0008ec3e) list_single_spcha_pane_t1

0xcbf4,	// (0x000967e8) popup_call2_audio_out_window_g4_ParamLimits

0xcbf4,	// (0x000967e8) popup_call2_audio_out_window_g4

0xc1f9,	// (0x00095ded) main_imed2_pane

0xd180,	// (0x00096d74) popup_imed_adjust2_window

0x6b48,	// (0x0009073c) popup_imed_trans_window_ParamLimits

0x6b48,	// (0x0009073c) popup_imed_trans_window

0xd4cf,	// (0x000970c3) popup_blid_sat_info2_window_t1

0xd4dd,	// (0x000970d1) popup_blid_sat_info2_window_t2

0x000a,

0xf623,	// (0x00099217) popup_blid_sat_info2_window_t

0x7b5d,	// (0x00091751) aid_size_cell_colour_35

0x7b7d,	// (0x00091771) aid_size_cell_colour_112

0x7b9d,	// (0x00091791) aid_size_cell_effect

0x58a6,	// (0x0008f49a) bg_tb_trans_pane_cp02

0x4f09,	// (0x0008eafd) heading_imed_pane

0x7bbd,	// (0x000917b1) listscroll_imed_pane

0xdaff,	// (0x000976f3) heading_imed_pane_g1

0xdb07,	// (0x000976fb) heading_imed_pane_t1

0xdb15,	// (0x00097709) grid_imed_colour_35_pane_ParamLimits

0xdb15,	// (0x00097709) grid_imed_colour_35_pane

0x7bc9,	// (0x000917bd) grid_imed_effect_pane

0xdb2d,	// (0x00097721) list_imed_aspect_pane

0x7bdf,	// (0x000917d3) scroll_pane_cp027_ParamLimits

0x7bdf,	// (0x000917d3) scroll_pane_cp027

0x7bf0,	// (0x000917e4) cell_imed_effect_pane_ParamLimits

0x7bf0,	// (0x000917e4) cell_imed_effect_pane

0xdb35,	// (0x00097729) cell_imed_colour_pane_ParamLimits

0xdb35,	// (0x00097729) cell_imed_colour_pane

0xdb77,	// (0x0009776b) cell_imed_colour_pane_g1_ParamLimits

0xdb77,	// (0x0009776b) cell_imed_colour_pane_g1

0xdb88,	// (0x0009777c) hgihlgiht_grid_pane_cp016_ParamLimits

0xdb88,	// (0x0009777c) hgihlgiht_grid_pane_cp016

0x7c17,	// (0x0009180b) cell_imed_effect_pane_g1

0x7c1f,	// (0x00091813) grid_highlight_pane_cp017

0xdb99,	// (0x0009778d) list_imed_single_pane_ParamLimits

0xdb99,	// (0x0009778d) list_imed_single_pane

0x009f,	// (0x00089c93) list_highlight_pane_cp07

0xdbae,	// (0x000977a2) list_imed_aspect_pane_comp1_t1

0x58a6,	// (0x0008f49a) bg_tb_trans_pane_cp05

0xdbd0,	// (0x000977c4) popup_imed_adjust2_window_g1

0xdbf7,	// (0x000977eb) popup_imed_adjust2_window_t1

0xdc0f,	// (0x00097803) slider_imed_adjust_pane

0xdc23,	// (0x00097817) slider_imed_adjust_pane_g1

0xdc33,	// (0x00097827) slider_imed_adjust_pane_g2

0xdc43,	// (0x00097837) slider_imed_adjust_pane_g3

0xdc54,	// (0x00097848) slider_imed_adjust_pane_g4

0x0003,

0xf767,	// (0x0009935b) slider_imed_adjust_pane_g

0x7c28,	// (0x0009181c) aid_size_cell_clipart2

0x7c34,	// (0x00091828) grid_imed_clipart_pane

0xdc65,	// (0x00097859) scroll_pane_cp031

0x7c3e,	// (0x00091832) cell_imed_clipart_pane_ParamLimits

0x7c3e,	// (0x00091832) cell_imed_clipart_pane

0x7c60,	// (0x00091854) cell_imed_clipart_pane_g1

0x009f,	// (0x00089c93) grid_highlight_pane_cp014

0x790f,	// (0x00091503) main_clock2_pane_g1_ParamLimits

0x790f,	// (0x00091503) main_clock2_pane_g1

0x7a53,	// (0x00091647) aid_call2_pane_cp10

0x7a65,	// (0x00091659) aid_call_pane_cp10

0x5573,	// (0x0008f167) popup_clock_analogue_window_cp10_g1

0x5573,	// (0x0008f167) popup_clock_analogue_window_cp10_g2

0x7a77,	// (0x0009166b) popup_clock_analogue_window_cp10_g3

0x7a77,	// (0x0009166b) popup_clock_analogue_window_cp10_g4

0x5573,	// (0x0008f167) popup_clock_analogue_window_cp10_g5

0x0004,

0xf755,	// (0x00099349) popup_clock_analogue_window_cp10_g

0x7a8d,	// (0x00091681) popup_clock_analogue_window_cp10_t1

0x7abe,	// (0x000916b2) clock_digital_number_pane_cp10_ParamLimits

0x7abe,	// (0x000916b2) clock_digital_number_pane_cp10

0x7ad6,	// (0x000916ca) clock_digital_number_pane_cp11_ParamLimits

0x7ad6,	// (0x000916ca) clock_digital_number_pane_cp11

0x7aee,	// (0x000916e2) clock_digital_number_pane_cp12_ParamLimits

0x7aee,	// (0x000916e2) clock_digital_number_pane_cp12

0x7b08,	// (0x000916fc) clock_digital_number_pane_cp13_ParamLimits

0x7b08,	// (0x000916fc) clock_digital_number_pane_cp13

0x7b22,	// (0x00091716) clock_digital_separator_pane_cp10_ParamLimits

0x7b22,	// (0x00091716) clock_digital_separator_pane_cp10

0x7b3c,	// (0x00091730) popup_clock_digital_window_cp02_t1_ParamLimits

0x7b3c,	// (0x00091730) popup_clock_digital_window_cp02_t1

0x070f,	// (0x0008a303) clock_digital_number_pane_cp10_g1

0x070f,	// (0x0008a303) clock_digital_number_pane_cp10_g2

0x0001,

0xf770,	// (0x00099364) clock_digital_number_pane_cp10_g

0x070f,	// (0x0008a303) clock_digital_separator_pane_cp10_g1

0x070f,	// (0x0008a303) clock_digital_separator_pane_g2_cp10

0x57a7,	// (0x0008f39b) navi_pane_vded_g4

0x57b0,	// (0x0008f3a4) navi_pane_vded_g5

0x57b9,	// (0x0008f3ad) navi_pane_vded_t1

0xc1f9,	// (0x00095ded) main_vded_pane

0x7c69,	// (0x0009185d) main_vded_pane_g1

0x7c73,	// (0x00091867) main_vded_pane_g2

0x7c7d,	// (0x00091871) main_vded_pane_g3

0x0002,

0xf775,	// (0x00099369) main_vded_pane_g

0x7c87,	// (0x0009187b) main_vded_pane_t1

0x7c95,	// (0x00091889) main_vded_pane_t2

0x0001,

0xf77c,	// (0x00099370) main_vded_pane_t

0x7ca3,	// (0x00091897) vded_slider_pane

0x7cab,	// (0x0009189f) vded_video_pane

0xdc6d,	// (0x00097861) vded_video_pane_g1

0x7cb3,	// (0x000918a7) vded_video_pane_g2

0x09fa,	// (0x0008a5ee) vded_video_pane_g3

0x0002,

0xf781,	// (0x00099375) vded_video_pane_g

0xdc77,	// (0x0009786b) vded_slider_pane_g1

0xd3ec,	// (0x00096fe0) vded_slider_pane_g2

0xdc80,	// (0x00097874) vded_slider_pane_g3

0xdc89,	// (0x0009787d) vded_slider_pane_g4

0xdc92,	// (0x00097886) vded_slider_pane_g5

0x0004,

0xf788,	// (0x0009937c) vded_slider_pane_g

0x7773,	// (0x00091367) mup3_rocker_pane_ParamLimits

0x7773,	// (0x00091367) mup3_rocker_pane

0x7cbc,	// (0x000918b0) mup3_control_keys_pane_g1

0x7cc4,	// (0x000918b8) mup3_control_keys_pane_g2

0x7ccc,	// (0x000918c0) mup3_control_keys_pane_g3

0x7cd4,	// (0x000918c8) mup3_control_keys_pane_g4

0x0003,

0xf793,	// (0x00099387) mup3_control_keys_pane_g

0x349a,	// (0x0008d08e) popup_toolbar2_fixed_window_cp01_ParamLimits

0x349a,	// (0x0008d08e) popup_toolbar2_fixed_window_cp01

0x77a7,	// (0x0009139b) popup_toolbar2_fixed_window_cp02_ParamLimits

0x77a7,	// (0x0009139b) popup_toolbar2_fixed_window_cp02

0xc57d,	// (0x00096171) popup_call2_audio_second_window_t4_ParamLimits

0xc57d,	// (0x00096171) popup_call2_audio_second_window_t4

0xcab9,	// (0x000966ad) popup_call2_audio_first_window_t6_ParamLimits

0xcab9,	// (0x000966ad) popup_call2_audio_first_window_t6

0xccf7,	// (0x000968eb) popup_call2_audio_out_window_t6_ParamLimits

0xccf7,	// (0x000968eb) popup_call2_audio_out_window_t6

0xc1f9,	// (0x00095ded) main_vitu_pane

0x0739,	// (0x0008a32d) aid_size_cell_itu_ParamLimits

0x0739,	// (0x0008a32d) aid_size_cell_itu

0x0739,	// (0x0008a32d) bg_popup_window_pane_cp08_ParamLimits

0x0739,	// (0x0008a32d) bg_popup_window_pane_cp08

0x0739,	// (0x0008a32d) field_vitu_entry_pane_ParamLimits

0x0739,	// (0x0008a32d) field_vitu_entry_pane

0x0739,	// (0x0008a32d) grid_vitu_function_pane_ParamLimits

0x0739,	// (0x0008a32d) grid_vitu_function_pane

0x0739,	// (0x0008a32d) grid_vitu_itu_pane_ParamLimits

0x0739,	// (0x0008a32d) grid_vitu_itu_pane

0x0739,	// (0x0008a32d) cell_vitu_itu_pane_ParamLimits

0x0739,	// (0x0008a32d) cell_vitu_itu_pane

0x0739,	// (0x0008a32d) cell_vitu_function_pane_ParamLimits

0x0739,	// (0x0008a32d) cell_vitu_function_pane

0x0739,	// (0x0008a32d) bg_popup_sub_pane_cp08_ParamLimits

0x0739,	// (0x0008a32d) bg_popup_sub_pane_cp08

0x0a14,	// (0x0008a608) field_vitu_entry_pane_t1_ParamLimits

0x0a14,	// (0x0008a608) field_vitu_entry_pane_t1

0xdc9b,	// (0x0009788f) field_vitu_entry_pane_t2_ParamLimits

0xdc9b,	// (0x0009788f) field_vitu_entry_pane_t2

0x0001,

0xf79c,	// (0x00099390) field_vitu_entry_pane_t_ParamLimits

0xf79c,	// (0x00099390) field_vitu_entry_pane_t

0xd476,	// (0x0009706a) bg_button_pane_cp05_ParamLimits

0xd476,	// (0x0009706a) bg_button_pane_cp05

0xdcb8,	// (0x000978ac) cell_vitu_itu_pane_g1

0xc36d,	// (0x00095f61) cell_vitu_itu_pane_t1_ParamLimits

0xc36d,	// (0x00095f61) cell_vitu_itu_pane_t1

0xc36d,	// (0x00095f61) cell_vitu_itu_pane_t2_ParamLimits

0xc36d,	// (0x00095f61) cell_vitu_itu_pane_t2

0x0002,

0xf7a1,	// (0x00099395) cell_vitu_itu_pane_t_ParamLimits

0xf7a1,	// (0x00099395) cell_vitu_itu_pane_t

0x009f,	// (0x00089c93) bg_button_pane_cp07

0x09fa,	// (0x0008a5ee) cell_vitu_function_pane_g1

0xc203,	// (0x00095df7) main_calc_pane_g1

0x32c1,	// (0x0008ceb5) aid_visual_content_pane

0xc1f9,	// (0x00095ded) main_vradio_pane

0x07a0,	// (0x0008a394) main_vradio_pane_g1_ParamLimits

0x07a0,	// (0x0008a394) main_vradio_pane_g1

0x07ae,	// (0x0008a3a2) main_vradio_pane_g2_ParamLimits

0x07ae,	// (0x0008a3a2) main_vradio_pane_g2

0x0001,

0xf7a8,	// (0x0009939c) main_vradio_pane_g_ParamLimits

0xf7a8,	// (0x0009939c) main_vradio_pane_g

0x0a14,	// (0x0008a608) main_vradio_pane_t1_ParamLimits

0x0a14,	// (0x0008a608) main_vradio_pane_t1

0x0a14,	// (0x0008a608) main_vradio_pane_t2_ParamLimits

0x0a14,	// (0x0008a608) main_vradio_pane_t2

0x09cc,	// (0x0008a5c0) main_vradio_pane_t3_ParamLimits

0x09cc,	// (0x0008a5c0) main_vradio_pane_t3

0x0002,

0xf7ad,	// (0x000993a1) main_vradio_pane_t_ParamLimits

0xf7ad,	// (0x000993a1) main_vradio_pane_t

0x0739,	// (0x0008a32d) vradio_rocker_control_pane_ParamLimits

0x0739,	// (0x0008a32d) vradio_rocker_control_pane

0x0739,	// (0x0008a32d) vradio_station_info_pane_ParamLimits

0x0739,	// (0x0008a32d) vradio_station_info_pane

0x0739,	// (0x0008a32d) vradio_frequency_info_pane_ParamLimits

0x0739,	// (0x0008a32d) vradio_frequency_info_pane

0x09fa,	// (0x0008a5ee) vradio_station_info_pane_g1

0xc36d,	// (0x00095f61) vradio_station_info_pane_t1_ParamLimits

0xc36d,	// (0x00095f61) vradio_station_info_pane_t1

0x09cc,	// (0x0008a5c0) vradio_station_info_pane_t2_ParamLimits

0x09cc,	// (0x0008a5c0) vradio_station_info_pane_t2

0x0001,

0xf7b4,	// (0x000993a8) vradio_station_info_pane_t_ParamLimits

0xf7b4,	// (0x000993a8) vradio_station_info_pane_t

0x009f,	// (0x00089c93) vradio_tuning_pane

0x7ce4,	// (0x000918d8) vradio_rocker_control_pane_g1

0xdcd4,	// (0x000978c8) vradio_rocker_control_pane_g2

0x7cee,	// (0x000918e2) vradio_rocker_control_pane_g3

0x7cf8,	// (0x000918ec) vradio_rocker_control_pane_g4

0x7d02,	// (0x000918f6) vradio_rocker_control_pane_g5

0x0004,

0xf7b9,	// (0x000993ad) vradio_rocker_control_pane_g

0x09fa,	// (0x0008a5ee) vradio_frequency_info_pane_g1

0x0a14,	// (0x0008a608) vradio_frequency_info_pane_t1_ParamLimits

0x0a14,	// (0x0008a608) vradio_frequency_info_pane_t1

0x7d0c,	// (0x00091900) vradio_tuning_pane_g1

0x7d17,	// (0x0009190b) vradio_tuning_pane_t1

0xc1aa,	// (0x00095d9e) area_side_right_pane_ParamLimits

0xc1aa,	// (0x00095d9e) area_side_right_pane

0xd121,	// (0x00096d15) status_small_pane_g1

0xd129,	// (0x00096d1d) status_small_pane_g2

0xd132,	// (0x00096d26) status_small_pane_g3

0xd13b,	// (0x00096d2f) status_small_pane_g4

0x0003,

0xf585,	// (0x00099179) status_small_pane_g

0xd144,	// (0x00096d38) status_small_pane_t1

0xc1f9,	// (0x00095ded) main_video3_pane

0xdcdc,	// (0x000978d0) cams_zoom_vslider_pane

0xdce4,	// (0x000978d8) image3_wide_pane_ParamLimits

0xdce4,	// (0x000978d8) image3_wide_pane

0xdcfe,	// (0x000978f2) image3_wide_small_pane

0xdd0a,	// (0x000978fe) main_video3_pane_g1_ParamLimits

0xdd0a,	// (0x000978fe) main_video3_pane_g1

0xdd26,	// (0x0009791a) main_video3_pane_g2_ParamLimits

0xdd26,	// (0x0009791a) main_video3_pane_g2

0x0001,

0xf7c4,	// (0x000993b8) main_video3_pane_g_ParamLimits

0xf7c4,	// (0x000993b8) main_video3_pane_g

0xdd42,	// (0x00097936) main_video3_pane_t1_ParamLimits

0xdd42,	// (0x00097936) main_video3_pane_t1

0xdd6d,	// (0x00097961) main_video3_pane_t2_ParamLimits

0xdd6d,	// (0x00097961) main_video3_pane_t2

0xdd98,	// (0x0009798c) main_video3_pane_t3_ParamLimits

0xdd98,	// (0x0009798c) main_video3_pane_t3

0x0002,

0xf7c9,	// (0x000993bd) main_video3_pane_t_ParamLimits

0xf7c9,	// (0x000993bd) main_video3_pane_t

0xddc5,	// (0x000979b9) cams_zoom_vslider_pane_g1

0xddce,	// (0x000979c2) cams_zoom_vslider_pane_g2

0x0001,

0xf7d0,	// (0x000993c4) cams_zoom_vslider_pane_g

0xddd6,	// (0x000979ca) small_slider_vertical_pane

0x09fa,	// (0x0008a5ee) small_slider_vertical_pane_g1

0x09fa,	// (0x0008a5ee) small_slider_vertical_pane_g2

0xddde,	// (0x000979d2) small_slider_vertical_pane_g3

0x0002,

0xf7d5,	// (0x000993c9) small_slider_vertical_pane_g

0xc1f9,	// (0x00095ded) main_hwr_training_pane

0xdde7,	// (0x000979db) hwr_training_instruct_pane_ParamLimits

0xdde7,	// (0x000979db) hwr_training_instruct_pane

0x7d26,	// (0x0009191a) hwr_training_navi_pane_ParamLimits

0x7d26,	// (0x0009191a) hwr_training_navi_pane

0x7d45,	// (0x00091939) hwr_training_write_pane_ParamLimits

0x7d45,	// (0x00091939) hwr_training_write_pane

0x009f,	// (0x00089c93) bg_frame_shadow_pane

0xde1e,	// (0x00097a12) hwr_training_write_pane_g1

0xde26,	// (0x00097a1a) hwr_training_write_pane_g2

0xde2e,	// (0x00097a22) hwr_training_write_pane_g3

0xde36,	// (0x00097a2a) hwr_training_write_pane_g4

0xde3e,	// (0x00097a32) hwr_training_write_pane_g5

0xde46,	// (0x00097a3a) hwr_training_write_pane_g6

0xde4e,	// (0x00097a42) hwr_training_write_pane_g7

0x0006,

0xf7dc,	// (0x000993d0) hwr_training_write_pane_g

0xde56,	// (0x00097a4a) hwr_training_navi_pane_g1_ParamLimits

0xde56,	// (0x00097a4a) hwr_training_navi_pane_g1

0xde68,	// (0x00097a5c) hwr_training_navi_pane_g2_ParamLimits

0xde68,	// (0x00097a5c) hwr_training_navi_pane_g2

0xde7a,	// (0x00097a6e) hwr_training_navi_pane_g3_ParamLimits

0xde7a,	// (0x00097a6e) hwr_training_navi_pane_g3

0xde8a,	// (0x00097a7e) hwr_training_navi_pane_g4_ParamLimits

0xde8a,	// (0x00097a7e) hwr_training_navi_pane_g4

0x0004,

0xf7eb,	// (0x000993df) hwr_training_navi_pane_g_ParamLimits

0xf7eb,	// (0x000993df) hwr_training_navi_pane_g

0xde97,	// (0x00097a8b) hwr_training_navi_pane_t1

0x7d8f,	// (0x00091983) list_single_hwr_training_instruct_pane_ParamLimits

0x7d8f,	// (0x00091983) list_single_hwr_training_instruct_pane

0xdea5,	// (0x00097a99) list_single_hwr_training_instruct_pane_t1

0xd5d0,	// (0x000971c4) bg_frame_shadow_pane_g1

0xdeb4,	// (0x00097aa8) bg_frame_shadow_pane_g2

0xdebc,	// (0x00097ab0) bg_frame_shadow_pane_g3

0xdec4,	// (0x00097ab8) bg_frame_shadow_pane_g4

0xdecc,	// (0x00097ac0) bg_frame_shadow_pane_g5

0xded4,	// (0x00097ac8) bg_frame_shadow_pane_g6

0xdedc,	// (0x00097ad0) bg_frame_shadow_pane_g7

0x08c1,	// (0x0008a4b5) bg_frame_shadow_pane_g8

0x0007,

0xf7f6,	// (0x000993ea) bg_frame_shadow_pane_g

0xc1f9,	// (0x00095ded) main_video_tele_dialer_pane

0x7da5,	// (0x00091999) aid_size_cell_video_keypad_ParamLimits

0x7da5,	// (0x00091999) aid_size_cell_video_keypad

0x7dbf,	// (0x000919b3) grid_video_dialer_keypad_pane_ParamLimits

0x7dbf,	// (0x000919b3) grid_video_dialer_keypad_pane

0x7e0d,	// (0x00091a01) video_down_pane_cp_ParamLimits

0x7e0d,	// (0x00091a01) video_down_pane_cp

0x7e3f,	// (0x00091a33) cell_video_dialer_keypad_pane_ParamLimits

0x7e3f,	// (0x00091a33) cell_video_dialer_keypad_pane

0xdee4,	// (0x00097ad8) bg_button_pane_cp08_ParamLimits

0xdee4,	// (0x00097ad8) bg_button_pane_cp08

0x7e61,	// (0x00091a55) cell_video_dialer_keypad_pane_g1_ParamLimits

0x7e61,	// (0x00091a55) cell_video_dialer_keypad_pane_g1

0x775d,	// (0x00091351) mup3_rocker2_pane_ParamLimits

0x775d,	// (0x00091351) mup3_rocker2_pane

0x09fa,	// (0x0008a5ee) mup3_rocker2_pane_g1

0x6a37,	// (0x0009062b) main_dialer2_pane

0xc1f9,	// (0x00095ded) main_mp4_pane

0xdf0e,	// (0x00097b02) main_mp4_pane_g1_ParamLimits

0xdf0e,	// (0x00097b02) main_mp4_pane_g1

0xdf0e,	// (0x00097b02) main_mp4_pane_g2_ParamLimits

0xdf0e,	// (0x00097b02) main_mp4_pane_g2

0x7e9b,	// (0x00091a8f) main_mp4_pane_g3_ParamLimits

0x7e9b,	// (0x00091a8f) main_mp4_pane_g3

0xdf1c,	// (0x00097b10) main_mp4_pane_g4_ParamLimits

0xdf1c,	// (0x00097b10) main_mp4_pane_g4

0xdf4a,	// (0x00097b3e) main_mp4_pane_g5_ParamLimits

0xdf4a,	// (0x00097b3e) main_mp4_pane_g5

0x0007,

0xf816,	// (0x0009940a) main_mp4_pane_g_ParamLimits

0xf816,	// (0x0009940a) main_mp4_pane_g

0xdfbe,	// (0x00097bb2) main_mp4_pane_t1_ParamLimits

0xdfbe,	// (0x00097bb2) main_mp4_pane_t1

0xe01a,	// (0x00097c0e) main_mp4_pane_t2_ParamLimits

0xe01a,	// (0x00097c0e) main_mp4_pane_t2

0xe06c,	// (0x00097c60) main_mp4_pane_t3_ParamLimits

0xe06c,	// (0x00097c60) main_mp4_pane_t3

0xe092,	// (0x00097c86) main_mp4_pane_t4_ParamLimits

0xe092,	// (0x00097c86) main_mp4_pane_t4

0x0003,

0xf827,	// (0x0009941b) main_mp4_pane_t_ParamLimits

0xf827,	// (0x0009941b) main_mp4_pane_t

0xe0d6,	// (0x00097cca) mp4_progress_pane_ParamLimits

0xe0d6,	// (0x00097cca) mp4_progress_pane

0xe120,	// (0x00097d14) mp4_rocker_pane_ParamLimits

0xe120,	// (0x00097d14) mp4_rocker_pane

0xe148,	// (0x00097d3c) mp4_progress_pane_t1

0xe161,	// (0x00097d55) mp4_progress_pane_t2

0x0001,

0xf830,	// (0x00099424) mp4_progress_pane_t

0xe17a,	// (0x00097d6e) mup_progress_pane_cp04

0x0db1,	// (0x0008a9a5) mp4_rocker_pane_g1

0x7ed7,	// (0x00091acb) aid_cell_size_keypad2_ParamLimits

0x7ed7,	// (0x00091acb) aid_cell_size_keypad2

0x7eed,	// (0x00091ae1) dialer2_ne_pane_ParamLimits

0x7eed,	// (0x00091ae1) dialer2_ne_pane

0x7f07,	// (0x00091afb) grid_dialer2_keypad_pane_ParamLimits

0x7f07,	// (0x00091afb) grid_dialer2_keypad_pane

0xd476,	// (0x0009706a) bg_popup_call_pane_cp07_ParamLimits

0xd476,	// (0x0009706a) bg_popup_call_pane_cp07

0x7f23,	// (0x00091b17) dialer2_ne_pane_t1_ParamLimits

0x7f23,	// (0x00091b17) dialer2_ne_pane_t1

0x7f5f,	// (0x00091b53) cell_dialer2_keypad_pane_ParamLimits

0x7f5f,	// (0x00091b53) cell_dialer2_keypad_pane

0xe19f,	// (0x00097d93) bg_button_pane_pane_cp04_ParamLimits

0xe19f,	// (0x00097d93) bg_button_pane_pane_cp04

0x7f81,	// (0x00091b75) cell_dialer2_keypad_pane_g1_ParamLimits

0x7f81,	// (0x00091b75) cell_dialer2_keypad_pane_g1

0x4053,	// (0x0008dc47) aid_placing_vt_set_content_ParamLimits

0x4053,	// (0x0008dc47) aid_placing_vt_set_content

0x407b,	// (0x0008dc6f) aid_placing_vt_set_title_ParamLimits

0x407b,	// (0x0008dc6f) aid_placing_vt_set_title

0xc1f9,	// (0x00095ded) main_image3_pane

0x8047,	// (0x00091c3b) area_side_right_pane_cp01_ParamLimits

0x8047,	// (0x00091c3b) area_side_right_pane_cp01

0xdf0e,	// (0x00097b02) main_image3_pane_g1_ParamLimits

0xdf0e,	// (0x00097b02) main_image3_pane_g1

0x805e,	// (0x00091c52) main_image3_pane_g2_ParamLimits

0x805e,	// (0x00091c52) main_image3_pane_g2

0x8086,	// (0x00091c7a) main_image3_pane_g3_ParamLimits

0x8086,	// (0x00091c7a) main_image3_pane_g3

0x80b0,	// (0x00091ca4) main_image3_pane_g4_ParamLimits

0x80b0,	// (0x00091ca4) main_image3_pane_g4

0x0003,

0xf83f,	// (0x00099433) main_image3_pane_g_ParamLimits

0xf83f,	// (0x00099433) main_image3_pane_g

0x80da,	// (0x00091cce) main_image3_pane_t1_ParamLimits

0x80da,	// (0x00091cce) main_image3_pane_t1

0x8132,	// (0x00091d26) main_image3_pane_t2_ParamLimits

0x8132,	// (0x00091d26) main_image3_pane_t2

0x8184,	// (0x00091d78) main_image3_pane_t3_ParamLimits

0x8184,	// (0x00091d78) main_image3_pane_t3

0x0003,

0xf848,	// (0x0009943c) main_image3_pane_t_ParamLimits

0xf848,	// (0x0009943c) main_image3_pane_t

0x0739,	// (0x0008a32d) grid_sctrl_middle_pane_cp01_ParamLimits

0x0739,	// (0x0008a32d) grid_sctrl_middle_pane_cp01

0x820c,	// (0x00091e00) cell_sctrl_middle_pane_cp01_ParamLimits

0x820c,	// (0x00091e00) cell_sctrl_middle_pane_cp01

0x8229,	// (0x00091e1d) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x8229,	// (0x00091e1d) cell_sctrl_middle_pane_cp01_g1

0xc1f9,	// (0x00095ded) main_call4_pane

0x823f,	// (0x00091e33) aid_size_button_call4_ParamLimits

0x823f,	// (0x00091e33) aid_size_button_call4

0x8272,	// (0x00091e66) call4_windows_pane_ParamLimits

0x8272,	// (0x00091e66) call4_windows_pane

0x8291,	// (0x00091e85) grid_call4_button_pane_ParamLimits

0x8291,	// (0x00091e85) grid_call4_button_pane

0x82c4,	// (0x00091eb8) call4_windows_conf_pane

0x82d9,	// (0x00091ecd) popup_call4_audio_first_window_ParamLimits

0x82d9,	// (0x00091ecd) popup_call4_audio_first_window

0x8329,	// (0x00091f1d) popup_call4_audio_second_window_ParamLimits

0x8329,	// (0x00091f1d) popup_call4_audio_second_window

0x8340,	// (0x00091f34) popup_call4_audio_wait_window_ParamLimits

0x8340,	// (0x00091f34) popup_call4_audio_wait_window

0x834e,	// (0x00091f42) cell_call4_button_pane_ParamLimits

0x834e,	// (0x00091f42) cell_call4_button_pane

0x8373,	// (0x00091f67) bg_button_pane_cp09_ParamLimits

0x8373,	// (0x00091f67) bg_button_pane_cp09

0x837f,	// (0x00091f73) cell_call4_button_pane_g1_ParamLimits

0x837f,	// (0x00091f73) cell_call4_button_pane_g1

0x83a5,	// (0x00091f99) cell_call4_button_pane_t1_ParamLimits

0x83a5,	// (0x00091f99) cell_call4_button_pane_t1

0xe217,	// (0x00097e0b) popup_call4_audio_conf_window_ParamLimits

0xe217,	// (0x00097e0b) popup_call4_audio_conf_window

0x77bd,	// (0x000913b1) mup3_progress_pane_t1_ParamLimits

0x77dc,	// (0x000913d0) mup3_progress_pane_t2_ParamLimits

0xd9ae,	// (0x000975a2) mup3_progress_pane_t3_ParamLimits

0xf71d,	// (0x00099311) mup3_progress_pane_t_ParamLimits

0xd9cb,	// (0x000975bf) mup_progress_pane_cp03_ParamLimits

0x7cdc,	// (0x000918d0) mup3_control_keys_pane_g4_copy1

0xe104,	// (0x00097cf8) mp4_rocker2_pane_ParamLimits

0xe104,	// (0x00097cf8) mp4_rocker2_pane

0xe22b,	// (0x00097e1f) mp4_rocker2_pane_g1

0xe233,	// (0x00097e27) mp4_rocker2_pane_g2

0xe23b,	// (0x00097e2f) mp4_rocker2_pane_g3

0xe243,	// (0x00097e37) mp4_rocker2_pane_g4

0xe24b,	// (0x00097e3f) mp4_rocker2_pane_g5

0x0004,

0xf851,	// (0x00099445) mp4_rocker2_pane_g

0xc1f9,	// (0x00095ded) main_camera4_pane

0xc1f9,	// (0x00095ded) main_video4_pane

0x7ddb,	// (0x000919cf) main_video_tele_dialer_pane_t1_ParamLimits

0x7ddb,	// (0x000919cf) main_video_tele_dialer_pane_t1

0x7df4,	// (0x000919e8) main_video_tele_dialer_pane_t2_ParamLimits

0x7df4,	// (0x000919e8) main_video_tele_dialer_pane_t2

0x0001,

0xf807,	// (0x000993fb) main_video_tele_dialer_pane_t_ParamLimits

0xf807,	// (0x000993fb) main_video_tele_dialer_pane_t

0x83e7,	// (0x00091fdb) cam4_autofocus_pane_ParamLimits

0x83e7,	// (0x00091fdb) cam4_autofocus_pane

0x83fd,	// (0x00091ff1) cam4_image_uncrop_pane_ParamLimits

0x83fd,	// (0x00091ff1) cam4_image_uncrop_pane

0x8417,	// (0x0009200b) cam4_indicators_pane_ParamLimits

0x8417,	// (0x0009200b) cam4_indicators_pane

0x8442,	// (0x00092036) main_camera4_pane_g1_ParamLimits

0x8442,	// (0x00092036) main_camera4_pane_g1

0x8454,	// (0x00092048) main_camera4_pane_g2_ParamLimits

0x8454,	// (0x00092048) main_camera4_pane_g2

0x8467,	// (0x0009205b) main_camera4_pane_g3_ParamLimits

0x8467,	// (0x0009205b) main_camera4_pane_g3

0x847a,	// (0x0009206e) main_camera4_pane_g4_ParamLimits

0x847a,	// (0x0009206e) main_camera4_pane_g4

0x848d,	// (0x00092081) main_camera4_pane_g5_ParamLimits

0x848d,	// (0x00092081) main_camera4_pane_g5

0x0005,

0xf85c,	// (0x00099450) main_camera4_pane_g_ParamLimits

0xf85c,	// (0x00099450) main_camera4_pane_g

0x84b1,	// (0x000920a5) main_camera4_pane_t1_ParamLimits

0x84b1,	// (0x000920a5) main_camera4_pane_t1

0x0dbb,	// (0x0008a9af) bg_tb_trans_pane_cp06

0xe277,	// (0x00097e6b) cam4_indicators_pane_g1

0xe288,	// (0x00097e7c) cam4_indicators_pane_g2

0x0002,

0xf877,	// (0x0009946b) cam4_indicators_pane_g

0xe2a0,	// (0x00097e94) cam4_indicators_pane_t1

0x8515,	// (0x00092109) main_video4_pane_g1_ParamLimits

0x8515,	// (0x00092109) main_video4_pane_g1

0x8524,	// (0x00092118) main_video4_pane_g2_ParamLimits

0x8524,	// (0x00092118) main_video4_pane_g2

0x8533,	// (0x00092127) main_video4_pane_g3_ParamLimits

0x8533,	// (0x00092127) main_video4_pane_g3

0x8542,	// (0x00092136) main_video4_pane_g4_ParamLimits

0x8542,	// (0x00092136) main_video4_pane_g4

0x0004,

0xf87e,	// (0x00099472) main_video4_pane_g_ParamLimits

0xf87e,	// (0x00099472) main_video4_pane_g

0x8560,	// (0x00092154) vid4_indicators_pane_ParamLimits

0x8560,	// (0x00092154) vid4_indicators_pane

0x858e,	// (0x00092182) video4_image_uncrop_cif_pane_ParamLimits

0x858e,	// (0x00092182) video4_image_uncrop_cif_pane

0x85a8,	// (0x0009219c) video4_image_uncrop_nhd_pane_ParamLimits

0x85a8,	// (0x0009219c) video4_image_uncrop_nhd_pane

0x83fd,	// (0x00091ff1) video4_image_uncrop_vga_pane_ParamLimits

0x83fd,	// (0x00091ff1) video4_image_uncrop_vga_pane

0xc1eb,	// (0x00095ddf) bg_tb_trans_pane_cp07

0xe2ca,	// (0x00097ebe) vid4_indicators_pane_g1

0xe2de,	// (0x00097ed2) vid4_indicators_pane_g2

0xe2f2,	// (0x00097ee6) vid4_indicators_pane_g3

0x0004,

0xf889,	// (0x0009947d) vid4_indicators_pane_g

0xe31f,	// (0x00097f13) vid4_indicators_pane_t1

0x85bc,	// (0x000921b0) cam4_autofocus_pane_g1

0x85c4,	// (0x000921b8) cam4_autofocus_pane_g2

0x85cc,	// (0x000921c0) cam4_autofocus_pane_g3

0x0002,

0xf894,	// (0x00099488) cam4_autofocus_pane_g

0x85d4,	// (0x000921c8) cam4_autofocus_pane_g3_copy1

0x7e23,	// (0x00091a17) video_down_pane_cp_t1

0x7e31,	// (0x00091a25) video_down_pane_cp_t2

0x0001,

0xf80c,	// (0x00099400) video_down_pane_cp_t

0xc1eb,	// (0x00095ddf) popup_vitu2_window_ParamLimits

0xc1eb,	// (0x00095ddf) popup_vitu2_window

0x85dc,	// (0x000921d0) aid_size_cell2_itu2_ParamLimits

0x85dc,	// (0x000921d0) aid_size_cell2_itu2

0x8602,	// (0x000921f6) aid_size_cell_itu2_ParamLimits

0x8602,	// (0x000921f6) aid_size_cell_itu2

0x865e,	// (0x00092252) bg_popup_window_pane_cp09_ParamLimits

0x865e,	// (0x00092252) bg_popup_window_pane_cp09

0x866c,	// (0x00092260) field_vitu2_entry_pane_ParamLimits

0x866c,	// (0x00092260) field_vitu2_entry_pane

0x8692,	// (0x00092286) grid_vitu2_function_pane_ParamLimits

0x8692,	// (0x00092286) grid_vitu2_function_pane

0x86e3,	// (0x000922d7) grid_vitu2_itu_pane_ParamLimits

0x86e3,	// (0x000922d7) grid_vitu2_itu_pane

0x8779,	// (0x0009236d) cell_vitu2_itu_pane_ParamLimits

0x8779,	// (0x0009236d) cell_vitu2_itu_pane

0x87a5,	// (0x00092399) cell_vitu2_function_pane_ParamLimits

0x87a5,	// (0x00092399) cell_vitu2_function_pane

0xe336,	// (0x00097f2a) bg_popup_call_pane_cp08_ParamLimits

0xe336,	// (0x00097f2a) bg_popup_call_pane_cp08

0xe34d,	// (0x00097f41) field_vitu2_entry_pane_g1

0xe359,	// (0x00097f4d) field_vitu2_entry_pane_g2

0x0002,

0xf89b,	// (0x0009948f) field_vitu2_entry_pane_g

0x87e4,	// (0x000923d8) field_vitu2_entry_pane_t1_ParamLimits

0x87e4,	// (0x000923d8) field_vitu2_entry_pane_t1

0xe365,	// (0x00097f59) field_vitu2_entry_pane_t2_ParamLimits

0xe365,	// (0x00097f59) field_vitu2_entry_pane_t2

0x0001,

0xf8a2,	// (0x00099496) field_vitu2_entry_pane_t_ParamLimits

0xf8a2,	// (0x00099496) field_vitu2_entry_pane_t

0x8814,	// (0x00092408) bg_button_pane_cp010_ParamLimits

0x8814,	// (0x00092408) bg_button_pane_cp010

0x8822,	// (0x00092416) cell_vitu2_itu_pane_g1

0x8848,	// (0x0009243c) cell_vitu2_itu_pane_t1_ParamLimits

0x8848,	// (0x0009243c) cell_vitu2_itu_pane_t1

0x3199,	// (0x0008cd8d) cell_vitu2_itu_pane_t2_ParamLimits

0x3199,	// (0x0008cd8d) cell_vitu2_itu_pane_t2

0x0002,

0xf8ac,	// (0x000994a0) cell_vitu2_itu_pane_t_ParamLimits

0xf8ac,	// (0x000994a0) cell_vitu2_itu_pane_t

0xc1eb,	// (0x00095ddf) bg_button_pane_cp011

0x88a6,	// (0x0009249a) cell_vitu2_function_pane_g1

0xc1f9,	// (0x00095ded) main_myfav_hc_pane

0x81d4,	// (0x00091dc8) popup_image3_note_pane_ParamLimits

0x81d4,	// (0x00091dc8) popup_image3_note_pane

0x81f0,	// (0x00091de4) popup_image3_tool_bar_pane_ParamLimits

0x81f0,	// (0x00091de4) popup_image3_tool_bar_pane

0x3227,	// (0x0008ce1b) cell_vitu2_itu_pane_t3_ParamLimits

0x3227,	// (0x0008ce1b) cell_vitu2_itu_pane_t3

0x009f,	// (0x00089c93) bg_popup_trans_pane

0xe38a,	// (0x00097f7e) grid_image3_tool_bar_pane

0xe394,	// (0x00097f88) bg_popup_trans_pane_g1

0x0c1f,	// (0x0008a813) bg_popup_trans_pane_g2

0xe39c,	// (0x00097f90) bg_popup_trans_pane_g3

0xe3a4,	// (0x00097f98) bg_popup_trans_pane_g4

0xe3ac,	// (0x00097fa0) bg_popup_trans_pane_g5

0xe3b4,	// (0x00097fa8) bg_popup_trans_pane_g6

0xe3bc,	// (0x00097fb0) bg_popup_trans_pane_g7

0xe3c4,	// (0x00097fb8) bg_popup_trans_pane_g8

0x0bff,	// (0x0008a7f3) bg_popup_trans_pane_g9

0x0008,

0xf8b3,	// (0x000994a7) bg_popup_trans_pane_g

0xe3cc,	// (0x00097fc0) cell_image3_tool_bar_pane_ParamLimits

0xe3cc,	// (0x00097fc0) cell_image3_tool_bar_pane

0x09fa,	// (0x0008a5ee) cell_image3_tool_bar_pane_g1

0x009f,	// (0x00089c93) bg_popup_trans_pane_cp1

0xe3e0,	// (0x00097fd4) popup_image3_note_pane_t1

0xe3ee,	// (0x00097fe2) popup_image3_note_pane_t2

0xe3fc,	// (0x00097ff0) popup_image3_note_pane_t3

0x0002,

0xf8c6,	// (0x000994ba) popup_image3_note_pane_t

0xe40a,	// (0x00097ffe) popup_image3_note_pane_t3_copy1

0x88b9,	// (0x000924ad) bg_myfav_hc_instruction_pane_ParamLimits

0x88b9,	// (0x000924ad) bg_myfav_hc_instruction_pane

0x88cd,	// (0x000924c1) cell_myfav_contact_pane_ParamLimits

0x88cd,	// (0x000924c1) cell_myfav_contact_pane

0x88eb,	// (0x000924df) cell_myfav_contact_pane_cp1_ParamLimits

0x88eb,	// (0x000924df) cell_myfav_contact_pane_cp1

0x8903,	// (0x000924f7) cell_myfav_contact_pane_cp2_ParamLimits

0x8903,	// (0x000924f7) cell_myfav_contact_pane_cp2

0x891b,	// (0x0009250f) cell_myfav_contact_pane_cp3_ParamLimits

0x891b,	// (0x0009250f) cell_myfav_contact_pane_cp3

0x8932,	// (0x00092526) cell_myfav_contact_pane_cp4_ParamLimits

0x8932,	// (0x00092526) cell_myfav_contact_pane_cp4

0x894a,	// (0x0009253e) cell_myfav_contact_pane_cp5_ParamLimits

0x894a,	// (0x0009253e) cell_myfav_contact_pane_cp5

0x895e,	// (0x00092552) cell_myfav_contact_pane_cp6_ParamLimits

0x895e,	// (0x00092552) cell_myfav_contact_pane_cp6

0x8974,	// (0x00092568) cell_myfav_contact_pane_cp7_ParamLimits

0x8974,	// (0x00092568) cell_myfav_contact_pane_cp7

0xe418,	// (0x0009800c) listscroll_gen_pane_cp05

0x898e,	// (0x00092582) main_myfav_hc_pane_g1_ParamLimits

0x898e,	// (0x00092582) main_myfav_hc_pane_g1

0x89a8,	// (0x0009259c) main_myfav_hc_pane_g2_ParamLimits

0x89a8,	// (0x0009259c) main_myfav_hc_pane_g2

0x0002,

0xf8cd,	// (0x000994c1) main_myfav_hc_pane_g_ParamLimits

0xf8cd,	// (0x000994c1) main_myfav_hc_pane_g

0x89da,	// (0x000925ce) main_myfav_hc_pane_t1_ParamLimits

0x89da,	// (0x000925ce) main_myfav_hc_pane_t1

0xe421,	// (0x00098015) main_myfav_hc_pane_t2_ParamLimits

0xe421,	// (0x00098015) main_myfav_hc_pane_t2

0xe433,	// (0x00098027) main_myfav_hc_pane_t3_ParamLimits

0xe433,	// (0x00098027) main_myfav_hc_pane_t3

0x89f1,	// (0x000925e5) main_myfav_hc_pane_t4_ParamLimits

0x89f1,	// (0x000925e5) main_myfav_hc_pane_t4

0x0004,

0xf8d4,	// (0x000994c8) main_myfav_hc_pane_t_ParamLimits

0xf8d4,	// (0x000994c8) main_myfav_hc_pane_t

0x09fa,	// (0x0008a5ee) bg_myfav_hc_instruction_pane_g1

0xe445,	// (0x00098039) cell_myfav_contact_pane_g1_ParamLimits

0xe445,	// (0x00098039) cell_myfav_contact_pane_g1

0xe445,	// (0x00098039) cell_myfav_contact_pane_g2_ParamLimits

0xe445,	// (0x00098039) cell_myfav_contact_pane_g2

0xe451,	// (0x00098045) cell_myfav_contact_pane_g3_ParamLimits

0xe451,	// (0x00098045) cell_myfav_contact_pane_g3

0x07ae,	// (0x0008a3a2) cell_myfav_contact_pane_g4_ParamLimits

0x07ae,	// (0x0008a3a2) cell_myfav_contact_pane_g4

0xe45e,	// (0x00098052) cell_myfav_contact_pane_g5_ParamLimits

0xe45e,	// (0x00098052) cell_myfav_contact_pane_g5

0x0004,

0xf8df,	// (0x000994d3) cell_myfav_contact_pane_g_ParamLimits

0xf8df,	// (0x000994d3) cell_myfav_contact_pane_g

0x89c2,	// (0x000925b6) main_myfav_hc_pane_g3_ParamLimits

0x89c2,	// (0x000925b6) main_myfav_hc_pane_g3

0x33fc,	// (0x0008cff0) popup_adpt_find_window

0x8a19,	// (0x0009260d) afind_page_pane_ParamLimits

0x8a19,	// (0x0009260d) afind_page_pane

0x8a2e,	// (0x00092622) aid_size_cell_afind_ParamLimits

0x8a2e,	// (0x00092622) aid_size_cell_afind

0x8a4c,	// (0x00092640) bg_popup_sub_pane_cp09_ParamLimits

0x8a4c,	// (0x00092640) bg_popup_sub_pane_cp09

0x8a59,	// (0x0009264d) find_pane_cp01_ParamLimits

0x8a59,	// (0x0009264d) find_pane_cp01

0xe46a,	// (0x0009805e) grid_afind_control_pane_ParamLimits

0xe46a,	// (0x0009805e) grid_afind_control_pane

0x8a66,	// (0x0009265a) grid_afind_pane_ParamLimits

0x8a66,	// (0x0009265a) grid_afind_pane

0x8a85,	// (0x00092679) cell_afind_pane_ParamLimits

0x8a85,	// (0x00092679) cell_afind_pane

0x09fa,	// (0x0008a5ee) afind_page_pane_g1

0x8aec,	// (0x000926e0) afind_page_pane_g2

0x8af5,	// (0x000926e9) afind_page_pane_g3

0x0002,

0xf8ea,	// (0x000994de) afind_page_pane_g

0x8afe,	// (0x000926f2) afind_page_pane_t1

0xe47e,	// (0x00098072) cell_afind_grid_control_pane_ParamLimits

0xe47e,	// (0x00098072) cell_afind_grid_control_pane

0xe19f,	// (0x00097d93) bg_button_pane_cp69_ParamLimits

0xe19f,	// (0x00097d93) bg_button_pane_cp69

0x8b1e,	// (0x00092712) cell_afind_pane_g1_ParamLimits

0x8b1e,	// (0x00092712) cell_afind_pane_g1

0x8b2b,	// (0x0009271f) cell_afind_pane_t1_ParamLimits

0x8b2b,	// (0x0009271f) cell_afind_pane_t1

0x0a04,	// (0x0008a5f8) bg_button_pane_cp72

0xe48d,	// (0x00098081) cell_afind_grid_control_pane_g1

0x6338,	// (0x0008ff2c) aid_image_placing_area_ParamLimits

0x6338,	// (0x0008ff2c) aid_image_placing_area

0x07a0,	// (0x0008a394) field_vitu_entry_pane_g1_ParamLimits

0x07a0,	// (0x0008a394) field_vitu_entry_pane_g1

0x07a0,	// (0x0008a394) field_vitu_entry_pane_g2_ParamLimits

0x07a0,	// (0x0008a394) field_vitu_entry_pane_g2

0x0001,

0xf1e7,	// (0x00098ddb) field_vitu_entry_pane_g_ParamLimits

0xf1e7,	// (0x00098ddb) field_vitu_entry_pane_g

0xdcb8,	// (0x000978ac) cell_vitu_itu_pane_g1_ParamLimits

0xdc9b,	// (0x0009788f) cell_vitu_itu_pane_t3_ParamLimits

0xdc9b,	// (0x0009788f) cell_vitu_itu_pane_t3

0xe148,	// (0x00097d3c) mp4_progress_pane_t1_ParamLimits

0xe161,	// (0x00097d55) mp4_progress_pane_t2_ParamLimits

0xf830,	// (0x00099424) mp4_progress_pane_t_ParamLimits

0xe17a,	// (0x00097d6e) mup_progress_pane_cp04_ParamLimits

0x8a05,	// (0x000925f9) main_myfav_hc_pane_t5_ParamLimits

0x8a05,	// (0x000925f9) main_myfav_hc_pane_t5

0xc19a,	// (0x00095d8e) aid_zoom_text_primary

0x33fc,	// (0x0008cff0) popup_adpt_find_window_ParamLimits

0xc1eb,	// (0x00095ddf) main_cam_set_pane

0x842e,	// (0x00092022) cam4_zoom_pane_ParamLimits

0x842e,	// (0x00092022) cam4_zoom_pane

0x8b3d,	// (0x00092731) main_cam_set_pane_g1_ParamLimits

0x8b3d,	// (0x00092731) main_cam_set_pane_g1

0x8b4b,	// (0x0009273f) main_cam_set_pane_g2_ParamLimits

0x8b4b,	// (0x0009273f) main_cam_set_pane_g2

0x0001,

0xf8f1,	// (0x000994e5) main_cam_set_pane_g_ParamLimits

0xf8f1,	// (0x000994e5) main_cam_set_pane_g

0x8b6c,	// (0x00092760) main_cam_set_pane_t1_ParamLimits

0x8b6c,	// (0x00092760) main_cam_set_pane_t1

0x8b87,	// (0x0009277b) main_cset_listscroll_pane_ParamLimits

0x8b87,	// (0x0009277b) main_cset_listscroll_pane

0x8bad,	// (0x000927a1) main_cset_slider_pane_ParamLimits

0x8bad,	// (0x000927a1) main_cset_slider_pane

0xe49e,	// (0x00098092) main_cset_list_pane_ParamLimits

0xe49e,	// (0x00098092) main_cset_list_pane

0xe4ae,	// (0x000980a2) scroll_pane_cp028

0x8bd3,	// (0x000927c7) aid_area_touch_slider

0x8bef,	// (0x000927e3) cset_slider_pane

0x8c12,	// (0x00092806) main_cset_slider_pane_g1

0x8c27,	// (0x0009281b) main_cset_slider_pane_g2

0x0011,

0xf8f6,	// (0x000994ea) main_cset_slider_pane_g

0xe4e7,	// (0x000980db) main_cset_slider_pane_t1

0x8ccb,	// (0x000928bf) main_cset_slider_pane_t2

0x8ce5,	// (0x000928d9) main_cset_slider_pane_t3

0x8cff,	// (0x000928f3) main_cset_slider_pane_t4

0x8d19,	// (0x0009290d) main_cset_slider_pane_t5

0x8d33,	// (0x00092927) main_cset_slider_pane_t6

0x8d48,	// (0x0009293c) main_cset_slider_pane_t7

0x000e,

0xf91b,	// (0x0009950f) main_cset_slider_pane_t

0x8e4c,	// (0x00092a40) cset_list_set_pane_ParamLimits

0x8e4c,	// (0x00092a40) cset_list_set_pane

0x0dc9,	// (0x0008a9bd) aid_position_infowindow_above

0x0dd1,	// (0x0008a9c5) aid_position_infowindow_below

0x8e5e,	// (0x00092a52) cset_list_set_pane_g1_ParamLimits

0x8e5e,	// (0x00092a52) cset_list_set_pane_g1

0x8e6a,	// (0x00092a5e) cset_list_set_pane_g3_ParamLimits

0x8e6a,	// (0x00092a5e) cset_list_set_pane_g3

0x0001,

0xf93a,	// (0x0009952e) cset_list_set_pane_g_ParamLimits

0xf93a,	// (0x0009952e) cset_list_set_pane_g

0x8e79,	// (0x00092a6d) cset_list_set_pane_t1_ParamLimits

0x8e79,	// (0x00092a6d) cset_list_set_pane_t1

0x0739,	// (0x0008a32d) list_highlight_pane_cp021_ParamLimits

0x0739,	// (0x0008a32d) list_highlight_pane_cp021

0x5adf,	// (0x0008f6d3) cset_slider_pane_g1

0x5af1,	// (0x0008f6e5) cset_slider_pane_g2

0x5ae8,	// (0x0008f6dc) cset_slider_pane_g3

0x0002,

0xf93f,	// (0x00099533) cset_slider_pane_g

0xe581,	// (0x00098175) aid_area_touch_cam4_zoom

0xe589,	// (0x0009817d) cam4_zoom_cont_pane

0xe591,	// (0x00098185) cam4_zoom_pane_g1

0xe599,	// (0x0009818d) cam4_zoom_pane_g2

0x8e8e,	// (0x00092a82) cam4_zoom_pane_g3

0x0002,

0xf946,	// (0x0009953a) cam4_zoom_pane_g

0xe5a1,	// (0x00098195) cam4_zoom_cont_pane_g1

0xe5aa,	// (0x0009819e) cam4_zoom_cont_pane_g2

0xe5b3,	// (0x000981a7) cam4_zoom_cont_pane_g3

0x0002,

0xf94d,	// (0x00099541) cam4_zoom_cont_pane_g

0x825d,	// (0x00091e51) call4_image_pane_ParamLimits

0x825d,	// (0x00091e51) call4_image_pane

0x82c4,	// (0x00091eb8) call4_windows_conf_pane_ParamLimits

0x8307,	// (0x00091efb) popup_call4_audio_in_window_ParamLimits

0x8307,	// (0x00091efb) popup_call4_audio_in_window

0x009f,	// (0x00089c93) bg_popup_call2_act_pane_cp02

0xe20f,	// (0x00097e03) call4_list_conf_pane

0x09fa,	// (0x0008a5ee) call4_image_pane_g1

0x09fa,	// (0x0008a5ee) call4_image_pane_g2

0x0001,

0xf3be,	// (0x00098fb2) call4_image_pane_g

0x0dd9,	// (0x0008a9cd) list_single_graphic_popup_conf4_pane_ParamLimits

0x0dd9,	// (0x0008a9cd) list_single_graphic_popup_conf4_pane

0x009f,	// (0x00089c93) list_highlight_pane_cp022

0x0dec,	// (0x0008a9e0) list_single_graphic_popup_conf4_pane_g1

0x528d,	// (0x0008ee81) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf954,	// (0x00099548) list_single_graphic_popup_conf4_pane_g

0x0df4,	// (0x0008a9e8) list_single_graphic_popup_conf4_pane_t1

0x419f,	// (0x0008dd93) popup_vtel_slider_window_ParamLimits

0x419f,	// (0x0008dd93) popup_vtel_slider_window

0xe18d,	// (0x00097d81) dialer2_ne_pane_t2_ParamLimits

0xe18d,	// (0x00097d81) dialer2_ne_pane_t2

0x0001,

0xf835,	// (0x00099429) dialer2_ne_pane_t_ParamLimits

0xf835,	// (0x00099429) dialer2_ne_pane_t

0xd476,	// (0x0009706a) bg_popup_sub_pane_cp010_ParamLimits

0xd476,	// (0x0009706a) bg_popup_sub_pane_cp010

0x8e96,	// (0x00092a8a) popup_vtel_slider_window_g1_ParamLimits

0x8e96,	// (0x00092a8a) popup_vtel_slider_window_g1

0x8ea9,	// (0x00092a9d) popup_vtel_slider_window_g2_ParamLimits

0x8ea9,	// (0x00092a9d) popup_vtel_slider_window_g2

0x0003,

0xf959,	// (0x0009954d) popup_vtel_slider_window_g_ParamLimits

0xf959,	// (0x0009954d) popup_vtel_slider_window_g

0x8eff,	// (0x00092af3) vtel_slider_pane_ParamLimits

0x8eff,	// (0x00092af3) vtel_slider_pane

0x8f21,	// (0x00092b15) vtel_slider_pane_g1_ParamLimits

0x8f21,	// (0x00092b15) vtel_slider_pane_g1

0x8f35,	// (0x00092b29) vtel_slider_pane_g2_ParamLimits

0x8f35,	// (0x00092b29) vtel_slider_pane_g2

0x8f4d,	// (0x00092b41) vtel_slider_pane_g3_ParamLimits

0x8f4d,	// (0x00092b41) vtel_slider_pane_g3

0x8f21,	// (0x00092b15) vtel_slider_pane_g4_ParamLimits

0x8f21,	// (0x00092b15) vtel_slider_pane_g4

0x8f63,	// (0x00092b57) vtel_slider_pane_g5_ParamLimits

0x8f63,	// (0x00092b57) vtel_slider_pane_g5

0x0004,

0xf962,	// (0x00099556) vtel_slider_pane_g_ParamLimits

0xf962,	// (0x00099556) vtel_slider_pane_g

0xc1eb,	// (0x00095ddf) main_gallery2_pane

0x862e,	// (0x00092222) aid_size_row_itut2_dropdow_list_ParamLimits

0x862e,	// (0x00092222) aid_size_row_itut2_dropdow_list

0x86ba,	// (0x000922ae) grid_vitu2_function_top_pane_ParamLimits

0x86ba,	// (0x000922ae) grid_vitu2_function_top_pane

0x8724,	// (0x00092318) popup_vitu2_dropdown_list_window_ParamLimits

0x8724,	// (0x00092318) popup_vitu2_dropdown_list_window

0x874b,	// (0x0009233f) popup_vitu2_match_list_window

0x8f79,	// (0x00092b6d) cell_vitu2_function_top_pane_ParamLimits

0x8f79,	// (0x00092b6d) cell_vitu2_function_top_pane

0x8f91,	// (0x00092b85) cell_vitu2_function_top_pane_cp01_ParamLimits

0x8f91,	// (0x00092b85) cell_vitu2_function_top_pane_cp01

0x8fad,	// (0x00092ba1) cell_vitu2_function_top_wide_pane_ParamLimits

0x8fad,	// (0x00092ba1) cell_vitu2_function_top_wide_pane

0xc1eb,	// (0x00095ddf) bg_button_pane_cp012

0x8fcb,	// (0x00092bbf) cell_vitu2_function_top_pane_g1

0xe5bc,	// (0x000981b0) bg_button_pane_cp013_ParamLimits

0xe5bc,	// (0x000981b0) bg_button_pane_cp013

0x8fdf,	// (0x00092bd3) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x8fdf,	// (0x00092bd3) cell_vitu2_function_top_wide_pane_g1

0xc1eb,	// (0x00095ddf) bg_popup_sub_pane_cp20

0x8ff7,	// (0x00092beb) list_vitu2_match_list_pane

0xe394,	// (0x00097f88) bg_popup_sub_pane_cp20_g1

0xe39c,	// (0x00097f90) bg_popup_sub_pane_cp20_g2

0x0c1f,	// (0x0008a813) bg_popup_sub_pane_cp20_g3

0xe3a4,	// (0x00097f98) bg_popup_sub_pane_cp20_g4

0x0bff,	// (0x0008a7f3) bg_popup_sub_pane_cp20_g5

0x0e0a,	// (0x0008a9fe) bg_popup_sub_pane_cp20_g6

0xe3b4,	// (0x00097fa8) bg_popup_sub_pane_cp20_g7

0xe3bc,	// (0x00097fb0) bg_popup_sub_pane_cp20_g8

0xe3c4,	// (0x00097fb8) bg_popup_sub_pane_cp20_g9

0x0008,

0xf96d,	// (0x00099561) bg_popup_sub_pane_cp20_g

0xe5d8,	// (0x000981cc) list_vitu2_match_list_item_pane_ParamLimits

0xe5d8,	// (0x000981cc) list_vitu2_match_list_item_pane

0xe5ea,	// (0x000981de) list_vitu2_match_list_item_pane_t1

0xc1f9,	// (0x00095ded) bg_popup_sub_pane_cp21

0x09c4,	// (0x0008a5b8) grid_vitu2_dropdown_list_pane

0x900f,	// (0x00092c03) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x900f,	// (0x00092c03) cell_vitu2_dropdown_list_char_pane

0x902f,	// (0x00092c23) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x902f,	// (0x00092c23) cell_vitu2_dropdown_list_ctrl_pane

0x0e12,	// (0x0008aa06) cell_vitu2_dropdown_list_char_pane_g1

0x0e1b,	// (0x0008aa0f) cell_vitu2_dropdown_list_char_pane_g2

0x0e24,	// (0x0008aa18) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xf980,	// (0x00099574) cell_vitu2_dropdown_list_char_pane_g

0x9057,	// (0x00092c4b) cell_vitu2_dropdown_list_char_pane_t1

0x9065,	// (0x00092c59) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x9065,	// (0x00092c59) cell_vitu2_dropdown_list_ctrl_pane_g1

0x9072,	// (0x00092c66) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x9072,	// (0x00092c66) cell_vitu2_dropdown_list_ctrl_pane_g2

0x907f,	// (0x00092c73) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x907f,	// (0x00092c73) cell_vitu2_dropdown_list_ctrl_pane_g3

0x908c,	// (0x00092c80) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x908c,	// (0x00092c80) cell_vitu2_dropdown_list_ctrl_pane_g4

0x0dbb,	// (0x0008a9af) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0x0dbb,	// (0x0008a9af) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xf987,	// (0x0009957b) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xf987,	// (0x0009957b) cell_vitu2_dropdown_list_ctrl_pane_g

0x90a8,	// (0x00092c9c) aid_size_cell_gallery2_ParamLimits

0x90a8,	// (0x00092c9c) aid_size_cell_gallery2

0x90c6,	// (0x00092cba) grid_gallery2_pane_ParamLimits

0x90c6,	// (0x00092cba) grid_gallery2_pane

0x90e0,	// (0x00092cd4) scroll_pane_cp029_ParamLimits

0x90e0,	// (0x00092cd4) scroll_pane_cp029

0x90f1,	// (0x00092ce5) cell_gallery2_pane_ParamLimits

0x90f1,	// (0x00092ce5) cell_gallery2_pane

0x0e2d,	// (0x0008aa21) cell_gallery2_pane_g2

0x9150,	// (0x00092d44) cell_gallery2_pane_g3

0x0e35,	// (0x0008aa29) cell_gallery2_pane_g4

0x0e3d,	// (0x0008aa31) cell_gallery2_pane_g5

0x09c4,	// (0x0008a5b8) grid_highlight_pane_cp10

0x874b,	// (0x0009233f) popup_vitu2_match_list_window_ParamLimits

0x8760,	// (0x00092354) popup_vitu2_query_window_ParamLimits

0x8760,	// (0x00092354) popup_vitu2_query_window

0xc1f9,	// (0x00095ded) bg_vitu2_candi_button_pane

0x0e12,	// (0x0008aa06) cell_vitu2_dropdown_list_char_pane_g1_copy1

0x0e1b,	// (0x0008aa0f) cell_vitu2_dropdown_list_char_pane_g2_copy1

0x0e24,	// (0x0008aa18) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x9158,	// (0x00092d4c) bg_button_pane_cp015

0x9169,	// (0x00092d5d) bg_button_pane_cp016

0x9175,	// (0x00092d69) bg_button_pane_cp017

0x58a6,	// (0x0008f49a) bg_popup_sub_pane_cp22

0x0e45,	// (0x0008aa39) popup_vitu2_query_window_g1

0x91b3,	// (0x00092da7) popup_vitu2_query_window_g2

0x0002,

0xf992,	// (0x00099586) popup_vitu2_query_window_g

0x91d5,	// (0x00092dc9) popup_vitu2_query_window_t1_ParamLimits

0x91d5,	// (0x00092dc9) popup_vitu2_query_window_t1

0x9208,	// (0x00092dfc) popup_vitu2_query_window_t2_ParamLimits

0x9208,	// (0x00092dfc) popup_vitu2_query_window_t2

0x921a,	// (0x00092e0e) popup_vitu2_query_window_t3_ParamLimits

0x921a,	// (0x00092e0e) popup_vitu2_query_window_t3

0x9242,	// (0x00092e36) popup_vitu2_query_window_t4_ParamLimits

0x9242,	// (0x00092e36) popup_vitu2_query_window_t4

0x9256,	// (0x00092e4a) popup_vitu2_query_window_t5_ParamLimits

0x9256,	// (0x00092e4a) popup_vitu2_query_window_t5

0x0006,

0xf999,	// (0x0009958d) popup_vitu2_query_window_t_ParamLimits

0xf999,	// (0x0009958d) popup_vitu2_query_window_t

0xe496,	// (0x0009808a) main_cset_text_pane

0x8bd3,	// (0x000927c7) aid_area_touch_slider_ParamLimits

0x8bef,	// (0x000927e3) cset_slider_pane_ParamLimits

0x8c12,	// (0x00092806) main_cset_slider_pane_g1_ParamLimits

0x8c27,	// (0x0009281b) main_cset_slider_pane_g2_ParamLimits

0xe4b7,	// (0x000980ab) main_cset_slider_pane_g3_ParamLimits

0xe4b7,	// (0x000980ab) main_cset_slider_pane_g3

0x8c3c,	// (0x00092830) main_cset_slider_pane_g4_ParamLimits

0x8c3c,	// (0x00092830) main_cset_slider_pane_g4

0x8c4b,	// (0x0009283f) main_cset_slider_pane_g5_ParamLimits

0x8c4b,	// (0x0009283f) main_cset_slider_pane_g5

0x8c57,	// (0x0009284b) main_cset_slider_pane_g6_ParamLimits

0x8c57,	// (0x0009284b) main_cset_slider_pane_g6

0xf8f6,	// (0x000994ea) main_cset_slider_pane_g_ParamLimits

0xe4e7,	// (0x000980db) main_cset_slider_pane_t1_ParamLimits

0x8ccb,	// (0x000928bf) main_cset_slider_pane_t2_ParamLimits

0x8ce5,	// (0x000928d9) main_cset_slider_pane_t3_ParamLimits

0x8cff,	// (0x000928f3) main_cset_slider_pane_t4_ParamLimits

0x8d19,	// (0x0009290d) main_cset_slider_pane_t5_ParamLimits

0x8d33,	// (0x00092927) main_cset_slider_pane_t6_ParamLimits

0x8d48,	// (0x0009293c) main_cset_slider_pane_t7_ParamLimits

0x8d72,	// (0x00092966) main_cset_slider_pane_t8_ParamLimits

0x8d72,	// (0x00092966) main_cset_slider_pane_t8

0x8d9a,	// (0x0009298e) main_cset_slider_pane_t9_ParamLimits

0x8d9a,	// (0x0009298e) main_cset_slider_pane_t9

0x8dc2,	// (0x000929b6) main_cset_slider_pane_t10_ParamLimits

0x8dc2,	// (0x000929b6) main_cset_slider_pane_t10

0x8dea,	// (0x000929de) main_cset_slider_pane_t11_ParamLimits

0x8dea,	// (0x000929de) main_cset_slider_pane_t11

0x8e12,	// (0x00092a06) main_cset_slider_pane_t12_ParamLimits

0x8e12,	// (0x00092a06) main_cset_slider_pane_t12

0x8e2f,	// (0x00092a23) main_cset_slider_pane_t13_ParamLimits

0x8e2f,	// (0x00092a23) main_cset_slider_pane_t13

0xf91b,	// (0x0009950f) main_cset_slider_pane_t_ParamLimits

0x009f,	// (0x00089c93) bg_popup_sub_pane_cp011

0x0e51,	// (0x0008aa45) main_cset_text_pane_g1

0x0e59,	// (0x0008aa4d) main_cset_text_pane_t1

0x0e67,	// (0x0008aa5b) main_cset_text_pane_t2

0x0e75,	// (0x0008aa69) main_cset_text_pane_t3

0x0e83,	// (0x0008aa77) main_cset_text_pane_t4

0x0e91,	// (0x0008aa85) main_cset_text_pane_t5

0x0e9f,	// (0x0008aa93) main_cset_text_pane_t6

0x0ead,	// (0x0008aaa1) main_cset_text_pane_t7

0x0006,

0xf9a8,	// (0x0009959c) main_cset_text_pane_t

0xc1f9,	// (0x00095ded) main_cam4_burst_pane

0xc1f9,	// (0x00095ded) main_cam5_pane

0x8b0c,	// (0x00092700) bg_button_pane_cp019

0x8b15,	// (0x00092709) bg_button_pane_cp020

0xe4c3,	// (0x000980b7) main_cset_slider_pane_g7_ParamLimits

0xe4c3,	// (0x000980b7) main_cset_slider_pane_g7

0xe4cf,	// (0x000980c3) main_cset_slider_pane_g8_ParamLimits

0xe4cf,	// (0x000980c3) main_cset_slider_pane_g8

0x8c6b,	// (0x0009285f) main_cset_slider_pane_g9_ParamLimits

0x8c6b,	// (0x0009285f) main_cset_slider_pane_g9

0x8c77,	// (0x0009286b) main_cset_slider_pane_g10_ParamLimits

0x8c77,	// (0x0009286b) main_cset_slider_pane_g10

0x8c83,	// (0x00092877) main_cset_slider_pane_g11_ParamLimits

0x8c83,	// (0x00092877) main_cset_slider_pane_g11

0x8c8f,	// (0x00092883) main_cset_slider_pane_g12_ParamLimits

0x8c8f,	// (0x00092883) main_cset_slider_pane_g12

0x8c9b,	// (0x0009288f) main_cset_slider_pane_g13_ParamLimits

0x8c9b,	// (0x0009288f) main_cset_slider_pane_g13

0x8ca7,	// (0x0009289b) main_cset_slider_pane_g14_ParamLimits

0x8ca7,	// (0x0009289b) main_cset_slider_pane_g14

0x8cb3,	// (0x000928a7) main_cset_slider_pane_g15_ParamLimits

0x8cb3,	// (0x000928a7) main_cset_slider_pane_g15

0xe50f,	// (0x00098103) main_cset_slider_pane_t14_ParamLimits

0xe50f,	// (0x00098103) main_cset_slider_pane_t14

0xe548,	// (0x0009813c) main_cset_slider_pane_t15_ParamLimits

0xe548,	// (0x0009813c) main_cset_slider_pane_t15

0x92c0,	// (0x00092eb4) aid_cam4_burst_size_cell_ParamLimits

0x92c0,	// (0x00092eb4) aid_cam4_burst_size_cell

0x92e0,	// (0x00092ed4) grid_cam4_burst_pane_ParamLimits

0x92e0,	// (0x00092ed4) grid_cam4_burst_pane

0x9318,	// (0x00092f0c) linegrid_cam4_burst_pane_ParamLimits

0x9318,	// (0x00092f0c) linegrid_cam4_burst_pane

0x1600,	// (0x0008b1f4) scroll_pane_cp30_ParamLimits

0x1600,	// (0x0008b1f4) scroll_pane_cp30

0x933c,	// (0x00092f30) cell_cam4_burst_pane_ParamLimits

0x933c,	// (0x00092f30) cell_cam4_burst_pane

0x0ebb,	// (0x0008aaaf) linegrid_cam4_burst_pane_g1_ParamLimits

0x0ebb,	// (0x0008aaaf) linegrid_cam4_burst_pane_g1

0x9389,	// (0x00092f7d) linegrid_cam4_burst_pane_g2_ParamLimits

0x9389,	// (0x00092f7d) linegrid_cam4_burst_pane_g2

0x0ec8,	// (0x0008aabc) linegrid_cam4_burst_pane_g3_ParamLimits

0x0ec8,	// (0x0008aabc) linegrid_cam4_burst_pane_g3

0x0002,

0xf9b7,	// (0x000995ab) linegrid_cam4_burst_pane_g_ParamLimits

0xf9b7,	// (0x000995ab) linegrid_cam4_burst_pane_g

0x939a,	// (0x00092f8e) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x939a,	// (0x00092f8e) linegrid_cam4_burst_pane_g3_copy1

0x0ed5,	// (0x0008aac9) linegrid_cam4_burst_pane_g4_ParamLimits

0x0ed5,	// (0x0008aac9) linegrid_cam4_burst_pane_g4

0x93b4,	// (0x00092fa8) linegrid_cam4_burst_pane_g5_ParamLimits

0x93b4,	// (0x00092fa8) linegrid_cam4_burst_pane_g5

0x93c5,	// (0x00092fb9) linegrid_cam4_burst_pane_g6_ParamLimits

0x93c5,	// (0x00092fb9) linegrid_cam4_burst_pane_g6

0x0ee2,	// (0x0008aad6) linegrid_cam4_burst_pane_g7_ParamLimits

0x0ee2,	// (0x0008aad6) linegrid_cam4_burst_pane_g7

0x93dc,	// (0x00092fd0) cell_cam4_burst_pane_g1

0x0efb,	// (0x0008aaef) main_cam5_pane_t1_ParamLimits

0x0efb,	// (0x0008aaef) main_cam5_pane_t1

0x0f0d,	// (0x0008ab01) main_cam5_pane_t2_ParamLimits

0x0f0d,	// (0x0008ab01) main_cam5_pane_t2

0x0f1f,	// (0x0008ab13) main_cam5_pane_t3_ParamLimits

0x0f1f,	// (0x0008ab13) main_cam5_pane_t3

0x0f31,	// (0x0008ab25) main_cam5_pane_t4_ParamLimits

0x0f31,	// (0x0008ab25) main_cam5_pane_t4

0x0f49,	// (0x0008ab3d) main_cam5_pane_t5_ParamLimits

0x0f49,	// (0x0008ab3d) main_cam5_pane_t5

0x0f5d,	// (0x0008ab51) main_cam5_pane_t6_ParamLimits

0x0f5d,	// (0x0008ab51) main_cam5_pane_t6

0x0f71,	// (0x0008ab65) main_cam5_pane_t7_ParamLimits

0x0f71,	// (0x0008ab65) main_cam5_pane_t7

0x0f83,	// (0x0008ab77) main_cam5_pane_t8_ParamLimits

0x0f83,	// (0x0008ab77) main_cam5_pane_t8

0x0f9f,	// (0x0008ab93) main_cam5_pane_t9_ParamLimits

0x0f9f,	// (0x0008ab93) main_cam5_pane_t9

0x0fb1,	// (0x0008aba5) main_cam5_pane_t10_ParamLimits

0x0fb1,	// (0x0008aba5) main_cam5_pane_t10

0x0fc3,	// (0x0008abb7) main_cam5_pane_t11_ParamLimits

0x0fc3,	// (0x0008abb7) main_cam5_pane_t11

0x0fd5,	// (0x0008abc9) main_cam5_pane_t12_ParamLimits

0x0fd5,	// (0x0008abc9) main_cam5_pane_t12

0x0fea,	// (0x0008abde) main_cam5_pane_t13_ParamLimits

0x0fea,	// (0x0008abde) main_cam5_pane_t13

0x000c,

0xf9c3,	// (0x000995b7) main_cam5_pane_t_ParamLimits

0xf9c3,	// (0x000995b7) main_cam5_pane_t

0x347e,	// (0x0008d072) popup_scut_keymap_window_ParamLimits

0x347e,	// (0x0008d072) popup_scut_keymap_window

0x93ef,	// (0x00092fe3) aid_size_cell_brow_shortcut

0x09c4,	// (0x0008a5b8) bg_popup_window_pane_cp010

0x93fb,	// (0x00092fef) grid_scut_pane

0x9407,	// (0x00092ffb) cell_scut_pane_ParamLimits

0x9407,	// (0x00092ffb) cell_scut_pane

0x941e,	// (0x00093012) cell_scut_pane_g1

0x1007,	// (0x0008abfb) cell_scut_pane_t1

0x1016,	// (0x0008ac0a) cell_scut_pane_t2

0x9427,	// (0x0009301b) cell_scut_pane_t3

0x0002,

0xf9de,	// (0x000995d2) cell_scut_pane_t

0x7380,	// (0x00090f74) main_mup3_pane_g8_ParamLimits

0x7380,	// (0x00090f74) main_mup3_pane_g8

0x8646,	// (0x0009223a) area_vitu2_query_pane_ParamLimits

0x8646,	// (0x0009223a) area_vitu2_query_pane

0x9181,	// (0x00092d75) input_focus_pane_cp08

0x1025,	// (0x0008ac19) area_vitu2_query_pane_g1

0x9435,	// (0x00093029) area_vitu2_query_pane_g2

0x0001,

0xf9e5,	// (0x000995d9) area_vitu2_query_pane_g

0x9444,	// (0x00093038) area_vitu2_query_pane_t1_ParamLimits

0x9444,	// (0x00093038) area_vitu2_query_pane_t1

0x9458,	// (0x0009304c) area_vitu2_query_pane_t2_ParamLimits

0x9458,	// (0x0009304c) area_vitu2_query_pane_t2

0x946c,	// (0x00093060) area_vitu2_query_pane_t3_ParamLimits

0x946c,	// (0x00093060) area_vitu2_query_pane_t3

0xe5f8,	// (0x000981ec) area_vitu2_query_pane_t4_ParamLimits

0xe5f8,	// (0x000981ec) area_vitu2_query_pane_t4

0xe620,	// (0x00098214) area_vitu2_query_pane_t5_ParamLimits

0xe620,	// (0x00098214) area_vitu2_query_pane_t5

0xe648,	// (0x0009823c) area_vitu2_query_pane_t6_ParamLimits

0xe648,	// (0x0009823c) area_vitu2_query_pane_t6

0x0006,

0xf9ea,	// (0x000995de) area_vitu2_query_pane_t_ParamLimits

0xf9ea,	// (0x000995de) area_vitu2_query_pane_t

0x9494,	// (0x00093088) bg_button_pane_cp018

0x94a0,	// (0x00093094) bg_button_pane_cp021

0x94ac,	// (0x000930a0) bg_button_pane_cp022

0x94cb,	// (0x000930bf) input_focus_pane_cp09

0x55e4,	// (0x0008f1d8) aid_size_touch_mv_arrow_left

0x560f,	// (0x0008f203) aid_size_touch_mv_arrow_right

0x1496,	// (0x0008b08a) main_cset_slider_pane_g16_ParamLimits

0x1496,	// (0x0008b08a) main_cset_slider_pane_g16

0x14a2,	// (0x0008b096) main_cset_slider_pane_g17_ParamLimits

0x14a2,	// (0x0008b096) main_cset_slider_pane_g17

0x93dc,	// (0x00092fd0) cell_cam4_burst_pane_g1_ParamLimits

0x009f,	// (0x00089c93) compa_mode_pane

0x8eb9,	// (0x00092aad) popup_vtel_slider_window_g3_ParamLimits

0x8eb9,	// (0x00092aad) popup_vtel_slider_window_g3

0x8ed0,	// (0x00092ac4) popup_vtel_slider_window_g4_ParamLimits

0x8ed0,	// (0x00092ac4) popup_vtel_slider_window_g4

0x8ee7,	// (0x00092adb) popup_vtel_slider_window_t1_ParamLimits

0x8ee7,	// (0x00092adb) popup_vtel_slider_window_t1

0xc1f9,	// (0x00095ded) main_cl_pane

0xd180,	// (0x00096d74) popup_imed_adjust2_window_ParamLimits

0x58a6,	// (0x0008f49a) bg_tb_trans_pane_cp05_ParamLimits

0xdbd0,	// (0x000977c4) popup_imed_adjust2_window_g1_ParamLimits

0xdbdf,	// (0x000977d3) popup_imed_adjust2_window_g2_ParamLimits

0xdbdf,	// (0x000977d3) popup_imed_adjust2_window_g2

0xdbeb,	// (0x000977df) popup_imed_adjust2_window_g3_ParamLimits

0xdbeb,	// (0x000977df) popup_imed_adjust2_window_g3

0x0002,

0xf760,	// (0x00099354) popup_imed_adjust2_window_g_ParamLimits

0xf760,	// (0x00099354) popup_imed_adjust2_window_g

0xdbf7,	// (0x000977eb) popup_imed_adjust2_window_t1_ParamLimits

0xdc0f,	// (0x00097803) slider_imed_adjust_pane_ParamLimits

0xdc23,	// (0x00097817) slider_imed_adjust_pane_g1_ParamLimits

0xdc33,	// (0x00097827) slider_imed_adjust_pane_g2_ParamLimits

0xdc43,	// (0x00097837) slider_imed_adjust_pane_g3_ParamLimits

0xdc54,	// (0x00097848) slider_imed_adjust_pane_g4_ParamLimits

0xf767,	// (0x0009935b) slider_imed_adjust_pane_g_ParamLimits

0x83cf,	// (0x00091fc3) aid_touch_area_cam4_ParamLimits

0x83cf,	// (0x00091fc3) aid_touch_area_cam4

0xe253,	// (0x00097e47) battery_pane_cp01

0x849e,	// (0x00092092) main_camera4_pane_g6_ParamLimits

0x849e,	// (0x00092092) main_camera4_pane_g6

0x84c8,	// (0x000920bc) main_camera4_pane_t2_ParamLimits

0x84c8,	// (0x000920bc) main_camera4_pane_t2

0x0001,

0xf869,	// (0x0009945d) main_camera4_pane_t_ParamLimits

0xf869,	// (0x0009945d) main_camera4_pane_t

0x84fd,	// (0x000920f1) aid_touch_area_vid4_ParamLimits

0x84fd,	// (0x000920f1) aid_touch_area_vid4

0x8551,	// (0x00092145) main_video4_pane_g5_ParamLimits

0x8551,	// (0x00092145) main_video4_pane_g5

0x8576,	// (0x0009216a) vid4_progress_pane_ParamLimits

0x8576,	// (0x0009216a) vid4_progress_pane

0xe4db,	// (0x000980cf) main_cset_slider_pane_g18_ParamLimits

0xe4db,	// (0x000980cf) main_cset_slider_pane_g18

0x0eef,	// (0x0008aae3) cell_cam4_burst_pane_g2_ParamLimits

0x0eef,	// (0x0008aae3) cell_cam4_burst_pane_g2

0x0001,

0xf9be,	// (0x000995b2) cell_cam4_burst_pane_g_ParamLimits

0xf9be,	// (0x000995b2) cell_cam4_burst_pane_g

0x0812,	// (0x0008a406) bg_cl_pane_ParamLimits

0x0812,	// (0x0008a406) bg_cl_pane

0x94db,	// (0x000930cf) cl_header_pane_ParamLimits

0x94db,	// (0x000930cf) cl_header_pane

0x94ef,	// (0x000930e3) cl_listscroll_pane_ParamLimits

0x94ef,	// (0x000930e3) cl_listscroll_pane

0x1031,	// (0x0008ac25) bg_cl_pane_g1

0x1039,	// (0x0008ac2d) bg_cl_pane_g2

0x1041,	// (0x0008ac35) bg_cl_pane_g3

0x1049,	// (0x0008ac3d) bg_cl_pane_g4

0x1051,	// (0x0008ac45) bg_cl_pane_g5

0x1059,	// (0x0008ac4d) bg_cl_pane_g6

0x1061,	// (0x0008ac55) bg_cl_pane_g7

0x1069,	// (0x0008ac5d) bg_cl_pane_g8

0x1071,	// (0x0008ac65) bg_cl_pane_g9

0x0008,

0xf9f9,	// (0x000995ed) bg_cl_pane_g

0x94ff,	// (0x000930f3) aid_height_cl_leading_ParamLimits

0x94ff,	// (0x000930f3) aid_height_cl_leading

0x950b,	// (0x000930ff) aid_height_cl_text_ParamLimits

0x950b,	// (0x000930ff) aid_height_cl_text

0x0739,	// (0x0008a32d) bg_cl_header_pane_ParamLimits

0x0739,	// (0x0008a32d) bg_cl_header_pane

0x952a,	// (0x0009311e) cl_header_pane_g1_ParamLimits

0x952a,	// (0x0009311e) cl_header_pane_g1

0x9540,	// (0x00093134) cl_header_pane_t1_ParamLimits

0x9540,	// (0x00093134) cl_header_pane_t1

0x1079,	// (0x0008ac6d) cl_list_pane

0xe4ae,	// (0x000980a2) hc_scroll_pane_cp01

0x0bff,	// (0x0008a7f3) bg_cl_header_pane_g1

0xe394,	// (0x00097f88) bg_cl_header_pane_g2

0x0c1f,	// (0x0008a813) bg_cl_header_pane_g3

0xe3a4,	// (0x00097f98) bg_cl_header_pane_g4

0xe39c,	// (0x00097f90) bg_cl_header_pane_g5

0x0e0a,	// (0x0008a9fe) bg_cl_header_pane_g6

0xe3bc,	// (0x00097fb0) bg_cl_header_pane_g7

0xe3c4,	// (0x00097fb8) bg_cl_header_pane_g8

0xe3b4,	// (0x00097fa8) bg_cl_header_pane_g9

0x0008,

0xfa0c,	// (0x00099600) bg_cl_header_pane_g

0x9559,	// (0x0009314d) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x9559,	// (0x0009314d) hc_cl_list_double_graphic_heading_pane

0x956a,	// (0x0009315e) hc_cl_list_single_graphic_pane_ParamLimits

0x956a,	// (0x0009315e) hc_cl_list_single_graphic_pane

0x9583,	// (0x00093177) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x9583,	// (0x00093177) hc_cl_list_single_graphic_pane_g1

0x958f,	// (0x00093183) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x958f,	// (0x00093183) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfa1f,	// (0x00099613) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfa1f,	// (0x00099613) hc_cl_list_single_graphic_pane_g

0x95a3,	// (0x00093197) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x95a3,	// (0x00093197) hc_cl_list_single_graphic_pane_t1

0x9583,	// (0x00093177) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x9583,	// (0x00093177) hc_cl_list_double_graphic_heading_pane_g1

0x95b8,	// (0x000931ac) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x95b8,	// (0x000931ac) hc_cl_list_double_graphic_heading_pane_g2

0x95cc,	// (0x000931c0) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x95cc,	// (0x000931c0) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfa24,	// (0x00099618) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfa24,	// (0x00099618) hc_cl_list_double_graphic_heading_pane_g

0x95e0,	// (0x000931d4) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x95e0,	// (0x000931d4) hc_cl_list_double_graphic_heading_pane_t1

0x95f5,	// (0x000931e9) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x95f5,	// (0x000931e9) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfa2b,	// (0x0009961f) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfa2b,	// (0x0009961f) hc_cl_list_double_graphic_heading_pane_t

0xefe2,	// (0x00098bd6) vid4_progress_pane_g1

0xeff2,	// (0x00098be6) vid4_progress_pane_g2

0x960a,	// (0x000931fe) vid4_progress_pane_g3

0xf002,	// (0x00098bf6) vid4_progress_pane_g4

0x0004,

0xfa30,	// (0x00099624) vid4_progress_pane_g

0x961c,	// (0x00093210) vid4_progress_pane_t1

0xf01a,	// (0x00098c0e) vid4_progress_pane_t2

0x0002,

0xfa3b,	// (0x0009962f) vid4_progress_pane_t

0x9632,	// (0x00093226) wait_bar_pane_cp07

0xd484,	// (0x00097078) blid_firmament_pane_ParamLimits

0xd4c7,	// (0x000970bb) popup_blid_sat_info2_window_g1

0xd4eb,	// (0x000970df) popup_blid_sat_info2_window_t3

0xd4f9,	// (0x000970ed) popup_blid_sat_info2_window_t4

0xd507,	// (0x000970fb) popup_blid_sat_info2_window_t5

0xd515,	// (0x00097109) popup_blid_sat_info2_window_t6

0xd525,	// (0x00097119) popup_blid_sat_info2_window_t7

0xd533,	// (0x00097127) popup_blid_sat_info2_window_t8

0xd541,	// (0x00097135) popup_blid_sat_info2_window_t9

0xd54f,	// (0x00097143) popup_blid_sat_info2_window_t10

0xd610,	// (0x00097204) aid_firma_cardinal_ParamLimits

0xd624,	// (0x00097218) blid_firmament_pane_t1_ParamLimits

0xd63b,	// (0x0009722f) blid_firmament_pane_t2_ParamLimits

0xd652,	// (0x00097246) blid_firmament_pane_t3_ParamLimits

0xd669,	// (0x0009725d) blid_firmament_pane_t4_ParamLimits

0xf659,	// (0x0009924d) blid_firmament_pane_t_ParamLimits

0xd680,	// (0x00097274) blid_sat_info_pane_ParamLimits

0xc1eb,	// (0x00095ddf) main_cam_set_pane_ParamLimits

0x7b5d,	// (0x00091751) aid_size_cell_colour_35_ParamLimits

0x7b7d,	// (0x00091771) aid_size_cell_colour_112_ParamLimits

0x7b9d,	// (0x00091791) aid_size_cell_effect_ParamLimits

0x58a6,	// (0x0008f49a) bg_tb_trans_pane_cp02_ParamLimits

0x4f09,	// (0x0008eafd) heading_imed_pane_ParamLimits

0x7bbd,	// (0x000917b1) listscroll_imed_pane_ParamLimits

0xc835,	// (0x00096429) popup_call2_audio_first_window_g5_ParamLimits

0xc835,	// (0x00096429) popup_call2_audio_first_window_g5

0x7fe9,	// (0x00091bdd) aid_size_touch_image3_arrow_left_ParamLimits

0x7fe9,	// (0x00091bdd) aid_size_touch_image3_arrow_left

0x8015,	// (0x00091c09) aid_size_touch_image3_arrow_right_ParamLimits

0x8015,	// (0x00091c09) aid_size_touch_image3_arrow_right

0xf02f,	// (0x00098c23) vid4_progress_pane_t3

0x7d60,	// (0x00091954) main_hwr_training_symbol_option_pane_ParamLimits

0x7d60,	// (0x00091954) main_hwr_training_symbol_option_pane

0xde09,	// (0x000979fd) popup_hwr_training_preview_window_ParamLimits

0xde09,	// (0x000979fd) popup_hwr_training_preview_window

0x7d80,	// (0x00091974) hwr_training_navi_pane_g5_ParamLimits

0x7d80,	// (0x00091974) hwr_training_navi_pane_g5

0xe382,	// (0x00097f76) popup_char_count_window

0xc1eb,	// (0x00095ddf) bg_popup_sub_pane_cp20_ParamLimits

0x8ff7,	// (0x00092beb) list_vitu2_match_list_pane_ParamLimits

0x9003,	// (0x00092bf7) vitu2_page_scroll_pane_ParamLimits

0x9003,	// (0x00092bf7) vitu2_page_scroll_pane

0x108b,	// (0x0008ac7f) list_single_hwr_training_symbol_option_pane_ParamLimits

0x108b,	// (0x0008ac7f) list_single_hwr_training_symbol_option_pane

0x109e,	// (0x0008ac92) list_single_hwr_training_symbol_option_pane_g1

0x10a6,	// (0x0008ac9a) list_single_hwr_training_symbol_option_pane_t1

0x10b4,	// (0x0008aca8) bg_button_pane_cp023

0x10bd,	// (0x0008acb1) bg_button_pane_cp024

0x10f0,	// (0x0008ace4) vitu2_page_scroll_pane_g1

0x10f8,	// (0x0008acec) vitu2_page_scroll_pane_g2

0x0001,

0xfa42,	// (0x00099636) vitu2_page_scroll_pane_g

0x1100,	// (0x0008acf4) vitu2_page_scroll_pane_t1

0xc249,	// (0x00095e3d) popup_char_count_window_g1

0x110f,	// (0x0008ad03) popup_char_count_window_g2

0x1118,	// (0x0008ad0c) popup_char_count_window_g3

0x0002,

0xfa47,	// (0x0009963b) popup_char_count_window_g

0x1121,	// (0x0008ad15) popup_char_count_window_t1

0xc1f9,	// (0x00095ded) main_vded2_pane

0xdbbc,	// (0x000977b0) aid_size_cell_imed_line

0xdbc6,	// (0x000977ba) grid_imed_line_width_pane

0xe303,	// (0x00097ef7) vid4_indicators_pane_g4

0x112f,	// (0x0008ad23) cell_imed_line_width_pane_ParamLimits

0x112f,	// (0x0008ad23) cell_imed_line_width_pane

0x1143,	// (0x0008ad37) cell_imed_line_width_pane_g1

0x114c,	// (0x0008ad40) cell_imed_line_width_pane_g2

0x0001,

0xfa4e,	// (0x00099642) cell_imed_line_width_pane_g

0x9657,	// (0x0009324b) main_vded2_pane_g1_ParamLimits

0x9657,	// (0x0009324b) main_vded2_pane_g1

0x966d,	// (0x00093261) main_vded2_pane_g2_ParamLimits

0x966d,	// (0x00093261) main_vded2_pane_g2

0x0001,

0xfa53,	// (0x00099647) main_vded2_pane_g_ParamLimits

0xfa53,	// (0x00099647) main_vded2_pane_g

0x967f,	// (0x00093273) vded2_slider_pane_ParamLimits

0x967f,	// (0x00093273) vded2_slider_pane

0x968f,	// (0x00093283) aid_size_touch_vded2_end

0x9699,	// (0x0009328d) aid_size_touch_vded2_playhead

0x1154,	// (0x0008ad48) aid_size_touch_vded2_start

0x115c,	// (0x0008ad50) vded2_slider_bg_pane

0x1165,	// (0x0008ad59) vded2_slider_pane_g1

0x116e,	// (0x0008ad62) vded2_slider_pane_g2

0x96a3,	// (0x00093297) vded2_slider_pane_g3

0x0002,

0xfa58,	// (0x0009964c) vded2_slider_pane_g

0x1176,	// (0x0008ad6a) vded2_slider_bg_pane_g1

0x117f,	// (0x0008ad73) vded2_slider_bg_pane_g2

0x1188,	// (0x0008ad7c) vded2_slider_bg_pane_g3

0x0002,

0xfa5f,	// (0x00099653) vded2_slider_bg_pane_g

0x5ced,	// (0x0008f8e1) aid_postcard_touch_down_pane_ParamLimits

0x5ced,	// (0x0008f8e1) aid_postcard_touch_down_pane

0x5d03,	// (0x0008f8f7) aid_postcard_touch_up_pane_ParamLimits

0x5d03,	// (0x0008f8f7) aid_postcard_touch_up_pane

0xc1f9,	// (0x00095ded) main_blid2_pane

0xd166,	// (0x00096d5a) popup_blid2_search_window

0x009f,	// (0x00089c93) blid2_gps_pane

0x009f,	// (0x00089c93) blid2_navig_pane

0x009f,	// (0x00089c93) blid2_search_pane

0x009f,	// (0x00089c93) blid2_tripm_pane

0x96ae,	// (0x000932a2) blid2_search_pane_g1_ParamLimits

0x96ae,	// (0x000932a2) blid2_search_pane_g1

0x96c6,	// (0x000932ba) blid2_search_pane_t1_ParamLimits

0x96c6,	// (0x000932ba) blid2_search_pane_t1

0x96d8,	// (0x000932cc) aid_size_cell_blid2_gps_ParamLimits

0x96d8,	// (0x000932cc) aid_size_cell_blid2_gps

0x96f0,	// (0x000932e4) blid2_gps_pane_g1_ParamLimits

0x96f0,	// (0x000932e4) blid2_gps_pane_g1

0x9704,	// (0x000932f8) grid_blid2_satellite_pane_ParamLimits

0x9704,	// (0x000932f8) grid_blid2_satellite_pane

0x971e,	// (0x00093312) blid2_navig_pane_g1_ParamLimits

0x971e,	// (0x00093312) blid2_navig_pane_g1

0x972a,	// (0x0009331e) blid2_navig_pane_t1_ParamLimits

0x972a,	// (0x0009331e) blid2_navig_pane_t1

0x9745,	// (0x00093339) blid2_navig_pane_t2_ParamLimits

0x9745,	// (0x00093339) blid2_navig_pane_t2

0x0001,

0xfa66,	// (0x0009965a) blid2_navig_pane_t_ParamLimits

0xfa66,	// (0x0009965a) blid2_navig_pane_t

0x9760,	// (0x00093354) blid2_navig_ring_pane_ParamLimits

0x9760,	// (0x00093354) blid2_navig_ring_pane

0x9779,	// (0x0009336d) blid2_speed_pane_ParamLimits

0x9779,	// (0x0009336d) blid2_speed_pane

0x9785,	// (0x00093379) blid2_tripm_pane_g1_ParamLimits

0x9785,	// (0x00093379) blid2_tripm_pane_g1

0x97a0,	// (0x00093394) blid2_tripm_pane_g2_ParamLimits

0x97a0,	// (0x00093394) blid2_tripm_pane_g2

0x97b4,	// (0x000933a8) blid2_tripm_pane_g3_ParamLimits

0x97b4,	// (0x000933a8) blid2_tripm_pane_g3

0x97c8,	// (0x000933bc) blid2_tripm_pane_g4_ParamLimits

0x97c8,	// (0x000933bc) blid2_tripm_pane_g4

0x97dc,	// (0x000933d0) blid2_tripm_pane_g5_ParamLimits

0x97dc,	// (0x000933d0) blid2_tripm_pane_g5

0x0005,

0xfa6b,	// (0x0009965f) blid2_tripm_pane_g_ParamLimits

0xfa6b,	// (0x0009965f) blid2_tripm_pane_g

0x9802,	// (0x000933f6) blid2_tripm_pane_t1_ParamLimits

0x9802,	// (0x000933f6) blid2_tripm_pane_t1

0x981d,	// (0x00093411) blid2_tripm_pane_t2_ParamLimits

0x981d,	// (0x00093411) blid2_tripm_pane_t2

0x9836,	// (0x0009342a) blid2_tripm_pane_t3_ParamLimits

0x9836,	// (0x0009342a) blid2_tripm_pane_t3

0x0003,

0xfa78,	// (0x0009966c) blid2_tripm_pane_t_ParamLimits

0xfa78,	// (0x0009966c) blid2_tripm_pane_t

0x987d,	// (0x00093471) cell_blid2_satellite_pane_ParamLimits

0x987d,	// (0x00093471) cell_blid2_satellite_pane

0x989b,	// (0x0009348f) cell_blid2_satellite_pane_g1

0x1191,	// (0x0008ad85) cell_blid2_satellite_pane_t1

0x09fa,	// (0x0008a5ee) blid2_speed_pane_g1

0x119f,	// (0x0008ad93) blid2_speed_pane_t1

0x11ad,	// (0x0008ada1) blid2_speed_pane_t2

0x0001,

0xfa81,	// (0x00099675) blid2_speed_pane_t

0x09fa,	// (0x0008a5ee) blid2_navig_ring_pane_g1

0x98a4,	// (0x00093498) blid2_navig_ring_pane_g2

0x98ac,	// (0x000934a0) blid2_navig_ring_pane_g3

0x98b4,	// (0x000934a8) blid2_navig_ring_pane_g4

0x98bc,	// (0x000934b0) blid2_navig_ring_pane_g5

0x0004,

0xfa86,	// (0x0009967a) blid2_navig_ring_pane_g

0x009f,	// (0x00089c93) bg_popup_window_pane_cp011

0x11bb,	// (0x0008adaf) popup_blid2_search_window_g1

0x11c3,	// (0x0008adb7) popup_blid2_search_window_t1

0x11d1,	// (0x0008adc5) popup_blid2_search_window_t2

0x0001,

0xfa91,	// (0x00099685) popup_blid2_search_window_t

0x0b0e,	// (0x0008a702) main_browser_pane_g1

0x0812,	// (0x0008a406) main_browser_pane_ParamLimits

0xc1eb,	// (0x00095ddf) bg_button_pane_cp011_ParamLimits

0x88a6,	// (0x0009249a) cell_vitu2_function_pane_g1_ParamLimits

0x58a6,	// (0x0008f49a) bg_popup_sub_pane_cp22_ParamLimits

0x9181,	// (0x00092d75) input_focus_pane_cp08_ParamLimits

0x919c,	// (0x00092d90) popup_vitu2_query_button_pane_ParamLimits

0x919c,	// (0x00092d90) popup_vitu2_query_button_pane

0x91ab,	// (0x00092d9f) popup_vitu2_query_input_button_pane

0x0e45,	// (0x0008aa39) popup_vitu2_query_window_g1_ParamLimits

0x91b3,	// (0x00092da7) popup_vitu2_query_window_g2_ParamLimits

0xf992,	// (0x00099586) popup_vitu2_query_window_g_ParamLimits

0x009f,	// (0x00089c93) bg_button_pane_cp026

0x98c4,	// (0x000934b8) popup_vitu2_query_input_button_pane_g1

0x009f,	// (0x00089c93) bg_button_pane_cp025

0x11df,	// (0x0008add3) popup_vitu2_query_button_pane_t1

0x704e,	// (0x00090c42) main_mp3_pane_t6

0x705c,	// (0x00090c50) popup_slider_window_cp01

0xe26f,	// (0x00097e63) cam4_battery_pane

0xe2c2,	// (0x00097eb6) cam4_battery_pane_cp02

0xefda,	// (0x00098bce) cam4_battery_pane_cp01

0xefda,	// (0x00098bce) cam4_battery_pane_cp03

0x0db1,	// (0x0008a9a5) cam4_battery_pane_g1

0x09fa,	// (0x0008a5ee) cam4_battery_pane_g2

0x0001,

0xfa96,	// (0x0009968a) cam4_battery_pane_g

0xd55d,	// (0x00097151) popup_blid_sat_info2_window_t11

0x55e4,	// (0x0008f1d8) aid_size_touch_mv_arrow_left_ParamLimits

0x560f,	// (0x0008f203) aid_size_touch_mv_arrow_right_ParamLimits

0x566d,	// (0x0008f261) navi_pane_g1_ParamLimits

0x5679,	// (0x0008f26d) navi_pane_g2_ParamLimits

0x56a7,	// (0x0008f29b) navi_pane_g3_ParamLimits

0xf35a,	// (0x00098f4e) navi_pane_g_ParamLimits

0x5765,	// (0x0008f359) navi_pane_mv_t1_ParamLimits

0x7bc9,	// (0x000917bd) grid_imed_effect_pane_ParamLimits

0x409c,	// (0x0008dc90) aid_placing_vt_slider_lsc

0x0a5d,	// (0x0008a651) aid_placing_vt_slider_prt

0x0739,	// (0x0008a32d) bg_tb_trans_pane_cp01_ParamLimits

0xd7fb,	// (0x000973ef) popup_image_details_window_g1_ParamLimits

0xd80e,	// (0x00097402) popup_image_details_window_g2_ParamLimits

0xd823,	// (0x00097417) popup_image_details_window_g3_ParamLimits

0xd823,	// (0x00097417) popup_image_details_window_g3

0xf699,	// (0x0009928d) popup_image_details_window_g_ParamLimits

0xd837,	// (0x0009742b) popup_image_details_window_t1_ParamLimits

0xd849,	// (0x0009743d) popup_image_details_window_t2_ParamLimits

0xd862,	// (0x00097456) popup_image_details_window_t3_ParamLimits

0xd876,	// (0x0009746a) popup_image_details_window_t4_ParamLimits

0xd891,	// (0x00097485) popup_image_details_window_t5_ParamLimits

0xf6a0,	// (0x00099294) popup_image_details_window_t_ParamLimits

0x9517,	// (0x0009310b) cl_header_name_pane_ParamLimits

0x9517,	// (0x0009310b) cl_header_name_pane

0x98cc,	// (0x000934c0) cl_header_name_pane_t1_ParamLimits

0x98cc,	// (0x000934c0) cl_header_name_pane_t1

0x98ed,	// (0x000934e1) cl_header_name_pane_t2_ParamLimits

0x98ed,	// (0x000934e1) cl_header_name_pane_t2

0x992f,	// (0x00093523) cl_header_name_pane_t3_ParamLimits

0x992f,	// (0x00093523) cl_header_name_pane_t3

0x0002,

0xfa9b,	// (0x0009968f) cl_header_name_pane_t_ParamLimits

0xfa9b,	// (0x0009968f) cl_header_name_pane_t

0x5736,	// (0x0008f32a) navi_pane_mv_g2_ParamLimits

0xe34d,	// (0x00097f41) field_vitu2_entry_pane_g1_ParamLimits

0xe359,	// (0x00097f4d) field_vitu2_entry_pane_g2_ParamLimits

0xc35f,	// (0x00095f53) field_vitu2_entry_pane_g3_ParamLimits

0xc35f,	// (0x00095f53) field_vitu2_entry_pane_g3

0xf89b,	// (0x0009948f) field_vitu2_entry_pane_g_ParamLimits

0x8822,	// (0x00092416) cell_vitu2_itu_pane_g1_ParamLimits

0x883a,	// (0x0009242e) cell_vitu2_itu_pane_g2_ParamLimits

0x883a,	// (0x0009242e) cell_vitu2_itu_pane_g2

0x0001,

0xf8a7,	// (0x0009949b) cell_vitu2_itu_pane_g_ParamLimits

0xf8a7,	// (0x0009949b) cell_vitu2_itu_pane_g

0xc1eb,	// (0x00095ddf) bg_vkb2_func_pane_cp05_ParamLimits

0xc1eb,	// (0x00095ddf) bg_vkb2_func_pane_cp05

0xc1eb,	// (0x00095ddf) bg_vkb2_func_pane_cp03

0xc1eb,	// (0x00095ddf) bg_vkb2_func_pane_cp04

0xc1eb,	// (0x00095ddf) bg_vkb2_func_pane_cp10_ParamLimits

0xc1eb,	// (0x00095ddf) bg_vkb2_func_pane_cp10

0x94bb,	// (0x000930af) bg_vkb2_func_pane_cp08

0x9494,	// (0x00093088) bg_vkb2_func_pane_cp06

0x94a0,	// (0x00093094) bg_vkb2_func_pane_cp07

0x10c6,	// (0x0008acba) bg_vkb2_func_pane_cp11_ParamLimits

0x10c6,	// (0x0008acba) bg_vkb2_func_pane_cp11

0x10db,	// (0x0008accf) bg_vkb2_func_pane_cp12_ParamLimits

0x10db,	// (0x0008accf) bg_vkb2_func_pane_cp12

0x009f,	// (0x00089c93) bg_vkb2_func_pane_cp09

0xe394,	// (0x00097f88) bg_vkb2_func_pane_g1

0x0c1f,	// (0x0008a813) bg_vkb2_func_pane_g2

0xe39c,	// (0x00097f90) bg_vkb2_func_pane_g3

0xe3a4,	// (0x00097f98) bg_vkb2_func_pane_g4

0x0e0a,	// (0x0008a9fe) bg_vkb2_func_pane_g5

0xe3bc,	// (0x00097fb0) bg_vkb2_func_pane_g6

0xe3c4,	// (0x00097fb8) bg_vkb2_func_pane_g7

0xe3b4,	// (0x00097fa8) bg_vkb2_func_pane_g8

0x0bff,	// (0x0008a7f3) bg_vkb2_func_pane_g9

0x0008,

0xfaa2,	// (0x00099696) bg_vkb2_func_pane_g

0x97f0,	// (0x000933e4) blid2_tripm_pane_g6_ParamLimits

0x97f0,	// (0x000933e4) blid2_tripm_pane_g6

0xe140,	// (0x00097d34) mp4_progress_pane_g1

0x9869,	// (0x0009345d) blid2_tripm_values_pane_ParamLimits

0x9869,	// (0x0009345d) blid2_tripm_values_pane

0x9960,	// (0x00093554) blid2_tripm_values_pane_t1

0x996e,	// (0x00093562) blid2_tripm_values_pane_t2

0x997c,	// (0x00093570) blid2_tripm_values_pane_t3

0x998a,	// (0x0009357e) blid2_tripm_values_pane_t4

0x9998,	// (0x0009358c) blid2_tripm_values_pane_t5

0x99a6,	// (0x0009359a) blid2_tripm_values_pane_t6

0x99b4,	// (0x000935a8) blid2_tripm_values_pane_t7

0x99c2,	// (0x000935b6) blid2_tripm_values_pane_t8

0x99d0,	// (0x000935c4) blid2_tripm_values_pane_t9

0x0008,

0xfab5,	// (0x000996a9) blid2_tripm_values_pane_t

0x40de,	// (0x0008dcd2) call_video_pane_t1_ParamLimits

0x40fc,	// (0x0008dcf0) call_video_pane_t2_ParamLimits

0xf208,	// (0x00098dfc) call_video_pane_t_ParamLimits

0x5bc7,	// (0x0008f7bb) msg_header_pane_g1_ParamLimits

0x5bd5,	// (0x0008f7c9) msg_header_pane_g2_ParamLimits

0x5bd5,	// (0x0008f7c9) msg_header_pane_g2

0x0001,

0xf3fd,	// (0x00098ff1) msg_header_pane_g_ParamLimits

0xf3fd,	// (0x00098ff1) msg_header_pane_g

0x0812,	// (0x0008a406) main_clock2_pane_ParamLimits

0x78ca,	// (0x000914be) grid_clock2_toolbar_pane_ParamLimits

0x78ca,	// (0x000914be) grid_clock2_toolbar_pane

0x78ca,	// (0x000914be) listscroll_clock2_pane_ParamLimits

0x78ca,	// (0x000914be) listscroll_clock2_pane

0x79ae,	// (0x000915a2) main_clock2_pane_t3_ParamLimits

0x79ae,	// (0x000915a2) main_clock2_pane_t3

0x79d2,	// (0x000915c6) main_clock2_pane_t4_ParamLimits

0x79d2,	// (0x000915c6) main_clock2_pane_t4

0x11ed,	// (0x0008ade1) cell_clock2_toolbar_pane

0x11f5,	// (0x0008ade9) cell_clock2_toolbar_pane_cp01

0x11f5,	// (0x0008ade9) cell_clock2_toolbar_pane_cp02

0x11fd,	// (0x0008adf1) cell_clock2_toolbar_pane_cp03

0x1205,	// (0x0008adf9) list_clock2_pane

0x5390,	// (0x0008ef84) scroll_pane_cp10

0x120d,	// (0x0008ae01) list_single_clock2_pane_ParamLimits

0x120d,	// (0x0008ae01) list_single_clock2_pane

0x09c4,	// (0x0008a5b8) list_highlight_pane_cp08

0x121a,	// (0x0008ae0e) list_single_clock2_pane_t1

0x1228,	// (0x0008ae1c) list_single_clock2_pane_t2

0x0001,

0xfac8,	// (0x000996bc) list_single_clock2_pane_t

0x009f,	// (0x00089c93) bg_button_pane_cp10

0x1236,	// (0x0008ae2a) cell_clock2_toolbar_pane_g1

0x5c6b,	// (0x0008f85f) aid_main_viewer_pane_g1_ParamLimits

0x5c6b,	// (0x0008f85f) aid_main_viewer_pane_g1

0x5c79,	// (0x0008f86d) aid_main_viewer_pane_g2_ParamLimits

0x5c79,	// (0x0008f86d) aid_main_viewer_pane_g2

0x5c87,	// (0x0008f87b) aid_main_viewer_pane_g3_ParamLimits

0x5c87,	// (0x0008f87b) aid_main_viewer_pane_g3

0x5c96,	// (0x0008f88a) aid_main_viewer_pane_g4_ParamLimits

0x5c96,	// (0x0008f88a) aid_main_viewer_pane_g4

0x0003,

0xf40e,	// (0x00099002) aid_main_viewer_pane_g_ParamLimits

0xf40e,	// (0x00099002) aid_main_viewer_pane_g

0x6a11,	// (0x00090605) main_calc_pane_ParamLimits

0x6a37,	// (0x0009062b) main_dialer2_pane_ParamLimits

0xc1f9,	// (0x00095ded) main_cam6_pane

0xc1f9,	// (0x00095ded) main_vid6_pane

0x78d6,	// (0x000914ca) listscroll_gen_pane_cp06_ParamLimits

0x78d6,	// (0x000914ca) listscroll_gen_pane_cp06

0x79f5,	// (0x000915e9) main_clock2_pane_t5_ParamLimits

0x79f5,	// (0x000915e9) main_clock2_pane_t5

0x7a53,	// (0x00091647) aid_call2_pane_cp10_ParamLimits

0x7a65,	// (0x00091659) aid_call_pane_cp10_ParamLimits

0x5573,	// (0x0008f167) popup_clock_analogue_window_cp10_g1_ParamLimits

0x5573,	// (0x0008f167) popup_clock_analogue_window_cp10_g2_ParamLimits

0x7a77,	// (0x0009166b) popup_clock_analogue_window_cp10_g3_ParamLimits

0x7a77,	// (0x0009166b) popup_clock_analogue_window_cp10_g4_ParamLimits

0x5573,	// (0x0008f167) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf755,	// (0x00099349) popup_clock_analogue_window_cp10_g_ParamLimits

0x7a8d,	// (0x00091681) popup_clock_analogue_window_cp10_t1_ParamLimits

0x7f96,	// (0x00091b8a) cell_dialer2_keypad_pane_g2_ParamLimits

0x7f96,	// (0x00091b8a) cell_dialer2_keypad_pane_g2

0x0001,

0xf83a,	// (0x0009942e) cell_dialer2_keypad_pane_g_ParamLimits

0xf83a,	// (0x0009942e) cell_dialer2_keypad_pane_g

0x7fb2,	// (0x00091ba6) cell_dialer2_keypad_pane_t1

0x8bc5,	// (0x000927b9) main_cset_text2_pane_ParamLimits

0x8bc5,	// (0x000927b9) main_cset_text2_pane

0x1025,	// (0x0008ac19) area_vitu2_query_pane_g1_ParamLimits

0x9435,	// (0x00093029) area_vitu2_query_pane_g2_ParamLimits

0xf9e5,	// (0x000995d9) area_vitu2_query_pane_g_ParamLimits

0xe670,	// (0x00098264) area_vitu2_query_pane_t7_ParamLimits

0xe670,	// (0x00098264) area_vitu2_query_pane_t7

0x9494,	// (0x00093088) bg_button_pane_cp018_ParamLimits

0x94a0,	// (0x00093094) bg_button_pane_cp021_ParamLimits

0x94ac,	// (0x000930a0) bg_button_pane_cp022_ParamLimits

0x94bb,	// (0x000930af) bg_vkb2_func_pane_cp08_ParamLimits

0x9494,	// (0x00093088) bg_vkb2_func_pane_cp06_ParamLimits

0x94a0,	// (0x00093094) bg_vkb2_func_pane_cp07_ParamLimits

0x94cb,	// (0x000930bf) input_focus_pane_cp09_ParamLimits

0xf045,	// (0x00098c39) cam6_autofocus_pane_ParamLimits

0xf045,	// (0x00098c39) cam6_autofocus_pane

0x99de,	// (0x000935d2) cam6_image_uncrop_pane_ParamLimits

0x99de,	// (0x000935d2) cam6_image_uncrop_pane

0x99ed,	// (0x000935e1) cam6_indi_pane_ParamLimits

0x99ed,	// (0x000935e1) cam6_indi_pane

0x9a03,	// (0x000935f7) cam6_mode_pane_ParamLimits

0x9a03,	// (0x000935f7) cam6_mode_pane

0x9a15,	// (0x00093609) cam6_timer_pane_ParamLimits

0x9a15,	// (0x00093609) cam6_timer_pane

0x9a25,	// (0x00093619) cam6_zoom_pane_ParamLimits

0x9a25,	// (0x00093619) cam6_zoom_pane

0x9a31,	// (0x00093625) cam6_mode_pane_g1_ParamLimits

0x9a31,	// (0x00093625) cam6_mode_pane_g1

0x9a41,	// (0x00093635) cam6_mode_pane_g2_ParamLimits

0x9a41,	// (0x00093635) cam6_mode_pane_g2

0x9a51,	// (0x00093645) cam6_mode_pane_g3_ParamLimits

0x9a51,	// (0x00093645) cam6_mode_pane_g3

0x9a61,	// (0x00093655) cam6_mode_pane_g4_ParamLimits

0x9a61,	// (0x00093655) cam6_mode_pane_g4

0x0003,

0xfacd,	// (0x000996c1) cam6_mode_pane_g_ParamLimits

0xfacd,	// (0x000996c1) cam6_mode_pane_g

0xe6ad,	// (0x000982a1) bg_tb_trans_pane_cp08_ParamLimits

0xe6ad,	// (0x000982a1) bg_tb_trans_pane_cp08

0x123e,	// (0x0008ae32) cam6_battery_pane_ParamLimits

0x123e,	// (0x0008ae32) cam6_battery_pane

0x1254,	// (0x0008ae48) cam6_indi_pane_g1_ParamLimits

0x1254,	// (0x0008ae48) cam6_indi_pane_g1

0x1266,	// (0x0008ae5a) cam6_indi_pane_g2_ParamLimits

0x1266,	// (0x0008ae5a) cam6_indi_pane_g2

0x1278,	// (0x0008ae6c) cam6_indi_pane_g3_ParamLimits

0x1278,	// (0x0008ae6c) cam6_indi_pane_g3

0x0002,

0xfad6,	// (0x000996ca) cam6_indi_pane_g_ParamLimits

0xfad6,	// (0x000996ca) cam6_indi_pane_g

0x128a,	// (0x0008ae7e) cam6_indi_pane_t1_ParamLimits

0x128a,	// (0x0008ae7e) cam6_indi_pane_t1

0x9a71,	// (0x00093665) cam6_autofocus_pane_g1

0x9a79,	// (0x0009366d) cam6_autofocus_pane_g2

0x9a81,	// (0x00093675) cam6_autofocus_pane_g3

0x9a89,	// (0x0009367d) cam6_autofocus_pane_g4

0x0003,

0xfadd,	// (0x000996d1) cam6_autofocus_pane_g

0x12b0,	// (0x0008aea4) cam6_timer_pane_g1

0x12b8,	// (0x0008aeac) cam6_timer_pane_t1

0x12c6,	// (0x0008aeba) cam6_zoom_cont_pane

0x12ce,	// (0x0008aec2) cam6_zoom_pane_g1

0x12d6,	// (0x0008aeca) cam6_zoom_pane_g2

0x9a91,	// (0x00093685) cam6_zoom_pane_g3

0x0002,

0xfae6,	// (0x000996da) cam6_zoom_pane_g

0x09fa,	// (0x0008a5ee) cam6_battery_pane_g1

0x09fa,	// (0x0008a5ee) cam6_battery_pane_g2

0x0001,

0xf3be,	// (0x00098fb2) cam6_battery_pane_g

0x12de,	// (0x0008aed2) cam6_zoom_cont_pane_g1

0x12e7,	// (0x0008aedb) cam6_zoom_cont_pane_g2

0x12f0,	// (0x0008aee4) cam6_zoom_cont_pane_g3

0x0002,

0xfaed,	// (0x000996e1) cam6_zoom_cont_pane_g

0x9aae,	// (0x000936a2) cam6_mode_pane_cp_ParamLimits

0x9aae,	// (0x000936a2) cam6_mode_pane_cp

0x9ac0,	// (0x000936b4) cam6_zoom_pane_cp_ParamLimits

0x9ac0,	// (0x000936b4) cam6_zoom_pane_cp

0x9acc,	// (0x000936c0) vid6_image_uncrop_cif_pane_ParamLimits

0x9acc,	// (0x000936c0) vid6_image_uncrop_cif_pane

0x9adc,	// (0x000936d0) vid6_image_uncrop_nhd_pane_ParamLimits

0x9adc,	// (0x000936d0) vid6_image_uncrop_nhd_pane

0x9aeb,	// (0x000936df) vid6_image_uncrop_vga_pane_ParamLimits

0x9aeb,	// (0x000936df) vid6_image_uncrop_vga_pane

0x9afa,	// (0x000936ee) vid6_image_uncrop_wvga_pane_ParamLimits

0x9afa,	// (0x000936ee) vid6_image_uncrop_wvga_pane

0x9b09,	// (0x000936fd) vid6_indi_pane_ParamLimits

0x9b09,	// (0x000936fd) vid6_indi_pane

0xe6ad,	// (0x000982a1) bg_tb_trans_pane_cp09_ParamLimits

0xe6ad,	// (0x000982a1) bg_tb_trans_pane_cp09

0x1308,	// (0x0008aefc) cam6_battery_pane_cp_ParamLimits

0x1308,	// (0x0008aefc) cam6_battery_pane_cp

0x1314,	// (0x0008af08) vid6_indi_pane_g1_ParamLimits

0x1314,	// (0x0008af08) vid6_indi_pane_g1

0x1326,	// (0x0008af1a) vid6_indi_pane_g2_ParamLimits

0x1326,	// (0x0008af1a) vid6_indi_pane_g2

0x1338,	// (0x0008af2c) vid6_indi_pane_g3_ParamLimits

0x1338,	// (0x0008af2c) vid6_indi_pane_g3

0x134d,	// (0x0008af41) vid6_indi_pane_g4_ParamLimits

0x134d,	// (0x0008af41) vid6_indi_pane_g4

0x1362,	// (0x0008af56) vid6_indi_pane_g5_ParamLimits

0x1362,	// (0x0008af56) vid6_indi_pane_g5

0x0004,

0xfaf4,	// (0x000996e8) vid6_indi_pane_g_ParamLimits

0xfaf4,	// (0x000996e8) vid6_indi_pane_g

0x137c,	// (0x0008af70) vid6_indi_pane_t1_ParamLimits

0x137c,	// (0x0008af70) vid6_indi_pane_t1

0x1392,	// (0x0008af86) vid6_indi_pane_t2_ParamLimits

0x1392,	// (0x0008af86) vid6_indi_pane_t2

0x13ba,	// (0x0008afae) vid6_indi_pane_t3_ParamLimits

0x13ba,	// (0x0008afae) vid6_indi_pane_t3

0x13e2,	// (0x0008afd6) vid6_indi_pane_t4_ParamLimits

0x13e2,	// (0x0008afd6) vid6_indi_pane_t4

0x0003,

0xfaff,	// (0x000996f3) vid6_indi_pane_t_ParamLimits

0xfaff,	// (0x000996f3) vid6_indi_pane_t

0x1406,	// (0x0008affa) wait_bar_pane_cp08

0x9b21,	// (0x00093715) main_cset_text2_pane_t1_ParamLimits

0x9b21,	// (0x00093715) main_cset_text2_pane_t1

0x9a99,	// (0x0009368d) listscroll_gen_pane_cp06_t1_ParamLimits

0x9a99,	// (0x0009368d) listscroll_gen_pane_cp06_t1

0xc1f9,	// (0x00095ded) main_cam6_set_pane

0x0dbb,	// (0x0008a9af) bg_tb_trans_pane_cp06_ParamLimits

0xe277,	// (0x00097e6b) cam4_indicators_pane_g1_ParamLimits

0xe288,	// (0x00097e7c) cam4_indicators_pane_g2_ParamLimits

0xf877,	// (0x0009946b) cam4_indicators_pane_g_ParamLimits

0xe2a0,	// (0x00097e94) cam4_indicators_pane_t1_ParamLimits

0xc1eb,	// (0x00095ddf) bg_tb_trans_pane_cp07_ParamLimits

0xe2ca,	// (0x00097ebe) vid4_indicators_pane_g1_ParamLimits

0xe2de,	// (0x00097ed2) vid4_indicators_pane_g2_ParamLimits

0xe2f2,	// (0x00097ee6) vid4_indicators_pane_g3_ParamLimits

0xe303,	// (0x00097ef7) vid4_indicators_pane_g4_ParamLimits

0xf889,	// (0x0009947d) vid4_indicators_pane_g_ParamLimits

0xe31f,	// (0x00097f13) vid4_indicators_pane_t1_ParamLimits

0xefe2,	// (0x00098bd6) vid4_progress_pane_g1_ParamLimits

0xeff2,	// (0x00098be6) vid4_progress_pane_g2_ParamLimits

0x960a,	// (0x000931fe) vid4_progress_pane_g3_ParamLimits

0xf002,	// (0x00098bf6) vid4_progress_pane_g4_ParamLimits

0xfa30,	// (0x00099624) vid4_progress_pane_g_ParamLimits

0x961c,	// (0x00093210) vid4_progress_pane_t1_ParamLimits

0xf01a,	// (0x00098c0e) vid4_progress_pane_t2_ParamLimits

0xf02f,	// (0x00098c23) vid4_progress_pane_t3_ParamLimits

0xfa3b,	// (0x0009962f) vid4_progress_pane_t_ParamLimits

0x9632,	// (0x00093226) wait_bar_pane_cp07_ParamLimits

0x9b3f,	// (0x00093733) main_cam6_set_pane_g2_ParamLimits

0x9b3f,	// (0x00093733) main_cam6_set_pane_g2

0x9b63,	// (0x00093757) main_cset6_listscroll_pane_ParamLimits

0x9b63,	// (0x00093757) main_cset6_listscroll_pane

0x9b7f,	// (0x00093773) main_cset6_slider_pane_ParamLimits

0x9b7f,	// (0x00093773) main_cset6_slider_pane

0x9b95,	// (0x00093789) main_cset6_text2_pane_ParamLimits

0x9b95,	// (0x00093789) main_cset6_text2_pane

0x1415,	// (0x0008b009) main_cset6_text_pane

0x141d,	// (0x0008b011) main_cset_list_pane_copy1_ParamLimits

0x141d,	// (0x0008b011) main_cset_list_pane_copy1

0x142d,	// (0x0008b021) scroll_pane_cp028_copy1

0x9ba3,	// (0x00093797) cset_list_set_pane_copy1

0x9bb5,	// (0x000937a9) aid_position_infowindow_above_copy1

0x9bbd,	// (0x000937b1) aid_position_infowindow_below_copy1

0xe6bb,	// (0x000982af) cset_list_set_pane_g1_copy1

0xe6c3,	// (0x000982b7) cset_list_set_pane_g3_copy1_ParamLimits

0xe6c3,	// (0x000982b7) cset_list_set_pane_g3_copy1

0xe6d2,	// (0x000982c6) cset_list_set_pane_t1_copy1_ParamLimits

0xe6d2,	// (0x000982c6) cset_list_set_pane_t1_copy1

0x0739,	// (0x0008a32d) list_highlight_pane_cp021_copy1_ParamLimits

0x0739,	// (0x0008a32d) list_highlight_pane_cp021_copy1

0x1436,	// (0x0008b02a) cset6_slider_pane_ParamLimits

0x1436,	// (0x0008b02a) cset6_slider_pane

0x1462,	// (0x0008b056) main_cset6_slider_pane_g1_ParamLimits

0x1462,	// (0x0008b056) main_cset6_slider_pane_g1

0x9bc5,	// (0x000937b9) main_cset6_slider_pane_g2_ParamLimits

0x9bc5,	// (0x000937b9) main_cset6_slider_pane_g2

0x148a,	// (0x0008b07e) main_cset6_slider_pane_g3_ParamLimits

0x148a,	// (0x0008b07e) main_cset6_slider_pane_g3

0x9bed,	// (0x000937e1) main_cset6_slider_pane_g4_ParamLimits

0x9bed,	// (0x000937e1) main_cset6_slider_pane_g4

0x14ae,	// (0x0008b0a2) main_cset6_slider_pane_g5_ParamLimits

0x14ae,	// (0x0008b0a2) main_cset6_slider_pane_g5

0xe4c3,	// (0x000980b7) main_cset6_slider_pane_g7_ParamLimits

0xe4c3,	// (0x000980b7) main_cset6_slider_pane_g7

0xe4cf,	// (0x000980c3) main_cset6_slider_pane_g8_ParamLimits

0xe4cf,	// (0x000980c3) main_cset6_slider_pane_g8

0x8c6b,	// (0x0009285f) main_cset6_slider_pane_g9_ParamLimits

0x8c6b,	// (0x0009285f) main_cset6_slider_pane_g9

0x8c77,	// (0x0009286b) main_cset6_slider_pane_g10_ParamLimits

0x8c77,	// (0x0009286b) main_cset6_slider_pane_g10

0x8c83,	// (0x00092877) main_cset6_slider_pane_g11_ParamLimits

0x8c83,	// (0x00092877) main_cset6_slider_pane_g11

0x8c8f,	// (0x00092883) main_cset6_slider_pane_g12_ParamLimits

0x8c8f,	// (0x00092883) main_cset6_slider_pane_g12

0x8c9b,	// (0x0009288f) main_cset6_slider_pane_g13_ParamLimits

0x8c9b,	// (0x0009288f) main_cset6_slider_pane_g13

0x8ca7,	// (0x0009289b) main_cset6_slider_pane_g14_ParamLimits

0x8ca7,	// (0x0009289b) main_cset6_slider_pane_g14

0x9bf9,	// (0x000937ed) main_cset6_slider_pane_g15_ParamLimits

0x9bf9,	// (0x000937ed) main_cset6_slider_pane_g15

0x1496,	// (0x0008b08a) main_cset6_slider_pane_g16_ParamLimits

0x1496,	// (0x0008b08a) main_cset6_slider_pane_g16

0x14a2,	// (0x0008b096) main_cset6_slider_pane_g17_ParamLimits

0x14a2,	// (0x0008b096) main_cset6_slider_pane_g17

0x0011,

0xfb08,	// (0x000996fc) main_cset6_slider_pane_g_ParamLimits

0xfb08,	// (0x000996fc) main_cset6_slider_pane_g

0x14ba,	// (0x0008b0ae) main_cset6_slider_pane_t1_ParamLimits

0x14ba,	// (0x0008b0ae) main_cset6_slider_pane_t1

0x9c29,	// (0x0009381d) main_cset6_slider_pane_t2_ParamLimits

0x9c29,	// (0x0009381d) main_cset6_slider_pane_t2

0x9c54,	// (0x00093848) main_cset6_slider_pane_t3_ParamLimits

0x9c54,	// (0x00093848) main_cset6_slider_pane_t3

0x9c7f,	// (0x00093873) main_cset6_slider_pane_t4_ParamLimits

0x9c7f,	// (0x00093873) main_cset6_slider_pane_t4

0x9caa,	// (0x0009389e) main_cset6_slider_pane_t5_ParamLimits

0x9caa,	// (0x0009389e) main_cset6_slider_pane_t5

0x14fb,	// (0x0008b0ef) main_cset6_slider_pane_t7_ParamLimits

0x14fb,	// (0x0008b0ef) main_cset6_slider_pane_t7

0x9cd5,	// (0x000938c9) main_cset6_slider_pane_t8_ParamLimits

0x9cd5,	// (0x000938c9) main_cset6_slider_pane_t8

0x9cf9,	// (0x000938ed) main_cset6_slider_pane_t9_ParamLimits

0x9cf9,	// (0x000938ed) main_cset6_slider_pane_t9

0x9d1d,	// (0x00093911) main_cset6_slider_pane_t10_ParamLimits

0x9d1d,	// (0x00093911) main_cset6_slider_pane_t10

0x9d41,	// (0x00093935) main_cset6_slider_pane_t11_ParamLimits

0x9d41,	// (0x00093935) main_cset6_slider_pane_t11

0x1531,	// (0x0008b125) main_cset6_slider_pane_t14_ParamLimits

0x1531,	// (0x0008b125) main_cset6_slider_pane_t14

0x156a,	// (0x0008b15e) main_cset6_slider_pane_t15_ParamLimits

0x156a,	// (0x0008b15e) main_cset6_slider_pane_t15

0x000b,

0xfb2d,	// (0x00099721) main_cset6_slider_pane_t_ParamLimits

0xfb2d,	// (0x00099721) main_cset6_slider_pane_t

0xddde,	// (0x000979d2) cset_slider_pane_g1_copy1

0x15a3,	// (0x0008b197) cset_slider_pane_g2_copy1

0x15ac,	// (0x0008b1a0) cset_slider_pane_g3_copy1

0x009f,	// (0x00089c93) bg_popup_sub_pane_cp011_copy1

0x15be,	// (0x0008b1b2) main_cset_text_pane_g1_copy1

0x0e59,	// (0x0008aa4d) main_cset_text_pane_t1_copy1

0x0e67,	// (0x0008aa5b) main_cset_text_pane_t2_copy1

0x0e75,	// (0x0008aa69) main_cset_text_pane_t3_copy1

0x0e83,	// (0x0008aa77) main_cset_text_pane_t4_copy1

0x0e91,	// (0x0008aa85) main_cset_text_pane_t5_copy1

0x15c6,	// (0x0008b1ba) main_cset_text_pane_t6_copy1

0x15d4,	// (0x0008b1c8) main_cset_text_pane_t7_copy1

0x9b21,	// (0x00093715) main_cset_text2_pane_t1_copy1

0xc1eb,	// (0x00095ddf) main_ncimui_pane

0x6c7b,	// (0x0009086f) popup_query_ncimui_window_ParamLimits

0x6c7b,	// (0x0009086f) popup_query_ncimui_window

0xd96e,	// (0x00097562) field_cale_ev2_pane_g4_ParamLimits

0xd96e,	// (0x00097562) field_cale_ev2_pane_g4

0x7e75,	// (0x00091a69) cell_video_dialer_keypad_pane_g2_ParamLimits

0x7e75,	// (0x00091a69) cell_video_dialer_keypad_pane_g2

0x0001,

0xf811,	// (0x00099405) cell_video_dialer_keypad_pane_g_ParamLimits

0xf811,	// (0x00099405) cell_video_dialer_keypad_pane_g

0x7e8d,	// (0x00091a81) cell_video_dialer_keypad_pane_t1

0x009f,	// (0x00089c93) bg_popup_window_pane_cp012

0xd0c2,	// (0x00096cb6) heading_pane_cp06

0x160c,	// (0x0008b200) ncim_query_content_pane

0x009f,	// (0x00089c93) bg_popup_heading_pane_cp01

0x1614,	// (0x0008b208) ncim_heading_pane_t1

0x1622,	// (0x0008b216) ncim_indicator_popup_pane

0x1634,	// (0x0008b228) ncim_query_button_pane

0x1648,	// (0x0008b23c) ncim_query_content_pane_t1

0x165a,	// (0x0008b24e) ncim_query_content_pane_t2

0x0005,

0xfb71,	// (0x00099765) ncim_query_content_pane_t

0x1694,	// (0x0008b288) ncim_query_list_pane

0x16a6,	// (0x0008b29a) ncim_query_popup_pane

0x1622,	// (0x0008b216) ncim_indicator_popup_pane_ParamLimits

0x9eab,	// (0x00093a9f) ncim_query_content_pane_g1_ParamLimits

0x9eab,	// (0x00093a9f) ncim_query_content_pane_g1

0x1648,	// (0x0008b23c) ncim_query_content_pane_t1_ParamLimits

0x165a,	// (0x0008b24e) ncim_query_content_pane_t2_ParamLimits

0x9eb7,	// (0x00093aab) ncim_query_content_pane_t3_ParamLimits

0x9eb7,	// (0x00093aab) ncim_query_content_pane_t3

0x9edf,	// (0x00093ad3) ncim_query_content_pane_t4_ParamLimits

0x9edf,	// (0x00093ad3) ncim_query_content_pane_t4

0x9f07,	// (0x00093afb) ncim_query_content_pane_t5_ParamLimits

0x9f07,	// (0x00093afb) ncim_query_content_pane_t5

0x166c,	// (0x0008b260) ncim_query_content_pane_t6_ParamLimits

0x166c,	// (0x0008b260) ncim_query_content_pane_t6

0xfb71,	// (0x00099765) ncim_query_content_pane_t_ParamLimits

0x1694,	// (0x0008b288) ncim_query_list_pane_ParamLimits

0x16a6,	// (0x0008b29a) ncim_query_popup_pane_ParamLimits

0x16ba,	// (0x0008b2ae) wait_bar_pane_cp04

0x009f,	// (0x00089c93) input_focus_pane_cp011

0x16c2,	// (0x0008b2b6) ncim_query_popup_pane_t1

0x16d0,	// (0x0008b2c4) ncim_list_query_list_pane_ParamLimits

0x16d0,	// (0x0008b2c4) ncim_list_query_list_pane

0x009f,	// (0x00089c93) bg_button_pane_cp027

0x16dd,	// (0x0008b2d1) ncim_query_button_pane_g1

0x009f,	// (0x00089c93) list_highlight_pane_cp012

0x16e7,	// (0x0008b2db) ncim_list_query_list_pane_g1

0x16ef,	// (0x0008b2e3) ncim_list_query_list_pane_t1

0xe294,	// (0x00097e88) cam4_indicators_pane_g3_ParamLimits

0xe294,	// (0x00097e88) cam4_indicators_pane_g3

0xe30f,	// (0x00097f03) vid4_indicators_pane_g5_ParamLimits

0xe30f,	// (0x00097f03) vid4_indicators_pane_g5

0xf00e,	// (0x00098c02) vid4_progress_pane_g5_ParamLimits

0xf00e,	// (0x00098c02) vid4_progress_pane_g5

0x9d96,	// (0x0009398a) main_ncimui_pane_g1

0x9dff,	// (0x000939f3) ncimui_group_query_pane_ParamLimits

0x9dff,	// (0x000939f3) ncimui_group_query_pane

0x9e47,	// (0x00093a3b) ncimui_list_pane_ParamLimits

0x9e47,	// (0x00093a3b) ncimui_list_pane

0x9e6e,	// (0x00093a62) ncimui_text_pane_ParamLimits

0x9e6e,	// (0x00093a62) ncimui_text_pane

0x9f2f,	// (0x00093b23) ncimui_text_pane_t1_ParamLimits

0x9f2f,	// (0x00093b23) ncimui_text_pane_t1

0x16fd,	// (0x0008b2f1) ncimui_list_single_graphic_pane_ParamLimits

0x16fd,	// (0x0008b2f1) ncimui_list_single_graphic_pane

0x9f4d,	// (0x00093b41) ncimui_query_pane_ParamLimits

0x9f4d,	// (0x00093b41) ncimui_query_pane

0x009f,	// (0x00089c93) list_highlight_pane_cp013

0x170d,	// (0x0008b301) ncim_list_query_list_pane_t1_copy1

0x171b,	// (0x0008b30f) ncim_list_single_graphic_pane_g1

0x9f60,	// (0x00093b54) ncim_query_button_pane_cp01

0x9f6c,	// (0x00093b60) ncim_query_entry_pane_ParamLimits

0x9f6c,	// (0x00093b60) ncim_query_entry_pane

0x9f7f,	// (0x00093b73) ncimui_query_pane_g1

0x9f8b,	// (0x00093b7f) ncimui_query_pane_t1_ParamLimits

0x9f8b,	// (0x00093b7f) ncimui_query_pane_t1

0x0739,	// (0x0008a32d) input_focus_pane_cp012

0x1723,	// (0x0008b317) ncim_query_entry_pane_t1

0x0812,	// (0x0008a406) main_im_pane_ParamLimits

0xc1eb,	// (0x00095ddf) main_mobtv_pane_ParamLimits

0xc1eb,	// (0x00095ddf) main_mobtv_pane

0x9c11,	// (0x00093805) main_cset6_slider_pane_g18_ParamLimits

0x9c11,	// (0x00093805) main_cset6_slider_pane_g18

0x9c1d,	// (0x00093811) main_cset6_slider_pane_g19_ParamLimits

0x9c1d,	// (0x00093811) main_cset6_slider_pane_g19

0x07bc,	// (0x0008a3b0) bg_main_mobtv_pane_ParamLimits

0x07bc,	// (0x0008a3b0) bg_main_mobtv_pane

0x9fa4,	// (0x00093b98) main_mobtv_info_pane

0x9fad,	// (0x00093ba1) main_mobtv_loading_pane_ParamLimits

0x9fad,	// (0x00093ba1) main_mobtv_loading_pane

0x1735,	// (0x0008b329) main_mobtv_pg_channel_list_pane

0x173f,	// (0x0008b333) main_mobtv_pg_hdr_pane

0x9fba,	// (0x00093bae) main_mobtv_programe_curr_pane_ParamLimits

0x9fba,	// (0x00093bae) main_mobtv_programe_curr_pane

0x9fc7,	// (0x00093bbb) main_mobtv_programe_next_pane_ParamLimits

0x9fc7,	// (0x00093bbb) main_mobtv_programe_next_pane

0x1748,	// (0x0008b33c) popup_mobtv_noti_window

0x09fa,	// (0x0008a5ee) main_tv_pg_hdr_pane_g1

0x1750,	// (0x0008b344) main_tv_pg_hdr_pane_g2

0x1758,	// (0x0008b34c) main_tv_pg_hdr_pane_g3

0x1760,	// (0x0008b354) main_tv_pg_hdr_pane_g4

0x1768,	// (0x0008b35c) main_tv_pg_hdr_pane_g5

0x1772,	// (0x0008b366) main_tv_pg_hdr_pane_g6

0x177c,	// (0x0008b370) main_tv_pg_hdr_pane_g7

0x1786,	// (0x0008b37a) main_tv_pg_hdr_pane_g8

0x1790,	// (0x0008b384) main_tv_pg_hdr_pane_g9

0x179a,	// (0x0008b38e) main_tv_pg_hdr_pane_g10

0x17a4,	// (0x0008b398) main_tv_pg_hdr_pane_g11

0x000a,

0xfb7e,	// (0x00099772) main_tv_pg_hdr_pane_g

0x17ae,	// (0x0008b3a2) main_tv_pg_hdr_pane_t1

0x17bc,	// (0x0008b3b0) main_tv_pg_hdr_pane_t2

0x17ca,	// (0x0008b3be) main_tv_pg_hdr_pane_t3

0x17da,	// (0x0008b3ce) main_tv_pg_hdr_pane_t4

0x17ea,	// (0x0008b3de) main_tv_pg_hdr_pane_t5

0x0004,

0xfb95,	// (0x00099789) main_tv_pg_hdr_pane_t

0x17fa,	// (0x0008b3ee) single_mobtv_pg_channel_pane_ParamLimits

0x17fa,	// (0x0008b3ee) single_mobtv_pg_channel_pane

0x180c,	// (0x0008b400) single_mobtv_pg_channel_table_pane

0x0d22,	// (0x0008a916) single_mobtv_pg_channel_thumb_pane

0x1815,	// (0x0008b409) single_tv_pg_channel_pane_g1

0x181e,	// (0x0008b412) single_tv_pg_channel_pane_g2

0x0001,

0xfba0,	// (0x00099794) single_tv_pg_channel_pane_g

0x07a0,	// (0x0008a394) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0x07a0,	// (0x0008a394) bg_single_mobtv_pg_channel_thumb_pane

0x1827,	// (0x0008b41b) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0x1827,	// (0x0008b41b) single_mobtv_pg_channel_thumb_pane_g1

0x1835,	// (0x0008b429) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0x1835,	// (0x0008b429) single_mobtv_pg_channel_thumb_pane_g2

0x1841,	// (0x0008b435) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0x1841,	// (0x0008b435) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfba5,	// (0x00099799) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfba5,	// (0x00099799) single_mobtv_pg_channel_thumb_pane_g

0x184d,	// (0x0008b441) single_mobtv_pg_channel_thumb_pane_t1

0x185b,	// (0x0008b44f) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfbac,	// (0x000997a0) single_mobtv_pg_channel_thumb_pane_t

0x09fa,	// (0x0008a5ee) bg_single_mobtv_pg_channel_table_pane_g1

0x09fa,	// (0x0008a5ee) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf3be,	// (0x00098fb2) bg_single_mobtv_pg_channel_table_pane_g

0x1869,	// (0x0008b45d) single_mobtv_pg_channel_table_pane_t1

0x1877,	// (0x0008b46b) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfbb1,	// (0x000997a5) single_mobtv_pg_channel_table_pane_t

0x9fdc,	// (0x00093bd0) main_mobtv_info_pane_g1_ParamLimits

0x9fdc,	// (0x00093bd0) main_mobtv_info_pane_g1

0x9ffa,	// (0x00093bee) main_mobtv_info_pane_t1_ParamLimits

0x9ffa,	// (0x00093bee) main_mobtv_info_pane_t1

0xa072,	// (0x00093c66) main_mobtv_info_pane_t2_ParamLimits

0xa072,	// (0x00093c66) main_mobtv_info_pane_t2

0x0002,

0xfbbb,	// (0x000997af) main_mobtv_info_pane_t_ParamLimits

0xfbbb,	// (0x000997af) main_mobtv_info_pane_t

0xa101,	// (0x00093cf5) wait_bar_pane_cp05

0xa113,	// (0x00093d07) main_mobtv_loading_pane_g1_ParamLimits

0xa113,	// (0x00093d07) main_mobtv_loading_pane_g1

0xa126,	// (0x00093d1a) main_mobtv_loading_pane_g2_ParamLimits

0xa126,	// (0x00093d1a) main_mobtv_loading_pane_g2

0xa132,	// (0x00093d26) main_mobtv_loading_pane_g3_ParamLimits

0xa132,	// (0x00093d26) main_mobtv_loading_pane_g3

0x0002,

0xfbc2,	// (0x000997b6) main_mobtv_loading_pane_g_ParamLimits

0xfbc2,	// (0x000997b6) main_mobtv_loading_pane_g

0x1885,	// (0x0008b479) main_mobtv_loading_pane_t1_ParamLimits

0x1885,	// (0x0008b479) main_mobtv_loading_pane_t1

0x189d,	// (0x0008b491) main_mobtv_loading_pane_t2_ParamLimits

0x189d,	// (0x0008b491) main_mobtv_loading_pane_t2

0x0001,

0xfbc9,	// (0x000997bd) main_mobtv_loading_pane_t_ParamLimits

0xfbc9,	// (0x000997bd) main_mobtv_loading_pane_t

0xa145,	// (0x00093d39) wait_bar_pane_cp06_ParamLimits

0xa145,	// (0x00093d39) wait_bar_pane_cp06

0x18c1,	// (0x0008b4b5) main_mobtv_programe_curr_pane_t1

0x18cf,	// (0x0008b4c3) main_mobtv_programe_curr_pane_t2

0x0001,

0xfbce,	// (0x000997c2) main_mobtv_programe_curr_pane_t

0x18dd,	// (0x0008b4d1) main_mobtv_programe_next_pane_t1

0x18eb,	// (0x0008b4df) main_mobtv_programe_next_pane_t2

0x18f9,	// (0x0008b4ed) main_mobtv_programe_next_pane_t3

0x0002,

0xfbd3,	// (0x000997c7) main_mobtv_programe_next_pane_t

0x009f,	// (0x00089c93) bg_popup_mobtv_noti_window_pane

0x1907,	// (0x0008b4fb) popup_mobtv_noti_window_g1

0x190f,	// (0x0008b503) popup_mobtv_noti_window_t1

0x191d,	// (0x0008b511) popup_mobtv_noti_window_t2

0x0001,

0xfbda,	// (0x000997ce) popup_mobtv_noti_window_t

0x09fa,	// (0x0008a5ee) bg_popup_mobtv_noti_window_pane_g1

0xc1f9,	// (0x00095ded) sc_clock_pane

0xc1f9,	// (0x00095ded) main_fs_bigclock_pane

0x9853,	// (0x00093447) blid2_tripm_pane_t4_ParamLimits

0x9853,	// (0x00093447) blid2_tripm_pane_t4

0xa154,	// (0x00093d48) sc_clock_pane_g1_ParamLimits

0xa154,	// (0x00093d48) sc_clock_pane_g1

0xa166,	// (0x00093d5a) sc_clock_pane_t1_ParamLimits

0xa166,	// (0x00093d5a) sc_clock_pane_t1

0xa188,	// (0x00093d7c) sc_clock_pane_t2_ParamLimits

0xa188,	// (0x00093d7c) sc_clock_pane_t2

0xa1a0,	// (0x00093d94) sc_clock_pane_t3_ParamLimits

0xa1a0,	// (0x00093d94) sc_clock_pane_t3

0x0004,

0xfbdf,	// (0x000997d3) sc_clock_pane_t_ParamLimits

0xfbdf,	// (0x000997d3) sc_clock_pane_t

0xae7c,	// (0x00094a70) main_fs_bigclock_indicator_pane_ParamLimits

0xae7c,	// (0x00094a70) main_fs_bigclock_indicator_pane

0xa246,	// (0x00093e3a) main_fs_bigclock_pane_g1_ParamLimits

0xa246,	// (0x00093e3a) main_fs_bigclock_pane_g1

0xae88,	// (0x00094a7c) main_fs_bigclock_pane_t1_ParamLimits

0xae88,	// (0x00094a7c) main_fs_bigclock_pane_t1

0xae9a,	// (0x00094a8e) main_fs_bigclock_pane_t2_ParamLimits

0xae9a,	// (0x00094a8e) main_fs_bigclock_pane_t2

0xaeae,	// (0x00094aa2) main_fs_bigclock_pane_t3_ParamLimits

0xaeae,	// (0x00094aa2) main_fs_bigclock_pane_t3

0x0002,

0xfd70,	// (0x00099964) main_fs_bigclock_pane_t_ParamLimits

0xfd70,	// (0x00099964) main_fs_bigclock_pane_t

0x21c6,	// (0x0008bdba) main_fs_bigclock_indicator_pane_g1

0x163c,	// (0x0008b230) ncim_query_content_pane_g2_ParamLimits

0x163c,	// (0x0008b230) ncim_query_content_pane_g2

0x0001,

0xfb6c,	// (0x00099760) ncim_query_content_pane_g_ParamLimits

0xfb6c,	// (0x00099760) ncim_query_content_pane_g

0xa1b9,	// (0x00093dad) sc_clock_pane_t4_ParamLimits

0xa1b9,	// (0x00093dad) sc_clock_pane_t4

0xc1eb,	// (0x00095ddf) main_radioblah_pane

0xe1dd,	// (0x00097dd1) cell_call4_button_pane_t1_copy1_ParamLimits

0xe1dd,	// (0x00097dd1) cell_call4_button_pane_t1_copy1

0x9dae,	// (0x000939a2) main_ncimui_pane_t1_ParamLimits

0x9dae,	// (0x000939a2) main_ncimui_pane_t1

0x9dc8,	// (0x000939bc) main_ncimui_pane_t2_ParamLimits

0x9dc8,	// (0x000939bc) main_ncimui_pane_t2

0x0002,

0xfb65,	// (0x00099759) main_ncimui_pane_t_ParamLimits

0xfb65,	// (0x00099759) main_ncimui_pane_t

0x1ab0,	// (0x0008b6a4) main_radioblah_anim_pane_ParamLimits

0x1ab0,	// (0x0008b6a4) main_radioblah_anim_pane

0x1ac1,	// (0x0008b6b5) main_radioblah_info_pane_ParamLimits

0x1ac1,	// (0x0008b6b5) main_radioblah_info_pane

0x1ad5,	// (0x0008b6c9) main_radioblah_pane_t1_ParamLimits

0x1ad5,	// (0x0008b6c9) main_radioblah_pane_t1

0x1af1,	// (0x0008b6e5) main_radioblah_pane_t2_ParamLimits

0x1af1,	// (0x0008b6e5) main_radioblah_pane_t2

0x0003,

0xfc00,	// (0x000997f4) main_radioblah_pane_t_ParamLimits

0xfc00,	// (0x000997f4) main_radioblah_pane_t

0xa2a5,	// (0x00093e99) main_radioblah_rocker_ctrl_pane_ParamLimits

0xa2a5,	// (0x00093e99) main_radioblah_rocker_ctrl_pane

0x1b39,	// (0x0008b72d) main_radioblah_info_pane_t1_ParamLimits

0x1b39,	// (0x0008b72d) main_radioblah_info_pane_t1

0xa2fd,	// (0x00093ef1) main_radioblah_info_pane_t2_ParamLimits

0xa2fd,	// (0x00093ef1) main_radioblah_info_pane_t2

0x0003,

0xfc09,	// (0x000997fd) main_radioblah_info_pane_t_ParamLimits

0xfc09,	// (0x000997fd) main_radioblah_info_pane_t

0x09fa,	// (0x0008a5ee) main_radioblah_rocker_ctrl_pane_g1

0xa3ad,	// (0x00093fa1) main_radioblah_rocker_ctrl_pane_g2

0xa3b5,	// (0x00093fa9) main_radioblah_rocker_ctrl_pane_g3

0xa3bd,	// (0x00093fb1) main_radioblah_rocker_ctrl_pane_g4

0xa3c5,	// (0x00093fb9) main_radioblah_rocker_ctrl_pane_g5

0xa3cd,	// (0x00093fc1) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfc12,	// (0x00099806) main_radioblah_rocker_ctrl_pane_g

0x9b21,	// (0x00093715) main_cset_text2_pane_t1_copy1_ParamLimits

0xe267,	// (0x00097e5b) cam4_image_uncrop_qvga_pane

0xe2ba,	// (0x00097eae) vid4_image_uncrop_qcif_pane

0xf045,	// (0x00098c39) cam6_image_uncrop_qvga_pane_ParamLimits

0xf045,	// (0x00098c39) cam6_image_uncrop_qvga_pane

0x12f8,	// (0x0008aeec) vid6_image_uncrop_qcif_pane_ParamLimits

0x12f8,	// (0x0008aeec) vid6_image_uncrop_qcif_pane

0x009f,	// (0x00089c93) bg_popup_preview_window_pane_cp03

0x15e2,	// (0x0008b1d6) list_cset_text2_pane

0x15ea,	// (0x0008b1de) main_cset6_text2_pane_g1

0x15f2,	// (0x0008b1e6) main_cset6_text2_pane_t1

0x2322,	// (0x0008bf16) list_cset_text2_pane_t1_ParamLimits

0x2322,	// (0x0008bf16) list_cset_text2_pane_t1

0xc1eb,	// (0x00095ddf) main_radioblah_pane_ParamLimits

0xa0ed,	// (0x00093ce1) main_mobtv_info_pane_t3_ParamLimits

0xa0ed,	// (0x00093ce1) main_mobtv_info_pane_t3

0xa293,	// (0x00093e87) main_radioblah_pane_g1

0xa2cd,	// (0x00093ec1) main_radioblah_info_pane_g1

0xa352,	// (0x00093f46) main_radioblah_info_pane_t3_ParamLimits

0xa352,	// (0x00093f46) main_radioblah_info_pane_t3

0x4d55,	// (0x0008e949) highlight_cell_cale_month_pane_ParamLimits

0x4d55,	// (0x0008e949) highlight_cell_cale_month_pane

0xc1f9,	// (0x00095ded) main_phob_fisheye_pane

0xda0f,	// (0x00097603) scroll_pane_cp0031_ParamLimits

0xda0f,	// (0x00097603) scroll_pane_cp0031

0x1406,	// (0x0008affa) wait_bar_pane_cp08_ParamLimits

0x9ba3,	// (0x00093797) cset_list_set_pane_copy1_ParamLimits

0x1b73,	// (0x0008b767) highlight_cell_cale_month_pane_g1

0xa3d5,	// (0x00093fc9) highlight_cell_cale_month_pane_t1

0x1079,	// (0x0008ac6d) list_gen_pane_cp01

0xe4ae,	// (0x000980a2) scroll_pane_01

0xa3e3,	// (0x00093fd7) list_single_double_fisheye_pane

0xe6e7,	// (0x000982db) list_double_fisheye_pane_g1_ParamLimits

0xe6e7,	// (0x000982db) list_double_fisheye_pane_g1

0xe6f3,	// (0x000982e7) list_double_fisheye_pane_g2_ParamLimits

0xe6f3,	// (0x000982e7) list_double_fisheye_pane_g2

0xa3ec,	// (0x00093fe0) list_double_fisheye_pane_g3_ParamLimits

0xa3ec,	// (0x00093fe0) list_double_fisheye_pane_g3

0x0004,

0xfc1f,	// (0x00099813) list_double_fisheye_pane_g_ParamLimits

0xfc1f,	// (0x00099813) list_double_fisheye_pane_g

0xa3f8,	// (0x00093fec) list_double_fisheye_pane_t1_ParamLimits

0xa3f8,	// (0x00093fec) list_double_fisheye_pane_t1

0xa413,	// (0x00094007) list_double_fisheye_pane_t2_ParamLimits

0xa413,	// (0x00094007) list_double_fisheye_pane_t2

0x0001,

0xfc2a,	// (0x0009981e) list_double_fisheye_pane_t_ParamLimits

0xfc2a,	// (0x0009981e) list_double_fisheye_pane_t

0xc1f9,	// (0x00095ded) main_call5_pane

0xa1e4,	// (0x00093dd8) sc_swipe_pane_ParamLimits

0xa1e4,	// (0x00093dd8) sc_swipe_pane

0xa448,	// (0x0009403c) call5_image_pane_ParamLimits

0xa448,	// (0x0009403c) call5_image_pane

0xa465,	// (0x00094059) call5_swipe_1_pane_ParamLimits

0xa465,	// (0x00094059) call5_swipe_1_pane

0xa478,	// (0x0009406c) call5_swipe_2_pane_ParamLimits

0xa478,	// (0x0009406c) call5_swipe_2_pane

0xa4a3,	// (0x00094097) popup_call5_audio_first_window_ParamLimits

0xa4a3,	// (0x00094097) popup_call5_audio_first_window

0x07a0,	// (0x0008a394) call5_swipe_1_pane_g1_ParamLimits

0x07a0,	// (0x0008a394) call5_swipe_1_pane_g1

0x1b7b,	// (0x0008b76f) call5_swipe_1_pane_g2_ParamLimits

0x1b7b,	// (0x0008b76f) call5_swipe_1_pane_g2

0x0001,

0xfc2f,	// (0x00099823) call5_swipe_1_pane_g_ParamLimits

0xfc2f,	// (0x00099823) call5_swipe_1_pane_g

0x1b87,	// (0x0008b77b) call5_swipe_1_pane_t1_ParamLimits

0x1b87,	// (0x0008b77b) call5_swipe_1_pane_t1

0x07a0,	// (0x0008a394) call5_swipe_2_pane_g1_ParamLimits

0x07a0,	// (0x0008a394) call5_swipe_2_pane_g1

0x1b9c,	// (0x0008b790) call5_swipe_2_pane_g2_ParamLimits

0x1b9c,	// (0x0008b790) call5_swipe_2_pane_g2

0x0001,

0xfc34,	// (0x00099828) call5_swipe_2_pane_g_ParamLimits

0xfc34,	// (0x00099828) call5_swipe_2_pane_g

0x1ba8,	// (0x0008b79c) call5_swipe_2_pane_t1_ParamLimits

0x1ba8,	// (0x0008b79c) call5_swipe_2_pane_t1

0x1bbd,	// (0x0008b7b1) sc_swipe_pane_g1_ParamLimits

0x1bbd,	// (0x0008b7b1) sc_swipe_pane_g1

0x1bca,	// (0x0008b7be) sc_swipe_pane_g2_ParamLimits

0x1bca,	// (0x0008b7be) sc_swipe_pane_g2

0x0001,

0xfc39,	// (0x0009982d) sc_swipe_pane_g_ParamLimits

0xfc39,	// (0x0009982d) sc_swipe_pane_g

0x1bd6,	// (0x0008b7ca) sc_swipe_pane_t1_ParamLimits

0x1bd6,	// (0x0008b7ca) sc_swipe_pane_t1

0xc1f9,	// (0x00095ded) main_cmail_launcher_pane

0xa4b4,	// (0x000940a8) aid_size_cell_cmail_l_ParamLimits

0xa4b4,	// (0x000940a8) aid_size_cell_cmail_l

0xa4c2,	// (0x000940b6) grid_cmail_l_pane_ParamLimits

0xa4c2,	// (0x000940b6) grid_cmail_l_pane

0xa4dc,	// (0x000940d0) cell_cmail_l_pane_ParamLimits

0xa4dc,	// (0x000940d0) cell_cmail_l_pane

0x1beb,	// (0x0008b7df) cell_cmail_l_pane_g1_ParamLimits

0x1beb,	// (0x0008b7df) cell_cmail_l_pane_g1

0x1bf7,	// (0x0008b7eb) cell_cmail_l_pane_t1_ParamLimits

0x1bf7,	// (0x0008b7eb) cell_cmail_l_pane_t1

0x1c0d,	// (0x0008b801) cell_cmail_l_pane_t2_ParamLimits

0x1c0d,	// (0x0008b801) cell_cmail_l_pane_t2

0x0001,

0xfc3e,	// (0x00099832) cell_cmail_l_pane_t_ParamLimits

0xfc3e,	// (0x00099832) cell_cmail_l_pane_t

0x0739,	// (0x0008a32d) grid_highlight_pane_cp018_ParamLimits

0x0739,	// (0x0008a32d) grid_highlight_pane_cp018

0x3363,	// (0x0008cf57) main2_pane_ParamLimits

0x3363,	// (0x0008cf57) main2_pane

0x08a1,	// (0x0008a495) popup_sp_fs_action_menu_bg_pane_g1

0x08a9,	// (0x0008a49d) popup_sp_fs_action_menu_bg_pane_g2

0x08b1,	// (0x0008a4a5) popup_sp_fs_action_menu_bg_pane_g3

0x08b9,	// (0x0008a4ad) popup_sp_fs_action_menu_bg_pane_g4

0x08c1,	// (0x0008a4b5) popup_sp_fs_action_menu_bg_pane_g5

0x08c9,	// (0x0008a4bd) popup_sp_fs_action_menu_bg_pane_g6

0x08d1,	// (0x0008a4c5) popup_sp_fs_action_menu_bg_pane_g7

0x08d9,	// (0x0008a4cd) popup_sp_fs_action_menu_bg_pane_g8

0x08e1,	// (0x0008a4d5) popup_sp_fs_action_menu_bg_pane_g9

0x08e9,	// (0x0008a4dd) popup_sp_fs_action_menu_bg_pane_g10

0x08e9,	// (0x0008a4dd) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf12b,	// (0x00098d1f) popup_sp_fs_action_menu_bg_pane_g

0x07a0,	// (0x0008a394) list_medium_line_x2_t3_g3_g1_ParamLimits

0x07a0,	// (0x0008a394) list_medium_line_x2_t3_g3_g1

0x07a0,	// (0x0008a394) list_medium_line_x2_t3_g3_g2_ParamLimits

0x07a0,	// (0x0008a394) list_medium_line_x2_t3_g3_g2

0x07a0,	// (0x0008a394) list_medium_line_x2_t3_g3_g3_ParamLimits

0x07a0,	// (0x0008a394) list_medium_line_x2_t3_g3_g3

0x0002,

0xf1d9,	// (0x00098dcd) list_medium_line_x2_t3_g3_g_ParamLimits

0xf1d9,	// (0x00098dcd) list_medium_line_x2_t3_g3_g

0x0a14,	// (0x0008a608) list_medium_line_x2_t3_g3_t1_ParamLimits

0x0a14,	// (0x0008a608) list_medium_line_x2_t3_g3_t1

0x0a14,	// (0x0008a608) list_medium_line_x2_t3_g3_t2_ParamLimits

0x0a14,	// (0x0008a608) list_medium_line_x2_t3_g3_t2

0x0a14,	// (0x0008a608) list_medium_line_x2_t3_g3_t3_ParamLimits

0x0a14,	// (0x0008a608) list_medium_line_x2_t3_g3_t3

0x0002,

0xf1e0,	// (0x00098dd4) list_medium_line_x2_t3_g3_t_ParamLimits

0xf1e0,	// (0x00098dd4) list_medium_line_x2_t3_g3_t

0x07a0,	// (0x0008a394) list_medium_line_x2_t3_g2_g1_ParamLimits

0x07a0,	// (0x0008a394) list_medium_line_x2_t3_g2_g1

0x07a0,	// (0x0008a394) list_medium_line_x2_t3_g2_g2_ParamLimits

0x07a0,	// (0x0008a394) list_medium_line_x2_t3_g2_g2

0x0001,

0xf1e7,	// (0x00098ddb) list_medium_line_x2_t3_g2_g_ParamLimits

0xf1e7,	// (0x00098ddb) list_medium_line_x2_t3_g2_g

0x0a14,	// (0x0008a608) list_medium_line_x2_t3_g2_t1_ParamLimits

0x0a14,	// (0x0008a608) list_medium_line_x2_t3_g2_t1

0x0a14,	// (0x0008a608) list_medium_line_x2_t3_g2_t2_ParamLimits

0x0a14,	// (0x0008a608) list_medium_line_x2_t3_g2_t2

0x0a14,	// (0x0008a608) list_medium_line_x2_t3_g2_t3_ParamLimits

0x0a14,	// (0x0008a608) list_medium_line_x2_t3_g2_t3

0x0002,

0xf1e0,	// (0x00098dd4) list_medium_line_x2_t3_g2_t_ParamLimits

0xf1e0,	// (0x00098dd4) list_medium_line_x2_t3_g2_t

0x07a0,	// (0x0008a394) list_medium_line_x2_t4_g4_g1_ParamLimits

0x07a0,	// (0x0008a394) list_medium_line_x2_t4_g4_g1

0x07a0,	// (0x0008a394) list_medium_line_x2_t4_g4_g2_ParamLimits

0x07a0,	// (0x0008a394) list_medium_line_x2_t4_g4_g2

0x07a0,	// (0x0008a394) list_medium_line_x2_t4_g4_g3_ParamLimits

0x07a0,	// (0x0008a394) list_medium_line_x2_t4_g4_g3

0x07a0,	// (0x0008a394) list_medium_line_x2_t4_g4_g4_ParamLimits

0x07a0,	// (0x0008a394) list_medium_line_x2_t4_g4_g4

0x0003,

0xf1ec,	// (0x00098de0) list_medium_line_x2_t4_g4_g_ParamLimits

0xf1ec,	// (0x00098de0) list_medium_line_x2_t4_g4_g

0x0a14,	// (0x0008a608) list_medium_line_x2_t4_g4_t1_ParamLimits

0x0a14,	// (0x0008a608) list_medium_line_x2_t4_g4_t1

0x0a14,	// (0x0008a608) list_medium_line_x2_t4_g4_t2_ParamLimits

0x0a14,	// (0x0008a608) list_medium_line_x2_t4_g4_t2

0x0a14,	// (0x0008a608) list_medium_line_x2_t4_g4_t3_ParamLimits

0x0a14,	// (0x0008a608) list_medium_line_x2_t4_g4_t3

0x0a14,	// (0x0008a608) list_medium_line_x2_t4_g4_t4_ParamLimits

0x0a14,	// (0x0008a608) list_medium_line_x2_t4_g4_t4

0x0003,

0xf1f5,	// (0x00098de9) list_medium_line_x2_t4_g4_t_ParamLimits

0xf1f5,	// (0x00098de9) list_medium_line_x2_t4_g4_t

0x07a0,	// (0x0008a394) list_medium_line_x2_t2_g4_g1_ParamLimits

0x07a0,	// (0x0008a394) list_medium_line_x2_t2_g4_g1

0x07a0,	// (0x0008a394) list_medium_line_x2_t2_g4_g2_ParamLimits

0x07a0,	// (0x0008a394) list_medium_line_x2_t2_g4_g2

0x07a0,	// (0x0008a394) list_medium_line_x2_t2_g4_g3_ParamLimits

0x07a0,	// (0x0008a394) list_medium_line_x2_t2_g4_g3

0x07a0,	// (0x0008a394) list_medium_line_x2_t2_g4_g4_ParamLimits

0x07a0,	// (0x0008a394) list_medium_line_x2_t2_g4_g4

0x0003,

0xf1ec,	// (0x00098de0) list_medium_line_x2_t2_g4_g_ParamLimits

0xf1ec,	// (0x00098de0) list_medium_line_x2_t2_g4_g

0x0a14,	// (0x0008a608) list_medium_line_x2_t2_g4_t1_ParamLimits

0x0a14,	// (0x0008a608) list_medium_line_x2_t2_g4_t1

0x0a14,	// (0x0008a608) list_medium_line_x2_t2_g4_t2_ParamLimits

0x0a14,	// (0x0008a608) list_medium_line_x2_t2_g4_t2

0x0001,

0xf1bc,	// (0x00098db0) list_medium_line_x2_t2_g4_t_ParamLimits

0xf1bc,	// (0x00098db0) list_medium_line_x2_t2_g4_t

0x07a0,	// (0x0008a394) list_medium_line_x2_t2_g3_g1_ParamLimits

0x07a0,	// (0x0008a394) list_medium_line_x2_t2_g3_g1

0x07a0,	// (0x0008a394) list_medium_line_x2_t2_g3_g2_ParamLimits

0x07a0,	// (0x0008a394) list_medium_line_x2_t2_g3_g2

0x07a0,	// (0x0008a394) list_medium_line_x2_t2_g3_g3_ParamLimits

0x07a0,	// (0x0008a394) list_medium_line_x2_t2_g3_g3

0x0002,

0xf1d9,	// (0x00098dcd) list_medium_line_x2_t2_g3_g_ParamLimits

0xf1d9,	// (0x00098dcd) list_medium_line_x2_t2_g3_g

0x0a14,	// (0x0008a608) list_medium_line_x2_t2_g3_t1_ParamLimits

0x0a14,	// (0x0008a608) list_medium_line_x2_t2_g3_t1

0x0a14,	// (0x0008a608) list_medium_line_x2_t2_g3_t2_ParamLimits

0x0a14,	// (0x0008a608) list_medium_line_x2_t2_g3_t2

0x0001,

0xf1bc,	// (0x00098db0) list_medium_line_x2_t2_g3_t_ParamLimits

0xf1bc,	// (0x00098db0) list_medium_line_x2_t2_g3_t

0x503e,	// (0x0008ec32) main_sp_fs_list_pane_ParamLimits

0x503e,	// (0x0008ec32) main_sp_fs_list_pane

0x1a1c,	// (0x0008b610) sp_fs_scroll_pane_ParamLimits

0x1a1c,	// (0x0008b610) sp_fs_scroll_pane

0x504a,	// (0x0008ec3e) list_medium_line_x2_t3_t1

0x504a,	// (0x0008ec3e) list_medium_line_x2_t3_t2

0x504a,	// (0x0008ec3e) list_medium_line_x2_t3_t3

0x0002,

0xf2a2,	// (0x00098e96) list_medium_line_x2_t3_t

0x504a,	// (0x0008ec3e) list_medium_line_x3_t4_t1

0x504a,	// (0x0008ec3e) list_medium_line_x3_t4_t2

0x504a,	// (0x0008ec3e) list_medium_line_x3_t4_t3

0x504a,	// (0x0008ec3e) list_medium_line_x3_t4_t4

0x0003,

0xf2a9,	// (0x00098e9d) list_medium_line_x3_t4_t

0x504a,	// (0x0008ec3e) list_medium_line_x4_t5_t1

0x504a,	// (0x0008ec3e) list_medium_line_x4_t5_t2

0x504a,	// (0x0008ec3e) list_medium_line_x4_t5_t3

0x504a,	// (0x0008ec3e) list_medium_line_x4_t5_t4

0x504a,	// (0x0008ec3e) list_medium_line_x4_t5_t5

0x0004,

0xf2b2,	// (0x00098ea6) list_medium_line_x4_t5_t

0x07a0,	// (0x0008a394) list_medium_line_t4_g4_g1_ParamLimits

0x07a0,	// (0x0008a394) list_medium_line_t4_g4_g1

0x07a0,	// (0x0008a394) list_medium_line_t4_g4_g2_ParamLimits

0x07a0,	// (0x0008a394) list_medium_line_t4_g4_g2

0x07a0,	// (0x0008a394) list_medium_line_t4_g4_g3_ParamLimits

0x07a0,	// (0x0008a394) list_medium_line_t4_g4_g3

0x07a0,	// (0x0008a394) list_medium_line_t4_g4_g4_ParamLimits

0x07a0,	// (0x0008a394) list_medium_line_t4_g4_g4

0x0003,

0xf1ec,	// (0x00098de0) list_medium_line_t4_g4_g_ParamLimits

0xf1ec,	// (0x00098de0) list_medium_line_t4_g4_g

0x0a14,	// (0x0008a608) list_medium_line_t4_g4_t1_ParamLimits

0x0a14,	// (0x0008a608) list_medium_line_t4_g4_t1

0x0a14,	// (0x0008a608) list_medium_line_t4_g4_t2_ParamLimits

0x0a14,	// (0x0008a608) list_medium_line_t4_g4_t2

0x0a14,	// (0x0008a608) list_medium_line_t4_g4_t3_ParamLimits

0x0a14,	// (0x0008a608) list_medium_line_t4_g4_t3

0x0a14,	// (0x0008a608) list_medium_line_t4_g4_t4_ParamLimits

0x0a14,	// (0x0008a608) list_medium_line_t4_g4_t4

0x0003,

0xf1f5,	// (0x00098de9) list_medium_line_t4_g4_t_ParamLimits

0xf1f5,	// (0x00098de9) list_medium_line_t4_g4_t

0x535d,	// (0x0008ef51) chi_dic_find_pane_g1

0x6a4b,	// (0x0009063f) main_tport_pane

0x504a,	// (0x0008ec3e) list_medium_line_plain_t1

0x07a0,	// (0x0008a394) list_medium_line_t2_g2_g1_ParamLimits

0x07a0,	// (0x0008a394) list_medium_line_t2_g2_g1

0x07a0,	// (0x0008a394) list_medium_line_t2_g2_g2_ParamLimits

0x07a0,	// (0x0008a394) list_medium_line_t2_g2_g2

0x0001,

0xf1e7,	// (0x00098ddb) list_medium_line_t2_g2_g_ParamLimits

0xf1e7,	// (0x00098ddb) list_medium_line_t2_g2_g

0x0a14,	// (0x0008a608) list_medium_line_t2_g2_t1_ParamLimits

0x0a14,	// (0x0008a608) list_medium_line_t2_g2_t1

0x0a14,	// (0x0008a608) list_medium_line_t2_g2_t2_ParamLimits

0x0a14,	// (0x0008a608) list_medium_line_t2_g2_t2

0x0001,

0xf1bc,	// (0x00098db0) list_medium_line_t2_g2_t_ParamLimits

0xf1bc,	// (0x00098db0) list_medium_line_t2_g2_t

0xe694,	// (0x00098288) aid_sp_fs_list_icon_a_sm

0xe69c,	// (0x00098290) aid_sp_fs_list_icon_d

0xe6a4,	// (0x00098298) aid_sp_fs_text_primary

0x1082,	// (0x0008ac76) aid_sp_fs_text_secondary

0x009f,	// (0x00089c93) list_medium_line

0x009f,	// (0x00089c93) list_medium_line_g2

0x009f,	// (0x00089c93) list_medium_line_g3

0x009f,	// (0x00089c93) list_medium_line_plain

0x009f,	// (0x00089c93) list_medium_line_plain_t2

0x009f,	// (0x00089c93) list_medium_line_plain_t3

0x009f,	// (0x00089c93) list_medium_line_right_icon

0x009f,	// (0x00089c93) list_medium_line_right_iconx2

0x009f,	// (0x00089c93) list_medium_line_t2

0x009f,	// (0x00089c93) list_medium_line_t2_g2

0x009f,	// (0x00089c93) list_medium_line_t2_g3

0x009f,	// (0x00089c93) list_medium_line_t2_right_icon

0x009f,	// (0x00089c93) list_medium_line_t2_right_iconx2

0x009f,	// (0x00089c93) list_medium_line_t3

0x009f,	// (0x00089c93) list_medium_line_t3_g2

0x009f,	// (0x00089c93) list_medium_line_t3_g3

0x009f,	// (0x00089c93) list_medium_line_t3_right_iconx2

0x009f,	// (0x00089c93) list_medium_line_t4_g4

0x009f,	// (0x00089c93) list_medium_line_x2

0x009f,	// (0x00089c93) list_medium_line_x2_t2_g2

0x009f,	// (0x00089c93) list_medium_line_x2_t2_g3

0x009f,	// (0x00089c93) list_medium_line_x2_t2_g4

0x009f,	// (0x00089c93) list_medium_line_x2_t3

0x009f,	// (0x00089c93) list_medium_line_x2_t3_g2

0x009f,	// (0x00089c93) list_medium_line_x2_t3_g3

0x009f,	// (0x00089c93) list_medium_line_x2_t3_g4

0x009f,	// (0x00089c93) list_medium_line_x2_t4_g2

0x009f,	// (0x00089c93) list_medium_line_x2_t4_g4

0x009f,	// (0x00089c93) list_medium_line_x3

0x009f,	// (0x00089c93) list_medium_line_x3_t4

0x009f,	// (0x00089c93) list_medium_line_x3_t4_g4

0x009f,	// (0x00089c93) list_medium_line_x4_t4

0x009f,	// (0x00089c93) list_medium_line_x4_t4_g7

0x009f,	// (0x00089c93) list_medium_line_x4_t5

0x9643,	// (0x00093237) list_single_fs_dyc_pane_ParamLimits

0x9643,	// (0x00093237) list_single_fs_dyc_pane

0x07a0,	// (0x0008a394) list_medium_line_x4_t4_g7_g1_ParamLimits

0x07a0,	// (0x0008a394) list_medium_line_x4_t4_g7_g1

0x07a0,	// (0x0008a394) list_medium_line_x4_t4_g7_g2_ParamLimits

0x07a0,	// (0x0008a394) list_medium_line_x4_t4_g7_g2

0x07a0,	// (0x0008a394) list_medium_line_x4_t4_g7_g3_ParamLimits

0x07a0,	// (0x0008a394) list_medium_line_x4_t4_g7_g3

0x07a0,	// (0x0008a394) list_medium_line_x4_t4_g7_g4_ParamLimits

0x07a0,	// (0x0008a394) list_medium_line_x4_t4_g7_g4

0x07a0,	// (0x0008a394) list_medium_line_x4_t4_g7_g5_ParamLimits

0x07a0,	// (0x0008a394) list_medium_line_x4_t4_g7_g5

0x07a0,	// (0x0008a394) list_medium_line_x4_t4_g7_g6_ParamLimits

0x07a0,	// (0x0008a394) list_medium_line_x4_t4_g7_g6

0x07ae,	// (0x0008a3a2) list_medium_line_x4_t4_g7_g7_ParamLimits

0x07ae,	// (0x0008a3a2) list_medium_line_x4_t4_g7_g7

0x0006,

0xfb46,	// (0x0009973a) list_medium_line_x4_t4_g7_g_ParamLimits

0xfb46,	// (0x0009973a) list_medium_line_x4_t4_g7_g

0x0a14,	// (0x0008a608) list_medium_line_x4_t4_g7_t1_ParamLimits

0x0a14,	// (0x0008a608) list_medium_line_x4_t4_g7_t1

0x0a14,	// (0x0008a608) list_medium_line_x4_t4_g7_t2_ParamLimits

0x0a14,	// (0x0008a608) list_medium_line_x4_t4_g7_t2

0x0a14,	// (0x0008a608) list_medium_line_x4_t4_g7_t3_ParamLimits

0x0a14,	// (0x0008a608) list_medium_line_x4_t4_g7_t3

0x09cc,	// (0x0008a5c0) list_medium_line_x4_t4_g7_t4_ParamLimits

0x09cc,	// (0x0008a5c0) list_medium_line_x4_t4_g7_t4

0x09cc,	// (0x0008a5c0) list_medium_line_x4_t4_g7_t5_ParamLimits

0x09cc,	// (0x0008a5c0) list_medium_line_x4_t4_g7_t5

0x0004,

0xfb55,	// (0x00099749) list_medium_line_x4_t4_g7_t_ParamLimits

0xfb55,	// (0x00099749) list_medium_line_x4_t4_g7_t

0x9d65,	// (0x00093959) list_single_dyc_row_pane_ParamLimits

0x9d65,	// (0x00093959) list_single_dyc_row_pane

0xa435,	// (0x00094029) call5_gesture_pane_ParamLimits

0xa435,	// (0x00094029) call5_gesture_pane

0xa48b,	// (0x0009407f) call5_windows_pane_ParamLimits

0xa48b,	// (0x0009407f) call5_windows_pane

0xa4f6,	// (0x000940ea) call5_swipe_1_pane_cp_ParamLimits

0xa4f6,	// (0x000940ea) call5_swipe_1_pane_cp

0xa502,	// (0x000940f6) call5_swipe_2_pane_cp_ParamLimits

0xa502,	// (0x000940f6) call5_swipe_2_pane_cp

0x09c4,	// (0x0008a5b8) call5_image_pane_cp

0xa50e,	// (0x00094102) popup_call5_audio_first_window_cp_ParamLimits

0xa50e,	// (0x00094102) popup_call5_audio_first_window_cp

0x1bbd,	// (0x0008b7b1) call5_swipe_1_pane_g1_cp_ParamLimits

0x1bbd,	// (0x0008b7b1) call5_swipe_1_pane_g1_cp

0x1c2a,	// (0x0008b81e) call5_swipe_1_pane_g2_cp

0x1bd6,	// (0x0008b7ca) call5_swipe_1_pane_t1_cp_ParamLimits

0x1bd6,	// (0x0008b7ca) call5_swipe_1_pane_t1_cp

0x1bbd,	// (0x0008b7b1) call5_swipe_2_pane_g1_cp_ParamLimits

0x1bbd,	// (0x0008b7b1) call5_swipe_2_pane_g1_cp

0x1c32,	// (0x0008b826) call5_swipe_2_pane_g2_cp

0x1c3a,	// (0x0008b82e) call5_swipe_2_pane_t1_cp_ParamLimits

0x1c3a,	// (0x0008b82e) call5_swipe_2_pane_t1_cp

0x0739,	// (0x0008a32d) main_sp_fs_email_pane

0x1c4f,	// (0x0008b843) main_sp_fs_listscroll_pane_te

0xa51c,	// (0x00094110) popup_sp_fs_action_menu_pane_ParamLimits

0xa51c,	// (0x00094110) popup_sp_fs_action_menu_pane

0x09fa,	// (0x0008a5ee) bg_sp_fs_ctrlbar_pane_g1

0x1c58,	// (0x0008b84c) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0x1c61,	// (0x0008b855) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xd13b,	// (0x00096d2f) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0x09fa,	// (0x0008a5ee) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfc43,	// (0x00099837) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xd476,	// (0x0009706a) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xd476,	// (0x0009706a) bg_sp_fs_ctrlbar_ddmenu_pane

0x1c6a,	// (0x0008b85e) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0x1c6a,	// (0x0008b85e) main_sp_fs_ctrlbar_ddmenu_pane_g1

0x1c76,	// (0x0008b86a) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0x1c76,	// (0x0008b86a) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfc4c,	// (0x00099840) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfc4c,	// (0x00099840) main_sp_fs_ctrlbar_ddmenu_pane_g

0x1c82,	// (0x0008b876) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0x1c82,	// (0x0008b876) main_sp_fs_ctrlbar_ddmenu_pane_t1

0x09fa,	// (0x0008a5ee) list_medium_line_t2_right_icon_g1

0x504a,	// (0x0008ec3e) list_medium_line_t2_right_icon_t1

0x504a,	// (0x0008ec3e) list_medium_line_t2_right_icon_t2

0x0001,

0xfc51,	// (0x00099845) list_medium_line_t2_right_icon_t

0x58a6,	// (0x0008f49a) bg_sp_fs_ctrlbar_pane_ParamLimits

0x58a6,	// (0x0008f49a) bg_sp_fs_ctrlbar_pane

0xa5a6,	// (0x0009419a) main_sp_fs_ctrlbar_button_pane_cp01

0xa5b0,	// (0x000941a4) main_sp_fs_ctrlbar_ddmenu_pane

0x1cd4,	// (0x0008b8c8) main_sp_fs_ctrlbar_pane_g1

0x1ce0,	// (0x0008b8d4) main_sp_fs_ctrlbar_pane_g2

0x0003,

0xfc56,	// (0x0009984a) main_sp_fs_ctrlbar_pane_g

0xa5ee,	// (0x000941e2) main_sp_fs_ctrlbar_pane_t1

0xa62d,	// (0x00094221) main_sp_fs_ctrlbar_pane

0xa651,	// (0x00094245) main_sp_fs_listscroll_pane_te_cp01

0xa671,	// (0x00094265) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0xa671,	// (0x00094265) popup_sp_fs_action_menu_pane_cp01

0x0739,	// (0x0008a32d) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0x0739,	// (0x0008a32d) bg_sp_fs_highlight_list_pane_cp01

0xe724,	// (0x00098318) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0xe724,	// (0x00098318) sp_fs_action_menu_list_gene_pane_g1

0x1d07,	// (0x0008b8fb) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0x1d07,	// (0x0008b8fb) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfc64,	// (0x00099858) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfc64,	// (0x00099858) sp_fs_action_menu_list_gene_pane_g

0xe733,	// (0x00098327) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0xe733,	// (0x00098327) sp_fs_action_menu_list_gene_pane_t1

0xe74b,	// (0x0009833f) sp_fs_action_menu_list_gene_pane_ParamLimits

0xe74b,	// (0x0009833f) sp_fs_action_menu_list_gene_pane

0x1d14,	// (0x0008b908) popup_sp_fs_action_menu_bg_pane_ParamLimits

0x1d14,	// (0x0008b908) popup_sp_fs_action_menu_bg_pane

0xe76a,	// (0x0009835e) sp_fs_action_menu_list_pane_ParamLimits

0xe76a,	// (0x0009835e) sp_fs_action_menu_list_pane

0xa696,	// (0x0009428a) sp_fs_scroll_pane_cp01_ParamLimits

0xa696,	// (0x0009428a) sp_fs_scroll_pane_cp01

0x504a,	// (0x0008ec3e) list_medium_line_plain_t2_t1

0x504a,	// (0x0008ec3e) list_medium_line_plain_t2_t2

0x0001,

0xfc51,	// (0x00099845) list_medium_line_plain_t2_t

0x504a,	// (0x0008ec3e) list_medium_line_plain_t3_t1

0x504a,	// (0x0008ec3e) list_medium_line_plain_t3_t2

0x504a,	// (0x0008ec3e) list_medium_line_plain_t3_t3

0x0002,

0xf2a2,	// (0x00098e96) list_medium_line_plain_t3_t

0x07a0,	// (0x0008a394) list_medium_line_x2_t2_g2_g1_ParamLimits

0x07a0,	// (0x0008a394) list_medium_line_x2_t2_g2_g1

0x07a0,	// (0x0008a394) list_medium_line_x2_t2_g2_g2_ParamLimits

0x07a0,	// (0x0008a394) list_medium_line_x2_t2_g2_g2

0x0001,

0xf1e7,	// (0x00098ddb) list_medium_line_x2_t2_g2_g_ParamLimits

0xf1e7,	// (0x00098ddb) list_medium_line_x2_t2_g2_g

0x0a14,	// (0x0008a608) list_medium_line_x2_t2_g2_t1_ParamLimits

0x0a14,	// (0x0008a608) list_medium_line_x2_t2_g2_t1

0x0a14,	// (0x0008a608) list_medium_line_x2_t2_g2_t2_ParamLimits

0x0a14,	// (0x0008a608) list_medium_line_x2_t2_g2_t2

0x0001,

0xf1bc,	// (0x00098db0) list_medium_line_x2_t2_g2_t_ParamLimits

0xf1bc,	// (0x00098db0) list_medium_line_x2_t2_g2_t

0x07a0,	// (0x0008a394) list_medium_line_x2_t4_g2_g1_ParamLimits

0x07a0,	// (0x0008a394) list_medium_line_x2_t4_g2_g1

0x07a0,	// (0x0008a394) list_medium_line_x2_t4_g2_g2_ParamLimits

0x07a0,	// (0x0008a394) list_medium_line_x2_t4_g2_g2

0x0001,

0xf1e7,	// (0x00098ddb) list_medium_line_x2_t4_g2_g_ParamLimits

0xf1e7,	// (0x00098ddb) list_medium_line_x2_t4_g2_g

0x0a14,	// (0x0008a608) list_medium_line_x2_t4_g2_t1_ParamLimits

0x0a14,	// (0x0008a608) list_medium_line_x2_t4_g2_t1

0x0a14,	// (0x0008a608) list_medium_line_x2_t4_g2_t2_ParamLimits

0x0a14,	// (0x0008a608) list_medium_line_x2_t4_g2_t2

0x0a14,	// (0x0008a608) list_medium_line_x2_t4_g2_t3_ParamLimits

0x0a14,	// (0x0008a608) list_medium_line_x2_t4_g2_t3

0x0a14,	// (0x0008a608) list_medium_line_x2_t4_g2_t4_ParamLimits

0x0a14,	// (0x0008a608) list_medium_line_x2_t4_g2_t4

0x0003,

0xf1f5,	// (0x00098de9) list_medium_line_x2_t4_g2_t_ParamLimits

0xf1f5,	// (0x00098de9) list_medium_line_x2_t4_g2_t

0x09fa,	// (0x0008a5ee) list_medium_line_t3_right_iconx2_g1

0x09fa,	// (0x0008a5ee) list_medium_line_t3_right_iconx2_g2

0x09fa,	// (0x0008a5ee) list_medium_line_t3_right_iconx2_g3

0x0002,

0xf3c3,	// (0x00098fb7) list_medium_line_t3_right_iconx2_g

0x504a,	// (0x0008ec3e) list_medium_line_t3_right_iconx2_t1

0x504a,	// (0x0008ec3e) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfc51,	// (0x00099845) list_medium_line_t3_right_iconx2_t

0x07a0,	// (0x0008a394) list_medium_line_x3_t4_g4_g1_ParamLimits

0x07a0,	// (0x0008a394) list_medium_line_x3_t4_g4_g1

0x07a0,	// (0x0008a394) list_medium_line_x3_t4_g4_g2_ParamLimits

0x07a0,	// (0x0008a394) list_medium_line_x3_t4_g4_g2

0x07a0,	// (0x0008a394) list_medium_line_x3_t4_g4_g3_ParamLimits

0x07a0,	// (0x0008a394) list_medium_line_x3_t4_g4_g3

0x07a0,	// (0x0008a394) list_medium_line_x3_t4_g4_g4_ParamLimits

0x07a0,	// (0x0008a394) list_medium_line_x3_t4_g4_g4

0x0003,

0xf1ec,	// (0x00098de0) list_medium_line_x3_t4_g4_g_ParamLimits

0xf1ec,	// (0x00098de0) list_medium_line_x3_t4_g4_g

0x0a14,	// (0x0008a608) list_medium_line_x3_t4_g4_t1_ParamLimits

0x0a14,	// (0x0008a608) list_medium_line_x3_t4_g4_t1

0x0a14,	// (0x0008a608) list_medium_line_x3_t4_g4_t2_ParamLimits

0x0a14,	// (0x0008a608) list_medium_line_x3_t4_g4_t2

0x0a14,	// (0x0008a608) list_medium_line_x3_t4_g4_t3_ParamLimits

0x0a14,	// (0x0008a608) list_medium_line_x3_t4_g4_t3

0x0a14,	// (0x0008a608) list_medium_line_x3_t4_g4_t4_ParamLimits

0x0a14,	// (0x0008a608) list_medium_line_x3_t4_g4_t4

0x0003,

0xf1f5,	// (0x00098de9) list_medium_line_x3_t4_g4_t_ParamLimits

0xf1f5,	// (0x00098de9) list_medium_line_x3_t4_g4_t

0xa6bc,	// (0x000942b0) list_single_dyc_row_text_pane_t1_ParamLimits

0xa6bc,	// (0x000942b0) list_single_dyc_row_text_pane_t1

0xa705,	// (0x000942f9) list_single_dyc_row_text_pane_t2_ParamLimits

0xa705,	// (0x000942f9) list_single_dyc_row_text_pane_t2

0xe78a,	// (0x0009837e) list_single_dyc_row_text_pane_t3_ParamLimits

0xe78a,	// (0x0009837e) list_single_dyc_row_text_pane_t3

0x0005,

0xfc69,	// (0x0009985d) list_single_dyc_row_text_pane_t_ParamLimits

0xfc69,	// (0x0009985d) list_single_dyc_row_text_pane_t

0xe7ae,	// (0x000983a2) list_single_dyc_row_pane_g1_ParamLimits

0xe7ae,	// (0x000983a2) list_single_dyc_row_pane_g1

0xe7ba,	// (0x000983ae) list_single_dyc_row_pane_g2_ParamLimits

0xe7ba,	// (0x000983ae) list_single_dyc_row_pane_g2

0xe7c6,	// (0x000983ba) list_single_dyc_row_pane_g3_ParamLimits

0xe7c6,	// (0x000983ba) list_single_dyc_row_pane_g3

0xe7d2,	// (0x000983c6) list_single_dyc_row_pane_g4_ParamLimits

0xe7d2,	// (0x000983c6) list_single_dyc_row_pane_g4

0x0003,

0xfc76,	// (0x0009986a) list_single_dyc_row_pane_g_ParamLimits

0xfc76,	// (0x0009986a) list_single_dyc_row_pane_g

0xe7de,	// (0x000983d2) list_single_dyc_row_text_pane_ParamLimits

0xe7de,	// (0x000983d2) list_single_dyc_row_text_pane

0x009f,	// (0x00089c93) bg_sp_fs_scroll_pane

0x1d22,	// (0x0008b916) thumb_sp_fs_scroll_pane

0x07a0,	// (0x0008a394) list_medium_line_g1_ParamLimits

0x07a0,	// (0x0008a394) list_medium_line_g1

0x0a14,	// (0x0008a608) list_medium_line_t1_ParamLimits

0x0a14,	// (0x0008a608) list_medium_line_t1

0x07a0,	// (0x0008a394) list_medium_line_x2_g1_ParamLimits

0x07a0,	// (0x0008a394) list_medium_line_x2_g1

0x07a0,	// (0x0008a394) list_medium_line_x2_g2_ParamLimits

0x07a0,	// (0x0008a394) list_medium_line_x2_g2

0x0001,

0xf1e7,	// (0x00098ddb) list_medium_line_x2_g_ParamLimits

0xf1e7,	// (0x00098ddb) list_medium_line_x2_g

0x0a14,	// (0x0008a608) list_medium_line_x2_t1_ParamLimits

0x0a14,	// (0x0008a608) list_medium_line_x2_t1

0x07a0,	// (0x0008a394) list_medium_line_x3_g1_ParamLimits

0x07a0,	// (0x0008a394) list_medium_line_x3_g1

0x0dbb,	// (0x0008a9af) list_medium_line_x3_g2_ParamLimits

0x0dbb,	// (0x0008a9af) list_medium_line_x3_g2

0x0001,

0xfc7f,	// (0x00099873) list_medium_line_x3_g_ParamLimits

0xfc7f,	// (0x00099873) list_medium_line_x3_g

0x1d2b,	// (0x0008b91f) list_medium_line_x3_t1_ParamLimits

0x1d2b,	// (0x0008b91f) list_medium_line_x3_t1

0x1d3f,	// (0x0008b933) thumb_sp_fs_scroll_pane_g1

0x1d48,	// (0x0008b93c) thumb_sp_fs_scroll_pane_g2

0x1d51,	// (0x0008b945) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfc84,	// (0x00099878) thumb_sp_fs_scroll_pane_g

0x1d3f,	// (0x0008b933) bg_sp_fs_scroll_pane_g1

0x1d48,	// (0x0008b93c) bg_sp_fs_scroll_pane_g2

0x1d51,	// (0x0008b945) bg_sp_fs_scroll_pane_g3

0x0002,

0xfc84,	// (0x00099878) bg_sp_fs_scroll_pane_g

0x07a0,	// (0x0008a394) list_medium_line_x2_t3_g4_g1_ParamLimits

0x07a0,	// (0x0008a394) list_medium_line_x2_t3_g4_g1

0x07a0,	// (0x0008a394) list_medium_line_x2_t3_g4_g2_ParamLimits

0x07a0,	// (0x0008a394) list_medium_line_x2_t3_g4_g2

0x07a0,	// (0x0008a394) list_medium_line_x2_t3_g4_g3_ParamLimits

0x07a0,	// (0x0008a394) list_medium_line_x2_t3_g4_g3

0x07a0,	// (0x0008a394) list_medium_line_x2_t3_g4_g4_ParamLimits

0x07a0,	// (0x0008a394) list_medium_line_x2_t3_g4_g4

0x0003,

0xf1ec,	// (0x00098de0) list_medium_line_x2_t3_g4_g_ParamLimits

0xf1ec,	// (0x00098de0) list_medium_line_x2_t3_g4_g

0x0a14,	// (0x0008a608) list_medium_line_x2_t3_g4_t1_ParamLimits

0x0a14,	// (0x0008a608) list_medium_line_x2_t3_g4_t1

0x0a14,	// (0x0008a608) list_medium_line_x2_t3_g4_t2_ParamLimits

0x0a14,	// (0x0008a608) list_medium_line_x2_t3_g4_t2

0x0a14,	// (0x0008a608) list_medium_line_x2_t3_g4_t3_ParamLimits

0x0a14,	// (0x0008a608) list_medium_line_x2_t3_g4_t3

0x0002,

0xf1e0,	// (0x00098dd4) list_medium_line_x2_t3_g4_t_ParamLimits

0xf1e0,	// (0x00098dd4) list_medium_line_x2_t3_g4_t

0x07a0,	// (0x0008a394) list_medium_line_g2_g1_ParamLimits

0x07a0,	// (0x0008a394) list_medium_line_g2_g1

0x07a0,	// (0x0008a394) list_medium_line_g2_g2_ParamLimits

0x07a0,	// (0x0008a394) list_medium_line_g2_g2

0x0001,

0xf1e7,	// (0x00098ddb) list_medium_line_g2_g_ParamLimits

0xf1e7,	// (0x00098ddb) list_medium_line_g2_g

0x0a14,	// (0x0008a608) list_medium_line_g2_t1_ParamLimits

0x0a14,	// (0x0008a608) list_medium_line_g2_t1

0x07a0,	// (0x0008a394) list_medium_line_t3_g2_g1_ParamLimits

0x07a0,	// (0x0008a394) list_medium_line_t3_g2_g1

0x07a0,	// (0x0008a394) list_medium_line_t3_g2_g2_ParamLimits

0x07a0,	// (0x0008a394) list_medium_line_t3_g2_g2

0x0001,

0xf1e7,	// (0x00098ddb) list_medium_line_t3_g2_g_ParamLimits

0xf1e7,	// (0x00098ddb) list_medium_line_t3_g2_g

0x0a14,	// (0x0008a608) list_medium_line_t3_g2_t1_ParamLimits

0x0a14,	// (0x0008a608) list_medium_line_t3_g2_t1

0x0a14,	// (0x0008a608) list_medium_line_t3_g2_t2_ParamLimits

0x0a14,	// (0x0008a608) list_medium_line_t3_g2_t2

0x0a14,	// (0x0008a608) list_medium_line_t3_g2_t3_ParamLimits

0x0a14,	// (0x0008a608) list_medium_line_t3_g2_t3

0x0002,

0xf1e0,	// (0x00098dd4) list_medium_line_t3_g2_t_ParamLimits

0xf1e0,	// (0x00098dd4) list_medium_line_t3_g2_t

0x09fa,	// (0x0008a5ee) list_medium_line_right_icon_g1

0x504a,	// (0x0008ec3e) list_medium_line_right_icon_t1

0x07a0,	// (0x0008a394) list_medium_line_t2_g1_ParamLimits

0x07a0,	// (0x0008a394) list_medium_line_t2_g1

0x0a14,	// (0x0008a608) list_medium_line_t2_t1_ParamLimits

0x0a14,	// (0x0008a608) list_medium_line_t2_t1

0x0a14,	// (0x0008a608) list_medium_line_t2_t2_ParamLimits

0x0a14,	// (0x0008a608) list_medium_line_t2_t2

0x0001,

0xf1bc,	// (0x00098db0) list_medium_line_t2_t_ParamLimits

0xf1bc,	// (0x00098db0) list_medium_line_t2_t

0x07a0,	// (0x0008a394) list_medium_line_t3_g1_ParamLimits

0x07a0,	// (0x0008a394) list_medium_line_t3_g1

0x0a14,	// (0x0008a608) list_medium_line_t3_t1_ParamLimits

0x0a14,	// (0x0008a608) list_medium_line_t3_t1

0x0a14,	// (0x0008a608) list_medium_line_t3_t2_ParamLimits

0x0a14,	// (0x0008a608) list_medium_line_t3_t2

0x0a14,	// (0x0008a608) list_medium_line_t3_t3_ParamLimits

0x0a14,	// (0x0008a608) list_medium_line_t3_t3

0x0002,

0xf1e0,	// (0x00098dd4) list_medium_line_t3_t_ParamLimits

0xf1e0,	// (0x00098dd4) list_medium_line_t3_t

0x07a0,	// (0x0008a394) list_medium_line_g3_g1_ParamLimits

0x07a0,	// (0x0008a394) list_medium_line_g3_g1

0x07a0,	// (0x0008a394) list_medium_line_g3_g2_ParamLimits

0x07a0,	// (0x0008a394) list_medium_line_g3_g2

0x07a0,	// (0x0008a394) list_medium_line_g3_g3_ParamLimits

0x07a0,	// (0x0008a394) list_medium_line_g3_g3

0x0002,

0xf1d9,	// (0x00098dcd) list_medium_line_g3_g_ParamLimits

0xf1d9,	// (0x00098dcd) list_medium_line_g3_g

0x0a14,	// (0x0008a608) list_medium_line_g3_t1_ParamLimits

0x0a14,	// (0x0008a608) list_medium_line_g3_t1

0x07a0,	// (0x0008a394) list_medium_line_t2_g3_g1_ParamLimits

0x07a0,	// (0x0008a394) list_medium_line_t2_g3_g1

0x07a0,	// (0x0008a394) list_medium_line_t2_g3_g2_ParamLimits

0x07a0,	// (0x0008a394) list_medium_line_t2_g3_g2

0x07a0,	// (0x0008a394) list_medium_line_t2_g3_g3_ParamLimits

0x07a0,	// (0x0008a394) list_medium_line_t2_g3_g3

0x0002,

0xf1d9,	// (0x00098dcd) list_medium_line_t2_g3_g_ParamLimits

0xf1d9,	// (0x00098dcd) list_medium_line_t2_g3_g

0x0a14,	// (0x0008a608) list_medium_line_t2_g3_t1_ParamLimits

0x0a14,	// (0x0008a608) list_medium_line_t2_g3_t1

0x0a14,	// (0x0008a608) list_medium_line_t2_g3_t2_ParamLimits

0x0a14,	// (0x0008a608) list_medium_line_t2_g3_t2

0x0001,

0xf1bc,	// (0x00098db0) list_medium_line_t2_g3_t_ParamLimits

0xf1bc,	// (0x00098db0) list_medium_line_t2_g3_t

0x07a0,	// (0x0008a394) list_medium_line_t3_g3_g1_ParamLimits

0x07a0,	// (0x0008a394) list_medium_line_t3_g3_g1

0x07a0,	// (0x0008a394) list_medium_line_t3_g3_g2_ParamLimits

0x07a0,	// (0x0008a394) list_medium_line_t3_g3_g2

0x07a0,	// (0x0008a394) list_medium_line_t3_g3_g3_ParamLimits

0x07a0,	// (0x0008a394) list_medium_line_t3_g3_g3

0x0002,

0xf1d9,	// (0x00098dcd) list_medium_line_t3_g3_g_ParamLimits

0xf1d9,	// (0x00098dcd) list_medium_line_t3_g3_g

0x0a14,	// (0x0008a608) list_medium_line_t3_g3_t1_ParamLimits

0x0a14,	// (0x0008a608) list_medium_line_t3_g3_t1

0x0a14,	// (0x0008a608) list_medium_line_t3_g3_t2_ParamLimits

0x0a14,	// (0x0008a608) list_medium_line_t3_g3_t2

0x0a14,	// (0x0008a608) list_medium_line_t3_g3_t3_ParamLimits

0x0a14,	// (0x0008a608) list_medium_line_t3_g3_t3

0x0002,

0xf1e0,	// (0x00098dd4) list_medium_line_t3_g3_t_ParamLimits

0xf1e0,	// (0x00098dd4) list_medium_line_t3_g3_t

0x09fa,	// (0x0008a5ee) list_medium_line_right_iconx2_g1

0x09fa,	// (0x0008a5ee) list_medium_line_right_iconx2_g2

0x0001,

0xf3be,	// (0x00098fb2) list_medium_line_right_iconx2_g

0x504a,	// (0x0008ec3e) list_medium_line_right_iconx2_t1

0x09fa,	// (0x0008a5ee) list_medium_line_t2_right_iconx2_g1

0x09fa,	// (0x0008a5ee) list_medium_line_t2_right_iconx2_g2

0x0001,

0xf3be,	// (0x00098fb2) list_medium_line_t2_right_iconx2_g

0x504a,	// (0x0008ec3e) list_medium_line_t2_right_iconx2_t1

0x504a,	// (0x0008ec3e) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfc51,	// (0x00099845) list_medium_line_t2_right_iconx2_t

0x504a,	// (0x0008ec3e) list_medium_line_x4_t4_t1

0x504a,	// (0x0008ec3e) list_medium_line_x4_t4_t2

0x504a,	// (0x0008ec3e) list_medium_line_x4_t4_t3

0x504a,	// (0x0008ec3e) list_medium_line_x4_t4_t4

0x0003,

0xf2a9,	// (0x00098e9d) list_medium_line_x4_t4_t

0xa87d,	// (0x00094471) tport_appsw_pane_ParamLimits

0xa87d,	// (0x00094471) tport_appsw_pane

0xa895,	// (0x00094489) tport_contact_pane_ParamLimits

0xa895,	// (0x00094489) tport_contact_pane

0xa8ad,	// (0x000944a1) tport_listscroll_pane_ParamLimits

0xa8ad,	// (0x000944a1) tport_listscroll_pane

0xa8c7,	// (0x000944bb) cell_tport_appsw_pane_ParamLimits

0xa8c7,	// (0x000944bb) cell_tport_appsw_pane

0xc35f,	// (0x00095f53) tport_appsw_pane_g1_ParamLimits

0xc35f,	// (0x00095f53) tport_appsw_pane_g1

0x1d5a,	// (0x0008b94e) tport_contact_pane_g1

0x1d63,	// (0x0008b957) tport_contact_pane_t1

0x1d71,	// (0x0008b965) tport_contact_pane_t2

0x0001,

0xfc8b,	// (0x0009987f) tport_contact_pane_t

0x1d7f,	// (0x0008b973) list_tport_pane

0x1d88,	// (0x0008b97c) scroll_pane_cp_030

0xa90f,	// (0x00094503) cell_tport_appsw_pane_g1

0xa91f,	// (0x00094513) cell_tport_appsw_pane_t1

0xa92d,	// (0x00094521) grid_highlight_pane_cp019

0xa935,	// (0x00094529) list_tport_double_graphic_pane_ParamLimits

0xa935,	// (0x00094529) list_tport_double_graphic_pane

0x0739,	// (0x0008a32d) list_highlight_pane_cp023_ParamLimits

0x0739,	// (0x0008a32d) list_highlight_pane_cp023

0xa942,	// (0x00094536) list_tport_double_graphic_pane_g1_ParamLimits

0xa942,	// (0x00094536) list_tport_double_graphic_pane_g1

0xa94f,	// (0x00094543) list_tport_double_graphic_pane_t1_ParamLimits

0xa94f,	// (0x00094543) list_tport_double_graphic_pane_t1

0xa964,	// (0x00094558) list_tport_double_graphic_pane_t2_ParamLimits

0xa964,	// (0x00094558) list_tport_double_graphic_pane_t2

0x0001,

0xfc97,	// (0x0009988b) list_tport_double_graphic_pane_t_ParamLimits

0xfc97,	// (0x0009988b) list_tport_double_graphic_pane_t

0x009f,	// (0x00089c93) main_cale_note_pane

0x87ca,	// (0x000923be) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x87ca,	// (0x000923be) cell_vitu2_function_top_wide_pane_cp01

0xa101,	// (0x00093cf5) wait_bar_pane_cp05_ParamLimits

0x0739,	// (0x0008a32d) listscroll_cmail_pane

0x1d91,	// (0x0008b985) list_cmail_pane

0xa976,	// (0x0009456a) list_cmail_body_pane

0xa98c,	// (0x00094580) list_single_cmail_header_caption_pane

0xa9a3,	// (0x00094597) list_single_cmail_header_detail_pane_ParamLimits

0xa9a3,	// (0x00094597) list_single_cmail_header_detail_pane

0x1da1,	// (0x0008b995) list_single_cmail_header_caption_pane_t1

0xa9cd,	// (0x000945c1) list_single_cmail_header_detail_pane_g1_ParamLimits

0xa9cd,	// (0x000945c1) list_single_cmail_header_detail_pane_g1

0xe7fd,	// (0x000983f1) list_single_cmail_header_detail_pane_g2_ParamLimits

0xe7fd,	// (0x000983f1) list_single_cmail_header_detail_pane_g2

0x0002,

0xfc9c,	// (0x00099890) list_single_cmail_header_detail_pane_g_ParamLimits

0xfc9c,	// (0x00099890) list_single_cmail_header_detail_pane_g

0xe809,	// (0x000983fd) list_single_cmail_header_detail_pane_t1_ParamLimits

0xe809,	// (0x000983fd) list_single_cmail_header_detail_pane_t1

0xe869,	// (0x0009845d) list_single_cmail_header_editor_pane_bg_ParamLimits

0xe869,	// (0x0009845d) list_single_cmail_header_editor_pane_bg

0x181e,	// (0x0008b412) list_cmail_body_pane_g1

0x1dc5,	// (0x0008b9b9) list_cmail_body_pane_t1

0xe394,	// (0x00097f88) list_single_cmail_header_editor_pane_bg_g1

0x0c1f,	// (0x0008a813) list_single_cmail_header_editor_pane_bg_g1_copy1

0xe3a4,	// (0x00097f98) list_single_cmail_header_editor_pane_bg_g1_copy2

0xe39c,	// (0x00097f90) list_single_cmail_header_editor_pane_bg_g1_copy3

0x0e0a,	// (0x0008a9fe) list_single_cmail_header_editor_pane_bg_g1_copy4

0xe3c4,	// (0x00097fb8) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xe3b4,	// (0x00097fa8) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xe3bc,	// (0x00097fb0) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0x0bff,	// (0x0008a7f3) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0xa9e5,	// (0x000945d9) calenote_gesture_pane_ParamLimits

0xa9e5,	// (0x000945d9) calenote_gesture_pane

0xaa05,	// (0x000945f9) calenote_window_pane_ParamLimits

0xaa05,	// (0x000945f9) calenote_window_pane

0x1dd3,	// (0x0008b9c7) popup_note_window_cp01

0xaa21,	// (0x00094615) calenote_swipe_1_pane_ParamLimits

0xaa21,	// (0x00094615) calenote_swipe_1_pane

0xa502,	// (0x000940f6) calenote_swipe_2_pane_ParamLimits

0xa502,	// (0x000940f6) calenote_swipe_2_pane

0x1bbd,	// (0x0008b7b1) calenote_swipe_1_pane_g1_ParamLimits

0x1bbd,	// (0x0008b7b1) calenote_swipe_1_pane_g1

0x1bca,	// (0x0008b7be) calenote_swipe_1_pane_g2_ParamLimits

0x1bca,	// (0x0008b7be) calenote_swipe_1_pane_g2

0x0001,

0xfc39,	// (0x0009982d) calenote_swipe_1_pane_g_ParamLimits

0xfc39,	// (0x0009982d) calenote_swipe_1_pane_g

0x1de5,	// (0x0008b9d9) calenote_swipe_1_pane_t1_ParamLimits

0x1de5,	// (0x0008b9d9) calenote_swipe_1_pane_t1

0x1bbd,	// (0x0008b7b1) calenote_swipe_2_pane_g1_ParamLimits

0x1bbd,	// (0x0008b7b1) calenote_swipe_2_pane_g1

0x1e04,	// (0x0008b9f8) calenote_swipe_2_pane_g2_ParamLimits

0x1e04,	// (0x0008b9f8) calenote_swipe_2_pane_g2

0x0001,

0xfca8,	// (0x0009989c) calenote_swipe_2_pane_g_ParamLimits

0xfca8,	// (0x0009989c) calenote_swipe_2_pane_g

0x1e10,	// (0x0008ba04) calenote_swipe_2_pane_t1_ParamLimits

0x1e10,	// (0x0008ba04) calenote_swipe_2_pane_t1

0x009f,	// (0x00089c93) main_mup_navstr_pane

0x7659,	// (0x0009124d) main_mup3_pane_t7_ParamLimits

0x7659,	// (0x0009124d) main_mup3_pane_t7

0xdf78,	// (0x00097b6c) main_mp4_pane_g6_ParamLimits

0xdf78,	// (0x00097b6c) main_mp4_pane_g6

0xe1cb,	// (0x00097dbf) main_image3_pane_t4_ParamLimits

0xe1cb,	// (0x00097dbf) main_image3_pane_t4

0xaa36,	// (0x0009462a) popup_navstr_preview_pane_ParamLimits

0xaa36,	// (0x0009462a) popup_navstr_preview_pane

0xaa4a,	// (0x0009463e) scroll_navstr_pane_ParamLimits

0xaa4a,	// (0x0009463e) scroll_navstr_pane

0x009f,	// (0x00089c93) bg_popup_preview_window_pane_cp04

0x1e37,	// (0x0008ba2b) popup_navstr_preview_pane_t1

0xaa5e,	// (0x00094652) scroll_navstr_pane_g1_ParamLimits

0xaa5e,	// (0x00094652) scroll_navstr_pane_g1

0xaa72,	// (0x00094666) scroll_navstr_pane_t1_ParamLimits

0xaa72,	// (0x00094666) scroll_navstr_pane_t1

0x1ddc,	// (0x0008b9d0) bg_button_pane_cp014

0x1ddc,	// (0x0008b9d0) bg_button_pane_cp030

0xe707,	// (0x000982fb) list_double_fisheye_pane_g4_ParamLimits

0xe707,	// (0x000982fb) list_double_fisheye_pane_g4

0xe713,	// (0x00098307) list_double_fisheye_pane_g5_ParamLimits

0xe713,	// (0x00098307) list_double_fisheye_pane_g5

0x1a1c,	// (0x0008b610) sp_fs_scroll_pane_cp03

0x1cd4,	// (0x0008b8c8) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0x1ce0,	// (0x0008b8d4) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfc56,	// (0x0009984a) main_sp_fs_ctrlbar_pane_g_ParamLimits

0xa5ee,	// (0x000941e2) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0x1d99,	// (0x0008b98d) sp_fs_scroll_pane_cp02

0x090c,	// (0x0008a500) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0x090c,	// (0x0008a500) popup_sp_fs_calendar_preview_list_single_pane

0x009f,	// (0x00089c93) main_cam6_pano_pane

0xc1eb,	// (0x00095ddf) main_mup3_pane_ParamLimits

0x009f,	// (0x00089c93) main_phacti_pane

0x9fd4,	// (0x00093bc8) bg_button_pane_cp11

0x9fee,	// (0x00093be2) main_mobtv_info_pane_g2_ParamLimits

0x9fee,	// (0x00093be2) main_mobtv_info_pane_g2

0x0001,

0xfbb6,	// (0x000997aa) main_mobtv_info_pane_g_ParamLimits

0xfbb6,	// (0x000997aa) main_mobtv_info_pane_g

0xa1cb,	// (0x00093dbf) sc_clock_pane_t5_ParamLimits

0xa1cb,	// (0x00093dbf) sc_clock_pane_t5

0xa293,	// (0x00093e87) main_radioblah_pane_g1_ParamLimits

0x1b09,	// (0x0008b6fd) main_radioblah_pane_t3_ParamLimits

0x1b09,	// (0x0008b6fd) main_radioblah_pane_t3

0x1b21,	// (0x0008b715) main_radioblah_pane_t4_ParamLimits

0x1b21,	// (0x0008b715) main_radioblah_pane_t4

0xa2bb,	// (0x00093eaf) main_radioblah_text_pane_ParamLimits

0xa2bb,	// (0x00093eaf) main_radioblah_text_pane

0xa2cd,	// (0x00093ec1) main_radioblah_info_pane_g1_ParamLimits

0xa366,	// (0x00093f5a) main_radioblah_info_pane_t4_ParamLimits

0xa366,	// (0x00093f5a) main_radioblah_info_pane_t4

0x0739,	// (0x0008a32d) main_sp_fs_calendar_pane

0xaa89,	// (0x0009467d) main_phacti_pane_g1

0xaa91,	// (0x00094685) phacti_note_pane_ParamLimits

0xaa91,	// (0x00094685) phacti_note_pane

0x1e4e,	// (0x0008ba42) phacti_term_pane_ParamLimits

0x1e4e,	// (0x0008ba42) phacti_term_pane

0x1e63,	// (0x0008ba57) phacti_note_pane_t1_ParamLimits

0x1e63,	// (0x0008ba57) phacti_note_pane_t1

0xe880,	// (0x00098474) phacti_term_pane_g1

0xe888,	// (0x0009847c) phacti_term_pane_t1_ParamLimits

0xe888,	// (0x0009847c) phacti_term_pane_t1

0x1e7a,	// (0x0008ba6e) popup_sp_fs_calendar_preview_list_single_pane_g1

0x1e82,	// (0x0008ba76) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfcb2,	// (0x000998a6) popup_sp_fs_calendar_preview_list_single_pane_g

0x1e8a,	// (0x0008ba7e) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0x1e8a,	// (0x0008ba7e) popup_sp_fs_calendar_preview_list_single_pane_t1

0x1ea0,	// (0x0008ba94) aid_popup_sp_fs_bg_corner_pane

0x09fa,	// (0x0008a5ee) popup_sp_fs_calendar_preview_bg_pane_g1

0x009f,	// (0x00089c93) popup_sp_fs_calendar_preview_bg_pane

0x1ea8,	// (0x0008ba9c) popup_sp_fs_calendar_preview_list_pane

0x58a6,	// (0x0008f49a) bg_main_sp_fs_cale_pane_ParamLimits

0x58a6,	// (0x0008f49a) bg_main_sp_fs_cale_pane

0xe8bb,	// (0x000984af) listscroll_cale_mrui_pane_ParamLimits

0xe8bb,	// (0x000984af) listscroll_cale_mrui_pane

0xe8d0,	// (0x000984c4) listscroll_sp_fs_schedule_track_pane

0xe8d9,	// (0x000984cd) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0xe8d9,	// (0x000984cd) main_sp_fs_ctrlbar_pane_cp01

0x1eb0,	// (0x0008baa4) main_sp_fs_ribbon_pane

0xe8ec,	// (0x000984e0) popup_sp_fs_cale_preview_window

0xab06,	// (0x000946fa) list_single_sp_fs_schedule_track_pane_ParamLimits

0xab06,	// (0x000946fa) list_single_sp_fs_schedule_track_pane

0x0739,	// (0x0008a32d) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0x0739,	// (0x0008a32d) bg_sp_fs_highlight_list_pane_cp03

0xab1a,	// (0x0009470e) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0xab1a,	// (0x0009470e) list_single_sp_fs_schedule_track_pane_g1

0xab26,	// (0x0009471a) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0xab26,	// (0x0009471a) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfcb7,	// (0x000998ab) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfcb7,	// (0x000998ab) list_single_sp_fs_schedule_track_pane_g

0xab32,	// (0x00094726) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0xab32,	// (0x00094726) list_single_sp_fs_schedule_track_pane_t1

0xab4c,	// (0x00094740) sp_fs_schedule_track_pane_ParamLimits

0xab4c,	// (0x00094740) sp_fs_schedule_track_pane

0x1eb8,	// (0x0008baac) sp_fs_schedule_track_pane_g1

0x1ec0,	// (0x0008bab4) sp_fs_schedule_track_pane_g2

0x1ec8,	// (0x0008babc) sp_fs_schedule_track_pane_g3

0x1ed0,	// (0x0008bac4) sp_fs_schedule_track_pane_g4

0x1ed8,	// (0x0008bacc) sp_fs_schedule_track_pane_g5

0x0004,

0xfcbc,	// (0x000998b0) sp_fs_schedule_track_pane_g

0xe394,	// (0x00097f88) bg_sp_fs_schedule_viewer_highlight_g1

0x0c1f,	// (0x0008a813) bg_sp_fs_schedule_viewer_highlight_g2

0xe39c,	// (0x00097f90) bg_sp_fs_schedule_viewer_highlight_g3

0xe3a4,	// (0x00097f98) bg_sp_fs_schedule_viewer_highlight_g4

0x0e0a,	// (0x0008a9fe) bg_sp_fs_schedule_viewer_highlight_g5

0xe3b4,	// (0x00097fa8) bg_sp_fs_schedule_viewer_highlight_g6

0xe3bc,	// (0x00097fb0) bg_sp_fs_schedule_viewer_highlight_g7

0xe3c4,	// (0x00097fb8) bg_sp_fs_schedule_viewer_highlight_g8

0x0bff,	// (0x0008a7f3) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfcc7,	// (0x000998bb) bg_sp_fs_schedule_viewer_highlight_g

0x009f,	// (0x00089c93) bg_main_sp_fs_ribbon_pane

0xab5d,	// (0x00094751) main_sp_fs_ribbon_pane_g1

0x1ee0,	// (0x0008bad4) main_sp_fs_ribbon_pane_t1

0xab66,	// (0x0009475a) main_sp_fs_ribbon_pane_t2

0x1eef,	// (0x0008bae3) main_sp_fs_ribbon_pane_t3

0x0002,

0xfcda,	// (0x000998ce) main_sp_fs_ribbon_pane_t

0x1efe,	// (0x0008baf2) main_sp_fs_ribbon_scheduler_pane

0x1f06,	// (0x0008bafa) bg_main_sp_fs_ribbon_pane_g1

0x1f0f,	// (0x0008bb03) bg_main_sp_fs_ribbon_pane_g2

0x1f18,	// (0x0008bb0c) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfce1,	// (0x000998d5) bg_main_sp_fs_ribbon_pane_g

0x1f20,	// (0x0008bb14) main_sp_fs_ribbon_scheduler_pane_g1

0x1f29,	// (0x0008bb1d) main_sp_fs_ribbon_scheduler_pane_g2

0x1f32,	// (0x0008bb26) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfce8,	// (0x000998dc) main_sp_fs_ribbon_scheduler_pane_g

0x1f3b,	// (0x0008bb2f) list_cale_mrui_pane

0xab75,	// (0x00094769) sp_fs_scroll_pane_cp07_ParamLimits

0xab75,	// (0x00094769) sp_fs_scroll_pane_cp07

0xab91,	// (0x00094785) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0xab91,	// (0x00094785) bg_sp_fs_schedule_viewer_highlight

0x1f48,	// (0x0008bb3c) list_single_sp_fs_schedule_track_pane_cp01

0x1f50,	// (0x0008bb44) list_sp_fs_schedule_track_pane

0x1f58,	// (0x0008bb4c) sp_fs_scroll_pane_cp06_ParamLimits

0x1f58,	// (0x0008bb4c) sp_fs_scroll_pane_cp06

0x09fa,	// (0x0008a5ee) bgmain_sp_fs_calendar_pane_g1

0xaba1,	// (0x00094795) list_single_cale_mrui_pane_ParamLimits

0xaba1,	// (0x00094795) list_single_cale_mrui_pane

0xe8fe,	// (0x000984f2) list_single_cale_mrui_row_pane_ParamLimits

0xe8fe,	// (0x000984f2) list_single_cale_mrui_row_pane

0xe90b,	// (0x000984ff) list_single_cale_mrui_row_pane_g1_ParamLimits

0xe90b,	// (0x000984ff) list_single_cale_mrui_row_pane_g1

0xe943,	// (0x00098537) list_single_cale_mrui_row_pane_t1_ParamLimits

0xe943,	// (0x00098537) list_single_cale_mrui_row_pane_t1

0xabc2,	// (0x000947b6) list_single_cale_mrui_row_pane_t2_ParamLimits

0xabc2,	// (0x000947b6) list_single_cale_mrui_row_pane_t2

0xe955,	// (0x00098549) list_single_cale_mrui_row_pane_t3_ParamLimits

0xe955,	// (0x00098549) list_single_cale_mrui_row_pane_t3

0xe984,	// (0x00098578) list_single_cale_mrui_row_pane_t4_ParamLimits

0xe984,	// (0x00098578) list_single_cale_mrui_row_pane_t4

0x0003,

0xfcf6,	// (0x000998ea) list_single_cale_mrui_row_pane_t_ParamLimits

0xfcf6,	// (0x000998ea) list_single_cale_mrui_row_pane_t

0xac2a,	// (0x0009481e) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0xac2a,	// (0x0009481e) list_single_cmail_header_editor_pane_bg_cp01

0xac50,	// (0x00094844) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0xac50,	// (0x00094844) list_single_cmail_header_editor_pane_bg_cp02

0xac70,	// (0x00094864) main_radioblah_text_pane_t1_ParamLimits

0xac70,	// (0x00094864) main_radioblah_text_pane_t1

0x1f77,	// (0x0008bb6b) cam6_indi_pane_cp01

0x1f7f,	// (0x0008bb73) cam6_mode_pane_cp01

0x1f87,	// (0x0008bb7b) cam6_pano_pane

0x1f90,	// (0x0008bb84) cam6_zoom_pane_cp01

0x1f98,	// (0x0008bb8c) cam6_pano_image_pane

0x1fa3,	// (0x0008bb97) cam6_pano_pane_g1

0x181e,	// (0x0008b412) cam6_pano_pane_g2

0x1fac,	// (0x0008bba0) cam6_pano_pane_g3

0x1fb5,	// (0x0008bba9) cam6_pano_pane_g4

0xdc6d,	// (0x00097861) cam6_pano_pane_g5

0x1fbe,	// (0x0008bbb2) cam6_pano_pane_g6

0x1fc8,	// (0x0008bbbc) cam6_pano_pane_g7

0x1fd0,	// (0x0008bbc4) cam6_pano_pane_g8

0x1fd9,	// (0x0008bbcd) cam6_pano_pane_g9

0x0008,

0xfcff,	// (0x000998f3) cam6_pano_pane_g

0x009f,	// (0x00089c93) main_browser_tag_pane

0x1e2f,	// (0x0008ba23) grid_navstr_albumart_pane

0x1fe4,	// (0x0008bbd8) cell_navstr_albumart_pane_ParamLimits

0x1fe4,	// (0x0008bbd8) cell_navstr_albumart_pane

0x2004,	// (0x0008bbf8) cell_navstr_albumart_pane_g1

0xcfc2,	// (0x00096bb6) cell_navstr_albumart_pane_g2

0xcfd2,	// (0x00096bc6) cell_navstr_albumart_pane_g3

0xcfca,	// (0x00096bbe) cell_navstr_albumart_pane_g4

0x0003,

0xfd12,	// (0x00099906) cell_navstr_albumart_pane_g

0xac8b,	// (0x0009487f) bt_list_pane_ParamLimits

0xac8b,	// (0x0009487f) bt_list_pane

0xac9f,	// (0x00094893) bt_list_pane_t1

0xacae,	// (0x000948a2) bt_list_pane_t2

0x0001,

0xfd1b,	// (0x0009990f) bt_list_pane_t

0x009f,	// (0x00089c93) main_cale_prevew_pane

0xacbd,	// (0x000948b1) popup_cale_preview_window_ParamLimits

0xacbd,	// (0x000948b1) popup_cale_preview_window

0x0739,	// (0x0008a32d) bg_popup_preview_window_pane_cp05_ParamLimits

0x0739,	// (0x0008a32d) bg_popup_preview_window_pane_cp05

0x200c,	// (0x0008bc00) list_cale_preview_pane_ParamLimits

0x200c,	// (0x0008bc00) list_cale_preview_pane

0xacd6,	// (0x000948ca) list_double_cale_preview_pane_ParamLimits

0xacd6,	// (0x000948ca) list_double_cale_preview_pane

0xe3cc,	// (0x00097fc0) list_single_cale_preview_pane_ParamLimits

0xe3cc,	// (0x00097fc0) list_single_cale_preview_pane

0xace8,	// (0x000948dc) list_single_cale_preview_pane_g1

0xacf0,	// (0x000948e4) list_single_cale_preview_pane_t1_ParamLimits

0xacf0,	// (0x000948e4) list_single_cale_preview_pane_t1

0xad05,	// (0x000948f9) list_double_cale_preview_pane_g1

0xad0d,	// (0x00094901) list_double_cale_preview_pane_t1_ParamLimits

0xad0d,	// (0x00094901) list_double_cale_preview_pane_t1

0xad22,	// (0x00094916) list_double_cale_preview_pane_t2_ParamLimits

0xad22,	// (0x00094916) list_double_cale_preview_pane_t2

0x0001,

0xfd20,	// (0x00099914) list_double_cale_preview_pane_t_ParamLimits

0xfd20,	// (0x00099914) list_double_cale_preview_pane_t

0x009f,	// (0x00089c93) main_ezdial_pane

0x0739,	// (0x0008a32d) main_sp_fs_email_pane_ParamLimits

0xa55e,	// (0x00094152) cmail_ddmenu_btn01_pane_ParamLimits

0xa55e,	// (0x00094152) cmail_ddmenu_btn01_pane

0xa571,	// (0x00094165) cmail_ddmenu_btn02_pane_ParamLimits

0xa571,	// (0x00094165) cmail_ddmenu_btn02_pane

0xa594,	// (0x00094188) cmail_ddmenu_btn03_pane_ParamLimits

0xa594,	// (0x00094188) cmail_ddmenu_btn03_pane

0xa62d,	// (0x00094221) main_sp_fs_ctrlbar_pane_ParamLimits

0xa651,	// (0x00094245) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0xa976,	// (0x0009456a) list_cmail_body_pane_ParamLimits

0x1daf,	// (0x0008b9a3) bg_button_pane_cp12

0x1db8,	// (0x0008b9ac) list_single_cmail_header_detail_pane_g3_ParamLimits

0x1db8,	// (0x0008b9ac) list_single_cmail_header_detail_pane_g3

0xe845,	// (0x00098439) list_single_cmail_header_detail_pane_t2_ParamLimits

0xe845,	// (0x00098439) list_single_cmail_header_detail_pane_t2

0x0001,

0xfca3,	// (0x00099897) list_single_cmail_header_detail_pane_t_ParamLimits

0xfca3,	// (0x00099897) list_single_cmail_header_detail_pane_t

0xe89d,	// (0x00098491) phacti_term_pane_t2_ParamLimits

0xe89d,	// (0x00098491) phacti_term_pane_t2

0x0001,

0xfcad,	// (0x000998a1) phacti_term_pane_t_ParamLimits

0xfcad,	// (0x000998a1) phacti_term_pane_t

0x2018,	// (0x0008bc0c) aid_size_list_single_double

0xad3a,	// (0x0009492e) popup_ezdial_listscroll_window

0xad56,	// (0x0009494a) popup_number_entry_window_cp01

0x09c4,	// (0x0008a5b8) bg_popup_call_pane_cp09

0x2024,	// (0x0008bc18) ezdial_list_pane

0x202c,	// (0x0008bc20) scroll_pane_cp23

0x58a6,	// (0x0008f49a) bg_button_pane_cp028_ParamLimits

0x58a6,	// (0x0008f49a) bg_button_pane_cp028

0xad64,	// (0x00094958) cmail_ddmenu_btn01_pane_g1_ParamLimits

0xad64,	// (0x00094958) cmail_ddmenu_btn01_pane_g1

0xad70,	// (0x00094964) cmail_ddmenu_btn01_pane_g2_ParamLimits

0xad70,	// (0x00094964) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfd25,	// (0x00099919) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfd25,	// (0x00099919) cmail_ddmenu_btn01_pane_g

0x2034,	// (0x0008bc28) cmail_ddmenu_btn01_pane_t1_ParamLimits

0x2034,	// (0x0008bc28) cmail_ddmenu_btn01_pane_t1

0x58a6,	// (0x0008f49a) bg_button_pane_cp029_ParamLimits

0x58a6,	// (0x0008f49a) bg_button_pane_cp029

0xad7c,	// (0x00094970) cmail_ddmenu_btn02_pane_g1_ParamLimits

0xad7c,	// (0x00094970) cmail_ddmenu_btn02_pane_g1

0xad94,	// (0x00094988) cmail_ddmenu_btn02_pane_t1_ParamLimits

0xad94,	// (0x00094988) cmail_ddmenu_btn02_pane_t1

0x0739,	// (0x0008a32d) bg_button_pane_cp031_ParamLimits

0x0739,	// (0x0008a32d) bg_button_pane_cp031

0xad7c,	// (0x00094970) cmail_ddmenu_btn03_pane_g1_ParamLimits

0xad7c,	// (0x00094970) cmail_ddmenu_btn03_pane_g1

0xad94,	// (0x00094988) cmail_ddmenu_btn03_pane_t1_ParamLimits

0xad94,	// (0x00094988) cmail_ddmenu_btn03_pane_t1

0x7fb2,	// (0x00091ba6) cell_dialer2_keypad_pane_t1_ParamLimits

0x7fcc,	// (0x00091bc0) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x7fcc,	// (0x00091bc0) cell_dialer2_keypad_pane_t1_copy1

0x9df7,	// (0x000939eb) ncimui_group_button_pane

0x0739,	// (0x0008a32d) main_sp_fs_calendar_pane_ParamLimits

0xa98c,	// (0x00094580) list_single_cmail_header_caption_pane_ParamLimits

0xe8b2,	// (0x000984a6) aid_recal_txt_sm_pane

0x009f,	// (0x00089c93) mian_recal_day_pane

0xe8ec,	// (0x000984e0) popup_sp_fs_cale_preview_window_ParamLimits

0x2049,	// (0x0008bc3d) list_recal_day_pane

0xe9ce,	// (0x000985c2) list_single_recal_day_pane_ParamLimits

0xe9ce,	// (0x000985c2) list_single_recal_day_pane

0x2070,	// (0x0008bc64) list_single_recal_day_pane_g1_ParamLimits

0x2070,	// (0x0008bc64) list_single_recal_day_pane_g1

0xe9e0,	// (0x000985d4) list_single_recal_day_pane_g2_ParamLimits

0xe9e0,	// (0x000985d4) list_single_recal_day_pane_g2

0xe9ec,	// (0x000985e0) list_single_recal_day_pane_g3_ParamLimits

0xe9ec,	// (0x000985e0) list_single_recal_day_pane_g3

0xadb8,	// (0x000949ac) list_single_recal_day_pane_g4_ParamLimits

0xadb8,	// (0x000949ac) list_single_recal_day_pane_g4

0xe9f8,	// (0x000985ec) list_single_recal_day_pane_g5_ParamLimits

0xe9f8,	// (0x000985ec) list_single_recal_day_pane_g5

0xea04,	// (0x000985f8) list_single_recal_day_pane_g6_ParamLimits

0xea04,	// (0x000985f8) list_single_recal_day_pane_g6

0x0004,

0xfd34,	// (0x00099928) list_single_recal_day_pane_g_ParamLimits

0xfd34,	// (0x00099928) list_single_recal_day_pane_g

0xea18,	// (0x0009860c) list_single_recal_day_pane_t1

0xea2a,	// (0x0009861e) list_single_recal_day_pane_t2

0x0001,

0xfd3f,	// (0x00099933) list_single_recal_day_pane_t

0xadd0,	// (0x000949c4) ncimui_query_button_pane_ParamLimits

0xadd0,	// (0x000949c4) ncimui_query_button_pane

0xade0,	// (0x000949d4) ncimui_query_button_pane_t1_ParamLimits

0xade0,	// (0x000949d4) ncimui_query_button_pane_t1

0x207c,	// (0x0008bc70) ncimui_query_button_pane_t2_ParamLimits

0x207c,	// (0x0008bc70) ncimui_query_button_pane_t2

0x0001,

0xfd44,	// (0x00099938) ncimui_query_button_pane_t_ParamLimits

0xfd44,	// (0x00099938) ncimui_query_button_pane_t

0xadf3,	// (0x000949e7) query_button_pane_ParamLimits

0xadf3,	// (0x000949e7) query_button_pane

0x009f,	// (0x00089c93) bg_button_pane_cp0028

0x208f,	// (0x0008bc83) query_button_pane_t1

0x6a4b,	// (0x0009063f) main_tport_pane_ParamLimits

0xa83a,	// (0x0009442e) bg_popup_window_pane_cp01_ParamLimits

0xa83a,	// (0x0009442e) bg_popup_window_pane_cp01

0xa855,	// (0x00094449) heading_pane_cp08_ParamLimits

0xa855,	// (0x00094449) heading_pane_cp08

0xa868,	// (0x0009445c) heading_pane_cp07_ParamLimits

0xa868,	// (0x0009445c) heading_pane_cp07

0xa90f,	// (0x00094503) cell_tport_appsw_pane_g2

0x0002,

0xfc90,	// (0x00099884) cell_tport_appsw_pane_g

0x5b34,	// (0x0008f728) input_candi_list_open_g1

0x4e84,	// (0x0008ea78) list_cale_time_pane_g6_ParamLimits

0x4e84,	// (0x0008ea78) list_cale_time_pane_g6

0x7066,	// (0x00090c5a) aid_size_touch_calib_1_ParamLimits

0x7066,	// (0x00090c5a) aid_size_touch_calib_1

0x7078,	// (0x00090c6c) aid_size_touch_calib_2_ParamLimits

0x7078,	// (0x00090c6c) aid_size_touch_calib_2

0x7090,	// (0x00090c84) aid_size_touch_calib_3_ParamLimits

0x7090,	// (0x00090c84) aid_size_touch_calib_3

0x70ae,	// (0x00090ca2) aid_size_touch_calib_4_ParamLimits

0x70ae,	// (0x00090ca2) aid_size_touch_calib_4

0x70c6,	// (0x00090cba) main_touch_calib_button_group_pane_ParamLimits

0x70c6,	// (0x00090cba) main_touch_calib_button_group_pane

0x70de,	// (0x00090cd2) main_touch_calib_pane_g1_ParamLimits

0x70f0,	// (0x00090ce4) main_touch_calib_pane_g2_ParamLimits

0x7102,	// (0x00090cf6) main_touch_calib_pane_g3_ParamLimits

0x7114,	// (0x00090d08) main_touch_calib_pane_g4_ParamLimits

0xf6d2,	// (0x000992c6) main_touch_calib_pane_g_ParamLimits

0x7126,	// (0x00090d1a) main_touch_calib_pane_t1_ParamLimits

0x7140,	// (0x00090d34) main_touch_calib_pane_t2_ParamLimits

0x715a,	// (0x00090d4e) main_touch_calib_pane_t3_ParamLimits

0x716e,	// (0x00090d62) main_touch_calib_pane_t4_ParamLimits

0x7182,	// (0x00090d76) main_touch_calib_pane_t5_ParamLimits

0xf6db,	// (0x000992cf) main_touch_calib_pane_t_ParamLimits

0xda33,	// (0x00097627) list_single_fp_cale_pane_g3_ParamLimits

0xda33,	// (0x00097627) list_single_fp_cale_pane_g3

0xc1eb,	// (0x00095ddf) bg_button_pane_cp012_ParamLimits

0xc1eb,	// (0x00095ddf) bg_vkb2_func_pane_cp03_ParamLimits

0x8fcb,	// (0x00092bbf) cell_vitu2_function_top_pane_g1_ParamLimits

0xc1eb,	// (0x00095ddf) bg_vkb2_func_pane_cp04_ParamLimits

0x9d82,	// (0x00093976) main_ncimui_button_group_pane_ParamLimits

0x9d82,	// (0x00093976) main_ncimui_button_group_pane

0x9de2,	// (0x000939d6) main_ncimui_pane_t3_ParamLimits

0x9de2,	// (0x000939d6) main_ncimui_pane_t3

0x1e45,	// (0x0008ba39) phacti_button_group_pane

0x2018,	// (0x0008bc0c) aid_size_list_single_double_ParamLimits

0xad3a,	// (0x0009492e) popup_ezdial_listscroll_window_ParamLimits

0xad56,	// (0x0009494a) popup_number_entry_window_cp01_ParamLimits

0xae06,	// (0x000949fa) phacti_button_pane_ParamLimits

0xae06,	// (0x000949fa) phacti_button_pane

0x009f,	// (0x00089c93) bg_button_pane_cp14

0x209d,	// (0x0008bc91) phacti_button_pane_t1

0xae17,	// (0x00094a0b) main_touch_calib_button_pane_ParamLimits

0xae17,	// (0x00094a0b) main_touch_calib_button_pane

0x0812,	// (0x0008a406) bg_button_pane_cp18_ParamLimits

0x0812,	// (0x0008a406) bg_button_pane_cp18

0x20ab,	// (0x0008bc9f) main_touch_calib_button_pane_t1_ParamLimits

0x20ab,	// (0x0008bc9f) main_touch_calib_button_pane_t1

0x20c1,	// (0x0008bcb5) main_touch_calib_button_pane_t2_ParamLimits

0x20c1,	// (0x0008bcb5) main_touch_calib_button_pane_t2

0x0001,

0xfd49,	// (0x0009993d) main_touch_calib_button_pane_t_ParamLimits

0xfd49,	// (0x0009993d) main_touch_calib_button_pane_t

0x009f,	// (0x00089c93) cell_ncimui_button_pane

0x009f,	// (0x00089c93) bg_button_pane_cp032

0x20df,	// (0x0008bcd3) cell_ncimui_button_pane_t1

0xe1ab,	// (0x00097d9f) image3_infobar_pane_ParamLimits

0xe1ab,	// (0x00097d9f) image3_infobar_pane

0xa1f7,	// (0x00093deb) fs_bigclock_status_pane_ParamLimits

0xa1f7,	// (0x00093deb) fs_bigclock_status_pane

0xa204,	// (0x00093df8) main_fs_bigclock_clock_pane_ParamLimits

0xa204,	// (0x00093df8) main_fs_bigclock_clock_pane

0xa222,	// (0x00093e16) main_fs_bigclock_indi_pane_ParamLimits

0xa222,	// (0x00093e16) main_fs_bigclock_indi_pane

0xa254,	// (0x00093e48) main_fs_bigclock_swipe_pane_ParamLimits

0xa254,	// (0x00093e48) main_fs_bigclock_swipe_pane

0x009f,	// (0x00089c93) main_fs_clock_dumped_data

0x192b,	// (0x0008b51f) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0x192b,	// (0x0008b51f) list_single_fs_bigclock_indicator_pane_g1

0x1947,	// (0x0008b53b) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0x1947,	// (0x0008b53b) list_single_fs_bigclock_indicator_pane_g2

0x1961,	// (0x0008b555) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0x1961,	// (0x0008b555) list_single_fs_bigclock_indicator_pane_g3

0x197b,	// (0x0008b56f) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0x197b,	// (0x0008b56f) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfbea,	// (0x000997de) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfbea,	// (0x000997de) list_single_fs_bigclock_indicator_pane_g

0x19a6,	// (0x0008b59a) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0x19a6,	// (0x0008b59a) list_single_fs_bigclock_indicator_pane_t1

0x19ce,	// (0x0008b5c2) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0x19ce,	// (0x0008b5c2) list_single_fs_bigclock_indicator_pane_t2

0x1a43,	// (0x0008b637) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0x1a43,	// (0x0008b637) list_single_fs_bigclock_indicator_pane_t3

0x1a6b,	// (0x0008b65f) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0x1a6b,	// (0x0008b65f) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfbf5,	// (0x000997e9) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfbf5,	// (0x000997e9) list_single_fs_bigclock_indicator_pane_t

0x20ed,	// (0x0008bce1) image3_infobar_fav_pane_ParamLimits

0x20ed,	// (0x0008bce1) image3_infobar_fav_pane

0x20fd,	// (0x0008bcf1) image3_infobar_loc_pane_ParamLimits

0x20fd,	// (0x0008bcf1) image3_infobar_loc_pane

0x2111,	// (0x0008bd05) image3_infobar_time_pane_ParamLimits

0x2111,	// (0x0008bd05) image3_infobar_time_pane

0x09fa,	// (0x0008a5ee) image3_infobar_time_pane_g1

0x2121,	// (0x0008bd15) image3_infobar_time_pane_t1

0x09fa,	// (0x0008a5ee) image3_infobar_loc_pane_g1

0x212f,	// (0x0008bd23) image3_infobar_loc_pane_g2

0x0001,

0xfd4e,	// (0x00099942) image3_infobar_loc_pane_g

0x2137,	// (0x0008bd2b) image3_infobar_loc_pane_t1

0x09fa,	// (0x0008a5ee) image3_infobar_fav_pane_g1

0x2145,	// (0x0008bd39) image3_infobar_fav_pane_g2

0x0001,

0xfd53,	// (0x00099947) image3_infobar_fav_pane_g

0x214d,	// (0x0008bd41) fs_bigclock_status_battery_pane

0x2156,	// (0x0008bd4a) fs_bigclock_status_signal_pane

0x215f,	// (0x0008bd53) fs_bigclock_status_title_pane

0x2168,	// (0x0008bd5c) fs_bigclock_status_signal_pane_g1

0x2171,	// (0x0008bd65) fs_bigclock_status_signal_pane_g2

0x0001,

0xfd58,	// (0x0009994c) fs_bigclock_status_signal_pane_g

0x2179,	// (0x0008bd6d) fs_bigclock_status_battery_pane_g1

0x2182,	// (0x0008bd76) fs_bigclock_status_battery_pane_g2

0x0001,

0xfd5d,	// (0x00099951) fs_bigclock_status_battery_pane_g

0x218a,	// (0x0008bd7e) fs_bigclock_status_title_pane_t1

0xae2c,	// (0x00094a20) main_fs_bigclock_clock_pane_g1

0xae2c,	// (0x00094a20) main_fs_bigclock_clock_pane_g2

0xae3d,	// (0x00094a31) main_fs_bigclock_clock_pane_g3

0xae3d,	// (0x00094a31) main_fs_bigclock_clock_pane_g4

0x0003,

0xfd62,	// (0x00099956) main_fs_bigclock_clock_pane_g

0xae50,	// (0x00094a44) main_fs_bigclock_clock_pane_t1

0xae66,	// (0x00094a5a) main_fs_bigclock_clock_pane_t2

0x0001,

0xfd6b,	// (0x0009995f) main_fs_bigclock_clock_pane_t

0x2198,	// (0x0008bd8c) list_single_fs_bigclock_indicator_pane_ParamLimits

0x2198,	// (0x0008bd8c) list_single_fs_bigclock_indicator_pane

0x21a9,	// (0x0008bd9d) list_single_fs_bigclock_pane_ParamLimits

0x21a9,	// (0x0008bd9d) list_single_fs_bigclock_pane

0x21cf,	// (0x0008bdc3) main_fs_bigclock_indicator_pane_t1

0x21de,	// (0x0008bdd2) list_single_fs_bigclock_pane_g1

0x21e6,	// (0x0008bdda) list_single_fs_bigclock_pane_t1

0x09fa,	// (0x0008a5ee) main_fs_bigclock_swipe_pane_g1

0x2229,	// (0x0008be1d) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfd7c,	// (0x00099970) main_fs_bigclock_swipe_pane_g

0x2231,	// (0x0008be25) main_fs_bigclock_swipe_pane_t1_ParamLimits

0x2231,	// (0x0008be25) main_fs_bigclock_swipe_pane_t1

0x5168,	// (0x0008ed5c) call_type_pane_ParamLimits

0x009f,	// (0x00089c93) main_btmg_pane

0xe937,	// (0x0009852b) list_single_cale_mrui_row_pane_g2_ParamLimits

0xe937,	// (0x0009852b) list_single_cale_mrui_row_pane_g2

0x0002,

0xfcef,	// (0x000998e3) list_single_cale_mrui_row_pane_g_ParamLimits

0xfcef,	// (0x000998e3) list_single_cale_mrui_row_pane_g

0xe9bd,	// (0x000985b1) list_recal_vselct_arw_lo_pane

0x2068,	// (0x0008bc5c) list_recal_vselct_arw_up_pane

0xe9c5,	// (0x000985b9) list_recal_vselct_pane

0xaec0,	// (0x00094ab4) btmg_button_pane

0xaeca,	// (0x00094abe) main_btmg_pane_g1

0x009f,	// (0x00089c93) bg_button_pane_cp044

0x224e,	// (0x0008be42) btmg_button_pane_t1

0xd152,	// (0x00096d46) aid_listscroll_gen

0x0739,	// (0x0008a32d) main_cntbar_detail_pane

0x1d91,	// (0x0008b985) list_cmail_folder_pane

0x1a1c,	// (0x0008b610) sp_fs_scroll_pane_cp03_ParamLimits

0xaed4,	// (0x00094ac8) list_single_fs_dyc_pane_cp01_ParamLimits

0xaed4,	// (0x00094ac8) list_single_fs_dyc_pane_cp01

0x225c,	// (0x0008be50) aid_size_cmail_indent

0xea3c,	// (0x00098630) list_single_dyc_row_pane_cp01

0xaf1c,	// (0x00094b10) cntbar_detail_list_pane_ParamLimits

0xaf1c,	// (0x00094b10) cntbar_detail_list_pane

0xaf68,	// (0x00094b5c) main_cntbar_detail_cont_pane_ParamLimits

0xaf68,	// (0x00094b5c) main_cntbar_detail_cont_pane

0x1a1c,	// (0x0008b610) scroll_pane_cp032_ParamLimits

0x1a1c,	// (0x0008b610) scroll_pane_cp032

0xaf7c,	// (0x00094b70) cntbar_detail_list_event_pane_ParamLimits

0xaf7c,	// (0x00094b70) cntbar_detail_list_event_pane

0xaf2c,	// (0x00094b20) cntbar_detail_list_shct_pane

0x0c6d,	// (0x0008a861) aid_list_gen

0x2265,	// (0x0008be59) aid_scroll

0x226e,	// (0x0008be62) aid_size_touch_scroll_bar

0xa3e3,	// (0x00093fd7) aid_list_double

0xaf8c,	// (0x00094b80) aid_list_single

0x1a28,	// (0x0008b61c) aid_list_single_lg

0xaf95,	// (0x00094b89) aid_list_z_g_a_sm

0xaf9d,	// (0x00094b91) aid_list_z_g_d

0xafa5,	// (0x00094b99) aid_txt_z_prm

0xafb3,	// (0x00094ba7) aid_txt_z_prm_cp01

0xafc1,	// (0x00094bb5) aid_txt_z_sec

0xafcf,	// (0x00094bc3) main_cntbar_detail_cont_pane_g1_ParamLimits

0xafcf,	// (0x00094bc3) main_cntbar_detail_cont_pane_g1

0xafe3,	// (0x00094bd7) main_cntbar_detail_cont_pane_g2_ParamLimits

0xafe3,	// (0x00094bd7) main_cntbar_detail_cont_pane_g2

0x0001,

0xfd81,	// (0x00099975) main_cntbar_detail_cont_pane_g_ParamLimits

0xfd81,	// (0x00099975) main_cntbar_detail_cont_pane_g

0x2277,	// (0x0008be6b) main_cntbar_detail_cont_pane_t1

0x2285,	// (0x0008be79) main_cntbar_detail_cont_pane_t2

0x2293,	// (0x0008be87) main_cntbar_detail_cont_pane_t3

0x0002,

0xfd86,	// (0x0009997a) main_cntbar_detail_cont_pane_t

0xaff3,	// (0x00094be7) cell_cntbar_detail_list_shct_pane_ParamLimits

0xaff3,	// (0x00094be7) cell_cntbar_detail_list_shct_pane

0x22a1,	// (0x0008be95) cntbar_detail_list_shct_pane_g1

0x22aa,	// (0x0008be9e) cntbar_detail_list_shct_pane_g2

0x0001,

0xfd8d,	// (0x00099981) cntbar_detail_list_shct_pane_g

0xb007,	// (0x00094bfb) cntbar_detail_list_event_pane_g1_ParamLimits

0xb007,	// (0x00094bfb) cntbar_detail_list_event_pane_g1

0xb013,	// (0x00094c07) cntbar_detail_list_event_pane_g2_ParamLimits

0xb013,	// (0x00094c07) cntbar_detail_list_event_pane_g2

0x0005,

0xfd92,	// (0x00099986) cntbar_detail_list_event_pane_g_ParamLimits

0xfd92,	// (0x00099986) cntbar_detail_list_event_pane_g

0xb07f,	// (0x00094c73) cntbar_detail_list_event_pane_t1_ParamLimits

0xb07f,	// (0x00094c73) cntbar_detail_list_event_pane_t1

0xb094,	// (0x00094c88) cntbar_detail_list_event_pane_t2_ParamLimits

0xb094,	// (0x00094c88) cntbar_detail_list_event_pane_t2

0x0002,

0xfd9f,	// (0x00099993) cntbar_detail_list_event_pane_t_ParamLimits

0xfd9f,	// (0x00099993) cntbar_detail_list_event_pane_t

0x09fa,	// (0x0008a5ee) cell_cntbar_detail_list_shct_pane_g1

0x5755,	// (0x0008f349) navi_pane_mv_g3

0x0739,	// (0x0008a32d) main_cntbar_detail_pane_ParamLimits

0x009f,	// (0x00089c93) main_notif_wgt_pane

0xdf06,	// (0x00097afa) aid_tch_main_mp4_pane_g4

0xe138,	// (0x00097d2c) popup_slider_window_cp02

0xe9b3,	// (0x000985a7) list_recal_day_event_pane

0xaeea,	// (0x00094ade) cntbar_detail_btn_pane_ParamLimits

0xaeea,	// (0x00094ade) cntbar_detail_btn_pane

0xaf03,	// (0x00094af7) cntbar_detail_btn_pane_cp01_ParamLimits

0xaf03,	// (0x00094af7) cntbar_detail_btn_pane_cp01

0xaf2c,	// (0x00094b20) cntbar_detail_list_shct_pane_ParamLimits

0xaf3c,	// (0x00094b30) cntbar_detail_pane_g1_ParamLimits

0xaf3c,	// (0x00094b30) cntbar_detail_pane_g1

0xaf4c,	// (0x00094b40) cntbar_detail_pane_t1_ParamLimits

0xaf4c,	// (0x00094b40) cntbar_detail_pane_t1

0xb01f,	// (0x00094c13) cntbar_detail_list_event_pane_g3_ParamLimits

0xb01f,	// (0x00094c13) cntbar_detail_list_event_pane_g3

0xb037,	// (0x00094c2b) cntbar_detail_list_event_pane_g4_ParamLimits

0xb037,	// (0x00094c2b) cntbar_detail_list_event_pane_g4

0xb04f,	// (0x00094c43) cntbar_detail_list_event_pane_g5_ParamLimits

0xb04f,	// (0x00094c43) cntbar_detail_list_event_pane_g5

0xb067,	// (0x00094c5b) cntbar_detail_list_event_pane_g6_ParamLimits

0xb067,	// (0x00094c5b) cntbar_detail_list_event_pane_g6

0xb0a9,	// (0x00094c9d) cntbar_detail_list_event_pane_t3_ParamLimits

0xb0a9,	// (0x00094c9d) cntbar_detail_list_event_pane_t3

0xb0bb,	// (0x00094caf) popup_notif_wgt_window_ParamLimits

0xb0bb,	// (0x00094caf) popup_notif_wgt_window

0xb0d4,	// (0x00094cc8) popup_submenu_window_cp01_ParamLimits

0xb0d4,	// (0x00094cc8) popup_submenu_window_cp01

0x09c4,	// (0x0008a5b8) bg_popup_window_pane_cp10

0x22b3,	// (0x0008bea7) listscroll_notif_wgt_pane

0x22c5,	// (0x0008beb9) list_notif_wgt_window

0x22ce,	// (0x0008bec2) scroll_pane_cp033

0xb0e6,	// (0x00094cda) list_notif_wgt_row_pane_ParamLimits

0xb0e6,	// (0x00094cda) list_notif_wgt_row_pane

0x22d7,	// (0x0008becb) aid_size_list_notif_wgt_del

0x22e4,	// (0x0008bed8) list_notif_wgt_row_pane_g1

0x22f0,	// (0x0008bee4) list_notif_wgt_row_pane_g2

0x22ff,	// (0x0008bef3) list_notif_wgt_row_pane_g3

0x0002,

0xfda6,	// (0x0009999a) list_notif_wgt_row_pane_g

0x230c,	// (0x0008bf00) list_notif_wgt_row_pane_t1

0xea45,	// (0x00098639) list_notif_wgt_row_pane_t2

0xea57,	// (0x0009864b) list_notif_wgt_row_pane_t3

0x0002,

0xfdad,	// (0x000999a1) list_notif_wgt_row_pane_t

0x0e24,	// (0x0008aa18) list_recal_day_event_pane_g1

0xea69,	// (0x0009865d) list_recal_day_event_pane_t1

0x009f,	// (0x00089c93) bg_button_pane_cp045

0xb0f6,	// (0x00094cea) cntbar_detail_btn_pane_t1

0x58a6,	// (0x0008f49a) main_callh_pane_ParamLimits

0x58a6,	// (0x0008f49a) main_callh_pane

0x009f,	// (0x00089c93) main_coverflow0_pane

0x009f,	// (0x00089c93) main_wgtman_pane

0xa26c,	// (0x00093e60) main_fs_bigclock_unlock_btn_pane_ParamLimits

0xa26c,	// (0x00093e60) main_fs_bigclock_unlock_btn_pane

0xa907,	// (0x000944fb) bg_button_pane_cp16

0xa917,	// (0x0009450b) cell_tport_appsw_pane_g3

0xb104,	// (0x00094cf8) cf0_flow_pane_ParamLimits

0xb104,	// (0x00094cf8) cf0_flow_pane

0xea78,	// (0x0009866c) listscroll_cf0_pane

0xea83,	// (0x00098677) main_cf0_pane_g1

0xb119,	// (0x00094d0d) main_cf0_pane_t1_ParamLimits

0xb119,	// (0x00094d0d) main_cf0_pane_t1

0xb130,	// (0x00094d24) main_cf0_pane_t2_ParamLimits

0xb130,	// (0x00094d24) main_cf0_pane_t2

0x0001,

0xfdb9,	// (0x000999ad) main_cf0_pane_t_ParamLimits

0xfdb9,	// (0x000999ad) main_cf0_pane_t

0xea95,	// (0x00098689) scroll_pane_cp11

0xb147,	// (0x00094d3b) cf0_flow_pane_g1

0xb14f,	// (0x00094d43) cf0_flow_pane_g2

0x0001,

0xfdbe,	// (0x000999b2) cf0_flow_pane_g

0xb157,	// (0x00094d4b) cf0_flow_pane_t1

0x009f,	// (0x00089c93) main_call6_pane

0x009f,	// (0x00089c93) main_calllock_pane

0xb165,	// (0x00094d59) call6_btn_grp_pane_ParamLimits

0xb165,	// (0x00094d59) call6_btn_grp_pane

0xb17f,	// (0x00094d73) call6_pane_g1_ParamLimits

0xb17f,	// (0x00094d73) call6_pane_g1

0xb195,	// (0x00094d89) popup_call6_1st_window_ParamLimits

0xb195,	// (0x00094d89) popup_call6_1st_window

0xb1a6,	// (0x00094d9a) popup_call6_2nd_window_ParamLimits

0xb1a6,	// (0x00094d9a) popup_call6_2nd_window

0xb1b7,	// (0x00094dab) cell_call6_btn_pane_ParamLimits

0xb1b7,	// (0x00094dab) cell_call6_btn_pane

0x09c4,	// (0x0008a5b8) bg_popup_call2_in_pane_cp03

0xeaa0,	// (0x00098694) popup_call6_1st_window_g1

0xeaa8,	// (0x0009869c) popup_call6_1st_window_g2

0xeab0,	// (0x000986a4) popup_call6_1st_window_g3

0x0002,

0xfdc3,	// (0x000999b7) popup_call6_1st_window_g

0xeab8,	// (0x000986ac) popup_call6_1st_window_t1

0xeac7,	// (0x000986bb) popup_call6_1st_window_t2

0xead5,	// (0x000986c9) popup_call6_1st_window_t3

0x0002,

0xfdca,	// (0x000999be) popup_call6_1st_window_t

0x09c4,	// (0x0008a5b8) bg_popup_call2_in_pane_cp04

0xeae3,	// (0x000986d7) popup_call6_2nd_window_g1

0xeaeb,	// (0x000986df) popup_call6_2nd_window_g2

0xeaf3,	// (0x000986e7) popup_call6_2nd_window_g3

0x0002,

0xfdd1,	// (0x000999c5) popup_call6_2nd_window_g

0xeafb,	// (0x000986ef) popup_call6_2nd_window_t1

0xc1f9,	// (0x00095ded) bg_button_pane_cp15

0xf053,	// (0x00098c47) cell_call6_btn_pane_g1

0xf05c,	// (0x00098c50) cell_call6_btn_pane_t1

0xb1cb,	// (0x00094dbf) listscroll_wgtman_pane_ParamLimits

0xb1cb,	// (0x00094dbf) listscroll_wgtman_pane

0xb1ec,	// (0x00094de0) wgtman_btn_pane_ParamLimits

0xb1ec,	// (0x00094de0) wgtman_btn_pane

0x5390,	// (0x0008ef84) aid_scroll_copy1

0xeb0a,	// (0x000986fe) list_wgtman_pane

0xb22f,	// (0x00094e23) wgtman_btn_pane_g1_ParamLimits

0xb22f,	// (0x00094e23) wgtman_btn_pane_g1

0xb25b,	// (0x00094e4f) wgtman_btn_pane_t1_ParamLimits

0xb25b,	// (0x00094e4f) wgtman_btn_pane_t1

0xeb14,	// (0x00098708) wgtman_btn_pane_t2_ParamLimits

0xeb14,	// (0x00098708) wgtman_btn_pane_t2

0x0001,

0xfdd8,	// (0x000999cc) wgtman_btn_pane_t_ParamLimits

0xfdd8,	// (0x000999cc) wgtman_btn_pane_t

0xb298,	// (0x00094e8c) listrow_wgtman_pane_ParamLimits

0xb298,	// (0x00094e8c) listrow_wgtman_pane

0xb2ab,	// (0x00094e9f) listrow_wgtman_pane_g1

0xb2b8,	// (0x00094eac) listrow_wgtman_pane_g2

0x0001,

0xfddd,	// (0x000999d1) listrow_wgtman_pane_g

0xb2d6,	// (0x00094eca) listrow_wgtman_pane_t1

0xb2ee,	// (0x00094ee2) listrow_wgtman_pane_t2

0x0001,

0xfde2,	// (0x000999d6) listrow_wgtman_pane_t

0xb314,	// (0x00094f08) wait_bar_pane_cp09

0xeb2b,	// (0x0009871f) main_calllock_btn_pane

0xeb35,	// (0x00098729) main_calllock_pane_g1

0x009f,	// (0x00089c93) bg_button_pane_cp17

0xeb3d,	// (0x00098731) main_calllock_btn_pane_g1

0xeb46,	// (0x0009873a) main_calllock_btn_pane_t1

0x009f,	// (0x00089c93) main_dialer3_pane

0x009f,	// (0x00089c93) main_fmrd2_pane

0x09fa,	// (0x0008a5ee) main_fs_bigclock_unlock_btn_pane_g1

0xb32e,	// (0x00094f22) main_fs_bigclock_unlock_btn_pane_t1

0xb33c,	// (0x00094f30) area_fmrd2_info_pane_ParamLimits

0xb33c,	// (0x00094f30) area_fmrd2_info_pane

0xb34d,	// (0x00094f41) area_fmrd2_visual_pane_ParamLimits

0xb34d,	// (0x00094f41) area_fmrd2_visual_pane

0xb35b,	// (0x00094f4f) fmrd2_indi_pane_ParamLimits

0xb35b,	// (0x00094f4f) fmrd2_indi_pane

0xb368,	// (0x00094f5c) area_fmrd2_visual_pane_g1

0xb370,	// (0x00094f64) area_fmrd2_visual_pane_t1

0xb380,	// (0x00094f74) area_fmrd2_visual_pane_t2

0xb390,	// (0x00094f84) area_fmrd2_visual_pane_t3

0x0002,

0xfdec,	// (0x000999e0) area_fmrd2_visual_pane_t

0xb3a0,	// (0x00094f94) area_fmrd2_info_pane_g1

0xb3a8,	// (0x00094f9c) area_fmrd2_info_pane_t1

0xb3b8,	// (0x00094fac) area_fmrd2_info_pane_t2

0xb3c8,	// (0x00094fbc) area_fmrd2_info_pane_t3

0xb3d8,	// (0x00094fcc) area_fmrd2_info_pane_t4

0x0003,

0xfdf3,	// (0x000999e7) area_fmrd2_info_pane_t

0xb3e6,	// (0x00094fda) fmrd2_indi_pane_t1

0xb3f6,	// (0x00094fea) fmrd2_indi_pane_t2

0xb406,	// (0x00094ffa) fmrd2_indi_pane_t3

0x0002,

0xfdfc,	// (0x000999f0) fmrd2_indi_pane_t

0x198a,	// (0x0008b57e) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0x198a,	// (0x0008b57e) list_single_fs_bigclock_indicator_pane_g5

0x1a88,	// (0x0008b67c) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0x1a88,	// (0x0008b67c) list_single_fs_bigclock_indicator_pane_t5

0xaaa5,	// (0x00094699) aid_cell_bcale_month_pane_ParamLimits

0xaaa5,	// (0x00094699) aid_cell_bcale_month_pane

0xaac3,	// (0x000946b7) bcale_month_pane_ParamLimits

0xaac3,	// (0x000946b7) bcale_month_pane

0xaae7,	// (0x000946db) bcale_preview_pane_ParamLimits

0xaae7,	// (0x000946db) bcale_preview_pane

0x21e6,	// (0x0008bdda) list_single_fs_bigclock_pane_t1_ParamLimits

0x2205,	// (0x0008bdf9) list_single_fs_bigclock_pane_t2_ParamLimits

0x2205,	// (0x0008bdf9) list_single_fs_bigclock_pane_t2

0x0001,

0xfd77,	// (0x0009996b) list_single_fs_bigclock_pane_t_ParamLimits

0xfd77,	// (0x0009996b) list_single_fs_bigclock_pane_t

0xb326,	// (0x00094f1a) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfde7,	// (0x000999db) main_fs_bigclock_unlock_btn_pane_g

0xb416,	// (0x0009500a) aid_dia3_key_size_ParamLimits

0xb416,	// (0x0009500a) aid_dia3_key_size

0xb425,	// (0x00095019) aid_dia3_listrow_size_ParamLimits

0xb425,	// (0x00095019) aid_dia3_listrow_size

0xb43a,	// (0x0009502e) dia3_keypad_fun_pane_ParamLimits

0xb43a,	// (0x0009502e) dia3_keypad_fun_pane

0xb456,	// (0x0009504a) dia3_keypad_num_pane_ParamLimits

0xb456,	// (0x0009504a) dia3_keypad_num_pane

0xb471,	// (0x00095065) dia3_listscroll_pane_ParamLimits

0xb471,	// (0x00095065) dia3_listscroll_pane

0xb484,	// (0x00095078) dia3_numentry_pane_ParamLimits

0xb484,	// (0x00095078) dia3_numentry_pane

0xeb55,	// (0x00098749) dia3_list_pane

0xeb60,	// (0x00098754) scroll_pane_cp12

0x009f,	// (0x00089c93) bg_dia3_numentry_pane

0xb49c,	// (0x00095090) dia3_numentry_pane_t1

0xb4ab,	// (0x0009509f) cell_dia3_key_num_pane

0xb4b3,	// (0x000950a7) cell_dia3_key0_fun_pane_ParamLimits

0xb4b3,	// (0x000950a7) cell_dia3_key0_fun_pane

0xb4c7,	// (0x000950bb) cell_dia3_key1_fun_pane_ParamLimits

0xb4c7,	// (0x000950bb) cell_dia3_key1_fun_pane

0xb4df,	// (0x000950d3) dia3_listrow_pane

0x16dd,	// (0x0008b2d1) bg_dia3_numentry_pane_g1

0x009f,	// (0x00089c93) bg_button_pane_cp21

0xeb6b,	// (0x0009875f) cell_dia3_key_num_pane_t1

0xeb79,	// (0x0009876d) cell_dia3_key_num_pane_t2

0xeb88,	// (0x0009877c) cell_dia3_key_num_pane_t3

0xeb97,	// (0x0009878b) cell_dia3_key_num_pane_t4

0x0003,

0xfe03,	// (0x000999f7) cell_dia3_key_num_pane_t

0x009f,	// (0x00089c93) bg_button_pane_cp19

0xb4f1,	// (0x000950e5) cell_dia3_key0_fun_pane_g1

0x009f,	// (0x00089c93) bg_button_pane_cp20

0xb4f9,	// (0x000950ed) cell_dia3_key1_fun_pane_g1

0xb501,	// (0x000950f5) area_left_week_number_pane

0xb50d,	// (0x00095101) area_top_day_name_pane

0xb520,	// (0x00095114) frame_month_view_pane

0xeba6,	// (0x0009879a) grid_month_view_pane

0xb533,	// (0x00095127) cell_top_day_name_pane_ParamLimits

0xb533,	// (0x00095127) cell_top_day_name_pane

0xb560,	// (0x00095154) cell_area_left_week_number_pane_ParamLimits

0xb560,	// (0x00095154) cell_area_left_week_number_pane

0xb574,	// (0x00095168) cell_month_view_pane_ParamLimits

0xb574,	// (0x00095168) cell_month_view_pane

0xebb4,	// (0x000987a8) frm_month_g1

0xb5a1,	// (0x00095195) frm_month_g2

0xb5b4,	// (0x000951a8) frm_month_g3

0xb5c7,	// (0x000951bb) frm_month_g4

0xb5da,	// (0x000951ce) frm_month_g5

0xb5ed,	// (0x000951e1) frm_month_g6

0xb600,	// (0x000951f4) frm_month_g7

0xebc1,	// (0x000987b5) frm_month_g8

0xb613,	// (0x00095207) frm_month_g9

0xb623,	// (0x00095217) frm_month_g10

0xb633,	// (0x00095227) frm_month_g11

0xb643,	// (0x00095237) frm_month_g12

0xb655,	// (0x00095249) frm_month_g13

0xb667,	// (0x0009525b) frm_month_g14

0xb67b,	// (0x0009526f) frm_month_g15

0xb68f,	// (0x00095283) frm_month_g16

0x000f,

0xfe0c,	// (0x00099a00) frm_month_g

0xebce,	// (0x000987c2) cell_top_day_name_pane_t1

0xb6a3,	// (0x00095297) cell_area_left_week_number_pane_g1

0xb6af,	// (0x000952a3) cell_area_left_week_number_pane_t1

0x07a0,	// (0x0008a394) cell_month_view_pane_g1

0xb6c2,	// (0x000952b6) cell_month_view_pane_t1

0x009f,	// (0x00089c93) main_fps_pane

0x1c9c,	// (0x0008b890) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0x1c9c,	// (0x0008b890) cmail_ddmenu_btn02_pane_cp1

0x1cb8,	// (0x0008b8ac) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0x1cb8,	// (0x0008b8ac) cmail_ddmenu_btn02_pane_cp2

0xad88,	// (0x0009497c) cmail_ddmenu_btn02_pane_g2_ParamLimits

0xad88,	// (0x0009497c) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfd2a,	// (0x0009991e) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfd2a,	// (0x0009991e) cmail_ddmenu_btn02_pane_g

0xada6,	// (0x0009499a) cmail_ddmenu_btn02_pane_t2_ParamLimits

0xada6,	// (0x0009499a) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfd2f,	// (0x00099923) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfd2f,	// (0x00099923) cmail_ddmenu_btn02_pane_t

0xb6d5,	// (0x000952c9) fps_text_pane_ParamLimits

0xb6d5,	// (0x000952c9) fps_text_pane

0xb6ec,	// (0x000952e0) main_fps_pane_g1_ParamLimits

0xb6ec,	// (0x000952e0) main_fps_pane_g1

0xb706,	// (0x000952fa) wait_bar_pane_cp010_ParamLimits

0xb706,	// (0x000952fa) wait_bar_pane_cp010

0xb717,	// (0x0009530b) fps_text_pane_t1_ParamLimits

0xb717,	// (0x0009530b) fps_text_pane_t1

0x1a31,	// (0x0008b625) cam4_image_uncrop_pane_g1

0x1a3a,	// (0x0008b62e) cam4_image_uncrop_pane_g2

0x84e9,	// (0x000920dd) cam4_image_uncrop_pane_g3

0x84f2,	// (0x000920e6) cam4_image_uncrop_pane_g4

0x0003,

0xf86e,	// (0x00099462) cam4_image_uncrop_pane_g

0xb4df,	// (0x000950d3) dia3_listrow_pane_ParamLimits

0x009f,	// (0x00089c93) main_phob2_pane

0xa8d8,	// (0x000944cc) cell_tport_appsw_pane_cp02_ParamLimits

0xa8d8,	// (0x000944cc) cell_tport_appsw_pane_cp02

0xa8ec,	// (0x000944e0) cell_tport_appsw_pane_cp03_ParamLimits

0xa8ec,	// (0x000944e0) cell_tport_appsw_pane_cp03

0x009f,	// (0x00089c93) phob2_contact_card_pane

0x009f,	// (0x00089c93) phob2_listscroll_pane

0xebe1,	// (0x000987d5) phob2_list_pane

0xebe9,	// (0x000987dd) scroll_pane_cp034

0xb72f,	// (0x00095323) phob2_cc_data_pane_ParamLimits

0xb72f,	// (0x00095323) phob2_cc_data_pane

0xb74e,	// (0x00095342) phob2_cc_listscroll_pane_ParamLimits

0xb74e,	// (0x00095342) phob2_cc_listscroll_pane

0xb298,	// (0x00094e8c) list_double_large_graphic_phob2_pane_ParamLimits

0xb298,	// (0x00094e8c) list_double_large_graphic_phob2_pane

0xb76c,	// (0x00095360) list_double_large_graphic_phob2_pane_g1_ParamLimits

0xb76c,	// (0x00095360) list_double_large_graphic_phob2_pane_g1

0xb779,	// (0x0009536d) list_double_large_graphic_phob2_pane_g2_ParamLimits

0xb779,	// (0x0009536d) list_double_large_graphic_phob2_pane_g2

0x0003,

0xfe2d,	// (0x00099a21) list_double_large_graphic_phob2_pane_g_ParamLimits

0xfe2d,	// (0x00099a21) list_double_large_graphic_phob2_pane_g

0xb79f,	// (0x00095393) list_double_large_graphic_phob2_pane_t1_ParamLimits

0xb79f,	// (0x00095393) list_double_large_graphic_phob2_pane_t1

0xb7b4,	// (0x000953a8) list_double_large_graphic_phob2_pane_t2_ParamLimits

0xb7b4,	// (0x000953a8) list_double_large_graphic_phob2_pane_t2

0x0001,

0xfe36,	// (0x00099a2a) list_double_large_graphic_phob2_pane_t_ParamLimits

0xfe36,	// (0x00099a2a) list_double_large_graphic_phob2_pane_t

0x009f,	// (0x00089c93) list_highlight_pane_cp024

0xebf1,	// (0x000987e5) phob2_cc_button_pane

0xb7c9,	// (0x000953bd) phob2_cc_data_pane_g1_ParamLimits

0xb7c9,	// (0x000953bd) phob2_cc_data_pane_g1

0xb7e0,	// (0x000953d4) phob2_cc_data_pane_g2_ParamLimits

0xb7e0,	// (0x000953d4) phob2_cc_data_pane_g2

0x0001,

0xfe3b,	// (0x00099a2f) phob2_cc_data_pane_g_ParamLimits

0xfe3b,	// (0x00099a2f) phob2_cc_data_pane_g

0xb7f2,	// (0x000953e6) phob2_cc_data_pane_t1_ParamLimits

0xb7f2,	// (0x000953e6) phob2_cc_data_pane_t1

0xb80a,	// (0x000953fe) phob2_cc_data_pane_t2_ParamLimits

0xb80a,	// (0x000953fe) phob2_cc_data_pane_t2

0xb822,	// (0x00095416) phob2_cc_data_pane_t3_ParamLimits

0xb822,	// (0x00095416) phob2_cc_data_pane_t3

0x0002,

0xfe40,	// (0x00099a34) phob2_cc_data_pane_t_ParamLimits

0xfe40,	// (0x00099a34) phob2_cc_data_pane_t

0xebf9,	// (0x000987ed) phob2_cc_list_pane_ParamLimits

0xebf9,	// (0x000987ed) phob2_cc_list_pane

0x1600,	// (0x0008b1f4) scroll_pane_cp035_ParamLimits

0x1600,	// (0x0008b1f4) scroll_pane_cp035

0x0739,	// (0x0008a32d) bg_button_pane_cp033

0xec05,	// (0x000987f9) phob2_cc_button_pane_g1

0xec11,	// (0x00098805) phob2_cc_button_pane_t1

0xec26,	// (0x0009881a) phob2_cc_button_pane_t2

0x0001,

0xfe47,	// (0x00099a3b) phob2_cc_button_pane_t

0xb83a,	// (0x0009542e) list_double_large_graphic_phob2_cc_pane_ParamLimits

0xb83a,	// (0x0009542e) list_double_large_graphic_phob2_cc_pane

0xb86c,	// (0x00095460) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0xb86c,	// (0x00095460) list_double_large_graphic_phob2_cc_pane_g1

0xb878,	// (0x0009546c) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0xb878,	// (0x0009546c) list_double_large_graphic_phob2_cc_pane_g2

0xb884,	// (0x00095478) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0xb884,	// (0x00095478) list_double_large_graphic_phob2_cc_pane_g3

0xb890,	// (0x00095484) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0xb890,	// (0x00095484) list_double_large_graphic_phob2_cc_pane_g4

0xb89c,	// (0x00095490) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0xb89c,	// (0x00095490) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xfe4c,	// (0x00099a40) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xfe4c,	// (0x00099a40) list_double_large_graphic_phob2_cc_pane_g

0xb8a8,	// (0x0009549c) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0xb8a8,	// (0x0009549c) list_double_large_graphic_phob2_cc_pane_t1

0xb8d1,	// (0x000954c5) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0xb8d1,	// (0x000954c5) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xfe57,	// (0x00099a4b) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xfe57,	// (0x00099a4b) list_double_large_graphic_phob2_cc_pane_t

0xec38,	// (0x0009882c) list_highlight_pane_cp025_ParamLimits

0xec38,	// (0x0009882c) list_highlight_pane_cp025

0x0739,	// (0x0008a32d) bg_button_pane_cp033_ParamLimits

0xec05,	// (0x000987f9) phob2_cc_button_pane_g1_ParamLimits

0xec11,	// (0x00098805) phob2_cc_button_pane_t1_ParamLimits

0xec26,	// (0x0009881a) phob2_cc_button_pane_t2_ParamLimits

0xfe47,	// (0x00099a3b) phob2_cc_button_pane_t_ParamLimits

0x34be,	// (0x0008d0b2) popup_wgtman_window

0xe4ae,	// (0x000980a2) scroll_pane_cp038

0xb211,	// (0x00094e05) wgtman_btn_pane_cp_01_ParamLimits

0xb211,	// (0x00094e05) wgtman_btn_pane_cp_01

0xec46,	// (0x0009883a) wgtman_content_pane

0xec4f,	// (0x00098843) wgtman_heading_pane

0x009f,	// (0x00089c93) bg_heading_pane_cp02

0xec58,	// (0x0009884c) wgtman_heading_pane_g1

0xec60,	// (0x00098854) wgtman_heading_pane_t1

0xec6e,	// (0x00098862) scroll_pane_cp036

0xec76,	// (0x0009886a) wgtman_list_pane

0x2322,	// (0x0008bf16) wgtman_list_pane_t1_ParamLimits

0x2322,	// (0x0008bf16) wgtman_list_pane_t1

0xe25b,	// (0x00097e4f) cam4_grid_pane

0x9158,	// (0x00092d4c) bg_button_pane_cp015_ParamLimits

0x9169,	// (0x00092d5d) bg_button_pane_cp016_ParamLimits

0x9175,	// (0x00092d69) bg_button_pane_cp017_ParamLimits

0x91c9,	// (0x00092dbd) popup_vitu2_query_window_g3_ParamLimits

0x91c9,	// (0x00092dbd) popup_vitu2_query_window_g3

0x926a,	// (0x00092e5e) popup_vitu2_query_window_t6_ParamLimits

0x926a,	// (0x00092e5e) popup_vitu2_query_window_t6

0x9295,	// (0x00092e89) popup_vitu2_query_window_t7_ParamLimits

0x9295,	// (0x00092e89) popup_vitu2_query_window_t7

0x1a31,	// (0x0008b625) cam4_grid_pane_g1

0x1a3a,	// (0x0008b62e) cam4_grid_pane_g2

0xec7e,	// (0x00098872) cam4_grid_pane_g3

0xec87,	// (0x0009887b) cam4_grid_pane_g4

0x0003,

0xfe5c,	// (0x00099a50) cam4_grid_pane_g

0x409c,	// (0x0008dc90) aid_placing_vt_slider_lsc_ParamLimits

0x4399,	// (0x0008df8d) vidtel_button_pane_ParamLimits

0x4399,	// (0x0008df8d) vidtel_button_pane

0x009f,	// (0x00089c93) bg_button_pane_cp034

0xec92,	// (0x00098886) vidtel_button_pane_g1

0xec9a,	// (0x0009888e) vidtel_button_pane_t1

0x0e02,	// (0x0008a9f6) aid_size_vtel_slider_touch

0x1600,	// (0x0008b1f4) scroll_pane_cp039

0x9f60,	// (0x00093b54) ncim_query_button_pane_cp01_ParamLimits

0x9f7f,	// (0x00093b73) ncimui_query_pane_g1_ParamLimits

0x0739,	// (0x0008a32d) input_focus_pane_cp012_ParamLimits

0x1723,	// (0x0008b317) ncim_query_entry_pane_t1_ParamLimits

0x1600,	// (0x0008b1f4) scroll_pane_cp039_ParamLimits

0x5640,	// (0x0008f234) navi_pane_bcale_mc_g1

0x5648,	// (0x0008f23c) navi_pane_bcale_mc_t1

0x1cec,	// (0x0008b8e0) main_sp_fs_email_pane_g1

0x1cf8,	// (0x0008b8ec) main_sp_fs_email_pane_g2

0x0001,

0xfc5f,	// (0x00099853) main_sp_fs_email_pane_g

0x1f6a,	// (0x0008bb5e) list_single_cale_mrui_row_pane_g3_ParamLimits

0x1f6a,	// (0x0008bb5e) list_single_cale_mrui_row_pane_g3

0xadc6,	// (0x000949ba) list_single_recal_day_pane_g5_event_pane

0xea10,	// (0x00098604) list_single_recal_day_pane_g7

0xecb0,	// (0x000988a4) list_recal_day_event_pane_cp01

0xecb9,	// (0x000988ad) list_recal_vselct_arw_lo_pane_cp01

0xecc1,	// (0x000988b5) list_recal_vselct_arw_up_pane_cp01

0xecc9,	// (0x000988bd) list_recal_vselct_pane_cp01

0x0e24,	// (0x0008aa18) list_recal_day_event_pane_cp01_g1

0xecd3,	// (0x000988c7) list_recal_day_event_pane_cp01_t1

0xea18,	// (0x0009860c) list_single_recal_day_pane_t1_ParamLimits

0xea2a,	// (0x0009861e) list_single_recal_day_pane_t2_ParamLimits

0xfd3f,	// (0x00099933) list_single_recal_day_pane_t_ParamLimits

0x0717,	// (0x0008a30b) bg_notes_pane_ParamLimits

0x07f0,	// (0x0008a3e4) list_notes_pane_ParamLimits

0x36df,	// (0x0008d2d3) scroll_pane_cp06_ParamLimits

0x0812,	// (0x0008a406) main_notes_pane_ParamLimits

0x0739,	// (0x0008a32d) main_welc_pane

0xb929,	// (0x0009551d) main_welc_body_pane_ParamLimits

0xb929,	// (0x0009551d) main_welc_body_pane

0xb946,	// (0x0009553a) main_welc_opti_pane_ParamLimits

0xb946,	// (0x0009553a) main_welc_opti_pane

0xb9bc,	// (0x000955b0) main_welc_pane_t1_ParamLimits

0xb9bc,	// (0x000955b0) main_welc_pane_t1

0xbb9f,	// (0x00095793) main_welc_body_row_pane_ParamLimits

0xbb9f,	// (0x00095793) main_welc_body_row_pane

0x0792,	// (0x0008a386) main_welc_opti_row_pane_ParamLimits

0x0792,	// (0x0008a386) main_welc_opti_row_pane

0xecf1,	// (0x000988e5) main_welc_opti_row_pane_g1

0xbbb4,	// (0x000957a8) main_welc_opti_row_pane_t1

0xecf9,	// (0x000988ed) main_welc_body_row_pane_t1

0x22bd,	// (0x0008beb1) popup_notif_wgt_heading_pane

0x22d7,	// (0x0008becb) aid_size_list_notif_wgt_del_ParamLimits

0x22e4,	// (0x0008bed8) list_notif_wgt_row_pane_g1_ParamLimits

0x22f0,	// (0x0008bee4) list_notif_wgt_row_pane_g2_ParamLimits

0x22ff,	// (0x0008bef3) list_notif_wgt_row_pane_g3_ParamLimits

0xfda6,	// (0x0009999a) list_notif_wgt_row_pane_g_ParamLimits

0x230c,	// (0x0008bf00) list_notif_wgt_row_pane_t1_ParamLimits

0xea45,	// (0x00098639) list_notif_wgt_row_pane_t2_ParamLimits

0xea57,	// (0x0009864b) list_notif_wgt_row_pane_t3_ParamLimits

0xfdad,	// (0x000999a1) list_notif_wgt_row_pane_t_ParamLimits

0xb2ab,	// (0x00094e9f) listrow_wgtman_pane_g1_ParamLimits

0xb2b8,	// (0x00094eac) listrow_wgtman_pane_g2_ParamLimits

0xfddd,	// (0x000999d1) listrow_wgtman_pane_g_ParamLimits

0xb2d6,	// (0x00094eca) listrow_wgtman_pane_t1_ParamLimits

0xb2ee,	// (0x00094ee2) listrow_wgtman_pane_t2_ParamLimits

0xfde2,	// (0x000999d6) listrow_wgtman_pane_t_ParamLimits

0xb314,	// (0x00094f08) wait_bar_pane_cp09_ParamLimits

0x009f,	// (0x00089c93) bg_popup_heading_pane_cp02

0xed08,	// (0x000988fc) popup_notif_wgt_heading_pane_g1

0xed10,	// (0x00098904) popup_notif_wgt_heading_pane_t1

0x009f,	// (0x00089c93) main_vids_pane

0x009f,	// (0x00089c93) vids_listscroll_pane

0xbbc3,	// (0x000957b7) scroll_pane_cp040

0x009f,	// (0x00089c93) vids_list_pane

0xbbce,	// (0x000957c2) vids_list_double_pane_ParamLimits

0xbbce,	// (0x000957c2) vids_list_double_pane

0xbbdf,	// (0x000957d3) vids_list_double_pane_g1

0xbbe8,	// (0x000957dc) vids_list_double_pane_t1

0xbbf7,	// (0x000957eb) vids_list_double_pane_t2

0x0001,

0xfe7b,	// (0x00099a6f) vids_list_double_pane_t

0xc1eb,	// (0x00095ddf) main_ncimui_pane_ParamLimits

0x9d96,	// (0x0009398a) main_ncimui_pane_g1_ParamLimits

0x9da2,	// (0x00093996) main_ncimui_pane_g2_ParamLimits

0x9da2,	// (0x00093996) main_ncimui_pane_g2

0x0001,

0xfb60,	// (0x00099754) main_ncimui_pane_g_ParamLimits

0xfb60,	// (0x00099754) main_ncimui_pane_g

0xb961,	// (0x00095555) main_welc_pane_g1_ParamLimits

0xb961,	// (0x00095555) main_welc_pane_g1

0xb976,	// (0x0009556a) main_welc_pane_g2_ParamLimits

0xb976,	// (0x0009556a) main_welc_pane_g2

0x0003,

0xfe65,	// (0x00099a59) main_welc_pane_g_ParamLimits

0xfe65,	// (0x00099a59) main_welc_pane_g

0x36c5,	// (0x0008d2b9) listscroll_mce_pane_ParamLimits

0x57d7,	// (0x0008f3cb) wait_bar_pane_cp10

0xd15a,	// (0x00096d4e) main_cale_day_pane_ParamLimits

0xd15a,	// (0x00096d4e) main_cale_week_pane_ParamLimits

0x0717,	// (0x0008a30b) main_messa_pane_ParamLimits

0x78fb,	// (0x000914ef) main_clock2_btn_pane_ParamLimits

0x78fb,	// (0x000914ef) main_clock2_btn_pane

0xdaad,	// (0x000976a1) main_clock2_btn_pane_cp01_ParamLimits

0xdaad,	// (0x000976a1) main_clock2_btn_pane_cp01

0x1f3b,	// (0x0008bb2f) list_cale_mrui_pane_ParamLimits

0xea8d,	// (0x00098681) main_cf0_pane_g2

0x0001,

0xfdb4,	// (0x000999a8) main_cf0_pane_g

0xb501,	// (0x000950f5) area_left_week_number_pane_ParamLimits

0xb50d,	// (0x00095101) area_top_day_name_pane_ParamLimits

0xb520,	// (0x00095114) frame_month_view_pane_ParamLimits

0xeba6,	// (0x0009879a) grid_month_view_pane_ParamLimits

0xebb4,	// (0x000987a8) frm_month_g1_ParamLimits

0xb5a1,	// (0x00095195) frm_month_g2_ParamLimits

0xb5b4,	// (0x000951a8) frm_month_g3_ParamLimits

0xb5c7,	// (0x000951bb) frm_month_g4_ParamLimits

0xb5da,	// (0x000951ce) frm_month_g5_ParamLimits

0xb5ed,	// (0x000951e1) frm_month_g6_ParamLimits

0xb600,	// (0x000951f4) frm_month_g7_ParamLimits

0xebc1,	// (0x000987b5) frm_month_g8_ParamLimits

0xb613,	// (0x00095207) frm_month_g9_ParamLimits

0xb623,	// (0x00095217) frm_month_g10_ParamLimits

0xb633,	// (0x00095227) frm_month_g11_ParamLimits

0xb643,	// (0x00095237) frm_month_g12_ParamLimits

0xb655,	// (0x00095249) frm_month_g13_ParamLimits

0xb667,	// (0x0009525b) frm_month_g14_ParamLimits

0xb67b,	// (0x0009526f) frm_month_g15_ParamLimits

0xb68f,	// (0x00095283) frm_month_g16_ParamLimits

0xfe0c,	// (0x00099a00) frm_month_g_ParamLimits

0xebce,	// (0x000987c2) cell_top_day_name_pane_t1_ParamLimits

0xb6a3,	// (0x00095297) cell_area_left_week_number_pane_g1_ParamLimits

0xb6af,	// (0x000952a3) cell_area_left_week_number_pane_t1_ParamLimits

0x07a0,	// (0x0008a394) cell_month_view_pane_g1_ParamLimits

0xb6c2,	// (0x000952b6) cell_month_view_pane_t1_ParamLimits

0x070f,	// (0x0008a303) main_clock2_btn_pane_g1

0xed1e,	// (0x00098912) main_clock2_btn_pane_t1

0x0739,	// (0x0008a32d) listscroll_cmail_pane_ParamLimits

0x1cec,	// (0x0008b8e0) main_sp_fs_email_pane_g1_ParamLimits

0x1cf8,	// (0x0008b8ec) main_sp_fs_email_pane_g2_ParamLimits

0xfc5f,	// (0x00099853) main_sp_fs_email_pane_g_ParamLimits

0x2049,	// (0x0008bc3d) list_recal_day_pane_ParamLimits

0x205a,	// (0x0008bc4e) mian_recal_day_pane_t1

0xa77b,	// (0x0009436f) list_single_dyc_row_text_pane_t4_ParamLimits

0xa77b,	// (0x0009436f) list_single_dyc_row_text_pane_t4

0xa7c4,	// (0x000943b8) list_single_dyc_row_text_pane_t5_ParamLimits

0xa7c4,	// (0x000943b8) list_single_dyc_row_text_pane_t5

0xe79c,	// (0x00098390) list_single_dyc_row_text_pane_t6_ParamLimits

0xe79c,	// (0x00098390) list_single_dyc_row_text_pane_t6

0x4e23,	// (0x0008ea17) aid_mgn_list_cale_time_pane

0xc1eb,	// (0x00095ddf) main_gallery2_pane_ParamLimits

0xdac3,	// (0x000976b7) main_clock2_pane_cp01_t1

0xdad1,	// (0x000976c5) main_clock2_pane_cp01_t3

0x0001,

0xf745,	// (0x00099339) main_clock2_pane_cp01_t

0x3a89,	// (0x0008d67d) cale_week_scroll_pane_g16_ParamLimits

0x3a89,	// (0x0008d67d) cale_week_scroll_pane_g16

0x09c4,	// (0x0008a5b8) vorec_slider_pane

0xec9a,	// (0x0009888e) vidtel_button_pane_t1_ParamLimits

0xae2c,	// (0x00094a20) main_fs_bigclock_clock_pane_g1_ParamLimits

0xae2c,	// (0x00094a20) main_fs_bigclock_clock_pane_g2_ParamLimits

0xae3d,	// (0x00094a31) main_fs_bigclock_clock_pane_g3_ParamLimits

0xae3d,	// (0x00094a31) main_fs_bigclock_clock_pane_g4_ParamLimits

0xfd62,	// (0x00099956) main_fs_bigclock_clock_pane_g_ParamLimits

0xae50,	// (0x00094a44) main_fs_bigclock_clock_pane_t1_ParamLimits

0xae66,	// (0x00094a5a) main_fs_bigclock_clock_pane_t2_ParamLimits

0xfd6b,	// (0x0009995f) main_fs_bigclock_clock_pane_t_ParamLimits

0x71d7,	// (0x00090dcb) main_mup3_lyrics_pane_ParamLimits

0x71d7,	// (0x00090dcb) main_mup3_lyrics_pane

0xbc2d,	// (0x00095821) main_mup3_lyrics_pane_t1_ParamLimits

0xbc2d,	// (0x00095821) main_mup3_lyrics_pane_t1

0xdef0,	// (0x00097ae4) aid_main_mp4_pane_t1_area

0xdefa,	// (0x00097aee) aid_main_mp4_pane_t2_area

0xdfa6,	// (0x00097b9a) main_mp4_pane_g7_ParamLimits

0xdfa6,	// (0x00097b9a) main_mp4_pane_g7

0xdfb2,	// (0x00097ba6) main_mp4_pane_g8_ParamLimits

0xdfb2,	// (0x00097ba6) main_mp4_pane_g8

0x82ba,	// (0x00091eae) aid_call6_pane_g1_size

0xb855,	// (0x00095449) list_double_large_graphic_phob2_other_pane_ParamLimits

0xb855,	// (0x00095449) list_double_large_graphic_phob2_other_pane

0x53cc,	// (0x0008efc0) list_double_large_graphic_phob2_other_pane_g1

0x009f,	// (0x00089c93) list_highlight_pane_cp026

0x0739,	// (0x0008a32d) main_welc_pane_ParamLimits

0xa5ba,	// (0x000941ae) main_sp_fs_ctrlbar_pane_g3_ParamLimits

0xa5ba,	// (0x000941ae) main_sp_fs_ctrlbar_pane_g3

0xa5d4,	// (0x000941c8) main_sp_fs_ctrlbar_pane_g4_ParamLimits

0xa5d4,	// (0x000941c8) main_sp_fs_ctrlbar_pane_g4

0xa608,	// (0x000941fc) toolbar2_fixed_button_pane_cp01

0xa613,	// (0x00094207) toolbar2_fixed_button_pane_cp02

0xa620,	// (0x00094214) toolbar2_fixed_button_pane_cp03

0xb90d,	// (0x00095501) list_welc_entry_pane_ParamLimits

0xb90d,	// (0x00095501) list_welc_entry_pane

0xb98b,	// (0x0009557f) main_welc_pane_g3_ParamLimits

0xb98b,	// (0x0009557f) main_welc_pane_g3

0xb9da,	// (0x000955ce) main_welc_pane_t2_ParamLimits

0xb9da,	// (0x000955ce) main_welc_pane_t2

0xb9f4,	// (0x000955e8) main_welc_pane_t3_ParamLimits

0xb9f4,	// (0x000955e8) main_welc_pane_t3

0x0005,

0xfe6e,	// (0x00099a62) main_welc_pane_t_ParamLimits

0xfe6e,	// (0x00099a62) main_welc_pane_t

0xbb23,	// (0x00095717) welc_button_pane_ParamLimits

0xbb23,	// (0x00095717) welc_button_pane

0xbb8b,	// (0x0009577f) welc_service_logo_pane_ParamLimits

0xbb8b,	// (0x0009577f) welc_service_logo_pane

0xbc49,	// (0x0009583d) list_single_welc_entry_pane_ParamLimits

0xbc49,	// (0x0009583d) list_single_welc_entry_pane

0xbc5a,	// (0x0009584e) list_single_welc_entry_pane_g1

0xbc62,	// (0x00095856) list_single_welc_entry_pane_t1

0xbc70,	// (0x00095864) list_single_welc_entry_pane_t2

0x0001,

0xfe80,	// (0x00099a74) list_single_welc_entry_pane_t

0x009f,	// (0x00089c93) bg_button_pane_cp035

0xed2c,	// (0x00098920) welc_button_pane_t1

0xed3a,	// (0x0009892e) welc_service_logo_pane_g1

0xed43,	// (0x00098937) welc_service_logo_pane_g2

0x0001,

0xfe85,	// (0x00099a79) welc_service_logo_pane_g

0xc1f9,	// (0x00095ded) main_int_radio_pane

0x15b5,	// (0x0008b1a9) list_single_fs_dyc_pane_g1

0xb785,	// (0x00095379) list_double_large_graphic_phob2_pane_g3_ParamLimits

0xb785,	// (0x00095379) list_double_large_graphic_phob2_pane_g3

0xb791,	// (0x00095385) list_double_large_graphic_phob2_pane_g4_ParamLimits

0xb791,	// (0x00095385) list_double_large_graphic_phob2_pane_g4

0xbc7e,	// (0x00095872) main_int_radio1_pane_ParamLimits

0xbc7e,	// (0x00095872) main_int_radio1_pane

0xed4c,	// (0x00098940) find_pane_cp02

0xbc9b,	// (0x0009588f) input_focus_pane_cp12_ParamLimits

0xbc9b,	// (0x0009588f) input_focus_pane_cp12

0xbcab,	// (0x0009589f) input_focus_pane_cp13_ParamLimits

0xbcab,	// (0x0009589f) input_focus_pane_cp13

0xbcbf,	// (0x000958b3) input_focus_pane_cp14_ParamLimits

0xbcbf,	// (0x000958b3) input_focus_pane_cp14

0xed55,	// (0x00098949) int_radio1_listscroll_pane

0xbcd3,	// (0x000958c7) main_int_radio1_pane_g1_ParamLimits

0xbcd3,	// (0x000958c7) main_int_radio1_pane_g1

0xbceb,	// (0x000958df) main_int_radio1_pane_t1_ParamLimits

0xbceb,	// (0x000958df) main_int_radio1_pane_t1

0xbd06,	// (0x000958fa) main_int_radio1_pane_t2_ParamLimits

0xbd06,	// (0x000958fa) main_int_radio1_pane_t2

0xbd21,	// (0x00095915) main_int_radio1_pane_t3_ParamLimits

0xbd21,	// (0x00095915) main_int_radio1_pane_t3

0xbd3c,	// (0x00095930) main_int_radio1_pane_t4_ParamLimits

0xbd3c,	// (0x00095930) main_int_radio1_pane_t4

0xed5f,	// (0x00098953) main_int_radio1_pane_t5_ParamLimits

0xed5f,	// (0x00098953) main_int_radio1_pane_t5

0xbd4e,	// (0x00095942) main_int_radio1_pane_t6_ParamLimits

0xbd4e,	// (0x00095942) main_int_radio1_pane_t6

0xbd63,	// (0x00095957) main_int_radio1_pane_t7_ParamLimits

0xbd63,	// (0x00095957) main_int_radio1_pane_t7

0xbd78,	// (0x0009596c) main_int_radio1_pane_t8_ParamLimits

0xbd78,	// (0x0009596c) main_int_radio1_pane_t8

0xbd97,	// (0x0009598b) main_int_radio1_pane_t9_ParamLimits

0xbd97,	// (0x0009598b) main_int_radio1_pane_t9

0xbda9,	// (0x0009599d) main_int_radio1_pane_t10_ParamLimits

0xbda9,	// (0x0009599d) main_int_radio1_pane_t10

0xbdcf,	// (0x000959c3) main_int_radio1_pane_t11_ParamLimits

0xbdcf,	// (0x000959c3) main_int_radio1_pane_t11

0xbdf5,	// (0x000959e9) main_int_radio1_pane_t12_ParamLimits

0xbdf5,	// (0x000959e9) main_int_radio1_pane_t12

0x000b,

0xfe8a,	// (0x00099a7e) main_int_radio1_pane_t_ParamLimits

0xfe8a,	// (0x00099a7e) main_int_radio1_pane_t

0xed71,	// (0x00098965) int_radio_list_pane

0xebe9,	// (0x000987dd) scroll_pane_cp037

0xed79,	// (0x0009896d) list_double_large_graphic_int_radio_pane_ParamLimits

0xed79,	// (0x0009896d) list_double_large_graphic_int_radio_pane

0xed92,	// (0x00098986) list_double_large_graphic_int_radio_pane_g1

0xed9b,	// (0x0009898f) list_double_large_graphic_int_radio_pane_t1

0xeda9,	// (0x0009899d) list_double_large_graphic_int_radio_pane_t2

0x0001,

0xfea3,	// (0x00099a97) list_double_large_graphic_int_radio_pane_t

0x009f,	// (0x00089c93) list_highlight_pane_cp027

0xece1,	// (0x000988d5) main_button_pane_4

0xb99b,	// (0x0009558f) main_welc_pane_g4_ParamLimits

0xb99b,	// (0x0009558f) main_welc_pane_g4

0xba0c,	// (0x00095600) main_welc_pane_t4_ParamLimits

0xba0c,	// (0x00095600) main_welc_pane_t4

0xba23,	// (0x00095617) main_welc_pane_t5_ParamLimits

0xba23,	// (0x00095617) main_welc_pane_t5

0xba60,	// (0x00095654) main_welc_pane_t6_ParamLimits

0xba60,	// (0x00095654) main_welc_pane_t6

0xbb3a,	// (0x0009572e) welc_button_pane_2_ParamLimits

0xbb3a,	// (0x0009572e) welc_button_pane_2

0xbb56,	// (0x0009574a) welc_button_pane_3_ParamLimits

0xbb56,	// (0x0009574a) welc_button_pane_3

0xece9,	// (0x000988dd) welc_button_pane_4

0xbb75,	// (0x00095769) welc_button_pane_5_ParamLimits

0xbb75,	// (0x00095769) welc_button_pane_5

0x32c1,	// (0x0008ceb5) main_popup_welc_pane

0xedc6,	// (0x000989ba) main_welc_sk_g3

0xedd0,	// (0x000989c4) main_welc_sk_g4

0xedda,	// (0x000989ce) main_welc_sk_t3

0xedea,	// (0x000989de) main_welc_sk_t4

0xedfa,	// (0x000989ee) popup_welc_pane_t4

0xee08,	// (0x000989fc) popup_welc_pane_t5

0xee18,	// (0x00098a0c) popup_welc_pane_t6

0xc1f9,	// (0x00095ded) main_acti_pane

0x009f,	// (0x00089c93) main_sso_pane

0xbe07,	// (0x000959fb) sso_body_pane_ParamLimits

0xbe07,	// (0x000959fb) sso_body_pane

0xbe1b,	// (0x00095a0f) sso_logo_pane_ParamLimits

0xbe1b,	// (0x00095a0f) sso_logo_pane

0xbe47,	// (0x00095a3b) sso_sk_pane_ParamLimits

0xbe47,	// (0x00095a3b) sso_sk_pane

0x09fa,	// (0x0008a5ee) main_sso_logo_pane_g1

0xbe59,	// (0x00095a4d) sso_sk_pane_t1_ParamLimits

0xbe59,	// (0x00095a4d) sso_sk_pane_t1

0xbe73,	// (0x00095a67) sso_sk_pane_t2_ParamLimits

0xbe73,	// (0x00095a67) sso_sk_pane_t2

0x0001,

0xfea8,	// (0x00099a9c) sso_sk_pane_t_ParamLimits

0xfea8,	// (0x00099a9c) sso_sk_pane_t

0xee56,	// (0x00098a4a) aid_sso_gap

0xee5f,	// (0x00098a53) aid_sso_txt1

0xee69,	// (0x00098a5d) aid_sso_txt2

0xee73,	// (0x00098a67) aid_sso_txt3

0x0002,

0xfead,	// (0x00099aa1) aid_sso_txt

0xee7d,	// (0x00098a71) aid_sso_widget

0xbedd,	// (0x00095ad1) sso_btn_pane_ParamLimits

0xbedd,	// (0x00095ad1) sso_btn_pane

0xbf65,	// (0x00095b59) sso_option_pane_ParamLimits

0xbf65,	// (0x00095b59) sso_option_pane

0xbfe5,	// (0x00095bd9) sso_query_pane_ParamLimits

0xbfe5,	// (0x00095bd9) sso_query_pane

0xc03b,	// (0x00095c2f) sso_query_pane_cp01_ParamLimits

0xc03b,	// (0x00095c2f) sso_query_pane_cp01

0xc095,	// (0x00095c89) sso_t_hdr_pane_ParamLimits

0xc095,	// (0x00095c89) sso_t_hdr_pane

0xc0b9,	// (0x00095cad) sso_t_nml_pane_ParamLimits

0xc0b9,	// (0x00095cad) sso_t_nml_pane

0xee73,	// (0x00098a67) sso_t_sub_pane

0xbe28,	// (0x00095a1c) sso_popup_window_ParamLimits

0xbe28,	// (0x00095a1c) sso_popup_window

0xbe89,	// (0x00095a7d) sso_apps_pane_ParamLimits

0xbe89,	// (0x00095a7d) sso_apps_pane

0xbeb3,	// (0x00095aa7) sso_body_pane_g1

0xbebd,	// (0x00095ab1) sso_body_pane_t1

0xbecd,	// (0x00095ac1) sso_body_pane_t2

0x0001,

0xfeb4,	// (0x00099aa8) sso_body_pane_t

0xbf2f,	// (0x00095b23) sso_btn_pane_cp01_ParamLimits

0xbf2f,	// (0x00095b23) sso_btn_pane_cp01

0xbfb9,	// (0x00095bad) sso_prog_pane_ParamLimits

0xbfb9,	// (0x00095bad) sso_prog_pane

0xee87,	// (0x00098a7b) sso_t_hdr_pane_t1_ParamLimits

0xee87,	// (0x00098a7b) sso_t_hdr_pane_t1

0xee9a,	// (0x00098a8e) input_focus_pane_cp10_ParamLimits

0xee9a,	// (0x00098a8e) input_focus_pane_cp10

0xeeb0,	// (0x00098aa4) sso_query_pane_t1_ParamLimits

0xeeb0,	// (0x00098aa4) sso_query_pane_t1

0xeec3,	// (0x00098ab7) sso_query_pane_t2_ParamLimits

0xeec3,	// (0x00098ab7) sso_query_pane_t2

0xeedc,	// (0x00098ad0) sso_query_pane_t3_ParamLimits

0xeedc,	// (0x00098ad0) sso_query_pane_t3

0xef06,	// (0x00098afa) sso_query_pane_t4_ParamLimits

0xef06,	// (0x00098afa) sso_query_pane_t4

0x0003,

0xfeb9,	// (0x00099aad) sso_query_pane_t_ParamLimits

0xfeb9,	// (0x00099aad) sso_query_pane_t

0x009f,	// (0x00089c93) bg_button_pane_cp22

0xedb7,	// (0x000989ab) sso_btn_pane_t1

0xc10f,	// (0x00095d03) sso_t_nml_pane_t1_ParamLimits

0xc10f,	// (0x00095d03) sso_t_nml_pane_t1

0xef2a,	// (0x00098b1e) sso_option_row_pane_ParamLimits

0xef2a,	// (0x00098b1e) sso_option_row_pane

0xef37,	// (0x00098b2b) sso_t_sub_pane_t1_ParamLimits

0xef37,	// (0x00098b2b) sso_t_sub_pane_t1

0x0739,	// (0x0008a32d) bg_popup_window_pane_cp11_ParamLimits

0x0739,	// (0x0008a32d) bg_popup_window_pane_cp11

0xef4a,	// (0x00098b3e) popup_sk_window_cp01_ParamLimits

0xef4a,	// (0x00098b3e) popup_sk_window_cp01

0xef57,	// (0x00098b4b) sso_popup_body_pane_ParamLimits

0xef57,	// (0x00098b4b) sso_popup_body_pane

0xef64,	// (0x00098b58) scroll_pane_cp21_ParamLimits

0xef64,	// (0x00098b58) scroll_pane_cp21

0xef71,	// (0x00098b65) sso_popup_body_t_pane_ParamLimits

0xef71,	// (0x00098b65) sso_popup_body_t_pane

0xef7e,	// (0x00098b72) sso_popup_body_t_hdr_pane_ParamLimits

0xef7e,	// (0x00098b72) sso_popup_body_t_hdr_pane

0xef8c,	// (0x00098b80) sso_popup_body_t_nml_pane_ParamLimits

0xef8c,	// (0x00098b80) sso_popup_body_t_nml_pane

0xefa7,	// (0x00098b9b) sso_popup_body_t_sub_pane_ParamLimits

0xefa7,	// (0x00098b9b) sso_popup_body_t_sub_pane

0xefca,	// (0x00098bbe) sso_popup_body_t_hdr_pane_t1

0xc12a,	// (0x00095d1e) sso_popup_body_t_nml_pane_t1_ParamLimits

0xc12a,	// (0x00095d1e) sso_popup_body_t_nml_pane_t1

0x0032,	// (0x00089c26) sso_popup_body_t_sub_pane_t1_ParamLimits

0x0032,	// (0x00089c26) sso_popup_body_t_sub_pane_t1

0x09fa,	// (0x0008a5ee) sso_prog_pane_g1

0xc164,	// (0x00095d58) sso_apps_pane_comp1_ParamLimits

0xc164,	// (0x00095d58) sso_apps_pane_comp1

0x0073,	// (0x00089c67) sso_apps_pane_comp1_g1

0x007b,	// (0x00089c6f) sso_apps_pane_comp1_t1

0x0089,	// (0x00089c7d) sso_option_row_pane_g1

0x0091,	// (0x00089c85) sso_option_row_pane_t1

0xb8fa,	// (0x000954ee) bg_welc_area_ParamLimits

0xb8fa,	// (0x000954ee) bg_welc_area

0xba9e,	// (0x00095692) sso_t_hdr_pane_a_t1_ParamLimits

0xba9e,	// (0x00095692) sso_t_hdr_pane_a_t1

0xbab9,	// (0x000956ad) sso_t_nml_pane_a_t1_ParamLimits

0xbab9,	// (0x000956ad) sso_t_nml_pane_a_t1

0xbae8,	// (0x000956dc) sso_t_sub_pane_a_t1_ParamLimits

0xbae8,	// (0x000956dc) sso_t_sub_pane_a_t1

0xedb7,	// (0x000989ab) sso_btn_pane_t1_copy1

0x009f,	// (0x00089c93) welc_button_pane_2_comp1

0xee26,	// (0x00098a1a) sso_t_hdr_pane_p_t1

0xee36,	// (0x00098a2a) sso_t_nml_pane_p_t1

0xee46,	// (0x00098a3a) sso_t_sub_pane_p_t1
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
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
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
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
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
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	&WindowLineVCR,
	&TextLineVCR,
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
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
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
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	};

} // end of namespace AknLayoutScalable_Abrw_pnl4_apps_nhd4_lsc_tch_Large
