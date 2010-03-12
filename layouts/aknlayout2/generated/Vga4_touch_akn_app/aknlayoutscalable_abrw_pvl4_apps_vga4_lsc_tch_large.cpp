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
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pvp4_apps_vga4_prt_tch + 0x000936d3 };

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
0x0759,	// (0x00093e2c) Screen

0x0765,	// (0x00093e38) application_window

0x07a1,	// (0x00093e74) area_bottom_pane_ParamLimits

0x07a1,	// (0x00093e74) area_bottom_pane

0x07da,	// (0x00093ead) area_top_pane_ParamLimits

0x07da,	// (0x00093ead) area_top_pane

0xa0c4,	// (0x0009d797) call_video_uplink_pane_ParamLimits

0xa0c4,	// (0x0009d797) call_video_uplink_pane

0x084f,	// (0x00093f22) main_pane_ParamLimits

0x084f,	// (0x00093f22) main_pane

0xe113,	// (0x000a17e6) context_pane

0x3ae6,	// (0x000971b9) navi_pane

0x3b16,	// (0x000971e9) popup_cale_events_window_ParamLimits

0x3b16,	// (0x000971e9) popup_cale_events_window

0xe126,	// (0x000a17f9) popup_mup_playback_window

0x3b2e,	// (0x00097201) signal_pane

0xea13,	// (0x000a20e6) main_browser_pane

0xcc64,	// (0x000a0337) main_burst_pane

0x37e8,	// (0x00096ebb) main_calc_pane

0xcc64,	// (0x000a0337) main_cale_day_pane

0xea13,	// (0x000a20e6) main_cale_month_pane

0xcc64,	// (0x000a0337) main_cale_week_pane

0xcc64,	// (0x000a0337) main_call_pane

0xe6e5,	// (0x000a1db8) main_call_poc_pane

0xcc64,	// (0x000a0337) main_camera_pane

0xcc64,	// (0x000a0337) main_chi_dic_pane

0xcb06,	// (0x000a01d9) main_clock_pane

0xe6e5,	// (0x000a1db8) main_fmradio_pane

0xcc64,	// (0x000a0337) main_graph_messa_pane

0xe6e5,	// (0x000a1db8) main_help_pane

0xea13,	// (0x000a20e6) main_im_pane

0xe940,	// (0x000a2013) main_image_pane_ParamLimits

0xe940,	// (0x000a2013) main_image_pane

0xe6e5,	// (0x000a1db8) main_location2_pane

0xcc64,	// (0x000a0337) main_location_pane

0xe6e5,	// (0x000a1db8) main_messa_pane

0xe6e5,	// (0x000a1db8) main_mp2_pane

0xcc64,	// (0x000a0337) main_mp_pane

0xe6e5,	// (0x000a1db8) main_msg_pane

0xe6e5,	// (0x000a1db8) main_mup_eq_pane

0xe6e5,	// (0x000a1db8) main_mup_pane

0xea13,	// (0x000a20e6) main_notes_pane

0xe6e5,	// (0x000a1db8) main_pec_pane

0xe6e5,	// (0x000a1db8) main_phob_pane

0xe6e5,	// (0x000a1db8) main_pinb_pane

0xe6e5,	// (0x000a1db8) main_postcard_pane

0xe6e5,	// (0x000a1db8) main_qdial_pane

0xcc64,	// (0x000a0337) main_skin_pane

0xe6e5,	// (0x000a1db8) main_smil2_pane

0xcc64,	// (0x000a0337) main_smil_pane

0xcc64,	// (0x000a0337) main_video_pane

0xcc64,	// (0x000a0337) main_video_tele_pane

0xe940,	// (0x000a2013) main_viewer_pane_ParamLimits

0xe940,	// (0x000a2013) main_viewer_pane

0xcc64,	// (0x000a0337) main_vorec_pane

0x383e,	// (0x00096f11) popup_blid_sat_info_window_ParamLimits

0x383e,	// (0x00096f11) popup_blid_sat_info_window

0x38a2,	// (0x00096f75) popup_dyc_status_message_window_ParamLimits

0x38a2,	// (0x00096f75) popup_dyc_status_message_window

0x38bc,	// (0x00096f8f) popup_grid_large_graphic_window_ParamLimits

0x38bc,	// (0x00096f8f) popup_grid_large_graphic_window

0x397e,	// (0x00097051) popup_loc_request_window_ParamLimits

0x397e,	// (0x00097051) popup_loc_request_window

0x3aba,	// (0x0009718d) popup_wml_address_window_ParamLimits

0x3aba,	// (0x0009718d) popup_wml_address_window

0x3626,	// (0x00096cf9) call_muted_g1

0x32b7,	// (0x0009698a) popup_call_audio_conf_window_ParamLimits

0x32b7,	// (0x0009698a) popup_call_audio_conf_window

0x3636,	// (0x00096d09) popup_call_audio_first_window_ParamLimits

0x3636,	// (0x00096d09) popup_call_audio_first_window

0x36ac,	// (0x00096d7f) popup_call_audio_in_window_ParamLimits

0x36ac,	// (0x00096d7f) popup_call_audio_in_window

0x36e8,	// (0x00096dbb) popup_call_audio_out_window_ParamLimits

0x36e8,	// (0x00096dbb) popup_call_audio_out_window

0x3722,	// (0x00096df5) popup_call_audio_second_window_ParamLimits

0x3722,	// (0x00096df5) popup_call_audio_second_window

0x3778,	// (0x00096e4b) popup_call_audio_wait_window_ParamLimits

0x3778,	// (0x00096e4b) popup_call_audio_wait_window

0x37ad,	// (0x00096e80) popup_number_entry_window_ParamLimits

0x37ad,	// (0x00096e80) popup_number_entry_window

0xe29d,	// (0x000a1970) bg_popup_call_pane_cp05_ParamLimits

0xe29d,	// (0x000a1970) bg_popup_call_pane_cp05

0xe2bd,	// (0x000a1990) popup_number_entry_window_t1

0xe2d0,	// (0x000a19a3) popup_number_entry_window_t2

0xe2e2,	// (0x000a19b5) popup_number_entry_window_t3

0x0003,

0xf0d8,	// (0x000a27ab) popup_number_entry_window_t

0xe329,	// (0x000a19fc) text_title_cp2

0xe33c,	// (0x000a1a0f) bg_popup_call_pane_cp_ParamLimits

0xe33c,	// (0x000a1a0f) bg_popup_call_pane_cp

0xe34a,	// (0x000a1a1d) call_thumbnail_pane

0xe352,	// (0x000a1a25) popup_call_audio_in_window_g1_ParamLimits

0xe352,	// (0x000a1a25) popup_call_audio_in_window_g1

0xe35e,	// (0x000a1a31) popup_call_audio_in_window_g2_ParamLimits

0xe35e,	// (0x000a1a31) popup_call_audio_in_window_g2

0xe36a,	// (0x000a1a3d) popup_call_audio_in_window_g3_ParamLimits

0xe36a,	// (0x000a1a3d) popup_call_audio_in_window_g3

0x0002,

0xf0e1,	// (0x000a27b4) popup_call_audio_in_window_g_ParamLimits

0xf0e1,	// (0x000a27b4) popup_call_audio_in_window_g

0xe376,	// (0x000a1a49) popup_call_audio_in_window_t1_ParamLimits

0xe376,	// (0x000a1a49) popup_call_audio_in_window_t1

0xe392,	// (0x000a1a65) popup_call_audio_in_window_t2_ParamLimits

0xe392,	// (0x000a1a65) popup_call_audio_in_window_t2

0xe3ae,	// (0x000a1a81) popup_call_audio_in_window_t3_ParamLimits

0xe3ae,	// (0x000a1a81) popup_call_audio_in_window_t3

0x0002,

0xf0e8,	// (0x000a27bb) popup_call_audio_in_window_t_ParamLimits

0xf0e8,	// (0x000a27bb) popup_call_audio_in_window_t

0xe33c,	// (0x000a1a0f) bg_popup_call_pane_cp01_ParamLimits

0xe33c,	// (0x000a1a0f) bg_popup_call_pane_cp01

0xe34a,	// (0x000a1a1d) call_thumbnail_pane_cp02

0xe3c1,	// (0x000a1a94) call_type_pane_cp022

0xe3c9,	// (0x000a1a9c) popup_call_audio_out_window_g1_ParamLimits

0xe3c9,	// (0x000a1a9c) popup_call_audio_out_window_g1

0xe3db,	// (0x000a1aae) popup_call_audio_out_window_g2_ParamLimits

0xe3db,	// (0x000a1aae) popup_call_audio_out_window_g2

0xe3e7,	// (0x000a1aba) popup_call_audio_out_window_g3_ParamLimits

0xe3e7,	// (0x000a1aba) popup_call_audio_out_window_g3

0x0002,

0xf0ef,	// (0x000a27c2) popup_call_audio_out_window_g_ParamLimits

0xf0ef,	// (0x000a27c2) popup_call_audio_out_window_g

0xe3f9,	// (0x000a1acc) popup_call_audio_out_window_t1_ParamLimits

0xe3f9,	// (0x000a1acc) popup_call_audio_out_window_t1

0xe411,	// (0x000a1ae4) popup_call_audio_out_window_t2_ParamLimits

0xe411,	// (0x000a1ae4) popup_call_audio_out_window_t2

0x0001,

0xf0f6,	// (0x000a27c9) popup_call_audio_out_window_t_ParamLimits

0xf0f6,	// (0x000a27c9) popup_call_audio_out_window_t

0xe426,	// (0x000a1af9) bg_popup_call_pane_ParamLimits

0xe426,	// (0x000a1af9) bg_popup_call_pane

0x09d6,	// (0x000940a9) call_thumbnail_pane_cp_ParamLimits

0x09d6,	// (0x000940a9) call_thumbnail_pane_cp

0xe4aa,	// (0x000a1b7d) call_type_pane_cp01_ParamLimits

0xe4aa,	// (0x000a1b7d) call_type_pane_cp01

0xe4ee,	// (0x000a1bc1) popup_call_audio_first_window_g1_ParamLimits

0xe4ee,	// (0x000a1bc1) popup_call_audio_first_window_g1

0xe53a,	// (0x000a1c0d) popup_call_audio_first_window_g2_ParamLimits

0xe53a,	// (0x000a1c0d) popup_call_audio_first_window_g2

0x0001,

0xf0fb,	// (0x000a27ce) popup_call_audio_first_window_g_ParamLimits

0xf0fb,	// (0x000a27ce) popup_call_audio_first_window_g

0xe57e,	// (0x000a1c51) popup_call_audio_first_window_t1_ParamLimits

0xe57e,	// (0x000a1c51) popup_call_audio_first_window_t1

0xe62a,	// (0x000a1cfd) popup_call_audio_first_window_t4_ParamLimits

0xe62a,	// (0x000a1cfd) popup_call_audio_first_window_t4

0xe6b6,	// (0x000a1d89) popup_call_audio_first_window_t5_ParamLimits

0xe6b6,	// (0x000a1d89) popup_call_audio_first_window_t5

0x0002,

0xf100,	// (0x000a27d3) popup_call_audio_first_window_t_ParamLimits

0xf100,	// (0x000a27d3) popup_call_audio_first_window_t

0xe6e5,	// (0x000a1db8) bg_popup_call_pane_cp02

0xe6ef,	// (0x000a1dc2) call_type_pane_cp023

0xe6f7,	// (0x000a1dca) popup_call_audio_wait_window_g1

0xe6ff,	// (0x000a1dd2) popup_call_audio_wait_window_g2

0x0001,

0xf107,	// (0x000a27da) popup_call_audio_wait_window_g

0xe707,	// (0x000a1dda) popup_call_audio_wait_window_t3

0xe715,	// (0x000a1de8) bg_popup_call_pane_cp03_ParamLimits

0xe715,	// (0x000a1de8) bg_popup_call_pane_cp03

0xe775,	// (0x000a1e48) call_thumbnail_pane_cp011_ParamLimits

0xe775,	// (0x000a1e48) call_thumbnail_pane_cp011

0xe781,	// (0x000a1e54) call_type_pane_cp034_ParamLimits

0xe781,	// (0x000a1e54) call_type_pane_cp034

0xe7bd,	// (0x000a1e90) popup_call_audio_second_window_g1_ParamLimits

0xe7bd,	// (0x000a1e90) popup_call_audio_second_window_g1

0xe7f9,	// (0x000a1ecc) popup_call_audio_second_window_g2_ParamLimits

0xe7f9,	// (0x000a1ecc) popup_call_audio_second_window_g2

0x0001,

0xf10c,	// (0x000a27df) popup_call_audio_second_window_g_ParamLimits

0xf10c,	// (0x000a27df) popup_call_audio_second_window_g

0xe835,	// (0x000a1f08) popup_call_audio_second_window_t1_ParamLimits

0xe835,	// (0x000a1f08) popup_call_audio_second_window_t1

0xe8b6,	// (0x000a1f89) popup_call_audio_second_window_t2_ParamLimits

0xe8b6,	// (0x000a1f89) popup_call_audio_second_window_t2

0xe8ec,	// (0x000a1fbf) popup_call_audio_second_window_t3_ParamLimits

0xe8ec,	// (0x000a1fbf) popup_call_audio_second_window_t3

0x0002,

0xf111,	// (0x000a27e4) popup_call_audio_second_window_t_ParamLimits

0xf111,	// (0x000a27e4) popup_call_audio_second_window_t

0xe6e5,	// (0x000a1db8) bg_popup_call_pane_cp04

0xe922,	// (0x000a1ff5) list_conf_pane

0xe92a,	// (0x000a1ffd) popup_call_audio_conf_window_t1

0xe938,	// (0x000a200b) call_thumbnail_pane_g1

0xe940,	// (0x000a2013) bg_pinb_pane_ParamLimits

0xe940,	// (0x000a2013) bg_pinb_pane

0xe94e,	// (0x000a2021) find_pinb_pane

0xe957,	// (0x000a202a) listscroll_pinb_pane_ParamLimits

0xe957,	// (0x000a202a) listscroll_pinb_pane

0xe966,	// (0x000a2039) pinb_bg_pane_g1

0x09fa,	// (0x000940cd) pinb_bg_pane_g2

0x0a06,	// (0x000940d9) pinb_bg_pane_g3

0x0a12,	// (0x000940e5) pinb_bg_pane_g4

0x0a1e,	// (0x000940f1) pinb_bg_pane_g5

0x0a2a,	// (0x000940fd) pinb_bg_pane_g6

0x0a35,	// (0x00094108) pinb_bg_pane_g7

0x0a40,	// (0x00094113) pinb_bg_pane_g8

0x0a4b,	// (0x0009411e) pinb_bg_pane_g9

0x0a55,	// (0x00094128) pinb_bg_pane_g10

0x0009,

0xf118,	// (0x000a27eb) pinb_bg_pane_g

0x0a72,	// (0x00094145) grid_pinb_pane

0x0a7d,	// (0x00094150) list_pinb_pane

0x0a88,	// (0x0009415b) scroll_pane_cp01_ParamLimits

0x0a88,	// (0x0009415b) scroll_pane_cp01

0xe970,	// (0x000a2043) find_pinb_pane_g1_ParamLimits

0xe970,	// (0x000a2043) find_pinb_pane_g1

0xe988,	// (0x000a205b) find_pinb_pane_t1

0xe99a,	// (0x000a206d) find_pinb_pane_t2

0x0001,

0xf132,	// (0x000a2805) find_pinb_pane_t

0xe9af,	// (0x000a2082) input_focus_pane_cp01_ParamLimits

0xe9af,	// (0x000a2082) input_focus_pane_cp01

0x0a9a,	// (0x0009416d) cell_pinb_pane_ParamLimits

0x0a9a,	// (0x0009416d) cell_pinb_pane

0x0abc,	// (0x0009418f) cell_pinb_pane_g1_ParamLimits

0x0abc,	// (0x0009418f) cell_pinb_pane_g1

0x0ad0,	// (0x000941a3) cell_pinb_pane_g2_ParamLimits

0x0ad0,	// (0x000941a3) cell_pinb_pane_g2

0xe9bb,	// (0x000a208e) cell_pinb_pane_g3_ParamLimits

0xe9bb,	// (0x000a208e) cell_pinb_pane_g3

0x0002,

0xf137,	// (0x000a280a) cell_pinb_pane_g_ParamLimits

0xf137,	// (0x000a280a) cell_pinb_pane_g

0xe6e5,	// (0x000a1db8) grid_highlight_pane_cp01

0x0adc,	// (0x000941af) list_pinb_item_pane_ParamLimits

0x0adc,	// (0x000941af) list_pinb_item_pane

0xe6e5,	// (0x000a1db8) list_highlight_pane_cp02

0x0aef,	// (0x000941c2) list_pinb_item_pane_g1_ParamLimits

0x0aef,	// (0x000941c2) list_pinb_item_pane_g1

0x0afc,	// (0x000941cf) list_pinb_item_pane_g2_ParamLimits

0x0afc,	// (0x000941cf) list_pinb_item_pane_g2

0x0b08,	// (0x000941db) list_pinb_item_pane_g3_ParamLimits

0x0b08,	// (0x000941db) list_pinb_item_pane_g3

0x0b19,	// (0x000941ec) list_pinb_item_pane_g4_ParamLimits

0x0b19,	// (0x000941ec) list_pinb_item_pane_g4

0x0003,

0xf13e,	// (0x000a2811) list_pinb_item_pane_g_ParamLimits

0xf13e,	// (0x000a2811) list_pinb_item_pane_g

0x0b25,	// (0x000941f8) list_pinb_item_pane_t1_ParamLimits

0x0b25,	// (0x000941f8) list_pinb_item_pane_t1

0x0b5a,	// (0x0009422d) calc_display_pane

0x0b82,	// (0x00094255) calc_paper_pane

0x0ba5,	// (0x00094278) grid_calc_pane

0xe6e5,	// (0x000a1db8) bg_list_pane_cp01

0x0bd3,	// (0x000942a6) clock_g1

0x0bdb,	// (0x000942ae) clock_g2

0x0001,

0xf147,	// (0x000a281a) clock_g

0x0be3,	// (0x000942b6) clock_t1_ParamLimits

0x0be3,	// (0x000942b6) clock_t1

0x0bf8,	// (0x000942cb) clock_t2_ParamLimits

0x0bf8,	// (0x000942cb) clock_t2

0x0c0a,	// (0x000942dd) clock_t3_ParamLimits

0x0c0a,	// (0x000942dd) clock_t3

0x0c1c,	// (0x000942ef) clock_t4_ParamLimits

0x0c1c,	// (0x000942ef) clock_t4

0x0c2e,	// (0x00094301) clock_t5_ParamLimits

0x0c2e,	// (0x00094301) clock_t5

0x0c43,	// (0x00094316) clock_t6_ParamLimits

0x0c43,	// (0x00094316) clock_t6

0x0c55,	// (0x00094328) clock_t7_ParamLimits

0x0c55,	// (0x00094328) clock_t7

0x0c67,	// (0x0009433a) clock_t8_ParamLimits

0x0c67,	// (0x0009433a) clock_t8

0x0c7b,	// (0x0009434e) clock_t9_ParamLimits

0x0c7b,	// (0x0009434e) clock_t9

0x0008,

0xf14c,	// (0x000a281f) clock_t_ParamLimits

0xf14c,	// (0x000a281f) clock_t

0xe9c7,	// (0x000a209a) popup_clock_analogue_window_cp02

0xe9c7,	// (0x000a209a) popup_clock_digital_window_cp01

0xe9cf,	// (0x000a20a2) listscroll_help_pane

0xe6e5,	// (0x000a1db8) phob_pre_status_pane

0xe9d9,	// (0x000a20ac) grid_qdial_pane

0xe6e5,	// (0x000a1db8) listscroll_mce_pane

0xe9e3,	// (0x000a20b6) bg_notes_pane

0xe9f1,	// (0x000a20c4) list_notes_pane

0x0c91,	// (0x00094364) scroll_pane_cp06

0xe9ff,	// (0x000a20d2) bg_calc_paper_pane

0xa102,	// (0x0009d7d5) list_calc_pane

0xea13,	// (0x000a20e6) bg_calc_display_pane

0x0ca5,	// (0x00094378) calc_display_pane_t1

0x0cb7,	// (0x0009438a) calc_display_pane_t2

0xa11c,	// (0x0009d7ef) calc_display_pane_t3

0x0002,

0xf15f,	// (0x000a2832) calc_display_pane_t

0x0cc9,	// (0x0009439c) cell_calc_pane_ParamLimits

0x0cc9,	// (0x0009439c) cell_calc_pane

0xea1f,	// (0x000a20f2) bg_calc_paper_pane_g1

0xea2b,	// (0x000a20fe) bg_calc_paper_pane_g2

0xea37,	// (0x000a210a) bg_calc_paper_pane_g3

0xea43,	// (0x000a2116) bg_calc_paper_pane_g4

0xea4f,	// (0x000a2122) bg_calc_paper_pane_g5

0x0d08,	// (0x000943db) bg_calc_paper_pane_g6

0x0d1b,	// (0x000943ee) bg_calc_paper_pane_g7

0x0d2e,	// (0x00094401) bg_calc_paper_pane_g8

0x0007,

0xf166,	// (0x000a2839) bg_calc_paper_pane_g

0x0d3f,	// (0x00094412) calc_bg_paper_pane_g9

0x0d50,	// (0x00094423) list_calc_item_pane_ParamLimits

0x0d50,	// (0x00094423) list_calc_item_pane

0xeaa9,	// (0x000a217c) list_calc_item_pane_g1

0xa12e,	// (0x0009d801) list_calc_item_pane_t1_ParamLimits

0xa12e,	// (0x0009d801) list_calc_item_pane_t1

0x0d65,	// (0x00094438) list_calc_item_pane_t2_ParamLimits

0x0d65,	// (0x00094438) list_calc_item_pane_t2

0x0001,

0xf177,	// (0x000a284a) list_calc_item_pane_t_ParamLimits

0xf177,	// (0x000a284a) list_calc_item_pane_t

0xeab6,	// (0x000a2189) cell_calc_pane_g1

0xeac0,	// (0x000a2193) grid_highlight_pane_cp02

0xeae2,	// (0x000a21b5) bg_calc_display_pane_g1

0xa140,	// (0x0009d813) bg_calc_display_pane_g2

0xeaeb,	// (0x000a21be) bg_calc_display_pane_g3

0x0002,

0xf181,	// (0x000a2854) bg_calc_display_pane_g

0x0d97,	// (0x0009446a) cell_qdial_pane_ParamLimits

0x0d97,	// (0x0009446a) cell_qdial_pane

0x0dad,	// (0x00094480) cell_qdial_pane_g1_ParamLimits

0x0dad,	// (0x00094480) cell_qdial_pane_g1

0x0dc3,	// (0x00094496) cell_qdial_pane_g2_ParamLimits

0x0dc3,	// (0x00094496) cell_qdial_pane_g2

0xeaf4,	// (0x000a21c7) cell_qdial_pane_g3_ParamLimits

0xeaf4,	// (0x000a21c7) cell_qdial_pane_g3

0x0003,

0xf188,	// (0x000a285b) cell_qdial_pane_g_ParamLimits

0xf188,	// (0x000a285b) cell_qdial_pane_g

0x0de9,	// (0x000944bc) cell_qdial_pane_t1_ParamLimits

0x0de9,	// (0x000944bc) cell_qdial_pane_t1

0x0e01,	// (0x000944d4) cell_qdial_pane_t2_ParamLimits

0x0e01,	// (0x000944d4) cell_qdial_pane_t2

0x0e14,	// (0x000944e7) cell_qdial_pane_t3_ParamLimits

0x0e14,	// (0x000944e7) cell_qdial_pane_t3

0x0002,

0xf191,	// (0x000a2864) cell_qdial_pane_t_ParamLimits

0xf191,	// (0x000a2864) cell_qdial_pane_t

0xe6e5,	// (0x000a1db8) grid_highlight_pane_cp04

0xeb00,	// (0x000a21d3) thumbnail_qdial_pane_ParamLimits

0xeb00,	// (0x000a21d3) thumbnail_qdial_pane

0xeb5c,	// (0x000a222f) list_help_pane

0xeb65,	// (0x000a2238) scroll_pane_cp02

0x0e27,	// (0x000944fa) help_list_pane_t1_ParamLimits

0x0e27,	// (0x000944fa) help_list_pane_t1

0xa14a,	// (0x0009d81d) bg_notes_pane_g2

0xa152,	// (0x0009d825) bg_notes_pane_g3

0xa15a,	// (0x0009d82d) notes_bg_pane_g1

0xa162,	// (0x0009d835) notes_bg_pane_g4

0xa16a,	// (0x0009d83d) notes_bg_pane_g5

0xa172,	// (0x0009d845) notes_bg_pane_g6

0xa17a,	// (0x0009d84d) notes_bg_pane_g7

0xa182,	// (0x0009d855) notes_bg_pane_g8

0xa18a,	// (0x0009d85d) notes_bg_pane_g9

0x0006,

0xf1af,	// (0x000a2882) notes_bg_pane_g

0x0e4b,	// (0x0009451e) list_notes_text_pane_ParamLimits

0x0e4b,	// (0x0009451e) list_notes_text_pane

0xeb6e,	// (0x000a2241) list_notes_text_pane_g1

0x0e62,	// (0x00094535) list_notes_text_pane_t1

0xea13,	// (0x000a20e6) listscroll_cale_week_pane

0x0e8d,	// (0x00094560) bg_cale_heading_pane

0xeb88,	// (0x000a225b) bg_cale_pane_cp01

0x0ea9,	// (0x0009457c) cale_week_corner_pane

0x0ebf,	// (0x00094592) cale_week_day_heading_pane

0x0edb,	// (0x000945ae) cale_week_scroll_pane_g1

0x0ef4,	// (0x000945c7) cale_week_scroll_pane_g2

0x0f05,	// (0x000945d8) cale_week_scroll_pane_g3

0x0f16,	// (0x000945e9) cale_week_scroll_pane_g4

0x0f27,	// (0x000945fa) cale_week_scroll_pane_g5

0x0f38,	// (0x0009460b) cale_week_scroll_pane_g6

0x0f49,	// (0x0009461c) cale_week_scroll_pane_g7

0x0f5a,	// (0x0009462d) cale_week_scroll_pane_g8

0x0f6b,	// (0x0009463e) cale_week_scroll_pane_g9

0x0f7c,	// (0x0009464f) cale_week_scroll_pane_g10

0x0f8d,	// (0x00094660) cale_week_scroll_pane_g11

0x0f9e,	// (0x00094671) cale_week_scroll_pane_g12

0x0faf,	// (0x00094682) cale_week_scroll_pane_g13

0x0fc8,	// (0x0009469b) cale_week_scroll_pane_g14

0x0fe1,	// (0x000946b4) cale_week_scroll_pane_g15

0x000e,

0xf1be,	// (0x000a2891) cale_week_scroll_pane_g

0x0ffa,	// (0x000946cd) cale_week_time_pane

0x100b,	// (0x000946de) grid_cale_week_pane

0x1026,	// (0x000946f9) scroll_pane_cp08

0x103e,	// (0x00094711) cell_cale_week_pane_ParamLimits

0x103e,	// (0x00094711) cell_cale_week_pane

0x1086,	// (0x00094759) cale_week_day_heading_pane_t1

0x109a,	// (0x0009476d) cale_week_day_heading_pane_t2

0x10ae,	// (0x00094781) cale_week_day_heading_pane_t3

0x10c2,	// (0x00094795) cale_week_day_heading_pane_t4

0x10d6,	// (0x000947a9) cale_week_day_heading_pane_t5

0x10ea,	// (0x000947bd) cale_week_day_heading_pane_t6

0x10fe,	// (0x000947d1) cale_week_day_heading_pane_t7

0x0006,

0xf1dd,	// (0x000a28b0) cale_week_day_heading_pane_t

0xebb3,	// (0x000a2286) bg_cale_side_pane

0x1112,	// (0x000947e5) cale_week_time_pane_t1

0x112a,	// (0x000947fd) cale_week_time_pane_t2

0x1142,	// (0x00094815) cale_week_time_pane_t3

0x115a,	// (0x0009482d) cale_week_time_pane_t4

0x1172,	// (0x00094845) cale_week_time_pane_t5

0x118a,	// (0x0009485d) cale_week_time_pane_t6

0x11a2,	// (0x00094875) cale_week_time_pane_t7

0x11be,	// (0x00094891) cale_week_time_pane_t8

0x0007,

0xf1ec,	// (0x000a28bf) cale_week_time_pane_t

0x11de,	// (0x000948b1) cell_cale_week_pane_g2

0x11ef,	// (0x000948c2) cell_cale_week_pane_g3_ParamLimits

0x11ef,	// (0x000948c2) cell_cale_week_pane_g3

0xebc1,	// (0x000a2294) grid_highlight_pane_cp07

0xebc9,	// (0x000a229c) listscroll_gms_pane

0xebd3,	// (0x000a22a6) grid_gms_pane

0xebdc,	// (0x000a22af) listscroll_gms_pane_g1

0xebe4,	// (0x000a22b7) listscroll_gms_pane_g2

0x0001,

0xf1fd,	// (0x000a28d0) listscroll_gms_pane_g

0x1207,	// (0x000948da) scroll_pane_cp010

0x1212,	// (0x000948e5) cell_gms_pane_ParamLimits

0x1212,	// (0x000948e5) cell_gms_pane

0x122c,	// (0x000948ff) cell_gms_pane_g1

0xebec,	// (0x000a22bf) cell_gms_pane_g2

0xebf4,	// (0x000a22c7) cell_gms_pane_g3

0xebfd,	// (0x000a22d0) cell_gms_pane_g4

0x0003,

0xf202,	// (0x000a28d5) cell_gms_pane_g

0xec06,	// (0x000a22d9) grid_highlight_pane_cp09

0x35ce,	// (0x00096ca1) phob_pre_status_pane_g1

0x35d6,	// (0x00096ca9) phob_pre_status_pane_g2

0x35de,	// (0x00096cb1) phob_pre_status_pane_g3

0x35e6,	// (0x00096cb9) phob_pre_status_pane_g4

0x0004,

0xf5f1,	// (0x000a2cc4) phob_pre_status_pane_g

0x35f6,	// (0x00096cc9) phob_pre_status_pane_t1

0x3606,	// (0x00096cd9) phob_pre_status_pane_t2

0x3616,	// (0x00096ce9) phob_pre_status_pane_t3

0x0002,

0xf5fc,	// (0x000a2ccf) phob_pre_status_pane_t

0xe6e5,	// (0x000a1db8) bg_list_pane_cp05

0x123c,	// (0x0009490f) grid_vorec_pane

0x1248,	// (0x0009491b) vorec_t1

0x1256,	// (0x00094929) vorec_t2

0x1264,	// (0x00094937) vorec_t3

0x1272,	// (0x00094945) vorec_t4

0x1280,	// (0x00094953) vorec_t5

0xa192,	// (0x0009d865) vorec_t6

0x0006,

0xf20b,	// (0x000a28de) vorec_t

0x129c,	// (0x0009496f) wait_bar_pane_cp01

0x12a4,	// (0x00094977) cell_vorec_pane_ParamLimits

0x12a4,	// (0x00094977) cell_vorec_pane

0xec0e,	// (0x000a22e1) cell_vorec_pane_g1

0xe6e5,	// (0x000a1db8) grid_highlight_pane_cp05

0x12cf,	// (0x000949a2) cams_zoom_pane

0x12de,	// (0x000949b1) image_vga_pane

0x12f8,	// (0x000949cb) main_camera_pane_g1

0x130a,	// (0x000949dd) main_camera_pane_g2

0x131a,	// (0x000949ed) main_camera_pane_g3

0x132e,	// (0x00094a01) main_camera_pane_g4

0x1342,	// (0x00094a15) main_camera_pane_g5

0x1356,	// (0x00094a29) main_camera_pane_g6

0x136a,	// (0x00094a3d) main_camera_pane_g7

0x0007,

0xf21a,	// (0x000a28ed) main_camera_pane_g

0x137e,	// (0x00094a51) main_camera_pane_t1

0x1394,	// (0x00094a67) main_camera_pane_t2

0x0001,

0xf22b,	// (0x000a28fe) main_camera_pane_t

0x13d2,	// (0x00094aa5) cams_zoom_pane_cp_ParamLimits

0x13d2,	// (0x00094aa5) cams_zoom_pane_cp

0x13fa,	// (0x00094acd) image_cif_pane_ParamLimits

0x13fa,	// (0x00094acd) image_cif_pane

0x1435,	// (0x00094b08) image_subqcif_pane

0x143f,	// (0x00094b12) main_video_pane_g1_ParamLimits

0x143f,	// (0x00094b12) main_video_pane_g1

0x1463,	// (0x00094b36) main_video_pane_g2_ParamLimits

0x1463,	// (0x00094b36) main_video_pane_g2

0x1499,	// (0x00094b6c) main_video_pane_g3_ParamLimits

0x1499,	// (0x00094b6c) main_video_pane_g3

0x14c7,	// (0x00094b9a) main_video_pane_g4_ParamLimits

0x14c7,	// (0x00094b9a) main_video_pane_g4

0x14f5,	// (0x00094bc8) main_video_pane_g5_ParamLimits

0x14f5,	// (0x00094bc8) main_video_pane_g5

0xec24,	// (0x000a22f7) main_video_pane_g6_ParamLimits

0xec24,	// (0x000a22f7) main_video_pane_g6

0x0006,

0xf230,	// (0x000a2903) main_video_pane_g_ParamLimits

0xf230,	// (0x000a2903) main_video_pane_g

0x151e,	// (0x00094bf1) main_video_pane_t1_ParamLimits

0x151e,	// (0x00094bf1) main_video_pane_t1

0xec3e,	// (0x000a2311) cams_zoom_pane_g1

0xec47,	// (0x000a231a) cams_zoom_pane_g2

0xec50,	// (0x000a2323) cams_zoom_pane_g3

0xec59,	// (0x000a232c) cams_zoom_pane_g4

0x0003,

0xf23f,	// (0x000a2912) cams_zoom_pane_g

0x157b,	// (0x00094c4e) grid_cams_pane

0x1595,	// (0x00094c68) linegrid_cams_pane

0x15a7,	// (0x00094c7a) cell_cams_pane_ParamLimits

0x15a7,	// (0x00094c7a) cell_cams_pane

0xec62,	// (0x000a2335) cams_burst_image_pane

0xec6a,	// (0x000a233d) cell_cams_pane_g1

0xe6e5,	// (0x000a1db8) grid_highlight_pane_cp03

0xeab6,	// (0x000a2189) mp_bg_pane_g1

0xe6e5,	// (0x000a1db8) bg_list_pane_cp03

0xe028,	// (0x000a16fb) bg_mp_pane

0xe030,	// (0x000a1703) grid_mp_pane

0xe038,	// (0x000a170b) media_player_g1

0xe042,	// (0x000a1715) media_player_t1

0xe050,	// (0x000a1723) media_player_t2

0xe05e,	// (0x000a1731) media_player_t3

0xe06c,	// (0x000a173f) media_player_t4

0xe07a,	// (0x000a174d) media_player_t5

0xe088,	// (0x000a175b) media_player_t6

0xe096,	// (0x000a1769) media_player_t7

0x0006,

0xf5db,	// (0x000a2cae) media_player_t

0xe0a4,	// (0x000a1777) wait_bar_pane_cp02

0xf5c0,	// (0x000a2c93) main_usb_pane_t

0x35c5,	// (0x00096c98) cell_mp_pane

0xeab6,	// (0x000a2189) cell_mp_pane_g1

0xe6e5,	// (0x000a1db8) grid_highlight_pane_cp06

0xed30,	// (0x000a2403) grid_skin_colour_pane

0xed38,	// (0x000a240b) list_highlight_pane_cp03

0x1622,	// (0x00094cf5) skin_g1

0xed40,	// (0x000a2413) skin_t1

0xed4f,	// (0x000a2422) skin_t2

0x0001,

0xf274,	// (0x000a2947) skin_t

0x162c,	// (0x00094cff) cell_skin_colour_pane_ParamLimits

0x162c,	// (0x00094cff) cell_skin_colour_pane

0xed5d,	// (0x000a2430) cell_skin_colour_pane_g1

0x169f,	// (0x00094d72) call_video_g1_ParamLimits

0x169f,	// (0x00094d72) call_video_g1

0x16bb,	// (0x00094d8e) call_video_g2_ParamLimits

0x16bb,	// (0x00094d8e) call_video_g2

0x0001,

0xf279,	// (0x000a294c) call_video_g_ParamLimits

0xf279,	// (0x000a294c) call_video_g

0x1700,	// (0x00094dd3) call_video_uplink_pane_cp1_ParamLimits

0x1700,	// (0x00094dd3) call_video_uplink_pane_cp1

0xed6f,	// (0x000a2442) call_video_uplink_pane_cp2

0x17a1,	// (0x00094e74) video_down_crop_pane_ParamLimits

0x17a1,	// (0x00094e74) video_down_crop_pane

0x188a,	// (0x00094f5d) video_down_pane_ParamLimits

0x188a,	// (0x00094f5d) video_down_pane

0xed77,	// (0x000a244a) video_down_subqcif_pane_ParamLimits

0xed77,	// (0x000a244a) video_down_subqcif_pane

0xed91,	// (0x000a2464) video_down_subqcif_pane_cp_ParamLimits

0xed91,	// (0x000a2464) video_down_subqcif_pane_cp

0xedb9,	// (0x000a248c) im_reading_pane_ParamLimits

0xedb9,	// (0x000a248c) im_reading_pane

0x1993,	// (0x00095066) im_writing_pane_ParamLimits

0x1993,	// (0x00095066) im_writing_pane

0x19b1,	// (0x00095084) im_reading_pane_t1

0xedd3,	// (0x000a24a6) list_im_pane

0xede4,	// (0x000a24b7) scroll_pane_cp07

0x19f0,	// (0x000950c3) im_writing_pane_t1_ParamLimits

0x19f0,	// (0x000950c3) im_writing_pane_t1

0xedfd,	// (0x000a24d0) im_writing_pane_t2_ParamLimits

0xedfd,	// (0x000a24d0) im_writing_pane_t2

0x0001,

0xf283,	// (0x000a2956) im_writing_pane_t_ParamLimits

0xf283,	// (0x000a2956) im_writing_pane_t

0xe6e5,	// (0x000a1db8) input_focus_pane_cp04

0xe6e5,	// (0x000a1db8) input_focus_pane_cp05

0x1a05,	// (0x000950d8) list_im_single_pane_ParamLimits

0x1a05,	// (0x000950d8) list_im_single_pane

0x1a1e,	// (0x000950f1) list_single_im_pane_t1

0x3585,	// (0x00096c58) blid_accuracy_pane

0x358d,	// (0x00096c60) blid_compass_pane

0x3597,	// (0x00096c6a) main_location_t1

0x35a7,	// (0x00096c7a) main_location_t2

0x35b7,	// (0x00096c8a) main_location_t3

0x0002,

0xf5ea,	// (0x000a2cbd) main_location_t

0xe6e5,	// (0x000a1db8) aid_levels_location

0xeab6,	// (0x000a2189) blid_accuracy_pane_g1

0xeab6,	// (0x000a2189) blid_accuracy_pane_g2

0x0001,

0xf2e5,	// (0x000a29b8) blid_accuracy_pane_g

0xee45,	// (0x000a2518) wml_content_pane

0xee83,	// (0x000a2556) wml_button_pane_ParamLimits

0xee83,	// (0x000a2556) wml_button_pane

0x1a2d,	// (0x00095100) wml_list_single_large_pane_ParamLimits

0x1a2d,	// (0x00095100) wml_list_single_large_pane

0x1a46,	// (0x00095119) wml_list_single_medium_pane_ParamLimits

0x1a46,	// (0x00095119) wml_list_single_medium_pane

0x1a60,	// (0x00095133) wml_list_single_small_pane_ParamLimits

0x1a60,	// (0x00095133) wml_list_single_small_pane

0xee97,	// (0x000a256a) wml_selection_box_pane_ParamLimits

0xee97,	// (0x000a256a) wml_selection_box_pane

0xeeaa,	// (0x000a257d) wml_list_single_pane_t1

0xeeb9,	// (0x000a258c) wml_list_single_medium_pane_t1

0xeec8,	// (0x000a259b) wml_list_single_large_pane_t1

0xeed7,	// (0x000a25aa) input_focus_pane_cp02_ParamLimits

0xeed7,	// (0x000a25aa) input_focus_pane_cp02

0xeeea,	// (0x000a25bd) wml_selection_box_pane_g1

0xeef3,	// (0x000a25c6) wml_selection_box_pane_t1_ParamLimits

0xeef3,	// (0x000a25c6) wml_selection_box_pane_t1

0xe940,	// (0x000a2013) bg_wml_button_pane_ParamLimits

0xe940,	// (0x000a2013) bg_wml_button_pane

0xef0b,	// (0x000a25de) wml_button_pane_g1

0xef13,	// (0x000a25e6) wml_button_pane_t1

0xef0b,	// (0x000a25de) wml_button_bg_pane_g1

0xef23,	// (0x000a25f6) wml_button_bg_pane_g2

0xef2b,	// (0x000a25fe) wml_button_bg_pane_g3

0xef33,	// (0x000a2606) wml_button_bg_pane_g4

0xef3b,	// (0x000a260e) wml_button_bg_pane_g5

0xef43,	// (0x000a2616) wml_button_bg_pane_g6

0xef4b,	// (0x000a261e) wml_button_bg_pane_g7

0xef53,	// (0x000a2626) wml_button_bg_pane_g8

0xef5b,	// (0x000a262e) wml_button_bg_pane_g9

0x0008,

0xf288,	// (0x000a295b) wml_button_bg_pane_g

0x1a7f,	// (0x00095152) bg_list_pane_cp02

0xef63,	// (0x000a2636) mce_header_pane_ParamLimits

0xef63,	// (0x000a2636) mce_header_pane

0xef79,	// (0x000a264c) mce_icon_pane

0xef79,	// (0x000a264c) mce_image_pane

0xef82,	// (0x000a2655) mce_text_pane_ParamLimits

0xef82,	// (0x000a2655) mce_text_pane

0x1a89,	// (0x0009515c) scroll_pane_cp03

0xee7b,	// (0x000a254e) scroll_pane_cp04

0xef95,	// (0x000a2668) scroll_pane_cp05_ParamLimits

0xef95,	// (0x000a2668) scroll_pane_cp05

0x1a93,	// (0x00095166) mce_header_field_pane_ParamLimits

0x1a93,	// (0x00095166) mce_header_field_pane

0x1aac,	// (0x0009517f) mce_header_field_pane_2_ParamLimits

0x1aac,	// (0x0009517f) mce_header_field_pane_2

0x1ac2,	// (0x00095195) mce_header_field_pane_3

0x1aca,	// (0x0009519d) list_single_mce_message_pane_ParamLimits

0x1aca,	// (0x0009519d) list_single_mce_message_pane

0x1ae6,	// (0x000951b9) list_single_mce_smart_pane_ParamLimits

0x1ae6,	// (0x000951b9) list_single_mce_smart_pane

0xefa1,	// (0x000a2674) input_focus_pane_cp03

0xefaa,	// (0x000a267d) list_header_data_pane

0x1b0d,	// (0x000951e0) mce_header_field_pane_t1

0x1b1d,	// (0x000951f0) list_single_mce_header_pane_ParamLimits

0x1b1d,	// (0x000951f0) list_single_mce_header_pane

0xefb2,	// (0x000a2685) list_single_mce_header_pane_t1

0xefc1,	// (0x000a2694) list_single_mce_message_pane_g1

0xefc9,	// (0x000a269c) list_single_mce_message_pane_t1

0x1b4f,	// (0x00095222) bg_cale_heading_pane_cp01_ParamLimits

0x1b4f,	// (0x00095222) bg_cale_heading_pane_cp01

0xefd7,	// (0x000a26aa) bg_cale_pane_cp02_ParamLimits

0xefd7,	// (0x000a26aa) bg_cale_pane_cp02

0x1b82,	// (0x00095255) cale_month_corner_pane

0x1b98,	// (0x0009526b) cale_month_day_heading_pane_ParamLimits

0x1b98,	// (0x0009526b) cale_month_day_heading_pane

0x1bcb,	// (0x0009529e) cale_month_pane_g1_ParamLimits

0x1bcb,	// (0x0009529e) cale_month_pane_g1

0x1bf7,	// (0x000952ca) cale_month_pane_g2_ParamLimits

0x1bf7,	// (0x000952ca) cale_month_pane_g2

0x1c18,	// (0x000952eb) cale_month_pane_g3_ParamLimits

0x1c18,	// (0x000952eb) cale_month_pane_g3

0x1c54,	// (0x00095327) cale_month_pane_g4_ParamLimits

0x1c54,	// (0x00095327) cale_month_pane_g4

0x1c90,	// (0x00095363) cale_month_pane_g5_ParamLimits

0x1c90,	// (0x00095363) cale_month_pane_g5

0x1ccc,	// (0x0009539f) cale_month_pane_g6_ParamLimits

0x1ccc,	// (0x0009539f) cale_month_pane_g6

0x1d08,	// (0x000953db) cale_month_pane_g7_ParamLimits

0x1d08,	// (0x000953db) cale_month_pane_g7

0x1d44,	// (0x00095417) cale_month_pane_g8_ParamLimits

0x1d44,	// (0x00095417) cale_month_pane_g8

0x1d80,	// (0x00095453) cale_month_pane_g9_ParamLimits

0x1d80,	// (0x00095453) cale_month_pane_g9

0x1db6,	// (0x00095489) cale_month_pane_g10_ParamLimits

0x1db6,	// (0x00095489) cale_month_pane_g10

0x1de0,	// (0x000954b3) cale_month_pane_g11_ParamLimits

0x1de0,	// (0x000954b3) cale_month_pane_g11

0x1e0a,	// (0x000954dd) cale_month_pane_g12_ParamLimits

0x1e0a,	// (0x000954dd) cale_month_pane_g12

0x1e38,	// (0x0009550b) cale_month_pane_g13_ParamLimits

0x1e38,	// (0x0009550b) cale_month_pane_g13

0x000c,

0xf29b,	// (0x000a296e) cale_month_pane_g_ParamLimits

0xf29b,	// (0x000a296e) cale_month_pane_g

0x1e66,	// (0x00095539) cale_month_week_pane

0x1e77,	// (0x0009554a) grid_cale_month_pane_ParamLimits

0x1e77,	// (0x0009554a) grid_cale_month_pane

0x1ea5,	// (0x00095578) cale_month_day_heading_pane_t1

0x1f03,	// (0x000955d6) cale_month_day_heading_pane_t2

0x1f68,	// (0x0009563b) cale_month_day_heading_pane_t3

0x1fcd,	// (0x000956a0) cale_month_day_heading_pane_t4

0x2032,	// (0x00095705) cale_month_day_heading_pane_t5

0x2097,	// (0x0009576a) cale_month_day_heading_pane_t6

0x20fc,	// (0x000957cf) cale_month_day_heading_pane_t7

0x0006,

0xf2b6,	// (0x000a2989) cale_month_day_heading_pane_t

0xebb3,	// (0x000a2286) bg_cale_side_pane_cp01

0x2161,	// (0x00095834) cale_month_week_pane_t1

0x2178,	// (0x0009584b) cale_month_week_pane_t2

0x218f,	// (0x00095862) cale_month_week_pane_t3

0x21a6,	// (0x00095879) cale_month_week_pane_t4

0x21bd,	// (0x00095890) cale_month_week_pane_t5

0x21d4,	// (0x000958a7) cale_month_week_pane_t6

0x0005,

0xf2c5,	// (0x000a2998) cale_month_week_pane_t

0x21f3,	// (0x000958c6) cell_cale_month_pane_ParamLimits

0x21f3,	// (0x000958c6) cell_cale_month_pane

0xa1a0,	// (0x0009d873) cell_cale_month_pane_g1

0x22a1,	// (0x00095974) cell_cale_month_pane_t1_ParamLimits

0x22a1,	// (0x00095974) cell_cale_month_pane_t1

0xebc1,	// (0x000a2294) grid_highlight_pane_cp08

0xeab6,	// (0x000a2189) main_smil_g1

0x22bd,	// (0x00095990) smil_status_pane

0xf036,	// (0x000a2709) smil_text_pane

0xdf46,	// (0x000a1619) bg_popup_call3_rect_pane_g8

0xdf4e,	// (0x000a1621) bg_popup_call3_rect_pane_g9

0x0008,

0xf57e,	// (0x000a2c51) bg_popup_call3_rect_pane_g

0xe1a0,	// (0x000a1873) smil_status_volume_pane_g1

0xf040,	// (0x000a2713) smil_status_pane_t1

0xa5cf,	// (0x0009dca2) volume_smil_pane

0xf057,	// (0x000a272a) list_smil_text_pane

0x22d2,	// (0x000959a5) scroll_pane_cp011

0x22dd,	// (0x000959b0) smil_text_list_pane_t1_ParamLimits

0x22dd,	// (0x000959b0) smil_text_list_pane_t1

0xa1ac,	// (0x0009d87f) aid_volume_smil_ParamLimits

0xa1ac,	// (0x0009d87f) aid_volume_smil

0xeab6,	// (0x000a2189) smil_volume_pane_g1

0xeab6,	// (0x000a2189) smil_volume_pane_g2

0x0001,

0xf2e5,	// (0x000a29b8) smil_volume_pane_g

0xea13,	// (0x000a20e6) listscroll_cale_day_pane

0xa1ce,	// (0x0009d8a1) bg_cale_pane

0xa1e6,	// (0x0009d8b9) list_cale_pane

0xa1f7,	// (0x0009d8ca) scroll_pane_cp09

0xa208,	// (0x0009d8db) cale_bg_pane_g1

0xa210,	// (0x0009d8e3) cale_bg_pane_g2

0xa218,	// (0x0009d8eb) cale_bg_pane_g3

0xa220,	// (0x0009d8f3) cale_bg_pane_g4

0xa228,	// (0x0009d8fb) cale_bg_pane_g5

0xa230,	// (0x0009d903) cale_bg_pane_g6

0xa238,	// (0x0009d90b) cale_bg_pane_g7

0xa240,	// (0x0009d913) cale_bg_pane_g8

0xa248,	// (0x0009d91b) cale_bg_pane_g9

0x0008,

0xf2ea,	// (0x000a29bd) cale_bg_pane_g

0x2332,	// (0x00095a05) list_cale_time_pane_ParamLimits

0x2332,	// (0x00095a05) list_cale_time_pane

0x2347,	// (0x00095a1a) list_cale_time_pane_g1_ParamLimits

0x2347,	// (0x00095a1a) list_cale_time_pane_g1

0xa250,	// (0x0009d923) list_cale_time_pane_g2_ParamLimits

0xa250,	// (0x0009d923) list_cale_time_pane_g2

0x2353,	// (0x00095a26) list_cale_time_pane_g3_ParamLimits

0x2353,	// (0x00095a26) list_cale_time_pane_g3

0x2361,	// (0x00095a34) list_cale_time_pane_g4_ParamLimits

0x2361,	// (0x00095a34) list_cale_time_pane_g4

0x236f,	// (0x00095a42) list_cale_time_pane_g5_ParamLimits

0x236f,	// (0x00095a42) list_cale_time_pane_g5

0x0005,

0xf2fd,	// (0x000a29d0) list_cale_time_pane_g_ParamLimits

0xf2fd,	// (0x000a29d0) list_cale_time_pane_g

0x237d,	// (0x00095a50) list_cale_time_pane_t1_ParamLimits

0x237d,	// (0x00095a50) list_cale_time_pane_t1

0x23a5,	// (0x00095a78) list_cale_time_pane_t2_ParamLimits

0x23a5,	// (0x00095a78) list_cale_time_pane_t2

0x271b,	// (0x00095dee) aid_blid_cardinal_pane

0x275d,	// (0x00095e30) compass_pane_t4

0x23cd,	// (0x00095aa0) list_cale_time_pane_t4_ParamLimits

0x23cd,	// (0x00095aa0) list_cale_time_pane_t4

0x276b,	// (0x00095e3e) compass_pane_t5

0x277b,	// (0x00095e4e) compass_pane_t6

0x2789,	// (0x00095e5c) compass_pane_t7

0xcbb6,	// (0x000a0289) navi_pane_cc_t1

0xcd0b,	// (0x000a03de) aid_phob_thumbnail_center_pane

0x2f4b,	// (0x0009661e) main_postcard_pane_g4_ParamLimits

0x0002,

0xf30a,	// (0x000a29dd) list_cale_time_pane_t_ParamLimits

0xf30a,	// (0x000a29dd) list_cale_time_pane_t

0xe33c,	// (0x000a1a0f) bg_popup_window_pane_cp02_ParamLimits

0xe33c,	// (0x000a1a0f) bg_popup_window_pane_cp02

0xa26a,	// (0x0009d93d) heading_pane_cp01_ParamLimits

0xa26a,	// (0x0009d93d) heading_pane_cp01

0xa276,	// (0x0009d949) loc_req_pane_ParamLimits

0xa276,	// (0x0009d949) loc_req_pane

0xa286,	// (0x0009d959) loc_type_pane_ParamLimits

0xa286,	// (0x0009d959) loc_type_pane

0xa298,	// (0x0009d96b) loc_type_pane_t1_ParamLimits

0xa298,	// (0x0009d96b) loc_type_pane_t1

0xa2aa,	// (0x0009d97d) loc_type_pane_t2_ParamLimits

0xa2aa,	// (0x0009d97d) loc_type_pane_t2

0xa2bc,	// (0x0009d98f) loc_type_pane_t3_ParamLimits

0xa2bc,	// (0x0009d98f) loc_type_pane_t3

0x0002,

0xf311,	// (0x000a29e4) loc_type_pane_t_ParamLimits

0xf311,	// (0x000a29e4) loc_type_pane_t

0xa2ce,	// (0x0009d9a1) list_loc_req_pane

0xa2d8,	// (0x0009d9ab) scroll_pane_cp012

0x23f5,	// (0x00095ac8) list_single_loc_request_popup_menu_pane_ParamLimits

0x23f5,	// (0x00095ac8) list_single_loc_request_popup_menu_pane

0xa2e3,	// (0x0009d9b6) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xa2e3,	// (0x0009d9b6) list_single_loc_request_popup_menu_pane_g1

0xa2ef,	// (0x0009d9c2) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xa2ef,	// (0x0009d9c2) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf318,	// (0x000a29eb) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf318,	// (0x000a29eb) list_single_loc_request_popup_menu_pane_g

0xa2fb,	// (0x0009d9ce) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xa2fb,	// (0x0009d9ce) list_single_loc_request_popup_menu_pane_t1

0xe940,	// (0x000a2013) bg_popup_window_pane_cp03_ParamLimits

0xe940,	// (0x000a2013) bg_popup_window_pane_cp03

0xa311,	// (0x0009d9e4) heading_loc_req_pane_ParamLimits

0xa311,	// (0x0009d9e4) heading_loc_req_pane

0x2402,	// (0x00095ad5) popup_dyc_status_message_window_g1_ParamLimits

0x2402,	// (0x00095ad5) popup_dyc_status_message_window_g1

0x2416,	// (0x00095ae9) popup_dyc_status_message_window_t1_ParamLimits

0x2416,	// (0x00095ae9) popup_dyc_status_message_window_t1

0x242b,	// (0x00095afe) popup_dyc_status_message_window_t2_ParamLimits

0x242b,	// (0x00095afe) popup_dyc_status_message_window_t2

0x2440,	// (0x00095b13) popup_dyc_status_message_window_t3_ParamLimits

0x2440,	// (0x00095b13) popup_dyc_status_message_window_t3

0x0002,

0xf31d,	// (0x000a29f0) popup_dyc_status_message_window_t_ParamLimits

0xf31d,	// (0x000a29f0) popup_dyc_status_message_window_t

0xe6e5,	// (0x000a1db8) bg_heading_pane_cp01

0xa31d,	// (0x0009d9f0) heading_loc_req_pane_g1

0xa325,	// (0x0009d9f8) heading_loc_req_pane_g2

0xa32d,	// (0x0009da00) heading_loc_req_pane_g3

0x0002,

0xf324,	// (0x000a29f7) heading_loc_req_pane_g

0xa335,	// (0x0009da08) heading_loc_req_pane_t1

0xa345,	// (0x0009da18) bg_popup_sub_pane_cp01_ParamLimits

0xa345,	// (0x0009da18) bg_popup_sub_pane_cp01

0xa353,	// (0x0009da26) popup_cale_events_window_g1_ParamLimits

0xa353,	// (0x0009da26) popup_cale_events_window_g1

0xa373,	// (0x0009da46) popup_cale_events_window_g2_ParamLimits

0xa373,	// (0x0009da46) popup_cale_events_window_g2

0x0001,

0xf358,	// (0x000a2a2b) popup_cale_events_window_g_ParamLimits

0xf358,	// (0x000a2a2b) popup_cale_events_window_g

0xa393,	// (0x0009da66) popup_cale_events_window_t1_ParamLimits

0xa393,	// (0x0009da66) popup_cale_events_window_t1

0xa3a5,	// (0x0009da78) popup_cale_events_window_t2_ParamLimits

0xa3a5,	// (0x0009da78) popup_cale_events_window_t2

0xa3e3,	// (0x0009dab6) popup_cale_events_window_t3_ParamLimits

0xa3e3,	// (0x0009dab6) popup_cale_events_window_t3

0xa41d,	// (0x0009daf0) popup_cale_events_window_t4_ParamLimits

0xa41d,	// (0x0009daf0) popup_cale_events_window_t4

0x0003,

0xf35d,	// (0x000a2a30) popup_cale_events_window_t_ParamLimits

0xf35d,	// (0x000a2a30) popup_cale_events_window_t

0x24ce,	// (0x00095ba1) call_type_pane

0x24de,	// (0x00095bb1) popup_call_status_window_g1

0x24f2,	// (0x00095bc5) popup_call_status_window_g2

0x2506,	// (0x00095bd9) popup_call_status_window_g3

0x0002,

0xf366,	// (0x000a2a39) popup_call_status_window_g

0xa453,	// (0x0009db26) call_type_pane_g1

0xa45c,	// (0x0009db2f) call_type_pane_g2

0x0001,

0xf36d,	// (0x000a2a40) call_type_pane_g

0xe6e5,	// (0x000a1db8) bg_popup_sub_pane_cp02

0xa465,	// (0x0009db38) listscroll_popup_wml_pane

0xa46d,	// (0x0009db40) list_wml_pane

0xa477,	// (0x0009db4a) scroll_pane_cp013

0xa482,	// (0x0009db55) list_single_graphic_popup_wml_pane_ParamLimits

0xa482,	// (0x0009db55) list_single_graphic_popup_wml_pane

0xeab6,	// (0x000a2189) list_single_graphic_popup_wml_pane_g1

0xa496,	// (0x0009db69) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf372,	// (0x000a2a45) list_single_graphic_popup_wml_pane_g

0xa49e,	// (0x0009db71) list_single_graphic_popup_wml_pane_t1

0xa4b4,	// (0x0009db87) aid_call_pane

0xe938,	// (0x000a200b) popup_clock_analogue_window_g1

0xe938,	// (0x000a200b) popup_clock_analogue_window_g2

0xa4bc,	// (0x0009db8f) popup_clock_analogue_window_g3

0xa4bc,	// (0x0009db8f) popup_clock_analogue_window_g4

0xeab6,	// (0x000a2189) popup_clock_analogue_window_g5

0x0004,

0xf377,	// (0x000a2a4a) popup_clock_analogue_window_g

0xa4c4,	// (0x0009db97) popup_clock_analogue_window_t1

0xa4d2,	// (0x0009dba5) clock_digital_number_pane_ParamLimits

0xa4d2,	// (0x0009dba5) clock_digital_number_pane

0xa4de,	// (0x0009dbb1) clock_digital_number_pane_cp02_ParamLimits

0xa4de,	// (0x0009dbb1) clock_digital_number_pane_cp02

0xa4ea,	// (0x0009dbbd) clock_digital_number_pane_cp03_ParamLimits

0xa4ea,	// (0x0009dbbd) clock_digital_number_pane_cp03

0xa4f6,	// (0x0009dbc9) clock_digital_number_pane_cp04_ParamLimits

0xa4f6,	// (0x0009dbc9) clock_digital_number_pane_cp04

0xa502,	// (0x0009dbd5) clock_digital_separator_pane_ParamLimits

0xa502,	// (0x0009dbd5) clock_digital_separator_pane

0xa50e,	// (0x0009dbe1) popup_clock_digital_window_t1

0xeab6,	// (0x000a2189) clock_digital_number_pane_g1

0xeab6,	// (0x000a2189) clock_digital_number_pane_g2

0x0001,

0xf2e5,	// (0x000a29b8) clock_digital_number_pane_g

0xeab6,	// (0x000a2189) clock_digital_separator_pane_g1

0xeab6,	// (0x000a2189) clock_digital_separator_pane_g2

0x0001,

0xf2e5,	// (0x000a29b8) clock_digital_separator_pane_g

0xe6e5,	// (0x000a1db8) bg_popup_window_pane_cp04

0xca16,	// (0x000a00e9) heading_pane_cp03

0xca1e,	// (0x000a00f1) listscroll_popup_gms_pane

0xca26,	// (0x000a00f9) grid_large_graphic_popup_pane

0xca30,	// (0x000a0103) listscroll_popup_gms_pane_g1

0xca38,	// (0x000a010b) listscroll_popup_gms_pane_g2

0x0001,

0xf382,	// (0x000a2a55) listscroll_popup_gms_pane_g

0xee7b,	// (0x000a254e) scroll_pane_cp014

0x2516,	// (0x00095be9) cell_large_graphic_popup_pane_ParamLimits

0x2516,	// (0x00095be9) cell_large_graphic_popup_pane

0x252e,	// (0x00095c01) cell_large_graphic_popup_pane_g1_ParamLimits

0x252e,	// (0x00095c01) cell_large_graphic_popup_pane_g1

0xca40,	// (0x000a0113) cell_large_graphic_popup_pane_g2_ParamLimits

0xca40,	// (0x000a0113) cell_large_graphic_popup_pane_g2

0xca4c,	// (0x000a011f) cell_large_graphic_popup_pane_g3_ParamLimits

0xca4c,	// (0x000a011f) cell_large_graphic_popup_pane_g3

0xca59,	// (0x000a012c) cell_large_graphic_popup_pane_g4_ParamLimits

0xca59,	// (0x000a012c) cell_large_graphic_popup_pane_g4

0x0003,

0xf387,	// (0x000a2a5a) cell_large_graphic_popup_pane_g_ParamLimits

0xf387,	// (0x000a2a5a) cell_large_graphic_popup_pane_g

0xca69,	// (0x000a013c) grid_highlight_pane_cp010

0xeab6,	// (0x000a2189) bg_popup_call_pane_g1

0xca73,	// (0x000a0146) list_single_graphic_popup_conf_pane_ParamLimits

0xca73,	// (0x000a0146) list_single_graphic_popup_conf_pane

0xca85,	// (0x000a0158) list_highlight_pane_cp01

0xca8e,	// (0x000a0161) list_single_graphic_popup_conf_pane_g1

0xca96,	// (0x000a0169) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf390,	// (0x000a2a63) list_single_graphic_popup_conf_pane_g

0xca9e,	// (0x000a0171) list_single_graphic_popup_conf_pane_t1

0xcaac,	// (0x000a017f) linegrid_cams_pane_g1

0x253a,	// (0x00095c0d) linegrid_cams_pane_g2

0xebf4,	// (0x000a22c7) linegrid_cams_pane_g3

0xcab5,	// (0x000a0188) linegrid_cams_pane_g4

0x2543,	// (0x00095c16) linegrid_cams_pane_g5

0x254c,	// (0x00095c1f) linegrid_cams_pane_g6

0xebfd,	// (0x000a22d0) linegrid_cams_pane_g7

0x0006,

0xf395,	// (0x000a2a68) linegrid_cams_pane_g

0xcabe,	// (0x000a0191) popup_clock_analogue_window

0xcabe,	// (0x000a0191) popup_clock_digital_window

0xe6e5,	// (0x000a1db8) popup_phob_thumbnail_window

0xeab6,	// (0x000a2189) call_video_uplink_pane_g1

0xcac7,	// (0x000a019a) call_video_uplink_pane_g2

0x0001,

0xf3a4,	// (0x000a2a77) call_video_uplink_pane_g

0xcacf,	// (0x000a01a2) video_uplink_pane

0xcad7,	// (0x000a01aa) mce_image_pane_g1

0x2557,	// (0x00095c2a) mce_image_pane_g2

0x2561,	// (0x00095c34) mce_image_pane_g3

0x256b,	// (0x00095c3e) mce_image_pane_g4

0x2573,	// (0x00095c46) mce_image_pane_g5

0x0004,

0xf3a9,	// (0x000a2a7c) mce_image_pane_g

0xcae1,	// (0x000a01b4) control_top_pane_stacon_cp01_ParamLimits

0xcae1,	// (0x000a01b4) control_top_pane_stacon_cp01

0xcaf5,	// (0x000a01c8) uni_indicator_pane_stacon_cp01_ParamLimits

0xcaf5,	// (0x000a01c8) uni_indicator_pane_stacon_cp01

0xcb06,	// (0x000a01d9) bg_popup_sub_pane_cp03

0x257b,	// (0x00095c4e) chi_dic_find_pane

0x2583,	// (0x00095c56) listscroll_chi_dic_pane

0x258c,	// (0x00095c5f) main_pane_chidic_g1

0x259f,	// (0x00095c72) chi_dic_find_pane_t1

0xcb10,	// (0x000a01e3) find_chidic_pane

0xcb19,	// (0x000a01ec) chi_dic_list_pane_ParamLimits

0xcb19,	// (0x000a01ec) chi_dic_list_pane

0xcb2a,	// (0x000a01fd) scroll_pane_cp020

0x25ad,	// (0x00095c80) find_chidic_pane_t1

0xe6e5,	// (0x000a1db8) input_focus_pane_cp06

0x25bc,	// (0x00095c8f) list_chi_dic_pane_ParamLimits

0x25bc,	// (0x00095c8f) list_chi_dic_pane

0x25ce,	// (0x00095ca1) list_chi_dic_pane_t1_ParamLimits

0x25ce,	// (0x00095ca1) list_chi_dic_pane_t1

0xe6e5,	// (0x000a1db8) list_highlight_pane_cp020

0xcb32,	// (0x000a0205) bg_cale_heading_pane_g1

0x25e1,	// (0x00095cb4) bg_cale_heading_pane_g2

0x25e9,	// (0x00095cbc) bg_cale_heading_pane_g3

0x25f1,	// (0x00095cc4) bg_cale_heading_pane_g4

0x25f9,	// (0x00095ccc) bg_cale_heading_pane_g5

0x2601,	// (0x00095cd4) bg_cale_heading_pane_g6

0x2609,	// (0x00095cdc) bg_cale_heading_pane_g7

0x2611,	// (0x00095ce4) bg_cale_heading_pane_g8

0x2619,	// (0x00095cec) bg_cale_heading_pane_g9

0x0008,

0xf3b4,	// (0x000a2a87) bg_cale_heading_pane_g

0xcb32,	// (0x000a0205) bg_cale_side_pane_g1

0x2621,	// (0x00095cf4) bg_cale_side_pane_g2

0x262b,	// (0x00095cfe) bg_cale_side_pane_g3

0x2635,	// (0x00095d08) bg_cale_side_pane_g4

0x263f,	// (0x00095d12) bg_cale_side_pane_g5

0x2649,	// (0x00095d1c) bg_cale_side_pane_g6

0x2653,	// (0x00095d26) bg_cale_side_pane_g7

0x265d,	// (0x00095d30) bg_cale_side_pane_g8

0x2665,	// (0x00095d38) bg_cale_side_pane_g9

0x0008,

0xf3c7,	// (0x000a2a9a) bg_cale_side_pane_g

0x266d,	// (0x00095d40) popup_call_status_window_ParamLimits

0x266d,	// (0x00095d40) popup_call_status_window

0xcb3a,	// (0x000a020d) stacon_top_pane

0xcb42,	// (0x000a0215) status_pane_ParamLimits

0xcb42,	// (0x000a0215) status_pane

0xcb57,	// (0x000a022a) status_small_pane

0xcb5f,	// (0x000a0232) control_pane

0xe6e5,	// (0x000a1db8) stacon_bottom_pane

0xcb67,	// (0x000a023a) list_single_mce_smart_pane_t1_ParamLimits

0xcb67,	// (0x000a023a) list_single_mce_smart_pane_t1

0xcb7a,	// (0x000a024d) list_single_mce_smart_pane_t2_ParamLimits

0xcb7a,	// (0x000a024d) list_single_mce_smart_pane_t2

0x0001,

0xf3da,	// (0x000a2aad) list_single_mce_smart_pane_t_ParamLimits

0xf3da,	// (0x000a2aad) list_single_mce_smart_pane_t

0x26ba,	// (0x00095d8d) compass_pane

0x26c5,	// (0x00095d98) main_location2_pane_t1

0x26db,	// (0x00095dae) main_location2_pane_t2

0x26f1,	// (0x00095dc4) main_location2_pane_t3

0x0003,

0xf3df,	// (0x000a2ab2) main_location2_pane_t

0xcb99,	// (0x000a026c) compass_pane_g1_ParamLimits

0xcb99,	// (0x000a026c) compass_pane_g1

0x273f,	// (0x00095e12) compass_pane_t1

0x274e,	// (0x00095e21) compass_pane_t2

0x0005,

0xf3e8,	// (0x000a2abb) compass_pane_t

0x2799,	// (0x00095e6c) text_secondary_cp61

0xcbad,	// (0x000a0280) navi_pane_cams_g5

0xcbd0,	// (0x000a02a3) navi_pane_im_t1

0xcbde,	// (0x000a02b1) navi_pane_mp_g1_ParamLimits

0xcbde,	// (0x000a02b1) navi_pane_mp_g1

0xcbf2,	// (0x000a02c5) navi_pane_mp_g2_ParamLimits

0xcbf2,	// (0x000a02c5) navi_pane_mp_g2

0xcbfe,	// (0x000a02d1) navi_pane_mp_g3_ParamLimits

0xcbfe,	// (0x000a02d1) navi_pane_mp_g3

0x0002,

0xf3fc,	// (0x000a2acf) navi_pane_mp_g_ParamLimits

0xf3fc,	// (0x000a2acf) navi_pane_mp_g

0xcc0a,	// (0x000a02dd) navi_pane_mp_t1

0xcc18,	// (0x000a02eb) navi_pane_mp_t2

0x0002,

0xf403,	// (0x000a2ad6) navi_pane_mp_t

0xcc54,	// (0x000a0327) navi_pane_vt_g1

0xcc0a,	// (0x000a02dd) navi_pane_vt_t1

0xcc5c,	// (0x000a032f) navi_slider_pane

0xcc64,	// (0x000a0337) zooming_pane

0xcc6c,	// (0x000a033f) navi_slider_pane_g1

0xa52b,	// (0x0009dbfe) navi_slider_pane_g2

0x0006,

0xf40a,	// (0x000a2add) navi_slider_pane_g

0xcc90,	// (0x000a0363) aid_levels_zoom

0xcc98,	// (0x000a036b) zooming_pane_g1

0xcca0,	// (0x000a0373) zooming_pane_g2

0xcca0,	// (0x000a0373) zooming_pane_g3

0x0002,

0xf419,	// (0x000a2aec) zooming_pane_g

0xcca8,	// (0x000a037b) level_10_zoom

0xccb1,	// (0x000a0384) level_11_zoom

0xccba,	// (0x000a038d) level_1_zoom

0xccc3,	// (0x000a0396) level_2_zoom

0xcccc,	// (0x000a039f) level_3_zoom

0xccd5,	// (0x000a03a8) level_4_zoom

0xccde,	// (0x000a03b1) level_5_zoom

0xcce7,	// (0x000a03ba) level_6_zoom

0xccf0,	// (0x000a03c3) level_7_zoom

0xccf9,	// (0x000a03cc) level_8_zoom

0xcd02,	// (0x000a03d5) level_9_zoom

0xcd13,	// (0x000a03e6) popup_phob_thumbnail_window_g1

0xcd1b,	// (0x000a03ee) popup_phob_thumbnail_window_g2

0x0001,

0xf420,	// (0x000a2af3) popup_phob_thumbnail_window_g

0xe0ac,	// (0x000a177f) level_1_location

0xe0b4,	// (0x000a1787) level_2_location

0xe0bc,	// (0x000a178f) level_3_location

0xe0c4,	// (0x000a1797) level_4_location

0xcc64,	// (0x000a0337) level_5_location

0x28da,	// (0x00095fad) mce_icon_pane_g1

0x28e2,	// (0x00095fb5) mce_icon_pane_g2

0x0001,

0xf425,	// (0x000a2af8) mce_icon_pane_g

0x28ea,	// (0x00095fbd) main_mup_pane_g1_ParamLimits

0x28ea,	// (0x00095fbd) main_mup_pane_g1

0x2900,	// (0x00095fd3) main_mup_pane_g2_ParamLimits

0x2900,	// (0x00095fd3) main_mup_pane_g2

0x2918,	// (0x00095feb) main_mup_pane_g3_ParamLimits

0x2918,	// (0x00095feb) main_mup_pane_g3

0x2930,	// (0x00096003) main_mup_pane_g4_ParamLimits

0x2930,	// (0x00096003) main_mup_pane_g4

0x2942,	// (0x00096015) main_mup_pane_g5_ParamLimits

0x2942,	// (0x00096015) main_mup_pane_g5

0x295e,	// (0x00096031) main_mup_pane_g6_ParamLimits

0x295e,	// (0x00096031) main_mup_pane_g6

0x2978,	// (0x0009604b) main_mup_pane_g7_ParamLimits

0x2978,	// (0x0009604b) main_mup_pane_g7

0x2996,	// (0x00096069) main_mup_pane_g8_ParamLimits

0x2996,	// (0x00096069) main_mup_pane_g8

0x29b4,	// (0x00096087) main_mup_pane_g9_ParamLimits

0x29b4,	// (0x00096087) main_mup_pane_g9

0x29d0,	// (0x000960a3) main_mup_pane_g10_ParamLimits

0x29d0,	// (0x000960a3) main_mup_pane_g10

0x29ee,	// (0x000960c1) main_mup_pane_g11_ParamLimits

0x29ee,	// (0x000960c1) main_mup_pane_g11

0x2a08,	// (0x000960db) main_mup_pane_g12_ParamLimits

0x2a08,	// (0x000960db) main_mup_pane_g12

0x2a1e,	// (0x000960f1) main_mup_pane_g13_ParamLimits

0x2a1e,	// (0x000960f1) main_mup_pane_g13

0x000c,

0xf42a,	// (0x000a2afd) main_mup_pane_g_ParamLimits

0xf42a,	// (0x000a2afd) main_mup_pane_g

0x2a32,	// (0x00096105) main_mup_pane_t1_ParamLimits

0x2a32,	// (0x00096105) main_mup_pane_t1

0x2a4e,	// (0x00096121) main_mup_pane_t2_ParamLimits

0x2a4e,	// (0x00096121) main_mup_pane_t2

0x2a66,	// (0x00096139) main_mup_pane_t3_ParamLimits

0x2a66,	// (0x00096139) main_mup_pane_t3

0x2a7e,	// (0x00096151) main_mup_pane_t4_ParamLimits

0x2a7e,	// (0x00096151) main_mup_pane_t4

0x2a9c,	// (0x0009616f) main_mup_pane_t5_ParamLimits

0x2a9c,	// (0x0009616f) main_mup_pane_t5

0x2ab1,	// (0x00096184) main_mup_pane_t6_ParamLimits

0x2ab1,	// (0x00096184) main_mup_pane_t6

0x0005,

0xf445,	// (0x000a2b18) main_mup_pane_t_ParamLimits

0xf445,	// (0x000a2b18) main_mup_pane_t

0x2ac3,	// (0x00096196) mup_progress_pane_ParamLimits

0x2ac3,	// (0x00096196) mup_progress_pane

0x2acf,	// (0x000961a2) mup_visualizer_pane_ParamLimits

0x2acf,	// (0x000961a2) mup_visualizer_pane

0x2b01,	// (0x000961d4) mup_volume_pane_ParamLimits

0x2b01,	// (0x000961d4) mup_volume_pane

0xcd23,	// (0x000a03f6) mup_visualizer_pane_g1_ParamLimits

0xcd23,	// (0x000a03f6) mup_visualizer_pane_g1

0xcd23,	// (0x000a03f6) mup_visualizer_pane_g2_ParamLimits

0xcd23,	// (0x000a03f6) mup_visualizer_pane_g2

0xcb99,	// (0x000a026c) mup_visualizer_pane_g3_ParamLimits

0xcb99,	// (0x000a026c) mup_visualizer_pane_g3

0x0002,

0xf452,	// (0x000a2b25) mup_visualizer_pane_g_ParamLimits

0xf452,	// (0x000a2b25) mup_visualizer_pane_g

0xeab6,	// (0x000a2189) mup_volume_pane_g1

0xcd39,	// (0x000a040c) mup_volume_pane_g2

0x0001,

0xf459,	// (0x000a2b2c) mup_volume_pane_g

0xeab6,	// (0x000a2189) mup_progress_pane_g1

0xcd42,	// (0x000a0415) mup_progress_pane_g2

0xcd4b,	// (0x000a041e) mup_progress_pane_g3

0x0002,

0xf45e,	// (0x000a2b31) mup_progress_pane_g

0xe6e5,	// (0x000a1db8) bg_popup_window_pane_cp05

0xcd54,	// (0x000a0427) heading_pane_cp02_ParamLimits

0xcd54,	// (0x000a0427) heading_pane_cp02

0xcd70,	// (0x000a0443) list_popup_blid_pane

0xcd78,	// (0x000a044b) list_blid_sat_info_pane_ParamLimits

0xcd78,	// (0x000a044b) list_blid_sat_info_pane

0xcd8b,	// (0x000a045e) list_blid_sat_info_pane_g1

0xcd93,	// (0x000a0466) list_blid_sat_info_pane_t1

0x2c2b,	// (0x000962fe) mup_equalizer_pane_ParamLimits

0x2c2b,	// (0x000962fe) mup_equalizer_pane

0x2c4c,	// (0x0009631f) mup_equalizer_pane_cp1_ParamLimits

0x2c4c,	// (0x0009631f) mup_equalizer_pane_cp1

0x2c6d,	// (0x00096340) mup_equalizer_pane_cp2_ParamLimits

0x2c6d,	// (0x00096340) mup_equalizer_pane_cp2

0x2c92,	// (0x00096365) mup_equalizer_pane_cp3_ParamLimits

0x2c92,	// (0x00096365) mup_equalizer_pane_cp3

0x2cbb,	// (0x0009638e) mup_equalizer_pane_cp4_ParamLimits

0x2cbb,	// (0x0009638e) mup_equalizer_pane_cp4

0x2ce4,	// (0x000963b7) mup_equalizer_pane_cp5

0x2cfc,	// (0x000963cf) mup_equalizer_pane_cp6

0x2d14,	// (0x000963e7) mup_equalizer_pane_cp7

0xdfc6,	// (0x000a1699) bg_popup_call_poc_act_pane_g9

0xdfce,	// (0x000a16a1) bg_popup_call_poc_act_pane_g10

0xdfd6,	// (0x000a16a9) bg_popup_call_poc_act_pane_g11

0x000a,

0xe940,	// (0x000a2013) mup_scale_pane

0xeab6,	// (0x000a2189) mup_scale_pane_g1

0xcda1,	// (0x000a0474) mup_scale_pane_g2

0x0006,

0xf47a,	// (0x000a2b4d) mup_scale_pane_g

0xcdc5,	// (0x000a0498) msg_data_pane

0xcdcd,	// (0x000a04a0) scroll_pane_cp017

0x2d3e,	// (0x00096411) bg_list_pane_cp04_ParamLimits

0x2d3e,	// (0x00096411) bg_list_pane_cp04

0xcdd5,	// (0x000a04a8) msg_data_pane_g1

0x2d66,	// (0x00096439) msg_data_pane_g2

0x2d70,	// (0x00096443) msg_data_pane_g3

0x2d7a,	// (0x0009644d) msg_data_pane_g4

0x2d82,	// (0x00096455) msg_data_pane_g5

0x2d8a,	// (0x0009645d) msg_data_pane_g6

0x2d92,	// (0x00096465) msg_data_pane_g7

0x0006,

0xf489,	// (0x000a2b5c) msg_data_pane_g

0x2d9a,	// (0x0009646d) msg_text_pane_ParamLimits

0x2d9a,	// (0x0009646d) msg_text_pane

0x2dc6,	// (0x00096499) qrid_highlight_pane_cp011_ParamLimits

0x2dc6,	// (0x00096499) qrid_highlight_pane_cp011

0xe6e5,	// (0x000a1db8) msg_body_pane

0xe6e5,	// (0x000a1db8) msg_header_pane

0xcde6,	// (0x000a04b9) input_focus_pane_cp07

0x2dea,	// (0x000964bd) msg_header_pane_t1_ParamLimits

0x2dea,	// (0x000964bd) msg_header_pane_t1

0x2dfe,	// (0x000964d1) msg_header_pane_t2_ParamLimits

0x2dfe,	// (0x000964d1) msg_header_pane_t2

0x0001,

0xf49d,	// (0x000a2b70) msg_header_pane_t_ParamLimits

0xf49d,	// (0x000a2b70) msg_header_pane_t

0xcdfb,	// (0x000a04ce) msg_body_pane_g1

0x2e10,	// (0x000964e3) msg_body_pane_t1_ParamLimits

0x2e10,	// (0x000964e3) msg_body_pane_t1

0x2e41,	// (0x00096514) msg_body_pane_t2_ParamLimits

0x2e41,	// (0x00096514) msg_body_pane_t2

0x2e53,	// (0x00096526) msg_body_pane_t3_ParamLimits

0x2e53,	// (0x00096526) msg_body_pane_t3

0x0002,

0xf4a2,	// (0x000a2b75) msg_body_pane_t_ParamLimits

0xf4a2,	// (0x000a2b75) msg_body_pane_t

0x2e9f,	// (0x00096572) main_viewer_pane_g1_ParamLimits

0x2e9f,	// (0x00096572) main_viewer_pane_g1

0x2ead,	// (0x00096580) main_viewer_pane_g2_ParamLimits

0x2ead,	// (0x00096580) main_viewer_pane_g2

0x2ebb,	// (0x0009658e) main_viewer_pane_g3_ParamLimits

0x2ebb,	// (0x0009658e) main_viewer_pane_g3

0x2eca,	// (0x0009659d) main_viewer_pane_g4_ParamLimits

0x2eca,	// (0x0009659d) main_viewer_pane_g4

0xa555,	// (0x0009dc28) main_viewer_pane_g5_ParamLimits

0xa555,	// (0x0009dc28) main_viewer_pane_g5

0xa555,	// (0x0009dc28) main_viewer_pane_g7_ParamLimits

0xa555,	// (0x0009dc28) main_viewer_pane_g7

0xa567,	// (0x0009dc3a) main_viewer_pane_g8_ParamLimits

0xa567,	// (0x0009dc3a) main_viewer_pane_g8

0x0007,

0xf4b2,	// (0x000a2b85) main_viewer_pane_g_ParamLimits

0xf4b2,	// (0x000a2b85) main_viewer_pane_g

0xce03,	// (0x000a04d6) viewer_content_pane_ParamLimits

0xce03,	// (0x000a04d6) viewer_content_pane

0x2f08,	// (0x000965db) main_postcard_pane_g1_ParamLimits

0x2f08,	// (0x000965db) main_postcard_pane_g1

0x2f1e,	// (0x000965f1) main_postcard_pane_g2_ParamLimits

0x2f1e,	// (0x000965f1) main_postcard_pane_g2

0x2f34,	// (0x00096607) main_postcard_pane_g3_ParamLimits

0x2f34,	// (0x00096607) main_postcard_pane_g3

0x0005,

0xf4c3,	// (0x000a2b96) main_postcard_pane_g_ParamLimits

0xf4c3,	// (0x000a2b96) main_postcard_pane_g

0x2f4b,	// (0x0009661e) main_postcard_pane_g4

0xe1b3,	// (0x000a1886) smil_status_volume_pane_g2

0x2f8e,	// (0x00096661) postcard_pane_ParamLimits

0x2f8e,	// (0x00096661) postcard_pane

0xce11,	// (0x000a04e4) postcard_pane_g1_ParamLimits

0xce11,	// (0x000a04e4) postcard_pane_g1

0x2fde,	// (0x000966b1) postcard_pane_g2_ParamLimits

0x2fde,	// (0x000966b1) postcard_pane_g2

0x2fea,	// (0x000966bd) postcard_pane_g3_ParamLimits

0x2fea,	// (0x000966bd) postcard_pane_g3

0xce1f,	// (0x000a04f2) postcard_pane_g4_ParamLimits

0xce1f,	// (0x000a04f2) postcard_pane_g4

0x2ff6,	// (0x000966c9) postcard_pane_g5_ParamLimits

0x2ff6,	// (0x000966c9) postcard_pane_g5

0x3008,	// (0x000966db) postcard_pane_g6_ParamLimits

0x3008,	// (0x000966db) postcard_pane_g6

0xce11,	// (0x000a04e4) postcard_pane_g7_ParamLimits

0xce11,	// (0x000a04e4) postcard_pane_g7

0x0006,

0xf4d0,	// (0x000a2ba3) postcard_pane_g_ParamLimits

0xf4d0,	// (0x000a2ba3) postcard_pane_g

0x3020,	// (0x000966f3) main_mp2_pane_g1_ParamLimits

0x3020,	// (0x000966f3) main_mp2_pane_g1

0x302e,	// (0x00096701) main_mp2_pane_g2_ParamLimits

0x302e,	// (0x00096701) main_mp2_pane_g2

0x303a,	// (0x0009670d) main_mp2_pane_g3_ParamLimits

0x303a,	// (0x0009670d) main_mp2_pane_g3

0x0002,

0xf4df,	// (0x000a2bb2) main_mp2_pane_g_ParamLimits

0xf4df,	// (0x000a2bb2) main_mp2_pane_g

0x3046,	// (0x00096719) main_mp2_pane_t1_ParamLimits

0x3046,	// (0x00096719) main_mp2_pane_t1

0x305d,	// (0x00096730) main_mp2_pane_t2_ParamLimits

0x305d,	// (0x00096730) main_mp2_pane_t2

0x3071,	// (0x00096744) main_mp2_pane_t3_ParamLimits

0x3071,	// (0x00096744) main_mp2_pane_t3

0x0002,

0xf4e6,	// (0x000a2bb9) main_mp2_pane_t_ParamLimits

0xf4e6,	// (0x000a2bb9) main_mp2_pane_t

0xce2d,	// (0x000a0500) pec_content_pane_ParamLimits

0xce2d,	// (0x000a0500) pec_content_pane

0xee7b,	// (0x000a254e) scroll_pane_cp015

0xce3f,	// (0x000a0512) pec_attribute_pane_ParamLimits

0xce3f,	// (0x000a0512) pec_attribute_pane

0x3083,	// (0x00096756) pec_content_pane_g1_ParamLimits

0x3083,	// (0x00096756) pec_content_pane_g1

0xce4f,	// (0x000a0522) pec_content_pane_t1_ParamLimits

0xce4f,	// (0x000a0522) pec_content_pane_t1

0xce61,	// (0x000a0534) pec_content_pane_t2_ParamLimits

0xce61,	// (0x000a0534) pec_content_pane_t2

0x0001,

0xf4ed,	// (0x000a2bc0) pec_content_pane_t_ParamLimits

0xf4ed,	// (0x000a2bc0) pec_content_pane_t

0x308f,	// (0x00096762) list_single_graphic_pane_cp01_ParamLimits

0x308f,	// (0x00096762) list_single_graphic_pane_cp01

0xe940,	// (0x000a2013) bg_popup_sub_pane_cp04

0xce73,	// (0x000a0546) popup_mup_playback_window_g1

0xce7f,	// (0x000a0552) popup_mup_playback_window_t1

0xce94,	// (0x000a0567) popup_mup_playback_window_t2

0x0001,

0xf4f2,	// (0x000a2bc5) popup_mup_playback_window_t

0xcecb,	// (0x000a059e) main_image_pane_g1_ParamLimits

0xcecb,	// (0x000a059e) main_image_pane_g1

0xcf0e,	// (0x000a05e1) scroll_pane_cp018_ParamLimits

0xcf0e,	// (0x000a05e1) scroll_pane_cp018

0xcf26,	// (0x000a05f9) scroll_pane_cp016_ParamLimits

0xcf26,	// (0x000a05f9) scroll_pane_cp016

0x3161,	// (0x00096834) smil2_image_pane_ParamLimits

0x3161,	// (0x00096834) smil2_image_pane

0x3197,	// (0x0009686a) smil2_root_pane_ParamLimits

0x3197,	// (0x0009686a) smil2_root_pane

0x31cf,	// (0x000968a2) smil2_text_pane_ParamLimits

0x31cf,	// (0x000968a2) smil2_text_pane

0xe6e5,	// (0x000a1db8) bg_list_pane_cp06

0xcf62,	// (0x000a0635) grid_radio_pane

0xe6e5,	// (0x000a1db8) bg_popup_window_pane_cp06

0xcf6c,	// (0x000a063f) main_fmradio_pane_t1

0xca16,	// (0x000a00e9) heading_pane_cp04

0xcf7a,	// (0x000a064d) main_fmradio_pane_t2

0xdfde,	// (0x000a16b1) popup_cale_lunar_info_window_g1

0xcf88,	// (0x000a065b) main_fmradio_pane_t3

0xdfe6,	// (0x000a16b9) popup_cale_lunar_info_window_g2

0xcf98,	// (0x000a066b) main_fmradio_pane_t4

0x0001,

0xcfa6,	// (0x000a0679) main_fmradio_pane_t5

0x0004,

0xf5cd,	// (0x000a2ca0) popup_cale_lunar_info_window_g

0xf507,	// (0x000a2bda) main_fmradio_pane_t

0xcfb4,	// (0x000a0687) wait_bar_pane_cp03

0xcfbc,	// (0x000a068f) cell_fmradio_pane_ParamLimits

0xcfbc,	// (0x000a068f) cell_fmradio_pane

0xce11,	// (0x000a04e4) cell_fmradio_pane_g1_ParamLimits

0xce11,	// (0x000a04e4) cell_fmradio_pane_g1

0xe6e5,	// (0x000a1db8) grid_highlight_pane_cp011

0xcfd1,	// (0x000a06a4) poc_content_pane_ParamLimits

0xcfd1,	// (0x000a06a4) poc_content_pane

0xcfe3,	// (0x000a06b6) scroll_pane_cp019

0x325f,	// (0x00096932) popup_call_poc_act_window_ParamLimits

0x325f,	// (0x00096932) popup_call_poc_act_window

0x3283,	// (0x00096956) popup_call_poc_inact_window_ParamLimits

0x3283,	// (0x00096956) popup_call_poc_inact_window

0xf5a4,	// (0x000a2c77) bg_popup_call_poc_act_pane_g

0xdf56,	// (0x000a1629) bg_popup_call_poc_inact_pane_g1

0xdf5e,	// (0x000a1631) bg_popup_call_poc_inact_pane_g2

0xcfeb,	// (0x000a06be) popup_call_poc_act_window_g2

0xdf66,	// (0x000a1639) bg_popup_call_poc_inact_pane_g3

0xdf6e,	// (0x000a1641) bg_popup_call_poc_inact_pane_g4

0xdf76,	// (0x000a1649) bg_popup_call_poc_inact_pane_g5

0xcff3,	// (0x000a06c6) popup_call_poc_act_window_t1_ParamLimits

0xcff3,	// (0x000a06c6) popup_call_poc_act_window_t1

0xd01b,	// (0x000a06ee) popup_call_poc_act_window_t2_ParamLimits

0xd01b,	// (0x000a06ee) popup_call_poc_act_window_t2

0xd043,	// (0x000a0716) popup_call_poc_act_window_t3_ParamLimits

0xd043,	// (0x000a0716) popup_call_poc_act_window_t3

0xd06b,	// (0x000a073e) popup_call_poc_act_window_t4_ParamLimits

0xd06b,	// (0x000a073e) popup_call_poc_act_window_t4

0x0003,

0xf512,	// (0x000a2be5) popup_call_poc_act_window_t_ParamLimits

0xf512,	// (0x000a2be5) popup_call_poc_act_window_t

0xdf7e,	// (0x000a1651) bg_popup_call_poc_inact_pane_g6

0xdf86,	// (0x000a1659) bg_popup_call_poc_inact_pane_g7

0xdf8e,	// (0x000a1661) bg_popup_call_poc_inact_pane_g8

0xd07d,	// (0x000a0750) popup_call_poc_inact_window_g2

0xdf96,	// (0x000a1669) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf591,	// (0x000a2c64) bg_popup_call_poc_inact_pane_g

0xd085,	// (0x000a0758) popup_call_poc_inact_window_t1_ParamLimits

0xd085,	// (0x000a0758) popup_call_poc_inact_window_t1

0xd09a,	// (0x000a076d) popup_call_poc_inact_window_t2_ParamLimits

0xd09a,	// (0x000a076d) popup_call_poc_inact_window_t2

0xd0af,	// (0x000a0782) popup_call_poc_inact_window_t3_ParamLimits

0xd0af,	// (0x000a0782) popup_call_poc_inact_window_t3

0x0002,

0xf51b,	// (0x000a2bee) popup_call_poc_inact_window_t_ParamLimits

0xf51b,	// (0x000a2bee) popup_call_poc_inact_window_t

0xe113,	// (0x000a17e6) context_pane_ParamLimits

0x3b2e,	// (0x00097201) signal_pane_ParamLimits

0xcc64,	// (0x000a0337) main_call2_pane

0xa5b0,	// (0x0009dc83) popup_phob_thumbnail2_window_ParamLimits

0xa5b0,	// (0x0009dc83) popup_phob_thumbnail2_window

0xa53d,	// (0x0009dc10) aid_hotspot_pointer_arrow_pane

0xa545,	// (0x0009dc18) aid_hotspot_pointer_hand_pane

0x35ee,	// (0x00096cc1) phob_pre_status_pane_g5

0x12cf,	// (0x000949a2) cams_zoom_pane_ParamLimits

0x12de,	// (0x000949b1) image_vga_pane_ParamLimits

0x12f8,	// (0x000949cb) main_camera_pane_g1_ParamLimits

0x130a,	// (0x000949dd) main_camera_pane_g2_ParamLimits

0x131a,	// (0x000949ed) main_camera_pane_g3_ParamLimits

0x132e,	// (0x00094a01) main_camera_pane_g4_ParamLimits

0x1342,	// (0x00094a15) main_camera_pane_g5_ParamLimits

0x1356,	// (0x00094a29) main_camera_pane_g6_ParamLimits

0x136a,	// (0x00094a3d) main_camera_pane_g7_ParamLimits

0xf21a,	// (0x000a28ed) main_camera_pane_g_ParamLimits

0x137e,	// (0x00094a51) main_camera_pane_t1_ParamLimits

0x1394,	// (0x00094a67) main_camera_pane_t2_ParamLimits

0xf22b,	// (0x000a28fe) main_camera_pane_t_ParamLimits

0xe940,	// (0x000a2013) bg_popup_preview_window_pane_cp01_ParamLimits

0xe940,	// (0x000a2013) bg_popup_preview_window_pane_cp01

0xd0c4,	// (0x000a0797) popup_phob_thumbnail2_window_g1_ParamLimits

0xd0c4,	// (0x000a0797) popup_phob_thumbnail2_window_g1

0xe6e5,	// (0x000a1db8) call2_cli_visual_pane

0x32b7,	// (0x0009698a) popup_call2_audio_conf_window_ParamLimits

0x32b7,	// (0x0009698a) popup_call2_audio_conf_window

0x32df,	// (0x000969b2) popup_call2_audio_first_window_ParamLimits

0x32df,	// (0x000969b2) popup_call2_audio_first_window

0x3375,	// (0x00096a48) popup_call2_audio_in_window_ParamLimits

0x3375,	// (0x00096a48) popup_call2_audio_in_window

0x33c1,	// (0x00096a94) popup_call2_audio_out_window_ParamLimits

0x33c1,	// (0x00096a94) popup_call2_audio_out_window

0x3433,	// (0x00096b06) popup_call2_audio_second_window_ParamLimits

0x3433,	// (0x00096b06) popup_call2_audio_second_window

0x3499,	// (0x00096b6c) popup_call2_audio_wait_window_ParamLimits

0x3499,	// (0x00096b6c) popup_call2_audio_wait_window

0xe6e5,	// (0x000a1db8) bg_popup_call2_act_pane_cp03

0xe922,	// (0x000a1ff5) list_conf_pane_cp

0xd0d0,	// (0x000a07a3) popup_call2_audio_conf_window_t1

0xd0de,	// (0x000a07b1) list_single_graphic_popup_conf2_pane_ParamLimits

0xd0de,	// (0x000a07b1) list_single_graphic_popup_conf2_pane

0xca85,	// (0x000a0158) list_highlight_pane_cp04

0xd0f1,	// (0x000a07c4) list_single_graphic_popup_conf2_pane_g1

0xca96,	// (0x000a0169) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf522,	// (0x000a2bf5) list_single_graphic_popup_conf2_pane_g

0xd0fb,	// (0x000a07ce) list_single_graphic_popup_conf2_pane_t1

0xd109,	// (0x000a07dc) bg_popup_call2_act_pane_cp01_ParamLimits

0xd109,	// (0x000a07dc) bg_popup_call2_act_pane_cp01

0xd193,	// (0x000a0866) call_type_pane_cp05_ParamLimits

0xd193,	// (0x000a0866) call_type_pane_cp05

0xd26f,	// (0x000a0942) popup_call2_audio_second_window_g1_ParamLimits

0xd26f,	// (0x000a0942) popup_call2_audio_second_window_g1

0xd2c3,	// (0x000a0996) popup_call2_audio_second_window_g2_ParamLimits

0xd2c3,	// (0x000a0996) popup_call2_audio_second_window_g2

0x0002,

0xf527,	// (0x000a2bfa) popup_call2_audio_second_window_g_ParamLimits

0xf527,	// (0x000a2bfa) popup_call2_audio_second_window_g

0xd328,	// (0x000a09fb) popup_call2_audio_second_window_t1_ParamLimits

0xd328,	// (0x000a09fb) popup_call2_audio_second_window_t1

0xd3e3,	// (0x000a0ab6) popup_call2_audio_second_window_t2_ParamLimits

0xd3e3,	// (0x000a0ab6) popup_call2_audio_second_window_t2

0xd436,	// (0x000a0b09) popup_call2_audio_second_window_t3_ParamLimits

0xd436,	// (0x000a0b09) popup_call2_audio_second_window_t3

0x0003,

0xf52e,	// (0x000a2c01) popup_call2_audio_second_window_t_ParamLimits

0xf52e,	// (0x000a2c01) popup_call2_audio_second_window_t

0xe6e5,	// (0x000a1db8) bg_popup_call2_in_pane_cp02

0xe6ef,	// (0x000a1dc2) call_type_pane_cp04

0xe6f7,	// (0x000a1dca) popup_call2_audio_wait_window_g1

0xe6ff,	// (0x000a1dd2) popup_call2_audio_wait_window_g2

0x0001,

0xf107,	// (0x000a27da) popup_call2_audio_wait_window_g

0xe707,	// (0x000a1dda) popup_call2_audio_wait_window_t3

0xd529,	// (0x000a0bfc) bg_popup_call2_act_pane_ParamLimits

0xd529,	// (0x000a0bfc) bg_popup_call2_act_pane

0xd5e9,	// (0x000a0cbc) call_type_pane_cp03_ParamLimits

0xd5e9,	// (0x000a0cbc) call_type_pane_cp03

0xd64d,	// (0x000a0d20) popup_call2_audio_first_window_g1_ParamLimits

0xd64d,	// (0x000a0d20) popup_call2_audio_first_window_g1

0xd6bd,	// (0x000a0d90) popup_call2_audio_first_window_g2_ParamLimits

0xd6bd,	// (0x000a0d90) popup_call2_audio_first_window_g2

0xcd23,	// (0x000a03f6) popup_call2_audio_first_window_g3_ParamLimits

0xcd23,	// (0x000a03f6) popup_call2_audio_first_window_g3

0x0004,

0xf537,	// (0x000a2c0a) popup_call2_audio_first_window_g_ParamLimits

0xf537,	// (0x000a2c0a) popup_call2_audio_first_window_g

0xd79b,	// (0x000a0e6e) popup_call2_audio_first_window_t1_ParamLimits

0xd79b,	// (0x000a0e6e) popup_call2_audio_first_window_t1

0xd89e,	// (0x000a0f71) popup_call2_audio_first_window_t4_ParamLimits

0xd89e,	// (0x000a0f71) popup_call2_audio_first_window_t4

0xd981,	// (0x000a1054) popup_call2_audio_first_window_t5_ParamLimits

0xd981,	// (0x000a1054) popup_call2_audio_first_window_t5

0x0003,

0xf542,	// (0x000a2c15) popup_call2_audio_first_window_t_ParamLimits

0xf542,	// (0x000a2c15) popup_call2_audio_first_window_t

0xe938,	// (0x000a200b) bg_popup_call2_act_pane_g1

0xdff0,	// (0x000a16c3) popup_cale_lunar_info_window_t1

0xdffe,	// (0x000a16d1) popup_cale_lunar_info_window_t2

0xe00c,	// (0x000a16df) popup_cale_lunar_info_window_t3

0xe6e5,	// (0x000a1db8) bg_popup_call2_bubble_pane

0xda82,	// (0x000a1155) bg_popup_call2_in_pane_cp01_ParamLimits

0xda82,	// (0x000a1155) bg_popup_call2_in_pane_cp01

0xe3c1,	// (0x000a1a94) call_type_pane_cp02

0xdaca,	// (0x000a119d) popup_call2_audio_out_window_g1_ParamLimits

0xdaca,	// (0x000a119d) popup_call2_audio_out_window_g1

0xdaf6,	// (0x000a11c9) popup_call2_audio_out_window_g2_ParamLimits

0xdaf6,	// (0x000a11c9) popup_call2_audio_out_window_g2

0xdb1e,	// (0x000a11f1) popup_call2_audio_out_window_g3_ParamLimits

0xdb1e,	// (0x000a11f1) popup_call2_audio_out_window_g3

0x0003,

0xf54b,	// (0x000a2c1e) popup_call2_audio_out_window_g_ParamLimits

0xf54b,	// (0x000a2c1e) popup_call2_audio_out_window_g

0xdb59,	// (0x000a122c) popup_call2_audio_out_window_t1_ParamLimits

0xdb59,	// (0x000a122c) popup_call2_audio_out_window_t1

0xdbb8,	// (0x000a128b) popup_call2_audio_out_window_t2_ParamLimits

0xdbb8,	// (0x000a128b) popup_call2_audio_out_window_t2

0xdc0c,	// (0x000a12df) popup_call2_audio_out_window_t3_ParamLimits

0xdc0c,	// (0x000a12df) popup_call2_audio_out_window_t3

0xdc22,	// (0x000a12f5) popup_call2_audio_out_window_t4_ParamLimits

0xdc22,	// (0x000a12f5) popup_call2_audio_out_window_t4

0xdc38,	// (0x000a130b) popup_call2_audio_out_window_t5_ParamLimits

0xdc38,	// (0x000a130b) popup_call2_audio_out_window_t5

0x0005,

0xf554,	// (0x000a2c27) popup_call2_audio_out_window_t_ParamLimits

0xf554,	// (0x000a2c27) popup_call2_audio_out_window_t

0xdc9c,	// (0x000a136f) bg_popup_call2_in_pane_ParamLimits

0xdc9c,	// (0x000a136f) bg_popup_call2_in_pane

0xdcf8,	// (0x000a13cb) popup_call2_audio_in_window_g1_ParamLimits

0xdcf8,	// (0x000a13cb) popup_call2_audio_in_window_g1

0xdd30,	// (0x000a1403) popup_call2_audio_in_window_g2_ParamLimits

0xdd30,	// (0x000a1403) popup_call2_audio_in_window_g2

0xdd68,	// (0x000a143b) popup_call2_audio_in_window_g3_ParamLimits

0xdd68,	// (0x000a143b) popup_call2_audio_in_window_g3

0x0003,

0xf561,	// (0x000a2c34) popup_call2_audio_in_window_g_ParamLimits

0xf561,	// (0x000a2c34) popup_call2_audio_in_window_g

0xddc0,	// (0x000a1493) popup_call2_audio_in_window_t1_ParamLimits

0xddc0,	// (0x000a1493) popup_call2_audio_in_window_t1

0xde40,	// (0x000a1513) popup_call2_audio_in_window_t2_ParamLimits

0xde40,	// (0x000a1513) popup_call2_audio_in_window_t2

0xdec0,	// (0x000a1593) popup_call2_audio_in_window_t3_ParamLimits

0xdec0,	// (0x000a1593) popup_call2_audio_in_window_t3

0xdeda,	// (0x000a15ad) popup_call2_audio_in_window_t4_ParamLimits

0xdeda,	// (0x000a15ad) popup_call2_audio_in_window_t4

0xdeec,	// (0x000a15bf) popup_call2_audio_in_window_t5_ParamLimits

0xdeec,	// (0x000a15bf) popup_call2_audio_in_window_t5

0xdf01,	// (0x000a15d4) popup_call2_audio_in_window_t6_ParamLimits

0xdf01,	// (0x000a15d4) popup_call2_audio_in_window_t6

0x0005,

0xf56a,	// (0x000a2c3d) popup_call2_audio_in_window_t_ParamLimits

0xf56a,	// (0x000a2c3d) popup_call2_audio_in_window_t

0xe938,	// (0x000a200b) bg_popup_call2_in_pane_g1

0xe01a,	// (0x000a16ed) popup_cale_lunar_info_window_t4

0x0003,

0xf5d2,	// (0x000a2ca5) popup_cale_lunar_info_window_t

0xe940,	// (0x000a2013) bg_popup_call2_rect_pane_ParamLimits

0xe940,	// (0x000a2013) bg_popup_call2_rect_pane

0xe6e5,	// (0x000a1db8) call2_cli_visual_graphic_pane

0xe6e5,	// (0x000a1db8) call2_cli_visual_text_pane

0xa5c2,	// (0x0009dc95) smil_status_volume_pane_g3

0x0002,

0xeab6,	// (0x000a2189) call2_cli_visual_graphic_pane_g1

0xeab6,	// (0x000a2189) call2_cli_visual_graphic_pane_g2

0xeab6,	// (0x000a2189) call2_cli_visual_graphic_pane_g3

0x0002,

0xf577,	// (0x000a2c4a) call2_cli_visual_graphic_pane_g

0xdf16,	// (0x000a15e9) bg_popup_call2_rect_pane_g1

0xeb54,	// (0x000a2227) bg_popup_call2_rect_pane_g2

0xdf1e,	// (0x000a15f1) bg_popup_call2_rect_pane_g3

0xdf26,	// (0x000a15f9) bg_popup_call2_rect_pane_g4

0xdf2e,	// (0x000a1601) bg_popup_call2_rect_pane_g5

0xdf36,	// (0x000a1609) bg_popup_call2_rect_pane_g6

0xdf3e,	// (0x000a1611) bg_popup_call2_rect_pane_g7

0xdf46,	// (0x000a1619) bg_popup_call2_rect_pane_g8

0xdf4e,	// (0x000a1621) bg_popup_call2_rect_pane_g9

0x0008,

0xf57e,	// (0x000a2c51) bg_popup_call2_rect_pane_g

0xdf56,	// (0x000a1629) bg_popup_call2_bubble_pane_g1

0xdf5e,	// (0x000a1631) bg_popup_call2_bubble_pane_g2

0xdf66,	// (0x000a1639) bg_popup_call2_bubble_pane_g3

0xdf6e,	// (0x000a1641) bg_popup_call2_bubble_pane_g4

0xdf76,	// (0x000a1649) bg_popup_call2_bubble_pane_g5

0xdf7e,	// (0x000a1651) bg_popup_call2_bubble_pane_g6

0xdf86,	// (0x000a1659) bg_popup_call2_bubble_pane_g7

0xdf8e,	// (0x000a1661) bg_popup_call2_bubble_pane_g8

0xdf96,	// (0x000a1669) bg_popup_call2_bubble_pane_g9

0x0008,

0xf591,	// (0x000a2c64) bg_popup_call2_bubble_pane_g

0x0e7a,	// (0x0009454d) aid_cale_week_size_cell_pane

0x13ae,	// (0x00094a81) aid_cams_cif_uncrop_pane_ParamLimits

0x13ae,	// (0x00094a81) aid_cams_cif_uncrop_pane

0x1567,	// (0x00094c3a) aid_cams_size_cell_ParamLimits

0x1567,	// (0x00094c3a) aid_cams_size_cell

0x157b,	// (0x00094c4e) grid_cams_pane_ParamLimits

0x1595,	// (0x00094c68) linegrid_cams_pane_ParamLimits

0x16cc,	// (0x00094d9f) call_video_pane_t1

0x16e6,	// (0x00094db9) call_video_pane_t2

0x0001,

0xf27e,	// (0x000a2951) call_video_pane_t

0x1b31,	// (0x00095204) aid_cale_month_size_cell_pane_ParamLimits

0x1b31,	// (0x00095204) aid_cale_month_size_cell_pane

0xf61b,	// (0x000a2cee) smil_status_volume_pane_g

0xa5cf,	// (0x0009dca2) volume_smil_pane_ParamLimits

0xa07b,	// (0x0009d74e) aid_popup2_width_pane

0x0dd4,	// (0x000944a7) cell_qdial_pane_g4_ParamLimits

0x0dd4,	// (0x000944a7) cell_qdial_pane_g4

0x271b,	// (0x00095dee) aid_blid_cardinal_pane_ParamLimits

0x272b,	// (0x00095dfe) aid_blid_destination_pane_ParamLimits

0x272b,	// (0x00095dfe) aid_blid_destination_pane

0xe940,	// (0x000a2013) bg_popup_call_poc_act_pane_ParamLimits

0xe940,	// (0x000a2013) bg_popup_call_poc_act_pane

0xe940,	// (0x000a2013) bg_popup_call_poc_inact_pane_ParamLimits

0xe940,	// (0x000a2013) bg_popup_call_poc_inact_pane

0xdf9e,	// (0x000a1671) bg_popup_call_poc_act_pane_g1

0xdfa6,	// (0x000a1679) bg_popup_call_poc_act_pane_g2

0xdfae,	// (0x000a1681) bg_popup_call_poc_act_pane_g3

0xdf6e,	// (0x000a1641) bg_popup_call_poc_act_pane_g4

0xdf76,	// (0x000a1649) bg_popup_call_poc_act_pane_g5

0xdfb6,	// (0x000a1689) bg_popup_call_poc_act_pane_g6

0xdf86,	// (0x000a1659) bg_popup_call_poc_act_pane_g7

0xdfbe,	// (0x000a1691) bg_popup_call_poc_act_pane_g8

0xe6e5,	// (0x000a1db8) main_usb_pane

0xa587,	// (0x0009dc5a) popup_cale_lunar_info_window

0x19b1,	// (0x00095084) im_reading_pane_t1_ParamLimits

0xedd3,	// (0x000a24a6) list_im_pane_ParamLimits

0xede4,	// (0x000a24b7) scroll_pane_cp07_ParamLimits

0xe6e5,	// (0x000a1db8) grid_highlight_pane_cp012

0xe940,	// (0x000a2013) mup_scale_pane_ParamLimits

0xce11,	// (0x000a04e4) main_usb_pane_g1_ParamLimits

0xce11,	// (0x000a04e4) main_usb_pane_g1

0x34fa,	// (0x00096bcd) main_usb_pane_g2_ParamLimits

0x34fa,	// (0x00096bcd) main_usb_pane_g2

0x0001,

0xf5bb,	// (0x000a2c8e) main_usb_pane_g_ParamLimits

0xf5bb,	// (0x000a2c8e) main_usb_pane_g

0x3510,	// (0x00096be3) main_usb_pane_t1_ParamLimits

0x3510,	// (0x00096be3) main_usb_pane_t1

0x3522,	// (0x00096bf5) main_usb_pane_t2_ParamLimits

0x3522,	// (0x00096bf5) main_usb_pane_t2

0x3534,	// (0x00096c07) main_usb_pane_t3_ParamLimits

0x3534,	// (0x00096c07) main_usb_pane_t3

0x3546,	// (0x00096c19) main_usb_pane_t4_ParamLimits

0x3546,	// (0x00096c19) main_usb_pane_t4

0x355b,	// (0x00096c2e) main_usb_pane_t5_ParamLimits

0x355b,	// (0x00096c2e) main_usb_pane_t5

0x3570,	// (0x00096c43) main_usb_pane_t6_ParamLimits

0x3570,	// (0x00096c43) main_usb_pane_t6

0x0005,

0xf5c0,	// (0x000a2c93) main_usb_pane_t_ParamLimits

0x26ba,	// (0x00095d8d) aid_text_placing

0x26c5,	// (0x00095d98) main_location2_pane_t1_ParamLimits

0x26db,	// (0x00095dae) main_location2_pane_t2_ParamLimits

0x26f1,	// (0x00095dc4) main_location2_pane_t3_ParamLimits

0x2707,	// (0x00095dda) main_location2_pane_t4_ParamLimits

0x2707,	// (0x00095dda) main_location2_pane_t4

0xf3df,	// (0x000a2ab2) main_location2_pane_t_ParamLimits

0xe97c,	// (0x000a204f) find_pinb_pane_g2_ParamLimits

0xe97c,	// (0x000a204f) find_pinb_pane_g2

0x0001,

0xf12d,	// (0x000a2800) find_pinb_pane_g_ParamLimits

0xf12d,	// (0x000a2800) find_pinb_pane_g

0xe988,	// (0x000a205b) find_pinb_pane_t1_ParamLimits

0xe99a,	// (0x000a206d) find_pinb_pane_t2_ParamLimits

0xf132,	// (0x000a2805) find_pinb_pane_t_ParamLimits

0xe6e5,	// (0x000a1db8) main_call3_pane

0x1ea5,	// (0x00095578) cale_month_day_heading_pane_t1_ParamLimits

0x1f03,	// (0x000955d6) cale_month_day_heading_pane_t2_ParamLimits

0x1f68,	// (0x0009563b) cale_month_day_heading_pane_t3_ParamLimits

0x1fcd,	// (0x000956a0) cale_month_day_heading_pane_t4_ParamLimits

0x2032,	// (0x00095705) cale_month_day_heading_pane_t5_ParamLimits

0x2097,	// (0x0009576a) cale_month_day_heading_pane_t6_ParamLimits

0x20fc,	// (0x000957cf) cale_month_day_heading_pane_t7_ParamLimits

0xf2b6,	// (0x000a2989) cale_month_day_heading_pane_t_ParamLimits

0xf04e,	// (0x000a2721) smil_status_volume_pane

0x2fb2,	// (0x00096685) postcard_address_pane_ParamLimits

0x2fb2,	// (0x00096685) postcard_address_pane

0x2fc8,	// (0x0009669b) postcard_message_pane_ParamLimits

0x2fc8,	// (0x0009669b) postcard_message_pane

0x34d3,	// (0x00096ba6) call2_cli_visual_pane_t1_ParamLimits

0x34d3,	// (0x00096ba6) call2_cli_visual_pane_t1

0x3d3f,	// (0x00097412) postcard_message_pane_t1_ParamLimits

0x3d3f,	// (0x00097412) postcard_message_pane_t1

0xe1c6,	// (0x000a1899) postcard_address_pane_t1_ParamLimits

0xe1c6,	// (0x000a1899) postcard_address_pane_t1

0x3d2b,	// (0x000973fe) popup_call3_audio_in_window_ParamLimits

0x3d2b,	// (0x000973fe) popup_call3_audio_in_window

0x3bb0,	// (0x00097283) bg_popup_call3_in_pane_ParamLimits

0x3bb0,	// (0x00097283) bg_popup_call3_in_pane

0x3c2c,	// (0x000972ff) popup_call3_audio_in_window_g1_ParamLimits

0x3c2c,	// (0x000972ff) popup_call3_audio_in_window_g1

0x3c4c,	// (0x0009731f) popup_call3_audio_in_window_g2_ParamLimits

0x3c4c,	// (0x0009731f) popup_call3_audio_in_window_g2

0x3c6c,	// (0x0009733f) popup_call3_audio_in_window_g3_ParamLimits

0x3c6c,	// (0x0009733f) popup_call3_audio_in_window_g3

0x0003,

0xf622,	// (0x000a2cf5) popup_call3_audio_in_window_g_ParamLimits

0xf622,	// (0x000a2cf5) popup_call3_audio_in_window_g

0x3c9d,	// (0x00097370) popup_call3_audio_in_window_t1_ParamLimits

0x3c9d,	// (0x00097370) popup_call3_audio_in_window_t1

0x3cdb,	// (0x000973ae) popup_call3_audio_in_window_t2_ParamLimits

0x3cdb,	// (0x000973ae) popup_call3_audio_in_window_t2

0x3d19,	// (0x000973ec) popup_call3_audio_in_window_t3_ParamLimits

0x3d19,	// (0x000973ec) popup_call3_audio_in_window_t3

0x0002,

0xf62b,	// (0x000a2cfe) popup_call3_audio_in_window_t_ParamLimits

0xf62b,	// (0x000a2cfe) popup_call3_audio_in_window_t

0xcc64,	// (0x000a0337) bg_popup_call3_rect_pane

0xdf16,	// (0x000a15e9) bg_popup_call3_rect_pane_g1

0xeb54,	// (0x000a2227) bg_popup_call3_rect_pane_g2

0xdf1e,	// (0x000a15f1) bg_popup_call3_rect_pane_g3

0xdf26,	// (0x000a15f9) bg_popup_call3_rect_pane_g4

0xdf2e,	// (0x000a1601) bg_popup_call3_rect_pane_g5

0xdf36,	// (0x000a1609) bg_popup_call3_rect_pane_g6

0xdf3e,	// (0x000a1611) bg_popup_call3_rect_pane_g7

0x2b17,	// (0x000961ea) mup_visualizer_osc_pane

0xcd31,	// (0x000a0404) mup_visualizer_spec_pane

0x3be0,	// (0x000972b3) call3_video_qcif_pane_ParamLimits

0x3be0,	// (0x000972b3) call3_video_qcif_pane

0x3bf3,	// (0x000972c6) call3_video_qcif_uncrop_pane_ParamLimits

0x3bf3,	// (0x000972c6) call3_video_qcif_uncrop_pane

0x3c03,	// (0x000972d6) call3_video_subqcif_pane_ParamLimits

0x3c03,	// (0x000972d6) call3_video_subqcif_pane

0x3c19,	// (0x000972ec) call3_video_subqcif_uncrop_pane_ParamLimits

0x3c19,	// (0x000972ec) call3_video_subqcif_uncrop_pane

0x3c8c,	// (0x0009735f) popup_call3_audio_in_window_g4_ParamLimits

0x3c8c,	// (0x0009735f) popup_call3_audio_in_window_g4

0x3b9f,	// (0x00097272) mup_spec_half_pane

0x3ba8,	// (0x0009727b) mup_spec_half_pane_cp

0xe186,	// (0x000a1859) mup_osc_middle_pane

0xe18f,	// (0x000a1862) mup_visualizer_osc_pane_g1

0x3b7f,	// (0x00097252) mup_spec_bar_pane_ParamLimits

0x3b7f,	// (0x00097252) mup_spec_bar_pane

0xe173,	// (0x000a1846) mup_spec_bar_pane_g1

0xe17d,	// (0x000a1850) mup_spec_bar_pane_g2

0x0001,

0xf616,	// (0x000a2ce9) mup_spec_bar_pane_g

0x0e7a,	// (0x0009454d) aid_cale_week_size_cell_pane_ParamLimits

0x0e8d,	// (0x00094560) bg_cale_heading_pane_ParamLimits

0xeb88,	// (0x000a225b) bg_cale_pane_cp01_ParamLimits

0x0ea9,	// (0x0009457c) cale_week_corner_pane_ParamLimits

0x0ebf,	// (0x00094592) cale_week_day_heading_pane_ParamLimits

0x0edb,	// (0x000945ae) cale_week_scroll_pane_g1_ParamLimits

0x0ef4,	// (0x000945c7) cale_week_scroll_pane_g2_ParamLimits

0x0f05,	// (0x000945d8) cale_week_scroll_pane_g3_ParamLimits

0x0f16,	// (0x000945e9) cale_week_scroll_pane_g4_ParamLimits

0x0f27,	// (0x000945fa) cale_week_scroll_pane_g5_ParamLimits

0x0f38,	// (0x0009460b) cale_week_scroll_pane_g6_ParamLimits

0x0f49,	// (0x0009461c) cale_week_scroll_pane_g7_ParamLimits

0x0f5a,	// (0x0009462d) cale_week_scroll_pane_g8_ParamLimits

0x0f6b,	// (0x0009463e) cale_week_scroll_pane_g9_ParamLimits

0x0f7c,	// (0x0009464f) cale_week_scroll_pane_g10_ParamLimits

0x0f8d,	// (0x00094660) cale_week_scroll_pane_g11_ParamLimits

0x0f9e,	// (0x00094671) cale_week_scroll_pane_g12_ParamLimits

0x0faf,	// (0x00094682) cale_week_scroll_pane_g13_ParamLimits

0x0fc8,	// (0x0009469b) cale_week_scroll_pane_g14_ParamLimits

0x0fe1,	// (0x000946b4) cale_week_scroll_pane_g15_ParamLimits

0xf1be,	// (0x000a2891) cale_week_scroll_pane_g_ParamLimits

0x0ffa,	// (0x000946cd) cale_week_time_pane_ParamLimits

0x100b,	// (0x000946de) grid_cale_week_pane_ParamLimits

0xeba1,	// (0x000a2274) listscroll_cale_week_pane_t1

0x1026,	// (0x000946f9) scroll_pane_cp08_ParamLimits

0x1b82,	// (0x00095255) cale_month_corner_pane_ParamLimits

0xeffa,	// (0x000a26cd) cale_month_pane_t1

0x1e66,	// (0x00095539) cale_month_week_pane_ParamLimits

0x24de,	// (0x00095bb1) popup_call_status_window_g1_ParamLimits

0x24f2,	// (0x00095bc5) popup_call_status_window_g2_ParamLimits

0x2506,	// (0x00095bd9) popup_call_status_window_g3_ParamLimits

0xf366,	// (0x000a2a39) popup_call_status_window_g_ParamLimits

0xa4ac,	// (0x0009db7f) aid_call2_pane

0x2ddc,	// (0x000964af) msg_header_pane_g1

0x2fb2,	// (0x00096685) postcard_address2_pane_ParamLimits

0x2fb2,	// (0x00096685) postcard_address2_pane

0x2fc8,	// (0x0009669b) postcard_message2_pane_ParamLimits

0x2fc8,	// (0x0009669b) postcard_message2_pane

0x3b3c,	// (0x0009720f) message2_row_pane_ParamLimits

0x3b3c,	// (0x0009720f) message2_row_pane

0xe12e,	// (0x000a1801) address2_row_pane_ParamLimits

0xe12e,	// (0x000a1801) address2_row_pane

0xe141,	// (0x000a1814) postcard_message2_row_pane_g1

0xe149,	// (0x000a181c) postcard_message2_row_pane_t1

0xe141,	// (0x000a1814) address2_row_pane_g1

0xe149,	// (0x000a181c) address2_row_pane_t1

0x1234,	// (0x00094907) aid_size_cell_vorec

0xe6e5,	// (0x000a1db8) main_rss_pane

0x3b5f,	// (0x00097232) rss_list_single_pane_ParamLimits

0x3b5f,	// (0x00097232) rss_list_single_pane

0xe157,	// (0x000a182a) rss_list_single_pane_t1

0xe165,	// (0x000a1838) rss_list_single_pane_t2

0x0001,

0xf611,	// (0x000a2ce4) rss_list_single_pane_t

0xe6e5,	// (0x000a1db8) main_camera2_pane

0xe6e5,	// (0x000a1db8) main_video2_pane

0x3dae,	// (0x00097481) cams_zoom_pane_cp2_ParamLimits

0x3dae,	// (0x00097481) cams_zoom_pane_cp2

0x3dc5,	// (0x00097498) image2_vga_pane_ParamLimits

0x3dc5,	// (0x00097498) image2_vga_pane

0x3e0d,	// (0x000974e0) main_camera2_pane_g1_ParamLimits

0x3e0d,	// (0x000974e0) main_camera2_pane_g1

0x3e2d,	// (0x00097500) main_camera2_pane_g2_ParamLimits

0x3e2d,	// (0x00097500) main_camera2_pane_g2

0x3e44,	// (0x00097517) main_camera2_pane_g3_ParamLimits

0x3e44,	// (0x00097517) main_camera2_pane_g3

0x3e5b,	// (0x0009752e) main_camera2_pane_g4_ParamLimits

0x3e5b,	// (0x0009752e) main_camera2_pane_g4

0x3e72,	// (0x00097545) main_camera2_pane_g5_ParamLimits

0x3e72,	// (0x00097545) main_camera2_pane_g5

0x3e89,	// (0x0009755c) main_camera2_pane_g6_ParamLimits

0x3e89,	// (0x0009755c) main_camera2_pane_g6

0x3ea0,	// (0x00097573) main_camera2_pane_g7_ParamLimits

0x3ea0,	// (0x00097573) main_camera2_pane_g7

0x3eb7,	// (0x0009758a) main_camera2_pane_g8_ParamLimits

0x3eb7,	// (0x0009758a) main_camera2_pane_g8

0x0008,

0xf632,	// (0x000a2d05) main_camera2_pane_g_ParamLimits

0xf632,	// (0x000a2d05) main_camera2_pane_g

0x3ee5,	// (0x000975b8) main_camera2_pane_t1_ParamLimits

0x3ee5,	// (0x000975b8) main_camera2_pane_t1

0x3f1a,	// (0x000975ed) main_camera2_pane_t2_ParamLimits

0x3f1a,	// (0x000975ed) main_camera2_pane_t2

0x3f37,	// (0x0009760a) main_camera2_pane_t3_ParamLimits

0x3f37,	// (0x0009760a) main_camera2_pane_t3

0x3f95,	// (0x00097668) main_camera2_pane_t4_ParamLimits

0x3f95,	// (0x00097668) main_camera2_pane_t4

0x0006,

0xf645,	// (0x000a2d18) main_camera2_pane_t_ParamLimits

0xf645,	// (0x000a2d18) main_camera2_pane_t

0x401e,	// (0x000976f1) cams_zoom_pane_cp4_ParamLimits

0x401e,	// (0x000976f1) cams_zoom_pane_cp4

0x4034,	// (0x00097707) image2_cif_pane_ParamLimits

0x4034,	// (0x00097707) image2_cif_pane

0x405f,	// (0x00097732) image2_subqcif_pane_ParamLimits

0x405f,	// (0x00097732) image2_subqcif_pane

0x407a,	// (0x0009774d) main_video2_pane_g1_ParamLimits

0x407a,	// (0x0009774d) main_video2_pane_g1

0x4094,	// (0x00097767) main_video2_pane_g2_ParamLimits

0x4094,	// (0x00097767) main_video2_pane_g2

0x40aa,	// (0x0009777d) main_video2_pane_g3_ParamLimits

0x40aa,	// (0x0009777d) main_video2_pane_g3

0x40c0,	// (0x00097793) main_video2_pane_g4_ParamLimits

0x40c0,	// (0x00097793) main_video2_pane_g4

0x40d6,	// (0x000977a9) main_video2_pane_g5_ParamLimits

0x40d6,	// (0x000977a9) main_video2_pane_g5

0x40ec,	// (0x000977bf) main_video2_pane_g6_ParamLimits

0x40ec,	// (0x000977bf) main_video2_pane_g6

0x0005,

0xf654,	// (0x000a2d27) main_video2_pane_g_ParamLimits

0xf654,	// (0x000a2d27) main_video2_pane_g

0x4106,	// (0x000977d9) main_video2_pane_t1_ParamLimits

0x4106,	// (0x000977d9) main_video2_pane_t1

0x412a,	// (0x000977fd) main_video2_pane_t2_ParamLimits

0x412a,	// (0x000977fd) main_video2_pane_t2

0x417a,	// (0x0009784d) main_video2_pane_t3_ParamLimits

0x417a,	// (0x0009784d) main_video2_pane_t3

0x0002,

0xf661,	// (0x000a2d34) main_video2_pane_t_ParamLimits

0xf661,	// (0x000a2d34) main_video2_pane_t

0x362e,	// (0x00096d01) call_muted_g2

0x0001,

0xf603,	// (0x000a2cd6) call_muted_g

0xe6e5,	// (0x000a1db8) main_mup2_pane

0x41c2,	// (0x00097895) main_mup2_pane_g1_ParamLimits

0x41c2,	// (0x00097895) main_mup2_pane_g1

0x41ce,	// (0x000978a1) main_mup2_pane_g2_ParamLimits

0x41ce,	// (0x000978a1) main_mup2_pane_g2

0xa638,	// (0x0009dd0b) main_mup_pane_g13_cp1

0xa640,	// (0x0009dd13) mup_volume_pane_cp1

0x41ec,	// (0x000978bf) main_mup2_pane_g4_ParamLimits

0x41ec,	// (0x000978bf) main_mup2_pane_g4

0x41fc,	// (0x000978cf) main_mup2_pane_g5_ParamLimits

0x41fc,	// (0x000978cf) main_mup2_pane_g5

0x420c,	// (0x000978df) main_mup2_pane_g6_ParamLimits

0x420c,	// (0x000978df) main_mup2_pane_g6

0x421c,	// (0x000978ef) main_mup2_pane_g7_ParamLimits

0x421c,	// (0x000978ef) main_mup2_pane_g7

0x0006,

0xf668,	// (0x000a2d3b) main_mup2_pane_g_ParamLimits

0xf668,	// (0x000a2d3b) main_mup2_pane_g

0x4234,	// (0x00097907) main_mup2_pane_t1_ParamLimits

0x4234,	// (0x00097907) main_mup2_pane_t1

0x424a,	// (0x0009791d) main_mup2_pane_t2_ParamLimits

0x424a,	// (0x0009791d) main_mup2_pane_t2

0x4260,	// (0x00097933) main_mup2_pane_t3_ParamLimits

0x4260,	// (0x00097933) main_mup2_pane_t3

0x4276,	// (0x00097949) main_mup2_pane_t4_ParamLimits

0x4276,	// (0x00097949) main_mup2_pane_t4

0x428e,	// (0x00097961) main_mup2_pane_t5_ParamLimits

0x428e,	// (0x00097961) main_mup2_pane_t5

0x42a6,	// (0x00097979) main_mup2_pane_t6_ParamLimits

0x42a6,	// (0x00097979) main_mup2_pane_t6

0x0005,

0xf677,	// (0x000a2d4a) main_mup2_pane_t_ParamLimits

0xf677,	// (0x000a2d4a) main_mup2_pane_t

0x42d6,	// (0x000979a9) mup2_visualizer_pane_ParamLimits

0x42d6,	// (0x000979a9) mup2_visualizer_pane

0x4304,	// (0x000979d7) mup_progress_pane_cp_ParamLimits

0x4304,	// (0x000979d7) mup_progress_pane_cp

0xa623,	// (0x0009dcf6) mup_volume_pane_cp_ParamLimits

0xa623,	// (0x0009dcf6) mup_volume_pane_cp

0x431a,	// (0x000979ed) mup2_visualizer_pane_g1_ParamLimits

0x431a,	// (0x000979ed) mup2_visualizer_pane_g1

0xe1dd,	// (0x000a18b0) mup2_visualizer_pane_g2_ParamLimits

0xe1dd,	// (0x000a18b0) mup2_visualizer_pane_g2

0x432f,	// (0x00097a02) mup2_visualizer_pane_g3_ParamLimits

0x432f,	// (0x00097a02) mup2_visualizer_pane_g3

0x0002,

0xf684,	// (0x000a2d57) mup2_visualizer_pane_g_ParamLimits

0xf684,	// (0x000a2d57) mup2_visualizer_pane_g

0xcf5a,	// (0x000a062d) aid_size_cell_fmradio

0x37de,	// (0x00096eb1) aid_height_parent_landcape

0xee62,	// (0x000a2535) wml_content_pane_cp

0xee6a,	// (0x000a253d) wml_tabs_pane

0xee73,	// (0x000a2546) popup_wml_miniature_window

0xee7b,	// (0x000a254e) scroll_pane_cp021

0xee8f,	// (0x000a2562) wml_content_pane_comp8

0xe6e5,	// (0x000a1db8) bg_popup_sub_pane_cp05

0xe1fb,	// (0x000a18ce) popup_wml_miniature_window_g1

0xe203,	// (0x000a18d6) wml_miniature_view_pane

0x433b,	// (0x00097a0e) aid_size_wml_view

0x4343,	// (0x00097a16) wml_miniature_view_pane_g1

0x434c,	// (0x00097a1f) wml_miniature_view_pane_g2

0x4355,	// (0x00097a28) wml_miniature_view_pane_g3

0x435d,	// (0x00097a30) wml_miniature_view_pane_g4

0x4365,	// (0x00097a38) wml_miniature_view_pane_g5

0x436d,	// (0x00097a40) wml_miniature_view_pane_g6

0x4375,	// (0x00097a48) wml_miniature_view_pane_g7

0x437d,	// (0x00097a50) wml_miniature_view_pane_g8

0x0007,

0xf68b,	// (0x000a2d5e) wml_miniature_view_pane_g

0xe20b,	// (0x000a18de) background_graphic_ParamLimits

0xe20b,	// (0x000a18de) background_graphic

0xe217,	// (0x000a18ea) wml_tabs_2_pane

0xe220,	// (0x000a18f3) wml_tabs_3_pane_ParamLimits

0xe220,	// (0x000a18f3) wml_tabs_3_pane

0xe232,	// (0x000a1905) wml_tabs_4_pane_ParamLimits

0xe232,	// (0x000a1905) wml_tabs_4_pane

0xe248,	// (0x000a191b) wml_tabs_5_pane_ParamLimits

0xe248,	// (0x000a191b) wml_tabs_5_pane

0xe262,	// (0x000a1935) wml_tabs_pane_g2_ParamLimits

0xe262,	// (0x000a1935) wml_tabs_pane_g2

0xe276,	// (0x000a1949) wml_tabs_pane_g3_ParamLimits

0xe276,	// (0x000a1949) wml_tabs_pane_g3

0x4385,	// (0x00097a58) wml_tabs_2_active_pane_ParamLimits

0x4385,	// (0x00097a58) wml_tabs_2_active_pane

0x4399,	// (0x00097a6c) wml_tabs_2_passive_pane_ParamLimits

0x4399,	// (0x00097a6c) wml_tabs_2_passive_pane

0x43ad,	// (0x00097a80) wml_tabs_3_active_pane_cp_ParamLimits

0x43ad,	// (0x00097a80) wml_tabs_3_active_pane_cp

0x43c2,	// (0x00097a95) wml_tabs_3_passive_pane_ParamLimits

0x43c2,	// (0x00097a95) wml_tabs_3_passive_pane

0x43d5,	// (0x00097aa8) wml_tabs_3_passive_pane_cp_ParamLimits

0x43d5,	// (0x00097aa8) wml_tabs_3_passive_pane_cp

0x43ec,	// (0x00097abf) tabs_4_active_pane

0x43f4,	// (0x00097ac7) tabs_4_passive_pane

0x43fe,	// (0x00097ad1) tabs_4_passive_pane_cp

0x4406,	// (0x00097ad9) tabs_4_passive_pane_cp2

0x34f2,	// (0x00096bc5) aid_height_text

0x2ae9,	// (0x000961bc) mup_volume_cont_pane_ParamLimits

0x2ae9,	// (0x000961bc) mup_volume_cont_pane

0x0a60,	// (0x00094133) aid_size_cell_pinb

0x0a6a,	// (0x0009413d) aid_size_list_pinb

0x42f0,	// (0x000979c3) mup2_volume_cont_pane_ParamLimits

0x42f0,	// (0x000979c3) mup2_volume_cont_pane

0xa60f,	// (0x0009dce2) mup2_volume_cont_pane_g1_ParamLimits

0xa60f,	// (0x0009dce2) mup2_volume_cont_pane_g1

0x0771,	// (0x00093e44) aid_size_cell_touch_ParamLimits

0x0771,	// (0x00093e44) aid_size_cell_touch

0x0984,	// (0x00094057) touch_pane_ParamLimits

0x0984,	// (0x00094057) touch_pane

0xa0f0,	// (0x0009d7c3) main_rss2_pane

0xea69,	// (0x000a213c) listscroll_rss2_pane

0xea72,	// (0x000a2145) rss2_navigation_pane

0xea7a,	// (0x000a214d) list_rss2_pane

0xcb2a,	// (0x000a01fd) scroll_pane_cp22

0xea82,	// (0x000a2155) rss2_navigation_pane_g1

0xea8b,	// (0x000a215e) rss2_navigation_pane_g2

0xea93,	// (0x000a2166) rss2_navigation_pane_g3

0x0002,

0xf69c,	// (0x000a2d6f) rss2_navigation_pane_g

0xea9b,	// (0x000a216e) rss2_navigation_pane_t1

0x4410,	// (0x00097ae3) rss2_list_single_pane_ParamLimits

0x4410,	// (0x00097ae3) rss2_list_single_pane

0x442a,	// (0x00097afd) rss2_list_single_pane_t2

0x4438,	// (0x00097b0b) rss2_list_single_pane_t3_ParamLimits

0x4438,	// (0x00097b0b) rss2_list_single_pane_t3

0x4455,	// (0x00097b28) rss2_list_single_pane_t4

0x22c8,	// (0x0009599b) smil_status_pane_g1

0xa0e2,	// (0x0009d7b5) main_image2_pane_ParamLimits

0xa0e2,	// (0x0009d7b5) main_image2_pane

0x3ece,	// (0x000975a1) main_camera2_pane_g9_ParamLimits

0x3ece,	// (0x000975a1) main_camera2_pane_g9

0x3fea,	// (0x000976bd) main_camera2_pane_t5_ParamLimits

0x3fea,	// (0x000976bd) main_camera2_pane_t5

0xa5e4,	// (0x0009dcb7) main_camera2_pane_t6_ParamLimits

0xa5e4,	// (0x0009dcb7) main_camera2_pane_t6

0x4463,	// (0x00097b36) main_image2_pane_g1_ParamLimits

0x4463,	// (0x00097b36) main_image2_pane_g1

0x3209,	// (0x000968dc) smil2_video_pane_ParamLimits

0x3209,	// (0x000968dc) smil2_video_pane

0xa097,	// (0x0009d76a) aid_zoom_text_primary_cp

0xa0d8,	// (0x0009d7ab) popup_preview_fixed_window

0xedcb,	// (0x000a249e) im_reading_pane_g1

0x3da0,	// (0x00097473) cams2_bc_adjust_pane_cp_ParamLimits

0x3da0,	// (0x00097473) cams2_bc_adjust_pane_cp

0x4010,	// (0x000976e3) cams2_bc_adjust_pane_ParamLimits

0x4010,	// (0x000976e3) cams2_bc_adjust_pane

0xa648,	// (0x0009dd1b) cams2_bc_adjust_pane_g1

0xa650,	// (0x0009dd23) cams2_slider_pane

0xa659,	// (0x0009dd2c) cams2_slider_pane_g1

0xa662,	// (0x0009dd35) cams2_slider_pane_g2

0x0006,

0xf6a3,	// (0x000a2d76) cams2_slider_pane_g

0x0b5a,	// (0x0009422d) calc_display_pane_ParamLimits

0x0b82,	// (0x00094255) calc_paper_pane_ParamLimits

0x0ba5,	// (0x00094278) grid_calc_pane_ParamLimits

0xa50e,	// (0x0009dbe1) popup_clock_digital_window_t1_ParamLimits

0xcef7,	// (0x000a05ca) main_image_pane_t1

0x0b3c,	// (0x0009420f) aid_size_cell_calc_ParamLimits

0x0b3c,	// (0x0009420f) aid_size_cell_calc

0x3824,	// (0x00096ef7) popup_blid_sat_info2_window_ParamLimits

0x3824,	// (0x00096ef7) popup_blid_sat_info2_window

0x4481,	// (0x00097b54) aid_size_cell_blid

0x4489,	// (0x00097b5c) bg_popup_window_pane_cp07

0x44ac,	// (0x00097b7f) grid_popup_blid_pane

0x44b6,	// (0x00097b89) heading_pane_cp05_ParamLimits

0x44b6,	// (0x00097b89) heading_pane_cp05

0x4580,	// (0x00097c53) cell_popup_blid_pane_ParamLimits

0x4580,	// (0x00097c53) cell_popup_blid_pane

0x45aa,	// (0x00097c7d) cell_popup_blid_pane_g1

0x45b2,	// (0x00097c85) cell_popup_blid_pane_t1

0x42c0,	// (0x00097993) mup2_indicator_pane_ParamLimits

0x42c0,	// (0x00097993) mup2_indicator_pane

0xcc64,	// (0x000a0337) mup2_visualizer_osc_pane

0xe1e9,	// (0x000a18bc) mup2_visualizer_spec_pane_ParamLimits

0xe1e9,	// (0x000a18bc) mup2_visualizer_spec_pane

0x45c0,	// (0x00097c93) mup2_spec_half_pane

0x45c9,	// (0x00097c9c) mup2_spec_half_pane_cp

0x45d1,	// (0x00097ca4) mup2_spec_bar_pane_ParamLimits

0x45d1,	// (0x00097ca4) mup2_spec_bar_pane

0xe173,	// (0x000a1846) mup2_spec_bar_pane_g1

0xe17d,	// (0x000a1850) mup2_spec_bar_pane_g2

0x0001,

0xf616,	// (0x000a2ce9) mup2_spec_bar_pane_g

0x45f1,	// (0x00097cc4) mup2_osc_middle_pane

0xe18f,	// (0x000a1862) mup2_visualizer_osc_pane_g1

0xe2bd,	// (0x000a1990) popup_number_entry_window_t1_ParamLimits

0xe2d0,	// (0x000a19a3) popup_number_entry_window_t2_ParamLimits

0xe2e2,	// (0x000a19b5) popup_number_entry_window_t3_ParamLimits

0xe2f4,	// (0x000a19c7) popup_number_entry_window_t5_ParamLimits

0xe2f4,	// (0x000a19c7) popup_number_entry_window_t5

0xf0d8,	// (0x000a27ab) popup_number_entry_window_t_ParamLimits

0xe329,	// (0x000a19fc) text_title_cp2_ParamLimits

0xa54d,	// (0x0009dc20) aid_hotspot_pointer_text2_pane

0xa573,	// (0x0009dc46) main_viewer_pane_g9_ParamLimits

0xa573,	// (0x0009dc46) main_viewer_pane_g9

0xeffa,	// (0x000a26cd) cale_month_pane_t1_ParamLimits

0xa1ce,	// (0x0009d8a1) bg_cale_pane_ParamLimits

0xa1e6,	// (0x0009d8b9) list_cale_pane_ParamLimits

0xeba1,	// (0x000a2274) listscroll_cale_day_pane_t1

0xa1f7,	// (0x0009d8ca) scroll_pane_cp09_ParamLimits

0x2b1f,	// (0x000961f2) main_mup_eq_pane_t1_ParamLimits

0x2b1f,	// (0x000961f2) main_mup_eq_pane_t1

0x2b3b,	// (0x0009620e) main_mup_eq_pane_t2_ParamLimits

0x2b3b,	// (0x0009620e) main_mup_eq_pane_t2

0x2b57,	// (0x0009622a) main_mup_eq_pane_t3_ParamLimits

0x2b57,	// (0x0009622a) main_mup_eq_pane_t3

0x2b75,	// (0x00096248) main_mup_eq_pane_t4_ParamLimits

0x2b75,	// (0x00096248) main_mup_eq_pane_t4

0x2b93,	// (0x00096266) main_mup_eq_pane_t5_ParamLimits

0x2b93,	// (0x00096266) main_mup_eq_pane_t5

0x2bb1,	// (0x00096284) main_mup_eq_pane_t6_ParamLimits

0x2bb1,	// (0x00096284) main_mup_eq_pane_t6

0x2bc7,	// (0x0009629a) main_mup_eq_pane_t7_ParamLimits

0x2bc7,	// (0x0009629a) main_mup_eq_pane_t7

0x2bdd,	// (0x000962b0) main_mup_eq_pane_t8_ParamLimits

0x2bdd,	// (0x000962b0) main_mup_eq_pane_t8

0x2bf3,	// (0x000962c6) main_mup_eq_pane_t9_ParamLimits

0x2bf3,	// (0x000962c6) main_mup_eq_pane_t9

0x2c0f,	// (0x000962e2) main_mup_eq_pane_t10_ParamLimits

0x2c0f,	// (0x000962e2) main_mup_eq_pane_t10

0x0009,

0xf465,	// (0x000a2b38) main_mup_eq_pane_t_ParamLimits

0xf465,	// (0x000a2b38) main_mup_eq_pane_t

0x2ce4,	// (0x000963b7) mup_equalizer_pane_cp5_ParamLimits

0x2cfc,	// (0x000963cf) mup_equalizer_pane_cp6_ParamLimits

0x2d14,	// (0x000963e7) mup_equalizer_pane_cp7_ParamLimits

0xa0f0,	// (0x0009d7c3) main_gallery_pane

0xe198,	// (0x000a186b) smil2_volume_pane

0xe1a0,	// (0x000a1873) smil_status_volume_pane_g1_ParamLimits

0xe1b3,	// (0x000a1886) smil_status_volume_pane_g2_ParamLimits

0xa5c2,	// (0x0009dc95) smil_status_volume_pane_g3_ParamLimits

0xf61b,	// (0x000a2cee) smil_status_volume_pane_g_ParamLimits

0x4489,	// (0x00097b5c) bg_popup_window_pane_cp07_ParamLimits

0x4497,	// (0x00097b6a) blid_firmament_pane

0x45fa,	// (0x00097ccd) aid_size_cell_gallery_ParamLimits

0x45fa,	// (0x00097ccd) aid_size_cell_gallery

0x4610,	// (0x00097ce3) grid_gallery_pane_ParamLimits

0x4610,	// (0x00097ce3) grid_gallery_pane

0x462b,	// (0x00097cfe) cell_gallery_pane_ParamLimits

0x462b,	// (0x00097cfe) cell_gallery_pane

0x467c,	// (0x00097d4f) bg_cell_gallery_focus_pane_ParamLimits

0x467c,	// (0x00097d4f) bg_cell_gallery_focus_pane

0x468e,	// (0x00097d61) cell_gallery_pane_g1_ParamLimits

0x468e,	// (0x00097d61) cell_gallery_pane_g1

0x469a,	// (0x00097d6d) cell_gallery_pane_g2_ParamLimits

0x469a,	// (0x00097d6d) cell_gallery_pane_g2

0x46a7,	// (0x00097d7a) cell_gallery_pane_g3_ParamLimits

0x46a7,	// (0x00097d7a) cell_gallery_pane_g3

0x46b4,	// (0x00097d87) cell_gallery_pane_g4_ParamLimits

0x46b4,	// (0x00097d87) cell_gallery_pane_g4

0x0003,

0xf6c9,	// (0x000a2d9c) cell_gallery_pane_g_ParamLimits

0xf6c9,	// (0x000a2d9c) cell_gallery_pane_g

0x46c0,	// (0x00097d93) bg_cell_gallery_focus_pane_g1

0x46c8,	// (0x00097d9b) bg_cell_gallery_focus_pane_g2

0x46d0,	// (0x00097da3) bg_cell_gallery_focus_pane_g3

0x46d8,	// (0x00097dab) bg_cell_gallery_focus_pane_g4

0x46e0,	// (0x00097db3) bg_cell_gallery_focus_pane_g5

0x46e8,	// (0x00097dbb) bg_cell_gallery_focus_pane_g6

0x46f0,	// (0x00097dc3) bg_cell_gallery_focus_pane_g7

0x46f8,	// (0x00097dcb) bg_cell_gallery_focus_pane_g8

0x0007,

0xf6d2,	// (0x000a2da5) bg_cell_gallery_focus_pane_g

0x4700,	// (0x00097dd3) aid_firma_cardinal

0x4714,	// (0x00097de7) blid_firmament_pane_t1

0x472b,	// (0x00097dfe) blid_firmament_pane_t2

0x4742,	// (0x00097e15) blid_firmament_pane_t3

0x4759,	// (0x00097e2c) blid_firmament_pane_t4

0x0003,

0xf6e3,	// (0x000a2db6) blid_firmament_pane_t

0x4770,	// (0x00097e43) blid_sat_info_pane

0x4780,	// (0x00097e53) blid_sat_info_pane_g1

0x4780,	// (0x00097e53) blid_sat_info_pane_g2

0x0001,

0xf6ec,	// (0x000a2dbf) blid_sat_info_pane_g

0x478a,	// (0x00097e5d) blid_sat_info_pane_t1

0x4798,	// (0x00097e6b) smil2_volume_content_pane

0x47a1,	// (0x00097e74) smil2_volume_pane_g1

0x47a9,	// (0x00097e7c) smil2_volume_content_pane_g1

0x47b2,	// (0x00097e85) smil2_volume_content_pane_g2

0x47bb,	// (0x00097e8e) smil2_volume_content_pane_g3

0x47c4,	// (0x00097e97) smil2_volume_content_pane_g4

0x47cd,	// (0x00097ea0) smil2_volume_content_pane_g5

0x47d6,	// (0x00097ea9) smil2_volume_content_pane_g6

0x47df,	// (0x00097eb2) smil2_volume_content_pane_g7

0x47e8,	// (0x00097ebb) smil2_volume_content_pane_g8

0x47f1,	// (0x00097ec4) smil2_volume_content_pane_g9

0x47fa,	// (0x00097ecd) smil2_volume_content_pane_g10

0x0009,

0xf6f1,	// (0x000a2dc4) smil2_volume_content_pane_g

0x1086,	// (0x00094759) cale_week_day_heading_pane_t1_ParamLimits

0x109a,	// (0x0009476d) cale_week_day_heading_pane_t2_ParamLimits

0x10ae,	// (0x00094781) cale_week_day_heading_pane_t3_ParamLimits

0x10c2,	// (0x00094795) cale_week_day_heading_pane_t4_ParamLimits

0x10d6,	// (0x000947a9) cale_week_day_heading_pane_t5_ParamLimits

0x10ea,	// (0x000947bd) cale_week_day_heading_pane_t6_ParamLimits

0x10fe,	// (0x000947d1) cale_week_day_heading_pane_t7_ParamLimits

0xf1dd,	// (0x000a28b0) cale_week_day_heading_pane_t_ParamLimits

0xebb3,	// (0x000a2286) bg_cale_side_pane_ParamLimits

0x1112,	// (0x000947e5) cale_week_time_pane_t1_ParamLimits

0x112a,	// (0x000947fd) cale_week_time_pane_t2_ParamLimits

0x1142,	// (0x00094815) cale_week_time_pane_t3_ParamLimits

0x115a,	// (0x0009482d) cale_week_time_pane_t4_ParamLimits

0x1172,	// (0x00094845) cale_week_time_pane_t5_ParamLimits

0x118a,	// (0x0009485d) cale_week_time_pane_t6_ParamLimits

0x11a2,	// (0x00094875) cale_week_time_pane_t7_ParamLimits

0x11be,	// (0x00094891) cale_week_time_pane_t8_ParamLimits

0xf1ec,	// (0x000a28bf) cale_week_time_pane_t_ParamLimits

0x11de,	// (0x000948b1) cell_cale_week_pane_g2_ParamLimits

0xebb3,	// (0x000a2286) bg_cale_side_pane_cp01_ParamLimits

0x2161,	// (0x00095834) cale_month_week_pane_t1_ParamLimits

0x2178,	// (0x0009584b) cale_month_week_pane_t2_ParamLimits

0x218f,	// (0x00095862) cale_month_week_pane_t3_ParamLimits

0x21a6,	// (0x00095879) cale_month_week_pane_t4_ParamLimits

0x21bd,	// (0x00095890) cale_month_week_pane_t5_ParamLimits

0x21d4,	// (0x000958a7) cale_month_week_pane_t6_ParamLimits

0xf2c5,	// (0x000a2998) cale_month_week_pane_t_ParamLimits

0xa1a0,	// (0x0009d873) cell_cale_month_pane_g1_ParamLimits

0xa0f0,	// (0x0009d7c3) main_cale_event_viewer_pane

0xe293,	// (0x000a1966) listscroll_cale_event_viewer_pane

0x4803,	// (0x00097ed6) list_cale_ev_pane

0x480b,	// (0x00097ede) scroll_pane_cp023

0x4817,	// (0x00097eea) field_cale_ev_pane_ParamLimits

0x4817,	// (0x00097eea) field_cale_ev_pane

0x483b,	// (0x00097f0e) field_cale_ev_content_pane_ParamLimits

0x483b,	// (0x00097f0e) field_cale_ev_content_pane

0x4847,	// (0x00097f1a) field_cale_ev_pane_g1_ParamLimits

0x4847,	// (0x00097f1a) field_cale_ev_pane_g1

0x4853,	// (0x00097f26) field_cale_ev_pane_g2_ParamLimits

0x4853,	// (0x00097f26) field_cale_ev_pane_g2

0x486b,	// (0x00097f3e) field_cale_ev_pane_g3_ParamLimits

0x486b,	// (0x00097f3e) field_cale_ev_pane_g3

0x0002,

0xf706,	// (0x000a2dd9) field_cale_ev_pane_g_ParamLimits

0xf706,	// (0x000a2dd9) field_cale_ev_pane_g

0x4883,	// (0x00097f56) field_cale_ev_pane_t1_ParamLimits

0x4883,	// (0x00097f56) field_cale_ev_pane_t1

0x489a,	// (0x00097f6d) field_cale_ev_content_pane_t1_ParamLimits

0x489a,	// (0x00097f6d) field_cale_ev_content_pane_t1

0xcddd,	// (0x000a04b0) bg_button_pane_cp01

0xea13,	// (0x000a20e6) listscroll_cale_week_pane_ParamLimits

0x0e70,	// (0x00094543) popup_toolbar_window_cp01

0xeba1,	// (0x000a2274) listscroll_cale_week_pane_t1_ParamLimits

0xea13,	// (0x000a20e6) listscroll_cale_day_pane_ParamLimits

0x2328,	// (0x000959fb) popup_toolbar_window_cp02

0xeba1,	// (0x000a2274) listscroll_cale_day_pane_t1_ParamLimits

0xea13,	// (0x000a20e6) main_cale_month_pane_ParamLimits

0x3aa4,	// (0x00097177) popup_toolbar_window_cp03_ParamLimits

0x3aa4,	// (0x00097177) popup_toolbar_window_cp03

0x30c7,	// (0x0009679a) main_image_pane_g2_ParamLimits

0x30c7,	// (0x0009679a) main_image_pane_g2

0x30d8,	// (0x000967ab) main_image_pane_g3_ParamLimits

0x30d8,	// (0x000967ab) main_image_pane_g3

0x0002,

0xf4f7,	// (0x000a2bca) main_image_pane_g_ParamLimits

0xf4f7,	// (0x000a2bca) main_image_pane_g

0xcef7,	// (0x000a05ca) main_image_pane_t1_ParamLimits

0x30e9,	// (0x000967bc) main_image_pane_t2_ParamLimits

0x30e9,	// (0x000967bc) main_image_pane_t2

0x30fb,	// (0x000967ce) main_image_pane_t3_ParamLimits

0x30fb,	// (0x000967ce) main_image_pane_t3

0x3123,	// (0x000967f6) main_image_pane_t4_ParamLimits

0x3123,	// (0x000967f6) main_image_pane_t4

0x0003,

0xf4fe,	// (0x000a2bd1) main_image_pane_t_ParamLimits

0xf4fe,	// (0x000a2bd1) main_image_pane_t

0x3143,	// (0x00096816) popup_image_details_window_cp01

0x314d,	// (0x00096820) popup_toobar_trans_pane_cp01_ParamLimits

0x314d,	// (0x00096820) popup_toobar_trans_pane_cp01

0x3917,	// (0x00096fea) popup_image_details_window_ParamLimits

0x3917,	// (0x00096fea) popup_image_details_window

0xa593,	// (0x0009dc66) popup_image_focus_window

0x3d5a,	// (0x0009742d) camera2_autofocus_pane_ParamLimits

0x3d5a,	// (0x0009742d) camera2_autofocus_pane

0xe293,	// (0x000a1966) bg_popup_sub_pane_cp06

0x48bb,	// (0x00097f8e) popup_image_focus_window_g1

0x48c3,	// (0x00097f96) popup_image_focus_window_g2

0x48cb,	// (0x00097f9e) popup_image_focus_window_g3

0x48d3,	// (0x00097fa6) popup_image_focus_window_g4

0x0003,

0xf70d,	// (0x000a2de0) popup_image_focus_window_g

0x48db,	// (0x00097fae) popup_image_focus_window_t1

0x48e9,	// (0x00097fbc) popup_image_focus_window_t2

0x48f9,	// (0x00097fcc) popup_image_focus_window_t3

0x0002,

0xf716,	// (0x000a2de9) popup_image_focus_window_t

0x4907,	// (0x00097fda) camera2_autofocus_pane_g1

0xea5b,	// (0x000a212e) bg_tb_trans_pane_cp01

0x4945,	// (0x00098018) popup_image_details_window_g1

0x4958,	// (0x0009802b) popup_image_details_window_g2

0x0002,

0xf728,	// (0x000a2dfb) popup_image_details_window_g

0x4981,	// (0x00098054) popup_image_details_window_t1

0x4993,	// (0x00098066) popup_image_details_window_t2

0x49ac,	// (0x0009807f) popup_image_details_window_t3

0x49c0,	// (0x00098093) popup_image_details_window_t4

0x49db,	// (0x000980ae) popup_image_details_window_t5

0x0004,

0xf72f,	// (0x000a2e02) popup_image_details_window_t

0xe9ff,	// (0x000a20d2) bg_calc_paper_pane_ParamLimits

0xa0f0,	// (0x0009d7c3) grid_highlight_pane_cp013

0xa102,	// (0x0009d7d5) list_calc_pane_ParamLimits

0xa114,	// (0x0009d7e7) scroll_pane_cp024

0xea13,	// (0x000a20e6) bg_calc_display_pane_ParamLimits

0x0ca5,	// (0x00094378) calc_display_pane_t1_ParamLimits

0x0cb7,	// (0x0009438a) calc_display_pane_t2_ParamLimits

0xa11c,	// (0x0009d7ef) calc_display_pane_t3_ParamLimits

0xf15f,	// (0x000a2832) calc_display_pane_t_ParamLimits

0x0d7f,	// (0x00094452) cell_calc_pane_g2

0x0001,

0xf17c,	// (0x000a284f) cell_calc_pane_g

0x0d88,	// (0x0009445b) cell_calc_pane_t1

0xeac0,	// (0x000a2193) grid_highlight_pane_cp02_ParamLimits

0xead6,	// (0x000a21a9) toolbar_button_pane_cp01_ParamLimits

0xead6,	// (0x000a21a9) toolbar_button_pane_cp01

0xcf3c,	// (0x000a060f) temp_image_control_pane_ParamLimits

0xcf3c,	// (0x000a060f) temp_image_control_pane

0xa0e2,	// (0x0009d7b5) main_mp3_pane

0x49f5,	// (0x000980c8) temp_image_control_pane_g1_ParamLimits

0x49f5,	// (0x000980c8) temp_image_control_pane_g1

0x4a03,	// (0x000980d6) temp_image_control_pane_g2_ParamLimits

0x4a03,	// (0x000980d6) temp_image_control_pane_g2

0x4a15,	// (0x000980e8) temp_image_control_pane_g3_ParamLimits

0x4a15,	// (0x000980e8) temp_image_control_pane_g3

0x4a25,	// (0x000980f8) temp_image_control_pane_g4_ParamLimits

0x4a25,	// (0x000980f8) temp_image_control_pane_g4

0x0003,

0xf73a,	// (0x000a2e0d) temp_image_control_pane_g_ParamLimits

0xf73a,	// (0x000a2e0d) temp_image_control_pane_g

0x49f5,	// (0x000980c8) main_mp3_pane_g1

0x4a38,	// (0x0009810b) main_mp3_pane_g2

0x0007,

0xf743,	// (0x000a2e16) main_mp3_pane_g

0x4a91,	// (0x00098164) main_mp3_pane_t1

0xec18,	// (0x000a22eb) main_camera_pane_g8_ParamLimits

0xec18,	// (0x000a22eb) main_camera_pane_g8

0x150d,	// (0x00094be0) main_video_pane_g7_ParamLimits

0x150d,	// (0x00094be0) main_video_pane_g7

0xa5fd,	// (0x0009dcd0) main_camera2_pane_t7_ParamLimits

0xa5fd,	// (0x0009dcd0) main_camera2_pane_t7

0xee22,	// (0x000a24f5) scroll_pane_cp025_ParamLimits

0xee22,	// (0x000a24f5) scroll_pane_cp025

0xee36,	// (0x000a2509) scroll_pane_cp026_ParamLimits

0xee36,	// (0x000a2509) scroll_pane_cp026

0xee45,	// (0x000a2518) wml_content_pane_ParamLimits

0xa0f0,	// (0x0009d7c3) main_touch_calib_pane

0x4b6f,	// (0x00098242) main_touch_calib_pane_g1

0x4b81,	// (0x00098254) main_touch_calib_pane_g2

0x4b93,	// (0x00098266) main_touch_calib_pane_g3

0x4ba5,	// (0x00098278) main_touch_calib_pane_g4

0x0003,

0xf761,	// (0x000a2e34) main_touch_calib_pane_g

0x4bb7,	// (0x0009828a) main_touch_calib_pane_t1

0x4bd1,	// (0x000982a4) main_touch_calib_pane_t2

0x0004,

0xf76a,	// (0x000a2e3d) main_touch_calib_pane_t

0xcba5,	// (0x000a0278) mup_progress_pane_cp02

0xcbc4,	// (0x000a0297) navi_pane_g1

0xcc26,	// (0x000a02f9) navi_pane_mp_t3

0xa0e2,	// (0x0009d7b5) main_mp3_pane_ParamLimits

0x3ae6,	// (0x000971b9) navi_pane_ParamLimits

0x49f5,	// (0x000980c8) main_mp3_pane_g1_ParamLimits

0x4a38,	// (0x0009810b) main_mp3_pane_g2_ParamLimits

0x4a44,	// (0x00098117) main_mp3_pane_g3_ParamLimits

0x4a44,	// (0x00098117) main_mp3_pane_g3

0x4a52,	// (0x00098125) main_mp3_pane_g4_ParamLimits

0x4a52,	// (0x00098125) main_mp3_pane_g4

0x4a5e,	// (0x00098131) main_mp3_pane_g5_ParamLimits

0x4a5e,	// (0x00098131) main_mp3_pane_g5

0x4a6c,	// (0x0009813f) main_mp3_pane_g6_ParamLimits

0x4a6c,	// (0x0009813f) main_mp3_pane_g6

0x4a79,	// (0x0009814c) main_mp3_pane_g7_ParamLimits

0x4a79,	// (0x0009814c) main_mp3_pane_g7

0x4a85,	// (0x00098158) main_mp3_pane_g8_ParamLimits

0x4a85,	// (0x00098158) main_mp3_pane_g8

0xf743,	// (0x000a2e16) main_mp3_pane_g_ParamLimits

0x4a9f,	// (0x00098172) main_mp3_pane_t2

0x4aad,	// (0x00098180) main_mp3_pane_t3

0x4abb,	// (0x0009818e) main_mp3_pane_t4

0x4ac9,	// (0x0009819c) main_mp3_pane_t5

0x0005,

0xf754,	// (0x000a2e27) main_mp3_pane_t

0x4ae5,	// (0x000981b8) mup_progress_pane_cp01

0xa097,	// (0x0009d76a) aid_zoom_text_secondary2

0x4803,	// (0x00097ed6) list_cale_ev2_pane

0x480b,	// (0x00097ede) scroll_pane_cp023_ParamLimits

0x4c2b,	// (0x000982fe) field_cale_ev2_pane_ParamLimits

0x4c2b,	// (0x000982fe) field_cale_ev2_pane

0x4c4f,	// (0x00098322) field_cale_ev2_pane_g1_ParamLimits

0x4c4f,	// (0x00098322) field_cale_ev2_pane_g1

0x4c5b,	// (0x0009832e) field_cale_ev2_pane_g2_ParamLimits

0x4c5b,	// (0x0009832e) field_cale_ev2_pane_g2

0x4c73,	// (0x00098346) field_cale_ev2_pane_g3_ParamLimits

0x4c73,	// (0x00098346) field_cale_ev2_pane_g3

0x0003,

0xf775,	// (0x000a2e48) field_cale_ev2_pane_g_ParamLimits

0xf775,	// (0x000a2e48) field_cale_ev2_pane_g

0x4c97,	// (0x0009836a) field_cale_ev2_pane_t1_ParamLimits

0x4c97,	// (0x0009836a) field_cale_ev2_pane_t1

0x4cae,	// (0x00098381) field_cale_ev2_pane_t2_ParamLimits

0x4cae,	// (0x00098381) field_cale_ev2_pane_t2

0x0001,

0xf77e,	// (0x000a2e51) field_cale_ev2_pane_t_ParamLimits

0xf77e,	// (0x000a2e51) field_cale_ev2_pane_t

0x2f62,	// (0x00096635) main_postcard_pane_g5_ParamLimits

0x2f62,	// (0x00096635) main_postcard_pane_g5

0x2f78,	// (0x0009664b) main_postcard_pane_g6_ParamLimits

0x2f78,	// (0x0009664b) main_postcard_pane_g6

0x12b9,	// (0x0009498c) camera2_autofocus_pane_cp_ParamLimits

0x12b9,	// (0x0009498c) camera2_autofocus_pane_cp

0xa0e2,	// (0x0009d7b5) main_mup3_pane

0x4ce3,	// (0x000983b6) main_mup3_pane_g1_ParamLimits

0x4ce3,	// (0x000983b6) main_mup3_pane_g1

0x4d05,	// (0x000983d8) main_mup3_pane_g2_ParamLimits

0x4d05,	// (0x000983d8) main_mup3_pane_g2

0x4d88,	// (0x0009845b) main_mup3_pane_g3_ParamLimits

0x4d88,	// (0x0009845b) main_mup3_pane_g3

0x4dd4,	// (0x000984a7) main_mup3_pane_g4_ParamLimits

0x4dd4,	// (0x000984a7) main_mup3_pane_g4

0x4e20,	// (0x000984f3) main_mup3_pane_g5_ParamLimits

0x4e20,	// (0x000984f3) main_mup3_pane_g5

0x4e6c,	// (0x0009853f) main_mup3_pane_g6_ParamLimits

0x4e6c,	// (0x0009853f) main_mup3_pane_g6

0x4e7f,	// (0x00098552) main_mup3_pane_g7_ParamLimits

0x4e7f,	// (0x00098552) main_mup3_pane_g7

0x0007,

0xf78e,	// (0x000a2e61) main_mup3_pane_g_ParamLimits

0xf78e,	// (0x000a2e61) main_mup3_pane_g

0x4efe,	// (0x000985d1) main_mup3_pane_t1_ParamLimits

0x4efe,	// (0x000985d1) main_mup3_pane_t1

0x4f76,	// (0x00098649) main_mup3_pane_t2_ParamLimits

0x4f76,	// (0x00098649) main_mup3_pane_t2

0x504c,	// (0x0009871f) main_mup3_pane_t4_ParamLimits

0x504c,	// (0x0009871f) main_mup3_pane_t4

0x50aa,	// (0x0009877d) main_mup3_pane_t5_ParamLimits

0x50aa,	// (0x0009877d) main_mup3_pane_t5

0x516e,	// (0x00098841) main_mup3_pane_t6_ParamLimits

0x516e,	// (0x00098841) main_mup3_pane_t6

0x0005,

0xf79f,	// (0x000a2e72) main_mup3_pane_t_ParamLimits

0xf79f,	// (0x000a2e72) main_mup3_pane_t

0x5228,	// (0x000988fb) mup3_progress_pane_ParamLimits

0x5228,	// (0x000988fb) mup3_progress_pane

0x52c4,	// (0x00098997) popup_mup3_control_window_ParamLimits

0x52c4,	// (0x00098997) popup_mup3_control_window

0x52e4,	// (0x000989b7) popup_mup3_text_window

0x5302,	// (0x000989d5) mup3_progress_pane_t1

0x5320,	// (0x000989f3) mup3_progress_pane_t2

0x533e,	// (0x00098a11) mup3_progress_pane_t3

0x0002,

0xf7ac,	// (0x000a2e7f) mup3_progress_pane_t

0x535b,	// (0x00098a2e) mup_progress_pane_cp03

0xe293,	// (0x000a1966) bg_tb_trans_pane_cp04

0x536b,	// (0x00098a3e) mup3_volume_pane

0x5373,	// (0x00098a46) popup_mup3_control_window_g1

0x537c,	// (0x00098a4f) mup3_volume_pane_g1

0x5385,	// (0x00098a58) mup3_volume_pane_g2

0x538e,	// (0x00098a61) mup3_volume_pane_g3

0x0002,

0xf7b3,	// (0x000a2e86) mup3_volume_pane_g

0xe293,	// (0x000a1966) bg_tb_trans_pane_cp03

0x5397,	// (0x00098a6a) popup_mup3_text_window_g1

0x539f,	// (0x00098a72) popup_mup3_text_window_t1

0xeaa9,	// (0x000a217c) list_calc_item_pane_g1_ParamLimits

0xe28a,	// (0x000a195d) mup_volume_pane_cp_g1

0x4beb,	// (0x000982be) main_touch_calib_pane_t3

0x4bff,	// (0x000982d2) main_touch_calib_pane_t4

0x4c15,	// (0x000982e8) main_touch_calib_pane_t5

0xa073,	// (0x0009d746) aid_cell_size_toolbar2

0xa07b,	// (0x0009d74e) aid_popup3_width_pane

0xa087,	// (0x0009d75a) aid_zoom_text_msg_primary

0x128e,	// (0x00094961) vorec_t7

0xea1f,	// (0x000a20f2) bg_calc_paper_pane_g1_ParamLimits

0xea2b,	// (0x000a20fe) bg_calc_paper_pane_g2_ParamLimits

0xea37,	// (0x000a210a) bg_calc_paper_pane_g3_ParamLimits

0xea43,	// (0x000a2116) bg_calc_paper_pane_g4_ParamLimits

0xea4f,	// (0x000a2122) bg_calc_paper_pane_g5_ParamLimits

0x0d08,	// (0x000943db) bg_calc_paper_pane_g6_ParamLimits

0x0d1b,	// (0x000943ee) bg_calc_paper_pane_g7_ParamLimits

0x0d2e,	// (0x00094401) bg_calc_paper_pane_g8_ParamLimits

0xf166,	// (0x000a2839) bg_calc_paper_pane_g_ParamLimits

0x0d3f,	// (0x00094412) calc_bg_paper_pane_g9_ParamLimits

0x141b,	// (0x00094aee) image_qvga_pane_ParamLimits

0x141b,	// (0x00094aee) image_qvga_pane

0xe940,	// (0x000a2013) bg_popup_sub_pane_cp04_ParamLimits

0xce73,	// (0x000a0546) popup_mup_playback_window_g1_ParamLimits

0xce7f,	// (0x000a0552) popup_mup_playback_window_t1_ParamLimits

0xce94,	// (0x000a0567) popup_mup_playback_window_t2_ParamLimits

0xf4f2,	// (0x000a2bc5) popup_mup_playback_window_t_ParamLimits

0x41de,	// (0x000978b1) main_mup2_pane_g3_ParamLimits

0x41de,	// (0x000978b1) main_mup2_pane_g3

0x1765,	// (0x00094e38) popup_toolbar_window_cp04

0xd317,	// (0x000a09ea) popup_call2_audio_second_window_g3_ParamLimits

0xd317,	// (0x000a09ea) popup_call2_audio_second_window_g3

0xd721,	// (0x000a0df4) popup_call2_audio_first_window_g4_ParamLimits

0xd721,	// (0x000a0df4) popup_call2_audio_first_window_g4

0xdda0,	// (0x000a1473) popup_call2_audio_in_window_g4_ParamLimits

0xdda0,	// (0x000a1473) popup_call2_audio_in_window_g4

0x30a9,	// (0x0009677c) aid_area_sk_bg_cut_ParamLimits

0x30a9,	// (0x0009677c) aid_area_sk_bg_cut

0xcea9,	// (0x000a057c) aid_area_sk_bg_cut_2_ParamLimits

0xcea9,	// (0x000a057c) aid_area_sk_bg_cut_2

0x466c,	// (0x00097d3f) aid_placing_details_win

0x4674,	// (0x00097d47) aid_placing_details_win_2

0x4907,	// (0x00097fda) camera2_autofocus_pane_g1_ParamLimits

0x0923,	// (0x00093ff6) popup_fixed_preview_cale_window_ParamLimits

0x0923,	// (0x00093ff6) popup_fixed_preview_cale_window

0xcc75,	// (0x000a0348) navi_slider_pane_g3

0xcc7e,	// (0x000a0351) navi_slider_pane_g4

0xcc87,	// (0x000a035a) navi_slider_pane_g5

0xcc75,	// (0x000a0348) navi_slider_pane_g6

0xa534,	// (0x0009dc07) navi_slider_pane_g7

0xcdaa,	// (0x000a047d) mup_scale_pane_g3

0xcdb3,	// (0x000a0486) mup_scale_pane_g4

0xcdbc,	// (0x000a048f) mup_scale_pane_g5

0x2d2c,	// (0x000963ff) mup_scale_pane_g6

0x2d35,	// (0x00096408) mup_scale_pane_g7

0xcc75,	// (0x000a0348) cams2_slider_pane_g3

0x4479,	// (0x00097b4c) cams2_slider_pane_g4

0xa66b,	// (0x0009dd3e) cams2_slider_pane_g5

0xcc75,	// (0x000a0348) cams2_slider_pane_g6

0xa673,	// (0x0009dd46) cams2_slider_pane_g7

0x4780,	// (0x00097e53) camera2_autofocus_pane_cp_g1

0x53ad,	// (0x00098a80) bg_popup_preview_window_pane_cp02_ParamLimits

0x53ad,	// (0x00098a80) bg_popup_preview_window_pane_cp02

0x53b9,	// (0x00098a8c) list_fp_cale_pane_ParamLimits

0x53b9,	// (0x00098a8c) list_fp_cale_pane

0x53c5,	// (0x00098a98) popup_fixed_preview_cale_window_t1_ParamLimits

0x53c5,	// (0x00098a98) popup_fixed_preview_cale_window_t1

0x53d7,	// (0x00098aaa) popup_fixed_preview_cale_window_t2_ParamLimits

0x53d7,	// (0x00098aaa) popup_fixed_preview_cale_window_t2

0x53ec,	// (0x00098abf) popup_fixed_preview_cale_window_t3_ParamLimits

0x53ec,	// (0x00098abf) popup_fixed_preview_cale_window_t3

0x0002,

0xf7ba,	// (0x000a2e8d) popup_fixed_preview_cale_window_t_ParamLimits

0xf7ba,	// (0x000a2e8d) popup_fixed_preview_cale_window_t

0x540f,	// (0x00098ae2) list_single_fp_cale_pane_ParamLimits

0x540f,	// (0x00098ae2) list_single_fp_cale_pane

0x5427,	// (0x00098afa) list_single_fp_cale_pane_g1_ParamLimits

0x5427,	// (0x00098afa) list_single_fp_cale_pane_g1

0x5433,	// (0x00098b06) list_single_fp_cale_pane_g2_ParamLimits

0x5433,	// (0x00098b06) list_single_fp_cale_pane_g2

0x0002,

0xf7c1,	// (0x000a2e94) list_single_fp_cale_pane_g_ParamLimits

0xf7c1,	// (0x000a2e94) list_single_fp_cale_pane_g

0x544c,	// (0x00098b1f) list_single_fp_cale_pane_t1_ParamLimits

0x544c,	// (0x00098b1f) list_single_fp_cale_pane_t1

0x545e,	// (0x00098b31) list_single_fp_cale_pane_t2_ParamLimits

0x545e,	// (0x00098b31) list_single_fp_cale_pane_t2

0x0001,

0xf7c8,	// (0x000a2e9b) list_single_fp_cale_pane_t_ParamLimits

0xf7c8,	// (0x000a2e9b) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0xa0f0,	// (0x0009d7c3) main_dialer_pane

0x5491,	// (0x00098b64) aid_cell_size_keypad

0x549b,	// (0x00098b6e) dialer_ne_pane

0x54a5,	// (0x00098b78) grid_dialer_command_1_pane

0x54ad,	// (0x00098b80) grid_dialer_command_2_pane

0x54b5,	// (0x00098b88) grid_dialer_keypad_pane

0x54c9,	// (0x00098b9c) bg_popup_call_pane_cp06_ParamLimits

0x54c9,	// (0x00098b9c) bg_popup_call_pane_cp06

0x54d5,	// (0x00098ba8) dialer_ne_clear_pane_ParamLimits

0x54d5,	// (0x00098ba8) dialer_ne_clear_pane

0x54e1,	// (0x00098bb4) dialer_ne_pane_g1

0x54e9,	// (0x00098bbc) dialer_ne_pane_t1_ParamLimits

0x54e9,	// (0x00098bbc) dialer_ne_pane_t1

0x54fb,	// (0x00098bce) dialer_ne_pane_t2_ParamLimits

0x54fb,	// (0x00098bce) dialer_ne_pane_t2

0x5525,	// (0x00098bf8) dialer_ne_pane_t3_ParamLimits

0x5525,	// (0x00098bf8) dialer_ne_pane_t3

0x0002,

0xf7cd,	// (0x000a2ea0) dialer_ne_pane_t_ParamLimits

0xf7cd,	// (0x000a2ea0) dialer_ne_pane_t

0x5555,	// (0x00098c28) dialer_ne_pane_t3_copy1_ParamLimits

0x5555,	// (0x00098c28) dialer_ne_pane_t3_copy1

0x5584,	// (0x00098c57) cell_dialer_keypad_pane_ParamLimits

0x5584,	// (0x00098c57) cell_dialer_keypad_pane

0x559b,	// (0x00098c6e) cell_dialer_command_1_pane_ParamLimits

0x559b,	// (0x00098c6e) cell_dialer_command_1_pane

0x55b1,	// (0x00098c84) cell_dialer_command_2_pane_ParamLimits

0x55b1,	// (0x00098c84) cell_dialer_command_2_pane

0x55c0,	// (0x00098c93) bg_button_pane_cp02_ParamLimits

0x55c0,	// (0x00098c93) bg_button_pane_cp02

0x55cc,	// (0x00098c9f) cell_dialer_keypad_pane_g1_ParamLimits

0x55cc,	// (0x00098c9f) cell_dialer_keypad_pane_g1

0x55c0,	// (0x00098c93) bg_button_pane_cp03_ParamLimits

0x55c0,	// (0x00098c93) bg_button_pane_cp03

0x55e1,	// (0x00098cb4) cell_dialer_command_1_pane_g1_ParamLimits

0x55e1,	// (0x00098cb4) cell_dialer_command_1_pane_g1

0x55f5,	// (0x00098cc8) bg_button_pane_cp04

0x55fd,	// (0x00098cd0) cell_dialer_command_2_pane_g1

0xcc64,	// (0x000a0337) bg_button_pane_cp06

0x5605,	// (0x00098cd8) dialer_ne_clear_pane_g1

0x2810,	// (0x00095ee3) navi_pane_g2

0x283e,	// (0x00095f11) navi_pane_g3

0x0002,

0xf3f5,	// (0x000a2ac8) navi_pane_g

0x2869,	// (0x00095f3c) navi_pane_mv_g2

0x2890,	// (0x00095f63) navi_pane_mv_g5

0x2898,	// (0x00095f6b) navi_pane_mv_t1

0xea13,	// (0x000a20e6) main_clock2_pane

0x563e,	// (0x00098d11) main_clock2_list_pane_ParamLimits

0x563e,	// (0x00098d11) main_clock2_list_pane

0x5678,	// (0x00098d4b) main_clock2_pane_t1_ParamLimits

0x5678,	// (0x00098d4b) main_clock2_pane_t1

0x56b4,	// (0x00098d87) main_clock2_pane_t2_ParamLimits

0x56b4,	// (0x00098d87) main_clock2_pane_t2

0x0004,

0xf7d4,	// (0x000a2ea7) main_clock2_pane_t_ParamLimits

0xf7d4,	// (0x000a2ea7) main_clock2_pane_t

0x5753,	// (0x00098e26) popup_clock_analogue_window_cp03_ParamLimits

0x5753,	// (0x00098e26) popup_clock_analogue_window_cp03

0x577a,	// (0x00098e4d) popup_clock_digital_window_cp02_ParamLimits

0x577a,	// (0x00098e4d) popup_clock_digital_window_cp02

0x57f5,	// (0x00098ec8) main_clock2_list_single_pane_ParamLimits

0x57f5,	// (0x00098ec8) main_clock2_list_single_pane

0xcc64,	// (0x000a0337) list_highlight_pane_cp05

0x5807,	// (0x00098eda) main_clock2_list_single_pane_t1

0x1765,	// (0x00094e38) popup_toolbar_window_cp04_ParamLimits

0x4915,	// (0x00097fe8) camera2_autofocus_pane_g2_ParamLimits

0x4915,	// (0x00097fe8) camera2_autofocus_pane_g2

0x4921,	// (0x00097ff4) camera2_autofocus_pane_g3_ParamLimits

0x4921,	// (0x00097ff4) camera2_autofocus_pane_g3

0x492d,	// (0x00098000) camera2_autofocus_pane_g4_ParamLimits

0x492d,	// (0x00098000) camera2_autofocus_pane_g4

0x4939,	// (0x0009800c) camera2_autofocus_pane_g5_ParamLimits

0x4939,	// (0x0009800c) camera2_autofocus_pane_g5

0x0004,

0xf71d,	// (0x000a2df0) camera2_autofocus_pane_g_ParamLimits

0xf71d,	// (0x000a2df0) camera2_autofocus_pane_g

0x4cc3,	// (0x00098396) camera2_autofocus_pane_cp_g2

0x4ccb,	// (0x0009839e) camera2_autofocus_pane_cp_g3

0x4cd3,	// (0x000983a6) camera2_autofocus_pane_cp_g4

0x4cdb,	// (0x000983ae) camera2_autofocus_pane_cp_g5

0x0004,

0xf783,	// (0x000a2e56) camera2_autofocus_pane_cp_g

0x54c1,	// (0x00098b94) popup_dialer_spcha_window

0xe293,	// (0x000a1966) bg_popup_sub_pane_cp07

0x58b9,	// (0x00098f8c) list_spcha_pane

0x58c1,	// (0x00098f94) list_single_spcha_pane_ParamLimits

0x58c1,	// (0x00098f94) list_single_spcha_pane

0xe293,	// (0x000a1966) list_highlight_pane_cp06

0x58d2,	// (0x00098fa5) list_single_spcha_pane_t1

0xdb4a,	// (0x000a121d) popup_call2_audio_out_window_g4_ParamLimits

0xdb4a,	// (0x000a121d) popup_call2_audio_out_window_g4

0xa0f0,	// (0x0009d7c3) main_imed2_pane

0xa59d,	// (0x0009dc70) popup_imed_adjust2_window

0x392f,	// (0x00097002) popup_imed_trans_window_ParamLimits

0x392f,	// (0x00097002) popup_imed_trans_window

0x44e2,	// (0x00097bb5) popup_blid_sat_info2_window_t1

0x44f0,	// (0x00097bc3) popup_blid_sat_info2_window_t2

0x000a,

0xf6b2,	// (0x000a2d85) popup_blid_sat_info2_window_t

0x58e0,	// (0x00098fb3) aid_size_cell_colour_35

0x5900,	// (0x00098fd3) aid_size_cell_colour_112

0x5920,	// (0x00098ff3) aid_size_cell_effect

0xe105,	// (0x000a17d8) bg_tb_trans_pane_cp02

0xa26a,	// (0x0009d93d) heading_imed_pane

0x5940,	// (0x00099013) listscroll_imed_pane

0x594c,	// (0x0009901f) heading_imed_pane_g1

0x5954,	// (0x00099027) heading_imed_pane_t1

0x5962,	// (0x00099035) grid_imed_colour_35_pane_ParamLimits

0x5962,	// (0x00099035) grid_imed_colour_35_pane

0x597e,	// (0x00099051) grid_imed_effect_pane

0x5995,	// (0x00099068) list_imed_aspect_pane

0x599d,	// (0x00099070) scroll_pane_cp027_ParamLimits

0x599d,	// (0x00099070) scroll_pane_cp027

0x59ae,	// (0x00099081) cell_imed_effect_pane_ParamLimits

0x59ae,	// (0x00099081) cell_imed_effect_pane

0x59d3,	// (0x000990a6) cell_imed_colour_pane_ParamLimits

0x59d3,	// (0x000990a6) cell_imed_colour_pane

0x5a1d,	// (0x000990f0) cell_imed_colour_pane_g1_ParamLimits

0x5a1d,	// (0x000990f0) cell_imed_colour_pane_g1

0x5a2e,	// (0x00099101) hgihlgiht_grid_pane_cp016_ParamLimits

0x5a2e,	// (0x00099101) hgihlgiht_grid_pane_cp016

0x5a3f,	// (0x00099112) cell_imed_effect_pane_g1

0x5a47,	// (0x0009911a) grid_highlight_pane_cp017

0x5a50,	// (0x00099123) list_imed_single_pane_ParamLimits

0x5a50,	// (0x00099123) list_imed_single_pane

0xe293,	// (0x000a1966) list_highlight_pane_cp07

0x5a64,	// (0x00099137) list_imed_aspect_pane_comp1_t1

0xe105,	// (0x000a17d8) bg_tb_trans_pane_cp05

0x5a86,	// (0x00099159) popup_imed_adjust2_window_g1

0x5aad,	// (0x00099180) popup_imed_adjust2_window_t1

0x5ac5,	// (0x00099198) slider_imed_adjust_pane

0x5ad9,	// (0x000991ac) slider_imed_adjust_pane_g1

0x5ae9,	// (0x000991bc) slider_imed_adjust_pane_g2

0x5af9,	// (0x000991cc) slider_imed_adjust_pane_g3

0x5b0a,	// (0x000991dd) slider_imed_adjust_pane_g4

0x0003,

0xf7f1,	// (0x000a2ec4) slider_imed_adjust_pane_g

0x5b1b,	// (0x000991ee) aid_size_cell_clipart2

0x5b27,	// (0x000991fa) grid_imed_clipart_pane

0x5b31,	// (0x00099204) scroll_pane_cp031

0x5b39,	// (0x0009920c) cell_imed_clipart_pane_ParamLimits

0x5b39,	// (0x0009920c) cell_imed_clipart_pane

0x5b56,	// (0x00099229) cell_imed_clipart_pane_g1

0xe293,	// (0x000a1966) grid_highlight_pane_cp014

0x5653,	// (0x00098d26) main_clock2_pane_g1_ParamLimits

0x5653,	// (0x00098d26) main_clock2_pane_g1

0x579c,	// (0x00098e6f) aid_call2_pane_cp10

0x57ae,	// (0x00098e81) aid_call_pane_cp10

0xcb99,	// (0x000a026c) popup_clock_analogue_window_cp10_g1

0xcb99,	// (0x000a026c) popup_clock_analogue_window_cp10_g2

0x57c0,	// (0x00098e93) popup_clock_analogue_window_cp10_g3

0x57c0,	// (0x00098e93) popup_clock_analogue_window_cp10_g4

0xcb99,	// (0x000a026c) popup_clock_analogue_window_cp10_g5

0x0004,

0xf7df,	// (0x000a2eb2) popup_clock_analogue_window_cp10_g

0x57d6,	// (0x00098ea9) popup_clock_analogue_window_cp10_t1

0x5815,	// (0x00098ee8) clock_digital_number_pane_cp10_ParamLimits

0x5815,	// (0x00098ee8) clock_digital_number_pane_cp10

0x582f,	// (0x00098f02) clock_digital_number_pane_cp11_ParamLimits

0x582f,	// (0x00098f02) clock_digital_number_pane_cp11

0x5849,	// (0x00098f1c) clock_digital_number_pane_cp12_ParamLimits

0x5849,	// (0x00098f1c) clock_digital_number_pane_cp12

0x5863,	// (0x00098f36) clock_digital_number_pane_cp13_ParamLimits

0x5863,	// (0x00098f36) clock_digital_number_pane_cp13

0x587d,	// (0x00098f50) clock_digital_separator_pane_cp10_ParamLimits

0x587d,	// (0x00098f50) clock_digital_separator_pane_cp10

0x5897,	// (0x00098f6a) popup_clock_digital_window_cp02_t1_ParamLimits

0x5897,	// (0x00098f6a) popup_clock_digital_window_cp02_t1

0xe938,	// (0x000a200b) clock_digital_number_pane_cp10_g1

0xe938,	// (0x000a200b) clock_digital_number_pane_cp10_g2

0x0001,

0xf7fa,	// (0x000a2ecd) clock_digital_number_pane_cp10_g

0xe938,	// (0x000a200b) clock_digital_separator_pane_cp10_g1

0xe938,	// (0x000a200b) clock_digital_separator_pane_g2_cp10

0xcc34,	// (0x000a0307) navi_pane_vded_g4

0xcc3d,	// (0x000a0310) navi_pane_vded_g5

0xcc46,	// (0x000a0319) navi_pane_vded_t1

0xa0f0,	// (0x0009d7c3) main_vded_pane

0x5b5f,	// (0x00099232) main_vded_pane_g1

0x5b6b,	// (0x0009923e) main_vded_pane_g2

0x5b77,	// (0x0009924a) main_vded_pane_g3

0x0002,

0xf7ff,	// (0x000a2ed2) main_vded_pane_g

0x5b83,	// (0x00099256) main_vded_pane_t1

0x5b91,	// (0x00099264) main_vded_pane_t2

0x0001,

0xf806,	// (0x000a2ed9) main_vded_pane_t

0x5b9f,	// (0x00099272) vded_slider_pane

0x5ba9,	// (0x0009927c) vded_video_pane

0x5bb5,	// (0x00099288) vded_video_pane_g1

0x5bbf,	// (0x00099292) vded_video_pane_g2

0x4780,	// (0x00097e53) vded_video_pane_g3

0x0002,

0xf80b,	// (0x000a2ede) vded_video_pane_g

0x5bc8,	// (0x0009929b) vded_slider_pane_g1

0xe28a,	// (0x000a195d) vded_slider_pane_g2

0x5bd1,	// (0x000992a4) vded_slider_pane_g3

0x5bda,	// (0x000992ad) vded_slider_pane_g4

0x5be3,	// (0x000992b6) vded_slider_pane_g5

0x0004,

0xf812,	// (0x000a2ee5) vded_slider_pane_g

0x52ae,	// (0x00098981) mup3_rocker_pane_ParamLimits

0x52ae,	// (0x00098981) mup3_rocker_pane

0x5bec,	// (0x000992bf) mup3_control_keys_pane_g1

0x5bf4,	// (0x000992c7) mup3_control_keys_pane_g2

0x5bfc,	// (0x000992cf) mup3_control_keys_pane_g3

0x5c04,	// (0x000992d7) mup3_control_keys_pane_g4

0x0003,

0xf81d,	// (0x000a2ef0) mup3_control_keys_pane_g

0x095a,	// (0x0009402d) popup_toolbar2_fixed_window_cp01_ParamLimits

0x095a,	// (0x0009402d) popup_toolbar2_fixed_window_cp01

0x52ec,	// (0x000989bf) popup_toolbar2_fixed_window_cp02_ParamLimits

0x52ec,	// (0x000989bf) popup_toolbar2_fixed_window_cp02

0xd489,	// (0x000a0b5c) popup_call2_audio_second_window_t4_ParamLimits

0xd489,	// (0x000a0b5c) popup_call2_audio_second_window_t4

0xd9b7,	// (0x000a108a) popup_call2_audio_first_window_t6_ParamLimits

0xd9b7,	// (0x000a108a) popup_call2_audio_first_window_t6

0xdc4d,	// (0x000a1320) popup_call2_audio_out_window_t6_ParamLimits

0xdc4d,	// (0x000a1320) popup_call2_audio_out_window_t6

0xa0f0,	// (0x0009d7c3) main_vitu_pane

0x5c14,	// (0x000992e7) aid_size_cell_itu_ParamLimits

0x5c14,	// (0x000992e7) aid_size_cell_itu

0xea5b,	// (0x000a212e) bg_popup_window_pane_cp08_ParamLimits

0xea5b,	// (0x000a212e) bg_popup_window_pane_cp08

0x5c2a,	// (0x000992fd) field_vitu_entry_pane_ParamLimits

0x5c2a,	// (0x000992fd) field_vitu_entry_pane

0x5c41,	// (0x00099314) grid_vitu_function_pane_ParamLimits

0x5c41,	// (0x00099314) grid_vitu_function_pane

0x5c5c,	// (0x0009932f) grid_vitu_itu_pane_ParamLimits

0x5c5c,	// (0x0009932f) grid_vitu_itu_pane

0x5c78,	// (0x0009934b) cell_vitu_itu_pane_ParamLimits

0x5c78,	// (0x0009934b) cell_vitu_itu_pane

0x5c9e,	// (0x00099371) cell_vitu_function_pane_ParamLimits

0x5c9e,	// (0x00099371) cell_vitu_function_pane

0xea5b,	// (0x000a212e) bg_popup_sub_pane_cp08_ParamLimits

0xea5b,	// (0x000a212e) bg_popup_sub_pane_cp08

0x5cd1,	// (0x000993a4) field_vitu_entry_pane_t1_ParamLimits

0x5cd1,	// (0x000993a4) field_vitu_entry_pane_t1

0x5cf1,	// (0x000993c4) field_vitu_entry_pane_t2_ParamLimits

0x5cf1,	// (0x000993c4) field_vitu_entry_pane_t2

0x0001,

0xf82b,	// (0x000a2efe) field_vitu_entry_pane_t_ParamLimits

0xf82b,	// (0x000a2efe) field_vitu_entry_pane_t

0x5d0e,	// (0x000993e1) bg_button_pane_cp05_ParamLimits

0x5d0e,	// (0x000993e1) bg_button_pane_cp05

0x5d1c,	// (0x000993ef) cell_vitu_itu_pane_g1

0x5d34,	// (0x00099407) cell_vitu_itu_pane_t1_ParamLimits

0x5d34,	// (0x00099407) cell_vitu_itu_pane_t1

0x5d46,	// (0x00099419) cell_vitu_itu_pane_t2_ParamLimits

0x5d46,	// (0x00099419) cell_vitu_itu_pane_t2

0x0002,

0xf830,	// (0x000a2f03) cell_vitu_itu_pane_t_ParamLimits

0xf830,	// (0x000a2f03) cell_vitu_itu_pane_t

0x5d7b,	// (0x0009944e) bg_button_pane_cp07

0x5d85,	// (0x00099458) cell_vitu_function_pane_g1

0xa0fa,	// (0x0009d7cd) main_calc_pane_g1

0x0795,	// (0x00093e68) aid_visual_content_pane

0xa0f0,	// (0x0009d7c3) main_vradio_pane

0x5d8e,	// (0x00099461) main_vradio_pane_g1_ParamLimits

0x5d8e,	// (0x00099461) main_vradio_pane_g1

0x5da5,	// (0x00099478) main_vradio_pane_g2_ParamLimits

0x5da5,	// (0x00099478) main_vradio_pane_g2

0x0001,

0xf837,	// (0x000a2f0a) main_vradio_pane_g_ParamLimits

0xf837,	// (0x000a2f0a) main_vradio_pane_g

0x5db2,	// (0x00099485) main_vradio_pane_t1_ParamLimits

0x5db2,	// (0x00099485) main_vradio_pane_t1

0x5dc7,	// (0x0009949a) main_vradio_pane_t2_ParamLimits

0x5dc7,	// (0x0009949a) main_vradio_pane_t2

0x5ddc,	// (0x000994af) main_vradio_pane_t3_ParamLimits

0x5ddc,	// (0x000994af) main_vradio_pane_t3

0x0002,

0xf83c,	// (0x000a2f0f) main_vradio_pane_t_ParamLimits

0xf83c,	// (0x000a2f0f) main_vradio_pane_t

0x5df0,	// (0x000994c3) vradio_rocker_control_pane_ParamLimits

0x5df0,	// (0x000994c3) vradio_rocker_control_pane

0x5e02,	// (0x000994d5) vradio_station_info_pane_ParamLimits

0x5e02,	// (0x000994d5) vradio_station_info_pane

0x5e12,	// (0x000994e5) vradio_frequency_info_pane_ParamLimits

0x5e12,	// (0x000994e5) vradio_frequency_info_pane

0x4780,	// (0x00097e53) vradio_station_info_pane_g1

0x5e21,	// (0x000994f4) vradio_station_info_pane_t1_ParamLimits

0x5e21,	// (0x000994f4) vradio_station_info_pane_t1

0x5e43,	// (0x00099516) vradio_station_info_pane_t2_ParamLimits

0x5e43,	// (0x00099516) vradio_station_info_pane_t2

0x0001,

0xf843,	// (0x000a2f16) vradio_station_info_pane_t_ParamLimits

0xf843,	// (0x000a2f16) vradio_station_info_pane_t

0x5e55,	// (0x00099528) vradio_tuning_pane

0x5e5d,	// (0x00099530) vradio_rocker_control_pane_g1

0x5e65,	// (0x00099538) vradio_rocker_control_pane_g2

0x5e6d,	// (0x00099540) vradio_rocker_control_pane_g3

0x5e75,	// (0x00099548) vradio_rocker_control_pane_g4

0x5e7d,	// (0x00099550) vradio_rocker_control_pane_g5

0x0004,

0xf848,	// (0x000a2f1b) vradio_rocker_control_pane_g

0x5e85,	// (0x00099558) vradio_frequency_info_pane_g1

0x5e8f,	// (0x00099562) vradio_frequency_info_pane_t1_ParamLimits

0x5e8f,	// (0x00099562) vradio_frequency_info_pane_t1

0x5ea3,	// (0x00099576) vradio_tuning_pane_g1

0x5eae,	// (0x00099581) vradio_tuning_pane_t1

0xa09f,	// (0x0009d772) area_side_right_pane_ParamLimits

0xa09f,	// (0x0009d772) area_side_right_pane

0xe0cc,	// (0x000a179f) status_small_pane_g1

0xe0d4,	// (0x000a17a7) status_small_pane_g2

0xe0dd,	// (0x000a17b0) status_small_pane_g3

0xe0e6,	// (0x000a17b9) status_small_pane_g4

0x0003,

0xf608,	// (0x000a2cdb) status_small_pane_g

0xe0ef,	// (0x000a17c2) status_small_pane_t1

0xa0f0,	// (0x0009d7c3) main_video3_pane

0x5ebd,	// (0x00099590) cams_zoom_vslider_pane

0x5ec5,	// (0x00099598) image3_wide_pane_ParamLimits

0x5ec5,	// (0x00099598) image3_wide_pane

0x5edf,	// (0x000995b2) image3_wide_small_pane

0x5eeb,	// (0x000995be) main_video3_pane_g1_ParamLimits

0x5eeb,	// (0x000995be) main_video3_pane_g1

0x5f07,	// (0x000995da) main_video3_pane_g2_ParamLimits

0x5f07,	// (0x000995da) main_video3_pane_g2

0x0001,

0xf853,	// (0x000a2f26) main_video3_pane_g_ParamLimits

0xf853,	// (0x000a2f26) main_video3_pane_g

0x5f23,	// (0x000995f6) main_video3_pane_t1_ParamLimits

0x5f23,	// (0x000995f6) main_video3_pane_t1

0x5f4e,	// (0x00099621) main_video3_pane_t2_ParamLimits

0x5f4e,	// (0x00099621) main_video3_pane_t2

0x5f7b,	// (0x0009964e) main_video3_pane_t3_ParamLimits

0x5f7b,	// (0x0009964e) main_video3_pane_t3

0x0002,

0xf858,	// (0x000a2f2b) main_video3_pane_t_ParamLimits

0xf858,	// (0x000a2f2b) main_video3_pane_t

0x5fa8,	// (0x0009967b) cams_zoom_vslider_pane_g1

0x5fb1,	// (0x00099684) cams_zoom_vslider_pane_g2

0x0001,

0xf85f,	// (0x000a2f32) cams_zoom_vslider_pane_g

0x5fb9,	// (0x0009968c) small_slider_vertical_pane

0x4780,	// (0x00097e53) small_slider_vertical_pane_g1

0x4780,	// (0x00097e53) small_slider_vertical_pane_g2

0x5fc1,	// (0x00099694) small_slider_vertical_pane_g3

0x0002,

0xf864,	// (0x000a2f37) small_slider_vertical_pane_g

0xa0f0,	// (0x0009d7c3) main_hwr_training_pane

0x5fca,	// (0x0009969d) hwr_training_instruct_pane_ParamLimits

0x5fca,	// (0x0009969d) hwr_training_instruct_pane

0x5fec,	// (0x000996bf) hwr_training_navi_pane_ParamLimits

0x5fec,	// (0x000996bf) hwr_training_navi_pane

0x600b,	// (0x000996de) hwr_training_write_pane_ParamLimits

0x600b,	// (0x000996de) hwr_training_write_pane

0xe293,	// (0x000a1966) bg_frame_shadow_pane

0x605b,	// (0x0009972e) hwr_training_write_pane_g1

0x6063,	// (0x00099736) hwr_training_write_pane_g2

0x606b,	// (0x0009973e) hwr_training_write_pane_g3

0x6073,	// (0x00099746) hwr_training_write_pane_g4

0x607b,	// (0x0009974e) hwr_training_write_pane_g5

0x6083,	// (0x00099756) hwr_training_write_pane_g6

0x608b,	// (0x0009975e) hwr_training_write_pane_g7

0x0006,

0xf86b,	// (0x000a2f3e) hwr_training_write_pane_g

0xa67c,	// (0x0009dd4f) hwr_training_navi_pane_g1_ParamLimits

0xa67c,	// (0x0009dd4f) hwr_training_navi_pane_g1

0xa68e,	// (0x0009dd61) hwr_training_navi_pane_g2_ParamLimits

0xa68e,	// (0x0009dd61) hwr_training_navi_pane_g2

0xa6a0,	// (0x0009dd73) hwr_training_navi_pane_g3_ParamLimits

0xa6a0,	// (0x0009dd73) hwr_training_navi_pane_g3

0xa6b0,	// (0x0009dd83) hwr_training_navi_pane_g4_ParamLimits

0xa6b0,	// (0x0009dd83) hwr_training_navi_pane_g4

0x0004,

0xf87a,	// (0x000a2f4d) hwr_training_navi_pane_g_ParamLimits

0xf87a,	// (0x000a2f4d) hwr_training_navi_pane_g

0xa6bd,	// (0x0009dd90) hwr_training_navi_pane_t1

0x60a0,	// (0x00099773) list_single_hwr_training_instruct_pane_ParamLimits

0x60a0,	// (0x00099773) list_single_hwr_training_instruct_pane

0x60bc,	// (0x0009978f) list_single_hwr_training_instruct_pane_t1

0x46c0,	// (0x00097d93) bg_frame_shadow_pane_g1

0x60cb,	// (0x0009979e) bg_frame_shadow_pane_g2

0x60d3,	// (0x000997a6) bg_frame_shadow_pane_g3

0x60db,	// (0x000997ae) bg_frame_shadow_pane_g4

0x60e3,	// (0x000997b6) bg_frame_shadow_pane_g5

0x60eb,	// (0x000997be) bg_frame_shadow_pane_g6

0x60f3,	// (0x000997c6) bg_frame_shadow_pane_g7

0xeb2c,	// (0x000a21ff) bg_frame_shadow_pane_g8

0x0007,

0xf885,	// (0x000a2f58) bg_frame_shadow_pane_g

0xa0f0,	// (0x0009d7c3) main_video_tele_dialer_pane

0x60fb,	// (0x000997ce) aid_size_cell_video_keypad_ParamLimits

0x60fb,	// (0x000997ce) aid_size_cell_video_keypad

0x6115,	// (0x000997e8) grid_video_dialer_keypad_pane_ParamLimits

0x6115,	// (0x000997e8) grid_video_dialer_keypad_pane

0x6161,	// (0x00099834) video_down_pane_cp_ParamLimits

0x6161,	// (0x00099834) video_down_pane_cp

0x6191,	// (0x00099864) cell_video_dialer_keypad_pane_ParamLimits

0x6191,	// (0x00099864) cell_video_dialer_keypad_pane

0x61b7,	// (0x0009988a) bg_button_pane_cp08_ParamLimits

0x61b7,	// (0x0009988a) bg_button_pane_cp08

0x61c3,	// (0x00099896) cell_video_dialer_keypad_pane_g1_ParamLimits

0x61c3,	// (0x00099896) cell_video_dialer_keypad_pane_g1

0x5298,	// (0x0009896b) mup3_rocker2_pane_ParamLimits

0x5298,	// (0x0009896b) mup3_rocker2_pane

0x4780,	// (0x00097e53) mup3_rocker2_pane_g1

0x37fc,	// (0x00096ecf) main_dialer2_pane

0xa0f0,	// (0x0009d7c3) main_mp4_pane

0xa6d3,	// (0x0009dda6) main_mp4_pane_g1_ParamLimits

0xa6d3,	// (0x0009dda6) main_mp4_pane_g1

0xa6d3,	// (0x0009dda6) main_mp4_pane_g2_ParamLimits

0xa6d3,	// (0x0009dda6) main_mp4_pane_g2

0x61fe,	// (0x000998d1) main_mp4_pane_g3_ParamLimits

0x61fe,	// (0x000998d1) main_mp4_pane_g3

0xa6e1,	// (0x0009ddb4) main_mp4_pane_g4_ParamLimits

0xa6e1,	// (0x0009ddb4) main_mp4_pane_g4

0xa709,	// (0x0009dddc) main_mp4_pane_g5_ParamLimits

0xa709,	// (0x0009dddc) main_mp4_pane_g5

0x0005,

0xf8a5,	// (0x000a2f78) main_mp4_pane_g_ParamLimits

0xf8a5,	// (0x000a2f78) main_mp4_pane_g

0xa759,	// (0x0009de2c) main_mp4_pane_t1_ParamLimits

0xa759,	// (0x0009de2c) main_mp4_pane_t1

0xa7b5,	// (0x0009de88) main_mp4_pane_t2_ParamLimits

0xa7b5,	// (0x0009de88) main_mp4_pane_t2

0x6248,	// (0x0009991b) main_mp4_pane_t3_ParamLimits

0x6248,	// (0x0009991b) main_mp4_pane_t3

0xa807,	// (0x0009deda) main_mp4_pane_t4_ParamLimits

0xa807,	// (0x0009deda) main_mp4_pane_t4

0x0003,

0xf8b2,	// (0x000a2f85) main_mp4_pane_t_ParamLimits

0xf8b2,	// (0x000a2f85) main_mp4_pane_t

0xa847,	// (0x0009df1a) mp4_progress_pane_ParamLimits

0xa847,	// (0x0009df1a) mp4_progress_pane

0xa891,	// (0x0009df64) mp4_rocker_pane_ParamLimits

0xa891,	// (0x0009df64) mp4_rocker_pane

0x6270,	// (0x00099943) mp4_progress_pane_t1

0x6289,	// (0x0009995c) mp4_progress_pane_t2

0x0001,

0xf8bb,	// (0x000a2f8e) mp4_progress_pane_t

0x62a2,	// (0x00099975) mup_progress_pane_cp04

0xa8b3,	// (0x0009df86) mp4_rocker_pane_g1

0x62ae,	// (0x00099981) aid_cell_size_keypad2_ParamLimits

0x62ae,	// (0x00099981) aid_cell_size_keypad2

0x62c4,	// (0x00099997) dialer2_ne_pane_ParamLimits

0x62c4,	// (0x00099997) dialer2_ne_pane

0x62dc,	// (0x000999af) grid_dialer2_keypad_pane_ParamLimits

0x62dc,	// (0x000999af) grid_dialer2_keypad_pane

0x4489,	// (0x00097b5c) bg_popup_call_pane_cp07_ParamLimits

0x4489,	// (0x00097b5c) bg_popup_call_pane_cp07

0x62f8,	// (0x000999cb) dialer2_ne_pane_t1_ParamLimits

0x62f8,	// (0x000999cb) dialer2_ne_pane_t1

0x634a,	// (0x00099a1d) cell_dialer2_keypad_pane_ParamLimits

0x634a,	// (0x00099a1d) cell_dialer2_keypad_pane

0x6370,	// (0x00099a43) bg_button_pane_pane_cp04_ParamLimits

0x6370,	// (0x00099a43) bg_button_pane_pane_cp04

0x637c,	// (0x00099a4f) cell_dialer2_keypad_pane_g1_ParamLimits

0x637c,	// (0x00099a4f) cell_dialer2_keypad_pane_g1

0x164c,	// (0x00094d1f) aid_placing_vt_set_content_ParamLimits

0x164c,	// (0x00094d1f) aid_placing_vt_set_content

0x1670,	// (0x00094d43) aid_placing_vt_set_title_ParamLimits

0x1670,	// (0x00094d43) aid_placing_vt_set_title

0xa0f0,	// (0x0009d7c3) main_image3_pane

0x6442,	// (0x00099b15) area_side_right_pane_cp01_ParamLimits

0x6442,	// (0x00099b15) area_side_right_pane_cp01

0xa6d3,	// (0x0009dda6) main_image3_pane_g1_ParamLimits

0xa6d3,	// (0x0009dda6) main_image3_pane_g1

0x645b,	// (0x00099b2e) main_image3_pane_g2_ParamLimits

0x645b,	// (0x00099b2e) main_image3_pane_g2

0x6483,	// (0x00099b56) main_image3_pane_g3_ParamLimits

0x6483,	// (0x00099b56) main_image3_pane_g3

0x64ad,	// (0x00099b80) main_image3_pane_g4_ParamLimits

0x64ad,	// (0x00099b80) main_image3_pane_g4

0x0003,

0xf8ca,	// (0x000a2f9d) main_image3_pane_g_ParamLimits

0xf8ca,	// (0x000a2f9d) main_image3_pane_g

0x64d7,	// (0x00099baa) main_image3_pane_t1_ParamLimits

0x64d7,	// (0x00099baa) main_image3_pane_t1

0x652f,	// (0x00099c02) main_image3_pane_t2_ParamLimits

0x652f,	// (0x00099c02) main_image3_pane_t2

0x6581,	// (0x00099c54) main_image3_pane_t3_ParamLimits

0x6581,	// (0x00099c54) main_image3_pane_t3

0x0003,

0xf8d3,	// (0x000a2fa6) main_image3_pane_t_ParamLimits

0xf8d3,	// (0x000a2fa6) main_image3_pane_t

0xea5b,	// (0x000a212e) grid_sctrl_middle_pane_cp01_ParamLimits

0xea5b,	// (0x000a212e) grid_sctrl_middle_pane_cp01

0x6609,	// (0x00099cdc) cell_sctrl_middle_pane_cp01_ParamLimits

0x6609,	// (0x00099cdc) cell_sctrl_middle_pane_cp01

0x6626,	// (0x00099cf9) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x6626,	// (0x00099cf9) cell_sctrl_middle_pane_cp01_g1

0xa0f0,	// (0x0009d7c3) main_call4_pane

0x663b,	// (0x00099d0e) aid_size_button_call4_ParamLimits

0x663b,	// (0x00099d0e) aid_size_button_call4

0x666e,	// (0x00099d41) call4_windows_pane_ParamLimits

0x666e,	// (0x00099d41) call4_windows_pane

0x6690,	// (0x00099d63) grid_call4_button_pane_ParamLimits

0x6690,	// (0x00099d63) grid_call4_button_pane

0x66bb,	// (0x00099d8e) call4_windows_conf_pane

0x66d6,	// (0x00099da9) popup_call4_audio_first_window_ParamLimits

0x66d6,	// (0x00099da9) popup_call4_audio_first_window

0x6724,	// (0x00099df7) popup_call4_audio_second_window_ParamLimits

0x6724,	// (0x00099df7) popup_call4_audio_second_window

0x673a,	// (0x00099e0d) popup_call4_audio_wait_window_ParamLimits

0x673a,	// (0x00099e0d) popup_call4_audio_wait_window

0x6748,	// (0x00099e1b) cell_call4_button_pane_ParamLimits

0x6748,	// (0x00099e1b) cell_call4_button_pane

0x676f,	// (0x00099e42) bg_button_pane_cp09_ParamLimits

0x676f,	// (0x00099e42) bg_button_pane_cp09

0x677b,	// (0x00099e4e) cell_call4_button_pane_g1_ParamLimits

0x677b,	// (0x00099e4e) cell_call4_button_pane_g1

0x67a1,	// (0x00099e74) cell_call4_button_pane_t1_ParamLimits

0x67a1,	// (0x00099e74) cell_call4_button_pane_t1

0x6801,	// (0x00099ed4) popup_call4_audio_conf_window_ParamLimits

0x6801,	// (0x00099ed4) popup_call4_audio_conf_window

0x5302,	// (0x000989d5) mup3_progress_pane_t1_ParamLimits

0x5320,	// (0x000989f3) mup3_progress_pane_t2_ParamLimits

0x533e,	// (0x00098a11) mup3_progress_pane_t3_ParamLimits

0xf7ac,	// (0x000a2e7f) mup3_progress_pane_t_ParamLimits

0x535b,	// (0x00098a2e) mup_progress_pane_cp03_ParamLimits

0x5c0c,	// (0x000992df) mup3_control_keys_pane_g4_copy1

0xa875,	// (0x0009df48) mp4_rocker2_pane_ParamLimits

0xa875,	// (0x0009df48) mp4_rocker2_pane

0x681b,	// (0x00099eee) mp4_rocker2_pane_g1

0x6823,	// (0x00099ef6) mp4_rocker2_pane_g2

0xa8f1,	// (0x0009dfc4) mp4_rocker2_pane_g3

0xa8f9,	// (0x0009dfcc) mp4_rocker2_pane_g4

0xa901,	// (0x0009dfd4) mp4_rocker2_pane_g5

0x0004,

0xf8dc,	// (0x000a2faf) mp4_rocker2_pane_g

0xa0f0,	// (0x0009d7c3) main_camera4_pane

0xa0f0,	// (0x0009d7c3) main_video4_pane

0x612f,	// (0x00099802) main_video_tele_dialer_pane_t1_ParamLimits

0x612f,	// (0x00099802) main_video_tele_dialer_pane_t1

0x6148,	// (0x0009981b) main_video_tele_dialer_pane_t2_ParamLimits

0x6148,	// (0x0009981b) main_video_tele_dialer_pane_t2

0x0001,

0xf896,	// (0x000a2f69) main_video_tele_dialer_pane_t_ParamLimits

0xf896,	// (0x000a2f69) main_video_tele_dialer_pane_t

0x6843,	// (0x00099f16) cam4_autofocus_pane_ParamLimits

0x6843,	// (0x00099f16) cam4_autofocus_pane

0x6859,	// (0x00099f2c) cam4_image_uncrop_pane_ParamLimits

0x6859,	// (0x00099f2c) cam4_image_uncrop_pane

0x6872,	// (0x00099f45) cam4_indicators_pane_ParamLimits

0x6872,	// (0x00099f45) cam4_indicators_pane

0x68a1,	// (0x00099f74) main_camera4_pane_g1_ParamLimits

0x68a1,	// (0x00099f74) main_camera4_pane_g1

0x68b3,	// (0x00099f86) main_camera4_pane_g2_ParamLimits

0x68b3,	// (0x00099f86) main_camera4_pane_g2

0x68c6,	// (0x00099f99) main_camera4_pane_g3_ParamLimits

0x68c6,	// (0x00099f99) main_camera4_pane_g3

0x68d9,	// (0x00099fac) main_camera4_pane_g4_ParamLimits

0x68d9,	// (0x00099fac) main_camera4_pane_g4

0x68ec,	// (0x00099fbf) main_camera4_pane_g5_ParamLimits

0x68ec,	// (0x00099fbf) main_camera4_pane_g5

0x0005,

0xf8e7,	// (0x000a2fba) main_camera4_pane_g_ParamLimits

0xf8e7,	// (0x000a2fba) main_camera4_pane_g

0x6910,	// (0x00099fe3) main_camera4_pane_t1_ParamLimits

0x6910,	// (0x00099fe3) main_camera4_pane_t1

0xa927,	// (0x0009dffa) bg_tb_trans_pane_cp06

0xa93d,	// (0x0009e010) cam4_indicators_pane_g1

0xa94e,	// (0x0009e021) cam4_indicators_pane_g2

0x0002,

0xf902,	// (0x000a2fd5) cam4_indicators_pane_g

0xa966,	// (0x0009e039) cam4_indicators_pane_t1

0x6988,	// (0x0009a05b) main_video4_pane_g1_ParamLimits

0x6988,	// (0x0009a05b) main_video4_pane_g1

0x6997,	// (0x0009a06a) main_video4_pane_g2_ParamLimits

0x6997,	// (0x0009a06a) main_video4_pane_g2

0x69a6,	// (0x0009a079) main_video4_pane_g3_ParamLimits

0x69a6,	// (0x0009a079) main_video4_pane_g3

0x69b5,	// (0x0009a088) main_video4_pane_g4_ParamLimits

0x69b5,	// (0x0009a088) main_video4_pane_g4

0x0004,

0xf909,	// (0x000a2fdc) main_video4_pane_g_ParamLimits

0xf909,	// (0x000a2fdc) main_video4_pane_g

0x69d3,	// (0x0009a0a6) vid4_indicators_pane_ParamLimits

0x69d3,	// (0x0009a0a6) vid4_indicators_pane

0x6a01,	// (0x0009a0d4) video4_image_uncrop_cif_pane_ParamLimits

0x6a01,	// (0x0009a0d4) video4_image_uncrop_cif_pane

0x6a1b,	// (0x0009a0ee) video4_image_uncrop_nhd_pane_ParamLimits

0x6a1b,	// (0x0009a0ee) video4_image_uncrop_nhd_pane

0x6859,	// (0x00099f2c) video4_image_uncrop_vga_pane_ParamLimits

0x6859,	// (0x00099f2c) video4_image_uncrop_vga_pane

0xa0e2,	// (0x0009d7b5) bg_tb_trans_pane_cp07

0xa994,	// (0x0009e067) vid4_indicators_pane_g1

0xa9aa,	// (0x0009e07d) vid4_indicators_pane_g2

0xa9be,	// (0x0009e091) vid4_indicators_pane_g3

0x0004,

0xf914,	// (0x000a2fe7) vid4_indicators_pane_g

0xa9ef,	// (0x0009e0c2) vid4_indicators_pane_t1

0x6a31,	// (0x0009a104) cam4_autofocus_pane_g1

0x6a39,	// (0x0009a10c) cam4_autofocus_pane_g2

0x6a41,	// (0x0009a114) cam4_autofocus_pane_g3

0x0002,

0xf91f,	// (0x000a2ff2) cam4_autofocus_pane_g

0x6a49,	// (0x0009a11c) cam4_autofocus_pane_g3_copy1

0x6175,	// (0x00099848) video_down_pane_cp_t1

0x6183,	// (0x00099856) video_down_pane_cp_t2

0x0001,

0xf89b,	// (0x000a2f6e) video_down_pane_cp_t

0xa0e2,	// (0x0009d7b5) popup_vitu2_window_ParamLimits

0xa0e2,	// (0x0009d7b5) popup_vitu2_window

0x6a51,	// (0x0009a124) aid_size_cell2_itu2_ParamLimits

0x6a51,	// (0x0009a124) aid_size_cell2_itu2

0x6a77,	// (0x0009a14a) aid_size_cell_itu2_ParamLimits

0x6a77,	// (0x0009a14a) aid_size_cell_itu2

0x6ad5,	// (0x0009a1a8) bg_popup_window_pane_cp09_ParamLimits

0x6ad5,	// (0x0009a1a8) bg_popup_window_pane_cp09

0x6ae3,	// (0x0009a1b6) field_vitu2_entry_pane_ParamLimits

0x6ae3,	// (0x0009a1b6) field_vitu2_entry_pane

0x6b0b,	// (0x0009a1de) grid_vitu2_function_pane_ParamLimits

0x6b0b,	// (0x0009a1de) grid_vitu2_function_pane

0x6b5c,	// (0x0009a22f) grid_vitu2_itu_pane_ParamLimits

0x6b5c,	// (0x0009a22f) grid_vitu2_itu_pane

0x6be7,	// (0x0009a2ba) cell_vitu2_itu_pane_ParamLimits

0x6be7,	// (0x0009a2ba) cell_vitu2_itu_pane

0x6c0d,	// (0x0009a2e0) cell_vitu2_function_pane_ParamLimits

0x6c0d,	// (0x0009a2e0) cell_vitu2_function_pane

0x6c51,	// (0x0009a324) bg_popup_call_pane_cp08_ParamLimits

0x6c51,	// (0x0009a324) bg_popup_call_pane_cp08

0x6c6a,	// (0x0009a33d) field_vitu2_entry_pane_g1

0x6c76,	// (0x0009a349) field_vitu2_entry_pane_g2

0x0002,

0xf926,	// (0x000a2ff9) field_vitu2_entry_pane_g

0x6c90,	// (0x0009a363) field_vitu2_entry_pane_t1_ParamLimits

0x6c90,	// (0x0009a363) field_vitu2_entry_pane_t1

0x6cbe,	// (0x0009a391) field_vitu2_entry_pane_t2_ParamLimits

0x6cbe,	// (0x0009a391) field_vitu2_entry_pane_t2

0x0001,

0xf92d,	// (0x000a3000) field_vitu2_entry_pane_t_ParamLimits

0xf92d,	// (0x000a3000) field_vitu2_entry_pane_t

0x6ce3,	// (0x0009a3b6) bg_button_pane_cp010_ParamLimits

0x6ce3,	// (0x0009a3b6) bg_button_pane_cp010

0x6cf1,	// (0x0009a3c4) cell_vitu2_itu_pane_g1

0x6d0f,	// (0x0009a3e2) cell_vitu2_itu_pane_t1_ParamLimits

0x6d0f,	// (0x0009a3e2) cell_vitu2_itu_pane_t1

0x067d,	// (0x00093d50) cell_vitu2_itu_pane_t2_ParamLimits

0x067d,	// (0x00093d50) cell_vitu2_itu_pane_t2

0x0002,

0xf937,	// (0x000a300a) cell_vitu2_itu_pane_t_ParamLimits

0xf937,	// (0x000a300a) cell_vitu2_itu_pane_t

0xa0e2,	// (0x0009d7b5) bg_button_pane_cp011

0x6d75,	// (0x0009a448) cell_vitu2_function_pane_g1

0xa0f0,	// (0x0009d7c3) main_myfav_hc_pane

0x65d1,	// (0x00099ca4) popup_image3_note_pane_ParamLimits

0x65d1,	// (0x00099ca4) popup_image3_note_pane

0x65ed,	// (0x00099cc0) popup_image3_tool_bar_pane_ParamLimits

0x65ed,	// (0x00099cc0) popup_image3_tool_bar_pane

0x0701,	// (0x00093dd4) cell_vitu2_itu_pane_t3_ParamLimits

0x0701,	// (0x00093dd4) cell_vitu2_itu_pane_t3

0xe293,	// (0x000a1966) bg_popup_trans_pane

0x6d89,	// (0x0009a45c) grid_image3_tool_bar_pane

0x6d93,	// (0x0009a466) bg_popup_trans_pane_g1

0xef2b,	// (0x000a25fe) bg_popup_trans_pane_g2

0x6d9b,	// (0x0009a46e) bg_popup_trans_pane_g3

0x6da3,	// (0x0009a476) bg_popup_trans_pane_g4

0x6dab,	// (0x0009a47e) bg_popup_trans_pane_g5

0x6db3,	// (0x0009a486) bg_popup_trans_pane_g6

0x6dbb,	// (0x0009a48e) bg_popup_trans_pane_g7

0x6dc3,	// (0x0009a496) bg_popup_trans_pane_g8

0xef0b,	// (0x000a25de) bg_popup_trans_pane_g9

0x0008,

0xf93e,	// (0x000a3011) bg_popup_trans_pane_g

0x6dcb,	// (0x0009a49e) cell_image3_tool_bar_pane_ParamLimits

0x6dcb,	// (0x0009a49e) cell_image3_tool_bar_pane

0x4780,	// (0x00097e53) cell_image3_tool_bar_pane_g1

0xe293,	// (0x000a1966) bg_popup_trans_pane_cp1

0x6de1,	// (0x0009a4b4) popup_image3_note_pane_t1

0x6def,	// (0x0009a4c2) popup_image3_note_pane_t2

0x6dfd,	// (0x0009a4d0) popup_image3_note_pane_t3

0x0002,

0xf951,	// (0x000a3024) popup_image3_note_pane_t

0x6e0d,	// (0x0009a4e0) popup_image3_note_pane_t3_copy1

0x6e1b,	// (0x0009a4ee) bg_myfav_hc_instruction_pane_ParamLimits

0x6e1b,	// (0x0009a4ee) bg_myfav_hc_instruction_pane

0x6e33,	// (0x0009a506) cell_myfav_contact_pane_ParamLimits

0x6e33,	// (0x0009a506) cell_myfav_contact_pane

0x6e4f,	// (0x0009a522) cell_myfav_contact_pane_cp1_ParamLimits

0x6e4f,	// (0x0009a522) cell_myfav_contact_pane_cp1

0x6e67,	// (0x0009a53a) cell_myfav_contact_pane_cp2_ParamLimits

0x6e67,	// (0x0009a53a) cell_myfav_contact_pane_cp2

0x6e7f,	// (0x0009a552) cell_myfav_contact_pane_cp3_ParamLimits

0x6e7f,	// (0x0009a552) cell_myfav_contact_pane_cp3

0x6e96,	// (0x0009a569) cell_myfav_contact_pane_cp4_ParamLimits

0x6e96,	// (0x0009a569) cell_myfav_contact_pane_cp4

0x6eae,	// (0x0009a581) cell_myfav_contact_pane_cp5_ParamLimits

0x6eae,	// (0x0009a581) cell_myfav_contact_pane_cp5

0x6ec2,	// (0x0009a595) cell_myfav_contact_pane_cp6_ParamLimits

0x6ec2,	// (0x0009a595) cell_myfav_contact_pane_cp6

0x6ed8,	// (0x0009a5ab) cell_myfav_contact_pane_cp7_ParamLimits

0x6ed8,	// (0x0009a5ab) cell_myfav_contact_pane_cp7

0x6ef0,	// (0x0009a5c3) listscroll_gen_pane_cp05

0x6ef9,	// (0x0009a5cc) main_myfav_hc_pane_g1_ParamLimits

0x6ef9,	// (0x0009a5cc) main_myfav_hc_pane_g1

0x6f13,	// (0x0009a5e6) main_myfav_hc_pane_g2_ParamLimits

0x6f13,	// (0x0009a5e6) main_myfav_hc_pane_g2

0x0002,

0xf958,	// (0x000a302b) main_myfav_hc_pane_g_ParamLimits

0xf958,	// (0x000a302b) main_myfav_hc_pane_g

0x6f47,	// (0x0009a61a) main_myfav_hc_pane_t1_ParamLimits

0x6f47,	// (0x0009a61a) main_myfav_hc_pane_t1

0x6f5e,	// (0x0009a631) main_myfav_hc_pane_t2_ParamLimits

0x6f5e,	// (0x0009a631) main_myfav_hc_pane_t2

0x6f70,	// (0x0009a643) main_myfav_hc_pane_t3_ParamLimits

0x6f70,	// (0x0009a643) main_myfav_hc_pane_t3

0x6f82,	// (0x0009a655) main_myfav_hc_pane_t4_ParamLimits

0x6f82,	// (0x0009a655) main_myfav_hc_pane_t4

0x0004,

0xf95f,	// (0x000a3032) main_myfav_hc_pane_t_ParamLimits

0xf95f,	// (0x000a3032) main_myfav_hc_pane_t

0x4780,	// (0x00097e53) bg_myfav_hc_instruction_pane_g1

0x6fac,	// (0x0009a67f) cell_myfav_contact_pane_g1_ParamLimits

0x6fac,	// (0x0009a67f) cell_myfav_contact_pane_g1

0x6fac,	// (0x0009a67f) cell_myfav_contact_pane_g2_ParamLimits

0x6fac,	// (0x0009a67f) cell_myfav_contact_pane_g2

0x6fb8,	// (0x0009a68b) cell_myfav_contact_pane_g3_ParamLimits

0x6fb8,	// (0x0009a68b) cell_myfav_contact_pane_g3

0x4e7f,	// (0x00098552) cell_myfav_contact_pane_g4_ParamLimits

0x4e7f,	// (0x00098552) cell_myfav_contact_pane_g4

0x6fc5,	// (0x0009a698) cell_myfav_contact_pane_g5_ParamLimits

0x6fc5,	// (0x0009a698) cell_myfav_contact_pane_g5

0x0004,

0xf96a,	// (0x000a303d) cell_myfav_contact_pane_g_ParamLimits

0xf96a,	// (0x000a303d) cell_myfav_contact_pane_g

0x6f2d,	// (0x0009a600) main_myfav_hc_pane_g3_ParamLimits

0x6f2d,	// (0x0009a600) main_myfav_hc_pane_g3

0x08bb,	// (0x00093f8e) popup_adpt_find_window

0x6fd1,	// (0x0009a6a4) afind_page_pane_ParamLimits

0x6fd1,	// (0x0009a6a4) afind_page_pane

0x6fe6,	// (0x0009a6b9) aid_size_cell_afind_ParamLimits

0x6fe6,	// (0x0009a6b9) aid_size_cell_afind

0x7004,	// (0x0009a6d7) bg_popup_sub_pane_cp09_ParamLimits

0x7004,	// (0x0009a6d7) bg_popup_sub_pane_cp09

0x7011,	// (0x0009a6e4) find_pane_cp01_ParamLimits

0x7011,	// (0x0009a6e4) find_pane_cp01

0x701e,	// (0x0009a6f1) grid_afind_control_pane_ParamLimits

0x701e,	// (0x0009a6f1) grid_afind_control_pane

0x7032,	// (0x0009a705) grid_afind_pane_ParamLimits

0x7032,	// (0x0009a705) grid_afind_pane

0x7054,	// (0x0009a727) cell_afind_pane_ParamLimits

0x7054,	// (0x0009a727) cell_afind_pane

0x4780,	// (0x00097e53) afind_page_pane_g1

0x70b7,	// (0x0009a78a) afind_page_pane_g2

0x70c0,	// (0x0009a793) afind_page_pane_g3

0x0002,

0xf975,	// (0x000a3048) afind_page_pane_g

0x70c9,	// (0x0009a79c) afind_page_pane_t1

0x70e9,	// (0x0009a7bc) cell_afind_grid_control_pane_ParamLimits

0x70e9,	// (0x0009a7bc) cell_afind_grid_control_pane

0x6370,	// (0x00099a43) bg_button_pane_cp69_ParamLimits

0x6370,	// (0x00099a43) bg_button_pane_cp69

0x70f8,	// (0x0009a7cb) cell_afind_pane_g1_ParamLimits

0x70f8,	// (0x0009a7cb) cell_afind_pane_g1

0x7105,	// (0x0009a7d8) cell_afind_pane_t1_ParamLimits

0x7105,	// (0x0009a7d8) cell_afind_pane_t1

0xec62,	// (0x000a2335) bg_button_pane_cp72

0xaa06,	// (0x0009e0d9) cell_afind_grid_control_pane_g1

0x329c,	// (0x0009696f) aid_image_placing_area_ParamLimits

0x329c,	// (0x0009696f) aid_image_placing_area

0x5cb9,	// (0x0009938c) field_vitu_entry_pane_g1_ParamLimits

0x5cb9,	// (0x0009938c) field_vitu_entry_pane_g1

0x5cc5,	// (0x00099398) field_vitu_entry_pane_g2_ParamLimits

0x5cc5,	// (0x00099398) field_vitu_entry_pane_g2

0x0001,

0xf826,	// (0x000a2ef9) field_vitu_entry_pane_g_ParamLimits

0xf826,	// (0x000a2ef9) field_vitu_entry_pane_g

0x5d1c,	// (0x000993ef) cell_vitu_itu_pane_g1_ParamLimits

0x5d5e,	// (0x00099431) cell_vitu_itu_pane_t3_ParamLimits

0x5d5e,	// (0x00099431) cell_vitu_itu_pane_t3

0x6270,	// (0x00099943) mp4_progress_pane_t1_ParamLimits

0x6289,	// (0x0009995c) mp4_progress_pane_t2_ParamLimits

0xf8bb,	// (0x000a2f8e) mp4_progress_pane_t_ParamLimits

0x62a2,	// (0x00099975) mup_progress_pane_cp04_ParamLimits

0x6f96,	// (0x0009a669) main_myfav_hc_pane_t5_ParamLimits

0x6f96,	// (0x0009a669) main_myfav_hc_pane_t5

0xa08f,	// (0x0009d762) aid_zoom_text_primary

0x08bb,	// (0x00093f8e) popup_adpt_find_window_ParamLimits

0xa0e2,	// (0x0009d7b5) main_cam_set_pane

0x688b,	// (0x00099f5e) cam4_zoom_pane_ParamLimits

0x688b,	// (0x00099f5e) cam4_zoom_pane

0x7117,	// (0x0009a7ea) main_cam_set_pane_g1_ParamLimits

0x7117,	// (0x0009a7ea) main_cam_set_pane_g1

0x7125,	// (0x0009a7f8) main_cam_set_pane_g2_ParamLimits

0x7125,	// (0x0009a7f8) main_cam_set_pane_g2

0x0001,

0xf97c,	// (0x000a304f) main_cam_set_pane_g_ParamLimits

0xf97c,	// (0x000a304f) main_cam_set_pane_g

0x7146,	// (0x0009a819) main_cam_set_pane_t1_ParamLimits

0x7146,	// (0x0009a819) main_cam_set_pane_t1

0x7161,	// (0x0009a834) main_cset_listscroll_pane_ParamLimits

0x7161,	// (0x0009a834) main_cset_listscroll_pane

0x7185,	// (0x0009a858) main_cset_slider_pane_ParamLimits

0x7185,	// (0x0009a858) main_cset_slider_pane

0xaa17,	// (0x0009e0ea) main_cset_list_pane_ParamLimits

0xaa17,	// (0x0009e0ea) main_cset_list_pane

0xaa27,	// (0x0009e0fa) scroll_pane_cp028

0x71af,	// (0x0009a882) aid_area_touch_slider

0x71cb,	// (0x0009a89e) cset_slider_pane

0x71f5,	// (0x0009a8c8) main_cset_slider_pane_g1

0x720a,	// (0x0009a8dd) main_cset_slider_pane_g2

0x0011,

0xf981,	// (0x000a3054) main_cset_slider_pane_g

0xaa60,	// (0x0009e133) main_cset_slider_pane_t1

0x72cc,	// (0x0009a99f) main_cset_slider_pane_t2

0x72e6,	// (0x0009a9b9) main_cset_slider_pane_t3

0x7300,	// (0x0009a9d3) main_cset_slider_pane_t4

0x731a,	// (0x0009a9ed) main_cset_slider_pane_t5

0x7338,	// (0x0009aa0b) main_cset_slider_pane_t6

0x734f,	// (0x0009aa22) main_cset_slider_pane_t7

0x000e,

0xf9a6,	// (0x000a3079) main_cset_slider_pane_t

0x745b,	// (0x0009ab2e) cset_list_set_pane_ParamLimits

0x745b,	// (0x0009ab2e) cset_list_set_pane

0x746f,	// (0x0009ab42) aid_position_infowindow_above

0x7477,	// (0x0009ab4a) aid_position_infowindow_below

0x747f,	// (0x0009ab52) cset_list_set_pane_g1_ParamLimits

0x747f,	// (0x0009ab52) cset_list_set_pane_g1

0x748b,	// (0x0009ab5e) cset_list_set_pane_g3_ParamLimits

0x748b,	// (0x0009ab5e) cset_list_set_pane_g3

0x0001,

0xf9c5,	// (0x000a3098) cset_list_set_pane_g_ParamLimits

0xf9c5,	// (0x000a3098) cset_list_set_pane_g

0x749a,	// (0x0009ab6d) cset_list_set_pane_t1_ParamLimits

0x749a,	// (0x0009ab6d) cset_list_set_pane_t1

0xea5b,	// (0x000a212e) list_highlight_pane_cp021_ParamLimits

0xea5b,	// (0x000a212e) list_highlight_pane_cp021

0xcdaa,	// (0x000a047d) cset_slider_pane_g1

0xcdbc,	// (0x000a048f) cset_slider_pane_g2

0xcdb3,	// (0x000a0486) cset_slider_pane_g3

0x0002,

0xf9ca,	// (0x000a309d) cset_slider_pane_g

0xab00,	// (0x0009e1d3) aid_area_touch_cam4_zoom

0xab08,	// (0x0009e1db) cam4_zoom_cont_pane

0xab10,	// (0x0009e1e3) cam4_zoom_pane_g1

0xab18,	// (0x0009e1eb) cam4_zoom_pane_g2

0x74af,	// (0x0009ab82) cam4_zoom_pane_g3

0x0002,

0xf9d1,	// (0x000a30a4) cam4_zoom_pane_g

0xab20,	// (0x0009e1f3) cam4_zoom_cont_pane_g1

0xab29,	// (0x0009e1fc) cam4_zoom_cont_pane_g2

0xab32,	// (0x0009e205) cam4_zoom_cont_pane_g3

0x0002,

0xf9d8,	// (0x000a30ab) cam4_zoom_cont_pane_g

0x6659,	// (0x00099d2c) call4_image_pane_ParamLimits

0x6659,	// (0x00099d2c) call4_image_pane

0x66bb,	// (0x00099d8e) call4_windows_conf_pane_ParamLimits

0x6702,	// (0x00099dd5) popup_call4_audio_in_window_ParamLimits

0x6702,	// (0x00099dd5) popup_call4_audio_in_window

0xe293,	// (0x000a1966) bg_popup_call2_act_pane_cp02

0x67f9,	// (0x00099ecc) call4_list_conf_pane

0x4780,	// (0x00097e53) call4_image_pane_g1

0x4780,	// (0x00097e53) call4_image_pane_g2

0x0001,

0xf6ec,	// (0x000a2dbf) call4_image_pane_g

0xab3b,	// (0x0009e20e) list_single_graphic_popup_conf4_pane_ParamLimits

0xab3b,	// (0x0009e20e) list_single_graphic_popup_conf4_pane

0xe293,	// (0x000a1966) list_highlight_pane_cp022

0xab50,	// (0x0009e223) list_single_graphic_popup_conf4_pane_g1

0xca96,	// (0x000a0169) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf9df,	// (0x000a30b2) list_single_graphic_popup_conf4_pane_g

0xab58,	// (0x0009e22b) list_single_graphic_popup_conf4_pane_t1

0x1787,	// (0x00094e5a) popup_vtel_slider_window_ParamLimits

0x1787,	// (0x00094e5a) popup_vtel_slider_window

0x6338,	// (0x00099a0b) dialer2_ne_pane_t2_ParamLimits

0x6338,	// (0x00099a0b) dialer2_ne_pane_t2

0x0001,

0xf8c0,	// (0x000a2f93) dialer2_ne_pane_t_ParamLimits

0xf8c0,	// (0x000a2f93) dialer2_ne_pane_t

0x4489,	// (0x00097b5c) bg_popup_sub_pane_cp010_ParamLimits

0x4489,	// (0x00097b5c) bg_popup_sub_pane_cp010

0x74b7,	// (0x0009ab8a) popup_vtel_slider_window_g1_ParamLimits

0x74b7,	// (0x0009ab8a) popup_vtel_slider_window_g1

0x74ca,	// (0x0009ab9d) popup_vtel_slider_window_g2_ParamLimits

0x74ca,	// (0x0009ab9d) popup_vtel_slider_window_g2

0x0003,

0xf9e4,	// (0x000a30b7) popup_vtel_slider_window_g_ParamLimits

0xf9e4,	// (0x000a30b7) popup_vtel_slider_window_g

0x7520,	// (0x0009abf3) vtel_slider_pane_ParamLimits

0x7520,	// (0x0009abf3) vtel_slider_pane

0x7542,	// (0x0009ac15) vtel_slider_pane_g1_ParamLimits

0x7542,	// (0x0009ac15) vtel_slider_pane_g1

0x7556,	// (0x0009ac29) vtel_slider_pane_g2_ParamLimits

0x7556,	// (0x0009ac29) vtel_slider_pane_g2

0x756e,	// (0x0009ac41) vtel_slider_pane_g3_ParamLimits

0x756e,	// (0x0009ac41) vtel_slider_pane_g3

0x7542,	// (0x0009ac15) vtel_slider_pane_g4_ParamLimits

0x7542,	// (0x0009ac15) vtel_slider_pane_g4

0x7584,	// (0x0009ac57) vtel_slider_pane_g5_ParamLimits

0x7584,	// (0x0009ac57) vtel_slider_pane_g5

0x0004,

0xf9ed,	// (0x000a30c0) vtel_slider_pane_g_ParamLimits

0xf9ed,	// (0x000a30c0) vtel_slider_pane_g

0xa0f0,	// (0x0009d7c3) main_gallery2_pane

0x6aa3,	// (0x0009a176) aid_size_row_itut2_dropdow_list_ParamLimits

0x6aa3,	// (0x0009a176) aid_size_row_itut2_dropdow_list

0x6b33,	// (0x0009a206) grid_vitu2_function_top_pane_ParamLimits

0x6b33,	// (0x0009a206) grid_vitu2_function_top_pane

0x6b92,	// (0x0009a265) popup_vitu2_dropdown_list_window_ParamLimits

0x6b92,	// (0x0009a265) popup_vitu2_dropdown_list_window

0x6bbb,	// (0x0009a28e) popup_vitu2_match_list_window

0x759a,	// (0x0009ac6d) cell_vitu2_function_top_pane_ParamLimits

0x759a,	// (0x0009ac6d) cell_vitu2_function_top_pane

0x75ba,	// (0x0009ac8d) cell_vitu2_function_top_pane_cp01_ParamLimits

0x75ba,	// (0x0009ac8d) cell_vitu2_function_top_pane_cp01

0x75d8,	// (0x0009acab) cell_vitu2_function_top_wide_pane_ParamLimits

0x75d8,	// (0x0009acab) cell_vitu2_function_top_wide_pane

0xa0e2,	// (0x0009d7b5) bg_button_pane_cp012

0x75f6,	// (0x0009acc9) cell_vitu2_function_top_pane_g1

0xab7c,	// (0x0009e24f) bg_button_pane_cp013_ParamLimits

0xab7c,	// (0x0009e24f) bg_button_pane_cp013

0x760a,	// (0x0009acdd) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x760a,	// (0x0009acdd) cell_vitu2_function_top_wide_pane_g1

0xa0e2,	// (0x0009d7b5) bg_popup_sub_pane_cp20

0x7622,	// (0x0009acf5) list_vitu2_match_list_pane

0x6d93,	// (0x0009a466) bg_popup_sub_pane_cp20_g1

0x6d9b,	// (0x0009a46e) bg_popup_sub_pane_cp20_g2

0xef2b,	// (0x000a25fe) bg_popup_sub_pane_cp20_g3

0x6da3,	// (0x0009a476) bg_popup_sub_pane_cp20_g4

0xef0b,	// (0x000a25de) bg_popup_sub_pane_cp20_g5

0xab98,	// (0x0009e26b) bg_popup_sub_pane_cp20_g6

0x6db3,	// (0x0009a486) bg_popup_sub_pane_cp20_g7

0x6dbb,	// (0x0009a48e) bg_popup_sub_pane_cp20_g8

0x6dc3,	// (0x0009a496) bg_popup_sub_pane_cp20_g9

0x0008,

0xf9f8,	// (0x000a30cb) bg_popup_sub_pane_cp20_g

0xaba0,	// (0x0009e273) list_vitu2_match_list_item_pane_ParamLimits

0xaba0,	// (0x0009e273) list_vitu2_match_list_item_pane

0xabb2,	// (0x0009e285) list_vitu2_match_list_item_pane_t1

0xa0f0,	// (0x0009d7c3) bg_popup_sub_pane_cp21

0xabd8,	// (0x0009e2ab) grid_vitu2_dropdown_list_pane

0x7672,	// (0x0009ad45) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x7672,	// (0x0009ad45) cell_vitu2_dropdown_list_char_pane

0x7695,	// (0x0009ad68) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x7695,	// (0x0009ad68) cell_vitu2_dropdown_list_ctrl_pane

0xabe0,	// (0x0009e2b3) cell_vitu2_dropdown_list_char_pane_g1

0xabe9,	// (0x0009e2bc) cell_vitu2_dropdown_list_char_pane_g2

0xabf2,	// (0x0009e2c5) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xfa15,	// (0x000a30e8) cell_vitu2_dropdown_list_char_pane_g

0x76c3,	// (0x0009ad96) cell_vitu2_dropdown_list_char_pane_t1

0x76d1,	// (0x0009ada4) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x76d1,	// (0x0009ada4) cell_vitu2_dropdown_list_ctrl_pane_g1

0x76e1,	// (0x0009adb4) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x76e1,	// (0x0009adb4) cell_vitu2_dropdown_list_ctrl_pane_g2

0x76f2,	// (0x0009adc5) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x76f2,	// (0x0009adc5) cell_vitu2_dropdown_list_ctrl_pane_g3

0x7702,	// (0x0009add5) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x7702,	// (0x0009add5) cell_vitu2_dropdown_list_ctrl_pane_g4

0xa927,	// (0x0009dffa) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0xa927,	// (0x0009dffa) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa1c,	// (0x000a30ef) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa1c,	// (0x000a30ef) cell_vitu2_dropdown_list_ctrl_pane_g

0x771e,	// (0x0009adf1) aid_size_cell_gallery2_ParamLimits

0x771e,	// (0x0009adf1) aid_size_cell_gallery2

0x7734,	// (0x0009ae07) grid_gallery2_pane_ParamLimits

0x7734,	// (0x0009ae07) grid_gallery2_pane

0x7748,	// (0x0009ae1b) scroll_pane_cp029_ParamLimits

0x7748,	// (0x0009ae1b) scroll_pane_cp029

0x7754,	// (0x0009ae27) cell_gallery2_pane_ParamLimits

0x7754,	// (0x0009ae27) cell_gallery2_pane

0xabfb,	// (0x0009e2ce) cell_gallery2_pane_g2

0x778e,	// (0x0009ae61) cell_gallery2_pane_g3

0xac05,	// (0x0009e2d8) cell_gallery2_pane_g4

0xac0d,	// (0x0009e2e0) cell_gallery2_pane_g5

0xcc64,	// (0x000a0337) grid_highlight_pane_cp10

0x6bbb,	// (0x0009a28e) popup_vitu2_match_list_window_ParamLimits

0x6bd2,	// (0x0009a2a5) popup_vitu2_query_window_ParamLimits

0x6bd2,	// (0x0009a2a5) popup_vitu2_query_window

0xa0f0,	// (0x0009d7c3) bg_vitu2_candi_button_pane

0xabe0,	// (0x0009e2b3) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xabe9,	// (0x0009e2bc) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xabf2,	// (0x0009e2c5) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x7796,	// (0x0009ae69) bg_button_pane_cp015

0x77aa,	// (0x0009ae7d) bg_button_pane_cp016

0x77bd,	// (0x0009ae90) bg_button_pane_cp017

0xe105,	// (0x000a17d8) bg_popup_sub_pane_cp22

0xac15,	// (0x0009e2e8) popup_vitu2_query_window_g1

0x7802,	// (0x0009aed5) popup_vitu2_query_window_g2

0x0002,

0xfa27,	// (0x000a30fa) popup_vitu2_query_window_g

0x7821,	// (0x0009aef4) popup_vitu2_query_window_t1_ParamLimits

0x7821,	// (0x0009aef4) popup_vitu2_query_window_t1

0x7856,	// (0x0009af29) popup_vitu2_query_window_t2_ParamLimits

0x7856,	// (0x0009af29) popup_vitu2_query_window_t2

0x7868,	// (0x0009af3b) popup_vitu2_query_window_t3_ParamLimits

0x7868,	// (0x0009af3b) popup_vitu2_query_window_t3

0x7890,	// (0x0009af63) popup_vitu2_query_window_t4_ParamLimits

0x7890,	// (0x0009af63) popup_vitu2_query_window_t4

0x78b1,	// (0x0009af84) popup_vitu2_query_window_t5_ParamLimits

0x78b1,	// (0x0009af84) popup_vitu2_query_window_t5

0x0006,

0xfa2e,	// (0x000a3101) popup_vitu2_query_window_t_ParamLimits

0xfa2e,	// (0x000a3101) popup_vitu2_query_window_t

0xaa0f,	// (0x0009e0e2) main_cset_text_pane

0x71af,	// (0x0009a882) aid_area_touch_slider_ParamLimits

0x71cb,	// (0x0009a89e) cset_slider_pane_ParamLimits

0x71f5,	// (0x0009a8c8) main_cset_slider_pane_g1_ParamLimits

0x720a,	// (0x0009a8dd) main_cset_slider_pane_g2_ParamLimits

0xaa30,	// (0x0009e103) main_cset_slider_pane_g3_ParamLimits

0xaa30,	// (0x0009e103) main_cset_slider_pane_g3

0x721f,	// (0x0009a8f2) main_cset_slider_pane_g4_ParamLimits

0x721f,	// (0x0009a8f2) main_cset_slider_pane_g4

0x722e,	// (0x0009a901) main_cset_slider_pane_g5_ParamLimits

0x722e,	// (0x0009a901) main_cset_slider_pane_g5

0x723c,	// (0x0009a90f) main_cset_slider_pane_g6_ParamLimits

0x723c,	// (0x0009a90f) main_cset_slider_pane_g6

0xf981,	// (0x000a3054) main_cset_slider_pane_g_ParamLimits

0xaa60,	// (0x0009e133) main_cset_slider_pane_t1_ParamLimits

0x72cc,	// (0x0009a99f) main_cset_slider_pane_t2_ParamLimits

0x72e6,	// (0x0009a9b9) main_cset_slider_pane_t3_ParamLimits

0x7300,	// (0x0009a9d3) main_cset_slider_pane_t4_ParamLimits

0x731a,	// (0x0009a9ed) main_cset_slider_pane_t5_ParamLimits

0x7338,	// (0x0009aa0b) main_cset_slider_pane_t6_ParamLimits

0x734f,	// (0x0009aa22) main_cset_slider_pane_t7_ParamLimits

0x737d,	// (0x0009aa50) main_cset_slider_pane_t8_ParamLimits

0x737d,	// (0x0009aa50) main_cset_slider_pane_t8

0x73a5,	// (0x0009aa78) main_cset_slider_pane_t9_ParamLimits

0x73a5,	// (0x0009aa78) main_cset_slider_pane_t9

0x73cd,	// (0x0009aaa0) main_cset_slider_pane_t10_ParamLimits

0x73cd,	// (0x0009aaa0) main_cset_slider_pane_t10

0x73f5,	// (0x0009aac8) main_cset_slider_pane_t11_ParamLimits

0x73f5,	// (0x0009aac8) main_cset_slider_pane_t11

0x741f,	// (0x0009aaf2) main_cset_slider_pane_t12_ParamLimits

0x741f,	// (0x0009aaf2) main_cset_slider_pane_t12

0x743c,	// (0x0009ab0f) main_cset_slider_pane_t13_ParamLimits

0x743c,	// (0x0009ab0f) main_cset_slider_pane_t13

0xf9a6,	// (0x000a3079) main_cset_slider_pane_t_ParamLimits

0xe293,	// (0x000a1966) bg_popup_sub_pane_cp011

0xac21,	// (0x0009e2f4) main_cset_text_pane_g1

0xac29,	// (0x0009e2fc) main_cset_text_pane_t1

0xac37,	// (0x0009e30a) main_cset_text_pane_t2

0xac45,	// (0x0009e318) main_cset_text_pane_t3

0xac53,	// (0x0009e326) main_cset_text_pane_t4

0xac61,	// (0x0009e334) main_cset_text_pane_t5

0xac6f,	// (0x0009e342) main_cset_text_pane_t6

0xac7d,	// (0x0009e350) main_cset_text_pane_t7

0x0006,

0xfa3d,	// (0x000a3110) main_cset_text_pane_t

0xa0f0,	// (0x0009d7c3) main_cam4_burst_pane

0xa0f0,	// (0x0009d7c3) main_cam5_pane

0x70d7,	// (0x0009a7aa) bg_button_pane_cp019

0x70e0,	// (0x0009a7b3) bg_button_pane_cp020

0xaa3c,	// (0x0009e10f) main_cset_slider_pane_g7_ParamLimits

0xaa3c,	// (0x0009e10f) main_cset_slider_pane_g7

0xaa48,	// (0x0009e11b) main_cset_slider_pane_g8_ParamLimits

0xaa48,	// (0x0009e11b) main_cset_slider_pane_g8

0x7250,	// (0x0009a923) main_cset_slider_pane_g9_ParamLimits

0x7250,	// (0x0009a923) main_cset_slider_pane_g9

0x725c,	// (0x0009a92f) main_cset_slider_pane_g10_ParamLimits

0x725c,	// (0x0009a92f) main_cset_slider_pane_g10

0x7268,	// (0x0009a93b) main_cset_slider_pane_g11_ParamLimits

0x7268,	// (0x0009a93b) main_cset_slider_pane_g11

0x7274,	// (0x0009a947) main_cset_slider_pane_g12_ParamLimits

0x7274,	// (0x0009a947) main_cset_slider_pane_g12

0x7280,	// (0x0009a953) main_cset_slider_pane_g13_ParamLimits

0x7280,	// (0x0009a953) main_cset_slider_pane_g13

0x728c,	// (0x0009a95f) main_cset_slider_pane_g14_ParamLimits

0x728c,	// (0x0009a95f) main_cset_slider_pane_g14

0x7298,	// (0x0009a96b) main_cset_slider_pane_g15_ParamLimits

0x7298,	// (0x0009a96b) main_cset_slider_pane_g15

0xaa8e,	// (0x0009e161) main_cset_slider_pane_t14_ParamLimits

0xaa8e,	// (0x0009e161) main_cset_slider_pane_t14

0xaac7,	// (0x0009e19a) main_cset_slider_pane_t15_ParamLimits

0xaac7,	// (0x0009e19a) main_cset_slider_pane_t15

0x7928,	// (0x0009affb) aid_cam4_burst_size_cell_ParamLimits

0x7928,	// (0x0009affb) aid_cam4_burst_size_cell

0x7948,	// (0x0009b01b) grid_cam4_burst_pane_ParamLimits

0x7948,	// (0x0009b01b) grid_cam4_burst_pane

0x7982,	// (0x0009b055) linegrid_cam4_burst_pane_ParamLimits

0x7982,	// (0x0009b055) linegrid_cam4_burst_pane

0xac8b,	// (0x0009e35e) scroll_pane_cp30_ParamLimits

0xac8b,	// (0x0009e35e) scroll_pane_cp30

0x79a4,	// (0x0009b077) cell_cam4_burst_pane_ParamLimits

0x79a4,	// (0x0009b077) cell_cam4_burst_pane

0xac97,	// (0x0009e36a) linegrid_cam4_burst_pane_g1_ParamLimits

0xac97,	// (0x0009e36a) linegrid_cam4_burst_pane_g1

0x79f9,	// (0x0009b0cc) linegrid_cam4_burst_pane_g2_ParamLimits

0x79f9,	// (0x0009b0cc) linegrid_cam4_burst_pane_g2

0xaca4,	// (0x0009e377) linegrid_cam4_burst_pane_g3_ParamLimits

0xaca4,	// (0x0009e377) linegrid_cam4_burst_pane_g3

0x0002,

0xfa4c,	// (0x000a311f) linegrid_cam4_burst_pane_g_ParamLimits

0xfa4c,	// (0x000a311f) linegrid_cam4_burst_pane_g

0x7a0a,	// (0x0009b0dd) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x7a0a,	// (0x0009b0dd) linegrid_cam4_burst_pane_g3_copy1

0xacb1,	// (0x0009e384) linegrid_cam4_burst_pane_g4_ParamLimits

0xacb1,	// (0x0009e384) linegrid_cam4_burst_pane_g4

0x7a28,	// (0x0009b0fb) linegrid_cam4_burst_pane_g5_ParamLimits

0x7a28,	// (0x0009b0fb) linegrid_cam4_burst_pane_g5

0x7a39,	// (0x0009b10c) linegrid_cam4_burst_pane_g6_ParamLimits

0x7a39,	// (0x0009b10c) linegrid_cam4_burst_pane_g6

0xacbe,	// (0x0009e391) linegrid_cam4_burst_pane_g7_ParamLimits

0xacbe,	// (0x0009e391) linegrid_cam4_burst_pane_g7

0x7a50,	// (0x0009b123) cell_cam4_burst_pane_g1

0xacd7,	// (0x0009e3aa) main_cam5_pane_t1_ParamLimits

0xacd7,	// (0x0009e3aa) main_cam5_pane_t1

0xace9,	// (0x0009e3bc) main_cam5_pane_t2_ParamLimits

0xace9,	// (0x0009e3bc) main_cam5_pane_t2

0xacfb,	// (0x0009e3ce) main_cam5_pane_t3_ParamLimits

0xacfb,	// (0x0009e3ce) main_cam5_pane_t3

0xad0d,	// (0x0009e3e0) main_cam5_pane_t4_ParamLimits

0xad0d,	// (0x0009e3e0) main_cam5_pane_t4

0xad25,	// (0x0009e3f8) main_cam5_pane_t5_ParamLimits

0xad25,	// (0x0009e3f8) main_cam5_pane_t5

0xad39,	// (0x0009e40c) main_cam5_pane_t6_ParamLimits

0xad39,	// (0x0009e40c) main_cam5_pane_t6

0xad4d,	// (0x0009e420) main_cam5_pane_t7_ParamLimits

0xad4d,	// (0x0009e420) main_cam5_pane_t7

0xad5f,	// (0x0009e432) main_cam5_pane_t8_ParamLimits

0xad5f,	// (0x0009e432) main_cam5_pane_t8

0xad7d,	// (0x0009e450) main_cam5_pane_t9_ParamLimits

0xad7d,	// (0x0009e450) main_cam5_pane_t9

0xad8f,	// (0x0009e462) main_cam5_pane_t10_ParamLimits

0xad8f,	// (0x0009e462) main_cam5_pane_t10

0xada1,	// (0x0009e474) main_cam5_pane_t11_ParamLimits

0xada1,	// (0x0009e474) main_cam5_pane_t11

0xadb5,	// (0x0009e488) main_cam5_pane_t12_ParamLimits

0xadb5,	// (0x0009e488) main_cam5_pane_t12

0xadcc,	// (0x0009e49f) main_cam5_pane_t13_ParamLimits

0xadcc,	// (0x0009e49f) main_cam5_pane_t13

0x000c,

0xfa58,	// (0x000a312b) main_cam5_pane_t_ParamLimits

0xfa58,	// (0x000a312b) main_cam5_pane_t

0x093e,	// (0x00094011) popup_scut_keymap_window_ParamLimits

0x093e,	// (0x00094011) popup_scut_keymap_window

0x7a63,	// (0x0009b136) aid_size_cell_brow_shortcut

0xcc64,	// (0x000a0337) bg_popup_window_pane_cp010

0x7a6f,	// (0x0009b142) grid_scut_pane

0x7a7b,	// (0x0009b14e) cell_scut_pane_ParamLimits

0x7a7b,	// (0x0009b14e) cell_scut_pane

0x7a94,	// (0x0009b167) cell_scut_pane_g1

0xadef,	// (0x0009e4c2) cell_scut_pane_t1

0xadfe,	// (0x0009e4d1) cell_scut_pane_t2

0x7a9d,	// (0x0009b170) cell_scut_pane_t3

0x0002,

0xfa73,	// (0x000a3146) cell_scut_pane_t

0x4e8d,	// (0x00098560) main_mup3_pane_g8_ParamLimits

0x4e8d,	// (0x00098560) main_mup3_pane_g8

0x6abd,	// (0x0009a190) area_vitu2_query_pane_ParamLimits

0x6abd,	// (0x0009a190) area_vitu2_query_pane

0x77d0,	// (0x0009aea3) input_focus_pane_cp08

0xae0d,	// (0x0009e4e0) area_vitu2_query_pane_g1

0x7aab,	// (0x0009b17e) area_vitu2_query_pane_g2

0x0001,

0xfa7a,	// (0x000a314d) area_vitu2_query_pane_g

0x7abe,	// (0x0009b191) area_vitu2_query_pane_t1_ParamLimits

0x7abe,	// (0x0009b191) area_vitu2_query_pane_t1

0x7ad2,	// (0x0009b1a5) area_vitu2_query_pane_t2_ParamLimits

0x7ad2,	// (0x0009b1a5) area_vitu2_query_pane_t2

0x7ae6,	// (0x0009b1b9) area_vitu2_query_pane_t3_ParamLimits

0x7ae6,	// (0x0009b1b9) area_vitu2_query_pane_t3

0xae19,	// (0x0009e4ec) area_vitu2_query_pane_t4_ParamLimits

0xae19,	// (0x0009e4ec) area_vitu2_query_pane_t4

0xae41,	// (0x0009e514) area_vitu2_query_pane_t5_ParamLimits

0xae41,	// (0x0009e514) area_vitu2_query_pane_t5

0xae69,	// (0x0009e53c) area_vitu2_query_pane_t6_ParamLimits

0xae69,	// (0x0009e53c) area_vitu2_query_pane_t6

0x0006,

0xfa7f,	// (0x000a3152) area_vitu2_query_pane_t_ParamLimits

0xfa7f,	// (0x000a3152) area_vitu2_query_pane_t

0x7b0e,	// (0x0009b1e1) bg_button_pane_cp018

0x7b1c,	// (0x0009b1ef) bg_button_pane_cp021

0x7b28,	// (0x0009b1fb) bg_button_pane_cp022

0x7b39,	// (0x0009b20c) input_focus_pane_cp09

0x27a8,	// (0x00095e7b) aid_size_touch_mv_arrow_left

0x27d1,	// (0x00095ea4) aid_size_touch_mv_arrow_right

0x72b0,	// (0x0009a983) main_cset_slider_pane_g16_ParamLimits

0x72b0,	// (0x0009a983) main_cset_slider_pane_g16

0x72be,	// (0x0009a991) main_cset_slider_pane_g17_ParamLimits

0x72be,	// (0x0009a991) main_cset_slider_pane_g17

0x7a50,	// (0x0009b123) cell_cam4_burst_pane_g1_ParamLimits

0xe293,	// (0x000a1966) compa_mode_pane

0x74da,	// (0x0009abad) popup_vtel_slider_window_g3_ParamLimits

0x74da,	// (0x0009abad) popup_vtel_slider_window_g3

0x74f1,	// (0x0009abc4) popup_vtel_slider_window_g4_ParamLimits

0x74f1,	// (0x0009abc4) popup_vtel_slider_window_g4

0x7508,	// (0x0009abdb) popup_vtel_slider_window_t1_ParamLimits

0x7508,	// (0x0009abdb) popup_vtel_slider_window_t1

0xa0f0,	// (0x0009d7c3) main_cl_pane

0xa59d,	// (0x0009dc70) popup_imed_adjust2_window_ParamLimits

0xe105,	// (0x000a17d8) bg_tb_trans_pane_cp05_ParamLimits

0x5a86,	// (0x00099159) popup_imed_adjust2_window_g1_ParamLimits

0x5a95,	// (0x00099168) popup_imed_adjust2_window_g2_ParamLimits

0x5a95,	// (0x00099168) popup_imed_adjust2_window_g2

0x5aa1,	// (0x00099174) popup_imed_adjust2_window_g3_ParamLimits

0x5aa1,	// (0x00099174) popup_imed_adjust2_window_g3

0x0002,

0xf7ea,	// (0x000a2ebd) popup_imed_adjust2_window_g_ParamLimits

0xf7ea,	// (0x000a2ebd) popup_imed_adjust2_window_g

0x5aad,	// (0x00099180) popup_imed_adjust2_window_t1_ParamLimits

0x5ac5,	// (0x00099198) slider_imed_adjust_pane_ParamLimits

0x5ad9,	// (0x000991ac) slider_imed_adjust_pane_g1_ParamLimits

0x5ae9,	// (0x000991bc) slider_imed_adjust_pane_g2_ParamLimits

0x5af9,	// (0x000991cc) slider_imed_adjust_pane_g3_ParamLimits

0x5b0a,	// (0x000991dd) slider_imed_adjust_pane_g4_ParamLimits

0xf7f1,	// (0x000a2ec4) slider_imed_adjust_pane_g_ParamLimits

0x682b,	// (0x00099efe) aid_touch_area_cam4_ParamLimits

0x682b,	// (0x00099efe) aid_touch_area_cam4

0xa909,	// (0x0009dfdc) battery_pane_cp01

0x68fd,	// (0x00099fd0) main_camera4_pane_g6_ParamLimits

0x68fd,	// (0x00099fd0) main_camera4_pane_g6

0x6927,	// (0x00099ffa) main_camera4_pane_t2_ParamLimits

0x6927,	// (0x00099ffa) main_camera4_pane_t2

0x0001,

0xf8f4,	// (0x000a2fc7) main_camera4_pane_t_ParamLimits

0xf8f4,	// (0x000a2fc7) main_camera4_pane_t

0x6970,	// (0x0009a043) aid_touch_area_vid4_ParamLimits

0x6970,	// (0x0009a043) aid_touch_area_vid4

0x69c4,	// (0x0009a097) main_video4_pane_g5_ParamLimits

0x69c4,	// (0x0009a097) main_video4_pane_g5

0x69e9,	// (0x0009a0bc) vid4_progress_pane_ParamLimits

0x69e9,	// (0x0009a0bc) vid4_progress_pane

0xaa54,	// (0x0009e127) main_cset_slider_pane_g18_ParamLimits

0xaa54,	// (0x0009e127) main_cset_slider_pane_g18

0xaccb,	// (0x0009e39e) cell_cam4_burst_pane_g2_ParamLimits

0xaccb,	// (0x0009e39e) cell_cam4_burst_pane_g2

0x0001,

0xfa53,	// (0x000a3126) cell_cam4_burst_pane_g_ParamLimits

0xfa53,	// (0x000a3126) cell_cam4_burst_pane_g

0xea13,	// (0x000a20e6) bg_cl_pane_ParamLimits

0xea13,	// (0x000a20e6) bg_cl_pane

0x7b4a,	// (0x0009b21d) cl_header_pane_ParamLimits

0x7b4a,	// (0x0009b21d) cl_header_pane

0x7b5e,	// (0x0009b231) cl_listscroll_pane_ParamLimits

0x7b5e,	// (0x0009b231) cl_listscroll_pane

0xaeb5,	// (0x0009e588) bg_cl_pane_g1

0xaebd,	// (0x0009e590) bg_cl_pane_g2

0xaec5,	// (0x0009e598) bg_cl_pane_g3

0xaecd,	// (0x0009e5a0) bg_cl_pane_g4

0xaed5,	// (0x0009e5a8) bg_cl_pane_g5

0xaedd,	// (0x0009e5b0) bg_cl_pane_g6

0xaee5,	// (0x0009e5b8) bg_cl_pane_g7

0xaeed,	// (0x0009e5c0) bg_cl_pane_g8

0xaef5,	// (0x0009e5c8) bg_cl_pane_g9

0x0008,

0xfa8e,	// (0x000a3161) bg_cl_pane_g

0x7b6e,	// (0x0009b241) aid_height_cl_leading_ParamLimits

0x7b6e,	// (0x0009b241) aid_height_cl_leading

0x7b7a,	// (0x0009b24d) aid_height_cl_text_ParamLimits

0x7b7a,	// (0x0009b24d) aid_height_cl_text

0xea5b,	// (0x000a212e) bg_cl_header_pane_ParamLimits

0xea5b,	// (0x000a212e) bg_cl_header_pane

0x7b99,	// (0x0009b26c) cl_header_pane_g1_ParamLimits

0x7b99,	// (0x0009b26c) cl_header_pane_g1

0x7baf,	// (0x0009b282) cl_header_pane_t1_ParamLimits

0x7baf,	// (0x0009b282) cl_header_pane_t1

0xaefd,	// (0x0009e5d0) cl_list_pane

0xaa27,	// (0x0009e0fa) hc_scroll_pane_cp01

0xef0b,	// (0x000a25de) bg_cl_header_pane_g1

0x6d93,	// (0x0009a466) bg_cl_header_pane_g2

0xef2b,	// (0x000a25fe) bg_cl_header_pane_g3

0x6da3,	// (0x0009a476) bg_cl_header_pane_g4

0x6d9b,	// (0x0009a46e) bg_cl_header_pane_g5

0xab98,	// (0x0009e26b) bg_cl_header_pane_g6

0x6dbb,	// (0x0009a48e) bg_cl_header_pane_g7

0x6dc3,	// (0x0009a496) bg_cl_header_pane_g8

0x6db3,	// (0x0009a486) bg_cl_header_pane_g9

0x0008,

0xfaa1,	// (0x000a3174) bg_cl_header_pane_g

0x7bc8,	// (0x0009b29b) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x7bc8,	// (0x0009b29b) hc_cl_list_double_graphic_heading_pane

0x7bdb,	// (0x0009b2ae) hc_cl_list_single_graphic_pane_ParamLimits

0x7bdb,	// (0x0009b2ae) hc_cl_list_single_graphic_pane

0x7bf3,	// (0x0009b2c6) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x7bf3,	// (0x0009b2c6) hc_cl_list_single_graphic_pane_g1

0x7bff,	// (0x0009b2d2) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x7bff,	// (0x0009b2d2) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfab4,	// (0x000a3187) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfab4,	// (0x000a3187) hc_cl_list_single_graphic_pane_g

0x7c13,	// (0x0009b2e6) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x7c13,	// (0x0009b2e6) hc_cl_list_single_graphic_pane_t1

0x7bf3,	// (0x0009b2c6) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x7bf3,	// (0x0009b2c6) hc_cl_list_double_graphic_heading_pane_g1

0x7c28,	// (0x0009b2fb) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x7c28,	// (0x0009b2fb) hc_cl_list_double_graphic_heading_pane_g2

0x7c3c,	// (0x0009b30f) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x7c3c,	// (0x0009b30f) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfab9,	// (0x000a318c) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfab9,	// (0x000a318c) hc_cl_list_double_graphic_heading_pane_g

0x7c50,	// (0x0009b323) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x7c50,	// (0x0009b323) hc_cl_list_double_graphic_heading_pane_t1

0x7c65,	// (0x0009b338) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x7c65,	// (0x0009b338) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfac0,	// (0x000a3193) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfac0,	// (0x000a3193) hc_cl_list_double_graphic_heading_pane_t

0x7c7a,	// (0x0009b34d) vid4_progress_pane_g1

0x7c8c,	// (0x0009b35f) vid4_progress_pane_g2

0xa567,	// (0x0009dc3a) vid4_progress_pane_g3

0xd1ef,	// (0x000a08c2) vid4_progress_pane_g4

0x0004,

0xfac5,	// (0x000a3198) vid4_progress_pane_g

0xd20d,	// (0x000a08e0) vid4_progress_pane_t1

0xd222,	// (0x000a08f5) vid4_progress_pane_t2

0x0002,

0xfad0,	// (0x000a31a3) vid4_progress_pane_t

0xd24d,	// (0x000a0920) wait_bar_pane_cp07

0x4497,	// (0x00097b6a) blid_firmament_pane_ParamLimits

0x44da,	// (0x00097bad) popup_blid_sat_info2_window_g1

0x44fe,	// (0x00097bd1) popup_blid_sat_info2_window_t3

0x450c,	// (0x00097bdf) popup_blid_sat_info2_window_t4

0x451a,	// (0x00097bed) popup_blid_sat_info2_window_t5

0x4528,	// (0x00097bfb) popup_blid_sat_info2_window_t6

0x4538,	// (0x00097c0b) popup_blid_sat_info2_window_t7

0x4546,	// (0x00097c19) popup_blid_sat_info2_window_t8

0x4554,	// (0x00097c27) popup_blid_sat_info2_window_t9

0x4562,	// (0x00097c35) popup_blid_sat_info2_window_t10

0x4700,	// (0x00097dd3) aid_firma_cardinal_ParamLimits

0x4714,	// (0x00097de7) blid_firmament_pane_t1_ParamLimits

0x472b,	// (0x00097dfe) blid_firmament_pane_t2_ParamLimits

0x4742,	// (0x00097e15) blid_firmament_pane_t3_ParamLimits

0x4759,	// (0x00097e2c) blid_firmament_pane_t4_ParamLimits

0xf6e3,	// (0x000a2db6) blid_firmament_pane_t_ParamLimits

0x4770,	// (0x00097e43) blid_sat_info_pane_ParamLimits

0xa0e2,	// (0x0009d7b5) main_cam_set_pane_ParamLimits

0x58e0,	// (0x00098fb3) aid_size_cell_colour_35_ParamLimits

0x5900,	// (0x00098fd3) aid_size_cell_colour_112_ParamLimits

0x5920,	// (0x00098ff3) aid_size_cell_effect_ParamLimits

0xe105,	// (0x000a17d8) bg_tb_trans_pane_cp02_ParamLimits

0xa26a,	// (0x0009d93d) heading_imed_pane_ParamLimits

0x5940,	// (0x00099013) listscroll_imed_pane_ParamLimits

0xd733,	// (0x000a0e06) popup_call2_audio_first_window_g5_ParamLimits

0xd733,	// (0x000a0e06) popup_call2_audio_first_window_g5

0x63e4,	// (0x00099ab7) aid_size_touch_image3_arrow_left_ParamLimits

0x63e4,	// (0x00099ab7) aid_size_touch_image3_arrow_left

0x6410,	// (0x00099ae3) aid_size_touch_image3_arrow_right_ParamLimits

0x6410,	// (0x00099ae3) aid_size_touch_image3_arrow_right

0xd238,	// (0x000a090b) vid4_progress_pane_t3

0x6026,	// (0x000996f9) main_hwr_training_symbol_option_pane_ParamLimits

0x6026,	// (0x000996f9) main_hwr_training_symbol_option_pane

0x6046,	// (0x00099719) popup_hwr_training_preview_window_ParamLimits

0x6046,	// (0x00099719) popup_hwr_training_preview_window

0x6093,	// (0x00099766) hwr_training_navi_pane_g5_ParamLimits

0x6093,	// (0x00099766) hwr_training_navi_pane_g5

0x6cdb,	// (0x0009a3ae) popup_char_count_window

0xa0e2,	// (0x0009d7b5) bg_popup_sub_pane_cp20_ParamLimits

0x7622,	// (0x0009acf5) list_vitu2_match_list_pane_ParamLimits

0x7631,	// (0x0009ad04) vitu2_page_scroll_pane_ParamLimits

0x7631,	// (0x0009ad04) vitu2_page_scroll_pane

0xaf60,	// (0x0009e633) list_single_hwr_training_symbol_option_pane_ParamLimits

0xaf60,	// (0x0009e633) list_single_hwr_training_symbol_option_pane

0xaf73,	// (0x0009e646) list_single_hwr_training_symbol_option_pane_g1

0xaf7b,	// (0x0009e64e) list_single_hwr_training_symbol_option_pane_t1

0xaf89,	// (0x0009e65c) bg_button_pane_cp023

0xaf92,	// (0x0009e665) bg_button_pane_cp024

0x7c9e,	// (0x0009b371) vitu2_page_scroll_pane_g1

0x7ca6,	// (0x0009b379) vitu2_page_scroll_pane_g2

0x0001,

0xfad7,	// (0x000a31aa) vitu2_page_scroll_pane_g

0x7cb0,	// (0x0009b383) vitu2_page_scroll_pane_t1

0xe28a,	// (0x000a195d) popup_char_count_window_g1

0xafc5,	// (0x0009e698) popup_char_count_window_g2

0xafce,	// (0x0009e6a1) popup_char_count_window_g3

0x0002,

0xfadc,	// (0x000a31af) popup_char_count_window_g

0xafd7,	// (0x0009e6aa) popup_char_count_window_t1

0xa0f0,	// (0x0009d7c3) main_vded2_pane

0x5a72,	// (0x00099145) aid_size_cell_imed_line

0x5a7c,	// (0x0009914f) grid_imed_line_width_pane

0xa9d1,	// (0x0009e0a4) vid4_indicators_pane_g4

0xafe5,	// (0x0009e6b8) cell_imed_line_width_pane_ParamLimits

0xafe5,	// (0x0009e6b8) cell_imed_line_width_pane

0xaffb,	// (0x0009e6ce) cell_imed_line_width_pane_g1

0xa648,	// (0x0009dd1b) cell_imed_line_width_pane_g2

0x0001,

0xfae3,	// (0x000a31b6) cell_imed_line_width_pane_g

0x7cbf,	// (0x0009b392) main_vded2_pane_g1_ParamLimits

0x7cbf,	// (0x0009b392) main_vded2_pane_g1

0x7cda,	// (0x0009b3ad) main_vded2_pane_g2_ParamLimits

0x7cda,	// (0x0009b3ad) main_vded2_pane_g2

0x0001,

0xfae8,	// (0x000a31bb) main_vded2_pane_g_ParamLimits

0xfae8,	// (0x000a31bb) main_vded2_pane_g

0x7cec,	// (0x0009b3bf) vded2_slider_pane_ParamLimits

0x7cec,	// (0x0009b3bf) vded2_slider_pane

0x7cfc,	// (0x0009b3cf) aid_size_touch_vded2_end

0x7d06,	// (0x0009b3d9) aid_size_touch_vded2_playhead

0xb004,	// (0x0009e6d7) aid_size_touch_vded2_start

0xb00c,	// (0x0009e6df) vded2_slider_bg_pane

0xb015,	// (0x0009e6e8) vded2_slider_pane_g1

0xb01e,	// (0x0009e6f1) vded2_slider_pane_g2

0x7d10,	// (0x0009b3e3) vded2_slider_pane_g3

0x0002,

0xfaed,	// (0x000a31c0) vded2_slider_pane_g

0xb026,	// (0x0009e6f9) vded2_slider_bg_pane_g1

0xb02f,	// (0x0009e702) vded2_slider_bg_pane_g2

0xb038,	// (0x0009e70b) vded2_slider_bg_pane_g3

0x0002,

0xfaf4,	// (0x000a31c7) vded2_slider_bg_pane_g

0x2ed9,	// (0x000965ac) aid_postcard_touch_down_pane_ParamLimits

0x2ed9,	// (0x000965ac) aid_postcard_touch_down_pane

0x2ef1,	// (0x000965c4) aid_postcard_touch_up_pane_ParamLimits

0x2ef1,	// (0x000965c4) aid_postcard_touch_up_pane

0xa0f0,	// (0x0009d7c3) main_blid2_pane

0xa57f,	// (0x0009dc52) popup_blid2_search_window

0xe293,	// (0x000a1966) blid2_gps_pane

0xe293,	// (0x000a1966) blid2_navig_pane

0xe293,	// (0x000a1966) blid2_search_pane

0xe293,	// (0x000a1966) blid2_tripm_pane

0x7d1b,	// (0x0009b3ee) blid2_search_pane_g1_ParamLimits

0x7d1b,	// (0x0009b3ee) blid2_search_pane_g1

0x7d2e,	// (0x0009b401) blid2_search_pane_t1_ParamLimits

0x7d2e,	// (0x0009b401) blid2_search_pane_t1

0x7d40,	// (0x0009b413) aid_size_cell_blid2_gps_ParamLimits

0x7d40,	// (0x0009b413) aid_size_cell_blid2_gps

0x7d58,	// (0x0009b42b) blid2_gps_pane_g1_ParamLimits

0x7d58,	// (0x0009b42b) blid2_gps_pane_g1

0x7d6c,	// (0x0009b43f) grid_blid2_satellite_pane_ParamLimits

0x7d6c,	// (0x0009b43f) grid_blid2_satellite_pane

0x7d84,	// (0x0009b457) blid2_navig_pane_g1_ParamLimits

0x7d84,	// (0x0009b457) blid2_navig_pane_g1

0x7d90,	// (0x0009b463) blid2_navig_pane_t1_ParamLimits

0x7d90,	// (0x0009b463) blid2_navig_pane_t1

0x7dab,	// (0x0009b47e) blid2_navig_pane_t2_ParamLimits

0x7dab,	// (0x0009b47e) blid2_navig_pane_t2

0x0001,

0xfafb,	// (0x000a31ce) blid2_navig_pane_t_ParamLimits

0xfafb,	// (0x000a31ce) blid2_navig_pane_t

0x7dc6,	// (0x0009b499) blid2_navig_ring_pane_ParamLimits

0x7dc6,	// (0x0009b499) blid2_navig_ring_pane

0x7de1,	// (0x0009b4b4) blid2_speed_pane_ParamLimits

0x7de1,	// (0x0009b4b4) blid2_speed_pane

0x7ded,	// (0x0009b4c0) blid2_tripm_pane_g1_ParamLimits

0x7ded,	// (0x0009b4c0) blid2_tripm_pane_g1

0x7e08,	// (0x0009b4db) blid2_tripm_pane_g2_ParamLimits

0x7e08,	// (0x0009b4db) blid2_tripm_pane_g2

0x7e1c,	// (0x0009b4ef) blid2_tripm_pane_g3_ParamLimits

0x7e1c,	// (0x0009b4ef) blid2_tripm_pane_g3

0x7e30,	// (0x0009b503) blid2_tripm_pane_g4_ParamLimits

0x7e30,	// (0x0009b503) blid2_tripm_pane_g4

0x7e44,	// (0x0009b517) blid2_tripm_pane_g5_ParamLimits

0x7e44,	// (0x0009b517) blid2_tripm_pane_g5

0x0005,

0xfb00,	// (0x000a31d3) blid2_tripm_pane_g_ParamLimits

0xfb00,	// (0x000a31d3) blid2_tripm_pane_g

0x7e6a,	// (0x0009b53d) blid2_tripm_pane_t1_ParamLimits

0x7e6a,	// (0x0009b53d) blid2_tripm_pane_t1

0x7e83,	// (0x0009b556) blid2_tripm_pane_t2_ParamLimits

0x7e83,	// (0x0009b556) blid2_tripm_pane_t2

0x7e9c,	// (0x0009b56f) blid2_tripm_pane_t3_ParamLimits

0x7e9c,	// (0x0009b56f) blid2_tripm_pane_t3

0x0003,

0xfb0d,	// (0x000a31e0) blid2_tripm_pane_t_ParamLimits

0xfb0d,	// (0x000a31e0) blid2_tripm_pane_t

0x7ee3,	// (0x0009b5b6) cell_blid2_satellite_pane_ParamLimits

0x7ee3,	// (0x0009b5b6) cell_blid2_satellite_pane

0x7eff,	// (0x0009b5d2) cell_blid2_satellite_pane_g1

0xb041,	// (0x0009e714) cell_blid2_satellite_pane_t1

0x4780,	// (0x00097e53) blid2_speed_pane_g1

0xb04f,	// (0x0009e722) blid2_speed_pane_t1

0xb05d,	// (0x0009e730) blid2_speed_pane_t2

0x0001,

0xfb16,	// (0x000a31e9) blid2_speed_pane_t

0x4780,	// (0x00097e53) blid2_navig_ring_pane_g1

0x7f08,	// (0x0009b5db) blid2_navig_ring_pane_g2

0x7f10,	// (0x0009b5e3) blid2_navig_ring_pane_g3

0x7f18,	// (0x0009b5eb) blid2_navig_ring_pane_g4

0x7f20,	// (0x0009b5f3) blid2_navig_ring_pane_g5

0x0004,

0xfb1b,	// (0x000a31ee) blid2_navig_ring_pane_g

0xe293,	// (0x000a1966) bg_popup_window_pane_cp011

0xb06b,	// (0x0009e73e) popup_blid2_search_window_g1

0xb073,	// (0x0009e746) popup_blid2_search_window_t1

0xb081,	// (0x0009e754) popup_blid2_search_window_t2

0x0001,

0xfb26,	// (0x000a31f9) popup_blid2_search_window_t

0xee1a,	// (0x000a24ed) main_browser_pane_g1

0xea13,	// (0x000a20e6) main_browser_pane_ParamLimits

0xa0e2,	// (0x0009d7b5) bg_button_pane_cp011_ParamLimits

0x6d75,	// (0x0009a448) cell_vitu2_function_pane_g1_ParamLimits

0xe105,	// (0x000a17d8) bg_popup_sub_pane_cp22_ParamLimits

0x77d0,	// (0x0009aea3) input_focus_pane_cp08_ParamLimits

0x77e7,	// (0x0009aeba) popup_vitu2_query_button_pane_ParamLimits

0x77e7,	// (0x0009aeba) popup_vitu2_query_button_pane

0x77f8,	// (0x0009aecb) popup_vitu2_query_input_button_pane

0xac15,	// (0x0009e2e8) popup_vitu2_query_window_g1_ParamLimits

0x7802,	// (0x0009aed5) popup_vitu2_query_window_g2_ParamLimits

0xfa27,	// (0x000a30fa) popup_vitu2_query_window_g_ParamLimits

0xe293,	// (0x000a1966) bg_button_pane_cp026

0x7f28,	// (0x0009b5fb) popup_vitu2_query_input_button_pane_g1

0xe293,	// (0x000a1966) bg_button_pane_cp025

0xb08f,	// (0x0009e762) popup_vitu2_query_button_pane_t1

0x4ad7,	// (0x000981aa) main_mp3_pane_t6

0x4aed,	// (0x000981c0) popup_slider_window_cp01

0xa935,	// (0x0009e008) cam4_battery_pane

0xa98a,	// (0x0009e05d) cam4_battery_pane_cp02

0xd1e7,	// (0x000a08ba) cam4_battery_pane_cp01

0xd1e7,	// (0x000a08ba) cam4_battery_pane_cp03

0xa8b3,	// (0x0009df86) cam4_battery_pane_g1

0x4780,	// (0x00097e53) cam4_battery_pane_g2

0x0001,

0xfb2b,	// (0x000a31fe) cam4_battery_pane_g

0x4570,	// (0x00097c43) popup_blid_sat_info2_window_t11

0x27a8,	// (0x00095e7b) aid_size_touch_mv_arrow_left_ParamLimits

0x27d1,	// (0x00095ea4) aid_size_touch_mv_arrow_right_ParamLimits

0xcbc4,	// (0x000a0297) navi_pane_g1_ParamLimits

0x2810,	// (0x00095ee3) navi_pane_g2_ParamLimits

0x283e,	// (0x00095f11) navi_pane_g3_ParamLimits

0xf3f5,	// (0x000a2ac8) navi_pane_g_ParamLimits

0x2898,	// (0x00095f6b) navi_pane_mv_t1_ParamLimits

0x597e,	// (0x00099051) grid_imed_effect_pane_ParamLimits

0x168f,	// (0x00094d62) aid_placing_vt_slider_lsc

0xed65,	// (0x000a2438) aid_placing_vt_slider_prt

0xea5b,	// (0x000a212e) bg_tb_trans_pane_cp01_ParamLimits

0x4945,	// (0x00098018) popup_image_details_window_g1_ParamLimits

0x4958,	// (0x0009802b) popup_image_details_window_g2_ParamLimits

0x496d,	// (0x00098040) popup_image_details_window_g3_ParamLimits

0x496d,	// (0x00098040) popup_image_details_window_g3

0xf728,	// (0x000a2dfb) popup_image_details_window_g_ParamLimits

0x4981,	// (0x00098054) popup_image_details_window_t1_ParamLimits

0x4993,	// (0x00098066) popup_image_details_window_t2_ParamLimits

0x49ac,	// (0x0009807f) popup_image_details_window_t3_ParamLimits

0x49c0,	// (0x00098093) popup_image_details_window_t4_ParamLimits

0x49db,	// (0x000980ae) popup_image_details_window_t5_ParamLimits

0xf72f,	// (0x000a2e02) popup_image_details_window_t_ParamLimits

0x7b86,	// (0x0009b259) cl_header_name_pane_ParamLimits

0x7b86,	// (0x0009b259) cl_header_name_pane

0x7f30,	// (0x0009b603) cl_header_name_pane_t1_ParamLimits

0x7f30,	// (0x0009b603) cl_header_name_pane_t1

0x7f51,	// (0x0009b624) cl_header_name_pane_t2_ParamLimits

0x7f51,	// (0x0009b624) cl_header_name_pane_t2

0x7f93,	// (0x0009b666) cl_header_name_pane_t3_ParamLimits

0x7f93,	// (0x0009b666) cl_header_name_pane_t3

0x0002,

0xfb30,	// (0x000a3203) cl_header_name_pane_t_ParamLimits

0xfb30,	// (0x000a3203) cl_header_name_pane_t

0x2869,	// (0x00095f3c) navi_pane_mv_g2_ParamLimits

0x6c6a,	// (0x0009a33d) field_vitu2_entry_pane_g1_ParamLimits

0x6c76,	// (0x0009a349) field_vitu2_entry_pane_g2_ParamLimits

0x6c82,	// (0x0009a355) field_vitu2_entry_pane_g3_ParamLimits

0x6c82,	// (0x0009a355) field_vitu2_entry_pane_g3

0xf926,	// (0x000a2ff9) field_vitu2_entry_pane_g_ParamLimits

0x6cf1,	// (0x0009a3c4) cell_vitu2_itu_pane_g1_ParamLimits

0x6d01,	// (0x0009a3d4) cell_vitu2_itu_pane_g2_ParamLimits

0x6d01,	// (0x0009a3d4) cell_vitu2_itu_pane_g2

0x0001,

0xf932,	// (0x000a3005) cell_vitu2_itu_pane_g_ParamLimits

0xf932,	// (0x000a3005) cell_vitu2_itu_pane_g

0xa0e2,	// (0x0009d7b5) bg_vkb2_func_pane_cp05_ParamLimits

0xa0e2,	// (0x0009d7b5) bg_vkb2_func_pane_cp05

0xa0e2,	// (0x0009d7b5) bg_vkb2_func_pane_cp03

0xa0e2,	// (0x0009d7b5) bg_vkb2_func_pane_cp04

0xa0e2,	// (0x0009d7b5) bg_vkb2_func_pane_cp10_ParamLimits

0xa0e2,	// (0x0009d7b5) bg_vkb2_func_pane_cp10

0x7b28,	// (0x0009b1fb) bg_vkb2_func_pane_cp08

0x7b0e,	// (0x0009b1e1) bg_vkb2_func_pane_cp06

0x7b1c,	// (0x0009b1ef) bg_vkb2_func_pane_cp07

0xaf9b,	// (0x0009e66e) bg_vkb2_func_pane_cp11_ParamLimits

0xaf9b,	// (0x0009e66e) bg_vkb2_func_pane_cp11

0xafb0,	// (0x0009e683) bg_vkb2_func_pane_cp12_ParamLimits

0xafb0,	// (0x0009e683) bg_vkb2_func_pane_cp12

0xe293,	// (0x000a1966) bg_vkb2_func_pane_cp09

0x6d93,	// (0x0009a466) bg_vkb2_func_pane_g1

0xef2b,	// (0x000a25fe) bg_vkb2_func_pane_g2

0x6d9b,	// (0x0009a46e) bg_vkb2_func_pane_g3

0x6da3,	// (0x0009a476) bg_vkb2_func_pane_g4

0xab98,	// (0x0009e26b) bg_vkb2_func_pane_g5

0x6dbb,	// (0x0009a48e) bg_vkb2_func_pane_g6

0x6dc3,	// (0x0009a496) bg_vkb2_func_pane_g7

0x6db3,	// (0x0009a486) bg_vkb2_func_pane_g8

0xef0b,	// (0x000a25de) bg_vkb2_func_pane_g9

0x0008,

0xfb37,	// (0x000a320a) bg_vkb2_func_pane_g

0x7e58,	// (0x0009b52b) blid2_tripm_pane_g6_ParamLimits

0x7e58,	// (0x0009b52b) blid2_tripm_pane_g6

0x6268,	// (0x0009993b) mp4_progress_pane_g1

0x7ecf,	// (0x0009b5a2) blid2_tripm_values_pane_ParamLimits

0x7ecf,	// (0x0009b5a2) blid2_tripm_values_pane

0x7fc4,	// (0x0009b697) blid2_tripm_values_pane_t1

0x7fd2,	// (0x0009b6a5) blid2_tripm_values_pane_t2

0x7fe0,	// (0x0009b6b3) blid2_tripm_values_pane_t3

0x7fee,	// (0x0009b6c1) blid2_tripm_values_pane_t4

0x7ffc,	// (0x0009b6cf) blid2_tripm_values_pane_t5

0x800a,	// (0x0009b6dd) blid2_tripm_values_pane_t6

0x8018,	// (0x0009b6eb) blid2_tripm_values_pane_t7

0x8026,	// (0x0009b6f9) blid2_tripm_values_pane_t8

0x8034,	// (0x0009b707) blid2_tripm_values_pane_t9

0x0008,

0xfb4a,	// (0x000a321d) blid2_tripm_values_pane_t

0x16cc,	// (0x00094d9f) call_video_pane_t1_ParamLimits

0x16e6,	// (0x00094db9) call_video_pane_t2_ParamLimits

0xf27e,	// (0x000a2951) call_video_pane_t_ParamLimits

0x2ddc,	// (0x000964af) msg_header_pane_g1_ParamLimits

0xcdef,	// (0x000a04c2) msg_header_pane_g2_ParamLimits

0xcdef,	// (0x000a04c2) msg_header_pane_g2

0x0001,

0xf498,	// (0x000a2b6b) msg_header_pane_g_ParamLimits

0xf498,	// (0x000a2b6b) msg_header_pane_g

0xea13,	// (0x000a20e6) main_clock2_pane_ParamLimits

0x560d,	// (0x00098ce0) grid_clock2_toolbar_pane_ParamLimits

0x560d,	// (0x00098ce0) grid_clock2_toolbar_pane

0x560d,	// (0x00098ce0) listscroll_clock2_pane_ParamLimits

0x560d,	// (0x00098ce0) listscroll_clock2_pane

0x56f4,	// (0x00098dc7) main_clock2_pane_t3_ParamLimits

0x56f4,	// (0x00098dc7) main_clock2_pane_t3

0x5717,	// (0x00098dea) main_clock2_pane_t4_ParamLimits

0x5717,	// (0x00098dea) main_clock2_pane_t4

0xb09d,	// (0x0009e770) cell_clock2_toolbar_pane

0xb0a5,	// (0x0009e778) cell_clock2_toolbar_pane_cp01

0xb0a5,	// (0x0009e778) cell_clock2_toolbar_pane_cp02

0xb0ad,	// (0x0009e780) cell_clock2_toolbar_pane_cp03

0xb0b5,	// (0x0009e788) list_clock2_pane

0xcb2a,	// (0x000a01fd) scroll_pane_cp10

0xb0bd,	// (0x0009e790) list_single_clock2_pane_ParamLimits

0xb0bd,	// (0x0009e790) list_single_clock2_pane

0xcc64,	// (0x000a0337) list_highlight_pane_cp08

0xb0ca,	// (0x0009e79d) list_single_clock2_pane_t1

0xb0d8,	// (0x0009e7ab) list_single_clock2_pane_t2

0x0001,

0xfb5d,	// (0x000a3230) list_single_clock2_pane_t

0xe293,	// (0x000a1966) bg_button_pane_cp10

0xb0e6,	// (0x0009e7b9) cell_clock2_toolbar_pane_g1

0x2e65,	// (0x00096538) aid_main_viewer_pane_g1_ParamLimits

0x2e65,	// (0x00096538) aid_main_viewer_pane_g1

0x2e73,	// (0x00096546) aid_main_viewer_pane_g2_ParamLimits

0x2e73,	// (0x00096546) aid_main_viewer_pane_g2

0x2e81,	// (0x00096554) aid_main_viewer_pane_g3_ParamLimits

0x2e81,	// (0x00096554) aid_main_viewer_pane_g3

0x2e90,	// (0x00096563) aid_main_viewer_pane_g4_ParamLimits

0x2e90,	// (0x00096563) aid_main_viewer_pane_g4

0x0003,

0xf4a9,	// (0x000a2b7c) aid_main_viewer_pane_g_ParamLimits

0xf4a9,	// (0x000a2b7c) aid_main_viewer_pane_g

0x37e8,	// (0x00096ebb) main_calc_pane_ParamLimits

0x37fc,	// (0x00096ecf) main_dialer2_pane_ParamLimits

0xa0f0,	// (0x0009d7c3) main_cam6_pane

0xa0f0,	// (0x0009d7c3) main_vid6_pane

0x5619,	// (0x00098cec) listscroll_gen_pane_cp06_ParamLimits

0x5619,	// (0x00098cec) listscroll_gen_pane_cp06

0x573a,	// (0x00098e0d) main_clock2_pane_t5_ParamLimits

0x573a,	// (0x00098e0d) main_clock2_pane_t5

0x579c,	// (0x00098e6f) aid_call2_pane_cp10_ParamLimits

0x57ae,	// (0x00098e81) aid_call_pane_cp10_ParamLimits

0xcb99,	// (0x000a026c) popup_clock_analogue_window_cp10_g1_ParamLimits

0xcb99,	// (0x000a026c) popup_clock_analogue_window_cp10_g2_ParamLimits

0x57c0,	// (0x00098e93) popup_clock_analogue_window_cp10_g3_ParamLimits

0x57c0,	// (0x00098e93) popup_clock_analogue_window_cp10_g4_ParamLimits

0xcb99,	// (0x000a026c) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf7df,	// (0x000a2eb2) popup_clock_analogue_window_cp10_g_ParamLimits

0x57d6,	// (0x00098ea9) popup_clock_analogue_window_cp10_t1_ParamLimits

0x6391,	// (0x00099a64) cell_dialer2_keypad_pane_g2_ParamLimits

0x6391,	// (0x00099a64) cell_dialer2_keypad_pane_g2

0x0001,

0xf8c5,	// (0x000a2f98) cell_dialer2_keypad_pane_g_ParamLimits

0xf8c5,	// (0x000a2f98) cell_dialer2_keypad_pane_g

0x63ad,	// (0x00099a80) cell_dialer2_keypad_pane_t1

0x71a1,	// (0x0009a874) main_cset_text2_pane_ParamLimits

0x71a1,	// (0x0009a874) main_cset_text2_pane

0xae0d,	// (0x0009e4e0) area_vitu2_query_pane_g1_ParamLimits

0x7aab,	// (0x0009b17e) area_vitu2_query_pane_g2_ParamLimits

0xfa7a,	// (0x000a314d) area_vitu2_query_pane_g_ParamLimits

0xae91,	// (0x0009e564) area_vitu2_query_pane_t7_ParamLimits

0xae91,	// (0x0009e564) area_vitu2_query_pane_t7

0x7b0e,	// (0x0009b1e1) bg_button_pane_cp018_ParamLimits

0x7b1c,	// (0x0009b1ef) bg_button_pane_cp021_ParamLimits

0x7b28,	// (0x0009b1fb) bg_button_pane_cp022_ParamLimits

0x7b28,	// (0x0009b1fb) bg_vkb2_func_pane_cp08_ParamLimits

0x7b0e,	// (0x0009b1e1) bg_vkb2_func_pane_cp06_ParamLimits

0x7b1c,	// (0x0009b1ef) bg_vkb2_func_pane_cp07_ParamLimits

0x7b39,	// (0x0009b20c) input_focus_pane_cp09_ParamLimits

0xd261,	// (0x000a0934) cam6_autofocus_pane_ParamLimits

0xd261,	// (0x000a0934) cam6_autofocus_pane

0x8042,	// (0x0009b715) cam6_image_uncrop_pane_ParamLimits

0x8042,	// (0x0009b715) cam6_image_uncrop_pane

0x8051,	// (0x0009b724) cam6_indi_pane_ParamLimits

0x8051,	// (0x0009b724) cam6_indi_pane

0x8067,	// (0x0009b73a) cam6_mode_pane_ParamLimits

0x8067,	// (0x0009b73a) cam6_mode_pane

0x8079,	// (0x0009b74c) cam6_timer_pane_ParamLimits

0x8079,	// (0x0009b74c) cam6_timer_pane

0x8085,	// (0x0009b758) cam6_zoom_pane_ParamLimits

0x8085,	// (0x0009b758) cam6_zoom_pane

0x8093,	// (0x0009b766) cam6_mode_pane_g1_ParamLimits

0x8093,	// (0x0009b766) cam6_mode_pane_g1

0x80a3,	// (0x0009b776) cam6_mode_pane_g2_ParamLimits

0x80a3,	// (0x0009b776) cam6_mode_pane_g2

0x80b3,	// (0x0009b786) cam6_mode_pane_g3_ParamLimits

0x80b3,	// (0x0009b786) cam6_mode_pane_g3

0x80c3,	// (0x0009b796) cam6_mode_pane_g4_ParamLimits

0x80c3,	// (0x0009b796) cam6_mode_pane_g4

0x0003,

0xfb62,	// (0x000a3235) cam6_mode_pane_g_ParamLimits

0xfb62,	// (0x000a3235) cam6_mode_pane_g

0xb0ee,	// (0x0009e7c1) bg_tb_trans_pane_cp08_ParamLimits

0xb0ee,	// (0x0009e7c1) bg_tb_trans_pane_cp08

0xb0fc,	// (0x0009e7cf) cam6_battery_pane_ParamLimits

0xb0fc,	// (0x0009e7cf) cam6_battery_pane

0xb112,	// (0x0009e7e5) cam6_indi_pane_g1_ParamLimits

0xb112,	// (0x0009e7e5) cam6_indi_pane_g1

0xb124,	// (0x0009e7f7) cam6_indi_pane_g2_ParamLimits

0xb124,	// (0x0009e7f7) cam6_indi_pane_g2

0xb136,	// (0x0009e809) cam6_indi_pane_g3_ParamLimits

0xb136,	// (0x0009e809) cam6_indi_pane_g3

0x0002,

0xfb6b,	// (0x000a323e) cam6_indi_pane_g_ParamLimits

0xfb6b,	// (0x000a323e) cam6_indi_pane_g

0xb148,	// (0x0009e81b) cam6_indi_pane_t1_ParamLimits

0xb148,	// (0x0009e81b) cam6_indi_pane_t1

0x6a39,	// (0x0009a10c) cam6_autofocus_pane_g1

0x6a31,	// (0x0009a104) cam6_autofocus_pane_g2

0x6a49,	// (0x0009a11c) cam6_autofocus_pane_g3

0x6a41,	// (0x0009a114) cam6_autofocus_pane_g4

0x0003,

0xfb72,	// (0x000a3245) cam6_autofocus_pane_g

0xb16e,	// (0x0009e841) cam6_timer_pane_g1

0xb176,	// (0x0009e849) cam6_timer_pane_t1

0xb184,	// (0x0009e857) cam6_zoom_cont_pane

0xb18c,	// (0x0009e85f) cam6_zoom_pane_g1

0xb194,	// (0x0009e867) cam6_zoom_pane_g2

0x80d3,	// (0x0009b7a6) cam6_zoom_pane_g3

0x0002,

0xfb7b,	// (0x000a324e) cam6_zoom_pane_g

0x4780,	// (0x00097e53) cam6_battery_pane_g1

0x4780,	// (0x00097e53) cam6_battery_pane_g2

0x0001,

0xf6ec,	// (0x000a2dbf) cam6_battery_pane_g

0xb19c,	// (0x0009e86f) cam6_zoom_cont_pane_g1

0xb1a5,	// (0x0009e878) cam6_zoom_cont_pane_g2

0xb1ae,	// (0x0009e881) cam6_zoom_cont_pane_g3

0x0002,

0xfb82,	// (0x000a3255) cam6_zoom_cont_pane_g

0x80f0,	// (0x0009b7c3) cam6_mode_pane_cp_ParamLimits

0x80f0,	// (0x0009b7c3) cam6_mode_pane_cp

0x8102,	// (0x0009b7d5) cam6_zoom_pane_cp_ParamLimits

0x8102,	// (0x0009b7d5) cam6_zoom_pane_cp

0x8110,	// (0x0009b7e3) vid6_image_uncrop_cif_pane_ParamLimits

0x8110,	// (0x0009b7e3) vid6_image_uncrop_cif_pane

0x8120,	// (0x0009b7f3) vid6_image_uncrop_nhd_pane_ParamLimits

0x8120,	// (0x0009b7f3) vid6_image_uncrop_nhd_pane

0x812f,	// (0x0009b802) vid6_image_uncrop_vga_pane_ParamLimits

0x812f,	// (0x0009b802) vid6_image_uncrop_vga_pane

0x813e,	// (0x0009b811) vid6_image_uncrop_wvga_pane_ParamLimits

0x813e,	// (0x0009b811) vid6_image_uncrop_wvga_pane

0x814d,	// (0x0009b820) vid6_indi_pane_ParamLimits

0x814d,	// (0x0009b820) vid6_indi_pane

0xb0ee,	// (0x0009e7c1) bg_tb_trans_pane_cp09_ParamLimits

0xb0ee,	// (0x0009e7c1) bg_tb_trans_pane_cp09

0xb1c6,	// (0x0009e899) cam6_battery_pane_cp_ParamLimits

0xb1c6,	// (0x0009e899) cam6_battery_pane_cp

0xb1d2,	// (0x0009e8a5) vid6_indi_pane_g1_ParamLimits

0xb1d2,	// (0x0009e8a5) vid6_indi_pane_g1

0xb1e4,	// (0x0009e8b7) vid6_indi_pane_g2_ParamLimits

0xb1e4,	// (0x0009e8b7) vid6_indi_pane_g2

0xb1f6,	// (0x0009e8c9) vid6_indi_pane_g3_ParamLimits

0xb1f6,	// (0x0009e8c9) vid6_indi_pane_g3

0xb20d,	// (0x0009e8e0) vid6_indi_pane_g4_ParamLimits

0xb20d,	// (0x0009e8e0) vid6_indi_pane_g4

0xb224,	// (0x0009e8f7) vid6_indi_pane_g5_ParamLimits

0xb224,	// (0x0009e8f7) vid6_indi_pane_g5

0x0004,

0xfb89,	// (0x000a325c) vid6_indi_pane_g_ParamLimits

0xfb89,	// (0x000a325c) vid6_indi_pane_g

0xb23e,	// (0x0009e911) vid6_indi_pane_t1_ParamLimits

0xb23e,	// (0x0009e911) vid6_indi_pane_t1

0xb254,	// (0x0009e927) vid6_indi_pane_t2_ParamLimits

0xb254,	// (0x0009e927) vid6_indi_pane_t2

0xb27c,	// (0x0009e94f) vid6_indi_pane_t3_ParamLimits

0xb27c,	// (0x0009e94f) vid6_indi_pane_t3

0xb2a4,	// (0x0009e977) vid6_indi_pane_t4_ParamLimits

0xb2a4,	// (0x0009e977) vid6_indi_pane_t4

0x0003,

0xfb94,	// (0x000a3267) vid6_indi_pane_t_ParamLimits

0xfb94,	// (0x000a3267) vid6_indi_pane_t

0xb2c8,	// (0x0009e99b) wait_bar_pane_cp08

0x8165,	// (0x0009b838) main_cset_text2_pane_t1_ParamLimits

0x8165,	// (0x0009b838) main_cset_text2_pane_t1

0x80db,	// (0x0009b7ae) listscroll_gen_pane_cp06_t1_ParamLimits

0x80db,	// (0x0009b7ae) listscroll_gen_pane_cp06_t1

0xa0f0,	// (0x0009d7c3) main_cam6_set_pane

0xa927,	// (0x0009dffa) bg_tb_trans_pane_cp06_ParamLimits

0xa93d,	// (0x0009e010) cam4_indicators_pane_g1_ParamLimits

0xa94e,	// (0x0009e021) cam4_indicators_pane_g2_ParamLimits

0xf902,	// (0x000a2fd5) cam4_indicators_pane_g_ParamLimits

0xa966,	// (0x0009e039) cam4_indicators_pane_t1_ParamLimits

0xa0e2,	// (0x0009d7b5) bg_tb_trans_pane_cp07_ParamLimits

0xa994,	// (0x0009e067) vid4_indicators_pane_g1_ParamLimits

0xa9aa,	// (0x0009e07d) vid4_indicators_pane_g2_ParamLimits

0xa9be,	// (0x0009e091) vid4_indicators_pane_g3_ParamLimits

0xa9d1,	// (0x0009e0a4) vid4_indicators_pane_g4_ParamLimits

0xf914,	// (0x000a2fe7) vid4_indicators_pane_g_ParamLimits

0xa9ef,	// (0x0009e0c2) vid4_indicators_pane_t1_ParamLimits

0x7c7a,	// (0x0009b34d) vid4_progress_pane_g1_ParamLimits

0x7c8c,	// (0x0009b35f) vid4_progress_pane_g2_ParamLimits

0xa567,	// (0x0009dc3a) vid4_progress_pane_g3_ParamLimits

0xd1ef,	// (0x000a08c2) vid4_progress_pane_g4_ParamLimits

0xfac5,	// (0x000a3198) vid4_progress_pane_g_ParamLimits

0xd20d,	// (0x000a08e0) vid4_progress_pane_t1_ParamLimits

0xd222,	// (0x000a08f5) vid4_progress_pane_t2_ParamLimits

0xd238,	// (0x000a090b) vid4_progress_pane_t3_ParamLimits

0xfad0,	// (0x000a31a3) vid4_progress_pane_t_ParamLimits

0xd24d,	// (0x000a0920) wait_bar_pane_cp07_ParamLimits

0x8186,	// (0x0009b859) main_cam6_set_pane_g2_ParamLimits

0x8186,	// (0x0009b859) main_cam6_set_pane_g2

0x81ac,	// (0x0009b87f) main_cset6_listscroll_pane_ParamLimits

0x81ac,	// (0x0009b87f) main_cset6_listscroll_pane

0x81ca,	// (0x0009b89d) main_cset6_slider_pane_ParamLimits

0x81ca,	// (0x0009b89d) main_cset6_slider_pane

0x81e0,	// (0x0009b8b3) main_cset6_text2_pane_ParamLimits

0x81e0,	// (0x0009b8b3) main_cset6_text2_pane

0xb2d7,	// (0x0009e9aa) main_cset6_text_pane

0xb2df,	// (0x0009e9b2) main_cset_list_pane_copy1_ParamLimits

0xb2df,	// (0x0009e9b2) main_cset_list_pane_copy1

0xb2ef,	// (0x0009e9c2) scroll_pane_cp028_copy1

0x81ee,	// (0x0009b8c1) cset_list_set_pane_copy1

0x8202,	// (0x0009b8d5) aid_position_infowindow_above_copy1

0x820a,	// (0x0009b8dd) aid_position_infowindow_below_copy1

0x8212,	// (0x0009b8e5) cset_list_set_pane_g1_copy1

0x821a,	// (0x0009b8ed) cset_list_set_pane_g3_copy1_ParamLimits

0x821a,	// (0x0009b8ed) cset_list_set_pane_g3_copy1

0x8229,	// (0x0009b8fc) cset_list_set_pane_t1_copy1_ParamLimits

0x8229,	// (0x0009b8fc) cset_list_set_pane_t1_copy1

0xea5b,	// (0x000a212e) list_highlight_pane_cp021_copy1_ParamLimits

0xea5b,	// (0x000a212e) list_highlight_pane_cp021_copy1

0xb2f8,	// (0x0009e9cb) cset6_slider_pane_ParamLimits

0xb2f8,	// (0x0009e9cb) cset6_slider_pane

0xb324,	// (0x0009e9f7) main_cset6_slider_pane_g1_ParamLimits

0xb324,	// (0x0009e9f7) main_cset6_slider_pane_g1

0x823e,	// (0x0009b911) main_cset6_slider_pane_g2_ParamLimits

0x823e,	// (0x0009b911) main_cset6_slider_pane_g2

0xb34c,	// (0x0009ea1f) main_cset6_slider_pane_g3_ParamLimits

0xb34c,	// (0x0009ea1f) main_cset6_slider_pane_g3

0x8266,	// (0x0009b939) main_cset6_slider_pane_g4_ParamLimits

0x8266,	// (0x0009b939) main_cset6_slider_pane_g4

0x8272,	// (0x0009b945) main_cset6_slider_pane_g5_ParamLimits

0x8272,	// (0x0009b945) main_cset6_slider_pane_g5

0xaa3c,	// (0x0009e10f) main_cset6_slider_pane_g7_ParamLimits

0xaa3c,	// (0x0009e10f) main_cset6_slider_pane_g7

0xaa48,	// (0x0009e11b) main_cset6_slider_pane_g8_ParamLimits

0xaa48,	// (0x0009e11b) main_cset6_slider_pane_g8

0x7250,	// (0x0009a923) main_cset6_slider_pane_g9_ParamLimits

0x7250,	// (0x0009a923) main_cset6_slider_pane_g9

0x725c,	// (0x0009a92f) main_cset6_slider_pane_g10_ParamLimits

0x725c,	// (0x0009a92f) main_cset6_slider_pane_g10

0x7268,	// (0x0009a93b) main_cset6_slider_pane_g11_ParamLimits

0x7268,	// (0x0009a93b) main_cset6_slider_pane_g11

0x7274,	// (0x0009a947) main_cset6_slider_pane_g12_ParamLimits

0x7274,	// (0x0009a947) main_cset6_slider_pane_g12

0x7280,	// (0x0009a953) main_cset6_slider_pane_g13_ParamLimits

0x7280,	// (0x0009a953) main_cset6_slider_pane_g13

0x728c,	// (0x0009a95f) main_cset6_slider_pane_g14_ParamLimits

0x728c,	// (0x0009a95f) main_cset6_slider_pane_g14

0x8280,	// (0x0009b953) main_cset6_slider_pane_g15_ParamLimits

0x8280,	// (0x0009b953) main_cset6_slider_pane_g15

0x72b0,	// (0x0009a983) main_cset6_slider_pane_g16_ParamLimits

0x72b0,	// (0x0009a983) main_cset6_slider_pane_g16

0x72be,	// (0x0009a991) main_cset6_slider_pane_g17_ParamLimits

0x72be,	// (0x0009a991) main_cset6_slider_pane_g17

0x0011,

0xfb9d,	// (0x000a3270) main_cset6_slider_pane_g_ParamLimits

0xfb9d,	// (0x000a3270) main_cset6_slider_pane_g

0xb358,	// (0x0009ea2b) main_cset6_slider_pane_t1_ParamLimits

0xb358,	// (0x0009ea2b) main_cset6_slider_pane_t1

0x82b0,	// (0x0009b983) main_cset6_slider_pane_t2_ParamLimits

0x82b0,	// (0x0009b983) main_cset6_slider_pane_t2

0x82db,	// (0x0009b9ae) main_cset6_slider_pane_t3_ParamLimits

0x82db,	// (0x0009b9ae) main_cset6_slider_pane_t3

0x8306,	// (0x0009b9d9) main_cset6_slider_pane_t4_ParamLimits

0x8306,	// (0x0009b9d9) main_cset6_slider_pane_t4

0x8333,	// (0x0009ba06) main_cset6_slider_pane_t5_ParamLimits

0x8333,	// (0x0009ba06) main_cset6_slider_pane_t5

0xb399,	// (0x0009ea6c) main_cset6_slider_pane_t7_ParamLimits

0xb399,	// (0x0009ea6c) main_cset6_slider_pane_t7

0x8360,	// (0x0009ba33) main_cset6_slider_pane_t8_ParamLimits

0x8360,	// (0x0009ba33) main_cset6_slider_pane_t8

0x8384,	// (0x0009ba57) main_cset6_slider_pane_t9_ParamLimits

0x8384,	// (0x0009ba57) main_cset6_slider_pane_t9

0x83a8,	// (0x0009ba7b) main_cset6_slider_pane_t10_ParamLimits

0x83a8,	// (0x0009ba7b) main_cset6_slider_pane_t10

0x83cc,	// (0x0009ba9f) main_cset6_slider_pane_t11_ParamLimits

0x83cc,	// (0x0009ba9f) main_cset6_slider_pane_t11

0xb3cf,	// (0x0009eaa2) main_cset6_slider_pane_t14_ParamLimits

0xb3cf,	// (0x0009eaa2) main_cset6_slider_pane_t14

0xb408,	// (0x0009eadb) main_cset6_slider_pane_t15_ParamLimits

0xb408,	// (0x0009eadb) main_cset6_slider_pane_t15

0x000b,

0xfbc2,	// (0x000a3295) main_cset6_slider_pane_t_ParamLimits

0xfbc2,	// (0x000a3295) main_cset6_slider_pane_t

0xb441,	// (0x0009eb14) cset_slider_pane_g1_copy1

0xb44a,	// (0x0009eb1d) cset_slider_pane_g2_copy1

0xb453,	// (0x0009eb26) cset_slider_pane_g3_copy1

0xe293,	// (0x000a1966) bg_popup_sub_pane_cp011_copy1

0xb52d,	// (0x0009ec00) main_cset_text_pane_g1_copy1

0xac29,	// (0x0009e2fc) main_cset_text_pane_t1_copy1

0xac37,	// (0x0009e30a) main_cset_text_pane_t2_copy1

0xac45,	// (0x0009e318) main_cset_text_pane_t3_copy1

0xac53,	// (0x0009e326) main_cset_text_pane_t4_copy1

0xac61,	// (0x0009e334) main_cset_text_pane_t5_copy1

0xb535,	// (0x0009ec08) main_cset_text_pane_t6_copy1

0xb543,	// (0x0009ec16) main_cset_text_pane_t7_copy1

0x8165,	// (0x0009b838) main_cset_text2_pane_t1_copy1

0xa0e2,	// (0x0009d7b5) main_ncimui_pane

0x3a8a,	// (0x0009715d) popup_query_ncimui_window_ParamLimits

0x3a8a,	// (0x0009715d) popup_query_ncimui_window

0x4c8b,	// (0x0009835e) field_cale_ev2_pane_g4_ParamLimits

0x4c8b,	// (0x0009835e) field_cale_ev2_pane_g4

0x61d8,	// (0x000998ab) cell_video_dialer_keypad_pane_g2_ParamLimits

0x61d8,	// (0x000998ab) cell_video_dialer_keypad_pane_g2

0x0001,

0xf8a0,	// (0x000a2f73) cell_video_dialer_keypad_pane_g_ParamLimits

0xf8a0,	// (0x000a2f73) cell_video_dialer_keypad_pane_g

0x61f0,	// (0x000998c3) cell_video_dialer_keypad_pane_t1

0xe293,	// (0x000a1966) bg_popup_window_pane_cp012

0xca16,	// (0x000a00e9) heading_pane_cp06

0xb56f,	// (0x0009ec42) ncim_query_content_pane

0xe293,	// (0x000a1966) bg_popup_heading_pane_cp01

0xb577,	// (0x0009ec4a) ncim_heading_pane_t1

0xb585,	// (0x0009ec58) ncim_indicator_popup_pane

0xb597,	// (0x0009ec6a) ncim_query_button_pane

0xb5ad,	// (0x0009ec80) ncim_query_content_pane_t1

0xb5bf,	// (0x0009ec92) ncim_query_content_pane_t2

0x0005,

0xfc06,	// (0x000a32d9) ncim_query_content_pane_t

0xb5f9,	// (0x0009eccc) ncim_query_list_pane

0xb60b,	// (0x0009ecde) ncim_query_popup_pane

0xb585,	// (0x0009ec58) ncim_indicator_popup_pane_ParamLimits

0x8518,	// (0x0009bbeb) ncim_query_content_pane_g1_ParamLimits

0x8518,	// (0x0009bbeb) ncim_query_content_pane_g1

0xb5ad,	// (0x0009ec80) ncim_query_content_pane_t1_ParamLimits

0xb5bf,	// (0x0009ec92) ncim_query_content_pane_t2_ParamLimits

0x8524,	// (0x0009bbf7) ncim_query_content_pane_t3_ParamLimits

0x8524,	// (0x0009bbf7) ncim_query_content_pane_t3

0x854c,	// (0x0009bc1f) ncim_query_content_pane_t4_ParamLimits

0x854c,	// (0x0009bc1f) ncim_query_content_pane_t4

0x8574,	// (0x0009bc47) ncim_query_content_pane_t5_ParamLimits

0x8574,	// (0x0009bc47) ncim_query_content_pane_t5

0xb5d1,	// (0x0009eca4) ncim_query_content_pane_t6_ParamLimits

0xb5d1,	// (0x0009eca4) ncim_query_content_pane_t6

0xfc06,	// (0x000a32d9) ncim_query_content_pane_t_ParamLimits

0xb5f9,	// (0x0009eccc) ncim_query_list_pane_ParamLimits

0xb60b,	// (0x0009ecde) ncim_query_popup_pane_ParamLimits

0xb61f,	// (0x0009ecf2) wait_bar_pane_cp04

0xe293,	// (0x000a1966) input_focus_pane_cp011

0xb627,	// (0x0009ecfa) ncim_query_popup_pane_t1

0xb635,	// (0x0009ed08) ncim_list_query_list_pane_ParamLimits

0xb635,	// (0x0009ed08) ncim_list_query_list_pane

0xe293,	// (0x000a1966) bg_button_pane_cp027

0xb648,	// (0x0009ed1b) ncim_query_button_pane_g1

0xe293,	// (0x000a1966) list_highlight_pane_cp012

0xb652,	// (0x0009ed25) ncim_list_query_list_pane_g1

0xb65a,	// (0x0009ed2d) ncim_list_query_list_pane_t1

0xa95a,	// (0x0009e02d) cam4_indicators_pane_g3_ParamLimits

0xa95a,	// (0x0009e02d) cam4_indicators_pane_g3

0xa9dd,	// (0x0009e0b0) vid4_indicators_pane_g5_ParamLimits

0xa9dd,	// (0x0009e0b0) vid4_indicators_pane_g5

0xd1fe,	// (0x000a08d1) vid4_progress_pane_g5_ParamLimits

0xd1fe,	// (0x000a08d1) vid4_progress_pane_g5

0x8406,	// (0x0009bad9) main_ncimui_pane_g1

0x846c,	// (0x0009bb3f) ncimui_group_query_pane_ParamLimits

0x846c,	// (0x0009bb3f) ncimui_group_query_pane

0x84b4,	// (0x0009bb87) ncimui_list_pane_ParamLimits

0x84b4,	// (0x0009bb87) ncimui_list_pane

0x84db,	// (0x0009bbae) ncimui_text_pane_ParamLimits

0x84db,	// (0x0009bbae) ncimui_text_pane

0x859c,	// (0x0009bc6f) ncimui_text_pane_t1_ParamLimits

0x859c,	// (0x0009bc6f) ncimui_text_pane_t1

0xb668,	// (0x0009ed3b) ncimui_list_single_graphic_pane_ParamLimits

0xb668,	// (0x0009ed3b) ncimui_list_single_graphic_pane

0x85ba,	// (0x0009bc8d) ncimui_query_pane_ParamLimits

0x85ba,	// (0x0009bc8d) ncimui_query_pane

0xe293,	// (0x000a1966) list_highlight_pane_cp013

0xb678,	// (0x0009ed4b) ncim_list_query_list_pane_t1_copy1

0xb652,	// (0x0009ed25) ncim_list_single_graphic_pane_g1

0xb686,	// (0x0009ed59) ncim_query_button_pane_cp01

0xb692,	// (0x0009ed65) ncim_query_entry_pane_ParamLimits

0xb692,	// (0x0009ed65) ncim_query_entry_pane

0xb6a5,	// (0x0009ed78) ncimui_query_pane_g1

0xb6b1,	// (0x0009ed84) ncimui_query_pane_t1_ParamLimits

0xb6b1,	// (0x0009ed84) ncimui_query_pane_t1

0xea5b,	// (0x000a212e) input_focus_pane_cp012

0xb6ca,	// (0x0009ed9d) ncim_query_entry_pane_t1

0xea13,	// (0x000a20e6) main_im_pane_ParamLimits

0xa0e2,	// (0x0009d7b5) main_mobtv_pane_ParamLimits

0xa0e2,	// (0x0009d7b5) main_mobtv_pane

0x8298,	// (0x0009b96b) main_cset6_slider_pane_g18_ParamLimits

0x8298,	// (0x0009b96b) main_cset6_slider_pane_g18

0x82a4,	// (0x0009b977) main_cset6_slider_pane_g19_ParamLimits

0x82a4,	// (0x0009b977) main_cset6_slider_pane_g19

0xb6dc,	// (0x0009edaf) bg_main_mobtv_pane_ParamLimits

0xb6dc,	// (0x0009edaf) bg_main_mobtv_pane

0x85cd,	// (0x0009bca0) main_mobtv_info_pane

0x85d8,	// (0x0009bcab) main_mobtv_loading_pane_ParamLimits

0x85d8,	// (0x0009bcab) main_mobtv_loading_pane

0xb6ea,	// (0x0009edbd) main_mobtv_pg_channel_list_pane

0xb6f4,	// (0x0009edc7) main_mobtv_pg_hdr_pane

0x85e5,	// (0x0009bcb8) main_mobtv_programe_curr_pane_ParamLimits

0x85e5,	// (0x0009bcb8) main_mobtv_programe_curr_pane

0x85f2,	// (0x0009bcc5) main_mobtv_programe_next_pane_ParamLimits

0x85f2,	// (0x0009bcc5) main_mobtv_programe_next_pane

0xb6fd,	// (0x0009edd0) popup_mobtv_noti_window

0x4780,	// (0x00097e53) main_tv_pg_hdr_pane_g1

0xb707,	// (0x0009edda) main_tv_pg_hdr_pane_g2

0xb70f,	// (0x0009ede2) main_tv_pg_hdr_pane_g3

0xb717,	// (0x0009edea) main_tv_pg_hdr_pane_g4

0xb71f,	// (0x0009edf2) main_tv_pg_hdr_pane_g5

0xb729,	// (0x0009edfc) main_tv_pg_hdr_pane_g6

0xb733,	// (0x0009ee06) main_tv_pg_hdr_pane_g7

0xb73d,	// (0x0009ee10) main_tv_pg_hdr_pane_g8

0xb747,	// (0x0009ee1a) main_tv_pg_hdr_pane_g9

0xb751,	// (0x0009ee24) main_tv_pg_hdr_pane_g10

0xb75b,	// (0x0009ee2e) main_tv_pg_hdr_pane_g11

0x000a,

0xfc13,	// (0x000a32e6) main_tv_pg_hdr_pane_g

0xb765,	// (0x0009ee38) main_tv_pg_hdr_pane_t1

0xb773,	// (0x0009ee46) main_tv_pg_hdr_pane_t2

0xb781,	// (0x0009ee54) main_tv_pg_hdr_pane_t3

0xb791,	// (0x0009ee64) main_tv_pg_hdr_pane_t4

0xb7a1,	// (0x0009ee74) main_tv_pg_hdr_pane_t5

0x0004,

0xfc2a,	// (0x000a32fd) main_tv_pg_hdr_pane_t

0xb7b1,	// (0x0009ee84) single_mobtv_pg_channel_pane_ParamLimits

0xb7b1,	// (0x0009ee84) single_mobtv_pg_channel_pane

0xb7c3,	// (0x0009ee96) single_mobtv_pg_channel_table_pane

0xb7cc,	// (0x0009ee9f) single_mobtv_pg_channel_thumb_pane

0xb7d5,	// (0x0009eea8) single_tv_pg_channel_pane_g1

0xb7de,	// (0x0009eeb1) single_tv_pg_channel_pane_g2

0x0001,

0xfc35,	// (0x000a3308) single_tv_pg_channel_pane_g

0x4a5e,	// (0x00098131) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0x4a5e,	// (0x00098131) bg_single_mobtv_pg_channel_thumb_pane

0xb7e7,	// (0x0009eeba) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xb7e7,	// (0x0009eeba) single_mobtv_pg_channel_thumb_pane_g1

0xb7f5,	// (0x0009eec8) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xb7f5,	// (0x0009eec8) single_mobtv_pg_channel_thumb_pane_g2

0xb801,	// (0x0009eed4) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xb801,	// (0x0009eed4) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfc3a,	// (0x000a330d) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfc3a,	// (0x000a330d) single_mobtv_pg_channel_thumb_pane_g

0xb80d,	// (0x0009eee0) single_mobtv_pg_channel_thumb_pane_t1

0xb81b,	// (0x0009eeee) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc41,	// (0x000a3314) single_mobtv_pg_channel_thumb_pane_t

0x4780,	// (0x00097e53) bg_single_mobtv_pg_channel_table_pane_g1

0x4780,	// (0x00097e53) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf6ec,	// (0x000a2dbf) bg_single_mobtv_pg_channel_table_pane_g

0xb829,	// (0x0009eefc) single_mobtv_pg_channel_table_pane_t1

0xb837,	// (0x0009ef0a) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc46,	// (0x000a3319) single_mobtv_pg_channel_table_pane_t

0x8607,	// (0x0009bcda) main_mobtv_info_pane_g1_ParamLimits

0x8607,	// (0x0009bcda) main_mobtv_info_pane_g1

0x8625,	// (0x0009bcf8) main_mobtv_info_pane_t1_ParamLimits

0x8625,	// (0x0009bcf8) main_mobtv_info_pane_t1

0x869d,	// (0x0009bd70) main_mobtv_info_pane_t2_ParamLimits

0x869d,	// (0x0009bd70) main_mobtv_info_pane_t2

0x0002,

0xfc50,	// (0x000a3323) main_mobtv_info_pane_t_ParamLimits

0xfc50,	// (0x000a3323) main_mobtv_info_pane_t

0x872e,	// (0x0009be01) wait_bar_pane_cp05

0x8740,	// (0x0009be13) main_mobtv_loading_pane_g1_ParamLimits

0x8740,	// (0x0009be13) main_mobtv_loading_pane_g1

0x8751,	// (0x0009be24) main_mobtv_loading_pane_g2_ParamLimits

0x8751,	// (0x0009be24) main_mobtv_loading_pane_g2

0x875d,	// (0x0009be30) main_mobtv_loading_pane_g3_ParamLimits

0x875d,	// (0x0009be30) main_mobtv_loading_pane_g3

0x0002,

0xfc57,	// (0x000a332a) main_mobtv_loading_pane_g_ParamLimits

0xfc57,	// (0x000a332a) main_mobtv_loading_pane_g

0xb845,	// (0x0009ef18) main_mobtv_loading_pane_t1_ParamLimits

0xb845,	// (0x0009ef18) main_mobtv_loading_pane_t1

0xb85d,	// (0x0009ef30) main_mobtv_loading_pane_t2_ParamLimits

0xb85d,	// (0x0009ef30) main_mobtv_loading_pane_t2

0x0001,

0xfc5e,	// (0x000a3331) main_mobtv_loading_pane_t_ParamLimits

0xfc5e,	// (0x000a3331) main_mobtv_loading_pane_t

0x8770,	// (0x0009be43) wait_bar_pane_cp06_ParamLimits

0x8770,	// (0x0009be43) wait_bar_pane_cp06

0xb881,	// (0x0009ef54) main_mobtv_programe_curr_pane_t1

0xb88f,	// (0x0009ef62) main_mobtv_programe_curr_pane_t2

0x0001,

0xfc63,	// (0x000a3336) main_mobtv_programe_curr_pane_t

0xb89d,	// (0x0009ef70) main_mobtv_programe_next_pane_t1

0xb8ab,	// (0x0009ef7e) main_mobtv_programe_next_pane_t2

0xb8b9,	// (0x0009ef8c) main_mobtv_programe_next_pane_t3

0x0002,

0xfc68,	// (0x000a333b) main_mobtv_programe_next_pane_t

0xe293,	// (0x000a1966) bg_popup_mobtv_noti_window_pane

0xb8c7,	// (0x0009ef9a) popup_mobtv_noti_window_g1

0xb8cf,	// (0x0009efa2) popup_mobtv_noti_window_t1

0xb8dd,	// (0x0009efb0) popup_mobtv_noti_window_t2

0x0001,

0xfc6f,	// (0x000a3342) popup_mobtv_noti_window_t

0x4780,	// (0x00097e53) bg_popup_mobtv_noti_window_pane_g1

0xa0f0,	// (0x0009d7c3) sc_clock_pane

0xa0f0,	// (0x0009d7c3) main_fs_bigclock_pane

0x7eb9,	// (0x0009b58c) blid2_tripm_pane_t4_ParamLimits

0x7eb9,	// (0x0009b58c) blid2_tripm_pane_t4

0x877f,	// (0x0009be52) sc_clock_pane_g1_ParamLimits

0x877f,	// (0x0009be52) sc_clock_pane_g1

0x8791,	// (0x0009be64) sc_clock_pane_t1_ParamLimits

0x8791,	// (0x0009be64) sc_clock_pane_t1

0x87b5,	// (0x0009be88) sc_clock_pane_t2_ParamLimits

0x87b5,	// (0x0009be88) sc_clock_pane_t2

0x87cd,	// (0x0009bea0) sc_clock_pane_t3_ParamLimits

0x87cd,	// (0x0009bea0) sc_clock_pane_t3

0x0004,

0xfc74,	// (0x000a3347) sc_clock_pane_t_ParamLimits

0xfc74,	// (0x000a3347) sc_clock_pane_t

0x962a,	// (0x0009ccfd) main_fs_bigclock_indicator_pane_ParamLimits

0x962a,	// (0x0009ccfd) main_fs_bigclock_indicator_pane

0x49f5,	// (0x000980c8) main_fs_bigclock_pane_g1_ParamLimits

0x49f5,	// (0x000980c8) main_fs_bigclock_pane_g1

0x9636,	// (0x0009cd09) main_fs_bigclock_pane_t1_ParamLimits

0x9636,	// (0x0009cd09) main_fs_bigclock_pane_t1

0x9648,	// (0x0009cd1b) main_fs_bigclock_pane_t2_ParamLimits

0x9648,	// (0x0009cd1b) main_fs_bigclock_pane_t2

0x965c,	// (0x0009cd2f) main_fs_bigclock_pane_t3_ParamLimits

0x965c,	// (0x0009cd2f) main_fs_bigclock_pane_t3

0x0002,

0xfe6e,	// (0x000a3541) main_fs_bigclock_pane_t_ParamLimits

0xfe6e,	// (0x000a3541) main_fs_bigclock_pane_t

0xc564,	// (0x0009fc37) main_fs_bigclock_indicator_pane_g1

0xb59f,	// (0x0009ec72) ncim_query_content_pane_g2_ParamLimits

0xb59f,	// (0x0009ec72) ncim_query_content_pane_g2

0x0001,

0xfc01,	// (0x000a32d4) ncim_query_content_pane_g_ParamLimits

0xfc01,	// (0x000a32d4) ncim_query_content_pane_g

0x87e4,	// (0x0009beb7) sc_clock_pane_t4_ParamLimits

0x87e4,	// (0x0009beb7) sc_clock_pane_t4

0xa0e2,	// (0x0009d7b5) main_radioblah_pane

0x67c7,	// (0x00099e9a) cell_call4_button_pane_t1_copy1_ParamLimits

0x67c7,	// (0x00099e9a) cell_call4_button_pane_t1_copy1

0x841e,	// (0x0009baf1) main_ncimui_pane_t1_ParamLimits

0x841e,	// (0x0009baf1) main_ncimui_pane_t1

0x8438,	// (0x0009bb0b) main_ncimui_pane_t2_ParamLimits

0x8438,	// (0x0009bb0b) main_ncimui_pane_t2

0x0002,

0xfbfa,	// (0x000a32cd) main_ncimui_pane_t_ParamLimits

0xfbfa,	// (0x000a32cd) main_ncimui_pane_t

0xba29,	// (0x0009f0fc) main_radioblah_anim_pane_ParamLimits

0xba29,	// (0x0009f0fc) main_radioblah_anim_pane

0xba3a,	// (0x0009f10d) main_radioblah_info_pane_ParamLimits

0xba3a,	// (0x0009f10d) main_radioblah_info_pane

0xba4e,	// (0x0009f121) main_radioblah_pane_t1_ParamLimits

0xba4e,	// (0x0009f121) main_radioblah_pane_t1

0xba6a,	// (0x0009f13d) main_radioblah_pane_t2_ParamLimits

0xba6a,	// (0x0009f13d) main_radioblah_pane_t2

0x0003,

0xfc95,	// (0x000a3368) main_radioblah_pane_t_ParamLimits

0xfc95,	// (0x000a3368) main_radioblah_pane_t

0x8894,	// (0x0009bf67) main_radioblah_rocker_ctrl_pane_ParamLimits

0x8894,	// (0x0009bf67) main_radioblah_rocker_ctrl_pane

0xbab2,	// (0x0009f185) main_radioblah_info_pane_t1_ParamLimits

0xbab2,	// (0x0009f185) main_radioblah_info_pane_t1

0x88ec,	// (0x0009bfbf) main_radioblah_info_pane_t2_ParamLimits

0x88ec,	// (0x0009bfbf) main_radioblah_info_pane_t2

0x0003,

0xfc9e,	// (0x000a3371) main_radioblah_info_pane_t_ParamLimits

0xfc9e,	// (0x000a3371) main_radioblah_info_pane_t

0x4780,	// (0x00097e53) main_radioblah_rocker_ctrl_pane_g1

0x899c,	// (0x0009c06f) main_radioblah_rocker_ctrl_pane_g2

0x89a4,	// (0x0009c077) main_radioblah_rocker_ctrl_pane_g3

0x89ac,	// (0x0009c07f) main_radioblah_rocker_ctrl_pane_g4

0x89b4,	// (0x0009c087) main_radioblah_rocker_ctrl_pane_g5

0x89bc,	// (0x0009c08f) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfca7,	// (0x000a337a) main_radioblah_rocker_ctrl_pane_g

0x8165,	// (0x0009b838) main_cset_text2_pane_t1_copy1_ParamLimits

0xa91d,	// (0x0009dff0) cam4_image_uncrop_qvga_pane

0xa980,	// (0x0009e053) vid4_image_uncrop_qcif_pane

0xd261,	// (0x000a0934) cam6_image_uncrop_qvga_pane_ParamLimits

0xd261,	// (0x000a0934) cam6_image_uncrop_qvga_pane

0xb1b6,	// (0x0009e889) vid6_image_uncrop_qcif_pane_ParamLimits

0xb1b6,	// (0x0009e889) vid6_image_uncrop_qcif_pane

0xe293,	// (0x000a1966) bg_popup_preview_window_pane_cp03

0xb551,	// (0x0009ec24) list_cset_text2_pane

0xb559,	// (0x0009ec2c) main_cset6_text2_pane_g1

0xb561,	// (0x0009ec34) main_cset6_text2_pane_t1

0xbaec,	// (0x0009f1bf) list_cset_text2_pane_t1_ParamLimits

0xbaec,	// (0x0009f1bf) list_cset_text2_pane_t1

0xa0e2,	// (0x0009d7b5) main_radioblah_pane_ParamLimits

0x871a,	// (0x0009bded) main_mobtv_info_pane_t3_ParamLimits

0x871a,	// (0x0009bded) main_mobtv_info_pane_t3

0x8882,	// (0x0009bf55) main_radioblah_pane_g1

0x88bc,	// (0x0009bf8f) main_radioblah_info_pane_g1

0x8941,	// (0x0009c014) main_radioblah_info_pane_t3_ParamLimits

0x8941,	// (0x0009c014) main_radioblah_info_pane_t3

0x2283,	// (0x00095956) highlight_cell_cale_month_pane_ParamLimits

0x2283,	// (0x00095956) highlight_cell_cale_month_pane

0xa0f0,	// (0x0009d7c3) main_phob_fisheye_pane

0x5403,	// (0x00098ad6) scroll_pane_cp0031_ParamLimits

0x5403,	// (0x00098ad6) scroll_pane_cp0031

0xb2c8,	// (0x0009e99b) wait_bar_pane_cp08_ParamLimits

0x81ee,	// (0x0009b8c1) cset_list_set_pane_copy1_ParamLimits

0xbb06,	// (0x0009f1d9) highlight_cell_cale_month_pane_g1

0x89c4,	// (0x0009c097) highlight_cell_cale_month_pane_t1

0xaefd,	// (0x0009e5d0) list_gen_pane_cp01

0xaa27,	// (0x0009e0fa) scroll_pane_01

0x89d2,	// (0x0009c0a5) list_single_double_fisheye_pane

0x89db,	// (0x0009c0ae) list_double_fisheye_pane_g1_ParamLimits

0x89db,	// (0x0009c0ae) list_double_fisheye_pane_g1

0x89e7,	// (0x0009c0ba) list_double_fisheye_pane_g2_ParamLimits

0x89e7,	// (0x0009c0ba) list_double_fisheye_pane_g2

0x89fb,	// (0x0009c0ce) list_double_fisheye_pane_g3_ParamLimits

0x89fb,	// (0x0009c0ce) list_double_fisheye_pane_g3

0x0004,

0xfcb4,	// (0x000a3387) list_double_fisheye_pane_g_ParamLimits

0xfcb4,	// (0x000a3387) list_double_fisheye_pane_g

0x8a24,	// (0x0009c0f7) list_double_fisheye_pane_t1_ParamLimits

0x8a24,	// (0x0009c0f7) list_double_fisheye_pane_t1

0x8a3f,	// (0x0009c112) list_double_fisheye_pane_t2_ParamLimits

0x8a3f,	// (0x0009c112) list_double_fisheye_pane_t2

0x0001,

0xfcbf,	// (0x000a3392) list_double_fisheye_pane_t_ParamLimits

0xfcbf,	// (0x000a3392) list_double_fisheye_pane_t

0xa0f0,	// (0x0009d7c3) main_call5_pane

0x880f,	// (0x0009bee2) sc_swipe_pane_ParamLimits

0x880f,	// (0x0009bee2) sc_swipe_pane

0x8a74,	// (0x0009c147) call5_image_pane_ParamLimits

0x8a74,	// (0x0009c147) call5_image_pane

0x8a91,	// (0x0009c164) call5_swipe_1_pane_ParamLimits

0x8a91,	// (0x0009c164) call5_swipe_1_pane

0x8aa4,	// (0x0009c177) call5_swipe_2_pane_ParamLimits

0x8aa4,	// (0x0009c177) call5_swipe_2_pane

0x8ad1,	// (0x0009c1a4) popup_call5_audio_first_window_ParamLimits

0x8ad1,	// (0x0009c1a4) popup_call5_audio_first_window

0x4a5e,	// (0x00098131) call5_swipe_1_pane_g1_ParamLimits

0x4a5e,	// (0x00098131) call5_swipe_1_pane_g1

0xbb0e,	// (0x0009f1e1) call5_swipe_1_pane_g2_ParamLimits

0xbb0e,	// (0x0009f1e1) call5_swipe_1_pane_g2

0x0001,

0xfcc4,	// (0x000a3397) call5_swipe_1_pane_g_ParamLimits

0xfcc4,	// (0x000a3397) call5_swipe_1_pane_g

0xbb1a,	// (0x0009f1ed) call5_swipe_1_pane_t1_ParamLimits

0xbb1a,	// (0x0009f1ed) call5_swipe_1_pane_t1

0x4a5e,	// (0x00098131) call5_swipe_2_pane_g1_ParamLimits

0x4a5e,	// (0x00098131) call5_swipe_2_pane_g1

0xbb2f,	// (0x0009f202) call5_swipe_2_pane_g2_ParamLimits

0xbb2f,	// (0x0009f202) call5_swipe_2_pane_g2

0x0001,

0xfcc9,	// (0x000a339c) call5_swipe_2_pane_g_ParamLimits

0xfcc9,	// (0x000a339c) call5_swipe_2_pane_g

0xbb3b,	// (0x0009f20e) call5_swipe_2_pane_t1_ParamLimits

0xbb3b,	// (0x0009f20e) call5_swipe_2_pane_t1

0xbb50,	// (0x0009f223) sc_swipe_pane_g1_ParamLimits

0xbb50,	// (0x0009f223) sc_swipe_pane_g1

0xbb5d,	// (0x0009f230) sc_swipe_pane_g2_ParamLimits

0xbb5d,	// (0x0009f230) sc_swipe_pane_g2

0x0001,

0xfcce,	// (0x000a33a1) sc_swipe_pane_g_ParamLimits

0xfcce,	// (0x000a33a1) sc_swipe_pane_g

0xbb69,	// (0x0009f23c) sc_swipe_pane_t1_ParamLimits

0xbb69,	// (0x0009f23c) sc_swipe_pane_t1

0xa0f0,	// (0x0009d7c3) main_cmail_launcher_pane

0x8ae6,	// (0x0009c1b9) aid_size_cell_cmail_l_ParamLimits

0x8ae6,	// (0x0009c1b9) aid_size_cell_cmail_l

0x8b00,	// (0x0009c1d3) grid_cmail_l_pane_ParamLimits

0x8b00,	// (0x0009c1d3) grid_cmail_l_pane

0x8b1b,	// (0x0009c1ee) cell_cmail_l_pane_ParamLimits

0x8b1b,	// (0x0009c1ee) cell_cmail_l_pane

0x8b43,	// (0x0009c216) cell_cmail_l_pane_g1_ParamLimits

0x8b43,	// (0x0009c216) cell_cmail_l_pane_g1

0x8b4f,	// (0x0009c222) cell_cmail_l_pane_t1_ParamLimits

0x8b4f,	// (0x0009c222) cell_cmail_l_pane_t1

0xbb7e,	// (0x0009f251) cell_cmail_l_pane_t2_ParamLimits

0xbb7e,	// (0x0009f251) cell_cmail_l_pane_t2

0x0001,

0xfcd3,	// (0x000a33a6) cell_cmail_l_pane_t_ParamLimits

0xfcd3,	// (0x000a33a6) cell_cmail_l_pane_t

0xea5b,	// (0x000a212e) grid_highlight_pane_cp018_ParamLimits

0xea5b,	// (0x000a212e) grid_highlight_pane_cp018

0x0837,	// (0x00093f0a) main2_pane_ParamLimits

0x0837,	// (0x00093f0a) main2_pane

0xeb0c,	// (0x000a21df) popup_sp_fs_action_menu_bg_pane_g1

0xeb14,	// (0x000a21e7) popup_sp_fs_action_menu_bg_pane_g2

0xeb1c,	// (0x000a21ef) popup_sp_fs_action_menu_bg_pane_g3

0xeb24,	// (0x000a21f7) popup_sp_fs_action_menu_bg_pane_g4

0xeb2c,	// (0x000a21ff) popup_sp_fs_action_menu_bg_pane_g5

0xeb34,	// (0x000a2207) popup_sp_fs_action_menu_bg_pane_g6

0xeb3c,	// (0x000a220f) popup_sp_fs_action_menu_bg_pane_g7

0xeb44,	// (0x000a2217) popup_sp_fs_action_menu_bg_pane_g8

0xeb4c,	// (0x000a221f) popup_sp_fs_action_menu_bg_pane_g9

0xeb54,	// (0x000a2227) popup_sp_fs_action_menu_bg_pane_g10

0xeb54,	// (0x000a2227) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf198,	// (0x000a286b) popup_sp_fs_action_menu_bg_pane_g

0xec72,	// (0x000a2345) list_medium_line_x2_t3_g3_g1_ParamLimits

0xec72,	// (0x000a2345) list_medium_line_x2_t3_g3_g1

0xec7e,	// (0x000a2351) list_medium_line_x2_t3_g3_g2_ParamLimits

0xec7e,	// (0x000a2351) list_medium_line_x2_t3_g3_g2

0xec8a,	// (0x000a235d) list_medium_line_x2_t3_g3_g3_ParamLimits

0xec8a,	// (0x000a235d) list_medium_line_x2_t3_g3_g3

0x0002,

0xf248,	// (0x000a291b) list_medium_line_x2_t3_g3_g_ParamLimits

0xf248,	// (0x000a291b) list_medium_line_x2_t3_g3_g

0xec96,	// (0x000a2369) list_medium_line_x2_t3_g3_t1_ParamLimits

0xec96,	// (0x000a2369) list_medium_line_x2_t3_g3_t1

0x15c9,	// (0x00094c9c) list_medium_line_x2_t3_g3_t2_ParamLimits

0x15c9,	// (0x00094c9c) list_medium_line_x2_t3_g3_t2

0xecab,	// (0x000a237e) list_medium_line_x2_t3_g3_t3_ParamLimits

0xecab,	// (0x000a237e) list_medium_line_x2_t3_g3_t3

0x0002,

0xf24f,	// (0x000a2922) list_medium_line_x2_t3_g3_t_ParamLimits

0xf24f,	// (0x000a2922) list_medium_line_x2_t3_g3_t

0xec72,	// (0x000a2345) list_medium_line_x2_t3_g2_g1_ParamLimits

0xec72,	// (0x000a2345) list_medium_line_x2_t3_g2_g1

0xec8a,	// (0x000a235d) list_medium_line_x2_t3_g2_g2_ParamLimits

0xec8a,	// (0x000a235d) list_medium_line_x2_t3_g2_g2

0x0001,

0xf256,	// (0x000a2929) list_medium_line_x2_t3_g2_g_ParamLimits

0xf256,	// (0x000a2929) list_medium_line_x2_t3_g2_g

0xecc0,	// (0x000a2393) list_medium_line_x2_t3_g2_t1_ParamLimits

0xecc0,	// (0x000a2393) list_medium_line_x2_t3_g2_t1

0xecd6,	// (0x000a23a9) list_medium_line_x2_t3_g2_t2_ParamLimits

0xecd6,	// (0x000a23a9) list_medium_line_x2_t3_g2_t2

0xece8,	// (0x000a23bb) list_medium_line_x2_t3_g2_t3_ParamLimits

0xece8,	// (0x000a23bb) list_medium_line_x2_t3_g2_t3

0x0002,

0xf25b,	// (0x000a292e) list_medium_line_x2_t3_g2_t_ParamLimits

0xf25b,	// (0x000a292e) list_medium_line_x2_t3_g2_t

0xec72,	// (0x000a2345) list_medium_line_x2_t4_g4_g1_ParamLimits

0xec72,	// (0x000a2345) list_medium_line_x2_t4_g4_g1

0xed06,	// (0x000a23d9) list_medium_line_x2_t4_g4_g2_ParamLimits

0xed06,	// (0x000a23d9) list_medium_line_x2_t4_g4_g2

0xec7e,	// (0x000a2351) list_medium_line_x2_t4_g4_g3_ParamLimits

0xec7e,	// (0x000a2351) list_medium_line_x2_t4_g4_g3

0xed12,	// (0x000a23e5) list_medium_line_x2_t4_g4_g4_ParamLimits

0xed12,	// (0x000a23e5) list_medium_line_x2_t4_g4_g4

0x0003,

0xf262,	// (0x000a2935) list_medium_line_x2_t4_g4_g_ParamLimits

0xf262,	// (0x000a2935) list_medium_line_x2_t4_g4_g

0x15dd,	// (0x00094cb0) list_medium_line_x2_t4_g4_t1_ParamLimits

0x15dd,	// (0x00094cb0) list_medium_line_x2_t4_g4_t1

0x15f7,	// (0x00094cca) list_medium_line_x2_t4_g4_t2_ParamLimits

0x15f7,	// (0x00094cca) list_medium_line_x2_t4_g4_t2

0x160d,	// (0x00094ce0) list_medium_line_x2_t4_g4_t3_ParamLimits

0x160d,	// (0x00094ce0) list_medium_line_x2_t4_g4_t3

0xed1e,	// (0x000a23f1) list_medium_line_x2_t4_g4_t4_ParamLimits

0xed1e,	// (0x000a23f1) list_medium_line_x2_t4_g4_t4

0x0003,

0xf26b,	// (0x000a293e) list_medium_line_x2_t4_g4_t_ParamLimits

0xf26b,	// (0x000a293e) list_medium_line_x2_t4_g4_t

0xec72,	// (0x000a2345) list_medium_line_x2_t2_g4_g1_ParamLimits

0xec72,	// (0x000a2345) list_medium_line_x2_t2_g4_g1

0xed06,	// (0x000a23d9) list_medium_line_x2_t2_g4_g2_ParamLimits

0xed06,	// (0x000a23d9) list_medium_line_x2_t2_g4_g2

0xec7e,	// (0x000a2351) list_medium_line_x2_t2_g4_g3_ParamLimits

0xec7e,	// (0x000a2351) list_medium_line_x2_t2_g4_g3

0xec8a,	// (0x000a235d) list_medium_line_x2_t2_g4_g4_ParamLimits

0xec8a,	// (0x000a235d) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2d2,	// (0x000a29a5) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2d2,	// (0x000a29a5) list_medium_line_x2_t2_g4_g

0xf00c,	// (0x000a26df) list_medium_line_x2_t2_g4_t1_ParamLimits

0xf00c,	// (0x000a26df) list_medium_line_x2_t2_g4_t1

0xecab,	// (0x000a237e) list_medium_line_x2_t2_g4_t2_ParamLimits

0xecab,	// (0x000a237e) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2db,	// (0x000a29ae) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2db,	// (0x000a29ae) list_medium_line_x2_t2_g4_t

0xec72,	// (0x000a2345) list_medium_line_x2_t2_g3_g1_ParamLimits

0xec72,	// (0x000a2345) list_medium_line_x2_t2_g3_g1

0xec7e,	// (0x000a2351) list_medium_line_x2_t2_g3_g2_ParamLimits

0xec7e,	// (0x000a2351) list_medium_line_x2_t2_g3_g2

0xec8a,	// (0x000a235d) list_medium_line_x2_t2_g3_g3_ParamLimits

0xec8a,	// (0x000a235d) list_medium_line_x2_t2_g3_g3

0x0002,

0xf248,	// (0x000a291b) list_medium_line_x2_t2_g3_g_ParamLimits

0xf248,	// (0x000a291b) list_medium_line_x2_t2_g3_g

0xf021,	// (0x000a26f4) list_medium_line_x2_t2_g3_t1_ParamLimits

0xf021,	// (0x000a26f4) list_medium_line_x2_t2_g3_t1

0xecab,	// (0x000a237e) list_medium_line_x2_t2_g3_t2_ParamLimits

0xecab,	// (0x000a237e) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2e0,	// (0x000a29b3) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2e0,	// (0x000a29b3) list_medium_line_x2_t2_g3_t

0x245c,	// (0x00095b2f) main_sp_fs_list_pane_ParamLimits

0x245c,	// (0x00095b2f) main_sp_fs_list_pane

0x2468,	// (0x00095b3b) sp_fs_scroll_pane_ParamLimits

0x2468,	// (0x00095b3b) sp_fs_scroll_pane

0x2474,	// (0x00095b47) list_medium_line_x2_t3_t1

0x2484,	// (0x00095b57) list_medium_line_x2_t3_t2

0xf061,	// (0x000a2734) list_medium_line_x2_t3_t3

0x0002,

0xf32b,	// (0x000a29fe) list_medium_line_x2_t3_t

0x2492,	// (0x00095b65) list_medium_line_x3_t4_t1

0x24a2,	// (0x00095b75) list_medium_line_x3_t4_t2

0xf06f,	// (0x000a2742) list_medium_line_x3_t4_t3

0xf061,	// (0x000a2734) list_medium_line_x3_t4_t4

0x0003,

0xf332,	// (0x000a2a05) list_medium_line_x3_t4_t

0x24b0,	// (0x00095b83) list_medium_line_x4_t5_t1

0x24c0,	// (0x00095b93) list_medium_line_x4_t5_t2

0xf06f,	// (0x000a2742) list_medium_line_x4_t5_t3

0xf07d,	// (0x000a2750) list_medium_line_x4_t5_t4

0xf061,	// (0x000a2734) list_medium_line_x4_t5_t5

0x0004,

0xf33b,	// (0x000a2a0e) list_medium_line_x4_t5_t

0xec72,	// (0x000a2345) list_medium_line_t4_g4_g1_ParamLimits

0xec72,	// (0x000a2345) list_medium_line_t4_g4_g1

0xed12,	// (0x000a23e5) list_medium_line_t4_g4_g2_ParamLimits

0xed12,	// (0x000a23e5) list_medium_line_t4_g4_g2

0xf08b,	// (0x000a275e) list_medium_line_t4_g4_g3_ParamLimits

0xf08b,	// (0x000a275e) list_medium_line_t4_g4_g3

0xec8a,	// (0x000a235d) list_medium_line_t4_g4_g4_ParamLimits

0xec8a,	// (0x000a235d) list_medium_line_t4_g4_g4

0x0003,

0xf346,	// (0x000a2a19) list_medium_line_t4_g4_g_ParamLimits

0xf346,	// (0x000a2a19) list_medium_line_t4_g4_g

0xf097,	// (0x000a276a) list_medium_line_t4_g4_t1_ParamLimits

0xf097,	// (0x000a276a) list_medium_line_t4_g4_t1

0xf0ac,	// (0x000a277f) list_medium_line_t4_g4_t2_ParamLimits

0xf0ac,	// (0x000a277f) list_medium_line_t4_g4_t2

0xf0c2,	// (0x000a2795) list_medium_line_t4_g4_t3_ParamLimits

0xf0c2,	// (0x000a2795) list_medium_line_t4_g4_t3

0xecab,	// (0x000a237e) list_medium_line_t4_g4_t4_ParamLimits

0xecab,	// (0x000a237e) list_medium_line_t4_g4_t4

0x0003,

0xf34f,	// (0x000a2a22) list_medium_line_t4_g4_t_ParamLimits

0xf34f,	// (0x000a2a22) list_medium_line_t4_g4_t

0x2594,	// (0x00095c67) chi_dic_find_pane_g1

0x3810,	// (0x00096ee3) main_tport_pane

0xab6e,	// (0x0009e241) list_medium_line_plain_t1

0xabc0,	// (0x0009e293) list_medium_line_t2_g2_g1_ParamLimits

0xabc0,	// (0x0009e293) list_medium_line_t2_g2_g1

0xabcc,	// (0x0009e29f) list_medium_line_t2_g2_g2_ParamLimits

0xabcc,	// (0x0009e29f) list_medium_line_t2_g2_g2

0x0001,

0xfa0b,	// (0x000a30de) list_medium_line_t2_g2_g_ParamLimits

0xfa0b,	// (0x000a30de) list_medium_line_t2_g2_g

0x7640,	// (0x0009ad13) list_medium_line_t2_g2_t1_ParamLimits

0x7640,	// (0x0009ad13) list_medium_line_t2_g2_t1

0x7657,	// (0x0009ad2a) list_medium_line_t2_g2_t2_ParamLimits

0x7657,	// (0x0009ad2a) list_medium_line_t2_g2_t2

0x0001,

0xfa10,	// (0x000a30e3) list_medium_line_t2_g2_t_ParamLimits

0xfa10,	// (0x000a30e3) list_medium_line_t2_g2_t

0xaf06,	// (0x0009e5d9) aid_sp_fs_list_icon_a_sm

0xaf0e,	// (0x0009e5e1) aid_sp_fs_list_icon_d

0xaf16,	// (0x0009e5e9) aid_sp_fs_text_primary

0xaf1f,	// (0x0009e5f2) aid_sp_fs_text_secondary

0xaf28,	// (0x0009e5fb) list_medium_line

0xaf28,	// (0x0009e5fb) list_medium_line_g2

0xaf28,	// (0x0009e5fb) list_medium_line_g3

0xaf28,	// (0x0009e5fb) list_medium_line_plain

0xaf28,	// (0x0009e5fb) list_medium_line_plain_t2

0xaf28,	// (0x0009e5fb) list_medium_line_plain_t3

0xaf28,	// (0x0009e5fb) list_medium_line_right_icon

0xaf28,	// (0x0009e5fb) list_medium_line_right_iconx2

0xaf28,	// (0x0009e5fb) list_medium_line_t2

0xaf28,	// (0x0009e5fb) list_medium_line_t2_g2

0xaf28,	// (0x0009e5fb) list_medium_line_t2_g3

0xaf28,	// (0x0009e5fb) list_medium_line_t2_right_icon

0xaf28,	// (0x0009e5fb) list_medium_line_t2_right_iconx2

0xaf28,	// (0x0009e5fb) list_medium_line_t3

0xaf28,	// (0x0009e5fb) list_medium_line_t3_g2

0xaf28,	// (0x0009e5fb) list_medium_line_t3_g3

0xaf28,	// (0x0009e5fb) list_medium_line_t3_right_iconx2

0xaf31,	// (0x0009e604) list_medium_line_t4_g4

0xaf3a,	// (0x0009e60d) list_medium_line_x2

0xaf3a,	// (0x0009e60d) list_medium_line_x2_t2_g2

0xaf3a,	// (0x0009e60d) list_medium_line_x2_t2_g3

0xaf3a,	// (0x0009e60d) list_medium_line_x2_t2_g4

0xaf3a,	// (0x0009e60d) list_medium_line_x2_t3

0xaf3a,	// (0x0009e60d) list_medium_line_x2_t3_g2

0xaf3a,	// (0x0009e60d) list_medium_line_x2_t3_g3

0xaf3a,	// (0x0009e60d) list_medium_line_x2_t3_g4

0xaf3a,	// (0x0009e60d) list_medium_line_x2_t4_g2

0xaf3a,	// (0x0009e60d) list_medium_line_x2_t4_g4

0xaf43,	// (0x0009e616) list_medium_line_x3

0xaf43,	// (0x0009e616) list_medium_line_x3_t4

0xaf43,	// (0x0009e616) list_medium_line_x3_t4_g4

0xaf31,	// (0x0009e604) list_medium_line_x4_t4

0xaf31,	// (0x0009e604) list_medium_line_x4_t4_g7

0xaf31,	// (0x0009e604) list_medium_line_x4_t5

0xaf4c,	// (0x0009e61f) list_single_fs_dyc_pane_ParamLimits

0xaf4c,	// (0x0009e61f) list_single_fs_dyc_pane

0xec72,	// (0x000a2345) list_medium_line_x4_t4_g7_g1_ParamLimits

0xec72,	// (0x000a2345) list_medium_line_x4_t4_g7_g1

0xb45c,	// (0x0009eb2f) list_medium_line_x4_t4_g7_g2_ParamLimits

0xb45c,	// (0x0009eb2f) list_medium_line_x4_t4_g7_g2

0xb468,	// (0x0009eb3b) list_medium_line_x4_t4_g7_g3_ParamLimits

0xb468,	// (0x0009eb3b) list_medium_line_x4_t4_g7_g3

0xb477,	// (0x0009eb4a) list_medium_line_x4_t4_g7_g4_ParamLimits

0xb477,	// (0x0009eb4a) list_medium_line_x4_t4_g7_g4

0xb483,	// (0x0009eb56) list_medium_line_x4_t4_g7_g5_ParamLimits

0xb483,	// (0x0009eb56) list_medium_line_x4_t4_g7_g5

0xb492,	// (0x0009eb65) list_medium_line_x4_t4_g7_g6_ParamLimits

0xb492,	// (0x0009eb65) list_medium_line_x4_t4_g7_g6

0xb4a1,	// (0x0009eb74) list_medium_line_x4_t4_g7_g7_ParamLimits

0xb4a1,	// (0x0009eb74) list_medium_line_x4_t4_g7_g7

0x0006,

0xfbdb,	// (0x000a32ae) list_medium_line_x4_t4_g7_g_ParamLimits

0xfbdb,	// (0x000a32ae) list_medium_line_x4_t4_g7_g

0xb4ad,	// (0x0009eb80) list_medium_line_x4_t4_g7_t1_ParamLimits

0xb4ad,	// (0x0009eb80) list_medium_line_x4_t4_g7_t1

0xb4c2,	// (0x0009eb95) list_medium_line_x4_t4_g7_t2_ParamLimits

0xb4c2,	// (0x0009eb95) list_medium_line_x4_t4_g7_t2

0xb4d7,	// (0x0009ebaa) list_medium_line_x4_t4_g7_t3_ParamLimits

0xb4d7,	// (0x0009ebaa) list_medium_line_x4_t4_g7_t3

0xb4ec,	// (0x0009ebbf) list_medium_line_x4_t4_g7_t4_ParamLimits

0xb4ec,	// (0x0009ebbf) list_medium_line_x4_t4_g7_t4

0xb4fe,	// (0x0009ebd1) list_medium_line_x4_t4_g7_t5_ParamLimits

0xb4fe,	// (0x0009ebd1) list_medium_line_x4_t4_g7_t5

0x0004,

0xfbea,	// (0x000a32bd) list_medium_line_x4_t4_g7_t_ParamLimits

0xfbea,	// (0x000a32bd) list_medium_line_x4_t4_g7_t

0xb510,	// (0x0009ebe3) list_single_dyc_row_pane_ParamLimits

0xb510,	// (0x0009ebe3) list_single_dyc_row_pane

0x8a61,	// (0x0009c134) call5_gesture_pane_ParamLimits

0x8a61,	// (0x0009c134) call5_gesture_pane

0x8ab7,	// (0x0009c18a) call5_windows_pane_ParamLimits

0x8ab7,	// (0x0009c18a) call5_windows_pane

0x8b65,	// (0x0009c238) call5_swipe_1_pane_cp_ParamLimits

0x8b65,	// (0x0009c238) call5_swipe_1_pane_cp

0x8b71,	// (0x0009c244) call5_swipe_2_pane_cp_ParamLimits

0x8b71,	// (0x0009c244) call5_swipe_2_pane_cp

0xcc64,	// (0x000a0337) call5_image_pane_cp

0x8b7d,	// (0x0009c250) popup_call5_audio_first_window_cp_ParamLimits

0x8b7d,	// (0x0009c250) popup_call5_audio_first_window_cp

0xbb50,	// (0x0009f223) call5_swipe_1_pane_g1_cp_ParamLimits

0xbb50,	// (0x0009f223) call5_swipe_1_pane_g1_cp

0xbb90,	// (0x0009f263) call5_swipe_1_pane_g2_cp

0xbb69,	// (0x0009f23c) call5_swipe_1_pane_t1_cp_ParamLimits

0xbb69,	// (0x0009f23c) call5_swipe_1_pane_t1_cp

0xbb50,	// (0x0009f223) call5_swipe_2_pane_g1_cp_ParamLimits

0xbb50,	// (0x0009f223) call5_swipe_2_pane_g1_cp

0xbb98,	// (0x0009f26b) call5_swipe_2_pane_g2_cp

0xbba0,	// (0x0009f273) call5_swipe_2_pane_t1_cp_ParamLimits

0xbba0,	// (0x0009f273) call5_swipe_2_pane_t1_cp

0xea5b,	// (0x000a212e) main_sp_fs_email_pane

0xbbb5,	// (0x0009f288) main_sp_fs_listscroll_pane_te

0xbbbe,	// (0x0009f291) popup_sp_fs_action_menu_pane_ParamLimits

0xbbbe,	// (0x0009f291) popup_sp_fs_action_menu_pane

0x4780,	// (0x00097e53) bg_sp_fs_ctrlbar_pane_g1

0xbc04,	// (0x0009f2d7) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xbc0d,	// (0x0009f2e0) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xbc16,	// (0x0009f2e9) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0x4780,	// (0x00097e53) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfcd8,	// (0x000a33ab) bg_sp_fs_ctrlbar_ddmenu_pane_g

0x4489,	// (0x00097b5c) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0x4489,	// (0x00097b5c) bg_sp_fs_ctrlbar_ddmenu_pane

0xbc1f,	// (0x0009f2f2) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xbc1f,	// (0x0009f2f2) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xbc2b,	// (0x0009f2fe) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xbc2b,	// (0x0009f2fe) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfce1,	// (0x000a33b4) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfce1,	// (0x000a33b4) main_sp_fs_ctrlbar_ddmenu_pane_g

0xbc37,	// (0x0009f30a) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xbc37,	// (0x0009f30a) main_sp_fs_ctrlbar_ddmenu_pane_t1

0xbc51,	// (0x0009f324) list_medium_line_t2_right_icon_g1

0x8b8b,	// (0x0009c25e) list_medium_line_t2_right_icon_t1

0x8b9b,	// (0x0009c26e) list_medium_line_t2_right_icon_t2

0x0001,

0xfce6,	// (0x000a33b9) list_medium_line_t2_right_icon_t

0xe105,	// (0x000a17d8) bg_sp_fs_ctrlbar_pane_ParamLimits

0xe105,	// (0x000a17d8) bg_sp_fs_ctrlbar_pane

0x8bfa,	// (0x0009c2cd) main_sp_fs_ctrlbar_button_pane_cp01

0x8c04,	// (0x0009c2d7) main_sp_fs_ctrlbar_ddmenu_pane

0xbc93,	// (0x0009f366) main_sp_fs_ctrlbar_pane_g1

0xbc9f,	// (0x0009f372) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfceb,	// (0x000a33be) main_sp_fs_ctrlbar_pane_g

0xbcab,	// (0x0009f37e) main_sp_fs_ctrlbar_pane_t1

0x8c0e,	// (0x0009c2e1) main_sp_fs_ctrlbar_pane

0x8c32,	// (0x0009c305) main_sp_fs_listscroll_pane_te_cp01

0x8c52,	// (0x0009c325) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x8c52,	// (0x0009c325) popup_sp_fs_action_menu_pane_cp01

0xea5b,	// (0x000a212e) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0xea5b,	// (0x000a212e) bg_sp_fs_highlight_list_pane_cp01

0xbcd0,	// (0x0009f3a3) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0xbcd0,	// (0x0009f3a3) sp_fs_action_menu_list_gene_pane_g1

0xbcdf,	// (0x0009f3b2) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xbcdf,	// (0x0009f3b2) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfcf5,	// (0x000a33c8) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfcf5,	// (0x000a33c8) sp_fs_action_menu_list_gene_pane_g

0xbcec,	// (0x0009f3bf) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0xbcec,	// (0x0009f3bf) sp_fs_action_menu_list_gene_pane_t1

0xbd04,	// (0x0009f3d7) sp_fs_action_menu_list_gene_pane_ParamLimits

0xbd04,	// (0x0009f3d7) sp_fs_action_menu_list_gene_pane

0xbd27,	// (0x0009f3fa) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xbd27,	// (0x0009f3fa) popup_sp_fs_action_menu_bg_pane

0xbd35,	// (0x0009f408) sp_fs_action_menu_list_pane_ParamLimits

0xbd35,	// (0x0009f408) sp_fs_action_menu_list_pane

0xbd59,	// (0x0009f42c) sp_fs_scroll_pane_cp01_ParamLimits

0xbd59,	// (0x0009f42c) sp_fs_scroll_pane_cp01

0x8c88,	// (0x0009c35b) list_medium_line_plain_t2_t1

0x8c98,	// (0x0009c36b) list_medium_line_plain_t2_t2

0x0001,

0xfcfa,	// (0x000a33cd) list_medium_line_plain_t2_t

0x8ca8,	// (0x0009c37b) list_medium_line_plain_t3_t1

0x8cb8,	// (0x0009c38b) list_medium_line_plain_t3_t2

0x8cc6,	// (0x0009c399) list_medium_line_plain_t3_t3

0x0002,

0xfcff,	// (0x000a33d2) list_medium_line_plain_t3_t

0xec72,	// (0x000a2345) list_medium_line_x2_t2_g2_g1_ParamLimits

0xec72,	// (0x000a2345) list_medium_line_x2_t2_g2_g1

0xec8a,	// (0x000a235d) list_medium_line_x2_t2_g2_g2_ParamLimits

0xec8a,	// (0x000a235d) list_medium_line_x2_t2_g2_g2

0x0001,

0xf256,	// (0x000a2929) list_medium_line_x2_t2_g2_g_ParamLimits

0xf256,	// (0x000a2929) list_medium_line_x2_t2_g2_g

0xf097,	// (0x000a276a) list_medium_line_x2_t2_g2_t1_ParamLimits

0xf097,	// (0x000a276a) list_medium_line_x2_t2_g2_t1

0xecab,	// (0x000a237e) list_medium_line_x2_t2_g2_t2_ParamLimits

0xecab,	// (0x000a237e) list_medium_line_x2_t2_g2_t2

0x0001,

0x041c,	// (0x00093aef) list_medium_line_x2_t2_g2_t_ParamLimits

0x041c,	// (0x00093aef) list_medium_line_x2_t2_g2_t

0xec72,	// (0x000a2345) list_medium_line_x2_t4_g2_g1_ParamLimits

0xec72,	// (0x000a2345) list_medium_line_x2_t4_g2_g1

0xbd7f,	// (0x0009f452) list_medium_line_x2_t4_g2_g2_ParamLimits

0xbd7f,	// (0x0009f452) list_medium_line_x2_t4_g2_g2

0x0001,

0xfd06,	// (0x000a33d9) list_medium_line_x2_t4_g2_g_ParamLimits

0xfd06,	// (0x000a33d9) list_medium_line_x2_t4_g2_g

0x8cd4,	// (0x0009c3a7) list_medium_line_x2_t4_g2_t1_ParamLimits

0x8cd4,	// (0x0009c3a7) list_medium_line_x2_t4_g2_t1

0x8cee,	// (0x0009c3c1) list_medium_line_x2_t4_g2_t2_ParamLimits

0x8cee,	// (0x0009c3c1) list_medium_line_x2_t4_g2_t2

0x8d04,	// (0x0009c3d7) list_medium_line_x2_t4_g2_t3_ParamLimits

0x8d04,	// (0x0009c3d7) list_medium_line_x2_t4_g2_t3

0xecab,	// (0x000a237e) list_medium_line_x2_t4_g2_t4_ParamLimits

0xecab,	// (0x000a237e) list_medium_line_x2_t4_g2_t4

0x0003,

0xfd0b,	// (0x000a33de) list_medium_line_x2_t4_g2_t_ParamLimits

0xfd0b,	// (0x000a33de) list_medium_line_x2_t4_g2_t

0xbd91,	// (0x0009f464) list_medium_line_t3_right_iconx2_g1

0xbc51,	// (0x0009f324) list_medium_line_t3_right_iconx2_g2

0x8d19,	// (0x0009c3ec) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfd14,	// (0x000a33e7) list_medium_line_t3_right_iconx2_g

0x8d23,	// (0x0009c3f6) list_medium_line_t3_right_iconx2_t1

0x8d33,	// (0x0009c406) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfd1b,	// (0x000a33ee) list_medium_line_t3_right_iconx2_t

0xec72,	// (0x000a2345) list_medium_line_x3_t4_g4_g1_ParamLimits

0xec72,	// (0x000a2345) list_medium_line_x3_t4_g4_g1

0xec7e,	// (0x000a2351) list_medium_line_x3_t4_g4_g2_ParamLimits

0xec7e,	// (0x000a2351) list_medium_line_x3_t4_g4_g2

0xed12,	// (0x000a23e5) list_medium_line_x3_t4_g4_g3_ParamLimits

0xed12,	// (0x000a23e5) list_medium_line_x3_t4_g4_g3

0xbd99,	// (0x0009f46c) list_medium_line_x3_t4_g4_g4_ParamLimits

0xbd99,	// (0x0009f46c) list_medium_line_x3_t4_g4_g4

0x0003,

0xfd20,	// (0x000a33f3) list_medium_line_x3_t4_g4_g_ParamLimits

0xfd20,	// (0x000a33f3) list_medium_line_x3_t4_g4_g

0x8d41,	// (0x0009c414) list_medium_line_x3_t4_g4_t1_ParamLimits

0x8d41,	// (0x0009c414) list_medium_line_x3_t4_g4_t1

0x8d58,	// (0x0009c42b) list_medium_line_x3_t4_g4_t2_ParamLimits

0x8d58,	// (0x0009c42b) list_medium_line_x3_t4_g4_t2

0xbda5,	// (0x0009f478) list_medium_line_x3_t4_g4_t3_ParamLimits

0xbda5,	// (0x0009f478) list_medium_line_x3_t4_g4_t3

0xbdba,	// (0x0009f48d) list_medium_line_x3_t4_g4_t4_ParamLimits

0xbdba,	// (0x0009f48d) list_medium_line_x3_t4_g4_t4

0x0003,

0xfd29,	// (0x000a33fc) list_medium_line_x3_t4_g4_t_ParamLimits

0xfd29,	// (0x000a33fc) list_medium_line_x3_t4_g4_t

0x8d73,	// (0x0009c446) list_single_dyc_row_text_pane_t1_ParamLimits

0x8d73,	// (0x0009c446) list_single_dyc_row_text_pane_t1

0x8dbc,	// (0x0009c48f) list_single_dyc_row_text_pane_t2_ParamLimits

0x8dbc,	// (0x0009c48f) list_single_dyc_row_text_pane_t2

0xbdd7,	// (0x0009f4aa) list_single_dyc_row_text_pane_t3_ParamLimits

0xbdd7,	// (0x0009f4aa) list_single_dyc_row_text_pane_t3

0x0002,

0xfd32,	// (0x000a3405) list_single_dyc_row_text_pane_t_ParamLimits

0xfd32,	// (0x000a3405) list_single_dyc_row_text_pane_t

0xbde9,	// (0x0009f4bc) list_single_dyc_row_pane_g1_ParamLimits

0xbde9,	// (0x0009f4bc) list_single_dyc_row_pane_g1

0xbdf5,	// (0x0009f4c8) list_single_dyc_row_pane_g2_ParamLimits

0xbdf5,	// (0x0009f4c8) list_single_dyc_row_pane_g2

0xbe01,	// (0x0009f4d4) list_single_dyc_row_pane_g3_ParamLimits

0xbe01,	// (0x0009f4d4) list_single_dyc_row_pane_g3

0xbe0d,	// (0x0009f4e0) list_single_dyc_row_pane_g4_ParamLimits

0xbe0d,	// (0x0009f4e0) list_single_dyc_row_pane_g4

0x0003,

0xfd39,	// (0x000a340c) list_single_dyc_row_pane_g_ParamLimits

0xfd39,	// (0x000a340c) list_single_dyc_row_pane_g

0xbe19,	// (0x0009f4ec) list_single_dyc_row_text_pane_ParamLimits

0xbe19,	// (0x0009f4ec) list_single_dyc_row_text_pane

0xe293,	// (0x000a1966) bg_sp_fs_scroll_pane

0xbe38,	// (0x0009f50b) thumb_sp_fs_scroll_pane

0xabc0,	// (0x0009e293) list_medium_line_g1_ParamLimits

0xabc0,	// (0x0009e293) list_medium_line_g1

0xbe41,	// (0x0009f514) list_medium_line_t1_ParamLimits

0xbe41,	// (0x0009f514) list_medium_line_t1

0xec72,	// (0x000a2345) list_medium_line_x2_g1_ParamLimits

0xec72,	// (0x000a2345) list_medium_line_x2_g1

0xec7e,	// (0x000a2351) list_medium_line_x2_g2_ParamLimits

0xec7e,	// (0x000a2351) list_medium_line_x2_g2

0x0001,

0x045d,	// (0x00093b30) list_medium_line_x2_g_ParamLimits

0x045d,	// (0x00093b30) list_medium_line_x2_g

0xbe56,	// (0x0009f529) list_medium_line_x2_t1_ParamLimits

0xbe56,	// (0x0009f529) list_medium_line_x2_t1

0xec72,	// (0x000a2345) list_medium_line_x3_g1_ParamLimits

0xec72,	// (0x000a2345) list_medium_line_x3_g1

0xec7e,	// (0x000a2351) list_medium_line_x3_g2_ParamLimits

0xec7e,	// (0x000a2351) list_medium_line_x3_g2

0x0001,

0x045d,	// (0x00093b30) list_medium_line_x3_g_ParamLimits

0x045d,	// (0x00093b30) list_medium_line_x3_g

0xbe56,	// (0x0009f529) list_medium_line_x3_t1_ParamLimits

0xbe56,	// (0x0009f529) list_medium_line_x3_t1

0xbe6c,	// (0x0009f53f) thumb_sp_fs_scroll_pane_g1

0xbe75,	// (0x0009f548) thumb_sp_fs_scroll_pane_g2

0xbe7e,	// (0x0009f551) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfd42,	// (0x000a3415) thumb_sp_fs_scroll_pane_g

0xbe6c,	// (0x0009f53f) bg_sp_fs_scroll_pane_g1

0xbe75,	// (0x0009f548) bg_sp_fs_scroll_pane_g2

0xbe7e,	// (0x0009f551) bg_sp_fs_scroll_pane_g3

0x0002,

0xfd42,	// (0x000a3415) bg_sp_fs_scroll_pane_g

0xec72,	// (0x000a2345) list_medium_line_x2_t3_g4_g1_ParamLimits

0xec72,	// (0x000a2345) list_medium_line_x2_t3_g4_g1

0xed06,	// (0x000a23d9) list_medium_line_x2_t3_g4_g2_ParamLimits

0xed06,	// (0x000a23d9) list_medium_line_x2_t3_g4_g2

0xec7e,	// (0x000a2351) list_medium_line_x2_t3_g4_g3_ParamLimits

0xec7e,	// (0x000a2351) list_medium_line_x2_t3_g4_g3

0xec8a,	// (0x000a235d) list_medium_line_x2_t3_g4_g4_ParamLimits

0xec8a,	// (0x000a235d) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2d2,	// (0x000a29a5) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2d2,	// (0x000a29a5) list_medium_line_x2_t3_g4_g

0x8e16,	// (0x0009c4e9) list_medium_line_x2_t3_g4_t1_ParamLimits

0x8e16,	// (0x0009c4e9) list_medium_line_x2_t3_g4_t1

0x8e2c,	// (0x0009c4ff) list_medium_line_x2_t3_g4_t2_ParamLimits

0x8e2c,	// (0x0009c4ff) list_medium_line_x2_t3_g4_t2

0xecab,	// (0x000a237e) list_medium_line_x2_t3_g4_t3_ParamLimits

0xecab,	// (0x000a237e) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd49,	// (0x000a341c) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd49,	// (0x000a341c) list_medium_line_x2_t3_g4_t

0xabc0,	// (0x0009e293) list_medium_line_g2_g1_ParamLimits

0xabc0,	// (0x0009e293) list_medium_line_g2_g1

0xabcc,	// (0x0009e29f) list_medium_line_g2_g2_ParamLimits

0xabcc,	// (0x0009e29f) list_medium_line_g2_g2

0x0001,

0xfa0b,	// (0x000a30de) list_medium_line_g2_g_ParamLimits

0xfa0b,	// (0x000a30de) list_medium_line_g2_g

0xbe87,	// (0x0009f55a) list_medium_line_g2_t1_ParamLimits

0xbe87,	// (0x0009f55a) list_medium_line_g2_t1

0xabc0,	// (0x0009e293) list_medium_line_t3_g2_g1_ParamLimits

0xabc0,	// (0x0009e293) list_medium_line_t3_g2_g1

0xabcc,	// (0x0009e29f) list_medium_line_t3_g2_g2_ParamLimits

0xabcc,	// (0x0009e29f) list_medium_line_t3_g2_g2

0x0001,

0xfa0b,	// (0x000a30de) list_medium_line_t3_g2_g_ParamLimits

0xfa0b,	// (0x000a30de) list_medium_line_t3_g2_g

0x8e45,	// (0x0009c518) list_medium_line_t3_g2_t1_ParamLimits

0x8e45,	// (0x0009c518) list_medium_line_t3_g2_t1

0x8e5c,	// (0x0009c52f) list_medium_line_t3_g2_t2_ParamLimits

0x8e5c,	// (0x0009c52f) list_medium_line_t3_g2_t2

0x8e71,	// (0x0009c544) list_medium_line_t3_g2_t3_ParamLimits

0x8e71,	// (0x0009c544) list_medium_line_t3_g2_t3

0x0002,

0xfd50,	// (0x000a3423) list_medium_line_t3_g2_t_ParamLimits

0xfd50,	// (0x000a3423) list_medium_line_t3_g2_t

0xbc51,	// (0x0009f324) list_medium_line_right_icon_g1

0xbe9c,	// (0x0009f56f) list_medium_line_right_icon_t1

0xabc0,	// (0x0009e293) list_medium_line_t2_g1_ParamLimits

0xabc0,	// (0x0009e293) list_medium_line_t2_g1

0x8e8a,	// (0x0009c55d) list_medium_line_t2_t1_ParamLimits

0x8e8a,	// (0x0009c55d) list_medium_line_t2_t1

0x8ea4,	// (0x0009c577) list_medium_line_t2_t2_ParamLimits

0x8ea4,	// (0x0009c577) list_medium_line_t2_t2

0x0001,

0xfd57,	// (0x000a342a) list_medium_line_t2_t_ParamLimits

0xfd57,	// (0x000a342a) list_medium_line_t2_t

0xabc0,	// (0x0009e293) list_medium_line_t3_g1_ParamLimits

0xabc0,	// (0x0009e293) list_medium_line_t3_g1

0x8ebd,	// (0x0009c590) list_medium_line_t3_t1_ParamLimits

0x8ebd,	// (0x0009c590) list_medium_line_t3_t1

0x8ed4,	// (0x0009c5a7) list_medium_line_t3_t2_ParamLimits

0x8ed4,	// (0x0009c5a7) list_medium_line_t3_t2

0x8ee9,	// (0x0009c5bc) list_medium_line_t3_t3_ParamLimits

0x8ee9,	// (0x0009c5bc) list_medium_line_t3_t3

0x0002,

0xfd5c,	// (0x000a342f) list_medium_line_t3_t_ParamLimits

0xfd5c,	// (0x000a342f) list_medium_line_t3_t

0xabc0,	// (0x0009e293) list_medium_line_g3_g1_ParamLimits

0xabc0,	// (0x0009e293) list_medium_line_g3_g1

0xbeaa,	// (0x0009f57d) list_medium_line_g3_g2_ParamLimits

0xbeaa,	// (0x0009f57d) list_medium_line_g3_g2

0xabcc,	// (0x0009e29f) list_medium_line_g3_g3_ParamLimits

0xabcc,	// (0x0009e29f) list_medium_line_g3_g3

0x0002,

0xfd63,	// (0x000a3436) list_medium_line_g3_g_ParamLimits

0xfd63,	// (0x000a3436) list_medium_line_g3_g

0xbeb6,	// (0x0009f589) list_medium_line_g3_t1_ParamLimits

0xbeb6,	// (0x0009f589) list_medium_line_g3_t1

0xabc0,	// (0x0009e293) list_medium_line_t2_g3_g1_ParamLimits

0xabc0,	// (0x0009e293) list_medium_line_t2_g3_g1

0xbeaa,	// (0x0009f57d) list_medium_line_t2_g3_g2_ParamLimits

0xbeaa,	// (0x0009f57d) list_medium_line_t2_g3_g2

0xabcc,	// (0x0009e29f) list_medium_line_t2_g3_g3_ParamLimits

0xabcc,	// (0x0009e29f) list_medium_line_t2_g3_g3

0x0002,

0xfd63,	// (0x000a3436) list_medium_line_t2_g3_g_ParamLimits

0xfd63,	// (0x000a3436) list_medium_line_t2_g3_g

0x8efb,	// (0x0009c5ce) list_medium_line_t2_g3_t1_ParamLimits

0x8efb,	// (0x0009c5ce) list_medium_line_t2_g3_t1

0x8f12,	// (0x0009c5e5) list_medium_line_t2_g3_t2_ParamLimits

0x8f12,	// (0x0009c5e5) list_medium_line_t2_g3_t2

0x0001,

0xfd6a,	// (0x000a343d) list_medium_line_t2_g3_t_ParamLimits

0xfd6a,	// (0x000a343d) list_medium_line_t2_g3_t

0xabc0,	// (0x0009e293) list_medium_line_t3_g3_g1_ParamLimits

0xabc0,	// (0x0009e293) list_medium_line_t3_g3_g1

0xbeaa,	// (0x0009f57d) list_medium_line_t3_g3_g2_ParamLimits

0xbeaa,	// (0x0009f57d) list_medium_line_t3_g3_g2

0xabcc,	// (0x0009e29f) list_medium_line_t3_g3_g3_ParamLimits

0xabcc,	// (0x0009e29f) list_medium_line_t3_g3_g3

0x0002,

0xfd63,	// (0x000a3436) list_medium_line_t3_g3_g_ParamLimits

0xfd63,	// (0x000a3436) list_medium_line_t3_g3_g

0x8f2b,	// (0x0009c5fe) list_medium_line_t3_g3_t1_ParamLimits

0x8f2b,	// (0x0009c5fe) list_medium_line_t3_g3_t1

0x8f44,	// (0x0009c617) list_medium_line_t3_g3_t2_ParamLimits

0x8f44,	// (0x0009c617) list_medium_line_t3_g3_t2

0x8f5a,	// (0x0009c62d) list_medium_line_t3_g3_t3_ParamLimits

0x8f5a,	// (0x0009c62d) list_medium_line_t3_g3_t3

0x0002,

0xfd6f,	// (0x000a3442) list_medium_line_t3_g3_t_ParamLimits

0xfd6f,	// (0x000a3442) list_medium_line_t3_g3_t

0xbd91,	// (0x0009f464) list_medium_line_right_iconx2_g1

0xbc51,	// (0x0009f324) list_medium_line_right_iconx2_g2

0x0001,

0xfd76,	// (0x000a3449) list_medium_line_right_iconx2_g

0xbecb,	// (0x0009f59e) list_medium_line_right_iconx2_t1

0xbd91,	// (0x0009f464) list_medium_line_t2_right_iconx2_g1

0xbc51,	// (0x0009f324) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfd76,	// (0x000a3449) list_medium_line_t2_right_iconx2_g

0x8f74,	// (0x0009c647) list_medium_line_t2_right_iconx2_t1

0x8f84,	// (0x0009c657) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfd7b,	// (0x000a344e) list_medium_line_t2_right_iconx2_t

0xbed9,	// (0x0009f5ac) list_medium_line_x4_t4_t1

0x8f96,	// (0x0009c669) list_medium_line_x4_t4_t2

0x8fa6,	// (0x0009c679) list_medium_line_x4_t4_t3

0x8fb6,	// (0x0009c689) list_medium_line_x4_t4_t4

0x0003,

0xfd80,	// (0x000a3453) list_medium_line_x4_t4_t

0x9009,	// (0x0009c6dc) tport_appsw_pane_ParamLimits

0x9009,	// (0x0009c6dc) tport_appsw_pane

0x901c,	// (0x0009c6ef) tport_contact_pane_ParamLimits

0x901c,	// (0x0009c6ef) tport_contact_pane

0x9035,	// (0x0009c708) tport_listscroll_pane_ParamLimits

0x9035,	// (0x0009c708) tport_listscroll_pane

0x9050,	// (0x0009c723) cell_tport_appsw_pane_ParamLimits

0x9050,	// (0x0009c723) cell_tport_appsw_pane

0x6c82,	// (0x0009a355) tport_appsw_pane_g1_ParamLimits

0x6c82,	// (0x0009a355) tport_appsw_pane_g1

0xbee7,	// (0x0009f5ba) tport_contact_pane_g1

0xbef0,	// (0x0009f5c3) tport_contact_pane_t1

0xbefe,	// (0x0009f5d1) tport_contact_pane_t2

0x0001,

0xfd89,	// (0x000a345c) tport_contact_pane_t

0xbf0c,	// (0x0009f5df) list_tport_pane

0xbf15,	// (0x0009f5e8) scroll_pane_cp_030

0xbf26,	// (0x0009f5f9) cell_tport_appsw_pane_g1

0xbf36,	// (0x0009f609) cell_tport_appsw_pane_t1

0xe293,	// (0x000a1966) grid_highlight_pane_cp019

0x9094,	// (0x0009c767) list_tport_double_graphic_pane_ParamLimits

0x9094,	// (0x0009c767) list_tport_double_graphic_pane

0xea5b,	// (0x000a212e) list_highlight_pane_cp023_ParamLimits

0xea5b,	// (0x000a212e) list_highlight_pane_cp023

0x90a1,	// (0x0009c774) list_tport_double_graphic_pane_g1_ParamLimits

0x90a1,	// (0x0009c774) list_tport_double_graphic_pane_g1

0x90ae,	// (0x0009c781) list_tport_double_graphic_pane_t1_ParamLimits

0x90ae,	// (0x0009c781) list_tport_double_graphic_pane_t1

0x90c3,	// (0x0009c796) list_tport_double_graphic_pane_t2_ParamLimits

0x90c3,	// (0x0009c796) list_tport_double_graphic_pane_t2

0x0001,

0xfd95,	// (0x000a3468) list_tport_double_graphic_pane_t_ParamLimits

0xfd95,	// (0x000a3468) list_tport_double_graphic_pane_t

0xe293,	// (0x000a1966) main_cale_note_pane

0x6c36,	// (0x0009a309) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x6c36,	// (0x0009a309) cell_vitu2_function_top_wide_pane_cp01

0x872e,	// (0x0009be01) wait_bar_pane_cp05_ParamLimits

0xe293,	// (0x000a1966) listscroll_cmail_pane

0xbf4c,	// (0x0009f61f) list_cmail_pane

0x90df,	// (0x0009c7b2) list_cmail_body_pane

0x90f7,	// (0x0009c7ca) list_single_cmail_header_caption_pane

0x9114,	// (0x0009c7e7) list_single_cmail_header_detail_pane_ParamLimits

0x9114,	// (0x0009c7e7) list_single_cmail_header_detail_pane

0x9146,	// (0x0009c819) list_single_cmail_header_caption_pane_t1

0x9156,	// (0x0009c829) list_single_cmail_header_detail_pane_g1_ParamLimits

0x9156,	// (0x0009c829) list_single_cmail_header_detail_pane_g1

0xbf6c,	// (0x0009f63f) list_single_cmail_header_detail_pane_g2_ParamLimits

0xbf6c,	// (0x0009f63f) list_single_cmail_header_detail_pane_g2

0x0002,

0xfd9a,	// (0x000a346d) list_single_cmail_header_detail_pane_g_ParamLimits

0xfd9a,	// (0x000a346d) list_single_cmail_header_detail_pane_g

0xbf85,	// (0x0009f658) list_single_cmail_header_detail_pane_t1_ParamLimits

0xbf85,	// (0x0009f658) list_single_cmail_header_detail_pane_t1

0xbfc3,	// (0x0009f696) list_single_cmail_header_editor_pane_bg_ParamLimits

0xbfc3,	// (0x0009f696) list_single_cmail_header_editor_pane_bg

0xb7de,	// (0x0009eeb1) list_cmail_body_pane_g1

0xbfd5,	// (0x0009f6a8) list_cmail_body_pane_t1

0x6d93,	// (0x0009a466) list_single_cmail_header_editor_pane_bg_g1

0xef2b,	// (0x000a25fe) list_single_cmail_header_editor_pane_bg_g1_copy1

0x6da3,	// (0x0009a476) list_single_cmail_header_editor_pane_bg_g1_copy2

0x6d9b,	// (0x0009a46e) list_single_cmail_header_editor_pane_bg_g1_copy3

0xab98,	// (0x0009e26b) list_single_cmail_header_editor_pane_bg_g1_copy4

0x6dc3,	// (0x0009a496) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0x6db3,	// (0x0009a486) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0x6dbb,	// (0x0009a48e) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xef0b,	// (0x000a25de) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0x9194,	// (0x0009c867) calenote_gesture_pane_ParamLimits

0x9194,	// (0x0009c867) calenote_gesture_pane

0x91b4,	// (0x0009c887) calenote_window_pane_ParamLimits

0x91b4,	// (0x0009c887) calenote_window_pane

0xbfe3,	// (0x0009f6b6) popup_note_window_cp01

0x91d0,	// (0x0009c8a3) calenote_swipe_1_pane_ParamLimits

0x91d0,	// (0x0009c8a3) calenote_swipe_1_pane

0x8b71,	// (0x0009c244) calenote_swipe_2_pane_ParamLimits

0x8b71,	// (0x0009c244) calenote_swipe_2_pane

0xbb50,	// (0x0009f223) calenote_swipe_1_pane_g1_ParamLimits

0xbb50,	// (0x0009f223) calenote_swipe_1_pane_g1

0xbb5d,	// (0x0009f230) calenote_swipe_1_pane_g2_ParamLimits

0xbb5d,	// (0x0009f230) calenote_swipe_1_pane_g2

0x0001,

0xfcce,	// (0x000a33a1) calenote_swipe_1_pane_g_ParamLimits

0xfcce,	// (0x000a33a1) calenote_swipe_1_pane_g

0xbff5,	// (0x0009f6c8) calenote_swipe_1_pane_t1_ParamLimits

0xbff5,	// (0x0009f6c8) calenote_swipe_1_pane_t1

0xbb50,	// (0x0009f223) calenote_swipe_2_pane_g1_ParamLimits

0xbb50,	// (0x0009f223) calenote_swipe_2_pane_g1

0xc014,	// (0x0009f6e7) calenote_swipe_2_pane_g2_ParamLimits

0xc014,	// (0x0009f6e7) calenote_swipe_2_pane_g2

0x0001,

0xfda6,	// (0x000a3479) calenote_swipe_2_pane_g_ParamLimits

0xfda6,	// (0x000a3479) calenote_swipe_2_pane_g

0xc020,	// (0x0009f6f3) calenote_swipe_2_pane_t1_ParamLimits

0xc020,	// (0x0009f6f3) calenote_swipe_2_pane_t1

0xe293,	// (0x000a1966) main_mup_navstr_pane

0x5180,	// (0x00098853) main_mup3_pane_t7_ParamLimits

0x5180,	// (0x00098853) main_mup3_pane_t7

0xa731,	// (0x0009de04) main_mp4_pane_g6_ParamLimits

0xa731,	// (0x0009de04) main_mp4_pane_g6

0xa8df,	// (0x0009dfb2) main_image3_pane_t4_ParamLimits

0xa8df,	// (0x0009dfb2) main_image3_pane_t4

0x91e5,	// (0x0009c8b8) popup_navstr_preview_pane_ParamLimits

0x91e5,	// (0x0009c8b8) popup_navstr_preview_pane

0x91f5,	// (0x0009c8c8) scroll_navstr_pane_ParamLimits

0x91f5,	// (0x0009c8c8) scroll_navstr_pane

0xe293,	// (0x000a1966) bg_popup_preview_window_pane_cp04

0xc047,	// (0x0009f71a) popup_navstr_preview_pane_t1

0x9209,	// (0x0009c8dc) scroll_navstr_pane_g1_ParamLimits

0x9209,	// (0x0009c8dc) scroll_navstr_pane_g1

0x921d,	// (0x0009c8f0) scroll_navstr_pane_t1_ParamLimits

0x921d,	// (0x0009c8f0) scroll_navstr_pane_t1

0xbfec,	// (0x0009f6bf) bg_button_pane_cp014

0xbfec,	// (0x0009f6bf) bg_button_pane_cp030

0x8a07,	// (0x0009c0da) list_double_fisheye_pane_g4_ParamLimits

0x8a07,	// (0x0009c0da) list_double_fisheye_pane_g4

0x8a13,	// (0x0009c0e6) list_double_fisheye_pane_g5_ParamLimits

0x8a13,	// (0x0009c0e6) list_double_fisheye_pane_g5

0xbf54,	// (0x0009f627) sp_fs_scroll_pane_cp03

0xbc93,	// (0x0009f366) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xbc9f,	// (0x0009f372) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfceb,	// (0x000a33be) main_sp_fs_ctrlbar_pane_g_ParamLimits

0xbcab,	// (0x0009f37e) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0x90d5,	// (0x0009c7a8) sp_fs_scroll_pane_cp02

0xeb77,	// (0x000a224a) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0xeb77,	// (0x000a224a) popup_sp_fs_calendar_preview_list_single_pane

0xe293,	// (0x000a1966) main_cam6_pano_pane

0xa0e2,	// (0x0009d7b5) main_mup3_pane_ParamLimits

0xe293,	// (0x000a1966) main_phacti_pane

0x85ff,	// (0x0009bcd2) bg_button_pane_cp11

0x8619,	// (0x0009bcec) main_mobtv_info_pane_g2_ParamLimits

0x8619,	// (0x0009bcec) main_mobtv_info_pane_g2

0x0001,

0xfc4b,	// (0x000a331e) main_mobtv_info_pane_g_ParamLimits

0xfc4b,	// (0x000a331e) main_mobtv_info_pane_g

0x87f6,	// (0x0009bec9) sc_clock_pane_t5_ParamLimits

0x87f6,	// (0x0009bec9) sc_clock_pane_t5

0x8882,	// (0x0009bf55) main_radioblah_pane_g1_ParamLimits

0xba82,	// (0x0009f155) main_radioblah_pane_t3_ParamLimits

0xba82,	// (0x0009f155) main_radioblah_pane_t3

0xba9a,	// (0x0009f16d) main_radioblah_pane_t4_ParamLimits

0xba9a,	// (0x0009f16d) main_radioblah_pane_t4

0x88aa,	// (0x0009bf7d) main_radioblah_text_pane_ParamLimits

0x88aa,	// (0x0009bf7d) main_radioblah_text_pane

0x88bc,	// (0x0009bf8f) main_radioblah_info_pane_g1_ParamLimits

0x8955,	// (0x0009c028) main_radioblah_info_pane_t4_ParamLimits

0x8955,	// (0x0009c028) main_radioblah_info_pane_t4

0xea5b,	// (0x000a212e) main_sp_fs_calendar_pane

0x9234,	// (0x0009c907) main_phacti_pane_g1

0x923c,	// (0x0009c90f) phacti_note_pane_ParamLimits

0x923c,	// (0x0009c90f) phacti_note_pane

0xc05e,	// (0x0009f731) phacti_term_pane_ParamLimits

0xc05e,	// (0x0009f731) phacti_term_pane

0xc073,	// (0x0009f746) phacti_note_pane_t1_ParamLimits

0xc073,	// (0x0009f746) phacti_note_pane_t1

0xc08a,	// (0x0009f75d) phacti_term_pane_g1

0xc092,	// (0x0009f765) phacti_term_pane_t1_ParamLimits

0xc092,	// (0x0009f765) phacti_term_pane_t1

0xc0bc,	// (0x0009f78f) popup_sp_fs_calendar_preview_list_single_pane_g1

0xc0c4,	// (0x0009f797) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfdb0,	// (0x000a3483) popup_sp_fs_calendar_preview_list_single_pane_g

0xc0cc,	// (0x0009f79f) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xc0cc,	// (0x0009f79f) popup_sp_fs_calendar_preview_list_single_pane_t1

0xc0e2,	// (0x0009f7b5) aid_popup_sp_fs_bg_corner_pane

0x4780,	// (0x00097e53) popup_sp_fs_calendar_preview_bg_pane_g1

0xe293,	// (0x000a1966) popup_sp_fs_calendar_preview_bg_pane

0xc0ea,	// (0x0009f7bd) popup_sp_fs_calendar_preview_list_pane

0xea5b,	// (0x000a212e) bg_main_sp_fs_cale_pane_ParamLimits

0xea5b,	// (0x000a212e) bg_main_sp_fs_cale_pane

0xc0fb,	// (0x0009f7ce) listscroll_cale_mrui_pane_ParamLimits

0xc0fb,	// (0x0009f7ce) listscroll_cale_mrui_pane

0xc10f,	// (0x0009f7e2) listscroll_sp_fs_schedule_track_pane

0xc118,	// (0x0009f7eb) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0xc118,	// (0x0009f7eb) main_sp_fs_ctrlbar_pane_cp01

0xc129,	// (0x0009f7fc) main_sp_fs_ribbon_pane

0xc131,	// (0x0009f804) popup_sp_fs_cale_preview_window

0x929d,	// (0x0009c970) list_single_sp_fs_schedule_track_pane_ParamLimits

0x929d,	// (0x0009c970) list_single_sp_fs_schedule_track_pane

0xea5b,	// (0x000a212e) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0xea5b,	// (0x000a212e) bg_sp_fs_highlight_list_pane_cp03

0x92b0,	// (0x0009c983) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0x92b0,	// (0x0009c983) list_single_sp_fs_schedule_track_pane_g1

0x92bc,	// (0x0009c98f) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0x92bc,	// (0x0009c98f) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfdb5,	// (0x000a3488) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfdb5,	// (0x000a3488) list_single_sp_fs_schedule_track_pane_g

0x92c8,	// (0x0009c99b) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0x92c8,	// (0x0009c99b) list_single_sp_fs_schedule_track_pane_t1

0x92ea,	// (0x0009c9bd) sp_fs_schedule_track_pane_ParamLimits

0x92ea,	// (0x0009c9bd) sp_fs_schedule_track_pane

0xc143,	// (0x0009f816) sp_fs_schedule_track_pane_g1

0xc14b,	// (0x0009f81e) sp_fs_schedule_track_pane_g2

0xc153,	// (0x0009f826) sp_fs_schedule_track_pane_g3

0xc15b,	// (0x0009f82e) sp_fs_schedule_track_pane_g4

0xc163,	// (0x0009f836) sp_fs_schedule_track_pane_g5

0x0004,

0xfdba,	// (0x000a348d) sp_fs_schedule_track_pane_g

0x6d93,	// (0x0009a466) bg_sp_fs_schedule_viewer_highlight_g1

0xef2b,	// (0x000a25fe) bg_sp_fs_schedule_viewer_highlight_g2

0x6d9b,	// (0x0009a46e) bg_sp_fs_schedule_viewer_highlight_g3

0x6da3,	// (0x0009a476) bg_sp_fs_schedule_viewer_highlight_g4

0xab98,	// (0x0009e26b) bg_sp_fs_schedule_viewer_highlight_g5

0x6db3,	// (0x0009a486) bg_sp_fs_schedule_viewer_highlight_g6

0x6dbb,	// (0x0009a48e) bg_sp_fs_schedule_viewer_highlight_g7

0x6dc3,	// (0x0009a496) bg_sp_fs_schedule_viewer_highlight_g8

0xef0b,	// (0x000a25de) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfdc5,	// (0x000a3498) bg_sp_fs_schedule_viewer_highlight_g

0xe293,	// (0x000a1966) bg_main_sp_fs_ribbon_pane

0x92ff,	// (0x0009c9d2) main_sp_fs_ribbon_pane_g1

0xc16b,	// (0x0009f83e) main_sp_fs_ribbon_pane_t1

0x9308,	// (0x0009c9db) main_sp_fs_ribbon_pane_t2

0xc17a,	// (0x0009f84d) main_sp_fs_ribbon_pane_t3

0x0002,

0xfdd8,	// (0x000a34ab) main_sp_fs_ribbon_pane_t

0xc189,	// (0x0009f85c) main_sp_fs_ribbon_scheduler_pane

0xc191,	// (0x0009f864) bg_main_sp_fs_ribbon_pane_g1

0xc19a,	// (0x0009f86d) bg_main_sp_fs_ribbon_pane_g2

0xc1a3,	// (0x0009f876) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfddf,	// (0x000a34b2) bg_main_sp_fs_ribbon_pane_g

0xc1ab,	// (0x0009f87e) main_sp_fs_ribbon_scheduler_pane_g1

0xc1b4,	// (0x0009f887) main_sp_fs_ribbon_scheduler_pane_g2

0xc1bd,	// (0x0009f890) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfde6,	// (0x000a34b9) main_sp_fs_ribbon_scheduler_pane_g

0xc1c6,	// (0x0009f899) list_cale_mrui_pane

0x9317,	// (0x0009c9ea) sp_fs_scroll_pane_cp07_ParamLimits

0x9317,	// (0x0009c9ea) sp_fs_scroll_pane_cp07

0x932d,	// (0x0009ca00) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0x932d,	// (0x0009ca00) bg_sp_fs_schedule_viewer_highlight

0xc1cf,	// (0x0009f8a2) list_single_sp_fs_schedule_track_pane_cp01

0xc1d7,	// (0x0009f8aa) list_sp_fs_schedule_track_pane

0xc1df,	// (0x0009f8b2) sp_fs_scroll_pane_cp06_ParamLimits

0xc1df,	// (0x0009f8b2) sp_fs_scroll_pane_cp06

0x4780,	// (0x00097e53) bgmain_sp_fs_calendar_pane_g1

0x933f,	// (0x0009ca12) list_single_cale_mrui_pane_ParamLimits

0x933f,	// (0x0009ca12) list_single_cale_mrui_pane

0xc1f1,	// (0x0009f8c4) list_single_cale_mrui_row_pane_ParamLimits

0xc1f1,	// (0x0009f8c4) list_single_cale_mrui_row_pane

0xc1fe,	// (0x0009f8d1) list_single_cale_mrui_row_pane_g1_ParamLimits

0xc1fe,	// (0x0009f8d1) list_single_cale_mrui_row_pane_g1

0xc243,	// (0x0009f916) list_single_cale_mrui_row_pane_t1_ParamLimits

0xc243,	// (0x0009f916) list_single_cale_mrui_row_pane_t1

0x9363,	// (0x0009ca36) list_single_cale_mrui_row_pane_t2_ParamLimits

0x9363,	// (0x0009ca36) list_single_cale_mrui_row_pane_t2

0xc255,	// (0x0009f928) list_single_cale_mrui_row_pane_t3_ParamLimits

0xc255,	// (0x0009f928) list_single_cale_mrui_row_pane_t3

0xc284,	// (0x0009f957) list_single_cale_mrui_row_pane_t4_ParamLimits

0xc284,	// (0x0009f957) list_single_cale_mrui_row_pane_t4

0x0003,

0xfdf4,	// (0x000a34c7) list_single_cale_mrui_row_pane_t_ParamLimits

0xfdf4,	// (0x000a34c7) list_single_cale_mrui_row_pane_t

0x93c9,	// (0x0009ca9c) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x93c9,	// (0x0009ca9c) list_single_cmail_header_editor_pane_bg_cp01

0x93ed,	// (0x0009cac0) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x93ed,	// (0x0009cac0) list_single_cmail_header_editor_pane_bg_cp02

0x940b,	// (0x0009cade) main_radioblah_text_pane_t1_ParamLimits

0x940b,	// (0x0009cade) main_radioblah_text_pane_t1

0xc2b3,	// (0x0009f986) cam6_indi_pane_cp01

0xc2bb,	// (0x0009f98e) cam6_mode_pane_cp01

0xc2c3,	// (0x0009f996) cam6_pano_pane

0xc2cc,	// (0x0009f99f) cam6_zoom_pane_cp01

0xc2d6,	// (0x0009f9a9) cam6_pano_image_pane

0xc2df,	// (0x0009f9b2) cam6_pano_pane_g1

0xb7de,	// (0x0009eeb1) cam6_pano_pane_g2

0xc2e8,	// (0x0009f9bb) cam6_pano_pane_g3

0xc2f1,	// (0x0009f9c4) cam6_pano_pane_g4

0x5bb5,	// (0x00099288) cam6_pano_pane_g5

0xc2fa,	// (0x0009f9cd) cam6_pano_pane_g6

0xc302,	// (0x0009f9d5) cam6_pano_pane_g7

0xc30a,	// (0x0009f9dd) cam6_pano_pane_g8

0xc313,	// (0x0009f9e6) cam6_pano_pane_g9

0x0008,

0xfdfd,	// (0x000a34d0) cam6_pano_pane_g

0xe293,	// (0x000a1966) main_browser_tag_pane

0xc03f,	// (0x0009f712) grid_navstr_albumart_pane

0xc31e,	// (0x0009f9f1) cell_navstr_albumart_pane_ParamLimits

0xc31e,	// (0x0009f9f1) cell_navstr_albumart_pane

0xc33a,	// (0x0009fa0d) cell_navstr_albumart_pane_g1

0xdf1e,	// (0x000a15f1) cell_navstr_albumart_pane_g2

0xdf2e,	// (0x000a1601) cell_navstr_albumart_pane_g3

0xdf26,	// (0x000a15f9) cell_navstr_albumart_pane_g4

0x0003,

0xfe10,	// (0x000a34e3) cell_navstr_albumart_pane_g

0x9426,	// (0x0009caf9) bt_list_pane_ParamLimits

0x9426,	// (0x0009caf9) bt_list_pane

0x943c,	// (0x0009cb0f) bt_list_pane_t1

0x944b,	// (0x0009cb1e) bt_list_pane_t2

0x0001,

0xfe19,	// (0x000a34ec) bt_list_pane_t

0xe293,	// (0x000a1966) main_cale_prevew_pane

0x945a,	// (0x0009cb2d) popup_cale_preview_window_ParamLimits

0x945a,	// (0x0009cb2d) popup_cale_preview_window

0xea5b,	// (0x000a212e) bg_popup_preview_window_pane_cp05_ParamLimits

0xea5b,	// (0x000a212e) bg_popup_preview_window_pane_cp05

0xc342,	// (0x0009fa15) list_cale_preview_pane_ParamLimits

0xc342,	// (0x0009fa15) list_cale_preview_pane

0x9475,	// (0x0009cb48) list_double_cale_preview_pane_ParamLimits

0x9475,	// (0x0009cb48) list_double_cale_preview_pane

0x9489,	// (0x0009cb5c) list_single_cale_preview_pane_ParamLimits

0x9489,	// (0x0009cb5c) list_single_cale_preview_pane

0x94a1,	// (0x0009cb74) list_single_cale_preview_pane_g1

0x94a9,	// (0x0009cb7c) list_single_cale_preview_pane_t1_ParamLimits

0x94a9,	// (0x0009cb7c) list_single_cale_preview_pane_t1

0x94be,	// (0x0009cb91) list_double_cale_preview_pane_g1

0x94c6,	// (0x0009cb99) list_double_cale_preview_pane_t1_ParamLimits

0x94c6,	// (0x0009cb99) list_double_cale_preview_pane_t1

0x94db,	// (0x0009cbae) list_double_cale_preview_pane_t2_ParamLimits

0x94db,	// (0x0009cbae) list_double_cale_preview_pane_t2

0x0001,

0xfe1e,	// (0x000a34f1) list_double_cale_preview_pane_t_ParamLimits

0xfe1e,	// (0x000a34f1) list_double_cale_preview_pane_t

0xe293,	// (0x000a1966) main_ezdial_pane

0xea5b,	// (0x000a212e) main_sp_fs_email_pane_ParamLimits

0x8bad,	// (0x0009c280) cmail_ddmenu_btn01_pane_ParamLimits

0x8bad,	// (0x0009c280) cmail_ddmenu_btn01_pane

0x8bc0,	// (0x0009c293) cmail_ddmenu_btn02_pane_ParamLimits

0x8bc0,	// (0x0009c293) cmail_ddmenu_btn02_pane

0x8be3,	// (0x0009c2b6) cmail_ddmenu_btn03_pane_ParamLimits

0x8be3,	// (0x0009c2b6) cmail_ddmenu_btn03_pane

0x8c0e,	// (0x0009c2e1) main_sp_fs_ctrlbar_pane_ParamLimits

0x8c32,	// (0x0009c305) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0x90df,	// (0x0009c7b2) list_cmail_body_pane_ParamLimits

0xbf63,	// (0x0009f636) bg_button_pane_cp12

0xbf78,	// (0x0009f64b) list_single_cmail_header_detail_pane_g3_ParamLimits

0xbf78,	// (0x0009f64b) list_single_cmail_header_detail_pane_g3

0x916e,	// (0x0009c841) list_single_cmail_header_detail_pane_t2_ParamLimits

0x916e,	// (0x0009c841) list_single_cmail_header_detail_pane_t2

0x0001,

0xfda1,	// (0x000a3474) list_single_cmail_header_detail_pane_t_ParamLimits

0xfda1,	// (0x000a3474) list_single_cmail_header_detail_pane_t

0xc0a7,	// (0x0009f77a) phacti_term_pane_t2_ParamLimits

0xc0a7,	// (0x0009f77a) phacti_term_pane_t2

0x0001,

0xfdab,	// (0x000a347e) phacti_term_pane_t_ParamLimits

0xfdab,	// (0x000a347e) phacti_term_pane_t

0xc34e,	// (0x0009fa21) aid_size_list_single_double

0x94f3,	// (0x0009cbc6) popup_ezdial_listscroll_window

0x950f,	// (0x0009cbe2) popup_number_entry_window_cp01

0xcc64,	// (0x000a0337) bg_popup_call_pane_cp09

0xc35a,	// (0x0009fa2d) ezdial_list_pane

0xc362,	// (0x0009fa35) scroll_pane_cp23

0xe105,	// (0x000a17d8) bg_button_pane_cp028_ParamLimits

0xe105,	// (0x000a17d8) bg_button_pane_cp028

0x951d,	// (0x0009cbf0) cmail_ddmenu_btn01_pane_g1_ParamLimits

0x951d,	// (0x0009cbf0) cmail_ddmenu_btn01_pane_g1

0x952c,	// (0x0009cbff) cmail_ddmenu_btn01_pane_g2_ParamLimits

0x952c,	// (0x0009cbff) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfe23,	// (0x000a34f6) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfe23,	// (0x000a34f6) cmail_ddmenu_btn01_pane_g

0xc36a,	// (0x0009fa3d) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xc36a,	// (0x0009fa3d) cmail_ddmenu_btn01_pane_t1

0xe105,	// (0x000a17d8) bg_button_pane_cp029_ParamLimits

0xe105,	// (0x000a17d8) bg_button_pane_cp029

0x953c,	// (0x0009cc0f) cmail_ddmenu_btn02_pane_g1_ParamLimits

0x953c,	// (0x0009cc0f) cmail_ddmenu_btn02_pane_g1

0x9557,	// (0x0009cc2a) cmail_ddmenu_btn02_pane_t1_ParamLimits

0x9557,	// (0x0009cc2a) cmail_ddmenu_btn02_pane_t1

0xea5b,	// (0x000a212e) bg_button_pane_cp031_ParamLimits

0xea5b,	// (0x000a212e) bg_button_pane_cp031

0x953c,	// (0x0009cc0f) cmail_ddmenu_btn03_pane_g1_ParamLimits

0x953c,	// (0x0009cc0f) cmail_ddmenu_btn03_pane_g1

0x9557,	// (0x0009cc2a) cmail_ddmenu_btn03_pane_t1_ParamLimits

0x9557,	// (0x0009cc2a) cmail_ddmenu_btn03_pane_t1

0x63ad,	// (0x00099a80) cell_dialer2_keypad_pane_t1_ParamLimits

0x63c7,	// (0x00099a9a) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x63c7,	// (0x00099a9a) cell_dialer2_keypad_pane_t1_copy1

0x8464,	// (0x0009bb37) ncimui_group_button_pane

0xea5b,	// (0x000a212e) main_sp_fs_calendar_pane_ParamLimits

0x90f7,	// (0x0009c7ca) list_single_cmail_header_caption_pane_ParamLimits

0xc0f2,	// (0x0009f7c5) aid_recal_txt_sm_pane

0xe293,	// (0x000a1966) mian_recal_day_pane

0xc131,	// (0x0009f804) popup_sp_fs_cale_preview_window_ParamLimits

0xe293,	// (0x000a1966) list_recal_day_pane

0xc399,	// (0x0009fa6c) list_single_recal_day_pane_ParamLimits

0xc399,	// (0x0009fa6c) list_single_recal_day_pane

0xc3ab,	// (0x0009fa7e) list_single_recal_day_pane_g1_ParamLimits

0xc3ab,	// (0x0009fa7e) list_single_recal_day_pane_g1

0xc3b7,	// (0x0009fa8a) list_single_recal_day_pane_g2_ParamLimits

0xc3b7,	// (0x0009fa8a) list_single_recal_day_pane_g2

0xc3c7,	// (0x0009fa9a) list_single_recal_day_pane_g3_ParamLimits

0xc3c7,	// (0x0009fa9a) list_single_recal_day_pane_g3

0x957e,	// (0x0009cc51) list_single_recal_day_pane_g4_ParamLimits

0x957e,	// (0x0009cc51) list_single_recal_day_pane_g4

0xc3d3,	// (0x0009faa6) list_single_recal_day_pane_g5_ParamLimits

0xc3d3,	// (0x0009faa6) list_single_recal_day_pane_g5

0xc3e3,	// (0x0009fab6) list_single_recal_day_pane_g6_ParamLimits

0xc3e3,	// (0x0009fab6) list_single_recal_day_pane_g6

0x0004,

0xfe32,	// (0x000a3505) list_single_recal_day_pane_g_ParamLimits

0xfe32,	// (0x000a3505) list_single_recal_day_pane_g

0xc3fa,	// (0x0009facd) list_single_recal_day_pane_t1

0xc40c,	// (0x0009fadf) list_single_recal_day_pane_t2

0x0001,

0xfe3d,	// (0x000a3510) list_single_recal_day_pane_t

0x959e,	// (0x0009cc71) ncimui_query_button_pane_ParamLimits

0x959e,	// (0x0009cc71) ncimui_query_button_pane

0x95ae,	// (0x0009cc81) ncimui_query_button_pane_t1_ParamLimits

0x95ae,	// (0x0009cc81) ncimui_query_button_pane_t1

0xc421,	// (0x0009faf4) ncimui_query_button_pane_t2_ParamLimits

0xc421,	// (0x0009faf4) ncimui_query_button_pane_t2

0x0001,

0xfe42,	// (0x000a3515) ncimui_query_button_pane_t_ParamLimits

0xfe42,	// (0x000a3515) ncimui_query_button_pane_t

0x95c1,	// (0x0009cc94) query_button_pane_ParamLimits

0x95c1,	// (0x0009cc94) query_button_pane

0xe293,	// (0x000a1966) bg_button_pane_cp0028

0xc434,	// (0x0009fb07) query_button_pane_t1

0x3810,	// (0x00096ee3) main_tport_pane_ParamLimits

0x8fc6,	// (0x0009c699) bg_popup_window_pane_cp01_ParamLimits

0x8fc6,	// (0x0009c699) bg_popup_window_pane_cp01

0x8fe0,	// (0x0009c6b3) heading_pane_cp08_ParamLimits

0x8fe0,	// (0x0009c6b3) heading_pane_cp08

0x8ff4,	// (0x0009c6c7) heading_pane_cp07_ParamLimits

0x8ff4,	// (0x0009c6c7) heading_pane_cp07

0xbf26,	// (0x0009f5f9) cell_tport_appsw_pane_g2

0x0002,

0xfd8e,	// (0x000a3461) cell_tport_appsw_pane_g

0x2d5e,	// (0x00096431) input_candi_list_open_g1

0xa25d,	// (0x0009d930) list_cale_time_pane_g6_ParamLimits

0xa25d,	// (0x0009d930) list_cale_time_pane_g6

0x4af7,	// (0x000981ca) aid_size_touch_calib_1_ParamLimits

0x4af7,	// (0x000981ca) aid_size_touch_calib_1

0x4b09,	// (0x000981dc) aid_size_touch_calib_2_ParamLimits

0x4b09,	// (0x000981dc) aid_size_touch_calib_2

0x4b21,	// (0x000981f4) aid_size_touch_calib_3_ParamLimits

0x4b21,	// (0x000981f4) aid_size_touch_calib_3

0x4b3f,	// (0x00098212) aid_size_touch_calib_4_ParamLimits

0x4b3f,	// (0x00098212) aid_size_touch_calib_4

0x4b57,	// (0x0009822a) main_touch_calib_button_group_pane_ParamLimits

0x4b57,	// (0x0009822a) main_touch_calib_button_group_pane

0x4b6f,	// (0x00098242) main_touch_calib_pane_g1_ParamLimits

0x4b81,	// (0x00098254) main_touch_calib_pane_g2_ParamLimits

0x4b93,	// (0x00098266) main_touch_calib_pane_g3_ParamLimits

0x4ba5,	// (0x00098278) main_touch_calib_pane_g4_ParamLimits

0xf761,	// (0x000a2e34) main_touch_calib_pane_g_ParamLimits

0x4bb7,	// (0x0009828a) main_touch_calib_pane_t1_ParamLimits

0x4bd1,	// (0x000982a4) main_touch_calib_pane_t2_ParamLimits

0x4beb,	// (0x000982be) main_touch_calib_pane_t3_ParamLimits

0x4bff,	// (0x000982d2) main_touch_calib_pane_t4_ParamLimits

0x4c15,	// (0x000982e8) main_touch_calib_pane_t5_ParamLimits

0xf76a,	// (0x000a2e3d) main_touch_calib_pane_t_ParamLimits

0x543f,	// (0x00098b12) list_single_fp_cale_pane_g3_ParamLimits

0x543f,	// (0x00098b12) list_single_fp_cale_pane_g3

0xa0e2,	// (0x0009d7b5) bg_button_pane_cp012_ParamLimits

0xa0e2,	// (0x0009d7b5) bg_vkb2_func_pane_cp03_ParamLimits

0x75f6,	// (0x0009acc9) cell_vitu2_function_top_pane_g1_ParamLimits

0xa0e2,	// (0x0009d7b5) bg_vkb2_func_pane_cp04_ParamLimits

0x83f2,	// (0x0009bac5) main_ncimui_button_group_pane_ParamLimits

0x83f2,	// (0x0009bac5) main_ncimui_button_group_pane

0x8452,	// (0x0009bb25) main_ncimui_pane_t3_ParamLimits

0x8452,	// (0x0009bb25) main_ncimui_pane_t3

0xc055,	// (0x0009f728) phacti_button_group_pane

0xc34e,	// (0x0009fa21) aid_size_list_single_double_ParamLimits

0x94f3,	// (0x0009cbc6) popup_ezdial_listscroll_window_ParamLimits

0x950f,	// (0x0009cbe2) popup_number_entry_window_cp01_ParamLimits

0x95d4,	// (0x0009cca7) phacti_button_pane_ParamLimits

0x95d4,	// (0x0009cca7) phacti_button_pane

0xe293,	// (0x000a1966) bg_button_pane_cp14

0xc442,	// (0x0009fb15) phacti_button_pane_t1

0x95e5,	// (0x0009ccb8) main_touch_calib_button_pane_ParamLimits

0x95e5,	// (0x0009ccb8) main_touch_calib_button_pane

0xea13,	// (0x000a20e6) bg_button_pane_cp18_ParamLimits

0xea13,	// (0x000a20e6) bg_button_pane_cp18

0xc450,	// (0x0009fb23) main_touch_calib_button_pane_t1_ParamLimits

0xc450,	// (0x0009fb23) main_touch_calib_button_pane_t1

0xc466,	// (0x0009fb39) main_touch_calib_button_pane_t2_ParamLimits

0xc466,	// (0x0009fb39) main_touch_calib_button_pane_t2

0x0001,

0xfe47,	// (0x000a351a) main_touch_calib_button_pane_t_ParamLimits

0xfe47,	// (0x000a351a) main_touch_calib_button_pane_t

0xe293,	// (0x000a1966) cell_ncimui_button_pane

0xe293,	// (0x000a1966) bg_button_pane_cp032

0xc484,	// (0x0009fb57) cell_ncimui_button_pane_t1

0xa8bd,	// (0x0009df90) image3_infobar_pane_ParamLimits

0xa8bd,	// (0x0009df90) image3_infobar_pane

0x8822,	// (0x0009bef5) fs_bigclock_status_pane_ParamLimits

0x8822,	// (0x0009bef5) fs_bigclock_status_pane

0x882f,	// (0x0009bf02) main_fs_bigclock_clock_pane_ParamLimits

0x882f,	// (0x0009bf02) main_fs_bigclock_clock_pane

0x8843,	// (0x0009bf16) main_fs_bigclock_indi_pane_ParamLimits

0x8843,	// (0x0009bf16) main_fs_bigclock_indi_pane

0x885e,	// (0x0009bf31) main_fs_bigclock_swipe_pane_ParamLimits

0x885e,	// (0x0009bf31) main_fs_bigclock_swipe_pane

0xe293,	// (0x000a1966) main_fs_clock_dumped_data

0xb8eb,	// (0x0009efbe) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xb8eb,	// (0x0009efbe) list_single_fs_bigclock_indicator_pane_g1

0xb915,	// (0x0009efe8) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xb915,	// (0x0009efe8) list_single_fs_bigclock_indicator_pane_g2

0xb92f,	// (0x0009f002) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xb92f,	// (0x0009f002) list_single_fs_bigclock_indicator_pane_g3

0xb949,	// (0x0009f01c) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xb949,	// (0x0009f01c) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfc7f,	// (0x000a3352) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfc7f,	// (0x000a3352) list_single_fs_bigclock_indicator_pane_g

0xb974,	// (0x0009f047) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xb974,	// (0x0009f047) list_single_fs_bigclock_indicator_pane_t1

0xb99c,	// (0x0009f06f) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xb99c,	// (0x0009f06f) list_single_fs_bigclock_indicator_pane_t2

0xb9c4,	// (0x0009f097) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xb9c4,	// (0x0009f097) list_single_fs_bigclock_indicator_pane_t3

0xb9ec,	// (0x0009f0bf) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xb9ec,	// (0x0009f0bf) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfc8a,	// (0x000a335d) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfc8a,	// (0x000a335d) list_single_fs_bigclock_indicator_pane_t

0xc492,	// (0x0009fb65) image3_infobar_fav_pane_ParamLimits

0xc492,	// (0x0009fb65) image3_infobar_fav_pane

0xc4a2,	// (0x0009fb75) image3_infobar_loc_pane_ParamLimits

0xc4a2,	// (0x0009fb75) image3_infobar_loc_pane

0xc4b8,	// (0x0009fb8b) image3_infobar_time_pane_ParamLimits

0xc4b8,	// (0x0009fb8b) image3_infobar_time_pane

0x4780,	// (0x00097e53) image3_infobar_time_pane_g1

0xc4c8,	// (0x0009fb9b) image3_infobar_time_pane_t1

0x4780,	// (0x00097e53) image3_infobar_loc_pane_g1

0xc4d6,	// (0x0009fba9) image3_infobar_loc_pane_g2

0x0001,

0xfe4c,	// (0x000a351f) image3_infobar_loc_pane_g

0xc4de,	// (0x0009fbb1) image3_infobar_loc_pane_t1

0x4780,	// (0x00097e53) image3_infobar_fav_pane_g1

0xc4ec,	// (0x0009fbbf) image3_infobar_fav_pane_g2

0x0001,

0xfe51,	// (0x000a3524) image3_infobar_fav_pane_g

0xc4f4,	// (0x0009fbc7) fs_bigclock_status_battery_pane

0xc4fd,	// (0x0009fbd0) fs_bigclock_status_signal_pane

0xc506,	// (0x0009fbd9) fs_bigclock_status_title_pane

0xc50f,	// (0x0009fbe2) fs_bigclock_status_signal_pane_g1

0xc518,	// (0x0009fbeb) fs_bigclock_status_signal_pane_g2

0x0001,

0xfe56,	// (0x000a3529) fs_bigclock_status_signal_pane_g

0xc520,	// (0x0009fbf3) fs_bigclock_status_battery_pane_g1

0xc529,	// (0x0009fbfc) fs_bigclock_status_battery_pane_g2

0x0001,

0xfe5b,	// (0x000a352e) fs_bigclock_status_battery_pane_g

0xc531,	// (0x0009fc04) fs_bigclock_status_title_pane_t1

0x4780,	// (0x00097e53) main_fs_bigclock_clock_pane_g1

0xc53f,	// (0x0009fc12) main_fs_bigclock_clock_pane_g2

0xc53f,	// (0x0009fc12) main_fs_bigclock_clock_pane_g3

0xc53f,	// (0x0009fc12) main_fs_bigclock_clock_pane_g4

0x0003,

0xfe60,	// (0x000a3533) main_fs_bigclock_clock_pane_g

0xc547,	// (0x0009fc1a) main_fs_bigclock_clock_pane_t1

0xc555,	// (0x0009fc28) main_fs_bigclock_clock_pane_t2

0x0001,

0xfe69,	// (0x000a353c) main_fs_bigclock_clock_pane_t

0x95fa,	// (0x0009cccd) list_single_fs_bigclock_indicator_pane_ParamLimits

0x95fa,	// (0x0009cccd) list_single_fs_bigclock_indicator_pane

0x960b,	// (0x0009ccde) list_single_fs_bigclock_pane_ParamLimits

0x960b,	// (0x0009ccde) list_single_fs_bigclock_pane

0xc56d,	// (0x0009fc40) main_fs_bigclock_indicator_pane_t1

0xc57c,	// (0x0009fc4f) list_single_fs_bigclock_pane_g1

0xc584,	// (0x0009fc57) list_single_fs_bigclock_pane_t1

0x4780,	// (0x00097e53) main_fs_bigclock_swipe_pane_g1

0xc5c7,	// (0x0009fc9a) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfe7a,	// (0x000a354d) main_fs_bigclock_swipe_pane_g

0xc5cf,	// (0x0009fca2) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xc5cf,	// (0x0009fca2) main_fs_bigclock_swipe_pane_t1

0x24ce,	// (0x00095ba1) call_type_pane_ParamLimits

0xe293,	// (0x000a1966) main_btmg_pane

0xc22a,	// (0x0009f8fd) list_single_cale_mrui_row_pane_g2_ParamLimits

0xc22a,	// (0x0009f8fd) list_single_cale_mrui_row_pane_g2

0x0002,

0xfded,	// (0x000a34c0) list_single_cale_mrui_row_pane_g_ParamLimits

0xfded,	// (0x000a34c0) list_single_cale_mrui_row_pane_g

0xc389,	// (0x0009fa5c) list_recal_vselct_arw_lo_pane

0xc391,	// (0x0009fa64) list_recal_vselct_arw_up_pane

0xaf1f,	// (0x0009e5f2) list_recal_vselct_pane

0x966e,	// (0x0009cd41) btmg_button_pane

0x9678,	// (0x0009cd4b) main_btmg_pane_g1

0xe293,	// (0x000a1966) bg_button_pane_cp044

0xc5ec,	// (0x0009fcbf) btmg_button_pane_t1

0xe0fd,	// (0x000a17d0) aid_listscroll_gen

0xea5b,	// (0x000a212e) main_cntbar_detail_pane

0xbf44,	// (0x0009f617) list_cmail_folder_pane

0xbf54,	// (0x0009f627) sp_fs_scroll_pane_cp03_ParamLimits

0x9682,	// (0x0009cd55) list_single_fs_dyc_pane_cp01_ParamLimits

0x9682,	// (0x0009cd55) list_single_fs_dyc_pane_cp01

0xc5fa,	// (0x0009fccd) aid_size_cmail_indent

0xc603,	// (0x0009fcd6) list_single_dyc_row_pane_cp01

0x96cc,	// (0x0009cd9f) cntbar_detail_list_pane_ParamLimits

0x96cc,	// (0x0009cd9f) cntbar_detail_list_pane

0x971e,	// (0x0009cdf1) main_cntbar_detail_cont_pane_ParamLimits

0x971e,	// (0x0009cdf1) main_cntbar_detail_cont_pane

0x2468,	// (0x00095b3b) scroll_pane_cp032_ParamLimits

0x2468,	// (0x00095b3b) scroll_pane_cp032

0x9732,	// (0x0009ce05) cntbar_detail_list_event_pane_ParamLimits

0x9732,	// (0x0009ce05) cntbar_detail_list_event_pane

0x96de,	// (0x0009cdb1) cntbar_detail_list_shct_pane

0xef79,	// (0x000a264c) aid_list_gen

0xc60c,	// (0x0009fcdf) aid_scroll

0xc615,	// (0x0009fce8) aid_size_touch_scroll_bar

0x9742,	// (0x0009ce15) aid_list_double

0x974b,	// (0x0009ce1e) aid_list_single

0x9755,	// (0x0009ce28) aid_list_single_lg

0xc61e,	// (0x0009fcf1) aid_list_z_g_a_sm

0xc626,	// (0x0009fcf9) aid_list_z_g_d

0x975e,	// (0x0009ce31) aid_txt_z_prm

0x976e,	// (0x0009ce41) aid_txt_z_prm_cp01

0x977c,	// (0x0009ce4f) aid_txt_z_sec

0x978a,	// (0x0009ce5d) main_cntbar_detail_cont_pane_g1_ParamLimits

0x978a,	// (0x0009ce5d) main_cntbar_detail_cont_pane_g1

0x979e,	// (0x0009ce71) main_cntbar_detail_cont_pane_g2_ParamLimits

0x979e,	// (0x0009ce71) main_cntbar_detail_cont_pane_g2

0x0001,

0xfe7f,	// (0x000a3552) main_cntbar_detail_cont_pane_g_ParamLimits

0xfe7f,	// (0x000a3552) main_cntbar_detail_cont_pane_g

0xc62e,	// (0x0009fd01) main_cntbar_detail_cont_pane_t1

0xc63c,	// (0x0009fd0f) main_cntbar_detail_cont_pane_t2

0xc64a,	// (0x0009fd1d) main_cntbar_detail_cont_pane_t3

0x0002,

0xfe84,	// (0x000a3557) main_cntbar_detail_cont_pane_t

0x97ae,	// (0x0009ce81) cell_cntbar_detail_list_shct_pane_ParamLimits

0x97ae,	// (0x0009ce81) cell_cntbar_detail_list_shct_pane

0xc658,	// (0x0009fd2b) cntbar_detail_list_shct_pane_g1

0xc661,	// (0x0009fd34) cntbar_detail_list_shct_pane_g2

0x0001,

0xfe8b,	// (0x000a355e) cntbar_detail_list_shct_pane_g

0x97c0,	// (0x0009ce93) cntbar_detail_list_event_pane_g1_ParamLimits

0x97c0,	// (0x0009ce93) cntbar_detail_list_event_pane_g1

0x97cc,	// (0x0009ce9f) cntbar_detail_list_event_pane_g2_ParamLimits

0x97cc,	// (0x0009ce9f) cntbar_detail_list_event_pane_g2

0x0005,

0xfe90,	// (0x000a3563) cntbar_detail_list_event_pane_g_ParamLimits

0xfe90,	// (0x000a3563) cntbar_detail_list_event_pane_g

0x983a,	// (0x0009cf0d) cntbar_detail_list_event_pane_t1_ParamLimits

0x983a,	// (0x0009cf0d) cntbar_detail_list_event_pane_t1

0x984f,	// (0x0009cf22) cntbar_detail_list_event_pane_t2_ParamLimits

0x984f,	// (0x0009cf22) cntbar_detail_list_event_pane_t2

0x0002,

0xfe9d,	// (0x000a3570) cntbar_detail_list_event_pane_t_ParamLimits

0xfe9d,	// (0x000a3570) cntbar_detail_list_event_pane_t

0x4780,	// (0x00097e53) cell_cntbar_detail_list_shct_pane_g1

0x2888,	// (0x00095f5b) navi_pane_mv_g3

0xea5b,	// (0x000a212e) main_cntbar_detail_pane_ParamLimits

0xe293,	// (0x000a1966) main_notif_wgt_pane

0xa6cb,	// (0x0009dd9e) aid_tch_main_mp4_pane_g4

0xa8a9,	// (0x0009df7c) popup_slider_window_cp02

0xc37f,	// (0x0009fa52) list_recal_day_event_pane

0x969c,	// (0x0009cd6f) cntbar_detail_btn_pane_ParamLimits

0x969c,	// (0x0009cd6f) cntbar_detail_btn_pane

0x96b4,	// (0x0009cd87) cntbar_detail_btn_pane_cp01_ParamLimits

0x96b4,	// (0x0009cd87) cntbar_detail_btn_pane_cp01

0x96de,	// (0x0009cdb1) cntbar_detail_list_shct_pane_ParamLimits

0x96ee,	// (0x0009cdc1) cntbar_detail_pane_g1_ParamLimits

0x96ee,	// (0x0009cdc1) cntbar_detail_pane_g1

0x9702,	// (0x0009cdd5) cntbar_detail_pane_t1_ParamLimits

0x9702,	// (0x0009cdd5) cntbar_detail_pane_t1

0x97d8,	// (0x0009ceab) cntbar_detail_list_event_pane_g3_ParamLimits

0x97d8,	// (0x0009ceab) cntbar_detail_list_event_pane_g3

0x97f0,	// (0x0009cec3) cntbar_detail_list_event_pane_g4_ParamLimits

0x97f0,	// (0x0009cec3) cntbar_detail_list_event_pane_g4

0x9808,	// (0x0009cedb) cntbar_detail_list_event_pane_g5_ParamLimits

0x9808,	// (0x0009cedb) cntbar_detail_list_event_pane_g5

0x9820,	// (0x0009cef3) cntbar_detail_list_event_pane_g6_ParamLimits

0x9820,	// (0x0009cef3) cntbar_detail_list_event_pane_g6

0x9864,	// (0x0009cf37) cntbar_detail_list_event_pane_t3_ParamLimits

0x9864,	// (0x0009cf37) cntbar_detail_list_event_pane_t3

0x9876,	// (0x0009cf49) popup_notif_wgt_window_ParamLimits

0x9876,	// (0x0009cf49) popup_notif_wgt_window

0x988f,	// (0x0009cf62) popup_submenu_window_cp01_ParamLimits

0x988f,	// (0x0009cf62) popup_submenu_window_cp01

0xcc64,	// (0x000a0337) bg_popup_window_pane_cp10

0xc66a,	// (0x0009fd3d) listscroll_notif_wgt_pane

0xc67c,	// (0x0009fd4f) list_notif_wgt_window

0xc685,	// (0x0009fd58) scroll_pane_cp033

0x98a3,	// (0x0009cf76) list_notif_wgt_row_pane_ParamLimits

0x98a3,	// (0x0009cf76) list_notif_wgt_row_pane

0xc68e,	// (0x0009fd61) aid_size_list_notif_wgt_del

0xc69b,	// (0x0009fd6e) list_notif_wgt_row_pane_g1

0xc6a7,	// (0x0009fd7a) list_notif_wgt_row_pane_g2

0xc6b3,	// (0x0009fd86) list_notif_wgt_row_pane_g3

0x0002,

0xfea4,	// (0x000a3577) list_notif_wgt_row_pane_g

0xc6c0,	// (0x0009fd93) list_notif_wgt_row_pane_t1

0xc6d5,	// (0x0009fda8) list_notif_wgt_row_pane_t2

0xc6e7,	// (0x0009fdba) list_notif_wgt_row_pane_t3

0x0002,

0xfeab,	// (0x000a357e) list_notif_wgt_row_pane_t

0xabf2,	// (0x0009e2c5) list_recal_day_event_pane_g1

0xc6f9,	// (0x0009fdcc) list_recal_day_event_pane_t1

0xe293,	// (0x000a1966) bg_button_pane_cp045

0xc708,	// (0x0009fddb) cntbar_detail_btn_pane_t1

0xe105,	// (0x000a17d8) main_callh_pane_ParamLimits

0xe105,	// (0x000a17d8) main_callh_pane

0xe293,	// (0x000a1966) main_coverflow0_pane

0xe293,	// (0x000a1966) main_wgtman_pane

0x886c,	// (0x0009bf3f) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x886c,	// (0x0009bf3f) main_fs_bigclock_unlock_btn_pane

0xbf1e,	// (0x0009f5f1) bg_button_pane_cp16

0xbf2e,	// (0x0009f601) cell_tport_appsw_pane_g3

0x98b3,	// (0x0009cf86) cf0_flow_pane_ParamLimits

0x98b3,	// (0x0009cf86) cf0_flow_pane

0xc716,	// (0x0009fde9) listscroll_cf0_pane

0xc721,	// (0x0009fdf4) main_cf0_pane_g1

0x98c8,	// (0x0009cf9b) main_cf0_pane_t1_ParamLimits

0x98c8,	// (0x0009cf9b) main_cf0_pane_t1

0x98df,	// (0x0009cfb2) main_cf0_pane_t2_ParamLimits

0x98df,	// (0x0009cfb2) main_cf0_pane_t2

0x0001,

0xfeb2,	// (0x000a3585) main_cf0_pane_t_ParamLimits

0xfeb2,	// (0x000a3585) main_cf0_pane_t

0xc72b,	// (0x0009fdfe) scroll_pane_cp11

0x98f6,	// (0x0009cfc9) cf0_flow_pane_g1

0x9902,	// (0x0009cfd5) cf0_flow_pane_g2

0x0001,

0xfeb7,	// (0x000a358a) cf0_flow_pane_g

0x990e,	// (0x0009cfe1) cf0_flow_pane_t1

0xe293,	// (0x000a1966) main_call6_pane

0xe293,	// (0x000a1966) main_calllock_pane

0x9920,	// (0x0009cff3) call6_btn_grp_pane_ParamLimits

0x9920,	// (0x0009cff3) call6_btn_grp_pane

0x993a,	// (0x0009d00d) call6_pane_g1_ParamLimits

0x993a,	// (0x0009d00d) call6_pane_g1

0x9950,	// (0x0009d023) popup_call6_1st_window_ParamLimits

0x9950,	// (0x0009d023) popup_call6_1st_window

0x9961,	// (0x0009d034) popup_call6_2nd_window_ParamLimits

0x9961,	// (0x0009d034) popup_call6_2nd_window

0x9972,	// (0x0009d045) cell_call6_btn_pane_ParamLimits

0x9972,	// (0x0009d045) cell_call6_btn_pane

0xcc64,	// (0x000a0337) bg_popup_call2_in_pane_cp03

0xc736,	// (0x0009fe09) popup_call6_1st_window_g1

0xc73e,	// (0x0009fe11) popup_call6_1st_window_g2

0xc746,	// (0x0009fe19) popup_call6_1st_window_g3

0x0002,

0xfebc,	// (0x000a358f) popup_call6_1st_window_g

0xc74e,	// (0x0009fe21) popup_call6_1st_window_t1

0xc75d,	// (0x0009fe30) popup_call6_1st_window_t2

0xc76d,	// (0x0009fe40) popup_call6_1st_window_t3

0x0002,

0xfec3,	// (0x000a3596) popup_call6_1st_window_t

0xcc64,	// (0x000a0337) bg_popup_call2_in_pane_cp04

0xc736,	// (0x0009fe09) popup_call6_2nd_window_g1

0xc73e,	// (0x0009fe11) popup_call6_2nd_window_g2

0xc746,	// (0x0009fe19) popup_call6_2nd_window_g3

0x0002,

0xfebc,	// (0x000a358f) popup_call6_2nd_window_g

0xc74e,	// (0x0009fe21) popup_call6_2nd_window_t1

0xe293,	// (0x000a1966) bg_button_pane_cp15

0xc77d,	// (0x0009fe50) cell_call6_btn_pane_g1

0xc786,	// (0x0009fe59) cell_call6_btn_pane_t1

0x9986,	// (0x0009d059) listscroll_wgtman_pane_ParamLimits

0x9986,	// (0x0009d059) listscroll_wgtman_pane

0x99a9,	// (0x0009d07c) wgtman_btn_pane_ParamLimits

0x99a9,	// (0x0009d07c) wgtman_btn_pane

0xcb2a,	// (0x000a01fd) aid_scroll_copy1

0xc795,	// (0x0009fe68) list_wgtman_pane

0x99ec,	// (0x0009d0bf) wgtman_btn_pane_g1_ParamLimits

0x99ec,	// (0x0009d0bf) wgtman_btn_pane_g1

0x9a18,	// (0x0009d0eb) wgtman_btn_pane_t1_ParamLimits

0x9a18,	// (0x0009d0eb) wgtman_btn_pane_t1

0xc79f,	// (0x0009fe72) wgtman_btn_pane_t2_ParamLimits

0xc79f,	// (0x0009fe72) wgtman_btn_pane_t2

0x0001,

0xfeca,	// (0x000a359d) wgtman_btn_pane_t_ParamLimits

0xfeca,	// (0x000a359d) wgtman_btn_pane_t

0x9a55,	// (0x0009d128) listrow_wgtman_pane_ParamLimits

0x9a55,	// (0x0009d128) listrow_wgtman_pane

0x9a69,	// (0x0009d13c) listrow_wgtman_pane_g1

0x9a76,	// (0x0009d149) listrow_wgtman_pane_g2

0x0001,

0xfecf,	// (0x000a35a2) listrow_wgtman_pane_g

0x9a94,	// (0x0009d167) listrow_wgtman_pane_t1

0x9aac,	// (0x0009d17f) listrow_wgtman_pane_t2

0x0001,

0xfed4,	// (0x000a35a7) listrow_wgtman_pane_t

0x9ad2,	// (0x0009d1a5) wait_bar_pane_cp09

0xc7b6,	// (0x0009fe89) main_calllock_btn_pane

0xc7c0,	// (0x0009fe93) main_calllock_pane_g1

0xe293,	// (0x000a1966) bg_button_pane_cp17

0xc7cc,	// (0x0009fe9f) main_calllock_btn_pane_g1

0xc7d5,	// (0x0009fea8) main_calllock_btn_pane_t1

0xe293,	// (0x000a1966) main_dialer3_pane

0xe293,	// (0x000a1966) main_fmrd2_pane

0x4780,	// (0x00097e53) main_fs_bigclock_unlock_btn_pane_g1

0xc7ec,	// (0x0009febf) main_fs_bigclock_unlock_btn_pane_t1

0x9ae4,	// (0x0009d1b7) area_fmrd2_info_pane_ParamLimits

0x9ae4,	// (0x0009d1b7) area_fmrd2_info_pane

0x9af5,	// (0x0009d1c8) area_fmrd2_visual_pane_ParamLimits

0x9af5,	// (0x0009d1c8) area_fmrd2_visual_pane

0x9b03,	// (0x0009d1d6) fmrd2_indi_pane_ParamLimits

0x9b03,	// (0x0009d1d6) fmrd2_indi_pane

0x9b10,	// (0x0009d1e3) area_fmrd2_visual_pane_g1

0x9b18,	// (0x0009d1eb) area_fmrd2_visual_pane_t1

0x9b28,	// (0x0009d1fb) area_fmrd2_visual_pane_t2

0x9b38,	// (0x0009d20b) area_fmrd2_visual_pane_t3

0x0002,

0xfede,	// (0x000a35b1) area_fmrd2_visual_pane_t

0x9b48,	// (0x0009d21b) area_fmrd2_info_pane_g1

0x9b50,	// (0x0009d223) area_fmrd2_info_pane_t1

0x9b60,	// (0x0009d233) area_fmrd2_info_pane_t2

0x9b70,	// (0x0009d243) area_fmrd2_info_pane_t3

0x9b80,	// (0x0009d253) area_fmrd2_info_pane_t4

0x0003,

0xfee5,	// (0x000a35b8) area_fmrd2_info_pane_t

0x9b90,	// (0x0009d263) fmrd2_indi_pane_t1

0x9ba0,	// (0x0009d273) fmrd2_indi_pane_t2

0x9bb0,	// (0x0009d283) fmrd2_indi_pane_t3

0x0002,

0xfeee,	// (0x000a35c1) fmrd2_indi_pane_t

0xb958,	// (0x0009f02b) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xb958,	// (0x0009f02b) list_single_fs_bigclock_indicator_pane_g5

0xba01,	// (0x0009f0d4) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xba01,	// (0x0009f0d4) list_single_fs_bigclock_indicator_pane_t5

0x9250,	// (0x0009c923) aid_cell_bcale_month_pane_ParamLimits

0x9250,	// (0x0009c923) aid_cell_bcale_month_pane

0x9268,	// (0x0009c93b) bcale_month_pane_ParamLimits

0x9268,	// (0x0009c93b) bcale_month_pane

0x927f,	// (0x0009c952) bcale_preview_pane_ParamLimits

0x927f,	// (0x0009c952) bcale_preview_pane

0xc584,	// (0x0009fc57) list_single_fs_bigclock_pane_t1_ParamLimits

0xc5a3,	// (0x0009fc76) list_single_fs_bigclock_pane_t2_ParamLimits

0xc5a3,	// (0x0009fc76) list_single_fs_bigclock_pane_t2

0x0001,

0xfe75,	// (0x000a3548) list_single_fs_bigclock_pane_t_ParamLimits

0xfe75,	// (0x000a3548) list_single_fs_bigclock_pane_t

0xc7e4,	// (0x0009feb7) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfed9,	// (0x000a35ac) main_fs_bigclock_unlock_btn_pane_g

0x9bc0,	// (0x0009d293) aid_dia3_key_size_ParamLimits

0x9bc0,	// (0x0009d293) aid_dia3_key_size

0x9bcf,	// (0x0009d2a2) aid_dia3_listrow_size_ParamLimits

0x9bcf,	// (0x0009d2a2) aid_dia3_listrow_size

0x9be4,	// (0x0009d2b7) dia3_keypad_fun_pane_ParamLimits

0x9be4,	// (0x0009d2b7) dia3_keypad_fun_pane

0x9c00,	// (0x0009d2d3) dia3_keypad_num_pane_ParamLimits

0x9c00,	// (0x0009d2d3) dia3_keypad_num_pane

0x9c19,	// (0x0009d2ec) dia3_listscroll_pane_ParamLimits

0x9c19,	// (0x0009d2ec) dia3_listscroll_pane

0x9c2c,	// (0x0009d2ff) dia3_numentry_pane_ParamLimits

0x9c2c,	// (0x0009d2ff) dia3_numentry_pane

0xc7fa,	// (0x0009fecd) dia3_list_pane

0xc805,	// (0x0009fed8) scroll_pane_cp12

0xe293,	// (0x000a1966) bg_dia3_numentry_pane

0x9c40,	// (0x0009d313) dia3_numentry_pane_t1

0x9c4f,	// (0x0009d322) cell_dia3_key_num_pane

0x9c57,	// (0x0009d32a) cell_dia3_key0_fun_pane_ParamLimits

0x9c57,	// (0x0009d32a) cell_dia3_key0_fun_pane

0x9c6b,	// (0x0009d33e) cell_dia3_key1_fun_pane_ParamLimits

0x9c6b,	// (0x0009d33e) cell_dia3_key1_fun_pane

0x9c83,	// (0x0009d356) dia3_listrow_pane

0xb648,	// (0x0009ed1b) bg_dia3_numentry_pane_g1

0xe293,	// (0x000a1966) bg_button_pane_cp21

0xc810,	// (0x0009fee3) cell_dia3_key_num_pane_t1

0xc81e,	// (0x0009fef1) cell_dia3_key_num_pane_t2

0xc82d,	// (0x0009ff00) cell_dia3_key_num_pane_t3

0xc83c,	// (0x0009ff0f) cell_dia3_key_num_pane_t4

0x0003,

0xfef5,	// (0x000a35c8) cell_dia3_key_num_pane_t

0xe293,	// (0x000a1966) bg_button_pane_cp19

0x9c95,	// (0x0009d368) cell_dia3_key0_fun_pane_g1

0xe293,	// (0x000a1966) bg_button_pane_cp20

0x9c9d,	// (0x0009d370) cell_dia3_key1_fun_pane_g1

0x9ca5,	// (0x0009d378) area_left_week_number_pane

0x9cb1,	// (0x0009d384) area_top_day_name_pane

0x9cbd,	// (0x0009d390) frame_month_view_pane

0x9cc9,	// (0x0009d39c) grid_month_view_pane

0xc84b,	// (0x0009ff1e) cell_top_day_name_pane_ParamLimits

0xc84b,	// (0x0009ff1e) cell_top_day_name_pane

0x9cd5,	// (0x0009d3a8) cell_area_left_week_number_pane_ParamLimits

0x9cd5,	// (0x0009d3a8) cell_area_left_week_number_pane

0x9ceb,	// (0x0009d3be) cell_month_view_pane_ParamLimits

0x9ceb,	// (0x0009d3be) cell_month_view_pane

0xc867,	// (0x0009ff3a) frm_month_g1

0x9d0c,	// (0x0009d3df) frm_month_g2

0x9d16,	// (0x0009d3e9) frm_month_g3

0x9d20,	// (0x0009d3f3) frm_month_g4

0x9d2a,	// (0x0009d3fd) frm_month_g5

0x9d34,	// (0x0009d407) frm_month_g6

0x9d40,	// (0x0009d413) frm_month_g7

0xc870,	// (0x0009ff43) frm_month_g8

0xc879,	// (0x0009ff4c) frm_month_g9

0xc882,	// (0x0009ff55) frm_month_g10

0xc88b,	// (0x0009ff5e) frm_month_g11

0xc894,	// (0x0009ff67) frm_month_g12

0xc89d,	// (0x0009ff70) frm_month_g13

0xc8a8,	// (0x0009ff7b) frm_month_g14

0xc8b3,	// (0x0009ff86) frm_month_g15

0xc8be,	// (0x0009ff91) frm_month_g16

0x000f,

0xfefe,	// (0x000a35d1) frm_month_g

0x9d4c,	// (0x0009d41f) cell_top_day_name_pane_t1

0x9d5b,	// (0x0009d42e) cell_area_left_week_number_pane_g1

0x9d63,	// (0x0009d436) cell_area_left_week_number_pane_t1

0x4780,	// (0x00097e53) cell_month_view_pane_g1

0x9d72,	// (0x0009d445) cell_month_view_pane_t1

0xe293,	// (0x000a1966) main_fps_pane

0xbc59,	// (0x0009f32c) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xbc59,	// (0x0009f32c) cmail_ddmenu_btn02_pane_cp1

0xbc75,	// (0x0009f348) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xbc75,	// (0x0009f348) cmail_ddmenu_btn02_pane_cp2

0x954b,	// (0x0009cc1e) cmail_ddmenu_btn02_pane_g2_ParamLimits

0x954b,	// (0x0009cc1e) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfe28,	// (0x000a34fb) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfe28,	// (0x000a34fb) cmail_ddmenu_btn02_pane_g

0x956c,	// (0x0009cc3f) cmail_ddmenu_btn02_pane_t2_ParamLimits

0x956c,	// (0x0009cc3f) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfe2d,	// (0x000a3500) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfe2d,	// (0x000a3500) cmail_ddmenu_btn02_pane_t

0x9d81,	// (0x0009d454) fps_text_pane_ParamLimits

0x9d81,	// (0x0009d454) fps_text_pane

0x9d98,	// (0x0009d46b) main_fps_pane_g1_ParamLimits

0x9d98,	// (0x0009d46b) main_fps_pane_g1

0x9db0,	// (0x0009d483) wait_bar_pane_cp010_ParamLimits

0x9db0,	// (0x0009d483) wait_bar_pane_cp010

0x9dc3,	// (0x0009d496) fps_text_pane_t1_ParamLimits

0x9dc3,	// (0x0009d496) fps_text_pane_t1

0x6948,	// (0x0009a01b) cam4_image_uncrop_pane_g1

0x6951,	// (0x0009a024) cam4_image_uncrop_pane_g2

0x695c,	// (0x0009a02f) cam4_image_uncrop_pane_g3

0x6965,	// (0x0009a038) cam4_image_uncrop_pane_g4

0x0003,

0xf8f9,	// (0x000a2fcc) cam4_image_uncrop_pane_g

0x9c83,	// (0x0009d356) dia3_listrow_pane_ParamLimits

0xe293,	// (0x000a1966) main_phob2_pane

0x9063,	// (0x0009c736) cell_tport_appsw_pane_cp02_ParamLimits

0x9063,	// (0x0009c736) cell_tport_appsw_pane_cp02

0x9077,	// (0x0009c74a) cell_tport_appsw_pane_cp03_ParamLimits

0x9077,	// (0x0009c74a) cell_tport_appsw_pane_cp03

0xe293,	// (0x000a1966) phob2_contact_card_pane

0xe293,	// (0x000a1966) phob2_listscroll_pane

0xc8c9,	// (0x0009ff9c) phob2_list_pane

0xc8d1,	// (0x0009ffa4) scroll_pane_cp034

0x9ddb,	// (0x0009d4ae) phob2_cc_data_pane_ParamLimits

0x9ddb,	// (0x0009d4ae) phob2_cc_data_pane

0x9dfc,	// (0x0009d4cf) phob2_cc_listscroll_pane_ParamLimits

0x9dfc,	// (0x0009d4cf) phob2_cc_listscroll_pane

0x9e1e,	// (0x0009d4f1) list_double_large_graphic_phob2_pane_ParamLimits

0x9e1e,	// (0x0009d4f1) list_double_large_graphic_phob2_pane

0x9e33,	// (0x0009d506) list_double_large_graphic_phob2_pane_g1_ParamLimits

0x9e33,	// (0x0009d506) list_double_large_graphic_phob2_pane_g1

0x9e40,	// (0x0009d513) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x9e40,	// (0x0009d513) list_double_large_graphic_phob2_pane_g2

0x0001,

0xff1f,	// (0x000a35f2) list_double_large_graphic_phob2_pane_g_ParamLimits

0xff1f,	// (0x000a35f2) list_double_large_graphic_phob2_pane_g

0x9e4c,	// (0x0009d51f) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x9e4c,	// (0x0009d51f) list_double_large_graphic_phob2_pane_t1

0x9e61,	// (0x0009d534) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x9e61,	// (0x0009d534) list_double_large_graphic_phob2_pane_t2

0x0001,

0xff24,	// (0x000a35f7) list_double_large_graphic_phob2_pane_t_ParamLimits

0xff24,	// (0x000a35f7) list_double_large_graphic_phob2_pane_t

0xe293,	// (0x000a1966) list_highlight_pane_cp024

0xc8d9,	// (0x0009ffac) phob2_cc_button_pane

0x9e73,	// (0x0009d546) phob2_cc_data_pane_g1_ParamLimits

0x9e73,	// (0x0009d546) phob2_cc_data_pane_g1

0x9e89,	// (0x0009d55c) phob2_cc_data_pane_g2_ParamLimits

0x9e89,	// (0x0009d55c) phob2_cc_data_pane_g2

0x0001,

0xff29,	// (0x000a35fc) phob2_cc_data_pane_g_ParamLimits

0xff29,	// (0x000a35fc) phob2_cc_data_pane_g

0x9e9d,	// (0x0009d570) phob2_cc_data_pane_t1_ParamLimits

0x9e9d,	// (0x0009d570) phob2_cc_data_pane_t1

0x9eb7,	// (0x0009d58a) phob2_cc_data_pane_t2_ParamLimits

0x9eb7,	// (0x0009d58a) phob2_cc_data_pane_t2

0x9ed1,	// (0x0009d5a4) phob2_cc_data_pane_t3_ParamLimits

0x9ed1,	// (0x0009d5a4) phob2_cc_data_pane_t3

0x0002,

0xff2e,	// (0x000a3601) phob2_cc_data_pane_t_ParamLimits

0xff2e,	// (0x000a3601) phob2_cc_data_pane_t

0xc8e1,	// (0x0009ffb4) phob2_cc_list_pane_ParamLimits

0xc8e1,	// (0x0009ffb4) phob2_cc_list_pane

0xac8b,	// (0x0009e35e) scroll_pane_cp035_ParamLimits

0xac8b,	// (0x0009e35e) scroll_pane_cp035

0xea5b,	// (0x000a212e) bg_button_pane_cp033

0xc8ed,	// (0x0009ffc0) phob2_cc_button_pane_g1

0xc8f9,	// (0x0009ffcc) phob2_cc_button_pane_t1

0xc90e,	// (0x0009ffe1) phob2_cc_button_pane_t2

0x0001,

0xff35,	// (0x000a3608) phob2_cc_button_pane_t

0x9eeb,	// (0x0009d5be) list_double_large_graphic_phob2_cc_pane_ParamLimits

0x9eeb,	// (0x0009d5be) list_double_large_graphic_phob2_cc_pane

0x9f00,	// (0x0009d5d3) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0x9f00,	// (0x0009d5d3) list_double_large_graphic_phob2_cc_pane_g1

0x9f0c,	// (0x0009d5df) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x9f0c,	// (0x0009d5df) list_double_large_graphic_phob2_cc_pane_g2

0x9f18,	// (0x0009d5eb) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x9f18,	// (0x0009d5eb) list_double_large_graphic_phob2_cc_pane_g3

0x9f24,	// (0x0009d5f7) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x9f24,	// (0x0009d5f7) list_double_large_graphic_phob2_cc_pane_g4

0x9f30,	// (0x0009d603) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x9f30,	// (0x0009d603) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xff3a,	// (0x000a360d) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xff3a,	// (0x000a360d) list_double_large_graphic_phob2_cc_pane_g

0x9f3c,	// (0x0009d60f) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x9f3c,	// (0x0009d60f) list_double_large_graphic_phob2_cc_pane_t1

0x9f65,	// (0x0009d638) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x9f65,	// (0x0009d638) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xff45,	// (0x000a3618) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xff45,	// (0x000a3618) list_double_large_graphic_phob2_cc_pane_t

0xc920,	// (0x0009fff3) list_highlight_pane_cp025_ParamLimits

0xc920,	// (0x0009fff3) list_highlight_pane_cp025

0xea5b,	// (0x000a212e) bg_button_pane_cp033_ParamLimits

0xc8ed,	// (0x0009ffc0) phob2_cc_button_pane_g1_ParamLimits

0xc8f9,	// (0x0009ffcc) phob2_cc_button_pane_t1_ParamLimits

0xc90e,	// (0x0009ffe1) phob2_cc_button_pane_t2_ParamLimits

0xff35,	// (0x000a3608) phob2_cc_button_pane_t_ParamLimits

0x0978,	// (0x0009404b) popup_wgtman_window

0xaa27,	// (0x0009e0fa) scroll_pane_cp038

0x99ce,	// (0x0009d0a1) wgtman_btn_pane_cp_01_ParamLimits

0x99ce,	// (0x0009d0a1) wgtman_btn_pane_cp_01

0xc92e,	// (0x000a0001) wgtman_content_pane

0xc937,	// (0x000a000a) wgtman_heading_pane

0xe293,	// (0x000a1966) bg_heading_pane_cp02

0xc940,	// (0x000a0013) wgtman_heading_pane_g1

0xc948,	// (0x000a001b) wgtman_heading_pane_t1

0xc956,	// (0x000a0029) scroll_pane_cp036

0xc95e,	// (0x000a0031) wgtman_list_pane

0xbaec,	// (0x0009f1bf) wgtman_list_pane_t1_ParamLimits

0xbaec,	// (0x0009f1bf) wgtman_list_pane_t1

0xa911,	// (0x0009dfe4) cam4_grid_pane

0x7796,	// (0x0009ae69) bg_button_pane_cp015_ParamLimits

0x77aa,	// (0x0009ae7d) bg_button_pane_cp016_ParamLimits

0x77bd,	// (0x0009ae90) bg_button_pane_cp017_ParamLimits

0x7815,	// (0x0009aee8) popup_vitu2_query_window_g3_ParamLimits

0x7815,	// (0x0009aee8) popup_vitu2_query_window_g3

0x78d2,	// (0x0009afa5) popup_vitu2_query_window_t6_ParamLimits

0x78d2,	// (0x0009afa5) popup_vitu2_query_window_t6

0x78fd,	// (0x0009afd0) popup_vitu2_query_window_t7_ParamLimits

0x78fd,	// (0x0009afd0) popup_vitu2_query_window_t7

0x6948,	// (0x0009a01b) cam4_grid_pane_g1

0x6951,	// (0x0009a024) cam4_grid_pane_g2

0xc966,	// (0x000a0039) cam4_grid_pane_g3

0xc96f,	// (0x000a0042) cam4_grid_pane_g4

0x0003,

0xff4a,	// (0x000a361d) cam4_grid_pane_g

0x168f,	// (0x00094d62) aid_placing_vt_slider_lsc_ParamLimits

0x197c,	// (0x0009504f) vidtel_button_pane_ParamLimits

0x197c,	// (0x0009504f) vidtel_button_pane

0xc97a,	// (0x000a004d) bg_button_pane_cp034

0x9f8e,	// (0x0009d661) vidtel_button_pane_g1

0xc984,	// (0x000a0057) vidtel_button_pane_t1

0xab66,	// (0x0009e239) aid_size_vtel_slider_touch

0xac8b,	// (0x0009e35e) scroll_pane_cp039

0xb686,	// (0x0009ed59) ncim_query_button_pane_cp01_ParamLimits

0xb6a5,	// (0x0009ed78) ncimui_query_pane_g1_ParamLimits

0xea5b,	// (0x000a212e) input_focus_pane_cp012_ParamLimits

0xb6ca,	// (0x0009ed9d) ncim_query_entry_pane_t1_ParamLimits

0xac8b,	// (0x0009e35e) scroll_pane_cp039_ParamLimits

0x27fa,	// (0x00095ecd) navi_pane_bcale_mc_g1

0x2802,	// (0x00095ed5) navi_pane_bcale_mc_t1

0xbcc0,	// (0x0009f393) main_sp_fs_email_pane_g1

0xbcc8,	// (0x0009f39b) main_sp_fs_email_pane_g2

0x0001,

0xfcf0,	// (0x000a33c3) main_sp_fs_email_pane_g

0xc236,	// (0x0009f909) list_single_cale_mrui_row_pane_g3_ParamLimits

0xc236,	// (0x0009f909) list_single_cale_mrui_row_pane_g3

0x9594,	// (0x0009cc67) list_single_recal_day_pane_g5_event_pane

0xc3f2,	// (0x0009fac5) list_single_recal_day_pane_g7

0xc992,	// (0x000a0065) list_recal_day_event_pane_cp01

0xc99b,	// (0x000a006e) list_recal_vselct_arw_lo_pane_cp01

0xc9a3,	// (0x000a0076) list_recal_vselct_arw_up_pane_cp01

0xc9ab,	// (0x000a007e) list_recal_vselct_pane_cp01

0xabf2,	// (0x0009e2c5) list_recal_day_event_pane_cp01_g1

0xc9b5,	// (0x000a0088) list_recal_day_event_pane_cp01_t1

0xc3fa,	// (0x0009facd) list_single_recal_day_pane_t1_ParamLimits

0xc40c,	// (0x0009fadf) list_single_recal_day_pane_t2_ParamLimits

0xfe3d,	// (0x000a3510) list_single_recal_day_pane_t_ParamLimits

0xe9e3,	// (0x000a20b6) bg_notes_pane_ParamLimits

0xe9f1,	// (0x000a20c4) list_notes_pane_ParamLimits

0x0c91,	// (0x00094364) scroll_pane_cp06_ParamLimits

0xea13,	// (0x000a20e6) main_notes_pane_ParamLimits

0xe293,	// (0x000a1966) main_welc_pane

0x9f96,	// (0x0009d669) main_welc_body_pane_ParamLimits

0x9f96,	// (0x0009d669) main_welc_body_pane

0x9fb5,	// (0x0009d688) main_welc_opti_pane_ParamLimits

0x9fb5,	// (0x0009d688) main_welc_opti_pane

0x9ffc,	// (0x0009d6cf) main_welc_pane_t1_ParamLimits

0x9ffc,	// (0x0009d6cf) main_welc_pane_t1

0xc9c3,	// (0x000a0096) main_welc_body_row_pane_ParamLimits

0xc9c3,	// (0x000a0096) main_welc_body_row_pane

0xa01e,	// (0x0009d6f1) main_welc_opti_row_pane_ParamLimits

0xa01e,	// (0x0009d6f1) main_welc_opti_row_pane

0xc9da,	// (0x000a00ad) main_welc_opti_row_pane_g1

0xc9e2,	// (0x000a00b5) main_welc_opti_row_pane_t1

0xc9f1,	// (0x000a00c4) main_welc_body_row_pane_t1

0xc674,	// (0x0009fd47) popup_notif_wgt_heading_pane

0xc68e,	// (0x0009fd61) aid_size_list_notif_wgt_del_ParamLimits

0xc69b,	// (0x0009fd6e) list_notif_wgt_row_pane_g1_ParamLimits

0xc6a7,	// (0x0009fd7a) list_notif_wgt_row_pane_g2_ParamLimits

0xc6b3,	// (0x0009fd86) list_notif_wgt_row_pane_g3_ParamLimits

0xfea4,	// (0x000a3577) list_notif_wgt_row_pane_g_ParamLimits

0xc6c0,	// (0x0009fd93) list_notif_wgt_row_pane_t1_ParamLimits

0xc6d5,	// (0x0009fda8) list_notif_wgt_row_pane_t2_ParamLimits

0xc6e7,	// (0x0009fdba) list_notif_wgt_row_pane_t3_ParamLimits

0xfeab,	// (0x000a357e) list_notif_wgt_row_pane_t_ParamLimits

0x9a69,	// (0x0009d13c) listrow_wgtman_pane_g1_ParamLimits

0x9a76,	// (0x0009d149) listrow_wgtman_pane_g2_ParamLimits

0xfecf,	// (0x000a35a2) listrow_wgtman_pane_g_ParamLimits

0x9a94,	// (0x0009d167) listrow_wgtman_pane_t1_ParamLimits

0x9aac,	// (0x0009d17f) listrow_wgtman_pane_t2_ParamLimits

0xfed4,	// (0x000a35a7) listrow_wgtman_pane_t_ParamLimits

0x9ad2,	// (0x0009d1a5) wait_bar_pane_cp09_ParamLimits

0xe293,	// (0x000a1966) bg_popup_heading_pane_cp02

0xca00,	// (0x000a00d3) popup_notif_wgt_heading_pane_g1

0xca08,	// (0x000a00db) popup_notif_wgt_heading_pane_t1

0xe293,	// (0x000a1966) main_vids_pane

0xe293,	// (0x000a1966) vids_listscroll_pane

0xa02e,	// (0x0009d701) scroll_pane_cp040

0xe293,	// (0x000a1966) vids_list_pane

0xa039,	// (0x0009d70c) vids_list_double_pane_ParamLimits

0xa039,	// (0x0009d70c) vids_list_double_pane

0xa04a,	// (0x0009d71d) vids_list_double_pane_g1

0xa053,	// (0x0009d726) vids_list_double_pane_t1

0xa063,	// (0x0009d736) vids_list_double_pane_t2

0x0001,

0xff58,	// (0x000a362b) vids_list_double_pane_t

0xa0e2,	// (0x0009d7b5) main_ncimui_pane_ParamLimits

0x8406,	// (0x0009bad9) main_ncimui_pane_g1_ParamLimits

0x8412,	// (0x0009bae5) main_ncimui_pane_g2_ParamLimits

0x8412,	// (0x0009bae5) main_ncimui_pane_g2

0x0001,

0xfbf5,	// (0x000a32c8) main_ncimui_pane_g_ParamLimits

0xfbf5,	// (0x000a32c8) main_ncimui_pane_g

0x9fd4,	// (0x0009d6a7) main_welc_pane_g1_ParamLimits

0x9fd4,	// (0x0009d6a7) main_welc_pane_g1

0x9fe9,	// (0x0009d6bc) main_welc_pane_g2_ParamLimits

0x9fe9,	// (0x0009d6bc) main_welc_pane_g2

0x0001,

0xff53,	// (0x000a3626) main_welc_pane_g_ParamLimits

0xff53,	// (0x000a3626) main_welc_pane_g
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
	};

} // end of namespace AknLayoutScalable_Abrw_pvl4_apps_vga4_lsc_tch_Large
