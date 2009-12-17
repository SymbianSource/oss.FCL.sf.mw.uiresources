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

#include "aknlayoutscalable_abrw_pnp4_apps_nhd4_prt_tch_large.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pnp4_apps_nhd4_prt_tch[]; }

namespace AknLayoutScalable_Abrw_pnp4_apps_nhd4_prt_tch_Large
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pnp4_apps_nhd4_prt_tch + 0x00077c8b };

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
0x5630,	// (0x0007d2bb) Screen

0x563c,	// (0x0007d2c7) application_window

0x567c,	// (0x0007d307) area_bottom_pane_ParamLimits

0x567c,	// (0x0007d307) area_bottom_pane

0x56b1,	// (0x0007d33c) area_top_pane_ParamLimits

0x56b1,	// (0x0007d33c) area_top_pane

0xdd7b,	// (0x00085a06) call_video_uplink_pane_ParamLimits

0xdd7b,	// (0x00085a06) call_video_uplink_pane

0x573f,	// (0x0007d3ca) main_pane_ParamLimits

0x573f,	// (0x0007d3ca) main_pane

0xe697,	// (0x00086322) context_pane

0x8e0a,	// (0x00080a95) navi_pane

0x8e2a,	// (0x00080ab5) popup_cale_events_window_ParamLimits

0x8e2a,	// (0x00080ab5) popup_cale_events_window

0xe6aa,	// (0x00086335) popup_mup_playback_window

0x8e42,	// (0x00080acd) signal_pane

0x0b22,	// (0x000787ad) main_browser_pane

0x1890,	// (0x0007951b) main_burst_pane

0x8ce0,	// (0x0008096b) main_calc_pane

0x1890,	// (0x0007951b) main_cale_day_pane

0x0b22,	// (0x000787ad) main_cale_month_pane

0x1890,	// (0x0007951b) main_cale_week_pane

0x1890,	// (0x0007951b) main_call_pane

0xe1aa,	// (0x00085e35) main_call_poc_pane

0x1890,	// (0x0007951b) main_camera_pane

0x1890,	// (0x0007951b) main_chi_dic_pane

0x171f,	// (0x000793aa) main_clock_pane

0xe1aa,	// (0x00085e35) main_fmradio_pane

0x1890,	// (0x0007951b) main_graph_messa_pane

0xe1aa,	// (0x00085e35) main_help_pane

0x0b22,	// (0x000787ad) main_im_pane

0x09f1,	// (0x0007867c) main_image_pane_ParamLimits

0x09f1,	// (0x0007867c) main_image_pane

0xe1aa,	// (0x00085e35) main_location2_pane

0x1890,	// (0x0007951b) main_location_pane

0xe1aa,	// (0x00085e35) main_messa_pane

0xe1aa,	// (0x00085e35) main_mp2_pane

0x1890,	// (0x0007951b) main_mp_pane

0xe1aa,	// (0x00085e35) main_msg_pane

0xe1aa,	// (0x00085e35) main_mup_eq_pane

0xe1aa,	// (0x00085e35) main_mup_pane

0x1890,	// (0x0007951b) main_notes_pane

0xe1aa,	// (0x00085e35) main_pec_pane

0xe1aa,	// (0x00085e35) main_phob_pane

0xe1aa,	// (0x00085e35) main_pinb_pane

0xe1aa,	// (0x00085e35) main_postcard_pane

0xe1aa,	// (0x00085e35) main_qdial_pane

0x1890,	// (0x0007951b) main_skin_pane

0xe1aa,	// (0x00085e35) main_smil2_pane

0x1890,	// (0x0007951b) main_smil_pane

0x1890,	// (0x0007951b) main_video_pane

0x1890,	// (0x0007951b) main_video_tele_pane

0x09f1,	// (0x0007867c) main_viewer_pane_ParamLimits

0x09f1,	// (0x0007867c) main_viewer_pane

0x1890,	// (0x0007951b) main_vorec_pane

0x8d16,	// (0x000809a1) popup_blid_sat_info_window_ParamLimits

0x8d16,	// (0x000809a1) popup_blid_sat_info_window

0x8d2c,	// (0x000809b7) popup_dyc_status_message_window_ParamLimits

0x8d2c,	// (0x000809b7) popup_dyc_status_message_window

0x8d3a,	// (0x000809c5) popup_grid_large_graphic_window_ParamLimits

0x8d3a,	// (0x000809c5) popup_grid_large_graphic_window

0x8dae,	// (0x00080a39) popup_loc_request_window_ParamLimits

0x8dae,	// (0x00080a39) popup_loc_request_window

0x8de2,	// (0x00080a6d) popup_wml_address_window_ParamLimits

0x8de2,	// (0x00080a6d) popup_wml_address_window

0x8bb8,	// (0x00080843) call_muted_g1

0x8150,	// (0x0007fddb) popup_call_audio_conf_window_ParamLimits

0x8150,	// (0x0007fddb) popup_call_audio_conf_window

0x8bc8,	// (0x00080853) popup_call_audio_first_window_ParamLimits

0x8bc8,	// (0x00080853) popup_call_audio_first_window

0x8c08,	// (0x00080893) popup_call_audio_in_window_ParamLimits

0x8c08,	// (0x00080893) popup_call_audio_in_window

0x8c2c,	// (0x000808b7) popup_call_audio_out_window_ParamLimits

0x8c2c,	// (0x000808b7) popup_call_audio_out_window

0x8c4e,	// (0x000808d9) popup_call_audio_second_window_ParamLimits

0x8c4e,	// (0x000808d9) popup_call_audio_second_window

0x8c7e,	// (0x00080909) popup_call_audio_wait_window_ParamLimits

0x8c7e,	// (0x00080909) popup_call_audio_wait_window

0x8c9f,	// (0x0008092a) popup_number_entry_window_ParamLimits

0x8c9f,	// (0x0008092a) popup_number_entry_window

0xdd99,	// (0x00085a24) bg_popup_call_pane_cp05_ParamLimits

0xdd99,	// (0x00085a24) bg_popup_call_pane_cp05

0xddb9,	// (0x00085a44) popup_number_entry_window_t1

0xddcc,	// (0x00085a57) popup_number_entry_window_t2

0xddde,	// (0x00085a69) popup_number_entry_window_t3

0x0003,

0xf12f,	// (0x00086dba) popup_number_entry_window_t

0xddf0,	// (0x00085a7b) text_title_cp2

0xde03,	// (0x00085a8e) bg_popup_call_pane_cp_ParamLimits

0xde03,	// (0x00085a8e) bg_popup_call_pane_cp

0xde11,	// (0x00085a9c) call_thumbnail_pane

0xde19,	// (0x00085aa4) popup_call_audio_in_window_g1_ParamLimits

0xde19,	// (0x00085aa4) popup_call_audio_in_window_g1

0xde25,	// (0x00085ab0) popup_call_audio_in_window_g2_ParamLimits

0xde25,	// (0x00085ab0) popup_call_audio_in_window_g2

0xde31,	// (0x00085abc) popup_call_audio_in_window_g3_ParamLimits

0xde31,	// (0x00085abc) popup_call_audio_in_window_g3

0x0002,

0xf138,	// (0x00086dc3) popup_call_audio_in_window_g_ParamLimits

0xf138,	// (0x00086dc3) popup_call_audio_in_window_g

0xde3d,	// (0x00085ac8) popup_call_audio_in_window_t1_ParamLimits

0xde3d,	// (0x00085ac8) popup_call_audio_in_window_t1

0xde58,	// (0x00085ae3) popup_call_audio_in_window_t2_ParamLimits

0xde58,	// (0x00085ae3) popup_call_audio_in_window_t2

0xde73,	// (0x00085afe) popup_call_audio_in_window_t3_ParamLimits

0xde73,	// (0x00085afe) popup_call_audio_in_window_t3

0x0002,

0xf13f,	// (0x00086dca) popup_call_audio_in_window_t_ParamLimits

0xf13f,	// (0x00086dca) popup_call_audio_in_window_t

0xde03,	// (0x00085a8e) bg_popup_call_pane_cp01_ParamLimits

0xde03,	// (0x00085a8e) bg_popup_call_pane_cp01

0xde11,	// (0x00085a9c) call_thumbnail_pane_cp02

0xde86,	// (0x00085b11) call_type_pane_cp022

0xde8e,	// (0x00085b19) popup_call_audio_out_window_g1_ParamLimits

0xde8e,	// (0x00085b19) popup_call_audio_out_window_g1

0xdea0,	// (0x00085b2b) popup_call_audio_out_window_g2_ParamLimits

0xdea0,	// (0x00085b2b) popup_call_audio_out_window_g2

0xdeac,	// (0x00085b37) popup_call_audio_out_window_g3_ParamLimits

0xdeac,	// (0x00085b37) popup_call_audio_out_window_g3

0x0002,

0xf146,	// (0x00086dd1) popup_call_audio_out_window_g_ParamLimits

0xf146,	// (0x00086dd1) popup_call_audio_out_window_g

0xdebe,	// (0x00085b49) popup_call_audio_out_window_t1_ParamLimits

0xdebe,	// (0x00085b49) popup_call_audio_out_window_t1

0xded6,	// (0x00085b61) popup_call_audio_out_window_t2_ParamLimits

0xded6,	// (0x00085b61) popup_call_audio_out_window_t2

0x0001,

0xf14d,	// (0x00086dd8) popup_call_audio_out_window_t_ParamLimits

0xf14d,	// (0x00086dd8) popup_call_audio_out_window_t

0xdeeb,	// (0x00085b76) bg_popup_call_pane_ParamLimits

0xdeeb,	// (0x00085b76) bg_popup_call_pane

0x592b,	// (0x0007d5b6) call_thumbnail_pane_cp_ParamLimits

0x592b,	// (0x0007d5b6) call_thumbnail_pane_cp

0xdf6f,	// (0x00085bfa) call_type_pane_cp01_ParamLimits

0xdf6f,	// (0x00085bfa) call_type_pane_cp01

0xdfb3,	// (0x00085c3e) popup_call_audio_first_window_g1_ParamLimits

0xdfb3,	// (0x00085c3e) popup_call_audio_first_window_g1

0xdfff,	// (0x00085c8a) popup_call_audio_first_window_g2_ParamLimits

0xdfff,	// (0x00085c8a) popup_call_audio_first_window_g2

0x0001,

0xf152,	// (0x00086ddd) popup_call_audio_first_window_g_ParamLimits

0xf152,	// (0x00086ddd) popup_call_audio_first_window_g

0xe043,	// (0x00085cce) popup_call_audio_first_window_t1_ParamLimits

0xe043,	// (0x00085cce) popup_call_audio_first_window_t1

0xe0ef,	// (0x00085d7a) popup_call_audio_first_window_t4_ParamLimits

0xe0ef,	// (0x00085d7a) popup_call_audio_first_window_t4

0xe17b,	// (0x00085e06) popup_call_audio_first_window_t5_ParamLimits

0xe17b,	// (0x00085e06) popup_call_audio_first_window_t5

0x0002,

0xf157,	// (0x00086de2) popup_call_audio_first_window_t_ParamLimits

0xf157,	// (0x00086de2) popup_call_audio_first_window_t

0xe1aa,	// (0x00085e35) bg_popup_call_pane_cp02

0xe1b4,	// (0x00085e3f) call_type_pane_cp023

0xe1bc,	// (0x00085e47) popup_call_audio_wait_window_g1

0xe1c4,	// (0x00085e4f) popup_call_audio_wait_window_g2

0x0001,

0xf15e,	// (0x00086de9) popup_call_audio_wait_window_g

0xe1cc,	// (0x00085e57) popup_call_audio_wait_window_t3

0xe1da,	// (0x00085e65) bg_popup_call_pane_cp03_ParamLimits

0xe1da,	// (0x00085e65) bg_popup_call_pane_cp03

0xe23a,	// (0x00085ec5) call_thumbnail_pane_cp011_ParamLimits

0xe23a,	// (0x00085ec5) call_thumbnail_pane_cp011

0xe246,	// (0x00085ed1) call_type_pane_cp034_ParamLimits

0xe246,	// (0x00085ed1) call_type_pane_cp034

0xe282,	// (0x00085f0d) popup_call_audio_second_window_g1_ParamLimits

0xe282,	// (0x00085f0d) popup_call_audio_second_window_g1

0xe2be,	// (0x00085f49) popup_call_audio_second_window_g2_ParamLimits

0xe2be,	// (0x00085f49) popup_call_audio_second_window_g2

0x0001,

0xf163,	// (0x00086dee) popup_call_audio_second_window_g_ParamLimits

0xf163,	// (0x00086dee) popup_call_audio_second_window_g

0xe2fa,	// (0x00085f85) popup_call_audio_second_window_t1_ParamLimits

0xe2fa,	// (0x00085f85) popup_call_audio_second_window_t1

0x0967,	// (0x000785f2) popup_call_audio_second_window_t2_ParamLimits

0x0967,	// (0x000785f2) popup_call_audio_second_window_t2

0x099d,	// (0x00078628) popup_call_audio_second_window_t3_ParamLimits

0x099d,	// (0x00078628) popup_call_audio_second_window_t3

0x0002,

0xf168,	// (0x00086df3) popup_call_audio_second_window_t_ParamLimits

0xf168,	// (0x00086df3) popup_call_audio_second_window_t

0xe1aa,	// (0x00085e35) bg_popup_call_pane_cp04

0x09d3,	// (0x0007865e) list_conf_pane

0x09db,	// (0x00078666) popup_call_audio_conf_window_t1

0x09e9,	// (0x00078674) call_thumbnail_pane_g1

0x09f1,	// (0x0007867c) bg_pinb_pane_ParamLimits

0x09f1,	// (0x0007867c) bg_pinb_pane

0x09ff,	// (0x0007868a) find_pinb_pane

0x0a08,	// (0x00078693) listscroll_pinb_pane_ParamLimits

0x0a08,	// (0x00078693) listscroll_pinb_pane

0x0a17,	// (0x000786a2) pinb_bg_pane_g1

0x594f,	// (0x0007d5da) pinb_bg_pane_g2

0x595b,	// (0x0007d5e6) pinb_bg_pane_g3

0x5967,	// (0x0007d5f2) pinb_bg_pane_g4

0x5973,	// (0x0007d5fe) pinb_bg_pane_g5

0x597f,	// (0x0007d60a) pinb_bg_pane_g6

0x598a,	// (0x0007d615) pinb_bg_pane_g7

0x5995,	// (0x0007d620) pinb_bg_pane_g8

0x59a0,	// (0x0007d62b) pinb_bg_pane_g9

0x59aa,	// (0x0007d635) pinb_bg_pane_g10

0x0009,

0xf16f,	// (0x00086dfa) pinb_bg_pane_g

0x59bf,	// (0x0007d64a) grid_pinb_pane

0x59ca,	// (0x0007d655) list_pinb_pane

0x59d5,	// (0x0007d660) scroll_pane_cp01_ParamLimits

0x59d5,	// (0x0007d660) scroll_pane_cp01

0x0a29,	// (0x000786b4) find_pinb_pane_g1_ParamLimits

0x0a29,	// (0x000786b4) find_pinb_pane_g1

0x0a41,	// (0x000786cc) find_pinb_pane_t1

0x0a53,	// (0x000786de) find_pinb_pane_t2

0x0001,

0xf189,	// (0x00086e14) find_pinb_pane_t

0x0a68,	// (0x000786f3) input_focus_pane_cp01_ParamLimits

0x0a68,	// (0x000786f3) input_focus_pane_cp01

0x59e7,	// (0x0007d672) cell_pinb_pane_ParamLimits

0x59e7,	// (0x0007d672) cell_pinb_pane

0x5a15,	// (0x0007d6a0) cell_pinb_pane_g1_ParamLimits

0x5a15,	// (0x0007d6a0) cell_pinb_pane_g1

0x5a2a,	// (0x0007d6b5) cell_pinb_pane_g2_ParamLimits

0x5a2a,	// (0x0007d6b5) cell_pinb_pane_g2

0x0a74,	// (0x000786ff) cell_pinb_pane_g3_ParamLimits

0x0a74,	// (0x000786ff) cell_pinb_pane_g3

0x0002,

0xf18e,	// (0x00086e19) cell_pinb_pane_g_ParamLimits

0xf18e,	// (0x00086e19) cell_pinb_pane_g

0xe1aa,	// (0x00085e35) grid_highlight_pane_cp01

0x5a36,	// (0x0007d6c1) list_pinb_item_pane_ParamLimits

0x5a36,	// (0x0007d6c1) list_pinb_item_pane

0xe1aa,	// (0x00085e35) list_highlight_pane_cp02

0x0a80,	// (0x0007870b) list_pinb_item_pane_g1_ParamLimits

0x0a80,	// (0x0007870b) list_pinb_item_pane_g1

0x0a8d,	// (0x00078718) list_pinb_item_pane_g2_ParamLimits

0x0a8d,	// (0x00078718) list_pinb_item_pane_g2

0x5a60,	// (0x0007d6eb) list_pinb_item_pane_g3_ParamLimits

0x5a60,	// (0x0007d6eb) list_pinb_item_pane_g3

0x0a99,	// (0x00078724) list_pinb_item_pane_g4_ParamLimits

0x0a99,	// (0x00078724) list_pinb_item_pane_g4

0x0003,

0xf195,	// (0x00086e20) list_pinb_item_pane_g_ParamLimits

0xf195,	// (0x00086e20) list_pinb_item_pane_g

0x0aa5,	// (0x00078730) list_pinb_item_pane_t1_ParamLimits

0x0aa5,	// (0x00078730) list_pinb_item_pane_t1

0x5a8b,	// (0x0007d716) calc_display_pane

0x5aa9,	// (0x0007d734) calc_paper_pane

0x5ac5,	// (0x0007d750) grid_calc_pane

0xe1aa,	// (0x00085e35) bg_list_pane_cp01

0x5af1,	// (0x0007d77c) clock_g1

0x5af9,	// (0x0007d784) clock_g2

0x0001,

0xf19e,	// (0x00086e29) clock_g

0x5b03,	// (0x0007d78e) clock_t1_ParamLimits

0x5b03,	// (0x0007d78e) clock_t1

0x5b18,	// (0x0007d7a3) clock_t2_ParamLimits

0x5b18,	// (0x0007d7a3) clock_t2

0x5b2a,	// (0x0007d7b5) clock_t3_ParamLimits

0x5b2a,	// (0x0007d7b5) clock_t3

0x5b3c,	// (0x0007d7c7) clock_t4_ParamLimits

0x5b3c,	// (0x0007d7c7) clock_t4

0x5b4e,	// (0x0007d7d9) clock_t5_ParamLimits

0x5b4e,	// (0x0007d7d9) clock_t5

0x5b63,	// (0x0007d7ee) clock_t6_ParamLimits

0x5b63,	// (0x0007d7ee) clock_t6

0x5b75,	// (0x0007d800) clock_t7_ParamLimits

0x5b75,	// (0x0007d800) clock_t7

0x5b87,	// (0x0007d812) clock_t8_ParamLimits

0x5b87,	// (0x0007d812) clock_t8

0x5b9d,	// (0x0007d828) clock_t9_ParamLimits

0x5b9d,	// (0x0007d828) clock_t9

0x0008,

0xf1a3,	// (0x00086e2e) clock_t_ParamLimits

0xf1a3,	// (0x00086e2e) clock_t

0x0ac4,	// (0x0007874f) popup_clock_analogue_window_cp02

0x0ac4,	// (0x0007874f) popup_clock_digital_window_cp01

0x0acc,	// (0x00078757) listscroll_help_pane

0xe1aa,	// (0x00085e35) phob_pre_status_pane

0x0ad6,	// (0x00078761) grid_qdial_pane

0xe1aa,	// (0x00085e35) listscroll_mce_pane

0x0ae0,	// (0x0007876b) bg_notes_pane

0x0aea,	// (0x00078775) list_notes_pane

0x5bb3,	// (0x0007d83e) scroll_pane_cp06

0x0af4,	// (0x0007877f) bg_calc_paper_pane

0x5bc8,	// (0x0007d853) list_calc_pane

0x0b22,	// (0x000787ad) bg_calc_display_pane

0x5be2,	// (0x0007d86d) calc_display_pane_t1

0x5bf7,	// (0x0007d882) calc_display_pane_t2

0x5c0c,	// (0x0007d897) calc_display_pane_t3

0x0002,

0xf1b6,	// (0x00086e41) calc_display_pane_t

0x5c1e,	// (0x0007d8a9) cell_calc_pane_ParamLimits

0x5c1e,	// (0x0007d8a9) cell_calc_pane

0x0b40,	// (0x000787cb) bg_calc_paper_pane_g1

0x0b58,	// (0x000787e3) bg_calc_paper_pane_g2

0x0b4c,	// (0x000787d7) bg_calc_paper_pane_g3

0x0b70,	// (0x000787fb) bg_calc_paper_pane_g4

0x0b64,	// (0x000787ef) bg_calc_paper_pane_g5

0x5c4b,	// (0x0007d8d6) bg_calc_paper_pane_g6

0x5c5c,	// (0x0007d8e7) bg_calc_paper_pane_g7

0x5c6d,	// (0x0007d8f8) bg_calc_paper_pane_g8

0x0007,

0xf1bd,	// (0x00086e48) bg_calc_paper_pane_g

0x5c7e,	// (0x0007d909) calc_bg_paper_pane_g9

0x5c8f,	// (0x0007d91a) list_calc_item_pane_ParamLimits

0x5c8f,	// (0x0007d91a) list_calc_item_pane

0x0b7c,	// (0x00078807) list_calc_item_pane_g1

0x5cc9,	// (0x0007d954) list_calc_item_pane_t1_ParamLimits

0x5cc9,	// (0x0007d954) list_calc_item_pane_t1

0x5cdb,	// (0x0007d966) list_calc_item_pane_t2_ParamLimits

0x5cdb,	// (0x0007d966) list_calc_item_pane_t2

0x0001,

0xf1ce,	// (0x00086e59) list_calc_item_pane_t_ParamLimits

0xf1ce,	// (0x00086e59) list_calc_item_pane_t

0x0b9b,	// (0x00078826) cell_calc_pane_g1

0x0ba5,	// (0x00078830) grid_highlight_pane_cp02

0x0bda,	// (0x00078865) bg_calc_display_pane_g1

0x5d0b,	// (0x0007d996) bg_calc_display_pane_g2

0x0bc7,	// (0x00078852) bg_calc_display_pane_g3

0x0002,

0xf1d8,	// (0x00086e63) bg_calc_display_pane_g

0x5d15,	// (0x0007d9a0) cell_qdial_pane_ParamLimits

0x5d15,	// (0x0007d9a0) cell_qdial_pane

0x5d29,	// (0x0007d9b4) cell_qdial_pane_g1_ParamLimits

0x5d29,	// (0x0007d9b4) cell_qdial_pane_g1

0x5d36,	// (0x0007d9c1) cell_qdial_pane_g2_ParamLimits

0x5d36,	// (0x0007d9c1) cell_qdial_pane_g2

0x0be3,	// (0x0007886e) cell_qdial_pane_g3_ParamLimits

0x0be3,	// (0x0007886e) cell_qdial_pane_g3

0x0003,

0xf1df,	// (0x00086e6a) cell_qdial_pane_g_ParamLimits

0xf1df,	// (0x00086e6a) cell_qdial_pane_g

0x5d54,	// (0x0007d9df) cell_qdial_pane_t1_ParamLimits

0x5d54,	// (0x0007d9df) cell_qdial_pane_t1

0x5d6c,	// (0x0007d9f7) cell_qdial_pane_t2_ParamLimits

0x5d6c,	// (0x0007d9f7) cell_qdial_pane_t2

0x5d7f,	// (0x0007da0a) cell_qdial_pane_t3_ParamLimits

0x5d7f,	// (0x0007da0a) cell_qdial_pane_t3

0x0002,

0xf1e8,	// (0x00086e73) cell_qdial_pane_t_ParamLimits

0xf1e8,	// (0x00086e73) cell_qdial_pane_t

0xe1aa,	// (0x00085e35) grid_highlight_pane_cp04

0x0bef,	// (0x0007887a) thumbnail_qdial_pane_ParamLimits

0x0bef,	// (0x0007887a) thumbnail_qdial_pane

0x0c4b,	// (0x000788d6) list_help_pane

0x0c54,	// (0x000788df) scroll_pane_cp02

0x5d92,	// (0x0007da1d) help_list_pane_t1_ParamLimits

0x5d92,	// (0x0007da1d) help_list_pane_t1

0x5dd0,	// (0x0007da5b) bg_notes_pane_g2

0x5dd8,	// (0x0007da63) bg_notes_pane_g3

0x5de0,	// (0x0007da6b) notes_bg_pane_g1

0x5de8,	// (0x0007da73) notes_bg_pane_g4

0x5df0,	// (0x0007da7b) notes_bg_pane_g5

0x5df8,	// (0x0007da83) notes_bg_pane_g6

0x5e00,	// (0x0007da8b) notes_bg_pane_g7

0x5e08,	// (0x0007da93) notes_bg_pane_g8

0x5e10,	// (0x0007da9b) notes_bg_pane_g9

0x0006,

0xf206,	// (0x00086e91) notes_bg_pane_g

0x5e18,	// (0x0007daa3) list_notes_text_pane_ParamLimits

0x5e18,	// (0x0007daa3) list_notes_text_pane

0x0ca5,	// (0x00078930) list_notes_text_pane_g1

0x5e48,	// (0x0007dad3) list_notes_text_pane_t1

0x0b22,	// (0x000787ad) listscroll_cale_week_pane

0x5e73,	// (0x0007dafe) bg_cale_heading_pane

0x0cbf,	// (0x0007894a) bg_cale_pane_cp01

0x5e87,	// (0x0007db12) cale_week_corner_pane

0x5e98,	// (0x0007db23) cale_week_day_heading_pane

0x5eac,	// (0x0007db37) cale_week_scroll_pane_g1

0x5ebd,	// (0x0007db48) cale_week_scroll_pane_g2

0x5ece,	// (0x0007db59) cale_week_scroll_pane_g3

0x5edf,	// (0x0007db6a) cale_week_scroll_pane_g4

0x5ef0,	// (0x0007db7b) cale_week_scroll_pane_g5

0x5f01,	// (0x0007db8c) cale_week_scroll_pane_g6

0x5f12,	// (0x0007db9d) cale_week_scroll_pane_g7

0x5f25,	// (0x0007dbb0) cale_week_scroll_pane_g8

0x5f38,	// (0x0007dbc3) cale_week_scroll_pane_g9

0x5f49,	// (0x0007dbd4) cale_week_scroll_pane_g10

0x5f5a,	// (0x0007dbe5) cale_week_scroll_pane_g11

0x5f6b,	// (0x0007dbf6) cale_week_scroll_pane_g12

0x5f7c,	// (0x0007dc07) cale_week_scroll_pane_g13

0x5f8d,	// (0x0007dc18) cale_week_scroll_pane_g14

0x5f9e,	// (0x0007dc29) cale_week_scroll_pane_g15

0x000e,

0xf215,	// (0x00086ea0) cale_week_scroll_pane_g

0x5faf,	// (0x0007dc3a) cale_week_time_pane

0x5fc2,	// (0x0007dc4d) grid_cale_week_pane

0x5fd7,	// (0x0007dc62) scroll_pane_cp08

0x5ff1,	// (0x0007dc7c) cell_cale_week_pane_ParamLimits

0x5ff1,	// (0x0007dc7c) cell_cale_week_pane

0x602d,	// (0x0007dcb8) cale_week_day_heading_pane_t1

0x6041,	// (0x0007dccc) cale_week_day_heading_pane_t2

0x6055,	// (0x0007dce0) cale_week_day_heading_pane_t3

0x6069,	// (0x0007dcf4) cale_week_day_heading_pane_t4

0x607d,	// (0x0007dd08) cale_week_day_heading_pane_t5

0x6091,	// (0x0007dd1c) cale_week_day_heading_pane_t6

0x60a5,	// (0x0007dd30) cale_week_day_heading_pane_t7

0x0006,

0xf234,	// (0x00086ebf) cale_week_day_heading_pane_t

0x0cea,	// (0x00078975) bg_cale_side_pane

0x60b9,	// (0x0007dd44) cale_week_time_pane_t1

0x60d1,	// (0x0007dd5c) cale_week_time_pane_t2

0x60e9,	// (0x0007dd74) cale_week_time_pane_t3

0x6101,	// (0x0007dd8c) cale_week_time_pane_t4

0x6119,	// (0x0007dda4) cale_week_time_pane_t5

0x6131,	// (0x0007ddbc) cale_week_time_pane_t6

0x6149,	// (0x0007ddd4) cale_week_time_pane_t7

0x6161,	// (0x0007ddec) cale_week_time_pane_t8

0x0007,

0xf243,	// (0x00086ece) cale_week_time_pane_t

0x6179,	// (0x0007de04) cell_cale_week_pane_g2

0x6192,	// (0x0007de1d) cell_cale_week_pane_g3_ParamLimits

0x6192,	// (0x0007de1d) cell_cale_week_pane_g3

0x0cf8,	// (0x00078983) grid_highlight_pane_cp07

0x0d00,	// (0x0007898b) listscroll_gms_pane

0x0d0a,	// (0x00078995) grid_gms_pane

0x0d13,	// (0x0007899e) listscroll_gms_pane_g1

0x0d1b,	// (0x000789a6) listscroll_gms_pane_g2

0x0001,

0xf254,	// (0x00086edf) listscroll_gms_pane_g

0x61aa,	// (0x0007de35) scroll_pane_cp010

0x61b5,	// (0x0007de40) cell_gms_pane_ParamLimits

0x61b5,	// (0x0007de40) cell_gms_pane

0x61c7,	// (0x0007de52) cell_gms_pane_g1

0x0d23,	// (0x000789ae) cell_gms_pane_g2

0x0ca5,	// (0x00078930) cell_gms_pane_g3

0x0d2b,	// (0x000789b6) cell_gms_pane_g4

0x0003,

0xf259,	// (0x00086ee4) cell_gms_pane_g

0x0d34,	// (0x000789bf) grid_highlight_pane_cp09

0x8b60,	// (0x000807eb) phob_pre_status_pane_g1

0x8b68,	// (0x000807f3) phob_pre_status_pane_g2

0x8b70,	// (0x000807fb) phob_pre_status_pane_g3

0x8b78,	// (0x00080803) phob_pre_status_pane_g4

0x0004,

0xf648,	// (0x000872d3) phob_pre_status_pane_g

0x8b88,	// (0x00080813) phob_pre_status_pane_t1

0x8b98,	// (0x00080823) phob_pre_status_pane_t2

0x8ba8,	// (0x00080833) phob_pre_status_pane_t3

0x0002,

0xf653,	// (0x000872de) phob_pre_status_pane_t

0xe1aa,	// (0x00085e35) bg_list_pane_cp05

0x61d7,	// (0x0007de62) grid_vorec_pane

0x61df,	// (0x0007de6a) vorec_t1

0x61ed,	// (0x0007de78) vorec_t2

0x61fb,	// (0x0007de86) vorec_t3

0x6209,	// (0x0007de94) vorec_t4

0x6217,	// (0x0007dea2) vorec_t5

0x6225,	// (0x0007deb0) vorec_t6

0x0006,

0xf262,	// (0x00086eed) vorec_t

0x6241,	// (0x0007decc) wait_bar_pane_cp01

0x0db6,	// (0x00078a41) cell_vorec_pane_ParamLimits

0x0db6,	// (0x00078a41) cell_vorec_pane

0x0dc9,	// (0x00078a54) cell_vorec_pane_g1

0xe1aa,	// (0x00085e35) grid_highlight_pane_cp05

0x6259,	// (0x0007dee4) cams_zoom_pane

0x6265,	// (0x0007def0) image_vga_pane

0x6274,	// (0x0007deff) main_camera_pane_g1

0x6282,	// (0x0007df0d) main_camera_pane_g2

0x6290,	// (0x0007df1b) main_camera_pane_g3

0x629c,	// (0x0007df27) main_camera_pane_g4

0x62a8,	// (0x0007df33) main_camera_pane_g5

0x62b4,	// (0x0007df3f) main_camera_pane_g6

0x62c0,	// (0x0007df4b) main_camera_pane_g7

0x0007,

0xf271,	// (0x00086efc) main_camera_pane_g

0x62cc,	// (0x0007df57) main_camera_pane_t1

0x62de,	// (0x0007df69) main_camera_pane_t2

0x0001,

0xf282,	// (0x00086f0d) main_camera_pane_t

0x62ff,	// (0x0007df8a) cams_zoom_pane_cp_ParamLimits

0x62ff,	// (0x0007df8a) cams_zoom_pane_cp

0x6323,	// (0x0007dfae) image_cif_pane_ParamLimits

0x6323,	// (0x0007dfae) image_cif_pane

0x6341,	// (0x0007dfcc) image_subqcif_pane

0x6349,	// (0x0007dfd4) main_video_pane_g1_ParamLimits

0x6349,	// (0x0007dfd4) main_video_pane_g1

0x6369,	// (0x0007dff4) main_video_pane_g2_ParamLimits

0x6369,	// (0x0007dff4) main_video_pane_g2

0x639b,	// (0x0007e026) main_video_pane_g3_ParamLimits

0x639b,	// (0x0007e026) main_video_pane_g3

0x63c6,	// (0x0007e051) main_video_pane_g4_ParamLimits

0x63c6,	// (0x0007e051) main_video_pane_g4

0x63f1,	// (0x0007e07c) main_video_pane_g5_ParamLimits

0x63f1,	// (0x0007e07c) main_video_pane_g5

0x0ddf,	// (0x00078a6a) main_video_pane_g6_ParamLimits

0x0ddf,	// (0x00078a6a) main_video_pane_g6

0x0006,

0xf287,	// (0x00086f12) main_video_pane_g_ParamLimits

0xf287,	// (0x00086f12) main_video_pane_g

0x6415,	// (0x0007e0a0) main_video_pane_t1_ParamLimits

0x6415,	// (0x0007e0a0) main_video_pane_t1

0x0df9,	// (0x00078a84) cams_zoom_pane_g1

0x0e02,	// (0x00078a8d) cams_zoom_pane_g2

0x0e0b,	// (0x00078a96) cams_zoom_pane_g3

0x0e14,	// (0x00078a9f) cams_zoom_pane_g4

0x0003,

0xf296,	// (0x00086f21) cams_zoom_pane_g

0x645f,	// (0x0007e0ea) grid_cams_pane

0x646d,	// (0x0007e0f8) linegrid_cams_pane

0x647b,	// (0x0007e106) cell_cams_pane_ParamLimits

0x647b,	// (0x0007e106) cell_cams_pane

0x0e1d,	// (0x00078aa8) cams_burst_image_pane

0x0e25,	// (0x00078ab0) cell_cams_pane_g1

0xe1aa,	// (0x00085e35) grid_highlight_pane_cp03

0x0b9b,	// (0x00078826) mp_bg_pane_g1

0xe1aa,	// (0x00085e35) bg_list_pane_cp03

0xe561,	// (0x000861ec) bg_mp_pane

0xe569,	// (0x000861f4) grid_mp_pane

0xe571,	// (0x000861fc) media_player_g1

0xe579,	// (0x00086204) media_player_t1

0xe587,	// (0x00086212) media_player_t2

0xe595,	// (0x00086220) media_player_t3

0xe5a3,	// (0x0008622e) media_player_t4

0xe5b1,	// (0x0008623c) media_player_t5

0xe5bf,	// (0x0008624a) media_player_t6

0xe5cd,	// (0x00086258) media_player_t7

0x0006,

0xf632,	// (0x000872bd) media_player_t

0xe5db,	// (0x00086266) wait_bar_pane_cp02

0xf617,	// (0x000872a2) main_usb_pane_t

0x8b57,	// (0x000807e2) cell_mp_pane

0x0b9b,	// (0x00078826) cell_mp_pane_g1

0xe1aa,	// (0x00085e35) grid_highlight_pane_cp06

0x0eeb,	// (0x00078b76) grid_skin_colour_pane

0x0ef3,	// (0x00078b7e) list_highlight_pane_cp03

0x64de,	// (0x0007e169) skin_g1

0x0efb,	// (0x00078b86) skin_t1

0x0f0a,	// (0x00078b95) skin_t2

0x0001,

0xf2cb,	// (0x00086f56) skin_t

0x64e8,	// (0x0007e173) cell_skin_colour_pane_ParamLimits

0x64e8,	// (0x0007e173) cell_skin_colour_pane

0x0f18,	// (0x00078ba3) cell_skin_colour_pane_g1

0x653f,	// (0x0007e1ca) call_video_g1_ParamLimits

0x653f,	// (0x0007e1ca) call_video_g1

0x654f,	// (0x0007e1da) call_video_g2_ParamLimits

0x654f,	// (0x0007e1da) call_video_g2

0x0001,

0xf2d0,	// (0x00086f5b) call_video_g_ParamLimits

0xf2d0,	// (0x00086f5b) call_video_g

0x658f,	// (0x0007e21a) call_video_uplink_pane_cp1_ParamLimits

0x658f,	// (0x0007e21a) call_video_uplink_pane_cp1

0x0f32,	// (0x00078bbd) call_video_uplink_pane_cp2

0x663b,	// (0x0007e2c6) video_down_crop_pane_ParamLimits

0x663b,	// (0x0007e2c6) video_down_crop_pane

0x6713,	// (0x0007e39e) video_down_pane_ParamLimits

0x6713,	// (0x0007e39e) video_down_pane

0x0f3a,	// (0x00078bc5) video_down_subqcif_pane_ParamLimits

0x0f3a,	// (0x00078bc5) video_down_subqcif_pane

0x0f52,	// (0x00078bdd) video_down_subqcif_pane_cp_ParamLimits

0x0f52,	// (0x00078bdd) video_down_subqcif_pane_cp

0x0f76,	// (0x00078c01) im_reading_pane_ParamLimits

0x0f76,	// (0x00078c01) im_reading_pane

0x67f5,	// (0x0007e480) im_writing_pane_ParamLimits

0x67f5,	// (0x0007e480) im_writing_pane

0x6813,	// (0x0007e49e) im_reading_pane_t1

0x0f90,	// (0x00078c1b) list_im_pane

0x0fa1,	// (0x00078c2c) scroll_pane_cp07

0x6873,	// (0x0007e4fe) im_writing_pane_t1_ParamLimits

0x6873,	// (0x0007e4fe) im_writing_pane_t1

0x0fba,	// (0x00078c45) im_writing_pane_t2_ParamLimits

0x0fba,	// (0x00078c45) im_writing_pane_t2

0x0001,

0xf2da,	// (0x00086f65) im_writing_pane_t_ParamLimits

0xf2da,	// (0x00086f65) im_writing_pane_t

0xe1aa,	// (0x00085e35) input_focus_pane_cp04

0xe1aa,	// (0x00085e35) input_focus_pane_cp05

0x6885,	// (0x0007e510) list_im_single_pane_ParamLimits

0x6885,	// (0x0007e510) list_im_single_pane

0x68b1,	// (0x0007e53c) list_single_im_pane_t1

0x8b1b,	// (0x000807a6) blid_accuracy_pane

0x8b23,	// (0x000807ae) blid_compass_pane

0x8b2d,	// (0x000807b8) main_location_t1

0x8b3b,	// (0x000807c6) main_location_t2

0x8b49,	// (0x000807d4) main_location_t3

0x0002,

0xf641,	// (0x000872cc) main_location_t

0xe1aa,	// (0x00085e35) aid_levels_location

0x0b9b,	// (0x00078826) blid_accuracy_pane_g1

0x0b9b,	// (0x00078826) blid_accuracy_pane_g2

0x0001,

0xf33c,	// (0x00086fc7) blid_accuracy_pane_g

0x1002,	// (0x00078c8d) wml_content_pane

0x1040,	// (0x00078ccb) wml_button_pane_ParamLimits

0x1040,	// (0x00078ccb) wml_button_pane

0x68c0,	// (0x0007e54b) wml_list_single_large_pane_ParamLimits

0x68c0,	// (0x0007e54b) wml_list_single_large_pane

0x68f2,	// (0x0007e57d) wml_list_single_medium_pane_ParamLimits

0x68f2,	// (0x0007e57d) wml_list_single_medium_pane

0x692b,	// (0x0007e5b6) wml_list_single_small_pane_ParamLimits

0x692b,	// (0x0007e5b6) wml_list_single_small_pane

0x1054,	// (0x00078cdf) wml_selection_box_pane_ParamLimits

0x1054,	// (0x00078cdf) wml_selection_box_pane

0x1067,	// (0x00078cf2) wml_list_single_pane_t1

0x1076,	// (0x00078d01) wml_list_single_medium_pane_t1

0x1085,	// (0x00078d10) wml_list_single_large_pane_t1

0x1094,	// (0x00078d1f) input_focus_pane_cp02_ParamLimits

0x1094,	// (0x00078d1f) input_focus_pane_cp02

0x10a7,	// (0x00078d32) wml_selection_box_pane_g1

0x10b0,	// (0x00078d3b) wml_selection_box_pane_t1_ParamLimits

0x10b0,	// (0x00078d3b) wml_selection_box_pane_t1

0x09f1,	// (0x0007867c) bg_wml_button_pane_ParamLimits

0x09f1,	// (0x0007867c) bg_wml_button_pane

0x10c8,	// (0x00078d53) wml_button_pane_g1

0x10d0,	// (0x00078d5b) wml_button_pane_t1

0x10c8,	// (0x00078d53) wml_button_bg_pane_g1

0x10e0,	// (0x00078d6b) wml_button_bg_pane_g2

0x10e8,	// (0x00078d73) wml_button_bg_pane_g3

0x10f0,	// (0x00078d7b) wml_button_bg_pane_g4

0x10f8,	// (0x00078d83) wml_button_bg_pane_g5

0x1100,	// (0x00078d8b) wml_button_bg_pane_g6

0x1108,	// (0x00078d93) wml_button_bg_pane_g7

0x1110,	// (0x00078d9b) wml_button_bg_pane_g8

0x1118,	// (0x00078da3) wml_button_bg_pane_g9

0x0008,

0xf2df,	// (0x00086f6a) wml_button_bg_pane_g

0x6973,	// (0x0007e5fe) bg_list_pane_cp02

0x1120,	// (0x00078dab) mce_header_pane_ParamLimits

0x1120,	// (0x00078dab) mce_header_pane

0x1136,	// (0x00078dc1) mce_icon_pane

0x1136,	// (0x00078dc1) mce_image_pane

0x113f,	// (0x00078dca) mce_text_pane_ParamLimits

0x113f,	// (0x00078dca) mce_text_pane

0x697d,	// (0x0007e608) scroll_pane_cp03

0x1038,	// (0x00078cc3) scroll_pane_cp04

0x1152,	// (0x00078ddd) scroll_pane_cp05_ParamLimits

0x1152,	// (0x00078ddd) scroll_pane_cp05

0x6987,	// (0x0007e612) mce_header_field_pane_ParamLimits

0x6987,	// (0x0007e612) mce_header_field_pane

0x69a7,	// (0x0007e632) mce_header_field_pane_2_ParamLimits

0x69a7,	// (0x0007e632) mce_header_field_pane_2

0x69bd,	// (0x0007e648) mce_header_field_pane_3

0x69c5,	// (0x0007e650) list_single_mce_message_pane_ParamLimits

0x69c5,	// (0x0007e650) list_single_mce_message_pane

0x69f5,	// (0x0007e680) list_single_mce_smart_pane_ParamLimits

0x69f5,	// (0x0007e680) list_single_mce_smart_pane

0x115e,	// (0x00078de9) input_focus_pane_cp03

0x1167,	// (0x00078df2) list_header_data_pane

0x6a30,	// (0x0007e6bb) mce_header_field_pane_t1

0x6a40,	// (0x0007e6cb) list_single_mce_header_pane_ParamLimits

0x6a40,	// (0x0007e6cb) list_single_mce_header_pane

0x116f,	// (0x00078dfa) list_single_mce_header_pane_t1

0x117e,	// (0x00078e09) list_single_mce_message_pane_g1

0x1186,	// (0x00078e11) list_single_mce_message_pane_t1

0x6a92,	// (0x0007e71d) bg_cale_heading_pane_cp01_ParamLimits

0x6a92,	// (0x0007e71d) bg_cale_heading_pane_cp01

0x1194,	// (0x00078e1f) bg_cale_pane_cp02_ParamLimits

0x1194,	// (0x00078e1f) bg_cale_pane_cp02

0x6ab5,	// (0x0007e740) cale_month_corner_pane

0x6acb,	// (0x0007e756) cale_month_day_heading_pane_ParamLimits

0x6acb,	// (0x0007e756) cale_month_day_heading_pane

0x6afe,	// (0x0007e789) cale_month_pane_g1_ParamLimits

0x6afe,	// (0x0007e789) cale_month_pane_g1

0x6b1a,	// (0x0007e7a5) cale_month_pane_g2_ParamLimits

0x6b1a,	// (0x0007e7a5) cale_month_pane_g2

0x6b35,	// (0x0007e7c0) cale_month_pane_g3_ParamLimits

0x6b35,	// (0x0007e7c0) cale_month_pane_g3

0x6b61,	// (0x0007e7ec) cale_month_pane_g4_ParamLimits

0x6b61,	// (0x0007e7ec) cale_month_pane_g4

0x6b8d,	// (0x0007e818) cale_month_pane_g5_ParamLimits

0x6b8d,	// (0x0007e818) cale_month_pane_g5

0x6bb9,	// (0x0007e844) cale_month_pane_g6_ParamLimits

0x6bb9,	// (0x0007e844) cale_month_pane_g6

0x6be5,	// (0x0007e870) cale_month_pane_g7_ParamLimits

0x6be5,	// (0x0007e870) cale_month_pane_g7

0x6c21,	// (0x0007e8ac) cale_month_pane_g8_ParamLimits

0x6c21,	// (0x0007e8ac) cale_month_pane_g8

0x6c5d,	// (0x0007e8e8) cale_month_pane_g9_ParamLimits

0x6c5d,	// (0x0007e8e8) cale_month_pane_g9

0x6c97,	// (0x0007e922) cale_month_pane_g10_ParamLimits

0x6c97,	// (0x0007e922) cale_month_pane_g10

0x6cd1,	// (0x0007e95c) cale_month_pane_g11_ParamLimits

0x6cd1,	// (0x0007e95c) cale_month_pane_g11

0x6d0b,	// (0x0007e996) cale_month_pane_g12_ParamLimits

0x6d0b,	// (0x0007e996) cale_month_pane_g12

0x6d45,	// (0x0007e9d0) cale_month_pane_g13_ParamLimits

0x6d45,	// (0x0007e9d0) cale_month_pane_g13

0x000c,

0xf2f2,	// (0x00086f7d) cale_month_pane_g_ParamLimits

0xf2f2,	// (0x00086f7d) cale_month_pane_g

0x6d7f,	// (0x0007ea0a) cale_month_week_pane

0x6d92,	// (0x0007ea1d) grid_cale_month_pane_ParamLimits

0x6d92,	// (0x0007ea1d) grid_cale_month_pane

0x6dc0,	// (0x0007ea4b) cale_month_day_heading_pane_t1

0x6e1e,	// (0x0007eaa9) cale_month_day_heading_pane_t2

0x6e83,	// (0x0007eb0e) cale_month_day_heading_pane_t3

0x6ee8,	// (0x0007eb73) cale_month_day_heading_pane_t4

0x6f4d,	// (0x0007ebd8) cale_month_day_heading_pane_t5

0x6fb2,	// (0x0007ec3d) cale_month_day_heading_pane_t6

0x701f,	// (0x0007ecaa) cale_month_day_heading_pane_t7

0x0006,

0xf30d,	// (0x00086f98) cale_month_day_heading_pane_t

0x0cea,	// (0x00078975) bg_cale_side_pane_cp01

0x7094,	// (0x0007ed1f) cale_month_week_pane_t1

0x70ab,	// (0x0007ed36) cale_month_week_pane_t2

0x70c2,	// (0x0007ed4d) cale_month_week_pane_t3

0x70d9,	// (0x0007ed64) cale_month_week_pane_t4

0x70f0,	// (0x0007ed7b) cale_month_week_pane_t5

0x7107,	// (0x0007ed92) cale_month_week_pane_t6

0x0005,

0xf31c,	// (0x00086fa7) cale_month_week_pane_t

0x711e,	// (0x0007eda9) cell_cale_month_pane_ParamLimits

0x711e,	// (0x0007eda9) cell_cale_month_pane

0x71d4,	// (0x0007ee5f) cell_cale_month_pane_g1

0x71e0,	// (0x0007ee6b) cell_cale_month_pane_t1_ParamLimits

0x71e0,	// (0x0007ee6b) cell_cale_month_pane_t1

0x0cf8,	// (0x00078983) grid_highlight_pane_cp08

0x0b9b,	// (0x00078826) main_smil_g1

0x71fc,	// (0x0007ee87) smil_status_pane

0x11ff,	// (0x00078e8a) smil_text_pane

0xe481,	// (0x0008610c) bg_popup_call3_rect_pane_g8

0xe489,	// (0x00086114) bg_popup_call3_rect_pane_g9

0x0008,

0xf5d5,	// (0x00087260) bg_popup_call3_rect_pane_g

0xe711,	// (0x0008639c) smil_status_volume_pane_g1

0x1209,	// (0x00078e94) smil_status_pane_t1

0x8eff,	// (0x00080b8a) volume_smil_pane

0x1220,	// (0x00078eab) list_smil_text_pane

0x720f,	// (0x0007ee9a) scroll_pane_cp011

0x721a,	// (0x0007eea5) smil_text_list_pane_t1_ParamLimits

0x721a,	// (0x0007eea5) smil_text_list_pane_t1

0x72c5,	// (0x0007ef50) aid_volume_smil_ParamLimits

0x72c5,	// (0x0007ef50) aid_volume_smil

0x0b9b,	// (0x00078826) smil_volume_pane_g1

0x0b9b,	// (0x00078826) smil_volume_pane_g2

0x0001,

0xf33c,	// (0x00086fc7) smil_volume_pane_g

0x0b22,	// (0x000787ad) listscroll_cale_day_pane

0x124c,	// (0x00078ed7) bg_cale_pane

0x1264,	// (0x00078eef) list_cale_pane

0x1275,	// (0x00078f00) scroll_pane_cp09

0x1286,	// (0x00078f11) cale_bg_pane_g1

0x128e,	// (0x00078f19) cale_bg_pane_g2

0x1296,	// (0x00078f21) cale_bg_pane_g3

0x129e,	// (0x00078f29) cale_bg_pane_g4

0x12a6,	// (0x00078f31) cale_bg_pane_g5

0x12ae,	// (0x00078f39) cale_bg_pane_g6

0x12b6,	// (0x00078f41) cale_bg_pane_g7

0x12be,	// (0x00078f49) cale_bg_pane_g8

0x12c6,	// (0x00078f51) cale_bg_pane_g9

0x0008,

0xf341,	// (0x00086fcc) cale_bg_pane_g

0x72e7,	// (0x0007ef72) list_cale_time_pane_ParamLimits

0x72e7,	// (0x0007ef72) list_cale_time_pane

0x7308,	// (0x0007ef93) list_cale_time_pane_g1_ParamLimits

0x7308,	// (0x0007ef93) list_cale_time_pane_g1

0x12ce,	// (0x00078f59) list_cale_time_pane_g2_ParamLimits

0x12ce,	// (0x00078f59) list_cale_time_pane_g2

0x7314,	// (0x0007ef9f) list_cale_time_pane_g3_ParamLimits

0x7314,	// (0x0007ef9f) list_cale_time_pane_g3

0x7330,	// (0x0007efbb) list_cale_time_pane_g4_ParamLimits

0x7330,	// (0x0007efbb) list_cale_time_pane_g4

0x733e,	// (0x0007efc9) list_cale_time_pane_g5_ParamLimits

0x733e,	// (0x0007efc9) list_cale_time_pane_g5

0x0005,

0xf354,	// (0x00086fdf) list_cale_time_pane_g_ParamLimits

0xf354,	// (0x00086fdf) list_cale_time_pane_g

0x734c,	// (0x0007efd7) list_cale_time_pane_t1_ParamLimits

0x734c,	// (0x0007efd7) list_cale_time_pane_t1

0x7374,	// (0x0007efff) list_cale_time_pane_t2_ParamLimits

0x7374,	// (0x0007efff) list_cale_time_pane_t2

0x76c2,	// (0x0007f34d) aid_blid_cardinal_pane

0x7704,	// (0x0007f38f) compass_pane_t4

0x739c,	// (0x0007f027) list_cale_time_pane_t4_ParamLimits

0x739c,	// (0x0007f027) list_cale_time_pane_t4

0x7712,	// (0x0007f39d) compass_pane_t5

0x7722,	// (0x0007f3ad) compass_pane_t6

0x7730,	// (0x0007f3bb) compass_pane_t7

0x17e2,	// (0x0007946d) navi_pane_cc_t1

0x1949,	// (0x000795d4) aid_phob_thumbnail_center_pane

0x7eea,	// (0x0007fb75) main_postcard_pane_g4_ParamLimits

0x0002,

0xf361,	// (0x00086fec) list_cale_time_pane_t_ParamLimits

0xf361,	// (0x00086fec) list_cale_time_pane_t

0xde03,	// (0x00085a8e) bg_popup_window_pane_cp02_ParamLimits

0xde03,	// (0x00085a8e) bg_popup_window_pane_cp02

0x12e8,	// (0x00078f73) heading_pane_cp01_ParamLimits

0x12e8,	// (0x00078f73) heading_pane_cp01

0x12f4,	// (0x00078f7f) loc_req_pane_ParamLimits

0x12f4,	// (0x00078f7f) loc_req_pane

0x1304,	// (0x00078f8f) loc_type_pane_ParamLimits

0x1304,	// (0x00078f8f) loc_type_pane

0x1316,	// (0x00078fa1) loc_type_pane_t1_ParamLimits

0x1316,	// (0x00078fa1) loc_type_pane_t1

0x1328,	// (0x00078fb3) loc_type_pane_t2_ParamLimits

0x1328,	// (0x00078fb3) loc_type_pane_t2

0x133a,	// (0x00078fc5) loc_type_pane_t3_ParamLimits

0x133a,	// (0x00078fc5) loc_type_pane_t3

0x0002,

0xf368,	// (0x00086ff3) loc_type_pane_t_ParamLimits

0xf368,	// (0x00086ff3) loc_type_pane_t

0x134c,	// (0x00078fd7) list_loc_req_pane

0x1356,	// (0x00078fe1) scroll_pane_cp012

0x73c4,	// (0x0007f04f) list_single_loc_request_popup_menu_pane_ParamLimits

0x73c4,	// (0x0007f04f) list_single_loc_request_popup_menu_pane

0x1361,	// (0x00078fec) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0x1361,	// (0x00078fec) list_single_loc_request_popup_menu_pane_g1

0x136d,	// (0x00078ff8) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0x136d,	// (0x00078ff8) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf36f,	// (0x00086ffa) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf36f,	// (0x00086ffa) list_single_loc_request_popup_menu_pane_g

0x1379,	// (0x00079004) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0x1379,	// (0x00079004) list_single_loc_request_popup_menu_pane_t1

0x73d6,	// (0x0007f061) bg_popup_window_pane_cp03_ParamLimits

0x73d6,	// (0x0007f061) bg_popup_window_pane_cp03

0x73e4,	// (0x0007f06f) heading_loc_req_pane_ParamLimits

0x73e4,	// (0x0007f06f) heading_loc_req_pane

0x73f0,	// (0x0007f07b) popup_dyc_status_message_window_g1_ParamLimits

0x73f0,	// (0x0007f07b) popup_dyc_status_message_window_g1

0x73fc,	// (0x0007f087) popup_dyc_status_message_window_t1_ParamLimits

0x73fc,	// (0x0007f087) popup_dyc_status_message_window_t1

0x740e,	// (0x0007f099) popup_dyc_status_message_window_t2_ParamLimits

0x740e,	// (0x0007f099) popup_dyc_status_message_window_t2

0x7420,	// (0x0007f0ab) popup_dyc_status_message_window_t3_ParamLimits

0x7420,	// (0x0007f0ab) popup_dyc_status_message_window_t3

0x0002,

0xf374,	// (0x00086fff) popup_dyc_status_message_window_t_ParamLimits

0xf374,	// (0x00086fff) popup_dyc_status_message_window_t

0xe1aa,	// (0x00085e35) bg_heading_pane_cp01

0x138f,	// (0x0007901a) heading_loc_req_pane_g1

0x1397,	// (0x00079022) heading_loc_req_pane_g2

0x139f,	// (0x0007902a) heading_loc_req_pane_g3

0x0002,

0xf37b,	// (0x00087006) heading_loc_req_pane_g

0x13a7,	// (0x00079032) heading_loc_req_pane_t1

0x142d,	// (0x000790b8) bg_popup_sub_pane_cp01_ParamLimits

0x142d,	// (0x000790b8) bg_popup_sub_pane_cp01

0x143b,	// (0x000790c6) popup_cale_events_window_g1_ParamLimits

0x143b,	// (0x000790c6) popup_cale_events_window_g1

0x145b,	// (0x000790e6) popup_cale_events_window_g2_ParamLimits

0x145b,	// (0x000790e6) popup_cale_events_window_g2

0x0001,

0xf3af,	// (0x0008703a) popup_cale_events_window_g_ParamLimits

0xf3af,	// (0x0008703a) popup_cale_events_window_g

0x147b,	// (0x00079106) popup_cale_events_window_t1_ParamLimits

0x147b,	// (0x00079106) popup_cale_events_window_t1

0x148d,	// (0x00079118) popup_cale_events_window_t2_ParamLimits

0x148d,	// (0x00079118) popup_cale_events_window_t2

0x14cb,	// (0x00079156) popup_cale_events_window_t3_ParamLimits

0x14cb,	// (0x00079156) popup_cale_events_window_t3

0x1505,	// (0x00079190) popup_cale_events_window_t4_ParamLimits

0x1505,	// (0x00079190) popup_cale_events_window_t4

0x0003,

0xf3b4,	// (0x0008703f) popup_cale_events_window_t_ParamLimits

0xf3b4,	// (0x0008703f) popup_cale_events_window_t

0x74a4,	// (0x0007f12f) call_type_pane

0x1961,	// (0x000795ec) popup_call_status_window_g1

0x74b0,	// (0x0007f13b) popup_call_status_window_g2

0x74bc,	// (0x0007f147) popup_call_status_window_g3

0x0002,

0xf3bd,	// (0x00087048) popup_call_status_window_g

0x153b,	// (0x000791c6) call_type_pane_g1

0x1544,	// (0x000791cf) call_type_pane_g2

0x0001,

0xf3c4,	// (0x0008704f) call_type_pane_g

0xe1aa,	// (0x00085e35) bg_popup_sub_pane_cp02

0x154d,	// (0x000791d8) listscroll_popup_wml_pane

0x1555,	// (0x000791e0) list_wml_pane

0x155f,	// (0x000791ea) scroll_pane_cp013

0x156a,	// (0x000791f5) list_single_graphic_popup_wml_pane_ParamLimits

0x156a,	// (0x000791f5) list_single_graphic_popup_wml_pane

0x0b9b,	// (0x00078826) list_single_graphic_popup_wml_pane_g1

0x157e,	// (0x00079209) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf3c9,	// (0x00087054) list_single_graphic_popup_wml_pane_g

0x1586,	// (0x00079211) list_single_graphic_popup_wml_pane_t1

0x1594,	// (0x0007921f) aid_call_pane

0x09e9,	// (0x00078674) popup_clock_analogue_window_g1

0x09e9,	// (0x00078674) popup_clock_analogue_window_g2

0x74c8,	// (0x0007f153) popup_clock_analogue_window_g3

0x74c8,	// (0x0007f153) popup_clock_analogue_window_g4

0x0b9b,	// (0x00078826) popup_clock_analogue_window_g5

0x0004,

0xf3ce,	// (0x00087059) popup_clock_analogue_window_g

0x74d0,	// (0x0007f15b) popup_clock_analogue_window_t1

0x74de,	// (0x0007f169) clock_digital_number_pane_ParamLimits

0x74de,	// (0x0007f169) clock_digital_number_pane

0x74ea,	// (0x0007f175) clock_digital_number_pane_cp02_ParamLimits

0x74ea,	// (0x0007f175) clock_digital_number_pane_cp02

0x74f6,	// (0x0007f181) clock_digital_number_pane_cp03_ParamLimits

0x74f6,	// (0x0007f181) clock_digital_number_pane_cp03

0x7502,	// (0x0007f18d) clock_digital_number_pane_cp04_ParamLimits

0x7502,	// (0x0007f18d) clock_digital_number_pane_cp04

0x750e,	// (0x0007f199) clock_digital_separator_pane_ParamLimits

0x750e,	// (0x0007f199) clock_digital_separator_pane

0x751a,	// (0x0007f1a5) popup_clock_digital_window_t1

0x0b9b,	// (0x00078826) clock_digital_number_pane_g1

0x0b9b,	// (0x00078826) clock_digital_number_pane_g2

0x0001,

0xf33c,	// (0x00086fc7) clock_digital_number_pane_g

0x0b9b,	// (0x00078826) clock_digital_separator_pane_g1

0x0b9b,	// (0x00078826) clock_digital_separator_pane_g2

0x0001,

0xf33c,	// (0x00086fc7) clock_digital_separator_pane_g

0xe1aa,	// (0x00085e35) bg_popup_window_pane_cp04

0x1613,	// (0x0007929e) heading_pane_cp03

0x161b,	// (0x000792a6) listscroll_popup_gms_pane

0x1623,	// (0x000792ae) grid_large_graphic_popup_pane

0x162d,	// (0x000792b8) listscroll_popup_gms_pane_g1

0x1635,	// (0x000792c0) listscroll_popup_gms_pane_g2

0x0001,

0xf3d9,	// (0x00087064) listscroll_popup_gms_pane_g

0x1038,	// (0x00078cc3) scroll_pane_cp014

0x163d,	// (0x000792c8) cell_large_graphic_popup_pane_ParamLimits

0x163d,	// (0x000792c8) cell_large_graphic_popup_pane

0x1655,	// (0x000792e0) cell_large_graphic_popup_pane_g1_ParamLimits

0x1655,	// (0x000792e0) cell_large_graphic_popup_pane_g1

0x1661,	// (0x000792ec) cell_large_graphic_popup_pane_g2_ParamLimits

0x1661,	// (0x000792ec) cell_large_graphic_popup_pane_g2

0x166d,	// (0x000792f8) cell_large_graphic_popup_pane_g3_ParamLimits

0x166d,	// (0x000792f8) cell_large_graphic_popup_pane_g3

0x167a,	// (0x00079305) cell_large_graphic_popup_pane_g4_ParamLimits

0x167a,	// (0x00079305) cell_large_graphic_popup_pane_g4

0x0003,

0xf3de,	// (0x00087069) cell_large_graphic_popup_pane_g_ParamLimits

0xf3de,	// (0x00087069) cell_large_graphic_popup_pane_g

0x168a,	// (0x00079315) grid_highlight_pane_cp010

0x0b9b,	// (0x00078826) bg_popup_call_pane_g1

0x1694,	// (0x0007931f) list_single_graphic_popup_conf_pane_ParamLimits

0x1694,	// (0x0007931f) list_single_graphic_popup_conf_pane

0x16a6,	// (0x00079331) list_highlight_pane_cp01

0x16af,	// (0x0007933a) list_single_graphic_popup_conf_pane_g1

0x16b7,	// (0x00079342) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf3e7,	// (0x00087072) list_single_graphic_popup_conf_pane_g

0x16bf,	// (0x0007934a) list_single_graphic_popup_conf_pane_t1

0x16cd,	// (0x00079358) linegrid_cams_pane_g1

0x7537,	// (0x0007f1c2) linegrid_cams_pane_g2

0x0ca5,	// (0x00078930) linegrid_cams_pane_g3

0x16d6,	// (0x00079361) linegrid_cams_pane_g4

0x7540,	// (0x0007f1cb) linegrid_cams_pane_g5

0x7549,	// (0x0007f1d4) linegrid_cams_pane_g6

0x0d2b,	// (0x000789b6) linegrid_cams_pane_g7

0x0006,

0xf3ec,	// (0x00087077) linegrid_cams_pane_g

0x16df,	// (0x0007936a) popup_clock_analogue_window

0x16df,	// (0x0007936a) popup_clock_digital_window

0xe1aa,	// (0x00085e35) popup_phob_thumbnail_window

0x0b9b,	// (0x00078826) call_video_uplink_pane_g1

0x16e8,	// (0x00079373) call_video_uplink_pane_g2

0x0001,

0xf3fb,	// (0x00087086) call_video_uplink_pane_g

0x0cf8,	// (0x00078983) video_uplink_pane

0x16f0,	// (0x0007937b) mce_image_pane_g1

0x7552,	// (0x0007f1dd) mce_image_pane_g2

0x755a,	// (0x0007f1e5) mce_image_pane_g3

0x7562,	// (0x0007f1ed) mce_image_pane_g4

0x756a,	// (0x0007f1f5) mce_image_pane_g5

0x0004,

0xf400,	// (0x0008708b) mce_image_pane_g

0x16fa,	// (0x00079385) control_top_pane_stacon_cp01_ParamLimits

0x16fa,	// (0x00079385) control_top_pane_stacon_cp01

0x170e,	// (0x00079399) uni_indicator_pane_stacon_cp01_ParamLimits

0x170e,	// (0x00079399) uni_indicator_pane_stacon_cp01

0x171f,	// (0x000793aa) bg_popup_sub_pane_cp03

0x7572,	// (0x0007f1fd) chi_dic_find_pane

0x757a,	// (0x0007f205) listscroll_chi_dic_pane

0x7583,	// (0x0007f20e) main_pane_chidic_g1

0x7596,	// (0x0007f221) chi_dic_find_pane_t1

0x1729,	// (0x000793b4) find_chidic_pane

0x1732,	// (0x000793bd) chi_dic_list_pane_ParamLimits

0x1732,	// (0x000793bd) chi_dic_list_pane

0x1743,	// (0x000793ce) scroll_pane_cp020

0x75a4,	// (0x0007f22f) find_chidic_pane_t1

0xe1aa,	// (0x00085e35) input_focus_pane_cp06

0x75b3,	// (0x0007f23e) list_chi_dic_pane_ParamLimits

0x75b3,	// (0x0007f23e) list_chi_dic_pane

0x174b,	// (0x000793d6) list_chi_dic_pane_t1_ParamLimits

0x174b,	// (0x000793d6) list_chi_dic_pane_t1

0xe1aa,	// (0x00085e35) list_highlight_pane_cp020

0x175e,	// (0x000793e9) bg_cale_heading_pane_g1

0x75d4,	// (0x0007f25f) bg_cale_heading_pane_g2

0x75dc,	// (0x0007f267) bg_cale_heading_pane_g3

0x75e4,	// (0x0007f26f) bg_cale_heading_pane_g4

0x75ee,	// (0x0007f279) bg_cale_heading_pane_g5

0x75f8,	// (0x0007f283) bg_cale_heading_pane_g6

0x7600,	// (0x0007f28b) bg_cale_heading_pane_g7

0x7608,	// (0x0007f293) bg_cale_heading_pane_g8

0x7612,	// (0x0007f29d) bg_cale_heading_pane_g9

0x0008,

0xf40b,	// (0x00087096) bg_cale_heading_pane_g

0x175e,	// (0x000793e9) bg_cale_side_pane_g1

0x761c,	// (0x0007f2a7) bg_cale_side_pane_g2

0x7624,	// (0x0007f2af) bg_cale_side_pane_g3

0x762c,	// (0x0007f2b7) bg_cale_side_pane_g4

0x7634,	// (0x0007f2bf) bg_cale_side_pane_g5

0x763c,	// (0x0007f2c7) bg_cale_side_pane_g6

0x7644,	// (0x0007f2cf) bg_cale_side_pane_g7

0x764c,	// (0x0007f2d7) bg_cale_side_pane_g8

0x7654,	// (0x0007f2df) bg_cale_side_pane_g9

0x0008,

0xf41e,	// (0x000870a9) bg_cale_side_pane_g

0x765c,	// (0x0007f2e7) popup_call_status_window_ParamLimits

0x765c,	// (0x0007f2e7) popup_call_status_window

0x1766,	// (0x000793f1) stacon_top_pane

0x176e,	// (0x000793f9) status_pane_ParamLimits

0x176e,	// (0x000793f9) status_pane

0x1783,	// (0x0007940e) status_small_pane

0x178b,	// (0x00079416) control_pane

0xe1aa,	// (0x00085e35) stacon_bottom_pane

0x1793,	// (0x0007941e) list_single_mce_smart_pane_t1_ParamLimits

0x1793,	// (0x0007941e) list_single_mce_smart_pane_t1

0x17a6,	// (0x00079431) list_single_mce_smart_pane_t2_ParamLimits

0x17a6,	// (0x00079431) list_single_mce_smart_pane_t2

0x0001,

0xf431,	// (0x000870bc) list_single_mce_smart_pane_t_ParamLimits

0xf431,	// (0x000870bc) list_single_mce_smart_pane_t

0x7668,	// (0x0007f2f3) compass_pane

0x7674,	// (0x0007f2ff) main_location2_pane_t1

0x7688,	// (0x0007f313) main_location2_pane_t2

0x769c,	// (0x0007f327) main_location2_pane_t3

0x0003,

0xf436,	// (0x000870c1) main_location2_pane_t

0x17c5,	// (0x00079450) compass_pane_g1_ParamLimits

0x17c5,	// (0x00079450) compass_pane_g1

0x76e6,	// (0x0007f371) compass_pane_t1

0x76f5,	// (0x0007f380) compass_pane_t2

0x0005,

0xf43f,	// (0x000870ca) compass_pane_t

0x7740,	// (0x0007f3cb) text_secondary_cp61

0x17d9,	// (0x00079464) navi_pane_cams_g5

0x17fc,	// (0x00079487) navi_pane_im_t1

0x180a,	// (0x00079495) navi_pane_mp_g1_ParamLimits

0x180a,	// (0x00079495) navi_pane_mp_g1

0x181e,	// (0x000794a9) navi_pane_mp_g2_ParamLimits

0x181e,	// (0x000794a9) navi_pane_mp_g2

0x182a,	// (0x000794b5) navi_pane_mp_g3_ParamLimits

0x182a,	// (0x000794b5) navi_pane_mp_g3

0x0002,

0xf453,	// (0x000870de) navi_pane_mp_g_ParamLimits

0xf453,	// (0x000870de) navi_pane_mp_g

0x1836,	// (0x000794c1) navi_pane_mp_t1

0x1844,	// (0x000794cf) navi_pane_mp_t2

0x0002,

0xf45a,	// (0x000870e5) navi_pane_mp_t

0x1880,	// (0x0007950b) navi_pane_vt_g1

0x1836,	// (0x000794c1) navi_pane_vt_t1

0x1888,	// (0x00079513) navi_slider_pane

0x1890,	// (0x0007951b) zooming_pane

0x1898,	// (0x00079523) navi_slider_pane_g1

0x7857,	// (0x0007f4e2) navi_slider_pane_g2

0x0006,

0xf461,	// (0x000870ec) navi_slider_pane_g

0x18ce,	// (0x00079559) aid_levels_zoom

0x18d6,	// (0x00079561) zooming_pane_g1

0x18de,	// (0x00079569) zooming_pane_g2

0x18de,	// (0x00079569) zooming_pane_g3

0x0002,

0xf470,	// (0x000870fb) zooming_pane_g

0x18e6,	// (0x00079571) level_10_zoom

0x18ef,	// (0x0007957a) level_11_zoom

0x18f8,	// (0x00079583) level_1_zoom

0x1901,	// (0x0007958c) level_2_zoom

0x190a,	// (0x00079595) level_3_zoom

0x1913,	// (0x0007959e) level_4_zoom

0x191c,	// (0x000795a7) level_5_zoom

0x1925,	// (0x000795b0) level_6_zoom

0x192e,	// (0x000795b9) level_7_zoom

0x1937,	// (0x000795c2) level_8_zoom

0x1940,	// (0x000795cb) level_9_zoom

0x1951,	// (0x000795dc) popup_phob_thumbnail_window_g1

0x1959,	// (0x000795e4) popup_phob_thumbnail_window_g2

0x0001,

0xf477,	// (0x00087102) popup_phob_thumbnail_window_g

0xe5e3,	// (0x0008626e) level_1_location

0xe5eb,	// (0x00086276) level_2_location

0xe5f3,	// (0x0008627e) level_3_location

0xe5fb,	// (0x00086286) level_4_location

0x1890,	// (0x0007951b) level_5_location

0x7869,	// (0x0007f4f4) mce_icon_pane_g1

0x7871,	// (0x0007f4fc) mce_icon_pane_g2

0x0001,

0xf47c,	// (0x00087107) mce_icon_pane_g

0x7879,	// (0x0007f504) main_mup_pane_g1_ParamLimits

0x7879,	// (0x0007f504) main_mup_pane_g1

0x7891,	// (0x0007f51c) main_mup_pane_g2_ParamLimits

0x7891,	// (0x0007f51c) main_mup_pane_g2

0x78ad,	// (0x0007f538) main_mup_pane_g3_ParamLimits

0x78ad,	// (0x0007f538) main_mup_pane_g3

0x78c9,	// (0x0007f554) main_mup_pane_g4_ParamLimits

0x78c9,	// (0x0007f554) main_mup_pane_g4

0x78e5,	// (0x0007f570) main_mup_pane_g5_ParamLimits

0x78e5,	// (0x0007f570) main_mup_pane_g5

0x7906,	// (0x0007f591) main_mup_pane_g6_ParamLimits

0x7906,	// (0x0007f591) main_mup_pane_g6

0x7922,	// (0x0007f5ad) main_mup_pane_g7_ParamLimits

0x7922,	// (0x0007f5ad) main_mup_pane_g7

0x793e,	// (0x0007f5c9) main_mup_pane_g8_ParamLimits

0x793e,	// (0x0007f5c9) main_mup_pane_g8

0x795a,	// (0x0007f5e5) main_mup_pane_g9_ParamLimits

0x795a,	// (0x0007f5e5) main_mup_pane_g9

0x7979,	// (0x0007f604) main_mup_pane_g10_ParamLimits

0x7979,	// (0x0007f604) main_mup_pane_g10

0x7998,	// (0x0007f623) main_mup_pane_g11_ParamLimits

0x7998,	// (0x0007f623) main_mup_pane_g11

0x79b0,	// (0x0007f63b) main_mup_pane_g12_ParamLimits

0x79b0,	// (0x0007f63b) main_mup_pane_g12

0x79be,	// (0x0007f649) main_mup_pane_g13_ParamLimits

0x79be,	// (0x0007f649) main_mup_pane_g13

0x000c,

0xf481,	// (0x0008710c) main_mup_pane_g_ParamLimits

0xf481,	// (0x0008710c) main_mup_pane_g

0x79d4,	// (0x0007f65f) main_mup_pane_t1_ParamLimits

0x79d4,	// (0x0007f65f) main_mup_pane_t1

0x79f1,	// (0x0007f67c) main_mup_pane_t2_ParamLimits

0x79f1,	// (0x0007f67c) main_mup_pane_t2

0x7a0b,	// (0x0007f696) main_mup_pane_t3_ParamLimits

0x7a0b,	// (0x0007f696) main_mup_pane_t3

0x7a25,	// (0x0007f6b0) main_mup_pane_t4_ParamLimits

0x7a25,	// (0x0007f6b0) main_mup_pane_t4

0x7a37,	// (0x0007f6c2) main_mup_pane_t5_ParamLimits

0x7a37,	// (0x0007f6c2) main_mup_pane_t5

0x7a49,	// (0x0007f6d4) main_mup_pane_t6_ParamLimits

0x7a49,	// (0x0007f6d4) main_mup_pane_t6

0x0005,

0xf49c,	// (0x00087127) main_mup_pane_t_ParamLimits

0xf49c,	// (0x00087127) main_mup_pane_t

0x7a5f,	// (0x0007f6ea) mup_progress_pane_ParamLimits

0x7a5f,	// (0x0007f6ea) mup_progress_pane

0x7a6b,	// (0x0007f6f6) mup_visualizer_pane_ParamLimits

0x7a6b,	// (0x0007f6f6) mup_visualizer_pane

0x7aa9,	// (0x0007f734) mup_volume_pane_ParamLimits

0x7aa9,	// (0x0007f734) mup_volume_pane

0x1961,	// (0x000795ec) mup_visualizer_pane_g1_ParamLimits

0x1961,	// (0x000795ec) mup_visualizer_pane_g1

0x1961,	// (0x000795ec) mup_visualizer_pane_g2_ParamLimits

0x1961,	// (0x000795ec) mup_visualizer_pane_g2

0x17c5,	// (0x00079450) mup_visualizer_pane_g3_ParamLimits

0x17c5,	// (0x00079450) mup_visualizer_pane_g3

0x0002,

0xf4a9,	// (0x00087134) mup_visualizer_pane_g_ParamLimits

0xf4a9,	// (0x00087134) mup_visualizer_pane_g

0x0b9b,	// (0x00078826) mup_volume_pane_g1

0x1977,	// (0x00079602) mup_volume_pane_g2

0x0001,

0xf4b0,	// (0x0008713b) mup_volume_pane_g

0x0b9b,	// (0x00078826) mup_progress_pane_g1

0x1980,	// (0x0007960b) mup_progress_pane_g2

0x1989,	// (0x00079614) mup_progress_pane_g3

0x0002,

0xf4b5,	// (0x00087140) mup_progress_pane_g

0xe1aa,	// (0x00085e35) bg_popup_window_pane_cp05

0x1992,	// (0x0007961d) heading_pane_cp02_ParamLimits

0x1992,	// (0x0007961d) heading_pane_cp02

0x19ac,	// (0x00079637) list_popup_blid_pane

0x19b4,	// (0x0007963f) list_blid_sat_info_pane_ParamLimits

0x19b4,	// (0x0007963f) list_blid_sat_info_pane

0x19c7,	// (0x00079652) list_blid_sat_info_pane_g1

0x19cf,	// (0x0007965a) list_blid_sat_info_pane_t1

0x7bb4,	// (0x0007f83f) mup_equalizer_pane_ParamLimits

0x7bb4,	// (0x0007f83f) mup_equalizer_pane

0x7bd5,	// (0x0007f860) mup_equalizer_pane_cp1_ParamLimits

0x7bd5,	// (0x0007f860) mup_equalizer_pane_cp1

0x7bf6,	// (0x0007f881) mup_equalizer_pane_cp2_ParamLimits

0x7bf6,	// (0x0007f881) mup_equalizer_pane_cp2

0x7c17,	// (0x0007f8a2) mup_equalizer_pane_cp3_ParamLimits

0x7c17,	// (0x0007f8a2) mup_equalizer_pane_cp3

0x7c38,	// (0x0007f8c3) mup_equalizer_pane_cp4_ParamLimits

0x7c38,	// (0x0007f8c3) mup_equalizer_pane_cp4

0x7c59,	// (0x0007f8e4) mup_equalizer_pane_cp5

0x7c6f,	// (0x0007f8fa) mup_equalizer_pane_cp6

0x7c87,	// (0x0007f912) mup_equalizer_pane_cp7

0xe501,	// (0x0008618c) bg_popup_call_poc_act_pane_g9

0xe509,	// (0x00086194) bg_popup_call_poc_act_pane_g10

0xe511,	// (0x0008619c) bg_popup_call_poc_act_pane_g11

0x000a,

0x09f1,	// (0x0007867c) mup_scale_pane

0x0b9b,	// (0x00078826) mup_scale_pane_g1

0x19dd,	// (0x00079668) mup_scale_pane_g2

0x0006,

0xf4d1,	// (0x0008715c) mup_scale_pane_g

0x1a01,	// (0x0007968c) msg_data_pane

0x1a09,	// (0x00079694) scroll_pane_cp017

0x7cb1,	// (0x0007f93c) bg_list_pane_cp04_ParamLimits

0x7cb1,	// (0x0007f93c) bg_list_pane_cp04

0x1a11,	// (0x0007969c) msg_data_pane_g1

0x7cd1,	// (0x0007f95c) msg_data_pane_g2

0x755a,	// (0x0007f1e5) msg_data_pane_g3

0x7cd9,	// (0x0007f964) msg_data_pane_g4

0x7ce1,	// (0x0007f96c) msg_data_pane_g5

0x7ce9,	// (0x0007f974) msg_data_pane_g6

0x7cf1,	// (0x0007f97c) msg_data_pane_g7

0x0006,

0xf4e0,	// (0x0008716b) msg_data_pane_g

0x7cf9,	// (0x0007f984) msg_text_pane_ParamLimits

0x7cf9,	// (0x0007f984) msg_text_pane

0x7d43,	// (0x0007f9ce) qrid_highlight_pane_cp011_ParamLimits

0x7d43,	// (0x0007f9ce) qrid_highlight_pane_cp011

0xe1aa,	// (0x00085e35) msg_body_pane

0xe1aa,	// (0x00085e35) msg_header_pane

0x1a22,	// (0x000796ad) input_focus_pane_cp07

0x7d6d,	// (0x0007f9f8) msg_header_pane_t1_ParamLimits

0x7d6d,	// (0x0007f9f8) msg_header_pane_t1

0x7d81,	// (0x0007fa0c) msg_header_pane_t2_ParamLimits

0x7d81,	// (0x0007fa0c) msg_header_pane_t2

0x0001,

0xf4f4,	// (0x0008717f) msg_header_pane_t_ParamLimits

0xf4f4,	// (0x0008717f) msg_header_pane_t

0x1a37,	// (0x000796c2) msg_body_pane_g1

0x7d93,	// (0x0007fa1e) msg_body_pane_t1_ParamLimits

0x7d93,	// (0x0007fa1e) msg_body_pane_t1

0x7dc4,	// (0x0007fa4f) msg_body_pane_t2_ParamLimits

0x7dc4,	// (0x0007fa4f) msg_body_pane_t2

0x7dd6,	// (0x0007fa61) msg_body_pane_t3_ParamLimits

0x7dd6,	// (0x0007fa61) msg_body_pane_t3

0x0002,

0xf4f9,	// (0x00087184) msg_body_pane_t_ParamLimits

0xf4f9,	// (0x00087184) msg_body_pane_t

0x7e3a,	// (0x0007fac5) main_viewer_pane_g1_ParamLimits

0x7e3a,	// (0x0007fac5) main_viewer_pane_g1

0x7e46,	// (0x0007fad1) main_viewer_pane_g2_ParamLimits

0x7e46,	// (0x0007fad1) main_viewer_pane_g2

0x7e52,	// (0x0007fadd) main_viewer_pane_g3_ParamLimits

0x7e52,	// (0x0007fadd) main_viewer_pane_g3

0x7e63,	// (0x0007faee) main_viewer_pane_g4_ParamLimits

0x7e63,	// (0x0007faee) main_viewer_pane_g4

0x7e74,	// (0x0007faff) main_viewer_pane_g5_ParamLimits

0x7e74,	// (0x0007faff) main_viewer_pane_g5

0x7e74,	// (0x0007faff) main_viewer_pane_g7_ParamLimits

0x7e74,	// (0x0007faff) main_viewer_pane_g7

0x7e86,	// (0x0007fb11) main_viewer_pane_g8_ParamLimits

0x7e86,	// (0x0007fb11) main_viewer_pane_g8

0x0007,

0xf509,	// (0x00087194) main_viewer_pane_g_ParamLimits

0xf509,	// (0x00087194) main_viewer_pane_g

0x1a81,	// (0x0007970c) viewer_content_pane_ParamLimits

0x1a81,	// (0x0007970c) viewer_content_pane

0x7ebe,	// (0x0007fb49) main_postcard_pane_g1_ParamLimits

0x7ebe,	// (0x0007fb49) main_postcard_pane_g1

0x7ecc,	// (0x0007fb57) main_postcard_pane_g2_ParamLimits

0x7ecc,	// (0x0007fb57) main_postcard_pane_g2

0x7eda,	// (0x0007fb65) main_postcard_pane_g3_ParamLimits

0x7eda,	// (0x0007fb65) main_postcard_pane_g3

0x0005,

0xf51a,	// (0x000871a5) main_postcard_pane_g_ParamLimits

0xf51a,	// (0x000871a5) main_postcard_pane_g

0x7eea,	// (0x0007fb75) main_postcard_pane_g4

0xe724,	// (0x000863af) smil_status_volume_pane_g2

0x7f16,	// (0x0007fba1) postcard_pane_ParamLimits

0x7f16,	// (0x0007fba1) postcard_pane

0x1961,	// (0x000795ec) postcard_pane_g1_ParamLimits

0x1961,	// (0x000795ec) postcard_pane_g1

0x7f48,	// (0x0007fbd3) postcard_pane_g2_ParamLimits

0x7f48,	// (0x0007fbd3) postcard_pane_g2

0x7f54,	// (0x0007fbdf) postcard_pane_g3_ParamLimits

0x7f54,	// (0x0007fbdf) postcard_pane_g3

0x1a9d,	// (0x00079728) postcard_pane_g4_ParamLimits

0x1a9d,	// (0x00079728) postcard_pane_g4

0x7f60,	// (0x0007fbeb) postcard_pane_g5_ParamLimits

0x7f60,	// (0x0007fbeb) postcard_pane_g5

0x7f6c,	// (0x0007fbf7) postcard_pane_g6_ParamLimits

0x7f6c,	// (0x0007fbf7) postcard_pane_g6

0x1a8f,	// (0x0007971a) postcard_pane_g7_ParamLimits

0x1a8f,	// (0x0007971a) postcard_pane_g7

0x0006,

0xf527,	// (0x000871b2) postcard_pane_g_ParamLimits

0xf527,	// (0x000871b2) postcard_pane_g

0x7f78,	// (0x0007fc03) main_mp2_pane_g1_ParamLimits

0x7f78,	// (0x0007fc03) main_mp2_pane_g1

0x7f84,	// (0x0007fc0f) main_mp2_pane_g2_ParamLimits

0x7f84,	// (0x0007fc0f) main_mp2_pane_g2

0x7f90,	// (0x0007fc1b) main_mp2_pane_g3_ParamLimits

0x7f90,	// (0x0007fc1b) main_mp2_pane_g3

0x0002,

0xf536,	// (0x000871c1) main_mp2_pane_g_ParamLimits

0xf536,	// (0x000871c1) main_mp2_pane_g

0x7f9c,	// (0x0007fc27) main_mp2_pane_t1_ParamLimits

0x7f9c,	// (0x0007fc27) main_mp2_pane_t1

0x7fb3,	// (0x0007fc3e) main_mp2_pane_t2_ParamLimits

0x7fb3,	// (0x0007fc3e) main_mp2_pane_t2

0x7fc5,	// (0x0007fc50) main_mp2_pane_t3_ParamLimits

0x7fc5,	// (0x0007fc50) main_mp2_pane_t3

0x0002,

0xf53d,	// (0x000871c8) main_mp2_pane_t_ParamLimits

0xf53d,	// (0x000871c8) main_mp2_pane_t

0x1aab,	// (0x00079736) pec_content_pane_ParamLimits

0x1aab,	// (0x00079736) pec_content_pane

0x1038,	// (0x00078cc3) scroll_pane_cp015

0x1abd,	// (0x00079748) pec_attribute_pane_ParamLimits

0x1abd,	// (0x00079748) pec_attribute_pane

0x7fd7,	// (0x0007fc62) pec_content_pane_g1_ParamLimits

0x7fd7,	// (0x0007fc62) pec_content_pane_g1

0x1acd,	// (0x00079758) pec_content_pane_t1_ParamLimits

0x1acd,	// (0x00079758) pec_content_pane_t1

0x1adf,	// (0x0007976a) pec_content_pane_t2_ParamLimits

0x1adf,	// (0x0007976a) pec_content_pane_t2

0x0001,

0xf544,	// (0x000871cf) pec_content_pane_t_ParamLimits

0xf544,	// (0x000871cf) pec_content_pane_t

0x7fe3,	// (0x0007fc6e) list_single_graphic_pane_cp01_ParamLimits

0x7fe3,	// (0x0007fc6e) list_single_graphic_pane_cp01

0x09f1,	// (0x0007867c) bg_popup_sub_pane_cp04

0x1af1,	// (0x0007977c) popup_mup_playback_window_g1

0x1afd,	// (0x00079788) popup_mup_playback_window_t1

0x1b12,	// (0x0007979d) popup_mup_playback_window_t2

0x0001,

0xf549,	// (0x000871d4) popup_mup_playback_window_t

0x1b49,	// (0x000797d4) main_image_pane_g1_ParamLimits

0x1b49,	// (0x000797d4) main_image_pane_g1

0x1b8c,	// (0x00079817) scroll_pane_cp018_ParamLimits

0x1b8c,	// (0x00079817) scroll_pane_cp018

0x1ba4,	// (0x0007982f) scroll_pane_cp016_ParamLimits

0x1ba4,	// (0x0007982f) scroll_pane_cp016

0x8087,	// (0x0007fd12) smil2_image_pane_ParamLimits

0x8087,	// (0x0007fd12) smil2_image_pane

0x80bb,	// (0x0007fd46) smil2_root_pane_ParamLimits

0x80bb,	// (0x0007fd46) smil2_root_pane

0x80e7,	// (0x0007fd72) smil2_text_pane_ParamLimits

0x80e7,	// (0x0007fd72) smil2_text_pane

0xe1aa,	// (0x00085e35) bg_list_pane_cp06

0x1be0,	// (0x0007986b) grid_radio_pane

0xe1aa,	// (0x00085e35) bg_popup_window_pane_cp06

0x1be8,	// (0x00079873) main_fmradio_pane_t1

0x1613,	// (0x0007929e) heading_pane_cp04

0x1bf6,	// (0x00079881) main_fmradio_pane_t2

0xe519,	// (0x000861a4) popup_cale_lunar_info_window_g1

0x1c04,	// (0x0007988f) main_fmradio_pane_t3

0xe521,	// (0x000861ac) popup_cale_lunar_info_window_g2

0x1c12,	// (0x0007989d) main_fmradio_pane_t4

0x0001,

0x1c20,	// (0x000798ab) main_fmradio_pane_t5

0x0004,

0xf624,	// (0x000872af) popup_cale_lunar_info_window_g

0xf55e,	// (0x000871e9) main_fmradio_pane_t

0x1c2e,	// (0x000798b9) wait_bar_pane_cp03

0x1c36,	// (0x000798c1) cell_fmradio_pane_ParamLimits

0x1c36,	// (0x000798c1) cell_fmradio_pane

0x1a8f,	// (0x0007971a) cell_fmradio_pane_g1_ParamLimits

0x1a8f,	// (0x0007971a) cell_fmradio_pane_g1

0xe1aa,	// (0x00085e35) grid_highlight_pane_cp011

0x1c49,	// (0x000798d4) poc_content_pane_ParamLimits

0x1c49,	// (0x000798d4) poc_content_pane

0x1c5b,	// (0x000798e6) scroll_pane_cp019

0x8127,	// (0x0007fdb2) popup_call_poc_act_window_ParamLimits

0x8127,	// (0x0007fdb2) popup_call_poc_act_window

0x8134,	// (0x0007fdbf) popup_call_poc_inact_window_ParamLimits

0x8134,	// (0x0007fdbf) popup_call_poc_inact_window

0xf5fb,	// (0x00087286) bg_popup_call_poc_act_pane_g

0xe491,	// (0x0008611c) bg_popup_call_poc_inact_pane_g1

0xe499,	// (0x00086124) bg_popup_call_poc_inact_pane_g2

0x1c63,	// (0x000798ee) popup_call_poc_act_window_g2

0xe4a1,	// (0x0008612c) bg_popup_call_poc_inact_pane_g3

0xe4a9,	// (0x00086134) bg_popup_call_poc_inact_pane_g4

0xe4b1,	// (0x0008613c) bg_popup_call_poc_inact_pane_g5

0x1c6b,	// (0x000798f6) popup_call_poc_act_window_t1_ParamLimits

0x1c6b,	// (0x000798f6) popup_call_poc_act_window_t1

0x1c93,	// (0x0007991e) popup_call_poc_act_window_t2_ParamLimits

0x1c93,	// (0x0007991e) popup_call_poc_act_window_t2

0x1cbb,	// (0x00079946) popup_call_poc_act_window_t3_ParamLimits

0x1cbb,	// (0x00079946) popup_call_poc_act_window_t3

0x1ce3,	// (0x0007996e) popup_call_poc_act_window_t4_ParamLimits

0x1ce3,	// (0x0007996e) popup_call_poc_act_window_t4

0x0003,

0xf569,	// (0x000871f4) popup_call_poc_act_window_t_ParamLimits

0xf569,	// (0x000871f4) popup_call_poc_act_window_t

0xe4b9,	// (0x00086144) bg_popup_call_poc_inact_pane_g6

0xe4c1,	// (0x0008614c) bg_popup_call_poc_inact_pane_g7

0xe4c9,	// (0x00086154) bg_popup_call_poc_inact_pane_g8

0x1cf5,	// (0x00079980) popup_call_poc_inact_window_g2

0xe4d1,	// (0x0008615c) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf5e8,	// (0x00087273) bg_popup_call_poc_inact_pane_g

0x1cfd,	// (0x00079988) popup_call_poc_inact_window_t1_ParamLimits

0x1cfd,	// (0x00079988) popup_call_poc_inact_window_t1

0x1d12,	// (0x0007999d) popup_call_poc_inact_window_t2_ParamLimits

0x1d12,	// (0x0007999d) popup_call_poc_inact_window_t2

0x1d27,	// (0x000799b2) popup_call_poc_inact_window_t3_ParamLimits

0x1d27,	// (0x000799b2) popup_call_poc_inact_window_t3

0x0002,

0xf572,	// (0x000871fd) popup_call_poc_inact_window_t_ParamLimits

0xf572,	// (0x000871fd) popup_call_poc_inact_window_t

0xe697,	// (0x00086322) context_pane_ParamLimits

0x8e42,	// (0x00080acd) signal_pane_ParamLimits

0x1890,	// (0x0007951b) main_call2_pane

0xe685,	// (0x00086310) popup_phob_thumbnail2_window_ParamLimits

0xe685,	// (0x00086310) popup_phob_thumbnail2_window

0x7de8,	// (0x0007fa73) aid_hotspot_pointer_arrow_pane

0x7df0,	// (0x0007fa7b) aid_hotspot_pointer_hand_pane

0x8b80,	// (0x0008080b) phob_pre_status_pane_g5

0x6259,	// (0x0007dee4) cams_zoom_pane_ParamLimits

0x6265,	// (0x0007def0) image_vga_pane_ParamLimits

0x6274,	// (0x0007deff) main_camera_pane_g1_ParamLimits

0x6282,	// (0x0007df0d) main_camera_pane_g2_ParamLimits

0x6290,	// (0x0007df1b) main_camera_pane_g3_ParamLimits

0x629c,	// (0x0007df27) main_camera_pane_g4_ParamLimits

0x62a8,	// (0x0007df33) main_camera_pane_g5_ParamLimits

0x62b4,	// (0x0007df3f) main_camera_pane_g6_ParamLimits

0x62c0,	// (0x0007df4b) main_camera_pane_g7_ParamLimits

0xf271,	// (0x00086efc) main_camera_pane_g_ParamLimits

0x62cc,	// (0x0007df57) main_camera_pane_t1_ParamLimits

0x62de,	// (0x0007df69) main_camera_pane_t2_ParamLimits

0xf282,	// (0x00086f0d) main_camera_pane_t_ParamLimits

0x09f1,	// (0x0007867c) bg_popup_preview_window_pane_cp01_ParamLimits

0x09f1,	// (0x0007867c) bg_popup_preview_window_pane_cp01

0x1d3c,	// (0x000799c7) popup_phob_thumbnail2_window_g1_ParamLimits

0x1d3c,	// (0x000799c7) popup_phob_thumbnail2_window_g1

0xe1aa,	// (0x00085e35) call2_cli_visual_pane

0x8150,	// (0x0007fddb) popup_call2_audio_conf_window_ParamLimits

0x8150,	// (0x0007fddb) popup_call2_audio_conf_window

0x8165,	// (0x0007fdf0) popup_call2_audio_first_window_ParamLimits

0x8165,	// (0x0007fdf0) popup_call2_audio_first_window

0x8203,	// (0x0007fe8e) popup_call2_audio_in_window_ParamLimits

0x8203,	// (0x0007fe8e) popup_call2_audio_in_window

0x8245,	// (0x0007fed0) popup_call2_audio_out_window_ParamLimits

0x8245,	// (0x0007fed0) popup_call2_audio_out_window

0x82a7,	// (0x0007ff32) popup_call2_audio_second_window_ParamLimits

0x82a7,	// (0x0007ff32) popup_call2_audio_second_window

0x8305,	// (0x0007ff90) popup_call2_audio_wait_window_ParamLimits

0x8305,	// (0x0007ff90) popup_call2_audio_wait_window

0xe1aa,	// (0x00085e35) bg_popup_call2_act_pane_cp03

0x09d3,	// (0x0007865e) list_conf_pane_cp

0x1d48,	// (0x000799d3) popup_call2_audio_conf_window_t1

0x1d56,	// (0x000799e1) list_single_graphic_popup_conf2_pane_ParamLimits

0x1d56,	// (0x000799e1) list_single_graphic_popup_conf2_pane

0x16a6,	// (0x00079331) list_highlight_pane_cp04

0x1d69,	// (0x000799f4) list_single_graphic_popup_conf2_pane_g1

0x16b7,	// (0x00079342) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf579,	// (0x00087204) list_single_graphic_popup_conf2_pane_g

0x1d73,	// (0x000799fe) list_single_graphic_popup_conf2_pane_t1

0x1d81,	// (0x00079a0c) bg_popup_call2_act_pane_cp01_ParamLimits

0x1d81,	// (0x00079a0c) bg_popup_call2_act_pane_cp01

0x1e0b,	// (0x00079a96) call_type_pane_cp05_ParamLimits

0x1e0b,	// (0x00079a96) call_type_pane_cp05

0x1e5f,	// (0x00079aea) popup_call2_audio_second_window_g1_ParamLimits

0x1e5f,	// (0x00079aea) popup_call2_audio_second_window_g1

0x1eb3,	// (0x00079b3e) popup_call2_audio_second_window_g2_ParamLimits

0x1eb3,	// (0x00079b3e) popup_call2_audio_second_window_g2

0x0002,

0xf57e,	// (0x00087209) popup_call2_audio_second_window_g_ParamLimits

0xf57e,	// (0x00087209) popup_call2_audio_second_window_g

0x1f18,	// (0x00079ba3) popup_call2_audio_second_window_t1_ParamLimits

0x1f18,	// (0x00079ba3) popup_call2_audio_second_window_t1

0x1fd3,	// (0x00079c5e) popup_call2_audio_second_window_t2_ParamLimits

0x1fd3,	// (0x00079c5e) popup_call2_audio_second_window_t2

0x2026,	// (0x00079cb1) popup_call2_audio_second_window_t3_ParamLimits

0x2026,	// (0x00079cb1) popup_call2_audio_second_window_t3

0x0003,

0xf585,	// (0x00087210) popup_call2_audio_second_window_t_ParamLimits

0xf585,	// (0x00087210) popup_call2_audio_second_window_t

0xe1aa,	// (0x00085e35) bg_popup_call2_in_pane_cp02

0xe1b4,	// (0x00085e3f) call_type_pane_cp04

0xe1bc,	// (0x00085e47) popup_call2_audio_wait_window_g1

0xe1c4,	// (0x00085e4f) popup_call2_audio_wait_window_g2

0x0001,

0xf15e,	// (0x00086de9) popup_call2_audio_wait_window_g

0xe1cc,	// (0x00085e57) popup_call2_audio_wait_window_t3

0x2119,	// (0x00079da4) bg_popup_call2_act_pane_ParamLimits

0x2119,	// (0x00079da4) bg_popup_call2_act_pane

0x21d9,	// (0x00079e64) call_type_pane_cp03_ParamLimits

0x21d9,	// (0x00079e64) call_type_pane_cp03

0x223d,	// (0x00079ec8) popup_call2_audio_first_window_g1_ParamLimits

0x223d,	// (0x00079ec8) popup_call2_audio_first_window_g1

0x22ad,	// (0x00079f38) popup_call2_audio_first_window_g2_ParamLimits

0x22ad,	// (0x00079f38) popup_call2_audio_first_window_g2

0x1961,	// (0x000795ec) popup_call2_audio_first_window_g3_ParamLimits

0x1961,	// (0x000795ec) popup_call2_audio_first_window_g3

0x0004,

0xf58e,	// (0x00087219) popup_call2_audio_first_window_g_ParamLimits

0xf58e,	// (0x00087219) popup_call2_audio_first_window_g

0x83be,	// (0x00080049) popup_call2_audio_first_window_t1_ParamLimits

0x83be,	// (0x00080049) popup_call2_audio_first_window_t1

0x84c1,	// (0x0008014c) popup_call2_audio_first_window_t4_ParamLimits

0x84c1,	// (0x0008014c) popup_call2_audio_first_window_t4

0x85a4,	// (0x0008022f) popup_call2_audio_first_window_t5_ParamLimits

0x85a4,	// (0x0008022f) popup_call2_audio_first_window_t5

0x0003,

0xf599,	// (0x00087224) popup_call2_audio_first_window_t_ParamLimits

0xf599,	// (0x00087224) popup_call2_audio_first_window_t

0x09e9,	// (0x00078674) bg_popup_call2_act_pane_g1

0xe529,	// (0x000861b4) popup_cale_lunar_info_window_t1

0xe537,	// (0x000861c2) popup_cale_lunar_info_window_t2

0xe545,	// (0x000861d0) popup_cale_lunar_info_window_t3

0xe1aa,	// (0x00085e35) bg_popup_call2_bubble_pane

0x86a5,	// (0x00080330) bg_popup_call2_in_pane_cp01_ParamLimits

0x86a5,	// (0x00080330) bg_popup_call2_in_pane_cp01

0xde86,	// (0x00085b11) call_type_pane_cp02

0x86ed,	// (0x00080378) popup_call2_audio_out_window_g1_ParamLimits

0x86ed,	// (0x00080378) popup_call2_audio_out_window_g1

0x8719,	// (0x000803a4) popup_call2_audio_out_window_g2_ParamLimits

0x8719,	// (0x000803a4) popup_call2_audio_out_window_g2

0x8741,	// (0x000803cc) popup_call2_audio_out_window_g3_ParamLimits

0x8741,	// (0x000803cc) popup_call2_audio_out_window_g3

0x0003,

0xf5a2,	// (0x0008722d) popup_call2_audio_out_window_g_ParamLimits

0xf5a2,	// (0x0008722d) popup_call2_audio_out_window_g

0x877c,	// (0x00080407) popup_call2_audio_out_window_t1_ParamLimits

0x877c,	// (0x00080407) popup_call2_audio_out_window_t1

0x87db,	// (0x00080466) popup_call2_audio_out_window_t2_ParamLimits

0x87db,	// (0x00080466) popup_call2_audio_out_window_t2

0x882f,	// (0x000804ba) popup_call2_audio_out_window_t3_ParamLimits

0x882f,	// (0x000804ba) popup_call2_audio_out_window_t3

0x8845,	// (0x000804d0) popup_call2_audio_out_window_t4_ParamLimits

0x8845,	// (0x000804d0) popup_call2_audio_out_window_t4

0x885b,	// (0x000804e6) popup_call2_audio_out_window_t5_ParamLimits

0x885b,	// (0x000804e6) popup_call2_audio_out_window_t5

0x0005,

0xf5ab,	// (0x00087236) popup_call2_audio_out_window_t_ParamLimits

0xf5ab,	// (0x00087236) popup_call2_audio_out_window_t

0x88bf,	// (0x0008054a) bg_popup_call2_in_pane_ParamLimits

0x88bf,	// (0x0008054a) bg_popup_call2_in_pane

0x891b,	// (0x000805a6) popup_call2_audio_in_window_g1_ParamLimits

0x891b,	// (0x000805a6) popup_call2_audio_in_window_g1

0x8953,	// (0x000805de) popup_call2_audio_in_window_g2_ParamLimits

0x8953,	// (0x000805de) popup_call2_audio_in_window_g2

0x898b,	// (0x00080616) popup_call2_audio_in_window_g3_ParamLimits

0x898b,	// (0x00080616) popup_call2_audio_in_window_g3

0x0003,

0xf5b8,	// (0x00087243) popup_call2_audio_in_window_g_ParamLimits

0xf5b8,	// (0x00087243) popup_call2_audio_in_window_g

0x89e3,	// (0x0008066e) popup_call2_audio_in_window_t1_ParamLimits

0x89e3,	// (0x0008066e) popup_call2_audio_in_window_t1

0xe37b,	// (0x00086006) popup_call2_audio_in_window_t2_ParamLimits

0xe37b,	// (0x00086006) popup_call2_audio_in_window_t2

0xe3fb,	// (0x00086086) popup_call2_audio_in_window_t3_ParamLimits

0xe3fb,	// (0x00086086) popup_call2_audio_in_window_t3

0xe415,	// (0x000860a0) popup_call2_audio_in_window_t4_ParamLimits

0xe415,	// (0x000860a0) popup_call2_audio_in_window_t4

0xe427,	// (0x000860b2) popup_call2_audio_in_window_t5_ParamLimits

0xe427,	// (0x000860b2) popup_call2_audio_in_window_t5

0xe43c,	// (0x000860c7) popup_call2_audio_in_window_t6_ParamLimits

0xe43c,	// (0x000860c7) popup_call2_audio_in_window_t6

0x0005,

0xf5c1,	// (0x0008724c) popup_call2_audio_in_window_t_ParamLimits

0xf5c1,	// (0x0008724c) popup_call2_audio_in_window_t

0x09e9,	// (0x00078674) bg_popup_call2_in_pane_g1

0xe553,	// (0x000861de) popup_cale_lunar_info_window_t4

0x0003,

0xf629,	// (0x000872b4) popup_cale_lunar_info_window_t

0x09f1,	// (0x0007867c) bg_popup_call2_rect_pane_ParamLimits

0x09f1,	// (0x0007867c) bg_popup_call2_rect_pane

0xe1aa,	// (0x00085e35) call2_cli_visual_graphic_pane

0xe1aa,	// (0x00085e35) call2_cli_visual_text_pane

0x8ef2,	// (0x00080b7d) smil_status_volume_pane_g3

0x0002,

0x0b9b,	// (0x00078826) call2_cli_visual_graphic_pane_g1

0x0b9b,	// (0x00078826) call2_cli_visual_graphic_pane_g2

0x0b9b,	// (0x00078826) call2_cli_visual_graphic_pane_g3

0x0002,

0xf5ce,	// (0x00087259) call2_cli_visual_graphic_pane_g

0xe451,	// (0x000860dc) bg_popup_call2_rect_pane_g1

0x0c43,	// (0x000788ce) bg_popup_call2_rect_pane_g2

0xe459,	// (0x000860e4) bg_popup_call2_rect_pane_g3

0xe461,	// (0x000860ec) bg_popup_call2_rect_pane_g4

0xe469,	// (0x000860f4) bg_popup_call2_rect_pane_g5

0xe471,	// (0x000860fc) bg_popup_call2_rect_pane_g6

0xe479,	// (0x00086104) bg_popup_call2_rect_pane_g7

0xe481,	// (0x0008610c) bg_popup_call2_rect_pane_g8

0xe489,	// (0x00086114) bg_popup_call2_rect_pane_g9

0x0008,

0xf5d5,	// (0x00087260) bg_popup_call2_rect_pane_g

0xe491,	// (0x0008611c) bg_popup_call2_bubble_pane_g1

0xe499,	// (0x00086124) bg_popup_call2_bubble_pane_g2

0xe4a1,	// (0x0008612c) bg_popup_call2_bubble_pane_g3

0xe4a9,	// (0x00086134) bg_popup_call2_bubble_pane_g4

0xe4b1,	// (0x0008613c) bg_popup_call2_bubble_pane_g5

0xe4b9,	// (0x00086144) bg_popup_call2_bubble_pane_g6

0xe4c1,	// (0x0008614c) bg_popup_call2_bubble_pane_g7

0xe4c9,	// (0x00086154) bg_popup_call2_bubble_pane_g8

0xe4d1,	// (0x0008615c) bg_popup_call2_bubble_pane_g9

0x0008,

0xf5e8,	// (0x00087273) bg_popup_call2_bubble_pane_g

0x5e60,	// (0x0007daeb) aid_cale_week_size_cell_pane

0x62f0,	// (0x0007df7b) aid_cams_cif_uncrop_pane_ParamLimits

0x62f0,	// (0x0007df7b) aid_cams_cif_uncrop_pane

0x6453,	// (0x0007e0de) aid_cams_size_cell_ParamLimits

0x6453,	// (0x0007e0de) aid_cams_size_cell

0x645f,	// (0x0007e0ea) grid_cams_pane_ParamLimits

0x646d,	// (0x0007e0f8) linegrid_cams_pane_ParamLimits

0x655b,	// (0x0007e1e6) call_video_pane_t1

0x6575,	// (0x0007e200) call_video_pane_t2

0x0001,

0xf2d5,	// (0x00086f60) call_video_pane_t

0x6a74,	// (0x0007e6ff) aid_cale_month_size_cell_pane_ParamLimits

0x6a74,	// (0x0007e6ff) aid_cale_month_size_cell_pane

0xf672,	// (0x000872fd) smil_status_volume_pane_g

0x8eff,	// (0x00080b8a) volume_smil_pane_ParamLimits

0xdd4b,	// (0x000859d6) aid_popup2_width_pane

0x5d47,	// (0x0007d9d2) cell_qdial_pane_g4_ParamLimits

0x5d47,	// (0x0007d9d2) cell_qdial_pane_g4

0x76c2,	// (0x0007f34d) aid_blid_cardinal_pane_ParamLimits

0x76d2,	// (0x0007f35d) aid_blid_destination_pane_ParamLimits

0x76d2,	// (0x0007f35d) aid_blid_destination_pane

0x09f1,	// (0x0007867c) bg_popup_call_poc_act_pane_ParamLimits

0x09f1,	// (0x0007867c) bg_popup_call_poc_act_pane

0x09f1,	// (0x0007867c) bg_popup_call_poc_inact_pane_ParamLimits

0x09f1,	// (0x0007867c) bg_popup_call_poc_inact_pane

0xe4d9,	// (0x00086164) bg_popup_call_poc_act_pane_g1

0xe4e1,	// (0x0008616c) bg_popup_call_poc_act_pane_g2

0xe4e9,	// (0x00086174) bg_popup_call_poc_act_pane_g3

0xe4a9,	// (0x00086134) bg_popup_call_poc_act_pane_g4

0xe4b1,	// (0x0008613c) bg_popup_call_poc_act_pane_g5

0xe4f1,	// (0x0008617c) bg_popup_call_poc_act_pane_g6

0xe4c1,	// (0x0008614c) bg_popup_call_poc_act_pane_g7

0xe4f9,	// (0x00086184) bg_popup_call_poc_act_pane_g8

0xe1aa,	// (0x00085e35) main_usb_pane

0xe660,	// (0x000862eb) popup_cale_lunar_info_window

0x6813,	// (0x0007e49e) im_reading_pane_t1_ParamLimits

0x0f90,	// (0x00078c1b) list_im_pane_ParamLimits

0x0fa1,	// (0x00078c2c) scroll_pane_cp07_ParamLimits

0xe1aa,	// (0x00085e35) grid_highlight_pane_cp012

0x09f1,	// (0x0007867c) mup_scale_pane_ParamLimits

0x1961,	// (0x000795ec) main_usb_pane_g1_ParamLimits

0x1961,	// (0x000795ec) main_usb_pane_g1

0x8aa3,	// (0x0008072e) main_usb_pane_g2_ParamLimits

0x8aa3,	// (0x0008072e) main_usb_pane_g2

0x0001,

0xf612,	// (0x0008729d) main_usb_pane_g_ParamLimits

0xf612,	// (0x0008729d) main_usb_pane_g

0x8aaf,	// (0x0008073a) main_usb_pane_t1_ParamLimits

0x8aaf,	// (0x0008073a) main_usb_pane_t1

0x8ac1,	// (0x0008074c) main_usb_pane_t2_ParamLimits

0x8ac1,	// (0x0008074c) main_usb_pane_t2

0x8ad3,	// (0x0008075e) main_usb_pane_t3_ParamLimits

0x8ad3,	// (0x0008075e) main_usb_pane_t3

0x8ae5,	// (0x00080770) main_usb_pane_t4_ParamLimits

0x8ae5,	// (0x00080770) main_usb_pane_t4

0x8af7,	// (0x00080782) main_usb_pane_t5_ParamLimits

0x8af7,	// (0x00080782) main_usb_pane_t5

0x8b09,	// (0x00080794) main_usb_pane_t6_ParamLimits

0x8b09,	// (0x00080794) main_usb_pane_t6

0x0005,

0xf617,	// (0x000872a2) main_usb_pane_t_ParamLimits

0x7668,	// (0x0007f2f3) aid_text_placing

0x7674,	// (0x0007f2ff) main_location2_pane_t1_ParamLimits

0x7688,	// (0x0007f313) main_location2_pane_t2_ParamLimits

0x769c,	// (0x0007f327) main_location2_pane_t3_ParamLimits

0x76b0,	// (0x0007f33b) main_location2_pane_t4_ParamLimits

0x76b0,	// (0x0007f33b) main_location2_pane_t4

0xf436,	// (0x000870c1) main_location2_pane_t_ParamLimits

0x0a35,	// (0x000786c0) find_pinb_pane_g2_ParamLimits

0x0a35,	// (0x000786c0) find_pinb_pane_g2

0x0001,

0xf184,	// (0x00086e0f) find_pinb_pane_g_ParamLimits

0xf184,	// (0x00086e0f) find_pinb_pane_g

0x0a41,	// (0x000786cc) find_pinb_pane_t1_ParamLimits

0x0a53,	// (0x000786de) find_pinb_pane_t2_ParamLimits

0xf189,	// (0x00086e14) find_pinb_pane_t_ParamLimits

0xe1aa,	// (0x00085e35) main_call3_pane

0x6dc0,	// (0x0007ea4b) cale_month_day_heading_pane_t1_ParamLimits

0x6e1e,	// (0x0007eaa9) cale_month_day_heading_pane_t2_ParamLimits

0x6e83,	// (0x0007eb0e) cale_month_day_heading_pane_t3_ParamLimits

0x6ee8,	// (0x0007eb73) cale_month_day_heading_pane_t4_ParamLimits

0x6f4d,	// (0x0007ebd8) cale_month_day_heading_pane_t5_ParamLimits

0x6fb2,	// (0x0007ec3d) cale_month_day_heading_pane_t6_ParamLimits

0x701f,	// (0x0007ecaa) cale_month_day_heading_pane_t7_ParamLimits

0xf30d,	// (0x00086f98) cale_month_day_heading_pane_t_ParamLimits

0x1217,	// (0x00078ea2) smil_status_volume_pane

0x7f30,	// (0x0007fbbb) postcard_address_pane_ParamLimits

0x7f30,	// (0x0007fbbb) postcard_address_pane

0x7f3c,	// (0x0007fbc7) postcard_message_pane_ParamLimits

0x7f3c,	// (0x0007fbc7) postcard_message_pane

0x8a63,	// (0x000806ee) call2_cli_visual_pane_t1_ParamLimits

0x8a63,	// (0x000806ee) call2_cli_visual_pane_t1

0x9052,	// (0x00080cdd) postcard_message_pane_t1_ParamLimits

0x9052,	// (0x00080cdd) postcard_message_pane_t1

0x903b,	// (0x00080cc6) postcard_address_pane_t1_ParamLimits

0x903b,	// (0x00080cc6) postcard_address_pane_t1

0x902c,	// (0x00080cb7) popup_call3_audio_in_window_ParamLimits

0x902c,	// (0x00080cb7) popup_call3_audio_in_window

0x8f14,	// (0x00080b9f) bg_popup_call3_in_pane_ParamLimits

0x8f14,	// (0x00080b9f) bg_popup_call3_in_pane

0x8f72,	// (0x00080bfd) popup_call3_audio_in_window_g1_ParamLimits

0x8f72,	// (0x00080bfd) popup_call3_audio_in_window_g1

0x8f8a,	// (0x00080c15) popup_call3_audio_in_window_g2_ParamLimits

0x8f8a,	// (0x00080c15) popup_call3_audio_in_window_g2

0x8fa2,	// (0x00080c2d) popup_call3_audio_in_window_g3_ParamLimits

0x8fa2,	// (0x00080c2d) popup_call3_audio_in_window_g3

0x0003,

0xf679,	// (0x00087304) popup_call3_audio_in_window_g_ParamLimits

0xf679,	// (0x00087304) popup_call3_audio_in_window_g

0x8fca,	// (0x00080c55) popup_call3_audio_in_window_t1_ParamLimits

0x8fca,	// (0x00080c55) popup_call3_audio_in_window_t1

0x8ff2,	// (0x00080c7d) popup_call3_audio_in_window_t2_ParamLimits

0x8ff2,	// (0x00080c7d) popup_call3_audio_in_window_t2

0x901a,	// (0x00080ca5) popup_call3_audio_in_window_t3_ParamLimits

0x901a,	// (0x00080ca5) popup_call3_audio_in_window_t3

0x0002,

0xf682,	// (0x0008730d) popup_call3_audio_in_window_t_ParamLimits

0xf682,	// (0x0008730d) popup_call3_audio_in_window_t

0x1890,	// (0x0007951b) bg_popup_call3_rect_pane

0xe451,	// (0x000860dc) bg_popup_call3_rect_pane_g1

0x0c43,	// (0x000788ce) bg_popup_call3_rect_pane_g2

0xe459,	// (0x000860e4) bg_popup_call3_rect_pane_g3

0xe461,	// (0x000860ec) bg_popup_call3_rect_pane_g4

0xe469,	// (0x000860f4) bg_popup_call3_rect_pane_g5

0xe471,	// (0x000860fc) bg_popup_call3_rect_pane_g6

0xe479,	// (0x00086104) bg_popup_call3_rect_pane_g7

0x7ac4,	// (0x0007f74f) mup_visualizer_osc_pane

0x196f,	// (0x000795fa) mup_visualizer_spec_pane

0x8f34,	// (0x00080bbf) call3_video_qcif_pane_ParamLimits

0x8f34,	// (0x00080bbf) call3_video_qcif_pane

0x8f44,	// (0x00080bcf) call3_video_qcif_uncrop_pane_ParamLimits

0x8f44,	// (0x00080bcf) call3_video_qcif_uncrop_pane

0x8f50,	// (0x00080bdb) call3_video_subqcif_pane_ParamLimits

0x8f50,	// (0x00080bdb) call3_video_subqcif_pane

0x8f62,	// (0x00080bed) call3_video_subqcif_uncrop_pane_ParamLimits

0x8f62,	// (0x00080bed) call3_video_subqcif_uncrop_pane

0x8fba,	// (0x00080c45) popup_call3_audio_in_window_g4_ParamLimits

0x8fba,	// (0x00080c45) popup_call3_audio_in_window_g4

0x8ee1,	// (0x00080b6c) mup_spec_half_pane

0x8eea,	// (0x00080b75) mup_spec_half_pane_cp

0xe6f7,	// (0x00086382) mup_osc_middle_pane

0xe700,	// (0x0008638b) mup_visualizer_osc_pane_g1

0x8ec2,	// (0x00080b4d) mup_spec_bar_pane_ParamLimits

0x8ec2,	// (0x00080b4d) mup_spec_bar_pane

0xe6e4,	// (0x0008636f) mup_spec_bar_pane_g1

0xe6ee,	// (0x00086379) mup_spec_bar_pane_g2

0x0001,

0xf66d,	// (0x000872f8) mup_spec_bar_pane_g

0x5e60,	// (0x0007daeb) aid_cale_week_size_cell_pane_ParamLimits

0x5e73,	// (0x0007dafe) bg_cale_heading_pane_ParamLimits

0x0cbf,	// (0x0007894a) bg_cale_pane_cp01_ParamLimits

0x5e87,	// (0x0007db12) cale_week_corner_pane_ParamLimits

0x5e98,	// (0x0007db23) cale_week_day_heading_pane_ParamLimits

0x5eac,	// (0x0007db37) cale_week_scroll_pane_g1_ParamLimits

0x5ebd,	// (0x0007db48) cale_week_scroll_pane_g2_ParamLimits

0x5ece,	// (0x0007db59) cale_week_scroll_pane_g3_ParamLimits

0x5edf,	// (0x0007db6a) cale_week_scroll_pane_g4_ParamLimits

0x5ef0,	// (0x0007db7b) cale_week_scroll_pane_g5_ParamLimits

0x5f01,	// (0x0007db8c) cale_week_scroll_pane_g6_ParamLimits

0x5f12,	// (0x0007db9d) cale_week_scroll_pane_g7_ParamLimits

0x5f25,	// (0x0007dbb0) cale_week_scroll_pane_g8_ParamLimits

0x5f38,	// (0x0007dbc3) cale_week_scroll_pane_g9_ParamLimits

0x5f49,	// (0x0007dbd4) cale_week_scroll_pane_g10_ParamLimits

0x5f5a,	// (0x0007dbe5) cale_week_scroll_pane_g11_ParamLimits

0x5f6b,	// (0x0007dbf6) cale_week_scroll_pane_g12_ParamLimits

0x5f7c,	// (0x0007dc07) cale_week_scroll_pane_g13_ParamLimits

0x5f8d,	// (0x0007dc18) cale_week_scroll_pane_g14_ParamLimits

0x5f9e,	// (0x0007dc29) cale_week_scroll_pane_g15_ParamLimits

0xf215,	// (0x00086ea0) cale_week_scroll_pane_g_ParamLimits

0x5faf,	// (0x0007dc3a) cale_week_time_pane_ParamLimits

0x5fc2,	// (0x0007dc4d) grid_cale_week_pane_ParamLimits

0x0cd8,	// (0x00078963) listscroll_cale_week_pane_t1

0x5fd7,	// (0x0007dc62) scroll_pane_cp08_ParamLimits

0x6ab5,	// (0x0007e740) cale_month_corner_pane_ParamLimits

0x11b7,	// (0x00078e42) cale_month_pane_t1

0x6d7f,	// (0x0007ea0a) cale_month_week_pane_ParamLimits

0x1961,	// (0x000795ec) popup_call_status_window_g1_ParamLimits

0x74b0,	// (0x0007f13b) popup_call_status_window_g2_ParamLimits

0x74bc,	// (0x0007f147) popup_call_status_window_g3_ParamLimits

0xf3bd,	// (0x00087048) popup_call_status_window_g_ParamLimits

0x159c,	// (0x00079227) aid_call2_pane

0x7d5f,	// (0x0007f9ea) msg_header_pane_g1

0x7f30,	// (0x0007fbbb) postcard_address2_pane_ParamLimits

0x7f30,	// (0x0007fbbb) postcard_address2_pane

0x7f3c,	// (0x0007fbc7) postcard_message2_pane_ParamLimits

0x7f3c,	// (0x0007fbc7) postcard_message2_pane

0x8e50,	// (0x00080adb) message2_row_pane_ParamLimits

0x8e50,	// (0x00080adb) message2_row_pane

0x8e6d,	// (0x00080af8) address2_row_pane_ParamLimits

0x8e6d,	// (0x00080af8) address2_row_pane

0xe6b2,	// (0x0008633d) postcard_message2_row_pane_g1

0xe6ba,	// (0x00086345) postcard_message2_row_pane_t1

0xe6b2,	// (0x0008633d) address2_row_pane_g1

0xe6ba,	// (0x00086345) address2_row_pane_t1

0x61cf,	// (0x0007de5a) aid_size_cell_vorec

0xe1aa,	// (0x00085e35) main_rss_pane

0x8e80,	// (0x00080b0b) rss_list_single_pane_ParamLimits

0x8e80,	// (0x00080b0b) rss_list_single_pane

0xe6c8,	// (0x00086353) rss_list_single_pane_t1

0xe6d6,	// (0x00086361) rss_list_single_pane_t2

0x0001,

0xf668,	// (0x000872f3) rss_list_single_pane_t

0xe1aa,	// (0x00085e35) main_camera2_pane

0xe1aa,	// (0x00085e35) main_video2_pane

0x90b6,	// (0x00080d41) cams_zoom_pane_cp2_ParamLimits

0x90b6,	// (0x00080d41) cams_zoom_pane_cp2

0x90c2,	// (0x00080d4d) image2_vga_pane_ParamLimits

0x90c2,	// (0x00080d4d) image2_vga_pane

0x90d1,	// (0x00080d5c) main_camera2_pane_g1_ParamLimits

0x90d1,	// (0x00080d5c) main_camera2_pane_g1

0x90dd,	// (0x00080d68) main_camera2_pane_g2_ParamLimits

0x90dd,	// (0x00080d68) main_camera2_pane_g2

0x90e9,	// (0x00080d74) main_camera2_pane_g3_ParamLimits

0x90e9,	// (0x00080d74) main_camera2_pane_g3

0x90f5,	// (0x00080d80) main_camera2_pane_g4_ParamLimits

0x90f5,	// (0x00080d80) main_camera2_pane_g4

0x9101,	// (0x00080d8c) main_camera2_pane_g5_ParamLimits

0x9101,	// (0x00080d8c) main_camera2_pane_g5

0x910d,	// (0x00080d98) main_camera2_pane_g6_ParamLimits

0x910d,	// (0x00080d98) main_camera2_pane_g6

0x9119,	// (0x00080da4) main_camera2_pane_g7_ParamLimits

0x9119,	// (0x00080da4) main_camera2_pane_g7

0x9125,	// (0x00080db0) main_camera2_pane_g8_ParamLimits

0x9125,	// (0x00080db0) main_camera2_pane_g8

0x0008,

0xf689,	// (0x00087314) main_camera2_pane_g_ParamLimits

0xf689,	// (0x00087314) main_camera2_pane_g

0x913d,	// (0x00080dc8) main_camera2_pane_t1_ParamLimits

0x913d,	// (0x00080dc8) main_camera2_pane_t1

0x914f,	// (0x00080dda) main_camera2_pane_t2_ParamLimits

0x914f,	// (0x00080dda) main_camera2_pane_t2

0x9161,	// (0x00080dec) main_camera2_pane_t3_ParamLimits

0x9161,	// (0x00080dec) main_camera2_pane_t3

0x9173,	// (0x00080dfe) main_camera2_pane_t4_ParamLimits

0x9173,	// (0x00080dfe) main_camera2_pane_t4

0x0006,

0xf69c,	// (0x00087327) main_camera2_pane_t_ParamLimits

0xf69c,	// (0x00087327) main_camera2_pane_t

0x91d5,	// (0x00080e60) cams_zoom_pane_cp4_ParamLimits

0x91d5,	// (0x00080e60) cams_zoom_pane_cp4

0x91e5,	// (0x00080e70) image2_cif_pane_ParamLimits

0x91e5,	// (0x00080e70) image2_cif_pane

0x91fa,	// (0x00080e85) image2_subqcif_pane_ParamLimits

0x91fa,	// (0x00080e85) image2_subqcif_pane

0x9209,	// (0x00080e94) main_video2_pane_g1_ParamLimits

0x9209,	// (0x00080e94) main_video2_pane_g1

0x921b,	// (0x00080ea6) main_video2_pane_g2_ParamLimits

0x921b,	// (0x00080ea6) main_video2_pane_g2

0x922b,	// (0x00080eb6) main_video2_pane_g3_ParamLimits

0x922b,	// (0x00080eb6) main_video2_pane_g3

0x923b,	// (0x00080ec6) main_video2_pane_g4_ParamLimits

0x923b,	// (0x00080ec6) main_video2_pane_g4

0x924b,	// (0x00080ed6) main_video2_pane_g5_ParamLimits

0x924b,	// (0x00080ed6) main_video2_pane_g5

0x925b,	// (0x00080ee6) main_video2_pane_g6_ParamLimits

0x925b,	// (0x00080ee6) main_video2_pane_g6

0x0005,

0xf6ab,	// (0x00087336) main_video2_pane_g_ParamLimits

0xf6ab,	// (0x00087336) main_video2_pane_g

0x926d,	// (0x00080ef8) main_video2_pane_t1_ParamLimits

0x926d,	// (0x00080ef8) main_video2_pane_t1

0x9287,	// (0x00080f12) main_video2_pane_t2_ParamLimits

0x9287,	// (0x00080f12) main_video2_pane_t2

0x92ad,	// (0x00080f38) main_video2_pane_t3_ParamLimits

0x92ad,	// (0x00080f38) main_video2_pane_t3

0x0002,

0xf6b8,	// (0x00087343) main_video2_pane_t_ParamLimits

0xf6b8,	// (0x00087343) main_video2_pane_t

0x8bc0,	// (0x0008084b) call_muted_g2

0x0001,

0xf65a,	// (0x000872e5) call_muted_g

0xe1aa,	// (0x00085e35) main_mup2_pane

0xe737,	// (0x000863c2) main_mup2_pane_g1_ParamLimits

0xe737,	// (0x000863c2) main_mup2_pane_g1

0x92d3,	// (0x00080f5e) main_mup2_pane_g2_ParamLimits

0x92d3,	// (0x00080f5e) main_mup2_pane_g2

0x9555,	// (0x000811e0) main_mup_pane_g13_cp1

0x955d,	// (0x000811e8) mup_volume_pane_cp1

0x92f3,	// (0x00080f7e) main_mup2_pane_g4_ParamLimits

0x92f3,	// (0x00080f7e) main_mup2_pane_g4

0x9308,	// (0x00080f93) main_mup2_pane_g5_ParamLimits

0x9308,	// (0x00080f93) main_mup2_pane_g5

0x931d,	// (0x00080fa8) main_mup2_pane_g6_ParamLimits

0x931d,	// (0x00080fa8) main_mup2_pane_g6

0x9332,	// (0x00080fbd) main_mup2_pane_g7_ParamLimits

0x9332,	// (0x00080fbd) main_mup2_pane_g7

0x0006,

0xf6bf,	// (0x0008734a) main_mup2_pane_g_ParamLimits

0xf6bf,	// (0x0008734a) main_mup2_pane_g

0x934e,	// (0x00080fd9) main_mup2_pane_t1_ParamLimits

0x934e,	// (0x00080fd9) main_mup2_pane_t1

0x9365,	// (0x00080ff0) main_mup2_pane_t2_ParamLimits

0x9365,	// (0x00080ff0) main_mup2_pane_t2

0x937c,	// (0x00081007) main_mup2_pane_t3_ParamLimits

0x937c,	// (0x00081007) main_mup2_pane_t3

0x9393,	// (0x0008101e) main_mup2_pane_t4_ParamLimits

0x9393,	// (0x0008101e) main_mup2_pane_t4

0x93ad,	// (0x00081038) main_mup2_pane_t5_ParamLimits

0x93ad,	// (0x00081038) main_mup2_pane_t5

0x93c7,	// (0x00081052) main_mup2_pane_t6_ParamLimits

0x93c7,	// (0x00081052) main_mup2_pane_t6

0x0005,

0xf6ce,	// (0x00087359) main_mup2_pane_t_ParamLimits

0xf6ce,	// (0x00087359) main_mup2_pane_t

0x93ff,	// (0x0008108a) mup2_visualizer_pane_ParamLimits

0x93ff,	// (0x0008108a) mup2_visualizer_pane

0x9435,	// (0x000810c0) mup_progress_pane_cp_ParamLimits

0x9435,	// (0x000810c0) mup_progress_pane_cp

0x9540,	// (0x000811cb) mup_volume_pane_cp_ParamLimits

0x9540,	// (0x000811cb) mup_volume_pane_cp

0x944c,	// (0x000810d7) mup2_visualizer_pane_g1_ParamLimits

0x944c,	// (0x000810d7) mup2_visualizer_pane_g1

0xe743,	// (0x000863ce) mup2_visualizer_pane_g2_ParamLimits

0xe743,	// (0x000863ce) mup2_visualizer_pane_g2

0x9461,	// (0x000810ec) mup2_visualizer_pane_g3_ParamLimits

0x9461,	// (0x000810ec) mup2_visualizer_pane_g3

0x0002,

0xf6db,	// (0x00087366) mup2_visualizer_pane_g_ParamLimits

0xf6db,	// (0x00087366) mup2_visualizer_pane_g

0x1bd8,	// (0x00079863) aid_size_cell_fmradio

0x8cd6,	// (0x00080961) aid_height_parent_landcape

0x101f,	// (0x00078caa) wml_content_pane_cp

0x1027,	// (0x00078cb2) wml_tabs_pane

0x1030,	// (0x00078cbb) popup_wml_miniature_window

0x1038,	// (0x00078cc3) scroll_pane_cp021

0x104c,	// (0x00078cd7) wml_content_pane_comp8

0xe1aa,	// (0x00085e35) bg_popup_sub_pane_cp05

0xe761,	// (0x000863ec) popup_wml_miniature_window_g1

0xe769,	// (0x000863f4) wml_miniature_view_pane

0x946f,	// (0x000810fa) aid_size_wml_view

0x9477,	// (0x00081102) wml_miniature_view_pane_g1

0x9480,	// (0x0008110b) wml_miniature_view_pane_g2

0x9489,	// (0x00081114) wml_miniature_view_pane_g3

0x9491,	// (0x0008111c) wml_miniature_view_pane_g4

0x9499,	// (0x00081124) wml_miniature_view_pane_g5

0x94a1,	// (0x0008112c) wml_miniature_view_pane_g6

0x94a9,	// (0x00081134) wml_miniature_view_pane_g7

0x94b1,	// (0x0008113c) wml_miniature_view_pane_g8

0x0007,

0xf6e2,	// (0x0008736d) wml_miniature_view_pane_g

0xe737,	// (0x000863c2) background_graphic_ParamLimits

0xe737,	// (0x000863c2) background_graphic

0xe771,	// (0x000863fc) wml_tabs_2_pane

0xe77a,	// (0x00086405) wml_tabs_3_pane_ParamLimits

0xe77a,	// (0x00086405) wml_tabs_3_pane

0xe78c,	// (0x00086417) wml_tabs_4_pane_ParamLimits

0xe78c,	// (0x00086417) wml_tabs_4_pane

0xe7a2,	// (0x0008642d) wml_tabs_5_pane_ParamLimits

0xe7a2,	// (0x0008642d) wml_tabs_5_pane

0xe7bc,	// (0x00086447) wml_tabs_pane_g2_ParamLimits

0xe7bc,	// (0x00086447) wml_tabs_pane_g2

0xe7d0,	// (0x0008645b) wml_tabs_pane_g3_ParamLimits

0xe7d0,	// (0x0008645b) wml_tabs_pane_g3

0x94b9,	// (0x00081144) wml_tabs_2_active_pane_ParamLimits

0x94b9,	// (0x00081144) wml_tabs_2_active_pane

0x94c9,	// (0x00081154) wml_tabs_2_passive_pane_ParamLimits

0x94c9,	// (0x00081154) wml_tabs_2_passive_pane

0x94d9,	// (0x00081164) wml_tabs_3_active_pane_cp_ParamLimits

0x94d9,	// (0x00081164) wml_tabs_3_active_pane_cp

0x94ea,	// (0x00081175) wml_tabs_3_passive_pane_ParamLimits

0x94ea,	// (0x00081175) wml_tabs_3_passive_pane

0x94fb,	// (0x00081186) wml_tabs_3_passive_pane_cp_ParamLimits

0x94fb,	// (0x00081186) wml_tabs_3_passive_pane_cp

0x950c,	// (0x00081197) tabs_4_active_pane

0x9514,	// (0x0008119f) tabs_4_passive_pane

0x951c,	// (0x000811a7) tabs_4_passive_pane_cp

0x9524,	// (0x000811af) tabs_4_passive_pane_cp2

0x8a9b,	// (0x00080726) aid_height_text

0x7a8d,	// (0x0007f718) mup_volume_cont_pane_ParamLimits

0x7a8d,	// (0x0007f718) mup_volume_cont_pane

0x59b5,	// (0x0007d640) aid_size_cell_pinb

0x0a21,	// (0x000786ac) aid_size_list_pinb

0x941e,	// (0x000810a9) mup2_volume_cont_pane_ParamLimits

0x941e,	// (0x000810a9) mup2_volume_cont_pane

0x952c,	// (0x000811b7) mup2_volume_cont_pane_g1_ParamLimits

0x952c,	// (0x000811b7) mup2_volume_cont_pane_g1

0x5648,	// (0x0007d2d3) aid_size_cell_touch_ParamLimits

0x5648,	// (0x0007d2d3) aid_size_cell_touch

0x5895,	// (0x0007d520) touch_pane_ParamLimits

0x5895,	// (0x0007d520) touch_pane

0xdd39,	// (0x000859c4) main_rss2_pane

0xe7ed,	// (0x00086478) listscroll_rss2_pane

0xe7f6,	// (0x00086481) rss2_navigation_pane

0xe7fe,	// (0x00086489) list_rss2_pane

0x1743,	// (0x000793ce) scroll_pane_cp22

0xe806,	// (0x00086491) rss2_navigation_pane_g1

0xe80f,	// (0x0008649a) rss2_navigation_pane_g2

0xe817,	// (0x000864a2) rss2_navigation_pane_g3

0x0002,

0xf6f3,	// (0x0008737e) rss2_navigation_pane_g

0xe81f,	// (0x000864aa) rss2_navigation_pane_t1

0x9565,	// (0x000811f0) rss2_list_single_pane_ParamLimits

0x9565,	// (0x000811f0) rss2_list_single_pane

0xe82d,	// (0x000864b8) rss2_list_single_pane_t2

0xe83b,	// (0x000864c6) rss2_list_single_pane_t3_ParamLimits

0xe83b,	// (0x000864c6) rss2_list_single_pane_t3

0xe858,	// (0x000864e3) rss2_list_single_pane_t4

0x7207,	// (0x0007ee92) smil_status_pane_g1

0xe64a,	// (0x000862d5) main_image2_pane_ParamLimits

0xe64a,	// (0x000862d5) main_image2_pane

0x9131,	// (0x00080dbc) main_camera2_pane_g9_ParamLimits

0x9131,	// (0x00080dbc) main_camera2_pane_g9

0x9185,	// (0x00080e10) main_camera2_pane_t5_ParamLimits

0x9185,	// (0x00080e10) main_camera2_pane_t5

0x9197,	// (0x00080e22) main_camera2_pane_t6_ParamLimits

0x9197,	// (0x00080e22) main_camera2_pane_t6

0x95a1,	// (0x0008122c) main_image2_pane_g1_ParamLimits

0x95a1,	// (0x0008122c) main_image2_pane_g1

0x8111,	// (0x0007fd9c) smil2_video_pane_ParamLimits

0x8111,	// (0x0007fd9c) smil2_video_pane

0x095f,	// (0x000785ea) aid_zoom_text_primary_cp

0xdd8f,	// (0x00085a1a) popup_preview_fixed_window

0x0f88,	// (0x00078c13) im_reading_pane_g1

0x907b,	// (0x00080d06) cams2_bc_adjust_pane_cp_ParamLimits

0x907b,	// (0x00080d06) cams2_bc_adjust_pane_cp

0x91c7,	// (0x00080e52) cams2_bc_adjust_pane_ParamLimits

0x91c7,	// (0x00080e52) cams2_bc_adjust_pane

0xf127,	// (0x00086db2) cams2_bc_adjust_pane_g1

0x95ad,	// (0x00081238) cams2_slider_pane

0x95b6,	// (0x00081241) cams2_slider_pane_g1

0x95bf,	// (0x0008124a) cams2_slider_pane_g2

0x0006,

0xf6fa,	// (0x00087385) cams2_slider_pane_g

0x5a8b,	// (0x0007d716) calc_display_pane_ParamLimits

0x5aa9,	// (0x0007d734) calc_paper_pane_ParamLimits

0x5ac5,	// (0x0007d750) grid_calc_pane_ParamLimits

0x751a,	// (0x0007f1a5) popup_clock_digital_window_t1_ParamLimits

0x1b75,	// (0x00079800) main_image_pane_t1

0x5a71,	// (0x0007d6fc) aid_size_cell_calc_ParamLimits

0x5a71,	// (0x0007d6fc) aid_size_cell_calc

0x8d08,	// (0x00080993) popup_blid_sat_info2_window_ParamLimits

0x8d08,	// (0x00080993) popup_blid_sat_info2_window

0xe86e,	// (0x000864f9) aid_size_cell_blid

0xe876,	// (0x00086501) bg_popup_window_pane_cp07

0xe899,	// (0x00086524) grid_popup_blid_pane

0xe8a3,	// (0x0008652e) heading_pane_cp05_ParamLimits

0xe8a3,	// (0x0008652e) heading_pane_cp05

0xe96d,	// (0x000865f8) cell_popup_blid_pane_ParamLimits

0xe96d,	// (0x000865f8) cell_popup_blid_pane

0xe993,	// (0x0008661e) cell_popup_blid_pane_g1

0xe99b,	// (0x00086626) cell_popup_blid_pane_t1

0x93e4,	// (0x0008106f) mup2_indicator_pane_ParamLimits

0x93e4,	// (0x0008106f) mup2_indicator_pane

0x1890,	// (0x0007951b) mup2_visualizer_osc_pane

0xe74f,	// (0x000863da) mup2_visualizer_spec_pane_ParamLimits

0xe74f,	// (0x000863da) mup2_visualizer_spec_pane

0x95d9,	// (0x00081264) mup2_spec_half_pane

0x95e2,	// (0x0008126d) mup2_spec_half_pane_cp

0x95ec,	// (0x00081277) mup2_spec_bar_pane_ParamLimits

0x95ec,	// (0x00081277) mup2_spec_bar_pane

0xe6e4,	// (0x0008636f) mup2_spec_bar_pane_g1

0xe6ee,	// (0x00086379) mup2_spec_bar_pane_g2

0x0001,

0xf66d,	// (0x000872f8) mup2_spec_bar_pane_g

0x960b,	// (0x00081296) mup2_osc_middle_pane

0xe700,	// (0x0008638b) mup2_visualizer_osc_pane_g1

0xddb9,	// (0x00085a44) popup_number_entry_window_t1_ParamLimits

0xddcc,	// (0x00085a57) popup_number_entry_window_t2_ParamLimits

0xddde,	// (0x00085a69) popup_number_entry_window_t3_ParamLimits

0x58ec,	// (0x0007d577) popup_number_entry_window_t5_ParamLimits

0x58ec,	// (0x0007d577) popup_number_entry_window_t5

0xf12f,	// (0x00086dba) popup_number_entry_window_t_ParamLimits

0xddf0,	// (0x00085a7b) text_title_cp2_ParamLimits

0x7df8,	// (0x0007fa83) aid_hotspot_pointer_text2_pane

0x7e92,	// (0x0007fb1d) main_viewer_pane_g9_ParamLimits

0x7e92,	// (0x0007fb1d) main_viewer_pane_g9

0x11b7,	// (0x00078e42) cale_month_pane_t1_ParamLimits

0x124c,	// (0x00078ed7) bg_cale_pane_ParamLimits

0x1264,	// (0x00078eef) list_cale_pane_ParamLimits

0x0cd8,	// (0x00078963) listscroll_cale_day_pane_t1

0x1275,	// (0x00078f00) scroll_pane_cp09_ParamLimits

0x7acc,	// (0x0007f757) main_mup_eq_pane_t1_ParamLimits

0x7acc,	// (0x0007f757) main_mup_eq_pane_t1

0x7ae6,	// (0x0007f771) main_mup_eq_pane_t2_ParamLimits

0x7ae6,	// (0x0007f771) main_mup_eq_pane_t2

0x7afe,	// (0x0007f789) main_mup_eq_pane_t3_ParamLimits

0x7afe,	// (0x0007f789) main_mup_eq_pane_t3

0x7b16,	// (0x0007f7a1) main_mup_eq_pane_t4_ParamLimits

0x7b16,	// (0x0007f7a1) main_mup_eq_pane_t4

0x7b2e,	// (0x0007f7b9) main_mup_eq_pane_t5_ParamLimits

0x7b2e,	// (0x0007f7b9) main_mup_eq_pane_t5

0x7b46,	// (0x0007f7d1) main_mup_eq_pane_t6_ParamLimits

0x7b46,	// (0x0007f7d1) main_mup_eq_pane_t6

0x7b5a,	// (0x0007f7e5) main_mup_eq_pane_t7_ParamLimits

0x7b5a,	// (0x0007f7e5) main_mup_eq_pane_t7

0x7b6e,	// (0x0007f7f9) main_mup_eq_pane_t8_ParamLimits

0x7b6e,	// (0x0007f7f9) main_mup_eq_pane_t8

0x7b84,	// (0x0007f80f) main_mup_eq_pane_t9_ParamLimits

0x7b84,	// (0x0007f80f) main_mup_eq_pane_t9

0x7b9c,	// (0x0007f827) main_mup_eq_pane_t10_ParamLimits

0x7b9c,	// (0x0007f827) main_mup_eq_pane_t10

0x0009,

0xf4bc,	// (0x00087147) main_mup_eq_pane_t_ParamLimits

0xf4bc,	// (0x00087147) main_mup_eq_pane_t

0x7c59,	// (0x0007f8e4) mup_equalizer_pane_cp5_ParamLimits

0x7c6f,	// (0x0007f8fa) mup_equalizer_pane_cp6_ParamLimits

0x7c87,	// (0x0007f912) mup_equalizer_pane_cp7_ParamLimits

0xdd39,	// (0x000859c4) main_gallery_pane

0xe709,	// (0x00086394) smil2_volume_pane

0xe711,	// (0x0008639c) smil_status_volume_pane_g1_ParamLimits

0xe724,	// (0x000863af) smil_status_volume_pane_g2_ParamLimits

0x8ef2,	// (0x00080b7d) smil_status_volume_pane_g3_ParamLimits

0xf672,	// (0x000872fd) smil_status_volume_pane_g_ParamLimits

0xe876,	// (0x00086501) bg_popup_window_pane_cp07_ParamLimits

0xe884,	// (0x0008650f) blid_firmament_pane

0x9614,	// (0x0008129f) aid_size_cell_gallery_ParamLimits

0x9614,	// (0x0008129f) aid_size_cell_gallery

0x9622,	// (0x000812ad) grid_gallery_pane_ParamLimits

0x9622,	// (0x000812ad) grid_gallery_pane

0x9632,	// (0x000812bd) cell_gallery_pane_ParamLimits

0x9632,	// (0x000812bd) cell_gallery_pane

0xe9a9,	// (0x00086634) bg_cell_gallery_focus_pane_ParamLimits

0xe9a9,	// (0x00086634) bg_cell_gallery_focus_pane

0xe9bb,	// (0x00086646) cell_gallery_pane_g1_ParamLimits

0xe9bb,	// (0x00086646) cell_gallery_pane_g1

0x9680,	// (0x0008130b) cell_gallery_pane_g2_ParamLimits

0x9680,	// (0x0008130b) cell_gallery_pane_g2

0x968d,	// (0x00081318) cell_gallery_pane_g3_ParamLimits

0x968d,	// (0x00081318) cell_gallery_pane_g3

0xe9c7,	// (0x00086652) cell_gallery_pane_g4_ParamLimits

0xe9c7,	// (0x00086652) cell_gallery_pane_g4

0x0003,

0xf720,	// (0x000873ab) cell_gallery_pane_g_ParamLimits

0xf720,	// (0x000873ab) cell_gallery_pane_g

0xe9d3,	// (0x0008665e) bg_cell_gallery_focus_pane_g1

0xe9db,	// (0x00086666) bg_cell_gallery_focus_pane_g2

0xe9e3,	// (0x0008666e) bg_cell_gallery_focus_pane_g3

0xe9eb,	// (0x00086676) bg_cell_gallery_focus_pane_g4

0xe9f3,	// (0x0008667e) bg_cell_gallery_focus_pane_g5

0xe9fb,	// (0x00086686) bg_cell_gallery_focus_pane_g6

0xea03,	// (0x0008668e) bg_cell_gallery_focus_pane_g7

0xea0b,	// (0x00086696) bg_cell_gallery_focus_pane_g8

0x0007,

0xf729,	// (0x000873b4) bg_cell_gallery_focus_pane_g

0xea13,	// (0x0008669e) aid_firma_cardinal

0xea27,	// (0x000866b2) blid_firmament_pane_t1

0xea3e,	// (0x000866c9) blid_firmament_pane_t2

0xea55,	// (0x000866e0) blid_firmament_pane_t3

0xea6c,	// (0x000866f7) blid_firmament_pane_t4

0x0003,

0xf73a,	// (0x000873c5) blid_firmament_pane_t

0xea83,	// (0x0008670e) blid_sat_info_pane

0xea93,	// (0x0008671e) blid_sat_info_pane_g1

0xea93,	// (0x0008671e) blid_sat_info_pane_g2

0x0001,

0xf743,	// (0x000873ce) blid_sat_info_pane_g

0xea9d,	// (0x00086728) blid_sat_info_pane_t1

0xeaab,	// (0x00086736) smil2_volume_content_pane

0xeab4,	// (0x0008673f) smil2_volume_pane_g1

0xeabc,	// (0x00086747) smil2_volume_content_pane_g1

0xeac5,	// (0x00086750) smil2_volume_content_pane_g2

0xeace,	// (0x00086759) smil2_volume_content_pane_g3

0xead7,	// (0x00086762) smil2_volume_content_pane_g4

0xeae0,	// (0x0008676b) smil2_volume_content_pane_g5

0xeae9,	// (0x00086774) smil2_volume_content_pane_g6

0xeaf2,	// (0x0008677d) smil2_volume_content_pane_g7

0xeafb,	// (0x00086786) smil2_volume_content_pane_g8

0xeb04,	// (0x0008678f) smil2_volume_content_pane_g9

0xeb0d,	// (0x00086798) smil2_volume_content_pane_g10

0x0009,

0xf748,	// (0x000873d3) smil2_volume_content_pane_g

0x602d,	// (0x0007dcb8) cale_week_day_heading_pane_t1_ParamLimits

0x6041,	// (0x0007dccc) cale_week_day_heading_pane_t2_ParamLimits

0x6055,	// (0x0007dce0) cale_week_day_heading_pane_t3_ParamLimits

0x6069,	// (0x0007dcf4) cale_week_day_heading_pane_t4_ParamLimits

0x607d,	// (0x0007dd08) cale_week_day_heading_pane_t5_ParamLimits

0x6091,	// (0x0007dd1c) cale_week_day_heading_pane_t6_ParamLimits

0x60a5,	// (0x0007dd30) cale_week_day_heading_pane_t7_ParamLimits

0xf234,	// (0x00086ebf) cale_week_day_heading_pane_t_ParamLimits

0x0cea,	// (0x00078975) bg_cale_side_pane_ParamLimits

0x60b9,	// (0x0007dd44) cale_week_time_pane_t1_ParamLimits

0x60d1,	// (0x0007dd5c) cale_week_time_pane_t2_ParamLimits

0x60e9,	// (0x0007dd74) cale_week_time_pane_t3_ParamLimits

0x6101,	// (0x0007dd8c) cale_week_time_pane_t4_ParamLimits

0x6119,	// (0x0007dda4) cale_week_time_pane_t5_ParamLimits

0x6131,	// (0x0007ddbc) cale_week_time_pane_t6_ParamLimits

0x6149,	// (0x0007ddd4) cale_week_time_pane_t7_ParamLimits

0x6161,	// (0x0007ddec) cale_week_time_pane_t8_ParamLimits

0xf243,	// (0x00086ece) cale_week_time_pane_t_ParamLimits

0x6179,	// (0x0007de04) cell_cale_week_pane_g2_ParamLimits

0x0cea,	// (0x00078975) bg_cale_side_pane_cp01_ParamLimits

0x7094,	// (0x0007ed1f) cale_month_week_pane_t1_ParamLimits

0x70ab,	// (0x0007ed36) cale_month_week_pane_t2_ParamLimits

0x70c2,	// (0x0007ed4d) cale_month_week_pane_t3_ParamLimits

0x70d9,	// (0x0007ed64) cale_month_week_pane_t4_ParamLimits

0x70f0,	// (0x0007ed7b) cale_month_week_pane_t5_ParamLimits

0x7107,	// (0x0007ed92) cale_month_week_pane_t6_ParamLimits

0xf31c,	// (0x00086fa7) cale_month_week_pane_t_ParamLimits

0x71d4,	// (0x0007ee5f) cell_cale_month_pane_g1_ParamLimits

0xdd39,	// (0x000859c4) main_cale_event_viewer_pane

0xdd39,	// (0x000859c4) listscroll_cale_event_viewer_pane

0xeb16,	// (0x000867a1) list_cale_ev_pane

0xeb1e,	// (0x000867a9) scroll_pane_cp023

0xeb2a,	// (0x000867b5) field_cale_ev_pane_ParamLimits

0xeb2a,	// (0x000867b5) field_cale_ev_pane

0xeb44,	// (0x000867cf) field_cale_ev_content_pane_ParamLimits

0xeb44,	// (0x000867cf) field_cale_ev_content_pane

0xeb50,	// (0x000867db) field_cale_ev_pane_g1_ParamLimits

0xeb50,	// (0x000867db) field_cale_ev_pane_g1

0xeb5c,	// (0x000867e7) field_cale_ev_pane_g2_ParamLimits

0xeb5c,	// (0x000867e7) field_cale_ev_pane_g2

0xeb74,	// (0x000867ff) field_cale_ev_pane_g3_ParamLimits

0xeb74,	// (0x000867ff) field_cale_ev_pane_g3

0x0002,

0xf75d,	// (0x000873e8) field_cale_ev_pane_g_ParamLimits

0xf75d,	// (0x000873e8) field_cale_ev_pane_g

0xeb8c,	// (0x00086817) field_cale_ev_pane_t1_ParamLimits

0xeb8c,	// (0x00086817) field_cale_ev_pane_t1

0xeba3,	// (0x0008682e) field_cale_ev_content_pane_t1_ParamLimits

0xeba3,	// (0x0008682e) field_cale_ev_content_pane_t1

0x1a19,	// (0x000796a4) bg_button_pane_cp01

0x0b22,	// (0x000787ad) listscroll_cale_week_pane_ParamLimits

0x5e56,	// (0x0007dae1) popup_toolbar_window_cp01

0x0cd8,	// (0x00078963) listscroll_cale_week_pane_t1_ParamLimits

0x0b22,	// (0x000787ad) listscroll_cale_day_pane_ParamLimits

0x5e56,	// (0x0007dae1) popup_toolbar_window_cp02

0x0cd8,	// (0x00078963) listscroll_cale_day_pane_t1_ParamLimits

0x0b22,	// (0x000787ad) main_cale_month_pane_ParamLimits

0x8dcc,	// (0x00080a57) popup_toolbar_window_cp03_ParamLimits

0x8dcc,	// (0x00080a57) popup_toolbar_window_cp03

0x8023,	// (0x0007fcae) main_image_pane_g2_ParamLimits

0x8023,	// (0x0007fcae) main_image_pane_g2

0x802f,	// (0x0007fcba) main_image_pane_g3_ParamLimits

0x802f,	// (0x0007fcba) main_image_pane_g3

0x0002,

0xf54e,	// (0x000871d9) main_image_pane_g_ParamLimits

0xf54e,	// (0x000871d9) main_image_pane_g

0x1b75,	// (0x00079800) main_image_pane_t1_ParamLimits

0x803b,	// (0x0007fcc6) main_image_pane_t2_ParamLimits

0x803b,	// (0x0007fcc6) main_image_pane_t2

0x804d,	// (0x0007fcd8) main_image_pane_t3_ParamLimits

0x804d,	// (0x0007fcd8) main_image_pane_t3

0x805f,	// (0x0007fcea) main_image_pane_t4_ParamLimits

0x805f,	// (0x0007fcea) main_image_pane_t4

0x0003,

0xf555,	// (0x000871e0) main_image_pane_t_ParamLimits

0xf555,	// (0x000871e0) main_image_pane_t

0x8071,	// (0x0007fcfc) popup_image_details_window_cp01

0x807b,	// (0x0007fd06) popup_toobar_trans_pane_cp01_ParamLimits

0x807b,	// (0x0007fd06) popup_toobar_trans_pane_cp01

0x8d51,	// (0x000809dc) popup_image_details_window_ParamLimits

0x8d51,	// (0x000809dc) popup_image_details_window

0xe66a,	// (0x000862f5) popup_image_focus_window

0x906d,	// (0x00080cf8) camera2_autofocus_pane_ParamLimits

0x906d,	// (0x00080cf8) camera2_autofocus_pane

0xdd39,	// (0x000859c4) bg_popup_sub_pane_cp06

0xebc0,	// (0x0008684b) popup_image_focus_window_g1

0xebc8,	// (0x00086853) popup_image_focus_window_g2

0xebd0,	// (0x0008685b) popup_image_focus_window_g3

0xebd8,	// (0x00086863) popup_image_focus_window_g4

0x0003,

0xf764,	// (0x000873ef) popup_image_focus_window_g

0xebe0,	// (0x0008686b) popup_image_focus_window_t1

0xebee,	// (0x00086879) popup_image_focus_window_t2

0xebfe,	// (0x00086889) popup_image_focus_window_t3

0x0002,

0xf76d,	// (0x000873f8) popup_image_focus_window_t

0xec0c,	// (0x00086897) camera2_autofocus_pane_g1

0xe64a,	// (0x000862d5) bg_tb_trans_pane_cp01

0xec1a,	// (0x000868a5) popup_image_details_window_g1

0xec2d,	// (0x000868b8) popup_image_details_window_g2

0x0002,

0xf77f,	// (0x0008740a) popup_image_details_window_g

0xec56,	// (0x000868e1) popup_image_details_window_t1

0xec68,	// (0x000868f3) popup_image_details_window_t2

0xec81,	// (0x0008690c) popup_image_details_window_t3

0xec95,	// (0x00086920) popup_image_details_window_t4

0xecb0,	// (0x0008693b) popup_image_details_window_t5

0x0004,

0xf786,	// (0x00087411) popup_image_details_window_t

0x0af4,	// (0x0007877f) bg_calc_paper_pane_ParamLimits

0x5bbe,	// (0x0007d849) grid_highlight_pane_cp013

0x5bc8,	// (0x0007d853) list_calc_pane_ParamLimits

0x5bda,	// (0x0007d865) scroll_pane_cp024

0x0b22,	// (0x000787ad) bg_calc_display_pane_ParamLimits

0x5be2,	// (0x0007d86d) calc_display_pane_t1_ParamLimits

0x5bf7,	// (0x0007d882) calc_display_pane_t2_ParamLimits

0x5c0c,	// (0x0007d897) calc_display_pane_t3_ParamLimits

0xf1b6,	// (0x00086e41) calc_display_pane_t_ParamLimits

0x5cf3,	// (0x0007d97e) cell_calc_pane_g2

0x0001,

0xf1d3,	// (0x00086e5e) cell_calc_pane_g

0x5cfc,	// (0x0007d987) cell_calc_pane_t1

0x0ba5,	// (0x00078830) grid_highlight_pane_cp02_ParamLimits

0x0bbb,	// (0x00078846) toolbar_button_pane_cp01_ParamLimits

0x0bbb,	// (0x00078846) toolbar_button_pane_cp01

0x1bba,	// (0x00079845) temp_image_control_pane_ParamLimits

0x1bba,	// (0x00079845) temp_image_control_pane

0xe64a,	// (0x000862d5) main_mp3_pane

0xecca,	// (0x00086955) temp_image_control_pane_g1_ParamLimits

0xecca,	// (0x00086955) temp_image_control_pane_g1

0xecd8,	// (0x00086963) temp_image_control_pane_g2_ParamLimits

0xecd8,	// (0x00086963) temp_image_control_pane_g2

0xecea,	// (0x00086975) temp_image_control_pane_g3_ParamLimits

0xecea,	// (0x00086975) temp_image_control_pane_g3

0x96ca,	// (0x00081355) temp_image_control_pane_g4_ParamLimits

0x96ca,	// (0x00081355) temp_image_control_pane_g4

0x0003,

0xf791,	// (0x0008741c) temp_image_control_pane_g_ParamLimits

0xf791,	// (0x0008741c) temp_image_control_pane_g

0xecca,	// (0x00086955) main_mp3_pane_g1

0x96db,	// (0x00081366) main_mp3_pane_g2

0x0007,

0xf79a,	// (0x00087425) main_mp3_pane_g

0xed2d,	// (0x000869b8) main_mp3_pane_t1

0x0dd3,	// (0x00078a5e) main_camera_pane_g8_ParamLimits

0x0dd3,	// (0x00078a5e) main_camera_pane_g8

0x6409,	// (0x0007e094) main_video_pane_g7_ParamLimits

0x6409,	// (0x0007e094) main_video_pane_g7

0x91b5,	// (0x00080e40) main_camera2_pane_t7_ParamLimits

0x91b5,	// (0x00080e40) main_camera2_pane_t7

0x0fdf,	// (0x00078c6a) scroll_pane_cp025_ParamLimits

0x0fdf,	// (0x00078c6a) scroll_pane_cp025

0x0ff3,	// (0x00078c7e) scroll_pane_cp026_ParamLimits

0x0ff3,	// (0x00078c7e) scroll_pane_cp026

0x1002,	// (0x00078c8d) wml_content_pane_ParamLimits

0xdd39,	// (0x000859c4) main_touch_calib_pane

0x977f,	// (0x0008140a) main_touch_calib_pane_g1

0x978b,	// (0x00081416) main_touch_calib_pane_g2

0x9797,	// (0x00081422) main_touch_calib_pane_g3

0x97a3,	// (0x0008142e) main_touch_calib_pane_g4

0x0003,

0xf7b8,	// (0x00087443) main_touch_calib_pane_g

0x97af,	// (0x0008143a) main_touch_calib_pane_t1

0x97c6,	// (0x00081451) main_touch_calib_pane_t2

0x0004,

0xf7c1,	// (0x0008744c) main_touch_calib_pane_t

0x17d1,	// (0x0007945c) mup_progress_pane_cp02

0x17f0,	// (0x0007947b) navi_pane_g1

0x1852,	// (0x000794dd) navi_pane_mp_t3

0xe64a,	// (0x000862d5) main_mp3_pane_ParamLimits

0x8e0a,	// (0x00080a95) navi_pane_ParamLimits

0xecca,	// (0x00086955) main_mp3_pane_g1_ParamLimits

0x96db,	// (0x00081366) main_mp3_pane_g2_ParamLimits

0x96e7,	// (0x00081372) main_mp3_pane_g3_ParamLimits

0x96e7,	// (0x00081372) main_mp3_pane_g3

0x96f3,	// (0x0008137e) main_mp3_pane_g4_ParamLimits

0x96f3,	// (0x0008137e) main_mp3_pane_g4

0xecfa,	// (0x00086985) main_mp3_pane_g5_ParamLimits

0xecfa,	// (0x00086985) main_mp3_pane_g5

0xed08,	// (0x00086993) main_mp3_pane_g6_ParamLimits

0xed08,	// (0x00086993) main_mp3_pane_g6

0xed15,	// (0x000869a0) main_mp3_pane_g7_ParamLimits

0xed15,	// (0x000869a0) main_mp3_pane_g7

0xed21,	// (0x000869ac) main_mp3_pane_g8_ParamLimits

0xed21,	// (0x000869ac) main_mp3_pane_g8

0xf79a,	// (0x00087425) main_mp3_pane_g_ParamLimits

0x96ff,	// (0x0008138a) main_mp3_pane_t2

0x970f,	// (0x0008139a) main_mp3_pane_t3

0xed3b,	// (0x000869c6) main_mp3_pane_t4

0xed49,	// (0x000869d4) main_mp3_pane_t5

0x0005,

0xf7ab,	// (0x00087436) main_mp3_pane_t

0xed57,	// (0x000869e2) mup_progress_pane_cp01

0x095f,	// (0x000785ea) aid_zoom_text_secondary2

0xeb16,	// (0x000867a1) list_cale_ev2_pane

0xeb1e,	// (0x000867a9) scroll_pane_cp023_ParamLimits

0x9819,	// (0x000814a4) field_cale_ev2_pane_ParamLimits

0x9819,	// (0x000814a4) field_cale_ev2_pane

0x984d,	// (0x000814d8) field_cale_ev2_pane_g1_ParamLimits

0x984d,	// (0x000814d8) field_cale_ev2_pane_g1

0x9859,	// (0x000814e4) field_cale_ev2_pane_g2_ParamLimits

0x9859,	// (0x000814e4) field_cale_ev2_pane_g2

0x9871,	// (0x000814fc) field_cale_ev2_pane_g3_ParamLimits

0x9871,	// (0x000814fc) field_cale_ev2_pane_g3

0x0003,

0xf7cc,	// (0x00087457) field_cale_ev2_pane_g_ParamLimits

0xf7cc,	// (0x00087457) field_cale_ev2_pane_g

0x2333,	// (0x00079fbe) field_cale_ev2_pane_t1_ParamLimits

0x2333,	// (0x00079fbe) field_cale_ev2_pane_t1

0x234a,	// (0x00079fd5) field_cale_ev2_pane_t2_ParamLimits

0x234a,	// (0x00079fd5) field_cale_ev2_pane_t2

0x0001,

0xf7d5,	// (0x00087460) field_cale_ev2_pane_t_ParamLimits

0xf7d5,	// (0x00087460) field_cale_ev2_pane_t

0x7efa,	// (0x0007fb85) main_postcard_pane_g5_ParamLimits

0x7efa,	// (0x0007fb85) main_postcard_pane_g5

0x7f08,	// (0x0007fb93) main_postcard_pane_g6_ParamLimits

0x7f08,	// (0x0007fb93) main_postcard_pane_g6

0x6249,	// (0x0007ded4) camera2_autofocus_pane_cp_ParamLimits

0x6249,	// (0x0007ded4) camera2_autofocus_pane_cp

0xe64a,	// (0x000862d5) main_mup3_pane

0x98a9,	// (0x00081534) main_mup3_pane_g1_ParamLimits

0x98a9,	// (0x00081534) main_mup3_pane_g1

0x98ca,	// (0x00081555) main_mup3_pane_g2_ParamLimits

0x98ca,	// (0x00081555) main_mup3_pane_g2

0x9945,	// (0x000815d0) main_mup3_pane_g3_ParamLimits

0x9945,	// (0x000815d0) main_mup3_pane_g3

0x9984,	// (0x0008160f) main_mup3_pane_g4_ParamLimits

0x9984,	// (0x0008160f) main_mup3_pane_g4

0x99c3,	// (0x0008164e) main_mup3_pane_g5_ParamLimits

0x99c3,	// (0x0008164e) main_mup3_pane_g5

0x9a04,	// (0x0008168f) main_mup3_pane_g6_ParamLimits

0x9a04,	// (0x0008168f) main_mup3_pane_g6

0xed5f,	// (0x000869ea) main_mup3_pane_g7_ParamLimits

0xed5f,	// (0x000869ea) main_mup3_pane_g7

0x0007,

0xf7e5,	// (0x00087470) main_mup3_pane_g_ParamLimits

0xf7e5,	// (0x00087470) main_mup3_pane_g

0x9a76,	// (0x00081701) main_mup3_pane_t1_ParamLimits

0x9a76,	// (0x00081701) main_mup3_pane_t1

0x9ae5,	// (0x00081770) main_mup3_pane_t2_ParamLimits

0x9ae5,	// (0x00081770) main_mup3_pane_t2

0x9bae,	// (0x00081839) main_mup3_pane_t4_ParamLimits

0x9bae,	// (0x00081839) main_mup3_pane_t4

0x9c00,	// (0x0008188b) main_mup3_pane_t5_ParamLimits

0x9c00,	// (0x0008188b) main_mup3_pane_t5

0x9ca8,	// (0x00081933) main_mup3_pane_t6_ParamLimits

0x9ca8,	// (0x00081933) main_mup3_pane_t6

0x0005,

0xf7f6,	// (0x00087481) main_mup3_pane_t_ParamLimits

0xf7f6,	// (0x00087481) main_mup3_pane_t

0x9d50,	// (0x000819db) mup3_progress_pane_ParamLimits

0x9d50,	// (0x000819db) mup3_progress_pane

0x9db5,	// (0x00081a40) popup_mup3_control_window_ParamLimits

0x9db5,	// (0x00081a40) popup_mup3_control_window

0xed6d,	// (0x000869f8) popup_mup3_text_window

0x9dce,	// (0x00081a59) mup3_progress_pane_t1

0x9de5,	// (0x00081a70) mup3_progress_pane_t2

0xed75,	// (0x00086a00) mup3_progress_pane_t3

0x0002,

0xf803,	// (0x0008748e) mup3_progress_pane_t

0xed8c,	// (0x00086a17) mup_progress_pane_cp03

0xdd39,	// (0x000859c4) bg_tb_trans_pane_cp04

0x9dfc,	// (0x00081a87) mup3_volume_pane

0x9e04,	// (0x00081a8f) popup_mup3_control_window_g1

0x9e0d,	// (0x00081a98) mup3_volume_pane_g1

0x9e16,	// (0x00081aa1) mup3_volume_pane_g2

0x9e1f,	// (0x00081aaa) mup3_volume_pane_g3

0x0002,

0xf80a,	// (0x00087495) mup3_volume_pane_g

0xdd39,	// (0x000859c4) bg_tb_trans_pane_cp03

0xed9c,	// (0x00086a27) popup_mup3_text_window_g1

0xeda4,	// (0x00086a2f) popup_mup3_text_window_t1

0x0b7c,	// (0x00078807) list_calc_item_pane_g1_ParamLimits

0xe7e4,	// (0x0008646f) mup_volume_pane_cp_g1

0x97dd,	// (0x00081468) main_touch_calib_pane_t3

0x97f1,	// (0x0008147c) main_touch_calib_pane_t4

0x9805,	// (0x00081490) main_touch_calib_pane_t5

0xdd43,	// (0x000859ce) aid_cell_size_toolbar2

0xdd4b,	// (0x000859d6) aid_popup3_width_pane

0x094f,	// (0x000785da) aid_zoom_text_msg_primary

0x6233,	// (0x0007debe) vorec_t7

0x0b40,	// (0x000787cb) bg_calc_paper_pane_g1_ParamLimits

0x0b58,	// (0x000787e3) bg_calc_paper_pane_g2_ParamLimits

0x0b4c,	// (0x000787d7) bg_calc_paper_pane_g3_ParamLimits

0x0b70,	// (0x000787fb) bg_calc_paper_pane_g4_ParamLimits

0x0b64,	// (0x000787ef) bg_calc_paper_pane_g5_ParamLimits

0x5c4b,	// (0x0007d8d6) bg_calc_paper_pane_g6_ParamLimits

0x5c5c,	// (0x0007d8e7) bg_calc_paper_pane_g7_ParamLimits

0x5c6d,	// (0x0007d8f8) bg_calc_paper_pane_g8_ParamLimits

0xf1bd,	// (0x00086e48) bg_calc_paper_pane_g_ParamLimits

0x5c7e,	// (0x0007d909) calc_bg_paper_pane_g9_ParamLimits

0x6332,	// (0x0007dfbd) image_qvga_pane_ParamLimits

0x6332,	// (0x0007dfbd) image_qvga_pane

0x09f1,	// (0x0007867c) bg_popup_sub_pane_cp04_ParamLimits

0x1af1,	// (0x0007977c) popup_mup_playback_window_g1_ParamLimits

0x1afd,	// (0x00079788) popup_mup_playback_window_t1_ParamLimits

0x1b12,	// (0x0007979d) popup_mup_playback_window_t2_ParamLimits

0xf549,	// (0x000871d4) popup_mup_playback_window_t_ParamLimits

0x92e4,	// (0x00080f6f) main_mup2_pane_g3_ParamLimits

0x92e4,	// (0x00080f6f) main_mup2_pane_g3

0x65db,	// (0x0007e266) popup_toolbar_window_cp04

0x1f07,	// (0x00079b92) popup_call2_audio_second_window_g3_ParamLimits

0x1f07,	// (0x00079b92) popup_call2_audio_second_window_g3

0x8344,	// (0x0007ffcf) popup_call2_audio_first_window_g4_ParamLimits

0x8344,	// (0x0007ffcf) popup_call2_audio_first_window_g4

0x89c3,	// (0x0008064e) popup_call2_audio_in_window_g4_ParamLimits

0x89c3,	// (0x0008064e) popup_call2_audio_in_window_g4

0x8016,	// (0x0007fca1) aid_area_sk_bg_cut_ParamLimits

0x8016,	// (0x0007fca1) aid_area_sk_bg_cut

0x1b27,	// (0x000797b2) aid_area_sk_bg_cut_2_ParamLimits

0x1b27,	// (0x000797b2) aid_area_sk_bg_cut_2

0x9670,	// (0x000812fb) aid_placing_details_win

0x9678,	// (0x00081303) aid_placing_details_win_2

0xec0c,	// (0x00086897) camera2_autofocus_pane_g1_ParamLimits

0x584f,	// (0x0007d4da) popup_fixed_preview_cale_window_ParamLimits

0x584f,	// (0x0007d4da) popup_fixed_preview_cale_window

0x18bc,	// (0x00079547) navi_slider_pane_g3

0x18b3,	// (0x0007953e) navi_slider_pane_g4

0x18aa,	// (0x00079535) navi_slider_pane_g5

0x18bc,	// (0x00079547) navi_slider_pane_g6

0x7860,	// (0x0007f4eb) navi_slider_pane_g7

0x19e6,	// (0x00079671) mup_scale_pane_g3

0x19ef,	// (0x0007967a) mup_scale_pane_g4

0x19f8,	// (0x00079683) mup_scale_pane_g5

0x7c9f,	// (0x0007f92a) mup_scale_pane_g6

0x7ca8,	// (0x0007f933) mup_scale_pane_g7

0x18bc,	// (0x00079547) cams2_slider_pane_g3

0xe866,	// (0x000864f1) cams2_slider_pane_g4

0x95c8,	// (0x00081253) cams2_slider_pane_g5

0x18bc,	// (0x00079547) cams2_slider_pane_g6

0x95d0,	// (0x0008125b) cams2_slider_pane_g7

0xea93,	// (0x0008671e) camera2_autofocus_pane_cp_g1

0xedb2,	// (0x00086a3d) bg_popup_preview_window_pane_cp02_ParamLimits

0xedb2,	// (0x00086a3d) bg_popup_preview_window_pane_cp02

0xedbe,	// (0x00086a49) list_fp_cale_pane_ParamLimits

0xedbe,	// (0x00086a49) list_fp_cale_pane

0xedca,	// (0x00086a55) popup_fixed_preview_cale_window_t1_ParamLimits

0xedca,	// (0x00086a55) popup_fixed_preview_cale_window_t1

0x9e28,	// (0x00081ab3) popup_fixed_preview_cale_window_t2_ParamLimits

0x9e28,	// (0x00081ab3) popup_fixed_preview_cale_window_t2

0x9e3d,	// (0x00081ac8) popup_fixed_preview_cale_window_t3_ParamLimits

0x9e3d,	// (0x00081ac8) popup_fixed_preview_cale_window_t3

0x0002,

0xf811,	// (0x0008749c) popup_fixed_preview_cale_window_t_ParamLimits

0xf811,	// (0x0008749c) popup_fixed_preview_cale_window_t

0x9e52,	// (0x00081add) list_single_fp_cale_pane_ParamLimits

0x9e52,	// (0x00081add) list_single_fp_cale_pane

0xede8,	// (0x00086a73) list_single_fp_cale_pane_g1_ParamLimits

0xede8,	// (0x00086a73) list_single_fp_cale_pane_g1

0xedf4,	// (0x00086a7f) list_single_fp_cale_pane_g2_ParamLimits

0xedf4,	// (0x00086a7f) list_single_fp_cale_pane_g2

0x0002,

0xf818,	// (0x000874a3) list_single_fp_cale_pane_g_ParamLimits

0xf818,	// (0x000874a3) list_single_fp_cale_pane_g

0xee0d,	// (0x00086a98) list_single_fp_cale_pane_t1_ParamLimits

0xee0d,	// (0x00086a98) list_single_fp_cale_pane_t1

0xee1f,	// (0x00086aaa) list_single_fp_cale_pane_t2_ParamLimits

0xee1f,	// (0x00086aaa) list_single_fp_cale_pane_t2

0x0001,

0xf81f,	// (0x000874aa) list_single_fp_cale_pane_t_ParamLimits

0xf81f,	// (0x000874aa) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0xdd39,	// (0x000859c4) main_dialer_pane

0x9e66,	// (0x00081af1) aid_cell_size_keypad

0x9e70,	// (0x00081afb) dialer_ne_pane

0x9e7a,	// (0x00081b05) grid_dialer_command_1_pane

0x9e82,	// (0x00081b0d) grid_dialer_command_2_pane

0x9e8a,	// (0x00081b15) grid_dialer_keypad_pane

0x9e9e,	// (0x00081b29) bg_popup_call_pane_cp06_ParamLimits

0x9e9e,	// (0x00081b29) bg_popup_call_pane_cp06

0x9eaa,	// (0x00081b35) dialer_ne_clear_pane_ParamLimits

0x9eaa,	// (0x00081b35) dialer_ne_clear_pane

0xee52,	// (0x00086add) dialer_ne_pane_g1

0xee5a,	// (0x00086ae5) dialer_ne_pane_t1_ParamLimits

0xee5a,	// (0x00086ae5) dialer_ne_pane_t1

0x9eb6,	// (0x00081b41) dialer_ne_pane_t2_ParamLimits

0x9eb6,	// (0x00081b41) dialer_ne_pane_t2

0x9ed3,	// (0x00081b5e) dialer_ne_pane_t3_ParamLimits

0x9ed3,	// (0x00081b5e) dialer_ne_pane_t3

0x0002,

0xf824,	// (0x000874af) dialer_ne_pane_t_ParamLimits

0xf824,	// (0x000874af) dialer_ne_pane_t

0x9ef7,	// (0x00081b82) dialer_ne_pane_t3_copy1_ParamLimits

0x9ef7,	// (0x00081b82) dialer_ne_pane_t3_copy1

0x9f1b,	// (0x00081ba6) cell_dialer_keypad_pane_ParamLimits

0x9f1b,	// (0x00081ba6) cell_dialer_keypad_pane

0x9f32,	// (0x00081bbd) cell_dialer_command_1_pane_ParamLimits

0x9f32,	// (0x00081bbd) cell_dialer_command_1_pane

0x9f48,	// (0x00081bd3) cell_dialer_command_2_pane_ParamLimits

0x9f48,	// (0x00081bd3) cell_dialer_command_2_pane

0xee6c,	// (0x00086af7) bg_button_pane_cp02_ParamLimits

0xee6c,	// (0x00086af7) bg_button_pane_cp02

0x9f57,	// (0x00081be2) cell_dialer_keypad_pane_g1_ParamLimits

0x9f57,	// (0x00081be2) cell_dialer_keypad_pane_g1

0xee6c,	// (0x00086af7) bg_button_pane_cp03_ParamLimits

0xee6c,	// (0x00086af7) bg_button_pane_cp03

0x9f6c,	// (0x00081bf7) cell_dialer_command_1_pane_g1_ParamLimits

0x9f6c,	// (0x00081bf7) cell_dialer_command_1_pane_g1

0xee78,	// (0x00086b03) bg_button_pane_cp04

0x9f7f,	// (0x00081c0a) cell_dialer_command_2_pane_g1

0x1890,	// (0x0007951b) bg_button_pane_cp06

0xee80,	// (0x00086b0b) dialer_ne_clear_pane_g1

0x77a3,	// (0x0007f42e) navi_pane_g2

0x77d1,	// (0x0007f45c) navi_pane_g3

0x0002,

0xf44c,	// (0x000870d7) navi_pane_g

0x77fc,	// (0x0007f487) navi_pane_mv_g2

0x7823,	// (0x0007f4ae) navi_pane_mv_g5

0x782b,	// (0x0007f4b6) navi_pane_mv_t1

0x0b22,	// (0x000787ad) main_clock2_pane

0x9fad,	// (0x00081c38) main_clock2_list_pane_ParamLimits

0x9fad,	// (0x00081c38) main_clock2_list_pane

0x9fd5,	// (0x00081c60) main_clock2_pane_t1_ParamLimits

0x9fd5,	// (0x00081c60) main_clock2_pane_t1

0xa005,	// (0x00081c90) main_clock2_pane_t2_ParamLimits

0xa005,	// (0x00081c90) main_clock2_pane_t2

0x0004,

0xf82b,	// (0x000874b6) main_clock2_pane_t_ParamLimits

0xf82b,	// (0x000874b6) main_clock2_pane_t

0xa06c,	// (0x00081cf7) popup_clock_analogue_window_cp03_ParamLimits

0xa06c,	// (0x00081cf7) popup_clock_analogue_window_cp03

0xa08c,	// (0x00081d17) popup_clock_digital_window_cp02_ParamLimits

0xa08c,	// (0x00081d17) popup_clock_digital_window_cp02

0xa101,	// (0x00081d8c) main_clock2_list_single_pane_ParamLimits

0xa101,	// (0x00081d8c) main_clock2_list_single_pane

0x1890,	// (0x0007951b) list_highlight_pane_cp05

0xee88,	// (0x00086b13) main_clock2_list_single_pane_t1

0x65db,	// (0x0007e266) popup_toolbar_window_cp04_ParamLimits

0x969a,	// (0x00081325) camera2_autofocus_pane_g2_ParamLimits

0x969a,	// (0x00081325) camera2_autofocus_pane_g2

0x96a6,	// (0x00081331) camera2_autofocus_pane_g3_ParamLimits

0x96a6,	// (0x00081331) camera2_autofocus_pane_g3

0x96b2,	// (0x0008133d) camera2_autofocus_pane_g4_ParamLimits

0x96b2,	// (0x0008133d) camera2_autofocus_pane_g4

0x96be,	// (0x00081349) camera2_autofocus_pane_g5_ParamLimits

0x96be,	// (0x00081349) camera2_autofocus_pane_g5

0x0004,

0xf774,	// (0x000873ff) camera2_autofocus_pane_g_ParamLimits

0xf774,	// (0x000873ff) camera2_autofocus_pane_g

0x9889,	// (0x00081514) camera2_autofocus_pane_cp_g2

0x9891,	// (0x0008151c) camera2_autofocus_pane_cp_g3

0x9899,	// (0x00081524) camera2_autofocus_pane_cp_g4

0x98a1,	// (0x0008152c) camera2_autofocus_pane_cp_g5

0x0004,

0xf7da,	// (0x00087465) camera2_autofocus_pane_cp_g

0x9e96,	// (0x00081b21) popup_dialer_spcha_window

0xdd39,	// (0x000859c4) bg_popup_sub_pane_cp07

0xee96,	// (0x00086b21) list_spcha_pane

0xee9e,	// (0x00086b29) list_single_spcha_pane_ParamLimits

0xee9e,	// (0x00086b29) list_single_spcha_pane

0xdd39,	// (0x000859c4) list_highlight_pane_cp06

0xeeaf,	// (0x00086b3a) list_single_spcha_pane_t1

0x876d,	// (0x000803f8) popup_call2_audio_out_window_g4_ParamLimits

0x876d,	// (0x000803f8) popup_call2_audio_out_window_g4

0xdd39,	// (0x000859c4) main_imed2_pane

0xe672,	// (0x000862fd) popup_imed_adjust2_window

0x8d5f,	// (0x000809ea) popup_imed_trans_window_ParamLimits

0x8d5f,	// (0x000809ea) popup_imed_trans_window

0xe8cf,	// (0x0008655a) popup_blid_sat_info2_window_t1

0xe8dd,	// (0x00086568) popup_blid_sat_info2_window_t2

0x000a,

0xf709,	// (0x00087394) popup_blid_sat_info2_window_t

0xa1ab,	// (0x00081e36) aid_size_cell_colour_35

0xa1c5,	// (0x00081e50) aid_size_cell_colour_112

0xa1dc,	// (0x00081e67) aid_size_cell_effect

0xe64a,	// (0x000862d5) bg_tb_trans_pane_cp02

0xeebd,	// (0x00086b48) heading_imed_pane

0xa1f6,	// (0x00081e81) listscroll_imed_pane

0xeec9,	// (0x00086b54) heading_imed_pane_g1

0xeed1,	// (0x00086b5c) heading_imed_pane_t1

0xeedf,	// (0x00086b6a) grid_imed_colour_35_pane_ParamLimits

0xeedf,	// (0x00086b6a) grid_imed_colour_35_pane

0xa202,	// (0x00081e8d) grid_imed_effect_pane

0xeefa,	// (0x00086b85) list_imed_aspect_pane

0xa212,	// (0x00081e9d) scroll_pane_cp027_ParamLimits

0xa212,	// (0x00081e9d) scroll_pane_cp027

0xa21e,	// (0x00081ea9) cell_imed_effect_pane_ParamLimits

0xa21e,	// (0x00081ea9) cell_imed_effect_pane

0xef02,	// (0x00086b8d) cell_imed_colour_pane_ParamLimits

0xef02,	// (0x00086b8d) cell_imed_colour_pane

0xef44,	// (0x00086bcf) cell_imed_colour_pane_g1_ParamLimits

0xef44,	// (0x00086bcf) cell_imed_colour_pane_g1

0xef55,	// (0x00086be0) hgihlgiht_grid_pane_cp016_ParamLimits

0xef55,	// (0x00086be0) hgihlgiht_grid_pane_cp016

0xa236,	// (0x00081ec1) cell_imed_effect_pane_g1

0xa23e,	// (0x00081ec9) grid_highlight_pane_cp017

0xef66,	// (0x00086bf1) list_imed_single_pane_ParamLimits

0xef66,	// (0x00086bf1) list_imed_single_pane

0xdd39,	// (0x000859c4) list_highlight_pane_cp07

0xef7d,	// (0x00086c08) list_imed_aspect_pane_comp1_t1

0xe63c,	// (0x000862c7) bg_tb_trans_pane_cp05

0xef9f,	// (0x00086c2a) popup_imed_adjust2_window_g1

0xefc6,	// (0x00086c51) popup_imed_adjust2_window_t1

0xefde,	// (0x00086c69) slider_imed_adjust_pane

0xeff2,	// (0x00086c7d) slider_imed_adjust_pane_g1

0xf002,	// (0x00086c8d) slider_imed_adjust_pane_g2

0xf012,	// (0x00086c9d) slider_imed_adjust_pane_g3

0xf023,	// (0x00086cae) slider_imed_adjust_pane_g4

0x0003,

0xf848,	// (0x000874d3) slider_imed_adjust_pane_g

0xa247,	// (0x00081ed2) aid_size_cell_clipart2

0xa253,	// (0x00081ede) grid_imed_clipart_pane

0xf034,	// (0x00086cbf) scroll_pane_cp031

0xa25d,	// (0x00081ee8) cell_imed_clipart_pane_ParamLimits

0xa25d,	// (0x00081ee8) cell_imed_clipart_pane

0xa284,	// (0x00081f0f) cell_imed_clipart_pane_g1

0xdd39,	// (0x000859c4) grid_highlight_pane_cp014

0x9fb9,	// (0x00081c44) main_clock2_pane_g1_ParamLimits

0x9fb9,	// (0x00081c44) main_clock2_pane_g1

0xa0a8,	// (0x00081d33) aid_call2_pane_cp10

0xa0ba,	// (0x00081d45) aid_call_pane_cp10

0x17c5,	// (0x00079450) popup_clock_analogue_window_cp10_g1

0x17c5,	// (0x00079450) popup_clock_analogue_window_cp10_g2

0xa0cc,	// (0x00081d57) popup_clock_analogue_window_cp10_g3

0xa0cc,	// (0x00081d57) popup_clock_analogue_window_cp10_g4

0x17c5,	// (0x00079450) popup_clock_analogue_window_cp10_g5

0x0004,

0xf836,	// (0x000874c1) popup_clock_analogue_window_cp10_g

0xa0e2,	// (0x00081d6d) popup_clock_analogue_window_cp10_t1

0xa113,	// (0x00081d9e) clock_digital_number_pane_cp10_ParamLimits

0xa113,	// (0x00081d9e) clock_digital_number_pane_cp10

0xa12b,	// (0x00081db6) clock_digital_number_pane_cp11_ParamLimits

0xa12b,	// (0x00081db6) clock_digital_number_pane_cp11

0xa143,	// (0x00081dce) clock_digital_number_pane_cp12_ParamLimits

0xa143,	// (0x00081dce) clock_digital_number_pane_cp12

0xa15b,	// (0x00081de6) clock_digital_number_pane_cp13_ParamLimits

0xa15b,	// (0x00081de6) clock_digital_number_pane_cp13

0xa173,	// (0x00081dfe) clock_digital_separator_pane_cp10_ParamLimits

0xa173,	// (0x00081dfe) clock_digital_separator_pane_cp10

0xa18b,	// (0x00081e16) popup_clock_digital_window_cp02_t1_ParamLimits

0xa18b,	// (0x00081e16) popup_clock_digital_window_cp02_t1

0x09e9,	// (0x00078674) clock_digital_number_pane_cp10_g1

0x09e9,	// (0x00078674) clock_digital_number_pane_cp10_g2

0x0001,

0xf851,	// (0x000874dc) clock_digital_number_pane_cp10_g

0x09e9,	// (0x00078674) clock_digital_separator_pane_cp10_g1

0x09e9,	// (0x00078674) clock_digital_separator_pane_g2_cp10

0x1860,	// (0x000794eb) navi_pane_vded_g4

0x1869,	// (0x000794f4) navi_pane_vded_g5

0x1872,	// (0x000794fd) navi_pane_vded_t1

0xdd39,	// (0x000859c4) main_vded_pane

0xa28d,	// (0x00081f18) main_vded_pane_g1

0xa299,	// (0x00081f24) main_vded_pane_g2

0xa2a3,	// (0x00081f2e) main_vded_pane_g3

0x0002,

0xf856,	// (0x000874e1) main_vded_pane_g

0xa2ad,	// (0x00081f38) main_vded_pane_t1

0xa2bb,	// (0x00081f46) main_vded_pane_t2

0x0001,

0xf85d,	// (0x000874e8) main_vded_pane_t

0xa2c9,	// (0x00081f54) vded_slider_pane

0xa2d3,	// (0x00081f5e) vded_video_pane

0xf03c,	// (0x00086cc7) vded_video_pane_g1

0xa2dd,	// (0x00081f68) vded_video_pane_g2

0xea93,	// (0x0008671e) vded_video_pane_g3

0x0002,

0xf862,	// (0x000874ed) vded_video_pane_g

0xf046,	// (0x00086cd1) vded_slider_pane_g1

0xe7e4,	// (0x0008646f) vded_slider_pane_g2

0xf04f,	// (0x00086cda) vded_slider_pane_g3

0xf058,	// (0x00086ce3) vded_slider_pane_g4

0xf061,	// (0x00086cec) vded_slider_pane_g5

0x0004,

0xf869,	// (0x000874f4) vded_slider_pane_g

0x9da7,	// (0x00081a32) mup3_rocker_pane_ParamLimits

0x9da7,	// (0x00081a32) mup3_rocker_pane

0xa2e6,	// (0x00081f71) mup3_control_keys_pane_g1

0xa2ee,	// (0x00081f79) mup3_control_keys_pane_g2

0xa2f6,	// (0x00081f81) mup3_control_keys_pane_g3

0xa2fe,	// (0x00081f89) mup3_control_keys_pane_g4

0x0003,

0xf874,	// (0x000874ff) mup3_control_keys_pane_g

0x586d,	// (0x0007d4f8) popup_toolbar2_fixed_window_cp01_ParamLimits

0x586d,	// (0x0007d4f8) popup_toolbar2_fixed_window_cp01

0x9dc1,	// (0x00081a4c) popup_toolbar2_fixed_window_cp02_ParamLimits

0x9dc1,	// (0x00081a4c) popup_toolbar2_fixed_window_cp02

0x2079,	// (0x00079d04) popup_call2_audio_second_window_t4_ParamLimits

0x2079,	// (0x00079d04) popup_call2_audio_second_window_t4

0x85da,	// (0x00080265) popup_call2_audio_first_window_t6_ParamLimits

0x85da,	// (0x00080265) popup_call2_audio_first_window_t6

0x8870,	// (0x000804fb) popup_call2_audio_out_window_t6_ParamLimits

0x8870,	// (0x000804fb) popup_call2_audio_out_window_t6

0xdd39,	// (0x000859c4) main_vitu_pane

0xa30e,	// (0x00081f99) aid_size_cell_itu_ParamLimits

0xa30e,	// (0x00081f99) aid_size_cell_itu

0x26df,	// (0x0007a36a) bg_popup_window_pane_cp08_ParamLimits

0x26df,	// (0x0007a36a) bg_popup_window_pane_cp08

0xa31c,	// (0x00081fa7) field_vitu_entry_pane_ParamLimits

0xa31c,	// (0x00081fa7) field_vitu_entry_pane

0xa32b,	// (0x00081fb6) grid_vitu_function_pane_ParamLimits

0xa32b,	// (0x00081fb6) grid_vitu_function_pane

0xa33b,	// (0x00081fc6) grid_vitu_itu_pane_ParamLimits

0xa33b,	// (0x00081fc6) grid_vitu_itu_pane

0xa34b,	// (0x00081fd6) cell_vitu_itu_pane_ParamLimits

0xa34b,	// (0x00081fd6) cell_vitu_itu_pane

0xa360,	// (0x00081feb) cell_vitu_function_pane_ParamLimits

0xa360,	// (0x00081feb) cell_vitu_function_pane

0xe64a,	// (0x000862d5) bg_popup_sub_pane_cp08_ParamLimits

0xe64a,	// (0x000862d5) bg_popup_sub_pane_cp08

0xa374,	// (0x00081fff) field_vitu_entry_pane_t1_ParamLimits

0xa374,	// (0x00081fff) field_vitu_entry_pane_t1

0xf082,	// (0x00086d0d) field_vitu_entry_pane_t2_ParamLimits

0xf082,	// (0x00086d0d) field_vitu_entry_pane_t2

0x0001,

0xf882,	// (0x0008750d) field_vitu_entry_pane_t_ParamLimits

0xf882,	// (0x0008750d) field_vitu_entry_pane_t

0xf09f,	// (0x00086d2a) bg_button_pane_cp05_ParamLimits

0xf09f,	// (0x00086d2a) bg_button_pane_cp05

0xa391,	// (0x0008201c) cell_vitu_itu_pane_g1

0xa3a9,	// (0x00082034) cell_vitu_itu_pane_t1_ParamLimits

0xa3a9,	// (0x00082034) cell_vitu_itu_pane_t1

0xa3bb,	// (0x00082046) cell_vitu_itu_pane_t2_ParamLimits

0xa3bb,	// (0x00082046) cell_vitu_itu_pane_t2

0x0002,

0xf887,	// (0x00087512) cell_vitu_itu_pane_t_ParamLimits

0xf887,	// (0x00087512) cell_vitu_itu_pane_t

0xf0ad,	// (0x00086d38) bg_button_pane_cp07

0xa3f0,	// (0x0008207b) cell_vitu_function_pane_g1

0x5ae9,	// (0x0007d774) main_calc_pane_g1

0x5670,	// (0x0007d2fb) aid_visual_content_pane

0xdd39,	// (0x000859c4) main_vradio_pane

0xa3f9,	// (0x00082084) main_vradio_pane_g1_ParamLimits

0xa3f9,	// (0x00082084) main_vradio_pane_g1

0xf0b7,	// (0x00086d42) main_vradio_pane_g2_ParamLimits

0xf0b7,	// (0x00086d42) main_vradio_pane_g2

0x0001,

0xf88e,	// (0x00087519) main_vradio_pane_g_ParamLimits

0xf88e,	// (0x00087519) main_vradio_pane_g

0xa409,	// (0x00082094) main_vradio_pane_t1_ParamLimits

0xa409,	// (0x00082094) main_vradio_pane_t1

0xa41b,	// (0x000820a6) main_vradio_pane_t2_ParamLimits

0xa41b,	// (0x000820a6) main_vradio_pane_t2

0xf0c4,	// (0x00086d4f) main_vradio_pane_t3_ParamLimits

0xf0c4,	// (0x00086d4f) main_vradio_pane_t3

0x0002,

0xf893,	// (0x0008751e) main_vradio_pane_t_ParamLimits

0xf893,	// (0x0008751e) main_vradio_pane_t

0xa42d,	// (0x000820b8) vradio_rocker_control_pane_ParamLimits

0xa42d,	// (0x000820b8) vradio_rocker_control_pane

0xa439,	// (0x000820c4) vradio_station_info_pane_ParamLimits

0xa439,	// (0x000820c4) vradio_station_info_pane

0xf0d8,	// (0x00086d63) vradio_frequency_info_pane_ParamLimits

0xf0d8,	// (0x00086d63) vradio_frequency_info_pane

0xea93,	// (0x0008671e) vradio_station_info_pane_g1

0xf0e7,	// (0x00086d72) vradio_station_info_pane_t1_ParamLimits

0xf0e7,	// (0x00086d72) vradio_station_info_pane_t1

0x235f,	// (0x00079fea) vradio_station_info_pane_t2_ParamLimits

0x235f,	// (0x00079fea) vradio_station_info_pane_t2

0x0001,

0xf89a,	// (0x00087525) vradio_station_info_pane_t_ParamLimits

0xf89a,	// (0x00087525) vradio_station_info_pane_t

0x2371,	// (0x00079ffc) vradio_tuning_pane

0x2379,	// (0x0007a004) vradio_rocker_control_pane_g1

0x2381,	// (0x0007a00c) vradio_rocker_control_pane_g2

0x2389,	// (0x0007a014) vradio_rocker_control_pane_g3

0x2391,	// (0x0007a01c) vradio_rocker_control_pane_g4

0x2399,	// (0x0007a024) vradio_rocker_control_pane_g5

0x0004,

0xf89f,	// (0x0008752a) vradio_rocker_control_pane_g

0xa448,	// (0x000820d3) vradio_frequency_info_pane_g1

0x23a1,	// (0x0007a02c) vradio_frequency_info_pane_t1_ParamLimits

0x23a1,	// (0x0007a02c) vradio_frequency_info_pane_t1

0xa452,	// (0x000820dd) vradio_tuning_pane_g1

0xa45b,	// (0x000820e6) vradio_tuning_pane_t1

0xdd57,	// (0x000859e2) area_side_right_pane_ParamLimits

0xdd57,	// (0x000859e2) area_side_right_pane

0xe603,	// (0x0008628e) status_small_pane_g1

0xe60b,	// (0x00086296) status_small_pane_g2

0xe614,	// (0x0008629f) status_small_pane_g3

0xe61d,	// (0x000862a8) status_small_pane_g4

0x0003,

0xf65f,	// (0x000872ea) status_small_pane_g

0xe626,	// (0x000862b1) status_small_pane_t1

0xdd39,	// (0x000859c4) main_video3_pane

0x23b5,	// (0x0007a040) cams_zoom_vslider_pane

0x23bd,	// (0x0007a048) image3_wide_pane_ParamLimits

0x23bd,	// (0x0007a048) image3_wide_pane

0x23d7,	// (0x0007a062) image3_wide_small_pane

0x23e3,	// (0x0007a06e) main_video3_pane_g1_ParamLimits

0x23e3,	// (0x0007a06e) main_video3_pane_g1

0x23ff,	// (0x0007a08a) main_video3_pane_g2_ParamLimits

0x23ff,	// (0x0007a08a) main_video3_pane_g2

0x0001,

0xf8aa,	// (0x00087535) main_video3_pane_g_ParamLimits

0xf8aa,	// (0x00087535) main_video3_pane_g

0x241b,	// (0x0007a0a6) main_video3_pane_t1_ParamLimits

0x241b,	// (0x0007a0a6) main_video3_pane_t1

0x2446,	// (0x0007a0d1) main_video3_pane_t2_ParamLimits

0x2446,	// (0x0007a0d1) main_video3_pane_t2

0x2471,	// (0x0007a0fc) main_video3_pane_t3_ParamLimits

0x2471,	// (0x0007a0fc) main_video3_pane_t3

0x0002,

0xf8af,	// (0x0008753a) main_video3_pane_t_ParamLimits

0xf8af,	// (0x0008753a) main_video3_pane_t

0x249e,	// (0x0007a129) cams_zoom_vslider_pane_g1

0x24a7,	// (0x0007a132) cams_zoom_vslider_pane_g2

0x0001,

0xf8b6,	// (0x00087541) cams_zoom_vslider_pane_g

0x24af,	// (0x0007a13a) small_slider_vertical_pane

0xea93,	// (0x0008671e) small_slider_vertical_pane_g1

0xea93,	// (0x0008671e) small_slider_vertical_pane_g2

0x24b7,	// (0x0007a142) small_slider_vertical_pane_g3

0x0002,

0xf8bb,	// (0x00087546) small_slider_vertical_pane_g

0xdd39,	// (0x000859c4) main_hwr_training_pane

0x24c0,	// (0x0007a14b) hwr_training_instruct_pane_ParamLimits

0x24c0,	// (0x0007a14b) hwr_training_instruct_pane

0xa46a,	// (0x000820f5) hwr_training_navi_pane_ParamLimits

0xa46a,	// (0x000820f5) hwr_training_navi_pane

0xa484,	// (0x0008210f) hwr_training_write_pane_ParamLimits

0xa484,	// (0x0008210f) hwr_training_write_pane

0xdd39,	// (0x000859c4) bg_frame_shadow_pane

0x24f7,	// (0x0007a182) hwr_training_write_pane_g1

0x24ff,	// (0x0007a18a) hwr_training_write_pane_g2

0x2507,	// (0x0007a192) hwr_training_write_pane_g3

0x250f,	// (0x0007a19a) hwr_training_write_pane_g4

0x2517,	// (0x0007a1a2) hwr_training_write_pane_g5

0x251f,	// (0x0007a1aa) hwr_training_write_pane_g6

0x2527,	// (0x0007a1b2) hwr_training_write_pane_g7

0x0006,

0xf8c2,	// (0x0008754d) hwr_training_write_pane_g

0xa4bc,	// (0x00082147) hwr_training_navi_pane_g1_ParamLimits

0xa4bc,	// (0x00082147) hwr_training_navi_pane_g1

0xa4ce,	// (0x00082159) hwr_training_navi_pane_g2_ParamLimits

0xa4ce,	// (0x00082159) hwr_training_navi_pane_g2

0xa4e0,	// (0x0008216b) hwr_training_navi_pane_g3_ParamLimits

0xa4e0,	// (0x0008216b) hwr_training_navi_pane_g3

0xa4f0,	// (0x0008217b) hwr_training_navi_pane_g4_ParamLimits

0xa4f0,	// (0x0008217b) hwr_training_navi_pane_g4

0x0004,

0xf8d1,	// (0x0008755c) hwr_training_navi_pane_g_ParamLimits

0xf8d1,	// (0x0008755c) hwr_training_navi_pane_g

0xa50a,	// (0x00082195) hwr_training_navi_pane_t1

0xa518,	// (0x000821a3) list_single_hwr_training_instruct_pane_ParamLimits

0xa518,	// (0x000821a3) list_single_hwr_training_instruct_pane

0x252f,	// (0x0007a1ba) list_single_hwr_training_instruct_pane_t1

0xe9d3,	// (0x0008665e) bg_frame_shadow_pane_g1

0x253e,	// (0x0007a1c9) bg_frame_shadow_pane_g2

0x2546,	// (0x0007a1d1) bg_frame_shadow_pane_g3

0x254e,	// (0x0007a1d9) bg_frame_shadow_pane_g4

0x2556,	// (0x0007a1e1) bg_frame_shadow_pane_g5

0x255e,	// (0x0007a1e9) bg_frame_shadow_pane_g6

0x2566,	// (0x0007a1f1) bg_frame_shadow_pane_g7

0x0c1b,	// (0x000788a6) bg_frame_shadow_pane_g8

0x0007,

0xf8dc,	// (0x00087567) bg_frame_shadow_pane_g

0xdd39,	// (0x000859c4) main_video_tele_dialer_pane

0xa54e,	// (0x000821d9) aid_size_cell_video_keypad_ParamLimits

0xa54e,	// (0x000821d9) aid_size_cell_video_keypad

0xa55e,	// (0x000821e9) grid_video_dialer_keypad_pane_ParamLimits

0xa55e,	// (0x000821e9) grid_video_dialer_keypad_pane

0xa592,	// (0x0008221d) video_down_pane_cp_ParamLimits

0xa592,	// (0x0008221d) video_down_pane_cp

0xa5bc,	// (0x00082247) cell_video_dialer_keypad_pane_ParamLimits

0xa5bc,	// (0x00082247) cell_video_dialer_keypad_pane

0x256e,	// (0x0007a1f9) bg_button_pane_cp08_ParamLimits

0x256e,	// (0x0007a1f9) bg_button_pane_cp08

0xa5d1,	// (0x0008225c) cell_video_dialer_keypad_pane_g1_ParamLimits

0xa5d1,	// (0x0008225c) cell_video_dialer_keypad_pane_g1

0x9d9b,	// (0x00081a26) mup3_rocker2_pane_ParamLimits

0x9d9b,	// (0x00081a26) mup3_rocker2_pane

0xea93,	// (0x0008671e) mup3_rocker2_pane_g1

0x8ced,	// (0x00080978) main_dialer2_pane

0xdd39,	// (0x000859c4) main_mp4_pane

0xa610,	// (0x0008229b) main_mp4_pane_g1_ParamLimits

0xa610,	// (0x0008229b) main_mp4_pane_g1

0xa61e,	// (0x000822a9) main_mp4_pane_g2_ParamLimits

0xa61e,	// (0x000822a9) main_mp4_pane_g2

0xa62c,	// (0x000822b7) main_mp4_pane_g3_ParamLimits

0xa62c,	// (0x000822b7) main_mp4_pane_g3

0xa671,	// (0x000822fc) main_mp4_pane_g4_ParamLimits

0xa671,	// (0x000822fc) main_mp4_pane_g4

0xa68b,	// (0x00082316) main_mp4_pane_g5_ParamLimits

0xa68b,	// (0x00082316) main_mp4_pane_g5

0x0005,

0xf8fc,	// (0x00087587) main_mp4_pane_g_ParamLimits

0xf8fc,	// (0x00087587) main_mp4_pane_g

0xa6bf,	// (0x0008234a) main_mp4_pane_t1_ParamLimits

0xa6bf,	// (0x0008234a) main_mp4_pane_t1

0xa71b,	// (0x000823a6) main_mp4_pane_t2_ParamLimits

0xa71b,	// (0x000823a6) main_mp4_pane_t2

0x257a,	// (0x0007a205) main_mp4_pane_t3_ParamLimits

0x257a,	// (0x0007a205) main_mp4_pane_t3

0xa76d,	// (0x000823f8) main_mp4_pane_t4_ParamLimits

0xa76d,	// (0x000823f8) main_mp4_pane_t4

0x0003,

0xf909,	// (0x00087594) main_mp4_pane_t_ParamLimits

0xf909,	// (0x00087594) main_mp4_pane_t

0xa7b1,	// (0x0008243c) mp4_progress_pane_ParamLimits

0xa7b1,	// (0x0008243c) mp4_progress_pane

0xa7fb,	// (0x00082486) mp4_rocker_pane_ParamLimits

0xa7fb,	// (0x00082486) mp4_rocker_pane

0x25a2,	// (0x0007a22d) mp4_progress_pane_t1

0x25bb,	// (0x0007a246) mp4_progress_pane_t2

0x0001,

0xf912,	// (0x0008759d) mp4_progress_pane_t

0x25d4,	// (0x0007a25f) mup_progress_pane_cp04

0x2e6c,	// (0x0007aaf7) mp4_rocker_pane_g1

0xa81b,	// (0x000824a6) aid_cell_size_keypad2_ParamLimits

0xa81b,	// (0x000824a6) aid_cell_size_keypad2

0xa82b,	// (0x000824b6) dialer2_ne_pane_ParamLimits

0xa82b,	// (0x000824b6) dialer2_ne_pane

0xa839,	// (0x000824c4) grid_dialer2_keypad_pane_ParamLimits

0xa839,	// (0x000824c4) grid_dialer2_keypad_pane

0x2ec7,	// (0x0007ab52) bg_popup_call_pane_cp07_ParamLimits

0x2ec7,	// (0x0007ab52) bg_popup_call_pane_cp07

0xa849,	// (0x000824d4) dialer2_ne_pane_t1_ParamLimits

0xa849,	// (0x000824d4) dialer2_ne_pane_t1

0xa86e,	// (0x000824f9) cell_dialer2_keypad_pane_ParamLimits

0xa86e,	// (0x000824f9) cell_dialer2_keypad_pane

0x25f2,	// (0x0007a27d) bg_button_pane_pane_cp04_ParamLimits

0x25f2,	// (0x0007a27d) bg_button_pane_pane_cp04

0xa885,	// (0x00082510) cell_dialer2_keypad_pane_g1_ParamLimits

0xa885,	// (0x00082510) cell_dialer2_keypad_pane_g1

0x6504,	// (0x0007e18f) aid_placing_vt_set_content_ParamLimits

0x6504,	// (0x0007e18f) aid_placing_vt_set_content

0x6524,	// (0x0007e1af) aid_placing_vt_set_title_ParamLimits

0x6524,	// (0x0007e1af) aid_placing_vt_set_title

0xdd39,	// (0x000859c4) main_image3_pane

0xa91f,	// (0x000825aa) area_side_right_pane_cp01_ParamLimits

0xa91f,	// (0x000825aa) area_side_right_pane_cp01

0xa94c,	// (0x000825d7) main_image3_pane_g1_ParamLimits

0xa94c,	// (0x000825d7) main_image3_pane_g1

0xa95a,	// (0x000825e5) main_image3_pane_g2_ParamLimits

0xa95a,	// (0x000825e5) main_image3_pane_g2

0xa973,	// (0x000825fe) main_image3_pane_g3_ParamLimits

0xa973,	// (0x000825fe) main_image3_pane_g3

0xa98c,	// (0x00082617) main_image3_pane_g4_ParamLimits

0xa98c,	// (0x00082617) main_image3_pane_g4

0x0003,

0xf921,	// (0x000875ac) main_image3_pane_g_ParamLimits

0xf921,	// (0x000875ac) main_image3_pane_g

0xa9a5,	// (0x00082630) main_image3_pane_t1_ParamLimits

0xa9a5,	// (0x00082630) main_image3_pane_t1

0xa9ca,	// (0x00082655) main_image3_pane_t2_ParamLimits

0xa9ca,	// (0x00082655) main_image3_pane_t2

0xa9e9,	// (0x00082674) main_image3_pane_t3_ParamLimits

0xa9e9,	// (0x00082674) main_image3_pane_t3

0x0003,

0xf92a,	// (0x000875b5) main_image3_pane_t_ParamLimits

0xf92a,	// (0x000875b5) main_image3_pane_t

0x26df,	// (0x0007a36a) grid_sctrl_middle_pane_cp01_ParamLimits

0x26df,	// (0x0007a36a) grid_sctrl_middle_pane_cp01

0xaa4a,	// (0x000826d5) cell_sctrl_middle_pane_cp01_ParamLimits

0xaa4a,	// (0x000826d5) cell_sctrl_middle_pane_cp01

0xaa5b,	// (0x000826e6) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0xaa5b,	// (0x000826e6) cell_sctrl_middle_pane_cp01_g1

0xdd39,	// (0x000859c4) main_call4_pane

0xaa68,	// (0x000826f3) aid_size_button_call4_ParamLimits

0xaa68,	// (0x000826f3) aid_size_button_call4

0xaa98,	// (0x00082723) call4_windows_pane_ParamLimits

0xaa98,	// (0x00082723) call4_windows_pane

0xaab2,	// (0x0008273d) grid_call4_button_pane_ParamLimits

0xaab2,	// (0x0008273d) grid_call4_button_pane

0x25fe,	// (0x0007a289) call4_windows_conf_pane

0x2613,	// (0x0007a29e) popup_call4_audio_first_window_ParamLimits

0x2613,	// (0x0007a29e) popup_call4_audio_first_window

0x265f,	// (0x0007a2ea) popup_call4_audio_second_window_ParamLimits

0x265f,	// (0x0007a2ea) popup_call4_audio_second_window

0x2673,	// (0x0007a2fe) popup_call4_audio_wait_window_ParamLimits

0x2673,	// (0x0007a2fe) popup_call4_audio_wait_window

0xaad6,	// (0x00082761) cell_call4_button_pane_ParamLimits

0xaad6,	// (0x00082761) cell_call4_button_pane

0xaafb,	// (0x00082786) bg_button_pane_cp09_ParamLimits

0xaafb,	// (0x00082786) bg_button_pane_cp09

0xab07,	// (0x00082792) cell_call4_button_pane_g1_ParamLimits

0xab07,	// (0x00082792) cell_call4_button_pane_g1

0xab14,	// (0x0008279f) cell_call4_button_pane_t1_ParamLimits

0xab14,	// (0x0008279f) cell_call4_button_pane_t1

0x26bb,	// (0x0007a346) popup_call4_audio_conf_window_ParamLimits

0x26bb,	// (0x0007a346) popup_call4_audio_conf_window

0x9dce,	// (0x00081a59) mup3_progress_pane_t1_ParamLimits

0x9de5,	// (0x00081a70) mup3_progress_pane_t2_ParamLimits

0xed75,	// (0x00086a00) mup3_progress_pane_t3_ParamLimits

0xf803,	// (0x0008748e) mup3_progress_pane_t_ParamLimits

0xed8c,	// (0x00086a17) mup_progress_pane_cp03_ParamLimits

0xa306,	// (0x00081f91) mup3_control_keys_pane_g4_copy1

0xa7df,	// (0x0008246a) mp4_rocker2_pane_ParamLimits

0xa7df,	// (0x0008246a) mp4_rocker2_pane

0x26d7,	// (0x0007a362) mp4_rocker2_pane_g1

0x26cf,	// (0x0007a35a) mp4_rocker2_pane_g2

0xab26,	// (0x000827b1) mp4_rocker2_pane_g3

0xab2e,	// (0x000827b9) mp4_rocker2_pane_g4

0xab36,	// (0x000827c1) mp4_rocker2_pane_g5

0x0004,

0xf933,	// (0x000875be) mp4_rocker2_pane_g

0xdd39,	// (0x000859c4) main_camera4_pane

0xdd39,	// (0x000859c4) main_video4_pane

0xa56e,	// (0x000821f9) main_video_tele_dialer_pane_t1_ParamLimits

0xa56e,	// (0x000821f9) main_video_tele_dialer_pane_t1

0xa580,	// (0x0008220b) main_video_tele_dialer_pane_t2_ParamLimits

0xa580,	// (0x0008220b) main_video_tele_dialer_pane_t2

0x0001,

0xf8ed,	// (0x00087578) main_video_tele_dialer_pane_t_ParamLimits

0xf8ed,	// (0x00087578) main_video_tele_dialer_pane_t

0xab56,	// (0x000827e1) cam4_autofocus_pane_ParamLimits

0xab56,	// (0x000827e1) cam4_autofocus_pane

0xab64,	// (0x000827ef) cam4_image_uncrop_pane_ParamLimits

0xab64,	// (0x000827ef) cam4_image_uncrop_pane

0xab7b,	// (0x00082806) cam4_indicators_pane_ParamLimits

0xab7b,	// (0x00082806) cam4_indicators_pane

0xab97,	// (0x00082822) main_camera4_pane_g1_ParamLimits

0xab97,	// (0x00082822) main_camera4_pane_g1

0xaba3,	// (0x0008282e) main_camera4_pane_g2_ParamLimits

0xaba3,	// (0x0008282e) main_camera4_pane_g2

0xabaf,	// (0x0008283a) main_camera4_pane_g3_ParamLimits

0xabaf,	// (0x0008283a) main_camera4_pane_g3

0xabbb,	// (0x00082846) main_camera4_pane_g4_ParamLimits

0xabbb,	// (0x00082846) main_camera4_pane_g4

0xabc7,	// (0x00082852) main_camera4_pane_g5_ParamLimits

0xabc7,	// (0x00082852) main_camera4_pane_g5

0x0005,

0xf93e,	// (0x000875c9) main_camera4_pane_g_ParamLimits

0xf93e,	// (0x000875c9) main_camera4_pane_g

0xabe1,	// (0x0008286c) main_camera4_pane_t1_ParamLimits

0xabe1,	// (0x0008286c) main_camera4_pane_t1

0xac05,	// (0x00082890) bg_tb_trans_pane_cp06

0xac1b,	// (0x000828a6) cam4_indicators_pane_g1

0xac28,	// (0x000828b3) cam4_indicators_pane_g2

0x0002,

0xf950,	// (0x000875db) cam4_indicators_pane_g

0xac48,	// (0x000828d3) cam4_indicators_pane_t1

0xac72,	// (0x000828fd) main_video4_pane_g1_ParamLimits

0xac72,	// (0x000828fd) main_video4_pane_g1

0xac7e,	// (0x00082909) main_video4_pane_g2_ParamLimits

0xac7e,	// (0x00082909) main_video4_pane_g2

0xac8a,	// (0x00082915) main_video4_pane_g3_ParamLimits

0xac8a,	// (0x00082915) main_video4_pane_g3

0xac96,	// (0x00082921) main_video4_pane_g4_ParamLimits

0xac96,	// (0x00082921) main_video4_pane_g4

0x0004,

0xf957,	// (0x000875e2) main_video4_pane_g_ParamLimits

0xf957,	// (0x000875e2) main_video4_pane_g

0xacb6,	// (0x00082941) vid4_indicators_pane_ParamLimits

0xacb6,	// (0x00082941) vid4_indicators_pane

0xacd4,	// (0x0008295f) video4_image_uncrop_cif_pane_ParamLimits

0xacd4,	// (0x0008295f) video4_image_uncrop_cif_pane

0xace3,	// (0x0008296e) video4_image_uncrop_nhd_pane_ParamLimits

0xace3,	// (0x0008296e) video4_image_uncrop_nhd_pane

0xab64,	// (0x000827ef) video4_image_uncrop_vga_pane_ParamLimits

0xab64,	// (0x000827ef) video4_image_uncrop_vga_pane

0xacf0,	// (0x0008297b) bg_tb_trans_pane_cp07

0xac1b,	// (0x000828a6) vid4_indicators_pane_g1

0xad06,	// (0x00082991) vid4_indicators_pane_g2

0xad13,	// (0x0008299e) vid4_indicators_pane_g3

0x0004,

0xf962,	// (0x000875ed) vid4_indicators_pane_g

0xad40,	// (0x000829cb) vid4_indicators_pane_t1

0xad5a,	// (0x000829e5) cam4_autofocus_pane_g1

0xad62,	// (0x000829ed) cam4_autofocus_pane_g2

0xad6a,	// (0x000829f5) cam4_autofocus_pane_g3

0x0002,

0xf96d,	// (0x000875f8) cam4_autofocus_pane_g

0xad72,	// (0x000829fd) cam4_autofocus_pane_g3_copy1

0xa5a0,	// (0x0008222b) video_down_pane_cp_t1

0xa5ae,	// (0x00082239) video_down_pane_cp_t2

0x0001,

0xf8f2,	// (0x0008757d) video_down_pane_cp_t

0x26df,	// (0x0007a36a) popup_vitu2_window_ParamLimits

0x26df,	// (0x0007a36a) popup_vitu2_window

0xad7a,	// (0x00082a05) aid_size_cell2_itu2_ParamLimits

0xad7a,	// (0x00082a05) aid_size_cell2_itu2

0xad9c,	// (0x00082a27) aid_size_cell_itu2_ParamLimits

0xad9c,	// (0x00082a27) aid_size_cell_itu2

0xade0,	// (0x00082a6b) bg_popup_window_pane_cp09_ParamLimits

0xade0,	// (0x00082a6b) bg_popup_window_pane_cp09

0xadee,	// (0x00082a79) field_vitu2_entry_pane_ParamLimits

0xadee,	// (0x00082a79) field_vitu2_entry_pane

0xae0e,	// (0x00082a99) grid_vitu2_function_pane_ParamLimits

0xae0e,	// (0x00082a99) grid_vitu2_function_pane

0xae52,	// (0x00082add) grid_vitu2_itu_pane_ParamLimits

0xae52,	// (0x00082add) grid_vitu2_itu_pane

0xaec8,	// (0x00082b53) cell_vitu2_itu_pane_ParamLimits

0xaec8,	// (0x00082b53) cell_vitu2_itu_pane

0xaedd,	// (0x00082b68) cell_vitu2_function_pane_ParamLimits

0xaedd,	// (0x00082b68) cell_vitu2_function_pane

0x26ed,	// (0x0007a378) bg_popup_call_pane_cp08_ParamLimits

0x26ed,	// (0x0007a378) bg_popup_call_pane_cp08

0x2706,	// (0x0007a391) field_vitu2_entry_pane_g1

0x2712,	// (0x0007a39d) field_vitu2_entry_pane_g2

0x0002,

0xf974,	// (0x000875ff) field_vitu2_entry_pane_g

0x272c,	// (0x0007a3b7) field_vitu2_entry_pane_t1_ParamLimits

0x272c,	// (0x0007a3b7) field_vitu2_entry_pane_t1

0x274a,	// (0x0007a3d5) field_vitu2_entry_pane_t2_ParamLimits

0x274a,	// (0x0007a3d5) field_vitu2_entry_pane_t2

0x0001,

0xf97b,	// (0x00087606) field_vitu2_entry_pane_t_ParamLimits

0xf97b,	// (0x00087606) field_vitu2_entry_pane_t

0xaf1e,	// (0x00082ba9) bg_button_pane_cp010_ParamLimits

0xaf1e,	// (0x00082ba9) bg_button_pane_cp010

0xaf2c,	// (0x00082bb7) cell_vitu2_itu_pane_g1

0xaf4a,	// (0x00082bd5) cell_vitu2_itu_pane_t1_ParamLimits

0xaf4a,	// (0x00082bd5) cell_vitu2_itu_pane_t1

0x5575,	// (0x0007d200) cell_vitu2_itu_pane_t2_ParamLimits

0x5575,	// (0x0007d200) cell_vitu2_itu_pane_t2

0x0002,

0xf985,	// (0x00087610) cell_vitu2_itu_pane_t_ParamLimits

0xf985,	// (0x00087610) cell_vitu2_itu_pane_t

0xacf0,	// (0x0008297b) bg_button_pane_cp011

0xaf9c,	// (0x00082c27) cell_vitu2_function_pane_g1

0xdd39,	// (0x000859c4) main_myfav_hc_pane

0xaa2b,	// (0x000826b6) popup_image3_note_pane_ParamLimits

0xaa2b,	// (0x000826b6) popup_image3_note_pane

0xaa39,	// (0x000826c4) popup_image3_tool_bar_pane_ParamLimits

0xaa39,	// (0x000826c4) popup_image3_tool_bar_pane

0x55e3,	// (0x0007d26e) cell_vitu2_itu_pane_t3_ParamLimits

0x55e3,	// (0x0007d26e) cell_vitu2_itu_pane_t3

0xdd39,	// (0x000859c4) bg_popup_trans_pane

0x276f,	// (0x0007a3fa) grid_image3_tool_bar_pane

0x2779,	// (0x0007a404) bg_popup_trans_pane_g1

0x10e8,	// (0x00078d73) bg_popup_trans_pane_g2

0x2781,	// (0x0007a40c) bg_popup_trans_pane_g3

0x2789,	// (0x0007a414) bg_popup_trans_pane_g4

0x2791,	// (0x0007a41c) bg_popup_trans_pane_g5

0x2799,	// (0x0007a424) bg_popup_trans_pane_g6

0x27a1,	// (0x0007a42c) bg_popup_trans_pane_g7

0x27a9,	// (0x0007a434) bg_popup_trans_pane_g8

0x10c8,	// (0x00078d53) bg_popup_trans_pane_g9

0x0008,

0xf98c,	// (0x00087617) bg_popup_trans_pane_g

0x27b1,	// (0x0007a43c) cell_image3_tool_bar_pane_ParamLimits

0x27b1,	// (0x0007a43c) cell_image3_tool_bar_pane

0xea93,	// (0x0008671e) cell_image3_tool_bar_pane_g1

0xdd39,	// (0x000859c4) bg_popup_trans_pane_cp1

0x27c5,	// (0x0007a450) popup_image3_note_pane_t1

0x27d3,	// (0x0007a45e) popup_image3_note_pane_t2

0x27e1,	// (0x0007a46c) popup_image3_note_pane_t3

0x0002,

0xf99f,	// (0x0008762a) popup_image3_note_pane_t

0x27ef,	// (0x0007a47a) popup_image3_note_pane_t3_copy1

0xafb0,	// (0x00082c3b) bg_myfav_hc_instruction_pane_ParamLimits

0xafb0,	// (0x00082c3b) bg_myfav_hc_instruction_pane

0xafc8,	// (0x00082c53) cell_myfav_contact_pane_ParamLimits

0xafc8,	// (0x00082c53) cell_myfav_contact_pane

0xafe2,	// (0x00082c6d) cell_myfav_contact_pane_cp1_ParamLimits

0xafe2,	// (0x00082c6d) cell_myfav_contact_pane_cp1

0xaffa,	// (0x00082c85) cell_myfav_contact_pane_cp2_ParamLimits

0xaffa,	// (0x00082c85) cell_myfav_contact_pane_cp2

0xb012,	// (0x00082c9d) cell_myfav_contact_pane_cp3_ParamLimits

0xb012,	// (0x00082c9d) cell_myfav_contact_pane_cp3

0xb029,	// (0x00082cb4) cell_myfav_contact_pane_cp4_ParamLimits

0xb029,	// (0x00082cb4) cell_myfav_contact_pane_cp4

0xb03f,	// (0x00082cca) cell_myfav_contact_pane_cp5_ParamLimits

0xb03f,	// (0x00082cca) cell_myfav_contact_pane_cp5

0xb053,	// (0x00082cde) cell_myfav_contact_pane_cp6_ParamLimits

0xb053,	// (0x00082cde) cell_myfav_contact_pane_cp6

0xb067,	// (0x00082cf2) cell_myfav_contact_pane_cp7_ParamLimits

0xb067,	// (0x00082cf2) cell_myfav_contact_pane_cp7

0x27fd,	// (0x0007a488) listscroll_gen_pane_cp05

0xb07f,	// (0x00082d0a) main_myfav_hc_pane_g1_ParamLimits

0xb07f,	// (0x00082d0a) main_myfav_hc_pane_g1

0xb097,	// (0x00082d22) main_myfav_hc_pane_g2_ParamLimits

0xb097,	// (0x00082d22) main_myfav_hc_pane_g2

0x0002,

0xf9a6,	// (0x00087631) main_myfav_hc_pane_g_ParamLimits

0xf9a6,	// (0x00087631) main_myfav_hc_pane_g

0xb0c7,	// (0x00082d52) main_myfav_hc_pane_t1_ParamLimits

0xb0c7,	// (0x00082d52) main_myfav_hc_pane_t1

0x2806,	// (0x0007a491) main_myfav_hc_pane_t2_ParamLimits

0x2806,	// (0x0007a491) main_myfav_hc_pane_t2

0x2818,	// (0x0007a4a3) main_myfav_hc_pane_t3_ParamLimits

0x2818,	// (0x0007a4a3) main_myfav_hc_pane_t3

0xb0de,	// (0x00082d69) main_myfav_hc_pane_t4_ParamLimits

0xb0de,	// (0x00082d69) main_myfav_hc_pane_t4

0x0004,

0xf9ad,	// (0x00087638) main_myfav_hc_pane_t_ParamLimits

0xf9ad,	// (0x00087638) main_myfav_hc_pane_t

0xea93,	// (0x0008671e) bg_myfav_hc_instruction_pane_g1

0x282a,	// (0x0007a4b5) cell_myfav_contact_pane_g1_ParamLimits

0x282a,	// (0x0007a4b5) cell_myfav_contact_pane_g1

0x282a,	// (0x0007a4b5) cell_myfav_contact_pane_g2_ParamLimits

0x282a,	// (0x0007a4b5) cell_myfav_contact_pane_g2

0x2836,	// (0x0007a4c1) cell_myfav_contact_pane_g3_ParamLimits

0x2836,	// (0x0007a4c1) cell_myfav_contact_pane_g3

0xed5f,	// (0x000869ea) cell_myfav_contact_pane_g4_ParamLimits

0xed5f,	// (0x000869ea) cell_myfav_contact_pane_g4

0x2843,	// (0x0007a4ce) cell_myfav_contact_pane_g5_ParamLimits

0x2843,	// (0x0007a4ce) cell_myfav_contact_pane_g5

0x0004,

0xf9b8,	// (0x00087643) cell_myfav_contact_pane_g_ParamLimits

0xf9b8,	// (0x00087643) cell_myfav_contact_pane_g

0xb0af,	// (0x00082d3a) main_myfav_hc_pane_g3_ParamLimits

0xb0af,	// (0x00082d3a) main_myfav_hc_pane_g3

0x57b1,	// (0x0007d43c) popup_adpt_find_window

0xb108,	// (0x00082d93) afind_page_pane_ParamLimits

0xb108,	// (0x00082d93) afind_page_pane

0xb115,	// (0x00082da0) aid_size_cell_afind_ParamLimits

0xb115,	// (0x00082da0) aid_size_cell_afind

0xb12f,	// (0x00082dba) bg_popup_sub_pane_cp09_ParamLimits

0xb12f,	// (0x00082dba) bg_popup_sub_pane_cp09

0xb13c,	// (0x00082dc7) find_pane_cp01_ParamLimits

0xb13c,	// (0x00082dc7) find_pane_cp01

0x284f,	// (0x0007a4da) grid_afind_control_pane_ParamLimits

0x284f,	// (0x0007a4da) grid_afind_control_pane

0xb149,	// (0x00082dd4) grid_afind_pane_ParamLimits

0xb149,	// (0x00082dd4) grid_afind_pane

0xb165,	// (0x00082df0) cell_afind_pane_ParamLimits

0xb165,	// (0x00082df0) cell_afind_pane

0xea93,	// (0x0008671e) afind_page_pane_g1

0xb1ad,	// (0x00082e38) afind_page_pane_g2

0xb1b6,	// (0x00082e41) afind_page_pane_g3

0x0002,

0xf9c3,	// (0x0008764e) afind_page_pane_g

0xb1bf,	// (0x00082e4a) afind_page_pane_t1

0x2863,	// (0x0007a4ee) cell_afind_grid_control_pane_ParamLimits

0x2863,	// (0x0007a4ee) cell_afind_grid_control_pane

0x25f2,	// (0x0007a27d) bg_button_pane_cp69_ParamLimits

0x25f2,	// (0x0007a27d) bg_button_pane_cp69

0xb1d6,	// (0x00082e61) cell_afind_pane_g1_ParamLimits

0xb1d6,	// (0x00082e61) cell_afind_pane_g1

0xb1e3,	// (0x00082e6e) cell_afind_pane_t1_ParamLimits

0xb1e3,	// (0x00082e6e) cell_afind_pane_t1

0x0e1d,	// (0x00078aa8) bg_button_pane_cp72

0x2872,	// (0x0007a4fd) cell_afind_grid_control_pane_g1

0x8141,	// (0x0007fdcc) aid_image_placing_area_ParamLimits

0x8141,	// (0x0007fdcc) aid_image_placing_area

0xf06a,	// (0x00086cf5) field_vitu_entry_pane_g1_ParamLimits

0xf06a,	// (0x00086cf5) field_vitu_entry_pane_g1

0xf076,	// (0x00086d01) field_vitu_entry_pane_g2_ParamLimits

0xf076,	// (0x00086d01) field_vitu_entry_pane_g2

0x0001,

0xf87d,	// (0x00087508) field_vitu_entry_pane_g_ParamLimits

0xf87d,	// (0x00087508) field_vitu_entry_pane_g

0xa391,	// (0x0008201c) cell_vitu_itu_pane_g1_ParamLimits

0xa3d3,	// (0x0008205e) cell_vitu_itu_pane_t3_ParamLimits

0xa3d3,	// (0x0008205e) cell_vitu_itu_pane_t3

0x25a2,	// (0x0007a22d) mp4_progress_pane_t1_ParamLimits

0x25bb,	// (0x0007a246) mp4_progress_pane_t2_ParamLimits

0xf912,	// (0x0008759d) mp4_progress_pane_t_ParamLimits

0x25d4,	// (0x0007a25f) mup_progress_pane_cp04_ParamLimits

0xb0f2,	// (0x00082d7d) main_myfav_hc_pane_t5_ParamLimits

0xb0f2,	// (0x00082d7d) main_myfav_hc_pane_t5

0x0957,	// (0x000785e2) aid_zoom_text_primary

0x57b1,	// (0x0007d43c) popup_adpt_find_window_ParamLimits

0xe64a,	// (0x000862d5) main_cam_set_pane

0xab89,	// (0x00082814) cam4_zoom_pane_ParamLimits

0xab89,	// (0x00082814) cam4_zoom_pane

0xb1f5,	// (0x00082e80) main_cam_set_pane_g1_ParamLimits

0xb1f5,	// (0x00082e80) main_cam_set_pane_g1

0xb203,	// (0x00082e8e) main_cam_set_pane_g2_ParamLimits

0xb203,	// (0x00082e8e) main_cam_set_pane_g2

0x0001,

0xf9ca,	// (0x00087655) main_cam_set_pane_g_ParamLimits

0xf9ca,	// (0x00087655) main_cam_set_pane_g

0xb20f,	// (0x00082e9a) main_cam_set_pane_t1_ParamLimits

0xb20f,	// (0x00082e9a) main_cam_set_pane_t1

0xb22b,	// (0x00082eb6) main_cset_listscroll_pane_ParamLimits

0xb22b,	// (0x00082eb6) main_cset_listscroll_pane

0xb258,	// (0x00082ee3) main_cset_slider_pane_ParamLimits

0xb258,	// (0x00082ee3) main_cset_slider_pane

0x2883,	// (0x0007a50e) main_cset_list_pane_ParamLimits

0x2883,	// (0x0007a50e) main_cset_list_pane

0x2893,	// (0x0007a51e) scroll_pane_cp028

0xb277,	// (0x00082f02) aid_area_touch_slider

0xb293,	// (0x00082f1e) cset_slider_pane

0xb2bd,	// (0x00082f48) main_cset_slider_pane_g1

0xb2d2,	// (0x00082f5d) main_cset_slider_pane_g2

0x0011,

0xf9cf,	// (0x0008765a) main_cset_slider_pane_g

0x28cc,	// (0x0007a557) main_cset_slider_pane_t1

0xb39a,	// (0x00083025) main_cset_slider_pane_t2

0xb3b4,	// (0x0008303f) main_cset_slider_pane_t3

0xb3ce,	// (0x00083059) main_cset_slider_pane_t4

0xb3ec,	// (0x00083077) main_cset_slider_pane_t5

0xb40e,	// (0x00083099) main_cset_slider_pane_t6

0xb425,	// (0x000830b0) main_cset_slider_pane_t7

0x000e,

0xf9f4,	// (0x0008767f) main_cset_slider_pane_t

0xb533,	// (0x000831be) cset_list_set_pane_ParamLimits

0xb533,	// (0x000831be) cset_list_set_pane

0xb550,	// (0x000831db) aid_position_infowindow_above

0xb558,	// (0x000831e3) aid_position_infowindow_below

0xb560,	// (0x000831eb) cset_list_set_pane_g1_ParamLimits

0xb560,	// (0x000831eb) cset_list_set_pane_g1

0xb56c,	// (0x000831f7) cset_list_set_pane_g3_ParamLimits

0xb56c,	// (0x000831f7) cset_list_set_pane_g3

0x0001,

0xfa13,	// (0x0008769e) cset_list_set_pane_g_ParamLimits

0xfa13,	// (0x0008769e) cset_list_set_pane_g

0xb57b,	// (0x00083206) cset_list_set_pane_t1_ParamLimits

0xb57b,	// (0x00083206) cset_list_set_pane_t1

0xe64a,	// (0x000862d5) list_highlight_pane_cp021_ParamLimits

0xe64a,	// (0x000862d5) list_highlight_pane_cp021

0x19e6,	// (0x00079671) cset_slider_pane_g1

0x19f8,	// (0x00079683) cset_slider_pane_g2

0x19ef,	// (0x0007967a) cset_slider_pane_g3

0x0002,

0xfa18,	// (0x000876a3) cset_slider_pane_g

0xb590,	// (0x0008321b) aid_area_touch_cam4_zoom

0xb598,	// (0x00083223) cam4_zoom_cont_pane

0xb5a0,	// (0x0008322b) cam4_zoom_pane_g1

0xb5a8,	// (0x00083233) cam4_zoom_pane_g2

0xb5b0,	// (0x0008323b) cam4_zoom_pane_g3

0x0002,

0xfa1f,	// (0x000876aa) cam4_zoom_pane_g

0xb5b8,	// (0x00083243) cam4_zoom_cont_pane_g1

0xb5c1,	// (0x0008324c) cam4_zoom_cont_pane_g2

0xb5ca,	// (0x00083255) cam4_zoom_cont_pane_g3

0x0002,

0xfa26,	// (0x000876b1) cam4_zoom_cont_pane_g

0xaa82,	// (0x0008270d) call4_image_pane_ParamLimits

0xaa82,	// (0x0008270d) call4_image_pane

0x25fe,	// (0x0007a289) call4_windows_conf_pane_ParamLimits

0x263d,	// (0x0007a2c8) popup_call4_audio_in_window_ParamLimits

0x263d,	// (0x0007a2c8) popup_call4_audio_in_window

0xdd39,	// (0x000859c4) bg_popup_call2_act_pane_cp02

0x26b3,	// (0x0007a33e) call4_list_conf_pane

0xea93,	// (0x0008671e) call4_image_pane_g1

0xea93,	// (0x0008671e) call4_image_pane_g2

0x0001,

0xf743,	// (0x000873ce) call4_image_pane_g

0x2987,	// (0x0007a612) list_single_graphic_popup_conf4_pane_ParamLimits

0x2987,	// (0x0007a612) list_single_graphic_popup_conf4_pane

0xdd39,	// (0x000859c4) list_highlight_pane_cp022

0x299a,	// (0x0007a625) list_single_graphic_popup_conf4_pane_g1

0x16b7,	// (0x00079342) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xfa2d,	// (0x000876b8) list_single_graphic_popup_conf4_pane_g

0x29a2,	// (0x0007a62d) list_single_graphic_popup_conf4_pane_t1

0x662d,	// (0x0007e2b8) popup_vtel_slider_window_ParamLimits

0x662d,	// (0x0007e2b8) popup_vtel_slider_window

0x25e0,	// (0x0007a26b) dialer2_ne_pane_t2_ParamLimits

0x25e0,	// (0x0007a26b) dialer2_ne_pane_t2

0x0001,

0xf917,	// (0x000875a2) dialer2_ne_pane_t_ParamLimits

0xf917,	// (0x000875a2) dialer2_ne_pane_t

0xe64a,	// (0x000862d5) bg_popup_sub_pane_cp010_ParamLimits

0xe64a,	// (0x000862d5) bg_popup_sub_pane_cp010

0xb5d3,	// (0x0008325e) popup_vtel_slider_window_g1_ParamLimits

0xb5d3,	// (0x0008325e) popup_vtel_slider_window_g1

0xb5df,	// (0x0008326a) popup_vtel_slider_window_g2_ParamLimits

0xb5df,	// (0x0008326a) popup_vtel_slider_window_g2

0x0003,

0xfa32,	// (0x000876bd) popup_vtel_slider_window_g_ParamLimits

0xfa32,	// (0x000876bd) popup_vtel_slider_window_g

0xb627,	// (0x000832b2) vtel_slider_pane_ParamLimits

0xb627,	// (0x000832b2) vtel_slider_pane

0xb636,	// (0x000832c1) vtel_slider_pane_g1_ParamLimits

0xb636,	// (0x000832c1) vtel_slider_pane_g1

0xb643,	// (0x000832ce) vtel_slider_pane_g2_ParamLimits

0xb643,	// (0x000832ce) vtel_slider_pane_g2

0xb650,	// (0x000832db) vtel_slider_pane_g3_ParamLimits

0xb650,	// (0x000832db) vtel_slider_pane_g3

0xb636,	// (0x000832c1) vtel_slider_pane_g4_ParamLimits

0xb636,	// (0x000832c1) vtel_slider_pane_g4

0xb65d,	// (0x000832e8) vtel_slider_pane_g5_ParamLimits

0xb65d,	// (0x000832e8) vtel_slider_pane_g5

0x0004,

0xfa3b,	// (0x000876c6) vtel_slider_pane_g_ParamLimits

0xfa3b,	// (0x000876c6) vtel_slider_pane_g

0xdd39,	// (0x000859c4) main_gallery2_pane

0xadc2,	// (0x00082a4d) aid_size_row_itut2_dropdow_list_ParamLimits

0xadc2,	// (0x00082a4d) aid_size_row_itut2_dropdow_list

0xae30,	// (0x00082abb) grid_vitu2_function_top_pane_ParamLimits

0xae30,	// (0x00082abb) grid_vitu2_function_top_pane

0xae86,	// (0x00082b11) popup_vitu2_dropdown_list_window_ParamLimits

0xae86,	// (0x00082b11) popup_vitu2_dropdown_list_window

0xaea6,	// (0x00082b31) popup_vitu2_match_list_window

0xb66a,	// (0x000832f5) cell_vitu2_function_top_pane_ParamLimits

0xb66a,	// (0x000832f5) cell_vitu2_function_top_pane

0xb68a,	// (0x00083315) cell_vitu2_function_top_pane_cp01_ParamLimits

0xb68a,	// (0x00083315) cell_vitu2_function_top_pane_cp01

0xb6a8,	// (0x00083333) cell_vitu2_function_top_wide_pane_ParamLimits

0xb6a8,	// (0x00083333) cell_vitu2_function_top_wide_pane

0xacf0,	// (0x0008297b) bg_button_pane_cp012

0xb6c6,	// (0x00083351) cell_vitu2_function_top_pane_g1

0xb6d5,	// (0x00083360) bg_button_pane_cp013_ParamLimits

0xb6d5,	// (0x00083360) bg_button_pane_cp013

0xb6f1,	// (0x0008337c) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0xb6f1,	// (0x0008337c) cell_vitu2_function_top_wide_pane_g1

0xb709,	// (0x00083394) bg_popup_sub_pane_cp20

0xb717,	// (0x000833a2) list_vitu2_match_list_pane

0x2779,	// (0x0007a404) bg_popup_sub_pane_cp20_g1

0x2781,	// (0x0007a40c) bg_popup_sub_pane_cp20_g2

0x10e8,	// (0x00078d73) bg_popup_sub_pane_cp20_g3

0x2789,	// (0x0007a414) bg_popup_sub_pane_cp20_g4

0x10c8,	// (0x00078d53) bg_popup_sub_pane_cp20_g5

0x29be,	// (0x0007a649) bg_popup_sub_pane_cp20_g6

0x2799,	// (0x0007a424) bg_popup_sub_pane_cp20_g7

0x27a1,	// (0x0007a42c) bg_popup_sub_pane_cp20_g8

0x27a9,	// (0x0007a434) bg_popup_sub_pane_cp20_g9

0x0008,

0xfa46,	// (0x000876d1) bg_popup_sub_pane_cp20_g

0xb72f,	// (0x000833ba) list_vitu2_match_list_item_pane_ParamLimits

0xb72f,	// (0x000833ba) list_vitu2_match_list_item_pane

0xb741,	// (0x000833cc) list_vitu2_match_list_item_pane_t1

0x5bbe,	// (0x0007d849) bg_popup_sub_pane_cp21

0xb77e,	// (0x00083409) grid_vitu2_dropdown_list_pane

0xb786,	// (0x00083411) cell_vitu2_dropdown_list_char_pane_ParamLimits

0xb786,	// (0x00083411) cell_vitu2_dropdown_list_char_pane

0xb7a7,	// (0x00083432) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0xb7a7,	// (0x00083432) cell_vitu2_dropdown_list_ctrl_pane

0x29f0,	// (0x0007a67b) cell_vitu2_dropdown_list_char_pane_g1

0x29e7,	// (0x0007a672) cell_vitu2_dropdown_list_char_pane_g2

0x29de,	// (0x0007a669) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xfa63,	// (0x000876ee) cell_vitu2_dropdown_list_char_pane_g

0xb7d3,	// (0x0008345e) cell_vitu2_dropdown_list_char_pane_t1

0xb7e1,	// (0x0008346c) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0xb7e1,	// (0x0008346c) cell_vitu2_dropdown_list_ctrl_pane_g1

0xb7f1,	// (0x0008347c) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0xb7f1,	// (0x0008347c) cell_vitu2_dropdown_list_ctrl_pane_g2

0xb802,	// (0x0008348d) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0xb802,	// (0x0008348d) cell_vitu2_dropdown_list_ctrl_pane_g3

0xb812,	// (0x0008349d) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0xb812,	// (0x0008349d) cell_vitu2_dropdown_list_ctrl_pane_g4

0xac05,	// (0x00082890) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0xac05,	// (0x00082890) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa6a,	// (0x000876f5) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa6a,	// (0x000876f5) cell_vitu2_dropdown_list_ctrl_pane_g

0xb82e,	// (0x000834b9) aid_size_cell_gallery2_ParamLimits

0xb82e,	// (0x000834b9) aid_size_cell_gallery2

0xb83c,	// (0x000834c7) grid_gallery2_pane_ParamLimits

0xb83c,	// (0x000834c7) grid_gallery2_pane

0xb84b,	// (0x000834d6) scroll_pane_cp029_ParamLimits

0xb84b,	// (0x000834d6) scroll_pane_cp029

0xb857,	// (0x000834e2) cell_gallery2_pane_ParamLimits

0xb857,	// (0x000834e2) cell_gallery2_pane

0x29f9,	// (0x0007a684) cell_gallery2_pane_g2

0xb888,	// (0x00083513) cell_gallery2_pane_g3

0x2a03,	// (0x0007a68e) cell_gallery2_pane_g4

0x2a0b,	// (0x0007a696) cell_gallery2_pane_g5

0x1890,	// (0x0007951b) grid_highlight_pane_cp10

0xaea6,	// (0x00082b31) popup_vitu2_match_list_window_ParamLimits

0xaeb8,	// (0x00082b43) popup_vitu2_query_window_ParamLimits

0xaeb8,	// (0x00082b43) popup_vitu2_query_window

0x5bbe,	// (0x0007d849) bg_vitu2_candi_button_pane

0x29f0,	// (0x0007a67b) cell_vitu2_dropdown_list_char_pane_g1_copy1

0x29e7,	// (0x0007a672) cell_vitu2_dropdown_list_char_pane_g2_copy1

0x29de,	// (0x0007a669) cell_vitu2_dropdown_list_char_pane_g2_copy2

0xb890,	// (0x0008351b) bg_button_pane_cp015

0xb89a,	// (0x00083525) bg_button_pane_cp016

0xb8a4,	// (0x0008352f) bg_button_pane_cp017

0xe64a,	// (0x000862d5) bg_popup_sub_pane_cp22

0x2a13,	// (0x0007a69e) popup_vitu2_query_window_g1

0xb8cc,	// (0x00083557) popup_vitu2_query_window_g2

0x0001,

0xfa75,	// (0x00087700) popup_vitu2_query_window_g

0xb8da,	// (0x00083565) popup_vitu2_query_window_t1_ParamLimits

0xb8da,	// (0x00083565) popup_vitu2_query_window_t1

0xb902,	// (0x0008358d) popup_vitu2_query_window_t2_ParamLimits

0xb902,	// (0x0008358d) popup_vitu2_query_window_t2

0xb914,	// (0x0008359f) popup_vitu2_query_window_t3_ParamLimits

0xb914,	// (0x0008359f) popup_vitu2_query_window_t3

0xb93c,	// (0x000835c7) popup_vitu2_query_window_t4_ParamLimits

0xb93c,	// (0x000835c7) popup_vitu2_query_window_t4

0xb950,	// (0x000835db) popup_vitu2_query_window_t5_ParamLimits

0xb950,	// (0x000835db) popup_vitu2_query_window_t5

0x0004,

0xfa7a,	// (0x00087705) popup_vitu2_query_window_t_ParamLimits

0xfa7a,	// (0x00087705) popup_vitu2_query_window_t

0x287b,	// (0x0007a506) main_cset_text_pane

0xb277,	// (0x00082f02) aid_area_touch_slider_ParamLimits

0xb293,	// (0x00082f1e) cset_slider_pane_ParamLimits

0xb2bd,	// (0x00082f48) main_cset_slider_pane_g1_ParamLimits

0xb2d2,	// (0x00082f5d) main_cset_slider_pane_g2_ParamLimits

0x289c,	// (0x0007a527) main_cset_slider_pane_g3_ParamLimits

0x289c,	// (0x0007a527) main_cset_slider_pane_g3

0xb2e7,	// (0x00082f72) main_cset_slider_pane_g4_ParamLimits

0xb2e7,	// (0x00082f72) main_cset_slider_pane_g4

0xb2f6,	// (0x00082f81) main_cset_slider_pane_g5_ParamLimits

0xb2f6,	// (0x00082f81) main_cset_slider_pane_g5

0xb304,	// (0x00082f8f) main_cset_slider_pane_g6_ParamLimits

0xb304,	// (0x00082f8f) main_cset_slider_pane_g6

0xf9cf,	// (0x0008765a) main_cset_slider_pane_g_ParamLimits

0x28cc,	// (0x0007a557) main_cset_slider_pane_t1_ParamLimits

0xb39a,	// (0x00083025) main_cset_slider_pane_t2_ParamLimits

0xb3b4,	// (0x0008303f) main_cset_slider_pane_t3_ParamLimits

0xb3ce,	// (0x00083059) main_cset_slider_pane_t4_ParamLimits

0xb3ec,	// (0x00083077) main_cset_slider_pane_t5_ParamLimits

0xb40e,	// (0x00083099) main_cset_slider_pane_t6_ParamLimits

0xb425,	// (0x000830b0) main_cset_slider_pane_t7_ParamLimits

0xb453,	// (0x000830de) main_cset_slider_pane_t8_ParamLimits

0xb453,	// (0x000830de) main_cset_slider_pane_t8

0xb47b,	// (0x00083106) main_cset_slider_pane_t9_ParamLimits

0xb47b,	// (0x00083106) main_cset_slider_pane_t9

0xb4a3,	// (0x0008312e) main_cset_slider_pane_t10_ParamLimits

0xb4a3,	// (0x0008312e) main_cset_slider_pane_t10

0xb4cb,	// (0x00083156) main_cset_slider_pane_t11_ParamLimits

0xb4cb,	// (0x00083156) main_cset_slider_pane_t11

0xb4f5,	// (0x00083180) main_cset_slider_pane_t12_ParamLimits

0xb4f5,	// (0x00083180) main_cset_slider_pane_t12

0xb514,	// (0x0008319f) main_cset_slider_pane_t13_ParamLimits

0xb514,	// (0x0008319f) main_cset_slider_pane_t13

0xf9f4,	// (0x0008767f) main_cset_slider_pane_t_ParamLimits

0xdd39,	// (0x000859c4) bg_popup_sub_pane_cp011

0x2a1f,	// (0x0007a6aa) main_cset_text_pane_g1

0x2a27,	// (0x0007a6b2) main_cset_text_pane_t1

0x2a35,	// (0x0007a6c0) main_cset_text_pane_t2

0x2a43,	// (0x0007a6ce) main_cset_text_pane_t3

0x2a51,	// (0x0007a6dc) main_cset_text_pane_t4

0x2a5f,	// (0x0007a6ea) main_cset_text_pane_t5

0x2a6d,	// (0x0007a6f8) main_cset_text_pane_t6

0x2a7b,	// (0x0007a706) main_cset_text_pane_t7

0x0006,

0xfa85,	// (0x00087710) main_cset_text_pane_t

0xdd39,	// (0x000859c4) main_cam4_burst_pane

0xdd39,	// (0x000859c4) main_cam5_pane

0x1217,	// (0x00078ea2) bg_button_pane_cp019

0xb1cd,	// (0x00082e58) bg_button_pane_cp020

0x28a8,	// (0x0007a533) main_cset_slider_pane_g7_ParamLimits

0x28a8,	// (0x0007a533) main_cset_slider_pane_g7

0x28b4,	// (0x0007a53f) main_cset_slider_pane_g8_ParamLimits

0x28b4,	// (0x0007a53f) main_cset_slider_pane_g8

0xb31a,	// (0x00082fa5) main_cset_slider_pane_g9_ParamLimits

0xb31a,	// (0x00082fa5) main_cset_slider_pane_g9

0xb326,	// (0x00082fb1) main_cset_slider_pane_g10_ParamLimits

0xb326,	// (0x00082fb1) main_cset_slider_pane_g10

0xb332,	// (0x00082fbd) main_cset_slider_pane_g11_ParamLimits

0xb332,	// (0x00082fbd) main_cset_slider_pane_g11

0xb33e,	// (0x00082fc9) main_cset_slider_pane_g12_ParamLimits

0xb33e,	// (0x00082fc9) main_cset_slider_pane_g12

0xb34a,	// (0x00082fd5) main_cset_slider_pane_g13_ParamLimits

0xb34a,	// (0x00082fd5) main_cset_slider_pane_g13

0xb358,	// (0x00082fe3) main_cset_slider_pane_g14_ParamLimits

0xb358,	// (0x00082fe3) main_cset_slider_pane_g14

0xb366,	// (0x00082ff1) main_cset_slider_pane_g15_ParamLimits

0xb366,	// (0x00082ff1) main_cset_slider_pane_g15

0x28fa,	// (0x0007a585) main_cset_slider_pane_t14_ParamLimits

0x28fa,	// (0x0007a585) main_cset_slider_pane_t14

0x2933,	// (0x0007a5be) main_cset_slider_pane_t15_ParamLimits

0x2933,	// (0x0007a5be) main_cset_slider_pane_t15

0xb964,	// (0x000835ef) aid_cam4_burst_size_cell_ParamLimits

0xb964,	// (0x000835ef) aid_cam4_burst_size_cell

0xb980,	// (0x0008360b) grid_cam4_burst_pane_ParamLimits

0xb980,	// (0x0008360b) grid_cam4_burst_pane

0xb9b0,	// (0x0008363b) linegrid_cam4_burst_pane_ParamLimits

0xb9b0,	// (0x0008363b) linegrid_cam4_burst_pane

0xb9d2,	// (0x0008365d) scroll_pane_cp30_ParamLimits

0xb9d2,	// (0x0008365d) scroll_pane_cp30

0xb9de,	// (0x00083669) cell_cam4_burst_pane_ParamLimits

0xb9de,	// (0x00083669) cell_cam4_burst_pane

0x2a89,	// (0x0007a714) linegrid_cam4_burst_pane_g1_ParamLimits

0x2a89,	// (0x0007a714) linegrid_cam4_burst_pane_g1

0xba1a,	// (0x000836a5) linegrid_cam4_burst_pane_g2_ParamLimits

0xba1a,	// (0x000836a5) linegrid_cam4_burst_pane_g2

0x2a96,	// (0x0007a721) linegrid_cam4_burst_pane_g3_ParamLimits

0x2a96,	// (0x0007a721) linegrid_cam4_burst_pane_g3

0x0002,

0xfa94,	// (0x0008771f) linegrid_cam4_burst_pane_g_ParamLimits

0xfa94,	// (0x0008771f) linegrid_cam4_burst_pane_g

0xba2b,	// (0x000836b6) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0xba2b,	// (0x000836b6) linegrid_cam4_burst_pane_g3_copy1

0x2aa3,	// (0x0007a72e) linegrid_cam4_burst_pane_g4_ParamLimits

0x2aa3,	// (0x0007a72e) linegrid_cam4_burst_pane_g4

0xba45,	// (0x000836d0) linegrid_cam4_burst_pane_g5_ParamLimits

0xba45,	// (0x000836d0) linegrid_cam4_burst_pane_g5

0xba56,	// (0x000836e1) linegrid_cam4_burst_pane_g6_ParamLimits

0xba56,	// (0x000836e1) linegrid_cam4_burst_pane_g6

0x2ab0,	// (0x0007a73b) linegrid_cam4_burst_pane_g7_ParamLimits

0x2ab0,	// (0x0007a73b) linegrid_cam4_burst_pane_g7

0xba67,	// (0x000836f2) cell_cam4_burst_pane_g1

0x2ac9,	// (0x0007a754) main_cam5_pane_t1_ParamLimits

0x2ac9,	// (0x0007a754) main_cam5_pane_t1

0x2adb,	// (0x0007a766) main_cam5_pane_t2_ParamLimits

0x2adb,	// (0x0007a766) main_cam5_pane_t2

0x2aed,	// (0x0007a778) main_cam5_pane_t3_ParamLimits

0x2aed,	// (0x0007a778) main_cam5_pane_t3

0x2aff,	// (0x0007a78a) main_cam5_pane_t4_ParamLimits

0x2aff,	// (0x0007a78a) main_cam5_pane_t4

0x2b15,	// (0x0007a7a0) main_cam5_pane_t5_ParamLimits

0x2b15,	// (0x0007a7a0) main_cam5_pane_t5

0x2b27,	// (0x0007a7b2) main_cam5_pane_t6_ParamLimits

0x2b27,	// (0x0007a7b2) main_cam5_pane_t6

0x2b3b,	// (0x0007a7c6) main_cam5_pane_t7_ParamLimits

0x2b3b,	// (0x0007a7c6) main_cam5_pane_t7

0x2b4d,	// (0x0007a7d8) main_cam5_pane_t8_ParamLimits

0x2b4d,	// (0x0007a7d8) main_cam5_pane_t8

0x2b69,	// (0x0007a7f4) main_cam5_pane_t9_ParamLimits

0x2b69,	// (0x0007a7f4) main_cam5_pane_t9

0x2b7b,	// (0x0007a806) main_cam5_pane_t10_ParamLimits

0x2b7b,	// (0x0007a806) main_cam5_pane_t10

0x2b8d,	// (0x0007a818) main_cam5_pane_t11_ParamLimits

0x2b8d,	// (0x0007a818) main_cam5_pane_t11

0x2b9f,	// (0x0007a82a) main_cam5_pane_t12_ParamLimits

0x2b9f,	// (0x0007a82a) main_cam5_pane_t12

0x2bb4,	// (0x0007a83f) main_cam5_pane_t13_ParamLimits

0x2bb4,	// (0x0007a83f) main_cam5_pane_t13

0x000c,

0xfaa0,	// (0x0008772b) main_cam5_pane_t_ParamLimits

0xfaa0,	// (0x0008772b) main_cam5_pane_t

0x585e,	// (0x0007d4e9) popup_scut_keymap_window_ParamLimits

0x585e,	// (0x0007d4e9) popup_scut_keymap_window

0xba7a,	// (0x00083705) aid_size_cell_brow_shortcut

0x1890,	// (0x0007951b) bg_popup_window_pane_cp010

0xba86,	// (0x00083711) grid_scut_pane

0xba92,	// (0x0008371d) cell_scut_pane_ParamLimits

0xba92,	// (0x0008371d) cell_scut_pane

0xbaa9,	// (0x00083734) cell_scut_pane_g1

0x2bd1,	// (0x0007a85c) cell_scut_pane_t1

0x2be0,	// (0x0007a86b) cell_scut_pane_t2

0xbab2,	// (0x0008373d) cell_scut_pane_t3

0x0002,

0xfabb,	// (0x00087746) cell_scut_pane_t

0x9a12,	// (0x0008169d) main_mup3_pane_g8_ParamLimits

0x9a12,	// (0x0008169d) main_mup3_pane_g8

0xadd0,	// (0x00082a5b) area_vitu2_query_pane_ParamLimits

0xadd0,	// (0x00082a5b) area_vitu2_query_pane

0xb8ae,	// (0x00083539) input_focus_pane_cp08

0x2bef,	// (0x0007a87a) area_vitu2_query_pane_g1

0xbac0,	// (0x0008374b) area_vitu2_query_pane_g2

0x0001,

0xfac2,	// (0x0008774d) area_vitu2_query_pane_g

0xbad1,	// (0x0008375c) area_vitu2_query_pane_t1_ParamLimits

0xbad1,	// (0x0008375c) area_vitu2_query_pane_t1

0xbae5,	// (0x00083770) area_vitu2_query_pane_t2_ParamLimits

0xbae5,	// (0x00083770) area_vitu2_query_pane_t2

0xbaf9,	// (0x00083784) area_vitu2_query_pane_t3_ParamLimits

0xbaf9,	// (0x00083784) area_vitu2_query_pane_t3

0x2bfb,	// (0x0007a886) area_vitu2_query_pane_t4_ParamLimits

0x2bfb,	// (0x0007a886) area_vitu2_query_pane_t4

0x2c23,	// (0x0007a8ae) area_vitu2_query_pane_t5_ParamLimits

0x2c23,	// (0x0007a8ae) area_vitu2_query_pane_t5

0x2c4b,	// (0x0007a8d6) area_vitu2_query_pane_t6_ParamLimits

0x2c4b,	// (0x0007a8d6) area_vitu2_query_pane_t6

0x0006,

0xfac7,	// (0x00087752) area_vitu2_query_pane_t_ParamLimits

0xfac7,	// (0x00087752) area_vitu2_query_pane_t

0xbb21,	// (0x000837ac) bg_button_pane_cp018

0xbb2f,	// (0x000837ba) bg_button_pane_cp021

0xbb3b,	// (0x000837c6) bg_button_pane_cp022

0xbb4c,	// (0x000837d7) input_focus_pane_cp09

0x774f,	// (0x0007f3da) aid_size_touch_mv_arrow_left

0x777a,	// (0x0007f405) aid_size_touch_mv_arrow_right

0xb37e,	// (0x00083009) main_cset_slider_pane_g16_ParamLimits

0xb37e,	// (0x00083009) main_cset_slider_pane_g16

0xb38c,	// (0x00083017) main_cset_slider_pane_g17_ParamLimits

0xb38c,	// (0x00083017) main_cset_slider_pane_g17

0xba67,	// (0x000836f2) cell_cam4_burst_pane_g1_ParamLimits

0xdd39,	// (0x000859c4) compa_mode_pane

0xb5eb,	// (0x00083276) popup_vtel_slider_window_g3_ParamLimits

0xb5eb,	// (0x00083276) popup_vtel_slider_window_g3

0xb5ff,	// (0x0008328a) popup_vtel_slider_window_g4_ParamLimits

0xb5ff,	// (0x0008328a) popup_vtel_slider_window_g4

0xb613,	// (0x0008329e) popup_vtel_slider_window_t1_ParamLimits

0xb613,	// (0x0008329e) popup_vtel_slider_window_t1

0xdd39,	// (0x000859c4) main_cl_pane

0xe672,	// (0x000862fd) popup_imed_adjust2_window_ParamLimits

0xe63c,	// (0x000862c7) bg_tb_trans_pane_cp05_ParamLimits

0xef9f,	// (0x00086c2a) popup_imed_adjust2_window_g1_ParamLimits

0xefae,	// (0x00086c39) popup_imed_adjust2_window_g2_ParamLimits

0xefae,	// (0x00086c39) popup_imed_adjust2_window_g2

0xefba,	// (0x00086c45) popup_imed_adjust2_window_g3_ParamLimits

0xefba,	// (0x00086c45) popup_imed_adjust2_window_g3

0x0002,

0xf841,	// (0x000874cc) popup_imed_adjust2_window_g_ParamLimits

0xf841,	// (0x000874cc) popup_imed_adjust2_window_g

0xefc6,	// (0x00086c51) popup_imed_adjust2_window_t1_ParamLimits

0xefde,	// (0x00086c69) slider_imed_adjust_pane_ParamLimits

0xeff2,	// (0x00086c7d) slider_imed_adjust_pane_g1_ParamLimits

0xf002,	// (0x00086c8d) slider_imed_adjust_pane_g2_ParamLimits

0xf012,	// (0x00086c9d) slider_imed_adjust_pane_g3_ParamLimits

0xf023,	// (0x00086cae) slider_imed_adjust_pane_g4_ParamLimits

0xf848,	// (0x000874d3) slider_imed_adjust_pane_g_ParamLimits

0xab3e,	// (0x000827c9) aid_touch_area_cam4_ParamLimits

0xab3e,	// (0x000827c9) aid_touch_area_cam4

0xab4e,	// (0x000827d9) battery_pane_cp01

0xabd5,	// (0x00082860) main_camera4_pane_g6_ParamLimits

0xabd5,	// (0x00082860) main_camera4_pane_g6

0xabf3,	// (0x0008287e) main_camera4_pane_t2_ParamLimits

0xabf3,	// (0x0008287e) main_camera4_pane_t2

0x0001,

0xf94b,	// (0x000875d6) main_camera4_pane_t_ParamLimits

0xf94b,	// (0x000875d6) main_camera4_pane_t

0xac62,	// (0x000828ed) aid_touch_area_vid4_ParamLimits

0xac62,	// (0x000828ed) aid_touch_area_vid4

0xaca2,	// (0x0008292d) main_video4_pane_g5_ParamLimits

0xaca2,	// (0x0008292d) main_video4_pane_g5

0xacc4,	// (0x0008294f) vid4_progress_pane_ParamLimits

0xacc4,	// (0x0008294f) vid4_progress_pane

0x28c0,	// (0x0007a54b) main_cset_slider_pane_g18_ParamLimits

0x28c0,	// (0x0007a54b) main_cset_slider_pane_g18

0x2abd,	// (0x0007a748) cell_cam4_burst_pane_g2_ParamLimits

0x2abd,	// (0x0007a748) cell_cam4_burst_pane_g2

0x0001,

0xfa9b,	// (0x00087726) cell_cam4_burst_pane_g_ParamLimits

0xfa9b,	// (0x00087726) cell_cam4_burst_pane_g

0xbb5d,	// (0x000837e8) bg_cl_pane_ParamLimits

0xbb5d,	// (0x000837e8) bg_cl_pane

0xbb69,	// (0x000837f4) cl_header_pane_ParamLimits

0xbb69,	// (0x000837f4) cl_header_pane

0xbb75,	// (0x00083800) cl_listscroll_pane_ParamLimits

0xbb75,	// (0x00083800) cl_listscroll_pane

0x2c97,	// (0x0007a922) bg_cl_pane_g1

0x2c9f,	// (0x0007a92a) bg_cl_pane_g2

0x2ca7,	// (0x0007a932) bg_cl_pane_g3

0x2caf,	// (0x0007a93a) bg_cl_pane_g4

0x2cb7,	// (0x0007a942) bg_cl_pane_g5

0x2cbf,	// (0x0007a94a) bg_cl_pane_g6

0x2cc7,	// (0x0007a952) bg_cl_pane_g7

0x2ccf,	// (0x0007a95a) bg_cl_pane_g8

0x2cd7,	// (0x0007a962) bg_cl_pane_g9

0x0008,

0xfad6,	// (0x00087761) bg_cl_pane_g

0xbb81,	// (0x0008380c) aid_height_cl_leading_ParamLimits

0xbb81,	// (0x0008380c) aid_height_cl_leading

0xbb8d,	// (0x00083818) aid_height_cl_text_ParamLimits

0xbb8d,	// (0x00083818) aid_height_cl_text

0x26df,	// (0x0007a36a) bg_cl_header_pane_ParamLimits

0x26df,	// (0x0007a36a) bg_cl_header_pane

0xbba5,	// (0x00083830) cl_header_pane_g1_ParamLimits

0xbba5,	// (0x00083830) cl_header_pane_g1

0xbbb2,	// (0x0008383d) cl_header_pane_t1_ParamLimits

0xbbb2,	// (0x0008383d) cl_header_pane_t1

0x2cdf,	// (0x0007a96a) cl_list_pane

0x2893,	// (0x0007a51e) hc_scroll_pane_cp01

0x10c8,	// (0x00078d53) bg_cl_header_pane_g1

0x2779,	// (0x0007a404) bg_cl_header_pane_g2

0x10e8,	// (0x00078d73) bg_cl_header_pane_g3

0x2789,	// (0x0007a414) bg_cl_header_pane_g4

0x2781,	// (0x0007a40c) bg_cl_header_pane_g5

0x29be,	// (0x0007a649) bg_cl_header_pane_g6

0x27a1,	// (0x0007a42c) bg_cl_header_pane_g7

0x27a9,	// (0x0007a434) bg_cl_header_pane_g8

0x2799,	// (0x0007a424) bg_cl_header_pane_g9

0x0008,

0xfae9,	// (0x00087774) bg_cl_header_pane_g

0xbbc4,	// (0x0008384f) hc_cl_list_double_graphic_heading_pane_ParamLimits

0xbbc4,	// (0x0008384f) hc_cl_list_double_graphic_heading_pane

0xbbdb,	// (0x00083866) hc_cl_list_single_graphic_pane_ParamLimits

0xbbdb,	// (0x00083866) hc_cl_list_single_graphic_pane

0xbbfb,	// (0x00083886) hc_cl_list_single_graphic_pane_g1_ParamLimits

0xbbfb,	// (0x00083886) hc_cl_list_single_graphic_pane_g1

0xbc07,	// (0x00083892) hc_cl_list_single_graphic_pane_g2_ParamLimits

0xbc07,	// (0x00083892) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfafc,	// (0x00087787) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfafc,	// (0x00087787) hc_cl_list_single_graphic_pane_g

0xbc1b,	// (0x000838a6) hc_cl_list_single_graphic_pane_t1_ParamLimits

0xbc1b,	// (0x000838a6) hc_cl_list_single_graphic_pane_t1

0xbbfb,	// (0x00083886) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0xbbfb,	// (0x00083886) hc_cl_list_double_graphic_heading_pane_g1

0xbc30,	// (0x000838bb) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0xbc30,	// (0x000838bb) hc_cl_list_double_graphic_heading_pane_g2

0xbc44,	// (0x000838cf) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0xbc44,	// (0x000838cf) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfb01,	// (0x0008778c) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfb01,	// (0x0008778c) hc_cl_list_double_graphic_heading_pane_g

0xbc58,	// (0x000838e3) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0xbc58,	// (0x000838e3) hc_cl_list_double_graphic_heading_pane_t1

0xbc6d,	// (0x000838f8) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0xbc6d,	// (0x000838f8) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfb08,	// (0x00087793) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfb08,	// (0x00087793) hc_cl_list_double_graphic_heading_pane_t

0xbc92,	// (0x0008391d) vid4_progress_pane_g1

0xbc9e,	// (0x00083929) vid4_progress_pane_g2

0xbcaa,	// (0x00083935) vid4_progress_pane_g3

0xbcb9,	// (0x00083944) vid4_progress_pane_g4

0x0004,

0xfb0d,	// (0x00087798) vid4_progress_pane_g

0xbcd7,	// (0x00083962) vid4_progress_pane_t1

0xbced,	// (0x00083978) vid4_progress_pane_t2

0x0002,

0xfb18,	// (0x000877a3) vid4_progress_pane_t

0xbd18,	// (0x000839a3) wait_bar_pane_cp07

0xe884,	// (0x0008650f) blid_firmament_pane_ParamLimits

0xe8c7,	// (0x00086552) popup_blid_sat_info2_window_g1

0xe8eb,	// (0x00086576) popup_blid_sat_info2_window_t3

0xe8f9,	// (0x00086584) popup_blid_sat_info2_window_t4

0xe907,	// (0x00086592) popup_blid_sat_info2_window_t5

0xe915,	// (0x000865a0) popup_blid_sat_info2_window_t6

0xe925,	// (0x000865b0) popup_blid_sat_info2_window_t7

0xe933,	// (0x000865be) popup_blid_sat_info2_window_t8

0xe941,	// (0x000865cc) popup_blid_sat_info2_window_t9

0xe94f,	// (0x000865da) popup_blid_sat_info2_window_t10

0xea13,	// (0x0008669e) aid_firma_cardinal_ParamLimits

0xea27,	// (0x000866b2) blid_firmament_pane_t1_ParamLimits

0xea3e,	// (0x000866c9) blid_firmament_pane_t2_ParamLimits

0xea55,	// (0x000866e0) blid_firmament_pane_t3_ParamLimits

0xea6c,	// (0x000866f7) blid_firmament_pane_t4_ParamLimits

0xf73a,	// (0x000873c5) blid_firmament_pane_t_ParamLimits

0xea83,	// (0x0008670e) blid_sat_info_pane_ParamLimits

0xe64a,	// (0x000862d5) main_cam_set_pane_ParamLimits

0xa1ab,	// (0x00081e36) aid_size_cell_colour_35_ParamLimits

0xa1c5,	// (0x00081e50) aid_size_cell_colour_112_ParamLimits

0xa1dc,	// (0x00081e67) aid_size_cell_effect_ParamLimits

0xe64a,	// (0x000862d5) bg_tb_trans_pane_cp02_ParamLimits

0xeebd,	// (0x00086b48) heading_imed_pane_ParamLimits

0xa1f6,	// (0x00081e81) listscroll_imed_pane_ParamLimits

0x8356,	// (0x0007ffe1) popup_call2_audio_first_window_g5_ParamLimits

0x8356,	// (0x0007ffe1) popup_call2_audio_first_window_g5

0xa8ed,	// (0x00082578) aid_size_touch_image3_arrow_left_ParamLimits

0xa8ed,	// (0x00082578) aid_size_touch_image3_arrow_left

0xa903,	// (0x0008258e) aid_size_touch_image3_arrow_right_ParamLimits

0xa903,	// (0x0008258e) aid_size_touch_image3_arrow_right

0xbd03,	// (0x0008398e) vid4_progress_pane_t3

0xa49c,	// (0x00082127) main_hwr_training_symbol_option_pane_ParamLimits

0xa49c,	// (0x00082127) main_hwr_training_symbol_option_pane

0x24e2,	// (0x0007a16d) popup_hwr_training_preview_window_ParamLimits

0x24e2,	// (0x0007a16d) popup_hwr_training_preview_window

0xa4fd,	// (0x00082188) hwr_training_navi_pane_g5_ParamLimits

0xa4fd,	// (0x00082188) hwr_training_navi_pane_g5

0x2767,	// (0x0007a3f2) popup_char_count_window

0xb709,	// (0x00083394) bg_popup_sub_pane_cp20_ParamLimits

0xb717,	// (0x000833a2) list_vitu2_match_list_pane_ParamLimits

0xb723,	// (0x000833ae) vitu2_page_scroll_pane_ParamLimits

0xb723,	// (0x000833ae) vitu2_page_scroll_pane

0x2d31,	// (0x0007a9bc) list_single_hwr_training_symbol_option_pane_ParamLimits

0x2d31,	// (0x0007a9bc) list_single_hwr_training_symbol_option_pane

0x2d44,	// (0x0007a9cf) list_single_hwr_training_symbol_option_pane_g1

0x2d4c,	// (0x0007a9d7) list_single_hwr_training_symbol_option_pane_t1

0x2d5a,	// (0x0007a9e5) bg_button_pane_cp023

0x2d63,	// (0x0007a9ee) bg_button_pane_cp024

0xbd28,	// (0x000839b3) vitu2_page_scroll_pane_g1

0xbd30,	// (0x000839bb) vitu2_page_scroll_pane_g2

0x0001,

0xfb1f,	// (0x000877aa) vitu2_page_scroll_pane_g

0xbd38,	// (0x000839c3) vitu2_page_scroll_pane_t1

0xe7e4,	// (0x0008646f) popup_char_count_window_g1

0x2d96,	// (0x0007aa21) popup_char_count_window_g2

0x2d9f,	// (0x0007aa2a) popup_char_count_window_g3

0x0002,

0xfb24,	// (0x000877af) popup_char_count_window_g

0x2da8,	// (0x0007aa33) popup_char_count_window_t1

0xdd39,	// (0x000859c4) main_vded2_pane

0xef8b,	// (0x00086c16) aid_size_cell_imed_line

0xef95,	// (0x00086c20) grid_imed_line_width_pane

0xad24,	// (0x000829af) vid4_indicators_pane_g4

0x2db6,	// (0x0007aa41) cell_imed_line_width_pane_ParamLimits

0x2db6,	// (0x0007aa41) cell_imed_line_width_pane

0x2dca,	// (0x0007aa55) cell_imed_line_width_pane_g1

0xf127,	// (0x00086db2) cell_imed_line_width_pane_g2

0x0001,

0xfb2b,	// (0x000877b6) cell_imed_line_width_pane_g

0xbd47,	// (0x000839d2) main_vded2_pane_g1_ParamLimits

0xbd47,	// (0x000839d2) main_vded2_pane_g1

0xbd54,	// (0x000839df) main_vded2_pane_g2_ParamLimits

0xbd54,	// (0x000839df) main_vded2_pane_g2

0x0001,

0xfb30,	// (0x000877bb) main_vded2_pane_g_ParamLimits

0xfb30,	// (0x000877bb) main_vded2_pane_g

0xbd62,	// (0x000839ed) vded2_slider_pane_ParamLimits

0xbd62,	// (0x000839ed) vded2_slider_pane

0xbd6f,	// (0x000839fa) aid_size_touch_vded2_end

0xbd79,	// (0x00083a04) aid_size_touch_vded2_playhead

0x2dd3,	// (0x0007aa5e) aid_size_touch_vded2_start

0x2ddb,	// (0x0007aa66) vded2_slider_bg_pane

0x2de4,	// (0x0007aa6f) vded2_slider_pane_g1

0x2ded,	// (0x0007aa78) vded2_slider_pane_g2

0xbd81,	// (0x00083a0c) vded2_slider_pane_g3

0x0002,

0xfb35,	// (0x000877c0) vded2_slider_pane_g

0x2df5,	// (0x0007aa80) vded2_slider_bg_pane_g1

0x2dfe,	// (0x0007aa89) vded2_slider_bg_pane_g2

0x2e07,	// (0x0007aa92) vded2_slider_bg_pane_g3

0x0002,

0xfb3c,	// (0x000877c7) vded2_slider_bg_pane_g

0x7e9e,	// (0x0007fb29) aid_postcard_touch_down_pane_ParamLimits

0x7e9e,	// (0x0007fb29) aid_postcard_touch_down_pane

0x7eae,	// (0x0007fb39) aid_postcard_touch_up_pane_ParamLimits

0x7eae,	// (0x0007fb39) aid_postcard_touch_up_pane

0xdd39,	// (0x000859c4) main_blid2_pane

0xe658,	// (0x000862e3) popup_blid2_search_window

0xdd39,	// (0x000859c4) blid2_gps_pane

0xdd39,	// (0x000859c4) blid2_navig_pane

0xdd39,	// (0x000859c4) blid2_search_pane

0xdd39,	// (0x000859c4) blid2_tripm_pane

0xbd8a,	// (0x00083a15) blid2_search_pane_g1_ParamLimits

0xbd8a,	// (0x00083a15) blid2_search_pane_g1

0xbd9a,	// (0x00083a25) blid2_search_pane_t1_ParamLimits

0xbd9a,	// (0x00083a25) blid2_search_pane_t1

0xbdac,	// (0x00083a37) aid_size_cell_blid2_gps_ParamLimits

0xbdac,	// (0x00083a37) aid_size_cell_blid2_gps

0xbdbc,	// (0x00083a47) blid2_gps_pane_g1_ParamLimits

0xbdbc,	// (0x00083a47) blid2_gps_pane_g1

0xbdc8,	// (0x00083a53) grid_blid2_satellite_pane_ParamLimits

0xbdc8,	// (0x00083a53) grid_blid2_satellite_pane

0xbdd8,	// (0x00083a63) blid2_navig_pane_g1_ParamLimits

0xbdd8,	// (0x00083a63) blid2_navig_pane_g1

0xbde4,	// (0x00083a6f) blid2_navig_pane_t1_ParamLimits

0xbde4,	// (0x00083a6f) blid2_navig_pane_t1

0xbdf6,	// (0x00083a81) blid2_navig_pane_t2_ParamLimits

0xbdf6,	// (0x00083a81) blid2_navig_pane_t2

0x0001,

0xfb43,	// (0x000877ce) blid2_navig_pane_t_ParamLimits

0xfb43,	// (0x000877ce) blid2_navig_pane_t

0xbe08,	// (0x00083a93) blid2_navig_ring_pane_ParamLimits

0xbe08,	// (0x00083a93) blid2_navig_ring_pane

0xbe18,	// (0x00083aa3) blid2_speed_pane_ParamLimits

0xbe18,	// (0x00083aa3) blid2_speed_pane

0xbe24,	// (0x00083aaf) blid2_tripm_pane_g1_ParamLimits

0xbe24,	// (0x00083aaf) blid2_tripm_pane_g1

0xbe34,	// (0x00083abf) blid2_tripm_pane_g2_ParamLimits

0xbe34,	// (0x00083abf) blid2_tripm_pane_g2

0xbe40,	// (0x00083acb) blid2_tripm_pane_g3_ParamLimits

0xbe40,	// (0x00083acb) blid2_tripm_pane_g3

0xbe4c,	// (0x00083ad7) blid2_tripm_pane_g4_ParamLimits

0xbe4c,	// (0x00083ad7) blid2_tripm_pane_g4

0xbe58,	// (0x00083ae3) blid2_tripm_pane_g5_ParamLimits

0xbe58,	// (0x00083ae3) blid2_tripm_pane_g5

0x0005,

0xfb48,	// (0x000877d3) blid2_tripm_pane_g_ParamLimits

0xfb48,	// (0x000877d3) blid2_tripm_pane_g

0xbe74,	// (0x00083aff) blid2_tripm_pane_t1_ParamLimits

0xbe74,	// (0x00083aff) blid2_tripm_pane_t1

0xbe88,	// (0x00083b13) blid2_tripm_pane_t2_ParamLimits

0xbe88,	// (0x00083b13) blid2_tripm_pane_t2

0xbe9c,	// (0x00083b27) blid2_tripm_pane_t3_ParamLimits

0xbe9c,	// (0x00083b27) blid2_tripm_pane_t3

0x0003,

0xfb55,	// (0x000877e0) blid2_tripm_pane_t_ParamLimits

0xfb55,	// (0x000877e0) blid2_tripm_pane_t

0xbece,	// (0x00083b59) cell_blid2_satellite_pane_ParamLimits

0xbece,	// (0x00083b59) cell_blid2_satellite_pane

0xbee8,	// (0x00083b73) cell_blid2_satellite_pane_g1

0x2e10,	// (0x0007aa9b) cell_blid2_satellite_pane_t1

0xea93,	// (0x0008671e) blid2_speed_pane_g1

0x2e1e,	// (0x0007aaa9) blid2_speed_pane_t1

0x2e2c,	// (0x0007aab7) blid2_speed_pane_t2

0x0001,

0xfb5e,	// (0x000877e9) blid2_speed_pane_t

0xea93,	// (0x0008671e) blid2_navig_ring_pane_g1

0xbef1,	// (0x00083b7c) blid2_navig_ring_pane_g2

0xbef9,	// (0x00083b84) blid2_navig_ring_pane_g3

0xbf01,	// (0x00083b8c) blid2_navig_ring_pane_g4

0xbf09,	// (0x00083b94) blid2_navig_ring_pane_g5

0x0004,

0xfb63,	// (0x000877ee) blid2_navig_ring_pane_g

0xdd39,	// (0x000859c4) bg_popup_window_pane_cp011

0x2e3a,	// (0x0007aac5) popup_blid2_search_window_g1

0x2e42,	// (0x0007aacd) popup_blid2_search_window_t1

0x2e50,	// (0x0007aadb) popup_blid2_search_window_t2

0x0001,

0xfb6e,	// (0x000877f9) popup_blid2_search_window_t

0x0fd7,	// (0x00078c62) main_browser_pane_g1

0x0b22,	// (0x000787ad) main_browser_pane_ParamLimits

0xacf0,	// (0x0008297b) bg_button_pane_cp011_ParamLimits

0xaf9c,	// (0x00082c27) cell_vitu2_function_pane_g1_ParamLimits

0xe64a,	// (0x000862d5) bg_popup_sub_pane_cp22_ParamLimits

0xb8ae,	// (0x00083539) input_focus_pane_cp08_ParamLimits

0xb8bb,	// (0x00083546) popup_vitu2_query_button_pane_ParamLimits

0xb8bb,	// (0x00083546) popup_vitu2_query_button_pane

0xb890,	// (0x0008351b) popup_vitu2_query_input_button_pane

0x2a13,	// (0x0007a69e) popup_vitu2_query_window_g1_ParamLimits

0xb8cc,	// (0x00083557) popup_vitu2_query_window_g2_ParamLimits

0xfa75,	// (0x00087700) popup_vitu2_query_window_g_ParamLimits

0xdd39,	// (0x000859c4) bg_button_pane_cp026

0xbf11,	// (0x00083b9c) popup_vitu2_query_input_button_pane_g1

0xdd39,	// (0x000859c4) bg_button_pane_cp025

0x2e5e,	// (0x0007aae9) popup_vitu2_query_button_pane_t1

0x971f,	// (0x000813aa) main_mp3_pane_t6

0x972f,	// (0x000813ba) popup_slider_window_cp01

0xac13,	// (0x0008289e) cam4_battery_pane

0xacfe,	// (0x00082989) cam4_battery_pane_cp02

0xbc82,	// (0x0008390d) cam4_battery_pane_cp01

0xbc8a,	// (0x00083915) cam4_battery_pane_cp03

0x2e6c,	// (0x0007aaf7) cam4_battery_pane_g1

0xea93,	// (0x0008671e) cam4_battery_pane_g2

0x0001,

0xfb73,	// (0x000877fe) cam4_battery_pane_g

0xe95d,	// (0x000865e8) popup_blid_sat_info2_window_t11

0x774f,	// (0x0007f3da) aid_size_touch_mv_arrow_left_ParamLimits

0x777a,	// (0x0007f405) aid_size_touch_mv_arrow_right_ParamLimits

0x17f0,	// (0x0007947b) navi_pane_g1_ParamLimits

0x77a3,	// (0x0007f42e) navi_pane_g2_ParamLimits

0x77d1,	// (0x0007f45c) navi_pane_g3_ParamLimits

0xf44c,	// (0x000870d7) navi_pane_g_ParamLimits

0x782b,	// (0x0007f4b6) navi_pane_mv_t1_ParamLimits

0xa202,	// (0x00081e8d) grid_imed_effect_pane_ParamLimits

0x0f20,	// (0x00078bab) aid_placing_vt_slider_lsc

0x0f28,	// (0x00078bb3) aid_placing_vt_slider_prt

0xe64a,	// (0x000862d5) bg_tb_trans_pane_cp01_ParamLimits

0xec1a,	// (0x000868a5) popup_image_details_window_g1_ParamLimits

0xec2d,	// (0x000868b8) popup_image_details_window_g2_ParamLimits

0xec42,	// (0x000868cd) popup_image_details_window_g3_ParamLimits

0xec42,	// (0x000868cd) popup_image_details_window_g3

0xf77f,	// (0x0008740a) popup_image_details_window_g_ParamLimits

0xec56,	// (0x000868e1) popup_image_details_window_t1_ParamLimits

0xec68,	// (0x000868f3) popup_image_details_window_t2_ParamLimits

0xec81,	// (0x0008690c) popup_image_details_window_t3_ParamLimits

0xec95,	// (0x00086920) popup_image_details_window_t4_ParamLimits

0xecb0,	// (0x0008693b) popup_image_details_window_t5_ParamLimits

0xf786,	// (0x00087411) popup_image_details_window_t_ParamLimits

0xbb99,	// (0x00083824) cl_header_name_pane_ParamLimits

0xbb99,	// (0x00083824) cl_header_name_pane

0xbf19,	// (0x00083ba4) cl_header_name_pane_t1_ParamLimits

0xbf19,	// (0x00083ba4) cl_header_name_pane_t1

0xbf30,	// (0x00083bbb) cl_header_name_pane_t2_ParamLimits

0xbf30,	// (0x00083bbb) cl_header_name_pane_t2

0xbf5a,	// (0x00083be5) cl_header_name_pane_t3_ParamLimits

0xbf5a,	// (0x00083be5) cl_header_name_pane_t3

0x0002,

0xfb78,	// (0x00087803) cl_header_name_pane_t_ParamLimits

0xfb78,	// (0x00087803) cl_header_name_pane_t

0x77fc,	// (0x0007f487) navi_pane_mv_g2_ParamLimits

0x2706,	// (0x0007a391) field_vitu2_entry_pane_g1_ParamLimits

0x2712,	// (0x0007a39d) field_vitu2_entry_pane_g2_ParamLimits

0x271e,	// (0x0007a3a9) field_vitu2_entry_pane_g3_ParamLimits

0x271e,	// (0x0007a3a9) field_vitu2_entry_pane_g3

0xf974,	// (0x000875ff) field_vitu2_entry_pane_g_ParamLimits

0xaf2c,	// (0x00082bb7) cell_vitu2_itu_pane_g1_ParamLimits

0xaf3c,	// (0x00082bc7) cell_vitu2_itu_pane_g2_ParamLimits

0xaf3c,	// (0x00082bc7) cell_vitu2_itu_pane_g2

0x0001,

0xf980,	// (0x0008760b) cell_vitu2_itu_pane_g_ParamLimits

0xf980,	// (0x0008760b) cell_vitu2_itu_pane_g

0xacf0,	// (0x0008297b) bg_vkb2_func_pane_cp05_ParamLimits

0xacf0,	// (0x0008297b) bg_vkb2_func_pane_cp05

0xacf0,	// (0x0008297b) bg_vkb2_func_pane_cp03

0xacf0,	// (0x0008297b) bg_vkb2_func_pane_cp04

0xacf0,	// (0x0008297b) bg_vkb2_func_pane_cp10_ParamLimits

0xacf0,	// (0x0008297b) bg_vkb2_func_pane_cp10

0xbb3b,	// (0x000837c6) bg_vkb2_func_pane_cp08

0xbb21,	// (0x000837ac) bg_vkb2_func_pane_cp06

0xbb2f,	// (0x000837ba) bg_vkb2_func_pane_cp07

0x2d6c,	// (0x0007a9f7) bg_vkb2_func_pane_cp11_ParamLimits

0x2d6c,	// (0x0007a9f7) bg_vkb2_func_pane_cp11

0x2d81,	// (0x0007aa0c) bg_vkb2_func_pane_cp12_ParamLimits

0x2d81,	// (0x0007aa0c) bg_vkb2_func_pane_cp12

0xdd39,	// (0x000859c4) bg_vkb2_func_pane_cp09

0x2779,	// (0x0007a404) bg_vkb2_func_pane_g1

0x10e8,	// (0x00078d73) bg_vkb2_func_pane_g2

0x2781,	// (0x0007a40c) bg_vkb2_func_pane_g3

0x2789,	// (0x0007a414) bg_vkb2_func_pane_g4

0x29be,	// (0x0007a649) bg_vkb2_func_pane_g5

0x27a1,	// (0x0007a42c) bg_vkb2_func_pane_g6

0x27a9,	// (0x0007a434) bg_vkb2_func_pane_g7

0x2799,	// (0x0007a424) bg_vkb2_func_pane_g8

0x10c8,	// (0x00078d53) bg_vkb2_func_pane_g9

0x0008,

0xfb7f,	// (0x0008780a) bg_vkb2_func_pane_g

0xbe66,	// (0x00083af1) blid2_tripm_pane_g6_ParamLimits

0xbe66,	// (0x00083af1) blid2_tripm_pane_g6

0x259a,	// (0x0007a225) mp4_progress_pane_g1

0xbec2,	// (0x00083b4d) blid2_tripm_values_pane_ParamLimits

0xbec2,	// (0x00083b4d) blid2_tripm_values_pane

0xbf7f,	// (0x00083c0a) blid2_tripm_values_pane_t1

0xbf8d,	// (0x00083c18) blid2_tripm_values_pane_t2

0xbf9b,	// (0x00083c26) blid2_tripm_values_pane_t3

0xbfa9,	// (0x00083c34) blid2_tripm_values_pane_t4

0xbfb7,	// (0x00083c42) blid2_tripm_values_pane_t5

0xbfc5,	// (0x00083c50) blid2_tripm_values_pane_t6

0xbfd3,	// (0x00083c5e) blid2_tripm_values_pane_t7

0xbfe1,	// (0x00083c6c) blid2_tripm_values_pane_t8

0xbfef,	// (0x00083c7a) blid2_tripm_values_pane_t9

0x0008,

0xfb92,	// (0x0008781d) blid2_tripm_values_pane_t

0x655b,	// (0x0007e1e6) call_video_pane_t1_ParamLimits

0x6575,	// (0x0007e200) call_video_pane_t2_ParamLimits

0xf2d5,	// (0x00086f60) call_video_pane_t_ParamLimits

0x7d5f,	// (0x0007f9ea) msg_header_pane_g1_ParamLimits

0x1a2b,	// (0x000796b6) msg_header_pane_g2_ParamLimits

0x1a2b,	// (0x000796b6) msg_header_pane_g2

0x0001,

0xf4ef,	// (0x0008717a) msg_header_pane_g_ParamLimits

0xf4ef,	// (0x0008717a) msg_header_pane_g

0x0b22,	// (0x000787ad) main_clock2_pane_ParamLimits

0x9f87,	// (0x00081c12) grid_clock2_toolbar_pane_ParamLimits

0x9f87,	// (0x00081c12) grid_clock2_toolbar_pane

0x9f87,	// (0x00081c12) listscroll_clock2_pane_ParamLimits

0x9f87,	// (0x00081c12) listscroll_clock2_pane

0xa035,	// (0x00081cc0) main_clock2_pane_t3_ParamLimits

0xa035,	// (0x00081cc0) main_clock2_pane_t3

0xa047,	// (0x00081cd2) main_clock2_pane_t4_ParamLimits

0xa047,	// (0x00081cd2) main_clock2_pane_t4

0x2e76,	// (0x0007ab01) cell_clock2_toolbar_pane

0x2e7e,	// (0x0007ab09) cell_clock2_toolbar_pane_cp01

0x2e7e,	// (0x0007ab09) cell_clock2_toolbar_pane_cp02

0x2e86,	// (0x0007ab11) cell_clock2_toolbar_pane_cp03

0x2e8e,	// (0x0007ab19) list_clock2_pane

0x1743,	// (0x000793ce) scroll_pane_cp10

0x2e96,	// (0x0007ab21) list_single_clock2_pane_ParamLimits

0x2e96,	// (0x0007ab21) list_single_clock2_pane

0x1890,	// (0x0007951b) list_highlight_pane_cp08

0x2ea3,	// (0x0007ab2e) list_single_clock2_pane_t1

0x2eb1,	// (0x0007ab3c) list_single_clock2_pane_t2

0x0001,

0xfba5,	// (0x00087830) list_single_clock2_pane_t

0xdd39,	// (0x000859c4) bg_button_pane_cp10

0x2ebf,	// (0x0007ab4a) cell_clock2_toolbar_pane_g1

0x7e00,	// (0x0007fa8b) aid_main_viewer_pane_g1_ParamLimits

0x7e00,	// (0x0007fa8b) aid_main_viewer_pane_g1

0x7e0c,	// (0x0007fa97) aid_main_viewer_pane_g2_ParamLimits

0x7e0c,	// (0x0007fa97) aid_main_viewer_pane_g2

0x7e18,	// (0x0007faa3) aid_main_viewer_pane_g3_ParamLimits

0x7e18,	// (0x0007faa3) aid_main_viewer_pane_g3

0x7e29,	// (0x0007fab4) aid_main_viewer_pane_g4_ParamLimits

0x7e29,	// (0x0007fab4) aid_main_viewer_pane_g4

0x0003,

0xf500,	// (0x0008718b) aid_main_viewer_pane_g_ParamLimits

0xf500,	// (0x0008718b) aid_main_viewer_pane_g

0x8ce0,	// (0x0008096b) main_calc_pane_ParamLimits

0x8ced,	// (0x00080978) main_dialer2_pane_ParamLimits

0xdd39,	// (0x000859c4) main_cam6_pane

0xdd39,	// (0x000859c4) main_vid6_pane

0x9f93,	// (0x00081c1e) listscroll_gen_pane_cp06_ParamLimits

0x9f93,	// (0x00081c1e) listscroll_gen_pane_cp06

0xa059,	// (0x00081ce4) main_clock2_pane_t5_ParamLimits

0xa059,	// (0x00081ce4) main_clock2_pane_t5

0xa0a8,	// (0x00081d33) aid_call2_pane_cp10_ParamLimits

0xa0ba,	// (0x00081d45) aid_call_pane_cp10_ParamLimits

0x17c5,	// (0x00079450) popup_clock_analogue_window_cp10_g1_ParamLimits

0x17c5,	// (0x00079450) popup_clock_analogue_window_cp10_g2_ParamLimits

0xa0cc,	// (0x00081d57) popup_clock_analogue_window_cp10_g3_ParamLimits

0xa0cc,	// (0x00081d57) popup_clock_analogue_window_cp10_g4_ParamLimits

0x17c5,	// (0x00079450) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf836,	// (0x000874c1) popup_clock_analogue_window_cp10_g_ParamLimits

0xa0e2,	// (0x00081d6d) popup_clock_analogue_window_cp10_t1_ParamLimits

0xa89a,	// (0x00082525) cell_dialer2_keypad_pane_g2_ParamLimits

0xa89a,	// (0x00082525) cell_dialer2_keypad_pane_g2

0x0001,

0xf91c,	// (0x000875a7) cell_dialer2_keypad_pane_g_ParamLimits

0xf91c,	// (0x000875a7) cell_dialer2_keypad_pane_g

0xa8b6,	// (0x00082541) cell_dialer2_keypad_pane_t1

0xb264,	// (0x00082eef) main_cset_text2_pane_ParamLimits

0xb264,	// (0x00082eef) main_cset_text2_pane

0x2bef,	// (0x0007a87a) area_vitu2_query_pane_g1_ParamLimits

0xbac0,	// (0x0008374b) area_vitu2_query_pane_g2_ParamLimits

0xfac2,	// (0x0008774d) area_vitu2_query_pane_g_ParamLimits

0x2c73,	// (0x0007a8fe) area_vitu2_query_pane_t7_ParamLimits

0x2c73,	// (0x0007a8fe) area_vitu2_query_pane_t7

0xbb21,	// (0x000837ac) bg_button_pane_cp018_ParamLimits

0xbb2f,	// (0x000837ba) bg_button_pane_cp021_ParamLimits

0xbb3b,	// (0x000837c6) bg_button_pane_cp022_ParamLimits

0xbb3b,	// (0x000837c6) bg_vkb2_func_pane_cp08_ParamLimits

0xbb21,	// (0x000837ac) bg_vkb2_func_pane_cp06_ParamLimits

0xbb2f,	// (0x000837ba) bg_vkb2_func_pane_cp07_ParamLimits

0xbb4c,	// (0x000837d7) input_focus_pane_cp09_ParamLimits

0xbffd,	// (0x00083c88) cam6_autofocus_pane_ParamLimits

0xbffd,	// (0x00083c88) cam6_autofocus_pane

0xc01f,	// (0x00083caa) cam6_image_uncrop_pane_ParamLimits

0xc01f,	// (0x00083caa) cam6_image_uncrop_pane

0xc04c,	// (0x00083cd7) cam6_indi_pane_ParamLimits

0xc04c,	// (0x00083cd7) cam6_indi_pane

0xc066,	// (0x00083cf1) cam6_mode_pane_ParamLimits

0xc066,	// (0x00083cf1) cam6_mode_pane

0xc07a,	// (0x00083d05) cam6_timer_pane_ParamLimits

0xc07a,	// (0x00083d05) cam6_timer_pane

0xc086,	// (0x00083d11) cam6_zoom_pane_ParamLimits

0xc086,	// (0x00083d11) cam6_zoom_pane

0xc09e,	// (0x00083d29) cam6_mode_pane_g1_ParamLimits

0xc09e,	// (0x00083d29) cam6_mode_pane_g1

0xc0aa,	// (0x00083d35) cam6_mode_pane_g2_ParamLimits

0xc0aa,	// (0x00083d35) cam6_mode_pane_g2

0xc0b6,	// (0x00083d41) cam6_mode_pane_g3_ParamLimits

0xc0b6,	// (0x00083d41) cam6_mode_pane_g3

0xc0c2,	// (0x00083d4d) cam6_mode_pane_g4_ParamLimits

0xc0c2,	// (0x00083d4d) cam6_mode_pane_g4

0x0003,

0xfbaa,	// (0x00087835) cam6_mode_pane_g_ParamLimits

0xfbaa,	// (0x00087835) cam6_mode_pane_g

0x2ec7,	// (0x0007ab52) bg_tb_trans_pane_cp08_ParamLimits

0x2ec7,	// (0x0007ab52) bg_tb_trans_pane_cp08

0x2ed5,	// (0x0007ab60) cam6_battery_pane_ParamLimits

0x2ed5,	// (0x0007ab60) cam6_battery_pane

0x2eeb,	// (0x0007ab76) cam6_indi_pane_g1_ParamLimits

0x2eeb,	// (0x0007ab76) cam6_indi_pane_g1

0x2efd,	// (0x0007ab88) cam6_indi_pane_g2_ParamLimits

0x2efd,	// (0x0007ab88) cam6_indi_pane_g2

0x2f0f,	// (0x0007ab9a) cam6_indi_pane_g3_ParamLimits

0x2f0f,	// (0x0007ab9a) cam6_indi_pane_g3

0x0002,

0xfbb3,	// (0x0008783e) cam6_indi_pane_g_ParamLimits

0xfbb3,	// (0x0008783e) cam6_indi_pane_g

0x2f21,	// (0x0007abac) cam6_indi_pane_t1_ParamLimits

0x2f21,	// (0x0007abac) cam6_indi_pane_t1

0xad62,	// (0x000829ed) cam6_autofocus_pane_g1

0xad5a,	// (0x000829e5) cam6_autofocus_pane_g2

0xad72,	// (0x000829fd) cam6_autofocus_pane_g3

0xad6a,	// (0x000829f5) cam6_autofocus_pane_g4

0x0003,

0xfbba,	// (0x00087845) cam6_autofocus_pane_g

0x2f47,	// (0x0007abd2) cam6_timer_pane_g1

0x2f4f,	// (0x0007abda) cam6_timer_pane_t1

0x2f5d,	// (0x0007abe8) cam6_zoom_cont_pane

0x2f65,	// (0x0007abf0) cam6_zoom_pane_g1

0x2f6d,	// (0x0007abf8) cam6_zoom_pane_g2

0xc0ce,	// (0x00083d59) cam6_zoom_pane_g3

0x0002,

0xfbc3,	// (0x0008784e) cam6_zoom_pane_g

0xea93,	// (0x0008671e) cam6_battery_pane_g1

0xea93,	// (0x0008671e) cam6_battery_pane_g2

0x0001,

0xf743,	// (0x000873ce) cam6_battery_pane_g

0x2f75,	// (0x0007ac00) cam6_zoom_cont_pane_g1

0x2f7e,	// (0x0007ac09) cam6_zoom_cont_pane_g2

0x2f87,	// (0x0007ac12) cam6_zoom_cont_pane_g3

0x0002,

0xfbca,	// (0x00087855) cam6_zoom_cont_pane_g

0xc0e8,	// (0x00083d73) cam6_mode_pane_cp_ParamLimits

0xc0e8,	// (0x00083d73) cam6_mode_pane_cp

0xc0fc,	// (0x00083d87) cam6_zoom_pane_cp_ParamLimits

0xc0fc,	// (0x00083d87) cam6_zoom_pane_cp

0xc114,	// (0x00083d9f) vid6_image_uncrop_cif_pane_ParamLimits

0xc114,	// (0x00083d9f) vid6_image_uncrop_cif_pane

0xc140,	// (0x00083dcb) vid6_image_uncrop_nhd_pane_ParamLimits

0xc140,	// (0x00083dcb) vid6_image_uncrop_nhd_pane

0xc15d,	// (0x00083de8) vid6_image_uncrop_vga_pane_ParamLimits

0xc15d,	// (0x00083de8) vid6_image_uncrop_vga_pane

0xc17c,	// (0x00083e07) vid6_image_uncrop_wvga_pane_ParamLimits

0xc17c,	// (0x00083e07) vid6_image_uncrop_wvga_pane

0xc199,	// (0x00083e24) vid6_indi_pane_ParamLimits

0xc199,	// (0x00083e24) vid6_indi_pane

0x2ec7,	// (0x0007ab52) bg_tb_trans_pane_cp09_ParamLimits

0x2ec7,	// (0x0007ab52) bg_tb_trans_pane_cp09

0x2f9f,	// (0x0007ac2a) cam6_battery_pane_cp_ParamLimits

0x2f9f,	// (0x0007ac2a) cam6_battery_pane_cp

0x2fab,	// (0x0007ac36) vid6_indi_pane_g1_ParamLimits

0x2fab,	// (0x0007ac36) vid6_indi_pane_g1

0x2fbd,	// (0x0007ac48) vid6_indi_pane_g2_ParamLimits

0x2fbd,	// (0x0007ac48) vid6_indi_pane_g2

0x2fcf,	// (0x0007ac5a) vid6_indi_pane_g3_ParamLimits

0x2fcf,	// (0x0007ac5a) vid6_indi_pane_g3

0x2fe4,	// (0x0007ac6f) vid6_indi_pane_g4_ParamLimits

0x2fe4,	// (0x0007ac6f) vid6_indi_pane_g4

0x2ff9,	// (0x0007ac84) vid6_indi_pane_g5_ParamLimits

0x2ff9,	// (0x0007ac84) vid6_indi_pane_g5

0x0004,

0xfbd1,	// (0x0008785c) vid6_indi_pane_g_ParamLimits

0xfbd1,	// (0x0008785c) vid6_indi_pane_g

0x3013,	// (0x0007ac9e) vid6_indi_pane_t1_ParamLimits

0x3013,	// (0x0007ac9e) vid6_indi_pane_t1

0x3029,	// (0x0007acb4) vid6_indi_pane_t2_ParamLimits

0x3029,	// (0x0007acb4) vid6_indi_pane_t2

0x3051,	// (0x0007acdc) vid6_indi_pane_t3_ParamLimits

0x3051,	// (0x0007acdc) vid6_indi_pane_t3

0x3079,	// (0x0007ad04) vid6_indi_pane_t4_ParamLimits

0x3079,	// (0x0007ad04) vid6_indi_pane_t4

0x0003,

0xfbdc,	// (0x00087867) vid6_indi_pane_t_ParamLimits

0xfbdc,	// (0x00087867) vid6_indi_pane_t

0x309d,	// (0x0007ad28) wait_bar_pane_cp08

0xc1bc,	// (0x00083e47) main_cset_text2_pane_t1_ParamLimits

0xc1bc,	// (0x00083e47) main_cset_text2_pane_t1

0xc0d6,	// (0x00083d61) listscroll_gen_pane_cp06_t1_ParamLimits

0xc0d6,	// (0x00083d61) listscroll_gen_pane_cp06_t1

0xdd39,	// (0x000859c4) main_cam6_set_pane

0xac05,	// (0x00082890) bg_tb_trans_pane_cp06_ParamLimits

0xac1b,	// (0x000828a6) cam4_indicators_pane_g1_ParamLimits

0xac28,	// (0x000828b3) cam4_indicators_pane_g2_ParamLimits

0xf950,	// (0x000875db) cam4_indicators_pane_g_ParamLimits

0xac48,	// (0x000828d3) cam4_indicators_pane_t1_ParamLimits

0xacf0,	// (0x0008297b) bg_tb_trans_pane_cp07_ParamLimits

0xac1b,	// (0x000828a6) vid4_indicators_pane_g1_ParamLimits

0xad06,	// (0x00082991) vid4_indicators_pane_g2_ParamLimits

0xad13,	// (0x0008299e) vid4_indicators_pane_g3_ParamLimits

0xad24,	// (0x000829af) vid4_indicators_pane_g4_ParamLimits

0xf962,	// (0x000875ed) vid4_indicators_pane_g_ParamLimits

0xad40,	// (0x000829cb) vid4_indicators_pane_t1_ParamLimits

0xbc92,	// (0x0008391d) vid4_progress_pane_g1_ParamLimits

0xbc9e,	// (0x00083929) vid4_progress_pane_g2_ParamLimits

0xbcaa,	// (0x00083935) vid4_progress_pane_g3_ParamLimits

0xbcb9,	// (0x00083944) vid4_progress_pane_g4_ParamLimits

0xfb0d,	// (0x00087798) vid4_progress_pane_g_ParamLimits

0xbcd7,	// (0x00083962) vid4_progress_pane_t1_ParamLimits

0xbced,	// (0x00083978) vid4_progress_pane_t2_ParamLimits

0xbd03,	// (0x0008398e) vid4_progress_pane_t3_ParamLimits

0xfb18,	// (0x000877a3) vid4_progress_pane_t_ParamLimits

0xbd18,	// (0x000839a3) wait_bar_pane_cp07_ParamLimits

0xc1fa,	// (0x00083e85) main_cam6_set_pane_g2_ParamLimits

0xc1fa,	// (0x00083e85) main_cam6_set_pane_g2

0xc206,	// (0x00083e91) main_cset6_listscroll_pane_ParamLimits

0xc206,	// (0x00083e91) main_cset6_listscroll_pane

0xc231,	// (0x00083ebc) main_cset6_slider_pane_ParamLimits

0xc231,	// (0x00083ebc) main_cset6_slider_pane

0xc23d,	// (0x00083ec8) main_cset6_text2_pane_ParamLimits

0xc23d,	// (0x00083ec8) main_cset6_text2_pane

0x30ac,	// (0x0007ad37) main_cset6_text_pane

0x30b4,	// (0x0007ad3f) main_cset_list_pane_copy1_ParamLimits

0x30b4,	// (0x0007ad3f) main_cset_list_pane_copy1

0x30c4,	// (0x0007ad4f) scroll_pane_cp028_copy1

0xc250,	// (0x00083edb) cset_list_set_pane_copy1

0xc26a,	// (0x00083ef5) aid_position_infowindow_above_copy1

0xc272,	// (0x00083efd) aid_position_infowindow_below_copy1

0x4729,	// (0x0007c3b4) cset_list_set_pane_g1_copy1

0xb56c,	// (0x000831f7) cset_list_set_pane_g3_copy1_ParamLimits

0xb56c,	// (0x000831f7) cset_list_set_pane_g3_copy1

0xb57b,	// (0x00083206) cset_list_set_pane_t1_copy1_ParamLimits

0xb57b,	// (0x00083206) cset_list_set_pane_t1_copy1

0xe64a,	// (0x000862d5) list_highlight_pane_cp021_copy1_ParamLimits

0xe64a,	// (0x000862d5) list_highlight_pane_cp021_copy1

0x30cd,	// (0x0007ad58) cset6_slider_pane_ParamLimits

0x30cd,	// (0x0007ad58) cset6_slider_pane

0x30f9,	// (0x0007ad84) main_cset6_slider_pane_g1_ParamLimits

0x30f9,	// (0x0007ad84) main_cset6_slider_pane_g1

0xc27a,	// (0x00083f05) main_cset6_slider_pane_g2_ParamLimits

0xc27a,	// (0x00083f05) main_cset6_slider_pane_g2

0x28a8,	// (0x0007a533) main_cset6_slider_pane_g3_ParamLimits

0x28a8,	// (0x0007a533) main_cset6_slider_pane_g3

0xc2a2,	// (0x00083f2d) main_cset6_slider_pane_g4_ParamLimits

0xc2a2,	// (0x00083f2d) main_cset6_slider_pane_g4

0xc2ae,	// (0x00083f39) main_cset6_slider_pane_g5_ParamLimits

0xc2ae,	// (0x00083f39) main_cset6_slider_pane_g5

0x28a8,	// (0x0007a533) main_cset6_slider_pane_g7_ParamLimits

0x28a8,	// (0x0007a533) main_cset6_slider_pane_g7

0x28b4,	// (0x0007a53f) main_cset6_slider_pane_g8_ParamLimits

0x28b4,	// (0x0007a53f) main_cset6_slider_pane_g8

0xc2bc,	// (0x00083f47) main_cset6_slider_pane_g9_ParamLimits

0xc2bc,	// (0x00083f47) main_cset6_slider_pane_g9

0xc2c8,	// (0x00083f53) main_cset6_slider_pane_g10_ParamLimits

0xc2c8,	// (0x00083f53) main_cset6_slider_pane_g10

0xc2a2,	// (0x00083f2d) main_cset6_slider_pane_g11_ParamLimits

0xc2a2,	// (0x00083f2d) main_cset6_slider_pane_g11

0xc2d4,	// (0x00083f5f) main_cset6_slider_pane_g12_ParamLimits

0xc2d4,	// (0x00083f5f) main_cset6_slider_pane_g12

0xc2e0,	// (0x00083f6b) main_cset6_slider_pane_g13_ParamLimits

0xc2e0,	// (0x00083f6b) main_cset6_slider_pane_g13

0xc2ee,	// (0x00083f79) main_cset6_slider_pane_g14_ParamLimits

0xc2ee,	// (0x00083f79) main_cset6_slider_pane_g14

0xc2fc,	// (0x00083f87) main_cset6_slider_pane_g15_ParamLimits

0xc2fc,	// (0x00083f87) main_cset6_slider_pane_g15

0xc2ae,	// (0x00083f39) main_cset6_slider_pane_g16_ParamLimits

0xc2ae,	// (0x00083f39) main_cset6_slider_pane_g16

0xc314,	// (0x00083f9f) main_cset6_slider_pane_g17_ParamLimits

0xc314,	// (0x00083f9f) main_cset6_slider_pane_g17

0x0011,

0xfbe5,	// (0x00087870) main_cset6_slider_pane_g_ParamLimits

0xfbe5,	// (0x00087870) main_cset6_slider_pane_g

0x3121,	// (0x0007adac) main_cset6_slider_pane_t1_ParamLimits

0x3121,	// (0x0007adac) main_cset6_slider_pane_t1

0xc322,	// (0x00083fad) main_cset6_slider_pane_t2_ParamLimits

0xc322,	// (0x00083fad) main_cset6_slider_pane_t2

0xc34d,	// (0x00083fd8) main_cset6_slider_pane_t3_ParamLimits

0xc34d,	// (0x00083fd8) main_cset6_slider_pane_t3

0xc378,	// (0x00084003) main_cset6_slider_pane_t4_ParamLimits

0xc378,	// (0x00084003) main_cset6_slider_pane_t4

0xc3a5,	// (0x00084030) main_cset6_slider_pane_t5_ParamLimits

0xc3a5,	// (0x00084030) main_cset6_slider_pane_t5

0x3162,	// (0x0007aded) main_cset6_slider_pane_t7_ParamLimits

0x3162,	// (0x0007aded) main_cset6_slider_pane_t7

0xc3d2,	// (0x0008405d) main_cset6_slider_pane_t8_ParamLimits

0xc3d2,	// (0x0008405d) main_cset6_slider_pane_t8

0xc3f6,	// (0x00084081) main_cset6_slider_pane_t9_ParamLimits

0xc3f6,	// (0x00084081) main_cset6_slider_pane_t9

0xc41a,	// (0x000840a5) main_cset6_slider_pane_t10_ParamLimits

0xc41a,	// (0x000840a5) main_cset6_slider_pane_t10

0xc43e,	// (0x000840c9) main_cset6_slider_pane_t11_ParamLimits

0xc43e,	// (0x000840c9) main_cset6_slider_pane_t11

0x3198,	// (0x0007ae23) main_cset6_slider_pane_t14_ParamLimits

0x3198,	// (0x0007ae23) main_cset6_slider_pane_t14

0x31d1,	// (0x0007ae5c) main_cset6_slider_pane_t15_ParamLimits

0x31d1,	// (0x0007ae5c) main_cset6_slider_pane_t15

0x000b,

0xfc0a,	// (0x00087895) main_cset6_slider_pane_t_ParamLimits

0xfc0a,	// (0x00087895) main_cset6_slider_pane_t

0x296c,	// (0x0007a5f7) cset_slider_pane_g1_copy1

0x2975,	// (0x0007a600) cset_slider_pane_g2_copy1

0x297e,	// (0x0007a609) cset_slider_pane_g3_copy1

0xdd39,	// (0x000859c4) bg_popup_sub_pane_cp011_copy1

0x2a1f,	// (0x0007a6aa) main_cset_text_pane_g1_copy1

0x2a27,	// (0x0007a6b2) main_cset_text_pane_t1_copy1

0x2a35,	// (0x0007a6c0) main_cset_text_pane_t2_copy1

0x2a43,	// (0x0007a6ce) main_cset_text_pane_t3_copy1

0x2a51,	// (0x0007a6dc) main_cset_text_pane_t4_copy1

0x2a5f,	// (0x0007a6ea) main_cset_text_pane_t5_copy1

0x2a6d,	// (0x0007a6f8) main_cset_text_pane_t6_copy1

0x2a7b,	// (0x0007a706) main_cset_text_pane_t7_copy1

0xc464,	// (0x000840ef) main_cset_text2_pane_t1_copy1

0xdd39,	// (0x000859c4) main_ncimui_pane

0x8d2c,	// (0x000809b7) popup_query_ncimui_window_ParamLimits

0x8d2c,	// (0x000809b7) popup_query_ncimui_window

0x438c,	// (0x0007c017) field_cale_ev2_pane_g4_ParamLimits

0x438c,	// (0x0007c017) field_cale_ev2_pane_g4

0xa5e2,	// (0x0008226d) cell_video_dialer_keypad_pane_g2_ParamLimits

0xa5e2,	// (0x0008226d) cell_video_dialer_keypad_pane_g2

0x0001,

0xf8f7,	// (0x00087582) cell_video_dialer_keypad_pane_g_ParamLimits

0xf8f7,	// (0x00087582) cell_video_dialer_keypad_pane_g

0xa5fa,	// (0x00082285) cell_video_dialer_keypad_pane_t1

0xdd39,	// (0x000859c4) bg_popup_window_pane_cp012

0x1613,	// (0x0007929e) heading_pane_cp06

0x32f9,	// (0x0007af84) ncim_query_content_pane

0xdd39,	// (0x000859c4) bg_popup_heading_pane_cp01

0x3301,	// (0x0007af8c) ncim_heading_pane_t1

0x330f,	// (0x0007af9a) ncim_indicator_popup_pane

0x3321,	// (0x0007afac) ncim_query_button_pane

0x3335,	// (0x0007afc0) ncim_query_content_pane_t1

0x3347,	// (0x0007afd2) ncim_query_content_pane_t2

0x0005,

0xfc49,	// (0x000878d4) ncim_query_content_pane_t

0x3381,	// (0x0007b00c) ncim_query_list_pane

0x3393,	// (0x0007b01e) ncim_query_popup_pane

0x330f,	// (0x0007af9a) ncim_indicator_popup_pane_ParamLimits

0xc55f,	// (0x000841ea) ncim_query_content_pane_g1_ParamLimits

0xc55f,	// (0x000841ea) ncim_query_content_pane_g1

0x3335,	// (0x0007afc0) ncim_query_content_pane_t1_ParamLimits

0x3347,	// (0x0007afd2) ncim_query_content_pane_t2_ParamLimits

0xc56b,	// (0x000841f6) ncim_query_content_pane_t3_ParamLimits

0xc56b,	// (0x000841f6) ncim_query_content_pane_t3

0xc588,	// (0x00084213) ncim_query_content_pane_t4_ParamLimits

0xc588,	// (0x00084213) ncim_query_content_pane_t4

0xc5a5,	// (0x00084230) ncim_query_content_pane_t5_ParamLimits

0xc5a5,	// (0x00084230) ncim_query_content_pane_t5

0x3359,	// (0x0007afe4) ncim_query_content_pane_t6_ParamLimits

0x3359,	// (0x0007afe4) ncim_query_content_pane_t6

0xfc49,	// (0x000878d4) ncim_query_content_pane_t_ParamLimits

0x3381,	// (0x0007b00c) ncim_query_list_pane_ParamLimits

0x3393,	// (0x0007b01e) ncim_query_popup_pane_ParamLimits

0x33a7,	// (0x0007b032) wait_bar_pane_cp04

0xdd39,	// (0x000859c4) input_focus_pane_cp011

0x33af,	// (0x0007b03a) ncim_query_popup_pane_t1

0x33bd,	// (0x0007b048) ncim_list_query_list_pane_ParamLimits

0x33bd,	// (0x0007b048) ncim_list_query_list_pane

0xdd39,	// (0x000859c4) bg_button_pane_cp027

0x33d0,	// (0x0007b05b) ncim_query_button_pane_g1

0xdd39,	// (0x000859c4) list_highlight_pane_cp012

0x33da,	// (0x0007b065) ncim_list_query_list_pane_g1

0x33e2,	// (0x0007b06d) ncim_list_query_list_pane_t1

0xac38,	// (0x000828c3) cam4_indicators_pane_g3_ParamLimits

0xac38,	// (0x000828c3) cam4_indicators_pane_g3

0xad30,	// (0x000829bb) vid4_indicators_pane_g5_ParamLimits

0xad30,	// (0x000829bb) vid4_indicators_pane_g5

0xbcc8,	// (0x00083953) vid4_progress_pane_g5_ParamLimits

0xbcc8,	// (0x00083953) vid4_progress_pane_g5

0xc4a7,	// (0x00084132) main_ncimui_pane_g1

0xc4ed,	// (0x00084178) ncimui_group_query_pane_ParamLimits

0xc4ed,	// (0x00084178) ncimui_group_query_pane

0xc521,	// (0x000841ac) ncimui_list_pane_ParamLimits

0xc521,	// (0x000841ac) ncimui_list_pane

0xc53b,	// (0x000841c6) ncimui_text_pane_ParamLimits

0xc53b,	// (0x000841c6) ncimui_text_pane

0xc5c2,	// (0x0008424d) ncimui_text_pane_t1_ParamLimits

0xc5c2,	// (0x0008424d) ncimui_text_pane_t1

0x33f0,	// (0x0007b07b) ncimui_list_single_graphic_pane_ParamLimits

0x33f0,	// (0x0007b07b) ncimui_list_single_graphic_pane

0xc5e1,	// (0x0008426c) ncimui_query_pane_ParamLimits

0xc5e1,	// (0x0008426c) ncimui_query_pane

0xdd39,	// (0x000859c4) list_highlight_pane_cp013

0x3400,	// (0x0007b08b) ncim_list_query_list_pane_t1_copy1

0x33da,	// (0x0007b065) ncim_list_single_graphic_pane_g1

0x340e,	// (0x0007b099) ncim_query_button_pane_cp01

0x3416,	// (0x0007b0a1) ncim_query_entry_pane_ParamLimits

0x3416,	// (0x0007b0a1) ncim_query_entry_pane

0x3426,	// (0x0007b0b1) ncimui_query_pane_g1

0x342e,	// (0x0007b0b9) ncimui_query_pane_t1_ParamLimits

0x342e,	// (0x0007b0b9) ncimui_query_pane_t1

0xdd39,	// (0x000859c4) input_focus_pane_cp012

0x33af,	// (0x0007b03a) ncim_query_entry_pane_t1

0x0b22,	// (0x000787ad) main_im_pane_ParamLimits

0xe64a,	// (0x000862d5) main_mobtv_pane_ParamLimits

0xe64a,	// (0x000862d5) main_mobtv_pane

0xc2bc,	// (0x00083f47) main_cset6_slider_pane_g18_ParamLimits

0xc2bc,	// (0x00083f47) main_cset6_slider_pane_g18

0xc2e0,	// (0x00083f6b) main_cset6_slider_pane_g19_ParamLimits

0xc2e0,	// (0x00083f6b) main_cset6_slider_pane_g19

0x271e,	// (0x0007a3a9) bg_main_mobtv_pane_ParamLimits

0x271e,	// (0x0007a3a9) bg_main_mobtv_pane

0xc5f1,	// (0x0008427c) main_mobtv_info_pane

0xc5fc,	// (0x00084287) main_mobtv_loading_pane_ParamLimits

0xc5fc,	// (0x00084287) main_mobtv_loading_pane

0x3452,	// (0x0007b0dd) main_mobtv_pg_channel_list_pane

0x345c,	// (0x0007b0e7) main_mobtv_pg_hdr_pane

0xc609,	// (0x00084294) main_mobtv_programe_curr_pane_ParamLimits

0xc609,	// (0x00084294) main_mobtv_programe_curr_pane

0xc616,	// (0x000842a1) main_mobtv_programe_next_pane_ParamLimits

0xc616,	// (0x000842a1) main_mobtv_programe_next_pane

0x3465,	// (0x0007b0f0) popup_mobtv_noti_window

0xea93,	// (0x0008671e) main_tv_pg_hdr_pane_g1

0x346d,	// (0x0007b0f8) main_tv_pg_hdr_pane_g2

0x3475,	// (0x0007b100) main_tv_pg_hdr_pane_g3

0x347d,	// (0x0007b108) main_tv_pg_hdr_pane_g4

0x3485,	// (0x0007b110) main_tv_pg_hdr_pane_g5

0x348f,	// (0x0007b11a) main_tv_pg_hdr_pane_g6

0x3499,	// (0x0007b124) main_tv_pg_hdr_pane_g7

0x34a3,	// (0x0007b12e) main_tv_pg_hdr_pane_g8

0x34ad,	// (0x0007b138) main_tv_pg_hdr_pane_g9

0x34b7,	// (0x0007b142) main_tv_pg_hdr_pane_g10

0x34c1,	// (0x0007b14c) main_tv_pg_hdr_pane_g11

0x000a,

0xfc56,	// (0x000878e1) main_tv_pg_hdr_pane_g

0x34cb,	// (0x0007b156) main_tv_pg_hdr_pane_t1

0x34d9,	// (0x0007b164) main_tv_pg_hdr_pane_t2

0x34e7,	// (0x0007b172) main_tv_pg_hdr_pane_t3

0x34f7,	// (0x0007b182) main_tv_pg_hdr_pane_t4

0x3507,	// (0x0007b192) main_tv_pg_hdr_pane_t5

0x0004,

0xfc6d,	// (0x000878f8) main_tv_pg_hdr_pane_t

0x3517,	// (0x0007b1a2) single_mobtv_pg_channel_pane_ParamLimits

0x3517,	// (0x0007b1a2) single_mobtv_pg_channel_pane

0x3529,	// (0x0007b1b4) single_mobtv_pg_channel_table_pane

0x3532,	// (0x0007b1bd) single_mobtv_pg_channel_thumb_pane

0x353b,	// (0x0007b1c6) single_tv_pg_channel_pane_g1

0x3544,	// (0x0007b1cf) single_tv_pg_channel_pane_g2

0x0001,

0xfc78,	// (0x00087903) single_tv_pg_channel_pane_g

0xecfa,	// (0x00086985) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xecfa,	// (0x00086985) bg_single_mobtv_pg_channel_thumb_pane

0x354d,	// (0x0007b1d8) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0x354d,	// (0x0007b1d8) single_mobtv_pg_channel_thumb_pane_g1

0x355b,	// (0x0007b1e6) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0x355b,	// (0x0007b1e6) single_mobtv_pg_channel_thumb_pane_g2

0x3567,	// (0x0007b1f2) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0x3567,	// (0x0007b1f2) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfc7d,	// (0x00087908) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfc7d,	// (0x00087908) single_mobtv_pg_channel_thumb_pane_g

0x3573,	// (0x0007b1fe) single_mobtv_pg_channel_thumb_pane_t1

0x3581,	// (0x0007b20c) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc84,	// (0x0008790f) single_mobtv_pg_channel_thumb_pane_t

0xea93,	// (0x0008671e) bg_single_mobtv_pg_channel_table_pane_g1

0xea93,	// (0x0008671e) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf743,	// (0x000873ce) bg_single_mobtv_pg_channel_table_pane_g

0x358f,	// (0x0007b21a) single_mobtv_pg_channel_table_pane_t1

0x359d,	// (0x0007b228) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc89,	// (0x00087914) single_mobtv_pg_channel_table_pane_t

0xc62b,	// (0x000842b6) main_mobtv_info_pane_g1_ParamLimits

0xc62b,	// (0x000842b6) main_mobtv_info_pane_g1

0xc647,	// (0x000842d2) main_mobtv_info_pane_t1_ParamLimits

0xc647,	// (0x000842d2) main_mobtv_info_pane_t1

0xc6bf,	// (0x0008434a) main_mobtv_info_pane_t2_ParamLimits

0xc6bf,	// (0x0008434a) main_mobtv_info_pane_t2

0x0002,

0xfc93,	// (0x0008791e) main_mobtv_info_pane_t_ParamLimits

0xfc93,	// (0x0008791e) main_mobtv_info_pane_t

0xc74e,	// (0x000843d9) wait_bar_pane_cp05

0xc760,	// (0x000843eb) main_mobtv_loading_pane_g1_ParamLimits

0xc760,	// (0x000843eb) main_mobtv_loading_pane_g1

0xc76e,	// (0x000843f9) main_mobtv_loading_pane_g2_ParamLimits

0xc76e,	// (0x000843f9) main_mobtv_loading_pane_g2

0xc77a,	// (0x00084405) main_mobtv_loading_pane_g3_ParamLimits

0xc77a,	// (0x00084405) main_mobtv_loading_pane_g3

0x0002,

0xfc9a,	// (0x00087925) main_mobtv_loading_pane_g_ParamLimits

0xfc9a,	// (0x00087925) main_mobtv_loading_pane_g

0x35ab,	// (0x0007b236) main_mobtv_loading_pane_t1_ParamLimits

0x35ab,	// (0x0007b236) main_mobtv_loading_pane_t1

0x35c3,	// (0x0007b24e) main_mobtv_loading_pane_t2_ParamLimits

0x35c3,	// (0x0007b24e) main_mobtv_loading_pane_t2

0x0001,

0xfca1,	// (0x0008792c) main_mobtv_loading_pane_t_ParamLimits

0xfca1,	// (0x0008792c) main_mobtv_loading_pane_t

0xc788,	// (0x00084413) wait_bar_pane_cp06_ParamLimits

0xc788,	// (0x00084413) wait_bar_pane_cp06

0x35e7,	// (0x0007b272) main_mobtv_programe_curr_pane_t1

0x35f5,	// (0x0007b280) main_mobtv_programe_curr_pane_t2

0x0001,

0xfca6,	// (0x00087931) main_mobtv_programe_curr_pane_t

0x3603,	// (0x0007b28e) main_mobtv_programe_next_pane_t1

0x3611,	// (0x0007b29c) main_mobtv_programe_next_pane_t2

0x361f,	// (0x0007b2aa) main_mobtv_programe_next_pane_t3

0x0002,

0xfcab,	// (0x00087936) main_mobtv_programe_next_pane_t

0xdd39,	// (0x000859c4) bg_popup_mobtv_noti_window_pane

0x362d,	// (0x0007b2b8) popup_mobtv_noti_window_g1

0x3635,	// (0x0007b2c0) popup_mobtv_noti_window_t1

0x3643,	// (0x0007b2ce) popup_mobtv_noti_window_t2

0x0001,

0xfcb2,	// (0x0008793d) popup_mobtv_noti_window_t

0xea93,	// (0x0008671e) bg_popup_mobtv_noti_window_pane_g1

0xdd39,	// (0x000859c4) sc_clock_pane

0xdd39,	// (0x000859c4) main_fs_bigclock_pane

0xbeb0,	// (0x00083b3b) blid2_tripm_pane_t4_ParamLimits

0xbeb0,	// (0x00083b3b) blid2_tripm_pane_t4

0xc794,	// (0x0008441f) sc_clock_pane_g1_ParamLimits

0xc794,	// (0x0008441f) sc_clock_pane_g1

0xc7a2,	// (0x0008442d) sc_clock_pane_t1_ParamLimits

0xc7a2,	// (0x0008442d) sc_clock_pane_t1

0xc7b5,	// (0x00084440) sc_clock_pane_t2_ParamLimits

0xc7b5,	// (0x00084440) sc_clock_pane_t2

0xc7c7,	// (0x00084452) sc_clock_pane_t3_ParamLimits

0xc7c7,	// (0x00084452) sc_clock_pane_t3

0x0004,

0xfcb7,	// (0x00087942) sc_clock_pane_t_ParamLimits

0xfcb7,	// (0x00087942) sc_clock_pane_t

0xd4ed,	// (0x00085178) main_fs_bigclock_indicator_pane_ParamLimits

0xd4ed,	// (0x00085178) main_fs_bigclock_indicator_pane

0xc84f,	// (0x000844da) main_fs_bigclock_pane_g1_ParamLimits

0xc84f,	// (0x000844da) main_fs_bigclock_pane_g1

0xd4f9,	// (0x00085184) main_fs_bigclock_pane_t1_ParamLimits

0xd4f9,	// (0x00085184) main_fs_bigclock_pane_t1

0xd50b,	// (0x00085196) main_fs_bigclock_pane_t2_ParamLimits

0xd50b,	// (0x00085196) main_fs_bigclock_pane_t2

0xd51d,	// (0x000851a8) main_fs_bigclock_pane_t3_ParamLimits

0xd51d,	// (0x000851a8) main_fs_bigclock_pane_t3

0x0002,

0xfeb6,	// (0x00087b41) main_fs_bigclock_pane_t_ParamLimits

0xfeb6,	// (0x00087b41) main_fs_bigclock_pane_t

0x4235,	// (0x0007bec0) main_fs_bigclock_indicator_pane_g1

0x3329,	// (0x0007afb4) ncim_query_content_pane_g2_ParamLimits

0x3329,	// (0x0007afb4) ncim_query_content_pane_g2

0x0001,

0xfc44,	// (0x000878cf) ncim_query_content_pane_g_ParamLimits

0xfc44,	// (0x000878cf) ncim_query_content_pane_g

0xc7db,	// (0x00084466) sc_clock_pane_t4_ParamLimits

0xc7db,	// (0x00084466) sc_clock_pane_t4

0xe64a,	// (0x000862d5) main_radioblah_pane

0x2681,	// (0x0007a30c) cell_call4_button_pane_t1_copy1_ParamLimits

0x2681,	// (0x0007a30c) cell_call4_button_pane_t1_copy1

0xc4af,	// (0x0008413a) main_ncimui_pane_t1_ParamLimits

0xc4af,	// (0x0008413a) main_ncimui_pane_t1

0xc4c1,	// (0x0008414c) main_ncimui_pane_t2_ParamLimits

0xc4c1,	// (0x0008414c) main_ncimui_pane_t2

0x0002,

0xfc3d,	// (0x000878c8) main_ncimui_pane_t_ParamLimits

0xfc3d,	// (0x000878c8) main_ncimui_pane_t

0x3773,	// (0x0007b3fe) main_radioblah_anim_pane_ParamLimits

0x3773,	// (0x0007b3fe) main_radioblah_anim_pane

0x3784,	// (0x0007b40f) main_radioblah_info_pane_ParamLimits

0x3784,	// (0x0007b40f) main_radioblah_info_pane

0x3798,	// (0x0007b423) main_radioblah_pane_t1_ParamLimits

0x3798,	// (0x0007b423) main_radioblah_pane_t1

0x37b4,	// (0x0007b43f) main_radioblah_pane_t2_ParamLimits

0x37b4,	// (0x0007b43f) main_radioblah_pane_t2

0x0003,

0xfcd8,	// (0x00087963) main_radioblah_pane_t_ParamLimits

0xfcd8,	// (0x00087963) main_radioblah_pane_t

0xc8a1,	// (0x0008452c) main_radioblah_rocker_ctrl_pane_ParamLimits

0xc8a1,	// (0x0008452c) main_radioblah_rocker_ctrl_pane

0x37fc,	// (0x0007b487) main_radioblah_info_pane_t1_ParamLimits

0x37fc,	// (0x0007b487) main_radioblah_info_pane_t1

0xc8e6,	// (0x00084571) main_radioblah_info_pane_t2_ParamLimits

0xc8e6,	// (0x00084571) main_radioblah_info_pane_t2

0x0003,

0xfce1,	// (0x0008796c) main_radioblah_info_pane_t_ParamLimits

0xfce1,	// (0x0008796c) main_radioblah_info_pane_t

0xea93,	// (0x0008671e) main_radioblah_rocker_ctrl_pane_g1

0xc996,	// (0x00084621) main_radioblah_rocker_ctrl_pane_g2

0xc99e,	// (0x00084629) main_radioblah_rocker_ctrl_pane_g3

0xc9a6,	// (0x00084631) main_radioblah_rocker_ctrl_pane_g4

0xc9ae,	// (0x00084639) main_radioblah_rocker_ctrl_pane_g5

0xc9b6,	// (0x00084641) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfcea,	// (0x00087975) main_radioblah_rocker_ctrl_pane_g

0xc464,	// (0x000840ef) main_cset_text2_pane_t1_copy1_ParamLimits

0xab73,	// (0x000827fe) cam4_image_uncrop_qvga_pane

0xacae,	// (0x00082939) vid4_image_uncrop_qcif_pane

0xc03e,	// (0x00083cc9) cam6_image_uncrop_qvga_pane_ParamLimits

0xc03e,	// (0x00083cc9) cam6_image_uncrop_qvga_pane

0x2f8f,	// (0x0007ac1a) vid6_image_uncrop_qcif_pane_ParamLimits

0x2f8f,	// (0x0007ac1a) vid6_image_uncrop_qcif_pane

0xdd39,	// (0x000859c4) bg_popup_preview_window_pane_cp03

0x32db,	// (0x0007af66) list_cset_text2_pane

0x32e3,	// (0x0007af6e) main_cset6_text2_pane_g1

0x32eb,	// (0x0007af76) main_cset6_text2_pane_t1

0xc9be,	// (0x00084649) list_cset_text2_pane_t1_ParamLimits

0xc9be,	// (0x00084649) list_cset_text2_pane_t1

0xe64a,	// (0x000862d5) main_radioblah_pane_ParamLimits

0xc73a,	// (0x000843c5) main_mobtv_info_pane_t3_ParamLimits

0xc73a,	// (0x000843c5) main_mobtv_info_pane_t3

0xc88f,	// (0x0008451a) main_radioblah_pane_g1

0xc8ba,	// (0x00084545) main_radioblah_info_pane_g1

0xc93b,	// (0x000845c6) main_radioblah_info_pane_t3_ParamLimits

0xc93b,	// (0x000845c6) main_radioblah_info_pane_t3

0x71b6,	// (0x0007ee41) highlight_cell_cale_month_pane_ParamLimits

0x71b6,	// (0x0007ee41) highlight_cell_cale_month_pane

0xdd39,	// (0x000859c4) main_phob_fisheye_pane

0xeddc,	// (0x00086a67) scroll_pane_cp0031_ParamLimits

0xeddc,	// (0x00086a67) scroll_pane_cp0031

0x309d,	// (0x0007ad28) wait_bar_pane_cp08_ParamLimits

0xc250,	// (0x00083edb) cset_list_set_pane_copy1_ParamLimits

0x3836,	// (0x0007b4c1) highlight_cell_cale_month_pane_g1

0xc9e9,	// (0x00084674) highlight_cell_cale_month_pane_t1

0x2cdf,	// (0x0007a96a) list_gen_pane_cp01

0x2893,	// (0x0007a51e) scroll_pane_01

0xc9f7,	// (0x00084682) list_single_double_fisheye_pane

0xca00,	// (0x0008468b) list_double_fisheye_pane_g1_ParamLimits

0xca00,	// (0x0008468b) list_double_fisheye_pane_g1

0xca0c,	// (0x00084697) list_double_fisheye_pane_g2_ParamLimits

0xca0c,	// (0x00084697) list_double_fisheye_pane_g2

0xca20,	// (0x000846ab) list_double_fisheye_pane_g3_ParamLimits

0xca20,	// (0x000846ab) list_double_fisheye_pane_g3

0x0004,

0xfcf7,	// (0x00087982) list_double_fisheye_pane_g_ParamLimits

0xfcf7,	// (0x00087982) list_double_fisheye_pane_g

0xca49,	// (0x000846d4) list_double_fisheye_pane_t1_ParamLimits

0xca49,	// (0x000846d4) list_double_fisheye_pane_t1

0xca64,	// (0x000846ef) list_double_fisheye_pane_t2_ParamLimits

0xca64,	// (0x000846ef) list_double_fisheye_pane_t2

0x0001,

0xfd02,	// (0x0008798d) list_double_fisheye_pane_t_ParamLimits

0xfd02,	// (0x0008798d) list_double_fisheye_pane_t

0xdd39,	// (0x000859c4) main_call5_pane

0xc801,	// (0x0008448c) sc_swipe_pane_ParamLimits

0xc801,	// (0x0008448c) sc_swipe_pane

0xca92,	// (0x0008471d) call5_image_pane_ParamLimits

0xca92,	// (0x0008471d) call5_image_pane

0xcaa2,	// (0x0008472d) call5_swipe_1_pane_ParamLimits

0xcaa2,	// (0x0008472d) call5_swipe_1_pane

0xcaae,	// (0x00084739) call5_swipe_2_pane_ParamLimits

0xcaae,	// (0x00084739) call5_swipe_2_pane

0xcac8,	// (0x00084753) popup_call5_audio_first_window_ParamLimits

0xcac8,	// (0x00084753) popup_call5_audio_first_window

0xecfa,	// (0x00086985) call5_swipe_1_pane_g1_ParamLimits

0xecfa,	// (0x00086985) call5_swipe_1_pane_g1

0x383e,	// (0x0007b4c9) call5_swipe_1_pane_g2_ParamLimits

0x383e,	// (0x0007b4c9) call5_swipe_1_pane_g2

0x0001,

0xfd07,	// (0x00087992) call5_swipe_1_pane_g_ParamLimits

0xfd07,	// (0x00087992) call5_swipe_1_pane_g

0x384a,	// (0x0007b4d5) call5_swipe_1_pane_t1_ParamLimits

0x384a,	// (0x0007b4d5) call5_swipe_1_pane_t1

0xecfa,	// (0x00086985) call5_swipe_2_pane_g1_ParamLimits

0xecfa,	// (0x00086985) call5_swipe_2_pane_g1

0x385f,	// (0x0007b4ea) call5_swipe_2_pane_g2_ParamLimits

0x385f,	// (0x0007b4ea) call5_swipe_2_pane_g2

0x0001,

0xfd0c,	// (0x00087997) call5_swipe_2_pane_g_ParamLimits

0xfd0c,	// (0x00087997) call5_swipe_2_pane_g

0x386b,	// (0x0007b4f6) call5_swipe_2_pane_t1_ParamLimits

0x386b,	// (0x0007b4f6) call5_swipe_2_pane_t1

0x3880,	// (0x0007b50b) sc_swipe_pane_g1_ParamLimits

0x3880,	// (0x0007b50b) sc_swipe_pane_g1

0x388d,	// (0x0007b518) sc_swipe_pane_g2_ParamLimits

0x388d,	// (0x0007b518) sc_swipe_pane_g2

0x0001,

0xfd11,	// (0x0008799c) sc_swipe_pane_g_ParamLimits

0xfd11,	// (0x0008799c) sc_swipe_pane_g

0x3899,	// (0x0007b524) sc_swipe_pane_t1_ParamLimits

0x3899,	// (0x0007b524) sc_swipe_pane_t1

0xdd39,	// (0x000859c4) main_cmail_launcher_pane

0xcad6,	// (0x00084761) aid_size_cell_cmail_l_ParamLimits

0xcad6,	// (0x00084761) aid_size_cell_cmail_l

0xcae6,	// (0x00084771) grid_cmail_l_pane_ParamLimits

0xcae6,	// (0x00084771) grid_cmail_l_pane

0xcaf6,	// (0x00084781) cell_cmail_l_pane_ParamLimits

0xcaf6,	// (0x00084781) cell_cmail_l_pane

0xcb0a,	// (0x00084795) cell_cmail_l_pane_g1_ParamLimits

0xcb0a,	// (0x00084795) cell_cmail_l_pane_g1

0xcb16,	// (0x000847a1) cell_cmail_l_pane_t1_ParamLimits

0xcb16,	// (0x000847a1) cell_cmail_l_pane_t1

0x38ae,	// (0x0007b539) cell_cmail_l_pane_t2_ParamLimits

0x38ae,	// (0x0007b539) cell_cmail_l_pane_t2

0x0001,

0xfd16,	// (0x000879a1) cell_cmail_l_pane_t_ParamLimits

0xfd16,	// (0x000879a1) cell_cmail_l_pane_t

0xe64a,	// (0x000862d5) grid_highlight_pane_cp018_ParamLimits

0xe64a,	// (0x000862d5) grid_highlight_pane_cp018

0x5715,	// (0x0007d3a0) main2_pane_ParamLimits

0x5715,	// (0x0007d3a0) main2_pane

0x0bfb,	// (0x00078886) popup_sp_fs_action_menu_bg_pane_g1

0x0c03,	// (0x0007888e) popup_sp_fs_action_menu_bg_pane_g2

0x0c0b,	// (0x00078896) popup_sp_fs_action_menu_bg_pane_g3

0x0c13,	// (0x0007889e) popup_sp_fs_action_menu_bg_pane_g4

0x0c1b,	// (0x000788a6) popup_sp_fs_action_menu_bg_pane_g5

0x0c23,	// (0x000788ae) popup_sp_fs_action_menu_bg_pane_g6

0x0c2b,	// (0x000788b6) popup_sp_fs_action_menu_bg_pane_g7

0x0c33,	// (0x000788be) popup_sp_fs_action_menu_bg_pane_g8

0x0c3b,	// (0x000788c6) popup_sp_fs_action_menu_bg_pane_g9

0x0c43,	// (0x000788ce) popup_sp_fs_action_menu_bg_pane_g10

0x0c43,	// (0x000788ce) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf1ef,	// (0x00086e7a) popup_sp_fs_action_menu_bg_pane_g

0x0e2d,	// (0x00078ab8) list_medium_line_x2_t3_g3_g1_ParamLimits

0x0e2d,	// (0x00078ab8) list_medium_line_x2_t3_g3_g1

0x0e39,	// (0x00078ac4) list_medium_line_x2_t3_g3_g2_ParamLimits

0x0e39,	// (0x00078ac4) list_medium_line_x2_t3_g3_g2

0x0e45,	// (0x00078ad0) list_medium_line_x2_t3_g3_g3_ParamLimits

0x0e45,	// (0x00078ad0) list_medium_line_x2_t3_g3_g3

0x0002,

0xf29f,	// (0x00086f2a) list_medium_line_x2_t3_g3_g_ParamLimits

0xf29f,	// (0x00086f2a) list_medium_line_x2_t3_g3_g

0x0e51,	// (0x00078adc) list_medium_line_x2_t3_g3_t1_ParamLimits

0x0e51,	// (0x00078adc) list_medium_line_x2_t3_g3_t1

0x648e,	// (0x0007e119) list_medium_line_x2_t3_g3_t2_ParamLimits

0x648e,	// (0x0007e119) list_medium_line_x2_t3_g3_t2

0x0e66,	// (0x00078af1) list_medium_line_x2_t3_g3_t3_ParamLimits

0x0e66,	// (0x00078af1) list_medium_line_x2_t3_g3_t3

0x0002,

0xf2a6,	// (0x00086f31) list_medium_line_x2_t3_g3_t_ParamLimits

0xf2a6,	// (0x00086f31) list_medium_line_x2_t3_g3_t

0x0e2d,	// (0x00078ab8) list_medium_line_x2_t3_g2_g1_ParamLimits

0x0e2d,	// (0x00078ab8) list_medium_line_x2_t3_g2_g1

0x0e45,	// (0x00078ad0) list_medium_line_x2_t3_g2_g2_ParamLimits

0x0e45,	// (0x00078ad0) list_medium_line_x2_t3_g2_g2

0x0001,

0xf2ad,	// (0x00086f38) list_medium_line_x2_t3_g2_g_ParamLimits

0xf2ad,	// (0x00086f38) list_medium_line_x2_t3_g2_g

0x0e7b,	// (0x00078b06) list_medium_line_x2_t3_g2_t1_ParamLimits

0x0e7b,	// (0x00078b06) list_medium_line_x2_t3_g2_t1

0x0e91,	// (0x00078b1c) list_medium_line_x2_t3_g2_t2_ParamLimits

0x0e91,	// (0x00078b1c) list_medium_line_x2_t3_g2_t2

0x0ea3,	// (0x00078b2e) list_medium_line_x2_t3_g2_t3_ParamLimits

0x0ea3,	// (0x00078b2e) list_medium_line_x2_t3_g2_t3

0x0002,

0xf2b2,	// (0x00086f3d) list_medium_line_x2_t3_g2_t_ParamLimits

0xf2b2,	// (0x00086f3d) list_medium_line_x2_t3_g2_t

0x0e2d,	// (0x00078ab8) list_medium_line_x2_t4_g4_g1_ParamLimits

0x0e2d,	// (0x00078ab8) list_medium_line_x2_t4_g4_g1

0x0ec1,	// (0x00078b4c) list_medium_line_x2_t4_g4_g2_ParamLimits

0x0ec1,	// (0x00078b4c) list_medium_line_x2_t4_g4_g2

0x0e39,	// (0x00078ac4) list_medium_line_x2_t4_g4_g3_ParamLimits

0x0e39,	// (0x00078ac4) list_medium_line_x2_t4_g4_g3

0x0ecd,	// (0x00078b58) list_medium_line_x2_t4_g4_g4_ParamLimits

0x0ecd,	// (0x00078b58) list_medium_line_x2_t4_g4_g4

0x0003,

0xf2b9,	// (0x00086f44) list_medium_line_x2_t4_g4_g_ParamLimits

0xf2b9,	// (0x00086f44) list_medium_line_x2_t4_g4_g

0x64a0,	// (0x0007e12b) list_medium_line_x2_t4_g4_t1_ParamLimits

0x64a0,	// (0x0007e12b) list_medium_line_x2_t4_g4_t1

0x64b7,	// (0x0007e142) list_medium_line_x2_t4_g4_t2_ParamLimits

0x64b7,	// (0x0007e142) list_medium_line_x2_t4_g4_t2

0x64cc,	// (0x0007e157) list_medium_line_x2_t4_g4_t3_ParamLimits

0x64cc,	// (0x0007e157) list_medium_line_x2_t4_g4_t3

0x0ed9,	// (0x00078b64) list_medium_line_x2_t4_g4_t4_ParamLimits

0x0ed9,	// (0x00078b64) list_medium_line_x2_t4_g4_t4

0x0003,

0xf2c2,	// (0x00086f4d) list_medium_line_x2_t4_g4_t_ParamLimits

0xf2c2,	// (0x00086f4d) list_medium_line_x2_t4_g4_t

0x0e2d,	// (0x00078ab8) list_medium_line_x2_t2_g4_g1_ParamLimits

0x0e2d,	// (0x00078ab8) list_medium_line_x2_t2_g4_g1

0x0ec1,	// (0x00078b4c) list_medium_line_x2_t2_g4_g2_ParamLimits

0x0ec1,	// (0x00078b4c) list_medium_line_x2_t2_g4_g2

0x0e39,	// (0x00078ac4) list_medium_line_x2_t2_g4_g3_ParamLimits

0x0e39,	// (0x00078ac4) list_medium_line_x2_t2_g4_g3

0x0e45,	// (0x00078ad0) list_medium_line_x2_t2_g4_g4_ParamLimits

0x0e45,	// (0x00078ad0) list_medium_line_x2_t2_g4_g4

0x0003,

0xf329,	// (0x00086fb4) list_medium_line_x2_t2_g4_g_ParamLimits

0xf329,	// (0x00086fb4) list_medium_line_x2_t2_g4_g

0x11c9,	// (0x00078e54) list_medium_line_x2_t2_g4_t1_ParamLimits

0x11c9,	// (0x00078e54) list_medium_line_x2_t2_g4_t1

0x0e66,	// (0x00078af1) list_medium_line_x2_t2_g4_t2_ParamLimits

0x0e66,	// (0x00078af1) list_medium_line_x2_t2_g4_t2

0x0001,

0xf332,	// (0x00086fbd) list_medium_line_x2_t2_g4_t_ParamLimits

0xf332,	// (0x00086fbd) list_medium_line_x2_t2_g4_t

0x0e2d,	// (0x00078ab8) list_medium_line_x2_t2_g3_g1_ParamLimits

0x0e2d,	// (0x00078ab8) list_medium_line_x2_t2_g3_g1

0x0e39,	// (0x00078ac4) list_medium_line_x2_t2_g3_g2_ParamLimits

0x0e39,	// (0x00078ac4) list_medium_line_x2_t2_g3_g2

0x0e45,	// (0x00078ad0) list_medium_line_x2_t2_g3_g3_ParamLimits

0x0e45,	// (0x00078ad0) list_medium_line_x2_t2_g3_g3

0x0002,

0xf29f,	// (0x00086f2a) list_medium_line_x2_t2_g3_g_ParamLimits

0xf29f,	// (0x00086f2a) list_medium_line_x2_t2_g3_g

0x11de,	// (0x00078e69) list_medium_line_x2_t2_g3_t1_ParamLimits

0x11de,	// (0x00078e69) list_medium_line_x2_t2_g3_t1

0x0e66,	// (0x00078af1) list_medium_line_x2_t2_g3_t2_ParamLimits

0x0e66,	// (0x00078af1) list_medium_line_x2_t2_g3_t2

0x0001,

0xf337,	// (0x00086fc2) list_medium_line_x2_t2_g3_t_ParamLimits

0xf337,	// (0x00086fc2) list_medium_line_x2_t2_g3_t

0x7432,	// (0x0007f0bd) main_sp_fs_list_pane_ParamLimits

0x7432,	// (0x0007f0bd) main_sp_fs_list_pane

0x743e,	// (0x0007f0c9) sp_fs_scroll_pane_ParamLimits

0x743e,	// (0x0007f0c9) sp_fs_scroll_pane

0x744a,	// (0x0007f0d5) list_medium_line_x2_t3_t1

0x745a,	// (0x0007f0e5) list_medium_line_x2_t3_t2

0x13b6,	// (0x00079041) list_medium_line_x2_t3_t3

0x0002,

0xf382,	// (0x0008700d) list_medium_line_x2_t3_t

0x7468,	// (0x0007f0f3) list_medium_line_x3_t4_t1

0x7478,	// (0x0007f103) list_medium_line_x3_t4_t2

0x13c4,	// (0x0007904f) list_medium_line_x3_t4_t3

0x13b6,	// (0x00079041) list_medium_line_x3_t4_t4

0x0003,

0xf389,	// (0x00087014) list_medium_line_x3_t4_t

0x7486,	// (0x0007f111) list_medium_line_x4_t5_t1

0x7496,	// (0x0007f121) list_medium_line_x4_t5_t2

0x13c4,	// (0x0007904f) list_medium_line_x4_t5_t3

0x13d2,	// (0x0007905d) list_medium_line_x4_t5_t4

0x13b6,	// (0x00079041) list_medium_line_x4_t5_t5

0x0004,

0xf392,	// (0x0008701d) list_medium_line_x4_t5_t

0x0e2d,	// (0x00078ab8) list_medium_line_t4_g4_g1_ParamLimits

0x0e2d,	// (0x00078ab8) list_medium_line_t4_g4_g1

0x0ecd,	// (0x00078b58) list_medium_line_t4_g4_g2_ParamLimits

0x0ecd,	// (0x00078b58) list_medium_line_t4_g4_g2

0x13e0,	// (0x0007906b) list_medium_line_t4_g4_g3_ParamLimits

0x13e0,	// (0x0007906b) list_medium_line_t4_g4_g3

0x0e45,	// (0x00078ad0) list_medium_line_t4_g4_g4_ParamLimits

0x0e45,	// (0x00078ad0) list_medium_line_t4_g4_g4

0x0003,

0xf39d,	// (0x00087028) list_medium_line_t4_g4_g_ParamLimits

0xf39d,	// (0x00087028) list_medium_line_t4_g4_g

0x13ec,	// (0x00079077) list_medium_line_t4_g4_t1_ParamLimits

0x13ec,	// (0x00079077) list_medium_line_t4_g4_t1

0x1401,	// (0x0007908c) list_medium_line_t4_g4_t2_ParamLimits

0x1401,	// (0x0007908c) list_medium_line_t4_g4_t2

0x1417,	// (0x000790a2) list_medium_line_t4_g4_t3_ParamLimits

0x1417,	// (0x000790a2) list_medium_line_t4_g4_t3

0x0e66,	// (0x00078af1) list_medium_line_t4_g4_t4_ParamLimits

0x0e66,	// (0x00078af1) list_medium_line_t4_g4_t4

0x0003,

0xf3a6,	// (0x00087031) list_medium_line_t4_g4_t_ParamLimits

0xf3a6,	// (0x00087031) list_medium_line_t4_g4_t

0x758b,	// (0x0007f216) chi_dic_find_pane_g1

0x8cfb,	// (0x00080986) main_tport_pane

0x29b0,	// (0x0007a63b) list_medium_line_plain_t1

0x29c6,	// (0x0007a651) list_medium_line_t2_g2_g1_ParamLimits

0x29c6,	// (0x0007a651) list_medium_line_t2_g2_g1

0x29d2,	// (0x0007a65d) list_medium_line_t2_g2_g2_ParamLimits

0x29d2,	// (0x0007a65d) list_medium_line_t2_g2_g2

0x0001,

0xfa59,	// (0x000876e4) list_medium_line_t2_g2_g_ParamLimits

0xfa59,	// (0x000876e4) list_medium_line_t2_g2_g

0xb74f,	// (0x000833da) list_medium_line_t2_g2_t1_ParamLimits

0xb74f,	// (0x000833da) list_medium_line_t2_g2_t1

0xb769,	// (0x000833f4) list_medium_line_t2_g2_t2_ParamLimits

0xb769,	// (0x000833f4) list_medium_line_t2_g2_t2

0x0001,

0xfa5e,	// (0x000876e9) list_medium_line_t2_g2_t_ParamLimits

0xfa5e,	// (0x000876e9) list_medium_line_t2_g2_t

0x2ce8,	// (0x0007a973) aid_sp_fs_list_icon_a_sm

0x4713,	// (0x0007c39e) aid_sp_fs_list_icon_d

0x2cf0,	// (0x0007a97b) aid_sp_fs_text_primary

0x2cf9,	// (0x0007a984) aid_sp_fs_text_secondary

0x2d02,	// (0x0007a98d) list_medium_line

0x2d02,	// (0x0007a98d) list_medium_line_g2

0x2d02,	// (0x0007a98d) list_medium_line_g3

0x2d02,	// (0x0007a98d) list_medium_line_plain

0x2d02,	// (0x0007a98d) list_medium_line_plain_t2

0x2d02,	// (0x0007a98d) list_medium_line_plain_t3

0x2d02,	// (0x0007a98d) list_medium_line_right_icon

0x2d02,	// (0x0007a98d) list_medium_line_right_iconx2

0x2d02,	// (0x0007a98d) list_medium_line_t2

0x2d02,	// (0x0007a98d) list_medium_line_t2_g2

0x2d02,	// (0x0007a98d) list_medium_line_t2_g3

0x2d02,	// (0x0007a98d) list_medium_line_t2_right_icon

0x2d02,	// (0x0007a98d) list_medium_line_t2_right_iconx2

0x2d02,	// (0x0007a98d) list_medium_line_t3

0x2d02,	// (0x0007a98d) list_medium_line_t3_g2

0x2d02,	// (0x0007a98d) list_medium_line_t3_g3

0x2d02,	// (0x0007a98d) list_medium_line_t3_right_iconx2

0x2d0b,	// (0x0007a996) list_medium_line_t4_g4

0xf109,	// (0x00086d94) list_medium_line_x2

0xf109,	// (0x00086d94) list_medium_line_x2_t2_g2

0xf109,	// (0x00086d94) list_medium_line_x2_t2_g3

0xf109,	// (0x00086d94) list_medium_line_x2_t2_g4

0xf109,	// (0x00086d94) list_medium_line_x2_t3

0xf109,	// (0x00086d94) list_medium_line_x2_t3_g2

0xf109,	// (0x00086d94) list_medium_line_x2_t3_g3

0xf109,	// (0x00086d94) list_medium_line_x2_t3_g4

0xf109,	// (0x00086d94) list_medium_line_x2_t4_g2

0xf109,	// (0x00086d94) list_medium_line_x2_t4_g4

0x2d14,	// (0x0007a99f) list_medium_line_x3

0x2d14,	// (0x0007a99f) list_medium_line_x3_t4

0x2d14,	// (0x0007a99f) list_medium_line_x3_t4_g4

0x2d0b,	// (0x0007a996) list_medium_line_x4_t4

0x2d0b,	// (0x0007a996) list_medium_line_x4_t4_g7

0x2d0b,	// (0x0007a996) list_medium_line_x4_t5

0x2d1d,	// (0x0007a9a8) list_single_fs_dyc_pane_ParamLimits

0x2d1d,	// (0x0007a9a8) list_single_fs_dyc_pane

0x0e2d,	// (0x00078ab8) list_medium_line_x4_t4_g7_g1_ParamLimits

0x0e2d,	// (0x00078ab8) list_medium_line_x4_t4_g7_g1

0x320a,	// (0x0007ae95) list_medium_line_x4_t4_g7_g2_ParamLimits

0x320a,	// (0x0007ae95) list_medium_line_x4_t4_g7_g2

0x3216,	// (0x0007aea1) list_medium_line_x4_t4_g7_g3_ParamLimits

0x3216,	// (0x0007aea1) list_medium_line_x4_t4_g7_g3

0x3225,	// (0x0007aeb0) list_medium_line_x4_t4_g7_g4_ParamLimits

0x3225,	// (0x0007aeb0) list_medium_line_x4_t4_g7_g4

0x3231,	// (0x0007aebc) list_medium_line_x4_t4_g7_g5_ParamLimits

0x3231,	// (0x0007aebc) list_medium_line_x4_t4_g7_g5

0x3240,	// (0x0007aecb) list_medium_line_x4_t4_g7_g6_ParamLimits

0x3240,	// (0x0007aecb) list_medium_line_x4_t4_g7_g6

0x324f,	// (0x0007aeda) list_medium_line_x4_t4_g7_g7_ParamLimits

0x324f,	// (0x0007aeda) list_medium_line_x4_t4_g7_g7

0x0006,

0xfc23,	// (0x000878ae) list_medium_line_x4_t4_g7_g_ParamLimits

0xfc23,	// (0x000878ae) list_medium_line_x4_t4_g7_g

0x325b,	// (0x0007aee6) list_medium_line_x4_t4_g7_t1_ParamLimits

0x325b,	// (0x0007aee6) list_medium_line_x4_t4_g7_t1

0x3270,	// (0x0007aefb) list_medium_line_x4_t4_g7_t2_ParamLimits

0x3270,	// (0x0007aefb) list_medium_line_x4_t4_g7_t2

0x3285,	// (0x0007af10) list_medium_line_x4_t4_g7_t3_ParamLimits

0x3285,	// (0x0007af10) list_medium_line_x4_t4_g7_t3

0x329a,	// (0x0007af25) list_medium_line_x4_t4_g7_t4_ParamLimits

0x329a,	// (0x0007af25) list_medium_line_x4_t4_g7_t4

0x32ac,	// (0x0007af37) list_medium_line_x4_t4_g7_t5_ParamLimits

0x32ac,	// (0x0007af37) list_medium_line_x4_t4_g7_t5

0x0004,

0xfc32,	// (0x000878bd) list_medium_line_x4_t4_g7_t_ParamLimits

0xfc32,	// (0x000878bd) list_medium_line_x4_t4_g7_t

0x32be,	// (0x0007af49) list_single_dyc_row_pane_ParamLimits

0x32be,	// (0x0007af49) list_single_dyc_row_pane

0xca86,	// (0x00084711) call5_gesture_pane_ParamLimits

0xca86,	// (0x00084711) call5_gesture_pane

0xcaba,	// (0x00084745) call5_windows_pane_ParamLimits

0xcaba,	// (0x00084745) call5_windows_pane

0xcb2c,	// (0x000847b7) call5_swipe_1_pane_cp_ParamLimits

0xcb2c,	// (0x000847b7) call5_swipe_1_pane_cp

0xcb38,	// (0x000847c3) call5_swipe_2_pane_cp_ParamLimits

0xcb38,	// (0x000847c3) call5_swipe_2_pane_cp

0x1890,	// (0x0007951b) call5_image_pane_cp

0xcb44,	// (0x000847cf) popup_call5_audio_first_window_cp_ParamLimits

0xcb44,	// (0x000847cf) popup_call5_audio_first_window_cp

0x3880,	// (0x0007b50b) call5_swipe_1_pane_g1_cp_ParamLimits

0x3880,	// (0x0007b50b) call5_swipe_1_pane_g1_cp

0x38c0,	// (0x0007b54b) call5_swipe_1_pane_g2_cp

0x3899,	// (0x0007b524) call5_swipe_1_pane_t1_cp_ParamLimits

0x3899,	// (0x0007b524) call5_swipe_1_pane_t1_cp

0x3880,	// (0x0007b50b) call5_swipe_2_pane_g1_cp_ParamLimits

0x3880,	// (0x0007b50b) call5_swipe_2_pane_g1_cp

0x38c8,	// (0x0007b553) call5_swipe_2_pane_g2_cp

0x38d0,	// (0x0007b55b) call5_swipe_2_pane_t1_cp_ParamLimits

0x38d0,	// (0x0007b55b) call5_swipe_2_pane_t1_cp

0xe64a,	// (0x000862d5) main_sp_fs_email_pane

0x38e5,	// (0x0007b570) main_sp_fs_listscroll_pane_te

0x38ee,	// (0x0007b579) popup_sp_fs_action_menu_pane_ParamLimits

0x38ee,	// (0x0007b579) popup_sp_fs_action_menu_pane

0xea93,	// (0x0008671e) bg_sp_fs_ctrlbar_pane_g1

0x3930,	// (0x0007b5bb) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0x3939,	// (0x0007b5c4) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0x3942,	// (0x0007b5cd) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xea93,	// (0x0008671e) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfd1b,	// (0x000879a6) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xe876,	// (0x00086501) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xe876,	// (0x00086501) bg_sp_fs_ctrlbar_ddmenu_pane

0x394b,	// (0x0007b5d6) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0x394b,	// (0x0007b5d6) main_sp_fs_ctrlbar_ddmenu_pane_g1

0x3957,	// (0x0007b5e2) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0x3957,	// (0x0007b5e2) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfd24,	// (0x000879af) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfd24,	// (0x000879af) main_sp_fs_ctrlbar_ddmenu_pane_g

0x3963,	// (0x0007b5ee) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0x3963,	// (0x0007b5ee) main_sp_fs_ctrlbar_ddmenu_pane_t1

0x397d,	// (0x0007b608) list_medium_line_t2_right_icon_g1

0xcb50,	// (0x000847db) list_medium_line_t2_right_icon_t1

0xcb60,	// (0x000847eb) list_medium_line_t2_right_icon_t2

0x0001,

0xfd29,	// (0x000879b4) list_medium_line_t2_right_icon_t

0xe63c,	// (0x000862c7) bg_sp_fs_ctrlbar_pane_ParamLimits

0xe63c,	// (0x000862c7) bg_sp_fs_ctrlbar_pane

0xcbc5,	// (0x00084850) main_sp_fs_ctrlbar_button_pane_cp01

0xcbcd,	// (0x00084858) main_sp_fs_ctrlbar_ddmenu_pane

0xf112,	// (0x00086d9d) main_sp_fs_ctrlbar_pane_g1

0x39bd,	// (0x0007b648) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfd2e,	// (0x000879b9) main_sp_fs_ctrlbar_pane_g

0x39c9,	// (0x0007b654) main_sp_fs_ctrlbar_pane_t1

0xcbd7,	// (0x00084862) main_sp_fs_ctrlbar_pane

0xcbf3,	// (0x0008487e) main_sp_fs_listscroll_pane_te_cp01

0xcc04,	// (0x0008488f) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0xcc04,	// (0x0008488f) popup_sp_fs_action_menu_pane_cp01

0xe64a,	// (0x000862d5) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0xe64a,	// (0x000862d5) bg_sp_fs_highlight_list_pane_cp01

0x39de,	// (0x0007b669) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0x39de,	// (0x0007b669) sp_fs_action_menu_list_gene_pane_g1

0x39ed,	// (0x0007b678) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0x39ed,	// (0x0007b678) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfd33,	// (0x000879be) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfd33,	// (0x000879be) sp_fs_action_menu_list_gene_pane_g

0x39fa,	// (0x0007b685) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0x39fa,	// (0x0007b685) sp_fs_action_menu_list_gene_pane_t1

0x3a12,	// (0x0007b69d) sp_fs_action_menu_list_gene_pane_ParamLimits

0x3a12,	// (0x0007b69d) sp_fs_action_menu_list_gene_pane

0x3a31,	// (0x0007b6bc) popup_sp_fs_action_menu_bg_pane_ParamLimits

0x3a31,	// (0x0007b6bc) popup_sp_fs_action_menu_bg_pane

0x3a3f,	// (0x0007b6ca) sp_fs_action_menu_list_pane_ParamLimits

0x3a3f,	// (0x0007b6ca) sp_fs_action_menu_list_pane

0x3a5f,	// (0x0007b6ea) sp_fs_scroll_pane_cp01_ParamLimits

0x3a5f,	// (0x0007b6ea) sp_fs_scroll_pane_cp01

0xcc1c,	// (0x000848a7) list_medium_line_plain_t2_t1

0xcc2c,	// (0x000848b7) list_medium_line_plain_t2_t2

0x0001,

0xfd38,	// (0x000879c3) list_medium_line_plain_t2_t

0xcc3a,	// (0x000848c5) list_medium_line_plain_t3_t1

0xcc4a,	// (0x000848d5) list_medium_line_plain_t3_t2

0xcc58,	// (0x000848e3) list_medium_line_plain_t3_t3

0x0002,

0xfd3d,	// (0x000879c8) list_medium_line_plain_t3_t

0x0e2d,	// (0x00078ab8) list_medium_line_x2_t2_g2_g1_ParamLimits

0x0e2d,	// (0x00078ab8) list_medium_line_x2_t2_g2_g1

0x0e45,	// (0x00078ad0) list_medium_line_x2_t2_g2_g2_ParamLimits

0x0e45,	// (0x00078ad0) list_medium_line_x2_t2_g2_g2

0x0001,

0xf2ad,	// (0x00086f38) list_medium_line_x2_t2_g2_g_ParamLimits

0xf2ad,	// (0x00086f38) list_medium_line_x2_t2_g2_g

0x13ec,	// (0x00079077) list_medium_line_x2_t2_g2_t1_ParamLimits

0x13ec,	// (0x00079077) list_medium_line_x2_t2_g2_t1

0x0e66,	// (0x00078af1) list_medium_line_x2_t2_g2_t2_ParamLimits

0x0e66,	// (0x00078af1) list_medium_line_x2_t2_g2_t2

0x0001,

0xfd44,	// (0x000879cf) list_medium_line_x2_t2_g2_t_ParamLimits

0xfd44,	// (0x000879cf) list_medium_line_x2_t2_g2_t

0x0e2d,	// (0x00078ab8) list_medium_line_x2_t4_g2_g1_ParamLimits

0x0e2d,	// (0x00078ab8) list_medium_line_x2_t4_g2_g1

0x3a85,	// (0x0007b710) list_medium_line_x2_t4_g2_g2_ParamLimits

0x3a85,	// (0x0007b710) list_medium_line_x2_t4_g2_g2

0x0001,

0xfd49,	// (0x000879d4) list_medium_line_x2_t4_g2_g_ParamLimits

0xfd49,	// (0x000879d4) list_medium_line_x2_t4_g2_g

0xcc66,	// (0x000848f1) list_medium_line_x2_t4_g2_t1_ParamLimits

0xcc66,	// (0x000848f1) list_medium_line_x2_t4_g2_t1

0xcc7d,	// (0x00084908) list_medium_line_x2_t4_g2_t2_ParamLimits

0xcc7d,	// (0x00084908) list_medium_line_x2_t4_g2_t2

0xcc92,	// (0x0008491d) list_medium_line_x2_t4_g2_t3_ParamLimits

0xcc92,	// (0x0008491d) list_medium_line_x2_t4_g2_t3

0x0e66,	// (0x00078af1) list_medium_line_x2_t4_g2_t4_ParamLimits

0x0e66,	// (0x00078af1) list_medium_line_x2_t4_g2_t4

0x0003,

0xfd4e,	// (0x000879d9) list_medium_line_x2_t4_g2_t_ParamLimits

0xfd4e,	// (0x000879d9) list_medium_line_x2_t4_g2_t

0x3a97,	// (0x0007b722) list_medium_line_t3_right_iconx2_g1

0x397d,	// (0x0007b608) list_medium_line_t3_right_iconx2_g2

0xcca4,	// (0x0008492f) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfd57,	// (0x000879e2) list_medium_line_t3_right_iconx2_g

0xccac,	// (0x00084937) list_medium_line_t3_right_iconx2_t1

0xccbc,	// (0x00084947) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfd5e,	// (0x000879e9) list_medium_line_t3_right_iconx2_t

0x0e2d,	// (0x00078ab8) list_medium_line_x3_t4_g4_g1_ParamLimits

0x0e2d,	// (0x00078ab8) list_medium_line_x3_t4_g4_g1

0x0e39,	// (0x00078ac4) list_medium_line_x3_t4_g4_g2_ParamLimits

0x0e39,	// (0x00078ac4) list_medium_line_x3_t4_g4_g2

0x0ecd,	// (0x00078b58) list_medium_line_x3_t4_g4_g3_ParamLimits

0x0ecd,	// (0x00078b58) list_medium_line_x3_t4_g4_g3

0x3a9f,	// (0x0007b72a) list_medium_line_x3_t4_g4_g4_ParamLimits

0x3a9f,	// (0x0007b72a) list_medium_line_x3_t4_g4_g4

0x0003,

0xfd63,	// (0x000879ee) list_medium_line_x3_t4_g4_g_ParamLimits

0xfd63,	// (0x000879ee) list_medium_line_x3_t4_g4_g

0xccca,	// (0x00084955) list_medium_line_x3_t4_g4_t1_ParamLimits

0xccca,	// (0x00084955) list_medium_line_x3_t4_g4_t1

0xcce1,	// (0x0008496c) list_medium_line_x3_t4_g4_t2_ParamLimits

0xcce1,	// (0x0008496c) list_medium_line_x3_t4_g4_t2

0x3aab,	// (0x0007b736) list_medium_line_x3_t4_g4_t3_ParamLimits

0x3aab,	// (0x0007b736) list_medium_line_x3_t4_g4_t3

0x3ac0,	// (0x0007b74b) list_medium_line_x3_t4_g4_t4_ParamLimits

0x3ac0,	// (0x0007b74b) list_medium_line_x3_t4_g4_t4

0x0003,

0xfd6c,	// (0x000879f7) list_medium_line_x3_t4_g4_t_ParamLimits

0xfd6c,	// (0x000879f7) list_medium_line_x3_t4_g4_t

0xccf6,	// (0x00084981) list_single_dyc_row_text_pane_t1_ParamLimits

0xccf6,	// (0x00084981) list_single_dyc_row_text_pane_t1

0xcd2d,	// (0x000849b8) list_single_dyc_row_text_pane_t2_ParamLimits

0xcd2d,	// (0x000849b8) list_single_dyc_row_text_pane_t2

0x3add,	// (0x0007b768) list_single_dyc_row_text_pane_t3_ParamLimits

0x3add,	// (0x0007b768) list_single_dyc_row_text_pane_t3

0x0002,

0xfd75,	// (0x00087a00) list_single_dyc_row_text_pane_t_ParamLimits

0xfd75,	// (0x00087a00) list_single_dyc_row_text_pane_t

0x3aef,	// (0x0007b77a) list_single_dyc_row_pane_g1_ParamLimits

0x3aef,	// (0x0007b77a) list_single_dyc_row_pane_g1

0x3afb,	// (0x0007b786) list_single_dyc_row_pane_g2_ParamLimits

0x3afb,	// (0x0007b786) list_single_dyc_row_pane_g2

0x3b07,	// (0x0007b792) list_single_dyc_row_pane_g3_ParamLimits

0x3b07,	// (0x0007b792) list_single_dyc_row_pane_g3

0x3b13,	// (0x0007b79e) list_single_dyc_row_pane_g4_ParamLimits

0x3b13,	// (0x0007b79e) list_single_dyc_row_pane_g4

0x0003,

0xfd7c,	// (0x00087a07) list_single_dyc_row_pane_g_ParamLimits

0xfd7c,	// (0x00087a07) list_single_dyc_row_pane_g

0x3b1f,	// (0x0007b7aa) list_single_dyc_row_text_pane_ParamLimits

0x3b1f,	// (0x0007b7aa) list_single_dyc_row_text_pane

0xdd39,	// (0x000859c4) bg_sp_fs_scroll_pane

0x3b3e,	// (0x0007b7c9) thumb_sp_fs_scroll_pane

0x29c6,	// (0x0007a651) list_medium_line_g1_ParamLimits

0x29c6,	// (0x0007a651) list_medium_line_g1

0x3b47,	// (0x0007b7d2) list_medium_line_t1_ParamLimits

0x3b47,	// (0x0007b7d2) list_medium_line_t1

0x0e2d,	// (0x00078ab8) list_medium_line_x2_g1_ParamLimits

0x0e2d,	// (0x00078ab8) list_medium_line_x2_g1

0x0e39,	// (0x00078ac4) list_medium_line_x2_g2_ParamLimits

0x0e39,	// (0x00078ac4) list_medium_line_x2_g2

0x0001,

0xfd85,	// (0x00087a10) list_medium_line_x2_g_ParamLimits

0xfd85,	// (0x00087a10) list_medium_line_x2_g

0x3b5c,	// (0x0007b7e7) list_medium_line_x2_t1_ParamLimits

0x3b5c,	// (0x0007b7e7) list_medium_line_x2_t1

0x0e2d,	// (0x00078ab8) list_medium_line_x3_g1_ParamLimits

0x0e2d,	// (0x00078ab8) list_medium_line_x3_g1

0x0e39,	// (0x00078ac4) list_medium_line_x3_g2_ParamLimits

0x0e39,	// (0x00078ac4) list_medium_line_x3_g2

0x0001,

0xfd85,	// (0x00087a10) list_medium_line_x3_g_ParamLimits

0xfd85,	// (0x00087a10) list_medium_line_x3_g

0x3b5c,	// (0x0007b7e7) list_medium_line_x3_t1_ParamLimits

0x3b5c,	// (0x0007b7e7) list_medium_line_x3_t1

0x3b72,	// (0x0007b7fd) thumb_sp_fs_scroll_pane_g1

0x3b7b,	// (0x0007b806) thumb_sp_fs_scroll_pane_g2

0x3b84,	// (0x0007b80f) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfd8a,	// (0x00087a15) thumb_sp_fs_scroll_pane_g

0x3b72,	// (0x0007b7fd) bg_sp_fs_scroll_pane_g1

0x3b7b,	// (0x0007b806) bg_sp_fs_scroll_pane_g2

0x3b84,	// (0x0007b80f) bg_sp_fs_scroll_pane_g3

0x0002,

0xfd8a,	// (0x00087a15) bg_sp_fs_scroll_pane_g

0x0e2d,	// (0x00078ab8) list_medium_line_x2_t3_g4_g1_ParamLimits

0x0e2d,	// (0x00078ab8) list_medium_line_x2_t3_g4_g1

0x0ec1,	// (0x00078b4c) list_medium_line_x2_t3_g4_g2_ParamLimits

0x0ec1,	// (0x00078b4c) list_medium_line_x2_t3_g4_g2

0x0e39,	// (0x00078ac4) list_medium_line_x2_t3_g4_g3_ParamLimits

0x0e39,	// (0x00078ac4) list_medium_line_x2_t3_g4_g3

0x0e45,	// (0x00078ad0) list_medium_line_x2_t3_g4_g4_ParamLimits

0x0e45,	// (0x00078ad0) list_medium_line_x2_t3_g4_g4

0x0003,

0xf329,	// (0x00086fb4) list_medium_line_x2_t3_g4_g_ParamLimits

0xf329,	// (0x00086fb4) list_medium_line_x2_t3_g4_g

0xcd87,	// (0x00084a12) list_medium_line_x2_t3_g4_t1_ParamLimits

0xcd87,	// (0x00084a12) list_medium_line_x2_t3_g4_t1

0xcd9d,	// (0x00084a28) list_medium_line_x2_t3_g4_t2_ParamLimits

0xcd9d,	// (0x00084a28) list_medium_line_x2_t3_g4_t2

0x0e66,	// (0x00078af1) list_medium_line_x2_t3_g4_t3_ParamLimits

0x0e66,	// (0x00078af1) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd91,	// (0x00087a1c) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd91,	// (0x00087a1c) list_medium_line_x2_t3_g4_t

0x29c6,	// (0x0007a651) list_medium_line_g2_g1_ParamLimits

0x29c6,	// (0x0007a651) list_medium_line_g2_g1

0x29d2,	// (0x0007a65d) list_medium_line_g2_g2_ParamLimits

0x29d2,	// (0x0007a65d) list_medium_line_g2_g2

0x0001,

0xfa59,	// (0x000876e4) list_medium_line_g2_g_ParamLimits

0xfa59,	// (0x000876e4) list_medium_line_g2_g

0x3b8d,	// (0x0007b818) list_medium_line_g2_t1_ParamLimits

0x3b8d,	// (0x0007b818) list_medium_line_g2_t1

0x29c6,	// (0x0007a651) list_medium_line_t3_g2_g1_ParamLimits

0x29c6,	// (0x0007a651) list_medium_line_t3_g2_g1

0x29d2,	// (0x0007a65d) list_medium_line_t3_g2_g2_ParamLimits

0x29d2,	// (0x0007a65d) list_medium_line_t3_g2_g2

0x0001,

0xfa59,	// (0x000876e4) list_medium_line_t3_g2_g_ParamLimits

0xfa59,	// (0x000876e4) list_medium_line_t3_g2_g

0xcdb6,	// (0x00084a41) list_medium_line_t3_g2_t1_ParamLimits

0xcdb6,	// (0x00084a41) list_medium_line_t3_g2_t1

0xcdd0,	// (0x00084a5b) list_medium_line_t3_g2_t2_ParamLimits

0xcdd0,	// (0x00084a5b) list_medium_line_t3_g2_t2

0xcde5,	// (0x00084a70) list_medium_line_t3_g2_t3_ParamLimits

0xcde5,	// (0x00084a70) list_medium_line_t3_g2_t3

0x0002,

0xfd98,	// (0x00087a23) list_medium_line_t3_g2_t_ParamLimits

0xfd98,	// (0x00087a23) list_medium_line_t3_g2_t

0x397d,	// (0x0007b608) list_medium_line_right_icon_g1

0x3ba2,	// (0x0007b82d) list_medium_line_right_icon_t1

0x29c6,	// (0x0007a651) list_medium_line_t2_g1_ParamLimits

0x29c6,	// (0x0007a651) list_medium_line_t2_g1

0xcdfb,	// (0x00084a86) list_medium_line_t2_t1_ParamLimits

0xcdfb,	// (0x00084a86) list_medium_line_t2_t1

0xce15,	// (0x00084aa0) list_medium_line_t2_t2_ParamLimits

0xce15,	// (0x00084aa0) list_medium_line_t2_t2

0x0001,

0xfd9f,	// (0x00087a2a) list_medium_line_t2_t_ParamLimits

0xfd9f,	// (0x00087a2a) list_medium_line_t2_t

0x29c6,	// (0x0007a651) list_medium_line_t3_g1_ParamLimits

0x29c6,	// (0x0007a651) list_medium_line_t3_g1

0xce2a,	// (0x00084ab5) list_medium_line_t3_t1_ParamLimits

0xce2a,	// (0x00084ab5) list_medium_line_t3_t1

0xce41,	// (0x00084acc) list_medium_line_t3_t2_ParamLimits

0xce41,	// (0x00084acc) list_medium_line_t3_t2

0xce56,	// (0x00084ae1) list_medium_line_t3_t3_ParamLimits

0xce56,	// (0x00084ae1) list_medium_line_t3_t3

0x0002,

0xfda4,	// (0x00087a2f) list_medium_line_t3_t_ParamLimits

0xfda4,	// (0x00087a2f) list_medium_line_t3_t

0x29c6,	// (0x0007a651) list_medium_line_g3_g1_ParamLimits

0x29c6,	// (0x0007a651) list_medium_line_g3_g1

0x3bb0,	// (0x0007b83b) list_medium_line_g3_g2_ParamLimits

0x3bb0,	// (0x0007b83b) list_medium_line_g3_g2

0x29d2,	// (0x0007a65d) list_medium_line_g3_g3_ParamLimits

0x29d2,	// (0x0007a65d) list_medium_line_g3_g3

0x0002,

0xfdab,	// (0x00087a36) list_medium_line_g3_g_ParamLimits

0xfdab,	// (0x00087a36) list_medium_line_g3_g

0x3bbc,	// (0x0007b847) list_medium_line_g3_t1_ParamLimits

0x3bbc,	// (0x0007b847) list_medium_line_g3_t1

0x29c6,	// (0x0007a651) list_medium_line_t2_g3_g1_ParamLimits

0x29c6,	// (0x0007a651) list_medium_line_t2_g3_g1

0x3bb0,	// (0x0007b83b) list_medium_line_t2_g3_g2_ParamLimits

0x3bb0,	// (0x0007b83b) list_medium_line_t2_g3_g2

0x29d2,	// (0x0007a65d) list_medium_line_t2_g3_g3_ParamLimits

0x29d2,	// (0x0007a65d) list_medium_line_t2_g3_g3

0x0002,

0xfdab,	// (0x00087a36) list_medium_line_t2_g3_g_ParamLimits

0xfdab,	// (0x00087a36) list_medium_line_t2_g3_g

0xce68,	// (0x00084af3) list_medium_line_t2_g3_t1_ParamLimits

0xce68,	// (0x00084af3) list_medium_line_t2_g3_t1

0xce7f,	// (0x00084b0a) list_medium_line_t2_g3_t2_ParamLimits

0xce7f,	// (0x00084b0a) list_medium_line_t2_g3_t2

0x0001,

0xfdb2,	// (0x00087a3d) list_medium_line_t2_g3_t_ParamLimits

0xfdb2,	// (0x00087a3d) list_medium_line_t2_g3_t

0x29c6,	// (0x0007a651) list_medium_line_t3_g3_g1_ParamLimits

0x29c6,	// (0x0007a651) list_medium_line_t3_g3_g1

0x3bb0,	// (0x0007b83b) list_medium_line_t3_g3_g2_ParamLimits

0x3bb0,	// (0x0007b83b) list_medium_line_t3_g3_g2

0x29d2,	// (0x0007a65d) list_medium_line_t3_g3_g3_ParamLimits

0x29d2,	// (0x0007a65d) list_medium_line_t3_g3_g3

0x0002,

0xfdab,	// (0x00087a36) list_medium_line_t3_g3_g_ParamLimits

0xfdab,	// (0x00087a36) list_medium_line_t3_g3_g

0xce94,	// (0x00084b1f) list_medium_line_t3_g3_t1_ParamLimits

0xce94,	// (0x00084b1f) list_medium_line_t3_g3_t1

0xcea8,	// (0x00084b33) list_medium_line_t3_g3_t2_ParamLimits

0xcea8,	// (0x00084b33) list_medium_line_t3_g3_t2

0xceba,	// (0x00084b45) list_medium_line_t3_g3_t3_ParamLimits

0xceba,	// (0x00084b45) list_medium_line_t3_g3_t3

0x0002,

0xfdb7,	// (0x00087a42) list_medium_line_t3_g3_t_ParamLimits

0xfdb7,	// (0x00087a42) list_medium_line_t3_g3_t

0x3a97,	// (0x0007b722) list_medium_line_right_iconx2_g1

0x397d,	// (0x0007b608) list_medium_line_right_iconx2_g2

0x0001,

0xfdbe,	// (0x00087a49) list_medium_line_right_iconx2_g

0x3bd1,	// (0x0007b85c) list_medium_line_right_iconx2_t1

0x3a97,	// (0x0007b722) list_medium_line_t2_right_iconx2_g1

0x397d,	// (0x0007b608) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfdbe,	// (0x00087a49) list_medium_line_t2_right_iconx2_g

0xcecc,	// (0x00084b57) list_medium_line_t2_right_iconx2_t1

0xcedc,	// (0x00084b67) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfdc3,	// (0x00087a4e) list_medium_line_t2_right_iconx2_t

0x3bdf,	// (0x0007b86a) list_medium_line_x4_t4_t1

0xceea,	// (0x00084b75) list_medium_line_x4_t4_t2

0xcefa,	// (0x00084b85) list_medium_line_x4_t4_t3

0xcf0a,	// (0x00084b95) list_medium_line_x4_t4_t4

0x0003,

0xfdc8,	// (0x00087a53) list_medium_line_x4_t4_t

0xcf43,	// (0x00084bce) tport_appsw_pane_ParamLimits

0xcf43,	// (0x00084bce) tport_appsw_pane

0xcf4f,	// (0x00084bda) tport_contact_pane_ParamLimits

0xcf4f,	// (0x00084bda) tport_contact_pane

0xcf5f,	// (0x00084bea) tport_listscroll_pane_ParamLimits

0xcf5f,	// (0x00084bea) tport_listscroll_pane

0xcf6f,	// (0x00084bfa) cell_tport_appsw_pane_ParamLimits

0xcf6f,	// (0x00084bfa) cell_tport_appsw_pane

0xed5f,	// (0x000869ea) tport_appsw_pane_g1_ParamLimits

0xed5f,	// (0x000869ea) tport_appsw_pane_g1

0x3bed,	// (0x0007b878) tport_contact_pane_g1

0x3bf6,	// (0x0007b881) tport_contact_pane_t1

0x3c04,	// (0x0007b88f) tport_contact_pane_t2

0x0001,

0xfdd1,	// (0x00087a5c) tport_contact_pane_t

0x3c12,	// (0x0007b89d) list_tport_pane

0x3c1b,	// (0x0007b8a6) scroll_pane_cp_030

0xcf84,	// (0x00084c0f) cell_tport_appsw_pane_g1

0x3c24,	// (0x0007b8af) cell_tport_appsw_pane_t1

0xdd39,	// (0x000859c4) grid_highlight_pane_cp019

0xcf9c,	// (0x00084c27) list_tport_double_graphic_pane_ParamLimits

0xcf9c,	// (0x00084c27) list_tport_double_graphic_pane

0xe64a,	// (0x000862d5) list_highlight_pane_cp023_ParamLimits

0xe64a,	// (0x000862d5) list_highlight_pane_cp023

0xcfaf,	// (0x00084c3a) list_tport_double_graphic_pane_g1_ParamLimits

0xcfaf,	// (0x00084c3a) list_tport_double_graphic_pane_g1

0xcfbc,	// (0x00084c47) list_tport_double_graphic_pane_t1_ParamLimits

0xcfbc,	// (0x00084c47) list_tport_double_graphic_pane_t1

0xcfd1,	// (0x00084c5c) list_tport_double_graphic_pane_t2_ParamLimits

0xcfd1,	// (0x00084c5c) list_tport_double_graphic_pane_t2

0x0001,

0xfddd,	// (0x00087a68) list_tport_double_graphic_pane_t_ParamLimits

0xfddd,	// (0x00087a68) list_tport_double_graphic_pane_t

0xdd39,	// (0x000859c4) main_cale_note_pane

0xaf04,	// (0x00082b8f) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0xaf04,	// (0x00082b8f) cell_vitu2_function_top_wide_pane_cp01

0xc74e,	// (0x000843d9) wait_bar_pane_cp05_ParamLimits

0xdd39,	// (0x000859c4) listscroll_cmail_pane

0x3c3a,	// (0x0007b8c5) list_cmail_pane

0xcfed,	// (0x00084c78) list_cmail_body_pane

0xd011,	// (0x00084c9c) list_single_cmail_header_caption_pane

0xd03f,	// (0x00084cca) list_single_cmail_header_detail_pane_ParamLimits

0xd03f,	// (0x00084cca) list_single_cmail_header_detail_pane

0xd077,	// (0x00084d02) list_single_cmail_header_caption_pane_t1

0xd087,	// (0x00084d12) list_single_cmail_header_detail_pane_g1_ParamLimits

0xd087,	// (0x00084d12) list_single_cmail_header_detail_pane_g1

0x4731,	// (0x0007c3bc) list_single_cmail_header_detail_pane_g2_ParamLimits

0x4731,	// (0x0007c3bc) list_single_cmail_header_detail_pane_g2

0x0002,

0xfde2,	// (0x00087a6d) list_single_cmail_header_detail_pane_g_ParamLimits

0xfde2,	// (0x00087a6d) list_single_cmail_header_detail_pane_g

0x3c67,	// (0x0007b8f2) list_single_cmail_header_detail_pane_t1_ParamLimits

0x3c67,	// (0x0007b8f2) list_single_cmail_header_detail_pane_t1

0x3c99,	// (0x0007b924) list_single_cmail_header_editor_pane_bg_ParamLimits

0x3c99,	// (0x0007b924) list_single_cmail_header_editor_pane_bg

0x3cab,	// (0x0007b936) list_cmail_body_pane_g1

0x3cb4,	// (0x0007b93f) list_cmail_body_pane_t1

0x2779,	// (0x0007a404) list_single_cmail_header_editor_pane_bg_g1

0x10e8,	// (0x00078d73) list_single_cmail_header_editor_pane_bg_g1_copy1

0x2789,	// (0x0007a414) list_single_cmail_header_editor_pane_bg_g1_copy2

0x2781,	// (0x0007a40c) list_single_cmail_header_editor_pane_bg_g1_copy3

0x29be,	// (0x0007a649) list_single_cmail_header_editor_pane_bg_g1_copy4

0x27a9,	// (0x0007a434) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0x2799,	// (0x0007a424) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0x27a1,	// (0x0007a42c) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0x10c8,	// (0x00078d53) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0xd0c5,	// (0x00084d50) calenote_gesture_pane_ParamLimits

0xd0c5,	// (0x00084d50) calenote_gesture_pane

0xd0df,	// (0x00084d6a) calenote_window_pane_ParamLimits

0xd0df,	// (0x00084d6a) calenote_window_pane

0x3cc2,	// (0x0007b94d) popup_note_window_cp01

0xd0f7,	// (0x00084d82) calenote_swipe_1_pane_ParamLimits

0xd0f7,	// (0x00084d82) calenote_swipe_1_pane

0xcb38,	// (0x000847c3) calenote_swipe_2_pane_ParamLimits

0xcb38,	// (0x000847c3) calenote_swipe_2_pane

0x3880,	// (0x0007b50b) calenote_swipe_1_pane_g1_ParamLimits

0x3880,	// (0x0007b50b) calenote_swipe_1_pane_g1

0x388d,	// (0x0007b518) calenote_swipe_1_pane_g2_ParamLimits

0x388d,	// (0x0007b518) calenote_swipe_1_pane_g2

0x0001,

0xfd11,	// (0x0008799c) calenote_swipe_1_pane_g_ParamLimits

0xfd11,	// (0x0008799c) calenote_swipe_1_pane_g

0x3cd4,	// (0x0007b95f) calenote_swipe_1_pane_t1_ParamLimits

0x3cd4,	// (0x0007b95f) calenote_swipe_1_pane_t1

0x3880,	// (0x0007b50b) calenote_swipe_2_pane_g1_ParamLimits

0x3880,	// (0x0007b50b) calenote_swipe_2_pane_g1

0x3cf3,	// (0x0007b97e) calenote_swipe_2_pane_g2_ParamLimits

0x3cf3,	// (0x0007b97e) calenote_swipe_2_pane_g2

0x0001,

0xfdee,	// (0x00087a79) calenote_swipe_2_pane_g_ParamLimits

0xfdee,	// (0x00087a79) calenote_swipe_2_pane_g

0x3cff,	// (0x0007b98a) calenote_swipe_2_pane_t1_ParamLimits

0x3cff,	// (0x0007b98a) calenote_swipe_2_pane_t1

0xdd39,	// (0x000859c4) main_mup_navstr_pane

0x9cba,	// (0x00081945) main_mup3_pane_t7_ParamLimits

0x9cba,	// (0x00081945) main_mup3_pane_t7

0xa6a5,	// (0x00082330) main_mp4_pane_g6_ParamLimits

0xa6a5,	// (0x00082330) main_mp4_pane_g6

0xaa19,	// (0x000826a4) main_image3_pane_t4_ParamLimits

0xaa19,	// (0x000826a4) main_image3_pane_t4

0xd10a,	// (0x00084d95) popup_navstr_preview_pane_ParamLimits

0xd10a,	// (0x00084d95) popup_navstr_preview_pane

0xd116,	// (0x00084da1) scroll_navstr_pane_ParamLimits

0xd116,	// (0x00084da1) scroll_navstr_pane

0xdd39,	// (0x000859c4) bg_popup_preview_window_pane_cp04

0x3d26,	// (0x0007b9b1) popup_navstr_preview_pane_t1

0xd122,	// (0x00084dad) scroll_navstr_pane_g1_ParamLimits

0xd122,	// (0x00084dad) scroll_navstr_pane_g1

0xd12f,	// (0x00084dba) scroll_navstr_pane_t1_ParamLimits

0xd12f,	// (0x00084dba) scroll_navstr_pane_t1

0x3ccb,	// (0x0007b956) bg_button_pane_cp014

0x3ccb,	// (0x0007b956) bg_button_pane_cp030

0xca2c,	// (0x000846b7) list_double_fisheye_pane_g4_ParamLimits

0xca2c,	// (0x000846b7) list_double_fisheye_pane_g4

0xca38,	// (0x000846c3) list_double_fisheye_pane_g5_ParamLimits

0xca38,	// (0x000846c3) list_double_fisheye_pane_g5

0x3c42,	// (0x0007b8cd) sp_fs_scroll_pane_cp03

0xf112,	// (0x00086d9d) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0x39bd,	// (0x0007b648) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfd2e,	// (0x000879b9) main_sp_fs_ctrlbar_pane_g_ParamLimits

0x39c9,	// (0x0007b654) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xcfe3,	// (0x00084c6e) sp_fs_scroll_pane_cp02

0x0cae,	// (0x00078939) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0x0cae,	// (0x00078939) popup_sp_fs_calendar_preview_list_single_pane

0xdd39,	// (0x000859c4) main_cam6_pano_pane

0xe64a,	// (0x000862d5) main_mup3_pane_ParamLimits

0xdd39,	// (0x000859c4) main_phacti_pane

0xc623,	// (0x000842ae) bg_button_pane_cp11

0xc63b,	// (0x000842c6) main_mobtv_info_pane_g2_ParamLimits

0xc63b,	// (0x000842c6) main_mobtv_info_pane_g2

0x0001,

0xfc8e,	// (0x00087919) main_mobtv_info_pane_g_ParamLimits

0xfc8e,	// (0x00087919) main_mobtv_info_pane_g

0xc7ed,	// (0x00084478) sc_clock_pane_t5_ParamLimits

0xc7ed,	// (0x00084478) sc_clock_pane_t5

0xc88f,	// (0x0008451a) main_radioblah_pane_g1_ParamLimits

0x37cc,	// (0x0007b457) main_radioblah_pane_t3_ParamLimits

0x37cc,	// (0x0007b457) main_radioblah_pane_t3

0x37e4,	// (0x0007b46f) main_radioblah_pane_t4_ParamLimits

0x37e4,	// (0x0007b46f) main_radioblah_pane_t4

0xc8ad,	// (0x00084538) main_radioblah_text_pane_ParamLimits

0xc8ad,	// (0x00084538) main_radioblah_text_pane

0xc8ba,	// (0x00084545) main_radioblah_info_pane_g1_ParamLimits

0xc94f,	// (0x000845da) main_radioblah_info_pane_t4_ParamLimits

0xc94f,	// (0x000845da) main_radioblah_info_pane_t4

0xe64a,	// (0x000862d5) main_sp_fs_calendar_pane

0xd141,	// (0x00084dcc) main_phacti_pane_g1

0xd149,	// (0x00084dd4) phacti_note_pane_ParamLimits

0xd149,	// (0x00084dd4) phacti_note_pane

0x3d3d,	// (0x0007b9c8) phacti_term_pane_ParamLimits

0x3d3d,	// (0x0007b9c8) phacti_term_pane

0x3d52,	// (0x0007b9dd) phacti_note_pane_t1_ParamLimits

0x3d52,	// (0x0007b9dd) phacti_note_pane_t1

0x3d69,	// (0x0007b9f4) phacti_term_pane_g1

0x3d71,	// (0x0007b9fc) phacti_term_pane_t1_ParamLimits

0x3d71,	// (0x0007b9fc) phacti_term_pane_t1

0x3d9b,	// (0x0007ba26) popup_sp_fs_calendar_preview_list_single_pane_g1

0x3da3,	// (0x0007ba2e) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfdf8,	// (0x00087a83) popup_sp_fs_calendar_preview_list_single_pane_g

0x3dab,	// (0x0007ba36) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0x3dab,	// (0x0007ba36) popup_sp_fs_calendar_preview_list_single_pane_t1

0x3dc1,	// (0x0007ba4c) aid_popup_sp_fs_bg_corner_pane

0xea93,	// (0x0008671e) popup_sp_fs_calendar_preview_bg_pane_g1

0xdd39,	// (0x000859c4) popup_sp_fs_calendar_preview_bg_pane

0x3dc9,	// (0x0007ba54) popup_sp_fs_calendar_preview_list_pane

0xe64a,	// (0x000862d5) bg_main_sp_fs_cale_pane_ParamLimits

0xe64a,	// (0x000862d5) bg_main_sp_fs_cale_pane

0x3dda,	// (0x0007ba65) listscroll_cale_mrui_pane_ParamLimits

0x3dda,	// (0x0007ba65) listscroll_cale_mrui_pane

0x3dee,	// (0x0007ba79) listscroll_sp_fs_schedule_track_pane

0x3df7,	// (0x0007ba82) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0x3df7,	// (0x0007ba82) main_sp_fs_ctrlbar_pane_cp01

0x3e08,	// (0x0007ba93) main_sp_fs_ribbon_pane

0x3e10,	// (0x0007ba9b) popup_sp_fs_cale_preview_window

0xd18c,	// (0x00084e17) list_single_sp_fs_schedule_track_pane_ParamLimits

0xd18c,	// (0x00084e17) list_single_sp_fs_schedule_track_pane

0x26df,	// (0x0007a36a) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0x26df,	// (0x0007a36a) bg_sp_fs_highlight_list_pane_cp03

0xd1ae,	// (0x00084e39) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0xd1ae,	// (0x00084e39) list_single_sp_fs_schedule_track_pane_g1

0xd1ba,	// (0x00084e45) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0xd1ba,	// (0x00084e45) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfdfd,	// (0x00087a88) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfdfd,	// (0x00087a88) list_single_sp_fs_schedule_track_pane_g

0xd1c6,	// (0x00084e51) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0xd1c6,	// (0x00084e51) list_single_sp_fs_schedule_track_pane_t1

0xd1de,	// (0x00084e69) sp_fs_schedule_track_pane_ParamLimits

0xd1de,	// (0x00084e69) sp_fs_schedule_track_pane

0x3e22,	// (0x0007baad) sp_fs_schedule_track_pane_g1

0x3e2a,	// (0x0007bab5) sp_fs_schedule_track_pane_g2

0x3e32,	// (0x0007babd) sp_fs_schedule_track_pane_g3

0x3e3a,	// (0x0007bac5) sp_fs_schedule_track_pane_g4

0x3e42,	// (0x0007bacd) sp_fs_schedule_track_pane_g5

0x0004,

0xfe02,	// (0x00087a8d) sp_fs_schedule_track_pane_g

0x2779,	// (0x0007a404) bg_sp_fs_schedule_viewer_highlight_g1

0x10e8,	// (0x00078d73) bg_sp_fs_schedule_viewer_highlight_g2

0x2781,	// (0x0007a40c) bg_sp_fs_schedule_viewer_highlight_g3

0x2789,	// (0x0007a414) bg_sp_fs_schedule_viewer_highlight_g4

0x29be,	// (0x0007a649) bg_sp_fs_schedule_viewer_highlight_g5

0x2799,	// (0x0007a424) bg_sp_fs_schedule_viewer_highlight_g6

0x27a1,	// (0x0007a42c) bg_sp_fs_schedule_viewer_highlight_g7

0x27a9,	// (0x0007a434) bg_sp_fs_schedule_viewer_highlight_g8

0x10c8,	// (0x00078d53) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfe0d,	// (0x00087a98) bg_sp_fs_schedule_viewer_highlight_g

0xdd39,	// (0x000859c4) bg_main_sp_fs_ribbon_pane

0xd1ee,	// (0x00084e79) main_sp_fs_ribbon_pane_g1

0x3e4a,	// (0x0007bad5) main_sp_fs_ribbon_pane_t1

0xd1f7,	// (0x00084e82) main_sp_fs_ribbon_pane_t2

0x3e59,	// (0x0007bae4) main_sp_fs_ribbon_pane_t3

0x0002,

0xfe20,	// (0x00087aab) main_sp_fs_ribbon_pane_t

0x3e68,	// (0x0007baf3) main_sp_fs_ribbon_scheduler_pane

0x3e70,	// (0x0007bafb) bg_main_sp_fs_ribbon_pane_g1

0x3e79,	// (0x0007bb04) bg_main_sp_fs_ribbon_pane_g2

0x3e82,	// (0x0007bb0d) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfe27,	// (0x00087ab2) bg_main_sp_fs_ribbon_pane_g

0x3e8a,	// (0x0007bb15) main_sp_fs_ribbon_scheduler_pane_g1

0x3e93,	// (0x0007bb1e) main_sp_fs_ribbon_scheduler_pane_g2

0x3e9c,	// (0x0007bb27) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfe2e,	// (0x00087ab9) main_sp_fs_ribbon_scheduler_pane_g

0x3ea5,	// (0x0007bb30) list_cale_mrui_pane

0xd206,	// (0x00084e91) sp_fs_scroll_pane_cp07_ParamLimits

0xd206,	// (0x00084e91) sp_fs_scroll_pane_cp07

0xd21c,	// (0x00084ea7) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0xd21c,	// (0x00084ea7) bg_sp_fs_schedule_viewer_highlight

0x3eae,	// (0x0007bb39) list_single_sp_fs_schedule_track_pane_cp01

0x3eb6,	// (0x0007bb41) list_sp_fs_schedule_track_pane

0x3ebe,	// (0x0007bb49) sp_fs_scroll_pane_cp06_ParamLimits

0x3ebe,	// (0x0007bb49) sp_fs_scroll_pane_cp06

0xea93,	// (0x0008671e) bgmain_sp_fs_calendar_pane_g1

0xd229,	// (0x00084eb4) list_single_cale_mrui_pane_ParamLimits

0xd229,	// (0x00084eb4) list_single_cale_mrui_pane

0x3ed0,	// (0x0007bb5b) list_single_cale_mrui_row_pane_ParamLimits

0x3ed0,	// (0x0007bb5b) list_single_cale_mrui_row_pane

0x3edd,	// (0x0007bb68) list_single_cale_mrui_row_pane_g1_ParamLimits

0x3edd,	// (0x0007bb68) list_single_cale_mrui_row_pane_g1

0x3f15,	// (0x0007bba0) list_single_cale_mrui_row_pane_t1_ParamLimits

0x3f15,	// (0x0007bba0) list_single_cale_mrui_row_pane_t1

0xd255,	// (0x00084ee0) list_single_cale_mrui_row_pane_t2_ParamLimits

0xd255,	// (0x00084ee0) list_single_cale_mrui_row_pane_t2

0x3f27,	// (0x0007bbb2) list_single_cale_mrui_row_pane_t3_ParamLimits

0x3f27,	// (0x0007bbb2) list_single_cale_mrui_row_pane_t3

0x3f56,	// (0x0007bbe1) list_single_cale_mrui_row_pane_t4_ParamLimits

0x3f56,	// (0x0007bbe1) list_single_cale_mrui_row_pane_t4

0x0003,

0xfe3a,	// (0x00087ac5) list_single_cale_mrui_row_pane_t_ParamLimits

0xfe3a,	// (0x00087ac5) list_single_cale_mrui_row_pane_t

0xd2bb,	// (0x00084f46) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0xd2bb,	// (0x00084f46) list_single_cmail_header_editor_pane_bg_cp01

0xd2dd,	// (0x00084f68) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0xd2dd,	// (0x00084f68) list_single_cmail_header_editor_pane_bg_cp02

0xd2f9,	// (0x00084f84) main_radioblah_text_pane_t1_ParamLimits

0xd2f9,	// (0x00084f84) main_radioblah_text_pane_t1

0x3f85,	// (0x0007bc10) cam6_indi_pane_cp01

0x3f8d,	// (0x0007bc18) cam6_mode_pane_cp01

0x3f95,	// (0x0007bc20) cam6_pano_pane

0x3f9e,	// (0x0007bc29) cam6_zoom_pane_cp01

0x3fa6,	// (0x0007bc31) cam6_pano_image_pane

0x3fb1,	// (0x0007bc3c) cam6_pano_pane_g1

0x3544,	// (0x0007b1cf) cam6_pano_pane_g2

0x3fba,	// (0x0007bc45) cam6_pano_pane_g3

0x3fc3,	// (0x0007bc4e) cam6_pano_pane_g4

0xf03c,	// (0x00086cc7) cam6_pano_pane_g5

0x3fcc,	// (0x0007bc57) cam6_pano_pane_g6

0x3fd6,	// (0x0007bc61) cam6_pano_pane_g7

0x3fde,	// (0x0007bc69) cam6_pano_pane_g8

0x3fe7,	// (0x0007bc72) cam6_pano_pane_g9

0x0008,

0xfe43,	// (0x00087ace) cam6_pano_pane_g

0xdd39,	// (0x000859c4) main_browser_tag_pane

0x3d1e,	// (0x0007b9a9) grid_navstr_albumart_pane

0x3ff2,	// (0x0007bc7d) cell_navstr_albumart_pane_ParamLimits

0x3ff2,	// (0x0007bc7d) cell_navstr_albumart_pane

0x1a11,	// (0x0007969c) cell_navstr_albumart_pane_g1

0xe459,	// (0x000860e4) cell_navstr_albumart_pane_g2

0xe469,	// (0x000860f4) cell_navstr_albumart_pane_g3

0xe461,	// (0x000860ec) cell_navstr_albumart_pane_g4

0x0003,

0xfe56,	// (0x00087ae1) cell_navstr_albumart_pane_g

0xd316,	// (0x00084fa1) bt_list_pane_ParamLimits

0xd316,	// (0x00084fa1) bt_list_pane

0xd33d,	// (0x00084fc8) bt_list_pane_t1

0xd34c,	// (0x00084fd7) bt_list_pane_t2

0x0001,

0xfe5f,	// (0x00087aea) bt_list_pane_t

0xdd39,	// (0x000859c4) main_cale_prevew_pane

0xd35b,	// (0x00084fe6) popup_cale_preview_window_ParamLimits

0xd35b,	// (0x00084fe6) popup_cale_preview_window

0xe64a,	// (0x000862d5) bg_popup_preview_window_pane_cp05_ParamLimits

0xe64a,	// (0x000862d5) bg_popup_preview_window_pane_cp05

0x4014,	// (0x0007bc9f) list_cale_preview_pane_ParamLimits

0x4014,	// (0x0007bc9f) list_cale_preview_pane

0xd372,	// (0x00084ffd) list_double_cale_preview_pane_ParamLimits

0xd372,	// (0x00084ffd) list_double_cale_preview_pane

0xd384,	// (0x0008500f) list_single_cale_preview_pane_ParamLimits

0xd384,	// (0x0008500f) list_single_cale_preview_pane

0xd398,	// (0x00085023) list_single_cale_preview_pane_g1

0xd3a0,	// (0x0008502b) list_single_cale_preview_pane_t1_ParamLimits

0xd3a0,	// (0x0008502b) list_single_cale_preview_pane_t1

0xd3b5,	// (0x00085040) list_double_cale_preview_pane_g1

0xd3bd,	// (0x00085048) list_double_cale_preview_pane_t1_ParamLimits

0xd3bd,	// (0x00085048) list_double_cale_preview_pane_t1

0xd3d2,	// (0x0008505d) list_double_cale_preview_pane_t2_ParamLimits

0xd3d2,	// (0x0008505d) list_double_cale_preview_pane_t2

0x0001,

0xfe64,	// (0x00087aef) list_double_cale_preview_pane_t_ParamLimits

0xfe64,	// (0x00087aef) list_double_cale_preview_pane_t

0xdd39,	// (0x000859c4) main_ezdial_pane

0xe64a,	// (0x000862d5) main_sp_fs_email_pane_ParamLimits

0xcb6e,	// (0x000847f9) cmail_ddmenu_btn01_pane_ParamLimits

0xcb6e,	// (0x000847f9) cmail_ddmenu_btn01_pane

0xcb8b,	// (0x00084816) cmail_ddmenu_btn02_pane_ParamLimits

0xcb8b,	// (0x00084816) cmail_ddmenu_btn02_pane

0xcba9,	// (0x00084834) cmail_ddmenu_btn03_pane_ParamLimits

0xcba9,	// (0x00084834) cmail_ddmenu_btn03_pane

0xcbd7,	// (0x00084862) main_sp_fs_ctrlbar_pane_ParamLimits

0xcbf3,	// (0x0008487e) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0xcfed,	// (0x00084c78) list_cmail_body_pane_ParamLimits

0x3c51,	// (0x0007b8dc) bg_button_pane_cp12

0x3c5a,	// (0x0007b8e5) list_single_cmail_header_detail_pane_g3_ParamLimits

0x3c5a,	// (0x0007b8e5) list_single_cmail_header_detail_pane_g3

0xd09f,	// (0x00084d2a) list_single_cmail_header_detail_pane_t2_ParamLimits

0xd09f,	// (0x00084d2a) list_single_cmail_header_detail_pane_t2

0x0001,

0xfde9,	// (0x00087a74) list_single_cmail_header_detail_pane_t_ParamLimits

0xfde9,	// (0x00087a74) list_single_cmail_header_detail_pane_t

0x3d86,	// (0x0007ba11) phacti_term_pane_t2_ParamLimits

0x3d86,	// (0x0007ba11) phacti_term_pane_t2

0x0001,

0xfdf3,	// (0x00087a7e) phacti_term_pane_t_ParamLimits

0xfdf3,	// (0x00087a7e) phacti_term_pane_t

0x4020,	// (0x0007bcab) aid_size_list_single_double

0xd3ea,	// (0x00085075) popup_ezdial_listscroll_window

0xd40b,	// (0x00085096) popup_number_entry_window_cp01

0x1890,	// (0x0007951b) bg_popup_call_pane_cp09

0x402c,	// (0x0007bcb7) ezdial_list_pane

0x4034,	// (0x0007bcbf) scroll_pane_cp23

0xe876,	// (0x00086501) bg_button_pane_cp028_ParamLimits

0xe876,	// (0x00086501) bg_button_pane_cp028

0xd419,	// (0x000850a4) cmail_ddmenu_btn01_pane_g1_ParamLimits

0xd419,	// (0x000850a4) cmail_ddmenu_btn01_pane_g1

0xd42b,	// (0x000850b6) cmail_ddmenu_btn01_pane_g2_ParamLimits

0xd42b,	// (0x000850b6) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfe69,	// (0x00087af4) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfe69,	// (0x00087af4) cmail_ddmenu_btn01_pane_g

0x403c,	// (0x0007bcc7) cmail_ddmenu_btn01_pane_t1_ParamLimits

0x403c,	// (0x0007bcc7) cmail_ddmenu_btn01_pane_t1

0xe63c,	// (0x000862c7) bg_button_pane_cp029_ParamLimits

0xe63c,	// (0x000862c7) bg_button_pane_cp029

0xd42b,	// (0x000850b6) cmail_ddmenu_btn02_pane_g1_ParamLimits

0xd42b,	// (0x000850b6) cmail_ddmenu_btn02_pane_g1

0xd443,	// (0x000850ce) cmail_ddmenu_btn02_pane_t1_ParamLimits

0xd443,	// (0x000850ce) cmail_ddmenu_btn02_pane_t1

0x26df,	// (0x0007a36a) bg_button_pane_cp031_ParamLimits

0x26df,	// (0x0007a36a) bg_button_pane_cp031

0xd42b,	// (0x000850b6) cmail_ddmenu_btn03_pane_g1_ParamLimits

0xd42b,	// (0x000850b6) cmail_ddmenu_btn03_pane_g1

0xd443,	// (0x000850ce) cmail_ddmenu_btn03_pane_t1_ParamLimits

0xd443,	// (0x000850ce) cmail_ddmenu_btn03_pane_t1

0xa8b6,	// (0x00082541) cell_dialer2_keypad_pane_t1_ParamLimits

0xa8d0,	// (0x0008255b) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0xa8d0,	// (0x0008255b) cell_dialer2_keypad_pane_t1_copy1

0xc4e5,	// (0x00084170) ncimui_group_button_pane

0xe64a,	// (0x000862d5) main_sp_fs_calendar_pane_ParamLimits

0xd011,	// (0x00084c9c) list_single_cmail_header_caption_pane_ParamLimits

0x3dd1,	// (0x0007ba5c) aid_recal_txt_sm_pane

0xdd39,	// (0x000859c4) mian_recal_day_pane

0x3e10,	// (0x0007ba9b) popup_sp_fs_cale_preview_window_ParamLimits

0xdd39,	// (0x000859c4) list_recal_day_pane

0x4073,	// (0x0007bcfe) list_single_recal_day_pane_ParamLimits

0x4073,	// (0x0007bcfe) list_single_recal_day_pane

0x4085,	// (0x0007bd10) list_single_recal_day_pane_g1_ParamLimits

0x4085,	// (0x0007bd10) list_single_recal_day_pane_g1

0x4091,	// (0x0007bd1c) list_single_recal_day_pane_g2_ParamLimits

0x4091,	// (0x0007bd1c) list_single_recal_day_pane_g2

0x40a0,	// (0x0007bd2b) list_single_recal_day_pane_g3_ParamLimits

0x40a0,	// (0x0007bd2b) list_single_recal_day_pane_g3

0xd467,	// (0x000850f2) list_single_recal_day_pane_g4_ParamLimits

0xd467,	// (0x000850f2) list_single_recal_day_pane_g4

0x40ac,	// (0x0007bd37) list_single_recal_day_pane_g5_ParamLimits

0x40ac,	// (0x0007bd37) list_single_recal_day_pane_g5

0x40bb,	// (0x0007bd46) list_single_recal_day_pane_g6_ParamLimits

0x40bb,	// (0x0007bd46) list_single_recal_day_pane_g6

0x0005,

0xfe78,	// (0x00087b03) list_single_recal_day_pane_g_ParamLimits

0xfe78,	// (0x00087b03) list_single_recal_day_pane_g

0x40c7,	// (0x0007bd52) list_single_recal_day_pane_t1

0x40d5,	// (0x0007bd60) list_single_recal_day_pane_t2

0x0001,

0xfe85,	// (0x00087b10) list_single_recal_day_pane_t

0xd47a,	// (0x00085105) ncimui_query_button_pane_ParamLimits

0xd47a,	// (0x00085105) ncimui_query_button_pane

0xd48a,	// (0x00085115) ncimui_query_button_pane_t1_ParamLimits

0xd48a,	// (0x00085115) ncimui_query_button_pane_t1

0x40e3,	// (0x0007bd6e) ncimui_query_button_pane_t2_ParamLimits

0x40e3,	// (0x0007bd6e) ncimui_query_button_pane_t2

0x0001,

0xfe8a,	// (0x00087b15) ncimui_query_button_pane_t_ParamLimits

0xfe8a,	// (0x00087b15) ncimui_query_button_pane_t

0xd49d,	// (0x00085128) query_button_pane_ParamLimits

0xd49d,	// (0x00085128) query_button_pane

0xdd39,	// (0x000859c4) bg_button_pane_cp0028

0x40f6,	// (0x0007bd81) query_button_pane_t1

0x8cfb,	// (0x00080986) main_tport_pane_ParamLimits

0xcf1a,	// (0x00084ba5) bg_popup_window_pane_cp01_ParamLimits

0xcf1a,	// (0x00084ba5) bg_popup_window_pane_cp01

0xcf27,	// (0x00084bb2) heading_pane_cp08_ParamLimits

0xcf27,	// (0x00084bb2) heading_pane_cp08

0xcf35,	// (0x00084bc0) heading_pane_cp07_ParamLimits

0xcf35,	// (0x00084bc0) heading_pane_cp07

0xcf8c,	// (0x00084c17) cell_tport_appsw_pane_g2

0x0002,

0xfdd6,	// (0x00087a61) cell_tport_appsw_pane_g

0x7cc9,	// (0x0007f954) input_candi_list_open_g1

0x12db,	// (0x00078f66) list_cale_time_pane_g6_ParamLimits

0x12db,	// (0x00078f66) list_cale_time_pane_g6

0x9739,	// (0x000813c4) aid_size_touch_calib_1_ParamLimits

0x9739,	// (0x000813c4) aid_size_touch_calib_1

0x9745,	// (0x000813d0) aid_size_touch_calib_2_ParamLimits

0x9745,	// (0x000813d0) aid_size_touch_calib_2

0x9753,	// (0x000813de) aid_size_touch_calib_3_ParamLimits

0x9753,	// (0x000813de) aid_size_touch_calib_3

0x9763,	// (0x000813ee) aid_size_touch_calib_4_ParamLimits

0x9763,	// (0x000813ee) aid_size_touch_calib_4

0x9771,	// (0x000813fc) main_touch_calib_button_group_pane_ParamLimits

0x9771,	// (0x000813fc) main_touch_calib_button_group_pane

0x977f,	// (0x0008140a) main_touch_calib_pane_g1_ParamLimits

0x978b,	// (0x00081416) main_touch_calib_pane_g2_ParamLimits

0x9797,	// (0x00081422) main_touch_calib_pane_g3_ParamLimits

0x97a3,	// (0x0008142e) main_touch_calib_pane_g4_ParamLimits

0xf7b8,	// (0x00087443) main_touch_calib_pane_g_ParamLimits

0x97af,	// (0x0008143a) main_touch_calib_pane_t1_ParamLimits

0x97c6,	// (0x00081451) main_touch_calib_pane_t2_ParamLimits

0x97dd,	// (0x00081468) main_touch_calib_pane_t3_ParamLimits

0x97f1,	// (0x0008147c) main_touch_calib_pane_t4_ParamLimits

0x9805,	// (0x00081490) main_touch_calib_pane_t5_ParamLimits

0xf7c1,	// (0x0008744c) main_touch_calib_pane_t_ParamLimits

0xee00,	// (0x00086a8b) list_single_fp_cale_pane_g3_ParamLimits

0xee00,	// (0x00086a8b) list_single_fp_cale_pane_g3

0xacf0,	// (0x0008297b) bg_button_pane_cp012_ParamLimits

0xacf0,	// (0x0008297b) bg_vkb2_func_pane_cp03_ParamLimits

0xb6c6,	// (0x00083351) cell_vitu2_function_top_pane_g1_ParamLimits

0xacf0,	// (0x0008297b) bg_vkb2_func_pane_cp04_ParamLimits

0xc496,	// (0x00084121) main_ncimui_button_group_pane_ParamLimits

0xc496,	// (0x00084121) main_ncimui_button_group_pane

0xc4d3,	// (0x0008415e) main_ncimui_pane_t3_ParamLimits

0xc4d3,	// (0x0008415e) main_ncimui_pane_t3

0x3d34,	// (0x0007b9bf) phacti_button_group_pane

0x4020,	// (0x0007bcab) aid_size_list_single_double_ParamLimits

0xd3ea,	// (0x00085075) popup_ezdial_listscroll_window_ParamLimits

0xd40b,	// (0x00085096) popup_number_entry_window_cp01_ParamLimits

0xd4aa,	// (0x00085135) phacti_button_pane_ParamLimits

0xd4aa,	// (0x00085135) phacti_button_pane

0xdd39,	// (0x000859c4) bg_button_pane_cp14

0x4104,	// (0x0007bd8f) phacti_button_pane_t1

0xd4bb,	// (0x00085146) main_touch_calib_button_pane_ParamLimits

0xd4bb,	// (0x00085146) main_touch_calib_button_pane

0x0b22,	// (0x000787ad) bg_button_pane_cp18_ParamLimits

0x0b22,	// (0x000787ad) bg_button_pane_cp18

0x4112,	// (0x0007bd9d) main_touch_calib_button_pane_t1_ParamLimits

0x4112,	// (0x0007bd9d) main_touch_calib_button_pane_t1

0x4128,	// (0x0007bdb3) main_touch_calib_button_pane_t2_ParamLimits

0x4128,	// (0x0007bdb3) main_touch_calib_button_pane_t2

0x0001,

0xfe8f,	// (0x00087b1a) main_touch_calib_button_pane_t_ParamLimits

0xfe8f,	// (0x00087b1a) main_touch_calib_button_pane_t

0xdd39,	// (0x000859c4) cell_ncimui_button_pane

0xdd39,	// (0x000859c4) bg_button_pane_cp032

0x4146,	// (0x0007bdd1) cell_ncimui_button_pane_t1

0xa92c,	// (0x000825b7) image3_infobar_pane_ParamLimits

0xa92c,	// (0x000825b7) image3_infobar_pane

0xc80f,	// (0x0008449a) fs_bigclock_status_pane_ParamLimits

0xc80f,	// (0x0008449a) fs_bigclock_status_pane

0xc81c,	// (0x000844a7) main_fs_bigclock_clock_pane_ParamLimits

0xc81c,	// (0x000844a7) main_fs_bigclock_clock_pane

0xc830,	// (0x000844bb) main_fs_bigclock_indi_pane_ParamLimits

0xc830,	// (0x000844bb) main_fs_bigclock_indi_pane

0xc85d,	// (0x000844e8) main_fs_bigclock_swipe_pane_ParamLimits

0xc85d,	// (0x000844e8) main_fs_bigclock_swipe_pane

0xdd39,	// (0x000859c4) main_fs_clock_dumped_data

0x3651,	// (0x0007b2dc) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0x3651,	// (0x0007b2dc) list_single_fs_bigclock_indicator_pane_g1

0x366f,	// (0x0007b2fa) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0x366f,	// (0x0007b2fa) list_single_fs_bigclock_indicator_pane_g2

0x3689,	// (0x0007b314) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0x3689,	// (0x0007b314) list_single_fs_bigclock_indicator_pane_g3

0x36a3,	// (0x0007b32e) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0x36a3,	// (0x0007b32e) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfcc2,	// (0x0008794d) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfcc2,	// (0x0008794d) list_single_fs_bigclock_indicator_pane_g

0x36c9,	// (0x0007b354) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0x36c9,	// (0x0007b354) list_single_fs_bigclock_indicator_pane_t1

0x36f1,	// (0x0007b37c) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0x36f1,	// (0x0007b37c) list_single_fs_bigclock_indicator_pane_t2

0x3719,	// (0x0007b3a4) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0x3719,	// (0x0007b3a4) list_single_fs_bigclock_indicator_pane_t3

0x3741,	// (0x0007b3cc) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0x3741,	// (0x0007b3cc) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfccd,	// (0x00087958) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfccd,	// (0x00087958) list_single_fs_bigclock_indicator_pane_t

0x4154,	// (0x0007bddf) image3_infobar_fav_pane_ParamLimits

0x4154,	// (0x0007bddf) image3_infobar_fav_pane

0x4164,	// (0x0007bdef) image3_infobar_loc_pane_ParamLimits

0x4164,	// (0x0007bdef) image3_infobar_loc_pane

0x4178,	// (0x0007be03) image3_infobar_time_pane_ParamLimits

0x4178,	// (0x0007be03) image3_infobar_time_pane

0xea93,	// (0x0008671e) image3_infobar_time_pane_g1

0x4188,	// (0x0007be13) image3_infobar_time_pane_t1

0xea93,	// (0x0008671e) image3_infobar_loc_pane_g1

0x4196,	// (0x0007be21) image3_infobar_loc_pane_g2

0x0001,

0xfe94,	// (0x00087b1f) image3_infobar_loc_pane_g

0x419e,	// (0x0007be29) image3_infobar_loc_pane_t1

0xea93,	// (0x0008671e) image3_infobar_fav_pane_g1

0x41ac,	// (0x0007be37) image3_infobar_fav_pane_g2

0x0001,

0xfe99,	// (0x00087b24) image3_infobar_fav_pane_g

0x41b4,	// (0x0007be3f) fs_bigclock_status_battery_pane

0x41bd,	// (0x0007be48) fs_bigclock_status_signal_pane

0x41c6,	// (0x0007be51) fs_bigclock_status_title_pane

0x41cf,	// (0x0007be5a) fs_bigclock_status_signal_pane_g1

0x41d8,	// (0x0007be63) fs_bigclock_status_signal_pane_g2

0x0001,

0xfe9e,	// (0x00087b29) fs_bigclock_status_signal_pane_g

0x41e0,	// (0x0007be6b) fs_bigclock_status_battery_pane_g1

0x41e9,	// (0x0007be74) fs_bigclock_status_battery_pane_g2

0x0001,

0xfea3,	// (0x00087b2e) fs_bigclock_status_battery_pane_g

0x41f1,	// (0x0007be7c) fs_bigclock_status_title_pane_t1

0xea93,	// (0x0008671e) main_fs_bigclock_clock_pane_g1

0x41ff,	// (0x0007be8a) main_fs_bigclock_clock_pane_g2

0x41ff,	// (0x0007be8a) main_fs_bigclock_clock_pane_g3

0x41ff,	// (0x0007be8a) main_fs_bigclock_clock_pane_g4

0x0003,

0xfea8,	// (0x00087b33) main_fs_bigclock_clock_pane_g

0x4207,	// (0x0007be92) main_fs_bigclock_clock_pane_t1

0x4215,	// (0x0007bea0) main_fs_bigclock_clock_pane_t2

0x0001,

0xfeb1,	// (0x00087b3c) main_fs_bigclock_clock_pane_t

0x4224,	// (0x0007beaf) list_single_fs_bigclock_indicator_pane_ParamLimits

0x4224,	// (0x0007beaf) list_single_fs_bigclock_indicator_pane

0xd4cb,	// (0x00085156) list_single_fs_bigclock_pane_ParamLimits

0xd4cb,	// (0x00085156) list_single_fs_bigclock_pane

0x423e,	// (0x0007bec9) main_fs_bigclock_indicator_pane_t1

0x424d,	// (0x0007bed8) list_single_fs_bigclock_pane_g1

0x4255,	// (0x0007bee0) list_single_fs_bigclock_pane_t1

0xea93,	// (0x0008671e) main_fs_bigclock_swipe_pane_g1

0x4293,	// (0x0007bf1e) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfec2,	// (0x00087b4d) main_fs_bigclock_swipe_pane_g

0x429b,	// (0x0007bf26) main_fs_bigclock_swipe_pane_t1_ParamLimits

0x429b,	// (0x0007bf26) main_fs_bigclock_swipe_pane_t1

0x74a4,	// (0x0007f12f) call_type_pane_ParamLimits

0xdd39,	// (0x000859c4) main_btmg_pane

0x3f09,	// (0x0007bb94) list_single_cale_mrui_row_pane_g2_ParamLimits

0x3f09,	// (0x0007bb94) list_single_cale_mrui_row_pane_g2

0x0001,

0xfe35,	// (0x00087ac0) list_single_cale_mrui_row_pane_g_ParamLimits

0xfe35,	// (0x00087ac0) list_single_cale_mrui_row_pane_g

0x405a,	// (0x0007bce5) list_recal_vselct_arw_lo_pane

0x4062,	// (0x0007bced) list_recal_vselct_arw_up_pane

0x406a,	// (0x0007bcf5) list_recal_vselct_pane

0x42b8,	// (0x0007bf43) btmg_button_pane

0xd52f,	// (0x000851ba) main_btmg_pane_g1

0xdd39,	// (0x000859c4) bg_button_pane_cp044

0x42c2,	// (0x0007bf4d) btmg_button_pane_t1

0xe634,	// (0x000862bf) aid_listscroll_gen

0xe64a,	// (0x000862d5) main_cntbar_detail_pane

0x3c32,	// (0x0007b8bd) list_cmail_folder_pane

0x3c42,	// (0x0007b8cd) sp_fs_scroll_pane_cp03_ParamLimits

0xd537,	// (0x000851c2) list_single_fs_dyc_pane_cp01_ParamLimits

0xd537,	// (0x000851c2) list_single_fs_dyc_pane_cp01

0xd563,	// (0x000851ee) aid_size_cmail_indent

0x42d0,	// (0x0007bf5b) list_single_dyc_row_pane_cp01

0xd58c,	// (0x00085217) cntbar_detail_list_pane_ParamLimits

0xd58c,	// (0x00085217) cntbar_detail_list_pane

0xd5c6,	// (0x00085251) main_cntbar_detail_cont_pane_ParamLimits

0xd5c6,	// (0x00085251) main_cntbar_detail_cont_pane

0x743e,	// (0x0007f0c9) scroll_pane_cp032_ParamLimits

0x743e,	// (0x0007f0c9) scroll_pane_cp032

0xd5d2,	// (0x0008525d) cntbar_detail_list_event_pane_ParamLimits

0xd5d2,	// (0x0008525d) cntbar_detail_list_event_pane

0xd598,	// (0x00085223) cntbar_detail_list_shct_pane

0x1136,	// (0x00078dc1) aid_list_gen

0xd5e6,	// (0x00085271) aid_scroll

0xd5ef,	// (0x0008527a) aid_size_touch_scroll_bar

0xf109,	// (0x00086d94) aid_list_double

0xd5f8,	// (0x00085283) aid_list_single

0xf11e,	// (0x00086da9) aid_list_single_lg

0x42d9,	// (0x0007bf64) aid_list_z_g_a_sm

0xd601,	// (0x0008528c) aid_list_z_g_d

0x42e1,	// (0x0007bf6c) aid_txt_z_prm

0xd609,	// (0x00085294) aid_txt_z_prm_cp01

0xd617,	// (0x000852a2) aid_txt_z_sec

0xd625,	// (0x000852b0) main_cntbar_detail_cont_pane_g1_ParamLimits

0xd625,	// (0x000852b0) main_cntbar_detail_cont_pane_g1

0xd632,	// (0x000852bd) main_cntbar_detail_cont_pane_g2_ParamLimits

0xd632,	// (0x000852bd) main_cntbar_detail_cont_pane_g2

0x0001,

0xfec7,	// (0x00087b52) main_cntbar_detail_cont_pane_g_ParamLimits

0xfec7,	// (0x00087b52) main_cntbar_detail_cont_pane_g

0xd63e,	// (0x000852c9) main_cntbar_detail_cont_pane_t1

0xd64c,	// (0x000852d7) main_cntbar_detail_cont_pane_t2

0xd65a,	// (0x000852e5) main_cntbar_detail_cont_pane_t3

0x0002,

0xfecc,	// (0x00087b57) main_cntbar_detail_cont_pane_t

0xd668,	// (0x000852f3) cell_cntbar_detail_list_shct_pane_ParamLimits

0xd668,	// (0x000852f3) cell_cntbar_detail_list_shct_pane

0xd67c,	// (0x00085307) cntbar_detail_list_shct_pane_g1

0xd685,	// (0x00085310) cntbar_detail_list_shct_pane_g2

0x0001,

0xfed3,	// (0x00087b5e) cntbar_detail_list_shct_pane_g

0xd68e,	// (0x00085319) cntbar_detail_list_event_pane_g1_ParamLimits

0xd68e,	// (0x00085319) cntbar_detail_list_event_pane_g1

0xd69a,	// (0x00085325) cntbar_detail_list_event_pane_g2_ParamLimits

0xd69a,	// (0x00085325) cntbar_detail_list_event_pane_g2

0x0005,

0xfed8,	// (0x00087b63) cntbar_detail_list_event_pane_g_ParamLimits

0xfed8,	// (0x00087b63) cntbar_detail_list_event_pane_g

0xd706,	// (0x00085391) cntbar_detail_list_event_pane_t1_ParamLimits

0xd706,	// (0x00085391) cntbar_detail_list_event_pane_t1

0xd71b,	// (0x000853a6) cntbar_detail_list_event_pane_t2_ParamLimits

0xd71b,	// (0x000853a6) cntbar_detail_list_event_pane_t2

0x0002,

0xfee5,	// (0x00087b70) cntbar_detail_list_event_pane_t_ParamLimits

0xfee5,	// (0x00087b70) cntbar_detail_list_event_pane_t

0xea93,	// (0x0008671e) cell_cntbar_detail_list_shct_pane_g1

0x781b,	// (0x0007f4a6) navi_pane_mv_g3

0xe64a,	// (0x000862d5) main_cntbar_detail_pane_ParamLimits

0xdd39,	// (0x000859c4) main_notif_wgt_pane

0xa608,	// (0x00082293) aid_tch_main_mp4_pane_g4

0xa813,	// (0x0008249e) popup_slider_window_cp02

0x4051,	// (0x0007bcdc) list_recal_day_event_pane

0xd56c,	// (0x000851f7) cntbar_detail_btn_pane_ParamLimits

0xd56c,	// (0x000851f7) cntbar_detail_btn_pane

0xd57c,	// (0x00085207) cntbar_detail_btn_pane_cp01_ParamLimits

0xd57c,	// (0x00085207) cntbar_detail_btn_pane_cp01

0xd598,	// (0x00085223) cntbar_detail_list_shct_pane_ParamLimits

0xd5a4,	// (0x0008522f) cntbar_detail_pane_g1_ParamLimits

0xd5a4,	// (0x0008522f) cntbar_detail_pane_g1

0xd5b0,	// (0x0008523b) cntbar_detail_pane_t1_ParamLimits

0xd5b0,	// (0x0008523b) cntbar_detail_pane_t1

0xd6a6,	// (0x00085331) cntbar_detail_list_event_pane_g3_ParamLimits

0xd6a6,	// (0x00085331) cntbar_detail_list_event_pane_g3

0xd6be,	// (0x00085349) cntbar_detail_list_event_pane_g4_ParamLimits

0xd6be,	// (0x00085349) cntbar_detail_list_event_pane_g4

0xd6d6,	// (0x00085361) cntbar_detail_list_event_pane_g5_ParamLimits

0xd6d6,	// (0x00085361) cntbar_detail_list_event_pane_g5

0xd6ee,	// (0x00085379) cntbar_detail_list_event_pane_g6_ParamLimits

0xd6ee,	// (0x00085379) cntbar_detail_list_event_pane_g6

0xd730,	// (0x000853bb) cntbar_detail_list_event_pane_t3_ParamLimits

0xd730,	// (0x000853bb) cntbar_detail_list_event_pane_t3

0xd742,	// (0x000853cd) popup_notif_wgt_window_ParamLimits

0xd742,	// (0x000853cd) popup_notif_wgt_window

0xd752,	// (0x000853dd) popup_submenu_window_cp01_ParamLimits

0xd752,	// (0x000853dd) popup_submenu_window_cp01

0x1890,	// (0x0007951b) bg_popup_window_pane_cp10

0xd760,	// (0x000853eb) listscroll_notif_wgt_pane

0xd76a,	// (0x000853f5) list_notif_wgt_window

0xd773,	// (0x000853fe) scroll_pane_cp033

0xd77c,	// (0x00085407) list_notif_wgt_row_pane_ParamLimits

0xd77c,	// (0x00085407) list_notif_wgt_row_pane

0xd790,	// (0x0008541b) aid_size_list_notif_wgt_del

0xd799,	// (0x00085424) list_notif_wgt_row_pane_g1

0xd7a1,	// (0x0008542c) list_notif_wgt_row_pane_g2

0xd7a9,	// (0x00085434) list_notif_wgt_row_pane_g3

0x0002,

0xfeec,	// (0x00087b77) list_notif_wgt_row_pane_g

0xd7b2,	// (0x0008543d) list_notif_wgt_row_pane_t1

0xd7c0,	// (0x0008544b) list_notif_wgt_row_pane_t2

0xd7ce,	// (0x00085459) list_notif_wgt_row_pane_t3

0x0002,

0xfef3,	// (0x00087b7e) list_notif_wgt_row_pane_t

0x29de,	// (0x0007a669) list_recal_day_event_pane_g1

0xd7dc,	// (0x00085467) list_recal_day_event_pane_t1

0xdd39,	// (0x000859c4) bg_button_pane_cp045

0xd7eb,	// (0x00085476) cntbar_detail_btn_pane_t1

0xe63c,	// (0x000862c7) main_callh_pane_ParamLimits

0xe63c,	// (0x000862c7) main_callh_pane

0xdd39,	// (0x000859c4) main_coverflow0_pane

0xdd39,	// (0x000859c4) main_wgtman_pane

0xc875,	// (0x00084500) main_fs_bigclock_unlock_btn_pane_ParamLimits

0xc875,	// (0x00084500) main_fs_bigclock_unlock_btn_pane

0xcf7c,	// (0x00084c07) bg_button_pane_cp16

0xcf94,	// (0x00084c1f) cell_tport_appsw_pane_g3

0xd7f9,	// (0x00085484) cf0_flow_pane_ParamLimits

0xd7f9,	// (0x00085484) cf0_flow_pane

0xd808,	// (0x00085493) listscroll_cf0_pane

0xd811,	// (0x0008549c) main_cf0_pane_g1

0xd81b,	// (0x000854a6) main_cf0_pane_t1_ParamLimits

0xd81b,	// (0x000854a6) main_cf0_pane_t1

0xd82f,	// (0x000854ba) main_cf0_pane_t2_ParamLimits

0xd82f,	// (0x000854ba) main_cf0_pane_t2

0x0001,

0xfefa,	// (0x00087b85) main_cf0_pane_t_ParamLimits

0xfefa,	// (0x00087b85) main_cf0_pane_t

0xd843,	// (0x000854ce) scroll_pane_cp11

0xd84e,	// (0x000854d9) cf0_flow_pane_g1

0xd856,	// (0x000854e1) cf0_flow_pane_g2

0x0001,

0xfeff,	// (0x00087b8a) cf0_flow_pane_g

0xd85e,	// (0x000854e9) cf0_flow_pane_t1

0xdd39,	// (0x000859c4) main_call6_pane

0xdd39,	// (0x000859c4) main_calllock_pane

0xd86c,	// (0x000854f7) call6_btn_grp_pane_ParamLimits

0xd86c,	// (0x000854f7) call6_btn_grp_pane

0xd87b,	// (0x00085506) call6_pane_g1_ParamLimits

0xd87b,	// (0x00085506) call6_pane_g1

0xd88a,	// (0x00085515) popup_call6_1st_window_ParamLimits

0xd88a,	// (0x00085515) popup_call6_1st_window

0xd898,	// (0x00085523) popup_call6_2nd_window_ParamLimits

0xd898,	// (0x00085523) popup_call6_2nd_window

0xd8a6,	// (0x00085531) cell_call6_btn_pane_ParamLimits

0xd8a6,	// (0x00085531) cell_call6_btn_pane

0x1890,	// (0x0007951b) bg_popup_call2_in_pane_cp03

0xd8b5,	// (0x00085540) popup_call6_1st_window_g1

0xd8bd,	// (0x00085548) popup_call6_1st_window_g2

0xd8c5,	// (0x00085550) popup_call6_1st_window_g3

0x0002,

0xff04,	// (0x00087b8f) popup_call6_1st_window_g

0xd8cd,	// (0x00085558) popup_call6_1st_window_t1

0xd8dc,	// (0x00085567) popup_call6_1st_window_t2

0xd8ec,	// (0x00085577) popup_call6_1st_window_t3

0x0002,

0xff0b,	// (0x00087b96) popup_call6_1st_window_t

0x1890,	// (0x0007951b) bg_popup_call2_in_pane_cp04

0xd8b5,	// (0x00085540) popup_call6_2nd_window_g1

0xd8bd,	// (0x00085548) popup_call6_2nd_window_g2

0xd8c5,	// (0x00085550) popup_call6_2nd_window_g3

0x0002,

0xff04,	// (0x00087b8f) popup_call6_2nd_window_g

0xd8cd,	// (0x00085558) popup_call6_2nd_window_t1

0xdd39,	// (0x000859c4) bg_button_pane_cp15

0xd8fc,	// (0x00085587) cell_call6_btn_pane_g1

0xd905,	// (0x00085590) cell_call6_btn_pane_t1

0xd914,	// (0x0008559f) listscroll_wgtman_pane_ParamLimits

0xd914,	// (0x0008559f) listscroll_wgtman_pane

0xd923,	// (0x000855ae) wgtman_btn_pane_ParamLimits

0xd923,	// (0x000855ae) wgtman_btn_pane

0x1743,	// (0x000793ce) aid_scroll_copy1

0xd931,	// (0x000855bc) list_wgtman_pane

0xd93b,	// (0x000855c6) wgtman_btn_pane_g1_ParamLimits

0xd93b,	// (0x000855c6) wgtman_btn_pane_g1

0xd947,	// (0x000855d2) wgtman_btn_pane_t1_ParamLimits

0xd947,	// (0x000855d2) wgtman_btn_pane_t1

0xd959,	// (0x000855e4) wgtman_btn_pane_t2_ParamLimits

0xd959,	// (0x000855e4) wgtman_btn_pane_t2

0x0001,

0xff12,	// (0x00087b9d) wgtman_btn_pane_t_ParamLimits

0xff12,	// (0x00087b9d) wgtman_btn_pane_t

0xd96b,	// (0x000855f6) listrow_wgtman_pane_ParamLimits

0xd96b,	// (0x000855f6) listrow_wgtman_pane

0xd987,	// (0x00085612) listrow_wgtman_pane_g1

0xd990,	// (0x0008561b) listrow_wgtman_pane_g2

0x0001,

0xff17,	// (0x00087ba2) listrow_wgtman_pane_g

0xd99a,	// (0x00085625) listrow_wgtman_pane_t1

0xd9a8,	// (0x00085633) listrow_wgtman_pane_t2

0x0001,

0xff1c,	// (0x00087ba7) listrow_wgtman_pane_t

0xd9b6,	// (0x00085641) wait_bar_pane_cp09

0xd9be,	// (0x00085649) main_calllock_btn_pane

0xd9c8,	// (0x00085653) main_calllock_pane_g1

0xdd39,	// (0x000859c4) bg_button_pane_cp17

0xd9d3,	// (0x0008565e) main_calllock_btn_pane_g1

0xd9dc,	// (0x00085667) main_calllock_btn_pane_t1

0xdd39,	// (0x000859c4) main_dialer3_pane

0xdd39,	// (0x000859c4) main_fmrd2_pane

0xea93,	// (0x0008671e) main_fs_bigclock_unlock_btn_pane_g1

0xd9f3,	// (0x0008567e) main_fs_bigclock_unlock_btn_pane_t1

0xda01,	// (0x0008568c) area_fmrd2_info_pane_ParamLimits

0xda01,	// (0x0008568c) area_fmrd2_info_pane

0xda10,	// (0x0008569b) area_fmrd2_visual_pane_ParamLimits

0xda10,	// (0x0008569b) area_fmrd2_visual_pane

0xda1e,	// (0x000856a9) fmrd2_indi_pane_ParamLimits

0xda1e,	// (0x000856a9) fmrd2_indi_pane

0xda2b,	// (0x000856b6) area_fmrd2_visual_pane_g1

0xda33,	// (0x000856be) area_fmrd2_visual_pane_t1

0xda43,	// (0x000856ce) area_fmrd2_visual_pane_t2

0xda53,	// (0x000856de) area_fmrd2_visual_pane_t3

0x0002,

0xff26,	// (0x00087bb1) area_fmrd2_visual_pane_t

0xda63,	// (0x000856ee) area_fmrd2_info_pane_g1

0xda6b,	// (0x000856f6) area_fmrd2_info_pane_t1

0xda7b,	// (0x00085706) area_fmrd2_info_pane_t2

0xda8b,	// (0x00085716) area_fmrd2_info_pane_t3

0xda9b,	// (0x00085726) area_fmrd2_info_pane_t4

0x0003,

0xff2d,	// (0x00087bb8) area_fmrd2_info_pane_t

0xdaa9,	// (0x00085734) fmrd2_indi_pane_t1

0xdab9,	// (0x00085744) fmrd2_indi_pane_t2

0xdac9,	// (0x00085754) fmrd2_indi_pane_t3

0x0002,

0xff36,	// (0x00087bc1) fmrd2_indi_pane_t

0x36b2,	// (0x0007b33d) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0x36b2,	// (0x0007b33d) list_single_fs_bigclock_indicator_pane_g5

0x3756,	// (0x0007b3e1) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0x3756,	// (0x0007b3e1) list_single_fs_bigclock_indicator_pane_t5

0xd15f,	// (0x00084dea) aid_cell_bcale_month_pane_ParamLimits

0xd15f,	// (0x00084dea) aid_cell_bcale_month_pane

0xd16b,	// (0x00084df6) bcale_month_pane_ParamLimits

0xd16b,	// (0x00084df6) bcale_month_pane

0xd17b,	// (0x00084e06) bcale_preview_pane_ParamLimits

0xd17b,	// (0x00084e06) bcale_preview_pane

0x4255,	// (0x0007bee0) list_single_fs_bigclock_pane_t1_ParamLimits

0x426f,	// (0x0007befa) list_single_fs_bigclock_pane_t2_ParamLimits

0x426f,	// (0x0007befa) list_single_fs_bigclock_pane_t2

0x0001,

0xfebd,	// (0x00087b48) list_single_fs_bigclock_pane_t_ParamLimits

0xfebd,	// (0x00087b48) list_single_fs_bigclock_pane_t

0xd9eb,	// (0x00085676) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xff21,	// (0x00087bac) main_fs_bigclock_unlock_btn_pane_g

0xdad7,	// (0x00085762) aid_dia3_key_size_ParamLimits

0xdad7,	// (0x00085762) aid_dia3_key_size

0xdae3,	// (0x0008576e) aid_dia3_listrow_size_ParamLimits

0xdae3,	// (0x0008576e) aid_dia3_listrow_size

0xdaf1,	// (0x0008577c) dia3_keypad_fun_pane_ParamLimits

0xdaf1,	// (0x0008577c) dia3_keypad_fun_pane

0xdb01,	// (0x0008578c) dia3_keypad_num_pane_ParamLimits

0xdb01,	// (0x0008578c) dia3_keypad_num_pane

0xdb11,	// (0x0008579c) dia3_listscroll_pane_ParamLimits

0xdb11,	// (0x0008579c) dia3_listscroll_pane

0xdb1f,	// (0x000857aa) dia3_numentry_pane_ParamLimits

0xdb1f,	// (0x000857aa) dia3_numentry_pane

0xdb2d,	// (0x000857b8) dia3_list_pane

0xdb38,	// (0x000857c3) scroll_pane_cp12

0xdd39,	// (0x000859c4) bg_dia3_numentry_pane

0xdb43,	// (0x000857ce) dia3_numentry_pane_t1

0xdb52,	// (0x000857dd) cell_dia3_key_num_pane

0xdb5a,	// (0x000857e5) cell_dia3_key0_fun_pane_ParamLimits

0xdb5a,	// (0x000857e5) cell_dia3_key0_fun_pane

0xdb67,	// (0x000857f2) cell_dia3_key1_fun_pane_ParamLimits

0xdb67,	// (0x000857f2) cell_dia3_key1_fun_pane

0xdb74,	// (0x000857ff) dia3_listrow_pane

0x33d0,	// (0x0007b05b) bg_dia3_numentry_pane_g1

0xdd39,	// (0x000859c4) bg_button_pane_cp21

0xdb7d,	// (0x00085808) cell_dia3_key_num_pane_t1

0xdb8b,	// (0x00085816) cell_dia3_key_num_pane_t2

0xdb9a,	// (0x00085825) cell_dia3_key_num_pane_t3

0xdba9,	// (0x00085834) cell_dia3_key_num_pane_t4

0x0003,

0xff3d,	// (0x00087bc8) cell_dia3_key_num_pane_t

0xdd39,	// (0x000859c4) bg_button_pane_cp19

0xdbb8,	// (0x00085843) cell_dia3_key0_fun_pane_g1

0xdd39,	// (0x000859c4) bg_button_pane_cp20

0xdbc0,	// (0x0008584b) cell_dia3_key1_fun_pane_g1

0xdbc8,	// (0x00085853) area_left_week_number_pane

0xdbd1,	// (0x0008585c) area_top_day_name_pane

0xdbda,	// (0x00085865) frame_month_view_pane

0xdbe4,	// (0x0008586f) grid_month_view_pane

0xdbee,	// (0x00085879) cell_top_day_name_pane_ParamLimits

0xdbee,	// (0x00085879) cell_top_day_name_pane

0xdc08,	// (0x00085893) cell_area_left_week_number_pane_ParamLimits

0xdc08,	// (0x00085893) cell_area_left_week_number_pane

0xdc1c,	// (0x000858a7) cell_month_view_pane_ParamLimits

0xdc1c,	// (0x000858a7) cell_month_view_pane

0xdc39,	// (0x000858c4) frm_month_g1

0xdc42,	// (0x000858cd) frm_month_g2

0xdc4c,	// (0x000858d7) frm_month_g3

0xdc56,	// (0x000858e1) frm_month_g4

0xdc60,	// (0x000858eb) frm_month_g5

0xdc6a,	// (0x000858f5) frm_month_g6

0xdc74,	// (0x000858ff) frm_month_g7

0xdc7e,	// (0x00085909) frm_month_g8

0xdc87,	// (0x00085912) frm_month_g9

0xdc90,	// (0x0008591b) frm_month_g10

0xdc99,	// (0x00085924) frm_month_g11

0xdca2,	// (0x0008592d) frm_month_g12

0xdcab,	// (0x00085936) frm_month_g13

0xdcb4,	// (0x0008593f) frm_month_g14

0xdcbd,	// (0x00085948) frm_month_g15

0xdcc8,	// (0x00085953) frm_month_g16

0x000f,

0xff46,	// (0x00087bd1) frm_month_g

0xdcd3,	// (0x0008595e) cell_top_day_name_pane_t1

0xdce2,	// (0x0008596d) cell_area_left_week_number_pane_g1

0xdcd3,	// (0x0008595e) cell_area_left_week_number_pane_t1

0xea93,	// (0x0008671e) cell_month_view_pane_g1

0xdcea,	// (0x00085975) cell_month_view_pane_t1

0xdd39,	// (0x000859c4) main_fps_pane

0x3985,	// (0x0007b610) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0x3985,	// (0x0007b610) cmail_ddmenu_btn02_pane_cp1

0x39a1,	// (0x0007b62c) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0x39a1,	// (0x0007b62c) cmail_ddmenu_btn02_pane_cp2

0xd437,	// (0x000850c2) cmail_ddmenu_btn02_pane_g2_ParamLimits

0xd437,	// (0x000850c2) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfe6e,	// (0x00087af9) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfe6e,	// (0x00087af9) cmail_ddmenu_btn02_pane_g

0xd455,	// (0x000850e0) cmail_ddmenu_btn02_pane_t2_ParamLimits

0xd455,	// (0x000850e0) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfe73,	// (0x00087afe) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfe73,	// (0x00087afe) cmail_ddmenu_btn02_pane_t

0xdcf9,	// (0x00085984) fps_text_pane_ParamLimits

0xdcf9,	// (0x00085984) fps_text_pane

0xdd06,	// (0x00085991) main_fps_pane_g1_ParamLimits

0xdd06,	// (0x00085991) main_fps_pane_g1

0xdd14,	// (0x0008599f) wait_bar_pane_cp010_ParamLimits

0xdd14,	// (0x0008599f) wait_bar_pane_cp010

0xdd20,	// (0x000859ab) fps_text_pane_t1_ParamLimits

0xdd20,	// (0x000859ab) fps_text_pane_t1
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

} // end of namespace AknLayoutScalable_Abrw_pnp4_apps_nhd4_prt_tch_Large
