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

#include "aknlayoutscalable_elaf_pvp4_apps_vga4_prt_tch_large.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pvp4_apps_vga4_prt_tch[]; }

namespace AknLayoutScalable_Elaf_pvp4_apps_vga4_prt_tch_Large
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pvp4_apps_vga4_prt_tch + 0x0007d5ea };

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
0x1e5c,	// (0x0007f446) Screen

0x1e68,	// (0x0007f452) application_window

0x1ea8,	// (0x0007f492) area_bottom_pane_ParamLimits

0x1ea8,	// (0x0007f492) area_bottom_pane

0x1edd,	// (0x0007f4c7) area_top_pane_ParamLimits

0x1edd,	// (0x0007f4c7) area_top_pane

0xa1ad,	// (0x00087797) call_video_uplink_pane_ParamLimits

0xa1ad,	// (0x00087797) call_video_uplink_pane

0x1f6c,	// (0x0007f556) main_pane_ParamLimits

0x1f6c,	// (0x0007f556) main_pane

0xc886,	// (0x00089e70) context_pane

0x5626,	// (0x00082c10) navi_pane

0x564a,	// (0x00082c34) popup_cale_events_window_ParamLimits

0x564a,	// (0x00082c34) popup_cale_events_window

0xc899,	// (0x00089e83) popup_mup_playback_window

0x5662,	// (0x00082c4c) signal_pane

0xa92c,	// (0x00087f16) main_browser_pane

0xaae2,	// (0x000880cc) main_burst_pane

0x54d8,	// (0x00082ac2) main_calc_pane

0xc829,	// (0x00089e13) main_cale_day_pane

0x2686,	// (0x0007fc70) main_cale_month_pane

0xc829,	// (0x00089e13) main_cale_week_pane

0xaae2,	// (0x000880cc) main_call_pane

0xa5de,	// (0x00087bc8) main_call_poc_pane

0xaae2,	// (0x000880cc) main_camera_pane

0xaae2,	// (0x000880cc) main_chi_dic_pane

0xb2ba,	// (0x000888a4) main_clock_pane

0xa5de,	// (0x00087bc8) main_fmradio_pane

0xaae2,	// (0x000880cc) main_graph_messa_pane

0xa5de,	// (0x00087bc8) main_help_pane

0xa92c,	// (0x00087f16) main_im_pane

0xa839,	// (0x00087e23) main_image_pane_ParamLimits

0xa839,	// (0x00087e23) main_image_pane

0xa5de,	// (0x00087bc8) main_location2_pane

0xaae2,	// (0x000880cc) main_location_pane

0xa839,	// (0x00087e23) main_messa_pane

0xa5de,	// (0x00087bc8) main_mp2_pane

0xaae2,	// (0x000880cc) main_mp_pane

0xa5de,	// (0x00087bc8) main_msg_pane

0xa5de,	// (0x00087bc8) main_mup_eq_pane

0xa5de,	// (0x00087bc8) main_mup_pane

0xa92c,	// (0x00087f16) main_notes_pane

0xa5de,	// (0x00087bc8) main_pec_pane

0xa5de,	// (0x00087bc8) main_phob_pane

0xa5de,	// (0x00087bc8) main_pinb_pane

0xa5de,	// (0x00087bc8) main_postcard_pane

0xa5de,	// (0x00087bc8) main_qdial_pane

0xaae2,	// (0x000880cc) main_skin_pane

0xa5de,	// (0x00087bc8) main_smil2_pane

0xaae2,	// (0x000880cc) main_smil_pane

0xaae2,	// (0x000880cc) main_video_pane

0xaae2,	// (0x000880cc) main_video_tele_pane

0xa839,	// (0x00087e23) main_viewer_pane_ParamLimits

0xa839,	// (0x00087e23) main_viewer_pane

0xaae2,	// (0x000880cc) main_vorec_pane

0x5510,	// (0x00082afa) popup_blid_sat_info_window_ParamLimits

0x5510,	// (0x00082afa) popup_blid_sat_info_window

0x552a,	// (0x00082b14) popup_dyc_status_message_window_ParamLimits

0x552a,	// (0x00082b14) popup_dyc_status_message_window

0x553a,	// (0x00082b24) popup_grid_large_graphic_window_ParamLimits

0x553a,	// (0x00082b24) popup_grid_large_graphic_window

0x55b2,	// (0x00082b9c) popup_loc_request_window_ParamLimits

0x55b2,	// (0x00082b9c) popup_loc_request_window

0x55fa,	// (0x00082be4) popup_wml_address_window_ParamLimits

0x55fa,	// (0x00082be4) popup_wml_address_window

0x53b0,	// (0x0008299a) call_muted_g1

0x506f,	// (0x00082659) popup_call_audio_conf_window_ParamLimits

0x506f,	// (0x00082659) popup_call_audio_conf_window

0x53c0,	// (0x000829aa) popup_call_audio_first_window_ParamLimits

0x53c0,	// (0x000829aa) popup_call_audio_first_window

0x5400,	// (0x000829ea) popup_call_audio_in_window_ParamLimits

0x5400,	// (0x000829ea) popup_call_audio_in_window

0x5424,	// (0x00082a0e) popup_call_audio_out_window_ParamLimits

0x5424,	// (0x00082a0e) popup_call_audio_out_window

0x5446,	// (0x00082a30) popup_call_audio_second_window_ParamLimits

0x5446,	// (0x00082a30) popup_call_audio_second_window

0x5476,	// (0x00082a60) popup_call_audio_wait_window_ParamLimits

0x5476,	// (0x00082a60) popup_call_audio_wait_window

0x5497,	// (0x00082a81) popup_number_entry_window_ParamLimits

0x5497,	// (0x00082a81) popup_number_entry_window

0xa1cb,	// (0x000877b5) bg_popup_call_pane_cp05_ParamLimits

0xa1cb,	// (0x000877b5) bg_popup_call_pane_cp05

0xa1eb,	// (0x000877d5) popup_number_entry_window_t1

0xa1fe,	// (0x000877e8) popup_number_entry_window_t2

0xa210,	// (0x000877fa) popup_number_entry_window_t3

0x0003,

0xf0ca,	// (0x0008c6b4) popup_number_entry_window_t

0xa222,	// (0x0008780c) text_title_cp2

0xa235,	// (0x0008781f) bg_popup_call_pane_cp_ParamLimits

0xa235,	// (0x0008781f) bg_popup_call_pane_cp

0xa243,	// (0x0008782d) call_thumbnail_pane

0xa24b,	// (0x00087835) popup_call_audio_in_window_g1_ParamLimits

0xa24b,	// (0x00087835) popup_call_audio_in_window_g1

0xa257,	// (0x00087841) popup_call_audio_in_window_g2_ParamLimits

0xa257,	// (0x00087841) popup_call_audio_in_window_g2

0xa263,	// (0x0008784d) popup_call_audio_in_window_g3_ParamLimits

0xa263,	// (0x0008784d) popup_call_audio_in_window_g3

0x0002,

0xf0d3,	// (0x0008c6bd) popup_call_audio_in_window_g_ParamLimits

0xf0d3,	// (0x0008c6bd) popup_call_audio_in_window_g

0xa26f,	// (0x00087859) popup_call_audio_in_window_t1_ParamLimits

0xa26f,	// (0x00087859) popup_call_audio_in_window_t1

0xa28b,	// (0x00087875) popup_call_audio_in_window_t2_ParamLimits

0xa28b,	// (0x00087875) popup_call_audio_in_window_t2

0xa2a7,	// (0x00087891) popup_call_audio_in_window_t3_ParamLimits

0xa2a7,	// (0x00087891) popup_call_audio_in_window_t3

0x0002,

0xf0da,	// (0x0008c6c4) popup_call_audio_in_window_t_ParamLimits

0xf0da,	// (0x0008c6c4) popup_call_audio_in_window_t

0xa235,	// (0x0008781f) bg_popup_call_pane_cp01_ParamLimits

0xa235,	// (0x0008781f) bg_popup_call_pane_cp01

0xa243,	// (0x0008782d) call_thumbnail_pane_cp02

0xa2ba,	// (0x000878a4) call_type_pane_cp022

0xa2c2,	// (0x000878ac) popup_call_audio_out_window_g1_ParamLimits

0xa2c2,	// (0x000878ac) popup_call_audio_out_window_g1

0xa2d4,	// (0x000878be) popup_call_audio_out_window_g2_ParamLimits

0xa2d4,	// (0x000878be) popup_call_audio_out_window_g2

0xa2e0,	// (0x000878ca) popup_call_audio_out_window_g3_ParamLimits

0xa2e0,	// (0x000878ca) popup_call_audio_out_window_g3

0x0002,

0xf0e1,	// (0x0008c6cb) popup_call_audio_out_window_g_ParamLimits

0xf0e1,	// (0x0008c6cb) popup_call_audio_out_window_g

0xa2f2,	// (0x000878dc) popup_call_audio_out_window_t1_ParamLimits

0xa2f2,	// (0x000878dc) popup_call_audio_out_window_t1

0xa30a,	// (0x000878f4) popup_call_audio_out_window_t2_ParamLimits

0xa30a,	// (0x000878f4) popup_call_audio_out_window_t2

0x0001,

0xf0e8,	// (0x0008c6d2) popup_call_audio_out_window_t_ParamLimits

0xf0e8,	// (0x0008c6d2) popup_call_audio_out_window_t

0xa31f,	// (0x00087909) bg_popup_call_pane_ParamLimits

0xa31f,	// (0x00087909) bg_popup_call_pane

0x2170,	// (0x0007f75a) call_thumbnail_pane_cp_ParamLimits

0x2170,	// (0x0007f75a) call_thumbnail_pane_cp

0xa3a3,	// (0x0008798d) call_type_pane_cp01_ParamLimits

0xa3a3,	// (0x0008798d) call_type_pane_cp01

0xa3e7,	// (0x000879d1) popup_call_audio_first_window_g1_ParamLimits

0xa3e7,	// (0x000879d1) popup_call_audio_first_window_g1

0xa433,	// (0x00087a1d) popup_call_audio_first_window_g2_ParamLimits

0xa433,	// (0x00087a1d) popup_call_audio_first_window_g2

0x0001,

0xf0ed,	// (0x0008c6d7) popup_call_audio_first_window_g_ParamLimits

0xf0ed,	// (0x0008c6d7) popup_call_audio_first_window_g

0xa477,	// (0x00087a61) popup_call_audio_first_window_t1_ParamLimits

0xa477,	// (0x00087a61) popup_call_audio_first_window_t1

0xa523,	// (0x00087b0d) popup_call_audio_first_window_t4_ParamLimits

0xa523,	// (0x00087b0d) popup_call_audio_first_window_t4

0xa5af,	// (0x00087b99) popup_call_audio_first_window_t5_ParamLimits

0xa5af,	// (0x00087b99) popup_call_audio_first_window_t5

0x0002,

0xf0f2,	// (0x0008c6dc) popup_call_audio_first_window_t_ParamLimits

0xf0f2,	// (0x0008c6dc) popup_call_audio_first_window_t

0xa5de,	// (0x00087bc8) bg_popup_call_pane_cp02

0xa5e8,	// (0x00087bd2) call_type_pane_cp023

0xa5f0,	// (0x00087bda) popup_call_audio_wait_window_g1

0xa5f8,	// (0x00087be2) popup_call_audio_wait_window_g2

0x0001,

0xf0f9,	// (0x0008c6e3) popup_call_audio_wait_window_g

0xa600,	// (0x00087bea) popup_call_audio_wait_window_t3

0xa60e,	// (0x00087bf8) bg_popup_call_pane_cp03_ParamLimits

0xa60e,	// (0x00087bf8) bg_popup_call_pane_cp03

0xa66e,	// (0x00087c58) call_thumbnail_pane_cp011_ParamLimits

0xa66e,	// (0x00087c58) call_thumbnail_pane_cp011

0xa67a,	// (0x00087c64) call_type_pane_cp034_ParamLimits

0xa67a,	// (0x00087c64) call_type_pane_cp034

0xa6b6,	// (0x00087ca0) popup_call_audio_second_window_g1_ParamLimits

0xa6b6,	// (0x00087ca0) popup_call_audio_second_window_g1

0xa6f2,	// (0x00087cdc) popup_call_audio_second_window_g2_ParamLimits

0xa6f2,	// (0x00087cdc) popup_call_audio_second_window_g2

0x0001,

0xf0fe,	// (0x0008c6e8) popup_call_audio_second_window_g_ParamLimits

0xf0fe,	// (0x0008c6e8) popup_call_audio_second_window_g

0xa72e,	// (0x00087d18) popup_call_audio_second_window_t1_ParamLimits

0xa72e,	// (0x00087d18) popup_call_audio_second_window_t1

0xa7af,	// (0x00087d99) popup_call_audio_second_window_t2_ParamLimits

0xa7af,	// (0x00087d99) popup_call_audio_second_window_t2

0xa7e5,	// (0x00087dcf) popup_call_audio_second_window_t3_ParamLimits

0xa7e5,	// (0x00087dcf) popup_call_audio_second_window_t3

0x0002,

0xf103,	// (0x0008c6ed) popup_call_audio_second_window_t_ParamLimits

0xf103,	// (0x0008c6ed) popup_call_audio_second_window_t

0xa5de,	// (0x00087bc8) bg_popup_call_pane_cp04

0xa81b,	// (0x00087e05) list_conf_pane

0xa823,	// (0x00087e0d) popup_call_audio_conf_window_t1

0xa831,	// (0x00087e1b) call_thumbnail_pane_g1

0xa839,	// (0x00087e23) bg_pinb_pane_ParamLimits

0xa839,	// (0x00087e23) bg_pinb_pane

0xa847,	// (0x00087e31) find_pinb_pane

0xa850,	// (0x00087e3a) listscroll_pinb_pane_ParamLimits

0xa850,	// (0x00087e3a) listscroll_pinb_pane

0xa85f,	// (0x00087e49) pinb_bg_pane_g1

0x2194,	// (0x0007f77e) pinb_bg_pane_g2

0x21a0,	// (0x0007f78a) pinb_bg_pane_g3

0x21ac,	// (0x0007f796) pinb_bg_pane_g4

0x21b8,	// (0x0007f7a2) pinb_bg_pane_g5

0x21c4,	// (0x0007f7ae) pinb_bg_pane_g6

0x21cf,	// (0x0007f7b9) pinb_bg_pane_g7

0x21da,	// (0x0007f7c4) pinb_bg_pane_g8

0x21e5,	// (0x0007f7cf) pinb_bg_pane_g9

0x21ef,	// (0x0007f7d9) pinb_bg_pane_g10

0x0009,

0xf10a,	// (0x0008c6f4) pinb_bg_pane_g

0x220c,	// (0x0007f7f6) grid_pinb_pane

0x2217,	// (0x0007f801) list_pinb_pane

0x2222,	// (0x0007f80c) scroll_pane_cp01_ParamLimits

0x2222,	// (0x0007f80c) scroll_pane_cp01

0xa869,	// (0x00087e53) find_pinb_pane_g1_ParamLimits

0xa869,	// (0x00087e53) find_pinb_pane_g1

0xa881,	// (0x00087e6b) find_pinb_pane_t1

0xa893,	// (0x00087e7d) find_pinb_pane_t2

0x0001,

0xf124,	// (0x0008c70e) find_pinb_pane_t

0xa8a8,	// (0x00087e92) input_focus_pane_cp01_ParamLimits

0xa8a8,	// (0x00087e92) input_focus_pane_cp01

0x2234,	// (0x0007f81e) cell_pinb_pane_ParamLimits

0x2234,	// (0x0007f81e) cell_pinb_pane

0x2259,	// (0x0007f843) cell_pinb_pane_g1_ParamLimits

0x2259,	// (0x0007f843) cell_pinb_pane_g1

0x226e,	// (0x0007f858) cell_pinb_pane_g2_ParamLimits

0x226e,	// (0x0007f858) cell_pinb_pane_g2

0xa8b4,	// (0x00087e9e) cell_pinb_pane_g3_ParamLimits

0xa8b4,	// (0x00087e9e) cell_pinb_pane_g3

0x0002,

0xf129,	// (0x0008c713) cell_pinb_pane_g_ParamLimits

0xf129,	// (0x0008c713) cell_pinb_pane_g

0xa5de,	// (0x00087bc8) grid_highlight_pane_cp01

0x227a,	// (0x0007f864) list_pinb_item_pane_ParamLimits

0x227a,	// (0x0007f864) list_pinb_item_pane

0xa5de,	// (0x00087bc8) list_highlight_pane_cp02

0x2298,	// (0x0007f882) list_pinb_item_pane_g1_ParamLimits

0x2298,	// (0x0007f882) list_pinb_item_pane_g1

0x22a5,	// (0x0007f88f) list_pinb_item_pane_g2_ParamLimits

0x22a5,	// (0x0007f88f) list_pinb_item_pane_g2

0x22b1,	// (0x0007f89b) list_pinb_item_pane_g3_ParamLimits

0x22b1,	// (0x0007f89b) list_pinb_item_pane_g3

0x22c2,	// (0x0007f8ac) list_pinb_item_pane_g4_ParamLimits

0x22c2,	// (0x0007f8ac) list_pinb_item_pane_g4

0x0003,

0xf130,	// (0x0008c71a) list_pinb_item_pane_g_ParamLimits

0xf130,	// (0x0008c71a) list_pinb_item_pane_g

0x22ce,	// (0x0007f8b8) list_pinb_item_pane_t1_ParamLimits

0x22ce,	// (0x0007f8b8) list_pinb_item_pane_t1

0x22ff,	// (0x0007f8e9) calc_display_pane

0x231d,	// (0x0007f907) calc_paper_pane

0x2339,	// (0x0007f923) grid_calc_pane

0xa5de,	// (0x00087bc8) bg_list_pane_cp01

0x2365,	// (0x0007f94f) clock_g1

0x236d,	// (0x0007f957) clock_g2

0x0001,

0xf139,	// (0x0008c723) clock_g

0x2377,	// (0x0007f961) clock_t1_ParamLimits

0x2377,	// (0x0007f961) clock_t1

0x238c,	// (0x0007f976) clock_t2_ParamLimits

0x238c,	// (0x0007f976) clock_t2

0x239e,	// (0x0007f988) clock_t3_ParamLimits

0x239e,	// (0x0007f988) clock_t3

0x23b0,	// (0x0007f99a) clock_t4_ParamLimits

0x23b0,	// (0x0007f99a) clock_t4

0x23c2,	// (0x0007f9ac) clock_t5_ParamLimits

0x23c2,	// (0x0007f9ac) clock_t5

0x23d7,	// (0x0007f9c1) clock_t6_ParamLimits

0x23d7,	// (0x0007f9c1) clock_t6

0x23e9,	// (0x0007f9d3) clock_t7_ParamLimits

0x23e9,	// (0x0007f9d3) clock_t7

0x23fb,	// (0x0007f9e5) clock_t8_ParamLimits

0x23fb,	// (0x0007f9e5) clock_t8

0x2411,	// (0x0007f9fb) clock_t9_ParamLimits

0x2411,	// (0x0007f9fb) clock_t9

0x0008,

0xf13e,	// (0x0008c728) clock_t_ParamLimits

0xf13e,	// (0x0008c728) clock_t

0xa8ee,	// (0x00087ed8) popup_clock_analogue_window_cp02

0xa8ee,	// (0x00087ed8) popup_clock_digital_window_cp01

0xa8f6,	// (0x00087ee0) listscroll_help_pane

0xa5de,	// (0x00087bc8) phob_pre_status_pane

0xa900,	// (0x00087eea) grid_qdial_pane

0xa839,	// (0x00087e23) listscroll_mce_pane

0xa839,	// (0x00087e23) bg_notes_pane

0xa90a,	// (0x00087ef4) list_notes_pane

0x2427,	// (0x0007fa11) scroll_pane_cp06

0xa918,	// (0x00087f02) bg_calc_paper_pane

0x2436,	// (0x0007fa20) list_calc_pane

0xa92c,	// (0x00087f16) bg_calc_display_pane

0x2450,	// (0x0007fa3a) calc_display_pane_t1

0x2465,	// (0x0007fa4f) calc_display_pane_t2

0x247a,	// (0x0007fa64) calc_display_pane_t3

0x0002,

0xf151,	// (0x0008c73b) calc_display_pane_t

0x248c,	// (0x0007fa76) cell_calc_pane_ParamLimits

0x248c,	// (0x0007fa76) cell_calc_pane

0xa938,	// (0x00087f22) bg_calc_paper_pane_g1

0xa944,	// (0x00087f2e) bg_calc_paper_pane_g2

0xa950,	// (0x00087f3a) bg_calc_paper_pane_g3

0xa95c,	// (0x00087f46) bg_calc_paper_pane_g4

0xa968,	// (0x00087f52) bg_calc_paper_pane_g5

0x24bb,	// (0x0007faa5) bg_calc_paper_pane_g6

0x24cc,	// (0x0007fab6) bg_calc_paper_pane_g7

0x24dd,	// (0x0007fac7) bg_calc_paper_pane_g8

0x0007,

0xf158,	// (0x0008c742) bg_calc_paper_pane_g

0x24f0,	// (0x0007fada) calc_bg_paper_pane_g9

0x2503,	// (0x0007faed) list_calc_item_pane_ParamLimits

0x2503,	// (0x0007faed) list_calc_item_pane

0xa974,	// (0x00087f5e) list_calc_item_pane_g1

0x2524,	// (0x0007fb0e) list_calc_item_pane_t1_ParamLimits

0x2524,	// (0x0007fb0e) list_calc_item_pane_t1

0x2536,	// (0x0007fb20) list_calc_item_pane_t2_ParamLimits

0x2536,	// (0x0007fb20) list_calc_item_pane_t2

0x0001,

0xf169,	// (0x0008c753) list_calc_item_pane_t_ParamLimits

0xf169,	// (0x0008c753) list_calc_item_pane_t

0xa981,	// (0x00087f6b) cell_calc_pane_g1

0xa98b,	// (0x00087f75) grid_highlight_pane_cp02

0xa9ad,	// (0x00087f97) bg_calc_display_pane_g1

0x2566,	// (0x0007fb50) bg_calc_display_pane_g2

0xa9b6,	// (0x00087fa0) bg_calc_display_pane_g3

0x0002,

0xf173,	// (0x0008c75d) bg_calc_display_pane_g

0x2570,	// (0x0007fb5a) cell_qdial_pane_ParamLimits

0x2570,	// (0x0007fb5a) cell_qdial_pane

0x2586,	// (0x0007fb70) cell_qdial_pane_g1_ParamLimits

0x2586,	// (0x0007fb70) cell_qdial_pane_g1

0x2593,	// (0x0007fb7d) cell_qdial_pane_g2_ParamLimits

0x2593,	// (0x0007fb7d) cell_qdial_pane_g2

0xa9bf,	// (0x00087fa9) cell_qdial_pane_g3_ParamLimits

0xa9bf,	// (0x00087fa9) cell_qdial_pane_g3

0x0003,

0xf17a,	// (0x0008c764) cell_qdial_pane_g_ParamLimits

0xf17a,	// (0x0008c764) cell_qdial_pane_g

0x25b1,	// (0x0007fb9b) cell_qdial_pane_t1_ParamLimits

0x25b1,	// (0x0007fb9b) cell_qdial_pane_t1

0x25c9,	// (0x0007fbb3) cell_qdial_pane_t2_ParamLimits

0x25c9,	// (0x0007fbb3) cell_qdial_pane_t2

0x25dc,	// (0x0007fbc6) cell_qdial_pane_t3_ParamLimits

0x25dc,	// (0x0007fbc6) cell_qdial_pane_t3

0x0002,

0xf183,	// (0x0008c76d) cell_qdial_pane_t_ParamLimits

0xf183,	// (0x0008c76d) cell_qdial_pane_t

0xa5de,	// (0x00087bc8) grid_highlight_pane_cp04

0xa9cb,	// (0x00087fb5) thumbnail_qdial_pane_ParamLimits

0xa9cb,	// (0x00087fb5) thumbnail_qdial_pane

0xaa27,	// (0x00088011) list_help_pane

0xaa30,	// (0x0008801a) scroll_pane_cp02

0x25ef,	// (0x0007fbd9) help_list_pane_t1_ParamLimits

0x25ef,	// (0x0007fbd9) help_list_pane_t1

0x2616,	// (0x0007fc00) bg_notes_pane_g2

0x261e,	// (0x0007fc08) bg_notes_pane_g3

0x2626,	// (0x0007fc10) notes_bg_pane_g1

0x262e,	// (0x0007fc18) notes_bg_pane_g4

0x2636,	// (0x0007fc20) notes_bg_pane_g5

0x263e,	// (0x0007fc28) notes_bg_pane_g6

0x2646,	// (0x0007fc30) notes_bg_pane_g7

0x264e,	// (0x0007fc38) notes_bg_pane_g8

0x2656,	// (0x0007fc40) notes_bg_pane_g9

0x0006,

0xf1a1,	// (0x0008c78b) notes_bg_pane_g

0x265e,	// (0x0007fc48) list_notes_text_pane_ParamLimits

0x265e,	// (0x0007fc48) list_notes_text_pane

0xaa39,	// (0x00088023) list_notes_text_pane_g1

0x0b52,	// (0x0007e13c) list_notes_text_pane_t1

0x2686,	// (0x0007fc70) listscroll_cale_week_pane

0x26bc,	// (0x0007fca6) bg_cale_heading_pane

0x26e5,	// (0x0007fccf) bg_cale_pane_cp01

0x2707,	// (0x0007fcf1) cale_week_corner_pane

0x2726,	// (0x0007fd10) cale_week_day_heading_pane

0x2754,	// (0x0007fd3e) cale_week_scroll_pane_g1

0x2778,	// (0x0007fd62) cale_week_scroll_pane_g2

0x2790,	// (0x0007fd7a) cale_week_scroll_pane_g3

0x27a8,	// (0x0007fd92) cale_week_scroll_pane_g4

0x27c0,	// (0x0007fdaa) cale_week_scroll_pane_g5

0x27d8,	// (0x0007fdc2) cale_week_scroll_pane_g6

0x27f8,	// (0x0007fde2) cale_week_scroll_pane_g7

0x2818,	// (0x0007fe02) cale_week_scroll_pane_g8

0x2838,	// (0x0007fe22) cale_week_scroll_pane_g9

0x2855,	// (0x0007fe3f) cale_week_scroll_pane_g10

0x2872,	// (0x0007fe5c) cale_week_scroll_pane_g11

0x288f,	// (0x0007fe79) cale_week_scroll_pane_g12

0x28ac,	// (0x0007fe96) cale_week_scroll_pane_g13

0x28d1,	// (0x0007febb) cale_week_scroll_pane_g14

0x28fa,	// (0x0007fee4) cale_week_scroll_pane_g15

0x000f,

0xf1b0,	// (0x0008c79a) cale_week_scroll_pane_g

0x2943,	// (0x0007ff2d) cale_week_time_pane

0x2963,	// (0x0007ff4d) grid_cale_week_pane

0xaa65,	// (0x0008804f) scroll_pane_cp08

0x2996,	// (0x0007ff80) cell_cale_week_pane_ParamLimits

0x2996,	// (0x0007ff80) cell_cale_week_pane

0x2a26,	// (0x00080010) cale_week_day_heading_pane_t1

0x2a6e,	// (0x00080058) cale_week_day_heading_pane_t2

0x2abb,	// (0x000800a5) cale_week_day_heading_pane_t3

0x2b08,	// (0x000800f2) cale_week_day_heading_pane_t4

0x2b55,	// (0x0008013f) cale_week_day_heading_pane_t5

0x2ba2,	// (0x0008018c) cale_week_day_heading_pane_t6

0x2bef,	// (0x000801d9) cale_week_day_heading_pane_t7

0x0006,

0xf1d1,	// (0x0008c7bb) cale_week_day_heading_pane_t

0xaa87,	// (0x00088071) bg_cale_side_pane

0x2c37,	// (0x00080221) cale_week_time_pane_t1

0x2c7b,	// (0x00080265) cale_week_time_pane_t2

0x2cbf,	// (0x000802a9) cale_week_time_pane_t3

0x2d03,	// (0x000802ed) cale_week_time_pane_t4

0x2d47,	// (0x00080331) cale_week_time_pane_t5

0x2d8b,	// (0x00080375) cale_week_time_pane_t6

0x2dcf,	// (0x000803b9) cale_week_time_pane_t7

0x2e1b,	// (0x00080405) cale_week_time_pane_t8

0x0007,

0xf1e0,	// (0x0008c7ca) cale_week_time_pane_t

0x2e69,	// (0x00080453) cell_cale_week_pane_g2

0x2e8d,	// (0x00080477) cell_cale_week_pane_g3_ParamLimits

0x2e8d,	// (0x00080477) cell_cale_week_pane_g3

0xaa95,	// (0x0008807f) grid_highlight_pane_cp07

0xaa9d,	// (0x00088087) listscroll_gms_pane

0xaaa7,	// (0x00088091) grid_gms_pane

0xaab0,	// (0x0008809a) listscroll_gms_pane_g1

0xaab8,	// (0x000880a2) listscroll_gms_pane_g2

0x0001,

0xf1f1,	// (0x0008c7db) listscroll_gms_pane_g

0x2ea5,	// (0x0008048f) scroll_pane_cp010

0x2eb0,	// (0x0008049a) cell_gms_pane_ParamLimits

0x2eb0,	// (0x0008049a) cell_gms_pane

0x2ec3,	// (0x000804ad) cell_gms_pane_g1

0xaac0,	// (0x000880aa) cell_gms_pane_g2

0xaac8,	// (0x000880b2) cell_gms_pane_g3

0xaad1,	// (0x000880bb) cell_gms_pane_g4

0x0003,

0xf1f6,	// (0x0008c7e0) cell_gms_pane_g

0xaada,	// (0x000880c4) grid_highlight_pane_cp09

0x5358,	// (0x00082942) phob_pre_status_pane_g1

0x5360,	// (0x0008294a) phob_pre_status_pane_g2

0x5368,	// (0x00082952) phob_pre_status_pane_g3

0x5370,	// (0x0008295a) phob_pre_status_pane_g4

0x0004,

0xf5e1,	// (0x0008cbcb) phob_pre_status_pane_g

0x5380,	// (0x0008296a) phob_pre_status_pane_t1

0x5390,	// (0x0008297a) phob_pre_status_pane_t2

0x53a0,	// (0x0008298a) phob_pre_status_pane_t3

0x0002,

0xf5ec,	// (0x0008cbd6) phob_pre_status_pane_t

0xaae2,	// (0x000880cc) bg_list_pane_cp05

0x2ed3,	// (0x000804bd) grid_vorec_pane

0x2edf,	// (0x000804c9) vorec_t1

0x2eed,	// (0x000804d7) vorec_t2

0x2efb,	// (0x000804e5) vorec_t3

0x2f09,	// (0x000804f3) vorec_t4

0xa154,	// (0x0008773e) vorec_t5

0xa162,	// (0x0008774c) vorec_t6

0x0004,

0xf1ff,	// (0x0008c7e9) vorec_t

0xa170,	// (0x0008775a) wait_bar_pane_cp01

0x2f25,	// (0x0008050f) cell_vorec_pane_ParamLimits

0x2f25,	// (0x0008050f) cell_vorec_pane

0x2f3a,	// (0x00080524) cell_vorec_pane_g1

0xa5de,	// (0x00087bc8) grid_highlight_pane_cp05

0x2f52,	// (0x0008053c) cams_zoom_pane

0x2f5e,	// (0x00080548) image_vga_pane

0x2f6d,	// (0x00080557) main_camera_pane_g1

0x2f7b,	// (0x00080565) main_camera_pane_g2

0x2f87,	// (0x00080571) main_camera_pane_g3

0x2f95,	// (0x0008057f) main_camera_pane_g4

0x2fa3,	// (0x0008058d) main_camera_pane_g5

0x2fb1,	// (0x0008059b) main_camera_pane_g6

0x2fbf,	// (0x000805a9) main_camera_pane_g7

0x0007,

0xf20a,	// (0x0008c7f4) main_camera_pane_g

0x2fcd,	// (0x000805b7) main_camera_pane_t1

0x2fdf,	// (0x000805c9) main_camera_pane_t2

0x0001,

0xf21b,	// (0x0008c805) main_camera_pane_t

0x3002,	// (0x000805ec) cams_zoom_pane_cp_ParamLimits

0x3002,	// (0x000805ec) cams_zoom_pane_cp

0x3026,	// (0x00080610) image_cif_pane_ParamLimits

0x3026,	// (0x00080610) image_cif_pane

0x3044,	// (0x0008062e) image_subqcif_pane

0x304e,	// (0x00080638) main_video_pane_g1_ParamLimits

0x304e,	// (0x00080638) main_video_pane_g1

0x306e,	// (0x00080658) main_video_pane_g2_ParamLimits

0x306e,	// (0x00080658) main_video_pane_g2

0x309e,	// (0x00080688) main_video_pane_g3_ParamLimits

0x309e,	// (0x00080688) main_video_pane_g3

0x30c7,	// (0x000806b1) main_video_pane_g4_ParamLimits

0x30c7,	// (0x000806b1) main_video_pane_g4

0x30f0,	// (0x000806da) main_video_pane_g5_ParamLimits

0x30f0,	// (0x000806da) main_video_pane_g5

0xaaf6,	// (0x000880e0) main_video_pane_g6_ParamLimits

0xaaf6,	// (0x000880e0) main_video_pane_g6

0x0006,

0xf220,	// (0x0008c80a) main_video_pane_g_ParamLimits

0xf220,	// (0x0008c80a) main_video_pane_g

0x3112,	// (0x000806fc) main_video_pane_t1_ParamLimits

0x3112,	// (0x000806fc) main_video_pane_t1

0xab10,	// (0x000880fa) cams_zoom_pane_g1

0xab19,	// (0x00088103) cams_zoom_pane_g2

0xab22,	// (0x0008810c) cams_zoom_pane_g3

0xab2b,	// (0x00088115) cams_zoom_pane_g4

0x0003,

0xf22f,	// (0x0008c819) cams_zoom_pane_g

0x315c,	// (0x00080746) grid_cams_pane

0x316a,	// (0x00080754) linegrid_cams_pane

0x3176,	// (0x00080760) cell_cams_pane_ParamLimits

0x3176,	// (0x00080760) cell_cams_pane

0xab34,	// (0x0008811e) cams_burst_image_pane

0xab3c,	// (0x00088126) cell_cams_pane_g1

0xa5de,	// (0x00087bc8) grid_highlight_pane_cp03

0xa981,	// (0x00087f6b) mp_bg_pane_g1

0xa5de,	// (0x00087bc8) bg_list_pane_cp03

0xc74c,	// (0x00089d36) bg_mp_pane

0xc754,	// (0x00089d3e) grid_mp_pane

0xc75c,	// (0x00089d46) media_player_g1

0xc766,	// (0x00089d50) media_player_t1

0xc774,	// (0x00089d5e) media_player_t2

0xc782,	// (0x00089d6c) media_player_t3

0xc790,	// (0x00089d7a) media_player_t4

0xc79e,	// (0x00089d88) media_player_t5

0xc7ac,	// (0x00089d96) media_player_t6

0xc7ba,	// (0x00089da4) media_player_t7

0x0006,

0xf5cb,	// (0x0008cbb5) media_player_t

0xc7c8,	// (0x00089db2) wait_bar_pane_cp02

0xf5b0,	// (0x0008cb9a) main_usb_pane_t

0x534f,	// (0x00082939) cell_mp_pane

0xa981,	// (0x00087f6b) cell_mp_pane_g1

0xa5de,	// (0x00087bc8) grid_highlight_pane_cp06

0xab44,	// (0x0008812e) grid_skin_colour_pane

0xab4c,	// (0x00088136) list_highlight_pane_cp03

0x31a3,	// (0x0008078d) skin_g1

0xab54,	// (0x0008813e) skin_t1

0xab63,	// (0x0008814d) skin_t2

0x0001,

0xf264,	// (0x0008c84e) skin_t

0x31ad,	// (0x00080797) cell_skin_colour_pane_ParamLimits

0x31ad,	// (0x00080797) cell_skin_colour_pane

0xab71,	// (0x0008815b) cell_skin_colour_pane_g1

0x322d,	// (0x00080817) call_video_g1_ParamLimits

0x322d,	// (0x00080817) call_video_g1

0x323d,	// (0x00080827) call_video_g2_ParamLimits

0x323d,	// (0x00080827) call_video_g2

0x0001,

0xf269,	// (0x0008c853) call_video_g_ParamLimits

0xf269,	// (0x0008c853) call_video_g

0x328d,	// (0x00080877) call_video_uplink_pane_cp1_ParamLimits

0x328d,	// (0x00080877) call_video_uplink_pane_cp1

0xab83,	// (0x0008816d) call_video_uplink_pane_cp2

0x335b,	// (0x00080945) video_down_crop_pane_ParamLimits

0x335b,	// (0x00080945) video_down_crop_pane

0x344d,	// (0x00080a37) video_down_pane_ParamLimits

0x344d,	// (0x00080a37) video_down_pane

0xab8b,	// (0x00088175) video_down_subqcif_pane_ParamLimits

0xab8b,	// (0x00088175) video_down_subqcif_pane

0xaba5,	// (0x0008818f) video_down_subqcif_pane_cp_ParamLimits

0xaba5,	// (0x0008818f) video_down_subqcif_pane_cp

0xabcd,	// (0x000881b7) im_reading_pane_ParamLimits

0xabcd,	// (0x000881b7) im_reading_pane

0x356a,	// (0x00080b54) im_writing_pane_ParamLimits

0x356a,	// (0x00080b54) im_writing_pane

0x3588,	// (0x00080b72) im_reading_pane_t1

0xabe7,	// (0x000881d1) list_im_pane

0xabf8,	// (0x000881e2) scroll_pane_cp07

0x35ca,	// (0x00080bb4) im_writing_pane_t1_ParamLimits

0x35ca,	// (0x00080bb4) im_writing_pane_t1

0xac11,	// (0x000881fb) im_writing_pane_t2_ParamLimits

0xac11,	// (0x000881fb) im_writing_pane_t2

0x0001,

0xf273,	// (0x0008c85d) im_writing_pane_t_ParamLimits

0xf273,	// (0x0008c85d) im_writing_pane_t

0xa5de,	// (0x00087bc8) input_focus_pane_cp04

0xa5de,	// (0x00087bc8) input_focus_pane_cp05

0x35dc,	// (0x00080bc6) list_im_single_pane_ParamLimits

0x35dc,	// (0x00080bc6) list_im_single_pane

0x35f5,	// (0x00080bdf) list_single_im_pane_t1

0x5313,	// (0x000828fd) blid_accuracy_pane

0x531b,	// (0x00082905) blid_compass_pane

0x5325,	// (0x0008290f) main_location_t1

0x5333,	// (0x0008291d) main_location_t2

0x5341,	// (0x0008292b) main_location_t3

0x0002,

0xf5da,	// (0x0008cbc4) main_location_t

0xa5de,	// (0x00087bc8) aid_levels_location

0xa981,	// (0x00087f6b) blid_accuracy_pane_g1

0xa981,	// (0x00087f6b) blid_accuracy_pane_g2

0x0001,

0xf2d5,	// (0x0008c8bf) blid_accuracy_pane_g

0xac59,	// (0x00088243) wml_content_pane

0xac97,	// (0x00088281) wml_button_pane_ParamLimits

0xac97,	// (0x00088281) wml_button_pane

0x3604,	// (0x00080bee) wml_list_single_large_pane_ParamLimits

0x3604,	// (0x00080bee) wml_list_single_large_pane

0x3626,	// (0x00080c10) wml_list_single_medium_pane_ParamLimits

0x3626,	// (0x00080c10) wml_list_single_medium_pane

0x3649,	// (0x00080c33) wml_list_single_small_pane_ParamLimits

0x3649,	// (0x00080c33) wml_list_single_small_pane

0xacab,	// (0x00088295) wml_selection_box_pane_ParamLimits

0xacab,	// (0x00088295) wml_selection_box_pane

0xacbe,	// (0x000882a8) wml_list_single_pane_t1

0xaccd,	// (0x000882b7) wml_list_single_medium_pane_t1

0xacdc,	// (0x000882c6) wml_list_single_large_pane_t1

0xaceb,	// (0x000882d5) input_focus_pane_cp02_ParamLimits

0xaceb,	// (0x000882d5) input_focus_pane_cp02

0xacfe,	// (0x000882e8) wml_selection_box_pane_g1

0xad07,	// (0x000882f1) wml_selection_box_pane_t1_ParamLimits

0xad07,	// (0x000882f1) wml_selection_box_pane_t1

0xa839,	// (0x00087e23) bg_wml_button_pane_ParamLimits

0xa839,	// (0x00087e23) bg_wml_button_pane

0xad1f,	// (0x00088309) wml_button_pane_g1

0xad27,	// (0x00088311) wml_button_pane_t1

0xad1f,	// (0x00088309) wml_button_bg_pane_g1

0xad37,	// (0x00088321) wml_button_bg_pane_g2

0xad3f,	// (0x00088329) wml_button_bg_pane_g3

0xad47,	// (0x00088331) wml_button_bg_pane_g4

0xad4f,	// (0x00088339) wml_button_bg_pane_g5

0xad57,	// (0x00088341) wml_button_bg_pane_g6

0xad5f,	// (0x00088349) wml_button_bg_pane_g7

0xad67,	// (0x00088351) wml_button_bg_pane_g8

0xad6f,	// (0x00088359) wml_button_bg_pane_g9

0x0008,

0xf278,	// (0x0008c862) wml_button_bg_pane_g

0x3671,	// (0x00080c5b) bg_list_pane_cp02

0xad77,	// (0x00088361) mce_header_pane_ParamLimits

0xad77,	// (0x00088361) mce_header_pane

0xad8d,	// (0x00088377) mce_icon_pane

0xad8d,	// (0x00088377) mce_image_pane

0xad96,	// (0x00088380) mce_text_pane_ParamLimits

0xad96,	// (0x00088380) mce_text_pane

0x367b,	// (0x00080c65) scroll_pane_cp03

0xac8f,	// (0x00088279) scroll_pane_cp04

0xada9,	// (0x00088393) scroll_pane_cp05_ParamLimits

0xada9,	// (0x00088393) scroll_pane_cp05

0x3685,	// (0x00080c6f) mce_header_field_pane_ParamLimits

0x3685,	// (0x00080c6f) mce_header_field_pane

0x36a7,	// (0x00080c91) mce_header_field_pane_2_ParamLimits

0x36a7,	// (0x00080c91) mce_header_field_pane_2

0x36bd,	// (0x00080ca7) mce_header_field_pane_3

0x36c5,	// (0x00080caf) list_single_mce_message_pane_ParamLimits

0x36c5,	// (0x00080caf) list_single_mce_message_pane

0x36e4,	// (0x00080cce) list_single_mce_smart_pane_ParamLimits

0x36e4,	// (0x00080cce) list_single_mce_smart_pane

0xadb5,	// (0x0008839f) input_focus_pane_cp03

0xadbe,	// (0x000883a8) list_header_data_pane

0x370e,	// (0x00080cf8) mce_header_field_pane_t1

0x371e,	// (0x00080d08) list_single_mce_header_pane_ParamLimits

0x371e,	// (0x00080d08) list_single_mce_header_pane

0xadc6,	// (0x000883b0) list_single_mce_header_pane_t1

0xadd5,	// (0x000883bf) list_single_mce_message_pane_g1

0xaddd,	// (0x000883c7) list_single_mce_message_pane_t1

0x3762,	// (0x00080d4c) bg_cale_heading_pane_cp01_ParamLimits

0x3762,	// (0x00080d4c) bg_cale_heading_pane_cp01

0xadeb,	// (0x000883d5) bg_cale_pane_cp02_ParamLimits

0xadeb,	// (0x000883d5) bg_cale_pane_cp02

0x37a9,	// (0x00080d93) cale_month_corner_pane

0x37c8,	// (0x00080db2) cale_month_day_heading_pane_ParamLimits

0x37c8,	// (0x00080db2) cale_month_day_heading_pane

0x381f,	// (0x00080e09) cale_month_pane_g1_ParamLimits

0x381f,	// (0x00080e09) cale_month_pane_g1

0x385b,	// (0x00080e45) cale_month_pane_g2_ParamLimits

0x385b,	// (0x00080e45) cale_month_pane_g2

0x3893,	// (0x00080e7d) cale_month_pane_g3_ParamLimits

0x3893,	// (0x00080e7d) cale_month_pane_g3

0x38e7,	// (0x00080ed1) cale_month_pane_g4_ParamLimits

0x38e7,	// (0x00080ed1) cale_month_pane_g4

0x393b,	// (0x00080f25) cale_month_pane_g5_ParamLimits

0x393b,	// (0x00080f25) cale_month_pane_g5

0x398f,	// (0x00080f79) cale_month_pane_g6_ParamLimits

0x398f,	// (0x00080f79) cale_month_pane_g6

0x39f3,	// (0x00080fdd) cale_month_pane_g7_ParamLimits

0x39f3,	// (0x00080fdd) cale_month_pane_g7

0x3a57,	// (0x00081041) cale_month_pane_g8_ParamLimits

0x3a57,	// (0x00081041) cale_month_pane_g8

0x3abb,	// (0x000810a5) cale_month_pane_g9_ParamLimits

0x3abb,	// (0x000810a5) cale_month_pane_g9

0x3b13,	// (0x000810fd) cale_month_pane_g10_ParamLimits

0x3b13,	// (0x000810fd) cale_month_pane_g10

0x3b61,	// (0x0008114b) cale_month_pane_g11_ParamLimits

0x3b61,	// (0x0008114b) cale_month_pane_g11

0x3bad,	// (0x00081197) cale_month_pane_g12_ParamLimits

0x3bad,	// (0x00081197) cale_month_pane_g12

0x3bfd,	// (0x000811e7) cale_month_pane_g13_ParamLimits

0x3bfd,	// (0x000811e7) cale_month_pane_g13

0x000c,

0xf28b,	// (0x0008c875) cale_month_pane_g_ParamLimits

0xf28b,	// (0x0008c875) cale_month_pane_g

0x3c4d,	// (0x00081237) cale_month_week_pane

0x3c6d,	// (0x00081257) grid_cale_month_pane_ParamLimits

0x3c6d,	// (0x00081257) grid_cale_month_pane

0x3cbb,	// (0x000812a5) cale_month_day_heading_pane_t1

0x3d3d,	// (0x00081327) cale_month_day_heading_pane_t2

0x3dca,	// (0x000813b4) cale_month_day_heading_pane_t3

0x3e57,	// (0x00081441) cale_month_day_heading_pane_t4

0x3ee4,	// (0x000814ce) cale_month_day_heading_pane_t5

0x3f79,	// (0x00081563) cale_month_day_heading_pane_t6

0x4016,	// (0x00081600) cale_month_day_heading_pane_t7

0x0006,

0xf2a6,	// (0x0008c890) cale_month_day_heading_pane_t

0xaa87,	// (0x00088071) bg_cale_side_pane_cp01

0x40b3,	// (0x0008169d) cale_month_week_pane_t1

0x40cc,	// (0x000816b6) cale_month_week_pane_t2

0x40e5,	// (0x000816cf) cale_month_week_pane_t3

0x40fe,	// (0x000816e8) cale_month_week_pane_t4

0x4117,	// (0x00081701) cale_month_week_pane_t5

0x4132,	// (0x0008171c) cale_month_week_pane_t6

0x0005,

0xf2b5,	// (0x0008c89f) cale_month_week_pane_t

0x4153,	// (0x0008173d) cell_cale_month_pane_ParamLimits

0x4153,	// (0x0008173d) cell_cale_month_pane

0x4275,	// (0x0008185f) cell_cale_month_pane_g1

0x4281,	// (0x0008186b) cell_cale_month_pane_t1_ParamLimits

0x4281,	// (0x0008186b) cell_cale_month_pane_t1

0xaa95,	// (0x0008807f) grid_highlight_pane_cp08

0xa981,	// (0x00087f6b) main_smil_g1

0x42a1,	// (0x0008188b) smil_status_pane

0xae2a,	// (0x00088414) smil_text_pane

0xc66a,	// (0x00089c54) bg_popup_call3_rect_pane_g8

0xc672,	// (0x00089c5c) bg_popup_call3_rect_pane_g9

0x0008,

0xf56e,	// (0x0008cb58) bg_popup_call3_rect_pane_g

0xc900,	// (0x00089eea) smil_status_volume_pane_g1

0x42b4,	// (0x0008189e) smil_status_pane_t1

0x5707,	// (0x00082cf1) volume_smil_pane

0xae34,	// (0x0008841e) list_smil_text_pane

0x42cb,	// (0x000818b5) scroll_pane_cp011

0x42d6,	// (0x000818c0) smil_text_list_pane_t1_ParamLimits

0x42d6,	// (0x000818c0) smil_text_list_pane_t1

0x4328,	// (0x00081912) aid_volume_smil_ParamLimits

0x4328,	// (0x00081912) aid_volume_smil

0xa981,	// (0x00087f6b) smil_volume_pane_g1

0xa981,	// (0x00087f6b) smil_volume_pane_g2

0x0001,

0xf2d5,	// (0x0008c8bf) smil_volume_pane_g

0x2686,	// (0x0007fc70) listscroll_cale_day_pane

0xae3e,	// (0x00088428) bg_cale_pane

0xae56,	// (0x00088440) list_cale_pane

0xae79,	// (0x00088463) scroll_pane_cp09

0xae8a,	// (0x00088474) cale_bg_pane_g1

0xae92,	// (0x0008847c) cale_bg_pane_g2

0xae9a,	// (0x00088484) cale_bg_pane_g3

0xaea2,	// (0x0008848c) cale_bg_pane_g4

0xaeaa,	// (0x00088494) cale_bg_pane_g5

0xaeb2,	// (0x0008849c) cale_bg_pane_g6

0xaeba,	// (0x000884a4) cale_bg_pane_g7

0xaec2,	// (0x000884ac) cale_bg_pane_g8

0xaeca,	// (0x000884b4) cale_bg_pane_g9

0x0008,

0xf2da,	// (0x0008c8c4) cale_bg_pane_g

0x434a,	// (0x00081934) list_cale_time_pane_ParamLimits

0x434a,	// (0x00081934) list_cale_time_pane

0xaeda,	// (0x000884c4) list_cale_time_pane_g1_ParamLimits

0xaeda,	// (0x000884c4) list_cale_time_pane_g1

0xaee6,	// (0x000884d0) list_cale_time_pane_g2_ParamLimits

0xaee6,	// (0x000884d0) list_cale_time_pane_g2

0x435e,	// (0x00081948) list_cale_time_pane_g3_ParamLimits

0x435e,	// (0x00081948) list_cale_time_pane_g3

0x436c,	// (0x00081956) list_cale_time_pane_g4_ParamLimits

0x436c,	// (0x00081956) list_cale_time_pane_g4

0x437a,	// (0x00081964) list_cale_time_pane_g5_ParamLimits

0x437a,	// (0x00081964) list_cale_time_pane_g5

0x0005,

0xf2ed,	// (0x0008c8d7) list_cale_time_pane_g_ParamLimits

0xf2ed,	// (0x0008c8d7) list_cale_time_pane_g

0xaf00,	// (0x000884ea) list_cale_time_pane_t1_ParamLimits

0xaf00,	// (0x000884ea) list_cale_time_pane_t1

0xaf28,	// (0x00088512) list_cale_time_pane_t2_ParamLimits

0xaf28,	// (0x00088512) list_cale_time_pane_t2

0x4672,	// (0x00081c5c) aid_blid_cardinal_pane

0x46b4,	// (0x00081c9e) compass_pane_t4

0xaf50,	// (0x0008853a) list_cale_time_pane_t4_ParamLimits

0xaf50,	// (0x0008853a) list_cale_time_pane_t4

0x46c2,	// (0x00081cac) compass_pane_t5

0x46d2,	// (0x00081cbc) compass_pane_t6

0x46e0,	// (0x00081cca) compass_pane_t7

0xb36a,	// (0x00088954) navi_pane_cc_t1

0xb4c5,	// (0x00088aaf) aid_phob_thumbnail_center_pane

0x4e0f,	// (0x000823f9) main_postcard_pane_g4_ParamLimits

0x0002,

0xf2fa,	// (0x0008c8e4) list_cale_time_pane_t_ParamLimits

0xf2fa,	// (0x0008c8e4) list_cale_time_pane_t

0xa235,	// (0x0008781f) bg_popup_window_pane_cp02_ParamLimits

0xa235,	// (0x0008781f) bg_popup_window_pane_cp02

0xaf78,	// (0x00088562) heading_pane_cp01_ParamLimits

0xaf78,	// (0x00088562) heading_pane_cp01

0xaf84,	// (0x0008856e) loc_req_pane_ParamLimits

0xaf84,	// (0x0008856e) loc_req_pane

0xaf94,	// (0x0008857e) loc_type_pane_ParamLimits

0xaf94,	// (0x0008857e) loc_type_pane

0xafa6,	// (0x00088590) loc_type_pane_t1_ParamLimits

0xafa6,	// (0x00088590) loc_type_pane_t1

0xafb8,	// (0x000885a2) loc_type_pane_t2_ParamLimits

0xafb8,	// (0x000885a2) loc_type_pane_t2

0xafca,	// (0x000885b4) loc_type_pane_t3_ParamLimits

0xafca,	// (0x000885b4) loc_type_pane_t3

0x0002,

0xf301,	// (0x0008c8eb) loc_type_pane_t_ParamLimits

0xf301,	// (0x0008c8eb) loc_type_pane_t

0xafdc,	// (0x000885c6) list_loc_req_pane

0xafe6,	// (0x000885d0) scroll_pane_cp012

0x4388,	// (0x00081972) list_single_loc_request_popup_menu_pane_ParamLimits

0x4388,	// (0x00081972) list_single_loc_request_popup_menu_pane

0xaff1,	// (0x000885db) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xaff1,	// (0x000885db) list_single_loc_request_popup_menu_pane_g1

0xaffd,	// (0x000885e7) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xaffd,	// (0x000885e7) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf308,	// (0x0008c8f2) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf308,	// (0x0008c8f2) list_single_loc_request_popup_menu_pane_g

0xb009,	// (0x000885f3) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xb009,	// (0x000885f3) list_single_loc_request_popup_menu_pane_t1

0x439a,	// (0x00081984) bg_popup_window_pane_cp03_ParamLimits

0x439a,	// (0x00081984) bg_popup_window_pane_cp03

0x43a8,	// (0x00081992) heading_loc_req_pane_ParamLimits

0x43a8,	// (0x00081992) heading_loc_req_pane

0x43b4,	// (0x0008199e) popup_dyc_status_message_window_g1_ParamLimits

0x43b4,	// (0x0008199e) popup_dyc_status_message_window_g1

0x43c0,	// (0x000819aa) popup_dyc_status_message_window_t1_ParamLimits

0x43c0,	// (0x000819aa) popup_dyc_status_message_window_t1

0x43d2,	// (0x000819bc) popup_dyc_status_message_window_t2_ParamLimits

0x43d2,	// (0x000819bc) popup_dyc_status_message_window_t2

0x43e4,	// (0x000819ce) popup_dyc_status_message_window_t3_ParamLimits

0x43e4,	// (0x000819ce) popup_dyc_status_message_window_t3

0x0002,

0xf30d,	// (0x0008c8f7) popup_dyc_status_message_window_t_ParamLimits

0xf30d,	// (0x0008c8f7) popup_dyc_status_message_window_t

0xa5de,	// (0x00087bc8) bg_heading_pane_cp01

0xb01f,	// (0x00088609) heading_loc_req_pane_g1

0xb027,	// (0x00088611) heading_loc_req_pane_g2

0xb02f,	// (0x00088619) heading_loc_req_pane_g3

0x0002,

0xf314,	// (0x0008c8fe) heading_loc_req_pane_g

0xb037,	// (0x00088621) heading_loc_req_pane_t1

0xb047,	// (0x00088631) bg_popup_sub_pane_cp01_ParamLimits

0xb047,	// (0x00088631) bg_popup_sub_pane_cp01

0xb061,	// (0x0008864b) popup_cale_events_window_g1_ParamLimits

0xb061,	// (0x0008864b) popup_cale_events_window_g1

0xb081,	// (0x0008866b) popup_cale_events_window_g2_ParamLimits

0xb081,	// (0x0008866b) popup_cale_events_window_g2

0x0001,

0xf348,	// (0x0008c932) popup_cale_events_window_g_ParamLimits

0xf348,	// (0x0008c932) popup_cale_events_window_g

0xb0a1,	// (0x0008868b) popup_cale_events_window_t1_ParamLimits

0xb0a1,	// (0x0008868b) popup_cale_events_window_t1

0xb0b3,	// (0x0008869d) popup_cale_events_window_t2_ParamLimits

0xb0b3,	// (0x0008869d) popup_cale_events_window_t2

0xb0f1,	// (0x000886db) popup_cale_events_window_t3_ParamLimits

0xb0f1,	// (0x000886db) popup_cale_events_window_t3

0xb12b,	// (0x00088715) popup_cale_events_window_t4_ParamLimits

0xb12b,	// (0x00088715) popup_cale_events_window_t4

0x0003,

0xf34d,	// (0x0008c937) popup_cale_events_window_t_ParamLimits

0xf34d,	// (0x0008c937) popup_cale_events_window_t

0x440e,	// (0x000819f8) call_type_pane

0xb418,	// (0x00088a02) popup_call_status_window_g1

0x441a,	// (0x00081a04) popup_call_status_window_g2

0x4426,	// (0x00081a10) popup_call_status_window_g3

0x0002,

0xf356,	// (0x0008c940) popup_call_status_window_g

0xb161,	// (0x0008874b) call_type_pane_g1

0xb16a,	// (0x00088754) call_type_pane_g2

0x0001,

0xf35d,	// (0x0008c947) call_type_pane_g

0xa5de,	// (0x00087bc8) bg_popup_sub_pane_cp02

0xb173,	// (0x0008875d) listscroll_popup_wml_pane

0xb17b,	// (0x00088765) list_wml_pane

0xb185,	// (0x0008876f) scroll_pane_cp013

0xb190,	// (0x0008877a) list_single_graphic_popup_wml_pane_ParamLimits

0xb190,	// (0x0008877a) list_single_graphic_popup_wml_pane

0xa981,	// (0x00087f6b) list_single_graphic_popup_wml_pane_g1

0xb1a4,	// (0x0008878e) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf362,	// (0x0008c94c) list_single_graphic_popup_wml_pane_g

0xb1ac,	// (0x00088796) list_single_graphic_popup_wml_pane_t1

0xb1c2,	// (0x000887ac) aid_call_pane

0xa831,	// (0x00087e1b) popup_clock_analogue_window_g1

0xa831,	// (0x00087e1b) popup_clock_analogue_window_g2

0x4432,	// (0x00081a1c) popup_clock_analogue_window_g3

0x4432,	// (0x00081a1c) popup_clock_analogue_window_g4

0xa981,	// (0x00087f6b) popup_clock_analogue_window_g5

0x0004,

0xf367,	// (0x0008c951) popup_clock_analogue_window_g

0x443a,	// (0x00081a24) popup_clock_analogue_window_t1

0x4448,	// (0x00081a32) clock_digital_number_pane_ParamLimits

0x4448,	// (0x00081a32) clock_digital_number_pane

0x4454,	// (0x00081a3e) clock_digital_number_pane_cp02_ParamLimits

0x4454,	// (0x00081a3e) clock_digital_number_pane_cp02

0x4460,	// (0x00081a4a) clock_digital_number_pane_cp03_ParamLimits

0x4460,	// (0x00081a4a) clock_digital_number_pane_cp03

0x446c,	// (0x00081a56) clock_digital_number_pane_cp04_ParamLimits

0x446c,	// (0x00081a56) clock_digital_number_pane_cp04

0x4478,	// (0x00081a62) clock_digital_separator_pane_ParamLimits

0x4478,	// (0x00081a62) clock_digital_separator_pane

0x4484,	// (0x00081a6e) popup_clock_digital_window_t1

0xa981,	// (0x00087f6b) clock_digital_number_pane_g1

0xa981,	// (0x00087f6b) clock_digital_number_pane_g2

0x0001,

0xf2d5,	// (0x0008c8bf) clock_digital_number_pane_g

0xa981,	// (0x00087f6b) clock_digital_separator_pane_g1

0xa981,	// (0x00087f6b) clock_digital_separator_pane_g2

0x0001,

0xf2d5,	// (0x0008c8bf) clock_digital_separator_pane_g

0xa5de,	// (0x00087bc8) bg_popup_window_pane_cp04

0xb1ca,	// (0x000887b4) heading_pane_cp03

0xb1d2,	// (0x000887bc) listscroll_popup_gms_pane

0xb1da,	// (0x000887c4) grid_large_graphic_popup_pane

0xb1e4,	// (0x000887ce) listscroll_popup_gms_pane_g1

0xb1ec,	// (0x000887d6) listscroll_popup_gms_pane_g2

0x0001,

0xf372,	// (0x0008c95c) listscroll_popup_gms_pane_g

0xac8f,	// (0x00088279) scroll_pane_cp014

0x44a1,	// (0x00081a8b) cell_large_graphic_popup_pane_ParamLimits

0x44a1,	// (0x00081a8b) cell_large_graphic_popup_pane

0x44bb,	// (0x00081aa5) cell_large_graphic_popup_pane_g1_ParamLimits

0x44bb,	// (0x00081aa5) cell_large_graphic_popup_pane_g1

0xb1f4,	// (0x000887de) cell_large_graphic_popup_pane_g2_ParamLimits

0xb1f4,	// (0x000887de) cell_large_graphic_popup_pane_g2

0xb200,	// (0x000887ea) cell_large_graphic_popup_pane_g3_ParamLimits

0xb200,	// (0x000887ea) cell_large_graphic_popup_pane_g3

0xb20d,	// (0x000887f7) cell_large_graphic_popup_pane_g4_ParamLimits

0xb20d,	// (0x000887f7) cell_large_graphic_popup_pane_g4

0x0003,

0xf377,	// (0x0008c961) cell_large_graphic_popup_pane_g_ParamLimits

0xf377,	// (0x0008c961) cell_large_graphic_popup_pane_g

0xb21d,	// (0x00088807) grid_highlight_pane_cp010

0xa981,	// (0x00087f6b) bg_popup_call_pane_g1

0xb227,	// (0x00088811) list_single_graphic_popup_conf_pane_ParamLimits

0xb227,	// (0x00088811) list_single_graphic_popup_conf_pane

0xb239,	// (0x00088823) list_highlight_pane_cp01

0xb242,	// (0x0008882c) list_single_graphic_popup_conf_pane_g1

0xb24a,	// (0x00088834) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf380,	// (0x0008c96a) list_single_graphic_popup_conf_pane_g

0xb252,	// (0x0008883c) list_single_graphic_popup_conf_pane_t1

0xb260,	// (0x0008884a) linegrid_cams_pane_g1

0x44c7,	// (0x00081ab1) linegrid_cams_pane_g2

0xaac8,	// (0x000880b2) linegrid_cams_pane_g3

0xb269,	// (0x00088853) linegrid_cams_pane_g4

0x44d0,	// (0x00081aba) linegrid_cams_pane_g5

0x44d9,	// (0x00081ac3) linegrid_cams_pane_g6

0xaad1,	// (0x000880bb) linegrid_cams_pane_g7

0x0006,

0xf385,	// (0x0008c96f) linegrid_cams_pane_g

0xb272,	// (0x0008885c) popup_clock_analogue_window

0xb272,	// (0x0008885c) popup_clock_digital_window

0xa5de,	// (0x00087bc8) popup_phob_thumbnail_window

0xa981,	// (0x00087f6b) call_video_uplink_pane_g1

0xb27b,	// (0x00088865) call_video_uplink_pane_g2

0x0001,

0xf394,	// (0x0008c97e) call_video_uplink_pane_g

0xb283,	// (0x0008886d) video_uplink_pane

0xb28b,	// (0x00088875) mce_image_pane_g1

0x44e4,	// (0x00081ace) mce_image_pane_g2

0x44ee,	// (0x00081ad8) mce_image_pane_g3

0x44f8,	// (0x00081ae2) mce_image_pane_g4

0x4500,	// (0x00081aea) mce_image_pane_g5

0x0004,

0xf399,	// (0x0008c983) mce_image_pane_g

0xb295,	// (0x0008887f) control_top_pane_stacon_cp01_ParamLimits

0xb295,	// (0x0008887f) control_top_pane_stacon_cp01

0xb2a9,	// (0x00088893) uni_indicator_pane_stacon_cp01_ParamLimits

0xb2a9,	// (0x00088893) uni_indicator_pane_stacon_cp01

0xb2ba,	// (0x000888a4) bg_popup_sub_pane_cp03

0x4508,	// (0x00081af2) chi_dic_find_pane

0x4510,	// (0x00081afa) listscroll_chi_dic_pane

0x4519,	// (0x00081b03) main_pane_chidic_g1

0x452c,	// (0x00081b16) chi_dic_find_pane_t1

0xb2c4,	// (0x000888ae) find_chidic_pane

0xb2cd,	// (0x000888b7) chi_dic_list_pane_ParamLimits

0xb2cd,	// (0x000888b7) chi_dic_list_pane

0xb2de,	// (0x000888c8) scroll_pane_cp020

0x453a,	// (0x00081b24) find_chidic_pane_t1

0xa5de,	// (0x00087bc8) input_focus_pane_cp06

0x4549,	// (0x00081b33) list_chi_dic_pane_ParamLimits

0x4549,	// (0x00081b33) list_chi_dic_pane

0x455e,	// (0x00081b48) list_chi_dic_pane_t1_ParamLimits

0x455e,	// (0x00081b48) list_chi_dic_pane_t1

0xa5de,	// (0x00087bc8) list_highlight_pane_cp020

0xb2e6,	// (0x000888d0) bg_cale_heading_pane_g1

0x4571,	// (0x00081b5b) bg_cale_heading_pane_g2

0x4579,	// (0x00081b63) bg_cale_heading_pane_g3

0x4581,	// (0x00081b6b) bg_cale_heading_pane_g4

0x458b,	// (0x00081b75) bg_cale_heading_pane_g5

0x4595,	// (0x00081b7f) bg_cale_heading_pane_g6

0x459d,	// (0x00081b87) bg_cale_heading_pane_g7

0x45a5,	// (0x00081b8f) bg_cale_heading_pane_g8

0x45af,	// (0x00081b99) bg_cale_heading_pane_g9

0x0008,

0xf3a4,	// (0x0008c98e) bg_cale_heading_pane_g

0xb2e6,	// (0x000888d0) bg_cale_side_pane_g1

0x45b9,	// (0x00081ba3) bg_cale_side_pane_g2

0x45c3,	// (0x00081bad) bg_cale_side_pane_g3

0x45cd,	// (0x00081bb7) bg_cale_side_pane_g4

0x45d7,	// (0x00081bc1) bg_cale_side_pane_g5

0x45e1,	// (0x00081bcb) bg_cale_side_pane_g6

0x45eb,	// (0x00081bd5) bg_cale_side_pane_g7

0x45f5,	// (0x00081bdf) bg_cale_side_pane_g8

0x45fd,	// (0x00081be7) bg_cale_side_pane_g9

0x0008,

0xf3b7,	// (0x0008c9a1) bg_cale_side_pane_g

0x4605,	// (0x00081bef) popup_call_status_window_ParamLimits

0x4605,	// (0x00081bef) popup_call_status_window

0xb2ee,	// (0x000888d8) stacon_top_pane

0xb2f6,	// (0x000888e0) status_pane_ParamLimits

0xb2f6,	// (0x000888e0) status_pane

0xb30b,	// (0x000888f5) status_small_pane

0xb313,	// (0x000888fd) control_pane

0xa5de,	// (0x00087bc8) stacon_bottom_pane

0xb31b,	// (0x00088905) list_single_mce_smart_pane_t1_ParamLimits

0xb31b,	// (0x00088905) list_single_mce_smart_pane_t1

0xb32e,	// (0x00088918) list_single_mce_smart_pane_t2_ParamLimits

0xb32e,	// (0x00088918) list_single_mce_smart_pane_t2

0x0001,

0xf3ca,	// (0x0008c9b4) list_single_mce_smart_pane_t_ParamLimits

0xf3ca,	// (0x0008c9b4) list_single_mce_smart_pane_t

0x4611,	// (0x00081bfb) compass_pane

0x461c,	// (0x00081c06) main_location2_pane_t1

0x4632,	// (0x00081c1c) main_location2_pane_t2

0x4648,	// (0x00081c32) main_location2_pane_t3

0x0003,

0xf3cf,	// (0x0008c9b9) main_location2_pane_t

0xb34d,	// (0x00088937) compass_pane_g1_ParamLimits

0xb34d,	// (0x00088937) compass_pane_g1

0x4696,	// (0x00081c80) compass_pane_t1

0x46a5,	// (0x00081c8f) compass_pane_t2

0x0005,

0xf3d8,	// (0x0008c9c2) compass_pane_t

0x46f0,	// (0x00081cda) text_secondary_cp61

0xb361,	// (0x0008894b) navi_pane_cams_g5

0xb384,	// (0x0008896e) navi_pane_im_t1

0xb392,	// (0x0008897c) navi_pane_mp_g1_ParamLimits

0xb392,	// (0x0008897c) navi_pane_mp_g1

0xb3a6,	// (0x00088990) navi_pane_mp_g2_ParamLimits

0xb3a6,	// (0x00088990) navi_pane_mp_g2

0xb3b2,	// (0x0008899c) navi_pane_mp_g3_ParamLimits

0xb3b2,	// (0x0008899c) navi_pane_mp_g3

0x0002,

0xf3ec,	// (0x0008c9d6) navi_pane_mp_g_ParamLimits

0xf3ec,	// (0x0008c9d6) navi_pane_mp_g

0xb3be,	// (0x000889a8) navi_pane_mp_t1

0xb3cc,	// (0x000889b6) navi_pane_mp_t2

0x0002,

0xf3f3,	// (0x0008c9dd) navi_pane_mp_t

0xb408,	// (0x000889f2) navi_pane_vt_g1

0xb3be,	// (0x000889a8) navi_pane_vt_t1

0xb410,	// (0x000889fa) navi_slider_pane

0xaae2,	// (0x000880cc) zooming_pane

0xb426,	// (0x00088a10) navi_slider_pane_g1

0x4825,	// (0x00081e0f) navi_slider_pane_g2

0x0006,

0xf3fa,	// (0x0008c9e4) navi_slider_pane_g

0xb44a,	// (0x00088a34) aid_levels_zoom

0xb452,	// (0x00088a3c) zooming_pane_g1

0xb45a,	// (0x00088a44) zooming_pane_g2

0xb45a,	// (0x00088a44) zooming_pane_g3

0x0002,

0xf409,	// (0x0008c9f3) zooming_pane_g

0xb462,	// (0x00088a4c) level_10_zoom

0xb46b,	// (0x00088a55) level_11_zoom

0xb474,	// (0x00088a5e) level_1_zoom

0xb47d,	// (0x00088a67) level_2_zoom

0xb486,	// (0x00088a70) level_3_zoom

0xb48f,	// (0x00088a79) level_4_zoom

0xb498,	// (0x00088a82) level_5_zoom

0xb4a1,	// (0x00088a8b) level_6_zoom

0xb4aa,	// (0x00088a94) level_7_zoom

0xb4b3,	// (0x00088a9d) level_8_zoom

0xb4bc,	// (0x00088aa6) level_9_zoom

0xb4cd,	// (0x00088ab7) popup_phob_thumbnail_window_g1

0xb4d5,	// (0x00088abf) popup_phob_thumbnail_window_g2

0x0001,

0xf410,	// (0x0008c9fa) popup_phob_thumbnail_window_g

0xc7d0,	// (0x00089dba) level_1_location

0xc7d8,	// (0x00089dc2) level_2_location

0xc7e0,	// (0x00089dca) level_3_location

0xc7e8,	// (0x00089dd2) level_4_location

0xaae2,	// (0x000880cc) level_5_location

0x4837,	// (0x00081e21) mce_icon_pane_g1

0x483f,	// (0x00081e29) mce_icon_pane_g2

0x0001,

0xf415,	// (0x0008c9ff) mce_icon_pane_g

0x4847,	// (0x00081e31) main_mup_pane_g1_ParamLimits

0x4847,	// (0x00081e31) main_mup_pane_g1

0x485f,	// (0x00081e49) main_mup_pane_g2_ParamLimits

0x485f,	// (0x00081e49) main_mup_pane_g2

0x487b,	// (0x00081e65) main_mup_pane_g3_ParamLimits

0x487b,	// (0x00081e65) main_mup_pane_g3

0x4897,	// (0x00081e81) main_mup_pane_g4_ParamLimits

0x4897,	// (0x00081e81) main_mup_pane_g4

0x48b3,	// (0x00081e9d) main_mup_pane_g5_ParamLimits

0x48b3,	// (0x00081e9d) main_mup_pane_g5

0x48d4,	// (0x00081ebe) main_mup_pane_g6_ParamLimits

0x48d4,	// (0x00081ebe) main_mup_pane_g6

0x48f4,	// (0x00081ede) main_mup_pane_g7_ParamLimits

0x48f4,	// (0x00081ede) main_mup_pane_g7

0x4918,	// (0x00081f02) main_mup_pane_g8_ParamLimits

0x4918,	// (0x00081f02) main_mup_pane_g8

0x493c,	// (0x00081f26) main_mup_pane_g9_ParamLimits

0x493c,	// (0x00081f26) main_mup_pane_g9

0x495f,	// (0x00081f49) main_mup_pane_g10_ParamLimits

0x495f,	// (0x00081f49) main_mup_pane_g10

0x4982,	// (0x00081f6c) main_mup_pane_g11_ParamLimits

0x4982,	// (0x00081f6c) main_mup_pane_g11

0x49a2,	// (0x00081f8c) main_mup_pane_g12_ParamLimits

0x49a2,	// (0x00081f8c) main_mup_pane_g12

0x49b0,	// (0x00081f9a) main_mup_pane_g13_ParamLimits

0x49b0,	// (0x00081f9a) main_mup_pane_g13

0x000c,

0xf41a,	// (0x0008ca04) main_mup_pane_g_ParamLimits

0xf41a,	// (0x0008ca04) main_mup_pane_g

0x49c6,	// (0x00081fb0) main_mup_pane_t1_ParamLimits

0x49c6,	// (0x00081fb0) main_mup_pane_t1

0x49e5,	// (0x00081fcf) main_mup_pane_t2_ParamLimits

0x49e5,	// (0x00081fcf) main_mup_pane_t2

0x49ff,	// (0x00081fe9) main_mup_pane_t3_ParamLimits

0x49ff,	// (0x00081fe9) main_mup_pane_t3

0x4a19,	// (0x00082003) main_mup_pane_t4_ParamLimits

0x4a19,	// (0x00082003) main_mup_pane_t4

0x4a2b,	// (0x00082015) main_mup_pane_t5_ParamLimits

0x4a2b,	// (0x00082015) main_mup_pane_t5

0x4a3d,	// (0x00082027) main_mup_pane_t6_ParamLimits

0x4a3d,	// (0x00082027) main_mup_pane_t6

0x0005,

0xf435,	// (0x0008ca1f) main_mup_pane_t_ParamLimits

0xf435,	// (0x0008ca1f) main_mup_pane_t

0x4a53,	// (0x0008203d) mup_progress_pane_ParamLimits

0x4a53,	// (0x0008203d) mup_progress_pane

0x4a5f,	// (0x00082049) mup_visualizer_pane_ParamLimits

0x4a5f,	// (0x00082049) mup_visualizer_pane

0x4a9d,	// (0x00082087) mup_volume_pane_ParamLimits

0x4a9d,	// (0x00082087) mup_volume_pane

0xb418,	// (0x00088a02) mup_visualizer_pane_g1_ParamLimits

0xb418,	// (0x00088a02) mup_visualizer_pane_g1

0xb418,	// (0x00088a02) mup_visualizer_pane_g2_ParamLimits

0xb418,	// (0x00088a02) mup_visualizer_pane_g2

0xb34d,	// (0x00088937) mup_visualizer_pane_g3_ParamLimits

0xb34d,	// (0x00088937) mup_visualizer_pane_g3

0x0002,

0xf442,	// (0x0008ca2c) mup_visualizer_pane_g_ParamLimits

0xf442,	// (0x0008ca2c) mup_visualizer_pane_g

0xa981,	// (0x00087f6b) mup_volume_pane_g1

0xb4e5,	// (0x00088acf) mup_volume_pane_g2

0x0001,

0xf449,	// (0x0008ca33) mup_volume_pane_g

0xa981,	// (0x00087f6b) mup_progress_pane_g1

0xb4ee,	// (0x00088ad8) mup_progress_pane_g2

0xb4f7,	// (0x00088ae1) mup_progress_pane_g3

0x0002,

0xf44e,	// (0x0008ca38) mup_progress_pane_g

0xa5de,	// (0x00087bc8) bg_popup_window_pane_cp05

0xb500,	// (0x00088aea) heading_pane_cp02_ParamLimits

0xb500,	// (0x00088aea) heading_pane_cp02

0xb51c,	// (0x00088b06) list_popup_blid_pane

0xb524,	// (0x00088b0e) list_blid_sat_info_pane_ParamLimits

0xb524,	// (0x00088b0e) list_blid_sat_info_pane

0xb537,	// (0x00088b21) list_blid_sat_info_pane_g1

0xb53f,	// (0x00088b29) list_blid_sat_info_pane_t1

0x4bbc,	// (0x000821a6) mup_equalizer_pane_ParamLimits

0x4bbc,	// (0x000821a6) mup_equalizer_pane

0x4bdd,	// (0x000821c7) mup_equalizer_pane_cp1_ParamLimits

0x4bdd,	// (0x000821c7) mup_equalizer_pane_cp1

0x4bfe,	// (0x000821e8) mup_equalizer_pane_cp2_ParamLimits

0x4bfe,	// (0x000821e8) mup_equalizer_pane_cp2

0x4c1f,	// (0x00082209) mup_equalizer_pane_cp3_ParamLimits

0x4c1f,	// (0x00082209) mup_equalizer_pane_cp3

0x4c44,	// (0x0008222e) mup_equalizer_pane_cp4_ParamLimits

0x4c44,	// (0x0008222e) mup_equalizer_pane_cp4

0x4c69,	// (0x00082253) mup_equalizer_pane_cp5

0x4c81,	// (0x0008226b) mup_equalizer_pane_cp6

0x4c99,	// (0x00082283) mup_equalizer_pane_cp7

0xc6ea,	// (0x00089cd4) bg_popup_call_poc_act_pane_g9

0xc6f2,	// (0x00089cdc) bg_popup_call_poc_act_pane_g10

0xc6fa,	// (0x00089ce4) bg_popup_call_poc_act_pane_g11

0x000a,

0xa839,	// (0x00087e23) mup_scale_pane

0xa981,	// (0x00087f6b) mup_scale_pane_g1

0xb54d,	// (0x00088b37) mup_scale_pane_g2

0x0006,

0xf46a,	// (0x0008ca54) mup_scale_pane_g

0xb571,	// (0x00088b5b) msg_data_pane

0xb579,	// (0x00088b63) scroll_pane_cp017

0x0d53,	// (0x0007e33d) bg_list_pane_cp04_ParamLimits

0x0d53,	// (0x0007e33d) bg_list_pane_cp04

0xb581,	// (0x00088b6b) msg_data_pane_g1

0x4cc3,	// (0x000822ad) msg_data_pane_g2

0x4ccd,	// (0x000822b7) msg_data_pane_g3

0x4cd7,	// (0x000822c1) msg_data_pane_g4

0x4cdf,	// (0x000822c9) msg_data_pane_g5

0x4ce7,	// (0x000822d1) msg_data_pane_g6

0x4cef,	// (0x000822d9) msg_data_pane_g7

0x0006,

0xf479,	// (0x0008ca63) msg_data_pane_g

0x0d7b,	// (0x0007e365) msg_text_pane_ParamLimits

0x0d7b,	// (0x0007e365) msg_text_pane

0x4cf7,	// (0x000822e1) qrid_highlight_pane_cp011_ParamLimits

0x4cf7,	// (0x000822e1) qrid_highlight_pane_cp011

0xa5de,	// (0x00087bc8) msg_body_pane

0xa5de,	// (0x00087bc8) msg_header_pane

0xb592,	// (0x00088b7c) input_focus_pane_cp07

0x0daf,	// (0x0007e399) msg_header_pane_t1_ParamLimits

0x0daf,	// (0x0007e399) msg_header_pane_t1

0x0dc1,	// (0x0007e3ab) msg_header_pane_t2_ParamLimits

0x0dc1,	// (0x0007e3ab) msg_header_pane_t2

0x0001,

0xf48d,	// (0x0008ca77) msg_header_pane_t_ParamLimits

0xf48d,	// (0x0008ca77) msg_header_pane_t

0xb5a7,	// (0x00088b91) msg_body_pane_g1

0x0dd3,	// (0x0007e3bd) msg_body_pane_t1_ParamLimits

0x0dd3,	// (0x0007e3bd) msg_body_pane_t1

0x0e04,	// (0x0007e3ee) msg_body_pane_t2_ParamLimits

0x0e04,	// (0x0007e3ee) msg_body_pane_t2

0x0e16,	// (0x0007e400) msg_body_pane_t3_ParamLimits

0x0e16,	// (0x0007e400) msg_body_pane_t3

0x0002,

0xf492,	// (0x0008ca7c) msg_body_pane_t_ParamLimits

0xf492,	// (0x0008ca7c) msg_body_pane_t

0x4d5f,	// (0x00082349) main_viewer_pane_g1_ParamLimits

0x4d5f,	// (0x00082349) main_viewer_pane_g1

0x4d6b,	// (0x00082355) main_viewer_pane_g2_ParamLimits

0x4d6b,	// (0x00082355) main_viewer_pane_g2

0x4d77,	// (0x00082361) main_viewer_pane_g3_ParamLimits

0x4d77,	// (0x00082361) main_viewer_pane_g3

0x4d88,	// (0x00082372) main_viewer_pane_g4_ParamLimits

0x4d88,	// (0x00082372) main_viewer_pane_g4

0x4d99,	// (0x00082383) main_viewer_pane_g5_ParamLimits

0x4d99,	// (0x00082383) main_viewer_pane_g5

0x4d99,	// (0x00082383) main_viewer_pane_g7_ParamLimits

0x4d99,	// (0x00082383) main_viewer_pane_g7

0x4dab,	// (0x00082395) main_viewer_pane_g8_ParamLimits

0x4dab,	// (0x00082395) main_viewer_pane_g8

0x0007,

0xf4a2,	// (0x0008ca8c) main_viewer_pane_g_ParamLimits

0xf4a2,	// (0x0008ca8c) main_viewer_pane_g

0xb5af,	// (0x00088b99) viewer_content_pane_ParamLimits

0xb5af,	// (0x00088b99) viewer_content_pane

0x4de3,	// (0x000823cd) main_postcard_pane_g1_ParamLimits

0x4de3,	// (0x000823cd) main_postcard_pane_g1

0x4df1,	// (0x000823db) main_postcard_pane_g2_ParamLimits

0x4df1,	// (0x000823db) main_postcard_pane_g2

0x4dff,	// (0x000823e9) main_postcard_pane_g3_ParamLimits

0x4dff,	// (0x000823e9) main_postcard_pane_g3

0x0005,

0xf4b3,	// (0x0008ca9d) main_postcard_pane_g_ParamLimits

0xf4b3,	// (0x0008ca9d) main_postcard_pane_g

0x4e0f,	// (0x000823f9) main_postcard_pane_g4

0xc913,	// (0x00089efd) smil_status_volume_pane_g2

0x4e3b,	// (0x00082425) postcard_pane_ParamLimits

0x4e3b,	// (0x00082425) postcard_pane

0xb418,	// (0x00088a02) postcard_pane_g1_ParamLimits

0xb418,	// (0x00088a02) postcard_pane_g1

0x4e75,	// (0x0008245f) postcard_pane_g2_ParamLimits

0x4e75,	// (0x0008245f) postcard_pane_g2

0x4e81,	// (0x0008246b) postcard_pane_g3_ParamLimits

0x4e81,	// (0x0008246b) postcard_pane_g3

0xb5bd,	// (0x00088ba7) postcard_pane_g4_ParamLimits

0xb5bd,	// (0x00088ba7) postcard_pane_g4

0x4e8d,	// (0x00082477) postcard_pane_g5_ParamLimits

0x4e8d,	// (0x00082477) postcard_pane_g5

0x4e99,	// (0x00082483) postcard_pane_g6_ParamLimits

0x4e99,	// (0x00082483) postcard_pane_g6

0xb5cb,	// (0x00088bb5) postcard_pane_g7_ParamLimits

0xb5cb,	// (0x00088bb5) postcard_pane_g7

0x0006,

0xf4c0,	// (0x0008caaa) postcard_pane_g_ParamLimits

0xf4c0,	// (0x0008caaa) postcard_pane_g

0x4ea7,	// (0x00082491) main_mp2_pane_g1_ParamLimits

0x4ea7,	// (0x00082491) main_mp2_pane_g1

0x4eb5,	// (0x0008249f) main_mp2_pane_g2_ParamLimits

0x4eb5,	// (0x0008249f) main_mp2_pane_g2

0x4ec1,	// (0x000824ab) main_mp2_pane_g3_ParamLimits

0x4ec1,	// (0x000824ab) main_mp2_pane_g3

0x0002,

0xf4cf,	// (0x0008cab9) main_mp2_pane_g_ParamLimits

0xf4cf,	// (0x0008cab9) main_mp2_pane_g

0x4ecd,	// (0x000824b7) main_mp2_pane_t1_ParamLimits

0x4ecd,	// (0x000824b7) main_mp2_pane_t1

0x4ee4,	// (0x000824ce) main_mp2_pane_t2_ParamLimits

0x4ee4,	// (0x000824ce) main_mp2_pane_t2

0x4ef8,	// (0x000824e2) main_mp2_pane_t3_ParamLimits

0x4ef8,	// (0x000824e2) main_mp2_pane_t3

0x0002,

0xf4d6,	// (0x0008cac0) main_mp2_pane_t_ParamLimits

0xf4d6,	// (0x0008cac0) main_mp2_pane_t

0xb5d9,	// (0x00088bc3) pec_content_pane_ParamLimits

0xb5d9,	// (0x00088bc3) pec_content_pane

0xac8f,	// (0x00088279) scroll_pane_cp015

0xb5eb,	// (0x00088bd5) pec_attribute_pane_ParamLimits

0xb5eb,	// (0x00088bd5) pec_attribute_pane

0x4f0a,	// (0x000824f4) pec_content_pane_g1_ParamLimits

0x4f0a,	// (0x000824f4) pec_content_pane_g1

0xb5fb,	// (0x00088be5) pec_content_pane_t1_ParamLimits

0xb5fb,	// (0x00088be5) pec_content_pane_t1

0xb60d,	// (0x00088bf7) pec_content_pane_t2_ParamLimits

0xb60d,	// (0x00088bf7) pec_content_pane_t2

0x0001,

0xf4dd,	// (0x0008cac7) pec_content_pane_t_ParamLimits

0xf4dd,	// (0x0008cac7) pec_content_pane_t

0x4f16,	// (0x00082500) list_single_graphic_pane_cp01_ParamLimits

0x4f16,	// (0x00082500) list_single_graphic_pane_cp01

0xa839,	// (0x00087e23) bg_popup_sub_pane_cp04

0xb61f,	// (0x00088c09) popup_mup_playback_window_g1

0xb62b,	// (0x00088c15) popup_mup_playback_window_t1

0xb640,	// (0x00088c2a) popup_mup_playback_window_t2

0x0001,

0xf4e2,	// (0x0008cacc) popup_mup_playback_window_t

0xb677,	// (0x00088c61) main_image_pane_g1_ParamLimits

0xb677,	// (0x00088c61) main_image_pane_g1

0xb6ba,	// (0x00088ca4) scroll_pane_cp018_ParamLimits

0xb6ba,	// (0x00088ca4) scroll_pane_cp018

0xb6d2,	// (0x00088cbc) scroll_pane_cp016_ParamLimits

0xb6d2,	// (0x00088cbc) scroll_pane_cp016

0x4fa4,	// (0x0008258e) smil2_image_pane_ParamLimits

0x4fa4,	// (0x0008258e) smil2_image_pane

0x4fda,	// (0x000825c4) smil2_root_pane_ParamLimits

0x4fda,	// (0x000825c4) smil2_root_pane

0x5006,	// (0x000825f0) smil2_text_pane_ParamLimits

0x5006,	// (0x000825f0) smil2_text_pane

0xa5de,	// (0x00087bc8) bg_list_pane_cp06

0xb70e,	// (0x00088cf8) grid_radio_pane

0xa5de,	// (0x00087bc8) bg_popup_window_pane_cp06

0xb718,	// (0x00088d02) main_fmradio_pane_t1

0xb1ca,	// (0x000887b4) heading_pane_cp04

0xb726,	// (0x00088d10) main_fmradio_pane_t2

0xc702,	// (0x00089cec) popup_cale_lunar_info_window_g1

0xb734,	// (0x00088d1e) main_fmradio_pane_t3

0xc70a,	// (0x00089cf4) popup_cale_lunar_info_window_g2

0xb744,	// (0x00088d2e) main_fmradio_pane_t4

0x0001,

0xb752,	// (0x00088d3c) main_fmradio_pane_t5

0x0004,

0xf5bd,	// (0x0008cba7) popup_cale_lunar_info_window_g

0xf4f7,	// (0x0008cae1) main_fmradio_pane_t

0xb760,	// (0x00088d4a) wait_bar_pane_cp03

0xb768,	// (0x00088d52) cell_fmradio_pane_ParamLimits

0xb768,	// (0x00088d52) cell_fmradio_pane

0xb5cb,	// (0x00088bb5) cell_fmradio_pane_g1_ParamLimits

0xb5cb,	// (0x00088bb5) cell_fmradio_pane_g1

0xa5de,	// (0x00087bc8) grid_highlight_pane_cp011

0xb77d,	// (0x00088d67) poc_content_pane_ParamLimits

0xb77d,	// (0x00088d67) poc_content_pane

0xb78f,	// (0x00088d79) scroll_pane_cp019

0x5046,	// (0x00082630) popup_call_poc_act_window_ParamLimits

0x5046,	// (0x00082630) popup_call_poc_act_window

0x5053,	// (0x0008263d) popup_call_poc_inact_window_ParamLimits

0x5053,	// (0x0008263d) popup_call_poc_inact_window

0xf594,	// (0x0008cb7e) bg_popup_call_poc_act_pane_g

0xc67a,	// (0x00089c64) bg_popup_call_poc_inact_pane_g1

0xc682,	// (0x00089c6c) bg_popup_call_poc_inact_pane_g2

0xb797,	// (0x00088d81) popup_call_poc_act_window_g2

0xc68a,	// (0x00089c74) bg_popup_call_poc_inact_pane_g3

0xc692,	// (0x00089c7c) bg_popup_call_poc_inact_pane_g4

0xc69a,	// (0x00089c84) bg_popup_call_poc_inact_pane_g5

0xb79f,	// (0x00088d89) popup_call_poc_act_window_t1_ParamLimits

0xb79f,	// (0x00088d89) popup_call_poc_act_window_t1

0xb7c7,	// (0x00088db1) popup_call_poc_act_window_t2_ParamLimits

0xb7c7,	// (0x00088db1) popup_call_poc_act_window_t2

0xb7ef,	// (0x00088dd9) popup_call_poc_act_window_t3_ParamLimits

0xb7ef,	// (0x00088dd9) popup_call_poc_act_window_t3

0xb817,	// (0x00088e01) popup_call_poc_act_window_t4_ParamLimits

0xb817,	// (0x00088e01) popup_call_poc_act_window_t4

0x0003,

0xf502,	// (0x0008caec) popup_call_poc_act_window_t_ParamLimits

0xf502,	// (0x0008caec) popup_call_poc_act_window_t

0xc6a2,	// (0x00089c8c) bg_popup_call_poc_inact_pane_g6

0xc6aa,	// (0x00089c94) bg_popup_call_poc_inact_pane_g7

0xc6b2,	// (0x00089c9c) bg_popup_call_poc_inact_pane_g8

0xb829,	// (0x00088e13) popup_call_poc_inact_window_g2

0xc6ba,	// (0x00089ca4) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf581,	// (0x0008cb6b) bg_popup_call_poc_inact_pane_g

0xb831,	// (0x00088e1b) popup_call_poc_inact_window_t1_ParamLimits

0xb831,	// (0x00088e1b) popup_call_poc_inact_window_t1

0xb846,	// (0x00088e30) popup_call_poc_inact_window_t2_ParamLimits

0xb846,	// (0x00088e30) popup_call_poc_inact_window_t2

0xb85b,	// (0x00088e45) popup_call_poc_inact_window_t3_ParamLimits

0xb85b,	// (0x00088e45) popup_call_poc_inact_window_t3

0x0002,

0xf50b,	// (0x0008caf5) popup_call_poc_inact_window_t_ParamLimits

0xf50b,	// (0x0008caf5) popup_call_poc_inact_window_t

0xc886,	// (0x00089e70) context_pane_ParamLimits

0x5662,	// (0x00082c4c) signal_pane_ParamLimits

0xaae2,	// (0x000880cc) main_call2_pane

0xc874,	// (0x00089e5e) popup_phob_thumbnail2_window_ParamLimits

0xc874,	// (0x00089e5e) popup_phob_thumbnail2_window

0x4d0d,	// (0x000822f7) aid_hotspot_pointer_arrow_pane

0x4d15,	// (0x000822ff) aid_hotspot_pointer_hand_pane

0x5378,	// (0x00082962) phob_pre_status_pane_g5

0x2f52,	// (0x0008053c) cams_zoom_pane_ParamLimits

0x2f5e,	// (0x00080548) image_vga_pane_ParamLimits

0x2f6d,	// (0x00080557) main_camera_pane_g1_ParamLimits

0x2f7b,	// (0x00080565) main_camera_pane_g2_ParamLimits

0x2f87,	// (0x00080571) main_camera_pane_g3_ParamLimits

0x2f95,	// (0x0008057f) main_camera_pane_g4_ParamLimits

0x2fa3,	// (0x0008058d) main_camera_pane_g5_ParamLimits

0x2fb1,	// (0x0008059b) main_camera_pane_g6_ParamLimits

0x2fbf,	// (0x000805a9) main_camera_pane_g7_ParamLimits

0xf20a,	// (0x0008c7f4) main_camera_pane_g_ParamLimits

0x2fcd,	// (0x000805b7) main_camera_pane_t1_ParamLimits

0x2fdf,	// (0x000805c9) main_camera_pane_t2_ParamLimits

0xf21b,	// (0x0008c805) main_camera_pane_t_ParamLimits

0xa839,	// (0x00087e23) bg_popup_preview_window_pane_cp01_ParamLimits

0xa839,	// (0x00087e23) bg_popup_preview_window_pane_cp01

0xb870,	// (0x00088e5a) popup_phob_thumbnail2_window_g1_ParamLimits

0xb870,	// (0x00088e5a) popup_phob_thumbnail2_window_g1

0xa5de,	// (0x00087bc8) call2_cli_visual_pane

0x506f,	// (0x00082659) popup_call2_audio_conf_window_ParamLimits

0x506f,	// (0x00082659) popup_call2_audio_conf_window

0x5088,	// (0x00082672) popup_call2_audio_first_window_ParamLimits

0x5088,	// (0x00082672) popup_call2_audio_first_window

0x5126,	// (0x00082710) popup_call2_audio_in_window_ParamLimits

0x5126,	// (0x00082710) popup_call2_audio_in_window

0x516a,	// (0x00082754) popup_call2_audio_out_window_ParamLimits

0x516a,	// (0x00082754) popup_call2_audio_out_window

0x51d4,	// (0x000827be) popup_call2_audio_second_window_ParamLimits

0x51d4,	// (0x000827be) popup_call2_audio_second_window

0x5232,	// (0x0008281c) popup_call2_audio_wait_window_ParamLimits

0x5232,	// (0x0008281c) popup_call2_audio_wait_window

0xa5de,	// (0x00087bc8) bg_popup_call2_act_pane_cp03

0xa81b,	// (0x00087e05) list_conf_pane_cp

0xb87c,	// (0x00088e66) popup_call2_audio_conf_window_t1

0xb88a,	// (0x00088e74) list_single_graphic_popup_conf2_pane_ParamLimits

0xb88a,	// (0x00088e74) list_single_graphic_popup_conf2_pane

0xb239,	// (0x00088823) list_highlight_pane_cp04

0xb89d,	// (0x00088e87) list_single_graphic_popup_conf2_pane_g1

0xb24a,	// (0x00088834) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf512,	// (0x0008cafc) list_single_graphic_popup_conf2_pane_g

0xb8a7,	// (0x00088e91) list_single_graphic_popup_conf2_pane_t1

0xb8b5,	// (0x00088e9f) bg_popup_call2_act_pane_cp01_ParamLimits

0xb8b5,	// (0x00088e9f) bg_popup_call2_act_pane_cp01

0xb93f,	// (0x00088f29) call_type_pane_cp05_ParamLimits

0xb93f,	// (0x00088f29) call_type_pane_cp05

0xb993,	// (0x00088f7d) popup_call2_audio_second_window_g1_ParamLimits

0xb993,	// (0x00088f7d) popup_call2_audio_second_window_g1

0xb9e7,	// (0x00088fd1) popup_call2_audio_second_window_g2_ParamLimits

0xb9e7,	// (0x00088fd1) popup_call2_audio_second_window_g2

0x0002,

0xf517,	// (0x0008cb01) popup_call2_audio_second_window_g_ParamLimits

0xf517,	// (0x0008cb01) popup_call2_audio_second_window_g

0xba4c,	// (0x00089036) popup_call2_audio_second_window_t1_ParamLimits

0xba4c,	// (0x00089036) popup_call2_audio_second_window_t1

0xbb07,	// (0x000890f1) popup_call2_audio_second_window_t2_ParamLimits

0xbb07,	// (0x000890f1) popup_call2_audio_second_window_t2

0xbb5a,	// (0x00089144) popup_call2_audio_second_window_t3_ParamLimits

0xbb5a,	// (0x00089144) popup_call2_audio_second_window_t3

0x0003,

0xf51e,	// (0x0008cb08) popup_call2_audio_second_window_t_ParamLimits

0xf51e,	// (0x0008cb08) popup_call2_audio_second_window_t

0xa5de,	// (0x00087bc8) bg_popup_call2_in_pane_cp02

0xa5e8,	// (0x00087bd2) call_type_pane_cp04

0xa5f0,	// (0x00087bda) popup_call2_audio_wait_window_g1

0xa5f8,	// (0x00087be2) popup_call2_audio_wait_window_g2

0x0001,

0xf0f9,	// (0x0008c6e3) popup_call2_audio_wait_window_g

0xa600,	// (0x00087bea) popup_call2_audio_wait_window_t3

0xbc4d,	// (0x00089237) bg_popup_call2_act_pane_ParamLimits

0xbc4d,	// (0x00089237) bg_popup_call2_act_pane

0xbd0d,	// (0x000892f7) call_type_pane_cp03_ParamLimits

0xbd0d,	// (0x000892f7) call_type_pane_cp03

0xbd71,	// (0x0008935b) popup_call2_audio_first_window_g1_ParamLimits

0xbd71,	// (0x0008935b) popup_call2_audio_first_window_g1

0xbde1,	// (0x000893cb) popup_call2_audio_first_window_g2_ParamLimits

0xbde1,	// (0x000893cb) popup_call2_audio_first_window_g2

0xb418,	// (0x00088a02) popup_call2_audio_first_window_g3_ParamLimits

0xb418,	// (0x00088a02) popup_call2_audio_first_window_g3

0x0004,

0xf527,	// (0x0008cb11) popup_call2_audio_first_window_g_ParamLimits

0xf527,	// (0x0008cb11) popup_call2_audio_first_window_g

0xbebf,	// (0x000894a9) popup_call2_audio_first_window_t1_ParamLimits

0xbebf,	// (0x000894a9) popup_call2_audio_first_window_t1

0xbfc2,	// (0x000895ac) popup_call2_audio_first_window_t4_ParamLimits

0xbfc2,	// (0x000895ac) popup_call2_audio_first_window_t4

0xc0a5,	// (0x0008968f) popup_call2_audio_first_window_t5_ParamLimits

0xc0a5,	// (0x0008968f) popup_call2_audio_first_window_t5

0x0003,

0xf532,	// (0x0008cb1c) popup_call2_audio_first_window_t_ParamLimits

0xf532,	// (0x0008cb1c) popup_call2_audio_first_window_t

0xa831,	// (0x00087e1b) bg_popup_call2_act_pane_g1

0xc714,	// (0x00089cfe) popup_cale_lunar_info_window_t1

0xc722,	// (0x00089d0c) popup_cale_lunar_info_window_t2

0xc730,	// (0x00089d1a) popup_cale_lunar_info_window_t3

0xa5de,	// (0x00087bc8) bg_popup_call2_bubble_pane

0xc1a6,	// (0x00089790) bg_popup_call2_in_pane_cp01_ParamLimits

0xc1a6,	// (0x00089790) bg_popup_call2_in_pane_cp01

0xa2ba,	// (0x000878a4) call_type_pane_cp02

0xc1ee,	// (0x000897d8) popup_call2_audio_out_window_g1_ParamLimits

0xc1ee,	// (0x000897d8) popup_call2_audio_out_window_g1

0xc21a,	// (0x00089804) popup_call2_audio_out_window_g2_ParamLimits

0xc21a,	// (0x00089804) popup_call2_audio_out_window_g2

0xc242,	// (0x0008982c) popup_call2_audio_out_window_g3_ParamLimits

0xc242,	// (0x0008982c) popup_call2_audio_out_window_g3

0x0003,

0xf53b,	// (0x0008cb25) popup_call2_audio_out_window_g_ParamLimits

0xf53b,	// (0x0008cb25) popup_call2_audio_out_window_g

0xc27d,	// (0x00089867) popup_call2_audio_out_window_t1_ParamLimits

0xc27d,	// (0x00089867) popup_call2_audio_out_window_t1

0xc2dc,	// (0x000898c6) popup_call2_audio_out_window_t2_ParamLimits

0xc2dc,	// (0x000898c6) popup_call2_audio_out_window_t2

0xc330,	// (0x0008991a) popup_call2_audio_out_window_t3_ParamLimits

0xc330,	// (0x0008991a) popup_call2_audio_out_window_t3

0xc346,	// (0x00089930) popup_call2_audio_out_window_t4_ParamLimits

0xc346,	// (0x00089930) popup_call2_audio_out_window_t4

0xc35c,	// (0x00089946) popup_call2_audio_out_window_t5_ParamLimits

0xc35c,	// (0x00089946) popup_call2_audio_out_window_t5

0x0005,

0xf544,	// (0x0008cb2e) popup_call2_audio_out_window_t_ParamLimits

0xf544,	// (0x0008cb2e) popup_call2_audio_out_window_t

0xc3c0,	// (0x000899aa) bg_popup_call2_in_pane_ParamLimits

0xc3c0,	// (0x000899aa) bg_popup_call2_in_pane

0xc41c,	// (0x00089a06) popup_call2_audio_in_window_g1_ParamLimits

0xc41c,	// (0x00089a06) popup_call2_audio_in_window_g1

0xc454,	// (0x00089a3e) popup_call2_audio_in_window_g2_ParamLimits

0xc454,	// (0x00089a3e) popup_call2_audio_in_window_g2

0xc48c,	// (0x00089a76) popup_call2_audio_in_window_g3_ParamLimits

0xc48c,	// (0x00089a76) popup_call2_audio_in_window_g3

0x0003,

0xf551,	// (0x0008cb3b) popup_call2_audio_in_window_g_ParamLimits

0xf551,	// (0x0008cb3b) popup_call2_audio_in_window_g

0xc4e4,	// (0x00089ace) popup_call2_audio_in_window_t1_ParamLimits

0xc4e4,	// (0x00089ace) popup_call2_audio_in_window_t1

0xc564,	// (0x00089b4e) popup_call2_audio_in_window_t2_ParamLimits

0xc564,	// (0x00089b4e) popup_call2_audio_in_window_t2

0xc5e4,	// (0x00089bce) popup_call2_audio_in_window_t3_ParamLimits

0xc5e4,	// (0x00089bce) popup_call2_audio_in_window_t3

0xc5fe,	// (0x00089be8) popup_call2_audio_in_window_t4_ParamLimits

0xc5fe,	// (0x00089be8) popup_call2_audio_in_window_t4

0xc610,	// (0x00089bfa) popup_call2_audio_in_window_t5_ParamLimits

0xc610,	// (0x00089bfa) popup_call2_audio_in_window_t5

0xc625,	// (0x00089c0f) popup_call2_audio_in_window_t6_ParamLimits

0xc625,	// (0x00089c0f) popup_call2_audio_in_window_t6

0x0005,

0xf55a,	// (0x0008cb44) popup_call2_audio_in_window_t_ParamLimits

0xf55a,	// (0x0008cb44) popup_call2_audio_in_window_t

0xa831,	// (0x00087e1b) bg_popup_call2_in_pane_g1

0xc73e,	// (0x00089d28) popup_cale_lunar_info_window_t4

0x0003,

0xf5c2,	// (0x0008cbac) popup_cale_lunar_info_window_t

0xa839,	// (0x00087e23) bg_popup_call2_rect_pane_ParamLimits

0xa839,	// (0x00087e23) bg_popup_call2_rect_pane

0xa5de,	// (0x00087bc8) call2_cli_visual_graphic_pane

0xa5de,	// (0x00087bc8) call2_cli_visual_text_pane

0x56fa,	// (0x00082ce4) smil_status_volume_pane_g3

0x0002,

0xa981,	// (0x00087f6b) call2_cli_visual_graphic_pane_g1

0xa981,	// (0x00087f6b) call2_cli_visual_graphic_pane_g2

0xa981,	// (0x00087f6b) call2_cli_visual_graphic_pane_g3

0x0002,

0xf567,	// (0x0008cb51) call2_cli_visual_graphic_pane_g

0xc63a,	// (0x00089c24) bg_popup_call2_rect_pane_g1

0xaa1f,	// (0x00088009) bg_popup_call2_rect_pane_g2

0xc642,	// (0x00089c2c) bg_popup_call2_rect_pane_g3

0xc64a,	// (0x00089c34) bg_popup_call2_rect_pane_g4

0xc652,	// (0x00089c3c) bg_popup_call2_rect_pane_g5

0xc65a,	// (0x00089c44) bg_popup_call2_rect_pane_g6

0xc662,	// (0x00089c4c) bg_popup_call2_rect_pane_g7

0xc66a,	// (0x00089c54) bg_popup_call2_rect_pane_g8

0xc672,	// (0x00089c5c) bg_popup_call2_rect_pane_g9

0x0008,

0xf56e,	// (0x0008cb58) bg_popup_call2_rect_pane_g

0xc67a,	// (0x00089c64) bg_popup_call2_bubble_pane_g1

0xc682,	// (0x00089c6c) bg_popup_call2_bubble_pane_g2

0xc68a,	// (0x00089c74) bg_popup_call2_bubble_pane_g3

0xc692,	// (0x00089c7c) bg_popup_call2_bubble_pane_g4

0xc69a,	// (0x00089c84) bg_popup_call2_bubble_pane_g5

0xc6a2,	// (0x00089c8c) bg_popup_call2_bubble_pane_g6

0xc6aa,	// (0x00089c94) bg_popup_call2_bubble_pane_g7

0xc6b2,	// (0x00089c9c) bg_popup_call2_bubble_pane_g8

0xc6ba,	// (0x00089ca4) bg_popup_call2_bubble_pane_g9

0x0008,

0xf581,	// (0x0008cb6b) bg_popup_call2_bubble_pane_g

0x26a2,	// (0x0007fc8c) aid_cale_week_size_cell_pane

0x2ff3,	// (0x000805dd) aid_cams_cif_uncrop_pane_ParamLimits

0x2ff3,	// (0x000805dd) aid_cams_cif_uncrop_pane

0x3150,	// (0x0008073a) aid_cams_size_cell_ParamLimits

0x3150,	// (0x0008073a) aid_cams_size_cell

0x315c,	// (0x00080746) grid_cams_pane_ParamLimits

0x316a,	// (0x00080754) linegrid_cams_pane_ParamLimits

0x3253,	// (0x0008083d) call_video_pane_t1

0x3270,	// (0x0008085a) call_video_pane_t2

0x0001,

0xf26e,	// (0x0008c858) call_video_pane_t

0x373c,	// (0x00080d26) aid_cale_month_size_cell_pane_ParamLimits

0x373c,	// (0x00080d26) aid_cale_month_size_cell_pane

0xf60b,	// (0x0008cbf5) smil_status_volume_pane_g

0x5707,	// (0x00082cf1) volume_smil_pane_ParamLimits

0xa18c,	// (0x00087776) aid_popup2_width_pane

0x25a4,	// (0x0007fb8e) cell_qdial_pane_g4_ParamLimits

0x25a4,	// (0x0007fb8e) cell_qdial_pane_g4

0x4672,	// (0x00081c5c) aid_blid_cardinal_pane_ParamLimits

0x4682,	// (0x00081c6c) aid_blid_destination_pane_ParamLimits

0x4682,	// (0x00081c6c) aid_blid_destination_pane

0xa839,	// (0x00087e23) bg_popup_call_poc_act_pane_ParamLimits

0xa839,	// (0x00087e23) bg_popup_call_poc_act_pane

0xa839,	// (0x00087e23) bg_popup_call_poc_inact_pane_ParamLimits

0xa839,	// (0x00087e23) bg_popup_call_poc_inact_pane

0xc6c2,	// (0x00089cac) bg_popup_call_poc_act_pane_g1

0xc6ca,	// (0x00089cb4) bg_popup_call_poc_act_pane_g2

0xc6d2,	// (0x00089cbc) bg_popup_call_poc_act_pane_g3

0xc692,	// (0x00089c7c) bg_popup_call_poc_act_pane_g4

0xc69a,	// (0x00089c84) bg_popup_call_poc_act_pane_g5

0xc6da,	// (0x00089cc4) bg_popup_call_poc_act_pane_g6

0xc6aa,	// (0x00089c94) bg_popup_call_poc_act_pane_g7

0xc6e2,	// (0x00089ccc) bg_popup_call_poc_act_pane_g8

0xa5de,	// (0x00087bc8) main_usb_pane

0xc84b,	// (0x00089e35) popup_cale_lunar_info_window

0x3588,	// (0x00080b72) im_reading_pane_t1_ParamLimits

0xabe7,	// (0x000881d1) list_im_pane_ParamLimits

0xabf8,	// (0x000881e2) scroll_pane_cp07_ParamLimits

0xa5de,	// (0x00087bc8) grid_highlight_pane_cp012

0xa839,	// (0x00087e23) mup_scale_pane_ParamLimits

0xb418,	// (0x00088a02) main_usb_pane_g1_ParamLimits

0xb418,	// (0x00088a02) main_usb_pane_g1

0x529b,	// (0x00082885) main_usb_pane_g2_ParamLimits

0x529b,	// (0x00082885) main_usb_pane_g2

0x0001,

0xf5ab,	// (0x0008cb95) main_usb_pane_g_ParamLimits

0xf5ab,	// (0x0008cb95) main_usb_pane_g

0x52a7,	// (0x00082891) main_usb_pane_t1_ParamLimits

0x52a7,	// (0x00082891) main_usb_pane_t1

0x52b9,	// (0x000828a3) main_usb_pane_t2_ParamLimits

0x52b9,	// (0x000828a3) main_usb_pane_t2

0x52cb,	// (0x000828b5) main_usb_pane_t3_ParamLimits

0x52cb,	// (0x000828b5) main_usb_pane_t3

0x52dd,	// (0x000828c7) main_usb_pane_t4_ParamLimits

0x52dd,	// (0x000828c7) main_usb_pane_t4

0x52ef,	// (0x000828d9) main_usb_pane_t5_ParamLimits

0x52ef,	// (0x000828d9) main_usb_pane_t5

0x5301,	// (0x000828eb) main_usb_pane_t6_ParamLimits

0x5301,	// (0x000828eb) main_usb_pane_t6

0x0005,

0xf5b0,	// (0x0008cb9a) main_usb_pane_t_ParamLimits

0x4611,	// (0x00081bfb) aid_text_placing

0x461c,	// (0x00081c06) main_location2_pane_t1_ParamLimits

0x4632,	// (0x00081c1c) main_location2_pane_t2_ParamLimits

0x4648,	// (0x00081c32) main_location2_pane_t3_ParamLimits

0x465e,	// (0x00081c48) main_location2_pane_t4_ParamLimits

0x465e,	// (0x00081c48) main_location2_pane_t4

0xf3cf,	// (0x0008c9b9) main_location2_pane_t_ParamLimits

0xa875,	// (0x00087e5f) find_pinb_pane_g2_ParamLimits

0xa875,	// (0x00087e5f) find_pinb_pane_g2

0x0001,

0xf11f,	// (0x0008c709) find_pinb_pane_g_ParamLimits

0xf11f,	// (0x0008c709) find_pinb_pane_g

0xa881,	// (0x00087e6b) find_pinb_pane_t1_ParamLimits

0xa893,	// (0x00087e7d) find_pinb_pane_t2_ParamLimits

0xf124,	// (0x0008c70e) find_pinb_pane_t_ParamLimits

0xa5de,	// (0x00087bc8) main_call3_pane

0x3cbb,	// (0x000812a5) cale_month_day_heading_pane_t1_ParamLimits

0x3d3d,	// (0x00081327) cale_month_day_heading_pane_t2_ParamLimits

0x3dca,	// (0x000813b4) cale_month_day_heading_pane_t3_ParamLimits

0x3e57,	// (0x00081441) cale_month_day_heading_pane_t4_ParamLimits

0x3ee4,	// (0x000814ce) cale_month_day_heading_pane_t5_ParamLimits

0x3f79,	// (0x00081563) cale_month_day_heading_pane_t6_ParamLimits

0x4016,	// (0x00081600) cale_month_day_heading_pane_t7_ParamLimits

0xf2a6,	// (0x0008c890) cale_month_day_heading_pane_t_ParamLimits

0x42c2,	// (0x000818ac) smil_status_volume_pane

0x4e59,	// (0x00082443) postcard_address_pane_ParamLimits

0x4e59,	// (0x00082443) postcard_address_pane

0x4e67,	// (0x00082451) postcard_message_pane_ParamLimits

0x4e67,	// (0x00082451) postcard_message_pane

0x5271,	// (0x0008285b) call2_cli_visual_pane_t1_ParamLimits

0x5271,	// (0x0008285b) call2_cli_visual_pane_t1

0x5866,	// (0x00082e50) postcard_message_pane_t1_ParamLimits

0x5866,	// (0x00082e50) postcard_message_pane_t1

0x584f,	// (0x00082e39) postcard_address_pane_t1_ParamLimits

0x584f,	// (0x00082e39) postcard_address_pane_t1

0x5840,	// (0x00082e2a) popup_call3_audio_in_window_ParamLimits

0x5840,	// (0x00082e2a) popup_call3_audio_in_window

0x571e,	// (0x00082d08) bg_popup_call3_in_pane_ParamLimits

0x571e,	// (0x00082d08) bg_popup_call3_in_pane

0x5786,	// (0x00082d70) popup_call3_audio_in_window_g1_ParamLimits

0x5786,	// (0x00082d70) popup_call3_audio_in_window_g1

0x579e,	// (0x00082d88) popup_call3_audio_in_window_g2_ParamLimits

0x579e,	// (0x00082d88) popup_call3_audio_in_window_g2

0x57b6,	// (0x00082da0) popup_call3_audio_in_window_g3_ParamLimits

0x57b6,	// (0x00082da0) popup_call3_audio_in_window_g3

0x0003,

0xf612,	// (0x0008cbfc) popup_call3_audio_in_window_g_ParamLimits

0xf612,	// (0x0008cbfc) popup_call3_audio_in_window_g

0x57de,	// (0x00082dc8) popup_call3_audio_in_window_t1_ParamLimits

0x57de,	// (0x00082dc8) popup_call3_audio_in_window_t1

0x5806,	// (0x00082df0) popup_call3_audio_in_window_t2_ParamLimits

0x5806,	// (0x00082df0) popup_call3_audio_in_window_t2

0x582e,	// (0x00082e18) popup_call3_audio_in_window_t3_ParamLimits

0x582e,	// (0x00082e18) popup_call3_audio_in_window_t3

0x0002,

0xf61b,	// (0x0008cc05) popup_call3_audio_in_window_t_ParamLimits

0xf61b,	// (0x0008cc05) popup_call3_audio_in_window_t

0xaae2,	// (0x000880cc) bg_popup_call3_rect_pane

0xc63a,	// (0x00089c24) bg_popup_call3_rect_pane_g1

0xaa1f,	// (0x00088009) bg_popup_call3_rect_pane_g2

0xc642,	// (0x00089c2c) bg_popup_call3_rect_pane_g3

0xc64a,	// (0x00089c34) bg_popup_call3_rect_pane_g4

0xc652,	// (0x00089c3c) bg_popup_call3_rect_pane_g5

0xc65a,	// (0x00089c44) bg_popup_call3_rect_pane_g6

0xc662,	// (0x00089c4c) bg_popup_call3_rect_pane_g7

0x4ab8,	// (0x000820a2) mup_visualizer_osc_pane

0xb4dd,	// (0x00088ac7) mup_visualizer_spec_pane

0x573e,	// (0x00082d28) call3_video_qcif_pane_ParamLimits

0x573e,	// (0x00082d28) call3_video_qcif_pane

0x5750,	// (0x00082d3a) call3_video_qcif_uncrop_pane_ParamLimits

0x5750,	// (0x00082d3a) call3_video_qcif_uncrop_pane

0x5760,	// (0x00082d4a) call3_video_subqcif_pane_ParamLimits

0x5760,	// (0x00082d4a) call3_video_subqcif_pane

0x5774,	// (0x00082d5e) call3_video_subqcif_uncrop_pane_ParamLimits

0x5774,	// (0x00082d5e) call3_video_subqcif_uncrop_pane

0x57ce,	// (0x00082db8) popup_call3_audio_in_window_g4_ParamLimits

0x57ce,	// (0x00082db8) popup_call3_audio_in_window_g4

0x56e9,	// (0x00082cd3) mup_spec_half_pane

0x56f2,	// (0x00082cdc) mup_spec_half_pane_cp

0xc8e6,	// (0x00089ed0) mup_osc_middle_pane

0xc8ef,	// (0x00089ed9) mup_visualizer_osc_pane_g1

0x56c9,	// (0x00082cb3) mup_spec_bar_pane_ParamLimits

0x56c9,	// (0x00082cb3) mup_spec_bar_pane

0xc8d3,	// (0x00089ebd) mup_spec_bar_pane_g1

0xc8dd,	// (0x00089ec7) mup_spec_bar_pane_g2

0x0001,

0xf606,	// (0x0008cbf0) mup_spec_bar_pane_g

0x26a2,	// (0x0007fc8c) aid_cale_week_size_cell_pane_ParamLimits

0x26bc,	// (0x0007fca6) bg_cale_heading_pane_ParamLimits

0x26e5,	// (0x0007fccf) bg_cale_pane_cp01_ParamLimits

0x2707,	// (0x0007fcf1) cale_week_corner_pane_ParamLimits

0x2726,	// (0x0007fd10) cale_week_day_heading_pane_ParamLimits

0x2754,	// (0x0007fd3e) cale_week_scroll_pane_g1_ParamLimits

0x2778,	// (0x0007fd62) cale_week_scroll_pane_g2_ParamLimits

0x2790,	// (0x0007fd7a) cale_week_scroll_pane_g3_ParamLimits

0x27a8,	// (0x0007fd92) cale_week_scroll_pane_g4_ParamLimits

0x27c0,	// (0x0007fdaa) cale_week_scroll_pane_g5_ParamLimits

0x27d8,	// (0x0007fdc2) cale_week_scroll_pane_g6_ParamLimits

0x27f8,	// (0x0007fde2) cale_week_scroll_pane_g7_ParamLimits

0x2818,	// (0x0007fe02) cale_week_scroll_pane_g8_ParamLimits

0x2838,	// (0x0007fe22) cale_week_scroll_pane_g9_ParamLimits

0x2855,	// (0x0007fe3f) cale_week_scroll_pane_g10_ParamLimits

0x2872,	// (0x0007fe5c) cale_week_scroll_pane_g11_ParamLimits

0x288f,	// (0x0007fe79) cale_week_scroll_pane_g12_ParamLimits

0x28ac,	// (0x0007fe96) cale_week_scroll_pane_g13_ParamLimits

0x28d1,	// (0x0007febb) cale_week_scroll_pane_g14_ParamLimits

0x28fa,	// (0x0007fee4) cale_week_scroll_pane_g15_ParamLimits

0xf1b0,	// (0x0008c79a) cale_week_scroll_pane_g_ParamLimits

0x2943,	// (0x0007ff2d) cale_week_time_pane_ParamLimits

0x2963,	// (0x0007ff4d) grid_cale_week_pane_ParamLimits

0xaa53,	// (0x0008803d) listscroll_cale_week_pane_t1

0xaa65,	// (0x0008804f) scroll_pane_cp08_ParamLimits

0x37a9,	// (0x00080d93) cale_month_corner_pane_ParamLimits

0xae18,	// (0x00088402) cale_month_pane_t1

0x3c4d,	// (0x00081237) cale_month_week_pane_ParamLimits

0xb418,	// (0x00088a02) popup_call_status_window_g1_ParamLimits

0x441a,	// (0x00081a04) popup_call_status_window_g2_ParamLimits

0x4426,	// (0x00081a10) popup_call_status_window_g3_ParamLimits

0xf356,	// (0x0008c940) popup_call_status_window_g_ParamLimits

0xb1ba,	// (0x000887a4) aid_call2_pane

0x0da1,	// (0x0007e38b) msg_header_pane_g1

0x4e59,	// (0x00082443) postcard_address2_pane_ParamLimits

0x4e59,	// (0x00082443) postcard_address2_pane

0x4e67,	// (0x00082451) postcard_message2_pane_ParamLimits

0x4e67,	// (0x00082451) postcard_message2_pane

0x5670,	// (0x00082c5a) message2_row_pane_ParamLimits

0x5670,	// (0x00082c5a) message2_row_pane

0x568a,	// (0x00082c74) address2_row_pane_ParamLimits

0x568a,	// (0x00082c74) address2_row_pane

0xc8a1,	// (0x00089e8b) postcard_message2_row_pane_g1

0xc8a9,	// (0x00089e93) postcard_message2_row_pane_t1

0xc8a1,	// (0x00089e8b) address2_row_pane_g1

0xc8a9,	// (0x00089e93) address2_row_pane_t1

0x2ecb,	// (0x000804b5) aid_size_cell_vorec

0xa5de,	// (0x00087bc8) main_rss_pane

0x569d,	// (0x00082c87) rss_list_single_pane_ParamLimits

0x569d,	// (0x00082c87) rss_list_single_pane

0xc8b7,	// (0x00089ea1) rss_list_single_pane_t1

0xc8c5,	// (0x00089eaf) rss_list_single_pane_t2

0x0001,

0xf601,	// (0x0008cbeb) rss_list_single_pane_t

0xa5de,	// (0x00087bc8) main_camera2_pane

0xa5de,	// (0x00087bc8) main_video2_pane

0x58ca,	// (0x00082eb4) cams_zoom_pane_cp2_ParamLimits

0x58ca,	// (0x00082eb4) cams_zoom_pane_cp2

0x58d6,	// (0x00082ec0) image2_vga_pane_ParamLimits

0x58d6,	// (0x00082ec0) image2_vga_pane

0x58e5,	// (0x00082ecf) main_camera2_pane_g1_ParamLimits

0x58e5,	// (0x00082ecf) main_camera2_pane_g1

0x58f1,	// (0x00082edb) main_camera2_pane_g2_ParamLimits

0x58f1,	// (0x00082edb) main_camera2_pane_g2

0x58fd,	// (0x00082ee7) main_camera2_pane_g3_ParamLimits

0x58fd,	// (0x00082ee7) main_camera2_pane_g3

0x5909,	// (0x00082ef3) main_camera2_pane_g4_ParamLimits

0x5909,	// (0x00082ef3) main_camera2_pane_g4

0x5915,	// (0x00082eff) main_camera2_pane_g5_ParamLimits

0x5915,	// (0x00082eff) main_camera2_pane_g5

0x5921,	// (0x00082f0b) main_camera2_pane_g6_ParamLimits

0x5921,	// (0x00082f0b) main_camera2_pane_g6

0x592d,	// (0x00082f17) main_camera2_pane_g7_ParamLimits

0x592d,	// (0x00082f17) main_camera2_pane_g7

0x5939,	// (0x00082f23) main_camera2_pane_g8_ParamLimits

0x5939,	// (0x00082f23) main_camera2_pane_g8

0x0008,

0xf622,	// (0x0008cc0c) main_camera2_pane_g_ParamLimits

0xf622,	// (0x0008cc0c) main_camera2_pane_g

0x5951,	// (0x00082f3b) main_camera2_pane_t1_ParamLimits

0x5951,	// (0x00082f3b) main_camera2_pane_t1

0x5963,	// (0x00082f4d) main_camera2_pane_t2_ParamLimits

0x5963,	// (0x00082f4d) main_camera2_pane_t2

0x5975,	// (0x00082f5f) main_camera2_pane_t3_ParamLimits

0x5975,	// (0x00082f5f) main_camera2_pane_t3

0x5987,	// (0x00082f71) main_camera2_pane_t4_ParamLimits

0x5987,	// (0x00082f71) main_camera2_pane_t4

0x0006,

0xf635,	// (0x0008cc1f) main_camera2_pane_t_ParamLimits

0xf635,	// (0x0008cc1f) main_camera2_pane_t

0x59e4,	// (0x00082fce) cams_zoom_pane_cp4_ParamLimits

0x59e4,	// (0x00082fce) cams_zoom_pane_cp4

0x59f4,	// (0x00082fde) image2_cif_pane_ParamLimits

0x59f4,	// (0x00082fde) image2_cif_pane

0x5a09,	// (0x00082ff3) image2_subqcif_pane_ParamLimits

0x5a09,	// (0x00082ff3) image2_subqcif_pane

0x5a18,	// (0x00083002) main_video2_pane_g1_ParamLimits

0x5a18,	// (0x00083002) main_video2_pane_g1

0x5a2a,	// (0x00083014) main_video2_pane_g2_ParamLimits

0x5a2a,	// (0x00083014) main_video2_pane_g2

0x5a3a,	// (0x00083024) main_video2_pane_g3_ParamLimits

0x5a3a,	// (0x00083024) main_video2_pane_g3

0x5a4a,	// (0x00083034) main_video2_pane_g4_ParamLimits

0x5a4a,	// (0x00083034) main_video2_pane_g4

0x5a5a,	// (0x00083044) main_video2_pane_g5_ParamLimits

0x5a5a,	// (0x00083044) main_video2_pane_g5

0x5a6a,	// (0x00083054) main_video2_pane_g6_ParamLimits

0x5a6a,	// (0x00083054) main_video2_pane_g6

0x0005,

0xf644,	// (0x0008cc2e) main_video2_pane_g_ParamLimits

0xf644,	// (0x0008cc2e) main_video2_pane_g

0x5a7c,	// (0x00083066) main_video2_pane_t1_ParamLimits

0x5a7c,	// (0x00083066) main_video2_pane_t1

0x5a96,	// (0x00083080) main_video2_pane_t2_ParamLimits

0x5a96,	// (0x00083080) main_video2_pane_t2

0x5abc,	// (0x000830a6) main_video2_pane_t3_ParamLimits

0x5abc,	// (0x000830a6) main_video2_pane_t3

0x0002,

0xf651,	// (0x0008cc3b) main_video2_pane_t_ParamLimits

0xf651,	// (0x0008cc3b) main_video2_pane_t

0x53b8,	// (0x000829a2) call_muted_g2

0x0001,

0xf5f3,	// (0x0008cbdd) call_muted_g

0xa5de,	// (0x00087bc8) main_mup2_pane

0xc926,	// (0x00089f10) main_mup2_pane_g1_ParamLimits

0xc926,	// (0x00089f10) main_mup2_pane_g1

0x5ae2,	// (0x000830cc) main_mup2_pane_g2_ParamLimits

0x5ae2,	// (0x000830cc) main_mup2_pane_g2

0x5d74,	// (0x0008335e) main_mup_pane_g13_cp1

0x5d7c,	// (0x00083366) mup_volume_pane_cp1

0x5b04,	// (0x000830ee) main_mup2_pane_g4_ParamLimits

0x5b04,	// (0x000830ee) main_mup2_pane_g4

0x5b19,	// (0x00083103) main_mup2_pane_g5_ParamLimits

0x5b19,	// (0x00083103) main_mup2_pane_g5

0x5b2e,	// (0x00083118) main_mup2_pane_g6_ParamLimits

0x5b2e,	// (0x00083118) main_mup2_pane_g6

0x5b43,	// (0x0008312d) main_mup2_pane_g7_ParamLimits

0x5b43,	// (0x0008312d) main_mup2_pane_g7

0x0006,

0xf658,	// (0x0008cc42) main_mup2_pane_g_ParamLimits

0xf658,	// (0x0008cc42) main_mup2_pane_g

0x5b5f,	// (0x00083149) main_mup2_pane_t1_ParamLimits

0x5b5f,	// (0x00083149) main_mup2_pane_t1

0x5b76,	// (0x00083160) main_mup2_pane_t2_ParamLimits

0x5b76,	// (0x00083160) main_mup2_pane_t2

0x5b8d,	// (0x00083177) main_mup2_pane_t3_ParamLimits

0x5b8d,	// (0x00083177) main_mup2_pane_t3

0x5ba4,	// (0x0008318e) main_mup2_pane_t4_ParamLimits

0x5ba4,	// (0x0008318e) main_mup2_pane_t4

0x5bbe,	// (0x000831a8) main_mup2_pane_t5_ParamLimits

0x5bbe,	// (0x000831a8) main_mup2_pane_t5

0x5bd8,	// (0x000831c2) main_mup2_pane_t6_ParamLimits

0x5bd8,	// (0x000831c2) main_mup2_pane_t6

0x0005,

0xf667,	// (0x0008cc51) main_mup2_pane_t_ParamLimits

0xf667,	// (0x0008cc51) main_mup2_pane_t

0x5c10,	// (0x000831fa) mup2_visualizer_pane_ParamLimits

0x5c10,	// (0x000831fa) mup2_visualizer_pane

0x5c46,	// (0x00083230) mup_progress_pane_cp_ParamLimits

0x5c46,	// (0x00083230) mup_progress_pane_cp

0x5d5f,	// (0x00083349) mup_volume_pane_cp_ParamLimits

0x5d5f,	// (0x00083349) mup_volume_pane_cp

0x5c5f,	// (0x00083249) mup2_visualizer_pane_g1_ParamLimits

0x5c5f,	// (0x00083249) mup2_visualizer_pane_g1

0xc932,	// (0x00089f1c) mup2_visualizer_pane_g2_ParamLimits

0xc932,	// (0x00089f1c) mup2_visualizer_pane_g2

0x5c74,	// (0x0008325e) mup2_visualizer_pane_g3_ParamLimits

0x5c74,	// (0x0008325e) mup2_visualizer_pane_g3

0x0002,

0xf674,	// (0x0008cc5e) mup2_visualizer_pane_g_ParamLimits

0xf674,	// (0x0008cc5e) mup2_visualizer_pane_g

0xb706,	// (0x00088cf0) aid_size_cell_fmradio

0x54ce,	// (0x00082ab8) aid_height_parent_landcape

0xac76,	// (0x00088260) wml_content_pane_cp

0xac7e,	// (0x00088268) wml_tabs_pane

0xac87,	// (0x00088271) popup_wml_miniature_window

0xac8f,	// (0x00088279) scroll_pane_cp021

0xaca3,	// (0x0008828d) wml_content_pane_comp8

0xa5de,	// (0x00087bc8) bg_popup_sub_pane_cp05

0xc950,	// (0x00089f3a) popup_wml_miniature_window_g1

0xc958,	// (0x00089f42) wml_miniature_view_pane

0x5c82,	// (0x0008326c) aid_size_wml_view

0x5c8a,	// (0x00083274) wml_miniature_view_pane_g1

0x5c93,	// (0x0008327d) wml_miniature_view_pane_g2

0x5c9c,	// (0x00083286) wml_miniature_view_pane_g3

0x5ca4,	// (0x0008328e) wml_miniature_view_pane_g4

0x5cac,	// (0x00083296) wml_miniature_view_pane_g5

0x5cb4,	// (0x0008329e) wml_miniature_view_pane_g6

0x5cbc,	// (0x000832a6) wml_miniature_view_pane_g7

0x5cc4,	// (0x000832ae) wml_miniature_view_pane_g8

0x0007,

0xf67b,	// (0x0008cc65) wml_miniature_view_pane_g

0xc926,	// (0x00089f10) background_graphic_ParamLimits

0xc926,	// (0x00089f10) background_graphic

0xc960,	// (0x00089f4a) wml_tabs_2_pane

0xc969,	// (0x00089f53) wml_tabs_3_pane_ParamLimits

0xc969,	// (0x00089f53) wml_tabs_3_pane

0xc97b,	// (0x00089f65) wml_tabs_4_pane_ParamLimits

0xc97b,	// (0x00089f65) wml_tabs_4_pane

0xc991,	// (0x00089f7b) wml_tabs_5_pane_ParamLimits

0xc991,	// (0x00089f7b) wml_tabs_5_pane

0xc9ab,	// (0x00089f95) wml_tabs_pane_g2_ParamLimits

0xc9ab,	// (0x00089f95) wml_tabs_pane_g2

0xc9bf,	// (0x00089fa9) wml_tabs_pane_g3_ParamLimits

0xc9bf,	// (0x00089fa9) wml_tabs_pane_g3

0x5ccc,	// (0x000832b6) wml_tabs_2_active_pane_ParamLimits

0x5ccc,	// (0x000832b6) wml_tabs_2_active_pane

0x5cde,	// (0x000832c8) wml_tabs_2_passive_pane_ParamLimits

0x5cde,	// (0x000832c8) wml_tabs_2_passive_pane

0x5cf0,	// (0x000832da) wml_tabs_3_active_pane_cp_ParamLimits

0x5cf0,	// (0x000832da) wml_tabs_3_active_pane_cp

0x5d03,	// (0x000832ed) wml_tabs_3_passive_pane_ParamLimits

0x5d03,	// (0x000832ed) wml_tabs_3_passive_pane

0x5d14,	// (0x000832fe) wml_tabs_3_passive_pane_cp_ParamLimits

0x5d14,	// (0x000832fe) wml_tabs_3_passive_pane_cp

0x5d29,	// (0x00083313) tabs_4_active_pane

0x5d31,	// (0x0008331b) tabs_4_passive_pane

0x5d39,	// (0x00083323) tabs_4_passive_pane_cp

0x5d41,	// (0x0008332b) tabs_4_passive_pane_cp2

0x5293,	// (0x0008287d) aid_height_text

0x4a81,	// (0x0008206b) mup_volume_cont_pane_ParamLimits

0x4a81,	// (0x0008206b) mup_volume_cont_pane

0x21fa,	// (0x0007f7e4) aid_size_cell_pinb

0x2204,	// (0x0007f7ee) aid_size_list_pinb

0x5c2f,	// (0x00083219) mup2_volume_cont_pane_ParamLimits

0x5c2f,	// (0x00083219) mup2_volume_cont_pane

0x5d4b,	// (0x00083335) mup2_volume_cont_pane_g1_ParamLimits

0x5d4b,	// (0x00083335) mup2_volume_cont_pane_g1

0x1e74,	// (0x0007f45e) aid_size_cell_touch_ParamLimits

0x1e74,	// (0x0007f45e) aid_size_cell_touch

0x20e4,	// (0x0007f6ce) touch_pane_ParamLimits

0x20e4,	// (0x0007f6ce) touch_pane

0xa17a,	// (0x00087764) main_rss2_pane

0xc9dc,	// (0x00089fc6) listscroll_rss2_pane

0xc9e5,	// (0x00089fcf) rss2_navigation_pane

0xc9ed,	// (0x00089fd7) list_rss2_pane

0xb2de,	// (0x000888c8) scroll_pane_cp22

0xc9f5,	// (0x00089fdf) rss2_navigation_pane_g1

0xc9fe,	// (0x00089fe8) rss2_navigation_pane_g2

0xca06,	// (0x00089ff0) rss2_navigation_pane_g3

0x0002,

0xf68c,	// (0x0008cc76) rss2_navigation_pane_g

0xca0e,	// (0x00089ff8) rss2_navigation_pane_t1

0x5d84,	// (0x0008336e) rss2_list_single_pane_ParamLimits

0x5d84,	// (0x0008336e) rss2_list_single_pane

0xca1c,	// (0x0008a006) rss2_list_single_pane_t2

0xca2a,	// (0x0008a014) rss2_list_single_pane_t3_ParamLimits

0xca2a,	// (0x0008a014) rss2_list_single_pane_t3

0xca47,	// (0x0008a031) rss2_list_single_pane_t4

0x42ac,	// (0x00081896) smil_status_pane_g1

0xa8c0,	// (0x00087eaa) main_image2_pane_ParamLimits

0xa8c0,	// (0x00087eaa) main_image2_pane

0x5945,	// (0x00082f2f) main_camera2_pane_g9_ParamLimits

0x5945,	// (0x00082f2f) main_camera2_pane_g9

0x5999,	// (0x00082f83) main_camera2_pane_t5_ParamLimits

0x5999,	// (0x00082f83) main_camera2_pane_t5

0x59ab,	// (0x00082f95) main_camera2_pane_t6_ParamLimits

0x59ab,	// (0x00082f95) main_camera2_pane_t6

0x5da7,	// (0x00083391) main_image2_pane_g1_ParamLimits

0x5da7,	// (0x00083391) main_image2_pane_g1

0x5030,	// (0x0008261a) smil2_video_pane_ParamLimits

0x5030,	// (0x0008261a) smil2_video_pane

0x0b4a,	// (0x0007e134) aid_zoom_text_primary_cp

0xa1c1,	// (0x000877ab) popup_preview_fixed_window

0xabdf,	// (0x000881c9) im_reading_pane_g1

0x588f,	// (0x00082e79) cams2_bc_adjust_pane_cp_ParamLimits

0x588f,	// (0x00082e79) cams2_bc_adjust_pane_cp

0x59d6,	// (0x00082fc0) cams2_bc_adjust_pane_ParamLimits

0x59d6,	// (0x00082fc0) cams2_bc_adjust_pane

0x5db3,	// (0x0008339d) cams2_bc_adjust_pane_g1

0x5dbb,	// (0x000833a5) cams2_slider_pane

0x5dc4,	// (0x000833ae) cams2_slider_pane_g1

0x5dcd,	// (0x000833b7) cams2_slider_pane_g2

0x0006,

0xf693,	// (0x0008cc7d) cams2_slider_pane_g

0x22ff,	// (0x0007f8e9) calc_display_pane_ParamLimits

0x231d,	// (0x0007f907) calc_paper_pane_ParamLimits

0x2339,	// (0x0007f923) grid_calc_pane_ParamLimits

0x4484,	// (0x00081a6e) popup_clock_digital_window_t1_ParamLimits

0xb6a3,	// (0x00088c8d) main_image_pane_t1

0x22e5,	// (0x0007f8cf) aid_size_cell_calc_ParamLimits

0x22e5,	// (0x0007f8cf) aid_size_cell_calc

0x5500,	// (0x00082aea) popup_blid_sat_info2_window_ParamLimits

0x5500,	// (0x00082aea) popup_blid_sat_info2_window

0xca5d,	// (0x0008a047) aid_size_cell_blid

0xca65,	// (0x0008a04f) bg_popup_window_pane_cp07

0xca88,	// (0x0008a072) grid_popup_blid_pane

0xca92,	// (0x0008a07c) heading_pane_cp05_ParamLimits

0xca92,	// (0x0008a07c) heading_pane_cp05

0xcb5c,	// (0x0008a146) cell_popup_blid_pane_ParamLimits

0xcb5c,	// (0x0008a146) cell_popup_blid_pane

0xcb86,	// (0x0008a170) cell_popup_blid_pane_g1

0xcb8e,	// (0x0008a178) cell_popup_blid_pane_t1

0x5bf5,	// (0x000831df) mup2_indicator_pane_ParamLimits

0x5bf5,	// (0x000831df) mup2_indicator_pane

0xaae2,	// (0x000880cc) mup2_visualizer_osc_pane

0xc93e,	// (0x00089f28) mup2_visualizer_spec_pane_ParamLimits

0xc93e,	// (0x00089f28) mup2_visualizer_spec_pane

0x5de7,	// (0x000833d1) mup2_spec_half_pane

0x5df0,	// (0x000833da) mup2_spec_half_pane_cp

0x5dfa,	// (0x000833e4) mup2_spec_bar_pane_ParamLimits

0x5dfa,	// (0x000833e4) mup2_spec_bar_pane

0xc8d3,	// (0x00089ebd) mup2_spec_bar_pane_g1

0xc8dd,	// (0x00089ec7) mup2_spec_bar_pane_g2

0x0001,

0xf606,	// (0x0008cbf0) mup2_spec_bar_pane_g

0x5e19,	// (0x00083403) mup2_osc_middle_pane

0xc8ef,	// (0x00089ed9) mup2_visualizer_osc_pane_g1

0xa1eb,	// (0x000877d5) popup_number_entry_window_t1_ParamLimits

0xa1fe,	// (0x000877e8) popup_number_entry_window_t2_ParamLimits

0xa210,	// (0x000877fa) popup_number_entry_window_t3_ParamLimits

0x213b,	// (0x0007f725) popup_number_entry_window_t5_ParamLimits

0x213b,	// (0x0007f725) popup_number_entry_window_t5

0xf0ca,	// (0x0008c6b4) popup_number_entry_window_t_ParamLimits

0xa222,	// (0x0008780c) text_title_cp2_ParamLimits

0x4d1d,	// (0x00082307) aid_hotspot_pointer_text2_pane

0x4db7,	// (0x000823a1) main_viewer_pane_g9_ParamLimits

0x4db7,	// (0x000823a1) main_viewer_pane_g9

0xae18,	// (0x00088402) cale_month_pane_t1_ParamLimits

0xae3e,	// (0x00088428) bg_cale_pane_ParamLimits

0xae56,	// (0x00088440) list_cale_pane_ParamLimits

0xae67,	// (0x00088451) listscroll_cale_day_pane_t1

0xae79,	// (0x00088463) scroll_pane_cp09_ParamLimits

0x4ac0,	// (0x000820aa) main_mup_eq_pane_t1_ParamLimits

0x4ac0,	// (0x000820aa) main_mup_eq_pane_t1

0x4adc,	// (0x000820c6) main_mup_eq_pane_t2_ParamLimits

0x4adc,	// (0x000820c6) main_mup_eq_pane_t2

0x4af8,	// (0x000820e2) main_mup_eq_pane_t3_ParamLimits

0x4af8,	// (0x000820e2) main_mup_eq_pane_t3

0x4b12,	// (0x000820fc) main_mup_eq_pane_t4_ParamLimits

0x4b12,	// (0x000820fc) main_mup_eq_pane_t4

0x4b2c,	// (0x00082116) main_mup_eq_pane_t5_ParamLimits

0x4b2c,	// (0x00082116) main_mup_eq_pane_t5

0x4b46,	// (0x00082130) main_mup_eq_pane_t6_ParamLimits

0x4b46,	// (0x00082130) main_mup_eq_pane_t6

0x4b5c,	// (0x00082146) main_mup_eq_pane_t7_ParamLimits

0x4b5c,	// (0x00082146) main_mup_eq_pane_t7

0x4b72,	// (0x0008215c) main_mup_eq_pane_t8_ParamLimits

0x4b72,	// (0x0008215c) main_mup_eq_pane_t8

0x4b88,	// (0x00082172) main_mup_eq_pane_t9_ParamLimits

0x4b88,	// (0x00082172) main_mup_eq_pane_t9

0x4ba4,	// (0x0008218e) main_mup_eq_pane_t10_ParamLimits

0x4ba4,	// (0x0008218e) main_mup_eq_pane_t10

0x0009,

0xf455,	// (0x0008ca3f) main_mup_eq_pane_t_ParamLimits

0xf455,	// (0x0008ca3f) main_mup_eq_pane_t

0x4c69,	// (0x00082253) mup_equalizer_pane_cp5_ParamLimits

0x4c81,	// (0x0008226b) mup_equalizer_pane_cp6_ParamLimits

0x4c99,	// (0x00082283) mup_equalizer_pane_cp7_ParamLimits

0xa17a,	// (0x00087764) main_gallery_pane

0xc8f8,	// (0x00089ee2) smil2_volume_pane

0xc900,	// (0x00089eea) smil_status_volume_pane_g1_ParamLimits

0xc913,	// (0x00089efd) smil_status_volume_pane_g2_ParamLimits

0x56fa,	// (0x00082ce4) smil_status_volume_pane_g3_ParamLimits

0xf60b,	// (0x0008cbf5) smil_status_volume_pane_g_ParamLimits

0xca65,	// (0x0008a04f) bg_popup_window_pane_cp07_ParamLimits

0xca73,	// (0x0008a05d) blid_firmament_pane

0x5e22,	// (0x0008340c) aid_size_cell_gallery_ParamLimits

0x5e22,	// (0x0008340c) aid_size_cell_gallery

0x5e30,	// (0x0008341a) grid_gallery_pane_ParamLimits

0x5e30,	// (0x0008341a) grid_gallery_pane

0x5e40,	// (0x0008342a) cell_gallery_pane_ParamLimits

0x5e40,	// (0x0008342a) cell_gallery_pane

0xcb9c,	// (0x0008a186) bg_cell_gallery_focus_pane_ParamLimits

0xcb9c,	// (0x0008a186) bg_cell_gallery_focus_pane

0xcbae,	// (0x0008a198) cell_gallery_pane_g1_ParamLimits

0xcbae,	// (0x0008a198) cell_gallery_pane_g1

0x5e86,	// (0x00083470) cell_gallery_pane_g2_ParamLimits

0x5e86,	// (0x00083470) cell_gallery_pane_g2

0x5e93,	// (0x0008347d) cell_gallery_pane_g3_ParamLimits

0x5e93,	// (0x0008347d) cell_gallery_pane_g3

0xcbba,	// (0x0008a1a4) cell_gallery_pane_g4_ParamLimits

0xcbba,	// (0x0008a1a4) cell_gallery_pane_g4

0x0003,

0xf6b9,	// (0x0008cca3) cell_gallery_pane_g_ParamLimits

0xf6b9,	// (0x0008cca3) cell_gallery_pane_g

0xcbc6,	// (0x0008a1b0) bg_cell_gallery_focus_pane_g1

0xcbce,	// (0x0008a1b8) bg_cell_gallery_focus_pane_g2

0xcbd6,	// (0x0008a1c0) bg_cell_gallery_focus_pane_g3

0xcbde,	// (0x0008a1c8) bg_cell_gallery_focus_pane_g4

0xcbe6,	// (0x0008a1d0) bg_cell_gallery_focus_pane_g5

0xcbee,	// (0x0008a1d8) bg_cell_gallery_focus_pane_g6

0xcbf6,	// (0x0008a1e0) bg_cell_gallery_focus_pane_g7

0xcbfe,	// (0x0008a1e8) bg_cell_gallery_focus_pane_g8

0x0007,

0xf6c2,	// (0x0008ccac) bg_cell_gallery_focus_pane_g

0xcc06,	// (0x0008a1f0) aid_firma_cardinal

0xcc1a,	// (0x0008a204) blid_firmament_pane_t1

0xcc31,	// (0x0008a21b) blid_firmament_pane_t2

0xcc48,	// (0x0008a232) blid_firmament_pane_t3

0xcc5f,	// (0x0008a249) blid_firmament_pane_t4

0x0003,

0xf6d3,	// (0x0008ccbd) blid_firmament_pane_t

0xcc76,	// (0x0008a260) blid_sat_info_pane

0xcc86,	// (0x0008a270) blid_sat_info_pane_g1

0xcc86,	// (0x0008a270) blid_sat_info_pane_g2

0x0001,

0xf6dc,	// (0x0008ccc6) blid_sat_info_pane_g

0xcc90,	// (0x0008a27a) blid_sat_info_pane_t1

0xcc9e,	// (0x0008a288) smil2_volume_content_pane

0xcca7,	// (0x0008a291) smil2_volume_pane_g1

0xccaf,	// (0x0008a299) smil2_volume_content_pane_g1

0xccb8,	// (0x0008a2a2) smil2_volume_content_pane_g2

0xccc1,	// (0x0008a2ab) smil2_volume_content_pane_g3

0xccca,	// (0x0008a2b4) smil2_volume_content_pane_g4

0xccd3,	// (0x0008a2bd) smil2_volume_content_pane_g5

0xccdc,	// (0x0008a2c6) smil2_volume_content_pane_g6

0xcce5,	// (0x0008a2cf) smil2_volume_content_pane_g7

0xccee,	// (0x0008a2d8) smil2_volume_content_pane_g8

0xccf7,	// (0x0008a2e1) smil2_volume_content_pane_g9

0xcd00,	// (0x0008a2ea) smil2_volume_content_pane_g10

0x0009,

0xf6e1,	// (0x0008cccb) smil2_volume_content_pane_g

0x2a26,	// (0x00080010) cale_week_day_heading_pane_t1_ParamLimits

0x2a6e,	// (0x00080058) cale_week_day_heading_pane_t2_ParamLimits

0x2abb,	// (0x000800a5) cale_week_day_heading_pane_t3_ParamLimits

0x2b08,	// (0x000800f2) cale_week_day_heading_pane_t4_ParamLimits

0x2b55,	// (0x0008013f) cale_week_day_heading_pane_t5_ParamLimits

0x2ba2,	// (0x0008018c) cale_week_day_heading_pane_t6_ParamLimits

0x2bef,	// (0x000801d9) cale_week_day_heading_pane_t7_ParamLimits

0xf1d1,	// (0x0008c7bb) cale_week_day_heading_pane_t_ParamLimits

0xaa87,	// (0x00088071) bg_cale_side_pane_ParamLimits

0x2c37,	// (0x00080221) cale_week_time_pane_t1_ParamLimits

0x2c7b,	// (0x00080265) cale_week_time_pane_t2_ParamLimits

0x2cbf,	// (0x000802a9) cale_week_time_pane_t3_ParamLimits

0x2d03,	// (0x000802ed) cale_week_time_pane_t4_ParamLimits

0x2d47,	// (0x00080331) cale_week_time_pane_t5_ParamLimits

0x2d8b,	// (0x00080375) cale_week_time_pane_t6_ParamLimits

0x2dcf,	// (0x000803b9) cale_week_time_pane_t7_ParamLimits

0x2e1b,	// (0x00080405) cale_week_time_pane_t8_ParamLimits

0xf1e0,	// (0x0008c7ca) cale_week_time_pane_t_ParamLimits

0x2e69,	// (0x00080453) cell_cale_week_pane_g2_ParamLimits

0xaa87,	// (0x00088071) bg_cale_side_pane_cp01_ParamLimits

0x40b3,	// (0x0008169d) cale_month_week_pane_t1_ParamLimits

0x40cc,	// (0x000816b6) cale_month_week_pane_t2_ParamLimits

0x40e5,	// (0x000816cf) cale_month_week_pane_t3_ParamLimits

0x40fe,	// (0x000816e8) cale_month_week_pane_t4_ParamLimits

0x4117,	// (0x00081701) cale_month_week_pane_t5_ParamLimits

0x4132,	// (0x0008171c) cale_month_week_pane_t6_ParamLimits

0xf2b5,	// (0x0008c89f) cale_month_week_pane_t_ParamLimits

0x4275,	// (0x0008185f) cell_cale_month_pane_g1_ParamLimits

0xa17a,	// (0x00087764) main_cale_event_viewer_pane

0xa17a,	// (0x00087764) listscroll_cale_event_viewer_pane

0xcd09,	// (0x0008a2f3) list_cale_ev_pane

0xcd11,	// (0x0008a2fb) scroll_pane_cp023

0x5ea0,	// (0x0008348a) field_cale_ev_pane_ParamLimits

0x5ea0,	// (0x0008348a) field_cale_ev_pane

0xcd1d,	// (0x0008a307) field_cale_ev_content_pane_ParamLimits

0xcd1d,	// (0x0008a307) field_cale_ev_content_pane

0xcd29,	// (0x0008a313) field_cale_ev_pane_g1_ParamLimits

0xcd29,	// (0x0008a313) field_cale_ev_pane_g1

0xcd35,	// (0x0008a31f) field_cale_ev_pane_g2_ParamLimits

0xcd35,	// (0x0008a31f) field_cale_ev_pane_g2

0xcd4d,	// (0x0008a337) field_cale_ev_pane_g3_ParamLimits

0xcd4d,	// (0x0008a337) field_cale_ev_pane_g3

0x0002,

0xf6f6,	// (0x0008cce0) field_cale_ev_pane_g_ParamLimits

0xf6f6,	// (0x0008cce0) field_cale_ev_pane_g

0xcd65,	// (0x0008a34f) field_cale_ev_pane_t1_ParamLimits

0xcd65,	// (0x0008a34f) field_cale_ev_pane_t1

0x5ec4,	// (0x000834ae) field_cale_ev_content_pane_t1_ParamLimits

0x5ec4,	// (0x000834ae) field_cale_ev_content_pane_t1

0xb589,	// (0x00088b73) bg_button_pane_cp01

0x2686,	// (0x0007fc70) listscroll_cale_week_pane_ParamLimits

0x2698,	// (0x0007fc82) popup_toolbar_window_cp01

0xaa53,	// (0x0008803d) listscroll_cale_week_pane_t1_ParamLimits

0x2686,	// (0x0007fc70) listscroll_cale_day_pane_ParamLimits

0x2698,	// (0x0007fc82) popup_toolbar_window_cp02

0xae67,	// (0x00088451) listscroll_cale_day_pane_t1_ParamLimits

0x2686,	// (0x0007fc70) main_cale_month_pane_ParamLimits

0x55e4,	// (0x00082bce) popup_toolbar_window_cp03_ParamLimits

0x55e4,	// (0x00082bce) popup_toolbar_window_cp03

0x4f40,	// (0x0008252a) main_image_pane_g2_ParamLimits

0x4f40,	// (0x0008252a) main_image_pane_g2

0x4f4c,	// (0x00082536) main_image_pane_g3_ParamLimits

0x4f4c,	// (0x00082536) main_image_pane_g3

0x0002,

0xf4e7,	// (0x0008cad1) main_image_pane_g_ParamLimits

0xf4e7,	// (0x0008cad1) main_image_pane_g

0xb6a3,	// (0x00088c8d) main_image_pane_t1_ParamLimits

0x4f58,	// (0x00082542) main_image_pane_t2_ParamLimits

0x4f58,	// (0x00082542) main_image_pane_t2

0x4f6a,	// (0x00082554) main_image_pane_t3_ParamLimits

0x4f6a,	// (0x00082554) main_image_pane_t3

0x4f7c,	// (0x00082566) main_image_pane_t4_ParamLimits

0x4f7c,	// (0x00082566) main_image_pane_t4

0x0003,

0xf4ee,	// (0x0008cad8) main_image_pane_t_ParamLimits

0xf4ee,	// (0x0008cad8) main_image_pane_t

0x4f8e,	// (0x00082578) popup_image_details_window_cp01

0x4f98,	// (0x00082582) popup_toobar_trans_pane_cp01_ParamLimits

0x4f98,	// (0x00082582) popup_toobar_trans_pane_cp01

0x5555,	// (0x00082b3f) popup_image_details_window_ParamLimits

0x5555,	// (0x00082b3f) popup_image_details_window

0xc857,	// (0x00089e41) popup_image_focus_window

0x5881,	// (0x00082e6b) camera2_autofocus_pane_ParamLimits

0x5881,	// (0x00082e6b) camera2_autofocus_pane

0xa17a,	// (0x00087764) bg_popup_sub_pane_cp06

0xcd7c,	// (0x0008a366) popup_image_focus_window_g1

0xcd84,	// (0x0008a36e) popup_image_focus_window_g2

0xcd8c,	// (0x0008a376) popup_image_focus_window_g3

0xcd94,	// (0x0008a37e) popup_image_focus_window_g4

0x0003,

0xf6fd,	// (0x0008cce7) popup_image_focus_window_g

0xcd9c,	// (0x0008a386) popup_image_focus_window_t1

0xcdaa,	// (0x0008a394) popup_image_focus_window_t2

0xcdba,	// (0x0008a3a4) popup_image_focus_window_t3

0x0002,

0xf706,	// (0x0008ccf0) popup_image_focus_window_t

0xcdc8,	// (0x0008a3b2) camera2_autofocus_pane_g1

0xa8c0,	// (0x00087eaa) bg_tb_trans_pane_cp01

0xcdd6,	// (0x0008a3c0) popup_image_details_window_g1

0xcde9,	// (0x0008a3d3) popup_image_details_window_g2

0x0002,

0xf718,	// (0x0008cd02) popup_image_details_window_g

0xce12,	// (0x0008a3fc) popup_image_details_window_t1

0xce24,	// (0x0008a40e) popup_image_details_window_t2

0xce3d,	// (0x0008a427) popup_image_details_window_t3

0xce51,	// (0x0008a43b) popup_image_details_window_t4

0xce6c,	// (0x0008a456) popup_image_details_window_t5

0x0004,

0xf71f,	// (0x0008cd09) popup_image_details_window_t

0xa918,	// (0x00087f02) bg_calc_paper_pane_ParamLimits

0xa17a,	// (0x00087764) grid_highlight_pane_cp013

0x2436,	// (0x0007fa20) list_calc_pane_ParamLimits

0x2448,	// (0x0007fa32) scroll_pane_cp024

0xa92c,	// (0x00087f16) bg_calc_display_pane_ParamLimits

0x2450,	// (0x0007fa3a) calc_display_pane_t1_ParamLimits

0x2465,	// (0x0007fa4f) calc_display_pane_t2_ParamLimits

0x247a,	// (0x0007fa64) calc_display_pane_t3_ParamLimits

0xf151,	// (0x0008c73b) calc_display_pane_t_ParamLimits

0x254e,	// (0x0007fb38) cell_calc_pane_g2

0x0001,

0xf16e,	// (0x0008c758) cell_calc_pane_g

0x2557,	// (0x0007fb41) cell_calc_pane_t1

0xa98b,	// (0x00087f75) grid_highlight_pane_cp02_ParamLimits

0xa9a1,	// (0x00087f8b) toolbar_button_pane_cp01_ParamLimits

0xa9a1,	// (0x00087f8b) toolbar_button_pane_cp01

0xb6e8,	// (0x00088cd2) temp_image_control_pane_ParamLimits

0xb6e8,	// (0x00088cd2) temp_image_control_pane

0xa8c0,	// (0x00087eaa) main_mp3_pane

0xce86,	// (0x0008a470) temp_image_control_pane_g1_ParamLimits

0xce86,	// (0x0008a470) temp_image_control_pane_g1

0xce94,	// (0x0008a47e) temp_image_control_pane_g2_ParamLimits

0xce94,	// (0x0008a47e) temp_image_control_pane_g2

0xcea6,	// (0x0008a490) temp_image_control_pane_g3_ParamLimits

0xcea6,	// (0x0008a490) temp_image_control_pane_g3

0x5f0f,	// (0x000834f9) temp_image_control_pane_g4_ParamLimits

0x5f0f,	// (0x000834f9) temp_image_control_pane_g4

0x0003,

0xf72a,	// (0x0008cd14) temp_image_control_pane_g_ParamLimits

0xf72a,	// (0x0008cd14) temp_image_control_pane_g

0xce86,	// (0x0008a470) main_mp3_pane_g1

0x5f20,	// (0x0008350a) main_mp3_pane_g2

0x0007,

0xf733,	// (0x0008cd1d) main_mp3_pane_g

0xcee9,	// (0x0008a4d3) main_mp3_pane_t1

0xaaea,	// (0x000880d4) main_camera_pane_g8_ParamLimits

0xaaea,	// (0x000880d4) main_camera_pane_g8

0x3106,	// (0x000806f0) main_video_pane_g7_ParamLimits

0x3106,	// (0x000806f0) main_video_pane_g7

0x59c4,	// (0x00082fae) main_camera2_pane_t7_ParamLimits

0x59c4,	// (0x00082fae) main_camera2_pane_t7

0xac36,	// (0x00088220) scroll_pane_cp025_ParamLimits

0xac36,	// (0x00088220) scroll_pane_cp025

0xac4a,	// (0x00088234) scroll_pane_cp026_ParamLimits

0xac4a,	// (0x00088234) scroll_pane_cp026

0xac59,	// (0x00088243) wml_content_pane_ParamLimits

0xa17a,	// (0x00087764) main_touch_calib_pane

0x5fc4,	// (0x000835ae) main_touch_calib_pane_g1

0x5fd0,	// (0x000835ba) main_touch_calib_pane_g2

0x5fdc,	// (0x000835c6) main_touch_calib_pane_g3

0x5fe8,	// (0x000835d2) main_touch_calib_pane_g4

0x0003,

0xf751,	// (0x0008cd3b) main_touch_calib_pane_g

0x5ff4,	// (0x000835de) main_touch_calib_pane_t1

0x600b,	// (0x000835f5) main_touch_calib_pane_t2

0x0004,

0xf75a,	// (0x0008cd44) main_touch_calib_pane_t

0xb359,	// (0x00088943) mup_progress_pane_cp02

0xb378,	// (0x00088962) navi_pane_g1

0xb3da,	// (0x000889c4) navi_pane_mp_t3

0xa8c0,	// (0x00087eaa) main_mp3_pane_ParamLimits

0x5626,	// (0x00082c10) navi_pane_ParamLimits

0xce86,	// (0x0008a470) main_mp3_pane_g1_ParamLimits

0x5f20,	// (0x0008350a) main_mp3_pane_g2_ParamLimits

0x5f2c,	// (0x00083516) main_mp3_pane_g3_ParamLimits

0x5f2c,	// (0x00083516) main_mp3_pane_g3

0x5f38,	// (0x00083522) main_mp3_pane_g4_ParamLimits

0x5f38,	// (0x00083522) main_mp3_pane_g4

0xceb6,	// (0x0008a4a0) main_mp3_pane_g5_ParamLimits

0xceb6,	// (0x0008a4a0) main_mp3_pane_g5

0xcec4,	// (0x0008a4ae) main_mp3_pane_g6_ParamLimits

0xcec4,	// (0x0008a4ae) main_mp3_pane_g6

0xced1,	// (0x0008a4bb) main_mp3_pane_g7_ParamLimits

0xced1,	// (0x0008a4bb) main_mp3_pane_g7

0xcedd,	// (0x0008a4c7) main_mp3_pane_g8_ParamLimits

0xcedd,	// (0x0008a4c7) main_mp3_pane_g8

0xf733,	// (0x0008cd1d) main_mp3_pane_g_ParamLimits

0x5f44,	// (0x0008352e) main_mp3_pane_t2

0x5f54,	// (0x0008353e) main_mp3_pane_t3

0xcef7,	// (0x0008a4e1) main_mp3_pane_t4

0xcf05,	// (0x0008a4ef) main_mp3_pane_t5

0x0005,

0xf744,	// (0x0008cd2e) main_mp3_pane_t

0xcf13,	// (0x0008a4fd) mup_progress_pane_cp01

0x0b4a,	// (0x0007e134) aid_zoom_text_secondary2

0xcd09,	// (0x0008a2f3) list_cale_ev2_pane

0xcd11,	// (0x0008a2fb) scroll_pane_cp023_ParamLimits

0xe583,	// (0x0008bb6d) field_cale_ev2_pane_ParamLimits

0xe583,	// (0x0008bb6d) field_cale_ev2_pane

0x6066,	// (0x00083650) field_cale_ev2_pane_g1_ParamLimits

0x6066,	// (0x00083650) field_cale_ev2_pane_g1

0x6072,	// (0x0008365c) field_cale_ev2_pane_g2_ParamLimits

0x6072,	// (0x0008365c) field_cale_ev2_pane_g2

0x608a,	// (0x00083674) field_cale_ev2_pane_g3_ParamLimits

0x608a,	// (0x00083674) field_cale_ev2_pane_g3

0x0003,

0xf765,	// (0x0008cd4f) field_cale_ev2_pane_g_ParamLimits

0xf765,	// (0x0008cd4f) field_cale_ev2_pane_g

0x0e28,	// (0x0007e412) field_cale_ev2_pane_t1_ParamLimits

0x0e28,	// (0x0007e412) field_cale_ev2_pane_t1

0x0e3f,	// (0x0007e429) field_cale_ev2_pane_t2_ParamLimits

0x0e3f,	// (0x0007e429) field_cale_ev2_pane_t2

0x0001,

0xf76e,	// (0x0008cd58) field_cale_ev2_pane_t_ParamLimits

0xf76e,	// (0x0008cd58) field_cale_ev2_pane_t

0x4e1f,	// (0x00082409) main_postcard_pane_g5_ParamLimits

0x4e1f,	// (0x00082409) main_postcard_pane_g5

0x4e2d,	// (0x00082417) main_postcard_pane_g6_ParamLimits

0x4e2d,	// (0x00082417) main_postcard_pane_g6

0x2f44,	// (0x0008052e) camera2_autofocus_pane_cp_ParamLimits

0x2f44,	// (0x0008052e) camera2_autofocus_pane_cp

0xa8c0,	// (0x00087eaa) main_mup3_pane

0x60ce,	// (0x000836b8) main_mup3_pane_g1_ParamLimits

0x60ce,	// (0x000836b8) main_mup3_pane_g1

0x60ef,	// (0x000836d9) main_mup3_pane_g2_ParamLimits

0x60ef,	// (0x000836d9) main_mup3_pane_g2

0x6169,	// (0x00083753) main_mup3_pane_g3_ParamLimits

0x6169,	// (0x00083753) main_mup3_pane_g3

0x61ae,	// (0x00083798) main_mup3_pane_g4_ParamLimits

0x61ae,	// (0x00083798) main_mup3_pane_g4

0x61f1,	// (0x000837db) main_mup3_pane_g5_ParamLimits

0x61f1,	// (0x000837db) main_mup3_pane_g5

0x6236,	// (0x00083820) main_mup3_pane_g6_ParamLimits

0x6236,	// (0x00083820) main_mup3_pane_g6

0xcf1b,	// (0x0008a505) main_mup3_pane_g7_ParamLimits

0xcf1b,	// (0x0008a505) main_mup3_pane_g7

0x0007,

0xf77e,	// (0x0008cd68) main_mup3_pane_g_ParamLimits

0xf77e,	// (0x0008cd68) main_mup3_pane_g

0x62ac,	// (0x00083896) main_mup3_pane_t1_ParamLimits

0x62ac,	// (0x00083896) main_mup3_pane_t1

0x6315,	// (0x000838ff) main_mup3_pane_t2_ParamLimits

0x6315,	// (0x000838ff) main_mup3_pane_t2

0x63de,	// (0x000839c8) main_mup3_pane_t4_ParamLimits

0x63de,	// (0x000839c8) main_mup3_pane_t4

0x6432,	// (0x00083a1c) main_mup3_pane_t5_ParamLimits

0x6432,	// (0x00083a1c) main_mup3_pane_t5

0x64e0,	// (0x00083aca) main_mup3_pane_t6_ParamLimits

0x64e0,	// (0x00083aca) main_mup3_pane_t6

0x0005,

0xf78f,	// (0x0008cd79) main_mup3_pane_t_ParamLimits

0xf78f,	// (0x0008cd79) main_mup3_pane_t

0x658c,	// (0x00083b76) mup3_progress_pane_ParamLimits

0x658c,	// (0x00083b76) mup3_progress_pane

0x6606,	// (0x00083bf0) popup_mup3_control_window_ParamLimits

0x6606,	// (0x00083bf0) popup_mup3_control_window

0xcf29,	// (0x0008a513) popup_mup3_text_window

0x6623,	// (0x00083c0d) mup3_progress_pane_t1

0x6642,	// (0x00083c2c) mup3_progress_pane_t2

0xcf31,	// (0x0008a51b) mup3_progress_pane_t3

0x0002,

0xf79c,	// (0x0008cd86) mup3_progress_pane_t

0xcf4e,	// (0x0008a538) mup_progress_pane_cp03

0xa17a,	// (0x00087764) bg_tb_trans_pane_cp04

0x6661,	// (0x00083c4b) mup3_volume_pane

0x6669,	// (0x00083c53) popup_mup3_control_window_g1

0xdb37,	// (0x0008b121) mup3_volume_pane_g1

0xdb40,	// (0x0008b12a) mup3_volume_pane_g2

0xdb49,	// (0x0008b133) mup3_volume_pane_g3

0x0002,

0xf7a3,	// (0x0008cd8d) mup3_volume_pane_g

0xa17a,	// (0x00087764) bg_tb_trans_pane_cp03

0xcf5e,	// (0x0008a548) popup_mup3_text_window_g1

0xcf66,	// (0x0008a550) popup_mup3_text_window_t1

0xa974,	// (0x00087f5e) list_calc_item_pane_g1_ParamLimits

0xc9d3,	// (0x00089fbd) mup_volume_pane_cp_g1

0x6024,	// (0x0008360e) main_touch_calib_pane_t3

0x603a,	// (0x00083624) main_touch_calib_pane_t4

0x6050,	// (0x0008363a) main_touch_calib_pane_t5

0xa184,	// (0x0008776e) aid_cell_size_toolbar2

0xa18c,	// (0x00087776) aid_popup3_width_pane

0x0b3a,	// (0x0007e124) aid_zoom_text_msg_primary

0x2f17,	// (0x00080501) vorec_t7

0xa938,	// (0x00087f22) bg_calc_paper_pane_g1_ParamLimits

0xa944,	// (0x00087f2e) bg_calc_paper_pane_g2_ParamLimits

0xa950,	// (0x00087f3a) bg_calc_paper_pane_g3_ParamLimits

0xa95c,	// (0x00087f46) bg_calc_paper_pane_g4_ParamLimits

0xa968,	// (0x00087f52) bg_calc_paper_pane_g5_ParamLimits

0x24bb,	// (0x0007faa5) bg_calc_paper_pane_g6_ParamLimits

0x24cc,	// (0x0007fab6) bg_calc_paper_pane_g7_ParamLimits

0x24dd,	// (0x0007fac7) bg_calc_paper_pane_g8_ParamLimits

0xf158,	// (0x0008c742) bg_calc_paper_pane_g_ParamLimits

0x24f0,	// (0x0007fada) calc_bg_paper_pane_g9_ParamLimits

0x3035,	// (0x0008061f) image_qvga_pane_ParamLimits

0x3035,	// (0x0008061f) image_qvga_pane

0xa839,	// (0x00087e23) bg_popup_sub_pane_cp04_ParamLimits

0xb61f,	// (0x00088c09) popup_mup_playback_window_g1_ParamLimits

0xb62b,	// (0x00088c15) popup_mup_playback_window_t1_ParamLimits

0xb640,	// (0x00088c2a) popup_mup_playback_window_t2_ParamLimits

0xf4e2,	// (0x0008cacc) popup_mup_playback_window_t_ParamLimits

0x5af3,	// (0x000830dd) main_mup2_pane_g3_ParamLimits

0x5af3,	// (0x000830dd) main_mup2_pane_g3

0x32f9,	// (0x000808e3) popup_toolbar_window_cp04

0xba3b,	// (0x00089025) popup_call2_audio_second_window_g3_ParamLimits

0xba3b,	// (0x00089025) popup_call2_audio_second_window_g3

0xbe45,	// (0x0008942f) popup_call2_audio_first_window_g4_ParamLimits

0xbe45,	// (0x0008942f) popup_call2_audio_first_window_g4

0xc4c4,	// (0x00089aae) popup_call2_audio_in_window_g4_ParamLimits

0xc4c4,	// (0x00089aae) popup_call2_audio_in_window_g4

0x4f33,	// (0x0008251d) aid_area_sk_bg_cut_ParamLimits

0x4f33,	// (0x0008251d) aid_area_sk_bg_cut

0xb655,	// (0x00088c3f) aid_area_sk_bg_cut_2_ParamLimits

0xb655,	// (0x00088c3f) aid_area_sk_bg_cut_2

0x5e76,	// (0x00083460) aid_placing_details_win

0x5e7e,	// (0x00083468) aid_placing_details_win_2

0xcdc8,	// (0x0008a3b2) camera2_autofocus_pane_g1_ParamLimits

0x207a,	// (0x0007f664) popup_fixed_preview_cale_window_ParamLimits

0x207a,	// (0x0007f664) popup_fixed_preview_cale_window

0xb42f,	// (0x00088a19) navi_slider_pane_g3

0xb438,	// (0x00088a22) navi_slider_pane_g4

0xb441,	// (0x00088a2b) navi_slider_pane_g5

0xb42f,	// (0x00088a19) navi_slider_pane_g6

0x482e,	// (0x00081e18) navi_slider_pane_g7

0xb556,	// (0x00088b40) mup_scale_pane_g3

0xb55f,	// (0x00088b49) mup_scale_pane_g4

0xb568,	// (0x00088b52) mup_scale_pane_g5

0x4cb1,	// (0x0008229b) mup_scale_pane_g6

0x4cba,	// (0x000822a4) mup_scale_pane_g7

0xb42f,	// (0x00088a19) cams2_slider_pane_g3

0xca55,	// (0x0008a03f) cams2_slider_pane_g4

0x5dd6,	// (0x000833c0) cams2_slider_pane_g5

0xb42f,	// (0x00088a19) cams2_slider_pane_g6

0x5dde,	// (0x000833c8) cams2_slider_pane_g7

0xcc86,	// (0x0008a270) camera2_autofocus_pane_cp_g1

0xc829,	// (0x00089e13) bg_popup_preview_window_pane_cp02_ParamLimits

0xc829,	// (0x00089e13) bg_popup_preview_window_pane_cp02

0xcf74,	// (0x0008a55e) list_fp_cale_pane_ParamLimits

0xcf74,	// (0x0008a55e) list_fp_cale_pane

0xcf80,	// (0x0008a56a) popup_fixed_preview_cale_window_t1_ParamLimits

0xcf80,	// (0x0008a56a) popup_fixed_preview_cale_window_t1

0x6672,	// (0x00083c5c) popup_fixed_preview_cale_window_t2_ParamLimits

0x6672,	// (0x00083c5c) popup_fixed_preview_cale_window_t2

0x6687,	// (0x00083c71) popup_fixed_preview_cale_window_t3_ParamLimits

0x6687,	// (0x00083c71) popup_fixed_preview_cale_window_t3

0x0002,

0xf7aa,	// (0x0008cd94) popup_fixed_preview_cale_window_t_ParamLimits

0xf7aa,	// (0x0008cd94) popup_fixed_preview_cale_window_t

0x669c,	// (0x00083c86) list_single_fp_cale_pane_ParamLimits

0x669c,	// (0x00083c86) list_single_fp_cale_pane

0xcf9e,	// (0x0008a588) list_single_fp_cale_pane_g1_ParamLimits

0xcf9e,	// (0x0008a588) list_single_fp_cale_pane_g1

0xcfaa,	// (0x0008a594) list_single_fp_cale_pane_g2_ParamLimits

0xcfaa,	// (0x0008a594) list_single_fp_cale_pane_g2

0x0002,

0x0384,	// (0x0007d96e) list_single_fp_cale_pane_g_ParamLimits

0x0384,	// (0x0007d96e) list_single_fp_cale_pane_g

0xcfc3,	// (0x0008a5ad) list_single_fp_cale_pane_t1_ParamLimits

0xcfc3,	// (0x0008a5ad) list_single_fp_cale_pane_t1

0xcfd5,	// (0x0008a5bf) list_single_fp_cale_pane_t2_ParamLimits

0xcfd5,	// (0x0008a5bf) list_single_fp_cale_pane_t2

0x0001,

0x038b,	// (0x0007d975) list_single_fp_cale_pane_t_ParamLimits

0x038b,	// (0x0007d975) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0xa17a,	// (0x00087764) main_dialer_pane

0x66ac,	// (0x00083c96) aid_cell_size_keypad

0x66b6,	// (0x00083ca0) dialer_ne_pane

0x66c0,	// (0x00083caa) grid_dialer_command_1_pane

0x66c8,	// (0x00083cb2) grid_dialer_command_2_pane

0x66d0,	// (0x00083cba) grid_dialer_keypad_pane

0x66e4,	// (0x00083cce) bg_popup_call_pane_cp06_ParamLimits

0x66e4,	// (0x00083cce) bg_popup_call_pane_cp06

0x66f0,	// (0x00083cda) dialer_ne_clear_pane_ParamLimits

0x66f0,	// (0x00083cda) dialer_ne_clear_pane

0xd008,	// (0x0008a5f2) dialer_ne_pane_g1

0xd010,	// (0x0008a5fa) dialer_ne_pane_t1_ParamLimits

0xd010,	// (0x0008a5fa) dialer_ne_pane_t1

0x66fc,	// (0x00083ce6) dialer_ne_pane_t2_ParamLimits

0x66fc,	// (0x00083ce6) dialer_ne_pane_t2

0x6719,	// (0x00083d03) dialer_ne_pane_t3_ParamLimits

0x6719,	// (0x00083d03) dialer_ne_pane_t3

0x0002,

0xf7b1,	// (0x0008cd9b) dialer_ne_pane_t_ParamLimits

0xf7b1,	// (0x0008cd9b) dialer_ne_pane_t

0x673d,	// (0x00083d27) dialer_ne_pane_t3_copy1_ParamLimits

0x673d,	// (0x00083d27) dialer_ne_pane_t3_copy1

0x6761,	// (0x00083d4b) cell_dialer_keypad_pane_ParamLimits

0x6761,	// (0x00083d4b) cell_dialer_keypad_pane

0x6778,	// (0x00083d62) cell_dialer_command_1_pane_ParamLimits

0x6778,	// (0x00083d62) cell_dialer_command_1_pane

0x678e,	// (0x00083d78) cell_dialer_command_2_pane_ParamLimits

0x678e,	// (0x00083d78) cell_dialer_command_2_pane

0xd022,	// (0x0008a60c) bg_button_pane_cp02_ParamLimits

0xd022,	// (0x0008a60c) bg_button_pane_cp02

0x679d,	// (0x00083d87) cell_dialer_keypad_pane_g1_ParamLimits

0x679d,	// (0x00083d87) cell_dialer_keypad_pane_g1

0xd022,	// (0x0008a60c) bg_button_pane_cp03_ParamLimits

0xd022,	// (0x0008a60c) bg_button_pane_cp03

0x67b2,	// (0x00083d9c) cell_dialer_command_1_pane_g1_ParamLimits

0x67b2,	// (0x00083d9c) cell_dialer_command_1_pane_g1

0xd02e,	// (0x0008a618) bg_button_pane_cp04

0x67c6,	// (0x00083db0) cell_dialer_command_2_pane_g1

0xaae2,	// (0x000880cc) bg_button_pane_cp06

0xd036,	// (0x0008a620) dialer_ne_clear_pane_g1

0x4769,	// (0x00081d53) navi_pane_g2

0x4797,	// (0x00081d81) navi_pane_g3

0x0002,

0xf3e5,	// (0x0008c9cf) navi_pane_g

0x47c2,	// (0x00081dac) navi_pane_mv_g2

0x47e9,	// (0x00081dd3) navi_pane_mv_g5

0x47f1,	// (0x00081ddb) navi_pane_mv_t1

0xa92c,	// (0x00087f16) main_clock2_pane

0x6804,	// (0x00083dee) main_clock2_list_pane_ParamLimits

0x6804,	// (0x00083dee) main_clock2_list_pane

0x682e,	// (0x00083e18) main_clock2_pane_t1_ParamLimits

0x682e,	// (0x00083e18) main_clock2_pane_t1

0x6850,	// (0x00083e3a) main_clock2_pane_t2_ParamLimits

0x6850,	// (0x00083e3a) main_clock2_pane_t2

0x0004,

0xf7b8,	// (0x0008cda2) main_clock2_pane_t_ParamLimits

0xf7b8,	// (0x0008cda2) main_clock2_pane_t

0x68ad,	// (0x00083e97) popup_clock_analogue_window_cp03_ParamLimits

0x68ad,	// (0x00083e97) popup_clock_analogue_window_cp03

0x68cd,	// (0x00083eb7) popup_clock_digital_window_cp02_ParamLimits

0x68cd,	// (0x00083eb7) popup_clock_digital_window_cp02

0x693e,	// (0x00083f28) main_clock2_list_single_pane_ParamLimits

0x693e,	// (0x00083f28) main_clock2_list_single_pane

0xaae2,	// (0x000880cc) list_highlight_pane_cp05

0xd072,	// (0x0008a65c) main_clock2_list_single_pane_t1

0x32f9,	// (0x000808e3) popup_toolbar_window_cp04_ParamLimits

0x5edf,	// (0x000834c9) camera2_autofocus_pane_g2_ParamLimits

0x5edf,	// (0x000834c9) camera2_autofocus_pane_g2

0x5eeb,	// (0x000834d5) camera2_autofocus_pane_g3_ParamLimits

0x5eeb,	// (0x000834d5) camera2_autofocus_pane_g3

0x5ef7,	// (0x000834e1) camera2_autofocus_pane_g4_ParamLimits

0x5ef7,	// (0x000834e1) camera2_autofocus_pane_g4

0x5f03,	// (0x000834ed) camera2_autofocus_pane_g5_ParamLimits

0x5f03,	// (0x000834ed) camera2_autofocus_pane_g5

0x0004,

0xf70d,	// (0x0008ccf7) camera2_autofocus_pane_g_ParamLimits

0xf70d,	// (0x0008ccf7) camera2_autofocus_pane_g

0x60ae,	// (0x00083698) camera2_autofocus_pane_cp_g2

0x60b6,	// (0x000836a0) camera2_autofocus_pane_cp_g3

0x60be,	// (0x000836a8) camera2_autofocus_pane_cp_g4

0x60c6,	// (0x000836b0) camera2_autofocus_pane_cp_g5

0x0004,

0xf773,	// (0x0008cd5d) camera2_autofocus_pane_cp_g

0x66dc,	// (0x00083cc6) popup_dialer_spcha_window

0xa17a,	// (0x00087764) bg_popup_sub_pane_cp07

0xd080,	// (0x0008a66a) list_spcha_pane

0xd088,	// (0x0008a672) list_single_spcha_pane_ParamLimits

0xd088,	// (0x0008a672) list_single_spcha_pane

0xa17a,	// (0x00087764) list_highlight_pane_cp06

0xd099,	// (0x0008a683) list_single_spcha_pane_t1

0xc26e,	// (0x00089858) popup_call2_audio_out_window_g4_ParamLimits

0xc26e,	// (0x00089858) popup_call2_audio_out_window_g4

0xa17a,	// (0x00087764) main_imed2_pane

0xc861,	// (0x00089e4b) popup_imed_adjust2_window

0x5563,	// (0x00082b4d) popup_imed_trans_window_ParamLimits

0x5563,	// (0x00082b4d) popup_imed_trans_window

0xcabe,	// (0x0008a0a8) popup_blid_sat_info2_window_t1

0xcacc,	// (0x0008a0b6) popup_blid_sat_info2_window_t2

0x000a,

0xf6a2,	// (0x0008cc8c) popup_blid_sat_info2_window_t

0x69e8,	// (0x00083fd2) aid_size_cell_colour_35

0x6a02,	// (0x00083fec) aid_size_cell_colour_112

0x6a19,	// (0x00084003) aid_size_cell_effect

0xa8c0,	// (0x00087eaa) bg_tb_trans_pane_cp02

0xb055,	// (0x0008863f) heading_imed_pane

0x6a33,	// (0x0008401d) listscroll_imed_pane

0xd0a7,	// (0x0008a691) heading_imed_pane_g1

0xd0af,	// (0x0008a699) heading_imed_pane_t1

0xd0bd,	// (0x0008a6a7) grid_imed_colour_35_pane_ParamLimits

0xd0bd,	// (0x0008a6a7) grid_imed_colour_35_pane

0x6a3f,	// (0x00084029) grid_imed_effect_pane

0xd0d9,	// (0x0008a6c3) list_imed_aspect_pane

0x6a4f,	// (0x00084039) scroll_pane_cp027_ParamLimits

0x6a4f,	// (0x00084039) scroll_pane_cp027

0x6a5b,	// (0x00084045) cell_imed_effect_pane_ParamLimits

0x6a5b,	// (0x00084045) cell_imed_effect_pane

0xd0e9,	// (0x0008a6d3) cell_imed_colour_pane_ParamLimits

0xd0e9,	// (0x0008a6d3) cell_imed_colour_pane

0xd133,	// (0x0008a71d) cell_imed_colour_pane_g1_ParamLimits

0xd133,	// (0x0008a71d) cell_imed_colour_pane_g1

0xd144,	// (0x0008a72e) hgihlgiht_grid_pane_cp016_ParamLimits

0xd144,	// (0x0008a72e) hgihlgiht_grid_pane_cp016

0x6a77,	// (0x00084061) cell_imed_effect_pane_g1

0x6a7f,	// (0x00084069) grid_highlight_pane_cp017

0xd155,	// (0x0008a73f) list_imed_single_pane_ParamLimits

0xd155,	// (0x0008a73f) list_imed_single_pane

0xa17a,	// (0x00087764) list_highlight_pane_cp07

0xd169,	// (0x0008a753) list_imed_aspect_pane_comp1_t1

0xc835,	// (0x00089e1f) bg_tb_trans_pane_cp05

0xd18b,	// (0x0008a775) popup_imed_adjust2_window_g1

0xd1b2,	// (0x0008a79c) popup_imed_adjust2_window_t1

0xd1ca,	// (0x0008a7b4) slider_imed_adjust_pane

0xd1de,	// (0x0008a7c8) slider_imed_adjust_pane_g1

0xd1ee,	// (0x0008a7d8) slider_imed_adjust_pane_g2

0xd1fe,	// (0x0008a7e8) slider_imed_adjust_pane_g3

0xd20f,	// (0x0008a7f9) slider_imed_adjust_pane_g4

0x0003,

0xf7d5,	// (0x0008cdbf) slider_imed_adjust_pane_g

0x6a88,	// (0x00084072) aid_size_cell_clipart2

0x6a94,	// (0x0008407e) grid_imed_clipart_pane

0xd220,	// (0x0008a80a) scroll_pane_cp031

0x6a9e,	// (0x00084088) cell_imed_clipart_pane_ParamLimits

0x6a9e,	// (0x00084088) cell_imed_clipart_pane

0x6abc,	// (0x000840a6) cell_imed_clipart_pane_g1

0xa17a,	// (0x00087764) grid_highlight_pane_cp014

0x6810,	// (0x00083dfa) main_clock2_pane_g1_ParamLimits

0x6810,	// (0x00083dfa) main_clock2_pane_g1

0x68e9,	// (0x00083ed3) aid_call2_pane_cp10

0x68fb,	// (0x00083ee5) aid_call_pane_cp10

0xb34d,	// (0x00088937) popup_clock_analogue_window_cp10_g1

0xb34d,	// (0x00088937) popup_clock_analogue_window_cp10_g2

0x690d,	// (0x00083ef7) popup_clock_analogue_window_cp10_g3

0x690d,	// (0x00083ef7) popup_clock_analogue_window_cp10_g4

0xb34d,	// (0x00088937) popup_clock_analogue_window_cp10_g5

0x0004,

0xf7c3,	// (0x0008cdad) popup_clock_analogue_window_cp10_g

0x691f,	// (0x00083f09) popup_clock_analogue_window_cp10_t1

0x6950,	// (0x00083f3a) clock_digital_number_pane_cp10_ParamLimits

0x6950,	// (0x00083f3a) clock_digital_number_pane_cp10

0x6968,	// (0x00083f52) clock_digital_number_pane_cp11_ParamLimits

0x6968,	// (0x00083f52) clock_digital_number_pane_cp11

0x6980,	// (0x00083f6a) clock_digital_number_pane_cp12_ParamLimits

0x6980,	// (0x00083f6a) clock_digital_number_pane_cp12

0x6998,	// (0x00083f82) clock_digital_number_pane_cp13_ParamLimits

0x6998,	// (0x00083f82) clock_digital_number_pane_cp13

0x69b0,	// (0x00083f9a) clock_digital_separator_pane_cp10_ParamLimits

0x69b0,	// (0x00083f9a) clock_digital_separator_pane_cp10

0x69c8,	// (0x00083fb2) popup_clock_digital_window_cp02_t1_ParamLimits

0x69c8,	// (0x00083fb2) popup_clock_digital_window_cp02_t1

0xa831,	// (0x00087e1b) clock_digital_number_pane_cp10_g1

0xa831,	// (0x00087e1b) clock_digital_number_pane_cp10_g2

0x0001,

0xf7de,	// (0x0008cdc8) clock_digital_number_pane_cp10_g

0xa831,	// (0x00087e1b) clock_digital_separator_pane_cp10_g1

0xa831,	// (0x00087e1b) clock_digital_separator_pane_g2_cp10

0xb3e8,	// (0x000889d2) navi_pane_vded_g4

0xb3f1,	// (0x000889db) navi_pane_vded_g5

0xb3fa,	// (0x000889e4) navi_pane_vded_t1

0xa17a,	// (0x00087764) main_vded_pane

0x6ac5,	// (0x000840af) main_vded_pane_g1

0x6ad1,	// (0x000840bb) main_vded_pane_g2

0x6adb,	// (0x000840c5) main_vded_pane_g3

0x0002,

0xf7e3,	// (0x0008cdcd) main_vded_pane_g

0x6ae5,	// (0x000840cf) main_vded_pane_t1

0x6af3,	// (0x000840dd) main_vded_pane_t2

0x0001,

0xf7ea,	// (0x0008cdd4) main_vded_pane_t

0x6b01,	// (0x000840eb) vded_slider_pane

0x6b0b,	// (0x000840f5) vded_video_pane

0xd228,	// (0x0008a812) vded_video_pane_g1

0x6b17,	// (0x00084101) vded_video_pane_g2

0xcc86,	// (0x0008a270) vded_video_pane_g3

0x0002,

0xf7ef,	// (0x0008cdd9) vded_video_pane_g

0xd232,	// (0x0008a81c) vded_slider_pane_g1

0xc9d3,	// (0x00089fbd) vded_slider_pane_g2

0xd23b,	// (0x0008a825) vded_slider_pane_g3

0xd244,	// (0x0008a82e) vded_slider_pane_g4

0xd24d,	// (0x0008a837) vded_slider_pane_g5

0x0004,

0xf7f6,	// (0x0008cde0) vded_slider_pane_g

0x65fa,	// (0x00083be4) mup3_rocker_pane_ParamLimits

0x65fa,	// (0x00083be4) mup3_rocker_pane

0x6b20,	// (0x0008410a) mup3_control_keys_pane_g1

0x6b28,	// (0x00084112) mup3_control_keys_pane_g2

0x6b30,	// (0x0008411a) mup3_control_keys_pane_g3

0x6b38,	// (0x00084122) mup3_control_keys_pane_g4

0x0003,

0xf801,	// (0x0008cdeb) mup3_control_keys_pane_g

0x2098,	// (0x0007f682) popup_toolbar2_fixed_window_cp01_ParamLimits

0x2098,	// (0x0007f682) popup_toolbar2_fixed_window_cp01

0x6616,	// (0x00083c00) popup_toolbar2_fixed_window_cp02_ParamLimits

0x6616,	// (0x00083c00) popup_toolbar2_fixed_window_cp02

0xbbad,	// (0x00089197) popup_call2_audio_second_window_t4_ParamLimits

0xbbad,	// (0x00089197) popup_call2_audio_second_window_t4

0xc0db,	// (0x000896c5) popup_call2_audio_first_window_t6_ParamLimits

0xc0db,	// (0x000896c5) popup_call2_audio_first_window_t6

0xc371,	// (0x0008995b) popup_call2_audio_out_window_t6_ParamLimits

0xc371,	// (0x0008995b) popup_call2_audio_out_window_t6

0xa17a,	// (0x00087764) main_vitu_pane

0x6b48,	// (0x00084132) aid_size_cell_itu_ParamLimits

0x6b48,	// (0x00084132) aid_size_cell_itu

0x20ca,	// (0x0007f6b4) bg_popup_window_pane_cp08_ParamLimits

0x20ca,	// (0x0007f6b4) bg_popup_window_pane_cp08

0x6b56,	// (0x00084140) field_vitu_entry_pane_ParamLimits

0x6b56,	// (0x00084140) field_vitu_entry_pane

0x6b65,	// (0x0008414f) grid_vitu_function_pane_ParamLimits

0x6b65,	// (0x0008414f) grid_vitu_function_pane

0x6b75,	// (0x0008415f) grid_vitu_itu_pane_ParamLimits

0x6b75,	// (0x0008415f) grid_vitu_itu_pane

0x6b85,	// (0x0008416f) cell_vitu_itu_pane_ParamLimits

0x6b85,	// (0x0008416f) cell_vitu_itu_pane

0x6b9c,	// (0x00084186) cell_vitu_function_pane_ParamLimits

0x6b9c,	// (0x00084186) cell_vitu_function_pane

0xa8c0,	// (0x00087eaa) bg_popup_sub_pane_cp08_ParamLimits

0xa8c0,	// (0x00087eaa) bg_popup_sub_pane_cp08

0x6bb0,	// (0x0008419a) field_vitu_entry_pane_t1_ParamLimits

0x6bb0,	// (0x0008419a) field_vitu_entry_pane_t1

0xd26e,	// (0x0008a858) field_vitu_entry_pane_t2_ParamLimits

0xd26e,	// (0x0008a858) field_vitu_entry_pane_t2

0x0001,

0xf80f,	// (0x0008cdf9) field_vitu_entry_pane_t_ParamLimits

0xf80f,	// (0x0008cdf9) field_vitu_entry_pane_t

0xd28b,	// (0x0008a875) bg_button_pane_cp05_ParamLimits

0xd28b,	// (0x0008a875) bg_button_pane_cp05

0x6bca,	// (0x000841b4) cell_vitu_itu_pane_g1

0x6be2,	// (0x000841cc) cell_vitu_itu_pane_t1_ParamLimits

0x6be2,	// (0x000841cc) cell_vitu_itu_pane_t1

0x6bf4,	// (0x000841de) cell_vitu_itu_pane_t2_ParamLimits

0x6bf4,	// (0x000841de) cell_vitu_itu_pane_t2

0x0002,

0xf814,	// (0x0008cdfe) cell_vitu_itu_pane_t_ParamLimits

0xf814,	// (0x0008cdfe) cell_vitu_itu_pane_t

0xd299,	// (0x0008a883) bg_button_pane_cp07

0x6c37,	// (0x00084221) cell_vitu_function_pane_g1

0x235d,	// (0x0007f947) main_calc_pane_g1

0x1e9c,	// (0x0007f486) aid_visual_content_pane

0xa17a,	// (0x00087764) main_vradio_pane

0x6c40,	// (0x0008422a) main_vradio_pane_g1_ParamLimits

0x6c40,	// (0x0008422a) main_vradio_pane_g1

0xd2a3,	// (0x0008a88d) main_vradio_pane_g2_ParamLimits

0xd2a3,	// (0x0008a88d) main_vradio_pane_g2

0x0001,

0xf81b,	// (0x0008ce05) main_vradio_pane_g_ParamLimits

0xf81b,	// (0x0008ce05) main_vradio_pane_g

0x6c4e,	// (0x00084238) main_vradio_pane_t1_ParamLimits

0x6c4e,	// (0x00084238) main_vradio_pane_t1

0x6c60,	// (0x0008424a) main_vradio_pane_t2_ParamLimits

0x6c60,	// (0x0008424a) main_vradio_pane_t2

0xd2b0,	// (0x0008a89a) main_vradio_pane_t3_ParamLimits

0xd2b0,	// (0x0008a89a) main_vradio_pane_t3

0x0002,

0xf820,	// (0x0008ce0a) main_vradio_pane_t_ParamLimits

0xf820,	// (0x0008ce0a) main_vradio_pane_t

0x6c72,	// (0x0008425c) vradio_rocker_control_pane_ParamLimits

0x6c72,	// (0x0008425c) vradio_rocker_control_pane

0x6c7e,	// (0x00084268) vradio_station_info_pane_ParamLimits

0x6c7e,	// (0x00084268) vradio_station_info_pane

0xd2c4,	// (0x0008a8ae) vradio_frequency_info_pane_ParamLimits

0xd2c4,	// (0x0008a8ae) vradio_frequency_info_pane

0xcc86,	// (0x0008a270) vradio_station_info_pane_g1

0xd2d3,	// (0x0008a8bd) vradio_station_info_pane_t1_ParamLimits

0xd2d3,	// (0x0008a8bd) vradio_station_info_pane_t1

0xd2f5,	// (0x0008a8df) vradio_station_info_pane_t2_ParamLimits

0xd2f5,	// (0x0008a8df) vradio_station_info_pane_t2

0x0001,

0xf827,	// (0x0008ce11) vradio_station_info_pane_t_ParamLimits

0xf827,	// (0x0008ce11) vradio_station_info_pane_t

0xd307,	// (0x0008a8f1) vradio_tuning_pane

0xd30f,	// (0x0008a8f9) vradio_rocker_control_pane_g1

0xd317,	// (0x0008a901) vradio_rocker_control_pane_g2

0xd31f,	// (0x0008a909) vradio_rocker_control_pane_g3

0xd327,	// (0x0008a911) vradio_rocker_control_pane_g4

0xd32f,	// (0x0008a919) vradio_rocker_control_pane_g5

0x0004,

0xf82c,	// (0x0008ce16) vradio_rocker_control_pane_g

0x6c8b,	// (0x00084275) vradio_frequency_info_pane_g1

0xd337,	// (0x0008a921) vradio_frequency_info_pane_t1_ParamLimits

0xd337,	// (0x0008a921) vradio_frequency_info_pane_t1

0x6c95,	// (0x0008427f) vradio_tuning_pane_g1

0x6ca0,	// (0x0008428a) vradio_tuning_pane_t1

0xa198,	// (0x00087782) area_side_right_pane_ParamLimits

0xa198,	// (0x00087782) area_side_right_pane

0xc7f0,	// (0x00089dda) status_small_pane_g1

0xc7f8,	// (0x00089de2) status_small_pane_g2

0xc801,	// (0x00089deb) status_small_pane_g3

0xc80a,	// (0x00089df4) status_small_pane_g4

0x0003,

0xf5f8,	// (0x0008cbe2) status_small_pane_g

0xc813,	// (0x00089dfd) status_small_pane_t1

0xa17a,	// (0x00087764) main_video3_pane

0xd34b,	// (0x0008a935) cams_zoom_vslider_pane

0xd353,	// (0x0008a93d) image3_wide_pane_ParamLimits

0xd353,	// (0x0008a93d) image3_wide_pane

0xd36d,	// (0x0008a957) image3_wide_small_pane

0xd379,	// (0x0008a963) main_video3_pane_g1_ParamLimits

0xd379,	// (0x0008a963) main_video3_pane_g1

0xd395,	// (0x0008a97f) main_video3_pane_g2_ParamLimits

0xd395,	// (0x0008a97f) main_video3_pane_g2

0x0001,

0xf837,	// (0x0008ce21) main_video3_pane_g_ParamLimits

0xf837,	// (0x0008ce21) main_video3_pane_g

0xd3b1,	// (0x0008a99b) main_video3_pane_t1_ParamLimits

0xd3b1,	// (0x0008a99b) main_video3_pane_t1

0xd3dc,	// (0x0008a9c6) main_video3_pane_t2_ParamLimits

0xd3dc,	// (0x0008a9c6) main_video3_pane_t2

0xd409,	// (0x0008a9f3) main_video3_pane_t3_ParamLimits

0xd409,	// (0x0008a9f3) main_video3_pane_t3

0x0002,

0xf83c,	// (0x0008ce26) main_video3_pane_t_ParamLimits

0xf83c,	// (0x0008ce26) main_video3_pane_t

0xd436,	// (0x0008aa20) cams_zoom_vslider_pane_g1

0xd43f,	// (0x0008aa29) cams_zoom_vslider_pane_g2

0x0001,

0xf843,	// (0x0008ce2d) cams_zoom_vslider_pane_g

0xd447,	// (0x0008aa31) small_slider_vertical_pane

0xcc86,	// (0x0008a270) small_slider_vertical_pane_g1

0xcc86,	// (0x0008a270) small_slider_vertical_pane_g2

0xd44f,	// (0x0008aa39) small_slider_vertical_pane_g3

0x0002,

0xf848,	// (0x0008ce32) small_slider_vertical_pane_g

0xa17a,	// (0x00087764) main_hwr_training_pane

0xd458,	// (0x0008aa42) hwr_training_instruct_pane_ParamLimits

0xd458,	// (0x0008aa42) hwr_training_instruct_pane

0x6caf,	// (0x00084299) hwr_training_navi_pane_ParamLimits

0x6caf,	// (0x00084299) hwr_training_navi_pane

0x6cc9,	// (0x000842b3) hwr_training_write_pane_ParamLimits

0x6cc9,	// (0x000842b3) hwr_training_write_pane

0xa17a,	// (0x00087764) bg_frame_shadow_pane

0xd48f,	// (0x0008aa79) hwr_training_write_pane_g1

0xd497,	// (0x0008aa81) hwr_training_write_pane_g2

0xd49f,	// (0x0008aa89) hwr_training_write_pane_g3

0xd4a7,	// (0x0008aa91) hwr_training_write_pane_g4

0xd4af,	// (0x0008aa99) hwr_training_write_pane_g5

0xd4b7,	// (0x0008aaa1) hwr_training_write_pane_g6

0xd4bf,	// (0x0008aaa9) hwr_training_write_pane_g7

0x0006,

0xf84f,	// (0x0008ce39) hwr_training_write_pane_g

0x6d01,	// (0x000842eb) hwr_training_navi_pane_g1_ParamLimits

0x6d01,	// (0x000842eb) hwr_training_navi_pane_g1

0x6d13,	// (0x000842fd) hwr_training_navi_pane_g2_ParamLimits

0x6d13,	// (0x000842fd) hwr_training_navi_pane_g2

0x6d25,	// (0x0008430f) hwr_training_navi_pane_g3_ParamLimits

0x6d25,	// (0x0008430f) hwr_training_navi_pane_g3

0x6d35,	// (0x0008431f) hwr_training_navi_pane_g4_ParamLimits

0x6d35,	// (0x0008431f) hwr_training_navi_pane_g4

0x0004,

0xf85e,	// (0x0008ce48) hwr_training_navi_pane_g_ParamLimits

0xf85e,	// (0x0008ce48) hwr_training_navi_pane_g

0x6d4f,	// (0x00084339) hwr_training_navi_pane_t1

0x6d5d,	// (0x00084347) list_single_hwr_training_instruct_pane_ParamLimits

0x6d5d,	// (0x00084347) list_single_hwr_training_instruct_pane

0xd4c7,	// (0x0008aab1) list_single_hwr_training_instruct_pane_t1

0xcbc6,	// (0x0008a1b0) bg_frame_shadow_pane_g1

0xd4d6,	// (0x0008aac0) bg_frame_shadow_pane_g2

0xd4de,	// (0x0008aac8) bg_frame_shadow_pane_g3

0xd4e6,	// (0x0008aad0) bg_frame_shadow_pane_g4

0xd4ee,	// (0x0008aad8) bg_frame_shadow_pane_g5

0xd4f6,	// (0x0008aae0) bg_frame_shadow_pane_g6

0xd4fe,	// (0x0008aae8) bg_frame_shadow_pane_g7

0xa9f7,	// (0x00087fe1) bg_frame_shadow_pane_g8

0x0007,

0xf869,	// (0x0008ce53) bg_frame_shadow_pane_g

0xa17a,	// (0x00087764) main_video_tele_dialer_pane

0x6d76,	// (0x00084360) aid_size_cell_video_keypad_ParamLimits

0x6d76,	// (0x00084360) aid_size_cell_video_keypad

0x6d86,	// (0x00084370) grid_video_dialer_keypad_pane_ParamLimits

0x6d86,	// (0x00084370) grid_video_dialer_keypad_pane

0x6db8,	// (0x000843a2) video_down_pane_cp_ParamLimits

0x6db8,	// (0x000843a2) video_down_pane_cp

0x6de0,	// (0x000843ca) cell_video_dialer_keypad_pane_ParamLimits

0x6de0,	// (0x000843ca) cell_video_dialer_keypad_pane

0xd506,	// (0x0008aaf0) bg_button_pane_cp08_ParamLimits

0xd506,	// (0x0008aaf0) bg_button_pane_cp08

0x6df7,	// (0x000843e1) cell_video_dialer_keypad_pane_g1_ParamLimits

0x6df7,	// (0x000843e1) cell_video_dialer_keypad_pane_g1

0x65ee,	// (0x00083bd8) mup3_rocker2_pane_ParamLimits

0x65ee,	// (0x00083bd8) mup3_rocker2_pane

0xcc86,	// (0x0008a270) mup3_rocker2_pane_g1

0x54e5,	// (0x00082acf) main_dialer2_pane

0xa17a,	// (0x00087764) main_mp4_pane

0x6e36,	// (0x00084420) main_mp4_pane_g1_ParamLimits

0x6e36,	// (0x00084420) main_mp4_pane_g1

0x6e44,	// (0x0008442e) main_mp4_pane_g2_ParamLimits

0x6e44,	// (0x0008442e) main_mp4_pane_g2

0x6e52,	// (0x0008443c) main_mp4_pane_g3_ParamLimits

0x6e52,	// (0x0008443c) main_mp4_pane_g3

0x6ea5,	// (0x0008448f) main_mp4_pane_g4_ParamLimits

0x6ea5,	// (0x0008448f) main_mp4_pane_g4

0x6ecd,	// (0x000844b7) main_mp4_pane_g5_ParamLimits

0x6ecd,	// (0x000844b7) main_mp4_pane_g5

0x0005,

0xf889,	// (0x0008ce73) main_mp4_pane_g_ParamLimits

0xf889,	// (0x0008ce73) main_mp4_pane_g

0x6f1d,	// (0x00084507) main_mp4_pane_t1_ParamLimits

0x6f1d,	// (0x00084507) main_mp4_pane_t1

0x6f79,	// (0x00084563) main_mp4_pane_t2_ParamLimits

0x6f79,	// (0x00084563) main_mp4_pane_t2

0xd512,	// (0x0008aafc) main_mp4_pane_t3_ParamLimits

0xd512,	// (0x0008aafc) main_mp4_pane_t3

0x6fcb,	// (0x000845b5) main_mp4_pane_t4_ParamLimits

0x6fcb,	// (0x000845b5) main_mp4_pane_t4

0x0003,

0xf896,	// (0x0008ce80) main_mp4_pane_t_ParamLimits

0xf896,	// (0x0008ce80) main_mp4_pane_t

0x700b,	// (0x000845f5) mp4_progress_pane_ParamLimits

0x700b,	// (0x000845f5) mp4_progress_pane

0x7055,	// (0x0008463f) mp4_rocker_pane_ParamLimits

0x7055,	// (0x0008463f) mp4_rocker_pane

0xd53a,	// (0x0008ab24) mp4_progress_pane_t1

0xd553,	// (0x0008ab3d) mp4_progress_pane_t2

0x0001,

0xf89f,	// (0x0008ce89) mp4_progress_pane_t

0xd56c,	// (0x0008ab56) mup_progress_pane_cp04

0xcc86,	// (0x0008a270) mp4_rocker_pane_g1

0x7077,	// (0x00084661) aid_cell_size_keypad2_ParamLimits

0x7077,	// (0x00084661) aid_cell_size_keypad2

0x7087,	// (0x00084671) dialer2_ne_pane_ParamLimits

0x7087,	// (0x00084671) dialer2_ne_pane

0x7093,	// (0x0008467d) grid_dialer2_keypad_pane_ParamLimits

0x7093,	// (0x0008467d) grid_dialer2_keypad_pane

0xdb52,	// (0x0008b13c) bg_popup_call_pane_cp07_ParamLimits

0xdb52,	// (0x0008b13c) bg_popup_call_pane_cp07

0x70a1,	// (0x0008468b) dialer2_ne_pane_t1_ParamLimits

0x70a1,	// (0x0008468b) dialer2_ne_pane_t1

0x70c6,	// (0x000846b0) cell_dialer2_keypad_pane_ParamLimits

0x70c6,	// (0x000846b0) cell_dialer2_keypad_pane

0xd58a,	// (0x0008ab74) bg_button_pane_pane_cp04_ParamLimits

0xd58a,	// (0x0008ab74) bg_button_pane_pane_cp04

0x70dd,	// (0x000846c7) cell_dialer2_keypad_pane_g1_ParamLimits

0x70dd,	// (0x000846c7) cell_dialer2_keypad_pane_g1

0x31cb,	// (0x000807b5) aid_placing_vt_set_content_ParamLimits

0x31cb,	// (0x000807b5) aid_placing_vt_set_content

0x31f3,	// (0x000807dd) aid_placing_vt_set_title_ParamLimits

0x31f3,	// (0x000807dd) aid_placing_vt_set_title

0xa17a,	// (0x00087764) main_image3_pane

0x7177,	// (0x00084761) area_side_right_pane_cp01_ParamLimits

0x7177,	// (0x00084761) area_side_right_pane_cp01

0xa8ce,	// (0x00087eb8) main_image3_pane_g1_ParamLimits

0xa8ce,	// (0x00087eb8) main_image3_pane_g1

0x71a6,	// (0x00084790) main_image3_pane_g2_ParamLimits

0x71a6,	// (0x00084790) main_image3_pane_g2

0x71bf,	// (0x000847a9) main_image3_pane_g3_ParamLimits

0x71bf,	// (0x000847a9) main_image3_pane_g3

0x71d8,	// (0x000847c2) main_image3_pane_g4_ParamLimits

0x71d8,	// (0x000847c2) main_image3_pane_g4

0x0003,

0xf8ae,	// (0x0008ce98) main_image3_pane_g_ParamLimits

0xf8ae,	// (0x0008ce98) main_image3_pane_g

0x71f1,	// (0x000847db) main_image3_pane_t1_ParamLimits

0x71f1,	// (0x000847db) main_image3_pane_t1

0x7216,	// (0x00084800) main_image3_pane_t2_ParamLimits

0x7216,	// (0x00084800) main_image3_pane_t2

0x7235,	// (0x0008481f) main_image3_pane_t3_ParamLimits

0x7235,	// (0x0008481f) main_image3_pane_t3

0x0003,

0xf8b7,	// (0x0008cea1) main_image3_pane_t_ParamLimits

0xf8b7,	// (0x0008cea1) main_image3_pane_t

0x20ca,	// (0x0007f6b4) grid_sctrl_middle_pane_cp01_ParamLimits

0x20ca,	// (0x0007f6b4) grid_sctrl_middle_pane_cp01

0x7296,	// (0x00084880) cell_sctrl_middle_pane_cp01_ParamLimits

0x7296,	// (0x00084880) cell_sctrl_middle_pane_cp01

0x72a7,	// (0x00084891) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x72a7,	// (0x00084891) cell_sctrl_middle_pane_cp01_g1

0xa17a,	// (0x00087764) main_call4_pane

0x72b4,	// (0x0008489e) aid_size_button_call4_ParamLimits

0x72b4,	// (0x0008489e) aid_size_button_call4

0x72e6,	// (0x000848d0) call4_windows_pane_ParamLimits

0x72e6,	// (0x000848d0) call4_windows_pane

0x7302,	// (0x000848ec) grid_call4_button_pane_ParamLimits

0x7302,	// (0x000848ec) grid_call4_button_pane

0xd596,	// (0x0008ab80) call4_windows_conf_pane

0x7326,	// (0x00084910) popup_call4_audio_first_window_ParamLimits

0x7326,	// (0x00084910) popup_call4_audio_first_window

0x7352,	// (0x0008493c) popup_call4_audio_second_window_ParamLimits

0x7352,	// (0x0008493c) popup_call4_audio_second_window

0xd5d3,	// (0x0008abbd) popup_call4_audio_wait_window_ParamLimits

0xd5d3,	// (0x0008abbd) popup_call4_audio_wait_window

0x7366,	// (0x00084950) cell_call4_button_pane_ParamLimits

0x7366,	// (0x00084950) cell_call4_button_pane

0x7389,	// (0x00084973) bg_button_pane_cp09_ParamLimits

0x7389,	// (0x00084973) bg_button_pane_cp09

0x7395,	// (0x0008497f) cell_call4_button_pane_g1_ParamLimits

0x7395,	// (0x0008497f) cell_call4_button_pane_g1

0x73a2,	// (0x0008498c) cell_call4_button_pane_t1_ParamLimits

0x73a2,	// (0x0008498c) cell_call4_button_pane_t1

0xd61b,	// (0x0008ac05) popup_call4_audio_conf_window_ParamLimits

0xd61b,	// (0x0008ac05) popup_call4_audio_conf_window

0x6623,	// (0x00083c0d) mup3_progress_pane_t1_ParamLimits

0x6642,	// (0x00083c2c) mup3_progress_pane_t2_ParamLimits

0xcf31,	// (0x0008a51b) mup3_progress_pane_t3_ParamLimits

0xf79c,	// (0x0008cd86) mup3_progress_pane_t_ParamLimits

0xcf4e,	// (0x0008a538) mup_progress_pane_cp03_ParamLimits

0x6b40,	// (0x0008412a) mup3_control_keys_pane_g4_copy1

0x7039,	// (0x00084623) mp4_rocker2_pane_ParamLimits

0x7039,	// (0x00084623) mp4_rocker2_pane

0xd635,	// (0x0008ac1f) mp4_rocker2_pane_g1

0xd63d,	// (0x0008ac27) mp4_rocker2_pane_g2

0x73b4,	// (0x0008499e) mp4_rocker2_pane_g3

0x73bc,	// (0x000849a6) mp4_rocker2_pane_g4

0x73c4,	// (0x000849ae) mp4_rocker2_pane_g5

0x0004,

0xf8c0,	// (0x0008ceaa) mp4_rocker2_pane_g

0xa17a,	// (0x00087764) main_camera4_pane

0xa17a,	// (0x00087764) main_video4_pane

0x6d94,	// (0x0008437e) main_video_tele_dialer_pane_t1_ParamLimits

0x6d94,	// (0x0008437e) main_video_tele_dialer_pane_t1

0x6da6,	// (0x00084390) main_video_tele_dialer_pane_t2_ParamLimits

0x6da6,	// (0x00084390) main_video_tele_dialer_pane_t2

0x0001,

0xf87a,	// (0x0008ce64) main_video_tele_dialer_pane_t_ParamLimits

0xf87a,	// (0x0008ce64) main_video_tele_dialer_pane_t

0x73e4,	// (0x000849ce) cam4_autofocus_pane_ParamLimits

0x73e4,	// (0x000849ce) cam4_autofocus_pane

0x73fc,	// (0x000849e6) cam4_image_uncrop_pane_ParamLimits

0x73fc,	// (0x000849e6) cam4_image_uncrop_pane

0x7415,	// (0x000849ff) cam4_indicators_pane_ParamLimits

0x7415,	// (0x000849ff) cam4_indicators_pane

0x7431,	// (0x00084a1b) main_camera4_pane_g1_ParamLimits

0x7431,	// (0x00084a1b) main_camera4_pane_g1

0x743d,	// (0x00084a27) main_camera4_pane_g2_ParamLimits

0x743d,	// (0x00084a27) main_camera4_pane_g2

0x743d,	// (0x00084a27) main_camera4_pane_g3_ParamLimits

0x743d,	// (0x00084a27) main_camera4_pane_g3

0x7449,	// (0x00084a33) main_camera4_pane_g4_ParamLimits

0x7449,	// (0x00084a33) main_camera4_pane_g4

0x7455,	// (0x00084a3f) main_camera4_pane_g5_ParamLimits

0x7455,	// (0x00084a3f) main_camera4_pane_g5

0x0005,

0xf8cb,	// (0x0008ceb5) main_camera4_pane_g_ParamLimits

0xf8cb,	// (0x0008ceb5) main_camera4_pane_g

0x746f,	// (0x00084a59) main_camera4_pane_t1_ParamLimits

0x746f,	// (0x00084a59) main_camera4_pane_t1

0xceb6,	// (0x0008a4a0) bg_tb_trans_pane_cp06

0x74c1,	// (0x00084aab) cam4_indicators_pane_g1

0x74d2,	// (0x00084abc) cam4_indicators_pane_g2

0x0002,

0xf8e6,	// (0x0008ced0) cam4_indicators_pane_g

0x74ea,	// (0x00084ad4) cam4_indicators_pane_t1

0x7514,	// (0x00084afe) main_video4_pane_g1_ParamLimits

0x7514,	// (0x00084afe) main_video4_pane_g1

0x7520,	// (0x00084b0a) main_video4_pane_g2_ParamLimits

0x7520,	// (0x00084b0a) main_video4_pane_g2

0x752c,	// (0x00084b16) main_video4_pane_g3_ParamLimits

0x752c,	// (0x00084b16) main_video4_pane_g3

0x7538,	// (0x00084b22) main_video4_pane_g4_ParamLimits

0x7538,	// (0x00084b22) main_video4_pane_g4

0x0004,

0xf8ed,	// (0x0008ced7) main_video4_pane_g_ParamLimits

0xf8ed,	// (0x0008ced7) main_video4_pane_g

0x755a,	// (0x00084b44) vid4_indicators_pane_ParamLimits

0x755a,	// (0x00084b44) vid4_indicators_pane

0x7579,	// (0x00084b63) video4_image_uncrop_cif_pane_ParamLimits

0x7579,	// (0x00084b63) video4_image_uncrop_cif_pane

0x7588,	// (0x00084b72) video4_image_uncrop_nhd_pane_ParamLimits

0x7588,	// (0x00084b72) video4_image_uncrop_nhd_pane

0x73fc,	// (0x000849e6) video4_image_uncrop_vga_pane_ParamLimits

0x73fc,	// (0x000849e6) video4_image_uncrop_vga_pane

0xa8c0,	// (0x00087eaa) bg_tb_trans_pane_cp07

0x75a1,	// (0x00084b8b) vid4_indicators_pane_g1

0x75b7,	// (0x00084ba1) vid4_indicators_pane_g2

0x75cb,	// (0x00084bb5) vid4_indicators_pane_g3

0x0004,

0xf8f8,	// (0x0008cee2) vid4_indicators_pane_g

0x75fc,	// (0x00084be6) vid4_indicators_pane_t1

0x7613,	// (0x00084bfd) cam4_autofocus_pane_g1

0x761b,	// (0x00084c05) cam4_autofocus_pane_g2

0x7623,	// (0x00084c0d) cam4_autofocus_pane_g3

0x0002,

0xf903,	// (0x0008ceed) cam4_autofocus_pane_g

0x762b,	// (0x00084c15) cam4_autofocus_pane_g3_copy1

0x6dc4,	// (0x000843ae) video_down_pane_cp_t1

0x6dd2,	// (0x000843bc) video_down_pane_cp_t2

0x0001,

0xf87f,	// (0x0008ce69) video_down_pane_cp_t

0x20ca,	// (0x0007f6b4) popup_vitu2_window_ParamLimits

0x20ca,	// (0x0007f6b4) popup_vitu2_window

0x7633,	// (0x00084c1d) aid_size_cell2_itu2_ParamLimits

0x7633,	// (0x00084c1d) aid_size_cell2_itu2

0x7655,	// (0x00084c3f) aid_size_cell_itu2_ParamLimits

0x7655,	// (0x00084c3f) aid_size_cell_itu2

0xdb52,	// (0x0008b13c) bg_popup_window_pane_cp09_ParamLimits

0xdb52,	// (0x0008b13c) bg_popup_window_pane_cp09

0x769b,	// (0x00084c85) field_vitu2_entry_pane_ParamLimits

0x769b,	// (0x00084c85) field_vitu2_entry_pane

0x76bb,	// (0x00084ca5) grid_vitu2_function_pane_ParamLimits

0x76bb,	// (0x00084ca5) grid_vitu2_function_pane

0x76ff,	// (0x00084ce9) grid_vitu2_itu_pane_ParamLimits

0x76ff,	// (0x00084ce9) grid_vitu2_itu_pane

0x777b,	// (0x00084d65) cell_vitu2_itu_pane_ParamLimits

0x777b,	// (0x00084d65) cell_vitu2_itu_pane

0x7792,	// (0x00084d7c) cell_vitu2_function_pane_ParamLimits

0x7792,	// (0x00084d7c) cell_vitu2_function_pane

0xd645,	// (0x0008ac2f) bg_popup_call_pane_cp08_ParamLimits

0xd645,	// (0x0008ac2f) bg_popup_call_pane_cp08

0xd65c,	// (0x0008ac46) field_vitu2_entry_pane_g1

0xd668,	// (0x0008ac52) field_vitu2_entry_pane_g2

0x0002,

0xf90a,	// (0x0008cef4) field_vitu2_entry_pane_g

0x0e54,	// (0x0007e43e) field_vitu2_entry_pane_t1_ParamLimits

0x0e54,	// (0x0007e43e) field_vitu2_entry_pane_t1

0x0e82,	// (0x0007e46c) field_vitu2_entry_pane_t2_ParamLimits

0x0e82,	// (0x0007e46c) field_vitu2_entry_pane_t2

0x0001,

0xf911,	// (0x0008cefb) field_vitu2_entry_pane_t_ParamLimits

0xf911,	// (0x0008cefb) field_vitu2_entry_pane_t

0x77d6,	// (0x00084dc0) bg_button_pane_cp010_ParamLimits

0x77d6,	// (0x00084dc0) bg_button_pane_cp010

0x77e4,	// (0x00084dce) cell_vitu2_itu_pane_g1

0x7804,	// (0x00084dee) cell_vitu2_itu_pane_t1_ParamLimits

0x7804,	// (0x00084dee) cell_vitu2_itu_pane_t1

0x0e9f,	// (0x0007e489) cell_vitu2_itu_pane_t2_ParamLimits

0x0e9f,	// (0x0007e489) cell_vitu2_itu_pane_t2

0x0002,

0xf91b,	// (0x0008cf05) cell_vitu2_itu_pane_t_ParamLimits

0xf91b,	// (0x0008cf05) cell_vitu2_itu_pane_t

0xa8c0,	// (0x00087eaa) bg_button_pane_cp011

0x7850,	// (0x00084e3a) cell_vitu2_function_pane_g1

0xa17a,	// (0x00087764) main_myfav_hc_pane

0x7277,	// (0x00084861) popup_image3_note_pane_ParamLimits

0x7277,	// (0x00084861) popup_image3_note_pane

0x7285,	// (0x0008486f) popup_image3_tool_bar_pane_ParamLimits

0x7285,	// (0x0008486f) popup_image3_tool_bar_pane

0x0f15,	// (0x0007e4ff) cell_vitu2_itu_pane_t3_ParamLimits

0x0f15,	// (0x0007e4ff) cell_vitu2_itu_pane_t3

0xa17a,	// (0x00087764) bg_popup_trans_pane

0xd68a,	// (0x0008ac74) grid_image3_tool_bar_pane

0xd694,	// (0x0008ac7e) bg_popup_trans_pane_g1

0xad3f,	// (0x00088329) bg_popup_trans_pane_g2

0xd69c,	// (0x0008ac86) bg_popup_trans_pane_g3

0xd6a4,	// (0x0008ac8e) bg_popup_trans_pane_g4

0xd6ac,	// (0x0008ac96) bg_popup_trans_pane_g5

0xd6b4,	// (0x0008ac9e) bg_popup_trans_pane_g6

0xd6bc,	// (0x0008aca6) bg_popup_trans_pane_g7

0xd6c4,	// (0x0008acae) bg_popup_trans_pane_g8

0xad1f,	// (0x00088309) bg_popup_trans_pane_g9

0x0008,

0xf922,	// (0x0008cf0c) bg_popup_trans_pane_g

0xd6cc,	// (0x0008acb6) cell_image3_tool_bar_pane_ParamLimits

0xd6cc,	// (0x0008acb6) cell_image3_tool_bar_pane

0xcc86,	// (0x0008a270) cell_image3_tool_bar_pane_g1

0xa17a,	// (0x00087764) bg_popup_trans_pane_cp1

0xd6e2,	// (0x0008accc) popup_image3_note_pane_t1

0xd6f0,	// (0x0008acda) popup_image3_note_pane_t2

0xd6fe,	// (0x0008ace8) popup_image3_note_pane_t3

0x0002,

0xf935,	// (0x0008cf1f) popup_image3_note_pane_t

0xd70e,	// (0x0008acf8) popup_image3_note_pane_t3_copy1

0x7864,	// (0x00084e4e) bg_myfav_hc_instruction_pane_ParamLimits

0x7864,	// (0x00084e4e) bg_myfav_hc_instruction_pane

0x787c,	// (0x00084e66) cell_myfav_contact_pane_ParamLimits

0x787c,	// (0x00084e66) cell_myfav_contact_pane

0x7896,	// (0x00084e80) cell_myfav_contact_pane_cp1_ParamLimits

0x7896,	// (0x00084e80) cell_myfav_contact_pane_cp1

0x78ae,	// (0x00084e98) cell_myfav_contact_pane_cp2_ParamLimits

0x78ae,	// (0x00084e98) cell_myfav_contact_pane_cp2

0x78c6,	// (0x00084eb0) cell_myfav_contact_pane_cp3_ParamLimits

0x78c6,	// (0x00084eb0) cell_myfav_contact_pane_cp3

0x78dd,	// (0x00084ec7) cell_myfav_contact_pane_cp4_ParamLimits

0x78dd,	// (0x00084ec7) cell_myfav_contact_pane_cp4

0x78f3,	// (0x00084edd) cell_myfav_contact_pane_cp5_ParamLimits

0x78f3,	// (0x00084edd) cell_myfav_contact_pane_cp5

0x7907,	// (0x00084ef1) cell_myfav_contact_pane_cp6_ParamLimits

0x7907,	// (0x00084ef1) cell_myfav_contact_pane_cp6

0x791b,	// (0x00084f05) cell_myfav_contact_pane_cp7_ParamLimits

0x791b,	// (0x00084f05) cell_myfav_contact_pane_cp7

0xd71c,	// (0x0008ad06) listscroll_gen_pane_cp05

0x7933,	// (0x00084f1d) main_myfav_hc_pane_g1_ParamLimits

0x7933,	// (0x00084f1d) main_myfav_hc_pane_g1

0x794d,	// (0x00084f37) main_myfav_hc_pane_g2_ParamLimits

0x794d,	// (0x00084f37) main_myfav_hc_pane_g2

0x0002,

0xf93c,	// (0x0008cf26) main_myfav_hc_pane_g_ParamLimits

0xf93c,	// (0x0008cf26) main_myfav_hc_pane_g

0x797f,	// (0x00084f69) main_myfav_hc_pane_t1_ParamLimits

0x797f,	// (0x00084f69) main_myfav_hc_pane_t1

0xd725,	// (0x0008ad0f) main_myfav_hc_pane_t2_ParamLimits

0xd725,	// (0x0008ad0f) main_myfav_hc_pane_t2

0xd737,	// (0x0008ad21) main_myfav_hc_pane_t3_ParamLimits

0xd737,	// (0x0008ad21) main_myfav_hc_pane_t3

0x7996,	// (0x00084f80) main_myfav_hc_pane_t4_ParamLimits

0x7996,	// (0x00084f80) main_myfav_hc_pane_t4

0x0004,

0xf943,	// (0x0008cf2d) main_myfav_hc_pane_t_ParamLimits

0xf943,	// (0x0008cf2d) main_myfav_hc_pane_t

0xcc86,	// (0x0008a270) bg_myfav_hc_instruction_pane_g1

0xd749,	// (0x0008ad33) cell_myfav_contact_pane_g1_ParamLimits

0xd749,	// (0x0008ad33) cell_myfav_contact_pane_g1

0xd749,	// (0x0008ad33) cell_myfav_contact_pane_g2_ParamLimits

0xd749,	// (0x0008ad33) cell_myfav_contact_pane_g2

0xd755,	// (0x0008ad3f) cell_myfav_contact_pane_g3_ParamLimits

0xd755,	// (0x0008ad3f) cell_myfav_contact_pane_g3

0xcf1b,	// (0x0008a505) cell_myfav_contact_pane_g4_ParamLimits

0xcf1b,	// (0x0008a505) cell_myfav_contact_pane_g4

0xd762,	// (0x0008ad4c) cell_myfav_contact_pane_g5_ParamLimits

0xd762,	// (0x0008ad4c) cell_myfav_contact_pane_g5

0x0004,

0xf94e,	// (0x0008cf38) cell_myfav_contact_pane_g_ParamLimits

0xf94e,	// (0x0008cf38) cell_myfav_contact_pane_g

0x7967,	// (0x00084f51) main_myfav_hc_pane_g3_ParamLimits

0x7967,	// (0x00084f51) main_myfav_hc_pane_g3

0x1fdc,	// (0x0007f5c6) popup_adpt_find_window

0x79c0,	// (0x00084faa) afind_page_pane_ParamLimits

0x79c0,	// (0x00084faa) afind_page_pane

0x79cd,	// (0x00084fb7) aid_size_cell_afind_ParamLimits

0x79cd,	// (0x00084fb7) aid_size_cell_afind

0x79e7,	// (0x00084fd1) bg_popup_sub_pane_cp09_ParamLimits

0x79e7,	// (0x00084fd1) bg_popup_sub_pane_cp09

0x79f4,	// (0x00084fde) find_pane_cp01_ParamLimits

0x79f4,	// (0x00084fde) find_pane_cp01

0xd76e,	// (0x0008ad58) grid_afind_control_pane_ParamLimits

0xd76e,	// (0x0008ad58) grid_afind_control_pane

0x7a01,	// (0x00084feb) grid_afind_pane_ParamLimits

0x7a01,	// (0x00084feb) grid_afind_pane

0x7a1d,	// (0x00085007) cell_afind_pane_ParamLimits

0x7a1d,	// (0x00085007) cell_afind_pane

0xcc86,	// (0x0008a270) afind_page_pane_g1

0x7a67,	// (0x00085051) afind_page_pane_g2

0x7a70,	// (0x0008505a) afind_page_pane_g3

0x0002,

0xf959,	// (0x0008cf43) afind_page_pane_g

0x7a79,	// (0x00085063) afind_page_pane_t1

0xd782,	// (0x0008ad6c) cell_afind_grid_control_pane_ParamLimits

0xd782,	// (0x0008ad6c) cell_afind_grid_control_pane

0xd58a,	// (0x0008ab74) bg_button_pane_cp69_ParamLimits

0xd58a,	// (0x0008ab74) bg_button_pane_cp69

0x7a99,	// (0x00085083) cell_afind_pane_g1_ParamLimits

0x7a99,	// (0x00085083) cell_afind_pane_g1

0x7aa6,	// (0x00085090) cell_afind_pane_t1_ParamLimits

0x7aa6,	// (0x00085090) cell_afind_pane_t1

0xab34,	// (0x0008811e) bg_button_pane_cp72

0xd791,	// (0x0008ad7b) cell_afind_grid_control_pane_g1

0x5060,	// (0x0008264a) aid_image_placing_area_ParamLimits

0x5060,	// (0x0008264a) aid_image_placing_area

0xd256,	// (0x0008a840) field_vitu_entry_pane_g1_ParamLimits

0xd256,	// (0x0008a840) field_vitu_entry_pane_g1

0xd262,	// (0x0008a84c) field_vitu_entry_pane_g2_ParamLimits

0xd262,	// (0x0008a84c) field_vitu_entry_pane_g2

0x0001,

0xf80a,	// (0x0008cdf4) field_vitu_entry_pane_g_ParamLimits

0xf80a,	// (0x0008cdf4) field_vitu_entry_pane_g

0x6bca,	// (0x000841b4) cell_vitu_itu_pane_g1_ParamLimits

0x6c1a,	// (0x00084204) cell_vitu_itu_pane_t3_ParamLimits

0x6c1a,	// (0x00084204) cell_vitu_itu_pane_t3

0xd53a,	// (0x0008ab24) mp4_progress_pane_t1_ParamLimits

0xd553,	// (0x0008ab3d) mp4_progress_pane_t2_ParamLimits

0xf89f,	// (0x0008ce89) mp4_progress_pane_t_ParamLimits

0xd56c,	// (0x0008ab56) mup_progress_pane_cp04_ParamLimits

0x79aa,	// (0x00084f94) main_myfav_hc_pane_t5_ParamLimits

0x79aa,	// (0x00084f94) main_myfav_hc_pane_t5

0x0b42,	// (0x0007e12c) aid_zoom_text_primary

0x1fdc,	// (0x0007f5c6) popup_adpt_find_window_ParamLimits

0xa8c0,	// (0x00087eaa) main_cam_set_pane

0x7423,	// (0x00084a0d) cam4_zoom_pane_ParamLimits

0x7423,	// (0x00084a0d) cam4_zoom_pane

0x7ab8,	// (0x000850a2) main_cam_set_pane_g1_ParamLimits

0x7ab8,	// (0x000850a2) main_cam_set_pane_g1

0x7ac6,	// (0x000850b0) main_cam_set_pane_g2_ParamLimits

0x7ac6,	// (0x000850b0) main_cam_set_pane_g2

0x0001,

0xf960,	// (0x0008cf4a) main_cam_set_pane_g_ParamLimits

0xf960,	// (0x0008cf4a) main_cam_set_pane_g

0x7ad2,	// (0x000850bc) main_cam_set_pane_t1_ParamLimits

0x7ad2,	// (0x000850bc) main_cam_set_pane_t1

0x7aee,	// (0x000850d8) main_cset_listscroll_pane_ParamLimits

0x7aee,	// (0x000850d8) main_cset_listscroll_pane

0x7b1d,	// (0x00085107) main_cset_slider_pane_ParamLimits

0x7b1d,	// (0x00085107) main_cset_slider_pane

0xd7a2,	// (0x0008ad8c) main_cset_list_pane_ParamLimits

0xd7a2,	// (0x0008ad8c) main_cset_list_pane

0xd7b2,	// (0x0008ad9c) scroll_pane_cp028

0x7b3e,	// (0x00085128) aid_area_touch_slider

0x7b5a,	// (0x00085144) cset_slider_pane

0x7b84,	// (0x0008516e) main_cset_slider_pane_g1

0x7b99,	// (0x00085183) main_cset_slider_pane_g2

0x0011,

0xf965,	// (0x0008cf4f) main_cset_slider_pane_g

0xd7f5,	// (0x0008addf) main_cset_slider_pane_t1

0x7c55,	// (0x0008523f) main_cset_slider_pane_t2

0x7c6f,	// (0x00085259) main_cset_slider_pane_t3

0x7c89,	// (0x00085273) main_cset_slider_pane_t4

0x7ca3,	// (0x0008528d) main_cset_slider_pane_t5

0x7cbd,	// (0x000852a7) main_cset_slider_pane_t6

0x7cd2,	// (0x000852bc) main_cset_slider_pane_t7

0x000e,

0xf98a,	// (0x0008cf74) main_cset_slider_pane_t

0x7dd6,	// (0x000853c0) cset_list_set_pane_ParamLimits

0x7dd6,	// (0x000853c0) cset_list_set_pane

0x7de7,	// (0x000853d1) aid_position_infowindow_above

0x7def,	// (0x000853d9) aid_position_infowindow_below

0x7df7,	// (0x000853e1) cset_list_set_pane_g1_ParamLimits

0x7df7,	// (0x000853e1) cset_list_set_pane_g1

0x0f67,	// (0x0007e551) cset_list_set_pane_g3_ParamLimits

0x0f67,	// (0x0007e551) cset_list_set_pane_g3

0x0001,

0xf9a9,	// (0x0008cf93) cset_list_set_pane_g_ParamLimits

0xf9a9,	// (0x0008cf93) cset_list_set_pane_g

0x0f76,	// (0x0007e560) cset_list_set_pane_t1_ParamLimits

0x0f76,	// (0x0007e560) cset_list_set_pane_t1

0xa8c0,	// (0x00087eaa) list_highlight_pane_cp021_ParamLimits

0xa8c0,	// (0x00087eaa) list_highlight_pane_cp021

0xb556,	// (0x00088b40) cset_slider_pane_g1

0xb568,	// (0x00088b52) cset_slider_pane_g2

0xb55f,	// (0x00088b49) cset_slider_pane_g3

0x0002,

0xf9ae,	// (0x0008cf98) cset_slider_pane_g

0x7e03,	// (0x000853ed) aid_area_touch_cam4_zoom

0x7e0b,	// (0x000853f5) cam4_zoom_cont_pane

0x7e13,	// (0x000853fd) cam4_zoom_pane_g1

0x7e1b,	// (0x00085405) cam4_zoom_pane_g2

0x7e23,	// (0x0008540d) cam4_zoom_pane_g3

0x0002,

0xf9b5,	// (0x0008cf9f) cam4_zoom_pane_g

0xdea5,	// (0x0008b48f) cam4_zoom_cont_pane_g1

0xdeae,	// (0x0008b498) cam4_zoom_cont_pane_g2

0xdeb7,	// (0x0008b4a1) cam4_zoom_cont_pane_g3

0x0002,

0xf9bc,	// (0x0008cfa6) cam4_zoom_cont_pane_g

0x72ce,	// (0x000848b8) call4_image_pane_ParamLimits

0x72ce,	// (0x000848b8) call4_image_pane

0xd596,	// (0x0008ab80) call4_windows_conf_pane_ParamLimits

0xd5b1,	// (0x0008ab9b) popup_call4_audio_in_window_ParamLimits

0xd5b1,	// (0x0008ab9b) popup_call4_audio_in_window

0xa17a,	// (0x00087764) bg_popup_call2_act_pane_cp02

0xd613,	// (0x0008abfd) call4_list_conf_pane

0xcc86,	// (0x0008a270) call4_image_pane_g1

0xcc86,	// (0x0008a270) call4_image_pane_g2

0x0001,

0xf6dc,	// (0x0008ccc6) call4_image_pane_g

0xd895,	// (0x0008ae7f) list_single_graphic_popup_conf4_pane_ParamLimits

0xd895,	// (0x0008ae7f) list_single_graphic_popup_conf4_pane

0xa17a,	// (0x00087764) list_highlight_pane_cp022

0xd8aa,	// (0x0008ae94) list_single_graphic_popup_conf4_pane_g1

0xb24a,	// (0x00088834) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf9c3,	// (0x0008cfad) list_single_graphic_popup_conf4_pane_g

0xd8b2,	// (0x0008ae9c) list_single_graphic_popup_conf4_pane_t1

0x334d,	// (0x00080937) popup_vtel_slider_window_ParamLimits

0x334d,	// (0x00080937) popup_vtel_slider_window

0xd578,	// (0x0008ab62) dialer2_ne_pane_t2_ParamLimits

0xd578,	// (0x0008ab62) dialer2_ne_pane_t2

0x0001,

0xf8a4,	// (0x0008ce8e) dialer2_ne_pane_t_ParamLimits

0xf8a4,	// (0x0008ce8e) dialer2_ne_pane_t

0xa8c0,	// (0x00087eaa) bg_popup_sub_pane_cp010_ParamLimits

0xa8c0,	// (0x00087eaa) bg_popup_sub_pane_cp010

0x7e2b,	// (0x00085415) popup_vtel_slider_window_g1_ParamLimits

0x7e2b,	// (0x00085415) popup_vtel_slider_window_g1

0x7e37,	// (0x00085421) popup_vtel_slider_window_g2_ParamLimits

0x7e37,	// (0x00085421) popup_vtel_slider_window_g2

0x0003,

0xf9c8,	// (0x0008cfb2) popup_vtel_slider_window_g_ParamLimits

0xf9c8,	// (0x0008cfb2) popup_vtel_slider_window_g

0x7e7f,	// (0x00085469) vtel_slider_pane_ParamLimits

0x7e7f,	// (0x00085469) vtel_slider_pane

0x7e8e,	// (0x00085478) vtel_slider_pane_g1_ParamLimits

0x7e8e,	// (0x00085478) vtel_slider_pane_g1

0x7e9b,	// (0x00085485) vtel_slider_pane_g2_ParamLimits

0x7e9b,	// (0x00085485) vtel_slider_pane_g2

0x7ea8,	// (0x00085492) vtel_slider_pane_g3_ParamLimits

0x7ea8,	// (0x00085492) vtel_slider_pane_g3

0x7e8e,	// (0x00085478) vtel_slider_pane_g4_ParamLimits

0x7e8e,	// (0x00085478) vtel_slider_pane_g4

0x7eb5,	// (0x0008549f) vtel_slider_pane_g5_ParamLimits

0x7eb5,	// (0x0008549f) vtel_slider_pane_g5

0x0004,

0xf9d1,	// (0x0008cfbb) vtel_slider_pane_g_ParamLimits

0xf9d1,	// (0x0008cfbb) vtel_slider_pane_g

0xa8c0,	// (0x00087eaa) main_gallery2_pane

0x767b,	// (0x00084c65) aid_size_row_itut2_dropdow_list_ParamLimits

0x767b,	// (0x00084c65) aid_size_row_itut2_dropdow_list

0x76dd,	// (0x00084cc7) grid_vitu2_function_top_pane_ParamLimits

0x76dd,	// (0x00084cc7) grid_vitu2_function_top_pane

0x7733,	// (0x00084d1d) popup_vitu2_dropdown_list_window_ParamLimits

0x7733,	// (0x00084d1d) popup_vitu2_dropdown_list_window

0x7757,	// (0x00084d41) popup_vitu2_match_list_window

0x7ec2,	// (0x000854ac) cell_vitu2_function_top_pane_ParamLimits

0x7ec2,	// (0x000854ac) cell_vitu2_function_top_pane

0x7ee4,	// (0x000854ce) cell_vitu2_function_top_pane_cp01_ParamLimits

0x7ee4,	// (0x000854ce) cell_vitu2_function_top_pane_cp01

0x7f00,	// (0x000854ea) cell_vitu2_function_top_wide_pane_ParamLimits

0x7f00,	// (0x000854ea) cell_vitu2_function_top_wide_pane

0xa8c0,	// (0x00087eaa) bg_button_pane_cp012

0x7f1c,	// (0x00085506) cell_vitu2_function_top_pane_g1

0x7f30,	// (0x0008551a) bg_button_pane_cp013_ParamLimits

0x7f30,	// (0x0008551a) bg_button_pane_cp013

0x7f4c,	// (0x00085536) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x7f4c,	// (0x00085536) cell_vitu2_function_top_wide_pane_g1

0x20ca,	// (0x0007f6b4) bg_popup_sub_pane_cp20

0x7f64,	// (0x0008554e) list_vitu2_match_list_pane

0xd694,	// (0x0008ac7e) bg_popup_sub_pane_cp20_g1

0xd69c,	// (0x0008ac86) bg_popup_sub_pane_cp20_g2

0xad3f,	// (0x00088329) bg_popup_sub_pane_cp20_g3

0xd6a4,	// (0x0008ac8e) bg_popup_sub_pane_cp20_g4

0xad1f,	// (0x00088309) bg_popup_sub_pane_cp20_g5

0xd8c8,	// (0x0008aeb2) bg_popup_sub_pane_cp20_g6

0xd6b4,	// (0x0008ac9e) bg_popup_sub_pane_cp20_g7

0xd6bc,	// (0x0008aca6) bg_popup_sub_pane_cp20_g8

0xd6c4,	// (0x0008acae) bg_popup_sub_pane_cp20_g9

0x0008,

0xf9dc,	// (0x0008cfc6) bg_popup_sub_pane_cp20_g

0xa8dc,	// (0x00087ec6) list_vitu2_match_list_item_pane_ParamLimits

0xa8dc,	// (0x00087ec6) list_vitu2_match_list_item_pane

0x7f7c,	// (0x00085566) list_vitu2_match_list_item_pane_t1

0xa17a,	// (0x00087764) bg_popup_sub_pane_cp21

0xb173,	// (0x0008875d) grid_vitu2_dropdown_list_pane

0x7f96,	// (0x00085580) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x7f96,	// (0x00085580) cell_vitu2_dropdown_list_char_pane

0x7fbb,	// (0x000855a5) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x7fbb,	// (0x000855a5) cell_vitu2_dropdown_list_ctrl_pane

0xd8d0,	// (0x0008aeba) cell_vitu2_dropdown_list_char_pane_g1

0xd8d9,	// (0x0008aec3) cell_vitu2_dropdown_list_char_pane_g2

0xd8e2,	// (0x0008aecc) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xf9f9,	// (0x0008cfe3) cell_vitu2_dropdown_list_char_pane_g

0x7fe9,	// (0x000855d3) cell_vitu2_dropdown_list_char_pane_t1

0x7ff7,	// (0x000855e1) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x7ff7,	// (0x000855e1) cell_vitu2_dropdown_list_ctrl_pane_g1

0x8007,	// (0x000855f1) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x8007,	// (0x000855f1) cell_vitu2_dropdown_list_ctrl_pane_g2

0x8018,	// (0x00085602) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x8018,	// (0x00085602) cell_vitu2_dropdown_list_ctrl_pane_g3

0x8028,	// (0x00085612) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x8028,	// (0x00085612) cell_vitu2_dropdown_list_ctrl_pane_g4

0xceb6,	// (0x0008a4a0) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0xceb6,	// (0x0008a4a0) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa00,	// (0x0008cfea) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa00,	// (0x0008cfea) cell_vitu2_dropdown_list_ctrl_pane_g

0x8041,	// (0x0008562b) aid_size_cell_gallery2_ParamLimits

0x8041,	// (0x0008562b) aid_size_cell_gallery2

0x805b,	// (0x00085645) grid_gallery2_pane_ParamLimits

0x805b,	// (0x00085645) grid_gallery2_pane

0x6a4f,	// (0x00084039) scroll_pane_cp029_ParamLimits

0x6a4f,	// (0x00084039) scroll_pane_cp029

0x8072,	// (0x0008565c) cell_gallery2_pane_ParamLimits

0x8072,	// (0x0008565c) cell_gallery2_pane

0xd8eb,	// (0x0008aed5) cell_gallery2_pane_g2

0x80be,	// (0x000856a8) cell_gallery2_pane_g3

0xd8f3,	// (0x0008aedd) cell_gallery2_pane_g4

0xd8fb,	// (0x0008aee5) cell_gallery2_pane_g5

0xaae2,	// (0x000880cc) grid_highlight_pane_cp10

0x7757,	// (0x00084d41) popup_vitu2_match_list_window_ParamLimits

0x776b,	// (0x00084d55) popup_vitu2_query_window_ParamLimits

0x776b,	// (0x00084d55) popup_vitu2_query_window

0xa17a,	// (0x00087764) bg_vitu2_candi_button_pane

0xd8d0,	// (0x0008aeba) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xd8d9,	// (0x0008aec3) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xd8e2,	// (0x0008aecc) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x0fd5,	// (0x0007e5bf) bg_button_pane_cp015

0x80c6,	// (0x000856b0) bg_button_pane_cp016

0x80d9,	// (0x000856c3) bg_button_pane_cp017

0xc835,	// (0x00089e1f) bg_popup_sub_pane_cp22

0xd903,	// (0x0008aeed) popup_vitu2_query_window_g1

0x1008,	// (0x0007e5f2) popup_vitu2_query_window_g2

0x0002,

0xfa0b,	// (0x0008cff5) popup_vitu2_query_window_g

0x1025,	// (0x0007e60f) popup_vitu2_query_window_t1_ParamLimits

0x1025,	// (0x0007e60f) popup_vitu2_query_window_t1

0x1058,	// (0x0007e642) popup_vitu2_query_window_t2_ParamLimits

0x1058,	// (0x0007e642) popup_vitu2_query_window_t2

0x106a,	// (0x0007e654) popup_vitu2_query_window_t3_ParamLimits

0x106a,	// (0x0007e654) popup_vitu2_query_window_t3

0x80fd,	// (0x000856e7) popup_vitu2_query_window_t4_ParamLimits

0x80fd,	// (0x000856e7) popup_vitu2_query_window_t4

0x8120,	// (0x0008570a) popup_vitu2_query_window_t5_ParamLimits

0x8120,	// (0x0008570a) popup_vitu2_query_window_t5

0x0006,

0xfa12,	// (0x0008cffc) popup_vitu2_query_window_t_ParamLimits

0xfa12,	// (0x0008cffc) popup_vitu2_query_window_t

0xd79a,	// (0x0008ad84) main_cset_text_pane

0x7b3e,	// (0x00085128) aid_area_touch_slider_ParamLimits

0x7b5a,	// (0x00085144) cset_slider_pane_ParamLimits

0x7b84,	// (0x0008516e) main_cset_slider_pane_g1_ParamLimits

0x7b99,	// (0x00085183) main_cset_slider_pane_g2_ParamLimits

0xd7c5,	// (0x0008adaf) main_cset_slider_pane_g3_ParamLimits

0xd7c5,	// (0x0008adaf) main_cset_slider_pane_g3

0x7bae,	// (0x00085198) main_cset_slider_pane_g4_ParamLimits

0x7bae,	// (0x00085198) main_cset_slider_pane_g4

0x7bbd,	// (0x000851a7) main_cset_slider_pane_g5_ParamLimits

0x7bbd,	// (0x000851a7) main_cset_slider_pane_g5

0x7bc9,	// (0x000851b3) main_cset_slider_pane_g6_ParamLimits

0x7bc9,	// (0x000851b3) main_cset_slider_pane_g6

0xf965,	// (0x0008cf4f) main_cset_slider_pane_g_ParamLimits

0xd7f5,	// (0x0008addf) main_cset_slider_pane_t1_ParamLimits

0x7c55,	// (0x0008523f) main_cset_slider_pane_t2_ParamLimits

0x7c6f,	// (0x00085259) main_cset_slider_pane_t3_ParamLimits

0x7c89,	// (0x00085273) main_cset_slider_pane_t4_ParamLimits

0x7ca3,	// (0x0008528d) main_cset_slider_pane_t5_ParamLimits

0x7cbd,	// (0x000852a7) main_cset_slider_pane_t6_ParamLimits

0x7cd2,	// (0x000852bc) main_cset_slider_pane_t7_ParamLimits

0x7cfc,	// (0x000852e6) main_cset_slider_pane_t8_ParamLimits

0x7cfc,	// (0x000852e6) main_cset_slider_pane_t8

0x7d24,	// (0x0008530e) main_cset_slider_pane_t9_ParamLimits

0x7d24,	// (0x0008530e) main_cset_slider_pane_t9

0x7d4c,	// (0x00085336) main_cset_slider_pane_t10_ParamLimits

0x7d4c,	// (0x00085336) main_cset_slider_pane_t10

0x7d74,	// (0x0008535e) main_cset_slider_pane_t11_ParamLimits

0x7d74,	// (0x0008535e) main_cset_slider_pane_t11

0x7d9c,	// (0x00085386) main_cset_slider_pane_t12_ParamLimits

0x7d9c,	// (0x00085386) main_cset_slider_pane_t12

0x7db9,	// (0x000853a3) main_cset_slider_pane_t13_ParamLimits

0x7db9,	// (0x000853a3) main_cset_slider_pane_t13

0xf98a,	// (0x0008cf74) main_cset_slider_pane_t_ParamLimits

0xa17a,	// (0x00087764) bg_popup_sub_pane_cp011

0xd90f,	// (0x0008aef9) main_cset_text_pane_g1

0xd917,	// (0x0008af01) main_cset_text_pane_t1

0xd925,	// (0x0008af0f) main_cset_text_pane_t2

0xd933,	// (0x0008af1d) main_cset_text_pane_t3

0xd941,	// (0x0008af2b) main_cset_text_pane_t4

0xd94f,	// (0x0008af39) main_cset_text_pane_t5

0xd95d,	// (0x0008af47) main_cset_text_pane_t6

0xd96b,	// (0x0008af55) main_cset_text_pane_t7

0x0006,

0xfa21,	// (0x0008d00b) main_cset_text_pane_t

0xa17a,	// (0x00087764) main_cam4_burst_pane

0xa17a,	// (0x00087764) main_cam5_pane

0x7a87,	// (0x00085071) bg_button_pane_cp019

0x7a90,	// (0x0008507a) bg_button_pane_cp020

0xd7d1,	// (0x0008adbb) main_cset_slider_pane_g7_ParamLimits

0xd7d1,	// (0x0008adbb) main_cset_slider_pane_g7

0xd7dd,	// (0x0008adc7) main_cset_slider_pane_g8_ParamLimits

0xd7dd,	// (0x0008adc7) main_cset_slider_pane_g8

0x7bdd,	// (0x000851c7) main_cset_slider_pane_g9_ParamLimits

0x7bdd,	// (0x000851c7) main_cset_slider_pane_g9

0x7be9,	// (0x000851d3) main_cset_slider_pane_g10_ParamLimits

0x7be9,	// (0x000851d3) main_cset_slider_pane_g10

0x7bf5,	// (0x000851df) main_cset_slider_pane_g11_ParamLimits

0x7bf5,	// (0x000851df) main_cset_slider_pane_g11

0x7c01,	// (0x000851eb) main_cset_slider_pane_g12_ParamLimits

0x7c01,	// (0x000851eb) main_cset_slider_pane_g12

0x7c0d,	// (0x000851f7) main_cset_slider_pane_g13_ParamLimits

0x7c0d,	// (0x000851f7) main_cset_slider_pane_g13

0x7c19,	// (0x00085203) main_cset_slider_pane_g14_ParamLimits

0x7c19,	// (0x00085203) main_cset_slider_pane_g14

0x7c25,	// (0x0008520f) main_cset_slider_pane_g15_ParamLimits

0x7c25,	// (0x0008520f) main_cset_slider_pane_g15

0xd823,	// (0x0008ae0d) main_cset_slider_pane_t14_ParamLimits

0xd823,	// (0x0008ae0d) main_cset_slider_pane_t14

0xd85c,	// (0x0008ae46) main_cset_slider_pane_t15_ParamLimits

0xd85c,	// (0x0008ae46) main_cset_slider_pane_t15

0x8143,	// (0x0008572d) aid_cam4_burst_size_cell_ParamLimits

0x8143,	// (0x0008572d) aid_cam4_burst_size_cell

0x815f,	// (0x00085749) grid_cam4_burst_pane_ParamLimits

0x815f,	// (0x00085749) grid_cam4_burst_pane

0x8191,	// (0x0008577b) linegrid_cam4_burst_pane_ParamLimits

0x8191,	// (0x0008577b) linegrid_cam4_burst_pane

0x81af,	// (0x00085799) scroll_pane_cp30_ParamLimits

0x81af,	// (0x00085799) scroll_pane_cp30

0x81bb,	// (0x000857a5) cell_cam4_burst_pane_ParamLimits

0x81bb,	// (0x000857a5) cell_cam4_burst_pane

0xd979,	// (0x0008af63) linegrid_cam4_burst_pane_g1_ParamLimits

0xd979,	// (0x0008af63) linegrid_cam4_burst_pane_g1

0x81fb,	// (0x000857e5) linegrid_cam4_burst_pane_g2_ParamLimits

0x81fb,	// (0x000857e5) linegrid_cam4_burst_pane_g2

0xd986,	// (0x0008af70) linegrid_cam4_burst_pane_g3_ParamLimits

0xd986,	// (0x0008af70) linegrid_cam4_burst_pane_g3

0x0002,

0xfa30,	// (0x0008d01a) linegrid_cam4_burst_pane_g_ParamLimits

0xfa30,	// (0x0008d01a) linegrid_cam4_burst_pane_g

0x820c,	// (0x000857f6) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x820c,	// (0x000857f6) linegrid_cam4_burst_pane_g3_copy1

0xd993,	// (0x0008af7d) linegrid_cam4_burst_pane_g4_ParamLimits

0xd993,	// (0x0008af7d) linegrid_cam4_burst_pane_g4

0x8226,	// (0x00085810) linegrid_cam4_burst_pane_g5_ParamLimits

0x8226,	// (0x00085810) linegrid_cam4_burst_pane_g5

0x8237,	// (0x00085821) linegrid_cam4_burst_pane_g6_ParamLimits

0x8237,	// (0x00085821) linegrid_cam4_burst_pane_g6

0xd9a0,	// (0x0008af8a) linegrid_cam4_burst_pane_g7_ParamLimits

0xd9a0,	// (0x0008af8a) linegrid_cam4_burst_pane_g7

0x824e,	// (0x00085838) cell_cam4_burst_pane_g1

0xd9b9,	// (0x0008afa3) main_cam5_pane_t1_ParamLimits

0xd9b9,	// (0x0008afa3) main_cam5_pane_t1

0xd9cb,	// (0x0008afb5) main_cam5_pane_t2_ParamLimits

0xd9cb,	// (0x0008afb5) main_cam5_pane_t2

0xd9dd,	// (0x0008afc7) main_cam5_pane_t3_ParamLimits

0xd9dd,	// (0x0008afc7) main_cam5_pane_t3

0xd9ef,	// (0x0008afd9) main_cam5_pane_t4_ParamLimits

0xd9ef,	// (0x0008afd9) main_cam5_pane_t4

0xda07,	// (0x0008aff1) main_cam5_pane_t5_ParamLimits

0xda07,	// (0x0008aff1) main_cam5_pane_t5

0xda1b,	// (0x0008b005) main_cam5_pane_t6_ParamLimits

0xda1b,	// (0x0008b005) main_cam5_pane_t6

0xda2f,	// (0x0008b019) main_cam5_pane_t7_ParamLimits

0xda2f,	// (0x0008b019) main_cam5_pane_t7

0xda41,	// (0x0008b02b) main_cam5_pane_t8_ParamLimits

0xda41,	// (0x0008b02b) main_cam5_pane_t8

0xda5f,	// (0x0008b049) main_cam5_pane_t9_ParamLimits

0xda5f,	// (0x0008b049) main_cam5_pane_t9

0xda71,	// (0x0008b05b) main_cam5_pane_t10_ParamLimits

0xda71,	// (0x0008b05b) main_cam5_pane_t10

0xda83,	// (0x0008b06d) main_cam5_pane_t11_ParamLimits

0xda83,	// (0x0008b06d) main_cam5_pane_t11

0xda97,	// (0x0008b081) main_cam5_pane_t12_ParamLimits

0xda97,	// (0x0008b081) main_cam5_pane_t12

0xdaae,	// (0x0008b098) main_cam5_pane_t13_ParamLimits

0xdaae,	// (0x0008b098) main_cam5_pane_t13

0x000c,

0xfa3c,	// (0x0008d026) main_cam5_pane_t_ParamLimits

0xfa3c,	// (0x0008d026) main_cam5_pane_t

0x2089,	// (0x0007f673) popup_scut_keymap_window_ParamLimits

0x2089,	// (0x0007f673) popup_scut_keymap_window

0x8261,	// (0x0008584b) aid_size_cell_brow_shortcut

0xaae2,	// (0x000880cc) bg_popup_window_pane_cp010

0x826d,	// (0x00085857) grid_scut_pane

0x8279,	// (0x00085863) cell_scut_pane_ParamLimits

0x8279,	// (0x00085863) cell_scut_pane

0x8294,	// (0x0008587e) cell_scut_pane_g1

0xdad1,	// (0x0008b0bb) cell_scut_pane_t1

0xdae0,	// (0x0008b0ca) cell_scut_pane_t2

0x829d,	// (0x00085887) cell_scut_pane_t3

0x0002,

0xfa57,	// (0x0008d041) cell_scut_pane_t

0x6244,	// (0x0008382e) main_mup3_pane_g8_ParamLimits

0x6244,	// (0x0008382e) main_mup3_pane_g8

0x768b,	// (0x00084c75) area_vitu2_query_pane_ParamLimits

0x768b,	// (0x00084c75) area_vitu2_query_pane

0x0fe7,	// (0x0007e5d1) input_focus_pane_cp08

0xdaef,	// (0x0008b0d9) area_vitu2_query_pane_g1

0x10e8,	// (0x0007e6d2) area_vitu2_query_pane_g2

0x0001,

0xfa5e,	// (0x0008d048) area_vitu2_query_pane_g

0x82ab,	// (0x00085895) area_vitu2_query_pane_t1_ParamLimits

0x82ab,	// (0x00085895) area_vitu2_query_pane_t1

0x82bf,	// (0x000858a9) area_vitu2_query_pane_t2_ParamLimits

0x82bf,	// (0x000858a9) area_vitu2_query_pane_t2

0x10f9,	// (0x0007e6e3) area_vitu2_query_pane_t3_ParamLimits

0x10f9,	// (0x0007e6e3) area_vitu2_query_pane_t3

0x1121,	// (0x0007e70b) area_vitu2_query_pane_t4_ParamLimits

0x1121,	// (0x0007e70b) area_vitu2_query_pane_t4

0x1149,	// (0x0007e733) area_vitu2_query_pane_t5_ParamLimits

0x1149,	// (0x0007e733) area_vitu2_query_pane_t5

0x1171,	// (0x0007e75b) area_vitu2_query_pane_t6_ParamLimits

0x1171,	// (0x0007e75b) area_vitu2_query_pane_t6

0x0006,

0xfa63,	// (0x0008d04d) area_vitu2_query_pane_t_ParamLimits

0xfa63,	// (0x0008d04d) area_vitu2_query_pane_t

0x82d3,	// (0x000858bd) bg_button_pane_cp018

0x82e1,	// (0x000858cb) bg_button_pane_cp021

0x11bd,	// (0x0007e7a7) bg_button_pane_cp022

0x11ce,	// (0x0007e7b8) input_focus_pane_cp09

0x46ff,	// (0x00081ce9) aid_size_touch_mv_arrow_left

0x472a,	// (0x00081d14) aid_size_touch_mv_arrow_right

0x7c3d,	// (0x00085227) main_cset_slider_pane_g16_ParamLimits

0x7c3d,	// (0x00085227) main_cset_slider_pane_g16

0x7c49,	// (0x00085233) main_cset_slider_pane_g17_ParamLimits

0x7c49,	// (0x00085233) main_cset_slider_pane_g17

0x824e,	// (0x00085838) cell_cam4_burst_pane_g1_ParamLimits

0xa17a,	// (0x00087764) compa_mode_pane

0x7e43,	// (0x0008542d) popup_vtel_slider_window_g3_ParamLimits

0x7e43,	// (0x0008542d) popup_vtel_slider_window_g3

0x7e57,	// (0x00085441) popup_vtel_slider_window_g4_ParamLimits

0x7e57,	// (0x00085441) popup_vtel_slider_window_g4

0x7e6b,	// (0x00085455) popup_vtel_slider_window_t1_ParamLimits

0x7e6b,	// (0x00085455) popup_vtel_slider_window_t1

0xa17a,	// (0x00087764) main_cl_pane

0xc861,	// (0x00089e4b) popup_imed_adjust2_window_ParamLimits

0xc835,	// (0x00089e1f) bg_tb_trans_pane_cp05_ParamLimits

0xd18b,	// (0x0008a775) popup_imed_adjust2_window_g1_ParamLimits

0xd19a,	// (0x0008a784) popup_imed_adjust2_window_g2_ParamLimits

0xd19a,	// (0x0008a784) popup_imed_adjust2_window_g2

0xd1a6,	// (0x0008a790) popup_imed_adjust2_window_g3_ParamLimits

0xd1a6,	// (0x0008a790) popup_imed_adjust2_window_g3

0x0002,

0xf7ce,	// (0x0008cdb8) popup_imed_adjust2_window_g_ParamLimits

0xf7ce,	// (0x0008cdb8) popup_imed_adjust2_window_g

0xd1b2,	// (0x0008a79c) popup_imed_adjust2_window_t1_ParamLimits

0xd1ca,	// (0x0008a7b4) slider_imed_adjust_pane_ParamLimits

0xd1de,	// (0x0008a7c8) slider_imed_adjust_pane_g1_ParamLimits

0xd1ee,	// (0x0008a7d8) slider_imed_adjust_pane_g2_ParamLimits

0xd1fe,	// (0x0008a7e8) slider_imed_adjust_pane_g3_ParamLimits

0xd20f,	// (0x0008a7f9) slider_imed_adjust_pane_g4_ParamLimits

0xf7d5,	// (0x0008cdbf) slider_imed_adjust_pane_g_ParamLimits

0x73cc,	// (0x000849b6) aid_touch_area_cam4_ParamLimits

0x73cc,	// (0x000849b6) aid_touch_area_cam4

0x73dc,	// (0x000849c6) battery_pane_cp01

0x7463,	// (0x00084a4d) main_camera4_pane_g6_ParamLimits

0x7463,	// (0x00084a4d) main_camera4_pane_g6

0x7481,	// (0x00084a6b) main_camera4_pane_t2_ParamLimits

0x7481,	// (0x00084a6b) main_camera4_pane_t2

0x0001,

0xf8d8,	// (0x0008cec2) main_camera4_pane_t_ParamLimits

0xf8d8,	// (0x0008cec2) main_camera4_pane_t

0x7504,	// (0x00084aee) aid_touch_area_vid4_ParamLimits

0x7504,	// (0x00084aee) aid_touch_area_vid4

0x7544,	// (0x00084b2e) main_video4_pane_g5_ParamLimits

0x7544,	// (0x00084b2e) main_video4_pane_g5

0x756a,	// (0x00084b54) vid4_progress_pane_ParamLimits

0x756a,	// (0x00084b54) vid4_progress_pane

0xd7e9,	// (0x0008add3) main_cset_slider_pane_g18_ParamLimits

0xd7e9,	// (0x0008add3) main_cset_slider_pane_g18

0xd9ad,	// (0x0008af97) cell_cam4_burst_pane_g2_ParamLimits

0xd9ad,	// (0x0008af97) cell_cam4_burst_pane_g2

0x0001,

0xfa37,	// (0x0008d021) cell_cam4_burst_pane_g_ParamLimits

0xfa37,	// (0x0008d021) cell_cam4_burst_pane_g

0x82ed,	// (0x000858d7) bg_cl_pane_ParamLimits

0x82ed,	// (0x000858d7) bg_cl_pane

0x82f9,	// (0x000858e3) cl_header_pane_ParamLimits

0x82f9,	// (0x000858e3) cl_header_pane

0x8305,	// (0x000858ef) cl_listscroll_pane_ParamLimits

0x8305,	// (0x000858ef) cl_listscroll_pane

0xdafb,	// (0x0008b0e5) bg_cl_pane_g1

0xdb03,	// (0x0008b0ed) bg_cl_pane_g2

0xdb0b,	// (0x0008b0f5) bg_cl_pane_g3

0xdb13,	// (0x0008b0fd) bg_cl_pane_g4

0xdb1b,	// (0x0008b105) bg_cl_pane_g5

0xdb23,	// (0x0008b10d) bg_cl_pane_g6

0xdb60,	// (0x0008b14a) bg_cl_pane_g7

0xdb68,	// (0x0008b152) bg_cl_pane_g8

0xdb70,	// (0x0008b15a) bg_cl_pane_g9

0x0008,

0xfa72,	// (0x0008d05c) bg_cl_pane_g

0x8311,	// (0x000858fb) aid_height_cl_leading_ParamLimits

0x8311,	// (0x000858fb) aid_height_cl_leading

0x831d,	// (0x00085907) aid_height_cl_text_ParamLimits

0x831d,	// (0x00085907) aid_height_cl_text

0x20ca,	// (0x0007f6b4) bg_cl_header_pane_ParamLimits

0x20ca,	// (0x0007f6b4) bg_cl_header_pane

0x8335,	// (0x0008591f) cl_header_pane_g1_ParamLimits

0x8335,	// (0x0008591f) cl_header_pane_g1

0x8342,	// (0x0008592c) cl_header_pane_t1_ParamLimits

0x8342,	// (0x0008592c) cl_header_pane_t1

0xdb78,	// (0x0008b162) cl_list_pane

0xd7b2,	// (0x0008ad9c) hc_scroll_pane_cp01

0xad1f,	// (0x00088309) bg_cl_header_pane_g1

0xd694,	// (0x0008ac7e) bg_cl_header_pane_g2

0xad3f,	// (0x00088329) bg_cl_header_pane_g3

0xd6a4,	// (0x0008ac8e) bg_cl_header_pane_g4

0xd69c,	// (0x0008ac86) bg_cl_header_pane_g5

0xd8c8,	// (0x0008aeb2) bg_cl_header_pane_g6

0xd6bc,	// (0x0008aca6) bg_cl_header_pane_g7

0xd6c4,	// (0x0008acae) bg_cl_header_pane_g8

0xd6b4,	// (0x0008ac9e) bg_cl_header_pane_g9

0x0008,

0xfa85,	// (0x0008d06f) bg_cl_header_pane_g

0x8354,	// (0x0008593e) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x8354,	// (0x0008593e) hc_cl_list_double_graphic_heading_pane

0x8364,	// (0x0008594e) hc_cl_list_single_graphic_pane_ParamLimits

0x8364,	// (0x0008594e) hc_cl_list_single_graphic_pane

0x8376,	// (0x00085960) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x8376,	// (0x00085960) hc_cl_list_single_graphic_pane_g1

0x8382,	// (0x0008596c) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x8382,	// (0x0008596c) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfa98,	// (0x0008d082) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfa98,	// (0x0008d082) hc_cl_list_single_graphic_pane_g

0x8396,	// (0x00085980) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x8396,	// (0x00085980) hc_cl_list_single_graphic_pane_t1

0x8376,	// (0x00085960) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x8376,	// (0x00085960) hc_cl_list_double_graphic_heading_pane_g1

0x83ab,	// (0x00085995) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x83ab,	// (0x00085995) hc_cl_list_double_graphic_heading_pane_g2

0x83bf,	// (0x000859a9) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x83bf,	// (0x000859a9) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfa9d,	// (0x0008d087) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfa9d,	// (0x0008d087) hc_cl_list_double_graphic_heading_pane_g

0x83d3,	// (0x000859bd) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x83d3,	// (0x000859bd) hc_cl_list_double_graphic_heading_pane_t1

0x83e8,	// (0x000859d2) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x83e8,	// (0x000859d2) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfaa4,	// (0x0008d08e) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfaa4,	// (0x0008d08e) hc_cl_list_double_graphic_heading_pane_t

0x8405,	// (0x000859ef) vid4_progress_pane_g1

0x8417,	// (0x00085a01) vid4_progress_pane_g2

0x4dab,	// (0x00082395) vid4_progress_pane_g3

0x8429,	// (0x00085a13) vid4_progress_pane_g4

0x0004,

0xfaa9,	// (0x0008d093) vid4_progress_pane_g

0x8447,	// (0x00085a31) vid4_progress_pane_t1

0x845c,	// (0x00085a46) vid4_progress_pane_t2

0x0002,

0xfab4,	// (0x0008d09e) vid4_progress_pane_t

0x8487,	// (0x00085a71) wait_bar_pane_cp07

0xca73,	// (0x0008a05d) blid_firmament_pane_ParamLimits

0xcab6,	// (0x0008a0a0) popup_blid_sat_info2_window_g1

0xcada,	// (0x0008a0c4) popup_blid_sat_info2_window_t3

0xcae8,	// (0x0008a0d2) popup_blid_sat_info2_window_t4

0xcaf6,	// (0x0008a0e0) popup_blid_sat_info2_window_t5

0xcb04,	// (0x0008a0ee) popup_blid_sat_info2_window_t6

0xcb14,	// (0x0008a0fe) popup_blid_sat_info2_window_t7

0xcb22,	// (0x0008a10c) popup_blid_sat_info2_window_t8

0xcb30,	// (0x0008a11a) popup_blid_sat_info2_window_t9

0xcb3e,	// (0x0008a128) popup_blid_sat_info2_window_t10

0xcc06,	// (0x0008a1f0) aid_firma_cardinal_ParamLimits

0xcc1a,	// (0x0008a204) blid_firmament_pane_t1_ParamLimits

0xcc31,	// (0x0008a21b) blid_firmament_pane_t2_ParamLimits

0xcc48,	// (0x0008a232) blid_firmament_pane_t3_ParamLimits

0xcc5f,	// (0x0008a249) blid_firmament_pane_t4_ParamLimits

0xf6d3,	// (0x0008ccbd) blid_firmament_pane_t_ParamLimits

0xcc76,	// (0x0008a260) blid_sat_info_pane_ParamLimits

0xa8c0,	// (0x00087eaa) main_cam_set_pane_ParamLimits

0x69e8,	// (0x00083fd2) aid_size_cell_colour_35_ParamLimits

0x6a02,	// (0x00083fec) aid_size_cell_colour_112_ParamLimits

0x6a19,	// (0x00084003) aid_size_cell_effect_ParamLimits

0xa8c0,	// (0x00087eaa) bg_tb_trans_pane_cp02_ParamLimits

0xb055,	// (0x0008863f) heading_imed_pane_ParamLimits

0x6a33,	// (0x0008401d) listscroll_imed_pane_ParamLimits

0xbe57,	// (0x00089441) popup_call2_audio_first_window_g5_ParamLimits

0xbe57,	// (0x00089441) popup_call2_audio_first_window_g5

0x7145,	// (0x0008472f) aid_size_touch_image3_arrow_left_ParamLimits

0x7145,	// (0x0008472f) aid_size_touch_image3_arrow_left

0x715b,	// (0x00084745) aid_size_touch_image3_arrow_right_ParamLimits

0x715b,	// (0x00084745) aid_size_touch_image3_arrow_right

0x8472,	// (0x00085a5c) vid4_progress_pane_t3

0x6ce1,	// (0x000842cb) main_hwr_training_symbol_option_pane_ParamLimits

0x6ce1,	// (0x000842cb) main_hwr_training_symbol_option_pane

0xd47a,	// (0x0008aa64) popup_hwr_training_preview_window_ParamLimits

0xd47a,	// (0x0008aa64) popup_hwr_training_preview_window

0x6d42,	// (0x0008432c) hwr_training_navi_pane_g5_ParamLimits

0x6d42,	// (0x0008432c) hwr_training_navi_pane_g5

0xd682,	// (0x0008ac6c) popup_char_count_window

0x20ca,	// (0x0007f6b4) bg_popup_sub_pane_cp20_ParamLimits

0x7f64,	// (0x0008554e) list_vitu2_match_list_pane_ParamLimits

0x7f70,	// (0x0008555a) vitu2_page_scroll_pane_ParamLimits

0x7f70,	// (0x0008555a) vitu2_page_scroll_pane

0xdb81,	// (0x0008b16b) list_single_hwr_training_symbol_option_pane_ParamLimits

0xdb81,	// (0x0008b16b) list_single_hwr_training_symbol_option_pane

0xdb94,	// (0x0008b17e) list_single_hwr_training_symbol_option_pane_g1

0xdb9c,	// (0x0008b186) list_single_hwr_training_symbol_option_pane_t1

0xdbaa,	// (0x0008b194) bg_button_pane_cp023

0xdbb3,	// (0x0008b19d) bg_button_pane_cp024

0x84c7,	// (0x00085ab1) vitu2_page_scroll_pane_g1

0x84cf,	// (0x00085ab9) vitu2_page_scroll_pane_g2

0x0001,

0xfabb,	// (0x0008d0a5) vitu2_page_scroll_pane_g

0x84d9,	// (0x00085ac3) vitu2_page_scroll_pane_t1

0xdbe6,	// (0x0008b1d0) popup_char_count_window_g1

0xdbef,	// (0x0008b1d9) popup_char_count_window_g2

0xdbf8,	// (0x0008b1e2) popup_char_count_window_g3

0x0002,

0xfac0,	// (0x0008d0aa) popup_char_count_window_g

0xdc01,	// (0x0008b1eb) popup_char_count_window_t1

0xa17a,	// (0x00087764) main_vded2_pane

0xd177,	// (0x0008a761) aid_size_cell_imed_line

0xd181,	// (0x0008a76b) grid_imed_line_width_pane

0x75de,	// (0x00084bc8) vid4_indicators_pane_g4

0xdc0f,	// (0x0008b1f9) cell_imed_line_width_pane_ParamLimits

0xdc0f,	// (0x0008b1f9) cell_imed_line_width_pane

0xdc25,	// (0x0008b20f) cell_imed_line_width_pane_g1

0xd0e1,	// (0x0008a6cb) cell_imed_line_width_pane_g2

0x0001,

0xfac7,	// (0x0008d0b1) cell_imed_line_width_pane_g

0x84e8,	// (0x00085ad2) main_vded2_pane_g1_ParamLimits

0x84e8,	// (0x00085ad2) main_vded2_pane_g1

0x84f7,	// (0x00085ae1) main_vded2_pane_g2_ParamLimits

0x84f7,	// (0x00085ae1) main_vded2_pane_g2

0x0001,

0xfacc,	// (0x0008d0b6) main_vded2_pane_g_ParamLimits

0xfacc,	// (0x0008d0b6) main_vded2_pane_g

0x8505,	// (0x00085aef) vded2_slider_pane_ParamLimits

0x8505,	// (0x00085aef) vded2_slider_pane

0x8512,	// (0x00085afc) aid_size_touch_vded2_end

0x851c,	// (0x00085b06) aid_size_touch_vded2_playhead

0xdc2e,	// (0x0008b218) aid_size_touch_vded2_start

0xdc36,	// (0x0008b220) vded2_slider_bg_pane

0xdc3f,	// (0x0008b229) vded2_slider_pane_g1

0xdc48,	// (0x0008b232) vded2_slider_pane_g2

0x8524,	// (0x00085b0e) vded2_slider_pane_g3

0x0002,

0xfad1,	// (0x0008d0bb) vded2_slider_pane_g

0xdb37,	// (0x0008b121) vded2_slider_bg_pane_g1

0xdb40,	// (0x0008b12a) vded2_slider_bg_pane_g2

0xdb49,	// (0x0008b133) vded2_slider_bg_pane_g3

0x0002,

0xf7a3,	// (0x0008cd8d) vded2_slider_bg_pane_g

0x4dc3,	// (0x000823ad) aid_postcard_touch_down_pane_ParamLimits

0x4dc3,	// (0x000823ad) aid_postcard_touch_down_pane

0x4dd3,	// (0x000823bd) aid_postcard_touch_up_pane_ParamLimits

0x4dd3,	// (0x000823bd) aid_postcard_touch_up_pane

0xa17a,	// (0x00087764) main_blid2_pane

0xc843,	// (0x00089e2d) popup_blid2_search_window

0xa17a,	// (0x00087764) blid2_gps_pane

0xa17a,	// (0x00087764) blid2_navig_pane

0xa17a,	// (0x00087764) blid2_search_pane

0xa17a,	// (0x00087764) blid2_tripm_pane

0x852d,	// (0x00085b17) blid2_search_pane_g1_ParamLimits

0x852d,	// (0x00085b17) blid2_search_pane_g1

0x8539,	// (0x00085b23) blid2_search_pane_t1_ParamLimits

0x8539,	// (0x00085b23) blid2_search_pane_t1

0x854b,	// (0x00085b35) aid_size_cell_blid2_gps_ParamLimits

0x854b,	// (0x00085b35) aid_size_cell_blid2_gps

0x855b,	// (0x00085b45) blid2_gps_pane_g1_ParamLimits

0x855b,	// (0x00085b45) blid2_gps_pane_g1

0x8567,	// (0x00085b51) grid_blid2_satellite_pane_ParamLimits

0x8567,	// (0x00085b51) grid_blid2_satellite_pane

0x8575,	// (0x00085b5f) blid2_navig_pane_g1_ParamLimits

0x8575,	// (0x00085b5f) blid2_navig_pane_g1

0x8581,	// (0x00085b6b) blid2_navig_pane_t1_ParamLimits

0x8581,	// (0x00085b6b) blid2_navig_pane_t1

0x8593,	// (0x00085b7d) blid2_navig_pane_t2_ParamLimits

0x8593,	// (0x00085b7d) blid2_navig_pane_t2

0x0001,

0xfad8,	// (0x0008d0c2) blid2_navig_pane_t_ParamLimits

0xfad8,	// (0x0008d0c2) blid2_navig_pane_t

0x85a5,	// (0x00085b8f) blid2_navig_ring_pane_ParamLimits

0x85a5,	// (0x00085b8f) blid2_navig_ring_pane

0x85b5,	// (0x00085b9f) blid2_speed_pane_ParamLimits

0x85b5,	// (0x00085b9f) blid2_speed_pane

0x85c1,	// (0x00085bab) blid2_tripm_pane_g1_ParamLimits

0x85c1,	// (0x00085bab) blid2_tripm_pane_g1

0x85d1,	// (0x00085bbb) blid2_tripm_pane_g2_ParamLimits

0x85d1,	// (0x00085bbb) blid2_tripm_pane_g2

0x85dd,	// (0x00085bc7) blid2_tripm_pane_g3_ParamLimits

0x85dd,	// (0x00085bc7) blid2_tripm_pane_g3

0x85e9,	// (0x00085bd3) blid2_tripm_pane_g4_ParamLimits

0x85e9,	// (0x00085bd3) blid2_tripm_pane_g4

0x85f5,	// (0x00085bdf) blid2_tripm_pane_g5_ParamLimits

0x85f5,	// (0x00085bdf) blid2_tripm_pane_g5

0x0005,

0xfadd,	// (0x0008d0c7) blid2_tripm_pane_g_ParamLimits

0xfadd,	// (0x0008d0c7) blid2_tripm_pane_g

0x8611,	// (0x00085bfb) blid2_tripm_pane_t1_ParamLimits

0x8611,	// (0x00085bfb) blid2_tripm_pane_t1

0x8623,	// (0x00085c0d) blid2_tripm_pane_t2_ParamLimits

0x8623,	// (0x00085c0d) blid2_tripm_pane_t2

0x8635,	// (0x00085c1f) blid2_tripm_pane_t3_ParamLimits

0x8635,	// (0x00085c1f) blid2_tripm_pane_t3

0x0003,

0xfaea,	// (0x0008d0d4) blid2_tripm_pane_t_ParamLimits

0xfaea,	// (0x0008d0d4) blid2_tripm_pane_t

0x8667,	// (0x00085c51) cell_blid2_satellite_pane_ParamLimits

0x8667,	// (0x00085c51) cell_blid2_satellite_pane

0x8685,	// (0x00085c6f) cell_blid2_satellite_pane_g1

0xdc50,	// (0x0008b23a) cell_blid2_satellite_pane_t1

0xcc86,	// (0x0008a270) blid2_speed_pane_g1

0xdc5e,	// (0x0008b248) blid2_speed_pane_t1

0xdc6c,	// (0x0008b256) blid2_speed_pane_t2

0x0001,

0xfaf3,	// (0x0008d0dd) blid2_speed_pane_t

0xcc86,	// (0x0008a270) blid2_navig_ring_pane_g1

0x868e,	// (0x00085c78) blid2_navig_ring_pane_g2

0x8696,	// (0x00085c80) blid2_navig_ring_pane_g3

0x869e,	// (0x00085c88) blid2_navig_ring_pane_g4

0x86a6,	// (0x00085c90) blid2_navig_ring_pane_g5

0x0004,

0xfaf8,	// (0x0008d0e2) blid2_navig_ring_pane_g

0xa17a,	// (0x00087764) bg_popup_window_pane_cp011

0xdc7a,	// (0x0008b264) popup_blid2_search_window_g1

0xdc82,	// (0x0008b26c) popup_blid2_search_window_t1

0xdc90,	// (0x0008b27a) popup_blid2_search_window_t2

0x0001,

0xfb03,	// (0x0008d0ed) popup_blid2_search_window_t

0xac2e,	// (0x00088218) main_browser_pane_g1

0xa92c,	// (0x00087f16) main_browser_pane_ParamLimits

0xa8c0,	// (0x00087eaa) bg_button_pane_cp011_ParamLimits

0x7850,	// (0x00084e3a) cell_vitu2_function_pane_g1_ParamLimits

0xc835,	// (0x00089e1f) bg_popup_sub_pane_cp22_ParamLimits

0x0fe7,	// (0x0007e5d1) input_focus_pane_cp08_ParamLimits

0x80ec,	// (0x000856d6) popup_vitu2_query_button_pane_ParamLimits

0x80ec,	// (0x000856d6) popup_vitu2_query_button_pane

0x0ffe,	// (0x0007e5e8) popup_vitu2_query_input_button_pane

0xd903,	// (0x0008aeed) popup_vitu2_query_window_g1_ParamLimits

0x1008,	// (0x0007e5f2) popup_vitu2_query_window_g2_ParamLimits

0xfa0b,	// (0x0008cff5) popup_vitu2_query_window_g_ParamLimits

0xa17a,	// (0x00087764) bg_button_pane_cp026

0x86ae,	// (0x00085c98) popup_vitu2_query_input_button_pane_g1

0xa17a,	// (0x00087764) bg_button_pane_cp025

0xdc9e,	// (0x0008b288) popup_vitu2_query_button_pane_t1

0x5f64,	// (0x0008354e) main_mp3_pane_t6

0x5f74,	// (0x0008355e) popup_slider_window_cp01

0x74b9,	// (0x00084aa3) cam4_battery_pane

0x7597,	// (0x00084b81) cam4_battery_pane_cp02

0x83fd,	// (0x000859e7) cam4_battery_pane_cp01

0x83fd,	// (0x000859e7) cam4_battery_pane_cp03

0xcc86,	// (0x0008a270) cam4_battery_pane_g1

0xd7bb,	// (0x0008ada5) cam4_battery_pane_g2

0x0001,

0xfb08,	// (0x0008d0f2) cam4_battery_pane_g

0xcb4c,	// (0x0008a136) popup_blid_sat_info2_window_t11

0x46ff,	// (0x00081ce9) aid_size_touch_mv_arrow_left_ParamLimits

0x472a,	// (0x00081d14) aid_size_touch_mv_arrow_right_ParamLimits

0xb378,	// (0x00088962) navi_pane_g1_ParamLimits

0x4769,	// (0x00081d53) navi_pane_g2_ParamLimits

0x4797,	// (0x00081d81) navi_pane_g3_ParamLimits

0xf3e5,	// (0x0008c9cf) navi_pane_g_ParamLimits

0x47f1,	// (0x00081ddb) navi_pane_mv_t1_ParamLimits

0x6a3f,	// (0x00084029) grid_imed_effect_pane_ParamLimits

0x3215,	// (0x000807ff) aid_placing_vt_slider_lsc

0xab79,	// (0x00088163) aid_placing_vt_slider_prt

0xa8c0,	// (0x00087eaa) bg_tb_trans_pane_cp01_ParamLimits

0xcdd6,	// (0x0008a3c0) popup_image_details_window_g1_ParamLimits

0xcde9,	// (0x0008a3d3) popup_image_details_window_g2_ParamLimits

0xcdfe,	// (0x0008a3e8) popup_image_details_window_g3_ParamLimits

0xcdfe,	// (0x0008a3e8) popup_image_details_window_g3

0xf718,	// (0x0008cd02) popup_image_details_window_g_ParamLimits

0xce12,	// (0x0008a3fc) popup_image_details_window_t1_ParamLimits

0xce24,	// (0x0008a40e) popup_image_details_window_t2_ParamLimits

0xce3d,	// (0x0008a427) popup_image_details_window_t3_ParamLimits

0xce51,	// (0x0008a43b) popup_image_details_window_t4_ParamLimits

0xce6c,	// (0x0008a456) popup_image_details_window_t5_ParamLimits

0xf71f,	// (0x0008cd09) popup_image_details_window_t_ParamLimits

0x8329,	// (0x00085913) cl_header_name_pane_ParamLimits

0x8329,	// (0x00085913) cl_header_name_pane

0x86b6,	// (0x00085ca0) cl_header_name_pane_t1_ParamLimits

0x86b6,	// (0x00085ca0) cl_header_name_pane_t1

0x86cd,	// (0x00085cb7) cl_header_name_pane_t2_ParamLimits

0x86cd,	// (0x00085cb7) cl_header_name_pane_t2

0x86f7,	// (0x00085ce1) cl_header_name_pane_t3_ParamLimits

0x86f7,	// (0x00085ce1) cl_header_name_pane_t3

0x0002,

0xfb0d,	// (0x0008d0f7) cl_header_name_pane_t_ParamLimits

0xfb0d,	// (0x0008d0f7) cl_header_name_pane_t

0x47c2,	// (0x00081dac) navi_pane_mv_g2_ParamLimits

0xd65c,	// (0x0008ac46) field_vitu2_entry_pane_g1_ParamLimits

0xd668,	// (0x0008ac52) field_vitu2_entry_pane_g2_ParamLimits

0xd674,	// (0x0008ac5e) field_vitu2_entry_pane_g3_ParamLimits

0xd674,	// (0x0008ac5e) field_vitu2_entry_pane_g3

0xf90a,	// (0x0008cef4) field_vitu2_entry_pane_g_ParamLimits

0x77e4,	// (0x00084dce) cell_vitu2_itu_pane_g1_ParamLimits

0x77f6,	// (0x00084de0) cell_vitu2_itu_pane_g2_ParamLimits

0x77f6,	// (0x00084de0) cell_vitu2_itu_pane_g2

0x0001,

0xf916,	// (0x0008cf00) cell_vitu2_itu_pane_g_ParamLimits

0xf916,	// (0x0008cf00) cell_vitu2_itu_pane_g

0xa8c0,	// (0x00087eaa) bg_vkb2_func_pane_cp05_ParamLimits

0xa8c0,	// (0x00087eaa) bg_vkb2_func_pane_cp05

0xa8c0,	// (0x00087eaa) bg_vkb2_func_pane_cp03

0xa8c0,	// (0x00087eaa) bg_vkb2_func_pane_cp04

0xa8c0,	// (0x00087eaa) bg_vkb2_func_pane_cp10_ParamLimits

0xa8c0,	// (0x00087eaa) bg_vkb2_func_pane_cp10

0x11bd,	// (0x0007e7a7) bg_vkb2_func_pane_cp08

0x82d3,	// (0x000858bd) bg_vkb2_func_pane_cp06

0x82e1,	// (0x000858cb) bg_vkb2_func_pane_cp07

0xdbbc,	// (0x0008b1a6) bg_vkb2_func_pane_cp11_ParamLimits

0xdbbc,	// (0x0008b1a6) bg_vkb2_func_pane_cp11

0xdbd1,	// (0x0008b1bb) bg_vkb2_func_pane_cp12_ParamLimits

0xdbd1,	// (0x0008b1bb) bg_vkb2_func_pane_cp12

0xa17a,	// (0x00087764) bg_vkb2_func_pane_cp09

0xd694,	// (0x0008ac7e) bg_vkb2_func_pane_g1

0xad3f,	// (0x00088329) bg_vkb2_func_pane_g2

0xd69c,	// (0x0008ac86) bg_vkb2_func_pane_g3

0xd6a4,	// (0x0008ac8e) bg_vkb2_func_pane_g4

0xd8c8,	// (0x0008aeb2) bg_vkb2_func_pane_g5

0xd6bc,	// (0x0008aca6) bg_vkb2_func_pane_g6

0xd6c4,	// (0x0008acae) bg_vkb2_func_pane_g7

0xd6b4,	// (0x0008ac9e) bg_vkb2_func_pane_g8

0xad1f,	// (0x00088309) bg_vkb2_func_pane_g9

0x0008,

0xfb14,	// (0x0008d0fe) bg_vkb2_func_pane_g

0x8603,	// (0x00085bed) blid2_tripm_pane_g6_ParamLimits

0x8603,	// (0x00085bed) blid2_tripm_pane_g6

0xd532,	// (0x0008ab1c) mp4_progress_pane_g1

0x865b,	// (0x00085c45) blid2_tripm_values_pane_ParamLimits

0x865b,	// (0x00085c45) blid2_tripm_values_pane

0x871c,	// (0x00085d06) blid2_tripm_values_pane_t1

0x872a,	// (0x00085d14) blid2_tripm_values_pane_t2

0x8738,	// (0x00085d22) blid2_tripm_values_pane_t3

0x8746,	// (0x00085d30) blid2_tripm_values_pane_t4

0x8754,	// (0x00085d3e) blid2_tripm_values_pane_t5

0x8762,	// (0x00085d4c) blid2_tripm_values_pane_t6

0x8770,	// (0x00085d5a) blid2_tripm_values_pane_t7

0x877e,	// (0x00085d68) blid2_tripm_values_pane_t8

0x878c,	// (0x00085d76) blid2_tripm_values_pane_t9

0x0008,

0xfb27,	// (0x0008d111) blid2_tripm_values_pane_t

0x3253,	// (0x0008083d) call_video_pane_t1_ParamLimits

0x3270,	// (0x0008085a) call_video_pane_t2_ParamLimits

0xf26e,	// (0x0008c858) call_video_pane_t_ParamLimits

0x0da1,	// (0x0007e38b) msg_header_pane_g1_ParamLimits

0xb59b,	// (0x00088b85) msg_header_pane_g2_ParamLimits

0xb59b,	// (0x00088b85) msg_header_pane_g2

0x0001,

0xf488,	// (0x0008ca72) msg_header_pane_g_ParamLimits

0xf488,	// (0x0008ca72) msg_header_pane_g

0xa92c,	// (0x00087f16) main_clock2_pane_ParamLimits

0x67ce,	// (0x00083db8) grid_clock2_toolbar_pane_ParamLimits

0x67ce,	// (0x00083db8) grid_clock2_toolbar_pane

0x67ce,	// (0x00083db8) listscroll_clock2_pane_ParamLimits

0x67ce,	// (0x00083db8) listscroll_clock2_pane

0x6876,	// (0x00083e60) main_clock2_pane_t3_ParamLimits

0x6876,	// (0x00083e60) main_clock2_pane_t3

0x6888,	// (0x00083e72) main_clock2_pane_t4_ParamLimits

0x6888,	// (0x00083e72) main_clock2_pane_t4

0xdcac,	// (0x0008b296) cell_clock2_toolbar_pane

0xdcb4,	// (0x0008b29e) cell_clock2_toolbar_pane_cp01

0xdcb4,	// (0x0008b29e) cell_clock2_toolbar_pane_cp02

0xdcbc,	// (0x0008b2a6) cell_clock2_toolbar_pane_cp03

0xdcc4,	// (0x0008b2ae) list_clock2_pane

0xb2de,	// (0x000888c8) scroll_pane_cp10

0xdccc,	// (0x0008b2b6) list_single_clock2_pane_ParamLimits

0xdccc,	// (0x0008b2b6) list_single_clock2_pane

0xaae2,	// (0x000880cc) list_highlight_pane_cp08

0xdcd9,	// (0x0008b2c3) list_single_clock2_pane_t1

0xdce7,	// (0x0008b2d1) list_single_clock2_pane_t2

0x0001,

0xfb3a,	// (0x0008d124) list_single_clock2_pane_t

0xa17a,	// (0x00087764) bg_button_pane_cp10

0xdcf5,	// (0x0008b2df) cell_clock2_toolbar_pane_g1

0x4d25,	// (0x0008230f) aid_main_viewer_pane_g1_ParamLimits

0x4d25,	// (0x0008230f) aid_main_viewer_pane_g1

0x4d31,	// (0x0008231b) aid_main_viewer_pane_g2_ParamLimits

0x4d31,	// (0x0008231b) aid_main_viewer_pane_g2

0x4d3d,	// (0x00082327) aid_main_viewer_pane_g3_ParamLimits

0x4d3d,	// (0x00082327) aid_main_viewer_pane_g3

0x4d4e,	// (0x00082338) aid_main_viewer_pane_g4_ParamLimits

0x4d4e,	// (0x00082338) aid_main_viewer_pane_g4

0x0003,

0xf499,	// (0x0008ca83) aid_main_viewer_pane_g_ParamLimits

0xf499,	// (0x0008ca83) aid_main_viewer_pane_g

0x54d8,	// (0x00082ac2) main_calc_pane_ParamLimits

0x54e5,	// (0x00082acf) main_dialer2_pane_ParamLimits

0xa17a,	// (0x00087764) main_cam6_pane

0xa17a,	// (0x00087764) main_vid6_pane

0x67da,	// (0x00083dc4) listscroll_gen_pane_cp06_ParamLimits

0x67da,	// (0x00083dc4) listscroll_gen_pane_cp06

0x689a,	// (0x00083e84) main_clock2_pane_t5_ParamLimits

0x689a,	// (0x00083e84) main_clock2_pane_t5

0x68e9,	// (0x00083ed3) aid_call2_pane_cp10_ParamLimits

0x68fb,	// (0x00083ee5) aid_call_pane_cp10_ParamLimits

0xb34d,	// (0x00088937) popup_clock_analogue_window_cp10_g1_ParamLimits

0xb34d,	// (0x00088937) popup_clock_analogue_window_cp10_g2_ParamLimits

0x690d,	// (0x00083ef7) popup_clock_analogue_window_cp10_g3_ParamLimits

0x690d,	// (0x00083ef7) popup_clock_analogue_window_cp10_g4_ParamLimits

0xb34d,	// (0x00088937) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf7c3,	// (0x0008cdad) popup_clock_analogue_window_cp10_g_ParamLimits

0x691f,	// (0x00083f09) popup_clock_analogue_window_cp10_t1_ParamLimits

0x70f2,	// (0x000846dc) cell_dialer2_keypad_pane_g2_ParamLimits

0x70f2,	// (0x000846dc) cell_dialer2_keypad_pane_g2

0x0001,

0xf8a9,	// (0x0008ce93) cell_dialer2_keypad_pane_g_ParamLimits

0xf8a9,	// (0x0008ce93) cell_dialer2_keypad_pane_g

0x710e,	// (0x000846f8) cell_dialer2_keypad_pane_t1

0x7b2b,	// (0x00085115) main_cset_text2_pane_ParamLimits

0x7b2b,	// (0x00085115) main_cset_text2_pane

0xdaef,	// (0x0008b0d9) area_vitu2_query_pane_g1_ParamLimits

0x10e8,	// (0x0007e6d2) area_vitu2_query_pane_g2_ParamLimits

0xfa5e,	// (0x0008d048) area_vitu2_query_pane_g_ParamLimits

0x1199,	// (0x0007e783) area_vitu2_query_pane_t7_ParamLimits

0x1199,	// (0x0007e783) area_vitu2_query_pane_t7

0x82d3,	// (0x000858bd) bg_button_pane_cp018_ParamLimits

0x82e1,	// (0x000858cb) bg_button_pane_cp021_ParamLimits

0x11bd,	// (0x0007e7a7) bg_button_pane_cp022_ParamLimits

0x11bd,	// (0x0007e7a7) bg_vkb2_func_pane_cp08_ParamLimits

0x82d3,	// (0x000858bd) bg_vkb2_func_pane_cp06_ParamLimits

0x82e1,	// (0x000858cb) bg_vkb2_func_pane_cp07_ParamLimits

0x11ce,	// (0x0007e7b8) input_focus_pane_cp09_ParamLimits

0x879a,	// (0x00085d84) cam6_autofocus_pane_ParamLimits

0x879a,	// (0x00085d84) cam6_autofocus_pane

0x87bc,	// (0x00085da6) cam6_image_uncrop_pane_ParamLimits

0x87bc,	// (0x00085da6) cam6_image_uncrop_pane

0x87e9,	// (0x00085dd3) cam6_indi_pane_ParamLimits

0x87e9,	// (0x00085dd3) cam6_indi_pane

0x8803,	// (0x00085ded) cam6_mode_pane_ParamLimits

0x8803,	// (0x00085ded) cam6_mode_pane

0x8817,	// (0x00085e01) cam6_timer_pane_ParamLimits

0x8817,	// (0x00085e01) cam6_timer_pane

0x8823,	// (0x00085e0d) cam6_zoom_pane_ParamLimits

0x8823,	// (0x00085e0d) cam6_zoom_pane

0x883f,	// (0x00085e29) cam6_mode_pane_g1_ParamLimits

0x883f,	// (0x00085e29) cam6_mode_pane_g1

0x884b,	// (0x00085e35) cam6_mode_pane_g2_ParamLimits

0x884b,	// (0x00085e35) cam6_mode_pane_g2

0x8857,	// (0x00085e41) cam6_mode_pane_g3_ParamLimits

0x8857,	// (0x00085e41) cam6_mode_pane_g3

0x8863,	// (0x00085e4d) cam6_mode_pane_g4_ParamLimits

0x8863,	// (0x00085e4d) cam6_mode_pane_g4

0x0003,

0xfb3f,	// (0x0008d129) cam6_mode_pane_g_ParamLimits

0xfb3f,	// (0x0008d129) cam6_mode_pane_g

0xdb52,	// (0x0008b13c) bg_tb_trans_pane_cp08_ParamLimits

0xdb52,	// (0x0008b13c) bg_tb_trans_pane_cp08

0xdcfd,	// (0x0008b2e7) cam6_battery_pane_ParamLimits

0xdcfd,	// (0x0008b2e7) cam6_battery_pane

0xdd13,	// (0x0008b2fd) cam6_indi_pane_g1_ParamLimits

0xdd13,	// (0x0008b2fd) cam6_indi_pane_g1

0xdd25,	// (0x0008b30f) cam6_indi_pane_g2_ParamLimits

0xdd25,	// (0x0008b30f) cam6_indi_pane_g2

0xdd37,	// (0x0008b321) cam6_indi_pane_g3_ParamLimits

0xdd37,	// (0x0008b321) cam6_indi_pane_g3

0x0002,

0xfb48,	// (0x0008d132) cam6_indi_pane_g_ParamLimits

0xfb48,	// (0x0008d132) cam6_indi_pane_g

0xdd49,	// (0x0008b333) cam6_indi_pane_t1_ParamLimits

0xdd49,	// (0x0008b333) cam6_indi_pane_t1

0x7613,	// (0x00084bfd) cam6_autofocus_pane_g1

0x761b,	// (0x00084c05) cam6_autofocus_pane_g2

0x7623,	// (0x00084c0d) cam6_autofocus_pane_g3

0x762b,	// (0x00084c15) cam6_autofocus_pane_g4

0x0003,

0xfb4f,	// (0x0008d139) cam6_autofocus_pane_g

0xdd6f,	// (0x0008b359) cam6_timer_pane_g1

0xdd77,	// (0x0008b361) cam6_timer_pane_t1

0xdd85,	// (0x0008b36f) cam6_zoom_cont_pane

0xdd8d,	// (0x0008b377) cam6_zoom_pane_g1

0xdd95,	// (0x0008b37f) cam6_zoom_pane_g2

0x886f,	// (0x00085e59) cam6_zoom_pane_g3

0x0002,

0xfb58,	// (0x0008d142) cam6_zoom_pane_g

0xcc86,	// (0x0008a270) cam6_battery_pane_g1

0xcc86,	// (0x0008a270) cam6_battery_pane_g2

0x0001,

0xf6dc,	// (0x0008ccc6) cam6_battery_pane_g

0xdd9d,	// (0x0008b387) cam6_zoom_cont_pane_g1

0xdda6,	// (0x0008b390) cam6_zoom_cont_pane_g2

0xddaf,	// (0x0008b399) cam6_zoom_cont_pane_g3

0x0002,

0xfb5f,	// (0x0008d149) cam6_zoom_cont_pane_g

0x888c,	// (0x00085e76) cam6_mode_pane_cp_ParamLimits

0x888c,	// (0x00085e76) cam6_mode_pane_cp

0x8823,	// (0x00085e0d) cam6_zoom_pane_cp_ParamLimits

0x8823,	// (0x00085e0d) cam6_zoom_pane_cp

0x88a0,	// (0x00085e8a) vid6_image_uncrop_cif_pane_ParamLimits

0x88a0,	// (0x00085e8a) vid6_image_uncrop_cif_pane

0x88cc,	// (0x00085eb6) vid6_image_uncrop_nhd_pane_ParamLimits

0x88cc,	// (0x00085eb6) vid6_image_uncrop_nhd_pane

0x87bc,	// (0x00085da6) vid6_image_uncrop_vga_pane_ParamLimits

0x87bc,	// (0x00085da6) vid6_image_uncrop_vga_pane

0x88eb,	// (0x00085ed5) vid6_image_uncrop_wvga_pane_ParamLimits

0x88eb,	// (0x00085ed5) vid6_image_uncrop_wvga_pane

0x890a,	// (0x00085ef4) vid6_indi_pane_ParamLimits

0x890a,	// (0x00085ef4) vid6_indi_pane

0xdb52,	// (0x0008b13c) bg_tb_trans_pane_cp09_ParamLimits

0xdb52,	// (0x0008b13c) bg_tb_trans_pane_cp09

0xddc7,	// (0x0008b3b1) cam6_battery_pane_cp_ParamLimits

0xddc7,	// (0x0008b3b1) cam6_battery_pane_cp

0xddd3,	// (0x0008b3bd) vid6_indi_pane_g1_ParamLimits

0xddd3,	// (0x0008b3bd) vid6_indi_pane_g1

0xdde5,	// (0x0008b3cf) vid6_indi_pane_g2_ParamLimits

0xdde5,	// (0x0008b3cf) vid6_indi_pane_g2

0xddf7,	// (0x0008b3e1) vid6_indi_pane_g3_ParamLimits

0xddf7,	// (0x0008b3e1) vid6_indi_pane_g3

0xde0e,	// (0x0008b3f8) vid6_indi_pane_g4_ParamLimits

0xde0e,	// (0x0008b3f8) vid6_indi_pane_g4

0xde25,	// (0x0008b40f) vid6_indi_pane_g5_ParamLimits

0xde25,	// (0x0008b40f) vid6_indi_pane_g5

0x0004,

0xfb66,	// (0x0008d150) vid6_indi_pane_g_ParamLimits

0xfb66,	// (0x0008d150) vid6_indi_pane_g

0xde3f,	// (0x0008b429) vid6_indi_pane_t1_ParamLimits

0xde3f,	// (0x0008b429) vid6_indi_pane_t1

0xde55,	// (0x0008b43f) vid6_indi_pane_t2_ParamLimits

0xde55,	// (0x0008b43f) vid6_indi_pane_t2

0xde7d,	// (0x0008b467) vid6_indi_pane_t3_ParamLimits

0xde7d,	// (0x0008b467) vid6_indi_pane_t3

0xdec0,	// (0x0008b4aa) vid6_indi_pane_t4_ParamLimits

0xdec0,	// (0x0008b4aa) vid6_indi_pane_t4

0x0003,

0xfb71,	// (0x0008d15b) vid6_indi_pane_t_ParamLimits

0xfb71,	// (0x0008d15b) vid6_indi_pane_t

0xdee4,	// (0x0008b4ce) wait_bar_pane_cp08

0x892f,	// (0x00085f19) main_cset_text2_pane_t1_ParamLimits

0x892f,	// (0x00085f19) main_cset_text2_pane_t1

0x8877,	// (0x00085e61) listscroll_gen_pane_cp06_t1_ParamLimits

0x8877,	// (0x00085e61) listscroll_gen_pane_cp06_t1

0xa17a,	// (0x00087764) main_cam6_set_pane

0xceb6,	// (0x0008a4a0) bg_tb_trans_pane_cp06_ParamLimits

0x74c1,	// (0x00084aab) cam4_indicators_pane_g1_ParamLimits

0x74d2,	// (0x00084abc) cam4_indicators_pane_g2_ParamLimits

0xf8e6,	// (0x0008ced0) cam4_indicators_pane_g_ParamLimits

0x74ea,	// (0x00084ad4) cam4_indicators_pane_t1_ParamLimits

0xa8c0,	// (0x00087eaa) bg_tb_trans_pane_cp07_ParamLimits

0x75a1,	// (0x00084b8b) vid4_indicators_pane_g1_ParamLimits

0x75b7,	// (0x00084ba1) vid4_indicators_pane_g2_ParamLimits

0x75cb,	// (0x00084bb5) vid4_indicators_pane_g3_ParamLimits

0x75de,	// (0x00084bc8) vid4_indicators_pane_g4_ParamLimits

0xf8f8,	// (0x0008cee2) vid4_indicators_pane_g_ParamLimits

0x75fc,	// (0x00084be6) vid4_indicators_pane_t1_ParamLimits

0x8405,	// (0x000859ef) vid4_progress_pane_g1_ParamLimits

0x8417,	// (0x00085a01) vid4_progress_pane_g2_ParamLimits

0x4dab,	// (0x00082395) vid4_progress_pane_g3_ParamLimits

0x8429,	// (0x00085a13) vid4_progress_pane_g4_ParamLimits

0xfaa9,	// (0x0008d093) vid4_progress_pane_g_ParamLimits

0x8447,	// (0x00085a31) vid4_progress_pane_t1_ParamLimits

0x845c,	// (0x00085a46) vid4_progress_pane_t2_ParamLimits

0x8472,	// (0x00085a5c) vid4_progress_pane_t3_ParamLimits

0xfab4,	// (0x0008d09e) vid4_progress_pane_t_ParamLimits

0x8487,	// (0x00085a71) wait_bar_pane_cp07_ParamLimits

0x8956,	// (0x00085f40) main_cam6_set_pane_g2_ParamLimits

0x8956,	// (0x00085f40) main_cam6_set_pane_g2

0x8962,	// (0x00085f4c) main_cset6_listscroll_pane_ParamLimits

0x8962,	// (0x00085f4c) main_cset6_listscroll_pane

0x898f,	// (0x00085f79) main_cset6_slider_pane_ParamLimits

0x898f,	// (0x00085f79) main_cset6_slider_pane

0x899b,	// (0x00085f85) main_cset6_text2_pane_ParamLimits

0x899b,	// (0x00085f85) main_cset6_text2_pane

0xdef3,	// (0x0008b4dd) main_cset6_text_pane

0xdefb,	// (0x0008b4e5) main_cset_list_pane_copy1_ParamLimits

0xdefb,	// (0x0008b4e5) main_cset_list_pane_copy1

0xdf0b,	// (0x0008b4f5) scroll_pane_cp028_copy1

0x89ae,	// (0x00085f98) cset_list_set_pane_copy1

0x89be,	// (0x00085fa8) aid_position_infowindow_above_copy1

0x89c6,	// (0x00085fb0) aid_position_infowindow_below_copy1

0x89ce,	// (0x00085fb8) cset_list_set_pane_g1_copy1

0x120d,	// (0x0007e7f7) cset_list_set_pane_g3_copy1_ParamLimits

0x120d,	// (0x0007e7f7) cset_list_set_pane_g3_copy1

0x121c,	// (0x0007e806) cset_list_set_pane_t1_copy1_ParamLimits

0x121c,	// (0x0007e806) cset_list_set_pane_t1_copy1

0xa8c0,	// (0x00087eaa) list_highlight_pane_cp021_copy1_ParamLimits

0xa8c0,	// (0x00087eaa) list_highlight_pane_cp021_copy1

0xdf14,	// (0x0008b4fe) cset6_slider_pane_ParamLimits

0xdf14,	// (0x0008b4fe) cset6_slider_pane

0xdf40,	// (0x0008b52a) main_cset6_slider_pane_g1_ParamLimits

0xdf40,	// (0x0008b52a) main_cset6_slider_pane_g1

0x89d6,	// (0x00085fc0) main_cset6_slider_pane_g2_ParamLimits

0x89d6,	// (0x00085fc0) main_cset6_slider_pane_g2

0xdf68,	// (0x0008b552) main_cset6_slider_pane_g3_ParamLimits

0xdf68,	// (0x0008b552) main_cset6_slider_pane_g3

0x89fe,	// (0x00085fe8) main_cset6_slider_pane_g4_ParamLimits

0x89fe,	// (0x00085fe8) main_cset6_slider_pane_g4

0x8a0a,	// (0x00085ff4) main_cset6_slider_pane_g5_ParamLimits

0x8a0a,	// (0x00085ff4) main_cset6_slider_pane_g5

0xd7d1,	// (0x0008adbb) main_cset6_slider_pane_g7_ParamLimits

0xd7d1,	// (0x0008adbb) main_cset6_slider_pane_g7

0xd7dd,	// (0x0008adc7) main_cset6_slider_pane_g8_ParamLimits

0xd7dd,	// (0x0008adc7) main_cset6_slider_pane_g8

0x8a16,	// (0x00086000) main_cset6_slider_pane_g9_ParamLimits

0x8a16,	// (0x00086000) main_cset6_slider_pane_g9

0x8a22,	// (0x0008600c) main_cset6_slider_pane_g10_ParamLimits

0x8a22,	// (0x0008600c) main_cset6_slider_pane_g10

0x8a2e,	// (0x00086018) main_cset6_slider_pane_g11_ParamLimits

0x8a2e,	// (0x00086018) main_cset6_slider_pane_g11

0x8a3a,	// (0x00086024) main_cset6_slider_pane_g12_ParamLimits

0x8a3a,	// (0x00086024) main_cset6_slider_pane_g12

0x8a46,	// (0x00086030) main_cset6_slider_pane_g13_ParamLimits

0x8a46,	// (0x00086030) main_cset6_slider_pane_g13

0x8a52,	// (0x0008603c) main_cset6_slider_pane_g14_ParamLimits

0x8a52,	// (0x0008603c) main_cset6_slider_pane_g14

0x8a5e,	// (0x00086048) main_cset6_slider_pane_g15_ParamLimits

0x8a5e,	// (0x00086048) main_cset6_slider_pane_g15

0x8a76,	// (0x00086060) main_cset6_slider_pane_g16_ParamLimits

0x8a76,	// (0x00086060) main_cset6_slider_pane_g16

0x8a82,	// (0x0008606c) main_cset6_slider_pane_g17_ParamLimits

0x8a82,	// (0x0008606c) main_cset6_slider_pane_g17

0x0011,

0xfb7a,	// (0x0008d164) main_cset6_slider_pane_g_ParamLimits

0xfb7a,	// (0x0008d164) main_cset6_slider_pane_g

0xdf74,	// (0x0008b55e) main_cset6_slider_pane_t1_ParamLimits

0xdf74,	// (0x0008b55e) main_cset6_slider_pane_t1

0x8aa6,	// (0x00086090) main_cset6_slider_pane_t2_ParamLimits

0x8aa6,	// (0x00086090) main_cset6_slider_pane_t2

0x8ad1,	// (0x000860bb) main_cset6_slider_pane_t3_ParamLimits

0x8ad1,	// (0x000860bb) main_cset6_slider_pane_t3

0x8afc,	// (0x000860e6) main_cset6_slider_pane_t4_ParamLimits

0x8afc,	// (0x000860e6) main_cset6_slider_pane_t4

0x8b27,	// (0x00086111) main_cset6_slider_pane_t5_ParamLimits

0x8b27,	// (0x00086111) main_cset6_slider_pane_t5

0xdfb5,	// (0x0008b59f) main_cset6_slider_pane_t7_ParamLimits

0xdfb5,	// (0x0008b59f) main_cset6_slider_pane_t7

0x8b52,	// (0x0008613c) main_cset6_slider_pane_t8_ParamLimits

0x8b52,	// (0x0008613c) main_cset6_slider_pane_t8

0x8b76,	// (0x00086160) main_cset6_slider_pane_t9_ParamLimits

0x8b76,	// (0x00086160) main_cset6_slider_pane_t9

0x8b9a,	// (0x00086184) main_cset6_slider_pane_t10_ParamLimits

0x8b9a,	// (0x00086184) main_cset6_slider_pane_t10

0x8bbe,	// (0x000861a8) main_cset6_slider_pane_t11_ParamLimits

0x8bbe,	// (0x000861a8) main_cset6_slider_pane_t11

0xdfeb,	// (0x0008b5d5) main_cset6_slider_pane_t14_ParamLimits

0xdfeb,	// (0x0008b5d5) main_cset6_slider_pane_t14

0xe024,	// (0x0008b60e) main_cset6_slider_pane_t15_ParamLimits

0xe024,	// (0x0008b60e) main_cset6_slider_pane_t15

0x000b,

0xfb9f,	// (0x0008d189) main_cset6_slider_pane_t_ParamLimits

0xfb9f,	// (0x0008d189) main_cset6_slider_pane_t

0xdea5,	// (0x0008b48f) cset_slider_pane_g1_copy1

0xdeae,	// (0x0008b498) cset_slider_pane_g2_copy1

0xdeb7,	// (0x0008b4a1) cset_slider_pane_g3_copy1

0xa17a,	// (0x00087764) bg_popup_sub_pane_cp011_copy1

0xe05d,	// (0x0008b647) main_cset_text_pane_g1_copy1

0xd917,	// (0x0008af01) main_cset_text_pane_t1_copy1

0xd925,	// (0x0008af0f) main_cset_text_pane_t2_copy1

0xd933,	// (0x0008af1d) main_cset_text_pane_t3_copy1

0xd941,	// (0x0008af2b) main_cset_text_pane_t4_copy1

0xd94f,	// (0x0008af39) main_cset_text_pane_t5_copy1

0xe065,	// (0x0008b64f) main_cset_text_pane_t6_copy1

0xe073,	// (0x0008b65d) main_cset_text_pane_t7_copy1

0x8bfd,	// (0x000861e7) main_cset_text2_pane_t1_copy1

0xa8c0,	// (0x00087eaa) main_ncimui_pane

0x552a,	// (0x00082b14) popup_query_ncimui_window_ParamLimits

0x552a,	// (0x00082b14) popup_query_ncimui_window

0x60a2,	// (0x0008368c) field_cale_ev2_pane_g4_ParamLimits

0x60a2,	// (0x0008368c) field_cale_ev2_pane_g4

0x6e08,	// (0x000843f2) cell_video_dialer_keypad_pane_g2_ParamLimits

0x6e08,	// (0x000843f2) cell_video_dialer_keypad_pane_g2

0x0001,

0xf884,	// (0x0008ce6e) cell_video_dialer_keypad_pane_g_ParamLimits

0xf884,	// (0x0008ce6e) cell_video_dialer_keypad_pane_g

0x6e20,	// (0x0008440a) cell_video_dialer_keypad_pane_t1

0xa17a,	// (0x00087764) bg_popup_window_pane_cp012

0xb1ca,	// (0x000887b4) heading_pane_cp06

0xe09f,	// (0x0008b689) ncim_query_content_pane

0xa17a,	// (0x00087764) bg_popup_heading_pane_cp01

0xe0a7,	// (0x0008b691) ncim_heading_pane_t1

0xe0b5,	// (0x0008b69f) ncim_indicator_popup_pane

0xe0c7,	// (0x0008b6b1) ncim_query_button_pane

0xe0dd,	// (0x0008b6c7) ncim_query_content_pane_t1

0xe0ef,	// (0x0008b6d9) ncim_query_content_pane_t2

0x0005,

0xfbe3,	// (0x0008d1cd) ncim_query_content_pane_t

0xe129,	// (0x0008b713) ncim_query_list_pane

0xe13b,	// (0x0008b725) ncim_query_popup_pane

0xe0b5,	// (0x0008b69f) ncim_indicator_popup_pane_ParamLimits

0x8d59,	// (0x00086343) ncim_query_content_pane_g1_ParamLimits

0x8d59,	// (0x00086343) ncim_query_content_pane_g1

0xe0dd,	// (0x0008b6c7) ncim_query_content_pane_t1_ParamLimits

0xe0ef,	// (0x0008b6d9) ncim_query_content_pane_t2_ParamLimits

0x8d65,	// (0x0008634f) ncim_query_content_pane_t3_ParamLimits

0x8d65,	// (0x0008634f) ncim_query_content_pane_t3

0x8d82,	// (0x0008636c) ncim_query_content_pane_t4_ParamLimits

0x8d82,	// (0x0008636c) ncim_query_content_pane_t4

0x8d9f,	// (0x00086389) ncim_query_content_pane_t5_ParamLimits

0x8d9f,	// (0x00086389) ncim_query_content_pane_t5

0xe101,	// (0x0008b6eb) ncim_query_content_pane_t6_ParamLimits

0xe101,	// (0x0008b6eb) ncim_query_content_pane_t6

0xfbe3,	// (0x0008d1cd) ncim_query_content_pane_t_ParamLimits

0xe129,	// (0x0008b713) ncim_query_list_pane_ParamLimits

0xe13b,	// (0x0008b725) ncim_query_popup_pane_ParamLimits

0xe14f,	// (0x0008b739) wait_bar_pane_cp04

0xa17a,	// (0x00087764) input_focus_pane_cp011

0xe157,	// (0x0008b741) ncim_query_popup_pane_t1

0xe165,	// (0x0008b74f) ncim_list_query_list_pane_ParamLimits

0xe165,	// (0x0008b74f) ncim_list_query_list_pane

0xa17a,	// (0x00087764) bg_button_pane_cp027

0xe178,	// (0x0008b762) ncim_query_button_pane_g1

0xa17a,	// (0x00087764) list_highlight_pane_cp012

0xe182,	// (0x0008b76c) ncim_list_query_list_pane_g1

0xe18a,	// (0x0008b774) ncim_list_query_list_pane_t1

0x74de,	// (0x00084ac8) cam4_indicators_pane_g3_ParamLimits

0x74de,	// (0x00084ac8) cam4_indicators_pane_g3

0x75ea,	// (0x00084bd4) vid4_indicators_pane_g5_ParamLimits

0x75ea,	// (0x00084bd4) vid4_indicators_pane_g5

0x8438,	// (0x00085a22) vid4_progress_pane_g5_ParamLimits

0x8438,	// (0x00085a22) vid4_progress_pane_g5

0x8c2f,	// (0x00086219) main_ncimui_pane_g1

0x8c9b,	// (0x00086285) ncimui_group_query_pane_ParamLimits

0x8c9b,	// (0x00086285) ncimui_group_query_pane

0x8cf5,	// (0x000862df) ncimui_list_pane_ParamLimits

0x8cf5,	// (0x000862df) ncimui_list_pane

0x8d1c,	// (0x00086306) ncimui_text_pane_ParamLimits

0x8d1c,	// (0x00086306) ncimui_text_pane

0x8dbc,	// (0x000863a6) ncimui_text_pane_t1_ParamLimits

0x8dbc,	// (0x000863a6) ncimui_text_pane_t1

0xe198,	// (0x0008b782) ncimui_list_single_graphic_pane_ParamLimits

0xe198,	// (0x0008b782) ncimui_list_single_graphic_pane

0x8ddb,	// (0x000863c5) ncimui_query_pane_ParamLimits

0x8ddb,	// (0x000863c5) ncimui_query_pane

0xa17a,	// (0x00087764) list_highlight_pane_cp013

0xe1a8,	// (0x0008b792) ncim_list_query_list_pane_t1_copy1

0xe182,	// (0x0008b76c) ncim_list_single_graphic_pane_g1

0xe1b6,	// (0x0008b7a0) ncim_query_button_pane_cp01

0xe1c2,	// (0x0008b7ac) ncim_query_entry_pane_ParamLimits

0xe1c2,	// (0x0008b7ac) ncim_query_entry_pane

0xe1d5,	// (0x0008b7bf) ncimui_query_pane_g1

0xe1e1,	// (0x0008b7cb) ncimui_query_pane_t1_ParamLimits

0xe1e1,	// (0x0008b7cb) ncimui_query_pane_t1

0xa8c0,	// (0x00087eaa) input_focus_pane_cp012

0xe1fa,	// (0x0008b7e4) ncim_query_entry_pane_t1

0xa92c,	// (0x00087f16) main_im_pane_ParamLimits

0xa8c0,	// (0x00087eaa) main_mobtv_pane_ParamLimits

0xa8c0,	// (0x00087eaa) main_mobtv_pane

0x8a8e,	// (0x00086078) main_cset6_slider_pane_g18_ParamLimits

0x8a8e,	// (0x00086078) main_cset6_slider_pane_g18

0x8a9a,	// (0x00086084) main_cset6_slider_pane_g19_ParamLimits

0x8a9a,	// (0x00086084) main_cset6_slider_pane_g19

0xd674,	// (0x0008ac5e) bg_main_mobtv_pane_ParamLimits

0xd674,	// (0x0008ac5e) bg_main_mobtv_pane

0x8dee,	// (0x000863d8) main_mobtv_info_pane

0x8df9,	// (0x000863e3) main_mobtv_loading_pane_ParamLimits

0x8df9,	// (0x000863e3) main_mobtv_loading_pane

0xe20c,	// (0x0008b7f6) main_mobtv_pg_channel_list_pane

0xe216,	// (0x0008b800) main_mobtv_pg_hdr_pane

0x8e06,	// (0x000863f0) main_mobtv_programe_curr_pane_ParamLimits

0x8e06,	// (0x000863f0) main_mobtv_programe_curr_pane

0x8e13,	// (0x000863fd) main_mobtv_programe_next_pane_ParamLimits

0x8e13,	// (0x000863fd) main_mobtv_programe_next_pane

0xe21f,	// (0x0008b809) popup_mobtv_noti_window

0xcc86,	// (0x0008a270) main_tv_pg_hdr_pane_g1

0xe229,	// (0x0008b813) main_tv_pg_hdr_pane_g2

0xe231,	// (0x0008b81b) main_tv_pg_hdr_pane_g3

0xe239,	// (0x0008b823) main_tv_pg_hdr_pane_g4

0xe241,	// (0x0008b82b) main_tv_pg_hdr_pane_g5

0xe24b,	// (0x0008b835) main_tv_pg_hdr_pane_g6

0xe255,	// (0x0008b83f) main_tv_pg_hdr_pane_g7

0xe25f,	// (0x0008b849) main_tv_pg_hdr_pane_g8

0xe269,	// (0x0008b853) main_tv_pg_hdr_pane_g9

0xe273,	// (0x0008b85d) main_tv_pg_hdr_pane_g10

0xe27d,	// (0x0008b867) main_tv_pg_hdr_pane_g11

0x000a,

0xfbf0,	// (0x0008d1da) main_tv_pg_hdr_pane_g

0xe287,	// (0x0008b871) main_tv_pg_hdr_pane_t1

0xe295,	// (0x0008b87f) main_tv_pg_hdr_pane_t2

0xe2a3,	// (0x0008b88d) main_tv_pg_hdr_pane_t3

0xe2b3,	// (0x0008b89d) main_tv_pg_hdr_pane_t4

0xe2c3,	// (0x0008b8ad) main_tv_pg_hdr_pane_t5

0x0004,

0xfc07,	// (0x0008d1f1) main_tv_pg_hdr_pane_t

0xe2d3,	// (0x0008b8bd) single_mobtv_pg_channel_pane_ParamLimits

0xe2d3,	// (0x0008b8bd) single_mobtv_pg_channel_pane

0xe2e5,	// (0x0008b8cf) single_mobtv_pg_channel_table_pane

0xe2ee,	// (0x0008b8d8) single_mobtv_pg_channel_thumb_pane

0xe2f7,	// (0x0008b8e1) single_tv_pg_channel_pane_g1

0xe300,	// (0x0008b8ea) single_tv_pg_channel_pane_g2

0x0001,

0xfc12,	// (0x0008d1fc) single_tv_pg_channel_pane_g

0xceb6,	// (0x0008a4a0) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xceb6,	// (0x0008a4a0) bg_single_mobtv_pg_channel_thumb_pane

0xe309,	// (0x0008b8f3) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xe309,	// (0x0008b8f3) single_mobtv_pg_channel_thumb_pane_g1

0xe317,	// (0x0008b901) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xe317,	// (0x0008b901) single_mobtv_pg_channel_thumb_pane_g2

0xe323,	// (0x0008b90d) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xe323,	// (0x0008b90d) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfc17,	// (0x0008d201) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfc17,	// (0x0008d201) single_mobtv_pg_channel_thumb_pane_g

0xe32f,	// (0x0008b919) single_mobtv_pg_channel_thumb_pane_t1

0xe33d,	// (0x0008b927) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc1e,	// (0x0008d208) single_mobtv_pg_channel_thumb_pane_t

0xcc86,	// (0x0008a270) bg_single_mobtv_pg_channel_table_pane_g1

0xcc86,	// (0x0008a270) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf6dc,	// (0x0008ccc6) bg_single_mobtv_pg_channel_table_pane_g

0xe34b,	// (0x0008b935) single_mobtv_pg_channel_table_pane_t1

0xe359,	// (0x0008b943) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc23,	// (0x0008d20d) single_mobtv_pg_channel_table_pane_t

0x8e28,	// (0x00086412) main_mobtv_info_pane_g1_ParamLimits

0x8e28,	// (0x00086412) main_mobtv_info_pane_g1

0x8e44,	// (0x0008642e) main_mobtv_info_pane_t1_ParamLimits

0x8e44,	// (0x0008642e) main_mobtv_info_pane_t1

0x8ebc,	// (0x000864a6) main_mobtv_info_pane_t2_ParamLimits

0x8ebc,	// (0x000864a6) main_mobtv_info_pane_t2

0x0002,

0xfc2d,	// (0x0008d217) main_mobtv_info_pane_t_ParamLimits

0xfc2d,	// (0x0008d217) main_mobtv_info_pane_t

0x8f4d,	// (0x00086537) wait_bar_pane_cp05

0x8f5f,	// (0x00086549) main_mobtv_loading_pane_g1_ParamLimits

0x8f5f,	// (0x00086549) main_mobtv_loading_pane_g1

0x8f6b,	// (0x00086555) main_mobtv_loading_pane_g2_ParamLimits

0x8f6b,	// (0x00086555) main_mobtv_loading_pane_g2

0x8f77,	// (0x00086561) main_mobtv_loading_pane_g3_ParamLimits

0x8f77,	// (0x00086561) main_mobtv_loading_pane_g3

0x0002,

0xfc34,	// (0x0008d21e) main_mobtv_loading_pane_g_ParamLimits

0xfc34,	// (0x0008d21e) main_mobtv_loading_pane_g

0xe367,	// (0x0008b951) main_mobtv_loading_pane_t1_ParamLimits

0xe367,	// (0x0008b951) main_mobtv_loading_pane_t1

0xe37f,	// (0x0008b969) main_mobtv_loading_pane_t2_ParamLimits

0xe37f,	// (0x0008b969) main_mobtv_loading_pane_t2

0x0001,

0xfc3b,	// (0x0008d225) main_mobtv_loading_pane_t_ParamLimits

0xfc3b,	// (0x0008d225) main_mobtv_loading_pane_t

0x8f85,	// (0x0008656f) wait_bar_pane_cp06_ParamLimits

0x8f85,	// (0x0008656f) wait_bar_pane_cp06

0xe3a3,	// (0x0008b98d) main_mobtv_programe_curr_pane_t1

0xe3b1,	// (0x0008b99b) main_mobtv_programe_curr_pane_t2

0x0001,

0xfc40,	// (0x0008d22a) main_mobtv_programe_curr_pane_t

0xe3bf,	// (0x0008b9a9) main_mobtv_programe_next_pane_t1

0xe3cd,	// (0x0008b9b7) main_mobtv_programe_next_pane_t2

0xe3db,	// (0x0008b9c5) main_mobtv_programe_next_pane_t3

0x0002,

0xfc45,	// (0x0008d22f) main_mobtv_programe_next_pane_t

0xa17a,	// (0x00087764) bg_popup_mobtv_noti_window_pane

0xe3e9,	// (0x0008b9d3) popup_mobtv_noti_window_g1

0xe3f1,	// (0x0008b9db) popup_mobtv_noti_window_t1

0xe3ff,	// (0x0008b9e9) popup_mobtv_noti_window_t2

0x0001,

0xfc4c,	// (0x0008d236) popup_mobtv_noti_window_t

0xcc86,	// (0x0008a270) bg_popup_mobtv_noti_window_pane_g1

0xa17a,	// (0x00087764) sc_clock_pane

0xa17a,	// (0x00087764) main_fs_bigclock_pane

0x8649,	// (0x00085c33) blid2_tripm_pane_t4_ParamLimits

0x8649,	// (0x00085c33) blid2_tripm_pane_t4

0x8f91,	// (0x0008657b) sc_clock_pane_g1_ParamLimits

0x8f91,	// (0x0008657b) sc_clock_pane_g1

0x8f9f,	// (0x00086589) sc_clock_pane_t1_ParamLimits

0x8f9f,	// (0x00086589) sc_clock_pane_t1

0x8fb4,	// (0x0008659e) sc_clock_pane_t2_ParamLimits

0x8fb4,	// (0x0008659e) sc_clock_pane_t2

0x8fc6,	// (0x000865b0) sc_clock_pane_t3_ParamLimits

0x8fc6,	// (0x000865b0) sc_clock_pane_t3

0x0004,

0xfc51,	// (0x0008d23b) sc_clock_pane_t_ParamLimits

0xfc51,	// (0x0008d23b) sc_clock_pane_t

0x9884,	// (0x00086e6e) main_fs_bigclock_indicator_pane_ParamLimits

0x9884,	// (0x00086e6e) main_fs_bigclock_indicator_pane

0x9059,	// (0x00086643) main_fs_bigclock_pane_g1_ParamLimits

0x9059,	// (0x00086643) main_fs_bigclock_pane_g1

0x9890,	// (0x00086e7a) main_fs_bigclock_pane_t1_ParamLimits

0x9890,	// (0x00086e7a) main_fs_bigclock_pane_t1

0x98a2,	// (0x00086e8c) main_fs_bigclock_pane_t2_ParamLimits

0x98a2,	// (0x00086e8c) main_fs_bigclock_pane_t2

0x98b6,	// (0x00086ea0) main_fs_bigclock_pane_t3_ParamLimits

0x98b6,	// (0x00086ea0) main_fs_bigclock_pane_t3

0x0002,

0xfe5b,	// (0x0008d445) main_fs_bigclock_pane_t_ParamLimits

0xfe5b,	// (0x0008d445) main_fs_bigclock_pane_t

0xec77,	// (0x0008c261) main_fs_bigclock_indicator_pane_g1

0xe0cf,	// (0x0008b6b9) ncim_query_content_pane_g2_ParamLimits

0xe0cf,	// (0x0008b6b9) ncim_query_content_pane_g2

0x0001,

0xfbde,	// (0x0008d1c8) ncim_query_content_pane_g_ParamLimits

0xfbde,	// (0x0008d1c8) ncim_query_content_pane_g

0x8fd8,	// (0x000865c2) sc_clock_pane_t4_ParamLimits

0x8fd8,	// (0x000865c2) sc_clock_pane_t4

0xa8c0,	// (0x00087eaa) main_radioblah_pane

0xd5e1,	// (0x0008abcb) cell_call4_button_pane_t1_copy1_ParamLimits

0xd5e1,	// (0x0008abcb) cell_call4_button_pane_t1_copy1

0x8c4b,	// (0x00086235) main_ncimui_pane_t1_ParamLimits

0x8c4b,	// (0x00086235) main_ncimui_pane_t1

0x8c65,	// (0x0008624f) main_ncimui_pane_t2_ParamLimits

0x8c65,	// (0x0008624f) main_ncimui_pane_t2

0x0002,

0xfbd7,	// (0x0008d1c1) main_ncimui_pane_t_ParamLimits

0xfbd7,	// (0x0008d1c1) main_ncimui_pane_t

0xe552,	// (0x0008bb3c) main_radioblah_anim_pane_ParamLimits

0xe552,	// (0x0008bb3c) main_radioblah_anim_pane

0xe59e,	// (0x0008bb88) main_radioblah_info_pane_ParamLimits

0xe59e,	// (0x0008bb88) main_radioblah_info_pane

0xe5b2,	// (0x0008bb9c) main_radioblah_pane_t1_ParamLimits

0xe5b2,	// (0x0008bb9c) main_radioblah_pane_t1

0xe5ce,	// (0x0008bbb8) main_radioblah_pane_t2_ParamLimits

0xe5ce,	// (0x0008bbb8) main_radioblah_pane_t2

0x0003,

0xfc72,	// (0x0008d25c) main_radioblah_pane_t_ParamLimits

0xfc72,	// (0x0008d25c) main_radioblah_pane_t

0x90ab,	// (0x00086695) main_radioblah_rocker_ctrl_pane_ParamLimits

0x90ab,	// (0x00086695) main_radioblah_rocker_ctrl_pane

0xe616,	// (0x0008bc00) main_radioblah_info_pane_t1_ParamLimits

0xe616,	// (0x0008bc00) main_radioblah_info_pane_t1

0x90f4,	// (0x000866de) main_radioblah_info_pane_t2_ParamLimits

0x90f4,	// (0x000866de) main_radioblah_info_pane_t2

0x0003,

0xfc7b,	// (0x0008d265) main_radioblah_info_pane_t_ParamLimits

0xfc7b,	// (0x0008d265) main_radioblah_info_pane_t

0xcc86,	// (0x0008a270) main_radioblah_rocker_ctrl_pane_g1

0x91a4,	// (0x0008678e) main_radioblah_rocker_ctrl_pane_g2

0x91ac,	// (0x00086796) main_radioblah_rocker_ctrl_pane_g3

0x91b4,	// (0x0008679e) main_radioblah_rocker_ctrl_pane_g4

0x91bc,	// (0x000867a6) main_radioblah_rocker_ctrl_pane_g5

0x91c4,	// (0x000867ae) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfc84,	// (0x0008d26e) main_radioblah_rocker_ctrl_pane_g

0x8bfd,	// (0x000861e7) main_cset_text2_pane_t1_copy1_ParamLimits

0x740b,	// (0x000849f5) cam4_image_uncrop_qvga_pane

0x7550,	// (0x00084b3a) vid4_image_uncrop_qcif_pane

0x87db,	// (0x00085dc5) cam6_image_uncrop_qvga_pane_ParamLimits

0x87db,	// (0x00085dc5) cam6_image_uncrop_qvga_pane

0xddb7,	// (0x0008b3a1) vid6_image_uncrop_qcif_pane_ParamLimits

0xddb7,	// (0x0008b3a1) vid6_image_uncrop_qcif_pane

0xa17a,	// (0x00087764) bg_popup_preview_window_pane_cp03

0xe081,	// (0x0008b66b) list_cset_text2_pane

0xe089,	// (0x0008b673) main_cset6_text2_pane_g1

0xe091,	// (0x0008b67b) main_cset6_text2_pane_t1

0x91cc,	// (0x000867b6) list_cset_text2_pane_t1_ParamLimits

0x91cc,	// (0x000867b6) list_cset_text2_pane_t1

0xa8c0,	// (0x00087eaa) main_radioblah_pane_ParamLimits

0x8f39,	// (0x00086523) main_mobtv_info_pane_t3_ParamLimits

0x8f39,	// (0x00086523) main_mobtv_info_pane_t3

0x9099,	// (0x00086683) main_radioblah_pane_g1

0x90c4,	// (0x000866ae) main_radioblah_info_pane_g1

0x9149,	// (0x00086733) main_radioblah_info_pane_t3_ParamLimits

0x9149,	// (0x00086733) main_radioblah_info_pane_t3

0x424f,	// (0x00081839) highlight_cell_cale_month_pane_ParamLimits

0x424f,	// (0x00081839) highlight_cell_cale_month_pane

0xa17a,	// (0x00087764) main_phob_fisheye_pane

0xcf92,	// (0x0008a57c) scroll_pane_cp0031_ParamLimits

0xcf92,	// (0x0008a57c) scroll_pane_cp0031

0xdee4,	// (0x0008b4ce) wait_bar_pane_cp08_ParamLimits

0x89ae,	// (0x00085f98) cset_list_set_pane_copy1_ParamLimits

0xe650,	// (0x0008bc3a) highlight_cell_cale_month_pane_g1

0x91e3,	// (0x000867cd) highlight_cell_cale_month_pane_t1

0xdb78,	// (0x0008b162) list_gen_pane_cp01

0xd7b2,	// (0x0008ad9c) scroll_pane_01

0x91f1,	// (0x000867db) list_single_double_fisheye_pane

0x12e5,	// (0x0007e8cf) list_double_fisheye_pane_g1_ParamLimits

0x12e5,	// (0x0007e8cf) list_double_fisheye_pane_g1

0x12f1,	// (0x0007e8db) list_double_fisheye_pane_g2_ParamLimits

0x12f1,	// (0x0007e8db) list_double_fisheye_pane_g2

0x91fa,	// (0x000867e4) list_double_fisheye_pane_g3_ParamLimits

0x91fa,	// (0x000867e4) list_double_fisheye_pane_g3

0x0004,

0xfc91,	// (0x0008d27b) list_double_fisheye_pane_g_ParamLimits

0xfc91,	// (0x0008d27b) list_double_fisheye_pane_g

0x1322,	// (0x0007e90c) list_double_fisheye_pane_t1_ParamLimits

0x1322,	// (0x0007e90c) list_double_fisheye_pane_t1

0x133d,	// (0x0007e927) list_double_fisheye_pane_t2_ParamLimits

0x133d,	// (0x0007e927) list_double_fisheye_pane_t2

0x0001,

0xfc9c,	// (0x0008d286) list_double_fisheye_pane_t_ParamLimits

0xfc9c,	// (0x0008d286) list_double_fisheye_pane_t

0xa17a,	// (0x00087764) main_call5_pane

0x8ffe,	// (0x000865e8) sc_swipe_pane_ParamLimits

0x8ffe,	// (0x000865e8) sc_swipe_pane

0x9212,	// (0x000867fc) call5_image_pane_ParamLimits

0x9212,	// (0x000867fc) call5_image_pane

0x9224,	// (0x0008680e) call5_swipe_1_pane_ParamLimits

0x9224,	// (0x0008680e) call5_swipe_1_pane

0x9230,	// (0x0008681a) call5_swipe_2_pane_ParamLimits

0x9230,	// (0x0008681a) call5_swipe_2_pane

0x924c,	// (0x00086836) popup_call5_audio_first_window_ParamLimits

0x924c,	// (0x00086836) popup_call5_audio_first_window

0xceb6,	// (0x0008a4a0) call5_swipe_1_pane_g1_ParamLimits

0xceb6,	// (0x0008a4a0) call5_swipe_1_pane_g1

0xe658,	// (0x0008bc42) call5_swipe_1_pane_g2_ParamLimits

0xe658,	// (0x0008bc42) call5_swipe_1_pane_g2

0x0001,

0xfca1,	// (0x0008d28b) call5_swipe_1_pane_g_ParamLimits

0xfca1,	// (0x0008d28b) call5_swipe_1_pane_g

0xe664,	// (0x0008bc4e) call5_swipe_1_pane_t1_ParamLimits

0xe664,	// (0x0008bc4e) call5_swipe_1_pane_t1

0xceb6,	// (0x0008a4a0) call5_swipe_2_pane_g1_ParamLimits

0xceb6,	// (0x0008a4a0) call5_swipe_2_pane_g1

0xe679,	// (0x0008bc63) call5_swipe_2_pane_g2_ParamLimits

0xe679,	// (0x0008bc63) call5_swipe_2_pane_g2

0x0001,

0xfca6,	// (0x0008d290) call5_swipe_2_pane_g_ParamLimits

0xfca6,	// (0x0008d290) call5_swipe_2_pane_g

0xe685,	// (0x0008bc6f) call5_swipe_2_pane_t1_ParamLimits

0xe685,	// (0x0008bc6f) call5_swipe_2_pane_t1

0xe69a,	// (0x0008bc84) sc_swipe_pane_g1_ParamLimits

0xe69a,	// (0x0008bc84) sc_swipe_pane_g1

0xe6a7,	// (0x0008bc91) sc_swipe_pane_g2_ParamLimits

0xe6a7,	// (0x0008bc91) sc_swipe_pane_g2

0x0001,

0xfcab,	// (0x0008d295) sc_swipe_pane_g_ParamLimits

0xfcab,	// (0x0008d295) sc_swipe_pane_g

0xe6b3,	// (0x0008bc9d) sc_swipe_pane_t1_ParamLimits

0xe6b3,	// (0x0008bc9d) sc_swipe_pane_t1

0xa17a,	// (0x00087764) main_cmail_launcher_pane

0x925c,	// (0x00086846) aid_size_cell_cmail_l_ParamLimits

0x925c,	// (0x00086846) aid_size_cell_cmail_l

0x926c,	// (0x00086856) grid_cmail_l_pane_ParamLimits

0x926c,	// (0x00086856) grid_cmail_l_pane

0x927c,	// (0x00086866) cell_cmail_l_pane_ParamLimits

0x927c,	// (0x00086866) cell_cmail_l_pane

0x9292,	// (0x0008687c) cell_cmail_l_pane_g1_ParamLimits

0x9292,	// (0x0008687c) cell_cmail_l_pane_g1

0x929e,	// (0x00086888) cell_cmail_l_pane_t1_ParamLimits

0x929e,	// (0x00086888) cell_cmail_l_pane_t1

0xe6c8,	// (0x0008bcb2) cell_cmail_l_pane_t2_ParamLimits

0xe6c8,	// (0x0008bcb2) cell_cmail_l_pane_t2

0x0001,

0xfcb0,	// (0x0008d29a) cell_cmail_l_pane_t_ParamLimits

0xfcb0,	// (0x0008d29a) cell_cmail_l_pane_t

0xa8c0,	// (0x00087eaa) grid_highlight_pane_cp018_ParamLimits

0xa8c0,	// (0x00087eaa) grid_highlight_pane_cp018

0x1f41,	// (0x0007f52b) main2_pane_ParamLimits

0x1f41,	// (0x0007f52b) main2_pane

0xa9d7,	// (0x00087fc1) popup_sp_fs_action_menu_bg_pane_g1

0xa9df,	// (0x00087fc9) popup_sp_fs_action_menu_bg_pane_g2

0xa9e7,	// (0x00087fd1) popup_sp_fs_action_menu_bg_pane_g3

0xa9ef,	// (0x00087fd9) popup_sp_fs_action_menu_bg_pane_g4

0xa9f7,	// (0x00087fe1) popup_sp_fs_action_menu_bg_pane_g5

0xa9ff,	// (0x00087fe9) popup_sp_fs_action_menu_bg_pane_g6

0xaa07,	// (0x00087ff1) popup_sp_fs_action_menu_bg_pane_g7

0xaa0f,	// (0x00087ff9) popup_sp_fs_action_menu_bg_pane_g8

0xaa17,	// (0x00088001) popup_sp_fs_action_menu_bg_pane_g9

0xaa1f,	// (0x00088009) popup_sp_fs_action_menu_bg_pane_g10

0xaa1f,	// (0x00088009) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf18a,	// (0x0008c774) popup_sp_fs_action_menu_bg_pane_g

0x0b60,	// (0x0007e14a) list_medium_line_x2_t3_g3_g1_ParamLimits

0x0b60,	// (0x0007e14a) list_medium_line_x2_t3_g3_g1

0x318b,	// (0x00080775) list_medium_line_x2_t3_g3_g2_ParamLimits

0x318b,	// (0x00080775) list_medium_line_x2_t3_g3_g2

0x0b6c,	// (0x0007e156) list_medium_line_x2_t3_g3_g3_ParamLimits

0x0b6c,	// (0x0007e156) list_medium_line_x2_t3_g3_g3

0x0002,

0xf238,	// (0x0008c822) list_medium_line_x2_t3_g3_g_ParamLimits

0xf238,	// (0x0008c822) list_medium_line_x2_t3_g3_g

0x0b78,	// (0x0007e162) list_medium_line_x2_t3_g3_t1_ParamLimits

0x0b78,	// (0x0007e162) list_medium_line_x2_t3_g3_t1

0x0b8d,	// (0x0007e177) list_medium_line_x2_t3_g3_t2_ParamLimits

0x0b8d,	// (0x0007e177) list_medium_line_x2_t3_g3_t2

0x0ba1,	// (0x0007e18b) list_medium_line_x2_t3_g3_t3_ParamLimits

0x0ba1,	// (0x0007e18b) list_medium_line_x2_t3_g3_t3

0x0002,

0xf23f,	// (0x0008c829) list_medium_line_x2_t3_g3_t_ParamLimits

0xf23f,	// (0x0008c829) list_medium_line_x2_t3_g3_t

0x0b60,	// (0x0007e14a) list_medium_line_x2_t3_g2_g1_ParamLimits

0x0b60,	// (0x0007e14a) list_medium_line_x2_t3_g2_g1

0x0b6c,	// (0x0007e156) list_medium_line_x2_t3_g2_g2_ParamLimits

0x0b6c,	// (0x0007e156) list_medium_line_x2_t3_g2_g2

0x0001,

0xf246,	// (0x0008c830) list_medium_line_x2_t3_g2_g_ParamLimits

0xf246,	// (0x0008c830) list_medium_line_x2_t3_g2_g

0x0bb6,	// (0x0007e1a0) list_medium_line_x2_t3_g2_t1_ParamLimits

0x0bb6,	// (0x0007e1a0) list_medium_line_x2_t3_g2_t1

0x0bcc,	// (0x0007e1b6) list_medium_line_x2_t3_g2_t2_ParamLimits

0x0bcc,	// (0x0007e1b6) list_medium_line_x2_t3_g2_t2

0x0bde,	// (0x0007e1c8) list_medium_line_x2_t3_g2_t3_ParamLimits

0x0bde,	// (0x0007e1c8) list_medium_line_x2_t3_g2_t3

0x0002,

0xf24b,	// (0x0008c835) list_medium_line_x2_t3_g2_t_ParamLimits

0xf24b,	// (0x0008c835) list_medium_line_x2_t3_g2_t

0x0b60,	// (0x0007e14a) list_medium_line_x2_t4_g4_g1_ParamLimits

0x0b60,	// (0x0007e14a) list_medium_line_x2_t4_g4_g1

0x3197,	// (0x00080781) list_medium_line_x2_t4_g4_g2_ParamLimits

0x3197,	// (0x00080781) list_medium_line_x2_t4_g4_g2

0x318b,	// (0x00080775) list_medium_line_x2_t4_g4_g3_ParamLimits

0x318b,	// (0x00080775) list_medium_line_x2_t4_g4_g3

0x0bfc,	// (0x0007e1e6) list_medium_line_x2_t4_g4_g4_ParamLimits

0x0bfc,	// (0x0007e1e6) list_medium_line_x2_t4_g4_g4

0x0003,

0xf252,	// (0x0008c83c) list_medium_line_x2_t4_g4_g_ParamLimits

0xf252,	// (0x0008c83c) list_medium_line_x2_t4_g4_g

0x0c08,	// (0x0007e1f2) list_medium_line_x2_t4_g4_t1_ParamLimits

0x0c08,	// (0x0007e1f2) list_medium_line_x2_t4_g4_t1

0x0c1f,	// (0x0007e209) list_medium_line_x2_t4_g4_t2_ParamLimits

0x0c1f,	// (0x0007e209) list_medium_line_x2_t4_g4_t2

0x0c34,	// (0x0007e21e) list_medium_line_x2_t4_g4_t3_ParamLimits

0x0c34,	// (0x0007e21e) list_medium_line_x2_t4_g4_t3

0x0c46,	// (0x0007e230) list_medium_line_x2_t4_g4_t4_ParamLimits

0x0c46,	// (0x0007e230) list_medium_line_x2_t4_g4_t4

0x0003,

0xf25b,	// (0x0008c845) list_medium_line_x2_t4_g4_t_ParamLimits

0xf25b,	// (0x0008c845) list_medium_line_x2_t4_g4_t

0x0b60,	// (0x0007e14a) list_medium_line_x2_t2_g4_g1_ParamLimits

0x0b60,	// (0x0007e14a) list_medium_line_x2_t2_g4_g1

0x3197,	// (0x00080781) list_medium_line_x2_t2_g4_g2_ParamLimits

0x3197,	// (0x00080781) list_medium_line_x2_t2_g4_g2

0x318b,	// (0x00080775) list_medium_line_x2_t2_g4_g3_ParamLimits

0x318b,	// (0x00080775) list_medium_line_x2_t2_g4_g3

0x0b6c,	// (0x0007e156) list_medium_line_x2_t2_g4_g4_ParamLimits

0x0b6c,	// (0x0007e156) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2c2,	// (0x0008c8ac) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2c2,	// (0x0008c8ac) list_medium_line_x2_t2_g4_g

0x0c58,	// (0x0007e242) list_medium_line_x2_t2_g4_t1_ParamLimits

0x0c58,	// (0x0007e242) list_medium_line_x2_t2_g4_t1

0x0ba1,	// (0x0007e18b) list_medium_line_x2_t2_g4_t2_ParamLimits

0x0ba1,	// (0x0007e18b) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2cb,	// (0x0008c8b5) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2cb,	// (0x0008c8b5) list_medium_line_x2_t2_g4_t

0x0b60,	// (0x0007e14a) list_medium_line_x2_t2_g3_g1_ParamLimits

0x0b60,	// (0x0007e14a) list_medium_line_x2_t2_g3_g1

0x318b,	// (0x00080775) list_medium_line_x2_t2_g3_g2_ParamLimits

0x318b,	// (0x00080775) list_medium_line_x2_t2_g3_g2

0x0b6c,	// (0x0007e156) list_medium_line_x2_t2_g3_g3_ParamLimits

0x0b6c,	// (0x0007e156) list_medium_line_x2_t2_g3_g3

0x0002,

0xf238,	// (0x0008c822) list_medium_line_x2_t2_g3_g_ParamLimits

0xf238,	// (0x0008c822) list_medium_line_x2_t2_g3_g

0x0c6d,	// (0x0007e257) list_medium_line_x2_t2_g3_t1_ParamLimits

0x0c6d,	// (0x0007e257) list_medium_line_x2_t2_g3_t1

0x0ba1,	// (0x0007e18b) list_medium_line_x2_t2_g3_t2_ParamLimits

0x0ba1,	// (0x0007e18b) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2d0,	// (0x0008c8ba) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2d0,	// (0x0008c8ba) list_medium_line_x2_t2_g3_t

0x43f6,	// (0x000819e0) main_sp_fs_list_pane_ParamLimits

0x43f6,	// (0x000819e0) main_sp_fs_list_pane

0x4402,	// (0x000819ec) sp_fs_scroll_pane_ParamLimits

0x4402,	// (0x000819ec) sp_fs_scroll_pane

0x0c82,	// (0x0007e26c) list_medium_line_x2_t3_t1

0x0c92,	// (0x0007e27c) list_medium_line_x2_t3_t2

0x0ca0,	// (0x0007e28a) list_medium_line_x2_t3_t3

0x0002,

0xf31b,	// (0x0008c905) list_medium_line_x2_t3_t

0x0cae,	// (0x0007e298) list_medium_line_x3_t4_t1

0x0cbe,	// (0x0007e2a8) list_medium_line_x3_t4_t2

0x0ccc,	// (0x0007e2b6) list_medium_line_x3_t4_t3

0x0ca0,	// (0x0007e28a) list_medium_line_x3_t4_t4

0x0003,

0xf322,	// (0x0008c90c) list_medium_line_x3_t4_t

0x0cda,	// (0x0007e2c4) list_medium_line_x4_t5_t1

0x0cea,	// (0x0007e2d4) list_medium_line_x4_t5_t2

0x0ccc,	// (0x0007e2b6) list_medium_line_x4_t5_t3

0x0cf8,	// (0x0007e2e2) list_medium_line_x4_t5_t4

0x0ca0,	// (0x0007e28a) list_medium_line_x4_t5_t5

0x0004,

0xf32b,	// (0x0008c915) list_medium_line_x4_t5_t

0x0b60,	// (0x0007e14a) list_medium_line_t4_g4_g1_ParamLimits

0x0b60,	// (0x0007e14a) list_medium_line_t4_g4_g1

0x0bfc,	// (0x0007e1e6) list_medium_line_t4_g4_g2_ParamLimits

0x0bfc,	// (0x0007e1e6) list_medium_line_t4_g4_g2

0x0d06,	// (0x0007e2f0) list_medium_line_t4_g4_g3_ParamLimits

0x0d06,	// (0x0007e2f0) list_medium_line_t4_g4_g3

0x0b6c,	// (0x0007e156) list_medium_line_t4_g4_g4_ParamLimits

0x0b6c,	// (0x0007e156) list_medium_line_t4_g4_g4

0x0003,

0xf336,	// (0x0008c920) list_medium_line_t4_g4_g_ParamLimits

0xf336,	// (0x0008c920) list_medium_line_t4_g4_g

0x0d12,	// (0x0007e2fc) list_medium_line_t4_g4_t1_ParamLimits

0x0d12,	// (0x0007e2fc) list_medium_line_t4_g4_t1

0x0d27,	// (0x0007e311) list_medium_line_t4_g4_t2_ParamLimits

0x0d27,	// (0x0007e311) list_medium_line_t4_g4_t2

0x0d3d,	// (0x0007e327) list_medium_line_t4_g4_t3_ParamLimits

0x0d3d,	// (0x0007e327) list_medium_line_t4_g4_t3

0x0ba1,	// (0x0007e18b) list_medium_line_t4_g4_t4_ParamLimits

0x0ba1,	// (0x0007e18b) list_medium_line_t4_g4_t4

0x0003,

0xf33f,	// (0x0008c929) list_medium_line_t4_g4_t_ParamLimits

0xf33f,	// (0x0008c929) list_medium_line_t4_g4_t

0x4521,	// (0x00081b0b) chi_dic_find_pane_g1

0x54f3,	// (0x00082add) main_tport_pane

0x0f8b,	// (0x0007e575) list_medium_line_plain_t1

0x0f99,	// (0x0007e583) list_medium_line_t2_g2_g1_ParamLimits

0x0f99,	// (0x0007e583) list_medium_line_t2_g2_g1

0x7f8a,	// (0x00085574) list_medium_line_t2_g2_g2_ParamLimits

0x7f8a,	// (0x00085574) list_medium_line_t2_g2_g2

0x0001,

0xf9ef,	// (0x0008cfd9) list_medium_line_t2_g2_g_ParamLimits

0xf9ef,	// (0x0008cfd9) list_medium_line_t2_g2_g

0x0fa5,	// (0x0007e58f) list_medium_line_t2_g2_t1_ParamLimits

0x0fa5,	// (0x0007e58f) list_medium_line_t2_g2_t1

0x0fbf,	// (0x0007e5a9) list_medium_line_t2_g2_t2_ParamLimits

0x0fbf,	// (0x0007e5a9) list_medium_line_t2_g2_t2

0x0001,

0xf9f4,	// (0x0008cfde) list_medium_line_t2_g2_t_ParamLimits

0xf9f4,	// (0x0008cfde) list_medium_line_t2_g2_t

0x11df,	// (0x0007e7c9) aid_sp_fs_list_icon_a_sm

0x849b,	// (0x00085a85) aid_sp_fs_list_icon_d

0x11e7,	// (0x0007e7d1) aid_sp_fs_text_primary

0x11f0,	// (0x0007e7da) aid_sp_fs_text_secondary

0x84a3,	// (0x00085a8d) list_medium_line

0x84a3,	// (0x00085a8d) list_medium_line_g2

0x84a3,	// (0x00085a8d) list_medium_line_g3

0x84a3,	// (0x00085a8d) list_medium_line_plain

0x84a3,	// (0x00085a8d) list_medium_line_plain_t2

0x84a3,	// (0x00085a8d) list_medium_line_plain_t3

0x84a3,	// (0x00085a8d) list_medium_line_right_icon

0x84a3,	// (0x00085a8d) list_medium_line_right_iconx2

0x84a3,	// (0x00085a8d) list_medium_line_t2

0x84a3,	// (0x00085a8d) list_medium_line_t2_g2

0x84a3,	// (0x00085a8d) list_medium_line_t2_g3

0x84a3,	// (0x00085a8d) list_medium_line_t2_right_icon

0x84a3,	// (0x00085a8d) list_medium_line_t2_right_iconx2

0x84a3,	// (0x00085a8d) list_medium_line_t3

0x84a3,	// (0x00085a8d) list_medium_line_t3_g2

0x84a3,	// (0x00085a8d) list_medium_line_t3_g3

0x84a3,	// (0x00085a8d) list_medium_line_t3_right_iconx2

0x84ac,	// (0x00085a96) list_medium_line_t4_g4

0x84b5,	// (0x00085a9f) list_medium_line_x2

0x84b5,	// (0x00085a9f) list_medium_line_x2_t2_g2

0x84b5,	// (0x00085a9f) list_medium_line_x2_t2_g3

0x84b5,	// (0x00085a9f) list_medium_line_x2_t2_g4

0x84b5,	// (0x00085a9f) list_medium_line_x2_t3

0x84b5,	// (0x00085a9f) list_medium_line_x2_t3_g2

0x84b5,	// (0x00085a9f) list_medium_line_x2_t3_g3

0x84b5,	// (0x00085a9f) list_medium_line_x2_t3_g4

0x84b5,	// (0x00085a9f) list_medium_line_x2_t4_g2

0x84b5,	// (0x00085a9f) list_medium_line_x2_t4_g4

0x84be,	// (0x00085aa8) list_medium_line_x3

0x84be,	// (0x00085aa8) list_medium_line_x3_t4

0x84be,	// (0x00085aa8) list_medium_line_x3_t4_g4

0x84ac,	// (0x00085a96) list_medium_line_x4_t4

0x84ac,	// (0x00085a96) list_medium_line_x4_t4_g7

0x84ac,	// (0x00085a96) list_medium_line_x4_t5

0x11f9,	// (0x0007e7e3) list_single_fs_dyc_pane_ParamLimits

0x11f9,	// (0x0007e7e3) list_single_fs_dyc_pane

0x0b60,	// (0x0007e14a) list_medium_line_x4_t4_g7_g1_ParamLimits

0x0b60,	// (0x0007e14a) list_medium_line_x4_t4_g7_g1

0x1231,	// (0x0007e81b) list_medium_line_x4_t4_g7_g2_ParamLimits

0x1231,	// (0x0007e81b) list_medium_line_x4_t4_g7_g2

0x8be2,	// (0x000861cc) list_medium_line_x4_t4_g7_g3_ParamLimits

0x8be2,	// (0x000861cc) list_medium_line_x4_t4_g7_g3

0x8bf1,	// (0x000861db) list_medium_line_x4_t4_g7_g4_ParamLimits

0x8bf1,	// (0x000861db) list_medium_line_x4_t4_g7_g4

0x123d,	// (0x0007e827) list_medium_line_x4_t4_g7_g5_ParamLimits

0x123d,	// (0x0007e827) list_medium_line_x4_t4_g7_g5

0x124c,	// (0x0007e836) list_medium_line_x4_t4_g7_g6_ParamLimits

0x124c,	// (0x0007e836) list_medium_line_x4_t4_g7_g6

0x125b,	// (0x0007e845) list_medium_line_x4_t4_g7_g7_ParamLimits

0x125b,	// (0x0007e845) list_medium_line_x4_t4_g7_g7

0x0006,

0xfbb8,	// (0x0008d1a2) list_medium_line_x4_t4_g7_g_ParamLimits

0xfbb8,	// (0x0008d1a2) list_medium_line_x4_t4_g7_g

0x1267,	// (0x0007e851) list_medium_line_x4_t4_g7_t1_ParamLimits

0x1267,	// (0x0007e851) list_medium_line_x4_t4_g7_t1

0x127c,	// (0x0007e866) list_medium_line_x4_t4_g7_t2_ParamLimits

0x127c,	// (0x0007e866) list_medium_line_x4_t4_g7_t2

0x1291,	// (0x0007e87b) list_medium_line_x4_t4_g7_t3_ParamLimits

0x1291,	// (0x0007e87b) list_medium_line_x4_t4_g7_t3

0x12a6,	// (0x0007e890) list_medium_line_x4_t4_g7_t4_ParamLimits

0x12a6,	// (0x0007e890) list_medium_line_x4_t4_g7_t4

0x12b8,	// (0x0007e8a2) list_medium_line_x4_t4_g7_t5_ParamLimits

0x12b8,	// (0x0007e8a2) list_medium_line_x4_t4_g7_t5

0x0004,

0xfbc7,	// (0x0008d1b1) list_medium_line_x4_t4_g7_t_ParamLimits

0xfbc7,	// (0x0008d1b1) list_medium_line_x4_t4_g7_t

0x12ca,	// (0x0007e8b4) list_single_dyc_row_pane_ParamLimits

0x12ca,	// (0x0007e8b4) list_single_dyc_row_pane

0x9206,	// (0x000867f0) call5_gesture_pane_ParamLimits

0x9206,	// (0x000867f0) call5_gesture_pane

0x923c,	// (0x00086826) call5_windows_pane_ParamLimits

0x923c,	// (0x00086826) call5_windows_pane

0x92b4,	// (0x0008689e) call5_swipe_1_pane_cp_ParamLimits

0x92b4,	// (0x0008689e) call5_swipe_1_pane_cp

0x92c0,	// (0x000868aa) call5_swipe_2_pane_cp_ParamLimits

0x92c0,	// (0x000868aa) call5_swipe_2_pane_cp

0xaae2,	// (0x000880cc) call5_image_pane_cp

0x92cc,	// (0x000868b6) popup_call5_audio_first_window_cp_ParamLimits

0x92cc,	// (0x000868b6) popup_call5_audio_first_window_cp

0xe69a,	// (0x0008bc84) call5_swipe_1_pane_g1_cp_ParamLimits

0xe69a,	// (0x0008bc84) call5_swipe_1_pane_g1_cp

0xe6da,	// (0x0008bcc4) call5_swipe_1_pane_g2_cp

0xe6b3,	// (0x0008bc9d) call5_swipe_1_pane_t1_cp_ParamLimits

0xe6b3,	// (0x0008bc9d) call5_swipe_1_pane_t1_cp

0xe69a,	// (0x0008bc84) call5_swipe_2_pane_g1_cp_ParamLimits

0xe69a,	// (0x0008bc84) call5_swipe_2_pane_g1_cp

0xe6e2,	// (0x0008bccc) call5_swipe_2_pane_g2_cp

0xe6ea,	// (0x0008bcd4) call5_swipe_2_pane_t1_cp_ParamLimits

0xe6ea,	// (0x0008bcd4) call5_swipe_2_pane_t1_cp

0xa8c0,	// (0x00087eaa) main_sp_fs_email_pane

0xe6ff,	// (0x0008bce9) main_sp_fs_listscroll_pane_te

0x135f,	// (0x0007e949) popup_sp_fs_action_menu_pane_ParamLimits

0x135f,	// (0x0007e949) popup_sp_fs_action_menu_pane

0xcc86,	// (0x0008a270) bg_sp_fs_ctrlbar_pane_g1

0xd23b,	// (0x0008a825) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xd24d,	// (0x0008a837) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xd244,	// (0x0008a82e) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xcc86,	// (0x0008a270) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfcb5,	// (0x0008d29f) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xca65,	// (0x0008a04f) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xca65,	// (0x0008a04f) bg_sp_fs_ctrlbar_ddmenu_pane

0xe708,	// (0x0008bcf2) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xe708,	// (0x0008bcf2) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xe714,	// (0x0008bcfe) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xe714,	// (0x0008bcfe) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfcbe,	// (0x0008d2a8) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfcbe,	// (0x0008d2a8) main_sp_fs_ctrlbar_ddmenu_pane_g

0xe720,	// (0x0008bd0a) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xe720,	// (0x0008bd0a) main_sp_fs_ctrlbar_ddmenu_pane_t1

0x92da,	// (0x000868c4) list_medium_line_t2_right_icon_g1

0x13a5,	// (0x0007e98f) list_medium_line_t2_right_icon_t1

0x13b5,	// (0x0007e99f) list_medium_line_t2_right_icon_t2

0x0001,

0xfcc3,	// (0x0008d2ad) list_medium_line_t2_right_icon_t

0xc835,	// (0x00089e1f) bg_sp_fs_ctrlbar_pane_ParamLimits

0xc835,	// (0x00089e1f) bg_sp_fs_ctrlbar_pane

0x933b,	// (0x00086925) main_sp_fs_ctrlbar_button_pane_cp01

0x9343,	// (0x0008692d) main_sp_fs_ctrlbar_ddmenu_pane

0xe563,	// (0x0008bb4d) main_sp_fs_ctrlbar_pane_g1

0xe772,	// (0x0008bd5c) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfcc8,	// (0x0008d2b2) main_sp_fs_ctrlbar_pane_g

0xe77e,	// (0x0008bd68) main_sp_fs_ctrlbar_pane_t1

0x13c3,	// (0x0007e9ad) main_sp_fs_ctrlbar_pane

0x13dd,	// (0x0007e9c7) main_sp_fs_listscroll_pane_te_cp01

0x13ee,	// (0x0007e9d8) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x13ee,	// (0x0007e9d8) popup_sp_fs_action_menu_pane_cp01

0xa8c0,	// (0x00087eaa) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0xa8c0,	// (0x00087eaa) bg_sp_fs_highlight_list_pane_cp01

0x141c,	// (0x0007ea06) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0x141c,	// (0x0007ea06) sp_fs_action_menu_list_gene_pane_g1

0xe7ae,	// (0x0008bd98) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xe7ae,	// (0x0008bd98) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfcd2,	// (0x0008d2bc) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfcd2,	// (0x0008d2bc) sp_fs_action_menu_list_gene_pane_g

0x142b,	// (0x0007ea15) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0x142b,	// (0x0007ea15) sp_fs_action_menu_list_gene_pane_t1

0x1443,	// (0x0007ea2d) sp_fs_action_menu_list_gene_pane_ParamLimits

0x1443,	// (0x0007ea2d) sp_fs_action_menu_list_gene_pane

0xe7bb,	// (0x0008bda5) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xe7bb,	// (0x0008bda5) popup_sp_fs_action_menu_bg_pane

0x1466,	// (0x0007ea50) sp_fs_action_menu_list_pane_ParamLimits

0x1466,	// (0x0007ea50) sp_fs_action_menu_list_pane

0xe7c9,	// (0x0008bdb3) sp_fs_scroll_pane_cp01_ParamLimits

0xe7c9,	// (0x0008bdb3) sp_fs_scroll_pane_cp01

0x148a,	// (0x0007ea74) list_medium_line_plain_t2_t1

0x149a,	// (0x0007ea84) list_medium_line_plain_t2_t2

0x0001,

0xfcd7,	// (0x0008d2c1) list_medium_line_plain_t2_t

0x14a8,	// (0x0007ea92) list_medium_line_plain_t3_t1

0x14b8,	// (0x0007eaa2) list_medium_line_plain_t3_t2

0x14c6,	// (0x0007eab0) list_medium_line_plain_t3_t3

0x0002,

0xfcdc,	// (0x0008d2c6) list_medium_line_plain_t3_t

0x0b60,	// (0x0007e14a) list_medium_line_x2_t2_g2_g1_ParamLimits

0x0b60,	// (0x0007e14a) list_medium_line_x2_t2_g2_g1

0x0b6c,	// (0x0007e156) list_medium_line_x2_t2_g2_g2_ParamLimits

0x0b6c,	// (0x0007e156) list_medium_line_x2_t2_g2_g2

0x0001,

0xf246,	// (0x0008c830) list_medium_line_x2_t2_g2_g_ParamLimits

0xf246,	// (0x0008c830) list_medium_line_x2_t2_g2_g

0x0d12,	// (0x0007e2fc) list_medium_line_x2_t2_g2_t1_ParamLimits

0x0d12,	// (0x0007e2fc) list_medium_line_x2_t2_g2_t1

0x0ba1,	// (0x0007e18b) list_medium_line_x2_t2_g2_t2_ParamLimits

0x0ba1,	// (0x0007e18b) list_medium_line_x2_t2_g2_t2

0x0001,

0xfce3,	// (0x0008d2cd) list_medium_line_x2_t2_g2_t_ParamLimits

0xfce3,	// (0x0008d2cd) list_medium_line_x2_t2_g2_t

0x0b60,	// (0x0007e14a) list_medium_line_x2_t4_g2_g1_ParamLimits

0x0b60,	// (0x0007e14a) list_medium_line_x2_t4_g2_g1

0x14d4,	// (0x0007eabe) list_medium_line_x2_t4_g2_g2_ParamLimits

0x14d4,	// (0x0007eabe) list_medium_line_x2_t4_g2_g2

0x0001,

0xfce8,	// (0x0008d2d2) list_medium_line_x2_t4_g2_g_ParamLimits

0xfce8,	// (0x0008d2d2) list_medium_line_x2_t4_g2_g

0x14e6,	// (0x0007ead0) list_medium_line_x2_t4_g2_t1_ParamLimits

0x14e6,	// (0x0007ead0) list_medium_line_x2_t4_g2_t1

0x1500,	// (0x0007eaea) list_medium_line_x2_t4_g2_t2_ParamLimits

0x1500,	// (0x0007eaea) list_medium_line_x2_t4_g2_t2

0x1516,	// (0x0007eb00) list_medium_line_x2_t4_g2_t3_ParamLimits

0x1516,	// (0x0007eb00) list_medium_line_x2_t4_g2_t3

0x0ba1,	// (0x0007e18b) list_medium_line_x2_t4_g2_t4_ParamLimits

0x0ba1,	// (0x0007e18b) list_medium_line_x2_t4_g2_t4

0x0003,

0xfced,	// (0x0008d2d7) list_medium_line_x2_t4_g2_t_ParamLimits

0xfced,	// (0x0008d2d7) list_medium_line_x2_t4_g2_t

0x934d,	// (0x00086937) list_medium_line_t3_right_iconx2_g1

0x92da,	// (0x000868c4) list_medium_line_t3_right_iconx2_g2

0x152b,	// (0x0007eb15) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfcf6,	// (0x0008d2e0) list_medium_line_t3_right_iconx2_g

0x1535,	// (0x0007eb1f) list_medium_line_t3_right_iconx2_t1

0x1545,	// (0x0007eb2f) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfcfd,	// (0x0008d2e7) list_medium_line_t3_right_iconx2_t

0x0b60,	// (0x0007e14a) list_medium_line_x3_t4_g4_g1_ParamLimits

0x0b60,	// (0x0007e14a) list_medium_line_x3_t4_g4_g1

0x318b,	// (0x00080775) list_medium_line_x3_t4_g4_g2_ParamLimits

0x318b,	// (0x00080775) list_medium_line_x3_t4_g4_g2

0x0bfc,	// (0x0007e1e6) list_medium_line_x3_t4_g4_g3_ParamLimits

0x0bfc,	// (0x0007e1e6) list_medium_line_x3_t4_g4_g3

0x9355,	// (0x0008693f) list_medium_line_x3_t4_g4_g4_ParamLimits

0x9355,	// (0x0008693f) list_medium_line_x3_t4_g4_g4

0x0003,

0xfd02,	// (0x0008d2ec) list_medium_line_x3_t4_g4_g_ParamLimits

0xfd02,	// (0x0008d2ec) list_medium_line_x3_t4_g4_g

0x1553,	// (0x0007eb3d) list_medium_line_x3_t4_g4_t1_ParamLimits

0x1553,	// (0x0007eb3d) list_medium_line_x3_t4_g4_t1

0x156a,	// (0x0007eb54) list_medium_line_x3_t4_g4_t2_ParamLimits

0x156a,	// (0x0007eb54) list_medium_line_x3_t4_g4_t2

0x157f,	// (0x0007eb69) list_medium_line_x3_t4_g4_t3_ParamLimits

0x157f,	// (0x0007eb69) list_medium_line_x3_t4_g4_t3

0x1594,	// (0x0007eb7e) list_medium_line_x3_t4_g4_t4_ParamLimits

0x1594,	// (0x0007eb7e) list_medium_line_x3_t4_g4_t4

0x0003,

0xfd0b,	// (0x0008d2f5) list_medium_line_x3_t4_g4_t_ParamLimits

0xfd0b,	// (0x0008d2f5) list_medium_line_x3_t4_g4_t

0x15b1,	// (0x0007eb9b) list_single_dyc_row_text_pane_t1_ParamLimits

0x15b1,	// (0x0007eb9b) list_single_dyc_row_text_pane_t1

0x15f4,	// (0x0007ebde) list_single_dyc_row_text_pane_t2_ParamLimits

0x15f4,	// (0x0007ebde) list_single_dyc_row_text_pane_t2

0x166a,	// (0x0007ec54) list_single_dyc_row_text_pane_t3_ParamLimits

0x166a,	// (0x0007ec54) list_single_dyc_row_text_pane_t3

0x0005,

0xfd14,	// (0x0008d2fe) list_single_dyc_row_text_pane_t_ParamLimits

0xfd14,	// (0x0008d2fe) list_single_dyc_row_text_pane_t

0x1749,	// (0x0007ed33) list_single_dyc_row_pane_g1_ParamLimits

0x1749,	// (0x0007ed33) list_single_dyc_row_pane_g1

0x1755,	// (0x0007ed3f) list_single_dyc_row_pane_g2_ParamLimits

0x1755,	// (0x0007ed3f) list_single_dyc_row_pane_g2

0x1761,	// (0x0007ed4b) list_single_dyc_row_pane_g3_ParamLimits

0x1761,	// (0x0007ed4b) list_single_dyc_row_pane_g3

0x176d,	// (0x0007ed57) list_single_dyc_row_pane_g4_ParamLimits

0x176d,	// (0x0007ed57) list_single_dyc_row_pane_g4

0x0003,

0xfd21,	// (0x0008d30b) list_single_dyc_row_pane_g_ParamLimits

0xfd21,	// (0x0008d30b) list_single_dyc_row_pane_g

0x1779,	// (0x0007ed63) list_single_dyc_row_text_pane_ParamLimits

0x1779,	// (0x0007ed63) list_single_dyc_row_text_pane

0xa17a,	// (0x00087764) bg_sp_fs_scroll_pane

0xe7ef,	// (0x0008bdd9) thumb_sp_fs_scroll_pane

0x0f99,	// (0x0007e583) list_medium_line_g1_ParamLimits

0x0f99,	// (0x0007e583) list_medium_line_g1

0x1798,	// (0x0007ed82) list_medium_line_t1_ParamLimits

0x1798,	// (0x0007ed82) list_medium_line_t1

0x0b60,	// (0x0007e14a) list_medium_line_x2_g1_ParamLimits

0x0b60,	// (0x0007e14a) list_medium_line_x2_g1

0x318b,	// (0x00080775) list_medium_line_x2_g2_ParamLimits

0x318b,	// (0x00080775) list_medium_line_x2_g2

0x0001,

0xfd2a,	// (0x0008d314) list_medium_line_x2_g_ParamLimits

0xfd2a,	// (0x0008d314) list_medium_line_x2_g

0x17ad,	// (0x0007ed97) list_medium_line_x2_t1_ParamLimits

0x17ad,	// (0x0007ed97) list_medium_line_x2_t1

0x0b60,	// (0x0007e14a) list_medium_line_x3_g1_ParamLimits

0x0b60,	// (0x0007e14a) list_medium_line_x3_g1

0x318b,	// (0x00080775) list_medium_line_x3_g2_ParamLimits

0x318b,	// (0x00080775) list_medium_line_x3_g2

0x0001,

0xfd2a,	// (0x0008d314) list_medium_line_x3_g_ParamLimits

0xfd2a,	// (0x0008d314) list_medium_line_x3_g

0x17ad,	// (0x0007ed97) list_medium_line_x3_t1_ParamLimits

0x17ad,	// (0x0007ed97) list_medium_line_x3_t1

0xe7f8,	// (0x0008bde2) thumb_sp_fs_scroll_pane_g1

0xe801,	// (0x0008bdeb) thumb_sp_fs_scroll_pane_g2

0xe80a,	// (0x0008bdf4) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfd2f,	// (0x0008d319) thumb_sp_fs_scroll_pane_g

0xe7f8,	// (0x0008bde2) bg_sp_fs_scroll_pane_g1

0xe801,	// (0x0008bdeb) bg_sp_fs_scroll_pane_g2

0xe80a,	// (0x0008bdf4) bg_sp_fs_scroll_pane_g3

0x0002,

0xfd2f,	// (0x0008d319) bg_sp_fs_scroll_pane_g

0x0b60,	// (0x0007e14a) list_medium_line_x2_t3_g4_g1_ParamLimits

0x0b60,	// (0x0007e14a) list_medium_line_x2_t3_g4_g1

0x3197,	// (0x00080781) list_medium_line_x2_t3_g4_g2_ParamLimits

0x3197,	// (0x00080781) list_medium_line_x2_t3_g4_g2

0x318b,	// (0x00080775) list_medium_line_x2_t3_g4_g3_ParamLimits

0x318b,	// (0x00080775) list_medium_line_x2_t3_g4_g3

0x0b6c,	// (0x0007e156) list_medium_line_x2_t3_g4_g4_ParamLimits

0x0b6c,	// (0x0007e156) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2c2,	// (0x0008c8ac) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2c2,	// (0x0008c8ac) list_medium_line_x2_t3_g4_g

0x17c3,	// (0x0007edad) list_medium_line_x2_t3_g4_t1_ParamLimits

0x17c3,	// (0x0007edad) list_medium_line_x2_t3_g4_t1

0x17d9,	// (0x0007edc3) list_medium_line_x2_t3_g4_t2_ParamLimits

0x17d9,	// (0x0007edc3) list_medium_line_x2_t3_g4_t2

0x0ba1,	// (0x0007e18b) list_medium_line_x2_t3_g4_t3_ParamLimits

0x0ba1,	// (0x0007e18b) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd36,	// (0x0008d320) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd36,	// (0x0008d320) list_medium_line_x2_t3_g4_t

0x0f99,	// (0x0007e583) list_medium_line_g2_g1_ParamLimits

0x0f99,	// (0x0007e583) list_medium_line_g2_g1

0x7f8a,	// (0x00085574) list_medium_line_g2_g2_ParamLimits

0x7f8a,	// (0x00085574) list_medium_line_g2_g2

0x0001,

0xf9ef,	// (0x0008cfd9) list_medium_line_g2_g_ParamLimits

0xf9ef,	// (0x0008cfd9) list_medium_line_g2_g

0x17f2,	// (0x0007eddc) list_medium_line_g2_t1_ParamLimits

0x17f2,	// (0x0007eddc) list_medium_line_g2_t1

0x0f99,	// (0x0007e583) list_medium_line_t3_g2_g1_ParamLimits

0x0f99,	// (0x0007e583) list_medium_line_t3_g2_g1

0x7f8a,	// (0x00085574) list_medium_line_t3_g2_g2_ParamLimits

0x7f8a,	// (0x00085574) list_medium_line_t3_g2_g2

0x0001,

0xf9ef,	// (0x0008cfd9) list_medium_line_t3_g2_g_ParamLimits

0xf9ef,	// (0x0008cfd9) list_medium_line_t3_g2_g

0x1807,	// (0x0007edf1) list_medium_line_t3_g2_t1_ParamLimits

0x1807,	// (0x0007edf1) list_medium_line_t3_g2_t1

0x1821,	// (0x0007ee0b) list_medium_line_t3_g2_t2_ParamLimits

0x1821,	// (0x0007ee0b) list_medium_line_t3_g2_t2

0x1837,	// (0x0007ee21) list_medium_line_t3_g2_t3_ParamLimits

0x1837,	// (0x0007ee21) list_medium_line_t3_g2_t3

0x0002,

0xfd3d,	// (0x0008d327) list_medium_line_t3_g2_t_ParamLimits

0xfd3d,	// (0x0008d327) list_medium_line_t3_g2_t

0x92da,	// (0x000868c4) list_medium_line_right_icon_g1

0x184e,	// (0x0007ee38) list_medium_line_right_icon_t1

0x0f99,	// (0x0007e583) list_medium_line_t2_g1_ParamLimits

0x0f99,	// (0x0007e583) list_medium_line_t2_g1

0x185c,	// (0x0007ee46) list_medium_line_t2_t1_ParamLimits

0x185c,	// (0x0007ee46) list_medium_line_t2_t1

0x1876,	// (0x0007ee60) list_medium_line_t2_t2_ParamLimits

0x1876,	// (0x0007ee60) list_medium_line_t2_t2

0x0001,

0xfd44,	// (0x0008d32e) list_medium_line_t2_t_ParamLimits

0xfd44,	// (0x0008d32e) list_medium_line_t2_t

0x0f99,	// (0x0007e583) list_medium_line_t3_g1_ParamLimits

0x0f99,	// (0x0007e583) list_medium_line_t3_g1

0x188b,	// (0x0007ee75) list_medium_line_t3_t1_ParamLimits

0x188b,	// (0x0007ee75) list_medium_line_t3_t1

0x18a2,	// (0x0007ee8c) list_medium_line_t3_t2_ParamLimits

0x18a2,	// (0x0007ee8c) list_medium_line_t3_t2

0x18b7,	// (0x0007eea1) list_medium_line_t3_t3_ParamLimits

0x18b7,	// (0x0007eea1) list_medium_line_t3_t3

0x0002,

0xfd49,	// (0x0008d333) list_medium_line_t3_t_ParamLimits

0xfd49,	// (0x0008d333) list_medium_line_t3_t

0x0f99,	// (0x0007e583) list_medium_line_g3_g1_ParamLimits

0x0f99,	// (0x0007e583) list_medium_line_g3_g1

0x9361,	// (0x0008694b) list_medium_line_g3_g2_ParamLimits

0x9361,	// (0x0008694b) list_medium_line_g3_g2

0x7f8a,	// (0x00085574) list_medium_line_g3_g3_ParamLimits

0x7f8a,	// (0x00085574) list_medium_line_g3_g3

0x0002,

0xfd50,	// (0x0008d33a) list_medium_line_g3_g_ParamLimits

0xfd50,	// (0x0008d33a) list_medium_line_g3_g

0x18c9,	// (0x0007eeb3) list_medium_line_g3_t1_ParamLimits

0x18c9,	// (0x0007eeb3) list_medium_line_g3_t1

0x0f99,	// (0x0007e583) list_medium_line_t2_g3_g1_ParamLimits

0x0f99,	// (0x0007e583) list_medium_line_t2_g3_g1

0x9361,	// (0x0008694b) list_medium_line_t2_g3_g2_ParamLimits

0x9361,	// (0x0008694b) list_medium_line_t2_g3_g2

0x7f8a,	// (0x00085574) list_medium_line_t2_g3_g3_ParamLimits

0x7f8a,	// (0x00085574) list_medium_line_t2_g3_g3

0x0002,

0xfd50,	// (0x0008d33a) list_medium_line_t2_g3_g_ParamLimits

0xfd50,	// (0x0008d33a) list_medium_line_t2_g3_g

0x18de,	// (0x0007eec8) list_medium_line_t2_g3_t1_ParamLimits

0x18de,	// (0x0007eec8) list_medium_line_t2_g3_t1

0x18f8,	// (0x0007eee2) list_medium_line_t2_g3_t2_ParamLimits

0x18f8,	// (0x0007eee2) list_medium_line_t2_g3_t2

0x0001,

0xfd57,	// (0x0008d341) list_medium_line_t2_g3_t_ParamLimits

0xfd57,	// (0x0008d341) list_medium_line_t2_g3_t

0x0f99,	// (0x0007e583) list_medium_line_t3_g3_g1_ParamLimits

0x0f99,	// (0x0007e583) list_medium_line_t3_g3_g1

0x9361,	// (0x0008694b) list_medium_line_t3_g3_g2_ParamLimits

0x9361,	// (0x0008694b) list_medium_line_t3_g3_g2

0x7f8a,	// (0x00085574) list_medium_line_t3_g3_g3_ParamLimits

0x7f8a,	// (0x00085574) list_medium_line_t3_g3_g3

0x0002,

0xfd50,	// (0x0008d33a) list_medium_line_t3_g3_g_ParamLimits

0xfd50,	// (0x0008d33a) list_medium_line_t3_g3_g

0x190e,	// (0x0007eef8) list_medium_line_t3_g3_t1_ParamLimits

0x190e,	// (0x0007eef8) list_medium_line_t3_g3_t1

0x1927,	// (0x0007ef11) list_medium_line_t3_g3_t2_ParamLimits

0x1927,	// (0x0007ef11) list_medium_line_t3_g3_t2

0x193d,	// (0x0007ef27) list_medium_line_t3_g3_t3_ParamLimits

0x193d,	// (0x0007ef27) list_medium_line_t3_g3_t3

0x0002,

0xfd5c,	// (0x0008d346) list_medium_line_t3_g3_t_ParamLimits

0xfd5c,	// (0x0008d346) list_medium_line_t3_g3_t

0x934d,	// (0x00086937) list_medium_line_right_iconx2_g1

0x92da,	// (0x000868c4) list_medium_line_right_iconx2_g2

0x0001,

0xfd63,	// (0x0008d34d) list_medium_line_right_iconx2_g

0x936d,	// (0x00086957) list_medium_line_right_iconx2_t1

0x934d,	// (0x00086937) list_medium_line_t2_right_iconx2_g1

0x92da,	// (0x000868c4) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfd63,	// (0x0008d34d) list_medium_line_t2_right_iconx2_g

0x1957,	// (0x0007ef41) list_medium_line_t2_right_iconx2_t1

0x1967,	// (0x0007ef51) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfd68,	// (0x0008d352) list_medium_line_t2_right_iconx2_t

0x1975,	// (0x0007ef5f) list_medium_line_x4_t4_t1

0x1983,	// (0x0007ef6d) list_medium_line_x4_t4_t2

0x1993,	// (0x0007ef7d) list_medium_line_x4_t4_t3

0x19a3,	// (0x0007ef8d) list_medium_line_x4_t4_t4

0x0003,

0xfd6d,	// (0x0008d357) list_medium_line_x4_t4_t

0x93a5,	// (0x0008698f) tport_appsw_pane_ParamLimits

0x93a5,	// (0x0008698f) tport_appsw_pane

0x93b3,	// (0x0008699d) tport_contact_pane_ParamLimits

0x93b3,	// (0x0008699d) tport_contact_pane

0x93c3,	// (0x000869ad) tport_listscroll_pane_ParamLimits

0x93c3,	// (0x000869ad) tport_listscroll_pane

0x93d3,	// (0x000869bd) cell_tport_appsw_pane_ParamLimits

0x93d3,	// (0x000869bd) cell_tport_appsw_pane

0xcf1b,	// (0x0008a505) tport_appsw_pane_g1_ParamLimits

0xcf1b,	// (0x0008a505) tport_appsw_pane_g1

0xe813,	// (0x0008bdfd) tport_contact_pane_g1

0xe81c,	// (0x0008be06) tport_contact_pane_t1

0xe82a,	// (0x0008be14) tport_contact_pane_t2

0x0001,

0xfd76,	// (0x0008d360) tport_contact_pane_t

0xe838,	// (0x0008be22) list_tport_pane

0xe841,	// (0x0008be2b) scroll_pane_cp_030

0x9408,	// (0x000869f2) cell_tport_appsw_pane_g1

0x9418,	// (0x00086a02) cell_tport_appsw_pane_t1

0x9426,	// (0x00086a10) grid_highlight_pane_cp019

0x942e,	// (0x00086a18) list_tport_double_graphic_pane_ParamLimits

0x942e,	// (0x00086a18) list_tport_double_graphic_pane

0xa8c0,	// (0x00087eaa) list_highlight_pane_cp023_ParamLimits

0xa8c0,	// (0x00087eaa) list_highlight_pane_cp023

0x943b,	// (0x00086a25) list_tport_double_graphic_pane_g1_ParamLimits

0x943b,	// (0x00086a25) list_tport_double_graphic_pane_g1

0x9448,	// (0x00086a32) list_tport_double_graphic_pane_t1_ParamLimits

0x9448,	// (0x00086a32) list_tport_double_graphic_pane_t1

0x945d,	// (0x00086a47) list_tport_double_graphic_pane_t2_ParamLimits

0x945d,	// (0x00086a47) list_tport_double_graphic_pane_t2

0x0001,

0xfd82,	// (0x0008d36c) list_tport_double_graphic_pane_t_ParamLimits

0xfd82,	// (0x0008d36c) list_tport_double_graphic_pane_t

0xa17a,	// (0x00087764) main_cale_note_pane

0x77bb,	// (0x00084da5) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x77bb,	// (0x00084da5) cell_vitu2_function_top_wide_pane_cp01

0x8f4d,	// (0x00086537) wait_bar_pane_cp05_ParamLimits

0xa8c0,	// (0x00087eaa) listscroll_cmail_pane

0xe852,	// (0x0008be3c) list_cmail_pane

0x9479,	// (0x00086a63) list_cmail_body_pane

0x9492,	// (0x00086a7c) list_single_cmail_header_caption_pane

0x94b3,	// (0x00086a9d) list_single_cmail_header_detail_pane_ParamLimits

0x94b3,	// (0x00086a9d) list_single_cmail_header_detail_pane

0x94e4,	// (0x00086ace) list_single_cmail_header_caption_pane_t1

0x19b3,	// (0x0007ef9d) list_single_cmail_header_detail_pane_g1_ParamLimits

0x19b3,	// (0x0007ef9d) list_single_cmail_header_detail_pane_g1

0x94f4,	// (0x00086ade) list_single_cmail_header_detail_pane_g2_ParamLimits

0x94f4,	// (0x00086ade) list_single_cmail_header_detail_pane_g2

0x0002,

0xfd87,	// (0x0008d371) list_single_cmail_header_detail_pane_g_ParamLimits

0xfd87,	// (0x0008d371) list_single_cmail_header_detail_pane_g

0x19cb,	// (0x0007efb5) list_single_cmail_header_detail_pane_t1_ParamLimits

0x19cb,	// (0x0007efb5) list_single_cmail_header_detail_pane_t1

0x1a3d,	// (0x0007f027) list_single_cmail_header_editor_pane_bg_ParamLimits

0x1a3d,	// (0x0007f027) list_single_cmail_header_editor_pane_bg

0xe300,	// (0x0008b8ea) list_cmail_body_pane_g1

0xe87f,	// (0x0008be69) list_cmail_body_pane_t1

0xd694,	// (0x0008ac7e) list_single_cmail_header_editor_pane_bg_g1

0xad3f,	// (0x00088329) list_single_cmail_header_editor_pane_bg_g1_copy1

0xd6a4,	// (0x0008ac8e) list_single_cmail_header_editor_pane_bg_g1_copy2

0xd69c,	// (0x0008ac86) list_single_cmail_header_editor_pane_bg_g1_copy3

0xd8c8,	// (0x0008aeb2) list_single_cmail_header_editor_pane_bg_g1_copy4

0xd6c4,	// (0x0008acae) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xd6b4,	// (0x0008ac9e) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xd6bc,	// (0x0008aca6) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xad1f,	// (0x00088309) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0x9500,	// (0x00086aea) calenote_gesture_pane_ParamLimits

0x9500,	// (0x00086aea) calenote_gesture_pane

0x951a,	// (0x00086b04) calenote_window_pane_ParamLimits

0x951a,	// (0x00086b04) calenote_window_pane

0xe88d,	// (0x0008be77) popup_note_window_cp01

0x9532,	// (0x00086b1c) calenote_swipe_1_pane_ParamLimits

0x9532,	// (0x00086b1c) calenote_swipe_1_pane

0x92c0,	// (0x000868aa) calenote_swipe_2_pane_ParamLimits

0x92c0,	// (0x000868aa) calenote_swipe_2_pane

0xe69a,	// (0x0008bc84) calenote_swipe_1_pane_g1_ParamLimits

0xe69a,	// (0x0008bc84) calenote_swipe_1_pane_g1

0xe6a7,	// (0x0008bc91) calenote_swipe_1_pane_g2_ParamLimits

0xe6a7,	// (0x0008bc91) calenote_swipe_1_pane_g2

0x0001,

0xfcab,	// (0x0008d295) calenote_swipe_1_pane_g_ParamLimits

0xfcab,	// (0x0008d295) calenote_swipe_1_pane_g

0xe89f,	// (0x0008be89) calenote_swipe_1_pane_t1_ParamLimits

0xe89f,	// (0x0008be89) calenote_swipe_1_pane_t1

0xe69a,	// (0x0008bc84) calenote_swipe_2_pane_g1_ParamLimits

0xe69a,	// (0x0008bc84) calenote_swipe_2_pane_g1

0xe8be,	// (0x0008bea8) calenote_swipe_2_pane_g2_ParamLimits

0xe8be,	// (0x0008bea8) calenote_swipe_2_pane_g2

0x0001,

0xfd93,	// (0x0008d37d) calenote_swipe_2_pane_g_ParamLimits

0xfd93,	// (0x0008d37d) calenote_swipe_2_pane_g

0xe8ca,	// (0x0008beb4) calenote_swipe_2_pane_t1_ParamLimits

0xe8ca,	// (0x0008beb4) calenote_swipe_2_pane_t1

0xa17a,	// (0x00087764) main_mup_navstr_pane

0x64f2,	// (0x00083adc) main_mup3_pane_t7_ParamLimits

0x64f2,	// (0x00083adc) main_mup3_pane_t7

0x6ef5,	// (0x000844df) main_mp4_pane_g6_ParamLimits

0x6ef5,	// (0x000844df) main_mp4_pane_g6

0x7265,	// (0x0008484f) main_image3_pane_t4_ParamLimits

0x7265,	// (0x0008484f) main_image3_pane_t4

0x9545,	// (0x00086b2f) popup_navstr_preview_pane_ParamLimits

0x9545,	// (0x00086b2f) popup_navstr_preview_pane

0x9551,	// (0x00086b3b) scroll_navstr_pane_ParamLimits

0x9551,	// (0x00086b3b) scroll_navstr_pane

0xa17a,	// (0x00087764) bg_popup_preview_window_pane_cp04

0xe8f1,	// (0x0008bedb) popup_navstr_preview_pane_t1

0x955d,	// (0x00086b47) scroll_navstr_pane_g1_ParamLimits

0x955d,	// (0x00086b47) scroll_navstr_pane_g1

0x956a,	// (0x00086b54) scroll_navstr_pane_t1_ParamLimits

0x956a,	// (0x00086b54) scroll_navstr_pane_t1

0xe896,	// (0x0008be80) bg_button_pane_cp014

0xe896,	// (0x0008be80) bg_button_pane_cp030

0x1305,	// (0x0007e8ef) list_double_fisheye_pane_g4_ParamLimits

0x1305,	// (0x0007e8ef) list_double_fisheye_pane_g4

0x1311,	// (0x0007e8fb) list_double_fisheye_pane_g5_ParamLimits

0x1311,	// (0x0007e8fb) list_double_fisheye_pane_g5

0xe85a,	// (0x0008be44) sp_fs_scroll_pane_cp03

0xe563,	// (0x0008bb4d) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xe772,	// (0x0008bd5c) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfcc8,	// (0x0008d2b2) main_sp_fs_ctrlbar_pane_g_ParamLimits

0xe77e,	// (0x0008bd68) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0x946f,	// (0x00086a59) sp_fs_scroll_pane_cp02

0xaa42,	// (0x0008802c) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0xaa42,	// (0x0008802c) popup_sp_fs_calendar_preview_list_single_pane

0xa17a,	// (0x00087764) main_cam6_pano_pane

0xa8c0,	// (0x00087eaa) main_mup3_pane_ParamLimits

0xa17a,	// (0x00087764) main_phacti_pane

0x8e20,	// (0x0008640a) bg_button_pane_cp11

0x8e38,	// (0x00086422) main_mobtv_info_pane_g2_ParamLimits

0x8e38,	// (0x00086422) main_mobtv_info_pane_g2

0x0001,

0xfc28,	// (0x0008d212) main_mobtv_info_pane_g_ParamLimits

0xfc28,	// (0x0008d212) main_mobtv_info_pane_g

0x8fea,	// (0x000865d4) sc_clock_pane_t5_ParamLimits

0x8fea,	// (0x000865d4) sc_clock_pane_t5

0x9099,	// (0x00086683) main_radioblah_pane_g1_ParamLimits

0xe5e6,	// (0x0008bbd0) main_radioblah_pane_t3_ParamLimits

0xe5e6,	// (0x0008bbd0) main_radioblah_pane_t3

0xe5fe,	// (0x0008bbe8) main_radioblah_pane_t4_ParamLimits

0xe5fe,	// (0x0008bbe8) main_radioblah_pane_t4

0x90b7,	// (0x000866a1) main_radioblah_text_pane_ParamLimits

0x90b7,	// (0x000866a1) main_radioblah_text_pane

0x90c4,	// (0x000866ae) main_radioblah_info_pane_g1_ParamLimits

0x915d,	// (0x00086747) main_radioblah_info_pane_t4_ParamLimits

0x915d,	// (0x00086747) main_radioblah_info_pane_t4

0xa8c0,	// (0x00087eaa) main_sp_fs_calendar_pane

0x957c,	// (0x00086b66) main_phacti_pane_g1

0x9584,	// (0x00086b6e) phacti_note_pane_ParamLimits

0x9584,	// (0x00086b6e) phacti_note_pane

0xe908,	// (0x0008bef2) phacti_term_pane_ParamLimits

0xe908,	// (0x0008bef2) phacti_term_pane

0xe91d,	// (0x0008bf07) phacti_note_pane_t1_ParamLimits

0xe91d,	// (0x0008bf07) phacti_note_pane_t1

0x1a54,	// (0x0007f03e) phacti_term_pane_g1

0x1a5c,	// (0x0007f046) phacti_term_pane_t1_ParamLimits

0x1a5c,	// (0x0007f046) phacti_term_pane_t1

0xe934,	// (0x0008bf1e) popup_sp_fs_calendar_preview_list_single_pane_g1

0xe93c,	// (0x0008bf26) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfd9d,	// (0x0008d387) popup_sp_fs_calendar_preview_list_single_pane_g

0xe944,	// (0x0008bf2e) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xe944,	// (0x0008bf2e) popup_sp_fs_calendar_preview_list_single_pane_t1

0xe95a,	// (0x0008bf44) aid_popup_sp_fs_bg_corner_pane

0xcc86,	// (0x0008a270) popup_sp_fs_calendar_preview_bg_pane_g1

0xa17a,	// (0x00087764) popup_sp_fs_calendar_preview_bg_pane

0xe962,	// (0x0008bf4c) popup_sp_fs_calendar_preview_list_pane

0xc835,	// (0x00089e1f) bg_main_sp_fs_cale_pane_ParamLimits

0xc835,	// (0x00089e1f) bg_main_sp_fs_cale_pane

0x1a8f,	// (0x0007f079) listscroll_cale_mrui_pane_ParamLimits

0x1a8f,	// (0x0007f079) listscroll_cale_mrui_pane

0x1aa4,	// (0x0007f08e) listscroll_sp_fs_schedule_track_pane

0x1aad,	// (0x0007f097) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0x1aad,	// (0x0007f097) main_sp_fs_ctrlbar_pane_cp01

0xe96a,	// (0x0008bf54) main_sp_fs_ribbon_pane

0x1ac0,	// (0x0007f0aa) popup_sp_fs_cale_preview_window

0x95e3,	// (0x00086bcd) list_single_sp_fs_schedule_track_pane_ParamLimits

0x95e3,	// (0x00086bcd) list_single_sp_fs_schedule_track_pane

0x20ca,	// (0x0007f6b4) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0x20ca,	// (0x0007f6b4) bg_sp_fs_highlight_list_pane_cp03

0x95f8,	// (0x00086be2) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0x95f8,	// (0x00086be2) list_single_sp_fs_schedule_track_pane_g1

0x9604,	// (0x00086bee) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0x9604,	// (0x00086bee) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfda2,	// (0x0008d38c) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfda2,	// (0x0008d38c) list_single_sp_fs_schedule_track_pane_g

0x9610,	// (0x00086bfa) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0x9610,	// (0x00086bfa) list_single_sp_fs_schedule_track_pane_t1

0x962e,	// (0x00086c18) sp_fs_schedule_track_pane_ParamLimits

0x962e,	// (0x00086c18) sp_fs_schedule_track_pane

0xe972,	// (0x0008bf5c) sp_fs_schedule_track_pane_g1

0xe97a,	// (0x0008bf64) sp_fs_schedule_track_pane_g2

0xe982,	// (0x0008bf6c) sp_fs_schedule_track_pane_g3

0xe98a,	// (0x0008bf74) sp_fs_schedule_track_pane_g4

0xe992,	// (0x0008bf7c) sp_fs_schedule_track_pane_g5

0x0004,

0xfda7,	// (0x0008d391) sp_fs_schedule_track_pane_g

0xd694,	// (0x0008ac7e) bg_sp_fs_schedule_viewer_highlight_g1

0xad3f,	// (0x00088329) bg_sp_fs_schedule_viewer_highlight_g2

0xd69c,	// (0x0008ac86) bg_sp_fs_schedule_viewer_highlight_g3

0xd6a4,	// (0x0008ac8e) bg_sp_fs_schedule_viewer_highlight_g4

0xd8c8,	// (0x0008aeb2) bg_sp_fs_schedule_viewer_highlight_g5

0xd6b4,	// (0x0008ac9e) bg_sp_fs_schedule_viewer_highlight_g6

0xd6bc,	// (0x0008aca6) bg_sp_fs_schedule_viewer_highlight_g7

0xd6c4,	// (0x0008acae) bg_sp_fs_schedule_viewer_highlight_g8

0xad1f,	// (0x00088309) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfdb2,	// (0x0008d39c) bg_sp_fs_schedule_viewer_highlight_g

0xa17a,	// (0x00087764) bg_main_sp_fs_ribbon_pane

0x9640,	// (0x00086c2a) main_sp_fs_ribbon_pane_g1

0xe99a,	// (0x0008bf84) main_sp_fs_ribbon_pane_t1

0x9649,	// (0x00086c33) main_sp_fs_ribbon_pane_t2

0xe9a9,	// (0x0008bf93) main_sp_fs_ribbon_pane_t3

0x0002,

0xfdc5,	// (0x0008d3af) main_sp_fs_ribbon_pane_t

0xe9b8,	// (0x0008bfa2) main_sp_fs_ribbon_scheduler_pane

0xe9c0,	// (0x0008bfaa) bg_main_sp_fs_ribbon_pane_g1

0xe9c9,	// (0x0008bfb3) bg_main_sp_fs_ribbon_pane_g2

0xe9d2,	// (0x0008bfbc) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfdcc,	// (0x0008d3b6) bg_main_sp_fs_ribbon_pane_g

0xe9da,	// (0x0008bfc4) main_sp_fs_ribbon_scheduler_pane_g1

0xe9e3,	// (0x0008bfcd) main_sp_fs_ribbon_scheduler_pane_g2

0xe9ec,	// (0x0008bfd6) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfdd3,	// (0x0008d3bd) main_sp_fs_ribbon_scheduler_pane_g

0xe9f5,	// (0x0008bfdf) list_cale_mrui_pane

0x9658,	// (0x00086c42) sp_fs_scroll_pane_cp07_ParamLimits

0x9658,	// (0x00086c42) sp_fs_scroll_pane_cp07

0x9674,	// (0x00086c5e) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0x9674,	// (0x00086c5e) bg_sp_fs_schedule_viewer_highlight

0xea02,	// (0x0008bfec) list_single_sp_fs_schedule_track_pane_cp01

0xea0a,	// (0x0008bff4) list_sp_fs_schedule_track_pane

0xea12,	// (0x0008bffc) sp_fs_scroll_pane_cp06_ParamLimits

0xea12,	// (0x0008bffc) sp_fs_scroll_pane_cp06

0xcc86,	// (0x0008a270) bgmain_sp_fs_calendar_pane_g1

0x1ad2,	// (0x0007f0bc) list_single_cale_mrui_pane_ParamLimits

0x1ad2,	// (0x0007f0bc) list_single_cale_mrui_pane

0x1ae7,	// (0x0007f0d1) list_single_cale_mrui_row_pane_ParamLimits

0x1ae7,	// (0x0007f0d1) list_single_cale_mrui_row_pane

0x1afd,	// (0x0007f0e7) list_single_cale_mrui_row_pane_g1_ParamLimits

0x1afd,	// (0x0007f0e7) list_single_cale_mrui_row_pane_g1

0x1b29,	// (0x0007f113) list_single_cale_mrui_row_pane_t1_ParamLimits

0x1b29,	// (0x0007f113) list_single_cale_mrui_row_pane_t1

0x1b3b,	// (0x0007f125) list_single_cale_mrui_row_pane_t2_ParamLimits

0x1b3b,	// (0x0007f125) list_single_cale_mrui_row_pane_t2

0x1ba1,	// (0x0007f18b) list_single_cale_mrui_row_pane_t3_ParamLimits

0x1ba1,	// (0x0007f18b) list_single_cale_mrui_row_pane_t3

0x1bd0,	// (0x0007f1ba) list_single_cale_mrui_row_pane_t4_ParamLimits

0x1bd0,	// (0x0007f1ba) list_single_cale_mrui_row_pane_t4

0x0003,

0xfde1,	// (0x0008d3cb) list_single_cale_mrui_row_pane_t_ParamLimits

0xfde1,	// (0x0008d3cb) list_single_cale_mrui_row_pane_t

0x1bff,	// (0x0007f1e9) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x1bff,	// (0x0007f1e9) list_single_cmail_header_editor_pane_bg_cp01

0x1c23,	// (0x0007f20d) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x1c23,	// (0x0007f20d) list_single_cmail_header_editor_pane_bg_cp02

0x968d,	// (0x00086c77) main_radioblah_text_pane_t1_ParamLimits

0x968d,	// (0x00086c77) main_radioblah_text_pane_t1

0xea31,	// (0x0008c01b) cam6_indi_pane_cp01

0xea39,	// (0x0008c023) cam6_mode_pane_cp01

0xea41,	// (0x0008c02b) cam6_pano_pane

0xea4a,	// (0x0008c034) cam6_zoom_pane_cp01

0xea54,	// (0x0008c03e) cam6_pano_image_pane

0xea5d,	// (0x0008c047) cam6_pano_pane_g1

0xe300,	// (0x0008b8ea) cam6_pano_pane_g2

0xea66,	// (0x0008c050) cam6_pano_pane_g3

0xea6f,	// (0x0008c059) cam6_pano_pane_g4

0xd228,	// (0x0008a812) cam6_pano_pane_g5

0xea78,	// (0x0008c062) cam6_pano_pane_g6

0xea80,	// (0x0008c06a) cam6_pano_pane_g7

0xea88,	// (0x0008c072) cam6_pano_pane_g8

0xea91,	// (0x0008c07b) cam6_pano_pane_g9

0x0008,

0xfdea,	// (0x0008d3d4) cam6_pano_pane_g

0xa17a,	// (0x00087764) main_browser_tag_pane

0xe8e9,	// (0x0008bed3) grid_navstr_albumart_pane

0xea9c,	// (0x0008c086) cell_navstr_albumart_pane_ParamLimits

0xea9c,	// (0x0008c086) cell_navstr_albumart_pane

0xeabb,	// (0x0008c0a5) cell_navstr_albumart_pane_g1

0xc642,	// (0x00089c2c) cell_navstr_albumart_pane_g2

0xc652,	// (0x00089c3c) cell_navstr_albumart_pane_g3

0xc64a,	// (0x00089c34) cell_navstr_albumart_pane_g4

0x0003,

0xfdfd,	// (0x0008d3e7) cell_navstr_albumart_pane_g

0x96a7,	// (0x00086c91) bt_list_pane_ParamLimits

0x96a7,	// (0x00086c91) bt_list_pane

0x96c0,	// (0x00086caa) bt_list_pane_t1

0x96cf,	// (0x00086cb9) bt_list_pane_t2

0x0001,

0xfe06,	// (0x0008d3f0) bt_list_pane_t

0xa17a,	// (0x00087764) main_cale_prevew_pane

0x96de,	// (0x00086cc8) popup_cale_preview_window_ParamLimits

0x96de,	// (0x00086cc8) popup_cale_preview_window

0xa8c0,	// (0x00087eaa) bg_popup_preview_window_pane_cp05_ParamLimits

0xa8c0,	// (0x00087eaa) bg_popup_preview_window_pane_cp05

0xeac3,	// (0x0008c0ad) list_cale_preview_pane_ParamLimits

0xeac3,	// (0x0008c0ad) list_cale_preview_pane

0x96f9,	// (0x00086ce3) list_double_cale_preview_pane_ParamLimits

0x96f9,	// (0x00086ce3) list_double_cale_preview_pane

0x970d,	// (0x00086cf7) list_single_cale_preview_pane_ParamLimits

0x970d,	// (0x00086cf7) list_single_cale_preview_pane

0x9725,	// (0x00086d0f) list_single_cale_preview_pane_g1

0x972d,	// (0x00086d17) list_single_cale_preview_pane_t1_ParamLimits

0x972d,	// (0x00086d17) list_single_cale_preview_pane_t1

0x9742,	// (0x00086d2c) list_double_cale_preview_pane_g1

0x974a,	// (0x00086d34) list_double_cale_preview_pane_t1_ParamLimits

0x974a,	// (0x00086d34) list_double_cale_preview_pane_t1

0x975f,	// (0x00086d49) list_double_cale_preview_pane_t2_ParamLimits

0x975f,	// (0x00086d49) list_double_cale_preview_pane_t2

0x0001,

0xfe0b,	// (0x0008d3f5) list_double_cale_preview_pane_t_ParamLimits

0xfe0b,	// (0x0008d3f5) list_double_cale_preview_pane_t

0xa17a,	// (0x00087764) main_ezdial_pane

0xa8c0,	// (0x00087eaa) main_sp_fs_email_pane_ParamLimits

0x92e2,	// (0x000868cc) cmail_ddmenu_btn01_pane_ParamLimits

0x92e2,	// (0x000868cc) cmail_ddmenu_btn01_pane

0x92ff,	// (0x000868e9) cmail_ddmenu_btn02_pane_ParamLimits

0x92ff,	// (0x000868e9) cmail_ddmenu_btn02_pane

0x931d,	// (0x00086907) cmail_ddmenu_btn03_pane_ParamLimits

0x931d,	// (0x00086907) cmail_ddmenu_btn03_pane

0x13c3,	// (0x0007e9ad) main_sp_fs_ctrlbar_pane_ParamLimits

0x13dd,	// (0x0007e9c7) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0x9479,	// (0x00086a63) list_cmail_body_pane_ParamLimits

0xe869,	// (0x0008be53) bg_button_pane_cp12

0xe872,	// (0x0008be5c) list_single_cmail_header_detail_pane_g3_ParamLimits

0xe872,	// (0x0008be5c) list_single_cmail_header_detail_pane_g3

0x1a19,	// (0x0007f003) list_single_cmail_header_detail_pane_t2_ParamLimits

0x1a19,	// (0x0007f003) list_single_cmail_header_detail_pane_t2

0x0001,

0xfd8e,	// (0x0008d378) list_single_cmail_header_detail_pane_t_ParamLimits

0xfd8e,	// (0x0008d378) list_single_cmail_header_detail_pane_t

0x1a71,	// (0x0007f05b) phacti_term_pane_t2_ParamLimits

0x1a71,	// (0x0007f05b) phacti_term_pane_t2

0x0001,

0xfd98,	// (0x0008d382) phacti_term_pane_t_ParamLimits

0xfd98,	// (0x0008d382) phacti_term_pane_t

0xeacf,	// (0x0008c0b9) aid_size_list_single_double

0x9777,	// (0x00086d61) popup_ezdial_listscroll_window

0x9799,	// (0x00086d83) popup_number_entry_window_cp01

0xaae2,	// (0x000880cc) bg_popup_call_pane_cp09

0xeadb,	// (0x0008c0c5) ezdial_list_pane

0xeae3,	// (0x0008c0cd) scroll_pane_cp23

0xca65,	// (0x0008a04f) bg_button_pane_cp028_ParamLimits

0xca65,	// (0x0008a04f) bg_button_pane_cp028

0x97a7,	// (0x00086d91) cmail_ddmenu_btn01_pane_g1_ParamLimits

0x97a7,	// (0x00086d91) cmail_ddmenu_btn01_pane_g1

0x97b9,	// (0x00086da3) cmail_ddmenu_btn01_pane_g2_ParamLimits

0x97b9,	// (0x00086da3) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfe10,	// (0x0008d3fa) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfe10,	// (0x0008d3fa) cmail_ddmenu_btn01_pane_g

0xeaeb,	// (0x0008c0d5) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xeaeb,	// (0x0008c0d5) cmail_ddmenu_btn01_pane_t1

0xc835,	// (0x00089e1f) bg_button_pane_cp029_ParamLimits

0xc835,	// (0x00089e1f) bg_button_pane_cp029

0x97c5,	// (0x00086daf) cmail_ddmenu_btn02_pane_g1_ParamLimits

0x97c5,	// (0x00086daf) cmail_ddmenu_btn02_pane_g1

0x97dd,	// (0x00086dc7) cmail_ddmenu_btn02_pane_t1_ParamLimits

0x97dd,	// (0x00086dc7) cmail_ddmenu_btn02_pane_t1

0x20ca,	// (0x0007f6b4) bg_button_pane_cp031_ParamLimits

0x20ca,	// (0x0007f6b4) bg_button_pane_cp031

0x97c5,	// (0x00086daf) cmail_ddmenu_btn03_pane_g1_ParamLimits

0x97c5,	// (0x00086daf) cmail_ddmenu_btn03_pane_g1

0x97dd,	// (0x00086dc7) cmail_ddmenu_btn03_pane_t1_ParamLimits

0x97dd,	// (0x00086dc7) cmail_ddmenu_btn03_pane_t1

0x710e,	// (0x000846f8) cell_dialer2_keypad_pane_t1_ParamLimits

0x7128,	// (0x00084712) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x7128,	// (0x00084712) cell_dialer2_keypad_pane_t1_copy1

0x8c91,	// (0x0008627b) ncimui_group_button_pane

0xa8c0,	// (0x00087eaa) main_sp_fs_calendar_pane_ParamLimits

0x9492,	// (0x00086a7c) list_single_cmail_header_caption_pane_ParamLimits

0x1a86,	// (0x0007f070) aid_recal_txt_sm_pane

0xa17a,	// (0x00087764) mian_recal_day_pane

0x1ac0,	// (0x0007f0aa) popup_sp_fs_cale_preview_window_ParamLimits

0xeb01,	// (0x0008c0eb) list_recal_day_pane

0x1c5b,	// (0x0007f245) list_single_recal_day_pane_ParamLimits

0x1c5b,	// (0x0007f245) list_single_recal_day_pane

0xeb28,	// (0x0008c112) list_single_recal_day_pane_g1_ParamLimits

0xeb28,	// (0x0008c112) list_single_recal_day_pane_g1

0x1c6d,	// (0x0007f257) list_single_recal_day_pane_g2_ParamLimits

0x1c6d,	// (0x0007f257) list_single_recal_day_pane_g2

0x1c79,	// (0x0007f263) list_single_recal_day_pane_g3_ParamLimits

0x1c79,	// (0x0007f263) list_single_recal_day_pane_g3

0x1c85,	// (0x0007f26f) list_single_recal_day_pane_g4_ParamLimits

0x1c85,	// (0x0007f26f) list_single_recal_day_pane_g4

0x1c93,	// (0x0007f27d) list_single_recal_day_pane_g5_ParamLimits

0x1c93,	// (0x0007f27d) list_single_recal_day_pane_g5

0x1ca9,	// (0x0007f293) list_single_recal_day_pane_g6_ParamLimits

0x1ca9,	// (0x0007f293) list_single_recal_day_pane_g6

0x0004,

0xfe1f,	// (0x0008d409) list_single_recal_day_pane_g_ParamLimits

0xfe1f,	// (0x0008d409) list_single_recal_day_pane_g

0x1cbd,	// (0x0007f2a7) list_single_recal_day_pane_t1

0x1ccf,	// (0x0007f2b9) list_single_recal_day_pane_t2

0x0001,

0xfe2a,	// (0x0008d414) list_single_recal_day_pane_t

0x9801,	// (0x00086deb) ncimui_query_button_pane_ParamLimits

0x9801,	// (0x00086deb) ncimui_query_button_pane

0x9811,	// (0x00086dfb) ncimui_query_button_pane_t1_ParamLimits

0x9811,	// (0x00086dfb) ncimui_query_button_pane_t1

0xeb34,	// (0x0008c11e) ncimui_query_button_pane_t2_ParamLimits

0xeb34,	// (0x0008c11e) ncimui_query_button_pane_t2

0x0001,

0xfe2f,	// (0x0008d419) ncimui_query_button_pane_t_ParamLimits

0xfe2f,	// (0x0008d419) ncimui_query_button_pane_t

0x9824,	// (0x00086e0e) query_button_pane_ParamLimits

0x9824,	// (0x00086e0e) query_button_pane

0xa17a,	// (0x00087764) bg_button_pane_cp0028

0xeb47,	// (0x0008c131) query_button_pane_t1

0x54f3,	// (0x00082add) main_tport_pane_ParamLimits

0x937b,	// (0x00086965) bg_popup_window_pane_cp01_ParamLimits

0x937b,	// (0x00086965) bg_popup_window_pane_cp01

0x9389,	// (0x00086973) heading_pane_cp08_ParamLimits

0x9389,	// (0x00086973) heading_pane_cp08

0x9397,	// (0x00086981) heading_pane_cp07_ParamLimits

0x9397,	// (0x00086981) heading_pane_cp07

0x9408,	// (0x000869f2) cell_tport_appsw_pane_g2

0x0002,

0xfd7b,	// (0x0008d365) cell_tport_appsw_pane_g

0x0d73,	// (0x0007e35d) input_candi_list_open_g1

0xaef3,	// (0x000884dd) list_cale_time_pane_g6_ParamLimits

0xaef3,	// (0x000884dd) list_cale_time_pane_g6

0x5f7e,	// (0x00083568) aid_size_touch_calib_1_ParamLimits

0x5f7e,	// (0x00083568) aid_size_touch_calib_1

0x5f8a,	// (0x00083574) aid_size_touch_calib_2_ParamLimits

0x5f8a,	// (0x00083574) aid_size_touch_calib_2

0x5f98,	// (0x00083582) aid_size_touch_calib_3_ParamLimits

0x5f98,	// (0x00083582) aid_size_touch_calib_3

0x5fa8,	// (0x00083592) aid_size_touch_calib_4_ParamLimits

0x5fa8,	// (0x00083592) aid_size_touch_calib_4

0x5fb6,	// (0x000835a0) main_touch_calib_button_group_pane_ParamLimits

0x5fb6,	// (0x000835a0) main_touch_calib_button_group_pane

0x5fc4,	// (0x000835ae) main_touch_calib_pane_g1_ParamLimits

0x5fd0,	// (0x000835ba) main_touch_calib_pane_g2_ParamLimits

0x5fdc,	// (0x000835c6) main_touch_calib_pane_g3_ParamLimits

0x5fe8,	// (0x000835d2) main_touch_calib_pane_g4_ParamLimits

0xf751,	// (0x0008cd3b) main_touch_calib_pane_g_ParamLimits

0x5ff4,	// (0x000835de) main_touch_calib_pane_t1_ParamLimits

0x600b,	// (0x000835f5) main_touch_calib_pane_t2_ParamLimits

0x6024,	// (0x0008360e) main_touch_calib_pane_t3_ParamLimits

0x603a,	// (0x00083624) main_touch_calib_pane_t4_ParamLimits

0x6050,	// (0x0008363a) main_touch_calib_pane_t5_ParamLimits

0xf75a,	// (0x0008cd44) main_touch_calib_pane_t_ParamLimits

0xcfb6,	// (0x0008a5a0) list_single_fp_cale_pane_g3_ParamLimits

0xcfb6,	// (0x0008a5a0) list_single_fp_cale_pane_g3

0xa8c0,	// (0x00087eaa) bg_button_pane_cp012_ParamLimits

0xa8c0,	// (0x00087eaa) bg_vkb2_func_pane_cp03_ParamLimits

0x7f1c,	// (0x00085506) cell_vitu2_function_top_pane_g1_ParamLimits

0xa8c0,	// (0x00087eaa) bg_vkb2_func_pane_cp04_ParamLimits

0x8c17,	// (0x00086201) main_ncimui_button_group_pane_ParamLimits

0x8c17,	// (0x00086201) main_ncimui_button_group_pane

0x8c7f,	// (0x00086269) main_ncimui_pane_t3_ParamLimits

0x8c7f,	// (0x00086269) main_ncimui_pane_t3

0xe8ff,	// (0x0008bee9) phacti_button_group_pane

0xeacf,	// (0x0008c0b9) aid_size_list_single_double_ParamLimits

0x9777,	// (0x00086d61) popup_ezdial_listscroll_window_ParamLimits

0x9799,	// (0x00086d83) popup_number_entry_window_cp01_ParamLimits

0x9831,	// (0x00086e1b) phacti_button_pane_ParamLimits

0x9831,	// (0x00086e1b) phacti_button_pane

0xa17a,	// (0x00087764) bg_button_pane_cp14

0xeb55,	// (0x0008c13f) phacti_button_pane_t1

0x9842,	// (0x00086e2c) main_touch_calib_button_pane_ParamLimits

0x9842,	// (0x00086e2c) main_touch_calib_button_pane

0xa92c,	// (0x00087f16) bg_button_pane_cp18_ParamLimits

0xa92c,	// (0x00087f16) bg_button_pane_cp18

0xeb63,	// (0x0008c14d) main_touch_calib_button_pane_t1_ParamLimits

0xeb63,	// (0x0008c14d) main_touch_calib_button_pane_t1

0xeb79,	// (0x0008c163) main_touch_calib_button_pane_t2_ParamLimits

0xeb79,	// (0x0008c163) main_touch_calib_button_pane_t2

0x0001,

0xfe34,	// (0x0008d41e) main_touch_calib_button_pane_t_ParamLimits

0xfe34,	// (0x0008d41e) main_touch_calib_button_pane_t

0xa17a,	// (0x00087764) cell_ncimui_button_pane

0xa17a,	// (0x00087764) bg_button_pane_cp032

0xeb97,	// (0x0008c181) cell_ncimui_button_pane_t1

0x7184,	// (0x0008476e) image3_infobar_pane_ParamLimits

0x7184,	// (0x0008476e) image3_infobar_pane

0x900c,	// (0x000865f6) fs_bigclock_status_pane_ParamLimits

0x900c,	// (0x000865f6) fs_bigclock_status_pane

0x9019,	// (0x00086603) main_fs_bigclock_clock_pane_ParamLimits

0x9019,	// (0x00086603) main_fs_bigclock_clock_pane

0x9035,	// (0x0008661f) main_fs_bigclock_indi_pane_ParamLimits

0x9035,	// (0x0008661f) main_fs_bigclock_indi_pane

0x9067,	// (0x00086651) main_fs_bigclock_swipe_pane_ParamLimits

0x9067,	// (0x00086651) main_fs_bigclock_swipe_pane

0xa17a,	// (0x00087764) main_fs_clock_dumped_data

0xe40d,	// (0x0008b9f7) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xe40d,	// (0x0008b9f7) list_single_fs_bigclock_indicator_pane_g1

0xe437,	// (0x0008ba21) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xe437,	// (0x0008ba21) list_single_fs_bigclock_indicator_pane_g2

0xe451,	// (0x0008ba3b) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xe451,	// (0x0008ba3b) list_single_fs_bigclock_indicator_pane_g3

0xe46b,	// (0x0008ba55) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xe46b,	// (0x0008ba55) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfc5c,	// (0x0008d246) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfc5c,	// (0x0008d246) list_single_fs_bigclock_indicator_pane_g

0xe496,	// (0x0008ba80) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xe496,	// (0x0008ba80) list_single_fs_bigclock_indicator_pane_t1

0xe4be,	// (0x0008baa8) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xe4be,	// (0x0008baa8) list_single_fs_bigclock_indicator_pane_t2

0xe4e6,	// (0x0008bad0) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xe4e6,	// (0x0008bad0) list_single_fs_bigclock_indicator_pane_t3

0xe50e,	// (0x0008baf8) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xe50e,	// (0x0008baf8) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfc67,	// (0x0008d251) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfc67,	// (0x0008d251) list_single_fs_bigclock_indicator_pane_t

0xeba5,	// (0x0008c18f) image3_infobar_fav_pane_ParamLimits

0xeba5,	// (0x0008c18f) image3_infobar_fav_pane

0xebb5,	// (0x0008c19f) image3_infobar_loc_pane_ParamLimits

0xebb5,	// (0x0008c19f) image3_infobar_loc_pane

0xebcb,	// (0x0008c1b5) image3_infobar_time_pane_ParamLimits

0xebcb,	// (0x0008c1b5) image3_infobar_time_pane

0xcc86,	// (0x0008a270) image3_infobar_time_pane_g1

0xebdb,	// (0x0008c1c5) image3_infobar_time_pane_t1

0xcc86,	// (0x0008a270) image3_infobar_loc_pane_g1

0xebe9,	// (0x0008c1d3) image3_infobar_loc_pane_g2

0x0001,

0xfe39,	// (0x0008d423) image3_infobar_loc_pane_g

0xebf1,	// (0x0008c1db) image3_infobar_loc_pane_t1

0xcc86,	// (0x0008a270) image3_infobar_fav_pane_g1

0xebff,	// (0x0008c1e9) image3_infobar_fav_pane_g2

0x0001,

0xfe3e,	// (0x0008d428) image3_infobar_fav_pane_g

0xec07,	// (0x0008c1f1) fs_bigclock_status_battery_pane

0xec10,	// (0x0008c1fa) fs_bigclock_status_signal_pane

0xec19,	// (0x0008c203) fs_bigclock_status_title_pane

0xec22,	// (0x0008c20c) fs_bigclock_status_signal_pane_g1

0xec2b,	// (0x0008c215) fs_bigclock_status_signal_pane_g2

0x0001,

0xfe43,	// (0x0008d42d) fs_bigclock_status_signal_pane_g

0xec33,	// (0x0008c21d) fs_bigclock_status_battery_pane_g1

0xec3c,	// (0x0008c226) fs_bigclock_status_battery_pane_g2

0x0001,

0xfe48,	// (0x0008d432) fs_bigclock_status_battery_pane_g

0xec44,	// (0x0008c22e) fs_bigclock_status_title_pane_t1

0xcc86,	// (0x0008a270) main_fs_bigclock_clock_pane_g1

0xec52,	// (0x0008c23c) main_fs_bigclock_clock_pane_g2

0xec5d,	// (0x0008c247) main_fs_bigclock_clock_pane_g3

0xec5d,	// (0x0008c247) main_fs_bigclock_clock_pane_g4

0x0003,

0xfe4d,	// (0x0008d437) main_fs_bigclock_clock_pane_g

0xec69,	// (0x0008c253) main_fs_bigclock_clock_pane_t1

0x9852,	// (0x00086e3c) main_fs_bigclock_clock_pane_t2

0x0001,

0xfe56,	// (0x0008d440) main_fs_bigclock_clock_pane_t

0x9861,	// (0x00086e4b) list_single_fs_bigclock_indicator_pane_ParamLimits

0x9861,	// (0x00086e4b) list_single_fs_bigclock_indicator_pane

0x9872,	// (0x00086e5c) list_single_fs_bigclock_pane_ParamLimits

0x9872,	// (0x00086e5c) list_single_fs_bigclock_pane

0xec80,	// (0x0008c26a) main_fs_bigclock_indicator_pane_t1

0xec8f,	// (0x0008c279) list_single_fs_bigclock_pane_g1

0xec97,	// (0x0008c281) list_single_fs_bigclock_pane_t1

0xcc86,	// (0x0008a270) main_fs_bigclock_swipe_pane_g1

0xecda,	// (0x0008c2c4) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfe67,	// (0x0008d451) main_fs_bigclock_swipe_pane_g

0xece2,	// (0x0008c2cc) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xece2,	// (0x0008c2cc) main_fs_bigclock_swipe_pane_t1

0x440e,	// (0x000819f8) call_type_pane_ParamLimits

0xa17a,	// (0x00087764) main_btmg_pane

0x9681,	// (0x00086c6b) list_single_cale_mrui_row_pane_g2_ParamLimits

0x9681,	// (0x00086c6b) list_single_cale_mrui_row_pane_g2

0x0002,

0xfdda,	// (0x0008d3c4) list_single_cale_mrui_row_pane_g_ParamLimits

0xfdda,	// (0x0008d3c4) list_single_cale_mrui_row_pane_g

0x1c49,	// (0x0007f233) list_recal_vselct_arw_lo_pane

0xeb20,	// (0x0008c10a) list_recal_vselct_arw_up_pane

0x1c51,	// (0x0007f23b) list_recal_vselct_pane

0x98c8,	// (0x00086eb2) btmg_button_pane

0x98d4,	// (0x00086ebe) main_btmg_pane_g1

0xa17a,	// (0x00087764) bg_button_pane_cp044

0xecff,	// (0x0008c2e9) btmg_button_pane_t1

0xc821,	// (0x00089e0b) aid_listscroll_gen

0xa8c0,	// (0x00087eaa) main_cntbar_detail_pane

0xe84a,	// (0x0008be34) list_cmail_folder_pane

0xe85a,	// (0x0008be44) sp_fs_scroll_pane_cp03_ParamLimits

0x1ce1,	// (0x0007f2cb) list_single_fs_dyc_pane_cp01_ParamLimits

0x1ce1,	// (0x0007f2cb) list_single_fs_dyc_pane_cp01

0xed0d,	// (0x0008c2f7) aid_size_cmail_indent

0x1cfe,	// (0x0007f2e8) list_single_dyc_row_pane_cp01

0x98fc,	// (0x00086ee6) cntbar_detail_list_pane_ParamLimits

0x98fc,	// (0x00086ee6) cntbar_detail_list_pane

0x993c,	// (0x00086f26) main_cntbar_detail_cont_pane_ParamLimits

0x993c,	// (0x00086f26) main_cntbar_detail_cont_pane

0x4402,	// (0x000819ec) scroll_pane_cp032_ParamLimits

0x4402,	// (0x000819ec) scroll_pane_cp032

0x9948,	// (0x00086f32) cntbar_detail_list_event_pane_ParamLimits

0x9948,	// (0x00086f32) cntbar_detail_list_event_pane

0x990a,	// (0x00086ef4) cntbar_detail_list_shct_pane

0xad8d,	// (0x00088377) aid_list_gen

0xed16,	// (0x0008c300) aid_scroll

0xed1f,	// (0x0008c309) aid_size_touch_scroll_bar

0x84b5,	// (0x00085a9f) aid_list_double

0xed28,	// (0x0008c312) aid_list_single

0x84a3,	// (0x00085a8d) aid_list_single_lg

0x1d07,	// (0x0007f2f1) aid_list_z_g_a_sm

0x9958,	// (0x00086f42) aid_list_z_g_d

0x1d0f,	// (0x0007f2f9) aid_txt_z_prm

0x1d1f,	// (0x0007f309) aid_txt_z_prm_cp01

0x1d2d,	// (0x0007f317) aid_txt_z_sec

0x9960,	// (0x00086f4a) main_cntbar_detail_cont_pane_g1_ParamLimits

0x9960,	// (0x00086f4a) main_cntbar_detail_cont_pane_g1

0x996d,	// (0x00086f57) main_cntbar_detail_cont_pane_g2_ParamLimits

0x996d,	// (0x00086f57) main_cntbar_detail_cont_pane_g2

0x0001,

0xfe6c,	// (0x0008d456) main_cntbar_detail_cont_pane_g_ParamLimits

0xfe6c,	// (0x0008d456) main_cntbar_detail_cont_pane_g

0xed31,	// (0x0008c31b) main_cntbar_detail_cont_pane_t1

0xed3f,	// (0x0008c329) main_cntbar_detail_cont_pane_t2

0xed4d,	// (0x0008c337) main_cntbar_detail_cont_pane_t3

0x0002,

0xfe71,	// (0x0008d45b) main_cntbar_detail_cont_pane_t

0x9979,	// (0x00086f63) cell_cntbar_detail_list_shct_pane_ParamLimits

0x9979,	// (0x00086f63) cell_cntbar_detail_list_shct_pane

0xed5b,	// (0x0008c345) cntbar_detail_list_shct_pane_g1

0xed64,	// (0x0008c34e) cntbar_detail_list_shct_pane_g2

0x0001,

0xfe78,	// (0x0008d462) cntbar_detail_list_shct_pane_g

0x998d,	// (0x00086f77) cntbar_detail_list_event_pane_g1_ParamLimits

0x998d,	// (0x00086f77) cntbar_detail_list_event_pane_g1

0x9999,	// (0x00086f83) cntbar_detail_list_event_pane_g2_ParamLimits

0x9999,	// (0x00086f83) cntbar_detail_list_event_pane_g2

0x0005,

0xfe7d,	// (0x0008d467) cntbar_detail_list_event_pane_g_ParamLimits

0xfe7d,	// (0x0008d467) cntbar_detail_list_event_pane_g

0x9a07,	// (0x00086ff1) cntbar_detail_list_event_pane_t1_ParamLimits

0x9a07,	// (0x00086ff1) cntbar_detail_list_event_pane_t1

0x9a1c,	// (0x00087006) cntbar_detail_list_event_pane_t2_ParamLimits

0x9a1c,	// (0x00087006) cntbar_detail_list_event_pane_t2

0x0002,

0xfe8a,	// (0x0008d474) cntbar_detail_list_event_pane_t_ParamLimits

0xfe8a,	// (0x0008d474) cntbar_detail_list_event_pane_t

0xcc86,	// (0x0008a270) cell_cntbar_detail_list_shct_pane_g1

0x47e1,	// (0x00081dcb) navi_pane_mv_g3

0xa8c0,	// (0x00087eaa) main_cntbar_detail_pane_ParamLimits

0xa17a,	// (0x00087764) main_notif_wgt_pane

0x6e2e,	// (0x00084418) aid_tch_main_mp4_pane_g4

0x706d,	// (0x00084657) popup_slider_window_cp02

0x1c3f,	// (0x0007f229) list_recal_day_event_pane

0x98dc,	// (0x00086ec6) cntbar_detail_btn_pane_ParamLimits

0x98dc,	// (0x00086ec6) cntbar_detail_btn_pane

0x98ec,	// (0x00086ed6) cntbar_detail_btn_pane_cp01_ParamLimits

0x98ec,	// (0x00086ed6) cntbar_detail_btn_pane_cp01

0x990a,	// (0x00086ef4) cntbar_detail_list_shct_pane_ParamLimits

0x9916,	// (0x00086f00) cntbar_detail_pane_g1_ParamLimits

0x9916,	// (0x00086f00) cntbar_detail_pane_g1

0x9926,	// (0x00086f10) cntbar_detail_pane_t1_ParamLimits

0x9926,	// (0x00086f10) cntbar_detail_pane_t1

0x99a5,	// (0x00086f8f) cntbar_detail_list_event_pane_g3_ParamLimits

0x99a5,	// (0x00086f8f) cntbar_detail_list_event_pane_g3

0x99bd,	// (0x00086fa7) cntbar_detail_list_event_pane_g4_ParamLimits

0x99bd,	// (0x00086fa7) cntbar_detail_list_event_pane_g4

0x99d5,	// (0x00086fbf) cntbar_detail_list_event_pane_g5_ParamLimits

0x99d5,	// (0x00086fbf) cntbar_detail_list_event_pane_g5

0x99ed,	// (0x00086fd7) cntbar_detail_list_event_pane_g6_ParamLimits

0x99ed,	// (0x00086fd7) cntbar_detail_list_event_pane_g6

0x9a31,	// (0x0008701b) cntbar_detail_list_event_pane_t3_ParamLimits

0x9a31,	// (0x0008701b) cntbar_detail_list_event_pane_t3

0x9a43,	// (0x0008702d) popup_notif_wgt_window_ParamLimits

0x9a43,	// (0x0008702d) popup_notif_wgt_window

0x9a53,	// (0x0008703d) popup_submenu_window_cp01_ParamLimits

0x9a53,	// (0x0008703d) popup_submenu_window_cp01

0xaae2,	// (0x000880cc) bg_popup_window_pane_cp10

0xed6d,	// (0x0008c357) listscroll_notif_wgt_pane

0xed7f,	// (0x0008c369) list_notif_wgt_window

0xed88,	// (0x0008c372) scroll_pane_cp033

0x9a63,	// (0x0008704d) list_notif_wgt_row_pane_ParamLimits

0x9a63,	// (0x0008704d) list_notif_wgt_row_pane

0xed91,	// (0x0008c37b) aid_size_list_notif_wgt_del

0xed9e,	// (0x0008c388) list_notif_wgt_row_pane_g1

0xedaa,	// (0x0008c394) list_notif_wgt_row_pane_g2

0xedbe,	// (0x0008c3a8) list_notif_wgt_row_pane_g3

0x0002,

0xfe91,	// (0x0008d47b) list_notif_wgt_row_pane_g

0xedcb,	// (0x0008c3b5) list_notif_wgt_row_pane_t1

0xede1,	// (0x0008c3cb) list_notif_wgt_row_pane_t2

0xedf3,	// (0x0008c3dd) list_notif_wgt_row_pane_t3

0x0002,

0xfe98,	// (0x0008d482) list_notif_wgt_row_pane_t

0xd8d0,	// (0x0008aeba) list_recal_day_event_pane_g1

0xee05,	// (0x0008c3ef) list_recal_day_event_pane_t1

0xa17a,	// (0x00087764) bg_button_pane_cp045

0xee14,	// (0x0008c3fe) cntbar_detail_btn_pane_t1

0xc835,	// (0x00089e1f) main_callh_pane_ParamLimits

0xc835,	// (0x00089e1f) main_callh_pane

0xa17a,	// (0x00087764) main_coverflow0_pane

0xa17a,	// (0x00087764) main_wgtman_pane

0x907f,	// (0x00086669) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x907f,	// (0x00086669) main_fs_bigclock_unlock_btn_pane

0x9400,	// (0x000869ea) bg_button_pane_cp16

0x9410,	// (0x000869fa) cell_tport_appsw_pane_g3

0x9a74,	// (0x0008705e) cf0_flow_pane_ParamLimits

0x9a74,	// (0x0008705e) cf0_flow_pane

0xee22,	// (0x0008c40c) listscroll_cf0_pane

0xee2d,	// (0x0008c417) main_cf0_pane_g1

0x9a83,	// (0x0008706d) main_cf0_pane_t1_ParamLimits

0x9a83,	// (0x0008706d) main_cf0_pane_t1

0x9a97,	// (0x00087081) main_cf0_pane_t2_ParamLimits

0x9a97,	// (0x00087081) main_cf0_pane_t2

0x0001,

0xfea4,	// (0x0008d48e) main_cf0_pane_t_ParamLimits

0xfea4,	// (0x0008d48e) main_cf0_pane_t

0xee3f,	// (0x0008c429) scroll_pane_cp11

0x9aab,	// (0x00087095) cf0_flow_pane_g1

0x9ab3,	// (0x0008709d) cf0_flow_pane_g2

0x0001,

0xfea9,	// (0x0008d493) cf0_flow_pane_g

0x9abb,	// (0x000870a5) cf0_flow_pane_t1

0xa17a,	// (0x00087764) main_call6_pane

0xa17a,	// (0x00087764) main_calllock_pane

0x9ac9,	// (0x000870b3) call6_btn_grp_pane_ParamLimits

0x9ac9,	// (0x000870b3) call6_btn_grp_pane

0x9ad6,	// (0x000870c0) call6_pane_g1_ParamLimits

0x9ad6,	// (0x000870c0) call6_pane_g1

0x9ae6,	// (0x000870d0) popup_call6_1st_window_ParamLimits

0x9ae6,	// (0x000870d0) popup_call6_1st_window

0x9af4,	// (0x000870de) popup_call6_2nd_window_ParamLimits

0x9af4,	// (0x000870de) popup_call6_2nd_window

0x9b02,	// (0x000870ec) cell_call6_btn_pane_ParamLimits

0x9b02,	// (0x000870ec) cell_call6_btn_pane

0xaae2,	// (0x000880cc) bg_popup_call2_in_pane_cp03

0xee4a,	// (0x0008c434) popup_call6_1st_window_g1

0xee52,	// (0x0008c43c) popup_call6_1st_window_g2

0xee5a,	// (0x0008c444) popup_call6_1st_window_g3

0x0002,

0xfeae,	// (0x0008d498) popup_call6_1st_window_g

0xee62,	// (0x0008c44c) popup_call6_1st_window_t1

0xee71,	// (0x0008c45b) popup_call6_1st_window_t2

0xee81,	// (0x0008c46b) popup_call6_1st_window_t3

0x0002,

0xfeb5,	// (0x0008d49f) popup_call6_1st_window_t

0xaae2,	// (0x000880cc) bg_popup_call2_in_pane_cp04

0xee4a,	// (0x0008c434) popup_call6_2nd_window_g1

0xee52,	// (0x0008c43c) popup_call6_2nd_window_g2

0xee5a,	// (0x0008c444) popup_call6_2nd_window_g3

0x0002,

0xfeae,	// (0x0008d498) popup_call6_2nd_window_g

0xee62,	// (0x0008c44c) popup_call6_2nd_window_t1

0xa17a,	// (0x00087764) bg_button_pane_cp15

0xee91,	// (0x0008c47b) cell_call6_btn_pane_g1

0xee9a,	// (0x0008c484) cell_call6_btn_pane_t1

0x9b11,	// (0x000870fb) listscroll_wgtman_pane_ParamLimits

0x9b11,	// (0x000870fb) listscroll_wgtman_pane

0x9b2d,	// (0x00087117) wgtman_btn_pane_ParamLimits

0x9b2d,	// (0x00087117) wgtman_btn_pane

0xb2de,	// (0x000888c8) aid_scroll_copy1

0xeea9,	// (0x0008c493) list_wgtman_pane

0x9b62,	// (0x0008714c) wgtman_btn_pane_g1_ParamLimits

0x9b62,	// (0x0008714c) wgtman_btn_pane_g1

0x9b8a,	// (0x00087174) wgtman_btn_pane_t1_ParamLimits

0x9b8a,	// (0x00087174) wgtman_btn_pane_t1

0xeeb3,	// (0x0008c49d) wgtman_btn_pane_t2_ParamLimits

0xeeb3,	// (0x0008c49d) wgtman_btn_pane_t2

0x0001,

0xfebc,	// (0x0008d4a6) wgtman_btn_pane_t_ParamLimits

0xfebc,	// (0x0008d4a6) wgtman_btn_pane_t

0x9bc1,	// (0x000871ab) listrow_wgtman_pane_ParamLimits

0x9bc1,	// (0x000871ab) listrow_wgtman_pane

0x9bd5,	// (0x000871bf) listrow_wgtman_pane_g1

0x9be2,	// (0x000871cc) listrow_wgtman_pane_g2

0x0001,

0xfec1,	// (0x0008d4ab) listrow_wgtman_pane_g

0x1d3b,	// (0x0007f325) listrow_wgtman_pane_t1

0x1d53,	// (0x0007f33d) listrow_wgtman_pane_t2

0x0001,

0xfec6,	// (0x0008d4b0) listrow_wgtman_pane_t

0x1d79,	// (0x0007f363) wait_bar_pane_cp09

0xeeca,	// (0x0008c4b4) main_calllock_btn_pane

0xeed4,	// (0x0008c4be) main_calllock_pane_g1

0xa17a,	// (0x00087764) bg_button_pane_cp17

0xeee0,	// (0x0008c4ca) main_calllock_btn_pane_g1

0xeee9,	// (0x0008c4d3) main_calllock_btn_pane_t1

0xa17a,	// (0x00087764) main_dialer3_pane

0xa17a,	// (0x00087764) main_fmrd2_pane

0xcc86,	// (0x0008a270) main_fs_bigclock_unlock_btn_pane_g1

0xef00,	// (0x0008c4ea) main_fs_bigclock_unlock_btn_pane_t1

0x9c00,	// (0x000871ea) area_fmrd2_info_pane_ParamLimits

0x9c00,	// (0x000871ea) area_fmrd2_info_pane

0x9c0c,	// (0x000871f6) area_fmrd2_visual_pane_ParamLimits

0x9c0c,	// (0x000871f6) area_fmrd2_visual_pane

0x9c1a,	// (0x00087204) fmrd2_indi_pane_ParamLimits

0x9c1a,	// (0x00087204) fmrd2_indi_pane

0x9c27,	// (0x00087211) area_fmrd2_visual_pane_g1

0x9c2f,	// (0x00087219) area_fmrd2_visual_pane_t1

0x9c3f,	// (0x00087229) area_fmrd2_visual_pane_t2

0x9c4f,	// (0x00087239) area_fmrd2_visual_pane_t3

0x0002,

0xfed0,	// (0x0008d4ba) area_fmrd2_visual_pane_t

0x9c5f,	// (0x00087249) area_fmrd2_info_pane_g1

0x9c67,	// (0x00087251) area_fmrd2_info_pane_t1

0x9c77,	// (0x00087261) area_fmrd2_info_pane_t2

0x9c87,	// (0x00087271) area_fmrd2_info_pane_t3

0x9c97,	// (0x00087281) area_fmrd2_info_pane_t4

0x0003,

0xfed7,	// (0x0008d4c1) area_fmrd2_info_pane_t

0x9ca7,	// (0x00087291) fmrd2_indi_pane_t1

0x9cb7,	// (0x000872a1) fmrd2_indi_pane_t2

0x9cc7,	// (0x000872b1) fmrd2_indi_pane_t3

0x0002,

0xfee0,	// (0x0008d4ca) fmrd2_indi_pane_t

0xe47a,	// (0x0008ba64) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xe47a,	// (0x0008ba64) list_single_fs_bigclock_indicator_pane_g5

0xe52a,	// (0x0008bb14) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xe52a,	// (0x0008bb14) list_single_fs_bigclock_indicator_pane_t5

0x959a,	// (0x00086b84) aid_cell_bcale_month_pane_ParamLimits

0x959a,	// (0x00086b84) aid_cell_bcale_month_pane

0x95b8,	// (0x00086ba2) bcale_month_pane_ParamLimits

0x95b8,	// (0x00086ba2) bcale_month_pane

0x95d4,	// (0x00086bbe) bcale_preview_pane_ParamLimits

0x95d4,	// (0x00086bbe) bcale_preview_pane

0xec97,	// (0x0008c281) list_single_fs_bigclock_pane_t1_ParamLimits

0xecb6,	// (0x0008c2a0) list_single_fs_bigclock_pane_t2_ParamLimits

0xecb6,	// (0x0008c2a0) list_single_fs_bigclock_pane_t2

0x0001,

0xfe62,	// (0x0008d44c) list_single_fs_bigclock_pane_t_ParamLimits

0xfe62,	// (0x0008d44c) list_single_fs_bigclock_pane_t

0xeef8,	// (0x0008c4e2) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfecb,	// (0x0008d4b5) main_fs_bigclock_unlock_btn_pane_g

0x9cd7,	// (0x000872c1) aid_dia3_key_size_ParamLimits

0x9cd7,	// (0x000872c1) aid_dia3_key_size

0x9ce3,	// (0x000872cd) aid_dia3_listrow_size_ParamLimits

0x9ce3,	// (0x000872cd) aid_dia3_listrow_size

0x9cf3,	// (0x000872dd) dia3_keypad_fun_pane_ParamLimits

0x9cf3,	// (0x000872dd) dia3_keypad_fun_pane

0x9d03,	// (0x000872ed) dia3_keypad_num_pane_ParamLimits

0x9d03,	// (0x000872ed) dia3_keypad_num_pane

0x9d13,	// (0x000872fd) dia3_listscroll_pane_ParamLimits

0x9d13,	// (0x000872fd) dia3_listscroll_pane

0x9d21,	// (0x0008730b) dia3_numentry_pane_ParamLimits

0x9d21,	// (0x0008730b) dia3_numentry_pane

0xef0e,	// (0x0008c4f8) dia3_list_pane

0xef19,	// (0x0008c503) scroll_pane_cp12

0xa17a,	// (0x00087764) bg_dia3_numentry_pane

0x9d2f,	// (0x00087319) dia3_numentry_pane_t1

0x9d3e,	// (0x00087328) cell_dia3_key_num_pane

0x9d46,	// (0x00087330) cell_dia3_key0_fun_pane_ParamLimits

0x9d46,	// (0x00087330) cell_dia3_key0_fun_pane

0x9d53,	// (0x0008733d) cell_dia3_key1_fun_pane_ParamLimits

0x9d53,	// (0x0008733d) cell_dia3_key1_fun_pane

0x9d60,	// (0x0008734a) dia3_listrow_pane

0xe178,	// (0x0008b762) bg_dia3_numentry_pane_g1

0xa17a,	// (0x00087764) bg_button_pane_cp21

0xef24,	// (0x0008c50e) cell_dia3_key_num_pane_t1

0xef32,	// (0x0008c51c) cell_dia3_key_num_pane_t2

0xef41,	// (0x0008c52b) cell_dia3_key_num_pane_t3

0xef50,	// (0x0008c53a) cell_dia3_key_num_pane_t4

0x0003,

0xfee7,	// (0x0008d4d1) cell_dia3_key_num_pane_t

0xa17a,	// (0x00087764) bg_button_pane_cp19

0x9d6d,	// (0x00087357) cell_dia3_key0_fun_pane_g1

0xa17a,	// (0x00087764) bg_button_pane_cp20

0x9d75,	// (0x0008735f) cell_dia3_key1_fun_pane_g1

0x9d7d,	// (0x00087367) area_left_week_number_pane

0x9d90,	// (0x0008737a) area_top_day_name_pane

0x9d9e,	// (0x00087388) frame_month_view_pane

0xef5f,	// (0x0008c549) grid_month_view_pane

0x9db3,	// (0x0008739d) cell_top_day_name_pane_ParamLimits

0x9db3,	// (0x0008739d) cell_top_day_name_pane

0x9dcf,	// (0x000873b9) cell_area_left_week_number_pane_ParamLimits

0x9dcf,	// (0x000873b9) cell_area_left_week_number_pane

0x9df0,	// (0x000873da) cell_month_view_pane_ParamLimits

0x9df0,	// (0x000873da) cell_month_view_pane

0xef6d,	// (0x0008c557) frm_month_g1

0x9e1c,	// (0x00087406) frm_month_g2

0x9e2d,	// (0x00087417) frm_month_g3

0x9e3e,	// (0x00087428) frm_month_g4

0x9e4f,	// (0x00087439) frm_month_g5

0x9e60,	// (0x0008744a) frm_month_g6

0x9e73,	// (0x0008745d) frm_month_g7

0xef7a,	// (0x0008c564) frm_month_g8

0x9e86,	// (0x00087470) frm_month_g9

0x9e93,	// (0x0008747d) frm_month_g10

0x9ea0,	// (0x0008748a) frm_month_g11

0x9ead,	// (0x00087497) frm_month_g12

0x9eba,	// (0x000874a4) frm_month_g13

0x9ec9,	// (0x000874b3) frm_month_g14

0x9ed8,	// (0x000874c2) frm_month_g15

0x9ee7,	// (0x000874d1) frm_month_g16

0x000f,

0xfef0,	// (0x0008d4da) frm_month_g

0xef87,	// (0x0008c571) cell_top_day_name_pane_t1

0x9ef6,	// (0x000874e0) cell_area_left_week_number_pane_g1

0x9f05,	// (0x000874ef) cell_area_left_week_number_pane_t1

0xceb6,	// (0x0008a4a0) cell_month_view_pane_g1

0x9f1b,	// (0x00087505) cell_month_view_pane_t1

0xa17a,	// (0x00087764) main_fps_pane

0xe73a,	// (0x0008bd24) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xe73a,	// (0x0008bd24) cmail_ddmenu_btn02_pane_cp1

0xe756,	// (0x0008bd40) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xe756,	// (0x0008bd40) cmail_ddmenu_btn02_pane_cp2

0x97d1,	// (0x00086dbb) cmail_ddmenu_btn02_pane_g2_ParamLimits

0x97d1,	// (0x00086dbb) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfe15,	// (0x0008d3ff) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfe15,	// (0x0008d3ff) cmail_ddmenu_btn02_pane_g

0x97ef,	// (0x00086dd9) cmail_ddmenu_btn02_pane_t2_ParamLimits

0x97ef,	// (0x00086dd9) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfe1a,	// (0x0008d404) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfe1a,	// (0x0008d404) cmail_ddmenu_btn02_pane_t

0x9f31,	// (0x0008751b) fps_text_pane_ParamLimits

0x9f31,	// (0x0008751b) fps_text_pane

0x9f3e,	// (0x00087528) main_fps_pane_g1_ParamLimits

0x9f3e,	// (0x00087528) main_fps_pane_g1

0x9f4a,	// (0x00087534) wait_bar_pane_cp010_ParamLimits

0x9f4a,	// (0x00087534) wait_bar_pane_cp010

0x9f56,	// (0x00087540) fps_text_pane_t1_ParamLimits

0x9f56,	// (0x00087540) fps_text_pane_t1

0x7493,	// (0x00084a7d) cam4_image_uncrop_pane_g1

0x749c,	// (0x00084a86) cam4_image_uncrop_pane_g2

0x74a5,	// (0x00084a8f) cam4_image_uncrop_pane_g3

0x74ae,	// (0x00084a98) cam4_image_uncrop_pane_g4

0x0003,

0xf8dd,	// (0x0008cec7) cam4_image_uncrop_pane_g

0x9d60,	// (0x0008734a) dia3_listrow_pane_ParamLimits

0xa17a,	// (0x00087764) main_phob2_pane

0x93e2,	// (0x000869cc) cell_tport_appsw_pane_cp02_ParamLimits

0x93e2,	// (0x000869cc) cell_tport_appsw_pane_cp02

0x93f1,	// (0x000869db) cell_tport_appsw_pane_cp03_ParamLimits

0x93f1,	// (0x000869db) cell_tport_appsw_pane_cp03

0xa17a,	// (0x00087764) phob2_contact_card_pane

0xa17a,	// (0x00087764) phob2_listscroll_pane

0xef9a,	// (0x0008c584) phob2_list_pane

0xefa2,	// (0x0008c58c) scroll_pane_cp034

0x9f6f,	// (0x00087559) phob2_cc_data_pane_ParamLimits

0x9f6f,	// (0x00087559) phob2_cc_data_pane

0x9f8b,	// (0x00087575) phob2_cc_listscroll_pane_ParamLimits

0x9f8b,	// (0x00087575) phob2_cc_listscroll_pane

0x9fa7,	// (0x00087591) list_double_large_graphic_phob2_pane_ParamLimits

0x9fa7,	// (0x00087591) list_double_large_graphic_phob2_pane

0x9fbf,	// (0x000875a9) list_double_large_graphic_phob2_pane_g1_ParamLimits

0x9fbf,	// (0x000875a9) list_double_large_graphic_phob2_pane_g1

0x1d8b,	// (0x0007f375) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x1d8b,	// (0x0007f375) list_double_large_graphic_phob2_pane_g2

0x0001,

0xff11,	// (0x0008d4fb) list_double_large_graphic_phob2_pane_g_ParamLimits

0xff11,	// (0x0008d4fb) list_double_large_graphic_phob2_pane_g

0x1d97,	// (0x0007f381) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x1d97,	// (0x0007f381) list_double_large_graphic_phob2_pane_t1

0x1dac,	// (0x0007f396) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x1dac,	// (0x0007f396) list_double_large_graphic_phob2_pane_t2

0x0001,

0xff16,	// (0x0008d500) list_double_large_graphic_phob2_pane_t_ParamLimits

0xff16,	// (0x0008d500) list_double_large_graphic_phob2_pane_t

0xa17a,	// (0x00087764) list_highlight_pane_cp024

0x9fd5,	// (0x000875bf) phob2_cc_button_pane

0x9fdd,	// (0x000875c7) phob2_cc_data_pane_g1_ParamLimits

0x9fdd,	// (0x000875c7) phob2_cc_data_pane_g1

0x9fe9,	// (0x000875d3) phob2_cc_data_pane_g2_ParamLimits

0x9fe9,	// (0x000875d3) phob2_cc_data_pane_g2

0x0001,

0xff1b,	// (0x0008d505) phob2_cc_data_pane_g_ParamLimits

0xff1b,	// (0x0008d505) phob2_cc_data_pane_g

0x9ff5,	// (0x000875df) phob2_cc_data_pane_t1_ParamLimits

0x9ff5,	// (0x000875df) phob2_cc_data_pane_t1

0xa007,	// (0x000875f1) phob2_cc_data_pane_t2_ParamLimits

0xa007,	// (0x000875f1) phob2_cc_data_pane_t2

0xa019,	// (0x00087603) phob2_cc_data_pane_t3_ParamLimits

0xa019,	// (0x00087603) phob2_cc_data_pane_t3

0x0002,

0xff20,	// (0x0008d50a) phob2_cc_data_pane_t_ParamLimits

0xff20,	// (0x0008d50a) phob2_cc_data_pane_t

0xefaa,	// (0x0008c594) phob2_cc_list_pane_ParamLimits

0xefaa,	// (0x0008c594) phob2_cc_list_pane

0xdb2b,	// (0x0008b115) scroll_pane_cp035_ParamLimits

0xdb2b,	// (0x0008b115) scroll_pane_cp035

0xa8c0,	// (0x00087eaa) bg_button_pane_cp033

0xefb6,	// (0x0008c5a0) phob2_cc_button_pane_g1

0xefc2,	// (0x0008c5ac) phob2_cc_button_pane_t1

0xefd7,	// (0x0008c5c1) phob2_cc_button_pane_t2

0x0001,

0xff27,	// (0x0008d511) phob2_cc_button_pane_t

0xa02b,	// (0x00087615) list_double_large_graphic_phob2_cc_pane_ParamLimits

0xa02b,	// (0x00087615) list_double_large_graphic_phob2_cc_pane

0xa047,	// (0x00087631) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0xa047,	// (0x00087631) list_double_large_graphic_phob2_cc_pane_g1

0x1dbe,	// (0x0007f3a8) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x1dbe,	// (0x0007f3a8) list_double_large_graphic_phob2_cc_pane_g2

0x1dcd,	// (0x0007f3b7) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x1dcd,	// (0x0007f3b7) list_double_large_graphic_phob2_cc_pane_g3

0x1ddc,	// (0x0007f3c6) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x1ddc,	// (0x0007f3c6) list_double_large_graphic_phob2_cc_pane_g4

0x1ded,	// (0x0007f3d7) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x1ded,	// (0x0007f3d7) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xff2c,	// (0x0008d516) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xff2c,	// (0x0008d516) list_double_large_graphic_phob2_cc_pane_g

0x1dfc,	// (0x0007f3e6) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x1dfc,	// (0x0007f3e6) list_double_large_graphic_phob2_cc_pane_t1

0x1e25,	// (0x0007f40f) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x1e25,	// (0x0007f40f) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xff37,	// (0x0008d521) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xff37,	// (0x0008d521) list_double_large_graphic_phob2_cc_pane_t

0xefe9,	// (0x0008c5d3) list_highlight_pane_cp025_ParamLimits

0xefe9,	// (0x0008c5d3) list_highlight_pane_cp025

0xa8c0,	// (0x00087eaa) bg_button_pane_cp033_ParamLimits

0xefb6,	// (0x0008c5a0) phob2_cc_button_pane_g1_ParamLimits

0xefc2,	// (0x0008c5ac) phob2_cc_button_pane_t1_ParamLimits

0xefd7,	// (0x0008c5c1) phob2_cc_button_pane_t2_ParamLimits

0xff27,	// (0x0008d511) phob2_cc_button_pane_t_ParamLimits

0x20d8,	// (0x0007f6c2) popup_wgtman_window

0xd7b2,	// (0x0008ad9c) scroll_pane_cp038

0x9b4a,	// (0x00087134) wgtman_btn_pane_cp_01_ParamLimits

0x9b4a,	// (0x00087134) wgtman_btn_pane_cp_01

0xeff7,	// (0x0008c5e1) wgtman_content_pane

0xf000,	// (0x0008c5ea) wgtman_heading_pane

0xa17a,	// (0x00087764) bg_heading_pane_cp02

0xf009,	// (0x0008c5f3) wgtman_heading_pane_g1

0xf011,	// (0x0008c5fb) wgtman_heading_pane_t1

0xf01f,	// (0x0008c609) scroll_pane_cp036

0xf027,	// (0x0008c611) wgtman_list_pane

0xf02f,	// (0x0008c619) wgtman_list_pane_t1_ParamLimits

0xf02f,	// (0x0008c619) wgtman_list_pane_t1

0x73f0,	// (0x000849da) cam4_grid_pane

0x0fd5,	// (0x0007e5bf) bg_button_pane_cp015_ParamLimits

0x80c6,	// (0x000856b0) bg_button_pane_cp016_ParamLimits

0x80d9,	// (0x000856c3) bg_button_pane_cp017_ParamLimits

0x1019,	// (0x0007e603) popup_vitu2_query_window_g3_ParamLimits

0x1019,	// (0x0007e603) popup_vitu2_query_window_g3

0x1092,	// (0x0007e67c) popup_vitu2_query_window_t6_ParamLimits

0x1092,	// (0x0007e67c) popup_vitu2_query_window_t6

0x10bd,	// (0x0007e6a7) popup_vitu2_query_window_t7_ParamLimits

0x10bd,	// (0x0007e6a7) popup_vitu2_query_window_t7

0xe56f,	// (0x0008bb59) cam4_grid_pane_g1

0xe578,	// (0x0008bb62) cam4_grid_pane_g2

0xf049,	// (0x0008c633) cam4_grid_pane_g3

0xf052,	// (0x0008c63c) cam4_grid_pane_g4

0x0003,

0xff3c,	// (0x0008d526) cam4_grid_pane_g

0x3215,	// (0x000807ff) aid_placing_vt_slider_lsc_ParamLimits

0x3548,	// (0x00080b32) vidtel_button_pane_ParamLimits

0x3548,	// (0x00080b32) vidtel_button_pane

0xa17a,	// (0x00087764) bg_button_pane_cp034

0xa058,	// (0x00087642) vidtel_button_pane_g1

0xa060,	// (0x0008764a) vidtel_button_pane_t1

0xd8c0,	// (0x0008aeaa) aid_size_vtel_slider_touch

0xdb2b,	// (0x0008b115) scroll_pane_cp039

0xe1b6,	// (0x0008b7a0) ncim_query_button_pane_cp01_ParamLimits

0xe1d5,	// (0x0008b7bf) ncimui_query_pane_g1_ParamLimits

0xa8c0,	// (0x00087eaa) input_focus_pane_cp012_ParamLimits

0xe1fa,	// (0x0008b7e4) ncim_query_entry_pane_t1_ParamLimits

0xdb2b,	// (0x0008b115) scroll_pane_cp039_ParamLimits

0x4753,	// (0x00081d3d) navi_pane_bcale_mc_g1

0x475b,	// (0x00081d45) navi_pane_bcale_mc_t1

0xe793,	// (0x0008bd7d) main_sp_fs_email_pane_g1

0xe79f,	// (0x0008bd89) main_sp_fs_email_pane_g2

0x0001,

0xfccd,	// (0x0008d2b7) main_sp_fs_email_pane_g

0xea24,	// (0x0008c00e) list_single_cale_mrui_row_pane_g3_ParamLimits

0xea24,	// (0x0008c00e) list_single_cale_mrui_row_pane_g3

0x1c9f,	// (0x0007f289) list_single_recal_day_pane_g5_event_pane

0x1cb5,	// (0x0007f29f) list_single_recal_day_pane_g7

0xf05d,	// (0x0008c647) list_recal_day_event_pane_cp01

0xf066,	// (0x0008c650) list_recal_vselct_arw_lo_pane_cp01

0xf06e,	// (0x0008c658) list_recal_vselct_arw_up_pane_cp01

0xf076,	// (0x0008c660) list_recal_vselct_pane_cp01

0xd8d0,	// (0x0008aeba) list_recal_day_event_pane_cp01_g1

0x1e4e,	// (0x0007f438) list_recal_day_event_pane_cp01_t1

0x1cbd,	// (0x0007f2a7) list_single_recal_day_pane_t1_ParamLimits

0x1ccf,	// (0x0007f2b9) list_single_recal_day_pane_t2_ParamLimits

0xfe2a,	// (0x0008d414) list_single_recal_day_pane_t_ParamLimits

0xa839,	// (0x00087e23) bg_notes_pane_ParamLimits

0xa90a,	// (0x00087ef4) list_notes_pane_ParamLimits

0x2427,	// (0x0007fa11) scroll_pane_cp06_ParamLimits

0xa92c,	// (0x00087f16) main_notes_pane_ParamLimits

0xa17a,	// (0x00087764) main_welc_pane

0xa076,	// (0x00087660) main_welc_body_pane_ParamLimits

0xa076,	// (0x00087660) main_welc_body_pane

0xa091,	// (0x0008767b) main_welc_opti_pane_ParamLimits

0xa091,	// (0x0008767b) main_welc_opti_pane

0xa0c6,	// (0x000876b0) main_welc_pane_t1_ParamLimits

0xa0c6,	// (0x000876b0) main_welc_pane_t1

0xa0e4,	// (0x000876ce) main_welc_body_row_pane_ParamLimits

0xa0e4,	// (0x000876ce) main_welc_body_row_pane

0xa0fe,	// (0x000876e8) main_welc_opti_row_pane_ParamLimits

0xa0fe,	// (0x000876e8) main_welc_opti_row_pane

0xf080,	// (0x0008c66a) main_welc_opti_row_pane_g1

0xf088,	// (0x0008c672) main_welc_opti_row_pane_t1

0xf097,	// (0x0008c681) main_welc_body_row_pane_t1

0xed77,	// (0x0008c361) popup_notif_wgt_heading_pane

0xed91,	// (0x0008c37b) aid_size_list_notif_wgt_del_ParamLimits

0xed9e,	// (0x0008c388) list_notif_wgt_row_pane_g1_ParamLimits

0xedaa,	// (0x0008c394) list_notif_wgt_row_pane_g2_ParamLimits

0xedbe,	// (0x0008c3a8) list_notif_wgt_row_pane_g3_ParamLimits

0xfe91,	// (0x0008d47b) list_notif_wgt_row_pane_g_ParamLimits

0xedcb,	// (0x0008c3b5) list_notif_wgt_row_pane_t1_ParamLimits

0xede1,	// (0x0008c3cb) list_notif_wgt_row_pane_t2_ParamLimits

0xedf3,	// (0x0008c3dd) list_notif_wgt_row_pane_t3_ParamLimits

0xfe98,	// (0x0008d482) list_notif_wgt_row_pane_t_ParamLimits

0x9bd5,	// (0x000871bf) listrow_wgtman_pane_g1_ParamLimits

0x9be2,	// (0x000871cc) listrow_wgtman_pane_g2_ParamLimits

0xfec1,	// (0x0008d4ab) listrow_wgtman_pane_g_ParamLimits

0x1d3b,	// (0x0007f325) listrow_wgtman_pane_t1_ParamLimits

0x1d53,	// (0x0007f33d) listrow_wgtman_pane_t2_ParamLimits

0xfec6,	// (0x0008d4b0) listrow_wgtman_pane_t_ParamLimits

0x1d79,	// (0x0007f363) wait_bar_pane_cp09_ParamLimits

0xa17a,	// (0x00087764) bg_popup_heading_pane_cp02

0xf0a6,	// (0x0008c690) popup_notif_wgt_heading_pane_g1

0xf0ae,	// (0x0008c698) popup_notif_wgt_heading_pane_t1

0xa17a,	// (0x00087764) main_vids_pane

0xa17a,	// (0x00087764) vids_listscroll_pane

0xa10f,	// (0x000876f9) scroll_pane_cp040

0xa17a,	// (0x00087764) vids_list_pane

0xa11a,	// (0x00087704) vids_list_double_pane_ParamLimits

0xa11a,	// (0x00087704) vids_list_double_pane

0xa12d,	// (0x00087717) vids_list_double_pane_g1

0xa136,	// (0x00087720) vids_list_double_pane_t1

0xa146,	// (0x00087730) vids_list_double_pane_t2

0x0001,

0xff4a,	// (0x0008d534) vids_list_double_pane_t

0xa8c0,	// (0x00087eaa) main_ncimui_pane_ParamLimits

0x8c2f,	// (0x00086219) main_ncimui_pane_g1_ParamLimits

0x8c3d,	// (0x00086227) main_ncimui_pane_g2_ParamLimits

0x8c3d,	// (0x00086227) main_ncimui_pane_g2

0x0001,

0xfbd2,	// (0x0008d1bc) main_ncimui_pane_g_ParamLimits

0xfbd2,	// (0x0008d1bc) main_ncimui_pane_g

0xa0ac,	// (0x00087696) main_welc_pane_g1_ParamLimits

0xa0ac,	// (0x00087696) main_welc_pane_g1

0xa0b8,	// (0x000876a2) main_welc_pane_g2_ParamLimits

0xa0b8,	// (0x000876a2) main_welc_pane_g2

0x0001,

0xff45,	// (0x0008d52f) main_welc_pane_g_ParamLimits

0xff45,	// (0x0008d52f) main_welc_pane_g

0xa839,	// (0x00087e23) listscroll_mce_pane_ParamLimits

0x481d,	// (0x00081e07) wait_bar_pane_cp10

0xc829,	// (0x00089e13) main_cale_day_pane_ParamLimits

0xc829,	// (0x00089e13) main_cale_week_pane_ParamLimits

0xa839,	// (0x00087e23) main_messa_pane_ParamLimits

0x67f8,	// (0x00083de2) main_clock2_btn_pane_ParamLimits

0x67f8,	// (0x00083de2) main_clock2_btn_pane

0xd03e,	// (0x0008a628) main_clock2_btn_pane_cp01_ParamLimits

0xd03e,	// (0x0008a628) main_clock2_btn_pane_cp01

0xe9f5,	// (0x0008bfdf) list_cale_mrui_pane_ParamLimits

0xee37,	// (0x0008c421) main_cf0_pane_g2

0x0001,

0xfe9f,	// (0x0008d489) main_cf0_pane_g

0x9d7d,	// (0x00087367) area_left_week_number_pane_ParamLimits

0x9d90,	// (0x0008737a) area_top_day_name_pane_ParamLimits

0x9d9e,	// (0x00087388) frame_month_view_pane_ParamLimits

0xef5f,	// (0x0008c549) grid_month_view_pane_ParamLimits

0xef6d,	// (0x0008c557) frm_month_g1_ParamLimits

0x9e1c,	// (0x00087406) frm_month_g2_ParamLimits

0x9e2d,	// (0x00087417) frm_month_g3_ParamLimits

0x9e3e,	// (0x00087428) frm_month_g4_ParamLimits

0x9e4f,	// (0x00087439) frm_month_g5_ParamLimits

0x9e60,	// (0x0008744a) frm_month_g6_ParamLimits

0x9e73,	// (0x0008745d) frm_month_g7_ParamLimits

0xef7a,	// (0x0008c564) frm_month_g8_ParamLimits

0x9e86,	// (0x00087470) frm_month_g9_ParamLimits

0x9e93,	// (0x0008747d) frm_month_g10_ParamLimits

0x9ea0,	// (0x0008748a) frm_month_g11_ParamLimits

0x9ead,	// (0x00087497) frm_month_g12_ParamLimits

0x9eba,	// (0x000874a4) frm_month_g13_ParamLimits

0x9ec9,	// (0x000874b3) frm_month_g14_ParamLimits

0x9ed8,	// (0x000874c2) frm_month_g15_ParamLimits

0x9ee7,	// (0x000874d1) frm_month_g16_ParamLimits

0xfef0,	// (0x0008d4da) frm_month_g_ParamLimits

0xef87,	// (0x0008c571) cell_top_day_name_pane_t1_ParamLimits

0x9ef6,	// (0x000874e0) cell_area_left_week_number_pane_g1_ParamLimits

0x9f05,	// (0x000874ef) cell_area_left_week_number_pane_t1_ParamLimits

0xceb6,	// (0x0008a4a0) cell_month_view_pane_g1_ParamLimits

0x9f1b,	// (0x00087505) cell_month_view_pane_t1_ParamLimits

0xa831,	// (0x00087e1b) main_clock2_btn_pane_g1

0xf0bc,	// (0x0008c6a6) main_clock2_btn_pane_t1

0xa8c0,	// (0x00087eaa) listscroll_cmail_pane_ParamLimits

0xe793,	// (0x0008bd7d) main_sp_fs_email_pane_g1_ParamLimits

0xe79f,	// (0x0008bd89) main_sp_fs_email_pane_g2_ParamLimits

0xfccd,	// (0x0008d2b7) main_sp_fs_email_pane_g_ParamLimits

0xeb01,	// (0x0008c0eb) list_recal_day_pane_ParamLimits

0xeb12,	// (0x0008c0fc) mian_recal_day_pane_t1

0x167c,	// (0x0007ec66) list_single_dyc_row_text_pane_t4_ParamLimits

0x167c,	// (0x0007ec66) list_single_dyc_row_text_pane_t4

0x16c1,	// (0x0007ecab) list_single_dyc_row_text_pane_t5_ParamLimits

0x16c1,	// (0x0007ecab) list_single_dyc_row_text_pane_t5

0x1737,	// (0x0007ed21) list_single_dyc_row_text_pane_t6_ParamLimits

0x1737,	// (0x0007ed21) list_single_dyc_row_text_pane_t6

0xaed2,	// (0x000884bc) aid_mgn_list_cale_time_pane

0xa8c0,	// (0x00087eaa) main_gallery2_pane_ParamLimits

0xd052,	// (0x0008a63c) main_clock2_pane_cp01_t1

0xd062,	// (0x0008a64c) main_clock2_pane_cp01_t3

0x0001,

0x0397,	// (0x0007d981) main_clock2_pane_cp01_t

0x2923,	// (0x0007ff0d) cale_week_scroll_pane_g16_ParamLimits

0x2923,	// (0x0007ff0d) cale_week_scroll_pane_g16

0xaae2,	// (0x000880cc) vorec_slider_pane

0xa060,	// (0x0008764a) vidtel_button_pane_t1_ParamLimits
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
	};

} // end of namespace AknLayoutScalable_Elaf_pvp4_apps_vga4_prt_tch_Large
