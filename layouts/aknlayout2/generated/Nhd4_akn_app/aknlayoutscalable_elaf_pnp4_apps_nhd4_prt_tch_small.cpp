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
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pnp4_apps_nhd4_prt_tch + 0x0002ef67 };

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
0x5ddc,	// (0x00034d43) Screen

0x5de8,	// (0x00034d4f) application_window

0x5e44,	// (0x00034dab) area_bottom_pane_ParamLimits

0x5e44,	// (0x00034dab) area_bottom_pane

0x5e9c,	// (0x00034e03) area_top_pane_ParamLimits

0x5e9c,	// (0x00034e03) area_top_pane

0x5f00,	// (0x00034e67) call_video_uplink_pane_ParamLimits

0x5f00,	// (0x00034e67) call_video_uplink_pane

0x5f3f,	// (0x00034ea6) main_pane_ParamLimits

0x5f3f,	// (0x00034ea6) main_pane

0x12dd,	// (0x00030244) context_pane

0x8d56,	// (0x00037cbd) navi_pane

0x8d7c,	// (0x00037ce3) popup_cale_events_window_ParamLimits

0x8d7c,	// (0x00037ce3) popup_cale_events_window

0x12f0,	// (0x00030257) popup_mup_playback_window

0x8d94,	// (0x00037cfb) signal_pane

0xde32,	// (0x0003cd99) main_browser_pane

0xdfe4,	// (0x0003cf4b) main_burst_pane

0x8bda,	// (0x00037b41) main_calc_pane

0x127d,	// (0x000301e4) main_cale_day_pane

0x6534,	// (0x0003549b) main_cale_month_pane

0x127d,	// (0x000301e4) main_cale_week_pane

0xdfe4,	// (0x0003cf4b) main_call_pane

0xdaea,	// (0x0003ca51) main_call_poc_pane

0xdfe4,	// (0x0003cf4b) main_camera_pane

0xdfe4,	// (0x0003cf4b) main_chi_dic_pane

0xe7c1,	// (0x0003d728) main_clock_pane

0xdaea,	// (0x0003ca51) main_fmradio_pane

0xdfe4,	// (0x0003cf4b) main_graph_messa_pane

0xdaea,	// (0x0003ca51) main_help_pane

0xde32,	// (0x0003cd99) main_im_pane

0xdd45,	// (0x0003ccac) main_image_pane_ParamLimits

0xdd45,	// (0x0003ccac) main_image_pane

0xdaea,	// (0x0003ca51) main_location2_pane

0xdfe4,	// (0x0003cf4b) main_location_pane

0xdd45,	// (0x0003ccac) main_messa_pane

0xdaea,	// (0x0003ca51) main_mp2_pane

0xdfe4,	// (0x0003cf4b) main_mp_pane

0xdaea,	// (0x0003ca51) main_msg_pane

0xdaea,	// (0x0003ca51) main_mup_eq_pane

0xdaea,	// (0x0003ca51) main_mup_pane

0xde32,	// (0x0003cd99) main_notes_pane

0xdaea,	// (0x0003ca51) main_pec_pane

0xdaea,	// (0x0003ca51) main_phob_pane

0xdaea,	// (0x0003ca51) main_pinb_pane

0xdaea,	// (0x0003ca51) main_postcard_pane

0xdaea,	// (0x0003ca51) main_qdial_pane

0xdfe4,	// (0x0003cf4b) main_skin_pane

0xdaea,	// (0x0003ca51) main_smil2_pane

0xdfe4,	// (0x0003cf4b) main_smil_pane

0xdfe4,	// (0x0003cf4b) main_video_pane

0xdfe4,	// (0x0003cf4b) main_video_tele_pane

0xdd45,	// (0x0003ccac) main_viewer_pane_ParamLimits

0xdd45,	// (0x0003ccac) main_viewer_pane

0xdfe4,	// (0x0003cf4b) main_vorec_pane

0x8c24,	// (0x00037b8b) popup_blid_sat_info_window_ParamLimits

0x8c24,	// (0x00037b8b) popup_blid_sat_info_window

0x8c44,	// (0x00037bab) popup_dyc_status_message_window_ParamLimits

0x8c44,	// (0x00037bab) popup_dyc_status_message_window

0x8c52,	// (0x00037bb9) popup_grid_large_graphic_window_ParamLimits

0x8c52,	// (0x00037bb9) popup_grid_large_graphic_window

0x8ce1,	// (0x00037c48) popup_loc_request_window_ParamLimits

0x8ce1,	// (0x00037c48) popup_loc_request_window

0x8d2e,	// (0x00037c95) popup_wml_address_window_ParamLimits

0x8d2e,	// (0x00037c95) popup_wml_address_window

0x8ab2,	// (0x00037a19) call_muted_g1

0x8727,	// (0x0003768e) popup_call_audio_conf_window_ParamLimits

0x8727,	// (0x0003768e) popup_call_audio_conf_window

0x8ac2,	// (0x00037a29) popup_call_audio_first_window_ParamLimits

0x8ac2,	// (0x00037a29) popup_call_audio_first_window

0x8b02,	// (0x00037a69) popup_call_audio_in_window_ParamLimits

0x8b02,	// (0x00037a69) popup_call_audio_in_window

0x8b26,	// (0x00037a8d) popup_call_audio_out_window_ParamLimits

0x8b26,	// (0x00037a8d) popup_call_audio_out_window

0x8b48,	// (0x00037aaf) popup_call_audio_second_window_ParamLimits

0x8b48,	// (0x00037aaf) popup_call_audio_second_window

0x8b78,	// (0x00037adf) popup_call_audio_wait_window_ParamLimits

0x8b78,	// (0x00037adf) popup_call_audio_wait_window

0x8b99,	// (0x00037b00) popup_number_entry_window_ParamLimits

0x8b99,	// (0x00037b00) popup_number_entry_window

0xd6d7,	// (0x0003c63e) bg_popup_call_pane_cp05_ParamLimits

0xd6d7,	// (0x0003c63e) bg_popup_call_pane_cp05

0xd6f7,	// (0x0003c65e) popup_number_entry_window_t1

0xd70a,	// (0x0003c671) popup_number_entry_window_t2

0xd71c,	// (0x0003c683) popup_number_entry_window_t3

0x0003,

0xf085,	// (0x0003dfec) popup_number_entry_window_t

0xd72e,	// (0x0003c695) text_title_cp2

0xd741,	// (0x0003c6a8) bg_popup_call_pane_cp_ParamLimits

0xd741,	// (0x0003c6a8) bg_popup_call_pane_cp

0xd74f,	// (0x0003c6b6) call_thumbnail_pane

0xd757,	// (0x0003c6be) popup_call_audio_in_window_g1_ParamLimits

0xd757,	// (0x0003c6be) popup_call_audio_in_window_g1

0xd763,	// (0x0003c6ca) popup_call_audio_in_window_g2_ParamLimits

0xd763,	// (0x0003c6ca) popup_call_audio_in_window_g2

0xd76f,	// (0x0003c6d6) popup_call_audio_in_window_g3_ParamLimits

0xd76f,	// (0x0003c6d6) popup_call_audio_in_window_g3

0x0002,

0xf08e,	// (0x0003dff5) popup_call_audio_in_window_g_ParamLimits

0xf08e,	// (0x0003dff5) popup_call_audio_in_window_g

0xd77b,	// (0x0003c6e2) popup_call_audio_in_window_t1_ParamLimits

0xd77b,	// (0x0003c6e2) popup_call_audio_in_window_t1

0xd797,	// (0x0003c6fe) popup_call_audio_in_window_t2_ParamLimits

0xd797,	// (0x0003c6fe) popup_call_audio_in_window_t2

0xd7b3,	// (0x0003c71a) popup_call_audio_in_window_t3_ParamLimits

0xd7b3,	// (0x0003c71a) popup_call_audio_in_window_t3

0x0002,

0xf095,	// (0x0003dffc) popup_call_audio_in_window_t_ParamLimits

0xf095,	// (0x0003dffc) popup_call_audio_in_window_t

0xd741,	// (0x0003c6a8) bg_popup_call_pane_cp01_ParamLimits

0xd741,	// (0x0003c6a8) bg_popup_call_pane_cp01

0xd74f,	// (0x0003c6b6) call_thumbnail_pane_cp02

0xd7c6,	// (0x0003c72d) call_type_pane_cp022

0xd7ce,	// (0x0003c735) popup_call_audio_out_window_g1_ParamLimits

0xd7ce,	// (0x0003c735) popup_call_audio_out_window_g1

0xd7e0,	// (0x0003c747) popup_call_audio_out_window_g2_ParamLimits

0xd7e0,	// (0x0003c747) popup_call_audio_out_window_g2

0xd7ec,	// (0x0003c753) popup_call_audio_out_window_g3_ParamLimits

0xd7ec,	// (0x0003c753) popup_call_audio_out_window_g3

0x0002,

0xf09c,	// (0x0003e003) popup_call_audio_out_window_g_ParamLimits

0xf09c,	// (0x0003e003) popup_call_audio_out_window_g

0xd7fe,	// (0x0003c765) popup_call_audio_out_window_t1_ParamLimits

0xd7fe,	// (0x0003c765) popup_call_audio_out_window_t1

0xd816,	// (0x0003c77d) popup_call_audio_out_window_t2_ParamLimits

0xd816,	// (0x0003c77d) popup_call_audio_out_window_t2

0x0001,

0xf0a3,	// (0x0003e00a) popup_call_audio_out_window_t_ParamLimits

0xf0a3,	// (0x0003e00a) popup_call_audio_out_window_t

0xd82b,	// (0x0003c792) bg_popup_call_pane_ParamLimits

0xd82b,	// (0x0003c792) bg_popup_call_pane

0x6143,	// (0x000350aa) call_thumbnail_pane_cp_ParamLimits

0x6143,	// (0x000350aa) call_thumbnail_pane_cp

0xd8af,	// (0x0003c816) call_type_pane_cp01_ParamLimits

0xd8af,	// (0x0003c816) call_type_pane_cp01

0xd8f3,	// (0x0003c85a) popup_call_audio_first_window_g1_ParamLimits

0xd8f3,	// (0x0003c85a) popup_call_audio_first_window_g1

0xd93f,	// (0x0003c8a6) popup_call_audio_first_window_g2_ParamLimits

0xd93f,	// (0x0003c8a6) popup_call_audio_first_window_g2

0x0001,

0xf0a8,	// (0x0003e00f) popup_call_audio_first_window_g_ParamLimits

0xf0a8,	// (0x0003e00f) popup_call_audio_first_window_g

0xd983,	// (0x0003c8ea) popup_call_audio_first_window_t1_ParamLimits

0xd983,	// (0x0003c8ea) popup_call_audio_first_window_t1

0xda2f,	// (0x0003c996) popup_call_audio_first_window_t4_ParamLimits

0xda2f,	// (0x0003c996) popup_call_audio_first_window_t4

0xdabb,	// (0x0003ca22) popup_call_audio_first_window_t5_ParamLimits

0xdabb,	// (0x0003ca22) popup_call_audio_first_window_t5

0x0002,

0xf0ad,	// (0x0003e014) popup_call_audio_first_window_t_ParamLimits

0xf0ad,	// (0x0003e014) popup_call_audio_first_window_t

0xdaea,	// (0x0003ca51) bg_popup_call_pane_cp02

0xdaf4,	// (0x0003ca5b) call_type_pane_cp023

0xdafc,	// (0x0003ca63) popup_call_audio_wait_window_g1

0xdb04,	// (0x0003ca6b) popup_call_audio_wait_window_g2

0x0001,

0xf0b4,	// (0x0003e01b) popup_call_audio_wait_window_g

0xdb0c,	// (0x0003ca73) popup_call_audio_wait_window_t3

0xdb1a,	// (0x0003ca81) bg_popup_call_pane_cp03_ParamLimits

0xdb1a,	// (0x0003ca81) bg_popup_call_pane_cp03

0xdb7a,	// (0x0003cae1) call_thumbnail_pane_cp011_ParamLimits

0xdb7a,	// (0x0003cae1) call_thumbnail_pane_cp011

0xdb86,	// (0x0003caed) call_type_pane_cp034_ParamLimits

0xdb86,	// (0x0003caed) call_type_pane_cp034

0xdbc2,	// (0x0003cb29) popup_call_audio_second_window_g1_ParamLimits

0xdbc2,	// (0x0003cb29) popup_call_audio_second_window_g1

0xdbfe,	// (0x0003cb65) popup_call_audio_second_window_g2_ParamLimits

0xdbfe,	// (0x0003cb65) popup_call_audio_second_window_g2

0x0001,

0xf0b9,	// (0x0003e020) popup_call_audio_second_window_g_ParamLimits

0xf0b9,	// (0x0003e020) popup_call_audio_second_window_g

0xdc3a,	// (0x0003cba1) popup_call_audio_second_window_t1_ParamLimits

0xdc3a,	// (0x0003cba1) popup_call_audio_second_window_t1

0xdcbb,	// (0x0003cc22) popup_call_audio_second_window_t2_ParamLimits

0xdcbb,	// (0x0003cc22) popup_call_audio_second_window_t2

0xdcf1,	// (0x0003cc58) popup_call_audio_second_window_t3_ParamLimits

0xdcf1,	// (0x0003cc58) popup_call_audio_second_window_t3

0x0002,

0xf0be,	// (0x0003e025) popup_call_audio_second_window_t_ParamLimits

0xf0be,	// (0x0003e025) popup_call_audio_second_window_t

0xdaea,	// (0x0003ca51) bg_popup_call_pane_cp04

0xdd27,	// (0x0003cc8e) list_conf_pane

0xdd2f,	// (0x0003cc96) popup_call_audio_conf_window_t1

0xdd3d,	// (0x0003cca4) call_thumbnail_pane_g1

0xdd45,	// (0x0003ccac) bg_pinb_pane_ParamLimits

0xdd45,	// (0x0003ccac) bg_pinb_pane

0xdd53,	// (0x0003ccba) find_pinb_pane

0xdd45,	// (0x0003ccac) listscroll_pinb_pane_ParamLimits

0xdd45,	// (0x0003ccac) listscroll_pinb_pane

0xdd5d,	// (0x0003ccc4) pinb_bg_pane_g1

0xdd5d,	// (0x0003ccc4) pinb_bg_pane_g2

0xdd5d,	// (0x0003ccc4) pinb_bg_pane_g3

0xdd5d,	// (0x0003ccc4) pinb_bg_pane_g4

0xdd5d,	// (0x0003ccc4) pinb_bg_pane_g5

0xdd5d,	// (0x0003ccc4) pinb_bg_pane_g6

0xdd5d,	// (0x0003ccc4) pinb_bg_pane_g7

0xdd5d,	// (0x0003ccc4) pinb_bg_pane_g8

0xdd5d,	// (0x0003ccc4) pinb_bg_pane_g9

0xdd5d,	// (0x0003ccc4) pinb_bg_pane_g10

0x0009,

0xf0c5,	// (0x0003e02c) pinb_bg_pane_g

0xd6bf,	// (0x0003c626) grid_pinb_pane

0xd6bf,	// (0x0003c626) list_pinb_pane

0xdd67,	// (0x0003ccce) scroll_pane_cp01_ParamLimits

0xdd67,	// (0x0003ccce) scroll_pane_cp01

0xdd75,	// (0x0003ccdc) find_pinb_pane_g1_ParamLimits

0xdd75,	// (0x0003ccdc) find_pinb_pane_g1

0xdd8d,	// (0x0003ccf4) find_pinb_pane_t1

0xdd9f,	// (0x0003cd06) find_pinb_pane_t2

0x0001,

0xf0df,	// (0x0003e046) find_pinb_pane_t

0xddb4,	// (0x0003cd1b) input_focus_pane_cp01_ParamLimits

0xddb4,	// (0x0003cd1b) input_focus_pane_cp01

0xd6c9,	// (0x0003c630) cell_pinb_pane_ParamLimits

0xd6c9,	// (0x0003c630) cell_pinb_pane

0xddc0,	// (0x0003cd27) cell_pinb_pane_g1_ParamLimits

0xddc0,	// (0x0003cd27) cell_pinb_pane_g1

0xddce,	// (0x0003cd35) cell_pinb_pane_g2_ParamLimits

0xddce,	// (0x0003cd35) cell_pinb_pane_g2

0xddce,	// (0x0003cd35) cell_pinb_pane_g3_ParamLimits

0xddce,	// (0x0003cd35) cell_pinb_pane_g3

0x0002,

0xf0e4,	// (0x0003e04b) cell_pinb_pane_g_ParamLimits

0xf0e4,	// (0x0003e04b) cell_pinb_pane_g

0xdaea,	// (0x0003ca51) grid_highlight_pane_cp01

0xd6c9,	// (0x0003c630) list_pinb_item_pane_ParamLimits

0xd6c9,	// (0x0003c630) list_pinb_item_pane

0xd6bf,	// (0x0003c626) list_highlight_pane_cp02

0xdddc,	// (0x0003cd43) list_pinb_item_pane_g1_ParamLimits

0xdddc,	// (0x0003cd43) list_pinb_item_pane_g1

0xddce,	// (0x0003cd35) list_pinb_item_pane_g2_ParamLimits

0xddce,	// (0x0003cd35) list_pinb_item_pane_g2

0xddc0,	// (0x0003cd27) list_pinb_item_pane_g3_ParamLimits

0xddc0,	// (0x0003cd27) list_pinb_item_pane_g3

0xddce,	// (0x0003cd35) list_pinb_item_pane_g4_ParamLimits

0xddce,	// (0x0003cd35) list_pinb_item_pane_g4

0x0003,

0xf0eb,	// (0x0003e052) list_pinb_item_pane_g_ParamLimits

0xf0eb,	// (0x0003e052) list_pinb_item_pane_g

0xddea,	// (0x0003cd51) list_pinb_item_pane_t1_ParamLimits

0xddea,	// (0x0003cd51) list_pinb_item_pane_t1

0x6181,	// (0x000350e8) calc_display_pane

0x619f,	// (0x00035106) calc_paper_pane

0x61bb,	// (0x00035122) grid_calc_pane

0xdaea,	// (0x0003ca51) bg_list_pane_cp01

0x61e7,	// (0x0003514e) clock_g1

0x61ef,	// (0x00035156) clock_g2

0x0001,

0xf0f4,	// (0x0003e05b) clock_g

0x61f9,	// (0x00035160) clock_t1_ParamLimits

0x61f9,	// (0x00035160) clock_t1

0x620e,	// (0x00035175) clock_t2_ParamLimits

0x620e,	// (0x00035175) clock_t2

0x6220,	// (0x00035187) clock_t3_ParamLimits

0x6220,	// (0x00035187) clock_t3

0x6232,	// (0x00035199) clock_t4_ParamLimits

0x6232,	// (0x00035199) clock_t4

0x6244,	// (0x000351ab) clock_t5_ParamLimits

0x6244,	// (0x000351ab) clock_t5

0x6259,	// (0x000351c0) clock_t6_ParamLimits

0x6259,	// (0x000351c0) clock_t6

0x626b,	// (0x000351d2) clock_t7_ParamLimits

0x626b,	// (0x000351d2) clock_t7

0x627d,	// (0x000351e4) clock_t8_ParamLimits

0x627d,	// (0x000351e4) clock_t8

0x6293,	// (0x000351fa) clock_t9_ParamLimits

0x6293,	// (0x000351fa) clock_t9

0x0008,

0xf0f9,	// (0x0003e060) clock_t_ParamLimits

0xf0f9,	// (0x0003e060) clock_t

0xddfe,	// (0x0003cd65) popup_clock_analogue_window_cp02

0xddfe,	// (0x0003cd65) popup_clock_digital_window_cp01

0xdaea,	// (0x0003ca51) listscroll_help_pane

0xdaea,	// (0x0003ca51) phob_pre_status_pane

0xde06,	// (0x0003cd6d) grid_qdial_pane

0xdd45,	// (0x0003ccac) listscroll_mce_pane

0xdd45,	// (0x0003ccac) bg_notes_pane

0xde10,	// (0x0003cd77) list_notes_pane

0x62a9,	// (0x00035210) scroll_pane_cp06

0xde1e,	// (0x0003cd85) bg_calc_paper_pane

0x62b8,	// (0x0003521f) list_calc_pane

0xde32,	// (0x0003cd99) bg_calc_display_pane

0x62d2,	// (0x00035239) calc_display_pane_t1

0x62e7,	// (0x0003524e) calc_display_pane_t2

0x62fc,	// (0x00035263) calc_display_pane_t3

0x0002,

0xf10c,	// (0x0003e073) calc_display_pane_t

0x630e,	// (0x00035275) cell_calc_pane_ParamLimits

0x630e,	// (0x00035275) cell_calc_pane

0xde3e,	// (0x0003cda5) bg_calc_paper_pane_g1

0xde4a,	// (0x0003cdb1) bg_calc_paper_pane_g2

0xde56,	// (0x0003cdbd) bg_calc_paper_pane_g3

0xde62,	// (0x0003cdc9) bg_calc_paper_pane_g4

0xde6e,	// (0x0003cdd5) bg_calc_paper_pane_g5

0x633b,	// (0x000352a2) bg_calc_paper_pane_g6

0x634c,	// (0x000352b3) bg_calc_paper_pane_g7

0x635d,	// (0x000352c4) bg_calc_paper_pane_g8

0x0007,

0xf113,	// (0x0003e07a) bg_calc_paper_pane_g

0x636e,	// (0x000352d5) calc_bg_paper_pane_g9

0x637f,	// (0x000352e6) list_calc_item_pane_ParamLimits

0x637f,	// (0x000352e6) list_calc_item_pane

0xde7a,	// (0x0003cde1) list_calc_item_pane_g1

0x63ac,	// (0x00035313) list_calc_item_pane_t1_ParamLimits

0x63ac,	// (0x00035313) list_calc_item_pane_t1

0x63be,	// (0x00035325) list_calc_item_pane_t2_ParamLimits

0x63be,	// (0x00035325) list_calc_item_pane_t2

0x0001,

0xf124,	// (0x0003e08b) list_calc_item_pane_t_ParamLimits

0xf124,	// (0x0003e08b) list_calc_item_pane_t

0xdd5d,	// (0x0003ccc4) cell_calc_pane_g1

0xde87,	// (0x0003cdee) grid_highlight_pane_cp02

0x63ee,	// (0x00035355) bg_calc_display_pane_g1

0x63f7,	// (0x0003535e) bg_calc_display_pane_g2

0x6401,	// (0x00035368) bg_calc_display_pane_g3

0x0002,

0xf12e,	// (0x0003e095) bg_calc_display_pane_g

0x640a,	// (0x00035371) cell_qdial_pane_ParamLimits

0x640a,	// (0x00035371) cell_qdial_pane

0x641e,	// (0x00035385) cell_qdial_pane_g1_ParamLimits

0x641e,	// (0x00035385) cell_qdial_pane_g1

0x642b,	// (0x00035392) cell_qdial_pane_g2_ParamLimits

0x642b,	// (0x00035392) cell_qdial_pane_g2

0xdea9,	// (0x0003ce10) cell_qdial_pane_g3_ParamLimits

0xdea9,	// (0x0003ce10) cell_qdial_pane_g3

0x0003,

0xf135,	// (0x0003e09c) cell_qdial_pane_g_ParamLimits

0xf135,	// (0x0003e09c) cell_qdial_pane_g

0x6448,	// (0x000353af) cell_qdial_pane_t1_ParamLimits

0x6448,	// (0x000353af) cell_qdial_pane_t1

0x6460,	// (0x000353c7) cell_qdial_pane_t2_ParamLimits

0x6460,	// (0x000353c7) cell_qdial_pane_t2

0x6473,	// (0x000353da) cell_qdial_pane_t3_ParamLimits

0x6473,	// (0x000353da) cell_qdial_pane_t3

0x0002,

0xf13e,	// (0x0003e0a5) cell_qdial_pane_t_ParamLimits

0xf13e,	// (0x0003e0a5) cell_qdial_pane_t

0xdaea,	// (0x0003ca51) grid_highlight_pane_cp04

0xdeb5,	// (0x0003ce1c) thumbnail_qdial_pane_ParamLimits

0xdeb5,	// (0x0003ce1c) thumbnail_qdial_pane

0xdf11,	// (0x0003ce78) list_help_pane

0xdf1a,	// (0x0003ce81) scroll_pane_cp02

0x6486,	// (0x000353ed) help_list_pane_t1_ParamLimits

0x6486,	// (0x000353ed) help_list_pane_t1

0x64c0,	// (0x00035427) bg_notes_pane_g2

0x64c8,	// (0x0003542f) bg_notes_pane_g3

0x64d0,	// (0x00035437) notes_bg_pane_g1

0x64d8,	// (0x0003543f) notes_bg_pane_g4

0x64e0,	// (0x00035447) notes_bg_pane_g5

0x64e8,	// (0x0003544f) notes_bg_pane_g6

0x64f0,	// (0x00035457) notes_bg_pane_g7

0x64f8,	// (0x0003545f) notes_bg_pane_g8

0x6500,	// (0x00035467) notes_bg_pane_g9

0x0006,

0xf15c,	// (0x0003e0c3) notes_bg_pane_g

0x6508,	// (0x0003546f) list_notes_text_pane_ParamLimits

0x6508,	// (0x0003546f) list_notes_text_pane

0xdf23,	// (0x0003ce8a) list_notes_text_pane_g1

0x50ad,	// (0x00034014) list_notes_text_pane_t1

0x6534,	// (0x0003549b) listscroll_cale_week_pane

0x6559,	// (0x000354c0) bg_cale_heading_pane

0xdf46,	// (0x0003cead) bg_cale_pane_cp01

0x657b,	// (0x000354e2) cale_week_corner_pane

0x6595,	// (0x000354fc) cale_week_day_heading_pane

0x65b7,	// (0x0003551e) cale_week_scroll_pane_g1

0x65d4,	// (0x0003553b) cale_week_scroll_pane_g2

0x65e7,	// (0x0003554e) cale_week_scroll_pane_g3

0x65fa,	// (0x00035561) cale_week_scroll_pane_g4

0x660d,	// (0x00035574) cale_week_scroll_pane_g5

0x6620,	// (0x00035587) cale_week_scroll_pane_g6

0x6633,	// (0x0003559a) cale_week_scroll_pane_g7

0x6648,	// (0x000355af) cale_week_scroll_pane_g8

0x665d,	// (0x000355c4) cale_week_scroll_pane_g9

0x6670,	// (0x000355d7) cale_week_scroll_pane_g10

0x6683,	// (0x000355ea) cale_week_scroll_pane_g11

0x6696,	// (0x000355fd) cale_week_scroll_pane_g12

0x66ad,	// (0x00035614) cale_week_scroll_pane_g13

0x66c8,	// (0x0003562f) cale_week_scroll_pane_g14

0x66e3,	// (0x0003564a) cale_week_scroll_pane_g15

0x000f,

0xf16b,	// (0x0003e0d2) cale_week_scroll_pane_g

0x6713,	// (0x0003567a) cale_week_time_pane

0x6728,	// (0x0003568f) grid_cale_week_pane

0xdf75,	// (0x0003cedc) scroll_pane_cp08

0x6747,	// (0x000356ae) cell_cale_week_pane_ParamLimits

0x6747,	// (0x000356ae) cell_cale_week_pane

0x67a9,	// (0x00035710) cale_week_day_heading_pane_t1

0x67c4,	// (0x0003572b) cale_week_day_heading_pane_t2

0x67df,	// (0x00035746) cale_week_day_heading_pane_t3

0x67fa,	// (0x00035761) cale_week_day_heading_pane_t4

0x6815,	// (0x0003577c) cale_week_day_heading_pane_t5

0x6830,	// (0x00035797) cale_week_day_heading_pane_t6

0x684b,	// (0x000357b2) cale_week_day_heading_pane_t7

0x0006,

0xf18c,	// (0x0003e0f3) cale_week_day_heading_pane_t

0xdf92,	// (0x0003cef9) bg_cale_side_pane

0x6866,	// (0x000357cd) cale_week_time_pane_t1

0x6880,	// (0x000357e7) cale_week_time_pane_t2

0x689a,	// (0x00035801) cale_week_time_pane_t3

0x68b4,	// (0x0003581b) cale_week_time_pane_t4

0x68ce,	// (0x00035835) cale_week_time_pane_t5

0x68e8,	// (0x0003584f) cale_week_time_pane_t6

0x6908,	// (0x0003586f) cale_week_time_pane_t7

0x692a,	// (0x00035891) cale_week_time_pane_t8

0x0007,

0xf19b,	// (0x0003e102) cale_week_time_pane_t

0x694e,	// (0x000358b5) cell_cale_week_pane_g2

0x6972,	// (0x000358d9) cell_cale_week_pane_g3_ParamLimits

0x6972,	// (0x000358d9) cell_cale_week_pane_g3

0xdfa0,	// (0x0003cf07) grid_highlight_pane_cp07

0xdfa8,	// (0x0003cf0f) listscroll_gms_pane

0xdfb2,	// (0x0003cf19) grid_gms_pane

0xdfbb,	// (0x0003cf22) listscroll_gms_pane_g1

0xdfc3,	// (0x0003cf2a) listscroll_gms_pane_g2

0x0001,

0xf1ac,	// (0x0003e113) listscroll_gms_pane_g

0x698a,	// (0x000358f1) scroll_pane_cp010

0x6995,	// (0x000358fc) cell_gms_pane_ParamLimits

0x6995,	// (0x000358fc) cell_gms_pane

0x69a5,	// (0x0003590c) cell_gms_pane_g1

0xdfcb,	// (0x0003cf32) cell_gms_pane_g2

0xdf23,	// (0x0003ce8a) cell_gms_pane_g3

0xdfd3,	// (0x0003cf3a) cell_gms_pane_g4

0x0003,

0xf1b1,	// (0x0003e118) cell_gms_pane_g

0xdfdc,	// (0x0003cf43) grid_highlight_pane_cp09

0x8a36,	// (0x0003799d) phob_pre_status_pane_g1

0x8a3e,	// (0x000379a5) phob_pre_status_pane_g2

0x8a46,	// (0x000379ad) phob_pre_status_pane_g3

0x8a4e,	// (0x000379b5) phob_pre_status_pane_g4

0x0004,

0xf58d,	// (0x0003e4f4) phob_pre_status_pane_g

0x8a5e,	// (0x000379c5) phob_pre_status_pane_t1

0x8a6e,	// (0x000379d5) phob_pre_status_pane_t2

0x8a7e,	// (0x000379e5) phob_pre_status_pane_t3

0x0002,

0xf598,	// (0x0003e4ff) phob_pre_status_pane_t

0xdfe4,	// (0x0003cf4b) bg_list_pane_cp05

0x69b5,	// (0x0003591c) grid_vorec_pane

0x69bf,	// (0x00035926) vorec_t1

0x69cd,	// (0x00035934) vorec_t2

0x69db,	// (0x00035942) vorec_t3

0x69e9,	// (0x00035950) vorec_t4

0xd3ed,	// (0x0003c354) vorec_t5

0xd3fb,	// (0x0003c362) vorec_t6

0x0004,

0xf1ba,	// (0x0003e121) vorec_t

0xd409,	// (0x0003c370) wait_bar_pane_cp01

0x6a05,	// (0x0003596c) cell_vorec_pane_ParamLimits

0x6a05,	// (0x0003596c) cell_vorec_pane

0x6a18,	// (0x0003597f) cell_vorec_pane_g1

0xdaea,	// (0x0003ca51) grid_highlight_pane_cp05

0xd6c9,	// (0x0003c630) cams_zoom_pane

0xd6c9,	// (0x0003c630) image_vga_pane

0xddce,	// (0x0003cd35) main_camera_pane_g1

0xddce,	// (0x0003cd35) main_camera_pane_g2

0xddce,	// (0x0003cd35) main_camera_pane_g3

0xddce,	// (0x0003cd35) main_camera_pane_g4

0xddce,	// (0x0003cd35) main_camera_pane_g5

0xddce,	// (0x0003cd35) main_camera_pane_g6

0xddce,	// (0x0003cd35) main_camera_pane_g7

0x0007,

0xf1c5,	// (0x0003e12c) main_camera_pane_g

0xdfec,	// (0x0003cf53) main_camera_pane_t1

0xdfec,	// (0x0003cf53) main_camera_pane_t2

0x0001,

0xf1d6,	// (0x0003e13d) main_camera_pane_t

0x6a22,	// (0x00035989) cams_zoom_pane_cp_ParamLimits

0x6a22,	// (0x00035989) cams_zoom_pane_cp

0x6a50,	// (0x000359b7) image_cif_pane_ParamLimits

0x6a50,	// (0x000359b7) image_cif_pane

0xd6bf,	// (0x0003c626) image_subqcif_pane

0x6a5e,	// (0x000359c5) main_video_pane_g1_ParamLimits

0x6a5e,	// (0x000359c5) main_video_pane_g1

0x6a86,	// (0x000359ed) main_video_pane_g2_ParamLimits

0x6a86,	// (0x000359ed) main_video_pane_g2

0x6ab9,	// (0x00035a20) main_video_pane_g3_ParamLimits

0x6ab9,	// (0x00035a20) main_video_pane_g3

0x6ab9,	// (0x00035a20) main_video_pane_g4_ParamLimits

0x6ab9,	// (0x00035a20) main_video_pane_g4

0x6ae7,	// (0x00035a4e) main_video_pane_g5_ParamLimits

0x6ae7,	// (0x00035a4e) main_video_pane_g5

0xe000,	// (0x0003cf67) main_video_pane_g6_ParamLimits

0xe000,	// (0x0003cf67) main_video_pane_g6

0x0006,

0xf1db,	// (0x0003e142) main_video_pane_g_ParamLimits

0xf1db,	// (0x0003e142) main_video_pane_g

0x6b03,	// (0x00035a6a) main_video_pane_t1_ParamLimits

0x6b03,	// (0x00035a6a) main_video_pane_t1

0xe01a,	// (0x0003cf81) cams_zoom_pane_g1

0xe01a,	// (0x0003cf81) cams_zoom_pane_g2

0xe01a,	// (0x0003cf81) cams_zoom_pane_g3

0xe01a,	// (0x0003cf81) cams_zoom_pane_g4

0x0003,

0xf1ea,	// (0x0003e151) cams_zoom_pane_g

0x6b49,	// (0x00035ab0) grid_cams_pane

0x6b57,	// (0x00035abe) linegrid_cams_pane

0x6b65,	// (0x00035acc) cell_cams_pane_ParamLimits

0x6b65,	// (0x00035acc) cell_cams_pane

0xe024,	// (0x0003cf8b) cams_burst_image_pane

0xe02c,	// (0x0003cf93) cell_cams_pane_g1

0xdaea,	// (0x0003ca51) grid_highlight_pane_cp03

0xdd5d,	// (0x0003ccc4) mp_bg_pane_g1

0xd6bf,	// (0x0003c626) bg_list_pane_cp03

0xd6bf,	// (0x0003c626) bg_mp_pane

0xd6bf,	// (0x0003c626) grid_mp_pane

0xe01a,	// (0x0003cf81) media_player_g1

0xe555,	// (0x0003d4bc) media_player_t1

0xe555,	// (0x0003d4bc) media_player_t2

0xe555,	// (0x0003d4bc) media_player_t3

0xe555,	// (0x0003d4bc) media_player_t4

0xe555,	// (0x0003d4bc) media_player_t5

0xe555,	// (0x0003d4bc) media_player_t6

0xe555,	// (0x0003d4bc) media_player_t7

0x0006,

0xf577,	// (0x0003e4de) media_player_t

0xd6bf,	// (0x0003c626) wait_bar_pane_cp02

0xf55c,	// (0x0003e4c3) main_usb_pane_t

0xe7c1,	// (0x0003d728) cell_mp_pane

0xdd5d,	// (0x0003ccc4) cell_mp_pane_g1

0xdaea,	// (0x0003ca51) grid_highlight_pane_cp06

0xe048,	// (0x0003cfaf) grid_skin_colour_pane

0xe050,	// (0x0003cfb7) list_highlight_pane_cp03

0x6b78,	// (0x00035adf) skin_g1

0xe058,	// (0x0003cfbf) skin_t1

0xe067,	// (0x0003cfce) skin_t2

0x0001,

0xf218,	// (0x0003e17f) skin_t

0x6b82,	// (0x00035ae9) cell_skin_colour_pane_ParamLimits

0x6b82,	// (0x00035ae9) cell_skin_colour_pane

0xe075,	// (0x0003cfdc) cell_skin_colour_pane_g1

0x6c06,	// (0x00035b6d) call_video_g1_ParamLimits

0x6c06,	// (0x00035b6d) call_video_g1

0x6c16,	// (0x00035b7d) call_video_g2_ParamLimits

0x6c16,	// (0x00035b7d) call_video_g2

0x0001,

0xf21d,	// (0x0003e184) call_video_g_ParamLimits

0xf21d,	// (0x0003e184) call_video_g

0x6c70,	// (0x00035bd7) call_video_uplink_pane_cp1_ParamLimits

0x6c70,	// (0x00035bd7) call_video_uplink_pane_cp1

0xe087,	// (0x0003cfee) call_video_uplink_pane_cp2

0x6d3c,	// (0x00035ca3) video_down_crop_pane_ParamLimits

0x6d3c,	// (0x00035ca3) video_down_crop_pane

0x6e2e,	// (0x00035d95) video_down_pane_ParamLimits

0x6e2e,	// (0x00035d95) video_down_pane

0xe08f,	// (0x0003cff6) video_down_subqcif_pane_ParamLimits

0xe08f,	// (0x0003cff6) video_down_subqcif_pane

0xe0a7,	// (0x0003d00e) video_down_subqcif_pane_cp_ParamLimits

0xe0a7,	// (0x0003d00e) video_down_subqcif_pane_cp

0xe0cd,	// (0x0003d034) im_reading_pane_ParamLimits

0xe0cd,	// (0x0003d034) im_reading_pane

0x6f4e,	// (0x00035eb5) im_writing_pane_ParamLimits

0x6f4e,	// (0x00035eb5) im_writing_pane

0x6f6c,	// (0x00035ed3) im_reading_pane_t1

0xe0e7,	// (0x0003d04e) list_im_pane

0xe0f8,	// (0x0003d05f) scroll_pane_cp07

0x6fc4,	// (0x00035f2b) im_writing_pane_t1_ParamLimits

0x6fc4,	// (0x00035f2b) im_writing_pane_t1

0xe111,	// (0x0003d078) im_writing_pane_t2_ParamLimits

0xe111,	// (0x0003d078) im_writing_pane_t2

0x0001,

0xf227,	// (0x0003e18e) im_writing_pane_t_ParamLimits

0xf227,	// (0x0003e18e) im_writing_pane_t

0xdaea,	// (0x0003ca51) input_focus_pane_cp04

0xdaea,	// (0x0003ca51) input_focus_pane_cp05

0x6fd6,	// (0x00035f3d) list_im_single_pane_ParamLimits

0x6fd6,	// (0x00035f3d) list_im_single_pane

0x6ffd,	// (0x00035f64) list_single_im_pane_t1

0xdfe4,	// (0x0003cf4b) blid_accuracy_pane

0xdfe4,	// (0x0003cf4b) blid_compass_pane

0x1235,	// (0x0003019c) main_location_t1

0x1235,	// (0x0003019c) main_location_t2

0x1235,	// (0x0003019c) main_location_t3

0x0002,

0xf586,	// (0x0003e4ed) main_location_t

0xdaea,	// (0x0003ca51) aid_levels_location

0xdd5d,	// (0x0003ccc4) blid_accuracy_pane_g1

0xdd5d,	// (0x0003ccc4) blid_accuracy_pane_g2

0x0001,

0xf27b,	// (0x0003e1e2) blid_accuracy_pane_g

0xe159,	// (0x0003d0c0) wml_content_pane

0xe197,	// (0x0003d0fe) wml_button_pane_ParamLimits

0xe197,	// (0x0003d0fe) wml_button_pane

0x700c,	// (0x00035f73) wml_list_single_large_pane_ParamLimits

0x700c,	// (0x00035f73) wml_list_single_large_pane

0x7037,	// (0x00035f9e) wml_list_single_medium_pane_ParamLimits

0x7037,	// (0x00035f9e) wml_list_single_medium_pane

0x7069,	// (0x00035fd0) wml_list_single_small_pane_ParamLimits

0x7069,	// (0x00035fd0) wml_list_single_small_pane

0xe1ab,	// (0x0003d112) wml_selection_box_pane_ParamLimits

0xe1ab,	// (0x0003d112) wml_selection_box_pane

0xe1be,	// (0x0003d125) wml_list_single_pane_t1

0xe1cd,	// (0x0003d134) wml_list_single_medium_pane_t1

0xe1dc,	// (0x0003d143) wml_list_single_large_pane_t1

0xe1eb,	// (0x0003d152) input_focus_pane_cp02_ParamLimits

0xe1eb,	// (0x0003d152) input_focus_pane_cp02

0xe1fe,	// (0x0003d165) wml_selection_box_pane_g1

0xe207,	// (0x0003d16e) wml_selection_box_pane_t1_ParamLimits

0xe207,	// (0x0003d16e) wml_selection_box_pane_t1

0xdd45,	// (0x0003ccac) bg_wml_button_pane_ParamLimits

0xdd45,	// (0x0003ccac) bg_wml_button_pane

0xe21f,	// (0x0003d186) wml_button_pane_g1

0xe227,	// (0x0003d18e) wml_button_pane_t1

0xe21f,	// (0x0003d186) wml_button_bg_pane_g1

0xe237,	// (0x0003d19e) wml_button_bg_pane_g2

0xe23f,	// (0x0003d1a6) wml_button_bg_pane_g3

0xe247,	// (0x0003d1ae) wml_button_bg_pane_g4

0xe24f,	// (0x0003d1b6) wml_button_bg_pane_g5

0xe257,	// (0x0003d1be) wml_button_bg_pane_g6

0xe25f,	// (0x0003d1c6) wml_button_bg_pane_g7

0xe267,	// (0x0003d1ce) wml_button_bg_pane_g8

0xe26f,	// (0x0003d1d6) wml_button_bg_pane_g9

0x0008,

0xf22c,	// (0x0003e193) wml_button_bg_pane_g

0x70a6,	// (0x0003600d) bg_list_pane_cp02

0xe277,	// (0x0003d1de) mce_header_pane_ParamLimits

0xe277,	// (0x0003d1de) mce_header_pane

0xe28d,	// (0x0003d1f4) mce_icon_pane

0xe28d,	// (0x0003d1f4) mce_image_pane

0xe296,	// (0x0003d1fd) mce_text_pane_ParamLimits

0xe296,	// (0x0003d1fd) mce_text_pane

0x70b0,	// (0x00036017) scroll_pane_cp03

0xe18f,	// (0x0003d0f6) scroll_pane_cp04

0xe2a9,	// (0x0003d210) scroll_pane_cp05_ParamLimits

0xe2a9,	// (0x0003d210) scroll_pane_cp05

0x70ba,	// (0x00036021) mce_header_field_pane_ParamLimits

0x70ba,	// (0x00036021) mce_header_field_pane

0x70da,	// (0x00036041) mce_header_field_pane_2_ParamLimits

0x70da,	// (0x00036041) mce_header_field_pane_2

0x70f0,	// (0x00036057) mce_header_field_pane_3

0x70f8,	// (0x0003605f) list_single_mce_message_pane_ParamLimits

0x70f8,	// (0x0003605f) list_single_mce_message_pane

0x7126,	// (0x0003608d) list_single_mce_smart_pane_ParamLimits

0x7126,	// (0x0003608d) list_single_mce_smart_pane

0xe2b5,	// (0x0003d21c) input_focus_pane_cp03

0xe2be,	// (0x0003d225) list_header_data_pane

0x715f,	// (0x000360c6) mce_header_field_pane_t1

0x716d,	// (0x000360d4) list_single_mce_header_pane_ParamLimits

0x716d,	// (0x000360d4) list_single_mce_header_pane

0xe2c6,	// (0x0003d22d) list_single_mce_header_pane_t1

0xe2d5,	// (0x0003d23c) list_single_mce_message_pane_g1

0xe2dd,	// (0x0003d244) list_single_mce_message_pane_t1

0x71c3,	// (0x0003612a) bg_cale_heading_pane_cp01_ParamLimits

0x71c3,	// (0x0003612a) bg_cale_heading_pane_cp01

0xe2eb,	// (0x0003d252) bg_cale_pane_cp02_ParamLimits

0xe2eb,	// (0x0003d252) bg_cale_pane_cp02

0x7211,	// (0x00036178) cale_month_corner_pane

0x7230,	// (0x00036197) cale_month_day_heading_pane_ParamLimits

0x7230,	// (0x00036197) cale_month_day_heading_pane

0x7296,	// (0x000361fd) cale_month_pane_g1_ParamLimits

0x7296,	// (0x000361fd) cale_month_pane_g1

0x72d9,	// (0x00036240) cale_month_pane_g2_ParamLimits

0x72d9,	// (0x00036240) cale_month_pane_g2

0x7313,	// (0x0003627a) cale_month_pane_g3_ParamLimits

0x7313,	// (0x0003627a) cale_month_pane_g3

0x7363,	// (0x000362ca) cale_month_pane_g4_ParamLimits

0x7363,	// (0x000362ca) cale_month_pane_g4

0x73b3,	// (0x0003631a) cale_month_pane_g5_ParamLimits

0x73b3,	// (0x0003631a) cale_month_pane_g5

0x7403,	// (0x0003636a) cale_month_pane_g6_ParamLimits

0x7403,	// (0x0003636a) cale_month_pane_g6

0x7453,	// (0x000363ba) cale_month_pane_g7_ParamLimits

0x7453,	// (0x000363ba) cale_month_pane_g7

0x74bb,	// (0x00036422) cale_month_pane_g8_ParamLimits

0x74bb,	// (0x00036422) cale_month_pane_g8

0x7523,	// (0x0003648a) cale_month_pane_g9_ParamLimits

0x7523,	// (0x0003648a) cale_month_pane_g9

0x7581,	// (0x000364e8) cale_month_pane_g10_ParamLimits

0x7581,	// (0x000364e8) cale_month_pane_g10

0x75df,	// (0x00036546) cale_month_pane_g11_ParamLimits

0x75df,	// (0x00036546) cale_month_pane_g11

0x7633,	// (0x0003659a) cale_month_pane_g12_ParamLimits

0x7633,	// (0x0003659a) cale_month_pane_g12

0x7689,	// (0x000365f0) cale_month_pane_g13_ParamLimits

0x7689,	// (0x000365f0) cale_month_pane_g13

0x000c,

0xf23f,	// (0x0003e1a6) cale_month_pane_g_ParamLimits

0xf23f,	// (0x0003e1a6) cale_month_pane_g

0x76df,	// (0x00036646) cale_month_week_pane

0x7703,	// (0x0003666a) grid_cale_month_pane_ParamLimits

0x7703,	// (0x0003666a) grid_cale_month_pane

0x7760,	// (0x000366c7) cale_month_day_heading_pane_t1

0x77e6,	// (0x0003674d) cale_month_day_heading_pane_t2

0x785f,	// (0x000367c6) cale_month_day_heading_pane_t3

0x78d8,	// (0x0003683f) cale_month_day_heading_pane_t4

0x7951,	// (0x000368b8) cale_month_day_heading_pane_t5

0x79ca,	// (0x00036931) cale_month_day_heading_pane_t6

0x7a43,	// (0x000369aa) cale_month_day_heading_pane_t7

0x0006,

0xf25a,	// (0x0003e1c1) cale_month_day_heading_pane_t

0xdf92,	// (0x0003cef9) bg_cale_side_pane_cp01

0x7ad4,	// (0x00036a3b) cale_month_week_pane_t1

0x7aed,	// (0x00036a54) cale_month_week_pane_t2

0x7b06,	// (0x00036a6d) cale_month_week_pane_t3

0x7b1f,	// (0x00036a86) cale_month_week_pane_t4

0x7b3a,	// (0x00036aa1) cale_month_week_pane_t5

0x7b5b,	// (0x00036ac2) cale_month_week_pane_t6

0x0005,

0xf269,	// (0x0003e1d0) cale_month_week_pane_t

0x7b7c,	// (0x00036ae3) cell_cale_month_pane_ParamLimits

0x7b7c,	// (0x00036ae3) cell_cale_month_pane

0x7ca2,	// (0x00036c09) cell_cale_month_pane_g1

0x7cae,	// (0x00036c15) cell_cale_month_pane_t1_ParamLimits

0x7cae,	// (0x00036c15) cell_cale_month_pane_t1

0xdfa0,	// (0x0003cf07) grid_highlight_pane_cp08

0xdd5d,	// (0x0003ccc4) main_smil_g1

0x7cda,	// (0x00036c41) smil_status_pane

0xe32a,	// (0x0003d291) smil_text_pane

0x110d,	// (0x00030074) bg_popup_call3_rect_pane_g8

0x1115,	// (0x0003007c) bg_popup_call3_rect_pane_g9

0x0008,

0xf507,	// (0x0003e46e) bg_popup_call3_rect_pane_g

0x1365,	// (0x000302cc) smil_status_volume_pane_g1

0xe334,	// (0x0003d29b) smil_status_pane_t1

0x8ddd,	// (0x00037d44) volume_smil_pane

0xe34b,	// (0x0003d2b2) list_smil_text_pane

0x7ced,	// (0x00036c54) scroll_pane_cp011

0x7cf8,	// (0x00036c5f) smil_text_list_pane_t1_ParamLimits

0x7cf8,	// (0x00036c5f) smil_text_list_pane_t1

0x7d85,	// (0x00036cec) aid_volume_smil_ParamLimits

0x7d85,	// (0x00036cec) aid_volume_smil

0xdd5d,	// (0x0003ccc4) smil_volume_pane_g1

0xdd5d,	// (0x0003ccc4) smil_volume_pane_g2

0x0001,

0xf27b,	// (0x0003e1e2) smil_volume_pane_g

0x6534,	// (0x0003549b) listscroll_cale_day_pane

0xe355,	// (0x0003d2bc) bg_cale_pane

0xe36d,	// (0x0003d2d4) list_cale_pane

0xe390,	// (0x0003d2f7) scroll_pane_cp09

0xe3a1,	// (0x0003d308) cale_bg_pane_g1

0xe3a9,	// (0x0003d310) cale_bg_pane_g2

0xe3b1,	// (0x0003d318) cale_bg_pane_g3

0xe3b9,	// (0x0003d320) cale_bg_pane_g4

0xe3c1,	// (0x0003d328) cale_bg_pane_g5

0xe3c9,	// (0x0003d330) cale_bg_pane_g6

0xe3d1,	// (0x0003d338) cale_bg_pane_g7

0xe3d9,	// (0x0003d340) cale_bg_pane_g8

0xe3e1,	// (0x0003d348) cale_bg_pane_g9

0x0008,

0xf280,	// (0x0003e1e7) cale_bg_pane_g

0x7daf,	// (0x00036d16) list_cale_time_pane_ParamLimits

0x7daf,	// (0x00036d16) list_cale_time_pane

0xe3e9,	// (0x0003d350) list_cale_time_pane_g1_ParamLimits

0xe3e9,	// (0x0003d350) list_cale_time_pane_g1

0xe3f5,	// (0x0003d35c) list_cale_time_pane_g2_ParamLimits

0xe3f5,	// (0x0003d35c) list_cale_time_pane_g2

0x7dd7,	// (0x00036d3e) list_cale_time_pane_g3_ParamLimits

0x7dd7,	// (0x00036d3e) list_cale_time_pane_g3

0x7de5,	// (0x00036d4c) list_cale_time_pane_g4_ParamLimits

0x7de5,	// (0x00036d4c) list_cale_time_pane_g4

0x7df3,	// (0x00036d5a) list_cale_time_pane_g5_ParamLimits

0x7df3,	// (0x00036d5a) list_cale_time_pane_g5

0x0005,

0xf293,	// (0x0003e1fa) list_cale_time_pane_g_ParamLimits

0xf293,	// (0x0003e1fa) list_cale_time_pane_g

0xe40f,	// (0x0003d376) list_cale_time_pane_t1_ParamLimits

0xe40f,	// (0x0003d376) list_cale_time_pane_t1

0xe437,	// (0x0003d39e) list_cale_time_pane_t2_ParamLimits

0xe437,	// (0x0003d39e) list_cale_time_pane_t2

0x80ae,	// (0x00037015) aid_blid_cardinal_pane

0x80f0,	// (0x00037057) compass_pane_t4

0xe45f,	// (0x0003d3c6) list_cale_time_pane_t4_ParamLimits

0xe45f,	// (0x0003d3c6) list_cale_time_pane_t4

0x80fe,	// (0x00037065) compass_pane_t5

0x810e,	// (0x00037075) compass_pane_t6

0x811c,	// (0x00037083) compass_pane_t7

0xe8db,	// (0x0003d842) navi_pane_cc_t1

0xeab8,	// (0x0003da1f) aid_phob_thumbnail_center_pane

0x84cf,	// (0x00037436) main_postcard_pane_g4_ParamLimits

0x0002,

0xf2a0,	// (0x0003e207) list_cale_time_pane_t_ParamLimits

0xf2a0,	// (0x0003e207) list_cale_time_pane_t

0xd741,	// (0x0003c6a8) bg_popup_window_pane_cp02_ParamLimits

0xd741,	// (0x0003c6a8) bg_popup_window_pane_cp02

0xe487,	// (0x0003d3ee) heading_pane_cp01_ParamLimits

0xe487,	// (0x0003d3ee) heading_pane_cp01

0xe493,	// (0x0003d3fa) loc_req_pane_ParamLimits

0xe493,	// (0x0003d3fa) loc_req_pane

0xe4a3,	// (0x0003d40a) loc_type_pane_ParamLimits

0xe4a3,	// (0x0003d40a) loc_type_pane

0xe4b5,	// (0x0003d41c) loc_type_pane_t1_ParamLimits

0xe4b5,	// (0x0003d41c) loc_type_pane_t1

0xe4c7,	// (0x0003d42e) loc_type_pane_t2_ParamLimits

0xe4c7,	// (0x0003d42e) loc_type_pane_t2

0xe4d9,	// (0x0003d440) loc_type_pane_t3_ParamLimits

0xe4d9,	// (0x0003d440) loc_type_pane_t3

0x0002,

0xf2a7,	// (0x0003e20e) loc_type_pane_t_ParamLimits

0xf2a7,	// (0x0003e20e) loc_type_pane_t

0xe4eb,	// (0x0003d452) list_loc_req_pane

0xe4f5,	// (0x0003d45c) scroll_pane_cp012

0x50bb,	// (0x00034022) list_single_loc_request_popup_menu_pane_ParamLimits

0x50bb,	// (0x00034022) list_single_loc_request_popup_menu_pane

0xe500,	// (0x0003d467) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xe500,	// (0x0003d467) list_single_loc_request_popup_menu_pane_g1

0xe50c,	// (0x0003d473) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xe50c,	// (0x0003d473) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf2ae,	// (0x0003e215) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf2ae,	// (0x0003e215) list_single_loc_request_popup_menu_pane_g

0xe518,	// (0x0003d47f) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xe518,	// (0x0003d47f) list_single_loc_request_popup_menu_pane_t1

0x7e01,	// (0x00036d68) bg_popup_window_pane_cp03_ParamLimits

0x7e01,	// (0x00036d68) bg_popup_window_pane_cp03

0x7e0f,	// (0x00036d76) heading_loc_req_pane_ParamLimits

0x7e0f,	// (0x00036d76) heading_loc_req_pane

0x7e1b,	// (0x00036d82) popup_dyc_status_message_window_g1_ParamLimits

0x7e1b,	// (0x00036d82) popup_dyc_status_message_window_g1

0x7e27,	// (0x00036d8e) popup_dyc_status_message_window_t1_ParamLimits

0x7e27,	// (0x00036d8e) popup_dyc_status_message_window_t1

0x7e39,	// (0x00036da0) popup_dyc_status_message_window_t2_ParamLimits

0x7e39,	// (0x00036da0) popup_dyc_status_message_window_t2

0x7e4b,	// (0x00036db2) popup_dyc_status_message_window_t3_ParamLimits

0x7e4b,	// (0x00036db2) popup_dyc_status_message_window_t3

0x0002,

0xf2b3,	// (0x0003e21a) popup_dyc_status_message_window_t_ParamLimits

0xf2b3,	// (0x0003e21a) popup_dyc_status_message_window_t

0xdaea,	// (0x0003ca51) bg_heading_pane_cp01

0xe52e,	// (0x0003d495) heading_loc_req_pane_g1

0xe536,	// (0x0003d49d) heading_loc_req_pane_g2

0xe53e,	// (0x0003d4a5) heading_loc_req_pane_g3

0x0002,

0xf2ba,	// (0x0003e221) heading_loc_req_pane_g

0xe546,	// (0x0003d4ad) heading_loc_req_pane_t1

0xe565,	// (0x0003d4cc) bg_popup_sub_pane_cp01_ParamLimits

0xe565,	// (0x0003d4cc) bg_popup_sub_pane_cp01

0xe573,	// (0x0003d4da) popup_cale_events_window_g1_ParamLimits

0xe573,	// (0x0003d4da) popup_cale_events_window_g1

0xe593,	// (0x0003d4fa) popup_cale_events_window_g2_ParamLimits

0xe593,	// (0x0003d4fa) popup_cale_events_window_g2

0x0001,

0xf2dc,	// (0x0003e243) popup_cale_events_window_g_ParamLimits

0xf2dc,	// (0x0003e243) popup_cale_events_window_g

0xe5b3,	// (0x0003d51a) popup_cale_events_window_t1_ParamLimits

0xe5b3,	// (0x0003d51a) popup_cale_events_window_t1

0xe5c5,	// (0x0003d52c) popup_cale_events_window_t2_ParamLimits

0xe5c5,	// (0x0003d52c) popup_cale_events_window_t2

0xe603,	// (0x0003d56a) popup_cale_events_window_t3_ParamLimits

0xe603,	// (0x0003d56a) popup_cale_events_window_t3

0xe63d,	// (0x0003d5a4) popup_cale_events_window_t4_ParamLimits

0xe63d,	// (0x0003d5a4) popup_cale_events_window_t4

0x0003,

0xf2e1,	// (0x0003e248) popup_cale_events_window_t_ParamLimits

0xf2e1,	// (0x0003e248) popup_cale_events_window_t

0x7e75,	// (0x00036ddc) call_type_pane

0x0938,	// (0x0002f89f) popup_call_status_window_g1

0x7e81,	// (0x00036de8) popup_call_status_window_g2

0x7e8d,	// (0x00036df4) popup_call_status_window_g3

0x0002,

0xf2ea,	// (0x0003e251) popup_call_status_window_g

0xe673,	// (0x0003d5da) call_type_pane_g1

0xe67c,	// (0x0003d5e3) call_type_pane_g2

0x0001,

0xf2f1,	// (0x0003e258) call_type_pane_g

0xdaea,	// (0x0003ca51) bg_popup_sub_pane_cp02

0xe685,	// (0x0003d5ec) listscroll_popup_wml_pane

0xe68d,	// (0x0003d5f4) list_wml_pane

0xe697,	// (0x0003d5fe) scroll_pane_cp013

0xe6a2,	// (0x0003d609) list_single_graphic_popup_wml_pane_ParamLimits

0xe6a2,	// (0x0003d609) list_single_graphic_popup_wml_pane

0xdd5d,	// (0x0003ccc4) list_single_graphic_popup_wml_pane_g1

0xe6b6,	// (0x0003d61d) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf2f6,	// (0x0003e25d) list_single_graphic_popup_wml_pane_g

0xe6be,	// (0x0003d625) list_single_graphic_popup_wml_pane_t1

0xe6d4,	// (0x0003d63b) aid_call_pane

0xdd3d,	// (0x0003cca4) popup_clock_analogue_window_g1

0xdd3d,	// (0x0003cca4) popup_clock_analogue_window_g2

0x7e99,	// (0x00036e00) popup_clock_analogue_window_g3

0x7e99,	// (0x00036e00) popup_clock_analogue_window_g4

0xdd5d,	// (0x0003ccc4) popup_clock_analogue_window_g5

0x0004,

0xf2fb,	// (0x0003e262) popup_clock_analogue_window_g

0x7ea1,	// (0x00036e08) popup_clock_analogue_window_t1

0x7eaf,	// (0x00036e16) clock_digital_number_pane_ParamLimits

0x7eaf,	// (0x00036e16) clock_digital_number_pane

0x7ebb,	// (0x00036e22) clock_digital_number_pane_cp02_ParamLimits

0x7ebb,	// (0x00036e22) clock_digital_number_pane_cp02

0x7ec7,	// (0x00036e2e) clock_digital_number_pane_cp03_ParamLimits

0x7ec7,	// (0x00036e2e) clock_digital_number_pane_cp03

0x7ed3,	// (0x00036e3a) clock_digital_number_pane_cp04_ParamLimits

0x7ed3,	// (0x00036e3a) clock_digital_number_pane_cp04

0x7edf,	// (0x00036e46) clock_digital_separator_pane_ParamLimits

0x7edf,	// (0x00036e46) clock_digital_separator_pane

0x7eeb,	// (0x00036e52) popup_clock_digital_window_t1

0xdd5d,	// (0x0003ccc4) clock_digital_number_pane_g1

0xdd5d,	// (0x0003ccc4) clock_digital_number_pane_g2

0x0001,

0xf27b,	// (0x0003e1e2) clock_digital_number_pane_g

0xdd5d,	// (0x0003ccc4) clock_digital_separator_pane_g1

0xdd5d,	// (0x0003ccc4) clock_digital_separator_pane_g2

0x0001,

0xf27b,	// (0x0003e1e2) clock_digital_separator_pane_g

0xdaea,	// (0x0003ca51) bg_popup_window_pane_cp04

0xe6dc,	// (0x0003d643) heading_pane_cp03

0xdfe4,	// (0x0003cf4b) listscroll_popup_gms_pane

0xdaea,	// (0x0003ca51) grid_large_graphic_popup_pane

0xe6e5,	// (0x0003d64c) listscroll_popup_gms_pane_g1

0xe6ee,	// (0x0003d655) listscroll_popup_gms_pane_g2

0x0001,

0xf306,	// (0x0003e26d) listscroll_popup_gms_pane_g

0xe6f7,	// (0x0003d65e) scroll_pane_cp014

0xd6c9,	// (0x0003c630) cell_large_graphic_popup_pane_ParamLimits

0xd6c9,	// (0x0003c630) cell_large_graphic_popup_pane

0xddc0,	// (0x0003cd27) cell_large_graphic_popup_pane_g1_ParamLimits

0xddc0,	// (0x0003cd27) cell_large_graphic_popup_pane_g1

0xe700,	// (0x0003d667) cell_large_graphic_popup_pane_g2_ParamLimits

0xe700,	// (0x0003d667) cell_large_graphic_popup_pane_g2

0xe70e,	// (0x0003d675) cell_large_graphic_popup_pane_g3_ParamLimits

0xe70e,	// (0x0003d675) cell_large_graphic_popup_pane_g3

0xe71c,	// (0x0003d683) cell_large_graphic_popup_pane_g4_ParamLimits

0xe71c,	// (0x0003d683) cell_large_graphic_popup_pane_g4

0x0003,

0xf30b,	// (0x0003e272) cell_large_graphic_popup_pane_g_ParamLimits

0xf30b,	// (0x0003e272) cell_large_graphic_popup_pane_g

0xdaea,	// (0x0003ca51) grid_highlight_pane_cp010

0xdd5d,	// (0x0003ccc4) bg_popup_call_pane_g1

0xe72d,	// (0x0003d694) list_single_graphic_popup_conf_pane_ParamLimits

0xe72d,	// (0x0003d694) list_single_graphic_popup_conf_pane

0xe740,	// (0x0003d6a7) list_highlight_pane_cp01

0xe749,	// (0x0003d6b0) list_single_graphic_popup_conf_pane_g1

0xe751,	// (0x0003d6b8) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf314,	// (0x0003e27b) list_single_graphic_popup_conf_pane_g

0xe759,	// (0x0003d6c0) list_single_graphic_popup_conf_pane_t1

0xe767,	// (0x0003d6ce) linegrid_cams_pane_g1

0x7f08,	// (0x00036e6f) linegrid_cams_pane_g2

0xdf23,	// (0x0003ce8a) linegrid_cams_pane_g3

0xe770,	// (0x0003d6d7) linegrid_cams_pane_g4

0x7f11,	// (0x00036e78) linegrid_cams_pane_g5

0x7f1a,	// (0x00036e81) linegrid_cams_pane_g6

0xdfd3,	// (0x0003cf3a) linegrid_cams_pane_g7

0x0006,

0xf319,	// (0x0003e280) linegrid_cams_pane_g

0xe779,	// (0x0003d6e0) popup_clock_analogue_window

0xe779,	// (0x0003d6e0) popup_clock_digital_window

0xdaea,	// (0x0003ca51) popup_phob_thumbnail_window

0xdd5d,	// (0x0003ccc4) call_video_uplink_pane_g1

0xe782,	// (0x0003d6e9) call_video_uplink_pane_g2

0x0001,

0xf328,	// (0x0003e28f) call_video_uplink_pane_g

0xe78a,	// (0x0003d6f1) video_uplink_pane

0xe792,	// (0x0003d6f9) mce_image_pane_g1

0x7f23,	// (0x00036e8a) mce_image_pane_g2

0x7f2b,	// (0x00036e92) mce_image_pane_g3

0x7f33,	// (0x00036e9a) mce_image_pane_g4

0x7f3b,	// (0x00036ea2) mce_image_pane_g5

0x0004,

0xf32d,	// (0x0003e294) mce_image_pane_g

0xe79c,	// (0x0003d703) control_top_pane_stacon_cp01_ParamLimits

0xe79c,	// (0x0003d703) control_top_pane_stacon_cp01

0xe7b0,	// (0x0003d717) uni_indicator_pane_stacon_cp01_ParamLimits

0xe7b0,	// (0x0003d717) uni_indicator_pane_stacon_cp01

0xe7c1,	// (0x0003d728) bg_popup_sub_pane_cp03

0x7f43,	// (0x00036eaa) chi_dic_find_pane

0x7f4b,	// (0x00036eb2) listscroll_chi_dic_pane

0x7f54,	// (0x00036ebb) main_pane_chidic_g1

0x7f67,	// (0x00036ece) chi_dic_find_pane_t1

0xe7cb,	// (0x0003d732) find_chidic_pane

0xe7d4,	// (0x0003d73b) chi_dic_list_pane_ParamLimits

0xe7d4,	// (0x0003d73b) chi_dic_list_pane

0xe7e5,	// (0x0003d74c) scroll_pane_cp020

0x7f75,	// (0x00036edc) find_chidic_pane_t1

0xdaea,	// (0x0003ca51) input_focus_pane_cp06

0x7f84,	// (0x00036eeb) list_chi_dic_pane_ParamLimits

0x7f84,	// (0x00036eeb) list_chi_dic_pane

0x7fa1,	// (0x00036f08) list_chi_dic_pane_t1_ParamLimits

0x7fa1,	// (0x00036f08) list_chi_dic_pane_t1

0xdaea,	// (0x0003ca51) list_highlight_pane_cp020

0xe7ed,	// (0x0003d754) bg_cale_heading_pane_g1

0x7fb4,	// (0x00036f1b) bg_cale_heading_pane_g2

0x7fbc,	// (0x00036f23) bg_cale_heading_pane_g3

0x7fc4,	// (0x00036f2b) bg_cale_heading_pane_g4

0x7fce,	// (0x00036f35) bg_cale_heading_pane_g5

0x7fd8,	// (0x00036f3f) bg_cale_heading_pane_g6

0x7fe0,	// (0x00036f47) bg_cale_heading_pane_g7

0x7fe8,	// (0x00036f4f) bg_cale_heading_pane_g8

0x7ff2,	// (0x00036f59) bg_cale_heading_pane_g9

0x0008,

0xf338,	// (0x0003e29f) bg_cale_heading_pane_g

0xe7ed,	// (0x0003d754) bg_cale_side_pane_g1

0x7ffc,	// (0x00036f63) bg_cale_side_pane_g2

0x8006,	// (0x00036f6d) bg_cale_side_pane_g3

0x8010,	// (0x00036f77) bg_cale_side_pane_g4

0x801a,	// (0x00036f81) bg_cale_side_pane_g5

0x8024,	// (0x00036f8b) bg_cale_side_pane_g6

0x802e,	// (0x00036f95) bg_cale_side_pane_g7

0x8038,	// (0x00036f9f) bg_cale_side_pane_g8

0x8040,	// (0x00036fa7) bg_cale_side_pane_g9

0x0008,

0xf34b,	// (0x0003e2b2) bg_cale_side_pane_g

0x8048,	// (0x00036faf) popup_call_status_window_ParamLimits

0x8048,	// (0x00036faf) popup_call_status_window

0xe7f5,	// (0x0003d75c) stacon_top_pane

0xe7fd,	// (0x0003d764) status_pane_ParamLimits

0xe7fd,	// (0x0003d764) status_pane

0xe812,	// (0x0003d779) status_small_pane

0xe81a,	// (0x0003d781) control_pane

0xdaea,	// (0x0003ca51) stacon_bottom_pane

0xe822,	// (0x0003d789) list_single_mce_smart_pane_t1_ParamLimits

0xe822,	// (0x0003d789) list_single_mce_smart_pane_t1

0xe835,	// (0x0003d79c) list_single_mce_smart_pane_t2_ParamLimits

0xe835,	// (0x0003d79c) list_single_mce_smart_pane_t2

0x0001,

0xf35e,	// (0x0003e2c5) list_single_mce_smart_pane_t_ParamLimits

0xf35e,	// (0x0003e2c5) list_single_mce_smart_pane_t

0x8054,	// (0x00036fbb) compass_pane

0x8060,	// (0x00036fc7) main_location2_pane_t1

0x8074,	// (0x00036fdb) main_location2_pane_t2

0x8088,	// (0x00036fef) main_location2_pane_t3

0x0003,

0xf363,	// (0x0003e2ca) main_location2_pane_t

0xe854,	// (0x0003d7bb) compass_pane_g1_ParamLimits

0xe854,	// (0x0003d7bb) compass_pane_g1

0x80d2,	// (0x00037039) compass_pane_t1

0x80e1,	// (0x00037048) compass_pane_t2

0x0005,

0xf36c,	// (0x0003e2d3) compass_pane_t

0x812c,	// (0x00037093) text_secondary_cp61

0xe8d2,	// (0x0003d839) navi_pane_cams_g5

0xe94e,	// (0x0003d8b5) navi_pane_im_t1

0xe95c,	// (0x0003d8c3) navi_pane_mp_g1_ParamLimits

0xe95c,	// (0x0003d8c3) navi_pane_mp_g1

0xe970,	// (0x0003d8d7) navi_pane_mp_g2_ParamLimits

0xe970,	// (0x0003d8d7) navi_pane_mp_g2

0xe97c,	// (0x0003d8e3) navi_pane_mp_g3_ParamLimits

0xe97c,	// (0x0003d8e3) navi_pane_mp_g3

0x0002,

0xf380,	// (0x0003e2e7) navi_pane_mp_g_ParamLimits

0xf380,	// (0x0003e2e7) navi_pane_mp_g

0xe988,	// (0x0003d8ef) navi_pane_mp_t1

0xe996,	// (0x0003d8fd) navi_pane_mp_t2

0x0002,

0xf387,	// (0x0003e2ee) navi_pane_mp_t

0xea01,	// (0x0003d968) navi_pane_vt_g1

0xe988,	// (0x0003d8ef) navi_pane_vt_t1

0xea09,	// (0x0003d970) navi_slider_pane

0xdfe4,	// (0x0003cf4b) zooming_pane

0xea19,	// (0x0003d980) navi_slider_pane_g1

0x8167,	// (0x000370ce) navi_slider_pane_g2

0x0006,

0xf38e,	// (0x0003e2f5) navi_slider_pane_g

0xea3d,	// (0x0003d9a4) aid_levels_zoom

0xea45,	// (0x0003d9ac) zooming_pane_g1

0xea4d,	// (0x0003d9b4) zooming_pane_g2

0xea4d,	// (0x0003d9b4) zooming_pane_g3

0x0002,

0xf39d,	// (0x0003e304) zooming_pane_g

0xea55,	// (0x0003d9bc) level_10_zoom

0xea5e,	// (0x0003d9c5) level_11_zoom

0xea67,	// (0x0003d9ce) level_1_zoom

0xea70,	// (0x0003d9d7) level_2_zoom

0xea79,	// (0x0003d9e0) level_3_zoom

0xea82,	// (0x0003d9e9) level_4_zoom

0xea8b,	// (0x0003d9f2) level_5_zoom

0xea94,	// (0x0003d9fb) level_6_zoom

0xea9d,	// (0x0003da04) level_7_zoom

0xeaa6,	// (0x0003da0d) level_8_zoom

0xeaaf,	// (0x0003da16) level_9_zoom

0xeac0,	// (0x0003da27) popup_phob_thumbnail_window_g1

0xeac8,	// (0x0003da2f) popup_phob_thumbnail_window_g2

0x0001,

0xf3a4,	// (0x0003e30b) popup_phob_thumbnail_window_g

0x8a8e,	// (0x000379f5) level_1_location

0x8a96,	// (0x000379fd) level_2_location

0x8a9e,	// (0x00037a05) level_3_location

0x8aa8,	// (0x00037a0f) level_4_location

0xdfe4,	// (0x0003cf4b) level_5_location

0x8179,	// (0x000370e0) mce_icon_pane_g1

0x8181,	// (0x000370e8) mce_icon_pane_g2

0x0001,

0xf3a9,	// (0x0003e310) mce_icon_pane_g

0x8189,	// (0x000370f0) main_mup_pane_g1_ParamLimits

0x8189,	// (0x000370f0) main_mup_pane_g1

0xdddc,	// (0x0003cd43) main_mup_pane_g2_ParamLimits

0xdddc,	// (0x0003cd43) main_mup_pane_g2

0xdddc,	// (0x0003cd43) main_mup_pane_g3_ParamLimits

0xdddc,	// (0x0003cd43) main_mup_pane_g3

0xdddc,	// (0x0003cd43) main_mup_pane_g4_ParamLimits

0xdddc,	// (0x0003cd43) main_mup_pane_g4

0xdddc,	// (0x0003cd43) main_mup_pane_g5_ParamLimits

0xdddc,	// (0x0003cd43) main_mup_pane_g5

0xdddc,	// (0x0003cd43) main_mup_pane_g6_ParamLimits

0xdddc,	// (0x0003cd43) main_mup_pane_g6

0xdddc,	// (0x0003cd43) main_mup_pane_g7_ParamLimits

0xdddc,	// (0x0003cd43) main_mup_pane_g7

0xdddc,	// (0x0003cd43) main_mup_pane_g8_ParamLimits

0xdddc,	// (0x0003cd43) main_mup_pane_g8

0xdddc,	// (0x0003cd43) main_mup_pane_g9_ParamLimits

0xdddc,	// (0x0003cd43) main_mup_pane_g9

0xdddc,	// (0x0003cd43) main_mup_pane_g10_ParamLimits

0xdddc,	// (0x0003cd43) main_mup_pane_g10

0xdddc,	// (0x0003cd43) main_mup_pane_g11_ParamLimits

0xdddc,	// (0x0003cd43) main_mup_pane_g11

0xddce,	// (0x0003cd35) main_mup_pane_g12_ParamLimits

0xddce,	// (0x0003cd35) main_mup_pane_g12

0xdddc,	// (0x0003cd43) main_mup_pane_g13_ParamLimits

0xdddc,	// (0x0003cd43) main_mup_pane_g13

0x000c,

0xf3ae,	// (0x0003e315) main_mup_pane_g_ParamLimits

0xf3ae,	// (0x0003e315) main_mup_pane_g

0xddea,	// (0x0003cd51) main_mup_pane_t1_ParamLimits

0xddea,	// (0x0003cd51) main_mup_pane_t1

0xddea,	// (0x0003cd51) main_mup_pane_t2_ParamLimits

0xddea,	// (0x0003cd51) main_mup_pane_t2

0xddea,	// (0x0003cd51) main_mup_pane_t3_ParamLimits

0xddea,	// (0x0003cd51) main_mup_pane_t3

0xdfec,	// (0x0003cf53) main_mup_pane_t4_ParamLimits

0xdfec,	// (0x0003cf53) main_mup_pane_t4

0xdfec,	// (0x0003cf53) main_mup_pane_t5_ParamLimits

0xdfec,	// (0x0003cf53) main_mup_pane_t5

0xe034,	// (0x0003cf9b) main_mup_pane_t6_ParamLimits

0xe034,	// (0x0003cf9b) main_mup_pane_t6

0x0005,

0xf3c9,	// (0x0003e330) main_mup_pane_t_ParamLimits

0xf3c9,	// (0x0003e330) main_mup_pane_t

0xdd67,	// (0x0003ccce) mup_progress_pane_ParamLimits

0xdd67,	// (0x0003ccce) mup_progress_pane

0x15a3,	// (0x0003050a) mup_visualizer_pane_ParamLimits

0x15a3,	// (0x0003050a) mup_visualizer_pane

0x15a3,	// (0x0003050a) mup_volume_pane_ParamLimits

0x15a3,	// (0x0003050a) mup_volume_pane

0xddce,	// (0x0003cd35) mup_visualizer_pane_g1_ParamLimits

0xddce,	// (0x0003cd35) mup_visualizer_pane_g1

0xead0,	// (0x0003da37) mup_visualizer_pane_g2_ParamLimits

0xead0,	// (0x0003da37) mup_visualizer_pane_g2

0xddc0,	// (0x0003cd27) mup_visualizer_pane_g3_ParamLimits

0xddc0,	// (0x0003cd27) mup_visualizer_pane_g3

0x0002,

0xf3d6,	// (0x0003e33d) mup_visualizer_pane_g_ParamLimits

0xf3d6,	// (0x0003e33d) mup_visualizer_pane_g

0xe01a,	// (0x0003cf81) mup_volume_pane_g1

0xe01a,	// (0x0003cf81) mup_volume_pane_g2

0x0001,

0xf3dd,	// (0x0003e344) mup_volume_pane_g

0xe01a,	// (0x0003cf81) mup_progress_pane_g1

0xe01a,	// (0x0003cf81) mup_progress_pane_g2

0xe01a,	// (0x0003cf81) mup_progress_pane_g3

0x0002,

0xf3e2,	// (0x0003e349) mup_progress_pane_g

0xdaea,	// (0x0003ca51) bg_popup_window_pane_cp05

0xeade,	// (0x0003da45) heading_pane_cp02_ParamLimits

0xeade,	// (0x0003da45) heading_pane_cp02

0xeaf8,	// (0x0003da5f) list_popup_blid_pane

0xeb00,	// (0x0003da67) list_blid_sat_info_pane_ParamLimits

0xeb00,	// (0x0003da67) list_blid_sat_info_pane

0xeb13,	// (0x0003da7a) list_blid_sat_info_pane_g1

0xeb1b,	// (0x0003da82) list_blid_sat_info_pane_t1

0x8284,	// (0x000371eb) mup_equalizer_pane_ParamLimits

0x8284,	// (0x000371eb) mup_equalizer_pane

0x82a5,	// (0x0003720c) mup_equalizer_pane_cp1_ParamLimits

0x82a5,	// (0x0003720c) mup_equalizer_pane_cp1

0x82c6,	// (0x0003722d) mup_equalizer_pane_cp2_ParamLimits

0x82c6,	// (0x0003722d) mup_equalizer_pane_cp2

0x82e7,	// (0x0003724e) mup_equalizer_pane_cp3_ParamLimits

0x82e7,	// (0x0003724e) mup_equalizer_pane_cp3

0x8308,	// (0x0003726f) mup_equalizer_pane_cp4_ParamLimits

0x8308,	// (0x0003726f) mup_equalizer_pane_cp4

0x8329,	// (0x00037290) mup_equalizer_pane_cp5

0x833f,	// (0x000372a6) mup_equalizer_pane_cp6

0x8357,	// (0x000372be) mup_equalizer_pane_cp7

0x118d,	// (0x000300f4) bg_popup_call_poc_act_pane_g9

0x1195,	// (0x000300fc) bg_popup_call_poc_act_pane_g10

0x119d,	// (0x00030104) bg_popup_call_poc_act_pane_g11

0x000a,

0xdd45,	// (0x0003ccac) mup_scale_pane

0xdd5d,	// (0x0003ccc4) mup_scale_pane_g1

0xeb29,	// (0x0003da90) mup_scale_pane_g2

0x0006,

0xf3fe,	// (0x0003e365) mup_scale_pane_g

0xeb4d,	// (0x0003dab4) msg_data_pane

0xeb55,	// (0x0003dabc) scroll_pane_cp017

0x50d4,	// (0x0003403b) bg_list_pane_cp04_ParamLimits

0x50d4,	// (0x0003403b) bg_list_pane_cp04

0xeb5d,	// (0x0003dac4) msg_data_pane_g1

0x8381,	// (0x000372e8) msg_data_pane_g2

0x8389,	// (0x000372f0) msg_data_pane_g3

0x8391,	// (0x000372f8) msg_data_pane_g4

0x8399,	// (0x00037300) msg_data_pane_g5

0x83a1,	// (0x00037308) msg_data_pane_g6

0x83a9,	// (0x00037310) msg_data_pane_g7

0x0006,

0xf40d,	// (0x0003e374) msg_data_pane_g

0x50f4,	// (0x0003405b) msg_text_pane_ParamLimits

0x50f4,	// (0x0003405b) msg_text_pane

0x83b1,	// (0x00037318) qrid_highlight_pane_cp011_ParamLimits

0x83b1,	// (0x00037318) qrid_highlight_pane_cp011

0xdaea,	// (0x0003ca51) msg_body_pane

0xdaea,	// (0x0003ca51) msg_header_pane

0xeb6e,	// (0x0003dad5) input_focus_pane_cp07

0x5158,	// (0x000340bf) msg_header_pane_t1_ParamLimits

0x5158,	// (0x000340bf) msg_header_pane_t1

0x516e,	// (0x000340d5) msg_header_pane_t2_ParamLimits

0x516e,	// (0x000340d5) msg_header_pane_t2

0x0001,

0xf421,	// (0x0003e388) msg_header_pane_t_ParamLimits

0xf421,	// (0x0003e388) msg_header_pane_t

0xeb83,	// (0x0003daea) msg_body_pane_g1

0x5185,	// (0x000340ec) msg_body_pane_t1_ParamLimits

0x5185,	// (0x000340ec) msg_body_pane_t1

0x51b6,	// (0x0003411d) msg_body_pane_t2_ParamLimits

0x51b6,	// (0x0003411d) msg_body_pane_t2

0x51c8,	// (0x0003412f) msg_body_pane_t3_ParamLimits

0x51c8,	// (0x0003412f) msg_body_pane_t3

0x0002,

0xf426,	// (0x0003e38d) msg_body_pane_t_ParamLimits

0xf426,	// (0x0003e38d) msg_body_pane_t

0x841f,	// (0x00037386) main_viewer_pane_g1_ParamLimits

0x841f,	// (0x00037386) main_viewer_pane_g1

0x842b,	// (0x00037392) main_viewer_pane_g2_ParamLimits

0x842b,	// (0x00037392) main_viewer_pane_g2

0x8437,	// (0x0003739e) main_viewer_pane_g3_ParamLimits

0x8437,	// (0x0003739e) main_viewer_pane_g3

0x8448,	// (0x000373af) main_viewer_pane_g4_ParamLimits

0x8448,	// (0x000373af) main_viewer_pane_g4

0x8459,	// (0x000373c0) main_viewer_pane_g5_ParamLimits

0x8459,	// (0x000373c0) main_viewer_pane_g5

0x8459,	// (0x000373c0) main_viewer_pane_g7_ParamLimits

0x8459,	// (0x000373c0) main_viewer_pane_g7

0x846b,	// (0x000373d2) main_viewer_pane_g8_ParamLimits

0x846b,	// (0x000373d2) main_viewer_pane_g8

0x0007,

0xf436,	// (0x0003e39d) main_viewer_pane_g_ParamLimits

0xf436,	// (0x0003e39d) main_viewer_pane_g

0xeb8b,	// (0x0003daf2) viewer_content_pane_ParamLimits

0xeb8b,	// (0x0003daf2) viewer_content_pane

0x84a3,	// (0x0003740a) main_postcard_pane_g1_ParamLimits

0x84a3,	// (0x0003740a) main_postcard_pane_g1

0x84b1,	// (0x00037418) main_postcard_pane_g2_ParamLimits

0x84b1,	// (0x00037418) main_postcard_pane_g2

0x84bf,	// (0x00037426) main_postcard_pane_g3_ParamLimits

0x84bf,	// (0x00037426) main_postcard_pane_g3

0x0005,

0xf447,	// (0x0003e3ae) main_postcard_pane_g_ParamLimits

0xf447,	// (0x0003e3ae) main_postcard_pane_g

0x84cf,	// (0x00037436) main_postcard_pane_g4

0x1352,	// (0x000302b9) smil_status_volume_pane_g2

0x84fb,	// (0x00037462) postcard_pane_ParamLimits

0x84fb,	// (0x00037462) postcard_pane

0x0938,	// (0x0002f89f) postcard_pane_g1_ParamLimits

0x0938,	// (0x0002f89f) postcard_pane_g1

0x852d,	// (0x00037494) postcard_pane_g2_ParamLimits

0x852d,	// (0x00037494) postcard_pane_g2

0x8539,	// (0x000374a0) postcard_pane_g3_ParamLimits

0x8539,	// (0x000374a0) postcard_pane_g3

0xeb99,	// (0x0003db00) postcard_pane_g4_ParamLimits

0xeb99,	// (0x0003db00) postcard_pane_g4

0x8545,	// (0x000374ac) postcard_pane_g5_ParamLimits

0x8545,	// (0x000374ac) postcard_pane_g5

0x8551,	// (0x000374b8) postcard_pane_g6_ParamLimits

0x8551,	// (0x000374b8) postcard_pane_g6

0xeba7,	// (0x0003db0e) postcard_pane_g7_ParamLimits

0xeba7,	// (0x0003db0e) postcard_pane_g7

0x0006,

0xf454,	// (0x0003e3bb) postcard_pane_g_ParamLimits

0xf454,	// (0x0003e3bb) postcard_pane_g

0x855d,	// (0x000374c4) main_mp2_pane_g1_ParamLimits

0x855d,	// (0x000374c4) main_mp2_pane_g1

0x8569,	// (0x000374d0) main_mp2_pane_g2_ParamLimits

0x8569,	// (0x000374d0) main_mp2_pane_g2

0x8575,	// (0x000374dc) main_mp2_pane_g3_ParamLimits

0x8575,	// (0x000374dc) main_mp2_pane_g3

0x0002,

0xf463,	// (0x0003e3ca) main_mp2_pane_g_ParamLimits

0xf463,	// (0x0003e3ca) main_mp2_pane_g

0x8581,	// (0x000374e8) main_mp2_pane_t1_ParamLimits

0x8581,	// (0x000374e8) main_mp2_pane_t1

0x8598,	// (0x000374ff) main_mp2_pane_t2_ParamLimits

0x8598,	// (0x000374ff) main_mp2_pane_t2

0x85aa,	// (0x00037511) main_mp2_pane_t3_ParamLimits

0x85aa,	// (0x00037511) main_mp2_pane_t3

0x0002,

0xf46a,	// (0x0003e3d1) main_mp2_pane_t_ParamLimits

0xf46a,	// (0x0003e3d1) main_mp2_pane_t

0xebb5,	// (0x0003db1c) pec_content_pane_ParamLimits

0xebb5,	// (0x0003db1c) pec_content_pane

0xe18f,	// (0x0003d0f6) scroll_pane_cp015

0xebc7,	// (0x0003db2e) pec_attribute_pane_ParamLimits

0xebc7,	// (0x0003db2e) pec_attribute_pane

0x85bc,	// (0x00037523) pec_content_pane_g1_ParamLimits

0x85bc,	// (0x00037523) pec_content_pane_g1

0xebd7,	// (0x0003db3e) pec_content_pane_t1_ParamLimits

0xebd7,	// (0x0003db3e) pec_content_pane_t1

0xebe9,	// (0x0003db50) pec_content_pane_t2_ParamLimits

0xebe9,	// (0x0003db50) pec_content_pane_t2

0x0001,

0xf471,	// (0x0003e3d8) pec_content_pane_t_ParamLimits

0xf471,	// (0x0003e3d8) pec_content_pane_t

0x85c8,	// (0x0003752f) list_single_graphic_pane_cp01_ParamLimits

0x85c8,	// (0x0003752f) list_single_graphic_pane_cp01

0xdd45,	// (0x0003ccac) bg_popup_sub_pane_cp04

0xebfb,	// (0x0003db62) popup_mup_playback_window_g1

0xec07,	// (0x0003db6e) popup_mup_playback_window_t1

0xec1c,	// (0x0003db83) popup_mup_playback_window_t2

0x0001,

0xf476,	// (0x0003e3dd) popup_mup_playback_window_t

0xec53,	// (0x0003dbba) main_image_pane_g1_ParamLimits

0xec53,	// (0x0003dbba) main_image_pane_g1

0xec96,	// (0x0003dbfd) scroll_pane_cp018_ParamLimits

0xec96,	// (0x0003dbfd) scroll_pane_cp018

0xecae,	// (0x0003dc15) scroll_pane_cp016_ParamLimits

0xecae,	// (0x0003dc15) scroll_pane_cp016

0x8662,	// (0x000375c9) smil2_image_pane_ParamLimits

0x8662,	// (0x000375c9) smil2_image_pane

0x8692,	// (0x000375f9) smil2_root_pane_ParamLimits

0x8692,	// (0x000375f9) smil2_root_pane

0x86be,	// (0x00037625) smil2_text_pane_ParamLimits

0x86be,	// (0x00037625) smil2_text_pane

0xdaea,	// (0x0003ca51) bg_list_pane_cp06

0xecea,	// (0x0003dc51) grid_radio_pane

0xdaea,	// (0x0003ca51) bg_popup_window_pane_cp06

0xecf2,	// (0x0003dc59) main_fmradio_pane_t1

0x11e5,	// (0x0003014c) heading_pane_cp04

0xed00,	// (0x0003dc67) main_fmradio_pane_t2

0x11ed,	// (0x00030154) popup_cale_lunar_info_window_g1

0xed0e,	// (0x0003dc75) main_fmradio_pane_t3

0x11f5,	// (0x0003015c) popup_cale_lunar_info_window_g2

0xed1c,	// (0x0003dc83) main_fmradio_pane_t4

0x0001,

0xed2a,	// (0x0003dc91) main_fmradio_pane_t5

0x0004,

0xf569,	// (0x0003e4d0) popup_cale_lunar_info_window_g

0xf48b,	// (0x0003e3f2) main_fmradio_pane_t

0xed38,	// (0x0003dc9f) wait_bar_pane_cp03

0xed40,	// (0x0003dca7) cell_fmradio_pane_ParamLimits

0xed40,	// (0x0003dca7) cell_fmradio_pane

0xeba7,	// (0x0003db0e) cell_fmradio_pane_g1_ParamLimits

0xeba7,	// (0x0003db0e) cell_fmradio_pane_g1

0xdaea,	// (0x0003ca51) grid_highlight_pane_cp011

0xed53,	// (0x0003dcba) poc_content_pane_ParamLimits

0xed53,	// (0x0003dcba) poc_content_pane

0xed65,	// (0x0003dccc) scroll_pane_cp019

0x86fe,	// (0x00037665) popup_call_poc_act_window_ParamLimits

0x86fe,	// (0x00037665) popup_call_poc_act_window

0x870b,	// (0x00037672) popup_call_poc_inact_window_ParamLimits

0x870b,	// (0x00037672) popup_call_poc_inact_window

0xf52d,	// (0x0003e494) bg_popup_call_poc_act_pane_g

0x11a5,	// (0x0003010c) bg_popup_call_poc_inact_pane_g1

0x11ad,	// (0x00030114) bg_popup_call_poc_inact_pane_g2

0xed6d,	// (0x0003dcd4) popup_call_poc_act_window_g2

0x11b5,	// (0x0003011c) bg_popup_call_poc_inact_pane_g3

0x1135,	// (0x0003009c) bg_popup_call_poc_inact_pane_g4

0x11bd,	// (0x00030124) bg_popup_call_poc_inact_pane_g5

0xed75,	// (0x0003dcdc) popup_call_poc_act_window_t1_ParamLimits

0xed75,	// (0x0003dcdc) popup_call_poc_act_window_t1

0xed9d,	// (0x0003dd04) popup_call_poc_act_window_t2_ParamLimits

0xed9d,	// (0x0003dd04) popup_call_poc_act_window_t2

0xedc5,	// (0x0003dd2c) popup_call_poc_act_window_t3_ParamLimits

0xedc5,	// (0x0003dd2c) popup_call_poc_act_window_t3

0xeded,	// (0x0003dd54) popup_call_poc_act_window_t4_ParamLimits

0xeded,	// (0x0003dd54) popup_call_poc_act_window_t4

0x0003,

0xf496,	// (0x0003e3fd) popup_call_poc_act_window_t_ParamLimits

0xf496,	// (0x0003e3fd) popup_call_poc_act_window_t

0x11c5,	// (0x0003012c) bg_popup_call_poc_inact_pane_g6

0x11cd,	// (0x00030134) bg_popup_call_poc_inact_pane_g7

0x11d5,	// (0x0003013c) bg_popup_call_poc_inact_pane_g8

0xedff,	// (0x0003dd66) popup_call_poc_inact_window_g2

0x11dd,	// (0x00030144) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf544,	// (0x0003e4ab) bg_popup_call_poc_inact_pane_g

0xee07,	// (0x0003dd6e) popup_call_poc_inact_window_t1_ParamLimits

0xee07,	// (0x0003dd6e) popup_call_poc_inact_window_t1

0xee1c,	// (0x0003dd83) popup_call_poc_inact_window_t2_ParamLimits

0xee1c,	// (0x0003dd83) popup_call_poc_inact_window_t2

0xee31,	// (0x0003dd98) popup_call_poc_inact_window_t3_ParamLimits

0xee31,	// (0x0003dd98) popup_call_poc_inact_window_t3

0x0002,

0xf49f,	// (0x0003e406) popup_call_poc_inact_window_t_ParamLimits

0xf49f,	// (0x0003e406) popup_call_poc_inact_window_t

0x12dd,	// (0x00030244) context_pane_ParamLimits

0x8d94,	// (0x00037cfb) signal_pane_ParamLimits

0xdfe4,	// (0x0003cf4b) main_call2_pane

0x8d07,	// (0x00037c6e) popup_phob_thumbnail2_window_ParamLimits

0x8d07,	// (0x00037c6e) popup_phob_thumbnail2_window

0x83cd,	// (0x00037334) aid_hotspot_pointer_arrow_pane

0x83d5,	// (0x0003733c) aid_hotspot_pointer_hand_pane

0x8a56,	// (0x000379bd) phob_pre_status_pane_g5

0xd6c9,	// (0x0003c630) cams_zoom_pane_ParamLimits

0xd6c9,	// (0x0003c630) image_vga_pane_ParamLimits

0xddce,	// (0x0003cd35) main_camera_pane_g1_ParamLimits

0xddce,	// (0x0003cd35) main_camera_pane_g2_ParamLimits

0xddce,	// (0x0003cd35) main_camera_pane_g3_ParamLimits

0xddce,	// (0x0003cd35) main_camera_pane_g4_ParamLimits

0xddce,	// (0x0003cd35) main_camera_pane_g5_ParamLimits

0xddce,	// (0x0003cd35) main_camera_pane_g6_ParamLimits

0xddce,	// (0x0003cd35) main_camera_pane_g7_ParamLimits

0xf1c5,	// (0x0003e12c) main_camera_pane_g_ParamLimits

0xdfec,	// (0x0003cf53) main_camera_pane_t1_ParamLimits

0xdfec,	// (0x0003cf53) main_camera_pane_t2_ParamLimits

0xf1d6,	// (0x0003e13d) main_camera_pane_t_ParamLimits

0xdd45,	// (0x0003ccac) bg_popup_preview_window_pane_cp01_ParamLimits

0xdd45,	// (0x0003ccac) bg_popup_preview_window_pane_cp01

0xee46,	// (0x0003ddad) popup_phob_thumbnail2_window_g1_ParamLimits

0xee46,	// (0x0003ddad) popup_phob_thumbnail2_window_g1

0xdaea,	// (0x0003ca51) call2_cli_visual_pane

0x8727,	// (0x0003768e) popup_call2_audio_conf_window_ParamLimits

0x8727,	// (0x0003768e) popup_call2_audio_conf_window

0x873c,	// (0x000376a3) popup_call2_audio_first_window_ParamLimits

0x873c,	// (0x000376a3) popup_call2_audio_first_window

0x87da,	// (0x00037741) popup_call2_audio_in_window_ParamLimits

0x87da,	// (0x00037741) popup_call2_audio_in_window

0x881c,	// (0x00037783) popup_call2_audio_out_window_ParamLimits

0x881c,	// (0x00037783) popup_call2_audio_out_window

0x887e,	// (0x000377e5) popup_call2_audio_second_window_ParamLimits

0x887e,	// (0x000377e5) popup_call2_audio_second_window

0x88dc,	// (0x00037843) popup_call2_audio_wait_window_ParamLimits

0x88dc,	// (0x00037843) popup_call2_audio_wait_window

0xdaea,	// (0x0003ca51) bg_popup_call2_act_pane_cp03

0xdd27,	// (0x0003cc8e) list_conf_pane_cp

0xee52,	// (0x0003ddb9) popup_call2_audio_conf_window_t1

0xee60,	// (0x0003ddc7) list_single_graphic_popup_conf2_pane_ParamLimits

0xee60,	// (0x0003ddc7) list_single_graphic_popup_conf2_pane

0xe740,	// (0x0003d6a7) list_highlight_pane_cp04

0xee73,	// (0x0003ddda) list_single_graphic_popup_conf2_pane_g1

0xe751,	// (0x0003d6b8) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf4a6,	// (0x0003e40d) list_single_graphic_popup_conf2_pane_g

0xee7d,	// (0x0003dde4) list_single_graphic_popup_conf2_pane_t1

0xee8b,	// (0x0003ddf2) bg_popup_call2_act_pane_cp01_ParamLimits

0xee8b,	// (0x0003ddf2) bg_popup_call2_act_pane_cp01

0xef15,	// (0x0003de7c) call_type_pane_cp05_ParamLimits

0xef15,	// (0x0003de7c) call_type_pane_cp05

0xef69,	// (0x0003ded0) popup_call2_audio_second_window_g1_ParamLimits

0xef69,	// (0x0003ded0) popup_call2_audio_second_window_g1

0xefbd,	// (0x0003df24) popup_call2_audio_second_window_g2_ParamLimits

0xefbd,	// (0x0003df24) popup_call2_audio_second_window_g2

0x0002,

0xf4ab,	// (0x0003e412) popup_call2_audio_second_window_g_ParamLimits

0xf4ab,	// (0x0003e412) popup_call2_audio_second_window_g

0x053f,	// (0x0002f4a6) popup_call2_audio_second_window_t1_ParamLimits

0x053f,	// (0x0002f4a6) popup_call2_audio_second_window_t1

0x05fa,	// (0x0002f561) popup_call2_audio_second_window_t2_ParamLimits

0x05fa,	// (0x0002f561) popup_call2_audio_second_window_t2

0x064d,	// (0x0002f5b4) popup_call2_audio_second_window_t3_ParamLimits

0x064d,	// (0x0002f5b4) popup_call2_audio_second_window_t3

0x0003,

0xf4b2,	// (0x0003e419) popup_call2_audio_second_window_t_ParamLimits

0xf4b2,	// (0x0003e419) popup_call2_audio_second_window_t

0xdaea,	// (0x0003ca51) bg_popup_call2_in_pane_cp02

0xdaf4,	// (0x0003ca5b) call_type_pane_cp04

0x891b,	// (0x00037882) popup_call2_audio_wait_window_g1

0x8923,	// (0x0003788a) popup_call2_audio_wait_window_g2

0x0001,

0xf4bb,	// (0x0003e422) popup_call2_audio_wait_window_g

0xdb0c,	// (0x0003ca73) popup_call2_audio_wait_window_t3

0x0740,	// (0x0002f6a7) bg_popup_call2_act_pane_ParamLimits

0x0740,	// (0x0002f6a7) bg_popup_call2_act_pane

0x0800,	// (0x0002f767) call_type_pane_cp03_ParamLimits

0x0800,	// (0x0002f767) call_type_pane_cp03

0x0864,	// (0x0002f7cb) popup_call2_audio_first_window_g1_ParamLimits

0x0864,	// (0x0002f7cb) popup_call2_audio_first_window_g1

0x08d4,	// (0x0002f83b) popup_call2_audio_first_window_g2_ParamLimits

0x08d4,	// (0x0002f83b) popup_call2_audio_first_window_g2

0x0938,	// (0x0002f89f) popup_call2_audio_first_window_g3_ParamLimits

0x0938,	// (0x0002f89f) popup_call2_audio_first_window_g3

0x0004,

0xf4c0,	// (0x0003e427) popup_call2_audio_first_window_g_ParamLimits

0xf4c0,	// (0x0003e427) popup_call2_audio_first_window_g

0x09c0,	// (0x0002f927) popup_call2_audio_first_window_t1_ParamLimits

0x09c0,	// (0x0002f927) popup_call2_audio_first_window_t1

0x0ac3,	// (0x0002fa2a) popup_call2_audio_first_window_t4_ParamLimits

0x0ac3,	// (0x0002fa2a) popup_call2_audio_first_window_t4

0x0ba6,	// (0x0002fb0d) popup_call2_audio_first_window_t5_ParamLimits

0x0ba6,	// (0x0002fb0d) popup_call2_audio_first_window_t5

0x0003,

0xf4cb,	// (0x0003e432) popup_call2_audio_first_window_t_ParamLimits

0xf4cb,	// (0x0003e432) popup_call2_audio_first_window_t

0xdd3d,	// (0x0003cca4) bg_popup_call2_act_pane_g1

0x11fd,	// (0x00030164) popup_cale_lunar_info_window_t1

0x120b,	// (0x00030172) popup_cale_lunar_info_window_t2

0x1219,	// (0x00030180) popup_cale_lunar_info_window_t3

0xdaea,	// (0x0003ca51) bg_popup_call2_bubble_pane

0x0ca7,	// (0x0002fc0e) bg_popup_call2_in_pane_cp01_ParamLimits

0x0ca7,	// (0x0002fc0e) bg_popup_call2_in_pane_cp01

0xd7c6,	// (0x0003c72d) call_type_pane_cp02

0x892b,	// (0x00037892) popup_call2_audio_out_window_g1_ParamLimits

0x892b,	// (0x00037892) popup_call2_audio_out_window_g1

0x0cef,	// (0x0002fc56) popup_call2_audio_out_window_g2_ParamLimits

0x0cef,	// (0x0002fc56) popup_call2_audio_out_window_g2

0x8957,	// (0x000378be) popup_call2_audio_out_window_g3_ParamLimits

0x8957,	// (0x000378be) popup_call2_audio_out_window_g3

0x0003,

0xf4d4,	// (0x0003e43b) popup_call2_audio_out_window_g_ParamLimits

0xf4d4,	// (0x0003e43b) popup_call2_audio_out_window_g

0x0d26,	// (0x0002fc8d) popup_call2_audio_out_window_t1_ParamLimits

0x0d26,	// (0x0002fc8d) popup_call2_audio_out_window_t1

0x0d85,	// (0x0002fcec) popup_call2_audio_out_window_t2_ParamLimits

0x0d85,	// (0x0002fcec) popup_call2_audio_out_window_t2

0x0dd9,	// (0x0002fd40) popup_call2_audio_out_window_t3_ParamLimits

0x0dd9,	// (0x0002fd40) popup_call2_audio_out_window_t3

0x0def,	// (0x0002fd56) popup_call2_audio_out_window_t4_ParamLimits

0x0def,	// (0x0002fd56) popup_call2_audio_out_window_t4

0x0e05,	// (0x0002fd6c) popup_call2_audio_out_window_t5_ParamLimits

0x0e05,	// (0x0002fd6c) popup_call2_audio_out_window_t5

0x0005,

0xf4dd,	// (0x0003e444) popup_call2_audio_out_window_t_ParamLimits

0xf4dd,	// (0x0003e444) popup_call2_audio_out_window_t

0x0e69,	// (0x0002fdd0) bg_popup_call2_in_pane_ParamLimits

0x0e69,	// (0x0002fdd0) bg_popup_call2_in_pane

0x0ec5,	// (0x0002fe2c) popup_call2_audio_in_window_g1_ParamLimits

0x0ec5,	// (0x0002fe2c) popup_call2_audio_in_window_g1

0x0efd,	// (0x0002fe64) popup_call2_audio_in_window_g2_ParamLimits

0x0efd,	// (0x0002fe64) popup_call2_audio_in_window_g2

0x0f35,	// (0x0002fe9c) popup_call2_audio_in_window_g3_ParamLimits

0x0f35,	// (0x0002fe9c) popup_call2_audio_in_window_g3

0x0003,

0xf4ea,	// (0x0003e451) popup_call2_audio_in_window_g_ParamLimits

0xf4ea,	// (0x0003e451) popup_call2_audio_in_window_g

0x0f8d,	// (0x0002fef4) popup_call2_audio_in_window_t1_ParamLimits

0x0f8d,	// (0x0002fef4) popup_call2_audio_in_window_t1

0x100d,	// (0x0002ff74) popup_call2_audio_in_window_t2_ParamLimits

0x100d,	// (0x0002ff74) popup_call2_audio_in_window_t2

0x108d,	// (0x0002fff4) popup_call2_audio_in_window_t3_ParamLimits

0x108d,	// (0x0002fff4) popup_call2_audio_in_window_t3

0x10a7,	// (0x0003000e) popup_call2_audio_in_window_t4_ParamLimits

0x10a7,	// (0x0003000e) popup_call2_audio_in_window_t4

0x10b9,	// (0x00030020) popup_call2_audio_in_window_t5_ParamLimits

0x10b9,	// (0x00030020) popup_call2_audio_in_window_t5

0x10cb,	// (0x00030032) popup_call2_audio_in_window_t6_ParamLimits

0x10cb,	// (0x00030032) popup_call2_audio_in_window_t6

0x0005,

0xf4f3,	// (0x0003e45a) popup_call2_audio_in_window_t_ParamLimits

0xf4f3,	// (0x0003e45a) popup_call2_audio_in_window_t

0xdd3d,	// (0x0003cca4) bg_popup_call2_in_pane_g1

0x1227,	// (0x0003018e) popup_cale_lunar_info_window_t4

0x0003,

0xf56e,	// (0x0003e4d5) popup_cale_lunar_info_window_t

0xdd45,	// (0x0003ccac) bg_popup_call2_rect_pane_ParamLimits

0xdd45,	// (0x0003ccac) bg_popup_call2_rect_pane

0xdaea,	// (0x0003ca51) call2_cli_visual_graphic_pane

0xdaea,	// (0x0003ca51) call2_cli_visual_text_pane

0x8dd0,	// (0x00037d37) smil_status_volume_pane_g3

0x0002,

0xdd5d,	// (0x0003ccc4) call2_cli_visual_graphic_pane_g1

0xdd5d,	// (0x0003ccc4) call2_cli_visual_graphic_pane_g2

0xdd5d,	// (0x0003ccc4) call2_cli_visual_graphic_pane_g3

0x0002,

0xf500,	// (0x0003e467) call2_cli_visual_graphic_pane_g

0x10dd,	// (0x00030044) bg_popup_call2_rect_pane_g1

0xdf09,	// (0x0003ce70) bg_popup_call2_rect_pane_g2

0x10e5,	// (0x0003004c) bg_popup_call2_rect_pane_g3

0x10ed,	// (0x00030054) bg_popup_call2_rect_pane_g4

0x10f5,	// (0x0003005c) bg_popup_call2_rect_pane_g5

0x10fd,	// (0x00030064) bg_popup_call2_rect_pane_g6

0x1105,	// (0x0003006c) bg_popup_call2_rect_pane_g7

0x110d,	// (0x00030074) bg_popup_call2_rect_pane_g8

0x1115,	// (0x0003007c) bg_popup_call2_rect_pane_g9

0x0008,

0xf507,	// (0x0003e46e) bg_popup_call2_rect_pane_g

0x111d,	// (0x00030084) bg_popup_call2_bubble_pane_g1

0x1125,	// (0x0003008c) bg_popup_call2_bubble_pane_g2

0x112d,	// (0x00030094) bg_popup_call2_bubble_pane_g3

0x1135,	// (0x0003009c) bg_popup_call2_bubble_pane_g4

0x113d,	// (0x000300a4) bg_popup_call2_bubble_pane_g5

0x1145,	// (0x000300ac) bg_popup_call2_bubble_pane_g6

0x114d,	// (0x000300b4) bg_popup_call2_bubble_pane_g7

0x1155,	// (0x000300bc) bg_popup_call2_bubble_pane_g8

0x115d,	// (0x000300c4) bg_popup_call2_bubble_pane_g9

0x0008,

0xf51a,	// (0x0003e481) bg_popup_call2_bubble_pane_g

0x6544,	// (0x000354ab) aid_cale_week_size_cell_pane

0xdd45,	// (0x0003ccac) aid_cams_cif_uncrop_pane_ParamLimits

0xdd45,	// (0x0003ccac) aid_cams_cif_uncrop_pane

0x6b3d,	// (0x00035aa4) aid_cams_size_cell_ParamLimits

0x6b3d,	// (0x00035aa4) aid_cams_size_cell

0x6b49,	// (0x00035ab0) grid_cams_pane_ParamLimits

0x6b57,	// (0x00035abe) linegrid_cams_pane_ParamLimits

0x6c2e,	// (0x00035b95) call_video_pane_t1

0x6c4f,	// (0x00035bb6) call_video_pane_t2

0x0001,

0xf222,	// (0x0003e189) call_video_pane_t

0x719d,	// (0x00036104) aid_cale_month_size_cell_pane_ParamLimits

0x719d,	// (0x00036104) aid_cale_month_size_cell_pane

0xf5b2,	// (0x0003e519) smil_status_volume_pane_g

0x8ddd,	// (0x00037d44) volume_smil_pane_ParamLimits

0x5dfc,	// (0x00034d63) aid_popup2_width_pane

0x643b,	// (0x000353a2) cell_qdial_pane_g4_ParamLimits

0x643b,	// (0x000353a2) cell_qdial_pane_g4

0x80ae,	// (0x00037015) aid_blid_cardinal_pane_ParamLimits

0x80be,	// (0x00037025) aid_blid_destination_pane_ParamLimits

0x80be,	// (0x00037025) aid_blid_destination_pane

0xdd45,	// (0x0003ccac) bg_popup_call_poc_act_pane_ParamLimits

0xdd45,	// (0x0003ccac) bg_popup_call_poc_act_pane

0xdd45,	// (0x0003ccac) bg_popup_call_poc_inact_pane_ParamLimits

0xdd45,	// (0x0003ccac) bg_popup_call_poc_inact_pane

0x1165,	// (0x000300cc) bg_popup_call_poc_act_pane_g1

0x116d,	// (0x000300d4) bg_popup_call_poc_act_pane_g2

0x1175,	// (0x000300dc) bg_popup_call_poc_act_pane_g3

0x1135,	// (0x0003009c) bg_popup_call_poc_act_pane_g4

0x113d,	// (0x000300a4) bg_popup_call_poc_act_pane_g5

0x117d,	// (0x000300e4) bg_popup_call_poc_act_pane_g6

0x114d,	// (0x000300b4) bg_popup_call_poc_act_pane_g7

0x1185,	// (0x000300ec) bg_popup_call_poc_act_pane_g8

0xdaea,	// (0x0003ca51) main_usb_pane

0x8c3a,	// (0x00037ba1) popup_cale_lunar_info_window

0x6f6c,	// (0x00035ed3) im_reading_pane_t1_ParamLimits

0xe0e7,	// (0x0003d04e) list_im_pane_ParamLimits

0xe0f8,	// (0x0003d05f) scroll_pane_cp07_ParamLimits

0xdaea,	// (0x0003ca51) grid_highlight_pane_cp012

0xdd45,	// (0x0003ccac) mup_scale_pane_ParamLimits

0x0938,	// (0x0002f89f) main_usb_pane_g1_ParamLimits

0x0938,	// (0x0002f89f) main_usb_pane_g1

0x89be,	// (0x00037925) main_usb_pane_g2_ParamLimits

0x89be,	// (0x00037925) main_usb_pane_g2

0x0001,

0xf557,	// (0x0003e4be) main_usb_pane_g_ParamLimits

0xf557,	// (0x0003e4be) main_usb_pane_g

0x89ca,	// (0x00037931) main_usb_pane_t1_ParamLimits

0x89ca,	// (0x00037931) main_usb_pane_t1

0x89dc,	// (0x00037943) main_usb_pane_t2_ParamLimits

0x89dc,	// (0x00037943) main_usb_pane_t2

0x89ee,	// (0x00037955) main_usb_pane_t3_ParamLimits

0x89ee,	// (0x00037955) main_usb_pane_t3

0x8a00,	// (0x00037967) main_usb_pane_t4_ParamLimits

0x8a00,	// (0x00037967) main_usb_pane_t4

0x8a12,	// (0x00037979) main_usb_pane_t5_ParamLimits

0x8a12,	// (0x00037979) main_usb_pane_t5

0x8a24,	// (0x0003798b) main_usb_pane_t6_ParamLimits

0x8a24,	// (0x0003798b) main_usb_pane_t6

0x0005,

0xf55c,	// (0x0003e4c3) main_usb_pane_t_ParamLimits

0x8054,	// (0x00036fbb) aid_text_placing

0x8060,	// (0x00036fc7) main_location2_pane_t1_ParamLimits

0x8074,	// (0x00036fdb) main_location2_pane_t2_ParamLimits

0x8088,	// (0x00036fef) main_location2_pane_t3_ParamLimits

0x809c,	// (0x00037003) main_location2_pane_t4_ParamLimits

0x809c,	// (0x00037003) main_location2_pane_t4

0xf363,	// (0x0003e2ca) main_location2_pane_t_ParamLimits

0xdd81,	// (0x0003cce8) find_pinb_pane_g2_ParamLimits

0xdd81,	// (0x0003cce8) find_pinb_pane_g2

0x0001,

0xf0da,	// (0x0003e041) find_pinb_pane_g_ParamLimits

0xf0da,	// (0x0003e041) find_pinb_pane_g

0xdd8d,	// (0x0003ccf4) find_pinb_pane_t1_ParamLimits

0xdd9f,	// (0x0003cd06) find_pinb_pane_t2_ParamLimits

0xf0df,	// (0x0003e046) find_pinb_pane_t_ParamLimits

0xdaea,	// (0x0003ca51) main_call3_pane

0x7760,	// (0x000366c7) cale_month_day_heading_pane_t1_ParamLimits

0x77e6,	// (0x0003674d) cale_month_day_heading_pane_t2_ParamLimits

0x785f,	// (0x000367c6) cale_month_day_heading_pane_t3_ParamLimits

0x78d8,	// (0x0003683f) cale_month_day_heading_pane_t4_ParamLimits

0x7951,	// (0x000368b8) cale_month_day_heading_pane_t5_ParamLimits

0x79ca,	// (0x00036931) cale_month_day_heading_pane_t6_ParamLimits

0x7a43,	// (0x000369aa) cale_month_day_heading_pane_t7_ParamLimits

0xf25a,	// (0x0003e1c1) cale_month_day_heading_pane_t_ParamLimits

0xe342,	// (0x0003d2a9) smil_status_volume_pane

0x8515,	// (0x0003747c) postcard_address_pane_ParamLimits

0x8515,	// (0x0003747c) postcard_address_pane

0x8521,	// (0x00037488) postcard_message_pane_ParamLimits

0x8521,	// (0x00037488) postcard_message_pane

0x8983,	// (0x000378ea) call2_cli_visual_pane_t1_ParamLimits

0x8983,	// (0x000378ea) call2_cli_visual_pane_t1

0x13b2,	// (0x00030319) postcard_message_pane_t1_ParamLimits

0x13b2,	// (0x00030319) postcard_message_pane_t1

0x139a,	// (0x00030301) postcard_address_pane_t1_ParamLimits

0x139a,	// (0x00030301) postcard_address_pane_t1

0x8f0e,	// (0x00037e75) popup_call3_audio_in_window_ParamLimits

0x8f0e,	// (0x00037e75) popup_call3_audio_in_window

0x8df2,	// (0x00037d59) bg_popup_call3_in_pane_ParamLimits

0x8df2,	// (0x00037d59) bg_popup_call3_in_pane

0x8e54,	// (0x00037dbb) popup_call3_audio_in_window_g1_ParamLimits

0x8e54,	// (0x00037dbb) popup_call3_audio_in_window_g1

0x8e6c,	// (0x00037dd3) popup_call3_audio_in_window_g2_ParamLimits

0x8e6c,	// (0x00037dd3) popup_call3_audio_in_window_g2

0x8e84,	// (0x00037deb) popup_call3_audio_in_window_g3_ParamLimits

0x8e84,	// (0x00037deb) popup_call3_audio_in_window_g3

0x0003,

0xf5b9,	// (0x0003e520) popup_call3_audio_in_window_g_ParamLimits

0xf5b9,	// (0x0003e520) popup_call3_audio_in_window_g

0x8eac,	// (0x00037e13) popup_call3_audio_in_window_t1_ParamLimits

0x8eac,	// (0x00037e13) popup_call3_audio_in_window_t1

0x8ed4,	// (0x00037e3b) popup_call3_audio_in_window_t2_ParamLimits

0x8ed4,	// (0x00037e3b) popup_call3_audio_in_window_t2

0x8efc,	// (0x00037e63) popup_call3_audio_in_window_t3_ParamLimits

0x8efc,	// (0x00037e63) popup_call3_audio_in_window_t3

0x0002,

0xf5c2,	// (0x0003e529) popup_call3_audio_in_window_t_ParamLimits

0xf5c2,	// (0x0003e529) popup_call3_audio_in_window_t

0xdfe4,	// (0x0003cf4b) bg_popup_call3_rect_pane

0x10dd,	// (0x00030044) bg_popup_call3_rect_pane_g1

0xdf09,	// (0x0003ce70) bg_popup_call3_rect_pane_g2

0x10e5,	// (0x0003004c) bg_popup_call3_rect_pane_g3

0x10ed,	// (0x00030054) bg_popup_call3_rect_pane_g4

0x10f5,	// (0x0003005c) bg_popup_call3_rect_pane_g5

0x10fd,	// (0x00030064) bg_popup_call3_rect_pane_g6

0x1105,	// (0x0003006c) bg_popup_call3_rect_pane_g7

0xd6bf,	// (0x0003c626) mup_visualizer_osc_pane

0xd6bf,	// (0x0003c626) mup_visualizer_spec_pane

0x8e12,	// (0x00037d79) call3_video_qcif_pane_ParamLimits

0x8e12,	// (0x00037d79) call3_video_qcif_pane

0x8e24,	// (0x00037d8b) call3_video_qcif_uncrop_pane_ParamLimits

0x8e24,	// (0x00037d8b) call3_video_qcif_uncrop_pane

0x8e32,	// (0x00037d99) call3_video_subqcif_pane_ParamLimits

0x8e32,	// (0x00037d99) call3_video_subqcif_pane

0x8e44,	// (0x00037dab) call3_video_subqcif_uncrop_pane_ParamLimits

0x8e44,	// (0x00037dab) call3_video_subqcif_uncrop_pane

0x8e9c,	// (0x00037e03) popup_call3_audio_in_window_g4_ParamLimits

0x8e9c,	// (0x00037e03) popup_call3_audio_in_window_g4

0xd6bf,	// (0x0003c626) mup_spec_half_pane

0xd6bf,	// (0x0003c626) mup_spec_half_pane_cp

0xd6bf,	// (0x0003c626) mup_osc_middle_pane

0xe01a,	// (0x0003cf81) mup_visualizer_osc_pane_g1

0x132b,	// (0x00030292) mup_spec_bar_pane_ParamLimits

0x132b,	// (0x00030292) mup_spec_bar_pane

0xe01a,	// (0x0003cf81) mup_spec_bar_pane_g1

0xe01a,	// (0x0003cf81) mup_spec_bar_pane_g2

0x0001,

0xf3dd,	// (0x0003e344) mup_spec_bar_pane_g

0x6544,	// (0x000354ab) aid_cale_week_size_cell_pane_ParamLimits

0x6559,	// (0x000354c0) bg_cale_heading_pane_ParamLimits

0xdf46,	// (0x0003cead) bg_cale_pane_cp01_ParamLimits

0x657b,	// (0x000354e2) cale_week_corner_pane_ParamLimits

0x6595,	// (0x000354fc) cale_week_day_heading_pane_ParamLimits

0x65b7,	// (0x0003551e) cale_week_scroll_pane_g1_ParamLimits

0x65d4,	// (0x0003553b) cale_week_scroll_pane_g2_ParamLimits

0x65e7,	// (0x0003554e) cale_week_scroll_pane_g3_ParamLimits

0x65fa,	// (0x00035561) cale_week_scroll_pane_g4_ParamLimits

0x660d,	// (0x00035574) cale_week_scroll_pane_g5_ParamLimits

0x6620,	// (0x00035587) cale_week_scroll_pane_g6_ParamLimits

0x6633,	// (0x0003559a) cale_week_scroll_pane_g7_ParamLimits

0x6648,	// (0x000355af) cale_week_scroll_pane_g8_ParamLimits

0x665d,	// (0x000355c4) cale_week_scroll_pane_g9_ParamLimits

0x6670,	// (0x000355d7) cale_week_scroll_pane_g10_ParamLimits

0x6683,	// (0x000355ea) cale_week_scroll_pane_g11_ParamLimits

0x6696,	// (0x000355fd) cale_week_scroll_pane_g12_ParamLimits

0x66ad,	// (0x00035614) cale_week_scroll_pane_g13_ParamLimits

0x66c8,	// (0x0003562f) cale_week_scroll_pane_g14_ParamLimits

0x66e3,	// (0x0003564a) cale_week_scroll_pane_g15_ParamLimits

0xf16b,	// (0x0003e0d2) cale_week_scroll_pane_g_ParamLimits

0x6713,	// (0x0003567a) cale_week_time_pane_ParamLimits

0x6728,	// (0x0003568f) grid_cale_week_pane_ParamLimits

0xdf63,	// (0x0003ceca) listscroll_cale_week_pane_t1

0xdf75,	// (0x0003cedc) scroll_pane_cp08_ParamLimits

0x7211,	// (0x00036178) cale_month_corner_pane_ParamLimits

0xe318,	// (0x0003d27f) cale_month_pane_t1

0x76df,	// (0x00036646) cale_month_week_pane_ParamLimits

0x0938,	// (0x0002f89f) popup_call_status_window_g1_ParamLimits

0x7e81,	// (0x00036de8) popup_call_status_window_g2_ParamLimits

0x7e8d,	// (0x00036df4) popup_call_status_window_g3_ParamLimits

0xf2ea,	// (0x0003e251) popup_call_status_window_g_ParamLimits

0xe6cc,	// (0x0003d633) aid_call2_pane

0x514c,	// (0x000340b3) msg_header_pane_g1

0x8515,	// (0x0003747c) postcard_address2_pane_ParamLimits

0x8515,	// (0x0003747c) postcard_address2_pane

0x8521,	// (0x00037488) postcard_message2_pane_ParamLimits

0x8521,	// (0x00037488) postcard_message2_pane

0x8da2,	// (0x00037d09) message2_row_pane_ParamLimits

0x8da2,	// (0x00037d09) message2_row_pane

0x8dbd,	// (0x00037d24) address2_row_pane_ParamLimits

0x8dbd,	// (0x00037d24) address2_row_pane

0x12f8,	// (0x0003025f) postcard_message2_row_pane_g1

0x1300,	// (0x00030267) postcard_message2_row_pane_t1

0x12f8,	// (0x0003025f) address2_row_pane_g1

0x1300,	// (0x00030267) address2_row_pane_t1

0x69ad,	// (0x00035914) aid_size_cell_vorec

0xdaea,	// (0x0003ca51) main_rss_pane

0x130e,	// (0x00030275) rss_list_single_pane_ParamLimits

0x130e,	// (0x00030275) rss_list_single_pane

0x131c,	// (0x00030283) rss_list_single_pane_t1

0x131c,	// (0x00030283) rss_list_single_pane_t2

0x0001,

0xf5ad,	// (0x0003e514) rss_list_single_pane_t

0xdaea,	// (0x0003ca51) main_camera2_pane

0xdaea,	// (0x0003ca51) main_video2_pane

0xd6c9,	// (0x0003c630) cams_zoom_pane_cp2_ParamLimits

0xd6c9,	// (0x0003c630) cams_zoom_pane_cp2

0xd6c9,	// (0x0003c630) image2_vga_pane_ParamLimits

0xd6c9,	// (0x0003c630) image2_vga_pane

0xddce,	// (0x0003cd35) main_camera2_pane_g1_ParamLimits

0xddce,	// (0x0003cd35) main_camera2_pane_g1

0xddce,	// (0x0003cd35) main_camera2_pane_g2_ParamLimits

0xddce,	// (0x0003cd35) main_camera2_pane_g2

0xddce,	// (0x0003cd35) main_camera2_pane_g3_ParamLimits

0xddce,	// (0x0003cd35) main_camera2_pane_g3

0xddce,	// (0x0003cd35) main_camera2_pane_g4_ParamLimits

0xddce,	// (0x0003cd35) main_camera2_pane_g4

0xddce,	// (0x0003cd35) main_camera2_pane_g5_ParamLimits

0xddce,	// (0x0003cd35) main_camera2_pane_g5

0xddce,	// (0x0003cd35) main_camera2_pane_g6_ParamLimits

0xddce,	// (0x0003cd35) main_camera2_pane_g6

0xddce,	// (0x0003cd35) main_camera2_pane_g7_ParamLimits

0xddce,	// (0x0003cd35) main_camera2_pane_g7

0xddce,	// (0x0003cd35) main_camera2_pane_g8_ParamLimits

0xddce,	// (0x0003cd35) main_camera2_pane_g8

0x0008,

0xf5c9,	// (0x0003e530) main_camera2_pane_g_ParamLimits

0xf5c9,	// (0x0003e530) main_camera2_pane_g

0xdfec,	// (0x0003cf53) main_camera2_pane_t1_ParamLimits

0xdfec,	// (0x0003cf53) main_camera2_pane_t1

0xdfec,	// (0x0003cf53) main_camera2_pane_t2_ParamLimits

0xdfec,	// (0x0003cf53) main_camera2_pane_t2

0xdfec,	// (0x0003cf53) main_camera2_pane_t3_ParamLimits

0xdfec,	// (0x0003cf53) main_camera2_pane_t3

0xdfec,	// (0x0003cf53) main_camera2_pane_t4_ParamLimits

0xdfec,	// (0x0003cf53) main_camera2_pane_t4

0x0006,

0xf5dc,	// (0x0003e543) main_camera2_pane_t_ParamLimits

0xf5dc,	// (0x0003e543) main_camera2_pane_t

0xf011,	// (0x0003df78) cams_zoom_pane_cp4_ParamLimits

0xf011,	// (0x0003df78) cams_zoom_pane_cp4

0xdd67,	// (0x0003ccce) image2_cif_pane_ParamLimits

0xdd67,	// (0x0003ccce) image2_cif_pane

0xd6c9,	// (0x0003c630) image2_subqcif_pane_ParamLimits

0xd6c9,	// (0x0003c630) image2_subqcif_pane

0xf01f,	// (0x0003df86) main_video2_pane_g1_ParamLimits

0xf01f,	// (0x0003df86) main_video2_pane_g1

0xf01f,	// (0x0003df86) main_video2_pane_g2_ParamLimits

0xf01f,	// (0x0003df86) main_video2_pane_g2

0xf01f,	// (0x0003df86) main_video2_pane_g3_ParamLimits

0xf01f,	// (0x0003df86) main_video2_pane_g3

0xf01f,	// (0x0003df86) main_video2_pane_g4_ParamLimits

0xf01f,	// (0x0003df86) main_video2_pane_g4

0xf01f,	// (0x0003df86) main_video2_pane_g5_ParamLimits

0xf01f,	// (0x0003df86) main_video2_pane_g5

0xf01f,	// (0x0003df86) main_video2_pane_g6_ParamLimits

0xf01f,	// (0x0003df86) main_video2_pane_g6

0x0005,

0xf5eb,	// (0x0003e552) main_video2_pane_g_ParamLimits

0xf5eb,	// (0x0003e552) main_video2_pane_g

0xf02d,	// (0x0003df94) main_video2_pane_t1_ParamLimits

0xf02d,	// (0x0003df94) main_video2_pane_t1

0xf02d,	// (0x0003df94) main_video2_pane_t2_ParamLimits

0xf02d,	// (0x0003df94) main_video2_pane_t2

0xf02d,	// (0x0003df94) main_video2_pane_t3_ParamLimits

0xf02d,	// (0x0003df94) main_video2_pane_t3

0x0002,

0xf5f8,	// (0x0003e55f) main_video2_pane_t_ParamLimits

0xf5f8,	// (0x0003e55f) main_video2_pane_t

0x8aba,	// (0x00037a21) call_muted_g2

0x0001,

0xf59f,	// (0x0003e506) call_muted_g

0xdaea,	// (0x0003ca51) main_mup2_pane

0xdddc,	// (0x0003cd43) main_mup2_pane_g1_ParamLimits

0xdddc,	// (0x0003cd43) main_mup2_pane_g1

0xdddc,	// (0x0003cd43) main_mup2_pane_g2_ParamLimits

0xdddc,	// (0x0003cd43) main_mup2_pane_g2

0xe01a,	// (0x0003cf81) main_mup_pane_g13_cp1

0xd6bf,	// (0x0003c626) mup_volume_pane_cp1

0xdddc,	// (0x0003cd43) main_mup2_pane_g4_ParamLimits

0xdddc,	// (0x0003cd43) main_mup2_pane_g4

0xdddc,	// (0x0003cd43) main_mup2_pane_g5_ParamLimits

0xdddc,	// (0x0003cd43) main_mup2_pane_g5

0xdddc,	// (0x0003cd43) main_mup2_pane_g6_ParamLimits

0xdddc,	// (0x0003cd43) main_mup2_pane_g6

0xdddc,	// (0x0003cd43) main_mup2_pane_g7_ParamLimits

0xdddc,	// (0x0003cd43) main_mup2_pane_g7

0x0006,

0xf5ff,	// (0x0003e566) main_mup2_pane_g_ParamLimits

0xf5ff,	// (0x0003e566) main_mup2_pane_g

0xddea,	// (0x0003cd51) main_mup2_pane_t1_ParamLimits

0xddea,	// (0x0003cd51) main_mup2_pane_t1

0xddea,	// (0x0003cd51) main_mup2_pane_t2_ParamLimits

0xddea,	// (0x0003cd51) main_mup2_pane_t2

0xddea,	// (0x0003cd51) main_mup2_pane_t3_ParamLimits

0xddea,	// (0x0003cd51) main_mup2_pane_t3

0xddea,	// (0x0003cd51) main_mup2_pane_t4_ParamLimits

0xddea,	// (0x0003cd51) main_mup2_pane_t4

0xddea,	// (0x0003cd51) main_mup2_pane_t5_ParamLimits

0xddea,	// (0x0003cd51) main_mup2_pane_t5

0xddea,	// (0x0003cd51) main_mup2_pane_t6_ParamLimits

0xddea,	// (0x0003cd51) main_mup2_pane_t6

0x0005,

0xf60e,	// (0x0003e575) main_mup2_pane_t_ParamLimits

0xf60e,	// (0x0003e575) main_mup2_pane_t

0x15a3,	// (0x0003050a) mup2_visualizer_pane_ParamLimits

0x15a3,	// (0x0003050a) mup2_visualizer_pane

0x15a3,	// (0x0003050a) mup_progress_pane_cp_ParamLimits

0x15a3,	// (0x0003050a) mup_progress_pane_cp

0x142e,	// (0x00030395) mup_volume_pane_cp_ParamLimits

0x142e,	// (0x00030395) mup_volume_pane_cp

0xddc0,	// (0x0003cd27) mup2_visualizer_pane_g1_ParamLimits

0xddc0,	// (0x0003cd27) mup2_visualizer_pane_g1

0xddce,	// (0x0003cd35) mup2_visualizer_pane_g2_ParamLimits

0xddce,	// (0x0003cd35) mup2_visualizer_pane_g2

0xddce,	// (0x0003cd35) mup2_visualizer_pane_g3_ParamLimits

0xddce,	// (0x0003cd35) mup2_visualizer_pane_g3

0x0002,

0xf0e4,	// (0x0003e04b) mup2_visualizer_pane_g_ParamLimits

0xf0e4,	// (0x0003e04b) mup2_visualizer_pane_g

0xece2,	// (0x0003dc49) aid_size_cell_fmradio

0x8bd0,	// (0x00037b37) aid_height_parent_landcape

0xe176,	// (0x0003d0dd) wml_content_pane_cp

0xe17e,	// (0x0003d0e5) wml_tabs_pane

0xe187,	// (0x0003d0ee) popup_wml_miniature_window

0xe18f,	// (0x0003d0f6) scroll_pane_cp021

0xe1a3,	// (0x0003d10a) wml_content_pane_comp8

0xdaea,	// (0x0003ca51) bg_popup_sub_pane_cp05

0x1444,	// (0x000303ab) popup_wml_miniature_window_g1

0x144c,	// (0x000303b3) wml_miniature_view_pane

0x8f3f,	// (0x00037ea6) aid_size_wml_view

0x8f47,	// (0x00037eae) wml_miniature_view_pane_g1

0x8f50,	// (0x00037eb7) wml_miniature_view_pane_g2

0x8f59,	// (0x00037ec0) wml_miniature_view_pane_g3

0x8f61,	// (0x00037ec8) wml_miniature_view_pane_g4

0x8f69,	// (0x00037ed0) wml_miniature_view_pane_g5

0x8f71,	// (0x00037ed8) wml_miniature_view_pane_g6

0x8f79,	// (0x00037ee0) wml_miniature_view_pane_g7

0x8f81,	// (0x00037ee8) wml_miniature_view_pane_g8

0x0007,

0xf61b,	// (0x0003e582) wml_miniature_view_pane_g

0x1454,	// (0x000303bb) background_graphic_ParamLimits

0x1454,	// (0x000303bb) background_graphic

0x1460,	// (0x000303c7) wml_tabs_2_pane

0x1469,	// (0x000303d0) wml_tabs_3_pane_ParamLimits

0x1469,	// (0x000303d0) wml_tabs_3_pane

0x147b,	// (0x000303e2) wml_tabs_4_pane_ParamLimits

0x147b,	// (0x000303e2) wml_tabs_4_pane

0x1491,	// (0x000303f8) wml_tabs_5_pane_ParamLimits

0x1491,	// (0x000303f8) wml_tabs_5_pane

0x14ab,	// (0x00030412) wml_tabs_pane_g2_ParamLimits

0x14ab,	// (0x00030412) wml_tabs_pane_g2

0x14c0,	// (0x00030427) wml_tabs_pane_g3_ParamLimits

0x14c0,	// (0x00030427) wml_tabs_pane_g3

0x14d5,	// (0x0003043c) wml_tabs_2_active_pane_ParamLimits

0x14d5,	// (0x0003043c) wml_tabs_2_active_pane

0x14d5,	// (0x0003043c) wml_tabs_2_passive_pane_ParamLimits

0x14d5,	// (0x0003043c) wml_tabs_2_passive_pane

0x8f89,	// (0x00037ef0) wml_tabs_3_active_pane_cp_ParamLimits

0x8f89,	// (0x00037ef0) wml_tabs_3_active_pane_cp

0x8f9a,	// (0x00037f01) wml_tabs_3_passive_pane_ParamLimits

0x8f9a,	// (0x00037f01) wml_tabs_3_passive_pane

0x8fab,	// (0x00037f12) wml_tabs_3_passive_pane_cp_ParamLimits

0x8fab,	// (0x00037f12) wml_tabs_3_passive_pane_cp

0x8fbc,	// (0x00037f23) tabs_4_active_pane

0x8fc4,	// (0x00037f2b) tabs_4_passive_pane

0x8fcc,	// (0x00037f33) tabs_4_passive_pane_cp

0x8fd4,	// (0x00037f3b) tabs_4_passive_pane_cp2

0x89b6,	// (0x0003791d) aid_height_text

0x15a3,	// (0x0003050a) mup_volume_cont_pane_ParamLimits

0x15a3,	// (0x0003050a) mup_volume_cont_pane

0xd6bf,	// (0x0003c626) aid_size_cell_pinb

0xd6bf,	// (0x0003c626) aid_size_list_pinb

0x15a3,	// (0x0003050a) mup2_volume_cont_pane_ParamLimits

0x15a3,	// (0x0003050a) mup2_volume_cont_pane

0x8fdc,	// (0x00037f43) mup2_volume_cont_pane_g1_ParamLimits

0x8fdc,	// (0x00037f43) mup2_volume_cont_pane_g1

0x5e08,	// (0x00034d6f) aid_size_cell_touch_ParamLimits

0x5e08,	// (0x00034d6f) aid_size_cell_touch

0x60b0,	// (0x00035017) touch_pane_ParamLimits

0x60b0,	// (0x00035017) touch_pane

0xd6bf,	// (0x0003c626) main_rss2_pane

0x1522,	// (0x00030489) listscroll_rss2_pane

0x152b,	// (0x00030492) rss2_navigation_pane

0x1533,	// (0x0003049a) list_rss2_pane

0xe7e5,	// (0x0003d74c) scroll_pane_cp22

0x153b,	// (0x000304a2) rss2_navigation_pane_g1

0x1544,	// (0x000304ab) rss2_navigation_pane_g2

0x154c,	// (0x000304b3) rss2_navigation_pane_g3

0x0002,

0xf62c,	// (0x0003e593) rss2_navigation_pane_g

0x1554,	// (0x000304bb) rss2_navigation_pane_t1

0x8ff2,	// (0x00037f59) rss2_list_single_pane_ParamLimits

0x8ff2,	// (0x00037f59) rss2_list_single_pane

0x1562,	// (0x000304c9) rss2_list_single_pane_t2

0x1570,	// (0x000304d7) rss2_list_single_pane_t3_ParamLimits

0x1570,	// (0x000304d7) rss2_list_single_pane_t3

0x158d,	// (0x000304f4) rss2_list_single_pane_t4

0x7ce5,	// (0x00036c4c) smil_status_pane_g1

0xdd67,	// (0x0003ccce) main_image2_pane_ParamLimits

0xdd67,	// (0x0003ccce) main_image2_pane

0xddce,	// (0x0003cd35) main_camera2_pane_g9_ParamLimits

0xddce,	// (0x0003cd35) main_camera2_pane_g9

0xdfec,	// (0x0003cf53) main_camera2_pane_t5_ParamLimits

0xdfec,	// (0x0003cf53) main_camera2_pane_t5

0x8f2b,	// (0x00037e92) main_camera2_pane_t6_ParamLimits

0x8f2b,	// (0x00037e92) main_camera2_pane_t6

0x9026,	// (0x00037f8d) main_image2_pane_g1_ParamLimits

0x9026,	// (0x00037f8d) main_image2_pane_g1

0x86e8,	// (0x0003764f) smil2_video_pane_ParamLimits

0x86e8,	// (0x0003764f) smil2_video_pane

0x50a5,	// (0x0003400c) aid_zoom_text_primary_cp

0x6059,	// (0x00034fc0) popup_preview_fixed_window

0xe0df,	// (0x0003d046) im_reading_pane_g1

0x8f1d,	// (0x00037e84) cams2_bc_adjust_pane_cp_ParamLimits

0x8f1d,	// (0x00037e84) cams2_bc_adjust_pane_cp

0xd6c9,	// (0x0003c630) cams2_bc_adjust_pane_ParamLimits

0xd6c9,	// (0x0003c630) cams2_bc_adjust_pane

0xe01a,	// (0x0003cf81) cams2_bc_adjust_pane_g1

0xd6bf,	// (0x0003c626) cams2_slider_pane

0xe01a,	// (0x0003cf81) cams2_slider_pane_g1

0xe01a,	// (0x0003cf81) cams2_slider_pane_g2

0x0006,

0xf633,	// (0x0003e59a) cams2_slider_pane_g

0x6181,	// (0x000350e8) calc_display_pane_ParamLimits

0x619f,	// (0x00035106) calc_paper_pane_ParamLimits

0x61bb,	// (0x00035122) grid_calc_pane_ParamLimits

0x7eeb,	// (0x00036e52) popup_clock_digital_window_t1_ParamLimits

0xec7f,	// (0x0003dbe6) main_image_pane_t1

0x6167,	// (0x000350ce) aid_size_cell_calc_ParamLimits

0x6167,	// (0x000350ce) aid_size_cell_calc

0x8c16,	// (0x00037b7d) popup_blid_sat_info2_window_ParamLimits

0x8c16,	// (0x00037b7d) popup_blid_sat_info2_window

0x159b,	// (0x00030502) aid_size_cell_blid

0x15a3,	// (0x0003050a) bg_popup_window_pane_cp07

0x15c6,	// (0x0003052d) grid_popup_blid_pane

0x15d0,	// (0x00030537) heading_pane_cp05_ParamLimits

0x15d0,	// (0x00030537) heading_pane_cp05

0x169a,	// (0x00030601) cell_popup_blid_pane_ParamLimits

0x169a,	// (0x00030601) cell_popup_blid_pane

0x16be,	// (0x00030625) cell_popup_blid_pane_g1

0x16c6,	// (0x0003062d) cell_popup_blid_pane_t1

0x15a3,	// (0x0003050a) mup2_indicator_pane_ParamLimits

0x15a3,	// (0x0003050a) mup2_indicator_pane

0xd6bf,	// (0x0003c626) mup2_visualizer_osc_pane

0x142e,	// (0x00030395) mup2_visualizer_spec_pane_ParamLimits

0x142e,	// (0x00030395) mup2_visualizer_spec_pane

0xd6bf,	// (0x0003c626) mup2_spec_half_pane

0xd6bf,	// (0x0003c626) mup2_spec_half_pane_cp

0x16d4,	// (0x0003063b) mup2_spec_bar_pane_ParamLimits

0x16d4,	// (0x0003063b) mup2_spec_bar_pane

0xe01a,	// (0x0003cf81) mup2_spec_bar_pane_g1

0x16f3,	// (0x0003065a) mup2_spec_bar_pane_g2

0x0001,

0xf659,	// (0x0003e5c0) mup2_spec_bar_pane_g

0xd6bf,	// (0x0003c626) mup2_osc_middle_pane

0xe01a,	// (0x0003cf81) mup2_visualizer_osc_pane_g1

0xd6f7,	// (0x0003c65e) popup_number_entry_window_t1_ParamLimits

0xd70a,	// (0x0003c671) popup_number_entry_window_t2_ParamLimits

0xd71c,	// (0x0003c683) popup_number_entry_window_t3_ParamLimits

0x6107,	// (0x0003506e) popup_number_entry_window_t5_ParamLimits

0x6107,	// (0x0003506e) popup_number_entry_window_t5

0xf085,	// (0x0003dfec) popup_number_entry_window_t_ParamLimits

0xd72e,	// (0x0003c695) text_title_cp2_ParamLimits

0x83dd,	// (0x00037344) aid_hotspot_pointer_text2_pane

0x8477,	// (0x000373de) main_viewer_pane_g9_ParamLimits

0x8477,	// (0x000373de) main_viewer_pane_g9

0xe318,	// (0x0003d27f) cale_month_pane_t1_ParamLimits

0xe355,	// (0x0003d2bc) bg_cale_pane_ParamLimits

0xe36d,	// (0x0003d2d4) list_cale_pane_ParamLimits

0xe37e,	// (0x0003d2e5) listscroll_cale_day_pane_t1

0xe390,	// (0x0003d2f7) scroll_pane_cp09_ParamLimits

0x819c,	// (0x00037103) main_mup_eq_pane_t1_ParamLimits

0x819c,	// (0x00037103) main_mup_eq_pane_t1

0x81b6,	// (0x0003711d) main_mup_eq_pane_t2_ParamLimits

0x81b6,	// (0x0003711d) main_mup_eq_pane_t2

0x81ce,	// (0x00037135) main_mup_eq_pane_t3_ParamLimits

0x81ce,	// (0x00037135) main_mup_eq_pane_t3

0x81e6,	// (0x0003714d) main_mup_eq_pane_t4_ParamLimits

0x81e6,	// (0x0003714d) main_mup_eq_pane_t4

0x81fe,	// (0x00037165) main_mup_eq_pane_t5_ParamLimits

0x81fe,	// (0x00037165) main_mup_eq_pane_t5

0x8216,	// (0x0003717d) main_mup_eq_pane_t6_ParamLimits

0x8216,	// (0x0003717d) main_mup_eq_pane_t6

0x822a,	// (0x00037191) main_mup_eq_pane_t7_ParamLimits

0x822a,	// (0x00037191) main_mup_eq_pane_t7

0x823e,	// (0x000371a5) main_mup_eq_pane_t8_ParamLimits

0x823e,	// (0x000371a5) main_mup_eq_pane_t8

0x8254,	// (0x000371bb) main_mup_eq_pane_t9_ParamLimits

0x8254,	// (0x000371bb) main_mup_eq_pane_t9

0x826c,	// (0x000371d3) main_mup_eq_pane_t10_ParamLimits

0x826c,	// (0x000371d3) main_mup_eq_pane_t10

0x0009,

0xf3e9,	// (0x0003e350) main_mup_eq_pane_t_ParamLimits

0xf3e9,	// (0x0003e350) main_mup_eq_pane_t

0x8329,	// (0x00037290) mup_equalizer_pane_cp5_ParamLimits

0x833f,	// (0x000372a6) mup_equalizer_pane_cp6_ParamLimits

0x8357,	// (0x000372be) mup_equalizer_pane_cp7_ParamLimits

0xd6bf,	// (0x0003c626) main_gallery_pane

0x134a,	// (0x000302b1) smil2_volume_pane

0x1365,	// (0x000302cc) smil_status_volume_pane_g1_ParamLimits

0x1352,	// (0x000302b9) smil_status_volume_pane_g2_ParamLimits

0x8dd0,	// (0x00037d37) smil_status_volume_pane_g3_ParamLimits

0xf5b2,	// (0x0003e519) smil_status_volume_pane_g_ParamLimits

0x15a3,	// (0x0003050a) bg_popup_window_pane_cp07_ParamLimits

0x15b1,	// (0x00030518) blid_firmament_pane

0xd6c9,	// (0x0003c630) aid_size_cell_gallery_ParamLimits

0xd6c9,	// (0x0003c630) aid_size_cell_gallery

0xd6c9,	// (0x0003c630) grid_gallery_pane_ParamLimits

0xd6c9,	// (0x0003c630) grid_gallery_pane

0xf011,	// (0x0003df78) cell_gallery_pane_ParamLimits

0xf011,	// (0x0003df78) cell_gallery_pane

0xdd67,	// (0x0003ccce) bg_cell_gallery_focus_pane_ParamLimits

0xdd67,	// (0x0003ccce) bg_cell_gallery_focus_pane

0xddc0,	// (0x0003cd27) cell_gallery_pane_g1_ParamLimits

0xddc0,	// (0x0003cd27) cell_gallery_pane_g1

0xddc0,	// (0x0003cd27) cell_gallery_pane_g2_ParamLimits

0xddc0,	// (0x0003cd27) cell_gallery_pane_g2

0xddc0,	// (0x0003cd27) cell_gallery_pane_g3_ParamLimits

0xddc0,	// (0x0003cd27) cell_gallery_pane_g3

0xddce,	// (0x0003cd35) cell_gallery_pane_g4_ParamLimits

0xddce,	// (0x0003cd35) cell_gallery_pane_g4

0x0003,

0xf65e,	// (0x0003e5c5) cell_gallery_pane_g_ParamLimits

0xf65e,	// (0x0003e5c5) cell_gallery_pane_g

0x16fd,	// (0x00030664) bg_cell_gallery_focus_pane_g1

0x1705,	// (0x0003066c) bg_cell_gallery_focus_pane_g2

0x170d,	// (0x00030674) bg_cell_gallery_focus_pane_g3

0x1715,	// (0x0003067c) bg_cell_gallery_focus_pane_g4

0x171d,	// (0x00030684) bg_cell_gallery_focus_pane_g5

0x1725,	// (0x0003068c) bg_cell_gallery_focus_pane_g6

0x172d,	// (0x00030694) bg_cell_gallery_focus_pane_g7

0x1735,	// (0x0003069c) bg_cell_gallery_focus_pane_g8

0x0007,

0xf667,	// (0x0003e5ce) bg_cell_gallery_focus_pane_g

0x173d,	// (0x000306a4) aid_firma_cardinal

0x1751,	// (0x000306b8) blid_firmament_pane_t1

0x1768,	// (0x000306cf) blid_firmament_pane_t2

0x177f,	// (0x000306e6) blid_firmament_pane_t3

0x1796,	// (0x000306fd) blid_firmament_pane_t4

0x0003,

0xf678,	// (0x0003e5df) blid_firmament_pane_t

0x17ad,	// (0x00030714) blid_sat_info_pane

0xe01a,	// (0x0003cf81) blid_sat_info_pane_g1

0xe01a,	// (0x0003cf81) blid_sat_info_pane_g2

0x0001,

0xf3dd,	// (0x0003e344) blid_sat_info_pane_g

0x17bd,	// (0x00030724) blid_sat_info_pane_t1

0x17cb,	// (0x00030732) smil2_volume_content_pane

0x17d4,	// (0x0003073b) smil2_volume_pane_g1

0xf041,	// (0x0003dfa8) smil2_volume_content_pane_g1

0x17dc,	// (0x00030743) smil2_volume_content_pane_g2

0x17e5,	// (0x0003074c) smil2_volume_content_pane_g3

0x17ee,	// (0x00030755) smil2_volume_content_pane_g4

0x17f7,	// (0x0003075e) smil2_volume_content_pane_g5

0x1800,	// (0x00030767) smil2_volume_content_pane_g6

0x1809,	// (0x00030770) smil2_volume_content_pane_g7

0x1812,	// (0x00030779) smil2_volume_content_pane_g8

0x181b,	// (0x00030782) smil2_volume_content_pane_g9

0x1824,	// (0x0003078b) smil2_volume_content_pane_g10

0x0009,

0xf681,	// (0x0003e5e8) smil2_volume_content_pane_g

0x67a9,	// (0x00035710) cale_week_day_heading_pane_t1_ParamLimits

0x67c4,	// (0x0003572b) cale_week_day_heading_pane_t2_ParamLimits

0x67df,	// (0x00035746) cale_week_day_heading_pane_t3_ParamLimits

0x67fa,	// (0x00035761) cale_week_day_heading_pane_t4_ParamLimits

0x6815,	// (0x0003577c) cale_week_day_heading_pane_t5_ParamLimits

0x6830,	// (0x00035797) cale_week_day_heading_pane_t6_ParamLimits

0x684b,	// (0x000357b2) cale_week_day_heading_pane_t7_ParamLimits

0xf18c,	// (0x0003e0f3) cale_week_day_heading_pane_t_ParamLimits

0xdf92,	// (0x0003cef9) bg_cale_side_pane_ParamLimits

0x6866,	// (0x000357cd) cale_week_time_pane_t1_ParamLimits

0x6880,	// (0x000357e7) cale_week_time_pane_t2_ParamLimits

0x689a,	// (0x00035801) cale_week_time_pane_t3_ParamLimits

0x68b4,	// (0x0003581b) cale_week_time_pane_t4_ParamLimits

0x68ce,	// (0x00035835) cale_week_time_pane_t5_ParamLimits

0x68e8,	// (0x0003584f) cale_week_time_pane_t6_ParamLimits

0x6908,	// (0x0003586f) cale_week_time_pane_t7_ParamLimits

0x692a,	// (0x00035891) cale_week_time_pane_t8_ParamLimits

0xf19b,	// (0x0003e102) cale_week_time_pane_t_ParamLimits

0x694e,	// (0x000358b5) cell_cale_week_pane_g2_ParamLimits

0xdf92,	// (0x0003cef9) bg_cale_side_pane_cp01_ParamLimits

0x7ad4,	// (0x00036a3b) cale_month_week_pane_t1_ParamLimits

0x7aed,	// (0x00036a54) cale_month_week_pane_t2_ParamLimits

0x7b06,	// (0x00036a6d) cale_month_week_pane_t3_ParamLimits

0x7b1f,	// (0x00036a86) cale_month_week_pane_t4_ParamLimits

0x7b3a,	// (0x00036aa1) cale_month_week_pane_t5_ParamLimits

0x7b5b,	// (0x00036ac2) cale_month_week_pane_t6_ParamLimits

0xf269,	// (0x0003e1d0) cale_month_week_pane_t_ParamLimits

0x7ca2,	// (0x00036c09) cell_cale_month_pane_g1_ParamLimits

0xd6bf,	// (0x0003c626) main_cale_event_viewer_pane

0xd6bf,	// (0x0003c626) listscroll_cale_event_viewer_pane

0x182d,	// (0x00030794) list_cale_ev_pane

0x1835,	// (0x0003079c) scroll_pane_cp023

0x1841,	// (0x000307a8) field_cale_ev_pane_ParamLimits

0x1841,	// (0x000307a8) field_cale_ev_pane

0x185f,	// (0x000307c6) field_cale_ev_content_pane_ParamLimits

0x185f,	// (0x000307c6) field_cale_ev_content_pane

0x186b,	// (0x000307d2) field_cale_ev_pane_g1_ParamLimits

0x186b,	// (0x000307d2) field_cale_ev_pane_g1

0x1877,	// (0x000307de) field_cale_ev_pane_g2_ParamLimits

0x1877,	// (0x000307de) field_cale_ev_pane_g2

0x188f,	// (0x000307f6) field_cale_ev_pane_g3_ParamLimits

0x188f,	// (0x000307f6) field_cale_ev_pane_g3

0x0002,

0xf696,	// (0x0003e5fd) field_cale_ev_pane_g_ParamLimits

0xf696,	// (0x0003e5fd) field_cale_ev_pane_g

0x18a7,	// (0x0003080e) field_cale_ev_pane_t1_ParamLimits

0x18a7,	// (0x0003080e) field_cale_ev_pane_t1

0x18be,	// (0x00030825) field_cale_ev_content_pane_t1_ParamLimits

0x18be,	// (0x00030825) field_cale_ev_content_pane_t1

0xeb65,	// (0x0003dacc) bg_button_pane_cp01

0x6534,	// (0x0003549b) listscroll_cale_week_pane_ParamLimits

0xdf3d,	// (0x0003cea4) popup_toolbar_window_cp01

0xdf63,	// (0x0003ceca) listscroll_cale_week_pane_t1_ParamLimits

0x6534,	// (0x0003549b) listscroll_cale_day_pane_ParamLimits

0xdf3d,	// (0x0003cea4) popup_toolbar_window_cp02

0xe37e,	// (0x0003d2e5) listscroll_cale_day_pane_t1_ParamLimits

0x6534,	// (0x0003549b) main_cale_month_pane_ParamLimits

0x8d19,	// (0x00037c80) popup_toolbar_window_cp03_ParamLimits

0x8d19,	// (0x00037c80) popup_toolbar_window_cp03

0x85fe,	// (0x00037565) main_image_pane_g2_ParamLimits

0x85fe,	// (0x00037565) main_image_pane_g2

0x860a,	// (0x00037571) main_image_pane_g3_ParamLimits

0x860a,	// (0x00037571) main_image_pane_g3

0x0002,

0xf47b,	// (0x0003e3e2) main_image_pane_g_ParamLimits

0xf47b,	// (0x0003e3e2) main_image_pane_g

0xec7f,	// (0x0003dbe6) main_image_pane_t1_ParamLimits

0x8616,	// (0x0003757d) main_image_pane_t2_ParamLimits

0x8616,	// (0x0003757d) main_image_pane_t2

0x8628,	// (0x0003758f) main_image_pane_t3_ParamLimits

0x8628,	// (0x0003758f) main_image_pane_t3

0x863a,	// (0x000375a1) main_image_pane_t4_ParamLimits

0x863a,	// (0x000375a1) main_image_pane_t4

0x0003,

0xf482,	// (0x0003e3e9) main_image_pane_t_ParamLimits

0xf482,	// (0x0003e3e9) main_image_pane_t

0x864c,	// (0x000375b3) popup_image_details_window_cp01

0x8656,	// (0x000375bd) popup_toobar_trans_pane_cp01_ParamLimits

0x8656,	// (0x000375bd) popup_toobar_trans_pane_cp01

0x8c69,	// (0x00037bd0) popup_image_details_window_ParamLimits

0x8c69,	// (0x00037bd0) popup_image_details_window

0x8c77,	// (0x00037bde) popup_image_focus_window

0xd6c9,	// (0x0003c630) camera2_autofocus_pane_ParamLimits

0xd6c9,	// (0x0003c630) camera2_autofocus_pane

0xd6bf,	// (0x0003c626) bg_popup_sub_pane_cp06

0x18dc,	// (0x00030843) popup_image_focus_window_g1

0x18e4,	// (0x0003084b) popup_image_focus_window_g2

0x18ec,	// (0x00030853) popup_image_focus_window_g3

0x18f4,	// (0x0003085b) popup_image_focus_window_g4

0x0003,

0xf69d,	// (0x0003e604) popup_image_focus_window_g

0x18fc,	// (0x00030863) popup_image_focus_window_t1

0x190a,	// (0x00030871) popup_image_focus_window_t2

0x191a,	// (0x00030881) popup_image_focus_window_t3

0x0002,

0xf6a6,	// (0x0003e60d) popup_image_focus_window_t

0xddc0,	// (0x0003cd27) camera2_autofocus_pane_g1

0xdd67,	// (0x0003ccce) bg_tb_trans_pane_cp01

0x1928,	// (0x0003088f) popup_image_details_window_g1

0x193b,	// (0x000308a2) popup_image_details_window_g2

0x0002,

0xf6b8,	// (0x0003e61f) popup_image_details_window_g

0x1964,	// (0x000308cb) popup_image_details_window_t1

0x1976,	// (0x000308dd) popup_image_details_window_t2

0x198f,	// (0x000308f6) popup_image_details_window_t3

0x19a3,	// (0x0003090a) popup_image_details_window_t4

0x19be,	// (0x00030925) popup_image_details_window_t5

0x0004,

0xf6bf,	// (0x0003e626) popup_image_details_window_t

0xde1e,	// (0x0003cd85) bg_calc_paper_pane_ParamLimits

0xd6bf,	// (0x0003c626) grid_highlight_pane_cp013

0x62b8,	// (0x0003521f) list_calc_pane_ParamLimits

0x62ca,	// (0x00035231) scroll_pane_cp024

0xde32,	// (0x0003cd99) bg_calc_display_pane_ParamLimits

0x62d2,	// (0x00035239) calc_display_pane_t1_ParamLimits

0x62e7,	// (0x0003524e) calc_display_pane_t2_ParamLimits

0x62fc,	// (0x00035263) calc_display_pane_t3_ParamLimits

0xf10c,	// (0x0003e073) calc_display_pane_t_ParamLimits

0x63d6,	// (0x0003533d) cell_calc_pane_g2

0x0001,

0xf129,	// (0x0003e090) cell_calc_pane_g

0x63df,	// (0x00035346) cell_calc_pane_t1

0xde87,	// (0x0003cdee) grid_highlight_pane_cp02_ParamLimits

0xde9d,	// (0x0003ce04) toolbar_button_pane_cp01_ParamLimits

0xde9d,	// (0x0003ce04) toolbar_button_pane_cp01

0xecc4,	// (0x0003dc2b) temp_image_control_pane_ParamLimits

0xecc4,	// (0x0003dc2b) temp_image_control_pane

0xdd67,	// (0x0003ccce) main_mp3_pane

0x19d8,	// (0x0003093f) temp_image_control_pane_g1_ParamLimits

0x19d8,	// (0x0003093f) temp_image_control_pane_g1

0x19e6,	// (0x0003094d) temp_image_control_pane_g2_ParamLimits

0x19e6,	// (0x0003094d) temp_image_control_pane_g2

0x19f8,	// (0x0003095f) temp_image_control_pane_g3_ParamLimits

0x19f8,	// (0x0003095f) temp_image_control_pane_g3

0x9032,	// (0x00037f99) temp_image_control_pane_g4_ParamLimits

0x9032,	// (0x00037f99) temp_image_control_pane_g4

0x0003,

0xf6ca,	// (0x0003e631) temp_image_control_pane_g_ParamLimits

0xf6ca,	// (0x0003e631) temp_image_control_pane_g

0x19d8,	// (0x0003093f) main_mp3_pane_g1

0x9043,	// (0x00037faa) main_mp3_pane_g2

0x0007,

0xf6d3,	// (0x0003e63a) main_mp3_pane_g

0x1a2d,	// (0x00030994) main_mp3_pane_t1

0xddce,	// (0x0003cd35) main_camera_pane_g8_ParamLimits

0xddce,	// (0x0003cd35) main_camera_pane_g8

0x6af5,	// (0x00035a5c) main_video_pane_g7_ParamLimits

0x6af5,	// (0x00035a5c) main_video_pane_g7

0xdfec,	// (0x0003cf53) main_camera2_pane_t7_ParamLimits

0xdfec,	// (0x0003cf53) main_camera2_pane_t7

0xe136,	// (0x0003d09d) scroll_pane_cp025_ParamLimits

0xe136,	// (0x0003d09d) scroll_pane_cp025

0xe14a,	// (0x0003d0b1) scroll_pane_cp026_ParamLimits

0xe14a,	// (0x0003d0b1) scroll_pane_cp026

0xe159,	// (0x0003d0c0) wml_content_pane_ParamLimits

0xd6bf,	// (0x0003c626) main_touch_calib_pane

0x90e7,	// (0x0003804e) main_touch_calib_pane_g1

0x90f3,	// (0x0003805a) main_touch_calib_pane_g2

0x90ff,	// (0x00038066) main_touch_calib_pane_g3

0x910b,	// (0x00038072) main_touch_calib_pane_g4

0x0003,

0xf6f1,	// (0x0003e658) main_touch_calib_pane_g

0x9117,	// (0x0003807e) main_touch_calib_pane_t1

0x9130,	// (0x00038097) main_touch_calib_pane_t2

0x0004,

0xf6fa,	// (0x0003e661) main_touch_calib_pane_t

0xe8b4,	// (0x0003d81b) mup_progress_pane_cp02

0xe8e9,	// (0x0003d850) navi_pane_g1

0xe9a4,	// (0x0003d90b) navi_pane_mp_t3

0xdd67,	// (0x0003ccce) main_mp3_pane_ParamLimits

0x8d56,	// (0x00037cbd) navi_pane_ParamLimits

0x19d8,	// (0x0003093f) main_mp3_pane_g1_ParamLimits

0x9043,	// (0x00037faa) main_mp3_pane_g2_ParamLimits

0x904f,	// (0x00037fb6) main_mp3_pane_g3_ParamLimits

0x904f,	// (0x00037fb6) main_mp3_pane_g3

0x905b,	// (0x00037fc2) main_mp3_pane_g4_ParamLimits

0x905b,	// (0x00037fc2) main_mp3_pane_g4

0xddc0,	// (0x0003cd27) main_mp3_pane_g5_ParamLimits

0xddc0,	// (0x0003cd27) main_mp3_pane_g5

0x1a08,	// (0x0003096f) main_mp3_pane_g6_ParamLimits

0x1a08,	// (0x0003096f) main_mp3_pane_g6

0x1a15,	// (0x0003097c) main_mp3_pane_g7_ParamLimits

0x1a15,	// (0x0003097c) main_mp3_pane_g7

0x1a21,	// (0x00030988) main_mp3_pane_g8_ParamLimits

0x1a21,	// (0x00030988) main_mp3_pane_g8

0xf6d3,	// (0x0003e63a) main_mp3_pane_g_ParamLimits

0x9067,	// (0x00037fce) main_mp3_pane_t2

0x9077,	// (0x00037fde) main_mp3_pane_t3

0x1a3b,	// (0x000309a2) main_mp3_pane_t4

0x1a49,	// (0x000309b0) main_mp3_pane_t5

0x0005,

0xf6e4,	// (0x0003e64b) main_mp3_pane_t

0x1a57,	// (0x000309be) mup_progress_pane_cp01

0x50a5,	// (0x0003400c) aid_zoom_text_secondary2

0x182d,	// (0x00030794) list_cale_ev2_pane

0x1835,	// (0x0003079c) scroll_pane_cp023_ParamLimits

0x918b,	// (0x000380f2) field_cale_ev2_pane_ParamLimits

0x918b,	// (0x000380f2) field_cale_ev2_pane

0x51da,	// (0x00034141) field_cale_ev2_pane_g1_ParamLimits

0x51da,	// (0x00034141) field_cale_ev2_pane_g1

0x51e6,	// (0x0003414d) field_cale_ev2_pane_g2_ParamLimits

0x51e6,	// (0x0003414d) field_cale_ev2_pane_g2

0x51fe,	// (0x00034165) field_cale_ev2_pane_g3_ParamLimits

0x51fe,	// (0x00034165) field_cale_ev2_pane_g3

0x0003,

0xf705,	// (0x0003e66c) field_cale_ev2_pane_g_ParamLimits

0xf705,	// (0x0003e66c) field_cale_ev2_pane_g

0x5222,	// (0x00034189) field_cale_ev2_pane_t1_ParamLimits

0x5222,	// (0x00034189) field_cale_ev2_pane_t1

0x5239,	// (0x000341a0) field_cale_ev2_pane_t2_ParamLimits

0x5239,	// (0x000341a0) field_cale_ev2_pane_t2

0x0001,

0xf70e,	// (0x0003e675) field_cale_ev2_pane_t_ParamLimits

0xf70e,	// (0x0003e675) field_cale_ev2_pane_t

0x84df,	// (0x00037446) main_postcard_pane_g5_ParamLimits

0x84df,	// (0x00037446) main_postcard_pane_g5

0x84ed,	// (0x00037454) main_postcard_pane_g6_ParamLimits

0x84ed,	// (0x00037454) main_postcard_pane_g6

0xd6c9,	// (0x0003c630) camera2_autofocus_pane_cp_ParamLimits

0xd6c9,	// (0x0003c630) camera2_autofocus_pane_cp

0xdd67,	// (0x0003ccce) main_mup3_pane

0x91f4,	// (0x0003815b) main_mup3_pane_g1_ParamLimits

0x91f4,	// (0x0003815b) main_mup3_pane_g1

0x9215,	// (0x0003817c) main_mup3_pane_g2_ParamLimits

0x9215,	// (0x0003817c) main_mup3_pane_g2

0x928f,	// (0x000381f6) main_mup3_pane_g3_ParamLimits

0x928f,	// (0x000381f6) main_mup3_pane_g3

0x92d2,	// (0x00038239) main_mup3_pane_g4_ParamLimits

0x92d2,	// (0x00038239) main_mup3_pane_g4

0x9315,	// (0x0003827c) main_mup3_pane_g5_ParamLimits

0x9315,	// (0x0003827c) main_mup3_pane_g5

0x9358,	// (0x000382bf) main_mup3_pane_g6_ParamLimits

0x9358,	// (0x000382bf) main_mup3_pane_g6

0xddce,	// (0x0003cd35) main_mup3_pane_g7_ParamLimits

0xddce,	// (0x0003cd35) main_mup3_pane_g7

0x0007,

0xf71e,	// (0x0003e685) main_mup3_pane_g_ParamLimits

0xf71e,	// (0x0003e685) main_mup3_pane_g

0x93ce,	// (0x00038335) main_mup3_pane_t1_ParamLimits

0x93ce,	// (0x00038335) main_mup3_pane_t1

0x943d,	// (0x000383a4) main_mup3_pane_t2_ParamLimits

0x943d,	// (0x000383a4) main_mup3_pane_t2

0x9506,	// (0x0003846d) main_mup3_pane_t4_ParamLimits

0x9506,	// (0x0003846d) main_mup3_pane_t4

0x9554,	// (0x000384bb) main_mup3_pane_t5_ParamLimits

0x9554,	// (0x000384bb) main_mup3_pane_t5

0x9604,	// (0x0003856b) main_mup3_pane_t6_ParamLimits

0x9604,	// (0x0003856b) main_mup3_pane_t6

0x0005,

0xf72f,	// (0x0003e696) main_mup3_pane_t_ParamLimits

0xf72f,	// (0x0003e696) main_mup3_pane_t

0x96b0,	// (0x00038617) mup3_progress_pane_ParamLimits

0x96b0,	// (0x00038617) mup3_progress_pane

0x9724,	// (0x0003868b) popup_mup3_control_window_ParamLimits

0x9724,	// (0x0003868b) popup_mup3_control_window

0x1ad3,	// (0x00030a3a) popup_mup3_text_window

0x973d,	// (0x000386a4) mup3_progress_pane_t1

0x975c,	// (0x000386c3) mup3_progress_pane_t2

0x1adb,	// (0x00030a42) mup3_progress_pane_t3

0x0002,

0xf73c,	// (0x0003e6a3) mup3_progress_pane_t

0x1af8,	// (0x00030a5f) mup_progress_pane_cp03

0xd6bf,	// (0x0003c626) bg_tb_trans_pane_cp04

0x977b,	// (0x000386e2) mup3_volume_pane

0x9783,	// (0x000386ea) popup_mup3_control_window_g1

0x978c,	// (0x000386f3) mup3_volume_pane_g1

0x9795,	// (0x000386fc) mup3_volume_pane_g2

0x979e,	// (0x00038705) mup3_volume_pane_g3

0x0002,

0xf743,	// (0x0003e6aa) mup3_volume_pane_g

0xd6bf,	// (0x0003c626) bg_tb_trans_pane_cp03

0x1b08,	// (0x00030a6f) popup_mup3_text_window_g1

0x1b10,	// (0x00030a77) popup_mup3_text_window_t1

0xde7a,	// (0x0003cde1) list_calc_item_pane_g1_ParamLimits

0x150f,	// (0x00030476) mup_volume_pane_cp_g1

0x9149,	// (0x000380b0) main_touch_calib_pane_t3

0x915f,	// (0x000380c6) main_touch_calib_pane_t4

0x9175,	// (0x000380dc) main_touch_calib_pane_t5

0x5df4,	// (0x00034d5b) aid_cell_size_toolbar2

0x5dfc,	// (0x00034d63) aid_popup3_width_pane

0x509d,	// (0x00034004) aid_zoom_text_msg_primary

0x69f7,	// (0x0003595e) vorec_t7

0xde3e,	// (0x0003cda5) bg_calc_paper_pane_g1_ParamLimits

0xde4a,	// (0x0003cdb1) bg_calc_paper_pane_g2_ParamLimits

0xde56,	// (0x0003cdbd) bg_calc_paper_pane_g3_ParamLimits

0xde62,	// (0x0003cdc9) bg_calc_paper_pane_g4_ParamLimits

0xde6e,	// (0x0003cdd5) bg_calc_paper_pane_g5_ParamLimits

0x633b,	// (0x000352a2) bg_calc_paper_pane_g6_ParamLimits

0x634c,	// (0x000352b3) bg_calc_paper_pane_g7_ParamLimits

0x635d,	// (0x000352c4) bg_calc_paper_pane_g8_ParamLimits

0xf113,	// (0x0003e07a) bg_calc_paper_pane_g_ParamLimits

0x636e,	// (0x000352d5) calc_bg_paper_pane_g9_ParamLimits

0xd6c9,	// (0x0003c630) image_qvga_pane_ParamLimits

0xd6c9,	// (0x0003c630) image_qvga_pane

0xdd45,	// (0x0003ccac) bg_popup_sub_pane_cp04_ParamLimits

0xebfb,	// (0x0003db62) popup_mup_playback_window_g1_ParamLimits

0xec07,	// (0x0003db6e) popup_mup_playback_window_t1_ParamLimits

0xec1c,	// (0x0003db83) popup_mup_playback_window_t2_ParamLimits

0xf476,	// (0x0003e3dd) popup_mup_playback_window_t_ParamLimits

0xddc0,	// (0x0003cd27) main_mup2_pane_g3_ParamLimits

0xddc0,	// (0x0003cd27) main_mup2_pane_g3

0x6cdc,	// (0x00035c43) popup_toolbar_window_cp04

0x052e,	// (0x0002f495) popup_call2_audio_second_window_g3_ParamLimits

0x052e,	// (0x0002f495) popup_call2_audio_second_window_g3

0x0946,	// (0x0002f8ad) popup_call2_audio_first_window_g4_ParamLimits

0x0946,	// (0x0002f8ad) popup_call2_audio_first_window_g4

0x0f6d,	// (0x0002fed4) popup_call2_audio_in_window_g4_ParamLimits

0x0f6d,	// (0x0002fed4) popup_call2_audio_in_window_g4

0x85f1,	// (0x00037558) aid_area_sk_bg_cut_ParamLimits

0x85f1,	// (0x00037558) aid_area_sk_bg_cut

0xec31,	// (0x0003db98) aid_area_sk_bg_cut_2_ParamLimits

0xec31,	// (0x0003db98) aid_area_sk_bg_cut_2

0xd6bf,	// (0x0003c626) aid_placing_details_win

0xd6bf,	// (0x0003c626) aid_placing_details_win_2

0xddc0,	// (0x0003cd27) camera2_autofocus_pane_g1_ParamLimits

0x604a,	// (0x00034fb1) popup_fixed_preview_cale_window_ParamLimits

0x604a,	// (0x00034fb1) popup_fixed_preview_cale_window

0xea22,	// (0x0003d989) navi_slider_pane_g3

0xea2b,	// (0x0003d992) navi_slider_pane_g4

0xea34,	// (0x0003d99b) navi_slider_pane_g5

0xea22,	// (0x0003d989) navi_slider_pane_g6

0x8170,	// (0x000370d7) navi_slider_pane_g7

0xeb32,	// (0x0003da99) mup_scale_pane_g3

0xeb3b,	// (0x0003daa2) mup_scale_pane_g4

0xeb44,	// (0x0003daab) mup_scale_pane_g5

0x836f,	// (0x000372d6) mup_scale_pane_g6

0x8378,	// (0x000372df) mup_scale_pane_g7

0xe01a,	// (0x0003cf81) cams2_slider_pane_g3

0xe01a,	// (0x0003cf81) cams2_slider_pane_g4

0xe01a,	// (0x0003cf81) cams2_slider_pane_g5

0xe01a,	// (0x0003cf81) cams2_slider_pane_g6

0xe01a,	// (0x0003cf81) cams2_slider_pane_g7

0xe01a,	// (0x0003cf81) camera2_autofocus_pane_cp_g1

0x127d,	// (0x000301e4) bg_popup_preview_window_pane_cp02_ParamLimits

0x127d,	// (0x000301e4) bg_popup_preview_window_pane_cp02

0x1b1e,	// (0x00030a85) list_fp_cale_pane_ParamLimits

0x1b1e,	// (0x00030a85) list_fp_cale_pane

0x1b2a,	// (0x00030a91) popup_fixed_preview_cale_window_t1_ParamLimits

0x1b2a,	// (0x00030a91) popup_fixed_preview_cale_window_t1

0x97a7,	// (0x0003870e) popup_fixed_preview_cale_window_t2_ParamLimits

0x97a7,	// (0x0003870e) popup_fixed_preview_cale_window_t2

0x97bc,	// (0x00038723) popup_fixed_preview_cale_window_t3_ParamLimits

0x97bc,	// (0x00038723) popup_fixed_preview_cale_window_t3

0x0002,

0xf74a,	// (0x0003e6b1) popup_fixed_preview_cale_window_t_ParamLimits

0xf74a,	// (0x0003e6b1) popup_fixed_preview_cale_window_t

0x97d1,	// (0x00038738) list_single_fp_cale_pane_ParamLimits

0x97d1,	// (0x00038738) list_single_fp_cale_pane

0x1b48,	// (0x00030aaf) list_single_fp_cale_pane_g1_ParamLimits

0x1b48,	// (0x00030aaf) list_single_fp_cale_pane_g1

0x1b54,	// (0x00030abb) list_single_fp_cale_pane_g2_ParamLimits

0x1b54,	// (0x00030abb) list_single_fp_cale_pane_g2

0x0002,

0xf751,	// (0x0003e6b8) list_single_fp_cale_pane_g_ParamLimits

0xf751,	// (0x0003e6b8) list_single_fp_cale_pane_g

0x1b6d,	// (0x00030ad4) list_single_fp_cale_pane_t1_ParamLimits

0x1b6d,	// (0x00030ad4) list_single_fp_cale_pane_t1

0x1b7f,	// (0x00030ae6) list_single_fp_cale_pane_t2_ParamLimits

0x1b7f,	// (0x00030ae6) list_single_fp_cale_pane_t2

0x0001,

0xf758,	// (0x0003e6bf) list_single_fp_cale_pane_t_ParamLimits

0xf758,	// (0x0003e6bf) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0xd6bf,	// (0x0003c626) main_dialer_pane

0xd6bf,	// (0x0003c626) aid_cell_size_keypad

0xd6bf,	// (0x0003c626) dialer_ne_pane

0xd6bf,	// (0x0003c626) grid_dialer_command_1_pane

0xd6bf,	// (0x0003c626) grid_dialer_command_2_pane

0xd6bf,	// (0x0003c626) grid_dialer_keypad_pane

0x15a3,	// (0x0003050a) bg_popup_call_pane_cp06_ParamLimits

0x15a3,	// (0x0003050a) bg_popup_call_pane_cp06

0x15a3,	// (0x0003050a) dialer_ne_clear_pane_ParamLimits

0x15a3,	// (0x0003050a) dialer_ne_clear_pane

0xe01a,	// (0x0003cf81) dialer_ne_pane_g1

0xdfec,	// (0x0003cf53) dialer_ne_pane_t1_ParamLimits

0xdfec,	// (0x0003cf53) dialer_ne_pane_t1

0x1dc8,	// (0x00030d2f) dialer_ne_pane_t2_ParamLimits

0x1dc8,	// (0x00030d2f) dialer_ne_pane_t2

0x97e4,	// (0x0003874b) dialer_ne_pane_t3_ParamLimits

0x97e4,	// (0x0003874b) dialer_ne_pane_t3

0x0002,

0xf75d,	// (0x0003e6c4) dialer_ne_pane_t_ParamLimits

0xf75d,	// (0x0003e6c4) dialer_ne_pane_t

0x97e4,	// (0x0003874b) dialer_ne_pane_t3_copy1_ParamLimits

0x97e4,	// (0x0003874b) dialer_ne_pane_t3_copy1

0x1bb2,	// (0x00030b19) cell_dialer_keypad_pane_ParamLimits

0x1bb2,	// (0x00030b19) cell_dialer_keypad_pane

0xdd67,	// (0x0003ccce) cell_dialer_command_1_pane_ParamLimits

0xdd67,	// (0x0003ccce) cell_dialer_command_1_pane

0x1bc9,	// (0x00030b30) cell_dialer_command_2_pane_ParamLimits

0x1bc9,	// (0x00030b30) cell_dialer_command_2_pane

0xdd67,	// (0x0003ccce) bg_button_pane_cp02_ParamLimits

0xdd67,	// (0x0003ccce) bg_button_pane_cp02

0xddc0,	// (0x0003cd27) cell_dialer_keypad_pane_g1_ParamLimits

0xddc0,	// (0x0003cd27) cell_dialer_keypad_pane_g1

0xdd67,	// (0x0003ccce) bg_button_pane_cp03_ParamLimits

0xdd67,	// (0x0003ccce) bg_button_pane_cp03

0xddc0,	// (0x0003cd27) cell_dialer_command_1_pane_g1_ParamLimits

0xddc0,	// (0x0003cd27) cell_dialer_command_1_pane_g1

0xd6bf,	// (0x0003c626) bg_button_pane_cp04

0xe01a,	// (0x0003cf81) cell_dialer_command_2_pane_g1

0xd6bf,	// (0x0003c626) bg_button_pane_cp06

0xe01a,	// (0x0003cf81) dialer_ne_clear_pane_g1

0xe8f5,	// (0x0003d85c) navi_pane_g2

0xe923,	// (0x0003d88a) navi_pane_g3

0x0002,

0xf379,	// (0x0003e2e0) navi_pane_g

0xe9b2,	// (0x0003d919) navi_pane_mv_g2

0xe9d9,	// (0x0003d940) navi_pane_mv_g5

0x813b,	// (0x000370a2) navi_pane_mv_t1

0xde32,	// (0x0003cd99) main_clock2_pane

0xd6c9,	// (0x0003c630) main_clock2_list_pane_ParamLimits

0xd6c9,	// (0x0003c630) main_clock2_list_pane

0x985a,	// (0x000387c1) main_clock2_pane_t1_ParamLimits

0x985a,	// (0x000387c1) main_clock2_pane_t1

0x9888,	// (0x000387ef) main_clock2_pane_t2_ParamLimits

0x9888,	// (0x000387ef) main_clock2_pane_t2

0x0004,

0xf769,	// (0x0003e6d0) main_clock2_pane_t_ParamLimits

0xf769,	// (0x0003e6d0) main_clock2_pane_t

0x98ed,	// (0x00038854) popup_clock_analogue_window_cp03_ParamLimits

0x98ed,	// (0x00038854) popup_clock_analogue_window_cp03

0x990b,	// (0x00038872) popup_clock_digital_window_cp02_ParamLimits

0x990b,	// (0x00038872) popup_clock_digital_window_cp02

0x9980,	// (0x000388e7) main_clock2_list_single_pane_ParamLimits

0x9980,	// (0x000388e7) main_clock2_list_single_pane

0xdfe4,	// (0x0003cf4b) list_highlight_pane_cp05

0x1c0c,	// (0x00030b73) main_clock2_list_single_pane_t1

0x6cdc,	// (0x00035c43) popup_toolbar_window_cp04_ParamLimits

0xddce,	// (0x0003cd35) camera2_autofocus_pane_g2_ParamLimits

0xddce,	// (0x0003cd35) camera2_autofocus_pane_g2

0xddce,	// (0x0003cd35) camera2_autofocus_pane_g3_ParamLimits

0xddce,	// (0x0003cd35) camera2_autofocus_pane_g3

0xddce,	// (0x0003cd35) camera2_autofocus_pane_g4_ParamLimits

0xddce,	// (0x0003cd35) camera2_autofocus_pane_g4

0xddce,	// (0x0003cd35) camera2_autofocus_pane_g5_ParamLimits

0xddce,	// (0x0003cd35) camera2_autofocus_pane_g5

0x0004,

0xf6ad,	// (0x0003e614) camera2_autofocus_pane_g_ParamLimits

0xf6ad,	// (0x0003e614) camera2_autofocus_pane_g

0x91b5,	// (0x0003811c) camera2_autofocus_pane_cp_g2

0x91bd,	// (0x00038124) camera2_autofocus_pane_cp_g3

0x91c5,	// (0x0003812c) camera2_autofocus_pane_cp_g4

0x91cd,	// (0x00038134) camera2_autofocus_pane_cp_g5

0x0004,

0xf713,	// (0x0003e67a) camera2_autofocus_pane_cp_g

0xd6bf,	// (0x0003c626) popup_dialer_spcha_window

0xd6bf,	// (0x0003c626) bg_popup_sub_pane_cp07

0xd6bf,	// (0x0003c626) list_spcha_pane

0x1c1a,	// (0x00030b81) list_single_spcha_pane_ParamLimits

0x1c1a,	// (0x00030b81) list_single_spcha_pane

0xd6bf,	// (0x0003c626) list_highlight_pane_cp06

0xe555,	// (0x0003d4bc) list_single_spcha_pane_t1

0x0d17,	// (0x0002fc7e) popup_call2_audio_out_window_g4_ParamLimits

0x0d17,	// (0x0002fc7e) popup_call2_audio_out_window_g4

0xd6bf,	// (0x0003c626) main_imed2_pane

0x8c7f,	// (0x00037be6) popup_imed_adjust2_window

0x8c92,	// (0x00037bf9) popup_imed_trans_window_ParamLimits

0x8c92,	// (0x00037bf9) popup_imed_trans_window

0x15fc,	// (0x00030563) popup_blid_sat_info2_window_t1

0x160a,	// (0x00030571) popup_blid_sat_info2_window_t2

0x000a,

0xf642,	// (0x0003e5a9) popup_blid_sat_info2_window_t

0x9a35,	// (0x0003899c) aid_size_cell_colour_35

0x9a4f,	// (0x000389b6) aid_size_cell_colour_112

0x9a66,	// (0x000389cd) aid_size_cell_effect

0xdd67,	// (0x0003ccce) bg_tb_trans_pane_cp02

0xf04a,	// (0x0003dfb1) heading_imed_pane

0x9a80,	// (0x000389e7) listscroll_imed_pane

0x1c2c,	// (0x00030b93) heading_imed_pane_g1

0x1c34,	// (0x00030b9b) heading_imed_pane_t1

0x1c42,	// (0x00030ba9) grid_imed_colour_35_pane_ParamLimits

0x1c42,	// (0x00030ba9) grid_imed_colour_35_pane

0x9a8c,	// (0x000389f3) grid_imed_effect_pane

0x1c5a,	// (0x00030bc1) list_imed_aspect_pane

0x9a9c,	// (0x00038a03) scroll_pane_cp027_ParamLimits

0x9a9c,	// (0x00038a03) scroll_pane_cp027

0x9aa8,	// (0x00038a0f) cell_imed_effect_pane_ParamLimits

0x9aa8,	// (0x00038a0f) cell_imed_effect_pane

0x1c62,	// (0x00030bc9) cell_imed_colour_pane_ParamLimits

0x1c62,	// (0x00030bc9) cell_imed_colour_pane

0x1ca4,	// (0x00030c0b) cell_imed_colour_pane_g1_ParamLimits

0x1ca4,	// (0x00030c0b) cell_imed_colour_pane_g1

0x1cb5,	// (0x00030c1c) hgihlgiht_grid_pane_cp016_ParamLimits

0x1cb5,	// (0x00030c1c) hgihlgiht_grid_pane_cp016

0x9ac0,	// (0x00038a27) cell_imed_effect_pane_g1

0x9ac8,	// (0x00038a2f) grid_highlight_pane_cp017

0x1cc6,	// (0x00030c2d) list_imed_single_pane_ParamLimits

0x1cc6,	// (0x00030c2d) list_imed_single_pane

0xd6bf,	// (0x0003c626) list_highlight_pane_cp07

0x1cdb,	// (0x00030c42) list_imed_aspect_pane_comp1_t1

0xf011,	// (0x0003df78) bg_tb_trans_pane_cp05

0x1cfd,	// (0x00030c64) popup_imed_adjust2_window_g1

0x1d24,	// (0x00030c8b) popup_imed_adjust2_window_t1

0x1d3c,	// (0x00030ca3) slider_imed_adjust_pane

0x1d50,	// (0x00030cb7) slider_imed_adjust_pane_g1

0x1d60,	// (0x00030cc7) slider_imed_adjust_pane_g2

0x1d70,	// (0x00030cd7) slider_imed_adjust_pane_g3

0x1d81,	// (0x00030ce8) slider_imed_adjust_pane_g4

0x0003,

0xf786,	// (0x0003e6ed) slider_imed_adjust_pane_g

0x9ad1,	// (0x00038a38) aid_size_cell_clipart2

0x9add,	// (0x00038a44) grid_imed_clipart_pane

0x1d92,	// (0x00030cf9) scroll_pane_cp031

0x9ae7,	// (0x00038a4e) cell_imed_clipart_pane_ParamLimits

0x9ae7,	// (0x00038a4e) cell_imed_clipart_pane

0x9b0a,	// (0x00038a71) cell_imed_clipart_pane_g1

0xd6bf,	// (0x0003c626) grid_highlight_pane_cp014

0x983c,	// (0x000387a3) main_clock2_pane_g1_ParamLimits

0x983c,	// (0x000387a3) main_clock2_pane_g1

0x9927,	// (0x0003888e) aid_call2_pane_cp10

0x9939,	// (0x000388a0) aid_call_pane_cp10

0xe854,	// (0x0003d7bb) popup_clock_analogue_window_cp10_g1

0xe854,	// (0x0003d7bb) popup_clock_analogue_window_cp10_g2

0x994b,	// (0x000388b2) popup_clock_analogue_window_cp10_g3

0x994b,	// (0x000388b2) popup_clock_analogue_window_cp10_g4

0xe854,	// (0x0003d7bb) popup_clock_analogue_window_cp10_g5

0x0004,

0xf774,	// (0x0003e6db) popup_clock_analogue_window_cp10_g

0x9961,	// (0x000388c8) popup_clock_analogue_window_cp10_t1

0x9992,	// (0x000388f9) clock_digital_number_pane_cp10_ParamLimits

0x9992,	// (0x000388f9) clock_digital_number_pane_cp10

0x99ac,	// (0x00038913) clock_digital_number_pane_cp11_ParamLimits

0x99ac,	// (0x00038913) clock_digital_number_pane_cp11

0x99c6,	// (0x0003892d) clock_digital_number_pane_cp12_ParamLimits

0x99c6,	// (0x0003892d) clock_digital_number_pane_cp12

0x99e0,	// (0x00038947) clock_digital_number_pane_cp13_ParamLimits

0x99e0,	// (0x00038947) clock_digital_number_pane_cp13

0x99fa,	// (0x00038961) clock_digital_separator_pane_cp10_ParamLimits

0x99fa,	// (0x00038961) clock_digital_separator_pane_cp10

0x9a14,	// (0x0003897b) popup_clock_digital_window_cp02_t1_ParamLimits

0x9a14,	// (0x0003897b) popup_clock_digital_window_cp02_t1

0xdd3d,	// (0x0003cca4) clock_digital_number_pane_cp10_g1

0xdd3d,	// (0x0003cca4) clock_digital_number_pane_cp10_g2

0x0001,

0xf78f,	// (0x0003e6f6) clock_digital_number_pane_cp10_g

0xdd3d,	// (0x0003cca4) clock_digital_separator_pane_cp10_g1

0xdd3d,	// (0x0003cca4) clock_digital_separator_pane_g2_cp10

0xe9e1,	// (0x0003d948) navi_pane_vded_g4

0xe9ea,	// (0x0003d951) navi_pane_vded_g5

0xe9f3,	// (0x0003d95a) navi_pane_vded_t1

0xd6bf,	// (0x0003c626) main_vded_pane

0x9b13,	// (0x00038a7a) main_vded_pane_g1

0x9b1f,	// (0x00038a86) main_vded_pane_g2

0x9b29,	// (0x00038a90) main_vded_pane_g3

0x0002,

0xf794,	// (0x0003e6fb) main_vded_pane_g

0x9b33,	// (0x00038a9a) main_vded_pane_t1

0x9b41,	// (0x00038aa8) main_vded_pane_t2

0x0001,

0xf79b,	// (0x0003e702) main_vded_pane_t

0x9b4f,	// (0x00038ab6) vded_slider_pane

0x9b59,	// (0x00038ac0) vded_video_pane

0x1d9a,	// (0x00030d01) vded_video_pane_g1

0x9b63,	// (0x00038aca) vded_video_pane_g2

0xe01a,	// (0x0003cf81) vded_video_pane_g3

0x0002,

0xf7a0,	// (0x0003e707) vded_video_pane_g

0x1da4,	// (0x00030d0b) vded_slider_pane_g1

0x150f,	// (0x00030476) vded_slider_pane_g2

0x1dad,	// (0x00030d14) vded_slider_pane_g3

0x1db6,	// (0x00030d1d) vded_slider_pane_g4

0x1dbf,	// (0x00030d26) vded_slider_pane_g5

0x0004,

0xf7a7,	// (0x0003e70e) vded_slider_pane_g

0x9716,	// (0x0003867d) mup3_rocker_pane_ParamLimits

0x9716,	// (0x0003867d) mup3_rocker_pane

0x9b6c,	// (0x00038ad3) mup3_control_keys_pane_g1

0x9b74,	// (0x00038adb) mup3_control_keys_pane_g2

0x9b7c,	// (0x00038ae3) mup3_control_keys_pane_g3

0x9b84,	// (0x00038aeb) mup3_control_keys_pane_g4

0x0003,

0xf7b2,	// (0x0003e719) mup3_control_keys_pane_g

0x6072,	// (0x00034fd9) popup_toolbar2_fixed_window_cp01_ParamLimits

0x6072,	// (0x00034fd9) popup_toolbar2_fixed_window_cp01

0x9730,	// (0x00038697) popup_toolbar2_fixed_window_cp02_ParamLimits

0x9730,	// (0x00038697) popup_toolbar2_fixed_window_cp02

0x06a0,	// (0x0002f607) popup_call2_audio_second_window_t4_ParamLimits

0x06a0,	// (0x0002f607) popup_call2_audio_second_window_t4

0x0bdc,	// (0x0002fb43) popup_call2_audio_first_window_t6_ParamLimits

0x0bdc,	// (0x0002fb43) popup_call2_audio_first_window_t6

0x0e1a,	// (0x0002fd81) popup_call2_audio_out_window_t6_ParamLimits

0x0e1a,	// (0x0002fd81) popup_call2_audio_out_window_t6

0xd6bf,	// (0x0003c626) main_vitu_pane

0xd6c9,	// (0x0003c630) aid_size_cell_itu_ParamLimits

0xd6c9,	// (0x0003c630) aid_size_cell_itu

0xd6c9,	// (0x0003c630) bg_popup_window_pane_cp08_ParamLimits

0xd6c9,	// (0x0003c630) bg_popup_window_pane_cp08

0xd6c9,	// (0x0003c630) field_vitu_entry_pane_ParamLimits

0xd6c9,	// (0x0003c630) field_vitu_entry_pane

0xd6c9,	// (0x0003c630) grid_vitu_function_pane_ParamLimits

0xd6c9,	// (0x0003c630) grid_vitu_function_pane

0xd6c9,	// (0x0003c630) grid_vitu_itu_pane_ParamLimits

0xd6c9,	// (0x0003c630) grid_vitu_itu_pane

0xd6c9,	// (0x0003c630) cell_vitu_itu_pane_ParamLimits

0xd6c9,	// (0x0003c630) cell_vitu_itu_pane

0xd6c9,	// (0x0003c630) cell_vitu_function_pane_ParamLimits

0xd6c9,	// (0x0003c630) cell_vitu_function_pane

0xdd67,	// (0x0003ccce) bg_popup_sub_pane_cp08_ParamLimits

0xdd67,	// (0x0003ccce) bg_popup_sub_pane_cp08

0xe034,	// (0x0003cf9b) field_vitu_entry_pane_t1_ParamLimits

0xe034,	// (0x0003cf9b) field_vitu_entry_pane_t1

0x1dc8,	// (0x00030d2f) field_vitu_entry_pane_t2_ParamLimits

0x1dc8,	// (0x00030d2f) field_vitu_entry_pane_t2

0x0001,

0xf7bb,	// (0x0003e722) field_vitu_entry_pane_t_ParamLimits

0xf7bb,	// (0x0003e722) field_vitu_entry_pane_t

0x15a3,	// (0x0003050a) bg_button_pane_cp05_ParamLimits

0x15a3,	// (0x0003050a) bg_button_pane_cp05

0x1de5,	// (0x00030d4c) cell_vitu_itu_pane_g1

0xf02d,	// (0x0003df94) cell_vitu_itu_pane_t1_ParamLimits

0xf02d,	// (0x0003df94) cell_vitu_itu_pane_t1

0xf02d,	// (0x0003df94) cell_vitu_itu_pane_t2_ParamLimits

0xf02d,	// (0x0003df94) cell_vitu_itu_pane_t2

0x0002,

0xf7c0,	// (0x0003e727) cell_vitu_itu_pane_t_ParamLimits

0xf7c0,	// (0x0003e727) cell_vitu_itu_pane_t

0xd6bf,	// (0x0003c626) bg_button_pane_cp07

0xe01a,	// (0x0003cf81) cell_vitu_function_pane_g1

0x61df,	// (0x00035146) main_calc_pane_g1

0x5e30,	// (0x00034d97) aid_visual_content_pane

0xd6bf,	// (0x0003c626) main_vradio_pane

0xddce,	// (0x0003cd35) main_vradio_pane_g1_ParamLimits

0xddce,	// (0x0003cd35) main_vradio_pane_g1

0xddce,	// (0x0003cd35) main_vradio_pane_g2_ParamLimits

0xddce,	// (0x0003cd35) main_vradio_pane_g2

0x0001,

0xf7c7,	// (0x0003e72e) main_vradio_pane_g_ParamLimits

0xf7c7,	// (0x0003e72e) main_vradio_pane_g

0xdfec,	// (0x0003cf53) main_vradio_pane_t1_ParamLimits

0xdfec,	// (0x0003cf53) main_vradio_pane_t1

0xdfec,	// (0x0003cf53) main_vradio_pane_t2_ParamLimits

0xdfec,	// (0x0003cf53) main_vradio_pane_t2

0xdfec,	// (0x0003cf53) main_vradio_pane_t3_ParamLimits

0xdfec,	// (0x0003cf53) main_vradio_pane_t3

0x0002,

0xf7cc,	// (0x0003e733) main_vradio_pane_t_ParamLimits

0xf7cc,	// (0x0003e733) main_vradio_pane_t

0xd6c9,	// (0x0003c630) vradio_rocker_control_pane_ParamLimits

0xd6c9,	// (0x0003c630) vradio_rocker_control_pane

0xd6c9,	// (0x0003c630) vradio_station_info_pane_ParamLimits

0xd6c9,	// (0x0003c630) vradio_station_info_pane

0xdd67,	// (0x0003ccce) vradio_frequency_info_pane_ParamLimits

0xdd67,	// (0x0003ccce) vradio_frequency_info_pane

0xe01a,	// (0x0003cf81) vradio_station_info_pane_g1

0xf02d,	// (0x0003df94) vradio_station_info_pane_t1_ParamLimits

0xf02d,	// (0x0003df94) vradio_station_info_pane_t1

0xdfec,	// (0x0003cf53) vradio_station_info_pane_t2_ParamLimits

0xdfec,	// (0x0003cf53) vradio_station_info_pane_t2

0x0001,

0xf7d3,	// (0x0003e73a) vradio_station_info_pane_t_ParamLimits

0xf7d3,	// (0x0003e73a) vradio_station_info_pane_t

0xd6bf,	// (0x0003c626) vradio_tuning_pane

0x9b94,	// (0x00038afb) vradio_rocker_control_pane_g1

0x1e01,	// (0x00030d68) vradio_rocker_control_pane_g2

0x9b9c,	// (0x00038b03) vradio_rocker_control_pane_g3

0x9ba4,	// (0x00038b0b) vradio_rocker_control_pane_g4

0x9bac,	// (0x00038b13) vradio_rocker_control_pane_g5

0x0004,

0xf7d8,	// (0x0003e73f) vradio_rocker_control_pane_g

0xe01a,	// (0x0003cf81) vradio_frequency_info_pane_g1

0xe034,	// (0x0003cf9b) vradio_frequency_info_pane_t1_ParamLimits

0xe034,	// (0x0003cf9b) vradio_frequency_info_pane_t1

0x9bb4,	// (0x00038b1b) vradio_tuning_pane_g1

0x9bc1,	// (0x00038b28) vradio_tuning_pane_t1

0x5e79,	// (0x00034de0) area_side_right_pane_ParamLimits

0x5e79,	// (0x00034de0) area_side_right_pane

0x1244,	// (0x000301ab) status_small_pane_g1

0x124c,	// (0x000301b3) status_small_pane_g2

0x1255,	// (0x000301bc) status_small_pane_g3

0x125e,	// (0x000301c5) status_small_pane_g4

0x0003,

0xf5a4,	// (0x0003e50b) status_small_pane_g

0x1267,	// (0x000301ce) status_small_pane_t1

0xd6bf,	// (0x0003c626) main_video3_pane

0x1e09,	// (0x00030d70) cams_zoom_vslider_pane

0x1e11,	// (0x00030d78) image3_wide_pane_ParamLimits

0x1e11,	// (0x00030d78) image3_wide_pane

0x1e2b,	// (0x00030d92) image3_wide_small_pane

0x1e37,	// (0x00030d9e) main_video3_pane_g1_ParamLimits

0x1e37,	// (0x00030d9e) main_video3_pane_g1

0x1e53,	// (0x00030dba) main_video3_pane_g2_ParamLimits

0x1e53,	// (0x00030dba) main_video3_pane_g2

0x0001,

0xf7e3,	// (0x0003e74a) main_video3_pane_g_ParamLimits

0xf7e3,	// (0x0003e74a) main_video3_pane_g

0x1e6f,	// (0x00030dd6) main_video3_pane_t1_ParamLimits

0x1e6f,	// (0x00030dd6) main_video3_pane_t1

0x1e9a,	// (0x00030e01) main_video3_pane_t2_ParamLimits

0x1e9a,	// (0x00030e01) main_video3_pane_t2

0x1ec5,	// (0x00030e2c) main_video3_pane_t3_ParamLimits

0x1ec5,	// (0x00030e2c) main_video3_pane_t3

0x0002,

0xf7e8,	// (0x0003e74f) main_video3_pane_t_ParamLimits

0xf7e8,	// (0x0003e74f) main_video3_pane_t

0x1ef2,	// (0x00030e59) cams_zoom_vslider_pane_g1

0x1efb,	// (0x00030e62) cams_zoom_vslider_pane_g2

0x0001,

0xf7ef,	// (0x0003e756) cams_zoom_vslider_pane_g

0x1f03,	// (0x00030e6a) small_slider_vertical_pane

0xe01a,	// (0x0003cf81) small_slider_vertical_pane_g1

0xe01a,	// (0x0003cf81) small_slider_vertical_pane_g2

0x1f0b,	// (0x00030e72) small_slider_vertical_pane_g3

0x0002,

0xf7f4,	// (0x0003e75b) small_slider_vertical_pane_g

0xd6bf,	// (0x0003c626) main_hwr_training_pane

0x1f14,	// (0x00030e7b) hwr_training_instruct_pane_ParamLimits

0x1f14,	// (0x00030e7b) hwr_training_instruct_pane

0x9bd0,	// (0x00038b37) hwr_training_navi_pane_ParamLimits

0x9bd0,	// (0x00038b37) hwr_training_navi_pane

0x9bea,	// (0x00038b51) hwr_training_write_pane_ParamLimits

0x9bea,	// (0x00038b51) hwr_training_write_pane

0xd6bf,	// (0x0003c626) bg_frame_shadow_pane

0x1f4b,	// (0x00030eb2) hwr_training_write_pane_g1

0x1f53,	// (0x00030eba) hwr_training_write_pane_g2

0x1f5b,	// (0x00030ec2) hwr_training_write_pane_g3

0x1f63,	// (0x00030eca) hwr_training_write_pane_g4

0x1f6b,	// (0x00030ed2) hwr_training_write_pane_g5

0x1f73,	// (0x00030eda) hwr_training_write_pane_g6

0x1f7b,	// (0x00030ee2) hwr_training_write_pane_g7

0x0006,

0xf7fb,	// (0x0003e762) hwr_training_write_pane_g

0x9c22,	// (0x00038b89) hwr_training_navi_pane_g1_ParamLimits

0x9c22,	// (0x00038b89) hwr_training_navi_pane_g1

0x9c34,	// (0x00038b9b) hwr_training_navi_pane_g2_ParamLimits

0x9c34,	// (0x00038b9b) hwr_training_navi_pane_g2

0x9c46,	// (0x00038bad) hwr_training_navi_pane_g3_ParamLimits

0x9c46,	// (0x00038bad) hwr_training_navi_pane_g3

0x9c56,	// (0x00038bbd) hwr_training_navi_pane_g4_ParamLimits

0x9c56,	// (0x00038bbd) hwr_training_navi_pane_g4

0x0004,

0xf80a,	// (0x0003e771) hwr_training_navi_pane_g_ParamLimits

0xf80a,	// (0x0003e771) hwr_training_navi_pane_g

0x9c70,	// (0x00038bd7) hwr_training_navi_pane_t1

0x9c7e,	// (0x00038be5) list_single_hwr_training_instruct_pane_ParamLimits

0x9c7e,	// (0x00038be5) list_single_hwr_training_instruct_pane

0x1fd2,	// (0x00030f39) list_single_hwr_training_instruct_pane_t1

0x16fd,	// (0x00030664) bg_frame_shadow_pane_g1

0x1fe1,	// (0x00030f48) bg_frame_shadow_pane_g2

0x1fe9,	// (0x00030f50) bg_frame_shadow_pane_g3

0x1ff1,	// (0x00030f58) bg_frame_shadow_pane_g4

0x1ff9,	// (0x00030f60) bg_frame_shadow_pane_g5

0x2001,	// (0x00030f68) bg_frame_shadow_pane_g6

0x2009,	// (0x00030f70) bg_frame_shadow_pane_g7

0xdee1,	// (0x0003ce48) bg_frame_shadow_pane_g8

0x0007,

0xf815,	// (0x0003e77c) bg_frame_shadow_pane_g

0xd6bf,	// (0x0003c626) main_video_tele_dialer_pane

0x9ca7,	// (0x00038c0e) aid_size_cell_video_keypad_ParamLimits

0x9ca7,	// (0x00038c0e) aid_size_cell_video_keypad

0x9cb7,	// (0x00038c1e) grid_video_dialer_keypad_pane_ParamLimits

0x9cb7,	// (0x00038c1e) grid_video_dialer_keypad_pane

0x9ceb,	// (0x00038c52) video_down_pane_cp_ParamLimits

0x9ceb,	// (0x00038c52) video_down_pane_cp

0x9d15,	// (0x00038c7c) cell_video_dialer_keypad_pane_ParamLimits

0x9d15,	// (0x00038c7c) cell_video_dialer_keypad_pane

0x2011,	// (0x00030f78) bg_button_pane_cp08_ParamLimits

0x2011,	// (0x00030f78) bg_button_pane_cp08

0x9d2a,	// (0x00038c91) cell_video_dialer_keypad_pane_g1_ParamLimits

0x9d2a,	// (0x00038c91) cell_video_dialer_keypad_pane_g1

0x970a,	// (0x00038671) mup3_rocker2_pane_ParamLimits

0x970a,	// (0x00038671) mup3_rocker2_pane

0xe01a,	// (0x0003cf81) mup3_rocker2_pane_g1

0x8be7,	// (0x00037b4e) main_dialer2_pane

0xd6bf,	// (0x0003c626) main_mp4_pane

0x9d82,	// (0x00038ce9) main_mp4_pane_g1_ParamLimits

0x9d82,	// (0x00038ce9) main_mp4_pane_g1

0x9d90,	// (0x00038cf7) main_mp4_pane_g2_ParamLimits

0x9d90,	// (0x00038cf7) main_mp4_pane_g2

0x9d9e,	// (0x00038d05) main_mp4_pane_g3_ParamLimits

0x9d9e,	// (0x00038d05) main_mp4_pane_g3

0x9de3,	// (0x00038d4a) main_mp4_pane_g4_ParamLimits

0x9de3,	// (0x00038d4a) main_mp4_pane_g4

0x9e11,	// (0x00038d78) main_mp4_pane_g5_ParamLimits

0x9e11,	// (0x00038d78) main_mp4_pane_g5

0x0007,

0xf835,	// (0x0003e79c) main_mp4_pane_g_ParamLimits

0xf835,	// (0x0003e79c) main_mp4_pane_g

0x9e85,	// (0x00038dec) main_mp4_pane_t1_ParamLimits

0x9e85,	// (0x00038dec) main_mp4_pane_t1

0x9ee1,	// (0x00038e48) main_mp4_pane_t2_ParamLimits

0x9ee1,	// (0x00038e48) main_mp4_pane_t2

0x2199,	// (0x00031100) main_mp4_pane_t3_ParamLimits

0x2199,	// (0x00031100) main_mp4_pane_t3

0x9f33,	// (0x00038e9a) main_mp4_pane_t4_ParamLimits

0x9f33,	// (0x00038e9a) main_mp4_pane_t4

0x0003,

0xf846,	// (0x0003e7ad) main_mp4_pane_t_ParamLimits

0xf846,	// (0x0003e7ad) main_mp4_pane_t

0x9f77,	// (0x00038ede) mp4_progress_pane_ParamLimits

0x9f77,	// (0x00038ede) mp4_progress_pane

0x9fc1,	// (0x00038f28) mp4_rocker_pane_ParamLimits

0x9fc1,	// (0x00038f28) mp4_rocker_pane

0x2275,	// (0x000311dc) mp4_progress_pane_t1

0x228e,	// (0x000311f5) mp4_progress_pane_t2

0x0001,

0xf84f,	// (0x0003e7b6) mp4_progress_pane_t

0x22a7,	// (0x0003120e) mup_progress_pane_cp04

0xe01a,	// (0x0003cf81) mp4_rocker_pane_g1

0x9fe1,	// (0x00038f48) aid_cell_size_keypad2_ParamLimits

0x9fe1,	// (0x00038f48) aid_cell_size_keypad2

0x9ff1,	// (0x00038f58) dialer2_ne_pane_ParamLimits

0x9ff1,	// (0x00038f58) dialer2_ne_pane

0x9fff,	// (0x00038f66) grid_dialer2_keypad_pane_ParamLimits

0x9fff,	// (0x00038f66) grid_dialer2_keypad_pane

0x2cf1,	// (0x00031c58) bg_popup_call_pane_cp07_ParamLimits

0x2cf1,	// (0x00031c58) bg_popup_call_pane_cp07

0xa00f,	// (0x00038f76) dialer2_ne_pane_t1_ParamLimits

0xa00f,	// (0x00038f76) dialer2_ne_pane_t1

0xa034,	// (0x00038f9b) cell_dialer2_keypad_pane_ParamLimits

0xa034,	// (0x00038f9b) cell_dialer2_keypad_pane

0x22cc,	// (0x00031233) bg_button_pane_pane_cp04_ParamLimits

0x22cc,	// (0x00031233) bg_button_pane_pane_cp04

0xa049,	// (0x00038fb0) cell_dialer2_keypad_pane_g1_ParamLimits

0xa049,	// (0x00038fb0) cell_dialer2_keypad_pane_g1

0x6b9e,	// (0x00035b05) aid_placing_vt_set_content_ParamLimits

0x6b9e,	// (0x00035b05) aid_placing_vt_set_content

0x6bca,	// (0x00035b31) aid_placing_vt_set_title_ParamLimits

0x6bca,	// (0x00035b31) aid_placing_vt_set_title

0xd6bf,	// (0x0003c626) main_image3_pane

0xa0e3,	// (0x0003904a) area_side_right_pane_cp01_ParamLimits

0xa0e3,	// (0x0003904a) area_side_right_pane_cp01

0xdddc,	// (0x0003cd43) main_image3_pane_g1_ParamLimits

0xdddc,	// (0x0003cd43) main_image3_pane_g1

0xa110,	// (0x00039077) main_image3_pane_g2_ParamLimits

0xa110,	// (0x00039077) main_image3_pane_g2

0xa129,	// (0x00039090) main_image3_pane_g3_ParamLimits

0xa129,	// (0x00039090) main_image3_pane_g3

0xa142,	// (0x000390a9) main_image3_pane_g4_ParamLimits

0xa142,	// (0x000390a9) main_image3_pane_g4

0x0003,

0xf85e,	// (0x0003e7c5) main_image3_pane_g_ParamLimits

0xf85e,	// (0x0003e7c5) main_image3_pane_g

0xa15b,	// (0x000390c2) main_image3_pane_t1_ParamLimits

0xa15b,	// (0x000390c2) main_image3_pane_t1

0xa180,	// (0x000390e7) main_image3_pane_t2_ParamLimits

0xa180,	// (0x000390e7) main_image3_pane_t2

0xa19f,	// (0x00039106) main_image3_pane_t3_ParamLimits

0xa19f,	// (0x00039106) main_image3_pane_t3

0x0003,

0xf867,	// (0x0003e7ce) main_image3_pane_t_ParamLimits

0xf867,	// (0x0003e7ce) main_image3_pane_t

0xd6c9,	// (0x0003c630) grid_sctrl_middle_pane_cp01_ParamLimits

0xd6c9,	// (0x0003c630) grid_sctrl_middle_pane_cp01

0xa200,	// (0x00039167) cell_sctrl_middle_pane_cp01_ParamLimits

0xa200,	// (0x00039167) cell_sctrl_middle_pane_cp01

0xa211,	// (0x00039178) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0xa211,	// (0x00039178) cell_sctrl_middle_pane_cp01_g1

0xd6bf,	// (0x0003c626) main_call4_pane

0xa21e,	// (0x00039185) aid_size_button_call4_ParamLimits

0xa21e,	// (0x00039185) aid_size_button_call4

0xa254,	// (0x000391bb) call4_windows_pane_ParamLimits

0xa254,	// (0x000391bb) call4_windows_pane

0xa269,	// (0x000391d0) grid_call4_button_pane_ParamLimits

0xa269,	// (0x000391d0) grid_call4_button_pane

0xa297,	// (0x000391fe) call4_windows_conf_pane

0xa2ac,	// (0x00039213) popup_call4_audio_first_window_ParamLimits

0xa2ac,	// (0x00039213) popup_call4_audio_first_window

0xa2fc,	// (0x00039263) popup_call4_audio_second_window_ParamLimits

0xa2fc,	// (0x00039263) popup_call4_audio_second_window

0xa315,	// (0x0003927c) popup_call4_audio_wait_window_ParamLimits

0xa315,	// (0x0003927c) popup_call4_audio_wait_window

0xa323,	// (0x0003928a) cell_call4_button_pane_ParamLimits

0xa323,	// (0x0003928a) cell_call4_button_pane

0xa346,	// (0x000392ad) bg_button_pane_cp09_ParamLimits

0xa346,	// (0x000392ad) bg_button_pane_cp09

0xa352,	// (0x000392b9) cell_call4_button_pane_g1_ParamLimits

0xa352,	// (0x000392b9) cell_call4_button_pane_g1

0xa35f,	// (0x000392c6) cell_call4_button_pane_t1_ParamLimits

0xa35f,	// (0x000392c6) cell_call4_button_pane_t1

0x2344,	// (0x000312ab) popup_call4_audio_conf_window_ParamLimits

0x2344,	// (0x000312ab) popup_call4_audio_conf_window

0x973d,	// (0x000386a4) mup3_progress_pane_t1_ParamLimits

0x975c,	// (0x000386c3) mup3_progress_pane_t2_ParamLimits

0x1adb,	// (0x00030a42) mup3_progress_pane_t3_ParamLimits

0xf73c,	// (0x0003e6a3) mup3_progress_pane_t_ParamLimits

0x1af8,	// (0x00030a5f) mup_progress_pane_cp03_ParamLimits

0x9b8c,	// (0x00038af3) mup3_control_keys_pane_g4_copy1

0x9fa5,	// (0x00038f0c) mp4_rocker2_pane_ParamLimits

0x9fa5,	// (0x00038f0c) mp4_rocker2_pane

0x2360,	// (0x000312c7) mp4_rocker2_pane_g1

0x2358,	// (0x000312bf) mp4_rocker2_pane_g2

0xa3a3,	// (0x0003930a) mp4_rocker2_pane_g3

0xa3ab,	// (0x00039312) mp4_rocker2_pane_g4

0xa3b3,	// (0x0003931a) mp4_rocker2_pane_g5

0x0004,

0xf870,	// (0x0003e7d7) mp4_rocker2_pane_g

0xd6bf,	// (0x0003c626) main_camera4_pane

0xd6bf,	// (0x0003c626) main_video4_pane

0x9cc7,	// (0x00038c2e) main_video_tele_dialer_pane_t1_ParamLimits

0x9cc7,	// (0x00038c2e) main_video_tele_dialer_pane_t1

0x9cd9,	// (0x00038c40) main_video_tele_dialer_pane_t2_ParamLimits

0x9cd9,	// (0x00038c40) main_video_tele_dialer_pane_t2

0x0001,

0xf826,	// (0x0003e78d) main_video_tele_dialer_pane_t_ParamLimits

0xf826,	// (0x0003e78d) main_video_tele_dialer_pane_t

0xa3d3,	// (0x0003933a) cam4_autofocus_pane_ParamLimits

0xa3d3,	// (0x0003933a) cam4_autofocus_pane

0xa3ed,	// (0x00039354) cam4_image_uncrop_pane_ParamLimits

0xa3ed,	// (0x00039354) cam4_image_uncrop_pane

0xa404,	// (0x0003936b) cam4_indicators_pane_ParamLimits

0xa404,	// (0x0003936b) cam4_indicators_pane

0xa420,	// (0x00039387) main_camera4_pane_g1_ParamLimits

0xa420,	// (0x00039387) main_camera4_pane_g1

0xa42c,	// (0x00039393) main_camera4_pane_g2_ParamLimits

0xa42c,	// (0x00039393) main_camera4_pane_g2

0xa42c,	// (0x00039393) main_camera4_pane_g3_ParamLimits

0xa42c,	// (0x00039393) main_camera4_pane_g3

0xa438,	// (0x0003939f) main_camera4_pane_g4_ParamLimits

0xa438,	// (0x0003939f) main_camera4_pane_g4

0xa444,	// (0x000393ab) main_camera4_pane_g5_ParamLimits

0xa444,	// (0x000393ab) main_camera4_pane_g5

0x0005,

0xf87b,	// (0x0003e7e2) main_camera4_pane_g_ParamLimits

0xf87b,	// (0x0003e7e2) main_camera4_pane_g

0xa45e,	// (0x000393c5) main_camera4_pane_t1_ParamLimits

0xa45e,	// (0x000393c5) main_camera4_pane_t1

0xddc0,	// (0x0003cd27) bg_tb_trans_pane_cp06

0xa4ae,	// (0x00039415) cam4_indicators_pane_g1

0xa4bf,	// (0x00039426) cam4_indicators_pane_g2

0x0002,

0xf896,	// (0x0003e7fd) cam4_indicators_pane_g

0xa4d7,	// (0x0003943e) cam4_indicators_pane_t1

0xa501,	// (0x00039468) main_video4_pane_g1_ParamLimits

0xa501,	// (0x00039468) main_video4_pane_g1

0xa50d,	// (0x00039474) main_video4_pane_g2_ParamLimits

0xa50d,	// (0x00039474) main_video4_pane_g2

0xa519,	// (0x00039480) main_video4_pane_g3_ParamLimits

0xa519,	// (0x00039480) main_video4_pane_g3

0xa525,	// (0x0003948c) main_video4_pane_g4_ParamLimits

0xa525,	// (0x0003948c) main_video4_pane_g4

0x0004,

0xf89d,	// (0x0003e804) main_video4_pane_g_ParamLimits

0xf89d,	// (0x0003e804) main_video4_pane_g

0xa545,	// (0x000394ac) vid4_indicators_pane_ParamLimits

0xa545,	// (0x000394ac) vid4_indicators_pane

0xa564,	// (0x000394cb) video4_image_uncrop_cif_pane_ParamLimits

0xa564,	// (0x000394cb) video4_image_uncrop_cif_pane

0xa573,	// (0x000394da) video4_image_uncrop_nhd_pane_ParamLimits

0xa573,	// (0x000394da) video4_image_uncrop_nhd_pane

0xa3ed,	// (0x00039354) video4_image_uncrop_vga_pane_ParamLimits

0xa3ed,	// (0x00039354) video4_image_uncrop_vga_pane

0xdd67,	// (0x0003ccce) bg_tb_trans_pane_cp07

0xa588,	// (0x000394ef) vid4_indicators_pane_g1

0xa59c,	// (0x00039503) vid4_indicators_pane_g2

0xa5b0,	// (0x00039517) vid4_indicators_pane_g3

0x0004,

0xf8a8,	// (0x0003e80f) vid4_indicators_pane_g

0xa5dd,	// (0x00039544) vid4_indicators_pane_t1

0xa5f4,	// (0x0003955b) cam4_autofocus_pane_g1

0xa5fc,	// (0x00039563) cam4_autofocus_pane_g2

0xa604,	// (0x0003956b) cam4_autofocus_pane_g3

0x0002,

0xf8b3,	// (0x0003e81a) cam4_autofocus_pane_g

0xa60c,	// (0x00039573) cam4_autofocus_pane_g3_copy1

0x9cf9,	// (0x00038c60) video_down_pane_cp_t1

0x9d07,	// (0x00038c6e) video_down_pane_cp_t2

0x0001,

0xf82b,	// (0x0003e792) video_down_pane_cp_t

0xd6c9,	// (0x0003c630) popup_vitu2_window_ParamLimits

0xd6c9,	// (0x0003c630) popup_vitu2_window

0xa614,	// (0x0003957b) aid_size_cell2_itu2_ParamLimits

0xa614,	// (0x0003957b) aid_size_cell2_itu2

0xa630,	// (0x00039597) aid_size_cell_itu2_ParamLimits

0xa630,	// (0x00039597) aid_size_cell_itu2

0x2cf1,	// (0x00031c58) bg_popup_window_pane_cp09_ParamLimits

0x2cf1,	// (0x00031c58) bg_popup_window_pane_cp09

0xa66a,	// (0x000395d1) field_vitu2_entry_pane_ParamLimits

0xa66a,	// (0x000395d1) field_vitu2_entry_pane

0xa688,	// (0x000395ef) grid_vitu2_function_pane_ParamLimits

0xa688,	// (0x000395ef) grid_vitu2_function_pane

0xa6c8,	// (0x0003962f) grid_vitu2_itu_pane_ParamLimits

0xa6c8,	// (0x0003962f) grid_vitu2_itu_pane

0xa72c,	// (0x00039693) cell_vitu2_itu_pane_ParamLimits

0xa72c,	// (0x00039693) cell_vitu2_itu_pane

0xa745,	// (0x000396ac) cell_vitu2_function_pane_ParamLimits

0xa745,	// (0x000396ac) cell_vitu2_function_pane

0x2471,	// (0x000313d8) bg_popup_call_pane_cp08_ParamLimits

0x2471,	// (0x000313d8) bg_popup_call_pane_cp08

0x2488,	// (0x000313ef) field_vitu2_entry_pane_g1

0x2494,	// (0x000313fb) field_vitu2_entry_pane_g2

0x0002,

0xf8ba,	// (0x0003e821) field_vitu2_entry_pane_g

0x524e,	// (0x000341b5) field_vitu2_entry_pane_t1_ParamLimits

0x524e,	// (0x000341b5) field_vitu2_entry_pane_t1

0x5283,	// (0x000341ea) field_vitu2_entry_pane_t2_ParamLimits

0x5283,	// (0x000341ea) field_vitu2_entry_pane_t2

0x0001,

0xf8c1,	// (0x0003e828) field_vitu2_entry_pane_t_ParamLimits

0xf8c1,	// (0x0003e828) field_vitu2_entry_pane_t

0x8f1d,	// (0x00037e84) bg_button_pane_cp010_ParamLimits

0x8f1d,	// (0x00037e84) bg_button_pane_cp010

0xa786,	// (0x000396ed) cell_vitu2_itu_pane_g1

0xa7ac,	// (0x00039713) cell_vitu2_itu_pane_t1_ParamLimits

0xa7ac,	// (0x00039713) cell_vitu2_itu_pane_t1

0x52a0,	// (0x00034207) cell_vitu2_itu_pane_t2_ParamLimits

0x52a0,	// (0x00034207) cell_vitu2_itu_pane_t2

0x0002,

0xf8cb,	// (0x0003e832) cell_vitu2_itu_pane_t_ParamLimits

0xf8cb,	// (0x0003e832) cell_vitu2_itu_pane_t

0xdd67,	// (0x0003ccce) bg_button_pane_cp011

0xa7f8,	// (0x0003975f) cell_vitu2_function_pane_g1

0xd6bf,	// (0x0003c626) main_myfav_hc_pane

0xa1e1,	// (0x00039148) popup_image3_note_pane_ParamLimits

0xa1e1,	// (0x00039148) popup_image3_note_pane

0xa1ef,	// (0x00039156) popup_image3_tool_bar_pane_ParamLimits

0xa1ef,	// (0x00039156) popup_image3_tool_bar_pane

0x5316,	// (0x0003427d) cell_vitu2_itu_pane_t3_ParamLimits

0x5316,	// (0x0003427d) cell_vitu2_itu_pane_t3

0xd6bf,	// (0x0003c626) bg_popup_trans_pane

0x24c5,	// (0x0003142c) grid_image3_tool_bar_pane

0x24cf,	// (0x00031436) bg_popup_trans_pane_g1

0xe23f,	// (0x0003d1a6) bg_popup_trans_pane_g2

0x24d7,	// (0x0003143e) bg_popup_trans_pane_g3

0x24df,	// (0x00031446) bg_popup_trans_pane_g4

0x24e7,	// (0x0003144e) bg_popup_trans_pane_g5

0x24ef,	// (0x00031456) bg_popup_trans_pane_g6

0x24f7,	// (0x0003145e) bg_popup_trans_pane_g7

0x24ff,	// (0x00031466) bg_popup_trans_pane_g8

0xe21f,	// (0x0003d186) bg_popup_trans_pane_g9

0x0008,

0xf8d2,	// (0x0003e839) bg_popup_trans_pane_g

0x2507,	// (0x0003146e) cell_image3_tool_bar_pane_ParamLimits

0x2507,	// (0x0003146e) cell_image3_tool_bar_pane

0xe01a,	// (0x0003cf81) cell_image3_tool_bar_pane_g1

0xd6bf,	// (0x0003c626) bg_popup_trans_pane_cp1

0x251b,	// (0x00031482) popup_image3_note_pane_t1

0x2529,	// (0x00031490) popup_image3_note_pane_t2

0x2537,	// (0x0003149e) popup_image3_note_pane_t3

0x0002,

0xf8e5,	// (0x0003e84c) popup_image3_note_pane_t

0x2545,	// (0x000314ac) popup_image3_note_pane_t3_copy1

0xa80c,	// (0x00039773) bg_myfav_hc_instruction_pane_ParamLimits

0xa80c,	// (0x00039773) bg_myfav_hc_instruction_pane

0xa824,	// (0x0003978b) cell_myfav_contact_pane_ParamLimits

0xa824,	// (0x0003978b) cell_myfav_contact_pane

0xa83e,	// (0x000397a5) cell_myfav_contact_pane_cp1_ParamLimits

0xa83e,	// (0x000397a5) cell_myfav_contact_pane_cp1

0xa856,	// (0x000397bd) cell_myfav_contact_pane_cp2_ParamLimits

0xa856,	// (0x000397bd) cell_myfav_contact_pane_cp2

0xa86e,	// (0x000397d5) cell_myfav_contact_pane_cp3_ParamLimits

0xa86e,	// (0x000397d5) cell_myfav_contact_pane_cp3

0xa885,	// (0x000397ec) cell_myfav_contact_pane_cp4_ParamLimits

0xa885,	// (0x000397ec) cell_myfav_contact_pane_cp4

0xa89b,	// (0x00039802) cell_myfav_contact_pane_cp5_ParamLimits

0xa89b,	// (0x00039802) cell_myfav_contact_pane_cp5

0xa8af,	// (0x00039816) cell_myfav_contact_pane_cp6_ParamLimits

0xa8af,	// (0x00039816) cell_myfav_contact_pane_cp6

0xa8c3,	// (0x0003982a) cell_myfav_contact_pane_cp7_ParamLimits

0xa8c3,	// (0x0003982a) cell_myfav_contact_pane_cp7

0x2553,	// (0x000314ba) listscroll_gen_pane_cp05

0xa8db,	// (0x00039842) main_myfav_hc_pane_g1_ParamLimits

0xa8db,	// (0x00039842) main_myfav_hc_pane_g1

0xa8f1,	// (0x00039858) main_myfav_hc_pane_g2_ParamLimits

0xa8f1,	// (0x00039858) main_myfav_hc_pane_g2

0x0002,

0xf8ec,	// (0x0003e853) main_myfav_hc_pane_g_ParamLimits

0xf8ec,	// (0x0003e853) main_myfav_hc_pane_g

0xa921,	// (0x00039888) main_myfav_hc_pane_t1_ParamLimits

0xa921,	// (0x00039888) main_myfav_hc_pane_t1

0x255c,	// (0x000314c3) main_myfav_hc_pane_t2_ParamLimits

0x255c,	// (0x000314c3) main_myfav_hc_pane_t2

0x256e,	// (0x000314d5) main_myfav_hc_pane_t3_ParamLimits

0x256e,	// (0x000314d5) main_myfav_hc_pane_t3

0xa938,	// (0x0003989f) main_myfav_hc_pane_t4_ParamLimits

0xa938,	// (0x0003989f) main_myfav_hc_pane_t4

0x0004,

0xf8f3,	// (0x0003e85a) main_myfav_hc_pane_t_ParamLimits

0xf8f3,	// (0x0003e85a) main_myfav_hc_pane_t

0xe01a,	// (0x0003cf81) bg_myfav_hc_instruction_pane_g1

0x2580,	// (0x000314e7) cell_myfav_contact_pane_g1_ParamLimits

0x2580,	// (0x000314e7) cell_myfav_contact_pane_g1

0x2580,	// (0x000314e7) cell_myfav_contact_pane_g2_ParamLimits

0x2580,	// (0x000314e7) cell_myfav_contact_pane_g2

0x258c,	// (0x000314f3) cell_myfav_contact_pane_g3_ParamLimits

0x258c,	// (0x000314f3) cell_myfav_contact_pane_g3

0xddce,	// (0x0003cd35) cell_myfav_contact_pane_g4_ParamLimits

0xddce,	// (0x0003cd35) cell_myfav_contact_pane_g4

0x2599,	// (0x00031500) cell_myfav_contact_pane_g5_ParamLimits

0x2599,	// (0x00031500) cell_myfav_contact_pane_g5

0x0004,

0xf8fe,	// (0x0003e865) cell_myfav_contact_pane_g_ParamLimits

0xf8fe,	// (0x0003e865) cell_myfav_contact_pane_g

0xa909,	// (0x00039870) main_myfav_hc_pane_g3_ParamLimits

0xa909,	// (0x00039870) main_myfav_hc_pane_g3

0x5fad,	// (0x00034f14) popup_adpt_find_window

0xa962,	// (0x000398c9) afind_page_pane_ParamLimits

0xa962,	// (0x000398c9) afind_page_pane

0xa96f,	// (0x000398d6) aid_size_cell_afind_ParamLimits

0xa96f,	// (0x000398d6) aid_size_cell_afind

0xa989,	// (0x000398f0) bg_popup_sub_pane_cp09_ParamLimits

0xa989,	// (0x000398f0) bg_popup_sub_pane_cp09

0xa996,	// (0x000398fd) find_pane_cp01_ParamLimits

0xa996,	// (0x000398fd) find_pane_cp01

0x25a5,	// (0x0003150c) grid_afind_control_pane_ParamLimits

0x25a5,	// (0x0003150c) grid_afind_control_pane

0xa9a3,	// (0x0003990a) grid_afind_pane_ParamLimits

0xa9a3,	// (0x0003990a) grid_afind_pane

0xa9bd,	// (0x00039924) cell_afind_pane_ParamLimits

0xa9bd,	// (0x00039924) cell_afind_pane

0xe01a,	// (0x0003cf81) afind_page_pane_g1

0xaa05,	// (0x0003996c) afind_page_pane_g2

0xaa0e,	// (0x00039975) afind_page_pane_g3

0x0002,

0xf909,	// (0x0003e870) afind_page_pane_g

0xaa17,	// (0x0003997e) afind_page_pane_t1

0x25b9,	// (0x00031520) cell_afind_grid_control_pane_ParamLimits

0x25b9,	// (0x00031520) cell_afind_grid_control_pane

0x22cc,	// (0x00031233) bg_button_pane_cp69_ParamLimits

0x22cc,	// (0x00031233) bg_button_pane_cp69

0xaa37,	// (0x0003999e) cell_afind_pane_g1_ParamLimits

0xaa37,	// (0x0003999e) cell_afind_pane_g1

0xaa44,	// (0x000399ab) cell_afind_pane_t1_ParamLimits

0xaa44,	// (0x000399ab) cell_afind_pane_t1

0xe024,	// (0x0003cf8b) bg_button_pane_cp72

0x25c8,	// (0x0003152f) cell_afind_grid_control_pane_g1

0x8718,	// (0x0003767f) aid_image_placing_area_ParamLimits

0x8718,	// (0x0003767f) aid_image_placing_area

0xddc0,	// (0x0003cd27) field_vitu_entry_pane_g1_ParamLimits

0xddc0,	// (0x0003cd27) field_vitu_entry_pane_g1

0xddc0,	// (0x0003cd27) field_vitu_entry_pane_g2_ParamLimits

0xddc0,	// (0x0003cd27) field_vitu_entry_pane_g2

0x0001,

0xf201,	// (0x0003e168) field_vitu_entry_pane_g_ParamLimits

0xf201,	// (0x0003e168) field_vitu_entry_pane_g

0x1de5,	// (0x00030d4c) cell_vitu_itu_pane_g1_ParamLimits

0x1dc8,	// (0x00030d2f) cell_vitu_itu_pane_t3_ParamLimits

0x1dc8,	// (0x00030d2f) cell_vitu_itu_pane_t3

0x2275,	// (0x000311dc) mp4_progress_pane_t1_ParamLimits

0x228e,	// (0x000311f5) mp4_progress_pane_t2_ParamLimits

0xf84f,	// (0x0003e7b6) mp4_progress_pane_t_ParamLimits

0x22a7,	// (0x0003120e) mup_progress_pane_cp04_ParamLimits

0xa94c,	// (0x000398b3) main_myfav_hc_pane_t5_ParamLimits

0xa94c,	// (0x000398b3) main_myfav_hc_pane_t5

0x5e3c,	// (0x00034da3) aid_zoom_text_primary

0x5fad,	// (0x00034f14) popup_adpt_find_window_ParamLimits

0xdd67,	// (0x0003ccce) main_cam_set_pane

0xa412,	// (0x00039379) cam4_zoom_pane_ParamLimits

0xa412,	// (0x00039379) cam4_zoom_pane

0xaa56,	// (0x000399bd) main_cam_set_pane_g1_ParamLimits

0xaa56,	// (0x000399bd) main_cam_set_pane_g1

0xaa64,	// (0x000399cb) main_cam_set_pane_g2_ParamLimits

0xaa64,	// (0x000399cb) main_cam_set_pane_g2

0x0001,

0xf910,	// (0x0003e877) main_cam_set_pane_g_ParamLimits

0xf910,	// (0x0003e877) main_cam_set_pane_g

0xaa70,	// (0x000399d7) main_cam_set_pane_t1_ParamLimits

0xaa70,	// (0x000399d7) main_cam_set_pane_t1

0xaa8c,	// (0x000399f3) main_cset_listscroll_pane_ParamLimits

0xaa8c,	// (0x000399f3) main_cset_listscroll_pane

0xaabe,	// (0x00039a25) main_cset_slider_pane_ParamLimits

0xaabe,	// (0x00039a25) main_cset_slider_pane

0x25d9,	// (0x00031540) main_cset_list_pane_ParamLimits

0x25d9,	// (0x00031540) main_cset_list_pane

0x25e9,	// (0x00031550) scroll_pane_cp028

0xaadd,	// (0x00039a44) aid_area_touch_slider

0xaaf9,	// (0x00039a60) cset_slider_pane

0xab1c,	// (0x00039a83) main_cset_slider_pane_g1

0xab31,	// (0x00039a98) main_cset_slider_pane_g2

0x0011,

0xf915,	// (0x0003e87c) main_cset_slider_pane_g

0x263a,	// (0x000315a1) main_cset_slider_pane_t1

0xabf7,	// (0x00039b5e) main_cset_slider_pane_t2

0xac11,	// (0x00039b78) main_cset_slider_pane_t3

0xac2b,	// (0x00039b92) main_cset_slider_pane_t4

0xac49,	// (0x00039bb0) main_cset_slider_pane_t5

0xac67,	// (0x00039bce) main_cset_slider_pane_t6

0xac7e,	// (0x00039be5) main_cset_slider_pane_t7

0x000e,

0xf93a,	// (0x0003e8a1) main_cset_slider_pane_t

0xad8c,	// (0x00039cf3) cset_list_set_pane_ParamLimits

0xad8c,	// (0x00039cf3) cset_list_set_pane

0x26d4,	// (0x0003163b) aid_position_infowindow_above

0x26dc,	// (0x00031643) aid_position_infowindow_below

0x5368,	// (0x000342cf) cset_list_set_pane_g1_ParamLimits

0x5368,	// (0x000342cf) cset_list_set_pane_g1

0x5374,	// (0x000342db) cset_list_set_pane_g3_ParamLimits

0x5374,	// (0x000342db) cset_list_set_pane_g3

0x0001,

0xf959,	// (0x0003e8c0) cset_list_set_pane_g_ParamLimits

0xf959,	// (0x0003e8c0) cset_list_set_pane_g

0x5383,	// (0x000342ea) cset_list_set_pane_t1_ParamLimits

0x5383,	// (0x000342ea) cset_list_set_pane_t1

0xdd67,	// (0x0003ccce) list_highlight_pane_cp021_ParamLimits

0xdd67,	// (0x0003ccce) list_highlight_pane_cp021

0xeb32,	// (0x0003da99) cset_slider_pane_g1

0xeb44,	// (0x0003daab) cset_slider_pane_g2

0xeb3b,	// (0x0003daa2) cset_slider_pane_g3

0x0002,

0xf95e,	// (0x0003e8c5) cset_slider_pane_g

0xada5,	// (0x00039d0c) aid_area_touch_cam4_zoom

0xadad,	// (0x00039d14) cam4_zoom_cont_pane

0xadb5,	// (0x00039d1c) cam4_zoom_pane_g1

0xadbd,	// (0x00039d24) cam4_zoom_pane_g2

0xadc5,	// (0x00039d2c) cam4_zoom_pane_g3

0x0002,

0xf965,	// (0x0003e8cc) cam4_zoom_pane_g

0x1f0b,	// (0x00030e72) cam4_zoom_cont_pane_g1

0x3078,	// (0x00031fdf) cam4_zoom_cont_pane_g2

0x3081,	// (0x00031fe8) cam4_zoom_cont_pane_g3

0x0002,

0xf96c,	// (0x0003e8d3) cam4_zoom_cont_pane_g

0xa238,	// (0x0003919f) call4_image_pane_ParamLimits

0xa238,	// (0x0003919f) call4_image_pane

0xa297,	// (0x000391fe) call4_windows_conf_pane_ParamLimits

0xa2da,	// (0x00039241) popup_call4_audio_in_window_ParamLimits

0xa2da,	// (0x00039241) popup_call4_audio_in_window

0xd6bf,	// (0x0003c626) bg_popup_call2_act_pane_cp02

0x233c,	// (0x000312a3) call4_list_conf_pane

0xe01a,	// (0x0003cf81) call4_image_pane_g1

0xe01a,	// (0x0003cf81) call4_image_pane_g2

0x0001,

0xf3dd,	// (0x0003e344) call4_image_pane_g

0x271f,	// (0x00031686) list_single_graphic_popup_conf4_pane_ParamLimits

0x271f,	// (0x00031686) list_single_graphic_popup_conf4_pane

0xd6bf,	// (0x0003c626) list_highlight_pane_cp022

0x2732,	// (0x00031699) list_single_graphic_popup_conf4_pane_g1

0xe751,	// (0x0003d6b8) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf973,	// (0x0003e8da) list_single_graphic_popup_conf4_pane_g

0x273a,	// (0x000316a1) list_single_graphic_popup_conf4_pane_t1

0x6d2e,	// (0x00035c95) popup_vtel_slider_window_ParamLimits

0x6d2e,	// (0x00035c95) popup_vtel_slider_window

0x22ba,	// (0x00031221) dialer2_ne_pane_t2_ParamLimits

0x22ba,	// (0x00031221) dialer2_ne_pane_t2

0x0001,

0xf854,	// (0x0003e7bb) dialer2_ne_pane_t_ParamLimits

0xf854,	// (0x0003e7bb) dialer2_ne_pane_t

0xdd67,	// (0x0003ccce) bg_popup_sub_pane_cp010_ParamLimits

0xdd67,	// (0x0003ccce) bg_popup_sub_pane_cp010

0xadcd,	// (0x00039d34) popup_vtel_slider_window_g1_ParamLimits

0xadcd,	// (0x00039d34) popup_vtel_slider_window_g1

0xadd9,	// (0x00039d40) popup_vtel_slider_window_g2_ParamLimits

0xadd9,	// (0x00039d40) popup_vtel_slider_window_g2

0x0003,

0xf978,	// (0x0003e8df) popup_vtel_slider_window_g_ParamLimits

0xf978,	// (0x0003e8df) popup_vtel_slider_window_g

0xae21,	// (0x00039d88) vtel_slider_pane_ParamLimits

0xae21,	// (0x00039d88) vtel_slider_pane

0xae30,	// (0x00039d97) vtel_slider_pane_g1_ParamLimits

0xae30,	// (0x00039d97) vtel_slider_pane_g1

0xae3d,	// (0x00039da4) vtel_slider_pane_g2_ParamLimits

0xae3d,	// (0x00039da4) vtel_slider_pane_g2

0xae4a,	// (0x00039db1) vtel_slider_pane_g3_ParamLimits

0xae4a,	// (0x00039db1) vtel_slider_pane_g3

0xae30,	// (0x00039d97) vtel_slider_pane_g4_ParamLimits

0xae30,	// (0x00039d97) vtel_slider_pane_g4

0xae57,	// (0x00039dbe) vtel_slider_pane_g5_ParamLimits

0xae57,	// (0x00039dbe) vtel_slider_pane_g5

0x0004,

0xf981,	// (0x0003e8e8) vtel_slider_pane_g_ParamLimits

0xf981,	// (0x0003e8e8) vtel_slider_pane_g

0xdd67,	// (0x0003ccce) main_gallery2_pane

0xa64c,	// (0x000395b3) aid_size_row_itut2_dropdow_list_ParamLimits

0xa64c,	// (0x000395b3) aid_size_row_itut2_dropdow_list

0xa6a8,	// (0x0003960f) grid_vitu2_function_top_pane_ParamLimits

0xa6a8,	// (0x0003960f) grid_vitu2_function_top_pane

0xa6fc,	// (0x00039663) popup_vitu2_dropdown_list_window_ParamLimits

0xa6fc,	// (0x00039663) popup_vitu2_dropdown_list_window

0xa71a,	// (0x00039681) popup_vitu2_match_list_window

0xae64,	// (0x00039dcb) cell_vitu2_function_top_pane_ParamLimits

0xae64,	// (0x00039dcb) cell_vitu2_function_top_pane

0xae7e,	// (0x00039de5) cell_vitu2_function_top_pane_cp01_ParamLimits

0xae7e,	// (0x00039de5) cell_vitu2_function_top_pane_cp01

0xae9a,	// (0x00039e01) cell_vitu2_function_top_wide_pane_ParamLimits

0xae9a,	// (0x00039e01) cell_vitu2_function_top_wide_pane

0xdd67,	// (0x0003ccce) bg_button_pane_cp012

0xaeb8,	// (0x00039e1f) cell_vitu2_function_top_pane_g1

0xaecc,	// (0x00039e33) bg_button_pane_cp013_ParamLimits

0xaecc,	// (0x00039e33) bg_button_pane_cp013

0xaee8,	// (0x00039e4f) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0xaee8,	// (0x00039e4f) cell_vitu2_function_top_wide_pane_g1

0xd6c9,	// (0x0003c630) bg_popup_sub_pane_cp20

0xaf00,	// (0x00039e67) list_vitu2_match_list_pane

0x24cf,	// (0x00031436) bg_popup_sub_pane_cp20_g1

0x24d7,	// (0x0003143e) bg_popup_sub_pane_cp20_g2

0xe23f,	// (0x0003d1a6) bg_popup_sub_pane_cp20_g3

0x24df,	// (0x00031446) bg_popup_sub_pane_cp20_g4

0xe21f,	// (0x0003d186) bg_popup_sub_pane_cp20_g5

0x276c,	// (0x000316d3) bg_popup_sub_pane_cp20_g6

0x24ef,	// (0x00031456) bg_popup_sub_pane_cp20_g7

0x24f7,	// (0x0003145e) bg_popup_sub_pane_cp20_g8

0x24ff,	// (0x00031466) bg_popup_sub_pane_cp20_g9

0x0008,

0xf98c,	// (0x0003e8f3) bg_popup_sub_pane_cp20_g

0xaf18,	// (0x00039e7f) list_vitu2_match_list_item_pane_ParamLimits

0xaf18,	// (0x00039e7f) list_vitu2_match_list_item_pane

0xaf2a,	// (0x00039e91) list_vitu2_match_list_item_pane_t1

0xd6bf,	// (0x0003c626) bg_popup_sub_pane_cp21

0xdfe4,	// (0x0003cf4b) grid_vitu2_dropdown_list_pane

0xaf38,	// (0x00039e9f) cell_vitu2_dropdown_list_char_pane_ParamLimits

0xaf38,	// (0x00039e9f) cell_vitu2_dropdown_list_char_pane

0xaf5b,	// (0x00039ec2) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0xaf5b,	// (0x00039ec2) cell_vitu2_dropdown_list_ctrl_pane

0x27a6,	// (0x0003170d) cell_vitu2_dropdown_list_char_pane_g1

0x279d,	// (0x00031704) cell_vitu2_dropdown_list_char_pane_g2

0x2794,	// (0x000316fb) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xf99f,	// (0x0003e906) cell_vitu2_dropdown_list_char_pane_g

0xaf85,	// (0x00039eec) cell_vitu2_dropdown_list_char_pane_t1

0xaf93,	// (0x00039efa) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0xaf93,	// (0x00039efa) cell_vitu2_dropdown_list_ctrl_pane_g1

0xafa0,	// (0x00039f07) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0xafa0,	// (0x00039f07) cell_vitu2_dropdown_list_ctrl_pane_g2

0xafad,	// (0x00039f14) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0xafad,	// (0x00039f14) cell_vitu2_dropdown_list_ctrl_pane_g3

0xafba,	// (0x00039f21) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0xafba,	// (0x00039f21) cell_vitu2_dropdown_list_ctrl_pane_g4

0xddc0,	// (0x0003cd27) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0xddc0,	// (0x0003cd27) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xf9a6,	// (0x0003e90d) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xf9a6,	// (0x0003e90d) cell_vitu2_dropdown_list_ctrl_pane_g

0xafd6,	// (0x00039f3d) aid_size_cell_gallery2_ParamLimits

0xafd6,	// (0x00039f3d) aid_size_cell_gallery2

0xaff0,	// (0x00039f57) grid_gallery2_pane_ParamLimits

0xaff0,	// (0x00039f57) grid_gallery2_pane

0xb007,	// (0x00039f6e) scroll_pane_cp029_ParamLimits

0xb007,	// (0x00039f6e) scroll_pane_cp029

0xb017,	// (0x00039f7e) cell_gallery2_pane_ParamLimits

0xb017,	// (0x00039f7e) cell_gallery2_pane

0x27af,	// (0x00031716) cell_gallery2_pane_g2

0xb06c,	// (0x00039fd3) cell_gallery2_pane_g3

0x27b7,	// (0x0003171e) cell_gallery2_pane_g4

0x27bf,	// (0x00031726) cell_gallery2_pane_g5

0xdfe4,	// (0x0003cf4b) grid_highlight_pane_cp10

0xa71a,	// (0x00039681) popup_vitu2_match_list_window_ParamLimits

0xa65a,	// (0x000395c1) popup_vitu2_query_window_ParamLimits

0xa65a,	// (0x000395c1) popup_vitu2_query_window

0xd6bf,	// (0x0003c626) bg_vitu2_candi_button_pane

0x27a6,	// (0x0003170d) cell_vitu2_dropdown_list_char_pane_g1_copy1

0x279d,	// (0x00031704) cell_vitu2_dropdown_list_char_pane_g2_copy1

0x2794,	// (0x000316fb) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x5398,	// (0x000342ff) bg_button_pane_cp015

0xb074,	// (0x00039fdb) bg_button_pane_cp016

0xb087,	// (0x00039fee) bg_button_pane_cp017

0xf011,	// (0x0003df78) bg_popup_sub_pane_cp22

0x27c7,	// (0x0003172e) popup_vitu2_query_window_g1

0x53cb,	// (0x00034332) popup_vitu2_query_window_g2

0x0002,

0xf9b1,	// (0x0003e918) popup_vitu2_query_window_g

0x53ea,	// (0x00034351) popup_vitu2_query_window_t1_ParamLimits

0x53ea,	// (0x00034351) popup_vitu2_query_window_t1

0x541f,	// (0x00034386) popup_vitu2_query_window_t2_ParamLimits

0x541f,	// (0x00034386) popup_vitu2_query_window_t2

0x5431,	// (0x00034398) popup_vitu2_query_window_t3_ParamLimits

0x5431,	// (0x00034398) popup_vitu2_query_window_t3

0xb0ab,	// (0x0003a012) popup_vitu2_query_window_t4_ParamLimits

0xb0ab,	// (0x0003a012) popup_vitu2_query_window_t4

0xb0cc,	// (0x0003a033) popup_vitu2_query_window_t5_ParamLimits

0xb0cc,	// (0x0003a033) popup_vitu2_query_window_t5

0x0006,

0xf9b8,	// (0x0003e91f) popup_vitu2_query_window_t_ParamLimits

0xf9b8,	// (0x0003e91f) popup_vitu2_query_window_t

0x25d1,	// (0x00031538) main_cset_text_pane

0xaadd,	// (0x00039a44) aid_area_touch_slider_ParamLimits

0xaaf9,	// (0x00039a60) cset_slider_pane_ParamLimits

0xab1c,	// (0x00039a83) main_cset_slider_pane_g1_ParamLimits

0xab31,	// (0x00039a98) main_cset_slider_pane_g2_ParamLimits

0x25f2,	// (0x00031559) main_cset_slider_pane_g3_ParamLimits

0x25f2,	// (0x00031559) main_cset_slider_pane_g3

0xab46,	// (0x00039aad) main_cset_slider_pane_g4_ParamLimits

0xab46,	// (0x00039aad) main_cset_slider_pane_g4

0xab55,	// (0x00039abc) main_cset_slider_pane_g5_ParamLimits

0xab55,	// (0x00039abc) main_cset_slider_pane_g5

0xab63,	// (0x00039aca) main_cset_slider_pane_g6_ParamLimits

0xab63,	// (0x00039aca) main_cset_slider_pane_g6

0xf915,	// (0x0003e87c) main_cset_slider_pane_g_ParamLimits

0x263a,	// (0x000315a1) main_cset_slider_pane_t1_ParamLimits

0xabf7,	// (0x00039b5e) main_cset_slider_pane_t2_ParamLimits

0xac11,	// (0x00039b78) main_cset_slider_pane_t3_ParamLimits

0xac2b,	// (0x00039b92) main_cset_slider_pane_t4_ParamLimits

0xac49,	// (0x00039bb0) main_cset_slider_pane_t5_ParamLimits

0xac67,	// (0x00039bce) main_cset_slider_pane_t6_ParamLimits

0xac7e,	// (0x00039be5) main_cset_slider_pane_t7_ParamLimits

0xacac,	// (0x00039c13) main_cset_slider_pane_t8_ParamLimits

0xacac,	// (0x00039c13) main_cset_slider_pane_t8

0xacd4,	// (0x00039c3b) main_cset_slider_pane_t9_ParamLimits

0xacd4,	// (0x00039c3b) main_cset_slider_pane_t9

0xacfc,	// (0x00039c63) main_cset_slider_pane_t10_ParamLimits

0xacfc,	// (0x00039c63) main_cset_slider_pane_t10

0xad24,	// (0x00039c8b) main_cset_slider_pane_t11_ParamLimits

0xad24,	// (0x00039c8b) main_cset_slider_pane_t11

0xad4e,	// (0x00039cb5) main_cset_slider_pane_t12_ParamLimits

0xad4e,	// (0x00039cb5) main_cset_slider_pane_t12

0xad6d,	// (0x00039cd4) main_cset_slider_pane_t13_ParamLimits

0xad6d,	// (0x00039cd4) main_cset_slider_pane_t13

0xf93a,	// (0x0003e8a1) main_cset_slider_pane_t_ParamLimits

0xd6bf,	// (0x0003c626) bg_popup_sub_pane_cp011

0x27d3,	// (0x0003173a) main_cset_text_pane_g1

0x27db,	// (0x00031742) main_cset_text_pane_t1

0x27e9,	// (0x00031750) main_cset_text_pane_t2

0x27f7,	// (0x0003175e) main_cset_text_pane_t3

0x2805,	// (0x0003176c) main_cset_text_pane_t4

0x2813,	// (0x0003177a) main_cset_text_pane_t5

0x2821,	// (0x00031788) main_cset_text_pane_t6

0x282f,	// (0x00031796) main_cset_text_pane_t7

0x0006,

0xf9c7,	// (0x0003e92e) main_cset_text_pane_t

0xd6bf,	// (0x0003c626) main_cam4_burst_pane

0xd6bf,	// (0x0003c626) main_cam5_pane

0xaa25,	// (0x0003998c) bg_button_pane_cp019

0xaa2e,	// (0x00039995) bg_button_pane_cp020

0x25fe,	// (0x00031565) main_cset_slider_pane_g7_ParamLimits

0x25fe,	// (0x00031565) main_cset_slider_pane_g7

0x260a,	// (0x00031571) main_cset_slider_pane_g8_ParamLimits

0x260a,	// (0x00031571) main_cset_slider_pane_g8

0xab77,	// (0x00039ade) main_cset_slider_pane_g9_ParamLimits

0xab77,	// (0x00039ade) main_cset_slider_pane_g9

0xab83,	// (0x00039aea) main_cset_slider_pane_g10_ParamLimits

0xab83,	// (0x00039aea) main_cset_slider_pane_g10

0xab8f,	// (0x00039af6) main_cset_slider_pane_g11_ParamLimits

0xab8f,	// (0x00039af6) main_cset_slider_pane_g11

0xab9b,	// (0x00039b02) main_cset_slider_pane_g12_ParamLimits

0xab9b,	// (0x00039b02) main_cset_slider_pane_g12

0xaba7,	// (0x00039b0e) main_cset_slider_pane_g13_ParamLimits

0xaba7,	// (0x00039b0e) main_cset_slider_pane_g13

0xabb5,	// (0x00039b1c) main_cset_slider_pane_g14_ParamLimits

0xabb5,	// (0x00039b1c) main_cset_slider_pane_g14

0xabc3,	// (0x00039b2a) main_cset_slider_pane_g15_ParamLimits

0xabc3,	// (0x00039b2a) main_cset_slider_pane_g15

0x2662,	// (0x000315c9) main_cset_slider_pane_t14_ParamLimits

0x2662,	// (0x000315c9) main_cset_slider_pane_t14

0x269b,	// (0x00031602) main_cset_slider_pane_t15_ParamLimits

0x269b,	// (0x00031602) main_cset_slider_pane_t15

0xb0ed,	// (0x0003a054) aid_cam4_burst_size_cell_ParamLimits

0xb0ed,	// (0x0003a054) aid_cam4_burst_size_cell

0xb109,	// (0x0003a070) grid_cam4_burst_pane_ParamLimits

0xb109,	// (0x0003a070) grid_cam4_burst_pane

0xb139,	// (0x0003a0a0) linegrid_cam4_burst_pane_ParamLimits

0xb139,	// (0x0003a0a0) linegrid_cam4_burst_pane

0xb159,	// (0x0003a0c0) scroll_pane_cp30_ParamLimits

0xb159,	// (0x0003a0c0) scroll_pane_cp30

0xb165,	// (0x0003a0cc) cell_cam4_burst_pane_ParamLimits

0xb165,	// (0x0003a0cc) cell_cam4_burst_pane

0x2849,	// (0x000317b0) linegrid_cam4_burst_pane_g1_ParamLimits

0x2849,	// (0x000317b0) linegrid_cam4_burst_pane_g1

0xb1a1,	// (0x0003a108) linegrid_cam4_burst_pane_g2_ParamLimits

0xb1a1,	// (0x0003a108) linegrid_cam4_burst_pane_g2

0x2856,	// (0x000317bd) linegrid_cam4_burst_pane_g3_ParamLimits

0x2856,	// (0x000317bd) linegrid_cam4_burst_pane_g3

0x0002,

0xf9d6,	// (0x0003e93d) linegrid_cam4_burst_pane_g_ParamLimits

0xf9d6,	// (0x0003e93d) linegrid_cam4_burst_pane_g

0xb1b2,	// (0x0003a119) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0xb1b2,	// (0x0003a119) linegrid_cam4_burst_pane_g3_copy1

0x2863,	// (0x000317ca) linegrid_cam4_burst_pane_g4_ParamLimits

0x2863,	// (0x000317ca) linegrid_cam4_burst_pane_g4

0xb1cc,	// (0x0003a133) linegrid_cam4_burst_pane_g5_ParamLimits

0xb1cc,	// (0x0003a133) linegrid_cam4_burst_pane_g5

0xb1dd,	// (0x0003a144) linegrid_cam4_burst_pane_g6_ParamLimits

0xb1dd,	// (0x0003a144) linegrid_cam4_burst_pane_g6

0x2870,	// (0x000317d7) linegrid_cam4_burst_pane_g7_ParamLimits

0x2870,	// (0x000317d7) linegrid_cam4_burst_pane_g7

0xb1ee,	// (0x0003a155) cell_cam4_burst_pane_g1

0x2889,	// (0x000317f0) main_cam5_pane_t1_ParamLimits

0x2889,	// (0x000317f0) main_cam5_pane_t1

0x289b,	// (0x00031802) main_cam5_pane_t2_ParamLimits

0x289b,	// (0x00031802) main_cam5_pane_t2

0x28ad,	// (0x00031814) main_cam5_pane_t3_ParamLimits

0x28ad,	// (0x00031814) main_cam5_pane_t3

0x28bf,	// (0x00031826) main_cam5_pane_t4_ParamLimits

0x28bf,	// (0x00031826) main_cam5_pane_t4

0x28d7,	// (0x0003183e) main_cam5_pane_t5_ParamLimits

0x28d7,	// (0x0003183e) main_cam5_pane_t5

0x28eb,	// (0x00031852) main_cam5_pane_t6_ParamLimits

0x28eb,	// (0x00031852) main_cam5_pane_t6

0x28ff,	// (0x00031866) main_cam5_pane_t7_ParamLimits

0x28ff,	// (0x00031866) main_cam5_pane_t7

0x2911,	// (0x00031878) main_cam5_pane_t8_ParamLimits

0x2911,	// (0x00031878) main_cam5_pane_t8

0x292d,	// (0x00031894) main_cam5_pane_t9_ParamLimits

0x292d,	// (0x00031894) main_cam5_pane_t9

0x293f,	// (0x000318a6) main_cam5_pane_t10_ParamLimits

0x293f,	// (0x000318a6) main_cam5_pane_t10

0x2951,	// (0x000318b8) main_cam5_pane_t11_ParamLimits

0x2951,	// (0x000318b8) main_cam5_pane_t11

0x2963,	// (0x000318ca) main_cam5_pane_t12_ParamLimits

0x2963,	// (0x000318ca) main_cam5_pane_t12

0x2978,	// (0x000318df) main_cam5_pane_t13_ParamLimits

0x2978,	// (0x000318df) main_cam5_pane_t13

0x000c,

0xf9e2,	// (0x0003e949) main_cam5_pane_t_ParamLimits

0xf9e2,	// (0x0003e949) main_cam5_pane_t

0x6063,	// (0x00034fca) popup_scut_keymap_window_ParamLimits

0x6063,	// (0x00034fca) popup_scut_keymap_window

0xb201,	// (0x0003a168) aid_size_cell_brow_shortcut

0xdfe4,	// (0x0003cf4b) bg_popup_window_pane_cp010

0xb20d,	// (0x0003a174) grid_scut_pane

0xb219,	// (0x0003a180) cell_scut_pane_ParamLimits

0xb219,	// (0x0003a180) cell_scut_pane

0xb230,	// (0x0003a197) cell_scut_pane_g1

0x2995,	// (0x000318fc) cell_scut_pane_t1

0x29a4,	// (0x0003190b) cell_scut_pane_t2

0xb239,	// (0x0003a1a0) cell_scut_pane_t3

0x0002,

0xf9fd,	// (0x0003e964) cell_scut_pane_t

0x9366,	// (0x000382cd) main_mup3_pane_g8_ParamLimits

0x9366,	// (0x000382cd) main_mup3_pane_g8

0xa65a,	// (0x000395c1) area_vitu2_query_pane_ParamLimits

0xa65a,	// (0x000395c1) area_vitu2_query_pane

0x53aa,	// (0x00034311) input_focus_pane_cp08

0x29b3,	// (0x0003191a) area_vitu2_query_pane_g1

0x54af,	// (0x00034416) area_vitu2_query_pane_g2

0x0001,

0xfa04,	// (0x0003e96b) area_vitu2_query_pane_g

0xb247,	// (0x0003a1ae) area_vitu2_query_pane_t1_ParamLimits

0xb247,	// (0x0003a1ae) area_vitu2_query_pane_t1

0xb25b,	// (0x0003a1c2) area_vitu2_query_pane_t2_ParamLimits

0xb25b,	// (0x0003a1c2) area_vitu2_query_pane_t2

0x54c0,	// (0x00034427) area_vitu2_query_pane_t3_ParamLimits

0x54c0,	// (0x00034427) area_vitu2_query_pane_t3

0x54e8,	// (0x0003444f) area_vitu2_query_pane_t4_ParamLimits

0x54e8,	// (0x0003444f) area_vitu2_query_pane_t4

0x5510,	// (0x00034477) area_vitu2_query_pane_t5_ParamLimits

0x5510,	// (0x00034477) area_vitu2_query_pane_t5

0x5538,	// (0x0003449f) area_vitu2_query_pane_t6_ParamLimits

0x5538,	// (0x0003449f) area_vitu2_query_pane_t6

0x0006,

0xfa09,	// (0x0003e970) area_vitu2_query_pane_t_ParamLimits

0xfa09,	// (0x0003e970) area_vitu2_query_pane_t

0xb26f,	// (0x0003a1d6) bg_button_pane_cp018

0xb27d,	// (0x0003a1e4) bg_button_pane_cp021

0x5584,	// (0x000344eb) bg_button_pane_cp022

0x5595,	// (0x000344fc) input_focus_pane_cp09

0xe860,	// (0x0003d7c7) aid_size_touch_mv_arrow_left

0xe88b,	// (0x0003d7f2) aid_size_touch_mv_arrow_right

0xabdb,	// (0x00039b42) main_cset_slider_pane_g16_ParamLimits

0xabdb,	// (0x00039b42) main_cset_slider_pane_g16

0xabe9,	// (0x00039b50) main_cset_slider_pane_g17_ParamLimits

0xabe9,	// (0x00039b50) main_cset_slider_pane_g17

0xb1ee,	// (0x0003a155) cell_cam4_burst_pane_g1_ParamLimits

0xd6bf,	// (0x0003c626) compa_mode_pane

0xade5,	// (0x00039d4c) popup_vtel_slider_window_g3_ParamLimits

0xade5,	// (0x00039d4c) popup_vtel_slider_window_g3

0xadf9,	// (0x00039d60) popup_vtel_slider_window_g4_ParamLimits

0xadf9,	// (0x00039d60) popup_vtel_slider_window_g4

0xae0d,	// (0x00039d74) popup_vtel_slider_window_t1_ParamLimits

0xae0d,	// (0x00039d74) popup_vtel_slider_window_t1

0xd6bf,	// (0x0003c626) main_cl_pane

0x8c7f,	// (0x00037be6) popup_imed_adjust2_window_ParamLimits

0xf011,	// (0x0003df78) bg_tb_trans_pane_cp05_ParamLimits

0x1cfd,	// (0x00030c64) popup_imed_adjust2_window_g1_ParamLimits

0x1d0c,	// (0x00030c73) popup_imed_adjust2_window_g2_ParamLimits

0x1d0c,	// (0x00030c73) popup_imed_adjust2_window_g2

0x1d18,	// (0x00030c7f) popup_imed_adjust2_window_g3_ParamLimits

0x1d18,	// (0x00030c7f) popup_imed_adjust2_window_g3

0x0002,

0xf77f,	// (0x0003e6e6) popup_imed_adjust2_window_g_ParamLimits

0xf77f,	// (0x0003e6e6) popup_imed_adjust2_window_g

0x1d24,	// (0x00030c8b) popup_imed_adjust2_window_t1_ParamLimits

0x1d3c,	// (0x00030ca3) slider_imed_adjust_pane_ParamLimits

0x1d50,	// (0x00030cb7) slider_imed_adjust_pane_g1_ParamLimits

0x1d60,	// (0x00030cc7) slider_imed_adjust_pane_g2_ParamLimits

0x1d70,	// (0x00030cd7) slider_imed_adjust_pane_g3_ParamLimits

0x1d81,	// (0x00030ce8) slider_imed_adjust_pane_g4_ParamLimits

0xf786,	// (0x0003e6ed) slider_imed_adjust_pane_g_ParamLimits

0xa3bb,	// (0x00039322) aid_touch_area_cam4_ParamLimits

0xa3bb,	// (0x00039322) aid_touch_area_cam4

0xa3cb,	// (0x00039332) battery_pane_cp01

0xa452,	// (0x000393b9) main_camera4_pane_g6_ParamLimits

0xa452,	// (0x000393b9) main_camera4_pane_g6

0xa470,	// (0x000393d7) main_camera4_pane_t2_ParamLimits

0xa470,	// (0x000393d7) main_camera4_pane_t2

0x0001,

0xf888,	// (0x0003e7ef) main_camera4_pane_t_ParamLimits

0xf888,	// (0x0003e7ef) main_camera4_pane_t

0xa4f1,	// (0x00039458) aid_touch_area_vid4_ParamLimits

0xa4f1,	// (0x00039458) aid_touch_area_vid4

0xa531,	// (0x00039498) main_video4_pane_g5_ParamLimits

0xa531,	// (0x00039498) main_video4_pane_g5

0xa555,	// (0x000394bc) vid4_progress_pane_ParamLimits

0xa555,	// (0x000394bc) vid4_progress_pane

0x262e,	// (0x00031595) main_cset_slider_pane_g18_ParamLimits

0x262e,	// (0x00031595) main_cset_slider_pane_g18

0x287d,	// (0x000317e4) cell_cam4_burst_pane_g2_ParamLimits

0x287d,	// (0x000317e4) cell_cam4_burst_pane_g2

0x0001,

0xf9dd,	// (0x0003e944) cell_cam4_burst_pane_g_ParamLimits

0xf9dd,	// (0x0003e944) cell_cam4_burst_pane_g

0xb289,	// (0x0003a1f0) bg_cl_pane_ParamLimits

0xb289,	// (0x0003a1f0) bg_cl_pane

0xb295,	// (0x0003a1fc) cl_header_pane_ParamLimits

0xb295,	// (0x0003a1fc) cl_header_pane

0xb2a1,	// (0x0003a208) cl_listscroll_pane_ParamLimits

0xb2a1,	// (0x0003a208) cl_listscroll_pane

0x2a5b,	// (0x000319c2) bg_cl_pane_g1

0x2a63,	// (0x000319ca) bg_cl_pane_g2

0x2a6b,	// (0x000319d2) bg_cl_pane_g3

0x2a73,	// (0x000319da) bg_cl_pane_g4

0x2a7b,	// (0x000319e2) bg_cl_pane_g5

0x2a83,	// (0x000319ea) bg_cl_pane_g6

0x2a8b,	// (0x000319f2) bg_cl_pane_g7

0x2a93,	// (0x000319fa) bg_cl_pane_g8

0x2a9b,	// (0x00031a02) bg_cl_pane_g9

0x0008,

0xfa18,	// (0x0003e97f) bg_cl_pane_g

0xb2ad,	// (0x0003a214) aid_height_cl_leading_ParamLimits

0xb2ad,	// (0x0003a214) aid_height_cl_leading

0xb2b9,	// (0x0003a220) aid_height_cl_text_ParamLimits

0xb2b9,	// (0x0003a220) aid_height_cl_text

0xd6c9,	// (0x0003c630) bg_cl_header_pane_ParamLimits

0xd6c9,	// (0x0003c630) bg_cl_header_pane

0xb2d1,	// (0x0003a238) cl_header_pane_g1_ParamLimits

0xb2d1,	// (0x0003a238) cl_header_pane_g1

0xb2de,	// (0x0003a245) cl_header_pane_t1_ParamLimits

0xb2de,	// (0x0003a245) cl_header_pane_t1

0x2aa3,	// (0x00031a0a) cl_list_pane

0x25e9,	// (0x00031550) hc_scroll_pane_cp01

0xe21f,	// (0x0003d186) bg_cl_header_pane_g1

0x24cf,	// (0x00031436) bg_cl_header_pane_g2

0xe23f,	// (0x0003d1a6) bg_cl_header_pane_g3

0x24df,	// (0x00031446) bg_cl_header_pane_g4

0x24d7,	// (0x0003143e) bg_cl_header_pane_g5

0x276c,	// (0x000316d3) bg_cl_header_pane_g6

0x24f7,	// (0x0003145e) bg_cl_header_pane_g7

0x24ff,	// (0x00031466) bg_cl_header_pane_g8

0x24ef,	// (0x00031456) bg_cl_header_pane_g9

0x0008,

0xfa2b,	// (0x0003e992) bg_cl_header_pane_g

0xb2f0,	// (0x0003a257) hc_cl_list_double_graphic_heading_pane_ParamLimits

0xb2f0,	// (0x0003a257) hc_cl_list_double_graphic_heading_pane

0xb304,	// (0x0003a26b) hc_cl_list_single_graphic_pane_ParamLimits

0xb304,	// (0x0003a26b) hc_cl_list_single_graphic_pane

0xb31e,	// (0x0003a285) hc_cl_list_single_graphic_pane_g1_ParamLimits

0xb31e,	// (0x0003a285) hc_cl_list_single_graphic_pane_g1

0xb32a,	// (0x0003a291) hc_cl_list_single_graphic_pane_g2_ParamLimits

0xb32a,	// (0x0003a291) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfa3e,	// (0x0003e9a5) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfa3e,	// (0x0003e9a5) hc_cl_list_single_graphic_pane_g

0xb33e,	// (0x0003a2a5) hc_cl_list_single_graphic_pane_t1_ParamLimits

0xb33e,	// (0x0003a2a5) hc_cl_list_single_graphic_pane_t1

0xb31e,	// (0x0003a285) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0xb31e,	// (0x0003a285) hc_cl_list_double_graphic_heading_pane_g1

0xb353,	// (0x0003a2ba) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0xb353,	// (0x0003a2ba) hc_cl_list_double_graphic_heading_pane_g2

0xb367,	// (0x0003a2ce) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0xb367,	// (0x0003a2ce) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfa43,	// (0x0003e9aa) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfa43,	// (0x0003e9aa) hc_cl_list_double_graphic_heading_pane_g

0xb37b,	// (0x0003a2e2) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0xb37b,	// (0x0003a2e2) hc_cl_list_double_graphic_heading_pane_t1

0xb390,	// (0x0003a2f7) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0xb390,	// (0x0003a2f7) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfa4a,	// (0x0003e9b1) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfa4a,	// (0x0003e9b1) hc_cl_list_double_graphic_heading_pane_t

0xb3ad,	// (0x0003a314) vid4_progress_pane_g1

0xb3bd,	// (0x0003a324) vid4_progress_pane_g2

0xb3cd,	// (0x0003a334) vid4_progress_pane_g3

0xb3df,	// (0x0003a346) vid4_progress_pane_g4

0x0004,

0xfa4f,	// (0x0003e9b6) vid4_progress_pane_g

0xb3f7,	// (0x0003a35e) vid4_progress_pane_t1

0xb40d,	// (0x0003a374) vid4_progress_pane_t2

0x0002,

0xfa5a,	// (0x0003e9c1) vid4_progress_pane_t

0xb438,	// (0x0003a39f) wait_bar_pane_cp07

0x15b1,	// (0x00030518) blid_firmament_pane_ParamLimits

0x15f4,	// (0x0003055b) popup_blid_sat_info2_window_g1

0x1618,	// (0x0003057f) popup_blid_sat_info2_window_t3

0x1626,	// (0x0003058d) popup_blid_sat_info2_window_t4

0x1634,	// (0x0003059b) popup_blid_sat_info2_window_t5

0x1642,	// (0x000305a9) popup_blid_sat_info2_window_t6

0x1652,	// (0x000305b9) popup_blid_sat_info2_window_t7

0x1660,	// (0x000305c7) popup_blid_sat_info2_window_t8

0x166e,	// (0x000305d5) popup_blid_sat_info2_window_t9

0x167c,	// (0x000305e3) popup_blid_sat_info2_window_t10

0x173d,	// (0x000306a4) aid_firma_cardinal_ParamLimits

0x1751,	// (0x000306b8) blid_firmament_pane_t1_ParamLimits

0x1768,	// (0x000306cf) blid_firmament_pane_t2_ParamLimits

0x177f,	// (0x000306e6) blid_firmament_pane_t3_ParamLimits

0x1796,	// (0x000306fd) blid_firmament_pane_t4_ParamLimits

0xf678,	// (0x0003e5df) blid_firmament_pane_t_ParamLimits

0x17ad,	// (0x00030714) blid_sat_info_pane_ParamLimits

0xdd67,	// (0x0003ccce) main_cam_set_pane_ParamLimits

0x9a35,	// (0x0003899c) aid_size_cell_colour_35_ParamLimits

0x9a4f,	// (0x000389b6) aid_size_cell_colour_112_ParamLimits

0x9a66,	// (0x000389cd) aid_size_cell_effect_ParamLimits

0xdd67,	// (0x0003ccce) bg_tb_trans_pane_cp02_ParamLimits

0xf04a,	// (0x0003dfb1) heading_imed_pane_ParamLimits

0x9a80,	// (0x000389e7) listscroll_imed_pane_ParamLimits

0x0958,	// (0x0002f8bf) popup_call2_audio_first_window_g5_ParamLimits

0x0958,	// (0x0002f8bf) popup_call2_audio_first_window_g5

0xa0b1,	// (0x00039018) aid_size_touch_image3_arrow_left_ParamLimits

0xa0b1,	// (0x00039018) aid_size_touch_image3_arrow_left

0xa0c7,	// (0x0003902e) aid_size_touch_image3_arrow_right_ParamLimits

0xa0c7,	// (0x0003902e) aid_size_touch_image3_arrow_right

0xb422,	// (0x0003a389) vid4_progress_pane_t3

0x9c02,	// (0x00038b69) main_hwr_training_symbol_option_pane_ParamLimits

0x9c02,	// (0x00038b69) main_hwr_training_symbol_option_pane

0x1f36,	// (0x00030e9d) popup_hwr_training_preview_window_ParamLimits

0x1f36,	// (0x00030e9d) popup_hwr_training_preview_window

0x9c63,	// (0x00038bca) hwr_training_navi_pane_g5_ParamLimits

0x9c63,	// (0x00038bca) hwr_training_navi_pane_g5

0x24bd,	// (0x00031424) popup_char_count_window

0xd6c9,	// (0x0003c630) bg_popup_sub_pane_cp20_ParamLimits

0xaf00,	// (0x00039e67) list_vitu2_match_list_pane_ParamLimits

0xaf0c,	// (0x00039e73) vitu2_page_scroll_pane_ParamLimits

0xaf0c,	// (0x00039e73) vitu2_page_scroll_pane

0x2b39,	// (0x00031aa0) list_single_hwr_training_symbol_option_pane_ParamLimits

0x2b39,	// (0x00031aa0) list_single_hwr_training_symbol_option_pane

0x2b4c,	// (0x00031ab3) list_single_hwr_training_symbol_option_pane_g1

0x2b54,	// (0x00031abb) list_single_hwr_training_symbol_option_pane_t1

0x2b62,	// (0x00031ac9) bg_button_pane_cp023

0x2b6b,	// (0x00031ad2) bg_button_pane_cp024

0x2b9e,	// (0x00031b05) vitu2_page_scroll_pane_g1

0x2ba6,	// (0x00031b0d) vitu2_page_scroll_pane_g2

0x0001,

0xfa61,	// (0x0003e9c8) vitu2_page_scroll_pane_g

0x2bae,	// (0x00031b15) vitu2_page_scroll_pane_t1

0xf041,	// (0x0003dfa8) popup_char_count_window_g1

0x2bbd,	// (0x00031b24) popup_char_count_window_g2

0x03e2,	// (0x0002f349) popup_char_count_window_g3

0x0002,

0xfa66,	// (0x0003e9cd) popup_char_count_window_g

0x2bc6,	// (0x00031b2d) popup_char_count_window_t1

0xd6bf,	// (0x0003c626) main_vded2_pane

0x1ce9,	// (0x00030c50) aid_size_cell_imed_line

0x1cf3,	// (0x00030c5a) grid_imed_line_width_pane

0xa5c1,	// (0x00039528) vid4_indicators_pane_g4

0x2bd4,	// (0x00031b3b) cell_imed_line_width_pane_ParamLimits

0x2bd4,	// (0x00031b3b) cell_imed_line_width_pane

0x2be8,	// (0x00031b4f) cell_imed_line_width_pane_g1

0x2bf1,	// (0x00031b58) cell_imed_line_width_pane_g2

0x0001,

0xfa6d,	// (0x0003e9d4) cell_imed_line_width_pane_g

0xb449,	// (0x0003a3b0) main_vded2_pane_g1_ParamLimits

0xb449,	// (0x0003a3b0) main_vded2_pane_g1

0xb456,	// (0x0003a3bd) main_vded2_pane_g2_ParamLimits

0xb456,	// (0x0003a3bd) main_vded2_pane_g2

0x0001,

0xfa72,	// (0x0003e9d9) main_vded2_pane_g_ParamLimits

0xfa72,	// (0x0003e9d9) main_vded2_pane_g

0xb464,	// (0x0003a3cb) vded2_slider_pane_ParamLimits

0xb464,	// (0x0003a3cb) vded2_slider_pane

0xb471,	// (0x0003a3d8) aid_size_touch_vded2_end

0xb47b,	// (0x0003a3e2) aid_size_touch_vded2_playhead

0x2bf9,	// (0x00031b60) aid_size_touch_vded2_start

0x2c01,	// (0x00031b68) vded2_slider_bg_pane

0x2c0a,	// (0x00031b71) vded2_slider_pane_g1

0x2c13,	// (0x00031b7a) vded2_slider_pane_g2

0xb483,	// (0x0003a3ea) vded2_slider_pane_g3

0x0002,

0xfa77,	// (0x0003e9de) vded2_slider_pane_g

0x2c1b,	// (0x00031b82) vded2_slider_bg_pane_g1

0x2c24,	// (0x00031b8b) vded2_slider_bg_pane_g2

0x2c2d,	// (0x00031b94) vded2_slider_bg_pane_g3

0x0002,

0xfa7e,	// (0x0003e9e5) vded2_slider_bg_pane_g

0x8483,	// (0x000373ea) aid_postcard_touch_down_pane_ParamLimits

0x8483,	// (0x000373ea) aid_postcard_touch_down_pane

0x8493,	// (0x000373fa) aid_postcard_touch_up_pane_ParamLimits

0x8493,	// (0x000373fa) aid_postcard_touch_up_pane

0xd6bf,	// (0x0003c626) main_blid2_pane

0x8c0e,	// (0x00037b75) popup_blid2_search_window

0xd6bf,	// (0x0003c626) blid2_gps_pane

0xd6bf,	// (0x0003c626) blid2_navig_pane

0xd6bf,	// (0x0003c626) blid2_search_pane

0xd6bf,	// (0x0003c626) blid2_tripm_pane

0xb48c,	// (0x0003a3f3) blid2_search_pane_g1_ParamLimits

0xb48c,	// (0x0003a3f3) blid2_search_pane_g1

0xb49c,	// (0x0003a403) blid2_search_pane_t1_ParamLimits

0xb49c,	// (0x0003a403) blid2_search_pane_t1

0xb4ae,	// (0x0003a415) aid_size_cell_blid2_gps_ParamLimits

0xb4ae,	// (0x0003a415) aid_size_cell_blid2_gps

0xb4be,	// (0x0003a425) blid2_gps_pane_g1_ParamLimits

0xb4be,	// (0x0003a425) blid2_gps_pane_g1

0xb4ca,	// (0x0003a431) grid_blid2_satellite_pane_ParamLimits

0xb4ca,	// (0x0003a431) grid_blid2_satellite_pane

0xb4da,	// (0x0003a441) blid2_navig_pane_g1_ParamLimits

0xb4da,	// (0x0003a441) blid2_navig_pane_g1

0xb4e6,	// (0x0003a44d) blid2_navig_pane_t1_ParamLimits

0xb4e6,	// (0x0003a44d) blid2_navig_pane_t1

0xb4f8,	// (0x0003a45f) blid2_navig_pane_t2_ParamLimits

0xb4f8,	// (0x0003a45f) blid2_navig_pane_t2

0x0001,

0xfa85,	// (0x0003e9ec) blid2_navig_pane_t_ParamLimits

0xfa85,	// (0x0003e9ec) blid2_navig_pane_t

0xb50a,	// (0x0003a471) blid2_navig_ring_pane_ParamLimits

0xb50a,	// (0x0003a471) blid2_navig_ring_pane

0xb51a,	// (0x0003a481) blid2_speed_pane_ParamLimits

0xb51a,	// (0x0003a481) blid2_speed_pane

0xb526,	// (0x0003a48d) blid2_tripm_pane_g1_ParamLimits

0xb526,	// (0x0003a48d) blid2_tripm_pane_g1

0xb536,	// (0x0003a49d) blid2_tripm_pane_g2_ParamLimits

0xb536,	// (0x0003a49d) blid2_tripm_pane_g2

0xb542,	// (0x0003a4a9) blid2_tripm_pane_g3_ParamLimits

0xb542,	// (0x0003a4a9) blid2_tripm_pane_g3

0xb54e,	// (0x0003a4b5) blid2_tripm_pane_g4_ParamLimits

0xb54e,	// (0x0003a4b5) blid2_tripm_pane_g4

0xb55a,	// (0x0003a4c1) blid2_tripm_pane_g5_ParamLimits

0xb55a,	// (0x0003a4c1) blid2_tripm_pane_g5

0x0005,

0xfa8a,	// (0x0003e9f1) blid2_tripm_pane_g_ParamLimits

0xfa8a,	// (0x0003e9f1) blid2_tripm_pane_g

0xb576,	// (0x0003a4dd) blid2_tripm_pane_t1_ParamLimits

0xb576,	// (0x0003a4dd) blid2_tripm_pane_t1

0xb58a,	// (0x0003a4f1) blid2_tripm_pane_t2_ParamLimits

0xb58a,	// (0x0003a4f1) blid2_tripm_pane_t2

0xb59c,	// (0x0003a503) blid2_tripm_pane_t3_ParamLimits

0xb59c,	// (0x0003a503) blid2_tripm_pane_t3

0x0003,

0xfa97,	// (0x0003e9fe) blid2_tripm_pane_t_ParamLimits

0xfa97,	// (0x0003e9fe) blid2_tripm_pane_t

0xb5ce,	// (0x0003a535) cell_blid2_satellite_pane_ParamLimits

0xb5ce,	// (0x0003a535) cell_blid2_satellite_pane

0xb5e8,	// (0x0003a54f) cell_blid2_satellite_pane_g1

0x2c36,	// (0x00031b9d) cell_blid2_satellite_pane_t1

0xe01a,	// (0x0003cf81) blid2_speed_pane_g1

0x2c44,	// (0x00031bab) blid2_speed_pane_t1

0x2c52,	// (0x00031bb9) blid2_speed_pane_t2

0x0001,

0xfaa0,	// (0x0003ea07) blid2_speed_pane_t

0xe01a,	// (0x0003cf81) blid2_navig_ring_pane_g1

0xb5f1,	// (0x0003a558) blid2_navig_ring_pane_g2

0xb5f9,	// (0x0003a560) blid2_navig_ring_pane_g3

0xb601,	// (0x0003a568) blid2_navig_ring_pane_g4

0xb609,	// (0x0003a570) blid2_navig_ring_pane_g5

0x0004,

0xfaa5,	// (0x0003ea0c) blid2_navig_ring_pane_g

0xd6bf,	// (0x0003c626) bg_popup_window_pane_cp011

0x2c60,	// (0x00031bc7) popup_blid2_search_window_g1

0x2c68,	// (0x00031bcf) popup_blid2_search_window_t1

0x2c76,	// (0x00031bdd) popup_blid2_search_window_t2

0x0001,

0xfab0,	// (0x0003ea17) popup_blid2_search_window_t

0xe12e,	// (0x0003d095) main_browser_pane_g1

0xde32,	// (0x0003cd99) main_browser_pane_ParamLimits

0xdd67,	// (0x0003ccce) bg_button_pane_cp011_ParamLimits

0xa7f8,	// (0x0003975f) cell_vitu2_function_pane_g1_ParamLimits

0xf011,	// (0x0003df78) bg_popup_sub_pane_cp22_ParamLimits

0x53aa,	// (0x00034311) input_focus_pane_cp08_ParamLimits

0xb09a,	// (0x0003a001) popup_vitu2_query_button_pane_ParamLimits

0xb09a,	// (0x0003a001) popup_vitu2_query_button_pane

0x53c1,	// (0x00034328) popup_vitu2_query_input_button_pane

0x27c7,	// (0x0003172e) popup_vitu2_query_window_g1_ParamLimits

0x53cb,	// (0x00034332) popup_vitu2_query_window_g2_ParamLimits

0xf9b1,	// (0x0003e918) popup_vitu2_query_window_g_ParamLimits

0xd6bf,	// (0x0003c626) bg_button_pane_cp026

0xb611,	// (0x0003a578) popup_vitu2_query_input_button_pane_g1

0xd6bf,	// (0x0003c626) bg_button_pane_cp025

0x2c84,	// (0x00031beb) popup_vitu2_query_button_pane_t1

0x9087,	// (0x00037fee) main_mp3_pane_t6

0x9097,	// (0x00037ffe) popup_slider_window_cp01

0xa4a6,	// (0x0003940d) cam4_battery_pane

0xa580,	// (0x000394e7) cam4_battery_pane_cp02

0xb3a5,	// (0x0003a30c) cam4_battery_pane_cp01

0xb3a5,	// (0x0003a30c) cam4_battery_pane_cp03

0xe01a,	// (0x0003cf81) cam4_battery_pane_g1

0x1518,	// (0x0003047f) cam4_battery_pane_g2

0x0001,

0xfab5,	// (0x0003ea1c) cam4_battery_pane_g

0x168a,	// (0x000305f1) popup_blid_sat_info2_window_t11

0xe860,	// (0x0003d7c7) aid_size_touch_mv_arrow_left_ParamLimits

0xe88b,	// (0x0003d7f2) aid_size_touch_mv_arrow_right_ParamLimits

0xe8e9,	// (0x0003d850) navi_pane_g1_ParamLimits

0xe8f5,	// (0x0003d85c) navi_pane_g2_ParamLimits

0xe923,	// (0x0003d88a) navi_pane_g3_ParamLimits

0xf379,	// (0x0003e2e0) navi_pane_g_ParamLimits

0x813b,	// (0x000370a2) navi_pane_mv_t1_ParamLimits

0x9a8c,	// (0x000389f3) grid_imed_effect_pane_ParamLimits

0x6bee,	// (0x00035b55) aid_placing_vt_slider_lsc

0xe07d,	// (0x0003cfe4) aid_placing_vt_slider_prt

0xdd67,	// (0x0003ccce) bg_tb_trans_pane_cp01_ParamLimits

0x1928,	// (0x0003088f) popup_image_details_window_g1_ParamLimits

0x193b,	// (0x000308a2) popup_image_details_window_g2_ParamLimits

0x1950,	// (0x000308b7) popup_image_details_window_g3_ParamLimits

0x1950,	// (0x000308b7) popup_image_details_window_g3

0xf6b8,	// (0x0003e61f) popup_image_details_window_g_ParamLimits

0x1964,	// (0x000308cb) popup_image_details_window_t1_ParamLimits

0x1976,	// (0x000308dd) popup_image_details_window_t2_ParamLimits

0x198f,	// (0x000308f6) popup_image_details_window_t3_ParamLimits

0x19a3,	// (0x0003090a) popup_image_details_window_t4_ParamLimits

0x19be,	// (0x00030925) popup_image_details_window_t5_ParamLimits

0xf6bf,	// (0x0003e626) popup_image_details_window_t_ParamLimits

0xb2c5,	// (0x0003a22c) cl_header_name_pane_ParamLimits

0xb2c5,	// (0x0003a22c) cl_header_name_pane

0xb619,	// (0x0003a580) cl_header_name_pane_t1_ParamLimits

0xb619,	// (0x0003a580) cl_header_name_pane_t1

0xb630,	// (0x0003a597) cl_header_name_pane_t2_ParamLimits

0xb630,	// (0x0003a597) cl_header_name_pane_t2

0xb65a,	// (0x0003a5c1) cl_header_name_pane_t3_ParamLimits

0xb65a,	// (0x0003a5c1) cl_header_name_pane_t3

0x0002,

0xfaba,	// (0x0003ea21) cl_header_name_pane_t_ParamLimits

0xfaba,	// (0x0003ea21) cl_header_name_pane_t

0xe9b2,	// (0x0003d919) navi_pane_mv_g2_ParamLimits

0x2488,	// (0x000313ef) field_vitu2_entry_pane_g1_ParamLimits

0x2494,	// (0x000313fb) field_vitu2_entry_pane_g2_ParamLimits

0xf01f,	// (0x0003df86) field_vitu2_entry_pane_g3_ParamLimits

0xf01f,	// (0x0003df86) field_vitu2_entry_pane_g3

0xf8ba,	// (0x0003e821) field_vitu2_entry_pane_g_ParamLimits

0xa786,	// (0x000396ed) cell_vitu2_itu_pane_g1_ParamLimits

0xa79e,	// (0x00039705) cell_vitu2_itu_pane_g2_ParamLimits

0xa79e,	// (0x00039705) cell_vitu2_itu_pane_g2

0x0001,

0xf8c6,	// (0x0003e82d) cell_vitu2_itu_pane_g_ParamLimits

0xf8c6,	// (0x0003e82d) cell_vitu2_itu_pane_g

0xdd67,	// (0x0003ccce) bg_vkb2_func_pane_cp05_ParamLimits

0xdd67,	// (0x0003ccce) bg_vkb2_func_pane_cp05

0xdd67,	// (0x0003ccce) bg_vkb2_func_pane_cp03

0xdd67,	// (0x0003ccce) bg_vkb2_func_pane_cp04

0xdd67,	// (0x0003ccce) bg_vkb2_func_pane_cp10_ParamLimits

0xdd67,	// (0x0003ccce) bg_vkb2_func_pane_cp10

0x5584,	// (0x000344eb) bg_vkb2_func_pane_cp08

0xb26f,	// (0x0003a1d6) bg_vkb2_func_pane_cp06

0xb27d,	// (0x0003a1e4) bg_vkb2_func_pane_cp07

0x2b74,	// (0x00031adb) bg_vkb2_func_pane_cp11_ParamLimits

0x2b74,	// (0x00031adb) bg_vkb2_func_pane_cp11

0x2b89,	// (0x00031af0) bg_vkb2_func_pane_cp12_ParamLimits

0x2b89,	// (0x00031af0) bg_vkb2_func_pane_cp12

0xd6bf,	// (0x0003c626) bg_vkb2_func_pane_cp09

0x24cf,	// (0x00031436) bg_vkb2_func_pane_g1

0xe23f,	// (0x0003d1a6) bg_vkb2_func_pane_g2

0x24d7,	// (0x0003143e) bg_vkb2_func_pane_g3

0x24df,	// (0x00031446) bg_vkb2_func_pane_g4

0x276c,	// (0x000316d3) bg_vkb2_func_pane_g5

0x24f7,	// (0x0003145e) bg_vkb2_func_pane_g6

0x24ff,	// (0x00031466) bg_vkb2_func_pane_g7

0x24ef,	// (0x00031456) bg_vkb2_func_pane_g8

0xe21f,	// (0x0003d186) bg_vkb2_func_pane_g9

0x0008,

0xfac1,	// (0x0003ea28) bg_vkb2_func_pane_g

0xb568,	// (0x0003a4cf) blid2_tripm_pane_g6_ParamLimits

0xb568,	// (0x0003a4cf) blid2_tripm_pane_g6

0x226d,	// (0x000311d4) mp4_progress_pane_g1

0xb5c2,	// (0x0003a529) blid2_tripm_values_pane_ParamLimits

0xb5c2,	// (0x0003a529) blid2_tripm_values_pane

0xb67f,	// (0x0003a5e6) blid2_tripm_values_pane_t1

0xb68d,	// (0x0003a5f4) blid2_tripm_values_pane_t2

0xb69b,	// (0x0003a602) blid2_tripm_values_pane_t3

0xb6a9,	// (0x0003a610) blid2_tripm_values_pane_t4

0xb6b7,	// (0x0003a61e) blid2_tripm_values_pane_t5

0xb6c5,	// (0x0003a62c) blid2_tripm_values_pane_t6

0xb6d3,	// (0x0003a63a) blid2_tripm_values_pane_t7

0xb6e1,	// (0x0003a648) blid2_tripm_values_pane_t8

0xb6ef,	// (0x0003a656) blid2_tripm_values_pane_t9

0x0008,

0xfad4,	// (0x0003ea3b) blid2_tripm_values_pane_t

0x6c2e,	// (0x00035b95) call_video_pane_t1_ParamLimits

0x6c4f,	// (0x00035bb6) call_video_pane_t2_ParamLimits

0xf222,	// (0x0003e189) call_video_pane_t_ParamLimits

0x514c,	// (0x000340b3) msg_header_pane_g1_ParamLimits

0xeb77,	// (0x0003dade) msg_header_pane_g2_ParamLimits

0xeb77,	// (0x0003dade) msg_header_pane_g2

0x0001,

0xf41c,	// (0x0003e383) msg_header_pane_g_ParamLimits

0xf41c,	// (0x0003e383) msg_header_pane_g

0xde32,	// (0x0003cd99) main_clock2_pane_ParamLimits

0x9806,	// (0x0003876d) grid_clock2_toolbar_pane_ParamLimits

0x9806,	// (0x0003876d) grid_clock2_toolbar_pane

0x9806,	// (0x0003876d) listscroll_clock2_pane_ParamLimits

0x9806,	// (0x0003876d) listscroll_clock2_pane

0x98b6,	// (0x0003881d) main_clock2_pane_t3_ParamLimits

0x98b6,	// (0x0003881d) main_clock2_pane_t3

0x98c8,	// (0x0003882f) main_clock2_pane_t4_ParamLimits

0x98c8,	// (0x0003882f) main_clock2_pane_t4

0x2c92,	// (0x00031bf9) cell_clock2_toolbar_pane

0x2c9a,	// (0x00031c01) cell_clock2_toolbar_pane_cp01

0x2c9a,	// (0x00031c01) cell_clock2_toolbar_pane_cp02

0x2ca2,	// (0x00031c09) cell_clock2_toolbar_pane_cp03

0x2caa,	// (0x00031c11) list_clock2_pane

0xe7e5,	// (0x0003d74c) scroll_pane_cp10

0x2cb2,	// (0x00031c19) list_single_clock2_pane_ParamLimits

0x2cb2,	// (0x00031c19) list_single_clock2_pane

0xdfe4,	// (0x0003cf4b) list_highlight_pane_cp08

0x2cbf,	// (0x00031c26) list_single_clock2_pane_t1

0x2ccd,	// (0x00031c34) list_single_clock2_pane_t2

0x0001,

0xfae7,	// (0x0003ea4e) list_single_clock2_pane_t

0xd6bf,	// (0x0003c626) bg_button_pane_cp10

0x2cdb,	// (0x00031c42) cell_clock2_toolbar_pane_g1

0x83e5,	// (0x0003734c) aid_main_viewer_pane_g1_ParamLimits

0x83e5,	// (0x0003734c) aid_main_viewer_pane_g1

0x83f1,	// (0x00037358) aid_main_viewer_pane_g2_ParamLimits

0x83f1,	// (0x00037358) aid_main_viewer_pane_g2

0x83fd,	// (0x00037364) aid_main_viewer_pane_g3_ParamLimits

0x83fd,	// (0x00037364) aid_main_viewer_pane_g3

0x840e,	// (0x00037375) aid_main_viewer_pane_g4_ParamLimits

0x840e,	// (0x00037375) aid_main_viewer_pane_g4

0x0003,

0xf42d,	// (0x0003e394) aid_main_viewer_pane_g_ParamLimits

0xf42d,	// (0x0003e394) aid_main_viewer_pane_g

0x8bda,	// (0x00037b41) main_calc_pane_ParamLimits

0x8be7,	// (0x00037b4e) main_dialer2_pane_ParamLimits

0xd6bf,	// (0x0003c626) main_cam6_pane

0xd6bf,	// (0x0003c626) main_vid6_pane

0x9812,	// (0x00038779) listscroll_gen_pane_cp06_ParamLimits

0x9812,	// (0x00038779) listscroll_gen_pane_cp06

0x98da,	// (0x00038841) main_clock2_pane_t5_ParamLimits

0x98da,	// (0x00038841) main_clock2_pane_t5

0x9927,	// (0x0003888e) aid_call2_pane_cp10_ParamLimits

0x9939,	// (0x000388a0) aid_call_pane_cp10_ParamLimits

0xe854,	// (0x0003d7bb) popup_clock_analogue_window_cp10_g1_ParamLimits

0xe854,	// (0x0003d7bb) popup_clock_analogue_window_cp10_g2_ParamLimits

0x994b,	// (0x000388b2) popup_clock_analogue_window_cp10_g3_ParamLimits

0x994b,	// (0x000388b2) popup_clock_analogue_window_cp10_g4_ParamLimits

0xe854,	// (0x0003d7bb) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf774,	// (0x0003e6db) popup_clock_analogue_window_cp10_g_ParamLimits

0x9961,	// (0x000388c8) popup_clock_analogue_window_cp10_t1_ParamLimits

0xa05e,	// (0x00038fc5) cell_dialer2_keypad_pane_g2_ParamLimits

0xa05e,	// (0x00038fc5) cell_dialer2_keypad_pane_g2

0x0001,

0xf859,	// (0x0003e7c0) cell_dialer2_keypad_pane_g_ParamLimits

0xf859,	// (0x0003e7c0) cell_dialer2_keypad_pane_g

0xa07a,	// (0x00038fe1) cell_dialer2_keypad_pane_t1

0xaaca,	// (0x00039a31) main_cset_text2_pane_ParamLimits

0xaaca,	// (0x00039a31) main_cset_text2_pane

0x29b3,	// (0x0003191a) area_vitu2_query_pane_g1_ParamLimits

0x54af,	// (0x00034416) area_vitu2_query_pane_g2_ParamLimits

0xfa04,	// (0x0003e96b) area_vitu2_query_pane_g_ParamLimits

0x5560,	// (0x000344c7) area_vitu2_query_pane_t7_ParamLimits

0x5560,	// (0x000344c7) area_vitu2_query_pane_t7

0xb26f,	// (0x0003a1d6) bg_button_pane_cp018_ParamLimits

0xb27d,	// (0x0003a1e4) bg_button_pane_cp021_ParamLimits

0x5584,	// (0x000344eb) bg_button_pane_cp022_ParamLimits

0x5584,	// (0x000344eb) bg_vkb2_func_pane_cp08_ParamLimits

0xb26f,	// (0x0003a1d6) bg_vkb2_func_pane_cp06_ParamLimits

0xb27d,	// (0x0003a1e4) bg_vkb2_func_pane_cp07_ParamLimits

0x5595,	// (0x000344fc) input_focus_pane_cp09_ParamLimits

0xb6fd,	// (0x0003a664) cam6_autofocus_pane_ParamLimits

0xb6fd,	// (0x0003a664) cam6_autofocus_pane

0xb71f,	// (0x0003a686) cam6_image_uncrop_pane_ParamLimits

0xb71f,	// (0x0003a686) cam6_image_uncrop_pane

0xb74c,	// (0x0003a6b3) cam6_indi_pane_ParamLimits

0xb74c,	// (0x0003a6b3) cam6_indi_pane

0xb766,	// (0x0003a6cd) cam6_mode_pane_ParamLimits

0xb766,	// (0x0003a6cd) cam6_mode_pane

0xb77a,	// (0x0003a6e1) cam6_timer_pane_ParamLimits

0xb77a,	// (0x0003a6e1) cam6_timer_pane

0xb78b,	// (0x0003a6f2) cam6_zoom_pane_ParamLimits

0xb78b,	// (0x0003a6f2) cam6_zoom_pane

0xb7a3,	// (0x0003a70a) cam6_mode_pane_g1_ParamLimits

0xb7a3,	// (0x0003a70a) cam6_mode_pane_g1

0xb7af,	// (0x0003a716) cam6_mode_pane_g2_ParamLimits

0xb7af,	// (0x0003a716) cam6_mode_pane_g2

0xb7bb,	// (0x0003a722) cam6_mode_pane_g3_ParamLimits

0xb7bb,	// (0x0003a722) cam6_mode_pane_g3

0xb7c7,	// (0x0003a72e) cam6_mode_pane_g4_ParamLimits

0xb7c7,	// (0x0003a72e) cam6_mode_pane_g4

0x0003,

0xfaec,	// (0x0003ea53) cam6_mode_pane_g_ParamLimits

0xfaec,	// (0x0003ea53) cam6_mode_pane_g

0x2cf1,	// (0x00031c58) bg_tb_trans_pane_cp08_ParamLimits

0x2cf1,	// (0x00031c58) bg_tb_trans_pane_cp08

0x2cff,	// (0x00031c66) cam6_battery_pane_ParamLimits

0x2cff,	// (0x00031c66) cam6_battery_pane

0x2d15,	// (0x00031c7c) cam6_indi_pane_g1_ParamLimits

0x2d15,	// (0x00031c7c) cam6_indi_pane_g1

0x2d27,	// (0x00031c8e) cam6_indi_pane_g2_ParamLimits

0x2d27,	// (0x00031c8e) cam6_indi_pane_g2

0x2d39,	// (0x00031ca0) cam6_indi_pane_g3_ParamLimits

0x2d39,	// (0x00031ca0) cam6_indi_pane_g3

0x0002,

0xfaf5,	// (0x0003ea5c) cam6_indi_pane_g_ParamLimits

0xfaf5,	// (0x0003ea5c) cam6_indi_pane_g

0x2d4b,	// (0x00031cb2) cam6_indi_pane_t1_ParamLimits

0x2d4b,	// (0x00031cb2) cam6_indi_pane_t1

0xa5f4,	// (0x0003955b) cam6_autofocus_pane_g1

0xa5fc,	// (0x00039563) cam6_autofocus_pane_g2

0xa604,	// (0x0003956b) cam6_autofocus_pane_g3

0xa60c,	// (0x00039573) cam6_autofocus_pane_g4

0x0003,

0xfafc,	// (0x0003ea63) cam6_autofocus_pane_g

0x2d71,	// (0x00031cd8) cam6_timer_pane_g1

0x2d79,	// (0x00031ce0) cam6_timer_pane_t1

0x2d87,	// (0x00031cee) cam6_zoom_cont_pane

0x2d8f,	// (0x00031cf6) cam6_zoom_pane_g1

0x2d97,	// (0x00031cfe) cam6_zoom_pane_g2

0xb7d3,	// (0x0003a73a) cam6_zoom_pane_g3

0x0002,

0xfb05,	// (0x0003ea6c) cam6_zoom_pane_g

0xe01a,	// (0x0003cf81) cam6_battery_pane_g1

0xe01a,	// (0x0003cf81) cam6_battery_pane_g2

0x0001,

0xf3dd,	// (0x0003e344) cam6_battery_pane_g

0x2d9f,	// (0x00031d06) cam6_zoom_cont_pane_g1

0x2da8,	// (0x00031d0f) cam6_zoom_cont_pane_g2

0x2db1,	// (0x00031d18) cam6_zoom_cont_pane_g3

0x0002,

0xfb0c,	// (0x0003ea73) cam6_zoom_cont_pane_g

0xb7f0,	// (0x0003a757) cam6_mode_pane_cp_ParamLimits

0xb7f0,	// (0x0003a757) cam6_mode_pane_cp

0xb78b,	// (0x0003a6f2) cam6_zoom_pane_cp_ParamLimits

0xb78b,	// (0x0003a6f2) cam6_zoom_pane_cp

0xb804,	// (0x0003a76b) vid6_image_uncrop_cif_pane_ParamLimits

0xb804,	// (0x0003a76b) vid6_image_uncrop_cif_pane

0xb830,	// (0x0003a797) vid6_image_uncrop_nhd_pane_ParamLimits

0xb830,	// (0x0003a797) vid6_image_uncrop_nhd_pane

0xb71f,	// (0x0003a686) vid6_image_uncrop_vga_pane_ParamLimits

0xb71f,	// (0x0003a686) vid6_image_uncrop_vga_pane

0xb84d,	// (0x0003a7b4) vid6_image_uncrop_wvga_pane_ParamLimits

0xb84d,	// (0x0003a7b4) vid6_image_uncrop_wvga_pane

0xb86a,	// (0x0003a7d1) vid6_indi_pane_ParamLimits

0xb86a,	// (0x0003a7d1) vid6_indi_pane

0x2cf1,	// (0x00031c58) bg_tb_trans_pane_cp09_ParamLimits

0x2cf1,	// (0x00031c58) bg_tb_trans_pane_cp09

0x2dc9,	// (0x00031d30) cam6_battery_pane_cp_ParamLimits

0x2dc9,	// (0x00031d30) cam6_battery_pane_cp

0x2dd5,	// (0x00031d3c) vid6_indi_pane_g1_ParamLimits

0x2dd5,	// (0x00031d3c) vid6_indi_pane_g1

0x2de7,	// (0x00031d4e) vid6_indi_pane_g2_ParamLimits

0x2de7,	// (0x00031d4e) vid6_indi_pane_g2

0x2df9,	// (0x00031d60) vid6_indi_pane_g3_ParamLimits

0x2df9,	// (0x00031d60) vid6_indi_pane_g3

0x2e0e,	// (0x00031d75) vid6_indi_pane_g4_ParamLimits

0x2e0e,	// (0x00031d75) vid6_indi_pane_g4

0x2e23,	// (0x00031d8a) vid6_indi_pane_g5_ParamLimits

0x2e23,	// (0x00031d8a) vid6_indi_pane_g5

0x0004,

0xfb13,	// (0x0003ea7a) vid6_indi_pane_g_ParamLimits

0xfb13,	// (0x0003ea7a) vid6_indi_pane_g

0x2e3d,	// (0x00031da4) vid6_indi_pane_t1_ParamLimits

0x2e3d,	// (0x00031da4) vid6_indi_pane_t1

0x2e53,	// (0x00031dba) vid6_indi_pane_t2_ParamLimits

0x2e53,	// (0x00031dba) vid6_indi_pane_t2

0x2e7b,	// (0x00031de2) vid6_indi_pane_t3_ParamLimits

0x2e7b,	// (0x00031de2) vid6_indi_pane_t3

0x2ea3,	// (0x00031e0a) vid6_indi_pane_t4_ParamLimits

0x2ea3,	// (0x00031e0a) vid6_indi_pane_t4

0x0003,

0xfb1e,	// (0x0003ea85) vid6_indi_pane_t_ParamLimits

0xfb1e,	// (0x0003ea85) vid6_indi_pane_t

0x2ec7,	// (0x00031e2e) wait_bar_pane_cp08

0xb88d,	// (0x0003a7f4) main_cset_text2_pane_t1_ParamLimits

0xb88d,	// (0x0003a7f4) main_cset_text2_pane_t1

0xb7db,	// (0x0003a742) listscroll_gen_pane_cp06_t1_ParamLimits

0xb7db,	// (0x0003a742) listscroll_gen_pane_cp06_t1

0xd6bf,	// (0x0003c626) main_cam6_set_pane

0xddc0,	// (0x0003cd27) bg_tb_trans_pane_cp06_ParamLimits

0xa4ae,	// (0x00039415) cam4_indicators_pane_g1_ParamLimits

0xa4bf,	// (0x00039426) cam4_indicators_pane_g2_ParamLimits

0xf896,	// (0x0003e7fd) cam4_indicators_pane_g_ParamLimits

0xa4d7,	// (0x0003943e) cam4_indicators_pane_t1_ParamLimits

0xdd67,	// (0x0003ccce) bg_tb_trans_pane_cp07_ParamLimits

0xa588,	// (0x000394ef) vid4_indicators_pane_g1_ParamLimits

0xa59c,	// (0x00039503) vid4_indicators_pane_g2_ParamLimits

0xa5b0,	// (0x00039517) vid4_indicators_pane_g3_ParamLimits

0xa5c1,	// (0x00039528) vid4_indicators_pane_g4_ParamLimits

0xf8a8,	// (0x0003e80f) vid4_indicators_pane_g_ParamLimits

0xa5dd,	// (0x00039544) vid4_indicators_pane_t1_ParamLimits

0xb3ad,	// (0x0003a314) vid4_progress_pane_g1_ParamLimits

0xb3bd,	// (0x0003a324) vid4_progress_pane_g2_ParamLimits

0xb3cd,	// (0x0003a334) vid4_progress_pane_g3_ParamLimits

0xb3df,	// (0x0003a346) vid4_progress_pane_g4_ParamLimits

0xfa4f,	// (0x0003e9b6) vid4_progress_pane_g_ParamLimits

0xb3f7,	// (0x0003a35e) vid4_progress_pane_t1_ParamLimits

0xb40d,	// (0x0003a374) vid4_progress_pane_t2_ParamLimits

0xb422,	// (0x0003a389) vid4_progress_pane_t3_ParamLimits

0xfa5a,	// (0x0003e9c1) vid4_progress_pane_t_ParamLimits

0xb438,	// (0x0003a39f) wait_bar_pane_cp07_ParamLimits

0xb8c4,	// (0x0003a82b) main_cam6_set_pane_g2_ParamLimits

0xb8c4,	// (0x0003a82b) main_cam6_set_pane_g2

0xb8d0,	// (0x0003a837) main_cset6_listscroll_pane_ParamLimits

0xb8d0,	// (0x0003a837) main_cset6_listscroll_pane

0xb8fb,	// (0x0003a862) main_cset6_slider_pane_ParamLimits

0xb8fb,	// (0x0003a862) main_cset6_slider_pane

0xb907,	// (0x0003a86e) main_cset6_text2_pane_ParamLimits

0xb907,	// (0x0003a86e) main_cset6_text2_pane

0x2ed6,	// (0x00031e3d) main_cset6_text_pane

0x2ede,	// (0x00031e45) main_cset_list_pane_copy1_ParamLimits

0x2ede,	// (0x00031e45) main_cset_list_pane_copy1

0x2eee,	// (0x00031e55) scroll_pane_cp028_copy1

0xb91a,	// (0x0003a881) cset_list_set_pane_copy1

0xb930,	// (0x0003a897) aid_position_infowindow_above_copy1

0xb938,	// (0x0003a89f) aid_position_infowindow_below_copy1

0x55d3,	// (0x0003453a) cset_list_set_pane_g1_copy1

0x5374,	// (0x000342db) cset_list_set_pane_g3_copy1_ParamLimits

0x5374,	// (0x000342db) cset_list_set_pane_g3_copy1

0x5383,	// (0x000342ea) cset_list_set_pane_t1_copy1_ParamLimits

0x5383,	// (0x000342ea) cset_list_set_pane_t1_copy1

0xdd67,	// (0x0003ccce) list_highlight_pane_cp021_copy1_ParamLimits

0xdd67,	// (0x0003ccce) list_highlight_pane_cp021_copy1

0x2f23,	// (0x00031e8a) cset6_slider_pane_ParamLimits

0x2f23,	// (0x00031e8a) cset6_slider_pane

0x2f4f,	// (0x00031eb6) main_cset6_slider_pane_g1_ParamLimits

0x2f4f,	// (0x00031eb6) main_cset6_slider_pane_g1

0xb940,	// (0x0003a8a7) main_cset6_slider_pane_g2_ParamLimits

0xb940,	// (0x0003a8a7) main_cset6_slider_pane_g2

0x2f77,	// (0x00031ede) main_cset6_slider_pane_g3_ParamLimits

0x2f77,	// (0x00031ede) main_cset6_slider_pane_g3

0xb968,	// (0x0003a8cf) main_cset6_slider_pane_g4_ParamLimits

0xb968,	// (0x0003a8cf) main_cset6_slider_pane_g4

0xb974,	// (0x0003a8db) main_cset6_slider_pane_g5_ParamLimits

0xb974,	// (0x0003a8db) main_cset6_slider_pane_g5

0x25fe,	// (0x00031565) main_cset6_slider_pane_g7_ParamLimits

0x25fe,	// (0x00031565) main_cset6_slider_pane_g7

0x260a,	// (0x00031571) main_cset6_slider_pane_g8_ParamLimits

0x260a,	// (0x00031571) main_cset6_slider_pane_g8

0xb982,	// (0x0003a8e9) main_cset6_slider_pane_g9_ParamLimits

0xb982,	// (0x0003a8e9) main_cset6_slider_pane_g9

0xb98e,	// (0x0003a8f5) main_cset6_slider_pane_g10_ParamLimits

0xb98e,	// (0x0003a8f5) main_cset6_slider_pane_g10

0xb99a,	// (0x0003a901) main_cset6_slider_pane_g11_ParamLimits

0xb99a,	// (0x0003a901) main_cset6_slider_pane_g11

0xb9a6,	// (0x0003a90d) main_cset6_slider_pane_g12_ParamLimits

0xb9a6,	// (0x0003a90d) main_cset6_slider_pane_g12

0x2616,	// (0x0003157d) main_cset6_slider_pane_g13_ParamLimits

0x2616,	// (0x0003157d) main_cset6_slider_pane_g13

0x2622,	// (0x00031589) main_cset6_slider_pane_g14_ParamLimits

0x2622,	// (0x00031589) main_cset6_slider_pane_g14

0xb9b2,	// (0x0003a919) main_cset6_slider_pane_g15_ParamLimits

0xb9b2,	// (0x0003a919) main_cset6_slider_pane_g15

0xb9ca,	// (0x0003a931) main_cset6_slider_pane_g16_ParamLimits

0xb9ca,	// (0x0003a931) main_cset6_slider_pane_g16

0xb9d8,	// (0x0003a93f) main_cset6_slider_pane_g17_ParamLimits

0xb9d8,	// (0x0003a93f) main_cset6_slider_pane_g17

0x0011,

0xfb27,	// (0x0003ea8e) main_cset6_slider_pane_g_ParamLimits

0xfb27,	// (0x0003ea8e) main_cset6_slider_pane_g

0x2f8f,	// (0x00031ef6) main_cset6_slider_pane_t1_ParamLimits

0x2f8f,	// (0x00031ef6) main_cset6_slider_pane_t1

0xb9f2,	// (0x0003a959) main_cset6_slider_pane_t2_ParamLimits

0xb9f2,	// (0x0003a959) main_cset6_slider_pane_t2

0xba1d,	// (0x0003a984) main_cset6_slider_pane_t3_ParamLimits

0xba1d,	// (0x0003a984) main_cset6_slider_pane_t3

0xba48,	// (0x0003a9af) main_cset6_slider_pane_t4_ParamLimits

0xba48,	// (0x0003a9af) main_cset6_slider_pane_t4

0xba73,	// (0x0003a9da) main_cset6_slider_pane_t5_ParamLimits

0xba73,	// (0x0003a9da) main_cset6_slider_pane_t5

0x2fd0,	// (0x00031f37) main_cset6_slider_pane_t7_ParamLimits

0x2fd0,	// (0x00031f37) main_cset6_slider_pane_t7

0xbaa0,	// (0x0003aa07) main_cset6_slider_pane_t8_ParamLimits

0xbaa0,	// (0x0003aa07) main_cset6_slider_pane_t8

0xbac4,	// (0x0003aa2b) main_cset6_slider_pane_t9_ParamLimits

0xbac4,	// (0x0003aa2b) main_cset6_slider_pane_t9

0xbae8,	// (0x0003aa4f) main_cset6_slider_pane_t10_ParamLimits

0xbae8,	// (0x0003aa4f) main_cset6_slider_pane_t10

0xbb0c,	// (0x0003aa73) main_cset6_slider_pane_t11_ParamLimits

0xbb0c,	// (0x0003aa73) main_cset6_slider_pane_t11

0x3006,	// (0x00031f6d) main_cset6_slider_pane_t14_ParamLimits

0x3006,	// (0x00031f6d) main_cset6_slider_pane_t14

0x303f,	// (0x00031fa6) main_cset6_slider_pane_t15_ParamLimits

0x303f,	// (0x00031fa6) main_cset6_slider_pane_t15

0x000b,

0xfb4c,	// (0x0003eab3) main_cset6_slider_pane_t_ParamLimits

0xfb4c,	// (0x0003eab3) main_cset6_slider_pane_t

0x1f0b,	// (0x00030e72) cset_slider_pane_g1_copy1

0x3078,	// (0x00031fdf) cset_slider_pane_g2_copy1

0x3081,	// (0x00031fe8) cset_slider_pane_g3_copy1

0xd6bf,	// (0x0003c626) bg_popup_sub_pane_cp011_copy1

0x3093,	// (0x00031ffa) main_cset_text_pane_g1_copy1

0x27db,	// (0x00031742) main_cset_text_pane_t1_copy1

0x27e9,	// (0x00031750) main_cset_text_pane_t2_copy1

0x27f7,	// (0x0003175e) main_cset_text_pane_t3_copy1

0x2805,	// (0x0003176c) main_cset_text_pane_t4_copy1

0x2813,	// (0x0003177a) main_cset_text_pane_t5_copy1

0x309b,	// (0x00032002) main_cset_text_pane_t6_copy1

0x30a9,	// (0x00032010) main_cset_text_pane_t7_copy1

0xbb32,	// (0x0003aa99) main_cset_text2_pane_t1_copy1

0xdd67,	// (0x0003ccce) main_ncimui_pane

0x8c44,	// (0x00037bab) popup_query_ncimui_window_ParamLimits

0x8c44,	// (0x00037bab) popup_query_ncimui_window

0x5216,	// (0x0003417d) field_cale_ev2_pane_g4_ParamLimits

0x5216,	// (0x0003417d) field_cale_ev2_pane_g4

0x9d3e,	// (0x00038ca5) cell_video_dialer_keypad_pane_g2_ParamLimits

0x9d3e,	// (0x00038ca5) cell_video_dialer_keypad_pane_g2

0x0001,

0xf830,	// (0x0003e797) cell_video_dialer_keypad_pane_g_ParamLimits

0xf830,	// (0x0003e797) cell_video_dialer_keypad_pane_g

0x9d56,	// (0x00038cbd) cell_video_dialer_keypad_pane_t1

0xd6bf,	// (0x0003c626) bg_popup_window_pane_cp012

0x11e5,	// (0x0003014c) heading_pane_cp06

0x30d5,	// (0x0003203c) ncim_query_content_pane

0xd6bf,	// (0x0003c626) bg_popup_heading_pane_cp01

0x30dd,	// (0x00032044) ncim_heading_pane_t1

0x30eb,	// (0x00032052) ncim_indicator_popup_pane

0x30fd,	// (0x00032064) ncim_query_button_pane

0x3111,	// (0x00032078) ncim_query_content_pane_t1

0x3123,	// (0x0003208a) ncim_query_content_pane_t2

0x0005,

0xfb90,	// (0x0003eaf7) ncim_query_content_pane_t

0x315d,	// (0x000320c4) ncim_query_list_pane

0x316f,	// (0x000320d6) ncim_query_popup_pane

0x30eb,	// (0x00032052) ncim_indicator_popup_pane_ParamLimits

0xbc86,	// (0x0003abed) ncim_query_content_pane_g1_ParamLimits

0xbc86,	// (0x0003abed) ncim_query_content_pane_g1

0x3111,	// (0x00032078) ncim_query_content_pane_t1_ParamLimits

0x3123,	// (0x0003208a) ncim_query_content_pane_t2_ParamLimits

0xbc92,	// (0x0003abf9) ncim_query_content_pane_t3_ParamLimits

0xbc92,	// (0x0003abf9) ncim_query_content_pane_t3

0xbcaf,	// (0x0003ac16) ncim_query_content_pane_t4_ParamLimits

0xbcaf,	// (0x0003ac16) ncim_query_content_pane_t4

0xbccc,	// (0x0003ac33) ncim_query_content_pane_t5_ParamLimits

0xbccc,	// (0x0003ac33) ncim_query_content_pane_t5

0x3135,	// (0x0003209c) ncim_query_content_pane_t6_ParamLimits

0x3135,	// (0x0003209c) ncim_query_content_pane_t6

0xfb90,	// (0x0003eaf7) ncim_query_content_pane_t_ParamLimits

0x315d,	// (0x000320c4) ncim_query_list_pane_ParamLimits

0x316f,	// (0x000320d6) ncim_query_popup_pane_ParamLimits

0x3183,	// (0x000320ea) wait_bar_pane_cp04

0xd6bf,	// (0x0003c626) input_focus_pane_cp011

0x318b,	// (0x000320f2) ncim_query_popup_pane_t1

0x3199,	// (0x00032100) ncim_list_query_list_pane_ParamLimits

0x3199,	// (0x00032100) ncim_list_query_list_pane

0xd6bf,	// (0x0003c626) bg_button_pane_cp027

0x31a6,	// (0x0003210d) ncim_query_button_pane_g1

0xd6bf,	// (0x0003c626) list_highlight_pane_cp012

0x31b0,	// (0x00032117) ncim_list_query_list_pane_g1

0x31b8,	// (0x0003211f) ncim_list_query_list_pane_t1

0xa4cb,	// (0x00039432) cam4_indicators_pane_g3_ParamLimits

0xa4cb,	// (0x00039432) cam4_indicators_pane_g3

0xa5cd,	// (0x00039534) vid4_indicators_pane_g5_ParamLimits

0xa5cd,	// (0x00039534) vid4_indicators_pane_g5

0xb3eb,	// (0x0003a352) vid4_progress_pane_g5_ParamLimits

0xb3eb,	// (0x0003a352) vid4_progress_pane_g5

0xbb72,	// (0x0003aad9) main_ncimui_pane_g1

0xbbda,	// (0x0003ab41) ncimui_group_query_pane_ParamLimits

0xbbda,	// (0x0003ab41) ncimui_group_query_pane

0xbc22,	// (0x0003ab89) ncimui_list_pane_ParamLimits

0xbc22,	// (0x0003ab89) ncimui_list_pane

0xbc49,	// (0x0003abb0) ncimui_text_pane_ParamLimits

0xbc49,	// (0x0003abb0) ncimui_text_pane

0xbce9,	// (0x0003ac50) ncimui_text_pane_t1_ParamLimits

0xbce9,	// (0x0003ac50) ncimui_text_pane_t1

0x31c6,	// (0x0003212d) ncimui_list_single_graphic_pane_ParamLimits

0x31c6,	// (0x0003212d) ncimui_list_single_graphic_pane

0xbd08,	// (0x0003ac6f) ncimui_query_pane_ParamLimits

0xbd08,	// (0x0003ac6f) ncimui_query_pane

0xd6bf,	// (0x0003c626) list_highlight_pane_cp013

0x31d6,	// (0x0003213d) ncim_list_query_list_pane_t1_copy1

0x31e4,	// (0x0003214b) ncim_list_single_graphic_pane_g1

0xbd1b,	// (0x0003ac82) ncim_query_button_pane_cp01

0xbd27,	// (0x0003ac8e) ncim_query_entry_pane_ParamLimits

0xbd27,	// (0x0003ac8e) ncim_query_entry_pane

0xbd3a,	// (0x0003aca1) ncimui_query_pane_g1

0xbd46,	// (0x0003acad) ncimui_query_pane_t1_ParamLimits

0xbd46,	// (0x0003acad) ncimui_query_pane_t1

0xdd67,	// (0x0003ccce) input_focus_pane_cp012

0x31ec,	// (0x00032153) ncim_query_entry_pane_t1

0xde32,	// (0x0003cd99) main_im_pane_ParamLimits

0xdd67,	// (0x0003ccce) main_mobtv_pane_ParamLimits

0xdd67,	// (0x0003ccce) main_mobtv_pane

0xb9e6,	// (0x0003a94d) main_cset6_slider_pane_g18_ParamLimits

0xb9e6,	// (0x0003a94d) main_cset6_slider_pane_g18

0x2f83,	// (0x00031eea) main_cset6_slider_pane_g19_ParamLimits

0x2f83,	// (0x00031eea) main_cset6_slider_pane_g19

0xf01f,	// (0x0003df86) bg_main_mobtv_pane_ParamLimits

0xf01f,	// (0x0003df86) bg_main_mobtv_pane

0xbd5f,	// (0x0003acc6) main_mobtv_info_pane

0xbd6a,	// (0x0003acd1) main_mobtv_loading_pane_ParamLimits

0xbd6a,	// (0x0003acd1) main_mobtv_loading_pane

0x31fe,	// (0x00032165) main_mobtv_pg_channel_list_pane

0x3208,	// (0x0003216f) main_mobtv_pg_hdr_pane

0xbd77,	// (0x0003acde) main_mobtv_programe_curr_pane_ParamLimits

0xbd77,	// (0x0003acde) main_mobtv_programe_curr_pane

0xbd84,	// (0x0003aceb) main_mobtv_programe_next_pane_ParamLimits

0xbd84,	// (0x0003aceb) main_mobtv_programe_next_pane

0x3211,	// (0x00032178) popup_mobtv_noti_window

0xe01a,	// (0x0003cf81) main_tv_pg_hdr_pane_g1

0x3219,	// (0x00032180) main_tv_pg_hdr_pane_g2

0x3221,	// (0x00032188) main_tv_pg_hdr_pane_g3

0x3229,	// (0x00032190) main_tv_pg_hdr_pane_g4

0x3231,	// (0x00032198) main_tv_pg_hdr_pane_g5

0x323b,	// (0x000321a2) main_tv_pg_hdr_pane_g6

0x3245,	// (0x000321ac) main_tv_pg_hdr_pane_g7

0x324f,	// (0x000321b6) main_tv_pg_hdr_pane_g8

0x3259,	// (0x000321c0) main_tv_pg_hdr_pane_g9

0x3263,	// (0x000321ca) main_tv_pg_hdr_pane_g10

0x326d,	// (0x000321d4) main_tv_pg_hdr_pane_g11

0x000a,

0xfb9d,	// (0x0003eb04) main_tv_pg_hdr_pane_g

0x3277,	// (0x000321de) main_tv_pg_hdr_pane_t1

0x3285,	// (0x000321ec) main_tv_pg_hdr_pane_t2

0x3293,	// (0x000321fa) main_tv_pg_hdr_pane_t3

0x32a3,	// (0x0003220a) main_tv_pg_hdr_pane_t4

0x32b3,	// (0x0003221a) main_tv_pg_hdr_pane_t5

0x0004,

0xfbb4,	// (0x0003eb1b) main_tv_pg_hdr_pane_t

0x32c3,	// (0x0003222a) single_mobtv_pg_channel_pane_ParamLimits

0x32c3,	// (0x0003222a) single_mobtv_pg_channel_pane

0x32d5,	// (0x0003223c) single_mobtv_pg_channel_table_pane

0xe342,	// (0x0003d2a9) single_mobtv_pg_channel_thumb_pane

0x32de,	// (0x00032245) single_tv_pg_channel_pane_g1

0x32e7,	// (0x0003224e) single_tv_pg_channel_pane_g2

0x0001,

0xfbbf,	// (0x0003eb26) single_tv_pg_channel_pane_g

0xddc0,	// (0x0003cd27) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xddc0,	// (0x0003cd27) bg_single_mobtv_pg_channel_thumb_pane

0x32f0,	// (0x00032257) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0x32f0,	// (0x00032257) single_mobtv_pg_channel_thumb_pane_g1

0x32fe,	// (0x00032265) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0x32fe,	// (0x00032265) single_mobtv_pg_channel_thumb_pane_g2

0x330a,	// (0x00032271) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0x330a,	// (0x00032271) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfbc4,	// (0x0003eb2b) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfbc4,	// (0x0003eb2b) single_mobtv_pg_channel_thumb_pane_g

0x3316,	// (0x0003227d) single_mobtv_pg_channel_thumb_pane_t1

0x3324,	// (0x0003228b) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfbcb,	// (0x0003eb32) single_mobtv_pg_channel_thumb_pane_t

0xe01a,	// (0x0003cf81) bg_single_mobtv_pg_channel_table_pane_g1

0xe01a,	// (0x0003cf81) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf3dd,	// (0x0003e344) bg_single_mobtv_pg_channel_table_pane_g

0x3332,	// (0x00032299) single_mobtv_pg_channel_table_pane_t1

0x3340,	// (0x000322a7) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfbd0,	// (0x0003eb37) single_mobtv_pg_channel_table_pane_t

0xbd99,	// (0x0003ad00) main_mobtv_info_pane_g1_ParamLimits

0xbd99,	// (0x0003ad00) main_mobtv_info_pane_g1

0xbdb5,	// (0x0003ad1c) main_mobtv_info_pane_t1_ParamLimits

0xbdb5,	// (0x0003ad1c) main_mobtv_info_pane_t1

0xbe2d,	// (0x0003ad94) main_mobtv_info_pane_t2_ParamLimits

0xbe2d,	// (0x0003ad94) main_mobtv_info_pane_t2

0x0002,

0xfbda,	// (0x0003eb41) main_mobtv_info_pane_t_ParamLimits

0xfbda,	// (0x0003eb41) main_mobtv_info_pane_t

0xbebc,	// (0x0003ae23) wait_bar_pane_cp05

0xbece,	// (0x0003ae35) main_mobtv_loading_pane_g1_ParamLimits

0xbece,	// (0x0003ae35) main_mobtv_loading_pane_g1

0xbedc,	// (0x0003ae43) main_mobtv_loading_pane_g2_ParamLimits

0xbedc,	// (0x0003ae43) main_mobtv_loading_pane_g2

0xbee8,	// (0x0003ae4f) main_mobtv_loading_pane_g3_ParamLimits

0xbee8,	// (0x0003ae4f) main_mobtv_loading_pane_g3

0x0002,

0xfbe1,	// (0x0003eb48) main_mobtv_loading_pane_g_ParamLimits

0xfbe1,	// (0x0003eb48) main_mobtv_loading_pane_g

0x334e,	// (0x000322b5) main_mobtv_loading_pane_t1_ParamLimits

0x334e,	// (0x000322b5) main_mobtv_loading_pane_t1

0x3366,	// (0x000322cd) main_mobtv_loading_pane_t2_ParamLimits

0x3366,	// (0x000322cd) main_mobtv_loading_pane_t2

0x0001,

0xfbe8,	// (0x0003eb4f) main_mobtv_loading_pane_t_ParamLimits

0xfbe8,	// (0x0003eb4f) main_mobtv_loading_pane_t

0xbef6,	// (0x0003ae5d) wait_bar_pane_cp06_ParamLimits

0xbef6,	// (0x0003ae5d) wait_bar_pane_cp06

0x338a,	// (0x000322f1) main_mobtv_programe_curr_pane_t1

0x3398,	// (0x000322ff) main_mobtv_programe_curr_pane_t2

0x0001,

0xfbed,	// (0x0003eb54) main_mobtv_programe_curr_pane_t

0x33a6,	// (0x0003230d) main_mobtv_programe_next_pane_t1

0x33b4,	// (0x0003231b) main_mobtv_programe_next_pane_t2

0x33c2,	// (0x00032329) main_mobtv_programe_next_pane_t3

0x0002,

0xfbf2,	// (0x0003eb59) main_mobtv_programe_next_pane_t

0xd6bf,	// (0x0003c626) bg_popup_mobtv_noti_window_pane

0x33d0,	// (0x00032337) popup_mobtv_noti_window_g1

0x33d8,	// (0x0003233f) popup_mobtv_noti_window_t1

0x33e6,	// (0x0003234d) popup_mobtv_noti_window_t2

0x0001,

0xfbf9,	// (0x0003eb60) popup_mobtv_noti_window_t

0xe01a,	// (0x0003cf81) bg_popup_mobtv_noti_window_pane_g1

0xd6bf,	// (0x0003c626) sc_clock_pane

0xd6bf,	// (0x0003c626) main_fs_bigclock_pane

0xb5b0,	// (0x0003a517) blid2_tripm_pane_t4_ParamLimits

0xb5b0,	// (0x0003a517) blid2_tripm_pane_t4

0xbf02,	// (0x0003ae69) sc_clock_pane_g1_ParamLimits

0xbf02,	// (0x0003ae69) sc_clock_pane_g1

0xbf10,	// (0x0003ae77) sc_clock_pane_t1_ParamLimits

0xbf10,	// (0x0003ae77) sc_clock_pane_t1

0xbf23,	// (0x0003ae8a) sc_clock_pane_t2_ParamLimits

0xbf23,	// (0x0003ae8a) sc_clock_pane_t2

0xbf35,	// (0x0003ae9c) sc_clock_pane_t3_ParamLimits

0xbf35,	// (0x0003ae9c) sc_clock_pane_t3

0x0004,

0xfbfe,	// (0x0003eb65) sc_clock_pane_t_ParamLimits

0xfbfe,	// (0x0003eb65) sc_clock_pane_t

0xc812,	// (0x0003b779) main_fs_bigclock_indicator_pane_ParamLimits

0xc812,	// (0x0003b779) main_fs_bigclock_indicator_pane

0xbfb8,	// (0x0003af1f) main_fs_bigclock_pane_g1_ParamLimits

0xbfb8,	// (0x0003af1f) main_fs_bigclock_pane_g1

0xc81e,	// (0x0003b785) main_fs_bigclock_pane_t1_ParamLimits

0xc81e,	// (0x0003b785) main_fs_bigclock_pane_t1

0xc830,	// (0x0003b797) main_fs_bigclock_pane_t2_ParamLimits

0xc830,	// (0x0003b797) main_fs_bigclock_pane_t2

0xc844,	// (0x0003b7ab) main_fs_bigclock_pane_t3_ParamLimits

0xc844,	// (0x0003b7ab) main_fs_bigclock_pane_t3

0x0002,

0xfd8f,	// (0x0003ecf6) main_fs_bigclock_pane_t_ParamLimits

0xfd8f,	// (0x0003ecf6) main_fs_bigclock_pane_t

0x3f5a,	// (0x00032ec1) main_fs_bigclock_indicator_pane_g1

0x3105,	// (0x0003206c) ncim_query_content_pane_g2_ParamLimits

0x3105,	// (0x0003206c) ncim_query_content_pane_g2

0x0001,

0xfb8b,	// (0x0003eaf2) ncim_query_content_pane_g_ParamLimits

0xfb8b,	// (0x0003eaf2) ncim_query_content_pane_g

0xbf49,	// (0x0003aeb0) sc_clock_pane_t4_ParamLimits

0xbf49,	// (0x0003aeb0) sc_clock_pane_t4

0xdd67,	// (0x0003ccce) main_radioblah_pane

0xa371,	// (0x000392d8) cell_call4_button_pane_t1_copy1_ParamLimits

0xa371,	// (0x000392d8) cell_call4_button_pane_t1_copy1

0xbb8c,	// (0x0003aaf3) main_ncimui_pane_t1_ParamLimits

0xbb8c,	// (0x0003aaf3) main_ncimui_pane_t1

0xbba6,	// (0x0003ab0d) main_ncimui_pane_t2_ParamLimits

0xbba6,	// (0x0003ab0d) main_ncimui_pane_t2

0x0002,

0xfb84,	// (0x0003eaeb) main_ncimui_pane_t_ParamLimits

0xfb84,	// (0x0003eaeb) main_ncimui_pane_t

0x352c,	// (0x00032493) main_radioblah_anim_pane_ParamLimits

0x352c,	// (0x00032493) main_radioblah_anim_pane

0x353d,	// (0x000324a4) main_radioblah_info_pane_ParamLimits

0x353d,	// (0x000324a4) main_radioblah_info_pane

0x3551,	// (0x000324b8) main_radioblah_pane_t1_ParamLimits

0x3551,	// (0x000324b8) main_radioblah_pane_t1

0x356d,	// (0x000324d4) main_radioblah_pane_t2_ParamLimits

0x356d,	// (0x000324d4) main_radioblah_pane_t2

0x0003,

0xfc1f,	// (0x0003eb86) main_radioblah_pane_t_ParamLimits

0xfc1f,	// (0x0003eb86) main_radioblah_pane_t

0xc00e,	// (0x0003af75) main_radioblah_rocker_ctrl_pane_ParamLimits

0xc00e,	// (0x0003af75) main_radioblah_rocker_ctrl_pane

0x35b5,	// (0x0003251c) main_radioblah_info_pane_t1_ParamLimits

0x35b5,	// (0x0003251c) main_radioblah_info_pane_t1

0xc053,	// (0x0003afba) main_radioblah_info_pane_t2_ParamLimits

0xc053,	// (0x0003afba) main_radioblah_info_pane_t2

0x0003,

0xfc28,	// (0x0003eb8f) main_radioblah_info_pane_t_ParamLimits

0xfc28,	// (0x0003eb8f) main_radioblah_info_pane_t

0xe01a,	// (0x0003cf81) main_radioblah_rocker_ctrl_pane_g1

0xc103,	// (0x0003b06a) main_radioblah_rocker_ctrl_pane_g2

0xc10b,	// (0x0003b072) main_radioblah_rocker_ctrl_pane_g3

0xc113,	// (0x0003b07a) main_radioblah_rocker_ctrl_pane_g4

0xc11b,	// (0x0003b082) main_radioblah_rocker_ctrl_pane_g5

0xc123,	// (0x0003b08a) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfc31,	// (0x0003eb98) main_radioblah_rocker_ctrl_pane_g

0xbb32,	// (0x0003aa99) main_cset_text2_pane_t1_copy1_ParamLimits

0xa3fc,	// (0x00039363) cam4_image_uncrop_qvga_pane

0xa53d,	// (0x000394a4) vid4_image_uncrop_qcif_pane

0xb73e,	// (0x0003a6a5) cam6_image_uncrop_qvga_pane_ParamLimits

0xb73e,	// (0x0003a6a5) cam6_image_uncrop_qvga_pane

0x2db9,	// (0x00031d20) vid6_image_uncrop_qcif_pane_ParamLimits

0x2db9,	// (0x00031d20) vid6_image_uncrop_qcif_pane

0xd6bf,	// (0x0003c626) bg_popup_preview_window_pane_cp03

0x30b7,	// (0x0003201e) list_cset_text2_pane

0x30bf,	// (0x00032026) main_cset6_text2_pane_g1

0x30c7,	// (0x0003202e) main_cset6_text2_pane_t1

0xc12b,	// (0x0003b092) list_cset_text2_pane_t1_ParamLimits

0xc12b,	// (0x0003b092) list_cset_text2_pane_t1

0xdd67,	// (0x0003ccce) main_radioblah_pane_ParamLimits

0xbea8,	// (0x0003ae0f) main_mobtv_info_pane_t3_ParamLimits

0xbea8,	// (0x0003ae0f) main_mobtv_info_pane_t3

0xbffc,	// (0x0003af63) main_radioblah_pane_g1

0xc027,	// (0x0003af8e) main_radioblah_info_pane_g1

0xc0a8,	// (0x0003b00f) main_radioblah_info_pane_t3_ParamLimits

0xc0a8,	// (0x0003b00f) main_radioblah_info_pane_t3

0x7c7c,	// (0x00036be3) highlight_cell_cale_month_pane_ParamLimits

0x7c7c,	// (0x00036be3) highlight_cell_cale_month_pane

0xd6bf,	// (0x0003c626) main_phob_fisheye_pane

0x1b3c,	// (0x00030aa3) scroll_pane_cp0031_ParamLimits

0x1b3c,	// (0x00030aa3) scroll_pane_cp0031

0x2ec7,	// (0x00031e2e) wait_bar_pane_cp08_ParamLimits

0xb91a,	// (0x0003a881) cset_list_set_pane_copy1_ParamLimits

0x35ef,	// (0x00032556) highlight_cell_cale_month_pane_g1

0xc14c,	// (0x0003b0b3) highlight_cell_cale_month_pane_t1

0x2aa3,	// (0x00031a0a) list_gen_pane_cp01

0x25e9,	// (0x00031550) scroll_pane_01

0xc15a,	// (0x0003b0c1) list_single_double_fisheye_pane

0x55f8,	// (0x0003455f) list_double_fisheye_pane_g1_ParamLimits

0x55f8,	// (0x0003455f) list_double_fisheye_pane_g1

0x5604,	// (0x0003456b) list_double_fisheye_pane_g2_ParamLimits

0x5604,	// (0x0003456b) list_double_fisheye_pane_g2

0xc163,	// (0x0003b0ca) list_double_fisheye_pane_g3_ParamLimits

0xc163,	// (0x0003b0ca) list_double_fisheye_pane_g3

0x0004,

0xfc3e,	// (0x0003eba5) list_double_fisheye_pane_g_ParamLimits

0xfc3e,	// (0x0003eba5) list_double_fisheye_pane_g

0x5635,	// (0x0003459c) list_double_fisheye_pane_t1_ParamLimits

0x5635,	// (0x0003459c) list_double_fisheye_pane_t1

0x5650,	// (0x000345b7) list_double_fisheye_pane_t2_ParamLimits

0x5650,	// (0x000345b7) list_double_fisheye_pane_t2

0x0001,

0xfc49,	// (0x0003ebb0) list_double_fisheye_pane_t_ParamLimits

0xfc49,	// (0x0003ebb0) list_double_fisheye_pane_t

0xd6bf,	// (0x0003c626) main_call5_pane

0xbf6f,	// (0x0003aed6) sc_swipe_pane_ParamLimits

0xbf6f,	// (0x0003aed6) sc_swipe_pane

0xc17b,	// (0x0003b0e2) call5_image_pane_ParamLimits

0xc17b,	// (0x0003b0e2) call5_image_pane

0xc18b,	// (0x0003b0f2) call5_swipe_1_pane_ParamLimits

0xc18b,	// (0x0003b0f2) call5_swipe_1_pane

0xc197,	// (0x0003b0fe) call5_swipe_2_pane_ParamLimits

0xc197,	// (0x0003b0fe) call5_swipe_2_pane

0xc1b1,	// (0x0003b118) popup_call5_audio_first_window_ParamLimits

0xc1b1,	// (0x0003b118) popup_call5_audio_first_window

0xddc0,	// (0x0003cd27) call5_swipe_1_pane_g1_ParamLimits

0xddc0,	// (0x0003cd27) call5_swipe_1_pane_g1

0x35f7,	// (0x0003255e) call5_swipe_1_pane_g2_ParamLimits

0x35f7,	// (0x0003255e) call5_swipe_1_pane_g2

0x0001,

0xfc4e,	// (0x0003ebb5) call5_swipe_1_pane_g_ParamLimits

0xfc4e,	// (0x0003ebb5) call5_swipe_1_pane_g

0x3603,	// (0x0003256a) call5_swipe_1_pane_t1_ParamLimits

0x3603,	// (0x0003256a) call5_swipe_1_pane_t1

0xddc0,	// (0x0003cd27) call5_swipe_2_pane_g1_ParamLimits

0xddc0,	// (0x0003cd27) call5_swipe_2_pane_g1

0x3618,	// (0x0003257f) call5_swipe_2_pane_g2_ParamLimits

0x3618,	// (0x0003257f) call5_swipe_2_pane_g2

0x0001,

0xfc53,	// (0x0003ebba) call5_swipe_2_pane_g_ParamLimits

0xfc53,	// (0x0003ebba) call5_swipe_2_pane_g

0x3624,	// (0x0003258b) call5_swipe_2_pane_t1_ParamLimits

0x3624,	// (0x0003258b) call5_swipe_2_pane_t1

0x3639,	// (0x000325a0) sc_swipe_pane_g1_ParamLimits

0x3639,	// (0x000325a0) sc_swipe_pane_g1

0x3646,	// (0x000325ad) sc_swipe_pane_g2_ParamLimits

0x3646,	// (0x000325ad) sc_swipe_pane_g2

0x0001,

0xfc58,	// (0x0003ebbf) sc_swipe_pane_g_ParamLimits

0xfc58,	// (0x0003ebbf) sc_swipe_pane_g

0x3652,	// (0x000325b9) sc_swipe_pane_t1_ParamLimits

0x3652,	// (0x000325b9) sc_swipe_pane_t1

0xd6bf,	// (0x0003c626) main_cmail_launcher_pane

0xc1bf,	// (0x0003b126) aid_size_cell_cmail_l_ParamLimits

0xc1bf,	// (0x0003b126) aid_size_cell_cmail_l

0xc1cd,	// (0x0003b134) grid_cmail_l_pane_ParamLimits

0xc1cd,	// (0x0003b134) grid_cmail_l_pane

0xc1dd,	// (0x0003b144) cell_cmail_l_pane_ParamLimits

0xc1dd,	// (0x0003b144) cell_cmail_l_pane

0x3667,	// (0x000325ce) cell_cmail_l_pane_g1_ParamLimits

0x3667,	// (0x000325ce) cell_cmail_l_pane_g1

0x3673,	// (0x000325da) cell_cmail_l_pane_t1_ParamLimits

0x3673,	// (0x000325da) cell_cmail_l_pane_t1

0x3689,	// (0x000325f0) cell_cmail_l_pane_t2_ParamLimits

0x3689,	// (0x000325f0) cell_cmail_l_pane_t2

0x0001,

0xfc5d,	// (0x0003ebc4) cell_cmail_l_pane_t_ParamLimits

0xfc5d,	// (0x0003ebc4) cell_cmail_l_pane_t

0xdd67,	// (0x0003ccce) grid_highlight_pane_cp018_ParamLimits

0xdd67,	// (0x0003ccce) grid_highlight_pane_cp018

0x5f14,	// (0x00034e7b) main2_pane_ParamLimits

0x5f14,	// (0x00034e7b) main2_pane

0xdec1,	// (0x0003ce28) popup_sp_fs_action_menu_bg_pane_g1

0xdec9,	// (0x0003ce30) popup_sp_fs_action_menu_bg_pane_g2

0xded1,	// (0x0003ce38) popup_sp_fs_action_menu_bg_pane_g3

0xded9,	// (0x0003ce40) popup_sp_fs_action_menu_bg_pane_g4

0xdee1,	// (0x0003ce48) popup_sp_fs_action_menu_bg_pane_g5

0xdee9,	// (0x0003ce50) popup_sp_fs_action_menu_bg_pane_g6

0xdef1,	// (0x0003ce58) popup_sp_fs_action_menu_bg_pane_g7

0xdef9,	// (0x0003ce60) popup_sp_fs_action_menu_bg_pane_g8

0xdf01,	// (0x0003ce68) popup_sp_fs_action_menu_bg_pane_g9

0xdf09,	// (0x0003ce70) popup_sp_fs_action_menu_bg_pane_g10

0xdf09,	// (0x0003ce70) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf145,	// (0x0003e0ac) popup_sp_fs_action_menu_bg_pane_g

0xddc0,	// (0x0003cd27) list_medium_line_x2_t3_g3_g1_ParamLimits

0xddc0,	// (0x0003cd27) list_medium_line_x2_t3_g3_g1

0xddc0,	// (0x0003cd27) list_medium_line_x2_t3_g3_g2_ParamLimits

0xddc0,	// (0x0003cd27) list_medium_line_x2_t3_g3_g2

0xddc0,	// (0x0003cd27) list_medium_line_x2_t3_g3_g3_ParamLimits

0xddc0,	// (0x0003cd27) list_medium_line_x2_t3_g3_g3

0x0002,

0xf1f3,	// (0x0003e15a) list_medium_line_x2_t3_g3_g_ParamLimits

0xf1f3,	// (0x0003e15a) list_medium_line_x2_t3_g3_g

0xe034,	// (0x0003cf9b) list_medium_line_x2_t3_g3_t1_ParamLimits

0xe034,	// (0x0003cf9b) list_medium_line_x2_t3_g3_t1

0xe034,	// (0x0003cf9b) list_medium_line_x2_t3_g3_t2_ParamLimits

0xe034,	// (0x0003cf9b) list_medium_line_x2_t3_g3_t2

0xe034,	// (0x0003cf9b) list_medium_line_x2_t3_g3_t3_ParamLimits

0xe034,	// (0x0003cf9b) list_medium_line_x2_t3_g3_t3

0x0002,

0xf1fa,	// (0x0003e161) list_medium_line_x2_t3_g3_t_ParamLimits

0xf1fa,	// (0x0003e161) list_medium_line_x2_t3_g3_t

0xddc0,	// (0x0003cd27) list_medium_line_x2_t3_g2_g1_ParamLimits

0xddc0,	// (0x0003cd27) list_medium_line_x2_t3_g2_g1

0xddc0,	// (0x0003cd27) list_medium_line_x2_t3_g2_g2_ParamLimits

0xddc0,	// (0x0003cd27) list_medium_line_x2_t3_g2_g2

0x0001,

0xf201,	// (0x0003e168) list_medium_line_x2_t3_g2_g_ParamLimits

0xf201,	// (0x0003e168) list_medium_line_x2_t3_g2_g

0xe034,	// (0x0003cf9b) list_medium_line_x2_t3_g2_t1_ParamLimits

0xe034,	// (0x0003cf9b) list_medium_line_x2_t3_g2_t1

0xe034,	// (0x0003cf9b) list_medium_line_x2_t3_g2_t2_ParamLimits

0xe034,	// (0x0003cf9b) list_medium_line_x2_t3_g2_t2

0xe034,	// (0x0003cf9b) list_medium_line_x2_t3_g2_t3_ParamLimits

0xe034,	// (0x0003cf9b) list_medium_line_x2_t3_g2_t3

0x0002,

0xf1fa,	// (0x0003e161) list_medium_line_x2_t3_g2_t_ParamLimits

0xf1fa,	// (0x0003e161) list_medium_line_x2_t3_g2_t

0xddc0,	// (0x0003cd27) list_medium_line_x2_t4_g4_g1_ParamLimits

0xddc0,	// (0x0003cd27) list_medium_line_x2_t4_g4_g1

0xddc0,	// (0x0003cd27) list_medium_line_x2_t4_g4_g2_ParamLimits

0xddc0,	// (0x0003cd27) list_medium_line_x2_t4_g4_g2

0xddc0,	// (0x0003cd27) list_medium_line_x2_t4_g4_g3_ParamLimits

0xddc0,	// (0x0003cd27) list_medium_line_x2_t4_g4_g3

0xddc0,	// (0x0003cd27) list_medium_line_x2_t4_g4_g4_ParamLimits

0xddc0,	// (0x0003cd27) list_medium_line_x2_t4_g4_g4

0x0003,

0xf206,	// (0x0003e16d) list_medium_line_x2_t4_g4_g_ParamLimits

0xf206,	// (0x0003e16d) list_medium_line_x2_t4_g4_g

0xe034,	// (0x0003cf9b) list_medium_line_x2_t4_g4_t1_ParamLimits

0xe034,	// (0x0003cf9b) list_medium_line_x2_t4_g4_t1

0xe034,	// (0x0003cf9b) list_medium_line_x2_t4_g4_t2_ParamLimits

0xe034,	// (0x0003cf9b) list_medium_line_x2_t4_g4_t2

0xe034,	// (0x0003cf9b) list_medium_line_x2_t4_g4_t3_ParamLimits

0xe034,	// (0x0003cf9b) list_medium_line_x2_t4_g4_t3

0xe034,	// (0x0003cf9b) list_medium_line_x2_t4_g4_t4_ParamLimits

0xe034,	// (0x0003cf9b) list_medium_line_x2_t4_g4_t4

0x0003,

0xf20f,	// (0x0003e176) list_medium_line_x2_t4_g4_t_ParamLimits

0xf20f,	// (0x0003e176) list_medium_line_x2_t4_g4_t

0xddc0,	// (0x0003cd27) list_medium_line_x2_t2_g4_g1_ParamLimits

0xddc0,	// (0x0003cd27) list_medium_line_x2_t2_g4_g1

0xddc0,	// (0x0003cd27) list_medium_line_x2_t2_g4_g2_ParamLimits

0xddc0,	// (0x0003cd27) list_medium_line_x2_t2_g4_g2

0xddc0,	// (0x0003cd27) list_medium_line_x2_t2_g4_g3_ParamLimits

0xddc0,	// (0x0003cd27) list_medium_line_x2_t2_g4_g3

0xddc0,	// (0x0003cd27) list_medium_line_x2_t2_g4_g4_ParamLimits

0xddc0,	// (0x0003cd27) list_medium_line_x2_t2_g4_g4

0x0003,

0xf206,	// (0x0003e16d) list_medium_line_x2_t2_g4_g_ParamLimits

0xf206,	// (0x0003e16d) list_medium_line_x2_t2_g4_g

0xe034,	// (0x0003cf9b) list_medium_line_x2_t2_g4_t1_ParamLimits

0xe034,	// (0x0003cf9b) list_medium_line_x2_t2_g4_t1

0xe034,	// (0x0003cf9b) list_medium_line_x2_t2_g4_t2_ParamLimits

0xe034,	// (0x0003cf9b) list_medium_line_x2_t2_g4_t2

0x0001,

0xf276,	// (0x0003e1dd) list_medium_line_x2_t2_g4_t_ParamLimits

0xf276,	// (0x0003e1dd) list_medium_line_x2_t2_g4_t

0xddc0,	// (0x0003cd27) list_medium_line_x2_t2_g3_g1_ParamLimits

0xddc0,	// (0x0003cd27) list_medium_line_x2_t2_g3_g1

0xddc0,	// (0x0003cd27) list_medium_line_x2_t2_g3_g2_ParamLimits

0xddc0,	// (0x0003cd27) list_medium_line_x2_t2_g3_g2

0xddc0,	// (0x0003cd27) list_medium_line_x2_t2_g3_g3_ParamLimits

0xddc0,	// (0x0003cd27) list_medium_line_x2_t2_g3_g3

0x0002,

0xf1f3,	// (0x0003e15a) list_medium_line_x2_t2_g3_g_ParamLimits

0xf1f3,	// (0x0003e15a) list_medium_line_x2_t2_g3_g

0xe034,	// (0x0003cf9b) list_medium_line_x2_t2_g3_t1_ParamLimits

0xe034,	// (0x0003cf9b) list_medium_line_x2_t2_g3_t1

0xe034,	// (0x0003cf9b) list_medium_line_x2_t2_g3_t2_ParamLimits

0xe034,	// (0x0003cf9b) list_medium_line_x2_t2_g3_t2

0x0001,

0xf276,	// (0x0003e1dd) list_medium_line_x2_t2_g3_t_ParamLimits

0xf276,	// (0x0003e1dd) list_medium_line_x2_t2_g3_t

0x7e5d,	// (0x00036dc4) main_sp_fs_list_pane_ParamLimits

0x7e5d,	// (0x00036dc4) main_sp_fs_list_pane

0x7e69,	// (0x00036dd0) sp_fs_scroll_pane_ParamLimits

0x7e69,	// (0x00036dd0) sp_fs_scroll_pane

0xe555,	// (0x0003d4bc) list_medium_line_x2_t3_t1

0xe555,	// (0x0003d4bc) list_medium_line_x2_t3_t2

0xe555,	// (0x0003d4bc) list_medium_line_x2_t3_t3

0x0002,

0xf2c1,	// (0x0003e228) list_medium_line_x2_t3_t

0xe555,	// (0x0003d4bc) list_medium_line_x3_t4_t1

0xe555,	// (0x0003d4bc) list_medium_line_x3_t4_t2

0xe555,	// (0x0003d4bc) list_medium_line_x3_t4_t3

0xe555,	// (0x0003d4bc) list_medium_line_x3_t4_t4

0x0003,

0xf2c8,	// (0x0003e22f) list_medium_line_x3_t4_t

0xe555,	// (0x0003d4bc) list_medium_line_x4_t5_t1

0xe555,	// (0x0003d4bc) list_medium_line_x4_t5_t2

0xe555,	// (0x0003d4bc) list_medium_line_x4_t5_t3

0xe555,	// (0x0003d4bc) list_medium_line_x4_t5_t4

0xe555,	// (0x0003d4bc) list_medium_line_x4_t5_t5

0x0004,

0xf2d1,	// (0x0003e238) list_medium_line_x4_t5_t

0xddc0,	// (0x0003cd27) list_medium_line_t4_g4_g1_ParamLimits

0xddc0,	// (0x0003cd27) list_medium_line_t4_g4_g1

0xddc0,	// (0x0003cd27) list_medium_line_t4_g4_g2_ParamLimits

0xddc0,	// (0x0003cd27) list_medium_line_t4_g4_g2

0xddc0,	// (0x0003cd27) list_medium_line_t4_g4_g3_ParamLimits

0xddc0,	// (0x0003cd27) list_medium_line_t4_g4_g3

0xddc0,	// (0x0003cd27) list_medium_line_t4_g4_g4_ParamLimits

0xddc0,	// (0x0003cd27) list_medium_line_t4_g4_g4

0x0003,

0xf206,	// (0x0003e16d) list_medium_line_t4_g4_g_ParamLimits

0xf206,	// (0x0003e16d) list_medium_line_t4_g4_g

0xe034,	// (0x0003cf9b) list_medium_line_t4_g4_t1_ParamLimits

0xe034,	// (0x0003cf9b) list_medium_line_t4_g4_t1

0xe034,	// (0x0003cf9b) list_medium_line_t4_g4_t2_ParamLimits

0xe034,	// (0x0003cf9b) list_medium_line_t4_g4_t2

0xe034,	// (0x0003cf9b) list_medium_line_t4_g4_t3_ParamLimits

0xe034,	// (0x0003cf9b) list_medium_line_t4_g4_t3

0xe034,	// (0x0003cf9b) list_medium_line_t4_g4_t4_ParamLimits

0xe034,	// (0x0003cf9b) list_medium_line_t4_g4_t4

0x0003,

0xf20f,	// (0x0003e176) list_medium_line_t4_g4_t_ParamLimits

0xf20f,	// (0x0003e176) list_medium_line_t4_g4_t

0x7f5c,	// (0x00036ec3) chi_dic_find_pane_g1

0x8c01,	// (0x00037b68) main_tport_pane

0xe555,	// (0x0003d4bc) list_medium_line_plain_t1

0xddc0,	// (0x0003cd27) list_medium_line_t2_g2_g1_ParamLimits

0xddc0,	// (0x0003cd27) list_medium_line_t2_g2_g1

0xddc0,	// (0x0003cd27) list_medium_line_t2_g2_g2_ParamLimits

0xddc0,	// (0x0003cd27) list_medium_line_t2_g2_g2

0x0001,

0xf201,	// (0x0003e168) list_medium_line_t2_g2_g_ParamLimits

0xf201,	// (0x0003e168) list_medium_line_t2_g2_g

0xe034,	// (0x0003cf9b) list_medium_line_t2_g2_t1_ParamLimits

0xe034,	// (0x0003cf9b) list_medium_line_t2_g2_t1

0xe034,	// (0x0003cf9b) list_medium_line_t2_g2_t2_ParamLimits

0xe034,	// (0x0003cf9b) list_medium_line_t2_g2_t2

0x0001,

0xf276,	// (0x0003e1dd) list_medium_line_t2_g2_t_ParamLimits

0xf276,	// (0x0003e1dd) list_medium_line_t2_g2_t

0x55a6,	// (0x0003450d) aid_sp_fs_list_icon_a_sm

0x55ae,	// (0x00034515) aid_sp_fs_list_icon_d

0x55b6,	// (0x0003451d) aid_sp_fs_text_primary

0x3aba,	// (0x00032a21) aid_sp_fs_text_secondary

0xd6bf,	// (0x0003c626) list_medium_line

0xd6bf,	// (0x0003c626) list_medium_line_g2

0xd6bf,	// (0x0003c626) list_medium_line_g3

0xd6bf,	// (0x0003c626) list_medium_line_plain

0xd6bf,	// (0x0003c626) list_medium_line_plain_t2

0xd6bf,	// (0x0003c626) list_medium_line_plain_t3

0xd6bf,	// (0x0003c626) list_medium_line_right_icon

0xd6bf,	// (0x0003c626) list_medium_line_right_iconx2

0xd6bf,	// (0x0003c626) list_medium_line_t2

0xd6bf,	// (0x0003c626) list_medium_line_t2_g2

0xd6bf,	// (0x0003c626) list_medium_line_t2_g3

0xd6bf,	// (0x0003c626) list_medium_line_t2_right_icon

0xd6bf,	// (0x0003c626) list_medium_line_t2_right_iconx2

0xd6bf,	// (0x0003c626) list_medium_line_t3

0xd6bf,	// (0x0003c626) list_medium_line_t3_g2

0xd6bf,	// (0x0003c626) list_medium_line_t3_g3

0xd6bf,	// (0x0003c626) list_medium_line_t3_right_iconx2

0xd6bf,	// (0x0003c626) list_medium_line_t4_g4

0xd6bf,	// (0x0003c626) list_medium_line_x2

0xd6bf,	// (0x0003c626) list_medium_line_x2_t2_g2

0xd6bf,	// (0x0003c626) list_medium_line_x2_t2_g3

0xd6bf,	// (0x0003c626) list_medium_line_x2_t2_g4

0xd6bf,	// (0x0003c626) list_medium_line_x2_t3

0xd6bf,	// (0x0003c626) list_medium_line_x2_t3_g2

0xd6bf,	// (0x0003c626) list_medium_line_x2_t3_g3

0xd6bf,	// (0x0003c626) list_medium_line_x2_t3_g4

0xd6bf,	// (0x0003c626) list_medium_line_x2_t4_g2

0xd6bf,	// (0x0003c626) list_medium_line_x2_t4_g4

0xd6bf,	// (0x0003c626) list_medium_line_x3

0xd6bf,	// (0x0003c626) list_medium_line_x3_t4

0xd6bf,	// (0x0003c626) list_medium_line_x3_t4_g4

0xd6bf,	// (0x0003c626) list_medium_line_x4_t4

0xd6bf,	// (0x0003c626) list_medium_line_x4_t4_g7

0xd6bf,	// (0x0003c626) list_medium_line_x4_t5

0x55bf,	// (0x00034526) list_single_fs_dyc_pane_ParamLimits

0x55bf,	// (0x00034526) list_single_fs_dyc_pane

0xddc0,	// (0x0003cd27) list_medium_line_x4_t4_g7_g1_ParamLimits

0xddc0,	// (0x0003cd27) list_medium_line_x4_t4_g7_g1

0xddc0,	// (0x0003cd27) list_medium_line_x4_t4_g7_g2_ParamLimits

0xddc0,	// (0x0003cd27) list_medium_line_x4_t4_g7_g2

0xddc0,	// (0x0003cd27) list_medium_line_x4_t4_g7_g3_ParamLimits

0xddc0,	// (0x0003cd27) list_medium_line_x4_t4_g7_g3

0xddc0,	// (0x0003cd27) list_medium_line_x4_t4_g7_g4_ParamLimits

0xddc0,	// (0x0003cd27) list_medium_line_x4_t4_g7_g4

0xddc0,	// (0x0003cd27) list_medium_line_x4_t4_g7_g5_ParamLimits

0xddc0,	// (0x0003cd27) list_medium_line_x4_t4_g7_g5

0xddc0,	// (0x0003cd27) list_medium_line_x4_t4_g7_g6_ParamLimits

0xddc0,	// (0x0003cd27) list_medium_line_x4_t4_g7_g6

0xddce,	// (0x0003cd35) list_medium_line_x4_t4_g7_g7_ParamLimits

0xddce,	// (0x0003cd35) list_medium_line_x4_t4_g7_g7

0x0006,

0xfb65,	// (0x0003eacc) list_medium_line_x4_t4_g7_g_ParamLimits

0xfb65,	// (0x0003eacc) list_medium_line_x4_t4_g7_g

0xe034,	// (0x0003cf9b) list_medium_line_x4_t4_g7_t1_ParamLimits

0xe034,	// (0x0003cf9b) list_medium_line_x4_t4_g7_t1

0xe034,	// (0x0003cf9b) list_medium_line_x4_t4_g7_t2_ParamLimits

0xe034,	// (0x0003cf9b) list_medium_line_x4_t4_g7_t2

0xe034,	// (0x0003cf9b) list_medium_line_x4_t4_g7_t3_ParamLimits

0xe034,	// (0x0003cf9b) list_medium_line_x4_t4_g7_t3

0xdfec,	// (0x0003cf53) list_medium_line_x4_t4_g7_t4_ParamLimits

0xdfec,	// (0x0003cf53) list_medium_line_x4_t4_g7_t4

0xdfec,	// (0x0003cf53) list_medium_line_x4_t4_g7_t5_ParamLimits

0xdfec,	// (0x0003cf53) list_medium_line_x4_t4_g7_t5

0x0004,

0xfb74,	// (0x0003eadb) list_medium_line_x4_t4_g7_t_ParamLimits

0xfb74,	// (0x0003eadb) list_medium_line_x4_t4_g7_t

0x55db,	// (0x00034542) list_single_dyc_row_pane_ParamLimits

0x55db,	// (0x00034542) list_single_dyc_row_pane

0xc16f,	// (0x0003b0d6) call5_gesture_pane_ParamLimits

0xc16f,	// (0x0003b0d6) call5_gesture_pane

0xc1a3,	// (0x0003b10a) call5_windows_pane_ParamLimits

0xc1a3,	// (0x0003b10a) call5_windows_pane

0xc1f6,	// (0x0003b15d) call5_swipe_1_pane_cp_ParamLimits

0xc1f6,	// (0x0003b15d) call5_swipe_1_pane_cp

0xc202,	// (0x0003b169) call5_swipe_2_pane_cp_ParamLimits

0xc202,	// (0x0003b169) call5_swipe_2_pane_cp

0xdfe4,	// (0x0003cf4b) call5_image_pane_cp

0xc20e,	// (0x0003b175) popup_call5_audio_first_window_cp_ParamLimits

0xc20e,	// (0x0003b175) popup_call5_audio_first_window_cp

0x3639,	// (0x000325a0) call5_swipe_1_pane_g1_cp_ParamLimits

0x3639,	// (0x000325a0) call5_swipe_1_pane_g1_cp

0x36a6,	// (0x0003260d) call5_swipe_1_pane_g2_cp

0x3652,	// (0x000325b9) call5_swipe_1_pane_t1_cp_ParamLimits

0x3652,	// (0x000325b9) call5_swipe_1_pane_t1_cp

0x3639,	// (0x000325a0) call5_swipe_2_pane_g1_cp_ParamLimits

0x3639,	// (0x000325a0) call5_swipe_2_pane_g1_cp

0x36ae,	// (0x00032615) call5_swipe_2_pane_g2_cp

0x36b6,	// (0x0003261d) call5_swipe_2_pane_t1_cp_ParamLimits

0x36b6,	// (0x0003261d) call5_swipe_2_pane_t1_cp

0xdd67,	// (0x0003ccce) main_sp_fs_email_pane

0x36cb,	// (0x00032632) main_sp_fs_listscroll_pane_te

0x5672,	// (0x000345d9) popup_sp_fs_action_menu_pane_ParamLimits

0x5672,	// (0x000345d9) popup_sp_fs_action_menu_pane

0xe01a,	// (0x0003cf81) bg_sp_fs_ctrlbar_pane_g1

0x36d4,	// (0x0003263b) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0x36dd,	// (0x00032644) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0x125e,	// (0x000301c5) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xe01a,	// (0x0003cf81) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfc62,	// (0x0003ebc9) bg_sp_fs_ctrlbar_ddmenu_pane_g

0x15a3,	// (0x0003050a) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0x15a3,	// (0x0003050a) bg_sp_fs_ctrlbar_ddmenu_pane

0x36e6,	// (0x0003264d) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0x36e6,	// (0x0003264d) main_sp_fs_ctrlbar_ddmenu_pane_g1

0x36f2,	// (0x00032659) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0x36f2,	// (0x00032659) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfc6b,	// (0x0003ebd2) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfc6b,	// (0x0003ebd2) main_sp_fs_ctrlbar_ddmenu_pane_g

0x36fe,	// (0x00032665) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0x36fe,	// (0x00032665) main_sp_fs_ctrlbar_ddmenu_pane_t1

0xe01a,	// (0x0003cf81) list_medium_line_t2_right_icon_g1

0xe555,	// (0x0003d4bc) list_medium_line_t2_right_icon_t1

0xe555,	// (0x0003d4bc) list_medium_line_t2_right_icon_t2

0x0001,

0xfc70,	// (0x0003ebd7) list_medium_line_t2_right_icon_t

0xf011,	// (0x0003df78) bg_sp_fs_ctrlbar_pane_ParamLimits

0xf011,	// (0x0003df78) bg_sp_fs_ctrlbar_pane

0xc25f,	// (0x0003b1c6) main_sp_fs_ctrlbar_button_pane_cp01

0xc267,	// (0x0003b1ce) main_sp_fs_ctrlbar_ddmenu_pane

0x3750,	// (0x000326b7) main_sp_fs_ctrlbar_pane_g1

0x375c,	// (0x000326c3) main_sp_fs_ctrlbar_pane_g2

0x0003,

0xfc75,	// (0x0003ebdc) main_sp_fs_ctrlbar_pane_g

0xc2a3,	// (0x0003b20a) main_sp_fs_ctrlbar_pane_t1

0xc2de,	// (0x0003b245) main_sp_fs_ctrlbar_pane

0xc2f4,	// (0x0003b25b) main_sp_fs_listscroll_pane_te_cp01

0x56b4,	// (0x0003461b) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x56b4,	// (0x0003461b) popup_sp_fs_action_menu_pane_cp01

0xdd67,	// (0x0003ccce) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0xdd67,	// (0x0003ccce) bg_sp_fs_highlight_list_pane_cp01

0x56d4,	// (0x0003463b) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0x56d4,	// (0x0003463b) sp_fs_action_menu_list_gene_pane_g1

0x3792,	// (0x000326f9) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0x3792,	// (0x000326f9) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfc83,	// (0x0003ebea) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfc83,	// (0x0003ebea) sp_fs_action_menu_list_gene_pane_g

0x56e3,	// (0x0003464a) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0x56e3,	// (0x0003464a) sp_fs_action_menu_list_gene_pane_t1

0x56fb,	// (0x00034662) sp_fs_action_menu_list_gene_pane_ParamLimits

0x56fb,	// (0x00034662) sp_fs_action_menu_list_gene_pane

0x37d6,	// (0x0003273d) popup_sp_fs_action_menu_bg_pane_ParamLimits

0x37d6,	// (0x0003273d) popup_sp_fs_action_menu_bg_pane

0x571a,	// (0x00034681) sp_fs_action_menu_list_pane_ParamLimits

0x571a,	// (0x00034681) sp_fs_action_menu_list_pane

0xf056,	// (0x0003dfbd) sp_fs_scroll_pane_cp01_ParamLimits

0xf056,	// (0x0003dfbd) sp_fs_scroll_pane_cp01

0xe555,	// (0x0003d4bc) list_medium_line_plain_t2_t1

0xe555,	// (0x0003d4bc) list_medium_line_plain_t2_t2

0x0001,

0xfc70,	// (0x0003ebd7) list_medium_line_plain_t2_t

0xe555,	// (0x0003d4bc) list_medium_line_plain_t3_t1

0xe555,	// (0x0003d4bc) list_medium_line_plain_t3_t2

0xe555,	// (0x0003d4bc) list_medium_line_plain_t3_t3

0x0002,

0xf2c1,	// (0x0003e228) list_medium_line_plain_t3_t

0xddc0,	// (0x0003cd27) list_medium_line_x2_t2_g2_g1_ParamLimits

0xddc0,	// (0x0003cd27) list_medium_line_x2_t2_g2_g1

0xddc0,	// (0x0003cd27) list_medium_line_x2_t2_g2_g2_ParamLimits

0xddc0,	// (0x0003cd27) list_medium_line_x2_t2_g2_g2

0x0001,

0xf201,	// (0x0003e168) list_medium_line_x2_t2_g2_g_ParamLimits

0xf201,	// (0x0003e168) list_medium_line_x2_t2_g2_g

0xe034,	// (0x0003cf9b) list_medium_line_x2_t2_g2_t1_ParamLimits

0xe034,	// (0x0003cf9b) list_medium_line_x2_t2_g2_t1

0xe034,	// (0x0003cf9b) list_medium_line_x2_t2_g2_t2_ParamLimits

0xe034,	// (0x0003cf9b) list_medium_line_x2_t2_g2_t2

0x0001,

0xf276,	// (0x0003e1dd) list_medium_line_x2_t2_g2_t_ParamLimits

0xf276,	// (0x0003e1dd) list_medium_line_x2_t2_g2_t

0xddc0,	// (0x0003cd27) list_medium_line_x2_t4_g2_g1_ParamLimits

0xddc0,	// (0x0003cd27) list_medium_line_x2_t4_g2_g1

0xddc0,	// (0x0003cd27) list_medium_line_x2_t4_g2_g2_ParamLimits

0xddc0,	// (0x0003cd27) list_medium_line_x2_t4_g2_g2

0x0001,

0xf201,	// (0x0003e168) list_medium_line_x2_t4_g2_g_ParamLimits

0xf201,	// (0x0003e168) list_medium_line_x2_t4_g2_g

0xe034,	// (0x0003cf9b) list_medium_line_x2_t4_g2_t1_ParamLimits

0xe034,	// (0x0003cf9b) list_medium_line_x2_t4_g2_t1

0xe034,	// (0x0003cf9b) list_medium_line_x2_t4_g2_t2_ParamLimits

0xe034,	// (0x0003cf9b) list_medium_line_x2_t4_g2_t2

0xe034,	// (0x0003cf9b) list_medium_line_x2_t4_g2_t3_ParamLimits

0xe034,	// (0x0003cf9b) list_medium_line_x2_t4_g2_t3

0xe034,	// (0x0003cf9b) list_medium_line_x2_t4_g2_t4_ParamLimits

0xe034,	// (0x0003cf9b) list_medium_line_x2_t4_g2_t4

0x0003,

0xf20f,	// (0x0003e176) list_medium_line_x2_t4_g2_t_ParamLimits

0xf20f,	// (0x0003e176) list_medium_line_x2_t4_g2_t

0xe01a,	// (0x0003cf81) list_medium_line_t3_right_iconx2_g1

0xe01a,	// (0x0003cf81) list_medium_line_t3_right_iconx2_g2

0xe01a,	// (0x0003cf81) list_medium_line_t3_right_iconx2_g3

0x0002,

0xf3e2,	// (0x0003e349) list_medium_line_t3_right_iconx2_g

0xe555,	// (0x0003d4bc) list_medium_line_t3_right_iconx2_t1

0xe555,	// (0x0003d4bc) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfc70,	// (0x0003ebd7) list_medium_line_t3_right_iconx2_t

0xddc0,	// (0x0003cd27) list_medium_line_x3_t4_g4_g1_ParamLimits

0xddc0,	// (0x0003cd27) list_medium_line_x3_t4_g4_g1

0xddc0,	// (0x0003cd27) list_medium_line_x3_t4_g4_g2_ParamLimits

0xddc0,	// (0x0003cd27) list_medium_line_x3_t4_g4_g2

0xddc0,	// (0x0003cd27) list_medium_line_x3_t4_g4_g3_ParamLimits

0xddc0,	// (0x0003cd27) list_medium_line_x3_t4_g4_g3

0xddc0,	// (0x0003cd27) list_medium_line_x3_t4_g4_g4_ParamLimits

0xddc0,	// (0x0003cd27) list_medium_line_x3_t4_g4_g4

0x0003,

0xf206,	// (0x0003e16d) list_medium_line_x3_t4_g4_g_ParamLimits

0xf206,	// (0x0003e16d) list_medium_line_x3_t4_g4_g

0xe034,	// (0x0003cf9b) list_medium_line_x3_t4_g4_t1_ParamLimits

0xe034,	// (0x0003cf9b) list_medium_line_x3_t4_g4_t1

0xe034,	// (0x0003cf9b) list_medium_line_x3_t4_g4_t2_ParamLimits

0xe034,	// (0x0003cf9b) list_medium_line_x3_t4_g4_t2

0xe034,	// (0x0003cf9b) list_medium_line_x3_t4_g4_t3_ParamLimits

0xe034,	// (0x0003cf9b) list_medium_line_x3_t4_g4_t3

0xe034,	// (0x0003cf9b) list_medium_line_x3_t4_g4_t4_ParamLimits

0xe034,	// (0x0003cf9b) list_medium_line_x3_t4_g4_t4

0x0003,

0xf20f,	// (0x0003e176) list_medium_line_x3_t4_g4_t_ParamLimits

0xf20f,	// (0x0003e176) list_medium_line_x3_t4_g4_t

0x573a,	// (0x000346a1) list_single_dyc_row_text_pane_t1_ParamLimits

0x573a,	// (0x000346a1) list_single_dyc_row_text_pane_t1

0x5771,	// (0x000346d8) list_single_dyc_row_text_pane_t2_ParamLimits

0x5771,	// (0x000346d8) list_single_dyc_row_text_pane_t2

0x57e7,	// (0x0003474e) list_single_dyc_row_text_pane_t3_ParamLimits

0x57e7,	// (0x0003474e) list_single_dyc_row_text_pane_t3

0x0005,

0xfc88,	// (0x0003ebef) list_single_dyc_row_text_pane_t_ParamLimits

0xfc88,	// (0x0003ebef) list_single_dyc_row_text_pane_t

0x58b8,	// (0x0003481f) list_single_dyc_row_pane_g1_ParamLimits

0x58b8,	// (0x0003481f) list_single_dyc_row_pane_g1

0x58c4,	// (0x0003482b) list_single_dyc_row_pane_g2_ParamLimits

0x58c4,	// (0x0003482b) list_single_dyc_row_pane_g2

0x58d0,	// (0x00034837) list_single_dyc_row_pane_g3_ParamLimits

0x58d0,	// (0x00034837) list_single_dyc_row_pane_g3

0x58dc,	// (0x00034843) list_single_dyc_row_pane_g4_ParamLimits

0x58dc,	// (0x00034843) list_single_dyc_row_pane_g4

0x0003,

0xfc95,	// (0x0003ebfc) list_single_dyc_row_pane_g_ParamLimits

0xfc95,	// (0x0003ebfc) list_single_dyc_row_pane_g

0x58e8,	// (0x0003484f) list_single_dyc_row_text_pane_ParamLimits

0x58e8,	// (0x0003484f) list_single_dyc_row_text_pane

0xd6bf,	// (0x0003c626) bg_sp_fs_scroll_pane

0x3877,	// (0x000327de) thumb_sp_fs_scroll_pane

0xddc0,	// (0x0003cd27) list_medium_line_g1_ParamLimits

0xddc0,	// (0x0003cd27) list_medium_line_g1

0xe034,	// (0x0003cf9b) list_medium_line_t1_ParamLimits

0xe034,	// (0x0003cf9b) list_medium_line_t1

0xddc0,	// (0x0003cd27) list_medium_line_x2_g1_ParamLimits

0xddc0,	// (0x0003cd27) list_medium_line_x2_g1

0xddc0,	// (0x0003cd27) list_medium_line_x2_g2_ParamLimits

0xddc0,	// (0x0003cd27) list_medium_line_x2_g2

0x0001,

0xf201,	// (0x0003e168) list_medium_line_x2_g_ParamLimits

0xf201,	// (0x0003e168) list_medium_line_x2_g

0xe034,	// (0x0003cf9b) list_medium_line_x2_t1_ParamLimits

0xe034,	// (0x0003cf9b) list_medium_line_x2_t1

0xddc0,	// (0x0003cd27) list_medium_line_x3_g1_ParamLimits

0xddc0,	// (0x0003cd27) list_medium_line_x3_g1

0x239c,	// (0x00031303) list_medium_line_x3_g2_ParamLimits

0x239c,	// (0x00031303) list_medium_line_x3_g2

0x0001,

0xfc9e,	// (0x0003ec05) list_medium_line_x3_g_ParamLimits

0xfc9e,	// (0x0003ec05) list_medium_line_x3_g

0x3880,	// (0x000327e7) list_medium_line_x3_t1_ParamLimits

0x3880,	// (0x000327e7) list_medium_line_x3_t1

0x3894,	// (0x000327fb) thumb_sp_fs_scroll_pane_g1

0x389d,	// (0x00032804) thumb_sp_fs_scroll_pane_g2

0x38a6,	// (0x0003280d) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfca3,	// (0x0003ec0a) thumb_sp_fs_scroll_pane_g

0x3894,	// (0x000327fb) bg_sp_fs_scroll_pane_g1

0x389d,	// (0x00032804) bg_sp_fs_scroll_pane_g2

0x38a6,	// (0x0003280d) bg_sp_fs_scroll_pane_g3

0x0002,

0xfca3,	// (0x0003ec0a) bg_sp_fs_scroll_pane_g

0xddc0,	// (0x0003cd27) list_medium_line_x2_t3_g4_g1_ParamLimits

0xddc0,	// (0x0003cd27) list_medium_line_x2_t3_g4_g1

0xddc0,	// (0x0003cd27) list_medium_line_x2_t3_g4_g2_ParamLimits

0xddc0,	// (0x0003cd27) list_medium_line_x2_t3_g4_g2

0xddc0,	// (0x0003cd27) list_medium_line_x2_t3_g4_g3_ParamLimits

0xddc0,	// (0x0003cd27) list_medium_line_x2_t3_g4_g3

0xddc0,	// (0x0003cd27) list_medium_line_x2_t3_g4_g4_ParamLimits

0xddc0,	// (0x0003cd27) list_medium_line_x2_t3_g4_g4

0x0003,

0xf206,	// (0x0003e16d) list_medium_line_x2_t3_g4_g_ParamLimits

0xf206,	// (0x0003e16d) list_medium_line_x2_t3_g4_g

0xe034,	// (0x0003cf9b) list_medium_line_x2_t3_g4_t1_ParamLimits

0xe034,	// (0x0003cf9b) list_medium_line_x2_t3_g4_t1

0xe034,	// (0x0003cf9b) list_medium_line_x2_t3_g4_t2_ParamLimits

0xe034,	// (0x0003cf9b) list_medium_line_x2_t3_g4_t2

0xe034,	// (0x0003cf9b) list_medium_line_x2_t3_g4_t3_ParamLimits

0xe034,	// (0x0003cf9b) list_medium_line_x2_t3_g4_t3

0x0002,

0xf1fa,	// (0x0003e161) list_medium_line_x2_t3_g4_t_ParamLimits

0xf1fa,	// (0x0003e161) list_medium_line_x2_t3_g4_t

0xddc0,	// (0x0003cd27) list_medium_line_g2_g1_ParamLimits

0xddc0,	// (0x0003cd27) list_medium_line_g2_g1

0xddc0,	// (0x0003cd27) list_medium_line_g2_g2_ParamLimits

0xddc0,	// (0x0003cd27) list_medium_line_g2_g2

0x0001,

0xf201,	// (0x0003e168) list_medium_line_g2_g_ParamLimits

0xf201,	// (0x0003e168) list_medium_line_g2_g

0xe034,	// (0x0003cf9b) list_medium_line_g2_t1_ParamLimits

0xe034,	// (0x0003cf9b) list_medium_line_g2_t1

0xddc0,	// (0x0003cd27) list_medium_line_t3_g2_g1_ParamLimits

0xddc0,	// (0x0003cd27) list_medium_line_t3_g2_g1

0xddc0,	// (0x0003cd27) list_medium_line_t3_g2_g2_ParamLimits

0xddc0,	// (0x0003cd27) list_medium_line_t3_g2_g2

0x0001,

0xf201,	// (0x0003e168) list_medium_line_t3_g2_g_ParamLimits

0xf201,	// (0x0003e168) list_medium_line_t3_g2_g

0xe034,	// (0x0003cf9b) list_medium_line_t3_g2_t1_ParamLimits

0xe034,	// (0x0003cf9b) list_medium_line_t3_g2_t1

0xe034,	// (0x0003cf9b) list_medium_line_t3_g2_t2_ParamLimits

0xe034,	// (0x0003cf9b) list_medium_line_t3_g2_t2

0xe034,	// (0x0003cf9b) list_medium_line_t3_g2_t3_ParamLimits

0xe034,	// (0x0003cf9b) list_medium_line_t3_g2_t3

0x0002,

0xf1fa,	// (0x0003e161) list_medium_line_t3_g2_t_ParamLimits

0xf1fa,	// (0x0003e161) list_medium_line_t3_g2_t

0xe01a,	// (0x0003cf81) list_medium_line_right_icon_g1

0xe555,	// (0x0003d4bc) list_medium_line_right_icon_t1

0xddc0,	// (0x0003cd27) list_medium_line_t2_g1_ParamLimits

0xddc0,	// (0x0003cd27) list_medium_line_t2_g1

0xe034,	// (0x0003cf9b) list_medium_line_t2_t1_ParamLimits

0xe034,	// (0x0003cf9b) list_medium_line_t2_t1

0xe034,	// (0x0003cf9b) list_medium_line_t2_t2_ParamLimits

0xe034,	// (0x0003cf9b) list_medium_line_t2_t2

0x0001,

0xf276,	// (0x0003e1dd) list_medium_line_t2_t_ParamLimits

0xf276,	// (0x0003e1dd) list_medium_line_t2_t

0xddc0,	// (0x0003cd27) list_medium_line_t3_g1_ParamLimits

0xddc0,	// (0x0003cd27) list_medium_line_t3_g1

0xe034,	// (0x0003cf9b) list_medium_line_t3_t1_ParamLimits

0xe034,	// (0x0003cf9b) list_medium_line_t3_t1

0xe034,	// (0x0003cf9b) list_medium_line_t3_t2_ParamLimits

0xe034,	// (0x0003cf9b) list_medium_line_t3_t2

0xe034,	// (0x0003cf9b) list_medium_line_t3_t3_ParamLimits

0xe034,	// (0x0003cf9b) list_medium_line_t3_t3

0x0002,

0xf1fa,	// (0x0003e161) list_medium_line_t3_t_ParamLimits

0xf1fa,	// (0x0003e161) list_medium_line_t3_t

0xddc0,	// (0x0003cd27) list_medium_line_g3_g1_ParamLimits

0xddc0,	// (0x0003cd27) list_medium_line_g3_g1

0xddc0,	// (0x0003cd27) list_medium_line_g3_g2_ParamLimits

0xddc0,	// (0x0003cd27) list_medium_line_g3_g2

0xddc0,	// (0x0003cd27) list_medium_line_g3_g3_ParamLimits

0xddc0,	// (0x0003cd27) list_medium_line_g3_g3

0x0002,

0xf1f3,	// (0x0003e15a) list_medium_line_g3_g_ParamLimits

0xf1f3,	// (0x0003e15a) list_medium_line_g3_g

0xe034,	// (0x0003cf9b) list_medium_line_g3_t1_ParamLimits

0xe034,	// (0x0003cf9b) list_medium_line_g3_t1

0xddc0,	// (0x0003cd27) list_medium_line_t2_g3_g1_ParamLimits

0xddc0,	// (0x0003cd27) list_medium_line_t2_g3_g1

0xddc0,	// (0x0003cd27) list_medium_line_t2_g3_g2_ParamLimits

0xddc0,	// (0x0003cd27) list_medium_line_t2_g3_g2

0xddc0,	// (0x0003cd27) list_medium_line_t2_g3_g3_ParamLimits

0xddc0,	// (0x0003cd27) list_medium_line_t2_g3_g3

0x0002,

0xf1f3,	// (0x0003e15a) list_medium_line_t2_g3_g_ParamLimits

0xf1f3,	// (0x0003e15a) list_medium_line_t2_g3_g

0xe034,	// (0x0003cf9b) list_medium_line_t2_g3_t1_ParamLimits

0xe034,	// (0x0003cf9b) list_medium_line_t2_g3_t1

0xe034,	// (0x0003cf9b) list_medium_line_t2_g3_t2_ParamLimits

0xe034,	// (0x0003cf9b) list_medium_line_t2_g3_t2

0x0001,

0xf276,	// (0x0003e1dd) list_medium_line_t2_g3_t_ParamLimits

0xf276,	// (0x0003e1dd) list_medium_line_t2_g3_t

0xddc0,	// (0x0003cd27) list_medium_line_t3_g3_g1_ParamLimits

0xddc0,	// (0x0003cd27) list_medium_line_t3_g3_g1

0xddc0,	// (0x0003cd27) list_medium_line_t3_g3_g2_ParamLimits

0xddc0,	// (0x0003cd27) list_medium_line_t3_g3_g2

0xddc0,	// (0x0003cd27) list_medium_line_t3_g3_g3_ParamLimits

0xddc0,	// (0x0003cd27) list_medium_line_t3_g3_g3

0x0002,

0xf1f3,	// (0x0003e15a) list_medium_line_t3_g3_g_ParamLimits

0xf1f3,	// (0x0003e15a) list_medium_line_t3_g3_g

0xe034,	// (0x0003cf9b) list_medium_line_t3_g3_t1_ParamLimits

0xe034,	// (0x0003cf9b) list_medium_line_t3_g3_t1

0xe034,	// (0x0003cf9b) list_medium_line_t3_g3_t2_ParamLimits

0xe034,	// (0x0003cf9b) list_medium_line_t3_g3_t2

0xe034,	// (0x0003cf9b) list_medium_line_t3_g3_t3_ParamLimits

0xe034,	// (0x0003cf9b) list_medium_line_t3_g3_t3

0x0002,

0xf1fa,	// (0x0003e161) list_medium_line_t3_g3_t_ParamLimits

0xf1fa,	// (0x0003e161) list_medium_line_t3_g3_t

0xe01a,	// (0x0003cf81) list_medium_line_right_iconx2_g1

0xe01a,	// (0x0003cf81) list_medium_line_right_iconx2_g2

0x0001,

0xf3dd,	// (0x0003e344) list_medium_line_right_iconx2_g

0xe555,	// (0x0003d4bc) list_medium_line_right_iconx2_t1

0xe01a,	// (0x0003cf81) list_medium_line_t2_right_iconx2_g1

0xe01a,	// (0x0003cf81) list_medium_line_t2_right_iconx2_g2

0x0001,

0xf3dd,	// (0x0003e344) list_medium_line_t2_right_iconx2_g

0xe555,	// (0x0003d4bc) list_medium_line_t2_right_iconx2_t1

0xe555,	// (0x0003d4bc) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfc70,	// (0x0003ebd7) list_medium_line_t2_right_iconx2_t

0xe555,	// (0x0003d4bc) list_medium_line_x4_t4_t1

0xe555,	// (0x0003d4bc) list_medium_line_x4_t4_t2

0xe555,	// (0x0003d4bc) list_medium_line_x4_t4_t3

0xe555,	// (0x0003d4bc) list_medium_line_x4_t4_t4

0x0003,

0xf2c8,	// (0x0003e22f) list_medium_line_x4_t4_t

0xc32f,	// (0x0003b296) tport_appsw_pane_ParamLimits

0xc32f,	// (0x0003b296) tport_appsw_pane

0xc33d,	// (0x0003b2a4) tport_contact_pane_ParamLimits

0xc33d,	// (0x0003b2a4) tport_contact_pane

0xc34d,	// (0x0003b2b4) tport_listscroll_pane_ParamLimits

0xc34d,	// (0x0003b2b4) tport_listscroll_pane

0xc35d,	// (0x0003b2c4) cell_tport_appsw_pane_ParamLimits

0xc35d,	// (0x0003b2c4) cell_tport_appsw_pane

0xddce,	// (0x0003cd35) tport_appsw_pane_g1_ParamLimits

0xddce,	// (0x0003cd35) tport_appsw_pane_g1

0x38af,	// (0x00032816) tport_contact_pane_g1

0x38b8,	// (0x0003281f) tport_contact_pane_t1

0x38c6,	// (0x0003282d) tport_contact_pane_t2

0x0001,

0xfcaa,	// (0x0003ec11) tport_contact_pane_t

0x38d4,	// (0x0003283b) list_tport_pane

0x38dd,	// (0x00032844) scroll_pane_cp_030

0xc390,	// (0x0003b2f7) cell_tport_appsw_pane_g1

0xc3a0,	// (0x0003b307) cell_tport_appsw_pane_t1

0xc3ae,	// (0x0003b315) grid_highlight_pane_cp019

0xc3b6,	// (0x0003b31d) list_tport_double_graphic_pane_ParamLimits

0xc3b6,	// (0x0003b31d) list_tport_double_graphic_pane

0xdd67,	// (0x0003ccce) list_highlight_pane_cp023_ParamLimits

0xdd67,	// (0x0003ccce) list_highlight_pane_cp023

0xc3c7,	// (0x0003b32e) list_tport_double_graphic_pane_g1_ParamLimits

0xc3c7,	// (0x0003b32e) list_tport_double_graphic_pane_g1

0xc3d4,	// (0x0003b33b) list_tport_double_graphic_pane_t1_ParamLimits

0xc3d4,	// (0x0003b33b) list_tport_double_graphic_pane_t1

0xc3e9,	// (0x0003b350) list_tport_double_graphic_pane_t2_ParamLimits

0xc3e9,	// (0x0003b350) list_tport_double_graphic_pane_t2

0x0001,

0xfcb6,	// (0x0003ec1d) list_tport_double_graphic_pane_t_ParamLimits

0xfcb6,	// (0x0003ec1d) list_tport_double_graphic_pane_t

0xd6bf,	// (0x0003c626) main_cale_note_pane

0xa76c,	// (0x000396d3) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0xa76c,	// (0x000396d3) cell_vitu2_function_top_wide_pane_cp01

0xbebc,	// (0x0003ae23) wait_bar_pane_cp05_ParamLimits

0xdd67,	// (0x0003ccce) listscroll_cmail_pane

0x38e6,	// (0x0003284d) list_cmail_pane

0xc3fb,	// (0x0003b362) list_cmail_body_pane

0xc423,	// (0x0003b38a) list_single_cmail_header_caption_pane

0xc452,	// (0x0003b3b9) list_single_cmail_header_detail_pane_ParamLimits

0xc452,	// (0x0003b3b9) list_single_cmail_header_detail_pane

0x38f6,	// (0x0003285d) list_single_cmail_header_caption_pane_t1

0x5907,	// (0x0003486e) list_single_cmail_header_detail_pane_g1_ParamLimits

0x5907,	// (0x0003486e) list_single_cmail_header_detail_pane_g1

0x591d,	// (0x00034884) list_single_cmail_header_detail_pane_g2_ParamLimits

0x591d,	// (0x00034884) list_single_cmail_header_detail_pane_g2

0x0002,

0xfcbb,	// (0x0003ec22) list_single_cmail_header_detail_pane_g_ParamLimits

0xfcbb,	// (0x0003ec22) list_single_cmail_header_detail_pane_g

0x5929,	// (0x00034890) list_single_cmail_header_detail_pane_t1_ParamLimits

0x5929,	// (0x00034890) list_single_cmail_header_detail_pane_t1

0x5989,	// (0x000348f0) list_single_cmail_header_editor_pane_bg_ParamLimits

0x5989,	// (0x000348f0) list_single_cmail_header_editor_pane_bg

0x32e7,	// (0x0003224e) list_cmail_body_pane_g1

0x399d,	// (0x00032904) list_cmail_body_pane_t1

0x24cf,	// (0x00031436) list_single_cmail_header_editor_pane_bg_g1

0xe23f,	// (0x0003d1a6) list_single_cmail_header_editor_pane_bg_g1_copy1

0x24df,	// (0x00031446) list_single_cmail_header_editor_pane_bg_g1_copy2

0x24d7,	// (0x0003143e) list_single_cmail_header_editor_pane_bg_g1_copy3

0x276c,	// (0x000316d3) list_single_cmail_header_editor_pane_bg_g1_copy4

0x24ff,	// (0x00031466) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0x24ef,	// (0x00031456) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0x24f7,	// (0x0003145e) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xe21f,	// (0x0003d186) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0xc48b,	// (0x0003b3f2) calenote_gesture_pane_ParamLimits

0xc48b,	// (0x0003b3f2) calenote_gesture_pane

0xc4a5,	// (0x0003b40c) calenote_window_pane_ParamLimits

0xc4a5,	// (0x0003b40c) calenote_window_pane

0x39ab,	// (0x00032912) popup_note_window_cp01

0xc4bd,	// (0x0003b424) calenote_swipe_1_pane_ParamLimits

0xc4bd,	// (0x0003b424) calenote_swipe_1_pane

0xc202,	// (0x0003b169) calenote_swipe_2_pane_ParamLimits

0xc202,	// (0x0003b169) calenote_swipe_2_pane

0x3639,	// (0x000325a0) calenote_swipe_1_pane_g1_ParamLimits

0x3639,	// (0x000325a0) calenote_swipe_1_pane_g1

0x3646,	// (0x000325ad) calenote_swipe_1_pane_g2_ParamLimits

0x3646,	// (0x000325ad) calenote_swipe_1_pane_g2

0x0001,

0xfc58,	// (0x0003ebbf) calenote_swipe_1_pane_g_ParamLimits

0xfc58,	// (0x0003ebbf) calenote_swipe_1_pane_g

0x39bd,	// (0x00032924) calenote_swipe_1_pane_t1_ParamLimits

0x39bd,	// (0x00032924) calenote_swipe_1_pane_t1

0x3639,	// (0x000325a0) calenote_swipe_2_pane_g1_ParamLimits

0x3639,	// (0x000325a0) calenote_swipe_2_pane_g1

0x39dc,	// (0x00032943) calenote_swipe_2_pane_g2_ParamLimits

0x39dc,	// (0x00032943) calenote_swipe_2_pane_g2

0x0001,

0xfcc7,	// (0x0003ec2e) calenote_swipe_2_pane_g_ParamLimits

0xfcc7,	// (0x0003ec2e) calenote_swipe_2_pane_g

0x39e8,	// (0x0003294f) calenote_swipe_2_pane_t1_ParamLimits

0x39e8,	// (0x0003294f) calenote_swipe_2_pane_t1

0xd6bf,	// (0x0003c626) main_mup_navstr_pane

0x9616,	// (0x0003857d) main_mup3_pane_t7_ParamLimits

0x9616,	// (0x0003857d) main_mup3_pane_t7

0x9e3f,	// (0x00038da6) main_mp4_pane_g6_ParamLimits

0x9e3f,	// (0x00038da6) main_mp4_pane_g6

0xa1cf,	// (0x00039136) main_image3_pane_t4_ParamLimits

0xa1cf,	// (0x00039136) main_image3_pane_t4

0xc4d0,	// (0x0003b437) popup_navstr_preview_pane_ParamLimits

0xc4d0,	// (0x0003b437) popup_navstr_preview_pane

0xc4dc,	// (0x0003b443) scroll_navstr_pane_ParamLimits

0xc4dc,	// (0x0003b443) scroll_navstr_pane

0xd6bf,	// (0x0003c626) bg_popup_preview_window_pane_cp04

0x3a0f,	// (0x00032976) popup_navstr_preview_pane_t1

0xc4e8,	// (0x0003b44f) scroll_navstr_pane_g1_ParamLimits

0xc4e8,	// (0x0003b44f) scroll_navstr_pane_g1

0xc4f5,	// (0x0003b45c) scroll_navstr_pane_t1_ParamLimits

0xc4f5,	// (0x0003b45c) scroll_navstr_pane_t1

0x39b4,	// (0x0003291b) bg_button_pane_cp014

0x39b4,	// (0x0003291b) bg_button_pane_cp030

0x5618,	// (0x0003457f) list_double_fisheye_pane_g4_ParamLimits

0x5618,	// (0x0003457f) list_double_fisheye_pane_g4

0x5624,	// (0x0003458b) list_double_fisheye_pane_g5_ParamLimits

0x5624,	// (0x0003458b) list_double_fisheye_pane_g5

0x046b,	// (0x0002f3d2) sp_fs_scroll_pane_cp03

0x3750,	// (0x000326b7) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0x375c,	// (0x000326c3) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfc75,	// (0x0003ebdc) main_sp_fs_ctrlbar_pane_g_ParamLimits

0xc2a3,	// (0x0003b20a) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0x38ee,	// (0x00032855) sp_fs_scroll_pane_cp02

0xdf2c,	// (0x0003ce93) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0xdf2c,	// (0x0003ce93) popup_sp_fs_calendar_preview_list_single_pane

0xd6bf,	// (0x0003c626) main_cam6_pano_pane

0xdd67,	// (0x0003ccce) main_mup3_pane_ParamLimits

0xd6bf,	// (0x0003c626) main_phacti_pane

0xbd91,	// (0x0003acf8) bg_button_pane_cp11

0xbda9,	// (0x0003ad10) main_mobtv_info_pane_g2_ParamLimits

0xbda9,	// (0x0003ad10) main_mobtv_info_pane_g2

0x0001,

0xfbd5,	// (0x0003eb3c) main_mobtv_info_pane_g_ParamLimits

0xfbd5,	// (0x0003eb3c) main_mobtv_info_pane_g

0xbf5b,	// (0x0003aec2) sc_clock_pane_t5_ParamLimits

0xbf5b,	// (0x0003aec2) sc_clock_pane_t5

0xbffc,	// (0x0003af63) main_radioblah_pane_g1_ParamLimits

0x3585,	// (0x000324ec) main_radioblah_pane_t3_ParamLimits

0x3585,	// (0x000324ec) main_radioblah_pane_t3

0x359d,	// (0x00032504) main_radioblah_pane_t4_ParamLimits

0x359d,	// (0x00032504) main_radioblah_pane_t4

0xc01a,	// (0x0003af81) main_radioblah_text_pane_ParamLimits

0xc01a,	// (0x0003af81) main_radioblah_text_pane

0xc027,	// (0x0003af8e) main_radioblah_info_pane_g1_ParamLimits

0xc0bc,	// (0x0003b023) main_radioblah_info_pane_t4_ParamLimits

0xc0bc,	// (0x0003b023) main_radioblah_info_pane_t4

0xdd67,	// (0x0003ccce) main_sp_fs_calendar_pane

0xc507,	// (0x0003b46e) main_phacti_pane_g1

0xc50f,	// (0x0003b476) phacti_note_pane_ParamLimits

0xc50f,	// (0x0003b476) phacti_note_pane

0x3a26,	// (0x0003298d) phacti_term_pane_ParamLimits

0x3a26,	// (0x0003298d) phacti_term_pane

0x3a3b,	// (0x000329a2) phacti_note_pane_t1_ParamLimits

0x3a3b,	// (0x000329a2) phacti_note_pane_t1

0x59a0,	// (0x00034907) phacti_term_pane_g1

0x59a8,	// (0x0003490f) phacti_term_pane_t1_ParamLimits

0x59a8,	// (0x0003490f) phacti_term_pane_t1

0x3a84,	// (0x000329eb) popup_sp_fs_calendar_preview_list_single_pane_g1

0x3a8c,	// (0x000329f3) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfcd1,	// (0x0003ec38) popup_sp_fs_calendar_preview_list_single_pane_g

0x3a94,	// (0x000329fb) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0x3a94,	// (0x000329fb) popup_sp_fs_calendar_preview_list_single_pane_t1

0x3aaa,	// (0x00032a11) aid_popup_sp_fs_bg_corner_pane

0xe01a,	// (0x0003cf81) popup_sp_fs_calendar_preview_bg_pane_g1

0xd6bf,	// (0x0003c626) popup_sp_fs_calendar_preview_bg_pane

0x3ab2,	// (0x00032a19) popup_sp_fs_calendar_preview_list_pane

0xf011,	// (0x0003df78) bg_main_sp_fs_cale_pane_ParamLimits

0xf011,	// (0x0003df78) bg_main_sp_fs_cale_pane

0x59db,	// (0x00034942) listscroll_cale_mrui_pane_ParamLimits

0x59db,	// (0x00034942) listscroll_cale_mrui_pane

0x59f0,	// (0x00034957) listscroll_sp_fs_schedule_track_pane

0x59f9,	// (0x00034960) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0x59f9,	// (0x00034960) main_sp_fs_ctrlbar_pane_cp01

0x3af4,	// (0x00032a5b) main_sp_fs_ribbon_pane

0x5a0c,	// (0x00034973) popup_sp_fs_cale_preview_window

0xc572,	// (0x0003b4d9) list_single_sp_fs_schedule_track_pane_ParamLimits

0xc572,	// (0x0003b4d9) list_single_sp_fs_schedule_track_pane

0xd6c9,	// (0x0003c630) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0xd6c9,	// (0x0003c630) bg_sp_fs_highlight_list_pane_cp03

0xc598,	// (0x0003b4ff) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0xc598,	// (0x0003b4ff) list_single_sp_fs_schedule_track_pane_g1

0xc5a4,	// (0x0003b50b) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0xc5a4,	// (0x0003b50b) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfcd6,	// (0x0003ec3d) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfcd6,	// (0x0003ec3d) list_single_sp_fs_schedule_track_pane_g

0xc5b0,	// (0x0003b517) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0xc5b0,	// (0x0003b517) list_single_sp_fs_schedule_track_pane_t1

0xc5c8,	// (0x0003b52f) sp_fs_schedule_track_pane_ParamLimits

0xc5c8,	// (0x0003b52f) sp_fs_schedule_track_pane

0x3b0e,	// (0x00032a75) sp_fs_schedule_track_pane_g1

0x3b16,	// (0x00032a7d) sp_fs_schedule_track_pane_g2

0x3b1e,	// (0x00032a85) sp_fs_schedule_track_pane_g3

0x3b26,	// (0x00032a8d) sp_fs_schedule_track_pane_g4

0x3b2e,	// (0x00032a95) sp_fs_schedule_track_pane_g5

0x0004,

0xfcdb,	// (0x0003ec42) sp_fs_schedule_track_pane_g

0x24cf,	// (0x00031436) bg_sp_fs_schedule_viewer_highlight_g1

0xe23f,	// (0x0003d1a6) bg_sp_fs_schedule_viewer_highlight_g2

0x24d7,	// (0x0003143e) bg_sp_fs_schedule_viewer_highlight_g3

0x24df,	// (0x00031446) bg_sp_fs_schedule_viewer_highlight_g4

0x276c,	// (0x000316d3) bg_sp_fs_schedule_viewer_highlight_g5

0x24ef,	// (0x00031456) bg_sp_fs_schedule_viewer_highlight_g6

0x24f7,	// (0x0003145e) bg_sp_fs_schedule_viewer_highlight_g7

0x24ff,	// (0x00031466) bg_sp_fs_schedule_viewer_highlight_g8

0xe21f,	// (0x0003d186) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfce6,	// (0x0003ec4d) bg_sp_fs_schedule_viewer_highlight_g

0xd6bf,	// (0x0003c626) bg_main_sp_fs_ribbon_pane

0xc5d8,	// (0x0003b53f) main_sp_fs_ribbon_pane_g1

0x3b36,	// (0x00032a9d) main_sp_fs_ribbon_pane_t1

0xc5e1,	// (0x0003b548) main_sp_fs_ribbon_pane_t2

0x3b45,	// (0x00032aac) main_sp_fs_ribbon_pane_t3

0x0002,

0xfcf9,	// (0x0003ec60) main_sp_fs_ribbon_pane_t

0x3b54,	// (0x00032abb) main_sp_fs_ribbon_scheduler_pane

0x3b5c,	// (0x00032ac3) bg_main_sp_fs_ribbon_pane_g1

0x3b65,	// (0x00032acc) bg_main_sp_fs_ribbon_pane_g2

0x3b6e,	// (0x00032ad5) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfd00,	// (0x0003ec67) bg_main_sp_fs_ribbon_pane_g

0x3b76,	// (0x00032add) main_sp_fs_ribbon_scheduler_pane_g1

0x3b7f,	// (0x00032ae6) main_sp_fs_ribbon_scheduler_pane_g2

0x3b88,	// (0x00032aef) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfd07,	// (0x0003ec6e) main_sp_fs_ribbon_scheduler_pane_g

0x3b91,	// (0x00032af8) list_cale_mrui_pane

0xc5f0,	// (0x0003b557) sp_fs_scroll_pane_cp07_ParamLimits

0xc5f0,	// (0x0003b557) sp_fs_scroll_pane_cp07

0xc60c,	// (0x0003b573) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0xc60c,	// (0x0003b573) bg_sp_fs_schedule_viewer_highlight

0x3b9e,	// (0x00032b05) list_single_sp_fs_schedule_track_pane_cp01

0x3ba6,	// (0x00032b0d) list_sp_fs_schedule_track_pane

0x3bae,	// (0x00032b15) sp_fs_scroll_pane_cp06_ParamLimits

0x3bae,	// (0x00032b15) sp_fs_scroll_pane_cp06

0xe01a,	// (0x0003cf81) bgmain_sp_fs_calendar_pane_g1

0x5a1e,	// (0x00034985) list_single_cale_mrui_pane_ParamLimits

0x5a1e,	// (0x00034985) list_single_cale_mrui_pane

0x5a4c,	// (0x000349b3) list_single_cale_mrui_row_pane_ParamLimits

0x5a4c,	// (0x000349b3) list_single_cale_mrui_row_pane

0x5a59,	// (0x000349c0) list_single_cale_mrui_row_pane_g1_ParamLimits

0x5a59,	// (0x000349c0) list_single_cale_mrui_row_pane_g1

0x5a91,	// (0x000349f8) list_single_cale_mrui_row_pane_t1_ParamLimits

0x5a91,	// (0x000349f8) list_single_cale_mrui_row_pane_t1

0x5aa3,	// (0x00034a0a) list_single_cale_mrui_row_pane_t2_ParamLimits

0x5aa3,	// (0x00034a0a) list_single_cale_mrui_row_pane_t2

0x5b09,	// (0x00034a70) list_single_cale_mrui_row_pane_t3_ParamLimits

0x5b09,	// (0x00034a70) list_single_cale_mrui_row_pane_t3

0x5b38,	// (0x00034a9f) list_single_cale_mrui_row_pane_t4_ParamLimits

0x5b38,	// (0x00034a9f) list_single_cale_mrui_row_pane_t4

0x0003,

0xfd15,	// (0x0003ec7c) list_single_cale_mrui_row_pane_t_ParamLimits

0xfd15,	// (0x0003ec7c) list_single_cale_mrui_row_pane_t

0x5b67,	// (0x00034ace) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x5b67,	// (0x00034ace) list_single_cmail_header_editor_pane_bg_cp01

0x5b87,	// (0x00034aee) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x5b87,	// (0x00034aee) list_single_cmail_header_editor_pane_bg_cp02

0xc619,	// (0x0003b580) main_radioblah_text_pane_t1_ParamLimits

0xc619,	// (0x0003b580) main_radioblah_text_pane_t1

0x3c82,	// (0x00032be9) cam6_indi_pane_cp01

0x3c8a,	// (0x00032bf1) cam6_mode_pane_cp01

0x3c92,	// (0x00032bf9) cam6_pano_pane

0x3c9b,	// (0x00032c02) cam6_zoom_pane_cp01

0x3ca3,	// (0x00032c0a) cam6_pano_image_pane

0x3cae,	// (0x00032c15) cam6_pano_pane_g1

0x32e7,	// (0x0003224e) cam6_pano_pane_g2

0x3cb7,	// (0x00032c1e) cam6_pano_pane_g3

0x3cc0,	// (0x00032c27) cam6_pano_pane_g4

0x1d9a,	// (0x00030d01) cam6_pano_pane_g5

0x3cc9,	// (0x00032c30) cam6_pano_pane_g6

0x3cd3,	// (0x00032c3a) cam6_pano_pane_g7

0x3cdb,	// (0x00032c42) cam6_pano_pane_g8

0x3ce4,	// (0x00032c4b) cam6_pano_pane_g9

0x0008,

0xfd1e,	// (0x0003ec85) cam6_pano_pane_g

0xd6bf,	// (0x0003c626) main_browser_tag_pane

0x3a07,	// (0x0003296e) grid_navstr_albumart_pane

0x3cef,	// (0x00032c56) cell_navstr_albumart_pane_ParamLimits

0x3cef,	// (0x00032c56) cell_navstr_albumart_pane

0x3d0f,	// (0x00032c76) cell_navstr_albumart_pane_g1

0x10e5,	// (0x0003004c) cell_navstr_albumart_pane_g2

0x10f5,	// (0x0003005c) cell_navstr_albumart_pane_g3

0x10ed,	// (0x00030054) cell_navstr_albumart_pane_g4

0x0003,

0xfd31,	// (0x0003ec98) cell_navstr_albumart_pane_g

0xc634,	// (0x0003b59b) bt_list_pane_ParamLimits

0xc634,	// (0x0003b59b) bt_list_pane

0xc655,	// (0x0003b5bc) bt_list_pane_t1

0xc664,	// (0x0003b5cb) bt_list_pane_t2

0x0001,

0xfd3a,	// (0x0003eca1) bt_list_pane_t

0xd6bf,	// (0x0003c626) main_cale_prevew_pane

0xc673,	// (0x0003b5da) popup_cale_preview_window_ParamLimits

0xc673,	// (0x0003b5da) popup_cale_preview_window

0xdd67,	// (0x0003ccce) bg_popup_preview_window_pane_cp05_ParamLimits

0xdd67,	// (0x0003ccce) bg_popup_preview_window_pane_cp05

0x3d17,	// (0x00032c7e) list_cale_preview_pane_ParamLimits

0x3d17,	// (0x00032c7e) list_cale_preview_pane

0xc68c,	// (0x0003b5f3) list_double_cale_preview_pane_ParamLimits

0xc68c,	// (0x0003b5f3) list_double_cale_preview_pane

0xc69e,	// (0x0003b605) list_single_cale_preview_pane_ParamLimits

0xc69e,	// (0x0003b605) list_single_cale_preview_pane

0xc6b2,	// (0x0003b619) list_single_cale_preview_pane_g1

0xc6ba,	// (0x0003b621) list_single_cale_preview_pane_t1_ParamLimits

0xc6ba,	// (0x0003b621) list_single_cale_preview_pane_t1

0xc6cf,	// (0x0003b636) list_double_cale_preview_pane_g1

0xc6d7,	// (0x0003b63e) list_double_cale_preview_pane_t1_ParamLimits

0xc6d7,	// (0x0003b63e) list_double_cale_preview_pane_t1

0xc6ec,	// (0x0003b653) list_double_cale_preview_pane_t2_ParamLimits

0xc6ec,	// (0x0003b653) list_double_cale_preview_pane_t2

0x0001,

0xfd3f,	// (0x0003eca6) list_double_cale_preview_pane_t_ParamLimits

0xfd3f,	// (0x0003eca6) list_double_cale_preview_pane_t

0xd6bf,	// (0x0003c626) main_ezdial_pane

0xdd67,	// (0x0003ccce) main_sp_fs_email_pane_ParamLimits

0xc21c,	// (0x0003b183) cmail_ddmenu_btn01_pane_ParamLimits

0xc21c,	// (0x0003b183) cmail_ddmenu_btn01_pane

0xc231,	// (0x0003b198) cmail_ddmenu_btn02_pane_ParamLimits

0xc231,	// (0x0003b198) cmail_ddmenu_btn02_pane

0xc249,	// (0x0003b1b0) cmail_ddmenu_btn03_pane_ParamLimits

0xc249,	// (0x0003b1b0) cmail_ddmenu_btn03_pane

0xc2de,	// (0x0003b245) main_sp_fs_ctrlbar_pane_ParamLimits

0xc2f4,	// (0x0003b25b) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0xc3fb,	// (0x0003b362) list_cmail_body_pane_ParamLimits

0x3904,	// (0x0003286b) bg_button_pane_cp12

0x3919,	// (0x00032880) list_single_cmail_header_detail_pane_g3_ParamLimits

0x3919,	// (0x00032880) list_single_cmail_header_detail_pane_g3

0x5965,	// (0x000348cc) list_single_cmail_header_detail_pane_t2_ParamLimits

0x5965,	// (0x000348cc) list_single_cmail_header_detail_pane_t2

0x0001,

0xfcc2,	// (0x0003ec29) list_single_cmail_header_detail_pane_t_ParamLimits

0xfcc2,	// (0x0003ec29) list_single_cmail_header_detail_pane_t

0x59bd,	// (0x00034924) phacti_term_pane_t2_ParamLimits

0x59bd,	// (0x00034924) phacti_term_pane_t2

0x0001,

0xfccc,	// (0x0003ec33) phacti_term_pane_t_ParamLimits

0xfccc,	// (0x0003ec33) phacti_term_pane_t

0x3d23,	// (0x00032c8a) aid_size_list_single_double

0xc704,	// (0x0003b66b) popup_ezdial_listscroll_window

0xc728,	// (0x0003b68f) popup_number_entry_window_cp01

0xdfe4,	// (0x0003cf4b) bg_popup_call_pane_cp09

0x3d2f,	// (0x00032c96) ezdial_list_pane

0x3d37,	// (0x00032c9e) scroll_pane_cp23

0x15a3,	// (0x0003050a) bg_button_pane_cp028_ParamLimits

0x15a3,	// (0x0003050a) bg_button_pane_cp028

0xc736,	// (0x0003b69d) cmail_ddmenu_btn01_pane_g1_ParamLimits

0xc736,	// (0x0003b69d) cmail_ddmenu_btn01_pane_g1

0xc746,	// (0x0003b6ad) cmail_ddmenu_btn01_pane_g2_ParamLimits

0xc746,	// (0x0003b6ad) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfd44,	// (0x0003ecab) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfd44,	// (0x0003ecab) cmail_ddmenu_btn01_pane_g

0x3d3f,	// (0x00032ca6) cmail_ddmenu_btn01_pane_t1_ParamLimits

0x3d3f,	// (0x00032ca6) cmail_ddmenu_btn01_pane_t1

0xf011,	// (0x0003df78) bg_button_pane_cp029_ParamLimits

0xf011,	// (0x0003df78) bg_button_pane_cp029

0xc746,	// (0x0003b6ad) cmail_ddmenu_btn02_pane_g1_ParamLimits

0xc746,	// (0x0003b6ad) cmail_ddmenu_btn02_pane_g1

0xc75e,	// (0x0003b6c5) cmail_ddmenu_btn02_pane_t1_ParamLimits

0xc75e,	// (0x0003b6c5) cmail_ddmenu_btn02_pane_t1

0xd6c9,	// (0x0003c630) bg_button_pane_cp031_ParamLimits

0xd6c9,	// (0x0003c630) bg_button_pane_cp031

0xc746,	// (0x0003b6ad) cmail_ddmenu_btn03_pane_g1_ParamLimits

0xc746,	// (0x0003b6ad) cmail_ddmenu_btn03_pane_g1

0xc75e,	// (0x0003b6c5) cmail_ddmenu_btn03_pane_t1_ParamLimits

0xc75e,	// (0x0003b6c5) cmail_ddmenu_btn03_pane_t1

0xa07a,	// (0x00038fe1) cell_dialer2_keypad_pane_t1_ParamLimits

0xa094,	// (0x00038ffb) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0xa094,	// (0x00038ffb) cell_dialer2_keypad_pane_t1_copy1

0xbbd2,	// (0x0003ab39) ncimui_group_button_pane

0xdd67,	// (0x0003ccce) main_sp_fs_calendar_pane_ParamLimits

0xc423,	// (0x0003b38a) list_single_cmail_header_caption_pane_ParamLimits

0x59d2,	// (0x00034939) aid_recal_txt_sm_pane

0xd6bf,	// (0x0003c626) mian_recal_day_pane

0x5a0c,	// (0x00034973) popup_sp_fs_cale_preview_window_ParamLimits

0x3d54,	// (0x00032cbb) list_recal_day_pane

0x5bbe,	// (0x00034b25) list_single_recal_day_pane_ParamLimits

0x5bbe,	// (0x00034b25) list_single_recal_day_pane

0x3da8,	// (0x00032d0f) list_single_recal_day_pane_g1_ParamLimits

0x3da8,	// (0x00032d0f) list_single_recal_day_pane_g1

0x5bd0,	// (0x00034b37) list_single_recal_day_pane_g2_ParamLimits

0x5bd0,	// (0x00034b37) list_single_recal_day_pane_g2

0x5bdc,	// (0x00034b43) list_single_recal_day_pane_g3_ParamLimits

0x5bdc,	// (0x00034b43) list_single_recal_day_pane_g3

0x5be8,	// (0x00034b4f) list_single_recal_day_pane_g4_ParamLimits

0x5be8,	// (0x00034b4f) list_single_recal_day_pane_g4

0x5bf6,	// (0x00034b5d) list_single_recal_day_pane_g5_ParamLimits

0x5bf6,	// (0x00034b5d) list_single_recal_day_pane_g5

0x5c0c,	// (0x00034b73) list_single_recal_day_pane_g6_ParamLimits

0x5c0c,	// (0x00034b73) list_single_recal_day_pane_g6

0x0004,

0xfd53,	// (0x0003ecba) list_single_recal_day_pane_g_ParamLimits

0xfd53,	// (0x0003ecba) list_single_recal_day_pane_g

0x5c20,	// (0x00034b87) list_single_recal_day_pane_t1

0x5c32,	// (0x00034b99) list_single_recal_day_pane_t2

0x0001,

0xfd5e,	// (0x0003ecc5) list_single_recal_day_pane_t

0xc782,	// (0x0003b6e9) ncimui_query_button_pane_ParamLimits

0xc782,	// (0x0003b6e9) ncimui_query_button_pane

0xc792,	// (0x0003b6f9) ncimui_query_button_pane_t1_ParamLimits

0xc792,	// (0x0003b6f9) ncimui_query_button_pane_t1

0x3e10,	// (0x00032d77) ncimui_query_button_pane_t2_ParamLimits

0x3e10,	// (0x00032d77) ncimui_query_button_pane_t2

0x0001,

0xfd63,	// (0x0003ecca) ncimui_query_button_pane_t_ParamLimits

0xfd63,	// (0x0003ecca) ncimui_query_button_pane_t

0xc7a5,	// (0x0003b70c) query_button_pane_ParamLimits

0xc7a5,	// (0x0003b70c) query_button_pane

0xd6bf,	// (0x0003c626) bg_button_pane_cp0028

0x3e23,	// (0x00032d8a) query_button_pane_t1

0x8c01,	// (0x00037b68) main_tport_pane_ParamLimits

0xc305,	// (0x0003b26c) bg_popup_window_pane_cp01_ParamLimits

0xc305,	// (0x0003b26c) bg_popup_window_pane_cp01

0xc313,	// (0x0003b27a) heading_pane_cp08_ParamLimits

0xc313,	// (0x0003b27a) heading_pane_cp08

0xc321,	// (0x0003b288) heading_pane_cp07_ParamLimits

0xc321,	// (0x0003b288) heading_pane_cp07

0xc390,	// (0x0003b2f7) cell_tport_appsw_pane_g2

0x0002,

0xfcaf,	// (0x0003ec16) cell_tport_appsw_pane_g

0x50ec,	// (0x00034053) input_candi_list_open_g1

0xe402,	// (0x0003d369) list_cale_time_pane_g6_ParamLimits

0xe402,	// (0x0003d369) list_cale_time_pane_g6

0x90a1,	// (0x00038008) aid_size_touch_calib_1_ParamLimits

0x90a1,	// (0x00038008) aid_size_touch_calib_1

0x90ad,	// (0x00038014) aid_size_touch_calib_2_ParamLimits

0x90ad,	// (0x00038014) aid_size_touch_calib_2

0x90bb,	// (0x00038022) aid_size_touch_calib_3_ParamLimits

0x90bb,	// (0x00038022) aid_size_touch_calib_3

0x90cb,	// (0x00038032) aid_size_touch_calib_4_ParamLimits

0x90cb,	// (0x00038032) aid_size_touch_calib_4

0x90d9,	// (0x00038040) main_touch_calib_button_group_pane_ParamLimits

0x90d9,	// (0x00038040) main_touch_calib_button_group_pane

0x90e7,	// (0x0003804e) main_touch_calib_pane_g1_ParamLimits

0x90f3,	// (0x0003805a) main_touch_calib_pane_g2_ParamLimits

0x90ff,	// (0x00038066) main_touch_calib_pane_g3_ParamLimits

0x910b,	// (0x00038072) main_touch_calib_pane_g4_ParamLimits

0xf6f1,	// (0x0003e658) main_touch_calib_pane_g_ParamLimits

0x9117,	// (0x0003807e) main_touch_calib_pane_t1_ParamLimits

0x9130,	// (0x00038097) main_touch_calib_pane_t2_ParamLimits

0x9149,	// (0x000380b0) main_touch_calib_pane_t3_ParamLimits

0x915f,	// (0x000380c6) main_touch_calib_pane_t4_ParamLimits

0x9175,	// (0x000380dc) main_touch_calib_pane_t5_ParamLimits

0xf6fa,	// (0x0003e661) main_touch_calib_pane_t_ParamLimits

0x1b60,	// (0x00030ac7) list_single_fp_cale_pane_g3_ParamLimits

0x1b60,	// (0x00030ac7) list_single_fp_cale_pane_g3

0xdd67,	// (0x0003ccce) bg_button_pane_cp012_ParamLimits

0xdd67,	// (0x0003ccce) bg_vkb2_func_pane_cp03_ParamLimits

0xaeb8,	// (0x00039e1f) cell_vitu2_function_top_pane_g1_ParamLimits

0xdd67,	// (0x0003ccce) bg_vkb2_func_pane_cp04_ParamLimits

0xbb5a,	// (0x0003aac1) main_ncimui_button_group_pane_ParamLimits

0xbb5a,	// (0x0003aac1) main_ncimui_button_group_pane

0xbbc0,	// (0x0003ab27) main_ncimui_pane_t3_ParamLimits

0xbbc0,	// (0x0003ab27) main_ncimui_pane_t3

0x3a1d,	// (0x00032984) phacti_button_group_pane

0x3d23,	// (0x00032c8a) aid_size_list_single_double_ParamLimits

0xc704,	// (0x0003b66b) popup_ezdial_listscroll_window_ParamLimits

0xc728,	// (0x0003b68f) popup_number_entry_window_cp01_ParamLimits

0xc7b2,	// (0x0003b719) phacti_button_pane_ParamLimits

0xc7b2,	// (0x0003b719) phacti_button_pane

0xd6bf,	// (0x0003c626) bg_button_pane_cp14

0x3e31,	// (0x00032d98) phacti_button_pane_t1

0xc7c3,	// (0x0003b72a) main_touch_calib_button_pane_ParamLimits

0xc7c3,	// (0x0003b72a) main_touch_calib_button_pane

0xde32,	// (0x0003cd99) bg_button_pane_cp18_ParamLimits

0xde32,	// (0x0003cd99) bg_button_pane_cp18

0x3e3f,	// (0x00032da6) main_touch_calib_button_pane_t1_ParamLimits

0x3e3f,	// (0x00032da6) main_touch_calib_button_pane_t1

0x3e55,	// (0x00032dbc) main_touch_calib_button_pane_t2_ParamLimits

0x3e55,	// (0x00032dbc) main_touch_calib_button_pane_t2

0x0001,

0xfd68,	// (0x0003eccf) main_touch_calib_button_pane_t_ParamLimits

0xfd68,	// (0x0003eccf) main_touch_calib_button_pane_t

0xd6bf,	// (0x0003c626) cell_ncimui_button_pane

0xd6bf,	// (0x0003c626) bg_button_pane_cp032

0x3e73,	// (0x00032dda) cell_ncimui_button_pane_t1

0xa0f0,	// (0x00039057) image3_infobar_pane_ParamLimits

0xa0f0,	// (0x00039057) image3_infobar_pane

0xbf7d,	// (0x0003aee4) fs_bigclock_status_pane_ParamLimits

0xbf7d,	// (0x0003aee4) fs_bigclock_status_pane

0xbf8a,	// (0x0003aef1) main_fs_bigclock_clock_pane_ParamLimits

0xbf8a,	// (0x0003aef1) main_fs_bigclock_clock_pane

0xbf9e,	// (0x0003af05) main_fs_bigclock_indi_pane_ParamLimits

0xbf9e,	// (0x0003af05) main_fs_bigclock_indi_pane

0xbfc6,	// (0x0003af2d) main_fs_bigclock_swipe_pane_ParamLimits

0xbfc6,	// (0x0003af2d) main_fs_bigclock_swipe_pane

0xd6bf,	// (0x0003c626) main_fs_clock_dumped_data

0x33f4,	// (0x0003235b) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0x33f4,	// (0x0003235b) list_single_fs_bigclock_indicator_pane_g1

0x3410,	// (0x00032377) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0x3410,	// (0x00032377) list_single_fs_bigclock_indicator_pane_g2

0x342a,	// (0x00032391) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0x342a,	// (0x00032391) list_single_fs_bigclock_indicator_pane_g3

0x3444,	// (0x000323ab) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0x3444,	// (0x000323ab) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfc09,	// (0x0003eb70) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfc09,	// (0x0003eb70) list_single_fs_bigclock_indicator_pane_g

0x346f,	// (0x000323d6) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0x346f,	// (0x000323d6) list_single_fs_bigclock_indicator_pane_t1

0x3497,	// (0x000323fe) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0x3497,	// (0x000323fe) list_single_fs_bigclock_indicator_pane_t2

0x34bf,	// (0x00032426) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0x34bf,	// (0x00032426) list_single_fs_bigclock_indicator_pane_t3

0x34e7,	// (0x0003244e) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0x34e7,	// (0x0003244e) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfc14,	// (0x0003eb7b) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfc14,	// (0x0003eb7b) list_single_fs_bigclock_indicator_pane_t

0x3e81,	// (0x00032de8) image3_infobar_fav_pane_ParamLimits

0x3e81,	// (0x00032de8) image3_infobar_fav_pane

0x3e91,	// (0x00032df8) image3_infobar_loc_pane_ParamLimits

0x3e91,	// (0x00032df8) image3_infobar_loc_pane

0x3ea5,	// (0x00032e0c) image3_infobar_time_pane_ParamLimits

0x3ea5,	// (0x00032e0c) image3_infobar_time_pane

0xe01a,	// (0x0003cf81) image3_infobar_time_pane_g1

0x3eb5,	// (0x00032e1c) image3_infobar_time_pane_t1

0xe01a,	// (0x0003cf81) image3_infobar_loc_pane_g1

0x3ec3,	// (0x00032e2a) image3_infobar_loc_pane_g2

0x0001,

0xfd6d,	// (0x0003ecd4) image3_infobar_loc_pane_g

0x3ecb,	// (0x00032e32) image3_infobar_loc_pane_t1

0xe01a,	// (0x0003cf81) image3_infobar_fav_pane_g1

0x3ed9,	// (0x00032e40) image3_infobar_fav_pane_g2

0x0001,

0xfd72,	// (0x0003ecd9) image3_infobar_fav_pane_g

0x3ee1,	// (0x00032e48) fs_bigclock_status_battery_pane

0x3eea,	// (0x00032e51) fs_bigclock_status_signal_pane

0x3ef3,	// (0x00032e5a) fs_bigclock_status_title_pane

0x3efc,	// (0x00032e63) fs_bigclock_status_signal_pane_g1

0x3f05,	// (0x00032e6c) fs_bigclock_status_signal_pane_g2

0x0001,

0xfd77,	// (0x0003ecde) fs_bigclock_status_signal_pane_g

0x3f0d,	// (0x00032e74) fs_bigclock_status_battery_pane_g1

0x3f16,	// (0x00032e7d) fs_bigclock_status_battery_pane_g2

0x0001,

0xfd7c,	// (0x0003ece3) fs_bigclock_status_battery_pane_g

0x3f1e,	// (0x00032e85) fs_bigclock_status_title_pane_t1

0xc7d3,	// (0x0003b73a) main_fs_bigclock_clock_pane_g1

0xc7d3,	// (0x0003b73a) main_fs_bigclock_clock_pane_g2

0xc7e0,	// (0x0003b747) main_fs_bigclock_clock_pane_g3

0xc7e0,	// (0x0003b747) main_fs_bigclock_clock_pane_g4

0x0003,

0xfd81,	// (0x0003ece8) main_fs_bigclock_clock_pane_g

0xc7ec,	// (0x0003b753) main_fs_bigclock_clock_pane_t1

0xc7ff,	// (0x0003b766) main_fs_bigclock_clock_pane_t2

0x0001,

0xfd8a,	// (0x0003ecf1) main_fs_bigclock_clock_pane_t

0x3f2c,	// (0x00032e93) list_single_fs_bigclock_indicator_pane_ParamLimits

0x3f2c,	// (0x00032e93) list_single_fs_bigclock_indicator_pane

0x3f3d,	// (0x00032ea4) list_single_fs_bigclock_pane_ParamLimits

0x3f3d,	// (0x00032ea4) list_single_fs_bigclock_pane

0x3f63,	// (0x00032eca) main_fs_bigclock_indicator_pane_t1

0x3f72,	// (0x00032ed9) list_single_fs_bigclock_pane_g1

0x3f7a,	// (0x00032ee1) list_single_fs_bigclock_pane_t1

0xe01a,	// (0x0003cf81) main_fs_bigclock_swipe_pane_g1

0x3fbd,	// (0x00032f24) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfd9b,	// (0x0003ed02) main_fs_bigclock_swipe_pane_g

0x3fc5,	// (0x00032f2c) main_fs_bigclock_swipe_pane_t1_ParamLimits

0x3fc5,	// (0x00032f2c) main_fs_bigclock_swipe_pane_t1

0x7e75,	// (0x00036ddc) call_type_pane_ParamLimits

0xd6bf,	// (0x0003c626) main_btmg_pane

0x5a85,	// (0x000349ec) list_single_cale_mrui_row_pane_g2_ParamLimits

0x5a85,	// (0x000349ec) list_single_cale_mrui_row_pane_g2

0x0002,

0xfd0e,	// (0x0003ec75) list_single_cale_mrui_row_pane_g_ParamLimits

0xfd0e,	// (0x0003ec75) list_single_cale_mrui_row_pane_g

0x5bad,	// (0x00034b14) list_recal_vselct_arw_lo_pane

0x3d85,	// (0x00032cec) list_recal_vselct_arw_up_pane

0x5bb5,	// (0x00034b1c) list_recal_vselct_pane

0xc856,	// (0x0003b7bd) btmg_button_pane

0xc862,	// (0x0003b7c9) main_btmg_pane_g1

0xd6bf,	// (0x0003c626) bg_button_pane_cp044

0x3fe2,	// (0x00032f49) btmg_button_pane_t1

0x1275,	// (0x000301dc) aid_listscroll_gen

0xdd67,	// (0x0003ccce) main_cntbar_detail_pane

0x38e6,	// (0x0003284d) list_cmail_folder_pane

0x046b,	// (0x0002f3d2) sp_fs_scroll_pane_cp03_ParamLimits

0xc423,	// (0x0003b38a) list_single_fs_dyc_pane_cp01_ParamLimits

0xc423,	// (0x0003b38a) list_single_fs_dyc_pane_cp01

0x3ff0,	// (0x00032f57) aid_size_cmail_indent

0x5c44,	// (0x00034bab) list_single_dyc_row_pane_cp01

0xc88a,	// (0x0003b7f1) cntbar_detail_list_pane_ParamLimits

0xc88a,	// (0x0003b7f1) cntbar_detail_list_pane

0xc8c4,	// (0x0003b82b) main_cntbar_detail_cont_pane_ParamLimits

0xc8c4,	// (0x0003b82b) main_cntbar_detail_cont_pane

0x7e69,	// (0x00036dd0) scroll_pane_cp032_ParamLimits

0x7e69,	// (0x00036dd0) scroll_pane_cp032

0xc8d0,	// (0x0003b837) cntbar_detail_list_event_pane_ParamLimits

0xc8d0,	// (0x0003b837) cntbar_detail_list_event_pane

0xc896,	// (0x0003b7fd) cntbar_detail_list_shct_pane

0xe28d,	// (0x0003d1f4) aid_list_gen

0x4002,	// (0x00032f69) aid_scroll

0x400b,	// (0x00032f72) aid_size_touch_scroll_bar

0xf07c,	// (0x0003dfe3) aid_list_double

0x5c4d,	// (0x00034bb4) aid_list_single

0xc8e4,	// (0x0003b84b) aid_list_single_lg

0x5c56,	// (0x00034bbd) aid_list_z_g_a_sm

0x5c5e,	// (0x00034bc5) aid_list_z_g_d

0x5c66,	// (0x00034bcd) aid_txt_z_prm

0x5c74,	// (0x00034bdb) aid_txt_z_prm_cp01

0x5c82,	// (0x00034be9) aid_txt_z_sec

0xc8ed,	// (0x0003b854) main_cntbar_detail_cont_pane_g1_ParamLimits

0xc8ed,	// (0x0003b854) main_cntbar_detail_cont_pane_g1

0xc8fa,	// (0x0003b861) main_cntbar_detail_cont_pane_g2_ParamLimits

0xc8fa,	// (0x0003b861) main_cntbar_detail_cont_pane_g2

0x0001,

0xfda0,	// (0x0003ed07) main_cntbar_detail_cont_pane_g_ParamLimits

0xfda0,	// (0x0003ed07) main_cntbar_detail_cont_pane_g

0x4014,	// (0x00032f7b) main_cntbar_detail_cont_pane_t1

0x4022,	// (0x00032f89) main_cntbar_detail_cont_pane_t2

0x4030,	// (0x00032f97) main_cntbar_detail_cont_pane_t3

0x0002,

0xfda5,	// (0x0003ed0c) main_cntbar_detail_cont_pane_t

0xc906,	// (0x0003b86d) cell_cntbar_detail_list_shct_pane_ParamLimits

0xc906,	// (0x0003b86d) cell_cntbar_detail_list_shct_pane

0x403e,	// (0x00032fa5) cntbar_detail_list_shct_pane_g1

0x4047,	// (0x00032fae) cntbar_detail_list_shct_pane_g2

0x0001,

0xfdac,	// (0x0003ed13) cntbar_detail_list_shct_pane_g

0xc91a,	// (0x0003b881) cntbar_detail_list_event_pane_g1_ParamLimits

0xc91a,	// (0x0003b881) cntbar_detail_list_event_pane_g1

0xc926,	// (0x0003b88d) cntbar_detail_list_event_pane_g2_ParamLimits

0xc926,	// (0x0003b88d) cntbar_detail_list_event_pane_g2

0x0005,

0xfdb1,	// (0x0003ed18) cntbar_detail_list_event_pane_g_ParamLimits

0xfdb1,	// (0x0003ed18) cntbar_detail_list_event_pane_g

0xc992,	// (0x0003b8f9) cntbar_detail_list_event_pane_t1_ParamLimits

0xc992,	// (0x0003b8f9) cntbar_detail_list_event_pane_t1

0xc9a7,	// (0x0003b90e) cntbar_detail_list_event_pane_t2_ParamLimits

0xc9a7,	// (0x0003b90e) cntbar_detail_list_event_pane_t2

0x0002,

0xfdbe,	// (0x0003ed25) cntbar_detail_list_event_pane_t_ParamLimits

0xfdbe,	// (0x0003ed25) cntbar_detail_list_event_pane_t

0xe01a,	// (0x0003cf81) cell_cntbar_detail_list_shct_pane_g1

0xe9d1,	// (0x0003d938) navi_pane_mv_g3

0xdd67,	// (0x0003ccce) main_cntbar_detail_pane_ParamLimits

0xd6bf,	// (0x0003c626) main_notif_wgt_pane

0x9d7a,	// (0x00038ce1) aid_tch_main_mp4_pane_g4

0x9fd9,	// (0x00038f40) popup_slider_window_cp02

0x5ba3,	// (0x00034b0a) list_recal_day_event_pane

0xc86a,	// (0x0003b7d1) cntbar_detail_btn_pane_ParamLimits

0xc86a,	// (0x0003b7d1) cntbar_detail_btn_pane

0xc87a,	// (0x0003b7e1) cntbar_detail_btn_pane_cp01_ParamLimits

0xc87a,	// (0x0003b7e1) cntbar_detail_btn_pane_cp01

0xc896,	// (0x0003b7fd) cntbar_detail_list_shct_pane_ParamLimits

0xc8a2,	// (0x0003b809) cntbar_detail_pane_g1_ParamLimits

0xc8a2,	// (0x0003b809) cntbar_detail_pane_g1

0xc8ae,	// (0x0003b815) cntbar_detail_pane_t1_ParamLimits

0xc8ae,	// (0x0003b815) cntbar_detail_pane_t1

0xc932,	// (0x0003b899) cntbar_detail_list_event_pane_g3_ParamLimits

0xc932,	// (0x0003b899) cntbar_detail_list_event_pane_g3

0xc94a,	// (0x0003b8b1) cntbar_detail_list_event_pane_g4_ParamLimits

0xc94a,	// (0x0003b8b1) cntbar_detail_list_event_pane_g4

0xc962,	// (0x0003b8c9) cntbar_detail_list_event_pane_g5_ParamLimits

0xc962,	// (0x0003b8c9) cntbar_detail_list_event_pane_g5

0xc97a,	// (0x0003b8e1) cntbar_detail_list_event_pane_g6_ParamLimits

0xc97a,	// (0x0003b8e1) cntbar_detail_list_event_pane_g6

0xc9bc,	// (0x0003b923) cntbar_detail_list_event_pane_t3_ParamLimits

0xc9bc,	// (0x0003b923) cntbar_detail_list_event_pane_t3

0xc9ce,	// (0x0003b935) popup_notif_wgt_window_ParamLimits

0xc9ce,	// (0x0003b935) popup_notif_wgt_window

0xc9de,	// (0x0003b945) popup_submenu_window_cp01_ParamLimits

0xc9de,	// (0x0003b945) popup_submenu_window_cp01

0xdfe4,	// (0x0003cf4b) bg_popup_window_pane_cp10

0x4050,	// (0x00032fb7) listscroll_notif_wgt_pane

0x4062,	// (0x00032fc9) list_notif_wgt_window

0x406b,	// (0x00032fd2) scroll_pane_cp033

0xc9ec,	// (0x0003b953) list_notif_wgt_row_pane_ParamLimits

0xc9ec,	// (0x0003b953) list_notif_wgt_row_pane

0x4074,	// (0x00032fdb) aid_size_list_notif_wgt_del

0x4081,	// (0x00032fe8) list_notif_wgt_row_pane_g1

0x408d,	// (0x00032ff4) list_notif_wgt_row_pane_g2

0x409c,	// (0x00033003) list_notif_wgt_row_pane_g3

0x0002,

0xfdc5,	// (0x0003ed2c) list_notif_wgt_row_pane_g

0x40a9,	// (0x00033010) list_notif_wgt_row_pane_t1

0x40bf,	// (0x00033026) list_notif_wgt_row_pane_t2

0x40d1,	// (0x00033038) list_notif_wgt_row_pane_t3

0x0002,

0xfdcc,	// (0x0003ed33) list_notif_wgt_row_pane_t

0x27a6,	// (0x0003170d) list_recal_day_event_pane_g1

0x40e3,	// (0x0003304a) list_recal_day_event_pane_t1

0xd6bf,	// (0x0003c626) bg_button_pane_cp045

0xc9fe,	// (0x0003b965) cntbar_detail_btn_pane_t1

0xf011,	// (0x0003df78) main_callh_pane_ParamLimits

0xf011,	// (0x0003df78) main_callh_pane

0xd6bf,	// (0x0003c626) main_coverflow0_pane

0xd6bf,	// (0x0003c626) main_wgtman_pane

0xbfde,	// (0x0003af45) main_fs_bigclock_unlock_btn_pane_ParamLimits

0xbfde,	// (0x0003af45) main_fs_bigclock_unlock_btn_pane

0xc388,	// (0x0003b2ef) bg_button_pane_cp16

0xc398,	// (0x0003b2ff) cell_tport_appsw_pane_g3

0xca0c,	// (0x0003b973) cf0_flow_pane_ParamLimits

0xca0c,	// (0x0003b973) cf0_flow_pane

0x40f2,	// (0x00033059) listscroll_cf0_pane

0x40fd,	// (0x00033064) main_cf0_pane_g1

0xca1b,	// (0x0003b982) main_cf0_pane_t1_ParamLimits

0xca1b,	// (0x0003b982) main_cf0_pane_t1

0xca2f,	// (0x0003b996) main_cf0_pane_t2_ParamLimits

0xca2f,	// (0x0003b996) main_cf0_pane_t2

0x0001,

0xfdd8,	// (0x0003ed3f) main_cf0_pane_t_ParamLimits

0xfdd8,	// (0x0003ed3f) main_cf0_pane_t

0x410f,	// (0x00033076) scroll_pane_cp11

0xca43,	// (0x0003b9aa) cf0_flow_pane_g1

0xca4b,	// (0x0003b9b2) cf0_flow_pane_g2

0x0001,

0xfddd,	// (0x0003ed44) cf0_flow_pane_g

0xca53,	// (0x0003b9ba) cf0_flow_pane_t1

0xd6bf,	// (0x0003c626) main_call6_pane

0xd6bf,	// (0x0003c626) main_calllock_pane

0xca61,	// (0x0003b9c8) call6_btn_grp_pane_ParamLimits

0xca61,	// (0x0003b9c8) call6_btn_grp_pane

0xca70,	// (0x0003b9d7) call6_pane_g1_ParamLimits

0xca70,	// (0x0003b9d7) call6_pane_g1

0xca80,	// (0x0003b9e7) popup_call6_1st_window_ParamLimits

0xca80,	// (0x0003b9e7) popup_call6_1st_window

0xca8e,	// (0x0003b9f5) popup_call6_2nd_window_ParamLimits

0xca8e,	// (0x0003b9f5) popup_call6_2nd_window

0xca9c,	// (0x0003ba03) cell_call6_btn_pane_ParamLimits

0xca9c,	// (0x0003ba03) cell_call6_btn_pane

0xdfe4,	// (0x0003cf4b) bg_popup_call2_in_pane_cp03

0x411a,	// (0x00033081) popup_call6_1st_window_g1

0x4122,	// (0x00033089) popup_call6_1st_window_g2

0x412a,	// (0x00033091) popup_call6_1st_window_g3

0x0002,

0xfde2,	// (0x0003ed49) popup_call6_1st_window_g

0x4132,	// (0x00033099) popup_call6_1st_window_t1

0x4141,	// (0x000330a8) popup_call6_1st_window_t2

0x414f,	// (0x000330b6) popup_call6_1st_window_t3

0x0002,

0xfde9,	// (0x0003ed50) popup_call6_1st_window_t

0xdfe4,	// (0x0003cf4b) bg_popup_call2_in_pane_cp04

0x415d,	// (0x000330c4) popup_call6_2nd_window_g1

0x4165,	// (0x000330cc) popup_call6_2nd_window_g2

0x416d,	// (0x000330d4) popup_call6_2nd_window_g3

0x0002,

0xfdf0,	// (0x0003ed57) popup_call6_2nd_window_g

0x4175,	// (0x000330dc) popup_call6_2nd_window_t1

0xd6bf,	// (0x0003c626) bg_button_pane_cp15

0x41cf,	// (0x00033136) cell_call6_btn_pane_g1

0xcaab,	// (0x0003ba12) cell_call6_btn_pane_t1

0xcaba,	// (0x0003ba21) listscroll_wgtman_pane_ParamLimits

0xcaba,	// (0x0003ba21) listscroll_wgtman_pane

0xcad6,	// (0x0003ba3d) wgtman_btn_pane_ParamLimits

0xcad6,	// (0x0003ba3d) wgtman_btn_pane

0xe7e5,	// (0x0003d74c) aid_scroll_copy1

0x419c,	// (0x00033103) list_wgtman_pane

0xcb0b,	// (0x0003ba72) wgtman_btn_pane_g1_ParamLimits

0xcb0b,	// (0x0003ba72) wgtman_btn_pane_g1

0xcb33,	// (0x0003ba9a) wgtman_btn_pane_t1_ParamLimits

0xcb33,	// (0x0003ba9a) wgtman_btn_pane_t1

0x41a6,	// (0x0003310d) wgtman_btn_pane_t2_ParamLimits

0x41a6,	// (0x0003310d) wgtman_btn_pane_t2

0x0001,

0xfdf7,	// (0x0003ed5e) wgtman_btn_pane_t_ParamLimits

0xfdf7,	// (0x0003ed5e) wgtman_btn_pane_t

0xcb6a,	// (0x0003bad1) listrow_wgtman_pane_ParamLimits

0xcb6a,	// (0x0003bad1) listrow_wgtman_pane

0xcb86,	// (0x0003baed) listrow_wgtman_pane_g1

0xcb93,	// (0x0003bafa) listrow_wgtman_pane_g2

0x0001,

0xfdfc,	// (0x0003ed63) listrow_wgtman_pane_g

0x5c90,	// (0x00034bf7) listrow_wgtman_pane_t1

0x5ca8,	// (0x00034c0f) listrow_wgtman_pane_t2

0x0001,

0xfe01,	// (0x0003ed68) listrow_wgtman_pane_t

0x5cce,	// (0x00034c35) wait_bar_pane_cp09

0x41bd,	// (0x00033124) main_calllock_btn_pane

0x41c7,	// (0x0003312e) main_calllock_pane_g1

0xd6bf,	// (0x0003c626) bg_button_pane_cp17

0x41cf,	// (0x00033136) main_calllock_btn_pane_g1

0x41d8,	// (0x0003313f) main_calllock_btn_pane_t1

0xd6bf,	// (0x0003c626) main_dialer3_pane

0xd6bf,	// (0x0003c626) main_fmrd2_pane

0xe01a,	// (0x0003cf81) main_fs_bigclock_unlock_btn_pane_g1

0xcbb9,	// (0x0003bb20) main_fs_bigclock_unlock_btn_pane_t1

0xcbc7,	// (0x0003bb2e) area_fmrd2_info_pane_ParamLimits

0xcbc7,	// (0x0003bb2e) area_fmrd2_info_pane

0xcbd5,	// (0x0003bb3c) area_fmrd2_visual_pane_ParamLimits

0xcbd5,	// (0x0003bb3c) area_fmrd2_visual_pane

0xcbe3,	// (0x0003bb4a) fmrd2_indi_pane_ParamLimits

0xcbe3,	// (0x0003bb4a) fmrd2_indi_pane

0xcbf0,	// (0x0003bb57) area_fmrd2_visual_pane_g1

0xcbf8,	// (0x0003bb5f) area_fmrd2_visual_pane_t1

0xcc08,	// (0x0003bb6f) area_fmrd2_visual_pane_t2

0xcc18,	// (0x0003bb7f) area_fmrd2_visual_pane_t3

0x0002,

0xfe0b,	// (0x0003ed72) area_fmrd2_visual_pane_t

0xcc28,	// (0x0003bb8f) area_fmrd2_info_pane_g1

0xcc30,	// (0x0003bb97) area_fmrd2_info_pane_t1

0xcc40,	// (0x0003bba7) area_fmrd2_info_pane_t2

0xcc50,	// (0x0003bbb7) area_fmrd2_info_pane_t3

0xcc60,	// (0x0003bbc7) area_fmrd2_info_pane_t4

0x0003,

0xfe12,	// (0x0003ed79) area_fmrd2_info_pane_t

0xcc6e,	// (0x0003bbd5) fmrd2_indi_pane_t1

0xcc7e,	// (0x0003bbe5) fmrd2_indi_pane_t2

0xcc8e,	// (0x0003bbf5) fmrd2_indi_pane_t3

0x0002,

0xfe1b,	// (0x0003ed82) fmrd2_indi_pane_t

0x3453,	// (0x000323ba) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0x3453,	// (0x000323ba) list_single_fs_bigclock_indicator_pane_g5

0x3504,	// (0x0003246b) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0x3504,	// (0x0003246b) list_single_fs_bigclock_indicator_pane_t5

0xc525,	// (0x0003b48c) aid_cell_bcale_month_pane_ParamLimits

0xc525,	// (0x0003b48c) aid_cell_bcale_month_pane

0xc543,	// (0x0003b4aa) bcale_month_pane_ParamLimits

0xc543,	// (0x0003b4aa) bcale_month_pane

0xc561,	// (0x0003b4c8) bcale_preview_pane_ParamLimits

0xc561,	// (0x0003b4c8) bcale_preview_pane

0x3f7a,	// (0x00032ee1) list_single_fs_bigclock_pane_t1_ParamLimits

0x3f99,	// (0x00032f00) list_single_fs_bigclock_pane_t2_ParamLimits

0x3f99,	// (0x00032f00) list_single_fs_bigclock_pane_t2

0x0001,

0xfd96,	// (0x0003ecfd) list_single_fs_bigclock_pane_t_ParamLimits

0xfd96,	// (0x0003ecfd) list_single_fs_bigclock_pane_t

0xcbb1,	// (0x0003bb18) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfe06,	// (0x0003ed6d) main_fs_bigclock_unlock_btn_pane_g

0xcc9c,	// (0x0003bc03) aid_dia3_key_size_ParamLimits

0xcc9c,	// (0x0003bc03) aid_dia3_key_size

0xcca8,	// (0x0003bc0f) aid_dia3_listrow_size_ParamLimits

0xcca8,	// (0x0003bc0f) aid_dia3_listrow_size

0xccb8,	// (0x0003bc1f) dia3_keypad_fun_pane_ParamLimits

0xccb8,	// (0x0003bc1f) dia3_keypad_fun_pane

0xccca,	// (0x0003bc31) dia3_keypad_num_pane_ParamLimits

0xccca,	// (0x0003bc31) dia3_keypad_num_pane

0xccdc,	// (0x0003bc43) dia3_listscroll_pane_ParamLimits

0xccdc,	// (0x0003bc43) dia3_listscroll_pane

0xccea,	// (0x0003bc51) dia3_numentry_pane_ParamLimits

0xccea,	// (0x0003bc51) dia3_numentry_pane

0x41e7,	// (0x0003314e) dia3_list_pane

0x41f2,	// (0x00033159) scroll_pane_cp12

0xd6bf,	// (0x0003c626) bg_dia3_numentry_pane

0xccf8,	// (0x0003bc5f) dia3_numentry_pane_t1

0xcd07,	// (0x0003bc6e) cell_dia3_key_num_pane

0xcd0f,	// (0x0003bc76) cell_dia3_key0_fun_pane_ParamLimits

0xcd0f,	// (0x0003bc76) cell_dia3_key0_fun_pane

0xcd1c,	// (0x0003bc83) cell_dia3_key1_fun_pane_ParamLimits

0xcd1c,	// (0x0003bc83) cell_dia3_key1_fun_pane

0xcd29,	// (0x0003bc90) dia3_listrow_pane

0x31a6,	// (0x0003210d) bg_dia3_numentry_pane_g1

0xd6bf,	// (0x0003c626) bg_button_pane_cp21

0x41fd,	// (0x00033164) cell_dia3_key_num_pane_t1

0x420b,	// (0x00033172) cell_dia3_key_num_pane_t2

0x421a,	// (0x00033181) cell_dia3_key_num_pane_t3

0x4229,	// (0x00033190) cell_dia3_key_num_pane_t4

0x0003,

0xfe22,	// (0x0003ed89) cell_dia3_key_num_pane_t

0xd6bf,	// (0x0003c626) bg_button_pane_cp19

0xcd36,	// (0x0003bc9d) cell_dia3_key0_fun_pane_g1

0xd6bf,	// (0x0003c626) bg_button_pane_cp20

0xcd3e,	// (0x0003bca5) cell_dia3_key1_fun_pane_g1

0xcd46,	// (0x0003bcad) area_left_week_number_pane

0xcd59,	// (0x0003bcc0) area_top_day_name_pane

0xcd67,	// (0x0003bcce) frame_month_view_pane

0x4238,	// (0x0003319f) grid_month_view_pane

0xcd7c,	// (0x0003bce3) cell_top_day_name_pane_ParamLimits

0xcd7c,	// (0x0003bce3) cell_top_day_name_pane

0xcd96,	// (0x0003bcfd) cell_area_left_week_number_pane_ParamLimits

0xcd96,	// (0x0003bcfd) cell_area_left_week_number_pane

0xcdb9,	// (0x0003bd20) cell_month_view_pane_ParamLimits

0xcdb9,	// (0x0003bd20) cell_month_view_pane

0x4246,	// (0x000331ad) frm_month_g1

0xcde5,	// (0x0003bd4c) frm_month_g2

0xcdf6,	// (0x0003bd5d) frm_month_g3

0xce07,	// (0x0003bd6e) frm_month_g4

0xce18,	// (0x0003bd7f) frm_month_g5

0xce2b,	// (0x0003bd92) frm_month_g6

0xce3e,	// (0x0003bda5) frm_month_g7

0x4253,	// (0x000331ba) frm_month_g8

0xce51,	// (0x0003bdb8) frm_month_g9

0xce5e,	// (0x0003bdc5) frm_month_g10

0xce6b,	// (0x0003bdd2) frm_month_g11

0xce78,	// (0x0003bddf) frm_month_g12

0xce85,	// (0x0003bdec) frm_month_g13

0xce92,	// (0x0003bdf9) frm_month_g14

0xcea1,	// (0x0003be08) frm_month_g15

0xceb0,	// (0x0003be17) frm_month_g16

0x000f,

0xfe2b,	// (0x0003ed92) frm_month_g

0xcebf,	// (0x0003be26) cell_top_day_name_pane_t1

0xced2,	// (0x0003be39) cell_area_left_week_number_pane_g1

0xcee1,	// (0x0003be48) cell_area_left_week_number_pane_t1

0xddc0,	// (0x0003cd27) cell_month_view_pane_g1

0xcef7,	// (0x0003be5e) cell_month_view_pane_t1

0xd6bf,	// (0x0003c626) main_fps_pane

0x3718,	// (0x0003267f) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0x3718,	// (0x0003267f) cmail_ddmenu_btn02_pane_cp1

0x3734,	// (0x0003269b) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0x3734,	// (0x0003269b) cmail_ddmenu_btn02_pane_cp2

0xc752,	// (0x0003b6b9) cmail_ddmenu_btn02_pane_g2_ParamLimits

0xc752,	// (0x0003b6b9) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfd49,	// (0x0003ecb0) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfd49,	// (0x0003ecb0) cmail_ddmenu_btn02_pane_g

0xc770,	// (0x0003b6d7) cmail_ddmenu_btn02_pane_t2_ParamLimits

0xc770,	// (0x0003b6d7) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfd4e,	// (0x0003ecb5) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfd4e,	// (0x0003ecb5) cmail_ddmenu_btn02_pane_t

0xcf0d,	// (0x0003be74) fps_text_pane_ParamLimits

0xcf0d,	// (0x0003be74) fps_text_pane

0xcf1a,	// (0x0003be81) main_fps_pane_g1_ParamLimits

0xcf1a,	// (0x0003be81) main_fps_pane_g1

0xcf28,	// (0x0003be8f) wait_bar_pane_cp010_ParamLimits

0xcf28,	// (0x0003be8f) wait_bar_pane_cp010

0xcf34,	// (0x0003be9b) fps_text_pane_t1_ParamLimits

0xcf34,	// (0x0003be9b) fps_text_pane_t1

0xa482,	// (0x000393e9) cam4_image_uncrop_pane_g1

0xa48b,	// (0x000393f2) cam4_image_uncrop_pane_g2

0xa494,	// (0x000393fb) cam4_image_uncrop_pane_g3

0xa49d,	// (0x00039404) cam4_image_uncrop_pane_g4

0x0003,

0xf88d,	// (0x0003e7f4) cam4_image_uncrop_pane_g

0xcd29,	// (0x0003bc90) dia3_listrow_pane_ParamLimits

0xd6bf,	// (0x0003c626) main_phob2_pane

0xc36a,	// (0x0003b2d1) cell_tport_appsw_pane_cp02_ParamLimits

0xc36a,	// (0x0003b2d1) cell_tport_appsw_pane_cp02

0xc379,	// (0x0003b2e0) cell_tport_appsw_pane_cp03_ParamLimits

0xc379,	// (0x0003b2e0) cell_tport_appsw_pane_cp03

0xd6bf,	// (0x0003c626) phob2_contact_card_pane

0xd6bf,	// (0x0003c626) phob2_listscroll_pane

0xcf4d,	// (0x0003beb4) phob2_list_pane

0xcf55,	// (0x0003bebc) scroll_pane_cp034

0xcf5d,	// (0x0003bec4) phob2_cc_data_pane_ParamLimits

0xcf5d,	// (0x0003bec4) phob2_cc_data_pane

0xcf77,	// (0x0003bede) phob2_cc_listscroll_pane_ParamLimits

0xcf77,	// (0x0003bede) phob2_cc_listscroll_pane

0xcb6a,	// (0x0003bad1) list_double_large_graphic_phob2_pane_ParamLimits

0xcb6a,	// (0x0003bad1) list_double_large_graphic_phob2_pane

0xcf91,	// (0x0003bef8) list_double_large_graphic_phob2_pane_g1_ParamLimits

0xcf91,	// (0x0003bef8) list_double_large_graphic_phob2_pane_g1

0x5ce0,	// (0x00034c47) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x5ce0,	// (0x00034c47) list_double_large_graphic_phob2_pane_g2

0x0003,

0xfe4c,	// (0x0003edb3) list_double_large_graphic_phob2_pane_g_ParamLimits

0xfe4c,	// (0x0003edb3) list_double_large_graphic_phob2_pane_g

0x5d06,	// (0x00034c6d) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x5d06,	// (0x00034c6d) list_double_large_graphic_phob2_pane_t1

0x5d1b,	// (0x00034c82) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x5d1b,	// (0x00034c82) list_double_large_graphic_phob2_pane_t2

0x0001,

0xfe55,	// (0x0003edbc) list_double_large_graphic_phob2_pane_t_ParamLimits

0xfe55,	// (0x0003edbc) list_double_large_graphic_phob2_pane_t

0xd6bf,	// (0x0003c626) list_highlight_pane_cp024

0xcf9e,	// (0x0003bf05) phob2_cc_button_pane

0xcfa6,	// (0x0003bf0d) phob2_cc_data_pane_g1_ParamLimits

0xcfa6,	// (0x0003bf0d) phob2_cc_data_pane_g1

0xcfb5,	// (0x0003bf1c) phob2_cc_data_pane_g2_ParamLimits

0xcfb5,	// (0x0003bf1c) phob2_cc_data_pane_g2

0x0001,

0xfe5a,	// (0x0003edc1) phob2_cc_data_pane_g_ParamLimits

0xfe5a,	// (0x0003edc1) phob2_cc_data_pane_g

0xcfc4,	// (0x0003bf2b) phob2_cc_data_pane_t1_ParamLimits

0xcfc4,	// (0x0003bf2b) phob2_cc_data_pane_t1

0xcfd9,	// (0x0003bf40) phob2_cc_data_pane_t2_ParamLimits

0xcfd9,	// (0x0003bf40) phob2_cc_data_pane_t2

0xcfee,	// (0x0003bf55) phob2_cc_data_pane_t3_ParamLimits

0xcfee,	// (0x0003bf55) phob2_cc_data_pane_t3

0x0002,

0xfe5f,	// (0x0003edc6) phob2_cc_data_pane_t_ParamLimits

0xfe5f,	// (0x0003edc6) phob2_cc_data_pane_t

0xd003,	// (0x0003bf6a) phob2_cc_list_pane_ParamLimits

0xd003,	// (0x0003bf6a) phob2_cc_list_pane

0x283d,	// (0x000317a4) scroll_pane_cp035_ParamLimits

0x283d,	// (0x000317a4) scroll_pane_cp035

0xdd67,	// (0x0003ccce) bg_button_pane_cp033

0xd00f,	// (0x0003bf76) phob2_cc_button_pane_g1

0xd01b,	// (0x0003bf82) phob2_cc_button_pane_t1

0xd030,	// (0x0003bf97) phob2_cc_button_pane_t2

0x0001,

0xfe66,	// (0x0003edcd) phob2_cc_button_pane_t

0xd042,	// (0x0003bfa9) list_double_large_graphic_phob2_cc_pane_ParamLimits

0xd042,	// (0x0003bfa9) list_double_large_graphic_phob2_cc_pane

0xd0b6,	// (0x0003c01d) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0xd0b6,	// (0x0003c01d) list_double_large_graphic_phob2_cc_pane_g1

0x5d30,	// (0x00034c97) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x5d30,	// (0x00034c97) list_double_large_graphic_phob2_cc_pane_g2

0x5d3c,	// (0x00034ca3) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x5d3c,	// (0x00034ca3) list_double_large_graphic_phob2_cc_pane_g3

0x5d48,	// (0x00034caf) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x5d48,	// (0x00034caf) list_double_large_graphic_phob2_cc_pane_g4

0x5d54,	// (0x00034cbb) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x5d54,	// (0x00034cbb) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xfe6b,	// (0x0003edd2) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xfe6b,	// (0x0003edd2) list_double_large_graphic_phob2_cc_pane_g

0x5d60,	// (0x00034cc7) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x5d60,	// (0x00034cc7) list_double_large_graphic_phob2_cc_pane_t1

0x5d89,	// (0x00034cf0) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x5d89,	// (0x00034cf0) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xfe76,	// (0x0003eddd) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xfe76,	// (0x0003eddd) list_double_large_graphic_phob2_cc_pane_t

0xd0c7,	// (0x0003c02e) list_highlight_pane_cp025_ParamLimits

0xd0c7,	// (0x0003c02e) list_highlight_pane_cp025

0xdd67,	// (0x0003ccce) bg_button_pane_cp033_ParamLimits

0xd00f,	// (0x0003bf76) phob2_cc_button_pane_g1_ParamLimits

0xd01b,	// (0x0003bf82) phob2_cc_button_pane_t1_ParamLimits

0xd030,	// (0x0003bf97) phob2_cc_button_pane_t2_ParamLimits

0xfe66,	// (0x0003edcd) phob2_cc_button_pane_t_ParamLimits

0x60a4,	// (0x0003500b) popup_wgtman_window

0x25e9,	// (0x00031550) scroll_pane_cp038

0xcaf3,	// (0x0003ba5a) wgtman_btn_pane_cp_01_ParamLimits

0xcaf3,	// (0x0003ba5a) wgtman_btn_pane_cp_01

0xd0d5,	// (0x0003c03c) wgtman_content_pane

0xd0de,	// (0x0003c045) wgtman_heading_pane

0xd6bf,	// (0x0003c626) bg_heading_pane_cp02

0xd0e7,	// (0x0003c04e) wgtman_heading_pane_g1

0xd0ef,	// (0x0003c056) wgtman_heading_pane_t1

0xd0fd,	// (0x0003c064) scroll_pane_cp036

0xd105,	// (0x0003c06c) wgtman_list_pane

0xd10d,	// (0x0003c074) wgtman_list_pane_t1_ParamLimits

0xd10d,	// (0x0003c074) wgtman_list_pane_t1

0xa3e1,	// (0x00039348) cam4_grid_pane

0x5398,	// (0x000342ff) bg_button_pane_cp015_ParamLimits

0xb074,	// (0x00039fdb) bg_button_pane_cp016_ParamLimits

0xb087,	// (0x00039fee) bg_button_pane_cp017_ParamLimits

0x53de,	// (0x00034345) popup_vitu2_query_window_g3_ParamLimits

0x53de,	// (0x00034345) popup_vitu2_query_window_g3

0x5459,	// (0x000343c0) popup_vitu2_query_window_t6_ParamLimits

0x5459,	// (0x000343c0) popup_vitu2_query_window_t6

0x5484,	// (0x000343eb) popup_vitu2_query_window_t7_ParamLimits

0x5484,	// (0x000343eb) popup_vitu2_query_window_t7

0xd128,	// (0x0003c08f) cam4_grid_pane_g1

0xd131,	// (0x0003c098) cam4_grid_pane_g2

0xd13a,	// (0x0003c0a1) cam4_grid_pane_g3

0xd143,	// (0x0003c0aa) cam4_grid_pane_g4

0x0003,

0xfe7b,	// (0x0003ede2) cam4_grid_pane_g

0x6bee,	// (0x00035b55) aid_placing_vt_slider_lsc_ParamLimits

0x6f2e,	// (0x00035e95) vidtel_button_pane_ParamLimits

0x6f2e,	// (0x00035e95) vidtel_button_pane

0xd6bf,	// (0x0003c626) bg_button_pane_cp034

0xd14e,	// (0x0003c0b5) vidtel_button_pane_g1

0xd156,	// (0x0003c0bd) vidtel_button_pane_t1

0x2748,	// (0x000316af) aid_size_vtel_slider_touch

0x283d,	// (0x000317a4) scroll_pane_cp039

0xbd1b,	// (0x0003ac82) ncim_query_button_pane_cp01_ParamLimits

0xbd3a,	// (0x0003aca1) ncimui_query_pane_g1_ParamLimits

0xdd67,	// (0x0003ccce) input_focus_pane_cp012_ParamLimits

0x31ec,	// (0x00032153) ncim_query_entry_pane_t1_ParamLimits

0x283d,	// (0x000317a4) scroll_pane_cp039_ParamLimits

0xe8bc,	// (0x0003d823) navi_pane_bcale_mc_g1

0xe8c4,	// (0x0003d82b) navi_pane_bcale_mc_t1

0x3768,	// (0x000326cf) main_sp_fs_email_pane_g1

0x3774,	// (0x000326db) main_sp_fs_email_pane_g2

0x0001,

0xfc7e,	// (0x0003ebe5) main_sp_fs_email_pane_g

0x3c05,	// (0x00032b6c) list_single_cale_mrui_row_pane_g3_ParamLimits

0x3c05,	// (0x00032b6c) list_single_cale_mrui_row_pane_g3

0x5c02,	// (0x00034b69) list_single_recal_day_pane_g5_event_pane

0x5c18,	// (0x00034b7f) list_single_recal_day_pane_g7

0xd16c,	// (0x0003c0d3) list_recal_day_event_pane_cp01

0xd175,	// (0x0003c0dc) list_recal_vselct_arw_lo_pane_cp01

0xd17d,	// (0x0003c0e4) list_recal_vselct_arw_up_pane_cp01

0xd185,	// (0x0003c0ec) list_recal_vselct_pane_cp01

0x27a6,	// (0x0003170d) list_recal_day_event_pane_cp01_g1

0x5db2,	// (0x00034d19) list_recal_day_event_pane_cp01_t1

0x5c20,	// (0x00034b87) list_single_recal_day_pane_t1_ParamLimits

0x5c32,	// (0x00034b99) list_single_recal_day_pane_t2_ParamLimits

0xfd5e,	// (0x0003ecc5) list_single_recal_day_pane_t_ParamLimits

0xdd45,	// (0x0003ccac) bg_notes_pane_ParamLimits

0xde10,	// (0x0003cd77) list_notes_pane_ParamLimits

0x62a9,	// (0x00035210) scroll_pane_cp06_ParamLimits

0xde32,	// (0x0003cd99) main_notes_pane_ParamLimits

0xdd67,	// (0x0003ccce) main_welc_pane

0xd1a6,	// (0x0003c10d) main_welc_body_pane_ParamLimits

0xd1a6,	// (0x0003c10d) main_welc_body_pane

0xd1bf,	// (0x0003c126) main_welc_opti_pane_ParamLimits

0xd1bf,	// (0x0003c126) main_welc_opti_pane

0xd21a,	// (0x0003c181) main_welc_pane_t1_ParamLimits

0xd21a,	// (0x0003c181) main_welc_pane_t1

0xd330,	// (0x0003c297) main_welc_body_row_pane_ParamLimits

0xd330,	// (0x0003c297) main_welc_body_row_pane

0xd6c9,	// (0x0003c630) main_welc_opti_row_pane_ParamLimits

0xd6c9,	// (0x0003c630) main_welc_opti_row_pane

0xd359,	// (0x0003c2c0) main_welc_opti_row_pane_g1

0xd361,	// (0x0003c2c8) main_welc_opti_row_pane_t1

0xd370,	// (0x0003c2d7) main_welc_body_row_pane_t1

0x405a,	// (0x00032fc1) popup_notif_wgt_heading_pane

0x4074,	// (0x00032fdb) aid_size_list_notif_wgt_del_ParamLimits

0x4081,	// (0x00032fe8) list_notif_wgt_row_pane_g1_ParamLimits

0x408d,	// (0x00032ff4) list_notif_wgt_row_pane_g2_ParamLimits

0x409c,	// (0x00033003) list_notif_wgt_row_pane_g3_ParamLimits

0xfdc5,	// (0x0003ed2c) list_notif_wgt_row_pane_g_ParamLimits

0x40a9,	// (0x00033010) list_notif_wgt_row_pane_t1_ParamLimits

0x40bf,	// (0x00033026) list_notif_wgt_row_pane_t2_ParamLimits

0x40d1,	// (0x00033038) list_notif_wgt_row_pane_t3_ParamLimits

0xfdcc,	// (0x0003ed33) list_notif_wgt_row_pane_t_ParamLimits

0xcb86,	// (0x0003baed) listrow_wgtman_pane_g1_ParamLimits

0xcb93,	// (0x0003bafa) listrow_wgtman_pane_g2_ParamLimits

0xfdfc,	// (0x0003ed63) listrow_wgtman_pane_g_ParamLimits

0x5c90,	// (0x00034bf7) listrow_wgtman_pane_t1_ParamLimits

0x5ca8,	// (0x00034c0f) listrow_wgtman_pane_t2_ParamLimits

0xfe01,	// (0x0003ed68) listrow_wgtman_pane_t_ParamLimits

0x5cce,	// (0x00034c35) wait_bar_pane_cp09_ParamLimits

0xd6bf,	// (0x0003c626) bg_popup_heading_pane_cp02

0xd37f,	// (0x0003c2e6) popup_notif_wgt_heading_pane_g1

0xd387,	// (0x0003c2ee) popup_notif_wgt_heading_pane_t1

0xd6bf,	// (0x0003c626) main_vids_pane

0xd6bf,	// (0x0003c626) vids_listscroll_pane

0xd395,	// (0x0003c2fc) scroll_pane_cp040

0xd6bf,	// (0x0003c626) vids_list_pane

0xd3a0,	// (0x0003c307) vids_list_double_pane_ParamLimits

0xd3a0,	// (0x0003c307) vids_list_double_pane

0xd3b8,	// (0x0003c31f) vids_list_double_pane_g1

0xd3c1,	// (0x0003c328) vids_list_double_pane_t1

0xd3d1,	// (0x0003c338) vids_list_double_pane_t2

0x0001,

0xfe9a,	// (0x0003ee01) vids_list_double_pane_t

0xdd67,	// (0x0003ccce) main_ncimui_pane_ParamLimits

0xbb72,	// (0x0003aad9) main_ncimui_pane_g1_ParamLimits

0xbb7e,	// (0x0003aae5) main_ncimui_pane_g2_ParamLimits

0xbb7e,	// (0x0003aae5) main_ncimui_pane_g2

0x0001,

0xfb7f,	// (0x0003eae6) main_ncimui_pane_g_ParamLimits

0xfb7f,	// (0x0003eae6) main_ncimui_pane_g

0xd1d8,	// (0x0003c13f) main_welc_pane_g1_ParamLimits

0xd1d8,	// (0x0003c13f) main_welc_pane_g1

0xd1e4,	// (0x0003c14b) main_welc_pane_g2_ParamLimits

0xd1e4,	// (0x0003c14b) main_welc_pane_g2

0x0003,

0xfe84,	// (0x0003edeb) main_welc_pane_g_ParamLimits

0xfe84,	// (0x0003edeb) main_welc_pane_g

0xdd45,	// (0x0003ccac) listscroll_mce_pane_ParamLimits

0xea11,	// (0x0003d978) wait_bar_pane_cp10

0x127d,	// (0x000301e4) main_cale_day_pane_ParamLimits

0x127d,	// (0x000301e4) main_cale_week_pane_ParamLimits

0xdd45,	// (0x0003ccac) main_messa_pane_ParamLimits

0x9830,	// (0x00038797) main_clock2_btn_pane_ParamLimits

0x9830,	// (0x00038797) main_clock2_btn_pane

0x1bda,	// (0x00030b41) main_clock2_btn_pane_cp01_ParamLimits

0x1bda,	// (0x00030b41) main_clock2_btn_pane_cp01

0x3b91,	// (0x00032af8) list_cale_mrui_pane_ParamLimits

0x4107,	// (0x0003306e) main_cf0_pane_g2

0x0001,

0xfdd3,	// (0x0003ed3a) main_cf0_pane_g

0xcd46,	// (0x0003bcad) area_left_week_number_pane_ParamLimits

0xcd59,	// (0x0003bcc0) area_top_day_name_pane_ParamLimits

0xcd67,	// (0x0003bcce) frame_month_view_pane_ParamLimits

0x4238,	// (0x0003319f) grid_month_view_pane_ParamLimits

0x4246,	// (0x000331ad) frm_month_g1_ParamLimits

0xcde5,	// (0x0003bd4c) frm_month_g2_ParamLimits

0xcdf6,	// (0x0003bd5d) frm_month_g3_ParamLimits

0xce07,	// (0x0003bd6e) frm_month_g4_ParamLimits

0xce18,	// (0x0003bd7f) frm_month_g5_ParamLimits

0xce2b,	// (0x0003bd92) frm_month_g6_ParamLimits

0xce3e,	// (0x0003bda5) frm_month_g7_ParamLimits

0x4253,	// (0x000331ba) frm_month_g8_ParamLimits

0xce51,	// (0x0003bdb8) frm_month_g9_ParamLimits

0xce5e,	// (0x0003bdc5) frm_month_g10_ParamLimits

0xce6b,	// (0x0003bdd2) frm_month_g11_ParamLimits

0xce78,	// (0x0003bddf) frm_month_g12_ParamLimits

0xce85,	// (0x0003bdec) frm_month_g13_ParamLimits

0xce92,	// (0x0003bdf9) frm_month_g14_ParamLimits

0xcea1,	// (0x0003be08) frm_month_g15_ParamLimits

0xceb0,	// (0x0003be17) frm_month_g16_ParamLimits

0xfe2b,	// (0x0003ed92) frm_month_g_ParamLimits

0xcebf,	// (0x0003be26) cell_top_day_name_pane_t1_ParamLimits

0xced2,	// (0x0003be39) cell_area_left_week_number_pane_g1_ParamLimits

0xcee1,	// (0x0003be48) cell_area_left_week_number_pane_t1_ParamLimits

0xddc0,	// (0x0003cd27) cell_month_view_pane_g1_ParamLimits

0xcef7,	// (0x0003be5e) cell_month_view_pane_t1_ParamLimits

0xdd3d,	// (0x0003cca4) main_clock2_btn_pane_g1

0xd3df,	// (0x0003c346) main_clock2_btn_pane_t1

0xdd67,	// (0x0003ccce) listscroll_cmail_pane_ParamLimits

0x3768,	// (0x000326cf) main_sp_fs_email_pane_g1_ParamLimits

0x3774,	// (0x000326db) main_sp_fs_email_pane_g2_ParamLimits

0xfc7e,	// (0x0003ebe5) main_sp_fs_email_pane_g_ParamLimits

0x3d54,	// (0x00032cbb) list_recal_day_pane_ParamLimits

0x3d65,	// (0x00032ccc) mian_recal_day_pane_t1

0x57f9,	// (0x00034760) list_single_dyc_row_text_pane_t4_ParamLimits

0x57f9,	// (0x00034760) list_single_dyc_row_text_pane_t4

0x5830,	// (0x00034797) list_single_dyc_row_text_pane_t5_ParamLimits

0x5830,	// (0x00034797) list_single_dyc_row_text_pane_t5

0x58a6,	// (0x0003480d) list_single_dyc_row_text_pane_t6_ParamLimits

0x58a6,	// (0x0003480d) list_single_dyc_row_text_pane_t6

0x7da7,	// (0x00036d0e) aid_mgn_list_cale_time_pane

0xdd67,	// (0x0003ccce) main_gallery2_pane_ParamLimits

0x1bf0,	// (0x00030b57) main_clock2_pane_cp01_t1

0x1bfe,	// (0x00030b65) main_clock2_pane_cp01_t3

0x0001,

0xf764,	// (0x0003e6cb) main_clock2_pane_cp01_t

0x66fe,	// (0x00035665) cale_week_scroll_pane_g16_ParamLimits

0x66fe,	// (0x00035665) cale_week_scroll_pane_g16

0xdfe4,	// (0x0003cf4b) vorec_slider_pane

0xd156,	// (0x0003c0bd) vidtel_button_pane_t1_ParamLimits

0xc7d3,	// (0x0003b73a) main_fs_bigclock_clock_pane_g1_ParamLimits

0xc7d3,	// (0x0003b73a) main_fs_bigclock_clock_pane_g2_ParamLimits

0xc7e0,	// (0x0003b747) main_fs_bigclock_clock_pane_g3_ParamLimits

0xc7e0,	// (0x0003b747) main_fs_bigclock_clock_pane_g4_ParamLimits

0xfd81,	// (0x0003ece8) main_fs_bigclock_clock_pane_g_ParamLimits

0xc7ec,	// (0x0003b753) main_fs_bigclock_clock_pane_t1_ParamLimits

0xc7ff,	// (0x0003b766) main_fs_bigclock_clock_pane_t2_ParamLimits

0xfd8a,	// (0x0003ecf1) main_fs_bigclock_clock_pane_t_ParamLimits

0x91d5,	// (0x0003813c) main_mup3_lyrics_pane_ParamLimits

0x91d5,	// (0x0003813c) main_mup3_lyrics_pane

0xd413,	// (0x0003c37a) main_mup3_lyrics_pane_t1_ParamLimits

0xd413,	// (0x0003c37a) main_mup3_lyrics_pane_t1

0x9d64,	// (0x00038ccb) aid_main_mp4_pane_t1_area

0x9d6e,	// (0x00038cd5) aid_main_mp4_pane_t2_area

0x9e6d,	// (0x00038dd4) main_mp4_pane_g7_ParamLimits

0x9e6d,	// (0x00038dd4) main_mp4_pane_g7

0x9e79,	// (0x00038de0) main_mp4_pane_g8_ParamLimits

0x9e79,	// (0x00038de0) main_mp4_pane_g8

0xa28b,	// (0x000391f2) aid_call6_pane_g1_size

0xd088,	// (0x0003bfef) list_double_large_graphic_phob2_other_pane_ParamLimits

0xd088,	// (0x0003bfef) list_double_large_graphic_phob2_other_pane

0xe3a1,	// (0x0003d308) list_double_large_graphic_phob2_other_pane_g1

0xd6bf,	// (0x0003c626) list_highlight_pane_cp026

0xdd67,	// (0x0003ccce) main_welc_pane_ParamLimits

0xc271,	// (0x0003b1d8) main_sp_fs_ctrlbar_pane_g3_ParamLimits

0xc271,	// (0x0003b1d8) main_sp_fs_ctrlbar_pane_g3

0xc289,	// (0x0003b1f0) main_sp_fs_ctrlbar_pane_g4_ParamLimits

0xc289,	// (0x0003b1f0) main_sp_fs_ctrlbar_pane_g4

0xc2bb,	// (0x0003b222) toolbar2_fixed_button_pane_cp01

0xc2c6,	// (0x0003b22d) toolbar2_fixed_button_pane_cp02

0xc2d1,	// (0x0003b238) toolbar2_fixed_button_pane_cp03

0xd18f,	// (0x0003c0f6) list_welc_entry_pane_ParamLimits

0xd18f,	// (0x0003c0f6) list_welc_entry_pane

0xd1f2,	// (0x0003c159) main_welc_pane_g3_ParamLimits

0xd1f2,	// (0x0003c159) main_welc_pane_g3

0xd234,	// (0x0003c19b) main_welc_pane_t2_ParamLimits

0xd234,	// (0x0003c19b) main_welc_pane_t2

0xd248,	// (0x0003c1af) main_welc_pane_t3_ParamLimits

0xd248,	// (0x0003c1af) main_welc_pane_t3

0x0005,

0xfe8d,	// (0x0003edf4) main_welc_pane_t_ParamLimits

0xfe8d,	// (0x0003edf4) main_welc_pane_t

0xd2d2,	// (0x0003c239) welc_button_pane_ParamLimits

0xd2d2,	// (0x0003c239) welc_button_pane

0xd322,	// (0x0003c289) welc_service_logo_pane_ParamLimits

0xd322,	// (0x0003c289) welc_service_logo_pane

0xd449,	// (0x0003c3b0) list_single_welc_entry_pane_ParamLimits

0xd449,	// (0x0003c3b0) list_single_welc_entry_pane

0xd45a,	// (0x0003c3c1) list_single_welc_entry_pane_g1

0xd462,	// (0x0003c3c9) list_single_welc_entry_pane_t1

0xd470,	// (0x0003c3d7) list_single_welc_entry_pane_t2

0x0001,

0xfe9f,	// (0x0003ee06) list_single_welc_entry_pane_t

0xd6bf,	// (0x0003c626) bg_button_pane_cp035

0xd47e,	// (0x0003c3e5) welc_button_pane_t1

0xd48c,	// (0x0003c3f3) welc_service_logo_pane_g1

0xd495,	// (0x0003c3fc) welc_service_logo_pane_g2

0x0001,

0xfea4,	// (0x0003ee0b) welc_service_logo_pane_g

0xd6bf,	// (0x0003c626) main_int_radio_pane

0x308a,	// (0x00031ff1) list_single_fs_dyc_pane_g1

0x5cec,	// (0x00034c53) list_double_large_graphic_phob2_pane_g3_ParamLimits

0x5cec,	// (0x00034c53) list_double_large_graphic_phob2_pane_g3

0x5cf8,	// (0x00034c5f) list_double_large_graphic_phob2_pane_g4_ParamLimits

0x5cf8,	// (0x00034c5f) list_double_large_graphic_phob2_pane_g4

0xd49e,	// (0x0003c405) main_int_radio1_pane_ParamLimits

0xd49e,	// (0x0003c405) main_int_radio1_pane

0xd4b0,	// (0x0003c417) find_pane_cp02

0xd4b9,	// (0x0003c420) input_focus_pane_cp12_ParamLimits

0xd4b9,	// (0x0003c420) input_focus_pane_cp12

0xd4c5,	// (0x0003c42c) input_focus_pane_cp13_ParamLimits

0xd4c5,	// (0x0003c42c) input_focus_pane_cp13

0xd4dd,	// (0x0003c444) input_focus_pane_cp14_ParamLimits

0xd4dd,	// (0x0003c444) input_focus_pane_cp14

0xd4f5,	// (0x0003c45c) int_radio1_listscroll_pane

0xd4ff,	// (0x0003c466) main_int_radio1_pane_g1_ParamLimits

0xd4ff,	// (0x0003c466) main_int_radio1_pane_g1

0xd50f,	// (0x0003c476) main_int_radio1_pane_t1_ParamLimits

0xd50f,	// (0x0003c476) main_int_radio1_pane_t1

0xd523,	// (0x0003c48a) main_int_radio1_pane_t2_ParamLimits

0xd523,	// (0x0003c48a) main_int_radio1_pane_t2

0xd537,	// (0x0003c49e) main_int_radio1_pane_t3_ParamLimits

0xd537,	// (0x0003c49e) main_int_radio1_pane_t3

0xd54b,	// (0x0003c4b2) main_int_radio1_pane_t4_ParamLimits

0xd54b,	// (0x0003c4b2) main_int_radio1_pane_t4

0xd562,	// (0x0003c4c9) main_int_radio1_pane_t5_ParamLimits

0xd562,	// (0x0003c4c9) main_int_radio1_pane_t5

0xd574,	// (0x0003c4db) main_int_radio1_pane_t6_ParamLimits

0xd574,	// (0x0003c4db) main_int_radio1_pane_t6

0xd586,	// (0x0003c4ed) main_int_radio1_pane_t7_ParamLimits

0xd586,	// (0x0003c4ed) main_int_radio1_pane_t7

0xd598,	// (0x0003c4ff) main_int_radio1_pane_t8_ParamLimits

0xd598,	// (0x0003c4ff) main_int_radio1_pane_t8

0xd5ac,	// (0x0003c513) main_int_radio1_pane_t9_ParamLimits

0xd5ac,	// (0x0003c513) main_int_radio1_pane_t9

0xd5be,	// (0x0003c525) main_int_radio1_pane_t10_ParamLimits

0xd5be,	// (0x0003c525) main_int_radio1_pane_t10

0xd5ef,	// (0x0003c556) main_int_radio1_pane_t11_ParamLimits

0xd5ef,	// (0x0003c556) main_int_radio1_pane_t11

0xd620,	// (0x0003c587) main_int_radio1_pane_t12_ParamLimits

0xd620,	// (0x0003c587) main_int_radio1_pane_t12

0x000b,

0xfea9,	// (0x0003ee10) main_int_radio1_pane_t_ParamLimits

0xfea9,	// (0x0003ee10) main_int_radio1_pane_t

0xd637,	// (0x0003c59e) int_radio_list_pane

0xcf55,	// (0x0003bebc) scroll_pane_cp037

0xd63f,	// (0x0003c5a6) list_double_large_graphic_int_radio_pane_ParamLimits

0xd63f,	// (0x0003c5a6) list_double_large_graphic_int_radio_pane

0xd658,	// (0x0003c5bf) list_double_large_graphic_int_radio_pane_g1

0x5dc0,	// (0x00034d27) list_double_large_graphic_int_radio_pane_t1

0x5dce,	// (0x00034d35) list_double_large_graphic_int_radio_pane_t2

0x0001,

0xfec2,	// (0x0003ee29) list_double_large_graphic_int_radio_pane_t

0xd6bf,	// (0x0003c626) list_highlight_pane_cp027

0xd19e,	// (0x0003c105) main_button_pane_4

0xd1fe,	// (0x0003c165) main_welc_pane_g4_ParamLimits

0xd1fe,	// (0x0003c165) main_welc_pane_g4

0xd25a,	// (0x0003c1c1) main_welc_pane_t4_ParamLimits

0xd25a,	// (0x0003c1c1) main_welc_pane_t4

0xd26c,	// (0x0003c1d3) main_welc_pane_t5_ParamLimits

0xd26c,	// (0x0003c1d3) main_welc_pane_t5

0xd29e,	// (0x0003c205) main_welc_pane_t6_ParamLimits

0xd29e,	// (0x0003c205) main_welc_pane_t6

0xd2e0,	// (0x0003c247) welc_button_pane_2_ParamLimits

0xd2e0,	// (0x0003c247) welc_button_pane_2

0xd2f8,	// (0x0003c25f) welc_button_pane_3_ParamLimits

0xd2f8,	// (0x0003c25f) welc_button_pane_3

0xd19e,	// (0x0003c105) welc_button_pane_4

0xd312,	// (0x0003c279) welc_button_pane_5_ParamLimits

0xd312,	// (0x0003c279) welc_button_pane_5

0x8bf5,	// (0x00037b5c) main_popup_welc_pane

0xd661,	// (0x0003c5c8) main_welc_sk_g3

0xd66b,	// (0x0003c5d2) main_welc_sk_g4

0xd675,	// (0x0003c5dc) main_welc_sk_t3

0xd685,	// (0x0003c5ec) main_welc_sk_t4

0xd695,	// (0x0003c5fc) popup_welc_pane_t4

0xd6a3,	// (0x0003c60a) popup_welc_pane_t5

0xd6b1,	// (0x0003c618) popup_welc_pane_t6
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
	};

} // end of namespace AknLayoutScalable_Elaf_pnp4_apps_nhd4_prt_tch_Small
