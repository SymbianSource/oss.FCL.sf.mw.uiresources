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

#include "aknlayoutscalable_abrw_pvp4_apps_vga4_prt_tch_small.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pvp4_apps_vga4_prt_tch[]; }

namespace AknLayoutScalable_Abrw_pvp4_apps_vga4_prt_tch_Small
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pvp4_apps_vga4_prt_tch + 0x00052f63 };

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
0x343a,	// (0x0005639d) Screen

0x3446,	// (0x000563a9) application_window

0x34a2,	// (0x00056405) area_bottom_pane_ParamLimits

0x34a2,	// (0x00056405) area_bottom_pane

0x3500,	// (0x00056463) area_top_pane_ParamLimits

0x3500,	// (0x00056463) area_top_pane

0x3564,	// (0x000564c7) call_video_uplink_pane_ParamLimits

0x3564,	// (0x000564c7) call_video_uplink_pane

0x35a3,	// (0x00056506) main_pane_ParamLimits

0x35a3,	// (0x00056506) main_pane

0xe4eb,	// (0x0006144e) context_pane

0x666e,	// (0x000595d1) navi_pane

0x6697,	// (0x000595fa) popup_cale_events_window_ParamLimits

0x6697,	// (0x000595fa) popup_cale_events_window

0xe4fe,	// (0x00061461) popup_mup_playback_window

0x66af,	// (0x00059612) signal_pane

0xc4c4,	// (0x0005f427) main_browser_pane

0xc6a1,	// (0x0005f604) main_burst_pane

0x64d0,	// (0x00059433) main_calc_pane

0xe4df,	// (0x00061442) main_cale_day_pane

0x3c56,	// (0x00056bb9) main_cale_month_pane

0xe4df,	// (0x00061442) main_cale_week_pane

0xc6a1,	// (0x0005f604) main_call_pane

0xc152,	// (0x0005f0b5) main_call_poc_pane

0xc6a1,	// (0x0005f604) main_camera_pane

0xc6a1,	// (0x0005f604) main_chi_dic_pane

0xce49,	// (0x0005fdac) main_clock_pane

0xc152,	// (0x0005f0b5) main_fmradio_pane

0xc6a1,	// (0x0005f604) main_graph_messa_pane

0xc152,	// (0x0005f0b5) main_help_pane

0xc4c4,	// (0x0005f427) main_im_pane

0xc3ad,	// (0x0005f310) main_image_pane_ParamLimits

0xc3ad,	// (0x0005f310) main_image_pane

0xc152,	// (0x0005f0b5) main_location2_pane

0xc6a1,	// (0x0005f604) main_location_pane

0xc3ad,	// (0x0005f310) main_messa_pane

0xc152,	// (0x0005f0b5) main_mp2_pane

0xc6a1,	// (0x0005f604) main_mp_pane

0xc152,	// (0x0005f0b5) main_msg_pane

0xc152,	// (0x0005f0b5) main_mup_eq_pane

0xc152,	// (0x0005f0b5) main_mup_pane

0xc4c4,	// (0x0005f427) main_notes_pane

0xc152,	// (0x0005f0b5) main_pec_pane

0xc152,	// (0x0005f0b5) main_phob_pane

0xc152,	// (0x0005f0b5) main_pinb_pane

0xc152,	// (0x0005f0b5) main_postcard_pane

0xc152,	// (0x0005f0b5) main_qdial_pane

0xc6a1,	// (0x0005f604) main_skin_pane

0xc152,	// (0x0005f0b5) main_smil2_pane

0xc6a1,	// (0x0005f604) main_smil_pane

0xc6a1,	// (0x0005f604) main_video_pane

0xc6a1,	// (0x0005f604) main_video_tele_pane

0xc3ad,	// (0x0005f310) main_viewer_pane_ParamLimits

0xc3ad,	// (0x0005f310) main_viewer_pane

0xc6a1,	// (0x0005f604) main_vorec_pane

0x651e,	// (0x00059481) popup_blid_sat_info_window_ParamLimits

0x651e,	// (0x00059481) popup_blid_sat_info_window

0x6544,	// (0x000594a7) popup_dyc_status_message_window_ParamLimits

0x6544,	// (0x000594a7) popup_dyc_status_message_window

0x6554,	// (0x000594b7) popup_grid_large_graphic_window_ParamLimits

0x6554,	// (0x000594b7) popup_grid_large_graphic_window

0x65e9,	// (0x0005954c) popup_loc_request_window_ParamLimits

0x65e9,	// (0x0005954c) popup_loc_request_window

0x6642,	// (0x000595a5) popup_wml_address_window_ParamLimits

0x6642,	// (0x000595a5) popup_wml_address_window

0x63a8,	// (0x0005930b) call_muted_g1

0x6098,	// (0x00058ffb) popup_call_audio_conf_window_ParamLimits

0x6098,	// (0x00058ffb) popup_call_audio_conf_window

0x63b8,	// (0x0005931b) popup_call_audio_first_window_ParamLimits

0x63b8,	// (0x0005931b) popup_call_audio_first_window

0x63f8,	// (0x0005935b) popup_call_audio_in_window_ParamLimits

0x63f8,	// (0x0005935b) popup_call_audio_in_window

0x641c,	// (0x0005937f) popup_call_audio_out_window_ParamLimits

0x641c,	// (0x0005937f) popup_call_audio_out_window

0x643e,	// (0x000593a1) popup_call_audio_second_window_ParamLimits

0x643e,	// (0x000593a1) popup_call_audio_second_window

0x646e,	// (0x000593d1) popup_call_audio_wait_window_ParamLimits

0x646e,	// (0x000593d1) popup_call_audio_wait_window

0x648f,	// (0x000593f2) popup_number_entry_window_ParamLimits

0x648f,	// (0x000593f2) popup_number_entry_window

0x1b9b,	// (0x00054afe) bg_popup_call_pane_cp05_ParamLimits

0x1b9b,	// (0x00054afe) bg_popup_call_pane_cp05

0x1bbb,	// (0x00054b1e) popup_number_entry_window_t1

0x1bce,	// (0x00054b31) popup_number_entry_window_t2

0x1be0,	// (0x00054b43) popup_number_entry_window_t3

0x0003,

0xf01d,	// (0x00061f80) popup_number_entry_window_t

0x1c27,	// (0x00054b8a) text_title_cp2

0x1c3a,	// (0x00054b9d) bg_popup_call_pane_cp_ParamLimits

0x1c3a,	// (0x00054b9d) bg_popup_call_pane_cp

0x1c48,	// (0x00054bab) call_thumbnail_pane

0x1c50,	// (0x00054bb3) popup_call_audio_in_window_g1_ParamLimits

0x1c50,	// (0x00054bb3) popup_call_audio_in_window_g1

0x1c5c,	// (0x00054bbf) popup_call_audio_in_window_g2_ParamLimits

0x1c5c,	// (0x00054bbf) popup_call_audio_in_window_g2

0x1c68,	// (0x00054bcb) popup_call_audio_in_window_g3_ParamLimits

0x1c68,	// (0x00054bcb) popup_call_audio_in_window_g3

0x0002,

0xf026,	// (0x00061f89) popup_call_audio_in_window_g_ParamLimits

0xf026,	// (0x00061f89) popup_call_audio_in_window_g

0x1c74,	// (0x00054bd7) popup_call_audio_in_window_t1_ParamLimits

0x1c74,	// (0x00054bd7) popup_call_audio_in_window_t1

0x1c90,	// (0x00054bf3) popup_call_audio_in_window_t2_ParamLimits

0x1c90,	// (0x00054bf3) popup_call_audio_in_window_t2

0x1cac,	// (0x00054c0f) popup_call_audio_in_window_t3_ParamLimits

0x1cac,	// (0x00054c0f) popup_call_audio_in_window_t3

0x0002,

0xf02d,	// (0x00061f90) popup_call_audio_in_window_t_ParamLimits

0xf02d,	// (0x00061f90) popup_call_audio_in_window_t

0x1c3a,	// (0x00054b9d) bg_popup_call_pane_cp01_ParamLimits

0x1c3a,	// (0x00054b9d) bg_popup_call_pane_cp01

0x1c48,	// (0x00054bab) call_thumbnail_pane_cp02

0x1cbf,	// (0x00054c22) call_type_pane_cp022

0x1cc7,	// (0x00054c2a) popup_call_audio_out_window_g1_ParamLimits

0x1cc7,	// (0x00054c2a) popup_call_audio_out_window_g1

0x1cd9,	// (0x00054c3c) popup_call_audio_out_window_g2_ParamLimits

0x1cd9,	// (0x00054c3c) popup_call_audio_out_window_g2

0x1ce5,	// (0x00054c48) popup_call_audio_out_window_g3_ParamLimits

0x1ce5,	// (0x00054c48) popup_call_audio_out_window_g3

0x0002,

0xf034,	// (0x00061f97) popup_call_audio_out_window_g_ParamLimits

0xf034,	// (0x00061f97) popup_call_audio_out_window_g

0x1cf7,	// (0x00054c5a) popup_call_audio_out_window_t1_ParamLimits

0x1cf7,	// (0x00054c5a) popup_call_audio_out_window_t1

0x36e6,	// (0x00056649) popup_call_audio_out_window_t2_ParamLimits

0x36e6,	// (0x00056649) popup_call_audio_out_window_t2

0x0001,

0xf03b,	// (0x00061f9e) popup_call_audio_out_window_t_ParamLimits

0xf03b,	// (0x00061f9e) popup_call_audio_out_window_t

0x36fb,	// (0x0005665e) bg_popup_call_pane_ParamLimits

0x36fb,	// (0x0005665e) bg_popup_call_pane

0x377f,	// (0x000566e2) call_thumbnail_pane_cp_ParamLimits

0x377f,	// (0x000566e2) call_thumbnail_pane_cp

0x37a3,	// (0x00056706) call_type_pane_cp01_ParamLimits

0x37a3,	// (0x00056706) call_type_pane_cp01

0x37e7,	// (0x0005674a) popup_call_audio_first_window_g1_ParamLimits

0x37e7,	// (0x0005674a) popup_call_audio_first_window_g1

0x3833,	// (0x00056796) popup_call_audio_first_window_g2_ParamLimits

0x3833,	// (0x00056796) popup_call_audio_first_window_g2

0x0001,

0xf040,	// (0x00061fa3) popup_call_audio_first_window_g_ParamLimits

0xf040,	// (0x00061fa3) popup_call_audio_first_window_g

0x3877,	// (0x000567da) popup_call_audio_first_window_t1_ParamLimits

0x3877,	// (0x000567da) popup_call_audio_first_window_t1

0x3923,	// (0x00056886) popup_call_audio_first_window_t4_ParamLimits

0x3923,	// (0x00056886) popup_call_audio_first_window_t4

0xc123,	// (0x0005f086) popup_call_audio_first_window_t5_ParamLimits

0xc123,	// (0x0005f086) popup_call_audio_first_window_t5

0x0002,

0xf045,	// (0x00061fa8) popup_call_audio_first_window_t_ParamLimits

0xf045,	// (0x00061fa8) popup_call_audio_first_window_t

0xc152,	// (0x0005f0b5) bg_popup_call_pane_cp02

0xc15c,	// (0x0005f0bf) call_type_pane_cp023

0xc164,	// (0x0005f0c7) popup_call_audio_wait_window_g1

0xc16c,	// (0x0005f0cf) popup_call_audio_wait_window_g2

0x0001,

0xf04c,	// (0x00061faf) popup_call_audio_wait_window_g

0xc174,	// (0x0005f0d7) popup_call_audio_wait_window_t3

0xc182,	// (0x0005f0e5) bg_popup_call_pane_cp03_ParamLimits

0xc182,	// (0x0005f0e5) bg_popup_call_pane_cp03

0xc1e2,	// (0x0005f145) call_thumbnail_pane_cp011_ParamLimits

0xc1e2,	// (0x0005f145) call_thumbnail_pane_cp011

0xc1ee,	// (0x0005f151) call_type_pane_cp034_ParamLimits

0xc1ee,	// (0x0005f151) call_type_pane_cp034

0xc22a,	// (0x0005f18d) popup_call_audio_second_window_g1_ParamLimits

0xc22a,	// (0x0005f18d) popup_call_audio_second_window_g1

0xc266,	// (0x0005f1c9) popup_call_audio_second_window_g2_ParamLimits

0xc266,	// (0x0005f1c9) popup_call_audio_second_window_g2

0x0001,

0xf051,	// (0x00061fb4) popup_call_audio_second_window_g_ParamLimits

0xf051,	// (0x00061fb4) popup_call_audio_second_window_g

0xc2a2,	// (0x0005f205) popup_call_audio_second_window_t1_ParamLimits

0xc2a2,	// (0x0005f205) popup_call_audio_second_window_t1

0xc323,	// (0x0005f286) popup_call_audio_second_window_t2_ParamLimits

0xc323,	// (0x0005f286) popup_call_audio_second_window_t2

0xc359,	// (0x0005f2bc) popup_call_audio_second_window_t3_ParamLimits

0xc359,	// (0x0005f2bc) popup_call_audio_second_window_t3

0x0002,

0xf056,	// (0x00061fb9) popup_call_audio_second_window_t_ParamLimits

0xf056,	// (0x00061fb9) popup_call_audio_second_window_t

0xc152,	// (0x0005f0b5) bg_popup_call_pane_cp04

0xc38f,	// (0x0005f2f2) list_conf_pane

0xc397,	// (0x0005f2fa) popup_call_audio_conf_window_t1

0xc3a5,	// (0x0005f308) call_thumbnail_pane_g1

0xc3ad,	// (0x0005f310) bg_pinb_pane_ParamLimits

0xc3ad,	// (0x0005f310) bg_pinb_pane

0xc3bb,	// (0x0005f31e) find_pinb_pane

0xc3ad,	// (0x0005f310) listscroll_pinb_pane_ParamLimits

0xc3ad,	// (0x0005f310) listscroll_pinb_pane

0xc3c5,	// (0x0005f328) pinb_bg_pane_g1

0xc3c5,	// (0x0005f328) pinb_bg_pane_g2

0xc3c5,	// (0x0005f328) pinb_bg_pane_g3

0xc3c5,	// (0x0005f328) pinb_bg_pane_g4

0xc3c5,	// (0x0005f328) pinb_bg_pane_g5

0xc3c5,	// (0x0005f328) pinb_bg_pane_g6

0xc3c5,	// (0x0005f328) pinb_bg_pane_g7

0xc3c5,	// (0x0005f328) pinb_bg_pane_g8

0xc3c5,	// (0x0005f328) pinb_bg_pane_g9

0xc3c5,	// (0x0005f328) pinb_bg_pane_g10

0x0009,

0xf05d,	// (0x00061fc0) pinb_bg_pane_g

0x1b91,	// (0x00054af4) grid_pinb_pane

0x1b91,	// (0x00054af4) list_pinb_pane

0x39af,	// (0x00056912) scroll_pane_cp01_ParamLimits

0x39af,	// (0x00056912) scroll_pane_cp01

0xc3cf,	// (0x0005f332) find_pinb_pane_g1_ParamLimits

0xc3cf,	// (0x0005f332) find_pinb_pane_g1

0xc3e7,	// (0x0005f34a) find_pinb_pane_t1

0xc3f9,	// (0x0005f35c) find_pinb_pane_t2

0x0001,

0xf077,	// (0x00061fda) find_pinb_pane_t

0xc40e,	// (0x0005f371) input_focus_pane_cp01_ParamLimits

0xc40e,	// (0x0005f371) input_focus_pane_cp01

0xc41a,	// (0x0005f37d) cell_pinb_pane_ParamLimits

0xc41a,	// (0x0005f37d) cell_pinb_pane

0xc428,	// (0x0005f38b) cell_pinb_pane_g1_ParamLimits

0xc428,	// (0x0005f38b) cell_pinb_pane_g1

0xc436,	// (0x0005f399) cell_pinb_pane_g2_ParamLimits

0xc436,	// (0x0005f399) cell_pinb_pane_g2

0xc436,	// (0x0005f399) cell_pinb_pane_g3_ParamLimits

0xc436,	// (0x0005f399) cell_pinb_pane_g3

0x0002,

0xf07c,	// (0x00061fdf) cell_pinb_pane_g_ParamLimits

0xf07c,	// (0x00061fdf) cell_pinb_pane_g

0xc152,	// (0x0005f0b5) grid_highlight_pane_cp01

0xc41a,	// (0x0005f37d) list_pinb_item_pane_ParamLimits

0xc41a,	// (0x0005f37d) list_pinb_item_pane

0x1b91,	// (0x00054af4) list_highlight_pane_cp02

0xc444,	// (0x0005f3a7) list_pinb_item_pane_g1_ParamLimits

0xc444,	// (0x0005f3a7) list_pinb_item_pane_g1

0xc436,	// (0x0005f399) list_pinb_item_pane_g2_ParamLimits

0xc436,	// (0x0005f399) list_pinb_item_pane_g2

0xc428,	// (0x0005f38b) list_pinb_item_pane_g3_ParamLimits

0xc428,	// (0x0005f38b) list_pinb_item_pane_g3

0xc436,	// (0x0005f399) list_pinb_item_pane_g4_ParamLimits

0xc436,	// (0x0005f399) list_pinb_item_pane_g4

0x0003,

0xf083,	// (0x00061fe6) list_pinb_item_pane_g_ParamLimits

0xf083,	// (0x00061fe6) list_pinb_item_pane_g

0xc452,	// (0x0005f3b5) list_pinb_item_pane_t1_ParamLimits

0xc452,	// (0x0005f3b5) list_pinb_item_pane_t1

0x39d7,	// (0x0005693a) calc_display_pane

0x39f5,	// (0x00056958) calc_paper_pane

0x3a11,	// (0x00056974) grid_calc_pane

0x1b91,	// (0x00054af4) bg_list_pane_cp01

0xc466,	// (0x0005f3c9) clock_g1

0xc466,	// (0x0005f3c9) clock_g2

0x0001,

0xf08c,	// (0x00061fef) clock_g

0xc470,	// (0x0005f3d3) clock_t1_ParamLimits

0xc470,	// (0x0005f3d3) clock_t1

0xc484,	// (0x0005f3e7) clock_t2_ParamLimits

0xc484,	// (0x0005f3e7) clock_t2

0xc484,	// (0x0005f3e7) clock_t3_ParamLimits

0xc484,	// (0x0005f3e7) clock_t3

0xc484,	// (0x0005f3e7) clock_t4_ParamLimits

0xc484,	// (0x0005f3e7) clock_t4

0xc470,	// (0x0005f3d3) clock_t5_ParamLimits

0xc470,	// (0x0005f3d3) clock_t5

0xc484,	// (0x0005f3e7) clock_t6_ParamLimits

0xc484,	// (0x0005f3e7) clock_t6

0xc484,	// (0x0005f3e7) clock_t7_ParamLimits

0xc484,	// (0x0005f3e7) clock_t7

0xc484,	// (0x0005f3e7) clock_t8_ParamLimits

0xc484,	// (0x0005f3e7) clock_t8

0xc484,	// (0x0005f3e7) clock_t9_ParamLimits

0xc484,	// (0x0005f3e7) clock_t9

0x0008,

0xf091,	// (0x00061ff4) clock_t_ParamLimits

0xf091,	// (0x00061ff4) clock_t

0x1b91,	// (0x00054af4) popup_clock_analogue_window_cp02

0x1b91,	// (0x00054af4) popup_clock_digital_window_cp01

0xc152,	// (0x0005f0b5) listscroll_help_pane

0xc152,	// (0x0005f0b5) phob_pre_status_pane

0xc498,	// (0x0005f3fb) grid_qdial_pane

0xc3ad,	// (0x0005f310) listscroll_mce_pane

0xc3ad,	// (0x0005f310) bg_notes_pane

0xc4a2,	// (0x0005f405) list_notes_pane

0x3a3d,	// (0x000569a0) scroll_pane_cp06

0xc4b0,	// (0x0005f413) bg_calc_paper_pane

0x3a4c,	// (0x000569af) list_calc_pane

0xc4c4,	// (0x0005f427) bg_calc_display_pane

0x3a66,	// (0x000569c9) calc_display_pane_t1

0x3a7b,	// (0x000569de) calc_display_pane_t2

0x3a90,	// (0x000569f3) calc_display_pane_t3

0x0002,

0xf0a4,	// (0x00062007) calc_display_pane_t

0x3aa2,	// (0x00056a05) cell_calc_pane_ParamLimits

0x3aa2,	// (0x00056a05) cell_calc_pane

0xc4d0,	// (0x0005f433) bg_calc_paper_pane_g1

0xc4dc,	// (0x0005f43f) bg_calc_paper_pane_g2

0xc4e8,	// (0x0005f44b) bg_calc_paper_pane_g3

0xc4f4,	// (0x0005f457) bg_calc_paper_pane_g4

0xc500,	// (0x0005f463) bg_calc_paper_pane_g5

0x3ad1,	// (0x00056a34) bg_calc_paper_pane_g6

0x3ae2,	// (0x00056a45) bg_calc_paper_pane_g7

0x3af3,	// (0x00056a56) bg_calc_paper_pane_g8

0x0007,

0xf0ab,	// (0x0006200e) bg_calc_paper_pane_g

0x3b04,	// (0x00056a67) calc_bg_paper_pane_g9

0x3b15,	// (0x00056a78) list_calc_item_pane_ParamLimits

0x3b15,	// (0x00056a78) list_calc_item_pane

0xc50c,	// (0x0005f46f) list_calc_item_pane_g1

0x3b36,	// (0x00056a99) list_calc_item_pane_t1_ParamLimits

0x3b36,	// (0x00056a99) list_calc_item_pane_t1

0x3b48,	// (0x00056aab) list_calc_item_pane_t2_ParamLimits

0x3b48,	// (0x00056aab) list_calc_item_pane_t2

0x0001,

0xf0bc,	// (0x0006201f) list_calc_item_pane_t_ParamLimits

0xf0bc,	// (0x0006201f) list_calc_item_pane_t

0xc3c5,	// (0x0005f328) cell_calc_pane_g1

0xc519,	// (0x0005f47c) grid_highlight_pane_cp02

0x0d88,	// (0x00053ceb) bg_calc_display_pane_g1

0x3b78,	// (0x00056adb) bg_calc_display_pane_g2

0x0d76,	// (0x00053cd9) bg_calc_display_pane_g3

0x0002,

0xf0c6,	// (0x00062029) bg_calc_display_pane_g

0x3b82,	// (0x00056ae5) cell_qdial_pane_ParamLimits

0x3b82,	// (0x00056ae5) cell_qdial_pane

0x3b98,	// (0x00056afb) cell_qdial_pane_g1_ParamLimits

0x3b98,	// (0x00056afb) cell_qdial_pane_g1

0x3ba5,	// (0x00056b08) cell_qdial_pane_g2_ParamLimits

0x3ba5,	// (0x00056b08) cell_qdial_pane_g2

0xc53b,	// (0x0005f49e) cell_qdial_pane_g3_ParamLimits

0xc53b,	// (0x0005f49e) cell_qdial_pane_g3

0x0003,

0xf0cd,	// (0x00062030) cell_qdial_pane_g_ParamLimits

0xf0cd,	// (0x00062030) cell_qdial_pane_g

0x3bc3,	// (0x00056b26) cell_qdial_pane_t1_ParamLimits

0x3bc3,	// (0x00056b26) cell_qdial_pane_t1

0x3bdb,	// (0x00056b3e) cell_qdial_pane_t2_ParamLimits

0x3bdb,	// (0x00056b3e) cell_qdial_pane_t2

0x3bee,	// (0x00056b51) cell_qdial_pane_t3_ParamLimits

0x3bee,	// (0x00056b51) cell_qdial_pane_t3

0x0002,

0xf0d6,	// (0x00062039) cell_qdial_pane_t_ParamLimits

0xf0d6,	// (0x00062039) cell_qdial_pane_t

0xc152,	// (0x0005f0b5) grid_highlight_pane_cp04

0xc547,	// (0x0005f4aa) thumbnail_qdial_pane_ParamLimits

0xc547,	// (0x0005f4aa) thumbnail_qdial_pane

0xc5a3,	// (0x0005f506) list_help_pane

0xc5ac,	// (0x0005f50f) scroll_pane_cp02

0x3c01,	// (0x00056b64) help_list_pane_t1_ParamLimits

0x3c01,	// (0x00056b64) help_list_pane_t1

0xc5b5,	// (0x0005f518) bg_notes_pane_g2

0xc5bd,	// (0x0005f520) bg_notes_pane_g3

0xc5c5,	// (0x0005f528) notes_bg_pane_g1

0xc5cd,	// (0x0005f530) notes_bg_pane_g4

0xc5d5,	// (0x0005f538) notes_bg_pane_g5

0xc5dd,	// (0x0005f540) notes_bg_pane_g6

0xc5e5,	// (0x0005f548) notes_bg_pane_g7

0xc5ed,	// (0x0005f550) notes_bg_pane_g8

0xc5f5,	// (0x0005f558) notes_bg_pane_g9

0x0006,

0xf0f4,	// (0x00062057) notes_bg_pane_g

0x3c28,	// (0x00056b8b) list_notes_text_pane_ParamLimits

0x3c28,	// (0x00056b8b) list_notes_text_pane

0xc5fd,	// (0x0005f560) list_notes_text_pane_g1

0xcda8,	// (0x0005fd0b) list_notes_text_pane_t1

0x3c56,	// (0x00056bb9) listscroll_cale_week_pane

0x3c8b,	// (0x00056bee) bg_cale_heading_pane

0x3cb4,	// (0x00056c17) bg_cale_pane_cp01

0x3cd6,	// (0x00056c39) cale_week_corner_pane

0x3cf5,	// (0x00056c58) cale_week_day_heading_pane

0x3d23,	// (0x00056c86) cale_week_scroll_pane_g1

0x3d47,	// (0x00056caa) cale_week_scroll_pane_g2

0x3d5f,	// (0x00056cc2) cale_week_scroll_pane_g3

0x3d77,	// (0x00056cda) cale_week_scroll_pane_g4

0x3d8f,	// (0x00056cf2) cale_week_scroll_pane_g5

0x3da7,	// (0x00056d0a) cale_week_scroll_pane_g6

0x3dc7,	// (0x00056d2a) cale_week_scroll_pane_g7

0x3de7,	// (0x00056d4a) cale_week_scroll_pane_g8

0x3e07,	// (0x00056d6a) cale_week_scroll_pane_g9

0x3e24,	// (0x00056d87) cale_week_scroll_pane_g10

0x3e41,	// (0x00056da4) cale_week_scroll_pane_g11

0x3e60,	// (0x00056dc3) cale_week_scroll_pane_g12

0x3e85,	// (0x00056de8) cale_week_scroll_pane_g13

0x3eae,	// (0x00056e11) cale_week_scroll_pane_g14

0x3ed7,	// (0x00056e3a) cale_week_scroll_pane_g15

0x000f,

0xf103,	// (0x00062066) cale_week_scroll_pane_g

0x3f20,	// (0x00056e83) cale_week_time_pane

0x3f40,	// (0x00056ea3) grid_cale_week_pane

0xc629,	// (0x0005f58c) scroll_pane_cp08

0x3f71,	// (0x00056ed4) cell_cale_week_pane_ParamLimits

0x3f71,	// (0x00056ed4) cell_cale_week_pane

0x4001,	// (0x00056f64) cale_week_day_heading_pane_t1

0x4029,	// (0x00056f8c) cale_week_day_heading_pane_t2

0x4056,	// (0x00056fb9) cale_week_day_heading_pane_t3

0x4083,	// (0x00056fe6) cale_week_day_heading_pane_t4

0x40b0,	// (0x00057013) cale_week_day_heading_pane_t5

0x40dd,	// (0x00057040) cale_week_day_heading_pane_t6

0x410a,	// (0x0005706d) cale_week_day_heading_pane_t7

0x0006,

0xf124,	// (0x00062087) cale_week_day_heading_pane_t

0xc646,	// (0x0005f5a9) bg_cale_side_pane

0x4132,	// (0x00057095) cale_week_time_pane_t1

0x4156,	// (0x000570b9) cale_week_time_pane_t2

0x417a,	// (0x000570dd) cale_week_time_pane_t3

0x419e,	// (0x00057101) cale_week_time_pane_t4

0x41c2,	// (0x00057125) cale_week_time_pane_t5

0x41e8,	// (0x0005714b) cale_week_time_pane_t6

0x4210,	// (0x00057173) cale_week_time_pane_t7

0x423c,	// (0x0005719f) cale_week_time_pane_t8

0x0007,

0xf133,	// (0x00062096) cale_week_time_pane_t

0x426c,	// (0x000571cf) cell_cale_week_pane_g2

0x4290,	// (0x000571f3) cell_cale_week_pane_g3_ParamLimits

0x4290,	// (0x000571f3) cell_cale_week_pane_g3

0xc654,	// (0x0005f5b7) grid_highlight_pane_cp07

0xc65c,	// (0x0005f5bf) listscroll_gms_pane

0xc666,	// (0x0005f5c9) grid_gms_pane

0xc66f,	// (0x0005f5d2) listscroll_gms_pane_g1

0xc677,	// (0x0005f5da) listscroll_gms_pane_g2

0x0001,

0xf144,	// (0x000620a7) listscroll_gms_pane_g

0x42a8,	// (0x0005720b) scroll_pane_cp010

0x42b3,	// (0x00057216) cell_gms_pane_ParamLimits

0x42b3,	// (0x00057216) cell_gms_pane

0x42c6,	// (0x00057229) cell_gms_pane_g1

0xc67f,	// (0x0005f5e2) cell_gms_pane_g2

0xc687,	// (0x0005f5ea) cell_gms_pane_g3

0xc690,	// (0x0005f5f3) cell_gms_pane_g4

0x0003,

0xf149,	// (0x000620ac) cell_gms_pane_g

0xc699,	// (0x0005f5fc) grid_highlight_pane_cp09

0x632c,	// (0x0005928f) phob_pre_status_pane_g1

0x6334,	// (0x00059297) phob_pre_status_pane_g2

0x633c,	// (0x0005929f) phob_pre_status_pane_g3

0x6344,	// (0x000592a7) phob_pre_status_pane_g4

0x0004,

0xf4ef,	// (0x00062452) phob_pre_status_pane_g

0x6354,	// (0x000592b7) phob_pre_status_pane_t1

0x6364,	// (0x000592c7) phob_pre_status_pane_t2

0x6374,	// (0x000592d7) phob_pre_status_pane_t3

0x0002,

0xf4fa,	// (0x0006245d) phob_pre_status_pane_t

0xc6a1,	// (0x0005f604) bg_list_pane_cp05

0x42d6,	// (0x00057239) grid_vorec_pane

0x42e0,	// (0x00057243) vorec_t1

0x42ee,	// (0x00057251) vorec_t2

0x42fc,	// (0x0005725f) vorec_t3

0x430a,	// (0x0005726d) vorec_t4

0xb3a2,	// (0x0005e305) vorec_t5

0xb3b0,	// (0x0005e313) vorec_t6

0x0004,

0xf152,	// (0x000620b5) vorec_t

0xb3be,	// (0x0005e321) wait_bar_pane_cp01

0x4326,	// (0x00057289) cell_vorec_pane_ParamLimits

0x4326,	// (0x00057289) cell_vorec_pane

0x433b,	// (0x0005729e) cell_vorec_pane_g1

0xc152,	// (0x0005f0b5) grid_highlight_pane_cp05

0xc41a,	// (0x0005f37d) cams_zoom_pane

0xc41a,	// (0x0005f37d) image_vga_pane

0xc436,	// (0x0005f399) main_camera_pane_g1

0xc436,	// (0x0005f399) main_camera_pane_g2

0xc436,	// (0x0005f399) main_camera_pane_g3

0xc436,	// (0x0005f399) main_camera_pane_g4

0xc436,	// (0x0005f399) main_camera_pane_g5

0xc436,	// (0x0005f399) main_camera_pane_g6

0xc436,	// (0x0005f399) main_camera_pane_g7

0x0007,

0xf15d,	// (0x000620c0) main_camera_pane_g

0xc484,	// (0x0005f3e7) main_camera_pane_t1

0xc484,	// (0x0005f3e7) main_camera_pane_t2

0x0001,

0xf16e,	// (0x000620d1) main_camera_pane_t

0x4345,	// (0x000572a8) cams_zoom_pane_cp_ParamLimits

0x4345,	// (0x000572a8) cams_zoom_pane_cp

0x4373,	// (0x000572d6) image_cif_pane_ParamLimits

0x4373,	// (0x000572d6) image_cif_pane

0x1b91,	// (0x00054af4) image_subqcif_pane

0x4381,	// (0x000572e4) main_video_pane_g1_ParamLimits

0x4381,	// (0x000572e4) main_video_pane_g1

0x43a9,	// (0x0005730c) main_video_pane_g2_ParamLimits

0x43a9,	// (0x0005730c) main_video_pane_g2

0x43dc,	// (0x0005733f) main_video_pane_g3_ParamLimits

0x43dc,	// (0x0005733f) main_video_pane_g3

0x43dc,	// (0x0005733f) main_video_pane_g4_ParamLimits

0x43dc,	// (0x0005733f) main_video_pane_g4

0x440a,	// (0x0005736d) main_video_pane_g5_ParamLimits

0x440a,	// (0x0005736d) main_video_pane_g5

0xc6a9,	// (0x0005f60c) main_video_pane_g6_ParamLimits

0xc6a9,	// (0x0005f60c) main_video_pane_g6

0x0006,

0xf173,	// (0x000620d6) main_video_pane_g_ParamLimits

0xf173,	// (0x000620d6) main_video_pane_g

0x4426,	// (0x00057389) main_video_pane_t1_ParamLimits

0x4426,	// (0x00057389) main_video_pane_t1

0xc466,	// (0x0005f3c9) cams_zoom_pane_g1

0xc466,	// (0x0005f3c9) cams_zoom_pane_g2

0xc466,	// (0x0005f3c9) cams_zoom_pane_g3

0xc466,	// (0x0005f3c9) cams_zoom_pane_g4

0x0003,

0xf182,	// (0x000620e5) cams_zoom_pane_g

0xc41a,	// (0x0005f37d) grid_cams_pane

0xc41a,	// (0x0005f37d) linegrid_cams_pane

0x4460,	// (0x000573c3) cell_cams_pane_ParamLimits

0x4460,	// (0x000573c3) cell_cams_pane

0x1b91,	// (0x00054af4) cams_burst_image_pane

0xc466,	// (0x0005f3c9) cell_cams_pane_g1

0x1b91,	// (0x00054af4) grid_highlight_pane_cp03

0xc3c5,	// (0x0005f328) mp_bg_pane_g1

0x1b91,	// (0x00054af4) bg_list_pane_cp03

0x1b91,	// (0x00054af4) bg_mp_pane

0x1b91,	// (0x00054af4) grid_mp_pane

0xc466,	// (0x0005f3c9) media_player_g1

0xcbbc,	// (0x0005fb1f) media_player_t1

0xcbbc,	// (0x0005fb1f) media_player_t2

0xcbbc,	// (0x0005fb1f) media_player_t3

0xcbbc,	// (0x0005fb1f) media_player_t4

0xcbbc,	// (0x0005fb1f) media_player_t5

0xcbbc,	// (0x0005fb1f) media_player_t6

0xcbbc,	// (0x0005fb1f) media_player_t7

0x0006,

0xf4d9,	// (0x0006243c) media_player_t

0x1b91,	// (0x00054af4) wait_bar_pane_cp02

0xf4be,	// (0x00062421) main_usb_pane_t

0xce49,	// (0x0005fdac) cell_mp_pane

0xc3c5,	// (0x0005f328) cell_mp_pane_g1

0xc152,	// (0x0005f0b5) grid_highlight_pane_cp06

0xc6c3,	// (0x0005f626) grid_skin_colour_pane

0xc6cb,	// (0x0005f62e) list_highlight_pane_cp03

0x4475,	// (0x000573d8) skin_g1

0xc6d3,	// (0x0005f636) skin_t1

0xc6e2,	// (0x0005f645) skin_t2

0x0001,

0xf1b0,	// (0x00062113) skin_t

0x447f,	// (0x000573e2) cell_skin_colour_pane_ParamLimits

0x447f,	// (0x000573e2) cell_skin_colour_pane

0xc6f0,	// (0x0005f653) cell_skin_colour_pane_g1

0x44ff,	// (0x00057462) call_video_g1_ParamLimits

0x44ff,	// (0x00057462) call_video_g1

0x450f,	// (0x00057472) call_video_g2_ParamLimits

0x450f,	// (0x00057472) call_video_g2

0x0001,

0xf1b5,	// (0x00062118) call_video_g_ParamLimits

0xf1b5,	// (0x00062118) call_video_g

0x455f,	// (0x000574c2) call_video_uplink_pane_cp1_ParamLimits

0x455f,	// (0x000574c2) call_video_uplink_pane_cp1

0xc702,	// (0x0005f665) call_video_uplink_pane_cp2

0x461b,	// (0x0005757e) video_down_crop_pane_ParamLimits

0x461b,	// (0x0005757e) video_down_crop_pane

0x470c,	// (0x0005766f) video_down_pane_ParamLimits

0x470c,	// (0x0005766f) video_down_pane

0xc70a,	// (0x0005f66d) video_down_subqcif_pane_ParamLimits

0xc70a,	// (0x0005f66d) video_down_subqcif_pane

0xc724,	// (0x0005f687) video_down_subqcif_pane_cp_ParamLimits

0xc724,	// (0x0005f687) video_down_subqcif_pane_cp

0xc74a,	// (0x0005f6ad) im_reading_pane_ParamLimits

0xc74a,	// (0x0005f6ad) im_reading_pane

0x4829,	// (0x0005778c) im_writing_pane_ParamLimits

0x4829,	// (0x0005778c) im_writing_pane

0x4847,	// (0x000577aa) im_reading_pane_t1

0xc764,	// (0x0005f6c7) list_im_pane

0xc775,	// (0x0005f6d8) scroll_pane_cp07

0x4889,	// (0x000577ec) im_writing_pane_t1_ParamLimits

0x4889,	// (0x000577ec) im_writing_pane_t1

0xc78e,	// (0x0005f6f1) im_writing_pane_t2_ParamLimits

0xc78e,	// (0x0005f6f1) im_writing_pane_t2

0x0001,

0xf1bf,	// (0x00062122) im_writing_pane_t_ParamLimits

0xf1bf,	// (0x00062122) im_writing_pane_t

0xc152,	// (0x0005f0b5) input_focus_pane_cp04

0xc152,	// (0x0005f0b5) input_focus_pane_cp05

0x489b,	// (0x000577fe) list_im_single_pane_ParamLimits

0x489b,	// (0x000577fe) list_im_single_pane

0xc7ab,	// (0x0005f70e) list_single_im_pane_t1

0xc6a1,	// (0x0005f604) blid_accuracy_pane

0xc6a1,	// (0x0005f604) blid_compass_pane

0xe489,	// (0x000613ec) main_location_t1

0xe489,	// (0x000613ec) main_location_t2

0xe489,	// (0x000613ec) main_location_t3

0x0002,

0xf4e8,	// (0x0006244b) main_location_t

0xc152,	// (0x0005f0b5) aid_levels_location

0xc3c5,	// (0x0005f328) blid_accuracy_pane_g1

0xc3c5,	// (0x0005f328) blid_accuracy_pane_g2

0x0001,

0xf213,	// (0x00062176) blid_accuracy_pane_g

0xc7e5,	// (0x0005f748) wml_content_pane

0xc823,	// (0x0005f786) wml_button_pane_ParamLimits

0xc823,	// (0x0005f786) wml_button_pane

0x48b4,	// (0x00057817) wml_list_single_large_pane_ParamLimits

0x48b4,	// (0x00057817) wml_list_single_large_pane

0x48d6,	// (0x00057839) wml_list_single_medium_pane_ParamLimits

0x48d6,	// (0x00057839) wml_list_single_medium_pane

0x48f9,	// (0x0005785c) wml_list_single_small_pane_ParamLimits

0x48f9,	// (0x0005785c) wml_list_single_small_pane

0xc837,	// (0x0005f79a) wml_selection_box_pane_ParamLimits

0xc837,	// (0x0005f79a) wml_selection_box_pane

0xc84a,	// (0x0005f7ad) wml_list_single_pane_t1

0xc859,	// (0x0005f7bc) wml_list_single_medium_pane_t1

0xc868,	// (0x0005f7cb) wml_list_single_large_pane_t1

0xc877,	// (0x0005f7da) input_focus_pane_cp02_ParamLimits

0xc877,	// (0x0005f7da) input_focus_pane_cp02

0xc88a,	// (0x0005f7ed) wml_selection_box_pane_g1

0xc893,	// (0x0005f7f6) wml_selection_box_pane_t1_ParamLimits

0xc893,	// (0x0005f7f6) wml_selection_box_pane_t1

0xc3ad,	// (0x0005f310) bg_wml_button_pane_ParamLimits

0xc3ad,	// (0x0005f310) bg_wml_button_pane

0xc8ab,	// (0x0005f80e) wml_button_pane_g1

0xc8b3,	// (0x0005f816) wml_button_pane_t1

0xc8ab,	// (0x0005f80e) wml_button_bg_pane_g1

0xc8c3,	// (0x0005f826) wml_button_bg_pane_g2

0xc8cb,	// (0x0005f82e) wml_button_bg_pane_g3

0xc8d3,	// (0x0005f836) wml_button_bg_pane_g4

0xc8db,	// (0x0005f83e) wml_button_bg_pane_g5

0xc8e3,	// (0x0005f846) wml_button_bg_pane_g6

0xc8eb,	// (0x0005f84e) wml_button_bg_pane_g7

0xc8f3,	// (0x0005f856) wml_button_bg_pane_g8

0xc8fb,	// (0x0005f85e) wml_button_bg_pane_g9

0x0008,

0xf1c4,	// (0x00062127) wml_button_bg_pane_g

0x4921,	// (0x00057884) bg_list_pane_cp02

0xc903,	// (0x0005f866) mce_header_pane_ParamLimits

0xc903,	// (0x0005f866) mce_header_pane

0xc919,	// (0x0005f87c) mce_icon_pane

0xc919,	// (0x0005f87c) mce_image_pane

0xc922,	// (0x0005f885) mce_text_pane_ParamLimits

0xc922,	// (0x0005f885) mce_text_pane

0x492b,	// (0x0005788e) scroll_pane_cp03

0xc81b,	// (0x0005f77e) scroll_pane_cp04

0xc935,	// (0x0005f898) scroll_pane_cp05_ParamLimits

0xc935,	// (0x0005f898) scroll_pane_cp05

0x4935,	// (0x00057898) mce_header_field_pane_ParamLimits

0x4935,	// (0x00057898) mce_header_field_pane

0x4957,	// (0x000578ba) mce_header_field_pane_2_ParamLimits

0x4957,	// (0x000578ba) mce_header_field_pane_2

0x496d,	// (0x000578d0) mce_header_field_pane_3

0x4975,	// (0x000578d8) list_single_mce_message_pane_ParamLimits

0x4975,	// (0x000578d8) list_single_mce_message_pane

0x4994,	// (0x000578f7) list_single_mce_smart_pane_ParamLimits

0x4994,	// (0x000578f7) list_single_mce_smart_pane

0xc941,	// (0x0005f8a4) input_focus_pane_cp03

0xc94a,	// (0x0005f8ad) list_header_data_pane

0x49be,	// (0x00057921) mce_header_field_pane_t1

0x49ce,	// (0x00057931) list_single_mce_header_pane_ParamLimits

0x49ce,	// (0x00057931) list_single_mce_header_pane

0xc952,	// (0x0005f8b5) list_single_mce_header_pane_t1

0xc961,	// (0x0005f8c4) list_single_mce_message_pane_g1

0xc969,	// (0x0005f8cc) list_single_mce_message_pane_t1

0x4a12,	// (0x00057975) bg_cale_heading_pane_cp01_ParamLimits

0x4a12,	// (0x00057975) bg_cale_heading_pane_cp01

0xc977,	// (0x0005f8da) bg_cale_pane_cp02_ParamLimits

0xc977,	// (0x0005f8da) bg_cale_pane_cp02

0x4a64,	// (0x000579c7) cale_month_corner_pane

0x4a83,	// (0x000579e6) cale_month_day_heading_pane_ParamLimits

0x4a83,	// (0x000579e6) cale_month_day_heading_pane

0x4ae5,	// (0x00057a48) cale_month_pane_g1_ParamLimits

0x4ae5,	// (0x00057a48) cale_month_pane_g1

0x4b2c,	// (0x00057a8f) cale_month_pane_g2_ParamLimits

0x4b2c,	// (0x00057a8f) cale_month_pane_g2

0x4b64,	// (0x00057ac7) cale_month_pane_g3_ParamLimits

0x4b64,	// (0x00057ac7) cale_month_pane_g3

0x4bb8,	// (0x00057b1b) cale_month_pane_g4_ParamLimits

0x4bb8,	// (0x00057b1b) cale_month_pane_g4

0x4c0c,	// (0x00057b6f) cale_month_pane_g5_ParamLimits

0x4c0c,	// (0x00057b6f) cale_month_pane_g5

0x4c60,	// (0x00057bc3) cale_month_pane_g6_ParamLimits

0x4c60,	// (0x00057bc3) cale_month_pane_g6

0x4cc4,	// (0x00057c27) cale_month_pane_g7_ParamLimits

0x4cc4,	// (0x00057c27) cale_month_pane_g7

0x4d28,	// (0x00057c8b) cale_month_pane_g8_ParamLimits

0x4d28,	// (0x00057c8b) cale_month_pane_g8

0x4d8c,	// (0x00057cef) cale_month_pane_g9_ParamLimits

0x4d8c,	// (0x00057cef) cale_month_pane_g9

0x4de6,	// (0x00057d49) cale_month_pane_g10_ParamLimits

0x4de6,	// (0x00057d49) cale_month_pane_g10

0x4e38,	// (0x00057d9b) cale_month_pane_g11_ParamLimits

0x4e38,	// (0x00057d9b) cale_month_pane_g11

0x4e86,	// (0x00057de9) cale_month_pane_g12_ParamLimits

0x4e86,	// (0x00057de9) cale_month_pane_g12

0x4ed6,	// (0x00057e39) cale_month_pane_g13_ParamLimits

0x4ed6,	// (0x00057e39) cale_month_pane_g13

0x000c,

0xf1d7,	// (0x0006213a) cale_month_pane_g_ParamLimits

0xf1d7,	// (0x0006213a) cale_month_pane_g

0x4f26,	// (0x00057e89) cale_month_week_pane

0x4f46,	// (0x00057ea9) grid_cale_month_pane_ParamLimits

0x4f46,	// (0x00057ea9) grid_cale_month_pane

0x4f9f,	// (0x00057f02) cale_month_day_heading_pane_t1

0x5021,	// (0x00057f84) cale_month_day_heading_pane_t2

0x509a,	// (0x00057ffd) cale_month_day_heading_pane_t3

0x5113,	// (0x00058076) cale_month_day_heading_pane_t4

0x518c,	// (0x000580ef) cale_month_day_heading_pane_t5

0x520d,	// (0x00058170) cale_month_day_heading_pane_t6

0x5296,	// (0x000581f9) cale_month_day_heading_pane_t7

0x0006,

0xf1f2,	// (0x00062155) cale_month_day_heading_pane_t

0xc646,	// (0x0005f5a9) bg_cale_side_pane_cp01

0x531f,	// (0x00058282) cale_month_week_pane_t1

0x5338,	// (0x0005829b) cale_month_week_pane_t2

0x5351,	// (0x000582b4) cale_month_week_pane_t3

0x536a,	// (0x000582cd) cale_month_week_pane_t4

0x5383,	// (0x000582e6) cale_month_week_pane_t5

0x53a0,	// (0x00058303) cale_month_week_pane_t6

0x0005,

0xf201,	// (0x00062164) cale_month_week_pane_t

0x53c3,	// (0x00058326) cell_cale_month_pane_ParamLimits

0x53c3,	// (0x00058326) cell_cale_month_pane

0x54f1,	// (0x00058454) cell_cale_month_pane_g1

0x54fd,	// (0x00058460) cell_cale_month_pane_t1_ParamLimits

0x54fd,	// (0x00058460) cell_cale_month_pane_t1

0xc654,	// (0x0005f5b7) grid_highlight_pane_cp08

0xc3c5,	// (0x0005f328) main_smil_g1

0x5529,	// (0x0005848c) smil_status_pane

0xc9b6,	// (0x0005f919) smil_text_pane

0xc5f5,	// (0x0005f558) bg_popup_call3_rect_pane_g8

0xc5ed,	// (0x0005f550) bg_popup_call3_rect_pane_g9

0x0008,

0xf218,	// (0x0006217b) bg_popup_call3_rect_pane_g

0xe560,	// (0x000614c3) smil_status_volume_pane_g1

0xc9c0,	// (0x0005f923) smil_status_pane_t1

0x66f7,	// (0x0005965a) volume_smil_pane

0xc9d7,	// (0x0005f93a) list_smil_text_pane

0x553c,	// (0x0005849f) scroll_pane_cp011

0x5547,	// (0x000584aa) smil_text_list_pane_t1_ParamLimits

0x5547,	// (0x000584aa) smil_text_list_pane_t1

0x559b,	// (0x000584fe) aid_volume_smil_ParamLimits

0x559b,	// (0x000584fe) aid_volume_smil

0xc3c5,	// (0x0005f328) smil_volume_pane_g1

0xc3c5,	// (0x0005f328) smil_volume_pane_g2

0x0001,

0xf213,	// (0x00062176) smil_volume_pane_g

0x55bd,	// (0x00058520) listscroll_cale_day_pane

0xc9ea,	// (0x0005f94d) bg_cale_pane

0xca02,	// (0x0005f965) list_cale_pane

0xca25,	// (0x0005f988) scroll_pane_cp09

0xc5c5,	// (0x0005f528) cale_bg_pane_g1

0xc5bd,	// (0x0005f520) cale_bg_pane_g2

0xc5b5,	// (0x0005f518) cale_bg_pane_g3

0xc5d5,	// (0x0005f538) cale_bg_pane_g4

0xc5cd,	// (0x0005f530) cale_bg_pane_g5

0xc5dd,	// (0x0005f540) cale_bg_pane_g6

0xc5e5,	// (0x0005f548) cale_bg_pane_g7

0xc5f5,	// (0x0005f558) cale_bg_pane_g8

0xc5ed,	// (0x0005f550) cale_bg_pane_g9

0x0008,

0xf218,	// (0x0006217b) cale_bg_pane_g

0xca36,	// (0x0005f999) list_cale_time_pane_ParamLimits

0xca36,	// (0x0005f999) list_cale_time_pane

0xca4d,	// (0x0005f9b0) list_cale_time_pane_g1_ParamLimits

0xca4d,	// (0x0005f9b0) list_cale_time_pane_g1

0xca59,	// (0x0005f9bc) list_cale_time_pane_g2_ParamLimits

0xca59,	// (0x0005f9bc) list_cale_time_pane_g2

0x55d7,	// (0x0005853a) list_cale_time_pane_g3_ParamLimits

0x55d7,	// (0x0005853a) list_cale_time_pane_g3

0x55e5,	// (0x00058548) list_cale_time_pane_g4_ParamLimits

0x55e5,	// (0x00058548) list_cale_time_pane_g4

0x55f3,	// (0x00058556) list_cale_time_pane_g5_ParamLimits

0x55f3,	// (0x00058556) list_cale_time_pane_g5

0x0005,

0xf22b,	// (0x0006218e) list_cale_time_pane_g_ParamLimits

0xf22b,	// (0x0006218e) list_cale_time_pane_g

0xca73,	// (0x0005f9d6) list_cale_time_pane_t1_ParamLimits

0xca73,	// (0x0005f9d6) list_cale_time_pane_t1

0xca9b,	// (0x0005f9fe) list_cale_time_pane_t2_ParamLimits

0xca9b,	// (0x0005f9fe) list_cale_time_pane_t2

0x58c5,	// (0x00058828) aid_blid_cardinal_pane

0x5907,	// (0x0005886a) compass_pane_t4

0xcac3,	// (0x0005fa26) list_cale_time_pane_t4_ParamLimits

0xcac3,	// (0x0005fa26) list_cale_time_pane_t4

0x5915,	// (0x00058878) compass_pane_t5

0x5925,	// (0x00058888) compass_pane_t6

0x5933,	// (0x00058896) compass_pane_t7

0xd109,	// (0x0006006c) navi_pane_cc_t1

0xd256,	// (0x000601b9) aid_phob_thumbnail_center_pane

0x5e61,	// (0x00058dc4) main_postcard_pane_g4_ParamLimits

0x0002,

0xf238,	// (0x0006219b) list_cale_time_pane_t_ParamLimits

0xf238,	// (0x0006219b) list_cale_time_pane_t

0x1c3a,	// (0x00054b9d) bg_popup_window_pane_cp02_ParamLimits

0x1c3a,	// (0x00054b9d) bg_popup_window_pane_cp02

0xcaeb,	// (0x0005fa4e) heading_pane_cp01_ParamLimits

0xcaeb,	// (0x0005fa4e) heading_pane_cp01

0xcaf7,	// (0x0005fa5a) loc_req_pane_ParamLimits

0xcaf7,	// (0x0005fa5a) loc_req_pane

0xcb09,	// (0x0005fa6c) loc_type_pane_ParamLimits

0xcb09,	// (0x0005fa6c) loc_type_pane

0xcb1b,	// (0x0005fa7e) loc_type_pane_t1_ParamLimits

0xcb1b,	// (0x0005fa7e) loc_type_pane_t1

0xcb2d,	// (0x0005fa90) loc_type_pane_t2_ParamLimits

0xcb2d,	// (0x0005fa90) loc_type_pane_t2

0xcb3f,	// (0x0005faa2) loc_type_pane_t3_ParamLimits

0xcb3f,	// (0x0005faa2) loc_type_pane_t3

0x0002,

0xf23f,	// (0x000621a2) loc_type_pane_t_ParamLimits

0xf23f,	// (0x000621a2) loc_type_pane_t

0xcb51,	// (0x0005fab4) list_loc_req_pane

0xcb5b,	// (0x0005fabe) scroll_pane_cp012

0x5601,	// (0x00058564) list_single_loc_request_popup_menu_pane_ParamLimits

0x5601,	// (0x00058564) list_single_loc_request_popup_menu_pane

0xcb66,	// (0x0005fac9) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xcb66,	// (0x0005fac9) list_single_loc_request_popup_menu_pane_g1

0xcb72,	// (0x0005fad5) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xcb72,	// (0x0005fad5) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf246,	// (0x000621a9) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf246,	// (0x000621a9) list_single_loc_request_popup_menu_pane_g

0xcb7e,	// (0x0005fae1) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xcb7e,	// (0x0005fae1) list_single_loc_request_popup_menu_pane_t1

0x5613,	// (0x00058576) bg_popup_window_pane_cp03_ParamLimits

0x5613,	// (0x00058576) bg_popup_window_pane_cp03

0x5621,	// (0x00058584) heading_loc_req_pane_ParamLimits

0x5621,	// (0x00058584) heading_loc_req_pane

0x562d,	// (0x00058590) popup_dyc_status_message_window_g1_ParamLimits

0x562d,	// (0x00058590) popup_dyc_status_message_window_g1

0x5639,	// (0x0005859c) popup_dyc_status_message_window_t1_ParamLimits

0x5639,	// (0x0005859c) popup_dyc_status_message_window_t1

0x564b,	// (0x000585ae) popup_dyc_status_message_window_t2_ParamLimits

0x564b,	// (0x000585ae) popup_dyc_status_message_window_t2

0x565d,	// (0x000585c0) popup_dyc_status_message_window_t3_ParamLimits

0x565d,	// (0x000585c0) popup_dyc_status_message_window_t3

0x0002,

0xf24b,	// (0x000621ae) popup_dyc_status_message_window_t_ParamLimits

0xf24b,	// (0x000621ae) popup_dyc_status_message_window_t

0xc152,	// (0x0005f0b5) bg_heading_pane_cp01

0xcb94,	// (0x0005faf7) heading_loc_req_pane_g1

0xcb9c,	// (0x0005faff) heading_loc_req_pane_g2

0xcba4,	// (0x0005fb07) heading_loc_req_pane_g3

0x0002,

0xf252,	// (0x000621b5) heading_loc_req_pane_g

0xcbac,	// (0x0005fb0f) heading_loc_req_pane_t1

0xcbcc,	// (0x0005fb2f) bg_popup_sub_pane_cp01_ParamLimits

0xcbcc,	// (0x0005fb2f) bg_popup_sub_pane_cp01

0xcbda,	// (0x0005fb3d) popup_cale_events_window_g1_ParamLimits

0xcbda,	// (0x0005fb3d) popup_cale_events_window_g1

0xcbfa,	// (0x0005fb5d) popup_cale_events_window_g2_ParamLimits

0xcbfa,	// (0x0005fb5d) popup_cale_events_window_g2

0x0001,

0xf274,	// (0x000621d7) popup_cale_events_window_g_ParamLimits

0xf274,	// (0x000621d7) popup_cale_events_window_g

0xcc1a,	// (0x0005fb7d) popup_cale_events_window_t1_ParamLimits

0xcc1a,	// (0x0005fb7d) popup_cale_events_window_t1

0xcc2c,	// (0x0005fb8f) popup_cale_events_window_t2_ParamLimits

0xcc2c,	// (0x0005fb8f) popup_cale_events_window_t2

0xcc6a,	// (0x0005fbcd) popup_cale_events_window_t3_ParamLimits

0xcc6a,	// (0x0005fbcd) popup_cale_events_window_t3

0xcca4,	// (0x0005fc07) popup_cale_events_window_t4_ParamLimits

0xcca4,	// (0x0005fc07) popup_cale_events_window_t4

0x0003,

0xf279,	// (0x000621dc) popup_cale_events_window_t_ParamLimits

0xf279,	// (0x000621dc) popup_cale_events_window_t

0x5687,	// (0x000585ea) call_type_pane

0xdad4,	// (0x00060a37) popup_call_status_window_g1

0x5693,	// (0x000585f6) popup_call_status_window_g2

0x569f,	// (0x00058602) popup_call_status_window_g3

0x0002,

0xf282,	// (0x000621e5) popup_call_status_window_g

0xccda,	// (0x0005fc3d) call_type_pane_g1

0xcce3,	// (0x0005fc46) call_type_pane_g2

0x0001,

0xf289,	// (0x000621ec) call_type_pane_g

0xc152,	// (0x0005f0b5) bg_popup_sub_pane_cp02

0xccec,	// (0x0005fc4f) listscroll_popup_wml_pane

0xccf4,	// (0x0005fc57) list_wml_pane

0xccfe,	// (0x0005fc61) scroll_pane_cp013

0xcd09,	// (0x0005fc6c) list_single_graphic_popup_wml_pane_ParamLimits

0xcd09,	// (0x0005fc6c) list_single_graphic_popup_wml_pane

0xc3c5,	// (0x0005f328) list_single_graphic_popup_wml_pane_g1

0xcd1d,	// (0x0005fc80) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf28e,	// (0x000621f1) list_single_graphic_popup_wml_pane_g

0xcd25,	// (0x0005fc88) list_single_graphic_popup_wml_pane_t1

0xcd3b,	// (0x0005fc9e) aid_call_pane

0xc3a5,	// (0x0005f308) popup_clock_analogue_window_g1

0xc3a5,	// (0x0005f308) popup_clock_analogue_window_g2

0x56ab,	// (0x0005860e) popup_clock_analogue_window_g3

0x56ab,	// (0x0005860e) popup_clock_analogue_window_g4

0xc3c5,	// (0x0005f328) popup_clock_analogue_window_g5

0x0004,

0xf293,	// (0x000621f6) popup_clock_analogue_window_g

0x56b3,	// (0x00058616) popup_clock_analogue_window_t1

0x56c1,	// (0x00058624) clock_digital_number_pane_ParamLimits

0x56c1,	// (0x00058624) clock_digital_number_pane

0x56cd,	// (0x00058630) clock_digital_number_pane_cp02_ParamLimits

0x56cd,	// (0x00058630) clock_digital_number_pane_cp02

0x56d9,	// (0x0005863c) clock_digital_number_pane_cp03_ParamLimits

0x56d9,	// (0x0005863c) clock_digital_number_pane_cp03

0x56e5,	// (0x00058648) clock_digital_number_pane_cp04_ParamLimits

0x56e5,	// (0x00058648) clock_digital_number_pane_cp04

0x56f1,	// (0x00058654) clock_digital_separator_pane_ParamLimits

0x56f1,	// (0x00058654) clock_digital_separator_pane

0x56fd,	// (0x00058660) popup_clock_digital_window_t1

0xc3c5,	// (0x0005f328) clock_digital_number_pane_g1

0xc3c5,	// (0x0005f328) clock_digital_number_pane_g2

0x0001,

0xf213,	// (0x00062176) clock_digital_number_pane_g

0xc3c5,	// (0x0005f328) clock_digital_separator_pane_g1

0xc3c5,	// (0x0005f328) clock_digital_separator_pane_g2

0x0001,

0xf213,	// (0x00062176) clock_digital_separator_pane_g

0xc152,	// (0x0005f0b5) bg_popup_window_pane_cp04

0xcd43,	// (0x0005fca6) heading_pane_cp03

0xc6a1,	// (0x0005f604) listscroll_popup_gms_pane

0xc152,	// (0x0005f0b5) grid_large_graphic_popup_pane

0xcd4b,	// (0x0005fcae) listscroll_popup_gms_pane_g1

0xcd54,	// (0x0005fcb7) listscroll_popup_gms_pane_g2

0x0001,

0xf29e,	// (0x00062201) listscroll_popup_gms_pane_g

0xcd5d,	// (0x0005fcc0) scroll_pane_cp014

0xc41a,	// (0x0005f37d) cell_large_graphic_popup_pane_ParamLimits

0xc41a,	// (0x0005f37d) cell_large_graphic_popup_pane

0xc428,	// (0x0005f38b) cell_large_graphic_popup_pane_g1_ParamLimits

0xc428,	// (0x0005f38b) cell_large_graphic_popup_pane_g1

0xcd66,	// (0x0005fcc9) cell_large_graphic_popup_pane_g2_ParamLimits

0xcd66,	// (0x0005fcc9) cell_large_graphic_popup_pane_g2

0xcd74,	// (0x0005fcd7) cell_large_graphic_popup_pane_g3_ParamLimits

0xcd74,	// (0x0005fcd7) cell_large_graphic_popup_pane_g3

0xcd82,	// (0x0005fce5) cell_large_graphic_popup_pane_g4_ParamLimits

0xcd82,	// (0x0005fce5) cell_large_graphic_popup_pane_g4

0x0003,

0xf2a3,	// (0x00062206) cell_large_graphic_popup_pane_g_ParamLimits

0xf2a3,	// (0x00062206) cell_large_graphic_popup_pane_g

0xc152,	// (0x0005f0b5) grid_highlight_pane_cp010

0xc3c5,	// (0x0005f328) bg_popup_call_pane_g1

0xcdb6,	// (0x0005fd19) list_single_graphic_popup_conf_pane_ParamLimits

0xcdb6,	// (0x0005fd19) list_single_graphic_popup_conf_pane

0xcdc8,	// (0x0005fd2b) list_highlight_pane_cp01

0xcdd1,	// (0x0005fd34) list_single_graphic_popup_conf_pane_g1

0xcdd9,	// (0x0005fd3c) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf2ac,	// (0x0006220f) list_single_graphic_popup_conf_pane_g

0xcde1,	// (0x0005fd44) list_single_graphic_popup_conf_pane_t1

0xcdef,	// (0x0005fd52) linegrid_cams_pane_g1

0x571a,	// (0x0005867d) linegrid_cams_pane_g2

0xc687,	// (0x0005f5ea) linegrid_cams_pane_g3

0xcdf8,	// (0x0005fd5b) linegrid_cams_pane_g4

0x5723,	// (0x00058686) linegrid_cams_pane_g5

0x572c,	// (0x0005868f) linegrid_cams_pane_g6

0xc690,	// (0x0005f5f3) linegrid_cams_pane_g7

0x0006,

0xf2b1,	// (0x00062214) linegrid_cams_pane_g

0xce01,	// (0x0005fd64) popup_clock_analogue_window

0xce01,	// (0x0005fd64) popup_clock_digital_window

0xc152,	// (0x0005f0b5) popup_phob_thumbnail_window

0xc3c5,	// (0x0005f328) call_video_uplink_pane_g1

0xce0a,	// (0x0005fd6d) call_video_uplink_pane_g2

0x0001,

0xf2c0,	// (0x00062223) call_video_uplink_pane_g

0xce12,	// (0x0005fd75) video_uplink_pane

0xce1a,	// (0x0005fd7d) mce_image_pane_g1

0x5737,	// (0x0005869a) mce_image_pane_g2

0x5741,	// (0x000586a4) mce_image_pane_g3

0x574b,	// (0x000586ae) mce_image_pane_g4

0x5753,	// (0x000586b6) mce_image_pane_g5

0x0004,

0xf2c5,	// (0x00062228) mce_image_pane_g

0xce24,	// (0x0005fd87) control_top_pane_stacon_cp01_ParamLimits

0xce24,	// (0x0005fd87) control_top_pane_stacon_cp01

0xce38,	// (0x0005fd9b) uni_indicator_pane_stacon_cp01_ParamLimits

0xce38,	// (0x0005fd9b) uni_indicator_pane_stacon_cp01

0xce49,	// (0x0005fdac) bg_popup_sub_pane_cp03

0x575b,	// (0x000586be) chi_dic_find_pane

0x5763,	// (0x000586c6) listscroll_chi_dic_pane

0x576c,	// (0x000586cf) main_pane_chidic_g1

0x577f,	// (0x000586e2) chi_dic_find_pane_t1

0xce53,	// (0x0005fdb6) find_chidic_pane

0xce5c,	// (0x0005fdbf) chi_dic_list_pane_ParamLimits

0xce5c,	// (0x0005fdbf) chi_dic_list_pane

0xce6d,	// (0x0005fdd0) scroll_pane_cp020

0x578d,	// (0x000586f0) find_chidic_pane_t1

0xc152,	// (0x0005f0b5) input_focus_pane_cp06

0x579c,	// (0x000586ff) list_chi_dic_pane_ParamLimits

0x579c,	// (0x000586ff) list_chi_dic_pane

0x57b1,	// (0x00058714) list_chi_dic_pane_t1_ParamLimits

0x57b1,	// (0x00058714) list_chi_dic_pane_t1

0xc152,	// (0x0005f0b5) list_highlight_pane_cp020

0xce75,	// (0x0005fdd8) bg_cale_heading_pane_g1

0x57c4,	// (0x00058727) bg_cale_heading_pane_g2

0x57cc,	// (0x0005872f) bg_cale_heading_pane_g3

0x57d4,	// (0x00058737) bg_cale_heading_pane_g4

0x57de,	// (0x00058741) bg_cale_heading_pane_g5

0x57e8,	// (0x0005874b) bg_cale_heading_pane_g6

0x57f0,	// (0x00058753) bg_cale_heading_pane_g7

0x57f8,	// (0x0005875b) bg_cale_heading_pane_g8

0x5802,	// (0x00058765) bg_cale_heading_pane_g9

0x0008,

0xf2d0,	// (0x00062233) bg_cale_heading_pane_g

0xce75,	// (0x0005fdd8) bg_cale_side_pane_g1

0x580c,	// (0x0005876f) bg_cale_side_pane_g2

0x5816,	// (0x00058779) bg_cale_side_pane_g3

0x5820,	// (0x00058783) bg_cale_side_pane_g4

0x582a,	// (0x0005878d) bg_cale_side_pane_g5

0x5834,	// (0x00058797) bg_cale_side_pane_g6

0x583e,	// (0x000587a1) bg_cale_side_pane_g7

0x5848,	// (0x000587ab) bg_cale_side_pane_g8

0x5850,	// (0x000587b3) bg_cale_side_pane_g9

0x0008,

0xf2e3,	// (0x00062246) bg_cale_side_pane_g

0x5858,	// (0x000587bb) popup_call_status_window_ParamLimits

0x5858,	// (0x000587bb) popup_call_status_window

0xce7d,	// (0x0005fde0) stacon_top_pane

0xce85,	// (0x0005fde8) status_pane_ParamLimits

0xce85,	// (0x0005fde8) status_pane

0xce9a,	// (0x0005fdfd) status_small_pane

0xcea2,	// (0x0005fe05) control_pane

0xc152,	// (0x0005f0b5) stacon_bottom_pane

0xceaa,	// (0x0005fe0d) list_single_mce_smart_pane_t1_ParamLimits

0xceaa,	// (0x0005fe0d) list_single_mce_smart_pane_t1

0xcebd,	// (0x0005fe20) list_single_mce_smart_pane_t2_ParamLimits

0xcebd,	// (0x0005fe20) list_single_mce_smart_pane_t2

0x0001,

0xf2f6,	// (0x00062259) list_single_mce_smart_pane_t_ParamLimits

0xf2f6,	// (0x00062259) list_single_mce_smart_pane_t

0x5864,	// (0x000587c7) compass_pane

0x586f,	// (0x000587d2) main_location2_pane_t1

0x5885,	// (0x000587e8) main_location2_pane_t2

0x589b,	// (0x000587fe) main_location2_pane_t3

0x0003,

0xf2fb,	// (0x0006225e) main_location2_pane_t

0xcedc,	// (0x0005fe3f) compass_pane_g1_ParamLimits

0xcedc,	// (0x0005fe3f) compass_pane_g1

0x58e9,	// (0x0005884c) compass_pane_t1

0x58f8,	// (0x0005885b) compass_pane_t2

0x0005,

0xf304,	// (0x00062267) compass_pane_t

0x5943,	// (0x000588a6) text_secondary_cp61

0xcef0,	// (0x0005fe53) navi_pane_cams_g5

0xd123,	// (0x00060086) navi_pane_im_t1

0xd131,	// (0x00060094) navi_pane_mp_g1_ParamLimits

0xd131,	// (0x00060094) navi_pane_mp_g1

0xd145,	// (0x000600a8) navi_pane_mp_g2_ParamLimits

0xd145,	// (0x000600a8) navi_pane_mp_g2

0xd151,	// (0x000600b4) navi_pane_mp_g3_ParamLimits

0xd151,	// (0x000600b4) navi_pane_mp_g3

0x0002,

0xf318,	// (0x0006227b) navi_pane_mp_g_ParamLimits

0xf318,	// (0x0006227b) navi_pane_mp_g

0xd15d,	// (0x000600c0) navi_pane_mp_t1

0xd16b,	// (0x000600ce) navi_pane_mp_t2

0x0002,

0xf31f,	// (0x00062282) navi_pane_mp_t

0xd1a7,	// (0x0006010a) navi_pane_vt_g1

0xd15d,	// (0x000600c0) navi_pane_vt_t1

0xd1af,	// (0x00060112) navi_slider_pane

0xc6a1,	// (0x0005f604) zooming_pane

0xd1b7,	// (0x0006011a) navi_slider_pane_g1

0x5a78,	// (0x000589db) navi_slider_pane_g2

0x0006,

0xf326,	// (0x00062289) navi_slider_pane_g

0xd1db,	// (0x0006013e) aid_levels_zoom

0xd1e3,	// (0x00060146) zooming_pane_g1

0xd1eb,	// (0x0006014e) zooming_pane_g2

0xd1eb,	// (0x0006014e) zooming_pane_g3

0x0002,

0xf335,	// (0x00062298) zooming_pane_g

0xd1f3,	// (0x00060156) level_10_zoom

0xd1fc,	// (0x0006015f) level_11_zoom

0xd205,	// (0x00060168) level_1_zoom

0xd20e,	// (0x00060171) level_2_zoom

0xd217,	// (0x0006017a) level_3_zoom

0xd220,	// (0x00060183) level_4_zoom

0xd229,	// (0x0006018c) level_5_zoom

0xd232,	// (0x00060195) level_6_zoom

0xd23b,	// (0x0006019e) level_7_zoom

0xd244,	// (0x000601a7) level_8_zoom

0xd24d,	// (0x000601b0) level_9_zoom

0xd25e,	// (0x000601c1) popup_phob_thumbnail_window_g1

0xd266,	// (0x000601c9) popup_phob_thumbnail_window_g2

0x0001,

0xf33c,	// (0x0006229f) popup_phob_thumbnail_window_g

0x6384,	// (0x000592e7) level_1_location

0x638c,	// (0x000592ef) level_2_location

0x6394,	// (0x000592f7) level_3_location

0x639e,	// (0x00059301) level_4_location

0xc6a1,	// (0x0005f604) level_5_location

0x5a8a,	// (0x000589ed) mce_icon_pane_g1

0x5a92,	// (0x000589f5) mce_icon_pane_g2

0x0001,

0xf341,	// (0x000622a4) mce_icon_pane_g

0x5a9a,	// (0x000589fd) main_mup_pane_g1_ParamLimits

0x5a9a,	// (0x000589fd) main_mup_pane_g1

0xc444,	// (0x0005f3a7) main_mup_pane_g2_ParamLimits

0xc444,	// (0x0005f3a7) main_mup_pane_g2

0xc444,	// (0x0005f3a7) main_mup_pane_g3_ParamLimits

0xc444,	// (0x0005f3a7) main_mup_pane_g3

0xc444,	// (0x0005f3a7) main_mup_pane_g4_ParamLimits

0xc444,	// (0x0005f3a7) main_mup_pane_g4

0xc444,	// (0x0005f3a7) main_mup_pane_g5_ParamLimits

0xc444,	// (0x0005f3a7) main_mup_pane_g5

0xc444,	// (0x0005f3a7) main_mup_pane_g6_ParamLimits

0xc444,	// (0x0005f3a7) main_mup_pane_g6

0xc444,	// (0x0005f3a7) main_mup_pane_g7_ParamLimits

0xc444,	// (0x0005f3a7) main_mup_pane_g7

0xc444,	// (0x0005f3a7) main_mup_pane_g8_ParamLimits

0xc444,	// (0x0005f3a7) main_mup_pane_g8

0xc444,	// (0x0005f3a7) main_mup_pane_g9_ParamLimits

0xc444,	// (0x0005f3a7) main_mup_pane_g9

0xc444,	// (0x0005f3a7) main_mup_pane_g10_ParamLimits

0xc444,	// (0x0005f3a7) main_mup_pane_g10

0xc444,	// (0x0005f3a7) main_mup_pane_g11_ParamLimits

0xc444,	// (0x0005f3a7) main_mup_pane_g11

0xc436,	// (0x0005f399) main_mup_pane_g12_ParamLimits

0xc436,	// (0x0005f399) main_mup_pane_g12

0xc444,	// (0x0005f3a7) main_mup_pane_g13_ParamLimits

0xc444,	// (0x0005f3a7) main_mup_pane_g13

0x000c,

0xf346,	// (0x000622a9) main_mup_pane_g_ParamLimits

0xf346,	// (0x000622a9) main_mup_pane_g

0xc452,	// (0x0005f3b5) main_mup_pane_t1_ParamLimits

0xc452,	// (0x0005f3b5) main_mup_pane_t1

0xc452,	// (0x0005f3b5) main_mup_pane_t2_ParamLimits

0xc452,	// (0x0005f3b5) main_mup_pane_t2

0xc452,	// (0x0005f3b5) main_mup_pane_t3_ParamLimits

0xc452,	// (0x0005f3b5) main_mup_pane_t3

0xc484,	// (0x0005f3e7) main_mup_pane_t4_ParamLimits

0xc484,	// (0x0005f3e7) main_mup_pane_t4

0xc484,	// (0x0005f3e7) main_mup_pane_t5_ParamLimits

0xc484,	// (0x0005f3e7) main_mup_pane_t5

0xc470,	// (0x0005f3d3) main_mup_pane_t6_ParamLimits

0xc470,	// (0x0005f3d3) main_mup_pane_t6

0x0005,

0xf361,	// (0x000622c4) main_mup_pane_t_ParamLimits

0xf361,	// (0x000622c4) main_mup_pane_t

0x39af,	// (0x00056912) mup_progress_pane_ParamLimits

0x39af,	// (0x00056912) mup_progress_pane

0xe4a9,	// (0x0006140c) mup_visualizer_pane_ParamLimits

0xe4a9,	// (0x0006140c) mup_visualizer_pane

0xe4a9,	// (0x0006140c) mup_volume_pane_ParamLimits

0xe4a9,	// (0x0006140c) mup_volume_pane

0xc436,	// (0x0005f399) mup_visualizer_pane_g1_ParamLimits

0xc436,	// (0x0005f399) mup_visualizer_pane_g1

0xd26e,	// (0x000601d1) mup_visualizer_pane_g2_ParamLimits

0xd26e,	// (0x000601d1) mup_visualizer_pane_g2

0xc428,	// (0x0005f38b) mup_visualizer_pane_g3_ParamLimits

0xc428,	// (0x0005f38b) mup_visualizer_pane_g3

0x0002,

0xf36e,	// (0x000622d1) mup_visualizer_pane_g_ParamLimits

0xf36e,	// (0x000622d1) mup_visualizer_pane_g

0xc466,	// (0x0005f3c9) mup_volume_pane_g1

0xc466,	// (0x0005f3c9) mup_volume_pane_g2

0x0001,

0xf08c,	// (0x00061fef) mup_volume_pane_g

0xc466,	// (0x0005f3c9) mup_progress_pane_g1

0xc466,	// (0x0005f3c9) mup_progress_pane_g2

0xc466,	// (0x0005f3c9) mup_progress_pane_g3

0x0002,

0xf375,	// (0x000622d8) mup_progress_pane_g

0xc152,	// (0x0005f0b5) bg_popup_window_pane_cp05

0xd27c,	// (0x000601df) heading_pane_cp02_ParamLimits

0xd27c,	// (0x000601df) heading_pane_cp02

0xd298,	// (0x000601fb) list_popup_blid_pane

0xd2a0,	// (0x00060203) list_blid_sat_info_pane_ParamLimits

0xd2a0,	// (0x00060203) list_blid_sat_info_pane

0xd2b3,	// (0x00060216) list_blid_sat_info_pane_g1

0xd2bb,	// (0x0006021e) list_blid_sat_info_pane_t1

0x5ba9,	// (0x00058b0c) mup_equalizer_pane_ParamLimits

0x5ba9,	// (0x00058b0c) mup_equalizer_pane

0x5bca,	// (0x00058b2d) mup_equalizer_pane_cp1_ParamLimits

0x5bca,	// (0x00058b2d) mup_equalizer_pane_cp1

0x5beb,	// (0x00058b4e) mup_equalizer_pane_cp2_ParamLimits

0x5beb,	// (0x00058b4e) mup_equalizer_pane_cp2

0x5c0c,	// (0x00058b6f) mup_equalizer_pane_cp3_ParamLimits

0x5c0c,	// (0x00058b6f) mup_equalizer_pane_cp3

0x5c31,	// (0x00058b94) mup_equalizer_pane_cp4_ParamLimits

0x5c31,	// (0x00058b94) mup_equalizer_pane_cp4

0x5c56,	// (0x00058bb9) mup_equalizer_pane_cp5

0x5c6e,	// (0x00058bd1) mup_equalizer_pane_cp6

0x5c86,	// (0x00058be9) mup_equalizer_pane_cp7

0xe427,	// (0x0006138a) bg_popup_call_poc_act_pane_g9

0xe42f,	// (0x00061392) bg_popup_call_poc_act_pane_g10

0xe437,	// (0x0006139a) bg_popup_call_poc_act_pane_g11

0x000a,

0xc3ad,	// (0x0005f310) mup_scale_pane

0xc3c5,	// (0x0005f328) mup_scale_pane_g1

0xd2c9,	// (0x0006022c) mup_scale_pane_g2

0x0006,

0xf391,	// (0x000622f4) mup_scale_pane_g

0xd2ed,	// (0x00060250) msg_data_pane

0xd2f5,	// (0x00060258) scroll_pane_cp017

0x5cb0,	// (0x00058c13) bg_list_pane_cp04_ParamLimits

0x5cb0,	// (0x00058c13) bg_list_pane_cp04

0xd305,	// (0x00060268) msg_data_pane_g1

0x5cce,	// (0x00058c31) msg_data_pane_g2

0x5cd8,	// (0x00058c3b) msg_data_pane_g3

0x5ce2,	// (0x00058c45) msg_data_pane_g4

0x5cea,	// (0x00058c4d) msg_data_pane_g5

0x5cf2,	// (0x00058c55) msg_data_pane_g6

0x5cfa,	// (0x00058c5d) msg_data_pane_g7

0x0006,

0xf3a0,	// (0x00062303) msg_data_pane_g

0x5d02,	// (0x00058c65) msg_text_pane_ParamLimits

0x5d02,	// (0x00058c65) msg_text_pane

0x5d3b,	// (0x00058c9e) qrid_highlight_pane_cp011_ParamLimits

0x5d3b,	// (0x00058c9e) qrid_highlight_pane_cp011

0xc152,	// (0x0005f0b5) msg_body_pane

0xc3ad,	// (0x0005f310) msg_header_pane

0xd321,	// (0x00060284) input_focus_pane_cp07

0xd342,	// (0x000602a5) msg_header_pane_t1_ParamLimits

0xd342,	// (0x000602a5) msg_header_pane_t1

0xd35e,	// (0x000602c1) msg_header_pane_t2_ParamLimits

0xd35e,	// (0x000602c1) msg_header_pane_t2

0x0001,

0xf3b4,	// (0x00062317) msg_header_pane_t_ParamLimits

0xf3b4,	// (0x00062317) msg_header_pane_t

0xd37e,	// (0x000602e1) msg_body_pane_g1

0xd386,	// (0x000602e9) msg_body_pane_t1_ParamLimits

0xd386,	// (0x000602e9) msg_body_pane_t1

0xd3b7,	// (0x0006031a) msg_body_pane_t2_ParamLimits

0xd3b7,	// (0x0006031a) msg_body_pane_t2

0xd3c9,	// (0x0006032c) msg_body_pane_t3_ParamLimits

0xd3c9,	// (0x0006032c) msg_body_pane_t3

0x0002,

0xf3b9,	// (0x0006231c) msg_body_pane_t_ParamLimits

0xf3b9,	// (0x0006231c) msg_body_pane_t

0x5db1,	// (0x00058d14) main_viewer_pane_g1_ParamLimits

0x5db1,	// (0x00058d14) main_viewer_pane_g1

0x5dbd,	// (0x00058d20) main_viewer_pane_g2_ParamLimits

0x5dbd,	// (0x00058d20) main_viewer_pane_g2

0x5dc9,	// (0x00058d2c) main_viewer_pane_g3_ParamLimits

0x5dc9,	// (0x00058d2c) main_viewer_pane_g3

0x5dda,	// (0x00058d3d) main_viewer_pane_g4_ParamLimits

0x5dda,	// (0x00058d3d) main_viewer_pane_g4

0x5deb,	// (0x00058d4e) main_viewer_pane_g5_ParamLimits

0x5deb,	// (0x00058d4e) main_viewer_pane_g5

0x5deb,	// (0x00058d4e) main_viewer_pane_g7_ParamLimits

0x5deb,	// (0x00058d4e) main_viewer_pane_g7

0x5dfd,	// (0x00058d60) main_viewer_pane_g8_ParamLimits

0x5dfd,	// (0x00058d60) main_viewer_pane_g8

0x0007,

0xf3c9,	// (0x0006232c) main_viewer_pane_g_ParamLimits

0xf3c9,	// (0x0006232c) main_viewer_pane_g

0xd3db,	// (0x0006033e) viewer_content_pane_ParamLimits

0xd3db,	// (0x0006033e) viewer_content_pane

0x5e35,	// (0x00058d98) main_postcard_pane_g1_ParamLimits

0x5e35,	// (0x00058d98) main_postcard_pane_g1

0x5e43,	// (0x00058da6) main_postcard_pane_g2_ParamLimits

0x5e43,	// (0x00058da6) main_postcard_pane_g2

0x5e51,	// (0x00058db4) main_postcard_pane_g3_ParamLimits

0x5e51,	// (0x00058db4) main_postcard_pane_g3

0x0005,

0xf3da,	// (0x0006233d) main_postcard_pane_g_ParamLimits

0xf3da,	// (0x0006233d) main_postcard_pane_g

0x5e61,	// (0x00058dc4) main_postcard_pane_g4

0xe573,	// (0x000614d6) smil_status_volume_pane_g2

0x5e8d,	// (0x00058df0) postcard_pane_ParamLimits

0x5e8d,	// (0x00058df0) postcard_pane

0xdad4,	// (0x00060a37) postcard_pane_g1_ParamLimits

0xdad4,	// (0x00060a37) postcard_pane_g1

0x5ec7,	// (0x00058e2a) postcard_pane_g2_ParamLimits

0x5ec7,	// (0x00058e2a) postcard_pane_g2

0x5ed3,	// (0x00058e36) postcard_pane_g3_ParamLimits

0x5ed3,	// (0x00058e36) postcard_pane_g3

0xd419,	// (0x0006037c) postcard_pane_g4_ParamLimits

0xd419,	// (0x0006037c) postcard_pane_g4

0x5edf,	// (0x00058e42) postcard_pane_g5_ParamLimits

0x5edf,	// (0x00058e42) postcard_pane_g5

0x5eeb,	// (0x00058e4e) postcard_pane_g6_ParamLimits

0x5eeb,	// (0x00058e4e) postcard_pane_g6

0xd427,	// (0x0006038a) postcard_pane_g7_ParamLimits

0xd427,	// (0x0006038a) postcard_pane_g7

0x0006,

0xf3e7,	// (0x0006234a) postcard_pane_g_ParamLimits

0xf3e7,	// (0x0006234a) postcard_pane_g

0x5ef9,	// (0x00058e5c) main_mp2_pane_g1_ParamLimits

0x5ef9,	// (0x00058e5c) main_mp2_pane_g1

0x5f07,	// (0x00058e6a) main_mp2_pane_g2_ParamLimits

0x5f07,	// (0x00058e6a) main_mp2_pane_g2

0x5f13,	// (0x00058e76) main_mp2_pane_g3_ParamLimits

0x5f13,	// (0x00058e76) main_mp2_pane_g3

0x0002,

0xf3f6,	// (0x00062359) main_mp2_pane_g_ParamLimits

0xf3f6,	// (0x00062359) main_mp2_pane_g

0x5f1f,	// (0x00058e82) main_mp2_pane_t1_ParamLimits

0x5f1f,	// (0x00058e82) main_mp2_pane_t1

0x5f36,	// (0x00058e99) main_mp2_pane_t2_ParamLimits

0x5f36,	// (0x00058e99) main_mp2_pane_t2

0x5f4a,	// (0x00058ead) main_mp2_pane_t3_ParamLimits

0x5f4a,	// (0x00058ead) main_mp2_pane_t3

0x0002,

0xf3fd,	// (0x00062360) main_mp2_pane_t_ParamLimits

0xf3fd,	// (0x00062360) main_mp2_pane_t

0x39af,	// (0x00056912) pec_content_pane_ParamLimits

0x39af,	// (0x00056912) pec_content_pane

0x1b91,	// (0x00054af4) scroll_pane_cp015

0xd3e9,	// (0x0006034c) pec_attribute_pane_ParamLimits

0xd3e9,	// (0x0006034c) pec_attribute_pane

0xc428,	// (0x0005f38b) pec_content_pane_g1_ParamLimits

0xc428,	// (0x0005f38b) pec_content_pane_g1

0xd435,	// (0x00060398) pec_content_pane_t1_ParamLimits

0xd435,	// (0x00060398) pec_content_pane_t1

0xd449,	// (0x000603ac) pec_content_pane_t2_ParamLimits

0xd449,	// (0x000603ac) pec_content_pane_t2

0x0001,

0xf404,	// (0x00062367) pec_content_pane_t_ParamLimits

0xf404,	// (0x00062367) pec_content_pane_t

0xc41a,	// (0x0005f37d) list_single_graphic_pane_cp01_ParamLimits

0xc41a,	// (0x0005f37d) list_single_graphic_pane_cp01

0xc3ad,	// (0x0005f310) bg_popup_sub_pane_cp04

0xd45d,	// (0x000603c0) popup_mup_playback_window_g1

0xd469,	// (0x000603cc) popup_mup_playback_window_t1

0xd47e,	// (0x000603e1) popup_mup_playback_window_t2

0x0001,

0xf409,	// (0x0006236c) popup_mup_playback_window_t

0xd4b5,	// (0x00060418) main_image_pane_g1_ParamLimits

0xd4b5,	// (0x00060418) main_image_pane_g1

0xd4f8,	// (0x0006045b) scroll_pane_cp018_ParamLimits

0xd4f8,	// (0x0006045b) scroll_pane_cp018

0xd510,	// (0x00060473) scroll_pane_cp016_ParamLimits

0xd510,	// (0x00060473) scroll_pane_cp016

0x5fcd,	// (0x00058f30) smil2_image_pane_ParamLimits

0x5fcd,	// (0x00058f30) smil2_image_pane

0x6003,	// (0x00058f66) smil2_root_pane_ParamLimits

0x6003,	// (0x00058f66) smil2_root_pane

0x602f,	// (0x00058f92) smil2_text_pane_ParamLimits

0x602f,	// (0x00058f92) smil2_text_pane

0x1b91,	// (0x00054af4) bg_list_pane_cp06

0x1b91,	// (0x00054af4) grid_radio_pane

0xc152,	// (0x0005f0b5) bg_popup_window_pane_cp06

0xcbbc,	// (0x0005fb1f) main_fmradio_pane_t1

0xcd43,	// (0x0005fca6) heading_pane_cp04

0xcbbc,	// (0x0005fb1f) main_fmradio_pane_t2

0xe43f,	// (0x000613a2) popup_cale_lunar_info_window_g1

0xcbbc,	// (0x0005fb1f) main_fmradio_pane_t3

0xe447,	// (0x000613aa) popup_cale_lunar_info_window_g2

0xcbbc,	// (0x0005fb1f) main_fmradio_pane_t4

0x0001,

0xcbbc,	// (0x0005fb1f) main_fmradio_pane_t5

0x0004,

0xf4cb,	// (0x0006242e) popup_cale_lunar_info_window_g

0xf269,	// (0x000621cc) main_fmradio_pane_t

0x1b91,	// (0x00054af4) wait_bar_pane_cp03

0xc41a,	// (0x0005f37d) cell_fmradio_pane_ParamLimits

0xc41a,	// (0x0005f37d) cell_fmradio_pane

0xc428,	// (0x0005f38b) cell_fmradio_pane_g1_ParamLimits

0xc428,	// (0x0005f38b) cell_fmradio_pane_g1

0x1b91,	// (0x00054af4) grid_highlight_pane_cp011

0xd544,	// (0x000604a7) poc_content_pane_ParamLimits

0xd544,	// (0x000604a7) poc_content_pane

0xd556,	// (0x000604b9) scroll_pane_cp019

0x606f,	// (0x00058fd2) popup_call_poc_act_window_ParamLimits

0x606f,	// (0x00058fd2) popup_call_poc_act_window

0x607c,	// (0x00058fdf) popup_call_poc_inact_window_ParamLimits

0x607c,	// (0x00058fdf) popup_call_poc_inact_window

0xf4a2,	// (0x00062405) bg_popup_call_poc_act_pane_g

0xe3b7,	// (0x0006131a) bg_popup_call_poc_inact_pane_g1

0xe3bf,	// (0x00061322) bg_popup_call_poc_inact_pane_g2

0xd55e,	// (0x000604c1) popup_call_poc_act_window_g2

0xe3c7,	// (0x0006132a) bg_popup_call_poc_inact_pane_g3

0xe3cf,	// (0x00061332) bg_popup_call_poc_inact_pane_g4

0xe3d7,	// (0x0006133a) bg_popup_call_poc_inact_pane_g5

0xd566,	// (0x000604c9) popup_call_poc_act_window_t1_ParamLimits

0xd566,	// (0x000604c9) popup_call_poc_act_window_t1

0xd58e,	// (0x000604f1) popup_call_poc_act_window_t2_ParamLimits

0xd58e,	// (0x000604f1) popup_call_poc_act_window_t2

0xd5b6,	// (0x00060519) popup_call_poc_act_window_t3_ParamLimits

0xd5b6,	// (0x00060519) popup_call_poc_act_window_t3

0xd5de,	// (0x00060541) popup_call_poc_act_window_t4_ParamLimits

0xd5de,	// (0x00060541) popup_call_poc_act_window_t4

0x0003,

0xf41e,	// (0x00062381) popup_call_poc_act_window_t_ParamLimits

0xf41e,	// (0x00062381) popup_call_poc_act_window_t

0xe3df,	// (0x00061342) bg_popup_call_poc_inact_pane_g6

0xe3e7,	// (0x0006134a) bg_popup_call_poc_inact_pane_g7

0xe3ef,	// (0x00061352) bg_popup_call_poc_inact_pane_g8

0xd5f0,	// (0x00060553) popup_call_poc_inact_window_g2

0xe3f7,	// (0x0006135a) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf48f,	// (0x000623f2) bg_popup_call_poc_inact_pane_g

0xd5f8,	// (0x0006055b) popup_call_poc_inact_window_t1_ParamLimits

0xd5f8,	// (0x0006055b) popup_call_poc_inact_window_t1

0xd60d,	// (0x00060570) popup_call_poc_inact_window_t2_ParamLimits

0xd60d,	// (0x00060570) popup_call_poc_inact_window_t2

0xd622,	// (0x00060585) popup_call_poc_inact_window_t3_ParamLimits

0xd622,	// (0x00060585) popup_call_poc_inact_window_t3

0x0002,

0xf427,	// (0x0006238a) popup_call_poc_inact_window_t_ParamLimits

0xf427,	// (0x0006238a) popup_call_poc_inact_window_t

0xe4eb,	// (0x0006144e) context_pane_ParamLimits

0x66af,	// (0x00059612) signal_pane_ParamLimits

0xc6a1,	// (0x0005f604) main_call2_pane

0x661b,	// (0x0005957e) popup_phob_thumbnail2_window_ParamLimits

0x661b,	// (0x0005957e) popup_phob_thumbnail2_window

0x5d5f,	// (0x00058cc2) aid_hotspot_pointer_arrow_pane

0x5d67,	// (0x00058cca) aid_hotspot_pointer_hand_pane

0x634c,	// (0x000592af) phob_pre_status_pane_g5

0xc41a,	// (0x0005f37d) cams_zoom_pane_ParamLimits

0xc41a,	// (0x0005f37d) image_vga_pane_ParamLimits

0xc436,	// (0x0005f399) main_camera_pane_g1_ParamLimits

0xc436,	// (0x0005f399) main_camera_pane_g2_ParamLimits

0xc436,	// (0x0005f399) main_camera_pane_g3_ParamLimits

0xc436,	// (0x0005f399) main_camera_pane_g4_ParamLimits

0xc436,	// (0x0005f399) main_camera_pane_g5_ParamLimits

0xc436,	// (0x0005f399) main_camera_pane_g6_ParamLimits

0xc436,	// (0x0005f399) main_camera_pane_g7_ParamLimits

0xf15d,	// (0x000620c0) main_camera_pane_g_ParamLimits

0xc484,	// (0x0005f3e7) main_camera_pane_t1_ParamLimits

0xc484,	// (0x0005f3e7) main_camera_pane_t2_ParamLimits

0xf16e,	// (0x000620d1) main_camera_pane_t_ParamLimits

0xc3ad,	// (0x0005f310) bg_popup_preview_window_pane_cp01_ParamLimits

0xc3ad,	// (0x0005f310) bg_popup_preview_window_pane_cp01

0xd637,	// (0x0006059a) popup_phob_thumbnail2_window_g1_ParamLimits

0xd637,	// (0x0006059a) popup_phob_thumbnail2_window_g1

0xc152,	// (0x0005f0b5) call2_cli_visual_pane

0x6098,	// (0x00058ffb) popup_call2_audio_conf_window_ParamLimits

0x6098,	// (0x00058ffb) popup_call2_audio_conf_window

0x60b1,	// (0x00059014) popup_call2_audio_first_window_ParamLimits

0x60b1,	// (0x00059014) popup_call2_audio_first_window

0x614f,	// (0x000590b2) popup_call2_audio_in_window_ParamLimits

0x614f,	// (0x000590b2) popup_call2_audio_in_window

0x6193,	// (0x000590f6) popup_call2_audio_out_window_ParamLimits

0x6193,	// (0x000590f6) popup_call2_audio_out_window

0x61fd,	// (0x00059160) popup_call2_audio_second_window_ParamLimits

0x61fd,	// (0x00059160) popup_call2_audio_second_window

0x625b,	// (0x000591be) popup_call2_audio_wait_window_ParamLimits

0x625b,	// (0x000591be) popup_call2_audio_wait_window

0xc152,	// (0x0005f0b5) bg_popup_call2_act_pane_cp03

0xc38f,	// (0x0005f2f2) list_conf_pane_cp

0xd643,	// (0x000605a6) popup_call2_audio_conf_window_t1

0xd651,	// (0x000605b4) list_single_graphic_popup_conf2_pane_ParamLimits

0xd651,	// (0x000605b4) list_single_graphic_popup_conf2_pane

0xcdc8,	// (0x0005fd2b) list_highlight_pane_cp04

0xd664,	// (0x000605c7) list_single_graphic_popup_conf2_pane_g1

0xcdd9,	// (0x0005fd3c) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf42e,	// (0x00062391) list_single_graphic_popup_conf2_pane_g

0xd66e,	// (0x000605d1) list_single_graphic_popup_conf2_pane_t1

0xd67c,	// (0x000605df) bg_popup_call2_act_pane_cp01_ParamLimits

0xd67c,	// (0x000605df) bg_popup_call2_act_pane_cp01

0xd706,	// (0x00060669) call_type_pane_cp05_ParamLimits

0xd706,	// (0x00060669) call_type_pane_cp05

0xd75a,	// (0x000606bd) popup_call2_audio_second_window_g1_ParamLimits

0xd75a,	// (0x000606bd) popup_call2_audio_second_window_g1

0xd7ae,	// (0x00060711) popup_call2_audio_second_window_g2_ParamLimits

0xd7ae,	// (0x00060711) popup_call2_audio_second_window_g2

0x0002,

0xf433,	// (0x00062396) popup_call2_audio_second_window_g_ParamLimits

0xf433,	// (0x00062396) popup_call2_audio_second_window_g

0xd813,	// (0x00060776) popup_call2_audio_second_window_t1_ParamLimits

0xd813,	// (0x00060776) popup_call2_audio_second_window_t1

0xd8ce,	// (0x00060831) popup_call2_audio_second_window_t2_ParamLimits

0xd8ce,	// (0x00060831) popup_call2_audio_second_window_t2

0xd921,	// (0x00060884) popup_call2_audio_second_window_t3_ParamLimits

0xd921,	// (0x00060884) popup_call2_audio_second_window_t3

0x0003,

0xf43a,	// (0x0006239d) popup_call2_audio_second_window_t_ParamLimits

0xf43a,	// (0x0006239d) popup_call2_audio_second_window_t

0xc152,	// (0x0005f0b5) bg_popup_call2_in_pane_cp02

0xc15c,	// (0x0005f0bf) call_type_pane_cp04

0x629a,	// (0x000591fd) popup_call2_audio_wait_window_g1

0x62a2,	// (0x00059205) popup_call2_audio_wait_window_g2

0x0001,

0xf443,	// (0x000623a6) popup_call2_audio_wait_window_g

0xc174,	// (0x0005f0d7) popup_call2_audio_wait_window_t3

0xda14,	// (0x00060977) bg_popup_call2_act_pane_ParamLimits

0xda14,	// (0x00060977) bg_popup_call2_act_pane

0xdae2,	// (0x00060a45) call_type_pane_cp03_ParamLimits

0xdae2,	// (0x00060a45) call_type_pane_cp03

0xdb46,	// (0x00060aa9) popup_call2_audio_first_window_g1_ParamLimits

0xdb46,	// (0x00060aa9) popup_call2_audio_first_window_g1

0xdbb6,	// (0x00060b19) popup_call2_audio_first_window_g2_ParamLimits

0xdbb6,	// (0x00060b19) popup_call2_audio_first_window_g2

0xdad4,	// (0x00060a37) popup_call2_audio_first_window_g3_ParamLimits

0xdad4,	// (0x00060a37) popup_call2_audio_first_window_g3

0x0004,

0xf448,	// (0x000623ab) popup_call2_audio_first_window_g_ParamLimits

0xf448,	// (0x000623ab) popup_call2_audio_first_window_g

0xdc94,	// (0x00060bf7) popup_call2_audio_first_window_t1_ParamLimits

0xdc94,	// (0x00060bf7) popup_call2_audio_first_window_t1

0xdd97,	// (0x00060cfa) popup_call2_audio_first_window_t4_ParamLimits

0xdd97,	// (0x00060cfa) popup_call2_audio_first_window_t4

0xde7a,	// (0x00060ddd) popup_call2_audio_first_window_t5_ParamLimits

0xde7a,	// (0x00060ddd) popup_call2_audio_first_window_t5

0x0003,

0xf453,	// (0x000623b6) popup_call2_audio_first_window_t_ParamLimits

0xf453,	// (0x000623b6) popup_call2_audio_first_window_t

0xc3a5,	// (0x0005f308) bg_popup_call2_act_pane_g1

0xe451,	// (0x000613b4) popup_cale_lunar_info_window_t1

0xe45f,	// (0x000613c2) popup_cale_lunar_info_window_t2

0xe46d,	// (0x000613d0) popup_cale_lunar_info_window_t3

0xc152,	// (0x0005f0b5) bg_popup_call2_bubble_pane

0xdf7b,	// (0x00060ede) bg_popup_call2_in_pane_cp01_ParamLimits

0xdf7b,	// (0x00060ede) bg_popup_call2_in_pane_cp01

0x1cbf,	// (0x00054c22) call_type_pane_cp02

0x62aa,	// (0x0005920d) popup_call2_audio_out_window_g1_ParamLimits

0x62aa,	// (0x0005920d) popup_call2_audio_out_window_g1

0xdfc3,	// (0x00060f26) popup_call2_audio_out_window_g2_ParamLimits

0xdfc3,	// (0x00060f26) popup_call2_audio_out_window_g2

0x62d6,	// (0x00059239) popup_call2_audio_out_window_g3_ParamLimits

0x62d6,	// (0x00059239) popup_call2_audio_out_window_g3

0x0003,

0xf45c,	// (0x000623bf) popup_call2_audio_out_window_g_ParamLimits

0xf45c,	// (0x000623bf) popup_call2_audio_out_window_g

0xdffa,	// (0x00060f5d) popup_call2_audio_out_window_t1_ParamLimits

0xdffa,	// (0x00060f5d) popup_call2_audio_out_window_t1

0xe059,	// (0x00060fbc) popup_call2_audio_out_window_t2_ParamLimits

0xe059,	// (0x00060fbc) popup_call2_audio_out_window_t2

0xe0ad,	// (0x00061010) popup_call2_audio_out_window_t3_ParamLimits

0xe0ad,	// (0x00061010) popup_call2_audio_out_window_t3

0xe0c3,	// (0x00061026) popup_call2_audio_out_window_t4_ParamLimits

0xe0c3,	// (0x00061026) popup_call2_audio_out_window_t4

0xe0d9,	// (0x0006103c) popup_call2_audio_out_window_t5_ParamLimits

0xe0d9,	// (0x0006103c) popup_call2_audio_out_window_t5

0x0005,

0xf465,	// (0x000623c8) popup_call2_audio_out_window_t_ParamLimits

0xf465,	// (0x000623c8) popup_call2_audio_out_window_t

0xe13d,	// (0x000610a0) bg_popup_call2_in_pane_ParamLimits

0xe13d,	// (0x000610a0) bg_popup_call2_in_pane

0xe199,	// (0x000610fc) popup_call2_audio_in_window_g1_ParamLimits

0xe199,	// (0x000610fc) popup_call2_audio_in_window_g1

0xe1d1,	// (0x00061134) popup_call2_audio_in_window_g2_ParamLimits

0xe1d1,	// (0x00061134) popup_call2_audio_in_window_g2

0xe209,	// (0x0006116c) popup_call2_audio_in_window_g3_ParamLimits

0xe209,	// (0x0006116c) popup_call2_audio_in_window_g3

0x0003,

0xf472,	// (0x000623d5) popup_call2_audio_in_window_g_ParamLimits

0xf472,	// (0x000623d5) popup_call2_audio_in_window_g

0xe261,	// (0x000611c4) popup_call2_audio_in_window_t1_ParamLimits

0xe261,	// (0x000611c4) popup_call2_audio_in_window_t1

0xe2e1,	// (0x00061244) popup_call2_audio_in_window_t2_ParamLimits

0xe2e1,	// (0x00061244) popup_call2_audio_in_window_t2

0xe361,	// (0x000612c4) popup_call2_audio_in_window_t3_ParamLimits

0xe361,	// (0x000612c4) popup_call2_audio_in_window_t3

0xe37b,	// (0x000612de) popup_call2_audio_in_window_t4_ParamLimits

0xe37b,	// (0x000612de) popup_call2_audio_in_window_t4

0xe38d,	// (0x000612f0) popup_call2_audio_in_window_t5_ParamLimits

0xe38d,	// (0x000612f0) popup_call2_audio_in_window_t5

0xe3a2,	// (0x00061305) popup_call2_audio_in_window_t6_ParamLimits

0xe3a2,	// (0x00061305) popup_call2_audio_in_window_t6

0x0005,

0xf47b,	// (0x000623de) popup_call2_audio_in_window_t_ParamLimits

0xf47b,	// (0x000623de) popup_call2_audio_in_window_t

0xc3a5,	// (0x0005f308) bg_popup_call2_in_pane_g1

0xe47b,	// (0x000613de) popup_cale_lunar_info_window_t4

0x0003,

0xf4d0,	// (0x00062433) popup_cale_lunar_info_window_t

0xc3ad,	// (0x0005f310) bg_popup_call2_rect_pane_ParamLimits

0xc3ad,	// (0x0005f310) bg_popup_call2_rect_pane

0xc152,	// (0x0005f0b5) call2_cli_visual_graphic_pane

0xc152,	// (0x0005f0b5) call2_cli_visual_text_pane

0x66ea,	// (0x0005964d) smil_status_volume_pane_g3

0x0002,

0xc3c5,	// (0x0005f328) call2_cli_visual_graphic_pane_g1

0xc3c5,	// (0x0005f328) call2_cli_visual_graphic_pane_g2

0xc3c5,	// (0x0005f328) call2_cli_visual_graphic_pane_g3

0x0002,

0xf488,	// (0x000623eb) call2_cli_visual_graphic_pane_g

0xc5c5,	// (0x0005f528) bg_popup_call2_rect_pane_g1

0xc5bd,	// (0x0005f520) bg_popup_call2_rect_pane_g2

0xc5b5,	// (0x0005f518) bg_popup_call2_rect_pane_g3

0xc5d5,	// (0x0005f538) bg_popup_call2_rect_pane_g4

0xc5cd,	// (0x0005f530) bg_popup_call2_rect_pane_g5

0xc5dd,	// (0x0005f540) bg_popup_call2_rect_pane_g6

0xc5e5,	// (0x0005f548) bg_popup_call2_rect_pane_g7

0xc5f5,	// (0x0005f558) bg_popup_call2_rect_pane_g8

0xc5ed,	// (0x0005f550) bg_popup_call2_rect_pane_g9

0x0008,

0xf218,	// (0x0006217b) bg_popup_call2_rect_pane_g

0xe3b7,	// (0x0006131a) bg_popup_call2_bubble_pane_g1

0xe3bf,	// (0x00061322) bg_popup_call2_bubble_pane_g2

0xe3c7,	// (0x0006132a) bg_popup_call2_bubble_pane_g3

0xe3cf,	// (0x00061332) bg_popup_call2_bubble_pane_g4

0xe3d7,	// (0x0006133a) bg_popup_call2_bubble_pane_g5

0xe3df,	// (0x00061342) bg_popup_call2_bubble_pane_g6

0xe3e7,	// (0x0006134a) bg_popup_call2_bubble_pane_g7

0xe3ef,	// (0x00061352) bg_popup_call2_bubble_pane_g8

0xe3f7,	// (0x0006135a) bg_popup_call2_bubble_pane_g9

0x0008,

0xf48f,	// (0x000623f2) bg_popup_call2_bubble_pane_g

0x3c71,	// (0x00056bd4) aid_cale_week_size_cell_pane

0xc3ad,	// (0x0005f310) aid_cams_cif_uncrop_pane_ParamLimits

0xc3ad,	// (0x0005f310) aid_cams_cif_uncrop_pane

0xc41a,	// (0x0005f37d) aid_cams_size_cell_ParamLimits

0xc41a,	// (0x0005f37d) aid_cams_size_cell

0xc41a,	// (0x0005f37d) grid_cams_pane_ParamLimits

0xc41a,	// (0x0005f37d) linegrid_cams_pane_ParamLimits

0x4525,	// (0x00057488) call_video_pane_t1

0x4542,	// (0x000574a5) call_video_pane_t2

0x0001,

0xf1ba,	// (0x0006211d) call_video_pane_t

0x49ec,	// (0x0005794f) aid_cale_month_size_cell_pane_ParamLimits

0x49ec,	// (0x0005794f) aid_cale_month_size_cell_pane

0xf514,	// (0x00062477) smil_status_volume_pane_g

0x66f7,	// (0x0005965a) volume_smil_pane_ParamLimits

0x345a,	// (0x000563bd) aid_popup2_width_pane

0x3bb6,	// (0x00056b19) cell_qdial_pane_g4_ParamLimits

0x3bb6,	// (0x00056b19) cell_qdial_pane_g4

0x58c5,	// (0x00058828) aid_blid_cardinal_pane_ParamLimits

0x58d5,	// (0x00058838) aid_blid_destination_pane_ParamLimits

0x58d5,	// (0x00058838) aid_blid_destination_pane

0xc3ad,	// (0x0005f310) bg_popup_call_poc_act_pane_ParamLimits

0xc3ad,	// (0x0005f310) bg_popup_call_poc_act_pane

0xc3ad,	// (0x0005f310) bg_popup_call_poc_inact_pane_ParamLimits

0xc3ad,	// (0x0005f310) bg_popup_call_poc_inact_pane

0xe3ff,	// (0x00061362) bg_popup_call_poc_act_pane_g1

0xe407,	// (0x0006136a) bg_popup_call_poc_act_pane_g2

0xe40f,	// (0x00061372) bg_popup_call_poc_act_pane_g3

0xe3cf,	// (0x00061332) bg_popup_call_poc_act_pane_g4

0xe3d7,	// (0x0006133a) bg_popup_call_poc_act_pane_g5

0xe417,	// (0x0006137a) bg_popup_call_poc_act_pane_g6

0xe3e7,	// (0x0006134a) bg_popup_call_poc_act_pane_g7

0xe41f,	// (0x00061382) bg_popup_call_poc_act_pane_g8

0xc152,	// (0x0005f0b5) main_usb_pane

0x6538,	// (0x0005949b) popup_cale_lunar_info_window

0x4847,	// (0x000577aa) im_reading_pane_t1_ParamLimits

0xc764,	// (0x0005f6c7) list_im_pane_ParamLimits

0xc775,	// (0x0005f6d8) scroll_pane_cp07_ParamLimits

0xc152,	// (0x0005f0b5) grid_highlight_pane_cp012

0xc3ad,	// (0x0005f310) mup_scale_pane_ParamLimits

0xc436,	// (0x0005f399) main_usb_pane_g1_ParamLimits

0xc436,	// (0x0005f399) main_usb_pane_g1

0xc436,	// (0x0005f399) main_usb_pane_g2_ParamLimits

0xc436,	// (0x0005f399) main_usb_pane_g2

0x0001,

0xf4b9,	// (0x0006241c) main_usb_pane_g_ParamLimits

0xf4b9,	// (0x0006241c) main_usb_pane_g

0xc484,	// (0x0005f3e7) main_usb_pane_t1_ParamLimits

0xc484,	// (0x0005f3e7) main_usb_pane_t1

0xc484,	// (0x0005f3e7) main_usb_pane_t2_ParamLimits

0xc484,	// (0x0005f3e7) main_usb_pane_t2

0xc484,	// (0x0005f3e7) main_usb_pane_t3_ParamLimits

0xc484,	// (0x0005f3e7) main_usb_pane_t3

0xc484,	// (0x0005f3e7) main_usb_pane_t4_ParamLimits

0xc484,	// (0x0005f3e7) main_usb_pane_t4

0xc484,	// (0x0005f3e7) main_usb_pane_t5_ParamLimits

0xc484,	// (0x0005f3e7) main_usb_pane_t5

0xc484,	// (0x0005f3e7) main_usb_pane_t6_ParamLimits

0xc484,	// (0x0005f3e7) main_usb_pane_t6

0x0005,

0xf4be,	// (0x00062421) main_usb_pane_t_ParamLimits

0x5864,	// (0x000587c7) aid_text_placing

0x586f,	// (0x000587d2) main_location2_pane_t1_ParamLimits

0x5885,	// (0x000587e8) main_location2_pane_t2_ParamLimits

0x589b,	// (0x000587fe) main_location2_pane_t3_ParamLimits

0x58b1,	// (0x00058814) main_location2_pane_t4_ParamLimits

0x58b1,	// (0x00058814) main_location2_pane_t4

0xf2fb,	// (0x0006225e) main_location2_pane_t_ParamLimits

0xc3db,	// (0x0005f33e) find_pinb_pane_g2_ParamLimits

0xc3db,	// (0x0005f33e) find_pinb_pane_g2

0x0001,

0xf072,	// (0x00061fd5) find_pinb_pane_g_ParamLimits

0xf072,	// (0x00061fd5) find_pinb_pane_g

0xc3e7,	// (0x0005f34a) find_pinb_pane_t1_ParamLimits

0xc3f9,	// (0x0005f35c) find_pinb_pane_t2_ParamLimits

0xf077,	// (0x00061fda) find_pinb_pane_t_ParamLimits

0xc152,	// (0x0005f0b5) main_call3_pane

0x4f9f,	// (0x00057f02) cale_month_day_heading_pane_t1_ParamLimits

0x5021,	// (0x00057f84) cale_month_day_heading_pane_t2_ParamLimits

0x509a,	// (0x00057ffd) cale_month_day_heading_pane_t3_ParamLimits

0x5113,	// (0x00058076) cale_month_day_heading_pane_t4_ParamLimits

0x518c,	// (0x000580ef) cale_month_day_heading_pane_t5_ParamLimits

0x520d,	// (0x00058170) cale_month_day_heading_pane_t6_ParamLimits

0x5296,	// (0x000581f9) cale_month_day_heading_pane_t7_ParamLimits

0xf1f2,	// (0x00062155) cale_month_day_heading_pane_t_ParamLimits

0xc9ce,	// (0x0005f931) smil_status_volume_pane

0x5eab,	// (0x00058e0e) postcard_address_pane_ParamLimits

0x5eab,	// (0x00058e0e) postcard_address_pane

0x5eb9,	// (0x00058e1c) postcard_message_pane_ParamLimits

0x5eb9,	// (0x00058e1c) postcard_message_pane

0x6302,	// (0x00059265) call2_cli_visual_pane_t1_ParamLimits

0x6302,	// (0x00059265) call2_cli_visual_pane_t1

0xe59e,	// (0x00061501) postcard_message_pane_t1_ParamLimits

0xe59e,	// (0x00061501) postcard_message_pane_t1

0xe586,	// (0x000614e9) postcard_address_pane_t1_ParamLimits

0xe586,	// (0x000614e9) postcard_address_pane_t1

0x682e,	// (0x00059791) popup_call3_audio_in_window_ParamLimits

0x682e,	// (0x00059791) popup_call3_audio_in_window

0x670c,	// (0x0005966f) bg_popup_call3_in_pane_ParamLimits

0x670c,	// (0x0005966f) bg_popup_call3_in_pane

0x6774,	// (0x000596d7) popup_call3_audio_in_window_g1_ParamLimits

0x6774,	// (0x000596d7) popup_call3_audio_in_window_g1

0x678c,	// (0x000596ef) popup_call3_audio_in_window_g2_ParamLimits

0x678c,	// (0x000596ef) popup_call3_audio_in_window_g2

0x67a4,	// (0x00059707) popup_call3_audio_in_window_g3_ParamLimits

0x67a4,	// (0x00059707) popup_call3_audio_in_window_g3

0x0003,

0xf51b,	// (0x0006247e) popup_call3_audio_in_window_g_ParamLimits

0xf51b,	// (0x0006247e) popup_call3_audio_in_window_g

0x67cc,	// (0x0005972f) popup_call3_audio_in_window_t1_ParamLimits

0x67cc,	// (0x0005972f) popup_call3_audio_in_window_t1

0x67f4,	// (0x00059757) popup_call3_audio_in_window_t2_ParamLimits

0x67f4,	// (0x00059757) popup_call3_audio_in_window_t2

0x681c,	// (0x0005977f) popup_call3_audio_in_window_t3_ParamLimits

0x681c,	// (0x0005977f) popup_call3_audio_in_window_t3

0x0002,

0xf524,	// (0x00062487) popup_call3_audio_in_window_t_ParamLimits

0xf524,	// (0x00062487) popup_call3_audio_in_window_t

0xc6a1,	// (0x0005f604) bg_popup_call3_rect_pane

0xc5c5,	// (0x0005f528) bg_popup_call3_rect_pane_g1

0xc5bd,	// (0x0005f520) bg_popup_call3_rect_pane_g2

0xc5b5,	// (0x0005f518) bg_popup_call3_rect_pane_g3

0xc5d5,	// (0x0005f538) bg_popup_call3_rect_pane_g4

0xc5cd,	// (0x0005f530) bg_popup_call3_rect_pane_g5

0xc5dd,	// (0x0005f540) bg_popup_call3_rect_pane_g6

0xc5e5,	// (0x0005f548) bg_popup_call3_rect_pane_g7

0x1b91,	// (0x00054af4) mup_visualizer_osc_pane

0x1b91,	// (0x00054af4) mup_visualizer_spec_pane

0x672c,	// (0x0005968f) call3_video_qcif_pane_ParamLimits

0x672c,	// (0x0005968f) call3_video_qcif_pane

0x673e,	// (0x000596a1) call3_video_qcif_uncrop_pane_ParamLimits

0x673e,	// (0x000596a1) call3_video_qcif_uncrop_pane

0x674e,	// (0x000596b1) call3_video_subqcif_pane_ParamLimits

0x674e,	// (0x000596b1) call3_video_subqcif_pane

0x6762,	// (0x000596c5) call3_video_subqcif_uncrop_pane_ParamLimits

0x6762,	// (0x000596c5) call3_video_subqcif_uncrop_pane

0x67bc,	// (0x0005971f) popup_call3_audio_in_window_g4_ParamLimits

0x67bc,	// (0x0005971f) popup_call3_audio_in_window_g4

0x1b91,	// (0x00054af4) mup_spec_half_pane

0x1b91,	// (0x00054af4) mup_spec_half_pane_cp

0x1b91,	// (0x00054af4) mup_osc_middle_pane

0xc466,	// (0x0005f3c9) mup_visualizer_osc_pane_g1

0xe539,	// (0x0006149c) mup_spec_bar_pane_ParamLimits

0xe539,	// (0x0006149c) mup_spec_bar_pane

0xc466,	// (0x0005f3c9) mup_spec_bar_pane_g1

0xc466,	// (0x0005f3c9) mup_spec_bar_pane_g2

0x0001,

0xf08c,	// (0x00061fef) mup_spec_bar_pane_g

0x3c71,	// (0x00056bd4) aid_cale_week_size_cell_pane_ParamLimits

0x3c8b,	// (0x00056bee) bg_cale_heading_pane_ParamLimits

0x3cb4,	// (0x00056c17) bg_cale_pane_cp01_ParamLimits

0x3cd6,	// (0x00056c39) cale_week_corner_pane_ParamLimits

0x3cf5,	// (0x00056c58) cale_week_day_heading_pane_ParamLimits

0x3d23,	// (0x00056c86) cale_week_scroll_pane_g1_ParamLimits

0x3d47,	// (0x00056caa) cale_week_scroll_pane_g2_ParamLimits

0x3d5f,	// (0x00056cc2) cale_week_scroll_pane_g3_ParamLimits

0x3d77,	// (0x00056cda) cale_week_scroll_pane_g4_ParamLimits

0x3d8f,	// (0x00056cf2) cale_week_scroll_pane_g5_ParamLimits

0x3da7,	// (0x00056d0a) cale_week_scroll_pane_g6_ParamLimits

0x3dc7,	// (0x00056d2a) cale_week_scroll_pane_g7_ParamLimits

0x3de7,	// (0x00056d4a) cale_week_scroll_pane_g8_ParamLimits

0x3e07,	// (0x00056d6a) cale_week_scroll_pane_g9_ParamLimits

0x3e24,	// (0x00056d87) cale_week_scroll_pane_g10_ParamLimits

0x3e41,	// (0x00056da4) cale_week_scroll_pane_g11_ParamLimits

0x3e60,	// (0x00056dc3) cale_week_scroll_pane_g12_ParamLimits

0x3e85,	// (0x00056de8) cale_week_scroll_pane_g13_ParamLimits

0x3eae,	// (0x00056e11) cale_week_scroll_pane_g14_ParamLimits

0x3ed7,	// (0x00056e3a) cale_week_scroll_pane_g15_ParamLimits

0xf103,	// (0x00062066) cale_week_scroll_pane_g_ParamLimits

0x3f20,	// (0x00056e83) cale_week_time_pane_ParamLimits

0x3f40,	// (0x00056ea3) grid_cale_week_pane_ParamLimits

0xc617,	// (0x0005f57a) listscroll_cale_week_pane_t1

0xc629,	// (0x0005f58c) scroll_pane_cp08_ParamLimits

0x4a64,	// (0x000579c7) cale_month_corner_pane_ParamLimits

0xc9a4,	// (0x0005f907) cale_month_pane_t1

0x4f26,	// (0x00057e89) cale_month_week_pane_ParamLimits

0xdad4,	// (0x00060a37) popup_call_status_window_g1_ParamLimits

0x5693,	// (0x000585f6) popup_call_status_window_g2_ParamLimits

0x569f,	// (0x00058602) popup_call_status_window_g3_ParamLimits

0xf282,	// (0x000621e5) popup_call_status_window_g_ParamLimits

0xcd33,	// (0x0005fc96) aid_call2_pane

0x5d51,	// (0x00058cb4) msg_header_pane_g1

0x5eab,	// (0x00058e0e) postcard_address2_pane_ParamLimits

0x5eab,	// (0x00058e0e) postcard_address2_pane

0x5eb9,	// (0x00058e1c) postcard_message2_pane_ParamLimits

0x5eb9,	// (0x00058e1c) postcard_message2_pane

0x66bd,	// (0x00059620) message2_row_pane_ParamLimits

0x66bd,	// (0x00059620) message2_row_pane

0x66d7,	// (0x0005963a) address2_row_pane_ParamLimits

0x66d7,	// (0x0005963a) address2_row_pane

0xe506,	// (0x00061469) postcard_message2_row_pane_g1

0xe50e,	// (0x00061471) postcard_message2_row_pane_t1

0xe506,	// (0x00061469) address2_row_pane_g1

0xe50e,	// (0x00061471) address2_row_pane_t1

0x42ce,	// (0x00057231) aid_size_cell_vorec

0xc152,	// (0x0005f0b5) main_rss_pane

0xe51c,	// (0x0006147f) rss_list_single_pane_ParamLimits

0xe51c,	// (0x0006147f) rss_list_single_pane

0xe52a,	// (0x0006148d) rss_list_single_pane_t1

0xe52a,	// (0x0006148d) rss_list_single_pane_t2

0x0001,

0xf50f,	// (0x00062472) rss_list_single_pane_t

0xc152,	// (0x0005f0b5) main_camera2_pane

0xc152,	// (0x0005f0b5) main_video2_pane

0x366b,	// (0x000565ce) cams_zoom_pane_cp2_ParamLimits

0x366b,	// (0x000565ce) cams_zoom_pane_cp2

0x366b,	// (0x000565ce) image2_vga_pane_ParamLimits

0x366b,	// (0x000565ce) image2_vga_pane

0xcd66,	// (0x0005fcc9) main_camera2_pane_g1_ParamLimits

0xcd66,	// (0x0005fcc9) main_camera2_pane_g1

0xcd66,	// (0x0005fcc9) main_camera2_pane_g2_ParamLimits

0xcd66,	// (0x0005fcc9) main_camera2_pane_g2

0xcd66,	// (0x0005fcc9) main_camera2_pane_g3_ParamLimits

0xcd66,	// (0x0005fcc9) main_camera2_pane_g3

0xcd66,	// (0x0005fcc9) main_camera2_pane_g4_ParamLimits

0xcd66,	// (0x0005fcc9) main_camera2_pane_g4

0xcd66,	// (0x0005fcc9) main_camera2_pane_g5_ParamLimits

0xcd66,	// (0x0005fcc9) main_camera2_pane_g5

0xcd66,	// (0x0005fcc9) main_camera2_pane_g6_ParamLimits

0xcd66,	// (0x0005fcc9) main_camera2_pane_g6

0xcd66,	// (0x0005fcc9) main_camera2_pane_g7_ParamLimits

0xcd66,	// (0x0005fcc9) main_camera2_pane_g7

0xcd66,	// (0x0005fcc9) main_camera2_pane_g8_ParamLimits

0xcd66,	// (0x0005fcc9) main_camera2_pane_g8

0x0008,

0xf52b,	// (0x0006248e) main_camera2_pane_g_ParamLimits

0xf52b,	// (0x0006248e) main_camera2_pane_g

0x684b,	// (0x000597ae) main_camera2_pane_t1_ParamLimits

0x684b,	// (0x000597ae) main_camera2_pane_t1

0x684b,	// (0x000597ae) main_camera2_pane_t2_ParamLimits

0x684b,	// (0x000597ae) main_camera2_pane_t2

0x684b,	// (0x000597ae) main_camera2_pane_t3_ParamLimits

0x684b,	// (0x000597ae) main_camera2_pane_t3

0x684b,	// (0x000597ae) main_camera2_pane_t4_ParamLimits

0x684b,	// (0x000597ae) main_camera2_pane_t4

0x0006,

0xf53e,	// (0x000624a1) main_camera2_pane_t_ParamLimits

0xf53e,	// (0x000624a1) main_camera2_pane_t

0x6873,	// (0x000597d6) cams_zoom_pane_cp4_ParamLimits

0x6873,	// (0x000597d6) cams_zoom_pane_cp4

0x64dd,	// (0x00059440) image2_cif_pane_ParamLimits

0x64dd,	// (0x00059440) image2_cif_pane

0x366b,	// (0x000565ce) image2_subqcif_pane_ParamLimits

0x366b,	// (0x000565ce) image2_subqcif_pane

0x6881,	// (0x000597e4) main_video2_pane_g1_ParamLimits

0x6881,	// (0x000597e4) main_video2_pane_g1

0x6881,	// (0x000597e4) main_video2_pane_g2_ParamLimits

0x6881,	// (0x000597e4) main_video2_pane_g2

0x6881,	// (0x000597e4) main_video2_pane_g3_ParamLimits

0x6881,	// (0x000597e4) main_video2_pane_g3

0x6881,	// (0x000597e4) main_video2_pane_g4_ParamLimits

0x6881,	// (0x000597e4) main_video2_pane_g4

0x6881,	// (0x000597e4) main_video2_pane_g5_ParamLimits

0x6881,	// (0x000597e4) main_video2_pane_g5

0x6881,	// (0x000597e4) main_video2_pane_g6_ParamLimits

0x6881,	// (0x000597e4) main_video2_pane_g6

0x0005,

0xf54d,	// (0x000624b0) main_video2_pane_g_ParamLimits

0xf54d,	// (0x000624b0) main_video2_pane_g

0x688f,	// (0x000597f2) main_video2_pane_t1_ParamLimits

0x688f,	// (0x000597f2) main_video2_pane_t1

0x688f,	// (0x000597f2) main_video2_pane_t2_ParamLimits

0x688f,	// (0x000597f2) main_video2_pane_t2

0x688f,	// (0x000597f2) main_video2_pane_t3_ParamLimits

0x688f,	// (0x000597f2) main_video2_pane_t3

0x0002,

0xf55a,	// (0x000624bd) main_video2_pane_t_ParamLimits

0xf55a,	// (0x000624bd) main_video2_pane_t

0x63b0,	// (0x00059313) call_muted_g2

0x0001,

0xf501,	// (0x00062464) call_muted_g

0xc152,	// (0x0005f0b5) main_mup2_pane

0xc444,	// (0x0005f3a7) main_mup2_pane_g1_ParamLimits

0xc444,	// (0x0005f3a7) main_mup2_pane_g1

0xc444,	// (0x0005f3a7) main_mup2_pane_g2_ParamLimits

0xc444,	// (0x0005f3a7) main_mup2_pane_g2

0x0e5f,	// (0x00053dc2) main_mup_pane_g13_cp1

0x3685,	// (0x000565e8) mup_volume_pane_cp1

0xc444,	// (0x0005f3a7) main_mup2_pane_g4_ParamLimits

0xc444,	// (0x0005f3a7) main_mup2_pane_g4

0xc444,	// (0x0005f3a7) main_mup2_pane_g5_ParamLimits

0xc444,	// (0x0005f3a7) main_mup2_pane_g5

0xc444,	// (0x0005f3a7) main_mup2_pane_g6_ParamLimits

0xc444,	// (0x0005f3a7) main_mup2_pane_g6

0xc444,	// (0x0005f3a7) main_mup2_pane_g7_ParamLimits

0xc444,	// (0x0005f3a7) main_mup2_pane_g7

0x0006,

0xf561,	// (0x000624c4) main_mup2_pane_g_ParamLimits

0xf561,	// (0x000624c4) main_mup2_pane_g

0xc452,	// (0x0005f3b5) main_mup2_pane_t1_ParamLimits

0xc452,	// (0x0005f3b5) main_mup2_pane_t1

0xc452,	// (0x0005f3b5) main_mup2_pane_t2_ParamLimits

0xc452,	// (0x0005f3b5) main_mup2_pane_t2

0xc452,	// (0x0005f3b5) main_mup2_pane_t3_ParamLimits

0xc452,	// (0x0005f3b5) main_mup2_pane_t3

0xc452,	// (0x0005f3b5) main_mup2_pane_t4_ParamLimits

0xc452,	// (0x0005f3b5) main_mup2_pane_t4

0xc452,	// (0x0005f3b5) main_mup2_pane_t5_ParamLimits

0xc452,	// (0x0005f3b5) main_mup2_pane_t5

0xc452,	// (0x0005f3b5) main_mup2_pane_t6_ParamLimits

0xc452,	// (0x0005f3b5) main_mup2_pane_t6

0x0005,

0xf570,	// (0x000624d3) main_mup2_pane_t_ParamLimits

0xf570,	// (0x000624d3) main_mup2_pane_t

0xe4a9,	// (0x0006140c) mup2_visualizer_pane_ParamLimits

0xe4a9,	// (0x0006140c) mup2_visualizer_pane

0xe4a9,	// (0x0006140c) mup_progress_pane_cp_ParamLimits

0xe4a9,	// (0x0006140c) mup_progress_pane_cp

0x695e,	// (0x000598c1) mup_volume_pane_cp_ParamLimits

0x695e,	// (0x000598c1) mup_volume_pane_cp

0xc428,	// (0x0005f38b) mup2_visualizer_pane_g1_ParamLimits

0xc428,	// (0x0005f38b) mup2_visualizer_pane_g1

0xc436,	// (0x0005f399) mup2_visualizer_pane_g2_ParamLimits

0xc436,	// (0x0005f399) mup2_visualizer_pane_g2

0xc436,	// (0x0005f399) mup2_visualizer_pane_g3_ParamLimits

0xc436,	// (0x0005f399) mup2_visualizer_pane_g3

0x0002,

0xf07c,	// (0x00061fdf) mup2_visualizer_pane_g_ParamLimits

0xf07c,	// (0x00061fdf) mup2_visualizer_pane_g

0x1b91,	// (0x00054af4) aid_size_cell_fmradio

0x64c6,	// (0x00059429) aid_height_parent_landcape

0xc802,	// (0x0005f765) wml_content_pane_cp

0xc80a,	// (0x0005f76d) wml_tabs_pane

0xc813,	// (0x0005f776) popup_wml_miniature_window

0xc81b,	// (0x0005f77e) scroll_pane_cp021

0xc82f,	// (0x0005f792) wml_content_pane_comp8

0xc152,	// (0x0005f0b5) bg_popup_sub_pane_cp05

0xe5d0,	// (0x00061533) popup_wml_miniature_window_g1

0xe5d8,	// (0x0006153b) wml_miniature_view_pane

0x68a3,	// (0x00059806) aid_size_wml_view

0x68ab,	// (0x0005980e) wml_miniature_view_pane_g1

0x68b4,	// (0x00059817) wml_miniature_view_pane_g2

0x68bd,	// (0x00059820) wml_miniature_view_pane_g3

0x68c5,	// (0x00059828) wml_miniature_view_pane_g4

0x68cd,	// (0x00059830) wml_miniature_view_pane_g5

0x68d5,	// (0x00059838) wml_miniature_view_pane_g6

0x68dd,	// (0x00059840) wml_miniature_view_pane_g7

0x68e5,	// (0x00059848) wml_miniature_view_pane_g8

0x0007,

0xf57d,	// (0x000624e0) wml_miniature_view_pane_g

0xe5e0,	// (0x00061543) background_graphic_ParamLimits

0xe5e0,	// (0x00061543) background_graphic

0xe5ec,	// (0x0006154f) wml_tabs_2_pane

0xe5f5,	// (0x00061558) wml_tabs_3_pane_ParamLimits

0xe5f5,	// (0x00061558) wml_tabs_3_pane

0xe607,	// (0x0006156a) wml_tabs_4_pane_ParamLimits

0xe607,	// (0x0006156a) wml_tabs_4_pane

0xe61d,	// (0x00061580) wml_tabs_5_pane_ParamLimits

0xe61d,	// (0x00061580) wml_tabs_5_pane

0xe637,	// (0x0006159a) wml_tabs_pane_g2_ParamLimits

0xe637,	// (0x0006159a) wml_tabs_pane_g2

0xe64c,	// (0x000615af) wml_tabs_pane_g3_ParamLimits

0xe64c,	// (0x000615af) wml_tabs_pane_g3

0xe661,	// (0x000615c4) wml_tabs_2_active_pane_ParamLimits

0xe661,	// (0x000615c4) wml_tabs_2_active_pane

0xe661,	// (0x000615c4) wml_tabs_2_passive_pane_ParamLimits

0xe661,	// (0x000615c4) wml_tabs_2_passive_pane

0x68ed,	// (0x00059850) wml_tabs_3_active_pane_cp_ParamLimits

0x68ed,	// (0x00059850) wml_tabs_3_active_pane_cp

0x6900,	// (0x00059863) wml_tabs_3_passive_pane_ParamLimits

0x6900,	// (0x00059863) wml_tabs_3_passive_pane

0x6911,	// (0x00059874) wml_tabs_3_passive_pane_cp_ParamLimits

0x6911,	// (0x00059874) wml_tabs_3_passive_pane_cp

0x6926,	// (0x00059889) tabs_4_active_pane

0x692e,	// (0x00059891) tabs_4_passive_pane

0x6936,	// (0x00059899) tabs_4_passive_pane_cp

0x693e,	// (0x000598a1) tabs_4_passive_pane_cp2

0x6324,	// (0x00059287) aid_height_text

0xe4a9,	// (0x0006140c) mup_volume_cont_pane_ParamLimits

0xe4a9,	// (0x0006140c) mup_volume_cont_pane

0x1b91,	// (0x00054af4) aid_size_cell_pinb

0x1b91,	// (0x00054af4) aid_size_list_pinb

0xe4a9,	// (0x0006140c) mup2_volume_cont_pane_ParamLimits

0xe4a9,	// (0x0006140c) mup2_volume_cont_pane

0x6948,	// (0x000598ab) mup2_volume_cont_pane_g1_ParamLimits

0x6948,	// (0x000598ab) mup2_volume_cont_pane_g1

0x3466,	// (0x000563c9) aid_size_cell_touch_ParamLimits

0x3466,	// (0x000563c9) aid_size_cell_touch

0x368f,	// (0x000565f2) touch_pane_ParamLimits

0x368f,	// (0x000565f2) touch_pane

0x3685,	// (0x000565e8) main_rss2_pane

0xe678,	// (0x000615db) listscroll_rss2_pane

0xe681,	// (0x000615e4) rss2_navigation_pane

0xe689,	// (0x000615ec) list_rss2_pane

0xce6d,	// (0x0005fdd0) scroll_pane_cp22

0xe691,	// (0x000615f4) rss2_navigation_pane_g1

0xe69a,	// (0x000615fd) rss2_navigation_pane_g2

0xe6a2,	// (0x00061605) rss2_navigation_pane_g3

0x0002,

0xf58e,	// (0x000624f1) rss2_navigation_pane_g

0xe6aa,	// (0x0006160d) rss2_navigation_pane_t1

0x6974,	// (0x000598d7) rss2_list_single_pane_ParamLimits

0x6974,	// (0x000598d7) rss2_list_single_pane

0xe6b8,	// (0x0006161b) rss2_list_single_pane_t2

0xe6c6,	// (0x00061629) rss2_list_single_pane_t3_ParamLimits

0xe6c6,	// (0x00061629) rss2_list_single_pane_t3

0xe705,	// (0x00061668) rss2_list_single_pane_t4

0x5534,	// (0x00058497) smil_status_pane_g1

0x64dd,	// (0x00059440) main_image2_pane_ParamLimits

0x64dd,	// (0x00059440) main_image2_pane

0xcd66,	// (0x0005fcc9) main_camera2_pane_g9_ParamLimits

0xcd66,	// (0x0005fcc9) main_camera2_pane_g9

0x684b,	// (0x000597ae) main_camera2_pane_t5_ParamLimits

0x684b,	// (0x000597ae) main_camera2_pane_t5

0x685f,	// (0x000597c2) main_camera2_pane_t6_ParamLimits

0x685f,	// (0x000597c2) main_camera2_pane_t6

0x6997,	// (0x000598fa) main_image2_pane_g1_ParamLimits

0x6997,	// (0x000598fa) main_image2_pane_g1

0x6059,	// (0x00058fbc) smil2_video_pane_ParamLimits

0x6059,	// (0x00058fbc) smil2_video_pane

0x3396,	// (0x000562f9) aid_zoom_text_primary_cp

0x3620,	// (0x00056583) popup_preview_fixed_window

0xc75c,	// (0x0005f6bf) im_reading_pane_g1

0x683d,	// (0x000597a0) cams2_bc_adjust_pane_cp_ParamLimits

0x683d,	// (0x000597a0) cams2_bc_adjust_pane_cp

0x366b,	// (0x000565ce) cams2_bc_adjust_pane_ParamLimits

0x366b,	// (0x000565ce) cams2_bc_adjust_pane

0x0e5f,	// (0x00053dc2) cams2_bc_adjust_pane_g1

0x3685,	// (0x000565e8) cams2_slider_pane

0x0e5f,	// (0x00053dc2) cams2_slider_pane_g1

0x0e5f,	// (0x00053dc2) cams2_slider_pane_g2

0x0006,

0xf595,	// (0x000624f8) cams2_slider_pane_g

0x39d7,	// (0x0005693a) calc_display_pane_ParamLimits

0x39f5,	// (0x00056958) calc_paper_pane_ParamLimits

0x3a11,	// (0x00056974) grid_calc_pane_ParamLimits

0x56fd,	// (0x00058660) popup_clock_digital_window_t1_ParamLimits

0xd4e1,	// (0x00060444) main_image_pane_t1

0x39bd,	// (0x00056920) aid_size_cell_calc_ParamLimits

0x39bd,	// (0x00056920) aid_size_cell_calc

0x650e,	// (0x00059471) popup_blid_sat_info2_window_ParamLimits

0x650e,	// (0x00059471) popup_blid_sat_info2_window

0xe713,	// (0x00061676) aid_size_cell_blid

0xe4a9,	// (0x0006140c) bg_popup_window_pane_cp07

0xe730,	// (0x00061693) grid_popup_blid_pane

0xe73a,	// (0x0006169d) heading_pane_cp05_ParamLimits

0xe73a,	// (0x0006169d) heading_pane_cp05

0xe804,	// (0x00061767) cell_popup_blid_pane_ParamLimits

0xe804,	// (0x00061767) cell_popup_blid_pane

0xe82e,	// (0x00061791) cell_popup_blid_pane_g1

0xe836,	// (0x00061799) cell_popup_blid_pane_t1

0xe4a9,	// (0x0006140c) mup2_indicator_pane_ParamLimits

0xe4a9,	// (0x0006140c) mup2_indicator_pane

0x1b91,	// (0x00054af4) mup2_visualizer_osc_pane

0xe5ba,	// (0x0006151d) mup2_visualizer_spec_pane_ParamLimits

0xe5ba,	// (0x0006151d) mup2_visualizer_spec_pane

0x1b91,	// (0x00054af4) mup2_spec_half_pane

0x1b91,	// (0x00054af4) mup2_spec_half_pane_cp

0xe844,	// (0x000617a7) mup2_spec_bar_pane_ParamLimits

0xe844,	// (0x000617a7) mup2_spec_bar_pane

0xc466,	// (0x0005f3c9) mup2_spec_bar_pane_g1

0xe863,	// (0x000617c6) mup2_spec_bar_pane_g2

0x0001,

0xf5bb,	// (0x0006251e) mup2_spec_bar_pane_g

0x1b91,	// (0x00054af4) mup2_osc_middle_pane

0xc466,	// (0x0005f3c9) mup2_visualizer_osc_pane_g1

0x1bbb,	// (0x00054b1e) popup_number_entry_window_t1_ParamLimits

0x1bce,	// (0x00054b31) popup_number_entry_window_t2_ParamLimits

0x1be0,	// (0x00054b43) popup_number_entry_window_t3_ParamLimits

0x1bf2,	// (0x00054b55) popup_number_entry_window_t5_ParamLimits

0x1bf2,	// (0x00054b55) popup_number_entry_window_t5

0xf01d,	// (0x00061f80) popup_number_entry_window_t_ParamLimits

0x1c27,	// (0x00054b8a) text_title_cp2_ParamLimits

0x5d6f,	// (0x00058cd2) aid_hotspot_pointer_text2_pane

0x5e09,	// (0x00058d6c) main_viewer_pane_g9_ParamLimits

0x5e09,	// (0x00058d6c) main_viewer_pane_g9

0xc9a4,	// (0x0005f907) cale_month_pane_t1_ParamLimits

0xc9ea,	// (0x0005f94d) bg_cale_pane_ParamLimits

0xca02,	// (0x0005f965) list_cale_pane_ParamLimits

0xca13,	// (0x0005f976) listscroll_cale_day_pane_t1

0xca25,	// (0x0005f988) scroll_pane_cp09_ParamLimits

0x5aad,	// (0x00058a10) main_mup_eq_pane_t1_ParamLimits

0x5aad,	// (0x00058a10) main_mup_eq_pane_t1

0x5ac9,	// (0x00058a2c) main_mup_eq_pane_t2_ParamLimits

0x5ac9,	// (0x00058a2c) main_mup_eq_pane_t2

0x5ae5,	// (0x00058a48) main_mup_eq_pane_t3_ParamLimits

0x5ae5,	// (0x00058a48) main_mup_eq_pane_t3

0x5aff,	// (0x00058a62) main_mup_eq_pane_t4_ParamLimits

0x5aff,	// (0x00058a62) main_mup_eq_pane_t4

0x5b19,	// (0x00058a7c) main_mup_eq_pane_t5_ParamLimits

0x5b19,	// (0x00058a7c) main_mup_eq_pane_t5

0x5b33,	// (0x00058a96) main_mup_eq_pane_t6_ParamLimits

0x5b33,	// (0x00058a96) main_mup_eq_pane_t6

0x5b49,	// (0x00058aac) main_mup_eq_pane_t7_ParamLimits

0x5b49,	// (0x00058aac) main_mup_eq_pane_t7

0x5b5f,	// (0x00058ac2) main_mup_eq_pane_t8_ParamLimits

0x5b5f,	// (0x00058ac2) main_mup_eq_pane_t8

0x5b75,	// (0x00058ad8) main_mup_eq_pane_t9_ParamLimits

0x5b75,	// (0x00058ad8) main_mup_eq_pane_t9

0x5b91,	// (0x00058af4) main_mup_eq_pane_t10_ParamLimits

0x5b91,	// (0x00058af4) main_mup_eq_pane_t10

0x0009,

0xf37c,	// (0x000622df) main_mup_eq_pane_t_ParamLimits

0xf37c,	// (0x000622df) main_mup_eq_pane_t

0x5c56,	// (0x00058bb9) mup_equalizer_pane_cp5_ParamLimits

0x5c6e,	// (0x00058bd1) mup_equalizer_pane_cp6_ParamLimits

0x5c86,	// (0x00058be9) mup_equalizer_pane_cp7_ParamLimits

0x3685,	// (0x000565e8) main_gallery_pane

0xe558,	// (0x000614bb) smil2_volume_pane

0xe560,	// (0x000614c3) smil_status_volume_pane_g1_ParamLimits

0xe573,	// (0x000614d6) smil_status_volume_pane_g2_ParamLimits

0x66ea,	// (0x0005964d) smil_status_volume_pane_g3_ParamLimits

0xf514,	// (0x00062477) smil_status_volume_pane_g_ParamLimits

0xe4a9,	// (0x0006140c) bg_popup_window_pane_cp07_ParamLimits

0xe71b,	// (0x0006167e) blid_firmament_pane

0xc41a,	// (0x0005f37d) aid_size_cell_gallery_ParamLimits

0xc41a,	// (0x0005f37d) aid_size_cell_gallery

0xc41a,	// (0x0005f37d) grid_gallery_pane_ParamLimits

0xc41a,	// (0x0005f37d) grid_gallery_pane

0xd3e9,	// (0x0006034c) cell_gallery_pane_ParamLimits

0xd3e9,	// (0x0006034c) cell_gallery_pane

0x39af,	// (0x00056912) bg_cell_gallery_focus_pane_ParamLimits

0x39af,	// (0x00056912) bg_cell_gallery_focus_pane

0xc428,	// (0x0005f38b) cell_gallery_pane_g1_ParamLimits

0xc428,	// (0x0005f38b) cell_gallery_pane_g1

0xc428,	// (0x0005f38b) cell_gallery_pane_g2_ParamLimits

0xc428,	// (0x0005f38b) cell_gallery_pane_g2

0xc428,	// (0x0005f38b) cell_gallery_pane_g3_ParamLimits

0xc428,	// (0x0005f38b) cell_gallery_pane_g3

0xc436,	// (0x0005f399) cell_gallery_pane_g4_ParamLimits

0xc436,	// (0x0005f399) cell_gallery_pane_g4

0x0003,

0xf5c0,	// (0x00062523) cell_gallery_pane_g_ParamLimits

0xf5c0,	// (0x00062523) cell_gallery_pane_g

0xe86d,	// (0x000617d0) bg_cell_gallery_focus_pane_g1

0xe875,	// (0x000617d8) bg_cell_gallery_focus_pane_g2

0xe87d,	// (0x000617e0) bg_cell_gallery_focus_pane_g3

0xe885,	// (0x000617e8) bg_cell_gallery_focus_pane_g4

0xe88d,	// (0x000617f0) bg_cell_gallery_focus_pane_g5

0xe895,	// (0x000617f8) bg_cell_gallery_focus_pane_g6

0xe89d,	// (0x00061800) bg_cell_gallery_focus_pane_g7

0xe8a5,	// (0x00061808) bg_cell_gallery_focus_pane_g8

0x0007,

0xf5c9,	// (0x0006252c) bg_cell_gallery_focus_pane_g

0xe8ad,	// (0x00061810) aid_firma_cardinal

0xe8c1,	// (0x00061824) blid_firmament_pane_t1

0xe8d8,	// (0x0006183b) blid_firmament_pane_t2

0xe8ef,	// (0x00061852) blid_firmament_pane_t3

0xe906,	// (0x00061869) blid_firmament_pane_t4

0x0003,

0xf5da,	// (0x0006253d) blid_firmament_pane_t

0xe91d,	// (0x00061880) blid_sat_info_pane

0xc466,	// (0x0005f3c9) blid_sat_info_pane_g1

0xc466,	// (0x0005f3c9) blid_sat_info_pane_g2

0x0001,

0xf08c,	// (0x00061fef) blid_sat_info_pane_g

0xe92d,	// (0x00061890) blid_sat_info_pane_t1

0xe93b,	// (0x0006189e) smil2_volume_content_pane

0xe944,	// (0x000618a7) smil2_volume_pane_g1

0xcd93,	// (0x0005fcf6) smil2_volume_content_pane_g1

0xe94c,	// (0x000618af) smil2_volume_content_pane_g2

0xe955,	// (0x000618b8) smil2_volume_content_pane_g3

0xe95e,	// (0x000618c1) smil2_volume_content_pane_g4

0xe967,	// (0x000618ca) smil2_volume_content_pane_g5

0xe970,	// (0x000618d3) smil2_volume_content_pane_g6

0xe979,	// (0x000618dc) smil2_volume_content_pane_g7

0xe982,	// (0x000618e5) smil2_volume_content_pane_g8

0xe98b,	// (0x000618ee) smil2_volume_content_pane_g9

0xe994,	// (0x000618f7) smil2_volume_content_pane_g10

0x0009,

0xf5e3,	// (0x00062546) smil2_volume_content_pane_g

0x4001,	// (0x00056f64) cale_week_day_heading_pane_t1_ParamLimits

0x4029,	// (0x00056f8c) cale_week_day_heading_pane_t2_ParamLimits

0x4056,	// (0x00056fb9) cale_week_day_heading_pane_t3_ParamLimits

0x4083,	// (0x00056fe6) cale_week_day_heading_pane_t4_ParamLimits

0x40b0,	// (0x00057013) cale_week_day_heading_pane_t5_ParamLimits

0x40dd,	// (0x00057040) cale_week_day_heading_pane_t6_ParamLimits

0x410a,	// (0x0005706d) cale_week_day_heading_pane_t7_ParamLimits

0xf124,	// (0x00062087) cale_week_day_heading_pane_t_ParamLimits

0xc646,	// (0x0005f5a9) bg_cale_side_pane_ParamLimits

0x4132,	// (0x00057095) cale_week_time_pane_t1_ParamLimits

0x4156,	// (0x000570b9) cale_week_time_pane_t2_ParamLimits

0x417a,	// (0x000570dd) cale_week_time_pane_t3_ParamLimits

0x419e,	// (0x00057101) cale_week_time_pane_t4_ParamLimits

0x41c2,	// (0x00057125) cale_week_time_pane_t5_ParamLimits

0x41e8,	// (0x0005714b) cale_week_time_pane_t6_ParamLimits

0x4210,	// (0x00057173) cale_week_time_pane_t7_ParamLimits

0x423c,	// (0x0005719f) cale_week_time_pane_t8_ParamLimits

0xf133,	// (0x00062096) cale_week_time_pane_t_ParamLimits

0x426c,	// (0x000571cf) cell_cale_week_pane_g2_ParamLimits

0xc646,	// (0x0005f5a9) bg_cale_side_pane_cp01_ParamLimits

0x531f,	// (0x00058282) cale_month_week_pane_t1_ParamLimits

0x5338,	// (0x0005829b) cale_month_week_pane_t2_ParamLimits

0x5351,	// (0x000582b4) cale_month_week_pane_t3_ParamLimits

0x536a,	// (0x000582cd) cale_month_week_pane_t4_ParamLimits

0x5383,	// (0x000582e6) cale_month_week_pane_t5_ParamLimits

0x53a0,	// (0x00058303) cale_month_week_pane_t6_ParamLimits

0xf201,	// (0x00062164) cale_month_week_pane_t_ParamLimits

0x54f1,	// (0x00058454) cell_cale_month_pane_g1_ParamLimits

0x3685,	// (0x000565e8) main_cale_event_viewer_pane

0x1b91,	// (0x00054af4) listscroll_cale_event_viewer_pane

0xe99d,	// (0x00061900) list_cale_ev_pane

0xe9a5,	// (0x00061908) scroll_pane_cp023

0x69a3,	// (0x00059906) field_cale_ev_pane_ParamLimits

0x69a3,	// (0x00059906) field_cale_ev_pane

0xe9b1,	// (0x00061914) field_cale_ev_content_pane_ParamLimits

0xe9b1,	// (0x00061914) field_cale_ev_content_pane

0xe9bd,	// (0x00061920) field_cale_ev_pane_g1_ParamLimits

0xe9bd,	// (0x00061920) field_cale_ev_pane_g1

0xe9c9,	// (0x0006192c) field_cale_ev_pane_g2_ParamLimits

0xe9c9,	// (0x0006192c) field_cale_ev_pane_g2

0xe9e1,	// (0x00061944) field_cale_ev_pane_g3_ParamLimits

0xe9e1,	// (0x00061944) field_cale_ev_pane_g3

0x0002,

0xf5f8,	// (0x0006255b) field_cale_ev_pane_g_ParamLimits

0xf5f8,	// (0x0006255b) field_cale_ev_pane_g

0xe9f9,	// (0x0006195c) field_cale_ev_pane_t1_ParamLimits

0xe9f9,	// (0x0006195c) field_cale_ev_pane_t1

0x69c7,	// (0x0005992a) field_cale_ev_content_pane_t1_ParamLimits

0x69c7,	// (0x0005992a) field_cale_ev_content_pane_t1

0xd30d,	// (0x00060270) bg_button_pane_cp01

0x3c56,	// (0x00056bb9) listscroll_cale_week_pane_ParamLimits

0x3c68,	// (0x00056bcb) popup_toolbar_window_cp01

0xc617,	// (0x0005f57a) listscroll_cale_week_pane_t1_ParamLimits

0x55bd,	// (0x00058520) listscroll_cale_day_pane_ParamLimits

0xc9e1,	// (0x0005f944) popup_toolbar_window_cp02

0xca13,	// (0x0005f976) listscroll_cale_day_pane_t1_ParamLimits

0x3c56,	// (0x00056bb9) main_cale_month_pane_ParamLimits

0x662d,	// (0x00059590) popup_toolbar_window_cp03_ParamLimits

0x662d,	// (0x00059590) popup_toolbar_window_cp03

0x5f69,	// (0x00058ecc) main_image_pane_g2_ParamLimits

0x5f69,	// (0x00058ecc) main_image_pane_g2

0x5f75,	// (0x00058ed8) main_image_pane_g3_ParamLimits

0x5f75,	// (0x00058ed8) main_image_pane_g3

0x0002,

0xf40e,	// (0x00062371) main_image_pane_g_ParamLimits

0xf40e,	// (0x00062371) main_image_pane_g

0xd4e1,	// (0x00060444) main_image_pane_t1_ParamLimits

0x5f81,	// (0x00058ee4) main_image_pane_t2_ParamLimits

0x5f81,	// (0x00058ee4) main_image_pane_t2

0x5f93,	// (0x00058ef6) main_image_pane_t3_ParamLimits

0x5f93,	// (0x00058ef6) main_image_pane_t3

0x5fa5,	// (0x00058f08) main_image_pane_t4_ParamLimits

0x5fa5,	// (0x00058f08) main_image_pane_t4

0x0003,

0xf415,	// (0x00062378) main_image_pane_t_ParamLimits

0xf415,	// (0x00062378) main_image_pane_t

0x5fb7,	// (0x00058f1a) popup_image_details_window_cp01

0x5fc1,	// (0x00058f24) popup_toobar_trans_pane_cp01_ParamLimits

0x5fc1,	// (0x00058f24) popup_toobar_trans_pane_cp01

0x656f,	// (0x000594d2) popup_image_details_window_ParamLimits

0x656f,	// (0x000594d2) popup_image_details_window

0x657d,	// (0x000594e0) popup_image_focus_window

0x366b,	// (0x000565ce) camera2_autofocus_pane_ParamLimits

0x366b,	// (0x000565ce) camera2_autofocus_pane

0x1b91,	// (0x00054af4) bg_popup_sub_pane_cp06

0xea10,	// (0x00061973) popup_image_focus_window_g1

0xea18,	// (0x0006197b) popup_image_focus_window_g2

0xea20,	// (0x00061983) popup_image_focus_window_g3

0xea28,	// (0x0006198b) popup_image_focus_window_g4

0x0003,

0xf5ff,	// (0x00062562) popup_image_focus_window_g

0xea30,	// (0x00061993) popup_image_focus_window_t1

0xea3e,	// (0x000619a1) popup_image_focus_window_t2

0xea4e,	// (0x000619b1) popup_image_focus_window_t3

0x0002,

0xf608,	// (0x0006256b) popup_image_focus_window_t

0xc428,	// (0x0005f38b) camera2_autofocus_pane_g1

0x39af,	// (0x00056912) bg_tb_trans_pane_cp01

0xea5c,	// (0x000619bf) popup_image_details_window_g1

0xea6f,	// (0x000619d2) popup_image_details_window_g2

0x0002,

0xf61a,	// (0x0006257d) popup_image_details_window_g

0xea98,	// (0x000619fb) popup_image_details_window_t1

0xeaaa,	// (0x00061a0d) popup_image_details_window_t2

0xeac3,	// (0x00061a26) popup_image_details_window_t3

0xead7,	// (0x00061a3a) popup_image_details_window_t4

0xeaf2,	// (0x00061a55) popup_image_details_window_t5

0x0004,

0xf621,	// (0x00062584) popup_image_details_window_t

0xc4b0,	// (0x0005f413) bg_calc_paper_pane_ParamLimits

0x3685,	// (0x000565e8) grid_highlight_pane_cp013

0x3a4c,	// (0x000569af) list_calc_pane_ParamLimits

0x3a5e,	// (0x000569c1) scroll_pane_cp024

0xc4c4,	// (0x0005f427) bg_calc_display_pane_ParamLimits

0x3a66,	// (0x000569c9) calc_display_pane_t1_ParamLimits

0x3a7b,	// (0x000569de) calc_display_pane_t2_ParamLimits

0x3a90,	// (0x000569f3) calc_display_pane_t3_ParamLimits

0xf0a4,	// (0x00062007) calc_display_pane_t_ParamLimits

0x3b60,	// (0x00056ac3) cell_calc_pane_g2

0x0001,

0xf0c1,	// (0x00062024) cell_calc_pane_g

0x3b69,	// (0x00056acc) cell_calc_pane_t1

0xc519,	// (0x0005f47c) grid_highlight_pane_cp02_ParamLimits

0xc52f,	// (0x0005f492) toolbar_button_pane_cp01_ParamLimits

0xc52f,	// (0x0005f492) toolbar_button_pane_cp01

0xd526,	// (0x00060489) temp_image_control_pane_ParamLimits

0xd526,	// (0x00060489) temp_image_control_pane

0x64dd,	// (0x00059440) main_mp3_pane

0xeb0c,	// (0x00061a6f) temp_image_control_pane_g1_ParamLimits

0xeb0c,	// (0x00061a6f) temp_image_control_pane_g1

0xeb1a,	// (0x00061a7d) temp_image_control_pane_g2_ParamLimits

0xeb1a,	// (0x00061a7d) temp_image_control_pane_g2

0xeb2c,	// (0x00061a8f) temp_image_control_pane_g3_ParamLimits

0xeb2c,	// (0x00061a8f) temp_image_control_pane_g3

0x69e2,	// (0x00059945) temp_image_control_pane_g4_ParamLimits

0x69e2,	// (0x00059945) temp_image_control_pane_g4

0x0003,

0xf62c,	// (0x0006258f) temp_image_control_pane_g_ParamLimits

0xf62c,	// (0x0006258f) temp_image_control_pane_g

0xeb0c,	// (0x00061a6f) main_mp3_pane_g1

0x69f3,	// (0x00059956) main_mp3_pane_g2

0x0007,

0xf635,	// (0x00062598) main_mp3_pane_g

0xeb61,	// (0x00061ac4) main_mp3_pane_t1

0xc436,	// (0x0005f399) main_camera_pane_g8_ParamLimits

0xc436,	// (0x0005f399) main_camera_pane_g8

0x4418,	// (0x0005737b) main_video_pane_g7_ParamLimits

0x4418,	// (0x0005737b) main_video_pane_g7

0x684b,	// (0x000597ae) main_camera2_pane_t7_ParamLimits

0x684b,	// (0x000597ae) main_camera2_pane_t7

0xc7c2,	// (0x0005f725) scroll_pane_cp025_ParamLimits

0xc7c2,	// (0x0005f725) scroll_pane_cp025

0xc7d6,	// (0x0005f739) scroll_pane_cp026_ParamLimits

0xc7d6,	// (0x0005f739) scroll_pane_cp026

0xc7e5,	// (0x0005f748) wml_content_pane_ParamLimits

0x3685,	// (0x000565e8) main_touch_calib_pane

0x6a97,	// (0x000599fa) main_touch_calib_pane_g1

0x6aa3,	// (0x00059a06) main_touch_calib_pane_g2

0x6aaf,	// (0x00059a12) main_touch_calib_pane_g3

0x6abb,	// (0x00059a1e) main_touch_calib_pane_g4

0x0003,

0xf653,	// (0x000625b6) main_touch_calib_pane_g

0x6ac7,	// (0x00059a2a) main_touch_calib_pane_t1

0x6ade,	// (0x00059a41) main_touch_calib_pane_t2

0x0004,

0xf65c,	// (0x000625bf) main_touch_calib_pane_t

0xcee8,	// (0x0005fe4b) mup_progress_pane_cp02

0xd117,	// (0x0006007a) navi_pane_g1

0xd179,	// (0x000600dc) navi_pane_mp_t3

0x64dd,	// (0x00059440) main_mp3_pane_ParamLimits

0x666e,	// (0x000595d1) navi_pane_ParamLimits

0xeb0c,	// (0x00061a6f) main_mp3_pane_g1_ParamLimits

0x69f3,	// (0x00059956) main_mp3_pane_g2_ParamLimits

0x69ff,	// (0x00059962) main_mp3_pane_g3_ParamLimits

0x69ff,	// (0x00059962) main_mp3_pane_g3

0x6a0b,	// (0x0005996e) main_mp3_pane_g4_ParamLimits

0x6a0b,	// (0x0005996e) main_mp3_pane_g4

0xc428,	// (0x0005f38b) main_mp3_pane_g5_ParamLimits

0xc428,	// (0x0005f38b) main_mp3_pane_g5

0xeb3c,	// (0x00061a9f) main_mp3_pane_g6_ParamLimits

0xeb3c,	// (0x00061a9f) main_mp3_pane_g6

0xeb49,	// (0x00061aac) main_mp3_pane_g7_ParamLimits

0xeb49,	// (0x00061aac) main_mp3_pane_g7

0xeb55,	// (0x00061ab8) main_mp3_pane_g8_ParamLimits

0xeb55,	// (0x00061ab8) main_mp3_pane_g8

0xf635,	// (0x00062598) main_mp3_pane_g_ParamLimits

0x6a17,	// (0x0005997a) main_mp3_pane_t2

0x6a27,	// (0x0005998a) main_mp3_pane_t3

0xeb6f,	// (0x00061ad2) main_mp3_pane_t4

0xeb7d,	// (0x00061ae0) main_mp3_pane_t5

0x0005,

0xf646,	// (0x000625a9) main_mp3_pane_t

0xeb8b,	// (0x00061aee) mup_progress_pane_cp01

0x349a,	// (0x000563fd) aid_zoom_text_secondary2

0xe99d,	// (0x00061900) list_cale_ev2_pane

0xe9a5,	// (0x00061908) scroll_pane_cp023_ParamLimits

0x6b39,	// (0x00059a9c) field_cale_ev2_pane_ParamLimits

0x6b39,	// (0x00059a9c) field_cale_ev2_pane

0x6b54,	// (0x00059ab7) field_cale_ev2_pane_g1_ParamLimits

0x6b54,	// (0x00059ab7) field_cale_ev2_pane_g1

0x6b60,	// (0x00059ac3) field_cale_ev2_pane_g2_ParamLimits

0x6b60,	// (0x00059ac3) field_cale_ev2_pane_g2

0x6b78,	// (0x00059adb) field_cale_ev2_pane_g3_ParamLimits

0x6b78,	// (0x00059adb) field_cale_ev2_pane_g3

0x0003,

0xf667,	// (0x000625ca) field_cale_ev2_pane_g_ParamLimits

0xf667,	// (0x000625ca) field_cale_ev2_pane_g

0x6b90,	// (0x00059af3) field_cale_ev2_pane_t1_ParamLimits

0x6b90,	// (0x00059af3) field_cale_ev2_pane_t1

0x6ba7,	// (0x00059b0a) field_cale_ev2_pane_t2_ParamLimits

0x6ba7,	// (0x00059b0a) field_cale_ev2_pane_t2

0x0001,

0xf670,	// (0x000625d3) field_cale_ev2_pane_t_ParamLimits

0xf670,	// (0x000625d3) field_cale_ev2_pane_t

0x5e71,	// (0x00058dd4) main_postcard_pane_g5_ParamLimits

0x5e71,	// (0x00058dd4) main_postcard_pane_g5

0x5e7f,	// (0x00058de2) main_postcard_pane_g6_ParamLimits

0x5e7f,	// (0x00058de2) main_postcard_pane_g6

0xc41a,	// (0x0005f37d) camera2_autofocus_pane_cp_ParamLimits

0xc41a,	// (0x0005f37d) camera2_autofocus_pane_cp

0x64dd,	// (0x00059440) main_mup3_pane

0x6bff,	// (0x00059b62) main_mup3_pane_g1_ParamLimits

0x6bff,	// (0x00059b62) main_mup3_pane_g1

0x6c4e,	// (0x00059bb1) main_mup3_pane_g2_ParamLimits

0x6c4e,	// (0x00059bb1) main_mup3_pane_g2

0x6ca9,	// (0x00059c0c) main_mup3_pane_g3_ParamLimits

0x6ca9,	// (0x00059c0c) main_mup3_pane_g3

0x6d0c,	// (0x00059c6f) main_mup3_pane_g4_ParamLimits

0x6d0c,	// (0x00059c6f) main_mup3_pane_g4

0x6d6f,	// (0x00059cd2) main_mup3_pane_g5_ParamLimits

0x6d6f,	// (0x00059cd2) main_mup3_pane_g5

0x6dd2,	// (0x00059d35) main_mup3_pane_g6_ParamLimits

0x6dd2,	// (0x00059d35) main_mup3_pane_g6

0xc436,	// (0x0005f399) main_mup3_pane_g7_ParamLimits

0xc436,	// (0x0005f399) main_mup3_pane_g7

0x0007,

0xf680,	// (0x000625e3) main_mup3_pane_g_ParamLimits

0xf680,	// (0x000625e3) main_mup3_pane_g

0x6e4a,	// (0x00059dad) main_mup3_pane_t1_ParamLimits

0x6e4a,	// (0x00059dad) main_mup3_pane_t1

0x6f23,	// (0x00059e86) main_mup3_pane_t2_ParamLimits

0x6f23,	// (0x00059e86) main_mup3_pane_t2

0x7000,	// (0x00059f63) main_mup3_pane_t4_ParamLimits

0x7000,	// (0x00059f63) main_mup3_pane_t4

0x7012,	// (0x00059f75) main_mup3_pane_t5_ParamLimits

0x7012,	// (0x00059f75) main_mup3_pane_t5

0x70e0,	// (0x0005a043) main_mup3_pane_t6_ParamLimits

0x70e0,	// (0x0005a043) main_mup3_pane_t6

0x0005,

0xf691,	// (0x000625f4) main_mup3_pane_t_ParamLimits

0xf691,	// (0x000625f4) main_mup3_pane_t

0x717d,	// (0x0005a0e0) mup3_progress_pane_ParamLimits

0x717d,	// (0x0005a0e0) mup3_progress_pane

0x10b9,	// (0x0005401c) popup_mup3_control_window_ParamLimits

0x10b9,	// (0x0005401c) popup_mup3_control_window

0xeb9f,	// (0x00061b02) popup_mup3_text_window

0x71e0,	// (0x0005a143) mup3_progress_pane_t1

0x71f6,	// (0x0005a159) mup3_progress_pane_t2

0xeba7,	// (0x00061b0a) mup3_progress_pane_t3

0x0002,

0xf69e,	// (0x00062601) mup3_progress_pane_t

0xebbe,	// (0x00061b21) mup_progress_pane_cp03

0xebcf,	// (0x00061b32) bg_tb_trans_pane_cp04

0xebcf,	// (0x00061b32) mup3_volume_pane

0xebd7,	// (0x00061b3a) popup_mup3_control_window_g1

0xebd7,	// (0x00061b3a) mup3_volume_pane_g1

0xebd7,	// (0x00061b3a) mup3_volume_pane_g2

0xebd7,	// (0x00061b3a) mup3_volume_pane_g3

0x0002,

0xf6a5,	// (0x00062608) mup3_volume_pane_g

0x1b91,	// (0x00054af4) bg_tb_trans_pane_cp03

0xebdf,	// (0x00061b42) popup_mup3_text_window_g1

0xebe7,	// (0x00061b4a) popup_mup3_text_window_t1

0xc50c,	// (0x0005f46f) list_calc_item_pane_g1_ParamLimits

0xe66f,	// (0x000615d2) mup_volume_pane_cp_g1

0x6af7,	// (0x00059a5a) main_touch_calib_pane_t3

0x6b0d,	// (0x00059a70) main_touch_calib_pane_t4

0x6b23,	// (0x00059a86) main_touch_calib_pane_t5

0x3452,	// (0x000563b5) aid_cell_size_toolbar2

0x345a,	// (0x000563bd) aid_popup3_width_pane

0x338e,	// (0x000562f1) aid_zoom_text_msg_primary

0x4318,	// (0x0005727b) vorec_t7

0xc4d0,	// (0x0005f433) bg_calc_paper_pane_g1_ParamLimits

0xc4dc,	// (0x0005f43f) bg_calc_paper_pane_g2_ParamLimits

0xc4e8,	// (0x0005f44b) bg_calc_paper_pane_g3_ParamLimits

0xc4f4,	// (0x0005f457) bg_calc_paper_pane_g4_ParamLimits

0xc500,	// (0x0005f463) bg_calc_paper_pane_g5_ParamLimits

0x3ad1,	// (0x00056a34) bg_calc_paper_pane_g6_ParamLimits

0x3ae2,	// (0x00056a45) bg_calc_paper_pane_g7_ParamLimits

0x3af3,	// (0x00056a56) bg_calc_paper_pane_g8_ParamLimits

0xf0ab,	// (0x0006200e) bg_calc_paper_pane_g_ParamLimits

0x3b04,	// (0x00056a67) calc_bg_paper_pane_g9_ParamLimits

0xc41a,	// (0x0005f37d) image_qvga_pane_ParamLimits

0xc41a,	// (0x0005f37d) image_qvga_pane

0xc3ad,	// (0x0005f310) bg_popup_sub_pane_cp04_ParamLimits

0xd45d,	// (0x000603c0) popup_mup_playback_window_g1_ParamLimits

0xd469,	// (0x000603cc) popup_mup_playback_window_t1_ParamLimits

0xd47e,	// (0x000603e1) popup_mup_playback_window_t2_ParamLimits

0xf409,	// (0x0006236c) popup_mup_playback_window_t_ParamLimits

0xc428,	// (0x0005f38b) main_mup2_pane_g3_ParamLimits

0xc428,	// (0x0005f38b) main_mup2_pane_g3

0x45b9,	// (0x0005751c) popup_toolbar_window_cp04

0xd802,	// (0x00060765) popup_call2_audio_second_window_g3_ParamLimits

0xd802,	// (0x00060765) popup_call2_audio_second_window_g3

0xdc1a,	// (0x00060b7d) popup_call2_audio_first_window_g4_ParamLimits

0xdc1a,	// (0x00060b7d) popup_call2_audio_first_window_g4

0xe241,	// (0x000611a4) popup_call2_audio_in_window_g4_ParamLimits

0xe241,	// (0x000611a4) popup_call2_audio_in_window_g4

0x5f5c,	// (0x00058ebf) aid_area_sk_bg_cut_ParamLimits

0x5f5c,	// (0x00058ebf) aid_area_sk_bg_cut

0xd493,	// (0x000603f6) aid_area_sk_bg_cut_2_ParamLimits

0xd493,	// (0x000603f6) aid_area_sk_bg_cut_2

0x1b91,	// (0x00054af4) aid_placing_details_win

0x1b91,	// (0x00054af4) aid_placing_details_win_2

0xc428,	// (0x0005f38b) camera2_autofocus_pane_g1_ParamLimits

0x3611,	// (0x00056574) popup_fixed_preview_cale_window_ParamLimits

0x3611,	// (0x00056574) popup_fixed_preview_cale_window

0xd1c0,	// (0x00060123) navi_slider_pane_g3

0xd1c9,	// (0x0006012c) navi_slider_pane_g4

0xd1d2,	// (0x00060135) navi_slider_pane_g5

0xd1c0,	// (0x00060123) navi_slider_pane_g6

0x5a81,	// (0x000589e4) navi_slider_pane_g7

0xd2d2,	// (0x00060235) mup_scale_pane_g3

0xd2db,	// (0x0006023e) mup_scale_pane_g4

0xd2e4,	// (0x00060247) mup_scale_pane_g5

0x5c9e,	// (0x00058c01) mup_scale_pane_g6

0x5ca7,	// (0x00058c0a) mup_scale_pane_g7

0x0e5f,	// (0x00053dc2) cams2_slider_pane_g3

0x0e5f,	// (0x00053dc2) cams2_slider_pane_g4

0x0e5f,	// (0x00053dc2) cams2_slider_pane_g5

0x0e5f,	// (0x00053dc2) cams2_slider_pane_g6

0x0e5f,	// (0x00053dc2) cams2_slider_pane_g7

0xc466,	// (0x0005f3c9) camera2_autofocus_pane_cp_g1

0xe4df,	// (0x00061442) bg_popup_preview_window_pane_cp02_ParamLimits

0xe4df,	// (0x00061442) bg_popup_preview_window_pane_cp02

0xebf5,	// (0x00061b58) list_fp_cale_pane_ParamLimits

0xebf5,	// (0x00061b58) list_fp_cale_pane

0xec01,	// (0x00061b64) popup_fixed_preview_cale_window_t1_ParamLimits

0xec01,	// (0x00061b64) popup_fixed_preview_cale_window_t1

0x720c,	// (0x0005a16f) popup_fixed_preview_cale_window_t2_ParamLimits

0x720c,	// (0x0005a16f) popup_fixed_preview_cale_window_t2

0x7221,	// (0x0005a184) popup_fixed_preview_cale_window_t3_ParamLimits

0x7221,	// (0x0005a184) popup_fixed_preview_cale_window_t3

0x0002,

0xf6ac,	// (0x0006260f) popup_fixed_preview_cale_window_t_ParamLimits

0xf6ac,	// (0x0006260f) popup_fixed_preview_cale_window_t

0x7236,	// (0x0005a199) list_single_fp_cale_pane_ParamLimits

0x7236,	// (0x0005a199) list_single_fp_cale_pane

0xec1f,	// (0x00061b82) list_single_fp_cale_pane_g1_ParamLimits

0xec1f,	// (0x00061b82) list_single_fp_cale_pane_g1

0xec2b,	// (0x00061b8e) list_single_fp_cale_pane_g2_ParamLimits

0xec2b,	// (0x00061b8e) list_single_fp_cale_pane_g2

0x0002,

0xf6b3,	// (0x00062616) list_single_fp_cale_pane_g_ParamLimits

0xf6b3,	// (0x00062616) list_single_fp_cale_pane_g

0xec44,	// (0x00061ba7) list_single_fp_cale_pane_t1_ParamLimits

0xec44,	// (0x00061ba7) list_single_fp_cale_pane_t1

0xec56,	// (0x00061bb9) list_single_fp_cale_pane_t2_ParamLimits

0xec56,	// (0x00061bb9) list_single_fp_cale_pane_t2

0x0001,

0xf6ba,	// (0x0006261d) list_single_fp_cale_pane_t_ParamLimits

0xf6ba,	// (0x0006261d) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x3685,	// (0x000565e8) main_dialer_pane

0x1b91,	// (0x00054af4) aid_cell_size_keypad

0x1b91,	// (0x00054af4) dialer_ne_pane

0x1b91,	// (0x00054af4) grid_dialer_command_1_pane

0x1b91,	// (0x00054af4) grid_dialer_command_2_pane

0x1b91,	// (0x00054af4) grid_dialer_keypad_pane

0xe4a9,	// (0x0006140c) bg_popup_call_pane_cp06_ParamLimits

0xe4a9,	// (0x0006140c) bg_popup_call_pane_cp06

0xe4a9,	// (0x0006140c) dialer_ne_clear_pane_ParamLimits

0xe4a9,	// (0x0006140c) dialer_ne_clear_pane

0xc466,	// (0x0005f3c9) dialer_ne_pane_g1

0xc484,	// (0x0005f3e7) dialer_ne_pane_t1_ParamLimits

0xc484,	// (0x0005f3e7) dialer_ne_pane_t1

0xee30,	// (0x00061d93) dialer_ne_pane_t2_ParamLimits

0xee30,	// (0x00061d93) dialer_ne_pane_t2

0x7246,	// (0x0005a1a9) dialer_ne_pane_t3_ParamLimits

0x7246,	// (0x0005a1a9) dialer_ne_pane_t3

0x0002,

0xf6bf,	// (0x00062622) dialer_ne_pane_t_ParamLimits

0xf6bf,	// (0x00062622) dialer_ne_pane_t

0x7246,	// (0x0005a1a9) dialer_ne_pane_t3_copy1_ParamLimits

0x7246,	// (0x0005a1a9) dialer_ne_pane_t3_copy1

0xec89,	// (0x00061bec) cell_dialer_keypad_pane_ParamLimits

0xec89,	// (0x00061bec) cell_dialer_keypad_pane

0x39af,	// (0x00056912) cell_dialer_command_1_pane_ParamLimits

0x39af,	// (0x00056912) cell_dialer_command_1_pane

0xeca0,	// (0x00061c03) cell_dialer_command_2_pane_ParamLimits

0xeca0,	// (0x00061c03) cell_dialer_command_2_pane

0x39af,	// (0x00056912) bg_button_pane_cp02_ParamLimits

0x39af,	// (0x00056912) bg_button_pane_cp02

0xc428,	// (0x0005f38b) cell_dialer_keypad_pane_g1_ParamLimits

0xc428,	// (0x0005f38b) cell_dialer_keypad_pane_g1

0x39af,	// (0x00056912) bg_button_pane_cp03_ParamLimits

0x39af,	// (0x00056912) bg_button_pane_cp03

0xc428,	// (0x0005f38b) cell_dialer_command_1_pane_g1_ParamLimits

0xc428,	// (0x0005f38b) cell_dialer_command_1_pane_g1

0x1b91,	// (0x00054af4) bg_button_pane_cp04

0xc466,	// (0x0005f3c9) cell_dialer_command_2_pane_g1

0x1b91,	// (0x00054af4) bg_button_pane_cp06

0xc466,	// (0x0005f3c9) dialer_ne_clear_pane_g1

0x59bc,	// (0x0005891f) navi_pane_g2

0x59ea,	// (0x0005894d) navi_pane_g3

0x0002,

0xf311,	// (0x00062274) navi_pane_g

0x5a15,	// (0x00058978) navi_pane_mv_g2

0x5a3c,	// (0x0005899f) navi_pane_mv_g5

0x5a44,	// (0x000589a7) navi_pane_mv_t1

0xc4c4,	// (0x0005f427) main_clock2_pane

0xc41a,	// (0x0005f37d) main_clock2_list_pane_ParamLimits

0xc41a,	// (0x0005f37d) main_clock2_list_pane

0x72bb,	// (0x0005a21e) main_clock2_pane_t1_ParamLimits

0x72bb,	// (0x0005a21e) main_clock2_pane_t1

0x72e9,	// (0x0005a24c) main_clock2_pane_t2_ParamLimits

0x72e9,	// (0x0005a24c) main_clock2_pane_t2

0x0004,

0xf6cb,	// (0x0006262e) main_clock2_pane_t_ParamLimits

0xf6cb,	// (0x0006262e) main_clock2_pane_t

0x734e,	// (0x0005a2b1) popup_clock_analogue_window_cp03_ParamLimits

0x734e,	// (0x0005a2b1) popup_clock_analogue_window_cp03

0x736c,	// (0x0005a2cf) popup_clock_digital_window_cp02_ParamLimits

0x736c,	// (0x0005a2cf) popup_clock_digital_window_cp02

0x73e1,	// (0x0005a344) main_clock2_list_single_pane_ParamLimits

0x73e1,	// (0x0005a344) main_clock2_list_single_pane

0xc6a1,	// (0x0005f604) list_highlight_pane_cp05

0xece1,	// (0x00061c44) main_clock2_list_single_pane_t1

0x45b9,	// (0x0005751c) popup_toolbar_window_cp04_ParamLimits

0xc436,	// (0x0005f399) camera2_autofocus_pane_g2_ParamLimits

0xc436,	// (0x0005f399) camera2_autofocus_pane_g2

0xc436,	// (0x0005f399) camera2_autofocus_pane_g3_ParamLimits

0xc436,	// (0x0005f399) camera2_autofocus_pane_g3

0xc436,	// (0x0005f399) camera2_autofocus_pane_g4_ParamLimits

0xc436,	// (0x0005f399) camera2_autofocus_pane_g4

0xc436,	// (0x0005f399) camera2_autofocus_pane_g5_ParamLimits

0xc436,	// (0x0005f399) camera2_autofocus_pane_g5

0x0004,

0xf60f,	// (0x00062572) camera2_autofocus_pane_g_ParamLimits

0xf60f,	// (0x00062572) camera2_autofocus_pane_g

0x6bbc,	// (0x00059b1f) camera2_autofocus_pane_cp_g2

0x6bc4,	// (0x00059b27) camera2_autofocus_pane_cp_g3

0x6bcc,	// (0x00059b2f) camera2_autofocus_pane_cp_g4

0x6bd4,	// (0x00059b37) camera2_autofocus_pane_cp_g5

0x0004,

0xf675,	// (0x000625d8) camera2_autofocus_pane_cp_g

0x1b91,	// (0x00054af4) popup_dialer_spcha_window

0x1b91,	// (0x00054af4) bg_popup_sub_pane_cp07

0x1b91,	// (0x00054af4) list_spcha_pane

0xecef,	// (0x00061c52) list_single_spcha_pane_ParamLimits

0xecef,	// (0x00061c52) list_single_spcha_pane

0x1b91,	// (0x00054af4) list_highlight_pane_cp06

0xcbbc,	// (0x0005fb1f) list_single_spcha_pane_t1

0xdfeb,	// (0x00060f4e) popup_call2_audio_out_window_g4_ParamLimits

0xdfeb,	// (0x00060f4e) popup_call2_audio_out_window_g4

0x3685,	// (0x000565e8) main_imed2_pane

0x6587,	// (0x000594ea) popup_imed_adjust2_window

0x659a,	// (0x000594fd) popup_imed_trans_window_ParamLimits

0x659a,	// (0x000594fd) popup_imed_trans_window

0xe766,	// (0x000616c9) popup_blid_sat_info2_window_t1

0xe774,	// (0x000616d7) popup_blid_sat_info2_window_t2

0x000a,

0xf5a4,	// (0x00062507) popup_blid_sat_info2_window_t

0x7498,	// (0x0005a3fb) aid_size_cell_colour_35

0x74b2,	// (0x0005a415) aid_size_cell_colour_112

0x74c9,	// (0x0005a42c) aid_size_cell_effect

0x39af,	// (0x00056912) bg_tb_trans_pane_cp02

0xcd9c,	// (0x0005fcff) heading_imed_pane

0x74e3,	// (0x0005a446) listscroll_imed_pane

0xed01,	// (0x00061c64) heading_imed_pane_g1

0xed09,	// (0x00061c6c) heading_imed_pane_t1

0xed17,	// (0x00061c7a) grid_imed_colour_35_pane_ParamLimits

0xed17,	// (0x00061c7a) grid_imed_colour_35_pane

0x74ef,	// (0x0005a452) grid_imed_effect_pane

0xed33,	// (0x00061c96) list_imed_aspect_pane

0x74ff,	// (0x0005a462) scroll_pane_cp027_ParamLimits

0x74ff,	// (0x0005a462) scroll_pane_cp027

0x750b,	// (0x0005a46e) cell_imed_effect_pane_ParamLimits

0x750b,	// (0x0005a46e) cell_imed_effect_pane

0xed3b,	// (0x00061c9e) cell_imed_colour_pane_ParamLimits

0xed3b,	// (0x00061c9e) cell_imed_colour_pane

0xed85,	// (0x00061ce8) cell_imed_colour_pane_g1_ParamLimits

0xed85,	// (0x00061ce8) cell_imed_colour_pane_g1

0xed96,	// (0x00061cf9) hgihlgiht_grid_pane_cp016_ParamLimits

0xed96,	// (0x00061cf9) hgihlgiht_grid_pane_cp016

0x7527,	// (0x0005a48a) cell_imed_effect_pane_g1

0x752f,	// (0x0005a492) grid_highlight_pane_cp017

0xeda7,	// (0x00061d0a) list_imed_single_pane_ParamLimits

0xeda7,	// (0x00061d0a) list_imed_single_pane

0x1b91,	// (0x00054af4) list_highlight_pane_cp07

0xedbb,	// (0x00061d1e) list_imed_aspect_pane_comp1_t1

0xd3e9,	// (0x0006034c) bg_tb_trans_pane_cp05

0xeddd,	// (0x00061d40) popup_imed_adjust2_window_g1

0xee04,	// (0x00061d67) popup_imed_adjust2_window_t1

0xee1c,	// (0x00061d7f) slider_imed_adjust_pane

0xee4d,	// (0x00061db0) slider_imed_adjust_pane_g1

0xee5d,	// (0x00061dc0) slider_imed_adjust_pane_g2

0xee6d,	// (0x00061dd0) slider_imed_adjust_pane_g3

0xee7e,	// (0x00061de1) slider_imed_adjust_pane_g4

0x0003,

0xf6e8,	// (0x0006264b) slider_imed_adjust_pane_g

0x7538,	// (0x0005a49b) aid_size_cell_clipart2

0xee8f,	// (0x00061df2) grid_imed_clipart_pane

0xd2f5,	// (0x00060258) scroll_pane_cp031

0x7544,	// (0x0005a4a7) cell_imed_clipart_pane_ParamLimits

0x7544,	// (0x0005a4a7) cell_imed_clipart_pane

0x7562,	// (0x0005a4c5) cell_imed_clipart_pane_g1

0x1b91,	// (0x00054af4) grid_highlight_pane_cp014

0x729d,	// (0x0005a200) main_clock2_pane_g1_ParamLimits

0x729d,	// (0x0005a200) main_clock2_pane_g1

0x7388,	// (0x0005a2eb) aid_call2_pane_cp10

0x739a,	// (0x0005a2fd) aid_call_pane_cp10

0xcedc,	// (0x0005fe3f) popup_clock_analogue_window_cp10_g1

0xcedc,	// (0x0005fe3f) popup_clock_analogue_window_cp10_g2

0x73ac,	// (0x0005a30f) popup_clock_analogue_window_cp10_g3

0x73ac,	// (0x0005a30f) popup_clock_analogue_window_cp10_g4

0xcedc,	// (0x0005fe3f) popup_clock_analogue_window_cp10_g5

0x0004,

0xf6d6,	// (0x00062639) popup_clock_analogue_window_cp10_g

0x73c2,	// (0x0005a325) popup_clock_analogue_window_cp10_t1

0x73f3,	// (0x0005a356) clock_digital_number_pane_cp10_ParamLimits

0x73f3,	// (0x0005a356) clock_digital_number_pane_cp10

0x740d,	// (0x0005a370) clock_digital_number_pane_cp11_ParamLimits

0x740d,	// (0x0005a370) clock_digital_number_pane_cp11

0x7427,	// (0x0005a38a) clock_digital_number_pane_cp12_ParamLimits

0x7427,	// (0x0005a38a) clock_digital_number_pane_cp12

0x7441,	// (0x0005a3a4) clock_digital_number_pane_cp13_ParamLimits

0x7441,	// (0x0005a3a4) clock_digital_number_pane_cp13

0x745d,	// (0x0005a3c0) clock_digital_separator_pane_cp10_ParamLimits

0x745d,	// (0x0005a3c0) clock_digital_separator_pane_cp10

0x7477,	// (0x0005a3da) popup_clock_digital_window_cp02_t1_ParamLimits

0x7477,	// (0x0005a3da) popup_clock_digital_window_cp02_t1

0xc3a5,	// (0x0005f308) clock_digital_number_pane_cp10_g1

0xc3a5,	// (0x0005f308) clock_digital_number_pane_cp10_g2

0x0001,

0xf6f1,	// (0x00062654) clock_digital_number_pane_cp10_g

0xc3a5,	// (0x0005f308) clock_digital_separator_pane_cp10_g1

0xc3a5,	// (0x0005f308) clock_digital_separator_pane_g2_cp10

0xd187,	// (0x000600ea) navi_pane_vded_g4

0xd190,	// (0x000600f3) navi_pane_vded_g5

0xd199,	// (0x000600fc) navi_pane_vded_t1

0x3685,	// (0x000565e8) main_vded_pane

0x756b,	// (0x0005a4ce) main_vded_pane_g1

0x7577,	// (0x0005a4da) main_vded_pane_g2

0x7581,	// (0x0005a4e4) main_vded_pane_g3

0x0002,

0xf6f6,	// (0x00062659) main_vded_pane_g

0x758b,	// (0x0005a4ee) main_vded_pane_t1

0x7599,	// (0x0005a4fc) main_vded_pane_t2

0x0001,

0xf6fd,	// (0x00062660) main_vded_pane_t

0x75a7,	// (0x0005a50a) vded_slider_pane

0x75b1,	// (0x0005a514) vded_video_pane

0xee99,	// (0x00061dfc) vded_video_pane_g1

0x75bd,	// (0x0005a520) vded_video_pane_g2

0xc466,	// (0x0005f3c9) vded_video_pane_g3

0x0002,

0xf702,	// (0x00062665) vded_video_pane_g

0xeea3,	// (0x00061e06) vded_slider_pane_g1

0xe66f,	// (0x000615d2) vded_slider_pane_g2

0xeeac,	// (0x00061e0f) vded_slider_pane_g3

0xeeb5,	// (0x00061e18) vded_slider_pane_g4

0xeebe,	// (0x00061e21) vded_slider_pane_g5

0x0004,

0xf709,	// (0x0006266c) vded_slider_pane_g

0x10b9,	// (0x0005401c) mup3_rocker_pane_ParamLimits

0x10b9,	// (0x0005401c) mup3_rocker_pane

0xebd7,	// (0x00061b3a) mup3_control_keys_pane_g1

0xeec7,	// (0x00061e2a) mup3_control_keys_pane_g2

0xebd7,	// (0x00061b3a) mup3_control_keys_pane_g3

0xeecf,	// (0x00061e32) mup3_control_keys_pane_g4

0x0003,

0xf714,	// (0x00062677) mup3_control_keys_pane_g

0x3639,	// (0x0005659c) popup_toolbar2_fixed_window_cp01_ParamLimits

0x3639,	// (0x0005659c) popup_toolbar2_fixed_window_cp01

0x10b9,	// (0x0005401c) popup_toolbar2_fixed_window_cp02_ParamLimits

0x10b9,	// (0x0005401c) popup_toolbar2_fixed_window_cp02

0xd974,	// (0x000608d7) popup_call2_audio_second_window_t4_ParamLimits

0xd974,	// (0x000608d7) popup_call2_audio_second_window_t4

0xdeb0,	// (0x00060e13) popup_call2_audio_first_window_t6_ParamLimits

0xdeb0,	// (0x00060e13) popup_call2_audio_first_window_t6

0xe0ee,	// (0x00061051) popup_call2_audio_out_window_t6_ParamLimits

0xe0ee,	// (0x00061051) popup_call2_audio_out_window_t6

0x3685,	// (0x000565e8) main_vitu_pane

0xc41a,	// (0x0005f37d) aid_size_cell_itu_ParamLimits

0xc41a,	// (0x0005f37d) aid_size_cell_itu

0xc41a,	// (0x0005f37d) bg_popup_window_pane_cp08_ParamLimits

0xc41a,	// (0x0005f37d) bg_popup_window_pane_cp08

0xc41a,	// (0x0005f37d) field_vitu_entry_pane_ParamLimits

0xc41a,	// (0x0005f37d) field_vitu_entry_pane

0xc41a,	// (0x0005f37d) grid_vitu_function_pane_ParamLimits

0xc41a,	// (0x0005f37d) grid_vitu_function_pane

0xc41a,	// (0x0005f37d) grid_vitu_itu_pane_ParamLimits

0xc41a,	// (0x0005f37d) grid_vitu_itu_pane

0xc41a,	// (0x0005f37d) cell_vitu_itu_pane_ParamLimits

0xc41a,	// (0x0005f37d) cell_vitu_itu_pane

0xc41a,	// (0x0005f37d) cell_vitu_function_pane_ParamLimits

0xc41a,	// (0x0005f37d) cell_vitu_function_pane

0x39af,	// (0x00056912) bg_popup_sub_pane_cp08_ParamLimits

0x39af,	// (0x00056912) bg_popup_sub_pane_cp08

0xc470,	// (0x0005f3d3) field_vitu_entry_pane_t1_ParamLimits

0xc470,	// (0x0005f3d3) field_vitu_entry_pane_t1

0xee30,	// (0x00061d93) field_vitu_entry_pane_t2_ParamLimits

0xee30,	// (0x00061d93) field_vitu_entry_pane_t2

0x0001,

0xf71d,	// (0x00062680) field_vitu_entry_pane_t_ParamLimits

0xf71d,	// (0x00062680) field_vitu_entry_pane_t

0xe4a9,	// (0x0006140c) bg_button_pane_cp05_ParamLimits

0xe4a9,	// (0x0006140c) bg_button_pane_cp05

0xeed7,	// (0x00061e3a) cell_vitu_itu_pane_g1

0xd3f7,	// (0x0006035a) cell_vitu_itu_pane_t1_ParamLimits

0xd3f7,	// (0x0006035a) cell_vitu_itu_pane_t1

0xd3f7,	// (0x0006035a) cell_vitu_itu_pane_t2_ParamLimits

0xd3f7,	// (0x0006035a) cell_vitu_itu_pane_t2

0x0002,

0xf722,	// (0x00062685) cell_vitu_itu_pane_t_ParamLimits

0xf722,	// (0x00062685) cell_vitu_itu_pane_t

0x1b91,	// (0x00054af4) bg_button_pane_cp07

0xc466,	// (0x0005f3c9) cell_vitu_function_pane_g1

0x3a35,	// (0x00056998) main_calc_pane_g1

0x348e,	// (0x000563f1) aid_visual_content_pane

0x3685,	// (0x000565e8) main_vradio_pane

0xc436,	// (0x0005f399) main_vradio_pane_g1_ParamLimits

0xc436,	// (0x0005f399) main_vradio_pane_g1

0xc436,	// (0x0005f399) main_vradio_pane_g2_ParamLimits

0xc436,	// (0x0005f399) main_vradio_pane_g2

0x0001,

0xf4b9,	// (0x0006241c) main_vradio_pane_g_ParamLimits

0xf4b9,	// (0x0006241c) main_vradio_pane_g

0xc484,	// (0x0005f3e7) main_vradio_pane_t1_ParamLimits

0xc484,	// (0x0005f3e7) main_vradio_pane_t1

0xc484,	// (0x0005f3e7) main_vradio_pane_t2_ParamLimits

0xc484,	// (0x0005f3e7) main_vradio_pane_t2

0xc484,	// (0x0005f3e7) main_vradio_pane_t3_ParamLimits

0xc484,	// (0x0005f3e7) main_vradio_pane_t3

0x0002,

0xf729,	// (0x0006268c) main_vradio_pane_t_ParamLimits

0xf729,	// (0x0006268c) main_vradio_pane_t

0xc41a,	// (0x0005f37d) vradio_rocker_control_pane_ParamLimits

0xc41a,	// (0x0005f37d) vradio_rocker_control_pane

0xc41a,	// (0x0005f37d) vradio_station_info_pane_ParamLimits

0xc41a,	// (0x0005f37d) vradio_station_info_pane

0x39af,	// (0x00056912) vradio_frequency_info_pane_ParamLimits

0x39af,	// (0x00056912) vradio_frequency_info_pane

0xc466,	// (0x0005f3c9) vradio_station_info_pane_g1

0xd3f7,	// (0x0006035a) vradio_station_info_pane_t1_ParamLimits

0xd3f7,	// (0x0006035a) vradio_station_info_pane_t1

0xc484,	// (0x0005f3e7) vradio_station_info_pane_t2_ParamLimits

0xc484,	// (0x0005f3e7) vradio_station_info_pane_t2

0x0001,

0xf730,	// (0x00062693) vradio_station_info_pane_t_ParamLimits

0xf730,	// (0x00062693) vradio_station_info_pane_t

0x1b91,	// (0x00054af4) vradio_tuning_pane

0x75c6,	// (0x0005a529) vradio_rocker_control_pane_g1

0xeef3,	// (0x00061e56) vradio_rocker_control_pane_g2

0x75ce,	// (0x0005a531) vradio_rocker_control_pane_g3

0x75d6,	// (0x0005a539) vradio_rocker_control_pane_g4

0x75e0,	// (0x0005a543) vradio_rocker_control_pane_g5

0x0004,

0xf735,	// (0x00062698) vradio_rocker_control_pane_g

0xc466,	// (0x0005f3c9) vradio_frequency_info_pane_g1

0xc470,	// (0x0005f3d3) vradio_frequency_info_pane_t1_ParamLimits

0xc470,	// (0x0005f3d3) vradio_frequency_info_pane_t1

0x75e8,	// (0x0005a54b) vradio_tuning_pane_g1

0x75f5,	// (0x0005a558) vradio_tuning_pane_t1

0x34d7,	// (0x0005643a) area_side_right_pane_ParamLimits

0x34d7,	// (0x0005643a) area_side_right_pane

0xe498,	// (0x000613fb) status_small_pane_g1

0xe4a0,	// (0x00061403) status_small_pane_g2

0xe4b7,	// (0x0006141a) status_small_pane_g3

0xe4c0,	// (0x00061423) status_small_pane_g4

0x0003,

0xf506,	// (0x00062469) status_small_pane_g

0xe4c9,	// (0x0006142c) status_small_pane_t1

0x3685,	// (0x000565e8) main_video3_pane

0x1b91,	// (0x00054af4) cams_zoom_vslider_pane

0xeefb,	// (0x00061e5e) image3_wide_pane_ParamLimits

0xeefb,	// (0x00061e5e) image3_wide_pane

0x1b91,	// (0x00054af4) image3_wide_small_pane

0xef15,	// (0x00061e78) main_video3_pane_g1_ParamLimits

0xef15,	// (0x00061e78) main_video3_pane_g1

0xef15,	// (0x00061e78) main_video3_pane_g2_ParamLimits

0xef15,	// (0x00061e78) main_video3_pane_g2

0x0001,

0xf740,	// (0x000626a3) main_video3_pane_g_ParamLimits

0xf740,	// (0x000626a3) main_video3_pane_g

0xef33,	// (0x00061e96) main_video3_pane_t1_ParamLimits

0xef33,	// (0x00061e96) main_video3_pane_t1

0xef33,	// (0x00061e96) main_video3_pane_t2_ParamLimits

0xef33,	// (0x00061e96) main_video3_pane_t2

0xef33,	// (0x00061e96) main_video3_pane_t3_ParamLimits

0xef33,	// (0x00061e96) main_video3_pane_t3

0x0002,

0xf745,	// (0x000626a8) main_video3_pane_t_ParamLimits

0xf745,	// (0x000626a8) main_video3_pane_t

0xc466,	// (0x0005f3c9) cams_zoom_vslider_pane_g1

0xc466,	// (0x0005f3c9) cams_zoom_vslider_pane_g2

0x0001,

0xf08c,	// (0x00061fef) cams_zoom_vslider_pane_g

0x1b91,	// (0x00054af4) small_slider_vertical_pane

0xc466,	// (0x0005f3c9) small_slider_vertical_pane_g1

0xc466,	// (0x0005f3c9) small_slider_vertical_pane_g2

0xef5a,	// (0x00061ebd) small_slider_vertical_pane_g3

0x0002,

0xf74c,	// (0x000626af) small_slider_vertical_pane_g

0x3685,	// (0x000565e8) main_hwr_training_pane

0xef63,	// (0x00061ec6) hwr_training_instruct_pane_ParamLimits

0xef63,	// (0x00061ec6) hwr_training_instruct_pane

0x7604,	// (0x0005a567) hwr_training_navi_pane_ParamLimits

0x7604,	// (0x0005a567) hwr_training_navi_pane

0x761e,	// (0x0005a581) hwr_training_write_pane_ParamLimits

0x761e,	// (0x0005a581) hwr_training_write_pane

0x1b91,	// (0x00054af4) bg_frame_shadow_pane

0xef9a,	// (0x00061efd) hwr_training_write_pane_g1

0xefa2,	// (0x00061f05) hwr_training_write_pane_g2

0xefaa,	// (0x00061f0d) hwr_training_write_pane_g3

0xefb2,	// (0x00061f15) hwr_training_write_pane_g4

0xefba,	// (0x00061f1d) hwr_training_write_pane_g5

0xefc2,	// (0x00061f25) hwr_training_write_pane_g6

0xefca,	// (0x00061f2d) hwr_training_write_pane_g7

0x0006,

0xf753,	// (0x000626b6) hwr_training_write_pane_g

0x7656,	// (0x0005a5b9) hwr_training_navi_pane_g1_ParamLimits

0x7656,	// (0x0005a5b9) hwr_training_navi_pane_g1

0x7668,	// (0x0005a5cb) hwr_training_navi_pane_g2_ParamLimits

0x7668,	// (0x0005a5cb) hwr_training_navi_pane_g2

0x767a,	// (0x0005a5dd) hwr_training_navi_pane_g3_ParamLimits

0x767a,	// (0x0005a5dd) hwr_training_navi_pane_g3

0x768a,	// (0x0005a5ed) hwr_training_navi_pane_g4_ParamLimits

0x768a,	// (0x0005a5ed) hwr_training_navi_pane_g4

0x0004,

0xf762,	// (0x000626c5) hwr_training_navi_pane_g_ParamLimits

0xf762,	// (0x000626c5) hwr_training_navi_pane_g

0x76a4,	// (0x0005a607) hwr_training_navi_pane_t1

0x76b2,	// (0x0005a615) list_single_hwr_training_instruct_pane_ParamLimits

0x76b2,	// (0x0005a615) list_single_hwr_training_instruct_pane

0xefd2,	// (0x00061f35) list_single_hwr_training_instruct_pane_t1

0xe86d,	// (0x000617d0) bg_frame_shadow_pane_g1

0xefe1,	// (0x00061f44) bg_frame_shadow_pane_g2

0xefe9,	// (0x00061f4c) bg_frame_shadow_pane_g3

0xeff1,	// (0x00061f54) bg_frame_shadow_pane_g4

0xeff9,	// (0x00061f5c) bg_frame_shadow_pane_g5

0xf001,	// (0x00061f64) bg_frame_shadow_pane_g6

0xf009,	// (0x00061f6c) bg_frame_shadow_pane_g7

0xc573,	// (0x0005f4d6) bg_frame_shadow_pane_g8

0x0007,

0xf76d,	// (0x000626d0) bg_frame_shadow_pane_g

0x3685,	// (0x000565e8) main_video_tele_dialer_pane

0x76cb,	// (0x0005a62e) aid_size_cell_video_keypad_ParamLimits

0x76cb,	// (0x0005a62e) aid_size_cell_video_keypad

0x76db,	// (0x0005a63e) grid_video_dialer_keypad_pane_ParamLimits

0x76db,	// (0x0005a63e) grid_video_dialer_keypad_pane

0x770d,	// (0x0005a670) video_down_pane_cp_ParamLimits

0x770d,	// (0x0005a670) video_down_pane_cp

0x7737,	// (0x0005a69a) cell_video_dialer_keypad_pane_ParamLimits

0x7737,	// (0x0005a69a) cell_video_dialer_keypad_pane

0xf011,	// (0x00061f74) bg_button_pane_cp08_ParamLimits

0xf011,	// (0x00061f74) bg_button_pane_cp08

0x774e,	// (0x0005a6b1) cell_video_dialer_keypad_pane_g1_ParamLimits

0x774e,	// (0x0005a6b1) cell_video_dialer_keypad_pane_g1

0x10b9,	// (0x0005401c) mup3_rocker2_pane_ParamLimits

0x10b9,	// (0x0005401c) mup3_rocker2_pane

0xc466,	// (0x0005f3c9) mup3_rocker2_pane_g1

0x64eb,	// (0x0005944e) main_dialer2_pane

0x3685,	// (0x000565e8) main_mp4_pane

0x77a7,	// (0x0005a70a) main_mp4_pane_g1_ParamLimits

0x77a7,	// (0x0005a70a) main_mp4_pane_g1

0x77c9,	// (0x0005a72c) main_mp4_pane_g2_ParamLimits

0x77c9,	// (0x0005a72c) main_mp4_pane_g2

0x77e7,	// (0x0005a74a) main_mp4_pane_g3_ParamLimits

0x77e7,	// (0x0005a74a) main_mp4_pane_g3

0x7822,	// (0x0005a785) main_mp4_pane_g4_ParamLimits

0x7822,	// (0x0005a785) main_mp4_pane_g4

0x784a,	// (0x0005a7ad) main_mp4_pane_g5_ParamLimits

0x784a,	// (0x0005a7ad) main_mp4_pane_g5

0x0007,

0xf78d,	// (0x000626f0) main_mp4_pane_g_ParamLimits

0xf78d,	// (0x000626f0) main_mp4_pane_g

0x78b2,	// (0x0005a815) main_mp4_pane_t1_ParamLimits

0x78b2,	// (0x0005a815) main_mp4_pane_t1

0x7914,	// (0x0005a877) main_mp4_pane_t2_ParamLimits

0x7914,	// (0x0005a877) main_mp4_pane_t2

0x7978,	// (0x0005a8db) main_mp4_pane_t3_ParamLimits

0x7978,	// (0x0005a8db) main_mp4_pane_t3

0x79d6,	// (0x0005a939) main_mp4_pane_t4_ParamLimits

0x79d6,	// (0x0005a939) main_mp4_pane_t4

0x0003,

0xf79e,	// (0x00062701) main_mp4_pane_t_ParamLimits

0xf79e,	// (0x00062701) main_mp4_pane_t

0x7a34,	// (0x0005a997) mp4_progress_pane_ParamLimits

0x7a34,	// (0x0005a997) mp4_progress_pane

0x7a68,	// (0x0005a9cb) mp4_rocker_pane_ParamLimits

0x7a68,	// (0x0005a9cb) mp4_rocker_pane

0x061e,	// (0x00053581) mp4_progress_pane_t1

0x063c,	// (0x0005359f) mp4_progress_pane_t2

0x0001,

0xf7a7,	// (0x0006270a) mp4_progress_pane_t

0x065b,	// (0x000535be) mup_progress_pane_cp04

0x0e5f,	// (0x00053dc2) mp4_rocker_pane_g1

0x366b,	// (0x000565ce) aid_cell_size_keypad2_ParamLimits

0x366b,	// (0x000565ce) aid_cell_size_keypad2

0x366b,	// (0x000565ce) dialer2_ne_pane_ParamLimits

0x366b,	// (0x000565ce) dialer2_ne_pane

0x366b,	// (0x000565ce) grid_dialer2_keypad_pane_ParamLimits

0x366b,	// (0x000565ce) grid_dialer2_keypad_pane

0xe6e3,	// (0x00061646) bg_popup_call_pane_cp07_ParamLimits

0xe6e3,	// (0x00061646) bg_popup_call_pane_cp07

0x7a7e,	// (0x0005a9e1) dialer2_ne_pane_t1_ParamLimits

0x7a7e,	// (0x0005a9e1) dialer2_ne_pane_t1

0x7aa3,	// (0x0005aa06) cell_dialer2_keypad_pane_ParamLimits

0x7aa3,	// (0x0005aa06) cell_dialer2_keypad_pane

0xe4a9,	// (0x0006140c) bg_button_pane_pane_cp04_ParamLimits

0xe4a9,	// (0x0006140c) bg_button_pane_pane_cp04

0xc428,	// (0x0005f38b) cell_dialer2_keypad_pane_g1_ParamLimits

0xc428,	// (0x0005f38b) cell_dialer2_keypad_pane_g1

0x449d,	// (0x00057400) aid_placing_vt_set_content_ParamLimits

0x449d,	// (0x00057400) aid_placing_vt_set_content

0x44c5,	// (0x00057428) aid_placing_vt_set_title_ParamLimits

0x44c5,	// (0x00057428) aid_placing_vt_set_title

0x3685,	// (0x000565e8) main_image3_pane

0x7aec,	// (0x0005aa4f) area_side_right_pane_cp01_ParamLimits

0x7aec,	// (0x0005aa4f) area_side_right_pane_cp01

0x7b1b,	// (0x0005aa7e) main_image3_pane_g1_ParamLimits

0x7b1b,	// (0x0005aa7e) main_image3_pane_g1

0x7b29,	// (0x0005aa8c) main_image3_pane_g2_ParamLimits

0x7b29,	// (0x0005aa8c) main_image3_pane_g2

0x7b42,	// (0x0005aaa5) main_image3_pane_g3_ParamLimits

0x7b42,	// (0x0005aaa5) main_image3_pane_g3

0x7b5b,	// (0x0005aabe) main_image3_pane_g4_ParamLimits

0x7b5b,	// (0x0005aabe) main_image3_pane_g4

0x0003,

0xf7b6,	// (0x00062719) main_image3_pane_g_ParamLimits

0xf7b6,	// (0x00062719) main_image3_pane_g

0x7b74,	// (0x0005aad7) main_image3_pane_t1_ParamLimits

0x7b74,	// (0x0005aad7) main_image3_pane_t1

0x7b99,	// (0x0005aafc) main_image3_pane_t2_ParamLimits

0x7b99,	// (0x0005aafc) main_image3_pane_t2

0x7bb8,	// (0x0005ab1b) main_image3_pane_t3_ParamLimits

0x7bb8,	// (0x0005ab1b) main_image3_pane_t3

0x0003,

0xf7bf,	// (0x00062722) main_image3_pane_t_ParamLimits

0xf7bf,	// (0x00062722) main_image3_pane_t

0xc41a,	// (0x0005f37d) grid_sctrl_middle_pane_cp01_ParamLimits

0xc41a,	// (0x0005f37d) grid_sctrl_middle_pane_cp01

0x7c19,	// (0x0005ab7c) cell_sctrl_middle_pane_cp01_ParamLimits

0x7c19,	// (0x0005ab7c) cell_sctrl_middle_pane_cp01

0x7c2a,	// (0x0005ab8d) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x7c2a,	// (0x0005ab8d) cell_sctrl_middle_pane_cp01_g1

0x3685,	// (0x000565e8) main_call4_pane

0x7c37,	// (0x0005ab9a) aid_size_button_call4_ParamLimits

0x7c37,	// (0x0005ab9a) aid_size_button_call4

0x7c6d,	// (0x0005abd0) call4_windows_pane_ParamLimits

0x7c6d,	// (0x0005abd0) call4_windows_pane

0x7c82,	// (0x0005abe5) grid_call4_button_pane_ParamLimits

0x7c82,	// (0x0005abe5) grid_call4_button_pane

0x7cb2,	// (0x0005ac15) call4_windows_conf_pane

0x7ccb,	// (0x0005ac2e) popup_call4_audio_first_window_ParamLimits

0x7ccb,	// (0x0005ac2e) popup_call4_audio_first_window

0x7d1b,	// (0x0005ac7e) popup_call4_audio_second_window_ParamLimits

0x7d1b,	// (0x0005ac7e) popup_call4_audio_second_window

0x7d34,	// (0x0005ac97) popup_call4_audio_wait_window_ParamLimits

0x7d34,	// (0x0005ac97) popup_call4_audio_wait_window

0x7d42,	// (0x0005aca5) cell_call4_button_pane_ParamLimits

0x7d42,	// (0x0005aca5) cell_call4_button_pane

0x7d65,	// (0x0005acc8) bg_button_pane_cp09_ParamLimits

0x7d65,	// (0x0005acc8) bg_button_pane_cp09

0x7d71,	// (0x0005acd4) cell_call4_button_pane_g1_ParamLimits

0x7d71,	// (0x0005acd4) cell_call4_button_pane_g1

0x7d7e,	// (0x0005ace1) cell_call4_button_pane_t1_ParamLimits

0x7d7e,	// (0x0005ace1) cell_call4_button_pane_t1

0x06a4,	// (0x00053607) popup_call4_audio_conf_window_ParamLimits

0x06a4,	// (0x00053607) popup_call4_audio_conf_window

0x71e0,	// (0x0005a143) mup3_progress_pane_t1_ParamLimits

0x71f6,	// (0x0005a159) mup3_progress_pane_t2_ParamLimits

0xeba7,	// (0x00061b0a) mup3_progress_pane_t3_ParamLimits

0xf69e,	// (0x00062601) mup3_progress_pane_t_ParamLimits

0xebbe,	// (0x00061b21) mup_progress_pane_cp03_ParamLimits

0xebd7,	// (0x00061b3a) mup3_control_keys_pane_g4_copy1

0x7a68,	// (0x0005a9cb) mp4_rocker2_pane_ParamLimits

0x7a68,	// (0x0005a9cb) mp4_rocker2_pane

0xeec7,	// (0x00061e2a) mp4_rocker2_pane_g1

0xeec7,	// (0x00061e2a) mp4_rocker2_pane_g2

0xeec7,	// (0x00061e2a) mp4_rocker2_pane_g3

0xeec7,	// (0x00061e2a) mp4_rocker2_pane_g4

0xeec7,	// (0x00061e2a) mp4_rocker2_pane_g5

0x0004,

0xf7c8,	// (0x0006272b) mp4_rocker2_pane_g

0x3685,	// (0x000565e8) main_camera4_pane

0x3685,	// (0x000565e8) main_video4_pane

0x76e9,	// (0x0005a64c) main_video_tele_dialer_pane_t1_ParamLimits

0x76e9,	// (0x0005a64c) main_video_tele_dialer_pane_t1

0x76fb,	// (0x0005a65e) main_video_tele_dialer_pane_t2_ParamLimits

0x76fb,	// (0x0005a65e) main_video_tele_dialer_pane_t2

0x0001,

0xf77e,	// (0x000626e1) main_video_tele_dialer_pane_t_ParamLimits

0xf77e,	// (0x000626e1) main_video_tele_dialer_pane_t

0x7dda,	// (0x0005ad3d) cam4_autofocus_pane_ParamLimits

0x7dda,	// (0x0005ad3d) cam4_autofocus_pane

0x7df2,	// (0x0005ad55) cam4_image_uncrop_pane_ParamLimits

0x7df2,	// (0x0005ad55) cam4_image_uncrop_pane

0x7e0b,	// (0x0005ad6e) cam4_indicators_pane_ParamLimits

0x7e0b,	// (0x0005ad6e) cam4_indicators_pane

0x7e27,	// (0x0005ad8a) main_camera4_pane_g1_ParamLimits

0x7e27,	// (0x0005ad8a) main_camera4_pane_g1

0x7e33,	// (0x0005ad96) main_camera4_pane_g2_ParamLimits

0x7e33,	// (0x0005ad96) main_camera4_pane_g2

0x7e33,	// (0x0005ad96) main_camera4_pane_g3_ParamLimits

0x7e33,	// (0x0005ad96) main_camera4_pane_g3

0x7e3f,	// (0x0005ada2) main_camera4_pane_g4_ParamLimits

0x7e3f,	// (0x0005ada2) main_camera4_pane_g4

0x7e4b,	// (0x0005adae) main_camera4_pane_g5_ParamLimits

0x7e4b,	// (0x0005adae) main_camera4_pane_g5

0x0005,

0xf7d3,	// (0x00062736) main_camera4_pane_g_ParamLimits

0xf7d3,	// (0x00062736) main_camera4_pane_g

0x7e65,	// (0x0005adc8) main_camera4_pane_t1_ParamLimits

0x7e65,	// (0x0005adc8) main_camera4_pane_t1

0x17a0,	// (0x00054703) bg_tb_trans_pane_cp06

0x7eb7,	// (0x0005ae1a) cam4_indicators_pane_g1

0x7ec8,	// (0x0005ae2b) cam4_indicators_pane_g2

0x0002,

0xf7ee,	// (0x00062751) cam4_indicators_pane_g

0x7ee0,	// (0x0005ae43) cam4_indicators_pane_t1

0x7f0a,	// (0x0005ae6d) main_video4_pane_g1_ParamLimits

0x7f0a,	// (0x0005ae6d) main_video4_pane_g1

0x7f16,	// (0x0005ae79) main_video4_pane_g2_ParamLimits

0x7f16,	// (0x0005ae79) main_video4_pane_g2

0x7f22,	// (0x0005ae85) main_video4_pane_g3_ParamLimits

0x7f22,	// (0x0005ae85) main_video4_pane_g3

0x7f2e,	// (0x0005ae91) main_video4_pane_g4_ParamLimits

0x7f2e,	// (0x0005ae91) main_video4_pane_g4

0x0004,

0xf7f5,	// (0x00062758) main_video4_pane_g_ParamLimits

0xf7f5,	// (0x00062758) main_video4_pane_g

0x7f50,	// (0x0005aeb3) vid4_indicators_pane_ParamLimits

0x7f50,	// (0x0005aeb3) vid4_indicators_pane

0x7f6f,	// (0x0005aed2) video4_image_uncrop_cif_pane_ParamLimits

0x7f6f,	// (0x0005aed2) video4_image_uncrop_cif_pane

0x7f7e,	// (0x0005aee1) video4_image_uncrop_nhd_pane_ParamLimits

0x7f7e,	// (0x0005aee1) video4_image_uncrop_nhd_pane

0x7df2,	// (0x0005ad55) video4_image_uncrop_vga_pane_ParamLimits

0x7df2,	// (0x0005ad55) video4_image_uncrop_vga_pane

0x64dd,	// (0x00059440) bg_tb_trans_pane_cp07

0x7f97,	// (0x0005aefa) vid4_indicators_pane_g1

0x7fad,	// (0x0005af10) vid4_indicators_pane_g2

0x7fc1,	// (0x0005af24) vid4_indicators_pane_g3

0x0004,

0xf800,	// (0x00062763) vid4_indicators_pane_g

0x7ff2,	// (0x0005af55) vid4_indicators_pane_t1

0x8009,	// (0x0005af6c) cam4_autofocus_pane_g1

0x8011,	// (0x0005af74) cam4_autofocus_pane_g2

0x8019,	// (0x0005af7c) cam4_autofocus_pane_g3

0x0002,

0xf80b,	// (0x0006276e) cam4_autofocus_pane_g

0x8021,	// (0x0005af84) cam4_autofocus_pane_g3_copy1

0x771b,	// (0x0005a67e) video_down_pane_cp_t1

0x7729,	// (0x0005a68c) video_down_pane_cp_t2

0x0001,

0xf783,	// (0x000626e6) video_down_pane_cp_t

0x366b,	// (0x000565ce) popup_vitu2_window_ParamLimits

0x366b,	// (0x000565ce) popup_vitu2_window

0x8029,	// (0x0005af8c) aid_size_cell2_itu2_ParamLimits

0x8029,	// (0x0005af8c) aid_size_cell2_itu2

0x804b,	// (0x0005afae) aid_size_cell_itu2_ParamLimits

0x804b,	// (0x0005afae) aid_size_cell_itu2

0x808f,	// (0x0005aff2) bg_popup_window_pane_cp09_ParamLimits

0x808f,	// (0x0005aff2) bg_popup_window_pane_cp09

0x809d,	// (0x0005b000) field_vitu2_entry_pane_ParamLimits

0x809d,	// (0x0005b000) field_vitu2_entry_pane

0x80bd,	// (0x0005b020) grid_vitu2_function_pane_ParamLimits

0x80bd,	// (0x0005b020) grid_vitu2_function_pane

0x8101,	// (0x0005b064) grid_vitu2_itu_pane_ParamLimits

0x8101,	// (0x0005b064) grid_vitu2_itu_pane

0x8177,	// (0x0005b0da) cell_vitu2_itu_pane_ParamLimits

0x8177,	// (0x0005b0da) cell_vitu2_itu_pane

0x8192,	// (0x0005b0f5) cell_vitu2_function_pane_ParamLimits

0x8192,	// (0x0005b0f5) cell_vitu2_function_pane

0x06be,	// (0x00053621) bg_popup_call_pane_cp08_ParamLimits

0x06be,	// (0x00053621) bg_popup_call_pane_cp08

0x06d5,	// (0x00053638) field_vitu2_entry_pane_g1

0x06e1,	// (0x00053644) field_vitu2_entry_pane_g2

0x0002,

0xf812,	// (0x00062775) field_vitu2_entry_pane_g

0x06ed,	// (0x00053650) field_vitu2_entry_pane_t1_ParamLimits

0x06ed,	// (0x00053650) field_vitu2_entry_pane_t1

0x071c,	// (0x0005367f) field_vitu2_entry_pane_t2_ParamLimits

0x071c,	// (0x0005367f) field_vitu2_entry_pane_t2

0x0001,

0xf819,	// (0x0006277c) field_vitu2_entry_pane_t_ParamLimits

0xf819,	// (0x0006277c) field_vitu2_entry_pane_t

0x683d,	// (0x000597a0) bg_button_pane_cp010_ParamLimits

0x683d,	// (0x000597a0) bg_button_pane_cp010

0x81d6,	// (0x0005b139) cell_vitu2_itu_pane_g1

0x81fc,	// (0x0005b15f) cell_vitu2_itu_pane_t1_ParamLimits

0x81fc,	// (0x0005b15f) cell_vitu2_itu_pane_t1

0x8248,	// (0x0005b1ab) cell_vitu2_itu_pane_t2_ParamLimits

0x8248,	// (0x0005b1ab) cell_vitu2_itu_pane_t2

0x0002,

0xf823,	// (0x00062786) cell_vitu2_itu_pane_t_ParamLimits

0xf823,	// (0x00062786) cell_vitu2_itu_pane_t

0x64dd,	// (0x00059440) bg_button_pane_cp011

0x8310,	// (0x0005b273) cell_vitu2_function_pane_g1

0x3685,	// (0x000565e8) main_myfav_hc_pane

0x7bfa,	// (0x0005ab5d) popup_image3_note_pane_ParamLimits

0x7bfa,	// (0x0005ab5d) popup_image3_note_pane

0x7c08,	// (0x0005ab6b) popup_image3_tool_bar_pane_ParamLimits

0x7c08,	// (0x0005ab6b) popup_image3_tool_bar_pane

0x82be,	// (0x0005b221) cell_vitu2_itu_pane_t3_ParamLimits

0x82be,	// (0x0005b221) cell_vitu2_itu_pane_t3

0x1b91,	// (0x00054af4) bg_popup_trans_pane

0x0741,	// (0x000536a4) grid_image3_tool_bar_pane

0x074b,	// (0x000536ae) bg_popup_trans_pane_g1

0xc8cb,	// (0x0005f82e) bg_popup_trans_pane_g2

0x0753,	// (0x000536b6) bg_popup_trans_pane_g3

0x075b,	// (0x000536be) bg_popup_trans_pane_g4

0x0763,	// (0x000536c6) bg_popup_trans_pane_g5

0x076b,	// (0x000536ce) bg_popup_trans_pane_g6

0x0773,	// (0x000536d6) bg_popup_trans_pane_g7

0x077b,	// (0x000536de) bg_popup_trans_pane_g8

0xc8ab,	// (0x0005f80e) bg_popup_trans_pane_g9

0x0008,

0xf82a,	// (0x0006278d) bg_popup_trans_pane_g

0x0783,	// (0x000536e6) cell_image3_tool_bar_pane_ParamLimits

0x0783,	// (0x000536e6) cell_image3_tool_bar_pane

0xc466,	// (0x0005f3c9) cell_image3_tool_bar_pane_g1

0x1b91,	// (0x00054af4) bg_popup_trans_pane_cp1

0x0799,	// (0x000536fc) popup_image3_note_pane_t1

0x07a7,	// (0x0005370a) popup_image3_note_pane_t2

0x07b5,	// (0x00053718) popup_image3_note_pane_t3

0x0002,

0xf83d,	// (0x000627a0) popup_image3_note_pane_t

0x07c5,	// (0x00053728) popup_image3_note_pane_t3_copy1

0x8324,	// (0x0005b287) bg_myfav_hc_instruction_pane_ParamLimits

0x8324,	// (0x0005b287) bg_myfav_hc_instruction_pane

0x833c,	// (0x0005b29f) cell_myfav_contact_pane_ParamLimits

0x833c,	// (0x0005b29f) cell_myfav_contact_pane

0x8356,	// (0x0005b2b9) cell_myfav_contact_pane_cp1_ParamLimits

0x8356,	// (0x0005b2b9) cell_myfav_contact_pane_cp1

0x836e,	// (0x0005b2d1) cell_myfav_contact_pane_cp2_ParamLimits

0x836e,	// (0x0005b2d1) cell_myfav_contact_pane_cp2

0x8386,	// (0x0005b2e9) cell_myfav_contact_pane_cp3_ParamLimits

0x8386,	// (0x0005b2e9) cell_myfav_contact_pane_cp3

0x839d,	// (0x0005b300) cell_myfav_contact_pane_cp4_ParamLimits

0x839d,	// (0x0005b300) cell_myfav_contact_pane_cp4

0x83b3,	// (0x0005b316) cell_myfav_contact_pane_cp5_ParamLimits

0x83b3,	// (0x0005b316) cell_myfav_contact_pane_cp5

0x83c7,	// (0x0005b32a) cell_myfav_contact_pane_cp6_ParamLimits

0x83c7,	// (0x0005b32a) cell_myfav_contact_pane_cp6

0x83db,	// (0x0005b33e) cell_myfav_contact_pane_cp7_ParamLimits

0x83db,	// (0x0005b33e) cell_myfav_contact_pane_cp7

0x07d3,	// (0x00053736) listscroll_gen_pane_cp05

0x83f3,	// (0x0005b356) main_myfav_hc_pane_g1_ParamLimits

0x83f3,	// (0x0005b356) main_myfav_hc_pane_g1

0x840d,	// (0x0005b370) main_myfav_hc_pane_g2_ParamLimits

0x840d,	// (0x0005b370) main_myfav_hc_pane_g2

0x0002,

0xf844,	// (0x000627a7) main_myfav_hc_pane_g_ParamLimits

0xf844,	// (0x000627a7) main_myfav_hc_pane_g

0x843f,	// (0x0005b3a2) main_myfav_hc_pane_t1_ParamLimits

0x843f,	// (0x0005b3a2) main_myfav_hc_pane_t1

0x07dc,	// (0x0005373f) main_myfav_hc_pane_t2_ParamLimits

0x07dc,	// (0x0005373f) main_myfav_hc_pane_t2

0x07ee,	// (0x00053751) main_myfav_hc_pane_t3_ParamLimits

0x07ee,	// (0x00053751) main_myfav_hc_pane_t3

0x8456,	// (0x0005b3b9) main_myfav_hc_pane_t4_ParamLimits

0x8456,	// (0x0005b3b9) main_myfav_hc_pane_t4

0x0004,

0xf84b,	// (0x000627ae) main_myfav_hc_pane_t_ParamLimits

0xf84b,	// (0x000627ae) main_myfav_hc_pane_t

0xc466,	// (0x0005f3c9) bg_myfav_hc_instruction_pane_g1

0x0800,	// (0x00053763) cell_myfav_contact_pane_g1_ParamLimits

0x0800,	// (0x00053763) cell_myfav_contact_pane_g1

0x0800,	// (0x00053763) cell_myfav_contact_pane_g2_ParamLimits

0x0800,	// (0x00053763) cell_myfav_contact_pane_g2

0x080c,	// (0x0005376f) cell_myfav_contact_pane_g3_ParamLimits

0x080c,	// (0x0005376f) cell_myfav_contact_pane_g3

0xc436,	// (0x0005f399) cell_myfav_contact_pane_g4_ParamLimits

0xc436,	// (0x0005f399) cell_myfav_contact_pane_g4

0x0819,	// (0x0005377c) cell_myfav_contact_pane_g5_ParamLimits

0x0819,	// (0x0005377c) cell_myfav_contact_pane_g5

0x0004,

0xf856,	// (0x000627b9) cell_myfav_contact_pane_g_ParamLimits

0xf856,	// (0x000627b9) cell_myfav_contact_pane_g

0x8427,	// (0x0005b38a) main_myfav_hc_pane_g3_ParamLimits

0x8427,	// (0x0005b38a) main_myfav_hc_pane_g3

0x339e,	// (0x00056301) popup_adpt_find_window

0x8480,	// (0x0005b3e3) afind_page_pane_ParamLimits

0x8480,	// (0x0005b3e3) afind_page_pane

0x848d,	// (0x0005b3f0) aid_size_cell_afind_ParamLimits

0x848d,	// (0x0005b3f0) aid_size_cell_afind

0x84a7,	// (0x0005b40a) bg_popup_sub_pane_cp09_ParamLimits

0x84a7,	// (0x0005b40a) bg_popup_sub_pane_cp09

0x84b8,	// (0x0005b41b) find_pane_cp01_ParamLimits

0x84b8,	// (0x0005b41b) find_pane_cp01

0x0825,	// (0x00053788) grid_afind_control_pane_ParamLimits

0x0825,	// (0x00053788) grid_afind_control_pane

0x84cb,	// (0x0005b42e) grid_afind_pane_ParamLimits

0x84cb,	// (0x0005b42e) grid_afind_pane

0x84e7,	// (0x0005b44a) cell_afind_pane_ParamLimits

0x84e7,	// (0x0005b44a) cell_afind_pane

0xc466,	// (0x0005f3c9) afind_page_pane_g1

0x852f,	// (0x0005b492) afind_page_pane_g2

0x8537,	// (0x0005b49a) afind_page_pane_g3

0x0002,

0xf861,	// (0x000627c4) afind_page_pane_g

0x853f,	// (0x0005b4a2) afind_page_pane_t1

0x084b,	// (0x000537ae) cell_afind_grid_control_pane_ParamLimits

0x084b,	// (0x000537ae) cell_afind_grid_control_pane

0x085a,	// (0x000537bd) bg_button_pane_cp69_ParamLimits

0x085a,	// (0x000537bd) bg_button_pane_cp69

0x854d,	// (0x0005b4b0) cell_afind_pane_g1_ParamLimits

0x854d,	// (0x0005b4b0) cell_afind_pane_g1

0x855a,	// (0x0005b4bd) cell_afind_pane_t1_ParamLimits

0x855a,	// (0x0005b4bd) cell_afind_pane_t1

0x0866,	// (0x000537c9) bg_button_pane_cp72

0x086e,	// (0x000537d1) cell_afind_grid_control_pane_g1

0x6089,	// (0x00058fec) aid_image_placing_area_ParamLimits

0x6089,	// (0x00058fec) aid_image_placing_area

0xc428,	// (0x0005f38b) field_vitu_entry_pane_g1_ParamLimits

0xc428,	// (0x0005f38b) field_vitu_entry_pane_g1

0xc428,	// (0x0005f38b) field_vitu_entry_pane_g2_ParamLimits

0xc428,	// (0x0005f38b) field_vitu_entry_pane_g2

0x0001,

0xf199,	// (0x000620fc) field_vitu_entry_pane_g_ParamLimits

0xf199,	// (0x000620fc) field_vitu_entry_pane_g

0xeed7,	// (0x00061e3a) cell_vitu_itu_pane_g1_ParamLimits

0xee30,	// (0x00061d93) cell_vitu_itu_pane_t3_ParamLimits

0xee30,	// (0x00061d93) cell_vitu_itu_pane_t3

0x061e,	// (0x00053581) mp4_progress_pane_t1_ParamLimits

0x063c,	// (0x0005359f) mp4_progress_pane_t2_ParamLimits

0xf7a7,	// (0x0006270a) mp4_progress_pane_t_ParamLimits

0x065b,	// (0x000535be) mup_progress_pane_cp04_ParamLimits

0x846a,	// (0x0005b3cd) main_myfav_hc_pane_t5_ParamLimits

0x846a,	// (0x0005b3cd) main_myfav_hc_pane_t5

0x349a,	// (0x000563fd) aid_zoom_text_primary

0x339e,	// (0x00056301) popup_adpt_find_window_ParamLimits

0x64dd,	// (0x00059440) main_cam_set_pane

0x7e19,	// (0x0005ad7c) cam4_zoom_pane_ParamLimits

0x7e19,	// (0x0005ad7c) cam4_zoom_pane

0x856c,	// (0x0005b4cf) main_cam_set_pane_g1_ParamLimits

0x856c,	// (0x0005b4cf) main_cam_set_pane_g1

0x857a,	// (0x0005b4dd) main_cam_set_pane_g2_ParamLimits

0x857a,	// (0x0005b4dd) main_cam_set_pane_g2

0x0001,

0xf868,	// (0x000627cb) main_cam_set_pane_g_ParamLimits

0xf868,	// (0x000627cb) main_cam_set_pane_g

0x8586,	// (0x0005b4e9) main_cam_set_pane_t1_ParamLimits

0x8586,	// (0x0005b4e9) main_cam_set_pane_t1

0x85a2,	// (0x0005b505) main_cset_listscroll_pane_ParamLimits

0x85a2,	// (0x0005b505) main_cset_listscroll_pane

0x85d6,	// (0x0005b539) main_cset_slider_pane_ParamLimits

0x85d6,	// (0x0005b539) main_cset_slider_pane

0x087f,	// (0x000537e2) main_cset_list_pane_ParamLimits

0x087f,	// (0x000537e2) main_cset_list_pane

0x088f,	// (0x000537f2) scroll_pane_cp028

0x85f7,	// (0x0005b55a) aid_area_touch_slider

0x8613,	// (0x0005b576) cset_slider_pane

0x8636,	// (0x0005b599) main_cset_slider_pane_g1

0x864b,	// (0x0005b5ae) main_cset_slider_pane_g2

0x0011,

0xf86d,	// (0x000627d0) main_cset_slider_pane_g

0x08c8,	// (0x0005382b) main_cset_slider_pane_t1

0x8707,	// (0x0005b66a) main_cset_slider_pane_t2

0x8721,	// (0x0005b684) main_cset_slider_pane_t3

0x873b,	// (0x0005b69e) main_cset_slider_pane_t4

0x8755,	// (0x0005b6b8) main_cset_slider_pane_t5

0x876f,	// (0x0005b6d2) main_cset_slider_pane_t6

0x8784,	// (0x0005b6e7) main_cset_slider_pane_t7

0x000e,

0xf892,	// (0x000627f5) main_cset_slider_pane_t

0x8888,	// (0x0005b7eb) cset_list_set_pane_ParamLimits

0x8888,	// (0x0005b7eb) cset_list_set_pane

0x0962,	// (0x000538c5) aid_position_infowindow_above

0x096a,	// (0x000538cd) aid_position_infowindow_below

0x8899,	// (0x0005b7fc) cset_list_set_pane_g1_ParamLimits

0x8899,	// (0x0005b7fc) cset_list_set_pane_g1

0x88a5,	// (0x0005b808) cset_list_set_pane_g3_ParamLimits

0x88a5,	// (0x0005b808) cset_list_set_pane_g3

0x0001,

0xf8b1,	// (0x00062814) cset_list_set_pane_g_ParamLimits

0xf8b1,	// (0x00062814) cset_list_set_pane_g

0x88b4,	// (0x0005b817) cset_list_set_pane_t1_ParamLimits

0x88b4,	// (0x0005b817) cset_list_set_pane_t1

0x39af,	// (0x00056912) list_highlight_pane_cp021_ParamLimits

0x39af,	// (0x00056912) list_highlight_pane_cp021

0xd2d2,	// (0x00060235) cset_slider_pane_g1

0xd2e4,	// (0x00060247) cset_slider_pane_g2

0xd2db,	// (0x0006023e) cset_slider_pane_g3

0x0002,

0xf8b6,	// (0x00062819) cset_slider_pane_g

0xcd5d,	// (0x0005fcc0) aid_area_touch_cam4_zoom

0x88c9,	// (0x0005b82c) cam4_zoom_cont_pane

0x88d1,	// (0x0005b834) cam4_zoom_pane_g1

0x88d9,	// (0x0005b83c) cam4_zoom_pane_g2

0x88e1,	// (0x0005b844) cam4_zoom_pane_g3

0x0002,

0xf8bd,	// (0x00062820) cam4_zoom_pane_g

0x88e9,	// (0x0005b84c) cam4_zoom_cont_pane_g1

0x88f2,	// (0x0005b855) cam4_zoom_cont_pane_g2

0x88fb,	// (0x0005b85e) cam4_zoom_cont_pane_g3

0x0002,

0xf8c4,	// (0x00062827) cam4_zoom_cont_pane_g

0x7c51,	// (0x0005abb4) call4_image_pane_ParamLimits

0x7c51,	// (0x0005abb4) call4_image_pane

0x7cb2,	// (0x0005ac15) call4_windows_conf_pane_ParamLimits

0x7cf9,	// (0x0005ac5c) popup_call4_audio_in_window_ParamLimits

0x7cf9,	// (0x0005ac5c) popup_call4_audio_in_window

0x1b91,	// (0x00054af4) bg_popup_call2_act_pane_cp02

0x069c,	// (0x000535ff) call4_list_conf_pane

0xc466,	// (0x0005f3c9) call4_image_pane_g1

0xc466,	// (0x0005f3c9) call4_image_pane_g2

0x0001,

0xf08c,	// (0x00061fef) call4_image_pane_g

0x0996,	// (0x000538f9) list_single_graphic_popup_conf4_pane_ParamLimits

0x0996,	// (0x000538f9) list_single_graphic_popup_conf4_pane

0x1b91,	// (0x00054af4) list_highlight_pane_cp022

0x09ab,	// (0x0005390e) list_single_graphic_popup_conf4_pane_g1

0xcdd9,	// (0x0005fd3c) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf8cb,	// (0x0006282e) list_single_graphic_popup_conf4_pane_g

0x09b3,	// (0x00053916) list_single_graphic_popup_conf4_pane_t1

0x460d,	// (0x00057570) popup_vtel_slider_window_ParamLimits

0x460d,	// (0x00057570) popup_vtel_slider_window

0x066e,	// (0x000535d1) dialer2_ne_pane_t2_ParamLimits

0x066e,	// (0x000535d1) dialer2_ne_pane_t2

0x0001,

0xf7ac,	// (0x0006270f) dialer2_ne_pane_t_ParamLimits

0xf7ac,	// (0x0006270f) dialer2_ne_pane_t

0x39af,	// (0x00056912) bg_popup_sub_pane_cp010_ParamLimits

0x39af,	// (0x00056912) bg_popup_sub_pane_cp010

0x8904,	// (0x0005b867) popup_vtel_slider_window_g1_ParamLimits

0x8904,	// (0x0005b867) popup_vtel_slider_window_g1

0x8910,	// (0x0005b873) popup_vtel_slider_window_g2_ParamLimits

0x8910,	// (0x0005b873) popup_vtel_slider_window_g2

0x0003,

0xf8d0,	// (0x00062833) popup_vtel_slider_window_g_ParamLimits

0xf8d0,	// (0x00062833) popup_vtel_slider_window_g

0x8958,	// (0x0005b8bb) vtel_slider_pane_ParamLimits

0x8958,	// (0x0005b8bb) vtel_slider_pane

0x8967,	// (0x0005b8ca) vtel_slider_pane_g1_ParamLimits

0x8967,	// (0x0005b8ca) vtel_slider_pane_g1

0x8974,	// (0x0005b8d7) vtel_slider_pane_g2_ParamLimits

0x8974,	// (0x0005b8d7) vtel_slider_pane_g2

0x8981,	// (0x0005b8e4) vtel_slider_pane_g3_ParamLimits

0x8981,	// (0x0005b8e4) vtel_slider_pane_g3

0x8967,	// (0x0005b8ca) vtel_slider_pane_g4_ParamLimits

0x8967,	// (0x0005b8ca) vtel_slider_pane_g4

0x898e,	// (0x0005b8f1) vtel_slider_pane_g5_ParamLimits

0x898e,	// (0x0005b8f1) vtel_slider_pane_g5

0x0004,

0xf8d9,	// (0x0006283c) vtel_slider_pane_g_ParamLimits

0xf8d9,	// (0x0006283c) vtel_slider_pane_g

0x64dd,	// (0x00059440) main_gallery2_pane

0x8071,	// (0x0005afd4) aid_size_row_itut2_dropdow_list_ParamLimits

0x8071,	// (0x0005afd4) aid_size_row_itut2_dropdow_list

0x80df,	// (0x0005b042) grid_vitu2_function_top_pane_ParamLimits

0x80df,	// (0x0005b042) grid_vitu2_function_top_pane

0x8135,	// (0x0005b098) popup_vitu2_dropdown_list_window_ParamLimits

0x8135,	// (0x0005b098) popup_vitu2_dropdown_list_window

0x8153,	// (0x0005b0b6) popup_vitu2_match_list_window

0x899b,	// (0x0005b8fe) cell_vitu2_function_top_pane_ParamLimits

0x899b,	// (0x0005b8fe) cell_vitu2_function_top_pane

0x89b5,	// (0x0005b918) cell_vitu2_function_top_pane_cp01_ParamLimits

0x89b5,	// (0x0005b918) cell_vitu2_function_top_pane_cp01

0x89d1,	// (0x0005b934) cell_vitu2_function_top_wide_pane_ParamLimits

0x89d1,	// (0x0005b934) cell_vitu2_function_top_wide_pane

0x64dd,	// (0x00059440) bg_button_pane_cp012

0x89ef,	// (0x0005b952) cell_vitu2_function_top_pane_g1

0x8a03,	// (0x0005b966) bg_button_pane_cp013_ParamLimits

0x8a03,	// (0x0005b966) bg_button_pane_cp013

0x8a1f,	// (0x0005b982) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x8a1f,	// (0x0005b982) cell_vitu2_function_top_wide_pane_g1

0x366b,	// (0x000565ce) bg_popup_sub_pane_cp20

0x8a37,	// (0x0005b99a) list_vitu2_match_list_pane

0x074b,	// (0x000536ae) bg_popup_sub_pane_cp20_g1

0x0753,	// (0x000536b6) bg_popup_sub_pane_cp20_g2

0xc8cb,	// (0x0005f82e) bg_popup_sub_pane_cp20_g3

0x075b,	// (0x000536be) bg_popup_sub_pane_cp20_g4

0xc8ab,	// (0x0005f80e) bg_popup_sub_pane_cp20_g5

0x09c9,	// (0x0005392c) bg_popup_sub_pane_cp20_g6

0x076b,	// (0x000536ce) bg_popup_sub_pane_cp20_g7

0x0773,	// (0x000536d6) bg_popup_sub_pane_cp20_g8

0x077b,	// (0x000536de) bg_popup_sub_pane_cp20_g9

0x0008,

0xf8e4,	// (0x00062847) bg_popup_sub_pane_cp20_g

0x8a4f,	// (0x0005b9b2) list_vitu2_match_list_item_pane_ParamLimits

0x8a4f,	// (0x0005b9b2) list_vitu2_match_list_item_pane

0x8a61,	// (0x0005b9c4) list_vitu2_match_list_item_pane_t1

0x3685,	// (0x000565e8) bg_popup_sub_pane_cp21

0xc6a1,	// (0x0005f604) grid_vitu2_dropdown_list_pane

0x8a6f,	// (0x0005b9d2) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x8a6f,	// (0x0005b9d2) cell_vitu2_dropdown_list_char_pane

0x8a93,	// (0x0005b9f6) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x8a93,	// (0x0005b9f6) cell_vitu2_dropdown_list_ctrl_pane

0x09e3,	// (0x00053946) cell_vitu2_dropdown_list_char_pane_g1

0x09da,	// (0x0005393d) cell_vitu2_dropdown_list_char_pane_g2

0x09d1,	// (0x00053934) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xf8f7,	// (0x0006285a) cell_vitu2_dropdown_list_char_pane_g

0x8abd,	// (0x0005ba20) cell_vitu2_dropdown_list_char_pane_t1

0x8acb,	// (0x0005ba2e) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x8acb,	// (0x0005ba2e) cell_vitu2_dropdown_list_ctrl_pane_g1

0x8adb,	// (0x0005ba3e) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x8adb,	// (0x0005ba3e) cell_vitu2_dropdown_list_ctrl_pane_g2

0x8aec,	// (0x0005ba4f) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x8aec,	// (0x0005ba4f) cell_vitu2_dropdown_list_ctrl_pane_g3

0x8afc,	// (0x0005ba5f) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x8afc,	// (0x0005ba5f) cell_vitu2_dropdown_list_ctrl_pane_g4

0x17a0,	// (0x00054703) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0x17a0,	// (0x00054703) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xf8fe,	// (0x00062861) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xf8fe,	// (0x00062861) cell_vitu2_dropdown_list_ctrl_pane_g

0x8b15,	// (0x0005ba78) aid_size_cell_gallery2_ParamLimits

0x8b15,	// (0x0005ba78) aid_size_cell_gallery2

0x8b2f,	// (0x0005ba92) grid_gallery2_pane_ParamLimits

0x8b2f,	// (0x0005ba92) grid_gallery2_pane

0x8b46,	// (0x0005baa9) scroll_pane_cp029_ParamLimits

0x8b46,	// (0x0005baa9) scroll_pane_cp029

0x8b56,	// (0x0005bab9) cell_gallery2_pane_ParamLimits

0x8b56,	// (0x0005bab9) cell_gallery2_pane

0x09ec,	// (0x0005394f) cell_gallery2_pane_g2

0x8bad,	// (0x0005bb10) cell_gallery2_pane_g3

0x09f4,	// (0x00053957) cell_gallery2_pane_g4

0x09fc,	// (0x0005395f) cell_gallery2_pane_g5

0xc6a1,	// (0x0005f604) grid_highlight_pane_cp10

0x8153,	// (0x0005b0b6) popup_vitu2_match_list_window_ParamLimits

0x8167,	// (0x0005b0ca) popup_vitu2_query_window_ParamLimits

0x8167,	// (0x0005b0ca) popup_vitu2_query_window

0x3685,	// (0x000565e8) bg_vitu2_candi_button_pane

0x09e3,	// (0x00053946) cell_vitu2_dropdown_list_char_pane_g1_copy1

0x09da,	// (0x0005393d) cell_vitu2_dropdown_list_char_pane_g2_copy1

0x09d1,	// (0x00053934) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x8bb5,	// (0x0005bb18) bg_button_pane_cp015

0x8bca,	// (0x0005bb2d) bg_button_pane_cp016

0x8bd6,	// (0x0005bb39) bg_button_pane_cp017

0xd3e9,	// (0x0006034c) bg_popup_sub_pane_cp22

0x0a04,	// (0x00053967) popup_vitu2_query_window_g1

0x8c17,	// (0x0005bb7a) popup_vitu2_query_window_g2

0x0002,

0xf909,	// (0x0006286c) popup_vitu2_query_window_g

0x8c3b,	// (0x0005bb9e) popup_vitu2_query_window_t1_ParamLimits

0x8c3b,	// (0x0005bb9e) popup_vitu2_query_window_t1

0x8c6e,	// (0x0005bbd1) popup_vitu2_query_window_t2_ParamLimits

0x8c6e,	// (0x0005bbd1) popup_vitu2_query_window_t2

0x8c80,	// (0x0005bbe3) popup_vitu2_query_window_t3_ParamLimits

0x8c80,	// (0x0005bbe3) popup_vitu2_query_window_t3

0x8ca8,	// (0x0005bc0b) popup_vitu2_query_window_t4_ParamLimits

0x8ca8,	// (0x0005bc0b) popup_vitu2_query_window_t4

0x8cbc,	// (0x0005bc1f) popup_vitu2_query_window_t5_ParamLimits

0x8cbc,	// (0x0005bc1f) popup_vitu2_query_window_t5

0x0006,

0xf910,	// (0x00062873) popup_vitu2_query_window_t_ParamLimits

0xf910,	// (0x00062873) popup_vitu2_query_window_t

0x0877,	// (0x000537da) main_cset_text_pane

0x85f7,	// (0x0005b55a) aid_area_touch_slider_ParamLimits

0x8613,	// (0x0005b576) cset_slider_pane_ParamLimits

0x8636,	// (0x0005b599) main_cset_slider_pane_g1_ParamLimits

0x864b,	// (0x0005b5ae) main_cset_slider_pane_g2_ParamLimits

0x0898,	// (0x000537fb) main_cset_slider_pane_g3_ParamLimits

0x0898,	// (0x000537fb) main_cset_slider_pane_g3

0x8660,	// (0x0005b5c3) main_cset_slider_pane_g4_ParamLimits

0x8660,	// (0x0005b5c3) main_cset_slider_pane_g4

0x866f,	// (0x0005b5d2) main_cset_slider_pane_g5_ParamLimits

0x866f,	// (0x0005b5d2) main_cset_slider_pane_g5

0x867b,	// (0x0005b5de) main_cset_slider_pane_g6_ParamLimits

0x867b,	// (0x0005b5de) main_cset_slider_pane_g6

0xf86d,	// (0x000627d0) main_cset_slider_pane_g_ParamLimits

0x08c8,	// (0x0005382b) main_cset_slider_pane_t1_ParamLimits

0x8707,	// (0x0005b66a) main_cset_slider_pane_t2_ParamLimits

0x8721,	// (0x0005b684) main_cset_slider_pane_t3_ParamLimits

0x873b,	// (0x0005b69e) main_cset_slider_pane_t4_ParamLimits

0x8755,	// (0x0005b6b8) main_cset_slider_pane_t5_ParamLimits

0x876f,	// (0x0005b6d2) main_cset_slider_pane_t6_ParamLimits

0x8784,	// (0x0005b6e7) main_cset_slider_pane_t7_ParamLimits

0x87ae,	// (0x0005b711) main_cset_slider_pane_t8_ParamLimits

0x87ae,	// (0x0005b711) main_cset_slider_pane_t8

0x87d6,	// (0x0005b739) main_cset_slider_pane_t9_ParamLimits

0x87d6,	// (0x0005b739) main_cset_slider_pane_t9

0x87fe,	// (0x0005b761) main_cset_slider_pane_t10_ParamLimits

0x87fe,	// (0x0005b761) main_cset_slider_pane_t10

0x8826,	// (0x0005b789) main_cset_slider_pane_t11_ParamLimits

0x8826,	// (0x0005b789) main_cset_slider_pane_t11

0x884e,	// (0x0005b7b1) main_cset_slider_pane_t12_ParamLimits

0x884e,	// (0x0005b7b1) main_cset_slider_pane_t12

0x886b,	// (0x0005b7ce) main_cset_slider_pane_t13_ParamLimits

0x886b,	// (0x0005b7ce) main_cset_slider_pane_t13

0xf892,	// (0x000627f5) main_cset_slider_pane_t_ParamLimits

0x1b91,	// (0x00054af4) bg_popup_sub_pane_cp011

0x0a10,	// (0x00053973) main_cset_text_pane_g1

0x0a18,	// (0x0005397b) main_cset_text_pane_t1

0x0a26,	// (0x00053989) main_cset_text_pane_t2

0x0a34,	// (0x00053997) main_cset_text_pane_t3

0x0a42,	// (0x000539a5) main_cset_text_pane_t4

0x0a50,	// (0x000539b3) main_cset_text_pane_t5

0x0a5e,	// (0x000539c1) main_cset_text_pane_t6

0x0a6c,	// (0x000539cf) main_cset_text_pane_t7

0x0006,

0xf91f,	// (0x00062882) main_cset_text_pane_t

0x3685,	// (0x000565e8) main_cam4_burst_pane

0x3685,	// (0x000565e8) main_cam5_pane

0x0839,	// (0x0005379c) bg_button_pane_cp019

0x0842,	// (0x000537a5) bg_button_pane_cp020

0x08a4,	// (0x00053807) main_cset_slider_pane_g7_ParamLimits

0x08a4,	// (0x00053807) main_cset_slider_pane_g7

0x08b0,	// (0x00053813) main_cset_slider_pane_g8_ParamLimits

0x08b0,	// (0x00053813) main_cset_slider_pane_g8

0x868f,	// (0x0005b5f2) main_cset_slider_pane_g9_ParamLimits

0x868f,	// (0x0005b5f2) main_cset_slider_pane_g9

0x869b,	// (0x0005b5fe) main_cset_slider_pane_g10_ParamLimits

0x869b,	// (0x0005b5fe) main_cset_slider_pane_g10

0x86a7,	// (0x0005b60a) main_cset_slider_pane_g11_ParamLimits

0x86a7,	// (0x0005b60a) main_cset_slider_pane_g11

0x86b3,	// (0x0005b616) main_cset_slider_pane_g12_ParamLimits

0x86b3,	// (0x0005b616) main_cset_slider_pane_g12

0x86bf,	// (0x0005b622) main_cset_slider_pane_g13_ParamLimits

0x86bf,	// (0x0005b622) main_cset_slider_pane_g13

0x86cb,	// (0x0005b62e) main_cset_slider_pane_g14_ParamLimits

0x86cb,	// (0x0005b62e) main_cset_slider_pane_g14

0x86d7,	// (0x0005b63a) main_cset_slider_pane_g15_ParamLimits

0x86d7,	// (0x0005b63a) main_cset_slider_pane_g15

0x08f0,	// (0x00053853) main_cset_slider_pane_t14_ParamLimits

0x08f0,	// (0x00053853) main_cset_slider_pane_t14

0x0929,	// (0x0005388c) main_cset_slider_pane_t15_ParamLimits

0x0929,	// (0x0005388c) main_cset_slider_pane_t15

0x8d26,	// (0x0005bc89) aid_cam4_burst_size_cell_ParamLimits

0x8d26,	// (0x0005bc89) aid_cam4_burst_size_cell

0x8d42,	// (0x0005bca5) grid_cam4_burst_pane_ParamLimits

0x8d42,	// (0x0005bca5) grid_cam4_burst_pane

0x8d74,	// (0x0005bcd7) linegrid_cam4_burst_pane_ParamLimits

0x8d74,	// (0x0005bcd7) linegrid_cam4_burst_pane

0x8d92,	// (0x0005bcf5) scroll_pane_cp30_ParamLimits

0x8d92,	// (0x0005bcf5) scroll_pane_cp30

0x8d9e,	// (0x0005bd01) cell_cam4_burst_pane_ParamLimits

0x8d9e,	// (0x0005bd01) cell_cam4_burst_pane

0x0a7a,	// (0x000539dd) linegrid_cam4_burst_pane_g1_ParamLimits

0x0a7a,	// (0x000539dd) linegrid_cam4_burst_pane_g1

0x8dde,	// (0x0005bd41) linegrid_cam4_burst_pane_g2_ParamLimits

0x8dde,	// (0x0005bd41) linegrid_cam4_burst_pane_g2

0x0a87,	// (0x000539ea) linegrid_cam4_burst_pane_g3_ParamLimits

0x0a87,	// (0x000539ea) linegrid_cam4_burst_pane_g3

0x0002,

0xf92e,	// (0x00062891) linegrid_cam4_burst_pane_g_ParamLimits

0xf92e,	// (0x00062891) linegrid_cam4_burst_pane_g

0x8def,	// (0x0005bd52) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x8def,	// (0x0005bd52) linegrid_cam4_burst_pane_g3_copy1

0x0a94,	// (0x000539f7) linegrid_cam4_burst_pane_g4_ParamLimits

0x0a94,	// (0x000539f7) linegrid_cam4_burst_pane_g4

0x8e09,	// (0x0005bd6c) linegrid_cam4_burst_pane_g5_ParamLimits

0x8e09,	// (0x0005bd6c) linegrid_cam4_burst_pane_g5

0x8e1a,	// (0x0005bd7d) linegrid_cam4_burst_pane_g6_ParamLimits

0x8e1a,	// (0x0005bd7d) linegrid_cam4_burst_pane_g6

0x0aa1,	// (0x00053a04) linegrid_cam4_burst_pane_g7_ParamLimits

0x0aa1,	// (0x00053a04) linegrid_cam4_burst_pane_g7

0x8e31,	// (0x0005bd94) cell_cam4_burst_pane_g1

0x0aba,	// (0x00053a1d) main_cam5_pane_t1_ParamLimits

0x0aba,	// (0x00053a1d) main_cam5_pane_t1

0x0acc,	// (0x00053a2f) main_cam5_pane_t2_ParamLimits

0x0acc,	// (0x00053a2f) main_cam5_pane_t2

0x0ade,	// (0x00053a41) main_cam5_pane_t3_ParamLimits

0x0ade,	// (0x00053a41) main_cam5_pane_t3

0x0af0,	// (0x00053a53) main_cam5_pane_t4_ParamLimits

0x0af0,	// (0x00053a53) main_cam5_pane_t4

0x0b08,	// (0x00053a6b) main_cam5_pane_t5_ParamLimits

0x0b08,	// (0x00053a6b) main_cam5_pane_t5

0x0b1c,	// (0x00053a7f) main_cam5_pane_t6_ParamLimits

0x0b1c,	// (0x00053a7f) main_cam5_pane_t6

0x0b30,	// (0x00053a93) main_cam5_pane_t7_ParamLimits

0x0b30,	// (0x00053a93) main_cam5_pane_t7

0x0b42,	// (0x00053aa5) main_cam5_pane_t8_ParamLimits

0x0b42,	// (0x00053aa5) main_cam5_pane_t8

0x0b60,	// (0x00053ac3) main_cam5_pane_t9_ParamLimits

0x0b60,	// (0x00053ac3) main_cam5_pane_t9

0x0b72,	// (0x00053ad5) main_cam5_pane_t10_ParamLimits

0x0b72,	// (0x00053ad5) main_cam5_pane_t10

0x0b84,	// (0x00053ae7) main_cam5_pane_t11_ParamLimits

0x0b84,	// (0x00053ae7) main_cam5_pane_t11

0x0b98,	// (0x00053afb) main_cam5_pane_t12_ParamLimits

0x0b98,	// (0x00053afb) main_cam5_pane_t12

0x0baf,	// (0x00053b12) main_cam5_pane_t13_ParamLimits

0x0baf,	// (0x00053b12) main_cam5_pane_t13

0x000c,

0xf93a,	// (0x0006289d) main_cam5_pane_t_ParamLimits

0xf93a,	// (0x0006289d) main_cam5_pane_t

0x362a,	// (0x0005658d) popup_scut_keymap_window_ParamLimits

0x362a,	// (0x0005658d) popup_scut_keymap_window

0x8e44,	// (0x0005bda7) aid_size_cell_brow_shortcut

0xc6a1,	// (0x0005f604) bg_popup_window_pane_cp010

0x8e50,	// (0x0005bdb3) grid_scut_pane

0x8e5c,	// (0x0005bdbf) cell_scut_pane_ParamLimits

0x8e5c,	// (0x0005bdbf) cell_scut_pane

0x8e77,	// (0x0005bdda) cell_scut_pane_g1

0x0bd2,	// (0x00053b35) cell_scut_pane_t1

0x0be1,	// (0x00053b44) cell_scut_pane_t2

0x8e80,	// (0x0005bde3) cell_scut_pane_t3

0x0002,

0xf955,	// (0x000628b8) cell_scut_pane_t

0x6dde,	// (0x00059d41) main_mup3_pane_g8_ParamLimits

0x6dde,	// (0x00059d41) main_mup3_pane_g8

0x807f,	// (0x0005afe2) area_vitu2_query_pane_ParamLimits

0x807f,	// (0x0005afe2) area_vitu2_query_pane

0x8be2,	// (0x0005bb45) input_focus_pane_cp08

0x0bf0,	// (0x00053b53) area_vitu2_query_pane_g1

0x8e8e,	// (0x0005bdf1) area_vitu2_query_pane_g2

0x0001,

0xf95c,	// (0x000628bf) area_vitu2_query_pane_g

0x8e9f,	// (0x0005be02) area_vitu2_query_pane_t1_ParamLimits

0x8e9f,	// (0x0005be02) area_vitu2_query_pane_t1

0x8eb3,	// (0x0005be16) area_vitu2_query_pane_t2_ParamLimits

0x8eb3,	// (0x0005be16) area_vitu2_query_pane_t2

0x8ec7,	// (0x0005be2a) area_vitu2_query_pane_t3_ParamLimits

0x8ec7,	// (0x0005be2a) area_vitu2_query_pane_t3

0x0bfc,	// (0x00053b5f) area_vitu2_query_pane_t4_ParamLimits

0x0bfc,	// (0x00053b5f) area_vitu2_query_pane_t4

0x0c24,	// (0x00053b87) area_vitu2_query_pane_t5_ParamLimits

0x0c24,	// (0x00053b87) area_vitu2_query_pane_t5

0x0c4c,	// (0x00053baf) area_vitu2_query_pane_t6_ParamLimits

0x0c4c,	// (0x00053baf) area_vitu2_query_pane_t6

0x0006,

0xf961,	// (0x000628c4) area_vitu2_query_pane_t_ParamLimits

0xf961,	// (0x000628c4) area_vitu2_query_pane_t

0x8bca,	// (0x0005bb2d) bg_button_pane_cp018

0x8eef,	// (0x0005be52) bg_button_pane_cp021

0x8efb,	// (0x0005be5e) bg_button_pane_cp022

0x8f1e,	// (0x0005be81) input_focus_pane_cp09

0x5952,	// (0x000588b5) aid_size_touch_mv_arrow_left

0x597d,	// (0x000588e0) aid_size_touch_mv_arrow_right

0x86ef,	// (0x0005b652) main_cset_slider_pane_g16_ParamLimits

0x86ef,	// (0x0005b652) main_cset_slider_pane_g16

0x86fb,	// (0x0005b65e) main_cset_slider_pane_g17_ParamLimits

0x86fb,	// (0x0005b65e) main_cset_slider_pane_g17

0x8e31,	// (0x0005bd94) cell_cam4_burst_pane_g1_ParamLimits

0x1b91,	// (0x00054af4) compa_mode_pane

0x891c,	// (0x0005b87f) popup_vtel_slider_window_g3_ParamLimits

0x891c,	// (0x0005b87f) popup_vtel_slider_window_g3

0x8930,	// (0x0005b893) popup_vtel_slider_window_g4_ParamLimits

0x8930,	// (0x0005b893) popup_vtel_slider_window_g4

0x8944,	// (0x0005b8a7) popup_vtel_slider_window_t1_ParamLimits

0x8944,	// (0x0005b8a7) popup_vtel_slider_window_t1

0x3685,	// (0x000565e8) main_cl_pane

0x6587,	// (0x000594ea) popup_imed_adjust2_window_ParamLimits

0xd3e9,	// (0x0006034c) bg_tb_trans_pane_cp05_ParamLimits

0xeddd,	// (0x00061d40) popup_imed_adjust2_window_g1_ParamLimits

0xedec,	// (0x00061d4f) popup_imed_adjust2_window_g2_ParamLimits

0xedec,	// (0x00061d4f) popup_imed_adjust2_window_g2

0xedf8,	// (0x00061d5b) popup_imed_adjust2_window_g3_ParamLimits

0xedf8,	// (0x00061d5b) popup_imed_adjust2_window_g3

0x0002,

0xf6e1,	// (0x00062644) popup_imed_adjust2_window_g_ParamLimits

0xf6e1,	// (0x00062644) popup_imed_adjust2_window_g

0xee04,	// (0x00061d67) popup_imed_adjust2_window_t1_ParamLimits

0xee1c,	// (0x00061d7f) slider_imed_adjust_pane_ParamLimits

0xee4d,	// (0x00061db0) slider_imed_adjust_pane_g1_ParamLimits

0xee5d,	// (0x00061dc0) slider_imed_adjust_pane_g2_ParamLimits

0xee6d,	// (0x00061dd0) slider_imed_adjust_pane_g3_ParamLimits

0xee7e,	// (0x00061de1) slider_imed_adjust_pane_g4_ParamLimits

0xf6e8,	// (0x0006264b) slider_imed_adjust_pane_g_ParamLimits

0x7dc2,	// (0x0005ad25) aid_touch_area_cam4_ParamLimits

0x7dc2,	// (0x0005ad25) aid_touch_area_cam4

0x7dd2,	// (0x0005ad35) battery_pane_cp01

0x7e59,	// (0x0005adbc) main_camera4_pane_g6_ParamLimits

0x7e59,	// (0x0005adbc) main_camera4_pane_g6

0x7e77,	// (0x0005adda) main_camera4_pane_t2_ParamLimits

0x7e77,	// (0x0005adda) main_camera4_pane_t2

0x0001,

0xf7e0,	// (0x00062743) main_camera4_pane_t_ParamLimits

0xf7e0,	// (0x00062743) main_camera4_pane_t

0x7efa,	// (0x0005ae5d) aid_touch_area_vid4_ParamLimits

0x7efa,	// (0x0005ae5d) aid_touch_area_vid4

0x7f3a,	// (0x0005ae9d) main_video4_pane_g5_ParamLimits

0x7f3a,	// (0x0005ae9d) main_video4_pane_g5

0x7f60,	// (0x0005aec3) vid4_progress_pane_ParamLimits

0x7f60,	// (0x0005aec3) vid4_progress_pane

0x08bc,	// (0x0005381f) main_cset_slider_pane_g18_ParamLimits

0x08bc,	// (0x0005381f) main_cset_slider_pane_g18

0x0aae,	// (0x00053a11) cell_cam4_burst_pane_g2_ParamLimits

0x0aae,	// (0x00053a11) cell_cam4_burst_pane_g2

0x0001,

0xf935,	// (0x00062898) cell_cam4_burst_pane_g_ParamLimits

0xf935,	// (0x00062898) cell_cam4_burst_pane_g

0x8f2f,	// (0x0005be92) bg_cl_pane_ParamLimits

0x8f2f,	// (0x0005be92) bg_cl_pane

0x8f3b,	// (0x0005be9e) cl_header_pane_ParamLimits

0x8f3b,	// (0x0005be9e) cl_header_pane

0x8f47,	// (0x0005beaa) cl_listscroll_pane_ParamLimits

0x8f47,	// (0x0005beaa) cl_listscroll_pane

0x0c98,	// (0x00053bfb) bg_cl_pane_g1

0x0ca0,	// (0x00053c03) bg_cl_pane_g2

0x0ca8,	// (0x00053c0b) bg_cl_pane_g3

0x0cb0,	// (0x00053c13) bg_cl_pane_g4

0x0cb8,	// (0x00053c1b) bg_cl_pane_g5

0x0cc0,	// (0x00053c23) bg_cl_pane_g6

0x0cc8,	// (0x00053c2b) bg_cl_pane_g7

0x0cd0,	// (0x00053c33) bg_cl_pane_g8

0x0cd8,	// (0x00053c3b) bg_cl_pane_g9

0x0008,

0xf970,	// (0x000628d3) bg_cl_pane_g

0x8f53,	// (0x0005beb6) aid_height_cl_leading_ParamLimits

0x8f53,	// (0x0005beb6) aid_height_cl_leading

0x8f5f,	// (0x0005bec2) aid_height_cl_text_ParamLimits

0x8f5f,	// (0x0005bec2) aid_height_cl_text

0xc41a,	// (0x0005f37d) bg_cl_header_pane_ParamLimits

0xc41a,	// (0x0005f37d) bg_cl_header_pane

0x8f77,	// (0x0005beda) cl_header_pane_g1_ParamLimits

0x8f77,	// (0x0005beda) cl_header_pane_g1

0x8f84,	// (0x0005bee7) cl_header_pane_t1_ParamLimits

0x8f84,	// (0x0005bee7) cl_header_pane_t1

0x0ce0,	// (0x00053c43) cl_list_pane

0x088f,	// (0x000537f2) hc_scroll_pane_cp01

0xc8ab,	// (0x0005f80e) bg_cl_header_pane_g1

0x074b,	// (0x000536ae) bg_cl_header_pane_g2

0xc8cb,	// (0x0005f82e) bg_cl_header_pane_g3

0x075b,	// (0x000536be) bg_cl_header_pane_g4

0x0753,	// (0x000536b6) bg_cl_header_pane_g5

0x09c9,	// (0x0005392c) bg_cl_header_pane_g6

0x0773,	// (0x000536d6) bg_cl_header_pane_g7

0x077b,	// (0x000536de) bg_cl_header_pane_g8

0x076b,	// (0x000536ce) bg_cl_header_pane_g9

0x0008,

0xf983,	// (0x000628e6) bg_cl_header_pane_g

0x8f96,	// (0x0005bef9) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x8f96,	// (0x0005bef9) hc_cl_list_double_graphic_heading_pane

0x8fa6,	// (0x0005bf09) hc_cl_list_single_graphic_pane_ParamLimits

0x8fa6,	// (0x0005bf09) hc_cl_list_single_graphic_pane

0x8fb8,	// (0x0005bf1b) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x8fb8,	// (0x0005bf1b) hc_cl_list_single_graphic_pane_g1

0x8fc4,	// (0x0005bf27) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x8fc4,	// (0x0005bf27) hc_cl_list_single_graphic_pane_g2

0x0001,

0xf996,	// (0x000628f9) hc_cl_list_single_graphic_pane_g_ParamLimits

0xf996,	// (0x000628f9) hc_cl_list_single_graphic_pane_g

0x8fd8,	// (0x0005bf3b) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x8fd8,	// (0x0005bf3b) hc_cl_list_single_graphic_pane_t1

0x8fb8,	// (0x0005bf1b) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x8fb8,	// (0x0005bf1b) hc_cl_list_double_graphic_heading_pane_g1

0x8fed,	// (0x0005bf50) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x8fed,	// (0x0005bf50) hc_cl_list_double_graphic_heading_pane_g2

0x9001,	// (0x0005bf64) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x9001,	// (0x0005bf64) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xf99b,	// (0x000628fe) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xf99b,	// (0x000628fe) hc_cl_list_double_graphic_heading_pane_g

0x9015,	// (0x0005bf78) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x9015,	// (0x0005bf78) hc_cl_list_double_graphic_heading_pane_t1

0x902a,	// (0x0005bf8d) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x902a,	// (0x0005bf8d) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xf9a2,	// (0x00062905) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xf9a2,	// (0x00062905) hc_cl_list_double_graphic_heading_pane_t

0x9047,	// (0x0005bfaa) vid4_progress_pane_g1

0x9057,	// (0x0005bfba) vid4_progress_pane_g2

0x9067,	// (0x0005bfca) vid4_progress_pane_g3

0x9079,	// (0x0005bfdc) vid4_progress_pane_g4

0x0004,

0xf9a7,	// (0x0006290a) vid4_progress_pane_g

0x9097,	// (0x0005bffa) vid4_progress_pane_t1

0x90b1,	// (0x0005c014) vid4_progress_pane_t2

0x0002,

0xf9b2,	// (0x00062915) vid4_progress_pane_t

0x90df,	// (0x0005c042) wait_bar_pane_cp07

0xe71b,	// (0x0006167e) blid_firmament_pane_ParamLimits

0xe75e,	// (0x000616c1) popup_blid_sat_info2_window_g1

0xe782,	// (0x000616e5) popup_blid_sat_info2_window_t3

0xe790,	// (0x000616f3) popup_blid_sat_info2_window_t4

0xe79e,	// (0x00061701) popup_blid_sat_info2_window_t5

0xe7ac,	// (0x0006170f) popup_blid_sat_info2_window_t6

0xe7bc,	// (0x0006171f) popup_blid_sat_info2_window_t7

0xe7ca,	// (0x0006172d) popup_blid_sat_info2_window_t8

0xe7d8,	// (0x0006173b) popup_blid_sat_info2_window_t9

0xe7e6,	// (0x00061749) popup_blid_sat_info2_window_t10

0xe8ad,	// (0x00061810) aid_firma_cardinal_ParamLimits

0xe8c1,	// (0x00061824) blid_firmament_pane_t1_ParamLimits

0xe8d8,	// (0x0006183b) blid_firmament_pane_t2_ParamLimits

0xe8ef,	// (0x00061852) blid_firmament_pane_t3_ParamLimits

0xe906,	// (0x00061869) blid_firmament_pane_t4_ParamLimits

0xf5da,	// (0x0006253d) blid_firmament_pane_t_ParamLimits

0xe91d,	// (0x00061880) blid_sat_info_pane_ParamLimits

0x64dd,	// (0x00059440) main_cam_set_pane_ParamLimits

0x7498,	// (0x0005a3fb) aid_size_cell_colour_35_ParamLimits

0x74b2,	// (0x0005a415) aid_size_cell_colour_112_ParamLimits

0x74c9,	// (0x0005a42c) aid_size_cell_effect_ParamLimits

0x39af,	// (0x00056912) bg_tb_trans_pane_cp02_ParamLimits

0xcd9c,	// (0x0005fcff) heading_imed_pane_ParamLimits

0x74e3,	// (0x0005a446) listscroll_imed_pane_ParamLimits

0xdc2c,	// (0x00060b8f) popup_call2_audio_first_window_g5_ParamLimits

0xdc2c,	// (0x00060b8f) popup_call2_audio_first_window_g5

0x7aba,	// (0x0005aa1d) aid_size_touch_image3_arrow_left_ParamLimits

0x7aba,	// (0x0005aa1d) aid_size_touch_image3_arrow_left

0x7ad0,	// (0x0005aa33) aid_size_touch_image3_arrow_right_ParamLimits

0x7ad0,	// (0x0005aa33) aid_size_touch_image3_arrow_right

0x90ca,	// (0x0005c02d) vid4_progress_pane_t3

0x7636,	// (0x0005a599) main_hwr_training_symbol_option_pane_ParamLimits

0x7636,	// (0x0005a599) main_hwr_training_symbol_option_pane

0xef85,	// (0x00061ee8) popup_hwr_training_preview_window_ParamLimits

0xef85,	// (0x00061ee8) popup_hwr_training_preview_window

0x7697,	// (0x0005a5fa) hwr_training_navi_pane_g5_ParamLimits

0x7697,	// (0x0005a5fa) hwr_training_navi_pane_g5

0x0739,	// (0x0005369c) popup_char_count_window

0x366b,	// (0x000565ce) bg_popup_sub_pane_cp20_ParamLimits

0x8a37,	// (0x0005b99a) list_vitu2_match_list_pane_ParamLimits

0x8a43,	// (0x0005b9a6) vitu2_page_scroll_pane_ParamLimits

0x8a43,	// (0x0005b9a6) vitu2_page_scroll_pane

0x0cf2,	// (0x00053c55) list_single_hwr_training_symbol_option_pane_ParamLimits

0x0cf2,	// (0x00053c55) list_single_hwr_training_symbol_option_pane

0x0d05,	// (0x00053c68) list_single_hwr_training_symbol_option_pane_g1

0x0d0d,	// (0x00053c70) list_single_hwr_training_symbol_option_pane_t1

0x0d1b,	// (0x00053c7e) bg_button_pane_cp023

0x0d24,	// (0x00053c87) bg_button_pane_cp024

0x0d57,	// (0x00053cba) vitu2_page_scroll_pane_g1

0x0d5f,	// (0x00053cc2) vitu2_page_scroll_pane_g2

0x0001,

0xf9b9,	// (0x0006291c) vitu2_page_scroll_pane_g

0x0d67,	// (0x00053cca) vitu2_page_scroll_pane_t1

0x0d76,	// (0x00053cd9) popup_char_count_window_g1

0x0d7f,	// (0x00053ce2) popup_char_count_window_g2

0x0d88,	// (0x00053ceb) popup_char_count_window_g3

0x0002,

0xf9be,	// (0x00062921) popup_char_count_window_g

0x0d91,	// (0x00053cf4) popup_char_count_window_t1

0x3685,	// (0x000565e8) main_vded2_pane

0xedc9,	// (0x00061d2c) aid_size_cell_imed_line

0xedd3,	// (0x00061d36) grid_imed_line_width_pane

0x7fd4,	// (0x0005af37) vid4_indicators_pane_g4

0x0d9f,	// (0x00053d02) cell_imed_line_width_pane_ParamLimits

0x0d9f,	// (0x00053d02) cell_imed_line_width_pane

0x0db5,	// (0x00053d18) cell_imed_line_width_pane_g1

0x0dbe,	// (0x00053d21) cell_imed_line_width_pane_g2

0x0001,

0xf9c5,	// (0x00062928) cell_imed_line_width_pane_g

0x9106,	// (0x0005c069) main_vded2_pane_g1_ParamLimits

0x9106,	// (0x0005c069) main_vded2_pane_g1

0x9115,	// (0x0005c078) main_vded2_pane_g2_ParamLimits

0x9115,	// (0x0005c078) main_vded2_pane_g2

0x0001,

0xf9ca,	// (0x0006292d) main_vded2_pane_g_ParamLimits

0xf9ca,	// (0x0006292d) main_vded2_pane_g

0x9123,	// (0x0005c086) vded2_slider_pane_ParamLimits

0x9123,	// (0x0005c086) vded2_slider_pane

0x9130,	// (0x0005c093) aid_size_touch_vded2_end

0x913a,	// (0x0005c09d) aid_size_touch_vded2_playhead

0x0dc6,	// (0x00053d29) aid_size_touch_vded2_start

0x0dce,	// (0x00053d31) vded2_slider_bg_pane

0x0dd7,	// (0x00053d3a) vded2_slider_pane_g1

0x0de0,	// (0x00053d43) vded2_slider_pane_g2

0x9142,	// (0x0005c0a5) vded2_slider_pane_g3

0x0002,

0xf9cf,	// (0x00062932) vded2_slider_pane_g

0x0de8,	// (0x00053d4b) vded2_slider_bg_pane_g1

0x0df1,	// (0x00053d54) vded2_slider_bg_pane_g2

0x0dfa,	// (0x00053d5d) vded2_slider_bg_pane_g3

0x0002,

0xf9d6,	// (0x00062939) vded2_slider_bg_pane_g

0x5e15,	// (0x00058d78) aid_postcard_touch_down_pane_ParamLimits

0x5e15,	// (0x00058d78) aid_postcard_touch_down_pane

0x5e25,	// (0x00058d88) aid_postcard_touch_up_pane_ParamLimits

0x5e25,	// (0x00058d88) aid_postcard_touch_up_pane

0x3685,	// (0x000565e8) main_blid2_pane

0x6506,	// (0x00059469) popup_blid2_search_window

0x1b91,	// (0x00054af4) blid2_gps_pane

0x1b91,	// (0x00054af4) blid2_navig_pane

0x1b91,	// (0x00054af4) blid2_search_pane

0x1b91,	// (0x00054af4) blid2_tripm_pane

0x914b,	// (0x0005c0ae) blid2_search_pane_g1_ParamLimits

0x914b,	// (0x0005c0ae) blid2_search_pane_g1

0x9157,	// (0x0005c0ba) blid2_search_pane_t1_ParamLimits

0x9157,	// (0x0005c0ba) blid2_search_pane_t1

0x9169,	// (0x0005c0cc) aid_size_cell_blid2_gps_ParamLimits

0x9169,	// (0x0005c0cc) aid_size_cell_blid2_gps

0x9179,	// (0x0005c0dc) blid2_gps_pane_g1_ParamLimits

0x9179,	// (0x0005c0dc) blid2_gps_pane_g1

0x9185,	// (0x0005c0e8) grid_blid2_satellite_pane_ParamLimits

0x9185,	// (0x0005c0e8) grid_blid2_satellite_pane

0x9193,	// (0x0005c0f6) blid2_navig_pane_g1_ParamLimits

0x9193,	// (0x0005c0f6) blid2_navig_pane_g1

0x919f,	// (0x0005c102) blid2_navig_pane_t1_ParamLimits

0x919f,	// (0x0005c102) blid2_navig_pane_t1

0x91b1,	// (0x0005c114) blid2_navig_pane_t2_ParamLimits

0x91b1,	// (0x0005c114) blid2_navig_pane_t2

0x0001,

0xf9dd,	// (0x00062940) blid2_navig_pane_t_ParamLimits

0xf9dd,	// (0x00062940) blid2_navig_pane_t

0x91c3,	// (0x0005c126) blid2_navig_ring_pane_ParamLimits

0x91c3,	// (0x0005c126) blid2_navig_ring_pane

0x91d3,	// (0x0005c136) blid2_speed_pane_ParamLimits

0x91d3,	// (0x0005c136) blid2_speed_pane

0x91df,	// (0x0005c142) blid2_tripm_pane_g1_ParamLimits

0x91df,	// (0x0005c142) blid2_tripm_pane_g1

0x91ef,	// (0x0005c152) blid2_tripm_pane_g2_ParamLimits

0x91ef,	// (0x0005c152) blid2_tripm_pane_g2

0x91fb,	// (0x0005c15e) blid2_tripm_pane_g3_ParamLimits

0x91fb,	// (0x0005c15e) blid2_tripm_pane_g3

0x9207,	// (0x0005c16a) blid2_tripm_pane_g4_ParamLimits

0x9207,	// (0x0005c16a) blid2_tripm_pane_g4

0x9213,	// (0x0005c176) blid2_tripm_pane_g5_ParamLimits

0x9213,	// (0x0005c176) blid2_tripm_pane_g5

0x0005,

0xf9e2,	// (0x00062945) blid2_tripm_pane_g_ParamLimits

0xf9e2,	// (0x00062945) blid2_tripm_pane_g

0x922f,	// (0x0005c192) blid2_tripm_pane_t1_ParamLimits

0x922f,	// (0x0005c192) blid2_tripm_pane_t1

0x9241,	// (0x0005c1a4) blid2_tripm_pane_t2_ParamLimits

0x9241,	// (0x0005c1a4) blid2_tripm_pane_t2

0x9253,	// (0x0005c1b6) blid2_tripm_pane_t3_ParamLimits

0x9253,	// (0x0005c1b6) blid2_tripm_pane_t3

0x0003,

0xf9ef,	// (0x00062952) blid2_tripm_pane_t_ParamLimits

0xf9ef,	// (0x00062952) blid2_tripm_pane_t

0x9285,	// (0x0005c1e8) cell_blid2_satellite_pane_ParamLimits

0x9285,	// (0x0005c1e8) cell_blid2_satellite_pane

0x92a3,	// (0x0005c206) cell_blid2_satellite_pane_g1

0x0e03,	// (0x00053d66) cell_blid2_satellite_pane_t1

0xc466,	// (0x0005f3c9) blid2_speed_pane_g1

0x0e11,	// (0x00053d74) blid2_speed_pane_t1

0x0e1f,	// (0x00053d82) blid2_speed_pane_t2

0x0001,

0xf9f8,	// (0x0006295b) blid2_speed_pane_t

0xc466,	// (0x0005f3c9) blid2_navig_ring_pane_g1

0x92ac,	// (0x0005c20f) blid2_navig_ring_pane_g2

0x92b4,	// (0x0005c217) blid2_navig_ring_pane_g3

0x92bc,	// (0x0005c21f) blid2_navig_ring_pane_g4

0x92c4,	// (0x0005c227) blid2_navig_ring_pane_g5

0x0004,

0xf9fd,	// (0x00062960) blid2_navig_ring_pane_g

0x1b91,	// (0x00054af4) bg_popup_window_pane_cp011

0x0e2d,	// (0x00053d90) popup_blid2_search_window_g1

0x0e35,	// (0x00053d98) popup_blid2_search_window_t1

0x0e43,	// (0x00053da6) popup_blid2_search_window_t2

0x0001,

0xfa08,	// (0x0006296b) popup_blid2_search_window_t

0xc7ba,	// (0x0005f71d) main_browser_pane_g1

0xc4c4,	// (0x0005f427) main_browser_pane_ParamLimits

0x64dd,	// (0x00059440) bg_button_pane_cp011_ParamLimits

0x8310,	// (0x0005b273) cell_vitu2_function_pane_g1_ParamLimits

0xd3e9,	// (0x0006034c) bg_popup_sub_pane_cp22_ParamLimits

0x8be2,	// (0x0005bb45) input_focus_pane_cp08_ParamLimits

0x8bfe,	// (0x0005bb61) popup_vitu2_query_button_pane_ParamLimits

0x8bfe,	// (0x0005bb61) popup_vitu2_query_button_pane

0x8c0d,	// (0x0005bb70) popup_vitu2_query_input_button_pane

0x0a04,	// (0x00053967) popup_vitu2_query_window_g1_ParamLimits

0x8c17,	// (0x0005bb7a) popup_vitu2_query_window_g2_ParamLimits

0xf909,	// (0x0006286c) popup_vitu2_query_window_g_ParamLimits

0x1b91,	// (0x00054af4) bg_button_pane_cp026

0x92cc,	// (0x0005c22f) popup_vitu2_query_input_button_pane_g1

0x1b91,	// (0x00054af4) bg_button_pane_cp025

0x0e51,	// (0x00053db4) popup_vitu2_query_button_pane_t1

0x6a37,	// (0x0005999a) main_mp3_pane_t6

0x6a47,	// (0x000599aa) popup_slider_window_cp01

0x7eaf,	// (0x0005ae12) cam4_battery_pane

0x7f8d,	// (0x0005aef0) cam4_battery_pane_cp02

0x903f,	// (0x0005bfa2) cam4_battery_pane_cp01

0x903f,	// (0x0005bfa2) cam4_battery_pane_cp03

0x0e5f,	// (0x00053dc2) cam4_battery_pane_g1

0xc466,	// (0x0005f3c9) cam4_battery_pane_g2

0x0001,

0xfa0d,	// (0x00062970) cam4_battery_pane_g

0xe7f4,	// (0x00061757) popup_blid_sat_info2_window_t11

0x5952,	// (0x000588b5) aid_size_touch_mv_arrow_left_ParamLimits

0x597d,	// (0x000588e0) aid_size_touch_mv_arrow_right_ParamLimits

0xd117,	// (0x0006007a) navi_pane_g1_ParamLimits

0x59bc,	// (0x0005891f) navi_pane_g2_ParamLimits

0x59ea,	// (0x0005894d) navi_pane_g3_ParamLimits

0xf311,	// (0x00062274) navi_pane_g_ParamLimits

0x5a44,	// (0x000589a7) navi_pane_mv_t1_ParamLimits

0x74ef,	// (0x0005a452) grid_imed_effect_pane_ParamLimits

0x44e7,	// (0x0005744a) aid_placing_vt_slider_lsc

0xc6f8,	// (0x0005f65b) aid_placing_vt_slider_prt

0x39af,	// (0x00056912) bg_tb_trans_pane_cp01_ParamLimits

0xea5c,	// (0x000619bf) popup_image_details_window_g1_ParamLimits

0xea6f,	// (0x000619d2) popup_image_details_window_g2_ParamLimits

0xea84,	// (0x000619e7) popup_image_details_window_g3_ParamLimits

0xea84,	// (0x000619e7) popup_image_details_window_g3

0xf61a,	// (0x0006257d) popup_image_details_window_g_ParamLimits

0xea98,	// (0x000619fb) popup_image_details_window_t1_ParamLimits

0xeaaa,	// (0x00061a0d) popup_image_details_window_t2_ParamLimits

0xeac3,	// (0x00061a26) popup_image_details_window_t3_ParamLimits

0xead7,	// (0x00061a3a) popup_image_details_window_t4_ParamLimits

0xeaf2,	// (0x00061a55) popup_image_details_window_t5_ParamLimits

0xf621,	// (0x00062584) popup_image_details_window_t_ParamLimits

0x8f6b,	// (0x0005bece) cl_header_name_pane_ParamLimits

0x8f6b,	// (0x0005bece) cl_header_name_pane

0x92d4,	// (0x0005c237) cl_header_name_pane_t1_ParamLimits

0x92d4,	// (0x0005c237) cl_header_name_pane_t1

0x92eb,	// (0x0005c24e) cl_header_name_pane_t2_ParamLimits

0x92eb,	// (0x0005c24e) cl_header_name_pane_t2

0x9315,	// (0x0005c278) cl_header_name_pane_t3_ParamLimits

0x9315,	// (0x0005c278) cl_header_name_pane_t3

0x0002,

0xfa12,	// (0x00062975) cl_header_name_pane_t_ParamLimits

0xfa12,	// (0x00062975) cl_header_name_pane_t

0x5a15,	// (0x00058978) navi_pane_mv_g2_ParamLimits

0x06d5,	// (0x00053638) field_vitu2_entry_pane_g1_ParamLimits

0x06e1,	// (0x00053644) field_vitu2_entry_pane_g2_ParamLimits

0xd40b,	// (0x0006036e) field_vitu2_entry_pane_g3_ParamLimits

0xd40b,	// (0x0006036e) field_vitu2_entry_pane_g3

0xf812,	// (0x00062775) field_vitu2_entry_pane_g_ParamLimits

0x81d6,	// (0x0005b139) cell_vitu2_itu_pane_g1_ParamLimits

0x81ee,	// (0x0005b151) cell_vitu2_itu_pane_g2_ParamLimits

0x81ee,	// (0x0005b151) cell_vitu2_itu_pane_g2

0x0001,

0xf81e,	// (0x00062781) cell_vitu2_itu_pane_g_ParamLimits

0xf81e,	// (0x00062781) cell_vitu2_itu_pane_g

0x64dd,	// (0x00059440) bg_vkb2_func_pane_cp05_ParamLimits

0x64dd,	// (0x00059440) bg_vkb2_func_pane_cp05

0x64dd,	// (0x00059440) bg_vkb2_func_pane_cp03

0x64dd,	// (0x00059440) bg_vkb2_func_pane_cp04

0x64dd,	// (0x00059440) bg_vkb2_func_pane_cp10_ParamLimits

0x64dd,	// (0x00059440) bg_vkb2_func_pane_cp10

0x8f0c,	// (0x0005be6f) bg_vkb2_func_pane_cp08

0x8bca,	// (0x0005bb2d) bg_vkb2_func_pane_cp06

0x8eef,	// (0x0005be52) bg_vkb2_func_pane_cp07

0x0d2d,	// (0x00053c90) bg_vkb2_func_pane_cp11_ParamLimits

0x0d2d,	// (0x00053c90) bg_vkb2_func_pane_cp11

0x0d42,	// (0x00053ca5) bg_vkb2_func_pane_cp12_ParamLimits

0x0d42,	// (0x00053ca5) bg_vkb2_func_pane_cp12

0x1b91,	// (0x00054af4) bg_vkb2_func_pane_cp09

0x074b,	// (0x000536ae) bg_vkb2_func_pane_g1

0xc8cb,	// (0x0005f82e) bg_vkb2_func_pane_g2

0x0753,	// (0x000536b6) bg_vkb2_func_pane_g3

0x075b,	// (0x000536be) bg_vkb2_func_pane_g4

0x09c9,	// (0x0005392c) bg_vkb2_func_pane_g5

0x0773,	// (0x000536d6) bg_vkb2_func_pane_g6

0x077b,	// (0x000536de) bg_vkb2_func_pane_g7

0x076b,	// (0x000536ce) bg_vkb2_func_pane_g8

0xc8ab,	// (0x0005f80e) bg_vkb2_func_pane_g9

0x0008,

0xfa19,	// (0x0006297c) bg_vkb2_func_pane_g

0x9221,	// (0x0005c184) blid2_tripm_pane_g6_ParamLimits

0x9221,	// (0x0005c184) blid2_tripm_pane_g6

0x0616,	// (0x00053579) mp4_progress_pane_g1

0x9279,	// (0x0005c1dc) blid2_tripm_values_pane_ParamLimits

0x9279,	// (0x0005c1dc) blid2_tripm_values_pane

0x933a,	// (0x0005c29d) blid2_tripm_values_pane_t1

0x9348,	// (0x0005c2ab) blid2_tripm_values_pane_t2

0x0e69,	// (0x00053dcc) blid2_tripm_values_pane_t3

0x9356,	// (0x0005c2b9) blid2_tripm_values_pane_t4

0x9364,	// (0x0005c2c7) blid2_tripm_values_pane_t5

0x9372,	// (0x0005c2d5) blid2_tripm_values_pane_t6

0x0e77,	// (0x00053dda) blid2_tripm_values_pane_t7

0x9380,	// (0x0005c2e3) blid2_tripm_values_pane_t8

0x938e,	// (0x0005c2f1) blid2_tripm_values_pane_t9

0x0008,

0xfa2c,	// (0x0006298f) blid2_tripm_values_pane_t

0x4525,	// (0x00057488) call_video_pane_t1_ParamLimits

0x4542,	// (0x000574a5) call_video_pane_t2_ParamLimits

0xf1ba,	// (0x0006211d) call_video_pane_t_ParamLimits

0x5d51,	// (0x00058cb4) msg_header_pane_g1_ParamLimits

0xd336,	// (0x00060299) msg_header_pane_g2_ParamLimits

0xd336,	// (0x00060299) msg_header_pane_g2

0x0001,

0xf3af,	// (0x00062312) msg_header_pane_g_ParamLimits

0xf3af,	// (0x00062312) msg_header_pane_g

0xc4c4,	// (0x0005f427) main_clock2_pane_ParamLimits

0x7268,	// (0x0005a1cb) grid_clock2_toolbar_pane_ParamLimits

0x7268,	// (0x0005a1cb) grid_clock2_toolbar_pane

0x7268,	// (0x0005a1cb) listscroll_clock2_pane_ParamLimits

0x7268,	// (0x0005a1cb) listscroll_clock2_pane

0x7317,	// (0x0005a27a) main_clock2_pane_t3_ParamLimits

0x7317,	// (0x0005a27a) main_clock2_pane_t3

0x7329,	// (0x0005a28c) main_clock2_pane_t4_ParamLimits

0x7329,	// (0x0005a28c) main_clock2_pane_t4

0x0e85,	// (0x00053de8) cell_clock2_toolbar_pane

0x0e8d,	// (0x00053df0) cell_clock2_toolbar_pane_cp01

0x0e8d,	// (0x00053df0) cell_clock2_toolbar_pane_cp02

0x0e95,	// (0x00053df8) cell_clock2_toolbar_pane_cp03

0x0e9d,	// (0x00053e00) list_clock2_pane

0xce6d,	// (0x0005fdd0) scroll_pane_cp10

0x0ea5,	// (0x00053e08) list_single_clock2_pane_ParamLimits

0x0ea5,	// (0x00053e08) list_single_clock2_pane

0xc6a1,	// (0x0005f604) list_highlight_pane_cp08

0x0eb2,	// (0x00053e15) list_single_clock2_pane_t1

0x0ec0,	// (0x00053e23) list_single_clock2_pane_t2

0x0001,

0xfa3f,	// (0x000629a2) list_single_clock2_pane_t

0x1b91,	// (0x00054af4) bg_button_pane_cp10

0x0ece,	// (0x00053e31) cell_clock2_toolbar_pane_g1

0x5d77,	// (0x00058cda) aid_main_viewer_pane_g1_ParamLimits

0x5d77,	// (0x00058cda) aid_main_viewer_pane_g1

0x5d83,	// (0x00058ce6) aid_main_viewer_pane_g2_ParamLimits

0x5d83,	// (0x00058ce6) aid_main_viewer_pane_g2

0x5d8f,	// (0x00058cf2) aid_main_viewer_pane_g3_ParamLimits

0x5d8f,	// (0x00058cf2) aid_main_viewer_pane_g3

0x5da0,	// (0x00058d03) aid_main_viewer_pane_g4_ParamLimits

0x5da0,	// (0x00058d03) aid_main_viewer_pane_g4

0x0003,

0xf3c0,	// (0x00062323) aid_main_viewer_pane_g_ParamLimits

0xf3c0,	// (0x00062323) aid_main_viewer_pane_g

0x64d0,	// (0x00059433) main_calc_pane_ParamLimits

0x64eb,	// (0x0005944e) main_dialer2_pane_ParamLimits

0x3685,	// (0x000565e8) main_cam6_pane

0x3685,	// (0x000565e8) main_vid6_pane

0x7274,	// (0x0005a1d7) listscroll_gen_pane_cp06_ParamLimits

0x7274,	// (0x0005a1d7) listscroll_gen_pane_cp06

0x733b,	// (0x0005a29e) main_clock2_pane_t5_ParamLimits

0x733b,	// (0x0005a29e) main_clock2_pane_t5

0x7388,	// (0x0005a2eb) aid_call2_pane_cp10_ParamLimits

0x739a,	// (0x0005a2fd) aid_call_pane_cp10_ParamLimits

0xcedc,	// (0x0005fe3f) popup_clock_analogue_window_cp10_g1_ParamLimits

0xcedc,	// (0x0005fe3f) popup_clock_analogue_window_cp10_g2_ParamLimits

0x73ac,	// (0x0005a30f) popup_clock_analogue_window_cp10_g3_ParamLimits

0x73ac,	// (0x0005a30f) popup_clock_analogue_window_cp10_g4_ParamLimits

0xcedc,	// (0x0005fe3f) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf6d6,	// (0x00062639) popup_clock_analogue_window_cp10_g_ParamLimits

0x73c2,	// (0x0005a325) popup_clock_analogue_window_cp10_t1_ParamLimits

0x0680,	// (0x000535e3) cell_dialer2_keypad_pane_g2_ParamLimits

0x0680,	// (0x000535e3) cell_dialer2_keypad_pane_g2

0x0001,

0xf7b1,	// (0x00062714) cell_dialer2_keypad_pane_g_ParamLimits

0xf7b1,	// (0x00062714) cell_dialer2_keypad_pane_g

0xc470,	// (0x0005f3d3) cell_dialer2_keypad_pane_t1

0x85e4,	// (0x0005b547) main_cset_text2_pane_ParamLimits

0x85e4,	// (0x0005b547) main_cset_text2_pane

0x0bf0,	// (0x00053b53) area_vitu2_query_pane_g1_ParamLimits

0x8e8e,	// (0x0005bdf1) area_vitu2_query_pane_g2_ParamLimits

0xf95c,	// (0x000628bf) area_vitu2_query_pane_g_ParamLimits

0x0c74,	// (0x00053bd7) area_vitu2_query_pane_t7_ParamLimits

0x0c74,	// (0x00053bd7) area_vitu2_query_pane_t7

0x8bca,	// (0x0005bb2d) bg_button_pane_cp018_ParamLimits

0x8eef,	// (0x0005be52) bg_button_pane_cp021_ParamLimits

0x8efb,	// (0x0005be5e) bg_button_pane_cp022_ParamLimits

0x8f0c,	// (0x0005be6f) bg_vkb2_func_pane_cp08_ParamLimits

0x8bca,	// (0x0005bb2d) bg_vkb2_func_pane_cp06_ParamLimits

0x8eef,	// (0x0005be52) bg_vkb2_func_pane_cp07_ParamLimits

0x8f1e,	// (0x0005be81) input_focus_pane_cp09_ParamLimits

0x939c,	// (0x0005c2ff) cam6_autofocus_pane_ParamLimits

0x939c,	// (0x0005c2ff) cam6_autofocus_pane

0x93be,	// (0x0005c321) cam6_image_uncrop_pane_ParamLimits

0x93be,	// (0x0005c321) cam6_image_uncrop_pane

0x93f4,	// (0x0005c357) cam6_indi_pane_ParamLimits

0x93f4,	// (0x0005c357) cam6_indi_pane

0x940e,	// (0x0005c371) cam6_mode_pane_ParamLimits

0x940e,	// (0x0005c371) cam6_mode_pane

0x9422,	// (0x0005c385) cam6_timer_pane_ParamLimits

0x9422,	// (0x0005c385) cam6_timer_pane

0x9436,	// (0x0005c399) cam6_zoom_pane_ParamLimits

0x9436,	// (0x0005c399) cam6_zoom_pane

0x9452,	// (0x0005c3b5) cam6_mode_pane_g1_ParamLimits

0x9452,	// (0x0005c3b5) cam6_mode_pane_g1

0x945e,	// (0x0005c3c1) cam6_mode_pane_g2_ParamLimits

0x945e,	// (0x0005c3c1) cam6_mode_pane_g2

0x946a,	// (0x0005c3cd) cam6_mode_pane_g3_ParamLimits

0x946a,	// (0x0005c3cd) cam6_mode_pane_g3

0x9476,	// (0x0005c3d9) cam6_mode_pane_g4_ParamLimits

0x9476,	// (0x0005c3d9) cam6_mode_pane_g4

0x0003,

0xfa44,	// (0x000629a7) cam6_mode_pane_g_ParamLimits

0xfa44,	// (0x000629a7) cam6_mode_pane_g

0xe6e3,	// (0x00061646) bg_tb_trans_pane_cp08_ParamLimits

0xe6e3,	// (0x00061646) bg_tb_trans_pane_cp08

0x0ed6,	// (0x00053e39) cam6_battery_pane_ParamLimits

0x0ed6,	// (0x00053e39) cam6_battery_pane

0x0eec,	// (0x00053e4f) cam6_indi_pane_g1_ParamLimits

0x0eec,	// (0x00053e4f) cam6_indi_pane_g1

0x0efe,	// (0x00053e61) cam6_indi_pane_g2_ParamLimits

0x0efe,	// (0x00053e61) cam6_indi_pane_g2

0x0f10,	// (0x00053e73) cam6_indi_pane_g3_ParamLimits

0x0f10,	// (0x00053e73) cam6_indi_pane_g3

0x0002,

0xfa4d,	// (0x000629b0) cam6_indi_pane_g_ParamLimits

0xfa4d,	// (0x000629b0) cam6_indi_pane_g

0x0f22,	// (0x00053e85) cam6_indi_pane_t1_ParamLimits

0x0f22,	// (0x00053e85) cam6_indi_pane_t1

0x8011,	// (0x0005af74) cam6_autofocus_pane_g1

0x8009,	// (0x0005af6c) cam6_autofocus_pane_g2

0x8021,	// (0x0005af84) cam6_autofocus_pane_g3

0x8019,	// (0x0005af7c) cam6_autofocus_pane_g4

0x0003,

0xfa54,	// (0x000629b7) cam6_autofocus_pane_g

0x0f48,	// (0x00053eab) cam6_timer_pane_g1

0x0f50,	// (0x00053eb3) cam6_timer_pane_t1

0x0f5e,	// (0x00053ec1) cam6_zoom_cont_pane

0x0f66,	// (0x00053ec9) cam6_zoom_pane_g1

0x0f6f,	// (0x00053ed2) cam6_zoom_pane_g2

0x9482,	// (0x0005c3e5) cam6_zoom_pane_g3

0x0002,

0xfa5d,	// (0x000629c0) cam6_zoom_pane_g

0xc466,	// (0x0005f3c9) cam6_battery_pane_g1

0xc466,	// (0x0005f3c9) cam6_battery_pane_g2

0x0001,

0xf08c,	// (0x00061fef) cam6_battery_pane_g

0x0f66,	// (0x00053ec9) cam6_zoom_cont_pane_g1

0x0f6f,	// (0x00053ed2) cam6_zoom_cont_pane_g2

0x0f78,	// (0x00053edb) cam6_zoom_cont_pane_g3

0x0002,

0xfa64,	// (0x000629c7) cam6_zoom_cont_pane_g

0x94a0,	// (0x0005c403) cam6_mode_pane_cp_ParamLimits

0x94a0,	// (0x0005c403) cam6_mode_pane_cp

0x94b4,	// (0x0005c417) cam6_zoom_pane_cp_ParamLimits

0x94b4,	// (0x0005c417) cam6_zoom_pane_cp

0x94d0,	// (0x0005c433) vid6_image_uncrop_cif_pane_ParamLimits

0x94d0,	// (0x0005c433) vid6_image_uncrop_cif_pane

0x94fc,	// (0x0005c45f) vid6_image_uncrop_nhd_pane_ParamLimits

0x94fc,	// (0x0005c45f) vid6_image_uncrop_nhd_pane

0x951b,	// (0x0005c47e) vid6_image_uncrop_vga_pane_ParamLimits

0x951b,	// (0x0005c47e) vid6_image_uncrop_vga_pane

0x953a,	// (0x0005c49d) vid6_image_uncrop_wvga_pane_ParamLimits

0x953a,	// (0x0005c49d) vid6_image_uncrop_wvga_pane

0x9559,	// (0x0005c4bc) vid6_indi_pane_ParamLimits

0x9559,	// (0x0005c4bc) vid6_indi_pane

0xe6e3,	// (0x00061646) bg_tb_trans_pane_cp09_ParamLimits

0xe6e3,	// (0x00061646) bg_tb_trans_pane_cp09

0x0f90,	// (0x00053ef3) cam6_battery_pane_cp_ParamLimits

0x0f90,	// (0x00053ef3) cam6_battery_pane_cp

0x0f9c,	// (0x00053eff) vid6_indi_pane_g1_ParamLimits

0x0f9c,	// (0x00053eff) vid6_indi_pane_g1

0x0fae,	// (0x00053f11) vid6_indi_pane_g2_ParamLimits

0x0fae,	// (0x00053f11) vid6_indi_pane_g2

0x0fc0,	// (0x00053f23) vid6_indi_pane_g3_ParamLimits

0x0fc0,	// (0x00053f23) vid6_indi_pane_g3

0x0fd7,	// (0x00053f3a) vid6_indi_pane_g4_ParamLimits

0x0fd7,	// (0x00053f3a) vid6_indi_pane_g4

0x0fee,	// (0x00053f51) vid6_indi_pane_g5_ParamLimits

0x0fee,	// (0x00053f51) vid6_indi_pane_g5

0x0004,

0xfa6b,	// (0x000629ce) vid6_indi_pane_g_ParamLimits

0xfa6b,	// (0x000629ce) vid6_indi_pane_g

0x1008,	// (0x00053f6b) vid6_indi_pane_t1_ParamLimits

0x1008,	// (0x00053f6b) vid6_indi_pane_t1

0x101e,	// (0x00053f81) vid6_indi_pane_t2_ParamLimits

0x101e,	// (0x00053f81) vid6_indi_pane_t2

0x1046,	// (0x00053fa9) vid6_indi_pane_t3_ParamLimits

0x1046,	// (0x00053fa9) vid6_indi_pane_t3

0x106e,	// (0x00053fd1) vid6_indi_pane_t4_ParamLimits

0x106e,	// (0x00053fd1) vid6_indi_pane_t4

0x0003,

0xfa76,	// (0x000629d9) vid6_indi_pane_t_ParamLimits

0xfa76,	// (0x000629d9) vid6_indi_pane_t

0x1092,	// (0x00053ff5) wait_bar_pane_cp08

0x957e,	// (0x0005c4e1) main_cset_text2_pane_t1_ParamLimits

0x957e,	// (0x0005c4e1) main_cset_text2_pane_t1

0x948b,	// (0x0005c3ee) listscroll_gen_pane_cp06_t1_ParamLimits

0x948b,	// (0x0005c3ee) listscroll_gen_pane_cp06_t1

0x3685,	// (0x000565e8) main_cam6_set_pane

0x17a0,	// (0x00054703) bg_tb_trans_pane_cp06_ParamLimits

0x7eb7,	// (0x0005ae1a) cam4_indicators_pane_g1_ParamLimits

0x7ec8,	// (0x0005ae2b) cam4_indicators_pane_g2_ParamLimits

0xf7ee,	// (0x00062751) cam4_indicators_pane_g_ParamLimits

0x7ee0,	// (0x0005ae43) cam4_indicators_pane_t1_ParamLimits

0x64dd,	// (0x00059440) bg_tb_trans_pane_cp07_ParamLimits

0x7f97,	// (0x0005aefa) vid4_indicators_pane_g1_ParamLimits

0x7fad,	// (0x0005af10) vid4_indicators_pane_g2_ParamLimits

0x7fc1,	// (0x0005af24) vid4_indicators_pane_g3_ParamLimits

0x7fd4,	// (0x0005af37) vid4_indicators_pane_g4_ParamLimits

0xf800,	// (0x00062763) vid4_indicators_pane_g_ParamLimits

0x7ff2,	// (0x0005af55) vid4_indicators_pane_t1_ParamLimits

0x9047,	// (0x0005bfaa) vid4_progress_pane_g1_ParamLimits

0x9057,	// (0x0005bfba) vid4_progress_pane_g2_ParamLimits

0x9067,	// (0x0005bfca) vid4_progress_pane_g3_ParamLimits

0x9079,	// (0x0005bfdc) vid4_progress_pane_g4_ParamLimits

0xf9a7,	// (0x0006290a) vid4_progress_pane_g_ParamLimits

0x9097,	// (0x0005bffa) vid4_progress_pane_t1_ParamLimits

0x90b1,	// (0x0005c014) vid4_progress_pane_t2_ParamLimits

0x90ca,	// (0x0005c02d) vid4_progress_pane_t3_ParamLimits

0xf9b2,	// (0x00062915) vid4_progress_pane_t_ParamLimits

0x90df,	// (0x0005c042) wait_bar_pane_cp07_ParamLimits

0x95a5,	// (0x0005c508) main_cam6_set_pane_g2_ParamLimits

0x95a5,	// (0x0005c508) main_cam6_set_pane_g2

0x95b1,	// (0x0005c514) main_cset6_listscroll_pane_ParamLimits

0x95b1,	// (0x0005c514) main_cset6_listscroll_pane

0x95de,	// (0x0005c541) main_cset6_slider_pane_ParamLimits

0x95de,	// (0x0005c541) main_cset6_slider_pane

0x95ea,	// (0x0005c54d) main_cset6_text2_pane_ParamLimits

0x95ea,	// (0x0005c54d) main_cset6_text2_pane

0x10a1,	// (0x00054004) main_cset6_text_pane

0x10a9,	// (0x0005400c) main_cset_list_pane_copy1_ParamLimits

0x10a9,	// (0x0005400c) main_cset_list_pane_copy1

0x10eb,	// (0x0005404e) scroll_pane_cp028_copy1

0x95fd,	// (0x0005c560) cset_list_set_pane_copy1

0x960d,	// (0x0005c570) aid_position_infowindow_above_copy1

0x9615,	// (0x0005c578) aid_position_infowindow_below_copy1

0x961d,	// (0x0005c580) cset_list_set_pane_g1_copy1

0x9625,	// (0x0005c588) cset_list_set_pane_g3_copy1_ParamLimits

0x9625,	// (0x0005c588) cset_list_set_pane_g3_copy1

0x9634,	// (0x0005c597) cset_list_set_pane_t1_copy1_ParamLimits

0x9634,	// (0x0005c597) cset_list_set_pane_t1_copy1

0x39af,	// (0x00056912) list_highlight_pane_cp021_copy1_ParamLimits

0x39af,	// (0x00056912) list_highlight_pane_cp021_copy1

0x10f4,	// (0x00054057) cset6_slider_pane_ParamLimits

0x10f4,	// (0x00054057) cset6_slider_pane

0x1120,	// (0x00054083) main_cset6_slider_pane_g1_ParamLimits

0x1120,	// (0x00054083) main_cset6_slider_pane_g1

0x9649,	// (0x0005c5ac) main_cset6_slider_pane_g2_ParamLimits

0x9649,	// (0x0005c5ac) main_cset6_slider_pane_g2

0x1148,	// (0x000540ab) main_cset6_slider_pane_g3_ParamLimits

0x1148,	// (0x000540ab) main_cset6_slider_pane_g3

0x9671,	// (0x0005c5d4) main_cset6_slider_pane_g4_ParamLimits

0x9671,	// (0x0005c5d4) main_cset6_slider_pane_g4

0x967d,	// (0x0005c5e0) main_cset6_slider_pane_g5_ParamLimits

0x967d,	// (0x0005c5e0) main_cset6_slider_pane_g5

0x08a4,	// (0x00053807) main_cset6_slider_pane_g7_ParamLimits

0x08a4,	// (0x00053807) main_cset6_slider_pane_g7

0x08b0,	// (0x00053813) main_cset6_slider_pane_g8_ParamLimits

0x08b0,	// (0x00053813) main_cset6_slider_pane_g8

0x9689,	// (0x0005c5ec) main_cset6_slider_pane_g9_ParamLimits

0x9689,	// (0x0005c5ec) main_cset6_slider_pane_g9

0x9695,	// (0x0005c5f8) main_cset6_slider_pane_g10_ParamLimits

0x9695,	// (0x0005c5f8) main_cset6_slider_pane_g10

0x96a1,	// (0x0005c604) main_cset6_slider_pane_g11_ParamLimits

0x96a1,	// (0x0005c604) main_cset6_slider_pane_g11

0x96ad,	// (0x0005c610) main_cset6_slider_pane_g12_ParamLimits

0x96ad,	// (0x0005c610) main_cset6_slider_pane_g12

0x96b9,	// (0x0005c61c) main_cset6_slider_pane_g13_ParamLimits

0x96b9,	// (0x0005c61c) main_cset6_slider_pane_g13

0x96c5,	// (0x0005c628) main_cset6_slider_pane_g14_ParamLimits

0x96c5,	// (0x0005c628) main_cset6_slider_pane_g14

0x96d1,	// (0x0005c634) main_cset6_slider_pane_g15_ParamLimits

0x96d1,	// (0x0005c634) main_cset6_slider_pane_g15

0x96e9,	// (0x0005c64c) main_cset6_slider_pane_g16_ParamLimits

0x96e9,	// (0x0005c64c) main_cset6_slider_pane_g16

0x96f5,	// (0x0005c658) main_cset6_slider_pane_g17_ParamLimits

0x96f5,	// (0x0005c658) main_cset6_slider_pane_g17

0x0011,

0xfa7f,	// (0x000629e2) main_cset6_slider_pane_g_ParamLimits

0xfa7f,	// (0x000629e2) main_cset6_slider_pane_g

0x1154,	// (0x000540b7) main_cset6_slider_pane_t1_ParamLimits

0x1154,	// (0x000540b7) main_cset6_slider_pane_t1

0x9719,	// (0x0005c67c) main_cset6_slider_pane_t2_ParamLimits

0x9719,	// (0x0005c67c) main_cset6_slider_pane_t2

0x9744,	// (0x0005c6a7) main_cset6_slider_pane_t3_ParamLimits

0x9744,	// (0x0005c6a7) main_cset6_slider_pane_t3

0x976f,	// (0x0005c6d2) main_cset6_slider_pane_t4_ParamLimits

0x976f,	// (0x0005c6d2) main_cset6_slider_pane_t4

0x979a,	// (0x0005c6fd) main_cset6_slider_pane_t5_ParamLimits

0x979a,	// (0x0005c6fd) main_cset6_slider_pane_t5

0x1195,	// (0x000540f8) main_cset6_slider_pane_t7_ParamLimits

0x1195,	// (0x000540f8) main_cset6_slider_pane_t7

0x97c5,	// (0x0005c728) main_cset6_slider_pane_t8_ParamLimits

0x97c5,	// (0x0005c728) main_cset6_slider_pane_t8

0x97e9,	// (0x0005c74c) main_cset6_slider_pane_t9_ParamLimits

0x97e9,	// (0x0005c74c) main_cset6_slider_pane_t9

0x980d,	// (0x0005c770) main_cset6_slider_pane_t10_ParamLimits

0x980d,	// (0x0005c770) main_cset6_slider_pane_t10

0x9831,	// (0x0005c794) main_cset6_slider_pane_t11_ParamLimits

0x9831,	// (0x0005c794) main_cset6_slider_pane_t11

0x11cb,	// (0x0005412e) main_cset6_slider_pane_t14_ParamLimits

0x11cb,	// (0x0005412e) main_cset6_slider_pane_t14

0x1204,	// (0x00054167) main_cset6_slider_pane_t15_ParamLimits

0x1204,	// (0x00054167) main_cset6_slider_pane_t15

0x000b,

0xfaa4,	// (0x00062a07) main_cset6_slider_pane_t_ParamLimits

0xfaa4,	// (0x00062a07) main_cset6_slider_pane_t

0x097b,	// (0x000538de) cset_slider_pane_g1_copy1

0x0984,	// (0x000538e7) cset_slider_pane_g2_copy1

0x098d,	// (0x000538f0) cset_slider_pane_g3_copy1

0x1b91,	// (0x00054af4) bg_popup_sub_pane_cp011_copy1

0x1246,	// (0x000541a9) main_cset_text_pane_g1_copy1

0x0a18,	// (0x0005397b) main_cset_text_pane_t1_copy1

0x0a26,	// (0x00053989) main_cset_text_pane_t2_copy1

0x0a34,	// (0x00053997) main_cset_text_pane_t3_copy1

0x0a42,	// (0x000539a5) main_cset_text_pane_t4_copy1

0x0a50,	// (0x000539b3) main_cset_text_pane_t5_copy1

0x124e,	// (0x000541b1) main_cset_text_pane_t6_copy1

0x125c,	// (0x000541bf) main_cset_text_pane_t7_copy1

0x9872,	// (0x0005c7d5) main_cset_text2_pane_t1_copy1

0x64dd,	// (0x00059440) main_ncimui_pane

0x6544,	// (0x000594a7) popup_query_ncimui_window_ParamLimits

0x6544,	// (0x000594a7) popup_query_ncimui_window

0xeb93,	// (0x00061af6) field_cale_ev2_pane_g4_ParamLimits

0xeb93,	// (0x00061af6) field_cale_ev2_pane_g4

0x7763,	// (0x0005a6c6) cell_video_dialer_keypad_pane_g2_ParamLimits

0x7763,	// (0x0005a6c6) cell_video_dialer_keypad_pane_g2

0x0001,

0xf788,	// (0x000626eb) cell_video_dialer_keypad_pane_g_ParamLimits

0xf788,	// (0x000626eb) cell_video_dialer_keypad_pane_g

0x777b,	// (0x0005a6de) cell_video_dialer_keypad_pane_t1

0x1b91,	// (0x00054af4) bg_popup_window_pane_cp012

0xcd43,	// (0x0005fca6) heading_pane_cp06

0x1288,	// (0x000541eb) ncim_query_content_pane

0x1b91,	// (0x00054af4) bg_popup_heading_pane_cp01

0x1290,	// (0x000541f3) ncim_heading_pane_t1

0x129e,	// (0x00054201) ncim_indicator_popup_pane

0x12b0,	// (0x00054213) ncim_query_button_pane

0x12c6,	// (0x00054229) ncim_query_content_pane_t1

0x12d8,	// (0x0005423b) ncim_query_content_pane_t2

0x0005,

0xfae8,	// (0x00062a4b) ncim_query_content_pane_t

0x1312,	// (0x00054275) ncim_query_list_pane

0x1324,	// (0x00054287) ncim_query_popup_pane

0x129e,	// (0x00054201) ncim_indicator_popup_pane_ParamLimits

0x99ce,	// (0x0005c931) ncim_query_content_pane_g1_ParamLimits

0x99ce,	// (0x0005c931) ncim_query_content_pane_g1

0x12c6,	// (0x00054229) ncim_query_content_pane_t1_ParamLimits

0x12d8,	// (0x0005423b) ncim_query_content_pane_t2_ParamLimits

0x99da,	// (0x0005c93d) ncim_query_content_pane_t3_ParamLimits

0x99da,	// (0x0005c93d) ncim_query_content_pane_t3

0x99f7,	// (0x0005c95a) ncim_query_content_pane_t4_ParamLimits

0x99f7,	// (0x0005c95a) ncim_query_content_pane_t4

0x9a14,	// (0x0005c977) ncim_query_content_pane_t5_ParamLimits

0x9a14,	// (0x0005c977) ncim_query_content_pane_t5

0x12ea,	// (0x0005424d) ncim_query_content_pane_t6_ParamLimits

0x12ea,	// (0x0005424d) ncim_query_content_pane_t6

0xfae8,	// (0x00062a4b) ncim_query_content_pane_t_ParamLimits

0x1312,	// (0x00054275) ncim_query_list_pane_ParamLimits

0x1324,	// (0x00054287) ncim_query_popup_pane_ParamLimits

0x1338,	// (0x0005429b) wait_bar_pane_cp04

0x1b91,	// (0x00054af4) input_focus_pane_cp011

0x1340,	// (0x000542a3) ncim_query_popup_pane_t1

0x134e,	// (0x000542b1) ncim_list_query_list_pane_ParamLimits

0x134e,	// (0x000542b1) ncim_list_query_list_pane

0x1b91,	// (0x00054af4) bg_button_pane_cp027

0x1361,	// (0x000542c4) ncim_query_button_pane_g1

0x1b91,	// (0x00054af4) list_highlight_pane_cp012

0x136b,	// (0x000542ce) ncim_list_query_list_pane_g1

0x1373,	// (0x000542d6) ncim_list_query_list_pane_t1

0x7ed4,	// (0x0005ae37) cam4_indicators_pane_g3_ParamLimits

0x7ed4,	// (0x0005ae37) cam4_indicators_pane_g3

0x7fe0,	// (0x0005af43) vid4_indicators_pane_g5_ParamLimits

0x7fe0,	// (0x0005af43) vid4_indicators_pane_g5

0x9088,	// (0x0005bfeb) vid4_progress_pane_g5_ParamLimits

0x9088,	// (0x0005bfeb) vid4_progress_pane_g5

0x98a4,	// (0x0005c807) main_ncimui_pane_g1

0x9910,	// (0x0005c873) ncimui_group_query_pane_ParamLimits

0x9910,	// (0x0005c873) ncimui_group_query_pane

0x996a,	// (0x0005c8cd) ncimui_list_pane_ParamLimits

0x996a,	// (0x0005c8cd) ncimui_list_pane

0x9991,	// (0x0005c8f4) ncimui_text_pane_ParamLimits

0x9991,	// (0x0005c8f4) ncimui_text_pane

0x9a31,	// (0x0005c994) ncimui_text_pane_t1_ParamLimits

0x9a31,	// (0x0005c994) ncimui_text_pane_t1

0x1381,	// (0x000542e4) ncimui_list_single_graphic_pane_ParamLimits

0x1381,	// (0x000542e4) ncimui_list_single_graphic_pane

0x9a50,	// (0x0005c9b3) ncimui_query_pane_ParamLimits

0x9a50,	// (0x0005c9b3) ncimui_query_pane

0x1b91,	// (0x00054af4) list_highlight_pane_cp013

0x1391,	// (0x000542f4) ncim_list_query_list_pane_t1_copy1

0x136b,	// (0x000542ce) ncim_list_single_graphic_pane_g1

0x9a63,	// (0x0005c9c6) ncim_query_button_pane_cp01

0x9a6f,	// (0x0005c9d2) ncim_query_entry_pane_ParamLimits

0x9a6f,	// (0x0005c9d2) ncim_query_entry_pane

0x9a82,	// (0x0005c9e5) ncimui_query_pane_g1

0x9a8e,	// (0x0005c9f1) ncimui_query_pane_t1_ParamLimits

0x9a8e,	// (0x0005c9f1) ncimui_query_pane_t1

0x39af,	// (0x00056912) input_focus_pane_cp012

0x139f,	// (0x00054302) ncim_query_entry_pane_t1

0xc4c4,	// (0x0005f427) main_im_pane_ParamLimits

0x64dd,	// (0x00059440) main_mobtv_pane_ParamLimits

0x64dd,	// (0x00059440) main_mobtv_pane

0x9701,	// (0x0005c664) main_cset6_slider_pane_g18_ParamLimits

0x9701,	// (0x0005c664) main_cset6_slider_pane_g18

0x970d,	// (0x0005c670) main_cset6_slider_pane_g19_ParamLimits

0x970d,	// (0x0005c670) main_cset6_slider_pane_g19

0xd40b,	// (0x0006036e) bg_main_mobtv_pane_ParamLimits

0xd40b,	// (0x0006036e) bg_main_mobtv_pane

0x9aa7,	// (0x0005ca0a) main_mobtv_info_pane

0x9ab2,	// (0x0005ca15) main_mobtv_loading_pane_ParamLimits

0x9ab2,	// (0x0005ca15) main_mobtv_loading_pane

0x13b1,	// (0x00054314) main_mobtv_pg_channel_list_pane

0x13bb,	// (0x0005431e) main_mobtv_pg_hdr_pane

0x9abf,	// (0x0005ca22) main_mobtv_programe_curr_pane_ParamLimits

0x9abf,	// (0x0005ca22) main_mobtv_programe_curr_pane

0x9acc,	// (0x0005ca2f) main_mobtv_programe_next_pane_ParamLimits

0x9acc,	// (0x0005ca2f) main_mobtv_programe_next_pane

0x13c4,	// (0x00054327) popup_mobtv_noti_window

0xc466,	// (0x0005f3c9) main_tv_pg_hdr_pane_g1

0x13ce,	// (0x00054331) main_tv_pg_hdr_pane_g2

0x13d6,	// (0x00054339) main_tv_pg_hdr_pane_g3

0x13de,	// (0x00054341) main_tv_pg_hdr_pane_g4

0x13e6,	// (0x00054349) main_tv_pg_hdr_pane_g5

0x13f0,	// (0x00054353) main_tv_pg_hdr_pane_g6

0x13fa,	// (0x0005435d) main_tv_pg_hdr_pane_g7

0x1404,	// (0x00054367) main_tv_pg_hdr_pane_g8

0x140e,	// (0x00054371) main_tv_pg_hdr_pane_g9

0x1418,	// (0x0005437b) main_tv_pg_hdr_pane_g10

0x1422,	// (0x00054385) main_tv_pg_hdr_pane_g11

0x000a,

0xfaf5,	// (0x00062a58) main_tv_pg_hdr_pane_g

0x142c,	// (0x0005438f) main_tv_pg_hdr_pane_t1

0x143a,	// (0x0005439d) main_tv_pg_hdr_pane_t2

0x1448,	// (0x000543ab) main_tv_pg_hdr_pane_t3

0x1458,	// (0x000543bb) main_tv_pg_hdr_pane_t4

0x1468,	// (0x000543cb) main_tv_pg_hdr_pane_t5

0x0004,

0xfb0c,	// (0x00062a6f) main_tv_pg_hdr_pane_t

0x1478,	// (0x000543db) single_mobtv_pg_channel_pane_ParamLimits

0x1478,	// (0x000543db) single_mobtv_pg_channel_pane

0x148a,	// (0x000543ed) single_mobtv_pg_channel_table_pane

0x1493,	// (0x000543f6) single_mobtv_pg_channel_thumb_pane

0x149c,	// (0x000543ff) single_tv_pg_channel_pane_g1

0x14a5,	// (0x00054408) single_tv_pg_channel_pane_g2

0x0001,

0xfb17,	// (0x00062a7a) single_tv_pg_channel_pane_g

0xc428,	// (0x0005f38b) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xc428,	// (0x0005f38b) bg_single_mobtv_pg_channel_thumb_pane

0x14ae,	// (0x00054411) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0x14ae,	// (0x00054411) single_mobtv_pg_channel_thumb_pane_g1

0x14bc,	// (0x0005441f) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0x14bc,	// (0x0005441f) single_mobtv_pg_channel_thumb_pane_g2

0x14c8,	// (0x0005442b) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0x14c8,	// (0x0005442b) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfb1c,	// (0x00062a7f) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfb1c,	// (0x00062a7f) single_mobtv_pg_channel_thumb_pane_g

0x14d4,	// (0x00054437) single_mobtv_pg_channel_thumb_pane_t1

0x14e2,	// (0x00054445) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfb23,	// (0x00062a86) single_mobtv_pg_channel_thumb_pane_t

0xc466,	// (0x0005f3c9) bg_single_mobtv_pg_channel_table_pane_g1

0xc466,	// (0x0005f3c9) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf08c,	// (0x00061fef) bg_single_mobtv_pg_channel_table_pane_g

0x14f0,	// (0x00054453) single_mobtv_pg_channel_table_pane_t1

0x14fe,	// (0x00054461) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfb28,	// (0x00062a8b) single_mobtv_pg_channel_table_pane_t

0x9ae1,	// (0x0005ca44) main_mobtv_info_pane_g1_ParamLimits

0x9ae1,	// (0x0005ca44) main_mobtv_info_pane_g1

0x9afd,	// (0x0005ca60) main_mobtv_info_pane_t1_ParamLimits

0x9afd,	// (0x0005ca60) main_mobtv_info_pane_t1

0x9b75,	// (0x0005cad8) main_mobtv_info_pane_t2_ParamLimits

0x9b75,	// (0x0005cad8) main_mobtv_info_pane_t2

0x0002,

0xfb32,	// (0x00062a95) main_mobtv_info_pane_t_ParamLimits

0xfb32,	// (0x00062a95) main_mobtv_info_pane_t

0x9c06,	// (0x0005cb69) wait_bar_pane_cp05

0x9c18,	// (0x0005cb7b) main_mobtv_loading_pane_g1_ParamLimits

0x9c18,	// (0x0005cb7b) main_mobtv_loading_pane_g1

0x9c24,	// (0x0005cb87) main_mobtv_loading_pane_g2_ParamLimits

0x9c24,	// (0x0005cb87) main_mobtv_loading_pane_g2

0x9c30,	// (0x0005cb93) main_mobtv_loading_pane_g3_ParamLimits

0x9c30,	// (0x0005cb93) main_mobtv_loading_pane_g3

0x0002,

0xfb39,	// (0x00062a9c) main_mobtv_loading_pane_g_ParamLimits

0xfb39,	// (0x00062a9c) main_mobtv_loading_pane_g

0x150c,	// (0x0005446f) main_mobtv_loading_pane_t1_ParamLimits

0x150c,	// (0x0005446f) main_mobtv_loading_pane_t1

0x1524,	// (0x00054487) main_mobtv_loading_pane_t2_ParamLimits

0x1524,	// (0x00054487) main_mobtv_loading_pane_t2

0x0001,

0xfb40,	// (0x00062aa3) main_mobtv_loading_pane_t_ParamLimits

0xfb40,	// (0x00062aa3) main_mobtv_loading_pane_t

0x9c3e,	// (0x0005cba1) wait_bar_pane_cp06_ParamLimits

0x9c3e,	// (0x0005cba1) wait_bar_pane_cp06

0x1548,	// (0x000544ab) main_mobtv_programe_curr_pane_t1

0x1556,	// (0x000544b9) main_mobtv_programe_curr_pane_t2

0x0001,

0xfb45,	// (0x00062aa8) main_mobtv_programe_curr_pane_t

0x1564,	// (0x000544c7) main_mobtv_programe_next_pane_t1

0x1572,	// (0x000544d5) main_mobtv_programe_next_pane_t2

0x1580,	// (0x000544e3) main_mobtv_programe_next_pane_t3

0x0002,

0xfb4a,	// (0x00062aad) main_mobtv_programe_next_pane_t

0x1b91,	// (0x00054af4) bg_popup_mobtv_noti_window_pane

0x158e,	// (0x000544f1) popup_mobtv_noti_window_g1

0x1596,	// (0x000544f9) popup_mobtv_noti_window_t1

0x15a4,	// (0x00054507) popup_mobtv_noti_window_t2

0x0001,

0xfb51,	// (0x00062ab4) popup_mobtv_noti_window_t

0xc466,	// (0x0005f3c9) bg_popup_mobtv_noti_window_pane_g1

0x3685,	// (0x000565e8) sc_clock_pane

0x3685,	// (0x000565e8) main_fs_bigclock_pane

0x9267,	// (0x0005c1ca) blid2_tripm_pane_t4_ParamLimits

0x9267,	// (0x0005c1ca) blid2_tripm_pane_t4

0xc436,	// (0x0005f399) sc_clock_pane_g1_ParamLimits

0xc436,	// (0x0005f399) sc_clock_pane_g1

0xc484,	// (0x0005f3e7) sc_clock_pane_t1_ParamLimits

0xc484,	// (0x0005f3e7) sc_clock_pane_t1

0xc484,	// (0x0005f3e7) sc_clock_pane_t2_ParamLimits

0xc484,	// (0x0005f3e7) sc_clock_pane_t2

0xc484,	// (0x0005f3e7) sc_clock_pane_t3_ParamLimits

0xc484,	// (0x0005f3e7) sc_clock_pane_t3

0x0004,

0xfb56,	// (0x00062ab9) sc_clock_pane_t_ParamLimits

0xfb56,	// (0x00062ab9) sc_clock_pane_t

0xa817,	// (0x0005d77a) main_fs_bigclock_indicator_pane_ParamLimits

0xa817,	// (0x0005d77a) main_fs_bigclock_indicator_pane

0x9c93,	// (0x0005cbf6) main_fs_bigclock_pane_g1_ParamLimits

0x9c93,	// (0x0005cbf6) main_fs_bigclock_pane_g1

0xa823,	// (0x0005d786) main_fs_bigclock_pane_t1_ParamLimits

0xa823,	// (0x0005d786) main_fs_bigclock_pane_t1

0xa835,	// (0x0005d798) main_fs_bigclock_pane_t2_ParamLimits

0xa835,	// (0x0005d798) main_fs_bigclock_pane_t2

0xa849,	// (0x0005d7ac) main_fs_bigclock_pane_t3_ParamLimits

0xa849,	// (0x0005d7ac) main_fs_bigclock_pane_t3

0x0002,

0xfce4,	// (0x00062c47) main_fs_bigclock_pane_t_ParamLimits

0xfce4,	// (0x00062c47) main_fs_bigclock_pane_t

0x1de4,	// (0x00054d47) main_fs_bigclock_indicator_pane_g1

0x12b8,	// (0x0005421b) ncim_query_content_pane_g2_ParamLimits

0x12b8,	// (0x0005421b) ncim_query_content_pane_g2

0x0001,

0xfae3,	// (0x00062a46) ncim_query_content_pane_g_ParamLimits

0xfae3,	// (0x00062a46) ncim_query_content_pane_g

0xc484,	// (0x0005f3e7) sc_clock_pane_t4_ParamLimits

0xc484,	// (0x0005f3e7) sc_clock_pane_t4

0x64dd,	// (0x00059440) main_radioblah_pane

0x7d90,	// (0x0005acf3) cell_call4_button_pane_t1_copy1_ParamLimits

0x7d90,	// (0x0005acf3) cell_call4_button_pane_t1_copy1

0x98c0,	// (0x0005c823) main_ncimui_pane_t1_ParamLimits

0x98c0,	// (0x0005c823) main_ncimui_pane_t1

0x98da,	// (0x0005c83d) main_ncimui_pane_t2_ParamLimits

0x98da,	// (0x0005c83d) main_ncimui_pane_t2

0x0002,

0xfadc,	// (0x00062a3f) main_ncimui_pane_t_ParamLimits

0xfadc,	// (0x00062a3f) main_ncimui_pane_t

0xd3e9,	// (0x0006034c) main_radioblah_anim_pane_ParamLimits

0xd3e9,	// (0x0006034c) main_radioblah_anim_pane

0xd3e9,	// (0x0006034c) main_radioblah_info_pane_ParamLimits

0xd3e9,	// (0x0006034c) main_radioblah_info_pane

0xd3f7,	// (0x0006035a) main_radioblah_pane_t1_ParamLimits

0xd3f7,	// (0x0006035a) main_radioblah_pane_t1

0xd3f7,	// (0x0006035a) main_radioblah_pane_t2_ParamLimits

0xd3f7,	// (0x0006035a) main_radioblah_pane_t2

0x0003,

0xfb77,	// (0x00062ada) main_radioblah_pane_t_ParamLimits

0xfb77,	// (0x00062ada) main_radioblah_pane_t

0xc41a,	// (0x0005f37d) main_radioblah_rocker_ctrl_pane_ParamLimits

0xc41a,	// (0x0005f37d) main_radioblah_rocker_ctrl_pane

0xe6f1,	// (0x00061654) main_radioblah_info_pane_t1_ParamLimits

0xe6f1,	// (0x00061654) main_radioblah_info_pane_t1

0x15e2,	// (0x00054545) main_radioblah_info_pane_t2_ParamLimits

0x15e2,	// (0x00054545) main_radioblah_info_pane_t2

0x0003,

0xfb80,	// (0x00062ae3) main_radioblah_info_pane_t_ParamLimits

0xfb80,	// (0x00062ae3) main_radioblah_info_pane_t

0xc466,	// (0x0005f3c9) main_radioblah_rocker_ctrl_pane_g1

0xc466,	// (0x0005f3c9) main_radioblah_rocker_ctrl_pane_g2

0xc466,	// (0x0005f3c9) main_radioblah_rocker_ctrl_pane_g3

0xc466,	// (0x0005f3c9) main_radioblah_rocker_ctrl_pane_g4

0xc466,	// (0x0005f3c9) main_radioblah_rocker_ctrl_pane_g5

0xc466,	// (0x0005f3c9) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfb89,	// (0x00062aec) main_radioblah_rocker_ctrl_pane_g

0x9872,	// (0x0005c7d5) main_cset_text2_pane_t1_copy1_ParamLimits

0x7e01,	// (0x0005ad64) cam4_image_uncrop_qvga_pane

0x7f46,	// (0x0005aea9) vid4_image_uncrop_qcif_pane

0x93e6,	// (0x0005c349) cam6_image_uncrop_qvga_pane_ParamLimits

0x93e6,	// (0x0005c349) cam6_image_uncrop_qvga_pane

0x0f80,	// (0x00053ee3) vid6_image_uncrop_qcif_pane_ParamLimits

0x0f80,	// (0x00053ee3) vid6_image_uncrop_qcif_pane

0x1b91,	// (0x00054af4) bg_popup_preview_window_pane_cp03

0x126a,	// (0x000541cd) list_cset_text2_pane

0x1272,	// (0x000541d5) main_cset6_text2_pane_g1

0x127a,	// (0x000541dd) main_cset6_text2_pane_t1

0x9e20,	// (0x0005cd83) list_cset_text2_pane_t1_ParamLimits

0x9e20,	// (0x0005cd83) list_cset_text2_pane_t1

0x64dd,	// (0x00059440) main_radioblah_pane_ParamLimits

0x9bf2,	// (0x0005cb55) main_mobtv_info_pane_t3_ParamLimits

0x9bf2,	// (0x0005cb55) main_mobtv_info_pane_t3

0xd40b,	// (0x0006036e) main_radioblah_pane_g1

0x15b2,	// (0x00054515) main_radioblah_info_pane_g1

0xc484,	// (0x0005f3e7) main_radioblah_info_pane_t3_ParamLimits

0xc484,	// (0x0005f3e7) main_radioblah_info_pane_t3

0x54cb,	// (0x0005842e) highlight_cell_cale_month_pane_ParamLimits

0x54cb,	// (0x0005842e) highlight_cell_cale_month_pane

0x3685,	// (0x000565e8) main_phob_fisheye_pane

0xec13,	// (0x00061b76) scroll_pane_cp0031_ParamLimits

0xec13,	// (0x00061b76) scroll_pane_cp0031

0x1092,	// (0x00053ff5) wait_bar_pane_cp08_ParamLimits

0x95fd,	// (0x0005c560) cset_list_set_pane_copy1_ParamLimits

0x1631,	// (0x00054594) highlight_cell_cale_month_pane_g1

0x9e37,	// (0x0005cd9a) highlight_cell_cale_month_pane_t1

0x0ce0,	// (0x00053c43) list_gen_pane_cp01

0x088f,	// (0x000537f2) scroll_pane_01

0x9e45,	// (0x0005cda8) list_single_double_fisheye_pane

0x9e4e,	// (0x0005cdb1) list_double_fisheye_pane_g1_ParamLimits

0x9e4e,	// (0x0005cdb1) list_double_fisheye_pane_g1

0x9e5a,	// (0x0005cdbd) list_double_fisheye_pane_g2_ParamLimits

0x9e5a,	// (0x0005cdbd) list_double_fisheye_pane_g2

0x9e6e,	// (0x0005cdd1) list_double_fisheye_pane_g3_ParamLimits

0x9e6e,	// (0x0005cdd1) list_double_fisheye_pane_g3

0x0004,

0xfb96,	// (0x00062af9) list_double_fisheye_pane_g_ParamLimits

0xfb96,	// (0x00062af9) list_double_fisheye_pane_g

0x9e97,	// (0x0005cdfa) list_double_fisheye_pane_t1_ParamLimits

0x9e97,	// (0x0005cdfa) list_double_fisheye_pane_t1

0x9eb2,	// (0x0005ce15) list_double_fisheye_pane_t2_ParamLimits

0x9eb2,	// (0x0005ce15) list_double_fisheye_pane_t2

0x0001,

0xfba1,	// (0x00062b04) list_double_fisheye_pane_t_ParamLimits

0xfba1,	// (0x00062b04) list_double_fisheye_pane_t

0x3685,	// (0x000565e8) main_call5_pane

0xc41a,	// (0x0005f37d) sc_swipe_pane_ParamLimits

0xc41a,	// (0x0005f37d) sc_swipe_pane

0x9ee0,	// (0x0005ce43) call5_image_pane_ParamLimits

0x9ee0,	// (0x0005ce43) call5_image_pane

0x9ef2,	// (0x0005ce55) call5_swipe_1_pane_ParamLimits

0x9ef2,	// (0x0005ce55) call5_swipe_1_pane

0x9efe,	// (0x0005ce61) call5_swipe_2_pane_ParamLimits

0x9efe,	// (0x0005ce61) call5_swipe_2_pane

0x9f18,	// (0x0005ce7b) popup_call5_audio_first_window_ParamLimits

0x9f18,	// (0x0005ce7b) popup_call5_audio_first_window

0xc428,	// (0x0005f38b) call5_swipe_1_pane_g1_ParamLimits

0xc428,	// (0x0005f38b) call5_swipe_1_pane_g1

0x1639,	// (0x0005459c) call5_swipe_1_pane_g2_ParamLimits

0x1639,	// (0x0005459c) call5_swipe_1_pane_g2

0x0001,

0xfba6,	// (0x00062b09) call5_swipe_1_pane_g_ParamLimits

0xfba6,	// (0x00062b09) call5_swipe_1_pane_g

0x1645,	// (0x000545a8) call5_swipe_1_pane_t1_ParamLimits

0x1645,	// (0x000545a8) call5_swipe_1_pane_t1

0xc428,	// (0x0005f38b) call5_swipe_2_pane_g1_ParamLimits

0xc428,	// (0x0005f38b) call5_swipe_2_pane_g1

0x165a,	// (0x000545bd) call5_swipe_2_pane_g2_ParamLimits

0x165a,	// (0x000545bd) call5_swipe_2_pane_g2

0x0001,

0xfbab,	// (0x00062b0e) call5_swipe_2_pane_g_ParamLimits

0xfbab,	// (0x00062b0e) call5_swipe_2_pane_g

0x1666,	// (0x000545c9) call5_swipe_2_pane_t1_ParamLimits

0x1666,	// (0x000545c9) call5_swipe_2_pane_t1

0xc428,	// (0x0005f38b) sc_swipe_pane_g1_ParamLimits

0xc428,	// (0x0005f38b) sc_swipe_pane_g1

0xc436,	// (0x0005f399) sc_swipe_pane_g2_ParamLimits

0xc436,	// (0x0005f399) sc_swipe_pane_g2

0x0001,

0xfbb0,	// (0x00062b13) sc_swipe_pane_g_ParamLimits

0xfbb0,	// (0x00062b13) sc_swipe_pane_g

0xc470,	// (0x0005f3d3) sc_swipe_pane_t1_ParamLimits

0xc470,	// (0x0005f3d3) sc_swipe_pane_t1

0x3685,	// (0x000565e8) main_cmail_launcher_pane

0x9f28,	// (0x0005ce8b) aid_size_cell_cmail_l_ParamLimits

0x9f28,	// (0x0005ce8b) aid_size_cell_cmail_l

0x9f36,	// (0x0005ce99) grid_cmail_l_pane_ParamLimits

0x9f36,	// (0x0005ce99) grid_cmail_l_pane

0x9f44,	// (0x0005cea7) cell_cmail_l_pane_ParamLimits

0x9f44,	// (0x0005cea7) cell_cmail_l_pane

0x9f5f,	// (0x0005cec2) cell_cmail_l_pane_g1_ParamLimits

0x9f5f,	// (0x0005cec2) cell_cmail_l_pane_g1

0x9f6b,	// (0x0005cece) cell_cmail_l_pane_t1_ParamLimits

0x9f6b,	// (0x0005cece) cell_cmail_l_pane_t1

0x9f81,	// (0x0005cee4) cell_cmail_l_pane_t2_ParamLimits

0x9f81,	// (0x0005cee4) cell_cmail_l_pane_t2

0x0001,

0xfbb5,	// (0x00062b18) cell_cmail_l_pane_t_ParamLimits

0xfbb5,	// (0x00062b18) cell_cmail_l_pane_t

0x39af,	// (0x00056912) grid_highlight_pane_cp018_ParamLimits

0x39af,	// (0x00056912) grid_highlight_pane_cp018

0x3578,	// (0x000564db) main2_pane_ParamLimits

0x3578,	// (0x000564db) main2_pane

0xc553,	// (0x0005f4b6) popup_sp_fs_action_menu_bg_pane_g1

0xc55b,	// (0x0005f4be) popup_sp_fs_action_menu_bg_pane_g2

0xc563,	// (0x0005f4c6) popup_sp_fs_action_menu_bg_pane_g3

0xc56b,	// (0x0005f4ce) popup_sp_fs_action_menu_bg_pane_g4

0xc573,	// (0x0005f4d6) popup_sp_fs_action_menu_bg_pane_g5

0xc57b,	// (0x0005f4de) popup_sp_fs_action_menu_bg_pane_g6

0xc583,	// (0x0005f4e6) popup_sp_fs_action_menu_bg_pane_g7

0xc58b,	// (0x0005f4ee) popup_sp_fs_action_menu_bg_pane_g8

0xc593,	// (0x0005f4f6) popup_sp_fs_action_menu_bg_pane_g9

0xc59b,	// (0x0005f4fe) popup_sp_fs_action_menu_bg_pane_g10

0xc59b,	// (0x0005f4fe) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf0dd,	// (0x00062040) popup_sp_fs_action_menu_bg_pane_g

0xc428,	// (0x0005f38b) list_medium_line_x2_t3_g3_g1_ParamLimits

0xc428,	// (0x0005f38b) list_medium_line_x2_t3_g3_g1

0xc428,	// (0x0005f38b) list_medium_line_x2_t3_g3_g2_ParamLimits

0xc428,	// (0x0005f38b) list_medium_line_x2_t3_g3_g2

0xc428,	// (0x0005f38b) list_medium_line_x2_t3_g3_g3_ParamLimits

0xc428,	// (0x0005f38b) list_medium_line_x2_t3_g3_g3

0x0002,

0xf18b,	// (0x000620ee) list_medium_line_x2_t3_g3_g_ParamLimits

0xf18b,	// (0x000620ee) list_medium_line_x2_t3_g3_g

0xc470,	// (0x0005f3d3) list_medium_line_x2_t3_g3_t1_ParamLimits

0xc470,	// (0x0005f3d3) list_medium_line_x2_t3_g3_t1

0xc470,	// (0x0005f3d3) list_medium_line_x2_t3_g3_t2_ParamLimits

0xc470,	// (0x0005f3d3) list_medium_line_x2_t3_g3_t2

0xc470,	// (0x0005f3d3) list_medium_line_x2_t3_g3_t3_ParamLimits

0xc470,	// (0x0005f3d3) list_medium_line_x2_t3_g3_t3

0x0002,

0xf192,	// (0x000620f5) list_medium_line_x2_t3_g3_t_ParamLimits

0xf192,	// (0x000620f5) list_medium_line_x2_t3_g3_t

0xc428,	// (0x0005f38b) list_medium_line_x2_t3_g2_g1_ParamLimits

0xc428,	// (0x0005f38b) list_medium_line_x2_t3_g2_g1

0xc428,	// (0x0005f38b) list_medium_line_x2_t3_g2_g2_ParamLimits

0xc428,	// (0x0005f38b) list_medium_line_x2_t3_g2_g2

0x0001,

0xf199,	// (0x000620fc) list_medium_line_x2_t3_g2_g_ParamLimits

0xf199,	// (0x000620fc) list_medium_line_x2_t3_g2_g

0xc470,	// (0x0005f3d3) list_medium_line_x2_t3_g2_t1_ParamLimits

0xc470,	// (0x0005f3d3) list_medium_line_x2_t3_g2_t1

0xc470,	// (0x0005f3d3) list_medium_line_x2_t3_g2_t2_ParamLimits

0xc470,	// (0x0005f3d3) list_medium_line_x2_t3_g2_t2

0xc470,	// (0x0005f3d3) list_medium_line_x2_t3_g2_t3_ParamLimits

0xc470,	// (0x0005f3d3) list_medium_line_x2_t3_g2_t3

0x0002,

0xf192,	// (0x000620f5) list_medium_line_x2_t3_g2_t_ParamLimits

0xf192,	// (0x000620f5) list_medium_line_x2_t3_g2_t

0xc428,	// (0x0005f38b) list_medium_line_x2_t4_g4_g1_ParamLimits

0xc428,	// (0x0005f38b) list_medium_line_x2_t4_g4_g1

0xc428,	// (0x0005f38b) list_medium_line_x2_t4_g4_g2_ParamLimits

0xc428,	// (0x0005f38b) list_medium_line_x2_t4_g4_g2

0xc428,	// (0x0005f38b) list_medium_line_x2_t4_g4_g3_ParamLimits

0xc428,	// (0x0005f38b) list_medium_line_x2_t4_g4_g3

0xc428,	// (0x0005f38b) list_medium_line_x2_t4_g4_g4_ParamLimits

0xc428,	// (0x0005f38b) list_medium_line_x2_t4_g4_g4

0x0003,

0xf19e,	// (0x00062101) list_medium_line_x2_t4_g4_g_ParamLimits

0xf19e,	// (0x00062101) list_medium_line_x2_t4_g4_g

0xc470,	// (0x0005f3d3) list_medium_line_x2_t4_g4_t1_ParamLimits

0xc470,	// (0x0005f3d3) list_medium_line_x2_t4_g4_t1

0xc470,	// (0x0005f3d3) list_medium_line_x2_t4_g4_t2_ParamLimits

0xc470,	// (0x0005f3d3) list_medium_line_x2_t4_g4_t2

0xc470,	// (0x0005f3d3) list_medium_line_x2_t4_g4_t3_ParamLimits

0xc470,	// (0x0005f3d3) list_medium_line_x2_t4_g4_t3

0xc470,	// (0x0005f3d3) list_medium_line_x2_t4_g4_t4_ParamLimits

0xc470,	// (0x0005f3d3) list_medium_line_x2_t4_g4_t4

0x0003,

0xf1a7,	// (0x0006210a) list_medium_line_x2_t4_g4_t_ParamLimits

0xf1a7,	// (0x0006210a) list_medium_line_x2_t4_g4_t

0xc428,	// (0x0005f38b) list_medium_line_x2_t2_g4_g1_ParamLimits

0xc428,	// (0x0005f38b) list_medium_line_x2_t2_g4_g1

0xc428,	// (0x0005f38b) list_medium_line_x2_t2_g4_g2_ParamLimits

0xc428,	// (0x0005f38b) list_medium_line_x2_t2_g4_g2

0xc428,	// (0x0005f38b) list_medium_line_x2_t2_g4_g3_ParamLimits

0xc428,	// (0x0005f38b) list_medium_line_x2_t2_g4_g3

0xc428,	// (0x0005f38b) list_medium_line_x2_t2_g4_g4_ParamLimits

0xc428,	// (0x0005f38b) list_medium_line_x2_t2_g4_g4

0x0003,

0xf19e,	// (0x00062101) list_medium_line_x2_t2_g4_g_ParamLimits

0xf19e,	// (0x00062101) list_medium_line_x2_t2_g4_g

0xc470,	// (0x0005f3d3) list_medium_line_x2_t2_g4_t1_ParamLimits

0xc470,	// (0x0005f3d3) list_medium_line_x2_t2_g4_t1

0xc470,	// (0x0005f3d3) list_medium_line_x2_t2_g4_t2_ParamLimits

0xc470,	// (0x0005f3d3) list_medium_line_x2_t2_g4_t2

0x0001,

0xf20e,	// (0x00062171) list_medium_line_x2_t2_g4_t_ParamLimits

0xf20e,	// (0x00062171) list_medium_line_x2_t2_g4_t

0xc428,	// (0x0005f38b) list_medium_line_x2_t2_g3_g1_ParamLimits

0xc428,	// (0x0005f38b) list_medium_line_x2_t2_g3_g1

0xc428,	// (0x0005f38b) list_medium_line_x2_t2_g3_g2_ParamLimits

0xc428,	// (0x0005f38b) list_medium_line_x2_t2_g3_g2

0xc428,	// (0x0005f38b) list_medium_line_x2_t2_g3_g3_ParamLimits

0xc428,	// (0x0005f38b) list_medium_line_x2_t2_g3_g3

0x0002,

0xf18b,	// (0x000620ee) list_medium_line_x2_t2_g3_g_ParamLimits

0xf18b,	// (0x000620ee) list_medium_line_x2_t2_g3_g

0xc470,	// (0x0005f3d3) list_medium_line_x2_t2_g3_t1_ParamLimits

0xc470,	// (0x0005f3d3) list_medium_line_x2_t2_g3_t1

0xc470,	// (0x0005f3d3) list_medium_line_x2_t2_g3_t2_ParamLimits

0xc470,	// (0x0005f3d3) list_medium_line_x2_t2_g3_t2

0x0001,

0xf20e,	// (0x00062171) list_medium_line_x2_t2_g3_t_ParamLimits

0xf20e,	// (0x00062171) list_medium_line_x2_t2_g3_t

0x566f,	// (0x000585d2) main_sp_fs_list_pane_ParamLimits

0x566f,	// (0x000585d2) main_sp_fs_list_pane

0x567b,	// (0x000585de) sp_fs_scroll_pane_ParamLimits

0x567b,	// (0x000585de) sp_fs_scroll_pane

0xcbbc,	// (0x0005fb1f) list_medium_line_x2_t3_t1

0xcbbc,	// (0x0005fb1f) list_medium_line_x2_t3_t2

0xcbbc,	// (0x0005fb1f) list_medium_line_x2_t3_t3

0x0002,

0xf259,	// (0x000621bc) list_medium_line_x2_t3_t

0xcbbc,	// (0x0005fb1f) list_medium_line_x3_t4_t1

0xcbbc,	// (0x0005fb1f) list_medium_line_x3_t4_t2

0xcbbc,	// (0x0005fb1f) list_medium_line_x3_t4_t3

0xcbbc,	// (0x0005fb1f) list_medium_line_x3_t4_t4

0x0003,

0xf260,	// (0x000621c3) list_medium_line_x3_t4_t

0xcbbc,	// (0x0005fb1f) list_medium_line_x4_t5_t1

0xcbbc,	// (0x0005fb1f) list_medium_line_x4_t5_t2

0xcbbc,	// (0x0005fb1f) list_medium_line_x4_t5_t3

0xcbbc,	// (0x0005fb1f) list_medium_line_x4_t5_t4

0xcbbc,	// (0x0005fb1f) list_medium_line_x4_t5_t5

0x0004,

0xf269,	// (0x000621cc) list_medium_line_x4_t5_t

0xc428,	// (0x0005f38b) list_medium_line_t4_g4_g1_ParamLimits

0xc428,	// (0x0005f38b) list_medium_line_t4_g4_g1

0xc428,	// (0x0005f38b) list_medium_line_t4_g4_g2_ParamLimits

0xc428,	// (0x0005f38b) list_medium_line_t4_g4_g2

0xc428,	// (0x0005f38b) list_medium_line_t4_g4_g3_ParamLimits

0xc428,	// (0x0005f38b) list_medium_line_t4_g4_g3

0xc428,	// (0x0005f38b) list_medium_line_t4_g4_g4_ParamLimits

0xc428,	// (0x0005f38b) list_medium_line_t4_g4_g4

0x0003,

0xf19e,	// (0x00062101) list_medium_line_t4_g4_g_ParamLimits

0xf19e,	// (0x00062101) list_medium_line_t4_g4_g

0xc470,	// (0x0005f3d3) list_medium_line_t4_g4_t1_ParamLimits

0xc470,	// (0x0005f3d3) list_medium_line_t4_g4_t1

0xc470,	// (0x0005f3d3) list_medium_line_t4_g4_t2_ParamLimits

0xc470,	// (0x0005f3d3) list_medium_line_t4_g4_t2

0xc470,	// (0x0005f3d3) list_medium_line_t4_g4_t3_ParamLimits

0xc470,	// (0x0005f3d3) list_medium_line_t4_g4_t3

0xc470,	// (0x0005f3d3) list_medium_line_t4_g4_t4_ParamLimits

0xc470,	// (0x0005f3d3) list_medium_line_t4_g4_t4

0x0003,

0xf1a7,	// (0x0006210a) list_medium_line_t4_g4_t_ParamLimits

0xf1a7,	// (0x0006210a) list_medium_line_t4_g4_t

0x5774,	// (0x000586d7) chi_dic_find_pane_g1

0x64f9,	// (0x0005945c) main_tport_pane

0xcbbc,	// (0x0005fb1f) list_medium_line_plain_t1

0xc428,	// (0x0005f38b) list_medium_line_t2_g2_g1_ParamLimits

0xc428,	// (0x0005f38b) list_medium_line_t2_g2_g1

0xc428,	// (0x0005f38b) list_medium_line_t2_g2_g2_ParamLimits

0xc428,	// (0x0005f38b) list_medium_line_t2_g2_g2

0x0001,

0xf199,	// (0x000620fc) list_medium_line_t2_g2_g_ParamLimits

0xf199,	// (0x000620fc) list_medium_line_t2_g2_g

0xc470,	// (0x0005f3d3) list_medium_line_t2_g2_t1_ParamLimits

0xc470,	// (0x0005f3d3) list_medium_line_t2_g2_t1

0xc470,	// (0x0005f3d3) list_medium_line_t2_g2_t2_ParamLimits

0xc470,	// (0x0005f3d3) list_medium_line_t2_g2_t2

0x0001,

0xf20e,	// (0x00062171) list_medium_line_t2_g2_t_ParamLimits

0xf20e,	// (0x00062171) list_medium_line_t2_g2_t

0x0284,	// (0x000531e7) aid_sp_fs_list_icon_a_sm

0x028c,	// (0x000531ef) aid_sp_fs_list_icon_d

0x0294,	// (0x000531f7) aid_sp_fs_text_primary

0x0ce9,	// (0x00053c4c) aid_sp_fs_text_secondary

0x1b91,	// (0x00054af4) list_medium_line

0x1b91,	// (0x00054af4) list_medium_line_g2

0x1b91,	// (0x00054af4) list_medium_line_g3

0x1b91,	// (0x00054af4) list_medium_line_plain

0x1b91,	// (0x00054af4) list_medium_line_plain_t2

0x1b91,	// (0x00054af4) list_medium_line_plain_t3

0x1b91,	// (0x00054af4) list_medium_line_right_icon

0x1b91,	// (0x00054af4) list_medium_line_right_iconx2

0x1b91,	// (0x00054af4) list_medium_line_t2

0x1b91,	// (0x00054af4) list_medium_line_t2_g2

0x1b91,	// (0x00054af4) list_medium_line_t2_g3

0x1b91,	// (0x00054af4) list_medium_line_t2_right_icon

0x1b91,	// (0x00054af4) list_medium_line_t2_right_iconx2

0x1b91,	// (0x00054af4) list_medium_line_t3

0x1b91,	// (0x00054af4) list_medium_line_t3_g2

0x1b91,	// (0x00054af4) list_medium_line_t3_g3

0x1b91,	// (0x00054af4) list_medium_line_t3_right_iconx2

0x1b91,	// (0x00054af4) list_medium_line_t4_g4

0x1b91,	// (0x00054af4) list_medium_line_x2

0x1b91,	// (0x00054af4) list_medium_line_x2_t2_g2

0x1b91,	// (0x00054af4) list_medium_line_x2_t2_g3

0x1b91,	// (0x00054af4) list_medium_line_x2_t2_g4

0x1b91,	// (0x00054af4) list_medium_line_x2_t3

0x1b91,	// (0x00054af4) list_medium_line_x2_t3_g2

0x1b91,	// (0x00054af4) list_medium_line_x2_t3_g3

0x1b91,	// (0x00054af4) list_medium_line_x2_t3_g4

0x1b91,	// (0x00054af4) list_medium_line_x2_t4_g2

0x1b91,	// (0x00054af4) list_medium_line_x2_t4_g4

0x1b91,	// (0x00054af4) list_medium_line_x3

0x1b91,	// (0x00054af4) list_medium_line_x3_t4

0x1b91,	// (0x00054af4) list_medium_line_x3_t4_g4

0x1b91,	// (0x00054af4) list_medium_line_x4_t4

0x1b91,	// (0x00054af4) list_medium_line_x4_t4_g7

0x1b91,	// (0x00054af4) list_medium_line_x4_t5

0x90f2,	// (0x0005c055) list_single_fs_dyc_pane_ParamLimits

0x90f2,	// (0x0005c055) list_single_fs_dyc_pane

0xc428,	// (0x0005f38b) list_medium_line_x4_t4_g7_g1_ParamLimits

0xc428,	// (0x0005f38b) list_medium_line_x4_t4_g7_g1

0xc428,	// (0x0005f38b) list_medium_line_x4_t4_g7_g2_ParamLimits

0xc428,	// (0x0005f38b) list_medium_line_x4_t4_g7_g2

0xc428,	// (0x0005f38b) list_medium_line_x4_t4_g7_g3_ParamLimits

0xc428,	// (0x0005f38b) list_medium_line_x4_t4_g7_g3

0xc428,	// (0x0005f38b) list_medium_line_x4_t4_g7_g4_ParamLimits

0xc428,	// (0x0005f38b) list_medium_line_x4_t4_g7_g4

0xc428,	// (0x0005f38b) list_medium_line_x4_t4_g7_g5_ParamLimits

0xc428,	// (0x0005f38b) list_medium_line_x4_t4_g7_g5

0xc428,	// (0x0005f38b) list_medium_line_x4_t4_g7_g6_ParamLimits

0xc428,	// (0x0005f38b) list_medium_line_x4_t4_g7_g6

0xc436,	// (0x0005f399) list_medium_line_x4_t4_g7_g7_ParamLimits

0xc436,	// (0x0005f399) list_medium_line_x4_t4_g7_g7

0x0006,

0xfabd,	// (0x00062a20) list_medium_line_x4_t4_g7_g_ParamLimits

0xfabd,	// (0x00062a20) list_medium_line_x4_t4_g7_g

0xc470,	// (0x0005f3d3) list_medium_line_x4_t4_g7_t1_ParamLimits

0xc470,	// (0x0005f3d3) list_medium_line_x4_t4_g7_t1

0xc470,	// (0x0005f3d3) list_medium_line_x4_t4_g7_t2_ParamLimits

0xc470,	// (0x0005f3d3) list_medium_line_x4_t4_g7_t2

0xc470,	// (0x0005f3d3) list_medium_line_x4_t4_g7_t3_ParamLimits

0xc470,	// (0x0005f3d3) list_medium_line_x4_t4_g7_t3

0xc484,	// (0x0005f3e7) list_medium_line_x4_t4_g7_t4_ParamLimits

0xc484,	// (0x0005f3e7) list_medium_line_x4_t4_g7_t4

0xc484,	// (0x0005f3e7) list_medium_line_x4_t4_g7_t5_ParamLimits

0xc484,	// (0x0005f3e7) list_medium_line_x4_t4_g7_t5

0x0004,

0xfacc,	// (0x00062a2f) list_medium_line_x4_t4_g7_t_ParamLimits

0xfacc,	// (0x00062a2f) list_medium_line_x4_t4_g7_t

0x9855,	// (0x0005c7b8) list_single_dyc_row_pane_ParamLimits

0x9855,	// (0x0005c7b8) list_single_dyc_row_pane

0x9ed4,	// (0x0005ce37) call5_gesture_pane_ParamLimits

0x9ed4,	// (0x0005ce37) call5_gesture_pane

0x9f0a,	// (0x0005ce6d) call5_windows_pane_ParamLimits

0x9f0a,	// (0x0005ce6d) call5_windows_pane

0x9f9e,	// (0x0005cf01) call5_swipe_1_pane_cp_ParamLimits

0x9f9e,	// (0x0005cf01) call5_swipe_1_pane_cp

0x9faa,	// (0x0005cf0d) call5_swipe_2_pane_cp_ParamLimits

0x9faa,	// (0x0005cf0d) call5_swipe_2_pane_cp

0xc6a1,	// (0x0005f604) call5_image_pane_cp

0x9fb6,	// (0x0005cf19) popup_call5_audio_first_window_cp_ParamLimits

0x9fb6,	// (0x0005cf19) popup_call5_audio_first_window_cp

0x167b,	// (0x000545de) call5_swipe_1_pane_g1_cp_ParamLimits

0x167b,	// (0x000545de) call5_swipe_1_pane_g1_cp

0x1688,	// (0x000545eb) call5_swipe_1_pane_g2_cp

0x1690,	// (0x000545f3) call5_swipe_1_pane_t1_cp_ParamLimits

0x1690,	// (0x000545f3) call5_swipe_1_pane_t1_cp

0x167b,	// (0x000545de) call5_swipe_2_pane_g1_cp_ParamLimits

0x167b,	// (0x000545de) call5_swipe_2_pane_g1_cp

0x16a5,	// (0x00054608) call5_swipe_2_pane_g2_cp

0x16ad,	// (0x00054610) call5_swipe_2_pane_t1_cp_ParamLimits

0x16ad,	// (0x00054610) call5_swipe_2_pane_t1_cp

0x39af,	// (0x00056912) main_sp_fs_email_pane

0x0972,	// (0x000538d5) main_sp_fs_listscroll_pane_te

0x9fc4,	// (0x0005cf27) popup_sp_fs_action_menu_pane_ParamLimits

0x9fc4,	// (0x0005cf27) popup_sp_fs_action_menu_pane

0xc466,	// (0x0005f3c9) bg_sp_fs_ctrlbar_pane_g1

0x16c2,	// (0x00054625) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0x16cb,	// (0x0005462e) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0x16d4,	// (0x00054637) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xc466,	// (0x0005f3c9) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfbba,	// (0x00062b1d) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xe4a9,	// (0x0006140c) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xe4a9,	// (0x0006140c) bg_sp_fs_ctrlbar_ddmenu_pane

0x16dd,	// (0x00054640) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0x16dd,	// (0x00054640) main_sp_fs_ctrlbar_ddmenu_pane_g1

0x16e9,	// (0x0005464c) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0x16e9,	// (0x0005464c) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfbc3,	// (0x00062b26) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfbc3,	// (0x00062b26) main_sp_fs_ctrlbar_ddmenu_pane_g

0x16f5,	// (0x00054658) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0x16f5,	// (0x00054658) main_sp_fs_ctrlbar_ddmenu_pane_t1

0xc466,	// (0x0005f3c9) list_medium_line_t2_right_icon_g1

0xcbbc,	// (0x0005fb1f) list_medium_line_t2_right_icon_t1

0xcbbc,	// (0x0005fb1f) list_medium_line_t2_right_icon_t2

0x0001,

0xfbc8,	// (0x00062b2b) list_medium_line_t2_right_icon_t

0xd3e9,	// (0x0006034c) bg_sp_fs_ctrlbar_pane_ParamLimits

0xd3e9,	// (0x0006034c) bg_sp_fs_ctrlbar_pane

0xa063,	// (0x0005cfc6) main_sp_fs_ctrlbar_button_pane_cp01

0xa06b,	// (0x0005cfce) main_sp_fs_ctrlbar_ddmenu_pane

0x1749,	// (0x000546ac) main_sp_fs_ctrlbar_pane_g1

0x1755,	// (0x000546b8) main_sp_fs_ctrlbar_pane_g2

0x0003,

0xfbcd,	// (0x00062b30) main_sp_fs_ctrlbar_pane_g

0xa0a9,	// (0x0005d00c) main_sp_fs_ctrlbar_pane_t1

0xa0e6,	// (0x0005d049) main_sp_fs_ctrlbar_pane

0xa100,	// (0x0005d063) main_sp_fs_listscroll_pane_te_cp01

0xa11b,	// (0x0005d07e) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0xa11b,	// (0x0005d07e) popup_sp_fs_action_menu_pane_cp01

0x39af,	// (0x00056912) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0x39af,	// (0x00056912) bg_sp_fs_highlight_list_pane_cp01

0x02ab,	// (0x0005320e) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0x02ab,	// (0x0005320e) sp_fs_action_menu_list_gene_pane_g1

0x177c,	// (0x000546df) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0x177c,	// (0x000546df) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfbdb,	// (0x00062b3e) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfbdb,	// (0x00062b3e) sp_fs_action_menu_list_gene_pane_g

0x02ba,	// (0x0005321d) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0x02ba,	// (0x0005321d) sp_fs_action_menu_list_gene_pane_t1

0x02d2,	// (0x00053235) sp_fs_action_menu_list_gene_pane_ParamLimits

0x02d2,	// (0x00053235) sp_fs_action_menu_list_gene_pane

0x1789,	// (0x000546ec) popup_sp_fs_action_menu_bg_pane_ParamLimits

0x1789,	// (0x000546ec) popup_sp_fs_action_menu_bg_pane

0x02f5,	// (0x00053258) sp_fs_action_menu_list_pane_ParamLimits

0x02f5,	// (0x00053258) sp_fs_action_menu_list_pane

0x0319,	// (0x0005327c) sp_fs_scroll_pane_cp01_ParamLimits

0x0319,	// (0x0005327c) sp_fs_scroll_pane_cp01

0xcbbc,	// (0x0005fb1f) list_medium_line_plain_t2_t1

0xcbbc,	// (0x0005fb1f) list_medium_line_plain_t2_t2

0x0001,

0xfbc8,	// (0x00062b2b) list_medium_line_plain_t2_t

0xcbbc,	// (0x0005fb1f) list_medium_line_plain_t3_t1

0xcbbc,	// (0x0005fb1f) list_medium_line_plain_t3_t2

0xcbbc,	// (0x0005fb1f) list_medium_line_plain_t3_t3

0x0002,

0xf259,	// (0x000621bc) list_medium_line_plain_t3_t

0xc428,	// (0x0005f38b) list_medium_line_x2_t2_g2_g1_ParamLimits

0xc428,	// (0x0005f38b) list_medium_line_x2_t2_g2_g1

0xc428,	// (0x0005f38b) list_medium_line_x2_t2_g2_g2_ParamLimits

0xc428,	// (0x0005f38b) list_medium_line_x2_t2_g2_g2

0x0001,

0xf199,	// (0x000620fc) list_medium_line_x2_t2_g2_g_ParamLimits

0xf199,	// (0x000620fc) list_medium_line_x2_t2_g2_g

0xc470,	// (0x0005f3d3) list_medium_line_x2_t2_g2_t1_ParamLimits

0xc470,	// (0x0005f3d3) list_medium_line_x2_t2_g2_t1

0xc470,	// (0x0005f3d3) list_medium_line_x2_t2_g2_t2_ParamLimits

0xc470,	// (0x0005f3d3) list_medium_line_x2_t2_g2_t2

0x0001,

0xf20e,	// (0x00062171) list_medium_line_x2_t2_g2_t_ParamLimits

0xf20e,	// (0x00062171) list_medium_line_x2_t2_g2_t

0xc428,	// (0x0005f38b) list_medium_line_x2_t4_g2_g1_ParamLimits

0xc428,	// (0x0005f38b) list_medium_line_x2_t4_g2_g1

0xc428,	// (0x0005f38b) list_medium_line_x2_t4_g2_g2_ParamLimits

0xc428,	// (0x0005f38b) list_medium_line_x2_t4_g2_g2

0x0001,

0xf199,	// (0x000620fc) list_medium_line_x2_t4_g2_g_ParamLimits

0xf199,	// (0x000620fc) list_medium_line_x2_t4_g2_g

0xc470,	// (0x0005f3d3) list_medium_line_x2_t4_g2_t1_ParamLimits

0xc470,	// (0x0005f3d3) list_medium_line_x2_t4_g2_t1

0xc470,	// (0x0005f3d3) list_medium_line_x2_t4_g2_t2_ParamLimits

0xc470,	// (0x0005f3d3) list_medium_line_x2_t4_g2_t2

0xc470,	// (0x0005f3d3) list_medium_line_x2_t4_g2_t3_ParamLimits

0xc470,	// (0x0005f3d3) list_medium_line_x2_t4_g2_t3

0xc470,	// (0x0005f3d3) list_medium_line_x2_t4_g2_t4_ParamLimits

0xc470,	// (0x0005f3d3) list_medium_line_x2_t4_g2_t4

0x0003,

0xf1a7,	// (0x0006210a) list_medium_line_x2_t4_g2_t_ParamLimits

0xf1a7,	// (0x0006210a) list_medium_line_x2_t4_g2_t

0xc466,	// (0x0005f3c9) list_medium_line_t3_right_iconx2_g1

0xc466,	// (0x0005f3c9) list_medium_line_t3_right_iconx2_g2

0xc466,	// (0x0005f3c9) list_medium_line_t3_right_iconx2_g3

0x0002,

0xf375,	// (0x000622d8) list_medium_line_t3_right_iconx2_g

0xcbbc,	// (0x0005fb1f) list_medium_line_t3_right_iconx2_t1

0xcbbc,	// (0x0005fb1f) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfbc8,	// (0x00062b2b) list_medium_line_t3_right_iconx2_t

0xc428,	// (0x0005f38b) list_medium_line_x3_t4_g4_g1_ParamLimits

0xc428,	// (0x0005f38b) list_medium_line_x3_t4_g4_g1

0xc428,	// (0x0005f38b) list_medium_line_x3_t4_g4_g2_ParamLimits

0xc428,	// (0x0005f38b) list_medium_line_x3_t4_g4_g2

0xc428,	// (0x0005f38b) list_medium_line_x3_t4_g4_g3_ParamLimits

0xc428,	// (0x0005f38b) list_medium_line_x3_t4_g4_g3

0xc428,	// (0x0005f38b) list_medium_line_x3_t4_g4_g4_ParamLimits

0xc428,	// (0x0005f38b) list_medium_line_x3_t4_g4_g4

0x0003,

0xf19e,	// (0x00062101) list_medium_line_x3_t4_g4_g_ParamLimits

0xf19e,	// (0x00062101) list_medium_line_x3_t4_g4_g

0xc470,	// (0x0005f3d3) list_medium_line_x3_t4_g4_t1_ParamLimits

0xc470,	// (0x0005f3d3) list_medium_line_x3_t4_g4_t1

0xc470,	// (0x0005f3d3) list_medium_line_x3_t4_g4_t2_ParamLimits

0xc470,	// (0x0005f3d3) list_medium_line_x3_t4_g4_t2

0xc470,	// (0x0005f3d3) list_medium_line_x3_t4_g4_t3_ParamLimits

0xc470,	// (0x0005f3d3) list_medium_line_x3_t4_g4_t3

0xc470,	// (0x0005f3d3) list_medium_line_x3_t4_g4_t4_ParamLimits

0xc470,	// (0x0005f3d3) list_medium_line_x3_t4_g4_t4

0x0003,

0xf1a7,	// (0x0006210a) list_medium_line_x3_t4_g4_t_ParamLimits

0xf1a7,	// (0x0006210a) list_medium_line_x3_t4_g4_t

0xa13b,	// (0x0005d09e) list_single_dyc_row_text_pane_t1_ParamLimits

0xa13b,	// (0x0005d09e) list_single_dyc_row_text_pane_t1

0xa178,	// (0x0005d0db) list_single_dyc_row_text_pane_t2_ParamLimits

0xa178,	// (0x0005d0db) list_single_dyc_row_text_pane_t2

0x033f,	// (0x000532a2) list_single_dyc_row_text_pane_t3_ParamLimits

0x033f,	// (0x000532a2) list_single_dyc_row_text_pane_t3

0x0005,

0xfbe0,	// (0x00062b43) list_single_dyc_row_text_pane_t_ParamLimits

0xfbe0,	// (0x00062b43) list_single_dyc_row_text_pane_t

0x0363,	// (0x000532c6) list_single_dyc_row_pane_g1_ParamLimits

0x0363,	// (0x000532c6) list_single_dyc_row_pane_g1

0x036f,	// (0x000532d2) list_single_dyc_row_pane_g2_ParamLimits

0x036f,	// (0x000532d2) list_single_dyc_row_pane_g2

0x037b,	// (0x000532de) list_single_dyc_row_pane_g3_ParamLimits

0x037b,	// (0x000532de) list_single_dyc_row_pane_g3

0x038e,	// (0x000532f1) list_single_dyc_row_pane_g4_ParamLimits

0x038e,	// (0x000532f1) list_single_dyc_row_pane_g4

0x0006,

0xfbed,	// (0x00062b50) list_single_dyc_row_pane_g_ParamLimits

0xfbed,	// (0x00062b50) list_single_dyc_row_pane_g

0x03e0,	// (0x00053343) list_single_dyc_row_text_pane_ParamLimits

0x03e0,	// (0x00053343) list_single_dyc_row_text_pane

0x1b91,	// (0x00054af4) bg_sp_fs_scroll_pane

0x1797,	// (0x000546fa) thumb_sp_fs_scroll_pane

0xc428,	// (0x0005f38b) list_medium_line_g1_ParamLimits

0xc428,	// (0x0005f38b) list_medium_line_g1

0xc470,	// (0x0005f3d3) list_medium_line_t1_ParamLimits

0xc470,	// (0x0005f3d3) list_medium_line_t1

0xc428,	// (0x0005f38b) list_medium_line_x2_g1_ParamLimits

0xc428,	// (0x0005f38b) list_medium_line_x2_g1

0xc428,	// (0x0005f38b) list_medium_line_x2_g2_ParamLimits

0xc428,	// (0x0005f38b) list_medium_line_x2_g2

0x0001,

0xf199,	// (0x000620fc) list_medium_line_x2_g_ParamLimits

0xf199,	// (0x000620fc) list_medium_line_x2_g

0xc470,	// (0x0005f3d3) list_medium_line_x2_t1_ParamLimits

0xc470,	// (0x0005f3d3) list_medium_line_x2_t1

0xc428,	// (0x0005f38b) list_medium_line_x3_g1_ParamLimits

0xc428,	// (0x0005f38b) list_medium_line_x3_g1

0x17a0,	// (0x00054703) list_medium_line_x3_g2_ParamLimits

0x17a0,	// (0x00054703) list_medium_line_x3_g2

0x0001,

0xfbfc,	// (0x00062b5f) list_medium_line_x3_g_ParamLimits

0xfbfc,	// (0x00062b5f) list_medium_line_x3_g

0x17ae,	// (0x00054711) list_medium_line_x3_t1_ParamLimits

0x17ae,	// (0x00054711) list_medium_line_x3_t1

0x17c2,	// (0x00054725) thumb_sp_fs_scroll_pane_g1

0x17cb,	// (0x0005472e) thumb_sp_fs_scroll_pane_g2

0x17d4,	// (0x00054737) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfc01,	// (0x00062b64) thumb_sp_fs_scroll_pane_g

0x17c2,	// (0x00054725) bg_sp_fs_scroll_pane_g1

0x17cb,	// (0x0005472e) bg_sp_fs_scroll_pane_g2

0x17d4,	// (0x00054737) bg_sp_fs_scroll_pane_g3

0x0002,

0xfc01,	// (0x00062b64) bg_sp_fs_scroll_pane_g

0xc428,	// (0x0005f38b) list_medium_line_x2_t3_g4_g1_ParamLimits

0xc428,	// (0x0005f38b) list_medium_line_x2_t3_g4_g1

0xc428,	// (0x0005f38b) list_medium_line_x2_t3_g4_g2_ParamLimits

0xc428,	// (0x0005f38b) list_medium_line_x2_t3_g4_g2

0xc428,	// (0x0005f38b) list_medium_line_x2_t3_g4_g3_ParamLimits

0xc428,	// (0x0005f38b) list_medium_line_x2_t3_g4_g3

0xc428,	// (0x0005f38b) list_medium_line_x2_t3_g4_g4_ParamLimits

0xc428,	// (0x0005f38b) list_medium_line_x2_t3_g4_g4

0x0003,

0xf19e,	// (0x00062101) list_medium_line_x2_t3_g4_g_ParamLimits

0xf19e,	// (0x00062101) list_medium_line_x2_t3_g4_g

0xc470,	// (0x0005f3d3) list_medium_line_x2_t3_g4_t1_ParamLimits

0xc470,	// (0x0005f3d3) list_medium_line_x2_t3_g4_t1

0xc470,	// (0x0005f3d3) list_medium_line_x2_t3_g4_t2_ParamLimits

0xc470,	// (0x0005f3d3) list_medium_line_x2_t3_g4_t2

0xc470,	// (0x0005f3d3) list_medium_line_x2_t3_g4_t3_ParamLimits

0xc470,	// (0x0005f3d3) list_medium_line_x2_t3_g4_t3

0x0002,

0xf192,	// (0x000620f5) list_medium_line_x2_t3_g4_t_ParamLimits

0xf192,	// (0x000620f5) list_medium_line_x2_t3_g4_t

0xc428,	// (0x0005f38b) list_medium_line_g2_g1_ParamLimits

0xc428,	// (0x0005f38b) list_medium_line_g2_g1

0xc428,	// (0x0005f38b) list_medium_line_g2_g2_ParamLimits

0xc428,	// (0x0005f38b) list_medium_line_g2_g2

0x0001,

0xf199,	// (0x000620fc) list_medium_line_g2_g_ParamLimits

0xf199,	// (0x000620fc) list_medium_line_g2_g

0xc470,	// (0x0005f3d3) list_medium_line_g2_t1_ParamLimits

0xc470,	// (0x0005f3d3) list_medium_line_g2_t1

0xc428,	// (0x0005f38b) list_medium_line_t3_g2_g1_ParamLimits

0xc428,	// (0x0005f38b) list_medium_line_t3_g2_g1

0xc428,	// (0x0005f38b) list_medium_line_t3_g2_g2_ParamLimits

0xc428,	// (0x0005f38b) list_medium_line_t3_g2_g2

0x0001,

0xf199,	// (0x000620fc) list_medium_line_t3_g2_g_ParamLimits

0xf199,	// (0x000620fc) list_medium_line_t3_g2_g

0xc470,	// (0x0005f3d3) list_medium_line_t3_g2_t1_ParamLimits

0xc470,	// (0x0005f3d3) list_medium_line_t3_g2_t1

0xc470,	// (0x0005f3d3) list_medium_line_t3_g2_t2_ParamLimits

0xc470,	// (0x0005f3d3) list_medium_line_t3_g2_t2

0xc470,	// (0x0005f3d3) list_medium_line_t3_g2_t3_ParamLimits

0xc470,	// (0x0005f3d3) list_medium_line_t3_g2_t3

0x0002,

0xf192,	// (0x000620f5) list_medium_line_t3_g2_t_ParamLimits

0xf192,	// (0x000620f5) list_medium_line_t3_g2_t

0xc466,	// (0x0005f3c9) list_medium_line_right_icon_g1

0xcbbc,	// (0x0005fb1f) list_medium_line_right_icon_t1

0xc428,	// (0x0005f38b) list_medium_line_t2_g1_ParamLimits

0xc428,	// (0x0005f38b) list_medium_line_t2_g1

0xc470,	// (0x0005f3d3) list_medium_line_t2_t1_ParamLimits

0xc470,	// (0x0005f3d3) list_medium_line_t2_t1

0xc470,	// (0x0005f3d3) list_medium_line_t2_t2_ParamLimits

0xc470,	// (0x0005f3d3) list_medium_line_t2_t2

0x0001,

0xf20e,	// (0x00062171) list_medium_line_t2_t_ParamLimits

0xf20e,	// (0x00062171) list_medium_line_t2_t

0xc428,	// (0x0005f38b) list_medium_line_t3_g1_ParamLimits

0xc428,	// (0x0005f38b) list_medium_line_t3_g1

0xc470,	// (0x0005f3d3) list_medium_line_t3_t1_ParamLimits

0xc470,	// (0x0005f3d3) list_medium_line_t3_t1

0xc470,	// (0x0005f3d3) list_medium_line_t3_t2_ParamLimits

0xc470,	// (0x0005f3d3) list_medium_line_t3_t2

0xc470,	// (0x0005f3d3) list_medium_line_t3_t3_ParamLimits

0xc470,	// (0x0005f3d3) list_medium_line_t3_t3

0x0002,

0xf192,	// (0x000620f5) list_medium_line_t3_t_ParamLimits

0xf192,	// (0x000620f5) list_medium_line_t3_t

0xc428,	// (0x0005f38b) list_medium_line_g3_g1_ParamLimits

0xc428,	// (0x0005f38b) list_medium_line_g3_g1

0xc428,	// (0x0005f38b) list_medium_line_g3_g2_ParamLimits

0xc428,	// (0x0005f38b) list_medium_line_g3_g2

0xc428,	// (0x0005f38b) list_medium_line_g3_g3_ParamLimits

0xc428,	// (0x0005f38b) list_medium_line_g3_g3

0x0002,

0xf18b,	// (0x000620ee) list_medium_line_g3_g_ParamLimits

0xf18b,	// (0x000620ee) list_medium_line_g3_g

0xc470,	// (0x0005f3d3) list_medium_line_g3_t1_ParamLimits

0xc470,	// (0x0005f3d3) list_medium_line_g3_t1

0xc428,	// (0x0005f38b) list_medium_line_t2_g3_g1_ParamLimits

0xc428,	// (0x0005f38b) list_medium_line_t2_g3_g1

0xc428,	// (0x0005f38b) list_medium_line_t2_g3_g2_ParamLimits

0xc428,	// (0x0005f38b) list_medium_line_t2_g3_g2

0xc428,	// (0x0005f38b) list_medium_line_t2_g3_g3_ParamLimits

0xc428,	// (0x0005f38b) list_medium_line_t2_g3_g3

0x0002,

0xf18b,	// (0x000620ee) list_medium_line_t2_g3_g_ParamLimits

0xf18b,	// (0x000620ee) list_medium_line_t2_g3_g

0xc470,	// (0x0005f3d3) list_medium_line_t2_g3_t1_ParamLimits

0xc470,	// (0x0005f3d3) list_medium_line_t2_g3_t1

0xc470,	// (0x0005f3d3) list_medium_line_t2_g3_t2_ParamLimits

0xc470,	// (0x0005f3d3) list_medium_line_t2_g3_t2

0x0001,

0xf20e,	// (0x00062171) list_medium_line_t2_g3_t_ParamLimits

0xf20e,	// (0x00062171) list_medium_line_t2_g3_t

0xc428,	// (0x0005f38b) list_medium_line_t3_g3_g1_ParamLimits

0xc428,	// (0x0005f38b) list_medium_line_t3_g3_g1

0xc428,	// (0x0005f38b) list_medium_line_t3_g3_g2_ParamLimits

0xc428,	// (0x0005f38b) list_medium_line_t3_g3_g2

0xc428,	// (0x0005f38b) list_medium_line_t3_g3_g3_ParamLimits

0xc428,	// (0x0005f38b) list_medium_line_t3_g3_g3

0x0002,

0xf18b,	// (0x000620ee) list_medium_line_t3_g3_g_ParamLimits

0xf18b,	// (0x000620ee) list_medium_line_t3_g3_g

0xc470,	// (0x0005f3d3) list_medium_line_t3_g3_t1_ParamLimits

0xc470,	// (0x0005f3d3) list_medium_line_t3_g3_t1

0xc470,	// (0x0005f3d3) list_medium_line_t3_g3_t2_ParamLimits

0xc470,	// (0x0005f3d3) list_medium_line_t3_g3_t2

0xc470,	// (0x0005f3d3) list_medium_line_t3_g3_t3_ParamLimits

0xc470,	// (0x0005f3d3) list_medium_line_t3_g3_t3

0x0002,

0xf192,	// (0x000620f5) list_medium_line_t3_g3_t_ParamLimits

0xf192,	// (0x000620f5) list_medium_line_t3_g3_t

0xc466,	// (0x0005f3c9) list_medium_line_right_iconx2_g1

0xc466,	// (0x0005f3c9) list_medium_line_right_iconx2_g2

0x0001,

0xf08c,	// (0x00061fef) list_medium_line_right_iconx2_g

0xcbbc,	// (0x0005fb1f) list_medium_line_right_iconx2_t1

0xc466,	// (0x0005f3c9) list_medium_line_t2_right_iconx2_g1

0xc466,	// (0x0005f3c9) list_medium_line_t2_right_iconx2_g2

0x0001,

0xf08c,	// (0x00061fef) list_medium_line_t2_right_iconx2_g

0xcbbc,	// (0x0005fb1f) list_medium_line_t2_right_iconx2_t1

0xcbbc,	// (0x0005fb1f) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfbc8,	// (0x00062b2b) list_medium_line_t2_right_iconx2_t

0xcbbc,	// (0x0005fb1f) list_medium_line_x4_t4_t1

0xcbbc,	// (0x0005fb1f) list_medium_line_x4_t4_t2

0xcbbc,	// (0x0005fb1f) list_medium_line_x4_t4_t3

0xcbbc,	// (0x0005fb1f) list_medium_line_x4_t4_t4

0x0003,

0xf260,	// (0x000621c3) list_medium_line_x4_t4_t

0xa2cb,	// (0x0005d22e) tport_appsw_pane_ParamLimits

0xa2cb,	// (0x0005d22e) tport_appsw_pane

0xa2d9,	// (0x0005d23c) tport_contact_pane_ParamLimits

0xa2d9,	// (0x0005d23c) tport_contact_pane

0xa2e9,	// (0x0005d24c) tport_listscroll_pane_ParamLimits

0xa2e9,	// (0x0005d24c) tport_listscroll_pane

0xa2f9,	// (0x0005d25c) cell_tport_appsw_pane_ParamLimits

0xa2f9,	// (0x0005d25c) cell_tport_appsw_pane

0xc436,	// (0x0005f399) tport_appsw_pane_g1_ParamLimits

0xc436,	// (0x0005f399) tport_appsw_pane_g1

0xa326,	// (0x0005d289) tport_contact_pane_g1

0xa32f,	// (0x0005d292) tport_contact_pane_t1

0xa33d,	// (0x0005d2a0) tport_contact_pane_t2

0x0001,

0xfc08,	// (0x00062b6b) tport_contact_pane_t

0x17dd,	// (0x00054740) list_tport_pane

0x17e6,	// (0x00054749) scroll_pane_cp_030

0xa353,	// (0x0005d2b6) cell_tport_appsw_pane_g1

0xa363,	// (0x0005d2c6) cell_tport_appsw_pane_t1

0xa371,	// (0x0005d2d4) grid_highlight_pane_cp019

0xa379,	// (0x0005d2dc) list_tport_double_graphic_pane_ParamLimits

0xa379,	// (0x0005d2dc) list_tport_double_graphic_pane

0x39af,	// (0x00056912) list_highlight_pane_cp023_ParamLimits

0x39af,	// (0x00056912) list_highlight_pane_cp023

0xa386,	// (0x0005d2e9) list_tport_double_graphic_pane_g1_ParamLimits

0xa386,	// (0x0005d2e9) list_tport_double_graphic_pane_g1

0xa393,	// (0x0005d2f6) list_tport_double_graphic_pane_t1_ParamLimits

0xa393,	// (0x0005d2f6) list_tport_double_graphic_pane_t1

0xa3a8,	// (0x0005d30b) list_tport_double_graphic_pane_t2_ParamLimits

0xa3a8,	// (0x0005d30b) list_tport_double_graphic_pane_t2

0x0001,

0xfc14,	// (0x00062b77) list_tport_double_graphic_pane_t_ParamLimits

0xfc14,	// (0x00062b77) list_tport_double_graphic_pane_t

0x1b91,	// (0x00054af4) main_cale_note_pane

0x81bb,	// (0x0005b11e) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x81bb,	// (0x0005b11e) cell_vitu2_function_top_wide_pane_cp01

0x9c06,	// (0x0005cb69) wait_bar_pane_cp05_ParamLimits

0x39af,	// (0x00056912) listscroll_cmail_pane

0x17f7,	// (0x0005475a) list_cmail_pane

0xa3ba,	// (0x0005d31d) list_cmail_body_pane

0xa3d4,	// (0x0005d337) list_single_cmail_header_caption_pane

0xa3f4,	// (0x0005d357) list_single_cmail_header_detail_pane_ParamLimits

0xa3f4,	// (0x0005d357) list_single_cmail_header_detail_pane

0x180e,	// (0x00054771) list_single_cmail_header_caption_pane_t1

0xa42a,	// (0x0005d38d) list_single_cmail_header_detail_pane_g1_ParamLimits

0xa42a,	// (0x0005d38d) list_single_cmail_header_detail_pane_g1

0x0405,	// (0x00053368) list_single_cmail_header_detail_pane_g2_ParamLimits

0x0405,	// (0x00053368) list_single_cmail_header_detail_pane_g2

0x0002,

0xfc19,	// (0x00062b7c) list_single_cmail_header_detail_pane_g_ParamLimits

0xfc19,	// (0x00062b7c) list_single_cmail_header_detail_pane_g

0xa442,	// (0x0005d3a5) list_single_cmail_header_detail_pane_t1_ParamLimits

0xa442,	// (0x0005d3a5) list_single_cmail_header_detail_pane_t1

0xa47e,	// (0x0005d3e1) list_single_cmail_header_editor_pane_bg_ParamLimits

0xa47e,	// (0x0005d3e1) list_single_cmail_header_editor_pane_bg

0x14a5,	// (0x00054408) list_cmail_body_pane_g1

0x1832,	// (0x00054795) list_cmail_body_pane_t1

0x074b,	// (0x000536ae) list_single_cmail_header_editor_pane_bg_g1

0xc8cb,	// (0x0005f82e) list_single_cmail_header_editor_pane_bg_g1_copy1

0x075b,	// (0x000536be) list_single_cmail_header_editor_pane_bg_g1_copy2

0x0753,	// (0x000536b6) list_single_cmail_header_editor_pane_bg_g1_copy3

0x09c9,	// (0x0005392c) list_single_cmail_header_editor_pane_bg_g1_copy4

0x077b,	// (0x000536de) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0x076b,	// (0x000536ce) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0x0773,	// (0x000536d6) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xc8ab,	// (0x0005f80e) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0xa495,	// (0x0005d3f8) calenote_gesture_pane_ParamLimits

0xa495,	// (0x0005d3f8) calenote_gesture_pane

0xa4af,	// (0x0005d412) calenote_window_pane_ParamLimits

0xa4af,	// (0x0005d412) calenote_window_pane

0x1840,	// (0x000547a3) popup_note_window_cp01

0xa4c7,	// (0x0005d42a) calenote_swipe_1_pane_ParamLimits

0xa4c7,	// (0x0005d42a) calenote_swipe_1_pane

0x9faa,	// (0x0005cf0d) calenote_swipe_2_pane_ParamLimits

0x9faa,	// (0x0005cf0d) calenote_swipe_2_pane

0x167b,	// (0x000545de) calenote_swipe_1_pane_g1_ParamLimits

0x167b,	// (0x000545de) calenote_swipe_1_pane_g1

0x1852,	// (0x000547b5) calenote_swipe_1_pane_g2_ParamLimits

0x1852,	// (0x000547b5) calenote_swipe_1_pane_g2

0x0001,

0xfc25,	// (0x00062b88) calenote_swipe_1_pane_g_ParamLimits

0xfc25,	// (0x00062b88) calenote_swipe_1_pane_g

0x185e,	// (0x000547c1) calenote_swipe_1_pane_t1_ParamLimits

0x185e,	// (0x000547c1) calenote_swipe_1_pane_t1

0x167b,	// (0x000545de) calenote_swipe_2_pane_g1_ParamLimits

0x167b,	// (0x000545de) calenote_swipe_2_pane_g1

0x187d,	// (0x000547e0) calenote_swipe_2_pane_g2_ParamLimits

0x187d,	// (0x000547e0) calenote_swipe_2_pane_g2

0x0001,

0xfc2a,	// (0x00062b8d) calenote_swipe_2_pane_g_ParamLimits

0xfc2a,	// (0x00062b8d) calenote_swipe_2_pane_g

0x1889,	// (0x000547ec) calenote_swipe_2_pane_t1_ParamLimits

0x1889,	// (0x000547ec) calenote_swipe_2_pane_t1

0x1b91,	// (0x00054af4) main_mup_navstr_pane

0x70f2,	// (0x0005a055) main_mup3_pane_t7_ParamLimits

0x70f2,	// (0x0005a055) main_mup3_pane_t7

0x7872,	// (0x0005a7d5) main_mp4_pane_g6_ParamLimits

0x7872,	// (0x0005a7d5) main_mp4_pane_g6

0x7be8,	// (0x0005ab4b) main_image3_pane_t4_ParamLimits

0x7be8,	// (0x0005ab4b) main_image3_pane_t4

0xa4da,	// (0x0005d43d) popup_navstr_preview_pane_ParamLimits

0xa4da,	// (0x0005d43d) popup_navstr_preview_pane

0xa4e6,	// (0x0005d449) scroll_navstr_pane_ParamLimits

0xa4e6,	// (0x0005d449) scroll_navstr_pane

0x1b91,	// (0x00054af4) bg_popup_preview_window_pane_cp04

0x18b0,	// (0x00054813) popup_navstr_preview_pane_t1

0xa4f2,	// (0x0005d455) scroll_navstr_pane_g1_ParamLimits

0xa4f2,	// (0x0005d455) scroll_navstr_pane_g1

0xa4ff,	// (0x0005d462) scroll_navstr_pane_t1_ParamLimits

0xa4ff,	// (0x0005d462) scroll_navstr_pane_t1

0x1849,	// (0x000547ac) bg_button_pane_cp014

0x1849,	// (0x000547ac) bg_button_pane_cp030

0x9e7a,	// (0x0005cddd) list_double_fisheye_pane_g4_ParamLimits

0x9e7a,	// (0x0005cddd) list_double_fisheye_pane_g4

0x9e86,	// (0x0005cde9) list_double_fisheye_pane_g5_ParamLimits

0x9e86,	// (0x0005cde9) list_double_fisheye_pane_g5

0x10d3,	// (0x00054036) sp_fs_scroll_pane_cp03

0x1749,	// (0x000546ac) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0x1755,	// (0x000546b8) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfbcd,	// (0x00062b30) main_sp_fs_ctrlbar_pane_g_ParamLimits

0xa0a9,	// (0x0005d00c) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0x1806,	// (0x00054769) sp_fs_scroll_pane_cp02

0xc606,	// (0x0005f569) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0xc606,	// (0x0005f569) popup_sp_fs_calendar_preview_list_single_pane

0x1b91,	// (0x00054af4) main_cam6_pano_pane

0x64dd,	// (0x00059440) main_mup3_pane_ParamLimits

0x1b91,	// (0x00054af4) main_phacti_pane

0x9ad9,	// (0x0005ca3c) bg_button_pane_cp11

0x9af1,	// (0x0005ca54) main_mobtv_info_pane_g2_ParamLimits

0x9af1,	// (0x0005ca54) main_mobtv_info_pane_g2

0x0001,

0xfb2d,	// (0x00062a90) main_mobtv_info_pane_g_ParamLimits

0xfb2d,	// (0x00062a90) main_mobtv_info_pane_g

0xc484,	// (0x0005f3e7) sc_clock_pane_t5_ParamLimits

0xc484,	// (0x0005f3e7) sc_clock_pane_t5

0xd40b,	// (0x0006036e) main_radioblah_pane_g1_ParamLimits

0xd3f7,	// (0x0006035a) main_radioblah_pane_t3_ParamLimits

0xd3f7,	// (0x0006035a) main_radioblah_pane_t3

0xd3f7,	// (0x0006035a) main_radioblah_pane_t4_ParamLimits

0xd3f7,	// (0x0006035a) main_radioblah_pane_t4

0xc41a,	// (0x0005f37d) main_radioblah_text_pane_ParamLimits

0xc41a,	// (0x0005f37d) main_radioblah_text_pane

0x15b2,	// (0x00054515) main_radioblah_info_pane_g1_ParamLimits

0x15f6,	// (0x00054559) main_radioblah_info_pane_t4_ParamLimits

0x15f6,	// (0x00054559) main_radioblah_info_pane_t4

0x39af,	// (0x00056912) main_sp_fs_calendar_pane

0xa511,	// (0x0005d474) main_phacti_pane_g1

0xa519,	// (0x0005d47c) phacti_note_pane_ParamLimits

0xa519,	// (0x0005d47c) phacti_note_pane

0x18c7,	// (0x0005482a) phacti_term_pane_ParamLimits

0x18c7,	// (0x0005482a) phacti_term_pane

0x18dc,	// (0x0005483f) phacti_note_pane_t1_ParamLimits

0x18dc,	// (0x0005483f) phacti_note_pane_t1

0x0435,	// (0x00053398) phacti_term_pane_g1

0x043d,	// (0x000533a0) phacti_term_pane_t1_ParamLimits

0x043d,	// (0x000533a0) phacti_term_pane_t1

0x18f3,	// (0x00054856) popup_sp_fs_calendar_preview_list_single_pane_g1

0x18fb,	// (0x0005485e) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfc34,	// (0x00062b97) popup_sp_fs_calendar_preview_list_single_pane_g

0x1903,	// (0x00054866) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0x1903,	// (0x00054866) popup_sp_fs_calendar_preview_list_single_pane_t1

0x1919,	// (0x0005487c) aid_popup_sp_fs_bg_corner_pane

0xc466,	// (0x0005f3c9) popup_sp_fs_calendar_preview_bg_pane_g1

0x1b91,	// (0x00054af4) popup_sp_fs_calendar_preview_bg_pane

0x1921,	// (0x00054884) popup_sp_fs_calendar_preview_list_pane

0x1929,	// (0x0005488c) bg_main_sp_fs_cale_pane_ParamLimits

0x1929,	// (0x0005488c) bg_main_sp_fs_cale_pane

0x1941,	// (0x000548a4) listscroll_cale_mrui_pane_ParamLimits

0x1941,	// (0x000548a4) listscroll_cale_mrui_pane

0xebcf,	// (0x00061b32) listscroll_sp_fs_schedule_track_pane

0x0470,	// (0x000533d3) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0x0470,	// (0x000533d3) main_sp_fs_ctrlbar_pane_cp01

0xebcf,	// (0x00061b32) main_sp_fs_ribbon_pane

0x0486,	// (0x000533e9) popup_sp_fs_cale_preview_window

0x10b9,	// (0x0005401c) list_single_sp_fs_schedule_track_pane_ParamLimits

0x10b9,	// (0x0005401c) list_single_sp_fs_schedule_track_pane

0x10b9,	// (0x0005401c) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0x10b9,	// (0x0005401c) bg_sp_fs_highlight_list_pane_cp03

0x6dd2,	// (0x00059d35) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0x6dd2,	// (0x00059d35) list_single_sp_fs_schedule_track_pane_g1

0x6dd2,	// (0x00059d35) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0x6dd2,	// (0x00059d35) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfc39,	// (0x00062b9c) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfc39,	// (0x00062b9c) list_single_sp_fs_schedule_track_pane_g

0xa52f,	// (0x0005d492) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0xa52f,	// (0x0005d492) list_single_sp_fs_schedule_track_pane_t1

0x060a,	// (0x0005356d) sp_fs_schedule_track_pane_ParamLimits

0x060a,	// (0x0005356d) sp_fs_schedule_track_pane

0xebd7,	// (0x00061b3a) sp_fs_schedule_track_pane_g1

0xebd7,	// (0x00061b3a) sp_fs_schedule_track_pane_g2

0xebd7,	// (0x00061b3a) sp_fs_schedule_track_pane_g3

0xebd7,	// (0x00061b3a) sp_fs_schedule_track_pane_g4

0xebd7,	// (0x00061b3a) sp_fs_schedule_track_pane_g5

0x0004,

0xfc3e,	// (0x00062ba1) sp_fs_schedule_track_pane_g

0xebd7,	// (0x00061b3a) bg_sp_fs_schedule_viewer_highlight_g1

0xebd7,	// (0x00061b3a) bg_sp_fs_schedule_viewer_highlight_g2

0xebd7,	// (0x00061b3a) bg_sp_fs_schedule_viewer_highlight_g3

0xebd7,	// (0x00061b3a) bg_sp_fs_schedule_viewer_highlight_g4

0xebd7,	// (0x00061b3a) bg_sp_fs_schedule_viewer_highlight_g5

0xebd7,	// (0x00061b3a) bg_sp_fs_schedule_viewer_highlight_g6

0xebd7,	// (0x00061b3a) bg_sp_fs_schedule_viewer_highlight_g7

0xebd7,	// (0x00061b3a) bg_sp_fs_schedule_viewer_highlight_g8

0xebd7,	// (0x00061b3a) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfc49,	// (0x00062bac) bg_sp_fs_schedule_viewer_highlight_g

0xebcf,	// (0x00061b32) bg_main_sp_fs_ribbon_pane

0xebd7,	// (0x00061b3a) main_sp_fs_ribbon_pane_g1

0x1959,	// (0x000548bc) main_sp_fs_ribbon_pane_t1

0x1959,	// (0x000548bc) main_sp_fs_ribbon_pane_t2

0x1959,	// (0x000548bc) main_sp_fs_ribbon_pane_t3

0x0002,

0xfc5c,	// (0x00062bbf) main_sp_fs_ribbon_pane_t

0xebcf,	// (0x00061b32) main_sp_fs_ribbon_scheduler_pane

0xebd7,	// (0x00061b3a) bg_main_sp_fs_ribbon_pane_g1

0xebd7,	// (0x00061b3a) bg_main_sp_fs_ribbon_pane_g2

0xebd7,	// (0x00061b3a) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xf6a5,	// (0x00062608) bg_main_sp_fs_ribbon_pane_g

0xebd7,	// (0x00061b3a) main_sp_fs_ribbon_scheduler_pane_g1

0xebd7,	// (0x00061b3a) main_sp_fs_ribbon_scheduler_pane_g2

0xebd7,	// (0x00061b3a) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xf6a5,	// (0x00062608) main_sp_fs_ribbon_scheduler_pane_g

0x1967,	// (0x000548ca) list_cale_mrui_pane

0xa541,	// (0x0005d4a4) sp_fs_scroll_pane_cp07_ParamLimits

0xa541,	// (0x0005d4a4) sp_fs_scroll_pane_cp07

0x10b9,	// (0x0005401c) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0x10b9,	// (0x0005401c) bg_sp_fs_schedule_viewer_highlight

0xebcf,	// (0x00061b32) list_single_sp_fs_schedule_track_pane_cp01

0xebcf,	// (0x00061b32) list_sp_fs_schedule_track_pane

0x1974,	// (0x000548d7) sp_fs_scroll_pane_cp06_ParamLimits

0x1974,	// (0x000548d7) sp_fs_scroll_pane_cp06

0xc466,	// (0x0005f3c9) bgmain_sp_fs_calendar_pane_g1

0xa55d,	// (0x0005d4c0) list_single_cale_mrui_pane_ParamLimits

0xa55d,	// (0x0005d4c0) list_single_cale_mrui_pane

0x0498,	// (0x000533fb) list_single_cale_mrui_row_pane_ParamLimits

0x0498,	// (0x000533fb) list_single_cale_mrui_row_pane

0x04a5,	// (0x00053408) list_single_cale_mrui_row_pane_g1_ParamLimits

0x04a5,	// (0x00053408) list_single_cale_mrui_row_pane_g1

0x04dd,	// (0x00053440) list_single_cale_mrui_row_pane_t1_ParamLimits

0x04dd,	// (0x00053440) list_single_cale_mrui_row_pane_t1

0xa581,	// (0x0005d4e4) list_single_cale_mrui_row_pane_t2_ParamLimits

0xa581,	// (0x0005d4e4) list_single_cale_mrui_row_pane_t2

0x04ef,	// (0x00053452) list_single_cale_mrui_row_pane_t3_ParamLimits

0x04ef,	// (0x00053452) list_single_cale_mrui_row_pane_t3

0x051e,	// (0x00053481) list_single_cale_mrui_row_pane_t4_ParamLimits

0x051e,	// (0x00053481) list_single_cale_mrui_row_pane_t4

0x0003,

0xfc6a,	// (0x00062bcd) list_single_cale_mrui_row_pane_t_ParamLimits

0xfc6a,	// (0x00062bcd) list_single_cale_mrui_row_pane_t

0xa5e7,	// (0x0005d54a) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0xa5e7,	// (0x0005d54a) list_single_cmail_header_editor_pane_bg_cp01

0xa611,	// (0x0005d574) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0xa611,	// (0x0005d574) list_single_cmail_header_editor_pane_bg_cp02

0x1995,	// (0x000548f8) main_radioblah_text_pane_t1_ParamLimits

0x1995,	// (0x000548f8) main_radioblah_text_pane_t1

0x19af,	// (0x00054912) cam6_indi_pane_cp01

0x19b7,	// (0x0005491a) cam6_mode_pane_cp01

0x19bf,	// (0x00054922) cam6_pano_pane

0x19c8,	// (0x0005492b) cam6_zoom_pane_cp01

0x19d2,	// (0x00054935) cam6_pano_image_pane

0x19db,	// (0x0005493e) cam6_pano_pane_g1

0x14a5,	// (0x00054408) cam6_pano_pane_g2

0x19e4,	// (0x00054947) cam6_pano_pane_g3

0x19ed,	// (0x00054950) cam6_pano_pane_g4

0xee99,	// (0x00061dfc) cam6_pano_pane_g5

0x19f6,	// (0x00054959) cam6_pano_pane_g6

0x19fe,	// (0x00054961) cam6_pano_pane_g7

0x1a06,	// (0x00054969) cam6_pano_pane_g8

0x1a0f,	// (0x00054972) cam6_pano_pane_g9

0x0008,

0xfc73,	// (0x00062bd6) cam6_pano_pane_g

0x1b91,	// (0x00054af4) main_browser_tag_pane

0x18a8,	// (0x0005480b) grid_navstr_albumart_pane

0x1a1a,	// (0x0005497d) cell_navstr_albumart_pane_ParamLimits

0x1a1a,	// (0x0005497d) cell_navstr_albumart_pane

0x1a36,	// (0x00054999) cell_navstr_albumart_pane_g1

0x1a3e,	// (0x000549a1) cell_navstr_albumart_pane_g2

0x1a46,	// (0x000549a9) cell_navstr_albumart_pane_g3

0x1a4e,	// (0x000549b1) cell_navstr_albumart_pane_g4

0x0003,

0xfc86,	// (0x00062be9) cell_navstr_albumart_pane_g

0xa62d,	// (0x0005d590) bt_list_pane_ParamLimits

0xa62d,	// (0x0005d590) bt_list_pane

0xa646,	// (0x0005d5a9) bt_list_pane_t1

0xa655,	// (0x0005d5b8) bt_list_pane_t2

0x0001,

0xfc8f,	// (0x00062bf2) bt_list_pane_t

0x1b91,	// (0x00054af4) main_cale_prevew_pane

0xa664,	// (0x0005d5c7) popup_cale_preview_window_ParamLimits

0xa664,	// (0x0005d5c7) popup_cale_preview_window

0x39af,	// (0x00056912) bg_popup_preview_window_pane_cp05_ParamLimits

0x39af,	// (0x00056912) bg_popup_preview_window_pane_cp05

0x1a56,	// (0x000549b9) list_cale_preview_pane_ParamLimits

0x1a56,	// (0x000549b9) list_cale_preview_pane

0xa681,	// (0x0005d5e4) list_double_cale_preview_pane_ParamLimits

0xa681,	// (0x0005d5e4) list_double_cale_preview_pane

0xa695,	// (0x0005d5f8) list_single_cale_preview_pane_ParamLimits

0xa695,	// (0x0005d5f8) list_single_cale_preview_pane

0xa6ad,	// (0x0005d610) list_single_cale_preview_pane_g1

0xa6b5,	// (0x0005d618) list_single_cale_preview_pane_t1_ParamLimits

0xa6b5,	// (0x0005d618) list_single_cale_preview_pane_t1

0xa6ca,	// (0x0005d62d) list_double_cale_preview_pane_g1

0xa6d2,	// (0x0005d635) list_double_cale_preview_pane_t1_ParamLimits

0xa6d2,	// (0x0005d635) list_double_cale_preview_pane_t1

0xa6e7,	// (0x0005d64a) list_double_cale_preview_pane_t2_ParamLimits

0xa6e7,	// (0x0005d64a) list_double_cale_preview_pane_t2

0x0001,

0xfc94,	// (0x00062bf7) list_double_cale_preview_pane_t_ParamLimits

0xfc94,	// (0x00062bf7) list_double_cale_preview_pane_t

0x1b91,	// (0x00054af4) main_ezdial_pane

0x39af,	// (0x00056912) main_sp_fs_email_pane_ParamLimits

0xa00a,	// (0x0005cf6d) cmail_ddmenu_btn01_pane_ParamLimits

0xa00a,	// (0x0005cf6d) cmail_ddmenu_btn01_pane

0xa027,	// (0x0005cf8a) cmail_ddmenu_btn02_pane_ParamLimits

0xa027,	// (0x0005cf8a) cmail_ddmenu_btn02_pane

0xa045,	// (0x0005cfa8) cmail_ddmenu_btn03_pane_ParamLimits

0xa045,	// (0x0005cfa8) cmail_ddmenu_btn03_pane

0xa0e6,	// (0x0005d049) main_sp_fs_ctrlbar_pane_ParamLimits

0xa100,	// (0x0005d063) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0xa3ba,	// (0x0005d31d) list_cmail_body_pane_ParamLimits

0x181c,	// (0x0005477f) bg_button_pane_cp12

0x1825,	// (0x00054788) list_single_cmail_header_detail_pane_g3_ParamLimits

0x1825,	// (0x00054788) list_single_cmail_header_detail_pane_g3

0x0411,	// (0x00053374) list_single_cmail_header_detail_pane_t2_ParamLimits

0x0411,	// (0x00053374) list_single_cmail_header_detail_pane_t2

0x0001,

0xfc20,	// (0x00062b83) list_single_cmail_header_detail_pane_t_ParamLimits

0xfc20,	// (0x00062b83) list_single_cmail_header_detail_pane_t

0x0452,	// (0x000533b5) phacti_term_pane_t2_ParamLimits

0x0452,	// (0x000533b5) phacti_term_pane_t2

0x0001,

0xfc2f,	// (0x00062b92) phacti_term_pane_t_ParamLimits

0xfc2f,	// (0x00062b92) phacti_term_pane_t

0x1a62,	// (0x000549c5) aid_size_list_single_double

0xa6ff,	// (0x0005d662) popup_ezdial_listscroll_window

0x1a6e,	// (0x000549d1) popup_number_entry_window_cp01

0xc6a1,	// (0x0005f604) bg_popup_call_pane_cp09

0x1a7b,	// (0x000549de) ezdial_list_pane

0x1a83,	// (0x000549e6) scroll_pane_cp23

0xe4a9,	// (0x0006140c) bg_button_pane_cp028_ParamLimits

0xe4a9,	// (0x0006140c) bg_button_pane_cp028

0xa71b,	// (0x0005d67e) cmail_ddmenu_btn01_pane_g1_ParamLimits

0xa71b,	// (0x0005d67e) cmail_ddmenu_btn01_pane_g1

0xa72d,	// (0x0005d690) cmail_ddmenu_btn01_pane_g2_ParamLimits

0xa72d,	// (0x0005d690) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfc99,	// (0x00062bfc) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfc99,	// (0x00062bfc) cmail_ddmenu_btn01_pane_g

0x1a8b,	// (0x000549ee) cmail_ddmenu_btn01_pane_t1_ParamLimits

0x1a8b,	// (0x000549ee) cmail_ddmenu_btn01_pane_t1

0xd3e9,	// (0x0006034c) bg_button_pane_cp029_ParamLimits

0xd3e9,	// (0x0006034c) bg_button_pane_cp029

0xa739,	// (0x0005d69c) cmail_ddmenu_btn02_pane_g1_ParamLimits

0xa739,	// (0x0005d69c) cmail_ddmenu_btn02_pane_g1

0xa751,	// (0x0005d6b4) cmail_ddmenu_btn02_pane_t1_ParamLimits

0xa751,	// (0x0005d6b4) cmail_ddmenu_btn02_pane_t1

0xc41a,	// (0x0005f37d) bg_button_pane_cp031_ParamLimits

0xc41a,	// (0x0005f37d) bg_button_pane_cp031

0xa739,	// (0x0005d69c) cmail_ddmenu_btn03_pane_g1_ParamLimits

0xa739,	// (0x0005d69c) cmail_ddmenu_btn03_pane_g1

0xa751,	// (0x0005d6b4) cmail_ddmenu_btn03_pane_t1_ParamLimits

0xa751,	// (0x0005d6b4) cmail_ddmenu_btn03_pane_t1

0xc470,	// (0x0005f3d3) cell_dialer2_keypad_pane_t1_ParamLimits

0xee30,	// (0x00061d93) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0xee30,	// (0x00061d93) cell_dialer2_keypad_pane_t1_copy1

0x9906,	// (0x0005c869) ncimui_group_button_pane

0x39af,	// (0x00056912) main_sp_fs_calendar_pane_ParamLimits

0xa3d4,	// (0x0005d337) list_single_cmail_header_caption_pane_ParamLimits

0x0467,	// (0x000533ca) aid_recal_txt_sm_pane

0x1b91,	// (0x00054af4) mian_recal_day_pane

0x0486,	// (0x000533e9) popup_sp_fs_cale_preview_window_ParamLimits

0x1aa1,	// (0x00054a04) list_recal_day_pane

0x0569,	// (0x000534cc) list_single_recal_day_pane_ParamLimits

0x0569,	// (0x000534cc) list_single_recal_day_pane

0x1ac8,	// (0x00054a2b) list_single_recal_day_pane_g1_ParamLimits

0x1ac8,	// (0x00054a2b) list_single_recal_day_pane_g1

0x057b,	// (0x000534de) list_single_recal_day_pane_g2_ParamLimits

0x057b,	// (0x000534de) list_single_recal_day_pane_g2

0x0587,	// (0x000534ea) list_single_recal_day_pane_g3_ParamLimits

0x0587,	// (0x000534ea) list_single_recal_day_pane_g3

0xa775,	// (0x0005d6d8) list_single_recal_day_pane_g4_ParamLimits

0xa775,	// (0x0005d6d8) list_single_recal_day_pane_g4

0x0593,	// (0x000534f6) list_single_recal_day_pane_g5_ParamLimits

0x0593,	// (0x000534f6) list_single_recal_day_pane_g5

0x059f,	// (0x00053502) list_single_recal_day_pane_g6_ParamLimits

0x059f,	// (0x00053502) list_single_recal_day_pane_g6

0x0004,

0xfca8,	// (0x00062c0b) list_single_recal_day_pane_g_ParamLimits

0xfca8,	// (0x00062c0b) list_single_recal_day_pane_g

0x05b3,	// (0x00053516) list_single_recal_day_pane_t1

0x05c5,	// (0x00053528) list_single_recal_day_pane_t2

0x0001,

0xfcb3,	// (0x00062c16) list_single_recal_day_pane_t

0xa78d,	// (0x0005d6f0) ncimui_query_button_pane_ParamLimits

0xa78d,	// (0x0005d6f0) ncimui_query_button_pane

0xa79d,	// (0x0005d700) ncimui_query_button_pane_t1_ParamLimits

0xa79d,	// (0x0005d700) ncimui_query_button_pane_t1

0x1ad4,	// (0x00054a37) ncimui_query_button_pane_t2_ParamLimits

0x1ad4,	// (0x00054a37) ncimui_query_button_pane_t2

0x0001,

0xfcb8,	// (0x00062c1b) ncimui_query_button_pane_t_ParamLimits

0xfcb8,	// (0x00062c1b) ncimui_query_button_pane_t

0xa7b0,	// (0x0005d713) query_button_pane_ParamLimits

0xa7b0,	// (0x0005d713) query_button_pane

0x1b91,	// (0x00054af4) bg_button_pane_cp0028

0x1ae7,	// (0x00054a4a) query_button_pane_t1

0x64f9,	// (0x0005945c) main_tport_pane_ParamLimits

0xa2a1,	// (0x0005d204) bg_popup_window_pane_cp01_ParamLimits

0xa2a1,	// (0x0005d204) bg_popup_window_pane_cp01

0xa2af,	// (0x0005d212) heading_pane_cp08_ParamLimits

0xa2af,	// (0x0005d212) heading_pane_cp08

0xa2bd,	// (0x0005d220) heading_pane_cp07_ParamLimits

0xa2bd,	// (0x0005d220) heading_pane_cp07

0xa353,	// (0x0005d2b6) cell_tport_appsw_pane_g2

0x0002,

0xfc0d,	// (0x00062b70) cell_tport_appsw_pane_g

0xd2fd,	// (0x00060260) input_candi_list_open_g1

0xca66,	// (0x0005f9c9) list_cale_time_pane_g6_ParamLimits

0xca66,	// (0x0005f9c9) list_cale_time_pane_g6

0x6a51,	// (0x000599b4) aid_size_touch_calib_1_ParamLimits

0x6a51,	// (0x000599b4) aid_size_touch_calib_1

0x6a5d,	// (0x000599c0) aid_size_touch_calib_2_ParamLimits

0x6a5d,	// (0x000599c0) aid_size_touch_calib_2

0x6a6b,	// (0x000599ce) aid_size_touch_calib_3_ParamLimits

0x6a6b,	// (0x000599ce) aid_size_touch_calib_3

0x6a7b,	// (0x000599de) aid_size_touch_calib_4_ParamLimits

0x6a7b,	// (0x000599de) aid_size_touch_calib_4

0x6a89,	// (0x000599ec) main_touch_calib_button_group_pane_ParamLimits

0x6a89,	// (0x000599ec) main_touch_calib_button_group_pane

0x6a97,	// (0x000599fa) main_touch_calib_pane_g1_ParamLimits

0x6aa3,	// (0x00059a06) main_touch_calib_pane_g2_ParamLimits

0x6aaf,	// (0x00059a12) main_touch_calib_pane_g3_ParamLimits

0x6abb,	// (0x00059a1e) main_touch_calib_pane_g4_ParamLimits

0xf653,	// (0x000625b6) main_touch_calib_pane_g_ParamLimits

0x6ac7,	// (0x00059a2a) main_touch_calib_pane_t1_ParamLimits

0x6ade,	// (0x00059a41) main_touch_calib_pane_t2_ParamLimits

0x6af7,	// (0x00059a5a) main_touch_calib_pane_t3_ParamLimits

0x6b0d,	// (0x00059a70) main_touch_calib_pane_t4_ParamLimits

0x6b23,	// (0x00059a86) main_touch_calib_pane_t5_ParamLimits

0xf65c,	// (0x000625bf) main_touch_calib_pane_t_ParamLimits

0xec37,	// (0x00061b9a) list_single_fp_cale_pane_g3_ParamLimits

0xec37,	// (0x00061b9a) list_single_fp_cale_pane_g3

0x64dd,	// (0x00059440) bg_button_pane_cp012_ParamLimits

0x64dd,	// (0x00059440) bg_vkb2_func_pane_cp03_ParamLimits

0x89ef,	// (0x0005b952) cell_vitu2_function_top_pane_g1_ParamLimits

0x64dd,	// (0x00059440) bg_vkb2_func_pane_cp04_ParamLimits

0x988c,	// (0x0005c7ef) main_ncimui_button_group_pane_ParamLimits

0x988c,	// (0x0005c7ef) main_ncimui_button_group_pane

0x98f4,	// (0x0005c857) main_ncimui_pane_t3_ParamLimits

0x98f4,	// (0x0005c857) main_ncimui_pane_t3

0x18be,	// (0x00054821) phacti_button_group_pane

0x1a62,	// (0x000549c5) aid_size_list_single_double_ParamLimits

0xa6ff,	// (0x0005d662) popup_ezdial_listscroll_window_ParamLimits

0x1a6e,	// (0x000549d1) popup_number_entry_window_cp01_ParamLimits

0xa7bd,	// (0x0005d720) phacti_button_pane_ParamLimits

0xa7bd,	// (0x0005d720) phacti_button_pane

0x1b91,	// (0x00054af4) bg_button_pane_cp14

0x1af5,	// (0x00054a58) phacti_button_pane_t1

0xa7ce,	// (0x0005d731) main_touch_calib_button_pane_ParamLimits

0xa7ce,	// (0x0005d731) main_touch_calib_button_pane

0xc4c4,	// (0x0005f427) bg_button_pane_cp18_ParamLimits

0xc4c4,	// (0x0005f427) bg_button_pane_cp18

0x1b03,	// (0x00054a66) main_touch_calib_button_pane_t1_ParamLimits

0x1b03,	// (0x00054a66) main_touch_calib_button_pane_t1

0x1b19,	// (0x00054a7c) main_touch_calib_button_pane_t2_ParamLimits

0x1b19,	// (0x00054a7c) main_touch_calib_button_pane_t2

0x0001,

0xfcbd,	// (0x00062c20) main_touch_calib_button_pane_t_ParamLimits

0xfcbd,	// (0x00062c20) main_touch_calib_button_pane_t

0x1b91,	// (0x00054af4) cell_ncimui_button_pane

0x1b91,	// (0x00054af4) bg_button_pane_cp032

0x1b37,	// (0x00054a9a) cell_ncimui_button_pane_t1

0x7af9,	// (0x0005aa5c) image3_infobar_pane_ParamLimits

0x7af9,	// (0x0005aa5c) image3_infobar_pane

0x9c4a,	// (0x0005cbad) fs_bigclock_status_pane_ParamLimits

0x9c4a,	// (0x0005cbad) fs_bigclock_status_pane

0x9c57,	// (0x0005cbba) main_fs_bigclock_clock_pane_ParamLimits

0x9c57,	// (0x0005cbba) main_fs_bigclock_clock_pane

0x9c73,	// (0x0005cbd6) main_fs_bigclock_indi_pane_ParamLimits

0x9c73,	// (0x0005cbd6) main_fs_bigclock_indi_pane

0x9ca1,	// (0x0005cc04) main_fs_bigclock_swipe_pane_ParamLimits

0x9ca1,	// (0x0005cc04) main_fs_bigclock_swipe_pane

0x1b91,	// (0x00054af4) main_fs_clock_dumped_data

0x9cdb,	// (0x0005cc3e) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0x9cdb,	// (0x0005cc3e) list_single_fs_bigclock_indicator_pane_g1

0x9cfa,	// (0x0005cc5d) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0x9cfa,	// (0x0005cc5d) list_single_fs_bigclock_indicator_pane_g2

0x9d14,	// (0x0005cc77) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0x9d14,	// (0x0005cc77) list_single_fs_bigclock_indicator_pane_g3

0x9d30,	// (0x0005cc93) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0x9d30,	// (0x0005cc93) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfb61,	// (0x00062ac4) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfb61,	// (0x00062ac4) list_single_fs_bigclock_indicator_pane_g

0x9d5f,	// (0x0005ccc2) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0x9d5f,	// (0x0005ccc2) list_single_fs_bigclock_indicator_pane_t1

0x9d87,	// (0x0005ccea) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0x9d87,	// (0x0005ccea) list_single_fs_bigclock_indicator_pane_t2

0x9daf,	// (0x0005cd12) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0x9daf,	// (0x0005cd12) list_single_fs_bigclock_indicator_pane_t3

0x9dd7,	// (0x0005cd3a) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0x9dd7,	// (0x0005cd3a) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfb6c,	// (0x00062acf) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfb6c,	// (0x00062acf) list_single_fs_bigclock_indicator_pane_t

0x1b45,	// (0x00054aa8) image3_infobar_fav_pane_ParamLimits

0x1b45,	// (0x00054aa8) image3_infobar_fav_pane

0x1b55,	// (0x00054ab8) image3_infobar_loc_pane_ParamLimits

0x1b55,	// (0x00054ab8) image3_infobar_loc_pane

0x1b6b,	// (0x00054ace) image3_infobar_time_pane_ParamLimits

0x1b6b,	// (0x00054ace) image3_infobar_time_pane

0xc466,	// (0x0005f3c9) image3_infobar_time_pane_g1

0x1b7b,	// (0x00054ade) image3_infobar_time_pane_t1

0xc466,	// (0x0005f3c9) image3_infobar_loc_pane_g1

0x1b89,	// (0x00054aec) image3_infobar_loc_pane_g2

0x0001,

0xfcc2,	// (0x00062c25) image3_infobar_loc_pane_g

0x1d55,	// (0x00054cb8) image3_infobar_loc_pane_t1

0xc466,	// (0x0005f3c9) image3_infobar_fav_pane_g1

0x1d63,	// (0x00054cc6) image3_infobar_fav_pane_g2

0x0001,

0xfcc7,	// (0x00062c2a) image3_infobar_fav_pane_g

0x1d6b,	// (0x00054cce) fs_bigclock_status_battery_pane

0x1d74,	// (0x00054cd7) fs_bigclock_status_signal_pane

0x1d7d,	// (0x00054ce0) fs_bigclock_status_title_pane

0x1d86,	// (0x00054ce9) fs_bigclock_status_signal_pane_g1

0x1d8f,	// (0x00054cf2) fs_bigclock_status_signal_pane_g2

0x0001,

0xfccc,	// (0x00062c2f) fs_bigclock_status_signal_pane_g

0x1d97,	// (0x00054cfa) fs_bigclock_status_battery_pane_g1

0x1da0,	// (0x00054d03) fs_bigclock_status_battery_pane_g2

0x0001,

0xfcd1,	// (0x00062c34) fs_bigclock_status_battery_pane_g

0x1da8,	// (0x00054d0b) fs_bigclock_status_title_pane_t1

0xa7de,	// (0x0005d741) main_fs_bigclock_clock_pane_g1

0xa7de,	// (0x0005d741) main_fs_bigclock_clock_pane_g2

0xa7de,	// (0x0005d741) main_fs_bigclock_clock_pane_g3

0xa7de,	// (0x0005d741) main_fs_bigclock_clock_pane_g4

0x0003,

0xfcd6,	// (0x00062c39) main_fs_bigclock_clock_pane_g

0xa7ee,	// (0x0005d751) main_fs_bigclock_clock_pane_t1

0xa804,	// (0x0005d767) main_fs_bigclock_clock_pane_t2

0x0001,

0xfcdf,	// (0x00062c42) main_fs_bigclock_clock_pane_t

0x1db6,	// (0x00054d19) list_single_fs_bigclock_indicator_pane_ParamLimits

0x1db6,	// (0x00054d19) list_single_fs_bigclock_indicator_pane

0x1dc7,	// (0x00054d2a) list_single_fs_bigclock_pane_ParamLimits

0x1dc7,	// (0x00054d2a) list_single_fs_bigclock_pane

0x1ded,	// (0x00054d50) main_fs_bigclock_indicator_pane_t1

0x1dfc,	// (0x00054d5f) list_single_fs_bigclock_pane_g1

0x1e04,	// (0x00054d67) list_single_fs_bigclock_pane_t1

0xc466,	// (0x0005f3c9) main_fs_bigclock_swipe_pane_g1

0x1e47,	// (0x00054daa) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfcf0,	// (0x00062c53) main_fs_bigclock_swipe_pane_g

0x1e4f,	// (0x00054db2) main_fs_bigclock_swipe_pane_t1_ParamLimits

0x1e4f,	// (0x00054db2) main_fs_bigclock_swipe_pane_t1

0x5687,	// (0x000585ea) call_type_pane_ParamLimits

0x1b91,	// (0x00054af4) main_btmg_pane

0x04d1,	// (0x00053434) list_single_cale_mrui_row_pane_g2_ParamLimits

0x04d1,	// (0x00053434) list_single_cale_mrui_row_pane_g2

0x0002,

0xfc63,	// (0x00062bc6) list_single_cale_mrui_row_pane_g_ParamLimits

0xfc63,	// (0x00062bc6) list_single_cale_mrui_row_pane_g

0x0557,	// (0x000534ba) list_recal_vselct_arw_lo_pane

0x1ac0,	// (0x00054a23) list_recal_vselct_arw_up_pane

0x055f,	// (0x000534c2) list_recal_vselct_pane

0xa85b,	// (0x0005d7be) btmg_button_pane

0xa867,	// (0x0005d7ca) main_btmg_pane_g1

0x1b91,	// (0x00054af4) bg_button_pane_cp044

0x1e6c,	// (0x00054dcf) btmg_button_pane_t1

0xe4d7,	// (0x0006143a) aid_listscroll_gen

0x39af,	// (0x00056912) main_cntbar_detail_pane

0x17ef,	// (0x00054752) list_cmail_folder_pane

0x10d3,	// (0x00054036) sp_fs_scroll_pane_cp03_ParamLimits

0xa86f,	// (0x0005d7d2) list_single_fs_dyc_pane_cp01_ParamLimits

0xa86f,	// (0x0005d7d2) list_single_fs_dyc_pane_cp01

0x1e7a,	// (0x00054ddd) aid_size_cmail_indent

0x05d7,	// (0x0005353a) list_single_dyc_row_pane_cp01

0xa8ad,	// (0x0005d810) cntbar_detail_list_pane_ParamLimits

0xa8ad,	// (0x0005d810) cntbar_detail_list_pane

0xa8ed,	// (0x0005d850) main_cntbar_detail_cont_pane_ParamLimits

0xa8ed,	// (0x0005d850) main_cntbar_detail_cont_pane

0x567b,	// (0x000585de) scroll_pane_cp032_ParamLimits

0x567b,	// (0x000585de) scroll_pane_cp032

0xa8f9,	// (0x0005d85c) cntbar_detail_list_event_pane_ParamLimits

0xa8f9,	// (0x0005d85c) cntbar_detail_list_event_pane

0xa8bb,	// (0x0005d81e) cntbar_detail_list_shct_pane

0xc919,	// (0x0005f87c) aid_list_gen

0x1e83,	// (0x00054de6) aid_scroll

0x1e8c,	// (0x00054def) aid_size_touch_scroll_bar

0x9e45,	// (0x0005cda8) aid_list_double

0xa909,	// (0x0005d86c) aid_list_single

0x234c,	// (0x000552af) aid_list_single_lg

0xa912,	// (0x0005d875) aid_list_z_g_a_sm

0xa91a,	// (0x0005d87d) aid_list_z_g_d

0xa922,	// (0x0005d885) aid_txt_z_prm

0xa930,	// (0x0005d893) aid_txt_z_prm_cp01

0xa93e,	// (0x0005d8a1) aid_txt_z_sec

0xa94c,	// (0x0005d8af) main_cntbar_detail_cont_pane_g1_ParamLimits

0xa94c,	// (0x0005d8af) main_cntbar_detail_cont_pane_g1

0xa959,	// (0x0005d8bc) main_cntbar_detail_cont_pane_g2_ParamLimits

0xa959,	// (0x0005d8bc) main_cntbar_detail_cont_pane_g2

0x0001,

0xfcf5,	// (0x00062c58) main_cntbar_detail_cont_pane_g_ParamLimits

0xfcf5,	// (0x00062c58) main_cntbar_detail_cont_pane_g

0x1e95,	// (0x00054df8) main_cntbar_detail_cont_pane_t1

0x1ea3,	// (0x00054e06) main_cntbar_detail_cont_pane_t2

0x1eb1,	// (0x00054e14) main_cntbar_detail_cont_pane_t3

0x0002,

0xfcfa,	// (0x00062c5d) main_cntbar_detail_cont_pane_t

0xa965,	// (0x0005d8c8) cell_cntbar_detail_list_shct_pane_ParamLimits

0xa965,	// (0x0005d8c8) cell_cntbar_detail_list_shct_pane

0x1ebf,	// (0x00054e22) cntbar_detail_list_shct_pane_g1

0x1ec8,	// (0x00054e2b) cntbar_detail_list_shct_pane_g2

0x0001,

0xfd01,	// (0x00062c64) cntbar_detail_list_shct_pane_g

0xa979,	// (0x0005d8dc) cntbar_detail_list_event_pane_g1_ParamLimits

0xa979,	// (0x0005d8dc) cntbar_detail_list_event_pane_g1

0xa985,	// (0x0005d8e8) cntbar_detail_list_event_pane_g2_ParamLimits

0xa985,	// (0x0005d8e8) cntbar_detail_list_event_pane_g2

0x0005,

0xfd06,	// (0x00062c69) cntbar_detail_list_event_pane_g_ParamLimits

0xfd06,	// (0x00062c69) cntbar_detail_list_event_pane_g

0xa9f3,	// (0x0005d956) cntbar_detail_list_event_pane_t1_ParamLimits

0xa9f3,	// (0x0005d956) cntbar_detail_list_event_pane_t1

0xaa08,	// (0x0005d96b) cntbar_detail_list_event_pane_t2_ParamLimits

0xaa08,	// (0x0005d96b) cntbar_detail_list_event_pane_t2

0x0002,

0xfd13,	// (0x00062c76) cntbar_detail_list_event_pane_t_ParamLimits

0xfd13,	// (0x00062c76) cntbar_detail_list_event_pane_t

0xc466,	// (0x0005f3c9) cell_cntbar_detail_list_shct_pane_g1

0x5a34,	// (0x00058997) navi_pane_mv_g3

0x39af,	// (0x00056912) main_cntbar_detail_pane_ParamLimits

0x1b91,	// (0x00054af4) main_notif_wgt_pane

0x779f,	// (0x0005a702) aid_tch_main_mp4_pane_g4

0x7a74,	// (0x0005a9d7) popup_slider_window_cp02

0x054d,	// (0x000534b0) list_recal_day_event_pane

0xa88d,	// (0x0005d7f0) cntbar_detail_btn_pane_ParamLimits

0xa88d,	// (0x0005d7f0) cntbar_detail_btn_pane

0xa89d,	// (0x0005d800) cntbar_detail_btn_pane_cp01_ParamLimits

0xa89d,	// (0x0005d800) cntbar_detail_btn_pane_cp01

0xa8bb,	// (0x0005d81e) cntbar_detail_list_shct_pane_ParamLimits

0xa8c7,	// (0x0005d82a) cntbar_detail_pane_g1_ParamLimits

0xa8c7,	// (0x0005d82a) cntbar_detail_pane_g1

0xa8d7,	// (0x0005d83a) cntbar_detail_pane_t1_ParamLimits

0xa8d7,	// (0x0005d83a) cntbar_detail_pane_t1

0xa991,	// (0x0005d8f4) cntbar_detail_list_event_pane_g3_ParamLimits

0xa991,	// (0x0005d8f4) cntbar_detail_list_event_pane_g3

0xa9a9,	// (0x0005d90c) cntbar_detail_list_event_pane_g4_ParamLimits

0xa9a9,	// (0x0005d90c) cntbar_detail_list_event_pane_g4

0xa9c1,	// (0x0005d924) cntbar_detail_list_event_pane_g5_ParamLimits

0xa9c1,	// (0x0005d924) cntbar_detail_list_event_pane_g5

0xa9d9,	// (0x0005d93c) cntbar_detail_list_event_pane_g6_ParamLimits

0xa9d9,	// (0x0005d93c) cntbar_detail_list_event_pane_g6

0xaa1d,	// (0x0005d980) cntbar_detail_list_event_pane_t3_ParamLimits

0xaa1d,	// (0x0005d980) cntbar_detail_list_event_pane_t3

0xaa2f,	// (0x0005d992) popup_notif_wgt_window_ParamLimits

0xaa2f,	// (0x0005d992) popup_notif_wgt_window

0xaa3f,	// (0x0005d9a2) popup_submenu_window_cp01_ParamLimits

0xaa3f,	// (0x0005d9a2) popup_submenu_window_cp01

0xc6a1,	// (0x0005f604) bg_popup_window_pane_cp10

0x1ed1,	// (0x00054e34) listscroll_notif_wgt_pane

0x1ee3,	// (0x00054e46) list_notif_wgt_window

0x1eec,	// (0x00054e4f) scroll_pane_cp033

0xaa4f,	// (0x0005d9b2) list_notif_wgt_row_pane_ParamLimits

0xaa4f,	// (0x0005d9b2) list_notif_wgt_row_pane

0x1ef5,	// (0x00054e58) aid_size_list_notif_wgt_del

0x1f02,	// (0x00054e65) list_notif_wgt_row_pane_g1

0x1f0e,	// (0x00054e71) list_notif_wgt_row_pane_g2

0x1f1d,	// (0x00054e80) list_notif_wgt_row_pane_g3

0x0002,

0xfd1a,	// (0x00062c7d) list_notif_wgt_row_pane_g

0x1f2a,	// (0x00054e8d) list_notif_wgt_row_pane_t1

0x1f40,	// (0x00054ea3) list_notif_wgt_row_pane_t2

0x1f52,	// (0x00054eb5) list_notif_wgt_row_pane_t3

0x0002,

0xfd21,	// (0x00062c84) list_notif_wgt_row_pane_t

0x09d1,	// (0x00053934) list_recal_day_event_pane_g1

0x1f64,	// (0x00054ec7) list_recal_day_event_pane_t1

0x1b91,	// (0x00054af4) bg_button_pane_cp045

0xaa63,	// (0x0005d9c6) cntbar_detail_btn_pane_t1

0xd3e9,	// (0x0006034c) main_callh_pane_ParamLimits

0xd3e9,	// (0x0006034c) main_callh_pane

0x1b91,	// (0x00054af4) main_coverflow0_pane

0x1b91,	// (0x00054af4) main_wgtman_pane

0x9cb9,	// (0x0005cc1c) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x9cb9,	// (0x0005cc1c) main_fs_bigclock_unlock_btn_pane

0xa34b,	// (0x0005d2ae) bg_button_pane_cp16

0xa35b,	// (0x0005d2be) cell_tport_appsw_pane_g3

0xaa71,	// (0x0005d9d4) cf0_flow_pane_ParamLimits

0xaa71,	// (0x0005d9d4) cf0_flow_pane

0x1f73,	// (0x00054ed6) listscroll_cf0_pane

0x1f7e,	// (0x00054ee1) main_cf0_pane_g1

0xaa80,	// (0x0005d9e3) main_cf0_pane_t1_ParamLimits

0xaa80,	// (0x0005d9e3) main_cf0_pane_t1

0xaa94,	// (0x0005d9f7) main_cf0_pane_t2_ParamLimits

0xaa94,	// (0x0005d9f7) main_cf0_pane_t2

0x0001,

0xfd2d,	// (0x00062c90) main_cf0_pane_t_ParamLimits

0xfd2d,	// (0x00062c90) main_cf0_pane_t

0x1f90,	// (0x00054ef3) scroll_pane_cp11

0xaaa8,	// (0x0005da0b) cf0_flow_pane_g1

0xaab0,	// (0x0005da13) cf0_flow_pane_g2

0x0001,

0xfd32,	// (0x00062c95) cf0_flow_pane_g

0xaab8,	// (0x0005da1b) cf0_flow_pane_t1

0x1b91,	// (0x00054af4) main_call6_pane

0x1b91,	// (0x00054af4) main_calllock_pane

0xaac6,	// (0x0005da29) call6_btn_grp_pane_ParamLimits

0xaac6,	// (0x0005da29) call6_btn_grp_pane

0xaad3,	// (0x0005da36) call6_pane_g1_ParamLimits

0xaad3,	// (0x0005da36) call6_pane_g1

0xaae3,	// (0x0005da46) popup_call6_1st_window_ParamLimits

0xaae3,	// (0x0005da46) popup_call6_1st_window

0xaaf3,	// (0x0005da56) popup_call6_2nd_window_ParamLimits

0xaaf3,	// (0x0005da56) popup_call6_2nd_window

0xab03,	// (0x0005da66) cell_call6_btn_pane_ParamLimits

0xab03,	// (0x0005da66) cell_call6_btn_pane

0xc6a1,	// (0x0005f604) bg_popup_call2_in_pane_cp03

0x1f9b,	// (0x00054efe) popup_call6_1st_window_g1

0x1fa3,	// (0x00054f06) popup_call6_1st_window_g2

0x1fab,	// (0x00054f0e) popup_call6_1st_window_g3

0x0002,

0xfd37,	// (0x00062c9a) popup_call6_1st_window_g

0x1fb3,	// (0x00054f16) popup_call6_1st_window_t1

0x1fc2,	// (0x00054f25) popup_call6_1st_window_t2

0x1fd2,	// (0x00054f35) popup_call6_1st_window_t3

0x0002,

0xfd3e,	// (0x00062ca1) popup_call6_1st_window_t

0xc6a1,	// (0x0005f604) bg_popup_call2_in_pane_cp04

0x1fe2,	// (0x00054f45) popup_call6_2nd_window_g1

0x1fea,	// (0x00054f4d) popup_call6_2nd_window_g2

0x1ff2,	// (0x00054f55) popup_call6_2nd_window_g3

0x0002,

0xfd45,	// (0x00062ca8) popup_call6_2nd_window_g

0x1ffa,	// (0x00054f5d) popup_call6_2nd_window_t1

0x3685,	// (0x000565e8) bg_button_pane_cp15

0xab14,	// (0x0005da77) cell_call6_btn_pane_g1

0xab1d,	// (0x0005da80) cell_call6_btn_pane_t1

0xab2c,	// (0x0005da8f) listscroll_wgtman_pane_ParamLimits

0xab2c,	// (0x0005da8f) listscroll_wgtman_pane

0xab48,	// (0x0005daab) wgtman_btn_pane_ParamLimits

0xab48,	// (0x0005daab) wgtman_btn_pane

0xce6d,	// (0x0005fdd0) aid_scroll_copy1

0x2021,	// (0x00054f84) list_wgtman_pane

0xab7d,	// (0x0005dae0) wgtman_btn_pane_g1_ParamLimits

0xab7d,	// (0x0005dae0) wgtman_btn_pane_g1

0xaba5,	// (0x0005db08) wgtman_btn_pane_t1_ParamLimits

0xaba5,	// (0x0005db08) wgtman_btn_pane_t1

0x202b,	// (0x00054f8e) wgtman_btn_pane_t2_ParamLimits

0x202b,	// (0x00054f8e) wgtman_btn_pane_t2

0x0001,

0xfd4c,	// (0x00062caf) wgtman_btn_pane_t_ParamLimits

0xfd4c,	// (0x00062caf) wgtman_btn_pane_t

0xabdc,	// (0x0005db3f) listrow_wgtman_pane_ParamLimits

0xabdc,	// (0x0005db3f) listrow_wgtman_pane

0xabf3,	// (0x0005db56) listrow_wgtman_pane_g1

0xac00,	// (0x0005db63) listrow_wgtman_pane_g2

0x0001,

0xfd51,	// (0x00062cb4) listrow_wgtman_pane_g

0xac1e,	// (0x0005db81) listrow_wgtman_pane_t1

0xac36,	// (0x0005db99) listrow_wgtman_pane_t2

0x0001,

0xfd56,	// (0x00062cb9) listrow_wgtman_pane_t

0xac5c,	// (0x0005dbbf) wait_bar_pane_cp09

0x2042,	// (0x00054fa5) main_calllock_btn_pane

0x204c,	// (0x00054faf) main_calllock_pane_g1

0x1b91,	// (0x00054af4) bg_button_pane_cp17

0x2009,	// (0x00054f6c) main_calllock_btn_pane_g1

0x2058,	// (0x00054fbb) main_calllock_btn_pane_t1

0x1b91,	// (0x00054af4) main_dialer3_pane

0x1b91,	// (0x00054af4) main_fmrd2_pane

0xc466,	// (0x0005f3c9) main_fs_bigclock_unlock_btn_pane_g1

0xac76,	// (0x0005dbd9) main_fs_bigclock_unlock_btn_pane_t1

0xac84,	// (0x0005dbe7) area_fmrd2_info_pane_ParamLimits

0xac84,	// (0x0005dbe7) area_fmrd2_info_pane

0xac90,	// (0x0005dbf3) area_fmrd2_visual_pane_ParamLimits

0xac90,	// (0x0005dbf3) area_fmrd2_visual_pane

0xac9e,	// (0x0005dc01) fmrd2_indi_pane_ParamLimits

0xac9e,	// (0x0005dc01) fmrd2_indi_pane

0xacab,	// (0x0005dc0e) area_fmrd2_visual_pane_g1

0xacb3,	// (0x0005dc16) area_fmrd2_visual_pane_t1

0xacc3,	// (0x0005dc26) area_fmrd2_visual_pane_t2

0xacd3,	// (0x0005dc36) area_fmrd2_visual_pane_t3

0x0002,

0xfd60,	// (0x00062cc3) area_fmrd2_visual_pane_t

0xace3,	// (0x0005dc46) area_fmrd2_info_pane_g1

0xaceb,	// (0x0005dc4e) area_fmrd2_info_pane_t1

0xacfb,	// (0x0005dc5e) area_fmrd2_info_pane_t2

0xad0b,	// (0x0005dc6e) area_fmrd2_info_pane_t3

0xad1b,	// (0x0005dc7e) area_fmrd2_info_pane_t4

0x0003,

0xfd67,	// (0x00062cca) area_fmrd2_info_pane_t

0xad2b,	// (0x0005dc8e) fmrd2_indi_pane_t1

0xad3b,	// (0x0005dc9e) fmrd2_indi_pane_t2

0xad4b,	// (0x0005dcae) fmrd2_indi_pane_t3

0x0002,

0xfd70,	// (0x00062cd3) fmrd2_indi_pane_t

0x9d41,	// (0x0005cca4) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0x9d41,	// (0x0005cca4) list_single_fs_bigclock_indicator_pane_g5

0x9df6,	// (0x0005cd59) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0x9df6,	// (0x0005cd59) list_single_fs_bigclock_indicator_pane_t5

0x060a,	// (0x0005356d) aid_cell_bcale_month_pane_ParamLimits

0x060a,	// (0x0005356d) aid_cell_bcale_month_pane

0x060a,	// (0x0005356d) bcale_month_pane_ParamLimits

0x060a,	// (0x0005356d) bcale_month_pane

0x10b9,	// (0x0005401c) bcale_preview_pane_ParamLimits

0x10b9,	// (0x0005401c) bcale_preview_pane

0x1e04,	// (0x00054d67) list_single_fs_bigclock_pane_t1_ParamLimits

0x1e23,	// (0x00054d86) list_single_fs_bigclock_pane_t2_ParamLimits

0x1e23,	// (0x00054d86) list_single_fs_bigclock_pane_t2

0x0001,

0xfceb,	// (0x00062c4e) list_single_fs_bigclock_pane_t_ParamLimits

0xfceb,	// (0x00062c4e) list_single_fs_bigclock_pane_t

0xac6e,	// (0x0005dbd1) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfd5b,	// (0x00062cbe) main_fs_bigclock_unlock_btn_pane_g

0xad5b,	// (0x0005dcbe) aid_dia3_key_size_ParamLimits

0xad5b,	// (0x0005dcbe) aid_dia3_key_size

0xad67,	// (0x0005dcca) aid_dia3_listrow_size_ParamLimits

0xad67,	// (0x0005dcca) aid_dia3_listrow_size

0xad77,	// (0x0005dcda) dia3_keypad_fun_pane_ParamLimits

0xad77,	// (0x0005dcda) dia3_keypad_fun_pane

0xad87,	// (0x0005dcea) dia3_keypad_num_pane_ParamLimits

0xad87,	// (0x0005dcea) dia3_keypad_num_pane

0xad97,	// (0x0005dcfa) dia3_listscroll_pane_ParamLimits

0xad97,	// (0x0005dcfa) dia3_listscroll_pane

0xada5,	// (0x0005dd08) dia3_numentry_pane_ParamLimits

0xada5,	// (0x0005dd08) dia3_numentry_pane

0x2067,	// (0x00054fca) dia3_list_pane

0xadb3,	// (0x0005dd16) scroll_pane_cp12

0x1b91,	// (0x00054af4) bg_dia3_numentry_pane

0xadbe,	// (0x0005dd21) dia3_numentry_pane_t1

0xadcd,	// (0x0005dd30) cell_dia3_key_num_pane

0xadd5,	// (0x0005dd38) cell_dia3_key0_fun_pane_ParamLimits

0xadd5,	// (0x0005dd38) cell_dia3_key0_fun_pane

0xade2,	// (0x0005dd45) cell_dia3_key1_fun_pane_ParamLimits

0xade2,	// (0x0005dd45) cell_dia3_key1_fun_pane

0xadef,	// (0x0005dd52) dia3_listrow_pane

0x1361,	// (0x000542c4) bg_dia3_numentry_pane_g1

0x1b91,	// (0x00054af4) bg_button_pane_cp21

0xadfc,	// (0x0005dd5f) cell_dia3_key_num_pane_t1

0xae0a,	// (0x0005dd6d) cell_dia3_key_num_pane_t2

0xae19,	// (0x0005dd7c) cell_dia3_key_num_pane_t3

0xae28,	// (0x0005dd8b) cell_dia3_key_num_pane_t4

0x0003,

0xfd77,	// (0x00062cda) cell_dia3_key_num_pane_t

0x1b91,	// (0x00054af4) bg_button_pane_cp19

0xae37,	// (0x0005dd9a) cell_dia3_key0_fun_pane_g1

0x1b91,	// (0x00054af4) bg_button_pane_cp20

0xae3f,	// (0x0005dda2) cell_dia3_key1_fun_pane_g1

0x1d1b,	// (0x00054c7e) area_left_week_number_pane

0x1d1b,	// (0x00054c7e) area_top_day_name_pane

0x1d1b,	// (0x00054c7e) frame_month_view_pane

0x1d1b,	// (0x00054c7e) grid_month_view_pane

0x1d1b,	// (0x00054c7e) cell_top_day_name_pane_ParamLimits

0x1d1b,	// (0x00054c7e) cell_top_day_name_pane

0x1d1b,	// (0x00054c7e) cell_area_left_week_number_pane_ParamLimits

0x1d1b,	// (0x00054c7e) cell_area_left_week_number_pane

0x1d1b,	// (0x00054c7e) cell_month_view_pane_ParamLimits

0x1d1b,	// (0x00054c7e) cell_month_view_pane

0x1d0f,	// (0x00054c72) frm_month_g1

0x1d0f,	// (0x00054c72) frm_month_g2

0x1d0f,	// (0x00054c72) frm_month_g3

0x1d0f,	// (0x00054c72) frm_month_g4

0x1d0f,	// (0x00054c72) frm_month_g5

0x1d0f,	// (0x00054c72) frm_month_g6

0x1d0f,	// (0x00054c72) frm_month_g7

0x1d0f,	// (0x00054c72) frm_month_g8

0x1d0f,	// (0x00054c72) frm_month_g9

0x1d0f,	// (0x00054c72) frm_month_g10

0x1d0f,	// (0x00054c72) frm_month_g11

0x1d0f,	// (0x00054c72) frm_month_g12

0x1d0f,	// (0x00054c72) frm_month_g13

0x1d0f,	// (0x00054c72) frm_month_g14

0x1d0f,	// (0x00054c72) frm_month_g15

0x1d0f,	// (0x00054c72) frm_month_g16

0x000f,

0xfd80,	// (0x00062ce3) frm_month_g

0x2071,	// (0x00054fd4) cell_top_day_name_pane_t1

0x1d0f,	// (0x00054c72) cell_area_left_week_number_pane_g1

0x2071,	// (0x00054fd4) cell_area_left_week_number_pane_t1

0x1d0f,	// (0x00054c72) cell_month_view_pane_g1

0x2071,	// (0x00054fd4) cell_month_view_pane_t1

0x1b91,	// (0x00054af4) main_fps_pane

0x170f,	// (0x00054672) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0x170f,	// (0x00054672) cmail_ddmenu_btn02_pane_cp1

0x172b,	// (0x0005468e) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0x172b,	// (0x0005468e) cmail_ddmenu_btn02_pane_cp2

0xa745,	// (0x0005d6a8) cmail_ddmenu_btn02_pane_g2_ParamLimits

0xa745,	// (0x0005d6a8) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfc9e,	// (0x00062c01) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfc9e,	// (0x00062c01) cmail_ddmenu_btn02_pane_g

0xa763,	// (0x0005d6c6) cmail_ddmenu_btn02_pane_t2_ParamLimits

0xa763,	// (0x0005d6c6) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfca3,	// (0x00062c06) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfca3,	// (0x00062c06) cmail_ddmenu_btn02_pane_t

0xae47,	// (0x0005ddaa) fps_text_pane_ParamLimits

0xae47,	// (0x0005ddaa) fps_text_pane

0xae54,	// (0x0005ddb7) main_fps_pane_g1_ParamLimits

0xae54,	// (0x0005ddb7) main_fps_pane_g1

0xae60,	// (0x0005ddc3) wait_bar_pane_cp010_ParamLimits

0xae60,	// (0x0005ddc3) wait_bar_pane_cp010

0xae6c,	// (0x0005ddcf) fps_text_pane_t1_ParamLimits

0xae6c,	// (0x0005ddcf) fps_text_pane_t1

0x7e89,	// (0x0005adec) cam4_image_uncrop_pane_g1

0x7e92,	// (0x0005adf5) cam4_image_uncrop_pane_g2

0x7e9b,	// (0x0005adfe) cam4_image_uncrop_pane_g3

0x7ea4,	// (0x0005ae07) cam4_image_uncrop_pane_g4

0x0003,

0xf7e5,	// (0x00062748) cam4_image_uncrop_pane_g

0xadef,	// (0x0005dd52) dia3_listrow_pane_ParamLimits

0x1b91,	// (0x00054af4) main_phob2_pane

0xa308,	// (0x0005d26b) cell_tport_appsw_pane_cp02_ParamLimits

0xa308,	// (0x0005d26b) cell_tport_appsw_pane_cp02

0xa317,	// (0x0005d27a) cell_tport_appsw_pane_cp03_ParamLimits

0xa317,	// (0x0005d27a) cell_tport_appsw_pane_cp03

0x1b91,	// (0x00054af4) phob2_contact_card_pane

0x1b91,	// (0x00054af4) phob2_listscroll_pane

0x2083,	// (0x00054fe6) phob2_list_pane

0x208b,	// (0x00054fee) scroll_pane_cp034

0xae85,	// (0x0005dde8) phob2_cc_data_pane_ParamLimits

0xae85,	// (0x0005dde8) phob2_cc_data_pane

0xae9c,	// (0x0005ddff) phob2_cc_listscroll_pane_ParamLimits

0xae9c,	// (0x0005ddff) phob2_cc_listscroll_pane

0xa681,	// (0x0005d5e4) list_double_large_graphic_phob2_pane_ParamLimits

0xa681,	// (0x0005d5e4) list_double_large_graphic_phob2_pane

0xaeb8,	// (0x0005de1b) list_double_large_graphic_phob2_pane_g1_ParamLimits

0xaeb8,	// (0x0005de1b) list_double_large_graphic_phob2_pane_g1

0xaec5,	// (0x0005de28) list_double_large_graphic_phob2_pane_g2_ParamLimits

0xaec5,	// (0x0005de28) list_double_large_graphic_phob2_pane_g2

0x0003,

0xfda1,	// (0x00062d04) list_double_large_graphic_phob2_pane_g_ParamLimits

0xfda1,	// (0x00062d04) list_double_large_graphic_phob2_pane_g

0xaeeb,	// (0x0005de4e) list_double_large_graphic_phob2_pane_t1_ParamLimits

0xaeeb,	// (0x0005de4e) list_double_large_graphic_phob2_pane_t1

0xaf00,	// (0x0005de63) list_double_large_graphic_phob2_pane_t2_ParamLimits

0xaf00,	// (0x0005de63) list_double_large_graphic_phob2_pane_t2

0x0001,

0xfdaa,	// (0x00062d0d) list_double_large_graphic_phob2_pane_t_ParamLimits

0xfdaa,	// (0x00062d0d) list_double_large_graphic_phob2_pane_t

0xc41a,	// (0x0005f37d) list_highlight_pane_cp024

0xaf15,	// (0x0005de78) phob2_cc_button_pane

0xaf1f,	// (0x0005de82) phob2_cc_data_pane_g1_ParamLimits

0xaf1f,	// (0x0005de82) phob2_cc_data_pane_g1

0xaf33,	// (0x0005de96) phob2_cc_data_pane_g2_ParamLimits

0xaf33,	// (0x0005de96) phob2_cc_data_pane_g2

0x0001,

0xfdaf,	// (0x00062d12) phob2_cc_data_pane_g_ParamLimits

0xfdaf,	// (0x00062d12) phob2_cc_data_pane_g

0xaf47,	// (0x0005deaa) phob2_cc_data_pane_t1_ParamLimits

0xaf47,	// (0x0005deaa) phob2_cc_data_pane_t1

0xaf69,	// (0x0005decc) phob2_cc_data_pane_t2_ParamLimits

0xaf69,	// (0x0005decc) phob2_cc_data_pane_t2

0xaf8b,	// (0x0005deee) phob2_cc_data_pane_t3_ParamLimits

0xaf8b,	// (0x0005deee) phob2_cc_data_pane_t3

0x0002,

0xfdb4,	// (0x00062d17) phob2_cc_data_pane_t_ParamLimits

0xfdb4,	// (0x00062d17) phob2_cc_data_pane_t

0x2093,	// (0x00054ff6) phob2_cc_list_pane_ParamLimits

0x2093,	// (0x00054ff6) phob2_cc_list_pane

0x10df,	// (0x00054042) scroll_pane_cp035_ParamLimits

0x10df,	// (0x00054042) scroll_pane_cp035

0x39af,	// (0x00056912) bg_button_pane_cp033

0xafac,	// (0x0005df0f) phob2_cc_button_pane_g1

0xafb8,	// (0x0005df1b) phob2_cc_button_pane_t1

0xafcd,	// (0x0005df30) phob2_cc_button_pane_t2

0x0001,

0xfdbb,	// (0x00062d1e) phob2_cc_button_pane_t

0xafdf,	// (0x0005df42) list_double_large_graphic_phob2_cc_pane_ParamLimits

0xafdf,	// (0x0005df42) list_double_large_graphic_phob2_cc_pane

0xb02c,	// (0x0005df8f) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0xb02c,	// (0x0005df8f) list_double_large_graphic_phob2_cc_pane_g1

0xb03d,	// (0x0005dfa0) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0xb03d,	// (0x0005dfa0) list_double_large_graphic_phob2_cc_pane_g2

0xb04c,	// (0x0005dfaf) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0xb04c,	// (0x0005dfaf) list_double_large_graphic_phob2_cc_pane_g3

0xb05b,	// (0x0005dfbe) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0xb05b,	// (0x0005dfbe) list_double_large_graphic_phob2_cc_pane_g4

0xb06c,	// (0x0005dfcf) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0xb06c,	// (0x0005dfcf) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xfdc0,	// (0x00062d23) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xfdc0,	// (0x00062d23) list_double_large_graphic_phob2_cc_pane_g

0xb07b,	// (0x0005dfde) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0xb07b,	// (0x0005dfde) list_double_large_graphic_phob2_cc_pane_t1

0xb0a4,	// (0x0005e007) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0xb0a4,	// (0x0005e007) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xfdcb,	// (0x00062d2e) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xfdcb,	// (0x00062d2e) list_double_large_graphic_phob2_cc_pane_t

0x209f,	// (0x00055002) list_highlight_pane_cp025_ParamLimits

0x209f,	// (0x00055002) list_highlight_pane_cp025

0x39af,	// (0x00056912) bg_button_pane_cp033_ParamLimits

0xafac,	// (0x0005df0f) phob2_cc_button_pane_g1_ParamLimits

0xafb8,	// (0x0005df1b) phob2_cc_button_pane_t1_ParamLimits

0xafcd,	// (0x0005df30) phob2_cc_button_pane_t2_ParamLimits

0xfdbb,	// (0x00062d1e) phob2_cc_button_pane_t_ParamLimits

0x3679,	// (0x000565dc) popup_wgtman_window

0x088f,	// (0x000537f2) scroll_pane_cp038

0xab65,	// (0x0005dac8) wgtman_btn_pane_cp_01_ParamLimits

0xab65,	// (0x0005dac8) wgtman_btn_pane_cp_01

0x20ad,	// (0x00055010) wgtman_content_pane

0x20b6,	// (0x00055019) wgtman_heading_pane

0x1b91,	// (0x00054af4) bg_heading_pane_cp02

0x20bf,	// (0x00055022) wgtman_heading_pane_g1

0x20c7,	// (0x0005502a) wgtman_heading_pane_t1

0x20d5,	// (0x00055038) scroll_pane_cp036

0x20dd,	// (0x00055040) wgtman_list_pane

0x1d3b,	// (0x00054c9e) wgtman_list_pane_t1_ParamLimits

0x1d3b,	// (0x00054c9e) wgtman_list_pane_t1

0x7de6,	// (0x0005ad49) cam4_grid_pane

0x8bb5,	// (0x0005bb18) bg_button_pane_cp015_ParamLimits

0x8bca,	// (0x0005bb2d) bg_button_pane_cp016_ParamLimits

0x8bd6,	// (0x0005bb39) bg_button_pane_cp017_ParamLimits

0x8c2f,	// (0x0005bb92) popup_vitu2_query_window_g3_ParamLimits

0x8c2f,	// (0x0005bb92) popup_vitu2_query_window_g3

0x8cd0,	// (0x0005bc33) popup_vitu2_query_window_t6_ParamLimits

0x8cd0,	// (0x0005bc33) popup_vitu2_query_window_t6

0x8cfb,	// (0x0005bc5e) popup_vitu2_query_window_t7_ParamLimits

0x8cfb,	// (0x0005bc5e) popup_vitu2_query_window_t7

0x1d27,	// (0x00054c8a) cam4_grid_pane_g1

0x1d30,	// (0x00054c93) cam4_grid_pane_g2

0x20e5,	// (0x00055048) cam4_grid_pane_g3

0x20ee,	// (0x00055051) cam4_grid_pane_g4

0x0003,

0xfdd0,	// (0x00062d33) cam4_grid_pane_g

0x44e7,	// (0x0005744a) aid_placing_vt_slider_lsc_ParamLimits

0x4807,	// (0x0005776a) vidtel_button_pane_ParamLimits

0x4807,	// (0x0005776a) vidtel_button_pane

0x1b91,	// (0x00054af4) bg_button_pane_cp034

0x20f9,	// (0x0005505c) vidtel_button_pane_g1

0x2101,	// (0x00055064) vidtel_button_pane_t1

0x09c1,	// (0x00053924) aid_size_vtel_slider_touch

0x10df,	// (0x00054042) scroll_pane_cp039

0x9a63,	// (0x0005c9c6) ncim_query_button_pane_cp01_ParamLimits

0x9a82,	// (0x0005c9e5) ncimui_query_pane_g1_ParamLimits

0x39af,	// (0x00056912) input_focus_pane_cp012_ParamLimits

0x139f,	// (0x00054302) ncim_query_entry_pane_t1_ParamLimits

0x10df,	// (0x00054042) scroll_pane_cp039_ParamLimits

0x59a6,	// (0x00058909) navi_pane_bcale_mc_g1

0x59ae,	// (0x00058911) navi_pane_bcale_mc_t1

0x1761,	// (0x000546c4) main_sp_fs_email_pane_g1

0x176d,	// (0x000546d0) main_sp_fs_email_pane_g2

0x0001,

0xfbd6,	// (0x00062b39) main_sp_fs_email_pane_g

0x1988,	// (0x000548eb) list_single_cale_mrui_row_pane_g3_ParamLimits

0x1988,	// (0x000548eb) list_single_cale_mrui_row_pane_g3

0xa783,	// (0x0005d6e6) list_single_recal_day_pane_g5_event_pane

0x05ab,	// (0x0005350e) list_single_recal_day_pane_g7

0x2117,	// (0x0005507a) list_recal_day_event_pane_cp01

0x2120,	// (0x00055083) list_recal_vselct_arw_lo_pane_cp01

0x2128,	// (0x0005508b) list_recal_vselct_arw_up_pane_cp01

0x2130,	// (0x00055093) list_recal_vselct_pane_cp01

0x09d1,	// (0x00053934) list_recal_day_event_pane_cp01_g1

0x05e0,	// (0x00053543) list_recal_day_event_pane_cp01_t1

0x05b3,	// (0x00053516) list_single_recal_day_pane_t1_ParamLimits

0x05c5,	// (0x00053528) list_single_recal_day_pane_t2_ParamLimits

0xfcb3,	// (0x00062c16) list_single_recal_day_pane_t_ParamLimits

0xc3ad,	// (0x0005f310) bg_notes_pane_ParamLimits

0xc4a2,	// (0x0005f405) list_notes_pane_ParamLimits

0x3a3d,	// (0x000569a0) scroll_pane_cp06_ParamLimits

0xc4c4,	// (0x0005f427) main_notes_pane_ParamLimits

0x39af,	// (0x00056912) main_welc_pane

0xb107,	// (0x0005e06a) main_welc_body_pane_ParamLimits

0xb107,	// (0x0005e06a) main_welc_body_pane

0xb122,	// (0x0005e085) main_welc_opti_pane_ParamLimits

0xb122,	// (0x0005e085) main_welc_opti_pane

0xb179,	// (0x0005e0dc) main_welc_pane_t1_ParamLimits

0xb179,	// (0x0005e0dc) main_welc_pane_t1

0xb331,	// (0x0005e294) main_welc_body_row_pane_ParamLimits

0xb331,	// (0x0005e294) main_welc_body_row_pane

0xc41a,	// (0x0005f37d) main_welc_opti_row_pane_ParamLimits

0xc41a,	// (0x0005f37d) main_welc_opti_row_pane

0x2142,	// (0x000550a5) main_welc_opti_row_pane_g1

0xb34b,	// (0x0005e2ae) main_welc_opti_row_pane_t1

0x214a,	// (0x000550ad) main_welc_body_row_pane_t1

0x1edb,	// (0x00054e3e) popup_notif_wgt_heading_pane

0x1ef5,	// (0x00054e58) aid_size_list_notif_wgt_del_ParamLimits

0x1f02,	// (0x00054e65) list_notif_wgt_row_pane_g1_ParamLimits

0x1f0e,	// (0x00054e71) list_notif_wgt_row_pane_g2_ParamLimits

0x1f1d,	// (0x00054e80) list_notif_wgt_row_pane_g3_ParamLimits

0xfd1a,	// (0x00062c7d) list_notif_wgt_row_pane_g_ParamLimits

0x1f2a,	// (0x00054e8d) list_notif_wgt_row_pane_t1_ParamLimits

0x1f40,	// (0x00054ea3) list_notif_wgt_row_pane_t2_ParamLimits

0x1f52,	// (0x00054eb5) list_notif_wgt_row_pane_t3_ParamLimits

0xfd21,	// (0x00062c84) list_notif_wgt_row_pane_t_ParamLimits

0xabf3,	// (0x0005db56) listrow_wgtman_pane_g1_ParamLimits

0xac00,	// (0x0005db63) listrow_wgtman_pane_g2_ParamLimits

0xfd51,	// (0x00062cb4) listrow_wgtman_pane_g_ParamLimits

0xac1e,	// (0x0005db81) listrow_wgtman_pane_t1_ParamLimits

0xac36,	// (0x0005db99) listrow_wgtman_pane_t2_ParamLimits

0xfd56,	// (0x00062cb9) listrow_wgtman_pane_t_ParamLimits

0xac5c,	// (0x0005dbbf) wait_bar_pane_cp09_ParamLimits

0x1b91,	// (0x00054af4) bg_popup_heading_pane_cp02

0x2159,	// (0x000550bc) popup_notif_wgt_heading_pane_g1

0x2161,	// (0x000550c4) popup_notif_wgt_heading_pane_t1

0x1b91,	// (0x00054af4) main_vids_pane

0x1b91,	// (0x00054af4) vids_listscroll_pane

0xb35a,	// (0x0005e2bd) scroll_pane_cp040

0x1b91,	// (0x00054af4) vids_list_pane

0xb365,	// (0x0005e2c8) vids_list_double_pane_ParamLimits

0xb365,	// (0x0005e2c8) vids_list_double_pane

0xb379,	// (0x0005e2dc) vids_list_double_pane_g1

0xb382,	// (0x0005e2e5) vids_list_double_pane_t1

0xb392,	// (0x0005e2f5) vids_list_double_pane_t2

0x0001,

0xfdef,	// (0x00062d52) vids_list_double_pane_t

0x64dd,	// (0x00059440) main_ncimui_pane_ParamLimits

0x98a4,	// (0x0005c807) main_ncimui_pane_g1_ParamLimits

0x98b2,	// (0x0005c815) main_ncimui_pane_g2_ParamLimits

0x98b2,	// (0x0005c815) main_ncimui_pane_g2

0x0001,

0xfad7,	// (0x00062a3a) main_ncimui_pane_g_ParamLimits

0xfad7,	// (0x00062a3a) main_ncimui_pane_g

0xb13d,	// (0x0005e0a0) main_welc_pane_g1_ParamLimits

0xb13d,	// (0x0005e0a0) main_welc_pane_g1

0xb149,	// (0x0005e0ac) main_welc_pane_g2_ParamLimits

0xb149,	// (0x0005e0ac) main_welc_pane_g2

0x0003,

0xfdd9,	// (0x00062d3c) main_welc_pane_g_ParamLimits

0xfdd9,	// (0x00062d3c) main_welc_pane_g

0xc3ad,	// (0x0005f310) listscroll_mce_pane_ParamLimits

0x5a70,	// (0x000589d3) wait_bar_pane_cp10

0xe4df,	// (0x00061442) main_cale_day_pane_ParamLimits

0xe4df,	// (0x00061442) main_cale_week_pane_ParamLimits

0xc3ad,	// (0x0005f310) main_messa_pane_ParamLimits

0x7291,	// (0x0005a1f4) main_clock2_btn_pane_ParamLimits

0x7291,	// (0x0005a1f4) main_clock2_btn_pane

0xecb1,	// (0x00061c14) main_clock2_btn_pane_cp01_ParamLimits

0xecb1,	// (0x00061c14) main_clock2_btn_pane_cp01

0x1967,	// (0x000548ca) list_cale_mrui_pane_ParamLimits

0x1f88,	// (0x00054eeb) main_cf0_pane_g2

0x0001,

0xfd28,	// (0x00062c8b) main_cf0_pane_g

0x1d1b,	// (0x00054c7e) area_left_week_number_pane_ParamLimits

0x1d1b,	// (0x00054c7e) area_top_day_name_pane_ParamLimits

0x1d1b,	// (0x00054c7e) frame_month_view_pane_ParamLimits

0x1d1b,	// (0x00054c7e) grid_month_view_pane_ParamLimits

0x1d0f,	// (0x00054c72) frm_month_g1_ParamLimits

0x1d0f,	// (0x00054c72) frm_month_g2_ParamLimits

0x1d0f,	// (0x00054c72) frm_month_g3_ParamLimits

0x1d0f,	// (0x00054c72) frm_month_g4_ParamLimits

0x1d0f,	// (0x00054c72) frm_month_g5_ParamLimits

0x1d0f,	// (0x00054c72) frm_month_g6_ParamLimits

0x1d0f,	// (0x00054c72) frm_month_g7_ParamLimits

0x1d0f,	// (0x00054c72) frm_month_g8_ParamLimits

0x1d0f,	// (0x00054c72) frm_month_g9_ParamLimits

0x1d0f,	// (0x00054c72) frm_month_g10_ParamLimits

0x1d0f,	// (0x00054c72) frm_month_g11_ParamLimits

0x1d0f,	// (0x00054c72) frm_month_g12_ParamLimits

0x1d0f,	// (0x00054c72) frm_month_g13_ParamLimits

0x1d0f,	// (0x00054c72) frm_month_g14_ParamLimits

0x1d0f,	// (0x00054c72) frm_month_g15_ParamLimits

0x1d0f,	// (0x00054c72) frm_month_g16_ParamLimits

0xfd80,	// (0x00062ce3) frm_month_g_ParamLimits

0x2071,	// (0x00054fd4) cell_top_day_name_pane_t1_ParamLimits

0x1d0f,	// (0x00054c72) cell_area_left_week_number_pane_g1_ParamLimits

0x2071,	// (0x00054fd4) cell_area_left_week_number_pane_t1_ParamLimits

0x1d0f,	// (0x00054c72) cell_month_view_pane_g1_ParamLimits

0x2071,	// (0x00054fd4) cell_month_view_pane_t1_ParamLimits

0xc3a5,	// (0x0005f308) main_clock2_btn_pane_g1

0x216f,	// (0x000550d2) main_clock2_btn_pane_t1

0x39af,	// (0x00056912) listscroll_cmail_pane_ParamLimits

0x1761,	// (0x000546c4) main_sp_fs_email_pane_g1_ParamLimits

0x176d,	// (0x000546d0) main_sp_fs_email_pane_g2_ParamLimits

0xfbd6,	// (0x00062b39) main_sp_fs_email_pane_g_ParamLimits

0x1aa1,	// (0x00054a04) list_recal_day_pane_ParamLimits

0x1ab2,	// (0x00054a15) mian_recal_day_pane_t1

0xa1ee,	// (0x0005d151) list_single_dyc_row_text_pane_t4_ParamLimits

0xa1ee,	// (0x0005d151) list_single_dyc_row_text_pane_t4

0xa22b,	// (0x0005d18e) list_single_dyc_row_text_pane_t5_ParamLimits

0xa22b,	// (0x0005d18e) list_single_dyc_row_text_pane_t5

0x0351,	// (0x000532b4) list_single_dyc_row_text_pane_t6_ParamLimits

0x0351,	// (0x000532b4) list_single_dyc_row_text_pane_t6

0x55cf,	// (0x00058532) aid_mgn_list_cale_time_pane

0x64dd,	// (0x00059440) main_gallery2_pane_ParamLimits

0xecc5,	// (0x00061c28) main_clock2_pane_cp01_t1

0xecd3,	// (0x00061c36) main_clock2_pane_cp01_t3

0x0001,

0xf6c6,	// (0x00062629) main_clock2_pane_cp01_t

0x3f00,	// (0x00056e63) cale_week_scroll_pane_g16_ParamLimits

0x3f00,	// (0x00056e63) cale_week_scroll_pane_g16

0xc6a1,	// (0x0005f604) vorec_slider_pane

0x2101,	// (0x00055064) vidtel_button_pane_t1_ParamLimits

0xa7de,	// (0x0005d741) main_fs_bigclock_clock_pane_g1_ParamLimits

0xa7de,	// (0x0005d741) main_fs_bigclock_clock_pane_g2_ParamLimits

0xa7de,	// (0x0005d741) main_fs_bigclock_clock_pane_g3_ParamLimits

0xa7de,	// (0x0005d741) main_fs_bigclock_clock_pane_g4_ParamLimits

0xfcd6,	// (0x00062c39) main_fs_bigclock_clock_pane_g_ParamLimits

0xa7ee,	// (0x0005d751) main_fs_bigclock_clock_pane_t1_ParamLimits

0xa804,	// (0x0005d767) main_fs_bigclock_clock_pane_t2_ParamLimits

0xfcdf,	// (0x00062c42) main_fs_bigclock_clock_pane_t_ParamLimits

0x6bdc,	// (0x00059b3f) main_mup3_lyrics_pane_ParamLimits

0x6bdc,	// (0x00059b3f) main_mup3_lyrics_pane

0xb3c7,	// (0x0005e32a) main_mup3_lyrics_pane_t1_ParamLimits

0xb3c7,	// (0x0005e32a) main_mup3_lyrics_pane_t1

0x7789,	// (0x0005a6ec) aid_main_mp4_pane_t1_area

0x7793,	// (0x0005a6f6) aid_main_mp4_pane_t2_area

0x789a,	// (0x0005a7fd) main_mp4_pane_g7_ParamLimits

0x789a,	// (0x0005a7fd) main_mp4_pane_g7

0x78a6,	// (0x0005a809) main_mp4_pane_g8_ParamLimits

0x78a6,	// (0x0005a809) main_mp4_pane_g8

0x7ca6,	// (0x0005ac09) aid_call6_pane_g1_size

0xb00b,	// (0x0005df6e) list_double_large_graphic_phob2_other_pane_ParamLimits

0xb00b,	// (0x0005df6e) list_double_large_graphic_phob2_other_pane

0xb3ee,	// (0x0005e351) list_double_large_graphic_phob2_other_pane_g1

0x1b91,	// (0x00054af4) list_highlight_pane_cp026

0x39af,	// (0x00056912) main_welc_pane_ParamLimits

0xa075,	// (0x0005cfd8) main_sp_fs_ctrlbar_pane_g3_ParamLimits

0xa075,	// (0x0005cfd8) main_sp_fs_ctrlbar_pane_g3

0xa08f,	// (0x0005cff2) main_sp_fs_ctrlbar_pane_g4_ParamLimits

0xa08f,	// (0x0005cff2) main_sp_fs_ctrlbar_pane_g4

0xa0c1,	// (0x0005d024) toolbar2_fixed_button_pane_cp01

0xa0cc,	// (0x0005d02f) toolbar2_fixed_button_pane_cp02

0xa0d9,	// (0x0005d03c) toolbar2_fixed_button_pane_cp03

0xb0eb,	// (0x0005e04e) list_welc_entry_pane_ParamLimits

0xb0eb,	// (0x0005e04e) list_welc_entry_pane

0xb157,	// (0x0005e0ba) main_welc_pane_g3_ParamLimits

0xb157,	// (0x0005e0ba) main_welc_pane_g3

0xb197,	// (0x0005e0fa) main_welc_pane_t2_ParamLimits

0xb197,	// (0x0005e0fa) main_welc_pane_t2

0xb1ab,	// (0x0005e10e) main_welc_pane_t3_ParamLimits

0xb1ab,	// (0x0005e10e) main_welc_pane_t3

0x0005,

0xfde2,	// (0x00062d45) main_welc_pane_t_ParamLimits

0xfde2,	// (0x00062d45) main_welc_pane_t

0xb2b5,	// (0x0005e218) welc_button_pane_ParamLimits

0xb2b5,	// (0x0005e218) welc_button_pane

0xb323,	// (0x0005e286) welc_service_logo_pane_ParamLimits

0xb323,	// (0x0005e286) welc_service_logo_pane

0xb3f6,	// (0x0005e359) list_single_welc_entry_pane_ParamLimits

0xb3f6,	// (0x0005e359) list_single_welc_entry_pane

0xb407,	// (0x0005e36a) list_single_welc_entry_pane_g1

0xb40f,	// (0x0005e372) list_single_welc_entry_pane_t1

0xb41d,	// (0x0005e380) list_single_welc_entry_pane_t2

0x0001,

0xfdf4,	// (0x00062d57) list_single_welc_entry_pane_t

0x1b91,	// (0x00054af4) bg_button_pane_cp035

0x217d,	// (0x000550e0) welc_button_pane_t1

0xb42b,	// (0x0005e38e) welc_service_logo_pane_g1

0xb434,	// (0x0005e397) welc_service_logo_pane_g2

0x0001,

0xfdf9,	// (0x00062d5c) welc_service_logo_pane_g

0x3685,	// (0x000565e8) main_int_radio_pane

0x123d,	// (0x000541a0) list_single_fs_dyc_pane_g1

0xaed1,	// (0x0005de34) list_double_large_graphic_phob2_pane_g3_ParamLimits

0xaed1,	// (0x0005de34) list_double_large_graphic_phob2_pane_g3

0xaedd,	// (0x0005de40) list_double_large_graphic_phob2_pane_g4_ParamLimits

0xaedd,	// (0x0005de40) list_double_large_graphic_phob2_pane_g4

0xb43d,	// (0x0005e3a0) main_int_radio1_pane_ParamLimits

0xb43d,	// (0x0005e3a0) main_int_radio1_pane

0x218b,	// (0x000550ee) find_pane_cp02

0xb453,	// (0x0005e3b6) input_focus_pane_cp12_ParamLimits

0xb453,	// (0x0005e3b6) input_focus_pane_cp12

0xb45f,	// (0x0005e3c2) input_focus_pane_cp13_ParamLimits

0xb45f,	// (0x0005e3c2) input_focus_pane_cp13

0xb477,	// (0x0005e3da) input_focus_pane_cp14_ParamLimits

0xb477,	// (0x0005e3da) input_focus_pane_cp14

0x2194,	// (0x000550f7) int_radio1_listscroll_pane

0xb48f,	// (0x0005e3f2) main_int_radio1_pane_g1_ParamLimits

0xb48f,	// (0x0005e3f2) main_int_radio1_pane_g1

0xb49b,	// (0x0005e3fe) main_int_radio1_pane_t1_ParamLimits

0xb49b,	// (0x0005e3fe) main_int_radio1_pane_t1

0xb4ad,	// (0x0005e410) main_int_radio1_pane_t2_ParamLimits

0xb4ad,	// (0x0005e410) main_int_radio1_pane_t2

0xb4c1,	// (0x0005e424) main_int_radio1_pane_t3_ParamLimits

0xb4c1,	// (0x0005e424) main_int_radio1_pane_t3

0xb4d5,	// (0x0005e438) main_int_radio1_pane_t4_ParamLimits

0xb4d5,	// (0x0005e438) main_int_radio1_pane_t4

0x219e,	// (0x00055101) main_int_radio1_pane_t5_ParamLimits

0x219e,	// (0x00055101) main_int_radio1_pane_t5

0xb4ec,	// (0x0005e44f) main_int_radio1_pane_t6_ParamLimits

0xb4ec,	// (0x0005e44f) main_int_radio1_pane_t6

0xb4fe,	// (0x0005e461) main_int_radio1_pane_t7_ParamLimits

0xb4fe,	// (0x0005e461) main_int_radio1_pane_t7

0xb510,	// (0x0005e473) main_int_radio1_pane_t8_ParamLimits

0xb510,	// (0x0005e473) main_int_radio1_pane_t8

0xb522,	// (0x0005e485) main_int_radio1_pane_t9_ParamLimits

0xb522,	// (0x0005e485) main_int_radio1_pane_t9

0xb534,	// (0x0005e497) main_int_radio1_pane_t10_ParamLimits

0xb534,	// (0x0005e497) main_int_radio1_pane_t10

0xb565,	// (0x0005e4c8) main_int_radio1_pane_t11_ParamLimits

0xb565,	// (0x0005e4c8) main_int_radio1_pane_t11

0xb596,	// (0x0005e4f9) main_int_radio1_pane_t12_ParamLimits

0xb596,	// (0x0005e4f9) main_int_radio1_pane_t12

0x000b,

0xfdfe,	// (0x00062d61) main_int_radio1_pane_t_ParamLimits

0xfdfe,	// (0x00062d61) main_int_radio1_pane_t

0x2083,	// (0x00054fe6) int_radio_list_pane

0x208b,	// (0x00054fee) scroll_pane_cp037

0x21b0,	// (0x00055113) list_double_large_graphic_int_radio_pane_ParamLimits

0x21b0,	// (0x00055113) list_double_large_graphic_int_radio_pane

0x21c4,	// (0x00055127) list_double_large_graphic_int_radio_pane_g1

0x05ee,	// (0x00053551) list_double_large_graphic_int_radio_pane_t1

0x05fc,	// (0x0005355f) list_double_large_graphic_int_radio_pane_t2

0x0001,

0xfe17,	// (0x00062d7a) list_double_large_graphic_int_radio_pane_t

0x1b91,	// (0x00054af4) list_highlight_pane_cp027

0x213a,	// (0x0005509d) main_button_pane_4

0xb163,	// (0x0005e0c6) main_welc_pane_g4_ParamLimits

0xb163,	// (0x0005e0c6) main_welc_pane_g4

0xb1bd,	// (0x0005e120) main_welc_pane_t4_ParamLimits

0xb1bd,	// (0x0005e120) main_welc_pane_t4

0xb1d1,	// (0x0005e134) main_welc_pane_t5_ParamLimits

0xb1d1,	// (0x0005e134) main_welc_pane_t5

0xb209,	// (0x0005e16c) main_welc_pane_t6_ParamLimits

0xb209,	// (0x0005e16c) main_welc_pane_t6

0xb2c3,	// (0x0005e226) welc_button_pane_2_ParamLimits

0xb2c3,	// (0x0005e226) welc_button_pane_2

0xb2e3,	// (0x0005e246) welc_button_pane_3_ParamLimits

0xb2e3,	// (0x0005e246) welc_button_pane_3

0x213a,	// (0x0005509d) welc_button_pane_4

0xb305,	// (0x0005e268) welc_button_pane_5_ParamLimits

0xb305,	// (0x0005e268) welc_button_pane_5

0x348e,	// (0x000563f1) main_popup_welc_pane

0x21e5,	// (0x00055148) main_welc_sk_g3

0x21ef,	// (0x00055152) main_welc_sk_g4

0x21f9,	// (0x0005515c) main_welc_sk_t3

0x2209,	// (0x0005516c) main_welc_sk_t4

0x2219,	// (0x0005517c) popup_welc_pane_t4

0x2227,	// (0x0005518a) popup_welc_pane_t5

0x2235,	// (0x00055198) popup_welc_pane_t6

0x3685,	// (0x000565e8) main_acti_pane

0x1b91,	// (0x00054af4) main_sso_pane

0xb5ad,	// (0x0005e510) sso_body_pane_ParamLimits

0xb5ad,	// (0x0005e510) sso_body_pane

0xb5c8,	// (0x0005e52b) sso_logo_pane_ParamLimits

0xb5c8,	// (0x0005e52b) sso_logo_pane

0xb5f7,	// (0x0005e55a) sso_sk_pane_ParamLimits

0xb5f7,	// (0x0005e55a) sso_sk_pane

0xb604,	// (0x0005e567) main_sso_logo_pane_g1

0xb60d,	// (0x0005e570) sso_sk_pane_t1_ParamLimits

0xb60d,	// (0x0005e570) sso_sk_pane_t1

0xb621,	// (0x0005e584) sso_sk_pane_t2_ParamLimits

0xb621,	// (0x0005e584) sso_sk_pane_t2

0x0001,

0xfe1c,	// (0x00062d7f) sso_sk_pane_t_ParamLimits

0xfe1c,	// (0x00062d7f) sso_sk_pane_t

0x2277,	// (0x000551da) aid_sso_gap

0x2280,	// (0x000551e3) aid_sso_txt1

0x228a,	// (0x000551ed) aid_sso_txt2

0x2294,	// (0x000551f7) aid_sso_txt3

0x0002,

0xfe21,	// (0x00062d84) aid_sso_txt

0x229e,	// (0x00055201) aid_sso_widget

0xb67e,	// (0x0005e5e1) sso_btn_pane_ParamLimits

0xb67e,	// (0x0005e5e1) sso_btn_pane

0xb704,	// (0x0005e667) sso_option_pane_ParamLimits

0xb704,	// (0x0005e667) sso_option_pane

0xb7ac,	// (0x0005e70f) sso_query_pane_ParamLimits

0xb7ac,	// (0x0005e70f) sso_query_pane

0xb7fc,	// (0x0005e75f) sso_query_pane_cp01_ParamLimits

0xb7fc,	// (0x0005e75f) sso_query_pane_cp01

0xb852,	// (0x0005e7b5) sso_t_hdr_pane_ParamLimits

0xb852,	// (0x0005e7b5) sso_t_hdr_pane

0xb876,	// (0x0005e7d9) sso_t_nml_pane_ParamLimits

0xb876,	// (0x0005e7d9) sso_t_nml_pane

0x22a8,	// (0x0005520b) sso_t_sub_pane

0xb5d5,	// (0x0005e538) sso_popup_window_ParamLimits

0xb5d5,	// (0x0005e538) sso_popup_window

0xb633,	// (0x0005e596) sso_apps_pane_ParamLimits

0xb633,	// (0x0005e596) sso_apps_pane

0xb656,	// (0x0005e5b9) sso_body_pane_g1

0xb65e,	// (0x0005e5c1) sso_body_pane_t1

0xb66e,	// (0x0005e5d1) sso_body_pane_t2

0x0001,

0xfe28,	// (0x00062d8b) sso_body_pane_t

0xb6c4,	// (0x0005e627) sso_btn_pane_cp01_ParamLimits

0xb6c4,	// (0x0005e627) sso_btn_pane_cp01

0xb780,	// (0x0005e6e3) sso_prog_pane_ParamLimits

0xb780,	// (0x0005e6e3) sso_prog_pane

0xb8d6,	// (0x0005e839) sso_t_hdr_pane_t1_ParamLimits

0xb8d6,	// (0x0005e839) sso_t_hdr_pane_t1

0x22bd,	// (0x00055220) input_focus_pane_cp10_ParamLimits

0x22bd,	// (0x00055220) input_focus_pane_cp10

0x22d1,	// (0x00055234) sso_query_pane_t1_ParamLimits

0x22d1,	// (0x00055234) sso_query_pane_t1

0x22e4,	// (0x00055247) sso_query_pane_t2_ParamLimits

0x22e4,	// (0x00055247) sso_query_pane_t2

0x22fe,	// (0x00055261) sso_query_pane_t3_ParamLimits

0x22fe,	// (0x00055261) sso_query_pane_t3

0x2328,	// (0x0005528b) sso_query_pane_t4_ParamLimits

0x2328,	// (0x0005528b) sso_query_pane_t4

0x0003,

0xfe2d,	// (0x00062d90) sso_query_pane_t_ParamLimits

0xfe2d,	// (0x00062d90) sso_query_pane_t

0x234c,	// (0x000552af) bg_button_pane_cp22

0x2355,	// (0x000552b8) sso_btn_pane_t1

0xb8ef,	// (0x0005e852) sso_t_nml_pane_t1_ParamLimits

0xb8ef,	// (0x0005e852) sso_t_nml_pane_t1

0x2364,	// (0x000552c7) sso_option_row_pane_ParamLimits

0x2364,	// (0x000552c7) sso_option_row_pane

0x2371,	// (0x000552d4) sso_t_sub_pane_t1_ParamLimits

0x2371,	// (0x000552d4) sso_t_sub_pane_t1

0x39af,	// (0x00056912) bg_popup_window_pane_cp11_ParamLimits

0x39af,	// (0x00056912) bg_popup_window_pane_cp11

0x238e,	// (0x000552f1) popup_sk_window_cp01_ParamLimits

0x238e,	// (0x000552f1) popup_sk_window_cp01

0x239b,	// (0x000552fe) sso_popup_body_pane_ParamLimits

0x239b,	// (0x000552fe) sso_popup_body_pane

0x23a8,	// (0x0005530b) scroll_pane_cp21_ParamLimits

0x23a8,	// (0x0005530b) scroll_pane_cp21

0x23b5,	// (0x00055318) sso_popup_body_t_pane_ParamLimits

0x23b5,	// (0x00055318) sso_popup_body_t_pane

0x23c2,	// (0x00055325) sso_popup_body_t_hdr_pane_ParamLimits

0x23c2,	// (0x00055325) sso_popup_body_t_hdr_pane

0xb90c,	// (0x0005e86f) sso_popup_body_t_nml_pane_ParamLimits

0xb90c,	// (0x0005e86f) sso_popup_body_t_nml_pane

0xb92a,	// (0x0005e88d) sso_popup_body_t_sub_pane_ParamLimits

0xb92a,	// (0x0005e88d) sso_popup_body_t_sub_pane

0x23d4,	// (0x00055337) sso_popup_body_t_hdr_pane_t1

0xb94d,	// (0x0005e8b0) sso_popup_body_t_nml_pane_t1_ParamLimits

0xb94d,	// (0x0005e8b0) sso_popup_body_t_nml_pane_t1

0x23e4,	// (0x00055347) sso_popup_body_t_sub_pane_t1_ParamLimits

0x23e4,	// (0x00055347) sso_popup_body_t_sub_pane_t1

0xc466,	// (0x0005f3c9) sso_prog_pane_g1

0xb997,	// (0x0005e8fa) sso_apps_pane_comp1_ParamLimits

0xb997,	// (0x0005e8fa) sso_apps_pane_comp1

0x2409,	// (0x0005536c) sso_apps_pane_comp1_g1

0x2411,	// (0x00055374) sso_apps_pane_comp1_t1

0x242d,	// (0x00055390) sso_option_row_pane_g1

0x2445,	// (0x000553a8) sso_option_row_pane_t1

0x17f7,	// (0x0005475a) list_cmail_pane_ParamLimits

0x1b91,	// (0x00054af4) main_call7_pane

0xb0cd,	// (0x0005e030) bg_welc_area_ParamLimits

0xb0cd,	// (0x0005e030) bg_welc_area

0xb243,	// (0x0005e1a6) sso_t_hdr_pane_a_t1_ParamLimits

0xb243,	// (0x0005e1a6) sso_t_hdr_pane_a_t1

0xb257,	// (0x0005e1ba) sso_t_nml_pane_a_t1_ParamLimits

0xb257,	// (0x0005e1ba) sso_t_nml_pane_a_t1

0xb281,	// (0x0005e1e4) sso_t_sub_pane_a_t1_ParamLimits

0xb281,	// (0x0005e1e4) sso_t_sub_pane_a_t1

0xb315,	// (0x0005e278) welc_button_pane_cp01_ParamLimits

0xb315,	// (0x0005e278) welc_button_pane_cp01

0x21cd,	// (0x00055130) sso_btn_pane_t1_copy1

0x21dc,	// (0x0005513f) welc_button_pane_2_comp1

0x2245,	// (0x000551a8) sso_t_hdr_pane_p_t1

0x2255,	// (0x000551b8) sso_t_nml_pane_p_t1

0x2265,	// (0x000551c8) sso_t_sub_pane_p_t1

0x1b91,	// (0x00054af4) main_att_pane

0x1b91,	// (0x00054af4) main_vod_pane

0x22a8,	// (0x0005520b) sso_t_sub_pane_ParamLimits

0x241f,	// (0x00055382) input_focus_pane_cp10_t1

0x2445,	// (0x000553a8) sso_option_row_pane_t1_ParamLimits

0xb9ac,	// (0x0005e90f) main_att_body_pane_ParamLimits

0xb9ac,	// (0x0005e90f) main_att_body_pane

0xb9c0,	// (0x0005e923) att_btn_emg_pane_ParamLimits

0xb9c0,	// (0x0005e923) att_btn_emg_pane

0xb9d8,	// (0x0005e93b) att_btn_pane_ParamLimits

0xb9d8,	// (0x0005e93b) att_btn_pane

0xba42,	// (0x0005e9a5) att_btn_pane_cp01_ParamLimits

0xba42,	// (0x0005e9a5) att_btn_pane_cp01

0xba74,	// (0x0005e9d7) att_li_srv_pane_ParamLimits

0xba74,	// (0x0005e9d7) att_li_srv_pane

0xba86,	// (0x0005e9e9) att_opt_pane_ParamLimits

0xba86,	// (0x0005e9e9) att_opt_pane

0xbaca,	// (0x0005ea2d) att_query_pane_ParamLimits

0xbaca,	// (0x0005ea2d) att_query_pane

0xbb3a,	// (0x0005ea9d) att_query_pane_cp01_ParamLimits

0xbb3a,	// (0x0005ea9d) att_query_pane_cp01

0xbb7e,	// (0x0005eae1) att_t_hdr_pane_ParamLimits

0xbb7e,	// (0x0005eae1) att_t_hdr_pane

0xbbe6,	// (0x0005eb49) att_t_nml_pane_ParamLimits

0xbbe6,	// (0x0005eb49) att_t_nml_pane

0xbc5c,	// (0x0005ebbf) att_t_nml_pane_cp01_ParamLimits

0xbc5c,	// (0x0005ebbf) att_t_nml_pane_cp01

0xbc80,	// (0x0005ebe3) att_t_nmlb_pane_ParamLimits

0xbc80,	// (0x0005ebe3) att_t_nmlb_pane

0xbce6,	// (0x0005ec49) att_term_pane_ParamLimits

0xbce6,	// (0x0005ec49) att_term_pane

0xbd2c,	// (0x0005ec8f) main_att_body_pane_g1_ParamLimits

0xbd2c,	// (0x0005ec8f) main_att_body_pane_g1

0x2461,	// (0x000553c4) att_t_hdr_pane_t1_ParamLimits

0x2461,	// (0x000553c4) att_t_hdr_pane_t1

0x2474,	// (0x000553d7) att_t_nml_pane_t1_ParamLimits

0x2474,	// (0x000553d7) att_t_nml_pane_t1

0x2355,	// (0x000552b8) att_btn_pane_t1

0x234c,	// (0x000552af) bg_button_pane_cp23

0xbd56,	// (0x0005ecb9) att_li_srv_row_pane_ParamLimits

0xbd56,	// (0x0005ecb9) att_li_srv_row_pane

0x2499,	// (0x000553fc) att_t_nmlb_pane_t1_ParamLimits

0x2499,	// (0x000553fc) att_t_nmlb_pane_t1

0x24b5,	// (0x00055418) att_query_pane_t1

0x24c4,	// (0x00055427) att_query_pane_t2

0x24d3,	// (0x00055436) att_query_pane_t3

0x0002,

0xfe3b,	// (0x00062d9e) att_query_pane_t

0x24e2,	// (0x00055445) input_focus_pane_cp11

0x24eb,	// (0x0005544e) att_term_pane_t1_ParamLimits

0x24eb,	// (0x0005544e) att_term_pane_t1

0x1b91,	// (0x00054af4) att_opt_row_pane

0x2508,	// (0x0005546b) att_opt_row_pane_g1

0x2510,	// (0x00055473) att_opt_row_pane_t1_ParamLimits

0x2510,	// (0x00055473) att_opt_row_pane_t1

0xbd66,	// (0x0005ecc9) att_li_srv_row_pane_g1

0xbd6e,	// (0x0005ecd1) att_li_srv_row_pane_t1_ParamLimits

0xbd6e,	// (0x0005ecd1) att_li_srv_row_pane_t1

0xbd6e,	// (0x0005ecd1) att_li_srv_row_pane_t2_ParamLimits

0xbd6e,	// (0x0005ecd1) att_li_srv_row_pane_t2

0x0001,

0xfe42,	// (0x00062da5) att_li_srv_row_pane_t_ParamLimits

0xfe42,	// (0x00062da5) att_li_srv_row_pane_t

0x2529,	// (0x0005548c) att_btn_close_pane_g1

0x1b91,	// (0x00054af4) bg_button_pane_cp24

0xbd83,	// (0x0005ece6) main_vod_body_pane_ParamLimits

0xbd83,	// (0x0005ece6) main_vod_body_pane

0xbd91,	// (0x0005ecf4) main_vod_body_pane_g1_ParamLimits

0xbd91,	// (0x0005ecf4) main_vod_body_pane_g1

0xbdc1,	// (0x0005ed24) scroll_pane_cp24_ParamLimits

0xbdc1,	// (0x0005ed24) scroll_pane_cp24

0xbe09,	// (0x0005ed6c) vod_btn_pane_ParamLimits

0xbe09,	// (0x0005ed6c) vod_btn_pane

0xbe47,	// (0x0005edaa) vod_det_pane_ParamLimits

0xbe47,	// (0x0005edaa) vod_det_pane

0xbe73,	// (0x0005edd6) vod_logo_g1_ParamLimits

0xbe73,	// (0x0005edd6) vod_logo_g1

0xbead,	// (0x0005ee10) vod_opt_pane_ParamLimits

0xbead,	// (0x0005ee10) vod_opt_pane

0xbedd,	// (0x0005ee40) vod_opt_pane_cp01_ParamLimits

0xbedd,	// (0x0005ee40) vod_opt_pane_cp01

0xbf05,	// (0x0005ee68) vod_query_pane_ParamLimits

0xbf05,	// (0x0005ee68) vod_query_pane

0xbf2d,	// (0x0005ee90) vod_query_pane_cp01_ParamLimits

0xbf2d,	// (0x0005ee90) vod_query_pane_cp01

0xbf39,	// (0x0005ee9c) vod_t_nml_pane_ParamLimits

0xbf39,	// (0x0005ee9c) vod_t_nml_pane

0xbfe3,	// (0x0005ef46) vod_t_nml_pane_cp01_ParamLimits

0xbfe3,	// (0x0005ef46) vod_t_nml_pane_cp01

0xc01b,	// (0x0005ef7e) vod_t_sub_pane_ParamLimits

0xc01b,	// (0x0005ef7e) vod_t_sub_pane

0xc047,	// (0x0005efaa) vod_t_sub_pane_cp01_ParamLimits

0xc047,	// (0x0005efaa) vod_t_sub_pane_cp01

0x24e2,	// (0x00055445) vod_query_field_pane

0x2531,	// (0x00055494) vod_query_pane_t1

0x2540,	// (0x000554a3) bg_button_pane_cp25

0x2355,	// (0x000552b8) sso_btn_pane_t1_copy2

0xc06f,	// (0x0005efd2) vod_t_nml_pane_t1_ParamLimits

0xc06f,	// (0x0005efd2) vod_t_nml_pane_t1

0xcef9,	// (0x0005fe5c) vod_opt_row_pane_ParamLimits

0xcef9,	// (0x0005fe5c) vod_opt_row_pane

0xcf0b,	// (0x0005fe6e) vod_t_sub_pane_t1_ParamLimits

0xcf0b,	// (0x0005fe6e) vod_t_sub_pane_t1

0xcf24,	// (0x0005fe87) vod_det_cell_pane_ParamLimits

0xcf24,	// (0x0005fe87) vod_det_cell_pane

0x1b91,	// (0x00054af4) input_focus_pane_cp15

0xcf35,	// (0x0005fe98) vod_query_field_pane_t1

0xcf43,	// (0x0005fea6) vod_opt_row_pane_g1_ParamLimits

0xcf43,	// (0x0005fea6) vod_opt_row_pane_g1

0xcf4f,	// (0x0005feb2) vod_opt_row_pane_t1_ParamLimits

0xcf4f,	// (0x0005feb2) vod_opt_row_pane_t1

0xcf71,	// (0x0005fed4) vod_det_cell_field_pane

0xcf7a,	// (0x0005fedd) vod_det_cell_pane_g1

0xcf82,	// (0x0005fee5) vod_det_cell_pane_t1

0x1b91,	// (0x00054af4) input_focus_pane_cp16

0xcf91,	// (0x0005fef4) vod_det_cell_field_pane_t1

0xc0aa,	// (0x0005f00d) call7_btn_grp_pane_ParamLimits

0xc0aa,	// (0x0005f00d) call7_btn_grp_pane

0xc41a,	// (0x0005f37d) call7_bubble_pane_ParamLimits

0xc41a,	// (0x0005f37d) call7_bubble_pane

0xc0b7,	// (0x0005f01a) cell_call7_btn_pane_ParamLimits

0xc0b7,	// (0x0005f01a) cell_call7_btn_pane

0xc0c8,	// (0x0005f02b) call7_pane_g1_ParamLimits

0xc0c8,	// (0x0005f02b) call7_pane_g1

0xc0d7,	// (0x0005f03a) call7_windows_conf_pane_ParamLimits

0xc0d7,	// (0x0005f03a) call7_windows_conf_pane

0xc0f9,	// (0x0005f05c) popup_call7_1st_window_ParamLimits

0xc0f9,	// (0x0005f05c) popup_call7_1st_window

0xc107,	// (0x0005f06a) popup_call7_2nd_window_ParamLimits

0xc107,	// (0x0005f06a) popup_call7_2nd_window

0xc115,	// (0x0005f078) popup_call7_3rd_window_ParamLimits

0xc115,	// (0x0005f078) popup_call7_3rd_window

0x1b91,	// (0x00054af4) bg_button_pane_cp26

0x2009,	// (0x00054f6c) cell_call7_btn_pane_g1

0x2012,	// (0x00054f75) cell_call7_btn_pane_t1

0x1b91,	// (0x00054af4) bg_popup_window_pane_cp12

0xcf9f,	// (0x0005ff02) popup_call7_1st_window_g1

0xcfa7,	// (0x0005ff0a) popup_call7_1st_window_g2

0xcfaf,	// (0x0005ff12) popup_call7_1st_window_g3

0x0002,

0xfe47,	// (0x00062daa) popup_call7_1st_window_g

0xcfb7,	// (0x0005ff1a) popup_call7_1st_window_t1

0xcfc6,	// (0x0005ff29) popup_call7_1st_window_t2

0xcfd6,	// (0x0005ff39) popup_call7_1st_window_t3

0x0002,

0xfe4e,	// (0x00062db1) popup_call7_1st_window_t

0x1b91,	// (0x00054af4) bg_popup_window_pane_cp13

0xcfe6,	// (0x0005ff49) popup_call7_2nd_window_g1

0xcfee,	// (0x0005ff51) popup_call7_2nd_window_g2

0xcff6,	// (0x0005ff59) popup_call7_2nd_window_g3

0x0002,

0xfe55,	// (0x00062db8) popup_call7_2nd_window_g

0xcffe,	// (0x0005ff61) popup_call7_2nd_window_t1

0x1b91,	// (0x00054af4) bg_popup_window_pane_cp14

0xd00d,	// (0x0005ff70) call7_list_conf_pane

0xd015,	// (0x0005ff78) call7_list_conf_row_pane_ParamLimits

0xd015,	// (0x0005ff78) call7_list_conf_row_pane

0xd028,	// (0x0005ff8b) call7_list_conf_row_pane_g1

0xd030,	// (0x0005ff93) call7_list_conf_row_pane_g2

0x0001,

0xfe5c,	// (0x00062dbf) call7_list_conf_row_pane_g

0xd038,	// (0x0005ff9b) call7_list_conf_row_pane_t1

0x1b91,	// (0x00054af4) list_highlight_pane_cp22

0xb752,	// (0x0005e6b5) sso_option_pane_cp01_ParamLimits

0xb752,	// (0x0005e6b5) sso_option_pane_cp01

0xc3ad,	// (0x0005f310) msg_header_pane_ParamLimits

0xd30d,	// (0x00060270) bg_button_pane_cp01_ParamLimits

0xd321,	// (0x00060284) input_focus_pane_cp07_ParamLimits

0xa111,	// (0x0005d074) popup_email_progress_window

0xc466,	// (0x0005f3c9) popup_email_progress_window_g1

0xd046,	// (0x0005ffa9) popup_email_progress_window_g2

0x0001,

0xfe61,	// (0x00062dc4) popup_email_progress_window_g

0xd04e,	// (0x0005ffb1) popup_email_progress_window_t1

0x1b91,	// (0x00054af4) cmail_conv_pane

0x03a4,	// (0x00053307) list_single_dyc_row_pane_g5_ParamLimits

0x03a4,	// (0x00053307) list_single_dyc_row_pane_g5

0x03b0,	// (0x00053313) list_single_dyc_row_pane_g6_ParamLimits

0x03b0,	// (0x00053313) list_single_dyc_row_pane_g6

0x03c8,	// (0x0005332b) list_single_dyc_row_pane_g7_ParamLimits

0x03c8,	// (0x0005332b) list_single_dyc_row_pane_g7

0xb0fb,	// (0x0005e05e) main_button_pane_5_ParamLimits

0xb0fb,	// (0x0005e05e) main_button_pane_5

0xb5bc,	// (0x0005e51f) sso_emg_call_btn_pane_ParamLimits

0xb5bc,	// (0x0005e51f) sso_emg_call_btn_pane

0xb8c6,	// (0x0005e829) sso_t_sub_pane_cp01_ParamLimits

0xb8c6,	// (0x0005e829) sso_t_sub_pane_cp01

0x242d,	// (0x00055390) sso_option_row_pane_g1_ParamLimits

0x2439,	// (0x0005539c) sso_option_row_pane_g2_ParamLimits

0x2439,	// (0x0005539c) sso_option_row_pane_g2

0x0001,

0xfe36,	// (0x00062d99) sso_option_row_pane_g_ParamLimits

0xfe36,	// (0x00062d99) sso_option_row_pane_g

0xba5a,	// (0x0005e9bd) att_btn_pane_cp02_ParamLimits

0xba5a,	// (0x0005e9bd) att_btn_pane_cp02

0xd05c,	// (0x0005ffbf) cmail_conv_hdr_pane

0xd065,	// (0x0005ffc8) list_cmail_conv_pane

0xd06f,	// (0x0005ffd2) scroll_pane_cp31

0xd077,	// (0x0005ffda) cmail_conv_hdr_pane_t1

0xd085,	// (0x0005ffe8) cmail_conv_hdr_pane_t2

0x0001,

0xfe66,	// (0x00062dc9) cmail_conv_hdr_pane_t

0xd093,	// (0x0005fff6) bubble_cmail_conv_pane_ParamLimits

0xd093,	// (0x0005fff6) bubble_cmail_conv_pane

0x1919,	// (0x0005487c) aid_size_colorization_pane

0xc6a1,	// (0x0005f604) bg_bubble_cmail_conv_pane

0xd0af,	// (0x00060012) body_bubble_cmail_conv_pane

0xcb94,	// (0x0005faf7) bubble_cmail_conv_pane_g1

0xcb9c,	// (0x0005faff) bubble_cmail_conv_pane_g2

0xcba4,	// (0x0005fb07) bubble_cmail_conv_pane_g3

0x0002,

0xf252,	// (0x000621b5) bubble_cmail_conv_pane_g

0xd0b7,	// (0x0006001a) bubble_cmail_conv_pane_t1

0xd0c5,	// (0x00060028) bg_bubble_cmail_conv_pane_g1

0xd0ce,	// (0x00060031) bg_bubble_cmail_conv_pane_g2

0xd0d7,	// (0x0006003a) bg_bubble_cmail_conv_pane_g3

0x0002,

0xfe6b,	// (0x00062dce) bg_bubble_cmail_conv_pane_g

0xd0e0,	// (0x00060043) body_bubble_cmail_conv_pane_t1_ParamLimits

0xd0e0,	// (0x00060043) body_bubble_cmail_conv_pane_t1

0xd0f7,	// (0x0006005a) body_bubble_cmail_conv_pane_t2_ParamLimits

0xd0f7,	// (0x0006005a) body_bubble_cmail_conv_pane_t2

0x0001,

0xfe72,	// (0x00062dd5) body_bubble_cmail_conv_pane_t_ParamLimits

0xfe72,	// (0x00062dd5) body_bubble_cmail_conv_pane_t

0xc41a,	// (0x0005f37d) list_highlight_pane_cp024_ParamLimits
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
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
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
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
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
	&TextLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
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
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
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
	&WindowLineVCR,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
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
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
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
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
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
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	&ParameterLimitsV,
	};

} // end of namespace AknLayoutScalable_Abrw_pvp4_apps_vga4_prt_tch_Small
