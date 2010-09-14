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

#include "aknlayoutscalable_abrw_pnl4_apps_nhd4_lsc_tch_small.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pnp4_apps_nhd4_prt_tch[]; }

namespace AknLayoutScalable_Abrw_pnl4_apps_nhd4_lsc_tch_Small
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pnp4_apps_nhd4_prt_tch + 0x00056c74 };

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
0x3bd2,	// (0x0005a846) Screen

0x3bde,	// (0x0005a852) application_window

0x3c1a,	// (0x0005a88e) area_bottom_pane_ParamLimits

0x3c1a,	// (0x0005a88e) area_bottom_pane

0x3c53,	// (0x0005a8c7) area_top_pane_ParamLimits

0x3c53,	// (0x0005a8c7) area_top_pane

0xc5b8,	// (0x0006322c) call_video_uplink_pane_ParamLimits

0xc5b8,	// (0x0006322c) call_video_uplink_pane

0x3ce1,	// (0x0005a955) main_pane_ParamLimits

0x3ce1,	// (0x0005a955) main_pane

0x1a66,	// (0x000586da) context_pane

0x6a12,	// (0x0005d686) navi_pane

0x6a44,	// (0x0005d6b8) popup_cale_events_window_ParamLimits

0x6a44,	// (0x0005d6b8) popup_cale_events_window

0x1a79,	// (0x000586ed) popup_mup_playback_window

0x6a5c,	// (0x0005d6d0) signal_pane

0xcd79,	// (0x000639ed) main_browser_pane

0xcf97,	// (0x00063c0b) main_burst_pane

0x6768,	// (0x0005d3dc) main_calc_pane

0x1a4c,	// (0x000586c0) main_cale_day_pane

0x677c,	// (0x0005d3f0) main_cale_month_pane

0x1a4c,	// (0x000586c0) main_cale_week_pane

0xcf97,	// (0x00063c0b) main_call_pane

0xca01,	// (0x00063675) main_call_poc_pane

0xcf97,	// (0x00063c0b) main_camera_pane

0xcf97,	// (0x00063c0b) main_chi_dic_pane

0x04ad,	// (0x00057121) main_clock_pane

0xca01,	// (0x00063675) main_fmradio_pane

0xcf97,	// (0x00063c0b) main_graph_messa_pane

0xca01,	// (0x00063675) main_help_pane

0xcd79,	// (0x000639ed) main_im_pane

0xcc5c,	// (0x000638d0) main_image_pane_ParamLimits

0xcc5c,	// (0x000638d0) main_image_pane

0xca01,	// (0x00063675) main_location2_pane

0xcf97,	// (0x00063c0b) main_location_pane

0xcc5c,	// (0x000638d0) main_messa_pane

0xca01,	// (0x00063675) main_mp2_pane

0xcf97,	// (0x00063c0b) main_mp_pane

0xca01,	// (0x00063675) main_msg_pane

0xca01,	// (0x00063675) main_mup_eq_pane

0xca01,	// (0x00063675) main_mup_pane

0xcd79,	// (0x000639ed) main_notes_pane

0xca01,	// (0x00063675) main_pec_pane

0xca01,	// (0x00063675) main_phob_pane

0xca01,	// (0x00063675) main_pinb_pane

0xca01,	// (0x00063675) main_postcard_pane

0xca01,	// (0x00063675) main_qdial_pane

0xcf97,	// (0x00063c0b) main_skin_pane

0xca01,	// (0x00063675) main_smil2_pane

0xcf97,	// (0x00063c0b) main_smil_pane

0xcf97,	// (0x00063c0b) main_video_pane

0xcf97,	// (0x00063c0b) main_video_tele_pane

0xcc5c,	// (0x000638d0) main_viewer_pane_ParamLimits

0xcc5c,	// (0x000638d0) main_viewer_pane

0xcf97,	// (0x00063c0b) main_vorec_pane

0x67ce,	// (0x0005d442) popup_blid_sat_info_window_ParamLimits

0x67ce,	// (0x0005d442) popup_blid_sat_info_window

0x6826,	// (0x0005d49a) popup_dyc_status_message_window_ParamLimits

0x6826,	// (0x0005d49a) popup_dyc_status_message_window

0x683e,	// (0x0005d4b2) popup_grid_large_graphic_window_ParamLimits

0x683e,	// (0x0005d4b2) popup_grid_large_graphic_window

0x68ee,	// (0x0005d562) popup_loc_request_window_ParamLimits

0x68ee,	// (0x0005d562) popup_loc_request_window

0x69ea,	// (0x0005d65e) popup_wml_address_window_ParamLimits

0x69ea,	// (0x0005d65e) popup_wml_address_window

0x65a2,	// (0x0005d216) call_muted_g1

0x6215,	// (0x0005ce89) popup_call_audio_conf_window_ParamLimits

0x6215,	// (0x0005ce89) popup_call_audio_conf_window

0x65b6,	// (0x0005d22a) popup_call_audio_first_window_ParamLimits

0x65b6,	// (0x0005d22a) popup_call_audio_first_window

0x662c,	// (0x0005d2a0) popup_call_audio_in_window_ParamLimits

0x662c,	// (0x0005d2a0) popup_call_audio_in_window

0x6668,	// (0x0005d2dc) popup_call_audio_out_window_ParamLimits

0x6668,	// (0x0005d2dc) popup_call_audio_out_window

0x66a2,	// (0x0005d316) popup_call_audio_second_window_ParamLimits

0x66a2,	// (0x0005d316) popup_call_audio_second_window

0x66f8,	// (0x0005d36c) popup_call_audio_wait_window_ParamLimits

0x66f8,	// (0x0005d36c) popup_call_audio_wait_window

0x672d,	// (0x0005d3a1) popup_number_entry_window_ParamLimits

0x672d,	// (0x0005d3a1) popup_number_entry_window

0xc5ee,	// (0x00063262) bg_popup_call_pane_cp05_ParamLimits

0xc5ee,	// (0x00063262) bg_popup_call_pane_cp05

0xc60e,	// (0x00063282) popup_number_entry_window_t1

0xc621,	// (0x00063295) popup_number_entry_window_t2

0xc633,	// (0x000632a7) popup_number_entry_window_t3

0x0003,

0xf06b,	// (0x00065cdf) popup_number_entry_window_t

0xc645,	// (0x000632b9) text_title_cp2

0xc658,	// (0x000632cc) bg_popup_call_pane_cp_ParamLimits

0xc658,	// (0x000632cc) bg_popup_call_pane_cp

0xc666,	// (0x000632da) call_thumbnail_pane

0xc66e,	// (0x000632e2) popup_call_audio_in_window_g1_ParamLimits

0xc66e,	// (0x000632e2) popup_call_audio_in_window_g1

0xc67a,	// (0x000632ee) popup_call_audio_in_window_g2_ParamLimits

0xc67a,	// (0x000632ee) popup_call_audio_in_window_g2

0xc686,	// (0x000632fa) popup_call_audio_in_window_g3_ParamLimits

0xc686,	// (0x000632fa) popup_call_audio_in_window_g3

0x0002,

0xf074,	// (0x00065ce8) popup_call_audio_in_window_g_ParamLimits

0xf074,	// (0x00065ce8) popup_call_audio_in_window_g

0xc692,	// (0x00063306) popup_call_audio_in_window_t1_ParamLimits

0xc692,	// (0x00063306) popup_call_audio_in_window_t1

0xc6ae,	// (0x00063322) popup_call_audio_in_window_t2_ParamLimits

0xc6ae,	// (0x00063322) popup_call_audio_in_window_t2

0xc6ca,	// (0x0006333e) popup_call_audio_in_window_t3_ParamLimits

0xc6ca,	// (0x0006333e) popup_call_audio_in_window_t3

0x0002,

0xf07b,	// (0x00065cef) popup_call_audio_in_window_t_ParamLimits

0xf07b,	// (0x00065cef) popup_call_audio_in_window_t

0xc658,	// (0x000632cc) bg_popup_call_pane_cp01_ParamLimits

0xc658,	// (0x000632cc) bg_popup_call_pane_cp01

0xc666,	// (0x000632da) call_thumbnail_pane_cp02

0xc6dd,	// (0x00063351) call_type_pane_cp022

0xc6e5,	// (0x00063359) popup_call_audio_out_window_g1_ParamLimits

0xc6e5,	// (0x00063359) popup_call_audio_out_window_g1

0xc6f7,	// (0x0006336b) popup_call_audio_out_window_g2_ParamLimits

0xc6f7,	// (0x0006336b) popup_call_audio_out_window_g2

0xc703,	// (0x00063377) popup_call_audio_out_window_g3_ParamLimits

0xc703,	// (0x00063377) popup_call_audio_out_window_g3

0x0002,

0xf082,	// (0x00065cf6) popup_call_audio_out_window_g_ParamLimits

0xf082,	// (0x00065cf6) popup_call_audio_out_window_g

0xc715,	// (0x00063389) popup_call_audio_out_window_t1_ParamLimits

0xc715,	// (0x00063389) popup_call_audio_out_window_t1

0xc72d,	// (0x000633a1) popup_call_audio_out_window_t2_ParamLimits

0xc72d,	// (0x000633a1) popup_call_audio_out_window_t2

0x0001,

0xf089,	// (0x00065cfd) popup_call_audio_out_window_t_ParamLimits

0xf089,	// (0x00065cfd) popup_call_audio_out_window_t

0xc742,	// (0x000633b6) bg_popup_call_pane_ParamLimits

0xc742,	// (0x000633b6) bg_popup_call_pane

0x3e9e,	// (0x0005ab12) call_thumbnail_pane_cp_ParamLimits

0x3e9e,	// (0x0005ab12) call_thumbnail_pane_cp

0xc7c6,	// (0x0006343a) call_type_pane_cp01_ParamLimits

0xc7c6,	// (0x0006343a) call_type_pane_cp01

0xc80a,	// (0x0006347e) popup_call_audio_first_window_g1_ParamLimits

0xc80a,	// (0x0006347e) popup_call_audio_first_window_g1

0xc856,	// (0x000634ca) popup_call_audio_first_window_g2_ParamLimits

0xc856,	// (0x000634ca) popup_call_audio_first_window_g2

0x0001,

0xf08e,	// (0x00065d02) popup_call_audio_first_window_g_ParamLimits

0xf08e,	// (0x00065d02) popup_call_audio_first_window_g

0xc89a,	// (0x0006350e) popup_call_audio_first_window_t1_ParamLimits

0xc89a,	// (0x0006350e) popup_call_audio_first_window_t1

0xc946,	// (0x000635ba) popup_call_audio_first_window_t4_ParamLimits

0xc946,	// (0x000635ba) popup_call_audio_first_window_t4

0xc9d2,	// (0x00063646) popup_call_audio_first_window_t5_ParamLimits

0xc9d2,	// (0x00063646) popup_call_audio_first_window_t5

0x0002,

0xf093,	// (0x00065d07) popup_call_audio_first_window_t_ParamLimits

0xf093,	// (0x00065d07) popup_call_audio_first_window_t

0xca01,	// (0x00063675) bg_popup_call_pane_cp02

0xca0b,	// (0x0006367f) call_type_pane_cp023

0xca13,	// (0x00063687) popup_call_audio_wait_window_g1

0xca1b,	// (0x0006368f) popup_call_audio_wait_window_g2

0x0001,

0xf09a,	// (0x00065d0e) popup_call_audio_wait_window_g

0xca23,	// (0x00063697) popup_call_audio_wait_window_t3

0xca31,	// (0x000636a5) bg_popup_call_pane_cp03_ParamLimits

0xca31,	// (0x000636a5) bg_popup_call_pane_cp03

0xca91,	// (0x00063705) call_thumbnail_pane_cp011_ParamLimits

0xca91,	// (0x00063705) call_thumbnail_pane_cp011

0xca9d,	// (0x00063711) call_type_pane_cp034_ParamLimits

0xca9d,	// (0x00063711) call_type_pane_cp034

0xcad9,	// (0x0006374d) popup_call_audio_second_window_g1_ParamLimits

0xcad9,	// (0x0006374d) popup_call_audio_second_window_g1

0xcb15,	// (0x00063789) popup_call_audio_second_window_g2_ParamLimits

0xcb15,	// (0x00063789) popup_call_audio_second_window_g2

0x0001,

0xf09f,	// (0x00065d13) popup_call_audio_second_window_g_ParamLimits

0xf09f,	// (0x00065d13) popup_call_audio_second_window_g

0xcb51,	// (0x000637c5) popup_call_audio_second_window_t1_ParamLimits

0xcb51,	// (0x000637c5) popup_call_audio_second_window_t1

0xcbd2,	// (0x00063846) popup_call_audio_second_window_t2_ParamLimits

0xcbd2,	// (0x00063846) popup_call_audio_second_window_t2

0xcc08,	// (0x0006387c) popup_call_audio_second_window_t3_ParamLimits

0xcc08,	// (0x0006387c) popup_call_audio_second_window_t3

0x0002,

0xf0a4,	// (0x00065d18) popup_call_audio_second_window_t_ParamLimits

0xf0a4,	// (0x00065d18) popup_call_audio_second_window_t

0xca01,	// (0x00063675) bg_popup_call_pane_cp04

0xcc3e,	// (0x000638b2) list_conf_pane

0xcc46,	// (0x000638ba) popup_call_audio_conf_window_t1

0xcc54,	// (0x000638c8) call_thumbnail_pane_g1

0xcc5c,	// (0x000638d0) bg_pinb_pane_ParamLimits

0xcc5c,	// (0x000638d0) bg_pinb_pane

0xcc6a,	// (0x000638de) find_pinb_pane

0xcc5c,	// (0x000638d0) listscroll_pinb_pane_ParamLimits

0xcc5c,	// (0x000638d0) listscroll_pinb_pane

0xcc74,	// (0x000638e8) pinb_bg_pane_g1

0xcc74,	// (0x000638e8) pinb_bg_pane_g2

0xcc74,	// (0x000638e8) pinb_bg_pane_g3

0xcc74,	// (0x000638e8) pinb_bg_pane_g4

0xcc74,	// (0x000638e8) pinb_bg_pane_g5

0xcc74,	// (0x000638e8) pinb_bg_pane_g6

0xcc74,	// (0x000638e8) pinb_bg_pane_g7

0xcc74,	// (0x000638e8) pinb_bg_pane_g8

0xcc74,	// (0x000638e8) pinb_bg_pane_g9

0xcc74,	// (0x000638e8) pinb_bg_pane_g10

0x0009,

0xf0ab,	// (0x00065d1f) pinb_bg_pane_g

0xc55f,	// (0x000631d3) grid_pinb_pane

0xc55f,	// (0x000631d3) list_pinb_pane

0xcc7e,	// (0x000638f2) scroll_pane_cp01_ParamLimits

0xcc7e,	// (0x000638f2) scroll_pane_cp01

0xcc8c,	// (0x00063900) find_pinb_pane_g1_ParamLimits

0xcc8c,	// (0x00063900) find_pinb_pane_g1

0xcca4,	// (0x00063918) find_pinb_pane_t1

0xccb6,	// (0x0006392a) find_pinb_pane_t2

0x0001,

0xf0c5,	// (0x00065d39) find_pinb_pane_t

0xcccb,	// (0x0006393f) input_focus_pane_cp01_ParamLimits

0xcccb,	// (0x0006393f) input_focus_pane_cp01

0xccd7,	// (0x0006394b) cell_pinb_pane_ParamLimits

0xccd7,	// (0x0006394b) cell_pinb_pane

0xcce5,	// (0x00063959) cell_pinb_pane_g1_ParamLimits

0xcce5,	// (0x00063959) cell_pinb_pane_g1

0xccf3,	// (0x00063967) cell_pinb_pane_g2_ParamLimits

0xccf3,	// (0x00063967) cell_pinb_pane_g2

0xccf3,	// (0x00063967) cell_pinb_pane_g3_ParamLimits

0xccf3,	// (0x00063967) cell_pinb_pane_g3

0x0002,

0xf0ca,	// (0x00065d3e) cell_pinb_pane_g_ParamLimits

0xf0ca,	// (0x00065d3e) cell_pinb_pane_g

0xca01,	// (0x00063675) grid_highlight_pane_cp01

0xccd7,	// (0x0006394b) list_pinb_item_pane_ParamLimits

0xccd7,	// (0x0006394b) list_pinb_item_pane

0xc55f,	// (0x000631d3) list_highlight_pane_cp02

0xcd01,	// (0x00063975) list_pinb_item_pane_g1_ParamLimits

0xcd01,	// (0x00063975) list_pinb_item_pane_g1

0xccf3,	// (0x00063967) list_pinb_item_pane_g2_ParamLimits

0xccf3,	// (0x00063967) list_pinb_item_pane_g2

0xcce5,	// (0x00063959) list_pinb_item_pane_g3_ParamLimits

0xcce5,	// (0x00063959) list_pinb_item_pane_g3

0xccf3,	// (0x00063967) list_pinb_item_pane_g4_ParamLimits

0xccf3,	// (0x00063967) list_pinb_item_pane_g4

0x0003,

0xf0d1,	// (0x00065d45) list_pinb_item_pane_g_ParamLimits

0xf0d1,	// (0x00065d45) list_pinb_item_pane_g

0xcd0f,	// (0x00063983) list_pinb_item_pane_t1_ParamLimits

0xcd0f,	// (0x00063983) list_pinb_item_pane_t1

0x3ee0,	// (0x0005ab54) calc_display_pane

0x3f05,	// (0x0005ab79) calc_paper_pane

0x3f28,	// (0x0005ab9c) grid_calc_pane

0xca01,	// (0x00063675) bg_list_pane_cp01

0x3f56,	// (0x0005abca) clock_g1

0x3f5e,	// (0x0005abd2) clock_g2

0x0001,

0xf0da,	// (0x00065d4e) clock_g

0x3f66,	// (0x0005abda) clock_t1_ParamLimits

0x3f66,	// (0x0005abda) clock_t1

0x3f7b,	// (0x0005abef) clock_t2_ParamLimits

0x3f7b,	// (0x0005abef) clock_t2

0x3f8d,	// (0x0005ac01) clock_t3_ParamLimits

0x3f8d,	// (0x0005ac01) clock_t3

0x3f9f,	// (0x0005ac13) clock_t4_ParamLimits

0x3f9f,	// (0x0005ac13) clock_t4

0x3fb1,	// (0x0005ac25) clock_t5_ParamLimits

0x3fb1,	// (0x0005ac25) clock_t5

0x3fc6,	// (0x0005ac3a) clock_t6_ParamLimits

0x3fc6,	// (0x0005ac3a) clock_t6

0x3fd8,	// (0x0005ac4c) clock_t7_ParamLimits

0x3fd8,	// (0x0005ac4c) clock_t7

0x3fea,	// (0x0005ac5e) clock_t8_ParamLimits

0x3fea,	// (0x0005ac5e) clock_t8

0x3ffe,	// (0x0005ac72) clock_t9_ParamLimits

0x3ffe,	// (0x0005ac72) clock_t9

0x0008,

0xf0df,	// (0x00065d53) clock_t_ParamLimits

0xf0df,	// (0x00065d53) clock_t

0xcd2b,	// (0x0006399f) popup_clock_analogue_window_cp02

0xcd2b,	// (0x0006399f) popup_clock_digital_window_cp01

0xca01,	// (0x00063675) listscroll_help_pane

0xca01,	// (0x00063675) phob_pre_status_pane

0xcd33,	// (0x000639a7) grid_qdial_pane

0x4012,	// (0x0005ac86) listscroll_mce_pane

0xcc5c,	// (0x000638d0) bg_notes_pane

0xcd3d,	// (0x000639b1) list_notes_pane

0x402c,	// (0x0005aca0) scroll_pane_cp06

0xcd4b,	// (0x000639bf) bg_calc_paper_pane

0xcd5f,	// (0x000639d3) list_calc_pane

0xcd79,	// (0x000639ed) bg_calc_display_pane

0x4040,	// (0x0005acb4) calc_display_pane_t1

0x4052,	// (0x0005acc6) calc_display_pane_t2

0xcd85,	// (0x000639f9) calc_display_pane_t3

0x0002,

0xf0f2,	// (0x00065d66) calc_display_pane_t

0x4064,	// (0x0005acd8) cell_calc_pane_ParamLimits

0x4064,	// (0x0005acd8) cell_calc_pane

0xcd97,	// (0x00063a0b) bg_calc_paper_pane_g1

0xcda3,	// (0x00063a17) bg_calc_paper_pane_g2

0xcdaf,	// (0x00063a23) bg_calc_paper_pane_g3

0xcdbb,	// (0x00063a2f) bg_calc_paper_pane_g4

0xcdc7,	// (0x00063a3b) bg_calc_paper_pane_g5

0x4099,	// (0x0005ad0d) bg_calc_paper_pane_g6

0x40a8,	// (0x0005ad1c) bg_calc_paper_pane_g7

0x40b7,	// (0x0005ad2b) bg_calc_paper_pane_g8

0x0007,

0xf0f9,	// (0x00065d6d) bg_calc_paper_pane_g

0x40ca,	// (0x0005ad3e) calc_bg_paper_pane_g9

0x40dd,	// (0x0005ad51) list_calc_item_pane_ParamLimits

0x40dd,	// (0x0005ad51) list_calc_item_pane

0xcdd3,	// (0x00063a47) list_calc_item_pane_g1

0xcde0,	// (0x00063a54) list_calc_item_pane_t1_ParamLimits

0xcde0,	// (0x00063a54) list_calc_item_pane_t1

0x40f2,	// (0x0005ad66) list_calc_item_pane_t2_ParamLimits

0x40f2,	// (0x0005ad66) list_calc_item_pane_t2

0x0001,

0xf10a,	// (0x00065d7e) list_calc_item_pane_t_ParamLimits

0xf10a,	// (0x00065d7e) list_calc_item_pane_t

0xcc74,	// (0x000638e8) cell_calc_pane_g1

0xcdf2,	// (0x00063a66) grid_highlight_pane_cp02

0x29a3,	// (0x00059617) bg_calc_display_pane_g1

0x4124,	// (0x0005ad98) bg_calc_display_pane_g2

0x1e9f,	// (0x00058b13) bg_calc_display_pane_g3

0x0002,

0xf114,	// (0x00065d88) bg_calc_display_pane_g

0x412e,	// (0x0005ada2) cell_qdial_pane_ParamLimits

0x412e,	// (0x0005ada2) cell_qdial_pane

0x4142,	// (0x0005adb6) cell_qdial_pane_g1_ParamLimits

0x4142,	// (0x0005adb6) cell_qdial_pane_g1

0x4158,	// (0x0005adcc) cell_qdial_pane_g2_ParamLimits

0x4158,	// (0x0005adcc) cell_qdial_pane_g2

0xce14,	// (0x00063a88) cell_qdial_pane_g3_ParamLimits

0xce14,	// (0x00063a88) cell_qdial_pane_g3

0x0003,

0xf11b,	// (0x00065d8f) cell_qdial_pane_g_ParamLimits

0xf11b,	// (0x00065d8f) cell_qdial_pane_g

0x417e,	// (0x0005adf2) cell_qdial_pane_t1_ParamLimits

0x417e,	// (0x0005adf2) cell_qdial_pane_t1

0x4196,	// (0x0005ae0a) cell_qdial_pane_t2_ParamLimits

0x4196,	// (0x0005ae0a) cell_qdial_pane_t2

0x41a9,	// (0x0005ae1d) cell_qdial_pane_t3_ParamLimits

0x41a9,	// (0x0005ae1d) cell_qdial_pane_t3

0x0002,

0xf124,	// (0x00065d98) cell_qdial_pane_t_ParamLimits

0xf124,	// (0x00065d98) cell_qdial_pane_t

0xca01,	// (0x00063675) grid_highlight_pane_cp04

0xce20,	// (0x00063a94) thumbnail_qdial_pane_ParamLimits

0xce20,	// (0x00063a94) thumbnail_qdial_pane

0xce7c,	// (0x00063af0) list_help_pane

0xce85,	// (0x00063af9) scroll_pane_cp02

0x41bc,	// (0x0005ae30) help_list_pane_t1_ParamLimits

0x41bc,	// (0x0005ae30) help_list_pane_t1

0xce8e,	// (0x00063b02) bg_notes_pane_g2

0xce96,	// (0x00063b0a) bg_notes_pane_g3

0xce9e,	// (0x00063b12) notes_bg_pane_g1

0xcea6,	// (0x00063b1a) notes_bg_pane_g4

0xceae,	// (0x00063b22) notes_bg_pane_g5

0xceb6,	// (0x00063b2a) notes_bg_pane_g6

0xcebe,	// (0x00063b32) notes_bg_pane_g7

0xcec6,	// (0x00063b3a) notes_bg_pane_g8

0xcece,	// (0x00063b42) notes_bg_pane_g9

0x0006,

0xf142,	// (0x00065db6) notes_bg_pane_g

0x41db,	// (0x0005ae4f) list_notes_text_pane_ParamLimits

0x41db,	// (0x0005ae4f) list_notes_text_pane

0xced6,	// (0x00063b4a) list_notes_text_pane_g1

0x41f1,	// (0x0005ae65) list_notes_text_pane_t1

0x41ff,	// (0x0005ae73) listscroll_cale_week_pane

0x422b,	// (0x0005ae9f) bg_cale_heading_pane

0xcef9,	// (0x00063b6d) bg_cale_pane_cp01

0x4243,	// (0x0005aeb7) cale_week_corner_pane

0x4262,	// (0x0005aed6) cale_week_day_heading_pane

0x427f,	// (0x0005aef3) cale_week_scroll_pane_g1

0x4292,	// (0x0005af06) cale_week_scroll_pane_g2

0x42aa,	// (0x0005af1e) cale_week_scroll_pane_g3

0x42c2,	// (0x0005af36) cale_week_scroll_pane_g4

0x42da,	// (0x0005af4e) cale_week_scroll_pane_g5

0x42fa,	// (0x0005af6e) cale_week_scroll_pane_g6

0x431a,	// (0x0005af8e) cale_week_scroll_pane_g7

0x433a,	// (0x0005afae) cale_week_scroll_pane_g8

0x435e,	// (0x0005afd2) cale_week_scroll_pane_g9

0x4376,	// (0x0005afea) cale_week_scroll_pane_g10

0x438e,	// (0x0005b002) cale_week_scroll_pane_g11

0x43a6,	// (0x0005b01a) cale_week_scroll_pane_g12

0x43be,	// (0x0005b032) cale_week_scroll_pane_g13

0x43be,	// (0x0005b032) cale_week_scroll_pane_g14

0x43be,	// (0x0005b032) cale_week_scroll_pane_g15

0x000f,

0xf151,	// (0x00065dc5) cale_week_scroll_pane_g

0x43fa,	// (0x0005b06e) cale_week_time_pane

0x441e,	// (0x0005b092) grid_cale_week_pane

0xcf28,	// (0x00063b9c) scroll_pane_cp08

0x4444,	// (0x0005b0b8) cell_cale_week_pane_ParamLimits

0x4444,	// (0x0005b0b8) cell_cale_week_pane

0x44d2,	// (0x0005b146) cale_week_day_heading_pane_t1

0x44fc,	// (0x0005b170) cale_week_day_heading_pane_t2

0x452b,	// (0x0005b19f) cale_week_day_heading_pane_t3

0x455a,	// (0x0005b1ce) cale_week_day_heading_pane_t4

0x4589,	// (0x0005b1fd) cale_week_day_heading_pane_t5

0x45c0,	// (0x0005b234) cale_week_day_heading_pane_t6

0x45f7,	// (0x0005b26b) cale_week_day_heading_pane_t7

0x0006,

0xf172,	// (0x00065de6) cale_week_day_heading_pane_t

0xcf45,	// (0x00063bb9) bg_cale_side_pane

0x4621,	// (0x0005b295) cale_week_time_pane_t1

0x463b,	// (0x0005b2af) cale_week_time_pane_t2

0x4655,	// (0x0005b2c9) cale_week_time_pane_t3

0x466f,	// (0x0005b2e3) cale_week_time_pane_t4

0x4689,	// (0x0005b2fd) cale_week_time_pane_t5

0x46a3,	// (0x0005b317) cale_week_time_pane_t6

0x46bd,	// (0x0005b331) cale_week_time_pane_t7

0x46d7,	// (0x0005b34b) cale_week_time_pane_t8

0x0007,

0xf181,	// (0x00065df5) cale_week_time_pane_t

0x46f7,	// (0x0005b36b) cell_cale_week_pane_g2

0x471b,	// (0x0005b38f) cell_cale_week_pane_g3_ParamLimits

0x471b,	// (0x0005b38f) cell_cale_week_pane_g3

0xcf53,	// (0x00063bc7) grid_highlight_pane_cp07

0xcf5b,	// (0x00063bcf) listscroll_gms_pane

0xcf65,	// (0x00063bd9) grid_gms_pane

0xcf6e,	// (0x00063be2) listscroll_gms_pane_g1

0xcf76,	// (0x00063bea) listscroll_gms_pane_g2

0x0001,

0xf192,	// (0x00065e06) listscroll_gms_pane_g

0x4733,	// (0x0005b3a7) scroll_pane_cp010

0x473e,	// (0x0005b3b2) cell_gms_pane_ParamLimits

0x473e,	// (0x0005b3b2) cell_gms_pane

0x4750,	// (0x0005b3c4) cell_gms_pane_g1

0xcf7e,	// (0x00063bf2) cell_gms_pane_g2

0xced6,	// (0x00063b4a) cell_gms_pane_g3

0xcf86,	// (0x00063bfa) cell_gms_pane_g4

0x0003,

0xf197,	// (0x00065e0b) cell_gms_pane_g

0xcf8f,	// (0x00063c03) grid_highlight_pane_cp09

0x652a,	// (0x0005d19e) phob_pre_status_pane_g1

0x6532,	// (0x0005d1a6) phob_pre_status_pane_g2

0x653a,	// (0x0005d1ae) phob_pre_status_pane_g3

0x6542,	// (0x0005d1b6) phob_pre_status_pane_g4

0x0004,

0xf56e,	// (0x000661e2) phob_pre_status_pane_g

0x6552,	// (0x0005d1c6) phob_pre_status_pane_t1

0x6560,	// (0x0005d1d4) phob_pre_status_pane_t2

0x6570,	// (0x0005d1e4) phob_pre_status_pane_t3

0x0002,

0xf579,	// (0x000661ed) phob_pre_status_pane_t

0xcf97,	// (0x00063c0b) bg_list_pane_cp05

0x4760,	// (0x0005b3d4) grid_vorec_pane

0x4768,	// (0x0005b3dc) vorec_t1

0x4776,	// (0x0005b3ea) vorec_t2

0x4784,	// (0x0005b3f8) vorec_t3

0x4792,	// (0x0005b406) vorec_t4

0xbfe8,	// (0x00062c5c) vorec_t5

0xbff6,	// (0x00062c6a) vorec_t6

0x0004,

0xf1a0,	// (0x00065e14) vorec_t

0xc004,	// (0x00062c78) wait_bar_pane_cp01

0x47ae,	// (0x0005b422) cell_vorec_pane_ParamLimits

0x47ae,	// (0x0005b422) cell_vorec_pane

0xcf9f,	// (0x00063c13) cell_vorec_pane_g1

0xca01,	// (0x00063675) grid_highlight_pane_cp05

0xcc7e,	// (0x000638f2) cams_zoom_pane

0xcc7e,	// (0x000638f2) image_vga_pane

0xcce5,	// (0x00063959) main_camera_pane_g1

0xcce5,	// (0x00063959) main_camera_pane_g2

0xcce5,	// (0x00063959) main_camera_pane_g3

0xcce5,	// (0x00063959) main_camera_pane_g4

0xcce5,	// (0x00063959) main_camera_pane_g5

0xcce5,	// (0x00063959) main_camera_pane_g6

0xcce5,	// (0x00063959) main_camera_pane_g7

0x0007,

0xf1ab,	// (0x00065e1f) main_camera_pane_g

0xcfa9,	// (0x00063c1d) main_camera_pane_t1

0xcfa9,	// (0x00063c1d) main_camera_pane_t2

0x0001,

0xf1bc,	// (0x00065e30) main_camera_pane_t

0x47d5,	// (0x0005b449) cams_zoom_pane_cp_ParamLimits

0x47d5,	// (0x0005b449) cams_zoom_pane_cp

0x4809,	// (0x0005b47d) image_cif_pane_ParamLimits

0x4809,	// (0x0005b47d) image_cif_pane

0xc55f,	// (0x000631d3) image_subqcif_pane

0x481b,	// (0x0005b48f) main_video_pane_g1_ParamLimits

0x481b,	// (0x0005b48f) main_video_pane_g1

0x4849,	// (0x0005b4bd) main_video_pane_g2_ParamLimits

0x4849,	// (0x0005b4bd) main_video_pane_g2

0x4883,	// (0x0005b4f7) main_video_pane_g3_ParamLimits

0x4883,	// (0x0005b4f7) main_video_pane_g3

0x4883,	// (0x0005b4f7) main_video_pane_g4_ParamLimits

0x4883,	// (0x0005b4f7) main_video_pane_g4

0x48b7,	// (0x0005b52b) main_video_pane_g5_ParamLimits

0x48b7,	// (0x0005b52b) main_video_pane_g5

0xcfbd,	// (0x00063c31) main_video_pane_g6_ParamLimits

0xcfbd,	// (0x00063c31) main_video_pane_g6

0x0006,

0xf1c1,	// (0x00065e35) main_video_pane_g_ParamLimits

0xf1c1,	// (0x00065e35) main_video_pane_g

0x48d3,	// (0x0005b547) main_video_pane_t1_ParamLimits

0x48d3,	// (0x0005b547) main_video_pane_t1

0xcfd7,	// (0x00063c4b) cams_zoom_pane_g1

0xcfd7,	// (0x00063c4b) cams_zoom_pane_g2

0xcfd7,	// (0x00063c4b) cams_zoom_pane_g3

0xcfd7,	// (0x00063c4b) cams_zoom_pane_g4

0x0003,

0xf1d0,	// (0x00065e44) cams_zoom_pane_g

0x492b,	// (0x0005b59f) grid_cams_pane

0x4945,	// (0x0005b5b9) linegrid_cams_pane

0x4958,	// (0x0005b5cc) cell_cams_pane_ParamLimits

0x4958,	// (0x0005b5cc) cell_cams_pane

0xcfe1,	// (0x00063c55) cams_burst_image_pane

0xcfe9,	// (0x00063c5d) cell_cams_pane_g1

0xca01,	// (0x00063675) grid_highlight_pane_cp03

0xcc74,	// (0x000638e8) mp_bg_pane_g1

0xc55f,	// (0x000631d3) bg_list_pane_cp03

0xc55f,	// (0x000631d3) bg_mp_pane

0xc55f,	// (0x000631d3) grid_mp_pane

0xcfd7,	// (0x00063c4b) media_player_g1

0x0233,	// (0x00056ea7) media_player_t1

0x0233,	// (0x00056ea7) media_player_t2

0x0233,	// (0x00056ea7) media_player_t3

0x0233,	// (0x00056ea7) media_player_t4

0x0233,	// (0x00056ea7) media_player_t5

0x0233,	// (0x00056ea7) media_player_t6

0x0233,	// (0x00056ea7) media_player_t7

0x0006,

0xf558,	// (0x000661cc) media_player_t

0xc55f,	// (0x000631d3) wait_bar_pane_cp02

0xf53d,	// (0x000661b1) main_usb_pane_t

0x04ad,	// (0x00057121) cell_mp_pane

0xcc74,	// (0x000638e8) cell_mp_pane_g1

0xca01,	// (0x00063675) grid_highlight_pane_cp06

0xcff1,	// (0x00063c65) grid_skin_colour_pane

0xcff9,	// (0x00063c6d) list_highlight_pane_cp03

0x4978,	// (0x0005b5ec) skin_g1

0xd001,	// (0x00063c75) skin_t1

0xd010,	// (0x00063c84) skin_t2

0x0001,

0xf1fe,	// (0x00065e72) skin_t

0x4980,	// (0x0005b5f4) cell_skin_colour_pane_ParamLimits

0x4980,	// (0x0005b5f4) cell_skin_colour_pane

0xd01e,	// (0x00063c92) cell_skin_colour_pane_g1

0x49f9,	// (0x0005b66d) call_video_g1_ParamLimits

0x49f9,	// (0x0005b66d) call_video_g1

0x4a15,	// (0x0005b689) call_video_g2_ParamLimits

0x4a15,	// (0x0005b689) call_video_g2

0x0001,

0xf203,	// (0x00065e77) call_video_g_ParamLimits

0xf203,	// (0x00065e77) call_video_g

0x4a67,	// (0x0005b6db) call_video_uplink_pane_cp1_ParamLimits

0x4a67,	// (0x0005b6db) call_video_uplink_pane_cp1

0xd030,	// (0x00063ca4) call_video_uplink_pane_cp2

0x4b06,	// (0x0005b77a) video_down_crop_pane_ParamLimits

0x4b06,	// (0x0005b77a) video_down_crop_pane

0x4bef,	// (0x0005b863) video_down_pane_ParamLimits

0x4bef,	// (0x0005b863) video_down_pane

0xd038,	// (0x00063cac) video_down_subqcif_pane_ParamLimits

0xd038,	// (0x00063cac) video_down_subqcif_pane

0xd050,	// (0x00063cc4) video_down_subqcif_pane_cp_ParamLimits

0xd050,	// (0x00063cc4) video_down_subqcif_pane_cp

0xd076,	// (0x00063cea) im_reading_pane_ParamLimits

0xd076,	// (0x00063cea) im_reading_pane

0x4cff,	// (0x0005b973) im_writing_pane_ParamLimits

0x4cff,	// (0x0005b973) im_writing_pane

0x4d15,	// (0x0005b989) im_reading_pane_t1

0xd090,	// (0x00063d04) list_im_pane

0xd0a1,	// (0x00063d15) scroll_pane_cp07

0x4d4f,	// (0x0005b9c3) im_writing_pane_t1_ParamLimits

0x4d4f,	// (0x0005b9c3) im_writing_pane_t1

0xd0ba,	// (0x00063d2e) im_writing_pane_t2_ParamLimits

0xd0ba,	// (0x00063d2e) im_writing_pane_t2

0x0001,

0xf20d,	// (0x00065e81) im_writing_pane_t_ParamLimits

0xf20d,	// (0x00065e81) im_writing_pane_t

0xca01,	// (0x00063675) input_focus_pane_cp04

0xca01,	// (0x00063675) input_focus_pane_cp05

0x4d64,	// (0x0005b9d8) list_im_single_pane_ParamLimits

0x4d64,	// (0x0005b9d8) list_im_single_pane

0x4d79,	// (0x0005b9ed) list_single_im_pane_t1

0xcf97,	// (0x00063c0b) blid_accuracy_pane

0xcf97,	// (0x00063c0b) blid_compass_pane

0x1a04,	// (0x00058678) main_location_t1

0x1a04,	// (0x00058678) main_location_t2

0x1a04,	// (0x00058678) main_location_t3

0x0002,

0xf567,	// (0x000661db) main_location_t

0xca01,	// (0x00063675) aid_levels_location

0xcc74,	// (0x000638e8) blid_accuracy_pane_g1

0xcc74,	// (0x000638e8) blid_accuracy_pane_g2

0x0001,

0xf25c,	// (0x00065ed0) blid_accuracy_pane_g

0xd102,	// (0x00063d76) wml_content_pane

0xd140,	// (0x00063db4) wml_button_pane_ParamLimits

0xd140,	// (0x00063db4) wml_button_pane

0x4d88,	// (0x0005b9fc) wml_list_single_large_pane_ParamLimits

0x4d88,	// (0x0005b9fc) wml_list_single_large_pane

0x4d9d,	// (0x0005ba11) wml_list_single_medium_pane_ParamLimits

0x4d9d,	// (0x0005ba11) wml_list_single_medium_pane

0x4db4,	// (0x0005ba28) wml_list_single_small_pane_ParamLimits

0x4db4,	// (0x0005ba28) wml_list_single_small_pane

0xd154,	// (0x00063dc8) wml_selection_box_pane_ParamLimits

0xd154,	// (0x00063dc8) wml_selection_box_pane

0xd167,	// (0x00063ddb) wml_list_single_pane_t1

0xd176,	// (0x00063dea) wml_list_single_medium_pane_t1

0xd185,	// (0x00063df9) wml_list_single_large_pane_t1

0xd194,	// (0x00063e08) input_focus_pane_cp02_ParamLimits

0xd194,	// (0x00063e08) input_focus_pane_cp02

0xd1a7,	// (0x00063e1b) wml_selection_box_pane_g1

0xd1b0,	// (0x00063e24) wml_selection_box_pane_t1_ParamLimits

0xd1b0,	// (0x00063e24) wml_selection_box_pane_t1

0xcc5c,	// (0x000638d0) bg_wml_button_pane_ParamLimits

0xcc5c,	// (0x000638d0) bg_wml_button_pane

0xd1c8,	// (0x00063e3c) wml_button_pane_g1

0xd1d0,	// (0x00063e44) wml_button_pane_t1

0xd1c8,	// (0x00063e3c) wml_button_bg_pane_g1

0xd1e0,	// (0x00063e54) wml_button_bg_pane_g2

0xd1e8,	// (0x00063e5c) wml_button_bg_pane_g3

0xd1f0,	// (0x00063e64) wml_button_bg_pane_g4

0xd1f8,	// (0x00063e6c) wml_button_bg_pane_g5

0xd200,	// (0x00063e74) wml_button_bg_pane_g6

0xd208,	// (0x00063e7c) wml_button_bg_pane_g7

0xd210,	// (0x00063e84) wml_button_bg_pane_g8

0xd218,	// (0x00063e8c) wml_button_bg_pane_g9

0x0008,

0xf212,	// (0x00065e86) wml_button_bg_pane_g

0x4dcd,	// (0x0005ba41) bg_list_pane_cp02

0xd220,	// (0x00063e94) mce_header_pane_ParamLimits

0xd220,	// (0x00063e94) mce_header_pane

0xd236,	// (0x00063eaa) mce_icon_pane

0xd236,	// (0x00063eaa) mce_image_pane

0xd23f,	// (0x00063eb3) mce_text_pane_ParamLimits

0xd23f,	// (0x00063eb3) mce_text_pane

0x4dd5,	// (0x0005ba49) scroll_pane_cp03

0xd138,	// (0x00063dac) scroll_pane_cp04

0xd252,	// (0x00063ec6) scroll_pane_cp05_ParamLimits

0xd252,	// (0x00063ec6) scroll_pane_cp05

0x4ddd,	// (0x0005ba51) mce_header_field_pane_ParamLimits

0x4ddd,	// (0x0005ba51) mce_header_field_pane

0x4df4,	// (0x0005ba68) mce_header_field_pane_2_ParamLimits

0x4df4,	// (0x0005ba68) mce_header_field_pane_2

0x4e0a,	// (0x0005ba7e) mce_header_field_pane_3

0x4e12,	// (0x0005ba86) list_single_mce_message_pane_ParamLimits

0x4e12,	// (0x0005ba86) list_single_mce_message_pane

0x4e21,	// (0x0005ba95) list_single_mce_smart_pane_ParamLimits

0x4e21,	// (0x0005ba95) list_single_mce_smart_pane

0xd25e,	// (0x00063ed2) input_focus_pane_cp03

0xd267,	// (0x00063edb) list_header_data_pane

0x4e3b,	// (0x0005baaf) mce_header_field_pane_t1

0x4e49,	// (0x0005babd) list_single_mce_header_pane_ParamLimits

0x4e49,	// (0x0005babd) list_single_mce_header_pane

0xd26f,	// (0x00063ee3) list_single_mce_header_pane_t1

0xd27e,	// (0x00063ef2) list_single_mce_message_pane_g1

0xd286,	// (0x00063efa) list_single_mce_message_pane_t1

0x4e83,	// (0x0005baf7) bg_cale_heading_pane_cp01_ParamLimits

0x4e83,	// (0x0005baf7) bg_cale_heading_pane_cp01

0xd294,	// (0x00063f08) bg_cale_pane_cp02_ParamLimits

0xd294,	// (0x00063f08) bg_cale_pane_cp02

0x4ebd,	// (0x0005bb31) cale_month_corner_pane

0x4edc,	// (0x0005bb50) cale_month_day_heading_pane_ParamLimits

0x4edc,	// (0x0005bb50) cale_month_day_heading_pane

0x4f2e,	// (0x0005bba2) cale_month_pane_g1_ParamLimits

0x4f2e,	// (0x0005bba2) cale_month_pane_g1

0x4f5d,	// (0x0005bbd1) cale_month_pane_g2_ParamLimits

0x4f5d,	// (0x0005bbd1) cale_month_pane_g2

0x4f8d,	// (0x0005bc01) cale_month_pane_g3_ParamLimits

0x4f8d,	// (0x0005bc01) cale_month_pane_g3

0x4fc9,	// (0x0005bc3d) cale_month_pane_g4_ParamLimits

0x4fc9,	// (0x0005bc3d) cale_month_pane_g4

0x5005,	// (0x0005bc79) cale_month_pane_g5_ParamLimits

0x5005,	// (0x0005bc79) cale_month_pane_g5

0x504d,	// (0x0005bcc1) cale_month_pane_g6_ParamLimits

0x504d,	// (0x0005bcc1) cale_month_pane_g6

0x5099,	// (0x0005bd0d) cale_month_pane_g7_ParamLimits

0x5099,	// (0x0005bd0d) cale_month_pane_g7

0x50e9,	// (0x0005bd5d) cale_month_pane_g8_ParamLimits

0x50e9,	// (0x0005bd5d) cale_month_pane_g8

0x513d,	// (0x0005bdb1) cale_month_pane_g9_ParamLimits

0x513d,	// (0x0005bdb1) cale_month_pane_g9

0x518f,	// (0x0005be03) cale_month_pane_g10_ParamLimits

0x518f,	// (0x0005be03) cale_month_pane_g10

0x51e1,	// (0x0005be55) cale_month_pane_g11_ParamLimits

0x51e1,	// (0x0005be55) cale_month_pane_g11

0x5233,	// (0x0005bea7) cale_month_pane_g12_ParamLimits

0x5233,	// (0x0005bea7) cale_month_pane_g12

0x5285,	// (0x0005bef9) cale_month_pane_g13_ParamLimits

0x5285,	// (0x0005bef9) cale_month_pane_g13

0x000c,

0xf225,	// (0x00065e99) cale_month_pane_g_ParamLimits

0xf225,	// (0x00065e99) cale_month_pane_g

0x52d7,	// (0x0005bf4b) cale_month_week_pane

0x52fb,	// (0x0005bf6f) grid_cale_month_pane_ParamLimits

0x52fb,	// (0x0005bf6f) grid_cale_month_pane

0x5344,	// (0x0005bfb8) cale_month_day_heading_pane_t1

0x5386,	// (0x0005bffa) cale_month_day_heading_pane_t2

0x53bb,	// (0x0005c02f) cale_month_day_heading_pane_t3

0x53f0,	// (0x0005c064) cale_month_day_heading_pane_t4

0x542d,	// (0x0005c0a1) cale_month_day_heading_pane_t5

0x5472,	// (0x0005c0e6) cale_month_day_heading_pane_t6

0x54b7,	// (0x0005c12b) cale_month_day_heading_pane_t7

0x0006,

0xf240,	// (0x00065eb4) cale_month_day_heading_pane_t

0xcf45,	// (0x00063bb9) bg_cale_side_pane_cp01

0x5504,	// (0x0005c178) cale_month_week_pane_t1

0x551d,	// (0x0005c191) cale_month_week_pane_t2

0x5536,	// (0x0005c1aa) cale_month_week_pane_t3

0x554f,	// (0x0005c1c3) cale_month_week_pane_t4

0x5568,	// (0x0005c1dc) cale_month_week_pane_t5

0x5581,	// (0x0005c1f5) cale_month_week_pane_t6

0x0005,

0xf24f,	// (0x00065ec3) cale_month_week_pane_t

0x559a,	// (0x0005c20e) cell_cale_month_pane_ParamLimits

0x559a,	// (0x0005c20e) cell_cale_month_pane

0xd2d3,	// (0x00063f47) cell_cale_month_pane_g1

0x56c8,	// (0x0005c33c) cell_cale_month_pane_t1_ParamLimits

0x56c8,	// (0x0005c33c) cell_cale_month_pane_t1

0xcf53,	// (0x00063bc7) grid_highlight_pane_cp08

0xcc74,	// (0x000638e8) main_smil_g1

0x56f4,	// (0x0005c368) smil_status_pane

0xd2df,	// (0x00063f53) smil_text_pane

0x18dc,	// (0x00058550) bg_popup_call3_rect_pane_g8

0x18e4,	// (0x00058558) bg_popup_call3_rect_pane_g9

0x0008,

0xf4e8,	// (0x0006615c) bg_popup_call3_rect_pane_g

0x1adb,	// (0x0005874f) smil_status_volume_pane_g1

0xd2e9,	// (0x00063f5d) smil_status_pane_t1

0xd4d4,	// (0x00064148) volume_smil_pane

0xd300,	// (0x00063f74) list_smil_text_pane

0x5709,	// (0x0005c37d) scroll_pane_cp011

0x5714,	// (0x0005c388) smil_text_list_pane_t1_ParamLimits

0x5714,	// (0x0005c388) smil_text_list_pane_t1

0xd30a,	// (0x00063f7e) aid_volume_smil_ParamLimits

0xd30a,	// (0x00063f7e) aid_volume_smil

0xcc74,	// (0x000638e8) smil_volume_pane_g1

0xcc74,	// (0x000638e8) smil_volume_pane_g2

0x0001,

0xf25c,	// (0x00065ed0) smil_volume_pane_g

0x41ff,	// (0x0005ae73) listscroll_cale_day_pane

0xd32c,	// (0x00063fa0) bg_cale_pane

0xd344,	// (0x00063fb8) list_cale_pane

0xd367,	// (0x00063fdb) scroll_pane_cp09

0xd378,	// (0x00063fec) cale_bg_pane_g1

0xd380,	// (0x00063ff4) cale_bg_pane_g2

0xd388,	// (0x00063ffc) cale_bg_pane_g3

0xd390,	// (0x00064004) cale_bg_pane_g4

0xd398,	// (0x0006400c) cale_bg_pane_g5

0xd3a0,	// (0x00064014) cale_bg_pane_g6

0x00af,	// (0x00056d23) cale_bg_pane_g7

0x00b7,	// (0x00056d2b) cale_bg_pane_g8

0x00bf,	// (0x00056d33) cale_bg_pane_g9

0x0008,

0xf261,	// (0x00065ed5) cale_bg_pane_g

0x5760,	// (0x0005c3d4) list_cale_time_pane_ParamLimits

0x5760,	// (0x0005c3d4) list_cale_time_pane

0x00c7,	// (0x00056d3b) list_cale_time_pane_g1_ParamLimits

0x00c7,	// (0x00056d3b) list_cale_time_pane_g1

0x00d3,	// (0x00056d47) list_cale_time_pane_g2_ParamLimits

0x00d3,	// (0x00056d47) list_cale_time_pane_g2

0x5776,	// (0x0005c3ea) list_cale_time_pane_g3_ParamLimits

0x5776,	// (0x0005c3ea) list_cale_time_pane_g3

0x5784,	// (0x0005c3f8) list_cale_time_pane_g4_ParamLimits

0x5784,	// (0x0005c3f8) list_cale_time_pane_g4

0x5792,	// (0x0005c406) list_cale_time_pane_g5_ParamLimits

0x5792,	// (0x0005c406) list_cale_time_pane_g5

0x0005,

0xf274,	// (0x00065ee8) list_cale_time_pane_g_ParamLimits

0xf274,	// (0x00065ee8) list_cale_time_pane_g

0x00ed,	// (0x00056d61) list_cale_time_pane_t1_ParamLimits

0x00ed,	// (0x00056d61) list_cale_time_pane_t1

0x0115,	// (0x00056d89) list_cale_time_pane_t2_ParamLimits

0x0115,	// (0x00056d89) list_cale_time_pane_t2

0x5a1d,	// (0x0005c691) aid_blid_cardinal_pane

0x5a5b,	// (0x0005c6cf) compass_pane_t4

0x013d,	// (0x00056db1) list_cale_time_pane_t4_ParamLimits

0x013d,	// (0x00056db1) list_cale_time_pane_t4

0x5a69,	// (0x0005c6dd) compass_pane_t5

0x5a77,	// (0x0005c6eb) compass_pane_t6

0x5a85,	// (0x0005c6f9) compass_pane_t7

0x05c7,	// (0x0005723b) navi_pane_cc_t1

0x07a4,	// (0x00057418) aid_phob_thumbnail_center_pane

0x5ed8,	// (0x0005cb4c) main_postcard_pane_g4_ParamLimits

0x0002,

0xf281,	// (0x00065ef5) list_cale_time_pane_t_ParamLimits

0xf281,	// (0x00065ef5) list_cale_time_pane_t

0xc658,	// (0x000632cc) bg_popup_window_pane_cp02_ParamLimits

0xc658,	// (0x000632cc) bg_popup_window_pane_cp02

0x0165,	// (0x00056dd9) heading_pane_cp01_ParamLimits

0x0165,	// (0x00056dd9) heading_pane_cp01

0x0171,	// (0x00056de5) loc_req_pane_ParamLimits

0x0171,	// (0x00056de5) loc_req_pane

0x0181,	// (0x00056df5) loc_type_pane_ParamLimits

0x0181,	// (0x00056df5) loc_type_pane

0x0193,	// (0x00056e07) loc_type_pane_t1_ParamLimits

0x0193,	// (0x00056e07) loc_type_pane_t1

0x01a5,	// (0x00056e19) loc_type_pane_t2_ParamLimits

0x01a5,	// (0x00056e19) loc_type_pane_t2

0x01b7,	// (0x00056e2b) loc_type_pane_t3_ParamLimits

0x01b7,	// (0x00056e2b) loc_type_pane_t3

0x0002,

0xf288,	// (0x00065efc) loc_type_pane_t_ParamLimits

0xf288,	// (0x00065efc) loc_type_pane_t

0x01c9,	// (0x00056e3d) list_loc_req_pane

0x01d3,	// (0x00056e47) scroll_pane_cp012

0x57a0,	// (0x0005c414) list_single_loc_request_popup_menu_pane_ParamLimits

0x57a0,	// (0x0005c414) list_single_loc_request_popup_menu_pane

0x01de,	// (0x00056e52) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0x01de,	// (0x00056e52) list_single_loc_request_popup_menu_pane_g1

0x01ea,	// (0x00056e5e) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0x01ea,	// (0x00056e5e) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf28f,	// (0x00065f03) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf28f,	// (0x00065f03) list_single_loc_request_popup_menu_pane_g

0x01f6,	// (0x00056e6a) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0x01f6,	// (0x00056e6a) list_single_loc_request_popup_menu_pane_t1

0xcc5c,	// (0x000638d0) bg_popup_window_pane_cp03_ParamLimits

0xcc5c,	// (0x000638d0) bg_popup_window_pane_cp03

0x22a1,	// (0x00058f15) heading_loc_req_pane_ParamLimits

0x22a1,	// (0x00058f15) heading_loc_req_pane

0x57ad,	// (0x0005c421) popup_dyc_status_message_window_g1_ParamLimits

0x57ad,	// (0x0005c421) popup_dyc_status_message_window_g1

0x57c1,	// (0x0005c435) popup_dyc_status_message_window_t1_ParamLimits

0x57c1,	// (0x0005c435) popup_dyc_status_message_window_t1

0x57d6,	// (0x0005c44a) popup_dyc_status_message_window_t2_ParamLimits

0x57d6,	// (0x0005c44a) popup_dyc_status_message_window_t2

0x57eb,	// (0x0005c45f) popup_dyc_status_message_window_t3_ParamLimits

0x57eb,	// (0x0005c45f) popup_dyc_status_message_window_t3

0x0002,

0xf294,	// (0x00065f08) popup_dyc_status_message_window_t_ParamLimits

0xf294,	// (0x00065f08) popup_dyc_status_message_window_t

0xca01,	// (0x00063675) bg_heading_pane_cp01

0x020c,	// (0x00056e80) heading_loc_req_pane_g1

0x0214,	// (0x00056e88) heading_loc_req_pane_g2

0x021c,	// (0x00056e90) heading_loc_req_pane_g3

0x0002,

0xf29b,	// (0x00065f0f) heading_loc_req_pane_g

0x0224,	// (0x00056e98) heading_loc_req_pane_t1

0x0243,	// (0x00056eb7) bg_popup_sub_pane_cp01_ParamLimits

0x0243,	// (0x00056eb7) bg_popup_sub_pane_cp01

0x0251,	// (0x00056ec5) popup_cale_events_window_g1_ParamLimits

0x0251,	// (0x00056ec5) popup_cale_events_window_g1

0x0271,	// (0x00056ee5) popup_cale_events_window_g2_ParamLimits

0x0271,	// (0x00056ee5) popup_cale_events_window_g2

0x0001,

0xf2bd,	// (0x00065f31) popup_cale_events_window_g_ParamLimits

0xf2bd,	// (0x00065f31) popup_cale_events_window_g

0x0291,	// (0x00056f05) popup_cale_events_window_t1_ParamLimits

0x0291,	// (0x00056f05) popup_cale_events_window_t1

0x02a3,	// (0x00056f17) popup_cale_events_window_t2_ParamLimits

0x02a3,	// (0x00056f17) popup_cale_events_window_t2

0x02e1,	// (0x00056f55) popup_cale_events_window_t3_ParamLimits

0x02e1,	// (0x00056f55) popup_cale_events_window_t3

0x031b,	// (0x00056f8f) popup_cale_events_window_t4_ParamLimits

0x031b,	// (0x00056f8f) popup_cale_events_window_t4

0x0003,

0xf2c2,	// (0x00065f36) popup_cale_events_window_t_ParamLimits

0xf2c2,	// (0x00065f36) popup_cale_events_window_t

0x5813,	// (0x0005c487) call_type_pane

0x5823,	// (0x0005c497) popup_call_status_window_g1

0x5837,	// (0x0005c4ab) popup_call_status_window_g2

0x584b,	// (0x0005c4bf) popup_call_status_window_g3

0x0002,

0xf2cb,	// (0x00065f3f) popup_call_status_window_g

0x035f,	// (0x00056fd3) call_type_pane_g1

0x0368,	// (0x00056fdc) call_type_pane_g2

0x0001,

0xf2d2,	// (0x00065f46) call_type_pane_g

0xca01,	// (0x00063675) bg_popup_sub_pane_cp02

0x0371,	// (0x00056fe5) listscroll_popup_wml_pane

0x0379,	// (0x00056fed) list_wml_pane

0x0383,	// (0x00056ff7) scroll_pane_cp013

0x038e,	// (0x00057002) list_single_graphic_popup_wml_pane_ParamLimits

0x038e,	// (0x00057002) list_single_graphic_popup_wml_pane

0xcc74,	// (0x000638e8) list_single_graphic_popup_wml_pane_g1

0x03a2,	// (0x00057016) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf2d7,	// (0x00065f4b) list_single_graphic_popup_wml_pane_g

0x03aa,	// (0x0005701e) list_single_graphic_popup_wml_pane_t1

0x03c0,	// (0x00057034) aid_call_pane

0xcc54,	// (0x000638c8) popup_clock_analogue_window_g1

0xcc54,	// (0x000638c8) popup_clock_analogue_window_g2

0xd3a8,	// (0x0006401c) popup_clock_analogue_window_g3

0xd3a8,	// (0x0006401c) popup_clock_analogue_window_g4

0xcc74,	// (0x000638e8) popup_clock_analogue_window_g5

0x0004,

0xf2dc,	// (0x00065f50) popup_clock_analogue_window_g

0xd3b0,	// (0x00064024) popup_clock_analogue_window_t1

0xd3be,	// (0x00064032) clock_digital_number_pane_ParamLimits

0xd3be,	// (0x00064032) clock_digital_number_pane

0xd3ca,	// (0x0006403e) clock_digital_number_pane_cp02_ParamLimits

0xd3ca,	// (0x0006403e) clock_digital_number_pane_cp02

0xd3d6,	// (0x0006404a) clock_digital_number_pane_cp03_ParamLimits

0xd3d6,	// (0x0006404a) clock_digital_number_pane_cp03

0xd3e2,	// (0x00064056) clock_digital_number_pane_cp04_ParamLimits

0xd3e2,	// (0x00064056) clock_digital_number_pane_cp04

0xd3ee,	// (0x00064062) clock_digital_separator_pane_ParamLimits

0xd3ee,	// (0x00064062) clock_digital_separator_pane

0xd3fa,	// (0x0006406e) popup_clock_digital_window_t1

0xcc74,	// (0x000638e8) clock_digital_number_pane_g1

0xcc74,	// (0x000638e8) clock_digital_number_pane_g2

0x0001,

0xf25c,	// (0x00065ed0) clock_digital_number_pane_g

0xcc74,	// (0x000638e8) clock_digital_separator_pane_g1

0xcc74,	// (0x000638e8) clock_digital_separator_pane_g2

0x0001,

0xf25c,	// (0x00065ed0) clock_digital_separator_pane_g

0xca01,	// (0x00063675) bg_popup_window_pane_cp04

0x03c8,	// (0x0005703c) heading_pane_cp03

0xcf97,	// (0x00063c0b) listscroll_popup_gms_pane

0xca01,	// (0x00063675) grid_large_graphic_popup_pane

0x03d1,	// (0x00057045) listscroll_popup_gms_pane_g1

0x03da,	// (0x0005704e) listscroll_popup_gms_pane_g2

0x0001,

0xf2e7,	// (0x00065f5b) listscroll_popup_gms_pane_g

0x03e3,	// (0x00057057) scroll_pane_cp014

0xccd7,	// (0x0006394b) cell_large_graphic_popup_pane_ParamLimits

0xccd7,	// (0x0006394b) cell_large_graphic_popup_pane

0xcce5,	// (0x00063959) cell_large_graphic_popup_pane_g1_ParamLimits

0xcce5,	// (0x00063959) cell_large_graphic_popup_pane_g1

0x03ec,	// (0x00057060) cell_large_graphic_popup_pane_g2_ParamLimits

0x03ec,	// (0x00057060) cell_large_graphic_popup_pane_g2

0x03fa,	// (0x0005706e) cell_large_graphic_popup_pane_g3_ParamLimits

0x03fa,	// (0x0005706e) cell_large_graphic_popup_pane_g3

0x0408,	// (0x0005707c) cell_large_graphic_popup_pane_g4_ParamLimits

0x0408,	// (0x0005707c) cell_large_graphic_popup_pane_g4

0x0003,

0xf2ec,	// (0x00065f60) cell_large_graphic_popup_pane_g_ParamLimits

0xf2ec,	// (0x00065f60) cell_large_graphic_popup_pane_g

0xca01,	// (0x00063675) grid_highlight_pane_cp010

0xcc74,	// (0x000638e8) bg_popup_call_pane_g1

0x0419,	// (0x0005708d) list_single_graphic_popup_conf_pane_ParamLimits

0x0419,	// (0x0005708d) list_single_graphic_popup_conf_pane

0x042c,	// (0x000570a0) list_highlight_pane_cp01

0x0435,	// (0x000570a9) list_single_graphic_popup_conf_pane_g1

0x043d,	// (0x000570b1) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf2f5,	// (0x00065f69) list_single_graphic_popup_conf_pane_g

0x0445,	// (0x000570b9) list_single_graphic_popup_conf_pane_t1

0x0453,	// (0x000570c7) linegrid_cams_pane_g1

0x585a,	// (0x0005c4ce) linegrid_cams_pane_g2

0xced6,	// (0x00063b4a) linegrid_cams_pane_g3

0x045c,	// (0x000570d0) linegrid_cams_pane_g4

0x5863,	// (0x0005c4d7) linegrid_cams_pane_g5

0x586c,	// (0x0005c4e0) linegrid_cams_pane_g6

0xcf86,	// (0x00063bfa) linegrid_cams_pane_g7

0x0006,

0xf2fa,	// (0x00065f6e) linegrid_cams_pane_g

0x0465,	// (0x000570d9) popup_clock_analogue_window

0x0465,	// (0x000570d9) popup_clock_digital_window

0xca01,	// (0x00063675) popup_phob_thumbnail_window

0xcc74,	// (0x000638e8) call_video_uplink_pane_g1

0x046e,	// (0x000570e2) call_video_uplink_pane_g2

0x0001,

0xf309,	// (0x00065f7d) call_video_uplink_pane_g

0x0476,	// (0x000570ea) video_uplink_pane

0x047e,	// (0x000570f2) mce_image_pane_g1

0x5877,	// (0x0005c4eb) mce_image_pane_g2

0x587f,	// (0x0005c4f3) mce_image_pane_g3

0x5887,	// (0x0005c4fb) mce_image_pane_g4

0x588f,	// (0x0005c503) mce_image_pane_g5

0x0004,

0xf30e,	// (0x00065f82) mce_image_pane_g

0x0488,	// (0x000570fc) control_top_pane_stacon_cp01_ParamLimits

0x0488,	// (0x000570fc) control_top_pane_stacon_cp01

0x049c,	// (0x00057110) uni_indicator_pane_stacon_cp01_ParamLimits

0x049c,	// (0x00057110) uni_indicator_pane_stacon_cp01

0x04ad,	// (0x00057121) bg_popup_sub_pane_cp03

0x5897,	// (0x0005c50b) chi_dic_find_pane

0x589f,	// (0x0005c513) listscroll_chi_dic_pane

0x58a8,	// (0x0005c51c) main_pane_chidic_g1

0x58bb,	// (0x0005c52f) chi_dic_find_pane_t1

0x04b7,	// (0x0005712b) find_chidic_pane

0x04c0,	// (0x00057134) chi_dic_list_pane_ParamLimits

0x04c0,	// (0x00057134) chi_dic_list_pane

0x04d1,	// (0x00057145) scroll_pane_cp020

0x58c9,	// (0x0005c53d) find_chidic_pane_t1

0xca01,	// (0x00063675) input_focus_pane_cp06

0x58d8,	// (0x0005c54c) list_chi_dic_pane_ParamLimits

0x58d8,	// (0x0005c54c) list_chi_dic_pane

0x58ea,	// (0x0005c55e) list_chi_dic_pane_t1_ParamLimits

0x58ea,	// (0x0005c55e) list_chi_dic_pane_t1

0xca01,	// (0x00063675) list_highlight_pane_cp020

0x04d9,	// (0x0005714d) bg_cale_heading_pane_g1

0x58fd,	// (0x0005c571) bg_cale_heading_pane_g2

0x5905,	// (0x0005c579) bg_cale_heading_pane_g3

0x590d,	// (0x0005c581) bg_cale_heading_pane_g4

0x5917,	// (0x0005c58b) bg_cale_heading_pane_g5

0x5921,	// (0x0005c595) bg_cale_heading_pane_g6

0x5929,	// (0x0005c59d) bg_cale_heading_pane_g7

0x5931,	// (0x0005c5a5) bg_cale_heading_pane_g8

0x593b,	// (0x0005c5af) bg_cale_heading_pane_g9

0x0008,

0xf319,	// (0x00065f8d) bg_cale_heading_pane_g

0x04d9,	// (0x0005714d) bg_cale_side_pane_g1

0x5945,	// (0x0005c5b9) bg_cale_side_pane_g2

0x594d,	// (0x0005c5c1) bg_cale_side_pane_g3

0x5955,	// (0x0005c5c9) bg_cale_side_pane_g4

0x595d,	// (0x0005c5d1) bg_cale_side_pane_g5

0x5965,	// (0x0005c5d9) bg_cale_side_pane_g6

0x596d,	// (0x0005c5e1) bg_cale_side_pane_g7

0x5975,	// (0x0005c5e9) bg_cale_side_pane_g8

0x597d,	// (0x0005c5f1) bg_cale_side_pane_g9

0x0008,

0xf32c,	// (0x00065fa0) bg_cale_side_pane_g

0x5985,	// (0x0005c5f9) popup_call_status_window_ParamLimits

0x5985,	// (0x0005c5f9) popup_call_status_window

0x04e1,	// (0x00057155) stacon_top_pane

0x04e9,	// (0x0005715d) status_pane_ParamLimits

0x04e9,	// (0x0005715d) status_pane

0x04fe,	// (0x00057172) status_small_pane

0x0506,	// (0x0005717a) control_pane

0xca01,	// (0x00063675) stacon_bottom_pane

0x050e,	// (0x00057182) list_single_mce_smart_pane_t1_ParamLimits

0x050e,	// (0x00057182) list_single_mce_smart_pane_t1

0x0521,	// (0x00057195) list_single_mce_smart_pane_t2_ParamLimits

0x0521,	// (0x00057195) list_single_mce_smart_pane_t2

0x0001,

0xf33f,	// (0x00065fb3) list_single_mce_smart_pane_t_ParamLimits

0xf33f,	// (0x00065fb3) list_single_mce_smart_pane_t

0x59cc,	// (0x0005c640) compass_pane

0x59d5,	// (0x0005c649) main_location2_pane_t1

0x59e7,	// (0x0005c65b) main_location2_pane_t2

0x59f9,	// (0x0005c66d) main_location2_pane_t3

0x0003,

0xf344,	// (0x00065fb8) main_location2_pane_t

0x0540,	// (0x000571b4) compass_pane_g1_ParamLimits

0x0540,	// (0x000571b4) compass_pane_g1

0x5a3d,	// (0x0005c6b1) compass_pane_t1

0x5a4c,	// (0x0005c6c0) compass_pane_t2

0x0005,

0xf34d,	// (0x00065fc1) compass_pane_t

0x5a93,	// (0x0005c707) text_secondary_cp61

0x05be,	// (0x00057232) navi_pane_cams_g5

0x063a,	// (0x000572ae) navi_pane_im_t1

0x0648,	// (0x000572bc) navi_pane_mp_g1_ParamLimits

0x0648,	// (0x000572bc) navi_pane_mp_g1

0x065c,	// (0x000572d0) navi_pane_mp_g2_ParamLimits

0x065c,	// (0x000572d0) navi_pane_mp_g2

0x0668,	// (0x000572dc) navi_pane_mp_g3_ParamLimits

0x0668,	// (0x000572dc) navi_pane_mp_g3

0x0002,

0xf361,	// (0x00065fd5) navi_pane_mp_g_ParamLimits

0xf361,	// (0x00065fd5) navi_pane_mp_g

0x0674,	// (0x000572e8) navi_pane_mp_t1

0x0682,	// (0x000572f6) navi_pane_mp_t2

0x0002,

0xf368,	// (0x00065fdc) navi_pane_mp_t

0x06ed,	// (0x00057361) navi_pane_vt_g1

0x0674,	// (0x000572e8) navi_pane_vt_t1

0x06f5,	// (0x00057369) navi_slider_pane

0xcf97,	// (0x00063c0b) zooming_pane

0x0705,	// (0x00057379) navi_slider_pane_g1

0xd417,	// (0x0006408b) navi_slider_pane_g2

0x0006,

0xf36f,	// (0x00065fe3) navi_slider_pane_g

0x0729,	// (0x0005739d) aid_levels_zoom

0x0731,	// (0x000573a5) zooming_pane_g1

0x0739,	// (0x000573ad) zooming_pane_g2

0x0739,	// (0x000573ad) zooming_pane_g3

0x0002,

0xf37e,	// (0x00065ff2) zooming_pane_g

0x0741,	// (0x000573b5) level_10_zoom

0x074a,	// (0x000573be) level_11_zoom

0x0753,	// (0x000573c7) level_1_zoom

0x075c,	// (0x000573d0) level_2_zoom

0x0765,	// (0x000573d9) level_3_zoom

0x076e,	// (0x000573e2) level_4_zoom

0x0777,	// (0x000573eb) level_5_zoom

0x0780,	// (0x000573f4) level_6_zoom

0x0789,	// (0x000573fd) level_7_zoom

0x0792,	// (0x00057406) level_8_zoom

0x079b,	// (0x0005740f) level_9_zoom

0x07ac,	// (0x00057420) popup_phob_thumbnail_window_g1

0x07b4,	// (0x00057428) popup_phob_thumbnail_window_g2

0x0001,

0xf385,	// (0x00065ff9) popup_phob_thumbnail_window_g

0x6580,	// (0x0005d1f4) level_1_location

0x6588,	// (0x0005d1fc) level_2_location

0x6590,	// (0x0005d204) level_3_location

0x6598,	// (0x0005d20c) level_4_location

0xcf97,	// (0x00063c0b) level_5_location

0x5ae4,	// (0x0005c758) mce_icon_pane_g1

0x5aec,	// (0x0005c760) mce_icon_pane_g2

0x0001,

0xf38a,	// (0x00065ffe) mce_icon_pane_g

0x2732,	// (0x000593a6) main_mup_pane_g1_ParamLimits

0x2732,	// (0x000593a6) main_mup_pane_g1

0x2732,	// (0x000593a6) main_mup_pane_g2_ParamLimits

0x2732,	// (0x000593a6) main_mup_pane_g2

0x2732,	// (0x000593a6) main_mup_pane_g3_ParamLimits

0x2732,	// (0x000593a6) main_mup_pane_g3

0x2732,	// (0x000593a6) main_mup_pane_g4_ParamLimits

0x2732,	// (0x000593a6) main_mup_pane_g4

0x2732,	// (0x000593a6) main_mup_pane_g5_ParamLimits

0x2732,	// (0x000593a6) main_mup_pane_g5

0x2732,	// (0x000593a6) main_mup_pane_g6_ParamLimits

0x2732,	// (0x000593a6) main_mup_pane_g6

0x2732,	// (0x000593a6) main_mup_pane_g7_ParamLimits

0x2732,	// (0x000593a6) main_mup_pane_g7

0x2732,	// (0x000593a6) main_mup_pane_g8_ParamLimits

0x2732,	// (0x000593a6) main_mup_pane_g8

0x2732,	// (0x000593a6) main_mup_pane_g9_ParamLimits

0x2732,	// (0x000593a6) main_mup_pane_g9

0x2732,	// (0x000593a6) main_mup_pane_g10_ParamLimits

0x2732,	// (0x000593a6) main_mup_pane_g10

0x2732,	// (0x000593a6) main_mup_pane_g11_ParamLimits

0x2732,	// (0x000593a6) main_mup_pane_g11

0xcce5,	// (0x00063959) main_mup_pane_g12_ParamLimits

0xcce5,	// (0x00063959) main_mup_pane_g12

0x2732,	// (0x000593a6) main_mup_pane_g13_ParamLimits

0x2732,	// (0x000593a6) main_mup_pane_g13

0x000c,

0xf38f,	// (0x00066003) main_mup_pane_g_ParamLimits

0xf38f,	// (0x00066003) main_mup_pane_g

0x2465,	// (0x000590d9) main_mup_pane_t1_ParamLimits

0x2465,	// (0x000590d9) main_mup_pane_t1

0x2465,	// (0x000590d9) main_mup_pane_t2_ParamLimits

0x2465,	// (0x000590d9) main_mup_pane_t2

0x2465,	// (0x000590d9) main_mup_pane_t3_ParamLimits

0x2465,	// (0x000590d9) main_mup_pane_t3

0xcfa9,	// (0x00063c1d) main_mup_pane_t4_ParamLimits

0xcfa9,	// (0x00063c1d) main_mup_pane_t4

0xcfa9,	// (0x00063c1d) main_mup_pane_t5_ParamLimits

0xcfa9,	// (0x00063c1d) main_mup_pane_t5

0xd429,	// (0x0006409d) main_mup_pane_t6_ParamLimits

0xd429,	// (0x0006409d) main_mup_pane_t6

0x0005,

0xf3aa,	// (0x0006601e) main_mup_pane_t_ParamLimits

0xf3aa,	// (0x0006601e) main_mup_pane_t

0xccd7,	// (0x0006394b) mup_progress_pane_ParamLimits

0xccd7,	// (0x0006394b) mup_progress_pane

0x1a58,	// (0x000586cc) mup_visualizer_pane_ParamLimits

0x1a58,	// (0x000586cc) mup_visualizer_pane

0x1a58,	// (0x000586cc) mup_volume_pane_ParamLimits

0x1a58,	// (0x000586cc) mup_volume_pane

0xccf3,	// (0x00063967) mup_visualizer_pane_g1_ParamLimits

0xccf3,	// (0x00063967) mup_visualizer_pane_g1

0x07ca,	// (0x0005743e) mup_visualizer_pane_g2_ParamLimits

0x07ca,	// (0x0005743e) mup_visualizer_pane_g2

0xcce5,	// (0x00063959) mup_visualizer_pane_g3_ParamLimits

0xcce5,	// (0x00063959) mup_visualizer_pane_g3

0x0002,

0xf3b7,	// (0x0006602b) mup_visualizer_pane_g_ParamLimits

0xf3b7,	// (0x0006602b) mup_visualizer_pane_g

0xcfd7,	// (0x00063c4b) mup_volume_pane_g1

0xcfd7,	// (0x00063c4b) mup_volume_pane_g2

0x0001,

0xf3be,	// (0x00066032) mup_volume_pane_g

0xcfd7,	// (0x00063c4b) mup_progress_pane_g1

0xcfd7,	// (0x00063c4b) mup_progress_pane_g2

0xcfd7,	// (0x00063c4b) mup_progress_pane_g3

0x0002,

0xf3c3,	// (0x00066037) mup_progress_pane_g

0xca01,	// (0x00063675) bg_popup_window_pane_cp05

0x07d8,	// (0x0005744c) heading_pane_cp02_ParamLimits

0x07d8,	// (0x0005744c) heading_pane_cp02

0x07f2,	// (0x00057466) list_popup_blid_pane

0x07fa,	// (0x0005746e) list_blid_sat_info_pane_ParamLimits

0x07fa,	// (0x0005746e) list_blid_sat_info_pane

0x080d,	// (0x00057481) list_blid_sat_info_pane_g1

0x0815,	// (0x00057489) list_blid_sat_info_pane_t1

0x5bec,	// (0x0005c860) mup_equalizer_pane_ParamLimits

0x5bec,	// (0x0005c860) mup_equalizer_pane

0x5c05,	// (0x0005c879) mup_equalizer_pane_cp1_ParamLimits

0x5c05,	// (0x0005c879) mup_equalizer_pane_cp1

0x5c22,	// (0x0005c896) mup_equalizer_pane_cp2_ParamLimits

0x5c22,	// (0x0005c896) mup_equalizer_pane_cp2

0x5c3f,	// (0x0005c8b3) mup_equalizer_pane_cp3_ParamLimits

0x5c3f,	// (0x0005c8b3) mup_equalizer_pane_cp3

0x5c60,	// (0x0005c8d4) mup_equalizer_pane_cp4_ParamLimits

0x5c60,	// (0x0005c8d4) mup_equalizer_pane_cp4

0x5c81,	// (0x0005c8f5) mup_equalizer_pane_cp5

0x5c95,	// (0x0005c909) mup_equalizer_pane_cp6

0x5ca9,	// (0x0005c91d) mup_equalizer_pane_cp7

0x195c,	// (0x000585d0) bg_popup_call_poc_act_pane_g9

0x1964,	// (0x000585d8) bg_popup_call_poc_act_pane_g10

0x196c,	// (0x000585e0) bg_popup_call_poc_act_pane_g11

0x000a,

0xcc5c,	// (0x000638d0) mup_scale_pane

0xcc74,	// (0x000638e8) mup_scale_pane_g1

0x0823,	// (0x00057497) mup_scale_pane_g2

0x0006,

0xf3df,	// (0x00066053) mup_scale_pane_g

0x0847,	// (0x000574bb) msg_data_pane

0x084f,	// (0x000574c3) scroll_pane_cp017

0x5ccf,	// (0x0005c943) bg_list_pane_cp04_ParamLimits

0x5ccf,	// (0x0005c943) bg_list_pane_cp04

0x0857,	// (0x000574cb) msg_data_pane_g1

0x5cef,	// (0x0005c963) msg_data_pane_g2

0x5cf7,	// (0x0005c96b) msg_data_pane_g3

0x5cff,	// (0x0005c973) msg_data_pane_g4

0x5d07,	// (0x0005c97b) msg_data_pane_g5

0x5d0f,	// (0x0005c983) msg_data_pane_g6

0x5d17,	// (0x0005c98b) msg_data_pane_g7

0x0006,

0xf3ee,	// (0x00066062) msg_data_pane_g

0x5d1f,	// (0x0005c993) msg_text_pane_ParamLimits

0x5d1f,	// (0x0005c993) msg_text_pane

0x5d4e,	// (0x0005c9c2) qrid_highlight_pane_cp011_ParamLimits

0x5d4e,	// (0x0005c9c2) qrid_highlight_pane_cp011

0xca01,	// (0x00063675) msg_body_pane

0xca01,	// (0x00063675) msg_header_pane

0x0868,	// (0x000574dc) input_focus_pane_cp07

0x5d72,	// (0x0005c9e6) msg_header_pane_t1_ParamLimits

0x5d72,	// (0x0005c9e6) msg_header_pane_t1

0x5d88,	// (0x0005c9fc) msg_header_pane_t2_ParamLimits

0x5d88,	// (0x0005c9fc) msg_header_pane_t2

0x0001,

0xf402,	// (0x00066076) msg_header_pane_t_ParamLimits

0xf402,	// (0x00066076) msg_header_pane_t

0x087d,	// (0x000574f1) msg_body_pane_g1

0x5d9f,	// (0x0005ca13) msg_body_pane_t1_ParamLimits

0x5d9f,	// (0x0005ca13) msg_body_pane_t1

0x5dd0,	// (0x0005ca44) msg_body_pane_t2_ParamLimits

0x5dd0,	// (0x0005ca44) msg_body_pane_t2

0x5de2,	// (0x0005ca56) msg_body_pane_t3_ParamLimits

0x5de2,	// (0x0005ca56) msg_body_pane_t3

0x0002,

0xf407,	// (0x0006607b) msg_body_pane_t_ParamLimits

0xf407,	// (0x0006607b) msg_body_pane_t

0x5e2e,	// (0x0005caa2) main_viewer_pane_g1_ParamLimits

0x5e2e,	// (0x0005caa2) main_viewer_pane_g1

0x5e3c,	// (0x0005cab0) main_viewer_pane_g2_ParamLimits

0x5e3c,	// (0x0005cab0) main_viewer_pane_g2

0x5e4a,	// (0x0005cabe) main_viewer_pane_g3_ParamLimits

0x5e4a,	// (0x0005cabe) main_viewer_pane_g3

0x5e59,	// (0x0005cacd) main_viewer_pane_g4_ParamLimits

0x5e59,	// (0x0005cacd) main_viewer_pane_g4

0xd455,	// (0x000640c9) main_viewer_pane_g5_ParamLimits

0xd455,	// (0x000640c9) main_viewer_pane_g5

0xd455,	// (0x000640c9) main_viewer_pane_g7_ParamLimits

0xd455,	// (0x000640c9) main_viewer_pane_g7

0x01de,	// (0x00056e52) main_viewer_pane_g8_ParamLimits

0x01de,	// (0x00056e52) main_viewer_pane_g8

0x0007,

0xf417,	// (0x0006608b) main_viewer_pane_g_ParamLimits

0xf417,	// (0x0006608b) main_viewer_pane_g

0x0885,	// (0x000574f9) viewer_content_pane_ParamLimits

0x0885,	// (0x000574f9) viewer_content_pane

0x5e95,	// (0x0005cb09) main_postcard_pane_g1_ParamLimits

0x5e95,	// (0x0005cb09) main_postcard_pane_g1

0x5eab,	// (0x0005cb1f) main_postcard_pane_g2_ParamLimits

0x5eab,	// (0x0005cb1f) main_postcard_pane_g2

0x5ec1,	// (0x0005cb35) main_postcard_pane_g3_ParamLimits

0x5ec1,	// (0x0005cb35) main_postcard_pane_g3

0x0005,

0xf428,	// (0x0006609c) main_postcard_pane_g_ParamLimits

0xf428,	// (0x0006609c) main_postcard_pane_g

0x5ed8,	// (0x0005cb4c) main_postcard_pane_g4

0x1aee,	// (0x00058762) smil_status_volume_pane_g2

0x5f1b,	// (0x0005cb8f) postcard_pane_ParamLimits

0x5f1b,	// (0x0005cb8f) postcard_pane

0x08a1,	// (0x00057515) postcard_pane_g1_ParamLimits

0x08a1,	// (0x00057515) postcard_pane_g1

0x5f5d,	// (0x0005cbd1) postcard_pane_g2_ParamLimits

0x5f5d,	// (0x0005cbd1) postcard_pane_g2

0x5f69,	// (0x0005cbdd) postcard_pane_g3_ParamLimits

0x5f69,	// (0x0005cbdd) postcard_pane_g3

0x0893,	// (0x00057507) postcard_pane_g4_ParamLimits

0x0893,	// (0x00057507) postcard_pane_g4

0x5f75,	// (0x0005cbe9) postcard_pane_g5_ParamLimits

0x5f75,	// (0x0005cbe9) postcard_pane_g5

0x5f8a,	// (0x0005cbfe) postcard_pane_g6_ParamLimits

0x5f8a,	// (0x0005cbfe) postcard_pane_g6

0x08a1,	// (0x00057515) postcard_pane_g7_ParamLimits

0x08a1,	// (0x00057515) postcard_pane_g7

0x0006,

0xf435,	// (0x000660a9) postcard_pane_g_ParamLimits

0xf435,	// (0x000660a9) postcard_pane_g

0x5f9e,	// (0x0005cc12) main_mp2_pane_g1_ParamLimits

0x5f9e,	// (0x0005cc12) main_mp2_pane_g1

0x5faa,	// (0x0005cc1e) main_mp2_pane_g2_ParamLimits

0x5faa,	// (0x0005cc1e) main_mp2_pane_g2

0x5fb6,	// (0x0005cc2a) main_mp2_pane_g3_ParamLimits

0x5fb6,	// (0x0005cc2a) main_mp2_pane_g3

0x0002,

0xf444,	// (0x000660b8) main_mp2_pane_g_ParamLimits

0xf444,	// (0x000660b8) main_mp2_pane_g

0x5fc2,	// (0x0005cc36) main_mp2_pane_t1_ParamLimits

0x5fc2,	// (0x0005cc36) main_mp2_pane_t1

0x5fd7,	// (0x0005cc4b) main_mp2_pane_t2_ParamLimits

0x5fd7,	// (0x0005cc4b) main_mp2_pane_t2

0x5fe9,	// (0x0005cc5d) main_mp2_pane_t3_ParamLimits

0x5fe9,	// (0x0005cc5d) main_mp2_pane_t3

0x0002,

0xf44b,	// (0x000660bf) main_mp2_pane_t_ParamLimits

0xf44b,	// (0x000660bf) main_mp2_pane_t

0x08af,	// (0x00057523) pec_content_pane_ParamLimits

0x08af,	// (0x00057523) pec_content_pane

0xd138,	// (0x00063dac) scroll_pane_cp015

0x08c1,	// (0x00057535) pec_attribute_pane_ParamLimits

0x08c1,	// (0x00057535) pec_attribute_pane

0x5ffb,	// (0x0005cc6f) pec_content_pane_g1_ParamLimits

0x5ffb,	// (0x0005cc6f) pec_content_pane_g1

0x08d1,	// (0x00057545) pec_content_pane_t1_ParamLimits

0x08d1,	// (0x00057545) pec_content_pane_t1

0x08e3,	// (0x00057557) pec_content_pane_t2_ParamLimits

0x08e3,	// (0x00057557) pec_content_pane_t2

0x0001,

0xf452,	// (0x000660c6) pec_content_pane_t_ParamLimits

0xf452,	// (0x000660c6) pec_content_pane_t

0x6007,	// (0x0005cc7b) list_single_graphic_pane_cp01_ParamLimits

0x6007,	// (0x0005cc7b) list_single_graphic_pane_cp01

0xcc5c,	// (0x000638d0) bg_popup_sub_pane_cp04

0x08f5,	// (0x00057569) popup_mup_playback_window_g1

0x0901,	// (0x00057575) popup_mup_playback_window_t1

0x0916,	// (0x0005758a) popup_mup_playback_window_t2

0x0001,

0xf457,	// (0x000660cb) popup_mup_playback_window_t

0x094d,	// (0x000575c1) main_image_pane_g1_ParamLimits

0x094d,	// (0x000575c1) main_image_pane_g1

0x0990,	// (0x00057604) scroll_pane_cp018_ParamLimits

0x0990,	// (0x00057604) scroll_pane_cp018

0x09a8,	// (0x0005761c) scroll_pane_cp016_ParamLimits

0x09a8,	// (0x0005761c) scroll_pane_cp016

0x60d5,	// (0x0005cd49) smil2_image_pane_ParamLimits

0x60d5,	// (0x0005cd49) smil2_image_pane

0x6105,	// (0x0005cd79) smil2_root_pane_ParamLimits

0x6105,	// (0x0005cd79) smil2_root_pane

0x613d,	// (0x0005cdb1) smil2_text_pane_ParamLimits

0x613d,	// (0x0005cdb1) smil2_text_pane

0xca01,	// (0x00063675) bg_list_pane_cp06

0x09e4,	// (0x00057658) grid_radio_pane

0xca01,	// (0x00063675) bg_popup_window_pane_cp06

0x09ec,	// (0x00057660) main_fmradio_pane_t1

0x19b4,	// (0x00058628) heading_pane_cp04

0x09fa,	// (0x0005766e) main_fmradio_pane_t2

0x19bc,	// (0x00058630) popup_cale_lunar_info_window_g1

0x0a08,	// (0x0005767c) main_fmradio_pane_t3

0x19c4,	// (0x00058638) popup_cale_lunar_info_window_g2

0x0a16,	// (0x0005768a) main_fmradio_pane_t4

0x0001,

0x0a24,	// (0x00057698) main_fmradio_pane_t5

0x0004,

0xf54a,	// (0x000661be) popup_cale_lunar_info_window_g

0xf46c,	// (0x000660e0) main_fmradio_pane_t

0x0a32,	// (0x000576a6) wait_bar_pane_cp03

0x0a3a,	// (0x000576ae) cell_fmradio_pane_ParamLimits

0x0a3a,	// (0x000576ae) cell_fmradio_pane

0x08a1,	// (0x00057515) cell_fmradio_pane_g1_ParamLimits

0x08a1,	// (0x00057515) cell_fmradio_pane_g1

0xca01,	// (0x00063675) grid_highlight_pane_cp011

0x0a4d,	// (0x000576c1) poc_content_pane_ParamLimits

0x0a4d,	// (0x000576c1) poc_content_pane

0x0a5f,	// (0x000576d3) scroll_pane_cp019

0x61bd,	// (0x0005ce31) popup_call_poc_act_window_ParamLimits

0x61bd,	// (0x0005ce31) popup_call_poc_act_window

0x61e1,	// (0x0005ce55) popup_call_poc_inact_window_ParamLimits

0x61e1,	// (0x0005ce55) popup_call_poc_inact_window

0xf50e,	// (0x00066182) bg_popup_call_poc_act_pane_g

0x1974,	// (0x000585e8) bg_popup_call_poc_inact_pane_g1

0x197c,	// (0x000585f0) bg_popup_call_poc_inact_pane_g2

0x0a67,	// (0x000576db) popup_call_poc_act_window_g2

0x1984,	// (0x000585f8) bg_popup_call_poc_inact_pane_g3

0x1904,	// (0x00058578) bg_popup_call_poc_inact_pane_g4

0x198c,	// (0x00058600) bg_popup_call_poc_inact_pane_g5

0x0a6f,	// (0x000576e3) popup_call_poc_act_window_t1_ParamLimits

0x0a6f,	// (0x000576e3) popup_call_poc_act_window_t1

0x0a97,	// (0x0005770b) popup_call_poc_act_window_t2_ParamLimits

0x0a97,	// (0x0005770b) popup_call_poc_act_window_t2

0x0abf,	// (0x00057733) popup_call_poc_act_window_t3_ParamLimits

0x0abf,	// (0x00057733) popup_call_poc_act_window_t3

0x0ae7,	// (0x0005775b) popup_call_poc_act_window_t4_ParamLimits

0x0ae7,	// (0x0005775b) popup_call_poc_act_window_t4

0x0003,

0xf477,	// (0x000660eb) popup_call_poc_act_window_t_ParamLimits

0xf477,	// (0x000660eb) popup_call_poc_act_window_t

0x1994,	// (0x00058608) bg_popup_call_poc_inact_pane_g6

0x199c,	// (0x00058610) bg_popup_call_poc_inact_pane_g7

0x19a4,	// (0x00058618) bg_popup_call_poc_inact_pane_g8

0x0af9,	// (0x0005776d) popup_call_poc_inact_window_g2

0x19ac,	// (0x00058620) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf525,	// (0x00066199) bg_popup_call_poc_inact_pane_g

0x0b01,	// (0x00057775) popup_call_poc_inact_window_t1_ParamLimits

0x0b01,	// (0x00057775) popup_call_poc_inact_window_t1

0x0b16,	// (0x0005778a) popup_call_poc_inact_window_t2_ParamLimits

0x0b16,	// (0x0005778a) popup_call_poc_inact_window_t2

0x0b2b,	// (0x0005779f) popup_call_poc_inact_window_t3_ParamLimits

0x0b2b,	// (0x0005779f) popup_call_poc_inact_window_t3

0x0002,

0xf480,	// (0x000660f4) popup_call_poc_inact_window_t_ParamLimits

0xf480,	// (0x000660f4) popup_call_poc_inact_window_t

0x1a66,	// (0x000586da) context_pane_ParamLimits

0x6a5c,	// (0x0005d6d0) signal_pane_ParamLimits

0xcf97,	// (0x00063c0b) main_call2_pane

0xd4a0,	// (0x00064114) popup_phob_thumbnail2_window_ParamLimits

0xd4a0,	// (0x00064114) popup_phob_thumbnail2_window

0xd43d,	// (0x000640b1) aid_hotspot_pointer_arrow_pane

0xd445,	// (0x000640b9) aid_hotspot_pointer_hand_pane

0x654a,	// (0x0005d1be) phob_pre_status_pane_g5

0xcc7e,	// (0x000638f2) cams_zoom_pane_ParamLimits

0xcc7e,	// (0x000638f2) image_vga_pane_ParamLimits

0xcce5,	// (0x00063959) main_camera_pane_g1_ParamLimits

0xcce5,	// (0x00063959) main_camera_pane_g2_ParamLimits

0xcce5,	// (0x00063959) main_camera_pane_g3_ParamLimits

0xcce5,	// (0x00063959) main_camera_pane_g4_ParamLimits

0xcce5,	// (0x00063959) main_camera_pane_g5_ParamLimits

0xcce5,	// (0x00063959) main_camera_pane_g6_ParamLimits

0xcce5,	// (0x00063959) main_camera_pane_g7_ParamLimits

0xf1ab,	// (0x00065e1f) main_camera_pane_g_ParamLimits

0xcfa9,	// (0x00063c1d) main_camera_pane_t1_ParamLimits

0xcfa9,	// (0x00063c1d) main_camera_pane_t2_ParamLimits

0xf1bc,	// (0x00065e30) main_camera_pane_t_ParamLimits

0xcc5c,	// (0x000638d0) bg_popup_preview_window_pane_cp01_ParamLimits

0xcc5c,	// (0x000638d0) bg_popup_preview_window_pane_cp01

0x0b40,	// (0x000577b4) popup_phob_thumbnail2_window_g1_ParamLimits

0x0b40,	// (0x000577b4) popup_phob_thumbnail2_window_g1

0xca01,	// (0x00063675) call2_cli_visual_pane

0x6215,	// (0x0005ce89) popup_call2_audio_conf_window_ParamLimits

0x6215,	// (0x0005ce89) popup_call2_audio_conf_window

0x6235,	// (0x0005cea9) popup_call2_audio_first_window_ParamLimits

0x6235,	// (0x0005cea9) popup_call2_audio_first_window

0x62cb,	// (0x0005cf3f) popup_call2_audio_in_window_ParamLimits

0x62cb,	// (0x0005cf3f) popup_call2_audio_in_window

0x6313,	// (0x0005cf87) popup_call2_audio_out_window_ParamLimits

0x6313,	// (0x0005cf87) popup_call2_audio_out_window

0x637d,	// (0x0005cff1) popup_call2_audio_second_window_ParamLimits

0x637d,	// (0x0005cff1) popup_call2_audio_second_window

0x63e3,	// (0x0005d057) popup_call2_audio_wait_window_ParamLimits

0x63e3,	// (0x0005d057) popup_call2_audio_wait_window

0xca01,	// (0x00063675) bg_popup_call2_act_pane_cp03

0xcc3e,	// (0x000638b2) list_conf_pane_cp

0x0b4c,	// (0x000577c0) popup_call2_audio_conf_window_t1

0x0b5a,	// (0x000577ce) list_single_graphic_popup_conf2_pane_ParamLimits

0x0b5a,	// (0x000577ce) list_single_graphic_popup_conf2_pane

0x042c,	// (0x000570a0) list_highlight_pane_cp04

0x0b6d,	// (0x000577e1) list_single_graphic_popup_conf2_pane_g1

0x043d,	// (0x000570b1) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf487,	// (0x000660fb) list_single_graphic_popup_conf2_pane_g

0x0b77,	// (0x000577eb) list_single_graphic_popup_conf2_pane_t1

0x0b85,	// (0x000577f9) bg_popup_call2_act_pane_cp01_ParamLimits

0x0b85,	// (0x000577f9) bg_popup_call2_act_pane_cp01

0x0c0f,	// (0x00057883) call_type_pane_cp05_ParamLimits

0x0c0f,	// (0x00057883) call_type_pane_cp05

0x0c63,	// (0x000578d7) popup_call2_audio_second_window_g1_ParamLimits

0x0c63,	// (0x000578d7) popup_call2_audio_second_window_g1

0x0cb7,	// (0x0005792b) popup_call2_audio_second_window_g2_ParamLimits

0x0cb7,	// (0x0005792b) popup_call2_audio_second_window_g2

0x0002,

0xf48c,	// (0x00066100) popup_call2_audio_second_window_g_ParamLimits

0xf48c,	// (0x00066100) popup_call2_audio_second_window_g

0x0d1c,	// (0x00057990) popup_call2_audio_second_window_t1_ParamLimits

0x0d1c,	// (0x00057990) popup_call2_audio_second_window_t1

0x0dd7,	// (0x00057a4b) popup_call2_audio_second_window_t2_ParamLimits

0x0dd7,	// (0x00057a4b) popup_call2_audio_second_window_t2

0x0e2a,	// (0x00057a9e) popup_call2_audio_second_window_t3_ParamLimits

0x0e2a,	// (0x00057a9e) popup_call2_audio_second_window_t3

0x0003,

0xf493,	// (0x00066107) popup_call2_audio_second_window_t_ParamLimits

0xf493,	// (0x00066107) popup_call2_audio_second_window_t

0xca01,	// (0x00063675) bg_popup_call2_in_pane_cp02

0xca0b,	// (0x0006367f) call_type_pane_cp04

0x641d,	// (0x0005d091) popup_call2_audio_wait_window_g1

0x6425,	// (0x0005d099) popup_call2_audio_wait_window_g2

0x0001,

0xf49c,	// (0x00066110) popup_call2_audio_wait_window_g

0xca23,	// (0x00063697) popup_call2_audio_wait_window_t3

0x0f1d,	// (0x00057b91) bg_popup_call2_act_pane_ParamLimits

0x0f1d,	// (0x00057b91) bg_popup_call2_act_pane

0x0fdd,	// (0x00057c51) call_type_pane_cp03_ParamLimits

0x0fdd,	// (0x00057c51) call_type_pane_cp03

0x1041,	// (0x00057cb5) popup_call2_audio_first_window_g1_ParamLimits

0x1041,	// (0x00057cb5) popup_call2_audio_first_window_g1

0x10b1,	// (0x00057d25) popup_call2_audio_first_window_g2_ParamLimits

0x10b1,	// (0x00057d25) popup_call2_audio_first_window_g2

0x0351,	// (0x00056fc5) popup_call2_audio_first_window_g3_ParamLimits

0x0351,	// (0x00056fc5) popup_call2_audio_first_window_g3

0x0004,

0xf4a1,	// (0x00066115) popup_call2_audio_first_window_g_ParamLimits

0xf4a1,	// (0x00066115) popup_call2_audio_first_window_g

0x118f,	// (0x00057e03) popup_call2_audio_first_window_t1_ParamLimits

0x118f,	// (0x00057e03) popup_call2_audio_first_window_t1

0x1292,	// (0x00057f06) popup_call2_audio_first_window_t4_ParamLimits

0x1292,	// (0x00057f06) popup_call2_audio_first_window_t4

0x1375,	// (0x00057fe9) popup_call2_audio_first_window_t5_ParamLimits

0x1375,	// (0x00057fe9) popup_call2_audio_first_window_t5

0x0003,

0xf4ac,	// (0x00066120) popup_call2_audio_first_window_t_ParamLimits

0xf4ac,	// (0x00066120) popup_call2_audio_first_window_t

0xcc54,	// (0x000638c8) bg_popup_call2_act_pane_g1

0x19cc,	// (0x00058640) popup_cale_lunar_info_window_t1

0x19da,	// (0x0005864e) popup_cale_lunar_info_window_t2

0x19e8,	// (0x0005865c) popup_cale_lunar_info_window_t3

0xca01,	// (0x00063675) bg_popup_call2_bubble_pane

0x1476,	// (0x000580ea) bg_popup_call2_in_pane_cp01_ParamLimits

0x1476,	// (0x000580ea) bg_popup_call2_in_pane_cp01

0xc6dd,	// (0x00063351) call_type_pane_cp02

0x642d,	// (0x0005d0a1) popup_call2_audio_out_window_g1_ParamLimits

0x642d,	// (0x0005d0a1) popup_call2_audio_out_window_g1

0x14be,	// (0x00058132) popup_call2_audio_out_window_g2_ParamLimits

0x14be,	// (0x00058132) popup_call2_audio_out_window_g2

0x6459,	// (0x0005d0cd) popup_call2_audio_out_window_g3_ParamLimits

0x6459,	// (0x0005d0cd) popup_call2_audio_out_window_g3

0x0003,

0xf4b5,	// (0x00066129) popup_call2_audio_out_window_g_ParamLimits

0xf4b5,	// (0x00066129) popup_call2_audio_out_window_g

0x14f5,	// (0x00058169) popup_call2_audio_out_window_t1_ParamLimits

0x14f5,	// (0x00058169) popup_call2_audio_out_window_t1

0x1554,	// (0x000581c8) popup_call2_audio_out_window_t2_ParamLimits

0x1554,	// (0x000581c8) popup_call2_audio_out_window_t2

0x15a8,	// (0x0005821c) popup_call2_audio_out_window_t3_ParamLimits

0x15a8,	// (0x0005821c) popup_call2_audio_out_window_t3

0x15be,	// (0x00058232) popup_call2_audio_out_window_t4_ParamLimits

0x15be,	// (0x00058232) popup_call2_audio_out_window_t4

0x15d4,	// (0x00058248) popup_call2_audio_out_window_t5_ParamLimits

0x15d4,	// (0x00058248) popup_call2_audio_out_window_t5

0x0005,

0xf4be,	// (0x00066132) popup_call2_audio_out_window_t_ParamLimits

0xf4be,	// (0x00066132) popup_call2_audio_out_window_t

0x1638,	// (0x000582ac) bg_popup_call2_in_pane_ParamLimits

0x1638,	// (0x000582ac) bg_popup_call2_in_pane

0x1694,	// (0x00058308) popup_call2_audio_in_window_g1_ParamLimits

0x1694,	// (0x00058308) popup_call2_audio_in_window_g1

0x16cc,	// (0x00058340) popup_call2_audio_in_window_g2_ParamLimits

0x16cc,	// (0x00058340) popup_call2_audio_in_window_g2

0x1704,	// (0x00058378) popup_call2_audio_in_window_g3_ParamLimits

0x1704,	// (0x00058378) popup_call2_audio_in_window_g3

0x0003,

0xf4cb,	// (0x0006613f) popup_call2_audio_in_window_g_ParamLimits

0xf4cb,	// (0x0006613f) popup_call2_audio_in_window_g

0x175c,	// (0x000583d0) popup_call2_audio_in_window_t1_ParamLimits

0x175c,	// (0x000583d0) popup_call2_audio_in_window_t1

0x17dc,	// (0x00058450) popup_call2_audio_in_window_t2_ParamLimits

0x17dc,	// (0x00058450) popup_call2_audio_in_window_t2

0x185c,	// (0x000584d0) popup_call2_audio_in_window_t3_ParamLimits

0x185c,	// (0x000584d0) popup_call2_audio_in_window_t3

0x1876,	// (0x000584ea) popup_call2_audio_in_window_t4_ParamLimits

0x1876,	// (0x000584ea) popup_call2_audio_in_window_t4

0x1888,	// (0x000584fc) popup_call2_audio_in_window_t5_ParamLimits

0x1888,	// (0x000584fc) popup_call2_audio_in_window_t5

0x189a,	// (0x0005850e) popup_call2_audio_in_window_t6_ParamLimits

0x189a,	// (0x0005850e) popup_call2_audio_in_window_t6

0x0005,

0xf4d4,	// (0x00066148) popup_call2_audio_in_window_t_ParamLimits

0xf4d4,	// (0x00066148) popup_call2_audio_in_window_t

0xcc54,	// (0x000638c8) bg_popup_call2_in_pane_g1

0x19f6,	// (0x0005866a) popup_cale_lunar_info_window_t4

0x0003,

0xf54f,	// (0x000661c3) popup_cale_lunar_info_window_t

0xcc5c,	// (0x000638d0) bg_popup_call2_rect_pane_ParamLimits

0xcc5c,	// (0x000638d0) bg_popup_call2_rect_pane

0xca01,	// (0x00063675) call2_cli_visual_graphic_pane

0xca01,	// (0x00063675) call2_cli_visual_text_pane

0xd4c7,	// (0x0006413b) smil_status_volume_pane_g3

0x0002,

0xcc74,	// (0x000638e8) call2_cli_visual_graphic_pane_g1

0xcc74,	// (0x000638e8) call2_cli_visual_graphic_pane_g2

0xcc74,	// (0x000638e8) call2_cli_visual_graphic_pane_g3

0x0002,

0xf4e1,	// (0x00066155) call2_cli_visual_graphic_pane_g

0x18ac,	// (0x00058520) bg_popup_call2_rect_pane_g1

0xce74,	// (0x00063ae8) bg_popup_call2_rect_pane_g2

0x18b4,	// (0x00058528) bg_popup_call2_rect_pane_g3

0x18bc,	// (0x00058530) bg_popup_call2_rect_pane_g4

0x18c4,	// (0x00058538) bg_popup_call2_rect_pane_g5

0x18cc,	// (0x00058540) bg_popup_call2_rect_pane_g6

0x18d4,	// (0x00058548) bg_popup_call2_rect_pane_g7

0x18dc,	// (0x00058550) bg_popup_call2_rect_pane_g8

0x18e4,	// (0x00058558) bg_popup_call2_rect_pane_g9

0x0008,

0xf4e8,	// (0x0006615c) bg_popup_call2_rect_pane_g

0x18ec,	// (0x00058560) bg_popup_call2_bubble_pane_g1

0x18f4,	// (0x00058568) bg_popup_call2_bubble_pane_g2

0x18fc,	// (0x00058570) bg_popup_call2_bubble_pane_g3

0x1904,	// (0x00058578) bg_popup_call2_bubble_pane_g4

0x190c,	// (0x00058580) bg_popup_call2_bubble_pane_g5

0x1914,	// (0x00058588) bg_popup_call2_bubble_pane_g6

0x191c,	// (0x00058590) bg_popup_call2_bubble_pane_g7

0x1924,	// (0x00058598) bg_popup_call2_bubble_pane_g8

0x192c,	// (0x000585a0) bg_popup_call2_bubble_pane_g9

0x0008,

0xf4fb,	// (0x0006616f) bg_popup_call2_bubble_pane_g

0x4211,	// (0x0005ae85) aid_cale_week_size_cell_pane

0x47c1,	// (0x0005b435) aid_cams_cif_uncrop_pane_ParamLimits

0x47c1,	// (0x0005b435) aid_cams_cif_uncrop_pane

0x4917,	// (0x0005b58b) aid_cams_size_cell_ParamLimits

0x4917,	// (0x0005b58b) aid_cams_size_cell

0x492b,	// (0x0005b59f) grid_cams_pane_ParamLimits

0x4945,	// (0x0005b5b9) linegrid_cams_pane_ParamLimits

0x4a2b,	// (0x0005b69f) call_video_pane_t1

0x4a49,	// (0x0005b6bd) call_video_pane_t2

0x0001,

0xf208,	// (0x00065e7c) call_video_pane_t

0x4e5d,	// (0x0005bad1) aid_cale_month_size_cell_pane_ParamLimits

0x4e5d,	// (0x0005bad1) aid_cale_month_size_cell_pane

0xf593,	// (0x00066207) smil_status_volume_pane_g

0xd4d4,	// (0x00064148) volume_smil_pane_ParamLimits

0xc571,	// (0x000631e5) aid_popup2_width_pane

0x4168,	// (0x0005addc) cell_qdial_pane_g4_ParamLimits

0x4168,	// (0x0005addc) cell_qdial_pane_g4

0x5a1d,	// (0x0005c691) aid_blid_cardinal_pane_ParamLimits

0x5a29,	// (0x0005c69d) aid_blid_destination_pane_ParamLimits

0x5a29,	// (0x0005c69d) aid_blid_destination_pane

0xcc5c,	// (0x000638d0) bg_popup_call_poc_act_pane_ParamLimits

0xcc5c,	// (0x000638d0) bg_popup_call_poc_act_pane

0xcc5c,	// (0x000638d0) bg_popup_call_poc_inact_pane_ParamLimits

0xcc5c,	// (0x000638d0) bg_popup_call_poc_inact_pane

0x1934,	// (0x000585a8) bg_popup_call_poc_act_pane_g1

0x193c,	// (0x000585b0) bg_popup_call_poc_act_pane_g2

0x1944,	// (0x000585b8) bg_popup_call_poc_act_pane_g3

0x1904,	// (0x00058578) bg_popup_call_poc_act_pane_g4

0x190c,	// (0x00058580) bg_popup_call_poc_act_pane_g5

0x194c,	// (0x000585c0) bg_popup_call_poc_act_pane_g6

0x191c,	// (0x00058590) bg_popup_call_poc_act_pane_g7

0x1954,	// (0x000585c8) bg_popup_call_poc_act_pane_g8

0xca01,	// (0x00063675) main_usb_pane

0xd47b,	// (0x000640ef) popup_cale_lunar_info_window

0x4d15,	// (0x0005b989) im_reading_pane_t1_ParamLimits

0xd090,	// (0x00063d04) list_im_pane_ParamLimits

0xd0a1,	// (0x00063d15) scroll_pane_cp07_ParamLimits

0xca01,	// (0x00063675) grid_highlight_pane_cp012

0xcc5c,	// (0x000638d0) mup_scale_pane_ParamLimits

0x08a1,	// (0x00057515) main_usb_pane_g1_ParamLimits

0x08a1,	// (0x00057515) main_usb_pane_g1

0x64a8,	// (0x0005d11c) main_usb_pane_g2_ParamLimits

0x64a8,	// (0x0005d11c) main_usb_pane_g2

0x0001,

0xf538,	// (0x000661ac) main_usb_pane_g_ParamLimits

0xf538,	// (0x000661ac) main_usb_pane_g

0x64be,	// (0x0005d132) main_usb_pane_t1_ParamLimits

0x64be,	// (0x0005d132) main_usb_pane_t1

0x64d0,	// (0x0005d144) main_usb_pane_t2_ParamLimits

0x64d0,	// (0x0005d144) main_usb_pane_t2

0x64e2,	// (0x0005d156) main_usb_pane_t3_ParamLimits

0x64e2,	// (0x0005d156) main_usb_pane_t3

0x64f4,	// (0x0005d168) main_usb_pane_t4_ParamLimits

0x64f4,	// (0x0005d168) main_usb_pane_t4

0x6506,	// (0x0005d17a) main_usb_pane_t5_ParamLimits

0x6506,	// (0x0005d17a) main_usb_pane_t5

0x6518,	// (0x0005d18c) main_usb_pane_t6_ParamLimits

0x6518,	// (0x0005d18c) main_usb_pane_t6

0x0005,

0xf53d,	// (0x000661b1) main_usb_pane_t_ParamLimits

0x59cc,	// (0x0005c640) aid_text_placing

0x59d5,	// (0x0005c649) main_location2_pane_t1_ParamLimits

0x59e7,	// (0x0005c65b) main_location2_pane_t2_ParamLimits

0x59f9,	// (0x0005c66d) main_location2_pane_t3_ParamLimits

0x5a0b,	// (0x0005c67f) main_location2_pane_t4_ParamLimits

0x5a0b,	// (0x0005c67f) main_location2_pane_t4

0xf344,	// (0x00065fb8) main_location2_pane_t_ParamLimits

0xcc98,	// (0x0006390c) find_pinb_pane_g2_ParamLimits

0xcc98,	// (0x0006390c) find_pinb_pane_g2

0x0001,

0xf0c0,	// (0x00065d34) find_pinb_pane_g_ParamLimits

0xf0c0,	// (0x00065d34) find_pinb_pane_g

0xcca4,	// (0x00063918) find_pinb_pane_t1_ParamLimits

0xccb6,	// (0x0006392a) find_pinb_pane_t2_ParamLimits

0xf0c5,	// (0x00065d39) find_pinb_pane_t_ParamLimits

0xca01,	// (0x00063675) main_call3_pane

0x5344,	// (0x0005bfb8) cale_month_day_heading_pane_t1_ParamLimits

0x5386,	// (0x0005bffa) cale_month_day_heading_pane_t2_ParamLimits

0x53bb,	// (0x0005c02f) cale_month_day_heading_pane_t3_ParamLimits

0x53f0,	// (0x0005c064) cale_month_day_heading_pane_t4_ParamLimits

0x542d,	// (0x0005c0a1) cale_month_day_heading_pane_t5_ParamLimits

0x5472,	// (0x0005c0e6) cale_month_day_heading_pane_t6_ParamLimits

0x54b7,	// (0x0005c12b) cale_month_day_heading_pane_t7_ParamLimits

0xf240,	// (0x00065eb4) cale_month_day_heading_pane_t_ParamLimits

0xd2f7,	// (0x00063f6b) smil_status_volume_pane

0x5f39,	// (0x0005cbad) postcard_address_pane_ParamLimits

0x5f39,	// (0x0005cbad) postcard_address_pane

0x5f4b,	// (0x0005cbbf) postcard_message_pane_ParamLimits

0x5f4b,	// (0x0005cbbf) postcard_message_pane

0x6485,	// (0x0005d0f9) call2_cli_visual_pane_t1_ParamLimits

0x6485,	// (0x0005d0f9) call2_cli_visual_pane_t1

0x1b19,	// (0x0005878d) postcard_message_pane_t1_ParamLimits

0x1b19,	// (0x0005878d) postcard_message_pane_t1

0x1b01,	// (0x00058775) postcard_address_pane_t1_ParamLimits

0x1b01,	// (0x00058775) postcard_address_pane_t1

0x6c0f,	// (0x0005d883) popup_call3_audio_in_window_ParamLimits

0x6c0f,	// (0x0005d883) popup_call3_audio_in_window

0x6a9a,	// (0x0005d70e) bg_popup_call3_in_pane_ParamLimits

0x6a9a,	// (0x0005d70e) bg_popup_call3_in_pane

0x6b10,	// (0x0005d784) popup_call3_audio_in_window_g1_ParamLimits

0x6b10,	// (0x0005d784) popup_call3_audio_in_window_g1

0x6b30,	// (0x0005d7a4) popup_call3_audio_in_window_g2_ParamLimits

0x6b30,	// (0x0005d7a4) popup_call3_audio_in_window_g2

0x6b50,	// (0x0005d7c4) popup_call3_audio_in_window_g3_ParamLimits

0x6b50,	// (0x0005d7c4) popup_call3_audio_in_window_g3

0x0003,

0xf59a,	// (0x0006620e) popup_call3_audio_in_window_g_ParamLimits

0xf59a,	// (0x0006620e) popup_call3_audio_in_window_g

0x6b81,	// (0x0005d7f5) popup_call3_audio_in_window_t1_ParamLimits

0x6b81,	// (0x0005d7f5) popup_call3_audio_in_window_t1

0x6bbf,	// (0x0005d833) popup_call3_audio_in_window_t2_ParamLimits

0x6bbf,	// (0x0005d833) popup_call3_audio_in_window_t2

0x6bfd,	// (0x0005d871) popup_call3_audio_in_window_t3_ParamLimits

0x6bfd,	// (0x0005d871) popup_call3_audio_in_window_t3

0x0002,

0xf5a3,	// (0x00066217) popup_call3_audio_in_window_t_ParamLimits

0xf5a3,	// (0x00066217) popup_call3_audio_in_window_t

0xcf97,	// (0x00063c0b) bg_popup_call3_rect_pane

0x18ac,	// (0x00058520) bg_popup_call3_rect_pane_g1

0xce74,	// (0x00063ae8) bg_popup_call3_rect_pane_g2

0x18b4,	// (0x00058528) bg_popup_call3_rect_pane_g3

0x18bc,	// (0x00058530) bg_popup_call3_rect_pane_g4

0x18c4,	// (0x00058538) bg_popup_call3_rect_pane_g5

0x18cc,	// (0x00058540) bg_popup_call3_rect_pane_g6

0x18d4,	// (0x00058548) bg_popup_call3_rect_pane_g7

0xc55f,	// (0x000631d3) mup_visualizer_osc_pane

0xc55f,	// (0x000631d3) mup_visualizer_spec_pane

0x6aca,	// (0x0005d73e) call3_video_qcif_pane_ParamLimits

0x6aca,	// (0x0005d73e) call3_video_qcif_pane

0x6add,	// (0x0005d751) call3_video_qcif_uncrop_pane_ParamLimits

0x6add,	// (0x0005d751) call3_video_qcif_uncrop_pane

0x6aeb,	// (0x0005d75f) call3_video_subqcif_pane_ParamLimits

0x6aeb,	// (0x0005d75f) call3_video_subqcif_pane

0x6aff,	// (0x0005d773) call3_video_subqcif_uncrop_pane_ParamLimits

0x6aff,	// (0x0005d773) call3_video_subqcif_uncrop_pane

0x6b70,	// (0x0005d7e4) popup_call3_audio_in_window_g4_ParamLimits

0x6b70,	// (0x0005d7e4) popup_call3_audio_in_window_g4

0xc55f,	// (0x000631d3) mup_spec_half_pane

0xc55f,	// (0x000631d3) mup_spec_half_pane_cp

0xc55f,	// (0x000631d3) mup_osc_middle_pane

0xcfd7,	// (0x00063c4b) mup_visualizer_osc_pane_g1

0x1ab4,	// (0x00058728) mup_spec_bar_pane_ParamLimits

0x1ab4,	// (0x00058728) mup_spec_bar_pane

0xcfd7,	// (0x00063c4b) mup_spec_bar_pane_g1

0xcfd7,	// (0x00063c4b) mup_spec_bar_pane_g2

0x0001,

0xf3be,	// (0x00066032) mup_spec_bar_pane_g

0x4211,	// (0x0005ae85) aid_cale_week_size_cell_pane_ParamLimits

0x422b,	// (0x0005ae9f) bg_cale_heading_pane_ParamLimits

0xcef9,	// (0x00063b6d) bg_cale_pane_cp01_ParamLimits

0x4243,	// (0x0005aeb7) cale_week_corner_pane_ParamLimits

0x4262,	// (0x0005aed6) cale_week_day_heading_pane_ParamLimits

0x427f,	// (0x0005aef3) cale_week_scroll_pane_g1_ParamLimits

0x4292,	// (0x0005af06) cale_week_scroll_pane_g2_ParamLimits

0x42aa,	// (0x0005af1e) cale_week_scroll_pane_g3_ParamLimits

0x42c2,	// (0x0005af36) cale_week_scroll_pane_g4_ParamLimits

0x42da,	// (0x0005af4e) cale_week_scroll_pane_g5_ParamLimits

0x42fa,	// (0x0005af6e) cale_week_scroll_pane_g6_ParamLimits

0x431a,	// (0x0005af8e) cale_week_scroll_pane_g7_ParamLimits

0x433a,	// (0x0005afae) cale_week_scroll_pane_g8_ParamLimits

0x435e,	// (0x0005afd2) cale_week_scroll_pane_g9_ParamLimits

0x4376,	// (0x0005afea) cale_week_scroll_pane_g10_ParamLimits

0x438e,	// (0x0005b002) cale_week_scroll_pane_g11_ParamLimits

0x43a6,	// (0x0005b01a) cale_week_scroll_pane_g12_ParamLimits

0x43be,	// (0x0005b032) cale_week_scroll_pane_g13_ParamLimits

0x43be,	// (0x0005b032) cale_week_scroll_pane_g14_ParamLimits

0x43be,	// (0x0005b032) cale_week_scroll_pane_g15_ParamLimits

0xf151,	// (0x00065dc5) cale_week_scroll_pane_g_ParamLimits

0x43fa,	// (0x0005b06e) cale_week_time_pane_ParamLimits

0x441e,	// (0x0005b092) grid_cale_week_pane_ParamLimits

0xcf16,	// (0x00063b8a) listscroll_cale_week_pane_t1

0xcf28,	// (0x00063b9c) scroll_pane_cp08_ParamLimits

0x4ebd,	// (0x0005bb31) cale_month_corner_pane_ParamLimits

0xd2c1,	// (0x00063f35) cale_month_pane_t1

0x52d7,	// (0x0005bf4b) cale_month_week_pane_ParamLimits

0x5823,	// (0x0005c497) popup_call_status_window_g1_ParamLimits

0x5837,	// (0x0005c4ab) popup_call_status_window_g2_ParamLimits

0x584b,	// (0x0005c4bf) popup_call_status_window_g3_ParamLimits

0xf2cb,	// (0x00065f3f) popup_call_status_window_g_ParamLimits

0x03b8,	// (0x0005702c) aid_call2_pane

0x5d64,	// (0x0005c9d8) msg_header_pane_g1

0x5f39,	// (0x0005cbad) postcard_address2_pane_ParamLimits

0x5f39,	// (0x0005cbad) postcard_address2_pane

0x5f4b,	// (0x0005cbbf) postcard_message2_pane_ParamLimits

0x5f4b,	// (0x0005cbbf) postcard_message2_pane

0x6a6a,	// (0x0005d6de) message2_row_pane_ParamLimits

0x6a6a,	// (0x0005d6de) message2_row_pane

0x6a87,	// (0x0005d6fb) address2_row_pane_ParamLimits

0x6a87,	// (0x0005d6fb) address2_row_pane

0x1a81,	// (0x000586f5) postcard_message2_row_pane_g1

0x1a89,	// (0x000586fd) postcard_message2_row_pane_t1

0x1a81,	// (0x000586f5) address2_row_pane_g1

0x1a89,	// (0x000586fd) address2_row_pane_t1

0x4758,	// (0x0005b3cc) aid_size_cell_vorec

0xca01,	// (0x00063675) main_rss_pane

0x1a97,	// (0x0005870b) rss_list_single_pane_ParamLimits

0x1a97,	// (0x0005870b) rss_list_single_pane

0x1aa5,	// (0x00058719) rss_list_single_pane_t1

0x1aa5,	// (0x00058719) rss_list_single_pane_t2

0x0001,

0xf58e,	// (0x00066202) rss_list_single_pane_t

0xca01,	// (0x00063675) main_camera2_pane

0xca01,	// (0x00063675) main_video2_pane

0xd4e9,	// (0x0006415d) cams_zoom_pane_cp2_ParamLimits

0xd4e9,	// (0x0006415d) cams_zoom_pane_cp2

0xd4e9,	// (0x0006415d) image2_vga_pane_ParamLimits

0xd4e9,	// (0x0006415d) image2_vga_pane

0xd4f7,	// (0x0006416b) main_camera2_pane_g1_ParamLimits

0xd4f7,	// (0x0006416b) main_camera2_pane_g1

0xd4f7,	// (0x0006416b) main_camera2_pane_g2_ParamLimits

0xd4f7,	// (0x0006416b) main_camera2_pane_g2

0xd4f7,	// (0x0006416b) main_camera2_pane_g3_ParamLimits

0xd4f7,	// (0x0006416b) main_camera2_pane_g3

0xd4f7,	// (0x0006416b) main_camera2_pane_g4_ParamLimits

0xd4f7,	// (0x0006416b) main_camera2_pane_g4

0xd4f7,	// (0x0006416b) main_camera2_pane_g5_ParamLimits

0xd4f7,	// (0x0006416b) main_camera2_pane_g5

0xd4f7,	// (0x0006416b) main_camera2_pane_g6_ParamLimits

0xd4f7,	// (0x0006416b) main_camera2_pane_g6

0xd4f7,	// (0x0006416b) main_camera2_pane_g7_ParamLimits

0xd4f7,	// (0x0006416b) main_camera2_pane_g7

0xd4f7,	// (0x0006416b) main_camera2_pane_g8_ParamLimits

0xd4f7,	// (0x0006416b) main_camera2_pane_g8

0x0008,

0xf5aa,	// (0x0006621e) main_camera2_pane_g_ParamLimits

0xf5aa,	// (0x0006621e) main_camera2_pane_g

0x6c31,	// (0x0005d8a5) main_camera2_pane_t1_ParamLimits

0x6c31,	// (0x0005d8a5) main_camera2_pane_t1

0x6c31,	// (0x0005d8a5) main_camera2_pane_t2_ParamLimits

0x6c31,	// (0x0005d8a5) main_camera2_pane_t2

0x6c31,	// (0x0005d8a5) main_camera2_pane_t3_ParamLimits

0x6c31,	// (0x0005d8a5) main_camera2_pane_t3

0x6c31,	// (0x0005d8a5) main_camera2_pane_t4_ParamLimits

0x6c31,	// (0x0005d8a5) main_camera2_pane_t4

0x0006,

0xf5bd,	// (0x00066231) main_camera2_pane_t_ParamLimits

0xf5bd,	// (0x00066231) main_camera2_pane_t

0xd53b,	// (0x000641af) cams_zoom_pane_cp4_ParamLimits

0xd53b,	// (0x000641af) cams_zoom_pane_cp4

0x6c45,	// (0x0005d8b9) image2_cif_pane_ParamLimits

0x6c45,	// (0x0005d8b9) image2_cif_pane

0xc5d6,	// (0x0006324a) image2_subqcif_pane_ParamLimits

0xc5d6,	// (0x0006324a) image2_subqcif_pane

0x6c53,	// (0x0005d8c7) main_video2_pane_g1_ParamLimits

0x6c53,	// (0x0005d8c7) main_video2_pane_g1

0x6c53,	// (0x0005d8c7) main_video2_pane_g2_ParamLimits

0x6c53,	// (0x0005d8c7) main_video2_pane_g2

0x6c53,	// (0x0005d8c7) main_video2_pane_g3_ParamLimits

0x6c53,	// (0x0005d8c7) main_video2_pane_g3

0x6c53,	// (0x0005d8c7) main_video2_pane_g4_ParamLimits

0x6c53,	// (0x0005d8c7) main_video2_pane_g4

0x6c53,	// (0x0005d8c7) main_video2_pane_g5_ParamLimits

0x6c53,	// (0x0005d8c7) main_video2_pane_g5

0x6c53,	// (0x0005d8c7) main_video2_pane_g6_ParamLimits

0x6c53,	// (0x0005d8c7) main_video2_pane_g6

0x0005,

0xf5cc,	// (0x00066240) main_video2_pane_g_ParamLimits

0xf5cc,	// (0x00066240) main_video2_pane_g

0x6c61,	// (0x0005d8d5) main_video2_pane_t1_ParamLimits

0x6c61,	// (0x0005d8d5) main_video2_pane_t1

0x6c61,	// (0x0005d8d5) main_video2_pane_t2_ParamLimits

0x6c61,	// (0x0005d8d5) main_video2_pane_t2

0x6c61,	// (0x0005d8d5) main_video2_pane_t3_ParamLimits

0x6c61,	// (0x0005d8d5) main_video2_pane_t3

0x0002,

0xf5d9,	// (0x0006624d) main_video2_pane_t_ParamLimits

0xf5d9,	// (0x0006624d) main_video2_pane_t

0x65ac,	// (0x0005d220) call_muted_g2

0x0001,

0xf580,	// (0x000661f4) call_muted_g

0xca01,	// (0x00063675) main_mup2_pane

0x2732,	// (0x000593a6) main_mup2_pane_g1_ParamLimits

0x2732,	// (0x000593a6) main_mup2_pane_g1

0x2732,	// (0x000593a6) main_mup2_pane_g2_ParamLimits

0x2732,	// (0x000593a6) main_mup2_pane_g2

0x2a11,	// (0x00059685) main_mup_pane_g13_cp1

0xc5e4,	// (0x00063258) mup_volume_pane_cp1

0x2732,	// (0x000593a6) main_mup2_pane_g4_ParamLimits

0x2732,	// (0x000593a6) main_mup2_pane_g4

0x2732,	// (0x000593a6) main_mup2_pane_g5_ParamLimits

0x2732,	// (0x000593a6) main_mup2_pane_g5

0x2732,	// (0x000593a6) main_mup2_pane_g6_ParamLimits

0x2732,	// (0x000593a6) main_mup2_pane_g6

0x2732,	// (0x000593a6) main_mup2_pane_g7_ParamLimits

0x2732,	// (0x000593a6) main_mup2_pane_g7

0x0006,

0xf5e0,	// (0x00066254) main_mup2_pane_g_ParamLimits

0xf5e0,	// (0x00066254) main_mup2_pane_g

0x2465,	// (0x000590d9) main_mup2_pane_t1_ParamLimits

0x2465,	// (0x000590d9) main_mup2_pane_t1

0x2465,	// (0x000590d9) main_mup2_pane_t2_ParamLimits

0x2465,	// (0x000590d9) main_mup2_pane_t2

0x2465,	// (0x000590d9) main_mup2_pane_t3_ParamLimits

0x2465,	// (0x000590d9) main_mup2_pane_t3

0x2465,	// (0x000590d9) main_mup2_pane_t4_ParamLimits

0x2465,	// (0x000590d9) main_mup2_pane_t4

0x2465,	// (0x000590d9) main_mup2_pane_t5_ParamLimits

0x2465,	// (0x000590d9) main_mup2_pane_t5

0x2465,	// (0x000590d9) main_mup2_pane_t6_ParamLimits

0x2465,	// (0x000590d9) main_mup2_pane_t6

0x0005,

0xf5ef,	// (0x00066263) main_mup2_pane_t_ParamLimits

0xf5ef,	// (0x00066263) main_mup2_pane_t

0x1a58,	// (0x000586cc) mup2_visualizer_pane_ParamLimits

0x1a58,	// (0x000586cc) mup2_visualizer_pane

0x1a58,	// (0x000586cc) mup_progress_pane_cp_ParamLimits

0x1a58,	// (0x000586cc) mup_progress_pane_cp

0xd55f,	// (0x000641d3) mup_volume_pane_cp_ParamLimits

0xd55f,	// (0x000641d3) mup_volume_pane_cp

0xcce5,	// (0x00063959) mup2_visualizer_pane_g1_ParamLimits

0xcce5,	// (0x00063959) mup2_visualizer_pane_g1

0xccf3,	// (0x00063967) mup2_visualizer_pane_g2_ParamLimits

0xccf3,	// (0x00063967) mup2_visualizer_pane_g2

0xccf3,	// (0x00063967) mup2_visualizer_pane_g3_ParamLimits

0xccf3,	// (0x00063967) mup2_visualizer_pane_g3

0x0002,

0xf0ca,	// (0x00065d3e) mup2_visualizer_pane_g_ParamLimits

0xf0ca,	// (0x00065d3e) mup2_visualizer_pane_g

0x09dc,	// (0x00057650) aid_size_cell_fmradio

0x675e,	// (0x0005d3d2) aid_height_parent_landcape

0xd11f,	// (0x00063d93) wml_content_pane_cp

0xd127,	// (0x00063d9b) wml_tabs_pane

0xd130,	// (0x00063da4) popup_wml_miniature_window

0xd138,	// (0x00063dac) scroll_pane_cp021

0xd14c,	// (0x00063dc0) wml_content_pane_comp8

0xca01,	// (0x00063675) bg_popup_sub_pane_cp05

0x1b4b,	// (0x000587bf) popup_wml_miniature_window_g1

0x1b53,	// (0x000587c7) wml_miniature_view_pane

0x6c75,	// (0x0005d8e9) aid_size_wml_view

0x6c7d,	// (0x0005d8f1) wml_miniature_view_pane_g1

0x6c86,	// (0x0005d8fa) wml_miniature_view_pane_g2

0x6c8f,	// (0x0005d903) wml_miniature_view_pane_g3

0x6c97,	// (0x0005d90b) wml_miniature_view_pane_g4

0x6c9f,	// (0x0005d913) wml_miniature_view_pane_g5

0x6ca7,	// (0x0005d91b) wml_miniature_view_pane_g6

0x6caf,	// (0x0005d923) wml_miniature_view_pane_g7

0x6cb7,	// (0x0005d92b) wml_miniature_view_pane_g8

0x0007,

0xf5fc,	// (0x00066270) wml_miniature_view_pane_g

0x1b5b,	// (0x000587cf) background_graphic_ParamLimits

0x1b5b,	// (0x000587cf) background_graphic

0x1b67,	// (0x000587db) wml_tabs_2_pane

0x1b70,	// (0x000587e4) wml_tabs_3_pane_ParamLimits

0x1b70,	// (0x000587e4) wml_tabs_3_pane

0x1b82,	// (0x000587f6) wml_tabs_4_pane_ParamLimits

0x1b82,	// (0x000587f6) wml_tabs_4_pane

0x1b98,	// (0x0005880c) wml_tabs_5_pane_ParamLimits

0x1b98,	// (0x0005880c) wml_tabs_5_pane

0x1bb2,	// (0x00058826) wml_tabs_pane_g2_ParamLimits

0x1bb2,	// (0x00058826) wml_tabs_pane_g2

0x1bc7,	// (0x0005883b) wml_tabs_pane_g3_ParamLimits

0x1bc7,	// (0x0005883b) wml_tabs_pane_g3

0x1bdc,	// (0x00058850) wml_tabs_2_active_pane_ParamLimits

0x1bdc,	// (0x00058850) wml_tabs_2_active_pane

0x1bdc,	// (0x00058850) wml_tabs_2_passive_pane_ParamLimits

0x1bdc,	// (0x00058850) wml_tabs_2_passive_pane

0x6cbf,	// (0x0005d933) wml_tabs_3_active_pane_cp_ParamLimits

0x6cbf,	// (0x0005d933) wml_tabs_3_active_pane_cp

0x6cd4,	// (0x0005d948) wml_tabs_3_passive_pane_ParamLimits

0x6cd4,	// (0x0005d948) wml_tabs_3_passive_pane

0x6ce7,	// (0x0005d95b) wml_tabs_3_passive_pane_cp_ParamLimits

0x6ce7,	// (0x0005d95b) wml_tabs_3_passive_pane_cp

0x6cfe,	// (0x0005d972) tabs_4_active_pane

0x6d06,	// (0x0005d97a) tabs_4_passive_pane

0x6d10,	// (0x0005d984) tabs_4_passive_pane_cp

0x6d18,	// (0x0005d98c) tabs_4_passive_pane_cp2

0x64a0,	// (0x0005d114) aid_height_text

0x1a58,	// (0x000586cc) mup_volume_cont_pane_ParamLimits

0x1a58,	// (0x000586cc) mup_volume_cont_pane

0xc55f,	// (0x000631d3) aid_size_cell_pinb

0xc55f,	// (0x000631d3) aid_size_list_pinb

0x1a58,	// (0x000586cc) mup2_volume_cont_pane_ParamLimits

0x1a58,	// (0x000586cc) mup2_volume_cont_pane

0xd549,	// (0x000641bd) mup2_volume_cont_pane_g1_ParamLimits

0xd549,	// (0x000641bd) mup2_volume_cont_pane_g1

0x3bea,	// (0x0005a85e) aid_size_cell_touch_ParamLimits

0x3bea,	// (0x0005a85e) aid_size_cell_touch

0x3e17,	// (0x0005aa8b) touch_pane_ParamLimits

0x3e17,	// (0x0005aa8b) touch_pane

0xc5e4,	// (0x00063258) main_rss2_pane

0x1bf3,	// (0x00058867) listscroll_rss2_pane

0x1bfc,	// (0x00058870) rss2_navigation_pane

0x1c04,	// (0x00058878) list_rss2_pane

0x04d1,	// (0x00057145) scroll_pane_cp22

0x1c0c,	// (0x00058880) rss2_navigation_pane_g1

0x1c15,	// (0x00058889) rss2_navigation_pane_g2

0x1c1d,	// (0x00058891) rss2_navigation_pane_g3

0x0002,

0xf60d,	// (0x00066281) rss2_navigation_pane_g

0x1c25,	// (0x00058899) rss2_navigation_pane_t1

0x6d22,	// (0x0005d996) rss2_list_single_pane_ParamLimits

0x6d22,	// (0x0005d996) rss2_list_single_pane

0x1c33,	// (0x000588a7) rss2_list_single_pane_t2

0x1c41,	// (0x000588b5) rss2_list_single_pane_t3_ParamLimits

0x1c41,	// (0x000588b5) rss2_list_single_pane_t3

0x1c5e,	// (0x000588d2) rss2_list_single_pane_t4

0x56ff,	// (0x0005c373) smil_status_pane_g1

0xc5d6,	// (0x0006324a) main_image2_pane_ParamLimits

0xc5d6,	// (0x0006324a) main_image2_pane

0xd4f7,	// (0x0006416b) main_camera2_pane_g9_ParamLimits

0xd4f7,	// (0x0006416b) main_camera2_pane_g9

0x6c31,	// (0x0005d8a5) main_camera2_pane_t5_ParamLimits

0x6c31,	// (0x0005d8a5) main_camera2_pane_t5

0xd505,	// (0x00064179) main_camera2_pane_t6_ParamLimits

0xd505,	// (0x00064179) main_camera2_pane_t6

0x6d38,	// (0x0005d9ac) main_image2_pane_g1_ParamLimits

0x6d38,	// (0x0005d9ac) main_image2_pane_g1

0x6173,	// (0x0005cde7) smil2_video_pane_ParamLimits

0x6173,	// (0x0005cde7) smil2_video_pane

0xc58d,	// (0x00063201) aid_zoom_text_primary_cp

0xc5cc,	// (0x00063240) popup_preview_fixed_window

0xd088,	// (0x00063cfc) im_reading_pane_g1

0x6c23,	// (0x0005d897) cams2_bc_adjust_pane_cp_ParamLimits

0x6c23,	// (0x0005d897) cams2_bc_adjust_pane_cp

0xd52d,	// (0x000641a1) cams2_bc_adjust_pane_ParamLimits

0xd52d,	// (0x000641a1) cams2_bc_adjust_pane

0x2a11,	// (0x00059685) cams2_bc_adjust_pane_g1

0xc5e4,	// (0x00063258) cams2_slider_pane

0x2a11,	// (0x00059685) cams2_slider_pane_g1

0x2a11,	// (0x00059685) cams2_slider_pane_g2

0x0006,

0xf614,	// (0x00066288) cams2_slider_pane_g

0x3ee0,	// (0x0005ab54) calc_display_pane_ParamLimits

0x3f05,	// (0x0005ab79) calc_paper_pane_ParamLimits

0x3f28,	// (0x0005ab9c) grid_calc_pane_ParamLimits

0xd3fa,	// (0x0006406e) popup_clock_digital_window_t1_ParamLimits

0x0979,	// (0x000575ed) main_image_pane_t1

0x3ec2,	// (0x0005ab36) aid_size_cell_calc_ParamLimits

0x3ec2,	// (0x0005ab36) aid_size_cell_calc

0x67b6,	// (0x0005d42a) popup_blid_sat_info2_window_ParamLimits

0x67b6,	// (0x0005d42a) popup_blid_sat_info2_window

0x1c6c,	// (0x000588e0) aid_size_cell_blid

0x07bc,	// (0x00057430) bg_popup_window_pane_cp07

0x1c89,	// (0x000588fd) grid_popup_blid_pane

0x1c93,	// (0x00058907) heading_pane_cp05_ParamLimits

0x1c93,	// (0x00058907) heading_pane_cp05

0x1d5d,	// (0x000589d1) cell_popup_blid_pane_ParamLimits

0x1d5d,	// (0x000589d1) cell_popup_blid_pane

0x1d81,	// (0x000589f5) cell_popup_blid_pane_g1

0x1d89,	// (0x000589fd) cell_popup_blid_pane_t1

0x1a58,	// (0x000586cc) mup2_indicator_pane_ParamLimits

0x1a58,	// (0x000586cc) mup2_indicator_pane

0xc55f,	// (0x000631d3) mup2_visualizer_osc_pane

0x1b35,	// (0x000587a9) mup2_visualizer_spec_pane_ParamLimits

0x1b35,	// (0x000587a9) mup2_visualizer_spec_pane

0xc55f,	// (0x000631d3) mup2_spec_half_pane

0xc55f,	// (0x000631d3) mup2_spec_half_pane_cp

0x1d97,	// (0x00058a0b) mup2_spec_bar_pane_ParamLimits

0x1d97,	// (0x00058a0b) mup2_spec_bar_pane

0xcfd7,	// (0x00063c4b) mup2_spec_bar_pane_g1

0x1db6,	// (0x00058a2a) mup2_spec_bar_pane_g2

0x0001,

0xf63a,	// (0x000662ae) mup2_spec_bar_pane_g

0xc55f,	// (0x000631d3) mup2_osc_middle_pane

0xcfd7,	// (0x00063c4b) mup2_visualizer_osc_pane_g1

0xc60e,	// (0x00063282) popup_number_entry_window_t1_ParamLimits

0xc621,	// (0x00063295) popup_number_entry_window_t2_ParamLimits

0xc633,	// (0x000632a7) popup_number_entry_window_t3_ParamLimits

0x3e69,	// (0x0005aadd) popup_number_entry_window_t5_ParamLimits

0x3e69,	// (0x0005aadd) popup_number_entry_window_t5

0xf06b,	// (0x00065cdf) popup_number_entry_window_t_ParamLimits

0xc645,	// (0x000632b9) text_title_cp2_ParamLimits

0xd44d,	// (0x000640c1) aid_hotspot_pointer_text2_pane

0xd467,	// (0x000640db) main_viewer_pane_g9_ParamLimits

0xd467,	// (0x000640db) main_viewer_pane_g9

0xd2c1,	// (0x00063f35) cale_month_pane_t1_ParamLimits

0xd32c,	// (0x00063fa0) bg_cale_pane_ParamLimits

0xd344,	// (0x00063fb8) list_cale_pane_ParamLimits

0xd355,	// (0x00063fc9) listscroll_cale_day_pane_t1

0xd367,	// (0x00063fdb) scroll_pane_cp09_ParamLimits

0x5af4,	// (0x0005c768) main_mup_eq_pane_t1_ParamLimits

0x5af4,	// (0x0005c768) main_mup_eq_pane_t1

0x5b0e,	// (0x0005c782) main_mup_eq_pane_t2_ParamLimits

0x5b0e,	// (0x0005c782) main_mup_eq_pane_t2

0x5b28,	// (0x0005c79c) main_mup_eq_pane_t3_ParamLimits

0x5b28,	// (0x0005c79c) main_mup_eq_pane_t3

0x5b44,	// (0x0005c7b8) main_mup_eq_pane_t4_ParamLimits

0x5b44,	// (0x0005c7b8) main_mup_eq_pane_t4

0x5b60,	// (0x0005c7d4) main_mup_eq_pane_t5_ParamLimits

0x5b60,	// (0x0005c7d4) main_mup_eq_pane_t5

0x5b7c,	// (0x0005c7f0) main_mup_eq_pane_t6_ParamLimits

0x5b7c,	// (0x0005c7f0) main_mup_eq_pane_t6

0x5b90,	// (0x0005c804) main_mup_eq_pane_t7_ParamLimits

0x5b90,	// (0x0005c804) main_mup_eq_pane_t7

0x5ba4,	// (0x0005c818) main_mup_eq_pane_t8_ParamLimits

0x5ba4,	// (0x0005c818) main_mup_eq_pane_t8

0x5bb8,	// (0x0005c82c) main_mup_eq_pane_t9_ParamLimits

0x5bb8,	// (0x0005c82c) main_mup_eq_pane_t9

0x5bd2,	// (0x0005c846) main_mup_eq_pane_t10_ParamLimits

0x5bd2,	// (0x0005c846) main_mup_eq_pane_t10

0x0009,

0xf3ca,	// (0x0006603e) main_mup_eq_pane_t_ParamLimits

0xf3ca,	// (0x0006603e) main_mup_eq_pane_t

0x5c81,	// (0x0005c8f5) mup_equalizer_pane_cp5_ParamLimits

0x5c95,	// (0x0005c909) mup_equalizer_pane_cp6_ParamLimits

0x5ca9,	// (0x0005c91d) mup_equalizer_pane_cp7_ParamLimits

0xc5e4,	// (0x00063258) main_gallery_pane

0x1ad3,	// (0x00058747) smil2_volume_pane

0x1adb,	// (0x0005874f) smil_status_volume_pane_g1_ParamLimits

0x1aee,	// (0x00058762) smil_status_volume_pane_g2_ParamLimits

0xd4c7,	// (0x0006413b) smil_status_volume_pane_g3_ParamLimits

0xf593,	// (0x00066207) smil_status_volume_pane_g_ParamLimits

0x07bc,	// (0x00057430) bg_popup_window_pane_cp07_ParamLimits

0x1c74,	// (0x000588e8) blid_firmament_pane

0xcc7e,	// (0x000638f2) aid_size_cell_gallery_ParamLimits

0xcc7e,	// (0x000638f2) aid_size_cell_gallery

0xcc7e,	// (0x000638f2) grid_gallery_pane_ParamLimits

0xcc7e,	// (0x000638f2) grid_gallery_pane

0x07bc,	// (0x00057430) cell_gallery_pane_ParamLimits

0x07bc,	// (0x00057430) cell_gallery_pane

0xcc7e,	// (0x000638f2) bg_cell_gallery_focus_pane_ParamLimits

0xcc7e,	// (0x000638f2) bg_cell_gallery_focus_pane

0xcce5,	// (0x00063959) cell_gallery_pane_g1_ParamLimits

0xcce5,	// (0x00063959) cell_gallery_pane_g1

0xcce5,	// (0x00063959) cell_gallery_pane_g2_ParamLimits

0xcce5,	// (0x00063959) cell_gallery_pane_g2

0xcce5,	// (0x00063959) cell_gallery_pane_g3_ParamLimits

0xcce5,	// (0x00063959) cell_gallery_pane_g3

0xccf3,	// (0x00063967) cell_gallery_pane_g4_ParamLimits

0xccf3,	// (0x00063967) cell_gallery_pane_g4

0x0003,

0xf63f,	// (0x000662b3) cell_gallery_pane_g_ParamLimits

0xf63f,	// (0x000662b3) cell_gallery_pane_g

0x1dc0,	// (0x00058a34) bg_cell_gallery_focus_pane_g1

0x1dc8,	// (0x00058a3c) bg_cell_gallery_focus_pane_g2

0x1dd0,	// (0x00058a44) bg_cell_gallery_focus_pane_g3

0x1dd8,	// (0x00058a4c) bg_cell_gallery_focus_pane_g4

0x1de0,	// (0x00058a54) bg_cell_gallery_focus_pane_g5

0x1de8,	// (0x00058a5c) bg_cell_gallery_focus_pane_g6

0x1df0,	// (0x00058a64) bg_cell_gallery_focus_pane_g7

0x1df8,	// (0x00058a6c) bg_cell_gallery_focus_pane_g8

0x0007,

0xf648,	// (0x000662bc) bg_cell_gallery_focus_pane_g

0x1e00,	// (0x00058a74) aid_firma_cardinal

0x1e14,	// (0x00058a88) blid_firmament_pane_t1

0x1e2b,	// (0x00058a9f) blid_firmament_pane_t2

0x1e42,	// (0x00058ab6) blid_firmament_pane_t3

0x1e59,	// (0x00058acd) blid_firmament_pane_t4

0x0003,

0xf659,	// (0x000662cd) blid_firmament_pane_t

0x1e70,	// (0x00058ae4) blid_sat_info_pane

0xcfd7,	// (0x00063c4b) blid_sat_info_pane_g1

0xcfd7,	// (0x00063c4b) blid_sat_info_pane_g2

0x0001,

0xf3be,	// (0x00066032) blid_sat_info_pane_g

0x1e80,	// (0x00058af4) blid_sat_info_pane_t1

0x1e8e,	// (0x00058b02) smil2_volume_content_pane

0x1e97,	// (0x00058b0b) smil2_volume_pane_g1

0x1e9f,	// (0x00058b13) smil2_volume_content_pane_g1

0x1ea8,	// (0x00058b1c) smil2_volume_content_pane_g2

0x1eb1,	// (0x00058b25) smil2_volume_content_pane_g3

0x1eba,	// (0x00058b2e) smil2_volume_content_pane_g4

0x1ec3,	// (0x00058b37) smil2_volume_content_pane_g5

0x1ecc,	// (0x00058b40) smil2_volume_content_pane_g6

0x1ed5,	// (0x00058b49) smil2_volume_content_pane_g7

0x1ede,	// (0x00058b52) smil2_volume_content_pane_g8

0x1ee7,	// (0x00058b5b) smil2_volume_content_pane_g9

0x1ef0,	// (0x00058b64) smil2_volume_content_pane_g10

0x0009,

0xf662,	// (0x000662d6) smil2_volume_content_pane_g

0x44d2,	// (0x0005b146) cale_week_day_heading_pane_t1_ParamLimits

0x44fc,	// (0x0005b170) cale_week_day_heading_pane_t2_ParamLimits

0x452b,	// (0x0005b19f) cale_week_day_heading_pane_t3_ParamLimits

0x455a,	// (0x0005b1ce) cale_week_day_heading_pane_t4_ParamLimits

0x4589,	// (0x0005b1fd) cale_week_day_heading_pane_t5_ParamLimits

0x45c0,	// (0x0005b234) cale_week_day_heading_pane_t6_ParamLimits

0x45f7,	// (0x0005b26b) cale_week_day_heading_pane_t7_ParamLimits

0xf172,	// (0x00065de6) cale_week_day_heading_pane_t_ParamLimits

0xcf45,	// (0x00063bb9) bg_cale_side_pane_ParamLimits

0x4621,	// (0x0005b295) cale_week_time_pane_t1_ParamLimits

0x463b,	// (0x0005b2af) cale_week_time_pane_t2_ParamLimits

0x4655,	// (0x0005b2c9) cale_week_time_pane_t3_ParamLimits

0x466f,	// (0x0005b2e3) cale_week_time_pane_t4_ParamLimits

0x4689,	// (0x0005b2fd) cale_week_time_pane_t5_ParamLimits

0x46a3,	// (0x0005b317) cale_week_time_pane_t6_ParamLimits

0x46bd,	// (0x0005b331) cale_week_time_pane_t7_ParamLimits

0x46d7,	// (0x0005b34b) cale_week_time_pane_t8_ParamLimits

0xf181,	// (0x00065df5) cale_week_time_pane_t_ParamLimits

0x46f7,	// (0x0005b36b) cell_cale_week_pane_g2_ParamLimits

0xcf45,	// (0x00063bb9) bg_cale_side_pane_cp01_ParamLimits

0x5504,	// (0x0005c178) cale_month_week_pane_t1_ParamLimits

0x551d,	// (0x0005c191) cale_month_week_pane_t2_ParamLimits

0x5536,	// (0x0005c1aa) cale_month_week_pane_t3_ParamLimits

0x554f,	// (0x0005c1c3) cale_month_week_pane_t4_ParamLimits

0x5568,	// (0x0005c1dc) cale_month_week_pane_t5_ParamLimits

0x5581,	// (0x0005c1f5) cale_month_week_pane_t6_ParamLimits

0xf24f,	// (0x00065ec3) cale_month_week_pane_t_ParamLimits

0xd2d3,	// (0x00063f47) cell_cale_month_pane_g1_ParamLimits

0xc5e4,	// (0x00063258) main_cale_event_viewer_pane

0xc55f,	// (0x000631d3) listscroll_cale_event_viewer_pane

0x1ef9,	// (0x00058b6d) list_cale_ev_pane

0x1f01,	// (0x00058b75) scroll_pane_cp023

0x1f0d,	// (0x00058b81) field_cale_ev_pane_ParamLimits

0x1f0d,	// (0x00058b81) field_cale_ev_pane

0x1f2b,	// (0x00058b9f) field_cale_ev_content_pane_ParamLimits

0x1f2b,	// (0x00058b9f) field_cale_ev_content_pane

0x1f37,	// (0x00058bab) field_cale_ev_pane_g1_ParamLimits

0x1f37,	// (0x00058bab) field_cale_ev_pane_g1

0x1f43,	// (0x00058bb7) field_cale_ev_pane_g2_ParamLimits

0x1f43,	// (0x00058bb7) field_cale_ev_pane_g2

0x1f5b,	// (0x00058bcf) field_cale_ev_pane_g3_ParamLimits

0x1f5b,	// (0x00058bcf) field_cale_ev_pane_g3

0x0002,

0xf677,	// (0x000662eb) field_cale_ev_pane_g_ParamLimits

0xf677,	// (0x000662eb) field_cale_ev_pane_g

0x1f73,	// (0x00058be7) field_cale_ev_pane_t1_ParamLimits

0x1f73,	// (0x00058be7) field_cale_ev_pane_t1

0x1f8a,	// (0x00058bfe) field_cale_ev_content_pane_t1_ParamLimits

0x1f8a,	// (0x00058bfe) field_cale_ev_content_pane_t1

0x085f,	// (0x000574d3) bg_button_pane_cp01

0x41ff,	// (0x0005ae73) listscroll_cale_week_pane_ParamLimits

0xcef0,	// (0x00063b64) popup_toolbar_window_cp01

0xcf16,	// (0x00063b8a) listscroll_cale_week_pane_t1_ParamLimits

0x41ff,	// (0x0005ae73) listscroll_cale_day_pane_ParamLimits

0xcef0,	// (0x00063b64) popup_toolbar_window_cp02

0xd355,	// (0x00063fc9) listscroll_cale_day_pane_t1_ParamLimits

0x677c,	// (0x0005d3f0) main_cale_month_pane_ParamLimits

0xd4b2,	// (0x00064126) popup_toolbar_window_cp03_ParamLimits

0xd4b2,	// (0x00064126) popup_toolbar_window_cp03

0x603b,	// (0x0005ccaf) main_image_pane_g2_ParamLimits

0x603b,	// (0x0005ccaf) main_image_pane_g2

0x604c,	// (0x0005ccc0) main_image_pane_g3_ParamLimits

0x604c,	// (0x0005ccc0) main_image_pane_g3

0x0002,

0xf45c,	// (0x000660d0) main_image_pane_g_ParamLimits

0xf45c,	// (0x000660d0) main_image_pane_g

0x0979,	// (0x000575ed) main_image_pane_t1_ParamLimits

0x605d,	// (0x0005ccd1) main_image_pane_t2_ParamLimits

0x605d,	// (0x0005ccd1) main_image_pane_t2

0x606f,	// (0x0005cce3) main_image_pane_t3_ParamLimits

0x606f,	// (0x0005cce3) main_image_pane_t3

0x6097,	// (0x0005cd0b) main_image_pane_t4_ParamLimits

0x6097,	// (0x0005cd0b) main_image_pane_t4

0x0003,

0xf463,	// (0x000660d7) main_image_pane_t_ParamLimits

0xf463,	// (0x000660d7) main_image_pane_t

0x60b7,	// (0x0005cd2b) popup_image_details_window_cp01

0x60c1,	// (0x0005cd35) popup_toobar_trans_pane_cp01_ParamLimits

0x60c1,	// (0x0005cd35) popup_toobar_trans_pane_cp01

0x6887,	// (0x0005d4fb) popup_image_details_window_ParamLimits

0x6887,	// (0x0005d4fb) popup_image_details_window

0xd485,	// (0x000640f9) popup_image_focus_window

0xd4e9,	// (0x0006415d) camera2_autofocus_pane_ParamLimits

0xd4e9,	// (0x0006415d) camera2_autofocus_pane

0xc55f,	// (0x000631d3) bg_popup_sub_pane_cp06

0x1fa8,	// (0x00058c1c) popup_image_focus_window_g1

0x1fb0,	// (0x00058c24) popup_image_focus_window_g2

0x1fb8,	// (0x00058c2c) popup_image_focus_window_g3

0x1fc0,	// (0x00058c34) popup_image_focus_window_g4

0x0003,

0xf67e,	// (0x000662f2) popup_image_focus_window_g

0x1fc8,	// (0x00058c3c) popup_image_focus_window_t1

0x1fd6,	// (0x00058c4a) popup_image_focus_window_t2

0x1fe6,	// (0x00058c5a) popup_image_focus_window_t3

0x0002,

0xf687,	// (0x000662fb) popup_image_focus_window_t

0xcce5,	// (0x00063959) camera2_autofocus_pane_g1

0xcc7e,	// (0x000638f2) bg_tb_trans_pane_cp01

0x1ff4,	// (0x00058c68) popup_image_details_window_g1

0x2007,	// (0x00058c7b) popup_image_details_window_g2

0x0002,

0xf699,	// (0x0006630d) popup_image_details_window_g

0x2030,	// (0x00058ca4) popup_image_details_window_t1

0x2042,	// (0x00058cb6) popup_image_details_window_t2

0x205b,	// (0x00058ccf) popup_image_details_window_t3

0x206f,	// (0x00058ce3) popup_image_details_window_t4

0x208a,	// (0x00058cfe) popup_image_details_window_t5

0x0004,

0xf6a0,	// (0x00066314) popup_image_details_window_t

0xcd4b,	// (0x000639bf) bg_calc_paper_pane_ParamLimits

0xc5e4,	// (0x00063258) grid_highlight_pane_cp013

0xcd5f,	// (0x000639d3) list_calc_pane_ParamLimits

0xcd71,	// (0x000639e5) scroll_pane_cp024

0xcd79,	// (0x000639ed) bg_calc_display_pane_ParamLimits

0x4040,	// (0x0005acb4) calc_display_pane_t1_ParamLimits

0x4052,	// (0x0005acc6) calc_display_pane_t2_ParamLimits

0xcd85,	// (0x000639f9) calc_display_pane_t3_ParamLimits

0xf0f2,	// (0x00065d66) calc_display_pane_t_ParamLimits

0x410c,	// (0x0005ad80) cell_calc_pane_g2

0x0001,

0xf10f,	// (0x00065d83) cell_calc_pane_g

0x4115,	// (0x0005ad89) cell_calc_pane_t1

0xcdf2,	// (0x00063a66) grid_highlight_pane_cp02_ParamLimits

0xce08,	// (0x00063a7c) toolbar_button_pane_cp01_ParamLimits

0xce08,	// (0x00063a7c) toolbar_button_pane_cp01

0x09be,	// (0x00057632) temp_image_control_pane_ParamLimits

0x09be,	// (0x00057632) temp_image_control_pane

0xc5d6,	// (0x0006324a) main_mp3_pane

0x20a4,	// (0x00058d18) temp_image_control_pane_g1_ParamLimits

0x20a4,	// (0x00058d18) temp_image_control_pane_g1

0x20b2,	// (0x00058d26) temp_image_control_pane_g2_ParamLimits

0x20b2,	// (0x00058d26) temp_image_control_pane_g2

0x20c4,	// (0x00058d38) temp_image_control_pane_g3_ParamLimits

0x20c4,	// (0x00058d38) temp_image_control_pane_g3

0x6d4e,	// (0x0005d9c2) temp_image_control_pane_g4_ParamLimits

0x6d4e,	// (0x0005d9c2) temp_image_control_pane_g4

0x0003,

0xf6ab,	// (0x0006631f) temp_image_control_pane_g_ParamLimits

0xf6ab,	// (0x0006631f) temp_image_control_pane_g

0x20a4,	// (0x00058d18) main_mp3_pane_g1

0x6d61,	// (0x0005d9d5) main_mp3_pane_g2

0x0007,

0xf6b4,	// (0x00066328) main_mp3_pane_g

0x20f9,	// (0x00058d6d) main_mp3_pane_t1

0xccf3,	// (0x00063967) main_camera_pane_g8_ParamLimits

0xccf3,	// (0x00063967) main_camera_pane_g8

0x48c5,	// (0x0005b539) main_video_pane_g7_ParamLimits

0x48c5,	// (0x0005b539) main_video_pane_g7

0xd519,	// (0x0006418d) main_camera2_pane_t7_ParamLimits

0xd519,	// (0x0006418d) main_camera2_pane_t7

0xd0df,	// (0x00063d53) scroll_pane_cp025_ParamLimits

0xd0df,	// (0x00063d53) scroll_pane_cp025

0xd0f3,	// (0x00063d67) scroll_pane_cp026_ParamLimits

0xd0f3,	// (0x00063d67) scroll_pane_cp026

0xd102,	// (0x00063d76) wml_content_pane_ParamLimits

0xc5e4,	// (0x00063258) main_touch_calib_pane

0x6e35,	// (0x0005daa9) main_touch_calib_pane_g1

0x6e47,	// (0x0005dabb) main_touch_calib_pane_g2

0x6e59,	// (0x0005dacd) main_touch_calib_pane_g3

0x6e6b,	// (0x0005dadf) main_touch_calib_pane_g4

0x0003,

0xf6d2,	// (0x00066346) main_touch_calib_pane_g

0x6e7d,	// (0x0005daf1) main_touch_calib_pane_t1

0x6e97,	// (0x0005db0b) main_touch_calib_pane_t2

0x0004,

0xf6db,	// (0x0006634f) main_touch_calib_pane_t

0x05a0,	// (0x00057214) mup_progress_pane_cp02

0x05d5,	// (0x00057249) navi_pane_g1

0x0690,	// (0x00057304) navi_pane_mp_t3

0xc5d6,	// (0x0006324a) main_mp3_pane_ParamLimits

0x6a12,	// (0x0005d686) navi_pane_ParamLimits

0x20a4,	// (0x00058d18) main_mp3_pane_g1_ParamLimits

0x6d61,	// (0x0005d9d5) main_mp3_pane_g2_ParamLimits

0x6d6f,	// (0x0005d9e3) main_mp3_pane_g3_ParamLimits

0x6d6f,	// (0x0005d9e3) main_mp3_pane_g3

0x6d7d,	// (0x0005d9f1) main_mp3_pane_g4_ParamLimits

0x6d7d,	// (0x0005d9f1) main_mp3_pane_g4

0xcce5,	// (0x00063959) main_mp3_pane_g5_ParamLimits

0xcce5,	// (0x00063959) main_mp3_pane_g5

0x20d4,	// (0x00058d48) main_mp3_pane_g6_ParamLimits

0x20d4,	// (0x00058d48) main_mp3_pane_g6

0x20e1,	// (0x00058d55) main_mp3_pane_g7_ParamLimits

0x20e1,	// (0x00058d55) main_mp3_pane_g7

0x20ed,	// (0x00058d61) main_mp3_pane_g8_ParamLimits

0x20ed,	// (0x00058d61) main_mp3_pane_g8

0xf6b4,	// (0x00066328) main_mp3_pane_g_ParamLimits

0x6d89,	// (0x0005d9fd) main_mp3_pane_t2

0x6d97,	// (0x0005da0b) main_mp3_pane_t3

0x2107,	// (0x00058d7b) main_mp3_pane_t4

0x2115,	// (0x00058d89) main_mp3_pane_t5

0x0005,

0xf6c5,	// (0x00066339) main_mp3_pane_t

0x2123,	// (0x00058d97) mup_progress_pane_cp01

0xc58d,	// (0x00063201) aid_zoom_text_secondary2

0x1ef9,	// (0x00058b6d) list_cale_ev2_pane

0x1f01,	// (0x00058b75) scroll_pane_cp023_ParamLimits

0x6eed,	// (0x0005db61) field_cale_ev2_pane_ParamLimits

0x6eed,	// (0x0005db61) field_cale_ev2_pane

0x6f0e,	// (0x0005db82) field_cale_ev2_pane_g1_ParamLimits

0x6f0e,	// (0x0005db82) field_cale_ev2_pane_g1

0x6f1a,	// (0x0005db8e) field_cale_ev2_pane_g2_ParamLimits

0x6f1a,	// (0x0005db8e) field_cale_ev2_pane_g2

0x6f32,	// (0x0005dba6) field_cale_ev2_pane_g3_ParamLimits

0x6f32,	// (0x0005dba6) field_cale_ev2_pane_g3

0x0003,

0xf6e6,	// (0x0006635a) field_cale_ev2_pane_g_ParamLimits

0xf6e6,	// (0x0006635a) field_cale_ev2_pane_g

0x6f56,	// (0x0005dbca) field_cale_ev2_pane_t1_ParamLimits

0x6f56,	// (0x0005dbca) field_cale_ev2_pane_t1

0x6f6d,	// (0x0005dbe1) field_cale_ev2_pane_t2_ParamLimits

0x6f6d,	// (0x0005dbe1) field_cale_ev2_pane_t2

0x0001,

0xf6ef,	// (0x00066363) field_cale_ev2_pane_t_ParamLimits

0xf6ef,	// (0x00066363) field_cale_ev2_pane_t

0x5eef,	// (0x0005cb63) main_postcard_pane_g5_ParamLimits

0x5eef,	// (0x0005cb63) main_postcard_pane_g5

0x5f05,	// (0x0005cb79) main_postcard_pane_g6_ParamLimits

0x5f05,	// (0x0005cb79) main_postcard_pane_g6

0xcc7e,	// (0x000638f2) camera2_autofocus_pane_cp_ParamLimits

0xcc7e,	// (0x000638f2) camera2_autofocus_pane_cp

0xc5d6,	// (0x0006324a) main_mup3_pane

0x6fc6,	// (0x0005dc3a) main_mup3_pane_g1_ParamLimits

0x6fc6,	// (0x0005dc3a) main_mup3_pane_g1

0x6fe8,	// (0x0005dc5c) main_mup3_pane_g2_ParamLimits

0x6fe8,	// (0x0005dc5c) main_mup3_pane_g2

0x7068,	// (0x0005dcdc) main_mup3_pane_g3_ParamLimits

0x7068,	// (0x0005dcdc) main_mup3_pane_g3

0x70ae,	// (0x0005dd22) main_mup3_pane_g4_ParamLimits

0x70ae,	// (0x0005dd22) main_mup3_pane_g4

0x70f4,	// (0x0005dd68) main_mup3_pane_g5_ParamLimits

0x70f4,	// (0x0005dd68) main_mup3_pane_g5

0x713a,	// (0x0005ddae) main_mup3_pane_g6_ParamLimits

0x713a,	// (0x0005ddae) main_mup3_pane_g6

0xccf3,	// (0x00063967) main_mup3_pane_g7_ParamLimits

0xccf3,	// (0x00063967) main_mup3_pane_g7

0x0007,

0xf6ff,	// (0x00066373) main_mup3_pane_g_ParamLimits

0xf6ff,	// (0x00066373) main_mup3_pane_g

0x71b8,	// (0x0005de2c) main_mup3_pane_t1_ParamLimits

0x71b8,	// (0x0005de2c) main_mup3_pane_t1

0x722c,	// (0x0005dea0) main_mup3_pane_t2_ParamLimits

0x722c,	// (0x0005dea0) main_mup3_pane_t2

0x7300,	// (0x0005df74) main_mup3_pane_t4_ParamLimits

0x7300,	// (0x0005df74) main_mup3_pane_t4

0x7356,	// (0x0005dfca) main_mup3_pane_t5_ParamLimits

0x7356,	// (0x0005dfca) main_mup3_pane_t5

0x7412,	// (0x0005e086) main_mup3_pane_t6_ParamLimits

0x7412,	// (0x0005e086) main_mup3_pane_t6

0x0005,

0xf710,	// (0x00066384) main_mup3_pane_t_ParamLimits

0xf710,	// (0x00066384) main_mup3_pane_t

0x74ca,	// (0x0005e13e) mup3_progress_pane_ParamLimits

0x74ca,	// (0x0005e13e) mup3_progress_pane

0x7556,	// (0x0005e1ca) popup_mup3_control_window_ParamLimits

0x7556,	// (0x0005e1ca) popup_mup3_control_window

0x212b,	// (0x00058d9f) popup_mup3_text_window

0x7588,	// (0x0005e1fc) mup3_progress_pane_t1

0x75a7,	// (0x0005e21b) mup3_progress_pane_t2

0x2133,	// (0x00058da7) mup3_progress_pane_t3

0x0002,

0xf71d,	// (0x00066391) mup3_progress_pane_t

0x2150,	// (0x00058dc4) mup_progress_pane_cp03

0xc55f,	// (0x000631d3) bg_tb_trans_pane_cp04

0x75c6,	// (0x0005e23a) mup3_volume_pane

0x75ce,	// (0x0005e242) popup_mup3_control_window_g1

0x75d7,	// (0x0005e24b) mup3_volume_pane_g1

0x75e0,	// (0x0005e254) mup3_volume_pane_g2

0x75e9,	// (0x0005e25d) mup3_volume_pane_g3

0x0002,

0xf724,	// (0x00066398) mup3_volume_pane_g

0xc55f,	// (0x000631d3) bg_tb_trans_pane_cp03

0x2160,	// (0x00058dd4) popup_mup3_text_window_g1

0x2168,	// (0x00058ddc) popup_mup3_text_window_t1

0xcdd3,	// (0x00063a47) list_calc_item_pane_g1_ParamLimits

0x1bea,	// (0x0005885e) mup_volume_pane_cp_g1

0x6eb1,	// (0x0005db25) main_touch_calib_pane_t3

0x6ec5,	// (0x0005db39) main_touch_calib_pane_t4

0x6ed9,	// (0x0005db4d) main_touch_calib_pane_t5

0xc569,	// (0x000631dd) aid_cell_size_toolbar2

0xc571,	// (0x000631e5) aid_popup3_width_pane

0xc57d,	// (0x000631f1) aid_zoom_text_msg_primary

0x47a0,	// (0x0005b414) vorec_t7

0xcd97,	// (0x00063a0b) bg_calc_paper_pane_g1_ParamLimits

0xcda3,	// (0x00063a17) bg_calc_paper_pane_g2_ParamLimits

0xcdaf,	// (0x00063a23) bg_calc_paper_pane_g3_ParamLimits

0xcdbb,	// (0x00063a2f) bg_calc_paper_pane_g4_ParamLimits

0xcdc7,	// (0x00063a3b) bg_calc_paper_pane_g5_ParamLimits

0x4099,	// (0x0005ad0d) bg_calc_paper_pane_g6_ParamLimits

0x40a8,	// (0x0005ad1c) bg_calc_paper_pane_g7_ParamLimits

0x40b7,	// (0x0005ad2b) bg_calc_paper_pane_g8_ParamLimits

0xf0f9,	// (0x00065d6d) bg_calc_paper_pane_g_ParamLimits

0x40ca,	// (0x0005ad3e) calc_bg_paper_pane_g9_ParamLimits

0xcc7e,	// (0x000638f2) image_qvga_pane_ParamLimits

0xcc7e,	// (0x000638f2) image_qvga_pane

0xcc5c,	// (0x000638d0) bg_popup_sub_pane_cp04_ParamLimits

0x08f5,	// (0x00057569) popup_mup_playback_window_g1_ParamLimits

0x0901,	// (0x00057575) popup_mup_playback_window_t1_ParamLimits

0x0916,	// (0x0005758a) popup_mup_playback_window_t2_ParamLimits

0xf457,	// (0x000660cb) popup_mup_playback_window_t_ParamLimits

0xccf3,	// (0x00063967) main_mup2_pane_g3_ParamLimits

0xccf3,	// (0x00063967) main_mup2_pane_g3

0x4acc,	// (0x0005b740) popup_toolbar_window_cp04

0x0d0b,	// (0x0005797f) popup_call2_audio_second_window_g3_ParamLimits

0x0d0b,	// (0x0005797f) popup_call2_audio_second_window_g3

0x1115,	// (0x00057d89) popup_call2_audio_first_window_g4_ParamLimits

0x1115,	// (0x00057d89) popup_call2_audio_first_window_g4

0x173c,	// (0x000583b0) popup_call2_audio_in_window_g4_ParamLimits

0x173c,	// (0x000583b0) popup_call2_audio_in_window_g4

0x601d,	// (0x0005cc91) aid_area_sk_bg_cut_ParamLimits

0x601d,	// (0x0005cc91) aid_area_sk_bg_cut

0x092b,	// (0x0005759f) aid_area_sk_bg_cut_2_ParamLimits

0x092b,	// (0x0005759f) aid_area_sk_bg_cut_2

0xc55f,	// (0x000631d3) aid_placing_details_win

0xc55f,	// (0x000631d3) aid_placing_details_win_2

0xcce5,	// (0x00063959) camera2_autofocus_pane_g1_ParamLimits

0x3db0,	// (0x0005aa24) popup_fixed_preview_cale_window_ParamLimits

0x3db0,	// (0x0005aa24) popup_fixed_preview_cale_window

0x070e,	// (0x00057382) navi_slider_pane_g3

0x0717,	// (0x0005738b) navi_slider_pane_g4

0x0720,	// (0x00057394) navi_slider_pane_g5

0x070e,	// (0x00057382) navi_slider_pane_g6

0xd420,	// (0x00064094) navi_slider_pane_g7

0x082c,	// (0x000574a0) mup_scale_pane_g3

0x0835,	// (0x000574a9) mup_scale_pane_g4

0x083e,	// (0x000574b2) mup_scale_pane_g5

0x5cbd,	// (0x0005c931) mup_scale_pane_g6

0x5cc6,	// (0x0005c93a) mup_scale_pane_g7

0x2a11,	// (0x00059685) cams2_slider_pane_g3

0x2a11,	// (0x00059685) cams2_slider_pane_g4

0x2a11,	// (0x00059685) cams2_slider_pane_g5

0x2a11,	// (0x00059685) cams2_slider_pane_g6

0x2a11,	// (0x00059685) cams2_slider_pane_g7

0xcfd7,	// (0x00063c4b) camera2_autofocus_pane_cp_g1

0x1a4c,	// (0x000586c0) bg_popup_preview_window_pane_cp02_ParamLimits

0x1a4c,	// (0x000586c0) bg_popup_preview_window_pane_cp02

0x2176,	// (0x00058dea) list_fp_cale_pane_ParamLimits

0x2176,	// (0x00058dea) list_fp_cale_pane

0x2182,	// (0x00058df6) popup_fixed_preview_cale_window_t1_ParamLimits

0x2182,	// (0x00058df6) popup_fixed_preview_cale_window_t1

0x75f2,	// (0x0005e266) popup_fixed_preview_cale_window_t2_ParamLimits

0x75f2,	// (0x0005e266) popup_fixed_preview_cale_window_t2

0x7607,	// (0x0005e27b) popup_fixed_preview_cale_window_t3_ParamLimits

0x7607,	// (0x0005e27b) popup_fixed_preview_cale_window_t3

0x0002,

0xf72b,	// (0x0006639f) popup_fixed_preview_cale_window_t_ParamLimits

0xf72b,	// (0x0006639f) popup_fixed_preview_cale_window_t

0x761c,	// (0x0005e290) list_single_fp_cale_pane_ParamLimits

0x761c,	// (0x0005e290) list_single_fp_cale_pane

0x21a0,	// (0x00058e14) list_single_fp_cale_pane_g1_ParamLimits

0x21a0,	// (0x00058e14) list_single_fp_cale_pane_g1

0x21ac,	// (0x00058e20) list_single_fp_cale_pane_g2_ParamLimits

0x21ac,	// (0x00058e20) list_single_fp_cale_pane_g2

0x0002,

0xf732,	// (0x000663a6) list_single_fp_cale_pane_g_ParamLimits

0xf732,	// (0x000663a6) list_single_fp_cale_pane_g

0x21c5,	// (0x00058e39) list_single_fp_cale_pane_t1_ParamLimits

0x21c5,	// (0x00058e39) list_single_fp_cale_pane_t1

0x21d7,	// (0x00058e4b) list_single_fp_cale_pane_t2_ParamLimits

0x21d7,	// (0x00058e4b) list_single_fp_cale_pane_t2

0x0001,

0xf739,	// (0x000663ad) list_single_fp_cale_pane_t_ParamLimits

0xf739,	// (0x000663ad) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0xc5e4,	// (0x00063258) main_dialer_pane

0xc55f,	// (0x000631d3) aid_cell_size_keypad

0xc55f,	// (0x000631d3) dialer_ne_pane

0xc55f,	// (0x000631d3) grid_dialer_command_1_pane

0xc55f,	// (0x000631d3) grid_dialer_command_2_pane

0xc55f,	// (0x000631d3) grid_dialer_keypad_pane

0x7632,	// (0x0005e2a6) bg_popup_call_pane_cp06_ParamLimits

0x7632,	// (0x0005e2a6) bg_popup_call_pane_cp06

0x7632,	// (0x0005e2a6) dialer_ne_clear_pane_ParamLimits

0x7632,	// (0x0005e2a6) dialer_ne_clear_pane

0xcfd7,	// (0x00063c4b) dialer_ne_pane_g1

0xd429,	// (0x0006409d) dialer_ne_pane_t1_ParamLimits

0xd429,	// (0x0006409d) dialer_ne_pane_t1

0x7640,	// (0x0005e2b4) dialer_ne_pane_t2_ParamLimits

0x7640,	// (0x0005e2b4) dialer_ne_pane_t2

0x7668,	// (0x0005e2dc) dialer_ne_pane_t3_ParamLimits

0x7668,	// (0x0005e2dc) dialer_ne_pane_t3

0x0002,

0xf73e,	// (0x000663b2) dialer_ne_pane_t_ParamLimits

0xf73e,	// (0x000663b2) dialer_ne_pane_t

0x7668,	// (0x0005e2dc) dialer_ne_pane_t3_copy1_ParamLimits

0x7668,	// (0x0005e2dc) dialer_ne_pane_t3_copy1

0x2227,	// (0x00058e9b) cell_dialer_keypad_pane_ParamLimits

0x2227,	// (0x00058e9b) cell_dialer_keypad_pane

0xcc7e,	// (0x000638f2) cell_dialer_command_1_pane_ParamLimits

0xcc7e,	// (0x000638f2) cell_dialer_command_1_pane

0x223e,	// (0x00058eb2) cell_dialer_command_2_pane_ParamLimits

0x223e,	// (0x00058eb2) cell_dialer_command_2_pane

0xcc7e,	// (0x000638f2) bg_button_pane_cp02_ParamLimits

0xcc7e,	// (0x000638f2) bg_button_pane_cp02

0xcce5,	// (0x00063959) cell_dialer_keypad_pane_g1_ParamLimits

0xcce5,	// (0x00063959) cell_dialer_keypad_pane_g1

0xcc7e,	// (0x000638f2) bg_button_pane_cp03_ParamLimits

0xcc7e,	// (0x000638f2) bg_button_pane_cp03

0xcce5,	// (0x00063959) cell_dialer_command_1_pane_g1_ParamLimits

0xcce5,	// (0x00063959) cell_dialer_command_1_pane_g1

0xc55f,	// (0x000631d3) bg_button_pane_cp04

0xcfd7,	// (0x00063c4b) cell_dialer_command_2_pane_g1

0xc55f,	// (0x000631d3) bg_button_pane_cp06

0xcfd7,	// (0x00063c4b) dialer_ne_clear_pane_g1

0x05e1,	// (0x00057255) navi_pane_g2

0x060f,	// (0x00057283) navi_pane_g3

0x0002,

0xf35a,	// (0x00065fce) navi_pane_g

0x069e,	// (0x00057312) navi_pane_mv_g2

0x06c5,	// (0x00057339) navi_pane_mv_g5

0x5aa2,	// (0x0005c716) navi_pane_mv_t1

0xcd79,	// (0x000639ed) main_clock2_pane

0xcc7e,	// (0x000638f2) main_clock2_list_pane_ParamLimits

0xcc7e,	// (0x000638f2) main_clock2_list_pane

0x76fe,	// (0x0005e372) main_clock2_pane_t1_ParamLimits

0x76fe,	// (0x0005e372) main_clock2_pane_t1

0x7739,	// (0x0005e3ad) main_clock2_pane_t2_ParamLimits

0x7739,	// (0x0005e3ad) main_clock2_pane_t2

0x0004,

0xf74a,	// (0x000663be) main_clock2_pane_t_ParamLimits

0xf74a,	// (0x000663be) main_clock2_pane_t

0x77d9,	// (0x0005e44d) popup_clock_analogue_window_cp03_ParamLimits

0x77d9,	// (0x0005e44d) popup_clock_analogue_window_cp03

0x77fe,	// (0x0005e472) popup_clock_digital_window_cp02_ParamLimits

0x77fe,	// (0x0005e472) popup_clock_digital_window_cp02

0x7877,	// (0x0005e4eb) main_clock2_list_single_pane_ParamLimits

0x7877,	// (0x0005e4eb) main_clock2_list_single_pane

0xcf97,	// (0x00063c0b) list_highlight_pane_cp05

0x2281,	// (0x00058ef5) main_clock2_list_single_pane_t1

0x4acc,	// (0x0005b740) popup_toolbar_window_cp04_ParamLimits

0xccf3,	// (0x00063967) camera2_autofocus_pane_g2_ParamLimits

0xccf3,	// (0x00063967) camera2_autofocus_pane_g2

0xccf3,	// (0x00063967) camera2_autofocus_pane_g3_ParamLimits

0xccf3,	// (0x00063967) camera2_autofocus_pane_g3

0xccf3,	// (0x00063967) camera2_autofocus_pane_g4_ParamLimits

0xccf3,	// (0x00063967) camera2_autofocus_pane_g4

0xccf3,	// (0x00063967) camera2_autofocus_pane_g5_ParamLimits

0xccf3,	// (0x00063967) camera2_autofocus_pane_g5

0x0004,

0xf68e,	// (0x00066302) camera2_autofocus_pane_g_ParamLimits

0xf68e,	// (0x00066302) camera2_autofocus_pane_g

0x6f82,	// (0x0005dbf6) camera2_autofocus_pane_cp_g2

0x6f8a,	// (0x0005dbfe) camera2_autofocus_pane_cp_g3

0x6f92,	// (0x0005dc06) camera2_autofocus_pane_cp_g4

0x6f9a,	// (0x0005dc0e) camera2_autofocus_pane_cp_g5

0x0004,

0xf6f4,	// (0x00066368) camera2_autofocus_pane_cp_g

0xc55f,	// (0x000631d3) popup_dialer_spcha_window

0xc55f,	// (0x000631d3) bg_popup_sub_pane_cp07

0xc55f,	// (0x000631d3) list_spcha_pane

0x228f,	// (0x00058f03) list_single_spcha_pane_ParamLimits

0x228f,	// (0x00058f03) list_single_spcha_pane

0xc55f,	// (0x000631d3) list_highlight_pane_cp06

0x0233,	// (0x00056ea7) list_single_spcha_pane_t1

0x14e6,	// (0x0005815a) popup_call2_audio_out_window_g4_ParamLimits

0x14e6,	// (0x0005815a) popup_call2_audio_out_window_g4

0xc5e4,	// (0x00063258) main_imed2_pane

0xd48d,	// (0x00064101) popup_imed_adjust2_window

0x689f,	// (0x0005d513) popup_imed_trans_window_ParamLimits

0x689f,	// (0x0005d513) popup_imed_trans_window

0x1cbf,	// (0x00058933) popup_blid_sat_info2_window_t1

0x1ccd,	// (0x00058941) popup_blid_sat_info2_window_t2

0x000a,

0xf623,	// (0x00066297) popup_blid_sat_info2_window_t

0x7928,	// (0x0005e59c) aid_size_cell_colour_35

0x7948,	// (0x0005e5bc) aid_size_cell_colour_112

0x7968,	// (0x0005e5dc) aid_size_cell_effect

0x1a58,	// (0x000586cc) bg_tb_trans_pane_cp02

0x0165,	// (0x00056dd9) heading_imed_pane

0x7988,	// (0x0005e5fc) listscroll_imed_pane

0x22ad,	// (0x00058f21) heading_imed_pane_g1

0x22b5,	// (0x00058f29) heading_imed_pane_t1

0x22c3,	// (0x00058f37) grid_imed_colour_35_pane_ParamLimits

0x22c3,	// (0x00058f37) grid_imed_colour_35_pane

0x7994,	// (0x0005e608) grid_imed_effect_pane

0x22db,	// (0x00058f4f) list_imed_aspect_pane

0x79aa,	// (0x0005e61e) scroll_pane_cp027_ParamLimits

0x79aa,	// (0x0005e61e) scroll_pane_cp027

0x79bb,	// (0x0005e62f) cell_imed_effect_pane_ParamLimits

0x79bb,	// (0x0005e62f) cell_imed_effect_pane

0x22e3,	// (0x00058f57) cell_imed_colour_pane_ParamLimits

0x22e3,	// (0x00058f57) cell_imed_colour_pane

0x2325,	// (0x00058f99) cell_imed_colour_pane_g1_ParamLimits

0x2325,	// (0x00058f99) cell_imed_colour_pane_g1

0x2336,	// (0x00058faa) hgihlgiht_grid_pane_cp016_ParamLimits

0x2336,	// (0x00058faa) hgihlgiht_grid_pane_cp016

0x79e2,	// (0x0005e656) cell_imed_effect_pane_g1

0x79ea,	// (0x0005e65e) grid_highlight_pane_cp017

0x2347,	// (0x00058fbb) list_imed_single_pane_ParamLimits

0x2347,	// (0x00058fbb) list_imed_single_pane

0xc55f,	// (0x000631d3) list_highlight_pane_cp07

0x235c,	// (0x00058fd0) list_imed_aspect_pane_comp1_t1

0x1a58,	// (0x000586cc) bg_tb_trans_pane_cp05

0x237e,	// (0x00058ff2) popup_imed_adjust2_window_g1

0x23a5,	// (0x00059019) popup_imed_adjust2_window_t1

0x23bd,	// (0x00059031) slider_imed_adjust_pane

0x23d1,	// (0x00059045) slider_imed_adjust_pane_g1

0x23e1,	// (0x00059055) slider_imed_adjust_pane_g2

0x23f1,	// (0x00059065) slider_imed_adjust_pane_g3

0x2402,	// (0x00059076) slider_imed_adjust_pane_g4

0x0003,

0xf767,	// (0x000663db) slider_imed_adjust_pane_g

0x79f3,	// (0x0005e667) aid_size_cell_clipart2

0x79ff,	// (0x0005e673) grid_imed_clipart_pane

0x2413,	// (0x00059087) scroll_pane_cp031

0x7a09,	// (0x0005e67d) cell_imed_clipart_pane_ParamLimits

0x7a09,	// (0x0005e67d) cell_imed_clipart_pane

0x7a2b,	// (0x0005e69f) cell_imed_clipart_pane_g1

0xc55f,	// (0x000631d3) grid_highlight_pane_cp014

0x76da,	// (0x0005e34e) main_clock2_pane_g1_ParamLimits

0x76da,	// (0x0005e34e) main_clock2_pane_g1

0x781e,	// (0x0005e492) aid_call2_pane_cp10

0x7830,	// (0x0005e4a4) aid_call_pane_cp10

0x0540,	// (0x000571b4) popup_clock_analogue_window_cp10_g1

0x0540,	// (0x000571b4) popup_clock_analogue_window_cp10_g2

0x7842,	// (0x0005e4b6) popup_clock_analogue_window_cp10_g3

0x7842,	// (0x0005e4b6) popup_clock_analogue_window_cp10_g4

0x0540,	// (0x000571b4) popup_clock_analogue_window_cp10_g5

0x0004,

0xf755,	// (0x000663c9) popup_clock_analogue_window_cp10_g

0x7858,	// (0x0005e4cc) popup_clock_analogue_window_cp10_t1

0x7889,	// (0x0005e4fd) clock_digital_number_pane_cp10_ParamLimits

0x7889,	// (0x0005e4fd) clock_digital_number_pane_cp10

0x78a1,	// (0x0005e515) clock_digital_number_pane_cp11_ParamLimits

0x78a1,	// (0x0005e515) clock_digital_number_pane_cp11

0x78b9,	// (0x0005e52d) clock_digital_number_pane_cp12_ParamLimits

0x78b9,	// (0x0005e52d) clock_digital_number_pane_cp12

0x78d3,	// (0x0005e547) clock_digital_number_pane_cp13_ParamLimits

0x78d3,	// (0x0005e547) clock_digital_number_pane_cp13

0x78ed,	// (0x0005e561) clock_digital_separator_pane_cp10_ParamLimits

0x78ed,	// (0x0005e561) clock_digital_separator_pane_cp10

0x7907,	// (0x0005e57b) popup_clock_digital_window_cp02_t1_ParamLimits

0x7907,	// (0x0005e57b) popup_clock_digital_window_cp02_t1

0xcc54,	// (0x000638c8) clock_digital_number_pane_cp10_g1

0xcc54,	// (0x000638c8) clock_digital_number_pane_cp10_g2

0x0001,

0xf770,	// (0x000663e4) clock_digital_number_pane_cp10_g

0xcc54,	// (0x000638c8) clock_digital_separator_pane_cp10_g1

0xcc54,	// (0x000638c8) clock_digital_separator_pane_g2_cp10

0x06cd,	// (0x00057341) navi_pane_vded_g4

0x06d6,	// (0x0005734a) navi_pane_vded_g5

0x06df,	// (0x00057353) navi_pane_vded_t1

0xc5e4,	// (0x00063258) main_vded_pane

0x7a34,	// (0x0005e6a8) main_vded_pane_g1

0x7a3e,	// (0x0005e6b2) main_vded_pane_g2

0x7a48,	// (0x0005e6bc) main_vded_pane_g3

0x0002,

0xf775,	// (0x000663e9) main_vded_pane_g

0x7a52,	// (0x0005e6c6) main_vded_pane_t1

0x7a60,	// (0x0005e6d4) main_vded_pane_t2

0x0001,

0xf77c,	// (0x000663f0) main_vded_pane_t

0x7a6e,	// (0x0005e6e2) vded_slider_pane

0x7a76,	// (0x0005e6ea) vded_video_pane

0x241b,	// (0x0005908f) vded_video_pane_g1

0x7a7e,	// (0x0005e6f2) vded_video_pane_g2

0xcfd7,	// (0x00063c4b) vded_video_pane_g3

0x0002,

0xf781,	// (0x000663f5) vded_video_pane_g

0x2425,	// (0x00059099) vded_slider_pane_g1

0x1bea,	// (0x0005885e) vded_slider_pane_g2

0x242e,	// (0x000590a2) vded_slider_pane_g3

0x2437,	// (0x000590ab) vded_slider_pane_g4

0x2440,	// (0x000590b4) vded_slider_pane_g5

0x0004,

0xf788,	// (0x000663fc) vded_slider_pane_g

0x753e,	// (0x0005e1b2) mup3_rocker_pane_ParamLimits

0x753e,	// (0x0005e1b2) mup3_rocker_pane

0x7a87,	// (0x0005e6fb) mup3_control_keys_pane_g1

0x7a8f,	// (0x0005e703) mup3_control_keys_pane_g2

0x7a97,	// (0x0005e70b) mup3_control_keys_pane_g3

0x7a9f,	// (0x0005e713) mup3_control_keys_pane_g4

0x0003,

0xf793,	// (0x00066407) mup3_control_keys_pane_g

0x3de7,	// (0x0005aa5b) popup_toolbar2_fixed_window_cp01_ParamLimits

0x3de7,	// (0x0005aa5b) popup_toolbar2_fixed_window_cp01

0x7572,	// (0x0005e1e6) popup_toolbar2_fixed_window_cp02_ParamLimits

0x7572,	// (0x0005e1e6) popup_toolbar2_fixed_window_cp02

0x0e7d,	// (0x00057af1) popup_call2_audio_second_window_t4_ParamLimits

0x0e7d,	// (0x00057af1) popup_call2_audio_second_window_t4

0x13ab,	// (0x0005801f) popup_call2_audio_first_window_t6_ParamLimits

0x13ab,	// (0x0005801f) popup_call2_audio_first_window_t6

0x15e9,	// (0x0005825d) popup_call2_audio_out_window_t6_ParamLimits

0x15e9,	// (0x0005825d) popup_call2_audio_out_window_t6

0xc5e4,	// (0x00063258) main_vitu_pane

0xcc7e,	// (0x000638f2) aid_size_cell_itu_ParamLimits

0xcc7e,	// (0x000638f2) aid_size_cell_itu

0xcc7e,	// (0x000638f2) bg_popup_window_pane_cp08_ParamLimits

0xcc7e,	// (0x000638f2) bg_popup_window_pane_cp08

0xcc7e,	// (0x000638f2) field_vitu_entry_pane_ParamLimits

0xcc7e,	// (0x000638f2) field_vitu_entry_pane

0xcc7e,	// (0x000638f2) grid_vitu_function_pane_ParamLimits

0xcc7e,	// (0x000638f2) grid_vitu_function_pane

0xcc7e,	// (0x000638f2) grid_vitu_itu_pane_ParamLimits

0xcc7e,	// (0x000638f2) grid_vitu_itu_pane

0xcc7e,	// (0x000638f2) cell_vitu_itu_pane_ParamLimits

0xcc7e,	// (0x000638f2) cell_vitu_itu_pane

0xcc7e,	// (0x000638f2) cell_vitu_function_pane_ParamLimits

0xcc7e,	// (0x000638f2) cell_vitu_function_pane

0xcc7e,	// (0x000638f2) bg_popup_sub_pane_cp08_ParamLimits

0xcc7e,	// (0x000638f2) bg_popup_sub_pane_cp08

0xcfa9,	// (0x00063c1d) field_vitu_entry_pane_t1_ParamLimits

0xcfa9,	// (0x00063c1d) field_vitu_entry_pane_t1

0x220a,	// (0x00058e7e) field_vitu_entry_pane_t2_ParamLimits

0x220a,	// (0x00058e7e) field_vitu_entry_pane_t2

0x0001,

0xf79c,	// (0x00066410) field_vitu_entry_pane_t_ParamLimits

0xf79c,	// (0x00066410) field_vitu_entry_pane_t

0x07bc,	// (0x00057430) bg_button_pane_cp05_ParamLimits

0x07bc,	// (0x00057430) bg_button_pane_cp05

0x2449,	// (0x000590bd) cell_vitu_itu_pane_g1

0x2465,	// (0x000590d9) cell_vitu_itu_pane_t1_ParamLimits

0x2465,	// (0x000590d9) cell_vitu_itu_pane_t1

0x2465,	// (0x000590d9) cell_vitu_itu_pane_t2_ParamLimits

0x2465,	// (0x000590d9) cell_vitu_itu_pane_t2

0x0002,

0xf7a1,	// (0x00066415) cell_vitu_itu_pane_t_ParamLimits

0xf7a1,	// (0x00066415) cell_vitu_itu_pane_t

0xc55f,	// (0x000631d3) bg_button_pane_cp07

0xcfd7,	// (0x00063c4b) cell_vitu_function_pane_g1

0xcd23,	// (0x00063997) main_calc_pane_g1

0x3c0e,	// (0x0005a882) aid_visual_content_pane

0xc5e4,	// (0x00063258) main_vradio_pane

0xcce5,	// (0x00063959) main_vradio_pane_g1_ParamLimits

0xcce5,	// (0x00063959) main_vradio_pane_g1

0xccf3,	// (0x00063967) main_vradio_pane_g2_ParamLimits

0xccf3,	// (0x00063967) main_vradio_pane_g2

0x0001,

0xf7a8,	// (0x0006641c) main_vradio_pane_g_ParamLimits

0xf7a8,	// (0x0006641c) main_vradio_pane_g

0xcfa9,	// (0x00063c1d) main_vradio_pane_t1_ParamLimits

0xcfa9,	// (0x00063c1d) main_vradio_pane_t1

0xcfa9,	// (0x00063c1d) main_vradio_pane_t2_ParamLimits

0xcfa9,	// (0x00063c1d) main_vradio_pane_t2

0xd429,	// (0x0006409d) main_vradio_pane_t3_ParamLimits

0xd429,	// (0x0006409d) main_vradio_pane_t3

0x0002,

0xf7ad,	// (0x00066421) main_vradio_pane_t_ParamLimits

0xf7ad,	// (0x00066421) main_vradio_pane_t

0xcc7e,	// (0x000638f2) vradio_rocker_control_pane_ParamLimits

0xcc7e,	// (0x000638f2) vradio_rocker_control_pane

0xcc7e,	// (0x000638f2) vradio_station_info_pane_ParamLimits

0xcc7e,	// (0x000638f2) vradio_station_info_pane

0xcc7e,	// (0x000638f2) vradio_frequency_info_pane_ParamLimits

0xcc7e,	// (0x000638f2) vradio_frequency_info_pane

0xcfd7,	// (0x00063c4b) vradio_station_info_pane_g1

0x2465,	// (0x000590d9) vradio_station_info_pane_t1_ParamLimits

0x2465,	// (0x000590d9) vradio_station_info_pane_t1

0xd429,	// (0x0006409d) vradio_station_info_pane_t2_ParamLimits

0xd429,	// (0x0006409d) vradio_station_info_pane_t2

0x0001,

0xf7b4,	// (0x00066428) vradio_station_info_pane_t_ParamLimits

0xf7b4,	// (0x00066428) vradio_station_info_pane_t

0xc55f,	// (0x000631d3) vradio_tuning_pane

0x7aaf,	// (0x0005e723) vradio_rocker_control_pane_g1

0x2479,	// (0x000590ed) vradio_rocker_control_pane_g2

0x7ab9,	// (0x0005e72d) vradio_rocker_control_pane_g3

0x7ac3,	// (0x0005e737) vradio_rocker_control_pane_g4

0x7acd,	// (0x0005e741) vradio_rocker_control_pane_g5

0x0004,

0xf7b9,	// (0x0006642d) vradio_rocker_control_pane_g

0xcfd7,	// (0x00063c4b) vradio_frequency_info_pane_g1

0xcfa9,	// (0x00063c1d) vradio_frequency_info_pane_t1_ParamLimits

0xcfa9,	// (0x00063c1d) vradio_frequency_info_pane_t1

0x7ad7,	// (0x0005e74b) vradio_tuning_pane_g1

0x7ae2,	// (0x0005e756) vradio_tuning_pane_t1

0xc595,	// (0x00063209) area_side_right_pane_ParamLimits

0xc595,	// (0x00063209) area_side_right_pane

0x1a13,	// (0x00058687) status_small_pane_g1

0x1a1b,	// (0x0005868f) status_small_pane_g2

0x1a24,	// (0x00058698) status_small_pane_g3

0x1a2d,	// (0x000586a1) status_small_pane_g4

0x0003,

0xf585,	// (0x000661f9) status_small_pane_g

0x1a36,	// (0x000586aa) status_small_pane_t1

0xc5e4,	// (0x00063258) main_video3_pane

0x2481,	// (0x000590f5) cams_zoom_vslider_pane

0x2489,	// (0x000590fd) image3_wide_pane_ParamLimits

0x2489,	// (0x000590fd) image3_wide_pane

0x24a3,	// (0x00059117) image3_wide_small_pane

0x24af,	// (0x00059123) main_video3_pane_g1_ParamLimits

0x24af,	// (0x00059123) main_video3_pane_g1

0x24cb,	// (0x0005913f) main_video3_pane_g2_ParamLimits

0x24cb,	// (0x0005913f) main_video3_pane_g2

0x0001,

0xf7c4,	// (0x00066438) main_video3_pane_g_ParamLimits

0xf7c4,	// (0x00066438) main_video3_pane_g

0x24e7,	// (0x0005915b) main_video3_pane_t1_ParamLimits

0x24e7,	// (0x0005915b) main_video3_pane_t1

0x2512,	// (0x00059186) main_video3_pane_t2_ParamLimits

0x2512,	// (0x00059186) main_video3_pane_t2

0x253d,	// (0x000591b1) main_video3_pane_t3_ParamLimits

0x253d,	// (0x000591b1) main_video3_pane_t3

0x0002,

0xf7c9,	// (0x0006643d) main_video3_pane_t_ParamLimits

0xf7c9,	// (0x0006643d) main_video3_pane_t

0x256a,	// (0x000591de) cams_zoom_vslider_pane_g1

0x2573,	// (0x000591e7) cams_zoom_vslider_pane_g2

0x0001,

0xf7d0,	// (0x00066444) cams_zoom_vslider_pane_g

0x257b,	// (0x000591ef) small_slider_vertical_pane

0xcfd7,	// (0x00063c4b) small_slider_vertical_pane_g1

0xcfd7,	// (0x00063c4b) small_slider_vertical_pane_g2

0x2583,	// (0x000591f7) small_slider_vertical_pane_g3

0x0002,

0xf7d5,	// (0x00066449) small_slider_vertical_pane_g

0xc5e4,	// (0x00063258) main_hwr_training_pane

0x258c,	// (0x00059200) hwr_training_instruct_pane_ParamLimits

0x258c,	// (0x00059200) hwr_training_instruct_pane

0x7af1,	// (0x0005e765) hwr_training_navi_pane_ParamLimits

0x7af1,	// (0x0005e765) hwr_training_navi_pane

0x7b10,	// (0x0005e784) hwr_training_write_pane_ParamLimits

0x7b10,	// (0x0005e784) hwr_training_write_pane

0xc55f,	// (0x000631d3) bg_frame_shadow_pane

0x25c3,	// (0x00059237) hwr_training_write_pane_g1

0x25cb,	// (0x0005923f) hwr_training_write_pane_g2

0x25d3,	// (0x00059247) hwr_training_write_pane_g3

0x25db,	// (0x0005924f) hwr_training_write_pane_g4

0x25e3,	// (0x00059257) hwr_training_write_pane_g5

0x25eb,	// (0x0005925f) hwr_training_write_pane_g6

0x25f3,	// (0x00059267) hwr_training_write_pane_g7

0x0006,

0xf7dc,	// (0x00066450) hwr_training_write_pane_g

0xd575,	// (0x000641e9) hwr_training_navi_pane_g1_ParamLimits

0xd575,	// (0x000641e9) hwr_training_navi_pane_g1

0xd587,	// (0x000641fb) hwr_training_navi_pane_g2_ParamLimits

0xd587,	// (0x000641fb) hwr_training_navi_pane_g2

0xd599,	// (0x0006420d) hwr_training_navi_pane_g3_ParamLimits

0xd599,	// (0x0006420d) hwr_training_navi_pane_g3

0xd5a9,	// (0x0006421d) hwr_training_navi_pane_g4_ParamLimits

0xd5a9,	// (0x0006421d) hwr_training_navi_pane_g4

0x0004,

0xf7eb,	// (0x0006645f) hwr_training_navi_pane_g_ParamLimits

0xf7eb,	// (0x0006645f) hwr_training_navi_pane_g

0xd5b6,	// (0x0006422a) hwr_training_navi_pane_t1

0x7b5a,	// (0x0005e7ce) list_single_hwr_training_instruct_pane_ParamLimits

0x7b5a,	// (0x0005e7ce) list_single_hwr_training_instruct_pane

0x25fb,	// (0x0005926f) list_single_hwr_training_instruct_pane_t1

0x1dc0,	// (0x00058a34) bg_frame_shadow_pane_g1

0x260a,	// (0x0005927e) bg_frame_shadow_pane_g2

0x2612,	// (0x00059286) bg_frame_shadow_pane_g3

0x261a,	// (0x0005928e) bg_frame_shadow_pane_g4

0x2622,	// (0x00059296) bg_frame_shadow_pane_g5

0x262a,	// (0x0005929e) bg_frame_shadow_pane_g6

0x2632,	// (0x000592a6) bg_frame_shadow_pane_g7

0xce4c,	// (0x00063ac0) bg_frame_shadow_pane_g8

0x0007,

0xf7f6,	// (0x0006646a) bg_frame_shadow_pane_g

0xc5e4,	// (0x00063258) main_video_tele_dialer_pane

0x7b70,	// (0x0005e7e4) aid_size_cell_video_keypad_ParamLimits

0x7b70,	// (0x0005e7e4) aid_size_cell_video_keypad

0x7b8a,	// (0x0005e7fe) grid_video_dialer_keypad_pane_ParamLimits

0x7b8a,	// (0x0005e7fe) grid_video_dialer_keypad_pane

0x7bd8,	// (0x0005e84c) video_down_pane_cp_ParamLimits

0x7bd8,	// (0x0005e84c) video_down_pane_cp

0x7c0a,	// (0x0005e87e) cell_video_dialer_keypad_pane_ParamLimits

0x7c0a,	// (0x0005e87e) cell_video_dialer_keypad_pane

0x263a,	// (0x000592ae) bg_button_pane_cp08_ParamLimits

0x263a,	// (0x000592ae) bg_button_pane_cp08

0x7c2c,	// (0x0005e8a0) cell_video_dialer_keypad_pane_g1_ParamLimits

0x7c2c,	// (0x0005e8a0) cell_video_dialer_keypad_pane_g1

0x7528,	// (0x0005e19c) mup3_rocker2_pane_ParamLimits

0x7528,	// (0x0005e19c) mup3_rocker2_pane

0xcfd7,	// (0x00063c4b) mup3_rocker2_pane_g1

0x678e,	// (0x0005d402) main_dialer2_pane

0xc5e4,	// (0x00063258) main_mp4_pane

0xd5e2,	// (0x00064256) main_mp4_pane_g1_ParamLimits

0xd5e2,	// (0x00064256) main_mp4_pane_g1

0xd5e2,	// (0x00064256) main_mp4_pane_g2_ParamLimits

0xd5e2,	// (0x00064256) main_mp4_pane_g2

0x7c66,	// (0x0005e8da) main_mp4_pane_g3_ParamLimits

0x7c66,	// (0x0005e8da) main_mp4_pane_g3

0xd5f0,	// (0x00064264) main_mp4_pane_g4_ParamLimits

0xd5f0,	// (0x00064264) main_mp4_pane_g4

0xd61e,	// (0x00064292) main_mp4_pane_g5_ParamLimits

0xd61e,	// (0x00064292) main_mp4_pane_g5

0x0007,

0xf816,	// (0x0006648a) main_mp4_pane_g_ParamLimits

0xf816,	// (0x0006648a) main_mp4_pane_g

0xd692,	// (0x00064306) main_mp4_pane_t1_ParamLimits

0xd692,	// (0x00064306) main_mp4_pane_t1

0xd6ee,	// (0x00064362) main_mp4_pane_t2_ParamLimits

0xd6ee,	// (0x00064362) main_mp4_pane_t2

0x2646,	// (0x000592ba) main_mp4_pane_t3_ParamLimits

0x2646,	// (0x000592ba) main_mp4_pane_t3

0xd740,	// (0x000643b4) main_mp4_pane_t4_ParamLimits

0xd740,	// (0x000643b4) main_mp4_pane_t4

0x0003,

0xf827,	// (0x0006649b) main_mp4_pane_t_ParamLimits

0xf827,	// (0x0006649b) main_mp4_pane_t

0xd784,	// (0x000643f8) mp4_progress_pane_ParamLimits

0xd784,	// (0x000643f8) mp4_progress_pane

0xd7ce,	// (0x00064442) mp4_rocker_pane_ParamLimits

0xd7ce,	// (0x00064442) mp4_rocker_pane

0x2674,	// (0x000592e8) mp4_progress_pane_t1

0x268d,	// (0x00059301) mp4_progress_pane_t2

0x0001,

0xf830,	// (0x000664a4) mp4_progress_pane_t

0x26a6,	// (0x0005931a) mup_progress_pane_cp04

0x2a11,	// (0x00059685) mp4_rocker_pane_g1

0x7ca2,	// (0x0005e916) aid_cell_size_keypad2_ParamLimits

0x7ca2,	// (0x0005e916) aid_cell_size_keypad2

0x7cb8,	// (0x0005e92c) dialer2_ne_pane_ParamLimits

0x7cb8,	// (0x0005e92c) dialer2_ne_pane

0x7cd2,	// (0x0005e946) grid_dialer2_keypad_pane_ParamLimits

0x7cd2,	// (0x0005e946) grid_dialer2_keypad_pane

0x07bc,	// (0x00057430) bg_popup_call_pane_cp07_ParamLimits

0x07bc,	// (0x00057430) bg_popup_call_pane_cp07

0x7cee,	// (0x0005e962) dialer2_ne_pane_t1_ParamLimits

0x7cee,	// (0x0005e962) dialer2_ne_pane_t1

0x7d2a,	// (0x0005e99e) cell_dialer2_keypad_pane_ParamLimits

0x7d2a,	// (0x0005e99e) cell_dialer2_keypad_pane

0x26cb,	// (0x0005933f) bg_button_pane_pane_cp04_ParamLimits

0x26cb,	// (0x0005933f) bg_button_pane_pane_cp04

0x7d4c,	// (0x0005e9c0) cell_dialer2_keypad_pane_g1_ParamLimits

0x7d4c,	// (0x0005e9c0) cell_dialer2_keypad_pane_g1

0x49a0,	// (0x0005b614) aid_placing_vt_set_content_ParamLimits

0x49a0,	// (0x0005b614) aid_placing_vt_set_content

0x49c8,	// (0x0005b63c) aid_placing_vt_set_title_ParamLimits

0x49c8,	// (0x0005b63c) aid_placing_vt_set_title

0xc5e4,	// (0x00063258) main_image3_pane

0x7e12,	// (0x0005ea86) area_side_right_pane_cp01_ParamLimits

0x7e12,	// (0x0005ea86) area_side_right_pane_cp01

0xd5e2,	// (0x00064256) main_image3_pane_g1_ParamLimits

0xd5e2,	// (0x00064256) main_image3_pane_g1

0x7e29,	// (0x0005ea9d) main_image3_pane_g2_ParamLimits

0x7e29,	// (0x0005ea9d) main_image3_pane_g2

0x7e51,	// (0x0005eac5) main_image3_pane_g3_ParamLimits

0x7e51,	// (0x0005eac5) main_image3_pane_g3

0x7e7b,	// (0x0005eaef) main_image3_pane_g4_ParamLimits

0x7e7b,	// (0x0005eaef) main_image3_pane_g4

0x0003,

0xf83f,	// (0x000664b3) main_image3_pane_g_ParamLimits

0xf83f,	// (0x000664b3) main_image3_pane_g

0x7ea5,	// (0x0005eb19) main_image3_pane_t1_ParamLimits

0x7ea5,	// (0x0005eb19) main_image3_pane_t1

0x7efd,	// (0x0005eb71) main_image3_pane_t2_ParamLimits

0x7efd,	// (0x0005eb71) main_image3_pane_t2

0x7f4f,	// (0x0005ebc3) main_image3_pane_t3_ParamLimits

0x7f4f,	// (0x0005ebc3) main_image3_pane_t3

0x0003,

0xf848,	// (0x000664bc) main_image3_pane_t_ParamLimits

0xf848,	// (0x000664bc) main_image3_pane_t

0xcc7e,	// (0x000638f2) grid_sctrl_middle_pane_cp01_ParamLimits

0xcc7e,	// (0x000638f2) grid_sctrl_middle_pane_cp01

0x7fd7,	// (0x0005ec4b) cell_sctrl_middle_pane_cp01_ParamLimits

0x7fd7,	// (0x0005ec4b) cell_sctrl_middle_pane_cp01

0x7ff4,	// (0x0005ec68) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x7ff4,	// (0x0005ec68) cell_sctrl_middle_pane_cp01_g1

0xc5e4,	// (0x00063258) main_call4_pane

0x800a,	// (0x0005ec7e) aid_size_button_call4_ParamLimits

0x800a,	// (0x0005ec7e) aid_size_button_call4

0x803d,	// (0x0005ecb1) call4_windows_pane_ParamLimits

0x803d,	// (0x0005ecb1) call4_windows_pane

0x805c,	// (0x0005ecd0) grid_call4_button_pane_ParamLimits

0x805c,	// (0x0005ecd0) grid_call4_button_pane

0x808f,	// (0x0005ed03) call4_windows_conf_pane

0x80a4,	// (0x0005ed18) popup_call4_audio_first_window_ParamLimits

0x80a4,	// (0x0005ed18) popup_call4_audio_first_window

0x80f4,	// (0x0005ed68) popup_call4_audio_second_window_ParamLimits

0x80f4,	// (0x0005ed68) popup_call4_audio_second_window

0x810b,	// (0x0005ed7f) popup_call4_audio_wait_window_ParamLimits

0x810b,	// (0x0005ed7f) popup_call4_audio_wait_window

0x8119,	// (0x0005ed8d) cell_call4_button_pane_ParamLimits

0x8119,	// (0x0005ed8d) cell_call4_button_pane

0x813e,	// (0x0005edb2) bg_button_pane_cp09_ParamLimits

0x813e,	// (0x0005edb2) bg_button_pane_cp09

0x814a,	// (0x0005edbe) cell_call4_button_pane_g1_ParamLimits

0x814a,	// (0x0005edbe) cell_call4_button_pane_g1

0x8170,	// (0x0005ede4) cell_call4_button_pane_t1_ParamLimits

0x8170,	// (0x0005ede4) cell_call4_button_pane_t1

0x26df,	// (0x00059353) popup_call4_audio_conf_window_ParamLimits

0x26df,	// (0x00059353) popup_call4_audio_conf_window

0x7588,	// (0x0005e1fc) mup3_progress_pane_t1_ParamLimits

0x75a7,	// (0x0005e21b) mup3_progress_pane_t2_ParamLimits

0x2133,	// (0x00058da7) mup3_progress_pane_t3_ParamLimits

0xf71d,	// (0x00066391) mup3_progress_pane_t_ParamLimits

0x2150,	// (0x00058dc4) mup_progress_pane_cp03_ParamLimits

0x7aa7,	// (0x0005e71b) mup3_control_keys_pane_g4_copy1

0xd7b2,	// (0x00064426) mp4_rocker2_pane_ParamLimits

0xd7b2,	// (0x00064426) mp4_rocker2_pane

0x26f3,	// (0x00059367) mp4_rocker2_pane_g1

0x26fb,	// (0x0005936f) mp4_rocker2_pane_g2

0xd852,	// (0x000644c6) mp4_rocker2_pane_g3

0xd85a,	// (0x000644ce) mp4_rocker2_pane_g4

0xd862,	// (0x000644d6) mp4_rocker2_pane_g5

0x0004,

0xf851,	// (0x000664c5) mp4_rocker2_pane_g

0xc5e4,	// (0x00063258) main_camera4_pane

0xc5e4,	// (0x00063258) main_video4_pane

0x7ba6,	// (0x0005e81a) main_video_tele_dialer_pane_t1_ParamLimits

0x7ba6,	// (0x0005e81a) main_video_tele_dialer_pane_t1

0x7bbf,	// (0x0005e833) main_video_tele_dialer_pane_t2_ParamLimits

0x7bbf,	// (0x0005e833) main_video_tele_dialer_pane_t2

0x0001,

0xf807,	// (0x0006647b) main_video_tele_dialer_pane_t_ParamLimits

0xf807,	// (0x0006647b) main_video_tele_dialer_pane_t

0x81b2,	// (0x0005ee26) cam4_autofocus_pane_ParamLimits

0x81b2,	// (0x0005ee26) cam4_autofocus_pane

0x81c8,	// (0x0005ee3c) cam4_image_uncrop_pane_ParamLimits

0x81c8,	// (0x0005ee3c) cam4_image_uncrop_pane

0x81e2,	// (0x0005ee56) cam4_indicators_pane_ParamLimits

0x81e2,	// (0x0005ee56) cam4_indicators_pane

0x820d,	// (0x0005ee81) main_camera4_pane_g1_ParamLimits

0x820d,	// (0x0005ee81) main_camera4_pane_g1

0x821f,	// (0x0005ee93) main_camera4_pane_g2_ParamLimits

0x821f,	// (0x0005ee93) main_camera4_pane_g2

0x8232,	// (0x0005eea6) main_camera4_pane_g3_ParamLimits

0x8232,	// (0x0005eea6) main_camera4_pane_g3

0x8245,	// (0x0005eeb9) main_camera4_pane_g4_ParamLimits

0x8245,	// (0x0005eeb9) main_camera4_pane_g4

0x8258,	// (0x0005eecc) main_camera4_pane_g5_ParamLimits

0x8258,	// (0x0005eecc) main_camera4_pane_g5

0x0005,

0xf85c,	// (0x000664d0) main_camera4_pane_g_ParamLimits

0xf85c,	// (0x000664d0) main_camera4_pane_g

0x827c,	// (0x0005eef0) main_camera4_pane_t1_ParamLimits

0x827c,	// (0x0005eef0) main_camera4_pane_t1

0x2a1b,	// (0x0005968f) bg_tb_trans_pane_cp06

0xd88e,	// (0x00064502) cam4_indicators_pane_g1

0xd89f,	// (0x00064513) cam4_indicators_pane_g2

0x0002,

0xf877,	// (0x000664eb) cam4_indicators_pane_g

0xd8b7,	// (0x0006452b) cam4_indicators_pane_t1

0x82e0,	// (0x0005ef54) main_video4_pane_g1_ParamLimits

0x82e0,	// (0x0005ef54) main_video4_pane_g1

0x82ef,	// (0x0005ef63) main_video4_pane_g2_ParamLimits

0x82ef,	// (0x0005ef63) main_video4_pane_g2

0x82fe,	// (0x0005ef72) main_video4_pane_g3_ParamLimits

0x82fe,	// (0x0005ef72) main_video4_pane_g3

0x830d,	// (0x0005ef81) main_video4_pane_g4_ParamLimits

0x830d,	// (0x0005ef81) main_video4_pane_g4

0x0004,

0xf87e,	// (0x000664f2) main_video4_pane_g_ParamLimits

0xf87e,	// (0x000664f2) main_video4_pane_g

0x832b,	// (0x0005ef9f) vid4_indicators_pane_ParamLimits

0x832b,	// (0x0005ef9f) vid4_indicators_pane

0x8359,	// (0x0005efcd) video4_image_uncrop_cif_pane_ParamLimits

0x8359,	// (0x0005efcd) video4_image_uncrop_cif_pane

0x8373,	// (0x0005efe7) video4_image_uncrop_nhd_pane_ParamLimits

0x8373,	// (0x0005efe7) video4_image_uncrop_nhd_pane

0x81c8,	// (0x0005ee3c) video4_image_uncrop_vga_pane_ParamLimits

0x81c8,	// (0x0005ee3c) video4_image_uncrop_vga_pane

0xc5d6,	// (0x0006324a) bg_tb_trans_pane_cp07

0xd8e1,	// (0x00064555) vid4_indicators_pane_g1

0xd8f5,	// (0x00064569) vid4_indicators_pane_g2

0xd909,	// (0x0006457d) vid4_indicators_pane_g3

0x0004,

0xf889,	// (0x000664fd) vid4_indicators_pane_g

0xd936,	// (0x000645aa) vid4_indicators_pane_t1

0x8387,	// (0x0005effb) cam4_autofocus_pane_g1

0x838f,	// (0x0005f003) cam4_autofocus_pane_g2

0x8397,	// (0x0005f00b) cam4_autofocus_pane_g3

0x0002,

0xf894,	// (0x00066508) cam4_autofocus_pane_g

0x839f,	// (0x0005f013) cam4_autofocus_pane_g3_copy1

0x7bee,	// (0x0005e862) video_down_pane_cp_t1

0x7bfc,	// (0x0005e870) video_down_pane_cp_t2

0x0001,

0xf80c,	// (0x00066480) video_down_pane_cp_t

0xc5d6,	// (0x0006324a) popup_vitu2_window_ParamLimits

0xc5d6,	// (0x0006324a) popup_vitu2_window

0x83a7,	// (0x0005f01b) aid_size_cell2_itu2_ParamLimits

0x83a7,	// (0x0005f01b) aid_size_cell2_itu2

0x83cd,	// (0x0005f041) aid_size_cell_itu2_ParamLimits

0x83cd,	// (0x0005f041) aid_size_cell_itu2

0x8429,	// (0x0005f09d) bg_popup_window_pane_cp09_ParamLimits

0x8429,	// (0x0005f09d) bg_popup_window_pane_cp09

0x8437,	// (0x0005f0ab) field_vitu2_entry_pane_ParamLimits

0x8437,	// (0x0005f0ab) field_vitu2_entry_pane

0x845d,	// (0x0005f0d1) grid_vitu2_function_pane_ParamLimits

0x845d,	// (0x0005f0d1) grid_vitu2_function_pane

0x84ae,	// (0x0005f122) grid_vitu2_itu_pane_ParamLimits

0x84ae,	// (0x0005f122) grid_vitu2_itu_pane

0x8544,	// (0x0005f1b8) cell_vitu2_itu_pane_ParamLimits

0x8544,	// (0x0005f1b8) cell_vitu2_itu_pane

0x8570,	// (0x0005f1e4) cell_vitu2_function_pane_ParamLimits

0x8570,	// (0x0005f1e4) cell_vitu2_function_pane

0x2703,	// (0x00059377) bg_popup_call_pane_cp08_ParamLimits

0x2703,	// (0x00059377) bg_popup_call_pane_cp08

0x271a,	// (0x0005938e) field_vitu2_entry_pane_g1

0x2726,	// (0x0005939a) field_vitu2_entry_pane_g2

0x0002,

0xf89b,	// (0x0006650f) field_vitu2_entry_pane_g

0x85af,	// (0x0005f223) field_vitu2_entry_pane_t1_ParamLimits

0x85af,	// (0x0005f223) field_vitu2_entry_pane_t1

0x85e1,	// (0x0005f255) field_vitu2_entry_pane_t2_ParamLimits

0x85e1,	// (0x0005f255) field_vitu2_entry_pane_t2

0x0001,

0xf8a2,	// (0x00066516) field_vitu2_entry_pane_t_ParamLimits

0xf8a2,	// (0x00066516) field_vitu2_entry_pane_t

0x85fe,	// (0x0005f272) bg_button_pane_cp010_ParamLimits

0x85fe,	// (0x0005f272) bg_button_pane_cp010

0x860c,	// (0x0005f280) cell_vitu2_itu_pane_g1

0x8632,	// (0x0005f2a6) cell_vitu2_itu_pane_t1_ParamLimits

0x8632,	// (0x0005f2a6) cell_vitu2_itu_pane_t1

0x3ae6,	// (0x0005a75a) cell_vitu2_itu_pane_t2_ParamLimits

0x3ae6,	// (0x0005a75a) cell_vitu2_itu_pane_t2

0x0002,

0xf8ac,	// (0x00066520) cell_vitu2_itu_pane_t_ParamLimits

0xf8ac,	// (0x00066520) cell_vitu2_itu_pane_t

0xc5d6,	// (0x0006324a) bg_button_pane_cp011

0x8690,	// (0x0005f304) cell_vitu2_function_pane_g1

0xc5e4,	// (0x00063258) main_myfav_hc_pane

0x7f9f,	// (0x0005ec13) popup_image3_note_pane_ParamLimits

0x7f9f,	// (0x0005ec13) popup_image3_note_pane

0x7fbb,	// (0x0005ec2f) popup_image3_tool_bar_pane_ParamLimits

0x7fbb,	// (0x0005ec2f) popup_image3_tool_bar_pane

0x3b74,	// (0x0005a7e8) cell_vitu2_itu_pane_t3_ParamLimits

0x3b74,	// (0x0005a7e8) cell_vitu2_itu_pane_t3

0xc55f,	// (0x000631d3) bg_popup_trans_pane

0x2748,	// (0x000593bc) grid_image3_tool_bar_pane

0x2752,	// (0x000593c6) bg_popup_trans_pane_g1

0xd1e8,	// (0x00063e5c) bg_popup_trans_pane_g2

0x275a,	// (0x000593ce) bg_popup_trans_pane_g3

0x2762,	// (0x000593d6) bg_popup_trans_pane_g4

0x276a,	// (0x000593de) bg_popup_trans_pane_g5

0x2772,	// (0x000593e6) bg_popup_trans_pane_g6

0x277a,	// (0x000593ee) bg_popup_trans_pane_g7

0x2782,	// (0x000593f6) bg_popup_trans_pane_g8

0xd1c8,	// (0x00063e3c) bg_popup_trans_pane_g9

0x0008,

0xf8b3,	// (0x00066527) bg_popup_trans_pane_g

0x278a,	// (0x000593fe) cell_image3_tool_bar_pane_ParamLimits

0x278a,	// (0x000593fe) cell_image3_tool_bar_pane

0xcfd7,	// (0x00063c4b) cell_image3_tool_bar_pane_g1

0xc55f,	// (0x000631d3) bg_popup_trans_pane_cp1

0x279e,	// (0x00059412) popup_image3_note_pane_t1

0x27ac,	// (0x00059420) popup_image3_note_pane_t2

0x27ba,	// (0x0005942e) popup_image3_note_pane_t3

0x0002,

0xf8c6,	// (0x0006653a) popup_image3_note_pane_t

0x27c8,	// (0x0005943c) popup_image3_note_pane_t3_copy1

0x86a3,	// (0x0005f317) bg_myfav_hc_instruction_pane_ParamLimits

0x86a3,	// (0x0005f317) bg_myfav_hc_instruction_pane

0x86b7,	// (0x0005f32b) cell_myfav_contact_pane_ParamLimits

0x86b7,	// (0x0005f32b) cell_myfav_contact_pane

0x86d5,	// (0x0005f349) cell_myfav_contact_pane_cp1_ParamLimits

0x86d5,	// (0x0005f349) cell_myfav_contact_pane_cp1

0x86ed,	// (0x0005f361) cell_myfav_contact_pane_cp2_ParamLimits

0x86ed,	// (0x0005f361) cell_myfav_contact_pane_cp2

0x8705,	// (0x0005f379) cell_myfav_contact_pane_cp3_ParamLimits

0x8705,	// (0x0005f379) cell_myfav_contact_pane_cp3

0x871c,	// (0x0005f390) cell_myfav_contact_pane_cp4_ParamLimits

0x871c,	// (0x0005f390) cell_myfav_contact_pane_cp4

0x8734,	// (0x0005f3a8) cell_myfav_contact_pane_cp5_ParamLimits

0x8734,	// (0x0005f3a8) cell_myfav_contact_pane_cp5

0x8748,	// (0x0005f3bc) cell_myfav_contact_pane_cp6_ParamLimits

0x8748,	// (0x0005f3bc) cell_myfav_contact_pane_cp6

0x875e,	// (0x0005f3d2) cell_myfav_contact_pane_cp7_ParamLimits

0x875e,	// (0x0005f3d2) cell_myfav_contact_pane_cp7

0x27d6,	// (0x0005944a) listscroll_gen_pane_cp05

0x8778,	// (0x0005f3ec) main_myfav_hc_pane_g1_ParamLimits

0x8778,	// (0x0005f3ec) main_myfav_hc_pane_g1

0x8792,	// (0x0005f406) main_myfav_hc_pane_g2_ParamLimits

0x8792,	// (0x0005f406) main_myfav_hc_pane_g2

0x0002,

0xf8cd,	// (0x00066541) main_myfav_hc_pane_g_ParamLimits

0xf8cd,	// (0x00066541) main_myfav_hc_pane_g

0x87c4,	// (0x0005f438) main_myfav_hc_pane_t1_ParamLimits

0x87c4,	// (0x0005f438) main_myfav_hc_pane_t1

0x27df,	// (0x00059453) main_myfav_hc_pane_t2_ParamLimits

0x27df,	// (0x00059453) main_myfav_hc_pane_t2

0x27f1,	// (0x00059465) main_myfav_hc_pane_t3_ParamLimits

0x27f1,	// (0x00059465) main_myfav_hc_pane_t3

0x87db,	// (0x0005f44f) main_myfav_hc_pane_t4_ParamLimits

0x87db,	// (0x0005f44f) main_myfav_hc_pane_t4

0x0004,

0xf8d4,	// (0x00066548) main_myfav_hc_pane_t_ParamLimits

0xf8d4,	// (0x00066548) main_myfav_hc_pane_t

0xcfd7,	// (0x00063c4b) bg_myfav_hc_instruction_pane_g1

0x2803,	// (0x00059477) cell_myfav_contact_pane_g1_ParamLimits

0x2803,	// (0x00059477) cell_myfav_contact_pane_g1

0x2803,	// (0x00059477) cell_myfav_contact_pane_g2_ParamLimits

0x2803,	// (0x00059477) cell_myfav_contact_pane_g2

0x280f,	// (0x00059483) cell_myfav_contact_pane_g3_ParamLimits

0x280f,	// (0x00059483) cell_myfav_contact_pane_g3

0xccf3,	// (0x00063967) cell_myfav_contact_pane_g4_ParamLimits

0xccf3,	// (0x00063967) cell_myfav_contact_pane_g4

0x281c,	// (0x00059490) cell_myfav_contact_pane_g5_ParamLimits

0x281c,	// (0x00059490) cell_myfav_contact_pane_g5

0x0004,

0xf8df,	// (0x00066553) cell_myfav_contact_pane_g_ParamLimits

0xf8df,	// (0x00066553) cell_myfav_contact_pane_g

0x87ac,	// (0x0005f420) main_myfav_hc_pane_g3_ParamLimits

0x87ac,	// (0x0005f420) main_myfav_hc_pane_g3

0x3d49,	// (0x0005a9bd) popup_adpt_find_window

0x8803,	// (0x0005f477) afind_page_pane_ParamLimits

0x8803,	// (0x0005f477) afind_page_pane

0x8818,	// (0x0005f48c) aid_size_cell_afind_ParamLimits

0x8818,	// (0x0005f48c) aid_size_cell_afind

0x8836,	// (0x0005f4aa) bg_popup_sub_pane_cp09_ParamLimits

0x8836,	// (0x0005f4aa) bg_popup_sub_pane_cp09

0x8843,	// (0x0005f4b7) find_pane_cp01_ParamLimits

0x8843,	// (0x0005f4b7) find_pane_cp01

0x2828,	// (0x0005949c) grid_afind_control_pane_ParamLimits

0x2828,	// (0x0005949c) grid_afind_control_pane

0x8850,	// (0x0005f4c4) grid_afind_pane_ParamLimits

0x8850,	// (0x0005f4c4) grid_afind_pane

0x886f,	// (0x0005f4e3) cell_afind_pane_ParamLimits

0x886f,	// (0x0005f4e3) cell_afind_pane

0xcfd7,	// (0x00063c4b) afind_page_pane_g1

0x88d6,	// (0x0005f54a) afind_page_pane_g2

0x88df,	// (0x0005f553) afind_page_pane_g3

0x0002,

0xf8ea,	// (0x0006655e) afind_page_pane_g

0x88e8,	// (0x0005f55c) afind_page_pane_t1

0x283c,	// (0x000594b0) cell_afind_grid_control_pane_ParamLimits

0x283c,	// (0x000594b0) cell_afind_grid_control_pane

0x26cb,	// (0x0005933f) bg_button_pane_cp69_ParamLimits

0x26cb,	// (0x0005933f) bg_button_pane_cp69

0x8908,	// (0x0005f57c) cell_afind_pane_g1_ParamLimits

0x8908,	// (0x0005f57c) cell_afind_pane_g1

0x8915,	// (0x0005f589) cell_afind_pane_t1_ParamLimits

0x8915,	// (0x0005f589) cell_afind_pane_t1

0xcfe1,	// (0x00063c55) bg_button_pane_cp72

0x284b,	// (0x000594bf) cell_afind_grid_control_pane_g1

0x61fa,	// (0x0005ce6e) aid_image_placing_area_ParamLimits

0x61fa,	// (0x0005ce6e) aid_image_placing_area

0xcce5,	// (0x00063959) field_vitu_entry_pane_g1_ParamLimits

0xcce5,	// (0x00063959) field_vitu_entry_pane_g1

0xcce5,	// (0x00063959) field_vitu_entry_pane_g2_ParamLimits

0xcce5,	// (0x00063959) field_vitu_entry_pane_g2

0x0001,

0xf1e7,	// (0x00065e5b) field_vitu_entry_pane_g_ParamLimits

0xf1e7,	// (0x00065e5b) field_vitu_entry_pane_g

0x2449,	// (0x000590bd) cell_vitu_itu_pane_g1_ParamLimits

0x220a,	// (0x00058e7e) cell_vitu_itu_pane_t3_ParamLimits

0x220a,	// (0x00058e7e) cell_vitu_itu_pane_t3

0x2674,	// (0x000592e8) mp4_progress_pane_t1_ParamLimits

0x268d,	// (0x00059301) mp4_progress_pane_t2_ParamLimits

0xf830,	// (0x000664a4) mp4_progress_pane_t_ParamLimits

0x26a6,	// (0x0005931a) mup_progress_pane_cp04_ParamLimits

0x87ef,	// (0x0005f463) main_myfav_hc_pane_t5_ParamLimits

0x87ef,	// (0x0005f463) main_myfav_hc_pane_t5

0xc585,	// (0x000631f9) aid_zoom_text_primary

0x3d49,	// (0x0005a9bd) popup_adpt_find_window_ParamLimits

0xc5d6,	// (0x0006324a) main_cam_set_pane

0x81f9,	// (0x0005ee6d) cam4_zoom_pane_ParamLimits

0x81f9,	// (0x0005ee6d) cam4_zoom_pane

0x8927,	// (0x0005f59b) main_cam_set_pane_g1_ParamLimits

0x8927,	// (0x0005f59b) main_cam_set_pane_g1

0x8935,	// (0x0005f5a9) main_cam_set_pane_g2_ParamLimits

0x8935,	// (0x0005f5a9) main_cam_set_pane_g2

0x0001,

0xf8f1,	// (0x00066565) main_cam_set_pane_g_ParamLimits

0xf8f1,	// (0x00066565) main_cam_set_pane_g

0x8956,	// (0x0005f5ca) main_cam_set_pane_t1_ParamLimits

0x8956,	// (0x0005f5ca) main_cam_set_pane_t1

0x8971,	// (0x0005f5e5) main_cset_listscroll_pane_ParamLimits

0x8971,	// (0x0005f5e5) main_cset_listscroll_pane

0x8997,	// (0x0005f60b) main_cset_slider_pane_ParamLimits

0x8997,	// (0x0005f60b) main_cset_slider_pane

0x285c,	// (0x000594d0) main_cset_list_pane_ParamLimits

0x285c,	// (0x000594d0) main_cset_list_pane

0x286c,	// (0x000594e0) scroll_pane_cp028

0x89bd,	// (0x0005f631) aid_area_touch_slider

0x89d9,	// (0x0005f64d) cset_slider_pane

0x89fc,	// (0x0005f670) main_cset_slider_pane_g1

0x8a11,	// (0x0005f685) main_cset_slider_pane_g2

0x0011,

0xf8f6,	// (0x0006656a) main_cset_slider_pane_g

0x28a5,	// (0x00059519) main_cset_slider_pane_t1

0x8ab5,	// (0x0005f729) main_cset_slider_pane_t2

0x8acf,	// (0x0005f743) main_cset_slider_pane_t3

0x8ae9,	// (0x0005f75d) main_cset_slider_pane_t4

0x8b03,	// (0x0005f777) main_cset_slider_pane_t5

0x8b1d,	// (0x0005f791) main_cset_slider_pane_t6

0x8b32,	// (0x0005f7a6) main_cset_slider_pane_t7

0x000e,

0xf91b,	// (0x0006658f) main_cset_slider_pane_t

0x8c36,	// (0x0005f8aa) cset_list_set_pane_ParamLimits

0x8c36,	// (0x0005f8aa) cset_list_set_pane

0x293f,	// (0x000595b3) aid_position_infowindow_above

0x2947,	// (0x000595bb) aid_position_infowindow_below

0x8c48,	// (0x0005f8bc) cset_list_set_pane_g1_ParamLimits

0x8c48,	// (0x0005f8bc) cset_list_set_pane_g1

0x8c54,	// (0x0005f8c8) cset_list_set_pane_g3_ParamLimits

0x8c54,	// (0x0005f8c8) cset_list_set_pane_g3

0x0001,

0xf93a,	// (0x000665ae) cset_list_set_pane_g_ParamLimits

0xf93a,	// (0x000665ae) cset_list_set_pane_g

0x8c63,	// (0x0005f8d7) cset_list_set_pane_t1_ParamLimits

0x8c63,	// (0x0005f8d7) cset_list_set_pane_t1

0xcc7e,	// (0x000638f2) list_highlight_pane_cp021_ParamLimits

0xcc7e,	// (0x000638f2) list_highlight_pane_cp021

0x082c,	// (0x000574a0) cset_slider_pane_g1

0x083e,	// (0x000574b2) cset_slider_pane_g2

0x0835,	// (0x000574a9) cset_slider_pane_g3

0x0002,

0xf93f,	// (0x000665b3) cset_slider_pane_g

0xd94d,	// (0x000645c1) aid_area_touch_cam4_zoom

0xd955,	// (0x000645c9) cam4_zoom_cont_pane

0xd95d,	// (0x000645d1) cam4_zoom_pane_g1

0xd965,	// (0x000645d9) cam4_zoom_pane_g2

0x8c78,	// (0x0005f8ec) cam4_zoom_pane_g3

0x0002,

0xf946,	// (0x000665ba) cam4_zoom_pane_g

0xd96d,	// (0x000645e1) cam4_zoom_cont_pane_g1

0xd976,	// (0x000645ea) cam4_zoom_cont_pane_g2

0xd97f,	// (0x000645f3) cam4_zoom_cont_pane_g3

0x0002,

0xf94d,	// (0x000665c1) cam4_zoom_cont_pane_g

0x8028,	// (0x0005ec9c) call4_image_pane_ParamLimits

0x8028,	// (0x0005ec9c) call4_image_pane

0x808f,	// (0x0005ed03) call4_windows_conf_pane_ParamLimits

0x80d2,	// (0x0005ed46) popup_call4_audio_in_window_ParamLimits

0x80d2,	// (0x0005ed46) popup_call4_audio_in_window

0xc55f,	// (0x000631d3) bg_popup_call2_act_pane_cp02

0x26d7,	// (0x0005934b) call4_list_conf_pane

0xcfd7,	// (0x00063c4b) call4_image_pane_g1

0xcfd7,	// (0x00063c4b) call4_image_pane_g2

0x0001,

0xf3be,	// (0x00066032) call4_image_pane_g

0x294f,	// (0x000595c3) list_single_graphic_popup_conf4_pane_ParamLimits

0x294f,	// (0x000595c3) list_single_graphic_popup_conf4_pane

0xc55f,	// (0x000631d3) list_highlight_pane_cp022

0x2962,	// (0x000595d6) list_single_graphic_popup_conf4_pane_g1

0x043d,	// (0x000570b1) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf954,	// (0x000665c8) list_single_graphic_popup_conf4_pane_g

0x296a,	// (0x000595de) list_single_graphic_popup_conf4_pane_t1

0x4aec,	// (0x0005b760) popup_vtel_slider_window_ParamLimits

0x4aec,	// (0x0005b760) popup_vtel_slider_window

0x26b9,	// (0x0005932d) dialer2_ne_pane_t2_ParamLimits

0x26b9,	// (0x0005932d) dialer2_ne_pane_t2

0x0001,

0xf835,	// (0x000664a9) dialer2_ne_pane_t_ParamLimits

0xf835,	// (0x000664a9) dialer2_ne_pane_t

0x07bc,	// (0x00057430) bg_popup_sub_pane_cp010_ParamLimits

0x07bc,	// (0x00057430) bg_popup_sub_pane_cp010

0x8c80,	// (0x0005f8f4) popup_vtel_slider_window_g1_ParamLimits

0x8c80,	// (0x0005f8f4) popup_vtel_slider_window_g1

0x8c93,	// (0x0005f907) popup_vtel_slider_window_g2_ParamLimits

0x8c93,	// (0x0005f907) popup_vtel_slider_window_g2

0x0003,

0xf959,	// (0x000665cd) popup_vtel_slider_window_g_ParamLimits

0xf959,	// (0x000665cd) popup_vtel_slider_window_g

0x8ce9,	// (0x0005f95d) vtel_slider_pane_ParamLimits

0x8ce9,	// (0x0005f95d) vtel_slider_pane

0x8d0b,	// (0x0005f97f) vtel_slider_pane_g1_ParamLimits

0x8d0b,	// (0x0005f97f) vtel_slider_pane_g1

0x8d1f,	// (0x0005f993) vtel_slider_pane_g2_ParamLimits

0x8d1f,	// (0x0005f993) vtel_slider_pane_g2

0x8d37,	// (0x0005f9ab) vtel_slider_pane_g3_ParamLimits

0x8d37,	// (0x0005f9ab) vtel_slider_pane_g3

0x8d0b,	// (0x0005f97f) vtel_slider_pane_g4_ParamLimits

0x8d0b,	// (0x0005f97f) vtel_slider_pane_g4

0x8d4d,	// (0x0005f9c1) vtel_slider_pane_g5_ParamLimits

0x8d4d,	// (0x0005f9c1) vtel_slider_pane_g5

0x0004,

0xf962,	// (0x000665d6) vtel_slider_pane_g_ParamLimits

0xf962,	// (0x000665d6) vtel_slider_pane_g

0xc5d6,	// (0x0006324a) main_gallery2_pane

0x83f9,	// (0x0005f06d) aid_size_row_itut2_dropdow_list_ParamLimits

0x83f9,	// (0x0005f06d) aid_size_row_itut2_dropdow_list

0x8485,	// (0x0005f0f9) grid_vitu2_function_top_pane_ParamLimits

0x8485,	// (0x0005f0f9) grid_vitu2_function_top_pane

0x84ef,	// (0x0005f163) popup_vitu2_dropdown_list_window_ParamLimits

0x84ef,	// (0x0005f163) popup_vitu2_dropdown_list_window

0x8516,	// (0x0005f18a) popup_vitu2_match_list_window

0x8d63,	// (0x0005f9d7) cell_vitu2_function_top_pane_ParamLimits

0x8d63,	// (0x0005f9d7) cell_vitu2_function_top_pane

0x8d7b,	// (0x0005f9ef) cell_vitu2_function_top_pane_cp01_ParamLimits

0x8d7b,	// (0x0005f9ef) cell_vitu2_function_top_pane_cp01

0x8d97,	// (0x0005fa0b) cell_vitu2_function_top_wide_pane_ParamLimits

0x8d97,	// (0x0005fa0b) cell_vitu2_function_top_wide_pane

0xc5d6,	// (0x0006324a) bg_button_pane_cp012

0x8db5,	// (0x0005fa29) cell_vitu2_function_top_pane_g1

0xd988,	// (0x000645fc) bg_button_pane_cp013_ParamLimits

0xd988,	// (0x000645fc) bg_button_pane_cp013

0x8dc9,	// (0x0005fa3d) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x8dc9,	// (0x0005fa3d) cell_vitu2_function_top_wide_pane_g1

0xc5d6,	// (0x0006324a) bg_popup_sub_pane_cp20

0x8de1,	// (0x0005fa55) list_vitu2_match_list_pane

0x2752,	// (0x000593c6) bg_popup_sub_pane_cp20_g1

0x275a,	// (0x000593ce) bg_popup_sub_pane_cp20_g2

0xd1e8,	// (0x00063e5c) bg_popup_sub_pane_cp20_g3

0x2762,	// (0x000593d6) bg_popup_sub_pane_cp20_g4

0xd1c8,	// (0x00063e3c) bg_popup_sub_pane_cp20_g5

0x2980,	// (0x000595f4) bg_popup_sub_pane_cp20_g6

0x2772,	// (0x000593e6) bg_popup_sub_pane_cp20_g7

0x277a,	// (0x000593ee) bg_popup_sub_pane_cp20_g8

0x2782,	// (0x000593f6) bg_popup_sub_pane_cp20_g9

0x0008,

0xf96d,	// (0x000665e1) bg_popup_sub_pane_cp20_g

0xd9a4,	// (0x00064618) list_vitu2_match_list_item_pane_ParamLimits

0xd9a4,	// (0x00064618) list_vitu2_match_list_item_pane

0xd9b6,	// (0x0006462a) list_vitu2_match_list_item_pane_t1

0xc5e4,	// (0x00063258) bg_popup_sub_pane_cp21

0xcf97,	// (0x00063c0b) grid_vitu2_dropdown_list_pane

0x8df9,	// (0x0005fa6d) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x8df9,	// (0x0005fa6d) cell_vitu2_dropdown_list_char_pane

0x8e19,	// (0x0005fa8d) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x8e19,	// (0x0005fa8d) cell_vitu2_dropdown_list_ctrl_pane

0x2988,	// (0x000595fc) cell_vitu2_dropdown_list_char_pane_g1

0x2991,	// (0x00059605) cell_vitu2_dropdown_list_char_pane_g2

0x299a,	// (0x0005960e) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xf980,	// (0x000665f4) cell_vitu2_dropdown_list_char_pane_g

0x8e41,	// (0x0005fab5) cell_vitu2_dropdown_list_char_pane_t1

0x8e4f,	// (0x0005fac3) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x8e4f,	// (0x0005fac3) cell_vitu2_dropdown_list_ctrl_pane_g1

0x8e5c,	// (0x0005fad0) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x8e5c,	// (0x0005fad0) cell_vitu2_dropdown_list_ctrl_pane_g2

0x8e69,	// (0x0005fadd) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x8e69,	// (0x0005fadd) cell_vitu2_dropdown_list_ctrl_pane_g3

0x8e76,	// (0x0005faea) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x8e76,	// (0x0005faea) cell_vitu2_dropdown_list_ctrl_pane_g4

0x2a1b,	// (0x0005968f) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0x2a1b,	// (0x0005968f) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xf987,	// (0x000665fb) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xf987,	// (0x000665fb) cell_vitu2_dropdown_list_ctrl_pane_g

0x8e92,	// (0x0005fb06) aid_size_cell_gallery2_ParamLimits

0x8e92,	// (0x0005fb06) aid_size_cell_gallery2

0x8eb0,	// (0x0005fb24) grid_gallery2_pane_ParamLimits

0x8eb0,	// (0x0005fb24) grid_gallery2_pane

0x8eca,	// (0x0005fb3e) scroll_pane_cp029_ParamLimits

0x8eca,	// (0x0005fb3e) scroll_pane_cp029

0x8edb,	// (0x0005fb4f) cell_gallery2_pane_ParamLimits

0x8edb,	// (0x0005fb4f) cell_gallery2_pane

0x2a29,	// (0x0005969d) cell_gallery2_pane_g2

0x8f3a,	// (0x0005fbae) cell_gallery2_pane_g3

0x2a31,	// (0x000596a5) cell_gallery2_pane_g4

0x2a39,	// (0x000596ad) cell_gallery2_pane_g5

0xcf97,	// (0x00063c0b) grid_highlight_pane_cp10

0x8516,	// (0x0005f18a) popup_vitu2_match_list_window_ParamLimits

0x852b,	// (0x0005f19f) popup_vitu2_query_window_ParamLimits

0x852b,	// (0x0005f19f) popup_vitu2_query_window

0xc5e4,	// (0x00063258) bg_vitu2_candi_button_pane

0x2988,	// (0x000595fc) cell_vitu2_dropdown_list_char_pane_g1_copy1

0x2991,	// (0x00059605) cell_vitu2_dropdown_list_char_pane_g2_copy1

0x299a,	// (0x0005960e) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x8f42,	// (0x0005fbb6) bg_button_pane_cp015

0x8f53,	// (0x0005fbc7) bg_button_pane_cp016

0x8f5f,	// (0x0005fbd3) bg_button_pane_cp017

0x1a58,	// (0x000586cc) bg_popup_sub_pane_cp22

0x2a41,	// (0x000596b5) popup_vitu2_query_window_g1

0x8f9d,	// (0x0005fc11) popup_vitu2_query_window_g2

0x0002,

0xf992,	// (0x00066606) popup_vitu2_query_window_g

0x8fbf,	// (0x0005fc33) popup_vitu2_query_window_t1_ParamLimits

0x8fbf,	// (0x0005fc33) popup_vitu2_query_window_t1

0x8ff2,	// (0x0005fc66) popup_vitu2_query_window_t2_ParamLimits

0x8ff2,	// (0x0005fc66) popup_vitu2_query_window_t2

0x9004,	// (0x0005fc78) popup_vitu2_query_window_t3_ParamLimits

0x9004,	// (0x0005fc78) popup_vitu2_query_window_t3

0x902c,	// (0x0005fca0) popup_vitu2_query_window_t4_ParamLimits

0x902c,	// (0x0005fca0) popup_vitu2_query_window_t4

0x9040,	// (0x0005fcb4) popup_vitu2_query_window_t5_ParamLimits

0x9040,	// (0x0005fcb4) popup_vitu2_query_window_t5

0x0006,

0xf999,	// (0x0006660d) popup_vitu2_query_window_t_ParamLimits

0xf999,	// (0x0006660d) popup_vitu2_query_window_t

0x2854,	// (0x000594c8) main_cset_text_pane

0x89bd,	// (0x0005f631) aid_area_touch_slider_ParamLimits

0x89d9,	// (0x0005f64d) cset_slider_pane_ParamLimits

0x89fc,	// (0x0005f670) main_cset_slider_pane_g1_ParamLimits

0x8a11,	// (0x0005f685) main_cset_slider_pane_g2_ParamLimits

0x2875,	// (0x000594e9) main_cset_slider_pane_g3_ParamLimits

0x2875,	// (0x000594e9) main_cset_slider_pane_g3

0x8a26,	// (0x0005f69a) main_cset_slider_pane_g4_ParamLimits

0x8a26,	// (0x0005f69a) main_cset_slider_pane_g4

0x8a35,	// (0x0005f6a9) main_cset_slider_pane_g5_ParamLimits

0x8a35,	// (0x0005f6a9) main_cset_slider_pane_g5

0x8a41,	// (0x0005f6b5) main_cset_slider_pane_g6_ParamLimits

0x8a41,	// (0x0005f6b5) main_cset_slider_pane_g6

0xf8f6,	// (0x0006656a) main_cset_slider_pane_g_ParamLimits

0x28a5,	// (0x00059519) main_cset_slider_pane_t1_ParamLimits

0x8ab5,	// (0x0005f729) main_cset_slider_pane_t2_ParamLimits

0x8acf,	// (0x0005f743) main_cset_slider_pane_t3_ParamLimits

0x8ae9,	// (0x0005f75d) main_cset_slider_pane_t4_ParamLimits

0x8b03,	// (0x0005f777) main_cset_slider_pane_t5_ParamLimits

0x8b1d,	// (0x0005f791) main_cset_slider_pane_t6_ParamLimits

0x8b32,	// (0x0005f7a6) main_cset_slider_pane_t7_ParamLimits

0x8b5c,	// (0x0005f7d0) main_cset_slider_pane_t8_ParamLimits

0x8b5c,	// (0x0005f7d0) main_cset_slider_pane_t8

0x8b84,	// (0x0005f7f8) main_cset_slider_pane_t9_ParamLimits

0x8b84,	// (0x0005f7f8) main_cset_slider_pane_t9

0x8bac,	// (0x0005f820) main_cset_slider_pane_t10_ParamLimits

0x8bac,	// (0x0005f820) main_cset_slider_pane_t10

0x8bd4,	// (0x0005f848) main_cset_slider_pane_t11_ParamLimits

0x8bd4,	// (0x0005f848) main_cset_slider_pane_t11

0x8bfc,	// (0x0005f870) main_cset_slider_pane_t12_ParamLimits

0x8bfc,	// (0x0005f870) main_cset_slider_pane_t12

0x8c19,	// (0x0005f88d) main_cset_slider_pane_t13_ParamLimits

0x8c19,	// (0x0005f88d) main_cset_slider_pane_t13

0xf91b,	// (0x0006658f) main_cset_slider_pane_t_ParamLimits

0xc55f,	// (0x000631d3) bg_popup_sub_pane_cp011

0x2a4d,	// (0x000596c1) main_cset_text_pane_g1

0x2a55,	// (0x000596c9) main_cset_text_pane_t1

0x2a63,	// (0x000596d7) main_cset_text_pane_t2

0x2a71,	// (0x000596e5) main_cset_text_pane_t3

0x2a7f,	// (0x000596f3) main_cset_text_pane_t4

0x2a8d,	// (0x00059701) main_cset_text_pane_t5

0x2a9b,	// (0x0005970f) main_cset_text_pane_t6

0x2aa9,	// (0x0005971d) main_cset_text_pane_t7

0x0006,

0xf9a8,	// (0x0006661c) main_cset_text_pane_t

0xc5e4,	// (0x00063258) main_cam4_burst_pane

0xc5e4,	// (0x00063258) main_cam5_pane

0x88f6,	// (0x0005f56a) bg_button_pane_cp019

0x88ff,	// (0x0005f573) bg_button_pane_cp020

0x2881,	// (0x000594f5) main_cset_slider_pane_g7_ParamLimits

0x2881,	// (0x000594f5) main_cset_slider_pane_g7

0x288d,	// (0x00059501) main_cset_slider_pane_g8_ParamLimits

0x288d,	// (0x00059501) main_cset_slider_pane_g8

0x8a55,	// (0x0005f6c9) main_cset_slider_pane_g9_ParamLimits

0x8a55,	// (0x0005f6c9) main_cset_slider_pane_g9

0x8a61,	// (0x0005f6d5) main_cset_slider_pane_g10_ParamLimits

0x8a61,	// (0x0005f6d5) main_cset_slider_pane_g10

0x8a6d,	// (0x0005f6e1) main_cset_slider_pane_g11_ParamLimits

0x8a6d,	// (0x0005f6e1) main_cset_slider_pane_g11

0x8a79,	// (0x0005f6ed) main_cset_slider_pane_g12_ParamLimits

0x8a79,	// (0x0005f6ed) main_cset_slider_pane_g12

0x8a85,	// (0x0005f6f9) main_cset_slider_pane_g13_ParamLimits

0x8a85,	// (0x0005f6f9) main_cset_slider_pane_g13

0x8a91,	// (0x0005f705) main_cset_slider_pane_g14_ParamLimits

0x8a91,	// (0x0005f705) main_cset_slider_pane_g14

0x8a9d,	// (0x0005f711) main_cset_slider_pane_g15_ParamLimits

0x8a9d,	// (0x0005f711) main_cset_slider_pane_g15

0x28cd,	// (0x00059541) main_cset_slider_pane_t14_ParamLimits

0x28cd,	// (0x00059541) main_cset_slider_pane_t14

0x2906,	// (0x0005957a) main_cset_slider_pane_t15_ParamLimits

0x2906,	// (0x0005957a) main_cset_slider_pane_t15

0x90aa,	// (0x0005fd1e) aid_cam4_burst_size_cell_ParamLimits

0x90aa,	// (0x0005fd1e) aid_cam4_burst_size_cell

0x90ca,	// (0x0005fd3e) grid_cam4_burst_pane_ParamLimits

0x90ca,	// (0x0005fd3e) grid_cam4_burst_pane

0x9102,	// (0x0005fd76) linegrid_cam4_burst_pane_ParamLimits

0x9102,	// (0x0005fd76) linegrid_cam4_burst_pane

0x2c7e,	// (0x000598f2) scroll_pane_cp30_ParamLimits

0x2c7e,	// (0x000598f2) scroll_pane_cp30

0x9126,	// (0x0005fd9a) cell_cam4_burst_pane_ParamLimits

0x9126,	// (0x0005fd9a) cell_cam4_burst_pane

0x2ab7,	// (0x0005972b) linegrid_cam4_burst_pane_g1_ParamLimits

0x2ab7,	// (0x0005972b) linegrid_cam4_burst_pane_g1

0x9173,	// (0x0005fde7) linegrid_cam4_burst_pane_g2_ParamLimits

0x9173,	// (0x0005fde7) linegrid_cam4_burst_pane_g2

0x2ac4,	// (0x00059738) linegrid_cam4_burst_pane_g3_ParamLimits

0x2ac4,	// (0x00059738) linegrid_cam4_burst_pane_g3

0x0002,

0xf9b7,	// (0x0006662b) linegrid_cam4_burst_pane_g_ParamLimits

0xf9b7,	// (0x0006662b) linegrid_cam4_burst_pane_g

0x9184,	// (0x0005fdf8) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x9184,	// (0x0005fdf8) linegrid_cam4_burst_pane_g3_copy1

0x2ad1,	// (0x00059745) linegrid_cam4_burst_pane_g4_ParamLimits

0x2ad1,	// (0x00059745) linegrid_cam4_burst_pane_g4

0x919e,	// (0x0005fe12) linegrid_cam4_burst_pane_g5_ParamLimits

0x919e,	// (0x0005fe12) linegrid_cam4_burst_pane_g5

0x91af,	// (0x0005fe23) linegrid_cam4_burst_pane_g6_ParamLimits

0x91af,	// (0x0005fe23) linegrid_cam4_burst_pane_g6

0x2ade,	// (0x00059752) linegrid_cam4_burst_pane_g7_ParamLimits

0x2ade,	// (0x00059752) linegrid_cam4_burst_pane_g7

0x91c6,	// (0x0005fe3a) cell_cam4_burst_pane_g1

0x2af7,	// (0x0005976b) main_cam5_pane_t1_ParamLimits

0x2af7,	// (0x0005976b) main_cam5_pane_t1

0x2b09,	// (0x0005977d) main_cam5_pane_t2_ParamLimits

0x2b09,	// (0x0005977d) main_cam5_pane_t2

0x2b1b,	// (0x0005978f) main_cam5_pane_t3_ParamLimits

0x2b1b,	// (0x0005978f) main_cam5_pane_t3

0x2b2d,	// (0x000597a1) main_cam5_pane_t4_ParamLimits

0x2b2d,	// (0x000597a1) main_cam5_pane_t4

0x2b45,	// (0x000597b9) main_cam5_pane_t5_ParamLimits

0x2b45,	// (0x000597b9) main_cam5_pane_t5

0x2b59,	// (0x000597cd) main_cam5_pane_t6_ParamLimits

0x2b59,	// (0x000597cd) main_cam5_pane_t6

0x2b6d,	// (0x000597e1) main_cam5_pane_t7_ParamLimits

0x2b6d,	// (0x000597e1) main_cam5_pane_t7

0x2b7f,	// (0x000597f3) main_cam5_pane_t8_ParamLimits

0x2b7f,	// (0x000597f3) main_cam5_pane_t8

0x2b9b,	// (0x0005980f) main_cam5_pane_t9_ParamLimits

0x2b9b,	// (0x0005980f) main_cam5_pane_t9

0x2bad,	// (0x00059821) main_cam5_pane_t10_ParamLimits

0x2bad,	// (0x00059821) main_cam5_pane_t10

0x2bbf,	// (0x00059833) main_cam5_pane_t11_ParamLimits

0x2bbf,	// (0x00059833) main_cam5_pane_t11

0x2bd1,	// (0x00059845) main_cam5_pane_t12_ParamLimits

0x2bd1,	// (0x00059845) main_cam5_pane_t12

0x2be6,	// (0x0005985a) main_cam5_pane_t13_ParamLimits

0x2be6,	// (0x0005985a) main_cam5_pane_t13

0x000c,

0xf9c3,	// (0x00066637) main_cam5_pane_t_ParamLimits

0xf9c3,	// (0x00066637) main_cam5_pane_t

0x3dcb,	// (0x0005aa3f) popup_scut_keymap_window_ParamLimits

0x3dcb,	// (0x0005aa3f) popup_scut_keymap_window

0x91d9,	// (0x0005fe4d) aid_size_cell_brow_shortcut

0xcf97,	// (0x00063c0b) bg_popup_window_pane_cp010

0x91e5,	// (0x0005fe59) grid_scut_pane

0x91f1,	// (0x0005fe65) cell_scut_pane_ParamLimits

0x91f1,	// (0x0005fe65) cell_scut_pane

0x9208,	// (0x0005fe7c) cell_scut_pane_g1

0x2c03,	// (0x00059877) cell_scut_pane_t1

0x2c12,	// (0x00059886) cell_scut_pane_t2

0x9211,	// (0x0005fe85) cell_scut_pane_t3

0x0002,

0xf9de,	// (0x00066652) cell_scut_pane_t

0x714b,	// (0x0005ddbf) main_mup3_pane_g8_ParamLimits

0x714b,	// (0x0005ddbf) main_mup3_pane_g8

0x8411,	// (0x0005f085) area_vitu2_query_pane_ParamLimits

0x8411,	// (0x0005f085) area_vitu2_query_pane

0x8f6b,	// (0x0005fbdf) input_focus_pane_cp08

0x2c21,	// (0x00059895) area_vitu2_query_pane_g1

0x921f,	// (0x0005fe93) area_vitu2_query_pane_g2

0x0001,

0xf9e5,	// (0x00066659) area_vitu2_query_pane_g

0x922e,	// (0x0005fea2) area_vitu2_query_pane_t1_ParamLimits

0x922e,	// (0x0005fea2) area_vitu2_query_pane_t1

0x9242,	// (0x0005feb6) area_vitu2_query_pane_t2_ParamLimits

0x9242,	// (0x0005feb6) area_vitu2_query_pane_t2

0x9256,	// (0x0005feca) area_vitu2_query_pane_t3_ParamLimits

0x9256,	// (0x0005feca) area_vitu2_query_pane_t3

0x927e,	// (0x0005fef2) area_vitu2_query_pane_t4_ParamLimits

0x927e,	// (0x0005fef2) area_vitu2_query_pane_t4

0x92a6,	// (0x0005ff1a) area_vitu2_query_pane_t5_ParamLimits

0x92a6,	// (0x0005ff1a) area_vitu2_query_pane_t5

0x92ce,	// (0x0005ff42) area_vitu2_query_pane_t6_ParamLimits

0x92ce,	// (0x0005ff42) area_vitu2_query_pane_t6

0x0006,

0xf9ea,	// (0x0006665e) area_vitu2_query_pane_t_ParamLimits

0xf9ea,	// (0x0006665e) area_vitu2_query_pane_t

0x931a,	// (0x0005ff8e) bg_button_pane_cp018

0x9326,	// (0x0005ff9a) bg_button_pane_cp021

0x9332,	// (0x0005ffa6) bg_button_pane_cp022

0x9351,	// (0x0005ffc5) input_focus_pane_cp09

0x054c,	// (0x000571c0) aid_size_touch_mv_arrow_left

0x0577,	// (0x000571eb) aid_size_touch_mv_arrow_right

0x29ac,	// (0x00059620) main_cset_slider_pane_g16_ParamLimits

0x29ac,	// (0x00059620) main_cset_slider_pane_g16

0x29b8,	// (0x0005962c) main_cset_slider_pane_g17_ParamLimits

0x29b8,	// (0x0005962c) main_cset_slider_pane_g17

0x91c6,	// (0x0005fe3a) cell_cam4_burst_pane_g1_ParamLimits

0xc55f,	// (0x000631d3) compa_mode_pane

0x8ca3,	// (0x0005f917) popup_vtel_slider_window_g3_ParamLimits

0x8ca3,	// (0x0005f917) popup_vtel_slider_window_g3

0x8cba,	// (0x0005f92e) popup_vtel_slider_window_g4_ParamLimits

0x8cba,	// (0x0005f92e) popup_vtel_slider_window_g4

0x8cd1,	// (0x0005f945) popup_vtel_slider_window_t1_ParamLimits

0x8cd1,	// (0x0005f945) popup_vtel_slider_window_t1

0xc5e4,	// (0x00063258) main_cl_pane

0xd48d,	// (0x00064101) popup_imed_adjust2_window_ParamLimits

0x1a58,	// (0x000586cc) bg_tb_trans_pane_cp05_ParamLimits

0x237e,	// (0x00058ff2) popup_imed_adjust2_window_g1_ParamLimits

0x238d,	// (0x00059001) popup_imed_adjust2_window_g2_ParamLimits

0x238d,	// (0x00059001) popup_imed_adjust2_window_g2

0x2399,	// (0x0005900d) popup_imed_adjust2_window_g3_ParamLimits

0x2399,	// (0x0005900d) popup_imed_adjust2_window_g3

0x0002,

0xf760,	// (0x000663d4) popup_imed_adjust2_window_g_ParamLimits

0xf760,	// (0x000663d4) popup_imed_adjust2_window_g

0x23a5,	// (0x00059019) popup_imed_adjust2_window_t1_ParamLimits

0x23bd,	// (0x00059031) slider_imed_adjust_pane_ParamLimits

0x23d1,	// (0x00059045) slider_imed_adjust_pane_g1_ParamLimits

0x23e1,	// (0x00059055) slider_imed_adjust_pane_g2_ParamLimits

0x23f1,	// (0x00059065) slider_imed_adjust_pane_g3_ParamLimits

0x2402,	// (0x00059076) slider_imed_adjust_pane_g4_ParamLimits

0xf767,	// (0x000663db) slider_imed_adjust_pane_g_ParamLimits

0x819a,	// (0x0005ee0e) aid_touch_area_cam4_ParamLimits

0x819a,	// (0x0005ee0e) aid_touch_area_cam4

0xd86a,	// (0x000644de) battery_pane_cp01

0x8269,	// (0x0005eedd) main_camera4_pane_g6_ParamLimits

0x8269,	// (0x0005eedd) main_camera4_pane_g6

0x8293,	// (0x0005ef07) main_camera4_pane_t2_ParamLimits

0x8293,	// (0x0005ef07) main_camera4_pane_t2

0x0001,

0xf869,	// (0x000664dd) main_camera4_pane_t_ParamLimits

0xf869,	// (0x000664dd) main_camera4_pane_t

0x82c8,	// (0x0005ef3c) aid_touch_area_vid4_ParamLimits

0x82c8,	// (0x0005ef3c) aid_touch_area_vid4

0x831c,	// (0x0005ef90) main_video4_pane_g5_ParamLimits

0x831c,	// (0x0005ef90) main_video4_pane_g5

0x8341,	// (0x0005efb5) vid4_progress_pane_ParamLimits

0x8341,	// (0x0005efb5) vid4_progress_pane

0x2899,	// (0x0005950d) main_cset_slider_pane_g18_ParamLimits

0x2899,	// (0x0005950d) main_cset_slider_pane_g18

0x2aeb,	// (0x0005975f) cell_cam4_burst_pane_g2_ParamLimits

0x2aeb,	// (0x0005975f) cell_cam4_burst_pane_g2

0x0001,

0xf9be,	// (0x00066632) cell_cam4_burst_pane_g_ParamLimits

0xf9be,	// (0x00066632) cell_cam4_burst_pane_g

0xcd79,	// (0x000639ed) bg_cl_pane_ParamLimits

0xcd79,	// (0x000639ed) bg_cl_pane

0x9361,	// (0x0005ffd5) cl_header_pane_ParamLimits

0x9361,	// (0x0005ffd5) cl_header_pane

0x9375,	// (0x0005ffe9) cl_listscroll_pane_ParamLimits

0x9375,	// (0x0005ffe9) cl_listscroll_pane

0x2c2d,	// (0x000598a1) bg_cl_pane_g1

0x2c35,	// (0x000598a9) bg_cl_pane_g2

0x2c3d,	// (0x000598b1) bg_cl_pane_g3

0x2c45,	// (0x000598b9) bg_cl_pane_g4

0x2c4d,	// (0x000598c1) bg_cl_pane_g5

0x2c55,	// (0x000598c9) bg_cl_pane_g6

0x2c5d,	// (0x000598d1) bg_cl_pane_g7

0x2c65,	// (0x000598d9) bg_cl_pane_g8

0x2c6d,	// (0x000598e1) bg_cl_pane_g9

0x0008,

0xf9f9,	// (0x0006666d) bg_cl_pane_g

0x9385,	// (0x0005fff9) aid_height_cl_leading_ParamLimits

0x9385,	// (0x0005fff9) aid_height_cl_leading

0x9391,	// (0x00060005) aid_height_cl_text_ParamLimits

0x9391,	// (0x00060005) aid_height_cl_text

0xcc7e,	// (0x000638f2) bg_cl_header_pane_ParamLimits

0xcc7e,	// (0x000638f2) bg_cl_header_pane

0x93b0,	// (0x00060024) cl_header_pane_g1_ParamLimits

0x93b0,	// (0x00060024) cl_header_pane_g1

0x93c6,	// (0x0006003a) cl_header_pane_t1_ParamLimits

0x93c6,	// (0x0006003a) cl_header_pane_t1

0x2c75,	// (0x000598e9) cl_list_pane

0x286c,	// (0x000594e0) hc_scroll_pane_cp01

0xd1c8,	// (0x00063e3c) bg_cl_header_pane_g1

0x2752,	// (0x000593c6) bg_cl_header_pane_g2

0xd1e8,	// (0x00063e5c) bg_cl_header_pane_g3

0x2762,	// (0x000593d6) bg_cl_header_pane_g4

0x275a,	// (0x000593ce) bg_cl_header_pane_g5

0x2980,	// (0x000595f4) bg_cl_header_pane_g6

0x277a,	// (0x000593ee) bg_cl_header_pane_g7

0x2782,	// (0x000593f6) bg_cl_header_pane_g8

0x2772,	// (0x000593e6) bg_cl_header_pane_g9

0x0008,

0xfa0c,	// (0x00066680) bg_cl_header_pane_g

0x93df,	// (0x00060053) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x93df,	// (0x00060053) hc_cl_list_double_graphic_heading_pane

0x93f0,	// (0x00060064) hc_cl_list_single_graphic_pane_ParamLimits

0x93f0,	// (0x00060064) hc_cl_list_single_graphic_pane

0x9409,	// (0x0006007d) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x9409,	// (0x0006007d) hc_cl_list_single_graphic_pane_g1

0x9415,	// (0x00060089) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x9415,	// (0x00060089) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfa1f,	// (0x00066693) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfa1f,	// (0x00066693) hc_cl_list_single_graphic_pane_g

0x9429,	// (0x0006009d) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x9429,	// (0x0006009d) hc_cl_list_single_graphic_pane_t1

0x9409,	// (0x0006007d) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x9409,	// (0x0006007d) hc_cl_list_double_graphic_heading_pane_g1

0x943e,	// (0x000600b2) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x943e,	// (0x000600b2) hc_cl_list_double_graphic_heading_pane_g2

0x9452,	// (0x000600c6) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x9452,	// (0x000600c6) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfa24,	// (0x00066698) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfa24,	// (0x00066698) hc_cl_list_double_graphic_heading_pane_g

0x9466,	// (0x000600da) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x9466,	// (0x000600da) hc_cl_list_double_graphic_heading_pane_t1

0x947b,	// (0x000600ef) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x947b,	// (0x000600ef) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfa2b,	// (0x0006669f) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfa2b,	// (0x0006669f) hc_cl_list_double_graphic_heading_pane_t

0xef32,	// (0x00065ba6) vid4_progress_pane_g1

0xef42,	// (0x00065bb6) vid4_progress_pane_g2

0x9490,	// (0x00060104) vid4_progress_pane_g3

0xef52,	// (0x00065bc6) vid4_progress_pane_g4

0x0004,

0xfa30,	// (0x000666a4) vid4_progress_pane_g

0x94a2,	// (0x00060116) vid4_progress_pane_t1

0xef6a,	// (0x00065bde) vid4_progress_pane_t2

0x0002,

0xfa3b,	// (0x000666af) vid4_progress_pane_t

0x94b8,	// (0x0006012c) wait_bar_pane_cp07

0x1c74,	// (0x000588e8) blid_firmament_pane_ParamLimits

0x1cb7,	// (0x0005892b) popup_blid_sat_info2_window_g1

0x1cdb,	// (0x0005894f) popup_blid_sat_info2_window_t3

0x1ce9,	// (0x0005895d) popup_blid_sat_info2_window_t4

0x1cf7,	// (0x0005896b) popup_blid_sat_info2_window_t5

0x1d05,	// (0x00058979) popup_blid_sat_info2_window_t6

0x1d15,	// (0x00058989) popup_blid_sat_info2_window_t7

0x1d23,	// (0x00058997) popup_blid_sat_info2_window_t8

0x1d31,	// (0x000589a5) popup_blid_sat_info2_window_t9

0x1d3f,	// (0x000589b3) popup_blid_sat_info2_window_t10

0x1e00,	// (0x00058a74) aid_firma_cardinal_ParamLimits

0x1e14,	// (0x00058a88) blid_firmament_pane_t1_ParamLimits

0x1e2b,	// (0x00058a9f) blid_firmament_pane_t2_ParamLimits

0x1e42,	// (0x00058ab6) blid_firmament_pane_t3_ParamLimits

0x1e59,	// (0x00058acd) blid_firmament_pane_t4_ParamLimits

0xf659,	// (0x000662cd) blid_firmament_pane_t_ParamLimits

0x1e70,	// (0x00058ae4) blid_sat_info_pane_ParamLimits

0xc5d6,	// (0x0006324a) main_cam_set_pane_ParamLimits

0x7928,	// (0x0005e59c) aid_size_cell_colour_35_ParamLimits

0x7948,	// (0x0005e5bc) aid_size_cell_colour_112_ParamLimits

0x7968,	// (0x0005e5dc) aid_size_cell_effect_ParamLimits

0x1a58,	// (0x000586cc) bg_tb_trans_pane_cp02_ParamLimits

0x0165,	// (0x00056dd9) heading_imed_pane_ParamLimits

0x7988,	// (0x0005e5fc) listscroll_imed_pane_ParamLimits

0x1127,	// (0x00057d9b) popup_call2_audio_first_window_g5_ParamLimits

0x1127,	// (0x00057d9b) popup_call2_audio_first_window_g5

0x7db4,	// (0x0005ea28) aid_size_touch_image3_arrow_left_ParamLimits

0x7db4,	// (0x0005ea28) aid_size_touch_image3_arrow_left

0x7de0,	// (0x0005ea54) aid_size_touch_image3_arrow_right_ParamLimits

0x7de0,	// (0x0005ea54) aid_size_touch_image3_arrow_right

0xef7f,	// (0x00065bf3) vid4_progress_pane_t3

0x7b2b,	// (0x0005e79f) main_hwr_training_symbol_option_pane_ParamLimits

0x7b2b,	// (0x0005e79f) main_hwr_training_symbol_option_pane

0x25ae,	// (0x00059222) popup_hwr_training_preview_window_ParamLimits

0x25ae,	// (0x00059222) popup_hwr_training_preview_window

0x7b4b,	// (0x0005e7bf) hwr_training_navi_pane_g5_ParamLimits

0x7b4b,	// (0x0005e7bf) hwr_training_navi_pane_g5

0x2740,	// (0x000593b4) popup_char_count_window

0xc5d6,	// (0x0006324a) bg_popup_sub_pane_cp20_ParamLimits

0x8de1,	// (0x0005fa55) list_vitu2_match_list_pane_ParamLimits

0x8ded,	// (0x0005fa61) vitu2_page_scroll_pane_ParamLimits

0x8ded,	// (0x0005fa61) vitu2_page_scroll_pane

0x94ff,	// (0x00060173) list_single_hwr_training_symbol_option_pane_ParamLimits

0x94ff,	// (0x00060173) list_single_hwr_training_symbol_option_pane

0x9512,	// (0x00060186) list_single_hwr_training_symbol_option_pane_g1

0x951a,	// (0x0006018e) list_single_hwr_training_symbol_option_pane_t1

0x9528,	// (0x0006019c) bg_button_pane_cp023

0x9531,	// (0x000601a5) bg_button_pane_cp024

0x9564,	// (0x000601d8) vitu2_page_scroll_pane_g1

0x956c,	// (0x000601e0) vitu2_page_scroll_pane_g2

0x0001,

0xfa42,	// (0x000666b6) vitu2_page_scroll_pane_g

0x9574,	// (0x000601e8) vitu2_page_scroll_pane_t1

0x1e9f,	// (0x00058b13) popup_char_count_window_g1

0x9583,	// (0x000601f7) popup_char_count_window_g2

0x29a3,	// (0x00059617) popup_char_count_window_g3

0x0002,

0xfa47,	// (0x000666bb) popup_char_count_window_g

0x958c,	// (0x00060200) popup_char_count_window_t1

0xc5e4,	// (0x00063258) main_vded2_pane

0x236a,	// (0x00058fde) aid_size_cell_imed_line

0x2374,	// (0x00058fe8) grid_imed_line_width_pane

0xd91a,	// (0x0006458e) vid4_indicators_pane_g4

0x959a,	// (0x0006020e) cell_imed_line_width_pane_ParamLimits

0x959a,	// (0x0006020e) cell_imed_line_width_pane

0x95ae,	// (0x00060222) cell_imed_line_width_pane_g1

0x95b7,	// (0x0006022b) cell_imed_line_width_pane_g2

0x0001,

0xfa4e,	// (0x000666c2) cell_imed_line_width_pane_g

0x95bf,	// (0x00060233) main_vded2_pane_g1_ParamLimits

0x95bf,	// (0x00060233) main_vded2_pane_g1

0x95d5,	// (0x00060249) main_vded2_pane_g2_ParamLimits

0x95d5,	// (0x00060249) main_vded2_pane_g2

0x0001,

0xfa53,	// (0x000666c7) main_vded2_pane_g_ParamLimits

0xfa53,	// (0x000666c7) main_vded2_pane_g

0x95e7,	// (0x0006025b) vded2_slider_pane_ParamLimits

0x95e7,	// (0x0006025b) vded2_slider_pane

0x95f7,	// (0x0006026b) aid_size_touch_vded2_end

0x9601,	// (0x00060275) aid_size_touch_vded2_playhead

0x960b,	// (0x0006027f) aid_size_touch_vded2_start

0x9613,	// (0x00060287) vded2_slider_bg_pane

0x961c,	// (0x00060290) vded2_slider_pane_g1

0x9625,	// (0x00060299) vded2_slider_pane_g2

0x962d,	// (0x000602a1) vded2_slider_pane_g3

0x0002,

0xfa58,	// (0x000666cc) vded2_slider_pane_g

0x9638,	// (0x000602ac) vded2_slider_bg_pane_g1

0x9641,	// (0x000602b5) vded2_slider_bg_pane_g2

0x964a,	// (0x000602be) vded2_slider_bg_pane_g3

0x0002,

0xfa5f,	// (0x000666d3) vded2_slider_bg_pane_g

0x5e68,	// (0x0005cadc) aid_postcard_touch_down_pane_ParamLimits

0x5e68,	// (0x0005cadc) aid_postcard_touch_down_pane

0x5e7e,	// (0x0005caf2) aid_postcard_touch_up_pane_ParamLimits

0x5e7e,	// (0x0005caf2) aid_postcard_touch_up_pane

0xc5e4,	// (0x00063258) main_blid2_pane

0xd473,	// (0x000640e7) popup_blid2_search_window

0xc55f,	// (0x000631d3) blid2_gps_pane

0xc55f,	// (0x000631d3) blid2_navig_pane

0xc55f,	// (0x000631d3) blid2_search_pane

0xc55f,	// (0x000631d3) blid2_tripm_pane

0x9653,	// (0x000602c7) blid2_search_pane_g1_ParamLimits

0x9653,	// (0x000602c7) blid2_search_pane_g1

0x966b,	// (0x000602df) blid2_search_pane_t1_ParamLimits

0x966b,	// (0x000602df) blid2_search_pane_t1

0x967d,	// (0x000602f1) aid_size_cell_blid2_gps_ParamLimits

0x967d,	// (0x000602f1) aid_size_cell_blid2_gps

0x9695,	// (0x00060309) blid2_gps_pane_g1_ParamLimits

0x9695,	// (0x00060309) blid2_gps_pane_g1

0x96a9,	// (0x0006031d) grid_blid2_satellite_pane_ParamLimits

0x96a9,	// (0x0006031d) grid_blid2_satellite_pane

0x96c3,	// (0x00060337) blid2_navig_pane_g1_ParamLimits

0x96c3,	// (0x00060337) blid2_navig_pane_g1

0x96cf,	// (0x00060343) blid2_navig_pane_t1_ParamLimits

0x96cf,	// (0x00060343) blid2_navig_pane_t1

0x96ea,	// (0x0006035e) blid2_navig_pane_t2_ParamLimits

0x96ea,	// (0x0006035e) blid2_navig_pane_t2

0x0001,

0xfa66,	// (0x000666da) blid2_navig_pane_t_ParamLimits

0xfa66,	// (0x000666da) blid2_navig_pane_t

0x9705,	// (0x00060379) blid2_navig_ring_pane_ParamLimits

0x9705,	// (0x00060379) blid2_navig_ring_pane

0x971e,	// (0x00060392) blid2_speed_pane_ParamLimits

0x971e,	// (0x00060392) blid2_speed_pane

0x972a,	// (0x0006039e) blid2_tripm_pane_g1_ParamLimits

0x972a,	// (0x0006039e) blid2_tripm_pane_g1

0x9745,	// (0x000603b9) blid2_tripm_pane_g2_ParamLimits

0x9745,	// (0x000603b9) blid2_tripm_pane_g2

0x9759,	// (0x000603cd) blid2_tripm_pane_g3_ParamLimits

0x9759,	// (0x000603cd) blid2_tripm_pane_g3

0x976d,	// (0x000603e1) blid2_tripm_pane_g4_ParamLimits

0x976d,	// (0x000603e1) blid2_tripm_pane_g4

0x9781,	// (0x000603f5) blid2_tripm_pane_g5_ParamLimits

0x9781,	// (0x000603f5) blid2_tripm_pane_g5

0x0005,

0xfa6b,	// (0x000666df) blid2_tripm_pane_g_ParamLimits

0xfa6b,	// (0x000666df) blid2_tripm_pane_g

0x97a7,	// (0x0006041b) blid2_tripm_pane_t1_ParamLimits

0x97a7,	// (0x0006041b) blid2_tripm_pane_t1

0x97c2,	// (0x00060436) blid2_tripm_pane_t2_ParamLimits

0x97c2,	// (0x00060436) blid2_tripm_pane_t2

0x97db,	// (0x0006044f) blid2_tripm_pane_t3_ParamLimits

0x97db,	// (0x0006044f) blid2_tripm_pane_t3

0x0003,

0xfa78,	// (0x000666ec) blid2_tripm_pane_t_ParamLimits

0xfa78,	// (0x000666ec) blid2_tripm_pane_t

0x9822,	// (0x00060496) cell_blid2_satellite_pane_ParamLimits

0x9822,	// (0x00060496) cell_blid2_satellite_pane

0x9840,	// (0x000604b4) cell_blid2_satellite_pane_g1

0x9849,	// (0x000604bd) cell_blid2_satellite_pane_t1

0xcfd7,	// (0x00063c4b) blid2_speed_pane_g1

0x9857,	// (0x000604cb) blid2_speed_pane_t1

0x9865,	// (0x000604d9) blid2_speed_pane_t2

0x0001,

0xfa81,	// (0x000666f5) blid2_speed_pane_t

0xcfd7,	// (0x00063c4b) blid2_navig_ring_pane_g1

0x9873,	// (0x000604e7) blid2_navig_ring_pane_g2

0x987b,	// (0x000604ef) blid2_navig_ring_pane_g3

0x9883,	// (0x000604f7) blid2_navig_ring_pane_g4

0x988b,	// (0x000604ff) blid2_navig_ring_pane_g5

0x0004,

0xfa86,	// (0x000666fa) blid2_navig_ring_pane_g

0xc55f,	// (0x000631d3) bg_popup_window_pane_cp011

0x9893,	// (0x00060507) popup_blid2_search_window_g1

0x989b,	// (0x0006050f) popup_blid2_search_window_t1

0x98a9,	// (0x0006051d) popup_blid2_search_window_t2

0x0001,

0xfa91,	// (0x00066705) popup_blid2_search_window_t

0xd0d7,	// (0x00063d4b) main_browser_pane_g1

0xcd79,	// (0x000639ed) main_browser_pane_ParamLimits

0xc5d6,	// (0x0006324a) bg_button_pane_cp011_ParamLimits

0x8690,	// (0x0005f304) cell_vitu2_function_pane_g1_ParamLimits

0x1a58,	// (0x000586cc) bg_popup_sub_pane_cp22_ParamLimits

0x8f6b,	// (0x0005fbdf) input_focus_pane_cp08_ParamLimits

0x8f86,	// (0x0005fbfa) popup_vitu2_query_button_pane_ParamLimits

0x8f86,	// (0x0005fbfa) popup_vitu2_query_button_pane

0x8f95,	// (0x0005fc09) popup_vitu2_query_input_button_pane

0x2a41,	// (0x000596b5) popup_vitu2_query_window_g1_ParamLimits

0x8f9d,	// (0x0005fc11) popup_vitu2_query_window_g2_ParamLimits

0xf992,	// (0x00066606) popup_vitu2_query_window_g_ParamLimits

0xc55f,	// (0x000631d3) bg_button_pane_cp026

0x98b7,	// (0x0006052b) popup_vitu2_query_input_button_pane_g1

0xc55f,	// (0x000631d3) bg_button_pane_cp025

0x98bf,	// (0x00060533) popup_vitu2_query_button_pane_t1

0x6da5,	// (0x0005da19) main_mp3_pane_t6

0x6db3,	// (0x0005da27) popup_slider_window_cp01

0xd886,	// (0x000644fa) cam4_battery_pane

0xd8d9,	// (0x0006454d) cam4_battery_pane_cp02

0xef2a,	// (0x00065b9e) cam4_battery_pane_cp01

0xef2a,	// (0x00065b9e) cam4_battery_pane_cp03

0x2a11,	// (0x00059685) cam4_battery_pane_g1

0xcfd7,	// (0x00063c4b) cam4_battery_pane_g2

0x0001,

0xfa96,	// (0x0006670a) cam4_battery_pane_g

0x1d4d,	// (0x000589c1) popup_blid_sat_info2_window_t11

0x054c,	// (0x000571c0) aid_size_touch_mv_arrow_left_ParamLimits

0x0577,	// (0x000571eb) aid_size_touch_mv_arrow_right_ParamLimits

0x05d5,	// (0x00057249) navi_pane_g1_ParamLimits

0x05e1,	// (0x00057255) navi_pane_g2_ParamLimits

0x060f,	// (0x00057283) navi_pane_g3_ParamLimits

0xf35a,	// (0x00065fce) navi_pane_g_ParamLimits

0x5aa2,	// (0x0005c716) navi_pane_mv_t1_ParamLimits

0x7994,	// (0x0005e608) grid_imed_effect_pane_ParamLimits

0x49e9,	// (0x0005b65d) aid_placing_vt_slider_lsc

0xd026,	// (0x00063c9a) aid_placing_vt_slider_prt

0xcc7e,	// (0x000638f2) bg_tb_trans_pane_cp01_ParamLimits

0x1ff4,	// (0x00058c68) popup_image_details_window_g1_ParamLimits

0x2007,	// (0x00058c7b) popup_image_details_window_g2_ParamLimits

0x201c,	// (0x00058c90) popup_image_details_window_g3_ParamLimits

0x201c,	// (0x00058c90) popup_image_details_window_g3

0xf699,	// (0x0006630d) popup_image_details_window_g_ParamLimits

0x2030,	// (0x00058ca4) popup_image_details_window_t1_ParamLimits

0x2042,	// (0x00058cb6) popup_image_details_window_t2_ParamLimits

0x205b,	// (0x00058ccf) popup_image_details_window_t3_ParamLimits

0x206f,	// (0x00058ce3) popup_image_details_window_t4_ParamLimits

0x208a,	// (0x00058cfe) popup_image_details_window_t5_ParamLimits

0xf6a0,	// (0x00066314) popup_image_details_window_t_ParamLimits

0x939d,	// (0x00060011) cl_header_name_pane_ParamLimits

0x939d,	// (0x00060011) cl_header_name_pane

0x98cd,	// (0x00060541) cl_header_name_pane_t1_ParamLimits

0x98cd,	// (0x00060541) cl_header_name_pane_t1

0x98ee,	// (0x00060562) cl_header_name_pane_t2_ParamLimits

0x98ee,	// (0x00060562) cl_header_name_pane_t2

0x9930,	// (0x000605a4) cl_header_name_pane_t3_ParamLimits

0x9930,	// (0x000605a4) cl_header_name_pane_t3

0x0002,

0xfa9b,	// (0x0006670f) cl_header_name_pane_t_ParamLimits

0xfa9b,	// (0x0006670f) cl_header_name_pane_t

0x069e,	// (0x00057312) navi_pane_mv_g2_ParamLimits

0x271a,	// (0x0005938e) field_vitu2_entry_pane_g1_ParamLimits

0x2726,	// (0x0005939a) field_vitu2_entry_pane_g2_ParamLimits

0x2732,	// (0x000593a6) field_vitu2_entry_pane_g3_ParamLimits

0x2732,	// (0x000593a6) field_vitu2_entry_pane_g3

0xf89b,	// (0x0006650f) field_vitu2_entry_pane_g_ParamLimits

0x860c,	// (0x0005f280) cell_vitu2_itu_pane_g1_ParamLimits

0x8624,	// (0x0005f298) cell_vitu2_itu_pane_g2_ParamLimits

0x8624,	// (0x0005f298) cell_vitu2_itu_pane_g2

0x0001,

0xf8a7,	// (0x0006651b) cell_vitu2_itu_pane_g_ParamLimits

0xf8a7,	// (0x0006651b) cell_vitu2_itu_pane_g

0xc5d6,	// (0x0006324a) bg_vkb2_func_pane_cp05_ParamLimits

0xc5d6,	// (0x0006324a) bg_vkb2_func_pane_cp05

0xc5d6,	// (0x0006324a) bg_vkb2_func_pane_cp03

0xc5d6,	// (0x0006324a) bg_vkb2_func_pane_cp04

0xc5d6,	// (0x0006324a) bg_vkb2_func_pane_cp10_ParamLimits

0xc5d6,	// (0x0006324a) bg_vkb2_func_pane_cp10

0x9341,	// (0x0005ffb5) bg_vkb2_func_pane_cp08

0x931a,	// (0x0005ff8e) bg_vkb2_func_pane_cp06

0x9326,	// (0x0005ff9a) bg_vkb2_func_pane_cp07

0x953a,	// (0x000601ae) bg_vkb2_func_pane_cp11_ParamLimits

0x953a,	// (0x000601ae) bg_vkb2_func_pane_cp11

0x954f,	// (0x000601c3) bg_vkb2_func_pane_cp12_ParamLimits

0x954f,	// (0x000601c3) bg_vkb2_func_pane_cp12

0xc55f,	// (0x000631d3) bg_vkb2_func_pane_cp09

0x2752,	// (0x000593c6) bg_vkb2_func_pane_g1

0xd1e8,	// (0x00063e5c) bg_vkb2_func_pane_g2

0x275a,	// (0x000593ce) bg_vkb2_func_pane_g3

0x2762,	// (0x000593d6) bg_vkb2_func_pane_g4

0x2980,	// (0x000595f4) bg_vkb2_func_pane_g5

0x277a,	// (0x000593ee) bg_vkb2_func_pane_g6

0x2782,	// (0x000593f6) bg_vkb2_func_pane_g7

0x2772,	// (0x000593e6) bg_vkb2_func_pane_g8

0xd1c8,	// (0x00063e3c) bg_vkb2_func_pane_g9

0x0008,

0xfaa2,	// (0x00066716) bg_vkb2_func_pane_g

0x9795,	// (0x00060409) blid2_tripm_pane_g6_ParamLimits

0x9795,	// (0x00060409) blid2_tripm_pane_g6

0x266c,	// (0x000592e0) mp4_progress_pane_g1

0x980e,	// (0x00060482) blid2_tripm_values_pane_ParamLimits

0x980e,	// (0x00060482) blid2_tripm_values_pane

0x9961,	// (0x000605d5) blid2_tripm_values_pane_t1

0x996f,	// (0x000605e3) blid2_tripm_values_pane_t2

0x997d,	// (0x000605f1) blid2_tripm_values_pane_t3

0x998b,	// (0x000605ff) blid2_tripm_values_pane_t4

0x9999,	// (0x0006060d) blid2_tripm_values_pane_t5

0x99a7,	// (0x0006061b) blid2_tripm_values_pane_t6

0x99b5,	// (0x00060629) blid2_tripm_values_pane_t7

0x99c3,	// (0x00060637) blid2_tripm_values_pane_t8

0x99d1,	// (0x00060645) blid2_tripm_values_pane_t9

0x0008,

0xfab5,	// (0x00066729) blid2_tripm_values_pane_t

0x4a2b,	// (0x0005b69f) call_video_pane_t1_ParamLimits

0x4a49,	// (0x0005b6bd) call_video_pane_t2_ParamLimits

0xf208,	// (0x00065e7c) call_video_pane_t_ParamLimits

0x5d64,	// (0x0005c9d8) msg_header_pane_g1_ParamLimits

0x0871,	// (0x000574e5) msg_header_pane_g2_ParamLimits

0x0871,	// (0x000574e5) msg_header_pane_g2

0x0001,

0xf3fd,	// (0x00066071) msg_header_pane_g_ParamLimits

0xf3fd,	// (0x00066071) msg_header_pane_g

0xcd79,	// (0x000639ed) main_clock2_pane_ParamLimits

0x7695,	// (0x0005e309) grid_clock2_toolbar_pane_ParamLimits

0x7695,	// (0x0005e309) grid_clock2_toolbar_pane

0x7695,	// (0x0005e309) listscroll_clock2_pane_ParamLimits

0x7695,	// (0x0005e309) listscroll_clock2_pane

0x7779,	// (0x0005e3ed) main_clock2_pane_t3_ParamLimits

0x7779,	// (0x0005e3ed) main_clock2_pane_t3

0x779d,	// (0x0005e411) main_clock2_pane_t4_ParamLimits

0x779d,	// (0x0005e411) main_clock2_pane_t4

0x99df,	// (0x00060653) cell_clock2_toolbar_pane

0x99e7,	// (0x0006065b) cell_clock2_toolbar_pane_cp01

0x99e7,	// (0x0006065b) cell_clock2_toolbar_pane_cp02

0x99ef,	// (0x00060663) cell_clock2_toolbar_pane_cp03

0x99f7,	// (0x0006066b) list_clock2_pane

0x04d1,	// (0x00057145) scroll_pane_cp10

0x99ff,	// (0x00060673) list_single_clock2_pane_ParamLimits

0x99ff,	// (0x00060673) list_single_clock2_pane

0xcf97,	// (0x00063c0b) list_highlight_pane_cp08

0x9a0c,	// (0x00060680) list_single_clock2_pane_t1

0x9a1a,	// (0x0006068e) list_single_clock2_pane_t2

0x0001,

0xfac8,	// (0x0006673c) list_single_clock2_pane_t

0xc55f,	// (0x000631d3) bg_button_pane_cp10

0x9a28,	// (0x0006069c) cell_clock2_toolbar_pane_g1

0x5df4,	// (0x0005ca68) aid_main_viewer_pane_g1_ParamLimits

0x5df4,	// (0x0005ca68) aid_main_viewer_pane_g1

0x5e02,	// (0x0005ca76) aid_main_viewer_pane_g2_ParamLimits

0x5e02,	// (0x0005ca76) aid_main_viewer_pane_g2

0x5e10,	// (0x0005ca84) aid_main_viewer_pane_g3_ParamLimits

0x5e10,	// (0x0005ca84) aid_main_viewer_pane_g3

0x5e1f,	// (0x0005ca93) aid_main_viewer_pane_g4_ParamLimits

0x5e1f,	// (0x0005ca93) aid_main_viewer_pane_g4

0x0003,

0xf40e,	// (0x00066082) aid_main_viewer_pane_g_ParamLimits

0xf40e,	// (0x00066082) aid_main_viewer_pane_g

0x6768,	// (0x0005d3dc) main_calc_pane_ParamLimits

0x678e,	// (0x0005d402) main_dialer2_pane_ParamLimits

0xc5e4,	// (0x00063258) main_cam6_pane

0xc5e4,	// (0x00063258) main_vid6_pane

0x76a1,	// (0x0005e315) listscroll_gen_pane_cp06_ParamLimits

0x76a1,	// (0x0005e315) listscroll_gen_pane_cp06

0x77c0,	// (0x0005e434) main_clock2_pane_t5_ParamLimits

0x77c0,	// (0x0005e434) main_clock2_pane_t5

0x781e,	// (0x0005e492) aid_call2_pane_cp10_ParamLimits

0x7830,	// (0x0005e4a4) aid_call_pane_cp10_ParamLimits

0x0540,	// (0x000571b4) popup_clock_analogue_window_cp10_g1_ParamLimits

0x0540,	// (0x000571b4) popup_clock_analogue_window_cp10_g2_ParamLimits

0x7842,	// (0x0005e4b6) popup_clock_analogue_window_cp10_g3_ParamLimits

0x7842,	// (0x0005e4b6) popup_clock_analogue_window_cp10_g4_ParamLimits

0x0540,	// (0x000571b4) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf755,	// (0x000663c9) popup_clock_analogue_window_cp10_g_ParamLimits

0x7858,	// (0x0005e4cc) popup_clock_analogue_window_cp10_t1_ParamLimits

0x7d61,	// (0x0005e9d5) cell_dialer2_keypad_pane_g2_ParamLimits

0x7d61,	// (0x0005e9d5) cell_dialer2_keypad_pane_g2

0x0001,

0xf83a,	// (0x000664ae) cell_dialer2_keypad_pane_g_ParamLimits

0xf83a,	// (0x000664ae) cell_dialer2_keypad_pane_g

0x7d7d,	// (0x0005e9f1) cell_dialer2_keypad_pane_t1

0x89af,	// (0x0005f623) main_cset_text2_pane_ParamLimits

0x89af,	// (0x0005f623) main_cset_text2_pane

0x2c21,	// (0x00059895) area_vitu2_query_pane_g1_ParamLimits

0x921f,	// (0x0005fe93) area_vitu2_query_pane_g2_ParamLimits

0xf9e5,	// (0x00066659) area_vitu2_query_pane_g_ParamLimits

0x92f6,	// (0x0005ff6a) area_vitu2_query_pane_t7_ParamLimits

0x92f6,	// (0x0005ff6a) area_vitu2_query_pane_t7

0x931a,	// (0x0005ff8e) bg_button_pane_cp018_ParamLimits

0x9326,	// (0x0005ff9a) bg_button_pane_cp021_ParamLimits

0x9332,	// (0x0005ffa6) bg_button_pane_cp022_ParamLimits

0x9341,	// (0x0005ffb5) bg_vkb2_func_pane_cp08_ParamLimits

0x931a,	// (0x0005ff8e) bg_vkb2_func_pane_cp06_ParamLimits

0x9326,	// (0x0005ff9a) bg_vkb2_func_pane_cp07_ParamLimits

0x9351,	// (0x0005ffc5) input_focus_pane_cp09_ParamLimits

0xef95,	// (0x00065c09) cam6_autofocus_pane_ParamLimits

0xef95,	// (0x00065c09) cam6_autofocus_pane

0x9a30,	// (0x000606a4) cam6_image_uncrop_pane_ParamLimits

0x9a30,	// (0x000606a4) cam6_image_uncrop_pane

0x9a3f,	// (0x000606b3) cam6_indi_pane_ParamLimits

0x9a3f,	// (0x000606b3) cam6_indi_pane

0x9a55,	// (0x000606c9) cam6_mode_pane_ParamLimits

0x9a55,	// (0x000606c9) cam6_mode_pane

0x9a67,	// (0x000606db) cam6_timer_pane_ParamLimits

0x9a67,	// (0x000606db) cam6_timer_pane

0x9a77,	// (0x000606eb) cam6_zoom_pane_ParamLimits

0x9a77,	// (0x000606eb) cam6_zoom_pane

0x9a83,	// (0x000606f7) cam6_mode_pane_g1_ParamLimits

0x9a83,	// (0x000606f7) cam6_mode_pane_g1

0x9a93,	// (0x00060707) cam6_mode_pane_g2_ParamLimits

0x9a93,	// (0x00060707) cam6_mode_pane_g2

0x9aa3,	// (0x00060717) cam6_mode_pane_g3_ParamLimits

0x9aa3,	// (0x00060717) cam6_mode_pane_g3

0x9ab3,	// (0x00060727) cam6_mode_pane_g4_ParamLimits

0x9ab3,	// (0x00060727) cam6_mode_pane_g4

0x0003,

0xfacd,	// (0x00066741) cam6_mode_pane_g_ParamLimits

0xfacd,	// (0x00066741) cam6_mode_pane_g

0x9ac3,	// (0x00060737) bg_tb_trans_pane_cp08_ParamLimits

0x9ac3,	// (0x00060737) bg_tb_trans_pane_cp08

0x9ad1,	// (0x00060745) cam6_battery_pane_ParamLimits

0x9ad1,	// (0x00060745) cam6_battery_pane

0x9ae7,	// (0x0006075b) cam6_indi_pane_g1_ParamLimits

0x9ae7,	// (0x0006075b) cam6_indi_pane_g1

0x9af9,	// (0x0006076d) cam6_indi_pane_g2_ParamLimits

0x9af9,	// (0x0006076d) cam6_indi_pane_g2

0x9b0b,	// (0x0006077f) cam6_indi_pane_g3_ParamLimits

0x9b0b,	// (0x0006077f) cam6_indi_pane_g3

0x0002,

0xfad6,	// (0x0006674a) cam6_indi_pane_g_ParamLimits

0xfad6,	// (0x0006674a) cam6_indi_pane_g

0x9b1d,	// (0x00060791) cam6_indi_pane_t1_ParamLimits

0x9b1d,	// (0x00060791) cam6_indi_pane_t1

0x9b43,	// (0x000607b7) cam6_autofocus_pane_g1

0x9b4b,	// (0x000607bf) cam6_autofocus_pane_g2

0x9b53,	// (0x000607c7) cam6_autofocus_pane_g3

0x9b5b,	// (0x000607cf) cam6_autofocus_pane_g4

0x0003,

0xfadd,	// (0x00066751) cam6_autofocus_pane_g

0x9b63,	// (0x000607d7) cam6_timer_pane_g1

0x9b6b,	// (0x000607df) cam6_timer_pane_t1

0x9b79,	// (0x000607ed) cam6_zoom_cont_pane

0x9b81,	// (0x000607f5) cam6_zoom_pane_g1

0x9b89,	// (0x000607fd) cam6_zoom_pane_g2

0x9b91,	// (0x00060805) cam6_zoom_pane_g3

0x0002,

0xfae6,	// (0x0006675a) cam6_zoom_pane_g

0xcfd7,	// (0x00063c4b) cam6_battery_pane_g1

0xcfd7,	// (0x00063c4b) cam6_battery_pane_g2

0x0001,

0xf3be,	// (0x00066032) cam6_battery_pane_g

0x9b99,	// (0x0006080d) cam6_zoom_cont_pane_g1

0x9ba2,	// (0x00060816) cam6_zoom_cont_pane_g2

0x9bab,	// (0x0006081f) cam6_zoom_cont_pane_g3

0x0002,

0xfaed,	// (0x00066761) cam6_zoom_cont_pane_g

0x9bc8,	// (0x0006083c) cam6_mode_pane_cp_ParamLimits

0x9bc8,	// (0x0006083c) cam6_mode_pane_cp

0x9bda,	// (0x0006084e) cam6_zoom_pane_cp_ParamLimits

0x9bda,	// (0x0006084e) cam6_zoom_pane_cp

0x9be6,	// (0x0006085a) vid6_image_uncrop_cif_pane_ParamLimits

0x9be6,	// (0x0006085a) vid6_image_uncrop_cif_pane

0x9bf6,	// (0x0006086a) vid6_image_uncrop_nhd_pane_ParamLimits

0x9bf6,	// (0x0006086a) vid6_image_uncrop_nhd_pane

0x9c15,	// (0x00060889) vid6_image_uncrop_vga_pane_ParamLimits

0x9c15,	// (0x00060889) vid6_image_uncrop_vga_pane

0x9c24,	// (0x00060898) vid6_image_uncrop_wvga_pane_ParamLimits

0x9c24,	// (0x00060898) vid6_image_uncrop_wvga_pane

0x9c33,	// (0x000608a7) vid6_indi_pane_ParamLimits

0x9c33,	// (0x000608a7) vid6_indi_pane

0x9ac3,	// (0x00060737) bg_tb_trans_pane_cp09_ParamLimits

0x9ac3,	// (0x00060737) bg_tb_trans_pane_cp09

0x9c4b,	// (0x000608bf) cam6_battery_pane_cp_ParamLimits

0x9c4b,	// (0x000608bf) cam6_battery_pane_cp

0x9c57,	// (0x000608cb) vid6_indi_pane_g1_ParamLimits

0x9c57,	// (0x000608cb) vid6_indi_pane_g1

0x9c69,	// (0x000608dd) vid6_indi_pane_g2_ParamLimits

0x9c69,	// (0x000608dd) vid6_indi_pane_g2

0x9c7b,	// (0x000608ef) vid6_indi_pane_g3_ParamLimits

0x9c7b,	// (0x000608ef) vid6_indi_pane_g3

0x9c90,	// (0x00060904) vid6_indi_pane_g4_ParamLimits

0x9c90,	// (0x00060904) vid6_indi_pane_g4

0x9ca5,	// (0x00060919) vid6_indi_pane_g5_ParamLimits

0x9ca5,	// (0x00060919) vid6_indi_pane_g5

0x0004,

0xfaf4,	// (0x00066768) vid6_indi_pane_g_ParamLimits

0xfaf4,	// (0x00066768) vid6_indi_pane_g

0x9cbf,	// (0x00060933) vid6_indi_pane_t1_ParamLimits

0x9cbf,	// (0x00060933) vid6_indi_pane_t1

0x9cd5,	// (0x00060949) vid6_indi_pane_t2_ParamLimits

0x9cd5,	// (0x00060949) vid6_indi_pane_t2

0x9cfd,	// (0x00060971) vid6_indi_pane_t3_ParamLimits

0x9cfd,	// (0x00060971) vid6_indi_pane_t3

0x9d25,	// (0x00060999) vid6_indi_pane_t4_ParamLimits

0x9d25,	// (0x00060999) vid6_indi_pane_t4

0x0003,

0xfaff,	// (0x00066773) vid6_indi_pane_t_ParamLimits

0xfaff,	// (0x00066773) vid6_indi_pane_t

0x9d49,	// (0x000609bd) wait_bar_pane_cp08

0x9d58,	// (0x000609cc) main_cset_text2_pane_t1_ParamLimits

0x9d58,	// (0x000609cc) main_cset_text2_pane_t1

0x9bb3,	// (0x00060827) listscroll_gen_pane_cp06_t1_ParamLimits

0x9bb3,	// (0x00060827) listscroll_gen_pane_cp06_t1

0xc5e4,	// (0x00063258) main_cam6_set_pane

0x2a1b,	// (0x0005968f) bg_tb_trans_pane_cp06_ParamLimits

0xd88e,	// (0x00064502) cam4_indicators_pane_g1_ParamLimits

0xd89f,	// (0x00064513) cam4_indicators_pane_g2_ParamLimits

0xf877,	// (0x000664eb) cam4_indicators_pane_g_ParamLimits

0xd8b7,	// (0x0006452b) cam4_indicators_pane_t1_ParamLimits

0xc5d6,	// (0x0006324a) bg_tb_trans_pane_cp07_ParamLimits

0xd8e1,	// (0x00064555) vid4_indicators_pane_g1_ParamLimits

0xd8f5,	// (0x00064569) vid4_indicators_pane_g2_ParamLimits

0xd909,	// (0x0006457d) vid4_indicators_pane_g3_ParamLimits

0xd91a,	// (0x0006458e) vid4_indicators_pane_g4_ParamLimits

0xf889,	// (0x000664fd) vid4_indicators_pane_g_ParamLimits

0xd936,	// (0x000645aa) vid4_indicators_pane_t1_ParamLimits

0xef32,	// (0x00065ba6) vid4_progress_pane_g1_ParamLimits

0xef42,	// (0x00065bb6) vid4_progress_pane_g2_ParamLimits

0x9490,	// (0x00060104) vid4_progress_pane_g3_ParamLimits

0xef52,	// (0x00065bc6) vid4_progress_pane_g4_ParamLimits

0xfa30,	// (0x000666a4) vid4_progress_pane_g_ParamLimits

0x94a2,	// (0x00060116) vid4_progress_pane_t1_ParamLimits

0xef6a,	// (0x00065bde) vid4_progress_pane_t2_ParamLimits

0xef7f,	// (0x00065bf3) vid4_progress_pane_t3_ParamLimits

0xfa3b,	// (0x000666af) vid4_progress_pane_t_ParamLimits

0x94b8,	// (0x0006012c) wait_bar_pane_cp07_ParamLimits

0x9d76,	// (0x000609ea) main_cam6_set_pane_g2_ParamLimits

0x9d76,	// (0x000609ea) main_cam6_set_pane_g2

0x9d9a,	// (0x00060a0e) main_cset6_listscroll_pane_ParamLimits

0x9d9a,	// (0x00060a0e) main_cset6_listscroll_pane

0x9db6,	// (0x00060a2a) main_cset6_slider_pane_ParamLimits

0x9db6,	// (0x00060a2a) main_cset6_slider_pane

0x9dcc,	// (0x00060a40) main_cset6_text2_pane_ParamLimits

0x9dcc,	// (0x00060a40) main_cset6_text2_pane

0x9dda,	// (0x00060a4e) main_cset6_text_pane

0x9de2,	// (0x00060a56) main_cset_list_pane_copy1_ParamLimits

0x9de2,	// (0x00060a56) main_cset_list_pane_copy1

0x9df2,	// (0x00060a66) scroll_pane_cp028_copy1

0x9dfb,	// (0x00060a6f) cset_list_set_pane_copy1

0x9e0d,	// (0x00060a81) aid_position_infowindow_above_copy1

0x9e15,	// (0x00060a89) aid_position_infowindow_below_copy1

0x9e1d,	// (0x00060a91) cset_list_set_pane_g1_copy1

0x9e25,	// (0x00060a99) cset_list_set_pane_g3_copy1_ParamLimits

0x9e25,	// (0x00060a99) cset_list_set_pane_g3_copy1

0x9e34,	// (0x00060aa8) cset_list_set_pane_t1_copy1_ParamLimits

0x9e34,	// (0x00060aa8) cset_list_set_pane_t1_copy1

0xcc7e,	// (0x000638f2) list_highlight_pane_cp021_copy1_ParamLimits

0xcc7e,	// (0x000638f2) list_highlight_pane_cp021_copy1

0x9e49,	// (0x00060abd) cset6_slider_pane_ParamLimits

0x9e49,	// (0x00060abd) cset6_slider_pane

0x9e75,	// (0x00060ae9) main_cset6_slider_pane_g1_ParamLimits

0x9e75,	// (0x00060ae9) main_cset6_slider_pane_g1

0x9e9d,	// (0x00060b11) main_cset6_slider_pane_g2_ParamLimits

0x9e9d,	// (0x00060b11) main_cset6_slider_pane_g2

0x9ec5,	// (0x00060b39) main_cset6_slider_pane_g3_ParamLimits

0x9ec5,	// (0x00060b39) main_cset6_slider_pane_g3

0x9ed1,	// (0x00060b45) main_cset6_slider_pane_g4_ParamLimits

0x9ed1,	// (0x00060b45) main_cset6_slider_pane_g4

0x9edd,	// (0x00060b51) main_cset6_slider_pane_g5_ParamLimits

0x9edd,	// (0x00060b51) main_cset6_slider_pane_g5

0x2881,	// (0x000594f5) main_cset6_slider_pane_g7_ParamLimits

0x2881,	// (0x000594f5) main_cset6_slider_pane_g7

0x288d,	// (0x00059501) main_cset6_slider_pane_g8_ParamLimits

0x288d,	// (0x00059501) main_cset6_slider_pane_g8

0x8a55,	// (0x0005f6c9) main_cset6_slider_pane_g9_ParamLimits

0x8a55,	// (0x0005f6c9) main_cset6_slider_pane_g9

0x8a61,	// (0x0005f6d5) main_cset6_slider_pane_g10_ParamLimits

0x8a61,	// (0x0005f6d5) main_cset6_slider_pane_g10

0x8a6d,	// (0x0005f6e1) main_cset6_slider_pane_g11_ParamLimits

0x8a6d,	// (0x0005f6e1) main_cset6_slider_pane_g11

0x8a79,	// (0x0005f6ed) main_cset6_slider_pane_g12_ParamLimits

0x8a79,	// (0x0005f6ed) main_cset6_slider_pane_g12

0x8a85,	// (0x0005f6f9) main_cset6_slider_pane_g13_ParamLimits

0x8a85,	// (0x0005f6f9) main_cset6_slider_pane_g13

0x8a91,	// (0x0005f705) main_cset6_slider_pane_g14_ParamLimits

0x8a91,	// (0x0005f705) main_cset6_slider_pane_g14

0x9ee9,	// (0x00060b5d) main_cset6_slider_pane_g15_ParamLimits

0x9ee9,	// (0x00060b5d) main_cset6_slider_pane_g15

0x29ac,	// (0x00059620) main_cset6_slider_pane_g16_ParamLimits

0x29ac,	// (0x00059620) main_cset6_slider_pane_g16

0x29b8,	// (0x0005962c) main_cset6_slider_pane_g17_ParamLimits

0x29b8,	// (0x0005962c) main_cset6_slider_pane_g17

0x0011,

0xfb08,	// (0x0006677c) main_cset6_slider_pane_g_ParamLimits

0xfb08,	// (0x0006677c) main_cset6_slider_pane_g

0x9f19,	// (0x00060b8d) main_cset6_slider_pane_t1_ParamLimits

0x9f19,	// (0x00060b8d) main_cset6_slider_pane_t1

0x9f5a,	// (0x00060bce) main_cset6_slider_pane_t2_ParamLimits

0x9f5a,	// (0x00060bce) main_cset6_slider_pane_t2

0x9f85,	// (0x00060bf9) main_cset6_slider_pane_t3_ParamLimits

0x9f85,	// (0x00060bf9) main_cset6_slider_pane_t3

0x9fb0,	// (0x00060c24) main_cset6_slider_pane_t4_ParamLimits

0x9fb0,	// (0x00060c24) main_cset6_slider_pane_t4

0x9fdb,	// (0x00060c4f) main_cset6_slider_pane_t5_ParamLimits

0x9fdb,	// (0x00060c4f) main_cset6_slider_pane_t5

0xa006,	// (0x00060c7a) main_cset6_slider_pane_t7_ParamLimits

0xa006,	// (0x00060c7a) main_cset6_slider_pane_t7

0xa03c,	// (0x00060cb0) main_cset6_slider_pane_t8_ParamLimits

0xa03c,	// (0x00060cb0) main_cset6_slider_pane_t8

0xa060,	// (0x00060cd4) main_cset6_slider_pane_t9_ParamLimits

0xa060,	// (0x00060cd4) main_cset6_slider_pane_t9

0xa084,	// (0x00060cf8) main_cset6_slider_pane_t10_ParamLimits

0xa084,	// (0x00060cf8) main_cset6_slider_pane_t10

0xa0a8,	// (0x00060d1c) main_cset6_slider_pane_t11_ParamLimits

0xa0a8,	// (0x00060d1c) main_cset6_slider_pane_t11

0xa0cc,	// (0x00060d40) main_cset6_slider_pane_t14_ParamLimits

0xa0cc,	// (0x00060d40) main_cset6_slider_pane_t14

0xa105,	// (0x00060d79) main_cset6_slider_pane_t15_ParamLimits

0xa105,	// (0x00060d79) main_cset6_slider_pane_t15

0x000b,

0xfb2d,	// (0x000667a1) main_cset6_slider_pane_t_ParamLimits

0xfb2d,	// (0x000667a1) main_cset6_slider_pane_t

0x2583,	// (0x000591f7) cset_slider_pane_g1_copy1

0xa13e,	// (0x00060db2) cset_slider_pane_g2_copy1

0xa147,	// (0x00060dbb) cset_slider_pane_g3_copy1

0xc55f,	// (0x000631d3) bg_popup_sub_pane_cp011_copy1

0xd9c4,	// (0x00064638) main_cset_text_pane_g1_copy1

0x2a55,	// (0x000596c9) main_cset_text_pane_t1_copy1

0x2a63,	// (0x000596d7) main_cset_text_pane_t2_copy1

0x2a71,	// (0x000596e5) main_cset_text_pane_t3_copy1

0x2a7f,	// (0x000596f3) main_cset_text_pane_t4_copy1

0x2a8d,	// (0x00059701) main_cset_text_pane_t5_copy1

0xd9cc,	// (0x00064640) main_cset_text_pane_t6_copy1

0xd9da,	// (0x0006464e) main_cset_text_pane_t7_copy1

0x9d58,	// (0x000609cc) main_cset_text2_pane_t1_copy1

0xc5d6,	// (0x0006324a) main_ncimui_pane

0x69d2,	// (0x0005d646) popup_query_ncimui_window_ParamLimits

0x69d2,	// (0x0005d646) popup_query_ncimui_window

0x6f4a,	// (0x0005dbbe) field_cale_ev2_pane_g4_ParamLimits

0x6f4a,	// (0x0005dbbe) field_cale_ev2_pane_g4

0x7c40,	// (0x0005e8b4) cell_video_dialer_keypad_pane_g2_ParamLimits

0x7c40,	// (0x0005e8b4) cell_video_dialer_keypad_pane_g2

0x0001,

0xf811,	// (0x00066485) cell_video_dialer_keypad_pane_g_ParamLimits

0xf811,	// (0x00066485) cell_video_dialer_keypad_pane_g

0x7c58,	// (0x0005e8cc) cell_video_dialer_keypad_pane_t1

0xc55f,	// (0x000631d3) bg_popup_window_pane_cp012

0x19b4,	// (0x00058628) heading_pane_cp06

0xda06,	// (0x0006467a) ncim_query_content_pane

0xc55f,	// (0x000631d3) bg_popup_heading_pane_cp01

0xda0e,	// (0x00064682) ncim_heading_pane_t1

0xda1c,	// (0x00064690) ncim_indicator_popup_pane

0xda2e,	// (0x000646a2) ncim_query_button_pane

0xda42,	// (0x000646b6) ncim_query_content_pane_t1

0xda54,	// (0x000646c8) ncim_query_content_pane_t2

0x0005,

0xfb71,	// (0x000667e5) ncim_query_content_pane_t

0xda8e,	// (0x00064702) ncim_query_list_pane

0xdaa0,	// (0x00064714) ncim_query_popup_pane

0xda1c,	// (0x00064690) ncim_indicator_popup_pane_ParamLimits

0xa29f,	// (0x00060f13) ncim_query_content_pane_g1_ParamLimits

0xa29f,	// (0x00060f13) ncim_query_content_pane_g1

0xda42,	// (0x000646b6) ncim_query_content_pane_t1_ParamLimits

0xda54,	// (0x000646c8) ncim_query_content_pane_t2_ParamLimits

0xa2ab,	// (0x00060f1f) ncim_query_content_pane_t3_ParamLimits

0xa2ab,	// (0x00060f1f) ncim_query_content_pane_t3

0xa2d3,	// (0x00060f47) ncim_query_content_pane_t4_ParamLimits

0xa2d3,	// (0x00060f47) ncim_query_content_pane_t4

0xa2fb,	// (0x00060f6f) ncim_query_content_pane_t5_ParamLimits

0xa2fb,	// (0x00060f6f) ncim_query_content_pane_t5

0xda66,	// (0x000646da) ncim_query_content_pane_t6_ParamLimits

0xda66,	// (0x000646da) ncim_query_content_pane_t6

0xfb71,	// (0x000667e5) ncim_query_content_pane_t_ParamLimits

0xda8e,	// (0x00064702) ncim_query_list_pane_ParamLimits

0xdaa0,	// (0x00064714) ncim_query_popup_pane_ParamLimits

0xdab4,	// (0x00064728) wait_bar_pane_cp04

0xc55f,	// (0x000631d3) input_focus_pane_cp011

0xdabc,	// (0x00064730) ncim_query_popup_pane_t1

0xdaca,	// (0x0006473e) ncim_list_query_list_pane_ParamLimits

0xdaca,	// (0x0006473e) ncim_list_query_list_pane

0xc55f,	// (0x000631d3) bg_button_pane_cp027

0xdad7,	// (0x0006474b) ncim_query_button_pane_g1

0xc55f,	// (0x000631d3) list_highlight_pane_cp012

0xdae1,	// (0x00064755) ncim_list_query_list_pane_g1

0xdae9,	// (0x0006475d) ncim_list_query_list_pane_t1

0xd8ab,	// (0x0006451f) cam4_indicators_pane_g3_ParamLimits

0xd8ab,	// (0x0006451f) cam4_indicators_pane_g3

0xd926,	// (0x0006459a) vid4_indicators_pane_g5_ParamLimits

0xd926,	// (0x0006459a) vid4_indicators_pane_g5

0xef5e,	// (0x00065bd2) vid4_progress_pane_g5_ParamLimits

0xef5e,	// (0x00065bd2) vid4_progress_pane_g5

0xa18a,	// (0x00060dfe) main_ncimui_pane_g1

0xa1f3,	// (0x00060e67) ncimui_group_query_pane_ParamLimits

0xa1f3,	// (0x00060e67) ncimui_group_query_pane

0xa23b,	// (0x00060eaf) ncimui_list_pane_ParamLimits

0xa23b,	// (0x00060eaf) ncimui_list_pane

0xa262,	// (0x00060ed6) ncimui_text_pane_ParamLimits

0xa262,	// (0x00060ed6) ncimui_text_pane

0xa323,	// (0x00060f97) ncimui_text_pane_t1_ParamLimits

0xa323,	// (0x00060f97) ncimui_text_pane_t1

0xdaf7,	// (0x0006476b) ncimui_list_single_graphic_pane_ParamLimits

0xdaf7,	// (0x0006476b) ncimui_list_single_graphic_pane

0xa341,	// (0x00060fb5) ncimui_query_pane_ParamLimits

0xa341,	// (0x00060fb5) ncimui_query_pane

0xc55f,	// (0x000631d3) list_highlight_pane_cp013

0xdb07,	// (0x0006477b) ncim_list_query_list_pane_t1_copy1

0xdb15,	// (0x00064789) ncim_list_single_graphic_pane_g1

0xa354,	// (0x00060fc8) ncim_query_button_pane_cp01

0xa360,	// (0x00060fd4) ncim_query_entry_pane_ParamLimits

0xa360,	// (0x00060fd4) ncim_query_entry_pane

0xa373,	// (0x00060fe7) ncimui_query_pane_g1

0xa37f,	// (0x00060ff3) ncimui_query_pane_t1_ParamLimits

0xa37f,	// (0x00060ff3) ncimui_query_pane_t1

0xcc7e,	// (0x000638f2) input_focus_pane_cp012

0xdb1d,	// (0x00064791) ncim_query_entry_pane_t1

0xcd79,	// (0x000639ed) main_im_pane_ParamLimits

0xc5d6,	// (0x0006324a) main_mobtv_pane_ParamLimits

0xc5d6,	// (0x0006324a) main_mobtv_pane

0x9f01,	// (0x00060b75) main_cset6_slider_pane_g18_ParamLimits

0x9f01,	// (0x00060b75) main_cset6_slider_pane_g18

0x9f0d,	// (0x00060b81) main_cset6_slider_pane_g19_ParamLimits

0x9f0d,	// (0x00060b81) main_cset6_slider_pane_g19

0xcd01,	// (0x00063975) bg_main_mobtv_pane_ParamLimits

0xcd01,	// (0x00063975) bg_main_mobtv_pane

0xa398,	// (0x0006100c) main_mobtv_info_pane

0xa3a1,	// (0x00061015) main_mobtv_loading_pane_ParamLimits

0xa3a1,	// (0x00061015) main_mobtv_loading_pane

0xdb2f,	// (0x000647a3) main_mobtv_pg_channel_list_pane

0xdb39,	// (0x000647ad) main_mobtv_pg_hdr_pane

0xa3ae,	// (0x00061022) main_mobtv_programe_curr_pane_ParamLimits

0xa3ae,	// (0x00061022) main_mobtv_programe_curr_pane

0xa3bb,	// (0x0006102f) main_mobtv_programe_next_pane_ParamLimits

0xa3bb,	// (0x0006102f) main_mobtv_programe_next_pane

0xdb42,	// (0x000647b6) popup_mobtv_noti_window

0xcfd7,	// (0x00063c4b) main_tv_pg_hdr_pane_g1

0xdb4a,	// (0x000647be) main_tv_pg_hdr_pane_g2

0xdb52,	// (0x000647c6) main_tv_pg_hdr_pane_g3

0xdb5a,	// (0x000647ce) main_tv_pg_hdr_pane_g4

0xdb62,	// (0x000647d6) main_tv_pg_hdr_pane_g5

0xdb6c,	// (0x000647e0) main_tv_pg_hdr_pane_g6

0xdb76,	// (0x000647ea) main_tv_pg_hdr_pane_g7

0xdb80,	// (0x000647f4) main_tv_pg_hdr_pane_g8

0xdb8a,	// (0x000647fe) main_tv_pg_hdr_pane_g9

0xdb94,	// (0x00064808) main_tv_pg_hdr_pane_g10

0xdb9e,	// (0x00064812) main_tv_pg_hdr_pane_g11

0x000a,

0xfb7e,	// (0x000667f2) main_tv_pg_hdr_pane_g

0xdba8,	// (0x0006481c) main_tv_pg_hdr_pane_t1

0xdbb6,	// (0x0006482a) main_tv_pg_hdr_pane_t2

0xdbc4,	// (0x00064838) main_tv_pg_hdr_pane_t3

0xdbd4,	// (0x00064848) main_tv_pg_hdr_pane_t4

0xdbe4,	// (0x00064858) main_tv_pg_hdr_pane_t5

0x0004,

0xfb95,	// (0x00066809) main_tv_pg_hdr_pane_t

0xdbf4,	// (0x00064868) single_mobtv_pg_channel_pane_ParamLimits

0xdbf4,	// (0x00064868) single_mobtv_pg_channel_pane

0xdc06,	// (0x0006487a) single_mobtv_pg_channel_table_pane

0xd2f7,	// (0x00063f6b) single_mobtv_pg_channel_thumb_pane

0xdc0f,	// (0x00064883) single_tv_pg_channel_pane_g1

0xdc18,	// (0x0006488c) single_tv_pg_channel_pane_g2

0x0001,

0xfba0,	// (0x00066814) single_tv_pg_channel_pane_g

0xcce5,	// (0x00063959) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xcce5,	// (0x00063959) bg_single_mobtv_pg_channel_thumb_pane

0xdc21,	// (0x00064895) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xdc21,	// (0x00064895) single_mobtv_pg_channel_thumb_pane_g1

0xdc2f,	// (0x000648a3) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xdc2f,	// (0x000648a3) single_mobtv_pg_channel_thumb_pane_g2

0xdc3b,	// (0x000648af) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xdc3b,	// (0x000648af) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfba5,	// (0x00066819) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfba5,	// (0x00066819) single_mobtv_pg_channel_thumb_pane_g

0xdc47,	// (0x000648bb) single_mobtv_pg_channel_thumb_pane_t1

0xdc55,	// (0x000648c9) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfbac,	// (0x00066820) single_mobtv_pg_channel_thumb_pane_t

0xcfd7,	// (0x00063c4b) bg_single_mobtv_pg_channel_table_pane_g1

0xcfd7,	// (0x00063c4b) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf3be,	// (0x00066032) bg_single_mobtv_pg_channel_table_pane_g

0xdc63,	// (0x000648d7) single_mobtv_pg_channel_table_pane_t1

0xdc71,	// (0x000648e5) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfbb1,	// (0x00066825) single_mobtv_pg_channel_table_pane_t

0xa3d0,	// (0x00061044) main_mobtv_info_pane_g1_ParamLimits

0xa3d0,	// (0x00061044) main_mobtv_info_pane_g1

0xa3ee,	// (0x00061062) main_mobtv_info_pane_t1_ParamLimits

0xa3ee,	// (0x00061062) main_mobtv_info_pane_t1

0xa466,	// (0x000610da) main_mobtv_info_pane_t2_ParamLimits

0xa466,	// (0x000610da) main_mobtv_info_pane_t2

0x0002,

0xfbbb,	// (0x0006682f) main_mobtv_info_pane_t_ParamLimits

0xfbbb,	// (0x0006682f) main_mobtv_info_pane_t

0xa4f5,	// (0x00061169) wait_bar_pane_cp05

0xa507,	// (0x0006117b) main_mobtv_loading_pane_g1_ParamLimits

0xa507,	// (0x0006117b) main_mobtv_loading_pane_g1

0xa51a,	// (0x0006118e) main_mobtv_loading_pane_g2_ParamLimits

0xa51a,	// (0x0006118e) main_mobtv_loading_pane_g2

0xa526,	// (0x0006119a) main_mobtv_loading_pane_g3_ParamLimits

0xa526,	// (0x0006119a) main_mobtv_loading_pane_g3

0x0002,

0xfbc2,	// (0x00066836) main_mobtv_loading_pane_g_ParamLimits

0xfbc2,	// (0x00066836) main_mobtv_loading_pane_g

0xdc7f,	// (0x000648f3) main_mobtv_loading_pane_t1_ParamLimits

0xdc7f,	// (0x000648f3) main_mobtv_loading_pane_t1

0xdc97,	// (0x0006490b) main_mobtv_loading_pane_t2_ParamLimits

0xdc97,	// (0x0006490b) main_mobtv_loading_pane_t2

0x0001,

0xfbc9,	// (0x0006683d) main_mobtv_loading_pane_t_ParamLimits

0xfbc9,	// (0x0006683d) main_mobtv_loading_pane_t

0xa539,	// (0x000611ad) wait_bar_pane_cp06_ParamLimits

0xa539,	// (0x000611ad) wait_bar_pane_cp06

0xdcbb,	// (0x0006492f) main_mobtv_programe_curr_pane_t1

0xdcc9,	// (0x0006493d) main_mobtv_programe_curr_pane_t2

0x0001,

0xfbce,	// (0x00066842) main_mobtv_programe_curr_pane_t

0xdcd7,	// (0x0006494b) main_mobtv_programe_next_pane_t1

0xdce5,	// (0x00064959) main_mobtv_programe_next_pane_t2

0xdcf3,	// (0x00064967) main_mobtv_programe_next_pane_t3

0x0002,

0xfbd3,	// (0x00066847) main_mobtv_programe_next_pane_t

0xc55f,	// (0x000631d3) bg_popup_mobtv_noti_window_pane

0xdd01,	// (0x00064975) popup_mobtv_noti_window_g1

0xdd09,	// (0x0006497d) popup_mobtv_noti_window_t1

0xdd17,	// (0x0006498b) popup_mobtv_noti_window_t2

0x0001,

0xfbda,	// (0x0006684e) popup_mobtv_noti_window_t

0xcfd7,	// (0x00063c4b) bg_popup_mobtv_noti_window_pane_g1

0xc5e4,	// (0x00063258) sc_clock_pane

0xc5e4,	// (0x00063258) main_fs_bigclock_pane

0x97f8,	// (0x0006046c) blid2_tripm_pane_t4_ParamLimits

0x97f8,	// (0x0006046c) blid2_tripm_pane_t4

0xa548,	// (0x000611bc) sc_clock_pane_g1_ParamLimits

0xa548,	// (0x000611bc) sc_clock_pane_g1

0xa55a,	// (0x000611ce) sc_clock_pane_t1_ParamLimits

0xa55a,	// (0x000611ce) sc_clock_pane_t1

0xa57c,	// (0x000611f0) sc_clock_pane_t2_ParamLimits

0xa57c,	// (0x000611f0) sc_clock_pane_t2

0xa594,	// (0x00061208) sc_clock_pane_t3_ParamLimits

0xa594,	// (0x00061208) sc_clock_pane_t3

0x0004,

0xfbdf,	// (0x00066853) sc_clock_pane_t_ParamLimits

0xfbdf,	// (0x00066853) sc_clock_pane_t

0xb2ad,	// (0x00061f21) main_fs_bigclock_indicator_pane_ParamLimits

0xb2ad,	// (0x00061f21) main_fs_bigclock_indicator_pane

0xa63a,	// (0x000612ae) main_fs_bigclock_pane_g1_ParamLimits

0xa63a,	// (0x000612ae) main_fs_bigclock_pane_g1

0xb2b9,	// (0x00061f2d) main_fs_bigclock_pane_t1_ParamLimits

0xb2b9,	// (0x00061f2d) main_fs_bigclock_pane_t1

0xb2cb,	// (0x00061f3f) main_fs_bigclock_pane_t2_ParamLimits

0xb2cb,	// (0x00061f3f) main_fs_bigclock_pane_t2

0xb2df,	// (0x00061f53) main_fs_bigclock_pane_t3_ParamLimits

0xb2df,	// (0x00061f53) main_fs_bigclock_pane_t3

0x0002,

0xfd70,	// (0x000669e4) main_fs_bigclock_pane_t_ParamLimits

0xfd70,	// (0x000669e4) main_fs_bigclock_pane_t

0xe8a6,	// (0x0006551a) main_fs_bigclock_indicator_pane_g1

0xda36,	// (0x000646aa) ncim_query_content_pane_g2_ParamLimits

0xda36,	// (0x000646aa) ncim_query_content_pane_g2

0x0001,

0xfb6c,	// (0x000667e0) ncim_query_content_pane_g_ParamLimits

0xfb6c,	// (0x000667e0) ncim_query_content_pane_g

0xa5ad,	// (0x00061221) sc_clock_pane_t4_ParamLimits

0xa5ad,	// (0x00061221) sc_clock_pane_t4

0xc5d6,	// (0x0006324a) main_radioblah_pane

0xd820,	// (0x00064494) cell_call4_button_pane_t1_copy1_ParamLimits

0xd820,	// (0x00064494) cell_call4_button_pane_t1_copy1

0xa1a2,	// (0x00060e16) main_ncimui_pane_t1_ParamLimits

0xa1a2,	// (0x00060e16) main_ncimui_pane_t1

0xa1bc,	// (0x00060e30) main_ncimui_pane_t2_ParamLimits

0xa1bc,	// (0x00060e30) main_ncimui_pane_t2

0x0002,

0xfb65,	// (0x000667d9) main_ncimui_pane_t_ParamLimits

0xfb65,	// (0x000667d9) main_ncimui_pane_t

0xde5d,	// (0x00064ad1) main_radioblah_anim_pane_ParamLimits

0xde5d,	// (0x00064ad1) main_radioblah_anim_pane

0xde6e,	// (0x00064ae2) main_radioblah_info_pane_ParamLimits

0xde6e,	// (0x00064ae2) main_radioblah_info_pane

0xde82,	// (0x00064af6) main_radioblah_pane_t1_ParamLimits

0xde82,	// (0x00064af6) main_radioblah_pane_t1

0xde9e,	// (0x00064b12) main_radioblah_pane_t2_ParamLimits

0xde9e,	// (0x00064b12) main_radioblah_pane_t2

0x0003,

0xfc00,	// (0x00066874) main_radioblah_pane_t_ParamLimits

0xfc00,	// (0x00066874) main_radioblah_pane_t

0xa699,	// (0x0006130d) main_radioblah_rocker_ctrl_pane_ParamLimits

0xa699,	// (0x0006130d) main_radioblah_rocker_ctrl_pane

0xdee6,	// (0x00064b5a) main_radioblah_info_pane_t1_ParamLimits

0xdee6,	// (0x00064b5a) main_radioblah_info_pane_t1

0xa6f1,	// (0x00061365) main_radioblah_info_pane_t2_ParamLimits

0xa6f1,	// (0x00061365) main_radioblah_info_pane_t2

0x0003,

0xfc09,	// (0x0006687d) main_radioblah_info_pane_t_ParamLimits

0xfc09,	// (0x0006687d) main_radioblah_info_pane_t

0xcfd7,	// (0x00063c4b) main_radioblah_rocker_ctrl_pane_g1

0xa7a1,	// (0x00061415) main_radioblah_rocker_ctrl_pane_g2

0xa7a9,	// (0x0006141d) main_radioblah_rocker_ctrl_pane_g3

0xa7b1,	// (0x00061425) main_radioblah_rocker_ctrl_pane_g4

0xa7b9,	// (0x0006142d) main_radioblah_rocker_ctrl_pane_g5

0xa7c1,	// (0x00061435) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfc12,	// (0x00066886) main_radioblah_rocker_ctrl_pane_g

0x9d58,	// (0x000609cc) main_cset_text2_pane_t1_copy1_ParamLimits

0xd87e,	// (0x000644f2) cam4_image_uncrop_qvga_pane

0xd8d1,	// (0x00064545) vid4_image_uncrop_qcif_pane

0xef95,	// (0x00065c09) cam6_image_uncrop_qvga_pane_ParamLimits

0xef95,	// (0x00065c09) cam6_image_uncrop_qvga_pane

0x9c05,	// (0x00060879) vid6_image_uncrop_qcif_pane_ParamLimits

0x9c05,	// (0x00060879) vid6_image_uncrop_qcif_pane

0xc55f,	// (0x000631d3) bg_popup_preview_window_pane_cp03

0xd9e8,	// (0x0006465c) list_cset_text2_pane

0xd9f0,	// (0x00064664) main_cset6_text2_pane_g1

0xd9f8,	// (0x0006466c) main_cset6_text2_pane_t1

0xdf20,	// (0x00064b94) list_cset_text2_pane_t1_ParamLimits

0xdf20,	// (0x00064b94) list_cset_text2_pane_t1

0xc5d6,	// (0x0006324a) main_radioblah_pane_ParamLimits

0xa4e1,	// (0x00061155) main_mobtv_info_pane_t3_ParamLimits

0xa4e1,	// (0x00061155) main_mobtv_info_pane_t3

0xa687,	// (0x000612fb) main_radioblah_pane_g1

0xa6c1,	// (0x00061335) main_radioblah_info_pane_g1

0xa746,	// (0x000613ba) main_radioblah_info_pane_t3_ParamLimits

0xa746,	// (0x000613ba) main_radioblah_info_pane_t3

0x56a2,	// (0x0005c316) highlight_cell_cale_month_pane_ParamLimits

0x56a2,	// (0x0005c316) highlight_cell_cale_month_pane

0xc5e4,	// (0x00063258) main_phob_fisheye_pane

0x2194,	// (0x00058e08) scroll_pane_cp0031_ParamLimits

0x2194,	// (0x00058e08) scroll_pane_cp0031

0x9d49,	// (0x000609bd) wait_bar_pane_cp08_ParamLimits

0x9dfb,	// (0x00060a6f) cset_list_set_pane_copy1_ParamLimits

0xdf3b,	// (0x00064baf) highlight_cell_cale_month_pane_g1

0xa7c9,	// (0x0006143d) highlight_cell_cale_month_pane_t1

0x2c75,	// (0x000598e9) list_gen_pane_cp01

0x286c,	// (0x000594e0) scroll_pane_01

0xa7d7,	// (0x0006144b) list_single_double_fisheye_pane

0xa7e0,	// (0x00061454) list_double_fisheye_pane_g1_ParamLimits

0xa7e0,	// (0x00061454) list_double_fisheye_pane_g1

0xa7ec,	// (0x00061460) list_double_fisheye_pane_g2_ParamLimits

0xa7ec,	// (0x00061460) list_double_fisheye_pane_g2

0xa800,	// (0x00061474) list_double_fisheye_pane_g3_ParamLimits

0xa800,	// (0x00061474) list_double_fisheye_pane_g3

0x0004,

0xfc1f,	// (0x00066893) list_double_fisheye_pane_g_ParamLimits

0xfc1f,	// (0x00066893) list_double_fisheye_pane_g

0xa829,	// (0x0006149d) list_double_fisheye_pane_t1_ParamLimits

0xa829,	// (0x0006149d) list_double_fisheye_pane_t1

0xa844,	// (0x000614b8) list_double_fisheye_pane_t2_ParamLimits

0xa844,	// (0x000614b8) list_double_fisheye_pane_t2

0x0001,

0xfc2a,	// (0x0006689e) list_double_fisheye_pane_t_ParamLimits

0xfc2a,	// (0x0006689e) list_double_fisheye_pane_t

0xc5e4,	// (0x00063258) main_call5_pane

0xa5d8,	// (0x0006124c) sc_swipe_pane_ParamLimits

0xa5d8,	// (0x0006124c) sc_swipe_pane

0xa879,	// (0x000614ed) call5_image_pane_ParamLimits

0xa879,	// (0x000614ed) call5_image_pane

0xa896,	// (0x0006150a) call5_swipe_1_pane_ParamLimits

0xa896,	// (0x0006150a) call5_swipe_1_pane

0xa8a9,	// (0x0006151d) call5_swipe_2_pane_ParamLimits

0xa8a9,	// (0x0006151d) call5_swipe_2_pane

0xa8d4,	// (0x00061548) popup_call5_audio_first_window_ParamLimits

0xa8d4,	// (0x00061548) popup_call5_audio_first_window

0xcce5,	// (0x00063959) call5_swipe_1_pane_g1_ParamLimits

0xcce5,	// (0x00063959) call5_swipe_1_pane_g1

0xdf43,	// (0x00064bb7) call5_swipe_1_pane_g2_ParamLimits

0xdf43,	// (0x00064bb7) call5_swipe_1_pane_g2

0x0001,

0xfc2f,	// (0x000668a3) call5_swipe_1_pane_g_ParamLimits

0xfc2f,	// (0x000668a3) call5_swipe_1_pane_g

0xdf4f,	// (0x00064bc3) call5_swipe_1_pane_t1_ParamLimits

0xdf4f,	// (0x00064bc3) call5_swipe_1_pane_t1

0xcce5,	// (0x00063959) call5_swipe_2_pane_g1_ParamLimits

0xcce5,	// (0x00063959) call5_swipe_2_pane_g1

0xdf64,	// (0x00064bd8) call5_swipe_2_pane_g2_ParamLimits

0xdf64,	// (0x00064bd8) call5_swipe_2_pane_g2

0x0001,

0xfc34,	// (0x000668a8) call5_swipe_2_pane_g_ParamLimits

0xfc34,	// (0x000668a8) call5_swipe_2_pane_g

0xdf70,	// (0x00064be4) call5_swipe_2_pane_t1_ParamLimits

0xdf70,	// (0x00064be4) call5_swipe_2_pane_t1

0xdf85,	// (0x00064bf9) sc_swipe_pane_g1_ParamLimits

0xdf85,	// (0x00064bf9) sc_swipe_pane_g1

0xdf92,	// (0x00064c06) sc_swipe_pane_g2_ParamLimits

0xdf92,	// (0x00064c06) sc_swipe_pane_g2

0x0001,

0xfc39,	// (0x000668ad) sc_swipe_pane_g_ParamLimits

0xfc39,	// (0x000668ad) sc_swipe_pane_g

0xdf9e,	// (0x00064c12) sc_swipe_pane_t1_ParamLimits

0xdf9e,	// (0x00064c12) sc_swipe_pane_t1

0xc5e4,	// (0x00063258) main_cmail_launcher_pane

0xa8e5,	// (0x00061559) aid_size_cell_cmail_l_ParamLimits

0xa8e5,	// (0x00061559) aid_size_cell_cmail_l

0xa8f3,	// (0x00061567) grid_cmail_l_pane_ParamLimits

0xa8f3,	// (0x00061567) grid_cmail_l_pane

0xa90d,	// (0x00061581) cell_cmail_l_pane_ParamLimits

0xa90d,	// (0x00061581) cell_cmail_l_pane

0xdfb3,	// (0x00064c27) cell_cmail_l_pane_g1_ParamLimits

0xdfb3,	// (0x00064c27) cell_cmail_l_pane_g1

0xdfbf,	// (0x00064c33) cell_cmail_l_pane_t1_ParamLimits

0xdfbf,	// (0x00064c33) cell_cmail_l_pane_t1

0xdfd5,	// (0x00064c49) cell_cmail_l_pane_t2_ParamLimits

0xdfd5,	// (0x00064c49) cell_cmail_l_pane_t2

0x0001,

0xfc3e,	// (0x000668b2) cell_cmail_l_pane_t_ParamLimits

0xfc3e,	// (0x000668b2) cell_cmail_l_pane_t

0xcc7e,	// (0x000638f2) grid_highlight_pane_cp018_ParamLimits

0xcc7e,	// (0x000638f2) grid_highlight_pane_cp018

0x3cb0,	// (0x0005a924) main2_pane_ParamLimits

0x3cb0,	// (0x0005a924) main2_pane

0xce2c,	// (0x00063aa0) popup_sp_fs_action_menu_bg_pane_g1

0xce34,	// (0x00063aa8) popup_sp_fs_action_menu_bg_pane_g2

0xce3c,	// (0x00063ab0) popup_sp_fs_action_menu_bg_pane_g3

0xce44,	// (0x00063ab8) popup_sp_fs_action_menu_bg_pane_g4

0xce4c,	// (0x00063ac0) popup_sp_fs_action_menu_bg_pane_g5

0xce54,	// (0x00063ac8) popup_sp_fs_action_menu_bg_pane_g6

0xce5c,	// (0x00063ad0) popup_sp_fs_action_menu_bg_pane_g7

0xce64,	// (0x00063ad8) popup_sp_fs_action_menu_bg_pane_g8

0xce6c,	// (0x00063ae0) popup_sp_fs_action_menu_bg_pane_g9

0xce74,	// (0x00063ae8) popup_sp_fs_action_menu_bg_pane_g10

0xce74,	// (0x00063ae8) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf12b,	// (0x00065d9f) popup_sp_fs_action_menu_bg_pane_g

0xcce5,	// (0x00063959) list_medium_line_x2_t3_g3_g1_ParamLimits

0xcce5,	// (0x00063959) list_medium_line_x2_t3_g3_g1

0xcce5,	// (0x00063959) list_medium_line_x2_t3_g3_g2_ParamLimits

0xcce5,	// (0x00063959) list_medium_line_x2_t3_g3_g2

0xcce5,	// (0x00063959) list_medium_line_x2_t3_g3_g3_ParamLimits

0xcce5,	// (0x00063959) list_medium_line_x2_t3_g3_g3

0x0002,

0xf1d9,	// (0x00065e4d) list_medium_line_x2_t3_g3_g_ParamLimits

0xf1d9,	// (0x00065e4d) list_medium_line_x2_t3_g3_g

0xcfa9,	// (0x00063c1d) list_medium_line_x2_t3_g3_t1_ParamLimits

0xcfa9,	// (0x00063c1d) list_medium_line_x2_t3_g3_t1

0xcfa9,	// (0x00063c1d) list_medium_line_x2_t3_g3_t2_ParamLimits

0xcfa9,	// (0x00063c1d) list_medium_line_x2_t3_g3_t2

0xcfa9,	// (0x00063c1d) list_medium_line_x2_t3_g3_t3_ParamLimits

0xcfa9,	// (0x00063c1d) list_medium_line_x2_t3_g3_t3

0x0002,

0xf1e0,	// (0x00065e54) list_medium_line_x2_t3_g3_t_ParamLimits

0xf1e0,	// (0x00065e54) list_medium_line_x2_t3_g3_t

0xcce5,	// (0x00063959) list_medium_line_x2_t3_g2_g1_ParamLimits

0xcce5,	// (0x00063959) list_medium_line_x2_t3_g2_g1

0xcce5,	// (0x00063959) list_medium_line_x2_t3_g2_g2_ParamLimits

0xcce5,	// (0x00063959) list_medium_line_x2_t3_g2_g2

0x0001,

0xf1e7,	// (0x00065e5b) list_medium_line_x2_t3_g2_g_ParamLimits

0xf1e7,	// (0x00065e5b) list_medium_line_x2_t3_g2_g

0xcfa9,	// (0x00063c1d) list_medium_line_x2_t3_g2_t1_ParamLimits

0xcfa9,	// (0x00063c1d) list_medium_line_x2_t3_g2_t1

0xcfa9,	// (0x00063c1d) list_medium_line_x2_t3_g2_t2_ParamLimits

0xcfa9,	// (0x00063c1d) list_medium_line_x2_t3_g2_t2

0xcfa9,	// (0x00063c1d) list_medium_line_x2_t3_g2_t3_ParamLimits

0xcfa9,	// (0x00063c1d) list_medium_line_x2_t3_g2_t3

0x0002,

0xf1e0,	// (0x00065e54) list_medium_line_x2_t3_g2_t_ParamLimits

0xf1e0,	// (0x00065e54) list_medium_line_x2_t3_g2_t

0xcce5,	// (0x00063959) list_medium_line_x2_t4_g4_g1_ParamLimits

0xcce5,	// (0x00063959) list_medium_line_x2_t4_g4_g1

0xcce5,	// (0x00063959) list_medium_line_x2_t4_g4_g2_ParamLimits

0xcce5,	// (0x00063959) list_medium_line_x2_t4_g4_g2

0xcce5,	// (0x00063959) list_medium_line_x2_t4_g4_g3_ParamLimits

0xcce5,	// (0x00063959) list_medium_line_x2_t4_g4_g3

0xcce5,	// (0x00063959) list_medium_line_x2_t4_g4_g4_ParamLimits

0xcce5,	// (0x00063959) list_medium_line_x2_t4_g4_g4

0x0003,

0xf1ec,	// (0x00065e60) list_medium_line_x2_t4_g4_g_ParamLimits

0xf1ec,	// (0x00065e60) list_medium_line_x2_t4_g4_g

0xcfa9,	// (0x00063c1d) list_medium_line_x2_t4_g4_t1_ParamLimits

0xcfa9,	// (0x00063c1d) list_medium_line_x2_t4_g4_t1

0xcfa9,	// (0x00063c1d) list_medium_line_x2_t4_g4_t2_ParamLimits

0xcfa9,	// (0x00063c1d) list_medium_line_x2_t4_g4_t2

0xcfa9,	// (0x00063c1d) list_medium_line_x2_t4_g4_t3_ParamLimits

0xcfa9,	// (0x00063c1d) list_medium_line_x2_t4_g4_t3

0xcfa9,	// (0x00063c1d) list_medium_line_x2_t4_g4_t4_ParamLimits

0xcfa9,	// (0x00063c1d) list_medium_line_x2_t4_g4_t4

0x0003,

0xf1f5,	// (0x00065e69) list_medium_line_x2_t4_g4_t_ParamLimits

0xf1f5,	// (0x00065e69) list_medium_line_x2_t4_g4_t

0xcce5,	// (0x00063959) list_medium_line_x2_t2_g4_g1_ParamLimits

0xcce5,	// (0x00063959) list_medium_line_x2_t2_g4_g1

0xcce5,	// (0x00063959) list_medium_line_x2_t2_g4_g2_ParamLimits

0xcce5,	// (0x00063959) list_medium_line_x2_t2_g4_g2

0xcce5,	// (0x00063959) list_medium_line_x2_t2_g4_g3_ParamLimits

0xcce5,	// (0x00063959) list_medium_line_x2_t2_g4_g3

0xcce5,	// (0x00063959) list_medium_line_x2_t2_g4_g4_ParamLimits

0xcce5,	// (0x00063959) list_medium_line_x2_t2_g4_g4

0x0003,

0xf1ec,	// (0x00065e60) list_medium_line_x2_t2_g4_g_ParamLimits

0xf1ec,	// (0x00065e60) list_medium_line_x2_t2_g4_g

0xcfa9,	// (0x00063c1d) list_medium_line_x2_t2_g4_t1_ParamLimits

0xcfa9,	// (0x00063c1d) list_medium_line_x2_t2_g4_t1

0xcfa9,	// (0x00063c1d) list_medium_line_x2_t2_g4_t2_ParamLimits

0xcfa9,	// (0x00063c1d) list_medium_line_x2_t2_g4_t2

0x0001,

0xf1bc,	// (0x00065e30) list_medium_line_x2_t2_g4_t_ParamLimits

0xf1bc,	// (0x00065e30) list_medium_line_x2_t2_g4_t

0xcce5,	// (0x00063959) list_medium_line_x2_t2_g3_g1_ParamLimits

0xcce5,	// (0x00063959) list_medium_line_x2_t2_g3_g1

0xcce5,	// (0x00063959) list_medium_line_x2_t2_g3_g2_ParamLimits

0xcce5,	// (0x00063959) list_medium_line_x2_t2_g3_g2

0xcce5,	// (0x00063959) list_medium_line_x2_t2_g3_g3_ParamLimits

0xcce5,	// (0x00063959) list_medium_line_x2_t2_g3_g3

0x0002,

0xf1d9,	// (0x00065e4d) list_medium_line_x2_t2_g3_g_ParamLimits

0xf1d9,	// (0x00065e4d) list_medium_line_x2_t2_g3_g

0xcfa9,	// (0x00063c1d) list_medium_line_x2_t2_g3_t1_ParamLimits

0xcfa9,	// (0x00063c1d) list_medium_line_x2_t2_g3_t1

0xcfa9,	// (0x00063c1d) list_medium_line_x2_t2_g3_t2_ParamLimits

0xcfa9,	// (0x00063c1d) list_medium_line_x2_t2_g3_t2

0x0001,

0xf1bc,	// (0x00065e30) list_medium_line_x2_t2_g3_t_ParamLimits

0xf1bc,	// (0x00065e30) list_medium_line_x2_t2_g3_t

0x5807,	// (0x0005c47b) main_sp_fs_list_pane_ParamLimits

0x5807,	// (0x0005c47b) main_sp_fs_list_pane

0x29ea,	// (0x0005965e) sp_fs_scroll_pane_ParamLimits

0x29ea,	// (0x0005965e) sp_fs_scroll_pane

0x0233,	// (0x00056ea7) list_medium_line_x2_t3_t1

0x0233,	// (0x00056ea7) list_medium_line_x2_t3_t2

0x0233,	// (0x00056ea7) list_medium_line_x2_t3_t3

0x0002,

0xf2a2,	// (0x00065f16) list_medium_line_x2_t3_t

0x0233,	// (0x00056ea7) list_medium_line_x3_t4_t1

0x0233,	// (0x00056ea7) list_medium_line_x3_t4_t2

0x0233,	// (0x00056ea7) list_medium_line_x3_t4_t3

0x0233,	// (0x00056ea7) list_medium_line_x3_t4_t4

0x0003,

0xf2a9,	// (0x00065f1d) list_medium_line_x3_t4_t

0x0233,	// (0x00056ea7) list_medium_line_x4_t5_t1

0x0233,	// (0x00056ea7) list_medium_line_x4_t5_t2

0x0233,	// (0x00056ea7) list_medium_line_x4_t5_t3

0x0233,	// (0x00056ea7) list_medium_line_x4_t5_t4

0x0233,	// (0x00056ea7) list_medium_line_x4_t5_t5

0x0004,

0xf2b2,	// (0x00065f26) list_medium_line_x4_t5_t

0xcce5,	// (0x00063959) list_medium_line_t4_g4_g1_ParamLimits

0xcce5,	// (0x00063959) list_medium_line_t4_g4_g1

0xcce5,	// (0x00063959) list_medium_line_t4_g4_g2_ParamLimits

0xcce5,	// (0x00063959) list_medium_line_t4_g4_g2

0xcce5,	// (0x00063959) list_medium_line_t4_g4_g3_ParamLimits

0xcce5,	// (0x00063959) list_medium_line_t4_g4_g3

0xcce5,	// (0x00063959) list_medium_line_t4_g4_g4_ParamLimits

0xcce5,	// (0x00063959) list_medium_line_t4_g4_g4

0x0003,

0xf1ec,	// (0x00065e60) list_medium_line_t4_g4_g_ParamLimits

0xf1ec,	// (0x00065e60) list_medium_line_t4_g4_g

0xcfa9,	// (0x00063c1d) list_medium_line_t4_g4_t1_ParamLimits

0xcfa9,	// (0x00063c1d) list_medium_line_t4_g4_t1

0xcfa9,	// (0x00063c1d) list_medium_line_t4_g4_t2_ParamLimits

0xcfa9,	// (0x00063c1d) list_medium_line_t4_g4_t2

0xcfa9,	// (0x00063c1d) list_medium_line_t4_g4_t3_ParamLimits

0xcfa9,	// (0x00063c1d) list_medium_line_t4_g4_t3

0xcfa9,	// (0x00063c1d) list_medium_line_t4_g4_t4_ParamLimits

0xcfa9,	// (0x00063c1d) list_medium_line_t4_g4_t4

0x0003,

0xf1f5,	// (0x00065e69) list_medium_line_t4_g4_t_ParamLimits

0xf1f5,	// (0x00065e69) list_medium_line_t4_g4_t

0x58b0,	// (0x0005c524) chi_dic_find_pane_g1

0x67a2,	// (0x0005d416) main_tport_pane

0x0233,	// (0x00056ea7) list_medium_line_plain_t1

0xcce5,	// (0x00063959) list_medium_line_t2_g2_g1_ParamLimits

0xcce5,	// (0x00063959) list_medium_line_t2_g2_g1

0xcce5,	// (0x00063959) list_medium_line_t2_g2_g2_ParamLimits

0xcce5,	// (0x00063959) list_medium_line_t2_g2_g2

0x0001,

0xf1e7,	// (0x00065e5b) list_medium_line_t2_g2_g_ParamLimits

0xf1e7,	// (0x00065e5b) list_medium_line_t2_g2_g

0xcfa9,	// (0x00063c1d) list_medium_line_t2_g2_t1_ParamLimits

0xcfa9,	// (0x00063c1d) list_medium_line_t2_g2_t1

0xcfa9,	// (0x00063c1d) list_medium_line_t2_g2_t2_ParamLimits

0xcfa9,	// (0x00063c1d) list_medium_line_t2_g2_t2

0x0001,

0xf1bc,	// (0x00065e30) list_medium_line_t2_g2_t_ParamLimits

0xf1bc,	// (0x00065e30) list_medium_line_t2_g2_t

0x94c9,	// (0x0006013d) aid_sp_fs_list_icon_a_sm

0x94d1,	// (0x00060145) aid_sp_fs_list_icon_d

0x94d9,	// (0x0006014d) aid_sp_fs_text_primary

0x94e2,	// (0x00060156) aid_sp_fs_text_secondary

0xc55f,	// (0x000631d3) list_medium_line

0xc55f,	// (0x000631d3) list_medium_line_g2

0xc55f,	// (0x000631d3) list_medium_line_g3

0xc55f,	// (0x000631d3) list_medium_line_plain

0xc55f,	// (0x000631d3) list_medium_line_plain_t2

0xc55f,	// (0x000631d3) list_medium_line_plain_t3

0xc55f,	// (0x000631d3) list_medium_line_right_icon

0xc55f,	// (0x000631d3) list_medium_line_right_iconx2

0xc55f,	// (0x000631d3) list_medium_line_t2

0xc55f,	// (0x000631d3) list_medium_line_t2_g2

0xc55f,	// (0x000631d3) list_medium_line_t2_g3

0xc55f,	// (0x000631d3) list_medium_line_t2_right_icon

0xc55f,	// (0x000631d3) list_medium_line_t2_right_iconx2

0xc55f,	// (0x000631d3) list_medium_line_t3

0xc55f,	// (0x000631d3) list_medium_line_t3_g2

0xc55f,	// (0x000631d3) list_medium_line_t3_g3

0xc55f,	// (0x000631d3) list_medium_line_t3_right_iconx2

0xc55f,	// (0x000631d3) list_medium_line_t4_g4

0xc55f,	// (0x000631d3) list_medium_line_x2

0xc55f,	// (0x000631d3) list_medium_line_x2_t2_g2

0xc55f,	// (0x000631d3) list_medium_line_x2_t2_g3

0xc55f,	// (0x000631d3) list_medium_line_x2_t2_g4

0xc55f,	// (0x000631d3) list_medium_line_x2_t3

0xc55f,	// (0x000631d3) list_medium_line_x2_t3_g2

0xc55f,	// (0x000631d3) list_medium_line_x2_t3_g3

0xc55f,	// (0x000631d3) list_medium_line_x2_t3_g4

0xc55f,	// (0x000631d3) list_medium_line_x2_t4_g2

0xc55f,	// (0x000631d3) list_medium_line_x2_t4_g4

0xc55f,	// (0x000631d3) list_medium_line_x3

0xc55f,	// (0x000631d3) list_medium_line_x3_t4

0xc55f,	// (0x000631d3) list_medium_line_x3_t4_g4

0xc55f,	// (0x000631d3) list_medium_line_x4_t4

0xc55f,	// (0x000631d3) list_medium_line_x4_t4_g7

0xc55f,	// (0x000631d3) list_medium_line_x4_t5

0x94eb,	// (0x0006015f) list_single_fs_dyc_pane_ParamLimits

0x94eb,	// (0x0006015f) list_single_fs_dyc_pane

0xcce5,	// (0x00063959) list_medium_line_x4_t4_g7_g1_ParamLimits

0xcce5,	// (0x00063959) list_medium_line_x4_t4_g7_g1

0xcce5,	// (0x00063959) list_medium_line_x4_t4_g7_g2_ParamLimits

0xcce5,	// (0x00063959) list_medium_line_x4_t4_g7_g2

0xcce5,	// (0x00063959) list_medium_line_x4_t4_g7_g3_ParamLimits

0xcce5,	// (0x00063959) list_medium_line_x4_t4_g7_g3

0xcce5,	// (0x00063959) list_medium_line_x4_t4_g7_g4_ParamLimits

0xcce5,	// (0x00063959) list_medium_line_x4_t4_g7_g4

0xcce5,	// (0x00063959) list_medium_line_x4_t4_g7_g5_ParamLimits

0xcce5,	// (0x00063959) list_medium_line_x4_t4_g7_g5

0xcce5,	// (0x00063959) list_medium_line_x4_t4_g7_g6_ParamLimits

0xcce5,	// (0x00063959) list_medium_line_x4_t4_g7_g6

0xccf3,	// (0x00063967) list_medium_line_x4_t4_g7_g7_ParamLimits

0xccf3,	// (0x00063967) list_medium_line_x4_t4_g7_g7

0x0006,

0xfb46,	// (0x000667ba) list_medium_line_x4_t4_g7_g_ParamLimits

0xfb46,	// (0x000667ba) list_medium_line_x4_t4_g7_g

0xcfa9,	// (0x00063c1d) list_medium_line_x4_t4_g7_t1_ParamLimits

0xcfa9,	// (0x00063c1d) list_medium_line_x4_t4_g7_t1

0xcfa9,	// (0x00063c1d) list_medium_line_x4_t4_g7_t2_ParamLimits

0xcfa9,	// (0x00063c1d) list_medium_line_x4_t4_g7_t2

0xcfa9,	// (0x00063c1d) list_medium_line_x4_t4_g7_t3_ParamLimits

0xcfa9,	// (0x00063c1d) list_medium_line_x4_t4_g7_t3

0xd429,	// (0x0006409d) list_medium_line_x4_t4_g7_t4_ParamLimits

0xd429,	// (0x0006409d) list_medium_line_x4_t4_g7_t4

0xd429,	// (0x0006409d) list_medium_line_x4_t4_g7_t5_ParamLimits

0xd429,	// (0x0006409d) list_medium_line_x4_t4_g7_t5

0x0004,

0xfb55,	// (0x000667c9) list_medium_line_x4_t4_g7_t_ParamLimits

0xfb55,	// (0x000667c9) list_medium_line_x4_t4_g7_t

0xa150,	// (0x00060dc4) list_single_dyc_row_pane_ParamLimits

0xa150,	// (0x00060dc4) list_single_dyc_row_pane

0xa866,	// (0x000614da) call5_gesture_pane_ParamLimits

0xa866,	// (0x000614da) call5_gesture_pane

0xa8bc,	// (0x00061530) call5_windows_pane_ParamLimits

0xa8bc,	// (0x00061530) call5_windows_pane

0xa927,	// (0x0006159b) call5_swipe_1_pane_cp_ParamLimits

0xa927,	// (0x0006159b) call5_swipe_1_pane_cp

0xa933,	// (0x000615a7) call5_swipe_2_pane_cp_ParamLimits

0xa933,	// (0x000615a7) call5_swipe_2_pane_cp

0xcf97,	// (0x00063c0b) call5_image_pane_cp

0xa93f,	// (0x000615b3) popup_call5_audio_first_window_cp_ParamLimits

0xa93f,	// (0x000615b3) popup_call5_audio_first_window_cp

0xdf85,	// (0x00064bf9) call5_swipe_1_pane_g1_cp_ParamLimits

0xdf85,	// (0x00064bf9) call5_swipe_1_pane_g1_cp

0xdff2,	// (0x00064c66) call5_swipe_1_pane_g2_cp

0xdf9e,	// (0x00064c12) call5_swipe_1_pane_t1_cp_ParamLimits

0xdf9e,	// (0x00064c12) call5_swipe_1_pane_t1_cp

0xdf85,	// (0x00064bf9) call5_swipe_2_pane_g1_cp_ParamLimits

0xdf85,	// (0x00064bf9) call5_swipe_2_pane_g1_cp

0xdffa,	// (0x00064c6e) call5_swipe_2_pane_g2_cp

0xe002,	// (0x00064c76) call5_swipe_2_pane_t1_cp_ParamLimits

0xe002,	// (0x00064c76) call5_swipe_2_pane_t1_cp

0xcc7e,	// (0x000638f2) main_sp_fs_email_pane

0xe017,	// (0x00064c8b) main_sp_fs_listscroll_pane_te

0xa94d,	// (0x000615c1) popup_sp_fs_action_menu_pane_ParamLimits

0xa94d,	// (0x000615c1) popup_sp_fs_action_menu_pane

0xcfd7,	// (0x00063c4b) bg_sp_fs_ctrlbar_pane_g1

0xe020,	// (0x00064c94) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xe029,	// (0x00064c9d) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0x1a2d,	// (0x000586a1) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xcfd7,	// (0x00063c4b) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfc43,	// (0x000668b7) bg_sp_fs_ctrlbar_ddmenu_pane_g

0x07bc,	// (0x00057430) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0x07bc,	// (0x00057430) bg_sp_fs_ctrlbar_ddmenu_pane

0xe032,	// (0x00064ca6) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xe032,	// (0x00064ca6) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xe03e,	// (0x00064cb2) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xe03e,	// (0x00064cb2) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfc4c,	// (0x000668c0) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfc4c,	// (0x000668c0) main_sp_fs_ctrlbar_ddmenu_pane_g

0xe04a,	// (0x00064cbe) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xe04a,	// (0x00064cbe) main_sp_fs_ctrlbar_ddmenu_pane_t1

0xcfd7,	// (0x00063c4b) list_medium_line_t2_right_icon_g1

0x0233,	// (0x00056ea7) list_medium_line_t2_right_icon_t1

0x0233,	// (0x00056ea7) list_medium_line_t2_right_icon_t2

0x0001,

0xfc51,	// (0x000668c5) list_medium_line_t2_right_icon_t

0x1a58,	// (0x000586cc) bg_sp_fs_ctrlbar_pane_ParamLimits

0x1a58,	// (0x000586cc) bg_sp_fs_ctrlbar_pane

0xa9d7,	// (0x0006164b) main_sp_fs_ctrlbar_button_pane_cp01

0xa9e1,	// (0x00061655) main_sp_fs_ctrlbar_ddmenu_pane

0xe09c,	// (0x00064d10) main_sp_fs_ctrlbar_pane_g1

0xe0a8,	// (0x00064d1c) main_sp_fs_ctrlbar_pane_g2

0x0003,

0xfc56,	// (0x000668ca) main_sp_fs_ctrlbar_pane_g

0xaa1f,	// (0x00061693) main_sp_fs_ctrlbar_pane_t1

0xaa5e,	// (0x000616d2) main_sp_fs_ctrlbar_pane

0xaa82,	// (0x000616f6) main_sp_fs_listscroll_pane_te_cp01

0xaaa2,	// (0x00061716) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0xaaa2,	// (0x00061716) popup_sp_fs_action_menu_pane_cp01

0xcc7e,	// (0x000638f2) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0xcc7e,	// (0x000638f2) bg_sp_fs_highlight_list_pane_cp01

0xe0cf,	// (0x00064d43) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0xe0cf,	// (0x00064d43) sp_fs_action_menu_list_gene_pane_g1

0xe0de,	// (0x00064d52) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xe0de,	// (0x00064d52) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfc64,	// (0x000668d8) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfc64,	// (0x000668d8) sp_fs_action_menu_list_gene_pane_g

0xe0eb,	// (0x00064d5f) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0xe0eb,	// (0x00064d5f) sp_fs_action_menu_list_gene_pane_t1

0xe103,	// (0x00064d77) sp_fs_action_menu_list_gene_pane_ParamLimits

0xe103,	// (0x00064d77) sp_fs_action_menu_list_gene_pane

0xe122,	// (0x00064d96) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xe122,	// (0x00064d96) popup_sp_fs_action_menu_bg_pane

0xe130,	// (0x00064da4) sp_fs_action_menu_list_pane_ParamLimits

0xe130,	// (0x00064da4) sp_fs_action_menu_list_pane

0xaac7,	// (0x0006173b) sp_fs_scroll_pane_cp01_ParamLimits

0xaac7,	// (0x0006173b) sp_fs_scroll_pane_cp01

0x0233,	// (0x00056ea7) list_medium_line_plain_t2_t1

0x0233,	// (0x00056ea7) list_medium_line_plain_t2_t2

0x0001,

0xfc51,	// (0x000668c5) list_medium_line_plain_t2_t

0x0233,	// (0x00056ea7) list_medium_line_plain_t3_t1

0x0233,	// (0x00056ea7) list_medium_line_plain_t3_t2

0x0233,	// (0x00056ea7) list_medium_line_plain_t3_t3

0x0002,

0xf2a2,	// (0x00065f16) list_medium_line_plain_t3_t

0xcce5,	// (0x00063959) list_medium_line_x2_t2_g2_g1_ParamLimits

0xcce5,	// (0x00063959) list_medium_line_x2_t2_g2_g1

0xcce5,	// (0x00063959) list_medium_line_x2_t2_g2_g2_ParamLimits

0xcce5,	// (0x00063959) list_medium_line_x2_t2_g2_g2

0x0001,

0xf1e7,	// (0x00065e5b) list_medium_line_x2_t2_g2_g_ParamLimits

0xf1e7,	// (0x00065e5b) list_medium_line_x2_t2_g2_g

0xcfa9,	// (0x00063c1d) list_medium_line_x2_t2_g2_t1_ParamLimits

0xcfa9,	// (0x00063c1d) list_medium_line_x2_t2_g2_t1

0xcfa9,	// (0x00063c1d) list_medium_line_x2_t2_g2_t2_ParamLimits

0xcfa9,	// (0x00063c1d) list_medium_line_x2_t2_g2_t2

0x0001,

0xf1bc,	// (0x00065e30) list_medium_line_x2_t2_g2_t_ParamLimits

0xf1bc,	// (0x00065e30) list_medium_line_x2_t2_g2_t

0xcce5,	// (0x00063959) list_medium_line_x2_t4_g2_g1_ParamLimits

0xcce5,	// (0x00063959) list_medium_line_x2_t4_g2_g1

0xcce5,	// (0x00063959) list_medium_line_x2_t4_g2_g2_ParamLimits

0xcce5,	// (0x00063959) list_medium_line_x2_t4_g2_g2

0x0001,

0xf1e7,	// (0x00065e5b) list_medium_line_x2_t4_g2_g_ParamLimits

0xf1e7,	// (0x00065e5b) list_medium_line_x2_t4_g2_g

0xcfa9,	// (0x00063c1d) list_medium_line_x2_t4_g2_t1_ParamLimits

0xcfa9,	// (0x00063c1d) list_medium_line_x2_t4_g2_t1

0xcfa9,	// (0x00063c1d) list_medium_line_x2_t4_g2_t2_ParamLimits

0xcfa9,	// (0x00063c1d) list_medium_line_x2_t4_g2_t2

0xcfa9,	// (0x00063c1d) list_medium_line_x2_t4_g2_t3_ParamLimits

0xcfa9,	// (0x00063c1d) list_medium_line_x2_t4_g2_t3

0xcfa9,	// (0x00063c1d) list_medium_line_x2_t4_g2_t4_ParamLimits

0xcfa9,	// (0x00063c1d) list_medium_line_x2_t4_g2_t4

0x0003,

0xf1f5,	// (0x00065e69) list_medium_line_x2_t4_g2_t_ParamLimits

0xf1f5,	// (0x00065e69) list_medium_line_x2_t4_g2_t

0xcfd7,	// (0x00063c4b) list_medium_line_t3_right_iconx2_g1

0xcfd7,	// (0x00063c4b) list_medium_line_t3_right_iconx2_g2

0xcfd7,	// (0x00063c4b) list_medium_line_t3_right_iconx2_g3

0x0002,

0xf3c3,	// (0x00066037) list_medium_line_t3_right_iconx2_g

0x0233,	// (0x00056ea7) list_medium_line_t3_right_iconx2_t1

0x0233,	// (0x00056ea7) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfc51,	// (0x000668c5) list_medium_line_t3_right_iconx2_t

0xcce5,	// (0x00063959) list_medium_line_x3_t4_g4_g1_ParamLimits

0xcce5,	// (0x00063959) list_medium_line_x3_t4_g4_g1

0xcce5,	// (0x00063959) list_medium_line_x3_t4_g4_g2_ParamLimits

0xcce5,	// (0x00063959) list_medium_line_x3_t4_g4_g2

0xcce5,	// (0x00063959) list_medium_line_x3_t4_g4_g3_ParamLimits

0xcce5,	// (0x00063959) list_medium_line_x3_t4_g4_g3

0xcce5,	// (0x00063959) list_medium_line_x3_t4_g4_g4_ParamLimits

0xcce5,	// (0x00063959) list_medium_line_x3_t4_g4_g4

0x0003,

0xf1ec,	// (0x00065e60) list_medium_line_x3_t4_g4_g_ParamLimits

0xf1ec,	// (0x00065e60) list_medium_line_x3_t4_g4_g

0xcfa9,	// (0x00063c1d) list_medium_line_x3_t4_g4_t1_ParamLimits

0xcfa9,	// (0x00063c1d) list_medium_line_x3_t4_g4_t1

0xcfa9,	// (0x00063c1d) list_medium_line_x3_t4_g4_t2_ParamLimits

0xcfa9,	// (0x00063c1d) list_medium_line_x3_t4_g4_t2

0xcfa9,	// (0x00063c1d) list_medium_line_x3_t4_g4_t3_ParamLimits

0xcfa9,	// (0x00063c1d) list_medium_line_x3_t4_g4_t3

0xcfa9,	// (0x00063c1d) list_medium_line_x3_t4_g4_t4_ParamLimits

0xcfa9,	// (0x00063c1d) list_medium_line_x3_t4_g4_t4

0x0003,

0xf1f5,	// (0x00065e69) list_medium_line_x3_t4_g4_t_ParamLimits

0xf1f5,	// (0x00065e69) list_medium_line_x3_t4_g4_t

0xaaed,	// (0x00061761) list_single_dyc_row_text_pane_t1_ParamLimits

0xaaed,	// (0x00061761) list_single_dyc_row_text_pane_t1

0xab36,	// (0x000617aa) list_single_dyc_row_text_pane_t2_ParamLimits

0xab36,	// (0x000617aa) list_single_dyc_row_text_pane_t2

0xe150,	// (0x00064dc4) list_single_dyc_row_text_pane_t3_ParamLimits

0xe150,	// (0x00064dc4) list_single_dyc_row_text_pane_t3

0x0005,

0xfc69,	// (0x000668dd) list_single_dyc_row_text_pane_t_ParamLimits

0xfc69,	// (0x000668dd) list_single_dyc_row_text_pane_t

0xe174,	// (0x00064de8) list_single_dyc_row_pane_g1_ParamLimits

0xe174,	// (0x00064de8) list_single_dyc_row_pane_g1

0xe180,	// (0x00064df4) list_single_dyc_row_pane_g2_ParamLimits

0xe180,	// (0x00064df4) list_single_dyc_row_pane_g2

0xe18c,	// (0x00064e00) list_single_dyc_row_pane_g3_ParamLimits

0xe18c,	// (0x00064e00) list_single_dyc_row_pane_g3

0xe198,	// (0x00064e0c) list_single_dyc_row_pane_g4_ParamLimits

0xe198,	// (0x00064e0c) list_single_dyc_row_pane_g4

0x0003,

0xfc76,	// (0x000668ea) list_single_dyc_row_pane_g_ParamLimits

0xfc76,	// (0x000668ea) list_single_dyc_row_pane_g

0xe1a4,	// (0x00064e18) list_single_dyc_row_text_pane_ParamLimits

0xe1a4,	// (0x00064e18) list_single_dyc_row_text_pane

0xc55f,	// (0x000631d3) bg_sp_fs_scroll_pane

0xe1c3,	// (0x00064e37) thumb_sp_fs_scroll_pane

0xcce5,	// (0x00063959) list_medium_line_g1_ParamLimits

0xcce5,	// (0x00063959) list_medium_line_g1

0xcfa9,	// (0x00063c1d) list_medium_line_t1_ParamLimits

0xcfa9,	// (0x00063c1d) list_medium_line_t1

0xcce5,	// (0x00063959) list_medium_line_x2_g1_ParamLimits

0xcce5,	// (0x00063959) list_medium_line_x2_g1

0xcce5,	// (0x00063959) list_medium_line_x2_g2_ParamLimits

0xcce5,	// (0x00063959) list_medium_line_x2_g2

0x0001,

0xf1e7,	// (0x00065e5b) list_medium_line_x2_g_ParamLimits

0xf1e7,	// (0x00065e5b) list_medium_line_x2_g

0xcfa9,	// (0x00063c1d) list_medium_line_x2_t1_ParamLimits

0xcfa9,	// (0x00063c1d) list_medium_line_x2_t1

0xcce5,	// (0x00063959) list_medium_line_x3_g1_ParamLimits

0xcce5,	// (0x00063959) list_medium_line_x3_g1

0x2a1b,	// (0x0005968f) list_medium_line_x3_g2_ParamLimits

0x2a1b,	// (0x0005968f) list_medium_line_x3_g2

0x0001,

0xfc7f,	// (0x000668f3) list_medium_line_x3_g_ParamLimits

0xfc7f,	// (0x000668f3) list_medium_line_x3_g

0xe1cc,	// (0x00064e40) list_medium_line_x3_t1_ParamLimits

0xe1cc,	// (0x00064e40) list_medium_line_x3_t1

0xe1e0,	// (0x00064e54) thumb_sp_fs_scroll_pane_g1

0xe1e9,	// (0x00064e5d) thumb_sp_fs_scroll_pane_g2

0xe1f2,	// (0x00064e66) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfc84,	// (0x000668f8) thumb_sp_fs_scroll_pane_g

0xe1e0,	// (0x00064e54) bg_sp_fs_scroll_pane_g1

0xe1e9,	// (0x00064e5d) bg_sp_fs_scroll_pane_g2

0xe1f2,	// (0x00064e66) bg_sp_fs_scroll_pane_g3

0x0002,

0xfc84,	// (0x000668f8) bg_sp_fs_scroll_pane_g

0xcce5,	// (0x00063959) list_medium_line_x2_t3_g4_g1_ParamLimits

0xcce5,	// (0x00063959) list_medium_line_x2_t3_g4_g1

0xcce5,	// (0x00063959) list_medium_line_x2_t3_g4_g2_ParamLimits

0xcce5,	// (0x00063959) list_medium_line_x2_t3_g4_g2

0xcce5,	// (0x00063959) list_medium_line_x2_t3_g4_g3_ParamLimits

0xcce5,	// (0x00063959) list_medium_line_x2_t3_g4_g3

0xcce5,	// (0x00063959) list_medium_line_x2_t3_g4_g4_ParamLimits

0xcce5,	// (0x00063959) list_medium_line_x2_t3_g4_g4

0x0003,

0xf1ec,	// (0x00065e60) list_medium_line_x2_t3_g4_g_ParamLimits

0xf1ec,	// (0x00065e60) list_medium_line_x2_t3_g4_g

0xcfa9,	// (0x00063c1d) list_medium_line_x2_t3_g4_t1_ParamLimits

0xcfa9,	// (0x00063c1d) list_medium_line_x2_t3_g4_t1

0xcfa9,	// (0x00063c1d) list_medium_line_x2_t3_g4_t2_ParamLimits

0xcfa9,	// (0x00063c1d) list_medium_line_x2_t3_g4_t2

0xcfa9,	// (0x00063c1d) list_medium_line_x2_t3_g4_t3_ParamLimits

0xcfa9,	// (0x00063c1d) list_medium_line_x2_t3_g4_t3

0x0002,

0xf1e0,	// (0x00065e54) list_medium_line_x2_t3_g4_t_ParamLimits

0xf1e0,	// (0x00065e54) list_medium_line_x2_t3_g4_t

0xcce5,	// (0x00063959) list_medium_line_g2_g1_ParamLimits

0xcce5,	// (0x00063959) list_medium_line_g2_g1

0xcce5,	// (0x00063959) list_medium_line_g2_g2_ParamLimits

0xcce5,	// (0x00063959) list_medium_line_g2_g2

0x0001,

0xf1e7,	// (0x00065e5b) list_medium_line_g2_g_ParamLimits

0xf1e7,	// (0x00065e5b) list_medium_line_g2_g

0xcfa9,	// (0x00063c1d) list_medium_line_g2_t1_ParamLimits

0xcfa9,	// (0x00063c1d) list_medium_line_g2_t1

0xcce5,	// (0x00063959) list_medium_line_t3_g2_g1_ParamLimits

0xcce5,	// (0x00063959) list_medium_line_t3_g2_g1

0xcce5,	// (0x00063959) list_medium_line_t3_g2_g2_ParamLimits

0xcce5,	// (0x00063959) list_medium_line_t3_g2_g2

0x0001,

0xf1e7,	// (0x00065e5b) list_medium_line_t3_g2_g_ParamLimits

0xf1e7,	// (0x00065e5b) list_medium_line_t3_g2_g

0xcfa9,	// (0x00063c1d) list_medium_line_t3_g2_t1_ParamLimits

0xcfa9,	// (0x00063c1d) list_medium_line_t3_g2_t1

0xcfa9,	// (0x00063c1d) list_medium_line_t3_g2_t2_ParamLimits

0xcfa9,	// (0x00063c1d) list_medium_line_t3_g2_t2

0xcfa9,	// (0x00063c1d) list_medium_line_t3_g2_t3_ParamLimits

0xcfa9,	// (0x00063c1d) list_medium_line_t3_g2_t3

0x0002,

0xf1e0,	// (0x00065e54) list_medium_line_t3_g2_t_ParamLimits

0xf1e0,	// (0x00065e54) list_medium_line_t3_g2_t

0xcfd7,	// (0x00063c4b) list_medium_line_right_icon_g1

0x0233,	// (0x00056ea7) list_medium_line_right_icon_t1

0xcce5,	// (0x00063959) list_medium_line_t2_g1_ParamLimits

0xcce5,	// (0x00063959) list_medium_line_t2_g1

0xcfa9,	// (0x00063c1d) list_medium_line_t2_t1_ParamLimits

0xcfa9,	// (0x00063c1d) list_medium_line_t2_t1

0xcfa9,	// (0x00063c1d) list_medium_line_t2_t2_ParamLimits

0xcfa9,	// (0x00063c1d) list_medium_line_t2_t2

0x0001,

0xf1bc,	// (0x00065e30) list_medium_line_t2_t_ParamLimits

0xf1bc,	// (0x00065e30) list_medium_line_t2_t

0xcce5,	// (0x00063959) list_medium_line_t3_g1_ParamLimits

0xcce5,	// (0x00063959) list_medium_line_t3_g1

0xcfa9,	// (0x00063c1d) list_medium_line_t3_t1_ParamLimits

0xcfa9,	// (0x00063c1d) list_medium_line_t3_t1

0xcfa9,	// (0x00063c1d) list_medium_line_t3_t2_ParamLimits

0xcfa9,	// (0x00063c1d) list_medium_line_t3_t2

0xcfa9,	// (0x00063c1d) list_medium_line_t3_t3_ParamLimits

0xcfa9,	// (0x00063c1d) list_medium_line_t3_t3

0x0002,

0xf1e0,	// (0x00065e54) list_medium_line_t3_t_ParamLimits

0xf1e0,	// (0x00065e54) list_medium_line_t3_t

0xcce5,	// (0x00063959) list_medium_line_g3_g1_ParamLimits

0xcce5,	// (0x00063959) list_medium_line_g3_g1

0xcce5,	// (0x00063959) list_medium_line_g3_g2_ParamLimits

0xcce5,	// (0x00063959) list_medium_line_g3_g2

0xcce5,	// (0x00063959) list_medium_line_g3_g3_ParamLimits

0xcce5,	// (0x00063959) list_medium_line_g3_g3

0x0002,

0xf1d9,	// (0x00065e4d) list_medium_line_g3_g_ParamLimits

0xf1d9,	// (0x00065e4d) list_medium_line_g3_g

0xcfa9,	// (0x00063c1d) list_medium_line_g3_t1_ParamLimits

0xcfa9,	// (0x00063c1d) list_medium_line_g3_t1

0xcce5,	// (0x00063959) list_medium_line_t2_g3_g1_ParamLimits

0xcce5,	// (0x00063959) list_medium_line_t2_g3_g1

0xcce5,	// (0x00063959) list_medium_line_t2_g3_g2_ParamLimits

0xcce5,	// (0x00063959) list_medium_line_t2_g3_g2

0xcce5,	// (0x00063959) list_medium_line_t2_g3_g3_ParamLimits

0xcce5,	// (0x00063959) list_medium_line_t2_g3_g3

0x0002,

0xf1d9,	// (0x00065e4d) list_medium_line_t2_g3_g_ParamLimits

0xf1d9,	// (0x00065e4d) list_medium_line_t2_g3_g

0xcfa9,	// (0x00063c1d) list_medium_line_t2_g3_t1_ParamLimits

0xcfa9,	// (0x00063c1d) list_medium_line_t2_g3_t1

0xcfa9,	// (0x00063c1d) list_medium_line_t2_g3_t2_ParamLimits

0xcfa9,	// (0x00063c1d) list_medium_line_t2_g3_t2

0x0001,

0xf1bc,	// (0x00065e30) list_medium_line_t2_g3_t_ParamLimits

0xf1bc,	// (0x00065e30) list_medium_line_t2_g3_t

0xcce5,	// (0x00063959) list_medium_line_t3_g3_g1_ParamLimits

0xcce5,	// (0x00063959) list_medium_line_t3_g3_g1

0xcce5,	// (0x00063959) list_medium_line_t3_g3_g2_ParamLimits

0xcce5,	// (0x00063959) list_medium_line_t3_g3_g2

0xcce5,	// (0x00063959) list_medium_line_t3_g3_g3_ParamLimits

0xcce5,	// (0x00063959) list_medium_line_t3_g3_g3

0x0002,

0xf1d9,	// (0x00065e4d) list_medium_line_t3_g3_g_ParamLimits

0xf1d9,	// (0x00065e4d) list_medium_line_t3_g3_g

0xcfa9,	// (0x00063c1d) list_medium_line_t3_g3_t1_ParamLimits

0xcfa9,	// (0x00063c1d) list_medium_line_t3_g3_t1

0xcfa9,	// (0x00063c1d) list_medium_line_t3_g3_t2_ParamLimits

0xcfa9,	// (0x00063c1d) list_medium_line_t3_g3_t2

0xcfa9,	// (0x00063c1d) list_medium_line_t3_g3_t3_ParamLimits

0xcfa9,	// (0x00063c1d) list_medium_line_t3_g3_t3

0x0002,

0xf1e0,	// (0x00065e54) list_medium_line_t3_g3_t_ParamLimits

0xf1e0,	// (0x00065e54) list_medium_line_t3_g3_t

0xcfd7,	// (0x00063c4b) list_medium_line_right_iconx2_g1

0xcfd7,	// (0x00063c4b) list_medium_line_right_iconx2_g2

0x0001,

0xf3be,	// (0x00066032) list_medium_line_right_iconx2_g

0x0233,	// (0x00056ea7) list_medium_line_right_iconx2_t1

0xcfd7,	// (0x00063c4b) list_medium_line_t2_right_iconx2_g1

0xcfd7,	// (0x00063c4b) list_medium_line_t2_right_iconx2_g2

0x0001,

0xf3be,	// (0x00066032) list_medium_line_t2_right_iconx2_g

0x0233,	// (0x00056ea7) list_medium_line_t2_right_iconx2_t1

0x0233,	// (0x00056ea7) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfc51,	// (0x000668c5) list_medium_line_t2_right_iconx2_t

0x0233,	// (0x00056ea7) list_medium_line_x4_t4_t1

0x0233,	// (0x00056ea7) list_medium_line_x4_t4_t2

0x0233,	// (0x00056ea7) list_medium_line_x4_t4_t3

0x0233,	// (0x00056ea7) list_medium_line_x4_t4_t4

0x0003,

0xf2a9,	// (0x00065f1d) list_medium_line_x4_t4_t

0xacae,	// (0x00061922) tport_appsw_pane_ParamLimits

0xacae,	// (0x00061922) tport_appsw_pane

0xacc6,	// (0x0006193a) tport_contact_pane_ParamLimits

0xacc6,	// (0x0006193a) tport_contact_pane

0xacde,	// (0x00061952) tport_listscroll_pane_ParamLimits

0xacde,	// (0x00061952) tport_listscroll_pane

0xacf8,	// (0x0006196c) cell_tport_appsw_pane_ParamLimits

0xacf8,	// (0x0006196c) cell_tport_appsw_pane

0x2732,	// (0x000593a6) tport_appsw_pane_g1_ParamLimits

0x2732,	// (0x000593a6) tport_appsw_pane_g1

0xe1fb,	// (0x00064e6f) tport_contact_pane_g1

0xe204,	// (0x00064e78) tport_contact_pane_t1

0xe212,	// (0x00064e86) tport_contact_pane_t2

0x0001,

0xfc8b,	// (0x000668ff) tport_contact_pane_t

0xe220,	// (0x00064e94) list_tport_pane

0xe229,	// (0x00064e9d) scroll_pane_cp_030

0xad40,	// (0x000619b4) cell_tport_appsw_pane_g1

0xad50,	// (0x000619c4) cell_tport_appsw_pane_t1

0xad5e,	// (0x000619d2) grid_highlight_pane_cp019

0xad66,	// (0x000619da) list_tport_double_graphic_pane_ParamLimits

0xad66,	// (0x000619da) list_tport_double_graphic_pane

0xcc7e,	// (0x000638f2) list_highlight_pane_cp023_ParamLimits

0xcc7e,	// (0x000638f2) list_highlight_pane_cp023

0xad73,	// (0x000619e7) list_tport_double_graphic_pane_g1_ParamLimits

0xad73,	// (0x000619e7) list_tport_double_graphic_pane_g1

0xad80,	// (0x000619f4) list_tport_double_graphic_pane_t1_ParamLimits

0xad80,	// (0x000619f4) list_tport_double_graphic_pane_t1

0xad95,	// (0x00061a09) list_tport_double_graphic_pane_t2_ParamLimits

0xad95,	// (0x00061a09) list_tport_double_graphic_pane_t2

0x0001,

0xfc97,	// (0x0006690b) list_tport_double_graphic_pane_t_ParamLimits

0xfc97,	// (0x0006690b) list_tport_double_graphic_pane_t

0xc55f,	// (0x000631d3) main_cale_note_pane

0x8595,	// (0x0005f209) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x8595,	// (0x0005f209) cell_vitu2_function_top_wide_pane_cp01

0xa4f5,	// (0x00061169) wait_bar_pane_cp05_ParamLimits

0xcc7e,	// (0x000638f2) listscroll_cmail_pane

0xe232,	// (0x00064ea6) list_cmail_pane

0xada7,	// (0x00061a1b) list_cmail_body_pane

0xadbd,	// (0x00061a31) list_single_cmail_header_caption_pane

0xadd4,	// (0x00061a48) list_single_cmail_header_detail_pane_ParamLimits

0xadd4,	// (0x00061a48) list_single_cmail_header_detail_pane

0xe242,	// (0x00064eb6) list_single_cmail_header_caption_pane_t1

0xadfe,	// (0x00061a72) list_single_cmail_header_detail_pane_g1_ParamLimits

0xadfe,	// (0x00061a72) list_single_cmail_header_detail_pane_g1

0xe259,	// (0x00064ecd) list_single_cmail_header_detail_pane_g2_ParamLimits

0xe259,	// (0x00064ecd) list_single_cmail_header_detail_pane_g2

0x0002,

0xfc9c,	// (0x00066910) list_single_cmail_header_detail_pane_g_ParamLimits

0xfc9c,	// (0x00066910) list_single_cmail_header_detail_pane_g

0xe272,	// (0x00064ee6) list_single_cmail_header_detail_pane_t1_ParamLimits

0xe272,	// (0x00064ee6) list_single_cmail_header_detail_pane_t1

0xe2d2,	// (0x00064f46) list_single_cmail_header_editor_pane_bg_ParamLimits

0xe2d2,	// (0x00064f46) list_single_cmail_header_editor_pane_bg

0xdc18,	// (0x0006488c) list_cmail_body_pane_g1

0xe2e9,	// (0x00064f5d) list_cmail_body_pane_t1

0x2752,	// (0x000593c6) list_single_cmail_header_editor_pane_bg_g1

0xd1e8,	// (0x00063e5c) list_single_cmail_header_editor_pane_bg_g1_copy1

0x2762,	// (0x000593d6) list_single_cmail_header_editor_pane_bg_g1_copy2

0x275a,	// (0x000593ce) list_single_cmail_header_editor_pane_bg_g1_copy3

0x2980,	// (0x000595f4) list_single_cmail_header_editor_pane_bg_g1_copy4

0x2782,	// (0x000593f6) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0x2772,	// (0x000593e6) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0x277a,	// (0x000593ee) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xd1c8,	// (0x00063e3c) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0xae16,	// (0x00061a8a) calenote_gesture_pane_ParamLimits

0xae16,	// (0x00061a8a) calenote_gesture_pane

0xae36,	// (0x00061aaa) calenote_window_pane_ParamLimits

0xae36,	// (0x00061aaa) calenote_window_pane

0xe2f7,	// (0x00064f6b) popup_note_window_cp01

0xae52,	// (0x00061ac6) calenote_swipe_1_pane_ParamLimits

0xae52,	// (0x00061ac6) calenote_swipe_1_pane

0xa933,	// (0x000615a7) calenote_swipe_2_pane_ParamLimits

0xa933,	// (0x000615a7) calenote_swipe_2_pane

0xdf85,	// (0x00064bf9) calenote_swipe_1_pane_g1_ParamLimits

0xdf85,	// (0x00064bf9) calenote_swipe_1_pane_g1

0xdf92,	// (0x00064c06) calenote_swipe_1_pane_g2_ParamLimits

0xdf92,	// (0x00064c06) calenote_swipe_1_pane_g2

0x0001,

0xfc39,	// (0x000668ad) calenote_swipe_1_pane_g_ParamLimits

0xfc39,	// (0x000668ad) calenote_swipe_1_pane_g

0xe309,	// (0x00064f7d) calenote_swipe_1_pane_t1_ParamLimits

0xe309,	// (0x00064f7d) calenote_swipe_1_pane_t1

0xdf85,	// (0x00064bf9) calenote_swipe_2_pane_g1_ParamLimits

0xdf85,	// (0x00064bf9) calenote_swipe_2_pane_g1

0xe328,	// (0x00064f9c) calenote_swipe_2_pane_g2_ParamLimits

0xe328,	// (0x00064f9c) calenote_swipe_2_pane_g2

0x0001,

0xfca8,	// (0x0006691c) calenote_swipe_2_pane_g_ParamLimits

0xfca8,	// (0x0006691c) calenote_swipe_2_pane_g

0xe334,	// (0x00064fa8) calenote_swipe_2_pane_t1_ParamLimits

0xe334,	// (0x00064fa8) calenote_swipe_2_pane_t1

0xc55f,	// (0x000631d3) main_mup_navstr_pane

0x7424,	// (0x0005e098) main_mup3_pane_t7_ParamLimits

0x7424,	// (0x0005e098) main_mup3_pane_t7

0xd64c,	// (0x000642c0) main_mp4_pane_g6_ParamLimits

0xd64c,	// (0x000642c0) main_mp4_pane_g6

0xd80e,	// (0x00064482) main_image3_pane_t4_ParamLimits

0xd80e,	// (0x00064482) main_image3_pane_t4

0xae67,	// (0x00061adb) popup_navstr_preview_pane_ParamLimits

0xae67,	// (0x00061adb) popup_navstr_preview_pane

0xae7b,	// (0x00061aef) scroll_navstr_pane_ParamLimits

0xae7b,	// (0x00061aef) scroll_navstr_pane

0xc55f,	// (0x000631d3) bg_popup_preview_window_pane_cp04

0xe35b,	// (0x00064fcf) popup_navstr_preview_pane_t1

0xae8f,	// (0x00061b03) scroll_navstr_pane_g1_ParamLimits

0xae8f,	// (0x00061b03) scroll_navstr_pane_g1

0xaea3,	// (0x00061b17) scroll_navstr_pane_t1_ParamLimits

0xaea3,	// (0x00061b17) scroll_navstr_pane_t1

0xe300,	// (0x00064f74) bg_button_pane_cp014

0xe300,	// (0x00064f74) bg_button_pane_cp030

0xa80c,	// (0x00061480) list_double_fisheye_pane_g4_ParamLimits

0xa80c,	// (0x00061480) list_double_fisheye_pane_g4

0xa818,	// (0x0006148c) list_double_fisheye_pane_g5_ParamLimits

0xa818,	// (0x0006148c) list_double_fisheye_pane_g5

0x29ea,	// (0x0005965e) sp_fs_scroll_pane_cp03

0xe09c,	// (0x00064d10) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xe0a8,	// (0x00064d1c) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfc56,	// (0x000668ca) main_sp_fs_ctrlbar_pane_g_ParamLimits

0xaa1f,	// (0x00061693) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xe23a,	// (0x00064eae) sp_fs_scroll_pane_cp02

0xcedf,	// (0x00063b53) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0xcedf,	// (0x00063b53) popup_sp_fs_calendar_preview_list_single_pane

0xc55f,	// (0x000631d3) main_cam6_pano_pane

0xc5d6,	// (0x0006324a) main_mup3_pane_ParamLimits

0xc55f,	// (0x000631d3) main_phacti_pane

0xa3c8,	// (0x0006103c) bg_button_pane_cp11

0xa3e2,	// (0x00061056) main_mobtv_info_pane_g2_ParamLimits

0xa3e2,	// (0x00061056) main_mobtv_info_pane_g2

0x0001,

0xfbb6,	// (0x0006682a) main_mobtv_info_pane_g_ParamLimits

0xfbb6,	// (0x0006682a) main_mobtv_info_pane_g

0xa5bf,	// (0x00061233) sc_clock_pane_t5_ParamLimits

0xa5bf,	// (0x00061233) sc_clock_pane_t5

0xa687,	// (0x000612fb) main_radioblah_pane_g1_ParamLimits

0xdeb6,	// (0x00064b2a) main_radioblah_pane_t3_ParamLimits

0xdeb6,	// (0x00064b2a) main_radioblah_pane_t3

0xdece,	// (0x00064b42) main_radioblah_pane_t4_ParamLimits

0xdece,	// (0x00064b42) main_radioblah_pane_t4

0xa6af,	// (0x00061323) main_radioblah_text_pane_ParamLimits

0xa6af,	// (0x00061323) main_radioblah_text_pane

0xa6c1,	// (0x00061335) main_radioblah_info_pane_g1_ParamLimits

0xa75a,	// (0x000613ce) main_radioblah_info_pane_t4_ParamLimits

0xa75a,	// (0x000613ce) main_radioblah_info_pane_t4

0xcc7e,	// (0x000638f2) main_sp_fs_calendar_pane

0xaeba,	// (0x00061b2e) main_phacti_pane_g1

0xaec2,	// (0x00061b36) phacti_note_pane_ParamLimits

0xaec2,	// (0x00061b36) phacti_note_pane

0xe372,	// (0x00064fe6) phacti_term_pane_ParamLimits

0xe372,	// (0x00064fe6) phacti_term_pane

0xe387,	// (0x00064ffb) phacti_note_pane_t1_ParamLimits

0xe387,	// (0x00064ffb) phacti_note_pane_t1

0xe39e,	// (0x00065012) phacti_term_pane_g1

0xe3a6,	// (0x0006501a) phacti_term_pane_t1_ParamLimits

0xe3a6,	// (0x0006501a) phacti_term_pane_t1

0xe3d0,	// (0x00065044) popup_sp_fs_calendar_preview_list_single_pane_g1

0xe3d8,	// (0x0006504c) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfcb2,	// (0x00066926) popup_sp_fs_calendar_preview_list_single_pane_g

0xe3e0,	// (0x00065054) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xe3e0,	// (0x00065054) popup_sp_fs_calendar_preview_list_single_pane_t1

0xe3f6,	// (0x0006506a) aid_popup_sp_fs_bg_corner_pane

0xcfd7,	// (0x00063c4b) popup_sp_fs_calendar_preview_bg_pane_g1

0xc55f,	// (0x000631d3) popup_sp_fs_calendar_preview_bg_pane

0xe3fe,	// (0x00065072) popup_sp_fs_calendar_preview_list_pane

0x1a58,	// (0x000586cc) bg_main_sp_fs_cale_pane_ParamLimits

0x1a58,	// (0x000586cc) bg_main_sp_fs_cale_pane

0xe40f,	// (0x00065083) listscroll_cale_mrui_pane_ParamLimits

0xe40f,	// (0x00065083) listscroll_cale_mrui_pane

0xe424,	// (0x00065098) listscroll_sp_fs_schedule_track_pane

0xe42d,	// (0x000650a1) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0xe42d,	// (0x000650a1) main_sp_fs_ctrlbar_pane_cp01

0xe440,	// (0x000650b4) main_sp_fs_ribbon_pane

0xe448,	// (0x000650bc) popup_sp_fs_cale_preview_window

0xaf37,	// (0x00061bab) list_single_sp_fs_schedule_track_pane_ParamLimits

0xaf37,	// (0x00061bab) list_single_sp_fs_schedule_track_pane

0xcc7e,	// (0x000638f2) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0xcc7e,	// (0x000638f2) bg_sp_fs_highlight_list_pane_cp03

0xaf4b,	// (0x00061bbf) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0xaf4b,	// (0x00061bbf) list_single_sp_fs_schedule_track_pane_g1

0xaf57,	// (0x00061bcb) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0xaf57,	// (0x00061bcb) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfcb7,	// (0x0006692b) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfcb7,	// (0x0006692b) list_single_sp_fs_schedule_track_pane_g

0xaf63,	// (0x00061bd7) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0xaf63,	// (0x00061bd7) list_single_sp_fs_schedule_track_pane_t1

0xaf7d,	// (0x00061bf1) sp_fs_schedule_track_pane_ParamLimits

0xaf7d,	// (0x00061bf1) sp_fs_schedule_track_pane

0xe45a,	// (0x000650ce) sp_fs_schedule_track_pane_g1

0xe462,	// (0x000650d6) sp_fs_schedule_track_pane_g2

0xe46a,	// (0x000650de) sp_fs_schedule_track_pane_g3

0xe472,	// (0x000650e6) sp_fs_schedule_track_pane_g4

0xe47a,	// (0x000650ee) sp_fs_schedule_track_pane_g5

0x0004,

0xfcbc,	// (0x00066930) sp_fs_schedule_track_pane_g

0x2752,	// (0x000593c6) bg_sp_fs_schedule_viewer_highlight_g1

0xd1e8,	// (0x00063e5c) bg_sp_fs_schedule_viewer_highlight_g2

0x275a,	// (0x000593ce) bg_sp_fs_schedule_viewer_highlight_g3

0x2762,	// (0x000593d6) bg_sp_fs_schedule_viewer_highlight_g4

0x2980,	// (0x000595f4) bg_sp_fs_schedule_viewer_highlight_g5

0x2772,	// (0x000593e6) bg_sp_fs_schedule_viewer_highlight_g6

0x277a,	// (0x000593ee) bg_sp_fs_schedule_viewer_highlight_g7

0x2782,	// (0x000593f6) bg_sp_fs_schedule_viewer_highlight_g8

0xd1c8,	// (0x00063e3c) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfcc7,	// (0x0006693b) bg_sp_fs_schedule_viewer_highlight_g

0xc55f,	// (0x000631d3) bg_main_sp_fs_ribbon_pane

0xaf8e,	// (0x00061c02) main_sp_fs_ribbon_pane_g1

0xe482,	// (0x000650f6) main_sp_fs_ribbon_pane_t1

0xaf97,	// (0x00061c0b) main_sp_fs_ribbon_pane_t2

0xe491,	// (0x00065105) main_sp_fs_ribbon_pane_t3

0x0002,

0xfcda,	// (0x0006694e) main_sp_fs_ribbon_pane_t

0xe4a0,	// (0x00065114) main_sp_fs_ribbon_scheduler_pane

0xe4a8,	// (0x0006511c) bg_main_sp_fs_ribbon_pane_g1

0xe4b1,	// (0x00065125) bg_main_sp_fs_ribbon_pane_g2

0xe4ba,	// (0x0006512e) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfce1,	// (0x00066955) bg_main_sp_fs_ribbon_pane_g

0xe4c2,	// (0x00065136) main_sp_fs_ribbon_scheduler_pane_g1

0xe4cb,	// (0x0006513f) main_sp_fs_ribbon_scheduler_pane_g2

0xe4d4,	// (0x00065148) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfce8,	// (0x0006695c) main_sp_fs_ribbon_scheduler_pane_g

0xe4dd,	// (0x00065151) list_cale_mrui_pane

0xafa6,	// (0x00061c1a) sp_fs_scroll_pane_cp07_ParamLimits

0xafa6,	// (0x00061c1a) sp_fs_scroll_pane_cp07

0xafc2,	// (0x00061c36) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0xafc2,	// (0x00061c36) bg_sp_fs_schedule_viewer_highlight

0xe4ea,	// (0x0006515e) list_single_sp_fs_schedule_track_pane_cp01

0xe4f2,	// (0x00065166) list_sp_fs_schedule_track_pane

0xe4fa,	// (0x0006516e) sp_fs_scroll_pane_cp06_ParamLimits

0xe4fa,	// (0x0006516e) sp_fs_scroll_pane_cp06

0xcfd7,	// (0x00063c4b) bgmain_sp_fs_calendar_pane_g1

0xafd2,	// (0x00061c46) list_single_cale_mrui_pane_ParamLimits

0xafd2,	// (0x00061c46) list_single_cale_mrui_pane

0xe50c,	// (0x00065180) list_single_cale_mrui_row_pane_ParamLimits

0xe50c,	// (0x00065180) list_single_cale_mrui_row_pane

0xe519,	// (0x0006518d) list_single_cale_mrui_row_pane_g1_ParamLimits

0xe519,	// (0x0006518d) list_single_cale_mrui_row_pane_g1

0xe55e,	// (0x000651d2) list_single_cale_mrui_row_pane_t1_ParamLimits

0xe55e,	// (0x000651d2) list_single_cale_mrui_row_pane_t1

0xaff3,	// (0x00061c67) list_single_cale_mrui_row_pane_t2_ParamLimits

0xaff3,	// (0x00061c67) list_single_cale_mrui_row_pane_t2

0xe570,	// (0x000651e4) list_single_cale_mrui_row_pane_t3_ParamLimits

0xe570,	// (0x000651e4) list_single_cale_mrui_row_pane_t3

0xe59f,	// (0x00065213) list_single_cale_mrui_row_pane_t4_ParamLimits

0xe59f,	// (0x00065213) list_single_cale_mrui_row_pane_t4

0x0003,

0xfcf6,	// (0x0006696a) list_single_cale_mrui_row_pane_t_ParamLimits

0xfcf6,	// (0x0006696a) list_single_cale_mrui_row_pane_t

0xb05b,	// (0x00061ccf) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0xb05b,	// (0x00061ccf) list_single_cmail_header_editor_pane_bg_cp01

0xb081,	// (0x00061cf5) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0xb081,	// (0x00061cf5) list_single_cmail_header_editor_pane_bg_cp02

0xb0a1,	// (0x00061d15) main_radioblah_text_pane_t1_ParamLimits

0xb0a1,	// (0x00061d15) main_radioblah_text_pane_t1

0xe5ce,	// (0x00065242) cam6_indi_pane_cp01

0xe5d6,	// (0x0006524a) cam6_mode_pane_cp01

0xe5de,	// (0x00065252) cam6_pano_pane

0xe5e7,	// (0x0006525b) cam6_zoom_pane_cp01

0xe5ef,	// (0x00065263) cam6_pano_image_pane

0xe5fa,	// (0x0006526e) cam6_pano_pane_g1

0xdc18,	// (0x0006488c) cam6_pano_pane_g2

0xe603,	// (0x00065277) cam6_pano_pane_g3

0xe60c,	// (0x00065280) cam6_pano_pane_g4

0x241b,	// (0x0005908f) cam6_pano_pane_g5

0xe615,	// (0x00065289) cam6_pano_pane_g6

0xe61f,	// (0x00065293) cam6_pano_pane_g7

0xe627,	// (0x0006529b) cam6_pano_pane_g8

0xe630,	// (0x000652a4) cam6_pano_pane_g9

0x0008,

0xfcff,	// (0x00066973) cam6_pano_pane_g

0xc55f,	// (0x000631d3) main_browser_tag_pane

0xe353,	// (0x00064fc7) grid_navstr_albumart_pane

0xe63b,	// (0x000652af) cell_navstr_albumart_pane_ParamLimits

0xe63b,	// (0x000652af) cell_navstr_albumart_pane

0xe65b,	// (0x000652cf) cell_navstr_albumart_pane_g1

0x18b4,	// (0x00058528) cell_navstr_albumart_pane_g2

0x18c4,	// (0x00058538) cell_navstr_albumart_pane_g3

0x18bc,	// (0x00058530) cell_navstr_albumart_pane_g4

0x0003,

0xfd12,	// (0x00066986) cell_navstr_albumart_pane_g

0xb0bc,	// (0x00061d30) bt_list_pane_ParamLimits

0xb0bc,	// (0x00061d30) bt_list_pane

0xb0d0,	// (0x00061d44) bt_list_pane_t1

0xb0df,	// (0x00061d53) bt_list_pane_t2

0x0001,

0xfd1b,	// (0x0006698f) bt_list_pane_t

0xc55f,	// (0x000631d3) main_cale_prevew_pane

0xb0ee,	// (0x00061d62) popup_cale_preview_window_ParamLimits

0xb0ee,	// (0x00061d62) popup_cale_preview_window

0xcc7e,	// (0x000638f2) bg_popup_preview_window_pane_cp05_ParamLimits

0xcc7e,	// (0x000638f2) bg_popup_preview_window_pane_cp05

0xe663,	// (0x000652d7) list_cale_preview_pane_ParamLimits

0xe663,	// (0x000652d7) list_cale_preview_pane

0xb107,	// (0x00061d7b) list_double_cale_preview_pane_ParamLimits

0xb107,	// (0x00061d7b) list_double_cale_preview_pane

0x278a,	// (0x000593fe) list_single_cale_preview_pane_ParamLimits

0x278a,	// (0x000593fe) list_single_cale_preview_pane

0xb119,	// (0x00061d8d) list_single_cale_preview_pane_g1

0xb121,	// (0x00061d95) list_single_cale_preview_pane_t1_ParamLimits

0xb121,	// (0x00061d95) list_single_cale_preview_pane_t1

0xb136,	// (0x00061daa) list_double_cale_preview_pane_g1

0xb13e,	// (0x00061db2) list_double_cale_preview_pane_t1_ParamLimits

0xb13e,	// (0x00061db2) list_double_cale_preview_pane_t1

0xb153,	// (0x00061dc7) list_double_cale_preview_pane_t2_ParamLimits

0xb153,	// (0x00061dc7) list_double_cale_preview_pane_t2

0x0001,

0xfd20,	// (0x00066994) list_double_cale_preview_pane_t_ParamLimits

0xfd20,	// (0x00066994) list_double_cale_preview_pane_t

0xc55f,	// (0x000631d3) main_ezdial_pane

0xcc7e,	// (0x000638f2) main_sp_fs_email_pane_ParamLimits

0xa98f,	// (0x00061603) cmail_ddmenu_btn01_pane_ParamLimits

0xa98f,	// (0x00061603) cmail_ddmenu_btn01_pane

0xa9a2,	// (0x00061616) cmail_ddmenu_btn02_pane_ParamLimits

0xa9a2,	// (0x00061616) cmail_ddmenu_btn02_pane

0xa9c5,	// (0x00061639) cmail_ddmenu_btn03_pane_ParamLimits

0xa9c5,	// (0x00061639) cmail_ddmenu_btn03_pane

0xaa5e,	// (0x000616d2) main_sp_fs_ctrlbar_pane_ParamLimits

0xaa82,	// (0x000616f6) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0xada7,	// (0x00061a1b) list_cmail_body_pane_ParamLimits

0xe250,	// (0x00064ec4) bg_button_pane_cp12

0xe265,	// (0x00064ed9) list_single_cmail_header_detail_pane_g3_ParamLimits

0xe265,	// (0x00064ed9) list_single_cmail_header_detail_pane_g3

0xe2ae,	// (0x00064f22) list_single_cmail_header_detail_pane_t2_ParamLimits

0xe2ae,	// (0x00064f22) list_single_cmail_header_detail_pane_t2

0x0001,

0xfca3,	// (0x00066917) list_single_cmail_header_detail_pane_t_ParamLimits

0xfca3,	// (0x00066917) list_single_cmail_header_detail_pane_t

0xe3bb,	// (0x0006502f) phacti_term_pane_t2_ParamLimits

0xe3bb,	// (0x0006502f) phacti_term_pane_t2

0x0001,

0xfcad,	// (0x00066921) phacti_term_pane_t_ParamLimits

0xfcad,	// (0x00066921) phacti_term_pane_t

0xe66f,	// (0x000652e3) aid_size_list_single_double

0xb16b,	// (0x00061ddf) popup_ezdial_listscroll_window

0xb187,	// (0x00061dfb) popup_number_entry_window_cp01

0xcf97,	// (0x00063c0b) bg_popup_call_pane_cp09

0xe67b,	// (0x000652ef) ezdial_list_pane

0xe683,	// (0x000652f7) scroll_pane_cp23

0x1a58,	// (0x000586cc) bg_button_pane_cp028_ParamLimits

0x1a58,	// (0x000586cc) bg_button_pane_cp028

0xb195,	// (0x00061e09) cmail_ddmenu_btn01_pane_g1_ParamLimits

0xb195,	// (0x00061e09) cmail_ddmenu_btn01_pane_g1

0xb1a1,	// (0x00061e15) cmail_ddmenu_btn01_pane_g2_ParamLimits

0xb1a1,	// (0x00061e15) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfd25,	// (0x00066999) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfd25,	// (0x00066999) cmail_ddmenu_btn01_pane_g

0xe68b,	// (0x000652ff) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xe68b,	// (0x000652ff) cmail_ddmenu_btn01_pane_t1

0x1a58,	// (0x000586cc) bg_button_pane_cp029_ParamLimits

0x1a58,	// (0x000586cc) bg_button_pane_cp029

0xb1ad,	// (0x00061e21) cmail_ddmenu_btn02_pane_g1_ParamLimits

0xb1ad,	// (0x00061e21) cmail_ddmenu_btn02_pane_g1

0xb1c5,	// (0x00061e39) cmail_ddmenu_btn02_pane_t1_ParamLimits

0xb1c5,	// (0x00061e39) cmail_ddmenu_btn02_pane_t1

0xcc7e,	// (0x000638f2) bg_button_pane_cp031_ParamLimits

0xcc7e,	// (0x000638f2) bg_button_pane_cp031

0xb1ad,	// (0x00061e21) cmail_ddmenu_btn03_pane_g1_ParamLimits

0xb1ad,	// (0x00061e21) cmail_ddmenu_btn03_pane_g1

0xb1c5,	// (0x00061e39) cmail_ddmenu_btn03_pane_t1_ParamLimits

0xb1c5,	// (0x00061e39) cmail_ddmenu_btn03_pane_t1

0x7d7d,	// (0x0005e9f1) cell_dialer2_keypad_pane_t1_ParamLimits

0x7d97,	// (0x0005ea0b) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x7d97,	// (0x0005ea0b) cell_dialer2_keypad_pane_t1_copy1

0xa1eb,	// (0x00060e5f) ncimui_group_button_pane

0xcc7e,	// (0x000638f2) main_sp_fs_calendar_pane_ParamLimits

0xadbd,	// (0x00061a31) list_single_cmail_header_caption_pane_ParamLimits

0xe406,	// (0x0006507a) aid_recal_txt_sm_pane

0xc55f,	// (0x000631d3) mian_recal_day_pane

0xe448,	// (0x000650bc) popup_sp_fs_cale_preview_window_ParamLimits

0xe6a0,	// (0x00065314) list_recal_day_pane

0xe6e2,	// (0x00065356) list_single_recal_day_pane_ParamLimits

0xe6e2,	// (0x00065356) list_single_recal_day_pane

0xe6f4,	// (0x00065368) list_single_recal_day_pane_g1_ParamLimits

0xe6f4,	// (0x00065368) list_single_recal_day_pane_g1

0xe700,	// (0x00065374) list_single_recal_day_pane_g2_ParamLimits

0xe700,	// (0x00065374) list_single_recal_day_pane_g2

0xe70c,	// (0x00065380) list_single_recal_day_pane_g3_ParamLimits

0xe70c,	// (0x00065380) list_single_recal_day_pane_g3

0xb1e9,	// (0x00061e5d) list_single_recal_day_pane_g4_ParamLimits

0xb1e9,	// (0x00061e5d) list_single_recal_day_pane_g4

0xe718,	// (0x0006538c) list_single_recal_day_pane_g5_ParamLimits

0xe718,	// (0x0006538c) list_single_recal_day_pane_g5

0xe724,	// (0x00065398) list_single_recal_day_pane_g6_ParamLimits

0xe724,	// (0x00065398) list_single_recal_day_pane_g6

0x0004,

0xfd34,	// (0x000669a8) list_single_recal_day_pane_g_ParamLimits

0xfd34,	// (0x000669a8) list_single_recal_day_pane_g

0xe738,	// (0x000653ac) list_single_recal_day_pane_t1

0xe74a,	// (0x000653be) list_single_recal_day_pane_t2

0x0001,

0xfd3f,	// (0x000669b3) list_single_recal_day_pane_t

0xb201,	// (0x00061e75) ncimui_query_button_pane_ParamLimits

0xb201,	// (0x00061e75) ncimui_query_button_pane

0xb211,	// (0x00061e85) ncimui_query_button_pane_t1_ParamLimits

0xb211,	// (0x00061e85) ncimui_query_button_pane_t1

0xe75c,	// (0x000653d0) ncimui_query_button_pane_t2_ParamLimits

0xe75c,	// (0x000653d0) ncimui_query_button_pane_t2

0x0001,

0xfd44,	// (0x000669b8) ncimui_query_button_pane_t_ParamLimits

0xfd44,	// (0x000669b8) ncimui_query_button_pane_t

0xb224,	// (0x00061e98) query_button_pane_ParamLimits

0xb224,	// (0x00061e98) query_button_pane

0xc55f,	// (0x000631d3) bg_button_pane_cp0028

0xe76f,	// (0x000653e3) query_button_pane_t1

0x67a2,	// (0x0005d416) main_tport_pane_ParamLimits

0xac6b,	// (0x000618df) bg_popup_window_pane_cp01_ParamLimits

0xac6b,	// (0x000618df) bg_popup_window_pane_cp01

0xac86,	// (0x000618fa) heading_pane_cp08_ParamLimits

0xac86,	// (0x000618fa) heading_pane_cp08

0xac99,	// (0x0006190d) heading_pane_cp07_ParamLimits

0xac99,	// (0x0006190d) heading_pane_cp07

0xad40,	// (0x000619b4) cell_tport_appsw_pane_g2

0x0002,

0xfc90,	// (0x00066904) cell_tport_appsw_pane_g

0x5ce7,	// (0x0005c95b) input_candi_list_open_g1

0x00e0,	// (0x00056d54) list_cale_time_pane_g6_ParamLimits

0x00e0,	// (0x00056d54) list_cale_time_pane_g6

0x6dbd,	// (0x0005da31) aid_size_touch_calib_1_ParamLimits

0x6dbd,	// (0x0005da31) aid_size_touch_calib_1

0x6dcf,	// (0x0005da43) aid_size_touch_calib_2_ParamLimits

0x6dcf,	// (0x0005da43) aid_size_touch_calib_2

0x6de7,	// (0x0005da5b) aid_size_touch_calib_3_ParamLimits

0x6de7,	// (0x0005da5b) aid_size_touch_calib_3

0x6e05,	// (0x0005da79) aid_size_touch_calib_4_ParamLimits

0x6e05,	// (0x0005da79) aid_size_touch_calib_4

0x6e1d,	// (0x0005da91) main_touch_calib_button_group_pane_ParamLimits

0x6e1d,	// (0x0005da91) main_touch_calib_button_group_pane

0x6e35,	// (0x0005daa9) main_touch_calib_pane_g1_ParamLimits

0x6e47,	// (0x0005dabb) main_touch_calib_pane_g2_ParamLimits

0x6e59,	// (0x0005dacd) main_touch_calib_pane_g3_ParamLimits

0x6e6b,	// (0x0005dadf) main_touch_calib_pane_g4_ParamLimits

0xf6d2,	// (0x00066346) main_touch_calib_pane_g_ParamLimits

0x6e7d,	// (0x0005daf1) main_touch_calib_pane_t1_ParamLimits

0x6e97,	// (0x0005db0b) main_touch_calib_pane_t2_ParamLimits

0x6eb1,	// (0x0005db25) main_touch_calib_pane_t3_ParamLimits

0x6ec5,	// (0x0005db39) main_touch_calib_pane_t4_ParamLimits

0x6ed9,	// (0x0005db4d) main_touch_calib_pane_t5_ParamLimits

0xf6db,	// (0x0006634f) main_touch_calib_pane_t_ParamLimits

0x21b8,	// (0x00058e2c) list_single_fp_cale_pane_g3_ParamLimits

0x21b8,	// (0x00058e2c) list_single_fp_cale_pane_g3

0xc5d6,	// (0x0006324a) bg_button_pane_cp012_ParamLimits

0xc5d6,	// (0x0006324a) bg_vkb2_func_pane_cp03_ParamLimits

0x8db5,	// (0x0005fa29) cell_vitu2_function_top_pane_g1_ParamLimits

0xc5d6,	// (0x0006324a) bg_vkb2_func_pane_cp04_ParamLimits

0xa176,	// (0x00060dea) main_ncimui_button_group_pane_ParamLimits

0xa176,	// (0x00060dea) main_ncimui_button_group_pane

0xa1d6,	// (0x00060e4a) main_ncimui_pane_t3_ParamLimits

0xa1d6,	// (0x00060e4a) main_ncimui_pane_t3

0xe369,	// (0x00064fdd) phacti_button_group_pane

0xe66f,	// (0x000652e3) aid_size_list_single_double_ParamLimits

0xb16b,	// (0x00061ddf) popup_ezdial_listscroll_window_ParamLimits

0xb187,	// (0x00061dfb) popup_number_entry_window_cp01_ParamLimits

0xb237,	// (0x00061eab) phacti_button_pane_ParamLimits

0xb237,	// (0x00061eab) phacti_button_pane

0xc55f,	// (0x000631d3) bg_button_pane_cp14

0xe77d,	// (0x000653f1) phacti_button_pane_t1

0xb248,	// (0x00061ebc) main_touch_calib_button_pane_ParamLimits

0xb248,	// (0x00061ebc) main_touch_calib_button_pane

0xcd79,	// (0x000639ed) bg_button_pane_cp18_ParamLimits

0xcd79,	// (0x000639ed) bg_button_pane_cp18

0xe78b,	// (0x000653ff) main_touch_calib_button_pane_t1_ParamLimits

0xe78b,	// (0x000653ff) main_touch_calib_button_pane_t1

0xe7a1,	// (0x00065415) main_touch_calib_button_pane_t2_ParamLimits

0xe7a1,	// (0x00065415) main_touch_calib_button_pane_t2

0x0001,

0xfd49,	// (0x000669bd) main_touch_calib_button_pane_t_ParamLimits

0xfd49,	// (0x000669bd) main_touch_calib_button_pane_t

0xc55f,	// (0x000631d3) cell_ncimui_button_pane

0xc55f,	// (0x000631d3) bg_button_pane_cp032

0xe7bf,	// (0x00065433) cell_ncimui_button_pane_t1

0xd7ee,	// (0x00064462) image3_infobar_pane_ParamLimits

0xd7ee,	// (0x00064462) image3_infobar_pane

0xa5eb,	// (0x0006125f) fs_bigclock_status_pane_ParamLimits

0xa5eb,	// (0x0006125f) fs_bigclock_status_pane

0xa5f8,	// (0x0006126c) main_fs_bigclock_clock_pane_ParamLimits

0xa5f8,	// (0x0006126c) main_fs_bigclock_clock_pane

0xa616,	// (0x0006128a) main_fs_bigclock_indi_pane_ParamLimits

0xa616,	// (0x0006128a) main_fs_bigclock_indi_pane

0xa648,	// (0x000612bc) main_fs_bigclock_swipe_pane_ParamLimits

0xa648,	// (0x000612bc) main_fs_bigclock_swipe_pane

0xc55f,	// (0x000631d3) main_fs_clock_dumped_data

0xdd25,	// (0x00064999) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xdd25,	// (0x00064999) list_single_fs_bigclock_indicator_pane_g1

0xdd41,	// (0x000649b5) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xdd41,	// (0x000649b5) list_single_fs_bigclock_indicator_pane_g2

0xdd5b,	// (0x000649cf) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xdd5b,	// (0x000649cf) list_single_fs_bigclock_indicator_pane_g3

0xdd75,	// (0x000649e9) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xdd75,	// (0x000649e9) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfbea,	// (0x0006685e) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfbea,	// (0x0006685e) list_single_fs_bigclock_indicator_pane_g

0xdda0,	// (0x00064a14) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xdda0,	// (0x00064a14) list_single_fs_bigclock_indicator_pane_t1

0xddc8,	// (0x00064a3c) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xddc8,	// (0x00064a3c) list_single_fs_bigclock_indicator_pane_t2

0xddf0,	// (0x00064a64) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xddf0,	// (0x00064a64) list_single_fs_bigclock_indicator_pane_t3

0xde18,	// (0x00064a8c) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xde18,	// (0x00064a8c) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfbf5,	// (0x00066869) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfbf5,	// (0x00066869) list_single_fs_bigclock_indicator_pane_t

0xe7cd,	// (0x00065441) image3_infobar_fav_pane_ParamLimits

0xe7cd,	// (0x00065441) image3_infobar_fav_pane

0xe7dd,	// (0x00065451) image3_infobar_loc_pane_ParamLimits

0xe7dd,	// (0x00065451) image3_infobar_loc_pane

0xe7f1,	// (0x00065465) image3_infobar_time_pane_ParamLimits

0xe7f1,	// (0x00065465) image3_infobar_time_pane

0xcfd7,	// (0x00063c4b) image3_infobar_time_pane_g1

0xe801,	// (0x00065475) image3_infobar_time_pane_t1

0xcfd7,	// (0x00063c4b) image3_infobar_loc_pane_g1

0xe80f,	// (0x00065483) image3_infobar_loc_pane_g2

0x0001,

0xfd4e,	// (0x000669c2) image3_infobar_loc_pane_g

0xe817,	// (0x0006548b) image3_infobar_loc_pane_t1

0xcfd7,	// (0x00063c4b) image3_infobar_fav_pane_g1

0xe825,	// (0x00065499) image3_infobar_fav_pane_g2

0x0001,

0xfd53,	// (0x000669c7) image3_infobar_fav_pane_g

0xe82d,	// (0x000654a1) fs_bigclock_status_battery_pane

0xe836,	// (0x000654aa) fs_bigclock_status_signal_pane

0xe83f,	// (0x000654b3) fs_bigclock_status_title_pane

0xe848,	// (0x000654bc) fs_bigclock_status_signal_pane_g1

0xe851,	// (0x000654c5) fs_bigclock_status_signal_pane_g2

0x0001,

0xfd58,	// (0x000669cc) fs_bigclock_status_signal_pane_g

0xe859,	// (0x000654cd) fs_bigclock_status_battery_pane_g1

0xe862,	// (0x000654d6) fs_bigclock_status_battery_pane_g2

0x0001,

0xfd5d,	// (0x000669d1) fs_bigclock_status_battery_pane_g

0xe86a,	// (0x000654de) fs_bigclock_status_title_pane_t1

0xb25d,	// (0x00061ed1) main_fs_bigclock_clock_pane_g1

0xb25d,	// (0x00061ed1) main_fs_bigclock_clock_pane_g2

0xb26e,	// (0x00061ee2) main_fs_bigclock_clock_pane_g3

0xb26e,	// (0x00061ee2) main_fs_bigclock_clock_pane_g4

0x0003,

0xfd62,	// (0x000669d6) main_fs_bigclock_clock_pane_g

0xb281,	// (0x00061ef5) main_fs_bigclock_clock_pane_t1

0xb297,	// (0x00061f0b) main_fs_bigclock_clock_pane_t2

0x0001,

0xfd6b,	// (0x000669df) main_fs_bigclock_clock_pane_t

0xe878,	// (0x000654ec) list_single_fs_bigclock_indicator_pane_ParamLimits

0xe878,	// (0x000654ec) list_single_fs_bigclock_indicator_pane

0xe889,	// (0x000654fd) list_single_fs_bigclock_pane_ParamLimits

0xe889,	// (0x000654fd) list_single_fs_bigclock_pane

0xe8af,	// (0x00065523) main_fs_bigclock_indicator_pane_t1

0xe8be,	// (0x00065532) list_single_fs_bigclock_pane_g1

0xe8c6,	// (0x0006553a) list_single_fs_bigclock_pane_t1

0xcfd7,	// (0x00063c4b) main_fs_bigclock_swipe_pane_g1

0xe909,	// (0x0006557d) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfd7c,	// (0x000669f0) main_fs_bigclock_swipe_pane_g

0xe911,	// (0x00065585) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xe911,	// (0x00065585) main_fs_bigclock_swipe_pane_t1

0x5813,	// (0x0005c487) call_type_pane_ParamLimits

0xc55f,	// (0x000631d3) main_btmg_pane

0xe545,	// (0x000651b9) list_single_cale_mrui_row_pane_g2_ParamLimits

0xe545,	// (0x000651b9) list_single_cale_mrui_row_pane_g2

0x0002,

0xfcef,	// (0x00066963) list_single_cale_mrui_row_pane_g_ParamLimits

0xfcef,	// (0x00066963) list_single_cale_mrui_row_pane_g

0xe6c9,	// (0x0006533d) list_recal_vselct_arw_lo_pane

0xe6d1,	// (0x00065345) list_recal_vselct_arw_up_pane

0xe6d9,	// (0x0006534d) list_recal_vselct_pane

0xb2f1,	// (0x00061f65) btmg_button_pane

0xb2fb,	// (0x00061f6f) main_btmg_pane_g1

0xc55f,	// (0x000631d3) bg_button_pane_cp044

0xe92e,	// (0x000655a2) btmg_button_pane_t1

0x1a44,	// (0x000586b8) aid_listscroll_gen

0xcc7e,	// (0x000638f2) main_cntbar_detail_pane

0xe232,	// (0x00064ea6) list_cmail_folder_pane

0x29ea,	// (0x0005965e) sp_fs_scroll_pane_cp03_ParamLimits

0xadbd,	// (0x00061a31) list_single_fs_dyc_pane_cp01_ParamLimits

0xadbd,	// (0x00061a31) list_single_fs_dyc_pane_cp01

0xe93c,	// (0x000655b0) aid_size_cmail_indent

0xe945,	// (0x000655b9) list_single_dyc_row_pane_cp01

0xb337,	// (0x00061fab) cntbar_detail_list_pane_ParamLimits

0xb337,	// (0x00061fab) cntbar_detail_list_pane

0xb383,	// (0x00061ff7) main_cntbar_detail_cont_pane_ParamLimits

0xb383,	// (0x00061ff7) main_cntbar_detail_cont_pane

0x29ea,	// (0x0005965e) scroll_pane_cp032_ParamLimits

0x29ea,	// (0x0005965e) scroll_pane_cp032

0xb397,	// (0x0006200b) cntbar_detail_list_event_pane_ParamLimits

0xb397,	// (0x0006200b) cntbar_detail_list_event_pane

0xb347,	// (0x00061fbb) cntbar_detail_list_shct_pane

0xd236,	// (0x00063eaa) aid_list_gen

0xe94e,	// (0x000655c2) aid_scroll

0xe957,	// (0x000655cb) aid_size_touch_scroll_bar

0x29f6,	// (0x0005966a) aid_list_double

0xb3a7,	// (0x0006201b) aid_list_single

0xb3a7,	// (0x0006201b) aid_list_single_lg

0xe960,	// (0x000655d4) aid_list_z_g_a_sm

0xe968,	// (0x000655dc) aid_list_z_g_d

0xe970,	// (0x000655e4) aid_txt_z_prm

0xe97e,	// (0x000655f2) aid_txt_z_prm_cp01

0xe98c,	// (0x00065600) aid_txt_z_sec

0xb3b0,	// (0x00062024) main_cntbar_detail_cont_pane_g1_ParamLimits

0xb3b0,	// (0x00062024) main_cntbar_detail_cont_pane_g1

0xb3c4,	// (0x00062038) main_cntbar_detail_cont_pane_g2_ParamLimits

0xb3c4,	// (0x00062038) main_cntbar_detail_cont_pane_g2

0x0001,

0xfd81,	// (0x000669f5) main_cntbar_detail_cont_pane_g_ParamLimits

0xfd81,	// (0x000669f5) main_cntbar_detail_cont_pane_g

0xe99a,	// (0x0006560e) main_cntbar_detail_cont_pane_t1

0xe9a8,	// (0x0006561c) main_cntbar_detail_cont_pane_t2

0xe9b6,	// (0x0006562a) main_cntbar_detail_cont_pane_t3

0x0002,

0xfd86,	// (0x000669fa) main_cntbar_detail_cont_pane_t

0xb3d4,	// (0x00062048) cell_cntbar_detail_list_shct_pane_ParamLimits

0xb3d4,	// (0x00062048) cell_cntbar_detail_list_shct_pane

0xe9c4,	// (0x00065638) cntbar_detail_list_shct_pane_g1

0xe9cd,	// (0x00065641) cntbar_detail_list_shct_pane_g2

0x0001,

0xfd8d,	// (0x00066a01) cntbar_detail_list_shct_pane_g

0xb3e8,	// (0x0006205c) cntbar_detail_list_event_pane_g1_ParamLimits

0xb3e8,	// (0x0006205c) cntbar_detail_list_event_pane_g1

0xb3f4,	// (0x00062068) cntbar_detail_list_event_pane_g2_ParamLimits

0xb3f4,	// (0x00062068) cntbar_detail_list_event_pane_g2

0x0005,

0xfd92,	// (0x00066a06) cntbar_detail_list_event_pane_g_ParamLimits

0xfd92,	// (0x00066a06) cntbar_detail_list_event_pane_g

0xb460,	// (0x000620d4) cntbar_detail_list_event_pane_t1_ParamLimits

0xb460,	// (0x000620d4) cntbar_detail_list_event_pane_t1

0xb475,	// (0x000620e9) cntbar_detail_list_event_pane_t2_ParamLimits

0xb475,	// (0x000620e9) cntbar_detail_list_event_pane_t2

0x0002,

0xfd9f,	// (0x00066a13) cntbar_detail_list_event_pane_t_ParamLimits

0xfd9f,	// (0x00066a13) cntbar_detail_list_event_pane_t

0xcfd7,	// (0x00063c4b) cell_cntbar_detail_list_shct_pane_g1

0x06bd,	// (0x00057331) navi_pane_mv_g3

0xcc7e,	// (0x000638f2) main_cntbar_detail_pane_ParamLimits

0xc55f,	// (0x000631d3) main_notif_wgt_pane

0xd5da,	// (0x0006424e) aid_tch_main_mp4_pane_g4

0xd7e6,	// (0x0006445a) popup_slider_window_cp02

0xe6bf,	// (0x00065333) list_recal_day_event_pane

0xb305,	// (0x00061f79) cntbar_detail_btn_pane_ParamLimits

0xb305,	// (0x00061f79) cntbar_detail_btn_pane

0xb31e,	// (0x00061f92) cntbar_detail_btn_pane_cp01_ParamLimits

0xb31e,	// (0x00061f92) cntbar_detail_btn_pane_cp01

0xb347,	// (0x00061fbb) cntbar_detail_list_shct_pane_ParamLimits

0xb357,	// (0x00061fcb) cntbar_detail_pane_g1_ParamLimits

0xb357,	// (0x00061fcb) cntbar_detail_pane_g1

0xb367,	// (0x00061fdb) cntbar_detail_pane_t1_ParamLimits

0xb367,	// (0x00061fdb) cntbar_detail_pane_t1

0xb400,	// (0x00062074) cntbar_detail_list_event_pane_g3_ParamLimits

0xb400,	// (0x00062074) cntbar_detail_list_event_pane_g3

0xb418,	// (0x0006208c) cntbar_detail_list_event_pane_g4_ParamLimits

0xb418,	// (0x0006208c) cntbar_detail_list_event_pane_g4

0xb430,	// (0x000620a4) cntbar_detail_list_event_pane_g5_ParamLimits

0xb430,	// (0x000620a4) cntbar_detail_list_event_pane_g5

0xb448,	// (0x000620bc) cntbar_detail_list_event_pane_g6_ParamLimits

0xb448,	// (0x000620bc) cntbar_detail_list_event_pane_g6

0xb48a,	// (0x000620fe) cntbar_detail_list_event_pane_t3_ParamLimits

0xb48a,	// (0x000620fe) cntbar_detail_list_event_pane_t3

0xb49c,	// (0x00062110) popup_notif_wgt_window_ParamLimits

0xb49c,	// (0x00062110) popup_notif_wgt_window

0xb4b5,	// (0x00062129) popup_submenu_window_cp01_ParamLimits

0xb4b5,	// (0x00062129) popup_submenu_window_cp01

0xcf97,	// (0x00063c0b) bg_popup_window_pane_cp10

0xe9d6,	// (0x0006564a) listscroll_notif_wgt_pane

0xe9e8,	// (0x0006565c) list_notif_wgt_window

0xe9f1,	// (0x00065665) scroll_pane_cp033

0xb4c7,	// (0x0006213b) list_notif_wgt_row_pane_ParamLimits

0xb4c7,	// (0x0006213b) list_notif_wgt_row_pane

0xe9fa,	// (0x0006566e) aid_size_list_notif_wgt_del

0xea07,	// (0x0006567b) list_notif_wgt_row_pane_g1

0xea13,	// (0x00065687) list_notif_wgt_row_pane_g2

0xea22,	// (0x00065696) list_notif_wgt_row_pane_g3

0x0002,

0xfda6,	// (0x00066a1a) list_notif_wgt_row_pane_g

0xea2f,	// (0x000656a3) list_notif_wgt_row_pane_t1

0xea45,	// (0x000656b9) list_notif_wgt_row_pane_t2

0xea57,	// (0x000656cb) list_notif_wgt_row_pane_t3

0x0002,

0xfdad,	// (0x00066a21) list_notif_wgt_row_pane_t

0x299a,	// (0x0005960e) list_recal_day_event_pane_g1

0xea69,	// (0x000656dd) list_recal_day_event_pane_t1

0xc55f,	// (0x000631d3) bg_button_pane_cp045

0xb4d7,	// (0x0006214b) cntbar_detail_btn_pane_t1

0x1a58,	// (0x000586cc) main_callh_pane_ParamLimits

0x1a58,	// (0x000586cc) main_callh_pane

0xc55f,	// (0x000631d3) main_coverflow0_pane

0xc55f,	// (0x000631d3) main_wgtman_pane

0xa660,	// (0x000612d4) main_fs_bigclock_unlock_btn_pane_ParamLimits

0xa660,	// (0x000612d4) main_fs_bigclock_unlock_btn_pane

0xad38,	// (0x000619ac) bg_button_pane_cp16

0xad48,	// (0x000619bc) cell_tport_appsw_pane_g3

0xb4e5,	// (0x00062159) cf0_flow_pane_ParamLimits

0xb4e5,	// (0x00062159) cf0_flow_pane

0xea78,	// (0x000656ec) listscroll_cf0_pane

0xea83,	// (0x000656f7) main_cf0_pane_g1

0xb4fa,	// (0x0006216e) main_cf0_pane_t1_ParamLimits

0xb4fa,	// (0x0006216e) main_cf0_pane_t1

0xb511,	// (0x00062185) main_cf0_pane_t2_ParamLimits

0xb511,	// (0x00062185) main_cf0_pane_t2

0x0001,

0xfdb9,	// (0x00066a2d) main_cf0_pane_t_ParamLimits

0xfdb9,	// (0x00066a2d) main_cf0_pane_t

0xea95,	// (0x00065709) scroll_pane_cp11

0xb528,	// (0x0006219c) cf0_flow_pane_g1

0xb530,	// (0x000621a4) cf0_flow_pane_g2

0x0001,

0xfdbe,	// (0x00066a32) cf0_flow_pane_g

0xb538,	// (0x000621ac) cf0_flow_pane_t1

0xc55f,	// (0x000631d3) main_call6_pane

0xc55f,	// (0x000631d3) main_calllock_pane

0xb546,	// (0x000621ba) call6_btn_grp_pane_ParamLimits

0xb546,	// (0x000621ba) call6_btn_grp_pane

0xb560,	// (0x000621d4) call6_pane_g1_ParamLimits

0xb560,	// (0x000621d4) call6_pane_g1

0xb576,	// (0x000621ea) popup_call6_1st_window_ParamLimits

0xb576,	// (0x000621ea) popup_call6_1st_window

0xb587,	// (0x000621fb) popup_call6_2nd_window_ParamLimits

0xb587,	// (0x000621fb) popup_call6_2nd_window

0xb598,	// (0x0006220c) cell_call6_btn_pane_ParamLimits

0xb598,	// (0x0006220c) cell_call6_btn_pane

0xcf97,	// (0x00063c0b) bg_popup_call2_in_pane_cp03

0xeaa0,	// (0x00065714) popup_call6_1st_window_g1

0xeaa8,	// (0x0006571c) popup_call6_1st_window_g2

0xeab0,	// (0x00065724) popup_call6_1st_window_g3

0x0002,

0xfdc3,	// (0x00066a37) popup_call6_1st_window_g

0xeab8,	// (0x0006572c) popup_call6_1st_window_t1

0xeac7,	// (0x0006573b) popup_call6_1st_window_t2

0xead5,	// (0x00065749) popup_call6_1st_window_t3

0x0002,

0xfdca,	// (0x00066a3e) popup_call6_1st_window_t

0xcf97,	// (0x00063c0b) bg_popup_call2_in_pane_cp04

0xeae3,	// (0x00065757) popup_call6_2nd_window_g1

0xeaeb,	// (0x0006575f) popup_call6_2nd_window_g2

0xeaf3,	// (0x00065767) popup_call6_2nd_window_g3

0x0002,

0xfdd1,	// (0x00066a45) popup_call6_2nd_window_g

0xeafb,	// (0x0006576f) popup_call6_2nd_window_t1

0xc5e4,	// (0x00063258) bg_button_pane_cp15

0xefa3,	// (0x00065c17) cell_call6_btn_pane_g1

0xefac,	// (0x00065c20) cell_call6_btn_pane_t1

0xb5ac,	// (0x00062220) listscroll_wgtman_pane_ParamLimits

0xb5ac,	// (0x00062220) listscroll_wgtman_pane

0xb5cd,	// (0x00062241) wgtman_btn_pane_ParamLimits

0xb5cd,	// (0x00062241) wgtman_btn_pane

0x04d1,	// (0x00057145) aid_scroll_copy1

0xeb0a,	// (0x0006577e) list_wgtman_pane

0xb610,	// (0x00062284) wgtman_btn_pane_g1_ParamLimits

0xb610,	// (0x00062284) wgtman_btn_pane_g1

0xb63c,	// (0x000622b0) wgtman_btn_pane_t1_ParamLimits

0xb63c,	// (0x000622b0) wgtman_btn_pane_t1

0xeb14,	// (0x00065788) wgtman_btn_pane_t2_ParamLimits

0xeb14,	// (0x00065788) wgtman_btn_pane_t2

0x0001,

0xfdd8,	// (0x00066a4c) wgtman_btn_pane_t_ParamLimits

0xfdd8,	// (0x00066a4c) wgtman_btn_pane_t

0xb679,	// (0x000622ed) listrow_wgtman_pane_ParamLimits

0xb679,	// (0x000622ed) listrow_wgtman_pane

0xb68c,	// (0x00062300) listrow_wgtman_pane_g1

0xb699,	// (0x0006230d) listrow_wgtman_pane_g2

0x0001,

0xfddd,	// (0x00066a51) listrow_wgtman_pane_g

0xb6b7,	// (0x0006232b) listrow_wgtman_pane_t1

0xb6cf,	// (0x00062343) listrow_wgtman_pane_t2

0x0001,

0xfde2,	// (0x00066a56) listrow_wgtman_pane_t

0xb6f5,	// (0x00062369) wait_bar_pane_cp09

0xeb2b,	// (0x0006579f) main_calllock_btn_pane

0xeb35,	// (0x000657a9) main_calllock_pane_g1

0xc55f,	// (0x000631d3) bg_button_pane_cp17

0xeb3d,	// (0x000657b1) main_calllock_btn_pane_g1

0xeb46,	// (0x000657ba) main_calllock_btn_pane_t1

0xc55f,	// (0x000631d3) main_dialer3_pane

0xc55f,	// (0x000631d3) main_fmrd2_pane

0xcfd7,	// (0x00063c4b) main_fs_bigclock_unlock_btn_pane_g1

0xb70f,	// (0x00062383) main_fs_bigclock_unlock_btn_pane_t1

0xb71d,	// (0x00062391) area_fmrd2_info_pane_ParamLimits

0xb71d,	// (0x00062391) area_fmrd2_info_pane

0xb72e,	// (0x000623a2) area_fmrd2_visual_pane_ParamLimits

0xb72e,	// (0x000623a2) area_fmrd2_visual_pane

0xb73c,	// (0x000623b0) fmrd2_indi_pane_ParamLimits

0xb73c,	// (0x000623b0) fmrd2_indi_pane

0xb749,	// (0x000623bd) area_fmrd2_visual_pane_g1

0xb751,	// (0x000623c5) area_fmrd2_visual_pane_t1

0xb761,	// (0x000623d5) area_fmrd2_visual_pane_t2

0xb771,	// (0x000623e5) area_fmrd2_visual_pane_t3

0x0002,

0xfdec,	// (0x00066a60) area_fmrd2_visual_pane_t

0xb781,	// (0x000623f5) area_fmrd2_info_pane_g1

0xb789,	// (0x000623fd) area_fmrd2_info_pane_t1

0xb799,	// (0x0006240d) area_fmrd2_info_pane_t2

0xb7a9,	// (0x0006241d) area_fmrd2_info_pane_t3

0xb7b9,	// (0x0006242d) area_fmrd2_info_pane_t4

0x0003,

0xfdf3,	// (0x00066a67) area_fmrd2_info_pane_t

0xb7c7,	// (0x0006243b) fmrd2_indi_pane_t1

0xb7d7,	// (0x0006244b) fmrd2_indi_pane_t2

0xb7e7,	// (0x0006245b) fmrd2_indi_pane_t3

0x0002,

0xfdfc,	// (0x00066a70) fmrd2_indi_pane_t

0xdd84,	// (0x000649f8) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xdd84,	// (0x000649f8) list_single_fs_bigclock_indicator_pane_g5

0xde35,	// (0x00064aa9) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xde35,	// (0x00064aa9) list_single_fs_bigclock_indicator_pane_t5

0xaed6,	// (0x00061b4a) aid_cell_bcale_month_pane_ParamLimits

0xaed6,	// (0x00061b4a) aid_cell_bcale_month_pane

0xaef4,	// (0x00061b68) bcale_month_pane_ParamLimits

0xaef4,	// (0x00061b68) bcale_month_pane

0xaf18,	// (0x00061b8c) bcale_preview_pane_ParamLimits

0xaf18,	// (0x00061b8c) bcale_preview_pane

0xe8c6,	// (0x0006553a) list_single_fs_bigclock_pane_t1_ParamLimits

0xe8e5,	// (0x00065559) list_single_fs_bigclock_pane_t2_ParamLimits

0xe8e5,	// (0x00065559) list_single_fs_bigclock_pane_t2

0x0001,

0xfd77,	// (0x000669eb) list_single_fs_bigclock_pane_t_ParamLimits

0xfd77,	// (0x000669eb) list_single_fs_bigclock_pane_t

0xb707,	// (0x0006237b) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfde7,	// (0x00066a5b) main_fs_bigclock_unlock_btn_pane_g

0xb7f7,	// (0x0006246b) aid_dia3_key_size_ParamLimits

0xb7f7,	// (0x0006246b) aid_dia3_key_size

0xb806,	// (0x0006247a) aid_dia3_listrow_size_ParamLimits

0xb806,	// (0x0006247a) aid_dia3_listrow_size

0xb81b,	// (0x0006248f) dia3_keypad_fun_pane_ParamLimits

0xb81b,	// (0x0006248f) dia3_keypad_fun_pane

0xb837,	// (0x000624ab) dia3_keypad_num_pane_ParamLimits

0xb837,	// (0x000624ab) dia3_keypad_num_pane

0xb852,	// (0x000624c6) dia3_listscroll_pane_ParamLimits

0xb852,	// (0x000624c6) dia3_listscroll_pane

0xb865,	// (0x000624d9) dia3_numentry_pane_ParamLimits

0xb865,	// (0x000624d9) dia3_numentry_pane

0xeb55,	// (0x000657c9) dia3_list_pane

0xeb60,	// (0x000657d4) scroll_pane_cp12

0xc55f,	// (0x000631d3) bg_dia3_numentry_pane

0xb87d,	// (0x000624f1) dia3_numentry_pane_t1

0xb88c,	// (0x00062500) cell_dia3_key_num_pane

0xb894,	// (0x00062508) cell_dia3_key0_fun_pane_ParamLimits

0xb894,	// (0x00062508) cell_dia3_key0_fun_pane

0xb8a8,	// (0x0006251c) cell_dia3_key1_fun_pane_ParamLimits

0xb8a8,	// (0x0006251c) cell_dia3_key1_fun_pane

0xb8c0,	// (0x00062534) dia3_listrow_pane

0xdad7,	// (0x0006474b) bg_dia3_numentry_pane_g1

0xc55f,	// (0x000631d3) bg_button_pane_cp21

0xeb6b,	// (0x000657df) cell_dia3_key_num_pane_t1

0xeb79,	// (0x000657ed) cell_dia3_key_num_pane_t2

0xeb88,	// (0x000657fc) cell_dia3_key_num_pane_t3

0xeb97,	// (0x0006580b) cell_dia3_key_num_pane_t4

0x0003,

0xfe03,	// (0x00066a77) cell_dia3_key_num_pane_t

0xc55f,	// (0x000631d3) bg_button_pane_cp19

0xb8d2,	// (0x00062546) cell_dia3_key0_fun_pane_g1

0xc55f,	// (0x000631d3) bg_button_pane_cp20

0xb8da,	// (0x0006254e) cell_dia3_key1_fun_pane_g1

0xb8e2,	// (0x00062556) area_left_week_number_pane

0xb8ee,	// (0x00062562) area_top_day_name_pane

0xb901,	// (0x00062575) frame_month_view_pane

0xeba6,	// (0x0006581a) grid_month_view_pane

0xb914,	// (0x00062588) cell_top_day_name_pane_ParamLimits

0xb914,	// (0x00062588) cell_top_day_name_pane

0xb941,	// (0x000625b5) cell_area_left_week_number_pane_ParamLimits

0xb941,	// (0x000625b5) cell_area_left_week_number_pane

0xb955,	// (0x000625c9) cell_month_view_pane_ParamLimits

0xb955,	// (0x000625c9) cell_month_view_pane

0xebb4,	// (0x00065828) frm_month_g1

0xb982,	// (0x000625f6) frm_month_g2

0xb995,	// (0x00062609) frm_month_g3

0xb9a8,	// (0x0006261c) frm_month_g4

0xb9bb,	// (0x0006262f) frm_month_g5

0xb9ce,	// (0x00062642) frm_month_g6

0xb9e1,	// (0x00062655) frm_month_g7

0xebc1,	// (0x00065835) frm_month_g8

0xb9f4,	// (0x00062668) frm_month_g9

0xba04,	// (0x00062678) frm_month_g10

0xba14,	// (0x00062688) frm_month_g11

0xba24,	// (0x00062698) frm_month_g12

0xba36,	// (0x000626aa) frm_month_g13

0xba48,	// (0x000626bc) frm_month_g14

0xba5c,	// (0x000626d0) frm_month_g15

0xba70,	// (0x000626e4) frm_month_g16

0x000f,

0xfe0c,	// (0x00066a80) frm_month_g

0xebce,	// (0x00065842) cell_top_day_name_pane_t1

0xba84,	// (0x000626f8) cell_area_left_week_number_pane_g1

0xba90,	// (0x00062704) cell_area_left_week_number_pane_t1

0xcce5,	// (0x00063959) cell_month_view_pane_g1

0xbaa3,	// (0x00062717) cell_month_view_pane_t1

0xc55f,	// (0x000631d3) main_fps_pane

0xe064,	// (0x00064cd8) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xe064,	// (0x00064cd8) cmail_ddmenu_btn02_pane_cp1

0xe080,	// (0x00064cf4) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xe080,	// (0x00064cf4) cmail_ddmenu_btn02_pane_cp2

0xb1b9,	// (0x00061e2d) cmail_ddmenu_btn02_pane_g2_ParamLimits

0xb1b9,	// (0x00061e2d) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfd2a,	// (0x0006699e) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfd2a,	// (0x0006699e) cmail_ddmenu_btn02_pane_g

0xb1d7,	// (0x00061e4b) cmail_ddmenu_btn02_pane_t2_ParamLimits

0xb1d7,	// (0x00061e4b) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfd2f,	// (0x000669a3) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfd2f,	// (0x000669a3) cmail_ddmenu_btn02_pane_t

0xbab6,	// (0x0006272a) fps_text_pane_ParamLimits

0xbab6,	// (0x0006272a) fps_text_pane

0xbacd,	// (0x00062741) main_fps_pane_g1_ParamLimits

0xbacd,	// (0x00062741) main_fps_pane_g1

0xbae7,	// (0x0006275b) wait_bar_pane_cp010_ParamLimits

0xbae7,	// (0x0006275b) wait_bar_pane_cp010

0xbaf8,	// (0x0006276c) fps_text_pane_t1_ParamLimits

0xbaf8,	// (0x0006276c) fps_text_pane_t1

0x29ff,	// (0x00059673) cam4_image_uncrop_pane_g1

0x2a08,	// (0x0005967c) cam4_image_uncrop_pane_g2

0x82b4,	// (0x0005ef28) cam4_image_uncrop_pane_g3

0x82bd,	// (0x0005ef31) cam4_image_uncrop_pane_g4

0x0003,

0xf86e,	// (0x000664e2) cam4_image_uncrop_pane_g

0xb8c0,	// (0x00062534) dia3_listrow_pane_ParamLimits

0xc55f,	// (0x000631d3) main_phob2_pane

0xad09,	// (0x0006197d) cell_tport_appsw_pane_cp02_ParamLimits

0xad09,	// (0x0006197d) cell_tport_appsw_pane_cp02

0xad1d,	// (0x00061991) cell_tport_appsw_pane_cp03_ParamLimits

0xad1d,	// (0x00061991) cell_tport_appsw_pane_cp03

0xc55f,	// (0x000631d3) phob2_contact_card_pane

0xc55f,	// (0x000631d3) phob2_listscroll_pane

0xebe1,	// (0x00065855) phob2_list_pane

0xebe9,	// (0x0006585d) scroll_pane_cp034

0xbb10,	// (0x00062784) phob2_cc_data_pane_ParamLimits

0xbb10,	// (0x00062784) phob2_cc_data_pane

0xbb2f,	// (0x000627a3) phob2_cc_listscroll_pane_ParamLimits

0xbb2f,	// (0x000627a3) phob2_cc_listscroll_pane

0xb679,	// (0x000622ed) list_double_large_graphic_phob2_pane_ParamLimits

0xb679,	// (0x000622ed) list_double_large_graphic_phob2_pane

0xbb4d,	// (0x000627c1) list_double_large_graphic_phob2_pane_g1_ParamLimits

0xbb4d,	// (0x000627c1) list_double_large_graphic_phob2_pane_g1

0xbb5a,	// (0x000627ce) list_double_large_graphic_phob2_pane_g2_ParamLimits

0xbb5a,	// (0x000627ce) list_double_large_graphic_phob2_pane_g2

0x0003,

0xfe2d,	// (0x00066aa1) list_double_large_graphic_phob2_pane_g_ParamLimits

0xfe2d,	// (0x00066aa1) list_double_large_graphic_phob2_pane_g

0xbb80,	// (0x000627f4) list_double_large_graphic_phob2_pane_t1_ParamLimits

0xbb80,	// (0x000627f4) list_double_large_graphic_phob2_pane_t1

0xbb95,	// (0x00062809) list_double_large_graphic_phob2_pane_t2_ParamLimits

0xbb95,	// (0x00062809) list_double_large_graphic_phob2_pane_t2

0x0001,

0xfe36,	// (0x00066aaa) list_double_large_graphic_phob2_pane_t_ParamLimits

0xfe36,	// (0x00066aaa) list_double_large_graphic_phob2_pane_t

0xc55f,	// (0x000631d3) list_highlight_pane_cp024

0xebf1,	// (0x00065865) phob2_cc_button_pane

0xbbaa,	// (0x0006281e) phob2_cc_data_pane_g1_ParamLimits

0xbbaa,	// (0x0006281e) phob2_cc_data_pane_g1

0xbbc1,	// (0x00062835) phob2_cc_data_pane_g2_ParamLimits

0xbbc1,	// (0x00062835) phob2_cc_data_pane_g2

0x0001,

0xfe3b,	// (0x00066aaf) phob2_cc_data_pane_g_ParamLimits

0xfe3b,	// (0x00066aaf) phob2_cc_data_pane_g

0xbbd3,	// (0x00062847) phob2_cc_data_pane_t1_ParamLimits

0xbbd3,	// (0x00062847) phob2_cc_data_pane_t1

0xbbeb,	// (0x0006285f) phob2_cc_data_pane_t2_ParamLimits

0xbbeb,	// (0x0006285f) phob2_cc_data_pane_t2

0xbc03,	// (0x00062877) phob2_cc_data_pane_t3_ParamLimits

0xbc03,	// (0x00062877) phob2_cc_data_pane_t3

0x0002,

0xfe40,	// (0x00066ab4) phob2_cc_data_pane_t_ParamLimits

0xfe40,	// (0x00066ab4) phob2_cc_data_pane_t

0xebf9,	// (0x0006586d) phob2_cc_list_pane_ParamLimits

0xebf9,	// (0x0006586d) phob2_cc_list_pane

0x2c7e,	// (0x000598f2) scroll_pane_cp035_ParamLimits

0x2c7e,	// (0x000598f2) scroll_pane_cp035

0xcc7e,	// (0x000638f2) bg_button_pane_cp033

0xec05,	// (0x00065879) phob2_cc_button_pane_g1

0xec11,	// (0x00065885) phob2_cc_button_pane_t1

0xec26,	// (0x0006589a) phob2_cc_button_pane_t2

0x0001,

0xfe47,	// (0x00066abb) phob2_cc_button_pane_t

0xbc1b,	// (0x0006288f) list_double_large_graphic_phob2_cc_pane_ParamLimits

0xbc1b,	// (0x0006288f) list_double_large_graphic_phob2_cc_pane

0xbc4d,	// (0x000628c1) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0xbc4d,	// (0x000628c1) list_double_large_graphic_phob2_cc_pane_g1

0xbc59,	// (0x000628cd) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0xbc59,	// (0x000628cd) list_double_large_graphic_phob2_cc_pane_g2

0xbc65,	// (0x000628d9) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0xbc65,	// (0x000628d9) list_double_large_graphic_phob2_cc_pane_g3

0xbc71,	// (0x000628e5) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0xbc71,	// (0x000628e5) list_double_large_graphic_phob2_cc_pane_g4

0xbc7d,	// (0x000628f1) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0xbc7d,	// (0x000628f1) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xfe4c,	// (0x00066ac0) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xfe4c,	// (0x00066ac0) list_double_large_graphic_phob2_cc_pane_g

0xbc89,	// (0x000628fd) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0xbc89,	// (0x000628fd) list_double_large_graphic_phob2_cc_pane_t1

0xbcb2,	// (0x00062926) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0xbcb2,	// (0x00062926) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xfe57,	// (0x00066acb) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xfe57,	// (0x00066acb) list_double_large_graphic_phob2_cc_pane_t

0xec38,	// (0x000658ac) list_highlight_pane_cp025_ParamLimits

0xec38,	// (0x000658ac) list_highlight_pane_cp025

0xcc7e,	// (0x000638f2) bg_button_pane_cp033_ParamLimits

0xec05,	// (0x00065879) phob2_cc_button_pane_g1_ParamLimits

0xec11,	// (0x00065885) phob2_cc_button_pane_t1_ParamLimits

0xec26,	// (0x0006589a) phob2_cc_button_pane_t2_ParamLimits

0xfe47,	// (0x00066abb) phob2_cc_button_pane_t_ParamLimits

0x3e0b,	// (0x0005aa7f) popup_wgtman_window

0x286c,	// (0x000594e0) scroll_pane_cp038

0xb5f2,	// (0x00062266) wgtman_btn_pane_cp_01_ParamLimits

0xb5f2,	// (0x00062266) wgtman_btn_pane_cp_01

0xec46,	// (0x000658ba) wgtman_content_pane

0xec4f,	// (0x000658c3) wgtman_heading_pane

0xc55f,	// (0x000631d3) bg_heading_pane_cp02

0xec58,	// (0x000658cc) wgtman_heading_pane_g1

0xec60,	// (0x000658d4) wgtman_heading_pane_t1

0xec6e,	// (0x000658e2) scroll_pane_cp036

0xec76,	// (0x000658ea) wgtman_list_pane

0xdf20,	// (0x00064b94) wgtman_list_pane_t1_ParamLimits

0xdf20,	// (0x00064b94) wgtman_list_pane_t1

0xd872,	// (0x000644e6) cam4_grid_pane

0x8f42,	// (0x0005fbb6) bg_button_pane_cp015_ParamLimits

0x8f53,	// (0x0005fbc7) bg_button_pane_cp016_ParamLimits

0x8f5f,	// (0x0005fbd3) bg_button_pane_cp017_ParamLimits

0x8fb3,	// (0x0005fc27) popup_vitu2_query_window_g3_ParamLimits

0x8fb3,	// (0x0005fc27) popup_vitu2_query_window_g3

0x9054,	// (0x0005fcc8) popup_vitu2_query_window_t6_ParamLimits

0x9054,	// (0x0005fcc8) popup_vitu2_query_window_t6

0x907f,	// (0x0005fcf3) popup_vitu2_query_window_t7_ParamLimits

0x907f,	// (0x0005fcf3) popup_vitu2_query_window_t7

0x29ff,	// (0x00059673) cam4_grid_pane_g1

0x2a08,	// (0x0005967c) cam4_grid_pane_g2

0xec7e,	// (0x000658f2) cam4_grid_pane_g3

0xec87,	// (0x000658fb) cam4_grid_pane_g4

0x0003,

0xfe5c,	// (0x00066ad0) cam4_grid_pane_g

0x49e9,	// (0x0005b65d) aid_placing_vt_slider_lsc_ParamLimits

0x4ce6,	// (0x0005b95a) vidtel_button_pane_ParamLimits

0x4ce6,	// (0x0005b95a) vidtel_button_pane

0xc55f,	// (0x000631d3) bg_button_pane_cp034

0xec92,	// (0x00065906) vidtel_button_pane_g1

0xec9a,	// (0x0006590e) vidtel_button_pane_t1

0x2978,	// (0x000595ec) aid_size_vtel_slider_touch

0x2c7e,	// (0x000598f2) scroll_pane_cp039

0xa354,	// (0x00060fc8) ncim_query_button_pane_cp01_ParamLimits

0xa373,	// (0x00060fe7) ncimui_query_pane_g1_ParamLimits

0xcc7e,	// (0x000638f2) input_focus_pane_cp012_ParamLimits

0xdb1d,	// (0x00064791) ncim_query_entry_pane_t1_ParamLimits

0x2c7e,	// (0x000598f2) scroll_pane_cp039_ParamLimits

0x05a8,	// (0x0005721c) navi_pane_bcale_mc_g1

0x05b0,	// (0x00057224) navi_pane_bcale_mc_t1

0xe0b4,	// (0x00064d28) main_sp_fs_email_pane_g1

0xe0c0,	// (0x00064d34) main_sp_fs_email_pane_g2

0x0001,

0xfc5f,	// (0x000668d3) main_sp_fs_email_pane_g

0xe551,	// (0x000651c5) list_single_cale_mrui_row_pane_g3_ParamLimits

0xe551,	// (0x000651c5) list_single_cale_mrui_row_pane_g3

0xb1f7,	// (0x00061e6b) list_single_recal_day_pane_g5_event_pane

0xe730,	// (0x000653a4) list_single_recal_day_pane_g7

0xecb0,	// (0x00065924) list_recal_day_event_pane_cp01

0xecb9,	// (0x0006592d) list_recal_vselct_arw_lo_pane_cp01

0xecc1,	// (0x00065935) list_recal_vselct_arw_up_pane_cp01

0xecc9,	// (0x0006593d) list_recal_vselct_pane_cp01

0x299a,	// (0x0005960e) list_recal_day_event_pane_cp01_g1

0xecd3,	// (0x00065947) list_recal_day_event_pane_cp01_t1

0xe738,	// (0x000653ac) list_single_recal_day_pane_t1_ParamLimits

0xe74a,	// (0x000653be) list_single_recal_day_pane_t2_ParamLimits

0xfd3f,	// (0x000669b3) list_single_recal_day_pane_t_ParamLimits

0xcc5c,	// (0x000638d0) bg_notes_pane_ParamLimits

0xcd3d,	// (0x000639b1) list_notes_pane_ParamLimits

0x402c,	// (0x0005aca0) scroll_pane_cp06_ParamLimits

0xcd79,	// (0x000639ed) main_notes_pane_ParamLimits

0xcc7e,	// (0x000638f2) main_welc_pane

0xbd0a,	// (0x0006297e) main_welc_body_pane_ParamLimits

0xbd0a,	// (0x0006297e) main_welc_body_pane

0xbd27,	// (0x0006299b) main_welc_opti_pane_ParamLimits

0xbd27,	// (0x0006299b) main_welc_opti_pane

0xbd9d,	// (0x00062a11) main_welc_pane_t1_ParamLimits

0xbd9d,	// (0x00062a11) main_welc_pane_t1

0xbf80,	// (0x00062bf4) main_welc_body_row_pane_ParamLimits

0xbf80,	// (0x00062bf4) main_welc_body_row_pane

0xccd7,	// (0x0006394b) main_welc_opti_row_pane_ParamLimits

0xccd7,	// (0x0006394b) main_welc_opti_row_pane

0xecf1,	// (0x00065965) main_welc_opti_row_pane_g1

0xbf95,	// (0x00062c09) main_welc_opti_row_pane_t1

0xecf9,	// (0x0006596d) main_welc_body_row_pane_t1

0xe9e0,	// (0x00065654) popup_notif_wgt_heading_pane

0xe9fa,	// (0x0006566e) aid_size_list_notif_wgt_del_ParamLimits

0xea07,	// (0x0006567b) list_notif_wgt_row_pane_g1_ParamLimits

0xea13,	// (0x00065687) list_notif_wgt_row_pane_g2_ParamLimits

0xea22,	// (0x00065696) list_notif_wgt_row_pane_g3_ParamLimits

0xfda6,	// (0x00066a1a) list_notif_wgt_row_pane_g_ParamLimits

0xea2f,	// (0x000656a3) list_notif_wgt_row_pane_t1_ParamLimits

0xea45,	// (0x000656b9) list_notif_wgt_row_pane_t2_ParamLimits

0xea57,	// (0x000656cb) list_notif_wgt_row_pane_t3_ParamLimits

0xfdad,	// (0x00066a21) list_notif_wgt_row_pane_t_ParamLimits

0xb68c,	// (0x00062300) listrow_wgtman_pane_g1_ParamLimits

0xb699,	// (0x0006230d) listrow_wgtman_pane_g2_ParamLimits

0xfddd,	// (0x00066a51) listrow_wgtman_pane_g_ParamLimits

0xb6b7,	// (0x0006232b) listrow_wgtman_pane_t1_ParamLimits

0xb6cf,	// (0x00062343) listrow_wgtman_pane_t2_ParamLimits

0xfde2,	// (0x00066a56) listrow_wgtman_pane_t_ParamLimits

0xb6f5,	// (0x00062369) wait_bar_pane_cp09_ParamLimits

0xc55f,	// (0x000631d3) bg_popup_heading_pane_cp02

0xed08,	// (0x0006597c) popup_notif_wgt_heading_pane_g1

0xed10,	// (0x00065984) popup_notif_wgt_heading_pane_t1

0xc55f,	// (0x000631d3) main_vids_pane

0xc55f,	// (0x000631d3) vids_listscroll_pane

0xbfa4,	// (0x00062c18) scroll_pane_cp040

0xc55f,	// (0x000631d3) vids_list_pane

0xbfaf,	// (0x00062c23) vids_list_double_pane_ParamLimits

0xbfaf,	// (0x00062c23) vids_list_double_pane

0xbfc0,	// (0x00062c34) vids_list_double_pane_g1

0xbfc9,	// (0x00062c3d) vids_list_double_pane_t1

0xbfd8,	// (0x00062c4c) vids_list_double_pane_t2

0x0001,

0xfe7b,	// (0x00066aef) vids_list_double_pane_t

0xc5d6,	// (0x0006324a) main_ncimui_pane_ParamLimits

0xa18a,	// (0x00060dfe) main_ncimui_pane_g1_ParamLimits

0xa196,	// (0x00060e0a) main_ncimui_pane_g2_ParamLimits

0xa196,	// (0x00060e0a) main_ncimui_pane_g2

0x0001,

0xfb60,	// (0x000667d4) main_ncimui_pane_g_ParamLimits

0xfb60,	// (0x000667d4) main_ncimui_pane_g

0xbd42,	// (0x000629b6) main_welc_pane_g1_ParamLimits

0xbd42,	// (0x000629b6) main_welc_pane_g1

0xbd57,	// (0x000629cb) main_welc_pane_g2_ParamLimits

0xbd57,	// (0x000629cb) main_welc_pane_g2

0x0003,

0xfe65,	// (0x00066ad9) main_welc_pane_g_ParamLimits

0xfe65,	// (0x00066ad9) main_welc_pane_g

0x4012,	// (0x0005ac86) listscroll_mce_pane_ParamLimits

0x06fd,	// (0x00057371) wait_bar_pane_cp10

0x1a4c,	// (0x000586c0) main_cale_day_pane_ParamLimits

0x1a4c,	// (0x000586c0) main_cale_week_pane_ParamLimits

0xcc5c,	// (0x000638d0) main_messa_pane_ParamLimits

0x76c6,	// (0x0005e33a) main_clock2_btn_pane_ParamLimits

0x76c6,	// (0x0005e33a) main_clock2_btn_pane

0x224f,	// (0x00058ec3) main_clock2_btn_pane_cp01_ParamLimits

0x224f,	// (0x00058ec3) main_clock2_btn_pane_cp01

0xe4dd,	// (0x00065151) list_cale_mrui_pane_ParamLimits

0xea8d,	// (0x00065701) main_cf0_pane_g2

0x0001,

0xfdb4,	// (0x00066a28) main_cf0_pane_g

0xb8e2,	// (0x00062556) area_left_week_number_pane_ParamLimits

0xb8ee,	// (0x00062562) area_top_day_name_pane_ParamLimits

0xb901,	// (0x00062575) frame_month_view_pane_ParamLimits

0xeba6,	// (0x0006581a) grid_month_view_pane_ParamLimits

0xebb4,	// (0x00065828) frm_month_g1_ParamLimits

0xb982,	// (0x000625f6) frm_month_g2_ParamLimits

0xb995,	// (0x00062609) frm_month_g3_ParamLimits

0xb9a8,	// (0x0006261c) frm_month_g4_ParamLimits

0xb9bb,	// (0x0006262f) frm_month_g5_ParamLimits

0xb9ce,	// (0x00062642) frm_month_g6_ParamLimits

0xb9e1,	// (0x00062655) frm_month_g7_ParamLimits

0xebc1,	// (0x00065835) frm_month_g8_ParamLimits

0xb9f4,	// (0x00062668) frm_month_g9_ParamLimits

0xba04,	// (0x00062678) frm_month_g10_ParamLimits

0xba14,	// (0x00062688) frm_month_g11_ParamLimits

0xba24,	// (0x00062698) frm_month_g12_ParamLimits

0xba36,	// (0x000626aa) frm_month_g13_ParamLimits

0xba48,	// (0x000626bc) frm_month_g14_ParamLimits

0xba5c,	// (0x000626d0) frm_month_g15_ParamLimits

0xba70,	// (0x000626e4) frm_month_g16_ParamLimits

0xfe0c,	// (0x00066a80) frm_month_g_ParamLimits

0xebce,	// (0x00065842) cell_top_day_name_pane_t1_ParamLimits

0xba84,	// (0x000626f8) cell_area_left_week_number_pane_g1_ParamLimits

0xba90,	// (0x00062704) cell_area_left_week_number_pane_t1_ParamLimits

0xcce5,	// (0x00063959) cell_month_view_pane_g1_ParamLimits

0xbaa3,	// (0x00062717) cell_month_view_pane_t1_ParamLimits

0xcc54,	// (0x000638c8) main_clock2_btn_pane_g1

0xed1e,	// (0x00065992) main_clock2_btn_pane_t1

0xcc7e,	// (0x000638f2) listscroll_cmail_pane_ParamLimits

0xe0b4,	// (0x00064d28) main_sp_fs_email_pane_g1_ParamLimits

0xe0c0,	// (0x00064d34) main_sp_fs_email_pane_g2_ParamLimits

0xfc5f,	// (0x000668d3) main_sp_fs_email_pane_g_ParamLimits

0xe6a0,	// (0x00065314) list_recal_day_pane_ParamLimits

0xe6b1,	// (0x00065325) mian_recal_day_pane_t1

0xabac,	// (0x00061820) list_single_dyc_row_text_pane_t4_ParamLimits

0xabac,	// (0x00061820) list_single_dyc_row_text_pane_t4

0xabf5,	// (0x00061869) list_single_dyc_row_text_pane_t5_ParamLimits

0xabf5,	// (0x00061869) list_single_dyc_row_text_pane_t5

0xe162,	// (0x00064dd6) list_single_dyc_row_text_pane_t6_ParamLimits

0xe162,	// (0x00064dd6) list_single_dyc_row_text_pane_t6

0x5758,	// (0x0005c3cc) aid_mgn_list_cale_time_pane

0xc5d6,	// (0x0006324a) main_gallery2_pane_ParamLimits

0x2265,	// (0x00058ed9) main_clock2_pane_cp01_t1

0x2273,	// (0x00058ee7) main_clock2_pane_cp01_t3

0x0001,

0xf745,	// (0x000663b9) main_clock2_pane_cp01_t

0x43d6,	// (0x0005b04a) cale_week_scroll_pane_g16_ParamLimits

0x43d6,	// (0x0005b04a) cale_week_scroll_pane_g16

0xcf97,	// (0x00063c0b) vorec_slider_pane

0xec9a,	// (0x0006590e) vidtel_button_pane_t1_ParamLimits

0xb25d,	// (0x00061ed1) main_fs_bigclock_clock_pane_g1_ParamLimits

0xb25d,	// (0x00061ed1) main_fs_bigclock_clock_pane_g2_ParamLimits

0xb26e,	// (0x00061ee2) main_fs_bigclock_clock_pane_g3_ParamLimits

0xb26e,	// (0x00061ee2) main_fs_bigclock_clock_pane_g4_ParamLimits

0xfd62,	// (0x000669d6) main_fs_bigclock_clock_pane_g_ParamLimits

0xb281,	// (0x00061ef5) main_fs_bigclock_clock_pane_t1_ParamLimits

0xb297,	// (0x00061f0b) main_fs_bigclock_clock_pane_t2_ParamLimits

0xfd6b,	// (0x000669df) main_fs_bigclock_clock_pane_t_ParamLimits

0x6fa2,	// (0x0005dc16) main_mup3_lyrics_pane_ParamLimits

0x6fa2,	// (0x0005dc16) main_mup3_lyrics_pane

0xc00e,	// (0x00062c82) main_mup3_lyrics_pane_t1_ParamLimits

0xc00e,	// (0x00062c82) main_mup3_lyrics_pane_t1

0xd5c4,	// (0x00064238) aid_main_mp4_pane_t1_area

0xd5ce,	// (0x00064242) aid_main_mp4_pane_t2_area

0xd67a,	// (0x000642ee) main_mp4_pane_g7_ParamLimits

0xd67a,	// (0x000642ee) main_mp4_pane_g7

0xd686,	// (0x000642fa) main_mp4_pane_g8_ParamLimits

0xd686,	// (0x000642fa) main_mp4_pane_g8

0x8085,	// (0x0005ecf9) aid_call6_pane_g1_size

0xbc36,	// (0x000628aa) list_double_large_graphic_phob2_other_pane_ParamLimits

0xbc36,	// (0x000628aa) list_double_large_graphic_phob2_other_pane

0x04d9,	// (0x0005714d) list_double_large_graphic_phob2_other_pane_g1

0xc55f,	// (0x000631d3) list_highlight_pane_cp026

0xcc7e,	// (0x000638f2) main_welc_pane_ParamLimits

0xa9eb,	// (0x0006165f) main_sp_fs_ctrlbar_pane_g3_ParamLimits

0xa9eb,	// (0x0006165f) main_sp_fs_ctrlbar_pane_g3

0xaa05,	// (0x00061679) main_sp_fs_ctrlbar_pane_g4_ParamLimits

0xaa05,	// (0x00061679) main_sp_fs_ctrlbar_pane_g4

0xaa39,	// (0x000616ad) toolbar2_fixed_button_pane_cp01

0xaa44,	// (0x000616b8) toolbar2_fixed_button_pane_cp02

0xaa51,	// (0x000616c5) toolbar2_fixed_button_pane_cp03

0xbcee,	// (0x00062962) list_welc_entry_pane_ParamLimits

0xbcee,	// (0x00062962) list_welc_entry_pane

0xbd6c,	// (0x000629e0) main_welc_pane_g3_ParamLimits

0xbd6c,	// (0x000629e0) main_welc_pane_g3

0xbdbb,	// (0x00062a2f) main_welc_pane_t2_ParamLimits

0xbdbb,	// (0x00062a2f) main_welc_pane_t2

0xbdd5,	// (0x00062a49) main_welc_pane_t3_ParamLimits

0xbdd5,	// (0x00062a49) main_welc_pane_t3

0x0005,

0xfe6e,	// (0x00066ae2) main_welc_pane_t_ParamLimits

0xfe6e,	// (0x00066ae2) main_welc_pane_t

0xbf04,	// (0x00062b78) welc_button_pane_ParamLimits

0xbf04,	// (0x00062b78) welc_button_pane

0xbf6c,	// (0x00062be0) welc_service_logo_pane_ParamLimits

0xbf6c,	// (0x00062be0) welc_service_logo_pane

0xc02a,	// (0x00062c9e) list_single_welc_entry_pane_ParamLimits

0xc02a,	// (0x00062c9e) list_single_welc_entry_pane

0xc03b,	// (0x00062caf) list_single_welc_entry_pane_g1

0xc043,	// (0x00062cb7) list_single_welc_entry_pane_t1

0xc051,	// (0x00062cc5) list_single_welc_entry_pane_t2

0x0001,

0xfe80,	// (0x00066af4) list_single_welc_entry_pane_t

0xc55f,	// (0x000631d3) bg_button_pane_cp035

0xed2c,	// (0x000659a0) welc_button_pane_t1

0xed3a,	// (0x000659ae) welc_service_logo_pane_g1

0xed43,	// (0x000659b7) welc_service_logo_pane_g2

0x0001,

0xfe85,	// (0x00066af9) welc_service_logo_pane_g

0xc5e4,	// (0x00063258) main_int_radio_pane

0xa16d,	// (0x00060de1) list_single_fs_dyc_pane_g1

0xbb66,	// (0x000627da) list_double_large_graphic_phob2_pane_g3_ParamLimits

0xbb66,	// (0x000627da) list_double_large_graphic_phob2_pane_g3

0xbb72,	// (0x000627e6) list_double_large_graphic_phob2_pane_g4_ParamLimits

0xbb72,	// (0x000627e6) list_double_large_graphic_phob2_pane_g4

0xc05f,	// (0x00062cd3) main_int_radio1_pane_ParamLimits

0xc05f,	// (0x00062cd3) main_int_radio1_pane

0xed4c,	// (0x000659c0) find_pane_cp02

0xc07c,	// (0x00062cf0) input_focus_pane_cp12_ParamLimits

0xc07c,	// (0x00062cf0) input_focus_pane_cp12

0xc08c,	// (0x00062d00) input_focus_pane_cp13_ParamLimits

0xc08c,	// (0x00062d00) input_focus_pane_cp13

0xc0a0,	// (0x00062d14) input_focus_pane_cp14_ParamLimits

0xc0a0,	// (0x00062d14) input_focus_pane_cp14

0xed55,	// (0x000659c9) int_radio1_listscroll_pane

0xc0b4,	// (0x00062d28) main_int_radio1_pane_g1_ParamLimits

0xc0b4,	// (0x00062d28) main_int_radio1_pane_g1

0xc0cc,	// (0x00062d40) main_int_radio1_pane_t1_ParamLimits

0xc0cc,	// (0x00062d40) main_int_radio1_pane_t1

0xc0e7,	// (0x00062d5b) main_int_radio1_pane_t2_ParamLimits

0xc0e7,	// (0x00062d5b) main_int_radio1_pane_t2

0xc102,	// (0x00062d76) main_int_radio1_pane_t3_ParamLimits

0xc102,	// (0x00062d76) main_int_radio1_pane_t3

0xc11d,	// (0x00062d91) main_int_radio1_pane_t4_ParamLimits

0xc11d,	// (0x00062d91) main_int_radio1_pane_t4

0xed5f,	// (0x000659d3) main_int_radio1_pane_t5_ParamLimits

0xed5f,	// (0x000659d3) main_int_radio1_pane_t5

0xc12f,	// (0x00062da3) main_int_radio1_pane_t6_ParamLimits

0xc12f,	// (0x00062da3) main_int_radio1_pane_t6

0xc144,	// (0x00062db8) main_int_radio1_pane_t7_ParamLimits

0xc144,	// (0x00062db8) main_int_radio1_pane_t7

0xc159,	// (0x00062dcd) main_int_radio1_pane_t8_ParamLimits

0xc159,	// (0x00062dcd) main_int_radio1_pane_t8

0xc178,	// (0x00062dec) main_int_radio1_pane_t9_ParamLimits

0xc178,	// (0x00062dec) main_int_radio1_pane_t9

0xc18a,	// (0x00062dfe) main_int_radio1_pane_t10_ParamLimits

0xc18a,	// (0x00062dfe) main_int_radio1_pane_t10

0xc1b0,	// (0x00062e24) main_int_radio1_pane_t11_ParamLimits

0xc1b0,	// (0x00062e24) main_int_radio1_pane_t11

0xc1d6,	// (0x00062e4a) main_int_radio1_pane_t12_ParamLimits

0xc1d6,	// (0x00062e4a) main_int_radio1_pane_t12

0x000b,

0xfe8a,	// (0x00066afe) main_int_radio1_pane_t_ParamLimits

0xfe8a,	// (0x00066afe) main_int_radio1_pane_t

0xed71,	// (0x000659e5) int_radio_list_pane

0xebe9,	// (0x0006585d) scroll_pane_cp037

0xed79,	// (0x000659ed) list_double_large_graphic_int_radio_pane_ParamLimits

0xed79,	// (0x000659ed) list_double_large_graphic_int_radio_pane

0xed92,	// (0x00065a06) list_double_large_graphic_int_radio_pane_g1

0xed9b,	// (0x00065a0f) list_double_large_graphic_int_radio_pane_t1

0xeda9,	// (0x00065a1d) list_double_large_graphic_int_radio_pane_t2

0x0001,

0xfea3,	// (0x00066b17) list_double_large_graphic_int_radio_pane_t

0xc55f,	// (0x000631d3) list_highlight_pane_cp027

0xece1,	// (0x00065955) main_button_pane_4

0xbd7c,	// (0x000629f0) main_welc_pane_g4_ParamLimits

0xbd7c,	// (0x000629f0) main_welc_pane_g4

0xbded,	// (0x00062a61) main_welc_pane_t4_ParamLimits

0xbded,	// (0x00062a61) main_welc_pane_t4

0xbe04,	// (0x00062a78) main_welc_pane_t5_ParamLimits

0xbe04,	// (0x00062a78) main_welc_pane_t5

0xbe41,	// (0x00062ab5) main_welc_pane_t6_ParamLimits

0xbe41,	// (0x00062ab5) main_welc_pane_t6

0xbf1b,	// (0x00062b8f) welc_button_pane_2_ParamLimits

0xbf1b,	// (0x00062b8f) welc_button_pane_2

0xbf37,	// (0x00062bab) welc_button_pane_3_ParamLimits

0xbf37,	// (0x00062bab) welc_button_pane_3

0xece9,	// (0x0006595d) welc_button_pane_4

0xbf56,	// (0x00062bca) welc_button_pane_5_ParamLimits

0xbf56,	// (0x00062bca) welc_button_pane_5

0x3c0e,	// (0x0005a882) main_popup_welc_pane

0xedc6,	// (0x00065a3a) main_welc_sk_g3

0xedd0,	// (0x00065a44) main_welc_sk_g4

0xedda,	// (0x00065a4e) main_welc_sk_t3

0xedea,	// (0x00065a5e) main_welc_sk_t4

0xedfa,	// (0x00065a6e) popup_welc_pane_t4

0xee08,	// (0x00065a7c) popup_welc_pane_t5

0xee18,	// (0x00065a8c) popup_welc_pane_t6

0xc5e4,	// (0x00063258) main_acti_pane

0xc55f,	// (0x000631d3) main_sso_pane

0xc1e8,	// (0x00062e5c) sso_body_pane_ParamLimits

0xc1e8,	// (0x00062e5c) sso_body_pane

0xc1fc,	// (0x00062e70) sso_logo_pane_ParamLimits

0xc1fc,	// (0x00062e70) sso_logo_pane

0xc228,	// (0x00062e9c) sso_sk_pane_ParamLimits

0xc228,	// (0x00062e9c) sso_sk_pane

0xcfd7,	// (0x00063c4b) main_sso_logo_pane_g1

0xc23a,	// (0x00062eae) sso_sk_pane_t1_ParamLimits

0xc23a,	// (0x00062eae) sso_sk_pane_t1

0xc254,	// (0x00062ec8) sso_sk_pane_t2_ParamLimits

0xc254,	// (0x00062ec8) sso_sk_pane_t2

0x0001,

0xfea8,	// (0x00066b1c) sso_sk_pane_t_ParamLimits

0xfea8,	// (0x00066b1c) sso_sk_pane_t

0xee56,	// (0x00065aca) aid_sso_gap

0xee5f,	// (0x00065ad3) aid_sso_txt1

0xee69,	// (0x00065add) aid_sso_txt2

0xee73,	// (0x00065ae7) aid_sso_txt3

0x0002,

0xfead,	// (0x00066b21) aid_sso_txt

0xee7d,	// (0x00065af1) aid_sso_widget

0xc2be,	// (0x00062f32) sso_btn_pane_ParamLimits

0xc2be,	// (0x00062f32) sso_btn_pane

0xc346,	// (0x00062fba) sso_option_pane_ParamLimits

0xc346,	// (0x00062fba) sso_option_pane

0xc3c6,	// (0x0006303a) sso_query_pane_ParamLimits

0xc3c6,	// (0x0006303a) sso_query_pane

0xc41c,	// (0x00063090) sso_query_pane_cp01_ParamLimits

0xc41c,	// (0x00063090) sso_query_pane_cp01

0xc476,	// (0x000630ea) sso_t_hdr_pane_ParamLimits

0xc476,	// (0x000630ea) sso_t_hdr_pane

0xc49a,	// (0x0006310e) sso_t_nml_pane_ParamLimits

0xc49a,	// (0x0006310e) sso_t_nml_pane

0xee73,	// (0x00065ae7) sso_t_sub_pane

0xc209,	// (0x00062e7d) sso_popup_window_ParamLimits

0xc209,	// (0x00062e7d) sso_popup_window

0xc26a,	// (0x00062ede) sso_apps_pane_ParamLimits

0xc26a,	// (0x00062ede) sso_apps_pane

0xc294,	// (0x00062f08) sso_body_pane_g1

0xc29e,	// (0x00062f12) sso_body_pane_t1

0xc2ae,	// (0x00062f22) sso_body_pane_t2

0x0001,

0xfeb4,	// (0x00066b28) sso_body_pane_t

0xc310,	// (0x00062f84) sso_btn_pane_cp01_ParamLimits

0xc310,	// (0x00062f84) sso_btn_pane_cp01

0xc39a,	// (0x0006300e) sso_prog_pane_ParamLimits

0xc39a,	// (0x0006300e) sso_prog_pane

0xee87,	// (0x00065afb) sso_t_hdr_pane_t1_ParamLimits

0xee87,	// (0x00065afb) sso_t_hdr_pane_t1

0xee9a,	// (0x00065b0e) input_focus_pane_cp10_ParamLimits

0xee9a,	// (0x00065b0e) input_focus_pane_cp10

0xeeb0,	// (0x00065b24) sso_query_pane_t1_ParamLimits

0xeeb0,	// (0x00065b24) sso_query_pane_t1

0xeec3,	// (0x00065b37) sso_query_pane_t2_ParamLimits

0xeec3,	// (0x00065b37) sso_query_pane_t2

0xeedc,	// (0x00065b50) sso_query_pane_t3_ParamLimits

0xeedc,	// (0x00065b50) sso_query_pane_t3

0xef06,	// (0x00065b7a) sso_query_pane_t4_ParamLimits

0xef06,	// (0x00065b7a) sso_query_pane_t4

0x0003,

0xfeb9,	// (0x00066b2d) sso_query_pane_t_ParamLimits

0xfeb9,	// (0x00066b2d) sso_query_pane_t

0xc55f,	// (0x000631d3) bg_button_pane_cp22

0xedb7,	// (0x00065a2b) sso_btn_pane_t1

0xc4f0,	// (0x00063164) sso_t_nml_pane_t1_ParamLimits

0xc4f0,	// (0x00063164) sso_t_nml_pane_t1

0xefbb,	// (0x00065c2f) sso_option_row_pane_ParamLimits

0xefbb,	// (0x00065c2f) sso_option_row_pane

0xefc8,	// (0x00065c3c) sso_t_sub_pane_t1_ParamLimits

0xefc8,	// (0x00065c3c) sso_t_sub_pane_t1

0xcc7e,	// (0x000638f2) bg_popup_window_pane_cp11_ParamLimits

0xcc7e,	// (0x000638f2) bg_popup_window_pane_cp11

0xefdb,	// (0x00065c4f) popup_sk_window_cp01_ParamLimits

0xefdb,	// (0x00065c4f) popup_sk_window_cp01

0xefe8,	// (0x00065c5c) sso_popup_body_pane_ParamLimits

0xefe8,	// (0x00065c5c) sso_popup_body_pane

0xeff5,	// (0x00065c69) scroll_pane_cp21_ParamLimits

0xeff5,	// (0x00065c69) scroll_pane_cp21

0xf002,	// (0x00065c76) sso_popup_body_t_pane_ParamLimits

0xf002,	// (0x00065c76) sso_popup_body_t_pane

0xf00f,	// (0x00065c83) sso_popup_body_t_hdr_pane_ParamLimits

0xf00f,	// (0x00065c83) sso_popup_body_t_hdr_pane

0xf01d,	// (0x00065c91) sso_popup_body_t_nml_pane_ParamLimits

0xf01d,	// (0x00065c91) sso_popup_body_t_nml_pane

0xf038,	// (0x00065cac) sso_popup_body_t_sub_pane_ParamLimits

0xf038,	// (0x00065cac) sso_popup_body_t_sub_pane

0xf05b,	// (0x00065ccf) sso_popup_body_t_hdr_pane_t1

0xc50b,	// (0x0006317f) sso_popup_body_t_nml_pane_t1_ParamLimits

0xc50b,	// (0x0006317f) sso_popup_body_t_nml_pane_t1

0x0042,	// (0x00056cb6) sso_popup_body_t_sub_pane_t1_ParamLimits

0x0042,	// (0x00056cb6) sso_popup_body_t_sub_pane_t1

0xcfd7,	// (0x00063c4b) sso_prog_pane_g1

0xc545,	// (0x000631b9) sso_apps_pane_comp1_ParamLimits

0xc545,	// (0x000631b9) sso_apps_pane_comp1

0x0083,	// (0x00056cf7) sso_apps_pane_comp1_g1

0x008b,	// (0x00056cff) sso_apps_pane_comp1_t1

0x0099,	// (0x00056d0d) sso_option_row_pane_g1

0x00a1,	// (0x00056d15) sso_option_row_pane_t1

0xbcdb,	// (0x0006294f) bg_welc_area_ParamLimits

0xbcdb,	// (0x0006294f) bg_welc_area

0xbe7f,	// (0x00062af3) sso_t_hdr_pane_a_t1_ParamLimits

0xbe7f,	// (0x00062af3) sso_t_hdr_pane_a_t1

0xbe9a,	// (0x00062b0e) sso_t_nml_pane_a_t1_ParamLimits

0xbe9a,	// (0x00062b0e) sso_t_nml_pane_a_t1

0xbec9,	// (0x00062b3d) sso_t_sub_pane_a_t1_ParamLimits

0xbec9,	// (0x00062b3d) sso_t_sub_pane_a_t1

0xedb7,	// (0x00065a2b) sso_btn_pane_t1_copy1

0xc55f,	// (0x000631d3) welc_button_pane_2_comp1

0xee26,	// (0x00065a9a) sso_t_hdr_pane_p_t1

0xee36,	// (0x00065aaa) sso_t_nml_pane_p_t1

0xee46,	// (0x00065aba) sso_t_sub_pane_p_t1
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

} // end of namespace AknLayoutScalable_Abrw_pnl4_apps_nhd4_lsc_tch_Small
