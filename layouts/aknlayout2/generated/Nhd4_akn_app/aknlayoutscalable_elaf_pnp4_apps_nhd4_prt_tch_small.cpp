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

#include "aknlayoutscalable_elaf_pnp4_apps_nhd4_prt_tch_small.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pnp4_apps_nhd4_prt_tch[]; }

namespace AknLayoutScalable_Elaf_pnp4_apps_nhd4_prt_tch_Small
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pnp4_apps_nhd4_prt_tch + 0x0003ca18 };

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
0x226d,	// (0x0003ec85) Screen

0x2279,	// (0x0003ec91) application_window

0x22d5,	// (0x0003eced) area_bottom_pane_ParamLimits

0x22d5,	// (0x0003eced) area_bottom_pane

0x232e,	// (0x0003ed46) area_top_pane_ParamLimits

0x232e,	// (0x0003ed46) area_top_pane

0x2392,	// (0x0003edaa) call_video_uplink_pane_ParamLimits

0x2392,	// (0x0003edaa) call_video_uplink_pane

0x23d1,	// (0x0003ede9) main_pane_ParamLimits

0x23d1,	// (0x0003ede9) main_pane

0xc8db,	// (0x000492f3) context_pane

0x5612,	// (0x0004202a) navi_pane

0x5638,	// (0x00042050) popup_cale_events_window_ParamLimits

0x5638,	// (0x00042050) popup_cale_events_window

0xc8ee,	// (0x00049306) popup_mup_playback_window

0x5650,	// (0x00042068) signal_pane

0xa83e,	// (0x00047256) main_browser_pane

0xaa15,	// (0x0004742d) main_burst_pane

0x54a2,	// (0x00041eba) main_calc_pane

0xc8c1,	// (0x000492d9) main_cale_day_pane

0x2b0a,	// (0x0003f522) main_cale_month_pane

0xc8c1,	// (0x000492d9) main_cale_week_pane

0xaa15,	// (0x0004742d) main_call_pane

0xa4fc,	// (0x00046f14) main_call_poc_pane

0xaa15,	// (0x0004742d) main_camera_pane

0xaa15,	// (0x0004742d) main_chi_dic_pane

0xb226,	// (0x00047c3e) main_clock_pane

0xa4fc,	// (0x00046f14) main_fmradio_pane

0xaa15,	// (0x0004742d) main_graph_messa_pane

0xa4fc,	// (0x00046f14) main_help_pane

0xa83e,	// (0x00047256) main_im_pane

0xa76d,	// (0x00047185) main_image_pane_ParamLimits

0xa76d,	// (0x00047185) main_image_pane

0xa4fc,	// (0x00046f14) main_location2_pane

0xaa15,	// (0x0004742d) main_location_pane

0xa76d,	// (0x00047185) main_messa_pane

0xa4fc,	// (0x00046f14) main_mp2_pane

0xaa15,	// (0x0004742d) main_mp_pane

0xa4fc,	// (0x00046f14) main_msg_pane

0xa4fc,	// (0x00046f14) main_mup_eq_pane

0xa4fc,	// (0x00046f14) main_mup_pane

0xa83e,	// (0x00047256) main_notes_pane

0xa4fc,	// (0x00046f14) main_pec_pane

0xa4fc,	// (0x00046f14) main_phob_pane

0xa4fc,	// (0x00046f14) main_pinb_pane

0xa4fc,	// (0x00046f14) main_postcard_pane

0xa4fc,	// (0x00046f14) main_qdial_pane

0xaa15,	// (0x0004742d) main_skin_pane

0xa4fc,	// (0x00046f14) main_smil2_pane

0xaa15,	// (0x0004742d) main_smil_pane

0xaa15,	// (0x0004742d) main_video_pane

0xaa15,	// (0x0004742d) main_video_tele_pane

0xa76d,	// (0x00047185) main_viewer_pane_ParamLimits

0xa76d,	// (0x00047185) main_viewer_pane

0xaa15,	// (0x0004742d) main_vorec_pane

0x54e0,	// (0x00041ef8) popup_blid_sat_info_window_ParamLimits

0x54e0,	// (0x00041ef8) popup_blid_sat_info_window

0x5500,	// (0x00041f18) popup_dyc_status_message_window_ParamLimits

0x5500,	// (0x00041f18) popup_dyc_status_message_window

0x550e,	// (0x00041f26) popup_grid_large_graphic_window_ParamLimits

0x550e,	// (0x00041f26) popup_grid_large_graphic_window

0x559d,	// (0x00041fb5) popup_loc_request_window_ParamLimits

0x559d,	// (0x00041fb5) popup_loc_request_window

0x55ea,	// (0x00042002) popup_wml_address_window_ParamLimits

0x55ea,	// (0x00042002) popup_wml_address_window

0x537a,	// (0x00041d92) call_muted_g1

0x5036,	// (0x00041a4e) popup_call_audio_conf_window_ParamLimits

0x5036,	// (0x00041a4e) popup_call_audio_conf_window

0x538a,	// (0x00041da2) popup_call_audio_first_window_ParamLimits

0x538a,	// (0x00041da2) popup_call_audio_first_window

0x53ca,	// (0x00041de2) popup_call_audio_in_window_ParamLimits

0x53ca,	// (0x00041de2) popup_call_audio_in_window

0x53ee,	// (0x00041e06) popup_call_audio_out_window_ParamLimits

0x53ee,	// (0x00041e06) popup_call_audio_out_window

0x5410,	// (0x00041e28) popup_call_audio_second_window_ParamLimits

0x5410,	// (0x00041e28) popup_call_audio_second_window

0x5440,	// (0x00041e58) popup_call_audio_wait_window_ParamLimits

0x5440,	// (0x00041e58) popup_call_audio_wait_window

0x5461,	// (0x00041e79) popup_number_entry_window_ParamLimits

0x5461,	// (0x00041e79) popup_number_entry_window

0xa0e9,	// (0x00046b01) bg_popup_call_pane_cp05_ParamLimits

0xa0e9,	// (0x00046b01) bg_popup_call_pane_cp05

0xa109,	// (0x00046b21) popup_number_entry_window_t1

0xa11c,	// (0x00046b34) popup_number_entry_window_t2

0xa12e,	// (0x00046b46) popup_number_entry_window_t3

0x0003,

0xf0ca,	// (0x0004bae2) popup_number_entry_window_t

0xa140,	// (0x00046b58) text_title_cp2

0xa153,	// (0x00046b6b) bg_popup_call_pane_cp_ParamLimits

0xa153,	// (0x00046b6b) bg_popup_call_pane_cp

0xa161,	// (0x00046b79) call_thumbnail_pane

0xa169,	// (0x00046b81) popup_call_audio_in_window_g1_ParamLimits

0xa169,	// (0x00046b81) popup_call_audio_in_window_g1

0xa175,	// (0x00046b8d) popup_call_audio_in_window_g2_ParamLimits

0xa175,	// (0x00046b8d) popup_call_audio_in_window_g2

0xa181,	// (0x00046b99) popup_call_audio_in_window_g3_ParamLimits

0xa181,	// (0x00046b99) popup_call_audio_in_window_g3

0x0002,

0xf0d3,	// (0x0004baeb) popup_call_audio_in_window_g_ParamLimits

0xf0d3,	// (0x0004baeb) popup_call_audio_in_window_g

0xa18d,	// (0x00046ba5) popup_call_audio_in_window_t1_ParamLimits

0xa18d,	// (0x00046ba5) popup_call_audio_in_window_t1

0xa1a9,	// (0x00046bc1) popup_call_audio_in_window_t2_ParamLimits

0xa1a9,	// (0x00046bc1) popup_call_audio_in_window_t2

0xa1c5,	// (0x00046bdd) popup_call_audio_in_window_t3_ParamLimits

0xa1c5,	// (0x00046bdd) popup_call_audio_in_window_t3

0x0002,

0xf0da,	// (0x0004baf2) popup_call_audio_in_window_t_ParamLimits

0xf0da,	// (0x0004baf2) popup_call_audio_in_window_t

0xa153,	// (0x00046b6b) bg_popup_call_pane_cp01_ParamLimits

0xa153,	// (0x00046b6b) bg_popup_call_pane_cp01

0xa161,	// (0x00046b79) call_thumbnail_pane_cp02

0xa1d8,	// (0x00046bf0) call_type_pane_cp022

0xa1e0,	// (0x00046bf8) popup_call_audio_out_window_g1_ParamLimits

0xa1e0,	// (0x00046bf8) popup_call_audio_out_window_g1

0xa1f2,	// (0x00046c0a) popup_call_audio_out_window_g2_ParamLimits

0xa1f2,	// (0x00046c0a) popup_call_audio_out_window_g2

0xa1fe,	// (0x00046c16) popup_call_audio_out_window_g3_ParamLimits

0xa1fe,	// (0x00046c16) popup_call_audio_out_window_g3

0x0002,

0xf0e1,	// (0x0004baf9) popup_call_audio_out_window_g_ParamLimits

0xf0e1,	// (0x0004baf9) popup_call_audio_out_window_g

0xa210,	// (0x00046c28) popup_call_audio_out_window_t1_ParamLimits

0xa210,	// (0x00046c28) popup_call_audio_out_window_t1

0xa228,	// (0x00046c40) popup_call_audio_out_window_t2_ParamLimits

0xa228,	// (0x00046c40) popup_call_audio_out_window_t2

0x0001,

0xf0e8,	// (0x0004bb00) popup_call_audio_out_window_t_ParamLimits

0xf0e8,	// (0x0004bb00) popup_call_audio_out_window_t

0xa23d,	// (0x00046c55) bg_popup_call_pane_ParamLimits

0xa23d,	// (0x00046c55) bg_popup_call_pane

0x25d5,	// (0x0003efed) call_thumbnail_pane_cp_ParamLimits

0x25d5,	// (0x0003efed) call_thumbnail_pane_cp

0xa2c1,	// (0x00046cd9) call_type_pane_cp01_ParamLimits

0xa2c1,	// (0x00046cd9) call_type_pane_cp01

0xa305,	// (0x00046d1d) popup_call_audio_first_window_g1_ParamLimits

0xa305,	// (0x00046d1d) popup_call_audio_first_window_g1

0xa351,	// (0x00046d69) popup_call_audio_first_window_g2_ParamLimits

0xa351,	// (0x00046d69) popup_call_audio_first_window_g2

0x0001,

0xf0ed,	// (0x0004bb05) popup_call_audio_first_window_g_ParamLimits

0xf0ed,	// (0x0004bb05) popup_call_audio_first_window_g

0xa395,	// (0x00046dad) popup_call_audio_first_window_t1_ParamLimits

0xa395,	// (0x00046dad) popup_call_audio_first_window_t1

0xa441,	// (0x00046e59) popup_call_audio_first_window_t4_ParamLimits

0xa441,	// (0x00046e59) popup_call_audio_first_window_t4

0xa4cd,	// (0x00046ee5) popup_call_audio_first_window_t5_ParamLimits

0xa4cd,	// (0x00046ee5) popup_call_audio_first_window_t5

0x0002,

0xf0f2,	// (0x0004bb0a) popup_call_audio_first_window_t_ParamLimits

0xf0f2,	// (0x0004bb0a) popup_call_audio_first_window_t

0xa4fc,	// (0x00046f14) bg_popup_call_pane_cp02

0xa506,	// (0x00046f1e) call_type_pane_cp023

0xa50e,	// (0x00046f26) popup_call_audio_wait_window_g1

0xa516,	// (0x00046f2e) popup_call_audio_wait_window_g2

0x0001,

0xf0f9,	// (0x0004bb11) popup_call_audio_wait_window_g

0xa51e,	// (0x00046f36) popup_call_audio_wait_window_t3

0xa52c,	// (0x00046f44) bg_popup_call_pane_cp03_ParamLimits

0xa52c,	// (0x00046f44) bg_popup_call_pane_cp03

0xa58c,	// (0x00046fa4) call_thumbnail_pane_cp011_ParamLimits

0xa58c,	// (0x00046fa4) call_thumbnail_pane_cp011

0xa598,	// (0x00046fb0) call_type_pane_cp034_ParamLimits

0xa598,	// (0x00046fb0) call_type_pane_cp034

0xa5d4,	// (0x00046fec) popup_call_audio_second_window_g1_ParamLimits

0xa5d4,	// (0x00046fec) popup_call_audio_second_window_g1

0xa610,	// (0x00047028) popup_call_audio_second_window_g2_ParamLimits

0xa610,	// (0x00047028) popup_call_audio_second_window_g2

0x0001,

0xf0fe,	// (0x0004bb16) popup_call_audio_second_window_g_ParamLimits

0xf0fe,	// (0x0004bb16) popup_call_audio_second_window_g

0xa64c,	// (0x00047064) popup_call_audio_second_window_t1_ParamLimits

0xa64c,	// (0x00047064) popup_call_audio_second_window_t1

0xa6e3,	// (0x000470fb) popup_call_audio_second_window_t2_ParamLimits

0xa6e3,	// (0x000470fb) popup_call_audio_second_window_t2

0xa719,	// (0x00047131) popup_call_audio_second_window_t3_ParamLimits

0xa719,	// (0x00047131) popup_call_audio_second_window_t3

0x0002,

0xf103,	// (0x0004bb1b) popup_call_audio_second_window_t_ParamLimits

0xf103,	// (0x0004bb1b) popup_call_audio_second_window_t

0xa4fc,	// (0x00046f14) bg_popup_call_pane_cp04

0xa74f,	// (0x00047167) list_conf_pane

0xa757,	// (0x0004716f) popup_call_audio_conf_window_t1

0xa765,	// (0x0004717d) call_thumbnail_pane_g1

0xa76d,	// (0x00047185) bg_pinb_pane_ParamLimits

0xa76d,	// (0x00047185) bg_pinb_pane

0xa77b,	// (0x00047193) find_pinb_pane

0xa784,	// (0x0004719c) listscroll_pinb_pane_ParamLimits

0xa784,	// (0x0004719c) listscroll_pinb_pane

0xa793,	// (0x000471ab) pinb_bg_pane_g1

0x25f9,	// (0x0003f011) pinb_bg_pane_g2

0x2605,	// (0x0003f01d) pinb_bg_pane_g3

0x2611,	// (0x0003f029) pinb_bg_pane_g4

0x261d,	// (0x0003f035) pinb_bg_pane_g5

0x2629,	// (0x0003f041) pinb_bg_pane_g6

0x2634,	// (0x0003f04c) pinb_bg_pane_g7

0x263f,	// (0x0003f057) pinb_bg_pane_g8

0x264a,	// (0x0003f062) pinb_bg_pane_g9

0x2654,	// (0x0003f06c) pinb_bg_pane_g10

0x0009,

0xf10a,	// (0x0004bb22) pinb_bg_pane_g

0x2671,	// (0x0003f089) grid_pinb_pane

0x267c,	// (0x0003f094) list_pinb_pane

0x2687,	// (0x0003f09f) scroll_pane_cp01_ParamLimits

0x2687,	// (0x0003f09f) scroll_pane_cp01

0xa79d,	// (0x000471b5) find_pinb_pane_g1_ParamLimits

0xa79d,	// (0x000471b5) find_pinb_pane_g1

0xa7b5,	// (0x000471cd) find_pinb_pane_t1

0xa7c7,	// (0x000471df) find_pinb_pane_t2

0x0001,

0xf124,	// (0x0004bb3c) find_pinb_pane_t

0xa7dc,	// (0x000471f4) input_focus_pane_cp01_ParamLimits

0xa7dc,	// (0x000471f4) input_focus_pane_cp01

0x2699,	// (0x0003f0b1) cell_pinb_pane_ParamLimits

0x2699,	// (0x0003f0b1) cell_pinb_pane

0x26c4,	// (0x0003f0dc) cell_pinb_pane_g1_ParamLimits

0x26c4,	// (0x0003f0dc) cell_pinb_pane_g1

0xa7e8,	// (0x00047200) cell_pinb_pane_g2_ParamLimits

0xa7e8,	// (0x00047200) cell_pinb_pane_g2

0xa7f4,	// (0x0004720c) cell_pinb_pane_g3_ParamLimits

0xa7f4,	// (0x0004720c) cell_pinb_pane_g3

0x0002,

0xf129,	// (0x0004bb41) cell_pinb_pane_g_ParamLimits

0xf129,	// (0x0004bb41) cell_pinb_pane_g

0xa4fc,	// (0x00046f14) grid_highlight_pane_cp01

0x26d9,	// (0x0003f0f1) list_pinb_item_pane_ParamLimits

0x26d9,	// (0x0003f0f1) list_pinb_item_pane

0xa4fc,	// (0x00046f14) list_highlight_pane_cp02

0x2702,	// (0x0003f11a) list_pinb_item_pane_g1_ParamLimits

0x2702,	// (0x0003f11a) list_pinb_item_pane_g1

0x270f,	// (0x0003f127) list_pinb_item_pane_g2_ParamLimits

0x270f,	// (0x0003f127) list_pinb_item_pane_g2

0x271b,	// (0x0003f133) list_pinb_item_pane_g3_ParamLimits

0x271b,	// (0x0003f133) list_pinb_item_pane_g3

0x272c,	// (0x0003f144) list_pinb_item_pane_g4_ParamLimits

0x272c,	// (0x0003f144) list_pinb_item_pane_g4

0x0003,

0xf130,	// (0x0004bb48) list_pinb_item_pane_g_ParamLimits

0xf130,	// (0x0004bb48) list_pinb_item_pane_g

0x2738,	// (0x0003f150) list_pinb_item_pane_t1_ParamLimits

0x2738,	// (0x0003f150) list_pinb_item_pane_t1

0x2769,	// (0x0003f181) calc_display_pane

0x2787,	// (0x0003f19f) calc_paper_pane

0x27a3,	// (0x0003f1bb) grid_calc_pane

0xa4fc,	// (0x00046f14) bg_list_pane_cp01

0x27cf,	// (0x0003f1e7) clock_g1

0x27d7,	// (0x0003f1ef) clock_g2

0x0001,

0xf139,	// (0x0004bb51) clock_g

0x27e1,	// (0x0003f1f9) clock_t1_ParamLimits

0x27e1,	// (0x0003f1f9) clock_t1

0x27f6,	// (0x0003f20e) clock_t2_ParamLimits

0x27f6,	// (0x0003f20e) clock_t2

0x2808,	// (0x0003f220) clock_t3_ParamLimits

0x2808,	// (0x0003f220) clock_t3

0x281a,	// (0x0003f232) clock_t4_ParamLimits

0x281a,	// (0x0003f232) clock_t4

0x282c,	// (0x0003f244) clock_t5_ParamLimits

0x282c,	// (0x0003f244) clock_t5

0x2841,	// (0x0003f259) clock_t6_ParamLimits

0x2841,	// (0x0003f259) clock_t6

0x2853,	// (0x0003f26b) clock_t7_ParamLimits

0x2853,	// (0x0003f26b) clock_t7

0x2865,	// (0x0003f27d) clock_t8_ParamLimits

0x2865,	// (0x0003f27d) clock_t8

0x287b,	// (0x0003f293) clock_t9_ParamLimits

0x287b,	// (0x0003f293) clock_t9

0x0008,

0xf13e,	// (0x0004bb56) clock_t_ParamLimits

0xf13e,	// (0x0004bb56) clock_t

0xa800,	// (0x00047218) popup_clock_analogue_window_cp02

0xa800,	// (0x00047218) popup_clock_digital_window_cp01

0xa808,	// (0x00047220) listscroll_help_pane

0xa4fc,	// (0x00046f14) phob_pre_status_pane

0xa812,	// (0x0004722a) grid_qdial_pane

0xa76d,	// (0x00047185) listscroll_mce_pane

0xa76d,	// (0x00047185) bg_notes_pane

0xa81c,	// (0x00047234) list_notes_pane

0x2891,	// (0x0003f2a9) scroll_pane_cp06

0xa82a,	// (0x00047242) bg_calc_paper_pane

0x28a0,	// (0x0003f2b8) list_calc_pane

0xa83e,	// (0x00047256) bg_calc_display_pane

0x28ba,	// (0x0003f2d2) calc_display_pane_t1

0x28cf,	// (0x0003f2e7) calc_display_pane_t2

0x28e4,	// (0x0003f2fc) calc_display_pane_t3

0x0002,

0xf151,	// (0x0004bb69) calc_display_pane_t

0x28f6,	// (0x0003f30e) cell_calc_pane_ParamLimits

0x28f6,	// (0x0003f30e) cell_calc_pane

0xa84a,	// (0x00047262) bg_calc_paper_pane_g1

0xa856,	// (0x0004726e) bg_calc_paper_pane_g2

0xa862,	// (0x0004727a) bg_calc_paper_pane_g3

0xa86e,	// (0x00047286) bg_calc_paper_pane_g4

0xa87a,	// (0x00047292) bg_calc_paper_pane_g5

0x2923,	// (0x0003f33b) bg_calc_paper_pane_g6

0x2934,	// (0x0003f34c) bg_calc_paper_pane_g7

0x2945,	// (0x0003f35d) bg_calc_paper_pane_g8

0x0007,

0xf158,	// (0x0004bb70) bg_calc_paper_pane_g

0x2956,	// (0x0003f36e) calc_bg_paper_pane_g9

0x2967,	// (0x0003f37f) list_calc_item_pane_ParamLimits

0x2967,	// (0x0003f37f) list_calc_item_pane

0xa886,	// (0x0004729e) list_calc_item_pane_g1

0x2997,	// (0x0003f3af) list_calc_item_pane_t1_ParamLimits

0x2997,	// (0x0003f3af) list_calc_item_pane_t1

0x29a9,	// (0x0003f3c1) list_calc_item_pane_t2_ParamLimits

0x29a9,	// (0x0003f3c1) list_calc_item_pane_t2

0x0001,

0xf169,	// (0x0004bb81) list_calc_item_pane_t_ParamLimits

0xf169,	// (0x0004bb81) list_calc_item_pane_t

0xa893,	// (0x000472ab) cell_calc_pane_g1

0xa89d,	// (0x000472b5) grid_highlight_pane_cp02

0xa8bf,	// (0x000472d7) bg_calc_display_pane_g1

0x29d9,	// (0x0003f3f1) bg_calc_display_pane_g2

0xa8c8,	// (0x000472e0) bg_calc_display_pane_g3

0x0002,

0xf173,	// (0x0004bb8b) bg_calc_display_pane_g

0x29e3,	// (0x0003f3fb) cell_qdial_pane_ParamLimits

0x29e3,	// (0x0003f3fb) cell_qdial_pane

0x29f7,	// (0x0003f40f) cell_qdial_pane_g1_ParamLimits

0x29f7,	// (0x0003f40f) cell_qdial_pane_g1

0x2a04,	// (0x0003f41c) cell_qdial_pane_g2_ParamLimits

0x2a04,	// (0x0003f41c) cell_qdial_pane_g2

0xa8d1,	// (0x000472e9) cell_qdial_pane_g3_ParamLimits

0xa8d1,	// (0x000472e9) cell_qdial_pane_g3

0x0003,

0xf17a,	// (0x0004bb92) cell_qdial_pane_g_ParamLimits

0xf17a,	// (0x0004bb92) cell_qdial_pane_g

0x2a21,	// (0x0003f439) cell_qdial_pane_t1_ParamLimits

0x2a21,	// (0x0003f439) cell_qdial_pane_t1

0x2a39,	// (0x0003f451) cell_qdial_pane_t2_ParamLimits

0x2a39,	// (0x0003f451) cell_qdial_pane_t2

0x2a4c,	// (0x0003f464) cell_qdial_pane_t3_ParamLimits

0x2a4c,	// (0x0003f464) cell_qdial_pane_t3

0x0002,

0xf183,	// (0x0004bb9b) cell_qdial_pane_t_ParamLimits

0xf183,	// (0x0004bb9b) cell_qdial_pane_t

0xa4fc,	// (0x00046f14) grid_highlight_pane_cp04

0xa8dd,	// (0x000472f5) thumbnail_qdial_pane_ParamLimits

0xa8dd,	// (0x000472f5) thumbnail_qdial_pane

0xa939,	// (0x00047351) list_help_pane

0xa942,	// (0x0004735a) scroll_pane_cp02

0x2a5f,	// (0x0003f477) help_list_pane_t1_ParamLimits

0x2a5f,	// (0x0003f477) help_list_pane_t1

0x2a96,	// (0x0003f4ae) bg_notes_pane_g2

0x2a9e,	// (0x0003f4b6) bg_notes_pane_g3

0x2aa6,	// (0x0003f4be) notes_bg_pane_g1

0x2aae,	// (0x0003f4c6) notes_bg_pane_g4

0x2ab6,	// (0x0003f4ce) notes_bg_pane_g5

0x2abe,	// (0x0003f4d6) notes_bg_pane_g6

0x2ac6,	// (0x0003f4de) notes_bg_pane_g7

0x2ace,	// (0x0003f4e6) notes_bg_pane_g8

0x2ad6,	// (0x0003f4ee) notes_bg_pane_g9

0x0006,

0xf1a1,	// (0x0004bbb9) notes_bg_pane_g

0x2ade,	// (0x0003f4f6) list_notes_text_pane_ParamLimits

0x2ade,	// (0x0003f4f6) list_notes_text_pane

0xa94b,	// (0x00047363) list_notes_text_pane_g1

0x0e71,	// (0x0003d889) list_notes_text_pane_t1

0x2b0a,	// (0x0003f522) listscroll_cale_week_pane

0x2b2f,	// (0x0003f547) bg_cale_heading_pane

0xa96e,	// (0x00047386) bg_cale_pane_cp01

0x2b51,	// (0x0003f569) cale_week_corner_pane

0x2b6b,	// (0x0003f583) cale_week_day_heading_pane

0x2b8d,	// (0x0003f5a5) cale_week_scroll_pane_g1

0x2baa,	// (0x0003f5c2) cale_week_scroll_pane_g2

0x2bbd,	// (0x0003f5d5) cale_week_scroll_pane_g3

0x2bd0,	// (0x0003f5e8) cale_week_scroll_pane_g4

0x2be3,	// (0x0003f5fb) cale_week_scroll_pane_g5

0x2bf6,	// (0x0003f60e) cale_week_scroll_pane_g6

0x2c09,	// (0x0003f621) cale_week_scroll_pane_g7

0x2c1e,	// (0x0003f636) cale_week_scroll_pane_g8

0x2c33,	// (0x0003f64b) cale_week_scroll_pane_g9

0x2c46,	// (0x0003f65e) cale_week_scroll_pane_g10

0x2c59,	// (0x0003f671) cale_week_scroll_pane_g11

0x2c6c,	// (0x0003f684) cale_week_scroll_pane_g12

0x2c83,	// (0x0003f69b) cale_week_scroll_pane_g13

0x2c9e,	// (0x0003f6b6) cale_week_scroll_pane_g14

0x2cb9,	// (0x0003f6d1) cale_week_scroll_pane_g15

0x000f,

0xf1b0,	// (0x0004bbc8) cale_week_scroll_pane_g

0x2ce9,	// (0x0003f701) cale_week_time_pane

0x2cfe,	// (0x0003f716) grid_cale_week_pane

0xa99d,	// (0x000473b5) scroll_pane_cp08

0x2d1d,	// (0x0003f735) cell_cale_week_pane_ParamLimits

0x2d1d,	// (0x0003f735) cell_cale_week_pane

0x2d7f,	// (0x0003f797) cale_week_day_heading_pane_t1

0x2d9a,	// (0x0003f7b2) cale_week_day_heading_pane_t2

0x2db5,	// (0x0003f7cd) cale_week_day_heading_pane_t3

0x2dd0,	// (0x0003f7e8) cale_week_day_heading_pane_t4

0x2deb,	// (0x0003f803) cale_week_day_heading_pane_t5

0x2e06,	// (0x0003f81e) cale_week_day_heading_pane_t6

0x2e21,	// (0x0003f839) cale_week_day_heading_pane_t7

0x0006,

0xf1d1,	// (0x0004bbe9) cale_week_day_heading_pane_t

0xa9ba,	// (0x000473d2) bg_cale_side_pane

0x2e3c,	// (0x0003f854) cale_week_time_pane_t1

0x2e56,	// (0x0003f86e) cale_week_time_pane_t2

0x2e70,	// (0x0003f888) cale_week_time_pane_t3

0x2e8a,	// (0x0003f8a2) cale_week_time_pane_t4

0x2ea4,	// (0x0003f8bc) cale_week_time_pane_t5

0x2ebe,	// (0x0003f8d6) cale_week_time_pane_t6

0x2ede,	// (0x0003f8f6) cale_week_time_pane_t7

0x2f00,	// (0x0003f918) cale_week_time_pane_t8

0x0007,

0xf1e0,	// (0x0004bbf8) cale_week_time_pane_t

0x2f24,	// (0x0003f93c) cell_cale_week_pane_g2

0x2f48,	// (0x0003f960) cell_cale_week_pane_g3_ParamLimits

0x2f48,	// (0x0003f960) cell_cale_week_pane_g3

0xa9c8,	// (0x000473e0) grid_highlight_pane_cp07

0xa9d0,	// (0x000473e8) listscroll_gms_pane

0xa9da,	// (0x000473f2) grid_gms_pane

0xa9e3,	// (0x000473fb) listscroll_gms_pane_g1

0xa9eb,	// (0x00047403) listscroll_gms_pane_g2

0x0001,

0xf1f1,	// (0x0004bc09) listscroll_gms_pane_g

0x2f60,	// (0x0003f978) scroll_pane_cp010

0x2f6b,	// (0x0003f983) cell_gms_pane_ParamLimits

0x2f6b,	// (0x0003f983) cell_gms_pane

0x2f7b,	// (0x0003f993) cell_gms_pane_g1

0xa9f3,	// (0x0004740b) cell_gms_pane_g2

0xa9fb,	// (0x00047413) cell_gms_pane_g3

0xaa04,	// (0x0004741c) cell_gms_pane_g4

0x0003,

0xf1f6,	// (0x0004bc0e) cell_gms_pane_g

0xaa0d,	// (0x00047425) grid_highlight_pane_cp09

0x5322,	// (0x00041d3a) phob_pre_status_pane_g1

0x532a,	// (0x00041d42) phob_pre_status_pane_g2

0x5332,	// (0x00041d4a) phob_pre_status_pane_g3

0x533a,	// (0x00041d52) phob_pre_status_pane_g4

0x0004,

0xf5f4,	// (0x0004c00c) phob_pre_status_pane_g

0x534a,	// (0x00041d62) phob_pre_status_pane_t1

0x535a,	// (0x00041d72) phob_pre_status_pane_t2

0x536a,	// (0x00041d82) phob_pre_status_pane_t3

0x0002,

0xf5ff,	// (0x0004c017) phob_pre_status_pane_t

0xaa15,	// (0x0004742d) bg_list_pane_cp05

0x2f8b,	// (0x0003f9a3) grid_vorec_pane

0x2f95,	// (0x0003f9ad) vorec_t1

0x2fa3,	// (0x0003f9bb) vorec_t2

0x2fb1,	// (0x0003f9c9) vorec_t3

0x2fbf,	// (0x0003f9d7) vorec_t4

0xa0b9,	// (0x00046ad1) vorec_t5

0xa0c7,	// (0x00046adf) vorec_t6

0x0004,

0xf1ff,	// (0x0004bc17) vorec_t

0xa0d5,	// (0x00046aed) wait_bar_pane_cp01

0x2fdb,	// (0x0003f9f3) cell_vorec_pane_ParamLimits

0x2fdb,	// (0x0003f9f3) cell_vorec_pane

0x2fee,	// (0x0003fa06) cell_vorec_pane_g1

0xa4fc,	// (0x00046f14) grid_highlight_pane_cp05

0x3008,	// (0x0003fa20) cams_zoom_pane

0x3014,	// (0x0003fa2c) image_vga_pane

0x3023,	// (0x0003fa3b) main_camera_pane_g1

0x3031,	// (0x0003fa49) main_camera_pane_g2

0x303d,	// (0x0003fa55) main_camera_pane_g3

0x3049,	// (0x0003fa61) main_camera_pane_g4

0x3055,	// (0x0003fa6d) main_camera_pane_g5

0x3061,	// (0x0003fa79) main_camera_pane_g6

0x306d,	// (0x0003fa85) main_camera_pane_g7

0x0007,

0xf20a,	// (0x0004bc22) main_camera_pane_g

0x3079,	// (0x0003fa91) main_camera_pane_t1

0x308b,	// (0x0003faa3) main_camera_pane_t2

0x0001,

0xf21b,	// (0x0004bc33) main_camera_pane_t

0x30ac,	// (0x0003fac4) cams_zoom_pane_cp_ParamLimits

0x30ac,	// (0x0003fac4) cams_zoom_pane_cp

0x30d0,	// (0x0003fae8) image_cif_pane_ParamLimits

0x30d0,	// (0x0003fae8) image_cif_pane

0x30ee,	// (0x0003fb06) image_subqcif_pane

0x30f6,	// (0x0003fb0e) main_video_pane_g1_ParamLimits

0x30f6,	// (0x0003fb0e) main_video_pane_g1

0x3116,	// (0x0003fb2e) main_video_pane_g2_ParamLimits

0x3116,	// (0x0003fb2e) main_video_pane_g2

0x3146,	// (0x0003fb5e) main_video_pane_g3_ParamLimits

0x3146,	// (0x0003fb5e) main_video_pane_g3

0x316f,	// (0x0003fb87) main_video_pane_g4_ParamLimits

0x316f,	// (0x0003fb87) main_video_pane_g4

0x3198,	// (0x0003fbb0) main_video_pane_g5_ParamLimits

0x3198,	// (0x0003fbb0) main_video_pane_g5

0xaa29,	// (0x00047441) main_video_pane_g6_ParamLimits

0xaa29,	// (0x00047441) main_video_pane_g6

0x0006,

0xf220,	// (0x0004bc38) main_video_pane_g_ParamLimits

0xf220,	// (0x0004bc38) main_video_pane_g

0x31ba,	// (0x0003fbd2) main_video_pane_t1_ParamLimits

0x31ba,	// (0x0003fbd2) main_video_pane_t1

0xaa43,	// (0x0004745b) cams_zoom_pane_g1

0xaa4c,	// (0x00047464) cams_zoom_pane_g2

0xaa55,	// (0x0004746d) cams_zoom_pane_g3

0xaa5e,	// (0x00047476) cams_zoom_pane_g4

0x0003,

0xf22f,	// (0x0004bc47) cams_zoom_pane_g

0x3204,	// (0x0003fc1c) grid_cams_pane

0x3212,	// (0x0003fc2a) linegrid_cams_pane

0x3220,	// (0x0003fc38) cell_cams_pane_ParamLimits

0x3220,	// (0x0003fc38) cell_cams_pane

0xaa67,	// (0x0004747f) cams_burst_image_pane

0xaa6f,	// (0x00047487) cell_cams_pane_g1

0xa4fc,	// (0x00046f14) grid_highlight_pane_cp03

0xa893,	// (0x000472ab) mp_bg_pane_g1

0xa4fc,	// (0x00046f14) bg_list_pane_cp03

0xc7e6,	// (0x000491fe) bg_mp_pane

0xc7ee,	// (0x00049206) grid_mp_pane

0xc7f6,	// (0x0004920e) media_player_g1

0xc7fe,	// (0x00049216) media_player_t1

0xc80c,	// (0x00049224) media_player_t2

0xc81a,	// (0x00049232) media_player_t3

0xc828,	// (0x00049240) media_player_t4

0xc836,	// (0x0004924e) media_player_t5

0xc844,	// (0x0004925c) media_player_t6

0xc852,	// (0x0004926a) media_player_t7

0x0006,

0xf5de,	// (0x0004bff6) media_player_t

0xc860,	// (0x00049278) wait_bar_pane_cp02

0xf5c3,	// (0x0004bfdb) main_usb_pane_t

0x5319,	// (0x00041d31) cell_mp_pane

0xa893,	// (0x000472ab) cell_mp_pane_g1

0xa4fc,	// (0x00046f14) grid_highlight_pane_cp06

0xaa77,	// (0x0004748f) grid_skin_colour_pane

0xaa7f,	// (0x00047497) list_highlight_pane_cp03

0x3233,	// (0x0003fc4b) skin_g1

0xaa87,	// (0x0004749f) skin_t1

0xaa96,	// (0x000474ae) skin_t2

0x0001,

0xf264,	// (0x0004bc7c) skin_t

0x323d,	// (0x0003fc55) cell_skin_colour_pane_ParamLimits

0x323d,	// (0x0003fc55) cell_skin_colour_pane

0xaaa4,	// (0x000474bc) cell_skin_colour_pane_g1

0x32c1,	// (0x0003fcd9) call_video_g1_ParamLimits

0x32c1,	// (0x0003fcd9) call_video_g1

0x32d1,	// (0x0003fce9) call_video_g2_ParamLimits

0x32d1,	// (0x0003fce9) call_video_g2

0x0001,

0xf269,	// (0x0004bc81) call_video_g_ParamLimits

0xf269,	// (0x0004bc81) call_video_g

0x332b,	// (0x0003fd43) call_video_uplink_pane_cp1_ParamLimits

0x332b,	// (0x0003fd43) call_video_uplink_pane_cp1

0xaab6,	// (0x000474ce) call_video_uplink_pane_cp2

0x33f7,	// (0x0003fe0f) video_down_crop_pane_ParamLimits

0x33f7,	// (0x0003fe0f) video_down_crop_pane

0x34e9,	// (0x0003ff01) video_down_pane_ParamLimits

0x34e9,	// (0x0003ff01) video_down_pane

0xaabe,	// (0x000474d6) video_down_subqcif_pane_ParamLimits

0xaabe,	// (0x000474d6) video_down_subqcif_pane

0xaad6,	// (0x000474ee) video_down_subqcif_pane_cp_ParamLimits

0xaad6,	// (0x000474ee) video_down_subqcif_pane_cp

0xaafc,	// (0x00047514) im_reading_pane_ParamLimits

0xaafc,	// (0x00047514) im_reading_pane

0x3609,	// (0x00040021) im_writing_pane_ParamLimits

0x3609,	// (0x00040021) im_writing_pane

0x3627,	// (0x0004003f) im_reading_pane_t1

0xab16,	// (0x0004752e) list_im_pane

0xab27,	// (0x0004753f) scroll_pane_cp07

0x367f,	// (0x00040097) im_writing_pane_t1_ParamLimits

0x367f,	// (0x00040097) im_writing_pane_t1

0xab40,	// (0x00047558) im_writing_pane_t2_ParamLimits

0xab40,	// (0x00047558) im_writing_pane_t2

0x0001,

0xf273,	// (0x0004bc8b) im_writing_pane_t_ParamLimits

0xf273,	// (0x0004bc8b) im_writing_pane_t

0xa4fc,	// (0x00046f14) input_focus_pane_cp04

0xa4fc,	// (0x00046f14) input_focus_pane_cp05

0x3691,	// (0x000400a9) list_im_single_pane_ParamLimits

0x3691,	// (0x000400a9) list_im_single_pane

0x36b8,	// (0x000400d0) list_single_im_pane_t1

0x52dd,	// (0x00041cf5) blid_accuracy_pane

0x52e5,	// (0x00041cfd) blid_compass_pane

0x52ef,	// (0x00041d07) main_location_t1

0x52fd,	// (0x00041d15) main_location_t2

0x530b,	// (0x00041d23) main_location_t3

0x0002,

0xf5ed,	// (0x0004c005) main_location_t

0xa4fc,	// (0x00046f14) aid_levels_location

0xa893,	// (0x000472ab) blid_accuracy_pane_g1

0xa893,	// (0x000472ab) blid_accuracy_pane_g2

0x0001,

0xf2d5,	// (0x0004bced) blid_accuracy_pane_g

0xab88,	// (0x000475a0) wml_content_pane

0xabc6,	// (0x000475de) wml_button_pane_ParamLimits

0xabc6,	// (0x000475de) wml_button_pane

0x36c7,	// (0x000400df) wml_list_single_large_pane_ParamLimits

0x36c7,	// (0x000400df) wml_list_single_large_pane

0x36f2,	// (0x0004010a) wml_list_single_medium_pane_ParamLimits

0x36f2,	// (0x0004010a) wml_list_single_medium_pane

0x3724,	// (0x0004013c) wml_list_single_small_pane_ParamLimits

0x3724,	// (0x0004013c) wml_list_single_small_pane

0xabda,	// (0x000475f2) wml_selection_box_pane_ParamLimits

0xabda,	// (0x000475f2) wml_selection_box_pane

0xac19,	// (0x00047631) wml_list_single_pane_t1

0xac28,	// (0x00047640) wml_list_single_medium_pane_t1

0xac37,	// (0x0004764f) wml_list_single_large_pane_t1

0xac46,	// (0x0004765e) input_focus_pane_cp02_ParamLimits

0xac46,	// (0x0004765e) input_focus_pane_cp02

0xac59,	// (0x00047671) wml_selection_box_pane_g1

0xac62,	// (0x0004767a) wml_selection_box_pane_t1_ParamLimits

0xac62,	// (0x0004767a) wml_selection_box_pane_t1

0xa76d,	// (0x00047185) bg_wml_button_pane_ParamLimits

0xa76d,	// (0x00047185) bg_wml_button_pane

0xac7a,	// (0x00047692) wml_button_pane_g1

0xac82,	// (0x0004769a) wml_button_pane_t1

0xac7a,	// (0x00047692) wml_button_bg_pane_g1

0xac92,	// (0x000476aa) wml_button_bg_pane_g2

0xac9a,	// (0x000476b2) wml_button_bg_pane_g3

0xaca2,	// (0x000476ba) wml_button_bg_pane_g4

0xacaa,	// (0x000476c2) wml_button_bg_pane_g5

0xacb2,	// (0x000476ca) wml_button_bg_pane_g6

0xacba,	// (0x000476d2) wml_button_bg_pane_g7

0xacc2,	// (0x000476da) wml_button_bg_pane_g8

0xacca,	// (0x000476e2) wml_button_bg_pane_g9

0x0008,

0xf278,	// (0x0004bc90) wml_button_bg_pane_g

0x3761,	// (0x00040179) bg_list_pane_cp02

0xacd2,	// (0x000476ea) mce_header_pane_ParamLimits

0xacd2,	// (0x000476ea) mce_header_pane

0xace8,	// (0x00047700) mce_icon_pane

0xace8,	// (0x00047700) mce_image_pane

0xacf1,	// (0x00047709) mce_text_pane_ParamLimits

0xacf1,	// (0x00047709) mce_text_pane

0x376b,	// (0x00040183) scroll_pane_cp03

0xabbe,	// (0x000475d6) scroll_pane_cp04

0xad04,	// (0x0004771c) scroll_pane_cp05_ParamLimits

0xad04,	// (0x0004771c) scroll_pane_cp05

0x3775,	// (0x0004018d) mce_header_field_pane_ParamLimits

0x3775,	// (0x0004018d) mce_header_field_pane

0x3795,	// (0x000401ad) mce_header_field_pane_2_ParamLimits

0x3795,	// (0x000401ad) mce_header_field_pane_2

0x37ab,	// (0x000401c3) mce_header_field_pane_3

0x37b3,	// (0x000401cb) list_single_mce_message_pane_ParamLimits

0x37b3,	// (0x000401cb) list_single_mce_message_pane

0x37e1,	// (0x000401f9) list_single_mce_smart_pane_ParamLimits

0x37e1,	// (0x000401f9) list_single_mce_smart_pane

0xad10,	// (0x00047728) input_focus_pane_cp03

0xad19,	// (0x00047731) list_header_data_pane

0x381a,	// (0x00040232) mce_header_field_pane_t1

0x3828,	// (0x00040240) list_single_mce_header_pane_ParamLimits

0x3828,	// (0x00040240) list_single_mce_header_pane

0xad21,	// (0x00047739) list_single_mce_header_pane_t1

0xad30,	// (0x00047748) list_single_mce_message_pane_g1

0xad38,	// (0x00047750) list_single_mce_message_pane_t1

0x387e,	// (0x00040296) bg_cale_heading_pane_cp01_ParamLimits

0x387e,	// (0x00040296) bg_cale_heading_pane_cp01

0xad46,	// (0x0004775e) bg_cale_pane_cp02_ParamLimits

0xad46,	// (0x0004775e) bg_cale_pane_cp02

0x38cc,	// (0x000402e4) cale_month_corner_pane

0x38eb,	// (0x00040303) cale_month_day_heading_pane_ParamLimits

0x38eb,	// (0x00040303) cale_month_day_heading_pane

0x3951,	// (0x00040369) cale_month_pane_g1_ParamLimits

0x3951,	// (0x00040369) cale_month_pane_g1

0x3994,	// (0x000403ac) cale_month_pane_g2_ParamLimits

0x3994,	// (0x000403ac) cale_month_pane_g2

0x39ce,	// (0x000403e6) cale_month_pane_g3_ParamLimits

0x39ce,	// (0x000403e6) cale_month_pane_g3

0x3a1e,	// (0x00040436) cale_month_pane_g4_ParamLimits

0x3a1e,	// (0x00040436) cale_month_pane_g4

0x3a6e,	// (0x00040486) cale_month_pane_g5_ParamLimits

0x3a6e,	// (0x00040486) cale_month_pane_g5

0x3abe,	// (0x000404d6) cale_month_pane_g6_ParamLimits

0x3abe,	// (0x000404d6) cale_month_pane_g6

0x3b0e,	// (0x00040526) cale_month_pane_g7_ParamLimits

0x3b0e,	// (0x00040526) cale_month_pane_g7

0x3b76,	// (0x0004058e) cale_month_pane_g8_ParamLimits

0x3b76,	// (0x0004058e) cale_month_pane_g8

0x3bde,	// (0x000405f6) cale_month_pane_g9_ParamLimits

0x3bde,	// (0x000405f6) cale_month_pane_g9

0x3c3c,	// (0x00040654) cale_month_pane_g10_ParamLimits

0x3c3c,	// (0x00040654) cale_month_pane_g10

0x3c9a,	// (0x000406b2) cale_month_pane_g11_ParamLimits

0x3c9a,	// (0x000406b2) cale_month_pane_g11

0x3cee,	// (0x00040706) cale_month_pane_g12_ParamLimits

0x3cee,	// (0x00040706) cale_month_pane_g12

0x3d44,	// (0x0004075c) cale_month_pane_g13_ParamLimits

0x3d44,	// (0x0004075c) cale_month_pane_g13

0x000c,

0xf28b,	// (0x0004bca3) cale_month_pane_g_ParamLimits

0xf28b,	// (0x0004bca3) cale_month_pane_g

0x3d9a,	// (0x000407b2) cale_month_week_pane

0x3dbe,	// (0x000407d6) grid_cale_month_pane_ParamLimits

0x3dbe,	// (0x000407d6) grid_cale_month_pane

0x3e1b,	// (0x00040833) cale_month_day_heading_pane_t1

0x3ea1,	// (0x000408b9) cale_month_day_heading_pane_t2

0x3f1a,	// (0x00040932) cale_month_day_heading_pane_t3

0x3f93,	// (0x000409ab) cale_month_day_heading_pane_t4

0x400c,	// (0x00040a24) cale_month_day_heading_pane_t5

0x4085,	// (0x00040a9d) cale_month_day_heading_pane_t6

0x40fe,	// (0x00040b16) cale_month_day_heading_pane_t7

0x0006,

0xf2a6,	// (0x0004bcbe) cale_month_day_heading_pane_t

0xa9ba,	// (0x000473d2) bg_cale_side_pane_cp01

0x418f,	// (0x00040ba7) cale_month_week_pane_t1

0x41a8,	// (0x00040bc0) cale_month_week_pane_t2

0x41c1,	// (0x00040bd9) cale_month_week_pane_t3

0x41da,	// (0x00040bf2) cale_month_week_pane_t4

0x41f5,	// (0x00040c0d) cale_month_week_pane_t5

0x4216,	// (0x00040c2e) cale_month_week_pane_t6

0x0005,

0xf2b5,	// (0x0004bccd) cale_month_week_pane_t

0x4237,	// (0x00040c4f) cell_cale_month_pane_ParamLimits

0x4237,	// (0x00040c4f) cell_cale_month_pane

0x435d,	// (0x00040d75) cell_cale_month_pane_g1

0x4369,	// (0x00040d81) cell_cale_month_pane_t1_ParamLimits

0x4369,	// (0x00040d81) cell_cale_month_pane_t1

0xa9c8,	// (0x000473e0) grid_highlight_pane_cp08

0xa893,	// (0x000472ab) main_smil_g1

0x4395,	// (0x00040dad) smil_status_pane

0xad85,	// (0x0004779d) smil_text_pane

0xc6c6,	// (0x000490de) bg_popup_call3_rect_pane_g8

0xc6ce,	// (0x000490e6) bg_popup_call3_rect_pane_g9

0x0008,

0xf56e,	// (0x0004bf86) bg_popup_call3_rect_pane_g

0xc955,	// (0x0004936d) smil_status_volume_pane_g1

0xad8f,	// (0x000477a7) smil_status_pane_t1

0x5706,	// (0x0004211e) volume_smil_pane

0xada6,	// (0x000477be) list_smil_text_pane

0x43a8,	// (0x00040dc0) scroll_pane_cp011

0x43b3,	// (0x00040dcb) smil_text_list_pane_t1_ParamLimits

0x43b3,	// (0x00040dcb) smil_text_list_pane_t1

0x4440,	// (0x00040e58) aid_volume_smil_ParamLimits

0x4440,	// (0x00040e58) aid_volume_smil

0xa893,	// (0x000472ab) smil_volume_pane_g1

0xa893,	// (0x000472ab) smil_volume_pane_g2

0x0001,

0xf2d5,	// (0x0004bced) smil_volume_pane_g

0x2b0a,	// (0x0003f522) listscroll_cale_day_pane

0xadb0,	// (0x000477c8) bg_cale_pane

0xadc8,	// (0x000477e0) list_cale_pane

0xadeb,	// (0x00047803) scroll_pane_cp09

0xadfc,	// (0x00047814) cale_bg_pane_g1

0xae04,	// (0x0004781c) cale_bg_pane_g2

0xae0c,	// (0x00047824) cale_bg_pane_g3

0xae14,	// (0x0004782c) cale_bg_pane_g4

0xae1c,	// (0x00047834) cale_bg_pane_g5

0xae24,	// (0x0004783c) cale_bg_pane_g6

0xae2c,	// (0x00047844) cale_bg_pane_g7

0xae34,	// (0x0004784c) cale_bg_pane_g8

0xae3c,	// (0x00047854) cale_bg_pane_g9

0x0008,

0xf2da,	// (0x0004bcf2) cale_bg_pane_g

0x446a,	// (0x00040e82) list_cale_time_pane_ParamLimits

0x446a,	// (0x00040e82) list_cale_time_pane

0xae44,	// (0x0004785c) list_cale_time_pane_g1_ParamLimits

0xae44,	// (0x0004785c) list_cale_time_pane_g1

0xae50,	// (0x00047868) list_cale_time_pane_g2_ParamLimits

0xae50,	// (0x00047868) list_cale_time_pane_g2

0x4492,	// (0x00040eaa) list_cale_time_pane_g3_ParamLimits

0x4492,	// (0x00040eaa) list_cale_time_pane_g3

0x44a0,	// (0x00040eb8) list_cale_time_pane_g4_ParamLimits

0x44a0,	// (0x00040eb8) list_cale_time_pane_g4

0x44ae,	// (0x00040ec6) list_cale_time_pane_g5_ParamLimits

0x44ae,	// (0x00040ec6) list_cale_time_pane_g5

0x0005,

0xf2ed,	// (0x0004bd05) list_cale_time_pane_g_ParamLimits

0xf2ed,	// (0x0004bd05) list_cale_time_pane_g

0xae6a,	// (0x00047882) list_cale_time_pane_t1_ParamLimits

0xae6a,	// (0x00047882) list_cale_time_pane_t1

0xae92,	// (0x000478aa) list_cale_time_pane_t2_ParamLimits

0xae92,	// (0x000478aa) list_cale_time_pane_t2

0x478d,	// (0x000411a5) aid_blid_cardinal_pane

0x47cf,	// (0x000411e7) compass_pane_t4

0xaeba,	// (0x000478d2) list_cale_time_pane_t4_ParamLimits

0xaeba,	// (0x000478d2) list_cale_time_pane_t4

0x47dd,	// (0x000411f5) compass_pane_t5

0x47ed,	// (0x00041205) compass_pane_t6

0x47fb,	// (0x00041213) compass_pane_t7

0xb340,	// (0x00047d58) navi_pane_cc_t1

0xb51d,	// (0x00047f35) aid_phob_thumbnail_center_pane

0x4dde,	// (0x000417f6) main_postcard_pane_g4_ParamLimits

0x0002,

0xf2fa,	// (0x0004bd12) list_cale_time_pane_t_ParamLimits

0xf2fa,	// (0x0004bd12) list_cale_time_pane_t

0xa153,	// (0x00046b6b) bg_popup_window_pane_cp02_ParamLimits

0xa153,	// (0x00046b6b) bg_popup_window_pane_cp02

0xaee2,	// (0x000478fa) heading_pane_cp01_ParamLimits

0xaee2,	// (0x000478fa) heading_pane_cp01

0xaeee,	// (0x00047906) loc_req_pane_ParamLimits

0xaeee,	// (0x00047906) loc_req_pane

0xaefe,	// (0x00047916) loc_type_pane_ParamLimits

0xaefe,	// (0x00047916) loc_type_pane

0xaf10,	// (0x00047928) loc_type_pane_t1_ParamLimits

0xaf10,	// (0x00047928) loc_type_pane_t1

0xaf22,	// (0x0004793a) loc_type_pane_t2_ParamLimits

0xaf22,	// (0x0004793a) loc_type_pane_t2

0xaf34,	// (0x0004794c) loc_type_pane_t3_ParamLimits

0xaf34,	// (0x0004794c) loc_type_pane_t3

0x0002,

0xf301,	// (0x0004bd19) loc_type_pane_t_ParamLimits

0xf301,	// (0x0004bd19) loc_type_pane_t

0xaf46,	// (0x0004795e) list_loc_req_pane

0xaf50,	// (0x00047968) scroll_pane_cp012

0x0fbd,	// (0x0003d9d5) list_single_loc_request_popup_menu_pane_ParamLimits

0x0fbd,	// (0x0003d9d5) list_single_loc_request_popup_menu_pane

0xaf5b,	// (0x00047973) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xaf5b,	// (0x00047973) list_single_loc_request_popup_menu_pane_g1

0xaf67,	// (0x0004797f) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xaf67,	// (0x0004797f) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf308,	// (0x0004bd20) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf308,	// (0x0004bd20) list_single_loc_request_popup_menu_pane_g

0xaf73,	// (0x0004798b) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xaf73,	// (0x0004798b) list_single_loc_request_popup_menu_pane_t1

0x44bc,	// (0x00040ed4) bg_popup_window_pane_cp03_ParamLimits

0x44bc,	// (0x00040ed4) bg_popup_window_pane_cp03

0x44ca,	// (0x00040ee2) heading_loc_req_pane_ParamLimits

0x44ca,	// (0x00040ee2) heading_loc_req_pane

0x44d6,	// (0x00040eee) popup_dyc_status_message_window_g1_ParamLimits

0x44d6,	// (0x00040eee) popup_dyc_status_message_window_g1

0x44e2,	// (0x00040efa) popup_dyc_status_message_window_t1_ParamLimits

0x44e2,	// (0x00040efa) popup_dyc_status_message_window_t1

0x44f4,	// (0x00040f0c) popup_dyc_status_message_window_t2_ParamLimits

0x44f4,	// (0x00040f0c) popup_dyc_status_message_window_t2

0x4506,	// (0x00040f1e) popup_dyc_status_message_window_t3_ParamLimits

0x4506,	// (0x00040f1e) popup_dyc_status_message_window_t3

0x0002,

0xf30d,	// (0x0004bd25) popup_dyc_status_message_window_t_ParamLimits

0xf30d,	// (0x0004bd25) popup_dyc_status_message_window_t

0xa4fc,	// (0x00046f14) bg_heading_pane_cp01

0xaf89,	// (0x000479a1) heading_loc_req_pane_g1

0xaf91,	// (0x000479a9) heading_loc_req_pane_g2

0xaf99,	// (0x000479b1) heading_loc_req_pane_g3

0x0002,

0xf314,	// (0x0004bd2c) heading_loc_req_pane_g

0xafa1,	// (0x000479b9) heading_loc_req_pane_t1

0xafb0,	// (0x000479c8) bg_popup_sub_pane_cp01_ParamLimits

0xafb0,	// (0x000479c8) bg_popup_sub_pane_cp01

0xafbe,	// (0x000479d6) popup_cale_events_window_g1_ParamLimits

0xafbe,	// (0x000479d6) popup_cale_events_window_g1

0xafde,	// (0x000479f6) popup_cale_events_window_g2_ParamLimits

0xafde,	// (0x000479f6) popup_cale_events_window_g2

0x0001,

0xf348,	// (0x0004bd60) popup_cale_events_window_g_ParamLimits

0xf348,	// (0x0004bd60) popup_cale_events_window_g

0xaffe,	// (0x00047a16) popup_cale_events_window_t1_ParamLimits

0xaffe,	// (0x00047a16) popup_cale_events_window_t1

0xb010,	// (0x00047a28) popup_cale_events_window_t2_ParamLimits

0xb010,	// (0x00047a28) popup_cale_events_window_t2

0xb04e,	// (0x00047a66) popup_cale_events_window_t3_ParamLimits

0xb04e,	// (0x00047a66) popup_cale_events_window_t3

0xb088,	// (0x00047aa0) popup_cale_events_window_t4_ParamLimits

0xb088,	// (0x00047aa0) popup_cale_events_window_t4

0x0003,

0xf34d,	// (0x0004bd65) popup_cale_events_window_t_ParamLimits

0xf34d,	// (0x0004bd65) popup_cale_events_window_t

0x4530,	// (0x00040f48) call_type_pane

0xb141,	// (0x00047b59) popup_call_status_window_g1

0x453c,	// (0x00040f54) popup_call_status_window_g2

0x4548,	// (0x00040f60) popup_call_status_window_g3

0x0002,

0xf356,	// (0x0004bd6e) popup_call_status_window_g

0xb0be,	// (0x00047ad6) call_type_pane_g1

0xb0c7,	// (0x00047adf) call_type_pane_g2

0x0001,

0xf35d,	// (0x0004bd75) call_type_pane_g

0xa4fc,	// (0x00046f14) bg_popup_sub_pane_cp02

0xb0d0,	// (0x00047ae8) listscroll_popup_wml_pane

0xb0d8,	// (0x00047af0) list_wml_pane

0xb0e2,	// (0x00047afa) scroll_pane_cp013

0xb0ed,	// (0x00047b05) list_single_graphic_popup_wml_pane_ParamLimits

0xb0ed,	// (0x00047b05) list_single_graphic_popup_wml_pane

0xa893,	// (0x000472ab) list_single_graphic_popup_wml_pane_g1

0xb101,	// (0x00047b19) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf362,	// (0x0004bd7a) list_single_graphic_popup_wml_pane_g

0xb109,	// (0x00047b21) list_single_graphic_popup_wml_pane_t1

0xb11f,	// (0x00047b37) aid_call_pane

0xa765,	// (0x0004717d) popup_clock_analogue_window_g1

0xa765,	// (0x0004717d) popup_clock_analogue_window_g2

0x4554,	// (0x00040f6c) popup_clock_analogue_window_g3

0x4554,	// (0x00040f6c) popup_clock_analogue_window_g4

0xa893,	// (0x000472ab) popup_clock_analogue_window_g5

0x0004,

0xf367,	// (0x0004bd7f) popup_clock_analogue_window_g

0x455c,	// (0x00040f74) popup_clock_analogue_window_t1

0x456a,	// (0x00040f82) clock_digital_number_pane_ParamLimits

0x456a,	// (0x00040f82) clock_digital_number_pane

0x4576,	// (0x00040f8e) clock_digital_number_pane_cp02_ParamLimits

0x4576,	// (0x00040f8e) clock_digital_number_pane_cp02

0x4582,	// (0x00040f9a) clock_digital_number_pane_cp03_ParamLimits

0x4582,	// (0x00040f9a) clock_digital_number_pane_cp03

0x458e,	// (0x00040fa6) clock_digital_number_pane_cp04_ParamLimits

0x458e,	// (0x00040fa6) clock_digital_number_pane_cp04

0x459a,	// (0x00040fb2) clock_digital_separator_pane_ParamLimits

0x459a,	// (0x00040fb2) clock_digital_separator_pane

0x45a6,	// (0x00040fbe) popup_clock_digital_window_t1

0xa893,	// (0x000472ab) clock_digital_number_pane_g1

0xa893,	// (0x000472ab) clock_digital_number_pane_g2

0x0001,

0xf2d5,	// (0x0004bced) clock_digital_number_pane_g

0xa893,	// (0x000472ab) clock_digital_separator_pane_g1

0xa893,	// (0x000472ab) clock_digital_separator_pane_g2

0x0001,

0xf2d5,	// (0x0004bced) clock_digital_separator_pane_g

0xa4fc,	// (0x00046f14) bg_popup_window_pane_cp04

0xb127,	// (0x00047b3f) heading_pane_cp03

0xb12f,	// (0x00047b47) listscroll_popup_gms_pane

0xb137,	// (0x00047b4f) grid_large_graphic_popup_pane

0xb14f,	// (0x00047b67) listscroll_popup_gms_pane_g1

0xb157,	// (0x00047b6f) listscroll_popup_gms_pane_g2

0x0001,

0xf372,	// (0x0004bd8a) listscroll_popup_gms_pane_g

0xabbe,	// (0x000475d6) scroll_pane_cp014

0x45c3,	// (0x00040fdb) cell_large_graphic_popup_pane_ParamLimits

0x45c3,	// (0x00040fdb) cell_large_graphic_popup_pane

0x45db,	// (0x00040ff3) cell_large_graphic_popup_pane_g1_ParamLimits

0x45db,	// (0x00040ff3) cell_large_graphic_popup_pane_g1

0xb15f,	// (0x00047b77) cell_large_graphic_popup_pane_g2_ParamLimits

0xb15f,	// (0x00047b77) cell_large_graphic_popup_pane_g2

0xb16b,	// (0x00047b83) cell_large_graphic_popup_pane_g3_ParamLimits

0xb16b,	// (0x00047b83) cell_large_graphic_popup_pane_g3

0xb178,	// (0x00047b90) cell_large_graphic_popup_pane_g4_ParamLimits

0xb178,	// (0x00047b90) cell_large_graphic_popup_pane_g4

0x0003,

0xf377,	// (0x0004bd8f) cell_large_graphic_popup_pane_g_ParamLimits

0xf377,	// (0x0004bd8f) cell_large_graphic_popup_pane_g

0xb188,	// (0x00047ba0) grid_highlight_pane_cp010

0xa893,	// (0x000472ab) bg_popup_call_pane_g1

0xb192,	// (0x00047baa) list_single_graphic_popup_conf_pane_ParamLimits

0xb192,	// (0x00047baa) list_single_graphic_popup_conf_pane

0xb1a5,	// (0x00047bbd) list_highlight_pane_cp01

0xb1ae,	// (0x00047bc6) list_single_graphic_popup_conf_pane_g1

0xb1b6,	// (0x00047bce) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf380,	// (0x0004bd98) list_single_graphic_popup_conf_pane_g

0xb1be,	// (0x00047bd6) list_single_graphic_popup_conf_pane_t1

0xb1cc,	// (0x00047be4) linegrid_cams_pane_g1

0x45e7,	// (0x00040fff) linegrid_cams_pane_g2

0xa9fb,	// (0x00047413) linegrid_cams_pane_g3

0xb1d5,	// (0x00047bed) linegrid_cams_pane_g4

0x45f0,	// (0x00041008) linegrid_cams_pane_g5

0x45f9,	// (0x00041011) linegrid_cams_pane_g6

0xaa04,	// (0x0004741c) linegrid_cams_pane_g7

0x0006,

0xf385,	// (0x0004bd9d) linegrid_cams_pane_g

0xb1de,	// (0x00047bf6) popup_clock_analogue_window

0xb1de,	// (0x00047bf6) popup_clock_digital_window

0xa4fc,	// (0x00046f14) popup_phob_thumbnail_window

0xa893,	// (0x000472ab) call_video_uplink_pane_g1

0xb1e7,	// (0x00047bff) call_video_uplink_pane_g2

0x0001,

0xf394,	// (0x0004bdac) call_video_uplink_pane_g

0xb1ef,	// (0x00047c07) video_uplink_pane

0xb1f7,	// (0x00047c0f) mce_image_pane_g1

0x4602,	// (0x0004101a) mce_image_pane_g2

0x460a,	// (0x00041022) mce_image_pane_g3

0x4612,	// (0x0004102a) mce_image_pane_g4

0x461a,	// (0x00041032) mce_image_pane_g5

0x0004,

0xf399,	// (0x0004bdb1) mce_image_pane_g

0xb201,	// (0x00047c19) control_top_pane_stacon_cp01_ParamLimits

0xb201,	// (0x00047c19) control_top_pane_stacon_cp01

0xb215,	// (0x00047c2d) uni_indicator_pane_stacon_cp01_ParamLimits

0xb215,	// (0x00047c2d) uni_indicator_pane_stacon_cp01

0xb226,	// (0x00047c3e) bg_popup_sub_pane_cp03

0x4622,	// (0x0004103a) chi_dic_find_pane

0x462a,	// (0x00041042) listscroll_chi_dic_pane

0x4633,	// (0x0004104b) main_pane_chidic_g1

0x4646,	// (0x0004105e) chi_dic_find_pane_t1

0xb230,	// (0x00047c48) find_chidic_pane

0xb239,	// (0x00047c51) chi_dic_list_pane_ParamLimits

0xb239,	// (0x00047c51) chi_dic_list_pane

0xb24a,	// (0x00047c62) scroll_pane_cp020

0x4654,	// (0x0004106c) find_chidic_pane_t1

0xa4fc,	// (0x00046f14) input_focus_pane_cp06

0x4663,	// (0x0004107b) list_chi_dic_pane_ParamLimits

0x4663,	// (0x0004107b) list_chi_dic_pane

0x4680,	// (0x00041098) list_chi_dic_pane_t1_ParamLimits

0x4680,	// (0x00041098) list_chi_dic_pane_t1

0xa4fc,	// (0x00046f14) list_highlight_pane_cp020

0xb252,	// (0x00047c6a) bg_cale_heading_pane_g1

0x4693,	// (0x000410ab) bg_cale_heading_pane_g2

0x469b,	// (0x000410b3) bg_cale_heading_pane_g3

0x46a3,	// (0x000410bb) bg_cale_heading_pane_g4

0x46ad,	// (0x000410c5) bg_cale_heading_pane_g5

0x46b7,	// (0x000410cf) bg_cale_heading_pane_g6

0x46bf,	// (0x000410d7) bg_cale_heading_pane_g7

0x46c7,	// (0x000410df) bg_cale_heading_pane_g8

0x46d1,	// (0x000410e9) bg_cale_heading_pane_g9

0x0008,

0xf3a4,	// (0x0004bdbc) bg_cale_heading_pane_g

0xb252,	// (0x00047c6a) bg_cale_side_pane_g1

0x46db,	// (0x000410f3) bg_cale_side_pane_g2

0x46e5,	// (0x000410fd) bg_cale_side_pane_g3

0x46ef,	// (0x00041107) bg_cale_side_pane_g4

0x46f9,	// (0x00041111) bg_cale_side_pane_g5

0x4703,	// (0x0004111b) bg_cale_side_pane_g6

0x470d,	// (0x00041125) bg_cale_side_pane_g7

0x4717,	// (0x0004112f) bg_cale_side_pane_g8

0x471f,	// (0x00041137) bg_cale_side_pane_g9

0x0008,

0xf3b7,	// (0x0004bdcf) bg_cale_side_pane_g

0x4727,	// (0x0004113f) popup_call_status_window_ParamLimits

0x4727,	// (0x0004113f) popup_call_status_window

0xb25a,	// (0x00047c72) stacon_top_pane

0xb262,	// (0x00047c7a) status_pane_ParamLimits

0xb262,	// (0x00047c7a) status_pane

0xb277,	// (0x00047c8f) status_small_pane

0xb27f,	// (0x00047c97) control_pane

0xa4fc,	// (0x00046f14) stacon_bottom_pane

0xb287,	// (0x00047c9f) list_single_mce_smart_pane_t1_ParamLimits

0xb287,	// (0x00047c9f) list_single_mce_smart_pane_t1

0xb29a,	// (0x00047cb2) list_single_mce_smart_pane_t2_ParamLimits

0xb29a,	// (0x00047cb2) list_single_mce_smart_pane_t2

0x0001,

0xf3ca,	// (0x0004bde2) list_single_mce_smart_pane_t_ParamLimits

0xf3ca,	// (0x0004bde2) list_single_mce_smart_pane_t

0x4733,	// (0x0004114b) compass_pane

0x473f,	// (0x00041157) main_location2_pane_t1

0x4753,	// (0x0004116b) main_location2_pane_t2

0x4767,	// (0x0004117f) main_location2_pane_t3

0x0003,

0xf3cf,	// (0x0004bde7) main_location2_pane_t

0xb2b9,	// (0x00047cd1) compass_pane_g1_ParamLimits

0xb2b9,	// (0x00047cd1) compass_pane_g1

0x47b1,	// (0x000411c9) compass_pane_t1

0x47c0,	// (0x000411d8) compass_pane_t2

0x0005,

0xf3d8,	// (0x0004bdf0) compass_pane_t

0x480b,	// (0x00041223) text_secondary_cp61

0xb337,	// (0x00047d4f) navi_pane_cams_g5

0xb3b3,	// (0x00047dcb) navi_pane_im_t1

0xb3c1,	// (0x00047dd9) navi_pane_mp_g1_ParamLimits

0xb3c1,	// (0x00047dd9) navi_pane_mp_g1

0xb3d5,	// (0x00047ded) navi_pane_mp_g2_ParamLimits

0xb3d5,	// (0x00047ded) navi_pane_mp_g2

0xb3e1,	// (0x00047df9) navi_pane_mp_g3_ParamLimits

0xb3e1,	// (0x00047df9) navi_pane_mp_g3

0x0002,

0xf3ec,	// (0x0004be04) navi_pane_mp_g_ParamLimits

0xf3ec,	// (0x0004be04) navi_pane_mp_g

0xb3ed,	// (0x00047e05) navi_pane_mp_t1

0xb3fb,	// (0x00047e13) navi_pane_mp_t2

0x0002,

0xf3f3,	// (0x0004be0b) navi_pane_mp_t

0xb466,	// (0x00047e7e) navi_pane_vt_g1

0xb3ed,	// (0x00047e05) navi_pane_vt_t1

0xb46e,	// (0x00047e86) navi_slider_pane

0xaa15,	// (0x0004742d) zooming_pane

0xb47e,	// (0x00047e96) navi_slider_pane_g1

0x4846,	// (0x0004125e) navi_slider_pane_g2

0x0006,

0xf3fa,	// (0x0004be12) navi_slider_pane_g

0xb4a2,	// (0x00047eba) aid_levels_zoom

0xb4aa,	// (0x00047ec2) zooming_pane_g1

0xb4b2,	// (0x00047eca) zooming_pane_g2

0xb4b2,	// (0x00047eca) zooming_pane_g3

0x0002,

0xf409,	// (0x0004be21) zooming_pane_g

0xb4ba,	// (0x00047ed2) level_10_zoom

0xb4c3,	// (0x00047edb) level_11_zoom

0xb4cc,	// (0x00047ee4) level_1_zoom

0xb4d5,	// (0x00047eed) level_2_zoom

0xb4de,	// (0x00047ef6) level_3_zoom

0xb4e7,	// (0x00047eff) level_4_zoom

0xb4f0,	// (0x00047f08) level_5_zoom

0xb4f9,	// (0x00047f11) level_6_zoom

0xb502,	// (0x00047f1a) level_7_zoom

0xb50b,	// (0x00047f23) level_8_zoom

0xb514,	// (0x00047f2c) level_9_zoom

0xb525,	// (0x00047f3d) popup_phob_thumbnail_window_g1

0xb52d,	// (0x00047f45) popup_phob_thumbnail_window_g2

0x0001,

0xf410,	// (0x0004be28) popup_phob_thumbnail_window_g

0xc868,	// (0x00049280) level_1_location

0xc870,	// (0x00049288) level_2_location

0xc878,	// (0x00049290) level_3_location

0xc880,	// (0x00049298) level_4_location

0xaa15,	// (0x0004742d) level_5_location

0x4858,	// (0x00041270) mce_icon_pane_g1

0x4860,	// (0x00041278) mce_icon_pane_g2

0x0001,

0xf415,	// (0x0004be2d) mce_icon_pane_g

0x4868,	// (0x00041280) main_mup_pane_g1_ParamLimits

0x4868,	// (0x00041280) main_mup_pane_g1

0x4880,	// (0x00041298) main_mup_pane_g2_ParamLimits

0x4880,	// (0x00041298) main_mup_pane_g2

0x4894,	// (0x000412ac) main_mup_pane_g3_ParamLimits

0x4894,	// (0x000412ac) main_mup_pane_g3

0x48a8,	// (0x000412c0) main_mup_pane_g4_ParamLimits

0x48a8,	// (0x000412c0) main_mup_pane_g4

0x48c4,	// (0x000412dc) main_mup_pane_g5_ParamLimits

0x48c4,	// (0x000412dc) main_mup_pane_g5

0x48e5,	// (0x000412fd) main_mup_pane_g6_ParamLimits

0x48e5,	// (0x000412fd) main_mup_pane_g6

0x4901,	// (0x00041319) main_mup_pane_g7_ParamLimits

0x4901,	// (0x00041319) main_mup_pane_g7

0x491d,	// (0x00041335) main_mup_pane_g8_ParamLimits

0x491d,	// (0x00041335) main_mup_pane_g8

0x4939,	// (0x00041351) main_mup_pane_g9_ParamLimits

0x4939,	// (0x00041351) main_mup_pane_g9

0x4958,	// (0x00041370) main_mup_pane_g10_ParamLimits

0x4958,	// (0x00041370) main_mup_pane_g10

0x4977,	// (0x0004138f) main_mup_pane_g11_ParamLimits

0x4977,	// (0x0004138f) main_mup_pane_g11

0x498f,	// (0x000413a7) main_mup_pane_g12_ParamLimits

0x498f,	// (0x000413a7) main_mup_pane_g12

0x499d,	// (0x000413b5) main_mup_pane_g13_ParamLimits

0x499d,	// (0x000413b5) main_mup_pane_g13

0x000c,

0xf41a,	// (0x0004be32) main_mup_pane_g_ParamLimits

0xf41a,	// (0x0004be32) main_mup_pane_g

0x49b3,	// (0x000413cb) main_mup_pane_t1_ParamLimits

0x49b3,	// (0x000413cb) main_mup_pane_t1

0x49d0,	// (0x000413e8) main_mup_pane_t2_ParamLimits

0x49d0,	// (0x000413e8) main_mup_pane_t2

0x49ea,	// (0x00041402) main_mup_pane_t3_ParamLimits

0x49ea,	// (0x00041402) main_mup_pane_t3

0x4a04,	// (0x0004141c) main_mup_pane_t4_ParamLimits

0x4a04,	// (0x0004141c) main_mup_pane_t4

0x4a16,	// (0x0004142e) main_mup_pane_t5_ParamLimits

0x4a16,	// (0x0004142e) main_mup_pane_t5

0x4a28,	// (0x00041440) main_mup_pane_t6_ParamLimits

0x4a28,	// (0x00041440) main_mup_pane_t6

0x0005,

0xf435,	// (0x0004be4d) main_mup_pane_t_ParamLimits

0xf435,	// (0x0004be4d) main_mup_pane_t

0x4a3e,	// (0x00041456) mup_progress_pane_ParamLimits

0x4a3e,	// (0x00041456) mup_progress_pane

0x4a4a,	// (0x00041462) mup_visualizer_pane_ParamLimits

0x4a4a,	// (0x00041462) mup_visualizer_pane

0x4a88,	// (0x000414a0) mup_volume_pane_ParamLimits

0x4a88,	// (0x000414a0) mup_volume_pane

0xb141,	// (0x00047b59) mup_visualizer_pane_g1_ParamLimits

0xb141,	// (0x00047b59) mup_visualizer_pane_g1

0xb141,	// (0x00047b59) mup_visualizer_pane_g2_ParamLimits

0xb141,	// (0x00047b59) mup_visualizer_pane_g2

0xb2b9,	// (0x00047cd1) mup_visualizer_pane_g3_ParamLimits

0xb2b9,	// (0x00047cd1) mup_visualizer_pane_g3

0x0002,

0xf442,	// (0x0004be5a) mup_visualizer_pane_g_ParamLimits

0xf442,	// (0x0004be5a) mup_visualizer_pane_g

0xa893,	// (0x000472ab) mup_volume_pane_g1

0xb53d,	// (0x00047f55) mup_volume_pane_g2

0x0001,

0xf449,	// (0x0004be61) mup_volume_pane_g

0xa893,	// (0x000472ab) mup_progress_pane_g1

0xb546,	// (0x00047f5e) mup_progress_pane_g2

0xb54f,	// (0x00047f67) mup_progress_pane_g3

0x0002,

0xf44e,	// (0x0004be66) mup_progress_pane_g

0xa4fc,	// (0x00046f14) bg_popup_window_pane_cp05

0xb558,	// (0x00047f70) heading_pane_cp02_ParamLimits

0xb558,	// (0x00047f70) heading_pane_cp02

0xb572,	// (0x00047f8a) list_popup_blid_pane

0xb57a,	// (0x00047f92) list_blid_sat_info_pane_ParamLimits

0xb57a,	// (0x00047f92) list_blid_sat_info_pane

0xb58d,	// (0x00047fa5) list_blid_sat_info_pane_g1

0xb595,	// (0x00047fad) list_blid_sat_info_pane_t1

0x4b93,	// (0x000415ab) mup_equalizer_pane_ParamLimits

0x4b93,	// (0x000415ab) mup_equalizer_pane

0x4bb4,	// (0x000415cc) mup_equalizer_pane_cp1_ParamLimits

0x4bb4,	// (0x000415cc) mup_equalizer_pane_cp1

0x4bd5,	// (0x000415ed) mup_equalizer_pane_cp2_ParamLimits

0x4bd5,	// (0x000415ed) mup_equalizer_pane_cp2

0x4bf6,	// (0x0004160e) mup_equalizer_pane_cp3_ParamLimits

0x4bf6,	// (0x0004160e) mup_equalizer_pane_cp3

0x4c17,	// (0x0004162f) mup_equalizer_pane_cp4_ParamLimits

0x4c17,	// (0x0004162f) mup_equalizer_pane_cp4

0x4c38,	// (0x00041650) mup_equalizer_pane_cp5

0x4c4e,	// (0x00041666) mup_equalizer_pane_cp6

0x4c66,	// (0x0004167e) mup_equalizer_pane_cp7

0xc746,	// (0x0004915e) bg_popup_call_poc_act_pane_g9

0xc74e,	// (0x00049166) bg_popup_call_poc_act_pane_g10

0xc756,	// (0x0004916e) bg_popup_call_poc_act_pane_g11

0x000a,

0xa76d,	// (0x00047185) mup_scale_pane

0xa893,	// (0x000472ab) mup_scale_pane_g1

0xb5a3,	// (0x00047fbb) mup_scale_pane_g2

0x0006,

0xf46a,	// (0x0004be82) mup_scale_pane_g

0xb5c7,	// (0x00047fdf) msg_data_pane

0xb5cf,	// (0x00047fe7) scroll_pane_cp017

0x10a7,	// (0x0003dabf) bg_list_pane_cp04_ParamLimits

0x10a7,	// (0x0003dabf) bg_list_pane_cp04

0xb5d7,	// (0x00047fef) msg_data_pane_g1

0x4c90,	// (0x000416a8) msg_data_pane_g2

0x4c98,	// (0x000416b0) msg_data_pane_g3

0x4ca0,	// (0x000416b8) msg_data_pane_g4

0x4ca8,	// (0x000416c0) msg_data_pane_g5

0x4cb0,	// (0x000416c8) msg_data_pane_g6

0x4cb8,	// (0x000416d0) msg_data_pane_g7

0x0006,

0xf479,	// (0x0004be91) msg_data_pane_g

0x10c7,	// (0x0003dadf) msg_text_pane_ParamLimits

0x10c7,	// (0x0003dadf) msg_text_pane

0x4cc0,	// (0x000416d8) qrid_highlight_pane_cp011_ParamLimits

0x4cc0,	// (0x000416d8) qrid_highlight_pane_cp011

0xa4fc,	// (0x00046f14) msg_body_pane

0xa4fc,	// (0x00046f14) msg_header_pane

0xb5e8,	// (0x00048000) input_focus_pane_cp07

0x112d,	// (0x0003db45) msg_header_pane_t1_ParamLimits

0x112d,	// (0x0003db45) msg_header_pane_t1

0x113f,	// (0x0003db57) msg_header_pane_t2_ParamLimits

0x113f,	// (0x0003db57) msg_header_pane_t2

0x0001,

0xf48d,	// (0x0004bea5) msg_header_pane_t_ParamLimits

0xf48d,	// (0x0004bea5) msg_header_pane_t

0xb5fd,	// (0x00048015) msg_body_pane_g1

0x1151,	// (0x0003db69) msg_body_pane_t1_ParamLimits

0x1151,	// (0x0003db69) msg_body_pane_t1

0x1182,	// (0x0003db9a) msg_body_pane_t2_ParamLimits

0x1182,	// (0x0003db9a) msg_body_pane_t2

0x1194,	// (0x0003dbac) msg_body_pane_t3_ParamLimits

0x1194,	// (0x0003dbac) msg_body_pane_t3

0x0002,

0xf492,	// (0x0004beaa) msg_body_pane_t_ParamLimits

0xf492,	// (0x0004beaa) msg_body_pane_t

0x4d2e,	// (0x00041746) main_viewer_pane_g1_ParamLimits

0x4d2e,	// (0x00041746) main_viewer_pane_g1

0x4d3a,	// (0x00041752) main_viewer_pane_g2_ParamLimits

0x4d3a,	// (0x00041752) main_viewer_pane_g2

0x4d46,	// (0x0004175e) main_viewer_pane_g3_ParamLimits

0x4d46,	// (0x0004175e) main_viewer_pane_g3

0x4d57,	// (0x0004176f) main_viewer_pane_g4_ParamLimits

0x4d57,	// (0x0004176f) main_viewer_pane_g4

0x4d68,	// (0x00041780) main_viewer_pane_g5_ParamLimits

0x4d68,	// (0x00041780) main_viewer_pane_g5

0x4d68,	// (0x00041780) main_viewer_pane_g7_ParamLimits

0x4d68,	// (0x00041780) main_viewer_pane_g7

0x4d7a,	// (0x00041792) main_viewer_pane_g8_ParamLimits

0x4d7a,	// (0x00041792) main_viewer_pane_g8

0x0007,

0xf4a2,	// (0x0004beba) main_viewer_pane_g_ParamLimits

0xf4a2,	// (0x0004beba) main_viewer_pane_g

0xb605,	// (0x0004801d) viewer_content_pane_ParamLimits

0xb605,	// (0x0004801d) viewer_content_pane

0x4db2,	// (0x000417ca) main_postcard_pane_g1_ParamLimits

0x4db2,	// (0x000417ca) main_postcard_pane_g1

0x4dc0,	// (0x000417d8) main_postcard_pane_g2_ParamLimits

0x4dc0,	// (0x000417d8) main_postcard_pane_g2

0x4dce,	// (0x000417e6) main_postcard_pane_g3_ParamLimits

0x4dce,	// (0x000417e6) main_postcard_pane_g3

0x0005,

0xf4b3,	// (0x0004becb) main_postcard_pane_g_ParamLimits

0xf4b3,	// (0x0004becb) main_postcard_pane_g

0x4dde,	// (0x000417f6) main_postcard_pane_g4

0xc968,	// (0x00049380) smil_status_volume_pane_g2

0x4e0a,	// (0x00041822) postcard_pane_ParamLimits

0x4e0a,	// (0x00041822) postcard_pane

0xb141,	// (0x00047b59) postcard_pane_g1_ParamLimits

0xb141,	// (0x00047b59) postcard_pane_g1

0x4e3c,	// (0x00041854) postcard_pane_g2_ParamLimits

0x4e3c,	// (0x00041854) postcard_pane_g2

0x4e48,	// (0x00041860) postcard_pane_g3_ParamLimits

0x4e48,	// (0x00041860) postcard_pane_g3

0xb613,	// (0x0004802b) postcard_pane_g4_ParamLimits

0xb613,	// (0x0004802b) postcard_pane_g4

0x4e54,	// (0x0004186c) postcard_pane_g5_ParamLimits

0x4e54,	// (0x0004186c) postcard_pane_g5

0x4e60,	// (0x00041878) postcard_pane_g6_ParamLimits

0x4e60,	// (0x00041878) postcard_pane_g6

0xb621,	// (0x00048039) postcard_pane_g7_ParamLimits

0xb621,	// (0x00048039) postcard_pane_g7

0x0006,

0xf4c0,	// (0x0004bed8) postcard_pane_g_ParamLimits

0xf4c0,	// (0x0004bed8) postcard_pane_g

0x4e6c,	// (0x00041884) main_mp2_pane_g1_ParamLimits

0x4e6c,	// (0x00041884) main_mp2_pane_g1

0x4e78,	// (0x00041890) main_mp2_pane_g2_ParamLimits

0x4e78,	// (0x00041890) main_mp2_pane_g2

0x4e84,	// (0x0004189c) main_mp2_pane_g3_ParamLimits

0x4e84,	// (0x0004189c) main_mp2_pane_g3

0x0002,

0xf4cf,	// (0x0004bee7) main_mp2_pane_g_ParamLimits

0xf4cf,	// (0x0004bee7) main_mp2_pane_g

0x4e90,	// (0x000418a8) main_mp2_pane_t1_ParamLimits

0x4e90,	// (0x000418a8) main_mp2_pane_t1

0x4ea7,	// (0x000418bf) main_mp2_pane_t2_ParamLimits

0x4ea7,	// (0x000418bf) main_mp2_pane_t2

0x4eb9,	// (0x000418d1) main_mp2_pane_t3_ParamLimits

0x4eb9,	// (0x000418d1) main_mp2_pane_t3

0x0002,

0xf4d6,	// (0x0004beee) main_mp2_pane_t_ParamLimits

0xf4d6,	// (0x0004beee) main_mp2_pane_t

0xb62f,	// (0x00048047) pec_content_pane_ParamLimits

0xb62f,	// (0x00048047) pec_content_pane

0xabbe,	// (0x000475d6) scroll_pane_cp015

0xb641,	// (0x00048059) pec_attribute_pane_ParamLimits

0xb641,	// (0x00048059) pec_attribute_pane

0x4ecb,	// (0x000418e3) pec_content_pane_g1_ParamLimits

0x4ecb,	// (0x000418e3) pec_content_pane_g1

0xb651,	// (0x00048069) pec_content_pane_t1_ParamLimits

0xb651,	// (0x00048069) pec_content_pane_t1

0xb66f,	// (0x00048087) pec_content_pane_t2_ParamLimits

0xb66f,	// (0x00048087) pec_content_pane_t2

0x0001,

0xf4dd,	// (0x0004bef5) pec_content_pane_t_ParamLimits

0xf4dd,	// (0x0004bef5) pec_content_pane_t

0x4ed7,	// (0x000418ef) list_single_graphic_pane_cp01_ParamLimits

0x4ed7,	// (0x000418ef) list_single_graphic_pane_cp01

0xa76d,	// (0x00047185) bg_popup_sub_pane_cp04

0xb681,	// (0x00048099) popup_mup_playback_window_g1

0xb68d,	// (0x000480a5) popup_mup_playback_window_t1

0xb6a2,	// (0x000480ba) popup_mup_playback_window_t2

0x0001,

0xf4e2,	// (0x0004befa) popup_mup_playback_window_t

0xb6d9,	// (0x000480f1) main_image_pane_g1_ParamLimits

0xb6d9,	// (0x000480f1) main_image_pane_g1

0xb71c,	// (0x00048134) scroll_pane_cp018_ParamLimits

0xb71c,	// (0x00048134) scroll_pane_cp018

0xb734,	// (0x0004814c) scroll_pane_cp016_ParamLimits

0xb734,	// (0x0004814c) scroll_pane_cp016

0x4f71,	// (0x00041989) smil2_image_pane_ParamLimits

0x4f71,	// (0x00041989) smil2_image_pane

0x4fa1,	// (0x000419b9) smil2_root_pane_ParamLimits

0x4fa1,	// (0x000419b9) smil2_root_pane

0x4fcd,	// (0x000419e5) smil2_text_pane_ParamLimits

0x4fcd,	// (0x000419e5) smil2_text_pane

0xa4fc,	// (0x00046f14) bg_list_pane_cp06

0xb770,	// (0x00048188) grid_radio_pane

0xa4fc,	// (0x00046f14) bg_popup_window_pane_cp06

0xb778,	// (0x00048190) main_fmradio_pane_t1

0xb127,	// (0x00047b3f) heading_pane_cp04

0xb786,	// (0x0004819e) main_fmradio_pane_t2

0xc79e,	// (0x000491b6) popup_cale_lunar_info_window_g1

0xb794,	// (0x000481ac) main_fmradio_pane_t3

0xc7a6,	// (0x000491be) popup_cale_lunar_info_window_g2

0xb7a2,	// (0x000481ba) main_fmradio_pane_t4

0x0001,

0xb7b0,	// (0x000481c8) main_fmradio_pane_t5

0x0004,

0xf5d0,	// (0x0004bfe8) popup_cale_lunar_info_window_g

0xf4f7,	// (0x0004bf0f) main_fmradio_pane_t

0xb7be,	// (0x000481d6) wait_bar_pane_cp03

0xb7c6,	// (0x000481de) cell_fmradio_pane_ParamLimits

0xb7c6,	// (0x000481de) cell_fmradio_pane

0xb621,	// (0x00048039) cell_fmradio_pane_g1_ParamLimits

0xb621,	// (0x00048039) cell_fmradio_pane_g1

0xa4fc,	// (0x00046f14) grid_highlight_pane_cp011

0xb7d9,	// (0x000481f1) poc_content_pane_ParamLimits

0xb7d9,	// (0x000481f1) poc_content_pane

0xb7eb,	// (0x00048203) scroll_pane_cp019

0x500d,	// (0x00041a25) popup_call_poc_act_window_ParamLimits

0x500d,	// (0x00041a25) popup_call_poc_act_window

0x501a,	// (0x00041a32) popup_call_poc_inact_window_ParamLimits

0x501a,	// (0x00041a32) popup_call_poc_inact_window

0xf594,	// (0x0004bfac) bg_popup_call_poc_act_pane_g

0xc75e,	// (0x00049176) bg_popup_call_poc_inact_pane_g1

0xc766,	// (0x0004917e) bg_popup_call_poc_inact_pane_g2

0xb7f3,	// (0x0004820b) popup_call_poc_act_window_g2

0xc76e,	// (0x00049186) bg_popup_call_poc_inact_pane_g3

0xc6ee,	// (0x00049106) bg_popup_call_poc_inact_pane_g4

0xc776,	// (0x0004918e) bg_popup_call_poc_inact_pane_g5

0xb7fb,	// (0x00048213) popup_call_poc_act_window_t1_ParamLimits

0xb7fb,	// (0x00048213) popup_call_poc_act_window_t1

0xb823,	// (0x0004823b) popup_call_poc_act_window_t2_ParamLimits

0xb823,	// (0x0004823b) popup_call_poc_act_window_t2

0xb84b,	// (0x00048263) popup_call_poc_act_window_t3_ParamLimits

0xb84b,	// (0x00048263) popup_call_poc_act_window_t3

0xb873,	// (0x0004828b) popup_call_poc_act_window_t4_ParamLimits

0xb873,	// (0x0004828b) popup_call_poc_act_window_t4

0x0003,

0xf502,	// (0x0004bf1a) popup_call_poc_act_window_t_ParamLimits

0xf502,	// (0x0004bf1a) popup_call_poc_act_window_t

0xc77e,	// (0x00049196) bg_popup_call_poc_inact_pane_g6

0xc786,	// (0x0004919e) bg_popup_call_poc_inact_pane_g7

0xc78e,	// (0x000491a6) bg_popup_call_poc_inact_pane_g8

0xb885,	// (0x0004829d) popup_call_poc_inact_window_g2

0xc796,	// (0x000491ae) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf5ab,	// (0x0004bfc3) bg_popup_call_poc_inact_pane_g

0xb88d,	// (0x000482a5) popup_call_poc_inact_window_t1_ParamLimits

0xb88d,	// (0x000482a5) popup_call_poc_inact_window_t1

0xb8a2,	// (0x000482ba) popup_call_poc_inact_window_t2_ParamLimits

0xb8a2,	// (0x000482ba) popup_call_poc_inact_window_t2

0xb8b7,	// (0x000482cf) popup_call_poc_inact_window_t3_ParamLimits

0xb8b7,	// (0x000482cf) popup_call_poc_inact_window_t3

0x0002,

0xf50b,	// (0x0004bf23) popup_call_poc_inact_window_t_ParamLimits

0xf50b,	// (0x0004bf23) popup_call_poc_inact_window_t

0xc8db,	// (0x000492f3) context_pane_ParamLimits

0x5650,	// (0x00042068) signal_pane_ParamLimits

0xaa15,	// (0x0004742d) main_call2_pane

0x55c3,	// (0x00041fdb) popup_phob_thumbnail2_window_ParamLimits

0x55c3,	// (0x00041fdb) popup_phob_thumbnail2_window

0x4cdc,	// (0x000416f4) aid_hotspot_pointer_arrow_pane

0x4ce4,	// (0x000416fc) aid_hotspot_pointer_hand_pane

0x5342,	// (0x00041d5a) phob_pre_status_pane_g5

0x3008,	// (0x0003fa20) cams_zoom_pane_ParamLimits

0x3014,	// (0x0003fa2c) image_vga_pane_ParamLimits

0x3023,	// (0x0003fa3b) main_camera_pane_g1_ParamLimits

0x3031,	// (0x0003fa49) main_camera_pane_g2_ParamLimits

0x303d,	// (0x0003fa55) main_camera_pane_g3_ParamLimits

0x3049,	// (0x0003fa61) main_camera_pane_g4_ParamLimits

0x3055,	// (0x0003fa6d) main_camera_pane_g5_ParamLimits

0x3061,	// (0x0003fa79) main_camera_pane_g6_ParamLimits

0x306d,	// (0x0003fa85) main_camera_pane_g7_ParamLimits

0xf20a,	// (0x0004bc22) main_camera_pane_g_ParamLimits

0x3079,	// (0x0003fa91) main_camera_pane_t1_ParamLimits

0x308b,	// (0x0003faa3) main_camera_pane_t2_ParamLimits

0xf21b,	// (0x0004bc33) main_camera_pane_t_ParamLimits

0xa76d,	// (0x00047185) bg_popup_preview_window_pane_cp01_ParamLimits

0xa76d,	// (0x00047185) bg_popup_preview_window_pane_cp01

0xb8cc,	// (0x000482e4) popup_phob_thumbnail2_window_g1_ParamLimits

0xb8cc,	// (0x000482e4) popup_phob_thumbnail2_window_g1

0xa4fc,	// (0x00046f14) call2_cli_visual_pane

0x5036,	// (0x00041a4e) popup_call2_audio_conf_window_ParamLimits

0x5036,	// (0x00041a4e) popup_call2_audio_conf_window

0x504b,	// (0x00041a63) popup_call2_audio_first_window_ParamLimits

0x504b,	// (0x00041a63) popup_call2_audio_first_window

0x50e9,	// (0x00041b01) popup_call2_audio_in_window_ParamLimits

0x50e9,	// (0x00041b01) popup_call2_audio_in_window

0x512b,	// (0x00041b43) popup_call2_audio_out_window_ParamLimits

0x512b,	// (0x00041b43) popup_call2_audio_out_window

0x518d,	// (0x00041ba5) popup_call2_audio_second_window_ParamLimits

0x518d,	// (0x00041ba5) popup_call2_audio_second_window

0x51eb,	// (0x00041c03) popup_call2_audio_wait_window_ParamLimits

0x51eb,	// (0x00041c03) popup_call2_audio_wait_window

0xa4fc,	// (0x00046f14) bg_popup_call2_act_pane_cp03

0xa74f,	// (0x00047167) list_conf_pane_cp

0xb8d8,	// (0x000482f0) popup_call2_audio_conf_window_t1

0xb8e6,	// (0x000482fe) list_single_graphic_popup_conf2_pane_ParamLimits

0xb8e6,	// (0x000482fe) list_single_graphic_popup_conf2_pane

0xb1a5,	// (0x00047bbd) list_highlight_pane_cp04

0xb8f9,	// (0x00048311) list_single_graphic_popup_conf2_pane_g1

0xb1b6,	// (0x00047bce) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf512,	// (0x0004bf2a) list_single_graphic_popup_conf2_pane_g

0xb903,	// (0x0004831b) list_single_graphic_popup_conf2_pane_t1

0xb911,	// (0x00048329) bg_popup_call2_act_pane_cp01_ParamLimits

0xb911,	// (0x00048329) bg_popup_call2_act_pane_cp01

0xb99b,	// (0x000483b3) call_type_pane_cp05_ParamLimits

0xb99b,	// (0x000483b3) call_type_pane_cp05

0xb9ef,	// (0x00048407) popup_call2_audio_second_window_g1_ParamLimits

0xb9ef,	// (0x00048407) popup_call2_audio_second_window_g1

0xba43,	// (0x0004845b) popup_call2_audio_second_window_g2_ParamLimits

0xba43,	// (0x0004845b) popup_call2_audio_second_window_g2

0x0002,

0xf517,	// (0x0004bf2f) popup_call2_audio_second_window_g_ParamLimits

0xf517,	// (0x0004bf2f) popup_call2_audio_second_window_g

0xbaa8,	// (0x000484c0) popup_call2_audio_second_window_t1_ParamLimits

0xbaa8,	// (0x000484c0) popup_call2_audio_second_window_t1

0xbb63,	// (0x0004857b) popup_call2_audio_second_window_t2_ParamLimits

0xbb63,	// (0x0004857b) popup_call2_audio_second_window_t2

0xbbb6,	// (0x000485ce) popup_call2_audio_second_window_t3_ParamLimits

0xbbb6,	// (0x000485ce) popup_call2_audio_second_window_t3

0x0003,

0xf51e,	// (0x0004bf36) popup_call2_audio_second_window_t_ParamLimits

0xf51e,	// (0x0004bf36) popup_call2_audio_second_window_t

0xa4fc,	// (0x00046f14) bg_popup_call2_in_pane_cp02

0xa506,	// (0x00046f1e) call_type_pane_cp04

0xa50e,	// (0x00046f26) popup_call2_audio_wait_window_g1

0xa516,	// (0x00046f2e) popup_call2_audio_wait_window_g2

0x0001,

0xf0f9,	// (0x0004bb11) popup_call2_audio_wait_window_g

0xa51e,	// (0x00046f36) popup_call2_audio_wait_window_t3

0xbca9,	// (0x000486c1) bg_popup_call2_act_pane_ParamLimits

0xbca9,	// (0x000486c1) bg_popup_call2_act_pane

0xbd69,	// (0x00048781) call_type_pane_cp03_ParamLimits

0xbd69,	// (0x00048781) call_type_pane_cp03

0xbdcd,	// (0x000487e5) popup_call2_audio_first_window_g1_ParamLimits

0xbdcd,	// (0x000487e5) popup_call2_audio_first_window_g1

0xbe3d,	// (0x00048855) popup_call2_audio_first_window_g2_ParamLimits

0xbe3d,	// (0x00048855) popup_call2_audio_first_window_g2

0xb141,	// (0x00047b59) popup_call2_audio_first_window_g3_ParamLimits

0xb141,	// (0x00047b59) popup_call2_audio_first_window_g3

0x0004,

0xf527,	// (0x0004bf3f) popup_call2_audio_first_window_g_ParamLimits

0xf527,	// (0x0004bf3f) popup_call2_audio_first_window_g

0xbf1b,	// (0x00048933) popup_call2_audio_first_window_t1_ParamLimits

0xbf1b,	// (0x00048933) popup_call2_audio_first_window_t1

0xc01e,	// (0x00048a36) popup_call2_audio_first_window_t4_ParamLimits

0xc01e,	// (0x00048a36) popup_call2_audio_first_window_t4

0xc101,	// (0x00048b19) popup_call2_audio_first_window_t5_ParamLimits

0xc101,	// (0x00048b19) popup_call2_audio_first_window_t5

0x0003,

0xf532,	// (0x0004bf4a) popup_call2_audio_first_window_t_ParamLimits

0xf532,	// (0x0004bf4a) popup_call2_audio_first_window_t

0xa765,	// (0x0004717d) bg_popup_call2_act_pane_g1

0xc7ae,	// (0x000491c6) popup_cale_lunar_info_window_t1

0xc7bc,	// (0x000491d4) popup_cale_lunar_info_window_t2

0xc7ca,	// (0x000491e2) popup_cale_lunar_info_window_t3

0xa4fc,	// (0x00046f14) bg_popup_call2_bubble_pane

0xc202,	// (0x00048c1a) bg_popup_call2_in_pane_cp01_ParamLimits

0xc202,	// (0x00048c1a) bg_popup_call2_in_pane_cp01

0xa1d8,	// (0x00046bf0) call_type_pane_cp02

0xc24a,	// (0x00048c62) popup_call2_audio_out_window_g1_ParamLimits

0xc24a,	// (0x00048c62) popup_call2_audio_out_window_g1

0xc276,	// (0x00048c8e) popup_call2_audio_out_window_g2_ParamLimits

0xc276,	// (0x00048c8e) popup_call2_audio_out_window_g2

0xc29e,	// (0x00048cb6) popup_call2_audio_out_window_g3_ParamLimits

0xc29e,	// (0x00048cb6) popup_call2_audio_out_window_g3

0x0003,

0xf53b,	// (0x0004bf53) popup_call2_audio_out_window_g_ParamLimits

0xf53b,	// (0x0004bf53) popup_call2_audio_out_window_g

0xc2d9,	// (0x00048cf1) popup_call2_audio_out_window_t1_ParamLimits

0xc2d9,	// (0x00048cf1) popup_call2_audio_out_window_t1

0xc338,	// (0x00048d50) popup_call2_audio_out_window_t2_ParamLimits

0xc338,	// (0x00048d50) popup_call2_audio_out_window_t2

0xc38c,	// (0x00048da4) popup_call2_audio_out_window_t3_ParamLimits

0xc38c,	// (0x00048da4) popup_call2_audio_out_window_t3

0xc3a2,	// (0x00048dba) popup_call2_audio_out_window_t4_ParamLimits

0xc3a2,	// (0x00048dba) popup_call2_audio_out_window_t4

0xc3b8,	// (0x00048dd0) popup_call2_audio_out_window_t5_ParamLimits

0xc3b8,	// (0x00048dd0) popup_call2_audio_out_window_t5

0x0005,

0xf544,	// (0x0004bf5c) popup_call2_audio_out_window_t_ParamLimits

0xf544,	// (0x0004bf5c) popup_call2_audio_out_window_t

0xc41c,	// (0x00048e34) bg_popup_call2_in_pane_ParamLimits

0xc41c,	// (0x00048e34) bg_popup_call2_in_pane

0xc478,	// (0x00048e90) popup_call2_audio_in_window_g1_ParamLimits

0xc478,	// (0x00048e90) popup_call2_audio_in_window_g1

0xc4b0,	// (0x00048ec8) popup_call2_audio_in_window_g2_ParamLimits

0xc4b0,	// (0x00048ec8) popup_call2_audio_in_window_g2

0xc4e8,	// (0x00048f00) popup_call2_audio_in_window_g3_ParamLimits

0xc4e8,	// (0x00048f00) popup_call2_audio_in_window_g3

0x0003,

0xf551,	// (0x0004bf69) popup_call2_audio_in_window_g_ParamLimits

0xf551,	// (0x0004bf69) popup_call2_audio_in_window_g

0xc540,	// (0x00048f58) popup_call2_audio_in_window_t1_ParamLimits

0xc540,	// (0x00048f58) popup_call2_audio_in_window_t1

0xc5c0,	// (0x00048fd8) popup_call2_audio_in_window_t2_ParamLimits

0xc5c0,	// (0x00048fd8) popup_call2_audio_in_window_t2

0xc640,	// (0x00049058) popup_call2_audio_in_window_t3_ParamLimits

0xc640,	// (0x00049058) popup_call2_audio_in_window_t3

0xc65a,	// (0x00049072) popup_call2_audio_in_window_t4_ParamLimits

0xc65a,	// (0x00049072) popup_call2_audio_in_window_t4

0xc66c,	// (0x00049084) popup_call2_audio_in_window_t5_ParamLimits

0xc66c,	// (0x00049084) popup_call2_audio_in_window_t5

0xc681,	// (0x00049099) popup_call2_audio_in_window_t6_ParamLimits

0xc681,	// (0x00049099) popup_call2_audio_in_window_t6

0x0005,

0xf55a,	// (0x0004bf72) popup_call2_audio_in_window_t_ParamLimits

0xf55a,	// (0x0004bf72) popup_call2_audio_in_window_t

0xa765,	// (0x0004717d) bg_popup_call2_in_pane_g1

0xc7d8,	// (0x000491f0) popup_cale_lunar_info_window_t4

0x0003,

0xf5d5,	// (0x0004bfed) popup_cale_lunar_info_window_t

0xa76d,	// (0x00047185) bg_popup_call2_rect_pane_ParamLimits

0xa76d,	// (0x00047185) bg_popup_call2_rect_pane

0xa4fc,	// (0x00046f14) call2_cli_visual_graphic_pane

0xa4fc,	// (0x00046f14) call2_cli_visual_text_pane

0x56f9,	// (0x00042111) smil_status_volume_pane_g3

0x0002,

0xa893,	// (0x000472ab) call2_cli_visual_graphic_pane_g1

0xa893,	// (0x000472ab) call2_cli_visual_graphic_pane_g2

0xa893,	// (0x000472ab) call2_cli_visual_graphic_pane_g3

0x0002,

0xf567,	// (0x0004bf7f) call2_cli_visual_graphic_pane_g

0xc696,	// (0x000490ae) bg_popup_call2_rect_pane_g1

0xa931,	// (0x00047349) bg_popup_call2_rect_pane_g2

0xc69e,	// (0x000490b6) bg_popup_call2_rect_pane_g3

0xc6a6,	// (0x000490be) bg_popup_call2_rect_pane_g4

0xc6ae,	// (0x000490c6) bg_popup_call2_rect_pane_g5

0xc6b6,	// (0x000490ce) bg_popup_call2_rect_pane_g6

0xc6be,	// (0x000490d6) bg_popup_call2_rect_pane_g7

0xc6c6,	// (0x000490de) bg_popup_call2_rect_pane_g8

0xc6ce,	// (0x000490e6) bg_popup_call2_rect_pane_g9

0x0008,

0xf56e,	// (0x0004bf86) bg_popup_call2_rect_pane_g

0xc6d6,	// (0x000490ee) bg_popup_call2_bubble_pane_g1

0xc6de,	// (0x000490f6) bg_popup_call2_bubble_pane_g2

0xc6e6,	// (0x000490fe) bg_popup_call2_bubble_pane_g3

0xc6ee,	// (0x00049106) bg_popup_call2_bubble_pane_g4

0xc6f6,	// (0x0004910e) bg_popup_call2_bubble_pane_g5

0xc6fe,	// (0x00049116) bg_popup_call2_bubble_pane_g6

0xc706,	// (0x0004911e) bg_popup_call2_bubble_pane_g7

0xc70e,	// (0x00049126) bg_popup_call2_bubble_pane_g8

0xc716,	// (0x0004912e) bg_popup_call2_bubble_pane_g9

0x0008,

0xf581,	// (0x0004bf99) bg_popup_call2_bubble_pane_g

0x2b1a,	// (0x0003f532) aid_cale_week_size_cell_pane

0x309d,	// (0x0003fab5) aid_cams_cif_uncrop_pane_ParamLimits

0x309d,	// (0x0003fab5) aid_cams_cif_uncrop_pane

0x31f8,	// (0x0003fc10) aid_cams_size_cell_ParamLimits

0x31f8,	// (0x0003fc10) aid_cams_size_cell

0x3204,	// (0x0003fc1c) grid_cams_pane_ParamLimits

0x3212,	// (0x0003fc2a) linegrid_cams_pane_ParamLimits

0x32e9,	// (0x0003fd01) call_video_pane_t1

0x330a,	// (0x0003fd22) call_video_pane_t2

0x0001,

0xf26e,	// (0x0004bc86) call_video_pane_t

0x3858,	// (0x00040270) aid_cale_month_size_cell_pane_ParamLimits

0x3858,	// (0x00040270) aid_cale_month_size_cell_pane

0xf61e,	// (0x0004c036) smil_status_volume_pane_g

0x5706,	// (0x0004211e) volume_smil_pane_ParamLimits

0x228d,	// (0x0003eca5) aid_popup2_width_pane

0x2a14,	// (0x0003f42c) cell_qdial_pane_g4_ParamLimits

0x2a14,	// (0x0003f42c) cell_qdial_pane_g4

0x478d,	// (0x000411a5) aid_blid_cardinal_pane_ParamLimits

0x479d,	// (0x000411b5) aid_blid_destination_pane_ParamLimits

0x479d,	// (0x000411b5) aid_blid_destination_pane

0xa76d,	// (0x00047185) bg_popup_call_poc_act_pane_ParamLimits

0xa76d,	// (0x00047185) bg_popup_call_poc_act_pane

0xa76d,	// (0x00047185) bg_popup_call_poc_inact_pane_ParamLimits

0xa76d,	// (0x00047185) bg_popup_call_poc_inact_pane

0xc71e,	// (0x00049136) bg_popup_call_poc_act_pane_g1

0xc726,	// (0x0004913e) bg_popup_call_poc_act_pane_g2

0xc72e,	// (0x00049146) bg_popup_call_poc_act_pane_g3

0xc6ee,	// (0x00049106) bg_popup_call_poc_act_pane_g4

0xc6f6,	// (0x0004910e) bg_popup_call_poc_act_pane_g5

0xc736,	// (0x0004914e) bg_popup_call_poc_act_pane_g6

0xc706,	// (0x0004911e) bg_popup_call_poc_act_pane_g7

0xc73e,	// (0x00049156) bg_popup_call_poc_act_pane_g8

0xa4fc,	// (0x00046f14) main_usb_pane

0x54f6,	// (0x00041f0e) popup_cale_lunar_info_window

0x3627,	// (0x0004003f) im_reading_pane_t1_ParamLimits

0xab16,	// (0x0004752e) list_im_pane_ParamLimits

0xab27,	// (0x0004753f) scroll_pane_cp07_ParamLimits

0xa4fc,	// (0x00046f14) grid_highlight_pane_cp012

0xa76d,	// (0x00047185) mup_scale_pane_ParamLimits

0xb141,	// (0x00047b59) main_usb_pane_g1_ParamLimits

0xb141,	// (0x00047b59) main_usb_pane_g1

0x5265,	// (0x00041c7d) main_usb_pane_g2_ParamLimits

0x5265,	// (0x00041c7d) main_usb_pane_g2

0x0001,

0xf5be,	// (0x0004bfd6) main_usb_pane_g_ParamLimits

0xf5be,	// (0x0004bfd6) main_usb_pane_g

0x5271,	// (0x00041c89) main_usb_pane_t1_ParamLimits

0x5271,	// (0x00041c89) main_usb_pane_t1

0x5283,	// (0x00041c9b) main_usb_pane_t2_ParamLimits

0x5283,	// (0x00041c9b) main_usb_pane_t2

0x5295,	// (0x00041cad) main_usb_pane_t3_ParamLimits

0x5295,	// (0x00041cad) main_usb_pane_t3

0x52a7,	// (0x00041cbf) main_usb_pane_t4_ParamLimits

0x52a7,	// (0x00041cbf) main_usb_pane_t4

0x52b9,	// (0x00041cd1) main_usb_pane_t5_ParamLimits

0x52b9,	// (0x00041cd1) main_usb_pane_t5

0x52cb,	// (0x00041ce3) main_usb_pane_t6_ParamLimits

0x52cb,	// (0x00041ce3) main_usb_pane_t6

0x0005,

0xf5c3,	// (0x0004bfdb) main_usb_pane_t_ParamLimits

0x4733,	// (0x0004114b) aid_text_placing

0x473f,	// (0x00041157) main_location2_pane_t1_ParamLimits

0x4753,	// (0x0004116b) main_location2_pane_t2_ParamLimits

0x4767,	// (0x0004117f) main_location2_pane_t3_ParamLimits

0x477b,	// (0x00041193) main_location2_pane_t4_ParamLimits

0x477b,	// (0x00041193) main_location2_pane_t4

0xf3cf,	// (0x0004bde7) main_location2_pane_t_ParamLimits

0xa7a9,	// (0x000471c1) find_pinb_pane_g2_ParamLimits

0xa7a9,	// (0x000471c1) find_pinb_pane_g2

0x0001,

0xf11f,	// (0x0004bb37) find_pinb_pane_g_ParamLimits

0xf11f,	// (0x0004bb37) find_pinb_pane_g

0xa7b5,	// (0x000471cd) find_pinb_pane_t1_ParamLimits

0xa7c7,	// (0x000471df) find_pinb_pane_t2_ParamLimits

0xf124,	// (0x0004bb3c) find_pinb_pane_t_ParamLimits

0xa4fc,	// (0x00046f14) main_call3_pane

0x3e1b,	// (0x00040833) cale_month_day_heading_pane_t1_ParamLimits

0x3ea1,	// (0x000408b9) cale_month_day_heading_pane_t2_ParamLimits

0x3f1a,	// (0x00040932) cale_month_day_heading_pane_t3_ParamLimits

0x3f93,	// (0x000409ab) cale_month_day_heading_pane_t4_ParamLimits

0x400c,	// (0x00040a24) cale_month_day_heading_pane_t5_ParamLimits

0x4085,	// (0x00040a9d) cale_month_day_heading_pane_t6_ParamLimits

0x40fe,	// (0x00040b16) cale_month_day_heading_pane_t7_ParamLimits

0xf2a6,	// (0x0004bcbe) cale_month_day_heading_pane_t_ParamLimits

0xad9d,	// (0x000477b5) smil_status_volume_pane

0x4e24,	// (0x0004183c) postcard_address_pane_ParamLimits

0x4e24,	// (0x0004183c) postcard_address_pane

0x4e30,	// (0x00041848) postcard_message_pane_ParamLimits

0x4e30,	// (0x00041848) postcard_message_pane

0x522a,	// (0x00041c42) call2_cli_visual_pane_t1_ParamLimits

0x522a,	// (0x00041c42) call2_cli_visual_pane_t1

0x585d,	// (0x00042275) postcard_message_pane_t1_ParamLimits

0x585d,	// (0x00042275) postcard_message_pane_t1

0x5846,	// (0x0004225e) postcard_address_pane_t1_ParamLimits

0x5846,	// (0x0004225e) postcard_address_pane_t1

0x5837,	// (0x0004224f) popup_call3_audio_in_window_ParamLimits

0x5837,	// (0x0004224f) popup_call3_audio_in_window

0x571b,	// (0x00042133) bg_popup_call3_in_pane_ParamLimits

0x571b,	// (0x00042133) bg_popup_call3_in_pane

0x577d,	// (0x00042195) popup_call3_audio_in_window_g1_ParamLimits

0x577d,	// (0x00042195) popup_call3_audio_in_window_g1

0x5795,	// (0x000421ad) popup_call3_audio_in_window_g2_ParamLimits

0x5795,	// (0x000421ad) popup_call3_audio_in_window_g2

0x57ad,	// (0x000421c5) popup_call3_audio_in_window_g3_ParamLimits

0x57ad,	// (0x000421c5) popup_call3_audio_in_window_g3

0x0003,

0xf625,	// (0x0004c03d) popup_call3_audio_in_window_g_ParamLimits

0xf625,	// (0x0004c03d) popup_call3_audio_in_window_g

0x57d5,	// (0x000421ed) popup_call3_audio_in_window_t1_ParamLimits

0x57d5,	// (0x000421ed) popup_call3_audio_in_window_t1

0x57fd,	// (0x00042215) popup_call3_audio_in_window_t2_ParamLimits

0x57fd,	// (0x00042215) popup_call3_audio_in_window_t2

0x5825,	// (0x0004223d) popup_call3_audio_in_window_t3_ParamLimits

0x5825,	// (0x0004223d) popup_call3_audio_in_window_t3

0x0002,

0xf62e,	// (0x0004c046) popup_call3_audio_in_window_t_ParamLimits

0xf62e,	// (0x0004c046) popup_call3_audio_in_window_t

0xaa15,	// (0x0004742d) bg_popup_call3_rect_pane

0xc696,	// (0x000490ae) bg_popup_call3_rect_pane_g1

0xa931,	// (0x00047349) bg_popup_call3_rect_pane_g2

0xc69e,	// (0x000490b6) bg_popup_call3_rect_pane_g3

0xc6a6,	// (0x000490be) bg_popup_call3_rect_pane_g4

0xc6ae,	// (0x000490c6) bg_popup_call3_rect_pane_g5

0xc6b6,	// (0x000490ce) bg_popup_call3_rect_pane_g6

0xc6be,	// (0x000490d6) bg_popup_call3_rect_pane_g7

0x4aa3,	// (0x000414bb) mup_visualizer_osc_pane

0xb535,	// (0x00047f4d) mup_visualizer_spec_pane

0x573b,	// (0x00042153) call3_video_qcif_pane_ParamLimits

0x573b,	// (0x00042153) call3_video_qcif_pane

0x574d,	// (0x00042165) call3_video_qcif_uncrop_pane_ParamLimits

0x574d,	// (0x00042165) call3_video_qcif_uncrop_pane

0x575b,	// (0x00042173) call3_video_subqcif_pane_ParamLimits

0x575b,	// (0x00042173) call3_video_subqcif_pane

0x576d,	// (0x00042185) call3_video_subqcif_uncrop_pane_ParamLimits

0x576d,	// (0x00042185) call3_video_subqcif_uncrop_pane

0x57c5,	// (0x000421dd) popup_call3_audio_in_window_g4_ParamLimits

0x57c5,	// (0x000421dd) popup_call3_audio_in_window_g4

0x56e6,	// (0x000420fe) mup_spec_half_pane

0x56ef,	// (0x00042107) mup_spec_half_pane_cp

0xc93b,	// (0x00049353) mup_osc_middle_pane

0xc944,	// (0x0004935c) mup_visualizer_osc_pane_g1

0x56c7,	// (0x000420df) mup_spec_bar_pane_ParamLimits

0x56c7,	// (0x000420df) mup_spec_bar_pane

0xc928,	// (0x00049340) mup_spec_bar_pane_g1

0xc932,	// (0x0004934a) mup_spec_bar_pane_g2

0x0001,

0xf619,	// (0x0004c031) mup_spec_bar_pane_g

0x2b1a,	// (0x0003f532) aid_cale_week_size_cell_pane_ParamLimits

0x2b2f,	// (0x0003f547) bg_cale_heading_pane_ParamLimits

0xa96e,	// (0x00047386) bg_cale_pane_cp01_ParamLimits

0x2b51,	// (0x0003f569) cale_week_corner_pane_ParamLimits

0x2b6b,	// (0x0003f583) cale_week_day_heading_pane_ParamLimits

0x2b8d,	// (0x0003f5a5) cale_week_scroll_pane_g1_ParamLimits

0x2baa,	// (0x0003f5c2) cale_week_scroll_pane_g2_ParamLimits

0x2bbd,	// (0x0003f5d5) cale_week_scroll_pane_g3_ParamLimits

0x2bd0,	// (0x0003f5e8) cale_week_scroll_pane_g4_ParamLimits

0x2be3,	// (0x0003f5fb) cale_week_scroll_pane_g5_ParamLimits

0x2bf6,	// (0x0003f60e) cale_week_scroll_pane_g6_ParamLimits

0x2c09,	// (0x0003f621) cale_week_scroll_pane_g7_ParamLimits

0x2c1e,	// (0x0003f636) cale_week_scroll_pane_g8_ParamLimits

0x2c33,	// (0x0003f64b) cale_week_scroll_pane_g9_ParamLimits

0x2c46,	// (0x0003f65e) cale_week_scroll_pane_g10_ParamLimits

0x2c59,	// (0x0003f671) cale_week_scroll_pane_g11_ParamLimits

0x2c6c,	// (0x0003f684) cale_week_scroll_pane_g12_ParamLimits

0x2c83,	// (0x0003f69b) cale_week_scroll_pane_g13_ParamLimits

0x2c9e,	// (0x0003f6b6) cale_week_scroll_pane_g14_ParamLimits

0x2cb9,	// (0x0003f6d1) cale_week_scroll_pane_g15_ParamLimits

0xf1b0,	// (0x0004bbc8) cale_week_scroll_pane_g_ParamLimits

0x2ce9,	// (0x0003f701) cale_week_time_pane_ParamLimits

0x2cfe,	// (0x0003f716) grid_cale_week_pane_ParamLimits

0xa98b,	// (0x000473a3) listscroll_cale_week_pane_t1

0xa99d,	// (0x000473b5) scroll_pane_cp08_ParamLimits

0x38cc,	// (0x000402e4) cale_month_corner_pane_ParamLimits

0xad73,	// (0x0004778b) cale_month_pane_t1

0x3d9a,	// (0x000407b2) cale_month_week_pane_ParamLimits

0xb141,	// (0x00047b59) popup_call_status_window_g1_ParamLimits

0x453c,	// (0x00040f54) popup_call_status_window_g2_ParamLimits

0x4548,	// (0x00040f60) popup_call_status_window_g3_ParamLimits

0xf356,	// (0x0004bd6e) popup_call_status_window_g_ParamLimits

0xb117,	// (0x00047b2f) aid_call2_pane

0x1121,	// (0x0003db39) msg_header_pane_g1

0x4e24,	// (0x0004183c) postcard_address2_pane_ParamLimits

0x4e24,	// (0x0004183c) postcard_address2_pane

0x4e30,	// (0x00041848) postcard_message2_pane_ParamLimits

0x4e30,	// (0x00041848) postcard_message2_pane

0x565e,	// (0x00042076) message2_row_pane_ParamLimits

0x565e,	// (0x00042076) message2_row_pane

0x5679,	// (0x00042091) address2_row_pane_ParamLimits

0x5679,	// (0x00042091) address2_row_pane

0xc8f6,	// (0x0004930e) postcard_message2_row_pane_g1

0xc8fe,	// (0x00049316) postcard_message2_row_pane_t1

0xc8f6,	// (0x0004930e) address2_row_pane_g1

0xc8fe,	// (0x00049316) address2_row_pane_t1

0x2f83,	// (0x0003f99b) aid_size_cell_vorec

0xa4fc,	// (0x00046f14) main_rss_pane

0x568c,	// (0x000420a4) rss_list_single_pane_ParamLimits

0x568c,	// (0x000420a4) rss_list_single_pane

0xc90c,	// (0x00049324) rss_list_single_pane_t1

0xc91a,	// (0x00049332) rss_list_single_pane_t2

0x0001,

0xf614,	// (0x0004c02c) rss_list_single_pane_t

0xa4fc,	// (0x00046f14) main_camera2_pane

0xa4fc,	// (0x00046f14) main_video2_pane

0x58c1,	// (0x000422d9) cams_zoom_pane_cp2_ParamLimits

0x58c1,	// (0x000422d9) cams_zoom_pane_cp2

0x58cd,	// (0x000422e5) image2_vga_pane_ParamLimits

0x58cd,	// (0x000422e5) image2_vga_pane

0x58dc,	// (0x000422f4) main_camera2_pane_g1_ParamLimits

0x58dc,	// (0x000422f4) main_camera2_pane_g1

0x58e8,	// (0x00042300) main_camera2_pane_g2_ParamLimits

0x58e8,	// (0x00042300) main_camera2_pane_g2

0x58f4,	// (0x0004230c) main_camera2_pane_g3_ParamLimits

0x58f4,	// (0x0004230c) main_camera2_pane_g3

0x5900,	// (0x00042318) main_camera2_pane_g4_ParamLimits

0x5900,	// (0x00042318) main_camera2_pane_g4

0x590c,	// (0x00042324) main_camera2_pane_g5_ParamLimits

0x590c,	// (0x00042324) main_camera2_pane_g5

0x5918,	// (0x00042330) main_camera2_pane_g6_ParamLimits

0x5918,	// (0x00042330) main_camera2_pane_g6

0x5924,	// (0x0004233c) main_camera2_pane_g7_ParamLimits

0x5924,	// (0x0004233c) main_camera2_pane_g7

0x5930,	// (0x00042348) main_camera2_pane_g8_ParamLimits

0x5930,	// (0x00042348) main_camera2_pane_g8

0x0008,

0xf635,	// (0x0004c04d) main_camera2_pane_g_ParamLimits

0xf635,	// (0x0004c04d) main_camera2_pane_g

0x5948,	// (0x00042360) main_camera2_pane_t1_ParamLimits

0x5948,	// (0x00042360) main_camera2_pane_t1

0x595a,	// (0x00042372) main_camera2_pane_t2_ParamLimits

0x595a,	// (0x00042372) main_camera2_pane_t2

0x596c,	// (0x00042384) main_camera2_pane_t3_ParamLimits

0x596c,	// (0x00042384) main_camera2_pane_t3

0x597e,	// (0x00042396) main_camera2_pane_t4_ParamLimits

0x597e,	// (0x00042396) main_camera2_pane_t4

0x0006,

0xf648,	// (0x0004c060) main_camera2_pane_t_ParamLimits

0xf648,	// (0x0004c060) main_camera2_pane_t

0x59e0,	// (0x000423f8) cams_zoom_pane_cp4_ParamLimits

0x59e0,	// (0x000423f8) cams_zoom_pane_cp4

0x59f0,	// (0x00042408) image2_cif_pane_ParamLimits

0x59f0,	// (0x00042408) image2_cif_pane

0x5a05,	// (0x0004241d) image2_subqcif_pane_ParamLimits

0x5a05,	// (0x0004241d) image2_subqcif_pane

0x5a14,	// (0x0004242c) main_video2_pane_g1_ParamLimits

0x5a14,	// (0x0004242c) main_video2_pane_g1

0x5a26,	// (0x0004243e) main_video2_pane_g2_ParamLimits

0x5a26,	// (0x0004243e) main_video2_pane_g2

0x5a36,	// (0x0004244e) main_video2_pane_g3_ParamLimits

0x5a36,	// (0x0004244e) main_video2_pane_g3

0x5a46,	// (0x0004245e) main_video2_pane_g4_ParamLimits

0x5a46,	// (0x0004245e) main_video2_pane_g4

0x5a56,	// (0x0004246e) main_video2_pane_g5_ParamLimits

0x5a56,	// (0x0004246e) main_video2_pane_g5

0x5a66,	// (0x0004247e) main_video2_pane_g6_ParamLimits

0x5a66,	// (0x0004247e) main_video2_pane_g6

0x0005,

0xf657,	// (0x0004c06f) main_video2_pane_g_ParamLimits

0xf657,	// (0x0004c06f) main_video2_pane_g

0x5a78,	// (0x00042490) main_video2_pane_t1_ParamLimits

0x5a78,	// (0x00042490) main_video2_pane_t1

0x5a92,	// (0x000424aa) main_video2_pane_t2_ParamLimits

0x5a92,	// (0x000424aa) main_video2_pane_t2

0x5ab8,	// (0x000424d0) main_video2_pane_t3_ParamLimits

0x5ab8,	// (0x000424d0) main_video2_pane_t3

0x0002,

0xf664,	// (0x0004c07c) main_video2_pane_t_ParamLimits

0xf664,	// (0x0004c07c) main_video2_pane_t

0x5382,	// (0x00041d9a) call_muted_g2

0x0001,

0xf606,	// (0x0004c01e) call_muted_g

0xa4fc,	// (0x00046f14) main_mup2_pane

0xc97b,	// (0x00049393) main_mup2_pane_g1_ParamLimits

0xc97b,	// (0x00049393) main_mup2_pane_g1

0x5ade,	// (0x000424f6) main_mup2_pane_g2_ParamLimits

0x5ade,	// (0x000424f6) main_mup2_pane_g2

0x5d60,	// (0x00042778) main_mup_pane_g13_cp1

0x5d68,	// (0x00042780) mup_volume_pane_cp1

0x5afe,	// (0x00042516) main_mup2_pane_g4_ParamLimits

0x5afe,	// (0x00042516) main_mup2_pane_g4

0x5b13,	// (0x0004252b) main_mup2_pane_g5_ParamLimits

0x5b13,	// (0x0004252b) main_mup2_pane_g5

0x5b28,	// (0x00042540) main_mup2_pane_g6_ParamLimits

0x5b28,	// (0x00042540) main_mup2_pane_g6

0x5b3d,	// (0x00042555) main_mup2_pane_g7_ParamLimits

0x5b3d,	// (0x00042555) main_mup2_pane_g7

0x0006,

0xf66b,	// (0x0004c083) main_mup2_pane_g_ParamLimits

0xf66b,	// (0x0004c083) main_mup2_pane_g

0x5b59,	// (0x00042571) main_mup2_pane_t1_ParamLimits

0x5b59,	// (0x00042571) main_mup2_pane_t1

0x5b70,	// (0x00042588) main_mup2_pane_t2_ParamLimits

0x5b70,	// (0x00042588) main_mup2_pane_t2

0x5b87,	// (0x0004259f) main_mup2_pane_t3_ParamLimits

0x5b87,	// (0x0004259f) main_mup2_pane_t3

0x5b9e,	// (0x000425b6) main_mup2_pane_t4_ParamLimits

0x5b9e,	// (0x000425b6) main_mup2_pane_t4

0x5bb8,	// (0x000425d0) main_mup2_pane_t5_ParamLimits

0x5bb8,	// (0x000425d0) main_mup2_pane_t5

0x5bd2,	// (0x000425ea) main_mup2_pane_t6_ParamLimits

0x5bd2,	// (0x000425ea) main_mup2_pane_t6

0x0005,

0xf67a,	// (0x0004c092) main_mup2_pane_t_ParamLimits

0xf67a,	// (0x0004c092) main_mup2_pane_t

0x5c0a,	// (0x00042622) mup2_visualizer_pane_ParamLimits

0x5c0a,	// (0x00042622) mup2_visualizer_pane

0x5c40,	// (0x00042658) mup_progress_pane_cp_ParamLimits

0x5c40,	// (0x00042658) mup_progress_pane_cp

0x5d4b,	// (0x00042763) mup_volume_pane_cp_ParamLimits

0x5d4b,	// (0x00042763) mup_volume_pane_cp

0x5c57,	// (0x0004266f) mup2_visualizer_pane_g1_ParamLimits

0x5c57,	// (0x0004266f) mup2_visualizer_pane_g1

0xc987,	// (0x0004939f) mup2_visualizer_pane_g2_ParamLimits

0xc987,	// (0x0004939f) mup2_visualizer_pane_g2

0x5c6c,	// (0x00042684) mup2_visualizer_pane_g3_ParamLimits

0x5c6c,	// (0x00042684) mup2_visualizer_pane_g3

0x0002,

0xf687,	// (0x0004c09f) mup2_visualizer_pane_g_ParamLimits

0xf687,	// (0x0004c09f) mup2_visualizer_pane_g

0xb768,	// (0x00048180) aid_size_cell_fmradio

0x5498,	// (0x00041eb0) aid_height_parent_landcape

0xaba5,	// (0x000475bd) wml_content_pane_cp

0xabad,	// (0x000475c5) wml_tabs_pane

0xabb6,	// (0x000475ce) popup_wml_miniature_window

0xabbe,	// (0x000475d6) scroll_pane_cp021

0xabd2,	// (0x000475ea) wml_content_pane_comp8

0xa4fc,	// (0x00046f14) bg_popup_sub_pane_cp05

0xc9a5,	// (0x000493bd) popup_wml_miniature_window_g1

0xc9ad,	// (0x000493c5) wml_miniature_view_pane

0x5c7a,	// (0x00042692) aid_size_wml_view

0x5c82,	// (0x0004269a) wml_miniature_view_pane_g1

0x5c8b,	// (0x000426a3) wml_miniature_view_pane_g2

0x5c94,	// (0x000426ac) wml_miniature_view_pane_g3

0x5c9c,	// (0x000426b4) wml_miniature_view_pane_g4

0x5ca4,	// (0x000426bc) wml_miniature_view_pane_g5

0x5cac,	// (0x000426c4) wml_miniature_view_pane_g6

0x5cb4,	// (0x000426cc) wml_miniature_view_pane_g7

0x5cbc,	// (0x000426d4) wml_miniature_view_pane_g8

0x0007,

0xf68e,	// (0x0004c0a6) wml_miniature_view_pane_g

0xc97b,	// (0x00049393) background_graphic_ParamLimits

0xc97b,	// (0x00049393) background_graphic

0xc9b5,	// (0x000493cd) wml_tabs_2_pane

0xc9be,	// (0x000493d6) wml_tabs_3_pane_ParamLimits

0xc9be,	// (0x000493d6) wml_tabs_3_pane

0xc9d0,	// (0x000493e8) wml_tabs_4_pane_ParamLimits

0xc9d0,	// (0x000493e8) wml_tabs_4_pane

0xc9e6,	// (0x000493fe) wml_tabs_5_pane_ParamLimits

0xc9e6,	// (0x000493fe) wml_tabs_5_pane

0xca00,	// (0x00049418) wml_tabs_pane_g2_ParamLimits

0xca00,	// (0x00049418) wml_tabs_pane_g2

0xca14,	// (0x0004942c) wml_tabs_pane_g3_ParamLimits

0xca14,	// (0x0004942c) wml_tabs_pane_g3

0x5cc4,	// (0x000426dc) wml_tabs_2_active_pane_ParamLimits

0x5cc4,	// (0x000426dc) wml_tabs_2_active_pane

0x5cd4,	// (0x000426ec) wml_tabs_2_passive_pane_ParamLimits

0x5cd4,	// (0x000426ec) wml_tabs_2_passive_pane

0x5ce4,	// (0x000426fc) wml_tabs_3_active_pane_cp_ParamLimits

0x5ce4,	// (0x000426fc) wml_tabs_3_active_pane_cp

0x5cf5,	// (0x0004270d) wml_tabs_3_passive_pane_ParamLimits

0x5cf5,	// (0x0004270d) wml_tabs_3_passive_pane

0x5d06,	// (0x0004271e) wml_tabs_3_passive_pane_cp_ParamLimits

0x5d06,	// (0x0004271e) wml_tabs_3_passive_pane_cp

0x5d17,	// (0x0004272f) tabs_4_active_pane

0x5d1f,	// (0x00042737) tabs_4_passive_pane

0x5d27,	// (0x0004273f) tabs_4_passive_pane_cp

0x5d2f,	// (0x00042747) tabs_4_passive_pane_cp2

0x525d,	// (0x00041c75) aid_height_text

0x4a6c,	// (0x00041484) mup_volume_cont_pane_ParamLimits

0x4a6c,	// (0x00041484) mup_volume_cont_pane

0x265f,	// (0x0003f077) aid_size_cell_pinb

0x2669,	// (0x0003f081) aid_size_list_pinb

0x5c29,	// (0x00042641) mup2_volume_cont_pane_ParamLimits

0x5c29,	// (0x00042641) mup2_volume_cont_pane

0x5d37,	// (0x0004274f) mup2_volume_cont_pane_g1_ParamLimits

0x5d37,	// (0x0004274f) mup2_volume_cont_pane_g1

0x2299,	// (0x0003ecb1) aid_size_cell_touch_ParamLimits

0x2299,	// (0x0003ecb1) aid_size_cell_touch

0x2542,	// (0x0003ef5a) touch_pane_ParamLimits

0x2542,	// (0x0003ef5a) touch_pane

0xa0df,	// (0x00046af7) main_rss2_pane

0xca31,	// (0x00049449) listscroll_rss2_pane

0xca3a,	// (0x00049452) rss2_navigation_pane

0xca42,	// (0x0004945a) list_rss2_pane

0xb24a,	// (0x00047c62) scroll_pane_cp22

0xca4a,	// (0x00049462) rss2_navigation_pane_g1

0xca53,	// (0x0004946b) rss2_navigation_pane_g2

0xca5b,	// (0x00049473) rss2_navigation_pane_g3

0x0002,

0xf69f,	// (0x0004c0b7) rss2_navigation_pane_g

0xca63,	// (0x0004947b) rss2_navigation_pane_t1

0x5d70,	// (0x00042788) rss2_list_single_pane_ParamLimits

0x5d70,	// (0x00042788) rss2_list_single_pane

0xca71,	// (0x00049489) rss2_list_single_pane_t2

0xca7f,	// (0x00049497) rss2_list_single_pane_t3_ParamLimits

0xca7f,	// (0x00049497) rss2_list_single_pane_t3

0xca9c,	// (0x000494b4) rss2_list_single_pane_t4

0x43a0,	// (0x00040db8) smil_status_pane_g1

0xabed,	// (0x00047605) main_image2_pane_ParamLimits

0xabed,	// (0x00047605) main_image2_pane

0x593c,	// (0x00042354) main_camera2_pane_g9_ParamLimits

0x593c,	// (0x00042354) main_camera2_pane_g9

0x5990,	// (0x000423a8) main_camera2_pane_t5_ParamLimits

0x5990,	// (0x000423a8) main_camera2_pane_t5

0x59a2,	// (0x000423ba) main_camera2_pane_t6_ParamLimits

0x59a2,	// (0x000423ba) main_camera2_pane_t6

0x5da4,	// (0x000427bc) main_image2_pane_g1_ParamLimits

0x5da4,	// (0x000427bc) main_image2_pane_g1

0x4ff7,	// (0x00041a0f) smil2_video_pane_ParamLimits

0x4ff7,	// (0x00041a0f) smil2_video_pane

0x0e69,	// (0x0003d881) aid_zoom_text_primary_cp

0x24eb,	// (0x0003ef03) popup_preview_fixed_window

0xab0e,	// (0x00047526) im_reading_pane_g1

0x5886,	// (0x0004229e) cams2_bc_adjust_pane_cp_ParamLimits

0x5886,	// (0x0004229e) cams2_bc_adjust_pane_cp

0x59d2,	// (0x000423ea) cams2_bc_adjust_pane_ParamLimits

0x59d2,	// (0x000423ea) cams2_bc_adjust_pane

0x5db0,	// (0x000427c8) cams2_bc_adjust_pane_g1

0x5db8,	// (0x000427d0) cams2_slider_pane

0x5dc1,	// (0x000427d9) cams2_slider_pane_g1

0x5dca,	// (0x000427e2) cams2_slider_pane_g2

0x0006,

0xf6a6,	// (0x0004c0be) cams2_slider_pane_g

0x2769,	// (0x0003f181) calc_display_pane_ParamLimits

0x2787,	// (0x0003f19f) calc_paper_pane_ParamLimits

0x27a3,	// (0x0003f1bb) grid_calc_pane_ParamLimits

0x45a6,	// (0x00040fbe) popup_clock_digital_window_t1_ParamLimits

0xb705,	// (0x0004811d) main_image_pane_t1

0x274f,	// (0x0003f167) aid_size_cell_calc_ParamLimits

0x274f,	// (0x0003f167) aid_size_cell_calc

0x54d2,	// (0x00041eea) popup_blid_sat_info2_window_ParamLimits

0x54d2,	// (0x00041eea) popup_blid_sat_info2_window

0xcab2,	// (0x000494ca) aid_size_cell_blid

0xcaba,	// (0x000494d2) bg_popup_window_pane_cp07

0xcadd,	// (0x000494f5) grid_popup_blid_pane

0xcae7,	// (0x000494ff) heading_pane_cp05_ParamLimits

0xcae7,	// (0x000494ff) heading_pane_cp05

0xcbb1,	// (0x000495c9) cell_popup_blid_pane_ParamLimits

0xcbb1,	// (0x000495c9) cell_popup_blid_pane

0xcbd5,	// (0x000495ed) cell_popup_blid_pane_g1

0xcbdd,	// (0x000495f5) cell_popup_blid_pane_t1

0x5bef,	// (0x00042607) mup2_indicator_pane_ParamLimits

0x5bef,	// (0x00042607) mup2_indicator_pane

0xaa15,	// (0x0004742d) mup2_visualizer_osc_pane

0xc993,	// (0x000493ab) mup2_visualizer_spec_pane_ParamLimits

0xc993,	// (0x000493ab) mup2_visualizer_spec_pane

0x5de4,	// (0x000427fc) mup2_spec_half_pane

0x5ded,	// (0x00042805) mup2_spec_half_pane_cp

0x5df7,	// (0x0004280f) mup2_spec_bar_pane_ParamLimits

0x5df7,	// (0x0004280f) mup2_spec_bar_pane

0xc928,	// (0x00049340) mup2_spec_bar_pane_g1

0xc932,	// (0x0004934a) mup2_spec_bar_pane_g2

0x0001,

0xf619,	// (0x0004c031) mup2_spec_bar_pane_g

0x5e16,	// (0x0004282e) mup2_osc_middle_pane

0xc944,	// (0x0004935c) mup2_visualizer_osc_pane_g1

0xa109,	// (0x00046b21) popup_number_entry_window_t1_ParamLimits

0xa11c,	// (0x00046b34) popup_number_entry_window_t2_ParamLimits

0xa12e,	// (0x00046b46) popup_number_entry_window_t3_ParamLimits

0x2599,	// (0x0003efb1) popup_number_entry_window_t5_ParamLimits

0x2599,	// (0x0003efb1) popup_number_entry_window_t5

0xf0ca,	// (0x0004bae2) popup_number_entry_window_t_ParamLimits

0xa140,	// (0x00046b58) text_title_cp2_ParamLimits

0x4cec,	// (0x00041704) aid_hotspot_pointer_text2_pane

0x4d86,	// (0x0004179e) main_viewer_pane_g9_ParamLimits

0x4d86,	// (0x0004179e) main_viewer_pane_g9

0xad73,	// (0x0004778b) cale_month_pane_t1_ParamLimits

0xadb0,	// (0x000477c8) bg_cale_pane_ParamLimits

0xadc8,	// (0x000477e0) list_cale_pane_ParamLimits

0xadd9,	// (0x000477f1) listscroll_cale_day_pane_t1

0xadeb,	// (0x00047803) scroll_pane_cp09_ParamLimits

0x4aab,	// (0x000414c3) main_mup_eq_pane_t1_ParamLimits

0x4aab,	// (0x000414c3) main_mup_eq_pane_t1

0x4ac5,	// (0x000414dd) main_mup_eq_pane_t2_ParamLimits

0x4ac5,	// (0x000414dd) main_mup_eq_pane_t2

0x4add,	// (0x000414f5) main_mup_eq_pane_t3_ParamLimits

0x4add,	// (0x000414f5) main_mup_eq_pane_t3

0x4af5,	// (0x0004150d) main_mup_eq_pane_t4_ParamLimits

0x4af5,	// (0x0004150d) main_mup_eq_pane_t4

0x4b0d,	// (0x00041525) main_mup_eq_pane_t5_ParamLimits

0x4b0d,	// (0x00041525) main_mup_eq_pane_t5

0x4b25,	// (0x0004153d) main_mup_eq_pane_t6_ParamLimits

0x4b25,	// (0x0004153d) main_mup_eq_pane_t6

0x4b39,	// (0x00041551) main_mup_eq_pane_t7_ParamLimits

0x4b39,	// (0x00041551) main_mup_eq_pane_t7

0x4b4d,	// (0x00041565) main_mup_eq_pane_t8_ParamLimits

0x4b4d,	// (0x00041565) main_mup_eq_pane_t8

0x4b63,	// (0x0004157b) main_mup_eq_pane_t9_ParamLimits

0x4b63,	// (0x0004157b) main_mup_eq_pane_t9

0x4b7b,	// (0x00041593) main_mup_eq_pane_t10_ParamLimits

0x4b7b,	// (0x00041593) main_mup_eq_pane_t10

0x0009,

0xf455,	// (0x0004be6d) main_mup_eq_pane_t_ParamLimits

0xf455,	// (0x0004be6d) main_mup_eq_pane_t

0x4c38,	// (0x00041650) mup_equalizer_pane_cp5_ParamLimits

0x4c4e,	// (0x00041666) mup_equalizer_pane_cp6_ParamLimits

0x4c66,	// (0x0004167e) mup_equalizer_pane_cp7_ParamLimits

0xa0df,	// (0x00046af7) main_gallery_pane

0xc94d,	// (0x00049365) smil2_volume_pane

0xc955,	// (0x0004936d) smil_status_volume_pane_g1_ParamLimits

0xc968,	// (0x00049380) smil_status_volume_pane_g2_ParamLimits

0x56f9,	// (0x00042111) smil_status_volume_pane_g3_ParamLimits

0xf61e,	// (0x0004c036) smil_status_volume_pane_g_ParamLimits

0xcaba,	// (0x000494d2) bg_popup_window_pane_cp07_ParamLimits

0xcac8,	// (0x000494e0) blid_firmament_pane

0x5e1f,	// (0x00042837) aid_size_cell_gallery_ParamLimits

0x5e1f,	// (0x00042837) aid_size_cell_gallery

0x5e2d,	// (0x00042845) grid_gallery_pane_ParamLimits

0x5e2d,	// (0x00042845) grid_gallery_pane

0x5e3d,	// (0x00042855) cell_gallery_pane_ParamLimits

0x5e3d,	// (0x00042855) cell_gallery_pane

0xcbeb,	// (0x00049603) bg_cell_gallery_focus_pane_ParamLimits

0xcbeb,	// (0x00049603) bg_cell_gallery_focus_pane

0xcbfd,	// (0x00049615) cell_gallery_pane_g1_ParamLimits

0xcbfd,	// (0x00049615) cell_gallery_pane_g1

0x5e8b,	// (0x000428a3) cell_gallery_pane_g2_ParamLimits

0x5e8b,	// (0x000428a3) cell_gallery_pane_g2

0x5e98,	// (0x000428b0) cell_gallery_pane_g3_ParamLimits

0x5e98,	// (0x000428b0) cell_gallery_pane_g3

0xcc09,	// (0x00049621) cell_gallery_pane_g4_ParamLimits

0xcc09,	// (0x00049621) cell_gallery_pane_g4

0x0003,

0xf6cc,	// (0x0004c0e4) cell_gallery_pane_g_ParamLimits

0xf6cc,	// (0x0004c0e4) cell_gallery_pane_g

0xcc15,	// (0x0004962d) bg_cell_gallery_focus_pane_g1

0xcc1d,	// (0x00049635) bg_cell_gallery_focus_pane_g2

0xcc25,	// (0x0004963d) bg_cell_gallery_focus_pane_g3

0xcc2d,	// (0x00049645) bg_cell_gallery_focus_pane_g4

0xcc35,	// (0x0004964d) bg_cell_gallery_focus_pane_g5

0xcc3d,	// (0x00049655) bg_cell_gallery_focus_pane_g6

0xcc45,	// (0x0004965d) bg_cell_gallery_focus_pane_g7

0xcc4d,	// (0x00049665) bg_cell_gallery_focus_pane_g8

0x0007,

0xf6d5,	// (0x0004c0ed) bg_cell_gallery_focus_pane_g

0xcc55,	// (0x0004966d) aid_firma_cardinal

0xcc69,	// (0x00049681) blid_firmament_pane_t1

0xcc80,	// (0x00049698) blid_firmament_pane_t2

0xcc97,	// (0x000496af) blid_firmament_pane_t3

0xccae,	// (0x000496c6) blid_firmament_pane_t4

0x0003,

0xf6e6,	// (0x0004c0fe) blid_firmament_pane_t

0xccc5,	// (0x000496dd) blid_sat_info_pane

0xccd5,	// (0x000496ed) blid_sat_info_pane_g1

0xccd5,	// (0x000496ed) blid_sat_info_pane_g2

0x0001,

0xf6ef,	// (0x0004c107) blid_sat_info_pane_g

0xccdf,	// (0x000496f7) blid_sat_info_pane_t1

0xcced,	// (0x00049705) smil2_volume_content_pane

0xccf6,	// (0x0004970e) smil2_volume_pane_g1

0xccfe,	// (0x00049716) smil2_volume_content_pane_g1

0xcd07,	// (0x0004971f) smil2_volume_content_pane_g2

0xcd10,	// (0x00049728) smil2_volume_content_pane_g3

0xcd19,	// (0x00049731) smil2_volume_content_pane_g4

0xcd22,	// (0x0004973a) smil2_volume_content_pane_g5

0xcd2b,	// (0x00049743) smil2_volume_content_pane_g6

0xcd34,	// (0x0004974c) smil2_volume_content_pane_g7

0xcd3d,	// (0x00049755) smil2_volume_content_pane_g8

0xcd46,	// (0x0004975e) smil2_volume_content_pane_g9

0xcd4f,	// (0x00049767) smil2_volume_content_pane_g10

0x0009,

0xf6f4,	// (0x0004c10c) smil2_volume_content_pane_g

0x2d7f,	// (0x0003f797) cale_week_day_heading_pane_t1_ParamLimits

0x2d9a,	// (0x0003f7b2) cale_week_day_heading_pane_t2_ParamLimits

0x2db5,	// (0x0003f7cd) cale_week_day_heading_pane_t3_ParamLimits

0x2dd0,	// (0x0003f7e8) cale_week_day_heading_pane_t4_ParamLimits

0x2deb,	// (0x0003f803) cale_week_day_heading_pane_t5_ParamLimits

0x2e06,	// (0x0003f81e) cale_week_day_heading_pane_t6_ParamLimits

0x2e21,	// (0x0003f839) cale_week_day_heading_pane_t7_ParamLimits

0xf1d1,	// (0x0004bbe9) cale_week_day_heading_pane_t_ParamLimits

0xa9ba,	// (0x000473d2) bg_cale_side_pane_ParamLimits

0x2e3c,	// (0x0003f854) cale_week_time_pane_t1_ParamLimits

0x2e56,	// (0x0003f86e) cale_week_time_pane_t2_ParamLimits

0x2e70,	// (0x0003f888) cale_week_time_pane_t3_ParamLimits

0x2e8a,	// (0x0003f8a2) cale_week_time_pane_t4_ParamLimits

0x2ea4,	// (0x0003f8bc) cale_week_time_pane_t5_ParamLimits

0x2ebe,	// (0x0003f8d6) cale_week_time_pane_t6_ParamLimits

0x2ede,	// (0x0003f8f6) cale_week_time_pane_t7_ParamLimits

0x2f00,	// (0x0003f918) cale_week_time_pane_t8_ParamLimits

0xf1e0,	// (0x0004bbf8) cale_week_time_pane_t_ParamLimits

0x2f24,	// (0x0003f93c) cell_cale_week_pane_g2_ParamLimits

0xa9ba,	// (0x000473d2) bg_cale_side_pane_cp01_ParamLimits

0x418f,	// (0x00040ba7) cale_month_week_pane_t1_ParamLimits

0x41a8,	// (0x00040bc0) cale_month_week_pane_t2_ParamLimits

0x41c1,	// (0x00040bd9) cale_month_week_pane_t3_ParamLimits

0x41da,	// (0x00040bf2) cale_month_week_pane_t4_ParamLimits

0x41f5,	// (0x00040c0d) cale_month_week_pane_t5_ParamLimits

0x4216,	// (0x00040c2e) cale_month_week_pane_t6_ParamLimits

0xf2b5,	// (0x0004bccd) cale_month_week_pane_t_ParamLimits

0x435d,	// (0x00040d75) cell_cale_month_pane_g1_ParamLimits

0xa0df,	// (0x00046af7) main_cale_event_viewer_pane

0xa0df,	// (0x00046af7) listscroll_cale_event_viewer_pane

0xcd58,	// (0x00049770) list_cale_ev_pane

0xcd60,	// (0x00049778) scroll_pane_cp023

0xcd6c,	// (0x00049784) field_cale_ev_pane_ParamLimits

0xcd6c,	// (0x00049784) field_cale_ev_pane

0xcd8a,	// (0x000497a2) field_cale_ev_content_pane_ParamLimits

0xcd8a,	// (0x000497a2) field_cale_ev_content_pane

0xcd96,	// (0x000497ae) field_cale_ev_pane_g1_ParamLimits

0xcd96,	// (0x000497ae) field_cale_ev_pane_g1

0xcda2,	// (0x000497ba) field_cale_ev_pane_g2_ParamLimits

0xcda2,	// (0x000497ba) field_cale_ev_pane_g2

0xcdba,	// (0x000497d2) field_cale_ev_pane_g3_ParamLimits

0xcdba,	// (0x000497d2) field_cale_ev_pane_g3

0x0002,

0xf709,	// (0x0004c121) field_cale_ev_pane_g_ParamLimits

0xf709,	// (0x0004c121) field_cale_ev_pane_g

0xcdd2,	// (0x000497ea) field_cale_ev_pane_t1_ParamLimits

0xcdd2,	// (0x000497ea) field_cale_ev_pane_t1

0xabfb,	// (0x00047613) field_cale_ev_content_pane_t1_ParamLimits

0xabfb,	// (0x00047613) field_cale_ev_content_pane_t1

0xb5df,	// (0x00047ff7) bg_button_pane_cp01

0x2b0a,	// (0x0003f522) listscroll_cale_week_pane_ParamLimits

0xa965,	// (0x0004737d) popup_toolbar_window_cp01

0xa98b,	// (0x000473a3) listscroll_cale_week_pane_t1_ParamLimits

0x2b0a,	// (0x0003f522) listscroll_cale_day_pane_ParamLimits

0xa965,	// (0x0004737d) popup_toolbar_window_cp02

0xadd9,	// (0x000477f1) listscroll_cale_day_pane_t1_ParamLimits

0x2b0a,	// (0x0003f522) main_cale_month_pane_ParamLimits

0x55d5,	// (0x00041fed) popup_toolbar_window_cp03_ParamLimits

0x55d5,	// (0x00041fed) popup_toolbar_window_cp03

0x4f0d,	// (0x00041925) main_image_pane_g2_ParamLimits

0x4f0d,	// (0x00041925) main_image_pane_g2

0x4f19,	// (0x00041931) main_image_pane_g3_ParamLimits

0x4f19,	// (0x00041931) main_image_pane_g3

0x0002,

0xf4e7,	// (0x0004beff) main_image_pane_g_ParamLimits

0xf4e7,	// (0x0004beff) main_image_pane_g

0xb705,	// (0x0004811d) main_image_pane_t1_ParamLimits

0x4f25,	// (0x0004193d) main_image_pane_t2_ParamLimits

0x4f25,	// (0x0004193d) main_image_pane_t2

0x4f37,	// (0x0004194f) main_image_pane_t3_ParamLimits

0x4f37,	// (0x0004194f) main_image_pane_t3

0x4f49,	// (0x00041961) main_image_pane_t4_ParamLimits

0x4f49,	// (0x00041961) main_image_pane_t4

0x0003,

0xf4ee,	// (0x0004bf06) main_image_pane_t_ParamLimits

0xf4ee,	// (0x0004bf06) main_image_pane_t

0x4f5b,	// (0x00041973) popup_image_details_window_cp01

0x4f65,	// (0x0004197d) popup_toobar_trans_pane_cp01_ParamLimits

0x4f65,	// (0x0004197d) popup_toobar_trans_pane_cp01

0x5525,	// (0x00041f3d) popup_image_details_window_ParamLimits

0x5525,	// (0x00041f3d) popup_image_details_window

0x5533,	// (0x00041f4b) popup_image_focus_window

0x5878,	// (0x00042290) camera2_autofocus_pane_ParamLimits

0x5878,	// (0x00042290) camera2_autofocus_pane

0xa0df,	// (0x00046af7) bg_popup_sub_pane_cp06

0xcde9,	// (0x00049801) popup_image_focus_window_g1

0xcdf1,	// (0x00049809) popup_image_focus_window_g2

0xcdf9,	// (0x00049811) popup_image_focus_window_g3

0xce01,	// (0x00049819) popup_image_focus_window_g4

0x0003,

0xf710,	// (0x0004c128) popup_image_focus_window_g

0xce09,	// (0x00049821) popup_image_focus_window_t1

0xce17,	// (0x0004982f) popup_image_focus_window_t2

0xce27,	// (0x0004983f) popup_image_focus_window_t3

0x0002,

0xf719,	// (0x0004c131) popup_image_focus_window_t

0xce35,	// (0x0004984d) camera2_autofocus_pane_g1

0xabed,	// (0x00047605) bg_tb_trans_pane_cp01

0xce43,	// (0x0004985b) popup_image_details_window_g1

0xce56,	// (0x0004986e) popup_image_details_window_g2

0x0002,

0xf72b,	// (0x0004c143) popup_image_details_window_g

0xce7f,	// (0x00049897) popup_image_details_window_t1

0xce91,	// (0x000498a9) popup_image_details_window_t2

0xceaa,	// (0x000498c2) popup_image_details_window_t3

0xcebe,	// (0x000498d6) popup_image_details_window_t4

0xced9,	// (0x000498f1) popup_image_details_window_t5

0x0004,

0xf732,	// (0x0004c14a) popup_image_details_window_t

0xa82a,	// (0x00047242) bg_calc_paper_pane_ParamLimits

0xa0df,	// (0x00046af7) grid_highlight_pane_cp013

0x28a0,	// (0x0003f2b8) list_calc_pane_ParamLimits

0x28b2,	// (0x0003f2ca) scroll_pane_cp024

0xa83e,	// (0x00047256) bg_calc_display_pane_ParamLimits

0x28ba,	// (0x0003f2d2) calc_display_pane_t1_ParamLimits

0x28cf,	// (0x0003f2e7) calc_display_pane_t2_ParamLimits

0x28e4,	// (0x0003f2fc) calc_display_pane_t3_ParamLimits

0xf151,	// (0x0004bb69) calc_display_pane_t_ParamLimits

0x29c1,	// (0x0003f3d9) cell_calc_pane_g2

0x0001,

0xf16e,	// (0x0004bb86) cell_calc_pane_g

0x29ca,	// (0x0003f3e2) cell_calc_pane_t1

0xa89d,	// (0x000472b5) grid_highlight_pane_cp02_ParamLimits

0xa8b3,	// (0x000472cb) toolbar_button_pane_cp01_ParamLimits

0xa8b3,	// (0x000472cb) toolbar_button_pane_cp01

0xb74a,	// (0x00048162) temp_image_control_pane_ParamLimits

0xb74a,	// (0x00048162) temp_image_control_pane

0xabed,	// (0x00047605) main_mp3_pane

0xcef3,	// (0x0004990b) temp_image_control_pane_g1_ParamLimits

0xcef3,	// (0x0004990b) temp_image_control_pane_g1

0xcf01,	// (0x00049919) temp_image_control_pane_g2_ParamLimits

0xcf01,	// (0x00049919) temp_image_control_pane_g2

0xcf13,	// (0x0004992b) temp_image_control_pane_g3_ParamLimits

0xcf13,	// (0x0004992b) temp_image_control_pane_g3

0x5ed5,	// (0x000428ed) temp_image_control_pane_g4_ParamLimits

0x5ed5,	// (0x000428ed) temp_image_control_pane_g4

0x0003,

0xf73d,	// (0x0004c155) temp_image_control_pane_g_ParamLimits

0xf73d,	// (0x0004c155) temp_image_control_pane_g

0xcef3,	// (0x0004990b) main_mp3_pane_g1

0x5ee6,	// (0x000428fe) main_mp3_pane_g2

0x0007,

0xf746,	// (0x0004c15e) main_mp3_pane_g

0xcf56,	// (0x0004996e) main_mp3_pane_t1

0xaa1d,	// (0x00047435) main_camera_pane_g8_ParamLimits

0xaa1d,	// (0x00047435) main_camera_pane_g8

0x31ae,	// (0x0003fbc6) main_video_pane_g7_ParamLimits

0x31ae,	// (0x0003fbc6) main_video_pane_g7

0x59c0,	// (0x000423d8) main_camera2_pane_t7_ParamLimits

0x59c0,	// (0x000423d8) main_camera2_pane_t7

0xab65,	// (0x0004757d) scroll_pane_cp025_ParamLimits

0xab65,	// (0x0004757d) scroll_pane_cp025

0xab79,	// (0x00047591) scroll_pane_cp026_ParamLimits

0xab79,	// (0x00047591) scroll_pane_cp026

0xab88,	// (0x000475a0) wml_content_pane_ParamLimits

0xa0df,	// (0x00046af7) main_touch_calib_pane

0x5f8a,	// (0x000429a2) main_touch_calib_pane_g1

0x5f96,	// (0x000429ae) main_touch_calib_pane_g2

0x5fa2,	// (0x000429ba) main_touch_calib_pane_g3

0x5fae,	// (0x000429c6) main_touch_calib_pane_g4

0x0003,

0xf764,	// (0x0004c17c) main_touch_calib_pane_g

0x5fba,	// (0x000429d2) main_touch_calib_pane_t1

0x5fd3,	// (0x000429eb) main_touch_calib_pane_t2

0x0004,

0xf76d,	// (0x0004c185) main_touch_calib_pane_t

0xb319,	// (0x00047d31) mup_progress_pane_cp02

0xb34e,	// (0x00047d66) navi_pane_g1

0xb409,	// (0x00047e21) navi_pane_mp_t3

0xabed,	// (0x00047605) main_mp3_pane_ParamLimits

0x5612,	// (0x0004202a) navi_pane_ParamLimits

0xcef3,	// (0x0004990b) main_mp3_pane_g1_ParamLimits

0x5ee6,	// (0x000428fe) main_mp3_pane_g2_ParamLimits

0x5ef2,	// (0x0004290a) main_mp3_pane_g3_ParamLimits

0x5ef2,	// (0x0004290a) main_mp3_pane_g3

0x5efe,	// (0x00042916) main_mp3_pane_g4_ParamLimits

0x5efe,	// (0x00042916) main_mp3_pane_g4

0xcf23,	// (0x0004993b) main_mp3_pane_g5_ParamLimits

0xcf23,	// (0x0004993b) main_mp3_pane_g5

0xcf31,	// (0x00049949) main_mp3_pane_g6_ParamLimits

0xcf31,	// (0x00049949) main_mp3_pane_g6

0xcf3e,	// (0x00049956) main_mp3_pane_g7_ParamLimits

0xcf3e,	// (0x00049956) main_mp3_pane_g7

0xcf4a,	// (0x00049962) main_mp3_pane_g8_ParamLimits

0xcf4a,	// (0x00049962) main_mp3_pane_g8

0xf746,	// (0x0004c15e) main_mp3_pane_g_ParamLimits

0x5f0a,	// (0x00042922) main_mp3_pane_t2

0x5f1a,	// (0x00042932) main_mp3_pane_t3

0xcf64,	// (0x0004997c) main_mp3_pane_t4

0xcf72,	// (0x0004998a) main_mp3_pane_t5

0x0005,

0xf757,	// (0x0004c16f) main_mp3_pane_t

0xcf80,	// (0x00049998) mup_progress_pane_cp01

0x0e69,	// (0x0003d881) aid_zoom_text_secondary2

0xcd58,	// (0x00049770) list_cale_ev2_pane

0xcd60,	// (0x00049778) scroll_pane_cp023_ParamLimits

0x602e,	// (0x00042a46) field_cale_ev2_pane_ParamLimits

0x602e,	// (0x00042a46) field_cale_ev2_pane

0x11a6,	// (0x0003dbbe) field_cale_ev2_pane_g1_ParamLimits

0x11a6,	// (0x0003dbbe) field_cale_ev2_pane_g1

0x11b2,	// (0x0003dbca) field_cale_ev2_pane_g2_ParamLimits

0x11b2,	// (0x0003dbca) field_cale_ev2_pane_g2

0x11ca,	// (0x0003dbe2) field_cale_ev2_pane_g3_ParamLimits

0x11ca,	// (0x0003dbe2) field_cale_ev2_pane_g3

0x0003,

0xf778,	// (0x0004c190) field_cale_ev2_pane_g_ParamLimits

0xf778,	// (0x0004c190) field_cale_ev2_pane_g

0x11ee,	// (0x0003dc06) field_cale_ev2_pane_t1_ParamLimits

0x11ee,	// (0x0003dc06) field_cale_ev2_pane_t1

0x1205,	// (0x0003dc1d) field_cale_ev2_pane_t2_ParamLimits

0x1205,	// (0x0003dc1d) field_cale_ev2_pane_t2

0x0001,

0xf781,	// (0x0004c199) field_cale_ev2_pane_t_ParamLimits

0xf781,	// (0x0004c199) field_cale_ev2_pane_t

0x4dee,	// (0x00041806) main_postcard_pane_g5_ParamLimits

0x4dee,	// (0x00041806) main_postcard_pane_g5

0x4dfc,	// (0x00041814) main_postcard_pane_g6_ParamLimits

0x4dfc,	// (0x00041814) main_postcard_pane_g6

0x2ff8,	// (0x0003fa10) camera2_autofocus_pane_cp_ParamLimits

0x2ff8,	// (0x0003fa10) camera2_autofocus_pane_cp

0xabed,	// (0x00047605) main_mup3_pane

0x6078,	// (0x00042a90) main_mup3_pane_g1_ParamLimits

0x6078,	// (0x00042a90) main_mup3_pane_g1

0x6099,	// (0x00042ab1) main_mup3_pane_g2_ParamLimits

0x6099,	// (0x00042ab1) main_mup3_pane_g2

0x6113,	// (0x00042b2b) main_mup3_pane_g3_ParamLimits

0x6113,	// (0x00042b2b) main_mup3_pane_g3

0x6156,	// (0x00042b6e) main_mup3_pane_g4_ParamLimits

0x6156,	// (0x00042b6e) main_mup3_pane_g4

0x6199,	// (0x00042bb1) main_mup3_pane_g5_ParamLimits

0x6199,	// (0x00042bb1) main_mup3_pane_g5

0x61dc,	// (0x00042bf4) main_mup3_pane_g6_ParamLimits

0x61dc,	// (0x00042bf4) main_mup3_pane_g6

0xcf88,	// (0x000499a0) main_mup3_pane_g7_ParamLimits

0xcf88,	// (0x000499a0) main_mup3_pane_g7

0x0007,

0xf791,	// (0x0004c1a9) main_mup3_pane_g_ParamLimits

0xf791,	// (0x0004c1a9) main_mup3_pane_g

0x6252,	// (0x00042c6a) main_mup3_pane_t1_ParamLimits

0x6252,	// (0x00042c6a) main_mup3_pane_t1

0x62c1,	// (0x00042cd9) main_mup3_pane_t2_ParamLimits

0x62c1,	// (0x00042cd9) main_mup3_pane_t2

0x638a,	// (0x00042da2) main_mup3_pane_t4_ParamLimits

0x638a,	// (0x00042da2) main_mup3_pane_t4

0x63d8,	// (0x00042df0) main_mup3_pane_t5_ParamLimits

0x63d8,	// (0x00042df0) main_mup3_pane_t5

0x6488,	// (0x00042ea0) main_mup3_pane_t6_ParamLimits

0x6488,	// (0x00042ea0) main_mup3_pane_t6

0x0005,

0xf7a2,	// (0x0004c1ba) main_mup3_pane_t_ParamLimits

0xf7a2,	// (0x0004c1ba) main_mup3_pane_t

0x6534,	// (0x00042f4c) mup3_progress_pane_ParamLimits

0x6534,	// (0x00042f4c) mup3_progress_pane

0x65a8,	// (0x00042fc0) popup_mup3_control_window_ParamLimits

0x65a8,	// (0x00042fc0) popup_mup3_control_window

0xcf96,	// (0x000499ae) popup_mup3_text_window

0x65c1,	// (0x00042fd9) mup3_progress_pane_t1

0x65e0,	// (0x00042ff8) mup3_progress_pane_t2

0xcf9e,	// (0x000499b6) mup3_progress_pane_t3

0x0002,

0xf7af,	// (0x0004c1c7) mup3_progress_pane_t

0xcfbb,	// (0x000499d3) mup_progress_pane_cp03

0xa0df,	// (0x00046af7) bg_tb_trans_pane_cp04

0x65ff,	// (0x00043017) mup3_volume_pane

0x6607,	// (0x0004301f) popup_mup3_control_window_g1

0x6610,	// (0x00043028) mup3_volume_pane_g1

0x6619,	// (0x00043031) mup3_volume_pane_g2

0x6622,	// (0x0004303a) mup3_volume_pane_g3

0x0002,

0xf7b6,	// (0x0004c1ce) mup3_volume_pane_g

0xa0df,	// (0x00046af7) bg_tb_trans_pane_cp03

0xcfcb,	// (0x000499e3) popup_mup3_text_window_g1

0xcfd3,	// (0x000499eb) popup_mup3_text_window_t1

0xa886,	// (0x0004729e) list_calc_item_pane_g1_ParamLimits

0xca28,	// (0x00049440) mup_volume_pane_cp_g1

0x5fec,	// (0x00042a04) main_touch_calib_pane_t3

0x6002,	// (0x00042a1a) main_touch_calib_pane_t4

0x6018,	// (0x00042a30) main_touch_calib_pane_t5

0x2285,	// (0x0003ec9d) aid_cell_size_toolbar2

0x228d,	// (0x0003eca5) aid_popup3_width_pane

0x0e61,	// (0x0003d879) aid_zoom_text_msg_primary

0x2fcd,	// (0x0003f9e5) vorec_t7

0xa84a,	// (0x00047262) bg_calc_paper_pane_g1_ParamLimits

0xa856,	// (0x0004726e) bg_calc_paper_pane_g2_ParamLimits

0xa862,	// (0x0004727a) bg_calc_paper_pane_g3_ParamLimits

0xa86e,	// (0x00047286) bg_calc_paper_pane_g4_ParamLimits

0xa87a,	// (0x00047292) bg_calc_paper_pane_g5_ParamLimits

0x2923,	// (0x0003f33b) bg_calc_paper_pane_g6_ParamLimits

0x2934,	// (0x0003f34c) bg_calc_paper_pane_g7_ParamLimits

0x2945,	// (0x0003f35d) bg_calc_paper_pane_g8_ParamLimits

0xf158,	// (0x0004bb70) bg_calc_paper_pane_g_ParamLimits

0x2956,	// (0x0003f36e) calc_bg_paper_pane_g9_ParamLimits

0x30df,	// (0x0003faf7) image_qvga_pane_ParamLimits

0x30df,	// (0x0003faf7) image_qvga_pane

0xa76d,	// (0x00047185) bg_popup_sub_pane_cp04_ParamLimits

0xb681,	// (0x00048099) popup_mup_playback_window_g1_ParamLimits

0xb68d,	// (0x000480a5) popup_mup_playback_window_t1_ParamLimits

0xb6a2,	// (0x000480ba) popup_mup_playback_window_t2_ParamLimits

0xf4e2,	// (0x0004befa) popup_mup_playback_window_t_ParamLimits

0x5aef,	// (0x00042507) main_mup2_pane_g3_ParamLimits

0x5aef,	// (0x00042507) main_mup2_pane_g3

0x3397,	// (0x0003fdaf) popup_toolbar_window_cp04

0xba97,	// (0x000484af) popup_call2_audio_second_window_g3_ParamLimits

0xba97,	// (0x000484af) popup_call2_audio_second_window_g3

0xbea1,	// (0x000488b9) popup_call2_audio_first_window_g4_ParamLimits

0xbea1,	// (0x000488b9) popup_call2_audio_first_window_g4

0xc520,	// (0x00048f38) popup_call2_audio_in_window_g4_ParamLimits

0xc520,	// (0x00048f38) popup_call2_audio_in_window_g4

0x4f00,	// (0x00041918) aid_area_sk_bg_cut_ParamLimits

0x4f00,	// (0x00041918) aid_area_sk_bg_cut

0xb6b7,	// (0x000480cf) aid_area_sk_bg_cut_2_ParamLimits

0xb6b7,	// (0x000480cf) aid_area_sk_bg_cut_2

0x5e7b,	// (0x00042893) aid_placing_details_win

0x5e83,	// (0x0004289b) aid_placing_details_win_2

0xce35,	// (0x0004984d) camera2_autofocus_pane_g1_ParamLimits

0x24dc,	// (0x0003eef4) popup_fixed_preview_cale_window_ParamLimits

0x24dc,	// (0x0003eef4) popup_fixed_preview_cale_window

0xb487,	// (0x00047e9f) navi_slider_pane_g3

0xb490,	// (0x00047ea8) navi_slider_pane_g4

0xb499,	// (0x00047eb1) navi_slider_pane_g5

0xb487,	// (0x00047e9f) navi_slider_pane_g6

0x484f,	// (0x00041267) navi_slider_pane_g7

0xb5ac,	// (0x00047fc4) mup_scale_pane_g3

0xb5b5,	// (0x00047fcd) mup_scale_pane_g4

0xb5be,	// (0x00047fd6) mup_scale_pane_g5

0x4c7e,	// (0x00041696) mup_scale_pane_g6

0x4c87,	// (0x0004169f) mup_scale_pane_g7

0xb487,	// (0x00047e9f) cams2_slider_pane_g3

0xcaaa,	// (0x000494c2) cams2_slider_pane_g4

0x5dd3,	// (0x000427eb) cams2_slider_pane_g5

0xb487,	// (0x00047e9f) cams2_slider_pane_g6

0x5ddb,	// (0x000427f3) cams2_slider_pane_g7

0xccd5,	// (0x000496ed) camera2_autofocus_pane_cp_g1

0xc8c1,	// (0x000492d9) bg_popup_preview_window_pane_cp02_ParamLimits

0xc8c1,	// (0x000492d9) bg_popup_preview_window_pane_cp02

0xcfe1,	// (0x000499f9) list_fp_cale_pane_ParamLimits

0xcfe1,	// (0x000499f9) list_fp_cale_pane

0xcfed,	// (0x00049a05) popup_fixed_preview_cale_window_t1_ParamLimits

0xcfed,	// (0x00049a05) popup_fixed_preview_cale_window_t1

0x662b,	// (0x00043043) popup_fixed_preview_cale_window_t2_ParamLimits

0x662b,	// (0x00043043) popup_fixed_preview_cale_window_t2

0x6640,	// (0x00043058) popup_fixed_preview_cale_window_t3_ParamLimits

0x6640,	// (0x00043058) popup_fixed_preview_cale_window_t3

0x0002,

0xf7bd,	// (0x0004c1d5) popup_fixed_preview_cale_window_t_ParamLimits

0xf7bd,	// (0x0004c1d5) popup_fixed_preview_cale_window_t

0x6655,	// (0x0004306d) list_single_fp_cale_pane_ParamLimits

0x6655,	// (0x0004306d) list_single_fp_cale_pane

0xd00b,	// (0x00049a23) list_single_fp_cale_pane_g1_ParamLimits

0xd00b,	// (0x00049a23) list_single_fp_cale_pane_g1

0xd017,	// (0x00049a2f) list_single_fp_cale_pane_g2_ParamLimits

0xd017,	// (0x00049a2f) list_single_fp_cale_pane_g2

0x0002,

0xf7c4,	// (0x0004c1dc) list_single_fp_cale_pane_g_ParamLimits

0xf7c4,	// (0x0004c1dc) list_single_fp_cale_pane_g

0xd030,	// (0x00049a48) list_single_fp_cale_pane_t1_ParamLimits

0xd030,	// (0x00049a48) list_single_fp_cale_pane_t1

0xd042,	// (0x00049a5a) list_single_fp_cale_pane_t2_ParamLimits

0xd042,	// (0x00049a5a) list_single_fp_cale_pane_t2

0x0001,

0xf7cb,	// (0x0004c1e3) list_single_fp_cale_pane_t_ParamLimits

0xf7cb,	// (0x0004c1e3) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0xa0df,	// (0x00046af7) main_dialer_pane

0x6668,	// (0x00043080) aid_cell_size_keypad

0x6672,	// (0x0004308a) dialer_ne_pane

0x667c,	// (0x00043094) grid_dialer_command_1_pane

0x6684,	// (0x0004309c) grid_dialer_command_2_pane

0x668c,	// (0x000430a4) grid_dialer_keypad_pane

0x66a0,	// (0x000430b8) bg_popup_call_pane_cp06_ParamLimits

0x66a0,	// (0x000430b8) bg_popup_call_pane_cp06

0x66ac,	// (0x000430c4) dialer_ne_clear_pane_ParamLimits

0x66ac,	// (0x000430c4) dialer_ne_clear_pane

0xd075,	// (0x00049a8d) dialer_ne_pane_g1

0xd07d,	// (0x00049a95) dialer_ne_pane_t1_ParamLimits

0xd07d,	// (0x00049a95) dialer_ne_pane_t1

0x66b8,	// (0x000430d0) dialer_ne_pane_t2_ParamLimits

0x66b8,	// (0x000430d0) dialer_ne_pane_t2

0x66d5,	// (0x000430ed) dialer_ne_pane_t3_ParamLimits

0x66d5,	// (0x000430ed) dialer_ne_pane_t3

0x0002,

0xf7d0,	// (0x0004c1e8) dialer_ne_pane_t_ParamLimits

0xf7d0,	// (0x0004c1e8) dialer_ne_pane_t

0x66f9,	// (0x00043111) dialer_ne_pane_t3_copy1_ParamLimits

0x66f9,	// (0x00043111) dialer_ne_pane_t3_copy1

0x671d,	// (0x00043135) cell_dialer_keypad_pane_ParamLimits

0x671d,	// (0x00043135) cell_dialer_keypad_pane

0x6734,	// (0x0004314c) cell_dialer_command_1_pane_ParamLimits

0x6734,	// (0x0004314c) cell_dialer_command_1_pane

0x674a,	// (0x00043162) cell_dialer_command_2_pane_ParamLimits

0x674a,	// (0x00043162) cell_dialer_command_2_pane

0xd08f,	// (0x00049aa7) bg_button_pane_cp02_ParamLimits

0xd08f,	// (0x00049aa7) bg_button_pane_cp02

0x6759,	// (0x00043171) cell_dialer_keypad_pane_g1_ParamLimits

0x6759,	// (0x00043171) cell_dialer_keypad_pane_g1

0xd08f,	// (0x00049aa7) bg_button_pane_cp03_ParamLimits

0xd08f,	// (0x00049aa7) bg_button_pane_cp03

0x676e,	// (0x00043186) cell_dialer_command_1_pane_g1_ParamLimits

0x676e,	// (0x00043186) cell_dialer_command_1_pane_g1

0xd09b,	// (0x00049ab3) bg_button_pane_cp04

0x6782,	// (0x0004319a) cell_dialer_command_2_pane_g1

0xaa15,	// (0x0004742d) bg_button_pane_cp06

0xd0a3,	// (0x00049abb) dialer_ne_clear_pane_g1

0xb35a,	// (0x00047d72) navi_pane_g2

0xb388,	// (0x00047da0) navi_pane_g3

0x0002,

0xf3e5,	// (0x0004bdfd) navi_pane_g

0xb417,	// (0x00047e2f) navi_pane_mv_g2

0xb43e,	// (0x00047e56) navi_pane_mv_g5

0x481a,	// (0x00041232) navi_pane_mv_t1

0xa83e,	// (0x00047256) main_clock2_pane

0x67c2,	// (0x000431da) main_clock2_list_pane_ParamLimits

0x67c2,	// (0x000431da) main_clock2_list_pane

0x67ec,	// (0x00043204) main_clock2_pane_t1_ParamLimits

0x67ec,	// (0x00043204) main_clock2_pane_t1

0x6810,	// (0x00043228) main_clock2_pane_t2_ParamLimits

0x6810,	// (0x00043228) main_clock2_pane_t2

0x0004,

0xf7dc,	// (0x0004c1f4) main_clock2_pane_t_ParamLimits

0xf7dc,	// (0x0004c1f4) main_clock2_pane_t

0x686b,	// (0x00043283) popup_clock_analogue_window_cp03_ParamLimits

0x686b,	// (0x00043283) popup_clock_analogue_window_cp03

0x6889,	// (0x000432a1) popup_clock_digital_window_cp02_ParamLimits

0x6889,	// (0x000432a1) popup_clock_digital_window_cp02

0x68f6,	// (0x0004330e) main_clock2_list_single_pane_ParamLimits

0x68f6,	// (0x0004330e) main_clock2_list_single_pane

0xaa15,	// (0x0004742d) list_highlight_pane_cp05

0xd0dd,	// (0x00049af5) main_clock2_list_single_pane_t1

0x3397,	// (0x0003fdaf) popup_toolbar_window_cp04_ParamLimits

0x5ea5,	// (0x000428bd) camera2_autofocus_pane_g2_ParamLimits

0x5ea5,	// (0x000428bd) camera2_autofocus_pane_g2

0x5eb1,	// (0x000428c9) camera2_autofocus_pane_g3_ParamLimits

0x5eb1,	// (0x000428c9) camera2_autofocus_pane_g3

0x5ebd,	// (0x000428d5) camera2_autofocus_pane_g4_ParamLimits

0x5ebd,	// (0x000428d5) camera2_autofocus_pane_g4

0x5ec9,	// (0x000428e1) camera2_autofocus_pane_g5_ParamLimits

0x5ec9,	// (0x000428e1) camera2_autofocus_pane_g5

0x0004,

0xf720,	// (0x0004c138) camera2_autofocus_pane_g_ParamLimits

0xf720,	// (0x0004c138) camera2_autofocus_pane_g

0x6058,	// (0x00042a70) camera2_autofocus_pane_cp_g2

0x6060,	// (0x00042a78) camera2_autofocus_pane_cp_g3

0x6068,	// (0x00042a80) camera2_autofocus_pane_cp_g4

0x6070,	// (0x00042a88) camera2_autofocus_pane_cp_g5

0x0004,

0xf786,	// (0x0004c19e) camera2_autofocus_pane_cp_g

0x6698,	// (0x000430b0) popup_dialer_spcha_window

0xa0df,	// (0x00046af7) bg_popup_sub_pane_cp07

0xd0eb,	// (0x00049b03) list_spcha_pane

0xd0f3,	// (0x00049b0b) list_single_spcha_pane_ParamLimits

0xd0f3,	// (0x00049b0b) list_single_spcha_pane

0xa0df,	// (0x00046af7) list_highlight_pane_cp06

0xd104,	// (0x00049b1c) list_single_spcha_pane_t1

0xc2ca,	// (0x00048ce2) popup_call2_audio_out_window_g4_ParamLimits

0xc2ca,	// (0x00048ce2) popup_call2_audio_out_window_g4

0xa0df,	// (0x00046af7) main_imed2_pane

0x553b,	// (0x00041f53) popup_imed_adjust2_window

0x554e,	// (0x00041f66) popup_imed_trans_window_ParamLimits

0x554e,	// (0x00041f66) popup_imed_trans_window

0xcb13,	// (0x0004952b) popup_blid_sat_info2_window_t1

0xcb21,	// (0x00049539) popup_blid_sat_info2_window_t2

0x000a,

0xf6b5,	// (0x0004c0cd) popup_blid_sat_info2_window_t

0x699f,	// (0x000433b7) aid_size_cell_colour_35

0x69b9,	// (0x000433d1) aid_size_cell_colour_112

0x69d0,	// (0x000433e8) aid_size_cell_effect

0xabed,	// (0x00047605) bg_tb_trans_pane_cp02

0xb663,	// (0x0004807b) heading_imed_pane

0x69ea,	// (0x00043402) listscroll_imed_pane

0xd112,	// (0x00049b2a) heading_imed_pane_g1

0xd11a,	// (0x00049b32) heading_imed_pane_t1

0xd128,	// (0x00049b40) grid_imed_colour_35_pane_ParamLimits

0xd128,	// (0x00049b40) grid_imed_colour_35_pane

0x69f6,	// (0x0004340e) grid_imed_effect_pane

0xd140,	// (0x00049b58) list_imed_aspect_pane

0x6a06,	// (0x0004341e) scroll_pane_cp027_ParamLimits

0x6a06,	// (0x0004341e) scroll_pane_cp027

0x6a12,	// (0x0004342a) cell_imed_effect_pane_ParamLimits

0x6a12,	// (0x0004342a) cell_imed_effect_pane

0xd148,	// (0x00049b60) cell_imed_colour_pane_ParamLimits

0xd148,	// (0x00049b60) cell_imed_colour_pane

0xd18a,	// (0x00049ba2) cell_imed_colour_pane_g1_ParamLimits

0xd18a,	// (0x00049ba2) cell_imed_colour_pane_g1

0xd19b,	// (0x00049bb3) hgihlgiht_grid_pane_cp016_ParamLimits

0xd19b,	// (0x00049bb3) hgihlgiht_grid_pane_cp016

0x6a2a,	// (0x00043442) cell_imed_effect_pane_g1

0x6a32,	// (0x0004344a) grid_highlight_pane_cp017

0xd1ac,	// (0x00049bc4) list_imed_single_pane_ParamLimits

0xd1ac,	// (0x00049bc4) list_imed_single_pane

0xa0df,	// (0x00046af7) list_highlight_pane_cp07

0xd1c1,	// (0x00049bd9) list_imed_aspect_pane_comp1_t1

0xc8cd,	// (0x000492e5) bg_tb_trans_pane_cp05

0xd1e3,	// (0x00049bfb) popup_imed_adjust2_window_g1

0xd20a,	// (0x00049c22) popup_imed_adjust2_window_t1

0xd222,	// (0x00049c3a) slider_imed_adjust_pane

0xd236,	// (0x00049c4e) slider_imed_adjust_pane_g1

0xd246,	// (0x00049c5e) slider_imed_adjust_pane_g2

0xd256,	// (0x00049c6e) slider_imed_adjust_pane_g3

0xd267,	// (0x00049c7f) slider_imed_adjust_pane_g4

0x0003,

0xf7f9,	// (0x0004c211) slider_imed_adjust_pane_g

0x6a3b,	// (0x00043453) aid_size_cell_clipart2

0x6a47,	// (0x0004345f) grid_imed_clipart_pane

0xd278,	// (0x00049c90) scroll_pane_cp031

0x6a51,	// (0x00043469) cell_imed_clipart_pane_ParamLimits

0x6a51,	// (0x00043469) cell_imed_clipart_pane

0x6a74,	// (0x0004348c) cell_imed_clipart_pane_g1

0xa0df,	// (0x00046af7) grid_highlight_pane_cp014

0x67ce,	// (0x000431e6) main_clock2_pane_g1_ParamLimits

0x67ce,	// (0x000431e6) main_clock2_pane_g1

0x68a1,	// (0x000432b9) aid_call2_pane_cp10

0x68b3,	// (0x000432cb) aid_call_pane_cp10

0xb2b9,	// (0x00047cd1) popup_clock_analogue_window_cp10_g1

0xb2b9,	// (0x00047cd1) popup_clock_analogue_window_cp10_g2

0x68c5,	// (0x000432dd) popup_clock_analogue_window_cp10_g3

0x68c5,	// (0x000432dd) popup_clock_analogue_window_cp10_g4

0xb2b9,	// (0x00047cd1) popup_clock_analogue_window_cp10_g5

0x0004,

0xf7e7,	// (0x0004c1ff) popup_clock_analogue_window_cp10_g

0x68d7,	// (0x000432ef) popup_clock_analogue_window_cp10_t1

0x6908,	// (0x00043320) clock_digital_number_pane_cp10_ParamLimits

0x6908,	// (0x00043320) clock_digital_number_pane_cp10

0x6920,	// (0x00043338) clock_digital_number_pane_cp11_ParamLimits

0x6920,	// (0x00043338) clock_digital_number_pane_cp11

0x6938,	// (0x00043350) clock_digital_number_pane_cp12_ParamLimits

0x6938,	// (0x00043350) clock_digital_number_pane_cp12

0x6950,	// (0x00043368) clock_digital_number_pane_cp13_ParamLimits

0x6950,	// (0x00043368) clock_digital_number_pane_cp13

0x6968,	// (0x00043380) clock_digital_separator_pane_cp10_ParamLimits

0x6968,	// (0x00043380) clock_digital_separator_pane_cp10

0x6980,	// (0x00043398) popup_clock_digital_window_cp02_t1_ParamLimits

0x6980,	// (0x00043398) popup_clock_digital_window_cp02_t1

0xa765,	// (0x0004717d) clock_digital_number_pane_cp10_g1

0xa765,	// (0x0004717d) clock_digital_number_pane_cp10_g2

0x0001,

0xf802,	// (0x0004c21a) clock_digital_number_pane_cp10_g

0xa765,	// (0x0004717d) clock_digital_separator_pane_cp10_g1

0xa765,	// (0x0004717d) clock_digital_separator_pane_g2_cp10

0xb446,	// (0x00047e5e) navi_pane_vded_g4

0xb44f,	// (0x00047e67) navi_pane_vded_g5

0xb458,	// (0x00047e70) navi_pane_vded_t1

0xa0df,	// (0x00046af7) main_vded_pane

0x6a7d,	// (0x00043495) main_vded_pane_g1

0x6a89,	// (0x000434a1) main_vded_pane_g2

0x6a93,	// (0x000434ab) main_vded_pane_g3

0x0002,

0xf807,	// (0x0004c21f) main_vded_pane_g

0x6a9d,	// (0x000434b5) main_vded_pane_t1

0x6aab,	// (0x000434c3) main_vded_pane_t2

0x0001,

0xf80e,	// (0x0004c226) main_vded_pane_t

0x6ab9,	// (0x000434d1) vded_slider_pane

0x6ac3,	// (0x000434db) vded_video_pane

0xd280,	// (0x00049c98) vded_video_pane_g1

0x6acd,	// (0x000434e5) vded_video_pane_g2

0xccd5,	// (0x000496ed) vded_video_pane_g3

0x0002,

0xf813,	// (0x0004c22b) vded_video_pane_g

0xd28a,	// (0x00049ca2) vded_slider_pane_g1

0xca28,	// (0x00049440) vded_slider_pane_g2

0xd293,	// (0x00049cab) vded_slider_pane_g3

0xd29c,	// (0x00049cb4) vded_slider_pane_g4

0xd2a5,	// (0x00049cbd) vded_slider_pane_g5

0x0004,

0xf81a,	// (0x0004c232) vded_slider_pane_g

0x659a,	// (0x00042fb2) mup3_rocker_pane_ParamLimits

0x659a,	// (0x00042fb2) mup3_rocker_pane

0x6ad6,	// (0x000434ee) mup3_control_keys_pane_g1

0x6ade,	// (0x000434f6) mup3_control_keys_pane_g2

0x6ae6,	// (0x000434fe) mup3_control_keys_pane_g3

0x6aee,	// (0x00043506) mup3_control_keys_pane_g4

0x0003,

0xf825,	// (0x0004c23d) mup3_control_keys_pane_g

0x2504,	// (0x0003ef1c) popup_toolbar2_fixed_window_cp01_ParamLimits

0x2504,	// (0x0003ef1c) popup_toolbar2_fixed_window_cp01

0x65b4,	// (0x00042fcc) popup_toolbar2_fixed_window_cp02_ParamLimits

0x65b4,	// (0x00042fcc) popup_toolbar2_fixed_window_cp02

0xbc09,	// (0x00048621) popup_call2_audio_second_window_t4_ParamLimits

0xbc09,	// (0x00048621) popup_call2_audio_second_window_t4

0xc137,	// (0x00048b4f) popup_call2_audio_first_window_t6_ParamLimits

0xc137,	// (0x00048b4f) popup_call2_audio_first_window_t6

0xc3cd,	// (0x00048de5) popup_call2_audio_out_window_t6_ParamLimits

0xc3cd,	// (0x00048de5) popup_call2_audio_out_window_t6

0xa0df,	// (0x00046af7) main_vitu_pane

0x6afe,	// (0x00043516) aid_size_cell_itu_ParamLimits

0x6afe,	// (0x00043516) aid_size_cell_itu

0xd966,	// (0x0004a37e) bg_popup_window_pane_cp08_ParamLimits

0xd966,	// (0x0004a37e) bg_popup_window_pane_cp08

0x6b0c,	// (0x00043524) field_vitu_entry_pane_ParamLimits

0x6b0c,	// (0x00043524) field_vitu_entry_pane

0x6b1b,	// (0x00043533) grid_vitu_function_pane_ParamLimits

0x6b1b,	// (0x00043533) grid_vitu_function_pane

0x6b2b,	// (0x00043543) grid_vitu_itu_pane_ParamLimits

0x6b2b,	// (0x00043543) grid_vitu_itu_pane

0x6b3b,	// (0x00043553) cell_vitu_itu_pane_ParamLimits

0x6b3b,	// (0x00043553) cell_vitu_itu_pane

0x6b50,	// (0x00043568) cell_vitu_function_pane_ParamLimits

0x6b50,	// (0x00043568) cell_vitu_function_pane

0xabed,	// (0x00047605) bg_popup_sub_pane_cp08_ParamLimits

0xabed,	// (0x00047605) bg_popup_sub_pane_cp08

0x6b62,	// (0x0004357a) field_vitu_entry_pane_t1_ParamLimits

0x6b62,	// (0x0004357a) field_vitu_entry_pane_t1

0xd2c6,	// (0x00049cde) field_vitu_entry_pane_t2_ParamLimits

0xd2c6,	// (0x00049cde) field_vitu_entry_pane_t2

0x0001,

0xf833,	// (0x0004c24b) field_vitu_entry_pane_t_ParamLimits

0xf833,	// (0x0004c24b) field_vitu_entry_pane_t

0xd2e3,	// (0x00049cfb) bg_button_pane_cp05_ParamLimits

0xd2e3,	// (0x00049cfb) bg_button_pane_cp05

0x6b7f,	// (0x00043597) cell_vitu_itu_pane_g1

0x6b97,	// (0x000435af) cell_vitu_itu_pane_t1_ParamLimits

0x6b97,	// (0x000435af) cell_vitu_itu_pane_t1

0x6ba9,	// (0x000435c1) cell_vitu_itu_pane_t2_ParamLimits

0x6ba9,	// (0x000435c1) cell_vitu_itu_pane_t2

0x0002,

0xf838,	// (0x0004c250) cell_vitu_itu_pane_t_ParamLimits

0xf838,	// (0x0004c250) cell_vitu_itu_pane_t

0xd2f1,	// (0x00049d09) bg_button_pane_cp07

0x6bde,	// (0x000435f6) cell_vitu_function_pane_g1

0x27c7,	// (0x0003f1df) main_calc_pane_g1

0x22c1,	// (0x0003ecd9) aid_visual_content_pane

0xa0df,	// (0x00046af7) main_vradio_pane

0x6be7,	// (0x000435ff) main_vradio_pane_g1_ParamLimits

0x6be7,	// (0x000435ff) main_vradio_pane_g1

0xd2fb,	// (0x00049d13) main_vradio_pane_g2_ParamLimits

0xd2fb,	// (0x00049d13) main_vradio_pane_g2

0x0001,

0xf83f,	// (0x0004c257) main_vradio_pane_g_ParamLimits

0xf83f,	// (0x0004c257) main_vradio_pane_g

0x6bf7,	// (0x0004360f) main_vradio_pane_t1_ParamLimits

0x6bf7,	// (0x0004360f) main_vradio_pane_t1

0x6c09,	// (0x00043621) main_vradio_pane_t2_ParamLimits

0x6c09,	// (0x00043621) main_vradio_pane_t2

0xd308,	// (0x00049d20) main_vradio_pane_t3_ParamLimits

0xd308,	// (0x00049d20) main_vradio_pane_t3

0x0002,

0xf844,	// (0x0004c25c) main_vradio_pane_t_ParamLimits

0xf844,	// (0x0004c25c) main_vradio_pane_t

0x6c1b,	// (0x00043633) vradio_rocker_control_pane_ParamLimits

0x6c1b,	// (0x00043633) vradio_rocker_control_pane

0x6c27,	// (0x0004363f) vradio_station_info_pane_ParamLimits

0x6c27,	// (0x0004363f) vradio_station_info_pane

0xd31c,	// (0x00049d34) vradio_frequency_info_pane_ParamLimits

0xd31c,	// (0x00049d34) vradio_frequency_info_pane

0xccd5,	// (0x000496ed) vradio_station_info_pane_g1

0xd32b,	// (0x00049d43) vradio_station_info_pane_t1_ParamLimits

0xd32b,	// (0x00049d43) vradio_station_info_pane_t1

0xd34d,	// (0x00049d65) vradio_station_info_pane_t2_ParamLimits

0xd34d,	// (0x00049d65) vradio_station_info_pane_t2

0x0001,

0xf84b,	// (0x0004c263) vradio_station_info_pane_t_ParamLimits

0xf84b,	// (0x0004c263) vradio_station_info_pane_t

0xd35f,	// (0x00049d77) vradio_tuning_pane

0xd367,	// (0x00049d7f) vradio_rocker_control_pane_g1

0xd36f,	// (0x00049d87) vradio_rocker_control_pane_g2

0xd377,	// (0x00049d8f) vradio_rocker_control_pane_g3

0xd37f,	// (0x00049d97) vradio_rocker_control_pane_g4

0xd387,	// (0x00049d9f) vradio_rocker_control_pane_g5

0x0004,

0xf850,	// (0x0004c268) vradio_rocker_control_pane_g

0x6c36,	// (0x0004364e) vradio_frequency_info_pane_g1

0xd38f,	// (0x00049da7) vradio_frequency_info_pane_t1_ParamLimits

0xd38f,	// (0x00049da7) vradio_frequency_info_pane_t1

0x6c40,	// (0x00043658) vradio_tuning_pane_g1

0x6c49,	// (0x00043661) vradio_tuning_pane_t1

0x230a,	// (0x0003ed22) area_side_right_pane_ParamLimits

0x230a,	// (0x0003ed22) area_side_right_pane

0xc888,	// (0x000492a0) status_small_pane_g1

0xc890,	// (0x000492a8) status_small_pane_g2

0xc899,	// (0x000492b1) status_small_pane_g3

0xc8a2,	// (0x000492ba) status_small_pane_g4

0x0003,

0xf60b,	// (0x0004c023) status_small_pane_g

0xc8ab,	// (0x000492c3) status_small_pane_t1

0xa0df,	// (0x00046af7) main_video3_pane

0xd3a3,	// (0x00049dbb) cams_zoom_vslider_pane

0xd3ab,	// (0x00049dc3) image3_wide_pane_ParamLimits

0xd3ab,	// (0x00049dc3) image3_wide_pane

0xd3c5,	// (0x00049ddd) image3_wide_small_pane

0xd3d1,	// (0x00049de9) main_video3_pane_g1_ParamLimits

0xd3d1,	// (0x00049de9) main_video3_pane_g1

0xd3ed,	// (0x00049e05) main_video3_pane_g2_ParamLimits

0xd3ed,	// (0x00049e05) main_video3_pane_g2

0x0001,

0xf85b,	// (0x0004c273) main_video3_pane_g_ParamLimits

0xf85b,	// (0x0004c273) main_video3_pane_g

0xd409,	// (0x00049e21) main_video3_pane_t1_ParamLimits

0xd409,	// (0x00049e21) main_video3_pane_t1

0xd434,	// (0x00049e4c) main_video3_pane_t2_ParamLimits

0xd434,	// (0x00049e4c) main_video3_pane_t2

0xd45f,	// (0x00049e77) main_video3_pane_t3_ParamLimits

0xd45f,	// (0x00049e77) main_video3_pane_t3

0x0002,

0xf860,	// (0x0004c278) main_video3_pane_t_ParamLimits

0xf860,	// (0x0004c278) main_video3_pane_t

0xd48c,	// (0x00049ea4) cams_zoom_vslider_pane_g1

0xd495,	// (0x00049ead) cams_zoom_vslider_pane_g2

0x0001,

0xf867,	// (0x0004c27f) cams_zoom_vslider_pane_g

0xd49d,	// (0x00049eb5) small_slider_vertical_pane

0xccd5,	// (0x000496ed) small_slider_vertical_pane_g1

0xccd5,	// (0x000496ed) small_slider_vertical_pane_g2

0xd4a5,	// (0x00049ebd) small_slider_vertical_pane_g3

0x0002,

0xf86c,	// (0x0004c284) small_slider_vertical_pane_g

0xa0df,	// (0x00046af7) main_hwr_training_pane

0xd4ae,	// (0x00049ec6) hwr_training_instruct_pane_ParamLimits

0xd4ae,	// (0x00049ec6) hwr_training_instruct_pane

0x6c58,	// (0x00043670) hwr_training_navi_pane_ParamLimits

0x6c58,	// (0x00043670) hwr_training_navi_pane

0x6c72,	// (0x0004368a) hwr_training_write_pane_ParamLimits

0x6c72,	// (0x0004368a) hwr_training_write_pane

0xa0df,	// (0x00046af7) bg_frame_shadow_pane

0xd4f1,	// (0x00049f09) hwr_training_write_pane_g1

0xd4f9,	// (0x00049f11) hwr_training_write_pane_g2

0xd501,	// (0x00049f19) hwr_training_write_pane_g3

0xd509,	// (0x00049f21) hwr_training_write_pane_g4

0xd511,	// (0x00049f29) hwr_training_write_pane_g5

0xd519,	// (0x00049f31) hwr_training_write_pane_g6

0xd521,	// (0x00049f39) hwr_training_write_pane_g7

0x0006,

0xf873,	// (0x0004c28b) hwr_training_write_pane_g

0x6caa,	// (0x000436c2) hwr_training_navi_pane_g1_ParamLimits

0x6caa,	// (0x000436c2) hwr_training_navi_pane_g1

0x6cbc,	// (0x000436d4) hwr_training_navi_pane_g2_ParamLimits

0x6cbc,	// (0x000436d4) hwr_training_navi_pane_g2

0x6cce,	// (0x000436e6) hwr_training_navi_pane_g3_ParamLimits

0x6cce,	// (0x000436e6) hwr_training_navi_pane_g3

0x6cde,	// (0x000436f6) hwr_training_navi_pane_g4_ParamLimits

0x6cde,	// (0x000436f6) hwr_training_navi_pane_g4

0x0004,

0xf882,	// (0x0004c29a) hwr_training_navi_pane_g_ParamLimits

0xf882,	// (0x0004c29a) hwr_training_navi_pane_g

0x6cf8,	// (0x00043710) hwr_training_navi_pane_t1

0x6d06,	// (0x0004371e) list_single_hwr_training_instruct_pane_ParamLimits

0x6d06,	// (0x0004371e) list_single_hwr_training_instruct_pane

0xd529,	// (0x00049f41) list_single_hwr_training_instruct_pane_t1

0xcc15,	// (0x0004962d) bg_frame_shadow_pane_g1

0xd538,	// (0x00049f50) bg_frame_shadow_pane_g2

0xd540,	// (0x00049f58) bg_frame_shadow_pane_g3

0xd548,	// (0x00049f60) bg_frame_shadow_pane_g4

0xd550,	// (0x00049f68) bg_frame_shadow_pane_g5

0xd558,	// (0x00049f70) bg_frame_shadow_pane_g6

0xd560,	// (0x00049f78) bg_frame_shadow_pane_g7

0xa909,	// (0x00047321) bg_frame_shadow_pane_g8

0x0007,

0xf88d,	// (0x0004c2a5) bg_frame_shadow_pane_g

0xa0df,	// (0x00046af7) main_video_tele_dialer_pane

0x6d2f,	// (0x00043747) aid_size_cell_video_keypad_ParamLimits

0x6d2f,	// (0x00043747) aid_size_cell_video_keypad

0x6d3f,	// (0x00043757) grid_video_dialer_keypad_pane_ParamLimits

0x6d3f,	// (0x00043757) grid_video_dialer_keypad_pane

0x6d73,	// (0x0004378b) video_down_pane_cp_ParamLimits

0x6d73,	// (0x0004378b) video_down_pane_cp

0x6d9d,	// (0x000437b5) cell_video_dialer_keypad_pane_ParamLimits

0x6d9d,	// (0x000437b5) cell_video_dialer_keypad_pane

0xd568,	// (0x00049f80) bg_button_pane_cp08_ParamLimits

0xd568,	// (0x00049f80) bg_button_pane_cp08

0x6db2,	// (0x000437ca) cell_video_dialer_keypad_pane_g1_ParamLimits

0x6db2,	// (0x000437ca) cell_video_dialer_keypad_pane_g1

0x658e,	// (0x00042fa6) mup3_rocker2_pane_ParamLimits

0x658e,	// (0x00042fa6) mup3_rocker2_pane

0xccd5,	// (0x000496ed) mup3_rocker2_pane_g1

0x54af,	// (0x00041ec7) main_dialer2_pane

0xa0df,	// (0x00046af7) main_mp4_pane

0x6df4,	// (0x0004380c) main_mp4_pane_g1_ParamLimits

0x6df4,	// (0x0004380c) main_mp4_pane_g1

0x6e02,	// (0x0004381a) main_mp4_pane_g2_ParamLimits

0x6e02,	// (0x0004381a) main_mp4_pane_g2

0x6e10,	// (0x00043828) main_mp4_pane_g3_ParamLimits

0x6e10,	// (0x00043828) main_mp4_pane_g3

0x6e55,	// (0x0004386d) main_mp4_pane_g4_ParamLimits

0x6e55,	// (0x0004386d) main_mp4_pane_g4

0x6e7d,	// (0x00043895) main_mp4_pane_g5_ParamLimits

0x6e7d,	// (0x00043895) main_mp4_pane_g5

0x0005,

0xf8ad,	// (0x0004c2c5) main_mp4_pane_g_ParamLimits

0xf8ad,	// (0x0004c2c5) main_mp4_pane_g

0x6ecd,	// (0x000438e5) main_mp4_pane_t1_ParamLimits

0x6ecd,	// (0x000438e5) main_mp4_pane_t1

0x6f29,	// (0x00043941) main_mp4_pane_t2_ParamLimits

0x6f29,	// (0x00043941) main_mp4_pane_t2

0xd574,	// (0x00049f8c) main_mp4_pane_t3_ParamLimits

0xd574,	// (0x00049f8c) main_mp4_pane_t3

0x6f7b,	// (0x00043993) main_mp4_pane_t4_ParamLimits

0x6f7b,	// (0x00043993) main_mp4_pane_t4

0x0003,

0xf8ba,	// (0x0004c2d2) main_mp4_pane_t_ParamLimits

0xf8ba,	// (0x0004c2d2) main_mp4_pane_t

0x6fbf,	// (0x000439d7) mp4_progress_pane_ParamLimits

0x6fbf,	// (0x000439d7) mp4_progress_pane

0x7009,	// (0x00043a21) mp4_rocker_pane_ParamLimits

0x7009,	// (0x00043a21) mp4_rocker_pane

0xd59c,	// (0x00049fb4) mp4_progress_pane_t1

0xd5b5,	// (0x00049fcd) mp4_progress_pane_t2

0x0001,

0xf8c3,	// (0x0004c2db) mp4_progress_pane_t

0xd5ce,	// (0x00049fe6) mup_progress_pane_cp04

0xccd5,	// (0x000496ed) mp4_rocker_pane_g1

0x7029,	// (0x00043a41) aid_cell_size_keypad2_ParamLimits

0x7029,	// (0x00043a41) aid_cell_size_keypad2

0x7039,	// (0x00043a51) dialer2_ne_pane_ParamLimits

0x7039,	// (0x00043a51) dialer2_ne_pane

0x7047,	// (0x00043a5f) grid_dialer2_keypad_pane_ParamLimits

0x7047,	// (0x00043a5f) grid_dialer2_keypad_pane

0xd974,	// (0x0004a38c) bg_popup_call_pane_cp07_ParamLimits

0xd974,	// (0x0004a38c) bg_popup_call_pane_cp07

0x7057,	// (0x00043a6f) dialer2_ne_pane_t1_ParamLimits

0x7057,	// (0x00043a6f) dialer2_ne_pane_t1

0x707c,	// (0x00043a94) cell_dialer2_keypad_pane_ParamLimits

0x707c,	// (0x00043a94) cell_dialer2_keypad_pane

0xd5ec,	// (0x0004a004) bg_button_pane_pane_cp04_ParamLimits

0xd5ec,	// (0x0004a004) bg_button_pane_pane_cp04

0x7091,	// (0x00043aa9) cell_dialer2_keypad_pane_g1_ParamLimits

0x7091,	// (0x00043aa9) cell_dialer2_keypad_pane_g1

0x3259,	// (0x0003fc71) aid_placing_vt_set_content_ParamLimits

0x3259,	// (0x0003fc71) aid_placing_vt_set_content

0x3285,	// (0x0003fc9d) aid_placing_vt_set_title_ParamLimits

0x3285,	// (0x0003fc9d) aid_placing_vt_set_title

0xa0df,	// (0x00046af7) main_image3_pane

0x712b,	// (0x00043b43) area_side_right_pane_cp01_ParamLimits

0x712b,	// (0x00043b43) area_side_right_pane_cp01

0xa6cd,	// (0x000470e5) main_image3_pane_g1_ParamLimits

0xa6cd,	// (0x000470e5) main_image3_pane_g1

0x7158,	// (0x00043b70) main_image3_pane_g2_ParamLimits

0x7158,	// (0x00043b70) main_image3_pane_g2

0x7171,	// (0x00043b89) main_image3_pane_g3_ParamLimits

0x7171,	// (0x00043b89) main_image3_pane_g3

0x718a,	// (0x00043ba2) main_image3_pane_g4_ParamLimits

0x718a,	// (0x00043ba2) main_image3_pane_g4

0x0003,

0xf8d2,	// (0x0004c2ea) main_image3_pane_g_ParamLimits

0xf8d2,	// (0x0004c2ea) main_image3_pane_g

0x71a3,	// (0x00043bbb) main_image3_pane_t1_ParamLimits

0x71a3,	// (0x00043bbb) main_image3_pane_t1

0x71c8,	// (0x00043be0) main_image3_pane_t2_ParamLimits

0x71c8,	// (0x00043be0) main_image3_pane_t2

0x71e7,	// (0x00043bff) main_image3_pane_t3_ParamLimits

0x71e7,	// (0x00043bff) main_image3_pane_t3

0x0003,

0xf8db,	// (0x0004c2f3) main_image3_pane_t_ParamLimits

0xf8db,	// (0x0004c2f3) main_image3_pane_t

0xd966,	// (0x0004a37e) grid_sctrl_middle_pane_cp01_ParamLimits

0xd966,	// (0x0004a37e) grid_sctrl_middle_pane_cp01

0x7248,	// (0x00043c60) cell_sctrl_middle_pane_cp01_ParamLimits

0x7248,	// (0x00043c60) cell_sctrl_middle_pane_cp01

0x7259,	// (0x00043c71) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x7259,	// (0x00043c71) cell_sctrl_middle_pane_cp01_g1

0xa0df,	// (0x00046af7) main_call4_pane

0x7266,	// (0x00043c7e) aid_size_button_call4_ParamLimits

0x7266,	// (0x00043c7e) aid_size_button_call4

0x7296,	// (0x00043cae) call4_windows_pane_ParamLimits

0x7296,	// (0x00043cae) call4_windows_pane

0x72b0,	// (0x00043cc8) grid_call4_button_pane_ParamLimits

0x72b0,	// (0x00043cc8) grid_call4_button_pane

0xd5f8,	// (0x0004a010) call4_windows_conf_pane

0xd60f,	// (0x0004a027) popup_call4_audio_first_window_ParamLimits

0xd60f,	// (0x0004a027) popup_call4_audio_first_window

0xd65b,	// (0x0004a073) popup_call4_audio_second_window_ParamLimits

0xd65b,	// (0x0004a073) popup_call4_audio_second_window

0xd66f,	// (0x0004a087) popup_call4_audio_wait_window_ParamLimits

0xd66f,	// (0x0004a087) popup_call4_audio_wait_window

0x72d4,	// (0x00043cec) cell_call4_button_pane_ParamLimits

0x72d4,	// (0x00043cec) cell_call4_button_pane

0x72f9,	// (0x00043d11) bg_button_pane_cp09_ParamLimits

0x72f9,	// (0x00043d11) bg_button_pane_cp09

0x7305,	// (0x00043d1d) cell_call4_button_pane_g1_ParamLimits

0x7305,	// (0x00043d1d) cell_call4_button_pane_g1

0x7312,	// (0x00043d2a) cell_call4_button_pane_t1_ParamLimits

0x7312,	// (0x00043d2a) cell_call4_button_pane_t1

0xd6b7,	// (0x0004a0cf) popup_call4_audio_conf_window_ParamLimits

0xd6b7,	// (0x0004a0cf) popup_call4_audio_conf_window

0x65c1,	// (0x00042fd9) mup3_progress_pane_t1_ParamLimits

0x65e0,	// (0x00042ff8) mup3_progress_pane_t2_ParamLimits

0xcf9e,	// (0x000499b6) mup3_progress_pane_t3_ParamLimits

0xf7af,	// (0x0004c1c7) mup3_progress_pane_t_ParamLimits

0xcfbb,	// (0x000499d3) mup_progress_pane_cp03_ParamLimits

0x6af6,	// (0x0004350e) mup3_control_keys_pane_g4_copy1

0x6fed,	// (0x00043a05) mp4_rocker2_pane_ParamLimits

0x6fed,	// (0x00043a05) mp4_rocker2_pane

0xd6cb,	// (0x0004a0e3) mp4_rocker2_pane_g1

0xd6d3,	// (0x0004a0eb) mp4_rocker2_pane_g2

0x7324,	// (0x00043d3c) mp4_rocker2_pane_g3

0x732c,	// (0x00043d44) mp4_rocker2_pane_g4

0x7334,	// (0x00043d4c) mp4_rocker2_pane_g5

0x0004,

0xf8e4,	// (0x0004c2fc) mp4_rocker2_pane_g

0xa0df,	// (0x00046af7) main_camera4_pane

0xa0df,	// (0x00046af7) main_video4_pane

0x6d4f,	// (0x00043767) main_video_tele_dialer_pane_t1_ParamLimits

0x6d4f,	// (0x00043767) main_video_tele_dialer_pane_t1

0x6d61,	// (0x00043779) main_video_tele_dialer_pane_t2_ParamLimits

0x6d61,	// (0x00043779) main_video_tele_dialer_pane_t2

0x0001,

0xf89e,	// (0x0004c2b6) main_video_tele_dialer_pane_t_ParamLimits

0xf89e,	// (0x0004c2b6) main_video_tele_dialer_pane_t

0x7354,	// (0x00043d6c) cam4_autofocus_pane_ParamLimits

0x7354,	// (0x00043d6c) cam4_autofocus_pane

0x736e,	// (0x00043d86) cam4_image_uncrop_pane_ParamLimits

0x736e,	// (0x00043d86) cam4_image_uncrop_pane

0x7385,	// (0x00043d9d) cam4_indicators_pane_ParamLimits

0x7385,	// (0x00043d9d) cam4_indicators_pane

0x73a1,	// (0x00043db9) main_camera4_pane_g1_ParamLimits

0x73a1,	// (0x00043db9) main_camera4_pane_g1

0x73ad,	// (0x00043dc5) main_camera4_pane_g2_ParamLimits

0x73ad,	// (0x00043dc5) main_camera4_pane_g2

0x73ad,	// (0x00043dc5) main_camera4_pane_g3_ParamLimits

0x73ad,	// (0x00043dc5) main_camera4_pane_g3

0x73b9,	// (0x00043dd1) main_camera4_pane_g4_ParamLimits

0x73b9,	// (0x00043dd1) main_camera4_pane_g4

0x73c5,	// (0x00043ddd) main_camera4_pane_g5_ParamLimits

0x73c5,	// (0x00043ddd) main_camera4_pane_g5

0x0005,

0xf8ef,	// (0x0004c307) main_camera4_pane_g_ParamLimits

0xf8ef,	// (0x0004c307) main_camera4_pane_g

0x73df,	// (0x00043df7) main_camera4_pane_t1_ParamLimits

0x73df,	// (0x00043df7) main_camera4_pane_t1

0xcf23,	// (0x0004993b) bg_tb_trans_pane_cp06

0x742f,	// (0x00043e47) cam4_indicators_pane_g1

0x7440,	// (0x00043e58) cam4_indicators_pane_g2

0x0002,

0xf90a,	// (0x0004c322) cam4_indicators_pane_g

0x7458,	// (0x00043e70) cam4_indicators_pane_t1

0x7482,	// (0x00043e9a) main_video4_pane_g1_ParamLimits

0x7482,	// (0x00043e9a) main_video4_pane_g1

0x748e,	// (0x00043ea6) main_video4_pane_g2_ParamLimits

0x748e,	// (0x00043ea6) main_video4_pane_g2

0x749a,	// (0x00043eb2) main_video4_pane_g3_ParamLimits

0x749a,	// (0x00043eb2) main_video4_pane_g3

0x74a6,	// (0x00043ebe) main_video4_pane_g4_ParamLimits

0x74a6,	// (0x00043ebe) main_video4_pane_g4

0x0004,

0xf911,	// (0x0004c329) main_video4_pane_g_ParamLimits

0xf911,	// (0x0004c329) main_video4_pane_g

0x74c6,	// (0x00043ede) vid4_indicators_pane_ParamLimits

0x74c6,	// (0x00043ede) vid4_indicators_pane

0x74e5,	// (0x00043efd) video4_image_uncrop_cif_pane_ParamLimits

0x74e5,	// (0x00043efd) video4_image_uncrop_cif_pane

0x74f4,	// (0x00043f0c) video4_image_uncrop_nhd_pane_ParamLimits

0x74f4,	// (0x00043f0c) video4_image_uncrop_nhd_pane

0x736e,	// (0x00043d86) video4_image_uncrop_vga_pane_ParamLimits

0x736e,	// (0x00043d86) video4_image_uncrop_vga_pane

0xabed,	// (0x00047605) bg_tb_trans_pane_cp07

0x7509,	// (0x00043f21) vid4_indicators_pane_g1

0x751d,	// (0x00043f35) vid4_indicators_pane_g2

0x7531,	// (0x00043f49) vid4_indicators_pane_g3

0x0004,

0xf91c,	// (0x0004c334) vid4_indicators_pane_g

0x755e,	// (0x00043f76) vid4_indicators_pane_t1

0x7575,	// (0x00043f8d) cam4_autofocus_pane_g1

0x757d,	// (0x00043f95) cam4_autofocus_pane_g2

0x7585,	// (0x00043f9d) cam4_autofocus_pane_g3

0x0002,

0xf927,	// (0x0004c33f) cam4_autofocus_pane_g

0x758d,	// (0x00043fa5) cam4_autofocus_pane_g3_copy1

0x6d81,	// (0x00043799) video_down_pane_cp_t1

0x6d8f,	// (0x000437a7) video_down_pane_cp_t2

0x0001,

0xf8a3,	// (0x0004c2bb) video_down_pane_cp_t

0xd966,	// (0x0004a37e) popup_vitu2_window_ParamLimits

0xd966,	// (0x0004a37e) popup_vitu2_window

0x7595,	// (0x00043fad) aid_size_cell2_itu2_ParamLimits

0x7595,	// (0x00043fad) aid_size_cell2_itu2

0x75b7,	// (0x00043fcf) aid_size_cell_itu2_ParamLimits

0x75b7,	// (0x00043fcf) aid_size_cell_itu2

0xd974,	// (0x0004a38c) bg_popup_window_pane_cp09_ParamLimits

0xd974,	// (0x0004a38c) bg_popup_window_pane_cp09

0x75fb,	// (0x00044013) field_vitu2_entry_pane_ParamLimits

0x75fb,	// (0x00044013) field_vitu2_entry_pane

0x761b,	// (0x00044033) grid_vitu2_function_pane_ParamLimits

0x761b,	// (0x00044033) grid_vitu2_function_pane

0x765f,	// (0x00044077) grid_vitu2_itu_pane_ParamLimits

0x765f,	// (0x00044077) grid_vitu2_itu_pane

0x76d9,	// (0x000440f1) cell_vitu2_itu_pane_ParamLimits

0x76d9,	// (0x000440f1) cell_vitu2_itu_pane

0x76f2,	// (0x0004410a) cell_vitu2_function_pane_ParamLimits

0x76f2,	// (0x0004410a) cell_vitu2_function_pane

0xd6db,	// (0x0004a0f3) bg_popup_call_pane_cp08_ParamLimits

0xd6db,	// (0x0004a0f3) bg_popup_call_pane_cp08

0xd6f2,	// (0x0004a10a) field_vitu2_entry_pane_g1

0xd6fe,	// (0x0004a116) field_vitu2_entry_pane_g2

0x0002,

0xf92e,	// (0x0004c346) field_vitu2_entry_pane_g

0x121a,	// (0x0003dc32) field_vitu2_entry_pane_t1_ParamLimits

0x121a,	// (0x0003dc32) field_vitu2_entry_pane_t1

0x124c,	// (0x0003dc64) field_vitu2_entry_pane_t2_ParamLimits

0x124c,	// (0x0003dc64) field_vitu2_entry_pane_t2

0x0001,

0xf935,	// (0x0004c34d) field_vitu2_entry_pane_t_ParamLimits

0xf935,	// (0x0004c34d) field_vitu2_entry_pane_t

0x7733,	// (0x0004414b) bg_button_pane_cp010_ParamLimits

0x7733,	// (0x0004414b) bg_button_pane_cp010

0x7741,	// (0x00044159) cell_vitu2_itu_pane_g1

0x7761,	// (0x00044179) cell_vitu2_itu_pane_t1_ParamLimits

0x7761,	// (0x00044179) cell_vitu2_itu_pane_t1

0x1269,	// (0x0003dc81) cell_vitu2_itu_pane_t2_ParamLimits

0x1269,	// (0x0003dc81) cell_vitu2_itu_pane_t2

0x0002,

0xf93f,	// (0x0004c357) cell_vitu2_itu_pane_t_ParamLimits

0xf93f,	// (0x0004c357) cell_vitu2_itu_pane_t

0xabed,	// (0x00047605) bg_button_pane_cp011

0x77ad,	// (0x000441c5) cell_vitu2_function_pane_g1

0xa0df,	// (0x00046af7) main_myfav_hc_pane

0x7229,	// (0x00043c41) popup_image3_note_pane_ParamLimits

0x7229,	// (0x00043c41) popup_image3_note_pane

0x7237,	// (0x00043c4f) popup_image3_tool_bar_pane_ParamLimits

0x7237,	// (0x00043c4f) popup_image3_tool_bar_pane

0x12df,	// (0x0003dcf7) cell_vitu2_itu_pane_t3_ParamLimits

0x12df,	// (0x0003dcf7) cell_vitu2_itu_pane_t3

0xa0df,	// (0x00046af7) bg_popup_trans_pane

0xd720,	// (0x0004a138) grid_image3_tool_bar_pane

0xd72a,	// (0x0004a142) bg_popup_trans_pane_g1

0xac9a,	// (0x000476b2) bg_popup_trans_pane_g2

0xd732,	// (0x0004a14a) bg_popup_trans_pane_g3

0xd73a,	// (0x0004a152) bg_popup_trans_pane_g4

0xd742,	// (0x0004a15a) bg_popup_trans_pane_g5

0xd74a,	// (0x0004a162) bg_popup_trans_pane_g6

0xd752,	// (0x0004a16a) bg_popup_trans_pane_g7

0xd75a,	// (0x0004a172) bg_popup_trans_pane_g8

0xac7a,	// (0x00047692) bg_popup_trans_pane_g9

0x0008,

0xf946,	// (0x0004c35e) bg_popup_trans_pane_g

0xd762,	// (0x0004a17a) cell_image3_tool_bar_pane_ParamLimits

0xd762,	// (0x0004a17a) cell_image3_tool_bar_pane

0xccd5,	// (0x000496ed) cell_image3_tool_bar_pane_g1

0xa0df,	// (0x00046af7) bg_popup_trans_pane_cp1

0xd776,	// (0x0004a18e) popup_image3_note_pane_t1

0xd784,	// (0x0004a19c) popup_image3_note_pane_t2

0xd792,	// (0x0004a1aa) popup_image3_note_pane_t3

0x0002,

0xf959,	// (0x0004c371) popup_image3_note_pane_t

0xd7a0,	// (0x0004a1b8) popup_image3_note_pane_t3_copy1

0x77c1,	// (0x000441d9) bg_myfav_hc_instruction_pane_ParamLimits

0x77c1,	// (0x000441d9) bg_myfav_hc_instruction_pane

0x77d9,	// (0x000441f1) cell_myfav_contact_pane_ParamLimits

0x77d9,	// (0x000441f1) cell_myfav_contact_pane

0x77f3,	// (0x0004420b) cell_myfav_contact_pane_cp1_ParamLimits

0x77f3,	// (0x0004420b) cell_myfav_contact_pane_cp1

0x780b,	// (0x00044223) cell_myfav_contact_pane_cp2_ParamLimits

0x780b,	// (0x00044223) cell_myfav_contact_pane_cp2

0x7823,	// (0x0004423b) cell_myfav_contact_pane_cp3_ParamLimits

0x7823,	// (0x0004423b) cell_myfav_contact_pane_cp3

0x783a,	// (0x00044252) cell_myfav_contact_pane_cp4_ParamLimits

0x783a,	// (0x00044252) cell_myfav_contact_pane_cp4

0x7850,	// (0x00044268) cell_myfav_contact_pane_cp5_ParamLimits

0x7850,	// (0x00044268) cell_myfav_contact_pane_cp5

0x7864,	// (0x0004427c) cell_myfav_contact_pane_cp6_ParamLimits

0x7864,	// (0x0004427c) cell_myfav_contact_pane_cp6

0x7878,	// (0x00044290) cell_myfav_contact_pane_cp7_ParamLimits

0x7878,	// (0x00044290) cell_myfav_contact_pane_cp7

0xd7ae,	// (0x0004a1c6) listscroll_gen_pane_cp05

0x7890,	// (0x000442a8) main_myfav_hc_pane_g1_ParamLimits

0x7890,	// (0x000442a8) main_myfav_hc_pane_g1

0x78a6,	// (0x000442be) main_myfav_hc_pane_g2_ParamLimits

0x78a6,	// (0x000442be) main_myfav_hc_pane_g2

0x0002,

0xf960,	// (0x0004c378) main_myfav_hc_pane_g_ParamLimits

0xf960,	// (0x0004c378) main_myfav_hc_pane_g

0x78d6,	// (0x000442ee) main_myfav_hc_pane_t1_ParamLimits

0x78d6,	// (0x000442ee) main_myfav_hc_pane_t1

0xd7b7,	// (0x0004a1cf) main_myfav_hc_pane_t2_ParamLimits

0xd7b7,	// (0x0004a1cf) main_myfav_hc_pane_t2

0xd7c9,	// (0x0004a1e1) main_myfav_hc_pane_t3_ParamLimits

0xd7c9,	// (0x0004a1e1) main_myfav_hc_pane_t3

0x78ed,	// (0x00044305) main_myfav_hc_pane_t4_ParamLimits

0x78ed,	// (0x00044305) main_myfav_hc_pane_t4

0x0004,

0xf967,	// (0x0004c37f) main_myfav_hc_pane_t_ParamLimits

0xf967,	// (0x0004c37f) main_myfav_hc_pane_t

0xccd5,	// (0x000496ed) bg_myfav_hc_instruction_pane_g1

0xd7db,	// (0x0004a1f3) cell_myfav_contact_pane_g1_ParamLimits

0xd7db,	// (0x0004a1f3) cell_myfav_contact_pane_g1

0xd7db,	// (0x0004a1f3) cell_myfav_contact_pane_g2_ParamLimits

0xd7db,	// (0x0004a1f3) cell_myfav_contact_pane_g2

0xd7e7,	// (0x0004a1ff) cell_myfav_contact_pane_g3_ParamLimits

0xd7e7,	// (0x0004a1ff) cell_myfav_contact_pane_g3

0xcf88,	// (0x000499a0) cell_myfav_contact_pane_g4_ParamLimits

0xcf88,	// (0x000499a0) cell_myfav_contact_pane_g4

0xd7f4,	// (0x0004a20c) cell_myfav_contact_pane_g5_ParamLimits

0xd7f4,	// (0x0004a20c) cell_myfav_contact_pane_g5

0x0004,

0xf972,	// (0x0004c38a) cell_myfav_contact_pane_g_ParamLimits

0xf972,	// (0x0004c38a) cell_myfav_contact_pane_g

0x78be,	// (0x000442d6) main_myfav_hc_pane_g3_ParamLimits

0x78be,	// (0x000442d6) main_myfav_hc_pane_g3

0x243f,	// (0x0003ee57) popup_adpt_find_window

0x7917,	// (0x0004432f) afind_page_pane_ParamLimits

0x7917,	// (0x0004432f) afind_page_pane

0x7924,	// (0x0004433c) aid_size_cell_afind_ParamLimits

0x7924,	// (0x0004433c) aid_size_cell_afind

0x793e,	// (0x00044356) bg_popup_sub_pane_cp09_ParamLimits

0x793e,	// (0x00044356) bg_popup_sub_pane_cp09

0x794b,	// (0x00044363) find_pane_cp01_ParamLimits

0x794b,	// (0x00044363) find_pane_cp01

0xd800,	// (0x0004a218) grid_afind_control_pane_ParamLimits

0xd800,	// (0x0004a218) grid_afind_control_pane

0x7958,	// (0x00044370) grid_afind_pane_ParamLimits

0x7958,	// (0x00044370) grid_afind_pane

0x7972,	// (0x0004438a) cell_afind_pane_ParamLimits

0x7972,	// (0x0004438a) cell_afind_pane

0xccd5,	// (0x000496ed) afind_page_pane_g1

0x79ba,	// (0x000443d2) afind_page_pane_g2

0x79c3,	// (0x000443db) afind_page_pane_g3

0x0002,

0xf97d,	// (0x0004c395) afind_page_pane_g

0x79cc,	// (0x000443e4) afind_page_pane_t1

0xd814,	// (0x0004a22c) cell_afind_grid_control_pane_ParamLimits

0xd814,	// (0x0004a22c) cell_afind_grid_control_pane

0xd5ec,	// (0x0004a004) bg_button_pane_cp69_ParamLimits

0xd5ec,	// (0x0004a004) bg_button_pane_cp69

0x79ec,	// (0x00044404) cell_afind_pane_g1_ParamLimits

0x79ec,	// (0x00044404) cell_afind_pane_g1

0x79f9,	// (0x00044411) cell_afind_pane_t1_ParamLimits

0x79f9,	// (0x00044411) cell_afind_pane_t1

0xaa67,	// (0x0004747f) bg_button_pane_cp72

0xd823,	// (0x0004a23b) cell_afind_grid_control_pane_g1

0x5027,	// (0x00041a3f) aid_image_placing_area_ParamLimits

0x5027,	// (0x00041a3f) aid_image_placing_area

0xd2ae,	// (0x00049cc6) field_vitu_entry_pane_g1_ParamLimits

0xd2ae,	// (0x00049cc6) field_vitu_entry_pane_g1

0xd2ba,	// (0x00049cd2) field_vitu_entry_pane_g2_ParamLimits

0xd2ba,	// (0x00049cd2) field_vitu_entry_pane_g2

0x0001,

0xf82e,	// (0x0004c246) field_vitu_entry_pane_g_ParamLimits

0xf82e,	// (0x0004c246) field_vitu_entry_pane_g

0x6b7f,	// (0x00043597) cell_vitu_itu_pane_g1_ParamLimits

0x6bc1,	// (0x000435d9) cell_vitu_itu_pane_t3_ParamLimits

0x6bc1,	// (0x000435d9) cell_vitu_itu_pane_t3

0xd59c,	// (0x00049fb4) mp4_progress_pane_t1_ParamLimits

0xd5b5,	// (0x00049fcd) mp4_progress_pane_t2_ParamLimits

0xf8c3,	// (0x0004c2db) mp4_progress_pane_t_ParamLimits

0xd5ce,	// (0x00049fe6) mup_progress_pane_cp04_ParamLimits

0x7901,	// (0x00044319) main_myfav_hc_pane_t5_ParamLimits

0x7901,	// (0x00044319) main_myfav_hc_pane_t5

0x22cd,	// (0x0003ece5) aid_zoom_text_primary

0x243f,	// (0x0003ee57) popup_adpt_find_window_ParamLimits

0xabed,	// (0x00047605) main_cam_set_pane

0x7393,	// (0x00043dab) cam4_zoom_pane_ParamLimits

0x7393,	// (0x00043dab) cam4_zoom_pane

0x7a0b,	// (0x00044423) main_cam_set_pane_g1_ParamLimits

0x7a0b,	// (0x00044423) main_cam_set_pane_g1

0x7a19,	// (0x00044431) main_cam_set_pane_g2_ParamLimits

0x7a19,	// (0x00044431) main_cam_set_pane_g2

0x0001,

0xf984,	// (0x0004c39c) main_cam_set_pane_g_ParamLimits

0xf984,	// (0x0004c39c) main_cam_set_pane_g

0x7a25,	// (0x0004443d) main_cam_set_pane_t1_ParamLimits

0x7a25,	// (0x0004443d) main_cam_set_pane_t1

0x7a41,	// (0x00044459) main_cset_listscroll_pane_ParamLimits

0x7a41,	// (0x00044459) main_cset_listscroll_pane

0x7a6c,	// (0x00044484) main_cset_slider_pane_ParamLimits

0x7a6c,	// (0x00044484) main_cset_slider_pane

0xd834,	// (0x0004a24c) main_cset_list_pane_ParamLimits

0xd834,	// (0x0004a24c) main_cset_list_pane

0xd844,	// (0x0004a25c) scroll_pane_cp028

0x7a8b,	// (0x000444a3) aid_area_touch_slider

0x7aa7,	// (0x000444bf) cset_slider_pane

0x7ad1,	// (0x000444e9) main_cset_slider_pane_g1

0x7ae6,	// (0x000444fe) main_cset_slider_pane_g2

0x0011,

0xf989,	// (0x0004c3a1) main_cset_slider_pane_g

0xd87d,	// (0x0004a295) main_cset_slider_pane_t1

0x7bac,	// (0x000445c4) main_cset_slider_pane_t2

0x7bc6,	// (0x000445de) main_cset_slider_pane_t3

0x7be0,	// (0x000445f8) main_cset_slider_pane_t4

0x7bfe,	// (0x00044616) main_cset_slider_pane_t5

0x7c1c,	// (0x00044634) main_cset_slider_pane_t6

0x7c33,	// (0x0004464b) main_cset_slider_pane_t7

0x000e,

0xf9ae,	// (0x0004c3c6) main_cset_slider_pane_t

0x7d41,	// (0x00044759) cset_list_set_pane_ParamLimits

0x7d41,	// (0x00044759) cset_list_set_pane

0x7d5a,	// (0x00044772) aid_position_infowindow_above

0x7d62,	// (0x0004477a) aid_position_infowindow_below

0x1331,	// (0x0003dd49) cset_list_set_pane_g1_ParamLimits

0x1331,	// (0x0003dd49) cset_list_set_pane_g1

0x133d,	// (0x0003dd55) cset_list_set_pane_g3_ParamLimits

0x133d,	// (0x0003dd55) cset_list_set_pane_g3

0x0001,

0xf9cd,	// (0x0004c3e5) cset_list_set_pane_g_ParamLimits

0xf9cd,	// (0x0004c3e5) cset_list_set_pane_g

0x134c,	// (0x0003dd64) cset_list_set_pane_t1_ParamLimits

0x134c,	// (0x0003dd64) cset_list_set_pane_t1

0xabed,	// (0x00047605) list_highlight_pane_cp021_ParamLimits

0xabed,	// (0x00047605) list_highlight_pane_cp021

0xb5ac,	// (0x00047fc4) cset_slider_pane_g1

0xb5be,	// (0x00047fd6) cset_slider_pane_g2

0xb5b5,	// (0x00047fcd) cset_slider_pane_g3

0x0002,

0xf9d2,	// (0x0004c3ea) cset_slider_pane_g

0x7d6a,	// (0x00044782) aid_area_touch_cam4_zoom

0x7d72,	// (0x0004478a) cam4_zoom_cont_pane

0x7d7a,	// (0x00044792) cam4_zoom_pane_g1

0x7d82,	// (0x0004479a) cam4_zoom_pane_g2

0x7d8a,	// (0x000447a2) cam4_zoom_pane_g3

0x0002,

0xf9d9,	// (0x0004c3f1) cam4_zoom_pane_g

0xd4a5,	// (0x00049ebd) cam4_zoom_cont_pane_g1

0xd982,	// (0x0004a39a) cam4_zoom_cont_pane_g2

0xd98b,	// (0x0004a3a3) cam4_zoom_cont_pane_g3

0x0002,

0xf9e0,	// (0x0004c3f8) cam4_zoom_cont_pane_g

0x7280,	// (0x00043c98) call4_image_pane_ParamLimits

0x7280,	// (0x00043c98) call4_image_pane

0xd5f8,	// (0x0004a010) call4_windows_conf_pane_ParamLimits

0xd639,	// (0x0004a051) popup_call4_audio_in_window_ParamLimits

0xd639,	// (0x0004a051) popup_call4_audio_in_window

0xa0df,	// (0x00046af7) bg_popup_call2_act_pane_cp02

0xd6af,	// (0x0004a0c7) call4_list_conf_pane

0xccd5,	// (0x000496ed) call4_image_pane_g1

0xccd5,	// (0x000496ed) call4_image_pane_g2

0x0001,

0xf6ef,	// (0x0004c107) call4_image_pane_g

0xd91d,	// (0x0004a335) list_single_graphic_popup_conf4_pane_ParamLimits

0xd91d,	// (0x0004a335) list_single_graphic_popup_conf4_pane

0xa0df,	// (0x00046af7) list_highlight_pane_cp022

0xd930,	// (0x0004a348) list_single_graphic_popup_conf4_pane_g1

0xb1b6,	// (0x00047bce) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf9e7,	// (0x0004c3ff) list_single_graphic_popup_conf4_pane_g

0xd938,	// (0x0004a350) list_single_graphic_popup_conf4_pane_t1

0x33e9,	// (0x0003fe01) popup_vtel_slider_window_ParamLimits

0x33e9,	// (0x0003fe01) popup_vtel_slider_window

0xd5da,	// (0x00049ff2) dialer2_ne_pane_t2_ParamLimits

0xd5da,	// (0x00049ff2) dialer2_ne_pane_t2

0x0001,

0xf8c8,	// (0x0004c2e0) dialer2_ne_pane_t_ParamLimits

0xf8c8,	// (0x0004c2e0) dialer2_ne_pane_t

0xabed,	// (0x00047605) bg_popup_sub_pane_cp010_ParamLimits

0xabed,	// (0x00047605) bg_popup_sub_pane_cp010

0x7d92,	// (0x000447aa) popup_vtel_slider_window_g1_ParamLimits

0x7d92,	// (0x000447aa) popup_vtel_slider_window_g1

0x7d9e,	// (0x000447b6) popup_vtel_slider_window_g2_ParamLimits

0x7d9e,	// (0x000447b6) popup_vtel_slider_window_g2

0x0003,

0xf9ec,	// (0x0004c404) popup_vtel_slider_window_g_ParamLimits

0xf9ec,	// (0x0004c404) popup_vtel_slider_window_g

0x7de6,	// (0x000447fe) vtel_slider_pane_ParamLimits

0x7de6,	// (0x000447fe) vtel_slider_pane

0x7df5,	// (0x0004480d) vtel_slider_pane_g1_ParamLimits

0x7df5,	// (0x0004480d) vtel_slider_pane_g1

0x7e02,	// (0x0004481a) vtel_slider_pane_g2_ParamLimits

0x7e02,	// (0x0004481a) vtel_slider_pane_g2

0x7e0f,	// (0x00044827) vtel_slider_pane_g3_ParamLimits

0x7e0f,	// (0x00044827) vtel_slider_pane_g3

0x7df5,	// (0x0004480d) vtel_slider_pane_g4_ParamLimits

0x7df5,	// (0x0004480d) vtel_slider_pane_g4

0x7e1c,	// (0x00044834) vtel_slider_pane_g5_ParamLimits

0x7e1c,	// (0x00044834) vtel_slider_pane_g5

0x0004,

0xf9f5,	// (0x0004c40d) vtel_slider_pane_g_ParamLimits

0xf9f5,	// (0x0004c40d) vtel_slider_pane_g

0xabed,	// (0x00047605) main_gallery2_pane

0x75dd,	// (0x00043ff5) aid_size_row_itut2_dropdow_list_ParamLimits

0x75dd,	// (0x00043ff5) aid_size_row_itut2_dropdow_list

0x763d,	// (0x00044055) grid_vitu2_function_top_pane_ParamLimits

0x763d,	// (0x00044055) grid_vitu2_function_top_pane

0x7697,	// (0x000440af) popup_vitu2_dropdown_list_window_ParamLimits

0x7697,	// (0x000440af) popup_vitu2_dropdown_list_window

0x76b7,	// (0x000440cf) popup_vitu2_match_list_window

0x7e29,	// (0x00044841) cell_vitu2_function_top_pane_ParamLimits

0x7e29,	// (0x00044841) cell_vitu2_function_top_pane

0x7e43,	// (0x0004485b) cell_vitu2_function_top_pane_cp01_ParamLimits

0x7e43,	// (0x0004485b) cell_vitu2_function_top_pane_cp01

0x7e5f,	// (0x00044877) cell_vitu2_function_top_wide_pane_ParamLimits

0x7e5f,	// (0x00044877) cell_vitu2_function_top_wide_pane

0xabed,	// (0x00047605) bg_button_pane_cp012

0x7e7b,	// (0x00044893) cell_vitu2_function_top_pane_g1

0x7e8f,	// (0x000448a7) bg_button_pane_cp013_ParamLimits

0x7e8f,	// (0x000448a7) bg_button_pane_cp013

0x7eab,	// (0x000448c3) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x7eab,	// (0x000448c3) cell_vitu2_function_top_wide_pane_g1

0xd966,	// (0x0004a37e) bg_popup_sub_pane_cp20

0x7ec3,	// (0x000448db) list_vitu2_match_list_pane

0xd72a,	// (0x0004a142) bg_popup_sub_pane_cp20_g1

0xd732,	// (0x0004a14a) bg_popup_sub_pane_cp20_g2

0xac9a,	// (0x000476b2) bg_popup_sub_pane_cp20_g3

0xd73a,	// (0x0004a152) bg_popup_sub_pane_cp20_g4

0xac7a,	// (0x00047692) bg_popup_sub_pane_cp20_g5

0xd994,	// (0x0004a3ac) bg_popup_sub_pane_cp20_g6

0xd74a,	// (0x0004a162) bg_popup_sub_pane_cp20_g7

0xd752,	// (0x0004a16a) bg_popup_sub_pane_cp20_g8

0xd75a,	// (0x0004a172) bg_popup_sub_pane_cp20_g9

0x0008,

0xfa00,	// (0x0004c418) bg_popup_sub_pane_cp20_g

0x7edb,	// (0x000448f3) list_vitu2_match_list_item_pane_ParamLimits

0x7edb,	// (0x000448f3) list_vitu2_match_list_item_pane

0x7eed,	// (0x00044905) list_vitu2_match_list_item_pane_t1

0xa0df,	// (0x00046af7) bg_popup_sub_pane_cp21

0xb0d0,	// (0x00047ae8) grid_vitu2_dropdown_list_pane

0x7efb,	// (0x00044913) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x7efb,	// (0x00044913) cell_vitu2_dropdown_list_char_pane

0x7f1c,	// (0x00044934) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x7f1c,	// (0x00044934) cell_vitu2_dropdown_list_ctrl_pane

0xd99c,	// (0x0004a3b4) cell_vitu2_dropdown_list_char_pane_g1

0xd9a5,	// (0x0004a3bd) cell_vitu2_dropdown_list_char_pane_g2

0xd9ae,	// (0x0004a3c6) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xfa1d,	// (0x0004c435) cell_vitu2_dropdown_list_char_pane_g

0x7f48,	// (0x00044960) cell_vitu2_dropdown_list_char_pane_t1

0x7f56,	// (0x0004496e) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x7f56,	// (0x0004496e) cell_vitu2_dropdown_list_ctrl_pane_g1

0x7f66,	// (0x0004497e) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x7f66,	// (0x0004497e) cell_vitu2_dropdown_list_ctrl_pane_g2

0x7f77,	// (0x0004498f) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x7f77,	// (0x0004498f) cell_vitu2_dropdown_list_ctrl_pane_g3

0x7f87,	// (0x0004499f) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x7f87,	// (0x0004499f) cell_vitu2_dropdown_list_ctrl_pane_g4

0xcf23,	// (0x0004993b) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0xcf23,	// (0x0004993b) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa24,	// (0x0004c43c) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa24,	// (0x0004c43c) cell_vitu2_dropdown_list_ctrl_pane_g

0x7fa3,	// (0x000449bb) aid_size_cell_gallery2_ParamLimits

0x7fa3,	// (0x000449bb) aid_size_cell_gallery2

0x7fbd,	// (0x000449d5) grid_gallery2_pane_ParamLimits

0x7fbd,	// (0x000449d5) grid_gallery2_pane

0x6a06,	// (0x0004341e) scroll_pane_cp029_ParamLimits

0x6a06,	// (0x0004341e) scroll_pane_cp029

0x7fd4,	// (0x000449ec) cell_gallery2_pane_ParamLimits

0x7fd4,	// (0x000449ec) cell_gallery2_pane

0xd9b7,	// (0x0004a3cf) cell_gallery2_pane_g2

0x8026,	// (0x00044a3e) cell_gallery2_pane_g3

0xd9bf,	// (0x0004a3d7) cell_gallery2_pane_g4

0xd9c7,	// (0x0004a3df) cell_gallery2_pane_g5

0xaa15,	// (0x0004742d) grid_highlight_pane_cp10

0x76b7,	// (0x000440cf) popup_vitu2_match_list_window_ParamLimits

0x76c9,	// (0x000440e1) popup_vitu2_query_window_ParamLimits

0x76c9,	// (0x000440e1) popup_vitu2_query_window

0xa0df,	// (0x00046af7) bg_vitu2_candi_button_pane

0xd99c,	// (0x0004a3b4) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xd9a5,	// (0x0004a3bd) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xd9ae,	// (0x0004a3c6) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x13b7,	// (0x0003ddcf) bg_button_pane_cp015

0x802e,	// (0x00044a46) bg_button_pane_cp016

0x8041,	// (0x00044a59) bg_button_pane_cp017

0xc8cd,	// (0x000492e5) bg_popup_sub_pane_cp22

0xd9cf,	// (0x0004a3e7) popup_vitu2_query_window_g1

0x13ea,	// (0x0003de02) popup_vitu2_query_window_g2

0x0002,

0xfa2f,	// (0x0004c447) popup_vitu2_query_window_g

0x1407,	// (0x0003de1f) popup_vitu2_query_window_t1_ParamLimits

0x1407,	// (0x0003de1f) popup_vitu2_query_window_t1

0x143a,	// (0x0003de52) popup_vitu2_query_window_t2_ParamLimits

0x143a,	// (0x0003de52) popup_vitu2_query_window_t2

0x144c,	// (0x0003de64) popup_vitu2_query_window_t3_ParamLimits

0x144c,	// (0x0003de64) popup_vitu2_query_window_t3

0x8065,	// (0x00044a7d) popup_vitu2_query_window_t4_ParamLimits

0x8065,	// (0x00044a7d) popup_vitu2_query_window_t4

0x8086,	// (0x00044a9e) popup_vitu2_query_window_t5_ParamLimits

0x8086,	// (0x00044a9e) popup_vitu2_query_window_t5

0x0006,

0xfa36,	// (0x0004c44e) popup_vitu2_query_window_t_ParamLimits

0xfa36,	// (0x0004c44e) popup_vitu2_query_window_t

0xd82c,	// (0x0004a244) main_cset_text_pane

0x7a8b,	// (0x000444a3) aid_area_touch_slider_ParamLimits

0x7aa7,	// (0x000444bf) cset_slider_pane_ParamLimits

0x7ad1,	// (0x000444e9) main_cset_slider_pane_g1_ParamLimits

0x7ae6,	// (0x000444fe) main_cset_slider_pane_g2_ParamLimits

0xd84d,	// (0x0004a265) main_cset_slider_pane_g3_ParamLimits

0xd84d,	// (0x0004a265) main_cset_slider_pane_g3

0x7afb,	// (0x00044513) main_cset_slider_pane_g4_ParamLimits

0x7afb,	// (0x00044513) main_cset_slider_pane_g4

0x7b0a,	// (0x00044522) main_cset_slider_pane_g5_ParamLimits

0x7b0a,	// (0x00044522) main_cset_slider_pane_g5

0x7b18,	// (0x00044530) main_cset_slider_pane_g6_ParamLimits

0x7b18,	// (0x00044530) main_cset_slider_pane_g6

0xf989,	// (0x0004c3a1) main_cset_slider_pane_g_ParamLimits

0xd87d,	// (0x0004a295) main_cset_slider_pane_t1_ParamLimits

0x7bac,	// (0x000445c4) main_cset_slider_pane_t2_ParamLimits

0x7bc6,	// (0x000445de) main_cset_slider_pane_t3_ParamLimits

0x7be0,	// (0x000445f8) main_cset_slider_pane_t4_ParamLimits

0x7bfe,	// (0x00044616) main_cset_slider_pane_t5_ParamLimits

0x7c1c,	// (0x00044634) main_cset_slider_pane_t6_ParamLimits

0x7c33,	// (0x0004464b) main_cset_slider_pane_t7_ParamLimits

0x7c61,	// (0x00044679) main_cset_slider_pane_t8_ParamLimits

0x7c61,	// (0x00044679) main_cset_slider_pane_t8

0x7c89,	// (0x000446a1) main_cset_slider_pane_t9_ParamLimits

0x7c89,	// (0x000446a1) main_cset_slider_pane_t9

0x7cb1,	// (0x000446c9) main_cset_slider_pane_t10_ParamLimits

0x7cb1,	// (0x000446c9) main_cset_slider_pane_t10

0x7cd9,	// (0x000446f1) main_cset_slider_pane_t11_ParamLimits

0x7cd9,	// (0x000446f1) main_cset_slider_pane_t11

0x7d03,	// (0x0004471b) main_cset_slider_pane_t12_ParamLimits

0x7d03,	// (0x0004471b) main_cset_slider_pane_t12

0x7d22,	// (0x0004473a) main_cset_slider_pane_t13_ParamLimits

0x7d22,	// (0x0004473a) main_cset_slider_pane_t13

0xf9ae,	// (0x0004c3c6) main_cset_slider_pane_t_ParamLimits

0xa0df,	// (0x00046af7) bg_popup_sub_pane_cp011

0xd9db,	// (0x0004a3f3) main_cset_text_pane_g1

0xd9e3,	// (0x0004a3fb) main_cset_text_pane_t1

0xd9f1,	// (0x0004a409) main_cset_text_pane_t2

0xd9ff,	// (0x0004a417) main_cset_text_pane_t3

0xda0d,	// (0x0004a425) main_cset_text_pane_t4

0xda1b,	// (0x0004a433) main_cset_text_pane_t5

0xda29,	// (0x0004a441) main_cset_text_pane_t6

0xda37,	// (0x0004a44f) main_cset_text_pane_t7

0x0006,

0xfa45,	// (0x0004c45d) main_cset_text_pane_t

0xa0df,	// (0x00046af7) main_cam4_burst_pane

0xa0df,	// (0x00046af7) main_cam5_pane

0x79da,	// (0x000443f2) bg_button_pane_cp019

0x79e3,	// (0x000443fb) bg_button_pane_cp020

0xd859,	// (0x0004a271) main_cset_slider_pane_g7_ParamLimits

0xd859,	// (0x0004a271) main_cset_slider_pane_g7

0xd865,	// (0x0004a27d) main_cset_slider_pane_g8_ParamLimits

0xd865,	// (0x0004a27d) main_cset_slider_pane_g8

0x7b2c,	// (0x00044544) main_cset_slider_pane_g9_ParamLimits

0x7b2c,	// (0x00044544) main_cset_slider_pane_g9

0x7b38,	// (0x00044550) main_cset_slider_pane_g10_ParamLimits

0x7b38,	// (0x00044550) main_cset_slider_pane_g10

0x7b44,	// (0x0004455c) main_cset_slider_pane_g11_ParamLimits

0x7b44,	// (0x0004455c) main_cset_slider_pane_g11

0x7b50,	// (0x00044568) main_cset_slider_pane_g12_ParamLimits

0x7b50,	// (0x00044568) main_cset_slider_pane_g12

0x7b5c,	// (0x00044574) main_cset_slider_pane_g13_ParamLimits

0x7b5c,	// (0x00044574) main_cset_slider_pane_g13

0x7b6a,	// (0x00044582) main_cset_slider_pane_g14_ParamLimits

0x7b6a,	// (0x00044582) main_cset_slider_pane_g14

0x7b78,	// (0x00044590) main_cset_slider_pane_g15_ParamLimits

0x7b78,	// (0x00044590) main_cset_slider_pane_g15

0xd8ab,	// (0x0004a2c3) main_cset_slider_pane_t14_ParamLimits

0xd8ab,	// (0x0004a2c3) main_cset_slider_pane_t14

0xd8e4,	// (0x0004a2fc) main_cset_slider_pane_t15_ParamLimits

0xd8e4,	// (0x0004a2fc) main_cset_slider_pane_t15

0x80a7,	// (0x00044abf) aid_cam4_burst_size_cell_ParamLimits

0x80a7,	// (0x00044abf) aid_cam4_burst_size_cell

0x80c3,	// (0x00044adb) grid_cam4_burst_pane_ParamLimits

0x80c3,	// (0x00044adb) grid_cam4_burst_pane

0x80f3,	// (0x00044b0b) linegrid_cam4_burst_pane_ParamLimits

0x80f3,	// (0x00044b0b) linegrid_cam4_burst_pane

0x8113,	// (0x00044b2b) scroll_pane_cp30_ParamLimits

0x8113,	// (0x00044b2b) scroll_pane_cp30

0x811f,	// (0x00044b37) cell_cam4_burst_pane_ParamLimits

0x811f,	// (0x00044b37) cell_cam4_burst_pane

0xda45,	// (0x0004a45d) linegrid_cam4_burst_pane_g1_ParamLimits

0xda45,	// (0x0004a45d) linegrid_cam4_burst_pane_g1

0x815b,	// (0x00044b73) linegrid_cam4_burst_pane_g2_ParamLimits

0x815b,	// (0x00044b73) linegrid_cam4_burst_pane_g2

0xda52,	// (0x0004a46a) linegrid_cam4_burst_pane_g3_ParamLimits

0xda52,	// (0x0004a46a) linegrid_cam4_burst_pane_g3

0x0002,

0xfa54,	// (0x0004c46c) linegrid_cam4_burst_pane_g_ParamLimits

0xfa54,	// (0x0004c46c) linegrid_cam4_burst_pane_g

0x816c,	// (0x00044b84) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x816c,	// (0x00044b84) linegrid_cam4_burst_pane_g3_copy1

0xda5f,	// (0x0004a477) linegrid_cam4_burst_pane_g4_ParamLimits

0xda5f,	// (0x0004a477) linegrid_cam4_burst_pane_g4

0x8186,	// (0x00044b9e) linegrid_cam4_burst_pane_g5_ParamLimits

0x8186,	// (0x00044b9e) linegrid_cam4_burst_pane_g5

0x8197,	// (0x00044baf) linegrid_cam4_burst_pane_g6_ParamLimits

0x8197,	// (0x00044baf) linegrid_cam4_burst_pane_g6

0xda6c,	// (0x0004a484) linegrid_cam4_burst_pane_g7_ParamLimits

0xda6c,	// (0x0004a484) linegrid_cam4_burst_pane_g7

0x81a8,	// (0x00044bc0) cell_cam4_burst_pane_g1

0xda85,	// (0x0004a49d) main_cam5_pane_t1_ParamLimits

0xda85,	// (0x0004a49d) main_cam5_pane_t1

0xda97,	// (0x0004a4af) main_cam5_pane_t2_ParamLimits

0xda97,	// (0x0004a4af) main_cam5_pane_t2

0xdaa9,	// (0x0004a4c1) main_cam5_pane_t3_ParamLimits

0xdaa9,	// (0x0004a4c1) main_cam5_pane_t3

0xdabb,	// (0x0004a4d3) main_cam5_pane_t4_ParamLimits

0xdabb,	// (0x0004a4d3) main_cam5_pane_t4

0xdad3,	// (0x0004a4eb) main_cam5_pane_t5_ParamLimits

0xdad3,	// (0x0004a4eb) main_cam5_pane_t5

0xdae7,	// (0x0004a4ff) main_cam5_pane_t6_ParamLimits

0xdae7,	// (0x0004a4ff) main_cam5_pane_t6

0xdafb,	// (0x0004a513) main_cam5_pane_t7_ParamLimits

0xdafb,	// (0x0004a513) main_cam5_pane_t7

0xdb0d,	// (0x0004a525) main_cam5_pane_t8_ParamLimits

0xdb0d,	// (0x0004a525) main_cam5_pane_t8

0xdb29,	// (0x0004a541) main_cam5_pane_t9_ParamLimits

0xdb29,	// (0x0004a541) main_cam5_pane_t9

0xdb3b,	// (0x0004a553) main_cam5_pane_t10_ParamLimits

0xdb3b,	// (0x0004a553) main_cam5_pane_t10

0xdb4d,	// (0x0004a565) main_cam5_pane_t11_ParamLimits

0xdb4d,	// (0x0004a565) main_cam5_pane_t11

0xdb5f,	// (0x0004a577) main_cam5_pane_t12_ParamLimits

0xdb5f,	// (0x0004a577) main_cam5_pane_t12

0xdb74,	// (0x0004a58c) main_cam5_pane_t13_ParamLimits

0xdb74,	// (0x0004a58c) main_cam5_pane_t13

0x000c,

0xfa60,	// (0x0004c478) main_cam5_pane_t_ParamLimits

0xfa60,	// (0x0004c478) main_cam5_pane_t

0x24f5,	// (0x0003ef0d) popup_scut_keymap_window_ParamLimits

0x24f5,	// (0x0003ef0d) popup_scut_keymap_window

0x81bb,	// (0x00044bd3) aid_size_cell_brow_shortcut

0xaa15,	// (0x0004742d) bg_popup_window_pane_cp010

0x81c7,	// (0x00044bdf) grid_scut_pane

0x81d3,	// (0x00044beb) cell_scut_pane_ParamLimits

0x81d3,	// (0x00044beb) cell_scut_pane

0x81ea,	// (0x00044c02) cell_scut_pane_g1

0xdb91,	// (0x0004a5a9) cell_scut_pane_t1

0xdba0,	// (0x0004a5b8) cell_scut_pane_t2

0x81f3,	// (0x00044c0b) cell_scut_pane_t3

0x0002,

0xfa7b,	// (0x0004c493) cell_scut_pane_t

0x61ea,	// (0x00042c02) main_mup3_pane_g8_ParamLimits

0x61ea,	// (0x00042c02) main_mup3_pane_g8

0x75eb,	// (0x00044003) area_vitu2_query_pane_ParamLimits

0x75eb,	// (0x00044003) area_vitu2_query_pane

0x13c9,	// (0x0003dde1) input_focus_pane_cp08

0xdbaf,	// (0x0004a5c7) area_vitu2_query_pane_g1

0x14ca,	// (0x0003dee2) area_vitu2_query_pane_g2

0x0001,

0xfa82,	// (0x0004c49a) area_vitu2_query_pane_g

0x8201,	// (0x00044c19) area_vitu2_query_pane_t1_ParamLimits

0x8201,	// (0x00044c19) area_vitu2_query_pane_t1

0x8215,	// (0x00044c2d) area_vitu2_query_pane_t2_ParamLimits

0x8215,	// (0x00044c2d) area_vitu2_query_pane_t2

0x14db,	// (0x0003def3) area_vitu2_query_pane_t3_ParamLimits

0x14db,	// (0x0003def3) area_vitu2_query_pane_t3

0x1503,	// (0x0003df1b) area_vitu2_query_pane_t4_ParamLimits

0x1503,	// (0x0003df1b) area_vitu2_query_pane_t4

0x152b,	// (0x0003df43) area_vitu2_query_pane_t5_ParamLimits

0x152b,	// (0x0003df43) area_vitu2_query_pane_t5

0x1553,	// (0x0003df6b) area_vitu2_query_pane_t6_ParamLimits

0x1553,	// (0x0003df6b) area_vitu2_query_pane_t6

0x0006,

0xfa87,	// (0x0004c49f) area_vitu2_query_pane_t_ParamLimits

0xfa87,	// (0x0004c49f) area_vitu2_query_pane_t

0x8229,	// (0x00044c41) bg_button_pane_cp018

0x8237,	// (0x00044c4f) bg_button_pane_cp021

0x159f,	// (0x0003dfb7) bg_button_pane_cp022

0x15b0,	// (0x0003dfc8) input_focus_pane_cp09

0xb2c5,	// (0x00047cdd) aid_size_touch_mv_arrow_left

0xb2f0,	// (0x00047d08) aid_size_touch_mv_arrow_right

0x7b90,	// (0x000445a8) main_cset_slider_pane_g16_ParamLimits

0x7b90,	// (0x000445a8) main_cset_slider_pane_g16

0x7b9e,	// (0x000445b6) main_cset_slider_pane_g17_ParamLimits

0x7b9e,	// (0x000445b6) main_cset_slider_pane_g17

0x81a8,	// (0x00044bc0) cell_cam4_burst_pane_g1_ParamLimits

0xa0df,	// (0x00046af7) compa_mode_pane

0x7daa,	// (0x000447c2) popup_vtel_slider_window_g3_ParamLimits

0x7daa,	// (0x000447c2) popup_vtel_slider_window_g3

0x7dbe,	// (0x000447d6) popup_vtel_slider_window_g4_ParamLimits

0x7dbe,	// (0x000447d6) popup_vtel_slider_window_g4

0x7dd2,	// (0x000447ea) popup_vtel_slider_window_t1_ParamLimits

0x7dd2,	// (0x000447ea) popup_vtel_slider_window_t1

0xa0df,	// (0x00046af7) main_cl_pane

0x553b,	// (0x00041f53) popup_imed_adjust2_window_ParamLimits

0xc8cd,	// (0x000492e5) bg_tb_trans_pane_cp05_ParamLimits

0xd1e3,	// (0x00049bfb) popup_imed_adjust2_window_g1_ParamLimits

0xd1f2,	// (0x00049c0a) popup_imed_adjust2_window_g2_ParamLimits

0xd1f2,	// (0x00049c0a) popup_imed_adjust2_window_g2

0xd1fe,	// (0x00049c16) popup_imed_adjust2_window_g3_ParamLimits

0xd1fe,	// (0x00049c16) popup_imed_adjust2_window_g3

0x0002,

0xf7f2,	// (0x0004c20a) popup_imed_adjust2_window_g_ParamLimits

0xf7f2,	// (0x0004c20a) popup_imed_adjust2_window_g

0xd20a,	// (0x00049c22) popup_imed_adjust2_window_t1_ParamLimits

0xd222,	// (0x00049c3a) slider_imed_adjust_pane_ParamLimits

0xd236,	// (0x00049c4e) slider_imed_adjust_pane_g1_ParamLimits

0xd246,	// (0x00049c5e) slider_imed_adjust_pane_g2_ParamLimits

0xd256,	// (0x00049c6e) slider_imed_adjust_pane_g3_ParamLimits

0xd267,	// (0x00049c7f) slider_imed_adjust_pane_g4_ParamLimits

0xf7f9,	// (0x0004c211) slider_imed_adjust_pane_g_ParamLimits

0x733c,	// (0x00043d54) aid_touch_area_cam4_ParamLimits

0x733c,	// (0x00043d54) aid_touch_area_cam4

0x734c,	// (0x00043d64) battery_pane_cp01

0x73d3,	// (0x00043deb) main_camera4_pane_g6_ParamLimits

0x73d3,	// (0x00043deb) main_camera4_pane_g6

0x73f1,	// (0x00043e09) main_camera4_pane_t2_ParamLimits

0x73f1,	// (0x00043e09) main_camera4_pane_t2

0x0001,

0xf8fc,	// (0x0004c314) main_camera4_pane_t_ParamLimits

0xf8fc,	// (0x0004c314) main_camera4_pane_t

0x7472,	// (0x00043e8a) aid_touch_area_vid4_ParamLimits

0x7472,	// (0x00043e8a) aid_touch_area_vid4

0x74b2,	// (0x00043eca) main_video4_pane_g5_ParamLimits

0x74b2,	// (0x00043eca) main_video4_pane_g5

0x74d6,	// (0x00043eee) vid4_progress_pane_ParamLimits

0x74d6,	// (0x00043eee) vid4_progress_pane

0xd871,	// (0x0004a289) main_cset_slider_pane_g18_ParamLimits

0xd871,	// (0x0004a289) main_cset_slider_pane_g18

0xda79,	// (0x0004a491) cell_cam4_burst_pane_g2_ParamLimits

0xda79,	// (0x0004a491) cell_cam4_burst_pane_g2

0x0001,

0xfa5b,	// (0x0004c473) cell_cam4_burst_pane_g_ParamLimits

0xfa5b,	// (0x0004c473) cell_cam4_burst_pane_g

0x8243,	// (0x00044c5b) bg_cl_pane_ParamLimits

0x8243,	// (0x00044c5b) bg_cl_pane

0x824f,	// (0x00044c67) cl_header_pane_ParamLimits

0x824f,	// (0x00044c67) cl_header_pane

0x825b,	// (0x00044c73) cl_listscroll_pane_ParamLimits

0x825b,	// (0x00044c73) cl_listscroll_pane

0xdbbb,	// (0x0004a5d3) bg_cl_pane_g1

0xdbc3,	// (0x0004a5db) bg_cl_pane_g2

0xdbcb,	// (0x0004a5e3) bg_cl_pane_g3

0xdbd3,	// (0x0004a5eb) bg_cl_pane_g4

0xdbdb,	// (0x0004a5f3) bg_cl_pane_g5

0xdbe3,	// (0x0004a5fb) bg_cl_pane_g6

0xdbeb,	// (0x0004a603) bg_cl_pane_g7

0xdbf3,	// (0x0004a60b) bg_cl_pane_g8

0xdbfb,	// (0x0004a613) bg_cl_pane_g9

0x0008,

0xfa96,	// (0x0004c4ae) bg_cl_pane_g

0x8267,	// (0x00044c7f) aid_height_cl_leading_ParamLimits

0x8267,	// (0x00044c7f) aid_height_cl_leading

0x8273,	// (0x00044c8b) aid_height_cl_text_ParamLimits

0x8273,	// (0x00044c8b) aid_height_cl_text

0xd966,	// (0x0004a37e) bg_cl_header_pane_ParamLimits

0xd966,	// (0x0004a37e) bg_cl_header_pane

0x828b,	// (0x00044ca3) cl_header_pane_g1_ParamLimits

0x828b,	// (0x00044ca3) cl_header_pane_g1

0x8298,	// (0x00044cb0) cl_header_pane_t1_ParamLimits

0x8298,	// (0x00044cb0) cl_header_pane_t1

0xdc03,	// (0x0004a61b) cl_list_pane

0xd844,	// (0x0004a25c) hc_scroll_pane_cp01

0xac7a,	// (0x00047692) bg_cl_header_pane_g1

0xd72a,	// (0x0004a142) bg_cl_header_pane_g2

0xac9a,	// (0x000476b2) bg_cl_header_pane_g3

0xd73a,	// (0x0004a152) bg_cl_header_pane_g4

0xd732,	// (0x0004a14a) bg_cl_header_pane_g5

0xd994,	// (0x0004a3ac) bg_cl_header_pane_g6

0xd752,	// (0x0004a16a) bg_cl_header_pane_g7

0xd75a,	// (0x0004a172) bg_cl_header_pane_g8

0xd74a,	// (0x0004a162) bg_cl_header_pane_g9

0x0008,

0xfaa9,	// (0x0004c4c1) bg_cl_header_pane_g

0x82aa,	// (0x00044cc2) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x82aa,	// (0x00044cc2) hc_cl_list_double_graphic_heading_pane

0x82be,	// (0x00044cd6) hc_cl_list_single_graphic_pane_ParamLimits

0x82be,	// (0x00044cd6) hc_cl_list_single_graphic_pane

0x82d8,	// (0x00044cf0) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x82d8,	// (0x00044cf0) hc_cl_list_single_graphic_pane_g1

0x82e4,	// (0x00044cfc) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x82e4,	// (0x00044cfc) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfabc,	// (0x0004c4d4) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfabc,	// (0x0004c4d4) hc_cl_list_single_graphic_pane_g

0x82f8,	// (0x00044d10) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x82f8,	// (0x00044d10) hc_cl_list_single_graphic_pane_t1

0x82d8,	// (0x00044cf0) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x82d8,	// (0x00044cf0) hc_cl_list_double_graphic_heading_pane_g1

0x830d,	// (0x00044d25) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x830d,	// (0x00044d25) hc_cl_list_double_graphic_heading_pane_g2

0x8321,	// (0x00044d39) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x8321,	// (0x00044d39) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfac1,	// (0x0004c4d9) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfac1,	// (0x0004c4d9) hc_cl_list_double_graphic_heading_pane_g

0x8335,	// (0x00044d4d) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x8335,	// (0x00044d4d) hc_cl_list_double_graphic_heading_pane_t1

0x834a,	// (0x00044d62) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x834a,	// (0x00044d62) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfac8,	// (0x0004c4e0) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfac8,	// (0x0004c4e0) hc_cl_list_double_graphic_heading_pane_t

0x8367,	// (0x00044d7f) vid4_progress_pane_g1

0x8377,	// (0x00044d8f) vid4_progress_pane_g2

0x8387,	// (0x00044d9f) vid4_progress_pane_g3

0x8399,	// (0x00044db1) vid4_progress_pane_g4

0x0004,

0xfacd,	// (0x0004c4e5) vid4_progress_pane_g

0x83b1,	// (0x00044dc9) vid4_progress_pane_t1

0x83c7,	// (0x00044ddf) vid4_progress_pane_t2

0x0002,

0xfad8,	// (0x0004c4f0) vid4_progress_pane_t

0x83f2,	// (0x00044e0a) wait_bar_pane_cp07

0xcac8,	// (0x000494e0) blid_firmament_pane_ParamLimits

0xcb0b,	// (0x00049523) popup_blid_sat_info2_window_g1

0xcb2f,	// (0x00049547) popup_blid_sat_info2_window_t3

0xcb3d,	// (0x00049555) popup_blid_sat_info2_window_t4

0xcb4b,	// (0x00049563) popup_blid_sat_info2_window_t5

0xcb59,	// (0x00049571) popup_blid_sat_info2_window_t6

0xcb69,	// (0x00049581) popup_blid_sat_info2_window_t7

0xcb77,	// (0x0004958f) popup_blid_sat_info2_window_t8

0xcb85,	// (0x0004959d) popup_blid_sat_info2_window_t9

0xcb93,	// (0x000495ab) popup_blid_sat_info2_window_t10

0xcc55,	// (0x0004966d) aid_firma_cardinal_ParamLimits

0xcc69,	// (0x00049681) blid_firmament_pane_t1_ParamLimits

0xcc80,	// (0x00049698) blid_firmament_pane_t2_ParamLimits

0xcc97,	// (0x000496af) blid_firmament_pane_t3_ParamLimits

0xccae,	// (0x000496c6) blid_firmament_pane_t4_ParamLimits

0xf6e6,	// (0x0004c0fe) blid_firmament_pane_t_ParamLimits

0xccc5,	// (0x000496dd) blid_sat_info_pane_ParamLimits

0xabed,	// (0x00047605) main_cam_set_pane_ParamLimits

0x699f,	// (0x000433b7) aid_size_cell_colour_35_ParamLimits

0x69b9,	// (0x000433d1) aid_size_cell_colour_112_ParamLimits

0x69d0,	// (0x000433e8) aid_size_cell_effect_ParamLimits

0xabed,	// (0x00047605) bg_tb_trans_pane_cp02_ParamLimits

0xb663,	// (0x0004807b) heading_imed_pane_ParamLimits

0x69ea,	// (0x00043402) listscroll_imed_pane_ParamLimits

0xbeb3,	// (0x000488cb) popup_call2_audio_first_window_g5_ParamLimits

0xbeb3,	// (0x000488cb) popup_call2_audio_first_window_g5

0x70f9,	// (0x00043b11) aid_size_touch_image3_arrow_left_ParamLimits

0x70f9,	// (0x00043b11) aid_size_touch_image3_arrow_left

0x710f,	// (0x00043b27) aid_size_touch_image3_arrow_right_ParamLimits

0x710f,	// (0x00043b27) aid_size_touch_image3_arrow_right

0x83dc,	// (0x00044df4) vid4_progress_pane_t3

0x6c8a,	// (0x000436a2) main_hwr_training_symbol_option_pane_ParamLimits

0x6c8a,	// (0x000436a2) main_hwr_training_symbol_option_pane

0xd4dc,	// (0x00049ef4) popup_hwr_training_preview_window_ParamLimits

0xd4dc,	// (0x00049ef4) popup_hwr_training_preview_window

0x6ceb,	// (0x00043703) hwr_training_navi_pane_g5_ParamLimits

0x6ceb,	// (0x00043703) hwr_training_navi_pane_g5

0xd718,	// (0x0004a130) popup_char_count_window

0xd966,	// (0x0004a37e) bg_popup_sub_pane_cp20_ParamLimits

0x7ec3,	// (0x000448db) list_vitu2_match_list_pane_ParamLimits

0x7ecf,	// (0x000448e7) vitu2_page_scroll_pane_ParamLimits

0x7ecf,	// (0x000448e7) vitu2_page_scroll_pane

0xdc0c,	// (0x0004a624) list_single_hwr_training_symbol_option_pane_ParamLimits

0xdc0c,	// (0x0004a624) list_single_hwr_training_symbol_option_pane

0xdc1f,	// (0x0004a637) list_single_hwr_training_symbol_option_pane_g1

0xdc27,	// (0x0004a63f) list_single_hwr_training_symbol_option_pane_t1

0xdc35,	// (0x0004a64d) bg_button_pane_cp023

0xdc3e,	// (0x0004a656) bg_button_pane_cp024

0x8427,	// (0x00044e3f) vitu2_page_scroll_pane_g1

0x842f,	// (0x00044e47) vitu2_page_scroll_pane_g2

0x0001,

0xfadf,	// (0x0004c4f7) vitu2_page_scroll_pane_g

0x8437,	// (0x00044e4f) vitu2_page_scroll_pane_t1

0xccfe,	// (0x00049716) popup_char_count_window_g1

0xdc71,	// (0x0004a689) popup_char_count_window_g2

0xdc7a,	// (0x0004a692) popup_char_count_window_g3

0x0002,

0xfae4,	// (0x0004c4fc) popup_char_count_window_g

0xdc83,	// (0x0004a69b) popup_char_count_window_t1

0xa0df,	// (0x00046af7) main_vded2_pane

0xd1cf,	// (0x00049be7) aid_size_cell_imed_line

0xd1d9,	// (0x00049bf1) grid_imed_line_width_pane

0x7542,	// (0x00043f5a) vid4_indicators_pane_g4

0xdc91,	// (0x0004a6a9) cell_imed_line_width_pane_ParamLimits

0xdc91,	// (0x0004a6a9) cell_imed_line_width_pane

0xdca5,	// (0x0004a6bd) cell_imed_line_width_pane_g1

0xdcae,	// (0x0004a6c6) cell_imed_line_width_pane_g2

0x0001,

0xfaeb,	// (0x0004c503) cell_imed_line_width_pane_g

0x8446,	// (0x00044e5e) main_vded2_pane_g1_ParamLimits

0x8446,	// (0x00044e5e) main_vded2_pane_g1

0x8453,	// (0x00044e6b) main_vded2_pane_g2_ParamLimits

0x8453,	// (0x00044e6b) main_vded2_pane_g2

0x0001,

0xfaf0,	// (0x0004c508) main_vded2_pane_g_ParamLimits

0xfaf0,	// (0x0004c508) main_vded2_pane_g

0x8461,	// (0x00044e79) vded2_slider_pane_ParamLimits

0x8461,	// (0x00044e79) vded2_slider_pane

0x846e,	// (0x00044e86) aid_size_touch_vded2_end

0x8478,	// (0x00044e90) aid_size_touch_vded2_playhead

0xdcb6,	// (0x0004a6ce) aid_size_touch_vded2_start

0xdcbe,	// (0x0004a6d6) vded2_slider_bg_pane

0xdcc7,	// (0x0004a6df) vded2_slider_pane_g1

0xdcd0,	// (0x0004a6e8) vded2_slider_pane_g2

0x8480,	// (0x00044e98) vded2_slider_pane_g3

0x0002,

0xfaf5,	// (0x0004c50d) vded2_slider_pane_g

0xdcd8,	// (0x0004a6f0) vded2_slider_bg_pane_g1

0xdce1,	// (0x0004a6f9) vded2_slider_bg_pane_g2

0xdcea,	// (0x0004a702) vded2_slider_bg_pane_g3

0x0002,

0xfafc,	// (0x0004c514) vded2_slider_bg_pane_g

0x4d92,	// (0x000417aa) aid_postcard_touch_down_pane_ParamLimits

0x4d92,	// (0x000417aa) aid_postcard_touch_down_pane

0x4da2,	// (0x000417ba) aid_postcard_touch_up_pane_ParamLimits

0x4da2,	// (0x000417ba) aid_postcard_touch_up_pane

0xa0df,	// (0x00046af7) main_blid2_pane

0x54ca,	// (0x00041ee2) popup_blid2_search_window

0xa0df,	// (0x00046af7) blid2_gps_pane

0xa0df,	// (0x00046af7) blid2_navig_pane

0xa0df,	// (0x00046af7) blid2_search_pane

0xa0df,	// (0x00046af7) blid2_tripm_pane

0x8489,	// (0x00044ea1) blid2_search_pane_g1_ParamLimits

0x8489,	// (0x00044ea1) blid2_search_pane_g1

0x8499,	// (0x00044eb1) blid2_search_pane_t1_ParamLimits

0x8499,	// (0x00044eb1) blid2_search_pane_t1

0x84ab,	// (0x00044ec3) aid_size_cell_blid2_gps_ParamLimits

0x84ab,	// (0x00044ec3) aid_size_cell_blid2_gps

0x84bb,	// (0x00044ed3) blid2_gps_pane_g1_ParamLimits

0x84bb,	// (0x00044ed3) blid2_gps_pane_g1

0x84c7,	// (0x00044edf) grid_blid2_satellite_pane_ParamLimits

0x84c7,	// (0x00044edf) grid_blid2_satellite_pane

0x84d7,	// (0x00044eef) blid2_navig_pane_g1_ParamLimits

0x84d7,	// (0x00044eef) blid2_navig_pane_g1

0x84e3,	// (0x00044efb) blid2_navig_pane_t1_ParamLimits

0x84e3,	// (0x00044efb) blid2_navig_pane_t1

0x84f5,	// (0x00044f0d) blid2_navig_pane_t2_ParamLimits

0x84f5,	// (0x00044f0d) blid2_navig_pane_t2

0x0001,

0xfb03,	// (0x0004c51b) blid2_navig_pane_t_ParamLimits

0xfb03,	// (0x0004c51b) blid2_navig_pane_t

0x8507,	// (0x00044f1f) blid2_navig_ring_pane_ParamLimits

0x8507,	// (0x00044f1f) blid2_navig_ring_pane

0x8517,	// (0x00044f2f) blid2_speed_pane_ParamLimits

0x8517,	// (0x00044f2f) blid2_speed_pane

0x8523,	// (0x00044f3b) blid2_tripm_pane_g1_ParamLimits

0x8523,	// (0x00044f3b) blid2_tripm_pane_g1

0x8533,	// (0x00044f4b) blid2_tripm_pane_g2_ParamLimits

0x8533,	// (0x00044f4b) blid2_tripm_pane_g2

0x853f,	// (0x00044f57) blid2_tripm_pane_g3_ParamLimits

0x853f,	// (0x00044f57) blid2_tripm_pane_g3

0x854b,	// (0x00044f63) blid2_tripm_pane_g4_ParamLimits

0x854b,	// (0x00044f63) blid2_tripm_pane_g4

0x8557,	// (0x00044f6f) blid2_tripm_pane_g5_ParamLimits

0x8557,	// (0x00044f6f) blid2_tripm_pane_g5

0x0005,

0xfb08,	// (0x0004c520) blid2_tripm_pane_g_ParamLimits

0xfb08,	// (0x0004c520) blid2_tripm_pane_g

0x8573,	// (0x00044f8b) blid2_tripm_pane_t1_ParamLimits

0x8573,	// (0x00044f8b) blid2_tripm_pane_t1

0x8587,	// (0x00044f9f) blid2_tripm_pane_t2_ParamLimits

0x8587,	// (0x00044f9f) blid2_tripm_pane_t2

0x8599,	// (0x00044fb1) blid2_tripm_pane_t3_ParamLimits

0x8599,	// (0x00044fb1) blid2_tripm_pane_t3

0x0003,

0xfb15,	// (0x0004c52d) blid2_tripm_pane_t_ParamLimits

0xfb15,	// (0x0004c52d) blid2_tripm_pane_t

0x85cb,	// (0x00044fe3) cell_blid2_satellite_pane_ParamLimits

0x85cb,	// (0x00044fe3) cell_blid2_satellite_pane

0x85e5,	// (0x00044ffd) cell_blid2_satellite_pane_g1

0xdcf3,	// (0x0004a70b) cell_blid2_satellite_pane_t1

0xccd5,	// (0x000496ed) blid2_speed_pane_g1

0xdd01,	// (0x0004a719) blid2_speed_pane_t1

0xdd0f,	// (0x0004a727) blid2_speed_pane_t2

0x0001,

0xfb1e,	// (0x0004c536) blid2_speed_pane_t

0xccd5,	// (0x000496ed) blid2_navig_ring_pane_g1

0x85ee,	// (0x00045006) blid2_navig_ring_pane_g2

0x85f6,	// (0x0004500e) blid2_navig_ring_pane_g3

0x85fe,	// (0x00045016) blid2_navig_ring_pane_g4

0x8606,	// (0x0004501e) blid2_navig_ring_pane_g5

0x0004,

0xfb23,	// (0x0004c53b) blid2_navig_ring_pane_g

0xa0df,	// (0x00046af7) bg_popup_window_pane_cp011

0xdd33,	// (0x0004a74b) popup_blid2_search_window_g1

0xdd3b,	// (0x0004a753) popup_blid2_search_window_t1

0xdd49,	// (0x0004a761) popup_blid2_search_window_t2

0x0001,

0xfb2e,	// (0x0004c546) popup_blid2_search_window_t

0xab5d,	// (0x00047575) main_browser_pane_g1

0xa83e,	// (0x00047256) main_browser_pane_ParamLimits

0xabed,	// (0x00047605) bg_button_pane_cp011_ParamLimits

0x77ad,	// (0x000441c5) cell_vitu2_function_pane_g1_ParamLimits

0xc8cd,	// (0x000492e5) bg_popup_sub_pane_cp22_ParamLimits

0x13c9,	// (0x0003dde1) input_focus_pane_cp08_ParamLimits

0x8054,	// (0x00044a6c) popup_vitu2_query_button_pane_ParamLimits

0x8054,	// (0x00044a6c) popup_vitu2_query_button_pane

0x13e0,	// (0x0003ddf8) popup_vitu2_query_input_button_pane

0xd9cf,	// (0x0004a3e7) popup_vitu2_query_window_g1_ParamLimits

0x13ea,	// (0x0003de02) popup_vitu2_query_window_g2_ParamLimits

0xfa2f,	// (0x0004c447) popup_vitu2_query_window_g_ParamLimits

0xa0df,	// (0x00046af7) bg_button_pane_cp026

0x860e,	// (0x00045026) popup_vitu2_query_input_button_pane_g1

0xa0df,	// (0x00046af7) bg_button_pane_cp025

0xdd57,	// (0x0004a76f) popup_vitu2_query_button_pane_t1

0x5f2a,	// (0x00042942) main_mp3_pane_t6

0x5f3a,	// (0x00042952) popup_slider_window_cp01

0x7427,	// (0x00043e3f) cam4_battery_pane

0x7501,	// (0x00043f19) cam4_battery_pane_cp02

0x835f,	// (0x00044d77) cam4_battery_pane_cp01

0x835f,	// (0x00044d77) cam4_battery_pane_cp03

0xccd5,	// (0x000496ed) cam4_battery_pane_g1

0xdd1d,	// (0x0004a735) cam4_battery_pane_g2

0x0001,

0xfb33,	// (0x0004c54b) cam4_battery_pane_g

0xcba1,	// (0x000495b9) popup_blid_sat_info2_window_t11

0xb2c5,	// (0x00047cdd) aid_size_touch_mv_arrow_left_ParamLimits

0xb2f0,	// (0x00047d08) aid_size_touch_mv_arrow_right_ParamLimits

0xb34e,	// (0x00047d66) navi_pane_g1_ParamLimits

0xb35a,	// (0x00047d72) navi_pane_g2_ParamLimits

0xb388,	// (0x00047da0) navi_pane_g3_ParamLimits

0xf3e5,	// (0x0004bdfd) navi_pane_g_ParamLimits

0x481a,	// (0x00041232) navi_pane_mv_t1_ParamLimits

0x69f6,	// (0x0004340e) grid_imed_effect_pane_ParamLimits

0x32a9,	// (0x0003fcc1) aid_placing_vt_slider_lsc

0xaaac,	// (0x000474c4) aid_placing_vt_slider_prt

0xabed,	// (0x00047605) bg_tb_trans_pane_cp01_ParamLimits

0xce43,	// (0x0004985b) popup_image_details_window_g1_ParamLimits

0xce56,	// (0x0004986e) popup_image_details_window_g2_ParamLimits

0xce6b,	// (0x00049883) popup_image_details_window_g3_ParamLimits

0xce6b,	// (0x00049883) popup_image_details_window_g3

0xf72b,	// (0x0004c143) popup_image_details_window_g_ParamLimits

0xce7f,	// (0x00049897) popup_image_details_window_t1_ParamLimits

0xce91,	// (0x000498a9) popup_image_details_window_t2_ParamLimits

0xceaa,	// (0x000498c2) popup_image_details_window_t3_ParamLimits

0xcebe,	// (0x000498d6) popup_image_details_window_t4_ParamLimits

0xced9,	// (0x000498f1) popup_image_details_window_t5_ParamLimits

0xf732,	// (0x0004c14a) popup_image_details_window_t_ParamLimits

0x827f,	// (0x00044c97) cl_header_name_pane_ParamLimits

0x827f,	// (0x00044c97) cl_header_name_pane

0x8616,	// (0x0004502e) cl_header_name_pane_t1_ParamLimits

0x8616,	// (0x0004502e) cl_header_name_pane_t1

0x862d,	// (0x00045045) cl_header_name_pane_t2_ParamLimits

0x862d,	// (0x00045045) cl_header_name_pane_t2

0x8657,	// (0x0004506f) cl_header_name_pane_t3_ParamLimits

0x8657,	// (0x0004506f) cl_header_name_pane_t3

0x0002,

0xfb38,	// (0x0004c550) cl_header_name_pane_t_ParamLimits

0xfb38,	// (0x0004c550) cl_header_name_pane_t

0xb417,	// (0x00047e2f) navi_pane_mv_g2_ParamLimits

0xd6f2,	// (0x0004a10a) field_vitu2_entry_pane_g1_ParamLimits

0xd6fe,	// (0x0004a116) field_vitu2_entry_pane_g2_ParamLimits

0xd70a,	// (0x0004a122) field_vitu2_entry_pane_g3_ParamLimits

0xd70a,	// (0x0004a122) field_vitu2_entry_pane_g3

0xf92e,	// (0x0004c346) field_vitu2_entry_pane_g_ParamLimits

0x7741,	// (0x00044159) cell_vitu2_itu_pane_g1_ParamLimits

0x7753,	// (0x0004416b) cell_vitu2_itu_pane_g2_ParamLimits

0x7753,	// (0x0004416b) cell_vitu2_itu_pane_g2

0x0001,

0xf93a,	// (0x0004c352) cell_vitu2_itu_pane_g_ParamLimits

0xf93a,	// (0x0004c352) cell_vitu2_itu_pane_g

0xabed,	// (0x00047605) bg_vkb2_func_pane_cp05_ParamLimits

0xabed,	// (0x00047605) bg_vkb2_func_pane_cp05

0xabed,	// (0x00047605) bg_vkb2_func_pane_cp03

0xabed,	// (0x00047605) bg_vkb2_func_pane_cp04

0xabed,	// (0x00047605) bg_vkb2_func_pane_cp10_ParamLimits

0xabed,	// (0x00047605) bg_vkb2_func_pane_cp10

0x159f,	// (0x0003dfb7) bg_vkb2_func_pane_cp08

0x8229,	// (0x00044c41) bg_vkb2_func_pane_cp06

0x8237,	// (0x00044c4f) bg_vkb2_func_pane_cp07

0xdc47,	// (0x0004a65f) bg_vkb2_func_pane_cp11_ParamLimits

0xdc47,	// (0x0004a65f) bg_vkb2_func_pane_cp11

0xdc5c,	// (0x0004a674) bg_vkb2_func_pane_cp12_ParamLimits

0xdc5c,	// (0x0004a674) bg_vkb2_func_pane_cp12

0xa0df,	// (0x00046af7) bg_vkb2_func_pane_cp09

0xd72a,	// (0x0004a142) bg_vkb2_func_pane_g1

0xac9a,	// (0x000476b2) bg_vkb2_func_pane_g2

0xd732,	// (0x0004a14a) bg_vkb2_func_pane_g3

0xd73a,	// (0x0004a152) bg_vkb2_func_pane_g4

0xd994,	// (0x0004a3ac) bg_vkb2_func_pane_g5

0xd752,	// (0x0004a16a) bg_vkb2_func_pane_g6

0xd75a,	// (0x0004a172) bg_vkb2_func_pane_g7

0xd74a,	// (0x0004a162) bg_vkb2_func_pane_g8

0xac7a,	// (0x00047692) bg_vkb2_func_pane_g9

0x0008,

0xfb3f,	// (0x0004c557) bg_vkb2_func_pane_g

0x8565,	// (0x00044f7d) blid2_tripm_pane_g6_ParamLimits

0x8565,	// (0x00044f7d) blid2_tripm_pane_g6

0xd594,	// (0x00049fac) mp4_progress_pane_g1

0x85bf,	// (0x00044fd7) blid2_tripm_values_pane_ParamLimits

0x85bf,	// (0x00044fd7) blid2_tripm_values_pane

0x867c,	// (0x00045094) blid2_tripm_values_pane_t1

0x868a,	// (0x000450a2) blid2_tripm_values_pane_t2

0x8698,	// (0x000450b0) blid2_tripm_values_pane_t3

0x86a6,	// (0x000450be) blid2_tripm_values_pane_t4

0x86b4,	// (0x000450cc) blid2_tripm_values_pane_t5

0x86c2,	// (0x000450da) blid2_tripm_values_pane_t6

0x86d0,	// (0x000450e8) blid2_tripm_values_pane_t7

0x86de,	// (0x000450f6) blid2_tripm_values_pane_t8

0x86ec,	// (0x00045104) blid2_tripm_values_pane_t9

0x0008,

0xfb52,	// (0x0004c56a) blid2_tripm_values_pane_t

0x32e9,	// (0x0003fd01) call_video_pane_t1_ParamLimits

0x330a,	// (0x0003fd22) call_video_pane_t2_ParamLimits

0xf26e,	// (0x0004bc86) call_video_pane_t_ParamLimits

0x1121,	// (0x0003db39) msg_header_pane_g1_ParamLimits

0xb5f1,	// (0x00048009) msg_header_pane_g2_ParamLimits

0xb5f1,	// (0x00048009) msg_header_pane_g2

0x0001,

0xf488,	// (0x0004bea0) msg_header_pane_g_ParamLimits

0xf488,	// (0x0004bea0) msg_header_pane_g

0xa83e,	// (0x00047256) main_clock2_pane_ParamLimits

0x678a,	// (0x000431a2) grid_clock2_toolbar_pane_ParamLimits

0x678a,	// (0x000431a2) grid_clock2_toolbar_pane

0x678a,	// (0x000431a2) listscroll_clock2_pane_ParamLimits

0x678a,	// (0x000431a2) listscroll_clock2_pane

0x6834,	// (0x0004324c) main_clock2_pane_t3_ParamLimits

0x6834,	// (0x0004324c) main_clock2_pane_t3

0x6846,	// (0x0004325e) main_clock2_pane_t4_ParamLimits

0x6846,	// (0x0004325e) main_clock2_pane_t4

0xdd65,	// (0x0004a77d) cell_clock2_toolbar_pane

0xdd6d,	// (0x0004a785) cell_clock2_toolbar_pane_cp01

0xdd6d,	// (0x0004a785) cell_clock2_toolbar_pane_cp02

0xdd75,	// (0x0004a78d) cell_clock2_toolbar_pane_cp03

0xdd7d,	// (0x0004a795) list_clock2_pane

0xb24a,	// (0x00047c62) scroll_pane_cp10

0xdd85,	// (0x0004a79d) list_single_clock2_pane_ParamLimits

0xdd85,	// (0x0004a79d) list_single_clock2_pane

0xaa15,	// (0x0004742d) list_highlight_pane_cp08

0xdd92,	// (0x0004a7aa) list_single_clock2_pane_t1

0xdda0,	// (0x0004a7b8) list_single_clock2_pane_t2

0x0001,

0xfb65,	// (0x0004c57d) list_single_clock2_pane_t

0xa0df,	// (0x00046af7) bg_button_pane_cp10

0xddae,	// (0x0004a7c6) cell_clock2_toolbar_pane_g1

0x4cf4,	// (0x0004170c) aid_main_viewer_pane_g1_ParamLimits

0x4cf4,	// (0x0004170c) aid_main_viewer_pane_g1

0x4d00,	// (0x00041718) aid_main_viewer_pane_g2_ParamLimits

0x4d00,	// (0x00041718) aid_main_viewer_pane_g2

0x4d0c,	// (0x00041724) aid_main_viewer_pane_g3_ParamLimits

0x4d0c,	// (0x00041724) aid_main_viewer_pane_g3

0x4d1d,	// (0x00041735) aid_main_viewer_pane_g4_ParamLimits

0x4d1d,	// (0x00041735) aid_main_viewer_pane_g4

0x0003,

0xf499,	// (0x0004beb1) aid_main_viewer_pane_g_ParamLimits

0xf499,	// (0x0004beb1) aid_main_viewer_pane_g

0x54a2,	// (0x00041eba) main_calc_pane_ParamLimits

0x54af,	// (0x00041ec7) main_dialer2_pane_ParamLimits

0xa0df,	// (0x00046af7) main_cam6_pane

0xa0df,	// (0x00046af7) main_vid6_pane

0x6796,	// (0x000431ae) listscroll_gen_pane_cp06_ParamLimits

0x6796,	// (0x000431ae) listscroll_gen_pane_cp06

0x6858,	// (0x00043270) main_clock2_pane_t5_ParamLimits

0x6858,	// (0x00043270) main_clock2_pane_t5

0x68a1,	// (0x000432b9) aid_call2_pane_cp10_ParamLimits

0x68b3,	// (0x000432cb) aid_call_pane_cp10_ParamLimits

0xb2b9,	// (0x00047cd1) popup_clock_analogue_window_cp10_g1_ParamLimits

0xb2b9,	// (0x00047cd1) popup_clock_analogue_window_cp10_g2_ParamLimits

0x68c5,	// (0x000432dd) popup_clock_analogue_window_cp10_g3_ParamLimits

0x68c5,	// (0x000432dd) popup_clock_analogue_window_cp10_g4_ParamLimits

0xb2b9,	// (0x00047cd1) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf7e7,	// (0x0004c1ff) popup_clock_analogue_window_cp10_g_ParamLimits

0x68d7,	// (0x000432ef) popup_clock_analogue_window_cp10_t1_ParamLimits

0x70a6,	// (0x00043abe) cell_dialer2_keypad_pane_g2_ParamLimits

0x70a6,	// (0x00043abe) cell_dialer2_keypad_pane_g2

0x0001,

0xf8cd,	// (0x0004c2e5) cell_dialer2_keypad_pane_g_ParamLimits

0xf8cd,	// (0x0004c2e5) cell_dialer2_keypad_pane_g

0x70c2,	// (0x00043ada) cell_dialer2_keypad_pane_t1

0x7a78,	// (0x00044490) main_cset_text2_pane_ParamLimits

0x7a78,	// (0x00044490) main_cset_text2_pane

0xdbaf,	// (0x0004a5c7) area_vitu2_query_pane_g1_ParamLimits

0x14ca,	// (0x0003dee2) area_vitu2_query_pane_g2_ParamLimits

0xfa82,	// (0x0004c49a) area_vitu2_query_pane_g_ParamLimits

0x157b,	// (0x0003df93) area_vitu2_query_pane_t7_ParamLimits

0x157b,	// (0x0003df93) area_vitu2_query_pane_t7

0x8229,	// (0x00044c41) bg_button_pane_cp018_ParamLimits

0x8237,	// (0x00044c4f) bg_button_pane_cp021_ParamLimits

0x159f,	// (0x0003dfb7) bg_button_pane_cp022_ParamLimits

0x159f,	// (0x0003dfb7) bg_vkb2_func_pane_cp08_ParamLimits

0x8229,	// (0x00044c41) bg_vkb2_func_pane_cp06_ParamLimits

0x8237,	// (0x00044c4f) bg_vkb2_func_pane_cp07_ParamLimits

0x15b0,	// (0x0003dfc8) input_focus_pane_cp09_ParamLimits

0x86fa,	// (0x00045112) cam6_autofocus_pane_ParamLimits

0x86fa,	// (0x00045112) cam6_autofocus_pane

0x871c,	// (0x00045134) cam6_image_uncrop_pane_ParamLimits

0x871c,	// (0x00045134) cam6_image_uncrop_pane

0x8749,	// (0x00045161) cam6_indi_pane_ParamLimits

0x8749,	// (0x00045161) cam6_indi_pane

0x8763,	// (0x0004517b) cam6_mode_pane_ParamLimits

0x8763,	// (0x0004517b) cam6_mode_pane

0x8777,	// (0x0004518f) cam6_timer_pane_ParamLimits

0x8777,	// (0x0004518f) cam6_timer_pane

0x8788,	// (0x000451a0) cam6_zoom_pane_ParamLimits

0x8788,	// (0x000451a0) cam6_zoom_pane

0x87a0,	// (0x000451b8) cam6_mode_pane_g1_ParamLimits

0x87a0,	// (0x000451b8) cam6_mode_pane_g1

0x87ac,	// (0x000451c4) cam6_mode_pane_g2_ParamLimits

0x87ac,	// (0x000451c4) cam6_mode_pane_g2

0x87b8,	// (0x000451d0) cam6_mode_pane_g3_ParamLimits

0x87b8,	// (0x000451d0) cam6_mode_pane_g3

0x87c4,	// (0x000451dc) cam6_mode_pane_g4_ParamLimits

0x87c4,	// (0x000451dc) cam6_mode_pane_g4

0x0003,

0xfb6a,	// (0x0004c582) cam6_mode_pane_g_ParamLimits

0xfb6a,	// (0x0004c582) cam6_mode_pane_g

0xd974,	// (0x0004a38c) bg_tb_trans_pane_cp08_ParamLimits

0xd974,	// (0x0004a38c) bg_tb_trans_pane_cp08

0xddb6,	// (0x0004a7ce) cam6_battery_pane_ParamLimits

0xddb6,	// (0x0004a7ce) cam6_battery_pane

0xddcc,	// (0x0004a7e4) cam6_indi_pane_g1_ParamLimits

0xddcc,	// (0x0004a7e4) cam6_indi_pane_g1

0xddde,	// (0x0004a7f6) cam6_indi_pane_g2_ParamLimits

0xddde,	// (0x0004a7f6) cam6_indi_pane_g2

0xddf0,	// (0x0004a808) cam6_indi_pane_g3_ParamLimits

0xddf0,	// (0x0004a808) cam6_indi_pane_g3

0x0002,

0xfb73,	// (0x0004c58b) cam6_indi_pane_g_ParamLimits

0xfb73,	// (0x0004c58b) cam6_indi_pane_g

0xde02,	// (0x0004a81a) cam6_indi_pane_t1_ParamLimits

0xde02,	// (0x0004a81a) cam6_indi_pane_t1

0x7575,	// (0x00043f8d) cam6_autofocus_pane_g1

0x757d,	// (0x00043f95) cam6_autofocus_pane_g2

0x7585,	// (0x00043f9d) cam6_autofocus_pane_g3

0x758d,	// (0x00043fa5) cam6_autofocus_pane_g4

0x0003,

0xfb7a,	// (0x0004c592) cam6_autofocus_pane_g

0xde28,	// (0x0004a840) cam6_timer_pane_g1

0xde30,	// (0x0004a848) cam6_timer_pane_t1

0xde3e,	// (0x0004a856) cam6_zoom_cont_pane

0xde46,	// (0x0004a85e) cam6_zoom_pane_g1

0xde4e,	// (0x0004a866) cam6_zoom_pane_g2

0x87d0,	// (0x000451e8) cam6_zoom_pane_g3

0x0002,

0xfb83,	// (0x0004c59b) cam6_zoom_pane_g

0xccd5,	// (0x000496ed) cam6_battery_pane_g1

0xccd5,	// (0x000496ed) cam6_battery_pane_g2

0x0001,

0xf6ef,	// (0x0004c107) cam6_battery_pane_g

0xde56,	// (0x0004a86e) cam6_zoom_cont_pane_g1

0xde5f,	// (0x0004a877) cam6_zoom_cont_pane_g2

0xde68,	// (0x0004a880) cam6_zoom_cont_pane_g3

0x0002,

0xfb8a,	// (0x0004c5a2) cam6_zoom_cont_pane_g

0x87ed,	// (0x00045205) cam6_mode_pane_cp_ParamLimits

0x87ed,	// (0x00045205) cam6_mode_pane_cp

0x8788,	// (0x000451a0) cam6_zoom_pane_cp_ParamLimits

0x8788,	// (0x000451a0) cam6_zoom_pane_cp

0x8801,	// (0x00045219) vid6_image_uncrop_cif_pane_ParamLimits

0x8801,	// (0x00045219) vid6_image_uncrop_cif_pane

0x882d,	// (0x00045245) vid6_image_uncrop_nhd_pane_ParamLimits

0x882d,	// (0x00045245) vid6_image_uncrop_nhd_pane

0x871c,	// (0x00045134) vid6_image_uncrop_vga_pane_ParamLimits

0x871c,	// (0x00045134) vid6_image_uncrop_vga_pane

0x884a,	// (0x00045262) vid6_image_uncrop_wvga_pane_ParamLimits

0x884a,	// (0x00045262) vid6_image_uncrop_wvga_pane

0x8867,	// (0x0004527f) vid6_indi_pane_ParamLimits

0x8867,	// (0x0004527f) vid6_indi_pane

0xd974,	// (0x0004a38c) bg_tb_trans_pane_cp09_ParamLimits

0xd974,	// (0x0004a38c) bg_tb_trans_pane_cp09

0xde80,	// (0x0004a898) cam6_battery_pane_cp_ParamLimits

0xde80,	// (0x0004a898) cam6_battery_pane_cp

0xde8c,	// (0x0004a8a4) vid6_indi_pane_g1_ParamLimits

0xde8c,	// (0x0004a8a4) vid6_indi_pane_g1

0xde9e,	// (0x0004a8b6) vid6_indi_pane_g2_ParamLimits

0xde9e,	// (0x0004a8b6) vid6_indi_pane_g2

0xdeb0,	// (0x0004a8c8) vid6_indi_pane_g3_ParamLimits

0xdeb0,	// (0x0004a8c8) vid6_indi_pane_g3

0xdec5,	// (0x0004a8dd) vid6_indi_pane_g4_ParamLimits

0xdec5,	// (0x0004a8dd) vid6_indi_pane_g4

0xdeda,	// (0x0004a8f2) vid6_indi_pane_g5_ParamLimits

0xdeda,	// (0x0004a8f2) vid6_indi_pane_g5

0x0004,

0xfb91,	// (0x0004c5a9) vid6_indi_pane_g_ParamLimits

0xfb91,	// (0x0004c5a9) vid6_indi_pane_g

0xdef4,	// (0x0004a90c) vid6_indi_pane_t1_ParamLimits

0xdef4,	// (0x0004a90c) vid6_indi_pane_t1

0xdf0a,	// (0x0004a922) vid6_indi_pane_t2_ParamLimits

0xdf0a,	// (0x0004a922) vid6_indi_pane_t2

0xdf32,	// (0x0004a94a) vid6_indi_pane_t3_ParamLimits

0xdf32,	// (0x0004a94a) vid6_indi_pane_t3

0xdf5a,	// (0x0004a972) vid6_indi_pane_t4_ParamLimits

0xdf5a,	// (0x0004a972) vid6_indi_pane_t4

0x0003,

0xfb9c,	// (0x0004c5b4) vid6_indi_pane_t_ParamLimits

0xfb9c,	// (0x0004c5b4) vid6_indi_pane_t

0xdf7e,	// (0x0004a996) wait_bar_pane_cp08

0x888a,	// (0x000452a2) main_cset_text2_pane_t1_ParamLimits

0x888a,	// (0x000452a2) main_cset_text2_pane_t1

0x87d8,	// (0x000451f0) listscroll_gen_pane_cp06_t1_ParamLimits

0x87d8,	// (0x000451f0) listscroll_gen_pane_cp06_t1

0xa0df,	// (0x00046af7) main_cam6_set_pane

0xcf23,	// (0x0004993b) bg_tb_trans_pane_cp06_ParamLimits

0x742f,	// (0x00043e47) cam4_indicators_pane_g1_ParamLimits

0x7440,	// (0x00043e58) cam4_indicators_pane_g2_ParamLimits

0xf90a,	// (0x0004c322) cam4_indicators_pane_g_ParamLimits

0x7458,	// (0x00043e70) cam4_indicators_pane_t1_ParamLimits

0xabed,	// (0x00047605) bg_tb_trans_pane_cp07_ParamLimits

0x7509,	// (0x00043f21) vid4_indicators_pane_g1_ParamLimits

0x751d,	// (0x00043f35) vid4_indicators_pane_g2_ParamLimits

0x7531,	// (0x00043f49) vid4_indicators_pane_g3_ParamLimits

0x7542,	// (0x00043f5a) vid4_indicators_pane_g4_ParamLimits

0xf91c,	// (0x0004c334) vid4_indicators_pane_g_ParamLimits

0x755e,	// (0x00043f76) vid4_indicators_pane_t1_ParamLimits

0x8367,	// (0x00044d7f) vid4_progress_pane_g1_ParamLimits

0x8377,	// (0x00044d8f) vid4_progress_pane_g2_ParamLimits

0x8387,	// (0x00044d9f) vid4_progress_pane_g3_ParamLimits

0x8399,	// (0x00044db1) vid4_progress_pane_g4_ParamLimits

0xfacd,	// (0x0004c4e5) vid4_progress_pane_g_ParamLimits

0x83b1,	// (0x00044dc9) vid4_progress_pane_t1_ParamLimits

0x83c7,	// (0x00044ddf) vid4_progress_pane_t2_ParamLimits

0x83dc,	// (0x00044df4) vid4_progress_pane_t3_ParamLimits

0xfad8,	// (0x0004c4f0) vid4_progress_pane_t_ParamLimits

0x83f2,	// (0x00044e0a) wait_bar_pane_cp07_ParamLimits

0x88c1,	// (0x000452d9) main_cam6_set_pane_g2_ParamLimits

0x88c1,	// (0x000452d9) main_cam6_set_pane_g2

0x88cd,	// (0x000452e5) main_cset6_listscroll_pane_ParamLimits

0x88cd,	// (0x000452e5) main_cset6_listscroll_pane

0x88f8,	// (0x00045310) main_cset6_slider_pane_ParamLimits

0x88f8,	// (0x00045310) main_cset6_slider_pane

0x8904,	// (0x0004531c) main_cset6_text2_pane_ParamLimits

0x8904,	// (0x0004531c) main_cset6_text2_pane

0xdf8d,	// (0x0004a9a5) main_cset6_text_pane

0xdf95,	// (0x0004a9ad) main_cset_list_pane_copy1_ParamLimits

0xdf95,	// (0x0004a9ad) main_cset_list_pane_copy1

0xdfa5,	// (0x0004a9bd) scroll_pane_cp028_copy1

0x8917,	// (0x0004532f) cset_list_set_pane_copy1

0x892d,	// (0x00045345) aid_position_infowindow_above_copy1

0x8935,	// (0x0004534d) aid_position_infowindow_below_copy1

0x15ee,	// (0x0003e006) cset_list_set_pane_g1_copy1

0x133d,	// (0x0003dd55) cset_list_set_pane_g3_copy1_ParamLimits

0x133d,	// (0x0003dd55) cset_list_set_pane_g3_copy1

0x134c,	// (0x0003dd64) cset_list_set_pane_t1_copy1_ParamLimits

0x134c,	// (0x0003dd64) cset_list_set_pane_t1_copy1

0xabed,	// (0x00047605) list_highlight_pane_cp021_copy1_ParamLimits

0xabed,	// (0x00047605) list_highlight_pane_cp021_copy1

0xdfae,	// (0x0004a9c6) cset6_slider_pane_ParamLimits

0xdfae,	// (0x0004a9c6) cset6_slider_pane

0xdfda,	// (0x0004a9f2) main_cset6_slider_pane_g1_ParamLimits

0xdfda,	// (0x0004a9f2) main_cset6_slider_pane_g1

0x893d,	// (0x00045355) main_cset6_slider_pane_g2_ParamLimits

0x893d,	// (0x00045355) main_cset6_slider_pane_g2

0xe002,	// (0x0004aa1a) main_cset6_slider_pane_g3_ParamLimits

0xe002,	// (0x0004aa1a) main_cset6_slider_pane_g3

0x8965,	// (0x0004537d) main_cset6_slider_pane_g4_ParamLimits

0x8965,	// (0x0004537d) main_cset6_slider_pane_g4

0x8971,	// (0x00045389) main_cset6_slider_pane_g5_ParamLimits

0x8971,	// (0x00045389) main_cset6_slider_pane_g5

0xd859,	// (0x0004a271) main_cset6_slider_pane_g7_ParamLimits

0xd859,	// (0x0004a271) main_cset6_slider_pane_g7

0xd865,	// (0x0004a27d) main_cset6_slider_pane_g8_ParamLimits

0xd865,	// (0x0004a27d) main_cset6_slider_pane_g8

0x897f,	// (0x00045397) main_cset6_slider_pane_g9_ParamLimits

0x897f,	// (0x00045397) main_cset6_slider_pane_g9

0x898b,	// (0x000453a3) main_cset6_slider_pane_g10_ParamLimits

0x898b,	// (0x000453a3) main_cset6_slider_pane_g10

0x8997,	// (0x000453af) main_cset6_slider_pane_g11_ParamLimits

0x8997,	// (0x000453af) main_cset6_slider_pane_g11

0x89a3,	// (0x000453bb) main_cset6_slider_pane_g12_ParamLimits

0x89a3,	// (0x000453bb) main_cset6_slider_pane_g12

0xd94e,	// (0x0004a366) main_cset6_slider_pane_g13_ParamLimits

0xd94e,	// (0x0004a366) main_cset6_slider_pane_g13

0xd95a,	// (0x0004a372) main_cset6_slider_pane_g14_ParamLimits

0xd95a,	// (0x0004a372) main_cset6_slider_pane_g14

0x89af,	// (0x000453c7) main_cset6_slider_pane_g15_ParamLimits

0x89af,	// (0x000453c7) main_cset6_slider_pane_g15

0x89c7,	// (0x000453df) main_cset6_slider_pane_g16_ParamLimits

0x89c7,	// (0x000453df) main_cset6_slider_pane_g16

0x89d5,	// (0x000453ed) main_cset6_slider_pane_g17_ParamLimits

0x89d5,	// (0x000453ed) main_cset6_slider_pane_g17

0x0011,

0xfba5,	// (0x0004c5bd) main_cset6_slider_pane_g_ParamLimits

0xfba5,	// (0x0004c5bd) main_cset6_slider_pane_g

0xe01a,	// (0x0004aa32) main_cset6_slider_pane_t1_ParamLimits

0xe01a,	// (0x0004aa32) main_cset6_slider_pane_t1

0x89ef,	// (0x00045407) main_cset6_slider_pane_t2_ParamLimits

0x89ef,	// (0x00045407) main_cset6_slider_pane_t2

0x8a1a,	// (0x00045432) main_cset6_slider_pane_t3_ParamLimits

0x8a1a,	// (0x00045432) main_cset6_slider_pane_t3

0x8a45,	// (0x0004545d) main_cset6_slider_pane_t4_ParamLimits

0x8a45,	// (0x0004545d) main_cset6_slider_pane_t4

0x8a70,	// (0x00045488) main_cset6_slider_pane_t5_ParamLimits

0x8a70,	// (0x00045488) main_cset6_slider_pane_t5

0xe05b,	// (0x0004aa73) main_cset6_slider_pane_t7_ParamLimits

0xe05b,	// (0x0004aa73) main_cset6_slider_pane_t7

0x8a9d,	// (0x000454b5) main_cset6_slider_pane_t8_ParamLimits

0x8a9d,	// (0x000454b5) main_cset6_slider_pane_t8

0x8ac1,	// (0x000454d9) main_cset6_slider_pane_t9_ParamLimits

0x8ac1,	// (0x000454d9) main_cset6_slider_pane_t9

0x8ae5,	// (0x000454fd) main_cset6_slider_pane_t10_ParamLimits

0x8ae5,	// (0x000454fd) main_cset6_slider_pane_t10

0x8b09,	// (0x00045521) main_cset6_slider_pane_t11_ParamLimits

0x8b09,	// (0x00045521) main_cset6_slider_pane_t11

0xe091,	// (0x0004aaa9) main_cset6_slider_pane_t14_ParamLimits

0xe091,	// (0x0004aaa9) main_cset6_slider_pane_t14

0xe0ca,	// (0x0004aae2) main_cset6_slider_pane_t15_ParamLimits

0xe0ca,	// (0x0004aae2) main_cset6_slider_pane_t15

0x000b,

0xfbca,	// (0x0004c5e2) main_cset6_slider_pane_t_ParamLimits

0xfbca,	// (0x0004c5e2) main_cset6_slider_pane_t

0xd4a5,	// (0x00049ebd) cset_slider_pane_g1_copy1

0xd982,	// (0x0004a39a) cset_slider_pane_g2_copy1

0xd98b,	// (0x0004a3a3) cset_slider_pane_g3_copy1

0xa0df,	// (0x00046af7) bg_popup_sub_pane_cp011_copy1

0xe103,	// (0x0004ab1b) main_cset_text_pane_g1_copy1

0xd9e3,	// (0x0004a3fb) main_cset_text_pane_t1_copy1

0xd9f1,	// (0x0004a409) main_cset_text_pane_t2_copy1

0xd9ff,	// (0x0004a417) main_cset_text_pane_t3_copy1

0xda0d,	// (0x0004a425) main_cset_text_pane_t4_copy1

0xda1b,	// (0x0004a433) main_cset_text_pane_t5_copy1

0xe10b,	// (0x0004ab23) main_cset_text_pane_t6_copy1

0xe119,	// (0x0004ab31) main_cset_text_pane_t7_copy1

0x8b2f,	// (0x00045547) main_cset_text2_pane_t1_copy1

0xabed,	// (0x00047605) main_ncimui_pane

0x5500,	// (0x00041f18) popup_query_ncimui_window_ParamLimits

0x5500,	// (0x00041f18) popup_query_ncimui_window

0x11e2,	// (0x0003dbfa) field_cale_ev2_pane_g4_ParamLimits

0x11e2,	// (0x0003dbfa) field_cale_ev2_pane_g4

0x6dc6,	// (0x000437de) cell_video_dialer_keypad_pane_g2_ParamLimits

0x6dc6,	// (0x000437de) cell_video_dialer_keypad_pane_g2

0x0001,

0xf8a8,	// (0x0004c2c0) cell_video_dialer_keypad_pane_g_ParamLimits

0xf8a8,	// (0x0004c2c0) cell_video_dialer_keypad_pane_g

0x6dde,	// (0x000437f6) cell_video_dialer_keypad_pane_t1

0xa0df,	// (0x00046af7) bg_popup_window_pane_cp012

0xb127,	// (0x00047b3f) heading_pane_cp06

0xe145,	// (0x0004ab5d) ncim_query_content_pane

0xa0df,	// (0x00046af7) bg_popup_heading_pane_cp01

0xe14d,	// (0x0004ab65) ncim_heading_pane_t1

0xe15b,	// (0x0004ab73) ncim_indicator_popup_pane

0xe16d,	// (0x0004ab85) ncim_query_button_pane

0xe181,	// (0x0004ab99) ncim_query_content_pane_t1

0xe193,	// (0x0004abab) ncim_query_content_pane_t2

0x0005,

0xfc0e,	// (0x0004c626) ncim_query_content_pane_t

0xe1cd,	// (0x0004abe5) ncim_query_list_pane

0xe1df,	// (0x0004abf7) ncim_query_popup_pane

0xe15b,	// (0x0004ab73) ncim_indicator_popup_pane_ParamLimits

0x8c83,	// (0x0004569b) ncim_query_content_pane_g1_ParamLimits

0x8c83,	// (0x0004569b) ncim_query_content_pane_g1

0xe181,	// (0x0004ab99) ncim_query_content_pane_t1_ParamLimits

0xe193,	// (0x0004abab) ncim_query_content_pane_t2_ParamLimits

0x8c8f,	// (0x000456a7) ncim_query_content_pane_t3_ParamLimits

0x8c8f,	// (0x000456a7) ncim_query_content_pane_t3

0x8cac,	// (0x000456c4) ncim_query_content_pane_t4_ParamLimits

0x8cac,	// (0x000456c4) ncim_query_content_pane_t4

0x8cc9,	// (0x000456e1) ncim_query_content_pane_t5_ParamLimits

0x8cc9,	// (0x000456e1) ncim_query_content_pane_t5

0xe1a5,	// (0x0004abbd) ncim_query_content_pane_t6_ParamLimits

0xe1a5,	// (0x0004abbd) ncim_query_content_pane_t6

0xfc0e,	// (0x0004c626) ncim_query_content_pane_t_ParamLimits

0xe1cd,	// (0x0004abe5) ncim_query_list_pane_ParamLimits

0xe1df,	// (0x0004abf7) ncim_query_popup_pane_ParamLimits

0xe1f3,	// (0x0004ac0b) wait_bar_pane_cp04

0xa0df,	// (0x00046af7) input_focus_pane_cp011

0xe1fb,	// (0x0004ac13) ncim_query_popup_pane_t1

0xe209,	// (0x0004ac21) ncim_list_query_list_pane_ParamLimits

0xe209,	// (0x0004ac21) ncim_list_query_list_pane

0xa0df,	// (0x00046af7) bg_button_pane_cp027

0xe216,	// (0x0004ac2e) ncim_query_button_pane_g1

0xa0df,	// (0x00046af7) list_highlight_pane_cp012

0xe220,	// (0x0004ac38) ncim_list_query_list_pane_g1

0xe228,	// (0x0004ac40) ncim_list_query_list_pane_t1

0x744c,	// (0x00043e64) cam4_indicators_pane_g3_ParamLimits

0x744c,	// (0x00043e64) cam4_indicators_pane_g3

0x754e,	// (0x00043f66) vid4_indicators_pane_g5_ParamLimits

0x754e,	// (0x00043f66) vid4_indicators_pane_g5

0x83a5,	// (0x00044dbd) vid4_progress_pane_g5_ParamLimits

0x83a5,	// (0x00044dbd) vid4_progress_pane_g5

0x8b6f,	// (0x00045587) main_ncimui_pane_g1

0x8bd7,	// (0x000455ef) ncimui_group_query_pane_ParamLimits

0x8bd7,	// (0x000455ef) ncimui_group_query_pane

0x8c1f,	// (0x00045637) ncimui_list_pane_ParamLimits

0x8c1f,	// (0x00045637) ncimui_list_pane

0x8c46,	// (0x0004565e) ncimui_text_pane_ParamLimits

0x8c46,	// (0x0004565e) ncimui_text_pane

0x8ce6,	// (0x000456fe) ncimui_text_pane_t1_ParamLimits

0x8ce6,	// (0x000456fe) ncimui_text_pane_t1

0xe236,	// (0x0004ac4e) ncimui_list_single_graphic_pane_ParamLimits

0xe236,	// (0x0004ac4e) ncimui_list_single_graphic_pane

0x8d05,	// (0x0004571d) ncimui_query_pane_ParamLimits

0x8d05,	// (0x0004571d) ncimui_query_pane

0xa0df,	// (0x00046af7) list_highlight_pane_cp013

0xe246,	// (0x0004ac5e) ncim_list_query_list_pane_t1_copy1

0xe254,	// (0x0004ac6c) ncim_list_single_graphic_pane_g1

0x8d18,	// (0x00045730) ncim_query_button_pane_cp01

0x8d24,	// (0x0004573c) ncim_query_entry_pane_ParamLimits

0x8d24,	// (0x0004573c) ncim_query_entry_pane

0x8d37,	// (0x0004574f) ncimui_query_pane_g1

0x8d43,	// (0x0004575b) ncimui_query_pane_t1_ParamLimits

0x8d43,	// (0x0004575b) ncimui_query_pane_t1

0xabed,	// (0x00047605) input_focus_pane_cp012

0xe25c,	// (0x0004ac74) ncim_query_entry_pane_t1

0xa83e,	// (0x00047256) main_im_pane_ParamLimits

0xabed,	// (0x00047605) main_mobtv_pane_ParamLimits

0xabed,	// (0x00047605) main_mobtv_pane

0x89e3,	// (0x000453fb) main_cset6_slider_pane_g18_ParamLimits

0x89e3,	// (0x000453fb) main_cset6_slider_pane_g18

0xe00e,	// (0x0004aa26) main_cset6_slider_pane_g19_ParamLimits

0xe00e,	// (0x0004aa26) main_cset6_slider_pane_g19

0xd70a,	// (0x0004a122) bg_main_mobtv_pane_ParamLimits

0xd70a,	// (0x0004a122) bg_main_mobtv_pane

0x8d5c,	// (0x00045774) main_mobtv_info_pane

0x8d67,	// (0x0004577f) main_mobtv_loading_pane_ParamLimits

0x8d67,	// (0x0004577f) main_mobtv_loading_pane

0xe26e,	// (0x0004ac86) main_mobtv_pg_channel_list_pane

0xe278,	// (0x0004ac90) main_mobtv_pg_hdr_pane

0x8d74,	// (0x0004578c) main_mobtv_programe_curr_pane_ParamLimits

0x8d74,	// (0x0004578c) main_mobtv_programe_curr_pane

0x8d81,	// (0x00045799) main_mobtv_programe_next_pane_ParamLimits

0x8d81,	// (0x00045799) main_mobtv_programe_next_pane

0xe281,	// (0x0004ac99) popup_mobtv_noti_window

0xccd5,	// (0x000496ed) main_tv_pg_hdr_pane_g1

0xe289,	// (0x0004aca1) main_tv_pg_hdr_pane_g2

0xe291,	// (0x0004aca9) main_tv_pg_hdr_pane_g3

0xe299,	// (0x0004acb1) main_tv_pg_hdr_pane_g4

0xe2a1,	// (0x0004acb9) main_tv_pg_hdr_pane_g5

0xe2ab,	// (0x0004acc3) main_tv_pg_hdr_pane_g6

0xe2b5,	// (0x0004accd) main_tv_pg_hdr_pane_g7

0xe2bf,	// (0x0004acd7) main_tv_pg_hdr_pane_g8

0xe2c9,	// (0x0004ace1) main_tv_pg_hdr_pane_g9

0xe2d3,	// (0x0004aceb) main_tv_pg_hdr_pane_g10

0xe2dd,	// (0x0004acf5) main_tv_pg_hdr_pane_g11

0x000a,

0xfc1b,	// (0x0004c633) main_tv_pg_hdr_pane_g

0xe2e7,	// (0x0004acff) main_tv_pg_hdr_pane_t1

0xe2f5,	// (0x0004ad0d) main_tv_pg_hdr_pane_t2

0xe303,	// (0x0004ad1b) main_tv_pg_hdr_pane_t3

0xe313,	// (0x0004ad2b) main_tv_pg_hdr_pane_t4

0xe323,	// (0x0004ad3b) main_tv_pg_hdr_pane_t5

0x0004,

0xfc32,	// (0x0004c64a) main_tv_pg_hdr_pane_t

0xe333,	// (0x0004ad4b) single_mobtv_pg_channel_pane_ParamLimits

0xe333,	// (0x0004ad4b) single_mobtv_pg_channel_pane

0xe345,	// (0x0004ad5d) single_mobtv_pg_channel_table_pane

0xad9d,	// (0x000477b5) single_mobtv_pg_channel_thumb_pane

0xe34e,	// (0x0004ad66) single_tv_pg_channel_pane_g1

0xe357,	// (0x0004ad6f) single_tv_pg_channel_pane_g2

0x0001,

0xfc3d,	// (0x0004c655) single_tv_pg_channel_pane_g

0xcf23,	// (0x0004993b) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xcf23,	// (0x0004993b) bg_single_mobtv_pg_channel_thumb_pane

0xe360,	// (0x0004ad78) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xe360,	// (0x0004ad78) single_mobtv_pg_channel_thumb_pane_g1

0xe36e,	// (0x0004ad86) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xe36e,	// (0x0004ad86) single_mobtv_pg_channel_thumb_pane_g2

0xe37a,	// (0x0004ad92) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xe37a,	// (0x0004ad92) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfc42,	// (0x0004c65a) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfc42,	// (0x0004c65a) single_mobtv_pg_channel_thumb_pane_g

0xe386,	// (0x0004ad9e) single_mobtv_pg_channel_thumb_pane_t1

0xe394,	// (0x0004adac) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc49,	// (0x0004c661) single_mobtv_pg_channel_thumb_pane_t

0xccd5,	// (0x000496ed) bg_single_mobtv_pg_channel_table_pane_g1

0xccd5,	// (0x000496ed) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf6ef,	// (0x0004c107) bg_single_mobtv_pg_channel_table_pane_g

0xe3a2,	// (0x0004adba) single_mobtv_pg_channel_table_pane_t1

0xe3b0,	// (0x0004adc8) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc4e,	// (0x0004c666) single_mobtv_pg_channel_table_pane_t

0x8d96,	// (0x000457ae) main_mobtv_info_pane_g1_ParamLimits

0x8d96,	// (0x000457ae) main_mobtv_info_pane_g1

0x8db2,	// (0x000457ca) main_mobtv_info_pane_t1_ParamLimits

0x8db2,	// (0x000457ca) main_mobtv_info_pane_t1

0x8e2a,	// (0x00045842) main_mobtv_info_pane_t2_ParamLimits

0x8e2a,	// (0x00045842) main_mobtv_info_pane_t2

0x0002,

0xfc58,	// (0x0004c670) main_mobtv_info_pane_t_ParamLimits

0xfc58,	// (0x0004c670) main_mobtv_info_pane_t

0x8eb9,	// (0x000458d1) wait_bar_pane_cp05

0x8ecb,	// (0x000458e3) main_mobtv_loading_pane_g1_ParamLimits

0x8ecb,	// (0x000458e3) main_mobtv_loading_pane_g1

0x8ed9,	// (0x000458f1) main_mobtv_loading_pane_g2_ParamLimits

0x8ed9,	// (0x000458f1) main_mobtv_loading_pane_g2

0x8ee5,	// (0x000458fd) main_mobtv_loading_pane_g3_ParamLimits

0x8ee5,	// (0x000458fd) main_mobtv_loading_pane_g3

0x0002,

0xfc5f,	// (0x0004c677) main_mobtv_loading_pane_g_ParamLimits

0xfc5f,	// (0x0004c677) main_mobtv_loading_pane_g

0xe3be,	// (0x0004add6) main_mobtv_loading_pane_t1_ParamLimits

0xe3be,	// (0x0004add6) main_mobtv_loading_pane_t1

0xe3d6,	// (0x0004adee) main_mobtv_loading_pane_t2_ParamLimits

0xe3d6,	// (0x0004adee) main_mobtv_loading_pane_t2

0x0001,

0xfc66,	// (0x0004c67e) main_mobtv_loading_pane_t_ParamLimits

0xfc66,	// (0x0004c67e) main_mobtv_loading_pane_t

0x8ef3,	// (0x0004590b) wait_bar_pane_cp06_ParamLimits

0x8ef3,	// (0x0004590b) wait_bar_pane_cp06

0xe3fa,	// (0x0004ae12) main_mobtv_programe_curr_pane_t1

0xe408,	// (0x0004ae20) main_mobtv_programe_curr_pane_t2

0x0001,

0xfc6b,	// (0x0004c683) main_mobtv_programe_curr_pane_t

0xe416,	// (0x0004ae2e) main_mobtv_programe_next_pane_t1

0xe424,	// (0x0004ae3c) main_mobtv_programe_next_pane_t2

0xe432,	// (0x0004ae4a) main_mobtv_programe_next_pane_t3

0x0002,

0xfc70,	// (0x0004c688) main_mobtv_programe_next_pane_t

0xa0df,	// (0x00046af7) bg_popup_mobtv_noti_window_pane

0xe440,	// (0x0004ae58) popup_mobtv_noti_window_g1

0xe448,	// (0x0004ae60) popup_mobtv_noti_window_t1

0xe456,	// (0x0004ae6e) popup_mobtv_noti_window_t2

0x0001,

0xfc77,	// (0x0004c68f) popup_mobtv_noti_window_t

0xccd5,	// (0x000496ed) bg_popup_mobtv_noti_window_pane_g1

0xa0df,	// (0x00046af7) sc_clock_pane

0xa0df,	// (0x00046af7) main_fs_bigclock_pane

0x85ad,	// (0x00044fc5) blid2_tripm_pane_t4_ParamLimits

0x85ad,	// (0x00044fc5) blid2_tripm_pane_t4

0x8eff,	// (0x00045917) sc_clock_pane_g1_ParamLimits

0x8eff,	// (0x00045917) sc_clock_pane_g1

0x8f0d,	// (0x00045925) sc_clock_pane_t1_ParamLimits

0x8f0d,	// (0x00045925) sc_clock_pane_t1

0x8f20,	// (0x00045938) sc_clock_pane_t2_ParamLimits

0x8f20,	// (0x00045938) sc_clock_pane_t2

0x8f32,	// (0x0004594a) sc_clock_pane_t3_ParamLimits

0x8f32,	// (0x0004594a) sc_clock_pane_t3

0x0004,

0xfc7c,	// (0x0004c694) sc_clock_pane_t_ParamLimits

0xfc7c,	// (0x0004c694) sc_clock_pane_t

0x97c1,	// (0x000461d9) main_fs_bigclock_indicator_pane_ParamLimits

0x97c1,	// (0x000461d9) main_fs_bigclock_indicator_pane

0x8fb5,	// (0x000459cd) main_fs_bigclock_pane_g1_ParamLimits

0x8fb5,	// (0x000459cd) main_fs_bigclock_pane_g1

0x97cd,	// (0x000461e5) main_fs_bigclock_pane_t1_ParamLimits

0x97cd,	// (0x000461e5) main_fs_bigclock_pane_t1

0x97df,	// (0x000461f7) main_fs_bigclock_pane_t2_ParamLimits

0x97df,	// (0x000461f7) main_fs_bigclock_pane_t2

0x97f3,	// (0x0004620b) main_fs_bigclock_pane_t3_ParamLimits

0x97f3,	// (0x0004620b) main_fs_bigclock_pane_t3

0x0002,

0xfe86,	// (0x0004c89e) main_fs_bigclock_pane_t_ParamLimits

0xfe86,	// (0x0004c89e) main_fs_bigclock_pane_t

0xecbd,	// (0x0004b6d5) main_fs_bigclock_indicator_pane_g1

0xe175,	// (0x0004ab8d) ncim_query_content_pane_g2_ParamLimits

0xe175,	// (0x0004ab8d) ncim_query_content_pane_g2

0x0001,

0xfc09,	// (0x0004c621) ncim_query_content_pane_g_ParamLimits

0xfc09,	// (0x0004c621) ncim_query_content_pane_g

0x8f46,	// (0x0004595e) sc_clock_pane_t4_ParamLimits

0x8f46,	// (0x0004595e) sc_clock_pane_t4

0xabed,	// (0x00047605) main_radioblah_pane

0xd67d,	// (0x0004a095) cell_call4_button_pane_t1_copy1_ParamLimits

0xd67d,	// (0x0004a095) cell_call4_button_pane_t1_copy1

0x8b89,	// (0x000455a1) main_ncimui_pane_t1_ParamLimits

0x8b89,	// (0x000455a1) main_ncimui_pane_t1

0x8ba3,	// (0x000455bb) main_ncimui_pane_t2_ParamLimits

0x8ba3,	// (0x000455bb) main_ncimui_pane_t2

0x0002,

0xfc02,	// (0x0004c61a) main_ncimui_pane_t_ParamLimits

0xfc02,	// (0x0004c61a) main_ncimui_pane_t

0xe5ae,	// (0x0004afc6) main_radioblah_anim_pane_ParamLimits

0xe5ae,	// (0x0004afc6) main_radioblah_anim_pane

0xe5bf,	// (0x0004afd7) main_radioblah_info_pane_ParamLimits

0xe5bf,	// (0x0004afd7) main_radioblah_info_pane

0xe5d3,	// (0x0004afeb) main_radioblah_pane_t1_ParamLimits

0xe5d3,	// (0x0004afeb) main_radioblah_pane_t1

0xe5ef,	// (0x0004b007) main_radioblah_pane_t2_ParamLimits

0xe5ef,	// (0x0004b007) main_radioblah_pane_t2

0x0003,

0xfc9d,	// (0x0004c6b5) main_radioblah_pane_t_ParamLimits

0xfc9d,	// (0x0004c6b5) main_radioblah_pane_t

0x900b,	// (0x00045a23) main_radioblah_rocker_ctrl_pane_ParamLimits

0x900b,	// (0x00045a23) main_radioblah_rocker_ctrl_pane

0xe637,	// (0x0004b04f) main_radioblah_info_pane_t1_ParamLimits

0xe637,	// (0x0004b04f) main_radioblah_info_pane_t1

0x9050,	// (0x00045a68) main_radioblah_info_pane_t2_ParamLimits

0x9050,	// (0x00045a68) main_radioblah_info_pane_t2

0x0003,

0xfca6,	// (0x0004c6be) main_radioblah_info_pane_t_ParamLimits

0xfca6,	// (0x0004c6be) main_radioblah_info_pane_t

0xccd5,	// (0x000496ed) main_radioblah_rocker_ctrl_pane_g1

0x9100,	// (0x00045b18) main_radioblah_rocker_ctrl_pane_g2

0x9108,	// (0x00045b20) main_radioblah_rocker_ctrl_pane_g3

0x9110,	// (0x00045b28) main_radioblah_rocker_ctrl_pane_g4

0x9118,	// (0x00045b30) main_radioblah_rocker_ctrl_pane_g5

0x9120,	// (0x00045b38) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfcaf,	// (0x0004c6c7) main_radioblah_rocker_ctrl_pane_g

0x8b2f,	// (0x00045547) main_cset_text2_pane_t1_copy1_ParamLimits

0x737d,	// (0x00043d95) cam4_image_uncrop_qvga_pane

0x74be,	// (0x00043ed6) vid4_image_uncrop_qcif_pane

0x873b,	// (0x00045153) cam6_image_uncrop_qvga_pane_ParamLimits

0x873b,	// (0x00045153) cam6_image_uncrop_qvga_pane

0xde70,	// (0x0004a888) vid6_image_uncrop_qcif_pane_ParamLimits

0xde70,	// (0x0004a888) vid6_image_uncrop_qcif_pane

0xa0df,	// (0x00046af7) bg_popup_preview_window_pane_cp03

0xe127,	// (0x0004ab3f) list_cset_text2_pane

0xe12f,	// (0x0004ab47) main_cset6_text2_pane_g1

0xe137,	// (0x0004ab4f) main_cset6_text2_pane_t1

0x9128,	// (0x00045b40) list_cset_text2_pane_t1_ParamLimits

0x9128,	// (0x00045b40) list_cset_text2_pane_t1

0xabed,	// (0x00047605) main_radioblah_pane_ParamLimits

0x8ea5,	// (0x000458bd) main_mobtv_info_pane_t3_ParamLimits

0x8ea5,	// (0x000458bd) main_mobtv_info_pane_t3

0x8ff9,	// (0x00045a11) main_radioblah_pane_g1

0x9024,	// (0x00045a3c) main_radioblah_info_pane_g1

0x90a5,	// (0x00045abd) main_radioblah_info_pane_t3_ParamLimits

0x90a5,	// (0x00045abd) main_radioblah_info_pane_t3

0x4337,	// (0x00040d4f) highlight_cell_cale_month_pane_ParamLimits

0x4337,	// (0x00040d4f) highlight_cell_cale_month_pane

0xa0df,	// (0x00046af7) main_phob_fisheye_pane

0xcfff,	// (0x00049a17) scroll_pane_cp0031_ParamLimits

0xcfff,	// (0x00049a17) scroll_pane_cp0031

0xdf7e,	// (0x0004a996) wait_bar_pane_cp08_ParamLimits

0x8917,	// (0x0004532f) cset_list_set_pane_copy1_ParamLimits

0xe671,	// (0x0004b089) highlight_cell_cale_month_pane_g1

0x9149,	// (0x00045b61) highlight_cell_cale_month_pane_t1

0xdc03,	// (0x0004a61b) list_gen_pane_cp01

0xd844,	// (0x0004a25c) scroll_pane_01

0x9157,	// (0x00045b6f) list_single_double_fisheye_pane

0x16c5,	// (0x0003e0dd) list_double_fisheye_pane_g1_ParamLimits

0x16c5,	// (0x0003e0dd) list_double_fisheye_pane_g1

0x16d1,	// (0x0003e0e9) list_double_fisheye_pane_g2_ParamLimits

0x16d1,	// (0x0003e0e9) list_double_fisheye_pane_g2

0x9160,	// (0x00045b78) list_double_fisheye_pane_g3_ParamLimits

0x9160,	// (0x00045b78) list_double_fisheye_pane_g3

0x0004,

0xfcbc,	// (0x0004c6d4) list_double_fisheye_pane_g_ParamLimits

0xfcbc,	// (0x0004c6d4) list_double_fisheye_pane_g

0x1702,	// (0x0003e11a) list_double_fisheye_pane_t1_ParamLimits

0x1702,	// (0x0003e11a) list_double_fisheye_pane_t1

0x171d,	// (0x0003e135) list_double_fisheye_pane_t2_ParamLimits

0x171d,	// (0x0003e135) list_double_fisheye_pane_t2

0x0001,

0xfcc7,	// (0x0004c6df) list_double_fisheye_pane_t_ParamLimits

0xfcc7,	// (0x0004c6df) list_double_fisheye_pane_t

0xa0df,	// (0x00046af7) main_call5_pane

0x8f6c,	// (0x00045984) sc_swipe_pane_ParamLimits

0x8f6c,	// (0x00045984) sc_swipe_pane

0x9178,	// (0x00045b90) call5_image_pane_ParamLimits

0x9178,	// (0x00045b90) call5_image_pane

0x9188,	// (0x00045ba0) call5_swipe_1_pane_ParamLimits

0x9188,	// (0x00045ba0) call5_swipe_1_pane

0x9194,	// (0x00045bac) call5_swipe_2_pane_ParamLimits

0x9194,	// (0x00045bac) call5_swipe_2_pane

0x91ae,	// (0x00045bc6) popup_call5_audio_first_window_ParamLimits

0x91ae,	// (0x00045bc6) popup_call5_audio_first_window

0xcf23,	// (0x0004993b) call5_swipe_1_pane_g1_ParamLimits

0xcf23,	// (0x0004993b) call5_swipe_1_pane_g1

0xe679,	// (0x0004b091) call5_swipe_1_pane_g2_ParamLimits

0xe679,	// (0x0004b091) call5_swipe_1_pane_g2

0x0001,

0xfccc,	// (0x0004c6e4) call5_swipe_1_pane_g_ParamLimits

0xfccc,	// (0x0004c6e4) call5_swipe_1_pane_g

0xe685,	// (0x0004b09d) call5_swipe_1_pane_t1_ParamLimits

0xe685,	// (0x0004b09d) call5_swipe_1_pane_t1

0xcf23,	// (0x0004993b) call5_swipe_2_pane_g1_ParamLimits

0xcf23,	// (0x0004993b) call5_swipe_2_pane_g1

0xe69a,	// (0x0004b0b2) call5_swipe_2_pane_g2_ParamLimits

0xe69a,	// (0x0004b0b2) call5_swipe_2_pane_g2

0x0001,

0xfcd1,	// (0x0004c6e9) call5_swipe_2_pane_g_ParamLimits

0xfcd1,	// (0x0004c6e9) call5_swipe_2_pane_g

0xe6a6,	// (0x0004b0be) call5_swipe_2_pane_t1_ParamLimits

0xe6a6,	// (0x0004b0be) call5_swipe_2_pane_t1

0xe6bb,	// (0x0004b0d3) sc_swipe_pane_g1_ParamLimits

0xe6bb,	// (0x0004b0d3) sc_swipe_pane_g1

0xe6c8,	// (0x0004b0e0) sc_swipe_pane_g2_ParamLimits

0xe6c8,	// (0x0004b0e0) sc_swipe_pane_g2

0x0001,

0xfcd6,	// (0x0004c6ee) sc_swipe_pane_g_ParamLimits

0xfcd6,	// (0x0004c6ee) sc_swipe_pane_g

0xe6d4,	// (0x0004b0ec) sc_swipe_pane_t1_ParamLimits

0xe6d4,	// (0x0004b0ec) sc_swipe_pane_t1

0xa0df,	// (0x00046af7) main_cmail_launcher_pane

0x91bc,	// (0x00045bd4) aid_size_cell_cmail_l_ParamLimits

0x91bc,	// (0x00045bd4) aid_size_cell_cmail_l

0x91cc,	// (0x00045be4) grid_cmail_l_pane_ParamLimits

0x91cc,	// (0x00045be4) grid_cmail_l_pane

0x91dc,	// (0x00045bf4) cell_cmail_l_pane_ParamLimits

0x91dc,	// (0x00045bf4) cell_cmail_l_pane

0x91f0,	// (0x00045c08) cell_cmail_l_pane_g1_ParamLimits

0x91f0,	// (0x00045c08) cell_cmail_l_pane_g1

0x9201,	// (0x00045c19) cell_cmail_l_pane_t1_ParamLimits

0x9201,	// (0x00045c19) cell_cmail_l_pane_t1

0xe6e9,	// (0x0004b101) cell_cmail_l_pane_t2_ParamLimits

0xe6e9,	// (0x0004b101) cell_cmail_l_pane_t2

0x0001,

0xfcdb,	// (0x0004c6f3) cell_cmail_l_pane_t_ParamLimits

0xfcdb,	// (0x0004c6f3) cell_cmail_l_pane_t

0xabed,	// (0x00047605) grid_highlight_pane_cp018_ParamLimits

0xabed,	// (0x00047605) grid_highlight_pane_cp018

0x23a6,	// (0x0003edbe) main2_pane_ParamLimits

0x23a6,	// (0x0003edbe) main2_pane

0xa8e9,	// (0x00047301) popup_sp_fs_action_menu_bg_pane_g1

0xa8f1,	// (0x00047309) popup_sp_fs_action_menu_bg_pane_g2

0xa8f9,	// (0x00047311) popup_sp_fs_action_menu_bg_pane_g3

0xa901,	// (0x00047319) popup_sp_fs_action_menu_bg_pane_g4

0xa909,	// (0x00047321) popup_sp_fs_action_menu_bg_pane_g5

0xa911,	// (0x00047329) popup_sp_fs_action_menu_bg_pane_g6

0xa919,	// (0x00047331) popup_sp_fs_action_menu_bg_pane_g7

0xa921,	// (0x00047339) popup_sp_fs_action_menu_bg_pane_g8

0xa929,	// (0x00047341) popup_sp_fs_action_menu_bg_pane_g9

0xa931,	// (0x00047349) popup_sp_fs_action_menu_bg_pane_g10

0xa931,	// (0x00047349) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf18a,	// (0x0004bba2) popup_sp_fs_action_menu_bg_pane_g

0x0e7f,	// (0x0003d897) list_medium_line_x2_t3_g3_g1_ParamLimits

0x0e7f,	// (0x0003d897) list_medium_line_x2_t3_g3_g1

0x0e8b,	// (0x0003d8a3) list_medium_line_x2_t3_g3_g2_ParamLimits

0x0e8b,	// (0x0003d8a3) list_medium_line_x2_t3_g3_g2

0x0e97,	// (0x0003d8af) list_medium_line_x2_t3_g3_g3_ParamLimits

0x0e97,	// (0x0003d8af) list_medium_line_x2_t3_g3_g3

0x0002,

0xf238,	// (0x0004bc50) list_medium_line_x2_t3_g3_g_ParamLimits

0xf238,	// (0x0004bc50) list_medium_line_x2_t3_g3_g

0x0ea3,	// (0x0003d8bb) list_medium_line_x2_t3_g3_t1_ParamLimits

0x0ea3,	// (0x0003d8bb) list_medium_line_x2_t3_g3_t1

0x0eb8,	// (0x0003d8d0) list_medium_line_x2_t3_g3_t2_ParamLimits

0x0eb8,	// (0x0003d8d0) list_medium_line_x2_t3_g3_t2

0x0eca,	// (0x0003d8e2) list_medium_line_x2_t3_g3_t3_ParamLimits

0x0eca,	// (0x0003d8e2) list_medium_line_x2_t3_g3_t3

0x0002,

0xf23f,	// (0x0004bc57) list_medium_line_x2_t3_g3_t_ParamLimits

0xf23f,	// (0x0004bc57) list_medium_line_x2_t3_g3_t

0x0e7f,	// (0x0003d897) list_medium_line_x2_t3_g2_g1_ParamLimits

0x0e7f,	// (0x0003d897) list_medium_line_x2_t3_g2_g1

0x0e97,	// (0x0003d8af) list_medium_line_x2_t3_g2_g2_ParamLimits

0x0e97,	// (0x0003d8af) list_medium_line_x2_t3_g2_g2

0x0001,

0xf246,	// (0x0004bc5e) list_medium_line_x2_t3_g2_g_ParamLimits

0xf246,	// (0x0004bc5e) list_medium_line_x2_t3_g2_g

0x0edf,	// (0x0003d8f7) list_medium_line_x2_t3_g2_t1_ParamLimits

0x0edf,	// (0x0003d8f7) list_medium_line_x2_t3_g2_t1

0x0ef4,	// (0x0003d90c) list_medium_line_x2_t3_g2_t2_ParamLimits

0x0ef4,	// (0x0003d90c) list_medium_line_x2_t3_g2_t2

0x0f06,	// (0x0003d91e) list_medium_line_x2_t3_g2_t3_ParamLimits

0x0f06,	// (0x0003d91e) list_medium_line_x2_t3_g2_t3

0x0002,

0xf24b,	// (0x0004bc63) list_medium_line_x2_t3_g2_t_ParamLimits

0xf24b,	// (0x0004bc63) list_medium_line_x2_t3_g2_t

0x0e7f,	// (0x0003d897) list_medium_line_x2_t4_g4_g1_ParamLimits

0x0e7f,	// (0x0003d897) list_medium_line_x2_t4_g4_g1

0x0f24,	// (0x0003d93c) list_medium_line_x2_t4_g4_g2_ParamLimits

0x0f24,	// (0x0003d93c) list_medium_line_x2_t4_g4_g2

0x0e8b,	// (0x0003d8a3) list_medium_line_x2_t4_g4_g3_ParamLimits

0x0e8b,	// (0x0003d8a3) list_medium_line_x2_t4_g4_g3

0x0f30,	// (0x0003d948) list_medium_line_x2_t4_g4_g4_ParamLimits

0x0f30,	// (0x0003d948) list_medium_line_x2_t4_g4_g4

0x0003,

0xf252,	// (0x0004bc6a) list_medium_line_x2_t4_g4_g_ParamLimits

0xf252,	// (0x0004bc6a) list_medium_line_x2_t4_g4_g

0x0f3c,	// (0x0003d954) list_medium_line_x2_t4_g4_t1_ParamLimits

0x0f3c,	// (0x0003d954) list_medium_line_x2_t4_g4_t1

0x0f56,	// (0x0003d96e) list_medium_line_x2_t4_g4_t2_ParamLimits

0x0f56,	// (0x0003d96e) list_medium_line_x2_t4_g4_t2

0x0f6c,	// (0x0003d984) list_medium_line_x2_t4_g4_t3_ParamLimits

0x0f6c,	// (0x0003d984) list_medium_line_x2_t4_g4_t3

0x0f81,	// (0x0003d999) list_medium_line_x2_t4_g4_t4_ParamLimits

0x0f81,	// (0x0003d999) list_medium_line_x2_t4_g4_t4

0x0003,

0xf25b,	// (0x0004bc73) list_medium_line_x2_t4_g4_t_ParamLimits

0xf25b,	// (0x0004bc73) list_medium_line_x2_t4_g4_t

0x0e7f,	// (0x0003d897) list_medium_line_x2_t2_g4_g1_ParamLimits

0x0e7f,	// (0x0003d897) list_medium_line_x2_t2_g4_g1

0x0f24,	// (0x0003d93c) list_medium_line_x2_t2_g4_g2_ParamLimits

0x0f24,	// (0x0003d93c) list_medium_line_x2_t2_g4_g2

0x0e8b,	// (0x0003d8a3) list_medium_line_x2_t2_g4_g3_ParamLimits

0x0e8b,	// (0x0003d8a3) list_medium_line_x2_t2_g4_g3

0x0e97,	// (0x0003d8af) list_medium_line_x2_t2_g4_g4_ParamLimits

0x0e97,	// (0x0003d8af) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2c2,	// (0x0004bcda) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2c2,	// (0x0004bcda) list_medium_line_x2_t2_g4_g

0x0f93,	// (0x0003d9ab) list_medium_line_x2_t2_g4_t1_ParamLimits

0x0f93,	// (0x0003d9ab) list_medium_line_x2_t2_g4_t1

0x0eca,	// (0x0003d8e2) list_medium_line_x2_t2_g4_t2_ParamLimits

0x0eca,	// (0x0003d8e2) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2cb,	// (0x0004bce3) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2cb,	// (0x0004bce3) list_medium_line_x2_t2_g4_t

0x0e7f,	// (0x0003d897) list_medium_line_x2_t2_g3_g1_ParamLimits

0x0e7f,	// (0x0003d897) list_medium_line_x2_t2_g3_g1

0x0e8b,	// (0x0003d8a3) list_medium_line_x2_t2_g3_g2_ParamLimits

0x0e8b,	// (0x0003d8a3) list_medium_line_x2_t2_g3_g2

0x0e97,	// (0x0003d8af) list_medium_line_x2_t2_g3_g3_ParamLimits

0x0e97,	// (0x0003d8af) list_medium_line_x2_t2_g3_g3

0x0002,

0xf238,	// (0x0004bc50) list_medium_line_x2_t2_g3_g_ParamLimits

0xf238,	// (0x0004bc50) list_medium_line_x2_t2_g3_g

0x0fa8,	// (0x0003d9c0) list_medium_line_x2_t2_g3_t1_ParamLimits

0x0fa8,	// (0x0003d9c0) list_medium_line_x2_t2_g3_t1

0x0eca,	// (0x0003d8e2) list_medium_line_x2_t2_g3_t2_ParamLimits

0x0eca,	// (0x0003d8e2) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2d0,	// (0x0004bce8) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2d0,	// (0x0004bce8) list_medium_line_x2_t2_g3_t

0x4518,	// (0x00040f30) main_sp_fs_list_pane_ParamLimits

0x4518,	// (0x00040f30) main_sp_fs_list_pane

0x4524,	// (0x00040f3c) sp_fs_scroll_pane_ParamLimits

0x4524,	// (0x00040f3c) sp_fs_scroll_pane

0x0fd6,	// (0x0003d9ee) list_medium_line_x2_t3_t1

0x0fe6,	// (0x0003d9fe) list_medium_line_x2_t3_t2

0x0ff4,	// (0x0003da0c) list_medium_line_x2_t3_t3

0x0002,

0xf31b,	// (0x0004bd33) list_medium_line_x2_t3_t

0x1002,	// (0x0003da1a) list_medium_line_x3_t4_t1

0x1012,	// (0x0003da2a) list_medium_line_x3_t4_t2

0x1020,	// (0x0003da38) list_medium_line_x3_t4_t3

0x0ff4,	// (0x0003da0c) list_medium_line_x3_t4_t4

0x0003,

0xf322,	// (0x0004bd3a) list_medium_line_x3_t4_t

0x102e,	// (0x0003da46) list_medium_line_x4_t5_t1

0x103e,	// (0x0003da56) list_medium_line_x4_t5_t2

0x1020,	// (0x0003da38) list_medium_line_x4_t5_t3

0x104c,	// (0x0003da64) list_medium_line_x4_t5_t4

0x0ff4,	// (0x0003da0c) list_medium_line_x4_t5_t5

0x0004,

0xf32b,	// (0x0004bd43) list_medium_line_x4_t5_t

0x0e7f,	// (0x0003d897) list_medium_line_t4_g4_g1_ParamLimits

0x0e7f,	// (0x0003d897) list_medium_line_t4_g4_g1

0x0f30,	// (0x0003d948) list_medium_line_t4_g4_g2_ParamLimits

0x0f30,	// (0x0003d948) list_medium_line_t4_g4_g2

0x105a,	// (0x0003da72) list_medium_line_t4_g4_g3_ParamLimits

0x105a,	// (0x0003da72) list_medium_line_t4_g4_g3

0x0e97,	// (0x0003d8af) list_medium_line_t4_g4_g4_ParamLimits

0x0e97,	// (0x0003d8af) list_medium_line_t4_g4_g4

0x0003,

0xf336,	// (0x0004bd4e) list_medium_line_t4_g4_g_ParamLimits

0xf336,	// (0x0004bd4e) list_medium_line_t4_g4_g

0x1066,	// (0x0003da7e) list_medium_line_t4_g4_t1_ParamLimits

0x1066,	// (0x0003da7e) list_medium_line_t4_g4_t1

0x107b,	// (0x0003da93) list_medium_line_t4_g4_t2_ParamLimits

0x107b,	// (0x0003da93) list_medium_line_t4_g4_t2

0x1091,	// (0x0003daa9) list_medium_line_t4_g4_t3_ParamLimits

0x1091,	// (0x0003daa9) list_medium_line_t4_g4_t3

0x0eca,	// (0x0003d8e2) list_medium_line_t4_g4_t4_ParamLimits

0x0eca,	// (0x0003d8e2) list_medium_line_t4_g4_t4

0x0003,

0xf33f,	// (0x0004bd57) list_medium_line_t4_g4_t_ParamLimits

0xf33f,	// (0x0004bd57) list_medium_line_t4_g4_t

0x463b,	// (0x00041053) chi_dic_find_pane_g1

0x54bd,	// (0x00041ed5) main_tport_pane

0x1361,	// (0x0003dd79) list_medium_line_plain_t1

0x136f,	// (0x0003dd87) list_medium_line_t2_g2_g1_ParamLimits

0x136f,	// (0x0003dd87) list_medium_line_t2_g2_g1

0x137b,	// (0x0003dd93) list_medium_line_t2_g2_g2_ParamLimits

0x137b,	// (0x0003dd93) list_medium_line_t2_g2_g2

0x0001,

0xfa13,	// (0x0004c42b) list_medium_line_t2_g2_g_ParamLimits

0xfa13,	// (0x0004c42b) list_medium_line_t2_g2_g

0x1387,	// (0x0003dd9f) list_medium_line_t2_g2_t1_ParamLimits

0x1387,	// (0x0003dd9f) list_medium_line_t2_g2_t1

0x13a1,	// (0x0003ddb9) list_medium_line_t2_g2_t2_ParamLimits

0x13a1,	// (0x0003ddb9) list_medium_line_t2_g2_t2

0x0001,

0xfa18,	// (0x0004c430) list_medium_line_t2_g2_t_ParamLimits

0xfa18,	// (0x0004c430) list_medium_line_t2_g2_t

0x15c1,	// (0x0003dfd9) aid_sp_fs_list_icon_a_sm

0x15c9,	// (0x0003dfe1) aid_sp_fs_list_icon_d

0x15d1,	// (0x0003dfe9) aid_sp_fs_text_primary

0xe81e,	// (0x0004b236) aid_sp_fs_text_secondary

0x8403,	// (0x00044e1b) list_medium_line

0x8403,	// (0x00044e1b) list_medium_line_g2

0x8403,	// (0x00044e1b) list_medium_line_g3

0x8403,	// (0x00044e1b) list_medium_line_plain

0x8403,	// (0x00044e1b) list_medium_line_plain_t2

0x8403,	// (0x00044e1b) list_medium_line_plain_t3

0x8403,	// (0x00044e1b) list_medium_line_right_icon

0x8403,	// (0x00044e1b) list_medium_line_right_iconx2

0x8403,	// (0x00044e1b) list_medium_line_t2

0x8403,	// (0x00044e1b) list_medium_line_t2_g2

0x8403,	// (0x00044e1b) list_medium_line_t2_g3

0x8403,	// (0x00044e1b) list_medium_line_t2_right_icon

0x8403,	// (0x00044e1b) list_medium_line_t2_right_iconx2

0x8403,	// (0x00044e1b) list_medium_line_t3

0x8403,	// (0x00044e1b) list_medium_line_t3_g2

0x8403,	// (0x00044e1b) list_medium_line_t3_g3

0x8403,	// (0x00044e1b) list_medium_line_t3_right_iconx2

0x840c,	// (0x00044e24) list_medium_line_t4_g4

0x8415,	// (0x00044e2d) list_medium_line_x2

0x8415,	// (0x00044e2d) list_medium_line_x2_t2_g2

0x8415,	// (0x00044e2d) list_medium_line_x2_t2_g3

0x8415,	// (0x00044e2d) list_medium_line_x2_t2_g4

0x8415,	// (0x00044e2d) list_medium_line_x2_t3

0x8415,	// (0x00044e2d) list_medium_line_x2_t3_g2

0x8415,	// (0x00044e2d) list_medium_line_x2_t3_g3

0x8415,	// (0x00044e2d) list_medium_line_x2_t3_g4

0x8415,	// (0x00044e2d) list_medium_line_x2_t4_g2

0x8415,	// (0x00044e2d) list_medium_line_x2_t4_g4

0x841e,	// (0x00044e36) list_medium_line_x3

0x841e,	// (0x00044e36) list_medium_line_x3_t4

0x841e,	// (0x00044e36) list_medium_line_x3_t4_g4

0x840c,	// (0x00044e24) list_medium_line_x4_t4

0x840c,	// (0x00044e24) list_medium_line_x4_t4_g7

0x840c,	// (0x00044e24) list_medium_line_x4_t5

0x15da,	// (0x0003dff2) list_single_fs_dyc_pane_ParamLimits

0x15da,	// (0x0003dff2) list_single_fs_dyc_pane

0x0e7f,	// (0x0003d897) list_medium_line_x4_t4_g7_g1_ParamLimits

0x0e7f,	// (0x0003d897) list_medium_line_x4_t4_g7_g1

0x15f6,	// (0x0003e00e) list_medium_line_x4_t4_g7_g2_ParamLimits

0x15f6,	// (0x0003e00e) list_medium_line_x4_t4_g7_g2

0x1602,	// (0x0003e01a) list_medium_line_x4_t4_g7_g3_ParamLimits

0x1602,	// (0x0003e01a) list_medium_line_x4_t4_g7_g3

0x1611,	// (0x0003e029) list_medium_line_x4_t4_g7_g4_ParamLimits

0x1611,	// (0x0003e029) list_medium_line_x4_t4_g7_g4

0x161d,	// (0x0003e035) list_medium_line_x4_t4_g7_g5_ParamLimits

0x161d,	// (0x0003e035) list_medium_line_x4_t4_g7_g5

0x162c,	// (0x0003e044) list_medium_line_x4_t4_g7_g6_ParamLimits

0x162c,	// (0x0003e044) list_medium_line_x4_t4_g7_g6

0x163b,	// (0x0003e053) list_medium_line_x4_t4_g7_g7_ParamLimits

0x163b,	// (0x0003e053) list_medium_line_x4_t4_g7_g7

0x0006,

0xfbe3,	// (0x0004c5fb) list_medium_line_x4_t4_g7_g_ParamLimits

0xfbe3,	// (0x0004c5fb) list_medium_line_x4_t4_g7_g

0x1647,	// (0x0003e05f) list_medium_line_x4_t4_g7_t1_ParamLimits

0x1647,	// (0x0003e05f) list_medium_line_x4_t4_g7_t1

0x165c,	// (0x0003e074) list_medium_line_x4_t4_g7_t2_ParamLimits

0x165c,	// (0x0003e074) list_medium_line_x4_t4_g7_t2

0x1671,	// (0x0003e089) list_medium_line_x4_t4_g7_t3_ParamLimits

0x1671,	// (0x0003e089) list_medium_line_x4_t4_g7_t3

0x1686,	// (0x0003e09e) list_medium_line_x4_t4_g7_t4_ParamLimits

0x1686,	// (0x0003e09e) list_medium_line_x4_t4_g7_t4

0x1698,	// (0x0003e0b0) list_medium_line_x4_t4_g7_t5_ParamLimits

0x1698,	// (0x0003e0b0) list_medium_line_x4_t4_g7_t5

0x0004,

0xfbf2,	// (0x0004c60a) list_medium_line_x4_t4_g7_t_ParamLimits

0xfbf2,	// (0x0004c60a) list_medium_line_x4_t4_g7_t

0x16aa,	// (0x0003e0c2) list_single_dyc_row_pane_ParamLimits

0x16aa,	// (0x0003e0c2) list_single_dyc_row_pane

0x916c,	// (0x00045b84) call5_gesture_pane_ParamLimits

0x916c,	// (0x00045b84) call5_gesture_pane

0x91a0,	// (0x00045bb8) call5_windows_pane_ParamLimits

0x91a0,	// (0x00045bb8) call5_windows_pane

0x9217,	// (0x00045c2f) call5_swipe_1_pane_cp_ParamLimits

0x9217,	// (0x00045c2f) call5_swipe_1_pane_cp

0x9223,	// (0x00045c3b) call5_swipe_2_pane_cp_ParamLimits

0x9223,	// (0x00045c3b) call5_swipe_2_pane_cp

0xaa15,	// (0x0004742d) call5_image_pane_cp

0x922f,	// (0x00045c47) popup_call5_audio_first_window_cp_ParamLimits

0x922f,	// (0x00045c47) popup_call5_audio_first_window_cp

0xe6bb,	// (0x0004b0d3) call5_swipe_1_pane_g1_cp_ParamLimits

0xe6bb,	// (0x0004b0d3) call5_swipe_1_pane_g1_cp

0xe6fb,	// (0x0004b113) call5_swipe_1_pane_g2_cp

0xe6d4,	// (0x0004b0ec) call5_swipe_1_pane_t1_cp_ParamLimits

0xe6d4,	// (0x0004b0ec) call5_swipe_1_pane_t1_cp

0xe6bb,	// (0x0004b0d3) call5_swipe_2_pane_g1_cp_ParamLimits

0xe6bb,	// (0x0004b0d3) call5_swipe_2_pane_g1_cp

0xe703,	// (0x0004b11b) call5_swipe_2_pane_g2_cp

0xe70b,	// (0x0004b123) call5_swipe_2_pane_t1_cp_ParamLimits

0xe70b,	// (0x0004b123) call5_swipe_2_pane_t1_cp

0xabed,	// (0x00047605) main_sp_fs_email_pane

0xe720,	// (0x0004b138) main_sp_fs_listscroll_pane_te

0x173f,	// (0x0003e157) popup_sp_fs_action_menu_pane_ParamLimits

0x173f,	// (0x0003e157) popup_sp_fs_action_menu_pane

0xccd5,	// (0x000496ed) bg_sp_fs_ctrlbar_pane_g1

0xe729,	// (0x0004b141) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xe732,	// (0x0004b14a) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xe73b,	// (0x0004b153) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xccd5,	// (0x000496ed) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfce0,	// (0x0004c6f8) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xcaba,	// (0x000494d2) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xcaba,	// (0x000494d2) bg_sp_fs_ctrlbar_ddmenu_pane

0xe744,	// (0x0004b15c) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xe744,	// (0x0004b15c) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xe750,	// (0x0004b168) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xe750,	// (0x0004b168) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfce9,	// (0x0004c701) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfce9,	// (0x0004c701) main_sp_fs_ctrlbar_ddmenu_pane_g

0xe75c,	// (0x0004b174) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xe75c,	// (0x0004b174) main_sp_fs_ctrlbar_ddmenu_pane_t1

0x1781,	// (0x0003e199) list_medium_line_t2_right_icon_g1

0x1789,	// (0x0003e1a1) list_medium_line_t2_right_icon_t1

0x1799,	// (0x0003e1b1) list_medium_line_t2_right_icon_t2

0x0001,

0xfcee,	// (0x0004c706) list_medium_line_t2_right_icon_t

0xc8cd,	// (0x000492e5) bg_sp_fs_ctrlbar_pane_ParamLimits

0xc8cd,	// (0x000492e5) bg_sp_fs_ctrlbar_pane

0x9280,	// (0x00045c98) main_sp_fs_ctrlbar_button_pane_cp01

0x9288,	// (0x00045ca0) main_sp_fs_ctrlbar_ddmenu_pane

0xe7ae,	// (0x0004b1c6) main_sp_fs_ctrlbar_pane_g1

0xe7ba,	// (0x0004b1d2) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfcf3,	// (0x0004c70b) main_sp_fs_ctrlbar_pane_g

0xe7c6,	// (0x0004b1de) main_sp_fs_ctrlbar_pane_t1

0x9292,	// (0x00045caa) main_sp_fs_ctrlbar_pane

0x92a8,	// (0x00045cc0) main_sp_fs_listscroll_pane_te_cp01

0x17a7,	// (0x0003e1bf) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x17a7,	// (0x0003e1bf) popup_sp_fs_action_menu_pane_cp01

0xabed,	// (0x00047605) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0xabed,	// (0x00047605) bg_sp_fs_highlight_list_pane_cp01

0x17d1,	// (0x0003e1e9) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0x17d1,	// (0x0003e1e9) sp_fs_action_menu_list_gene_pane_g1

0xe7f6,	// (0x0004b20e) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xe7f6,	// (0x0004b20e) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfcfd,	// (0x0004c715) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfcfd,	// (0x0004c715) sp_fs_action_menu_list_gene_pane_g

0x17e0,	// (0x0003e1f8) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0x17e0,	// (0x0003e1f8) sp_fs_action_menu_list_gene_pane_t1

0x17f8,	// (0x0003e210) sp_fs_action_menu_list_gene_pane_ParamLimits

0x17f8,	// (0x0003e210) sp_fs_action_menu_list_gene_pane

0xe827,	// (0x0004b23f) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xe827,	// (0x0004b23f) popup_sp_fs_action_menu_bg_pane

0x1817,	// (0x0003e22f) sp_fs_action_menu_list_pane_ParamLimits

0x1817,	// (0x0003e22f) sp_fs_action_menu_list_pane

0x1837,	// (0x0003e24f) sp_fs_scroll_pane_cp01_ParamLimits

0x1837,	// (0x0003e24f) sp_fs_scroll_pane_cp01

0x185d,	// (0x0003e275) list_medium_line_plain_t2_t1

0x186d,	// (0x0003e285) list_medium_line_plain_t2_t2

0x0001,

0xfd02,	// (0x0004c71a) list_medium_line_plain_t2_t

0x187b,	// (0x0003e293) list_medium_line_plain_t3_t1

0x188b,	// (0x0003e2a3) list_medium_line_plain_t3_t2

0x1899,	// (0x0003e2b1) list_medium_line_plain_t3_t3

0x0002,

0xfd07,	// (0x0004c71f) list_medium_line_plain_t3_t

0x0e7f,	// (0x0003d897) list_medium_line_x2_t2_g2_g1_ParamLimits

0x0e7f,	// (0x0003d897) list_medium_line_x2_t2_g2_g1

0x0e97,	// (0x0003d8af) list_medium_line_x2_t2_g2_g2_ParamLimits

0x0e97,	// (0x0003d8af) list_medium_line_x2_t2_g2_g2

0x0001,

0xf246,	// (0x0004bc5e) list_medium_line_x2_t2_g2_g_ParamLimits

0xf246,	// (0x0004bc5e) list_medium_line_x2_t2_g2_g

0x1066,	// (0x0003da7e) list_medium_line_x2_t2_g2_t1_ParamLimits

0x1066,	// (0x0003da7e) list_medium_line_x2_t2_g2_t1

0x0eca,	// (0x0003d8e2) list_medium_line_x2_t2_g2_t2_ParamLimits

0x0eca,	// (0x0003d8e2) list_medium_line_x2_t2_g2_t2

0x0001,

0xfd0e,	// (0x0004c726) list_medium_line_x2_t2_g2_t_ParamLimits

0xfd0e,	// (0x0004c726) list_medium_line_x2_t2_g2_t

0x0e7f,	// (0x0003d897) list_medium_line_x2_t4_g2_g1_ParamLimits

0x0e7f,	// (0x0003d897) list_medium_line_x2_t4_g2_g1

0x18a7,	// (0x0003e2bf) list_medium_line_x2_t4_g2_g2_ParamLimits

0x18a7,	// (0x0003e2bf) list_medium_line_x2_t4_g2_g2

0x0001,

0xfd13,	// (0x0004c72b) list_medium_line_x2_t4_g2_g_ParamLimits

0xfd13,	// (0x0004c72b) list_medium_line_x2_t4_g2_g

0x18b9,	// (0x0003e2d1) list_medium_line_x2_t4_g2_t1_ParamLimits

0x18b9,	// (0x0003e2d1) list_medium_line_x2_t4_g2_t1

0x18d3,	// (0x0003e2eb) list_medium_line_x2_t4_g2_t2_ParamLimits

0x18d3,	// (0x0003e2eb) list_medium_line_x2_t4_g2_t2

0x18e9,	// (0x0003e301) list_medium_line_x2_t4_g2_t3_ParamLimits

0x18e9,	// (0x0003e301) list_medium_line_x2_t4_g2_t3

0x0eca,	// (0x0003d8e2) list_medium_line_x2_t4_g2_t4_ParamLimits

0x0eca,	// (0x0003d8e2) list_medium_line_x2_t4_g2_t4

0x0003,

0xfd18,	// (0x0004c730) list_medium_line_x2_t4_g2_t_ParamLimits

0xfd18,	// (0x0004c730) list_medium_line_x2_t4_g2_t

0x18fe,	// (0x0003e316) list_medium_line_t3_right_iconx2_g1

0x1781,	// (0x0003e199) list_medium_line_t3_right_iconx2_g2

0x1906,	// (0x0003e31e) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfd21,	// (0x0004c739) list_medium_line_t3_right_iconx2_g

0x190e,	// (0x0003e326) list_medium_line_t3_right_iconx2_t1

0x191e,	// (0x0003e336) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfd28,	// (0x0004c740) list_medium_line_t3_right_iconx2_t

0x0e7f,	// (0x0003d897) list_medium_line_x3_t4_g4_g1_ParamLimits

0x0e7f,	// (0x0003d897) list_medium_line_x3_t4_g4_g1

0x0e8b,	// (0x0003d8a3) list_medium_line_x3_t4_g4_g2_ParamLimits

0x0e8b,	// (0x0003d8a3) list_medium_line_x3_t4_g4_g2

0x0f30,	// (0x0003d948) list_medium_line_x3_t4_g4_g3_ParamLimits

0x0f30,	// (0x0003d948) list_medium_line_x3_t4_g4_g3

0x192c,	// (0x0003e344) list_medium_line_x3_t4_g4_g4_ParamLimits

0x192c,	// (0x0003e344) list_medium_line_x3_t4_g4_g4

0x0003,

0xfd2d,	// (0x0004c745) list_medium_line_x3_t4_g4_g_ParamLimits

0xfd2d,	// (0x0004c745) list_medium_line_x3_t4_g4_g

0x1938,	// (0x0003e350) list_medium_line_x3_t4_g4_t1_ParamLimits

0x1938,	// (0x0003e350) list_medium_line_x3_t4_g4_t1

0x194f,	// (0x0003e367) list_medium_line_x3_t4_g4_t2_ParamLimits

0x194f,	// (0x0003e367) list_medium_line_x3_t4_g4_t2

0x1964,	// (0x0003e37c) list_medium_line_x3_t4_g4_t3_ParamLimits

0x1964,	// (0x0003e37c) list_medium_line_x3_t4_g4_t3

0x1979,	// (0x0003e391) list_medium_line_x3_t4_g4_t4_ParamLimits

0x1979,	// (0x0003e391) list_medium_line_x3_t4_g4_t4

0x0003,

0xfd36,	// (0x0004c74e) list_medium_line_x3_t4_g4_t_ParamLimits

0xfd36,	// (0x0004c74e) list_medium_line_x3_t4_g4_t

0x1996,	// (0x0003e3ae) list_single_dyc_row_text_pane_t1_ParamLimits

0x1996,	// (0x0003e3ae) list_single_dyc_row_text_pane_t1

0x19cd,	// (0x0003e3e5) list_single_dyc_row_text_pane_t2_ParamLimits

0x19cd,	// (0x0003e3e5) list_single_dyc_row_text_pane_t2

0x1a43,	// (0x0003e45b) list_single_dyc_row_text_pane_t3_ParamLimits

0x1a43,	// (0x0003e45b) list_single_dyc_row_text_pane_t3

0x0005,

0xfd3f,	// (0x0004c757) list_single_dyc_row_text_pane_t_ParamLimits

0xfd3f,	// (0x0004c757) list_single_dyc_row_text_pane_t

0x1b14,	// (0x0003e52c) list_single_dyc_row_pane_g1_ParamLimits

0x1b14,	// (0x0003e52c) list_single_dyc_row_pane_g1

0x1b20,	// (0x0003e538) list_single_dyc_row_pane_g2_ParamLimits

0x1b20,	// (0x0003e538) list_single_dyc_row_pane_g2

0x1b2c,	// (0x0003e544) list_single_dyc_row_pane_g3_ParamLimits

0x1b2c,	// (0x0003e544) list_single_dyc_row_pane_g3

0x1b38,	// (0x0003e550) list_single_dyc_row_pane_g4_ParamLimits

0x1b38,	// (0x0003e550) list_single_dyc_row_pane_g4

0x0003,

0xfd4c,	// (0x0004c764) list_single_dyc_row_pane_g_ParamLimits

0xfd4c,	// (0x0004c764) list_single_dyc_row_pane_g

0x1b44,	// (0x0003e55c) list_single_dyc_row_text_pane_ParamLimits

0x1b44,	// (0x0003e55c) list_single_dyc_row_text_pane

0xa0df,	// (0x00046af7) bg_sp_fs_scroll_pane

0xe835,	// (0x0004b24d) thumb_sp_fs_scroll_pane

0x136f,	// (0x0003dd87) list_medium_line_g1_ParamLimits

0x136f,	// (0x0003dd87) list_medium_line_g1

0x1b63,	// (0x0003e57b) list_medium_line_t1_ParamLimits

0x1b63,	// (0x0003e57b) list_medium_line_t1

0x0e7f,	// (0x0003d897) list_medium_line_x2_g1_ParamLimits

0x0e7f,	// (0x0003d897) list_medium_line_x2_g1

0x0e8b,	// (0x0003d8a3) list_medium_line_x2_g2_ParamLimits

0x0e8b,	// (0x0003d8a3) list_medium_line_x2_g2

0x0001,

0xfd55,	// (0x0004c76d) list_medium_line_x2_g_ParamLimits

0xfd55,	// (0x0004c76d) list_medium_line_x2_g

0x1b78,	// (0x0003e590) list_medium_line_x2_t1_ParamLimits

0x1b78,	// (0x0003e590) list_medium_line_x2_t1

0x0e7f,	// (0x0003d897) list_medium_line_x3_g1_ParamLimits

0x0e7f,	// (0x0003d897) list_medium_line_x3_g1

0x0e8b,	// (0x0003d8a3) list_medium_line_x3_g2_ParamLimits

0x0e8b,	// (0x0003d8a3) list_medium_line_x3_g2

0x0001,

0xfd55,	// (0x0004c76d) list_medium_line_x3_g_ParamLimits

0xfd55,	// (0x0004c76d) list_medium_line_x3_g

0x1b78,	// (0x0003e590) list_medium_line_x3_t1_ParamLimits

0x1b78,	// (0x0003e590) list_medium_line_x3_t1

0xe83e,	// (0x0004b256) thumb_sp_fs_scroll_pane_g1

0xe847,	// (0x0004b25f) thumb_sp_fs_scroll_pane_g2

0xe850,	// (0x0004b268) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfd5a,	// (0x0004c772) thumb_sp_fs_scroll_pane_g

0xe83e,	// (0x0004b256) bg_sp_fs_scroll_pane_g1

0xe847,	// (0x0004b25f) bg_sp_fs_scroll_pane_g2

0xe850,	// (0x0004b268) bg_sp_fs_scroll_pane_g3

0x0002,

0xfd5a,	// (0x0004c772) bg_sp_fs_scroll_pane_g

0x0e7f,	// (0x0003d897) list_medium_line_x2_t3_g4_g1_ParamLimits

0x0e7f,	// (0x0003d897) list_medium_line_x2_t3_g4_g1

0x0f24,	// (0x0003d93c) list_medium_line_x2_t3_g4_g2_ParamLimits

0x0f24,	// (0x0003d93c) list_medium_line_x2_t3_g4_g2

0x0e8b,	// (0x0003d8a3) list_medium_line_x2_t3_g4_g3_ParamLimits

0x0e8b,	// (0x0003d8a3) list_medium_line_x2_t3_g4_g3

0x0e97,	// (0x0003d8af) list_medium_line_x2_t3_g4_g4_ParamLimits

0x0e97,	// (0x0003d8af) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2c2,	// (0x0004bcda) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2c2,	// (0x0004bcda) list_medium_line_x2_t3_g4_g

0x1b8e,	// (0x0003e5a6) list_medium_line_x2_t3_g4_t1_ParamLimits

0x1b8e,	// (0x0003e5a6) list_medium_line_x2_t3_g4_t1

0x1ba4,	// (0x0003e5bc) list_medium_line_x2_t3_g4_t2_ParamLimits

0x1ba4,	// (0x0003e5bc) list_medium_line_x2_t3_g4_t2

0x0eca,	// (0x0003d8e2) list_medium_line_x2_t3_g4_t3_ParamLimits

0x0eca,	// (0x0003d8e2) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd61,	// (0x0004c779) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd61,	// (0x0004c779) list_medium_line_x2_t3_g4_t

0x136f,	// (0x0003dd87) list_medium_line_g2_g1_ParamLimits

0x136f,	// (0x0003dd87) list_medium_line_g2_g1

0x137b,	// (0x0003dd93) list_medium_line_g2_g2_ParamLimits

0x137b,	// (0x0003dd93) list_medium_line_g2_g2

0x0001,

0xfa13,	// (0x0004c42b) list_medium_line_g2_g_ParamLimits

0xfa13,	// (0x0004c42b) list_medium_line_g2_g

0x1bbe,	// (0x0003e5d6) list_medium_line_g2_t1_ParamLimits

0x1bbe,	// (0x0003e5d6) list_medium_line_g2_t1

0x136f,	// (0x0003dd87) list_medium_line_t3_g2_g1_ParamLimits

0x136f,	// (0x0003dd87) list_medium_line_t3_g2_g1

0x137b,	// (0x0003dd93) list_medium_line_t3_g2_g2_ParamLimits

0x137b,	// (0x0003dd93) list_medium_line_t3_g2_g2

0x0001,

0xfa13,	// (0x0004c42b) list_medium_line_t3_g2_g_ParamLimits

0xfa13,	// (0x0004c42b) list_medium_line_t3_g2_g

0x1bd3,	// (0x0003e5eb) list_medium_line_t3_g2_t1_ParamLimits

0x1bd3,	// (0x0003e5eb) list_medium_line_t3_g2_t1

0x1bed,	// (0x0003e605) list_medium_line_t3_g2_t2_ParamLimits

0x1bed,	// (0x0003e605) list_medium_line_t3_g2_t2

0x1c03,	// (0x0003e61b) list_medium_line_t3_g2_t3_ParamLimits

0x1c03,	// (0x0003e61b) list_medium_line_t3_g2_t3

0x0002,

0xfd68,	// (0x0004c780) list_medium_line_t3_g2_t_ParamLimits

0xfd68,	// (0x0004c780) list_medium_line_t3_g2_t

0x1781,	// (0x0003e199) list_medium_line_right_icon_g1

0x1c19,	// (0x0003e631) list_medium_line_right_icon_t1

0x136f,	// (0x0003dd87) list_medium_line_t2_g1_ParamLimits

0x136f,	// (0x0003dd87) list_medium_line_t2_g1

0x1c27,	// (0x0003e63f) list_medium_line_t2_t1_ParamLimits

0x1c27,	// (0x0003e63f) list_medium_line_t2_t1

0x1c41,	// (0x0003e659) list_medium_line_t2_t2_ParamLimits

0x1c41,	// (0x0003e659) list_medium_line_t2_t2

0x0001,

0xfd6f,	// (0x0004c787) list_medium_line_t2_t_ParamLimits

0xfd6f,	// (0x0004c787) list_medium_line_t2_t

0x136f,	// (0x0003dd87) list_medium_line_t3_g1_ParamLimits

0x136f,	// (0x0003dd87) list_medium_line_t3_g1

0x1c56,	// (0x0003e66e) list_medium_line_t3_t1_ParamLimits

0x1c56,	// (0x0003e66e) list_medium_line_t3_t1

0x1c70,	// (0x0003e688) list_medium_line_t3_t2_ParamLimits

0x1c70,	// (0x0003e688) list_medium_line_t3_t2

0x1c86,	// (0x0003e69e) list_medium_line_t3_t3_ParamLimits

0x1c86,	// (0x0003e69e) list_medium_line_t3_t3

0x0002,

0xfd74,	// (0x0004c78c) list_medium_line_t3_t_ParamLimits

0xfd74,	// (0x0004c78c) list_medium_line_t3_t

0x136f,	// (0x0003dd87) list_medium_line_g3_g1_ParamLimits

0x136f,	// (0x0003dd87) list_medium_line_g3_g1

0x1c9b,	// (0x0003e6b3) list_medium_line_g3_g2_ParamLimits

0x1c9b,	// (0x0003e6b3) list_medium_line_g3_g2

0x137b,	// (0x0003dd93) list_medium_line_g3_g3_ParamLimits

0x137b,	// (0x0003dd93) list_medium_line_g3_g3

0x0002,

0xfd7b,	// (0x0004c793) list_medium_line_g3_g_ParamLimits

0xfd7b,	// (0x0004c793) list_medium_line_g3_g

0x1ca7,	// (0x0003e6bf) list_medium_line_g3_t1_ParamLimits

0x1ca7,	// (0x0003e6bf) list_medium_line_g3_t1

0x136f,	// (0x0003dd87) list_medium_line_t2_g3_g1_ParamLimits

0x136f,	// (0x0003dd87) list_medium_line_t2_g3_g1

0x1c9b,	// (0x0003e6b3) list_medium_line_t2_g3_g2_ParamLimits

0x1c9b,	// (0x0003e6b3) list_medium_line_t2_g3_g2

0x137b,	// (0x0003dd93) list_medium_line_t2_g3_g3_ParamLimits

0x137b,	// (0x0003dd93) list_medium_line_t2_g3_g3

0x0002,

0xfd7b,	// (0x0004c793) list_medium_line_t2_g3_g_ParamLimits

0xfd7b,	// (0x0004c793) list_medium_line_t2_g3_g

0x1cbc,	// (0x0003e6d4) list_medium_line_t2_g3_t1_ParamLimits

0x1cbc,	// (0x0003e6d4) list_medium_line_t2_g3_t1

0x1cd6,	// (0x0003e6ee) list_medium_line_t2_g3_t2_ParamLimits

0x1cd6,	// (0x0003e6ee) list_medium_line_t2_g3_t2

0x0001,

0xfd82,	// (0x0004c79a) list_medium_line_t2_g3_t_ParamLimits

0xfd82,	// (0x0004c79a) list_medium_line_t2_g3_t

0x136f,	// (0x0003dd87) list_medium_line_t3_g3_g1_ParamLimits

0x136f,	// (0x0003dd87) list_medium_line_t3_g3_g1

0x1c9b,	// (0x0003e6b3) list_medium_line_t3_g3_g2_ParamLimits

0x1c9b,	// (0x0003e6b3) list_medium_line_t3_g3_g2

0x137b,	// (0x0003dd93) list_medium_line_t3_g3_g3_ParamLimits

0x137b,	// (0x0003dd93) list_medium_line_t3_g3_g3

0x0002,

0xfd7b,	// (0x0004c793) list_medium_line_t3_g3_g_ParamLimits

0xfd7b,	// (0x0004c793) list_medium_line_t3_g3_g

0x1cec,	// (0x0003e704) list_medium_line_t3_g3_t1_ParamLimits

0x1cec,	// (0x0003e704) list_medium_line_t3_g3_t1

0x1d05,	// (0x0003e71d) list_medium_line_t3_g3_t2_ParamLimits

0x1d05,	// (0x0003e71d) list_medium_line_t3_g3_t2

0x1d1b,	// (0x0003e733) list_medium_line_t3_g3_t3_ParamLimits

0x1d1b,	// (0x0003e733) list_medium_line_t3_g3_t3

0x0002,

0xfd87,	// (0x0004c79f) list_medium_line_t3_g3_t_ParamLimits

0xfd87,	// (0x0004c79f) list_medium_line_t3_g3_t

0x18fe,	// (0x0003e316) list_medium_line_right_iconx2_g1

0x1781,	// (0x0003e199) list_medium_line_right_iconx2_g2

0x0001,

0xfd8e,	// (0x0004c7a6) list_medium_line_right_iconx2_g

0x1d31,	// (0x0003e749) list_medium_line_right_iconx2_t1

0x18fe,	// (0x0003e316) list_medium_line_t2_right_iconx2_g1

0x1781,	// (0x0003e199) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfd8e,	// (0x0004c7a6) list_medium_line_t2_right_iconx2_g

0x1d3f,	// (0x0003e757) list_medium_line_t2_right_iconx2_t1

0x1d4f,	// (0x0003e767) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfd93,	// (0x0004c7ab) list_medium_line_t2_right_iconx2_t

0x1d5d,	// (0x0003e775) list_medium_line_x4_t4_t1

0x1d6b,	// (0x0003e783) list_medium_line_x4_t4_t2

0x1d7b,	// (0x0003e793) list_medium_line_x4_t4_t3

0x1d8b,	// (0x0003e7a3) list_medium_line_x4_t4_t4

0x0003,

0xfd98,	// (0x0004c7b0) list_medium_line_x4_t4_t

0x92e3,	// (0x00045cfb) tport_appsw_pane_ParamLimits

0x92e3,	// (0x00045cfb) tport_appsw_pane

0x92f1,	// (0x00045d09) tport_contact_pane_ParamLimits

0x92f1,	// (0x00045d09) tport_contact_pane

0x9301,	// (0x00045d19) tport_listscroll_pane_ParamLimits

0x9301,	// (0x00045d19) tport_listscroll_pane

0x9311,	// (0x00045d29) cell_tport_appsw_pane_ParamLimits

0x9311,	// (0x00045d29) cell_tport_appsw_pane

0xcf88,	// (0x000499a0) tport_appsw_pane_g1_ParamLimits

0xcf88,	// (0x000499a0) tport_appsw_pane_g1

0xe859,	// (0x0004b271) tport_contact_pane_g1

0xe862,	// (0x0004b27a) tport_contact_pane_t1

0xe870,	// (0x0004b288) tport_contact_pane_t2

0x0001,

0xfda1,	// (0x0004c7b9) tport_contact_pane_t

0xe87e,	// (0x0004b296) list_tport_pane

0xe887,	// (0x0004b29f) scroll_pane_cp_030

0x9344,	// (0x00045d5c) cell_tport_appsw_pane_g1

0x9354,	// (0x00045d6c) cell_tport_appsw_pane_t1

0x9362,	// (0x00045d7a) grid_highlight_pane_cp019

0x936a,	// (0x00045d82) list_tport_double_graphic_pane_ParamLimits

0x936a,	// (0x00045d82) list_tport_double_graphic_pane

0xabed,	// (0x00047605) list_highlight_pane_cp023_ParamLimits

0xabed,	// (0x00047605) list_highlight_pane_cp023

0x937b,	// (0x00045d93) list_tport_double_graphic_pane_g1_ParamLimits

0x937b,	// (0x00045d93) list_tport_double_graphic_pane_g1

0x9388,	// (0x00045da0) list_tport_double_graphic_pane_t1_ParamLimits

0x9388,	// (0x00045da0) list_tport_double_graphic_pane_t1

0x939d,	// (0x00045db5) list_tport_double_graphic_pane_t2_ParamLimits

0x939d,	// (0x00045db5) list_tport_double_graphic_pane_t2

0x0001,

0xfdad,	// (0x0004c7c5) list_tport_double_graphic_pane_t_ParamLimits

0xfdad,	// (0x0004c7c5) list_tport_double_graphic_pane_t

0xa0df,	// (0x00046af7) main_cale_note_pane

0x7719,	// (0x00044131) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x7719,	// (0x00044131) cell_vitu2_function_top_wide_pane_cp01

0x8eb9,	// (0x000458d1) wait_bar_pane_cp05_ParamLimits

0xabed,	// (0x00047605) listscroll_cmail_pane

0xe890,	// (0x0004b2a8) list_cmail_pane

0x93af,	// (0x00045dc7) list_cmail_body_pane

0x93d7,	// (0x00045def) list_single_cmail_header_caption_pane

0x9403,	// (0x00045e1b) list_single_cmail_header_detail_pane_ParamLimits

0x9403,	// (0x00045e1b) list_single_cmail_header_detail_pane

0xe8a0,	// (0x0004b2b8) list_single_cmail_header_caption_pane_t1

0x1d9b,	// (0x0003e7b3) list_single_cmail_header_detail_pane_g1_ParamLimits

0x1d9b,	// (0x0003e7b3) list_single_cmail_header_detail_pane_g1

0x1db1,	// (0x0003e7c9) list_single_cmail_header_detail_pane_g2_ParamLimits

0x1db1,	// (0x0003e7c9) list_single_cmail_header_detail_pane_g2

0x0002,

0xfdb2,	// (0x0004c7ca) list_single_cmail_header_detail_pane_g_ParamLimits

0xfdb2,	// (0x0004c7ca) list_single_cmail_header_detail_pane_g

0x1dbd,	// (0x0003e7d5) list_single_cmail_header_detail_pane_t1_ParamLimits

0x1dbd,	// (0x0003e7d5) list_single_cmail_header_detail_pane_t1

0x1e1d,	// (0x0003e835) list_single_cmail_header_editor_pane_bg_ParamLimits

0x1e1d,	// (0x0003e835) list_single_cmail_header_editor_pane_bg

0xe357,	// (0x0004ad6f) list_cmail_body_pane_g1

0xe8c4,	// (0x0004b2dc) list_cmail_body_pane_t1

0xd72a,	// (0x0004a142) list_single_cmail_header_editor_pane_bg_g1

0xac9a,	// (0x000476b2) list_single_cmail_header_editor_pane_bg_g1_copy1

0xd73a,	// (0x0004a152) list_single_cmail_header_editor_pane_bg_g1_copy2

0xd732,	// (0x0004a14a) list_single_cmail_header_editor_pane_bg_g1_copy3

0xd994,	// (0x0004a3ac) list_single_cmail_header_editor_pane_bg_g1_copy4

0xd75a,	// (0x0004a172) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xd74a,	// (0x0004a162) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xd752,	// (0x0004a16a) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xac7a,	// (0x00047692) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0x943c,	// (0x00045e54) calenote_gesture_pane_ParamLimits

0x943c,	// (0x00045e54) calenote_gesture_pane

0x9456,	// (0x00045e6e) calenote_window_pane_ParamLimits

0x9456,	// (0x00045e6e) calenote_window_pane

0xe8d2,	// (0x0004b2ea) popup_note_window_cp01

0x946e,	// (0x00045e86) calenote_swipe_1_pane_ParamLimits

0x946e,	// (0x00045e86) calenote_swipe_1_pane

0x9223,	// (0x00045c3b) calenote_swipe_2_pane_ParamLimits

0x9223,	// (0x00045c3b) calenote_swipe_2_pane

0xe6bb,	// (0x0004b0d3) calenote_swipe_1_pane_g1_ParamLimits

0xe6bb,	// (0x0004b0d3) calenote_swipe_1_pane_g1

0xe6c8,	// (0x0004b0e0) calenote_swipe_1_pane_g2_ParamLimits

0xe6c8,	// (0x0004b0e0) calenote_swipe_1_pane_g2

0x0001,

0xfcd6,	// (0x0004c6ee) calenote_swipe_1_pane_g_ParamLimits

0xfcd6,	// (0x0004c6ee) calenote_swipe_1_pane_g

0xe8e4,	// (0x0004b2fc) calenote_swipe_1_pane_t1_ParamLimits

0xe8e4,	// (0x0004b2fc) calenote_swipe_1_pane_t1

0xe6bb,	// (0x0004b0d3) calenote_swipe_2_pane_g1_ParamLimits

0xe6bb,	// (0x0004b0d3) calenote_swipe_2_pane_g1

0xe903,	// (0x0004b31b) calenote_swipe_2_pane_g2_ParamLimits

0xe903,	// (0x0004b31b) calenote_swipe_2_pane_g2

0x0001,

0xfdbe,	// (0x0004c7d6) calenote_swipe_2_pane_g_ParamLimits

0xfdbe,	// (0x0004c7d6) calenote_swipe_2_pane_g

0xe90f,	// (0x0004b327) calenote_swipe_2_pane_t1_ParamLimits

0xe90f,	// (0x0004b327) calenote_swipe_2_pane_t1

0xa0df,	// (0x00046af7) main_mup_navstr_pane

0x649a,	// (0x00042eb2) main_mup3_pane_t7_ParamLimits

0x649a,	// (0x00042eb2) main_mup3_pane_t7

0x6ea5,	// (0x000438bd) main_mp4_pane_g6_ParamLimits

0x6ea5,	// (0x000438bd) main_mp4_pane_g6

0x7217,	// (0x00043c2f) main_image3_pane_t4_ParamLimits

0x7217,	// (0x00043c2f) main_image3_pane_t4

0x9481,	// (0x00045e99) popup_navstr_preview_pane_ParamLimits

0x9481,	// (0x00045e99) popup_navstr_preview_pane

0x948d,	// (0x00045ea5) scroll_navstr_pane_ParamLimits

0x948d,	// (0x00045ea5) scroll_navstr_pane

0xa0df,	// (0x00046af7) bg_popup_preview_window_pane_cp04

0xe936,	// (0x0004b34e) popup_navstr_preview_pane_t1

0x9499,	// (0x00045eb1) scroll_navstr_pane_g1_ParamLimits

0x9499,	// (0x00045eb1) scroll_navstr_pane_g1

0x94a6,	// (0x00045ebe) scroll_navstr_pane_t1_ParamLimits

0x94a6,	// (0x00045ebe) scroll_navstr_pane_t1

0xe8db,	// (0x0004b2f3) bg_button_pane_cp014

0xe8db,	// (0x0004b2f3) bg_button_pane_cp030

0x16e5,	// (0x0003e0fd) list_double_fisheye_pane_g4_ParamLimits

0x16e5,	// (0x0003e0fd) list_double_fisheye_pane_g4

0x16f1,	// (0x0003e109) list_double_fisheye_pane_g5_ParamLimits

0x16f1,	// (0x0003e109) list_double_fisheye_pane_g5

0xd4d0,	// (0x00049ee8) sp_fs_scroll_pane_cp03

0xe7ae,	// (0x0004b1c6) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xe7ba,	// (0x0004b1d2) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfcf3,	// (0x0004c70b) main_sp_fs_ctrlbar_pane_g_ParamLimits

0xe7c6,	// (0x0004b1de) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xe898,	// (0x0004b2b0) sp_fs_scroll_pane_cp02

0xa954,	// (0x0004736c) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0xa954,	// (0x0004736c) popup_sp_fs_calendar_preview_list_single_pane

0xa0df,	// (0x00046af7) main_cam6_pano_pane

0xabed,	// (0x00047605) main_mup3_pane_ParamLimits

0xa0df,	// (0x00046af7) main_phacti_pane

0x8d8e,	// (0x000457a6) bg_button_pane_cp11

0x8da6,	// (0x000457be) main_mobtv_info_pane_g2_ParamLimits

0x8da6,	// (0x000457be) main_mobtv_info_pane_g2

0x0001,

0xfc53,	// (0x0004c66b) main_mobtv_info_pane_g_ParamLimits

0xfc53,	// (0x0004c66b) main_mobtv_info_pane_g

0x8f58,	// (0x00045970) sc_clock_pane_t5_ParamLimits

0x8f58,	// (0x00045970) sc_clock_pane_t5

0x8ff9,	// (0x00045a11) main_radioblah_pane_g1_ParamLimits

0xe607,	// (0x0004b01f) main_radioblah_pane_t3_ParamLimits

0xe607,	// (0x0004b01f) main_radioblah_pane_t3

0xe61f,	// (0x0004b037) main_radioblah_pane_t4_ParamLimits

0xe61f,	// (0x0004b037) main_radioblah_pane_t4

0x9017,	// (0x00045a2f) main_radioblah_text_pane_ParamLimits

0x9017,	// (0x00045a2f) main_radioblah_text_pane

0x9024,	// (0x00045a3c) main_radioblah_info_pane_g1_ParamLimits

0x90b9,	// (0x00045ad1) main_radioblah_info_pane_t4_ParamLimits

0x90b9,	// (0x00045ad1) main_radioblah_info_pane_t4

0xabed,	// (0x00047605) main_sp_fs_calendar_pane

0x94b8,	// (0x00045ed0) main_phacti_pane_g1

0x94c0,	// (0x00045ed8) phacti_note_pane_ParamLimits

0x94c0,	// (0x00045ed8) phacti_note_pane

0xe94d,	// (0x0004b365) phacti_term_pane_ParamLimits

0xe94d,	// (0x0004b365) phacti_term_pane

0xe962,	// (0x0004b37a) phacti_note_pane_t1_ParamLimits

0xe962,	// (0x0004b37a) phacti_note_pane_t1

0x1e34,	// (0x0003e84c) phacti_term_pane_g1

0x1e3c,	// (0x0003e854) phacti_term_pane_t1_ParamLimits

0x1e3c,	// (0x0003e854) phacti_term_pane_t1

0xe979,	// (0x0004b391) popup_sp_fs_calendar_preview_list_single_pane_g1

0xe981,	// (0x0004b399) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfdc8,	// (0x0004c7e0) popup_sp_fs_calendar_preview_list_single_pane_g

0xe989,	// (0x0004b3a1) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xe989,	// (0x0004b3a1) popup_sp_fs_calendar_preview_list_single_pane_t1

0xe99f,	// (0x0004b3b7) aid_popup_sp_fs_bg_corner_pane

0xccd5,	// (0x000496ed) popup_sp_fs_calendar_preview_bg_pane_g1

0xa0df,	// (0x00046af7) popup_sp_fs_calendar_preview_bg_pane

0xa6db,	// (0x000470f3) popup_sp_fs_calendar_preview_list_pane

0xc8cd,	// (0x000492e5) bg_main_sp_fs_cale_pane_ParamLimits

0xc8cd,	// (0x000492e5) bg_main_sp_fs_cale_pane

0x1e6f,	// (0x0003e887) listscroll_cale_mrui_pane_ParamLimits

0x1e6f,	// (0x0003e887) listscroll_cale_mrui_pane

0x1e84,	// (0x0003e89c) listscroll_sp_fs_schedule_track_pane

0x1e8d,	// (0x0003e8a5) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0x1e8d,	// (0x0003e8a5) main_sp_fs_ctrlbar_pane_cp01

0xe9a7,	// (0x0004b3bf) main_sp_fs_ribbon_pane

0x1ea0,	// (0x0003e8b8) popup_sp_fs_cale_preview_window

0x9523,	// (0x00045f3b) list_single_sp_fs_schedule_track_pane_ParamLimits

0x9523,	// (0x00045f3b) list_single_sp_fs_schedule_track_pane

0xd966,	// (0x0004a37e) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0xd966,	// (0x0004a37e) bg_sp_fs_highlight_list_pane_cp03

0x9546,	// (0x00045f5e) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0x9546,	// (0x00045f5e) list_single_sp_fs_schedule_track_pane_g1

0x9552,	// (0x00045f6a) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0x9552,	// (0x00045f6a) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfdcd,	// (0x0004c7e5) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfdcd,	// (0x0004c7e5) list_single_sp_fs_schedule_track_pane_g

0x955e,	// (0x00045f76) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0x955e,	// (0x00045f76) list_single_sp_fs_schedule_track_pane_t1

0x9576,	// (0x00045f8e) sp_fs_schedule_track_pane_ParamLimits

0x9576,	// (0x00045f8e) sp_fs_schedule_track_pane

0xe9af,	// (0x0004b3c7) sp_fs_schedule_track_pane_g1

0xe9b7,	// (0x0004b3cf) sp_fs_schedule_track_pane_g2

0xe9bf,	// (0x0004b3d7) sp_fs_schedule_track_pane_g3

0xe9c7,	// (0x0004b3df) sp_fs_schedule_track_pane_g4

0xe9cf,	// (0x0004b3e7) sp_fs_schedule_track_pane_g5

0x0004,

0xfdd2,	// (0x0004c7ea) sp_fs_schedule_track_pane_g

0xd72a,	// (0x0004a142) bg_sp_fs_schedule_viewer_highlight_g1

0xac9a,	// (0x000476b2) bg_sp_fs_schedule_viewer_highlight_g2

0xd732,	// (0x0004a14a) bg_sp_fs_schedule_viewer_highlight_g3

0xd73a,	// (0x0004a152) bg_sp_fs_schedule_viewer_highlight_g4

0xd994,	// (0x0004a3ac) bg_sp_fs_schedule_viewer_highlight_g5

0xd74a,	// (0x0004a162) bg_sp_fs_schedule_viewer_highlight_g6

0xd752,	// (0x0004a16a) bg_sp_fs_schedule_viewer_highlight_g7

0xd75a,	// (0x0004a172) bg_sp_fs_schedule_viewer_highlight_g8

0xac7a,	// (0x00047692) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfddd,	// (0x0004c7f5) bg_sp_fs_schedule_viewer_highlight_g

0xa0df,	// (0x00046af7) bg_main_sp_fs_ribbon_pane

0x9586,	// (0x00045f9e) main_sp_fs_ribbon_pane_g1

0xe9d7,	// (0x0004b3ef) main_sp_fs_ribbon_pane_t1

0x958f,	// (0x00045fa7) main_sp_fs_ribbon_pane_t2

0xe9e6,	// (0x0004b3fe) main_sp_fs_ribbon_pane_t3

0x0002,

0xfdf0,	// (0x0004c808) main_sp_fs_ribbon_pane_t

0xe9f5,	// (0x0004b40d) main_sp_fs_ribbon_scheduler_pane

0xe9fd,	// (0x0004b415) bg_main_sp_fs_ribbon_pane_g1

0xea06,	// (0x0004b41e) bg_main_sp_fs_ribbon_pane_g2

0xea0f,	// (0x0004b427) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfdf7,	// (0x0004c80f) bg_main_sp_fs_ribbon_pane_g

0xea17,	// (0x0004b42f) main_sp_fs_ribbon_scheduler_pane_g1

0xea20,	// (0x0004b438) main_sp_fs_ribbon_scheduler_pane_g2

0xea29,	// (0x0004b441) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfdfe,	// (0x0004c816) main_sp_fs_ribbon_scheduler_pane_g

0xea32,	// (0x0004b44a) list_cale_mrui_pane

0x959e,	// (0x00045fb6) sp_fs_scroll_pane_cp07_ParamLimits

0x959e,	// (0x00045fb6) sp_fs_scroll_pane_cp07

0x95ba,	// (0x00045fd2) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0x95ba,	// (0x00045fd2) bg_sp_fs_schedule_viewer_highlight

0xea3f,	// (0x0004b457) list_single_sp_fs_schedule_track_pane_cp01

0xea47,	// (0x0004b45f) list_sp_fs_schedule_track_pane

0xea4f,	// (0x0004b467) sp_fs_scroll_pane_cp06_ParamLimits

0xea4f,	// (0x0004b467) sp_fs_scroll_pane_cp06

0xccd5,	// (0x000496ed) bgmain_sp_fs_calendar_pane_g1

0x1eb2,	// (0x0003e8ca) list_single_cale_mrui_pane_ParamLimits

0x1eb2,	// (0x0003e8ca) list_single_cale_mrui_pane

0x1ee3,	// (0x0003e8fb) list_single_cale_mrui_row_pane_ParamLimits

0x1ee3,	// (0x0003e8fb) list_single_cale_mrui_row_pane

0x1ef0,	// (0x0003e908) list_single_cale_mrui_row_pane_g1_ParamLimits

0x1ef0,	// (0x0003e908) list_single_cale_mrui_row_pane_g1

0x1f28,	// (0x0003e940) list_single_cale_mrui_row_pane_t1_ParamLimits

0x1f28,	// (0x0003e940) list_single_cale_mrui_row_pane_t1

0x1f3a,	// (0x0003e952) list_single_cale_mrui_row_pane_t2_ParamLimits

0x1f3a,	// (0x0003e952) list_single_cale_mrui_row_pane_t2

0x1fa0,	// (0x0003e9b8) list_single_cale_mrui_row_pane_t3_ParamLimits

0x1fa0,	// (0x0003e9b8) list_single_cale_mrui_row_pane_t3

0x1fcf,	// (0x0003e9e7) list_single_cale_mrui_row_pane_t4_ParamLimits

0x1fcf,	// (0x0003e9e7) list_single_cale_mrui_row_pane_t4

0x0003,

0xfe0c,	// (0x0004c824) list_single_cale_mrui_row_pane_t_ParamLimits

0xfe0c,	// (0x0004c824) list_single_cale_mrui_row_pane_t

0x1ffe,	// (0x0003ea16) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x1ffe,	// (0x0003ea16) list_single_cmail_header_editor_pane_bg_cp01

0x201e,	// (0x0003ea36) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x201e,	// (0x0003ea36) list_single_cmail_header_editor_pane_bg_cp02

0x95c7,	// (0x00045fdf) main_radioblah_text_pane_t1_ParamLimits

0x95c7,	// (0x00045fdf) main_radioblah_text_pane_t1

0xea6e,	// (0x0004b486) cam6_indi_pane_cp01

0xea76,	// (0x0004b48e) cam6_mode_pane_cp01

0xea7e,	// (0x0004b496) cam6_pano_pane

0xea87,	// (0x0004b49f) cam6_zoom_pane_cp01

0xea8f,	// (0x0004b4a7) cam6_pano_image_pane

0xea9a,	// (0x0004b4b2) cam6_pano_pane_g1

0xe357,	// (0x0004ad6f) cam6_pano_pane_g2

0xeaa3,	// (0x0004b4bb) cam6_pano_pane_g3

0xeaac,	// (0x0004b4c4) cam6_pano_pane_g4

0xd280,	// (0x00049c98) cam6_pano_pane_g5

0xeab5,	// (0x0004b4cd) cam6_pano_pane_g6

0xeabf,	// (0x0004b4d7) cam6_pano_pane_g7

0xeac7,	// (0x0004b4df) cam6_pano_pane_g8

0xead0,	// (0x0004b4e8) cam6_pano_pane_g9

0x0008,

0xfe15,	// (0x0004c82d) cam6_pano_pane_g

0xa0df,	// (0x00046af7) main_browser_tag_pane

0xe92e,	// (0x0004b346) grid_navstr_albumart_pane

0xeadb,	// (0x0004b4f3) cell_navstr_albumart_pane_ParamLimits

0xeadb,	// (0x0004b4f3) cell_navstr_albumart_pane

0xeafb,	// (0x0004b513) cell_navstr_albumart_pane_g1

0xc69e,	// (0x000490b6) cell_navstr_albumart_pane_g2

0xc6ae,	// (0x000490c6) cell_navstr_albumart_pane_g3

0xc6a6,	// (0x000490be) cell_navstr_albumart_pane_g4

0x0003,

0xfe28,	// (0x0004c840) cell_navstr_albumart_pane_g

0x95e2,	// (0x00045ffa) bt_list_pane_ParamLimits

0x95e2,	// (0x00045ffa) bt_list_pane

0x9603,	// (0x0004601b) bt_list_pane_t1

0x9612,	// (0x0004602a) bt_list_pane_t2

0x0001,

0xfe31,	// (0x0004c849) bt_list_pane_t

0xa0df,	// (0x00046af7) main_cale_prevew_pane

0x9621,	// (0x00046039) popup_cale_preview_window_ParamLimits

0x9621,	// (0x00046039) popup_cale_preview_window

0xabed,	// (0x00047605) bg_popup_preview_window_pane_cp05_ParamLimits

0xabed,	// (0x00047605) bg_popup_preview_window_pane_cp05

0xeb03,	// (0x0004b51b) list_cale_preview_pane_ParamLimits

0xeb03,	// (0x0004b51b) list_cale_preview_pane

0x963a,	// (0x00046052) list_double_cale_preview_pane_ParamLimits

0x963a,	// (0x00046052) list_double_cale_preview_pane

0x964c,	// (0x00046064) list_single_cale_preview_pane_ParamLimits

0x964c,	// (0x00046064) list_single_cale_preview_pane

0x9660,	// (0x00046078) list_single_cale_preview_pane_g1

0x9668,	// (0x00046080) list_single_cale_preview_pane_t1_ParamLimits

0x9668,	// (0x00046080) list_single_cale_preview_pane_t1

0x967d,	// (0x00046095) list_double_cale_preview_pane_g1

0x9685,	// (0x0004609d) list_double_cale_preview_pane_t1_ParamLimits

0x9685,	// (0x0004609d) list_double_cale_preview_pane_t1

0x969a,	// (0x000460b2) list_double_cale_preview_pane_t2_ParamLimits

0x969a,	// (0x000460b2) list_double_cale_preview_pane_t2

0x0001,

0xfe36,	// (0x0004c84e) list_double_cale_preview_pane_t_ParamLimits

0xfe36,	// (0x0004c84e) list_double_cale_preview_pane_t

0xa0df,	// (0x00046af7) main_ezdial_pane

0xabed,	// (0x00047605) main_sp_fs_email_pane_ParamLimits

0x923d,	// (0x00045c55) cmail_ddmenu_btn01_pane_ParamLimits

0x923d,	// (0x00045c55) cmail_ddmenu_btn01_pane

0x9252,	// (0x00045c6a) cmail_ddmenu_btn02_pane_ParamLimits

0x9252,	// (0x00045c6a) cmail_ddmenu_btn02_pane

0x926a,	// (0x00045c82) cmail_ddmenu_btn03_pane_ParamLimits

0x926a,	// (0x00045c82) cmail_ddmenu_btn03_pane

0x9292,	// (0x00045caa) main_sp_fs_ctrlbar_pane_ParamLimits

0x92a8,	// (0x00045cc0) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0x93af,	// (0x00045dc7) list_cmail_body_pane_ParamLimits

0xe8ae,	// (0x0004b2c6) bg_button_pane_cp12

0xe8b7,	// (0x0004b2cf) list_single_cmail_header_detail_pane_g3_ParamLimits

0xe8b7,	// (0x0004b2cf) list_single_cmail_header_detail_pane_g3

0x1df9,	// (0x0003e811) list_single_cmail_header_detail_pane_t2_ParamLimits

0x1df9,	// (0x0003e811) list_single_cmail_header_detail_pane_t2

0x0001,

0xfdb9,	// (0x0004c7d1) list_single_cmail_header_detail_pane_t_ParamLimits

0xfdb9,	// (0x0004c7d1) list_single_cmail_header_detail_pane_t

0x1e51,	// (0x0003e869) phacti_term_pane_t2_ParamLimits

0x1e51,	// (0x0003e869) phacti_term_pane_t2

0x0001,

0xfdc3,	// (0x0004c7db) phacti_term_pane_t_ParamLimits

0xfdc3,	// (0x0004c7db) phacti_term_pane_t

0xeb0f,	// (0x0004b527) aid_size_list_single_double

0x96b2,	// (0x000460ca) popup_ezdial_listscroll_window

0x96d6,	// (0x000460ee) popup_number_entry_window_cp01

0xaa15,	// (0x0004742d) bg_popup_call_pane_cp09

0xeb1b,	// (0x0004b533) ezdial_list_pane

0xeb23,	// (0x0004b53b) scroll_pane_cp23

0xcaba,	// (0x000494d2) bg_button_pane_cp028_ParamLimits

0xcaba,	// (0x000494d2) bg_button_pane_cp028

0x96e4,	// (0x000460fc) cmail_ddmenu_btn01_pane_g1_ParamLimits

0x96e4,	// (0x000460fc) cmail_ddmenu_btn01_pane_g1

0x96f4,	// (0x0004610c) cmail_ddmenu_btn01_pane_g2_ParamLimits

0x96f4,	// (0x0004610c) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfe3b,	// (0x0004c853) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfe3b,	// (0x0004c853) cmail_ddmenu_btn01_pane_g

0xeb2b,	// (0x0004b543) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xeb2b,	// (0x0004b543) cmail_ddmenu_btn01_pane_t1

0xc8cd,	// (0x000492e5) bg_button_pane_cp029_ParamLimits

0xc8cd,	// (0x000492e5) bg_button_pane_cp029

0x96f4,	// (0x0004610c) cmail_ddmenu_btn02_pane_g1_ParamLimits

0x96f4,	// (0x0004610c) cmail_ddmenu_btn02_pane_g1

0x970d,	// (0x00046125) cmail_ddmenu_btn02_pane_t1_ParamLimits

0x970d,	// (0x00046125) cmail_ddmenu_btn02_pane_t1

0xd966,	// (0x0004a37e) bg_button_pane_cp031_ParamLimits

0xd966,	// (0x0004a37e) bg_button_pane_cp031

0x96f4,	// (0x0004610c) cmail_ddmenu_btn03_pane_g1_ParamLimits

0x96f4,	// (0x0004610c) cmail_ddmenu_btn03_pane_g1

0x970d,	// (0x00046125) cmail_ddmenu_btn03_pane_t1_ParamLimits

0x970d,	// (0x00046125) cmail_ddmenu_btn03_pane_t1

0x70c2,	// (0x00043ada) cell_dialer2_keypad_pane_t1_ParamLimits

0x70dc,	// (0x00043af4) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x70dc,	// (0x00043af4) cell_dialer2_keypad_pane_t1_copy1

0x8bcf,	// (0x000455e7) ncimui_group_button_pane

0xabed,	// (0x00047605) main_sp_fs_calendar_pane_ParamLimits

0x93d7,	// (0x00045def) list_single_cmail_header_caption_pane_ParamLimits

0x1e66,	// (0x0003e87e) aid_recal_txt_sm_pane

0xa0df,	// (0x00046af7) mian_recal_day_pane

0x1ea0,	// (0x0003e8b8) popup_sp_fs_cale_preview_window_ParamLimits

0xeb40,	// (0x0004b558) list_recal_day_pane

0x2055,	// (0x0003ea6d) list_single_recal_day_pane_ParamLimits

0x2055,	// (0x0003ea6d) list_single_recal_day_pane

0xeb67,	// (0x0004b57f) list_single_recal_day_pane_g1_ParamLimits

0xeb67,	// (0x0004b57f) list_single_recal_day_pane_g1

0x2067,	// (0x0003ea7f) list_single_recal_day_pane_g2_ParamLimits

0x2067,	// (0x0003ea7f) list_single_recal_day_pane_g2

0x2073,	// (0x0003ea8b) list_single_recal_day_pane_g3_ParamLimits

0x2073,	// (0x0003ea8b) list_single_recal_day_pane_g3

0x207f,	// (0x0003ea97) list_single_recal_day_pane_g4_ParamLimits

0x207f,	// (0x0003ea97) list_single_recal_day_pane_g4

0x208d,	// (0x0003eaa5) list_single_recal_day_pane_g5_ParamLimits

0x208d,	// (0x0003eaa5) list_single_recal_day_pane_g5

0x20a3,	// (0x0003eabb) list_single_recal_day_pane_g6_ParamLimits

0x20a3,	// (0x0003eabb) list_single_recal_day_pane_g6

0x0004,

0xfe4a,	// (0x0004c862) list_single_recal_day_pane_g_ParamLimits

0xfe4a,	// (0x0004c862) list_single_recal_day_pane_g

0x20b7,	// (0x0003eacf) list_single_recal_day_pane_t1

0x20c9,	// (0x0003eae1) list_single_recal_day_pane_t2

0x0001,

0xfe55,	// (0x0004c86d) list_single_recal_day_pane_t

0x9731,	// (0x00046149) ncimui_query_button_pane_ParamLimits

0x9731,	// (0x00046149) ncimui_query_button_pane

0x9741,	// (0x00046159) ncimui_query_button_pane_t1_ParamLimits

0x9741,	// (0x00046159) ncimui_query_button_pane_t1

0xeb73,	// (0x0004b58b) ncimui_query_button_pane_t2_ParamLimits

0xeb73,	// (0x0004b58b) ncimui_query_button_pane_t2

0x0001,

0xfe5a,	// (0x0004c872) ncimui_query_button_pane_t_ParamLimits

0xfe5a,	// (0x0004c872) ncimui_query_button_pane_t

0x9754,	// (0x0004616c) query_button_pane_ParamLimits

0x9754,	// (0x0004616c) query_button_pane

0xa0df,	// (0x00046af7) bg_button_pane_cp0028

0xeb86,	// (0x0004b59e) query_button_pane_t1

0x54bd,	// (0x00041ed5) main_tport_pane_ParamLimits

0x92b9,	// (0x00045cd1) bg_popup_window_pane_cp01_ParamLimits

0x92b9,	// (0x00045cd1) bg_popup_window_pane_cp01

0x92c7,	// (0x00045cdf) heading_pane_cp08_ParamLimits

0x92c7,	// (0x00045cdf) heading_pane_cp08

0x92d5,	// (0x00045ced) heading_pane_cp07_ParamLimits

0x92d5,	// (0x00045ced) heading_pane_cp07

0x9344,	// (0x00045d5c) cell_tport_appsw_pane_g2

0x0002,

0xfda6,	// (0x0004c7be) cell_tport_appsw_pane_g

0x10bf,	// (0x0003dad7) input_candi_list_open_g1

0xae5d,	// (0x00047875) list_cale_time_pane_g6_ParamLimits

0xae5d,	// (0x00047875) list_cale_time_pane_g6

0x5f44,	// (0x0004295c) aid_size_touch_calib_1_ParamLimits

0x5f44,	// (0x0004295c) aid_size_touch_calib_1

0x5f50,	// (0x00042968) aid_size_touch_calib_2_ParamLimits

0x5f50,	// (0x00042968) aid_size_touch_calib_2

0x5f5e,	// (0x00042976) aid_size_touch_calib_3_ParamLimits

0x5f5e,	// (0x00042976) aid_size_touch_calib_3

0x5f6e,	// (0x00042986) aid_size_touch_calib_4_ParamLimits

0x5f6e,	// (0x00042986) aid_size_touch_calib_4

0x5f7c,	// (0x00042994) main_touch_calib_button_group_pane_ParamLimits

0x5f7c,	// (0x00042994) main_touch_calib_button_group_pane

0x5f8a,	// (0x000429a2) main_touch_calib_pane_g1_ParamLimits

0x5f96,	// (0x000429ae) main_touch_calib_pane_g2_ParamLimits

0x5fa2,	// (0x000429ba) main_touch_calib_pane_g3_ParamLimits

0x5fae,	// (0x000429c6) main_touch_calib_pane_g4_ParamLimits

0xf764,	// (0x0004c17c) main_touch_calib_pane_g_ParamLimits

0x5fba,	// (0x000429d2) main_touch_calib_pane_t1_ParamLimits

0x5fd3,	// (0x000429eb) main_touch_calib_pane_t2_ParamLimits

0x5fec,	// (0x00042a04) main_touch_calib_pane_t3_ParamLimits

0x6002,	// (0x00042a1a) main_touch_calib_pane_t4_ParamLimits

0x6018,	// (0x00042a30) main_touch_calib_pane_t5_ParamLimits

0xf76d,	// (0x0004c185) main_touch_calib_pane_t_ParamLimits

0xd023,	// (0x00049a3b) list_single_fp_cale_pane_g3_ParamLimits

0xd023,	// (0x00049a3b) list_single_fp_cale_pane_g3

0xabed,	// (0x00047605) bg_button_pane_cp012_ParamLimits

0xabed,	// (0x00047605) bg_vkb2_func_pane_cp03_ParamLimits

0x7e7b,	// (0x00044893) cell_vitu2_function_top_pane_g1_ParamLimits

0xabed,	// (0x00047605) bg_vkb2_func_pane_cp04_ParamLimits

0x8b57,	// (0x0004556f) main_ncimui_button_group_pane_ParamLimits

0x8b57,	// (0x0004556f) main_ncimui_button_group_pane

0x8bbd,	// (0x000455d5) main_ncimui_pane_t3_ParamLimits

0x8bbd,	// (0x000455d5) main_ncimui_pane_t3

0xe944,	// (0x0004b35c) phacti_button_group_pane

0xeb0f,	// (0x0004b527) aid_size_list_single_double_ParamLimits

0x96b2,	// (0x000460ca) popup_ezdial_listscroll_window_ParamLimits

0x96d6,	// (0x000460ee) popup_number_entry_window_cp01_ParamLimits

0x9761,	// (0x00046179) phacti_button_pane_ParamLimits

0x9761,	// (0x00046179) phacti_button_pane

0xa0df,	// (0x00046af7) bg_button_pane_cp14

0xeb94,	// (0x0004b5ac) phacti_button_pane_t1

0x9772,	// (0x0004618a) main_touch_calib_button_pane_ParamLimits

0x9772,	// (0x0004618a) main_touch_calib_button_pane

0xa83e,	// (0x00047256) bg_button_pane_cp18_ParamLimits

0xa83e,	// (0x00047256) bg_button_pane_cp18

0xeba2,	// (0x0004b5ba) main_touch_calib_button_pane_t1_ParamLimits

0xeba2,	// (0x0004b5ba) main_touch_calib_button_pane_t1

0xebb8,	// (0x0004b5d0) main_touch_calib_button_pane_t2_ParamLimits

0xebb8,	// (0x0004b5d0) main_touch_calib_button_pane_t2

0x0001,

0xfe5f,	// (0x0004c877) main_touch_calib_button_pane_t_ParamLimits

0xfe5f,	// (0x0004c877) main_touch_calib_button_pane_t

0xa0df,	// (0x00046af7) cell_ncimui_button_pane

0xa0df,	// (0x00046af7) bg_button_pane_cp032

0xebd6,	// (0x0004b5ee) cell_ncimui_button_pane_t1

0x7138,	// (0x00043b50) image3_infobar_pane_ParamLimits

0x7138,	// (0x00043b50) image3_infobar_pane

0x8f7a,	// (0x00045992) fs_bigclock_status_pane_ParamLimits

0x8f7a,	// (0x00045992) fs_bigclock_status_pane

0x8f87,	// (0x0004599f) main_fs_bigclock_clock_pane_ParamLimits

0x8f87,	// (0x0004599f) main_fs_bigclock_clock_pane

0x8f9b,	// (0x000459b3) main_fs_bigclock_indi_pane_ParamLimits

0x8f9b,	// (0x000459b3) main_fs_bigclock_indi_pane

0x8fc3,	// (0x000459db) main_fs_bigclock_swipe_pane_ParamLimits

0x8fc3,	// (0x000459db) main_fs_bigclock_swipe_pane

0xa0df,	// (0x00046af7) main_fs_clock_dumped_data

0xe464,	// (0x0004ae7c) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xe464,	// (0x0004ae7c) list_single_fs_bigclock_indicator_pane_g1

0xe480,	// (0x0004ae98) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xe480,	// (0x0004ae98) list_single_fs_bigclock_indicator_pane_g2

0xe4ac,	// (0x0004aec4) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xe4ac,	// (0x0004aec4) list_single_fs_bigclock_indicator_pane_g3

0xe4c6,	// (0x0004aede) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xe4c6,	// (0x0004aede) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfc87,	// (0x0004c69f) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfc87,	// (0x0004c69f) list_single_fs_bigclock_indicator_pane_g

0xe4f1,	// (0x0004af09) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xe4f1,	// (0x0004af09) list_single_fs_bigclock_indicator_pane_t1

0xe519,	// (0x0004af31) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xe519,	// (0x0004af31) list_single_fs_bigclock_indicator_pane_t2

0xe541,	// (0x0004af59) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xe541,	// (0x0004af59) list_single_fs_bigclock_indicator_pane_t3

0xe569,	// (0x0004af81) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xe569,	// (0x0004af81) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfc92,	// (0x0004c6aa) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfc92,	// (0x0004c6aa) list_single_fs_bigclock_indicator_pane_t

0xebe4,	// (0x0004b5fc) image3_infobar_fav_pane_ParamLimits

0xebe4,	// (0x0004b5fc) image3_infobar_fav_pane

0xebf4,	// (0x0004b60c) image3_infobar_loc_pane_ParamLimits

0xebf4,	// (0x0004b60c) image3_infobar_loc_pane

0xec08,	// (0x0004b620) image3_infobar_time_pane_ParamLimits

0xec08,	// (0x0004b620) image3_infobar_time_pane

0xccd5,	// (0x000496ed) image3_infobar_time_pane_g1

0xec18,	// (0x0004b630) image3_infobar_time_pane_t1

0xccd5,	// (0x000496ed) image3_infobar_loc_pane_g1

0xec26,	// (0x0004b63e) image3_infobar_loc_pane_g2

0x0001,

0xfe64,	// (0x0004c87c) image3_infobar_loc_pane_g

0xec2e,	// (0x0004b646) image3_infobar_loc_pane_t1

0xccd5,	// (0x000496ed) image3_infobar_fav_pane_g1

0xec3c,	// (0x0004b654) image3_infobar_fav_pane_g2

0x0001,

0xfe69,	// (0x0004c881) image3_infobar_fav_pane_g

0xec44,	// (0x0004b65c) fs_bigclock_status_battery_pane

0xec4d,	// (0x0004b665) fs_bigclock_status_signal_pane

0xec56,	// (0x0004b66e) fs_bigclock_status_title_pane

0xec5f,	// (0x0004b677) fs_bigclock_status_signal_pane_g1

0xec68,	// (0x0004b680) fs_bigclock_status_signal_pane_g2

0x0001,

0xfe6e,	// (0x0004c886) fs_bigclock_status_signal_pane_g

0xec70,	// (0x0004b688) fs_bigclock_status_battery_pane_g1

0xec79,	// (0x0004b691) fs_bigclock_status_battery_pane_g2

0x0001,

0xfe73,	// (0x0004c88b) fs_bigclock_status_battery_pane_g

0xec81,	// (0x0004b699) fs_bigclock_status_title_pane_t1

0x9782,	// (0x0004619a) main_fs_bigclock_clock_pane_g1

0x9782,	// (0x0004619a) main_fs_bigclock_clock_pane_g2

0x978f,	// (0x000461a7) main_fs_bigclock_clock_pane_g3

0x978f,	// (0x000461a7) main_fs_bigclock_clock_pane_g4

0x0003,

0xfe78,	// (0x0004c890) main_fs_bigclock_clock_pane_g

0x979b,	// (0x000461b3) main_fs_bigclock_clock_pane_t1

0x97ae,	// (0x000461c6) main_fs_bigclock_clock_pane_t2

0x0001,

0xfe81,	// (0x0004c899) main_fs_bigclock_clock_pane_t

0xec8f,	// (0x0004b6a7) list_single_fs_bigclock_indicator_pane_ParamLimits

0xec8f,	// (0x0004b6a7) list_single_fs_bigclock_indicator_pane

0xeca0,	// (0x0004b6b8) list_single_fs_bigclock_pane_ParamLimits

0xeca0,	// (0x0004b6b8) list_single_fs_bigclock_pane

0xecc6,	// (0x0004b6de) main_fs_bigclock_indicator_pane_t1

0xecd5,	// (0x0004b6ed) list_single_fs_bigclock_pane_g1

0xecdd,	// (0x0004b6f5) list_single_fs_bigclock_pane_t1

0xccd5,	// (0x000496ed) main_fs_bigclock_swipe_pane_g1

0xed20,	// (0x0004b738) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfe92,	// (0x0004c8aa) main_fs_bigclock_swipe_pane_g

0xed28,	// (0x0004b740) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xed28,	// (0x0004b740) main_fs_bigclock_swipe_pane_t1

0x4530,	// (0x00040f48) call_type_pane_ParamLimits

0xa0df,	// (0x00046af7) main_btmg_pane

0x1f1c,	// (0x0003e934) list_single_cale_mrui_row_pane_g2_ParamLimits

0x1f1c,	// (0x0003e934) list_single_cale_mrui_row_pane_g2

0x0002,

0xfe05,	// (0x0004c81d) list_single_cale_mrui_row_pane_g_ParamLimits

0xfe05,	// (0x0004c81d) list_single_cale_mrui_row_pane_g

0x2044,	// (0x0003ea5c) list_recal_vselct_arw_lo_pane

0xeb5f,	// (0x0004b577) list_recal_vselct_arw_up_pane

0x204c,	// (0x0003ea64) list_recal_vselct_pane

0x9805,	// (0x0004621d) btmg_button_pane

0x9811,	// (0x00046229) main_btmg_pane_g1

0xa0df,	// (0x00046af7) bg_button_pane_cp044

0xed45,	// (0x0004b75d) btmg_button_pane_t1

0xc8b9,	// (0x000492d1) aid_listscroll_gen

0xabed,	// (0x00047605) main_cntbar_detail_pane

0xe890,	// (0x0004b2a8) list_cmail_folder_pane

0xd4d0,	// (0x00049ee8) sp_fs_scroll_pane_cp03_ParamLimits

0x20db,	// (0x0003eaf3) list_single_fs_dyc_pane_cp01_ParamLimits

0x20db,	// (0x0003eaf3) list_single_fs_dyc_pane_cp01

0xed53,	// (0x0004b76b) aid_size_cmail_indent

0x210a,	// (0x0003eb22) list_single_dyc_row_pane_cp01

0x9839,	// (0x00046251) cntbar_detail_list_pane_ParamLimits

0x9839,	// (0x00046251) cntbar_detail_list_pane

0x9873,	// (0x0004628b) main_cntbar_detail_cont_pane_ParamLimits

0x9873,	// (0x0004628b) main_cntbar_detail_cont_pane

0x4524,	// (0x00040f3c) scroll_pane_cp032_ParamLimits

0x4524,	// (0x00040f3c) scroll_pane_cp032

0x987f,	// (0x00046297) cntbar_detail_list_event_pane_ParamLimits

0x987f,	// (0x00046297) cntbar_detail_list_event_pane

0x9845,	// (0x0004625d) cntbar_detail_list_shct_pane

0xace8,	// (0x00047700) aid_list_gen

0xed5c,	// (0x0004b774) aid_scroll

0xed65,	// (0x0004b77d) aid_size_touch_scroll_bar

0x8415,	// (0x00044e2d) aid_list_double

0x2113,	// (0x0003eb2b) aid_list_single

0x8403,	// (0x00044e1b) aid_list_single_lg

0x211c,	// (0x0003eb34) aid_list_z_g_a_sm

0x2124,	// (0x0003eb3c) aid_list_z_g_d

0x212c,	// (0x0003eb44) aid_txt_z_prm

0x213a,	// (0x0003eb52) aid_txt_z_prm_cp01

0x2148,	// (0x0003eb60) aid_txt_z_sec

0x9893,	// (0x000462ab) main_cntbar_detail_cont_pane_g1_ParamLimits

0x9893,	// (0x000462ab) main_cntbar_detail_cont_pane_g1

0x98a0,	// (0x000462b8) main_cntbar_detail_cont_pane_g2_ParamLimits

0x98a0,	// (0x000462b8) main_cntbar_detail_cont_pane_g2

0x0001,

0xfe97,	// (0x0004c8af) main_cntbar_detail_cont_pane_g_ParamLimits

0xfe97,	// (0x0004c8af) main_cntbar_detail_cont_pane_g

0xed6e,	// (0x0004b786) main_cntbar_detail_cont_pane_t1

0xed7c,	// (0x0004b794) main_cntbar_detail_cont_pane_t2

0xed8a,	// (0x0004b7a2) main_cntbar_detail_cont_pane_t3

0x0002,

0xfe9c,	// (0x0004c8b4) main_cntbar_detail_cont_pane_t

0x98ac,	// (0x000462c4) cell_cntbar_detail_list_shct_pane_ParamLimits

0x98ac,	// (0x000462c4) cell_cntbar_detail_list_shct_pane

0xed98,	// (0x0004b7b0) cntbar_detail_list_shct_pane_g1

0xeda1,	// (0x0004b7b9) cntbar_detail_list_shct_pane_g2

0x0001,

0xfea3,	// (0x0004c8bb) cntbar_detail_list_shct_pane_g

0x98c0,	// (0x000462d8) cntbar_detail_list_event_pane_g1_ParamLimits

0x98c0,	// (0x000462d8) cntbar_detail_list_event_pane_g1

0x98cc,	// (0x000462e4) cntbar_detail_list_event_pane_g2_ParamLimits

0x98cc,	// (0x000462e4) cntbar_detail_list_event_pane_g2

0x0005,

0xfea8,	// (0x0004c8c0) cntbar_detail_list_event_pane_g_ParamLimits

0xfea8,	// (0x0004c8c0) cntbar_detail_list_event_pane_g

0x9938,	// (0x00046350) cntbar_detail_list_event_pane_t1_ParamLimits

0x9938,	// (0x00046350) cntbar_detail_list_event_pane_t1

0x994d,	// (0x00046365) cntbar_detail_list_event_pane_t2_ParamLimits

0x994d,	// (0x00046365) cntbar_detail_list_event_pane_t2

0x0002,

0xfeb5,	// (0x0004c8cd) cntbar_detail_list_event_pane_t_ParamLimits

0xfeb5,	// (0x0004c8cd) cntbar_detail_list_event_pane_t

0xccd5,	// (0x000496ed) cell_cntbar_detail_list_shct_pane_g1

0xb436,	// (0x00047e4e) navi_pane_mv_g3

0xabed,	// (0x00047605) main_cntbar_detail_pane_ParamLimits

0xa0df,	// (0x00046af7) main_notif_wgt_pane

0x6dec,	// (0x00043804) aid_tch_main_mp4_pane_g4

0x7021,	// (0x00043a39) popup_slider_window_cp02

0x203a,	// (0x0003ea52) list_recal_day_event_pane

0x9819,	// (0x00046231) cntbar_detail_btn_pane_ParamLimits

0x9819,	// (0x00046231) cntbar_detail_btn_pane

0x9829,	// (0x00046241) cntbar_detail_btn_pane_cp01_ParamLimits

0x9829,	// (0x00046241) cntbar_detail_btn_pane_cp01

0x9845,	// (0x0004625d) cntbar_detail_list_shct_pane_ParamLimits

0x9851,	// (0x00046269) cntbar_detail_pane_g1_ParamLimits

0x9851,	// (0x00046269) cntbar_detail_pane_g1

0x985d,	// (0x00046275) cntbar_detail_pane_t1_ParamLimits

0x985d,	// (0x00046275) cntbar_detail_pane_t1

0x98d8,	// (0x000462f0) cntbar_detail_list_event_pane_g3_ParamLimits

0x98d8,	// (0x000462f0) cntbar_detail_list_event_pane_g3

0x98f0,	// (0x00046308) cntbar_detail_list_event_pane_g4_ParamLimits

0x98f0,	// (0x00046308) cntbar_detail_list_event_pane_g4

0x9908,	// (0x00046320) cntbar_detail_list_event_pane_g5_ParamLimits

0x9908,	// (0x00046320) cntbar_detail_list_event_pane_g5

0x9920,	// (0x00046338) cntbar_detail_list_event_pane_g6_ParamLimits

0x9920,	// (0x00046338) cntbar_detail_list_event_pane_g6

0x9962,	// (0x0004637a) cntbar_detail_list_event_pane_t3_ParamLimits

0x9962,	// (0x0004637a) cntbar_detail_list_event_pane_t3

0x9974,	// (0x0004638c) popup_notif_wgt_window_ParamLimits

0x9974,	// (0x0004638c) popup_notif_wgt_window

0x9984,	// (0x0004639c) popup_submenu_window_cp01_ParamLimits

0x9984,	// (0x0004639c) popup_submenu_window_cp01

0xaa15,	// (0x0004742d) bg_popup_window_pane_cp10

0xedaa,	// (0x0004b7c2) listscroll_notif_wgt_pane

0xedbc,	// (0x0004b7d4) list_notif_wgt_window

0xedc5,	// (0x0004b7dd) scroll_pane_cp033

0x9992,	// (0x000463aa) list_notif_wgt_row_pane_ParamLimits

0x9992,	// (0x000463aa) list_notif_wgt_row_pane

0xedce,	// (0x0004b7e6) aid_size_list_notif_wgt_del

0xeddb,	// (0x0004b7f3) list_notif_wgt_row_pane_g1

0xede7,	// (0x0004b7ff) list_notif_wgt_row_pane_g2

0xedf6,	// (0x0004b80e) list_notif_wgt_row_pane_g3

0x0002,

0xfebc,	// (0x0004c8d4) list_notif_wgt_row_pane_g

0xee03,	// (0x0004b81b) list_notif_wgt_row_pane_t1

0xee19,	// (0x0004b831) list_notif_wgt_row_pane_t2

0xee2b,	// (0x0004b843) list_notif_wgt_row_pane_t3

0x0002,

0xfec3,	// (0x0004c8db) list_notif_wgt_row_pane_t

0xd99c,	// (0x0004a3b4) list_recal_day_event_pane_g1

0xee3d,	// (0x0004b855) list_recal_day_event_pane_t1

0xa0df,	// (0x00046af7) bg_button_pane_cp045

0x99a4,	// (0x000463bc) cntbar_detail_btn_pane_t1

0xc8cd,	// (0x000492e5) main_callh_pane_ParamLimits

0xc8cd,	// (0x000492e5) main_callh_pane

0xa0df,	// (0x00046af7) main_coverflow0_pane

0xa0df,	// (0x00046af7) main_wgtman_pane

0x8fdb,	// (0x000459f3) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x8fdb,	// (0x000459f3) main_fs_bigclock_unlock_btn_pane

0x933c,	// (0x00045d54) bg_button_pane_cp16

0x934c,	// (0x00045d64) cell_tport_appsw_pane_g3

0x99b2,	// (0x000463ca) cf0_flow_pane_ParamLimits

0x99b2,	// (0x000463ca) cf0_flow_pane

0xee4c,	// (0x0004b864) listscroll_cf0_pane

0xee57,	// (0x0004b86f) main_cf0_pane_g1

0x99c1,	// (0x000463d9) main_cf0_pane_t1_ParamLimits

0x99c1,	// (0x000463d9) main_cf0_pane_t1

0x99d5,	// (0x000463ed) main_cf0_pane_t2_ParamLimits

0x99d5,	// (0x000463ed) main_cf0_pane_t2

0x0001,

0xfecf,	// (0x0004c8e7) main_cf0_pane_t_ParamLimits

0xfecf,	// (0x0004c8e7) main_cf0_pane_t

0xee69,	// (0x0004b881) scroll_pane_cp11

0x99e9,	// (0x00046401) cf0_flow_pane_g1

0x99f1,	// (0x00046409) cf0_flow_pane_g2

0x0001,

0xfed4,	// (0x0004c8ec) cf0_flow_pane_g

0x99f9,	// (0x00046411) cf0_flow_pane_t1

0xa0df,	// (0x00046af7) main_call6_pane

0xa0df,	// (0x00046af7) main_calllock_pane

0x9a07,	// (0x0004641f) call6_btn_grp_pane_ParamLimits

0x9a07,	// (0x0004641f) call6_btn_grp_pane

0x9a16,	// (0x0004642e) call6_pane_g1_ParamLimits

0x9a16,	// (0x0004642e) call6_pane_g1

0x9a25,	// (0x0004643d) popup_call6_1st_window_ParamLimits

0x9a25,	// (0x0004643d) popup_call6_1st_window

0x9a33,	// (0x0004644b) popup_call6_2nd_window_ParamLimits

0x9a33,	// (0x0004644b) popup_call6_2nd_window

0x9a41,	// (0x00046459) cell_call6_btn_pane_ParamLimits

0x9a41,	// (0x00046459) cell_call6_btn_pane

0xaa15,	// (0x0004742d) bg_popup_call2_in_pane_cp03

0xee74,	// (0x0004b88c) popup_call6_1st_window_g1

0xee7c,	// (0x0004b894) popup_call6_1st_window_g2

0xee84,	// (0x0004b89c) popup_call6_1st_window_g3

0x0002,

0xfed9,	// (0x0004c8f1) popup_call6_1st_window_g

0xee8c,	// (0x0004b8a4) popup_call6_1st_window_t1

0xee9b,	// (0x0004b8b3) popup_call6_1st_window_t2

0xeeab,	// (0x0004b8c3) popup_call6_1st_window_t3

0x0002,

0xfee0,	// (0x0004c8f8) popup_call6_1st_window_t

0xaa15,	// (0x0004742d) bg_popup_call2_in_pane_cp04

0xee74,	// (0x0004b88c) popup_call6_2nd_window_g1

0xee7c,	// (0x0004b894) popup_call6_2nd_window_g2

0xee84,	// (0x0004b89c) popup_call6_2nd_window_g3

0x0002,

0xfed9,	// (0x0004c8f1) popup_call6_2nd_window_g

0xee8c,	// (0x0004b8a4) popup_call6_2nd_window_t1

0xa0df,	// (0x00046af7) bg_button_pane_cp15

0xeebb,	// (0x0004b8d3) cell_call6_btn_pane_g1

0xeec4,	// (0x0004b8dc) cell_call6_btn_pane_t1

0x9a50,	// (0x00046468) listscroll_wgtman_pane_ParamLimits

0x9a50,	// (0x00046468) listscroll_wgtman_pane

0x9a6c,	// (0x00046484) wgtman_btn_pane_ParamLimits

0x9a6c,	// (0x00046484) wgtman_btn_pane

0xb24a,	// (0x00047c62) aid_scroll_copy1

0xeed3,	// (0x0004b8eb) list_wgtman_pane

0x9aa1,	// (0x000464b9) wgtman_btn_pane_g1_ParamLimits

0x9aa1,	// (0x000464b9) wgtman_btn_pane_g1

0x9ac9,	// (0x000464e1) wgtman_btn_pane_t1_ParamLimits

0x9ac9,	// (0x000464e1) wgtman_btn_pane_t1

0xeedd,	// (0x0004b8f5) wgtman_btn_pane_t2_ParamLimits

0xeedd,	// (0x0004b8f5) wgtman_btn_pane_t2

0x0001,

0xfee7,	// (0x0004c8ff) wgtman_btn_pane_t_ParamLimits

0xfee7,	// (0x0004c8ff) wgtman_btn_pane_t

0x9b00,	// (0x00046518) listrow_wgtman_pane_ParamLimits

0x9b00,	// (0x00046518) listrow_wgtman_pane

0x9b1c,	// (0x00046534) listrow_wgtman_pane_g1

0x9b29,	// (0x00046541) listrow_wgtman_pane_g2

0x0001,

0xfeec,	// (0x0004c904) listrow_wgtman_pane_g

0x2156,	// (0x0003eb6e) listrow_wgtman_pane_t1

0x216e,	// (0x0003eb86) listrow_wgtman_pane_t2

0x0001,

0xfef1,	// (0x0004c909) listrow_wgtman_pane_t

0x2194,	// (0x0003ebac) wait_bar_pane_cp09

0xeef4,	// (0x0004b90c) main_calllock_btn_pane

0xeefe,	// (0x0004b916) main_calllock_pane_g1

0xa0df,	// (0x00046af7) bg_button_pane_cp17

0xef09,	// (0x0004b921) main_calllock_btn_pane_g1

0xef12,	// (0x0004b92a) main_calllock_btn_pane_t1

0xa0df,	// (0x00046af7) main_dialer3_pane

0xa0df,	// (0x00046af7) main_fmrd2_pane

0xccd5,	// (0x000496ed) main_fs_bigclock_unlock_btn_pane_g1

0x9b4f,	// (0x00046567) main_fs_bigclock_unlock_btn_pane_t1

0x9b5d,	// (0x00046575) area_fmrd2_info_pane_ParamLimits

0x9b5d,	// (0x00046575) area_fmrd2_info_pane

0x9b6b,	// (0x00046583) area_fmrd2_visual_pane_ParamLimits

0x9b6b,	// (0x00046583) area_fmrd2_visual_pane

0x9b79,	// (0x00046591) fmrd2_indi_pane_ParamLimits

0x9b79,	// (0x00046591) fmrd2_indi_pane

0x9b86,	// (0x0004659e) area_fmrd2_visual_pane_g1

0x9b8e,	// (0x000465a6) area_fmrd2_visual_pane_t1

0x9b9e,	// (0x000465b6) area_fmrd2_visual_pane_t2

0x9bae,	// (0x000465c6) area_fmrd2_visual_pane_t3

0x0002,

0xfefb,	// (0x0004c913) area_fmrd2_visual_pane_t

0x9bbe,	// (0x000465d6) area_fmrd2_info_pane_g1

0x9bc6,	// (0x000465de) area_fmrd2_info_pane_t1

0x9bd6,	// (0x000465ee) area_fmrd2_info_pane_t2

0x9be6,	// (0x000465fe) area_fmrd2_info_pane_t3

0x9bf6,	// (0x0004660e) area_fmrd2_info_pane_t4

0x0003,

0xff02,	// (0x0004c91a) area_fmrd2_info_pane_t

0x9c04,	// (0x0004661c) fmrd2_indi_pane_t1

0x9c14,	// (0x0004662c) fmrd2_indi_pane_t2

0x9c24,	// (0x0004663c) fmrd2_indi_pane_t3

0x0002,

0xff0b,	// (0x0004c923) fmrd2_indi_pane_t

0xe4d5,	// (0x0004aeed) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xe4d5,	// (0x0004aeed) list_single_fs_bigclock_indicator_pane_g5

0xe586,	// (0x0004af9e) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xe586,	// (0x0004af9e) list_single_fs_bigclock_indicator_pane_t5

0x94d6,	// (0x00045eee) aid_cell_bcale_month_pane_ParamLimits

0x94d6,	// (0x00045eee) aid_cell_bcale_month_pane

0x94f4,	// (0x00045f0c) bcale_month_pane_ParamLimits

0x94f4,	// (0x00045f0c) bcale_month_pane

0x9512,	// (0x00045f2a) bcale_preview_pane_ParamLimits

0x9512,	// (0x00045f2a) bcale_preview_pane

0xecdd,	// (0x0004b6f5) list_single_fs_bigclock_pane_t1_ParamLimits

0xecfc,	// (0x0004b714) list_single_fs_bigclock_pane_t2_ParamLimits

0xecfc,	// (0x0004b714) list_single_fs_bigclock_pane_t2

0x0001,

0xfe8d,	// (0x0004c8a5) list_single_fs_bigclock_pane_t_ParamLimits

0xfe8d,	// (0x0004c8a5) list_single_fs_bigclock_pane_t

0x9b47,	// (0x0004655f) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfef6,	// (0x0004c90e) main_fs_bigclock_unlock_btn_pane_g

0x9c32,	// (0x0004664a) aid_dia3_key_size_ParamLimits

0x9c32,	// (0x0004664a) aid_dia3_key_size

0x9c3e,	// (0x00046656) aid_dia3_listrow_size_ParamLimits

0x9c3e,	// (0x00046656) aid_dia3_listrow_size

0x9c4e,	// (0x00046666) dia3_keypad_fun_pane_ParamLimits

0x9c4e,	// (0x00046666) dia3_keypad_fun_pane

0x9c60,	// (0x00046678) dia3_keypad_num_pane_ParamLimits

0x9c60,	// (0x00046678) dia3_keypad_num_pane

0x9c72,	// (0x0004668a) dia3_listscroll_pane_ParamLimits

0x9c72,	// (0x0004668a) dia3_listscroll_pane

0x9c80,	// (0x00046698) dia3_numentry_pane_ParamLimits

0x9c80,	// (0x00046698) dia3_numentry_pane

0xef21,	// (0x0004b939) dia3_list_pane

0xef2c,	// (0x0004b944) scroll_pane_cp12

0xa0df,	// (0x00046af7) bg_dia3_numentry_pane

0x9c8e,	// (0x000466a6) dia3_numentry_pane_t1

0x9c9d,	// (0x000466b5) cell_dia3_key_num_pane

0x9ca5,	// (0x000466bd) cell_dia3_key0_fun_pane_ParamLimits

0x9ca5,	// (0x000466bd) cell_dia3_key0_fun_pane

0x9cb2,	// (0x000466ca) cell_dia3_key1_fun_pane_ParamLimits

0x9cb2,	// (0x000466ca) cell_dia3_key1_fun_pane

0x9cbf,	// (0x000466d7) dia3_listrow_pane

0xe216,	// (0x0004ac2e) bg_dia3_numentry_pane_g1

0xa0df,	// (0x00046af7) bg_button_pane_cp21

0xef37,	// (0x0004b94f) cell_dia3_key_num_pane_t1

0xef45,	// (0x0004b95d) cell_dia3_key_num_pane_t2

0xef54,	// (0x0004b96c) cell_dia3_key_num_pane_t3

0xef63,	// (0x0004b97b) cell_dia3_key_num_pane_t4

0x0003,

0xff12,	// (0x0004c92a) cell_dia3_key_num_pane_t

0xa0df,	// (0x00046af7) bg_button_pane_cp19

0x9ccc,	// (0x000466e4) cell_dia3_key0_fun_pane_g1

0xa0df,	// (0x00046af7) bg_button_pane_cp20

0x9cd4,	// (0x000466ec) cell_dia3_key1_fun_pane_g1

0x9cdc,	// (0x000466f4) area_left_week_number_pane

0x9cef,	// (0x00046707) area_top_day_name_pane

0x9cfd,	// (0x00046715) frame_month_view_pane

0xef72,	// (0x0004b98a) grid_month_view_pane

0x9d12,	// (0x0004672a) cell_top_day_name_pane_ParamLimits

0x9d12,	// (0x0004672a) cell_top_day_name_pane

0x9d2c,	// (0x00046744) cell_area_left_week_number_pane_ParamLimits

0x9d2c,	// (0x00046744) cell_area_left_week_number_pane

0x9d4f,	// (0x00046767) cell_month_view_pane_ParamLimits

0x9d4f,	// (0x00046767) cell_month_view_pane

0xef80,	// (0x0004b998) frm_month_g1

0x9d7b,	// (0x00046793) frm_month_g2

0x9d8c,	// (0x000467a4) frm_month_g3

0x9d9d,	// (0x000467b5) frm_month_g4

0x9dae,	// (0x000467c6) frm_month_g5

0x9dc1,	// (0x000467d9) frm_month_g6

0x9dd4,	// (0x000467ec) frm_month_g7

0xef8d,	// (0x0004b9a5) frm_month_g8

0x9de7,	// (0x000467ff) frm_month_g9

0x9df4,	// (0x0004680c) frm_month_g10

0x9e01,	// (0x00046819) frm_month_g11

0x9e0e,	// (0x00046826) frm_month_g12

0x9e1b,	// (0x00046833) frm_month_g13

0x9e28,	// (0x00046840) frm_month_g14

0x9e37,	// (0x0004684f) frm_month_g15

0x9e46,	// (0x0004685e) frm_month_g16

0x000f,

0xff1b,	// (0x0004c933) frm_month_g

0xef9a,	// (0x0004b9b2) cell_top_day_name_pane_t1

0x9e55,	// (0x0004686d) cell_area_left_week_number_pane_g1

0x9e64,	// (0x0004687c) cell_area_left_week_number_pane_t1

0xcf23,	// (0x0004993b) cell_month_view_pane_g1

0x9e7a,	// (0x00046892) cell_month_view_pane_t1

0xa0df,	// (0x00046af7) main_fps_pane

0xe776,	// (0x0004b18e) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xe776,	// (0x0004b18e) cmail_ddmenu_btn02_pane_cp1

0xe792,	// (0x0004b1aa) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xe792,	// (0x0004b1aa) cmail_ddmenu_btn02_pane_cp2

0x9700,	// (0x00046118) cmail_ddmenu_btn02_pane_g2_ParamLimits

0x9700,	// (0x00046118) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfe40,	// (0x0004c858) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfe40,	// (0x0004c858) cmail_ddmenu_btn02_pane_g

0x971f,	// (0x00046137) cmail_ddmenu_btn02_pane_t2_ParamLimits

0x971f,	// (0x00046137) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfe45,	// (0x0004c85d) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfe45,	// (0x0004c85d) cmail_ddmenu_btn02_pane_t

0x9e90,	// (0x000468a8) fps_text_pane_ParamLimits

0x9e90,	// (0x000468a8) fps_text_pane

0x9e9d,	// (0x000468b5) main_fps_pane_g1_ParamLimits

0x9e9d,	// (0x000468b5) main_fps_pane_g1

0x9eab,	// (0x000468c3) wait_bar_pane_cp010_ParamLimits

0x9eab,	// (0x000468c3) wait_bar_pane_cp010

0x9eb7,	// (0x000468cf) fps_text_pane_t1_ParamLimits

0x9eb7,	// (0x000468cf) fps_text_pane_t1

0x7403,	// (0x00043e1b) cam4_image_uncrop_pane_g1

0x740c,	// (0x00043e24) cam4_image_uncrop_pane_g2

0x7415,	// (0x00043e2d) cam4_image_uncrop_pane_g3

0x741e,	// (0x00043e36) cam4_image_uncrop_pane_g4

0x0003,

0xf901,	// (0x0004c319) cam4_image_uncrop_pane_g

0x9cbf,	// (0x000466d7) dia3_listrow_pane_ParamLimits

0xa0df,	// (0x00046af7) main_phob2_pane

0x931e,	// (0x00045d36) cell_tport_appsw_pane_cp02_ParamLimits

0x931e,	// (0x00045d36) cell_tport_appsw_pane_cp02

0x932d,	// (0x00045d45) cell_tport_appsw_pane_cp03_ParamLimits

0x932d,	// (0x00045d45) cell_tport_appsw_pane_cp03

0xa0df,	// (0x00046af7) phob2_contact_card_pane

0xa0df,	// (0x00046af7) phob2_listscroll_pane

0xefad,	// (0x0004b9c5) phob2_list_pane

0xefb5,	// (0x0004b9cd) scroll_pane_cp034

0x9ed0,	// (0x000468e8) phob2_cc_data_pane_ParamLimits

0x9ed0,	// (0x000468e8) phob2_cc_data_pane

0x9eea,	// (0x00046902) phob2_cc_listscroll_pane_ParamLimits

0x9eea,	// (0x00046902) phob2_cc_listscroll_pane

0x9f04,	// (0x0004691c) list_double_large_graphic_phob2_pane_ParamLimits

0x9f04,	// (0x0004691c) list_double_large_graphic_phob2_pane

0x9f23,	// (0x0004693b) list_double_large_graphic_phob2_pane_g1_ParamLimits

0x9f23,	// (0x0004693b) list_double_large_graphic_phob2_pane_g1

0x21a6,	// (0x0003ebbe) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x21a6,	// (0x0003ebbe) list_double_large_graphic_phob2_pane_g2

0x0001,

0xff3c,	// (0x0004c954) list_double_large_graphic_phob2_pane_g_ParamLimits

0xff3c,	// (0x0004c954) list_double_large_graphic_phob2_pane_g

0x21b2,	// (0x0003ebca) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x21b2,	// (0x0003ebca) list_double_large_graphic_phob2_pane_t1

0x21c8,	// (0x0003ebe0) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x21c8,	// (0x0003ebe0) list_double_large_graphic_phob2_pane_t2

0x0001,

0xff41,	// (0x0004c959) list_double_large_graphic_phob2_pane_t_ParamLimits

0xff41,	// (0x0004c959) list_double_large_graphic_phob2_pane_t

0xa0df,	// (0x00046af7) list_highlight_pane_cp024

0x9f39,	// (0x00046951) phob2_cc_button_pane

0x9f41,	// (0x00046959) phob2_cc_data_pane_g1_ParamLimits

0x9f41,	// (0x00046959) phob2_cc_data_pane_g1

0x9f4d,	// (0x00046965) phob2_cc_data_pane_g2_ParamLimits

0x9f4d,	// (0x00046965) phob2_cc_data_pane_g2

0x0001,

0xff46,	// (0x0004c95e) phob2_cc_data_pane_g_ParamLimits

0xff46,	// (0x0004c95e) phob2_cc_data_pane_g

0x9f59,	// (0x00046971) phob2_cc_data_pane_t1_ParamLimits

0x9f59,	// (0x00046971) phob2_cc_data_pane_t1

0x9f6b,	// (0x00046983) phob2_cc_data_pane_t2_ParamLimits

0x9f6b,	// (0x00046983) phob2_cc_data_pane_t2

0x9f7d,	// (0x00046995) phob2_cc_data_pane_t3_ParamLimits

0x9f7d,	// (0x00046995) phob2_cc_data_pane_t3

0x0002,

0xff4b,	// (0x0004c963) phob2_cc_data_pane_t_ParamLimits

0xff4b,	// (0x0004c963) phob2_cc_data_pane_t

0xefbd,	// (0x0004b9d5) phob2_cc_list_pane_ParamLimits

0xefbd,	// (0x0004b9d5) phob2_cc_list_pane

0xdd27,	// (0x0004a73f) scroll_pane_cp035_ParamLimits

0xdd27,	// (0x0004a73f) scroll_pane_cp035

0xabed,	// (0x00047605) bg_button_pane_cp033

0xefc9,	// (0x0004b9e1) phob2_cc_button_pane_g1

0xefd5,	// (0x0004b9ed) phob2_cc_button_pane_t1

0xefea,	// (0x0004ba02) phob2_cc_button_pane_t2

0x0001,

0xff52,	// (0x0004c96a) phob2_cc_button_pane_t

0x9f8f,	// (0x000469a7) list_double_large_graphic_phob2_cc_pane_ParamLimits

0x9f8f,	// (0x000469a7) list_double_large_graphic_phob2_cc_pane

0x9fb8,	// (0x000469d0) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0x9fb8,	// (0x000469d0) list_double_large_graphic_phob2_cc_pane_g1

0x21dd,	// (0x0003ebf5) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x21dd,	// (0x0003ebf5) list_double_large_graphic_phob2_cc_pane_g2

0x21e9,	// (0x0003ec01) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x21e9,	// (0x0003ec01) list_double_large_graphic_phob2_cc_pane_g3

0x21f5,	// (0x0003ec0d) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x21f5,	// (0x0003ec0d) list_double_large_graphic_phob2_cc_pane_g4

0x2201,	// (0x0003ec19) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x2201,	// (0x0003ec19) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xff57,	// (0x0004c96f) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xff57,	// (0x0004c96f) list_double_large_graphic_phob2_cc_pane_g

0x220d,	// (0x0003ec25) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x220d,	// (0x0003ec25) list_double_large_graphic_phob2_cc_pane_t1

0x2236,	// (0x0003ec4e) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x2236,	// (0x0003ec4e) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xff62,	// (0x0004c97a) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xff62,	// (0x0004c97a) list_double_large_graphic_phob2_cc_pane_t

0xeffc,	// (0x0004ba14) list_highlight_pane_cp025_ParamLimits

0xeffc,	// (0x0004ba14) list_highlight_pane_cp025

0xabed,	// (0x00047605) bg_button_pane_cp033_ParamLimits

0xefc9,	// (0x0004b9e1) phob2_cc_button_pane_g1_ParamLimits

0xefd5,	// (0x0004b9ed) phob2_cc_button_pane_t1_ParamLimits

0xefea,	// (0x0004ba02) phob2_cc_button_pane_t2_ParamLimits

0xff52,	// (0x0004c96a) phob2_cc_button_pane_t_ParamLimits

0x2536,	// (0x0003ef4e) popup_wgtman_window

0xd844,	// (0x0004a25c) scroll_pane_cp038

0x9a89,	// (0x000464a1) wgtman_btn_pane_cp_01_ParamLimits

0x9a89,	// (0x000464a1) wgtman_btn_pane_cp_01

0xf00a,	// (0x0004ba22) wgtman_content_pane

0xf013,	// (0x0004ba2b) wgtman_heading_pane

0xa0df,	// (0x00046af7) bg_heading_pane_cp02

0xf01c,	// (0x0004ba34) wgtman_heading_pane_g1

0xf024,	// (0x0004ba3c) wgtman_heading_pane_t1

0xf032,	// (0x0004ba4a) scroll_pane_cp036

0xf03a,	// (0x0004ba52) wgtman_list_pane

0xe803,	// (0x0004b21b) wgtman_list_pane_t1_ParamLimits

0xe803,	// (0x0004b21b) wgtman_list_pane_t1

0x7362,	// (0x00043d7a) cam4_grid_pane

0x13b7,	// (0x0003ddcf) bg_button_pane_cp015_ParamLimits

0x802e,	// (0x00044a46) bg_button_pane_cp016_ParamLimits

0x8041,	// (0x00044a59) bg_button_pane_cp017_ParamLimits

0x13fb,	// (0x0003de13) popup_vitu2_query_window_g3_ParamLimits

0x13fb,	// (0x0003de13) popup_vitu2_query_window_g3

0x1474,	// (0x0003de8c) popup_vitu2_query_window_t6_ParamLimits

0x1474,	// (0x0003de8c) popup_vitu2_query_window_t6

0x149f,	// (0x0003deb7) popup_vitu2_query_window_t7_ParamLimits

0x149f,	// (0x0003deb7) popup_vitu2_query_window_t7

0xe49a,	// (0x0004aeb2) cam4_grid_pane_g1

0xe4a3,	// (0x0004aebb) cam4_grid_pane_g2

0xf042,	// (0x0004ba5a) cam4_grid_pane_g3

0xf04b,	// (0x0004ba63) cam4_grid_pane_g4

0x0003,

0xff67,	// (0x0004c97f) cam4_grid_pane_g

0x32a9,	// (0x0003fcc1) aid_placing_vt_slider_lsc_ParamLimits

0x35e9,	// (0x00040001) vidtel_button_pane_ParamLimits

0x35e9,	// (0x00040001) vidtel_button_pane

0xa0df,	// (0x00046af7) bg_button_pane_cp034

0x9fc9,	// (0x000469e1) vidtel_button_pane_g1

0xf056,	// (0x0004ba6e) vidtel_button_pane_t1

0xd946,	// (0x0004a35e) aid_size_vtel_slider_touch

0xdd27,	// (0x0004a73f) scroll_pane_cp039

0x8d18,	// (0x00045730) ncim_query_button_pane_cp01_ParamLimits

0x8d37,	// (0x0004574f) ncimui_query_pane_g1_ParamLimits

0xabed,	// (0x00047605) input_focus_pane_cp012_ParamLimits

0xe25c,	// (0x0004ac74) ncim_query_entry_pane_t1_ParamLimits

0xdd27,	// (0x0004a73f) scroll_pane_cp039_ParamLimits

0xb321,	// (0x00047d39) navi_pane_bcale_mc_g1

0xb329,	// (0x00047d41) navi_pane_bcale_mc_t1

0xe7db,	// (0x0004b1f3) main_sp_fs_email_pane_g1

0xe7e7,	// (0x0004b1ff) main_sp_fs_email_pane_g2

0x0001,

0xfcf8,	// (0x0004c710) main_sp_fs_email_pane_g

0xea61,	// (0x0004b479) list_single_cale_mrui_row_pane_g3_ParamLimits

0xea61,	// (0x0004b479) list_single_cale_mrui_row_pane_g3

0x2099,	// (0x0003eab1) list_single_recal_day_pane_g5_event_pane

0x20af,	// (0x0003eac7) list_single_recal_day_pane_g7

0xf06c,	// (0x0004ba84) list_recal_day_event_pane_cp01

0xf075,	// (0x0004ba8d) list_recal_vselct_arw_lo_pane_cp01

0xf07d,	// (0x0004ba95) list_recal_vselct_arw_up_pane_cp01

0xf085,	// (0x0004ba9d) list_recal_vselct_pane_cp01

0xd99c,	// (0x0004a3b4) list_recal_day_event_pane_cp01_g1

0x225f,	// (0x0003ec77) list_recal_day_event_pane_cp01_t1

0x20b7,	// (0x0003eacf) list_single_recal_day_pane_t1_ParamLimits

0x20c9,	// (0x0003eae1) list_single_recal_day_pane_t2_ParamLimits

0xfe55,	// (0x0004c86d) list_single_recal_day_pane_t_ParamLimits

0xa76d,	// (0x00047185) bg_notes_pane_ParamLimits

0xa81c,	// (0x00047234) list_notes_pane_ParamLimits

0x2891,	// (0x0003f2a9) scroll_pane_cp06_ParamLimits

0xa83e,	// (0x00047256) main_notes_pane_ParamLimits

0xa0df,	// (0x00046af7) main_welc_pane

0x9fd1,	// (0x000469e9) main_welc_body_pane_ParamLimits

0x9fd1,	// (0x000469e9) main_welc_body_pane

0x9fea,	// (0x00046a02) main_welc_opti_pane_ParamLimits

0x9fea,	// (0x00046a02) main_welc_opti_pane

0xa01d,	// (0x00046a35) main_welc_pane_t1_ParamLimits

0xa01d,	// (0x00046a35) main_welc_pane_t1

0xa037,	// (0x00046a4f) main_welc_body_row_pane_ParamLimits

0xa037,	// (0x00046a4f) main_welc_body_row_pane

0xd966,	// (0x0004a37e) main_welc_opti_row_pane_ParamLimits

0xd966,	// (0x0004a37e) main_welc_opti_row_pane

0xf08f,	// (0x0004baa7) main_welc_opti_row_pane_g1

0xa060,	// (0x00046a78) main_welc_opti_row_pane_t1

0xf097,	// (0x0004baaf) main_welc_body_row_pane_t1

0xedb4,	// (0x0004b7cc) popup_notif_wgt_heading_pane

0xedce,	// (0x0004b7e6) aid_size_list_notif_wgt_del_ParamLimits

0xeddb,	// (0x0004b7f3) list_notif_wgt_row_pane_g1_ParamLimits

0xede7,	// (0x0004b7ff) list_notif_wgt_row_pane_g2_ParamLimits

0xedf6,	// (0x0004b80e) list_notif_wgt_row_pane_g3_ParamLimits

0xfebc,	// (0x0004c8d4) list_notif_wgt_row_pane_g_ParamLimits

0xee03,	// (0x0004b81b) list_notif_wgt_row_pane_t1_ParamLimits

0xee19,	// (0x0004b831) list_notif_wgt_row_pane_t2_ParamLimits

0xee2b,	// (0x0004b843) list_notif_wgt_row_pane_t3_ParamLimits

0xfec3,	// (0x0004c8db) list_notif_wgt_row_pane_t_ParamLimits

0x9b1c,	// (0x00046534) listrow_wgtman_pane_g1_ParamLimits

0x9b29,	// (0x00046541) listrow_wgtman_pane_g2_ParamLimits

0xfeec,	// (0x0004c904) listrow_wgtman_pane_g_ParamLimits

0x2156,	// (0x0003eb6e) listrow_wgtman_pane_t1_ParamLimits

0x216e,	// (0x0003eb86) listrow_wgtman_pane_t2_ParamLimits

0xfef1,	// (0x0004c909) listrow_wgtman_pane_t_ParamLimits

0x2194,	// (0x0003ebac) wait_bar_pane_cp09_ParamLimits

0xa0df,	// (0x00046af7) bg_popup_heading_pane_cp02

0xf0a6,	// (0x0004babe) popup_notif_wgt_heading_pane_g1

0xf0ae,	// (0x0004bac6) popup_notif_wgt_heading_pane_t1

0xa0df,	// (0x00046af7) main_vids_pane

0xa0df,	// (0x00046af7) vids_listscroll_pane

0xa06f,	// (0x00046a87) scroll_pane_cp040

0xa0df,	// (0x00046af7) vids_list_pane

0xa07a,	// (0x00046a92) vids_list_double_pane_ParamLimits

0xa07a,	// (0x00046a92) vids_list_double_pane

0xa092,	// (0x00046aaa) vids_list_double_pane_g1

0xa09b,	// (0x00046ab3) vids_list_double_pane_t1

0xa0ab,	// (0x00046ac3) vids_list_double_pane_t2

0x0001,

0xff75,	// (0x0004c98d) vids_list_double_pane_t

0xabed,	// (0x00047605) main_ncimui_pane_ParamLimits

0x8b6f,	// (0x00045587) main_ncimui_pane_g1_ParamLimits

0x8b7b,	// (0x00045593) main_ncimui_pane_g2_ParamLimits

0x8b7b,	// (0x00045593) main_ncimui_pane_g2

0x0001,

0xfbfd,	// (0x0004c615) main_ncimui_pane_g_ParamLimits

0xfbfd,	// (0x0004c615) main_ncimui_pane_g

0xa003,	// (0x00046a1b) main_welc_pane_g1_ParamLimits

0xa003,	// (0x00046a1b) main_welc_pane_g1

0xa00f,	// (0x00046a27) main_welc_pane_g2_ParamLimits

0xa00f,	// (0x00046a27) main_welc_pane_g2

0x0001,

0xff70,	// (0x0004c988) main_welc_pane_g_ParamLimits

0xff70,	// (0x0004c988) main_welc_pane_g

0xa76d,	// (0x00047185) listscroll_mce_pane_ParamLimits

0xb476,	// (0x00047e8e) wait_bar_pane_cp10

0xc8c1,	// (0x000492d9) main_cale_day_pane_ParamLimits

0xc8c1,	// (0x000492d9) main_cale_week_pane_ParamLimits

0xa76d,	// (0x00047185) main_messa_pane_ParamLimits

0x67b6,	// (0x000431ce) main_clock2_btn_pane_ParamLimits

0x67b6,	// (0x000431ce) main_clock2_btn_pane

0xd0ab,	// (0x00049ac3) main_clock2_btn_pane_cp01_ParamLimits

0xd0ab,	// (0x00049ac3) main_clock2_btn_pane_cp01

0xea32,	// (0x0004b44a) list_cale_mrui_pane_ParamLimits

0xee61,	// (0x0004b879) main_cf0_pane_g2

0x0001,

0xfeca,	// (0x0004c8e2) main_cf0_pane_g

0x9cdc,	// (0x000466f4) area_left_week_number_pane_ParamLimits

0x9cef,	// (0x00046707) area_top_day_name_pane_ParamLimits

0x9cfd,	// (0x00046715) frame_month_view_pane_ParamLimits

0xef72,	// (0x0004b98a) grid_month_view_pane_ParamLimits

0xef80,	// (0x0004b998) frm_month_g1_ParamLimits

0x9d7b,	// (0x00046793) frm_month_g2_ParamLimits

0x9d8c,	// (0x000467a4) frm_month_g3_ParamLimits

0x9d9d,	// (0x000467b5) frm_month_g4_ParamLimits

0x9dae,	// (0x000467c6) frm_month_g5_ParamLimits

0x9dc1,	// (0x000467d9) frm_month_g6_ParamLimits

0x9dd4,	// (0x000467ec) frm_month_g7_ParamLimits

0xef8d,	// (0x0004b9a5) frm_month_g8_ParamLimits

0x9de7,	// (0x000467ff) frm_month_g9_ParamLimits

0x9df4,	// (0x0004680c) frm_month_g10_ParamLimits

0x9e01,	// (0x00046819) frm_month_g11_ParamLimits

0x9e0e,	// (0x00046826) frm_month_g12_ParamLimits

0x9e1b,	// (0x00046833) frm_month_g13_ParamLimits

0x9e28,	// (0x00046840) frm_month_g14_ParamLimits

0x9e37,	// (0x0004684f) frm_month_g15_ParamLimits

0x9e46,	// (0x0004685e) frm_month_g16_ParamLimits

0xff1b,	// (0x0004c933) frm_month_g_ParamLimits

0xef9a,	// (0x0004b9b2) cell_top_day_name_pane_t1_ParamLimits

0x9e55,	// (0x0004686d) cell_area_left_week_number_pane_g1_ParamLimits

0x9e64,	// (0x0004687c) cell_area_left_week_number_pane_t1_ParamLimits

0xcf23,	// (0x0004993b) cell_month_view_pane_g1_ParamLimits

0x9e7a,	// (0x00046892) cell_month_view_pane_t1_ParamLimits

0xa765,	// (0x0004717d) main_clock2_btn_pane_g1

0xf0bc,	// (0x0004bad4) main_clock2_btn_pane_t1

0xabed,	// (0x00047605) listscroll_cmail_pane_ParamLimits

0xe7db,	// (0x0004b1f3) main_sp_fs_email_pane_g1_ParamLimits

0xe7e7,	// (0x0004b1ff) main_sp_fs_email_pane_g2_ParamLimits

0xfcf8,	// (0x0004c710) main_sp_fs_email_pane_g_ParamLimits

0xeb40,	// (0x0004b558) list_recal_day_pane_ParamLimits

0xeb51,	// (0x0004b569) mian_recal_day_pane_t1

0x1a55,	// (0x0003e46d) list_single_dyc_row_text_pane_t4_ParamLimits

0x1a55,	// (0x0003e46d) list_single_dyc_row_text_pane_t4

0x1a8c,	// (0x0003e4a4) list_single_dyc_row_text_pane_t5_ParamLimits

0x1a8c,	// (0x0003e4a4) list_single_dyc_row_text_pane_t5

0x1b02,	// (0x0003e51a) list_single_dyc_row_text_pane_t6_ParamLimits

0x1b02,	// (0x0003e51a) list_single_dyc_row_text_pane_t6

0x4462,	// (0x00040e7a) aid_mgn_list_cale_time_pane

0xabed,	// (0x00047605) main_gallery2_pane_ParamLimits

0xd0c1,	// (0x00049ad9) main_clock2_pane_cp01_t1

0xd0cf,	// (0x00049ae7) main_clock2_pane_cp01_t3

0x0001,

0xf7d7,	// (0x0004c1ef) main_clock2_pane_cp01_t

0x2cd4,	// (0x0003f6ec) cale_week_scroll_pane_g16_ParamLimits

0x2cd4,	// (0x0003f6ec) cale_week_scroll_pane_g16

0xaa15,	// (0x0004742d) vorec_slider_pane

0xf056,	// (0x0004ba6e) vidtel_button_pane_t1_ParamLimits

0x9782,	// (0x0004619a) main_fs_bigclock_clock_pane_g1_ParamLimits

0x9782,	// (0x0004619a) main_fs_bigclock_clock_pane_g2_ParamLimits

0x978f,	// (0x000461a7) main_fs_bigclock_clock_pane_g3_ParamLimits

0x978f,	// (0x000461a7) main_fs_bigclock_clock_pane_g4_ParamLimits

0xfe78,	// (0x0004c890) main_fs_bigclock_clock_pane_g_ParamLimits

0x979b,	// (0x000461b3) main_fs_bigclock_clock_pane_t1_ParamLimits

0x97ae,	// (0x000461c6) main_fs_bigclock_clock_pane_t2_ParamLimits

0xfe81,	// (0x0004c899) main_fs_bigclock_clock_pane_t_ParamLimits
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
	};

} // end of namespace AknLayoutScalable_Elaf_pnp4_apps_nhd4_prt_tch_Small
