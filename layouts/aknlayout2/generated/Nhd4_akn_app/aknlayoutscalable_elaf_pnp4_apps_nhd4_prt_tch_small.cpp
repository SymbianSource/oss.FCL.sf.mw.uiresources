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
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pnp4_apps_nhd4_prt_tch + 0x0003d582 };

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
0x2028,	// (0x0003f5aa) Screen

0x2034,	// (0x0003f5b6) application_window

0x2090,	// (0x0003f612) area_bottom_pane_ParamLimits

0x2090,	// (0x0003f612) area_bottom_pane

0x20e9,	// (0x0003f66b) area_top_pane_ParamLimits

0x20e9,	// (0x0003f66b) area_top_pane

0x214d,	// (0x0003f6cf) call_video_uplink_pane_ParamLimits

0x214d,	// (0x0003f6cf) call_video_uplink_pane

0x218c,	// (0x0003f70e) main_pane_ParamLimits

0x218c,	// (0x0003f70e) main_pane

0xc919,	// (0x00049e9b) context_pane

0x53dc,	// (0x0004295e) navi_pane

0x5402,	// (0x00042984) popup_cale_events_window_ParamLimits

0x5402,	// (0x00042984) popup_cale_events_window

0xc92c,	// (0x00049eae) popup_mup_playback_window

0x541a,	// (0x0004299c) signal_pane

0xa88b,	// (0x00047e0d) main_browser_pane

0xaa50,	// (0x00047fd2) main_burst_pane

0x526c,	// (0x000427ee) main_calc_pane

0xc8ff,	// (0x00049e81) main_cale_day_pane

0x28d4,	// (0x0003fe56) main_cale_month_pane

0xc8ff,	// (0x00049e81) main_cale_week_pane

0xaa50,	// (0x00047fd2) main_call_pane

0xa549,	// (0x00047acb) main_call_poc_pane

0xaa50,	// (0x00047fd2) main_camera_pane

0xaa50,	// (0x00047fd2) main_chi_dic_pane

0xb276,	// (0x000487f8) main_clock_pane

0xa549,	// (0x00047acb) main_fmradio_pane

0xaa50,	// (0x00047fd2) main_graph_messa_pane

0xa549,	// (0x00047acb) main_help_pane

0xa88b,	// (0x00047e0d) main_im_pane

0xa7a4,	// (0x00047d26) main_image_pane_ParamLimits

0xa7a4,	// (0x00047d26) main_image_pane

0xa549,	// (0x00047acb) main_location2_pane

0xaa50,	// (0x00047fd2) main_location_pane

0xa7a4,	// (0x00047d26) main_messa_pane

0xa549,	// (0x00047acb) main_mp2_pane

0xaa50,	// (0x00047fd2) main_mp_pane

0xa549,	// (0x00047acb) main_msg_pane

0xa549,	// (0x00047acb) main_mup_eq_pane

0xa549,	// (0x00047acb) main_mup_pane

0xa88b,	// (0x00047e0d) main_notes_pane

0xa549,	// (0x00047acb) main_pec_pane

0xa549,	// (0x00047acb) main_phob_pane

0xa549,	// (0x00047acb) main_pinb_pane

0xa549,	// (0x00047acb) main_postcard_pane

0xa549,	// (0x00047acb) main_qdial_pane

0xaa50,	// (0x00047fd2) main_skin_pane

0xa549,	// (0x00047acb) main_smil2_pane

0xaa50,	// (0x00047fd2) main_smil_pane

0xaa50,	// (0x00047fd2) main_video_pane

0xaa50,	// (0x00047fd2) main_video_tele_pane

0xa7a4,	// (0x00047d26) main_viewer_pane_ParamLimits

0xa7a4,	// (0x00047d26) main_viewer_pane

0xaa50,	// (0x00047fd2) main_vorec_pane

0x52aa,	// (0x0004282c) popup_blid_sat_info_window_ParamLimits

0x52aa,	// (0x0004282c) popup_blid_sat_info_window

0x52ca,	// (0x0004284c) popup_dyc_status_message_window_ParamLimits

0x52ca,	// (0x0004284c) popup_dyc_status_message_window

0x52d8,	// (0x0004285a) popup_grid_large_graphic_window_ParamLimits

0x52d8,	// (0x0004285a) popup_grid_large_graphic_window

0x5367,	// (0x000428e9) popup_loc_request_window_ParamLimits

0x5367,	// (0x000428e9) popup_loc_request_window

0x53b4,	// (0x00042936) popup_wml_address_window_ParamLimits

0x53b4,	// (0x00042936) popup_wml_address_window

0x5144,	// (0x000426c6) call_muted_g1

0x4e00,	// (0x00042382) popup_call_audio_conf_window_ParamLimits

0x4e00,	// (0x00042382) popup_call_audio_conf_window

0x5154,	// (0x000426d6) popup_call_audio_first_window_ParamLimits

0x5154,	// (0x000426d6) popup_call_audio_first_window

0x5194,	// (0x00042716) popup_call_audio_in_window_ParamLimits

0x5194,	// (0x00042716) popup_call_audio_in_window

0x51b8,	// (0x0004273a) popup_call_audio_out_window_ParamLimits

0x51b8,	// (0x0004273a) popup_call_audio_out_window

0x51da,	// (0x0004275c) popup_call_audio_second_window_ParamLimits

0x51da,	// (0x0004275c) popup_call_audio_second_window

0x520a,	// (0x0004278c) popup_call_audio_wait_window_ParamLimits

0x520a,	// (0x0004278c) popup_call_audio_wait_window

0x522b,	// (0x000427ad) popup_number_entry_window_ParamLimits

0x522b,	// (0x000427ad) popup_number_entry_window

0xa136,	// (0x000476b8) bg_popup_call_pane_cp05_ParamLimits

0xa136,	// (0x000476b8) bg_popup_call_pane_cp05

0xa156,	// (0x000476d8) popup_number_entry_window_t1

0xa169,	// (0x000476eb) popup_number_entry_window_t2

0xa17b,	// (0x000476fd) popup_number_entry_window_t3

0x0003,

0xf0af,	// (0x0004c631) popup_number_entry_window_t

0xa18d,	// (0x0004770f) text_title_cp2

0xa1a0,	// (0x00047722) bg_popup_call_pane_cp_ParamLimits

0xa1a0,	// (0x00047722) bg_popup_call_pane_cp

0xa1ae,	// (0x00047730) call_thumbnail_pane

0xa1b6,	// (0x00047738) popup_call_audio_in_window_g1_ParamLimits

0xa1b6,	// (0x00047738) popup_call_audio_in_window_g1

0xa1c2,	// (0x00047744) popup_call_audio_in_window_g2_ParamLimits

0xa1c2,	// (0x00047744) popup_call_audio_in_window_g2

0xa1ce,	// (0x00047750) popup_call_audio_in_window_g3_ParamLimits

0xa1ce,	// (0x00047750) popup_call_audio_in_window_g3

0x0002,

0xf0b8,	// (0x0004c63a) popup_call_audio_in_window_g_ParamLimits

0xf0b8,	// (0x0004c63a) popup_call_audio_in_window_g

0xa1da,	// (0x0004775c) popup_call_audio_in_window_t1_ParamLimits

0xa1da,	// (0x0004775c) popup_call_audio_in_window_t1

0xa1f6,	// (0x00047778) popup_call_audio_in_window_t2_ParamLimits

0xa1f6,	// (0x00047778) popup_call_audio_in_window_t2

0xa212,	// (0x00047794) popup_call_audio_in_window_t3_ParamLimits

0xa212,	// (0x00047794) popup_call_audio_in_window_t3

0x0002,

0xf0bf,	// (0x0004c641) popup_call_audio_in_window_t_ParamLimits

0xf0bf,	// (0x0004c641) popup_call_audio_in_window_t

0xa1a0,	// (0x00047722) bg_popup_call_pane_cp01_ParamLimits

0xa1a0,	// (0x00047722) bg_popup_call_pane_cp01

0xa1ae,	// (0x00047730) call_thumbnail_pane_cp02

0xa225,	// (0x000477a7) call_type_pane_cp022

0xa22d,	// (0x000477af) popup_call_audio_out_window_g1_ParamLimits

0xa22d,	// (0x000477af) popup_call_audio_out_window_g1

0xa23f,	// (0x000477c1) popup_call_audio_out_window_g2_ParamLimits

0xa23f,	// (0x000477c1) popup_call_audio_out_window_g2

0xa24b,	// (0x000477cd) popup_call_audio_out_window_g3_ParamLimits

0xa24b,	// (0x000477cd) popup_call_audio_out_window_g3

0x0002,

0xf0c6,	// (0x0004c648) popup_call_audio_out_window_g_ParamLimits

0xf0c6,	// (0x0004c648) popup_call_audio_out_window_g

0xa25d,	// (0x000477df) popup_call_audio_out_window_t1_ParamLimits

0xa25d,	// (0x000477df) popup_call_audio_out_window_t1

0xa275,	// (0x000477f7) popup_call_audio_out_window_t2_ParamLimits

0xa275,	// (0x000477f7) popup_call_audio_out_window_t2

0x0001,

0xf0cd,	// (0x0004c64f) popup_call_audio_out_window_t_ParamLimits

0xf0cd,	// (0x0004c64f) popup_call_audio_out_window_t

0xa28a,	// (0x0004780c) bg_popup_call_pane_ParamLimits

0xa28a,	// (0x0004780c) bg_popup_call_pane

0x2390,	// (0x0003f912) call_thumbnail_pane_cp_ParamLimits

0x2390,	// (0x0003f912) call_thumbnail_pane_cp

0xa30e,	// (0x00047890) call_type_pane_cp01_ParamLimits

0xa30e,	// (0x00047890) call_type_pane_cp01

0xa352,	// (0x000478d4) popup_call_audio_first_window_g1_ParamLimits

0xa352,	// (0x000478d4) popup_call_audio_first_window_g1

0xa39e,	// (0x00047920) popup_call_audio_first_window_g2_ParamLimits

0xa39e,	// (0x00047920) popup_call_audio_first_window_g2

0x0001,

0xf0d2,	// (0x0004c654) popup_call_audio_first_window_g_ParamLimits

0xf0d2,	// (0x0004c654) popup_call_audio_first_window_g

0xa3e2,	// (0x00047964) popup_call_audio_first_window_t1_ParamLimits

0xa3e2,	// (0x00047964) popup_call_audio_first_window_t1

0xa48e,	// (0x00047a10) popup_call_audio_first_window_t4_ParamLimits

0xa48e,	// (0x00047a10) popup_call_audio_first_window_t4

0xa51a,	// (0x00047a9c) popup_call_audio_first_window_t5_ParamLimits

0xa51a,	// (0x00047a9c) popup_call_audio_first_window_t5

0x0002,

0xf0d7,	// (0x0004c659) popup_call_audio_first_window_t_ParamLimits

0xf0d7,	// (0x0004c659) popup_call_audio_first_window_t

0xa549,	// (0x00047acb) bg_popup_call_pane_cp02

0xa553,	// (0x00047ad5) call_type_pane_cp023

0xa55b,	// (0x00047add) popup_call_audio_wait_window_g1

0xa563,	// (0x00047ae5) popup_call_audio_wait_window_g2

0x0001,

0xf0de,	// (0x0004c660) popup_call_audio_wait_window_g

0xa56b,	// (0x00047aed) popup_call_audio_wait_window_t3

0xa579,	// (0x00047afb) bg_popup_call_pane_cp03_ParamLimits

0xa579,	// (0x00047afb) bg_popup_call_pane_cp03

0xa5d9,	// (0x00047b5b) call_thumbnail_pane_cp011_ParamLimits

0xa5d9,	// (0x00047b5b) call_thumbnail_pane_cp011

0xa5e5,	// (0x00047b67) call_type_pane_cp034_ParamLimits

0xa5e5,	// (0x00047b67) call_type_pane_cp034

0xa621,	// (0x00047ba3) popup_call_audio_second_window_g1_ParamLimits

0xa621,	// (0x00047ba3) popup_call_audio_second_window_g1

0xa65d,	// (0x00047bdf) popup_call_audio_second_window_g2_ParamLimits

0xa65d,	// (0x00047bdf) popup_call_audio_second_window_g2

0x0001,

0xf0e3,	// (0x0004c665) popup_call_audio_second_window_g_ParamLimits

0xf0e3,	// (0x0004c665) popup_call_audio_second_window_g

0xa699,	// (0x00047c1b) popup_call_audio_second_window_t1_ParamLimits

0xa699,	// (0x00047c1b) popup_call_audio_second_window_t1

0xa71a,	// (0x00047c9c) popup_call_audio_second_window_t2_ParamLimits

0xa71a,	// (0x00047c9c) popup_call_audio_second_window_t2

0xa750,	// (0x00047cd2) popup_call_audio_second_window_t3_ParamLimits

0xa750,	// (0x00047cd2) popup_call_audio_second_window_t3

0x0002,

0xf0e8,	// (0x0004c66a) popup_call_audio_second_window_t_ParamLimits

0xf0e8,	// (0x0004c66a) popup_call_audio_second_window_t

0xa549,	// (0x00047acb) bg_popup_call_pane_cp04

0xa786,	// (0x00047d08) list_conf_pane

0xa78e,	// (0x00047d10) popup_call_audio_conf_window_t1

0xa79c,	// (0x00047d1e) call_thumbnail_pane_g1

0xa7a4,	// (0x00047d26) bg_pinb_pane_ParamLimits

0xa7a4,	// (0x00047d26) bg_pinb_pane

0xa7b2,	// (0x00047d34) find_pinb_pane

0xa7bb,	// (0x00047d3d) listscroll_pinb_pane_ParamLimits

0xa7bb,	// (0x00047d3d) listscroll_pinb_pane

0xa7ca,	// (0x00047d4c) pinb_bg_pane_g1

0x23b4,	// (0x0003f936) pinb_bg_pane_g2

0x23c0,	// (0x0003f942) pinb_bg_pane_g3

0x23cc,	// (0x0003f94e) pinb_bg_pane_g4

0x23d8,	// (0x0003f95a) pinb_bg_pane_g5

0x23e4,	// (0x0003f966) pinb_bg_pane_g6

0x23ef,	// (0x0003f971) pinb_bg_pane_g7

0x23fa,	// (0x0003f97c) pinb_bg_pane_g8

0x2405,	// (0x0003f987) pinb_bg_pane_g9

0x240f,	// (0x0003f991) pinb_bg_pane_g10

0x0009,

0xf0ef,	// (0x0004c671) pinb_bg_pane_g

0x242c,	// (0x0003f9ae) grid_pinb_pane

0x2437,	// (0x0003f9b9) list_pinb_pane

0x2442,	// (0x0003f9c4) scroll_pane_cp01_ParamLimits

0x2442,	// (0x0003f9c4) scroll_pane_cp01

0xa7d4,	// (0x00047d56) find_pinb_pane_g1_ParamLimits

0xa7d4,	// (0x00047d56) find_pinb_pane_g1

0xa7ec,	// (0x00047d6e) find_pinb_pane_t1

0xa7fe,	// (0x00047d80) find_pinb_pane_t2

0x0001,

0xf109,	// (0x0004c68b) find_pinb_pane_t

0xa813,	// (0x00047d95) input_focus_pane_cp01_ParamLimits

0xa813,	// (0x00047d95) input_focus_pane_cp01

0x2454,	// (0x0003f9d6) cell_pinb_pane_ParamLimits

0x2454,	// (0x0003f9d6) cell_pinb_pane

0x247f,	// (0x0003fa01) cell_pinb_pane_g1_ParamLimits

0x247f,	// (0x0003fa01) cell_pinb_pane_g1

0xa81f,	// (0x00047da1) cell_pinb_pane_g2_ParamLimits

0xa81f,	// (0x00047da1) cell_pinb_pane_g2

0xa82b,	// (0x00047dad) cell_pinb_pane_g3_ParamLimits

0xa82b,	// (0x00047dad) cell_pinb_pane_g3

0x0002,

0xf10e,	// (0x0004c690) cell_pinb_pane_g_ParamLimits

0xf10e,	// (0x0004c690) cell_pinb_pane_g

0xa549,	// (0x00047acb) grid_highlight_pane_cp01

0x2494,	// (0x0003fa16) list_pinb_item_pane_ParamLimits

0x2494,	// (0x0003fa16) list_pinb_item_pane

0xa549,	// (0x00047acb) list_highlight_pane_cp02

0x24bd,	// (0x0003fa3f) list_pinb_item_pane_g1_ParamLimits

0x24bd,	// (0x0003fa3f) list_pinb_item_pane_g1

0x24ca,	// (0x0003fa4c) list_pinb_item_pane_g2_ParamLimits

0x24ca,	// (0x0003fa4c) list_pinb_item_pane_g2

0x24d6,	// (0x0003fa58) list_pinb_item_pane_g3_ParamLimits

0x24d6,	// (0x0003fa58) list_pinb_item_pane_g3

0x24e7,	// (0x0003fa69) list_pinb_item_pane_g4_ParamLimits

0x24e7,	// (0x0003fa69) list_pinb_item_pane_g4

0x0003,

0xf115,	// (0x0004c697) list_pinb_item_pane_g_ParamLimits

0xf115,	// (0x0004c697) list_pinb_item_pane_g

0x24f3,	// (0x0003fa75) list_pinb_item_pane_t1_ParamLimits

0x24f3,	// (0x0003fa75) list_pinb_item_pane_t1

0x2524,	// (0x0003faa6) calc_display_pane

0x2542,	// (0x0003fac4) calc_paper_pane

0x255e,	// (0x0003fae0) grid_calc_pane

0xa549,	// (0x00047acb) bg_list_pane_cp01

0x258a,	// (0x0003fb0c) clock_g1

0x2592,	// (0x0003fb14) clock_g2

0x0001,

0xf11e,	// (0x0004c6a0) clock_g

0x259c,	// (0x0003fb1e) clock_t1_ParamLimits

0x259c,	// (0x0003fb1e) clock_t1

0x25b1,	// (0x0003fb33) clock_t2_ParamLimits

0x25b1,	// (0x0003fb33) clock_t2

0x25c3,	// (0x0003fb45) clock_t3_ParamLimits

0x25c3,	// (0x0003fb45) clock_t3

0x25d5,	// (0x0003fb57) clock_t4_ParamLimits

0x25d5,	// (0x0003fb57) clock_t4

0x25e7,	// (0x0003fb69) clock_t5_ParamLimits

0x25e7,	// (0x0003fb69) clock_t5

0x25fc,	// (0x0003fb7e) clock_t6_ParamLimits

0x25fc,	// (0x0003fb7e) clock_t6

0x260e,	// (0x0003fb90) clock_t7_ParamLimits

0x260e,	// (0x0003fb90) clock_t7

0x2620,	// (0x0003fba2) clock_t8_ParamLimits

0x2620,	// (0x0003fba2) clock_t8

0x2636,	// (0x0003fbb8) clock_t9_ParamLimits

0x2636,	// (0x0003fbb8) clock_t9

0x0008,

0xf123,	// (0x0004c6a5) clock_t_ParamLimits

0xf123,	// (0x0004c6a5) clock_t

0xa837,	// (0x00047db9) popup_clock_analogue_window_cp02

0xa837,	// (0x00047db9) popup_clock_digital_window_cp01

0xa83f,	// (0x00047dc1) listscroll_help_pane

0xa549,	// (0x00047acb) phob_pre_status_pane

0xa849,	// (0x00047dcb) grid_qdial_pane

0xa7a4,	// (0x00047d26) listscroll_mce_pane

0xa7a4,	// (0x00047d26) bg_notes_pane

0xa853,	// (0x00047dd5) list_notes_pane

0x264c,	// (0x0003fbce) scroll_pane_cp06

0xa861,	// (0x00047de3) bg_calc_paper_pane

0x265b,	// (0x0003fbdd) list_calc_pane

0xa88b,	// (0x00047e0d) bg_calc_display_pane

0x2675,	// (0x0003fbf7) calc_display_pane_t1

0x268a,	// (0x0003fc0c) calc_display_pane_t2

0x269f,	// (0x0003fc21) calc_display_pane_t3

0x0002,

0xf136,	// (0x0004c6b8) calc_display_pane_t

0x26b1,	// (0x0003fc33) cell_calc_pane_ParamLimits

0x26b1,	// (0x0003fc33) cell_calc_pane

0xa897,	// (0x00047e19) bg_calc_paper_pane_g1

0xa8a3,	// (0x00047e25) bg_calc_paper_pane_g2

0xa8af,	// (0x00047e31) bg_calc_paper_pane_g3

0xa8bb,	// (0x00047e3d) bg_calc_paper_pane_g4

0xa8c7,	// (0x00047e49) bg_calc_paper_pane_g5

0x26de,	// (0x0003fc60) bg_calc_paper_pane_g6

0x26ef,	// (0x0003fc71) bg_calc_paper_pane_g7

0x2700,	// (0x0003fc82) bg_calc_paper_pane_g8

0x0007,

0xf13d,	// (0x0004c6bf) bg_calc_paper_pane_g

0x2711,	// (0x0003fc93) calc_bg_paper_pane_g9

0x2722,	// (0x0003fca4) list_calc_item_pane_ParamLimits

0x2722,	// (0x0003fca4) list_calc_item_pane

0xa8d3,	// (0x00047e55) list_calc_item_pane_g1

0x274f,	// (0x0003fcd1) list_calc_item_pane_t1_ParamLimits

0x274f,	// (0x0003fcd1) list_calc_item_pane_t1

0x2761,	// (0x0003fce3) list_calc_item_pane_t2_ParamLimits

0x2761,	// (0x0003fce3) list_calc_item_pane_t2

0x0001,

0xf14e,	// (0x0004c6d0) list_calc_item_pane_t_ParamLimits

0xf14e,	// (0x0004c6d0) list_calc_item_pane_t

0xa8e0,	// (0x00047e62) cell_calc_pane_g1

0xa8ea,	// (0x00047e6c) grid_highlight_pane_cp02

0x2791,	// (0x0003fd13) bg_calc_display_pane_g1

0x279a,	// (0x0003fd1c) bg_calc_display_pane_g2

0x27a4,	// (0x0003fd26) bg_calc_display_pane_g3

0x0002,

0xf158,	// (0x0004c6da) bg_calc_display_pane_g

0x27ad,	// (0x0003fd2f) cell_qdial_pane_ParamLimits

0x27ad,	// (0x0003fd2f) cell_qdial_pane

0x27c1,	// (0x0003fd43) cell_qdial_pane_g1_ParamLimits

0x27c1,	// (0x0003fd43) cell_qdial_pane_g1

0x27ce,	// (0x0003fd50) cell_qdial_pane_g2_ParamLimits

0x27ce,	// (0x0003fd50) cell_qdial_pane_g2

0xa90c,	// (0x00047e8e) cell_qdial_pane_g3_ParamLimits

0xa90c,	// (0x00047e8e) cell_qdial_pane_g3

0x0003,

0xf15f,	// (0x0004c6e1) cell_qdial_pane_g_ParamLimits

0xf15f,	// (0x0004c6e1) cell_qdial_pane_g

0x27eb,	// (0x0003fd6d) cell_qdial_pane_t1_ParamLimits

0x27eb,	// (0x0003fd6d) cell_qdial_pane_t1

0x2803,	// (0x0003fd85) cell_qdial_pane_t2_ParamLimits

0x2803,	// (0x0003fd85) cell_qdial_pane_t2

0x2816,	// (0x0003fd98) cell_qdial_pane_t3_ParamLimits

0x2816,	// (0x0003fd98) cell_qdial_pane_t3

0x0002,

0xf168,	// (0x0004c6ea) cell_qdial_pane_t_ParamLimits

0xf168,	// (0x0004c6ea) cell_qdial_pane_t

0xa549,	// (0x00047acb) grid_highlight_pane_cp04

0xa918,	// (0x00047e9a) thumbnail_qdial_pane_ParamLimits

0xa918,	// (0x00047e9a) thumbnail_qdial_pane

0xa974,	// (0x00047ef6) list_help_pane

0xa97d,	// (0x00047eff) scroll_pane_cp02

0x2829,	// (0x0003fdab) help_list_pane_t1_ParamLimits

0x2829,	// (0x0003fdab) help_list_pane_t1

0x2860,	// (0x0003fde2) bg_notes_pane_g2

0x2868,	// (0x0003fdea) bg_notes_pane_g3

0x2870,	// (0x0003fdf2) notes_bg_pane_g1

0x2878,	// (0x0003fdfa) notes_bg_pane_g4

0x2880,	// (0x0003fe02) notes_bg_pane_g5

0x2888,	// (0x0003fe0a) notes_bg_pane_g6

0x2890,	// (0x0003fe12) notes_bg_pane_g7

0x2898,	// (0x0003fe1a) notes_bg_pane_g8

0x28a0,	// (0x0003fe22) notes_bg_pane_g9

0x0006,

0xf186,	// (0x0004c708) notes_bg_pane_g

0x28a8,	// (0x0003fe2a) list_notes_text_pane_ParamLimits

0x28a8,	// (0x0003fe2a) list_notes_text_pane

0xa986,	// (0x00047f08) list_notes_text_pane_g1

0x0c25,	// (0x0003e1a7) list_notes_text_pane_t1

0x28d4,	// (0x0003fe56) listscroll_cale_week_pane

0x28f9,	// (0x0003fe7b) bg_cale_heading_pane

0xa9a9,	// (0x00047f2b) bg_cale_pane_cp01

0x291b,	// (0x0003fe9d) cale_week_corner_pane

0x2935,	// (0x0003feb7) cale_week_day_heading_pane

0x2957,	// (0x0003fed9) cale_week_scroll_pane_g1

0x2974,	// (0x0003fef6) cale_week_scroll_pane_g2

0x2987,	// (0x0003ff09) cale_week_scroll_pane_g3

0x299a,	// (0x0003ff1c) cale_week_scroll_pane_g4

0x29ad,	// (0x0003ff2f) cale_week_scroll_pane_g5

0x29c0,	// (0x0003ff42) cale_week_scroll_pane_g6

0x29d3,	// (0x0003ff55) cale_week_scroll_pane_g7

0x29e8,	// (0x0003ff6a) cale_week_scroll_pane_g8

0x29fd,	// (0x0003ff7f) cale_week_scroll_pane_g9

0x2a10,	// (0x0003ff92) cale_week_scroll_pane_g10

0x2a23,	// (0x0003ffa5) cale_week_scroll_pane_g11

0x2a36,	// (0x0003ffb8) cale_week_scroll_pane_g12

0x2a4d,	// (0x0003ffcf) cale_week_scroll_pane_g13

0x2a68,	// (0x0003ffea) cale_week_scroll_pane_g14

0x2a83,	// (0x00040005) cale_week_scroll_pane_g15

0x000f,

0xf195,	// (0x0004c717) cale_week_scroll_pane_g

0x2ab3,	// (0x00040035) cale_week_time_pane

0x2ac8,	// (0x0004004a) grid_cale_week_pane

0xa9d8,	// (0x00047f5a) scroll_pane_cp08

0x2ae7,	// (0x00040069) cell_cale_week_pane_ParamLimits

0x2ae7,	// (0x00040069) cell_cale_week_pane

0x2b49,	// (0x000400cb) cale_week_day_heading_pane_t1

0x2b64,	// (0x000400e6) cale_week_day_heading_pane_t2

0x2b7f,	// (0x00040101) cale_week_day_heading_pane_t3

0x2b9a,	// (0x0004011c) cale_week_day_heading_pane_t4

0x2bb5,	// (0x00040137) cale_week_day_heading_pane_t5

0x2bd0,	// (0x00040152) cale_week_day_heading_pane_t6

0x2beb,	// (0x0004016d) cale_week_day_heading_pane_t7

0x0006,

0xf1b6,	// (0x0004c738) cale_week_day_heading_pane_t

0xa9f5,	// (0x00047f77) bg_cale_side_pane

0x2c06,	// (0x00040188) cale_week_time_pane_t1

0x2c20,	// (0x000401a2) cale_week_time_pane_t2

0x2c3a,	// (0x000401bc) cale_week_time_pane_t3

0x2c54,	// (0x000401d6) cale_week_time_pane_t4

0x2c6e,	// (0x000401f0) cale_week_time_pane_t5

0x2c88,	// (0x0004020a) cale_week_time_pane_t6

0x2ca8,	// (0x0004022a) cale_week_time_pane_t7

0x2cca,	// (0x0004024c) cale_week_time_pane_t8

0x0007,

0xf1c5,	// (0x0004c747) cale_week_time_pane_t

0x2cee,	// (0x00040270) cell_cale_week_pane_g2

0x2d12,	// (0x00040294) cell_cale_week_pane_g3_ParamLimits

0x2d12,	// (0x00040294) cell_cale_week_pane_g3

0xaa03,	// (0x00047f85) grid_highlight_pane_cp07

0xaa0b,	// (0x00047f8d) listscroll_gms_pane

0xaa15,	// (0x00047f97) grid_gms_pane

0xaa1e,	// (0x00047fa0) listscroll_gms_pane_g1

0xaa26,	// (0x00047fa8) listscroll_gms_pane_g2

0x0001,

0xf1d6,	// (0x0004c758) listscroll_gms_pane_g

0x2d2a,	// (0x000402ac) scroll_pane_cp010

0x2d35,	// (0x000402b7) cell_gms_pane_ParamLimits

0x2d35,	// (0x000402b7) cell_gms_pane

0x2d45,	// (0x000402c7) cell_gms_pane_g1

0xaa2e,	// (0x00047fb0) cell_gms_pane_g2

0xaa36,	// (0x00047fb8) cell_gms_pane_g3

0xaa3f,	// (0x00047fc1) cell_gms_pane_g4

0x0003,

0xf1db,	// (0x0004c75d) cell_gms_pane_g

0xaa48,	// (0x00047fca) grid_highlight_pane_cp09

0x50ec,	// (0x0004266e) phob_pre_status_pane_g1

0x50f4,	// (0x00042676) phob_pre_status_pane_g2

0x50fc,	// (0x0004267e) phob_pre_status_pane_g3

0x5104,	// (0x00042686) phob_pre_status_pane_g4

0x0004,

0xf5d9,	// (0x0004cb5b) phob_pre_status_pane_g

0x5114,	// (0x00042696) phob_pre_status_pane_t1

0x5124,	// (0x000426a6) phob_pre_status_pane_t2

0x5134,	// (0x000426b6) phob_pre_status_pane_t3

0x0002,

0xf5e4,	// (0x0004cb66) phob_pre_status_pane_t

0xaa50,	// (0x00047fd2) bg_list_pane_cp05

0x2d55,	// (0x000402d7) grid_vorec_pane

0x2d5f,	// (0x000402e1) vorec_t1

0x2d6d,	// (0x000402ef) vorec_t2

0x2d7b,	// (0x000402fd) vorec_t3

0x2d89,	// (0x0004030b) vorec_t4

0xa0d0,	// (0x00047652) vorec_t5

0xa0de,	// (0x00047660) vorec_t6

0x0004,

0xf1e4,	// (0x0004c766) vorec_t

0xa0ec,	// (0x0004766e) wait_bar_pane_cp01

0x2da5,	// (0x00040327) cell_vorec_pane_ParamLimits

0x2da5,	// (0x00040327) cell_vorec_pane

0x2db8,	// (0x0004033a) cell_vorec_pane_g1

0xa549,	// (0x00047acb) grid_highlight_pane_cp05

0x2dd2,	// (0x00040354) cams_zoom_pane

0x2dde,	// (0x00040360) image_vga_pane

0x2ded,	// (0x0004036f) main_camera_pane_g1

0x2dfb,	// (0x0004037d) main_camera_pane_g2

0x2e07,	// (0x00040389) main_camera_pane_g3

0x2e13,	// (0x00040395) main_camera_pane_g4

0x2e1f,	// (0x000403a1) main_camera_pane_g5

0x2e2b,	// (0x000403ad) main_camera_pane_g6

0x2e37,	// (0x000403b9) main_camera_pane_g7

0x0007,

0xf1ef,	// (0x0004c771) main_camera_pane_g

0x2e43,	// (0x000403c5) main_camera_pane_t1

0x2e55,	// (0x000403d7) main_camera_pane_t2

0x0001,

0xf200,	// (0x0004c782) main_camera_pane_t

0x2e76,	// (0x000403f8) cams_zoom_pane_cp_ParamLimits

0x2e76,	// (0x000403f8) cams_zoom_pane_cp

0x2e9a,	// (0x0004041c) image_cif_pane_ParamLimits

0x2e9a,	// (0x0004041c) image_cif_pane

0x2eb8,	// (0x0004043a) image_subqcif_pane

0x2ec0,	// (0x00040442) main_video_pane_g1_ParamLimits

0x2ec0,	// (0x00040442) main_video_pane_g1

0x2ee0,	// (0x00040462) main_video_pane_g2_ParamLimits

0x2ee0,	// (0x00040462) main_video_pane_g2

0x2f10,	// (0x00040492) main_video_pane_g3_ParamLimits

0x2f10,	// (0x00040492) main_video_pane_g3

0x2f39,	// (0x000404bb) main_video_pane_g4_ParamLimits

0x2f39,	// (0x000404bb) main_video_pane_g4

0x2f62,	// (0x000404e4) main_video_pane_g5_ParamLimits

0x2f62,	// (0x000404e4) main_video_pane_g5

0xaa64,	// (0x00047fe6) main_video_pane_g6_ParamLimits

0xaa64,	// (0x00047fe6) main_video_pane_g6

0x0006,

0xf205,	// (0x0004c787) main_video_pane_g_ParamLimits

0xf205,	// (0x0004c787) main_video_pane_g

0x2f84,	// (0x00040506) main_video_pane_t1_ParamLimits

0x2f84,	// (0x00040506) main_video_pane_t1

0xaa7e,	// (0x00048000) cams_zoom_pane_g1

0xaa87,	// (0x00048009) cams_zoom_pane_g2

0xaa90,	// (0x00048012) cams_zoom_pane_g3

0xaa99,	// (0x0004801b) cams_zoom_pane_g4

0x0003,

0xf214,	// (0x0004c796) cams_zoom_pane_g

0x2fce,	// (0x00040550) grid_cams_pane

0x2fdc,	// (0x0004055e) linegrid_cams_pane

0x2fea,	// (0x0004056c) cell_cams_pane_ParamLimits

0x2fea,	// (0x0004056c) cell_cams_pane

0xaaa2,	// (0x00048024) cams_burst_image_pane

0xaaaa,	// (0x0004802c) cell_cams_pane_g1

0xa549,	// (0x00047acb) grid_highlight_pane_cp03

0xa8e0,	// (0x00047e62) mp_bg_pane_g1

0xa549,	// (0x00047acb) bg_list_pane_cp03

0xc824,	// (0x00049da6) bg_mp_pane

0xc82c,	// (0x00049dae) grid_mp_pane

0xc834,	// (0x00049db6) media_player_g1

0xc83c,	// (0x00049dbe) media_player_t1

0xc84a,	// (0x00049dcc) media_player_t2

0xc858,	// (0x00049dda) media_player_t3

0xc866,	// (0x00049de8) media_player_t4

0xc874,	// (0x00049df6) media_player_t5

0xc882,	// (0x00049e04) media_player_t6

0xc890,	// (0x00049e12) media_player_t7

0x0006,

0xf5c3,	// (0x0004cb45) media_player_t

0xc89e,	// (0x00049e20) wait_bar_pane_cp02

0xf5a8,	// (0x0004cb2a) main_usb_pane_t

0x50e3,	// (0x00042665) cell_mp_pane

0xa8e0,	// (0x00047e62) cell_mp_pane_g1

0xa549,	// (0x00047acb) grid_highlight_pane_cp06

0xaab2,	// (0x00048034) grid_skin_colour_pane

0xaaba,	// (0x0004803c) list_highlight_pane_cp03

0x2ffd,	// (0x0004057f) skin_g1

0xaac2,	// (0x00048044) skin_t1

0xaad1,	// (0x00048053) skin_t2

0x0001,

0xf249,	// (0x0004c7cb) skin_t

0x3007,	// (0x00040589) cell_skin_colour_pane_ParamLimits

0x3007,	// (0x00040589) cell_skin_colour_pane

0xaadf,	// (0x00048061) cell_skin_colour_pane_g1

0x308b,	// (0x0004060d) call_video_g1_ParamLimits

0x308b,	// (0x0004060d) call_video_g1

0x309b,	// (0x0004061d) call_video_g2_ParamLimits

0x309b,	// (0x0004061d) call_video_g2

0x0001,

0xf24e,	// (0x0004c7d0) call_video_g_ParamLimits

0xf24e,	// (0x0004c7d0) call_video_g

0x30f5,	// (0x00040677) call_video_uplink_pane_cp1_ParamLimits

0x30f5,	// (0x00040677) call_video_uplink_pane_cp1

0xaaf1,	// (0x00048073) call_video_uplink_pane_cp2

0x31c1,	// (0x00040743) video_down_crop_pane_ParamLimits

0x31c1,	// (0x00040743) video_down_crop_pane

0x32b3,	// (0x00040835) video_down_pane_ParamLimits

0x32b3,	// (0x00040835) video_down_pane

0xaaf9,	// (0x0004807b) video_down_subqcif_pane_ParamLimits

0xaaf9,	// (0x0004807b) video_down_subqcif_pane

0xab11,	// (0x00048093) video_down_subqcif_pane_cp_ParamLimits

0xab11,	// (0x00048093) video_down_subqcif_pane_cp

0xab37,	// (0x000480b9) im_reading_pane_ParamLimits

0xab37,	// (0x000480b9) im_reading_pane

0x33d3,	// (0x00040955) im_writing_pane_ParamLimits

0x33d3,	// (0x00040955) im_writing_pane

0x33f1,	// (0x00040973) im_reading_pane_t1

0xab51,	// (0x000480d3) list_im_pane

0xab62,	// (0x000480e4) scroll_pane_cp07

0x3449,	// (0x000409cb) im_writing_pane_t1_ParamLimits

0x3449,	// (0x000409cb) im_writing_pane_t1

0xab7b,	// (0x000480fd) im_writing_pane_t2_ParamLimits

0xab7b,	// (0x000480fd) im_writing_pane_t2

0x0001,

0xf258,	// (0x0004c7da) im_writing_pane_t_ParamLimits

0xf258,	// (0x0004c7da) im_writing_pane_t

0xa549,	// (0x00047acb) input_focus_pane_cp04

0xa549,	// (0x00047acb) input_focus_pane_cp05

0x345b,	// (0x000409dd) list_im_single_pane_ParamLimits

0x345b,	// (0x000409dd) list_im_single_pane

0x3482,	// (0x00040a04) list_single_im_pane_t1

0x50a7,	// (0x00042629) blid_accuracy_pane

0x50af,	// (0x00042631) blid_compass_pane

0x50b9,	// (0x0004263b) main_location_t1

0x50c7,	// (0x00042649) main_location_t2

0x50d5,	// (0x00042657) main_location_t3

0x0002,

0xf5d2,	// (0x0004cb54) main_location_t

0xa549,	// (0x00047acb) aid_levels_location

0xa8e0,	// (0x00047e62) blid_accuracy_pane_g1

0xa8e0,	// (0x00047e62) blid_accuracy_pane_g2

0x0001,

0xf2ba,	// (0x0004c83c) blid_accuracy_pane_g

0xabc3,	// (0x00048145) wml_content_pane

0xac01,	// (0x00048183) wml_button_pane_ParamLimits

0xac01,	// (0x00048183) wml_button_pane

0x3491,	// (0x00040a13) wml_list_single_large_pane_ParamLimits

0x3491,	// (0x00040a13) wml_list_single_large_pane

0x34bc,	// (0x00040a3e) wml_list_single_medium_pane_ParamLimits

0x34bc,	// (0x00040a3e) wml_list_single_medium_pane

0x34ee,	// (0x00040a70) wml_list_single_small_pane_ParamLimits

0x34ee,	// (0x00040a70) wml_list_single_small_pane

0xac15,	// (0x00048197) wml_selection_box_pane_ParamLimits

0xac15,	// (0x00048197) wml_selection_box_pane

0xac28,	// (0x000481aa) wml_list_single_pane_t1

0xac37,	// (0x000481b9) wml_list_single_medium_pane_t1

0xac46,	// (0x000481c8) wml_list_single_large_pane_t1

0xac55,	// (0x000481d7) input_focus_pane_cp02_ParamLimits

0xac55,	// (0x000481d7) input_focus_pane_cp02

0xac68,	// (0x000481ea) wml_selection_box_pane_g1

0xac71,	// (0x000481f3) wml_selection_box_pane_t1_ParamLimits

0xac71,	// (0x000481f3) wml_selection_box_pane_t1

0xa7a4,	// (0x00047d26) bg_wml_button_pane_ParamLimits

0xa7a4,	// (0x00047d26) bg_wml_button_pane

0xac89,	// (0x0004820b) wml_button_pane_g1

0xac91,	// (0x00048213) wml_button_pane_t1

0xac89,	// (0x0004820b) wml_button_bg_pane_g1

0xaca1,	// (0x00048223) wml_button_bg_pane_g2

0xaca9,	// (0x0004822b) wml_button_bg_pane_g3

0xacb1,	// (0x00048233) wml_button_bg_pane_g4

0xacb9,	// (0x0004823b) wml_button_bg_pane_g5

0xacc1,	// (0x00048243) wml_button_bg_pane_g6

0xacc9,	// (0x0004824b) wml_button_bg_pane_g7

0xacd1,	// (0x00048253) wml_button_bg_pane_g8

0xacd9,	// (0x0004825b) wml_button_bg_pane_g9

0x0008,

0xf25d,	// (0x0004c7df) wml_button_bg_pane_g

0x352b,	// (0x00040aad) bg_list_pane_cp02

0xace1,	// (0x00048263) mce_header_pane_ParamLimits

0xace1,	// (0x00048263) mce_header_pane

0xacf7,	// (0x00048279) mce_icon_pane

0xacf7,	// (0x00048279) mce_image_pane

0xad00,	// (0x00048282) mce_text_pane_ParamLimits

0xad00,	// (0x00048282) mce_text_pane

0x3535,	// (0x00040ab7) scroll_pane_cp03

0xabf9,	// (0x0004817b) scroll_pane_cp04

0xad13,	// (0x00048295) scroll_pane_cp05_ParamLimits

0xad13,	// (0x00048295) scroll_pane_cp05

0x353f,	// (0x00040ac1) mce_header_field_pane_ParamLimits

0x353f,	// (0x00040ac1) mce_header_field_pane

0x355f,	// (0x00040ae1) mce_header_field_pane_2_ParamLimits

0x355f,	// (0x00040ae1) mce_header_field_pane_2

0x3575,	// (0x00040af7) mce_header_field_pane_3

0x357d,	// (0x00040aff) list_single_mce_message_pane_ParamLimits

0x357d,	// (0x00040aff) list_single_mce_message_pane

0x35ab,	// (0x00040b2d) list_single_mce_smart_pane_ParamLimits

0x35ab,	// (0x00040b2d) list_single_mce_smart_pane

0xad1f,	// (0x000482a1) input_focus_pane_cp03

0xad28,	// (0x000482aa) list_header_data_pane

0x35e4,	// (0x00040b66) mce_header_field_pane_t1

0x35f2,	// (0x00040b74) list_single_mce_header_pane_ParamLimits

0x35f2,	// (0x00040b74) list_single_mce_header_pane

0xad30,	// (0x000482b2) list_single_mce_header_pane_t1

0xad3f,	// (0x000482c1) list_single_mce_message_pane_g1

0xad47,	// (0x000482c9) list_single_mce_message_pane_t1

0x3648,	// (0x00040bca) bg_cale_heading_pane_cp01_ParamLimits

0x3648,	// (0x00040bca) bg_cale_heading_pane_cp01

0xad55,	// (0x000482d7) bg_cale_pane_cp02_ParamLimits

0xad55,	// (0x000482d7) bg_cale_pane_cp02

0x3696,	// (0x00040c18) cale_month_corner_pane

0x36b5,	// (0x00040c37) cale_month_day_heading_pane_ParamLimits

0x36b5,	// (0x00040c37) cale_month_day_heading_pane

0x371b,	// (0x00040c9d) cale_month_pane_g1_ParamLimits

0x371b,	// (0x00040c9d) cale_month_pane_g1

0x375e,	// (0x00040ce0) cale_month_pane_g2_ParamLimits

0x375e,	// (0x00040ce0) cale_month_pane_g2

0x3798,	// (0x00040d1a) cale_month_pane_g3_ParamLimits

0x3798,	// (0x00040d1a) cale_month_pane_g3

0x37e8,	// (0x00040d6a) cale_month_pane_g4_ParamLimits

0x37e8,	// (0x00040d6a) cale_month_pane_g4

0x3838,	// (0x00040dba) cale_month_pane_g5_ParamLimits

0x3838,	// (0x00040dba) cale_month_pane_g5

0x3888,	// (0x00040e0a) cale_month_pane_g6_ParamLimits

0x3888,	// (0x00040e0a) cale_month_pane_g6

0x38d8,	// (0x00040e5a) cale_month_pane_g7_ParamLimits

0x38d8,	// (0x00040e5a) cale_month_pane_g7

0x3940,	// (0x00040ec2) cale_month_pane_g8_ParamLimits

0x3940,	// (0x00040ec2) cale_month_pane_g8

0x39a8,	// (0x00040f2a) cale_month_pane_g9_ParamLimits

0x39a8,	// (0x00040f2a) cale_month_pane_g9

0x3a06,	// (0x00040f88) cale_month_pane_g10_ParamLimits

0x3a06,	// (0x00040f88) cale_month_pane_g10

0x3a64,	// (0x00040fe6) cale_month_pane_g11_ParamLimits

0x3a64,	// (0x00040fe6) cale_month_pane_g11

0x3ab8,	// (0x0004103a) cale_month_pane_g12_ParamLimits

0x3ab8,	// (0x0004103a) cale_month_pane_g12

0x3b0e,	// (0x00041090) cale_month_pane_g13_ParamLimits

0x3b0e,	// (0x00041090) cale_month_pane_g13

0x000c,

0xf270,	// (0x0004c7f2) cale_month_pane_g_ParamLimits

0xf270,	// (0x0004c7f2) cale_month_pane_g

0x3b64,	// (0x000410e6) cale_month_week_pane

0x3b88,	// (0x0004110a) grid_cale_month_pane_ParamLimits

0x3b88,	// (0x0004110a) grid_cale_month_pane

0x3be5,	// (0x00041167) cale_month_day_heading_pane_t1

0x3c6b,	// (0x000411ed) cale_month_day_heading_pane_t2

0x3ce4,	// (0x00041266) cale_month_day_heading_pane_t3

0x3d5d,	// (0x000412df) cale_month_day_heading_pane_t4

0x3dd6,	// (0x00041358) cale_month_day_heading_pane_t5

0x3e4f,	// (0x000413d1) cale_month_day_heading_pane_t6

0x3ec8,	// (0x0004144a) cale_month_day_heading_pane_t7

0x0006,

0xf28b,	// (0x0004c80d) cale_month_day_heading_pane_t

0xa9f5,	// (0x00047f77) bg_cale_side_pane_cp01

0x3f59,	// (0x000414db) cale_month_week_pane_t1

0x3f72,	// (0x000414f4) cale_month_week_pane_t2

0x3f8b,	// (0x0004150d) cale_month_week_pane_t3

0x3fa4,	// (0x00041526) cale_month_week_pane_t4

0x3fbf,	// (0x00041541) cale_month_week_pane_t5

0x3fe0,	// (0x00041562) cale_month_week_pane_t6

0x0005,

0xf29a,	// (0x0004c81c) cale_month_week_pane_t

0x4001,	// (0x00041583) cell_cale_month_pane_ParamLimits

0x4001,	// (0x00041583) cell_cale_month_pane

0x4127,	// (0x000416a9) cell_cale_month_pane_g1

0x4133,	// (0x000416b5) cell_cale_month_pane_t1_ParamLimits

0x4133,	// (0x000416b5) cell_cale_month_pane_t1

0xaa03,	// (0x00047f85) grid_highlight_pane_cp08

0xa8e0,	// (0x00047e62) main_smil_g1

0x415f,	// (0x000416e1) smil_status_pane

0xad94,	// (0x00048316) smil_text_pane

0xc704,	// (0x00049c86) bg_popup_call3_rect_pane_g8

0xc70c,	// (0x00049c8e) bg_popup_call3_rect_pane_g9

0x0008,

0xf553,	// (0x0004cad5) bg_popup_call3_rect_pane_g

0xc993,	// (0x00049f15) smil_status_volume_pane_g1

0xad9e,	// (0x00048320) smil_status_pane_t1

0x54d0,	// (0x00042a52) volume_smil_pane

0xadb5,	// (0x00048337) list_smil_text_pane

0x4172,	// (0x000416f4) scroll_pane_cp011

0x417d,	// (0x000416ff) smil_text_list_pane_t1_ParamLimits

0x417d,	// (0x000416ff) smil_text_list_pane_t1

0x420a,	// (0x0004178c) aid_volume_smil_ParamLimits

0x420a,	// (0x0004178c) aid_volume_smil

0xa8e0,	// (0x00047e62) smil_volume_pane_g1

0xa8e0,	// (0x00047e62) smil_volume_pane_g2

0x0001,

0xf2ba,	// (0x0004c83c) smil_volume_pane_g

0x28d4,	// (0x0003fe56) listscroll_cale_day_pane

0xadbf,	// (0x00048341) bg_cale_pane

0xadd7,	// (0x00048359) list_cale_pane

0xadfa,	// (0x0004837c) scroll_pane_cp09

0xae0b,	// (0x0004838d) cale_bg_pane_g1

0xae13,	// (0x00048395) cale_bg_pane_g2

0xae1b,	// (0x0004839d) cale_bg_pane_g3

0xae23,	// (0x000483a5) cale_bg_pane_g4

0xae2b,	// (0x000483ad) cale_bg_pane_g5

0xae33,	// (0x000483b5) cale_bg_pane_g6

0xae3b,	// (0x000483bd) cale_bg_pane_g7

0xae43,	// (0x000483c5) cale_bg_pane_g8

0xae4b,	// (0x000483cd) cale_bg_pane_g9

0x0008,

0xf2bf,	// (0x0004c841) cale_bg_pane_g

0x4234,	// (0x000417b6) list_cale_time_pane_ParamLimits

0x4234,	// (0x000417b6) list_cale_time_pane

0xae53,	// (0x000483d5) list_cale_time_pane_g1_ParamLimits

0xae53,	// (0x000483d5) list_cale_time_pane_g1

0xae5f,	// (0x000483e1) list_cale_time_pane_g2_ParamLimits

0xae5f,	// (0x000483e1) list_cale_time_pane_g2

0x425c,	// (0x000417de) list_cale_time_pane_g3_ParamLimits

0x425c,	// (0x000417de) list_cale_time_pane_g3

0x426a,	// (0x000417ec) list_cale_time_pane_g4_ParamLimits

0x426a,	// (0x000417ec) list_cale_time_pane_g4

0x4278,	// (0x000417fa) list_cale_time_pane_g5_ParamLimits

0x4278,	// (0x000417fa) list_cale_time_pane_g5

0x0005,

0xf2d2,	// (0x0004c854) list_cale_time_pane_g_ParamLimits

0xf2d2,	// (0x0004c854) list_cale_time_pane_g

0xae79,	// (0x000483fb) list_cale_time_pane_t1_ParamLimits

0xae79,	// (0x000483fb) list_cale_time_pane_t1

0xaea1,	// (0x00048423) list_cale_time_pane_t2_ParamLimits

0xaea1,	// (0x00048423) list_cale_time_pane_t2

0x4557,	// (0x00041ad9) aid_blid_cardinal_pane

0x4599,	// (0x00041b1b) compass_pane_t4

0xaec9,	// (0x0004844b) list_cale_time_pane_t4_ParamLimits

0xaec9,	// (0x0004844b) list_cale_time_pane_t4

0x45a7,	// (0x00041b29) compass_pane_t5

0x45b7,	// (0x00041b39) compass_pane_t6

0x45c5,	// (0x00041b47) compass_pane_t7

0xb390,	// (0x00048912) navi_pane_cc_t1

0xb56d,	// (0x00048aef) aid_phob_thumbnail_center_pane

0x4ba8,	// (0x0004212a) main_postcard_pane_g4_ParamLimits

0x0002,

0xf2df,	// (0x0004c861) list_cale_time_pane_t_ParamLimits

0xf2df,	// (0x0004c861) list_cale_time_pane_t

0xa1a0,	// (0x00047722) bg_popup_window_pane_cp02_ParamLimits

0xa1a0,	// (0x00047722) bg_popup_window_pane_cp02

0xaef1,	// (0x00048473) heading_pane_cp01_ParamLimits

0xaef1,	// (0x00048473) heading_pane_cp01

0xaefd,	// (0x0004847f) loc_req_pane_ParamLimits

0xaefd,	// (0x0004847f) loc_req_pane

0xaf0d,	// (0x0004848f) loc_type_pane_ParamLimits

0xaf0d,	// (0x0004848f) loc_type_pane

0xaf1f,	// (0x000484a1) loc_type_pane_t1_ParamLimits

0xaf1f,	// (0x000484a1) loc_type_pane_t1

0xaf31,	// (0x000484b3) loc_type_pane_t2_ParamLimits

0xaf31,	// (0x000484b3) loc_type_pane_t2

0xaf43,	// (0x000484c5) loc_type_pane_t3_ParamLimits

0xaf43,	// (0x000484c5) loc_type_pane_t3

0x0002,

0xf2e6,	// (0x0004c868) loc_type_pane_t_ParamLimits

0xf2e6,	// (0x0004c868) loc_type_pane_t

0xaf55,	// (0x000484d7) list_loc_req_pane

0xaf5f,	// (0x000484e1) scroll_pane_cp012

0x0d71,	// (0x0003e2f3) list_single_loc_request_popup_menu_pane_ParamLimits

0x0d71,	// (0x0003e2f3) list_single_loc_request_popup_menu_pane

0xaf6a,	// (0x000484ec) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xaf6a,	// (0x000484ec) list_single_loc_request_popup_menu_pane_g1

0xaf76,	// (0x000484f8) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xaf76,	// (0x000484f8) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf2ed,	// (0x0004c86f) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf2ed,	// (0x0004c86f) list_single_loc_request_popup_menu_pane_g

0xaf82,	// (0x00048504) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xaf82,	// (0x00048504) list_single_loc_request_popup_menu_pane_t1

0x4286,	// (0x00041808) bg_popup_window_pane_cp03_ParamLimits

0x4286,	// (0x00041808) bg_popup_window_pane_cp03

0x4294,	// (0x00041816) heading_loc_req_pane_ParamLimits

0x4294,	// (0x00041816) heading_loc_req_pane

0x42a0,	// (0x00041822) popup_dyc_status_message_window_g1_ParamLimits

0x42a0,	// (0x00041822) popup_dyc_status_message_window_g1

0x42ac,	// (0x0004182e) popup_dyc_status_message_window_t1_ParamLimits

0x42ac,	// (0x0004182e) popup_dyc_status_message_window_t1

0x42be,	// (0x00041840) popup_dyc_status_message_window_t2_ParamLimits

0x42be,	// (0x00041840) popup_dyc_status_message_window_t2

0x42d0,	// (0x00041852) popup_dyc_status_message_window_t3_ParamLimits

0x42d0,	// (0x00041852) popup_dyc_status_message_window_t3

0x0002,

0xf2f2,	// (0x0004c874) popup_dyc_status_message_window_t_ParamLimits

0xf2f2,	// (0x0004c874) popup_dyc_status_message_window_t

0xa549,	// (0x00047acb) bg_heading_pane_cp01

0xafd9,	// (0x0004855b) heading_loc_req_pane_g1

0xafe1,	// (0x00048563) heading_loc_req_pane_g2

0xafe9,	// (0x0004856b) heading_loc_req_pane_g3

0x0002,

0xf2f9,	// (0x0004c87b) heading_loc_req_pane_g

0xaff1,	// (0x00048573) heading_loc_req_pane_t1

0xb000,	// (0x00048582) bg_popup_sub_pane_cp01_ParamLimits

0xb000,	// (0x00048582) bg_popup_sub_pane_cp01

0xb00e,	// (0x00048590) popup_cale_events_window_g1_ParamLimits

0xb00e,	// (0x00048590) popup_cale_events_window_g1

0xb02e,	// (0x000485b0) popup_cale_events_window_g2_ParamLimits

0xb02e,	// (0x000485b0) popup_cale_events_window_g2

0x0001,

0xf32d,	// (0x0004c8af) popup_cale_events_window_g_ParamLimits

0xf32d,	// (0x0004c8af) popup_cale_events_window_g

0xb04e,	// (0x000485d0) popup_cale_events_window_t1_ParamLimits

0xb04e,	// (0x000485d0) popup_cale_events_window_t1

0xb060,	// (0x000485e2) popup_cale_events_window_t2_ParamLimits

0xb060,	// (0x000485e2) popup_cale_events_window_t2

0xb09e,	// (0x00048620) popup_cale_events_window_t3_ParamLimits

0xb09e,	// (0x00048620) popup_cale_events_window_t3

0xb0d8,	// (0x0004865a) popup_cale_events_window_t4_ParamLimits

0xb0d8,	// (0x0004865a) popup_cale_events_window_t4

0x0003,

0xf332,	// (0x0004c8b4) popup_cale_events_window_t_ParamLimits

0xf332,	// (0x0004c8b4) popup_cale_events_window_t

0x42fa,	// (0x0004187c) call_type_pane

0xb10e,	// (0x00048690) popup_call_status_window_g1

0x4306,	// (0x00041888) popup_call_status_window_g2

0x4312,	// (0x00041894) popup_call_status_window_g3

0x0002,

0xf33b,	// (0x0004c8bd) popup_call_status_window_g

0xb11c,	// (0x0004869e) call_type_pane_g1

0xb125,	// (0x000486a7) call_type_pane_g2

0x0001,

0xf342,	// (0x0004c8c4) call_type_pane_g

0xa549,	// (0x00047acb) bg_popup_sub_pane_cp02

0xb12e,	// (0x000486b0) listscroll_popup_wml_pane

0xb136,	// (0x000486b8) list_wml_pane

0xb140,	// (0x000486c2) scroll_pane_cp013

0xb14b,	// (0x000486cd) list_single_graphic_popup_wml_pane_ParamLimits

0xb14b,	// (0x000486cd) list_single_graphic_popup_wml_pane

0xa8e0,	// (0x00047e62) list_single_graphic_popup_wml_pane_g1

0xb15f,	// (0x000486e1) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf347,	// (0x0004c8c9) list_single_graphic_popup_wml_pane_g

0xb167,	// (0x000486e9) list_single_graphic_popup_wml_pane_t1

0xb17d,	// (0x000486ff) aid_call_pane

0xa79c,	// (0x00047d1e) popup_clock_analogue_window_g1

0xa79c,	// (0x00047d1e) popup_clock_analogue_window_g2

0x431e,	// (0x000418a0) popup_clock_analogue_window_g3

0x431e,	// (0x000418a0) popup_clock_analogue_window_g4

0xa8e0,	// (0x00047e62) popup_clock_analogue_window_g5

0x0004,

0xf34c,	// (0x0004c8ce) popup_clock_analogue_window_g

0x4326,	// (0x000418a8) popup_clock_analogue_window_t1

0x4334,	// (0x000418b6) clock_digital_number_pane_ParamLimits

0x4334,	// (0x000418b6) clock_digital_number_pane

0x4340,	// (0x000418c2) clock_digital_number_pane_cp02_ParamLimits

0x4340,	// (0x000418c2) clock_digital_number_pane_cp02

0x434c,	// (0x000418ce) clock_digital_number_pane_cp03_ParamLimits

0x434c,	// (0x000418ce) clock_digital_number_pane_cp03

0x4358,	// (0x000418da) clock_digital_number_pane_cp04_ParamLimits

0x4358,	// (0x000418da) clock_digital_number_pane_cp04

0x4364,	// (0x000418e6) clock_digital_separator_pane_ParamLimits

0x4364,	// (0x000418e6) clock_digital_separator_pane

0x4370,	// (0x000418f2) popup_clock_digital_window_t1

0xa8e0,	// (0x00047e62) clock_digital_number_pane_g1

0xa8e0,	// (0x00047e62) clock_digital_number_pane_g2

0x0001,

0xf2ba,	// (0x0004c83c) clock_digital_number_pane_g

0xa8e0,	// (0x00047e62) clock_digital_separator_pane_g1

0xa8e0,	// (0x00047e62) clock_digital_separator_pane_g2

0x0001,

0xf2ba,	// (0x0004c83c) clock_digital_separator_pane_g

0xa549,	// (0x00047acb) bg_popup_window_pane_cp04

0xb185,	// (0x00048707) heading_pane_cp03

0xb18d,	// (0x0004870f) listscroll_popup_gms_pane

0xb195,	// (0x00048717) grid_large_graphic_popup_pane

0xb19f,	// (0x00048721) listscroll_popup_gms_pane_g1

0xb1a7,	// (0x00048729) listscroll_popup_gms_pane_g2

0x0001,

0xf357,	// (0x0004c8d9) listscroll_popup_gms_pane_g

0xabf9,	// (0x0004817b) scroll_pane_cp014

0x438d,	// (0x0004190f) cell_large_graphic_popup_pane_ParamLimits

0x438d,	// (0x0004190f) cell_large_graphic_popup_pane

0x43a5,	// (0x00041927) cell_large_graphic_popup_pane_g1_ParamLimits

0x43a5,	// (0x00041927) cell_large_graphic_popup_pane_g1

0xb1af,	// (0x00048731) cell_large_graphic_popup_pane_g2_ParamLimits

0xb1af,	// (0x00048731) cell_large_graphic_popup_pane_g2

0xb1bb,	// (0x0004873d) cell_large_graphic_popup_pane_g3_ParamLimits

0xb1bb,	// (0x0004873d) cell_large_graphic_popup_pane_g3

0xb1c8,	// (0x0004874a) cell_large_graphic_popup_pane_g4_ParamLimits

0xb1c8,	// (0x0004874a) cell_large_graphic_popup_pane_g4

0x0003,

0xf35c,	// (0x0004c8de) cell_large_graphic_popup_pane_g_ParamLimits

0xf35c,	// (0x0004c8de) cell_large_graphic_popup_pane_g

0xb1d8,	// (0x0004875a) grid_highlight_pane_cp010

0xa8e0,	// (0x00047e62) bg_popup_call_pane_g1

0xb1e2,	// (0x00048764) list_single_graphic_popup_conf_pane_ParamLimits

0xb1e2,	// (0x00048764) list_single_graphic_popup_conf_pane

0xb1f5,	// (0x00048777) list_highlight_pane_cp01

0xb1fe,	// (0x00048780) list_single_graphic_popup_conf_pane_g1

0xb206,	// (0x00048788) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf365,	// (0x0004c8e7) list_single_graphic_popup_conf_pane_g

0xb20e,	// (0x00048790) list_single_graphic_popup_conf_pane_t1

0xb21c,	// (0x0004879e) linegrid_cams_pane_g1

0x43b1,	// (0x00041933) linegrid_cams_pane_g2

0xaa36,	// (0x00047fb8) linegrid_cams_pane_g3

0xb225,	// (0x000487a7) linegrid_cams_pane_g4

0x43ba,	// (0x0004193c) linegrid_cams_pane_g5

0x43c3,	// (0x00041945) linegrid_cams_pane_g6

0xaa3f,	// (0x00047fc1) linegrid_cams_pane_g7

0x0006,

0xf36a,	// (0x0004c8ec) linegrid_cams_pane_g

0xb22e,	// (0x000487b0) popup_clock_analogue_window

0xb22e,	// (0x000487b0) popup_clock_digital_window

0xa549,	// (0x00047acb) popup_phob_thumbnail_window

0xa8e0,	// (0x00047e62) call_video_uplink_pane_g1

0xb237,	// (0x000487b9) call_video_uplink_pane_g2

0x0001,

0xf379,	// (0x0004c8fb) call_video_uplink_pane_g

0xb23f,	// (0x000487c1) video_uplink_pane

0xb247,	// (0x000487c9) mce_image_pane_g1

0x43cc,	// (0x0004194e) mce_image_pane_g2

0x43d4,	// (0x00041956) mce_image_pane_g3

0x43dc,	// (0x0004195e) mce_image_pane_g4

0x43e4,	// (0x00041966) mce_image_pane_g5

0x0004,

0xf37e,	// (0x0004c900) mce_image_pane_g

0xb251,	// (0x000487d3) control_top_pane_stacon_cp01_ParamLimits

0xb251,	// (0x000487d3) control_top_pane_stacon_cp01

0xb265,	// (0x000487e7) uni_indicator_pane_stacon_cp01_ParamLimits

0xb265,	// (0x000487e7) uni_indicator_pane_stacon_cp01

0xb276,	// (0x000487f8) bg_popup_sub_pane_cp03

0x43ec,	// (0x0004196e) chi_dic_find_pane

0x43f4,	// (0x00041976) listscroll_chi_dic_pane

0x43fd,	// (0x0004197f) main_pane_chidic_g1

0x4410,	// (0x00041992) chi_dic_find_pane_t1

0xb280,	// (0x00048802) find_chidic_pane

0xb289,	// (0x0004880b) chi_dic_list_pane_ParamLimits

0xb289,	// (0x0004880b) chi_dic_list_pane

0xb29a,	// (0x0004881c) scroll_pane_cp020

0x441e,	// (0x000419a0) find_chidic_pane_t1

0xa549,	// (0x00047acb) input_focus_pane_cp06

0x442d,	// (0x000419af) list_chi_dic_pane_ParamLimits

0x442d,	// (0x000419af) list_chi_dic_pane

0x444a,	// (0x000419cc) list_chi_dic_pane_t1_ParamLimits

0x444a,	// (0x000419cc) list_chi_dic_pane_t1

0xa549,	// (0x00047acb) list_highlight_pane_cp020

0xb2a2,	// (0x00048824) bg_cale_heading_pane_g1

0x445d,	// (0x000419df) bg_cale_heading_pane_g2

0x4465,	// (0x000419e7) bg_cale_heading_pane_g3

0x446d,	// (0x000419ef) bg_cale_heading_pane_g4

0x4477,	// (0x000419f9) bg_cale_heading_pane_g5

0x4481,	// (0x00041a03) bg_cale_heading_pane_g6

0x4489,	// (0x00041a0b) bg_cale_heading_pane_g7

0x4491,	// (0x00041a13) bg_cale_heading_pane_g8

0x449b,	// (0x00041a1d) bg_cale_heading_pane_g9

0x0008,

0xf389,	// (0x0004c90b) bg_cale_heading_pane_g

0xb2a2,	// (0x00048824) bg_cale_side_pane_g1

0x44a5,	// (0x00041a27) bg_cale_side_pane_g2

0x44af,	// (0x00041a31) bg_cale_side_pane_g3

0x44b9,	// (0x00041a3b) bg_cale_side_pane_g4

0x44c3,	// (0x00041a45) bg_cale_side_pane_g5

0x44cd,	// (0x00041a4f) bg_cale_side_pane_g6

0x44d7,	// (0x00041a59) bg_cale_side_pane_g7

0x44e1,	// (0x00041a63) bg_cale_side_pane_g8

0x44e9,	// (0x00041a6b) bg_cale_side_pane_g9

0x0008,

0xf39c,	// (0x0004c91e) bg_cale_side_pane_g

0x44f1,	// (0x00041a73) popup_call_status_window_ParamLimits

0x44f1,	// (0x00041a73) popup_call_status_window

0xb2aa,	// (0x0004882c) stacon_top_pane

0xb2b2,	// (0x00048834) status_pane_ParamLimits

0xb2b2,	// (0x00048834) status_pane

0xb2c7,	// (0x00048849) status_small_pane

0xb2cf,	// (0x00048851) control_pane

0xa549,	// (0x00047acb) stacon_bottom_pane

0xb2d7,	// (0x00048859) list_single_mce_smart_pane_t1_ParamLimits

0xb2d7,	// (0x00048859) list_single_mce_smart_pane_t1

0xb2ea,	// (0x0004886c) list_single_mce_smart_pane_t2_ParamLimits

0xb2ea,	// (0x0004886c) list_single_mce_smart_pane_t2

0x0001,

0xf3af,	// (0x0004c931) list_single_mce_smart_pane_t_ParamLimits

0xf3af,	// (0x0004c931) list_single_mce_smart_pane_t

0x44fd,	// (0x00041a7f) compass_pane

0x4509,	// (0x00041a8b) main_location2_pane_t1

0x451d,	// (0x00041a9f) main_location2_pane_t2

0x4531,	// (0x00041ab3) main_location2_pane_t3

0x0003,

0xf3b4,	// (0x0004c936) main_location2_pane_t

0xb309,	// (0x0004888b) compass_pane_g1_ParamLimits

0xb309,	// (0x0004888b) compass_pane_g1

0x457b,	// (0x00041afd) compass_pane_t1

0x458a,	// (0x00041b0c) compass_pane_t2

0x0005,

0xf3bd,	// (0x0004c93f) compass_pane_t

0x45d5,	// (0x00041b57) text_secondary_cp61

0xb387,	// (0x00048909) navi_pane_cams_g5

0xb403,	// (0x00048985) navi_pane_im_t1

0xb411,	// (0x00048993) navi_pane_mp_g1_ParamLimits

0xb411,	// (0x00048993) navi_pane_mp_g1

0xb425,	// (0x000489a7) navi_pane_mp_g2_ParamLimits

0xb425,	// (0x000489a7) navi_pane_mp_g2

0xb431,	// (0x000489b3) navi_pane_mp_g3_ParamLimits

0xb431,	// (0x000489b3) navi_pane_mp_g3

0x0002,

0xf3d1,	// (0x0004c953) navi_pane_mp_g_ParamLimits

0xf3d1,	// (0x0004c953) navi_pane_mp_g

0xb43d,	// (0x000489bf) navi_pane_mp_t1

0xb44b,	// (0x000489cd) navi_pane_mp_t2

0x0002,

0xf3d8,	// (0x0004c95a) navi_pane_mp_t

0xb4b6,	// (0x00048a38) navi_pane_vt_g1

0xb43d,	// (0x000489bf) navi_pane_vt_t1

0xb4be,	// (0x00048a40) navi_slider_pane

0xaa50,	// (0x00047fd2) zooming_pane

0xb4ce,	// (0x00048a50) navi_slider_pane_g1

0x4610,	// (0x00041b92) navi_slider_pane_g2

0x0006,

0xf3df,	// (0x0004c961) navi_slider_pane_g

0xb4f2,	// (0x00048a74) aid_levels_zoom

0xb4fa,	// (0x00048a7c) zooming_pane_g1

0xb502,	// (0x00048a84) zooming_pane_g2

0xb502,	// (0x00048a84) zooming_pane_g3

0x0002,

0xf3ee,	// (0x0004c970) zooming_pane_g

0xb50a,	// (0x00048a8c) level_10_zoom

0xb513,	// (0x00048a95) level_11_zoom

0xb51c,	// (0x00048a9e) level_1_zoom

0xb525,	// (0x00048aa7) level_2_zoom

0xb52e,	// (0x00048ab0) level_3_zoom

0xb537,	// (0x00048ab9) level_4_zoom

0xb540,	// (0x00048ac2) level_5_zoom

0xb549,	// (0x00048acb) level_6_zoom

0xb552,	// (0x00048ad4) level_7_zoom

0xb55b,	// (0x00048add) level_8_zoom

0xb564,	// (0x00048ae6) level_9_zoom

0xb575,	// (0x00048af7) popup_phob_thumbnail_window_g1

0xb57d,	// (0x00048aff) popup_phob_thumbnail_window_g2

0x0001,

0xf3f5,	// (0x0004c977) popup_phob_thumbnail_window_g

0xc8a6,	// (0x00049e28) level_1_location

0xc8ae,	// (0x00049e30) level_2_location

0xc8b6,	// (0x00049e38) level_3_location

0xc8be,	// (0x00049e40) level_4_location

0xaa50,	// (0x00047fd2) level_5_location

0x4622,	// (0x00041ba4) mce_icon_pane_g1

0x462a,	// (0x00041bac) mce_icon_pane_g2

0x0001,

0xf3fa,	// (0x0004c97c) mce_icon_pane_g

0x4632,	// (0x00041bb4) main_mup_pane_g1_ParamLimits

0x4632,	// (0x00041bb4) main_mup_pane_g1

0x464a,	// (0x00041bcc) main_mup_pane_g2_ParamLimits

0x464a,	// (0x00041bcc) main_mup_pane_g2

0x465e,	// (0x00041be0) main_mup_pane_g3_ParamLimits

0x465e,	// (0x00041be0) main_mup_pane_g3

0x4672,	// (0x00041bf4) main_mup_pane_g4_ParamLimits

0x4672,	// (0x00041bf4) main_mup_pane_g4

0x468e,	// (0x00041c10) main_mup_pane_g5_ParamLimits

0x468e,	// (0x00041c10) main_mup_pane_g5

0x46af,	// (0x00041c31) main_mup_pane_g6_ParamLimits

0x46af,	// (0x00041c31) main_mup_pane_g6

0x46cb,	// (0x00041c4d) main_mup_pane_g7_ParamLimits

0x46cb,	// (0x00041c4d) main_mup_pane_g7

0x46e7,	// (0x00041c69) main_mup_pane_g8_ParamLimits

0x46e7,	// (0x00041c69) main_mup_pane_g8

0x4703,	// (0x00041c85) main_mup_pane_g9_ParamLimits

0x4703,	// (0x00041c85) main_mup_pane_g9

0x4722,	// (0x00041ca4) main_mup_pane_g10_ParamLimits

0x4722,	// (0x00041ca4) main_mup_pane_g10

0x4741,	// (0x00041cc3) main_mup_pane_g11_ParamLimits

0x4741,	// (0x00041cc3) main_mup_pane_g11

0x4759,	// (0x00041cdb) main_mup_pane_g12_ParamLimits

0x4759,	// (0x00041cdb) main_mup_pane_g12

0x4767,	// (0x00041ce9) main_mup_pane_g13_ParamLimits

0x4767,	// (0x00041ce9) main_mup_pane_g13

0x000c,

0xf3ff,	// (0x0004c981) main_mup_pane_g_ParamLimits

0xf3ff,	// (0x0004c981) main_mup_pane_g

0x477d,	// (0x00041cff) main_mup_pane_t1_ParamLimits

0x477d,	// (0x00041cff) main_mup_pane_t1

0x479a,	// (0x00041d1c) main_mup_pane_t2_ParamLimits

0x479a,	// (0x00041d1c) main_mup_pane_t2

0x47b4,	// (0x00041d36) main_mup_pane_t3_ParamLimits

0x47b4,	// (0x00041d36) main_mup_pane_t3

0x47ce,	// (0x00041d50) main_mup_pane_t4_ParamLimits

0x47ce,	// (0x00041d50) main_mup_pane_t4

0x47e0,	// (0x00041d62) main_mup_pane_t5_ParamLimits

0x47e0,	// (0x00041d62) main_mup_pane_t5

0x47f2,	// (0x00041d74) main_mup_pane_t6_ParamLimits

0x47f2,	// (0x00041d74) main_mup_pane_t6

0x0005,

0xf41a,	// (0x0004c99c) main_mup_pane_t_ParamLimits

0xf41a,	// (0x0004c99c) main_mup_pane_t

0x4808,	// (0x00041d8a) mup_progress_pane_ParamLimits

0x4808,	// (0x00041d8a) mup_progress_pane

0x4814,	// (0x00041d96) mup_visualizer_pane_ParamLimits

0x4814,	// (0x00041d96) mup_visualizer_pane

0x4852,	// (0x00041dd4) mup_volume_pane_ParamLimits

0x4852,	// (0x00041dd4) mup_volume_pane

0xb10e,	// (0x00048690) mup_visualizer_pane_g1_ParamLimits

0xb10e,	// (0x00048690) mup_visualizer_pane_g1

0xb10e,	// (0x00048690) mup_visualizer_pane_g2_ParamLimits

0xb10e,	// (0x00048690) mup_visualizer_pane_g2

0xb309,	// (0x0004888b) mup_visualizer_pane_g3_ParamLimits

0xb309,	// (0x0004888b) mup_visualizer_pane_g3

0x0002,

0xf427,	// (0x0004c9a9) mup_visualizer_pane_g_ParamLimits

0xf427,	// (0x0004c9a9) mup_visualizer_pane_g

0xa8e0,	// (0x00047e62) mup_volume_pane_g1

0xb58d,	// (0x00048b0f) mup_volume_pane_g2

0x0001,

0xf42e,	// (0x0004c9b0) mup_volume_pane_g

0xa8e0,	// (0x00047e62) mup_progress_pane_g1

0xb596,	// (0x00048b18) mup_progress_pane_g2

0xb59f,	// (0x00048b21) mup_progress_pane_g3

0x0002,

0xf433,	// (0x0004c9b5) mup_progress_pane_g

0xa549,	// (0x00047acb) bg_popup_window_pane_cp05

0xb5a8,	// (0x00048b2a) heading_pane_cp02_ParamLimits

0xb5a8,	// (0x00048b2a) heading_pane_cp02

0xb5c2,	// (0x00048b44) list_popup_blid_pane

0xb5ca,	// (0x00048b4c) list_blid_sat_info_pane_ParamLimits

0xb5ca,	// (0x00048b4c) list_blid_sat_info_pane

0xb5dd,	// (0x00048b5f) list_blid_sat_info_pane_g1

0xb5e5,	// (0x00048b67) list_blid_sat_info_pane_t1

0x495d,	// (0x00041edf) mup_equalizer_pane_ParamLimits

0x495d,	// (0x00041edf) mup_equalizer_pane

0x497e,	// (0x00041f00) mup_equalizer_pane_cp1_ParamLimits

0x497e,	// (0x00041f00) mup_equalizer_pane_cp1

0x499f,	// (0x00041f21) mup_equalizer_pane_cp2_ParamLimits

0x499f,	// (0x00041f21) mup_equalizer_pane_cp2

0x49c0,	// (0x00041f42) mup_equalizer_pane_cp3_ParamLimits

0x49c0,	// (0x00041f42) mup_equalizer_pane_cp3

0x49e1,	// (0x00041f63) mup_equalizer_pane_cp4_ParamLimits

0x49e1,	// (0x00041f63) mup_equalizer_pane_cp4

0x4a02,	// (0x00041f84) mup_equalizer_pane_cp5

0x4a18,	// (0x00041f9a) mup_equalizer_pane_cp6

0x4a30,	// (0x00041fb2) mup_equalizer_pane_cp7

0xc784,	// (0x00049d06) bg_popup_call_poc_act_pane_g9

0xc78c,	// (0x00049d0e) bg_popup_call_poc_act_pane_g10

0xc794,	// (0x00049d16) bg_popup_call_poc_act_pane_g11

0x000a,

0xa7a4,	// (0x00047d26) mup_scale_pane

0xa8e0,	// (0x00047e62) mup_scale_pane_g1

0xb5f3,	// (0x00048b75) mup_scale_pane_g2

0x0006,

0xf44f,	// (0x0004c9d1) mup_scale_pane_g

0xb617,	// (0x00048b99) msg_data_pane

0xb61f,	// (0x00048ba1) scroll_pane_cp017

0x0e5b,	// (0x0003e3dd) bg_list_pane_cp04_ParamLimits

0x0e5b,	// (0x0003e3dd) bg_list_pane_cp04

0xb627,	// (0x00048ba9) msg_data_pane_g1

0x4a5a,	// (0x00041fdc) msg_data_pane_g2

0x4a62,	// (0x00041fe4) msg_data_pane_g3

0x4a6a,	// (0x00041fec) msg_data_pane_g4

0x4a72,	// (0x00041ff4) msg_data_pane_g5

0x4a7a,	// (0x00041ffc) msg_data_pane_g6

0x4a82,	// (0x00042004) msg_data_pane_g7

0x0006,

0xf45e,	// (0x0004c9e0) msg_data_pane_g

0x0e7b,	// (0x0003e3fd) msg_text_pane_ParamLimits

0x0e7b,	// (0x0003e3fd) msg_text_pane

0x4a8a,	// (0x0004200c) qrid_highlight_pane_cp011_ParamLimits

0x4a8a,	// (0x0004200c) qrid_highlight_pane_cp011

0xa549,	// (0x00047acb) msg_body_pane

0xa549,	// (0x00047acb) msg_header_pane

0xb638,	// (0x00048bba) input_focus_pane_cp07

0x0ee1,	// (0x0003e463) msg_header_pane_t1_ParamLimits

0x0ee1,	// (0x0003e463) msg_header_pane_t1

0x0ef3,	// (0x0003e475) msg_header_pane_t2_ParamLimits

0x0ef3,	// (0x0003e475) msg_header_pane_t2

0x0001,

0xf472,	// (0x0004c9f4) msg_header_pane_t_ParamLimits

0xf472,	// (0x0004c9f4) msg_header_pane_t

0xb64d,	// (0x00048bcf) msg_body_pane_g1

0x0f05,	// (0x0003e487) msg_body_pane_t1_ParamLimits

0x0f05,	// (0x0003e487) msg_body_pane_t1

0x0f36,	// (0x0003e4b8) msg_body_pane_t2_ParamLimits

0x0f36,	// (0x0003e4b8) msg_body_pane_t2

0x0f48,	// (0x0003e4ca) msg_body_pane_t3_ParamLimits

0x0f48,	// (0x0003e4ca) msg_body_pane_t3

0x0002,

0xf477,	// (0x0004c9f9) msg_body_pane_t_ParamLimits

0xf477,	// (0x0004c9f9) msg_body_pane_t

0x4af8,	// (0x0004207a) main_viewer_pane_g1_ParamLimits

0x4af8,	// (0x0004207a) main_viewer_pane_g1

0x4b04,	// (0x00042086) main_viewer_pane_g2_ParamLimits

0x4b04,	// (0x00042086) main_viewer_pane_g2

0x4b10,	// (0x00042092) main_viewer_pane_g3_ParamLimits

0x4b10,	// (0x00042092) main_viewer_pane_g3

0x4b21,	// (0x000420a3) main_viewer_pane_g4_ParamLimits

0x4b21,	// (0x000420a3) main_viewer_pane_g4

0x4b32,	// (0x000420b4) main_viewer_pane_g5_ParamLimits

0x4b32,	// (0x000420b4) main_viewer_pane_g5

0x4b32,	// (0x000420b4) main_viewer_pane_g7_ParamLimits

0x4b32,	// (0x000420b4) main_viewer_pane_g7

0x4b44,	// (0x000420c6) main_viewer_pane_g8_ParamLimits

0x4b44,	// (0x000420c6) main_viewer_pane_g8

0x0007,

0xf487,	// (0x0004ca09) main_viewer_pane_g_ParamLimits

0xf487,	// (0x0004ca09) main_viewer_pane_g

0xb655,	// (0x00048bd7) viewer_content_pane_ParamLimits

0xb655,	// (0x00048bd7) viewer_content_pane

0x4b7c,	// (0x000420fe) main_postcard_pane_g1_ParamLimits

0x4b7c,	// (0x000420fe) main_postcard_pane_g1

0x4b8a,	// (0x0004210c) main_postcard_pane_g2_ParamLimits

0x4b8a,	// (0x0004210c) main_postcard_pane_g2

0x4b98,	// (0x0004211a) main_postcard_pane_g3_ParamLimits

0x4b98,	// (0x0004211a) main_postcard_pane_g3

0x0005,

0xf498,	// (0x0004ca1a) main_postcard_pane_g_ParamLimits

0xf498,	// (0x0004ca1a) main_postcard_pane_g

0x4ba8,	// (0x0004212a) main_postcard_pane_g4

0xc9a6,	// (0x00049f28) smil_status_volume_pane_g2

0x4bd4,	// (0x00042156) postcard_pane_ParamLimits

0x4bd4,	// (0x00042156) postcard_pane

0xb10e,	// (0x00048690) postcard_pane_g1_ParamLimits

0xb10e,	// (0x00048690) postcard_pane_g1

0x4c06,	// (0x00042188) postcard_pane_g2_ParamLimits

0x4c06,	// (0x00042188) postcard_pane_g2

0x4c12,	// (0x00042194) postcard_pane_g3_ParamLimits

0x4c12,	// (0x00042194) postcard_pane_g3

0xb663,	// (0x00048be5) postcard_pane_g4_ParamLimits

0xb663,	// (0x00048be5) postcard_pane_g4

0x4c1e,	// (0x000421a0) postcard_pane_g5_ParamLimits

0x4c1e,	// (0x000421a0) postcard_pane_g5

0x4c2a,	// (0x000421ac) postcard_pane_g6_ParamLimits

0x4c2a,	// (0x000421ac) postcard_pane_g6

0xb671,	// (0x00048bf3) postcard_pane_g7_ParamLimits

0xb671,	// (0x00048bf3) postcard_pane_g7

0x0006,

0xf4a5,	// (0x0004ca27) postcard_pane_g_ParamLimits

0xf4a5,	// (0x0004ca27) postcard_pane_g

0x4c36,	// (0x000421b8) main_mp2_pane_g1_ParamLimits

0x4c36,	// (0x000421b8) main_mp2_pane_g1

0x4c42,	// (0x000421c4) main_mp2_pane_g2_ParamLimits

0x4c42,	// (0x000421c4) main_mp2_pane_g2

0x4c4e,	// (0x000421d0) main_mp2_pane_g3_ParamLimits

0x4c4e,	// (0x000421d0) main_mp2_pane_g3

0x0002,

0xf4b4,	// (0x0004ca36) main_mp2_pane_g_ParamLimits

0xf4b4,	// (0x0004ca36) main_mp2_pane_g

0x4c5a,	// (0x000421dc) main_mp2_pane_t1_ParamLimits

0x4c5a,	// (0x000421dc) main_mp2_pane_t1

0x4c71,	// (0x000421f3) main_mp2_pane_t2_ParamLimits

0x4c71,	// (0x000421f3) main_mp2_pane_t2

0x4c83,	// (0x00042205) main_mp2_pane_t3_ParamLimits

0x4c83,	// (0x00042205) main_mp2_pane_t3

0x0002,

0xf4bb,	// (0x0004ca3d) main_mp2_pane_t_ParamLimits

0xf4bb,	// (0x0004ca3d) main_mp2_pane_t

0xb67f,	// (0x00048c01) pec_content_pane_ParamLimits

0xb67f,	// (0x00048c01) pec_content_pane

0xabf9,	// (0x0004817b) scroll_pane_cp015

0xb691,	// (0x00048c13) pec_attribute_pane_ParamLimits

0xb691,	// (0x00048c13) pec_attribute_pane

0x4c95,	// (0x00042217) pec_content_pane_g1_ParamLimits

0x4c95,	// (0x00042217) pec_content_pane_g1

0xb6a1,	// (0x00048c23) pec_content_pane_t1_ParamLimits

0xb6a1,	// (0x00048c23) pec_content_pane_t1

0xb6b3,	// (0x00048c35) pec_content_pane_t2_ParamLimits

0xb6b3,	// (0x00048c35) pec_content_pane_t2

0x0001,

0xf4c2,	// (0x0004ca44) pec_content_pane_t_ParamLimits

0xf4c2,	// (0x0004ca44) pec_content_pane_t

0x4ca1,	// (0x00042223) list_single_graphic_pane_cp01_ParamLimits

0x4ca1,	// (0x00042223) list_single_graphic_pane_cp01

0xa7a4,	// (0x00047d26) bg_popup_sub_pane_cp04

0xb6c5,	// (0x00048c47) popup_mup_playback_window_g1

0xb6d1,	// (0x00048c53) popup_mup_playback_window_t1

0xb6e6,	// (0x00048c68) popup_mup_playback_window_t2

0x0001,

0xf4c7,	// (0x0004ca49) popup_mup_playback_window_t

0xb71d,	// (0x00048c9f) main_image_pane_g1_ParamLimits

0xb71d,	// (0x00048c9f) main_image_pane_g1

0xb760,	// (0x00048ce2) scroll_pane_cp018_ParamLimits

0xb760,	// (0x00048ce2) scroll_pane_cp018

0xb778,	// (0x00048cfa) scroll_pane_cp016_ParamLimits

0xb778,	// (0x00048cfa) scroll_pane_cp016

0x4d3b,	// (0x000422bd) smil2_image_pane_ParamLimits

0x4d3b,	// (0x000422bd) smil2_image_pane

0x4d6b,	// (0x000422ed) smil2_root_pane_ParamLimits

0x4d6b,	// (0x000422ed) smil2_root_pane

0x4d97,	// (0x00042319) smil2_text_pane_ParamLimits

0x4d97,	// (0x00042319) smil2_text_pane

0xa549,	// (0x00047acb) bg_list_pane_cp06

0xb7b4,	// (0x00048d36) grid_radio_pane

0xa549,	// (0x00047acb) bg_popup_window_pane_cp06

0xb7bc,	// (0x00048d3e) main_fmradio_pane_t1

0xb185,	// (0x00048707) heading_pane_cp04

0xb7ca,	// (0x00048d4c) main_fmradio_pane_t2

0xc7dc,	// (0x00049d5e) popup_cale_lunar_info_window_g1

0xb7d8,	// (0x00048d5a) main_fmradio_pane_t3

0xc7e4,	// (0x00049d66) popup_cale_lunar_info_window_g2

0xb7e6,	// (0x00048d68) main_fmradio_pane_t4

0x0001,

0xb7f4,	// (0x00048d76) main_fmradio_pane_t5

0x0004,

0xf5b5,	// (0x0004cb37) popup_cale_lunar_info_window_g

0xf4dc,	// (0x0004ca5e) main_fmradio_pane_t

0xb802,	// (0x00048d84) wait_bar_pane_cp03

0xb80a,	// (0x00048d8c) cell_fmradio_pane_ParamLimits

0xb80a,	// (0x00048d8c) cell_fmradio_pane

0xb671,	// (0x00048bf3) cell_fmradio_pane_g1_ParamLimits

0xb671,	// (0x00048bf3) cell_fmradio_pane_g1

0xa549,	// (0x00047acb) grid_highlight_pane_cp011

0xb81d,	// (0x00048d9f) poc_content_pane_ParamLimits

0xb81d,	// (0x00048d9f) poc_content_pane

0xb82f,	// (0x00048db1) scroll_pane_cp019

0x4dd7,	// (0x00042359) popup_call_poc_act_window_ParamLimits

0x4dd7,	// (0x00042359) popup_call_poc_act_window

0x4de4,	// (0x00042366) popup_call_poc_inact_window_ParamLimits

0x4de4,	// (0x00042366) popup_call_poc_inact_window

0xf579,	// (0x0004cafb) bg_popup_call_poc_act_pane_g

0xc79c,	// (0x00049d1e) bg_popup_call_poc_inact_pane_g1

0xc7a4,	// (0x00049d26) bg_popup_call_poc_inact_pane_g2

0xb837,	// (0x00048db9) popup_call_poc_act_window_g2

0xc7ac,	// (0x00049d2e) bg_popup_call_poc_inact_pane_g3

0xc72c,	// (0x00049cae) bg_popup_call_poc_inact_pane_g4

0xc7b4,	// (0x00049d36) bg_popup_call_poc_inact_pane_g5

0xb83f,	// (0x00048dc1) popup_call_poc_act_window_t1_ParamLimits

0xb83f,	// (0x00048dc1) popup_call_poc_act_window_t1

0xb867,	// (0x00048de9) popup_call_poc_act_window_t2_ParamLimits

0xb867,	// (0x00048de9) popup_call_poc_act_window_t2

0xb88f,	// (0x00048e11) popup_call_poc_act_window_t3_ParamLimits

0xb88f,	// (0x00048e11) popup_call_poc_act_window_t3

0xb8b7,	// (0x00048e39) popup_call_poc_act_window_t4_ParamLimits

0xb8b7,	// (0x00048e39) popup_call_poc_act_window_t4

0x0003,

0xf4e7,	// (0x0004ca69) popup_call_poc_act_window_t_ParamLimits

0xf4e7,	// (0x0004ca69) popup_call_poc_act_window_t

0xc7bc,	// (0x00049d3e) bg_popup_call_poc_inact_pane_g6

0xc7c4,	// (0x00049d46) bg_popup_call_poc_inact_pane_g7

0xc7cc,	// (0x00049d4e) bg_popup_call_poc_inact_pane_g8

0xb8c9,	// (0x00048e4b) popup_call_poc_inact_window_g2

0xc7d4,	// (0x00049d56) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf590,	// (0x0004cb12) bg_popup_call_poc_inact_pane_g

0xb8d1,	// (0x00048e53) popup_call_poc_inact_window_t1_ParamLimits

0xb8d1,	// (0x00048e53) popup_call_poc_inact_window_t1

0xb8e6,	// (0x00048e68) popup_call_poc_inact_window_t2_ParamLimits

0xb8e6,	// (0x00048e68) popup_call_poc_inact_window_t2

0xb8fb,	// (0x00048e7d) popup_call_poc_inact_window_t3_ParamLimits

0xb8fb,	// (0x00048e7d) popup_call_poc_inact_window_t3

0x0002,

0xf4f0,	// (0x0004ca72) popup_call_poc_inact_window_t_ParamLimits

0xf4f0,	// (0x0004ca72) popup_call_poc_inact_window_t

0xc919,	// (0x00049e9b) context_pane_ParamLimits

0x541a,	// (0x0004299c) signal_pane_ParamLimits

0xaa50,	// (0x00047fd2) main_call2_pane

0x538d,	// (0x0004290f) popup_phob_thumbnail2_window_ParamLimits

0x538d,	// (0x0004290f) popup_phob_thumbnail2_window

0x4aa6,	// (0x00042028) aid_hotspot_pointer_arrow_pane

0x4aae,	// (0x00042030) aid_hotspot_pointer_hand_pane

0x510c,	// (0x0004268e) phob_pre_status_pane_g5

0x2dd2,	// (0x00040354) cams_zoom_pane_ParamLimits

0x2dde,	// (0x00040360) image_vga_pane_ParamLimits

0x2ded,	// (0x0004036f) main_camera_pane_g1_ParamLimits

0x2dfb,	// (0x0004037d) main_camera_pane_g2_ParamLimits

0x2e07,	// (0x00040389) main_camera_pane_g3_ParamLimits

0x2e13,	// (0x00040395) main_camera_pane_g4_ParamLimits

0x2e1f,	// (0x000403a1) main_camera_pane_g5_ParamLimits

0x2e2b,	// (0x000403ad) main_camera_pane_g6_ParamLimits

0x2e37,	// (0x000403b9) main_camera_pane_g7_ParamLimits

0xf1ef,	// (0x0004c771) main_camera_pane_g_ParamLimits

0x2e43,	// (0x000403c5) main_camera_pane_t1_ParamLimits

0x2e55,	// (0x000403d7) main_camera_pane_t2_ParamLimits

0xf200,	// (0x0004c782) main_camera_pane_t_ParamLimits

0xa7a4,	// (0x00047d26) bg_popup_preview_window_pane_cp01_ParamLimits

0xa7a4,	// (0x00047d26) bg_popup_preview_window_pane_cp01

0xb910,	// (0x00048e92) popup_phob_thumbnail2_window_g1_ParamLimits

0xb910,	// (0x00048e92) popup_phob_thumbnail2_window_g1

0xa549,	// (0x00047acb) call2_cli_visual_pane

0x4e00,	// (0x00042382) popup_call2_audio_conf_window_ParamLimits

0x4e00,	// (0x00042382) popup_call2_audio_conf_window

0x4e15,	// (0x00042397) popup_call2_audio_first_window_ParamLimits

0x4e15,	// (0x00042397) popup_call2_audio_first_window

0x4eb3,	// (0x00042435) popup_call2_audio_in_window_ParamLimits

0x4eb3,	// (0x00042435) popup_call2_audio_in_window

0x4ef5,	// (0x00042477) popup_call2_audio_out_window_ParamLimits

0x4ef5,	// (0x00042477) popup_call2_audio_out_window

0x4f57,	// (0x000424d9) popup_call2_audio_second_window_ParamLimits

0x4f57,	// (0x000424d9) popup_call2_audio_second_window

0x4fb5,	// (0x00042537) popup_call2_audio_wait_window_ParamLimits

0x4fb5,	// (0x00042537) popup_call2_audio_wait_window

0xa549,	// (0x00047acb) bg_popup_call2_act_pane_cp03

0xa786,	// (0x00047d08) list_conf_pane_cp

0xb91c,	// (0x00048e9e) popup_call2_audio_conf_window_t1

0xb92a,	// (0x00048eac) list_single_graphic_popup_conf2_pane_ParamLimits

0xb92a,	// (0x00048eac) list_single_graphic_popup_conf2_pane

0xb1f5,	// (0x00048777) list_highlight_pane_cp04

0xb93d,	// (0x00048ebf) list_single_graphic_popup_conf2_pane_g1

0xb206,	// (0x00048788) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf4f7,	// (0x0004ca79) list_single_graphic_popup_conf2_pane_g

0xb947,	// (0x00048ec9) list_single_graphic_popup_conf2_pane_t1

0xb955,	// (0x00048ed7) bg_popup_call2_act_pane_cp01_ParamLimits

0xb955,	// (0x00048ed7) bg_popup_call2_act_pane_cp01

0xb9df,	// (0x00048f61) call_type_pane_cp05_ParamLimits

0xb9df,	// (0x00048f61) call_type_pane_cp05

0xba33,	// (0x00048fb5) popup_call2_audio_second_window_g1_ParamLimits

0xba33,	// (0x00048fb5) popup_call2_audio_second_window_g1

0xba87,	// (0x00049009) popup_call2_audio_second_window_g2_ParamLimits

0xba87,	// (0x00049009) popup_call2_audio_second_window_g2

0x0002,

0xf4fc,	// (0x0004ca7e) popup_call2_audio_second_window_g_ParamLimits

0xf4fc,	// (0x0004ca7e) popup_call2_audio_second_window_g

0xbaec,	// (0x0004906e) popup_call2_audio_second_window_t1_ParamLimits

0xbaec,	// (0x0004906e) popup_call2_audio_second_window_t1

0xbba7,	// (0x00049129) popup_call2_audio_second_window_t2_ParamLimits

0xbba7,	// (0x00049129) popup_call2_audio_second_window_t2

0xbbfa,	// (0x0004917c) popup_call2_audio_second_window_t3_ParamLimits

0xbbfa,	// (0x0004917c) popup_call2_audio_second_window_t3

0x0003,

0xf503,	// (0x0004ca85) popup_call2_audio_second_window_t_ParamLimits

0xf503,	// (0x0004ca85) popup_call2_audio_second_window_t

0xa549,	// (0x00047acb) bg_popup_call2_in_pane_cp02

0xa553,	// (0x00047ad5) call_type_pane_cp04

0xa55b,	// (0x00047add) popup_call2_audio_wait_window_g1

0xa563,	// (0x00047ae5) popup_call2_audio_wait_window_g2

0x0001,

0xf0de,	// (0x0004c660) popup_call2_audio_wait_window_g

0xa56b,	// (0x00047aed) popup_call2_audio_wait_window_t3

0xbced,	// (0x0004926f) bg_popup_call2_act_pane_ParamLimits

0xbced,	// (0x0004926f) bg_popup_call2_act_pane

0xbdad,	// (0x0004932f) call_type_pane_cp03_ParamLimits

0xbdad,	// (0x0004932f) call_type_pane_cp03

0xbe11,	// (0x00049393) popup_call2_audio_first_window_g1_ParamLimits

0xbe11,	// (0x00049393) popup_call2_audio_first_window_g1

0xbe81,	// (0x00049403) popup_call2_audio_first_window_g2_ParamLimits

0xbe81,	// (0x00049403) popup_call2_audio_first_window_g2

0xb10e,	// (0x00048690) popup_call2_audio_first_window_g3_ParamLimits

0xb10e,	// (0x00048690) popup_call2_audio_first_window_g3

0x0004,

0xf50c,	// (0x0004ca8e) popup_call2_audio_first_window_g_ParamLimits

0xf50c,	// (0x0004ca8e) popup_call2_audio_first_window_g

0xbf5f,	// (0x000494e1) popup_call2_audio_first_window_t1_ParamLimits

0xbf5f,	// (0x000494e1) popup_call2_audio_first_window_t1

0xc062,	// (0x000495e4) popup_call2_audio_first_window_t4_ParamLimits

0xc062,	// (0x000495e4) popup_call2_audio_first_window_t4

0xc145,	// (0x000496c7) popup_call2_audio_first_window_t5_ParamLimits

0xc145,	// (0x000496c7) popup_call2_audio_first_window_t5

0x0003,

0xf517,	// (0x0004ca99) popup_call2_audio_first_window_t_ParamLimits

0xf517,	// (0x0004ca99) popup_call2_audio_first_window_t

0xa79c,	// (0x00047d1e) bg_popup_call2_act_pane_g1

0xc7ec,	// (0x00049d6e) popup_cale_lunar_info_window_t1

0xc7fa,	// (0x00049d7c) popup_cale_lunar_info_window_t2

0xc808,	// (0x00049d8a) popup_cale_lunar_info_window_t3

0xa549,	// (0x00047acb) bg_popup_call2_bubble_pane

0xc246,	// (0x000497c8) bg_popup_call2_in_pane_cp01_ParamLimits

0xc246,	// (0x000497c8) bg_popup_call2_in_pane_cp01

0xa225,	// (0x000477a7) call_type_pane_cp02

0xc28e,	// (0x00049810) popup_call2_audio_out_window_g1_ParamLimits

0xc28e,	// (0x00049810) popup_call2_audio_out_window_g1

0xc2ba,	// (0x0004983c) popup_call2_audio_out_window_g2_ParamLimits

0xc2ba,	// (0x0004983c) popup_call2_audio_out_window_g2

0xc2e2,	// (0x00049864) popup_call2_audio_out_window_g3_ParamLimits

0xc2e2,	// (0x00049864) popup_call2_audio_out_window_g3

0x0003,

0xf520,	// (0x0004caa2) popup_call2_audio_out_window_g_ParamLimits

0xf520,	// (0x0004caa2) popup_call2_audio_out_window_g

0xc31d,	// (0x0004989f) popup_call2_audio_out_window_t1_ParamLimits

0xc31d,	// (0x0004989f) popup_call2_audio_out_window_t1

0xc37c,	// (0x000498fe) popup_call2_audio_out_window_t2_ParamLimits

0xc37c,	// (0x000498fe) popup_call2_audio_out_window_t2

0xc3d0,	// (0x00049952) popup_call2_audio_out_window_t3_ParamLimits

0xc3d0,	// (0x00049952) popup_call2_audio_out_window_t3

0xc3e6,	// (0x00049968) popup_call2_audio_out_window_t4_ParamLimits

0xc3e6,	// (0x00049968) popup_call2_audio_out_window_t4

0xc3fc,	// (0x0004997e) popup_call2_audio_out_window_t5_ParamLimits

0xc3fc,	// (0x0004997e) popup_call2_audio_out_window_t5

0x0005,

0xf529,	// (0x0004caab) popup_call2_audio_out_window_t_ParamLimits

0xf529,	// (0x0004caab) popup_call2_audio_out_window_t

0xc460,	// (0x000499e2) bg_popup_call2_in_pane_ParamLimits

0xc460,	// (0x000499e2) bg_popup_call2_in_pane

0xc4bc,	// (0x00049a3e) popup_call2_audio_in_window_g1_ParamLimits

0xc4bc,	// (0x00049a3e) popup_call2_audio_in_window_g1

0xc4f4,	// (0x00049a76) popup_call2_audio_in_window_g2_ParamLimits

0xc4f4,	// (0x00049a76) popup_call2_audio_in_window_g2

0xc52c,	// (0x00049aae) popup_call2_audio_in_window_g3_ParamLimits

0xc52c,	// (0x00049aae) popup_call2_audio_in_window_g3

0x0003,

0xf536,	// (0x0004cab8) popup_call2_audio_in_window_g_ParamLimits

0xf536,	// (0x0004cab8) popup_call2_audio_in_window_g

0xc584,	// (0x00049b06) popup_call2_audio_in_window_t1_ParamLimits

0xc584,	// (0x00049b06) popup_call2_audio_in_window_t1

0xc604,	// (0x00049b86) popup_call2_audio_in_window_t2_ParamLimits

0xc604,	// (0x00049b86) popup_call2_audio_in_window_t2

0xc684,	// (0x00049c06) popup_call2_audio_in_window_t3_ParamLimits

0xc684,	// (0x00049c06) popup_call2_audio_in_window_t3

0xc69e,	// (0x00049c20) popup_call2_audio_in_window_t4_ParamLimits

0xc69e,	// (0x00049c20) popup_call2_audio_in_window_t4

0xc6b0,	// (0x00049c32) popup_call2_audio_in_window_t5_ParamLimits

0xc6b0,	// (0x00049c32) popup_call2_audio_in_window_t5

0xc6c2,	// (0x00049c44) popup_call2_audio_in_window_t6_ParamLimits

0xc6c2,	// (0x00049c44) popup_call2_audio_in_window_t6

0x0005,

0xf53f,	// (0x0004cac1) popup_call2_audio_in_window_t_ParamLimits

0xf53f,	// (0x0004cac1) popup_call2_audio_in_window_t

0xa79c,	// (0x00047d1e) bg_popup_call2_in_pane_g1

0xc816,	// (0x00049d98) popup_cale_lunar_info_window_t4

0x0003,

0xf5ba,	// (0x0004cb3c) popup_cale_lunar_info_window_t

0xa7a4,	// (0x00047d26) bg_popup_call2_rect_pane_ParamLimits

0xa7a4,	// (0x00047d26) bg_popup_call2_rect_pane

0xa549,	// (0x00047acb) call2_cli_visual_graphic_pane

0xa549,	// (0x00047acb) call2_cli_visual_text_pane

0x54c3,	// (0x00042a45) smil_status_volume_pane_g3

0x0002,

0xa8e0,	// (0x00047e62) call2_cli_visual_graphic_pane_g1

0xa8e0,	// (0x00047e62) call2_cli_visual_graphic_pane_g2

0xa8e0,	// (0x00047e62) call2_cli_visual_graphic_pane_g3

0x0002,

0xf54c,	// (0x0004cace) call2_cli_visual_graphic_pane_g

0xc6d4,	// (0x00049c56) bg_popup_call2_rect_pane_g1

0xa96c,	// (0x00047eee) bg_popup_call2_rect_pane_g2

0xc6dc,	// (0x00049c5e) bg_popup_call2_rect_pane_g3

0xc6e4,	// (0x00049c66) bg_popup_call2_rect_pane_g4

0xc6ec,	// (0x00049c6e) bg_popup_call2_rect_pane_g5

0xc6f4,	// (0x00049c76) bg_popup_call2_rect_pane_g6

0xc6fc,	// (0x00049c7e) bg_popup_call2_rect_pane_g7

0xc704,	// (0x00049c86) bg_popup_call2_rect_pane_g8

0xc70c,	// (0x00049c8e) bg_popup_call2_rect_pane_g9

0x0008,

0xf553,	// (0x0004cad5) bg_popup_call2_rect_pane_g

0xc714,	// (0x00049c96) bg_popup_call2_bubble_pane_g1

0xc71c,	// (0x00049c9e) bg_popup_call2_bubble_pane_g2

0xc724,	// (0x00049ca6) bg_popup_call2_bubble_pane_g3

0xc72c,	// (0x00049cae) bg_popup_call2_bubble_pane_g4

0xc734,	// (0x00049cb6) bg_popup_call2_bubble_pane_g5

0xc73c,	// (0x00049cbe) bg_popup_call2_bubble_pane_g6

0xc744,	// (0x00049cc6) bg_popup_call2_bubble_pane_g7

0xc74c,	// (0x00049cce) bg_popup_call2_bubble_pane_g8

0xc754,	// (0x00049cd6) bg_popup_call2_bubble_pane_g9

0x0008,

0xf566,	// (0x0004cae8) bg_popup_call2_bubble_pane_g

0x28e4,	// (0x0003fe66) aid_cale_week_size_cell_pane

0x2e67,	// (0x000403e9) aid_cams_cif_uncrop_pane_ParamLimits

0x2e67,	// (0x000403e9) aid_cams_cif_uncrop_pane

0x2fc2,	// (0x00040544) aid_cams_size_cell_ParamLimits

0x2fc2,	// (0x00040544) aid_cams_size_cell

0x2fce,	// (0x00040550) grid_cams_pane_ParamLimits

0x2fdc,	// (0x0004055e) linegrid_cams_pane_ParamLimits

0x30b3,	// (0x00040635) call_video_pane_t1

0x30d4,	// (0x00040656) call_video_pane_t2

0x0001,

0xf253,	// (0x0004c7d5) call_video_pane_t

0x3622,	// (0x00040ba4) aid_cale_month_size_cell_pane_ParamLimits

0x3622,	// (0x00040ba4) aid_cale_month_size_cell_pane

0xf603,	// (0x0004cb85) smil_status_volume_pane_g

0x54d0,	// (0x00042a52) volume_smil_pane_ParamLimits

0x2048,	// (0x0003f5ca) aid_popup2_width_pane

0x27de,	// (0x0003fd60) cell_qdial_pane_g4_ParamLimits

0x27de,	// (0x0003fd60) cell_qdial_pane_g4

0x4557,	// (0x00041ad9) aid_blid_cardinal_pane_ParamLimits

0x4567,	// (0x00041ae9) aid_blid_destination_pane_ParamLimits

0x4567,	// (0x00041ae9) aid_blid_destination_pane

0xa7a4,	// (0x00047d26) bg_popup_call_poc_act_pane_ParamLimits

0xa7a4,	// (0x00047d26) bg_popup_call_poc_act_pane

0xa7a4,	// (0x00047d26) bg_popup_call_poc_inact_pane_ParamLimits

0xa7a4,	// (0x00047d26) bg_popup_call_poc_inact_pane

0xc75c,	// (0x00049cde) bg_popup_call_poc_act_pane_g1

0xc764,	// (0x00049ce6) bg_popup_call_poc_act_pane_g2

0xc76c,	// (0x00049cee) bg_popup_call_poc_act_pane_g3

0xc72c,	// (0x00049cae) bg_popup_call_poc_act_pane_g4

0xc734,	// (0x00049cb6) bg_popup_call_poc_act_pane_g5

0xc774,	// (0x00049cf6) bg_popup_call_poc_act_pane_g6

0xc744,	// (0x00049cc6) bg_popup_call_poc_act_pane_g7

0xc77c,	// (0x00049cfe) bg_popup_call_poc_act_pane_g8

0xa549,	// (0x00047acb) main_usb_pane

0x52c0,	// (0x00042842) popup_cale_lunar_info_window

0x33f1,	// (0x00040973) im_reading_pane_t1_ParamLimits

0xab51,	// (0x000480d3) list_im_pane_ParamLimits

0xab62,	// (0x000480e4) scroll_pane_cp07_ParamLimits

0xa549,	// (0x00047acb) grid_highlight_pane_cp012

0xa7a4,	// (0x00047d26) mup_scale_pane_ParamLimits

0xb10e,	// (0x00048690) main_usb_pane_g1_ParamLimits

0xb10e,	// (0x00048690) main_usb_pane_g1

0x502f,	// (0x000425b1) main_usb_pane_g2_ParamLimits

0x502f,	// (0x000425b1) main_usb_pane_g2

0x0001,

0xf5a3,	// (0x0004cb25) main_usb_pane_g_ParamLimits

0xf5a3,	// (0x0004cb25) main_usb_pane_g

0x503b,	// (0x000425bd) main_usb_pane_t1_ParamLimits

0x503b,	// (0x000425bd) main_usb_pane_t1

0x504d,	// (0x000425cf) main_usb_pane_t2_ParamLimits

0x504d,	// (0x000425cf) main_usb_pane_t2

0x505f,	// (0x000425e1) main_usb_pane_t3_ParamLimits

0x505f,	// (0x000425e1) main_usb_pane_t3

0x5071,	// (0x000425f3) main_usb_pane_t4_ParamLimits

0x5071,	// (0x000425f3) main_usb_pane_t4

0x5083,	// (0x00042605) main_usb_pane_t5_ParamLimits

0x5083,	// (0x00042605) main_usb_pane_t5

0x5095,	// (0x00042617) main_usb_pane_t6_ParamLimits

0x5095,	// (0x00042617) main_usb_pane_t6

0x0005,

0xf5a8,	// (0x0004cb2a) main_usb_pane_t_ParamLimits

0x44fd,	// (0x00041a7f) aid_text_placing

0x4509,	// (0x00041a8b) main_location2_pane_t1_ParamLimits

0x451d,	// (0x00041a9f) main_location2_pane_t2_ParamLimits

0x4531,	// (0x00041ab3) main_location2_pane_t3_ParamLimits

0x4545,	// (0x00041ac7) main_location2_pane_t4_ParamLimits

0x4545,	// (0x00041ac7) main_location2_pane_t4

0xf3b4,	// (0x0004c936) main_location2_pane_t_ParamLimits

0xa7e0,	// (0x00047d62) find_pinb_pane_g2_ParamLimits

0xa7e0,	// (0x00047d62) find_pinb_pane_g2

0x0001,

0xf104,	// (0x0004c686) find_pinb_pane_g_ParamLimits

0xf104,	// (0x0004c686) find_pinb_pane_g

0xa7ec,	// (0x00047d6e) find_pinb_pane_t1_ParamLimits

0xa7fe,	// (0x00047d80) find_pinb_pane_t2_ParamLimits

0xf109,	// (0x0004c68b) find_pinb_pane_t_ParamLimits

0xa549,	// (0x00047acb) main_call3_pane

0x3be5,	// (0x00041167) cale_month_day_heading_pane_t1_ParamLimits

0x3c6b,	// (0x000411ed) cale_month_day_heading_pane_t2_ParamLimits

0x3ce4,	// (0x00041266) cale_month_day_heading_pane_t3_ParamLimits

0x3d5d,	// (0x000412df) cale_month_day_heading_pane_t4_ParamLimits

0x3dd6,	// (0x00041358) cale_month_day_heading_pane_t5_ParamLimits

0x3e4f,	// (0x000413d1) cale_month_day_heading_pane_t6_ParamLimits

0x3ec8,	// (0x0004144a) cale_month_day_heading_pane_t7_ParamLimits

0xf28b,	// (0x0004c80d) cale_month_day_heading_pane_t_ParamLimits

0xadac,	// (0x0004832e) smil_status_volume_pane

0x4bee,	// (0x00042170) postcard_address_pane_ParamLimits

0x4bee,	// (0x00042170) postcard_address_pane

0x4bfa,	// (0x0004217c) postcard_message_pane_ParamLimits

0x4bfa,	// (0x0004217c) postcard_message_pane

0x4ff4,	// (0x00042576) call2_cli_visual_pane_t1_ParamLimits

0x4ff4,	// (0x00042576) call2_cli_visual_pane_t1

0x5627,	// (0x00042ba9) postcard_message_pane_t1_ParamLimits

0x5627,	// (0x00042ba9) postcard_message_pane_t1

0x5610,	// (0x00042b92) postcard_address_pane_t1_ParamLimits

0x5610,	// (0x00042b92) postcard_address_pane_t1

0x5601,	// (0x00042b83) popup_call3_audio_in_window_ParamLimits

0x5601,	// (0x00042b83) popup_call3_audio_in_window

0x54e5,	// (0x00042a67) bg_popup_call3_in_pane_ParamLimits

0x54e5,	// (0x00042a67) bg_popup_call3_in_pane

0x5547,	// (0x00042ac9) popup_call3_audio_in_window_g1_ParamLimits

0x5547,	// (0x00042ac9) popup_call3_audio_in_window_g1

0x555f,	// (0x00042ae1) popup_call3_audio_in_window_g2_ParamLimits

0x555f,	// (0x00042ae1) popup_call3_audio_in_window_g2

0x5577,	// (0x00042af9) popup_call3_audio_in_window_g3_ParamLimits

0x5577,	// (0x00042af9) popup_call3_audio_in_window_g3

0x0003,

0xf60a,	// (0x0004cb8c) popup_call3_audio_in_window_g_ParamLimits

0xf60a,	// (0x0004cb8c) popup_call3_audio_in_window_g

0x559f,	// (0x00042b21) popup_call3_audio_in_window_t1_ParamLimits

0x559f,	// (0x00042b21) popup_call3_audio_in_window_t1

0x55c7,	// (0x00042b49) popup_call3_audio_in_window_t2_ParamLimits

0x55c7,	// (0x00042b49) popup_call3_audio_in_window_t2

0x55ef,	// (0x00042b71) popup_call3_audio_in_window_t3_ParamLimits

0x55ef,	// (0x00042b71) popup_call3_audio_in_window_t3

0x0002,

0xf613,	// (0x0004cb95) popup_call3_audio_in_window_t_ParamLimits

0xf613,	// (0x0004cb95) popup_call3_audio_in_window_t

0xaa50,	// (0x00047fd2) bg_popup_call3_rect_pane

0xc6d4,	// (0x00049c56) bg_popup_call3_rect_pane_g1

0xa96c,	// (0x00047eee) bg_popup_call3_rect_pane_g2

0xc6dc,	// (0x00049c5e) bg_popup_call3_rect_pane_g3

0xc6e4,	// (0x00049c66) bg_popup_call3_rect_pane_g4

0xc6ec,	// (0x00049c6e) bg_popup_call3_rect_pane_g5

0xc6f4,	// (0x00049c76) bg_popup_call3_rect_pane_g6

0xc6fc,	// (0x00049c7e) bg_popup_call3_rect_pane_g7

0x486d,	// (0x00041def) mup_visualizer_osc_pane

0xb585,	// (0x00048b07) mup_visualizer_spec_pane

0x5505,	// (0x00042a87) call3_video_qcif_pane_ParamLimits

0x5505,	// (0x00042a87) call3_video_qcif_pane

0x5517,	// (0x00042a99) call3_video_qcif_uncrop_pane_ParamLimits

0x5517,	// (0x00042a99) call3_video_qcif_uncrop_pane

0x5525,	// (0x00042aa7) call3_video_subqcif_pane_ParamLimits

0x5525,	// (0x00042aa7) call3_video_subqcif_pane

0x5537,	// (0x00042ab9) call3_video_subqcif_uncrop_pane_ParamLimits

0x5537,	// (0x00042ab9) call3_video_subqcif_uncrop_pane

0x558f,	// (0x00042b11) popup_call3_audio_in_window_g4_ParamLimits

0x558f,	// (0x00042b11) popup_call3_audio_in_window_g4

0x54b0,	// (0x00042a32) mup_spec_half_pane

0x54b9,	// (0x00042a3b) mup_spec_half_pane_cp

0xc979,	// (0x00049efb) mup_osc_middle_pane

0xc982,	// (0x00049f04) mup_visualizer_osc_pane_g1

0x5491,	// (0x00042a13) mup_spec_bar_pane_ParamLimits

0x5491,	// (0x00042a13) mup_spec_bar_pane

0xc966,	// (0x00049ee8) mup_spec_bar_pane_g1

0xc970,	// (0x00049ef2) mup_spec_bar_pane_g2

0x0001,

0xf5fe,	// (0x0004cb80) mup_spec_bar_pane_g

0x28e4,	// (0x0003fe66) aid_cale_week_size_cell_pane_ParamLimits

0x28f9,	// (0x0003fe7b) bg_cale_heading_pane_ParamLimits

0xa9a9,	// (0x00047f2b) bg_cale_pane_cp01_ParamLimits

0x291b,	// (0x0003fe9d) cale_week_corner_pane_ParamLimits

0x2935,	// (0x0003feb7) cale_week_day_heading_pane_ParamLimits

0x2957,	// (0x0003fed9) cale_week_scroll_pane_g1_ParamLimits

0x2974,	// (0x0003fef6) cale_week_scroll_pane_g2_ParamLimits

0x2987,	// (0x0003ff09) cale_week_scroll_pane_g3_ParamLimits

0x299a,	// (0x0003ff1c) cale_week_scroll_pane_g4_ParamLimits

0x29ad,	// (0x0003ff2f) cale_week_scroll_pane_g5_ParamLimits

0x29c0,	// (0x0003ff42) cale_week_scroll_pane_g6_ParamLimits

0x29d3,	// (0x0003ff55) cale_week_scroll_pane_g7_ParamLimits

0x29e8,	// (0x0003ff6a) cale_week_scroll_pane_g8_ParamLimits

0x29fd,	// (0x0003ff7f) cale_week_scroll_pane_g9_ParamLimits

0x2a10,	// (0x0003ff92) cale_week_scroll_pane_g10_ParamLimits

0x2a23,	// (0x0003ffa5) cale_week_scroll_pane_g11_ParamLimits

0x2a36,	// (0x0003ffb8) cale_week_scroll_pane_g12_ParamLimits

0x2a4d,	// (0x0003ffcf) cale_week_scroll_pane_g13_ParamLimits

0x2a68,	// (0x0003ffea) cale_week_scroll_pane_g14_ParamLimits

0x2a83,	// (0x00040005) cale_week_scroll_pane_g15_ParamLimits

0xf195,	// (0x0004c717) cale_week_scroll_pane_g_ParamLimits

0x2ab3,	// (0x00040035) cale_week_time_pane_ParamLimits

0x2ac8,	// (0x0004004a) grid_cale_week_pane_ParamLimits

0xa9c6,	// (0x00047f48) listscroll_cale_week_pane_t1

0xa9d8,	// (0x00047f5a) scroll_pane_cp08_ParamLimits

0x3696,	// (0x00040c18) cale_month_corner_pane_ParamLimits

0xad82,	// (0x00048304) cale_month_pane_t1

0x3b64,	// (0x000410e6) cale_month_week_pane_ParamLimits

0xb10e,	// (0x00048690) popup_call_status_window_g1_ParamLimits

0x4306,	// (0x00041888) popup_call_status_window_g2_ParamLimits

0x4312,	// (0x00041894) popup_call_status_window_g3_ParamLimits

0xf33b,	// (0x0004c8bd) popup_call_status_window_g_ParamLimits

0xb175,	// (0x000486f7) aid_call2_pane

0x0ed5,	// (0x0003e457) msg_header_pane_g1

0x4bee,	// (0x00042170) postcard_address2_pane_ParamLimits

0x4bee,	// (0x00042170) postcard_address2_pane

0x4bfa,	// (0x0004217c) postcard_message2_pane_ParamLimits

0x4bfa,	// (0x0004217c) postcard_message2_pane

0x5428,	// (0x000429aa) message2_row_pane_ParamLimits

0x5428,	// (0x000429aa) message2_row_pane

0x5443,	// (0x000429c5) address2_row_pane_ParamLimits

0x5443,	// (0x000429c5) address2_row_pane

0xc934,	// (0x00049eb6) postcard_message2_row_pane_g1

0xc93c,	// (0x00049ebe) postcard_message2_row_pane_t1

0xc934,	// (0x00049eb6) address2_row_pane_g1

0xc93c,	// (0x00049ebe) address2_row_pane_t1

0x2d4d,	// (0x000402cf) aid_size_cell_vorec

0xa549,	// (0x00047acb) main_rss_pane

0x5456,	// (0x000429d8) rss_list_single_pane_ParamLimits

0x5456,	// (0x000429d8) rss_list_single_pane

0xc94a,	// (0x00049ecc) rss_list_single_pane_t1

0xc958,	// (0x00049eda) rss_list_single_pane_t2

0x0001,

0xf5f9,	// (0x0004cb7b) rss_list_single_pane_t

0xa549,	// (0x00047acb) main_camera2_pane

0xa549,	// (0x00047acb) main_video2_pane

0x568b,	// (0x00042c0d) cams_zoom_pane_cp2_ParamLimits

0x568b,	// (0x00042c0d) cams_zoom_pane_cp2

0x5697,	// (0x00042c19) image2_vga_pane_ParamLimits

0x5697,	// (0x00042c19) image2_vga_pane

0x56a6,	// (0x00042c28) main_camera2_pane_g1_ParamLimits

0x56a6,	// (0x00042c28) main_camera2_pane_g1

0x56b2,	// (0x00042c34) main_camera2_pane_g2_ParamLimits

0x56b2,	// (0x00042c34) main_camera2_pane_g2

0x56be,	// (0x00042c40) main_camera2_pane_g3_ParamLimits

0x56be,	// (0x00042c40) main_camera2_pane_g3

0x56ca,	// (0x00042c4c) main_camera2_pane_g4_ParamLimits

0x56ca,	// (0x00042c4c) main_camera2_pane_g4

0x56d6,	// (0x00042c58) main_camera2_pane_g5_ParamLimits

0x56d6,	// (0x00042c58) main_camera2_pane_g5

0x56e2,	// (0x00042c64) main_camera2_pane_g6_ParamLimits

0x56e2,	// (0x00042c64) main_camera2_pane_g6

0x56ee,	// (0x00042c70) main_camera2_pane_g7_ParamLimits

0x56ee,	// (0x00042c70) main_camera2_pane_g7

0x56fa,	// (0x00042c7c) main_camera2_pane_g8_ParamLimits

0x56fa,	// (0x00042c7c) main_camera2_pane_g8

0x0008,

0xf61a,	// (0x0004cb9c) main_camera2_pane_g_ParamLimits

0xf61a,	// (0x0004cb9c) main_camera2_pane_g

0x5712,	// (0x00042c94) main_camera2_pane_t1_ParamLimits

0x5712,	// (0x00042c94) main_camera2_pane_t1

0x5724,	// (0x00042ca6) main_camera2_pane_t2_ParamLimits

0x5724,	// (0x00042ca6) main_camera2_pane_t2

0x5736,	// (0x00042cb8) main_camera2_pane_t3_ParamLimits

0x5736,	// (0x00042cb8) main_camera2_pane_t3

0x5748,	// (0x00042cca) main_camera2_pane_t4_ParamLimits

0x5748,	// (0x00042cca) main_camera2_pane_t4

0x0006,

0xf62d,	// (0x0004cbaf) main_camera2_pane_t_ParamLimits

0xf62d,	// (0x0004cbaf) main_camera2_pane_t

0x57aa,	// (0x00042d2c) cams_zoom_pane_cp4_ParamLimits

0x57aa,	// (0x00042d2c) cams_zoom_pane_cp4

0x57ba,	// (0x00042d3c) image2_cif_pane_ParamLimits

0x57ba,	// (0x00042d3c) image2_cif_pane

0x57cf,	// (0x00042d51) image2_subqcif_pane_ParamLimits

0x57cf,	// (0x00042d51) image2_subqcif_pane

0x57de,	// (0x00042d60) main_video2_pane_g1_ParamLimits

0x57de,	// (0x00042d60) main_video2_pane_g1

0x57f0,	// (0x00042d72) main_video2_pane_g2_ParamLimits

0x57f0,	// (0x00042d72) main_video2_pane_g2

0x5800,	// (0x00042d82) main_video2_pane_g3_ParamLimits

0x5800,	// (0x00042d82) main_video2_pane_g3

0x5810,	// (0x00042d92) main_video2_pane_g4_ParamLimits

0x5810,	// (0x00042d92) main_video2_pane_g4

0x5820,	// (0x00042da2) main_video2_pane_g5_ParamLimits

0x5820,	// (0x00042da2) main_video2_pane_g5

0x5830,	// (0x00042db2) main_video2_pane_g6_ParamLimits

0x5830,	// (0x00042db2) main_video2_pane_g6

0x0005,

0xf63c,	// (0x0004cbbe) main_video2_pane_g_ParamLimits

0xf63c,	// (0x0004cbbe) main_video2_pane_g

0x5842,	// (0x00042dc4) main_video2_pane_t1_ParamLimits

0x5842,	// (0x00042dc4) main_video2_pane_t1

0x585c,	// (0x00042dde) main_video2_pane_t2_ParamLimits

0x585c,	// (0x00042dde) main_video2_pane_t2

0x5882,	// (0x00042e04) main_video2_pane_t3_ParamLimits

0x5882,	// (0x00042e04) main_video2_pane_t3

0x0002,

0xf649,	// (0x0004cbcb) main_video2_pane_t_ParamLimits

0xf649,	// (0x0004cbcb) main_video2_pane_t

0x514c,	// (0x000426ce) call_muted_g2

0x0001,

0xf5eb,	// (0x0004cb6d) call_muted_g

0xa549,	// (0x00047acb) main_mup2_pane

0xc9b9,	// (0x00049f3b) main_mup2_pane_g1_ParamLimits

0xc9b9,	// (0x00049f3b) main_mup2_pane_g1

0x58a8,	// (0x00042e2a) main_mup2_pane_g2_ParamLimits

0x58a8,	// (0x00042e2a) main_mup2_pane_g2

0x5b2a,	// (0x000430ac) main_mup_pane_g13_cp1

0x5b32,	// (0x000430b4) mup_volume_pane_cp1

0x58c8,	// (0x00042e4a) main_mup2_pane_g4_ParamLimits

0x58c8,	// (0x00042e4a) main_mup2_pane_g4

0x58dd,	// (0x00042e5f) main_mup2_pane_g5_ParamLimits

0x58dd,	// (0x00042e5f) main_mup2_pane_g5

0x58f2,	// (0x00042e74) main_mup2_pane_g6_ParamLimits

0x58f2,	// (0x00042e74) main_mup2_pane_g6

0x5907,	// (0x00042e89) main_mup2_pane_g7_ParamLimits

0x5907,	// (0x00042e89) main_mup2_pane_g7

0x0006,

0xf650,	// (0x0004cbd2) main_mup2_pane_g_ParamLimits

0xf650,	// (0x0004cbd2) main_mup2_pane_g

0x5923,	// (0x00042ea5) main_mup2_pane_t1_ParamLimits

0x5923,	// (0x00042ea5) main_mup2_pane_t1

0x593a,	// (0x00042ebc) main_mup2_pane_t2_ParamLimits

0x593a,	// (0x00042ebc) main_mup2_pane_t2

0x5951,	// (0x00042ed3) main_mup2_pane_t3_ParamLimits

0x5951,	// (0x00042ed3) main_mup2_pane_t3

0x5968,	// (0x00042eea) main_mup2_pane_t4_ParamLimits

0x5968,	// (0x00042eea) main_mup2_pane_t4

0x5982,	// (0x00042f04) main_mup2_pane_t5_ParamLimits

0x5982,	// (0x00042f04) main_mup2_pane_t5

0x599c,	// (0x00042f1e) main_mup2_pane_t6_ParamLimits

0x599c,	// (0x00042f1e) main_mup2_pane_t6

0x0005,

0xf65f,	// (0x0004cbe1) main_mup2_pane_t_ParamLimits

0xf65f,	// (0x0004cbe1) main_mup2_pane_t

0x59d4,	// (0x00042f56) mup2_visualizer_pane_ParamLimits

0x59d4,	// (0x00042f56) mup2_visualizer_pane

0x5a0a,	// (0x00042f8c) mup_progress_pane_cp_ParamLimits

0x5a0a,	// (0x00042f8c) mup_progress_pane_cp

0x5b15,	// (0x00043097) mup_volume_pane_cp_ParamLimits

0x5b15,	// (0x00043097) mup_volume_pane_cp

0x5a21,	// (0x00042fa3) mup2_visualizer_pane_g1_ParamLimits

0x5a21,	// (0x00042fa3) mup2_visualizer_pane_g1

0xc9c5,	// (0x00049f47) mup2_visualizer_pane_g2_ParamLimits

0xc9c5,	// (0x00049f47) mup2_visualizer_pane_g2

0x5a36,	// (0x00042fb8) mup2_visualizer_pane_g3_ParamLimits

0x5a36,	// (0x00042fb8) mup2_visualizer_pane_g3

0x0002,

0xf66c,	// (0x0004cbee) mup2_visualizer_pane_g_ParamLimits

0xf66c,	// (0x0004cbee) mup2_visualizer_pane_g

0xb7ac,	// (0x00048d2e) aid_size_cell_fmradio

0x5262,	// (0x000427e4) aid_height_parent_landcape

0xabe0,	// (0x00048162) wml_content_pane_cp

0xabe8,	// (0x0004816a) wml_tabs_pane

0xabf1,	// (0x00048173) popup_wml_miniature_window

0xabf9,	// (0x0004817b) scroll_pane_cp021

0xac0d,	// (0x0004818f) wml_content_pane_comp8

0xa549,	// (0x00047acb) bg_popup_sub_pane_cp05

0xc9e3,	// (0x00049f65) popup_wml_miniature_window_g1

0xc9eb,	// (0x00049f6d) wml_miniature_view_pane

0x5a44,	// (0x00042fc6) aid_size_wml_view

0x5a4c,	// (0x00042fce) wml_miniature_view_pane_g1

0x5a55,	// (0x00042fd7) wml_miniature_view_pane_g2

0x5a5e,	// (0x00042fe0) wml_miniature_view_pane_g3

0x5a66,	// (0x00042fe8) wml_miniature_view_pane_g4

0x5a6e,	// (0x00042ff0) wml_miniature_view_pane_g5

0x5a76,	// (0x00042ff8) wml_miniature_view_pane_g6

0x5a7e,	// (0x00043000) wml_miniature_view_pane_g7

0x5a86,	// (0x00043008) wml_miniature_view_pane_g8

0x0007,

0xf673,	// (0x0004cbf5) wml_miniature_view_pane_g

0xc9b9,	// (0x00049f3b) background_graphic_ParamLimits

0xc9b9,	// (0x00049f3b) background_graphic

0xc9f3,	// (0x00049f75) wml_tabs_2_pane

0xc9fc,	// (0x00049f7e) wml_tabs_3_pane_ParamLimits

0xc9fc,	// (0x00049f7e) wml_tabs_3_pane

0xca0e,	// (0x00049f90) wml_tabs_4_pane_ParamLimits

0xca0e,	// (0x00049f90) wml_tabs_4_pane

0xca24,	// (0x00049fa6) wml_tabs_5_pane_ParamLimits

0xca24,	// (0x00049fa6) wml_tabs_5_pane

0xca3e,	// (0x00049fc0) wml_tabs_pane_g2_ParamLimits

0xca3e,	// (0x00049fc0) wml_tabs_pane_g2

0xca52,	// (0x00049fd4) wml_tabs_pane_g3_ParamLimits

0xca52,	// (0x00049fd4) wml_tabs_pane_g3

0x5a8e,	// (0x00043010) wml_tabs_2_active_pane_ParamLimits

0x5a8e,	// (0x00043010) wml_tabs_2_active_pane

0x5a9e,	// (0x00043020) wml_tabs_2_passive_pane_ParamLimits

0x5a9e,	// (0x00043020) wml_tabs_2_passive_pane

0x5aae,	// (0x00043030) wml_tabs_3_active_pane_cp_ParamLimits

0x5aae,	// (0x00043030) wml_tabs_3_active_pane_cp

0x5abf,	// (0x00043041) wml_tabs_3_passive_pane_ParamLimits

0x5abf,	// (0x00043041) wml_tabs_3_passive_pane

0x5ad0,	// (0x00043052) wml_tabs_3_passive_pane_cp_ParamLimits

0x5ad0,	// (0x00043052) wml_tabs_3_passive_pane_cp

0x5ae1,	// (0x00043063) tabs_4_active_pane

0x5ae9,	// (0x0004306b) tabs_4_passive_pane

0x5af1,	// (0x00043073) tabs_4_passive_pane_cp

0x5af9,	// (0x0004307b) tabs_4_passive_pane_cp2

0x5027,	// (0x000425a9) aid_height_text

0x4836,	// (0x00041db8) mup_volume_cont_pane_ParamLimits

0x4836,	// (0x00041db8) mup_volume_cont_pane

0x241a,	// (0x0003f99c) aid_size_cell_pinb

0x2424,	// (0x0003f9a6) aid_size_list_pinb

0x59f3,	// (0x00042f75) mup2_volume_cont_pane_ParamLimits

0x59f3,	// (0x00042f75) mup2_volume_cont_pane

0x5b01,	// (0x00043083) mup2_volume_cont_pane_g1_ParamLimits

0x5b01,	// (0x00043083) mup2_volume_cont_pane_g1

0x2054,	// (0x0003f5d6) aid_size_cell_touch_ParamLimits

0x2054,	// (0x0003f5d6) aid_size_cell_touch

0x22fd,	// (0x0003f87f) touch_pane_ParamLimits

0x22fd,	// (0x0003f87f) touch_pane

0xa12c,	// (0x000476ae) main_rss2_pane

0xca6f,	// (0x00049ff1) listscroll_rss2_pane

0xca78,	// (0x00049ffa) rss2_navigation_pane

0xca80,	// (0x0004a002) list_rss2_pane

0xb29a,	// (0x0004881c) scroll_pane_cp22

0xca88,	// (0x0004a00a) rss2_navigation_pane_g1

0xca91,	// (0x0004a013) rss2_navigation_pane_g2

0xca99,	// (0x0004a01b) rss2_navigation_pane_g3

0x0002,

0xf684,	// (0x0004cc06) rss2_navigation_pane_g

0xcaa1,	// (0x0004a023) rss2_navigation_pane_t1

0x5b3a,	// (0x000430bc) rss2_list_single_pane_ParamLimits

0x5b3a,	// (0x000430bc) rss2_list_single_pane

0xcaaf,	// (0x0004a031) rss2_list_single_pane_t2

0xcabd,	// (0x0004a03f) rss2_list_single_pane_t3_ParamLimits

0xcabd,	// (0x0004a03f) rss2_list_single_pane_t3

0xcada,	// (0x0004a05c) rss2_list_single_pane_t4

0x416a,	// (0x000416ec) smil_status_pane_g1

0xaf98,	// (0x0004851a) main_image2_pane_ParamLimits

0xaf98,	// (0x0004851a) main_image2_pane

0x5706,	// (0x00042c88) main_camera2_pane_g9_ParamLimits

0x5706,	// (0x00042c88) main_camera2_pane_g9

0x575a,	// (0x00042cdc) main_camera2_pane_t5_ParamLimits

0x575a,	// (0x00042cdc) main_camera2_pane_t5

0x576c,	// (0x00042cee) main_camera2_pane_t6_ParamLimits

0x576c,	// (0x00042cee) main_camera2_pane_t6

0x5b6e,	// (0x000430f0) main_image2_pane_g1_ParamLimits

0x5b6e,	// (0x000430f0) main_image2_pane_g1

0x4dc1,	// (0x00042343) smil2_video_pane_ParamLimits

0x4dc1,	// (0x00042343) smil2_video_pane

0x0c1d,	// (0x0003e19f) aid_zoom_text_primary_cp

0x22a6,	// (0x0003f828) popup_preview_fixed_window

0xab49,	// (0x000480cb) im_reading_pane_g1

0x5650,	// (0x00042bd2) cams2_bc_adjust_pane_cp_ParamLimits

0x5650,	// (0x00042bd2) cams2_bc_adjust_pane_cp

0x579c,	// (0x00042d1e) cams2_bc_adjust_pane_ParamLimits

0x579c,	// (0x00042d1e) cams2_bc_adjust_pane

0x5b7a,	// (0x000430fc) cams2_bc_adjust_pane_g1

0x5b82,	// (0x00043104) cams2_slider_pane

0x5b8b,	// (0x0004310d) cams2_slider_pane_g1

0x5b94,	// (0x00043116) cams2_slider_pane_g2

0x0006,

0xf68b,	// (0x0004cc0d) cams2_slider_pane_g

0x2524,	// (0x0003faa6) calc_display_pane_ParamLimits

0x2542,	// (0x0003fac4) calc_paper_pane_ParamLimits

0x255e,	// (0x0003fae0) grid_calc_pane_ParamLimits

0x4370,	// (0x000418f2) popup_clock_digital_window_t1_ParamLimits

0xb749,	// (0x00048ccb) main_image_pane_t1

0x250a,	// (0x0003fa8c) aid_size_cell_calc_ParamLimits

0x250a,	// (0x0003fa8c) aid_size_cell_calc

0x529c,	// (0x0004281e) popup_blid_sat_info2_window_ParamLimits

0x529c,	// (0x0004281e) popup_blid_sat_info2_window

0xcaf0,	// (0x0004a072) aid_size_cell_blid

0xcaf8,	// (0x0004a07a) bg_popup_window_pane_cp07

0xcb1b,	// (0x0004a09d) grid_popup_blid_pane

0xcb25,	// (0x0004a0a7) heading_pane_cp05_ParamLimits

0xcb25,	// (0x0004a0a7) heading_pane_cp05

0xcbef,	// (0x0004a171) cell_popup_blid_pane_ParamLimits

0xcbef,	// (0x0004a171) cell_popup_blid_pane

0xcc13,	// (0x0004a195) cell_popup_blid_pane_g1

0xcc1b,	// (0x0004a19d) cell_popup_blid_pane_t1

0x59b9,	// (0x00042f3b) mup2_indicator_pane_ParamLimits

0x59b9,	// (0x00042f3b) mup2_indicator_pane

0xaa50,	// (0x00047fd2) mup2_visualizer_osc_pane

0xc9d1,	// (0x00049f53) mup2_visualizer_spec_pane_ParamLimits

0xc9d1,	// (0x00049f53) mup2_visualizer_spec_pane

0x5bae,	// (0x00043130) mup2_spec_half_pane

0x5bb7,	// (0x00043139) mup2_spec_half_pane_cp

0x5bc1,	// (0x00043143) mup2_spec_bar_pane_ParamLimits

0x5bc1,	// (0x00043143) mup2_spec_bar_pane

0xc966,	// (0x00049ee8) mup2_spec_bar_pane_g1

0xc970,	// (0x00049ef2) mup2_spec_bar_pane_g2

0x0001,

0xf5fe,	// (0x0004cb80) mup2_spec_bar_pane_g

0x5be0,	// (0x00043162) mup2_osc_middle_pane

0xc982,	// (0x00049f04) mup2_visualizer_osc_pane_g1

0xa156,	// (0x000476d8) popup_number_entry_window_t1_ParamLimits

0xa169,	// (0x000476eb) popup_number_entry_window_t2_ParamLimits

0xa17b,	// (0x000476fd) popup_number_entry_window_t3_ParamLimits

0x2354,	// (0x0003f8d6) popup_number_entry_window_t5_ParamLimits

0x2354,	// (0x0003f8d6) popup_number_entry_window_t5

0xf0af,	// (0x0004c631) popup_number_entry_window_t_ParamLimits

0xa18d,	// (0x0004770f) text_title_cp2_ParamLimits

0x4ab6,	// (0x00042038) aid_hotspot_pointer_text2_pane

0x4b50,	// (0x000420d2) main_viewer_pane_g9_ParamLimits

0x4b50,	// (0x000420d2) main_viewer_pane_g9

0xad82,	// (0x00048304) cale_month_pane_t1_ParamLimits

0xadbf,	// (0x00048341) bg_cale_pane_ParamLimits

0xadd7,	// (0x00048359) list_cale_pane_ParamLimits

0xade8,	// (0x0004836a) listscroll_cale_day_pane_t1

0xadfa,	// (0x0004837c) scroll_pane_cp09_ParamLimits

0x4875,	// (0x00041df7) main_mup_eq_pane_t1_ParamLimits

0x4875,	// (0x00041df7) main_mup_eq_pane_t1

0x488f,	// (0x00041e11) main_mup_eq_pane_t2_ParamLimits

0x488f,	// (0x00041e11) main_mup_eq_pane_t2

0x48a7,	// (0x00041e29) main_mup_eq_pane_t3_ParamLimits

0x48a7,	// (0x00041e29) main_mup_eq_pane_t3

0x48bf,	// (0x00041e41) main_mup_eq_pane_t4_ParamLimits

0x48bf,	// (0x00041e41) main_mup_eq_pane_t4

0x48d7,	// (0x00041e59) main_mup_eq_pane_t5_ParamLimits

0x48d7,	// (0x00041e59) main_mup_eq_pane_t5

0x48ef,	// (0x00041e71) main_mup_eq_pane_t6_ParamLimits

0x48ef,	// (0x00041e71) main_mup_eq_pane_t6

0x4903,	// (0x00041e85) main_mup_eq_pane_t7_ParamLimits

0x4903,	// (0x00041e85) main_mup_eq_pane_t7

0x4917,	// (0x00041e99) main_mup_eq_pane_t8_ParamLimits

0x4917,	// (0x00041e99) main_mup_eq_pane_t8

0x492d,	// (0x00041eaf) main_mup_eq_pane_t9_ParamLimits

0x492d,	// (0x00041eaf) main_mup_eq_pane_t9

0x4945,	// (0x00041ec7) main_mup_eq_pane_t10_ParamLimits

0x4945,	// (0x00041ec7) main_mup_eq_pane_t10

0x0009,

0xf43a,	// (0x0004c9bc) main_mup_eq_pane_t_ParamLimits

0xf43a,	// (0x0004c9bc) main_mup_eq_pane_t

0x4a02,	// (0x00041f84) mup_equalizer_pane_cp5_ParamLimits

0x4a18,	// (0x00041f9a) mup_equalizer_pane_cp6_ParamLimits

0x4a30,	// (0x00041fb2) mup_equalizer_pane_cp7_ParamLimits

0xa12c,	// (0x000476ae) main_gallery_pane

0xc98b,	// (0x00049f0d) smil2_volume_pane

0xc993,	// (0x00049f15) smil_status_volume_pane_g1_ParamLimits

0xc9a6,	// (0x00049f28) smil_status_volume_pane_g2_ParamLimits

0x54c3,	// (0x00042a45) smil_status_volume_pane_g3_ParamLimits

0xf603,	// (0x0004cb85) smil_status_volume_pane_g_ParamLimits

0xcaf8,	// (0x0004a07a) bg_popup_window_pane_cp07_ParamLimits

0xcb06,	// (0x0004a088) blid_firmament_pane

0x5be9,	// (0x0004316b) aid_size_cell_gallery_ParamLimits

0x5be9,	// (0x0004316b) aid_size_cell_gallery

0x5bf7,	// (0x00043179) grid_gallery_pane_ParamLimits

0x5bf7,	// (0x00043179) grid_gallery_pane

0x5c07,	// (0x00043189) cell_gallery_pane_ParamLimits

0x5c07,	// (0x00043189) cell_gallery_pane

0xcc29,	// (0x0004a1ab) bg_cell_gallery_focus_pane_ParamLimits

0xcc29,	// (0x0004a1ab) bg_cell_gallery_focus_pane

0xcc3b,	// (0x0004a1bd) cell_gallery_pane_g1_ParamLimits

0xcc3b,	// (0x0004a1bd) cell_gallery_pane_g1

0x5c55,	// (0x000431d7) cell_gallery_pane_g2_ParamLimits

0x5c55,	// (0x000431d7) cell_gallery_pane_g2

0x5c62,	// (0x000431e4) cell_gallery_pane_g3_ParamLimits

0x5c62,	// (0x000431e4) cell_gallery_pane_g3

0xcc47,	// (0x0004a1c9) cell_gallery_pane_g4_ParamLimits

0xcc47,	// (0x0004a1c9) cell_gallery_pane_g4

0x0003,

0xf6b1,	// (0x0004cc33) cell_gallery_pane_g_ParamLimits

0xf6b1,	// (0x0004cc33) cell_gallery_pane_g

0xcc53,	// (0x0004a1d5) bg_cell_gallery_focus_pane_g1

0xcc5b,	// (0x0004a1dd) bg_cell_gallery_focus_pane_g2

0xcc63,	// (0x0004a1e5) bg_cell_gallery_focus_pane_g3

0xcc6b,	// (0x0004a1ed) bg_cell_gallery_focus_pane_g4

0xcc73,	// (0x0004a1f5) bg_cell_gallery_focus_pane_g5

0xcc7b,	// (0x0004a1fd) bg_cell_gallery_focus_pane_g6

0xcc83,	// (0x0004a205) bg_cell_gallery_focus_pane_g7

0xcc8b,	// (0x0004a20d) bg_cell_gallery_focus_pane_g8

0x0007,

0xf6ba,	// (0x0004cc3c) bg_cell_gallery_focus_pane_g

0xcc93,	// (0x0004a215) aid_firma_cardinal

0xcca7,	// (0x0004a229) blid_firmament_pane_t1

0xccbe,	// (0x0004a240) blid_firmament_pane_t2

0xccd5,	// (0x0004a257) blid_firmament_pane_t3

0xccec,	// (0x0004a26e) blid_firmament_pane_t4

0x0003,

0xf6cb,	// (0x0004cc4d) blid_firmament_pane_t

0xcd03,	// (0x0004a285) blid_sat_info_pane

0xcd13,	// (0x0004a295) blid_sat_info_pane_g1

0xcd13,	// (0x0004a295) blid_sat_info_pane_g2

0x0001,

0xf6d4,	// (0x0004cc56) blid_sat_info_pane_g

0xcd1d,	// (0x0004a29f) blid_sat_info_pane_t1

0xcd2b,	// (0x0004a2ad) smil2_volume_content_pane

0xcd34,	// (0x0004a2b6) smil2_volume_pane_g1

0xafa6,	// (0x00048528) smil2_volume_content_pane_g1

0xcd3c,	// (0x0004a2be) smil2_volume_content_pane_g2

0xcd45,	// (0x0004a2c7) smil2_volume_content_pane_g3

0xcd4e,	// (0x0004a2d0) smil2_volume_content_pane_g4

0xcd57,	// (0x0004a2d9) smil2_volume_content_pane_g5

0xcd60,	// (0x0004a2e2) smil2_volume_content_pane_g6

0xcd69,	// (0x0004a2eb) smil2_volume_content_pane_g7

0xcd72,	// (0x0004a2f4) smil2_volume_content_pane_g8

0xcd7b,	// (0x0004a2fd) smil2_volume_content_pane_g9

0xcd84,	// (0x0004a306) smil2_volume_content_pane_g10

0x0009,

0xf6d9,	// (0x0004cc5b) smil2_volume_content_pane_g

0x2b49,	// (0x000400cb) cale_week_day_heading_pane_t1_ParamLimits

0x2b64,	// (0x000400e6) cale_week_day_heading_pane_t2_ParamLimits

0x2b7f,	// (0x00040101) cale_week_day_heading_pane_t3_ParamLimits

0x2b9a,	// (0x0004011c) cale_week_day_heading_pane_t4_ParamLimits

0x2bb5,	// (0x00040137) cale_week_day_heading_pane_t5_ParamLimits

0x2bd0,	// (0x00040152) cale_week_day_heading_pane_t6_ParamLimits

0x2beb,	// (0x0004016d) cale_week_day_heading_pane_t7_ParamLimits

0xf1b6,	// (0x0004c738) cale_week_day_heading_pane_t_ParamLimits

0xa9f5,	// (0x00047f77) bg_cale_side_pane_ParamLimits

0x2c06,	// (0x00040188) cale_week_time_pane_t1_ParamLimits

0x2c20,	// (0x000401a2) cale_week_time_pane_t2_ParamLimits

0x2c3a,	// (0x000401bc) cale_week_time_pane_t3_ParamLimits

0x2c54,	// (0x000401d6) cale_week_time_pane_t4_ParamLimits

0x2c6e,	// (0x000401f0) cale_week_time_pane_t5_ParamLimits

0x2c88,	// (0x0004020a) cale_week_time_pane_t6_ParamLimits

0x2ca8,	// (0x0004022a) cale_week_time_pane_t7_ParamLimits

0x2cca,	// (0x0004024c) cale_week_time_pane_t8_ParamLimits

0xf1c5,	// (0x0004c747) cale_week_time_pane_t_ParamLimits

0x2cee,	// (0x00040270) cell_cale_week_pane_g2_ParamLimits

0xa9f5,	// (0x00047f77) bg_cale_side_pane_cp01_ParamLimits

0x3f59,	// (0x000414db) cale_month_week_pane_t1_ParamLimits

0x3f72,	// (0x000414f4) cale_month_week_pane_t2_ParamLimits

0x3f8b,	// (0x0004150d) cale_month_week_pane_t3_ParamLimits

0x3fa4,	// (0x00041526) cale_month_week_pane_t4_ParamLimits

0x3fbf,	// (0x00041541) cale_month_week_pane_t5_ParamLimits

0x3fe0,	// (0x00041562) cale_month_week_pane_t6_ParamLimits

0xf29a,	// (0x0004c81c) cale_month_week_pane_t_ParamLimits

0x4127,	// (0x000416a9) cell_cale_month_pane_g1_ParamLimits

0xa12c,	// (0x000476ae) main_cale_event_viewer_pane

0xa12c,	// (0x000476ae) listscroll_cale_event_viewer_pane

0xcd8d,	// (0x0004a30f) list_cale_ev_pane

0xcd95,	// (0x0004a317) scroll_pane_cp023

0xcda1,	// (0x0004a323) field_cale_ev_pane_ParamLimits

0xcda1,	// (0x0004a323) field_cale_ev_pane

0xcdbf,	// (0x0004a341) field_cale_ev_content_pane_ParamLimits

0xcdbf,	// (0x0004a341) field_cale_ev_content_pane

0xcdcb,	// (0x0004a34d) field_cale_ev_pane_g1_ParamLimits

0xcdcb,	// (0x0004a34d) field_cale_ev_pane_g1

0xcdd7,	// (0x0004a359) field_cale_ev_pane_g2_ParamLimits

0xcdd7,	// (0x0004a359) field_cale_ev_pane_g2

0xcdef,	// (0x0004a371) field_cale_ev_pane_g3_ParamLimits

0xcdef,	// (0x0004a371) field_cale_ev_pane_g3

0x0002,

0xf6ee,	// (0x0004cc70) field_cale_ev_pane_g_ParamLimits

0xf6ee,	// (0x0004cc70) field_cale_ev_pane_g

0xce07,	// (0x0004a389) field_cale_ev_pane_t1_ParamLimits

0xce07,	// (0x0004a389) field_cale_ev_pane_t1

0xafaf,	// (0x00048531) field_cale_ev_content_pane_t1_ParamLimits

0xafaf,	// (0x00048531) field_cale_ev_content_pane_t1

0xb62f,	// (0x00048bb1) bg_button_pane_cp01

0x28d4,	// (0x0003fe56) listscroll_cale_week_pane_ParamLimits

0xa9a0,	// (0x00047f22) popup_toolbar_window_cp01

0xa9c6,	// (0x00047f48) listscroll_cale_week_pane_t1_ParamLimits

0x28d4,	// (0x0003fe56) listscroll_cale_day_pane_ParamLimits

0xa9a0,	// (0x00047f22) popup_toolbar_window_cp02

0xade8,	// (0x0004836a) listscroll_cale_day_pane_t1_ParamLimits

0x28d4,	// (0x0003fe56) main_cale_month_pane_ParamLimits

0x539f,	// (0x00042921) popup_toolbar_window_cp03_ParamLimits

0x539f,	// (0x00042921) popup_toolbar_window_cp03

0x4cd7,	// (0x00042259) main_image_pane_g2_ParamLimits

0x4cd7,	// (0x00042259) main_image_pane_g2

0x4ce3,	// (0x00042265) main_image_pane_g3_ParamLimits

0x4ce3,	// (0x00042265) main_image_pane_g3

0x0002,

0xf4cc,	// (0x0004ca4e) main_image_pane_g_ParamLimits

0xf4cc,	// (0x0004ca4e) main_image_pane_g

0xb749,	// (0x00048ccb) main_image_pane_t1_ParamLimits

0x4cef,	// (0x00042271) main_image_pane_t2_ParamLimits

0x4cef,	// (0x00042271) main_image_pane_t2

0x4d01,	// (0x00042283) main_image_pane_t3_ParamLimits

0x4d01,	// (0x00042283) main_image_pane_t3

0x4d13,	// (0x00042295) main_image_pane_t4_ParamLimits

0x4d13,	// (0x00042295) main_image_pane_t4

0x0003,

0xf4d3,	// (0x0004ca55) main_image_pane_t_ParamLimits

0xf4d3,	// (0x0004ca55) main_image_pane_t

0x4d25,	// (0x000422a7) popup_image_details_window_cp01

0x4d2f,	// (0x000422b1) popup_toobar_trans_pane_cp01_ParamLimits

0x4d2f,	// (0x000422b1) popup_toobar_trans_pane_cp01

0x52ef,	// (0x00042871) popup_image_details_window_ParamLimits

0x52ef,	// (0x00042871) popup_image_details_window

0x52fd,	// (0x0004287f) popup_image_focus_window

0x5642,	// (0x00042bc4) camera2_autofocus_pane_ParamLimits

0x5642,	// (0x00042bc4) camera2_autofocus_pane

0xa12c,	// (0x000476ae) bg_popup_sub_pane_cp06

0xce1e,	// (0x0004a3a0) popup_image_focus_window_g1

0xce26,	// (0x0004a3a8) popup_image_focus_window_g2

0xce2e,	// (0x0004a3b0) popup_image_focus_window_g3

0xce36,	// (0x0004a3b8) popup_image_focus_window_g4

0x0003,

0xf6f5,	// (0x0004cc77) popup_image_focus_window_g

0xce3e,	// (0x0004a3c0) popup_image_focus_window_t1

0xce4c,	// (0x0004a3ce) popup_image_focus_window_t2

0xce5c,	// (0x0004a3de) popup_image_focus_window_t3

0x0002,

0xf6fe,	// (0x0004cc80) popup_image_focus_window_t

0xce6a,	// (0x0004a3ec) camera2_autofocus_pane_g1

0xaf98,	// (0x0004851a) bg_tb_trans_pane_cp01

0xce78,	// (0x0004a3fa) popup_image_details_window_g1

0xce8b,	// (0x0004a40d) popup_image_details_window_g2

0x0002,

0xf710,	// (0x0004cc92) popup_image_details_window_g

0xceb4,	// (0x0004a436) popup_image_details_window_t1

0xcec6,	// (0x0004a448) popup_image_details_window_t2

0xcedf,	// (0x0004a461) popup_image_details_window_t3

0xcef3,	// (0x0004a475) popup_image_details_window_t4

0xcf0e,	// (0x0004a490) popup_image_details_window_t5

0x0004,

0xf717,	// (0x0004cc99) popup_image_details_window_t

0xa861,	// (0x00047de3) bg_calc_paper_pane_ParamLimits

0xa12c,	// (0x000476ae) grid_highlight_pane_cp013

0x265b,	// (0x0003fbdd) list_calc_pane_ParamLimits

0x266d,	// (0x0003fbef) scroll_pane_cp024

0xa88b,	// (0x00047e0d) bg_calc_display_pane_ParamLimits

0x2675,	// (0x0003fbf7) calc_display_pane_t1_ParamLimits

0x268a,	// (0x0003fc0c) calc_display_pane_t2_ParamLimits

0x269f,	// (0x0003fc21) calc_display_pane_t3_ParamLimits

0xf136,	// (0x0004c6b8) calc_display_pane_t_ParamLimits

0x2779,	// (0x0003fcfb) cell_calc_pane_g2

0x0001,

0xf153,	// (0x0004c6d5) cell_calc_pane_g

0x2782,	// (0x0003fd04) cell_calc_pane_t1

0xa8ea,	// (0x00047e6c) grid_highlight_pane_cp02_ParamLimits

0xa900,	// (0x00047e82) toolbar_button_pane_cp01_ParamLimits

0xa900,	// (0x00047e82) toolbar_button_pane_cp01

0xb78e,	// (0x00048d10) temp_image_control_pane_ParamLimits

0xb78e,	// (0x00048d10) temp_image_control_pane

0xaf98,	// (0x0004851a) main_mp3_pane

0xcf28,	// (0x0004a4aa) temp_image_control_pane_g1_ParamLimits

0xcf28,	// (0x0004a4aa) temp_image_control_pane_g1

0xcf36,	// (0x0004a4b8) temp_image_control_pane_g2_ParamLimits

0xcf36,	// (0x0004a4b8) temp_image_control_pane_g2

0xcf48,	// (0x0004a4ca) temp_image_control_pane_g3_ParamLimits

0xcf48,	// (0x0004a4ca) temp_image_control_pane_g3

0x5c9f,	// (0x00043221) temp_image_control_pane_g4_ParamLimits

0x5c9f,	// (0x00043221) temp_image_control_pane_g4

0x0003,

0xf722,	// (0x0004cca4) temp_image_control_pane_g_ParamLimits

0xf722,	// (0x0004cca4) temp_image_control_pane_g

0xcf28,	// (0x0004a4aa) main_mp3_pane_g1

0x5cb0,	// (0x00043232) main_mp3_pane_g2

0x0007,

0xf72b,	// (0x0004ccad) main_mp3_pane_g

0xcf8b,	// (0x0004a50d) main_mp3_pane_t1

0xaa58,	// (0x00047fda) main_camera_pane_g8_ParamLimits

0xaa58,	// (0x00047fda) main_camera_pane_g8

0x2f78,	// (0x000404fa) main_video_pane_g7_ParamLimits

0x2f78,	// (0x000404fa) main_video_pane_g7

0x578a,	// (0x00042d0c) main_camera2_pane_t7_ParamLimits

0x578a,	// (0x00042d0c) main_camera2_pane_t7

0xaba0,	// (0x00048122) scroll_pane_cp025_ParamLimits

0xaba0,	// (0x00048122) scroll_pane_cp025

0xabb4,	// (0x00048136) scroll_pane_cp026_ParamLimits

0xabb4,	// (0x00048136) scroll_pane_cp026

0xabc3,	// (0x00048145) wml_content_pane_ParamLimits

0xa12c,	// (0x000476ae) main_touch_calib_pane

0x5d54,	// (0x000432d6) main_touch_calib_pane_g1

0x5d60,	// (0x000432e2) main_touch_calib_pane_g2

0x5d6c,	// (0x000432ee) main_touch_calib_pane_g3

0x5d78,	// (0x000432fa) main_touch_calib_pane_g4

0x0003,

0xf749,	// (0x0004cccb) main_touch_calib_pane_g

0x5d84,	// (0x00043306) main_touch_calib_pane_t1

0x5d9d,	// (0x0004331f) main_touch_calib_pane_t2

0x0004,

0xf752,	// (0x0004ccd4) main_touch_calib_pane_t

0xb369,	// (0x000488eb) mup_progress_pane_cp02

0xb39e,	// (0x00048920) navi_pane_g1

0xb459,	// (0x000489db) navi_pane_mp_t3

0xaf98,	// (0x0004851a) main_mp3_pane_ParamLimits

0x53dc,	// (0x0004295e) navi_pane_ParamLimits

0xcf28,	// (0x0004a4aa) main_mp3_pane_g1_ParamLimits

0x5cb0,	// (0x00043232) main_mp3_pane_g2_ParamLimits

0x5cbc,	// (0x0004323e) main_mp3_pane_g3_ParamLimits

0x5cbc,	// (0x0004323e) main_mp3_pane_g3

0x5cc8,	// (0x0004324a) main_mp3_pane_g4_ParamLimits

0x5cc8,	// (0x0004324a) main_mp3_pane_g4

0xcf58,	// (0x0004a4da) main_mp3_pane_g5_ParamLimits

0xcf58,	// (0x0004a4da) main_mp3_pane_g5

0xcf66,	// (0x0004a4e8) main_mp3_pane_g6_ParamLimits

0xcf66,	// (0x0004a4e8) main_mp3_pane_g6

0xcf73,	// (0x0004a4f5) main_mp3_pane_g7_ParamLimits

0xcf73,	// (0x0004a4f5) main_mp3_pane_g7

0xcf7f,	// (0x0004a501) main_mp3_pane_g8_ParamLimits

0xcf7f,	// (0x0004a501) main_mp3_pane_g8

0xf72b,	// (0x0004ccad) main_mp3_pane_g_ParamLimits

0x5cd4,	// (0x00043256) main_mp3_pane_t2

0x5ce4,	// (0x00043266) main_mp3_pane_t3

0xcf99,	// (0x0004a51b) main_mp3_pane_t4

0xcfa7,	// (0x0004a529) main_mp3_pane_t5

0x0005,

0xf73c,	// (0x0004ccbe) main_mp3_pane_t

0xcfb5,	// (0x0004a537) mup_progress_pane_cp01

0x0c1d,	// (0x0003e19f) aid_zoom_text_secondary2

0xcd8d,	// (0x0004a30f) list_cale_ev2_pane

0xcd95,	// (0x0004a317) scroll_pane_cp023_ParamLimits

0x5df8,	// (0x0004337a) field_cale_ev2_pane_ParamLimits

0x5df8,	// (0x0004337a) field_cale_ev2_pane

0x0f5a,	// (0x0003e4dc) field_cale_ev2_pane_g1_ParamLimits

0x0f5a,	// (0x0003e4dc) field_cale_ev2_pane_g1

0x0f66,	// (0x0003e4e8) field_cale_ev2_pane_g2_ParamLimits

0x0f66,	// (0x0003e4e8) field_cale_ev2_pane_g2

0x0f7e,	// (0x0003e500) field_cale_ev2_pane_g3_ParamLimits

0x0f7e,	// (0x0003e500) field_cale_ev2_pane_g3

0x0003,

0xf75d,	// (0x0004ccdf) field_cale_ev2_pane_g_ParamLimits

0xf75d,	// (0x0004ccdf) field_cale_ev2_pane_g

0x0fa2,	// (0x0003e524) field_cale_ev2_pane_t1_ParamLimits

0x0fa2,	// (0x0003e524) field_cale_ev2_pane_t1

0x0fb9,	// (0x0003e53b) field_cale_ev2_pane_t2_ParamLimits

0x0fb9,	// (0x0003e53b) field_cale_ev2_pane_t2

0x0001,

0xf766,	// (0x0004cce8) field_cale_ev2_pane_t_ParamLimits

0xf766,	// (0x0004cce8) field_cale_ev2_pane_t

0x4bb8,	// (0x0004213a) main_postcard_pane_g5_ParamLimits

0x4bb8,	// (0x0004213a) main_postcard_pane_g5

0x4bc6,	// (0x00042148) main_postcard_pane_g6_ParamLimits

0x4bc6,	// (0x00042148) main_postcard_pane_g6

0x2dc2,	// (0x00040344) camera2_autofocus_pane_cp_ParamLimits

0x2dc2,	// (0x00040344) camera2_autofocus_pane_cp

0xaf98,	// (0x0004851a) main_mup3_pane

0x5e61,	// (0x000433e3) main_mup3_pane_g1_ParamLimits

0x5e61,	// (0x000433e3) main_mup3_pane_g1

0x5e82,	// (0x00043404) main_mup3_pane_g2_ParamLimits

0x5e82,	// (0x00043404) main_mup3_pane_g2

0x5efc,	// (0x0004347e) main_mup3_pane_g3_ParamLimits

0x5efc,	// (0x0004347e) main_mup3_pane_g3

0x5f3f,	// (0x000434c1) main_mup3_pane_g4_ParamLimits

0x5f3f,	// (0x000434c1) main_mup3_pane_g4

0x5f82,	// (0x00043504) main_mup3_pane_g5_ParamLimits

0x5f82,	// (0x00043504) main_mup3_pane_g5

0x5fc5,	// (0x00043547) main_mup3_pane_g6_ParamLimits

0x5fc5,	// (0x00043547) main_mup3_pane_g6

0xcfbd,	// (0x0004a53f) main_mup3_pane_g7_ParamLimits

0xcfbd,	// (0x0004a53f) main_mup3_pane_g7

0x0007,

0xf776,	// (0x0004ccf8) main_mup3_pane_g_ParamLimits

0xf776,	// (0x0004ccf8) main_mup3_pane_g

0x603b,	// (0x000435bd) main_mup3_pane_t1_ParamLimits

0x603b,	// (0x000435bd) main_mup3_pane_t1

0x60aa,	// (0x0004362c) main_mup3_pane_t2_ParamLimits

0x60aa,	// (0x0004362c) main_mup3_pane_t2

0x6173,	// (0x000436f5) main_mup3_pane_t4_ParamLimits

0x6173,	// (0x000436f5) main_mup3_pane_t4

0x61c1,	// (0x00043743) main_mup3_pane_t5_ParamLimits

0x61c1,	// (0x00043743) main_mup3_pane_t5

0x6271,	// (0x000437f3) main_mup3_pane_t6_ParamLimits

0x6271,	// (0x000437f3) main_mup3_pane_t6

0x0005,

0xf787,	// (0x0004cd09) main_mup3_pane_t_ParamLimits

0xf787,	// (0x0004cd09) main_mup3_pane_t

0x631d,	// (0x0004389f) mup3_progress_pane_ParamLimits

0x631d,	// (0x0004389f) mup3_progress_pane

0x6391,	// (0x00043913) popup_mup3_control_window_ParamLimits

0x6391,	// (0x00043913) popup_mup3_control_window

0xcfcb,	// (0x0004a54d) popup_mup3_text_window

0x63aa,	// (0x0004392c) mup3_progress_pane_t1

0x63c9,	// (0x0004394b) mup3_progress_pane_t2

0xcfd3,	// (0x0004a555) mup3_progress_pane_t3

0x0002,

0xf794,	// (0x0004cd16) mup3_progress_pane_t

0xcff0,	// (0x0004a572) mup_progress_pane_cp03

0xa12c,	// (0x000476ae) bg_tb_trans_pane_cp04

0x63e8,	// (0x0004396a) mup3_volume_pane

0x63f0,	// (0x00043972) popup_mup3_control_window_g1

0x63f9,	// (0x0004397b) mup3_volume_pane_g1

0x6402,	// (0x00043984) mup3_volume_pane_g2

0x640b,	// (0x0004398d) mup3_volume_pane_g3

0x0002,

0xf79b,	// (0x0004cd1d) mup3_volume_pane_g

0xa12c,	// (0x000476ae) bg_tb_trans_pane_cp03

0xd000,	// (0x0004a582) popup_mup3_text_window_g1

0xd008,	// (0x0004a58a) popup_mup3_text_window_t1

0xa8d3,	// (0x00047e55) list_calc_item_pane_g1_ParamLimits

0xca66,	// (0x00049fe8) mup_volume_pane_cp_g1

0x5db6,	// (0x00043338) main_touch_calib_pane_t3

0x5dcc,	// (0x0004334e) main_touch_calib_pane_t4

0x5de2,	// (0x00043364) main_touch_calib_pane_t5

0x2040,	// (0x0003f5c2) aid_cell_size_toolbar2

0x2048,	// (0x0003f5ca) aid_popup3_width_pane

0x0c15,	// (0x0003e197) aid_zoom_text_msg_primary

0x2d97,	// (0x00040319) vorec_t7

0xa897,	// (0x00047e19) bg_calc_paper_pane_g1_ParamLimits

0xa8a3,	// (0x00047e25) bg_calc_paper_pane_g2_ParamLimits

0xa8af,	// (0x00047e31) bg_calc_paper_pane_g3_ParamLimits

0xa8bb,	// (0x00047e3d) bg_calc_paper_pane_g4_ParamLimits

0xa8c7,	// (0x00047e49) bg_calc_paper_pane_g5_ParamLimits

0x26de,	// (0x0003fc60) bg_calc_paper_pane_g6_ParamLimits

0x26ef,	// (0x0003fc71) bg_calc_paper_pane_g7_ParamLimits

0x2700,	// (0x0003fc82) bg_calc_paper_pane_g8_ParamLimits

0xf13d,	// (0x0004c6bf) bg_calc_paper_pane_g_ParamLimits

0x2711,	// (0x0003fc93) calc_bg_paper_pane_g9_ParamLimits

0x2ea9,	// (0x0004042b) image_qvga_pane_ParamLimits

0x2ea9,	// (0x0004042b) image_qvga_pane

0xa7a4,	// (0x00047d26) bg_popup_sub_pane_cp04_ParamLimits

0xb6c5,	// (0x00048c47) popup_mup_playback_window_g1_ParamLimits

0xb6d1,	// (0x00048c53) popup_mup_playback_window_t1_ParamLimits

0xb6e6,	// (0x00048c68) popup_mup_playback_window_t2_ParamLimits

0xf4c7,	// (0x0004ca49) popup_mup_playback_window_t_ParamLimits

0x58b9,	// (0x00042e3b) main_mup2_pane_g3_ParamLimits

0x58b9,	// (0x00042e3b) main_mup2_pane_g3

0x3161,	// (0x000406e3) popup_toolbar_window_cp04

0xbadb,	// (0x0004905d) popup_call2_audio_second_window_g3_ParamLimits

0xbadb,	// (0x0004905d) popup_call2_audio_second_window_g3

0xbee5,	// (0x00049467) popup_call2_audio_first_window_g4_ParamLimits

0xbee5,	// (0x00049467) popup_call2_audio_first_window_g4

0xc564,	// (0x00049ae6) popup_call2_audio_in_window_g4_ParamLimits

0xc564,	// (0x00049ae6) popup_call2_audio_in_window_g4

0x4cca,	// (0x0004224c) aid_area_sk_bg_cut_ParamLimits

0x4cca,	// (0x0004224c) aid_area_sk_bg_cut

0xb6fb,	// (0x00048c7d) aid_area_sk_bg_cut_2_ParamLimits

0xb6fb,	// (0x00048c7d) aid_area_sk_bg_cut_2

0x5c45,	// (0x000431c7) aid_placing_details_win

0x5c4d,	// (0x000431cf) aid_placing_details_win_2

0xce6a,	// (0x0004a3ec) camera2_autofocus_pane_g1_ParamLimits

0x2297,	// (0x0003f819) popup_fixed_preview_cale_window_ParamLimits

0x2297,	// (0x0003f819) popup_fixed_preview_cale_window

0xb4d7,	// (0x00048a59) navi_slider_pane_g3

0xb4e0,	// (0x00048a62) navi_slider_pane_g4

0xb4e9,	// (0x00048a6b) navi_slider_pane_g5

0xb4d7,	// (0x00048a59) navi_slider_pane_g6

0x4619,	// (0x00041b9b) navi_slider_pane_g7

0xb5fc,	// (0x00048b7e) mup_scale_pane_g3

0xb605,	// (0x00048b87) mup_scale_pane_g4

0xb60e,	// (0x00048b90) mup_scale_pane_g5

0x4a48,	// (0x00041fca) mup_scale_pane_g6

0x4a51,	// (0x00041fd3) mup_scale_pane_g7

0xb4d7,	// (0x00048a59) cams2_slider_pane_g3

0xcae8,	// (0x0004a06a) cams2_slider_pane_g4

0x5b9d,	// (0x0004311f) cams2_slider_pane_g5

0xb4d7,	// (0x00048a59) cams2_slider_pane_g6

0x5ba5,	// (0x00043127) cams2_slider_pane_g7

0xcd13,	// (0x0004a295) camera2_autofocus_pane_cp_g1

0xc8ff,	// (0x00049e81) bg_popup_preview_window_pane_cp02_ParamLimits

0xc8ff,	// (0x00049e81) bg_popup_preview_window_pane_cp02

0xd016,	// (0x0004a598) list_fp_cale_pane_ParamLimits

0xd016,	// (0x0004a598) list_fp_cale_pane

0xd022,	// (0x0004a5a4) popup_fixed_preview_cale_window_t1_ParamLimits

0xd022,	// (0x0004a5a4) popup_fixed_preview_cale_window_t1

0x6414,	// (0x00043996) popup_fixed_preview_cale_window_t2_ParamLimits

0x6414,	// (0x00043996) popup_fixed_preview_cale_window_t2

0x6429,	// (0x000439ab) popup_fixed_preview_cale_window_t3_ParamLimits

0x6429,	// (0x000439ab) popup_fixed_preview_cale_window_t3

0x0002,

0xf7a2,	// (0x0004cd24) popup_fixed_preview_cale_window_t_ParamLimits

0xf7a2,	// (0x0004cd24) popup_fixed_preview_cale_window_t

0x643e,	// (0x000439c0) list_single_fp_cale_pane_ParamLimits

0x643e,	// (0x000439c0) list_single_fp_cale_pane

0xd040,	// (0x0004a5c2) list_single_fp_cale_pane_g1_ParamLimits

0xd040,	// (0x0004a5c2) list_single_fp_cale_pane_g1

0xd04c,	// (0x0004a5ce) list_single_fp_cale_pane_g2_ParamLimits

0xd04c,	// (0x0004a5ce) list_single_fp_cale_pane_g2

0x0002,

0xf7a9,	// (0x0004cd2b) list_single_fp_cale_pane_g_ParamLimits

0xf7a9,	// (0x0004cd2b) list_single_fp_cale_pane_g

0xd065,	// (0x0004a5e7) list_single_fp_cale_pane_t1_ParamLimits

0xd065,	// (0x0004a5e7) list_single_fp_cale_pane_t1

0xd077,	// (0x0004a5f9) list_single_fp_cale_pane_t2_ParamLimits

0xd077,	// (0x0004a5f9) list_single_fp_cale_pane_t2

0x0001,

0xf7b0,	// (0x0004cd32) list_single_fp_cale_pane_t_ParamLimits

0xf7b0,	// (0x0004cd32) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0xa12c,	// (0x000476ae) main_dialer_pane

0x6451,	// (0x000439d3) aid_cell_size_keypad

0x645b,	// (0x000439dd) dialer_ne_pane

0x6465,	// (0x000439e7) grid_dialer_command_1_pane

0x646d,	// (0x000439ef) grid_dialer_command_2_pane

0x6475,	// (0x000439f7) grid_dialer_keypad_pane

0x6489,	// (0x00043a0b) bg_popup_call_pane_cp06_ParamLimits

0x6489,	// (0x00043a0b) bg_popup_call_pane_cp06

0x6495,	// (0x00043a17) dialer_ne_clear_pane_ParamLimits

0x6495,	// (0x00043a17) dialer_ne_clear_pane

0xd0aa,	// (0x0004a62c) dialer_ne_pane_g1

0xd0b2,	// (0x0004a634) dialer_ne_pane_t1_ParamLimits

0xd0b2,	// (0x0004a634) dialer_ne_pane_t1

0x64a1,	// (0x00043a23) dialer_ne_pane_t2_ParamLimits

0x64a1,	// (0x00043a23) dialer_ne_pane_t2

0x64be,	// (0x00043a40) dialer_ne_pane_t3_ParamLimits

0x64be,	// (0x00043a40) dialer_ne_pane_t3

0x0002,

0xf7b5,	// (0x0004cd37) dialer_ne_pane_t_ParamLimits

0xf7b5,	// (0x0004cd37) dialer_ne_pane_t

0x64e2,	// (0x00043a64) dialer_ne_pane_t3_copy1_ParamLimits

0x64e2,	// (0x00043a64) dialer_ne_pane_t3_copy1

0x6506,	// (0x00043a88) cell_dialer_keypad_pane_ParamLimits

0x6506,	// (0x00043a88) cell_dialer_keypad_pane

0x651d,	// (0x00043a9f) cell_dialer_command_1_pane_ParamLimits

0x651d,	// (0x00043a9f) cell_dialer_command_1_pane

0x6533,	// (0x00043ab5) cell_dialer_command_2_pane_ParamLimits

0x6533,	// (0x00043ab5) cell_dialer_command_2_pane

0xd0c4,	// (0x0004a646) bg_button_pane_cp02_ParamLimits

0xd0c4,	// (0x0004a646) bg_button_pane_cp02

0x6542,	// (0x00043ac4) cell_dialer_keypad_pane_g1_ParamLimits

0x6542,	// (0x00043ac4) cell_dialer_keypad_pane_g1

0xd0c4,	// (0x0004a646) bg_button_pane_cp03_ParamLimits

0xd0c4,	// (0x0004a646) bg_button_pane_cp03

0x6557,	// (0x00043ad9) cell_dialer_command_1_pane_g1_ParamLimits

0x6557,	// (0x00043ad9) cell_dialer_command_1_pane_g1

0xd0d0,	// (0x0004a652) bg_button_pane_cp04

0x656b,	// (0x00043aed) cell_dialer_command_2_pane_g1

0xaa50,	// (0x00047fd2) bg_button_pane_cp06

0xd0d8,	// (0x0004a65a) dialer_ne_clear_pane_g1

0xb3aa,	// (0x0004892c) navi_pane_g2

0xb3d8,	// (0x0004895a) navi_pane_g3

0x0002,

0xf3ca,	// (0x0004c94c) navi_pane_g

0xb467,	// (0x000489e9) navi_pane_mv_g2

0xb48e,	// (0x00048a10) navi_pane_mv_g5

0x45e4,	// (0x00041b66) navi_pane_mv_t1

0xa88b,	// (0x00047e0d) main_clock2_pane

0xdb3f,	// (0x0004b0c1) main_clock2_list_pane_ParamLimits

0xdb3f,	// (0x0004b0c1) main_clock2_list_pane

0x65c7,	// (0x00043b49) main_clock2_pane_t1_ParamLimits

0x65c7,	// (0x00043b49) main_clock2_pane_t1

0x65f5,	// (0x00043b77) main_clock2_pane_t2_ParamLimits

0x65f5,	// (0x00043b77) main_clock2_pane_t2

0x0004,

0xf7c1,	// (0x0004cd43) main_clock2_pane_t_ParamLimits

0xf7c1,	// (0x0004cd43) main_clock2_pane_t

0x665a,	// (0x00043bdc) popup_clock_analogue_window_cp03_ParamLimits

0x665a,	// (0x00043bdc) popup_clock_analogue_window_cp03

0x6678,	// (0x00043bfa) popup_clock_digital_window_cp02_ParamLimits

0x6678,	// (0x00043bfa) popup_clock_digital_window_cp02

0x66ed,	// (0x00043c6f) main_clock2_list_single_pane_ParamLimits

0x66ed,	// (0x00043c6f) main_clock2_list_single_pane

0xaa50,	// (0x00047fd2) list_highlight_pane_cp05

0xd112,	// (0x0004a694) main_clock2_list_single_pane_t1

0x3161,	// (0x000406e3) popup_toolbar_window_cp04_ParamLimits

0x5c6f,	// (0x000431f1) camera2_autofocus_pane_g2_ParamLimits

0x5c6f,	// (0x000431f1) camera2_autofocus_pane_g2

0x5c7b,	// (0x000431fd) camera2_autofocus_pane_g3_ParamLimits

0x5c7b,	// (0x000431fd) camera2_autofocus_pane_g3

0x5c87,	// (0x00043209) camera2_autofocus_pane_g4_ParamLimits

0x5c87,	// (0x00043209) camera2_autofocus_pane_g4

0x5c93,	// (0x00043215) camera2_autofocus_pane_g5_ParamLimits

0x5c93,	// (0x00043215) camera2_autofocus_pane_g5

0x0004,

0xf705,	// (0x0004cc87) camera2_autofocus_pane_g_ParamLimits

0xf705,	// (0x0004cc87) camera2_autofocus_pane_g

0x5e22,	// (0x000433a4) camera2_autofocus_pane_cp_g2

0x5e2a,	// (0x000433ac) camera2_autofocus_pane_cp_g3

0x5e32,	// (0x000433b4) camera2_autofocus_pane_cp_g4

0x5e3a,	// (0x000433bc) camera2_autofocus_pane_cp_g5

0x0004,

0xf76b,	// (0x0004cced) camera2_autofocus_pane_cp_g

0x6481,	// (0x00043a03) popup_dialer_spcha_window

0xa12c,	// (0x000476ae) bg_popup_sub_pane_cp07

0xd120,	// (0x0004a6a2) list_spcha_pane

0xd128,	// (0x0004a6aa) list_single_spcha_pane_ParamLimits

0xd128,	// (0x0004a6aa) list_single_spcha_pane

0xa12c,	// (0x000476ae) list_highlight_pane_cp06

0xd139,	// (0x0004a6bb) list_single_spcha_pane_t1

0xc30e,	// (0x00049890) popup_call2_audio_out_window_g4_ParamLimits

0xc30e,	// (0x00049890) popup_call2_audio_out_window_g4

0xa12c,	// (0x000476ae) main_imed2_pane

0x5305,	// (0x00042887) popup_imed_adjust2_window

0x5318,	// (0x0004289a) popup_imed_trans_window_ParamLimits

0x5318,	// (0x0004289a) popup_imed_trans_window

0xcb51,	// (0x0004a0d3) popup_blid_sat_info2_window_t1

0xcb5f,	// (0x0004a0e1) popup_blid_sat_info2_window_t2

0x000a,

0xf69a,	// (0x0004cc1c) popup_blid_sat_info2_window_t

0x67a2,	// (0x00043d24) aid_size_cell_colour_35

0x67bc,	// (0x00043d3e) aid_size_cell_colour_112

0x67d3,	// (0x00043d55) aid_size_cell_effect

0xaf98,	// (0x0004851a) bg_tb_trans_pane_cp02

0xafcd,	// (0x0004854f) heading_imed_pane

0x67ed,	// (0x00043d6f) listscroll_imed_pane

0xd147,	// (0x0004a6c9) heading_imed_pane_g1

0xd14f,	// (0x0004a6d1) heading_imed_pane_t1

0xd15d,	// (0x0004a6df) grid_imed_colour_35_pane_ParamLimits

0xd15d,	// (0x0004a6df) grid_imed_colour_35_pane

0x67f9,	// (0x00043d7b) grid_imed_effect_pane

0xd175,	// (0x0004a6f7) list_imed_aspect_pane

0x6809,	// (0x00043d8b) scroll_pane_cp027_ParamLimits

0x6809,	// (0x00043d8b) scroll_pane_cp027

0x6815,	// (0x00043d97) cell_imed_effect_pane_ParamLimits

0x6815,	// (0x00043d97) cell_imed_effect_pane

0xd17d,	// (0x0004a6ff) cell_imed_colour_pane_ParamLimits

0xd17d,	// (0x0004a6ff) cell_imed_colour_pane

0xd1bf,	// (0x0004a741) cell_imed_colour_pane_g1_ParamLimits

0xd1bf,	// (0x0004a741) cell_imed_colour_pane_g1

0xd1d0,	// (0x0004a752) hgihlgiht_grid_pane_cp016_ParamLimits

0xd1d0,	// (0x0004a752) hgihlgiht_grid_pane_cp016

0x682d,	// (0x00043daf) cell_imed_effect_pane_g1

0x6835,	// (0x00043db7) grid_highlight_pane_cp017

0xd1e1,	// (0x0004a763) list_imed_single_pane_ParamLimits

0xd1e1,	// (0x0004a763) list_imed_single_pane

0xa12c,	// (0x000476ae) list_highlight_pane_cp07

0xd1f6,	// (0x0004a778) list_imed_aspect_pane_comp1_t1

0xc90b,	// (0x00049e8d) bg_tb_trans_pane_cp05

0xd218,	// (0x0004a79a) popup_imed_adjust2_window_g1

0xd23f,	// (0x0004a7c1) popup_imed_adjust2_window_t1

0xd257,	// (0x0004a7d9) slider_imed_adjust_pane

0xd26b,	// (0x0004a7ed) slider_imed_adjust_pane_g1

0xd27b,	// (0x0004a7fd) slider_imed_adjust_pane_g2

0xd28b,	// (0x0004a80d) slider_imed_adjust_pane_g3

0xd29c,	// (0x0004a81e) slider_imed_adjust_pane_g4

0x0003,

0xf7de,	// (0x0004cd60) slider_imed_adjust_pane_g

0x683e,	// (0x00043dc0) aid_size_cell_clipart2

0x684a,	// (0x00043dcc) grid_imed_clipart_pane

0xd2ad,	// (0x0004a82f) scroll_pane_cp031

0x6854,	// (0x00043dd6) cell_imed_clipart_pane_ParamLimits

0x6854,	// (0x00043dd6) cell_imed_clipart_pane

0x6877,	// (0x00043df9) cell_imed_clipart_pane_g1

0xa12c,	// (0x000476ae) grid_highlight_pane_cp014

0x65a9,	// (0x00043b2b) main_clock2_pane_g1_ParamLimits

0x65a9,	// (0x00043b2b) main_clock2_pane_g1

0x6694,	// (0x00043c16) aid_call2_pane_cp10

0x66a6,	// (0x00043c28) aid_call_pane_cp10

0xb309,	// (0x0004888b) popup_clock_analogue_window_cp10_g1

0xb309,	// (0x0004888b) popup_clock_analogue_window_cp10_g2

0x66b8,	// (0x00043c3a) popup_clock_analogue_window_cp10_g3

0x66b8,	// (0x00043c3a) popup_clock_analogue_window_cp10_g4

0xb309,	// (0x0004888b) popup_clock_analogue_window_cp10_g5

0x0004,

0xf7cc,	// (0x0004cd4e) popup_clock_analogue_window_cp10_g

0x66ce,	// (0x00043c50) popup_clock_analogue_window_cp10_t1

0x66ff,	// (0x00043c81) clock_digital_number_pane_cp10_ParamLimits

0x66ff,	// (0x00043c81) clock_digital_number_pane_cp10

0x6719,	// (0x00043c9b) clock_digital_number_pane_cp11_ParamLimits

0x6719,	// (0x00043c9b) clock_digital_number_pane_cp11

0x6733,	// (0x00043cb5) clock_digital_number_pane_cp12_ParamLimits

0x6733,	// (0x00043cb5) clock_digital_number_pane_cp12

0x674d,	// (0x00043ccf) clock_digital_number_pane_cp13_ParamLimits

0x674d,	// (0x00043ccf) clock_digital_number_pane_cp13

0x6767,	// (0x00043ce9) clock_digital_separator_pane_cp10_ParamLimits

0x6767,	// (0x00043ce9) clock_digital_separator_pane_cp10

0x6781,	// (0x00043d03) popup_clock_digital_window_cp02_t1_ParamLimits

0x6781,	// (0x00043d03) popup_clock_digital_window_cp02_t1

0xa79c,	// (0x00047d1e) clock_digital_number_pane_cp10_g1

0xa79c,	// (0x00047d1e) clock_digital_number_pane_cp10_g2

0x0001,

0xf7e7,	// (0x0004cd69) clock_digital_number_pane_cp10_g

0xa79c,	// (0x00047d1e) clock_digital_separator_pane_cp10_g1

0xa79c,	// (0x00047d1e) clock_digital_separator_pane_g2_cp10

0xb496,	// (0x00048a18) navi_pane_vded_g4

0xb49f,	// (0x00048a21) navi_pane_vded_g5

0xb4a8,	// (0x00048a2a) navi_pane_vded_t1

0xa12c,	// (0x000476ae) main_vded_pane

0x6880,	// (0x00043e02) main_vded_pane_g1

0x688c,	// (0x00043e0e) main_vded_pane_g2

0x6896,	// (0x00043e18) main_vded_pane_g3

0x0002,

0xf7ec,	// (0x0004cd6e) main_vded_pane_g

0x68a0,	// (0x00043e22) main_vded_pane_t1

0x68ae,	// (0x00043e30) main_vded_pane_t2

0x0001,

0xf7f3,	// (0x0004cd75) main_vded_pane_t

0x68bc,	// (0x00043e3e) vded_slider_pane

0x68c6,	// (0x00043e48) vded_video_pane

0xd2b5,	// (0x0004a837) vded_video_pane_g1

0x68d0,	// (0x00043e52) vded_video_pane_g2

0xcd13,	// (0x0004a295) vded_video_pane_g3

0x0002,

0xf7f8,	// (0x0004cd7a) vded_video_pane_g

0xd2bf,	// (0x0004a841) vded_slider_pane_g1

0xca66,	// (0x00049fe8) vded_slider_pane_g2

0xd2c8,	// (0x0004a84a) vded_slider_pane_g3

0xd2d1,	// (0x0004a853) vded_slider_pane_g4

0xd2da,	// (0x0004a85c) vded_slider_pane_g5

0x0004,

0xf7ff,	// (0x0004cd81) vded_slider_pane_g

0x6383,	// (0x00043905) mup3_rocker_pane_ParamLimits

0x6383,	// (0x00043905) mup3_rocker_pane

0x68d9,	// (0x00043e5b) mup3_control_keys_pane_g1

0x68e1,	// (0x00043e63) mup3_control_keys_pane_g2

0x68e9,	// (0x00043e6b) mup3_control_keys_pane_g3

0x68f1,	// (0x00043e73) mup3_control_keys_pane_g4

0x0003,

0xf80a,	// (0x0004cd8c) mup3_control_keys_pane_g

0x22bf,	// (0x0003f841) popup_toolbar2_fixed_window_cp01_ParamLimits

0x22bf,	// (0x0003f841) popup_toolbar2_fixed_window_cp01

0x639d,	// (0x0004391f) popup_toolbar2_fixed_window_cp02_ParamLimits

0x639d,	// (0x0004391f) popup_toolbar2_fixed_window_cp02

0xbc4d,	// (0x000491cf) popup_call2_audio_second_window_t4_ParamLimits

0xbc4d,	// (0x000491cf) popup_call2_audio_second_window_t4

0xc17b,	// (0x000496fd) popup_call2_audio_first_window_t6_ParamLimits

0xc17b,	// (0x000496fd) popup_call2_audio_first_window_t6

0xc411,	// (0x00049993) popup_call2_audio_out_window_t6_ParamLimits

0xc411,	// (0x00049993) popup_call2_audio_out_window_t6

0xa12c,	// (0x000476ae) main_vitu_pane

0x6901,	// (0x00043e83) aid_size_cell_itu_ParamLimits

0x6901,	// (0x00043e83) aid_size_cell_itu

0xdb3f,	// (0x0004b0c1) bg_popup_window_pane_cp08_ParamLimits

0xdb3f,	// (0x0004b0c1) bg_popup_window_pane_cp08

0x690f,	// (0x00043e91) field_vitu_entry_pane_ParamLimits

0x690f,	// (0x00043e91) field_vitu_entry_pane

0x691e,	// (0x00043ea0) grid_vitu_function_pane_ParamLimits

0x691e,	// (0x00043ea0) grid_vitu_function_pane

0x692e,	// (0x00043eb0) grid_vitu_itu_pane_ParamLimits

0x692e,	// (0x00043eb0) grid_vitu_itu_pane

0x693e,	// (0x00043ec0) cell_vitu_itu_pane_ParamLimits

0x693e,	// (0x00043ec0) cell_vitu_itu_pane

0x6953,	// (0x00043ed5) cell_vitu_function_pane_ParamLimits

0x6953,	// (0x00043ed5) cell_vitu_function_pane

0xaf98,	// (0x0004851a) bg_popup_sub_pane_cp08_ParamLimits

0xaf98,	// (0x0004851a) bg_popup_sub_pane_cp08

0x6965,	// (0x00043ee7) field_vitu_entry_pane_t1_ParamLimits

0x6965,	// (0x00043ee7) field_vitu_entry_pane_t1

0xd2fb,	// (0x0004a87d) field_vitu_entry_pane_t2_ParamLimits

0xd2fb,	// (0x0004a87d) field_vitu_entry_pane_t2

0x0001,

0xf818,	// (0x0004cd9a) field_vitu_entry_pane_t_ParamLimits

0xf818,	// (0x0004cd9a) field_vitu_entry_pane_t

0xd318,	// (0x0004a89a) bg_button_pane_cp05_ParamLimits

0xd318,	// (0x0004a89a) bg_button_pane_cp05

0x6982,	// (0x00043f04) cell_vitu_itu_pane_g1

0x699a,	// (0x00043f1c) cell_vitu_itu_pane_t1_ParamLimits

0x699a,	// (0x00043f1c) cell_vitu_itu_pane_t1

0x69ac,	// (0x00043f2e) cell_vitu_itu_pane_t2_ParamLimits

0x69ac,	// (0x00043f2e) cell_vitu_itu_pane_t2

0x0002,

0xf81d,	// (0x0004cd9f) cell_vitu_itu_pane_t_ParamLimits

0xf81d,	// (0x0004cd9f) cell_vitu_itu_pane_t

0xd326,	// (0x0004a8a8) bg_button_pane_cp07

0x69e1,	// (0x00043f63) cell_vitu_function_pane_g1

0x2582,	// (0x0003fb04) main_calc_pane_g1

0x207c,	// (0x0003f5fe) aid_visual_content_pane

0xa12c,	// (0x000476ae) main_vradio_pane

0x69ea,	// (0x00043f6c) main_vradio_pane_g1_ParamLimits

0x69ea,	// (0x00043f6c) main_vradio_pane_g1

0xd330,	// (0x0004a8b2) main_vradio_pane_g2_ParamLimits

0xd330,	// (0x0004a8b2) main_vradio_pane_g2

0x0001,

0xf824,	// (0x0004cda6) main_vradio_pane_g_ParamLimits

0xf824,	// (0x0004cda6) main_vradio_pane_g

0x69fa,	// (0x00043f7c) main_vradio_pane_t1_ParamLimits

0x69fa,	// (0x00043f7c) main_vradio_pane_t1

0x6a0c,	// (0x00043f8e) main_vradio_pane_t2_ParamLimits

0x6a0c,	// (0x00043f8e) main_vradio_pane_t2

0xd33d,	// (0x0004a8bf) main_vradio_pane_t3_ParamLimits

0xd33d,	// (0x0004a8bf) main_vradio_pane_t3

0x0002,

0xf829,	// (0x0004cdab) main_vradio_pane_t_ParamLimits

0xf829,	// (0x0004cdab) main_vradio_pane_t

0x6a1e,	// (0x00043fa0) vradio_rocker_control_pane_ParamLimits

0x6a1e,	// (0x00043fa0) vradio_rocker_control_pane

0x6a2a,	// (0x00043fac) vradio_station_info_pane_ParamLimits

0x6a2a,	// (0x00043fac) vradio_station_info_pane

0xd351,	// (0x0004a8d3) vradio_frequency_info_pane_ParamLimits

0xd351,	// (0x0004a8d3) vradio_frequency_info_pane

0xcd13,	// (0x0004a295) vradio_station_info_pane_g1

0xd360,	// (0x0004a8e2) vradio_station_info_pane_t1_ParamLimits

0xd360,	// (0x0004a8e2) vradio_station_info_pane_t1

0xd382,	// (0x0004a904) vradio_station_info_pane_t2_ParamLimits

0xd382,	// (0x0004a904) vradio_station_info_pane_t2

0x0001,

0xf830,	// (0x0004cdb2) vradio_station_info_pane_t_ParamLimits

0xf830,	// (0x0004cdb2) vradio_station_info_pane_t

0xd394,	// (0x0004a916) vradio_tuning_pane

0xd39c,	// (0x0004a91e) vradio_rocker_control_pane_g1

0xd3a4,	// (0x0004a926) vradio_rocker_control_pane_g2

0xd3ac,	// (0x0004a92e) vradio_rocker_control_pane_g3

0xd3b4,	// (0x0004a936) vradio_rocker_control_pane_g4

0xd3bc,	// (0x0004a93e) vradio_rocker_control_pane_g5

0x0004,

0xf835,	// (0x0004cdb7) vradio_rocker_control_pane_g

0x6a39,	// (0x00043fbb) vradio_frequency_info_pane_g1

0xd3c4,	// (0x0004a946) vradio_frequency_info_pane_t1_ParamLimits

0xd3c4,	// (0x0004a946) vradio_frequency_info_pane_t1

0x6a43,	// (0x00043fc5) vradio_tuning_pane_g1

0x6a4c,	// (0x00043fce) vradio_tuning_pane_t1

0x20c5,	// (0x0003f647) area_side_right_pane_ParamLimits

0x20c5,	// (0x0003f647) area_side_right_pane

0xc8c6,	// (0x00049e48) status_small_pane_g1

0xc8ce,	// (0x00049e50) status_small_pane_g2

0xc8d7,	// (0x00049e59) status_small_pane_g3

0xc8e0,	// (0x00049e62) status_small_pane_g4

0x0003,

0xf5f0,	// (0x0004cb72) status_small_pane_g

0xc8e9,	// (0x00049e6b) status_small_pane_t1

0xa12c,	// (0x000476ae) main_video3_pane

0xd3d8,	// (0x0004a95a) cams_zoom_vslider_pane

0xd3e0,	// (0x0004a962) image3_wide_pane_ParamLimits

0xd3e0,	// (0x0004a962) image3_wide_pane

0xd3fa,	// (0x0004a97c) image3_wide_small_pane

0xd406,	// (0x0004a988) main_video3_pane_g1_ParamLimits

0xd406,	// (0x0004a988) main_video3_pane_g1

0xd422,	// (0x0004a9a4) main_video3_pane_g2_ParamLimits

0xd422,	// (0x0004a9a4) main_video3_pane_g2

0x0001,

0xf840,	// (0x0004cdc2) main_video3_pane_g_ParamLimits

0xf840,	// (0x0004cdc2) main_video3_pane_g

0xd43e,	// (0x0004a9c0) main_video3_pane_t1_ParamLimits

0xd43e,	// (0x0004a9c0) main_video3_pane_t1

0xd469,	// (0x0004a9eb) main_video3_pane_t2_ParamLimits

0xd469,	// (0x0004a9eb) main_video3_pane_t2

0xd494,	// (0x0004aa16) main_video3_pane_t3_ParamLimits

0xd494,	// (0x0004aa16) main_video3_pane_t3

0x0002,

0xf845,	// (0x0004cdc7) main_video3_pane_t_ParamLimits

0xf845,	// (0x0004cdc7) main_video3_pane_t

0xd4c1,	// (0x0004aa43) cams_zoom_vslider_pane_g1

0xd4ca,	// (0x0004aa4c) cams_zoom_vslider_pane_g2

0x0001,

0xf84c,	// (0x0004cdce) cams_zoom_vslider_pane_g

0xd4d2,	// (0x0004aa54) small_slider_vertical_pane

0xcd13,	// (0x0004a295) small_slider_vertical_pane_g1

0xcd13,	// (0x0004a295) small_slider_vertical_pane_g2

0xd4da,	// (0x0004aa5c) small_slider_vertical_pane_g3

0x0002,

0xf851,	// (0x0004cdd3) small_slider_vertical_pane_g

0xa12c,	// (0x000476ae) main_hwr_training_pane

0xd4e3,	// (0x0004aa65) hwr_training_instruct_pane_ParamLimits

0xd4e3,	// (0x0004aa65) hwr_training_instruct_pane

0x6a5b,	// (0x00043fdd) hwr_training_navi_pane_ParamLimits

0x6a5b,	// (0x00043fdd) hwr_training_navi_pane

0x6a75,	// (0x00043ff7) hwr_training_write_pane_ParamLimits

0x6a75,	// (0x00043ff7) hwr_training_write_pane

0xa12c,	// (0x000476ae) bg_frame_shadow_pane

0xd51a,	// (0x0004aa9c) hwr_training_write_pane_g1

0xd522,	// (0x0004aaa4) hwr_training_write_pane_g2

0xd52a,	// (0x0004aaac) hwr_training_write_pane_g3

0xd532,	// (0x0004aab4) hwr_training_write_pane_g4

0xd53a,	// (0x0004aabc) hwr_training_write_pane_g5

0xd542,	// (0x0004aac4) hwr_training_write_pane_g6

0xd54a,	// (0x0004aacc) hwr_training_write_pane_g7

0x0006,

0xf858,	// (0x0004cdda) hwr_training_write_pane_g

0x6aad,	// (0x0004402f) hwr_training_navi_pane_g1_ParamLimits

0x6aad,	// (0x0004402f) hwr_training_navi_pane_g1

0x6abf,	// (0x00044041) hwr_training_navi_pane_g2_ParamLimits

0x6abf,	// (0x00044041) hwr_training_navi_pane_g2

0x6ad1,	// (0x00044053) hwr_training_navi_pane_g3_ParamLimits

0x6ad1,	// (0x00044053) hwr_training_navi_pane_g3

0x6ae1,	// (0x00044063) hwr_training_navi_pane_g4_ParamLimits

0x6ae1,	// (0x00044063) hwr_training_navi_pane_g4

0x0004,

0xf867,	// (0x0004cde9) hwr_training_navi_pane_g_ParamLimits

0xf867,	// (0x0004cde9) hwr_training_navi_pane_g

0x6afb,	// (0x0004407d) hwr_training_navi_pane_t1

0x6b09,	// (0x0004408b) list_single_hwr_training_instruct_pane_ParamLimits

0x6b09,	// (0x0004408b) list_single_hwr_training_instruct_pane

0xd552,	// (0x0004aad4) list_single_hwr_training_instruct_pane_t1

0xcc53,	// (0x0004a1d5) bg_frame_shadow_pane_g1

0xd561,	// (0x0004aae3) bg_frame_shadow_pane_g2

0xd569,	// (0x0004aaeb) bg_frame_shadow_pane_g3

0xd571,	// (0x0004aaf3) bg_frame_shadow_pane_g4

0xd579,	// (0x0004aafb) bg_frame_shadow_pane_g5

0xd581,	// (0x0004ab03) bg_frame_shadow_pane_g6

0xd589,	// (0x0004ab0b) bg_frame_shadow_pane_g7

0xa944,	// (0x00047ec6) bg_frame_shadow_pane_g8

0x0007,

0xf872,	// (0x0004cdf4) bg_frame_shadow_pane_g

0xa12c,	// (0x000476ae) main_video_tele_dialer_pane

0x6b32,	// (0x000440b4) aid_size_cell_video_keypad_ParamLimits

0x6b32,	// (0x000440b4) aid_size_cell_video_keypad

0x6b42,	// (0x000440c4) grid_video_dialer_keypad_pane_ParamLimits

0x6b42,	// (0x000440c4) grid_video_dialer_keypad_pane

0x6b76,	// (0x000440f8) video_down_pane_cp_ParamLimits

0x6b76,	// (0x000440f8) video_down_pane_cp

0x6ba0,	// (0x00044122) cell_video_dialer_keypad_pane_ParamLimits

0x6ba0,	// (0x00044122) cell_video_dialer_keypad_pane

0xd591,	// (0x0004ab13) bg_button_pane_cp08_ParamLimits

0xd591,	// (0x0004ab13) bg_button_pane_cp08

0x6bb5,	// (0x00044137) cell_video_dialer_keypad_pane_g1_ParamLimits

0x6bb5,	// (0x00044137) cell_video_dialer_keypad_pane_g1

0x6377,	// (0x000438f9) mup3_rocker2_pane_ParamLimits

0x6377,	// (0x000438f9) mup3_rocker2_pane

0xcd13,	// (0x0004a295) mup3_rocker2_pane_g1

0x5279,	// (0x000427fb) main_dialer2_pane

0xa12c,	// (0x000476ae) main_mp4_pane

0x6c0d,	// (0x0004418f) main_mp4_pane_g1_ParamLimits

0x6c0d,	// (0x0004418f) main_mp4_pane_g1

0x6c1b,	// (0x0004419d) main_mp4_pane_g2_ParamLimits

0x6c1b,	// (0x0004419d) main_mp4_pane_g2

0x6c29,	// (0x000441ab) main_mp4_pane_g3_ParamLimits

0x6c29,	// (0x000441ab) main_mp4_pane_g3

0x6c6e,	// (0x000441f0) main_mp4_pane_g4_ParamLimits

0x6c6e,	// (0x000441f0) main_mp4_pane_g4

0x6c9c,	// (0x0004421e) main_mp4_pane_g5_ParamLimits

0x6c9c,	// (0x0004421e) main_mp4_pane_g5

0x0007,

0xf892,	// (0x0004ce14) main_mp4_pane_g_ParamLimits

0xf892,	// (0x0004ce14) main_mp4_pane_g

0x6d10,	// (0x00044292) main_mp4_pane_t1_ParamLimits

0x6d10,	// (0x00044292) main_mp4_pane_t1

0x6d6c,	// (0x000442ee) main_mp4_pane_t2_ParamLimits

0x6d6c,	// (0x000442ee) main_mp4_pane_t2

0xd59d,	// (0x0004ab1f) main_mp4_pane_t3_ParamLimits

0xd59d,	// (0x0004ab1f) main_mp4_pane_t3

0x6dbe,	// (0x00044340) main_mp4_pane_t4_ParamLimits

0x6dbe,	// (0x00044340) main_mp4_pane_t4

0x0003,

0xf8a3,	// (0x0004ce25) main_mp4_pane_t_ParamLimits

0xf8a3,	// (0x0004ce25) main_mp4_pane_t

0x6e02,	// (0x00044384) mp4_progress_pane_ParamLimits

0x6e02,	// (0x00044384) mp4_progress_pane

0x6e4c,	// (0x000443ce) mp4_rocker_pane_ParamLimits

0x6e4c,	// (0x000443ce) mp4_rocker_pane

0xd5cb,	// (0x0004ab4d) mp4_progress_pane_t1

0xd5e4,	// (0x0004ab66) mp4_progress_pane_t2

0x0001,

0xf8ac,	// (0x0004ce2e) mp4_progress_pane_t

0xd5fd,	// (0x0004ab7f) mup_progress_pane_cp04

0xcd13,	// (0x0004a295) mp4_rocker_pane_g1

0x6e6c,	// (0x000443ee) aid_cell_size_keypad2_ParamLimits

0x6e6c,	// (0x000443ee) aid_cell_size_keypad2

0x6e7c,	// (0x000443fe) dialer2_ne_pane_ParamLimits

0x6e7c,	// (0x000443fe) dialer2_ne_pane

0x6e8a,	// (0x0004440c) grid_dialer2_keypad_pane_ParamLimits

0x6e8a,	// (0x0004440c) grid_dialer2_keypad_pane

0xdb4d,	// (0x0004b0cf) bg_popup_call_pane_cp07_ParamLimits

0xdb4d,	// (0x0004b0cf) bg_popup_call_pane_cp07

0x6e9a,	// (0x0004441c) dialer2_ne_pane_t1_ParamLimits

0x6e9a,	// (0x0004441c) dialer2_ne_pane_t1

0x6ebf,	// (0x00044441) cell_dialer2_keypad_pane_ParamLimits

0x6ebf,	// (0x00044441) cell_dialer2_keypad_pane

0xd622,	// (0x0004aba4) bg_button_pane_pane_cp04_ParamLimits

0xd622,	// (0x0004aba4) bg_button_pane_pane_cp04

0x6ed4,	// (0x00044456) cell_dialer2_keypad_pane_g1_ParamLimits

0x6ed4,	// (0x00044456) cell_dialer2_keypad_pane_g1

0x3023,	// (0x000405a5) aid_placing_vt_set_content_ParamLimits

0x3023,	// (0x000405a5) aid_placing_vt_set_content

0x304f,	// (0x000405d1) aid_placing_vt_set_title_ParamLimits

0x304f,	// (0x000405d1) aid_placing_vt_set_title

0xa12c,	// (0x000476ae) main_image3_pane

0x6f6e,	// (0x000444f0) area_side_right_pane_cp01_ParamLimits

0x6f6e,	// (0x000444f0) area_side_right_pane_cp01

0xa875,	// (0x00047df7) main_image3_pane_g1_ParamLimits

0xa875,	// (0x00047df7) main_image3_pane_g1

0x6f9b,	// (0x0004451d) main_image3_pane_g2_ParamLimits

0x6f9b,	// (0x0004451d) main_image3_pane_g2

0x6fb4,	// (0x00044536) main_image3_pane_g3_ParamLimits

0x6fb4,	// (0x00044536) main_image3_pane_g3

0x6fcd,	// (0x0004454f) main_image3_pane_g4_ParamLimits

0x6fcd,	// (0x0004454f) main_image3_pane_g4

0x0003,

0xf8bb,	// (0x0004ce3d) main_image3_pane_g_ParamLimits

0xf8bb,	// (0x0004ce3d) main_image3_pane_g

0x6fe6,	// (0x00044568) main_image3_pane_t1_ParamLimits

0x6fe6,	// (0x00044568) main_image3_pane_t1

0x700b,	// (0x0004458d) main_image3_pane_t2_ParamLimits

0x700b,	// (0x0004458d) main_image3_pane_t2

0x702a,	// (0x000445ac) main_image3_pane_t3_ParamLimits

0x702a,	// (0x000445ac) main_image3_pane_t3

0x0003,

0xf8c4,	// (0x0004ce46) main_image3_pane_t_ParamLimits

0xf8c4,	// (0x0004ce46) main_image3_pane_t

0xdb3f,	// (0x0004b0c1) grid_sctrl_middle_pane_cp01_ParamLimits

0xdb3f,	// (0x0004b0c1) grid_sctrl_middle_pane_cp01

0x708b,	// (0x0004460d) cell_sctrl_middle_pane_cp01_ParamLimits

0x708b,	// (0x0004460d) cell_sctrl_middle_pane_cp01

0x709c,	// (0x0004461e) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x709c,	// (0x0004461e) cell_sctrl_middle_pane_cp01_g1

0xa12c,	// (0x000476ae) main_call4_pane

0x70a9,	// (0x0004462b) aid_size_button_call4_ParamLimits

0x70a9,	// (0x0004462b) aid_size_button_call4

0x70df,	// (0x00044661) call4_windows_pane_ParamLimits

0x70df,	// (0x00044661) call4_windows_pane

0x70f4,	// (0x00044676) grid_call4_button_pane_ParamLimits

0x70f4,	// (0x00044676) grid_call4_button_pane

0x7122,	// (0x000446a4) call4_windows_conf_pane

0x7139,	// (0x000446bb) popup_call4_audio_first_window_ParamLimits

0x7139,	// (0x000446bb) popup_call4_audio_first_window

0x7189,	// (0x0004470b) popup_call4_audio_second_window_ParamLimits

0x7189,	// (0x0004470b) popup_call4_audio_second_window

0x71a2,	// (0x00044724) popup_call4_audio_wait_window_ParamLimits

0x71a2,	// (0x00044724) popup_call4_audio_wait_window

0x71b0,	// (0x00044732) cell_call4_button_pane_ParamLimits

0x71b0,	// (0x00044732) cell_call4_button_pane

0x71d3,	// (0x00044755) bg_button_pane_cp09_ParamLimits

0x71d3,	// (0x00044755) bg_button_pane_cp09

0x71df,	// (0x00044761) cell_call4_button_pane_g1_ParamLimits

0x71df,	// (0x00044761) cell_call4_button_pane_g1

0x71ec,	// (0x0004476e) cell_call4_button_pane_t1_ParamLimits

0x71ec,	// (0x0004476e) cell_call4_button_pane_t1

0xd636,	// (0x0004abb8) popup_call4_audio_conf_window_ParamLimits

0xd636,	// (0x0004abb8) popup_call4_audio_conf_window

0x63aa,	// (0x0004392c) mup3_progress_pane_t1_ParamLimits

0x63c9,	// (0x0004394b) mup3_progress_pane_t2_ParamLimits

0xcfd3,	// (0x0004a555) mup3_progress_pane_t3_ParamLimits

0xf794,	// (0x0004cd16) mup3_progress_pane_t_ParamLimits

0xcff0,	// (0x0004a572) mup_progress_pane_cp03_ParamLimits

0x68f9,	// (0x00043e7b) mup3_control_keys_pane_g4_copy1

0x6e30,	// (0x000443b2) mp4_rocker2_pane_ParamLimits

0x6e30,	// (0x000443b2) mp4_rocker2_pane

0xd64a,	// (0x0004abcc) mp4_rocker2_pane_g1

0xd652,	// (0x0004abd4) mp4_rocker2_pane_g2

0x7230,	// (0x000447b2) mp4_rocker2_pane_g3

0x7238,	// (0x000447ba) mp4_rocker2_pane_g4

0x7240,	// (0x000447c2) mp4_rocker2_pane_g5

0x0004,

0xf8cd,	// (0x0004ce4f) mp4_rocker2_pane_g

0xa12c,	// (0x000476ae) main_camera4_pane

0xa12c,	// (0x000476ae) main_video4_pane

0x6b52,	// (0x000440d4) main_video_tele_dialer_pane_t1_ParamLimits

0x6b52,	// (0x000440d4) main_video_tele_dialer_pane_t1

0x6b64,	// (0x000440e6) main_video_tele_dialer_pane_t2_ParamLimits

0x6b64,	// (0x000440e6) main_video_tele_dialer_pane_t2

0x0001,

0xf883,	// (0x0004ce05) main_video_tele_dialer_pane_t_ParamLimits

0xf883,	// (0x0004ce05) main_video_tele_dialer_pane_t

0x7260,	// (0x000447e2) cam4_autofocus_pane_ParamLimits

0x7260,	// (0x000447e2) cam4_autofocus_pane

0x727a,	// (0x000447fc) cam4_image_uncrop_pane_ParamLimits

0x727a,	// (0x000447fc) cam4_image_uncrop_pane

0x7291,	// (0x00044813) cam4_indicators_pane_ParamLimits

0x7291,	// (0x00044813) cam4_indicators_pane

0x72ad,	// (0x0004482f) main_camera4_pane_g1_ParamLimits

0x72ad,	// (0x0004482f) main_camera4_pane_g1

0x72b9,	// (0x0004483b) main_camera4_pane_g2_ParamLimits

0x72b9,	// (0x0004483b) main_camera4_pane_g2

0x72b9,	// (0x0004483b) main_camera4_pane_g3_ParamLimits

0x72b9,	// (0x0004483b) main_camera4_pane_g3

0x72c5,	// (0x00044847) main_camera4_pane_g4_ParamLimits

0x72c5,	// (0x00044847) main_camera4_pane_g4

0x72d1,	// (0x00044853) main_camera4_pane_g5_ParamLimits

0x72d1,	// (0x00044853) main_camera4_pane_g5

0x0005,

0xf8d8,	// (0x0004ce5a) main_camera4_pane_g_ParamLimits

0xf8d8,	// (0x0004ce5a) main_camera4_pane_g

0x72eb,	// (0x0004486d) main_camera4_pane_t1_ParamLimits

0x72eb,	// (0x0004486d) main_camera4_pane_t1

0xcf58,	// (0x0004a4da) bg_tb_trans_pane_cp06

0x733b,	// (0x000448bd) cam4_indicators_pane_g1

0x734c,	// (0x000448ce) cam4_indicators_pane_g2

0x0002,

0xf8f3,	// (0x0004ce75) cam4_indicators_pane_g

0x7364,	// (0x000448e6) cam4_indicators_pane_t1

0x738e,	// (0x00044910) main_video4_pane_g1_ParamLimits

0x738e,	// (0x00044910) main_video4_pane_g1

0x739a,	// (0x0004491c) main_video4_pane_g2_ParamLimits

0x739a,	// (0x0004491c) main_video4_pane_g2

0x73a6,	// (0x00044928) main_video4_pane_g3_ParamLimits

0x73a6,	// (0x00044928) main_video4_pane_g3

0x73b2,	// (0x00044934) main_video4_pane_g4_ParamLimits

0x73b2,	// (0x00044934) main_video4_pane_g4

0x0004,

0xf8fa,	// (0x0004ce7c) main_video4_pane_g_ParamLimits

0xf8fa,	// (0x0004ce7c) main_video4_pane_g

0x73d2,	// (0x00044954) vid4_indicators_pane_ParamLimits

0x73d2,	// (0x00044954) vid4_indicators_pane

0x73f1,	// (0x00044973) video4_image_uncrop_cif_pane_ParamLimits

0x73f1,	// (0x00044973) video4_image_uncrop_cif_pane

0x7400,	// (0x00044982) video4_image_uncrop_nhd_pane_ParamLimits

0x7400,	// (0x00044982) video4_image_uncrop_nhd_pane

0x727a,	// (0x000447fc) video4_image_uncrop_vga_pane_ParamLimits

0x727a,	// (0x000447fc) video4_image_uncrop_vga_pane

0xaf98,	// (0x0004851a) bg_tb_trans_pane_cp07

0x7415,	// (0x00044997) vid4_indicators_pane_g1

0x7429,	// (0x000449ab) vid4_indicators_pane_g2

0x743d,	// (0x000449bf) vid4_indicators_pane_g3

0x0004,

0xf905,	// (0x0004ce87) vid4_indicators_pane_g

0x746a,	// (0x000449ec) vid4_indicators_pane_t1

0x7481,	// (0x00044a03) cam4_autofocus_pane_g1

0x7489,	// (0x00044a0b) cam4_autofocus_pane_g2

0x7491,	// (0x00044a13) cam4_autofocus_pane_g3

0x0002,

0xf910,	// (0x0004ce92) cam4_autofocus_pane_g

0x7499,	// (0x00044a1b) cam4_autofocus_pane_g3_copy1

0x6b84,	// (0x00044106) video_down_pane_cp_t1

0x6b92,	// (0x00044114) video_down_pane_cp_t2

0x0001,

0xf888,	// (0x0004ce0a) video_down_pane_cp_t

0xdb3f,	// (0x0004b0c1) popup_vitu2_window_ParamLimits

0xdb3f,	// (0x0004b0c1) popup_vitu2_window

0x74a1,	// (0x00044a23) aid_size_cell2_itu2_ParamLimits

0x74a1,	// (0x00044a23) aid_size_cell2_itu2

0x74c3,	// (0x00044a45) aid_size_cell_itu2_ParamLimits

0x74c3,	// (0x00044a45) aid_size_cell_itu2

0xdb4d,	// (0x0004b0cf) bg_popup_window_pane_cp09_ParamLimits

0xdb4d,	// (0x0004b0cf) bg_popup_window_pane_cp09

0x7507,	// (0x00044a89) field_vitu2_entry_pane_ParamLimits

0x7507,	// (0x00044a89) field_vitu2_entry_pane

0x7527,	// (0x00044aa9) grid_vitu2_function_pane_ParamLimits

0x7527,	// (0x00044aa9) grid_vitu2_function_pane

0x756b,	// (0x00044aed) grid_vitu2_itu_pane_ParamLimits

0x756b,	// (0x00044aed) grid_vitu2_itu_pane

0x75e5,	// (0x00044b67) cell_vitu2_itu_pane_ParamLimits

0x75e5,	// (0x00044b67) cell_vitu2_itu_pane

0x75fe,	// (0x00044b80) cell_vitu2_function_pane_ParamLimits

0x75fe,	// (0x00044b80) cell_vitu2_function_pane

0xd65a,	// (0x0004abdc) bg_popup_call_pane_cp08_ParamLimits

0xd65a,	// (0x0004abdc) bg_popup_call_pane_cp08

0xd671,	// (0x0004abf3) field_vitu2_entry_pane_g1

0xd67d,	// (0x0004abff) field_vitu2_entry_pane_g2

0x0002,

0xf917,	// (0x0004ce99) field_vitu2_entry_pane_g

0x0fce,	// (0x0003e550) field_vitu2_entry_pane_t1_ParamLimits

0x0fce,	// (0x0003e550) field_vitu2_entry_pane_t1

0x1000,	// (0x0003e582) field_vitu2_entry_pane_t2_ParamLimits

0x1000,	// (0x0003e582) field_vitu2_entry_pane_t2

0x0001,

0xf91e,	// (0x0004cea0) field_vitu2_entry_pane_t_ParamLimits

0xf91e,	// (0x0004cea0) field_vitu2_entry_pane_t

0x763f,	// (0x00044bc1) bg_button_pane_cp010_ParamLimits

0x763f,	// (0x00044bc1) bg_button_pane_cp010

0x764d,	// (0x00044bcf) cell_vitu2_itu_pane_g1

0x766d,	// (0x00044bef) cell_vitu2_itu_pane_t1_ParamLimits

0x766d,	// (0x00044bef) cell_vitu2_itu_pane_t1

0x101d,	// (0x0003e59f) cell_vitu2_itu_pane_t2_ParamLimits

0x101d,	// (0x0003e59f) cell_vitu2_itu_pane_t2

0x0002,

0xf928,	// (0x0004ceaa) cell_vitu2_itu_pane_t_ParamLimits

0xf928,	// (0x0004ceaa) cell_vitu2_itu_pane_t

0xaf98,	// (0x0004851a) bg_button_pane_cp011

0x76b9,	// (0x00044c3b) cell_vitu2_function_pane_g1

0xa12c,	// (0x000476ae) main_myfav_hc_pane

0x706c,	// (0x000445ee) popup_image3_note_pane_ParamLimits

0x706c,	// (0x000445ee) popup_image3_note_pane

0x707a,	// (0x000445fc) popup_image3_tool_bar_pane_ParamLimits

0x707a,	// (0x000445fc) popup_image3_tool_bar_pane

0x1093,	// (0x0003e615) cell_vitu2_itu_pane_t3_ParamLimits

0x1093,	// (0x0003e615) cell_vitu2_itu_pane_t3

0xa12c,	// (0x000476ae) bg_popup_trans_pane

0xd69f,	// (0x0004ac21) grid_image3_tool_bar_pane

0xd6a9,	// (0x0004ac2b) bg_popup_trans_pane_g1

0xaca9,	// (0x0004822b) bg_popup_trans_pane_g2

0xd6b1,	// (0x0004ac33) bg_popup_trans_pane_g3

0xd6b9,	// (0x0004ac3b) bg_popup_trans_pane_g4

0xd6c1,	// (0x0004ac43) bg_popup_trans_pane_g5

0xd6c9,	// (0x0004ac4b) bg_popup_trans_pane_g6

0xd6d1,	// (0x0004ac53) bg_popup_trans_pane_g7

0xd6d9,	// (0x0004ac5b) bg_popup_trans_pane_g8

0xac89,	// (0x0004820b) bg_popup_trans_pane_g9

0x0008,

0xf92f,	// (0x0004ceb1) bg_popup_trans_pane_g

0xd6e1,	// (0x0004ac63) cell_image3_tool_bar_pane_ParamLimits

0xd6e1,	// (0x0004ac63) cell_image3_tool_bar_pane

0xcd13,	// (0x0004a295) cell_image3_tool_bar_pane_g1

0xa12c,	// (0x000476ae) bg_popup_trans_pane_cp1

0xd6f5,	// (0x0004ac77) popup_image3_note_pane_t1

0xd703,	// (0x0004ac85) popup_image3_note_pane_t2

0xd711,	// (0x0004ac93) popup_image3_note_pane_t3

0x0002,

0xf942,	// (0x0004cec4) popup_image3_note_pane_t

0xd71f,	// (0x0004aca1) popup_image3_note_pane_t3_copy1

0x76cd,	// (0x00044c4f) bg_myfav_hc_instruction_pane_ParamLimits

0x76cd,	// (0x00044c4f) bg_myfav_hc_instruction_pane

0x76e5,	// (0x00044c67) cell_myfav_contact_pane_ParamLimits

0x76e5,	// (0x00044c67) cell_myfav_contact_pane

0x76ff,	// (0x00044c81) cell_myfav_contact_pane_cp1_ParamLimits

0x76ff,	// (0x00044c81) cell_myfav_contact_pane_cp1

0x7717,	// (0x00044c99) cell_myfav_contact_pane_cp2_ParamLimits

0x7717,	// (0x00044c99) cell_myfav_contact_pane_cp2

0x772f,	// (0x00044cb1) cell_myfav_contact_pane_cp3_ParamLimits

0x772f,	// (0x00044cb1) cell_myfav_contact_pane_cp3

0x7746,	// (0x00044cc8) cell_myfav_contact_pane_cp4_ParamLimits

0x7746,	// (0x00044cc8) cell_myfav_contact_pane_cp4

0x775c,	// (0x00044cde) cell_myfav_contact_pane_cp5_ParamLimits

0x775c,	// (0x00044cde) cell_myfav_contact_pane_cp5

0x7770,	// (0x00044cf2) cell_myfav_contact_pane_cp6_ParamLimits

0x7770,	// (0x00044cf2) cell_myfav_contact_pane_cp6

0x7784,	// (0x00044d06) cell_myfav_contact_pane_cp7_ParamLimits

0x7784,	// (0x00044d06) cell_myfav_contact_pane_cp7

0xd72d,	// (0x0004acaf) listscroll_gen_pane_cp05

0x779c,	// (0x00044d1e) main_myfav_hc_pane_g1_ParamLimits

0x779c,	// (0x00044d1e) main_myfav_hc_pane_g1

0x77b2,	// (0x00044d34) main_myfav_hc_pane_g2_ParamLimits

0x77b2,	// (0x00044d34) main_myfav_hc_pane_g2

0x0002,

0xf949,	// (0x0004cecb) main_myfav_hc_pane_g_ParamLimits

0xf949,	// (0x0004cecb) main_myfav_hc_pane_g

0x77e2,	// (0x00044d64) main_myfav_hc_pane_t1_ParamLimits

0x77e2,	// (0x00044d64) main_myfav_hc_pane_t1

0xd736,	// (0x0004acb8) main_myfav_hc_pane_t2_ParamLimits

0xd736,	// (0x0004acb8) main_myfav_hc_pane_t2

0xd748,	// (0x0004acca) main_myfav_hc_pane_t3_ParamLimits

0xd748,	// (0x0004acca) main_myfav_hc_pane_t3

0x77f9,	// (0x00044d7b) main_myfav_hc_pane_t4_ParamLimits

0x77f9,	// (0x00044d7b) main_myfav_hc_pane_t4

0x0004,

0xf950,	// (0x0004ced2) main_myfav_hc_pane_t_ParamLimits

0xf950,	// (0x0004ced2) main_myfav_hc_pane_t

0xcd13,	// (0x0004a295) bg_myfav_hc_instruction_pane_g1

0xd75a,	// (0x0004acdc) cell_myfav_contact_pane_g1_ParamLimits

0xd75a,	// (0x0004acdc) cell_myfav_contact_pane_g1

0xd75a,	// (0x0004acdc) cell_myfav_contact_pane_g2_ParamLimits

0xd75a,	// (0x0004acdc) cell_myfav_contact_pane_g2

0xd766,	// (0x0004ace8) cell_myfav_contact_pane_g3_ParamLimits

0xd766,	// (0x0004ace8) cell_myfav_contact_pane_g3

0xcfbd,	// (0x0004a53f) cell_myfav_contact_pane_g4_ParamLimits

0xcfbd,	// (0x0004a53f) cell_myfav_contact_pane_g4

0xd773,	// (0x0004acf5) cell_myfav_contact_pane_g5_ParamLimits

0xd773,	// (0x0004acf5) cell_myfav_contact_pane_g5

0x0004,

0xf95b,	// (0x0004cedd) cell_myfav_contact_pane_g_ParamLimits

0xf95b,	// (0x0004cedd) cell_myfav_contact_pane_g

0x77ca,	// (0x00044d4c) main_myfav_hc_pane_g3_ParamLimits

0x77ca,	// (0x00044d4c) main_myfav_hc_pane_g3

0x21fa,	// (0x0003f77c) popup_adpt_find_window

0x7823,	// (0x00044da5) afind_page_pane_ParamLimits

0x7823,	// (0x00044da5) afind_page_pane

0x7830,	// (0x00044db2) aid_size_cell_afind_ParamLimits

0x7830,	// (0x00044db2) aid_size_cell_afind

0x784a,	// (0x00044dcc) bg_popup_sub_pane_cp09_ParamLimits

0x784a,	// (0x00044dcc) bg_popup_sub_pane_cp09

0x7857,	// (0x00044dd9) find_pane_cp01_ParamLimits

0x7857,	// (0x00044dd9) find_pane_cp01

0xd77f,	// (0x0004ad01) grid_afind_control_pane_ParamLimits

0xd77f,	// (0x0004ad01) grid_afind_control_pane

0x7864,	// (0x00044de6) grid_afind_pane_ParamLimits

0x7864,	// (0x00044de6) grid_afind_pane

0x787e,	// (0x00044e00) cell_afind_pane_ParamLimits

0x787e,	// (0x00044e00) cell_afind_pane

0xcd13,	// (0x0004a295) afind_page_pane_g1

0x78c6,	// (0x00044e48) afind_page_pane_g2

0x78cf,	// (0x00044e51) afind_page_pane_g3

0x0002,

0xf966,	// (0x0004cee8) afind_page_pane_g

0x78d8,	// (0x00044e5a) afind_page_pane_t1

0xd793,	// (0x0004ad15) cell_afind_grid_control_pane_ParamLimits

0xd793,	// (0x0004ad15) cell_afind_grid_control_pane

0xd622,	// (0x0004aba4) bg_button_pane_cp69_ParamLimits

0xd622,	// (0x0004aba4) bg_button_pane_cp69

0x78f8,	// (0x00044e7a) cell_afind_pane_g1_ParamLimits

0x78f8,	// (0x00044e7a) cell_afind_pane_g1

0x7905,	// (0x00044e87) cell_afind_pane_t1_ParamLimits

0x7905,	// (0x00044e87) cell_afind_pane_t1

0xaaa2,	// (0x00048024) bg_button_pane_cp72

0xd7a2,	// (0x0004ad24) cell_afind_grid_control_pane_g1

0x4df1,	// (0x00042373) aid_image_placing_area_ParamLimits

0x4df1,	// (0x00042373) aid_image_placing_area

0xd2e3,	// (0x0004a865) field_vitu_entry_pane_g1_ParamLimits

0xd2e3,	// (0x0004a865) field_vitu_entry_pane_g1

0xd2ef,	// (0x0004a871) field_vitu_entry_pane_g2_ParamLimits

0xd2ef,	// (0x0004a871) field_vitu_entry_pane_g2

0x0001,

0xf813,	// (0x0004cd95) field_vitu_entry_pane_g_ParamLimits

0xf813,	// (0x0004cd95) field_vitu_entry_pane_g

0x6982,	// (0x00043f04) cell_vitu_itu_pane_g1_ParamLimits

0x69c4,	// (0x00043f46) cell_vitu_itu_pane_t3_ParamLimits

0x69c4,	// (0x00043f46) cell_vitu_itu_pane_t3

0xd5cb,	// (0x0004ab4d) mp4_progress_pane_t1_ParamLimits

0xd5e4,	// (0x0004ab66) mp4_progress_pane_t2_ParamLimits

0xf8ac,	// (0x0004ce2e) mp4_progress_pane_t_ParamLimits

0xd5fd,	// (0x0004ab7f) mup_progress_pane_cp04_ParamLimits

0x780d,	// (0x00044d8f) main_myfav_hc_pane_t5_ParamLimits

0x780d,	// (0x00044d8f) main_myfav_hc_pane_t5

0x2088,	// (0x0003f60a) aid_zoom_text_primary

0x21fa,	// (0x0003f77c) popup_adpt_find_window_ParamLimits

0xaf98,	// (0x0004851a) main_cam_set_pane

0x729f,	// (0x00044821) cam4_zoom_pane_ParamLimits

0x729f,	// (0x00044821) cam4_zoom_pane

0x7917,	// (0x00044e99) main_cam_set_pane_g1_ParamLimits

0x7917,	// (0x00044e99) main_cam_set_pane_g1

0x7925,	// (0x00044ea7) main_cam_set_pane_g2_ParamLimits

0x7925,	// (0x00044ea7) main_cam_set_pane_g2

0x0001,

0xf96d,	// (0x0004ceef) main_cam_set_pane_g_ParamLimits

0xf96d,	// (0x0004ceef) main_cam_set_pane_g

0x7931,	// (0x00044eb3) main_cam_set_pane_t1_ParamLimits

0x7931,	// (0x00044eb3) main_cam_set_pane_t1

0x794d,	// (0x00044ecf) main_cset_listscroll_pane_ParamLimits

0x794d,	// (0x00044ecf) main_cset_listscroll_pane

0x7978,	// (0x00044efa) main_cset_slider_pane_ParamLimits

0x7978,	// (0x00044efa) main_cset_slider_pane

0xd7b3,	// (0x0004ad35) main_cset_list_pane_ParamLimits

0xd7b3,	// (0x0004ad35) main_cset_list_pane

0xd7c3,	// (0x0004ad45) scroll_pane_cp028

0x7997,	// (0x00044f19) aid_area_touch_slider

0x79b3,	// (0x00044f35) cset_slider_pane

0x79dd,	// (0x00044f5f) main_cset_slider_pane_g1

0x79f2,	// (0x00044f74) main_cset_slider_pane_g2

0x0011,

0xf972,	// (0x0004cef4) main_cset_slider_pane_g

0xd7fc,	// (0x0004ad7e) main_cset_slider_pane_t1

0x7ab8,	// (0x0004503a) main_cset_slider_pane_t2

0x7ad2,	// (0x00045054) main_cset_slider_pane_t3

0x7aec,	// (0x0004506e) main_cset_slider_pane_t4

0x7b0a,	// (0x0004508c) main_cset_slider_pane_t5

0x7b28,	// (0x000450aa) main_cset_slider_pane_t6

0x7b3f,	// (0x000450c1) main_cset_slider_pane_t7

0x000e,

0xf997,	// (0x0004cf19) main_cset_slider_pane_t

0x7c4d,	// (0x000451cf) cset_list_set_pane_ParamLimits

0x7c4d,	// (0x000451cf) cset_list_set_pane

0x7c66,	// (0x000451e8) aid_position_infowindow_above

0x7c6e,	// (0x000451f0) aid_position_infowindow_below

0x10e5,	// (0x0003e667) cset_list_set_pane_g1_ParamLimits

0x10e5,	// (0x0003e667) cset_list_set_pane_g1

0x10f1,	// (0x0003e673) cset_list_set_pane_g3_ParamLimits

0x10f1,	// (0x0003e673) cset_list_set_pane_g3

0x0001,

0xf9b6,	// (0x0004cf38) cset_list_set_pane_g_ParamLimits

0xf9b6,	// (0x0004cf38) cset_list_set_pane_g

0x1100,	// (0x0003e682) cset_list_set_pane_t1_ParamLimits

0x1100,	// (0x0003e682) cset_list_set_pane_t1

0xaf98,	// (0x0004851a) list_highlight_pane_cp021_ParamLimits

0xaf98,	// (0x0004851a) list_highlight_pane_cp021

0xb5fc,	// (0x00048b7e) cset_slider_pane_g1

0xb60e,	// (0x00048b90) cset_slider_pane_g2

0xb605,	// (0x00048b87) cset_slider_pane_g3

0x0002,

0xf9bb,	// (0x0004cf3d) cset_slider_pane_g

0x7c76,	// (0x000451f8) aid_area_touch_cam4_zoom

0x7c7e,	// (0x00045200) cam4_zoom_cont_pane

0x7c86,	// (0x00045208) cam4_zoom_pane_g1

0x7c8e,	// (0x00045210) cam4_zoom_pane_g2

0x7c96,	// (0x00045218) cam4_zoom_pane_g3

0x0002,

0xf9c2,	// (0x0004cf44) cam4_zoom_pane_g

0xd4da,	// (0x0004aa5c) cam4_zoom_cont_pane_g1

0xdb5b,	// (0x0004b0dd) cam4_zoom_cont_pane_g2

0xdb64,	// (0x0004b0e6) cam4_zoom_cont_pane_g3

0x0002,

0xf9c9,	// (0x0004cf4b) cam4_zoom_cont_pane_g

0x70c3,	// (0x00044645) call4_image_pane_ParamLimits

0x70c3,	// (0x00044645) call4_image_pane

0x7122,	// (0x000446a4) call4_windows_conf_pane_ParamLimits

0x7167,	// (0x000446e9) popup_call4_audio_in_window_ParamLimits

0x7167,	// (0x000446e9) popup_call4_audio_in_window

0xa12c,	// (0x000476ae) bg_popup_call2_act_pane_cp02

0xd62e,	// (0x0004abb0) call4_list_conf_pane

0xcd13,	// (0x0004a295) call4_image_pane_g1

0xcd13,	// (0x0004a295) call4_image_pane_g2

0x0001,

0xf6d4,	// (0x0004cc56) call4_image_pane_g

0xd89c,	// (0x0004ae1e) list_single_graphic_popup_conf4_pane_ParamLimits

0xd89c,	// (0x0004ae1e) list_single_graphic_popup_conf4_pane

0xa12c,	// (0x000476ae) list_highlight_pane_cp022

0xd8af,	// (0x0004ae31) list_single_graphic_popup_conf4_pane_g1

0xb206,	// (0x00048788) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf9d0,	// (0x0004cf52) list_single_graphic_popup_conf4_pane_g

0xd8b7,	// (0x0004ae39) list_single_graphic_popup_conf4_pane_t1

0x31b3,	// (0x00040735) popup_vtel_slider_window_ParamLimits

0x31b3,	// (0x00040735) popup_vtel_slider_window

0xd610,	// (0x0004ab92) dialer2_ne_pane_t2_ParamLimits

0xd610,	// (0x0004ab92) dialer2_ne_pane_t2

0x0001,

0xf8b1,	// (0x0004ce33) dialer2_ne_pane_t_ParamLimits

0xf8b1,	// (0x0004ce33) dialer2_ne_pane_t

0xaf98,	// (0x0004851a) bg_popup_sub_pane_cp010_ParamLimits

0xaf98,	// (0x0004851a) bg_popup_sub_pane_cp010

0x7c9e,	// (0x00045220) popup_vtel_slider_window_g1_ParamLimits

0x7c9e,	// (0x00045220) popup_vtel_slider_window_g1

0x7caa,	// (0x0004522c) popup_vtel_slider_window_g2_ParamLimits

0x7caa,	// (0x0004522c) popup_vtel_slider_window_g2

0x0003,

0xf9d5,	// (0x0004cf57) popup_vtel_slider_window_g_ParamLimits

0xf9d5,	// (0x0004cf57) popup_vtel_slider_window_g

0x7cf2,	// (0x00045274) vtel_slider_pane_ParamLimits

0x7cf2,	// (0x00045274) vtel_slider_pane

0x7d01,	// (0x00045283) vtel_slider_pane_g1_ParamLimits

0x7d01,	// (0x00045283) vtel_slider_pane_g1

0x7d0e,	// (0x00045290) vtel_slider_pane_g2_ParamLimits

0x7d0e,	// (0x00045290) vtel_slider_pane_g2

0x7d1b,	// (0x0004529d) vtel_slider_pane_g3_ParamLimits

0x7d1b,	// (0x0004529d) vtel_slider_pane_g3

0x7d01,	// (0x00045283) vtel_slider_pane_g4_ParamLimits

0x7d01,	// (0x00045283) vtel_slider_pane_g4

0x7d28,	// (0x000452aa) vtel_slider_pane_g5_ParamLimits

0x7d28,	// (0x000452aa) vtel_slider_pane_g5

0x0004,

0xf9de,	// (0x0004cf60) vtel_slider_pane_g_ParamLimits

0xf9de,	// (0x0004cf60) vtel_slider_pane_g

0xaf98,	// (0x0004851a) main_gallery2_pane

0x74e9,	// (0x00044a6b) aid_size_row_itut2_dropdow_list_ParamLimits

0x74e9,	// (0x00044a6b) aid_size_row_itut2_dropdow_list

0x7549,	// (0x00044acb) grid_vitu2_function_top_pane_ParamLimits

0x7549,	// (0x00044acb) grid_vitu2_function_top_pane

0x75a3,	// (0x00044b25) popup_vitu2_dropdown_list_window_ParamLimits

0x75a3,	// (0x00044b25) popup_vitu2_dropdown_list_window

0x75c3,	// (0x00044b45) popup_vitu2_match_list_window

0x7d35,	// (0x000452b7) cell_vitu2_function_top_pane_ParamLimits

0x7d35,	// (0x000452b7) cell_vitu2_function_top_pane

0x7d4f,	// (0x000452d1) cell_vitu2_function_top_pane_cp01_ParamLimits

0x7d4f,	// (0x000452d1) cell_vitu2_function_top_pane_cp01

0x7d6b,	// (0x000452ed) cell_vitu2_function_top_wide_pane_ParamLimits

0x7d6b,	// (0x000452ed) cell_vitu2_function_top_wide_pane

0xaf98,	// (0x0004851a) bg_button_pane_cp012

0x7d87,	// (0x00045309) cell_vitu2_function_top_pane_g1

0x7d9b,	// (0x0004531d) bg_button_pane_cp013_ParamLimits

0x7d9b,	// (0x0004531d) bg_button_pane_cp013

0x7db7,	// (0x00045339) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x7db7,	// (0x00045339) cell_vitu2_function_top_wide_pane_g1

0xdb3f,	// (0x0004b0c1) bg_popup_sub_pane_cp20

0x7dcf,	// (0x00045351) list_vitu2_match_list_pane

0xd6a9,	// (0x0004ac2b) bg_popup_sub_pane_cp20_g1

0xd6b1,	// (0x0004ac33) bg_popup_sub_pane_cp20_g2

0xaca9,	// (0x0004822b) bg_popup_sub_pane_cp20_g3

0xd6b9,	// (0x0004ac3b) bg_popup_sub_pane_cp20_g4

0xac89,	// (0x0004820b) bg_popup_sub_pane_cp20_g5

0xd8cd,	// (0x0004ae4f) bg_popup_sub_pane_cp20_g6

0xd6c9,	// (0x0004ac4b) bg_popup_sub_pane_cp20_g7

0xd6d1,	// (0x0004ac53) bg_popup_sub_pane_cp20_g8

0xd6d9,	// (0x0004ac5b) bg_popup_sub_pane_cp20_g9

0x0008,

0xf9e9,	// (0x0004cf6b) bg_popup_sub_pane_cp20_g

0x7de7,	// (0x00045369) list_vitu2_match_list_item_pane_ParamLimits

0x7de7,	// (0x00045369) list_vitu2_match_list_item_pane

0x7df9,	// (0x0004537b) list_vitu2_match_list_item_pane_t1

0xa12c,	// (0x000476ae) bg_popup_sub_pane_cp21

0xb12e,	// (0x000486b0) grid_vitu2_dropdown_list_pane

0x7e07,	// (0x00045389) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x7e07,	// (0x00045389) cell_vitu2_dropdown_list_char_pane

0x7e28,	// (0x000453aa) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x7e28,	// (0x000453aa) cell_vitu2_dropdown_list_ctrl_pane

0xd8d5,	// (0x0004ae57) cell_vitu2_dropdown_list_char_pane_g1

0xd8de,	// (0x0004ae60) cell_vitu2_dropdown_list_char_pane_g2

0xd8e7,	// (0x0004ae69) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xfa06,	// (0x0004cf88) cell_vitu2_dropdown_list_char_pane_g

0x7e54,	// (0x000453d6) cell_vitu2_dropdown_list_char_pane_t1

0x7e62,	// (0x000453e4) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x7e62,	// (0x000453e4) cell_vitu2_dropdown_list_ctrl_pane_g1

0x7e72,	// (0x000453f4) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x7e72,	// (0x000453f4) cell_vitu2_dropdown_list_ctrl_pane_g2

0x7e83,	// (0x00045405) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x7e83,	// (0x00045405) cell_vitu2_dropdown_list_ctrl_pane_g3

0x7e93,	// (0x00045415) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x7e93,	// (0x00045415) cell_vitu2_dropdown_list_ctrl_pane_g4

0xcf58,	// (0x0004a4da) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0xcf58,	// (0x0004a4da) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa0d,	// (0x0004cf8f) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa0d,	// (0x0004cf8f) cell_vitu2_dropdown_list_ctrl_pane_g

0x7eaf,	// (0x00045431) aid_size_cell_gallery2_ParamLimits

0x7eaf,	// (0x00045431) aid_size_cell_gallery2

0x7ec9,	// (0x0004544b) grid_gallery2_pane_ParamLimits

0x7ec9,	// (0x0004544b) grid_gallery2_pane

0x7ee0,	// (0x00045462) scroll_pane_cp029_ParamLimits

0x7ee0,	// (0x00045462) scroll_pane_cp029

0x7ef0,	// (0x00045472) cell_gallery2_pane_ParamLimits

0x7ef0,	// (0x00045472) cell_gallery2_pane

0xd8f0,	// (0x0004ae72) cell_gallery2_pane_g2

0x7f45,	// (0x000454c7) cell_gallery2_pane_g3

0xd8f8,	// (0x0004ae7a) cell_gallery2_pane_g4

0xd900,	// (0x0004ae82) cell_gallery2_pane_g5

0xaa50,	// (0x00047fd2) grid_highlight_pane_cp10

0x75c3,	// (0x00044b45) popup_vitu2_match_list_window_ParamLimits

0x75d5,	// (0x00044b57) popup_vitu2_query_window_ParamLimits

0x75d5,	// (0x00044b57) popup_vitu2_query_window

0xa12c,	// (0x000476ae) bg_vitu2_candi_button_pane

0xd8d5,	// (0x0004ae57) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xd8de,	// (0x0004ae60) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xd8e7,	// (0x0004ae69) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x116b,	// (0x0003e6ed) bg_button_pane_cp015

0x7f4d,	// (0x000454cf) bg_button_pane_cp016

0x7f60,	// (0x000454e2) bg_button_pane_cp017

0xc90b,	// (0x00049e8d) bg_popup_sub_pane_cp22

0xd908,	// (0x0004ae8a) popup_vitu2_query_window_g1

0x119e,	// (0x0003e720) popup_vitu2_query_window_g2

0x0002,

0xfa18,	// (0x0004cf9a) popup_vitu2_query_window_g

0x11bb,	// (0x0003e73d) popup_vitu2_query_window_t1_ParamLimits

0x11bb,	// (0x0003e73d) popup_vitu2_query_window_t1

0x11ee,	// (0x0003e770) popup_vitu2_query_window_t2_ParamLimits

0x11ee,	// (0x0003e770) popup_vitu2_query_window_t2

0x1200,	// (0x0003e782) popup_vitu2_query_window_t3_ParamLimits

0x1200,	// (0x0003e782) popup_vitu2_query_window_t3

0x7f84,	// (0x00045506) popup_vitu2_query_window_t4_ParamLimits

0x7f84,	// (0x00045506) popup_vitu2_query_window_t4

0x7fa5,	// (0x00045527) popup_vitu2_query_window_t5_ParamLimits

0x7fa5,	// (0x00045527) popup_vitu2_query_window_t5

0x0006,

0xfa1f,	// (0x0004cfa1) popup_vitu2_query_window_t_ParamLimits

0xfa1f,	// (0x0004cfa1) popup_vitu2_query_window_t

0xd7ab,	// (0x0004ad2d) main_cset_text_pane

0x7997,	// (0x00044f19) aid_area_touch_slider_ParamLimits

0x79b3,	// (0x00044f35) cset_slider_pane_ParamLimits

0x79dd,	// (0x00044f5f) main_cset_slider_pane_g1_ParamLimits

0x79f2,	// (0x00044f74) main_cset_slider_pane_g2_ParamLimits

0xd7cc,	// (0x0004ad4e) main_cset_slider_pane_g3_ParamLimits

0xd7cc,	// (0x0004ad4e) main_cset_slider_pane_g3

0x7a07,	// (0x00044f89) main_cset_slider_pane_g4_ParamLimits

0x7a07,	// (0x00044f89) main_cset_slider_pane_g4

0x7a16,	// (0x00044f98) main_cset_slider_pane_g5_ParamLimits

0x7a16,	// (0x00044f98) main_cset_slider_pane_g5

0x7a24,	// (0x00044fa6) main_cset_slider_pane_g6_ParamLimits

0x7a24,	// (0x00044fa6) main_cset_slider_pane_g6

0xf972,	// (0x0004cef4) main_cset_slider_pane_g_ParamLimits

0xd7fc,	// (0x0004ad7e) main_cset_slider_pane_t1_ParamLimits

0x7ab8,	// (0x0004503a) main_cset_slider_pane_t2_ParamLimits

0x7ad2,	// (0x00045054) main_cset_slider_pane_t3_ParamLimits

0x7aec,	// (0x0004506e) main_cset_slider_pane_t4_ParamLimits

0x7b0a,	// (0x0004508c) main_cset_slider_pane_t5_ParamLimits

0x7b28,	// (0x000450aa) main_cset_slider_pane_t6_ParamLimits

0x7b3f,	// (0x000450c1) main_cset_slider_pane_t7_ParamLimits

0x7b6d,	// (0x000450ef) main_cset_slider_pane_t8_ParamLimits

0x7b6d,	// (0x000450ef) main_cset_slider_pane_t8

0x7b95,	// (0x00045117) main_cset_slider_pane_t9_ParamLimits

0x7b95,	// (0x00045117) main_cset_slider_pane_t9

0x7bbd,	// (0x0004513f) main_cset_slider_pane_t10_ParamLimits

0x7bbd,	// (0x0004513f) main_cset_slider_pane_t10

0x7be5,	// (0x00045167) main_cset_slider_pane_t11_ParamLimits

0x7be5,	// (0x00045167) main_cset_slider_pane_t11

0x7c0f,	// (0x00045191) main_cset_slider_pane_t12_ParamLimits

0x7c0f,	// (0x00045191) main_cset_slider_pane_t12

0x7c2e,	// (0x000451b0) main_cset_slider_pane_t13_ParamLimits

0x7c2e,	// (0x000451b0) main_cset_slider_pane_t13

0xf997,	// (0x0004cf19) main_cset_slider_pane_t_ParamLimits

0xa12c,	// (0x000476ae) bg_popup_sub_pane_cp011

0xd914,	// (0x0004ae96) main_cset_text_pane_g1

0xd91c,	// (0x0004ae9e) main_cset_text_pane_t1

0xd92a,	// (0x0004aeac) main_cset_text_pane_t2

0xd938,	// (0x0004aeba) main_cset_text_pane_t3

0xd946,	// (0x0004aec8) main_cset_text_pane_t4

0xd954,	// (0x0004aed6) main_cset_text_pane_t5

0xd962,	// (0x0004aee4) main_cset_text_pane_t6

0xd970,	// (0x0004aef2) main_cset_text_pane_t7

0x0006,

0xfa2e,	// (0x0004cfb0) main_cset_text_pane_t

0xa12c,	// (0x000476ae) main_cam4_burst_pane

0xa12c,	// (0x000476ae) main_cam5_pane

0x78e6,	// (0x00044e68) bg_button_pane_cp019

0x78ef,	// (0x00044e71) bg_button_pane_cp020

0xd7d8,	// (0x0004ad5a) main_cset_slider_pane_g7_ParamLimits

0xd7d8,	// (0x0004ad5a) main_cset_slider_pane_g7

0xd7e4,	// (0x0004ad66) main_cset_slider_pane_g8_ParamLimits

0xd7e4,	// (0x0004ad66) main_cset_slider_pane_g8

0x7a38,	// (0x00044fba) main_cset_slider_pane_g9_ParamLimits

0x7a38,	// (0x00044fba) main_cset_slider_pane_g9

0x7a44,	// (0x00044fc6) main_cset_slider_pane_g10_ParamLimits

0x7a44,	// (0x00044fc6) main_cset_slider_pane_g10

0x7a50,	// (0x00044fd2) main_cset_slider_pane_g11_ParamLimits

0x7a50,	// (0x00044fd2) main_cset_slider_pane_g11

0x7a5c,	// (0x00044fde) main_cset_slider_pane_g12_ParamLimits

0x7a5c,	// (0x00044fde) main_cset_slider_pane_g12

0x7a68,	// (0x00044fea) main_cset_slider_pane_g13_ParamLimits

0x7a68,	// (0x00044fea) main_cset_slider_pane_g13

0x7a76,	// (0x00044ff8) main_cset_slider_pane_g14_ParamLimits

0x7a76,	// (0x00044ff8) main_cset_slider_pane_g14

0x7a84,	// (0x00045006) main_cset_slider_pane_g15_ParamLimits

0x7a84,	// (0x00045006) main_cset_slider_pane_g15

0xd82a,	// (0x0004adac) main_cset_slider_pane_t14_ParamLimits

0xd82a,	// (0x0004adac) main_cset_slider_pane_t14

0xd863,	// (0x0004ade5) main_cset_slider_pane_t15_ParamLimits

0xd863,	// (0x0004ade5) main_cset_slider_pane_t15

0x7fc6,	// (0x00045548) aid_cam4_burst_size_cell_ParamLimits

0x7fc6,	// (0x00045548) aid_cam4_burst_size_cell

0x7fe2,	// (0x00045564) grid_cam4_burst_pane_ParamLimits

0x7fe2,	// (0x00045564) grid_cam4_burst_pane

0x8012,	// (0x00045594) linegrid_cam4_burst_pane_ParamLimits

0x8012,	// (0x00045594) linegrid_cam4_burst_pane

0x8032,	// (0x000455b4) scroll_pane_cp30_ParamLimits

0x8032,	// (0x000455b4) scroll_pane_cp30

0x803e,	// (0x000455c0) cell_cam4_burst_pane_ParamLimits

0x803e,	// (0x000455c0) cell_cam4_burst_pane

0xd97e,	// (0x0004af00) linegrid_cam4_burst_pane_g1_ParamLimits

0xd97e,	// (0x0004af00) linegrid_cam4_burst_pane_g1

0x807a,	// (0x000455fc) linegrid_cam4_burst_pane_g2_ParamLimits

0x807a,	// (0x000455fc) linegrid_cam4_burst_pane_g2

0xd98b,	// (0x0004af0d) linegrid_cam4_burst_pane_g3_ParamLimits

0xd98b,	// (0x0004af0d) linegrid_cam4_burst_pane_g3

0x0002,

0xfa3d,	// (0x0004cfbf) linegrid_cam4_burst_pane_g_ParamLimits

0xfa3d,	// (0x0004cfbf) linegrid_cam4_burst_pane_g

0x808b,	// (0x0004560d) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x808b,	// (0x0004560d) linegrid_cam4_burst_pane_g3_copy1

0xd998,	// (0x0004af1a) linegrid_cam4_burst_pane_g4_ParamLimits

0xd998,	// (0x0004af1a) linegrid_cam4_burst_pane_g4

0x80a5,	// (0x00045627) linegrid_cam4_burst_pane_g5_ParamLimits

0x80a5,	// (0x00045627) linegrid_cam4_burst_pane_g5

0x80b6,	// (0x00045638) linegrid_cam4_burst_pane_g6_ParamLimits

0x80b6,	// (0x00045638) linegrid_cam4_burst_pane_g6

0xd9a5,	// (0x0004af27) linegrid_cam4_burst_pane_g7_ParamLimits

0xd9a5,	// (0x0004af27) linegrid_cam4_burst_pane_g7

0x80c7,	// (0x00045649) cell_cam4_burst_pane_g1

0xd9be,	// (0x0004af40) main_cam5_pane_t1_ParamLimits

0xd9be,	// (0x0004af40) main_cam5_pane_t1

0xd9d0,	// (0x0004af52) main_cam5_pane_t2_ParamLimits

0xd9d0,	// (0x0004af52) main_cam5_pane_t2

0xd9e2,	// (0x0004af64) main_cam5_pane_t3_ParamLimits

0xd9e2,	// (0x0004af64) main_cam5_pane_t3

0xd9f4,	// (0x0004af76) main_cam5_pane_t4_ParamLimits

0xd9f4,	// (0x0004af76) main_cam5_pane_t4

0xda0c,	// (0x0004af8e) main_cam5_pane_t5_ParamLimits

0xda0c,	// (0x0004af8e) main_cam5_pane_t5

0xda20,	// (0x0004afa2) main_cam5_pane_t6_ParamLimits

0xda20,	// (0x0004afa2) main_cam5_pane_t6

0xda34,	// (0x0004afb6) main_cam5_pane_t7_ParamLimits

0xda34,	// (0x0004afb6) main_cam5_pane_t7

0xda46,	// (0x0004afc8) main_cam5_pane_t8_ParamLimits

0xda46,	// (0x0004afc8) main_cam5_pane_t8

0xda62,	// (0x0004afe4) main_cam5_pane_t9_ParamLimits

0xda62,	// (0x0004afe4) main_cam5_pane_t9

0xda74,	// (0x0004aff6) main_cam5_pane_t10_ParamLimits

0xda74,	// (0x0004aff6) main_cam5_pane_t10

0xda86,	// (0x0004b008) main_cam5_pane_t11_ParamLimits

0xda86,	// (0x0004b008) main_cam5_pane_t11

0xda98,	// (0x0004b01a) main_cam5_pane_t12_ParamLimits

0xda98,	// (0x0004b01a) main_cam5_pane_t12

0xdaad,	// (0x0004b02f) main_cam5_pane_t13_ParamLimits

0xdaad,	// (0x0004b02f) main_cam5_pane_t13

0x000c,

0xfa49,	// (0x0004cfcb) main_cam5_pane_t_ParamLimits

0xfa49,	// (0x0004cfcb) main_cam5_pane_t

0x22b0,	// (0x0003f832) popup_scut_keymap_window_ParamLimits

0x22b0,	// (0x0003f832) popup_scut_keymap_window

0x80da,	// (0x0004565c) aid_size_cell_brow_shortcut

0xaa50,	// (0x00047fd2) bg_popup_window_pane_cp010

0x80e6,	// (0x00045668) grid_scut_pane

0x80f2,	// (0x00045674) cell_scut_pane_ParamLimits

0x80f2,	// (0x00045674) cell_scut_pane

0x8109,	// (0x0004568b) cell_scut_pane_g1

0xdaca,	// (0x0004b04c) cell_scut_pane_t1

0xdad9,	// (0x0004b05b) cell_scut_pane_t2

0x8112,	// (0x00045694) cell_scut_pane_t3

0x0002,

0xfa64,	// (0x0004cfe6) cell_scut_pane_t

0x5fd3,	// (0x00043555) main_mup3_pane_g8_ParamLimits

0x5fd3,	// (0x00043555) main_mup3_pane_g8

0x74f7,	// (0x00044a79) area_vitu2_query_pane_ParamLimits

0x74f7,	// (0x00044a79) area_vitu2_query_pane

0x117d,	// (0x0003e6ff) input_focus_pane_cp08

0xdae8,	// (0x0004b06a) area_vitu2_query_pane_g1

0x127e,	// (0x0003e800) area_vitu2_query_pane_g2

0x0001,

0xfa6b,	// (0x0004cfed) area_vitu2_query_pane_g

0x8120,	// (0x000456a2) area_vitu2_query_pane_t1_ParamLimits

0x8120,	// (0x000456a2) area_vitu2_query_pane_t1

0x8134,	// (0x000456b6) area_vitu2_query_pane_t2_ParamLimits

0x8134,	// (0x000456b6) area_vitu2_query_pane_t2

0x128f,	// (0x0003e811) area_vitu2_query_pane_t3_ParamLimits

0x128f,	// (0x0003e811) area_vitu2_query_pane_t3

0x12b7,	// (0x0003e839) area_vitu2_query_pane_t4_ParamLimits

0x12b7,	// (0x0003e839) area_vitu2_query_pane_t4

0x12df,	// (0x0003e861) area_vitu2_query_pane_t5_ParamLimits

0x12df,	// (0x0003e861) area_vitu2_query_pane_t5

0x1307,	// (0x0003e889) area_vitu2_query_pane_t6_ParamLimits

0x1307,	// (0x0003e889) area_vitu2_query_pane_t6

0x0006,

0xfa70,	// (0x0004cff2) area_vitu2_query_pane_t_ParamLimits

0xfa70,	// (0x0004cff2) area_vitu2_query_pane_t

0x8148,	// (0x000456ca) bg_button_pane_cp018

0x8156,	// (0x000456d8) bg_button_pane_cp021

0x1353,	// (0x0003e8d5) bg_button_pane_cp022

0x1364,	// (0x0003e8e6) input_focus_pane_cp09

0xb315,	// (0x00048897) aid_size_touch_mv_arrow_left

0xb340,	// (0x000488c2) aid_size_touch_mv_arrow_right

0x7a9c,	// (0x0004501e) main_cset_slider_pane_g16_ParamLimits

0x7a9c,	// (0x0004501e) main_cset_slider_pane_g16

0x7aaa,	// (0x0004502c) main_cset_slider_pane_g17_ParamLimits

0x7aaa,	// (0x0004502c) main_cset_slider_pane_g17

0x80c7,	// (0x00045649) cell_cam4_burst_pane_g1_ParamLimits

0xa12c,	// (0x000476ae) compa_mode_pane

0x7cb6,	// (0x00045238) popup_vtel_slider_window_g3_ParamLimits

0x7cb6,	// (0x00045238) popup_vtel_slider_window_g3

0x7cca,	// (0x0004524c) popup_vtel_slider_window_g4_ParamLimits

0x7cca,	// (0x0004524c) popup_vtel_slider_window_g4

0x7cde,	// (0x00045260) popup_vtel_slider_window_t1_ParamLimits

0x7cde,	// (0x00045260) popup_vtel_slider_window_t1

0xa12c,	// (0x000476ae) main_cl_pane

0x5305,	// (0x00042887) popup_imed_adjust2_window_ParamLimits

0xc90b,	// (0x00049e8d) bg_tb_trans_pane_cp05_ParamLimits

0xd218,	// (0x0004a79a) popup_imed_adjust2_window_g1_ParamLimits

0xd227,	// (0x0004a7a9) popup_imed_adjust2_window_g2_ParamLimits

0xd227,	// (0x0004a7a9) popup_imed_adjust2_window_g2

0xd233,	// (0x0004a7b5) popup_imed_adjust2_window_g3_ParamLimits

0xd233,	// (0x0004a7b5) popup_imed_adjust2_window_g3

0x0002,

0xf7d7,	// (0x0004cd59) popup_imed_adjust2_window_g_ParamLimits

0xf7d7,	// (0x0004cd59) popup_imed_adjust2_window_g

0xd23f,	// (0x0004a7c1) popup_imed_adjust2_window_t1_ParamLimits

0xd257,	// (0x0004a7d9) slider_imed_adjust_pane_ParamLimits

0xd26b,	// (0x0004a7ed) slider_imed_adjust_pane_g1_ParamLimits

0xd27b,	// (0x0004a7fd) slider_imed_adjust_pane_g2_ParamLimits

0xd28b,	// (0x0004a80d) slider_imed_adjust_pane_g3_ParamLimits

0xd29c,	// (0x0004a81e) slider_imed_adjust_pane_g4_ParamLimits

0xf7de,	// (0x0004cd60) slider_imed_adjust_pane_g_ParamLimits

0x7248,	// (0x000447ca) aid_touch_area_cam4_ParamLimits

0x7248,	// (0x000447ca) aid_touch_area_cam4

0x7258,	// (0x000447da) battery_pane_cp01

0x72df,	// (0x00044861) main_camera4_pane_g6_ParamLimits

0x72df,	// (0x00044861) main_camera4_pane_g6

0x72fd,	// (0x0004487f) main_camera4_pane_t2_ParamLimits

0x72fd,	// (0x0004487f) main_camera4_pane_t2

0x0001,

0xf8e5,	// (0x0004ce67) main_camera4_pane_t_ParamLimits

0xf8e5,	// (0x0004ce67) main_camera4_pane_t

0x737e,	// (0x00044900) aid_touch_area_vid4_ParamLimits

0x737e,	// (0x00044900) aid_touch_area_vid4

0x73be,	// (0x00044940) main_video4_pane_g5_ParamLimits

0x73be,	// (0x00044940) main_video4_pane_g5

0x73e2,	// (0x00044964) vid4_progress_pane_ParamLimits

0x73e2,	// (0x00044964) vid4_progress_pane

0xd7f0,	// (0x0004ad72) main_cset_slider_pane_g18_ParamLimits

0xd7f0,	// (0x0004ad72) main_cset_slider_pane_g18

0xd9b2,	// (0x0004af34) cell_cam4_burst_pane_g2_ParamLimits

0xd9b2,	// (0x0004af34) cell_cam4_burst_pane_g2

0x0001,

0xfa44,	// (0x0004cfc6) cell_cam4_burst_pane_g_ParamLimits

0xfa44,	// (0x0004cfc6) cell_cam4_burst_pane_g

0x8162,	// (0x000456e4) bg_cl_pane_ParamLimits

0x8162,	// (0x000456e4) bg_cl_pane

0x816e,	// (0x000456f0) cl_header_pane_ParamLimits

0x816e,	// (0x000456f0) cl_header_pane

0x817a,	// (0x000456fc) cl_listscroll_pane_ParamLimits

0x817a,	// (0x000456fc) cl_listscroll_pane

0xdb6d,	// (0x0004b0ef) bg_cl_pane_g1

0xdb75,	// (0x0004b0f7) bg_cl_pane_g2

0xdb7d,	// (0x0004b0ff) bg_cl_pane_g3

0xdb85,	// (0x0004b107) bg_cl_pane_g4

0xdb8d,	// (0x0004b10f) bg_cl_pane_g5

0xdb95,	// (0x0004b117) bg_cl_pane_g6

0xdb9d,	// (0x0004b11f) bg_cl_pane_g7

0xdba5,	// (0x0004b127) bg_cl_pane_g8

0xdbad,	// (0x0004b12f) bg_cl_pane_g9

0x0008,

0xfa7f,	// (0x0004d001) bg_cl_pane_g

0x8186,	// (0x00045708) aid_height_cl_leading_ParamLimits

0x8186,	// (0x00045708) aid_height_cl_leading

0x8192,	// (0x00045714) aid_height_cl_text_ParamLimits

0x8192,	// (0x00045714) aid_height_cl_text

0xdb3f,	// (0x0004b0c1) bg_cl_header_pane_ParamLimits

0xdb3f,	// (0x0004b0c1) bg_cl_header_pane

0x81aa,	// (0x0004572c) cl_header_pane_g1_ParamLimits

0x81aa,	// (0x0004572c) cl_header_pane_g1

0x81b7,	// (0x00045739) cl_header_pane_t1_ParamLimits

0x81b7,	// (0x00045739) cl_header_pane_t1

0xdbb5,	// (0x0004b137) cl_list_pane

0xd7c3,	// (0x0004ad45) hc_scroll_pane_cp01

0xac89,	// (0x0004820b) bg_cl_header_pane_g1

0xd6a9,	// (0x0004ac2b) bg_cl_header_pane_g2

0xaca9,	// (0x0004822b) bg_cl_header_pane_g3

0xd6b9,	// (0x0004ac3b) bg_cl_header_pane_g4

0xd6b1,	// (0x0004ac33) bg_cl_header_pane_g5

0xd8cd,	// (0x0004ae4f) bg_cl_header_pane_g6

0xd6d1,	// (0x0004ac53) bg_cl_header_pane_g7

0xd6d9,	// (0x0004ac5b) bg_cl_header_pane_g8

0xd6c9,	// (0x0004ac4b) bg_cl_header_pane_g9

0x0008,

0xfa92,	// (0x0004d014) bg_cl_header_pane_g

0x81c9,	// (0x0004574b) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x81c9,	// (0x0004574b) hc_cl_list_double_graphic_heading_pane

0x81dd,	// (0x0004575f) hc_cl_list_single_graphic_pane_ParamLimits

0x81dd,	// (0x0004575f) hc_cl_list_single_graphic_pane

0x81f7,	// (0x00045779) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x81f7,	// (0x00045779) hc_cl_list_single_graphic_pane_g1

0x8203,	// (0x00045785) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x8203,	// (0x00045785) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfaa5,	// (0x0004d027) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfaa5,	// (0x0004d027) hc_cl_list_single_graphic_pane_g

0x8217,	// (0x00045799) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x8217,	// (0x00045799) hc_cl_list_single_graphic_pane_t1

0x81f7,	// (0x00045779) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x81f7,	// (0x00045779) hc_cl_list_double_graphic_heading_pane_g1

0x822c,	// (0x000457ae) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x822c,	// (0x000457ae) hc_cl_list_double_graphic_heading_pane_g2

0x8240,	// (0x000457c2) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x8240,	// (0x000457c2) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfaaa,	// (0x0004d02c) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfaaa,	// (0x0004d02c) hc_cl_list_double_graphic_heading_pane_g

0x8254,	// (0x000457d6) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x8254,	// (0x000457d6) hc_cl_list_double_graphic_heading_pane_t1

0x8269,	// (0x000457eb) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x8269,	// (0x000457eb) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfab1,	// (0x0004d033) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfab1,	// (0x0004d033) hc_cl_list_double_graphic_heading_pane_t

0x8286,	// (0x00045808) vid4_progress_pane_g1

0x8296,	// (0x00045818) vid4_progress_pane_g2

0x82a6,	// (0x00045828) vid4_progress_pane_g3

0x82b8,	// (0x0004583a) vid4_progress_pane_g4

0x0004,

0xfab6,	// (0x0004d038) vid4_progress_pane_g

0x82d0,	// (0x00045852) vid4_progress_pane_t1

0x82e6,	// (0x00045868) vid4_progress_pane_t2

0x0002,

0xfac1,	// (0x0004d043) vid4_progress_pane_t

0x8311,	// (0x00045893) wait_bar_pane_cp07

0xcb06,	// (0x0004a088) blid_firmament_pane_ParamLimits

0xcb49,	// (0x0004a0cb) popup_blid_sat_info2_window_g1

0xcb6d,	// (0x0004a0ef) popup_blid_sat_info2_window_t3

0xcb7b,	// (0x0004a0fd) popup_blid_sat_info2_window_t4

0xcb89,	// (0x0004a10b) popup_blid_sat_info2_window_t5

0xcb97,	// (0x0004a119) popup_blid_sat_info2_window_t6

0xcba7,	// (0x0004a129) popup_blid_sat_info2_window_t7

0xcbb5,	// (0x0004a137) popup_blid_sat_info2_window_t8

0xcbc3,	// (0x0004a145) popup_blid_sat_info2_window_t9

0xcbd1,	// (0x0004a153) popup_blid_sat_info2_window_t10

0xcc93,	// (0x0004a215) aid_firma_cardinal_ParamLimits

0xcca7,	// (0x0004a229) blid_firmament_pane_t1_ParamLimits

0xccbe,	// (0x0004a240) blid_firmament_pane_t2_ParamLimits

0xccd5,	// (0x0004a257) blid_firmament_pane_t3_ParamLimits

0xccec,	// (0x0004a26e) blid_firmament_pane_t4_ParamLimits

0xf6cb,	// (0x0004cc4d) blid_firmament_pane_t_ParamLimits

0xcd03,	// (0x0004a285) blid_sat_info_pane_ParamLimits

0xaf98,	// (0x0004851a) main_cam_set_pane_ParamLimits

0x67a2,	// (0x00043d24) aid_size_cell_colour_35_ParamLimits

0x67bc,	// (0x00043d3e) aid_size_cell_colour_112_ParamLimits

0x67d3,	// (0x00043d55) aid_size_cell_effect_ParamLimits

0xaf98,	// (0x0004851a) bg_tb_trans_pane_cp02_ParamLimits

0xafcd,	// (0x0004854f) heading_imed_pane_ParamLimits

0x67ed,	// (0x00043d6f) listscroll_imed_pane_ParamLimits

0xbef7,	// (0x00049479) popup_call2_audio_first_window_g5_ParamLimits

0xbef7,	// (0x00049479) popup_call2_audio_first_window_g5

0x6f3c,	// (0x000444be) aid_size_touch_image3_arrow_left_ParamLimits

0x6f3c,	// (0x000444be) aid_size_touch_image3_arrow_left

0x6f52,	// (0x000444d4) aid_size_touch_image3_arrow_right_ParamLimits

0x6f52,	// (0x000444d4) aid_size_touch_image3_arrow_right

0x82fb,	// (0x0004587d) vid4_progress_pane_t3

0x6a8d,	// (0x0004400f) main_hwr_training_symbol_option_pane_ParamLimits

0x6a8d,	// (0x0004400f) main_hwr_training_symbol_option_pane

0xd505,	// (0x0004aa87) popup_hwr_training_preview_window_ParamLimits

0xd505,	// (0x0004aa87) popup_hwr_training_preview_window

0x6aee,	// (0x00044070) hwr_training_navi_pane_g5_ParamLimits

0x6aee,	// (0x00044070) hwr_training_navi_pane_g5

0xd697,	// (0x0004ac19) popup_char_count_window

0xdb3f,	// (0x0004b0c1) bg_popup_sub_pane_cp20_ParamLimits

0x7dcf,	// (0x00045351) list_vitu2_match_list_pane_ParamLimits

0x7ddb,	// (0x0004535d) vitu2_page_scroll_pane_ParamLimits

0x7ddb,	// (0x0004535d) vitu2_page_scroll_pane

0xdbbe,	// (0x0004b140) list_single_hwr_training_symbol_option_pane_ParamLimits

0xdbbe,	// (0x0004b140) list_single_hwr_training_symbol_option_pane

0xdbd1,	// (0x0004b153) list_single_hwr_training_symbol_option_pane_g1

0xdbd9,	// (0x0004b15b) list_single_hwr_training_symbol_option_pane_t1

0xdbe7,	// (0x0004b169) bg_button_pane_cp023

0xdbf0,	// (0x0004b172) bg_button_pane_cp024

0x8346,	// (0x000458c8) vitu2_page_scroll_pane_g1

0x834e,	// (0x000458d0) vitu2_page_scroll_pane_g2

0x0001,

0xfac8,	// (0x0004d04a) vitu2_page_scroll_pane_g

0x8356,	// (0x000458d8) vitu2_page_scroll_pane_t1

0xafa6,	// (0x00048528) popup_char_count_window_g1

0xdc23,	// (0x0004b1a5) popup_char_count_window_g2

0xdaf4,	// (0x0004b076) popup_char_count_window_g3

0x0002,

0xfacd,	// (0x0004d04f) popup_char_count_window_g

0xdc2c,	// (0x0004b1ae) popup_char_count_window_t1

0xa12c,	// (0x000476ae) main_vded2_pane

0xd204,	// (0x0004a786) aid_size_cell_imed_line

0xd20e,	// (0x0004a790) grid_imed_line_width_pane

0x744e,	// (0x000449d0) vid4_indicators_pane_g4

0xdc3a,	// (0x0004b1bc) cell_imed_line_width_pane_ParamLimits

0xdc3a,	// (0x0004b1bc) cell_imed_line_width_pane

0xdc4e,	// (0x0004b1d0) cell_imed_line_width_pane_g1

0xdafd,	// (0x0004b07f) cell_imed_line_width_pane_g2

0x0001,

0xfad4,	// (0x0004d056) cell_imed_line_width_pane_g

0x8365,	// (0x000458e7) main_vded2_pane_g1_ParamLimits

0x8365,	// (0x000458e7) main_vded2_pane_g1

0x8372,	// (0x000458f4) main_vded2_pane_g2_ParamLimits

0x8372,	// (0x000458f4) main_vded2_pane_g2

0x0001,

0xfad9,	// (0x0004d05b) main_vded2_pane_g_ParamLimits

0xfad9,	// (0x0004d05b) main_vded2_pane_g

0x8380,	// (0x00045902) vded2_slider_pane_ParamLimits

0x8380,	// (0x00045902) vded2_slider_pane

0x838d,	// (0x0004590f) aid_size_touch_vded2_end

0x8397,	// (0x00045919) aid_size_touch_vded2_playhead

0xdc57,	// (0x0004b1d9) aid_size_touch_vded2_start

0xdc5f,	// (0x0004b1e1) vded2_slider_bg_pane

0xdc68,	// (0x0004b1ea) vded2_slider_pane_g1

0xdc71,	// (0x0004b1f3) vded2_slider_pane_g2

0x839f,	// (0x00045921) vded2_slider_pane_g3

0x0002,

0xfade,	// (0x0004d060) vded2_slider_pane_g

0xdc79,	// (0x0004b1fb) vded2_slider_bg_pane_g1

0xdc82,	// (0x0004b204) vded2_slider_bg_pane_g2

0xdc8b,	// (0x0004b20d) vded2_slider_bg_pane_g3

0x0002,

0xfae5,	// (0x0004d067) vded2_slider_bg_pane_g

0x4b5c,	// (0x000420de) aid_postcard_touch_down_pane_ParamLimits

0x4b5c,	// (0x000420de) aid_postcard_touch_down_pane

0x4b6c,	// (0x000420ee) aid_postcard_touch_up_pane_ParamLimits

0x4b6c,	// (0x000420ee) aid_postcard_touch_up_pane

0xa12c,	// (0x000476ae) main_blid2_pane

0x5294,	// (0x00042816) popup_blid2_search_window

0xa12c,	// (0x000476ae) blid2_gps_pane

0xa12c,	// (0x000476ae) blid2_navig_pane

0xa12c,	// (0x000476ae) blid2_search_pane

0xa12c,	// (0x000476ae) blid2_tripm_pane

0x83a8,	// (0x0004592a) blid2_search_pane_g1_ParamLimits

0x83a8,	// (0x0004592a) blid2_search_pane_g1

0x83b8,	// (0x0004593a) blid2_search_pane_t1_ParamLimits

0x83b8,	// (0x0004593a) blid2_search_pane_t1

0x83ca,	// (0x0004594c) aid_size_cell_blid2_gps_ParamLimits

0x83ca,	// (0x0004594c) aid_size_cell_blid2_gps

0x83da,	// (0x0004595c) blid2_gps_pane_g1_ParamLimits

0x83da,	// (0x0004595c) blid2_gps_pane_g1

0x83e6,	// (0x00045968) grid_blid2_satellite_pane_ParamLimits

0x83e6,	// (0x00045968) grid_blid2_satellite_pane

0x83f6,	// (0x00045978) blid2_navig_pane_g1_ParamLimits

0x83f6,	// (0x00045978) blid2_navig_pane_g1

0x8402,	// (0x00045984) blid2_navig_pane_t1_ParamLimits

0x8402,	// (0x00045984) blid2_navig_pane_t1

0x8414,	// (0x00045996) blid2_navig_pane_t2_ParamLimits

0x8414,	// (0x00045996) blid2_navig_pane_t2

0x0001,

0xfaec,	// (0x0004d06e) blid2_navig_pane_t_ParamLimits

0xfaec,	// (0x0004d06e) blid2_navig_pane_t

0x8426,	// (0x000459a8) blid2_navig_ring_pane_ParamLimits

0x8426,	// (0x000459a8) blid2_navig_ring_pane

0x8436,	// (0x000459b8) blid2_speed_pane_ParamLimits

0x8436,	// (0x000459b8) blid2_speed_pane

0x8442,	// (0x000459c4) blid2_tripm_pane_g1_ParamLimits

0x8442,	// (0x000459c4) blid2_tripm_pane_g1

0x8452,	// (0x000459d4) blid2_tripm_pane_g2_ParamLimits

0x8452,	// (0x000459d4) blid2_tripm_pane_g2

0x845e,	// (0x000459e0) blid2_tripm_pane_g3_ParamLimits

0x845e,	// (0x000459e0) blid2_tripm_pane_g3

0x846a,	// (0x000459ec) blid2_tripm_pane_g4_ParamLimits

0x846a,	// (0x000459ec) blid2_tripm_pane_g4

0x8476,	// (0x000459f8) blid2_tripm_pane_g5_ParamLimits

0x8476,	// (0x000459f8) blid2_tripm_pane_g5

0x0005,

0xfaf1,	// (0x0004d073) blid2_tripm_pane_g_ParamLimits

0xfaf1,	// (0x0004d073) blid2_tripm_pane_g

0x8492,	// (0x00045a14) blid2_tripm_pane_t1_ParamLimits

0x8492,	// (0x00045a14) blid2_tripm_pane_t1

0x84a6,	// (0x00045a28) blid2_tripm_pane_t2_ParamLimits

0x84a6,	// (0x00045a28) blid2_tripm_pane_t2

0x84b8,	// (0x00045a3a) blid2_tripm_pane_t3_ParamLimits

0x84b8,	// (0x00045a3a) blid2_tripm_pane_t3

0x0003,

0xfafe,	// (0x0004d080) blid2_tripm_pane_t_ParamLimits

0xfafe,	// (0x0004d080) blid2_tripm_pane_t

0x84ea,	// (0x00045a6c) cell_blid2_satellite_pane_ParamLimits

0x84ea,	// (0x00045a6c) cell_blid2_satellite_pane

0x8504,	// (0x00045a86) cell_blid2_satellite_pane_g1

0xdc94,	// (0x0004b216) cell_blid2_satellite_pane_t1

0xcd13,	// (0x0004a295) blid2_speed_pane_g1

0xdca2,	// (0x0004b224) blid2_speed_pane_t1

0xdcb0,	// (0x0004b232) blid2_speed_pane_t2

0x0001,

0xfb07,	// (0x0004d089) blid2_speed_pane_t

0xcd13,	// (0x0004a295) blid2_navig_ring_pane_g1

0x850d,	// (0x00045a8f) blid2_navig_ring_pane_g2

0x8515,	// (0x00045a97) blid2_navig_ring_pane_g3

0x851d,	// (0x00045a9f) blid2_navig_ring_pane_g4

0x8525,	// (0x00045aa7) blid2_navig_ring_pane_g5

0x0004,

0xfb0c,	// (0x0004d08e) blid2_navig_ring_pane_g

0xa12c,	// (0x000476ae) bg_popup_window_pane_cp011

0xdcbe,	// (0x0004b240) popup_blid2_search_window_g1

0xdcc6,	// (0x0004b248) popup_blid2_search_window_t1

0xdcd4,	// (0x0004b256) popup_blid2_search_window_t2

0x0001,

0xfb17,	// (0x0004d099) popup_blid2_search_window_t

0xab98,	// (0x0004811a) main_browser_pane_g1

0xa88b,	// (0x00047e0d) main_browser_pane_ParamLimits

0xaf98,	// (0x0004851a) bg_button_pane_cp011_ParamLimits

0x76b9,	// (0x00044c3b) cell_vitu2_function_pane_g1_ParamLimits

0xc90b,	// (0x00049e8d) bg_popup_sub_pane_cp22_ParamLimits

0x117d,	// (0x0003e6ff) input_focus_pane_cp08_ParamLimits

0x7f73,	// (0x000454f5) popup_vitu2_query_button_pane_ParamLimits

0x7f73,	// (0x000454f5) popup_vitu2_query_button_pane

0x1194,	// (0x0003e716) popup_vitu2_query_input_button_pane

0xd908,	// (0x0004ae8a) popup_vitu2_query_window_g1_ParamLimits

0x119e,	// (0x0003e720) popup_vitu2_query_window_g2_ParamLimits

0xfa18,	// (0x0004cf9a) popup_vitu2_query_window_g_ParamLimits

0xa12c,	// (0x000476ae) bg_button_pane_cp026

0x852d,	// (0x00045aaf) popup_vitu2_query_input_button_pane_g1

0xa12c,	// (0x000476ae) bg_button_pane_cp025

0xdce2,	// (0x0004b264) popup_vitu2_query_button_pane_t1

0x5cf4,	// (0x00043276) main_mp3_pane_t6

0x5d04,	// (0x00043286) popup_slider_window_cp01

0x7333,	// (0x000448b5) cam4_battery_pane

0x740d,	// (0x0004498f) cam4_battery_pane_cp02

0x827e,	// (0x00045800) cam4_battery_pane_cp01

0x827e,	// (0x00045800) cam4_battery_pane_cp03

0xcd13,	// (0x0004a295) cam4_battery_pane_g1

0xdb05,	// (0x0004b087) cam4_battery_pane_g2

0x0001,

0xfb1c,	// (0x0004d09e) cam4_battery_pane_g

0xcbdf,	// (0x0004a161) popup_blid_sat_info2_window_t11

0xb315,	// (0x00048897) aid_size_touch_mv_arrow_left_ParamLimits

0xb340,	// (0x000488c2) aid_size_touch_mv_arrow_right_ParamLimits

0xb39e,	// (0x00048920) navi_pane_g1_ParamLimits

0xb3aa,	// (0x0004892c) navi_pane_g2_ParamLimits

0xb3d8,	// (0x0004895a) navi_pane_g3_ParamLimits

0xf3ca,	// (0x0004c94c) navi_pane_g_ParamLimits

0x45e4,	// (0x00041b66) navi_pane_mv_t1_ParamLimits

0x67f9,	// (0x00043d7b) grid_imed_effect_pane_ParamLimits

0x3073,	// (0x000405f5) aid_placing_vt_slider_lsc

0xaae7,	// (0x00048069) aid_placing_vt_slider_prt

0xaf98,	// (0x0004851a) bg_tb_trans_pane_cp01_ParamLimits

0xce78,	// (0x0004a3fa) popup_image_details_window_g1_ParamLimits

0xce8b,	// (0x0004a40d) popup_image_details_window_g2_ParamLimits

0xcea0,	// (0x0004a422) popup_image_details_window_g3_ParamLimits

0xcea0,	// (0x0004a422) popup_image_details_window_g3

0xf710,	// (0x0004cc92) popup_image_details_window_g_ParamLimits

0xceb4,	// (0x0004a436) popup_image_details_window_t1_ParamLimits

0xcec6,	// (0x0004a448) popup_image_details_window_t2_ParamLimits

0xcedf,	// (0x0004a461) popup_image_details_window_t3_ParamLimits

0xcef3,	// (0x0004a475) popup_image_details_window_t4_ParamLimits

0xcf0e,	// (0x0004a490) popup_image_details_window_t5_ParamLimits

0xf717,	// (0x0004cc99) popup_image_details_window_t_ParamLimits

0x819e,	// (0x00045720) cl_header_name_pane_ParamLimits

0x819e,	// (0x00045720) cl_header_name_pane

0x8535,	// (0x00045ab7) cl_header_name_pane_t1_ParamLimits

0x8535,	// (0x00045ab7) cl_header_name_pane_t1

0x854c,	// (0x00045ace) cl_header_name_pane_t2_ParamLimits

0x854c,	// (0x00045ace) cl_header_name_pane_t2

0x8576,	// (0x00045af8) cl_header_name_pane_t3_ParamLimits

0x8576,	// (0x00045af8) cl_header_name_pane_t3

0x0002,

0xfb21,	// (0x0004d0a3) cl_header_name_pane_t_ParamLimits

0xfb21,	// (0x0004d0a3) cl_header_name_pane_t

0xb467,	// (0x000489e9) navi_pane_mv_g2_ParamLimits

0xd671,	// (0x0004abf3) field_vitu2_entry_pane_g1_ParamLimits

0xd67d,	// (0x0004abff) field_vitu2_entry_pane_g2_ParamLimits

0xd689,	// (0x0004ac0b) field_vitu2_entry_pane_g3_ParamLimits

0xd689,	// (0x0004ac0b) field_vitu2_entry_pane_g3

0xf917,	// (0x0004ce99) field_vitu2_entry_pane_g_ParamLimits

0x764d,	// (0x00044bcf) cell_vitu2_itu_pane_g1_ParamLimits

0x765f,	// (0x00044be1) cell_vitu2_itu_pane_g2_ParamLimits

0x765f,	// (0x00044be1) cell_vitu2_itu_pane_g2

0x0001,

0xf923,	// (0x0004cea5) cell_vitu2_itu_pane_g_ParamLimits

0xf923,	// (0x0004cea5) cell_vitu2_itu_pane_g

0xaf98,	// (0x0004851a) bg_vkb2_func_pane_cp05_ParamLimits

0xaf98,	// (0x0004851a) bg_vkb2_func_pane_cp05

0xaf98,	// (0x0004851a) bg_vkb2_func_pane_cp03

0xaf98,	// (0x0004851a) bg_vkb2_func_pane_cp04

0xaf98,	// (0x0004851a) bg_vkb2_func_pane_cp10_ParamLimits

0xaf98,	// (0x0004851a) bg_vkb2_func_pane_cp10

0x1353,	// (0x0003e8d5) bg_vkb2_func_pane_cp08

0x8148,	// (0x000456ca) bg_vkb2_func_pane_cp06

0x8156,	// (0x000456d8) bg_vkb2_func_pane_cp07

0xdbf9,	// (0x0004b17b) bg_vkb2_func_pane_cp11_ParamLimits

0xdbf9,	// (0x0004b17b) bg_vkb2_func_pane_cp11

0xdc0e,	// (0x0004b190) bg_vkb2_func_pane_cp12_ParamLimits

0xdc0e,	// (0x0004b190) bg_vkb2_func_pane_cp12

0xa12c,	// (0x000476ae) bg_vkb2_func_pane_cp09

0xd6a9,	// (0x0004ac2b) bg_vkb2_func_pane_g1

0xaca9,	// (0x0004822b) bg_vkb2_func_pane_g2

0xd6b1,	// (0x0004ac33) bg_vkb2_func_pane_g3

0xd6b9,	// (0x0004ac3b) bg_vkb2_func_pane_g4

0xd8cd,	// (0x0004ae4f) bg_vkb2_func_pane_g5

0xd6d1,	// (0x0004ac53) bg_vkb2_func_pane_g6

0xd6d9,	// (0x0004ac5b) bg_vkb2_func_pane_g7

0xd6c9,	// (0x0004ac4b) bg_vkb2_func_pane_g8

0xac89,	// (0x0004820b) bg_vkb2_func_pane_g9

0x0008,

0xfb28,	// (0x0004d0aa) bg_vkb2_func_pane_g

0x8484,	// (0x00045a06) blid2_tripm_pane_g6_ParamLimits

0x8484,	// (0x00045a06) blid2_tripm_pane_g6

0xd5c3,	// (0x0004ab45) mp4_progress_pane_g1

0x84de,	// (0x00045a60) blid2_tripm_values_pane_ParamLimits

0x84de,	// (0x00045a60) blid2_tripm_values_pane

0x859b,	// (0x00045b1d) blid2_tripm_values_pane_t1

0x85a9,	// (0x00045b2b) blid2_tripm_values_pane_t2

0x85b7,	// (0x00045b39) blid2_tripm_values_pane_t3

0x85c5,	// (0x00045b47) blid2_tripm_values_pane_t4

0x85d3,	// (0x00045b55) blid2_tripm_values_pane_t5

0x85e1,	// (0x00045b63) blid2_tripm_values_pane_t6

0x85ef,	// (0x00045b71) blid2_tripm_values_pane_t7

0x85fd,	// (0x00045b7f) blid2_tripm_values_pane_t8

0x860b,	// (0x00045b8d) blid2_tripm_values_pane_t9

0x0008,

0xfb3b,	// (0x0004d0bd) blid2_tripm_values_pane_t

0x30b3,	// (0x00040635) call_video_pane_t1_ParamLimits

0x30d4,	// (0x00040656) call_video_pane_t2_ParamLimits

0xf253,	// (0x0004c7d5) call_video_pane_t_ParamLimits

0x0ed5,	// (0x0003e457) msg_header_pane_g1_ParamLimits

0xb641,	// (0x00048bc3) msg_header_pane_g2_ParamLimits

0xb641,	// (0x00048bc3) msg_header_pane_g2

0x0001,

0xf46d,	// (0x0004c9ef) msg_header_pane_g_ParamLimits

0xf46d,	// (0x0004c9ef) msg_header_pane_g

0xa88b,	// (0x00047e0d) main_clock2_pane_ParamLimits

0x6573,	// (0x00043af5) grid_clock2_toolbar_pane_ParamLimits

0x6573,	// (0x00043af5) grid_clock2_toolbar_pane

0x6573,	// (0x00043af5) listscroll_clock2_pane_ParamLimits

0x6573,	// (0x00043af5) listscroll_clock2_pane

0x6623,	// (0x00043ba5) main_clock2_pane_t3_ParamLimits

0x6623,	// (0x00043ba5) main_clock2_pane_t3

0x6635,	// (0x00043bb7) main_clock2_pane_t4_ParamLimits

0x6635,	// (0x00043bb7) main_clock2_pane_t4

0xdcf0,	// (0x0004b272) cell_clock2_toolbar_pane

0xdcf8,	// (0x0004b27a) cell_clock2_toolbar_pane_cp01

0xdcf8,	// (0x0004b27a) cell_clock2_toolbar_pane_cp02

0xdd00,	// (0x0004b282) cell_clock2_toolbar_pane_cp03

0xdd08,	// (0x0004b28a) list_clock2_pane

0xb29a,	// (0x0004881c) scroll_pane_cp10

0xdd10,	// (0x0004b292) list_single_clock2_pane_ParamLimits

0xdd10,	// (0x0004b292) list_single_clock2_pane

0xaa50,	// (0x00047fd2) list_highlight_pane_cp08

0xdd1d,	// (0x0004b29f) list_single_clock2_pane_t1

0xdd2b,	// (0x0004b2ad) list_single_clock2_pane_t2

0x0001,

0xfb4e,	// (0x0004d0d0) list_single_clock2_pane_t

0xa12c,	// (0x000476ae) bg_button_pane_cp10

0xdd39,	// (0x0004b2bb) cell_clock2_toolbar_pane_g1

0x4abe,	// (0x00042040) aid_main_viewer_pane_g1_ParamLimits

0x4abe,	// (0x00042040) aid_main_viewer_pane_g1

0x4aca,	// (0x0004204c) aid_main_viewer_pane_g2_ParamLimits

0x4aca,	// (0x0004204c) aid_main_viewer_pane_g2

0x4ad6,	// (0x00042058) aid_main_viewer_pane_g3_ParamLimits

0x4ad6,	// (0x00042058) aid_main_viewer_pane_g3

0x4ae7,	// (0x00042069) aid_main_viewer_pane_g4_ParamLimits

0x4ae7,	// (0x00042069) aid_main_viewer_pane_g4

0x0003,

0xf47e,	// (0x0004ca00) aid_main_viewer_pane_g_ParamLimits

0xf47e,	// (0x0004ca00) aid_main_viewer_pane_g

0x526c,	// (0x000427ee) main_calc_pane_ParamLimits

0x5279,	// (0x000427fb) main_dialer2_pane_ParamLimits

0xa12c,	// (0x000476ae) main_cam6_pane

0xa12c,	// (0x000476ae) main_vid6_pane

0x657f,	// (0x00043b01) listscroll_gen_pane_cp06_ParamLimits

0x657f,	// (0x00043b01) listscroll_gen_pane_cp06

0x6647,	// (0x00043bc9) main_clock2_pane_t5_ParamLimits

0x6647,	// (0x00043bc9) main_clock2_pane_t5

0x6694,	// (0x00043c16) aid_call2_pane_cp10_ParamLimits

0x66a6,	// (0x00043c28) aid_call_pane_cp10_ParamLimits

0xb309,	// (0x0004888b) popup_clock_analogue_window_cp10_g1_ParamLimits

0xb309,	// (0x0004888b) popup_clock_analogue_window_cp10_g2_ParamLimits

0x66b8,	// (0x00043c3a) popup_clock_analogue_window_cp10_g3_ParamLimits

0x66b8,	// (0x00043c3a) popup_clock_analogue_window_cp10_g4_ParamLimits

0xb309,	// (0x0004888b) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf7cc,	// (0x0004cd4e) popup_clock_analogue_window_cp10_g_ParamLimits

0x66ce,	// (0x00043c50) popup_clock_analogue_window_cp10_t1_ParamLimits

0x6ee9,	// (0x0004446b) cell_dialer2_keypad_pane_g2_ParamLimits

0x6ee9,	// (0x0004446b) cell_dialer2_keypad_pane_g2

0x0001,

0xf8b6,	// (0x0004ce38) cell_dialer2_keypad_pane_g_ParamLimits

0xf8b6,	// (0x0004ce38) cell_dialer2_keypad_pane_g

0x6f05,	// (0x00044487) cell_dialer2_keypad_pane_t1

0x7984,	// (0x00044f06) main_cset_text2_pane_ParamLimits

0x7984,	// (0x00044f06) main_cset_text2_pane

0xdae8,	// (0x0004b06a) area_vitu2_query_pane_g1_ParamLimits

0x127e,	// (0x0003e800) area_vitu2_query_pane_g2_ParamLimits

0xfa6b,	// (0x0004cfed) area_vitu2_query_pane_g_ParamLimits

0x132f,	// (0x0003e8b1) area_vitu2_query_pane_t7_ParamLimits

0x132f,	// (0x0003e8b1) area_vitu2_query_pane_t7

0x8148,	// (0x000456ca) bg_button_pane_cp018_ParamLimits

0x8156,	// (0x000456d8) bg_button_pane_cp021_ParamLimits

0x1353,	// (0x0003e8d5) bg_button_pane_cp022_ParamLimits

0x1353,	// (0x0003e8d5) bg_vkb2_func_pane_cp08_ParamLimits

0x8148,	// (0x000456ca) bg_vkb2_func_pane_cp06_ParamLimits

0x8156,	// (0x000456d8) bg_vkb2_func_pane_cp07_ParamLimits

0x1364,	// (0x0003e8e6) input_focus_pane_cp09_ParamLimits

0x8619,	// (0x00045b9b) cam6_autofocus_pane_ParamLimits

0x8619,	// (0x00045b9b) cam6_autofocus_pane

0x863b,	// (0x00045bbd) cam6_image_uncrop_pane_ParamLimits

0x863b,	// (0x00045bbd) cam6_image_uncrop_pane

0x8668,	// (0x00045bea) cam6_indi_pane_ParamLimits

0x8668,	// (0x00045bea) cam6_indi_pane

0x8682,	// (0x00045c04) cam6_mode_pane_ParamLimits

0x8682,	// (0x00045c04) cam6_mode_pane

0x8696,	// (0x00045c18) cam6_timer_pane_ParamLimits

0x8696,	// (0x00045c18) cam6_timer_pane

0x86a7,	// (0x00045c29) cam6_zoom_pane_ParamLimits

0x86a7,	// (0x00045c29) cam6_zoom_pane

0x86bf,	// (0x00045c41) cam6_mode_pane_g1_ParamLimits

0x86bf,	// (0x00045c41) cam6_mode_pane_g1

0x86cb,	// (0x00045c4d) cam6_mode_pane_g2_ParamLimits

0x86cb,	// (0x00045c4d) cam6_mode_pane_g2

0x86d7,	// (0x00045c59) cam6_mode_pane_g3_ParamLimits

0x86d7,	// (0x00045c59) cam6_mode_pane_g3

0x86e3,	// (0x00045c65) cam6_mode_pane_g4_ParamLimits

0x86e3,	// (0x00045c65) cam6_mode_pane_g4

0x0003,

0xfb53,	// (0x0004d0d5) cam6_mode_pane_g_ParamLimits

0xfb53,	// (0x0004d0d5) cam6_mode_pane_g

0xdb4d,	// (0x0004b0cf) bg_tb_trans_pane_cp08_ParamLimits

0xdb4d,	// (0x0004b0cf) bg_tb_trans_pane_cp08

0xdd41,	// (0x0004b2c3) cam6_battery_pane_ParamLimits

0xdd41,	// (0x0004b2c3) cam6_battery_pane

0xdd57,	// (0x0004b2d9) cam6_indi_pane_g1_ParamLimits

0xdd57,	// (0x0004b2d9) cam6_indi_pane_g1

0xdd69,	// (0x0004b2eb) cam6_indi_pane_g2_ParamLimits

0xdd69,	// (0x0004b2eb) cam6_indi_pane_g2

0xdd7b,	// (0x0004b2fd) cam6_indi_pane_g3_ParamLimits

0xdd7b,	// (0x0004b2fd) cam6_indi_pane_g3

0x0002,

0xfb5c,	// (0x0004d0de) cam6_indi_pane_g_ParamLimits

0xfb5c,	// (0x0004d0de) cam6_indi_pane_g

0xdd8d,	// (0x0004b30f) cam6_indi_pane_t1_ParamLimits

0xdd8d,	// (0x0004b30f) cam6_indi_pane_t1

0x7481,	// (0x00044a03) cam6_autofocus_pane_g1

0x7489,	// (0x00044a0b) cam6_autofocus_pane_g2

0x7491,	// (0x00044a13) cam6_autofocus_pane_g3

0x7499,	// (0x00044a1b) cam6_autofocus_pane_g4

0x0003,

0xfb63,	// (0x0004d0e5) cam6_autofocus_pane_g

0xddb3,	// (0x0004b335) cam6_timer_pane_g1

0xddbb,	// (0x0004b33d) cam6_timer_pane_t1

0xddc9,	// (0x0004b34b) cam6_zoom_cont_pane

0xddd1,	// (0x0004b353) cam6_zoom_pane_g1

0xddd9,	// (0x0004b35b) cam6_zoom_pane_g2

0x86ef,	// (0x00045c71) cam6_zoom_pane_g3

0x0002,

0xfb6c,	// (0x0004d0ee) cam6_zoom_pane_g

0xcd13,	// (0x0004a295) cam6_battery_pane_g1

0xcd13,	// (0x0004a295) cam6_battery_pane_g2

0x0001,

0xf6d4,	// (0x0004cc56) cam6_battery_pane_g

0xdde1,	// (0x0004b363) cam6_zoom_cont_pane_g1

0xddea,	// (0x0004b36c) cam6_zoom_cont_pane_g2

0xddf3,	// (0x0004b375) cam6_zoom_cont_pane_g3

0x0002,

0xfb73,	// (0x0004d0f5) cam6_zoom_cont_pane_g

0x870c,	// (0x00045c8e) cam6_mode_pane_cp_ParamLimits

0x870c,	// (0x00045c8e) cam6_mode_pane_cp

0x86a7,	// (0x00045c29) cam6_zoom_pane_cp_ParamLimits

0x86a7,	// (0x00045c29) cam6_zoom_pane_cp

0x8720,	// (0x00045ca2) vid6_image_uncrop_cif_pane_ParamLimits

0x8720,	// (0x00045ca2) vid6_image_uncrop_cif_pane

0x874c,	// (0x00045cce) vid6_image_uncrop_nhd_pane_ParamLimits

0x874c,	// (0x00045cce) vid6_image_uncrop_nhd_pane

0x863b,	// (0x00045bbd) vid6_image_uncrop_vga_pane_ParamLimits

0x863b,	// (0x00045bbd) vid6_image_uncrop_vga_pane

0x8769,	// (0x00045ceb) vid6_image_uncrop_wvga_pane_ParamLimits

0x8769,	// (0x00045ceb) vid6_image_uncrop_wvga_pane

0x8786,	// (0x00045d08) vid6_indi_pane_ParamLimits

0x8786,	// (0x00045d08) vid6_indi_pane

0xdb4d,	// (0x0004b0cf) bg_tb_trans_pane_cp09_ParamLimits

0xdb4d,	// (0x0004b0cf) bg_tb_trans_pane_cp09

0xde0b,	// (0x0004b38d) cam6_battery_pane_cp_ParamLimits

0xde0b,	// (0x0004b38d) cam6_battery_pane_cp

0xde17,	// (0x0004b399) vid6_indi_pane_g1_ParamLimits

0xde17,	// (0x0004b399) vid6_indi_pane_g1

0xde29,	// (0x0004b3ab) vid6_indi_pane_g2_ParamLimits

0xde29,	// (0x0004b3ab) vid6_indi_pane_g2

0xde3b,	// (0x0004b3bd) vid6_indi_pane_g3_ParamLimits

0xde3b,	// (0x0004b3bd) vid6_indi_pane_g3

0xde50,	// (0x0004b3d2) vid6_indi_pane_g4_ParamLimits

0xde50,	// (0x0004b3d2) vid6_indi_pane_g4

0xde65,	// (0x0004b3e7) vid6_indi_pane_g5_ParamLimits

0xde65,	// (0x0004b3e7) vid6_indi_pane_g5

0x0004,

0xfb7a,	// (0x0004d0fc) vid6_indi_pane_g_ParamLimits

0xfb7a,	// (0x0004d0fc) vid6_indi_pane_g

0xde7f,	// (0x0004b401) vid6_indi_pane_t1_ParamLimits

0xde7f,	// (0x0004b401) vid6_indi_pane_t1

0xde95,	// (0x0004b417) vid6_indi_pane_t2_ParamLimits

0xde95,	// (0x0004b417) vid6_indi_pane_t2

0xdebd,	// (0x0004b43f) vid6_indi_pane_t3_ParamLimits

0xdebd,	// (0x0004b43f) vid6_indi_pane_t3

0xdee5,	// (0x0004b467) vid6_indi_pane_t4_ParamLimits

0xdee5,	// (0x0004b467) vid6_indi_pane_t4

0x0003,

0xfb85,	// (0x0004d107) vid6_indi_pane_t_ParamLimits

0xfb85,	// (0x0004d107) vid6_indi_pane_t

0xdf09,	// (0x0004b48b) wait_bar_pane_cp08

0x87a9,	// (0x00045d2b) main_cset_text2_pane_t1_ParamLimits

0x87a9,	// (0x00045d2b) main_cset_text2_pane_t1

0x86f7,	// (0x00045c79) listscroll_gen_pane_cp06_t1_ParamLimits

0x86f7,	// (0x00045c79) listscroll_gen_pane_cp06_t1

0xa12c,	// (0x000476ae) main_cam6_set_pane

0xcf58,	// (0x0004a4da) bg_tb_trans_pane_cp06_ParamLimits

0x733b,	// (0x000448bd) cam4_indicators_pane_g1_ParamLimits

0x734c,	// (0x000448ce) cam4_indicators_pane_g2_ParamLimits

0xf8f3,	// (0x0004ce75) cam4_indicators_pane_g_ParamLimits

0x7364,	// (0x000448e6) cam4_indicators_pane_t1_ParamLimits

0xaf98,	// (0x0004851a) bg_tb_trans_pane_cp07_ParamLimits

0x7415,	// (0x00044997) vid4_indicators_pane_g1_ParamLimits

0x7429,	// (0x000449ab) vid4_indicators_pane_g2_ParamLimits

0x743d,	// (0x000449bf) vid4_indicators_pane_g3_ParamLimits

0x744e,	// (0x000449d0) vid4_indicators_pane_g4_ParamLimits

0xf905,	// (0x0004ce87) vid4_indicators_pane_g_ParamLimits

0x746a,	// (0x000449ec) vid4_indicators_pane_t1_ParamLimits

0x8286,	// (0x00045808) vid4_progress_pane_g1_ParamLimits

0x8296,	// (0x00045818) vid4_progress_pane_g2_ParamLimits

0x82a6,	// (0x00045828) vid4_progress_pane_g3_ParamLimits

0x82b8,	// (0x0004583a) vid4_progress_pane_g4_ParamLimits

0xfab6,	// (0x0004d038) vid4_progress_pane_g_ParamLimits

0x82d0,	// (0x00045852) vid4_progress_pane_t1_ParamLimits

0x82e6,	// (0x00045868) vid4_progress_pane_t2_ParamLimits

0x82fb,	// (0x0004587d) vid4_progress_pane_t3_ParamLimits

0xfac1,	// (0x0004d043) vid4_progress_pane_t_ParamLimits

0x8311,	// (0x00045893) wait_bar_pane_cp07_ParamLimits

0x87e0,	// (0x00045d62) main_cam6_set_pane_g2_ParamLimits

0x87e0,	// (0x00045d62) main_cam6_set_pane_g2

0x87ec,	// (0x00045d6e) main_cset6_listscroll_pane_ParamLimits

0x87ec,	// (0x00045d6e) main_cset6_listscroll_pane

0x8817,	// (0x00045d99) main_cset6_slider_pane_ParamLimits

0x8817,	// (0x00045d99) main_cset6_slider_pane

0x8823,	// (0x00045da5) main_cset6_text2_pane_ParamLimits

0x8823,	// (0x00045da5) main_cset6_text2_pane

0xdf18,	// (0x0004b49a) main_cset6_text_pane

0xdf20,	// (0x0004b4a2) main_cset_list_pane_copy1_ParamLimits

0xdf20,	// (0x0004b4a2) main_cset_list_pane_copy1

0xdf30,	// (0x0004b4b2) scroll_pane_cp028_copy1

0x8836,	// (0x00045db8) cset_list_set_pane_copy1

0x884c,	// (0x00045dce) aid_position_infowindow_above_copy1

0x8854,	// (0x00045dd6) aid_position_infowindow_below_copy1

0x13a2,	// (0x0003e924) cset_list_set_pane_g1_copy1

0x10f1,	// (0x0003e673) cset_list_set_pane_g3_copy1_ParamLimits

0x10f1,	// (0x0003e673) cset_list_set_pane_g3_copy1

0x1100,	// (0x0003e682) cset_list_set_pane_t1_copy1_ParamLimits

0x1100,	// (0x0003e682) cset_list_set_pane_t1_copy1

0xaf98,	// (0x0004851a) list_highlight_pane_cp021_copy1_ParamLimits

0xaf98,	// (0x0004851a) list_highlight_pane_cp021_copy1

0xdf39,	// (0x0004b4bb) cset6_slider_pane_ParamLimits

0xdf39,	// (0x0004b4bb) cset6_slider_pane

0xdf65,	// (0x0004b4e7) main_cset6_slider_pane_g1_ParamLimits

0xdf65,	// (0x0004b4e7) main_cset6_slider_pane_g1

0x885c,	// (0x00045dde) main_cset6_slider_pane_g2_ParamLimits

0x885c,	// (0x00045dde) main_cset6_slider_pane_g2

0xdf8d,	// (0x0004b50f) main_cset6_slider_pane_g3_ParamLimits

0xdf8d,	// (0x0004b50f) main_cset6_slider_pane_g3

0x8884,	// (0x00045e06) main_cset6_slider_pane_g4_ParamLimits

0x8884,	// (0x00045e06) main_cset6_slider_pane_g4

0x8890,	// (0x00045e12) main_cset6_slider_pane_g5_ParamLimits

0x8890,	// (0x00045e12) main_cset6_slider_pane_g5

0xd7d8,	// (0x0004ad5a) main_cset6_slider_pane_g7_ParamLimits

0xd7d8,	// (0x0004ad5a) main_cset6_slider_pane_g7

0xd7e4,	// (0x0004ad66) main_cset6_slider_pane_g8_ParamLimits

0xd7e4,	// (0x0004ad66) main_cset6_slider_pane_g8

0x889e,	// (0x00045e20) main_cset6_slider_pane_g9_ParamLimits

0x889e,	// (0x00045e20) main_cset6_slider_pane_g9

0x88aa,	// (0x00045e2c) main_cset6_slider_pane_g10_ParamLimits

0x88aa,	// (0x00045e2c) main_cset6_slider_pane_g10

0x88b6,	// (0x00045e38) main_cset6_slider_pane_g11_ParamLimits

0x88b6,	// (0x00045e38) main_cset6_slider_pane_g11

0x88c2,	// (0x00045e44) main_cset6_slider_pane_g12_ParamLimits

0x88c2,	// (0x00045e44) main_cset6_slider_pane_g12

0xdb0f,	// (0x0004b091) main_cset6_slider_pane_g13_ParamLimits

0xdb0f,	// (0x0004b091) main_cset6_slider_pane_g13

0xdb1b,	// (0x0004b09d) main_cset6_slider_pane_g14_ParamLimits

0xdb1b,	// (0x0004b09d) main_cset6_slider_pane_g14

0x88ce,	// (0x00045e50) main_cset6_slider_pane_g15_ParamLimits

0x88ce,	// (0x00045e50) main_cset6_slider_pane_g15

0x88e6,	// (0x00045e68) main_cset6_slider_pane_g16_ParamLimits

0x88e6,	// (0x00045e68) main_cset6_slider_pane_g16

0x88f4,	// (0x00045e76) main_cset6_slider_pane_g17_ParamLimits

0x88f4,	// (0x00045e76) main_cset6_slider_pane_g17

0x0011,

0xfb8e,	// (0x0004d110) main_cset6_slider_pane_g_ParamLimits

0xfb8e,	// (0x0004d110) main_cset6_slider_pane_g

0xdfa5,	// (0x0004b527) main_cset6_slider_pane_t1_ParamLimits

0xdfa5,	// (0x0004b527) main_cset6_slider_pane_t1

0x890e,	// (0x00045e90) main_cset6_slider_pane_t2_ParamLimits

0x890e,	// (0x00045e90) main_cset6_slider_pane_t2

0x8939,	// (0x00045ebb) main_cset6_slider_pane_t3_ParamLimits

0x8939,	// (0x00045ebb) main_cset6_slider_pane_t3

0x8964,	// (0x00045ee6) main_cset6_slider_pane_t4_ParamLimits

0x8964,	// (0x00045ee6) main_cset6_slider_pane_t4

0x898f,	// (0x00045f11) main_cset6_slider_pane_t5_ParamLimits

0x898f,	// (0x00045f11) main_cset6_slider_pane_t5

0xdfe6,	// (0x0004b568) main_cset6_slider_pane_t7_ParamLimits

0xdfe6,	// (0x0004b568) main_cset6_slider_pane_t7

0x89bc,	// (0x00045f3e) main_cset6_slider_pane_t8_ParamLimits

0x89bc,	// (0x00045f3e) main_cset6_slider_pane_t8

0x89e0,	// (0x00045f62) main_cset6_slider_pane_t9_ParamLimits

0x89e0,	// (0x00045f62) main_cset6_slider_pane_t9

0x8a04,	// (0x00045f86) main_cset6_slider_pane_t10_ParamLimits

0x8a04,	// (0x00045f86) main_cset6_slider_pane_t10

0x8a28,	// (0x00045faa) main_cset6_slider_pane_t11_ParamLimits

0x8a28,	// (0x00045faa) main_cset6_slider_pane_t11

0xe01c,	// (0x0004b59e) main_cset6_slider_pane_t14_ParamLimits

0xe01c,	// (0x0004b59e) main_cset6_slider_pane_t14

0xe055,	// (0x0004b5d7) main_cset6_slider_pane_t15_ParamLimits

0xe055,	// (0x0004b5d7) main_cset6_slider_pane_t15

0x000b,

0xfbb3,	// (0x0004d135) main_cset6_slider_pane_t_ParamLimits

0xfbb3,	// (0x0004d135) main_cset6_slider_pane_t

0xd4da,	// (0x0004aa5c) cset_slider_pane_g1_copy1

0xdb5b,	// (0x0004b0dd) cset_slider_pane_g2_copy1

0xdb64,	// (0x0004b0e6) cset_slider_pane_g3_copy1

0xa12c,	// (0x000476ae) bg_popup_sub_pane_cp011_copy1

0xe08e,	// (0x0004b610) main_cset_text_pane_g1_copy1

0xd91c,	// (0x0004ae9e) main_cset_text_pane_t1_copy1

0xd92a,	// (0x0004aeac) main_cset_text_pane_t2_copy1

0xd938,	// (0x0004aeba) main_cset_text_pane_t3_copy1

0xd946,	// (0x0004aec8) main_cset_text_pane_t4_copy1

0xd954,	// (0x0004aed6) main_cset_text_pane_t5_copy1

0xe096,	// (0x0004b618) main_cset_text_pane_t6_copy1

0xe0a4,	// (0x0004b626) main_cset_text_pane_t7_copy1

0x8a4e,	// (0x00045fd0) main_cset_text2_pane_t1_copy1

0xaf98,	// (0x0004851a) main_ncimui_pane

0x52ca,	// (0x0004284c) popup_query_ncimui_window_ParamLimits

0x52ca,	// (0x0004284c) popup_query_ncimui_window

0x0f96,	// (0x0003e518) field_cale_ev2_pane_g4_ParamLimits

0x0f96,	// (0x0003e518) field_cale_ev2_pane_g4

0x6bc9,	// (0x0004414b) cell_video_dialer_keypad_pane_g2_ParamLimits

0x6bc9,	// (0x0004414b) cell_video_dialer_keypad_pane_g2

0x0001,

0xf88d,	// (0x0004ce0f) cell_video_dialer_keypad_pane_g_ParamLimits

0xf88d,	// (0x0004ce0f) cell_video_dialer_keypad_pane_g

0x6be1,	// (0x00044163) cell_video_dialer_keypad_pane_t1

0xa12c,	// (0x000476ae) bg_popup_window_pane_cp012

0xb185,	// (0x00048707) heading_pane_cp06

0xe0d0,	// (0x0004b652) ncim_query_content_pane

0xa12c,	// (0x000476ae) bg_popup_heading_pane_cp01

0xe0d8,	// (0x0004b65a) ncim_heading_pane_t1

0xe0e6,	// (0x0004b668) ncim_indicator_popup_pane

0xe0f8,	// (0x0004b67a) ncim_query_button_pane

0xe10c,	// (0x0004b68e) ncim_query_content_pane_t1

0xe11e,	// (0x0004b6a0) ncim_query_content_pane_t2

0x0005,

0xfbf7,	// (0x0004d179) ncim_query_content_pane_t

0xe158,	// (0x0004b6da) ncim_query_list_pane

0xe16a,	// (0x0004b6ec) ncim_query_popup_pane

0xe0e6,	// (0x0004b668) ncim_indicator_popup_pane_ParamLimits

0x8ba2,	// (0x00046124) ncim_query_content_pane_g1_ParamLimits

0x8ba2,	// (0x00046124) ncim_query_content_pane_g1

0xe10c,	// (0x0004b68e) ncim_query_content_pane_t1_ParamLimits

0xe11e,	// (0x0004b6a0) ncim_query_content_pane_t2_ParamLimits

0x8bae,	// (0x00046130) ncim_query_content_pane_t3_ParamLimits

0x8bae,	// (0x00046130) ncim_query_content_pane_t3

0x8bcb,	// (0x0004614d) ncim_query_content_pane_t4_ParamLimits

0x8bcb,	// (0x0004614d) ncim_query_content_pane_t4

0x8be8,	// (0x0004616a) ncim_query_content_pane_t5_ParamLimits

0x8be8,	// (0x0004616a) ncim_query_content_pane_t5

0xe130,	// (0x0004b6b2) ncim_query_content_pane_t6_ParamLimits

0xe130,	// (0x0004b6b2) ncim_query_content_pane_t6

0xfbf7,	// (0x0004d179) ncim_query_content_pane_t_ParamLimits

0xe158,	// (0x0004b6da) ncim_query_list_pane_ParamLimits

0xe16a,	// (0x0004b6ec) ncim_query_popup_pane_ParamLimits

0xe17e,	// (0x0004b700) wait_bar_pane_cp04

0xa12c,	// (0x000476ae) input_focus_pane_cp011

0xe186,	// (0x0004b708) ncim_query_popup_pane_t1

0xe194,	// (0x0004b716) ncim_list_query_list_pane_ParamLimits

0xe194,	// (0x0004b716) ncim_list_query_list_pane

0xa12c,	// (0x000476ae) bg_button_pane_cp027

0xe1a1,	// (0x0004b723) ncim_query_button_pane_g1

0xa12c,	// (0x000476ae) list_highlight_pane_cp012

0xe1ab,	// (0x0004b72d) ncim_list_query_list_pane_g1

0xe1b3,	// (0x0004b735) ncim_list_query_list_pane_t1

0x7358,	// (0x000448da) cam4_indicators_pane_g3_ParamLimits

0x7358,	// (0x000448da) cam4_indicators_pane_g3

0x745a,	// (0x000449dc) vid4_indicators_pane_g5_ParamLimits

0x745a,	// (0x000449dc) vid4_indicators_pane_g5

0x82c4,	// (0x00045846) vid4_progress_pane_g5_ParamLimits

0x82c4,	// (0x00045846) vid4_progress_pane_g5

0x8a8e,	// (0x00046010) main_ncimui_pane_g1

0x8af6,	// (0x00046078) ncimui_group_query_pane_ParamLimits

0x8af6,	// (0x00046078) ncimui_group_query_pane

0x8b3e,	// (0x000460c0) ncimui_list_pane_ParamLimits

0x8b3e,	// (0x000460c0) ncimui_list_pane

0x8b65,	// (0x000460e7) ncimui_text_pane_ParamLimits

0x8b65,	// (0x000460e7) ncimui_text_pane

0x8c05,	// (0x00046187) ncimui_text_pane_t1_ParamLimits

0x8c05,	// (0x00046187) ncimui_text_pane_t1

0xe1c1,	// (0x0004b743) ncimui_list_single_graphic_pane_ParamLimits

0xe1c1,	// (0x0004b743) ncimui_list_single_graphic_pane

0x8c24,	// (0x000461a6) ncimui_query_pane_ParamLimits

0x8c24,	// (0x000461a6) ncimui_query_pane

0xa12c,	// (0x000476ae) list_highlight_pane_cp013

0xe1d1,	// (0x0004b753) ncim_list_query_list_pane_t1_copy1

0xe1df,	// (0x0004b761) ncim_list_single_graphic_pane_g1

0x8c37,	// (0x000461b9) ncim_query_button_pane_cp01

0x8c43,	// (0x000461c5) ncim_query_entry_pane_ParamLimits

0x8c43,	// (0x000461c5) ncim_query_entry_pane

0x8c56,	// (0x000461d8) ncimui_query_pane_g1

0x8c62,	// (0x000461e4) ncimui_query_pane_t1_ParamLimits

0x8c62,	// (0x000461e4) ncimui_query_pane_t1

0xaf98,	// (0x0004851a) input_focus_pane_cp012

0xe1e7,	// (0x0004b769) ncim_query_entry_pane_t1

0xa88b,	// (0x00047e0d) main_im_pane_ParamLimits

0xaf98,	// (0x0004851a) main_mobtv_pane_ParamLimits

0xaf98,	// (0x0004851a) main_mobtv_pane

0x8902,	// (0x00045e84) main_cset6_slider_pane_g18_ParamLimits

0x8902,	// (0x00045e84) main_cset6_slider_pane_g18

0xdf99,	// (0x0004b51b) main_cset6_slider_pane_g19_ParamLimits

0xdf99,	// (0x0004b51b) main_cset6_slider_pane_g19

0xd689,	// (0x0004ac0b) bg_main_mobtv_pane_ParamLimits

0xd689,	// (0x0004ac0b) bg_main_mobtv_pane

0x8c7b,	// (0x000461fd) main_mobtv_info_pane

0x8c86,	// (0x00046208) main_mobtv_loading_pane_ParamLimits

0x8c86,	// (0x00046208) main_mobtv_loading_pane

0xe1f9,	// (0x0004b77b) main_mobtv_pg_channel_list_pane

0xe203,	// (0x0004b785) main_mobtv_pg_hdr_pane

0x8c93,	// (0x00046215) main_mobtv_programe_curr_pane_ParamLimits

0x8c93,	// (0x00046215) main_mobtv_programe_curr_pane

0x8ca0,	// (0x00046222) main_mobtv_programe_next_pane_ParamLimits

0x8ca0,	// (0x00046222) main_mobtv_programe_next_pane

0xe20c,	// (0x0004b78e) popup_mobtv_noti_window

0xcd13,	// (0x0004a295) main_tv_pg_hdr_pane_g1

0xe214,	// (0x0004b796) main_tv_pg_hdr_pane_g2

0xe21c,	// (0x0004b79e) main_tv_pg_hdr_pane_g3

0xe224,	// (0x0004b7a6) main_tv_pg_hdr_pane_g4

0xe22c,	// (0x0004b7ae) main_tv_pg_hdr_pane_g5

0xe236,	// (0x0004b7b8) main_tv_pg_hdr_pane_g6

0xe240,	// (0x0004b7c2) main_tv_pg_hdr_pane_g7

0xe24a,	// (0x0004b7cc) main_tv_pg_hdr_pane_g8

0xe254,	// (0x0004b7d6) main_tv_pg_hdr_pane_g9

0xe25e,	// (0x0004b7e0) main_tv_pg_hdr_pane_g10

0xe268,	// (0x0004b7ea) main_tv_pg_hdr_pane_g11

0x000a,

0xfc04,	// (0x0004d186) main_tv_pg_hdr_pane_g

0xe272,	// (0x0004b7f4) main_tv_pg_hdr_pane_t1

0xe280,	// (0x0004b802) main_tv_pg_hdr_pane_t2

0xe28e,	// (0x0004b810) main_tv_pg_hdr_pane_t3

0xe29e,	// (0x0004b820) main_tv_pg_hdr_pane_t4

0xe2ae,	// (0x0004b830) main_tv_pg_hdr_pane_t5

0x0004,

0xfc1b,	// (0x0004d19d) main_tv_pg_hdr_pane_t

0xe2be,	// (0x0004b840) single_mobtv_pg_channel_pane_ParamLimits

0xe2be,	// (0x0004b840) single_mobtv_pg_channel_pane

0xe2d0,	// (0x0004b852) single_mobtv_pg_channel_table_pane

0xadac,	// (0x0004832e) single_mobtv_pg_channel_thumb_pane

0xe2d9,	// (0x0004b85b) single_tv_pg_channel_pane_g1

0xe2e2,	// (0x0004b864) single_tv_pg_channel_pane_g2

0x0001,

0xfc26,	// (0x0004d1a8) single_tv_pg_channel_pane_g

0xcf58,	// (0x0004a4da) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xcf58,	// (0x0004a4da) bg_single_mobtv_pg_channel_thumb_pane

0xe2eb,	// (0x0004b86d) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xe2eb,	// (0x0004b86d) single_mobtv_pg_channel_thumb_pane_g1

0xe2f9,	// (0x0004b87b) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xe2f9,	// (0x0004b87b) single_mobtv_pg_channel_thumb_pane_g2

0xe305,	// (0x0004b887) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xe305,	// (0x0004b887) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfc2b,	// (0x0004d1ad) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfc2b,	// (0x0004d1ad) single_mobtv_pg_channel_thumb_pane_g

0xe311,	// (0x0004b893) single_mobtv_pg_channel_thumb_pane_t1

0xe31f,	// (0x0004b8a1) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc32,	// (0x0004d1b4) single_mobtv_pg_channel_thumb_pane_t

0xcd13,	// (0x0004a295) bg_single_mobtv_pg_channel_table_pane_g1

0xcd13,	// (0x0004a295) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf6d4,	// (0x0004cc56) bg_single_mobtv_pg_channel_table_pane_g

0xe32d,	// (0x0004b8af) single_mobtv_pg_channel_table_pane_t1

0xe33b,	// (0x0004b8bd) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc37,	// (0x0004d1b9) single_mobtv_pg_channel_table_pane_t

0x8cb5,	// (0x00046237) main_mobtv_info_pane_g1_ParamLimits

0x8cb5,	// (0x00046237) main_mobtv_info_pane_g1

0x8cd1,	// (0x00046253) main_mobtv_info_pane_t1_ParamLimits

0x8cd1,	// (0x00046253) main_mobtv_info_pane_t1

0x8d49,	// (0x000462cb) main_mobtv_info_pane_t2_ParamLimits

0x8d49,	// (0x000462cb) main_mobtv_info_pane_t2

0x0002,

0xfc41,	// (0x0004d1c3) main_mobtv_info_pane_t_ParamLimits

0xfc41,	// (0x0004d1c3) main_mobtv_info_pane_t

0x8dd8,	// (0x0004635a) wait_bar_pane_cp05

0x8dea,	// (0x0004636c) main_mobtv_loading_pane_g1_ParamLimits

0x8dea,	// (0x0004636c) main_mobtv_loading_pane_g1

0x8df8,	// (0x0004637a) main_mobtv_loading_pane_g2_ParamLimits

0x8df8,	// (0x0004637a) main_mobtv_loading_pane_g2

0x8e04,	// (0x00046386) main_mobtv_loading_pane_g3_ParamLimits

0x8e04,	// (0x00046386) main_mobtv_loading_pane_g3

0x0002,

0xfc48,	// (0x0004d1ca) main_mobtv_loading_pane_g_ParamLimits

0xfc48,	// (0x0004d1ca) main_mobtv_loading_pane_g

0xe349,	// (0x0004b8cb) main_mobtv_loading_pane_t1_ParamLimits

0xe349,	// (0x0004b8cb) main_mobtv_loading_pane_t1

0xe361,	// (0x0004b8e3) main_mobtv_loading_pane_t2_ParamLimits

0xe361,	// (0x0004b8e3) main_mobtv_loading_pane_t2

0x0001,

0xfc4f,	// (0x0004d1d1) main_mobtv_loading_pane_t_ParamLimits

0xfc4f,	// (0x0004d1d1) main_mobtv_loading_pane_t

0x8e12,	// (0x00046394) wait_bar_pane_cp06_ParamLimits

0x8e12,	// (0x00046394) wait_bar_pane_cp06

0xe385,	// (0x0004b907) main_mobtv_programe_curr_pane_t1

0xe393,	// (0x0004b915) main_mobtv_programe_curr_pane_t2

0x0001,

0xfc54,	// (0x0004d1d6) main_mobtv_programe_curr_pane_t

0xe3a1,	// (0x0004b923) main_mobtv_programe_next_pane_t1

0xe3af,	// (0x0004b931) main_mobtv_programe_next_pane_t2

0xe3bd,	// (0x0004b93f) main_mobtv_programe_next_pane_t3

0x0002,

0xfc59,	// (0x0004d1db) main_mobtv_programe_next_pane_t

0xa12c,	// (0x000476ae) bg_popup_mobtv_noti_window_pane

0xe3cb,	// (0x0004b94d) popup_mobtv_noti_window_g1

0xe3d3,	// (0x0004b955) popup_mobtv_noti_window_t1

0xe3e1,	// (0x0004b963) popup_mobtv_noti_window_t2

0x0001,

0xfc60,	// (0x0004d1e2) popup_mobtv_noti_window_t

0xcd13,	// (0x0004a295) bg_popup_mobtv_noti_window_pane_g1

0xa12c,	// (0x000476ae) sc_clock_pane

0xa12c,	// (0x000476ae) main_fs_bigclock_pane

0x84cc,	// (0x00045a4e) blid2_tripm_pane_t4_ParamLimits

0x84cc,	// (0x00045a4e) blid2_tripm_pane_t4

0x8e1e,	// (0x000463a0) sc_clock_pane_g1_ParamLimits

0x8e1e,	// (0x000463a0) sc_clock_pane_g1

0x8e2c,	// (0x000463ae) sc_clock_pane_t1_ParamLimits

0x8e2c,	// (0x000463ae) sc_clock_pane_t1

0x8e3f,	// (0x000463c1) sc_clock_pane_t2_ParamLimits

0x8e3f,	// (0x000463c1) sc_clock_pane_t2

0x8e51,	// (0x000463d3) sc_clock_pane_t3_ParamLimits

0x8e51,	// (0x000463d3) sc_clock_pane_t3

0x0004,

0xfc65,	// (0x0004d1e7) sc_clock_pane_t_ParamLimits

0xfc65,	// (0x0004d1e7) sc_clock_pane_t

0x9728,	// (0x00046caa) main_fs_bigclock_indicator_pane_ParamLimits

0x9728,	// (0x00046caa) main_fs_bigclock_indicator_pane

0x8ed4,	// (0x00046456) main_fs_bigclock_pane_g1_ParamLimits

0x8ed4,	// (0x00046456) main_fs_bigclock_pane_g1

0x9734,	// (0x00046cb6) main_fs_bigclock_pane_t1_ParamLimits

0x9734,	// (0x00046cb6) main_fs_bigclock_pane_t1

0x9746,	// (0x00046cc8) main_fs_bigclock_pane_t2_ParamLimits

0x9746,	// (0x00046cc8) main_fs_bigclock_pane_t2

0x975a,	// (0x00046cdc) main_fs_bigclock_pane_t3_ParamLimits

0x975a,	// (0x00046cdc) main_fs_bigclock_pane_t3

0x0002,

0xfe73,	// (0x0004d3f5) main_fs_bigclock_pane_t_ParamLimits

0xfe73,	// (0x0004d3f5) main_fs_bigclock_pane_t

0xec60,	// (0x0004c1e2) main_fs_bigclock_indicator_pane_g1

0xe100,	// (0x0004b682) ncim_query_content_pane_g2_ParamLimits

0xe100,	// (0x0004b682) ncim_query_content_pane_g2

0x0001,

0xfbf2,	// (0x0004d174) ncim_query_content_pane_g_ParamLimits

0xfbf2,	// (0x0004d174) ncim_query_content_pane_g

0x8e65,	// (0x000463e7) sc_clock_pane_t4_ParamLimits

0x8e65,	// (0x000463e7) sc_clock_pane_t4

0xaf98,	// (0x0004851a) main_radioblah_pane

0x71fe,	// (0x00044780) cell_call4_button_pane_t1_copy1_ParamLimits

0x71fe,	// (0x00044780) cell_call4_button_pane_t1_copy1

0x8aa8,	// (0x0004602a) main_ncimui_pane_t1_ParamLimits

0x8aa8,	// (0x0004602a) main_ncimui_pane_t1

0x8ac2,	// (0x00046044) main_ncimui_pane_t2_ParamLimits

0x8ac2,	// (0x00046044) main_ncimui_pane_t2

0x0002,

0xfbeb,	// (0x0004d16d) main_ncimui_pane_t_ParamLimits

0xfbeb,	// (0x0004d16d) main_ncimui_pane_t

0xe527,	// (0x0004baa9) main_radioblah_anim_pane_ParamLimits

0xe527,	// (0x0004baa9) main_radioblah_anim_pane

0xe538,	// (0x0004baba) main_radioblah_info_pane_ParamLimits

0xe538,	// (0x0004baba) main_radioblah_info_pane

0xe54c,	// (0x0004bace) main_radioblah_pane_t1_ParamLimits

0xe54c,	// (0x0004bace) main_radioblah_pane_t1

0xe568,	// (0x0004baea) main_radioblah_pane_t2_ParamLimits

0xe568,	// (0x0004baea) main_radioblah_pane_t2

0x0003,

0xfc86,	// (0x0004d208) main_radioblah_pane_t_ParamLimits

0xfc86,	// (0x0004d208) main_radioblah_pane_t

0x8f2a,	// (0x000464ac) main_radioblah_rocker_ctrl_pane_ParamLimits

0x8f2a,	// (0x000464ac) main_radioblah_rocker_ctrl_pane

0xe5b0,	// (0x0004bb32) main_radioblah_info_pane_t1_ParamLimits

0xe5b0,	// (0x0004bb32) main_radioblah_info_pane_t1

0x8f6f,	// (0x000464f1) main_radioblah_info_pane_t2_ParamLimits

0x8f6f,	// (0x000464f1) main_radioblah_info_pane_t2

0x0003,

0xfc8f,	// (0x0004d211) main_radioblah_info_pane_t_ParamLimits

0xfc8f,	// (0x0004d211) main_radioblah_info_pane_t

0xcd13,	// (0x0004a295) main_radioblah_rocker_ctrl_pane_g1

0x901f,	// (0x000465a1) main_radioblah_rocker_ctrl_pane_g2

0x9027,	// (0x000465a9) main_radioblah_rocker_ctrl_pane_g3

0x902f,	// (0x000465b1) main_radioblah_rocker_ctrl_pane_g4

0x9037,	// (0x000465b9) main_radioblah_rocker_ctrl_pane_g5

0x903f,	// (0x000465c1) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfc98,	// (0x0004d21a) main_radioblah_rocker_ctrl_pane_g

0x8a4e,	// (0x00045fd0) main_cset_text2_pane_t1_copy1_ParamLimits

0x7289,	// (0x0004480b) cam4_image_uncrop_qvga_pane

0x73ca,	// (0x0004494c) vid4_image_uncrop_qcif_pane

0x865a,	// (0x00045bdc) cam6_image_uncrop_qvga_pane_ParamLimits

0x865a,	// (0x00045bdc) cam6_image_uncrop_qvga_pane

0xddfb,	// (0x0004b37d) vid6_image_uncrop_qcif_pane_ParamLimits

0xddfb,	// (0x0004b37d) vid6_image_uncrop_qcif_pane

0xa12c,	// (0x000476ae) bg_popup_preview_window_pane_cp03

0xe0b2,	// (0x0004b634) list_cset_text2_pane

0xe0ba,	// (0x0004b63c) main_cset6_text2_pane_g1

0xe0c2,	// (0x0004b644) main_cset6_text2_pane_t1

0x9047,	// (0x000465c9) list_cset_text2_pane_t1_ParamLimits

0x9047,	// (0x000465c9) list_cset_text2_pane_t1

0xaf98,	// (0x0004851a) main_radioblah_pane_ParamLimits

0x8dc4,	// (0x00046346) main_mobtv_info_pane_t3_ParamLimits

0x8dc4,	// (0x00046346) main_mobtv_info_pane_t3

0x8f18,	// (0x0004649a) main_radioblah_pane_g1

0x8f43,	// (0x000464c5) main_radioblah_info_pane_g1

0x8fc4,	// (0x00046546) main_radioblah_info_pane_t3_ParamLimits

0x8fc4,	// (0x00046546) main_radioblah_info_pane_t3

0x4101,	// (0x00041683) highlight_cell_cale_month_pane_ParamLimits

0x4101,	// (0x00041683) highlight_cell_cale_month_pane

0xa12c,	// (0x000476ae) main_phob_fisheye_pane

0xd034,	// (0x0004a5b6) scroll_pane_cp0031_ParamLimits

0xd034,	// (0x0004a5b6) scroll_pane_cp0031

0xdf09,	// (0x0004b48b) wait_bar_pane_cp08_ParamLimits

0x8836,	// (0x00045db8) cset_list_set_pane_copy1_ParamLimits

0xe5ea,	// (0x0004bb6c) highlight_cell_cale_month_pane_g1

0x9068,	// (0x000465ea) highlight_cell_cale_month_pane_t1

0xdbb5,	// (0x0004b137) list_gen_pane_cp01

0xd7c3,	// (0x0004ad45) scroll_pane_01

0x9076,	// (0x000465f8) list_single_double_fisheye_pane

0x1480,	// (0x0003ea02) list_double_fisheye_pane_g1_ParamLimits

0x1480,	// (0x0003ea02) list_double_fisheye_pane_g1

0x148c,	// (0x0003ea0e) list_double_fisheye_pane_g2_ParamLimits

0x148c,	// (0x0003ea0e) list_double_fisheye_pane_g2

0x907f,	// (0x00046601) list_double_fisheye_pane_g3_ParamLimits

0x907f,	// (0x00046601) list_double_fisheye_pane_g3

0x0004,

0xfca5,	// (0x0004d227) list_double_fisheye_pane_g_ParamLimits

0xfca5,	// (0x0004d227) list_double_fisheye_pane_g

0x14bd,	// (0x0003ea3f) list_double_fisheye_pane_t1_ParamLimits

0x14bd,	// (0x0003ea3f) list_double_fisheye_pane_t1

0x14d8,	// (0x0003ea5a) list_double_fisheye_pane_t2_ParamLimits

0x14d8,	// (0x0003ea5a) list_double_fisheye_pane_t2

0x0001,

0xfcb0,	// (0x0004d232) list_double_fisheye_pane_t_ParamLimits

0xfcb0,	// (0x0004d232) list_double_fisheye_pane_t

0xa12c,	// (0x000476ae) main_call5_pane

0x8e8b,	// (0x0004640d) sc_swipe_pane_ParamLimits

0x8e8b,	// (0x0004640d) sc_swipe_pane

0x9097,	// (0x00046619) call5_image_pane_ParamLimits

0x9097,	// (0x00046619) call5_image_pane

0x90a7,	// (0x00046629) call5_swipe_1_pane_ParamLimits

0x90a7,	// (0x00046629) call5_swipe_1_pane

0x90b3,	// (0x00046635) call5_swipe_2_pane_ParamLimits

0x90b3,	// (0x00046635) call5_swipe_2_pane

0x90cd,	// (0x0004664f) popup_call5_audio_first_window_ParamLimits

0x90cd,	// (0x0004664f) popup_call5_audio_first_window

0xcf58,	// (0x0004a4da) call5_swipe_1_pane_g1_ParamLimits

0xcf58,	// (0x0004a4da) call5_swipe_1_pane_g1

0xe5f2,	// (0x0004bb74) call5_swipe_1_pane_g2_ParamLimits

0xe5f2,	// (0x0004bb74) call5_swipe_1_pane_g2

0x0001,

0xfcb5,	// (0x0004d237) call5_swipe_1_pane_g_ParamLimits

0xfcb5,	// (0x0004d237) call5_swipe_1_pane_g

0xe5fe,	// (0x0004bb80) call5_swipe_1_pane_t1_ParamLimits

0xe5fe,	// (0x0004bb80) call5_swipe_1_pane_t1

0xcf58,	// (0x0004a4da) call5_swipe_2_pane_g1_ParamLimits

0xcf58,	// (0x0004a4da) call5_swipe_2_pane_g1

0xe613,	// (0x0004bb95) call5_swipe_2_pane_g2_ParamLimits

0xe613,	// (0x0004bb95) call5_swipe_2_pane_g2

0x0001,

0xfcba,	// (0x0004d23c) call5_swipe_2_pane_g_ParamLimits

0xfcba,	// (0x0004d23c) call5_swipe_2_pane_g

0xe61f,	// (0x0004bba1) call5_swipe_2_pane_t1_ParamLimits

0xe61f,	// (0x0004bba1) call5_swipe_2_pane_t1

0xe634,	// (0x0004bbb6) sc_swipe_pane_g1_ParamLimits

0xe634,	// (0x0004bbb6) sc_swipe_pane_g1

0xe641,	// (0x0004bbc3) sc_swipe_pane_g2_ParamLimits

0xe641,	// (0x0004bbc3) sc_swipe_pane_g2

0x0001,

0xfcbf,	// (0x0004d241) sc_swipe_pane_g_ParamLimits

0xfcbf,	// (0x0004d241) sc_swipe_pane_g

0xe64d,	// (0x0004bbcf) sc_swipe_pane_t1_ParamLimits

0xe64d,	// (0x0004bbcf) sc_swipe_pane_t1

0xa12c,	// (0x000476ae) main_cmail_launcher_pane

0x90db,	// (0x0004665d) aid_size_cell_cmail_l_ParamLimits

0x90db,	// (0x0004665d) aid_size_cell_cmail_l

0x90e9,	// (0x0004666b) grid_cmail_l_pane_ParamLimits

0x90e9,	// (0x0004666b) grid_cmail_l_pane

0x90f9,	// (0x0004667b) cell_cmail_l_pane_ParamLimits

0x90f9,	// (0x0004667b) cell_cmail_l_pane

0xe662,	// (0x0004bbe4) cell_cmail_l_pane_g1_ParamLimits

0xe662,	// (0x0004bbe4) cell_cmail_l_pane_g1

0xe66e,	// (0x0004bbf0) cell_cmail_l_pane_t1_ParamLimits

0xe66e,	// (0x0004bbf0) cell_cmail_l_pane_t1

0xe684,	// (0x0004bc06) cell_cmail_l_pane_t2_ParamLimits

0xe684,	// (0x0004bc06) cell_cmail_l_pane_t2

0x0001,

0xfcc4,	// (0x0004d246) cell_cmail_l_pane_t_ParamLimits

0xfcc4,	// (0x0004d246) cell_cmail_l_pane_t

0xaf98,	// (0x0004851a) grid_highlight_pane_cp018_ParamLimits

0xaf98,	// (0x0004851a) grid_highlight_pane_cp018

0x2161,	// (0x0003f6e3) main2_pane_ParamLimits

0x2161,	// (0x0003f6e3) main2_pane

0xa924,	// (0x00047ea6) popup_sp_fs_action_menu_bg_pane_g1

0xa92c,	// (0x00047eae) popup_sp_fs_action_menu_bg_pane_g2

0xa934,	// (0x00047eb6) popup_sp_fs_action_menu_bg_pane_g3

0xa93c,	// (0x00047ebe) popup_sp_fs_action_menu_bg_pane_g4

0xa944,	// (0x00047ec6) popup_sp_fs_action_menu_bg_pane_g5

0xa94c,	// (0x00047ece) popup_sp_fs_action_menu_bg_pane_g6

0xa954,	// (0x00047ed6) popup_sp_fs_action_menu_bg_pane_g7

0xa95c,	// (0x00047ede) popup_sp_fs_action_menu_bg_pane_g8

0xa964,	// (0x00047ee6) popup_sp_fs_action_menu_bg_pane_g9

0xa96c,	// (0x00047eee) popup_sp_fs_action_menu_bg_pane_g10

0xa96c,	// (0x00047eee) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf16f,	// (0x0004c6f1) popup_sp_fs_action_menu_bg_pane_g

0x0c33,	// (0x0003e1b5) list_medium_line_x2_t3_g3_g1_ParamLimits

0x0c33,	// (0x0003e1b5) list_medium_line_x2_t3_g3_g1

0x0c3f,	// (0x0003e1c1) list_medium_line_x2_t3_g3_g2_ParamLimits

0x0c3f,	// (0x0003e1c1) list_medium_line_x2_t3_g3_g2

0x0c4b,	// (0x0003e1cd) list_medium_line_x2_t3_g3_g3_ParamLimits

0x0c4b,	// (0x0003e1cd) list_medium_line_x2_t3_g3_g3

0x0002,

0xf21d,	// (0x0004c79f) list_medium_line_x2_t3_g3_g_ParamLimits

0xf21d,	// (0x0004c79f) list_medium_line_x2_t3_g3_g

0x0c57,	// (0x0003e1d9) list_medium_line_x2_t3_g3_t1_ParamLimits

0x0c57,	// (0x0003e1d9) list_medium_line_x2_t3_g3_t1

0x0c6c,	// (0x0003e1ee) list_medium_line_x2_t3_g3_t2_ParamLimits

0x0c6c,	// (0x0003e1ee) list_medium_line_x2_t3_g3_t2

0x0c7e,	// (0x0003e200) list_medium_line_x2_t3_g3_t3_ParamLimits

0x0c7e,	// (0x0003e200) list_medium_line_x2_t3_g3_t3

0x0002,

0xf224,	// (0x0004c7a6) list_medium_line_x2_t3_g3_t_ParamLimits

0xf224,	// (0x0004c7a6) list_medium_line_x2_t3_g3_t

0x0c33,	// (0x0003e1b5) list_medium_line_x2_t3_g2_g1_ParamLimits

0x0c33,	// (0x0003e1b5) list_medium_line_x2_t3_g2_g1

0x0c4b,	// (0x0003e1cd) list_medium_line_x2_t3_g2_g2_ParamLimits

0x0c4b,	// (0x0003e1cd) list_medium_line_x2_t3_g2_g2

0x0001,

0xf22b,	// (0x0004c7ad) list_medium_line_x2_t3_g2_g_ParamLimits

0xf22b,	// (0x0004c7ad) list_medium_line_x2_t3_g2_g

0x0c93,	// (0x0003e215) list_medium_line_x2_t3_g2_t1_ParamLimits

0x0c93,	// (0x0003e215) list_medium_line_x2_t3_g2_t1

0x0ca8,	// (0x0003e22a) list_medium_line_x2_t3_g2_t2_ParamLimits

0x0ca8,	// (0x0003e22a) list_medium_line_x2_t3_g2_t2

0x0cba,	// (0x0003e23c) list_medium_line_x2_t3_g2_t3_ParamLimits

0x0cba,	// (0x0003e23c) list_medium_line_x2_t3_g2_t3

0x0002,

0xf230,	// (0x0004c7b2) list_medium_line_x2_t3_g2_t_ParamLimits

0xf230,	// (0x0004c7b2) list_medium_line_x2_t3_g2_t

0x0c33,	// (0x0003e1b5) list_medium_line_x2_t4_g4_g1_ParamLimits

0x0c33,	// (0x0003e1b5) list_medium_line_x2_t4_g4_g1

0x0cd8,	// (0x0003e25a) list_medium_line_x2_t4_g4_g2_ParamLimits

0x0cd8,	// (0x0003e25a) list_medium_line_x2_t4_g4_g2

0x0c3f,	// (0x0003e1c1) list_medium_line_x2_t4_g4_g3_ParamLimits

0x0c3f,	// (0x0003e1c1) list_medium_line_x2_t4_g4_g3

0x0ce4,	// (0x0003e266) list_medium_line_x2_t4_g4_g4_ParamLimits

0x0ce4,	// (0x0003e266) list_medium_line_x2_t4_g4_g4

0x0003,

0xf237,	// (0x0004c7b9) list_medium_line_x2_t4_g4_g_ParamLimits

0xf237,	// (0x0004c7b9) list_medium_line_x2_t4_g4_g

0x0cf0,	// (0x0003e272) list_medium_line_x2_t4_g4_t1_ParamLimits

0x0cf0,	// (0x0003e272) list_medium_line_x2_t4_g4_t1

0x0d0a,	// (0x0003e28c) list_medium_line_x2_t4_g4_t2_ParamLimits

0x0d0a,	// (0x0003e28c) list_medium_line_x2_t4_g4_t2

0x0d20,	// (0x0003e2a2) list_medium_line_x2_t4_g4_t3_ParamLimits

0x0d20,	// (0x0003e2a2) list_medium_line_x2_t4_g4_t3

0x0d35,	// (0x0003e2b7) list_medium_line_x2_t4_g4_t4_ParamLimits

0x0d35,	// (0x0003e2b7) list_medium_line_x2_t4_g4_t4

0x0003,

0xf240,	// (0x0004c7c2) list_medium_line_x2_t4_g4_t_ParamLimits

0xf240,	// (0x0004c7c2) list_medium_line_x2_t4_g4_t

0x0c33,	// (0x0003e1b5) list_medium_line_x2_t2_g4_g1_ParamLimits

0x0c33,	// (0x0003e1b5) list_medium_line_x2_t2_g4_g1

0x0cd8,	// (0x0003e25a) list_medium_line_x2_t2_g4_g2_ParamLimits

0x0cd8,	// (0x0003e25a) list_medium_line_x2_t2_g4_g2

0x0c3f,	// (0x0003e1c1) list_medium_line_x2_t2_g4_g3_ParamLimits

0x0c3f,	// (0x0003e1c1) list_medium_line_x2_t2_g4_g3

0x0c4b,	// (0x0003e1cd) list_medium_line_x2_t2_g4_g4_ParamLimits

0x0c4b,	// (0x0003e1cd) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2a7,	// (0x0004c829) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2a7,	// (0x0004c829) list_medium_line_x2_t2_g4_g

0x0d47,	// (0x0003e2c9) list_medium_line_x2_t2_g4_t1_ParamLimits

0x0d47,	// (0x0003e2c9) list_medium_line_x2_t2_g4_t1

0x0c7e,	// (0x0003e200) list_medium_line_x2_t2_g4_t2_ParamLimits

0x0c7e,	// (0x0003e200) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2b0,	// (0x0004c832) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2b0,	// (0x0004c832) list_medium_line_x2_t2_g4_t

0x0c33,	// (0x0003e1b5) list_medium_line_x2_t2_g3_g1_ParamLimits

0x0c33,	// (0x0003e1b5) list_medium_line_x2_t2_g3_g1

0x0c3f,	// (0x0003e1c1) list_medium_line_x2_t2_g3_g2_ParamLimits

0x0c3f,	// (0x0003e1c1) list_medium_line_x2_t2_g3_g2

0x0c4b,	// (0x0003e1cd) list_medium_line_x2_t2_g3_g3_ParamLimits

0x0c4b,	// (0x0003e1cd) list_medium_line_x2_t2_g3_g3

0x0002,

0xf21d,	// (0x0004c79f) list_medium_line_x2_t2_g3_g_ParamLimits

0xf21d,	// (0x0004c79f) list_medium_line_x2_t2_g3_g

0x0d5c,	// (0x0003e2de) list_medium_line_x2_t2_g3_t1_ParamLimits

0x0d5c,	// (0x0003e2de) list_medium_line_x2_t2_g3_t1

0x0c7e,	// (0x0003e200) list_medium_line_x2_t2_g3_t2_ParamLimits

0x0c7e,	// (0x0003e200) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2b5,	// (0x0004c837) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2b5,	// (0x0004c837) list_medium_line_x2_t2_g3_t

0x42e2,	// (0x00041864) main_sp_fs_list_pane_ParamLimits

0x42e2,	// (0x00041864) main_sp_fs_list_pane

0x42ee,	// (0x00041870) sp_fs_scroll_pane_ParamLimits

0x42ee,	// (0x00041870) sp_fs_scroll_pane

0x0d8a,	// (0x0003e30c) list_medium_line_x2_t3_t1

0x0d9a,	// (0x0003e31c) list_medium_line_x2_t3_t2

0x0da8,	// (0x0003e32a) list_medium_line_x2_t3_t3

0x0002,

0xf300,	// (0x0004c882) list_medium_line_x2_t3_t

0x0db6,	// (0x0003e338) list_medium_line_x3_t4_t1

0x0dc6,	// (0x0003e348) list_medium_line_x3_t4_t2

0x0dd4,	// (0x0003e356) list_medium_line_x3_t4_t3

0x0da8,	// (0x0003e32a) list_medium_line_x3_t4_t4

0x0003,

0xf307,	// (0x0004c889) list_medium_line_x3_t4_t

0x0de2,	// (0x0003e364) list_medium_line_x4_t5_t1

0x0df2,	// (0x0003e374) list_medium_line_x4_t5_t2

0x0dd4,	// (0x0003e356) list_medium_line_x4_t5_t3

0x0e00,	// (0x0003e382) list_medium_line_x4_t5_t4

0x0da8,	// (0x0003e32a) list_medium_line_x4_t5_t5

0x0004,

0xf310,	// (0x0004c892) list_medium_line_x4_t5_t

0x0c33,	// (0x0003e1b5) list_medium_line_t4_g4_g1_ParamLimits

0x0c33,	// (0x0003e1b5) list_medium_line_t4_g4_g1

0x0ce4,	// (0x0003e266) list_medium_line_t4_g4_g2_ParamLimits

0x0ce4,	// (0x0003e266) list_medium_line_t4_g4_g2

0x0e0e,	// (0x0003e390) list_medium_line_t4_g4_g3_ParamLimits

0x0e0e,	// (0x0003e390) list_medium_line_t4_g4_g3

0x0c4b,	// (0x0003e1cd) list_medium_line_t4_g4_g4_ParamLimits

0x0c4b,	// (0x0003e1cd) list_medium_line_t4_g4_g4

0x0003,

0xf31b,	// (0x0004c89d) list_medium_line_t4_g4_g_ParamLimits

0xf31b,	// (0x0004c89d) list_medium_line_t4_g4_g

0x0e1a,	// (0x0003e39c) list_medium_line_t4_g4_t1_ParamLimits

0x0e1a,	// (0x0003e39c) list_medium_line_t4_g4_t1

0x0e2f,	// (0x0003e3b1) list_medium_line_t4_g4_t2_ParamLimits

0x0e2f,	// (0x0003e3b1) list_medium_line_t4_g4_t2

0x0e45,	// (0x0003e3c7) list_medium_line_t4_g4_t3_ParamLimits

0x0e45,	// (0x0003e3c7) list_medium_line_t4_g4_t3

0x0c7e,	// (0x0003e200) list_medium_line_t4_g4_t4_ParamLimits

0x0c7e,	// (0x0003e200) list_medium_line_t4_g4_t4

0x0003,

0xf324,	// (0x0004c8a6) list_medium_line_t4_g4_t_ParamLimits

0xf324,	// (0x0004c8a6) list_medium_line_t4_g4_t

0x4405,	// (0x00041987) chi_dic_find_pane_g1

0x5287,	// (0x00042809) main_tport_pane

0x1115,	// (0x0003e697) list_medium_line_plain_t1

0x1123,	// (0x0003e6a5) list_medium_line_t2_g2_g1_ParamLimits

0x1123,	// (0x0003e6a5) list_medium_line_t2_g2_g1

0x112f,	// (0x0003e6b1) list_medium_line_t2_g2_g2_ParamLimits

0x112f,	// (0x0003e6b1) list_medium_line_t2_g2_g2

0x0001,

0xf9fc,	// (0x0004cf7e) list_medium_line_t2_g2_g_ParamLimits

0xf9fc,	// (0x0004cf7e) list_medium_line_t2_g2_g

0x113b,	// (0x0003e6bd) list_medium_line_t2_g2_t1_ParamLimits

0x113b,	// (0x0003e6bd) list_medium_line_t2_g2_t1

0x1155,	// (0x0003e6d7) list_medium_line_t2_g2_t2_ParamLimits

0x1155,	// (0x0003e6d7) list_medium_line_t2_g2_t2

0x0001,

0xfa01,	// (0x0004cf83) list_medium_line_t2_g2_t_ParamLimits

0xfa01,	// (0x0004cf83) list_medium_line_t2_g2_t

0x1375,	// (0x0003e8f7) aid_sp_fs_list_icon_a_sm

0x137d,	// (0x0003e8ff) aid_sp_fs_list_icon_d

0x1385,	// (0x0003e907) aid_sp_fs_text_primary

0xe6d8,	// (0x0004bc5a) aid_sp_fs_text_secondary

0x8322,	// (0x000458a4) list_medium_line

0x8322,	// (0x000458a4) list_medium_line_g2

0x8322,	// (0x000458a4) list_medium_line_g3

0x8322,	// (0x000458a4) list_medium_line_plain

0x8322,	// (0x000458a4) list_medium_line_plain_t2

0x8322,	// (0x000458a4) list_medium_line_plain_t3

0x8322,	// (0x000458a4) list_medium_line_right_icon

0x8322,	// (0x000458a4) list_medium_line_right_iconx2

0x8322,	// (0x000458a4) list_medium_line_t2

0x8322,	// (0x000458a4) list_medium_line_t2_g2

0x8322,	// (0x000458a4) list_medium_line_t2_g3

0x8322,	// (0x000458a4) list_medium_line_t2_right_icon

0x8322,	// (0x000458a4) list_medium_line_t2_right_iconx2

0x8322,	// (0x000458a4) list_medium_line_t3

0x8322,	// (0x000458a4) list_medium_line_t3_g2

0x8322,	// (0x000458a4) list_medium_line_t3_g3

0x8322,	// (0x000458a4) list_medium_line_t3_right_iconx2

0x832b,	// (0x000458ad) list_medium_line_t4_g4

0x8334,	// (0x000458b6) list_medium_line_x2

0x8334,	// (0x000458b6) list_medium_line_x2_t2_g2

0x8334,	// (0x000458b6) list_medium_line_x2_t2_g3

0x8334,	// (0x000458b6) list_medium_line_x2_t2_g4

0x8334,	// (0x000458b6) list_medium_line_x2_t3

0x8334,	// (0x000458b6) list_medium_line_x2_t3_g2

0x8334,	// (0x000458b6) list_medium_line_x2_t3_g3

0x8334,	// (0x000458b6) list_medium_line_x2_t3_g4

0x8334,	// (0x000458b6) list_medium_line_x2_t4_g2

0x8334,	// (0x000458b6) list_medium_line_x2_t4_g4

0x833d,	// (0x000458bf) list_medium_line_x3

0x833d,	// (0x000458bf) list_medium_line_x3_t4

0x833d,	// (0x000458bf) list_medium_line_x3_t4_g4

0x832b,	// (0x000458ad) list_medium_line_x4_t4

0x832b,	// (0x000458ad) list_medium_line_x4_t4_g7

0x832b,	// (0x000458ad) list_medium_line_x4_t5

0x138e,	// (0x0003e910) list_single_fs_dyc_pane_ParamLimits

0x138e,	// (0x0003e910) list_single_fs_dyc_pane

0x0c33,	// (0x0003e1b5) list_medium_line_x4_t4_g7_g1_ParamLimits

0x0c33,	// (0x0003e1b5) list_medium_line_x4_t4_g7_g1

0x13aa,	// (0x0003e92c) list_medium_line_x4_t4_g7_g2_ParamLimits

0x13aa,	// (0x0003e92c) list_medium_line_x4_t4_g7_g2

0x13b6,	// (0x0003e938) list_medium_line_x4_t4_g7_g3_ParamLimits

0x13b6,	// (0x0003e938) list_medium_line_x4_t4_g7_g3

0x13c5,	// (0x0003e947) list_medium_line_x4_t4_g7_g4_ParamLimits

0x13c5,	// (0x0003e947) list_medium_line_x4_t4_g7_g4

0x13d1,	// (0x0003e953) list_medium_line_x4_t4_g7_g5_ParamLimits

0x13d1,	// (0x0003e953) list_medium_line_x4_t4_g7_g5

0x13e0,	// (0x0003e962) list_medium_line_x4_t4_g7_g6_ParamLimits

0x13e0,	// (0x0003e962) list_medium_line_x4_t4_g7_g6

0x13ef,	// (0x0003e971) list_medium_line_x4_t4_g7_g7_ParamLimits

0x13ef,	// (0x0003e971) list_medium_line_x4_t4_g7_g7

0x0006,

0xfbcc,	// (0x0004d14e) list_medium_line_x4_t4_g7_g_ParamLimits

0xfbcc,	// (0x0004d14e) list_medium_line_x4_t4_g7_g

0x13fb,	// (0x0003e97d) list_medium_line_x4_t4_g7_t1_ParamLimits

0x13fb,	// (0x0003e97d) list_medium_line_x4_t4_g7_t1

0x1410,	// (0x0003e992) list_medium_line_x4_t4_g7_t2_ParamLimits

0x1410,	// (0x0003e992) list_medium_line_x4_t4_g7_t2

0x1425,	// (0x0003e9a7) list_medium_line_x4_t4_g7_t3_ParamLimits

0x1425,	// (0x0003e9a7) list_medium_line_x4_t4_g7_t3

0x143a,	// (0x0003e9bc) list_medium_line_x4_t4_g7_t4_ParamLimits

0x143a,	// (0x0003e9bc) list_medium_line_x4_t4_g7_t4

0x144c,	// (0x0003e9ce) list_medium_line_x4_t4_g7_t5_ParamLimits

0x144c,	// (0x0003e9ce) list_medium_line_x4_t4_g7_t5

0x0004,

0xfbdb,	// (0x0004d15d) list_medium_line_x4_t4_g7_t_ParamLimits

0xfbdb,	// (0x0004d15d) list_medium_line_x4_t4_g7_t

0x145e,	// (0x0003e9e0) list_single_dyc_row_pane_ParamLimits

0x145e,	// (0x0003e9e0) list_single_dyc_row_pane

0x908b,	// (0x0004660d) call5_gesture_pane_ParamLimits

0x908b,	// (0x0004660d) call5_gesture_pane

0x90bf,	// (0x00046641) call5_windows_pane_ParamLimits

0x90bf,	// (0x00046641) call5_windows_pane

0x9112,	// (0x00046694) call5_swipe_1_pane_cp_ParamLimits

0x9112,	// (0x00046694) call5_swipe_1_pane_cp

0x911e,	// (0x000466a0) call5_swipe_2_pane_cp_ParamLimits

0x911e,	// (0x000466a0) call5_swipe_2_pane_cp

0xaa50,	// (0x00047fd2) call5_image_pane_cp

0x912a,	// (0x000466ac) popup_call5_audio_first_window_cp_ParamLimits

0x912a,	// (0x000466ac) popup_call5_audio_first_window_cp

0xe634,	// (0x0004bbb6) call5_swipe_1_pane_g1_cp_ParamLimits

0xe634,	// (0x0004bbb6) call5_swipe_1_pane_g1_cp

0xe6a1,	// (0x0004bc23) call5_swipe_1_pane_g2_cp

0xe64d,	// (0x0004bbcf) call5_swipe_1_pane_t1_cp_ParamLimits

0xe64d,	// (0x0004bbcf) call5_swipe_1_pane_t1_cp

0xe634,	// (0x0004bbb6) call5_swipe_2_pane_g1_cp_ParamLimits

0xe634,	// (0x0004bbb6) call5_swipe_2_pane_g1_cp

0xe6a9,	// (0x0004bc2b) call5_swipe_2_pane_g2_cp

0xe6b1,	// (0x0004bc33) call5_swipe_2_pane_t1_cp_ParamLimits

0xe6b1,	// (0x0004bc33) call5_swipe_2_pane_t1_cp

0xaf98,	// (0x0004851a) main_sp_fs_email_pane

0xe6c6,	// (0x0004bc48) main_sp_fs_listscroll_pane_te

0x14fa,	// (0x0003ea7c) popup_sp_fs_action_menu_pane_ParamLimits

0x14fa,	// (0x0003ea7c) popup_sp_fs_action_menu_pane

0xcd13,	// (0x0004a295) bg_sp_fs_ctrlbar_pane_g1

0xe6cf,	// (0x0004bc51) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xe6e1,	// (0x0004bc63) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xe6ea,	// (0x0004bc6c) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xcd13,	// (0x0004a295) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfcc9,	// (0x0004d24b) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xcaf8,	// (0x0004a07a) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xcaf8,	// (0x0004a07a) bg_sp_fs_ctrlbar_ddmenu_pane

0xe6f3,	// (0x0004bc75) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xe6f3,	// (0x0004bc75) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xe6ff,	// (0x0004bc81) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xe6ff,	// (0x0004bc81) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfcd2,	// (0x0004d254) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfcd2,	// (0x0004d254) main_sp_fs_ctrlbar_ddmenu_pane_g

0xe70b,	// (0x0004bc8d) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xe70b,	// (0x0004bc8d) main_sp_fs_ctrlbar_ddmenu_pane_t1

0x153c,	// (0x0003eabe) list_medium_line_t2_right_icon_g1

0x1544,	// (0x0003eac6) list_medium_line_t2_right_icon_t1

0x1554,	// (0x0003ead6) list_medium_line_t2_right_icon_t2

0x0001,

0xfcd7,	// (0x0004d259) list_medium_line_t2_right_icon_t

0xc90b,	// (0x00049e8d) bg_sp_fs_ctrlbar_pane_ParamLimits

0xc90b,	// (0x00049e8d) bg_sp_fs_ctrlbar_pane

0x917b,	// (0x000466fd) main_sp_fs_ctrlbar_button_pane_cp01

0x9183,	// (0x00046705) main_sp_fs_ctrlbar_ddmenu_pane

0xe75d,	// (0x0004bcdf) main_sp_fs_ctrlbar_pane_g1

0xe769,	// (0x0004bceb) main_sp_fs_ctrlbar_pane_g2

0x0003,

0xfcdc,	// (0x0004d25e) main_sp_fs_ctrlbar_pane_g

0x91bf,	// (0x00046741) main_sp_fs_ctrlbar_pane_t1

0x91fa,	// (0x0004677c) main_sp_fs_ctrlbar_pane

0x9210,	// (0x00046792) main_sp_fs_listscroll_pane_te_cp01

0x1562,	// (0x0003eae4) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x1562,	// (0x0003eae4) popup_sp_fs_action_menu_pane_cp01

0xaf98,	// (0x0004851a) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0xaf98,	// (0x0004851a) bg_sp_fs_highlight_list_pane_cp01

0x158c,	// (0x0003eb0e) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0x158c,	// (0x0003eb0e) sp_fs_action_menu_list_gene_pane_g1

0xe790,	// (0x0004bd12) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xe790,	// (0x0004bd12) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfcea,	// (0x0004d26c) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfcea,	// (0x0004d26c) sp_fs_action_menu_list_gene_pane_g

0x159b,	// (0x0003eb1d) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0x159b,	// (0x0003eb1d) sp_fs_action_menu_list_gene_pane_t1

0x15b3,	// (0x0003eb35) sp_fs_action_menu_list_gene_pane_ParamLimits

0x15b3,	// (0x0003eb35) sp_fs_action_menu_list_gene_pane

0xe79d,	// (0x0004bd1f) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xe79d,	// (0x0004bd1f) popup_sp_fs_action_menu_bg_pane

0x15d2,	// (0x0003eb54) sp_fs_action_menu_list_pane_ParamLimits

0x15d2,	// (0x0003eb54) sp_fs_action_menu_list_pane

0x15f2,	// (0x0003eb74) sp_fs_scroll_pane_cp01_ParamLimits

0x15f2,	// (0x0003eb74) sp_fs_scroll_pane_cp01

0x1618,	// (0x0003eb9a) list_medium_line_plain_t2_t1

0x1628,	// (0x0003ebaa) list_medium_line_plain_t2_t2

0x0001,

0xfcef,	// (0x0004d271) list_medium_line_plain_t2_t

0x1636,	// (0x0003ebb8) list_medium_line_plain_t3_t1

0x1646,	// (0x0003ebc8) list_medium_line_plain_t3_t2

0x1654,	// (0x0003ebd6) list_medium_line_plain_t3_t3

0x0002,

0xfcf4,	// (0x0004d276) list_medium_line_plain_t3_t

0x0c33,	// (0x0003e1b5) list_medium_line_x2_t2_g2_g1_ParamLimits

0x0c33,	// (0x0003e1b5) list_medium_line_x2_t2_g2_g1

0x0c4b,	// (0x0003e1cd) list_medium_line_x2_t2_g2_g2_ParamLimits

0x0c4b,	// (0x0003e1cd) list_medium_line_x2_t2_g2_g2

0x0001,

0xf22b,	// (0x0004c7ad) list_medium_line_x2_t2_g2_g_ParamLimits

0xf22b,	// (0x0004c7ad) list_medium_line_x2_t2_g2_g

0x0e1a,	// (0x0003e39c) list_medium_line_x2_t2_g2_t1_ParamLimits

0x0e1a,	// (0x0003e39c) list_medium_line_x2_t2_g2_t1

0x0c7e,	// (0x0003e200) list_medium_line_x2_t2_g2_t2_ParamLimits

0x0c7e,	// (0x0003e200) list_medium_line_x2_t2_g2_t2

0x0001,

0xfcfb,	// (0x0004d27d) list_medium_line_x2_t2_g2_t_ParamLimits

0xfcfb,	// (0x0004d27d) list_medium_line_x2_t2_g2_t

0x0c33,	// (0x0003e1b5) list_medium_line_x2_t4_g2_g1_ParamLimits

0x0c33,	// (0x0003e1b5) list_medium_line_x2_t4_g2_g1

0x1662,	// (0x0003ebe4) list_medium_line_x2_t4_g2_g2_ParamLimits

0x1662,	// (0x0003ebe4) list_medium_line_x2_t4_g2_g2

0x0001,

0xfd00,	// (0x0004d282) list_medium_line_x2_t4_g2_g_ParamLimits

0xfd00,	// (0x0004d282) list_medium_line_x2_t4_g2_g

0x1674,	// (0x0003ebf6) list_medium_line_x2_t4_g2_t1_ParamLimits

0x1674,	// (0x0003ebf6) list_medium_line_x2_t4_g2_t1

0x168e,	// (0x0003ec10) list_medium_line_x2_t4_g2_t2_ParamLimits

0x168e,	// (0x0003ec10) list_medium_line_x2_t4_g2_t2

0x16a4,	// (0x0003ec26) list_medium_line_x2_t4_g2_t3_ParamLimits

0x16a4,	// (0x0003ec26) list_medium_line_x2_t4_g2_t3

0x0c7e,	// (0x0003e200) list_medium_line_x2_t4_g2_t4_ParamLimits

0x0c7e,	// (0x0003e200) list_medium_line_x2_t4_g2_t4

0x0003,

0xfd05,	// (0x0004d287) list_medium_line_x2_t4_g2_t_ParamLimits

0xfd05,	// (0x0004d287) list_medium_line_x2_t4_g2_t

0x16b9,	// (0x0003ec3b) list_medium_line_t3_right_iconx2_g1

0x153c,	// (0x0003eabe) list_medium_line_t3_right_iconx2_g2

0x16c1,	// (0x0003ec43) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfd0e,	// (0x0004d290) list_medium_line_t3_right_iconx2_g

0x16c9,	// (0x0003ec4b) list_medium_line_t3_right_iconx2_t1

0x16d9,	// (0x0003ec5b) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfd15,	// (0x0004d297) list_medium_line_t3_right_iconx2_t

0x0c33,	// (0x0003e1b5) list_medium_line_x3_t4_g4_g1_ParamLimits

0x0c33,	// (0x0003e1b5) list_medium_line_x3_t4_g4_g1

0x0c3f,	// (0x0003e1c1) list_medium_line_x3_t4_g4_g2_ParamLimits

0x0c3f,	// (0x0003e1c1) list_medium_line_x3_t4_g4_g2

0x0ce4,	// (0x0003e266) list_medium_line_x3_t4_g4_g3_ParamLimits

0x0ce4,	// (0x0003e266) list_medium_line_x3_t4_g4_g3

0x16e7,	// (0x0003ec69) list_medium_line_x3_t4_g4_g4_ParamLimits

0x16e7,	// (0x0003ec69) list_medium_line_x3_t4_g4_g4

0x0003,

0xfd1a,	// (0x0004d29c) list_medium_line_x3_t4_g4_g_ParamLimits

0xfd1a,	// (0x0004d29c) list_medium_line_x3_t4_g4_g

0x16f3,	// (0x0003ec75) list_medium_line_x3_t4_g4_t1_ParamLimits

0x16f3,	// (0x0003ec75) list_medium_line_x3_t4_g4_t1

0x170a,	// (0x0003ec8c) list_medium_line_x3_t4_g4_t2_ParamLimits

0x170a,	// (0x0003ec8c) list_medium_line_x3_t4_g4_t2

0x171f,	// (0x0003eca1) list_medium_line_x3_t4_g4_t3_ParamLimits

0x171f,	// (0x0003eca1) list_medium_line_x3_t4_g4_t3

0x1734,	// (0x0003ecb6) list_medium_line_x3_t4_g4_t4_ParamLimits

0x1734,	// (0x0003ecb6) list_medium_line_x3_t4_g4_t4

0x0003,

0xfd23,	// (0x0004d2a5) list_medium_line_x3_t4_g4_t_ParamLimits

0xfd23,	// (0x0004d2a5) list_medium_line_x3_t4_g4_t

0x1751,	// (0x0003ecd3) list_single_dyc_row_text_pane_t1_ParamLimits

0x1751,	// (0x0003ecd3) list_single_dyc_row_text_pane_t1

0x1788,	// (0x0003ed0a) list_single_dyc_row_text_pane_t2_ParamLimits

0x1788,	// (0x0003ed0a) list_single_dyc_row_text_pane_t2

0x17fe,	// (0x0003ed80) list_single_dyc_row_text_pane_t3_ParamLimits

0x17fe,	// (0x0003ed80) list_single_dyc_row_text_pane_t3

0x0005,

0xfd2c,	// (0x0004d2ae) list_single_dyc_row_text_pane_t_ParamLimits

0xfd2c,	// (0x0004d2ae) list_single_dyc_row_text_pane_t

0x18cf,	// (0x0003ee51) list_single_dyc_row_pane_g1_ParamLimits

0x18cf,	// (0x0003ee51) list_single_dyc_row_pane_g1

0x18db,	// (0x0003ee5d) list_single_dyc_row_pane_g2_ParamLimits

0x18db,	// (0x0003ee5d) list_single_dyc_row_pane_g2

0x18e7,	// (0x0003ee69) list_single_dyc_row_pane_g3_ParamLimits

0x18e7,	// (0x0003ee69) list_single_dyc_row_pane_g3

0x18f3,	// (0x0003ee75) list_single_dyc_row_pane_g4_ParamLimits

0x18f3,	// (0x0003ee75) list_single_dyc_row_pane_g4

0x0003,

0xfd39,	// (0x0004d2bb) list_single_dyc_row_pane_g_ParamLimits

0xfd39,	// (0x0004d2bb) list_single_dyc_row_pane_g

0x18ff,	// (0x0003ee81) list_single_dyc_row_text_pane_ParamLimits

0x18ff,	// (0x0003ee81) list_single_dyc_row_text_pane

0xa12c,	// (0x000476ae) bg_sp_fs_scroll_pane

0xe7ab,	// (0x0004bd2d) thumb_sp_fs_scroll_pane

0x1123,	// (0x0003e6a5) list_medium_line_g1_ParamLimits

0x1123,	// (0x0003e6a5) list_medium_line_g1

0x191e,	// (0x0003eea0) list_medium_line_t1_ParamLimits

0x191e,	// (0x0003eea0) list_medium_line_t1

0x0c33,	// (0x0003e1b5) list_medium_line_x2_g1_ParamLimits

0x0c33,	// (0x0003e1b5) list_medium_line_x2_g1

0x0c3f,	// (0x0003e1c1) list_medium_line_x2_g2_ParamLimits

0x0c3f,	// (0x0003e1c1) list_medium_line_x2_g2

0x0001,

0xfd42,	// (0x0004d2c4) list_medium_line_x2_g_ParamLimits

0xfd42,	// (0x0004d2c4) list_medium_line_x2_g

0x1933,	// (0x0003eeb5) list_medium_line_x2_t1_ParamLimits

0x1933,	// (0x0003eeb5) list_medium_line_x2_t1

0x0c33,	// (0x0003e1b5) list_medium_line_x3_g1_ParamLimits

0x0c33,	// (0x0003e1b5) list_medium_line_x3_g1

0x0c3f,	// (0x0003e1c1) list_medium_line_x3_g2_ParamLimits

0x0c3f,	// (0x0003e1c1) list_medium_line_x3_g2

0x0001,

0xfd42,	// (0x0004d2c4) list_medium_line_x3_g_ParamLimits

0xfd42,	// (0x0004d2c4) list_medium_line_x3_g

0x1933,	// (0x0003eeb5) list_medium_line_x3_t1_ParamLimits

0x1933,	// (0x0003eeb5) list_medium_line_x3_t1

0xe7b4,	// (0x0004bd36) thumb_sp_fs_scroll_pane_g1

0xe7bd,	// (0x0004bd3f) thumb_sp_fs_scroll_pane_g2

0xe7c6,	// (0x0004bd48) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfd47,	// (0x0004d2c9) thumb_sp_fs_scroll_pane_g

0xe7b4,	// (0x0004bd36) bg_sp_fs_scroll_pane_g1

0xe7bd,	// (0x0004bd3f) bg_sp_fs_scroll_pane_g2

0xe7c6,	// (0x0004bd48) bg_sp_fs_scroll_pane_g3

0x0002,

0xfd47,	// (0x0004d2c9) bg_sp_fs_scroll_pane_g

0x0c33,	// (0x0003e1b5) list_medium_line_x2_t3_g4_g1_ParamLimits

0x0c33,	// (0x0003e1b5) list_medium_line_x2_t3_g4_g1

0x0cd8,	// (0x0003e25a) list_medium_line_x2_t3_g4_g2_ParamLimits

0x0cd8,	// (0x0003e25a) list_medium_line_x2_t3_g4_g2

0x0c3f,	// (0x0003e1c1) list_medium_line_x2_t3_g4_g3_ParamLimits

0x0c3f,	// (0x0003e1c1) list_medium_line_x2_t3_g4_g3

0x0c4b,	// (0x0003e1cd) list_medium_line_x2_t3_g4_g4_ParamLimits

0x0c4b,	// (0x0003e1cd) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2a7,	// (0x0004c829) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2a7,	// (0x0004c829) list_medium_line_x2_t3_g4_g

0x1949,	// (0x0003eecb) list_medium_line_x2_t3_g4_t1_ParamLimits

0x1949,	// (0x0003eecb) list_medium_line_x2_t3_g4_t1

0x195f,	// (0x0003eee1) list_medium_line_x2_t3_g4_t2_ParamLimits

0x195f,	// (0x0003eee1) list_medium_line_x2_t3_g4_t2

0x0c7e,	// (0x0003e200) list_medium_line_x2_t3_g4_t3_ParamLimits

0x0c7e,	// (0x0003e200) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd4e,	// (0x0004d2d0) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd4e,	// (0x0004d2d0) list_medium_line_x2_t3_g4_t

0x1123,	// (0x0003e6a5) list_medium_line_g2_g1_ParamLimits

0x1123,	// (0x0003e6a5) list_medium_line_g2_g1

0x112f,	// (0x0003e6b1) list_medium_line_g2_g2_ParamLimits

0x112f,	// (0x0003e6b1) list_medium_line_g2_g2

0x0001,

0xf9fc,	// (0x0004cf7e) list_medium_line_g2_g_ParamLimits

0xf9fc,	// (0x0004cf7e) list_medium_line_g2_g

0x1979,	// (0x0003eefb) list_medium_line_g2_t1_ParamLimits

0x1979,	// (0x0003eefb) list_medium_line_g2_t1

0x1123,	// (0x0003e6a5) list_medium_line_t3_g2_g1_ParamLimits

0x1123,	// (0x0003e6a5) list_medium_line_t3_g2_g1

0x112f,	// (0x0003e6b1) list_medium_line_t3_g2_g2_ParamLimits

0x112f,	// (0x0003e6b1) list_medium_line_t3_g2_g2

0x0001,

0xf9fc,	// (0x0004cf7e) list_medium_line_t3_g2_g_ParamLimits

0xf9fc,	// (0x0004cf7e) list_medium_line_t3_g2_g

0x198e,	// (0x0003ef10) list_medium_line_t3_g2_t1_ParamLimits

0x198e,	// (0x0003ef10) list_medium_line_t3_g2_t1

0x19a8,	// (0x0003ef2a) list_medium_line_t3_g2_t2_ParamLimits

0x19a8,	// (0x0003ef2a) list_medium_line_t3_g2_t2

0x19be,	// (0x0003ef40) list_medium_line_t3_g2_t3_ParamLimits

0x19be,	// (0x0003ef40) list_medium_line_t3_g2_t3

0x0002,

0xfd55,	// (0x0004d2d7) list_medium_line_t3_g2_t_ParamLimits

0xfd55,	// (0x0004d2d7) list_medium_line_t3_g2_t

0x153c,	// (0x0003eabe) list_medium_line_right_icon_g1

0x19d4,	// (0x0003ef56) list_medium_line_right_icon_t1

0x1123,	// (0x0003e6a5) list_medium_line_t2_g1_ParamLimits

0x1123,	// (0x0003e6a5) list_medium_line_t2_g1

0x19e2,	// (0x0003ef64) list_medium_line_t2_t1_ParamLimits

0x19e2,	// (0x0003ef64) list_medium_line_t2_t1

0x19fc,	// (0x0003ef7e) list_medium_line_t2_t2_ParamLimits

0x19fc,	// (0x0003ef7e) list_medium_line_t2_t2

0x0001,

0xfd5c,	// (0x0004d2de) list_medium_line_t2_t_ParamLimits

0xfd5c,	// (0x0004d2de) list_medium_line_t2_t

0x1123,	// (0x0003e6a5) list_medium_line_t3_g1_ParamLimits

0x1123,	// (0x0003e6a5) list_medium_line_t3_g1

0x1a11,	// (0x0003ef93) list_medium_line_t3_t1_ParamLimits

0x1a11,	// (0x0003ef93) list_medium_line_t3_t1

0x1a2b,	// (0x0003efad) list_medium_line_t3_t2_ParamLimits

0x1a2b,	// (0x0003efad) list_medium_line_t3_t2

0x1a41,	// (0x0003efc3) list_medium_line_t3_t3_ParamLimits

0x1a41,	// (0x0003efc3) list_medium_line_t3_t3

0x0002,

0xfd61,	// (0x0004d2e3) list_medium_line_t3_t_ParamLimits

0xfd61,	// (0x0004d2e3) list_medium_line_t3_t

0x1123,	// (0x0003e6a5) list_medium_line_g3_g1_ParamLimits

0x1123,	// (0x0003e6a5) list_medium_line_g3_g1

0x1a56,	// (0x0003efd8) list_medium_line_g3_g2_ParamLimits

0x1a56,	// (0x0003efd8) list_medium_line_g3_g2

0x112f,	// (0x0003e6b1) list_medium_line_g3_g3_ParamLimits

0x112f,	// (0x0003e6b1) list_medium_line_g3_g3

0x0002,

0xfd68,	// (0x0004d2ea) list_medium_line_g3_g_ParamLimits

0xfd68,	// (0x0004d2ea) list_medium_line_g3_g

0x1a62,	// (0x0003efe4) list_medium_line_g3_t1_ParamLimits

0x1a62,	// (0x0003efe4) list_medium_line_g3_t1

0x1123,	// (0x0003e6a5) list_medium_line_t2_g3_g1_ParamLimits

0x1123,	// (0x0003e6a5) list_medium_line_t2_g3_g1

0x1a56,	// (0x0003efd8) list_medium_line_t2_g3_g2_ParamLimits

0x1a56,	// (0x0003efd8) list_medium_line_t2_g3_g2

0x112f,	// (0x0003e6b1) list_medium_line_t2_g3_g3_ParamLimits

0x112f,	// (0x0003e6b1) list_medium_line_t2_g3_g3

0x0002,

0xfd68,	// (0x0004d2ea) list_medium_line_t2_g3_g_ParamLimits

0xfd68,	// (0x0004d2ea) list_medium_line_t2_g3_g

0x1a77,	// (0x0003eff9) list_medium_line_t2_g3_t1_ParamLimits

0x1a77,	// (0x0003eff9) list_medium_line_t2_g3_t1

0x1a91,	// (0x0003f013) list_medium_line_t2_g3_t2_ParamLimits

0x1a91,	// (0x0003f013) list_medium_line_t2_g3_t2

0x0001,

0xfd6f,	// (0x0004d2f1) list_medium_line_t2_g3_t_ParamLimits

0xfd6f,	// (0x0004d2f1) list_medium_line_t2_g3_t

0x1123,	// (0x0003e6a5) list_medium_line_t3_g3_g1_ParamLimits

0x1123,	// (0x0003e6a5) list_medium_line_t3_g3_g1

0x1a56,	// (0x0003efd8) list_medium_line_t3_g3_g2_ParamLimits

0x1a56,	// (0x0003efd8) list_medium_line_t3_g3_g2

0x112f,	// (0x0003e6b1) list_medium_line_t3_g3_g3_ParamLimits

0x112f,	// (0x0003e6b1) list_medium_line_t3_g3_g3

0x0002,

0xfd68,	// (0x0004d2ea) list_medium_line_t3_g3_g_ParamLimits

0xfd68,	// (0x0004d2ea) list_medium_line_t3_g3_g

0x1aa7,	// (0x0003f029) list_medium_line_t3_g3_t1_ParamLimits

0x1aa7,	// (0x0003f029) list_medium_line_t3_g3_t1

0x1ac0,	// (0x0003f042) list_medium_line_t3_g3_t2_ParamLimits

0x1ac0,	// (0x0003f042) list_medium_line_t3_g3_t2

0x1ad6,	// (0x0003f058) list_medium_line_t3_g3_t3_ParamLimits

0x1ad6,	// (0x0003f058) list_medium_line_t3_g3_t3

0x0002,

0xfd74,	// (0x0004d2f6) list_medium_line_t3_g3_t_ParamLimits

0xfd74,	// (0x0004d2f6) list_medium_line_t3_g3_t

0x16b9,	// (0x0003ec3b) list_medium_line_right_iconx2_g1

0x153c,	// (0x0003eabe) list_medium_line_right_iconx2_g2

0x0001,

0xfd7b,	// (0x0004d2fd) list_medium_line_right_iconx2_g

0x1aec,	// (0x0003f06e) list_medium_line_right_iconx2_t1

0x16b9,	// (0x0003ec3b) list_medium_line_t2_right_iconx2_g1

0x153c,	// (0x0003eabe) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfd7b,	// (0x0004d2fd) list_medium_line_t2_right_iconx2_g

0x1afa,	// (0x0003f07c) list_medium_line_t2_right_iconx2_t1

0x1b0a,	// (0x0003f08c) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfd80,	// (0x0004d302) list_medium_line_t2_right_iconx2_t

0x1b18,	// (0x0003f09a) list_medium_line_x4_t4_t1

0x1b26,	// (0x0003f0a8) list_medium_line_x4_t4_t2

0x1b36,	// (0x0003f0b8) list_medium_line_x4_t4_t3

0x1b46,	// (0x0003f0c8) list_medium_line_x4_t4_t4

0x0003,

0xfd85,	// (0x0004d307) list_medium_line_x4_t4_t

0x924b,	// (0x000467cd) tport_appsw_pane_ParamLimits

0x924b,	// (0x000467cd) tport_appsw_pane

0x9259,	// (0x000467db) tport_contact_pane_ParamLimits

0x9259,	// (0x000467db) tport_contact_pane

0x9269,	// (0x000467eb) tport_listscroll_pane_ParamLimits

0x9269,	// (0x000467eb) tport_listscroll_pane

0x9279,	// (0x000467fb) cell_tport_appsw_pane_ParamLimits

0x9279,	// (0x000467fb) cell_tport_appsw_pane

0xcfbd,	// (0x0004a53f) tport_appsw_pane_g1_ParamLimits

0xcfbd,	// (0x0004a53f) tport_appsw_pane_g1

0xe7cf,	// (0x0004bd51) tport_contact_pane_g1

0xe7d8,	// (0x0004bd5a) tport_contact_pane_t1

0xe7e6,	// (0x0004bd68) tport_contact_pane_t2

0x0001,

0xfd8e,	// (0x0004d310) tport_contact_pane_t

0xe7f4,	// (0x0004bd76) list_tport_pane

0xe7fd,	// (0x0004bd7f) scroll_pane_cp_030

0x92ac,	// (0x0004682e) cell_tport_appsw_pane_g1

0x92bc,	// (0x0004683e) cell_tport_appsw_pane_t1

0x92ca,	// (0x0004684c) grid_highlight_pane_cp019

0x92d2,	// (0x00046854) list_tport_double_graphic_pane_ParamLimits

0x92d2,	// (0x00046854) list_tport_double_graphic_pane

0xaf98,	// (0x0004851a) list_highlight_pane_cp023_ParamLimits

0xaf98,	// (0x0004851a) list_highlight_pane_cp023

0x92e3,	// (0x00046865) list_tport_double_graphic_pane_g1_ParamLimits

0x92e3,	// (0x00046865) list_tport_double_graphic_pane_g1

0x92f0,	// (0x00046872) list_tport_double_graphic_pane_t1_ParamLimits

0x92f0,	// (0x00046872) list_tport_double_graphic_pane_t1

0x9305,	// (0x00046887) list_tport_double_graphic_pane_t2_ParamLimits

0x9305,	// (0x00046887) list_tport_double_graphic_pane_t2

0x0001,

0xfd9a,	// (0x0004d31c) list_tport_double_graphic_pane_t_ParamLimits

0xfd9a,	// (0x0004d31c) list_tport_double_graphic_pane_t

0xa12c,	// (0x000476ae) main_cale_note_pane

0x7625,	// (0x00044ba7) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x7625,	// (0x00044ba7) cell_vitu2_function_top_wide_pane_cp01

0x8dd8,	// (0x0004635a) wait_bar_pane_cp05_ParamLimits

0xaf98,	// (0x0004851a) listscroll_cmail_pane

0xe806,	// (0x0004bd88) list_cmail_pane

0x9317,	// (0x00046899) list_cmail_body_pane

0x933f,	// (0x000468c1) list_single_cmail_header_caption_pane

0x936b,	// (0x000468ed) list_single_cmail_header_detail_pane_ParamLimits

0x936b,	// (0x000468ed) list_single_cmail_header_detail_pane

0xe816,	// (0x0004bd98) list_single_cmail_header_caption_pane_t1

0x1b56,	// (0x0003f0d8) list_single_cmail_header_detail_pane_g1_ParamLimits

0x1b56,	// (0x0003f0d8) list_single_cmail_header_detail_pane_g1

0x1b6c,	// (0x0003f0ee) list_single_cmail_header_detail_pane_g2_ParamLimits

0x1b6c,	// (0x0003f0ee) list_single_cmail_header_detail_pane_g2

0x0002,

0xfd9f,	// (0x0004d321) list_single_cmail_header_detail_pane_g_ParamLimits

0xfd9f,	// (0x0004d321) list_single_cmail_header_detail_pane_g

0x1b78,	// (0x0003f0fa) list_single_cmail_header_detail_pane_t1_ParamLimits

0x1b78,	// (0x0003f0fa) list_single_cmail_header_detail_pane_t1

0x1bd8,	// (0x0003f15a) list_single_cmail_header_editor_pane_bg_ParamLimits

0x1bd8,	// (0x0003f15a) list_single_cmail_header_editor_pane_bg

0xe2e2,	// (0x0004b864) list_cmail_body_pane_g1

0xe83a,	// (0x0004bdbc) list_cmail_body_pane_t1

0xd6a9,	// (0x0004ac2b) list_single_cmail_header_editor_pane_bg_g1

0xaca9,	// (0x0004822b) list_single_cmail_header_editor_pane_bg_g1_copy1

0xd6b9,	// (0x0004ac3b) list_single_cmail_header_editor_pane_bg_g1_copy2

0xd6b1,	// (0x0004ac33) list_single_cmail_header_editor_pane_bg_g1_copy3

0xd8cd,	// (0x0004ae4f) list_single_cmail_header_editor_pane_bg_g1_copy4

0xd6d9,	// (0x0004ac5b) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xd6c9,	// (0x0004ac4b) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xd6d1,	// (0x0004ac53) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xac89,	// (0x0004820b) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0x93a4,	// (0x00046926) calenote_gesture_pane_ParamLimits

0x93a4,	// (0x00046926) calenote_gesture_pane

0x93be,	// (0x00046940) calenote_window_pane_ParamLimits

0x93be,	// (0x00046940) calenote_window_pane

0xe848,	// (0x0004bdca) popup_note_window_cp01

0x93d6,	// (0x00046958) calenote_swipe_1_pane_ParamLimits

0x93d6,	// (0x00046958) calenote_swipe_1_pane

0x911e,	// (0x000466a0) calenote_swipe_2_pane_ParamLimits

0x911e,	// (0x000466a0) calenote_swipe_2_pane

0xe634,	// (0x0004bbb6) calenote_swipe_1_pane_g1_ParamLimits

0xe634,	// (0x0004bbb6) calenote_swipe_1_pane_g1

0xe641,	// (0x0004bbc3) calenote_swipe_1_pane_g2_ParamLimits

0xe641,	// (0x0004bbc3) calenote_swipe_1_pane_g2

0x0001,

0xfcbf,	// (0x0004d241) calenote_swipe_1_pane_g_ParamLimits

0xfcbf,	// (0x0004d241) calenote_swipe_1_pane_g

0xe85a,	// (0x0004bddc) calenote_swipe_1_pane_t1_ParamLimits

0xe85a,	// (0x0004bddc) calenote_swipe_1_pane_t1

0xe634,	// (0x0004bbb6) calenote_swipe_2_pane_g1_ParamLimits

0xe634,	// (0x0004bbb6) calenote_swipe_2_pane_g1

0xe879,	// (0x0004bdfb) calenote_swipe_2_pane_g2_ParamLimits

0xe879,	// (0x0004bdfb) calenote_swipe_2_pane_g2

0x0001,

0xfdab,	// (0x0004d32d) calenote_swipe_2_pane_g_ParamLimits

0xfdab,	// (0x0004d32d) calenote_swipe_2_pane_g

0xe885,	// (0x0004be07) calenote_swipe_2_pane_t1_ParamLimits

0xe885,	// (0x0004be07) calenote_swipe_2_pane_t1

0xa12c,	// (0x000476ae) main_mup_navstr_pane

0x6283,	// (0x00043805) main_mup3_pane_t7_ParamLimits

0x6283,	// (0x00043805) main_mup3_pane_t7

0x6cca,	// (0x0004424c) main_mp4_pane_g6_ParamLimits

0x6cca,	// (0x0004424c) main_mp4_pane_g6

0x705a,	// (0x000445dc) main_image3_pane_t4_ParamLimits

0x705a,	// (0x000445dc) main_image3_pane_t4

0x93e9,	// (0x0004696b) popup_navstr_preview_pane_ParamLimits

0x93e9,	// (0x0004696b) popup_navstr_preview_pane

0x93f5,	// (0x00046977) scroll_navstr_pane_ParamLimits

0x93f5,	// (0x00046977) scroll_navstr_pane

0xa12c,	// (0x000476ae) bg_popup_preview_window_pane_cp04

0xe8ac,	// (0x0004be2e) popup_navstr_preview_pane_t1

0x9401,	// (0x00046983) scroll_navstr_pane_g1_ParamLimits

0x9401,	// (0x00046983) scroll_navstr_pane_g1

0x940e,	// (0x00046990) scroll_navstr_pane_t1_ParamLimits

0x940e,	// (0x00046990) scroll_navstr_pane_t1

0xe851,	// (0x0004bdd3) bg_button_pane_cp014

0xe851,	// (0x0004bdd3) bg_button_pane_cp030

0x14a0,	// (0x0003ea22) list_double_fisheye_pane_g4_ParamLimits

0x14a0,	// (0x0003ea22) list_double_fisheye_pane_g4

0x14ac,	// (0x0003ea2e) list_double_fisheye_pane_g5_ParamLimits

0x14ac,	// (0x0003ea2e) list_double_fisheye_pane_g5

0xdb33,	// (0x0004b0b5) sp_fs_scroll_pane_cp03

0xe75d,	// (0x0004bcdf) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xe769,	// (0x0004bceb) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfcdc,	// (0x0004d25e) main_sp_fs_ctrlbar_pane_g_ParamLimits

0x91bf,	// (0x00046741) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xe80e,	// (0x0004bd90) sp_fs_scroll_pane_cp02

0xa98f,	// (0x00047f11) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0xa98f,	// (0x00047f11) popup_sp_fs_calendar_preview_list_single_pane

0xa12c,	// (0x000476ae) main_cam6_pano_pane

0xaf98,	// (0x0004851a) main_mup3_pane_ParamLimits

0xa12c,	// (0x000476ae) main_phacti_pane

0x8cad,	// (0x0004622f) bg_button_pane_cp11

0x8cc5,	// (0x00046247) main_mobtv_info_pane_g2_ParamLimits

0x8cc5,	// (0x00046247) main_mobtv_info_pane_g2

0x0001,

0xfc3c,	// (0x0004d1be) main_mobtv_info_pane_g_ParamLimits

0xfc3c,	// (0x0004d1be) main_mobtv_info_pane_g

0x8e77,	// (0x000463f9) sc_clock_pane_t5_ParamLimits

0x8e77,	// (0x000463f9) sc_clock_pane_t5

0x8f18,	// (0x0004649a) main_radioblah_pane_g1_ParamLimits

0xe580,	// (0x0004bb02) main_radioblah_pane_t3_ParamLimits

0xe580,	// (0x0004bb02) main_radioblah_pane_t3

0xe598,	// (0x0004bb1a) main_radioblah_pane_t4_ParamLimits

0xe598,	// (0x0004bb1a) main_radioblah_pane_t4

0x8f36,	// (0x000464b8) main_radioblah_text_pane_ParamLimits

0x8f36,	// (0x000464b8) main_radioblah_text_pane

0x8f43,	// (0x000464c5) main_radioblah_info_pane_g1_ParamLimits

0x8fd8,	// (0x0004655a) main_radioblah_info_pane_t4_ParamLimits

0x8fd8,	// (0x0004655a) main_radioblah_info_pane_t4

0xaf98,	// (0x0004851a) main_sp_fs_calendar_pane

0x9420,	// (0x000469a2) main_phacti_pane_g1

0x9428,	// (0x000469aa) phacti_note_pane_ParamLimits

0x9428,	// (0x000469aa) phacti_note_pane

0xe8c3,	// (0x0004be45) phacti_term_pane_ParamLimits

0xe8c3,	// (0x0004be45) phacti_term_pane

0xe8d8,	// (0x0004be5a) phacti_note_pane_t1_ParamLimits

0xe8d8,	// (0x0004be5a) phacti_note_pane_t1

0x1bef,	// (0x0003f171) phacti_term_pane_g1

0x1bf7,	// (0x0003f179) phacti_term_pane_t1_ParamLimits

0x1bf7,	// (0x0003f179) phacti_term_pane_t1

0xe8ef,	// (0x0004be71) popup_sp_fs_calendar_preview_list_single_pane_g1

0xe8f7,	// (0x0004be79) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfdb5,	// (0x0004d337) popup_sp_fs_calendar_preview_list_single_pane_g

0xe8ff,	// (0x0004be81) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xe8ff,	// (0x0004be81) popup_sp_fs_calendar_preview_list_single_pane_t1

0xe915,	// (0x0004be97) aid_popup_sp_fs_bg_corner_pane

0xcd13,	// (0x0004a295) popup_sp_fs_calendar_preview_bg_pane_g1

0xa12c,	// (0x000476ae) popup_sp_fs_calendar_preview_bg_pane

0xa883,	// (0x00047e05) popup_sp_fs_calendar_preview_list_pane

0xc90b,	// (0x00049e8d) bg_main_sp_fs_cale_pane_ParamLimits

0xc90b,	// (0x00049e8d) bg_main_sp_fs_cale_pane

0x1c2a,	// (0x0003f1ac) listscroll_cale_mrui_pane_ParamLimits

0x1c2a,	// (0x0003f1ac) listscroll_cale_mrui_pane

0x1c3f,	// (0x0003f1c1) listscroll_sp_fs_schedule_track_pane

0x1c48,	// (0x0003f1ca) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0x1c48,	// (0x0003f1ca) main_sp_fs_ctrlbar_pane_cp01

0xe91d,	// (0x0004be9f) main_sp_fs_ribbon_pane

0x1c5b,	// (0x0003f1dd) popup_sp_fs_cale_preview_window

0x948b,	// (0x00046a0d) list_single_sp_fs_schedule_track_pane_ParamLimits

0x948b,	// (0x00046a0d) list_single_sp_fs_schedule_track_pane

0xdb3f,	// (0x0004b0c1) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0xdb3f,	// (0x0004b0c1) bg_sp_fs_highlight_list_pane_cp03

0x94ae,	// (0x00046a30) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0x94ae,	// (0x00046a30) list_single_sp_fs_schedule_track_pane_g1

0x94ba,	// (0x00046a3c) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0x94ba,	// (0x00046a3c) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfdba,	// (0x0004d33c) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfdba,	// (0x0004d33c) list_single_sp_fs_schedule_track_pane_g

0x94c6,	// (0x00046a48) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0x94c6,	// (0x00046a48) list_single_sp_fs_schedule_track_pane_t1

0x94de,	// (0x00046a60) sp_fs_schedule_track_pane_ParamLimits

0x94de,	// (0x00046a60) sp_fs_schedule_track_pane

0xe925,	// (0x0004bea7) sp_fs_schedule_track_pane_g1

0xe92d,	// (0x0004beaf) sp_fs_schedule_track_pane_g2

0xe935,	// (0x0004beb7) sp_fs_schedule_track_pane_g3

0xe93d,	// (0x0004bebf) sp_fs_schedule_track_pane_g4

0xe945,	// (0x0004bec7) sp_fs_schedule_track_pane_g5

0x0004,

0xfdbf,	// (0x0004d341) sp_fs_schedule_track_pane_g

0xd6a9,	// (0x0004ac2b) bg_sp_fs_schedule_viewer_highlight_g1

0xaca9,	// (0x0004822b) bg_sp_fs_schedule_viewer_highlight_g2

0xd6b1,	// (0x0004ac33) bg_sp_fs_schedule_viewer_highlight_g3

0xd6b9,	// (0x0004ac3b) bg_sp_fs_schedule_viewer_highlight_g4

0xd8cd,	// (0x0004ae4f) bg_sp_fs_schedule_viewer_highlight_g5

0xd6c9,	// (0x0004ac4b) bg_sp_fs_schedule_viewer_highlight_g6

0xd6d1,	// (0x0004ac53) bg_sp_fs_schedule_viewer_highlight_g7

0xd6d9,	// (0x0004ac5b) bg_sp_fs_schedule_viewer_highlight_g8

0xac89,	// (0x0004820b) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfdca,	// (0x0004d34c) bg_sp_fs_schedule_viewer_highlight_g

0xa12c,	// (0x000476ae) bg_main_sp_fs_ribbon_pane

0x94ee,	// (0x00046a70) main_sp_fs_ribbon_pane_g1

0xe94d,	// (0x0004becf) main_sp_fs_ribbon_pane_t1

0x94f7,	// (0x00046a79) main_sp_fs_ribbon_pane_t2

0xe95c,	// (0x0004bede) main_sp_fs_ribbon_pane_t3

0x0002,

0xfddd,	// (0x0004d35f) main_sp_fs_ribbon_pane_t

0xe96b,	// (0x0004beed) main_sp_fs_ribbon_scheduler_pane

0xe973,	// (0x0004bef5) bg_main_sp_fs_ribbon_pane_g1

0xe97c,	// (0x0004befe) bg_main_sp_fs_ribbon_pane_g2

0xe985,	// (0x0004bf07) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfde4,	// (0x0004d366) bg_main_sp_fs_ribbon_pane_g

0xe98d,	// (0x0004bf0f) main_sp_fs_ribbon_scheduler_pane_g1

0xe996,	// (0x0004bf18) main_sp_fs_ribbon_scheduler_pane_g2

0xe99f,	// (0x0004bf21) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfdeb,	// (0x0004d36d) main_sp_fs_ribbon_scheduler_pane_g

0xe9a8,	// (0x0004bf2a) list_cale_mrui_pane

0x9506,	// (0x00046a88) sp_fs_scroll_pane_cp07_ParamLimits

0x9506,	// (0x00046a88) sp_fs_scroll_pane_cp07

0x9522,	// (0x00046aa4) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0x9522,	// (0x00046aa4) bg_sp_fs_schedule_viewer_highlight

0xe9b5,	// (0x0004bf37) list_single_sp_fs_schedule_track_pane_cp01

0xe9bd,	// (0x0004bf3f) list_sp_fs_schedule_track_pane

0xe9c5,	// (0x0004bf47) sp_fs_scroll_pane_cp06_ParamLimits

0xe9c5,	// (0x0004bf47) sp_fs_scroll_pane_cp06

0xcd13,	// (0x0004a295) bgmain_sp_fs_calendar_pane_g1

0x1c6d,	// (0x0003f1ef) list_single_cale_mrui_pane_ParamLimits

0x1c6d,	// (0x0003f1ef) list_single_cale_mrui_pane

0x1c9e,	// (0x0003f220) list_single_cale_mrui_row_pane_ParamLimits

0x1c9e,	// (0x0003f220) list_single_cale_mrui_row_pane

0x1cab,	// (0x0003f22d) list_single_cale_mrui_row_pane_g1_ParamLimits

0x1cab,	// (0x0003f22d) list_single_cale_mrui_row_pane_g1

0x1ce3,	// (0x0003f265) list_single_cale_mrui_row_pane_t1_ParamLimits

0x1ce3,	// (0x0003f265) list_single_cale_mrui_row_pane_t1

0x1cf5,	// (0x0003f277) list_single_cale_mrui_row_pane_t2_ParamLimits

0x1cf5,	// (0x0003f277) list_single_cale_mrui_row_pane_t2

0x1d5b,	// (0x0003f2dd) list_single_cale_mrui_row_pane_t3_ParamLimits

0x1d5b,	// (0x0003f2dd) list_single_cale_mrui_row_pane_t3

0x1d8a,	// (0x0003f30c) list_single_cale_mrui_row_pane_t4_ParamLimits

0x1d8a,	// (0x0003f30c) list_single_cale_mrui_row_pane_t4

0x0003,

0xfdf9,	// (0x0004d37b) list_single_cale_mrui_row_pane_t_ParamLimits

0xfdf9,	// (0x0004d37b) list_single_cale_mrui_row_pane_t

0x1db9,	// (0x0003f33b) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x1db9,	// (0x0003f33b) list_single_cmail_header_editor_pane_bg_cp01

0x1dd9,	// (0x0003f35b) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x1dd9,	// (0x0003f35b) list_single_cmail_header_editor_pane_bg_cp02

0x952f,	// (0x00046ab1) main_radioblah_text_pane_t1_ParamLimits

0x952f,	// (0x00046ab1) main_radioblah_text_pane_t1

0xe9e4,	// (0x0004bf66) cam6_indi_pane_cp01

0xe9ec,	// (0x0004bf6e) cam6_mode_pane_cp01

0xe9f4,	// (0x0004bf76) cam6_pano_pane

0xe9fd,	// (0x0004bf7f) cam6_zoom_pane_cp01

0xea05,	// (0x0004bf87) cam6_pano_image_pane

0xea10,	// (0x0004bf92) cam6_pano_pane_g1

0xe2e2,	// (0x0004b864) cam6_pano_pane_g2

0xea19,	// (0x0004bf9b) cam6_pano_pane_g3

0xea22,	// (0x0004bfa4) cam6_pano_pane_g4

0xd2b5,	// (0x0004a837) cam6_pano_pane_g5

0xea2b,	// (0x0004bfad) cam6_pano_pane_g6

0xea35,	// (0x0004bfb7) cam6_pano_pane_g7

0xea3d,	// (0x0004bfbf) cam6_pano_pane_g8

0xea46,	// (0x0004bfc8) cam6_pano_pane_g9

0x0008,

0xfe02,	// (0x0004d384) cam6_pano_pane_g

0xa12c,	// (0x000476ae) main_browser_tag_pane

0xe8a4,	// (0x0004be26) grid_navstr_albumart_pane

0xea51,	// (0x0004bfd3) cell_navstr_albumart_pane_ParamLimits

0xea51,	// (0x0004bfd3) cell_navstr_albumart_pane

0xea71,	// (0x0004bff3) cell_navstr_albumart_pane_g1

0xc6dc,	// (0x00049c5e) cell_navstr_albumart_pane_g2

0xc6ec,	// (0x00049c6e) cell_navstr_albumart_pane_g3

0xc6e4,	// (0x00049c66) cell_navstr_albumart_pane_g4

0x0003,

0xfe15,	// (0x0004d397) cell_navstr_albumart_pane_g

0x954a,	// (0x00046acc) bt_list_pane_ParamLimits

0x954a,	// (0x00046acc) bt_list_pane

0x956b,	// (0x00046aed) bt_list_pane_t1

0x957a,	// (0x00046afc) bt_list_pane_t2

0x0001,

0xfe1e,	// (0x0004d3a0) bt_list_pane_t

0xa12c,	// (0x000476ae) main_cale_prevew_pane

0x9589,	// (0x00046b0b) popup_cale_preview_window_ParamLimits

0x9589,	// (0x00046b0b) popup_cale_preview_window

0xaf98,	// (0x0004851a) bg_popup_preview_window_pane_cp05_ParamLimits

0xaf98,	// (0x0004851a) bg_popup_preview_window_pane_cp05

0xea79,	// (0x0004bffb) list_cale_preview_pane_ParamLimits

0xea79,	// (0x0004bffb) list_cale_preview_pane

0x95a2,	// (0x00046b24) list_double_cale_preview_pane_ParamLimits

0x95a2,	// (0x00046b24) list_double_cale_preview_pane

0x95b4,	// (0x00046b36) list_single_cale_preview_pane_ParamLimits

0x95b4,	// (0x00046b36) list_single_cale_preview_pane

0x95c8,	// (0x00046b4a) list_single_cale_preview_pane_g1

0x95d0,	// (0x00046b52) list_single_cale_preview_pane_t1_ParamLimits

0x95d0,	// (0x00046b52) list_single_cale_preview_pane_t1

0x95e5,	// (0x00046b67) list_double_cale_preview_pane_g1

0x95ed,	// (0x00046b6f) list_double_cale_preview_pane_t1_ParamLimits

0x95ed,	// (0x00046b6f) list_double_cale_preview_pane_t1

0x9602,	// (0x00046b84) list_double_cale_preview_pane_t2_ParamLimits

0x9602,	// (0x00046b84) list_double_cale_preview_pane_t2

0x0001,

0xfe23,	// (0x0004d3a5) list_double_cale_preview_pane_t_ParamLimits

0xfe23,	// (0x0004d3a5) list_double_cale_preview_pane_t

0xa12c,	// (0x000476ae) main_ezdial_pane

0xaf98,	// (0x0004851a) main_sp_fs_email_pane_ParamLimits

0x9138,	// (0x000466ba) cmail_ddmenu_btn01_pane_ParamLimits

0x9138,	// (0x000466ba) cmail_ddmenu_btn01_pane

0x914d,	// (0x000466cf) cmail_ddmenu_btn02_pane_ParamLimits

0x914d,	// (0x000466cf) cmail_ddmenu_btn02_pane

0x9165,	// (0x000466e7) cmail_ddmenu_btn03_pane_ParamLimits

0x9165,	// (0x000466e7) cmail_ddmenu_btn03_pane

0x91fa,	// (0x0004677c) main_sp_fs_ctrlbar_pane_ParamLimits

0x9210,	// (0x00046792) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0x9317,	// (0x00046899) list_cmail_body_pane_ParamLimits

0xe824,	// (0x0004bda6) bg_button_pane_cp12

0xe82d,	// (0x0004bdaf) list_single_cmail_header_detail_pane_g3_ParamLimits

0xe82d,	// (0x0004bdaf) list_single_cmail_header_detail_pane_g3

0x1bb4,	// (0x0003f136) list_single_cmail_header_detail_pane_t2_ParamLimits

0x1bb4,	// (0x0003f136) list_single_cmail_header_detail_pane_t2

0x0001,

0xfda6,	// (0x0004d328) list_single_cmail_header_detail_pane_t_ParamLimits

0xfda6,	// (0x0004d328) list_single_cmail_header_detail_pane_t

0x1c0c,	// (0x0003f18e) phacti_term_pane_t2_ParamLimits

0x1c0c,	// (0x0003f18e) phacti_term_pane_t2

0x0001,

0xfdb0,	// (0x0004d332) phacti_term_pane_t_ParamLimits

0xfdb0,	// (0x0004d332) phacti_term_pane_t

0xea85,	// (0x0004c007) aid_size_list_single_double

0x961a,	// (0x00046b9c) popup_ezdial_listscroll_window

0x963e,	// (0x00046bc0) popup_number_entry_window_cp01

0xaa50,	// (0x00047fd2) bg_popup_call_pane_cp09

0xea91,	// (0x0004c013) ezdial_list_pane

0xea99,	// (0x0004c01b) scroll_pane_cp23

0xcaf8,	// (0x0004a07a) bg_button_pane_cp028_ParamLimits

0xcaf8,	// (0x0004a07a) bg_button_pane_cp028

0x964c,	// (0x00046bce) cmail_ddmenu_btn01_pane_g1_ParamLimits

0x964c,	// (0x00046bce) cmail_ddmenu_btn01_pane_g1

0x965c,	// (0x00046bde) cmail_ddmenu_btn01_pane_g2_ParamLimits

0x965c,	// (0x00046bde) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfe28,	// (0x0004d3aa) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfe28,	// (0x0004d3aa) cmail_ddmenu_btn01_pane_g

0xeaa1,	// (0x0004c023) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xeaa1,	// (0x0004c023) cmail_ddmenu_btn01_pane_t1

0xc90b,	// (0x00049e8d) bg_button_pane_cp029_ParamLimits

0xc90b,	// (0x00049e8d) bg_button_pane_cp029

0x965c,	// (0x00046bde) cmail_ddmenu_btn02_pane_g1_ParamLimits

0x965c,	// (0x00046bde) cmail_ddmenu_btn02_pane_g1

0x9674,	// (0x00046bf6) cmail_ddmenu_btn02_pane_t1_ParamLimits

0x9674,	// (0x00046bf6) cmail_ddmenu_btn02_pane_t1

0xdb3f,	// (0x0004b0c1) bg_button_pane_cp031_ParamLimits

0xdb3f,	// (0x0004b0c1) bg_button_pane_cp031

0x965c,	// (0x00046bde) cmail_ddmenu_btn03_pane_g1_ParamLimits

0x965c,	// (0x00046bde) cmail_ddmenu_btn03_pane_g1

0x9674,	// (0x00046bf6) cmail_ddmenu_btn03_pane_t1_ParamLimits

0x9674,	// (0x00046bf6) cmail_ddmenu_btn03_pane_t1

0x6f05,	// (0x00044487) cell_dialer2_keypad_pane_t1_ParamLimits

0x6f1f,	// (0x000444a1) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x6f1f,	// (0x000444a1) cell_dialer2_keypad_pane_t1_copy1

0x8aee,	// (0x00046070) ncimui_group_button_pane

0xaf98,	// (0x0004851a) main_sp_fs_calendar_pane_ParamLimits

0x933f,	// (0x000468c1) list_single_cmail_header_caption_pane_ParamLimits

0x1c21,	// (0x0003f1a3) aid_recal_txt_sm_pane

0xa12c,	// (0x000476ae) mian_recal_day_pane

0x1c5b,	// (0x0003f1dd) popup_sp_fs_cale_preview_window_ParamLimits

0xeab6,	// (0x0004c038) list_recal_day_pane

0x1e10,	// (0x0003f392) list_single_recal_day_pane_ParamLimits

0x1e10,	// (0x0003f392) list_single_recal_day_pane

0xeadd,	// (0x0004c05f) list_single_recal_day_pane_g1_ParamLimits

0xeadd,	// (0x0004c05f) list_single_recal_day_pane_g1

0x1e22,	// (0x0003f3a4) list_single_recal_day_pane_g2_ParamLimits

0x1e22,	// (0x0003f3a4) list_single_recal_day_pane_g2

0x1e2e,	// (0x0003f3b0) list_single_recal_day_pane_g3_ParamLimits

0x1e2e,	// (0x0003f3b0) list_single_recal_day_pane_g3

0x1e3a,	// (0x0003f3bc) list_single_recal_day_pane_g4_ParamLimits

0x1e3a,	// (0x0003f3bc) list_single_recal_day_pane_g4

0x1e48,	// (0x0003f3ca) list_single_recal_day_pane_g5_ParamLimits

0x1e48,	// (0x0003f3ca) list_single_recal_day_pane_g5

0x1e5e,	// (0x0003f3e0) list_single_recal_day_pane_g6_ParamLimits

0x1e5e,	// (0x0003f3e0) list_single_recal_day_pane_g6

0x0004,

0xfe37,	// (0x0004d3b9) list_single_recal_day_pane_g_ParamLimits

0xfe37,	// (0x0004d3b9) list_single_recal_day_pane_g

0x1e72,	// (0x0003f3f4) list_single_recal_day_pane_t1

0x1e84,	// (0x0003f406) list_single_recal_day_pane_t2

0x0001,

0xfe42,	// (0x0004d3c4) list_single_recal_day_pane_t

0x9698,	// (0x00046c1a) ncimui_query_button_pane_ParamLimits

0x9698,	// (0x00046c1a) ncimui_query_button_pane

0x96a8,	// (0x00046c2a) ncimui_query_button_pane_t1_ParamLimits

0x96a8,	// (0x00046c2a) ncimui_query_button_pane_t1

0xeae9,	// (0x0004c06b) ncimui_query_button_pane_t2_ParamLimits

0xeae9,	// (0x0004c06b) ncimui_query_button_pane_t2

0x0001,

0xfe47,	// (0x0004d3c9) ncimui_query_button_pane_t_ParamLimits

0xfe47,	// (0x0004d3c9) ncimui_query_button_pane_t

0x96bb,	// (0x00046c3d) query_button_pane_ParamLimits

0x96bb,	// (0x00046c3d) query_button_pane

0xa12c,	// (0x000476ae) bg_button_pane_cp0028

0xeafc,	// (0x0004c07e) query_button_pane_t1

0x5287,	// (0x00042809) main_tport_pane_ParamLimits

0x9221,	// (0x000467a3) bg_popup_window_pane_cp01_ParamLimits

0x9221,	// (0x000467a3) bg_popup_window_pane_cp01

0x922f,	// (0x000467b1) heading_pane_cp08_ParamLimits

0x922f,	// (0x000467b1) heading_pane_cp08

0x923d,	// (0x000467bf) heading_pane_cp07_ParamLimits

0x923d,	// (0x000467bf) heading_pane_cp07

0x92ac,	// (0x0004682e) cell_tport_appsw_pane_g2

0x0002,

0xfd93,	// (0x0004d315) cell_tport_appsw_pane_g

0x0e73,	// (0x0003e3f5) input_candi_list_open_g1

0xae6c,	// (0x000483ee) list_cale_time_pane_g6_ParamLimits

0xae6c,	// (0x000483ee) list_cale_time_pane_g6

0x5d0e,	// (0x00043290) aid_size_touch_calib_1_ParamLimits

0x5d0e,	// (0x00043290) aid_size_touch_calib_1

0x5d1a,	// (0x0004329c) aid_size_touch_calib_2_ParamLimits

0x5d1a,	// (0x0004329c) aid_size_touch_calib_2

0x5d28,	// (0x000432aa) aid_size_touch_calib_3_ParamLimits

0x5d28,	// (0x000432aa) aid_size_touch_calib_3

0x5d38,	// (0x000432ba) aid_size_touch_calib_4_ParamLimits

0x5d38,	// (0x000432ba) aid_size_touch_calib_4

0x5d46,	// (0x000432c8) main_touch_calib_button_group_pane_ParamLimits

0x5d46,	// (0x000432c8) main_touch_calib_button_group_pane

0x5d54,	// (0x000432d6) main_touch_calib_pane_g1_ParamLimits

0x5d60,	// (0x000432e2) main_touch_calib_pane_g2_ParamLimits

0x5d6c,	// (0x000432ee) main_touch_calib_pane_g3_ParamLimits

0x5d78,	// (0x000432fa) main_touch_calib_pane_g4_ParamLimits

0xf749,	// (0x0004cccb) main_touch_calib_pane_g_ParamLimits

0x5d84,	// (0x00043306) main_touch_calib_pane_t1_ParamLimits

0x5d9d,	// (0x0004331f) main_touch_calib_pane_t2_ParamLimits

0x5db6,	// (0x00043338) main_touch_calib_pane_t3_ParamLimits

0x5dcc,	// (0x0004334e) main_touch_calib_pane_t4_ParamLimits

0x5de2,	// (0x00043364) main_touch_calib_pane_t5_ParamLimits

0xf752,	// (0x0004ccd4) main_touch_calib_pane_t_ParamLimits

0xd058,	// (0x0004a5da) list_single_fp_cale_pane_g3_ParamLimits

0xd058,	// (0x0004a5da) list_single_fp_cale_pane_g3

0xaf98,	// (0x0004851a) bg_button_pane_cp012_ParamLimits

0xaf98,	// (0x0004851a) bg_vkb2_func_pane_cp03_ParamLimits

0x7d87,	// (0x00045309) cell_vitu2_function_top_pane_g1_ParamLimits

0xaf98,	// (0x0004851a) bg_vkb2_func_pane_cp04_ParamLimits

0x8a76,	// (0x00045ff8) main_ncimui_button_group_pane_ParamLimits

0x8a76,	// (0x00045ff8) main_ncimui_button_group_pane

0x8adc,	// (0x0004605e) main_ncimui_pane_t3_ParamLimits

0x8adc,	// (0x0004605e) main_ncimui_pane_t3

0xe8ba,	// (0x0004be3c) phacti_button_group_pane

0xea85,	// (0x0004c007) aid_size_list_single_double_ParamLimits

0x961a,	// (0x00046b9c) popup_ezdial_listscroll_window_ParamLimits

0x963e,	// (0x00046bc0) popup_number_entry_window_cp01_ParamLimits

0x96c8,	// (0x00046c4a) phacti_button_pane_ParamLimits

0x96c8,	// (0x00046c4a) phacti_button_pane

0xa12c,	// (0x000476ae) bg_button_pane_cp14

0xeb0a,	// (0x0004c08c) phacti_button_pane_t1

0x96d9,	// (0x00046c5b) main_touch_calib_button_pane_ParamLimits

0x96d9,	// (0x00046c5b) main_touch_calib_button_pane

0xa88b,	// (0x00047e0d) bg_button_pane_cp18_ParamLimits

0xa88b,	// (0x00047e0d) bg_button_pane_cp18

0xeb18,	// (0x0004c09a) main_touch_calib_button_pane_t1_ParamLimits

0xeb18,	// (0x0004c09a) main_touch_calib_button_pane_t1

0xeb2e,	// (0x0004c0b0) main_touch_calib_button_pane_t2_ParamLimits

0xeb2e,	// (0x0004c0b0) main_touch_calib_button_pane_t2

0x0001,

0xfe4c,	// (0x0004d3ce) main_touch_calib_button_pane_t_ParamLimits

0xfe4c,	// (0x0004d3ce) main_touch_calib_button_pane_t

0xa12c,	// (0x000476ae) cell_ncimui_button_pane

0xa12c,	// (0x000476ae) bg_button_pane_cp032

0xeb4c,	// (0x0004c0ce) cell_ncimui_button_pane_t1

0x6f7b,	// (0x000444fd) image3_infobar_pane_ParamLimits

0x6f7b,	// (0x000444fd) image3_infobar_pane

0x8e99,	// (0x0004641b) fs_bigclock_status_pane_ParamLimits

0x8e99,	// (0x0004641b) fs_bigclock_status_pane

0x8ea6,	// (0x00046428) main_fs_bigclock_clock_pane_ParamLimits

0x8ea6,	// (0x00046428) main_fs_bigclock_clock_pane

0x8eba,	// (0x0004643c) main_fs_bigclock_indi_pane_ParamLimits

0x8eba,	// (0x0004643c) main_fs_bigclock_indi_pane

0x8ee2,	// (0x00046464) main_fs_bigclock_swipe_pane_ParamLimits

0x8ee2,	// (0x00046464) main_fs_bigclock_swipe_pane

0xa12c,	// (0x000476ae) main_fs_clock_dumped_data

0xe3ef,	// (0x0004b971) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xe3ef,	// (0x0004b971) list_single_fs_bigclock_indicator_pane_g1

0xe40b,	// (0x0004b98d) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xe40b,	// (0x0004b98d) list_single_fs_bigclock_indicator_pane_g2

0xe425,	// (0x0004b9a7) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xe425,	// (0x0004b9a7) list_single_fs_bigclock_indicator_pane_g3

0xe43f,	// (0x0004b9c1) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xe43f,	// (0x0004b9c1) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfc70,	// (0x0004d1f2) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfc70,	// (0x0004d1f2) list_single_fs_bigclock_indicator_pane_g

0xe46a,	// (0x0004b9ec) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xe46a,	// (0x0004b9ec) list_single_fs_bigclock_indicator_pane_t1

0xe492,	// (0x0004ba14) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xe492,	// (0x0004ba14) list_single_fs_bigclock_indicator_pane_t2

0xe4ba,	// (0x0004ba3c) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xe4ba,	// (0x0004ba3c) list_single_fs_bigclock_indicator_pane_t3

0xe4e2,	// (0x0004ba64) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xe4e2,	// (0x0004ba64) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfc7b,	// (0x0004d1fd) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfc7b,	// (0x0004d1fd) list_single_fs_bigclock_indicator_pane_t

0xeb5a,	// (0x0004c0dc) image3_infobar_fav_pane_ParamLimits

0xeb5a,	// (0x0004c0dc) image3_infobar_fav_pane

0xeb6a,	// (0x0004c0ec) image3_infobar_loc_pane_ParamLimits

0xeb6a,	// (0x0004c0ec) image3_infobar_loc_pane

0xeb7e,	// (0x0004c100) image3_infobar_time_pane_ParamLimits

0xeb7e,	// (0x0004c100) image3_infobar_time_pane

0xcd13,	// (0x0004a295) image3_infobar_time_pane_g1

0xeb8e,	// (0x0004c110) image3_infobar_time_pane_t1

0xcd13,	// (0x0004a295) image3_infobar_loc_pane_g1

0xeb9c,	// (0x0004c11e) image3_infobar_loc_pane_g2

0x0001,

0xfe51,	// (0x0004d3d3) image3_infobar_loc_pane_g

0xeba4,	// (0x0004c126) image3_infobar_loc_pane_t1

0xcd13,	// (0x0004a295) image3_infobar_fav_pane_g1

0xebb2,	// (0x0004c134) image3_infobar_fav_pane_g2

0x0001,

0xfe56,	// (0x0004d3d8) image3_infobar_fav_pane_g

0xebba,	// (0x0004c13c) fs_bigclock_status_battery_pane

0xebc3,	// (0x0004c145) fs_bigclock_status_signal_pane

0xebcc,	// (0x0004c14e) fs_bigclock_status_title_pane

0xebd5,	// (0x0004c157) fs_bigclock_status_signal_pane_g1

0xebde,	// (0x0004c160) fs_bigclock_status_signal_pane_g2

0x0001,

0xfe5b,	// (0x0004d3dd) fs_bigclock_status_signal_pane_g

0xebe6,	// (0x0004c168) fs_bigclock_status_battery_pane_g1

0xebef,	// (0x0004c171) fs_bigclock_status_battery_pane_g2

0x0001,

0xfe60,	// (0x0004d3e2) fs_bigclock_status_battery_pane_g

0xebf7,	// (0x0004c179) fs_bigclock_status_title_pane_t1

0x96e9,	// (0x00046c6b) main_fs_bigclock_clock_pane_g1

0x96e9,	// (0x00046c6b) main_fs_bigclock_clock_pane_g2

0x96f6,	// (0x00046c78) main_fs_bigclock_clock_pane_g3

0x96f6,	// (0x00046c78) main_fs_bigclock_clock_pane_g4

0x0003,

0xfe65,	// (0x0004d3e7) main_fs_bigclock_clock_pane_g

0x9702,	// (0x00046c84) main_fs_bigclock_clock_pane_t1

0x9715,	// (0x00046c97) main_fs_bigclock_clock_pane_t2

0x0001,

0xfe6e,	// (0x0004d3f0) main_fs_bigclock_clock_pane_t

0xec32,	// (0x0004c1b4) list_single_fs_bigclock_indicator_pane_ParamLimits

0xec32,	// (0x0004c1b4) list_single_fs_bigclock_indicator_pane

0xec43,	// (0x0004c1c5) list_single_fs_bigclock_pane_ParamLimits

0xec43,	// (0x0004c1c5) list_single_fs_bigclock_pane

0xec69,	// (0x0004c1eb) main_fs_bigclock_indicator_pane_t1

0xec78,	// (0x0004c1fa) list_single_fs_bigclock_pane_g1

0xec80,	// (0x0004c202) list_single_fs_bigclock_pane_t1

0xcd13,	// (0x0004a295) main_fs_bigclock_swipe_pane_g1

0xecc3,	// (0x0004c245) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfe7f,	// (0x0004d401) main_fs_bigclock_swipe_pane_g

0xeccb,	// (0x0004c24d) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xeccb,	// (0x0004c24d) main_fs_bigclock_swipe_pane_t1

0x42fa,	// (0x0004187c) call_type_pane_ParamLimits

0xa12c,	// (0x000476ae) main_btmg_pane

0x1cd7,	// (0x0003f259) list_single_cale_mrui_row_pane_g2_ParamLimits

0x1cd7,	// (0x0003f259) list_single_cale_mrui_row_pane_g2

0x0002,

0xfdf2,	// (0x0004d374) list_single_cale_mrui_row_pane_g_ParamLimits

0xfdf2,	// (0x0004d374) list_single_cale_mrui_row_pane_g

0x1dff,	// (0x0003f381) list_recal_vselct_arw_lo_pane

0xead5,	// (0x0004c057) list_recal_vselct_arw_up_pane

0x1e07,	// (0x0003f389) list_recal_vselct_pane

0x976c,	// (0x00046cee) btmg_button_pane

0x9778,	// (0x00046cfa) main_btmg_pane_g1

0xa12c,	// (0x000476ae) bg_button_pane_cp044

0xece8,	// (0x0004c26a) btmg_button_pane_t1

0xc8f7,	// (0x00049e79) aid_listscroll_gen

0xaf98,	// (0x0004851a) main_cntbar_detail_pane

0xe806,	// (0x0004bd88) list_cmail_folder_pane

0xdb33,	// (0x0004b0b5) sp_fs_scroll_pane_cp03_ParamLimits

0x1e96,	// (0x0003f418) list_single_fs_dyc_pane_cp01_ParamLimits

0x1e96,	// (0x0003f418) list_single_fs_dyc_pane_cp01

0xecf6,	// (0x0004c278) aid_size_cmail_indent

0x1ec5,	// (0x0003f447) list_single_dyc_row_pane_cp01

0x97a0,	// (0x00046d22) cntbar_detail_list_pane_ParamLimits

0x97a0,	// (0x00046d22) cntbar_detail_list_pane

0x97da,	// (0x00046d5c) main_cntbar_detail_cont_pane_ParamLimits

0x97da,	// (0x00046d5c) main_cntbar_detail_cont_pane

0x42ee,	// (0x00041870) scroll_pane_cp032_ParamLimits

0x42ee,	// (0x00041870) scroll_pane_cp032

0x97e6,	// (0x00046d68) cntbar_detail_list_event_pane_ParamLimits

0x97e6,	// (0x00046d68) cntbar_detail_list_event_pane

0x97ac,	// (0x00046d2e) cntbar_detail_list_shct_pane

0xacf7,	// (0x00048279) aid_list_gen

0xecff,	// (0x0004c281) aid_scroll

0xed08,	// (0x0004c28a) aid_size_touch_scroll_bar

0x8334,	// (0x000458b6) aid_list_double

0x1ece,	// (0x0003f450) aid_list_single

0x8322,	// (0x000458a4) aid_list_single_lg

0x1ed7,	// (0x0003f459) aid_list_z_g_a_sm

0x1edf,	// (0x0003f461) aid_list_z_g_d

0x1ee7,	// (0x0003f469) aid_txt_z_prm

0x1ef5,	// (0x0003f477) aid_txt_z_prm_cp01

0x1f03,	// (0x0003f485) aid_txt_z_sec

0x97fa,	// (0x00046d7c) main_cntbar_detail_cont_pane_g1_ParamLimits

0x97fa,	// (0x00046d7c) main_cntbar_detail_cont_pane_g1

0x9807,	// (0x00046d89) main_cntbar_detail_cont_pane_g2_ParamLimits

0x9807,	// (0x00046d89) main_cntbar_detail_cont_pane_g2

0x0001,

0xfe84,	// (0x0004d406) main_cntbar_detail_cont_pane_g_ParamLimits

0xfe84,	// (0x0004d406) main_cntbar_detail_cont_pane_g

0xed11,	// (0x0004c293) main_cntbar_detail_cont_pane_t1

0xed1f,	// (0x0004c2a1) main_cntbar_detail_cont_pane_t2

0xed2d,	// (0x0004c2af) main_cntbar_detail_cont_pane_t3

0x0002,

0xfe89,	// (0x0004d40b) main_cntbar_detail_cont_pane_t

0x9813,	// (0x00046d95) cell_cntbar_detail_list_shct_pane_ParamLimits

0x9813,	// (0x00046d95) cell_cntbar_detail_list_shct_pane

0xed3b,	// (0x0004c2bd) cntbar_detail_list_shct_pane_g1

0xed44,	// (0x0004c2c6) cntbar_detail_list_shct_pane_g2

0x0001,

0xfe90,	// (0x0004d412) cntbar_detail_list_shct_pane_g

0x9827,	// (0x00046da9) cntbar_detail_list_event_pane_g1_ParamLimits

0x9827,	// (0x00046da9) cntbar_detail_list_event_pane_g1

0x9833,	// (0x00046db5) cntbar_detail_list_event_pane_g2_ParamLimits

0x9833,	// (0x00046db5) cntbar_detail_list_event_pane_g2

0x0005,

0xfe95,	// (0x0004d417) cntbar_detail_list_event_pane_g_ParamLimits

0xfe95,	// (0x0004d417) cntbar_detail_list_event_pane_g

0x989f,	// (0x00046e21) cntbar_detail_list_event_pane_t1_ParamLimits

0x989f,	// (0x00046e21) cntbar_detail_list_event_pane_t1

0x98b4,	// (0x00046e36) cntbar_detail_list_event_pane_t2_ParamLimits

0x98b4,	// (0x00046e36) cntbar_detail_list_event_pane_t2

0x0002,

0xfea2,	// (0x0004d424) cntbar_detail_list_event_pane_t_ParamLimits

0xfea2,	// (0x0004d424) cntbar_detail_list_event_pane_t

0xcd13,	// (0x0004a295) cell_cntbar_detail_list_shct_pane_g1

0xb486,	// (0x00048a08) navi_pane_mv_g3

0xaf98,	// (0x0004851a) main_cntbar_detail_pane_ParamLimits

0xa12c,	// (0x000476ae) main_notif_wgt_pane

0x6c05,	// (0x00044187) aid_tch_main_mp4_pane_g4

0x6e64,	// (0x000443e6) popup_slider_window_cp02

0x1df5,	// (0x0003f377) list_recal_day_event_pane

0x9780,	// (0x00046d02) cntbar_detail_btn_pane_ParamLimits

0x9780,	// (0x00046d02) cntbar_detail_btn_pane

0x9790,	// (0x00046d12) cntbar_detail_btn_pane_cp01_ParamLimits

0x9790,	// (0x00046d12) cntbar_detail_btn_pane_cp01

0x97ac,	// (0x00046d2e) cntbar_detail_list_shct_pane_ParamLimits

0x97b8,	// (0x00046d3a) cntbar_detail_pane_g1_ParamLimits

0x97b8,	// (0x00046d3a) cntbar_detail_pane_g1

0x97c4,	// (0x00046d46) cntbar_detail_pane_t1_ParamLimits

0x97c4,	// (0x00046d46) cntbar_detail_pane_t1

0x983f,	// (0x00046dc1) cntbar_detail_list_event_pane_g3_ParamLimits

0x983f,	// (0x00046dc1) cntbar_detail_list_event_pane_g3

0x9857,	// (0x00046dd9) cntbar_detail_list_event_pane_g4_ParamLimits

0x9857,	// (0x00046dd9) cntbar_detail_list_event_pane_g4

0x986f,	// (0x00046df1) cntbar_detail_list_event_pane_g5_ParamLimits

0x986f,	// (0x00046df1) cntbar_detail_list_event_pane_g5

0x9887,	// (0x00046e09) cntbar_detail_list_event_pane_g6_ParamLimits

0x9887,	// (0x00046e09) cntbar_detail_list_event_pane_g6

0x98c9,	// (0x00046e4b) cntbar_detail_list_event_pane_t3_ParamLimits

0x98c9,	// (0x00046e4b) cntbar_detail_list_event_pane_t3

0x98db,	// (0x00046e5d) popup_notif_wgt_window_ParamLimits

0x98db,	// (0x00046e5d) popup_notif_wgt_window

0x98eb,	// (0x00046e6d) popup_submenu_window_cp01_ParamLimits

0x98eb,	// (0x00046e6d) popup_submenu_window_cp01

0xaa50,	// (0x00047fd2) bg_popup_window_pane_cp10

0xed4d,	// (0x0004c2cf) listscroll_notif_wgt_pane

0xed5f,	// (0x0004c2e1) list_notif_wgt_window

0xed68,	// (0x0004c2ea) scroll_pane_cp033

0x98f9,	// (0x00046e7b) list_notif_wgt_row_pane_ParamLimits

0x98f9,	// (0x00046e7b) list_notif_wgt_row_pane

0xed71,	// (0x0004c2f3) aid_size_list_notif_wgt_del

0xed7e,	// (0x0004c300) list_notif_wgt_row_pane_g1

0xed8a,	// (0x0004c30c) list_notif_wgt_row_pane_g2

0xed99,	// (0x0004c31b) list_notif_wgt_row_pane_g3

0x0002,

0xfea9,	// (0x0004d42b) list_notif_wgt_row_pane_g

0xeda6,	// (0x0004c328) list_notif_wgt_row_pane_t1

0xedbc,	// (0x0004c33e) list_notif_wgt_row_pane_t2

0xedce,	// (0x0004c350) list_notif_wgt_row_pane_t3

0x0002,

0xfeb0,	// (0x0004d432) list_notif_wgt_row_pane_t

0xd8d5,	// (0x0004ae57) list_recal_day_event_pane_g1

0xede0,	// (0x0004c362) list_recal_day_event_pane_t1

0xa12c,	// (0x000476ae) bg_button_pane_cp045

0x990b,	// (0x00046e8d) cntbar_detail_btn_pane_t1

0xc90b,	// (0x00049e8d) main_callh_pane_ParamLimits

0xc90b,	// (0x00049e8d) main_callh_pane

0xa12c,	// (0x000476ae) main_coverflow0_pane

0xa12c,	// (0x000476ae) main_wgtman_pane

0x8efa,	// (0x0004647c) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x8efa,	// (0x0004647c) main_fs_bigclock_unlock_btn_pane

0x92a4,	// (0x00046826) bg_button_pane_cp16

0x92b4,	// (0x00046836) cell_tport_appsw_pane_g3

0x9919,	// (0x00046e9b) cf0_flow_pane_ParamLimits

0x9919,	// (0x00046e9b) cf0_flow_pane

0xedef,	// (0x0004c371) listscroll_cf0_pane

0xedfa,	// (0x0004c37c) main_cf0_pane_g1

0x9928,	// (0x00046eaa) main_cf0_pane_t1_ParamLimits

0x9928,	// (0x00046eaa) main_cf0_pane_t1

0x993c,	// (0x00046ebe) main_cf0_pane_t2_ParamLimits

0x993c,	// (0x00046ebe) main_cf0_pane_t2

0x0001,

0xfebc,	// (0x0004d43e) main_cf0_pane_t_ParamLimits

0xfebc,	// (0x0004d43e) main_cf0_pane_t

0xee0c,	// (0x0004c38e) scroll_pane_cp11

0x9950,	// (0x00046ed2) cf0_flow_pane_g1

0x9958,	// (0x00046eda) cf0_flow_pane_g2

0x0001,

0xfec1,	// (0x0004d443) cf0_flow_pane_g

0x9960,	// (0x00046ee2) cf0_flow_pane_t1

0xa12c,	// (0x000476ae) main_call6_pane

0xa12c,	// (0x000476ae) main_calllock_pane

0x996e,	// (0x00046ef0) call6_btn_grp_pane_ParamLimits

0x996e,	// (0x00046ef0) call6_btn_grp_pane

0x997d,	// (0x00046eff) call6_pane_g1_ParamLimits

0x997d,	// (0x00046eff) call6_pane_g1

0x998d,	// (0x00046f0f) popup_call6_1st_window_ParamLimits

0x998d,	// (0x00046f0f) popup_call6_1st_window

0x999b,	// (0x00046f1d) popup_call6_2nd_window_ParamLimits

0x999b,	// (0x00046f1d) popup_call6_2nd_window

0x99a9,	// (0x00046f2b) cell_call6_btn_pane_ParamLimits

0x99a9,	// (0x00046f2b) cell_call6_btn_pane

0xaa50,	// (0x00047fd2) bg_popup_call2_in_pane_cp03

0xee17,	// (0x0004c399) popup_call6_1st_window_g1

0xee1f,	// (0x0004c3a1) popup_call6_1st_window_g2

0xee27,	// (0x0004c3a9) popup_call6_1st_window_g3

0x0002,

0xfec6,	// (0x0004d448) popup_call6_1st_window_g

0xee2f,	// (0x0004c3b1) popup_call6_1st_window_t1

0xee3e,	// (0x0004c3c0) popup_call6_1st_window_t2

0xee4c,	// (0x0004c3ce) popup_call6_1st_window_t3

0x0002,

0xfecd,	// (0x0004d44f) popup_call6_1st_window_t

0xaa50,	// (0x00047fd2) bg_popup_call2_in_pane_cp04

0xee17,	// (0x0004c399) popup_call6_2nd_window_g1

0xee1f,	// (0x0004c3a1) popup_call6_2nd_window_g2

0xee27,	// (0x0004c3a9) popup_call6_2nd_window_g3

0x0002,

0xfec6,	// (0x0004d448) popup_call6_2nd_window_g

0xee2f,	// (0x0004c3b1) popup_call6_2nd_window_t1

0xa12c,	// (0x000476ae) bg_button_pane_cp15

0xee7b,	// (0x0004c3fd) cell_call6_btn_pane_g1

0x99b8,	// (0x00046f3a) cell_call6_btn_pane_t1

0x99c7,	// (0x00046f49) listscroll_wgtman_pane_ParamLimits

0x99c7,	// (0x00046f49) listscroll_wgtman_pane

0x99e3,	// (0x00046f65) wgtman_btn_pane_ParamLimits

0x99e3,	// (0x00046f65) wgtman_btn_pane

0xb29a,	// (0x0004881c) aid_scroll_copy1

0xee5a,	// (0x0004c3dc) list_wgtman_pane

0x9a18,	// (0x00046f9a) wgtman_btn_pane_g1_ParamLimits

0x9a18,	// (0x00046f9a) wgtman_btn_pane_g1

0x9a40,	// (0x00046fc2) wgtman_btn_pane_t1_ParamLimits

0x9a40,	// (0x00046fc2) wgtman_btn_pane_t1

0xee64,	// (0x0004c3e6) wgtman_btn_pane_t2_ParamLimits

0xee64,	// (0x0004c3e6) wgtman_btn_pane_t2

0x0001,

0xfed4,	// (0x0004d456) wgtman_btn_pane_t_ParamLimits

0xfed4,	// (0x0004d456) wgtman_btn_pane_t

0x9a77,	// (0x00046ff9) listrow_wgtman_pane_ParamLimits

0x9a77,	// (0x00046ff9) listrow_wgtman_pane

0x9a93,	// (0x00047015) listrow_wgtman_pane_g1

0x9aa0,	// (0x00047022) listrow_wgtman_pane_g2

0x0001,

0xfed9,	// (0x0004d45b) listrow_wgtman_pane_g

0x1f11,	// (0x0003f493) listrow_wgtman_pane_t1

0x1f29,	// (0x0003f4ab) listrow_wgtman_pane_t2

0x0001,

0xfede,	// (0x0004d460) listrow_wgtman_pane_t

0x1f4f,	// (0x0003f4d1) wait_bar_pane_cp09

0xee84,	// (0x0004c406) main_calllock_btn_pane

0xee8e,	// (0x0004c410) main_calllock_pane_g1

0xa12c,	// (0x000476ae) bg_button_pane_cp17

0xee7b,	// (0x0004c3fd) main_calllock_btn_pane_g1

0xee9a,	// (0x0004c41c) main_calllock_btn_pane_t1

0xa12c,	// (0x000476ae) main_dialer3_pane

0xa12c,	// (0x000476ae) main_fmrd2_pane

0xcd13,	// (0x0004a295) main_fs_bigclock_unlock_btn_pane_g1

0x9ac6,	// (0x00047048) main_fs_bigclock_unlock_btn_pane_t1

0x9ad4,	// (0x00047056) area_fmrd2_info_pane_ParamLimits

0x9ad4,	// (0x00047056) area_fmrd2_info_pane

0x9ae2,	// (0x00047064) area_fmrd2_visual_pane_ParamLimits

0x9ae2,	// (0x00047064) area_fmrd2_visual_pane

0x9af0,	// (0x00047072) fmrd2_indi_pane_ParamLimits

0x9af0,	// (0x00047072) fmrd2_indi_pane

0x9afd,	// (0x0004707f) area_fmrd2_visual_pane_g1

0x9b05,	// (0x00047087) area_fmrd2_visual_pane_t1

0x9b15,	// (0x00047097) area_fmrd2_visual_pane_t2

0x9b25,	// (0x000470a7) area_fmrd2_visual_pane_t3

0x0002,

0xfee8,	// (0x0004d46a) area_fmrd2_visual_pane_t

0x9b35,	// (0x000470b7) area_fmrd2_info_pane_g1

0x9b3d,	// (0x000470bf) area_fmrd2_info_pane_t1

0x9b4d,	// (0x000470cf) area_fmrd2_info_pane_t2

0x9b5d,	// (0x000470df) area_fmrd2_info_pane_t3

0x9b6d,	// (0x000470ef) area_fmrd2_info_pane_t4

0x0003,

0xfeef,	// (0x0004d471) area_fmrd2_info_pane_t

0x9b7b,	// (0x000470fd) fmrd2_indi_pane_t1

0x9b8b,	// (0x0004710d) fmrd2_indi_pane_t2

0x9b9b,	// (0x0004711d) fmrd2_indi_pane_t3

0x0002,

0xfef8,	// (0x0004d47a) fmrd2_indi_pane_t

0xe44e,	// (0x0004b9d0) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xe44e,	// (0x0004b9d0) list_single_fs_bigclock_indicator_pane_g5

0xe4ff,	// (0x0004ba81) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xe4ff,	// (0x0004ba81) list_single_fs_bigclock_indicator_pane_t5

0x943e,	// (0x000469c0) aid_cell_bcale_month_pane_ParamLimits

0x943e,	// (0x000469c0) aid_cell_bcale_month_pane

0x945c,	// (0x000469de) bcale_month_pane_ParamLimits

0x945c,	// (0x000469de) bcale_month_pane

0x947a,	// (0x000469fc) bcale_preview_pane_ParamLimits

0x947a,	// (0x000469fc) bcale_preview_pane

0xec80,	// (0x0004c202) list_single_fs_bigclock_pane_t1_ParamLimits

0xec9f,	// (0x0004c221) list_single_fs_bigclock_pane_t2_ParamLimits

0xec9f,	// (0x0004c221) list_single_fs_bigclock_pane_t2

0x0001,

0xfe7a,	// (0x0004d3fc) list_single_fs_bigclock_pane_t_ParamLimits

0xfe7a,	// (0x0004d3fc) list_single_fs_bigclock_pane_t

0x9abe,	// (0x00047040) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfee3,	// (0x0004d465) main_fs_bigclock_unlock_btn_pane_g

0x9ba9,	// (0x0004712b) aid_dia3_key_size_ParamLimits

0x9ba9,	// (0x0004712b) aid_dia3_key_size

0x9bb5,	// (0x00047137) aid_dia3_listrow_size_ParamLimits

0x9bb5,	// (0x00047137) aid_dia3_listrow_size

0x9bc5,	// (0x00047147) dia3_keypad_fun_pane_ParamLimits

0x9bc5,	// (0x00047147) dia3_keypad_fun_pane

0x9bd7,	// (0x00047159) dia3_keypad_num_pane_ParamLimits

0x9bd7,	// (0x00047159) dia3_keypad_num_pane

0x9be9,	// (0x0004716b) dia3_listscroll_pane_ParamLimits

0x9be9,	// (0x0004716b) dia3_listscroll_pane

0x9bf7,	// (0x00047179) dia3_numentry_pane_ParamLimits

0x9bf7,	// (0x00047179) dia3_numentry_pane

0xeea9,	// (0x0004c42b) dia3_list_pane

0xeeb4,	// (0x0004c436) scroll_pane_cp12

0xa12c,	// (0x000476ae) bg_dia3_numentry_pane

0x9c05,	// (0x00047187) dia3_numentry_pane_t1

0x9c14,	// (0x00047196) cell_dia3_key_num_pane

0x9c1c,	// (0x0004719e) cell_dia3_key0_fun_pane_ParamLimits

0x9c1c,	// (0x0004719e) cell_dia3_key0_fun_pane

0x9c29,	// (0x000471ab) cell_dia3_key1_fun_pane_ParamLimits

0x9c29,	// (0x000471ab) cell_dia3_key1_fun_pane

0x9c36,	// (0x000471b8) dia3_listrow_pane

0xe1a1,	// (0x0004b723) bg_dia3_numentry_pane_g1

0xa12c,	// (0x000476ae) bg_button_pane_cp21

0xeebf,	// (0x0004c441) cell_dia3_key_num_pane_t1

0xeecd,	// (0x0004c44f) cell_dia3_key_num_pane_t2

0xeedc,	// (0x0004c45e) cell_dia3_key_num_pane_t3

0xeeeb,	// (0x0004c46d) cell_dia3_key_num_pane_t4

0x0003,

0xfeff,	// (0x0004d481) cell_dia3_key_num_pane_t

0xa12c,	// (0x000476ae) bg_button_pane_cp19

0x9c43,	// (0x000471c5) cell_dia3_key0_fun_pane_g1

0xa12c,	// (0x000476ae) bg_button_pane_cp20

0x9c4b,	// (0x000471cd) cell_dia3_key1_fun_pane_g1

0x9c53,	// (0x000471d5) area_left_week_number_pane

0x9c66,	// (0x000471e8) area_top_day_name_pane

0x9c74,	// (0x000471f6) frame_month_view_pane

0xeefa,	// (0x0004c47c) grid_month_view_pane

0x9c89,	// (0x0004720b) cell_top_day_name_pane_ParamLimits

0x9c89,	// (0x0004720b) cell_top_day_name_pane

0x9ca3,	// (0x00047225) cell_area_left_week_number_pane_ParamLimits

0x9ca3,	// (0x00047225) cell_area_left_week_number_pane

0x9cc6,	// (0x00047248) cell_month_view_pane_ParamLimits

0x9cc6,	// (0x00047248) cell_month_view_pane

0xef08,	// (0x0004c48a) frm_month_g1

0x9cf2,	// (0x00047274) frm_month_g2

0x9d03,	// (0x00047285) frm_month_g3

0x9d14,	// (0x00047296) frm_month_g4

0x9d25,	// (0x000472a7) frm_month_g5

0x9d38,	// (0x000472ba) frm_month_g6

0x9d4b,	// (0x000472cd) frm_month_g7

0xef15,	// (0x0004c497) frm_month_g8

0x9d5e,	// (0x000472e0) frm_month_g9

0x9d6b,	// (0x000472ed) frm_month_g10

0x9d78,	// (0x000472fa) frm_month_g11

0x9d85,	// (0x00047307) frm_month_g12

0x9d92,	// (0x00047314) frm_month_g13

0x9d9f,	// (0x00047321) frm_month_g14

0x9dae,	// (0x00047330) frm_month_g15

0x9dbd,	// (0x0004733f) frm_month_g16

0x000f,

0xff08,	// (0x0004d48a) frm_month_g

0xef22,	// (0x0004c4a4) cell_top_day_name_pane_t1

0x9dcc,	// (0x0004734e) cell_area_left_week_number_pane_g1

0x9ddb,	// (0x0004735d) cell_area_left_week_number_pane_t1

0xcf58,	// (0x0004a4da) cell_month_view_pane_g1

0x9df1,	// (0x00047373) cell_month_view_pane_t1

0xa12c,	// (0x000476ae) main_fps_pane

0xe725,	// (0x0004bca7) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xe725,	// (0x0004bca7) cmail_ddmenu_btn02_pane_cp1

0xe741,	// (0x0004bcc3) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xe741,	// (0x0004bcc3) cmail_ddmenu_btn02_pane_cp2

0x9668,	// (0x00046bea) cmail_ddmenu_btn02_pane_g2_ParamLimits

0x9668,	// (0x00046bea) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfe2d,	// (0x0004d3af) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfe2d,	// (0x0004d3af) cmail_ddmenu_btn02_pane_g

0x9686,	// (0x00046c08) cmail_ddmenu_btn02_pane_t2_ParamLimits

0x9686,	// (0x00046c08) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfe32,	// (0x0004d3b4) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfe32,	// (0x0004d3b4) cmail_ddmenu_btn02_pane_t

0x9e07,	// (0x00047389) fps_text_pane_ParamLimits

0x9e07,	// (0x00047389) fps_text_pane

0x9e14,	// (0x00047396) main_fps_pane_g1_ParamLimits

0x9e14,	// (0x00047396) main_fps_pane_g1

0x9e22,	// (0x000473a4) wait_bar_pane_cp010_ParamLimits

0x9e22,	// (0x000473a4) wait_bar_pane_cp010

0x9e2e,	// (0x000473b0) fps_text_pane_t1_ParamLimits

0x9e2e,	// (0x000473b0) fps_text_pane_t1

0x730f,	// (0x00044891) cam4_image_uncrop_pane_g1

0x7318,	// (0x0004489a) cam4_image_uncrop_pane_g2

0x7321,	// (0x000448a3) cam4_image_uncrop_pane_g3

0x732a,	// (0x000448ac) cam4_image_uncrop_pane_g4

0x0003,

0xf8ea,	// (0x0004ce6c) cam4_image_uncrop_pane_g

0x9c36,	// (0x000471b8) dia3_listrow_pane_ParamLimits

0xa12c,	// (0x000476ae) main_phob2_pane

0x9286,	// (0x00046808) cell_tport_appsw_pane_cp02_ParamLimits

0x9286,	// (0x00046808) cell_tport_appsw_pane_cp02

0x9295,	// (0x00046817) cell_tport_appsw_pane_cp03_ParamLimits

0x9295,	// (0x00046817) cell_tport_appsw_pane_cp03

0xa12c,	// (0x000476ae) phob2_contact_card_pane

0xa12c,	// (0x000476ae) phob2_listscroll_pane

0xef35,	// (0x0004c4b7) phob2_list_pane

0xef3d,	// (0x0004c4bf) scroll_pane_cp034

0x9e47,	// (0x000473c9) phob2_cc_data_pane_ParamLimits

0x9e47,	// (0x000473c9) phob2_cc_data_pane

0x9e61,	// (0x000473e3) phob2_cc_listscroll_pane_ParamLimits

0x9e61,	// (0x000473e3) phob2_cc_listscroll_pane

0x9e7b,	// (0x000473fd) list_double_large_graphic_phob2_pane_ParamLimits

0x9e7b,	// (0x000473fd) list_double_large_graphic_phob2_pane

0x9e9a,	// (0x0004741c) list_double_large_graphic_phob2_pane_g1_ParamLimits

0x9e9a,	// (0x0004741c) list_double_large_graphic_phob2_pane_g1

0x1f61,	// (0x0003f4e3) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x1f61,	// (0x0003f4e3) list_double_large_graphic_phob2_pane_g2

0x0001,

0xff29,	// (0x0004d4ab) list_double_large_graphic_phob2_pane_g_ParamLimits

0xff29,	// (0x0004d4ab) list_double_large_graphic_phob2_pane_g

0x1f6d,	// (0x0003f4ef) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x1f6d,	// (0x0003f4ef) list_double_large_graphic_phob2_pane_t1

0x1f83,	// (0x0003f505) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x1f83,	// (0x0003f505) list_double_large_graphic_phob2_pane_t2

0x0001,

0xff2e,	// (0x0004d4b0) list_double_large_graphic_phob2_pane_t_ParamLimits

0xff2e,	// (0x0004d4b0) list_double_large_graphic_phob2_pane_t

0xa12c,	// (0x000476ae) list_highlight_pane_cp024

0x9eb0,	// (0x00047432) phob2_cc_button_pane

0x9eb8,	// (0x0004743a) phob2_cc_data_pane_g1_ParamLimits

0x9eb8,	// (0x0004743a) phob2_cc_data_pane_g1

0x9ec4,	// (0x00047446) phob2_cc_data_pane_g2_ParamLimits

0x9ec4,	// (0x00047446) phob2_cc_data_pane_g2

0x0001,

0xff33,	// (0x0004d4b5) phob2_cc_data_pane_g_ParamLimits

0xff33,	// (0x0004d4b5) phob2_cc_data_pane_g

0x9ed0,	// (0x00047452) phob2_cc_data_pane_t1_ParamLimits

0x9ed0,	// (0x00047452) phob2_cc_data_pane_t1

0x9ee2,	// (0x00047464) phob2_cc_data_pane_t2_ParamLimits

0x9ee2,	// (0x00047464) phob2_cc_data_pane_t2

0x9ef4,	// (0x00047476) phob2_cc_data_pane_t3_ParamLimits

0x9ef4,	// (0x00047476) phob2_cc_data_pane_t3

0x0002,

0xff38,	// (0x0004d4ba) phob2_cc_data_pane_t_ParamLimits

0xff38,	// (0x0004d4ba) phob2_cc_data_pane_t

0xef45,	// (0x0004c4c7) phob2_cc_list_pane_ParamLimits

0xef45,	// (0x0004c4c7) phob2_cc_list_pane

0xdb27,	// (0x0004b0a9) scroll_pane_cp035_ParamLimits

0xdb27,	// (0x0004b0a9) scroll_pane_cp035

0xaf98,	// (0x0004851a) bg_button_pane_cp033

0xef51,	// (0x0004c4d3) phob2_cc_button_pane_g1

0xef5d,	// (0x0004c4df) phob2_cc_button_pane_t1

0xef72,	// (0x0004c4f4) phob2_cc_button_pane_t2

0x0001,

0xff3f,	// (0x0004d4c1) phob2_cc_button_pane_t

0x9f06,	// (0x00047488) list_double_large_graphic_phob2_cc_pane_ParamLimits

0x9f06,	// (0x00047488) list_double_large_graphic_phob2_cc_pane

0x9f7a,	// (0x000474fc) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0x9f7a,	// (0x000474fc) list_double_large_graphic_phob2_cc_pane_g1

0x1f98,	// (0x0003f51a) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x1f98,	// (0x0003f51a) list_double_large_graphic_phob2_cc_pane_g2

0x1fa4,	// (0x0003f526) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x1fa4,	// (0x0003f526) list_double_large_graphic_phob2_cc_pane_g3

0x1fb0,	// (0x0003f532) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x1fb0,	// (0x0003f532) list_double_large_graphic_phob2_cc_pane_g4

0x1fbc,	// (0x0003f53e) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x1fbc,	// (0x0003f53e) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xff44,	// (0x0004d4c6) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xff44,	// (0x0004d4c6) list_double_large_graphic_phob2_cc_pane_g

0x1fc8,	// (0x0003f54a) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x1fc8,	// (0x0003f54a) list_double_large_graphic_phob2_cc_pane_t1

0x1ff1,	// (0x0003f573) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x1ff1,	// (0x0003f573) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xff4f,	// (0x0004d4d1) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xff4f,	// (0x0004d4d1) list_double_large_graphic_phob2_cc_pane_t

0xef84,	// (0x0004c506) list_highlight_pane_cp025_ParamLimits

0xef84,	// (0x0004c506) list_highlight_pane_cp025

0xaf98,	// (0x0004851a) bg_button_pane_cp033_ParamLimits

0xef51,	// (0x0004c4d3) phob2_cc_button_pane_g1_ParamLimits

0xef5d,	// (0x0004c4df) phob2_cc_button_pane_t1_ParamLimits

0xef72,	// (0x0004c4f4) phob2_cc_button_pane_t2_ParamLimits

0xff3f,	// (0x0004d4c1) phob2_cc_button_pane_t_ParamLimits

0x22f1,	// (0x0003f873) popup_wgtman_window

0xd7c3,	// (0x0004ad45) scroll_pane_cp038

0x9a00,	// (0x00046f82) wgtman_btn_pane_cp_01_ParamLimits

0x9a00,	// (0x00046f82) wgtman_btn_pane_cp_01

0xef92,	// (0x0004c514) wgtman_content_pane

0xef9b,	// (0x0004c51d) wgtman_heading_pane

0xa12c,	// (0x000476ae) bg_heading_pane_cp02

0xefa4,	// (0x0004c526) wgtman_heading_pane_g1

0xefac,	// (0x0004c52e) wgtman_heading_pane_t1

0xefba,	// (0x0004c53c) scroll_pane_cp036

0xefc2,	// (0x0004c544) wgtman_list_pane

0xec05,	// (0x0004c187) wgtman_list_pane_t1_ParamLimits

0xec05,	// (0x0004c187) wgtman_list_pane_t1

0x726e,	// (0x000447f0) cam4_grid_pane

0x116b,	// (0x0003e6ed) bg_button_pane_cp015_ParamLimits

0x7f4d,	// (0x000454cf) bg_button_pane_cp016_ParamLimits

0x7f60,	// (0x000454e2) bg_button_pane_cp017_ParamLimits

0x11af,	// (0x0003e731) popup_vitu2_query_window_g3_ParamLimits

0x11af,	// (0x0003e731) popup_vitu2_query_window_g3

0x1228,	// (0x0003e7aa) popup_vitu2_query_window_t6_ParamLimits

0x1228,	// (0x0003e7aa) popup_vitu2_query_window_t6

0x1253,	// (0x0003e7d5) popup_vitu2_query_window_t7_ParamLimits

0x1253,	// (0x0003e7d5) popup_vitu2_query_window_t7

0xec20,	// (0x0004c1a2) cam4_grid_pane_g1

0xec29,	// (0x0004c1ab) cam4_grid_pane_g2

0xefca,	// (0x0004c54c) cam4_grid_pane_g3

0xefd3,	// (0x0004c555) cam4_grid_pane_g4

0x0003,

0xff54,	// (0x0004d4d6) cam4_grid_pane_g

0x3073,	// (0x000405f5) aid_placing_vt_slider_lsc_ParamLimits

0x33b3,	// (0x00040935) vidtel_button_pane_ParamLimits

0x33b3,	// (0x00040935) vidtel_button_pane

0xa12c,	// (0x000476ae) bg_button_pane_cp034

0xefde,	// (0x0004c560) vidtel_button_pane_g1

0xefe6,	// (0x0004c568) vidtel_button_pane_t1

0xd8c5,	// (0x0004ae47) aid_size_vtel_slider_touch

0xdb27,	// (0x0004b0a9) scroll_pane_cp039

0x8c37,	// (0x000461b9) ncim_query_button_pane_cp01_ParamLimits

0x8c56,	// (0x000461d8) ncimui_query_pane_g1_ParamLimits

0xaf98,	// (0x0004851a) input_focus_pane_cp012_ParamLimits

0xe1e7,	// (0x0004b769) ncim_query_entry_pane_t1_ParamLimits

0xdb27,	// (0x0004b0a9) scroll_pane_cp039_ParamLimits

0xb371,	// (0x000488f3) navi_pane_bcale_mc_g1

0xb379,	// (0x000488fb) navi_pane_bcale_mc_t1

0xe775,	// (0x0004bcf7) main_sp_fs_email_pane_g1

0xe781,	// (0x0004bd03) main_sp_fs_email_pane_g2

0x0001,

0xfce5,	// (0x0004d267) main_sp_fs_email_pane_g

0xe9d7,	// (0x0004bf59) list_single_cale_mrui_row_pane_g3_ParamLimits

0xe9d7,	// (0x0004bf59) list_single_cale_mrui_row_pane_g3

0x1e54,	// (0x0003f3d6) list_single_recal_day_pane_g5_event_pane

0x1e6a,	// (0x0003f3ec) list_single_recal_day_pane_g7

0xeffc,	// (0x0004c57e) list_recal_day_event_pane_cp01

0xf005,	// (0x0004c587) list_recal_vselct_arw_lo_pane_cp01

0xf00d,	// (0x0004c58f) list_recal_vselct_arw_up_pane_cp01

0xf015,	// (0x0004c597) list_recal_vselct_pane_cp01

0xd8d5,	// (0x0004ae57) list_recal_day_event_pane_cp01_g1

0x201a,	// (0x0003f59c) list_recal_day_event_pane_cp01_t1

0x1e72,	// (0x0003f3f4) list_single_recal_day_pane_t1_ParamLimits

0x1e84,	// (0x0003f406) list_single_recal_day_pane_t2_ParamLimits

0xfe42,	// (0x0004d3c4) list_single_recal_day_pane_t_ParamLimits

0xa7a4,	// (0x00047d26) bg_notes_pane_ParamLimits

0xa853,	// (0x00047dd5) list_notes_pane_ParamLimits

0x264c,	// (0x0003fbce) scroll_pane_cp06_ParamLimits

0xa88b,	// (0x00047e0d) main_notes_pane_ParamLimits

0xaf98,	// (0x0004851a) main_welc_pane

0x9f9a,	// (0x0004751c) main_welc_body_pane_ParamLimits

0x9f9a,	// (0x0004751c) main_welc_body_pane

0x9fb3,	// (0x00047535) main_welc_opti_pane_ParamLimits

0x9fb3,	// (0x00047535) main_welc_opti_pane

0x9ff2,	// (0x00047574) main_welc_pane_t1_ParamLimits

0x9ff2,	// (0x00047574) main_welc_pane_t1

0xa04e,	// (0x000475d0) main_welc_body_row_pane_ParamLimits

0xa04e,	// (0x000475d0) main_welc_body_row_pane

0xdb3f,	// (0x0004b0c1) main_welc_opti_row_pane_ParamLimits

0xdb3f,	// (0x0004b0c1) main_welc_opti_row_pane

0xf01f,	// (0x0004c5a1) main_welc_opti_row_pane_g1

0xa077,	// (0x000475f9) main_welc_opti_row_pane_t1

0xf027,	// (0x0004c5a9) main_welc_body_row_pane_t1

0xed57,	// (0x0004c2d9) popup_notif_wgt_heading_pane

0xed71,	// (0x0004c2f3) aid_size_list_notif_wgt_del_ParamLimits

0xed7e,	// (0x0004c300) list_notif_wgt_row_pane_g1_ParamLimits

0xed8a,	// (0x0004c30c) list_notif_wgt_row_pane_g2_ParamLimits

0xed99,	// (0x0004c31b) list_notif_wgt_row_pane_g3_ParamLimits

0xfea9,	// (0x0004d42b) list_notif_wgt_row_pane_g_ParamLimits

0xeda6,	// (0x0004c328) list_notif_wgt_row_pane_t1_ParamLimits

0xedbc,	// (0x0004c33e) list_notif_wgt_row_pane_t2_ParamLimits

0xedce,	// (0x0004c350) list_notif_wgt_row_pane_t3_ParamLimits

0xfeb0,	// (0x0004d432) list_notif_wgt_row_pane_t_ParamLimits

0x9a93,	// (0x00047015) listrow_wgtman_pane_g1_ParamLimits

0x9aa0,	// (0x00047022) listrow_wgtman_pane_g2_ParamLimits

0xfed9,	// (0x0004d45b) listrow_wgtman_pane_g_ParamLimits

0x1f11,	// (0x0003f493) listrow_wgtman_pane_t1_ParamLimits

0x1f29,	// (0x0003f4ab) listrow_wgtman_pane_t2_ParamLimits

0xfede,	// (0x0004d460) listrow_wgtman_pane_t_ParamLimits

0x1f4f,	// (0x0003f4d1) wait_bar_pane_cp09_ParamLimits

0xa12c,	// (0x000476ae) bg_popup_heading_pane_cp02

0xf036,	// (0x0004c5b8) popup_notif_wgt_heading_pane_g1

0xf03e,	// (0x0004c5c0) popup_notif_wgt_heading_pane_t1

0xa12c,	// (0x000476ae) main_vids_pane

0xa12c,	// (0x000476ae) vids_listscroll_pane

0xa086,	// (0x00047608) scroll_pane_cp040

0xa12c,	// (0x000476ae) vids_list_pane

0xa091,	// (0x00047613) vids_list_double_pane_ParamLimits

0xa091,	// (0x00047613) vids_list_double_pane

0xa0a9,	// (0x0004762b) vids_list_double_pane_g1

0xa0b2,	// (0x00047634) vids_list_double_pane_t1

0xa0c2,	// (0x00047644) vids_list_double_pane_t2

0x0001,

0xff6b,	// (0x0004d4ed) vids_list_double_pane_t

0xaf98,	// (0x0004851a) main_ncimui_pane_ParamLimits

0x8a8e,	// (0x00046010) main_ncimui_pane_g1_ParamLimits

0x8a9a,	// (0x0004601c) main_ncimui_pane_g2_ParamLimits

0x8a9a,	// (0x0004601c) main_ncimui_pane_g2

0x0001,

0xfbe6,	// (0x0004d168) main_ncimui_pane_g_ParamLimits

0xfbe6,	// (0x0004d168) main_ncimui_pane_g

0x9fcc,	// (0x0004754e) main_welc_pane_g1_ParamLimits

0x9fcc,	// (0x0004754e) main_welc_pane_g1

0x9fd8,	// (0x0004755a) main_welc_pane_g2_ParamLimits

0x9fd8,	// (0x0004755a) main_welc_pane_g2

0x0002,

0xff5d,	// (0x0004d4df) main_welc_pane_g_ParamLimits

0xff5d,	// (0x0004d4df) main_welc_pane_g

0xa7a4,	// (0x00047d26) listscroll_mce_pane_ParamLimits

0xb4c6,	// (0x00048a48) wait_bar_pane_cp10

0xc8ff,	// (0x00049e81) main_cale_day_pane_ParamLimits

0xc8ff,	// (0x00049e81) main_cale_week_pane_ParamLimits

0xa7a4,	// (0x00047d26) main_messa_pane_ParamLimits

0x659d,	// (0x00043b1f) main_clock2_btn_pane_ParamLimits

0x659d,	// (0x00043b1f) main_clock2_btn_pane

0xd0e0,	// (0x0004a662) main_clock2_btn_pane_cp01_ParamLimits

0xd0e0,	// (0x0004a662) main_clock2_btn_pane_cp01

0xe9a8,	// (0x0004bf2a) list_cale_mrui_pane_ParamLimits

0xee04,	// (0x0004c386) main_cf0_pane_g2

0x0001,

0xfeb7,	// (0x0004d439) main_cf0_pane_g

0x9c53,	// (0x000471d5) area_left_week_number_pane_ParamLimits

0x9c66,	// (0x000471e8) area_top_day_name_pane_ParamLimits

0x9c74,	// (0x000471f6) frame_month_view_pane_ParamLimits

0xeefa,	// (0x0004c47c) grid_month_view_pane_ParamLimits

0xef08,	// (0x0004c48a) frm_month_g1_ParamLimits

0x9cf2,	// (0x00047274) frm_month_g2_ParamLimits

0x9d03,	// (0x00047285) frm_month_g3_ParamLimits

0x9d14,	// (0x00047296) frm_month_g4_ParamLimits

0x9d25,	// (0x000472a7) frm_month_g5_ParamLimits

0x9d38,	// (0x000472ba) frm_month_g6_ParamLimits

0x9d4b,	// (0x000472cd) frm_month_g7_ParamLimits

0xef15,	// (0x0004c497) frm_month_g8_ParamLimits

0x9d5e,	// (0x000472e0) frm_month_g9_ParamLimits

0x9d6b,	// (0x000472ed) frm_month_g10_ParamLimits

0x9d78,	// (0x000472fa) frm_month_g11_ParamLimits

0x9d85,	// (0x00047307) frm_month_g12_ParamLimits

0x9d92,	// (0x00047314) frm_month_g13_ParamLimits

0x9d9f,	// (0x00047321) frm_month_g14_ParamLimits

0x9dae,	// (0x00047330) frm_month_g15_ParamLimits

0x9dbd,	// (0x0004733f) frm_month_g16_ParamLimits

0xff08,	// (0x0004d48a) frm_month_g_ParamLimits

0xef22,	// (0x0004c4a4) cell_top_day_name_pane_t1_ParamLimits

0x9dcc,	// (0x0004734e) cell_area_left_week_number_pane_g1_ParamLimits

0x9ddb,	// (0x0004735d) cell_area_left_week_number_pane_t1_ParamLimits

0xcf58,	// (0x0004a4da) cell_month_view_pane_g1_ParamLimits

0x9df1,	// (0x00047373) cell_month_view_pane_t1_ParamLimits

0xa79c,	// (0x00047d1e) main_clock2_btn_pane_g1

0xf04c,	// (0x0004c5ce) main_clock2_btn_pane_t1

0xaf98,	// (0x0004851a) listscroll_cmail_pane_ParamLimits

0xe775,	// (0x0004bcf7) main_sp_fs_email_pane_g1_ParamLimits

0xe781,	// (0x0004bd03) main_sp_fs_email_pane_g2_ParamLimits

0xfce5,	// (0x0004d267) main_sp_fs_email_pane_g_ParamLimits

0xeab6,	// (0x0004c038) list_recal_day_pane_ParamLimits

0xeac7,	// (0x0004c049) mian_recal_day_pane_t1

0x1810,	// (0x0003ed92) list_single_dyc_row_text_pane_t4_ParamLimits

0x1810,	// (0x0003ed92) list_single_dyc_row_text_pane_t4

0x1847,	// (0x0003edc9) list_single_dyc_row_text_pane_t5_ParamLimits

0x1847,	// (0x0003edc9) list_single_dyc_row_text_pane_t5

0x18bd,	// (0x0003ee3f) list_single_dyc_row_text_pane_t6_ParamLimits

0x18bd,	// (0x0003ee3f) list_single_dyc_row_text_pane_t6

0x422c,	// (0x000417ae) aid_mgn_list_cale_time_pane

0xaf98,	// (0x0004851a) main_gallery2_pane_ParamLimits

0xd0f6,	// (0x0004a678) main_clock2_pane_cp01_t1

0xd104,	// (0x0004a686) main_clock2_pane_cp01_t3

0x0001,

0xf7bc,	// (0x0004cd3e) main_clock2_pane_cp01_t

0x2a9e,	// (0x00040020) cale_week_scroll_pane_g16_ParamLimits

0x2a9e,	// (0x00040020) cale_week_scroll_pane_g16

0xaa50,	// (0x00047fd2) vorec_slider_pane

0xefe6,	// (0x0004c568) vidtel_button_pane_t1_ParamLimits

0x96e9,	// (0x00046c6b) main_fs_bigclock_clock_pane_g1_ParamLimits

0x96e9,	// (0x00046c6b) main_fs_bigclock_clock_pane_g2_ParamLimits

0x96f6,	// (0x00046c78) main_fs_bigclock_clock_pane_g3_ParamLimits

0x96f6,	// (0x00046c78) main_fs_bigclock_clock_pane_g4_ParamLimits

0xfe65,	// (0x0004d3e7) main_fs_bigclock_clock_pane_g_ParamLimits

0x9702,	// (0x00046c84) main_fs_bigclock_clock_pane_t1_ParamLimits

0x9715,	// (0x00046c97) main_fs_bigclock_clock_pane_t2_ParamLimits

0xfe6e,	// (0x0004d3f0) main_fs_bigclock_clock_pane_t_ParamLimits

0x5e42,	// (0x000433c4) main_mup3_lyrics_pane_ParamLimits

0x5e42,	// (0x000433c4) main_mup3_lyrics_pane

0xa0f6,	// (0x00047678) main_mup3_lyrics_pane_t1_ParamLimits

0xa0f6,	// (0x00047678) main_mup3_lyrics_pane_t1

0x6bef,	// (0x00044171) aid_main_mp4_pane_t1_area

0x6bf9,	// (0x0004417b) aid_main_mp4_pane_t2_area

0x6cf8,	// (0x0004427a) main_mp4_pane_g7_ParamLimits

0x6cf8,	// (0x0004427a) main_mp4_pane_g7

0x6d04,	// (0x00044286) main_mp4_pane_g8_ParamLimits

0x6d04,	// (0x00044286) main_mp4_pane_g8

0x7116,	// (0x00044698) aid_call6_pane_g1_size

0x9f4c,	// (0x000474ce) list_double_large_graphic_phob2_other_pane_ParamLimits

0x9f4c,	// (0x000474ce) list_double_large_graphic_phob2_other_pane

0xae0b,	// (0x0004838d) list_double_large_graphic_phob2_other_pane_g1

0xa12c,	// (0x000476ae) list_highlight_pane_cp026

0xaf98,	// (0x0004851a) main_welc_pane_ParamLimits

0x918d,	// (0x0004670f) main_sp_fs_ctrlbar_pane_g3_ParamLimits

0x918d,	// (0x0004670f) main_sp_fs_ctrlbar_pane_g3

0x91a5,	// (0x00046727) main_sp_fs_ctrlbar_pane_g4_ParamLimits

0x91a5,	// (0x00046727) main_sp_fs_ctrlbar_pane_g4

0x91d7,	// (0x00046759) toolbar2_fixed_button_pane_cp01

0x91e2,	// (0x00046764) toolbar2_fixed_button_pane_cp02

0x91ed,	// (0x0004676f) toolbar2_fixed_button_pane_cp03

0x9f8b,	// (0x0004750d) list_welc_entry_pane_ParamLimits

0x9f8b,	// (0x0004750d) list_welc_entry_pane

0x9fe6,	// (0x00047568) main_welc_pane_g3_ParamLimits

0x9fe6,	// (0x00047568) main_welc_pane_g3

0xa00c,	// (0x0004758e) main_welc_pane_t2_ParamLimits

0xa00c,	// (0x0004758e) main_welc_pane_t2

0xa020,	// (0x000475a2) main_welc_pane_t3_ParamLimits

0xa020,	// (0x000475a2) main_welc_pane_t3

0x0002,

0xff64,	// (0x0004d4e6) main_welc_pane_t_ParamLimits

0xff64,	// (0x0004d4e6) main_welc_pane_t

0xa032,	// (0x000475b4) welc_button_pane_ParamLimits

0xa032,	// (0x000475b4) welc_button_pane

0xa040,	// (0x000475c2) welc_service_logo_pane_ParamLimits

0xa040,	// (0x000475c2) welc_service_logo_pane

0xf05a,	// (0x0004c5dc) list_single_welc_entry_pane_ParamLimits

0xf05a,	// (0x0004c5dc) list_single_welc_entry_pane

0xf06b,	// (0x0004c5ed) list_single_welc_entry_pane_g1

0xf073,	// (0x0004c5f5) list_single_welc_entry_pane_t1

0xf081,	// (0x0004c603) list_single_welc_entry_pane_t2

0x0001,

0x0c0b,	// (0x0003e18d) list_single_welc_entry_pane_t

0xa12c,	// (0x000476ae) bg_button_pane_cp035

0xf08f,	// (0x0004c611) welc_button_pane_t1

0xf09d,	// (0x0004c61f) welc_service_logo_pane_g1

0xf0a6,	// (0x0004c628) welc_service_logo_pane_g2

0x0001,

0x0c10,	// (0x0003e192) welc_service_logo_pane_g
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
	};

} // end of namespace AknLayoutScalable_Elaf_pnp4_apps_nhd4_prt_tch_Small
