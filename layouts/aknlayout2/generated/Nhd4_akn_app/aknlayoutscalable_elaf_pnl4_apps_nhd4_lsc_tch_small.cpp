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

#include "aknlayoutscalable_elaf_pnl4_apps_nhd4_lsc_tch_small.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pnp4_apps_nhd4_prt_tch[]; }

namespace AknLayoutScalable_Elaf_pnl4_apps_nhd4_lsc_tch_Small
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pnp4_apps_nhd4_prt_tch + 0x0003bc79 };

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
0x3997,	// (0x0003f610) Screen

0x39a3,	// (0x0003f61c) application_window

0x39df,	// (0x0003f658) area_bottom_pane_ParamLimits

0x39df,	// (0x0003f658) area_bottom_pane

0x3a18,	// (0x0003f691) area_top_pane_ParamLimits

0x3a18,	// (0x0003f691) area_top_pane

0xc14a,	// (0x00047dc3) call_video_uplink_pane_ParamLimits

0xc14a,	// (0x00047dc3) call_video_uplink_pane

0x3aa6,	// (0x0003f71f) main_pane_ParamLimits

0x3aa6,	// (0x0003f71f) main_pane

0x7450,	// (0x000430c9) context_pane

0x7463,	// (0x000430dc) navi_pane

0x7495,	// (0x0004310e) popup_cale_events_window_ParamLimits

0x7495,	// (0x0004310e) popup_cale_events_window

0x74ad,	// (0x00043126) popup_mup_playback_window

0x74b5,	// (0x0004312e) signal_pane

0x1120,	// (0x0003cd99) main_browser_pane

0x12d2,	// (0x0003cf4b) main_burst_pane

0x71a0,	// (0x00042e19) main_calc_pane

0x71b4,	// (0x00042e2d) main_cale_day_pane

0x3fa5,	// (0x0003fc1e) main_cale_month_pane

0x71b4,	// (0x00042e2d) main_cale_week_pane

0x12d2,	// (0x0003cf4b) main_call_pane

0x0dd8,	// (0x0003ca51) main_call_poc_pane

0x12d2,	// (0x0003cf4b) main_camera_pane

0x12d2,	// (0x0003cf4b) main_chi_dic_pane

0x1aaf,	// (0x0003d728) main_clock_pane

0x0dd8,	// (0x0003ca51) main_fmradio_pane

0x12d2,	// (0x0003cf4b) main_graph_messa_pane

0x0dd8,	// (0x0003ca51) main_help_pane

0x1120,	// (0x0003cd99) main_im_pane

0x1033,	// (0x0003ccac) main_image_pane_ParamLimits

0x1033,	// (0x0003ccac) main_image_pane

0x0dd8,	// (0x0003ca51) main_location2_pane

0x12d2,	// (0x0003cf4b) main_location_pane

0x1033,	// (0x0003ccac) main_messa_pane

0x0dd8,	// (0x0003ca51) main_mp2_pane

0x12d2,	// (0x0003cf4b) main_mp_pane

0x0dd8,	// (0x0003ca51) main_msg_pane

0x0dd8,	// (0x0003ca51) main_mup_eq_pane

0x0dd8,	// (0x0003ca51) main_mup_pane

0x1120,	// (0x0003cd99) main_notes_pane

0x0dd8,	// (0x0003ca51) main_pec_pane

0x0dd8,	// (0x0003ca51) main_phob_pane

0x0dd8,	// (0x0003ca51) main_pinb_pane

0x0dd8,	// (0x0003ca51) main_postcard_pane

0x0dd8,	// (0x0003ca51) main_qdial_pane

0x12d2,	// (0x0003cf4b) main_skin_pane

0x0dd8,	// (0x0003ca51) main_smil2_pane

0x12d2,	// (0x0003cf4b) main_smil_pane

0x12d2,	// (0x0003cf4b) main_video_pane

0x12d2,	// (0x0003cf4b) main_video_tele_pane

0x1033,	// (0x0003ccac) main_viewer_pane_ParamLimits

0x1033,	// (0x0003ccac) main_viewer_pane

0x12d2,	// (0x0003cf4b) main_vorec_pane

0x720c,	// (0x00042e85) popup_blid_sat_info_window_ParamLimits

0x720c,	// (0x00042e85) popup_blid_sat_info_window

0x7264,	// (0x00042edd) popup_dyc_status_message_window_ParamLimits

0x7264,	// (0x00042edd) popup_dyc_status_message_window

0x727c,	// (0x00042ef5) popup_grid_large_graphic_window_ParamLimits

0x727c,	// (0x00042ef5) popup_grid_large_graphic_window

0x732c,	// (0x00042fa5) popup_loc_request_window_ParamLimits

0x732c,	// (0x00042fa5) popup_loc_request_window

0x7428,	// (0x000430a1) popup_wml_address_window_ParamLimits

0x7428,	// (0x000430a1) popup_wml_address_window

0x6fa1,	// (0x00042c1a) call_muted_g1

0x5efe,	// (0x00041b77) popup_call_audio_conf_window_ParamLimits

0x5efe,	// (0x00041b77) popup_call_audio_conf_window

0x6fb5,	// (0x00042c2e) popup_call_audio_first_window_ParamLimits

0x6fb5,	// (0x00042c2e) popup_call_audio_first_window

0x702b,	// (0x00042ca4) popup_call_audio_in_window_ParamLimits

0x702b,	// (0x00042ca4) popup_call_audio_in_window

0x7067,	// (0x00042ce0) popup_call_audio_out_window_ParamLimits

0x7067,	// (0x00042ce0) popup_call_audio_out_window

0x70a1,	// (0x00042d1a) popup_call_audio_second_window_ParamLimits

0x70a1,	// (0x00042d1a) popup_call_audio_second_window

0x70f7,	// (0x00042d70) popup_call_audio_wait_window_ParamLimits

0x70f7,	// (0x00042d70) popup_call_audio_wait_window

0x712c,	// (0x00042da5) popup_number_entry_window_ParamLimits

0x712c,	// (0x00042da5) popup_number_entry_window

0x09c5,	// (0x0003c63e) bg_popup_call_pane_cp05_ParamLimits

0x09c5,	// (0x0003c63e) bg_popup_call_pane_cp05

0x09e5,	// (0x0003c65e) popup_number_entry_window_t1

0x09f8,	// (0x0003c671) popup_number_entry_window_t2

0x0a0a,	// (0x0003c683) popup_number_entry_window_t3

0x0003,

0xf085,	// (0x0004acfe) popup_number_entry_window_t

0x0a1c,	// (0x0003c695) text_title_cp2

0x0a2f,	// (0x0003c6a8) bg_popup_call_pane_cp_ParamLimits

0x0a2f,	// (0x0003c6a8) bg_popup_call_pane_cp

0x0a3d,	// (0x0003c6b6) call_thumbnail_pane

0x0a45,	// (0x0003c6be) popup_call_audio_in_window_g1_ParamLimits

0x0a45,	// (0x0003c6be) popup_call_audio_in_window_g1

0x0a51,	// (0x0003c6ca) popup_call_audio_in_window_g2_ParamLimits

0x0a51,	// (0x0003c6ca) popup_call_audio_in_window_g2

0x0a5d,	// (0x0003c6d6) popup_call_audio_in_window_g3_ParamLimits

0x0a5d,	// (0x0003c6d6) popup_call_audio_in_window_g3

0x0002,

0xf08e,	// (0x0004ad07) popup_call_audio_in_window_g_ParamLimits

0xf08e,	// (0x0004ad07) popup_call_audio_in_window_g

0x0a69,	// (0x0003c6e2) popup_call_audio_in_window_t1_ParamLimits

0x0a69,	// (0x0003c6e2) popup_call_audio_in_window_t1

0x0a85,	// (0x0003c6fe) popup_call_audio_in_window_t2_ParamLimits

0x0a85,	// (0x0003c6fe) popup_call_audio_in_window_t2

0x0aa1,	// (0x0003c71a) popup_call_audio_in_window_t3_ParamLimits

0x0aa1,	// (0x0003c71a) popup_call_audio_in_window_t3

0x0002,

0xf095,	// (0x0004ad0e) popup_call_audio_in_window_t_ParamLimits

0xf095,	// (0x0004ad0e) popup_call_audio_in_window_t

0x0a2f,	// (0x0003c6a8) bg_popup_call_pane_cp01_ParamLimits

0x0a2f,	// (0x0003c6a8) bg_popup_call_pane_cp01

0x0a3d,	// (0x0003c6b6) call_thumbnail_pane_cp02

0x0ab4,	// (0x0003c72d) call_type_pane_cp022

0x0abc,	// (0x0003c735) popup_call_audio_out_window_g1_ParamLimits

0x0abc,	// (0x0003c735) popup_call_audio_out_window_g1

0x0ace,	// (0x0003c747) popup_call_audio_out_window_g2_ParamLimits

0x0ace,	// (0x0003c747) popup_call_audio_out_window_g2

0x0ada,	// (0x0003c753) popup_call_audio_out_window_g3_ParamLimits

0x0ada,	// (0x0003c753) popup_call_audio_out_window_g3

0x0002,

0xf09c,	// (0x0004ad15) popup_call_audio_out_window_g_ParamLimits

0xf09c,	// (0x0004ad15) popup_call_audio_out_window_g

0x0aec,	// (0x0003c765) popup_call_audio_out_window_t1_ParamLimits

0x0aec,	// (0x0003c765) popup_call_audio_out_window_t1

0x0b04,	// (0x0003c77d) popup_call_audio_out_window_t2_ParamLimits

0x0b04,	// (0x0003c77d) popup_call_audio_out_window_t2

0x0001,

0xf0a3,	// (0x0004ad1c) popup_call_audio_out_window_t_ParamLimits

0xf0a3,	// (0x0004ad1c) popup_call_audio_out_window_t

0x0b19,	// (0x0003c792) bg_popup_call_pane_ParamLimits

0x0b19,	// (0x0003c792) bg_popup_call_pane

0x3c63,	// (0x0003f8dc) call_thumbnail_pane_cp_ParamLimits

0x3c63,	// (0x0003f8dc) call_thumbnail_pane_cp

0x0b9d,	// (0x0003c816) call_type_pane_cp01_ParamLimits

0x0b9d,	// (0x0003c816) call_type_pane_cp01

0x0be1,	// (0x0003c85a) popup_call_audio_first_window_g1_ParamLimits

0x0be1,	// (0x0003c85a) popup_call_audio_first_window_g1

0x0c2d,	// (0x0003c8a6) popup_call_audio_first_window_g2_ParamLimits

0x0c2d,	// (0x0003c8a6) popup_call_audio_first_window_g2

0x0001,

0xf0a8,	// (0x0004ad21) popup_call_audio_first_window_g_ParamLimits

0xf0a8,	// (0x0004ad21) popup_call_audio_first_window_g

0x0c71,	// (0x0003c8ea) popup_call_audio_first_window_t1_ParamLimits

0x0c71,	// (0x0003c8ea) popup_call_audio_first_window_t1

0x0d1d,	// (0x0003c996) popup_call_audio_first_window_t4_ParamLimits

0x0d1d,	// (0x0003c996) popup_call_audio_first_window_t4

0x0da9,	// (0x0003ca22) popup_call_audio_first_window_t5_ParamLimits

0x0da9,	// (0x0003ca22) popup_call_audio_first_window_t5

0x0002,

0xf0ad,	// (0x0004ad26) popup_call_audio_first_window_t_ParamLimits

0xf0ad,	// (0x0004ad26) popup_call_audio_first_window_t

0x0dd8,	// (0x0003ca51) bg_popup_call_pane_cp02

0x0de2,	// (0x0003ca5b) call_type_pane_cp023

0x0dea,	// (0x0003ca63) popup_call_audio_wait_window_g1

0x0df2,	// (0x0003ca6b) popup_call_audio_wait_window_g2

0x0001,

0xf0b4,	// (0x0004ad2d) popup_call_audio_wait_window_g

0x0dfa,	// (0x0003ca73) popup_call_audio_wait_window_t3

0x0e08,	// (0x0003ca81) bg_popup_call_pane_cp03_ParamLimits

0x0e08,	// (0x0003ca81) bg_popup_call_pane_cp03

0x0e68,	// (0x0003cae1) call_thumbnail_pane_cp011_ParamLimits

0x0e68,	// (0x0003cae1) call_thumbnail_pane_cp011

0x0e74,	// (0x0003caed) call_type_pane_cp034_ParamLimits

0x0e74,	// (0x0003caed) call_type_pane_cp034

0x0eb0,	// (0x0003cb29) popup_call_audio_second_window_g1_ParamLimits

0x0eb0,	// (0x0003cb29) popup_call_audio_second_window_g1

0x0eec,	// (0x0003cb65) popup_call_audio_second_window_g2_ParamLimits

0x0eec,	// (0x0003cb65) popup_call_audio_second_window_g2

0x0001,

0xf0b9,	// (0x0004ad32) popup_call_audio_second_window_g_ParamLimits

0xf0b9,	// (0x0004ad32) popup_call_audio_second_window_g

0x0f28,	// (0x0003cba1) popup_call_audio_second_window_t1_ParamLimits

0x0f28,	// (0x0003cba1) popup_call_audio_second_window_t1

0x0fa9,	// (0x0003cc22) popup_call_audio_second_window_t2_ParamLimits

0x0fa9,	// (0x0003cc22) popup_call_audio_second_window_t2

0x0fdf,	// (0x0003cc58) popup_call_audio_second_window_t3_ParamLimits

0x0fdf,	// (0x0003cc58) popup_call_audio_second_window_t3

0x0002,

0xf0be,	// (0x0004ad37) popup_call_audio_second_window_t_ParamLimits

0xf0be,	// (0x0004ad37) popup_call_audio_second_window_t

0x0dd8,	// (0x0003ca51) bg_popup_call_pane_cp04

0x1015,	// (0x0003cc8e) list_conf_pane

0x101d,	// (0x0003cc96) popup_call_audio_conf_window_t1

0x102b,	// (0x0003cca4) call_thumbnail_pane_g1

0x1033,	// (0x0003ccac) bg_pinb_pane_ParamLimits

0x1033,	// (0x0003ccac) bg_pinb_pane

0x1041,	// (0x0003ccba) find_pinb_pane

0x1033,	// (0x0003ccac) listscroll_pinb_pane_ParamLimits

0x1033,	// (0x0003ccac) listscroll_pinb_pane

0x104b,	// (0x0003ccc4) pinb_bg_pane_g1

0x104b,	// (0x0003ccc4) pinb_bg_pane_g2

0x104b,	// (0x0003ccc4) pinb_bg_pane_g3

0x104b,	// (0x0003ccc4) pinb_bg_pane_g4

0x104b,	// (0x0003ccc4) pinb_bg_pane_g5

0x104b,	// (0x0003ccc4) pinb_bg_pane_g6

0x104b,	// (0x0003ccc4) pinb_bg_pane_g7

0x104b,	// (0x0003ccc4) pinb_bg_pane_g8

0x104b,	// (0x0003ccc4) pinb_bg_pane_g9

0x104b,	// (0x0003ccc4) pinb_bg_pane_g10

0x0009,

0xf0c5,	// (0x0004ad3e) pinb_bg_pane_g

0x09ad,	// (0x0003c626) grid_pinb_pane

0x09ad,	// (0x0003c626) list_pinb_pane

0x1055,	// (0x0003ccce) scroll_pane_cp01_ParamLimits

0x1055,	// (0x0003ccce) scroll_pane_cp01

0x1063,	// (0x0003ccdc) find_pinb_pane_g1_ParamLimits

0x1063,	// (0x0003ccdc) find_pinb_pane_g1

0x107b,	// (0x0003ccf4) find_pinb_pane_t1

0x108d,	// (0x0003cd06) find_pinb_pane_t2

0x0001,

0xf0df,	// (0x0004ad58) find_pinb_pane_t

0x10a2,	// (0x0003cd1b) input_focus_pane_cp01_ParamLimits

0x10a2,	// (0x0003cd1b) input_focus_pane_cp01

0x09b7,	// (0x0003c630) cell_pinb_pane_ParamLimits

0x09b7,	// (0x0003c630) cell_pinb_pane

0x10ae,	// (0x0003cd27) cell_pinb_pane_g1_ParamLimits

0x10ae,	// (0x0003cd27) cell_pinb_pane_g1

0x10bc,	// (0x0003cd35) cell_pinb_pane_g2_ParamLimits

0x10bc,	// (0x0003cd35) cell_pinb_pane_g2

0x10bc,	// (0x0003cd35) cell_pinb_pane_g3_ParamLimits

0x10bc,	// (0x0003cd35) cell_pinb_pane_g3

0x0002,

0xf0e4,	// (0x0004ad5d) cell_pinb_pane_g_ParamLimits

0xf0e4,	// (0x0004ad5d) cell_pinb_pane_g

0x0dd8,	// (0x0003ca51) grid_highlight_pane_cp01

0x09b7,	// (0x0003c630) list_pinb_item_pane_ParamLimits

0x09b7,	// (0x0003c630) list_pinb_item_pane

0x09ad,	// (0x0003c626) list_highlight_pane_cp02

0x10ca,	// (0x0003cd43) list_pinb_item_pane_g1_ParamLimits

0x10ca,	// (0x0003cd43) list_pinb_item_pane_g1

0x10bc,	// (0x0003cd35) list_pinb_item_pane_g2_ParamLimits

0x10bc,	// (0x0003cd35) list_pinb_item_pane_g2

0x10ae,	// (0x0003cd27) list_pinb_item_pane_g3_ParamLimits

0x10ae,	// (0x0003cd27) list_pinb_item_pane_g3

0x10bc,	// (0x0003cd35) list_pinb_item_pane_g4_ParamLimits

0x10bc,	// (0x0003cd35) list_pinb_item_pane_g4

0x0003,

0xf0eb,	// (0x0004ad64) list_pinb_item_pane_g_ParamLimits

0xf0eb,	// (0x0004ad64) list_pinb_item_pane_g

0x10d8,	// (0x0003cd51) list_pinb_item_pane_t1_ParamLimits

0x10d8,	// (0x0003cd51) list_pinb_item_pane_t1

0x3ca5,	// (0x0003f91e) calc_display_pane

0x3cca,	// (0x0003f943) calc_paper_pane

0x3ced,	// (0x0003f966) grid_calc_pane

0x0dd8,	// (0x0003ca51) bg_list_pane_cp01

0x3d1b,	// (0x0003f994) clock_g1

0x3d23,	// (0x0003f99c) clock_g2

0x0001,

0xf0f4,	// (0x0004ad6d) clock_g

0x3d2b,	// (0x0003f9a4) clock_t1_ParamLimits

0x3d2b,	// (0x0003f9a4) clock_t1

0x3d40,	// (0x0003f9b9) clock_t2_ParamLimits

0x3d40,	// (0x0003f9b9) clock_t2

0x3d52,	// (0x0003f9cb) clock_t3_ParamLimits

0x3d52,	// (0x0003f9cb) clock_t3

0x3d64,	// (0x0003f9dd) clock_t4_ParamLimits

0x3d64,	// (0x0003f9dd) clock_t4

0x3d76,	// (0x0003f9ef) clock_t5_ParamLimits

0x3d76,	// (0x0003f9ef) clock_t5

0x3d8b,	// (0x0003fa04) clock_t6_ParamLimits

0x3d8b,	// (0x0003fa04) clock_t6

0x3d9d,	// (0x0003fa16) clock_t7_ParamLimits

0x3d9d,	// (0x0003fa16) clock_t7

0x3daf,	// (0x0003fa28) clock_t8_ParamLimits

0x3daf,	// (0x0003fa28) clock_t8

0x3dc3,	// (0x0003fa3c) clock_t9_ParamLimits

0x3dc3,	// (0x0003fa3c) clock_t9

0x0008,

0xf0f9,	// (0x0004ad72) clock_t_ParamLimits

0xf0f9,	// (0x0004ad72) clock_t

0x10ec,	// (0x0003cd65) popup_clock_analogue_window_cp02

0x10ec,	// (0x0003cd65) popup_clock_digital_window_cp01

0x0dd8,	// (0x0003ca51) listscroll_help_pane

0x0dd8,	// (0x0003ca51) phob_pre_status_pane

0x10f4,	// (0x0003cd6d) grid_qdial_pane

0x1033,	// (0x0003ccac) listscroll_mce_pane

0x1033,	// (0x0003ccac) bg_notes_pane

0x10fe,	// (0x0003cd77) list_notes_pane

0x3dd7,	// (0x0003fa50) scroll_pane_cp06

0x110c,	// (0x0003cd85) bg_calc_paper_pane

0xc170,	// (0x00047de9) list_calc_pane

0x1120,	// (0x0003cd99) bg_calc_display_pane

0x3deb,	// (0x0003fa64) calc_display_pane_t1

0x3dfd,	// (0x0003fa76) calc_display_pane_t2

0xc18a,	// (0x00047e03) calc_display_pane_t3

0x0002,

0xf10c,	// (0x0004ad85) calc_display_pane_t

0x3e0f,	// (0x0003fa88) cell_calc_pane_ParamLimits

0x3e0f,	// (0x0003fa88) cell_calc_pane

0x112c,	// (0x0003cda5) bg_calc_paper_pane_g1

0x1138,	// (0x0003cdb1) bg_calc_paper_pane_g2

0x1144,	// (0x0003cdbd) bg_calc_paper_pane_g3

0x1150,	// (0x0003cdc9) bg_calc_paper_pane_g4

0x115c,	// (0x0003cdd5) bg_calc_paper_pane_g5

0x3e44,	// (0x0003fabd) bg_calc_paper_pane_g6

0x3e53,	// (0x0003facc) bg_calc_paper_pane_g7

0x3e62,	// (0x0003fadb) bg_calc_paper_pane_g8

0x0007,

0xf113,	// (0x0004ad8c) bg_calc_paper_pane_g

0x3e75,	// (0x0003faee) calc_bg_paper_pane_g9

0x3e88,	// (0x0003fb01) list_calc_item_pane_ParamLimits

0x3e88,	// (0x0003fb01) list_calc_item_pane

0x1168,	// (0x0003cde1) list_calc_item_pane_g1

0xc19c,	// (0x00047e15) list_calc_item_pane_t1_ParamLimits

0xc19c,	// (0x00047e15) list_calc_item_pane_t1

0x3e9d,	// (0x0003fb16) list_calc_item_pane_t2_ParamLimits

0x3e9d,	// (0x0003fb16) list_calc_item_pane_t2

0x0001,

0xf124,	// (0x0004ad9d) list_calc_item_pane_t_ParamLimits

0xf124,	// (0x0004ad9d) list_calc_item_pane_t

0x104b,	// (0x0003ccc4) cell_calc_pane_g1

0x1175,	// (0x0003cdee) grid_highlight_pane_cp02

0x232f,	// (0x0003dfa8) bg_calc_display_pane_g1

0x3ecf,	// (0x0003fb48) bg_calc_display_pane_g2

0x3ed9,	// (0x0003fb52) bg_calc_display_pane_g3

0x0002,

0xf12e,	// (0x0004ada7) bg_calc_display_pane_g

0x3ee2,	// (0x0003fb5b) cell_qdial_pane_ParamLimits

0x3ee2,	// (0x0003fb5b) cell_qdial_pane

0x3ef6,	// (0x0003fb6f) cell_qdial_pane_g1_ParamLimits

0x3ef6,	// (0x0003fb6f) cell_qdial_pane_g1

0x3f0c,	// (0x0003fb85) cell_qdial_pane_g2_ParamLimits

0x3f0c,	// (0x0003fb85) cell_qdial_pane_g2

0x1197,	// (0x0003ce10) cell_qdial_pane_g3_ParamLimits

0x1197,	// (0x0003ce10) cell_qdial_pane_g3

0x0003,

0xf135,	// (0x0004adae) cell_qdial_pane_g_ParamLimits

0xf135,	// (0x0004adae) cell_qdial_pane_g

0x3f32,	// (0x0003fbab) cell_qdial_pane_t1_ParamLimits

0x3f32,	// (0x0003fbab) cell_qdial_pane_t1

0x3f4a,	// (0x0003fbc3) cell_qdial_pane_t2_ParamLimits

0x3f4a,	// (0x0003fbc3) cell_qdial_pane_t2

0x3f5d,	// (0x0003fbd6) cell_qdial_pane_t3_ParamLimits

0x3f5d,	// (0x0003fbd6) cell_qdial_pane_t3

0x0002,

0xf13e,	// (0x0004adb7) cell_qdial_pane_t_ParamLimits

0xf13e,	// (0x0004adb7) cell_qdial_pane_t

0x0dd8,	// (0x0003ca51) grid_highlight_pane_cp04

0x11a3,	// (0x0003ce1c) thumbnail_qdial_pane_ParamLimits

0x11a3,	// (0x0003ce1c) thumbnail_qdial_pane

0x11ff,	// (0x0003ce78) list_help_pane

0x1208,	// (0x0003ce81) scroll_pane_cp02

0x3f70,	// (0x0003fbe9) help_list_pane_t1_ParamLimits

0x3f70,	// (0x0003fbe9) help_list_pane_t1

0xc1ae,	// (0x00047e27) bg_notes_pane_g2

0xc1b6,	// (0x00047e2f) bg_notes_pane_g3

0xc1be,	// (0x00047e37) notes_bg_pane_g1

0xc1c6,	// (0x00047e3f) notes_bg_pane_g4

0xc1ce,	// (0x00047e47) notes_bg_pane_g5

0xc1d6,	// (0x00047e4f) notes_bg_pane_g6

0xc1de,	// (0x00047e57) notes_bg_pane_g7

0xc1e6,	// (0x00047e5f) notes_bg_pane_g8

0xc1ee,	// (0x00047e67) notes_bg_pane_g9

0x0006,

0xf15c,	// (0x0004add5) notes_bg_pane_g

0x3f8f,	// (0x0003fc08) list_notes_text_pane_ParamLimits

0x3f8f,	// (0x0003fc08) list_notes_text_pane

0x1211,	// (0x0003ce8a) list_notes_text_pane_g1

0x31b5,	// (0x0003ee2e) list_notes_text_pane_t1

0x3fa5,	// (0x0003fc1e) listscroll_cale_week_pane

0x3fd1,	// (0x0003fc4a) bg_cale_heading_pane

0x1234,	// (0x0003cead) bg_cale_pane_cp01

0x3fe9,	// (0x0003fc62) cale_week_corner_pane

0x4008,	// (0x0003fc81) cale_week_day_heading_pane

0x4025,	// (0x0003fc9e) cale_week_scroll_pane_g1

0x4038,	// (0x0003fcb1) cale_week_scroll_pane_g2

0x4050,	// (0x0003fcc9) cale_week_scroll_pane_g3

0x4068,	// (0x0003fce1) cale_week_scroll_pane_g4

0x4080,	// (0x0003fcf9) cale_week_scroll_pane_g5

0x40a0,	// (0x0003fd19) cale_week_scroll_pane_g6

0x40c0,	// (0x0003fd39) cale_week_scroll_pane_g7

0x40e0,	// (0x0003fd59) cale_week_scroll_pane_g8

0x4104,	// (0x0003fd7d) cale_week_scroll_pane_g9

0x411c,	// (0x0003fd95) cale_week_scroll_pane_g10

0x4134,	// (0x0003fdad) cale_week_scroll_pane_g11

0x414c,	// (0x0003fdc5) cale_week_scroll_pane_g12

0x4164,	// (0x0003fddd) cale_week_scroll_pane_g13

0x4164,	// (0x0003fddd) cale_week_scroll_pane_g14

0x4164,	// (0x0003fddd) cale_week_scroll_pane_g15

0x000f,

0xf16b,	// (0x0004ade4) cale_week_scroll_pane_g

0x41a0,	// (0x0003fe19) cale_week_time_pane

0x41c4,	// (0x0003fe3d) grid_cale_week_pane

0x1263,	// (0x0003cedc) scroll_pane_cp08

0x41ea,	// (0x0003fe63) cell_cale_week_pane_ParamLimits

0x41ea,	// (0x0003fe63) cell_cale_week_pane

0x4278,	// (0x0003fef1) cale_week_day_heading_pane_t1

0x42a2,	// (0x0003ff1b) cale_week_day_heading_pane_t2

0x42d1,	// (0x0003ff4a) cale_week_day_heading_pane_t3

0x4300,	// (0x0003ff79) cale_week_day_heading_pane_t4

0x432f,	// (0x0003ffa8) cale_week_day_heading_pane_t5

0x4366,	// (0x0003ffdf) cale_week_day_heading_pane_t6

0x439d,	// (0x00040016) cale_week_day_heading_pane_t7

0x0006,

0xf18c,	// (0x0004ae05) cale_week_day_heading_pane_t

0x1280,	// (0x0003cef9) bg_cale_side_pane

0x43c7,	// (0x00040040) cale_week_time_pane_t1

0x43e1,	// (0x0004005a) cale_week_time_pane_t2

0x43fb,	// (0x00040074) cale_week_time_pane_t3

0x4415,	// (0x0004008e) cale_week_time_pane_t4

0x442f,	// (0x000400a8) cale_week_time_pane_t5

0x4449,	// (0x000400c2) cale_week_time_pane_t6

0x4463,	// (0x000400dc) cale_week_time_pane_t7

0x447d,	// (0x000400f6) cale_week_time_pane_t8

0x0007,

0xf19b,	// (0x0004ae14) cale_week_time_pane_t

0x449d,	// (0x00040116) cell_cale_week_pane_g2

0x44c1,	// (0x0004013a) cell_cale_week_pane_g3_ParamLimits

0x44c1,	// (0x0004013a) cell_cale_week_pane_g3

0x128e,	// (0x0003cf07) grid_highlight_pane_cp07

0x1296,	// (0x0003cf0f) listscroll_gms_pane

0x12a0,	// (0x0003cf19) grid_gms_pane

0x12a9,	// (0x0003cf22) listscroll_gms_pane_g1

0x12b1,	// (0x0003cf2a) listscroll_gms_pane_g2

0x0001,

0xf1ac,	// (0x0004ae25) listscroll_gms_pane_g

0x44d9,	// (0x00040152) scroll_pane_cp010

0x44e4,	// (0x0004015d) cell_gms_pane_ParamLimits

0x44e4,	// (0x0004015d) cell_gms_pane

0x44f6,	// (0x0004016f) cell_gms_pane_g1

0x12b9,	// (0x0003cf32) cell_gms_pane_g2

0x1211,	// (0x0003ce8a) cell_gms_pane_g3

0x12c1,	// (0x0003cf3a) cell_gms_pane_g4

0x0003,

0xf1b1,	// (0x0004ae2a) cell_gms_pane_g

0x12ca,	// (0x0003cf43) grid_highlight_pane_cp09

0x6f29,	// (0x00042ba2) phob_pre_status_pane_g1

0x6f31,	// (0x00042baa) phob_pre_status_pane_g2

0x6f39,	// (0x00042bb2) phob_pre_status_pane_g3

0x6f41,	// (0x00042bba) phob_pre_status_pane_g4

0x0004,

0xf588,	// (0x0004b201) phob_pre_status_pane_g

0x6f51,	// (0x00042bca) phob_pre_status_pane_t1

0x6f5f,	// (0x00042bd8) phob_pre_status_pane_t2

0x6f6f,	// (0x00042be8) phob_pre_status_pane_t3

0x0002,

0xf593,	// (0x0004b20c) phob_pre_status_pane_t

0x12d2,	// (0x0003cf4b) bg_list_pane_cp05

0x4506,	// (0x0004017f) grid_vorec_pane

0x450e,	// (0x00040187) vorec_t1

0x451c,	// (0x00040195) vorec_t2

0x452a,	// (0x000401a3) vorec_t3

0x4538,	// (0x000401b1) vorec_t4

0xbefb,	// (0x00047b74) vorec_t5

0xbf09,	// (0x00047b82) vorec_t6

0x0004,

0xf1ba,	// (0x0004ae33) vorec_t

0xbf17,	// (0x00047b90) wait_bar_pane_cp01

0x4554,	// (0x000401cd) cell_vorec_pane_ParamLimits

0x4554,	// (0x000401cd) cell_vorec_pane

0xc1f6,	// (0x00047e6f) cell_vorec_pane_g1

0x0dd8,	// (0x0003ca51) grid_highlight_pane_cp05

0x1055,	// (0x0003ccce) cams_zoom_pane

0x1055,	// (0x0003ccce) image_vga_pane

0x10ae,	// (0x0003cd27) main_camera_pane_g1

0x10ae,	// (0x0003cd27) main_camera_pane_g2

0x10ae,	// (0x0003cd27) main_camera_pane_g3

0x10ae,	// (0x0003cd27) main_camera_pane_g4

0x10ae,	// (0x0003cd27) main_camera_pane_g5

0x10ae,	// (0x0003cd27) main_camera_pane_g6

0x10ae,	// (0x0003cd27) main_camera_pane_g7

0x0007,

0xf1c5,	// (0x0004ae3e) main_camera_pane_g

0x1322,	// (0x0003cf9b) main_camera_pane_t1

0x1322,	// (0x0003cf9b) main_camera_pane_t2

0x0001,

0xf1d6,	// (0x0004ae4f) main_camera_pane_t

0x457b,	// (0x000401f4) cams_zoom_pane_cp_ParamLimits

0x457b,	// (0x000401f4) cams_zoom_pane_cp

0x45af,	// (0x00040228) image_cif_pane_ParamLimits

0x45af,	// (0x00040228) image_cif_pane

0x09ad,	// (0x0003c626) image_subqcif_pane

0x45c1,	// (0x0004023a) main_video_pane_g1_ParamLimits

0x45c1,	// (0x0004023a) main_video_pane_g1

0x45ef,	// (0x00040268) main_video_pane_g2_ParamLimits

0x45ef,	// (0x00040268) main_video_pane_g2

0x4629,	// (0x000402a2) main_video_pane_g3_ParamLimits

0x4629,	// (0x000402a2) main_video_pane_g3

0x4629,	// (0x000402a2) main_video_pane_g4_ParamLimits

0x4629,	// (0x000402a2) main_video_pane_g4

0x465d,	// (0x000402d6) main_video_pane_g5_ParamLimits

0x465d,	// (0x000402d6) main_video_pane_g5

0x12ee,	// (0x0003cf67) main_video_pane_g6_ParamLimits

0x12ee,	// (0x0003cf67) main_video_pane_g6

0x0006,

0xf1db,	// (0x0004ae54) main_video_pane_g_ParamLimits

0xf1db,	// (0x0004ae54) main_video_pane_g

0x4679,	// (0x000402f2) main_video_pane_t1_ParamLimits

0x4679,	// (0x000402f2) main_video_pane_t1

0x1308,	// (0x0003cf81) cams_zoom_pane_g1

0x1308,	// (0x0003cf81) cams_zoom_pane_g2

0x1308,	// (0x0003cf81) cams_zoom_pane_g3

0x1308,	// (0x0003cf81) cams_zoom_pane_g4

0x0003,

0xf1ea,	// (0x0004ae63) cams_zoom_pane_g

0x46d1,	// (0x0004034a) grid_cams_pane

0x46eb,	// (0x00040364) linegrid_cams_pane

0x46fe,	// (0x00040377) cell_cams_pane_ParamLimits

0x46fe,	// (0x00040377) cell_cams_pane

0x1312,	// (0x0003cf8b) cams_burst_image_pane

0x131a,	// (0x0003cf93) cell_cams_pane_g1

0x0dd8,	// (0x0003ca51) grid_highlight_pane_cp03

0x104b,	// (0x0003ccc4) mp_bg_pane_g1

0x09ad,	// (0x0003c626) bg_list_pane_cp03

0x09ad,	// (0x0003c626) bg_mp_pane

0x09ad,	// (0x0003c626) grid_mp_pane

0x1308,	// (0x0003cf81) media_player_g1

0x1843,	// (0x0003d4bc) media_player_t1

0x1843,	// (0x0003d4bc) media_player_t2

0x1843,	// (0x0003d4bc) media_player_t3

0x1843,	// (0x0003d4bc) media_player_t4

0x1843,	// (0x0003d4bc) media_player_t5

0x1843,	// (0x0003d4bc) media_player_t6

0x1843,	// (0x0003d4bc) media_player_t7

0x0006,

0xf572,	// (0x0004b1eb) media_player_t

0x09ad,	// (0x0003c626) wait_bar_pane_cp02

0xf557,	// (0x0004b1d0) main_usb_pane_t

0x1aaf,	// (0x0003d728) cell_mp_pane

0x104b,	// (0x0003ccc4) cell_mp_pane_g1

0x0dd8,	// (0x0003ca51) grid_highlight_pane_cp06

0x1336,	// (0x0003cfaf) grid_skin_colour_pane

0x133e,	// (0x0003cfb7) list_highlight_pane_cp03

0x471e,	// (0x00040397) skin_g1

0x1346,	// (0x0003cfbf) skin_t1

0x1355,	// (0x0003cfce) skin_t2

0x0001,

0xf218,	// (0x0004ae91) skin_t

0x4726,	// (0x0004039f) cell_skin_colour_pane_ParamLimits

0x4726,	// (0x0004039f) cell_skin_colour_pane

0x1363,	// (0x0003cfdc) cell_skin_colour_pane_g1

0x479f,	// (0x00040418) call_video_g1_ParamLimits

0x479f,	// (0x00040418) call_video_g1

0x47bb,	// (0x00040434) call_video_g2_ParamLimits

0x47bb,	// (0x00040434) call_video_g2

0x0001,

0xf21d,	// (0x0004ae96) call_video_g_ParamLimits

0xf21d,	// (0x0004ae96) call_video_g

0x480d,	// (0x00040486) call_video_uplink_pane_cp1_ParamLimits

0x480d,	// (0x00040486) call_video_uplink_pane_cp1

0x1375,	// (0x0003cfee) call_video_uplink_pane_cp2

0x48ac,	// (0x00040525) video_down_crop_pane_ParamLimits

0x48ac,	// (0x00040525) video_down_crop_pane

0x4995,	// (0x0004060e) video_down_pane_ParamLimits

0x4995,	// (0x0004060e) video_down_pane

0x137d,	// (0x0003cff6) video_down_subqcif_pane_ParamLimits

0x137d,	// (0x0003cff6) video_down_subqcif_pane

0x1395,	// (0x0003d00e) video_down_subqcif_pane_cp_ParamLimits

0x1395,	// (0x0003d00e) video_down_subqcif_pane_cp

0x13bb,	// (0x0003d034) im_reading_pane_ParamLimits

0x13bb,	// (0x0003d034) im_reading_pane

0x4aa5,	// (0x0004071e) im_writing_pane_ParamLimits

0x4aa5,	// (0x0004071e) im_writing_pane

0x4abb,	// (0x00040734) im_reading_pane_t1

0x13d5,	// (0x0003d04e) list_im_pane

0x13e6,	// (0x0003d05f) scroll_pane_cp07

0x4af5,	// (0x0004076e) im_writing_pane_t1_ParamLimits

0x4af5,	// (0x0004076e) im_writing_pane_t1

0x13ff,	// (0x0003d078) im_writing_pane_t2_ParamLimits

0x13ff,	// (0x0003d078) im_writing_pane_t2

0x0001,

0xf227,	// (0x0004aea0) im_writing_pane_t_ParamLimits

0xf227,	// (0x0004aea0) im_writing_pane_t

0x0dd8,	// (0x0003ca51) input_focus_pane_cp04

0x0dd8,	// (0x0003ca51) input_focus_pane_cp05

0x4b0a,	// (0x00040783) list_im_single_pane_ParamLimits

0x4b0a,	// (0x00040783) list_im_single_pane

0x4b1f,	// (0x00040798) list_single_im_pane_t1

0x12d2,	// (0x0003cf4b) blid_accuracy_pane

0x12d2,	// (0x0003cf4b) blid_compass_pane

0x6f1a,	// (0x00042b93) main_location_t1

0x6f1a,	// (0x00042b93) main_location_t2

0x6f1a,	// (0x00042b93) main_location_t3

0x0002,

0xf581,	// (0x0004b1fa) main_location_t

0x0dd8,	// (0x0003ca51) aid_levels_location

0x104b,	// (0x0003ccc4) blid_accuracy_pane_g1

0x104b,	// (0x0003ccc4) blid_accuracy_pane_g2

0x0001,

0xf276,	// (0x0004aeef) blid_accuracy_pane_g

0x1447,	// (0x0003d0c0) wml_content_pane

0x1485,	// (0x0003d0fe) wml_button_pane_ParamLimits

0x1485,	// (0x0003d0fe) wml_button_pane

0x4b2e,	// (0x000407a7) wml_list_single_large_pane_ParamLimits

0x4b2e,	// (0x000407a7) wml_list_single_large_pane

0x4b43,	// (0x000407bc) wml_list_single_medium_pane_ParamLimits

0x4b43,	// (0x000407bc) wml_list_single_medium_pane

0x4b5a,	// (0x000407d3) wml_list_single_small_pane_ParamLimits

0x4b5a,	// (0x000407d3) wml_list_single_small_pane

0x1499,	// (0x0003d112) wml_selection_box_pane_ParamLimits

0x1499,	// (0x0003d112) wml_selection_box_pane

0x14ac,	// (0x0003d125) wml_list_single_pane_t1

0x14bb,	// (0x0003d134) wml_list_single_medium_pane_t1

0x14ca,	// (0x0003d143) wml_list_single_large_pane_t1

0x14d9,	// (0x0003d152) input_focus_pane_cp02_ParamLimits

0x14d9,	// (0x0003d152) input_focus_pane_cp02

0x14ec,	// (0x0003d165) wml_selection_box_pane_g1

0x14f5,	// (0x0003d16e) wml_selection_box_pane_t1_ParamLimits

0x14f5,	// (0x0003d16e) wml_selection_box_pane_t1

0x1033,	// (0x0003ccac) bg_wml_button_pane_ParamLimits

0x1033,	// (0x0003ccac) bg_wml_button_pane

0x150d,	// (0x0003d186) wml_button_pane_g1

0x1515,	// (0x0003d18e) wml_button_pane_t1

0x150d,	// (0x0003d186) wml_button_bg_pane_g1

0x1525,	// (0x0003d19e) wml_button_bg_pane_g2

0x152d,	// (0x0003d1a6) wml_button_bg_pane_g3

0x1535,	// (0x0003d1ae) wml_button_bg_pane_g4

0x153d,	// (0x0003d1b6) wml_button_bg_pane_g5

0x1545,	// (0x0003d1be) wml_button_bg_pane_g6

0x154d,	// (0x0003d1c6) wml_button_bg_pane_g7

0x1555,	// (0x0003d1ce) wml_button_bg_pane_g8

0x155d,	// (0x0003d1d6) wml_button_bg_pane_g9

0x0008,

0xf22c,	// (0x0004aea5) wml_button_bg_pane_g

0x4b73,	// (0x000407ec) bg_list_pane_cp02

0x1565,	// (0x0003d1de) mce_header_pane_ParamLimits

0x1565,	// (0x0003d1de) mce_header_pane

0x157b,	// (0x0003d1f4) mce_icon_pane

0x157b,	// (0x0003d1f4) mce_image_pane

0x1584,	// (0x0003d1fd) mce_text_pane_ParamLimits

0x1584,	// (0x0003d1fd) mce_text_pane

0x4b7b,	// (0x000407f4) scroll_pane_cp03

0x147d,	// (0x0003d0f6) scroll_pane_cp04

0x1597,	// (0x0003d210) scroll_pane_cp05_ParamLimits

0x1597,	// (0x0003d210) scroll_pane_cp05

0x4b85,	// (0x000407fe) mce_header_field_pane_ParamLimits

0x4b85,	// (0x000407fe) mce_header_field_pane

0x4b9c,	// (0x00040815) mce_header_field_pane_2_ParamLimits

0x4b9c,	// (0x00040815) mce_header_field_pane_2

0x4bb2,	// (0x0004082b) mce_header_field_pane_3

0x4bba,	// (0x00040833) list_single_mce_message_pane_ParamLimits

0x4bba,	// (0x00040833) list_single_mce_message_pane

0x4bd0,	// (0x00040849) list_single_mce_smart_pane_ParamLimits

0x4bd0,	// (0x00040849) list_single_mce_smart_pane

0x15a3,	// (0x0003d21c) input_focus_pane_cp03

0x15ac,	// (0x0003d225) list_header_data_pane

0x4bf1,	// (0x0004086a) mce_header_field_pane_t1

0x4c01,	// (0x0004087a) list_single_mce_header_pane_ParamLimits

0x4c01,	// (0x0004087a) list_single_mce_header_pane

0x15b4,	// (0x0003d22d) list_single_mce_header_pane_t1

0x15c3,	// (0x0003d23c) list_single_mce_message_pane_g1

0x15cb,	// (0x0003d244) list_single_mce_message_pane_t1

0x4c3b,	// (0x000408b4) bg_cale_heading_pane_cp01_ParamLimits

0x4c3b,	// (0x000408b4) bg_cale_heading_pane_cp01

0x15d9,	// (0x0003d252) bg_cale_pane_cp02_ParamLimits

0x15d9,	// (0x0003d252) bg_cale_pane_cp02

0x4c75,	// (0x000408ee) cale_month_corner_pane

0x4c94,	// (0x0004090d) cale_month_day_heading_pane_ParamLimits

0x4c94,	// (0x0004090d) cale_month_day_heading_pane

0x4ce6,	// (0x0004095f) cale_month_pane_g1_ParamLimits

0x4ce6,	// (0x0004095f) cale_month_pane_g1

0x4d15,	// (0x0004098e) cale_month_pane_g2_ParamLimits

0x4d15,	// (0x0004098e) cale_month_pane_g2

0x4d45,	// (0x000409be) cale_month_pane_g3_ParamLimits

0x4d45,	// (0x000409be) cale_month_pane_g3

0x4d81,	// (0x000409fa) cale_month_pane_g4_ParamLimits

0x4d81,	// (0x000409fa) cale_month_pane_g4

0x4dbd,	// (0x00040a36) cale_month_pane_g5_ParamLimits

0x4dbd,	// (0x00040a36) cale_month_pane_g5

0x4e05,	// (0x00040a7e) cale_month_pane_g6_ParamLimits

0x4e05,	// (0x00040a7e) cale_month_pane_g6

0x4e51,	// (0x00040aca) cale_month_pane_g7_ParamLimits

0x4e51,	// (0x00040aca) cale_month_pane_g7

0x4ea1,	// (0x00040b1a) cale_month_pane_g8_ParamLimits

0x4ea1,	// (0x00040b1a) cale_month_pane_g8

0x4ef5,	// (0x00040b6e) cale_month_pane_g9_ParamLimits

0x4ef5,	// (0x00040b6e) cale_month_pane_g9

0x4f47,	// (0x00040bc0) cale_month_pane_g10_ParamLimits

0x4f47,	// (0x00040bc0) cale_month_pane_g10

0x4f99,	// (0x00040c12) cale_month_pane_g11_ParamLimits

0x4f99,	// (0x00040c12) cale_month_pane_g11

0x4feb,	// (0x00040c64) cale_month_pane_g12_ParamLimits

0x4feb,	// (0x00040c64) cale_month_pane_g12

0x503d,	// (0x00040cb6) cale_month_pane_g13_ParamLimits

0x503d,	// (0x00040cb6) cale_month_pane_g13

0x000c,

0xf23f,	// (0x0004aeb8) cale_month_pane_g_ParamLimits

0xf23f,	// (0x0004aeb8) cale_month_pane_g

0x508f,	// (0x00040d08) cale_month_week_pane

0x50b3,	// (0x00040d2c) grid_cale_month_pane_ParamLimits

0x50b3,	// (0x00040d2c) grid_cale_month_pane

0x50fc,	// (0x00040d75) cale_month_day_heading_pane_t1

0x513e,	// (0x00040db7) cale_month_day_heading_pane_t2

0x5173,	// (0x00040dec) cale_month_day_heading_pane_t3

0x51a8,	// (0x00040e21) cale_month_day_heading_pane_t4

0x51e5,	// (0x00040e5e) cale_month_day_heading_pane_t5

0x522a,	// (0x00040ea3) cale_month_day_heading_pane_t6

0x526f,	// (0x00040ee8) cale_month_day_heading_pane_t7

0x0006,

0xf25a,	// (0x0004aed3) cale_month_day_heading_pane_t

0x1280,	// (0x0003cef9) bg_cale_side_pane_cp01

0x52bc,	// (0x00040f35) cale_month_week_pane_t1

0x52d5,	// (0x00040f4e) cale_month_week_pane_t2

0x52ee,	// (0x00040f67) cale_month_week_pane_t3

0x5307,	// (0x00040f80) cale_month_week_pane_t4

0x5320,	// (0x00040f99) cale_month_week_pane_t5

0x5339,	// (0x00040fb2) cale_month_week_pane_t6

0x0005,

0xf269,	// (0x0004aee2) cale_month_week_pane_t

0x5352,	// (0x00040fcb) cell_cale_month_pane_ParamLimits

0x5352,	// (0x00040fcb) cell_cale_month_pane

0xc200,	// (0x00047e79) cell_cale_month_pane_g1

0x5480,	// (0x000410f9) cell_cale_month_pane_t1_ParamLimits

0x5480,	// (0x000410f9) cell_cale_month_pane_t1

0x128e,	// (0x0003cf07) grid_highlight_pane_cp08

0x104b,	// (0x0003ccc4) main_smil_g1

0x54ac,	// (0x00041125) smil_status_pane

0x1618,	// (0x0003d291) smil_text_pane

0x6d68,	// (0x000429e1) bg_popup_call3_rect_pane_g8

0x6d70,	// (0x000429e9) bg_popup_call3_rect_pane_g9

0x0008,

0xf502,	// (0x0004b17b) bg_popup_call3_rect_pane_g

0x754d,	// (0x000431c6) smil_status_volume_pane_g1

0x1622,	// (0x0003d29b) smil_status_pane_t1

0xc3dc,	// (0x00048055) volume_smil_pane

0x1639,	// (0x0003d2b2) list_smil_text_pane

0x54c1,	// (0x0004113a) scroll_pane_cp011

0x54cc,	// (0x00041145) smil_text_list_pane_t1_ParamLimits

0x54cc,	// (0x00041145) smil_text_list_pane_t1

0xc20c,	// (0x00047e85) aid_volume_smil_ParamLimits

0xc20c,	// (0x00047e85) aid_volume_smil

0x104b,	// (0x0003ccc4) smil_volume_pane_g1

0x104b,	// (0x0003ccc4) smil_volume_pane_g2

0x0001,

0xf276,	// (0x0004aeef) smil_volume_pane_g

0x3fa5,	// (0x0003fc1e) listscroll_cale_day_pane

0x1643,	// (0x0003d2bc) bg_cale_pane

0x165b,	// (0x0003d2d4) list_cale_pane

0x167e,	// (0x0003d2f7) scroll_pane_cp09

0x168f,	// (0x0003d308) cale_bg_pane_g1

0x1697,	// (0x0003d310) cale_bg_pane_g2

0x169f,	// (0x0003d318) cale_bg_pane_g3

0x16a7,	// (0x0003d320) cale_bg_pane_g4

0x16af,	// (0x0003d328) cale_bg_pane_g5

0x16b7,	// (0x0003d330) cale_bg_pane_g6

0x16bf,	// (0x0003d338) cale_bg_pane_g7

0x16c7,	// (0x0003d340) cale_bg_pane_g8

0x16cf,	// (0x0003d348) cale_bg_pane_g9

0x0008,

0xf27b,	// (0x0004aef4) cale_bg_pane_g

0x5518,	// (0x00041191) list_cale_time_pane_ParamLimits

0x5518,	// (0x00041191) list_cale_time_pane

0x16d7,	// (0x0003d350) list_cale_time_pane_g1_ParamLimits

0x16d7,	// (0x0003d350) list_cale_time_pane_g1

0x16e3,	// (0x0003d35c) list_cale_time_pane_g2_ParamLimits

0x16e3,	// (0x0003d35c) list_cale_time_pane_g2

0x552e,	// (0x000411a7) list_cale_time_pane_g3_ParamLimits

0x552e,	// (0x000411a7) list_cale_time_pane_g3

0x553c,	// (0x000411b5) list_cale_time_pane_g4_ParamLimits

0x553c,	// (0x000411b5) list_cale_time_pane_g4

0x554a,	// (0x000411c3) list_cale_time_pane_g5_ParamLimits

0x554a,	// (0x000411c3) list_cale_time_pane_g5

0x0005,

0xf28e,	// (0x0004af07) list_cale_time_pane_g_ParamLimits

0xf28e,	// (0x0004af07) list_cale_time_pane_g

0x16fd,	// (0x0003d376) list_cale_time_pane_t1_ParamLimits

0x16fd,	// (0x0003d376) list_cale_time_pane_t1

0x1725,	// (0x0003d39e) list_cale_time_pane_t2_ParamLimits

0x1725,	// (0x0003d39e) list_cale_time_pane_t2

0x57e3,	// (0x0004145c) aid_blid_cardinal_pane

0x5821,	// (0x0004149a) compass_pane_t4

0x174d,	// (0x0003d3c6) list_cale_time_pane_t4_ParamLimits

0x174d,	// (0x0003d3c6) list_cale_time_pane_t4

0x582f,	// (0x000414a8) compass_pane_t5

0x583d,	// (0x000414b6) compass_pane_t6

0x584b,	// (0x000414c4) compass_pane_t7

0x1bc9,	// (0x0003d842) navi_pane_cc_t1

0x1da6,	// (0x0003da1f) aid_phob_thumbnail_center_pane

0x5bc1,	// (0x0004183a) main_postcard_pane_g4_ParamLimits

0x0002,

0xf29b,	// (0x0004af14) list_cale_time_pane_t_ParamLimits

0xf29b,	// (0x0004af14) list_cale_time_pane_t

0x0a2f,	// (0x0003c6a8) bg_popup_window_pane_cp02_ParamLimits

0x0a2f,	// (0x0003c6a8) bg_popup_window_pane_cp02

0x1775,	// (0x0003d3ee) heading_pane_cp01_ParamLimits

0x1775,	// (0x0003d3ee) heading_pane_cp01

0x1781,	// (0x0003d3fa) loc_req_pane_ParamLimits

0x1781,	// (0x0003d3fa) loc_req_pane

0x1791,	// (0x0003d40a) loc_type_pane_ParamLimits

0x1791,	// (0x0003d40a) loc_type_pane

0x17a3,	// (0x0003d41c) loc_type_pane_t1_ParamLimits

0x17a3,	// (0x0003d41c) loc_type_pane_t1

0x17b5,	// (0x0003d42e) loc_type_pane_t2_ParamLimits

0x17b5,	// (0x0003d42e) loc_type_pane_t2

0x17c7,	// (0x0003d440) loc_type_pane_t3_ParamLimits

0x17c7,	// (0x0003d440) loc_type_pane_t3

0x0002,

0xf2a2,	// (0x0004af1b) loc_type_pane_t_ParamLimits

0xf2a2,	// (0x0004af1b) loc_type_pane_t

0x17d9,	// (0x0003d452) list_loc_req_pane

0x17e3,	// (0x0003d45c) scroll_pane_cp012

0x5558,	// (0x000411d1) list_single_loc_request_popup_menu_pane_ParamLimits

0x5558,	// (0x000411d1) list_single_loc_request_popup_menu_pane

0x17ee,	// (0x0003d467) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0x17ee,	// (0x0003d467) list_single_loc_request_popup_menu_pane_g1

0x17fa,	// (0x0003d473) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0x17fa,	// (0x0003d473) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf2a9,	// (0x0004af22) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf2a9,	// (0x0004af22) list_single_loc_request_popup_menu_pane_g

0x1806,	// (0x0003d47f) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0x1806,	// (0x0003d47f) list_single_loc_request_popup_menu_pane_t1

0x1033,	// (0x0003ccac) bg_popup_window_pane_cp03_ParamLimits

0x1033,	// (0x0003ccac) bg_popup_window_pane_cp03

0x2338,	// (0x0003dfb1) heading_loc_req_pane_ParamLimits

0x2338,	// (0x0003dfb1) heading_loc_req_pane

0x5565,	// (0x000411de) popup_dyc_status_message_window_g1_ParamLimits

0x5565,	// (0x000411de) popup_dyc_status_message_window_g1

0x5579,	// (0x000411f2) popup_dyc_status_message_window_t1_ParamLimits

0x5579,	// (0x000411f2) popup_dyc_status_message_window_t1

0x558e,	// (0x00041207) popup_dyc_status_message_window_t2_ParamLimits

0x558e,	// (0x00041207) popup_dyc_status_message_window_t2

0x55a3,	// (0x0004121c) popup_dyc_status_message_window_t3_ParamLimits

0x55a3,	// (0x0004121c) popup_dyc_status_message_window_t3

0x0002,

0xf2ae,	// (0x0004af27) popup_dyc_status_message_window_t_ParamLimits

0xf2ae,	// (0x0004af27) popup_dyc_status_message_window_t

0x0dd8,	// (0x0003ca51) bg_heading_pane_cp01

0x181c,	// (0x0003d495) heading_loc_req_pane_g1

0x1824,	// (0x0003d49d) heading_loc_req_pane_g2

0x182c,	// (0x0003d4a5) heading_loc_req_pane_g3

0x0002,

0xf2b5,	// (0x0004af2e) heading_loc_req_pane_g

0x1834,	// (0x0003d4ad) heading_loc_req_pane_t1

0x1853,	// (0x0003d4cc) bg_popup_sub_pane_cp01_ParamLimits

0x1853,	// (0x0003d4cc) bg_popup_sub_pane_cp01

0x1861,	// (0x0003d4da) popup_cale_events_window_g1_ParamLimits

0x1861,	// (0x0003d4da) popup_cale_events_window_g1

0x1881,	// (0x0003d4fa) popup_cale_events_window_g2_ParamLimits

0x1881,	// (0x0003d4fa) popup_cale_events_window_g2

0x0001,

0xf2d7,	// (0x0004af50) popup_cale_events_window_g_ParamLimits

0xf2d7,	// (0x0004af50) popup_cale_events_window_g

0x18a1,	// (0x0003d51a) popup_cale_events_window_t1_ParamLimits

0x18a1,	// (0x0003d51a) popup_cale_events_window_t1

0x18b3,	// (0x0003d52c) popup_cale_events_window_t2_ParamLimits

0x18b3,	// (0x0003d52c) popup_cale_events_window_t2

0x18f1,	// (0x0003d56a) popup_cale_events_window_t3_ParamLimits

0x18f1,	// (0x0003d56a) popup_cale_events_window_t3

0x192b,	// (0x0003d5a4) popup_cale_events_window_t4_ParamLimits

0x192b,	// (0x0003d5a4) popup_cale_events_window_t4

0x0003,

0xf2dc,	// (0x0004af55) popup_cale_events_window_t_ParamLimits

0xf2dc,	// (0x0004af55) popup_cale_events_window_t

0x55d7,	// (0x00041250) call_type_pane

0x55e7,	// (0x00041260) popup_call_status_window_g1

0x55fb,	// (0x00041274) popup_call_status_window_g2

0x560f,	// (0x00041288) popup_call_status_window_g3

0x0002,

0xf2e5,	// (0x0004af5e) popup_call_status_window_g

0x1961,	// (0x0003d5da) call_type_pane_g1

0x196a,	// (0x0003d5e3) call_type_pane_g2

0x0001,

0xf2ec,	// (0x0004af65) call_type_pane_g

0x0dd8,	// (0x0003ca51) bg_popup_sub_pane_cp02

0x1973,	// (0x0003d5ec) listscroll_popup_wml_pane

0x197b,	// (0x0003d5f4) list_wml_pane

0x1985,	// (0x0003d5fe) scroll_pane_cp013

0x1990,	// (0x0003d609) list_single_graphic_popup_wml_pane_ParamLimits

0x1990,	// (0x0003d609) list_single_graphic_popup_wml_pane

0x104b,	// (0x0003ccc4) list_single_graphic_popup_wml_pane_g1

0x19a4,	// (0x0003d61d) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf2f1,	// (0x0004af6a) list_single_graphic_popup_wml_pane_g

0x19ac,	// (0x0003d625) list_single_graphic_popup_wml_pane_t1

0x19c2,	// (0x0003d63b) aid_call_pane

0x102b,	// (0x0003cca4) popup_clock_analogue_window_g1

0x102b,	// (0x0003cca4) popup_clock_analogue_window_g2

0xc22e,	// (0x00047ea7) popup_clock_analogue_window_g3

0xc22e,	// (0x00047ea7) popup_clock_analogue_window_g4

0x104b,	// (0x0003ccc4) popup_clock_analogue_window_g5

0x0004,

0xf2f6,	// (0x0004af6f) popup_clock_analogue_window_g

0xc236,	// (0x00047eaf) popup_clock_analogue_window_t1

0xc244,	// (0x00047ebd) clock_digital_number_pane_ParamLimits

0xc244,	// (0x00047ebd) clock_digital_number_pane

0xc250,	// (0x00047ec9) clock_digital_number_pane_cp02_ParamLimits

0xc250,	// (0x00047ec9) clock_digital_number_pane_cp02

0xc25c,	// (0x00047ed5) clock_digital_number_pane_cp03_ParamLimits

0xc25c,	// (0x00047ed5) clock_digital_number_pane_cp03

0xc268,	// (0x00047ee1) clock_digital_number_pane_cp04_ParamLimits

0xc268,	// (0x00047ee1) clock_digital_number_pane_cp04

0xc274,	// (0x00047eed) clock_digital_separator_pane_ParamLimits

0xc274,	// (0x00047eed) clock_digital_separator_pane

0xc280,	// (0x00047ef9) popup_clock_digital_window_t1

0x104b,	// (0x0003ccc4) clock_digital_number_pane_g1

0x104b,	// (0x0003ccc4) clock_digital_number_pane_g2

0x0001,

0xf276,	// (0x0004aeef) clock_digital_number_pane_g

0x104b,	// (0x0003ccc4) clock_digital_separator_pane_g1

0x104b,	// (0x0003ccc4) clock_digital_separator_pane_g2

0x0001,

0xf276,	// (0x0004aeef) clock_digital_separator_pane_g

0x0dd8,	// (0x0003ca51) bg_popup_window_pane_cp04

0x19ca,	// (0x0003d643) heading_pane_cp03

0x12d2,	// (0x0003cf4b) listscroll_popup_gms_pane

0x0dd8,	// (0x0003ca51) grid_large_graphic_popup_pane

0x19d3,	// (0x0003d64c) listscroll_popup_gms_pane_g1

0x19dc,	// (0x0003d655) listscroll_popup_gms_pane_g2

0x0001,

0xf301,	// (0x0004af7a) listscroll_popup_gms_pane_g

0x19e5,	// (0x0003d65e) scroll_pane_cp014

0x09b7,	// (0x0003c630) cell_large_graphic_popup_pane_ParamLimits

0x09b7,	// (0x0003c630) cell_large_graphic_popup_pane

0x10ae,	// (0x0003cd27) cell_large_graphic_popup_pane_g1_ParamLimits

0x10ae,	// (0x0003cd27) cell_large_graphic_popup_pane_g1

0x19ee,	// (0x0003d667) cell_large_graphic_popup_pane_g2_ParamLimits

0x19ee,	// (0x0003d667) cell_large_graphic_popup_pane_g2

0x19fc,	// (0x0003d675) cell_large_graphic_popup_pane_g3_ParamLimits

0x19fc,	// (0x0003d675) cell_large_graphic_popup_pane_g3

0x1a0a,	// (0x0003d683) cell_large_graphic_popup_pane_g4_ParamLimits

0x1a0a,	// (0x0003d683) cell_large_graphic_popup_pane_g4

0x0003,

0xf306,	// (0x0004af7f) cell_large_graphic_popup_pane_g_ParamLimits

0xf306,	// (0x0004af7f) cell_large_graphic_popup_pane_g

0x0dd8,	// (0x0003ca51) grid_highlight_pane_cp010

0x104b,	// (0x0003ccc4) bg_popup_call_pane_g1

0x1a1b,	// (0x0003d694) list_single_graphic_popup_conf_pane_ParamLimits

0x1a1b,	// (0x0003d694) list_single_graphic_popup_conf_pane

0x1a2e,	// (0x0003d6a7) list_highlight_pane_cp01

0x1a37,	// (0x0003d6b0) list_single_graphic_popup_conf_pane_g1

0x1a3f,	// (0x0003d6b8) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf30f,	// (0x0004af88) list_single_graphic_popup_conf_pane_g

0x1a47,	// (0x0003d6c0) list_single_graphic_popup_conf_pane_t1

0x1a55,	// (0x0003d6ce) linegrid_cams_pane_g1

0x561e,	// (0x00041297) linegrid_cams_pane_g2

0x1211,	// (0x0003ce8a) linegrid_cams_pane_g3

0x1a5e,	// (0x0003d6d7) linegrid_cams_pane_g4

0x5627,	// (0x000412a0) linegrid_cams_pane_g5

0x5630,	// (0x000412a9) linegrid_cams_pane_g6

0x12c1,	// (0x0003cf3a) linegrid_cams_pane_g7

0x0006,

0xf314,	// (0x0004af8d) linegrid_cams_pane_g

0x1a67,	// (0x0003d6e0) popup_clock_analogue_window

0x1a67,	// (0x0003d6e0) popup_clock_digital_window

0x0dd8,	// (0x0003ca51) popup_phob_thumbnail_window

0x104b,	// (0x0003ccc4) call_video_uplink_pane_g1

0x1a70,	// (0x0003d6e9) call_video_uplink_pane_g2

0x0001,

0xf323,	// (0x0004af9c) call_video_uplink_pane_g

0x1a78,	// (0x0003d6f1) video_uplink_pane

0x1a80,	// (0x0003d6f9) mce_image_pane_g1

0x563b,	// (0x000412b4) mce_image_pane_g2

0x5643,	// (0x000412bc) mce_image_pane_g3

0x564b,	// (0x000412c4) mce_image_pane_g4

0x5655,	// (0x000412ce) mce_image_pane_g5

0x0004,

0xf328,	// (0x0004afa1) mce_image_pane_g

0x1a8a,	// (0x0003d703) control_top_pane_stacon_cp01_ParamLimits

0x1a8a,	// (0x0003d703) control_top_pane_stacon_cp01

0x1a9e,	// (0x0003d717) uni_indicator_pane_stacon_cp01_ParamLimits

0x1a9e,	// (0x0003d717) uni_indicator_pane_stacon_cp01

0x1aaf,	// (0x0003d728) bg_popup_sub_pane_cp03

0x565d,	// (0x000412d6) chi_dic_find_pane

0x5665,	// (0x000412de) listscroll_chi_dic_pane

0x566e,	// (0x000412e7) main_pane_chidic_g1

0x5681,	// (0x000412fa) chi_dic_find_pane_t1

0x1ab9,	// (0x0003d732) find_chidic_pane

0x1ac2,	// (0x0003d73b) chi_dic_list_pane_ParamLimits

0x1ac2,	// (0x0003d73b) chi_dic_list_pane

0x1ad3,	// (0x0003d74c) scroll_pane_cp020

0x568f,	// (0x00041308) find_chidic_pane_t1

0x0dd8,	// (0x0003ca51) input_focus_pane_cp06

0x569e,	// (0x00041317) list_chi_dic_pane_ParamLimits

0x569e,	// (0x00041317) list_chi_dic_pane

0x56b0,	// (0x00041329) list_chi_dic_pane_t1_ParamLimits

0x56b0,	// (0x00041329) list_chi_dic_pane_t1

0x0dd8,	// (0x0003ca51) list_highlight_pane_cp020

0x1adb,	// (0x0003d754) bg_cale_heading_pane_g1

0x56c3,	// (0x0004133c) bg_cale_heading_pane_g2

0x56cb,	// (0x00041344) bg_cale_heading_pane_g3

0x56d3,	// (0x0004134c) bg_cale_heading_pane_g4

0x56dd,	// (0x00041356) bg_cale_heading_pane_g5

0x56e7,	// (0x00041360) bg_cale_heading_pane_g6

0x56ef,	// (0x00041368) bg_cale_heading_pane_g7

0x56f7,	// (0x00041370) bg_cale_heading_pane_g8

0x5701,	// (0x0004137a) bg_cale_heading_pane_g9

0x0008,

0xf333,	// (0x0004afac) bg_cale_heading_pane_g

0x1adb,	// (0x0003d754) bg_cale_side_pane_g1

0x570b,	// (0x00041384) bg_cale_side_pane_g2

0x5713,	// (0x0004138c) bg_cale_side_pane_g3

0x571b,	// (0x00041394) bg_cale_side_pane_g4

0x5723,	// (0x0004139c) bg_cale_side_pane_g5

0x572b,	// (0x000413a4) bg_cale_side_pane_g6

0x5733,	// (0x000413ac) bg_cale_side_pane_g7

0x573b,	// (0x000413b4) bg_cale_side_pane_g8

0x5743,	// (0x000413bc) bg_cale_side_pane_g9

0x0008,

0xf346,	// (0x0004afbf) bg_cale_side_pane_g

0x574b,	// (0x000413c4) popup_call_status_window_ParamLimits

0x574b,	// (0x000413c4) popup_call_status_window

0x1ae3,	// (0x0003d75c) stacon_top_pane

0x1aeb,	// (0x0003d764) status_pane_ParamLimits

0x1aeb,	// (0x0003d764) status_pane

0x1b00,	// (0x0003d779) status_small_pane

0x1b08,	// (0x0003d781) control_pane

0x0dd8,	// (0x0003ca51) stacon_bottom_pane

0x1b10,	// (0x0003d789) list_single_mce_smart_pane_t1_ParamLimits

0x1b10,	// (0x0003d789) list_single_mce_smart_pane_t1

0x1b23,	// (0x0003d79c) list_single_mce_smart_pane_t2_ParamLimits

0x1b23,	// (0x0003d79c) list_single_mce_smart_pane_t2

0x0001,

0xf359,	// (0x0004afd2) list_single_mce_smart_pane_t_ParamLimits

0xf359,	// (0x0004afd2) list_single_mce_smart_pane_t

0x5792,	// (0x0004140b) compass_pane

0x579b,	// (0x00041414) main_location2_pane_t1

0x57ad,	// (0x00041426) main_location2_pane_t2

0x57bf,	// (0x00041438) main_location2_pane_t3

0x0003,

0xf35e,	// (0x0004afd7) main_location2_pane_t

0x1b42,	// (0x0003d7bb) compass_pane_g1_ParamLimits

0x1b42,	// (0x0003d7bb) compass_pane_g1

0x5803,	// (0x0004147c) compass_pane_t1

0x5812,	// (0x0004148b) compass_pane_t2

0x0005,

0xf367,	// (0x0004afe0) compass_pane_t

0x5859,	// (0x000414d2) text_secondary_cp61

0x1bc0,	// (0x0003d839) navi_pane_cams_g5

0x1c3c,	// (0x0003d8b5) navi_pane_im_t1

0x1c4a,	// (0x0003d8c3) navi_pane_mp_g1_ParamLimits

0x1c4a,	// (0x0003d8c3) navi_pane_mp_g1

0x1c5e,	// (0x0003d8d7) navi_pane_mp_g2_ParamLimits

0x1c5e,	// (0x0003d8d7) navi_pane_mp_g2

0x1c6a,	// (0x0003d8e3) navi_pane_mp_g3_ParamLimits

0x1c6a,	// (0x0003d8e3) navi_pane_mp_g3

0x0002,

0xf37b,	// (0x0004aff4) navi_pane_mp_g_ParamLimits

0xf37b,	// (0x0004aff4) navi_pane_mp_g

0x1c76,	// (0x0003d8ef) navi_pane_mp_t1

0x1c84,	// (0x0003d8fd) navi_pane_mp_t2

0x0002,

0xf382,	// (0x0004affb) navi_pane_mp_t

0x1cef,	// (0x0003d968) navi_pane_vt_g1

0x1c76,	// (0x0003d8ef) navi_pane_vt_t1

0x1cf7,	// (0x0003d970) navi_slider_pane

0x12d2,	// (0x0003cf4b) zooming_pane

0x1d07,	// (0x0003d980) navi_slider_pane_g1

0xc29d,	// (0x00047f16) navi_slider_pane_g2

0x0006,

0xf389,	// (0x0004b002) navi_slider_pane_g

0x1d2b,	// (0x0003d9a4) aid_levels_zoom

0x1d33,	// (0x0003d9ac) zooming_pane_g1

0x1d3b,	// (0x0003d9b4) zooming_pane_g2

0x1d3b,	// (0x0003d9b4) zooming_pane_g3

0x0002,

0xf398,	// (0x0004b011) zooming_pane_g

0x1d43,	// (0x0003d9bc) level_10_zoom

0x1d4c,	// (0x0003d9c5) level_11_zoom

0x1d55,	// (0x0003d9ce) level_1_zoom

0x1d5e,	// (0x0003d9d7) level_2_zoom

0x1d67,	// (0x0003d9e0) level_3_zoom

0x1d70,	// (0x0003d9e9) level_4_zoom

0x1d79,	// (0x0003d9f2) level_5_zoom

0x1d82,	// (0x0003d9fb) level_6_zoom

0x1d8b,	// (0x0003da04) level_7_zoom

0x1d94,	// (0x0003da0d) level_8_zoom

0x1d9d,	// (0x0003da16) level_9_zoom

0x1dae,	// (0x0003da27) popup_phob_thumbnail_window_g1

0x1db6,	// (0x0003da2f) popup_phob_thumbnail_window_g2

0x0001,

0xf39f,	// (0x0004b018) popup_phob_thumbnail_window_g

0x6f7f,	// (0x00042bf8) level_1_location

0x6f87,	// (0x00042c00) level_2_location

0x6f8f,	// (0x00042c08) level_3_location

0x6f97,	// (0x00042c10) level_4_location

0x12d2,	// (0x0003cf4b) level_5_location

0x58aa,	// (0x00041523) mce_icon_pane_g1

0x58b4,	// (0x0004152d) mce_icon_pane_g2

0x0001,

0xf3a4,	// (0x0004b01d) mce_icon_pane_g

0x230d,	// (0x0003df86) main_mup_pane_g1_ParamLimits

0x230d,	// (0x0003df86) main_mup_pane_g1

0x230d,	// (0x0003df86) main_mup_pane_g2_ParamLimits

0x230d,	// (0x0003df86) main_mup_pane_g2

0x230d,	// (0x0003df86) main_mup_pane_g3_ParamLimits

0x230d,	// (0x0003df86) main_mup_pane_g3

0x230d,	// (0x0003df86) main_mup_pane_g4_ParamLimits

0x230d,	// (0x0003df86) main_mup_pane_g4

0x230d,	// (0x0003df86) main_mup_pane_g5_ParamLimits

0x230d,	// (0x0003df86) main_mup_pane_g5

0x230d,	// (0x0003df86) main_mup_pane_g6_ParamLimits

0x230d,	// (0x0003df86) main_mup_pane_g6

0x230d,	// (0x0003df86) main_mup_pane_g7_ParamLimits

0x230d,	// (0x0003df86) main_mup_pane_g7

0x230d,	// (0x0003df86) main_mup_pane_g8_ParamLimits

0x230d,	// (0x0003df86) main_mup_pane_g8

0x230d,	// (0x0003df86) main_mup_pane_g9_ParamLimits

0x230d,	// (0x0003df86) main_mup_pane_g9

0x230d,	// (0x0003df86) main_mup_pane_g10_ParamLimits

0x230d,	// (0x0003df86) main_mup_pane_g10

0x230d,	// (0x0003df86) main_mup_pane_g11_ParamLimits

0x230d,	// (0x0003df86) main_mup_pane_g11

0x10ae,	// (0x0003cd27) main_mup_pane_g12_ParamLimits

0x10ae,	// (0x0003cd27) main_mup_pane_g12

0x230d,	// (0x0003df86) main_mup_pane_g13_ParamLimits

0x230d,	// (0x0003df86) main_mup_pane_g13

0x000c,

0xf3a9,	// (0x0004b022) main_mup_pane_g_ParamLimits

0xf3a9,	// (0x0004b022) main_mup_pane_g

0x231b,	// (0x0003df94) main_mup_pane_t1_ParamLimits

0x231b,	// (0x0003df94) main_mup_pane_t1

0x231b,	// (0x0003df94) main_mup_pane_t2_ParamLimits

0x231b,	// (0x0003df94) main_mup_pane_t2

0x231b,	// (0x0003df94) main_mup_pane_t3_ParamLimits

0x231b,	// (0x0003df94) main_mup_pane_t3

0x1322,	// (0x0003cf9b) main_mup_pane_t4_ParamLimits

0x1322,	// (0x0003cf9b) main_mup_pane_t4

0x1322,	// (0x0003cf9b) main_mup_pane_t5_ParamLimits

0x1322,	// (0x0003cf9b) main_mup_pane_t5

0x12da,	// (0x0003cf53) main_mup_pane_t6_ParamLimits

0x12da,	// (0x0003cf53) main_mup_pane_t6

0x0005,

0xf3c4,	// (0x0004b03d) main_mup_pane_t_ParamLimits

0xf3c4,	// (0x0004b03d) main_mup_pane_t

0x09b7,	// (0x0003c630) mup_progress_pane_ParamLimits

0x09b7,	// (0x0003c630) mup_progress_pane

0x22ff,	// (0x0003df78) mup_visualizer_pane_ParamLimits

0x22ff,	// (0x0003df78) mup_visualizer_pane

0x22ff,	// (0x0003df78) mup_volume_pane_ParamLimits

0x22ff,	// (0x0003df78) mup_volume_pane

0x10bc,	// (0x0003cd35) mup_visualizer_pane_g1_ParamLimits

0x10bc,	// (0x0003cd35) mup_visualizer_pane_g1

0x1dbe,	// (0x0003da37) mup_visualizer_pane_g2_ParamLimits

0x1dbe,	// (0x0003da37) mup_visualizer_pane_g2

0x10ae,	// (0x0003cd27) mup_visualizer_pane_g3_ParamLimits

0x10ae,	// (0x0003cd27) mup_visualizer_pane_g3

0x0002,

0xf3d1,	// (0x0004b04a) mup_visualizer_pane_g_ParamLimits

0xf3d1,	// (0x0004b04a) mup_visualizer_pane_g

0x1308,	// (0x0003cf81) mup_volume_pane_g1

0x1308,	// (0x0003cf81) mup_volume_pane_g2

0x0001,

0xf3d8,	// (0x0004b051) mup_volume_pane_g

0x1308,	// (0x0003cf81) mup_progress_pane_g1

0x1308,	// (0x0003cf81) mup_progress_pane_g2

0x1308,	// (0x0003cf81) mup_progress_pane_g3

0x0002,

0xf3dd,	// (0x0004b056) mup_progress_pane_g

0x0dd8,	// (0x0003ca51) bg_popup_window_pane_cp05

0x1dcc,	// (0x0003da45) heading_pane_cp02_ParamLimits

0x1dcc,	// (0x0003da45) heading_pane_cp02

0x1de6,	// (0x0003da5f) list_popup_blid_pane

0x1dee,	// (0x0003da67) list_blid_sat_info_pane_ParamLimits

0x1dee,	// (0x0003da67) list_blid_sat_info_pane

0x1e01,	// (0x0003da7a) list_blid_sat_info_pane_g1

0x1e09,	// (0x0003da82) list_blid_sat_info_pane_t1

0x59b4,	// (0x0004162d) mup_equalizer_pane_ParamLimits

0x59b4,	// (0x0004162d) mup_equalizer_pane

0x59cd,	// (0x00041646) mup_equalizer_pane_cp1_ParamLimits

0x59cd,	// (0x00041646) mup_equalizer_pane_cp1

0x59ea,	// (0x00041663) mup_equalizer_pane_cp2_ParamLimits

0x59ea,	// (0x00041663) mup_equalizer_pane_cp2

0x5a07,	// (0x00041680) mup_equalizer_pane_cp3_ParamLimits

0x5a07,	// (0x00041680) mup_equalizer_pane_cp3

0x5a28,	// (0x000416a1) mup_equalizer_pane_cp4_ParamLimits

0x5a28,	// (0x000416a1) mup_equalizer_pane_cp4

0x5a49,	// (0x000416c2) mup_equalizer_pane_cp5

0x5a5d,	// (0x000416d6) mup_equalizer_pane_cp6

0x5a71,	// (0x000416ea) mup_equalizer_pane_cp7

0x6df0,	// (0x00042a69) bg_popup_call_poc_act_pane_g9

0x6df8,	// (0x00042a71) bg_popup_call_poc_act_pane_g10

0x6e00,	// (0x00042a79) bg_popup_call_poc_act_pane_g11

0x000a,

0x1033,	// (0x0003ccac) mup_scale_pane

0x104b,	// (0x0003ccc4) mup_scale_pane_g1

0x1e17,	// (0x0003da90) mup_scale_pane_g2

0x0006,

0xf3f9,	// (0x0004b072) mup_scale_pane_g

0x1e3b,	// (0x0003dab4) msg_data_pane

0x1e43,	// (0x0003dabc) scroll_pane_cp017

0x31c3,	// (0x0003ee3c) bg_list_pane_cp04_ParamLimits

0x31c3,	// (0x0003ee3c) bg_list_pane_cp04

0x1e4b,	// (0x0003dac4) msg_data_pane_g1

0x5a97,	// (0x00041710) msg_data_pane_g2

0x5a9f,	// (0x00041718) msg_data_pane_g3

0x5aa7,	// (0x00041720) msg_data_pane_g4

0x5aaf,	// (0x00041728) msg_data_pane_g5

0x5ab7,	// (0x00041730) msg_data_pane_g6

0x5abf,	// (0x00041738) msg_data_pane_g7

0x0006,

0xf408,	// (0x0004b081) msg_data_pane_g

0x31db,	// (0x0003ee54) msg_text_pane_ParamLimits

0x31db,	// (0x0003ee54) msg_text_pane

0x5ac7,	// (0x00041740) qrid_highlight_pane_cp011_ParamLimits

0x5ac7,	// (0x00041740) qrid_highlight_pane_cp011

0x0dd8,	// (0x0003ca51) msg_body_pane

0x0dd8,	// (0x0003ca51) msg_header_pane

0x1e5c,	// (0x0003dad5) input_focus_pane_cp07

0xc2b7,	// (0x00047f30) msg_header_pane_t1_ParamLimits

0xc2b7,	// (0x00047f30) msg_header_pane_t1

0xc2cd,	// (0x00047f46) msg_header_pane_t2_ParamLimits

0xc2cd,	// (0x00047f46) msg_header_pane_t2

0x0001,

0xf41c,	// (0x0004b095) msg_header_pane_t_ParamLimits

0xf41c,	// (0x0004b095) msg_header_pane_t

0x1e71,	// (0x0003daea) msg_body_pane_g1

0xc2e4,	// (0x00047f5d) msg_body_pane_t1_ParamLimits

0xc2e4,	// (0x00047f5d) msg_body_pane_t1

0xc315,	// (0x00047f8e) msg_body_pane_t2_ParamLimits

0xc315,	// (0x00047f8e) msg_body_pane_t2

0xc327,	// (0x00047fa0) msg_body_pane_t3_ParamLimits

0xc327,	// (0x00047fa0) msg_body_pane_t3

0x0002,

0xf421,	// (0x0004b09a) msg_body_pane_t_ParamLimits

0xf421,	// (0x0004b09a) msg_body_pane_t

0x5b17,	// (0x00041790) main_viewer_pane_g1_ParamLimits

0x5b17,	// (0x00041790) main_viewer_pane_g1

0x5b25,	// (0x0004179e) main_viewer_pane_g2_ParamLimits

0x5b25,	// (0x0004179e) main_viewer_pane_g2

0x5b33,	// (0x000417ac) main_viewer_pane_g3_ParamLimits

0x5b33,	// (0x000417ac) main_viewer_pane_g3

0x5b42,	// (0x000417bb) main_viewer_pane_g4_ParamLimits

0x5b42,	// (0x000417bb) main_viewer_pane_g4

0xc351,	// (0x00047fca) main_viewer_pane_g5_ParamLimits

0xc351,	// (0x00047fca) main_viewer_pane_g5

0xc351,	// (0x00047fca) main_viewer_pane_g7_ParamLimits

0xc351,	// (0x00047fca) main_viewer_pane_g7

0xc363,	// (0x00047fdc) main_viewer_pane_g8_ParamLimits

0xc363,	// (0x00047fdc) main_viewer_pane_g8

0x0007,

0xf431,	// (0x0004b0aa) main_viewer_pane_g_ParamLimits

0xf431,	// (0x0004b0aa) main_viewer_pane_g

0x1e79,	// (0x0003daf2) viewer_content_pane_ParamLimits

0x1e79,	// (0x0003daf2) viewer_content_pane

0x5b7e,	// (0x000417f7) main_postcard_pane_g1_ParamLimits

0x5b7e,	// (0x000417f7) main_postcard_pane_g1

0x5b94,	// (0x0004180d) main_postcard_pane_g2_ParamLimits

0x5b94,	// (0x0004180d) main_postcard_pane_g2

0x5baa,	// (0x00041823) main_postcard_pane_g3_ParamLimits

0x5baa,	// (0x00041823) main_postcard_pane_g3

0x0005,

0xf442,	// (0x0004b0bb) main_postcard_pane_g_ParamLimits

0xf442,	// (0x0004b0bb) main_postcard_pane_g

0x5bc1,	// (0x0004183a) main_postcard_pane_g4

0x7560,	// (0x000431d9) smil_status_volume_pane_g2

0x5c04,	// (0x0004187d) postcard_pane_ParamLimits

0x5c04,	// (0x0004187d) postcard_pane

0x1e95,	// (0x0003db0e) postcard_pane_g1_ParamLimits

0x1e95,	// (0x0003db0e) postcard_pane_g1

0x5c46,	// (0x000418bf) postcard_pane_g2_ParamLimits

0x5c46,	// (0x000418bf) postcard_pane_g2

0x5c52,	// (0x000418cb) postcard_pane_g3_ParamLimits

0x5c52,	// (0x000418cb) postcard_pane_g3

0x1e87,	// (0x0003db00) postcard_pane_g4_ParamLimits

0x1e87,	// (0x0003db00) postcard_pane_g4

0x5c5e,	// (0x000418d7) postcard_pane_g5_ParamLimits

0x5c5e,	// (0x000418d7) postcard_pane_g5

0x5c73,	// (0x000418ec) postcard_pane_g6_ParamLimits

0x5c73,	// (0x000418ec) postcard_pane_g6

0x1e95,	// (0x0003db0e) postcard_pane_g7_ParamLimits

0x1e95,	// (0x0003db0e) postcard_pane_g7

0x0006,

0xf44f,	// (0x0004b0c8) postcard_pane_g_ParamLimits

0xf44f,	// (0x0004b0c8) postcard_pane_g

0x5c87,	// (0x00041900) main_mp2_pane_g1_ParamLimits

0x5c87,	// (0x00041900) main_mp2_pane_g1

0x5c93,	// (0x0004190c) main_mp2_pane_g2_ParamLimits

0x5c93,	// (0x0004190c) main_mp2_pane_g2

0x5c9f,	// (0x00041918) main_mp2_pane_g3_ParamLimits

0x5c9f,	// (0x00041918) main_mp2_pane_g3

0x0002,

0xf45e,	// (0x0004b0d7) main_mp2_pane_g_ParamLimits

0xf45e,	// (0x0004b0d7) main_mp2_pane_g

0x5cab,	// (0x00041924) main_mp2_pane_t1_ParamLimits

0x5cab,	// (0x00041924) main_mp2_pane_t1

0x5cc0,	// (0x00041939) main_mp2_pane_t2_ParamLimits

0x5cc0,	// (0x00041939) main_mp2_pane_t2

0x5cd2,	// (0x0004194b) main_mp2_pane_t3_ParamLimits

0x5cd2,	// (0x0004194b) main_mp2_pane_t3

0x0002,

0xf465,	// (0x0004b0de) main_mp2_pane_t_ParamLimits

0xf465,	// (0x0004b0de) main_mp2_pane_t

0x1ea3,	// (0x0003db1c) pec_content_pane_ParamLimits

0x1ea3,	// (0x0003db1c) pec_content_pane

0x147d,	// (0x0003d0f6) scroll_pane_cp015

0x1eb5,	// (0x0003db2e) pec_attribute_pane_ParamLimits

0x1eb5,	// (0x0003db2e) pec_attribute_pane

0x5ce4,	// (0x0004195d) pec_content_pane_g1_ParamLimits

0x5ce4,	// (0x0004195d) pec_content_pane_g1

0x1ec5,	// (0x0003db3e) pec_content_pane_t1_ParamLimits

0x1ec5,	// (0x0003db3e) pec_content_pane_t1

0x1ed7,	// (0x0003db50) pec_content_pane_t2_ParamLimits

0x1ed7,	// (0x0003db50) pec_content_pane_t2

0x0001,

0xf46c,	// (0x0004b0e5) pec_content_pane_t_ParamLimits

0xf46c,	// (0x0004b0e5) pec_content_pane_t

0x5cf0,	// (0x00041969) list_single_graphic_pane_cp01_ParamLimits

0x5cf0,	// (0x00041969) list_single_graphic_pane_cp01

0x1033,	// (0x0003ccac) bg_popup_sub_pane_cp04

0x1ee9,	// (0x0003db62) popup_mup_playback_window_g1

0x1ef5,	// (0x0003db6e) popup_mup_playback_window_t1

0x1f0a,	// (0x0003db83) popup_mup_playback_window_t2

0x0001,

0xf471,	// (0x0004b0ea) popup_mup_playback_window_t

0x1f41,	// (0x0003dbba) main_image_pane_g1_ParamLimits

0x1f41,	// (0x0003dbba) main_image_pane_g1

0x1f84,	// (0x0003dbfd) scroll_pane_cp018_ParamLimits

0x1f84,	// (0x0003dbfd) scroll_pane_cp018

0x1f9c,	// (0x0003dc15) scroll_pane_cp016_ParamLimits

0x1f9c,	// (0x0003dc15) scroll_pane_cp016

0x5dbe,	// (0x00041a37) smil2_image_pane_ParamLimits

0x5dbe,	// (0x00041a37) smil2_image_pane

0x5dee,	// (0x00041a67) smil2_root_pane_ParamLimits

0x5dee,	// (0x00041a67) smil2_root_pane

0x5e26,	// (0x00041a9f) smil2_text_pane_ParamLimits

0x5e26,	// (0x00041a9f) smil2_text_pane

0x0dd8,	// (0x0003ca51) bg_list_pane_cp06

0x1fd8,	// (0x0003dc51) grid_radio_pane

0x0dd8,	// (0x0003ca51) bg_popup_window_pane_cp06

0x1fe0,	// (0x0003dc59) main_fmradio_pane_t1

0x6eca,	// (0x00042b43) heading_pane_cp04

0x1fee,	// (0x0003dc67) main_fmradio_pane_t2

0x6ed2,	// (0x00042b4b) popup_cale_lunar_info_window_g1

0x1ffc,	// (0x0003dc75) main_fmradio_pane_t3

0x6eda,	// (0x00042b53) popup_cale_lunar_info_window_g2

0x200a,	// (0x0003dc83) main_fmradio_pane_t4

0x0001,

0x2018,	// (0x0003dc91) main_fmradio_pane_t5

0x0004,

0xf564,	// (0x0004b1dd) popup_cale_lunar_info_window_g

0xf486,	// (0x0004b0ff) main_fmradio_pane_t

0x2026,	// (0x0003dc9f) wait_bar_pane_cp03

0x202e,	// (0x0003dca7) cell_fmradio_pane_ParamLimits

0x202e,	// (0x0003dca7) cell_fmradio_pane

0x1e95,	// (0x0003db0e) cell_fmradio_pane_g1_ParamLimits

0x1e95,	// (0x0003db0e) cell_fmradio_pane_g1

0x0dd8,	// (0x0003ca51) grid_highlight_pane_cp011

0x2041,	// (0x0003dcba) poc_content_pane_ParamLimits

0x2041,	// (0x0003dcba) poc_content_pane

0x2053,	// (0x0003dccc) scroll_pane_cp019

0x5ea6,	// (0x00041b1f) popup_call_poc_act_window_ParamLimits

0x5ea6,	// (0x00041b1f) popup_call_poc_act_window

0x5eca,	// (0x00041b43) popup_call_poc_inact_window_ParamLimits

0x5eca,	// (0x00041b43) popup_call_poc_inact_window

0xf528,	// (0x0004b1a1) bg_popup_call_poc_act_pane_g

0x6e08,	// (0x00042a81) bg_popup_call_poc_inact_pane_g1

0x6e10,	// (0x00042a89) bg_popup_call_poc_inact_pane_g2

0x205b,	// (0x0003dcd4) popup_call_poc_act_window_g2

0x6e18,	// (0x00042a91) bg_popup_call_poc_inact_pane_g3

0x6d90,	// (0x00042a09) bg_popup_call_poc_inact_pane_g4

0x6e20,	// (0x00042a99) bg_popup_call_poc_inact_pane_g5

0x2063,	// (0x0003dcdc) popup_call_poc_act_window_t1_ParamLimits

0x2063,	// (0x0003dcdc) popup_call_poc_act_window_t1

0x208b,	// (0x0003dd04) popup_call_poc_act_window_t2_ParamLimits

0x208b,	// (0x0003dd04) popup_call_poc_act_window_t2

0x20b3,	// (0x0003dd2c) popup_call_poc_act_window_t3_ParamLimits

0x20b3,	// (0x0003dd2c) popup_call_poc_act_window_t3

0x20db,	// (0x0003dd54) popup_call_poc_act_window_t4_ParamLimits

0x20db,	// (0x0003dd54) popup_call_poc_act_window_t4

0x0003,

0xf491,	// (0x0004b10a) popup_call_poc_act_window_t_ParamLimits

0xf491,	// (0x0004b10a) popup_call_poc_act_window_t

0x6e28,	// (0x00042aa1) bg_popup_call_poc_inact_pane_g6

0x6e30,	// (0x00042aa9) bg_popup_call_poc_inact_pane_g7

0x6e38,	// (0x00042ab1) bg_popup_call_poc_inact_pane_g8

0x20ed,	// (0x0003dd66) popup_call_poc_inact_window_g2

0x6e40,	// (0x00042ab9) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf53f,	// (0x0004b1b8) bg_popup_call_poc_inact_pane_g

0x20f5,	// (0x0003dd6e) popup_call_poc_inact_window_t1_ParamLimits

0x20f5,	// (0x0003dd6e) popup_call_poc_inact_window_t1

0x210a,	// (0x0003dd83) popup_call_poc_inact_window_t2_ParamLimits

0x210a,	// (0x0003dd83) popup_call_poc_inact_window_t2

0x211f,	// (0x0003dd98) popup_call_poc_inact_window_t3_ParamLimits

0x211f,	// (0x0003dd98) popup_call_poc_inact_window_t3

0x0002,

0xf49a,	// (0x0004b113) popup_call_poc_inact_window_t_ParamLimits

0xf49a,	// (0x0004b113) popup_call_poc_inact_window_t

0x7450,	// (0x000430c9) context_pane_ParamLimits

0x74b5,	// (0x0004312e) signal_pane_ParamLimits

0x12d2,	// (0x0003cf4b) main_call2_pane

0xc3a8,	// (0x00048021) popup_phob_thumbnail2_window_ParamLimits

0xc3a8,	// (0x00048021) popup_phob_thumbnail2_window

0xc339,	// (0x00047fb2) aid_hotspot_pointer_arrow_pane

0xc341,	// (0x00047fba) aid_hotspot_pointer_hand_pane

0x6f49,	// (0x00042bc2) phob_pre_status_pane_g5

0x1055,	// (0x0003ccce) cams_zoom_pane_ParamLimits

0x1055,	// (0x0003ccce) image_vga_pane_ParamLimits

0x10ae,	// (0x0003cd27) main_camera_pane_g1_ParamLimits

0x10ae,	// (0x0003cd27) main_camera_pane_g2_ParamLimits

0x10ae,	// (0x0003cd27) main_camera_pane_g3_ParamLimits

0x10ae,	// (0x0003cd27) main_camera_pane_g4_ParamLimits

0x10ae,	// (0x0003cd27) main_camera_pane_g5_ParamLimits

0x10ae,	// (0x0003cd27) main_camera_pane_g6_ParamLimits

0x10ae,	// (0x0003cd27) main_camera_pane_g7_ParamLimits

0xf1c5,	// (0x0004ae3e) main_camera_pane_g_ParamLimits

0x1322,	// (0x0003cf9b) main_camera_pane_t1_ParamLimits

0x1322,	// (0x0003cf9b) main_camera_pane_t2_ParamLimits

0xf1d6,	// (0x0004ae4f) main_camera_pane_t_ParamLimits

0x1033,	// (0x0003ccac) bg_popup_preview_window_pane_cp01_ParamLimits

0x1033,	// (0x0003ccac) bg_popup_preview_window_pane_cp01

0x2134,	// (0x0003ddad) popup_phob_thumbnail2_window_g1_ParamLimits

0x2134,	// (0x0003ddad) popup_phob_thumbnail2_window_g1

0x0dd8,	// (0x0003ca51) call2_cli_visual_pane

0x5efe,	// (0x00041b77) popup_call2_audio_conf_window_ParamLimits

0x5efe,	// (0x00041b77) popup_call2_audio_conf_window

0x5f1e,	// (0x00041b97) popup_call2_audio_first_window_ParamLimits

0x5f1e,	// (0x00041b97) popup_call2_audio_first_window

0x5fb4,	// (0x00041c2d) popup_call2_audio_in_window_ParamLimits

0x5fb4,	// (0x00041c2d) popup_call2_audio_in_window

0x5ffc,	// (0x00041c75) popup_call2_audio_out_window_ParamLimits

0x5ffc,	// (0x00041c75) popup_call2_audio_out_window

0x6066,	// (0x00041cdf) popup_call2_audio_second_window_ParamLimits

0x6066,	// (0x00041cdf) popup_call2_audio_second_window

0x60cc,	// (0x00041d45) popup_call2_audio_wait_window_ParamLimits

0x60cc,	// (0x00041d45) popup_call2_audio_wait_window

0x0dd8,	// (0x0003ca51) bg_popup_call2_act_pane_cp03

0x1015,	// (0x0003cc8e) list_conf_pane_cp

0x2140,	// (0x0003ddb9) popup_call2_audio_conf_window_t1

0x214e,	// (0x0003ddc7) list_single_graphic_popup_conf2_pane_ParamLimits

0x214e,	// (0x0003ddc7) list_single_graphic_popup_conf2_pane

0x1a2e,	// (0x0003d6a7) list_highlight_pane_cp04

0x2161,	// (0x0003ddda) list_single_graphic_popup_conf2_pane_g1

0x1a3f,	// (0x0003d6b8) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf4a1,	// (0x0004b11a) list_single_graphic_popup_conf2_pane_g

0x216b,	// (0x0003dde4) list_single_graphic_popup_conf2_pane_t1

0x2179,	// (0x0003ddf2) bg_popup_call2_act_pane_cp01_ParamLimits

0x2179,	// (0x0003ddf2) bg_popup_call2_act_pane_cp01

0x2203,	// (0x0003de7c) call_type_pane_cp05_ParamLimits

0x2203,	// (0x0003de7c) call_type_pane_cp05

0x2257,	// (0x0003ded0) popup_call2_audio_second_window_g1_ParamLimits

0x2257,	// (0x0003ded0) popup_call2_audio_second_window_g1

0x22ab,	// (0x0003df24) popup_call2_audio_second_window_g2_ParamLimits

0x22ab,	// (0x0003df24) popup_call2_audio_second_window_g2

0x0002,

0xf4a6,	// (0x0004b11f) popup_call2_audio_second_window_g_ParamLimits

0xf4a6,	// (0x0004b11f) popup_call2_audio_second_window_g

0x6117,	// (0x00041d90) popup_call2_audio_second_window_t1_ParamLimits

0x6117,	// (0x00041d90) popup_call2_audio_second_window_t1

0x61d2,	// (0x00041e4b) popup_call2_audio_second_window_t2_ParamLimits

0x61d2,	// (0x00041e4b) popup_call2_audio_second_window_t2

0x6225,	// (0x00041e9e) popup_call2_audio_second_window_t3_ParamLimits

0x6225,	// (0x00041e9e) popup_call2_audio_second_window_t3

0x0003,

0xf4ad,	// (0x0004b126) popup_call2_audio_second_window_t_ParamLimits

0xf4ad,	// (0x0004b126) popup_call2_audio_second_window_t

0x0dd8,	// (0x0003ca51) bg_popup_call2_in_pane_cp02

0x0de2,	// (0x0003ca5b) call_type_pane_cp04

0x6318,	// (0x00041f91) popup_call2_audio_wait_window_g1

0x6320,	// (0x00041f99) popup_call2_audio_wait_window_g2

0x0001,

0xf4b6,	// (0x0004b12f) popup_call2_audio_wait_window_g

0x0dfa,	// (0x0003ca73) popup_call2_audio_wait_window_t3

0x6328,	// (0x00041fa1) bg_popup_call2_act_pane_ParamLimits

0x6328,	// (0x00041fa1) bg_popup_call2_act_pane

0x63e8,	// (0x00042061) call_type_pane_cp03_ParamLimits

0x63e8,	// (0x00042061) call_type_pane_cp03

0x644c,	// (0x000420c5) popup_call2_audio_first_window_g1_ParamLimits

0x644c,	// (0x000420c5) popup_call2_audio_first_window_g1

0x64bc,	// (0x00042135) popup_call2_audio_first_window_g2_ParamLimits

0x64bc,	// (0x00042135) popup_call2_audio_first_window_g2

0x6520,	// (0x00042199) popup_call2_audio_first_window_g3_ParamLimits

0x6520,	// (0x00042199) popup_call2_audio_first_window_g3

0x0004,

0xf4bb,	// (0x0004b134) popup_call2_audio_first_window_g_ParamLimits

0xf4bb,	// (0x0004b134) popup_call2_audio_first_window_g

0x65a8,	// (0x00042221) popup_call2_audio_first_window_t1_ParamLimits

0x65a8,	// (0x00042221) popup_call2_audio_first_window_t1

0x66ab,	// (0x00042324) popup_call2_audio_first_window_t4_ParamLimits

0x66ab,	// (0x00042324) popup_call2_audio_first_window_t4

0x678e,	// (0x00042407) popup_call2_audio_first_window_t5_ParamLimits

0x678e,	// (0x00042407) popup_call2_audio_first_window_t5

0x0003,

0xf4c6,	// (0x0004b13f) popup_call2_audio_first_window_t_ParamLimits

0xf4c6,	// (0x0004b13f) popup_call2_audio_first_window_t

0x102b,	// (0x0003cca4) bg_popup_call2_act_pane_g1

0x6ee2,	// (0x00042b5b) popup_cale_lunar_info_window_t1

0x6ef0,	// (0x00042b69) popup_cale_lunar_info_window_t2

0x6efe,	// (0x00042b77) popup_cale_lunar_info_window_t3

0x0dd8,	// (0x0003ca51) bg_popup_call2_bubble_pane

0x688f,	// (0x00042508) bg_popup_call2_in_pane_cp01_ParamLimits

0x688f,	// (0x00042508) bg_popup_call2_in_pane_cp01

0x0ab4,	// (0x0003c72d) call_type_pane_cp02

0x68d7,	// (0x00042550) popup_call2_audio_out_window_g1_ParamLimits

0x68d7,	// (0x00042550) popup_call2_audio_out_window_g1

0x6903,	// (0x0004257c) popup_call2_audio_out_window_g2_ParamLimits

0x6903,	// (0x0004257c) popup_call2_audio_out_window_g2

0x692b,	// (0x000425a4) popup_call2_audio_out_window_g3_ParamLimits

0x692b,	// (0x000425a4) popup_call2_audio_out_window_g3

0x0003,

0xf4cf,	// (0x0004b148) popup_call2_audio_out_window_g_ParamLimits

0xf4cf,	// (0x0004b148) popup_call2_audio_out_window_g

0x6966,	// (0x000425df) popup_call2_audio_out_window_t1_ParamLimits

0x6966,	// (0x000425df) popup_call2_audio_out_window_t1

0x69c5,	// (0x0004263e) popup_call2_audio_out_window_t2_ParamLimits

0x69c5,	// (0x0004263e) popup_call2_audio_out_window_t2

0x6a19,	// (0x00042692) popup_call2_audio_out_window_t3_ParamLimits

0x6a19,	// (0x00042692) popup_call2_audio_out_window_t3

0x6a2f,	// (0x000426a8) popup_call2_audio_out_window_t4_ParamLimits

0x6a2f,	// (0x000426a8) popup_call2_audio_out_window_t4

0x6a45,	// (0x000426be) popup_call2_audio_out_window_t5_ParamLimits

0x6a45,	// (0x000426be) popup_call2_audio_out_window_t5

0x0005,

0xf4d8,	// (0x0004b151) popup_call2_audio_out_window_t_ParamLimits

0xf4d8,	// (0x0004b151) popup_call2_audio_out_window_t

0x6aa9,	// (0x00042722) bg_popup_call2_in_pane_ParamLimits

0x6aa9,	// (0x00042722) bg_popup_call2_in_pane

0x6b05,	// (0x0004277e) popup_call2_audio_in_window_g1_ParamLimits

0x6b05,	// (0x0004277e) popup_call2_audio_in_window_g1

0x6b3d,	// (0x000427b6) popup_call2_audio_in_window_g2_ParamLimits

0x6b3d,	// (0x000427b6) popup_call2_audio_in_window_g2

0x6b75,	// (0x000427ee) popup_call2_audio_in_window_g3_ParamLimits

0x6b75,	// (0x000427ee) popup_call2_audio_in_window_g3

0x0003,

0xf4e5,	// (0x0004b15e) popup_call2_audio_in_window_g_ParamLimits

0xf4e5,	// (0x0004b15e) popup_call2_audio_in_window_g

0x6bcd,	// (0x00042846) popup_call2_audio_in_window_t1_ParamLimits

0x6bcd,	// (0x00042846) popup_call2_audio_in_window_t1

0x6c4d,	// (0x000428c6) popup_call2_audio_in_window_t2_ParamLimits

0x6c4d,	// (0x000428c6) popup_call2_audio_in_window_t2

0x6ccd,	// (0x00042946) popup_call2_audio_in_window_t3_ParamLimits

0x6ccd,	// (0x00042946) popup_call2_audio_in_window_t3

0x6ce7,	// (0x00042960) popup_call2_audio_in_window_t4_ParamLimits

0x6ce7,	// (0x00042960) popup_call2_audio_in_window_t4

0x6cf9,	// (0x00042972) popup_call2_audio_in_window_t5_ParamLimits

0x6cf9,	// (0x00042972) popup_call2_audio_in_window_t5

0x6d0b,	// (0x00042984) popup_call2_audio_in_window_t6_ParamLimits

0x6d0b,	// (0x00042984) popup_call2_audio_in_window_t6

0x0005,

0xf4ee,	// (0x0004b167) popup_call2_audio_in_window_t_ParamLimits

0xf4ee,	// (0x0004b167) popup_call2_audio_in_window_t

0x102b,	// (0x0003cca4) bg_popup_call2_in_pane_g1

0x6f0c,	// (0x00042b85) popup_cale_lunar_info_window_t4

0x0003,

0xf569,	// (0x0004b1e2) popup_cale_lunar_info_window_t

0x1033,	// (0x0003ccac) bg_popup_call2_rect_pane_ParamLimits

0x1033,	// (0x0003ccac) bg_popup_call2_rect_pane

0x0dd8,	// (0x0003ca51) call2_cli_visual_graphic_pane

0x0dd8,	// (0x0003ca51) call2_cli_visual_text_pane

0xc3cf,	// (0x00048048) smil_status_volume_pane_g3

0x0002,

0x104b,	// (0x0003ccc4) call2_cli_visual_graphic_pane_g1

0x104b,	// (0x0003ccc4) call2_cli_visual_graphic_pane_g2

0x104b,	// (0x0003ccc4) call2_cli_visual_graphic_pane_g3

0x0002,

0xf4fb,	// (0x0004b174) call2_cli_visual_graphic_pane_g

0x6d38,	// (0x000429b1) bg_popup_call2_rect_pane_g1

0x11f7,	// (0x0003ce70) bg_popup_call2_rect_pane_g2

0x6d40,	// (0x000429b9) bg_popup_call2_rect_pane_g3

0x6d48,	// (0x000429c1) bg_popup_call2_rect_pane_g4

0x6d50,	// (0x000429c9) bg_popup_call2_rect_pane_g5

0x6d58,	// (0x000429d1) bg_popup_call2_rect_pane_g6

0x6d60,	// (0x000429d9) bg_popup_call2_rect_pane_g7

0x6d68,	// (0x000429e1) bg_popup_call2_rect_pane_g8

0x6d70,	// (0x000429e9) bg_popup_call2_rect_pane_g9

0x0008,

0xf502,	// (0x0004b17b) bg_popup_call2_rect_pane_g

0x6d78,	// (0x000429f1) bg_popup_call2_bubble_pane_g1

0x6d80,	// (0x000429f9) bg_popup_call2_bubble_pane_g2

0x6d88,	// (0x00042a01) bg_popup_call2_bubble_pane_g3

0x6d90,	// (0x00042a09) bg_popup_call2_bubble_pane_g4

0x6d98,	// (0x00042a11) bg_popup_call2_bubble_pane_g5

0x6da0,	// (0x00042a19) bg_popup_call2_bubble_pane_g6

0x6da8,	// (0x00042a21) bg_popup_call2_bubble_pane_g7

0x6db0,	// (0x00042a29) bg_popup_call2_bubble_pane_g8

0x6db8,	// (0x00042a31) bg_popup_call2_bubble_pane_g9

0x0008,

0xf515,	// (0x0004b18e) bg_popup_call2_bubble_pane_g

0x3fb7,	// (0x0003fc30) aid_cale_week_size_cell_pane

0x4567,	// (0x000401e0) aid_cams_cif_uncrop_pane_ParamLimits

0x4567,	// (0x000401e0) aid_cams_cif_uncrop_pane

0x46bd,	// (0x00040336) aid_cams_size_cell_ParamLimits

0x46bd,	// (0x00040336) aid_cams_size_cell

0x46d1,	// (0x0004034a) grid_cams_pane_ParamLimits

0x46eb,	// (0x00040364) linegrid_cams_pane_ParamLimits

0x47d1,	// (0x0004044a) call_video_pane_t1

0x47ef,	// (0x00040468) call_video_pane_t2

0x0001,

0xf222,	// (0x0004ae9b) call_video_pane_t

0x4c15,	// (0x0004088e) aid_cale_month_size_cell_pane_ParamLimits

0x4c15,	// (0x0004088e) aid_cale_month_size_cell_pane

0xf5ad,	// (0x0004b226) smil_status_volume_pane_g

0xc3dc,	// (0x00048055) volume_smil_pane_ParamLimits

0xc103,	// (0x00047d7c) aid_popup2_width_pane

0x3f1c,	// (0x0003fb95) cell_qdial_pane_g4_ParamLimits

0x3f1c,	// (0x0003fb95) cell_qdial_pane_g4

0x57e3,	// (0x0004145c) aid_blid_cardinal_pane_ParamLimits

0x57ef,	// (0x00041468) aid_blid_destination_pane_ParamLimits

0x57ef,	// (0x00041468) aid_blid_destination_pane

0x1033,	// (0x0003ccac) bg_popup_call_poc_act_pane_ParamLimits

0x1033,	// (0x0003ccac) bg_popup_call_poc_act_pane

0x1033,	// (0x0003ccac) bg_popup_call_poc_inact_pane_ParamLimits

0x1033,	// (0x0003ccac) bg_popup_call_poc_inact_pane

0x6dc8,	// (0x00042a41) bg_popup_call_poc_act_pane_g1

0x6dd0,	// (0x00042a49) bg_popup_call_poc_act_pane_g2

0x6dd8,	// (0x00042a51) bg_popup_call_poc_act_pane_g3

0x6d90,	// (0x00042a09) bg_popup_call_poc_act_pane_g4

0x6d98,	// (0x00042a11) bg_popup_call_poc_act_pane_g5

0x6de0,	// (0x00042a59) bg_popup_call_poc_act_pane_g6

0x6da8,	// (0x00042a21) bg_popup_call_poc_act_pane_g7

0x6de8,	// (0x00042a61) bg_popup_call_poc_act_pane_g8

0x0dd8,	// (0x0003ca51) main_usb_pane

0xc383,	// (0x00047ffc) popup_cale_lunar_info_window

0x4abb,	// (0x00040734) im_reading_pane_t1_ParamLimits

0x13d5,	// (0x0003d04e) list_im_pane_ParamLimits

0x13e6,	// (0x0003d05f) scroll_pane_cp07_ParamLimits

0x0dd8,	// (0x0003ca51) grid_highlight_pane_cp012

0x1033,	// (0x0003ccac) mup_scale_pane_ParamLimits

0x1e95,	// (0x0003db0e) main_usb_pane_g1_ParamLimits

0x1e95,	// (0x0003db0e) main_usb_pane_g1

0x6e48,	// (0x00042ac1) main_usb_pane_g2_ParamLimits

0x6e48,	// (0x00042ac1) main_usb_pane_g2

0x0001,

0xf552,	// (0x0004b1cb) main_usb_pane_g_ParamLimits

0xf552,	// (0x0004b1cb) main_usb_pane_g

0x6e5e,	// (0x00042ad7) main_usb_pane_t1_ParamLimits

0x6e5e,	// (0x00042ad7) main_usb_pane_t1

0x6e70,	// (0x00042ae9) main_usb_pane_t2_ParamLimits

0x6e70,	// (0x00042ae9) main_usb_pane_t2

0x6e82,	// (0x00042afb) main_usb_pane_t3_ParamLimits

0x6e82,	// (0x00042afb) main_usb_pane_t3

0x6e94,	// (0x00042b0d) main_usb_pane_t4_ParamLimits

0x6e94,	// (0x00042b0d) main_usb_pane_t4

0x6ea6,	// (0x00042b1f) main_usb_pane_t5_ParamLimits

0x6ea6,	// (0x00042b1f) main_usb_pane_t5

0x6eb8,	// (0x00042b31) main_usb_pane_t6_ParamLimits

0x6eb8,	// (0x00042b31) main_usb_pane_t6

0x0005,

0xf557,	// (0x0004b1d0) main_usb_pane_t_ParamLimits

0x5792,	// (0x0004140b) aid_text_placing

0x579b,	// (0x00041414) main_location2_pane_t1_ParamLimits

0x57ad,	// (0x00041426) main_location2_pane_t2_ParamLimits

0x57bf,	// (0x00041438) main_location2_pane_t3_ParamLimits

0x57d1,	// (0x0004144a) main_location2_pane_t4_ParamLimits

0x57d1,	// (0x0004144a) main_location2_pane_t4

0xf35e,	// (0x0004afd7) main_location2_pane_t_ParamLimits

0x106f,	// (0x0003cce8) find_pinb_pane_g2_ParamLimits

0x106f,	// (0x0003cce8) find_pinb_pane_g2

0x0001,

0xf0da,	// (0x0004ad53) find_pinb_pane_g_ParamLimits

0xf0da,	// (0x0004ad53) find_pinb_pane_g

0x107b,	// (0x0003ccf4) find_pinb_pane_t1_ParamLimits

0x108d,	// (0x0003cd06) find_pinb_pane_t2_ParamLimits

0xf0df,	// (0x0004ad58) find_pinb_pane_t_ParamLimits

0x0dd8,	// (0x0003ca51) main_call3_pane

0x50fc,	// (0x00040d75) cale_month_day_heading_pane_t1_ParamLimits

0x513e,	// (0x00040db7) cale_month_day_heading_pane_t2_ParamLimits

0x5173,	// (0x00040dec) cale_month_day_heading_pane_t3_ParamLimits

0x51a8,	// (0x00040e21) cale_month_day_heading_pane_t4_ParamLimits

0x51e5,	// (0x00040e5e) cale_month_day_heading_pane_t5_ParamLimits

0x522a,	// (0x00040ea3) cale_month_day_heading_pane_t6_ParamLimits

0x526f,	// (0x00040ee8) cale_month_day_heading_pane_t7_ParamLimits

0xf25a,	// (0x0004aed3) cale_month_day_heading_pane_t_ParamLimits

0x1630,	// (0x0003d2a9) smil_status_volume_pane

0x5c22,	// (0x0004189b) postcard_address_pane_ParamLimits

0x5c22,	// (0x0004189b) postcard_address_pane

0x5c34,	// (0x000418ad) postcard_message_pane_ParamLimits

0x5c34,	// (0x000418ad) postcard_message_pane

0x6d1d,	// (0x00042996) call2_cli_visual_pane_t1_ParamLimits

0x6d1d,	// (0x00042996) call2_cli_visual_pane_t1

0x7714,	// (0x0004338d) postcard_message_pane_t1_ParamLimits

0x7714,	// (0x0004338d) postcard_message_pane_t1

0x76fc,	// (0x00043375) postcard_address_pane_t1_ParamLimits

0x76fc,	// (0x00043375) postcard_address_pane_t1

0x76e8,	// (0x00043361) popup_call3_audio_in_window_ParamLimits

0x76e8,	// (0x00043361) popup_call3_audio_in_window

0x7573,	// (0x000431ec) bg_popup_call3_in_pane_ParamLimits

0x7573,	// (0x000431ec) bg_popup_call3_in_pane

0x75e9,	// (0x00043262) popup_call3_audio_in_window_g1_ParamLimits

0x75e9,	// (0x00043262) popup_call3_audio_in_window_g1

0x7609,	// (0x00043282) popup_call3_audio_in_window_g2_ParamLimits

0x7609,	// (0x00043282) popup_call3_audio_in_window_g2

0x7629,	// (0x000432a2) popup_call3_audio_in_window_g3_ParamLimits

0x7629,	// (0x000432a2) popup_call3_audio_in_window_g3

0x0003,

0xf5b4,	// (0x0004b22d) popup_call3_audio_in_window_g_ParamLimits

0xf5b4,	// (0x0004b22d) popup_call3_audio_in_window_g

0x765a,	// (0x000432d3) popup_call3_audio_in_window_t1_ParamLimits

0x765a,	// (0x000432d3) popup_call3_audio_in_window_t1

0x7698,	// (0x00043311) popup_call3_audio_in_window_t2_ParamLimits

0x7698,	// (0x00043311) popup_call3_audio_in_window_t2

0x76d6,	// (0x0004334f) popup_call3_audio_in_window_t3_ParamLimits

0x76d6,	// (0x0004334f) popup_call3_audio_in_window_t3

0x0002,

0xf5bd,	// (0x0004b236) popup_call3_audio_in_window_t_ParamLimits

0xf5bd,	// (0x0004b236) popup_call3_audio_in_window_t

0x12d2,	// (0x0003cf4b) bg_popup_call3_rect_pane

0x6d38,	// (0x000429b1) bg_popup_call3_rect_pane_g1

0x11f7,	// (0x0003ce70) bg_popup_call3_rect_pane_g2

0x6d40,	// (0x000429b9) bg_popup_call3_rect_pane_g3

0x6d48,	// (0x000429c1) bg_popup_call3_rect_pane_g4

0x6d50,	// (0x000429c9) bg_popup_call3_rect_pane_g5

0x6d58,	// (0x000429d1) bg_popup_call3_rect_pane_g6

0x6d60,	// (0x000429d9) bg_popup_call3_rect_pane_g7

0x09ad,	// (0x0003c626) mup_visualizer_osc_pane

0x09ad,	// (0x0003c626) mup_visualizer_spec_pane

0x75a3,	// (0x0004321c) call3_video_qcif_pane_ParamLimits

0x75a3,	// (0x0004321c) call3_video_qcif_pane

0x75b6,	// (0x0004322f) call3_video_qcif_uncrop_pane_ParamLimits

0x75b6,	// (0x0004322f) call3_video_qcif_uncrop_pane

0x75c4,	// (0x0004323d) call3_video_subqcif_pane_ParamLimits

0x75c4,	// (0x0004323d) call3_video_subqcif_pane

0x75d8,	// (0x00043251) call3_video_subqcif_uncrop_pane_ParamLimits

0x75d8,	// (0x00043251) call3_video_subqcif_uncrop_pane

0x7649,	// (0x000432c2) popup_call3_audio_in_window_g4_ParamLimits

0x7649,	// (0x000432c2) popup_call3_audio_in_window_g4

0x09ad,	// (0x0003c626) mup_spec_half_pane

0x09ad,	// (0x0003c626) mup_spec_half_pane_cp

0x09ad,	// (0x0003c626) mup_osc_middle_pane

0x1308,	// (0x0003cf81) mup_visualizer_osc_pane_g1

0x7526,	// (0x0004319f) mup_spec_bar_pane_ParamLimits

0x7526,	// (0x0004319f) mup_spec_bar_pane

0x1308,	// (0x0003cf81) mup_spec_bar_pane_g1

0x1308,	// (0x0003cf81) mup_spec_bar_pane_g2

0x0001,

0xf3d8,	// (0x0004b051) mup_spec_bar_pane_g

0x3fb7,	// (0x0003fc30) aid_cale_week_size_cell_pane_ParamLimits

0x3fd1,	// (0x0003fc4a) bg_cale_heading_pane_ParamLimits

0x1234,	// (0x0003cead) bg_cale_pane_cp01_ParamLimits

0x3fe9,	// (0x0003fc62) cale_week_corner_pane_ParamLimits

0x4008,	// (0x0003fc81) cale_week_day_heading_pane_ParamLimits

0x4025,	// (0x0003fc9e) cale_week_scroll_pane_g1_ParamLimits

0x4038,	// (0x0003fcb1) cale_week_scroll_pane_g2_ParamLimits

0x4050,	// (0x0003fcc9) cale_week_scroll_pane_g3_ParamLimits

0x4068,	// (0x0003fce1) cale_week_scroll_pane_g4_ParamLimits

0x4080,	// (0x0003fcf9) cale_week_scroll_pane_g5_ParamLimits

0x40a0,	// (0x0003fd19) cale_week_scroll_pane_g6_ParamLimits

0x40c0,	// (0x0003fd39) cale_week_scroll_pane_g7_ParamLimits

0x40e0,	// (0x0003fd59) cale_week_scroll_pane_g8_ParamLimits

0x4104,	// (0x0003fd7d) cale_week_scroll_pane_g9_ParamLimits

0x411c,	// (0x0003fd95) cale_week_scroll_pane_g10_ParamLimits

0x4134,	// (0x0003fdad) cale_week_scroll_pane_g11_ParamLimits

0x414c,	// (0x0003fdc5) cale_week_scroll_pane_g12_ParamLimits

0x4164,	// (0x0003fddd) cale_week_scroll_pane_g13_ParamLimits

0x4164,	// (0x0003fddd) cale_week_scroll_pane_g14_ParamLimits

0x4164,	// (0x0003fddd) cale_week_scroll_pane_g15_ParamLimits

0xf16b,	// (0x0004ade4) cale_week_scroll_pane_g_ParamLimits

0x41a0,	// (0x0003fe19) cale_week_time_pane_ParamLimits

0x41c4,	// (0x0003fe3d) grid_cale_week_pane_ParamLimits

0x1251,	// (0x0003ceca) listscroll_cale_week_pane_t1

0x1263,	// (0x0003cedc) scroll_pane_cp08_ParamLimits

0x4c75,	// (0x000408ee) cale_month_corner_pane_ParamLimits

0x1606,	// (0x0003d27f) cale_month_pane_t1

0x508f,	// (0x00040d08) cale_month_week_pane_ParamLimits

0x55e7,	// (0x00041260) popup_call_status_window_g1_ParamLimits

0x55fb,	// (0x00041274) popup_call_status_window_g2_ParamLimits

0x560f,	// (0x00041288) popup_call_status_window_g3_ParamLimits

0xf2e5,	// (0x0004af5e) popup_call_status_window_g_ParamLimits

0x19ba,	// (0x0003d633) aid_call2_pane

0x320a,	// (0x0003ee83) msg_header_pane_g1

0x5c22,	// (0x0004189b) postcard_address2_pane_ParamLimits

0x5c22,	// (0x0004189b) postcard_address2_pane

0x5c34,	// (0x000418ad) postcard_message2_pane_ParamLimits

0x5c34,	// (0x000418ad) postcard_message2_pane

0x74c3,	// (0x0004313c) message2_row_pane_ParamLimits

0x74c3,	// (0x0004313c) message2_row_pane

0x74e0,	// (0x00043159) address2_row_pane_ParamLimits

0x74e0,	// (0x00043159) address2_row_pane

0x74f3,	// (0x0004316c) postcard_message2_row_pane_g1

0x74fb,	// (0x00043174) postcard_message2_row_pane_t1

0x74f3,	// (0x0004316c) address2_row_pane_g1

0x74fb,	// (0x00043174) address2_row_pane_t1

0x44fe,	// (0x00040177) aid_size_cell_vorec

0x0dd8,	// (0x0003ca51) main_rss_pane

0x7509,	// (0x00043182) rss_list_single_pane_ParamLimits

0x7509,	// (0x00043182) rss_list_single_pane

0x7517,	// (0x00043190) rss_list_single_pane_t1

0x7517,	// (0x00043190) rss_list_single_pane_t2

0x0001,

0xf5a8,	// (0x0004b221) rss_list_single_pane_t

0x0dd8,	// (0x0003ca51) main_camera2_pane

0x0dd8,	// (0x0003ca51) main_video2_pane

0xc3f1,	// (0x0004806a) cams_zoom_pane_cp2_ParamLimits

0xc3f1,	// (0x0004806a) cams_zoom_pane_cp2

0xc3f1,	// (0x0004806a) image2_vga_pane_ParamLimits

0xc3f1,	// (0x0004806a) image2_vga_pane

0xec28,	// (0x0004a8a1) main_camera2_pane_g1_ParamLimits

0xec28,	// (0x0004a8a1) main_camera2_pane_g1

0xec28,	// (0x0004a8a1) main_camera2_pane_g2_ParamLimits

0xec28,	// (0x0004a8a1) main_camera2_pane_g2

0xec28,	// (0x0004a8a1) main_camera2_pane_g3_ParamLimits

0xec28,	// (0x0004a8a1) main_camera2_pane_g3

0xec28,	// (0x0004a8a1) main_camera2_pane_g4_ParamLimits

0xec28,	// (0x0004a8a1) main_camera2_pane_g4

0xec28,	// (0x0004a8a1) main_camera2_pane_g5_ParamLimits

0xec28,	// (0x0004a8a1) main_camera2_pane_g5

0xec28,	// (0x0004a8a1) main_camera2_pane_g6_ParamLimits

0xec28,	// (0x0004a8a1) main_camera2_pane_g6

0xec28,	// (0x0004a8a1) main_camera2_pane_g7_ParamLimits

0xec28,	// (0x0004a8a1) main_camera2_pane_g7

0xec28,	// (0x0004a8a1) main_camera2_pane_g8_ParamLimits

0xec28,	// (0x0004a8a1) main_camera2_pane_g8

0x0008,

0xf5c4,	// (0x0004b23d) main_camera2_pane_g_ParamLimits

0xf5c4,	// (0x0004b23d) main_camera2_pane_g

0x773e,	// (0x000433b7) main_camera2_pane_t1_ParamLimits

0x773e,	// (0x000433b7) main_camera2_pane_t1

0x773e,	// (0x000433b7) main_camera2_pane_t2_ParamLimits

0x773e,	// (0x000433b7) main_camera2_pane_t2

0x773e,	// (0x000433b7) main_camera2_pane_t3_ParamLimits

0x773e,	// (0x000433b7) main_camera2_pane_t3

0x773e,	// (0x000433b7) main_camera2_pane_t4_ParamLimits

0x773e,	// (0x000433b7) main_camera2_pane_t4

0x0006,

0xf5d7,	// (0x0004b250) main_camera2_pane_t_ParamLimits

0xf5d7,	// (0x0004b250) main_camera2_pane_t

0xc413,	// (0x0004808c) cams_zoom_pane_cp4_ParamLimits

0xc413,	// (0x0004808c) cams_zoom_pane_cp4

0x7752,	// (0x000433cb) image2_cif_pane_ParamLimits

0x7752,	// (0x000433cb) image2_cif_pane

0x1055,	// (0x0003ccce) image2_subqcif_pane_ParamLimits

0x1055,	// (0x0003ccce) image2_subqcif_pane

0x7760,	// (0x000433d9) main_video2_pane_g1_ParamLimits

0x7760,	// (0x000433d9) main_video2_pane_g1

0x7760,	// (0x000433d9) main_video2_pane_g2_ParamLimits

0x7760,	// (0x000433d9) main_video2_pane_g2

0x7760,	// (0x000433d9) main_video2_pane_g3_ParamLimits

0x7760,	// (0x000433d9) main_video2_pane_g3

0x7760,	// (0x000433d9) main_video2_pane_g4_ParamLimits

0x7760,	// (0x000433d9) main_video2_pane_g4

0x7760,	// (0x000433d9) main_video2_pane_g5_ParamLimits

0x7760,	// (0x000433d9) main_video2_pane_g5

0x7760,	// (0x000433d9) main_video2_pane_g6_ParamLimits

0x7760,	// (0x000433d9) main_video2_pane_g6

0x0005,

0xf5e6,	// (0x0004b25f) main_video2_pane_g_ParamLimits

0xf5e6,	// (0x0004b25f) main_video2_pane_g

0x776e,	// (0x000433e7) main_video2_pane_t1_ParamLimits

0x776e,	// (0x000433e7) main_video2_pane_t1

0x776e,	// (0x000433e7) main_video2_pane_t2_ParamLimits

0x776e,	// (0x000433e7) main_video2_pane_t2

0x776e,	// (0x000433e7) main_video2_pane_t3_ParamLimits

0x776e,	// (0x000433e7) main_video2_pane_t3

0x0002,

0xf5f3,	// (0x0004b26c) main_video2_pane_t_ParamLimits

0xf5f3,	// (0x0004b26c) main_video2_pane_t

0x6fab,	// (0x00042c24) call_muted_g2

0x0001,

0xf59a,	// (0x0004b213) call_muted_g

0x0dd8,	// (0x0003ca51) main_mup2_pane

0x230d,	// (0x0003df86) main_mup2_pane_g1_ParamLimits

0x230d,	// (0x0003df86) main_mup2_pane_g1

0x230d,	// (0x0003df86) main_mup2_pane_g2_ParamLimits

0x230d,	// (0x0003df86) main_mup2_pane_g2

0x1308,	// (0x0003cf81) main_mup_pane_g13_cp1

0x09ad,	// (0x0003c626) mup_volume_pane_cp1

0x230d,	// (0x0003df86) main_mup2_pane_g4_ParamLimits

0x230d,	// (0x0003df86) main_mup2_pane_g4

0x230d,	// (0x0003df86) main_mup2_pane_g5_ParamLimits

0x230d,	// (0x0003df86) main_mup2_pane_g5

0x230d,	// (0x0003df86) main_mup2_pane_g6_ParamLimits

0x230d,	// (0x0003df86) main_mup2_pane_g6

0x230d,	// (0x0003df86) main_mup2_pane_g7_ParamLimits

0x230d,	// (0x0003df86) main_mup2_pane_g7

0x0006,

0xf5fa,	// (0x0004b273) main_mup2_pane_g_ParamLimits

0xf5fa,	// (0x0004b273) main_mup2_pane_g

0x231b,	// (0x0003df94) main_mup2_pane_t1_ParamLimits

0x231b,	// (0x0003df94) main_mup2_pane_t1

0x231b,	// (0x0003df94) main_mup2_pane_t2_ParamLimits

0x231b,	// (0x0003df94) main_mup2_pane_t2

0x231b,	// (0x0003df94) main_mup2_pane_t3_ParamLimits

0x231b,	// (0x0003df94) main_mup2_pane_t3

0x231b,	// (0x0003df94) main_mup2_pane_t4_ParamLimits

0x231b,	// (0x0003df94) main_mup2_pane_t4

0x231b,	// (0x0003df94) main_mup2_pane_t5_ParamLimits

0x231b,	// (0x0003df94) main_mup2_pane_t5

0x231b,	// (0x0003df94) main_mup2_pane_t6_ParamLimits

0x231b,	// (0x0003df94) main_mup2_pane_t6

0x0005,

0xf609,	// (0x0004b282) main_mup2_pane_t_ParamLimits

0xf609,	// (0x0004b282) main_mup2_pane_t

0x22ff,	// (0x0003df78) mup2_visualizer_pane_ParamLimits

0x22ff,	// (0x0003df78) mup2_visualizer_pane

0x22ff,	// (0x0003df78) mup_progress_pane_cp_ParamLimits

0x22ff,	// (0x0003df78) mup_progress_pane_cp

0x7782,	// (0x000433fb) mup_volume_pane_cp_ParamLimits

0x7782,	// (0x000433fb) mup_volume_pane_cp

0x10ae,	// (0x0003cd27) mup2_visualizer_pane_g1_ParamLimits

0x10ae,	// (0x0003cd27) mup2_visualizer_pane_g1

0x10bc,	// (0x0003cd35) mup2_visualizer_pane_g2_ParamLimits

0x10bc,	// (0x0003cd35) mup2_visualizer_pane_g2

0x10bc,	// (0x0003cd35) mup2_visualizer_pane_g3_ParamLimits

0x10bc,	// (0x0003cd35) mup2_visualizer_pane_g3

0x0002,

0xf0e4,	// (0x0004ad5d) mup2_visualizer_pane_g_ParamLimits

0xf0e4,	// (0x0004ad5d) mup2_visualizer_pane_g

0x1fd0,	// (0x0003dc49) aid_size_cell_fmradio

0x718e,	// (0x00042e07) aid_height_parent_landcape

0x1464,	// (0x0003d0dd) wml_content_pane_cp

0x146c,	// (0x0003d0e5) wml_tabs_pane

0x1475,	// (0x0003d0ee) popup_wml_miniature_window

0x147d,	// (0x0003d0f6) scroll_pane_cp021

0x1491,	// (0x0003d10a) wml_content_pane_comp8

0x0dd8,	// (0x0003ca51) bg_popup_sub_pane_cp05

0x7798,	// (0x00043411) popup_wml_miniature_window_g1

0x77a0,	// (0x00043419) wml_miniature_view_pane

0x77a8,	// (0x00043421) aid_size_wml_view

0x77b0,	// (0x00043429) wml_miniature_view_pane_g1

0x77b9,	// (0x00043432) wml_miniature_view_pane_g2

0x77c2,	// (0x0004343b) wml_miniature_view_pane_g3

0x77ca,	// (0x00043443) wml_miniature_view_pane_g4

0x77d2,	// (0x0004344b) wml_miniature_view_pane_g5

0x77da,	// (0x00043453) wml_miniature_view_pane_g6

0x77e2,	// (0x0004345b) wml_miniature_view_pane_g7

0x77ea,	// (0x00043463) wml_miniature_view_pane_g8

0x0007,

0xf616,	// (0x0004b28f) wml_miniature_view_pane_g

0x77f2,	// (0x0004346b) background_graphic_ParamLimits

0x77f2,	// (0x0004346b) background_graphic

0x77fe,	// (0x00043477) wml_tabs_2_pane

0x7807,	// (0x00043480) wml_tabs_3_pane_ParamLimits

0x7807,	// (0x00043480) wml_tabs_3_pane

0x7819,	// (0x00043492) wml_tabs_4_pane_ParamLimits

0x7819,	// (0x00043492) wml_tabs_4_pane

0x782f,	// (0x000434a8) wml_tabs_5_pane_ParamLimits

0x782f,	// (0x000434a8) wml_tabs_5_pane

0x7849,	// (0x000434c2) wml_tabs_pane_g2_ParamLimits

0x7849,	// (0x000434c2) wml_tabs_pane_g2

0x785e,	// (0x000434d7) wml_tabs_pane_g3_ParamLimits

0x785e,	// (0x000434d7) wml_tabs_pane_g3

0x7873,	// (0x000434ec) wml_tabs_2_active_pane_ParamLimits

0x7873,	// (0x000434ec) wml_tabs_2_active_pane

0x7873,	// (0x000434ec) wml_tabs_2_passive_pane_ParamLimits

0x7873,	// (0x000434ec) wml_tabs_2_passive_pane

0x7881,	// (0x000434fa) wml_tabs_3_active_pane_cp_ParamLimits

0x7881,	// (0x000434fa) wml_tabs_3_active_pane_cp

0x7896,	// (0x0004350f) wml_tabs_3_passive_pane_ParamLimits

0x7896,	// (0x0004350f) wml_tabs_3_passive_pane

0x78a9,	// (0x00043522) wml_tabs_3_passive_pane_cp_ParamLimits

0x78a9,	// (0x00043522) wml_tabs_3_passive_pane_cp

0x78c0,	// (0x00043539) tabs_4_active_pane

0x78c8,	// (0x00043541) tabs_4_passive_pane

0x78d2,	// (0x0004354b) tabs_4_passive_pane_cp

0x78da,	// (0x00043553) tabs_4_passive_pane_cp2

0x6dc0,	// (0x00042a39) aid_height_text

0x22ff,	// (0x0003df78) mup_volume_cont_pane_ParamLimits

0x22ff,	// (0x0003df78) mup_volume_cont_pane

0x09ad,	// (0x0003c626) aid_size_cell_pinb

0x09ad,	// (0x0003c626) aid_size_list_pinb

0x22ff,	// (0x0003df78) mup2_volume_cont_pane_ParamLimits

0x22ff,	// (0x0003df78) mup2_volume_cont_pane

0xc421,	// (0x0004809a) mup2_volume_cont_pane_g1_ParamLimits

0xc421,	// (0x0004809a) mup2_volume_cont_pane_g1

0x39af,	// (0x0003f628) aid_size_cell_touch_ParamLimits

0x39af,	// (0x0003f628) aid_size_cell_touch

0x3bdc,	// (0x0003f855) touch_pane_ParamLimits

0x3bdc,	// (0x0003f855) touch_pane

0x09ad,	// (0x0003c626) main_rss2_pane

0x78ed,	// (0x00043566) listscroll_rss2_pane

0x78f6,	// (0x0004356f) rss2_navigation_pane

0x78fe,	// (0x00043577) list_rss2_pane

0x1ad3,	// (0x0003d74c) scroll_pane_cp22

0x7906,	// (0x0004357f) rss2_navigation_pane_g1

0x790f,	// (0x00043588) rss2_navigation_pane_g2

0x7917,	// (0x00043590) rss2_navigation_pane_g3

0x0002,

0xf627,	// (0x0004b2a0) rss2_navigation_pane_g

0x791f,	// (0x00043598) rss2_navigation_pane_t1

0x792d,	// (0x000435a6) rss2_list_single_pane_ParamLimits

0x792d,	// (0x000435a6) rss2_list_single_pane

0x7943,	// (0x000435bc) rss2_list_single_pane_t2

0x7951,	// (0x000435ca) rss2_list_single_pane_t3_ParamLimits

0x7951,	// (0x000435ca) rss2_list_single_pane_t3

0x796e,	// (0x000435e7) rss2_list_single_pane_t4

0x54b7,	// (0x00041130) smil_status_pane_g1

0x1055,	// (0x0003ccce) main_image2_pane_ParamLimits

0x1055,	// (0x0003ccce) main_image2_pane

0xec28,	// (0x0004a8a1) main_camera2_pane_g9_ParamLimits

0xec28,	// (0x0004a8a1) main_camera2_pane_g9

0x773e,	// (0x000433b7) main_camera2_pane_t5_ParamLimits

0x773e,	// (0x000433b7) main_camera2_pane_t5

0xc3ff,	// (0x00048078) main_camera2_pane_t6_ParamLimits

0xc3ff,	// (0x00048078) main_camera2_pane_t6

0x797c,	// (0x000435f5) main_image2_pane_g1_ParamLimits

0x797c,	// (0x000435f5) main_image2_pane_g1

0x5e5c,	// (0x00041ad5) smil2_video_pane_ParamLimits

0x5e5c,	// (0x00041ad5) smil2_video_pane

0xc11f,	// (0x00047d98) aid_zoom_text_primary_cp

0xc15e,	// (0x00047dd7) popup_preview_fixed_window

0x13cd,	// (0x0003d046) im_reading_pane_g1

0x7730,	// (0x000433a9) cams2_bc_adjust_pane_cp_ParamLimits

0x7730,	// (0x000433a9) cams2_bc_adjust_pane_cp

0x22ff,	// (0x0003df78) cams2_bc_adjust_pane_ParamLimits

0x22ff,	// (0x0003df78) cams2_bc_adjust_pane

0x1308,	// (0x0003cf81) cams2_bc_adjust_pane_g1

0x09ad,	// (0x0003c626) cams2_slider_pane

0x1308,	// (0x0003cf81) cams2_slider_pane_g1

0x1308,	// (0x0003cf81) cams2_slider_pane_g2

0x0006,

0xf62e,	// (0x0004b2a7) cams2_slider_pane_g

0x3ca5,	// (0x0003f91e) calc_display_pane_ParamLimits

0x3cca,	// (0x0003f943) calc_paper_pane_ParamLimits

0x3ced,	// (0x0003f966) grid_calc_pane_ParamLimits

0xc280,	// (0x00047ef9) popup_clock_digital_window_t1_ParamLimits

0x1f6d,	// (0x0003dbe6) main_image_pane_t1

0x3c87,	// (0x0003f900) aid_size_cell_calc_ParamLimits

0x3c87,	// (0x0003f900) aid_size_cell_calc

0x71f4,	// (0x00042e6d) popup_blid_sat_info2_window_ParamLimits

0x71f4,	// (0x00042e6d) popup_blid_sat_info2_window

0x7992,	// (0x0004360b) aid_size_cell_blid

0x7752,	// (0x000433cb) bg_popup_window_pane_cp07

0x79af,	// (0x00043628) grid_popup_blid_pane

0x79b9,	// (0x00043632) heading_pane_cp05_ParamLimits

0x79b9,	// (0x00043632) heading_pane_cp05

0xc4ab,	// (0x00048124) cell_popup_blid_pane_ParamLimits

0xc4ab,	// (0x00048124) cell_popup_blid_pane

0xc4cf,	// (0x00048148) cell_popup_blid_pane_g1

0xc4d7,	// (0x00048150) cell_popup_blid_pane_t1

0x22ff,	// (0x0003df78) mup2_indicator_pane_ParamLimits

0x22ff,	// (0x0003df78) mup2_indicator_pane

0x09ad,	// (0x0003c626) mup2_visualizer_osc_pane

0x7782,	// (0x000433fb) mup2_visualizer_spec_pane_ParamLimits

0x7782,	// (0x000433fb) mup2_visualizer_spec_pane

0x09ad,	// (0x0003c626) mup2_spec_half_pane

0x09ad,	// (0x0003c626) mup2_spec_half_pane_cp

0xc4e5,	// (0x0004815e) mup2_spec_bar_pane_ParamLimits

0xc4e5,	// (0x0004815e) mup2_spec_bar_pane

0x1308,	// (0x0003cf81) mup2_spec_bar_pane_g1

0xc504,	// (0x0004817d) mup2_spec_bar_pane_g2

0x0001,

0xf654,	// (0x0004b2cd) mup2_spec_bar_pane_g

0x09ad,	// (0x0003c626) mup2_osc_middle_pane

0x1308,	// (0x0003cf81) mup2_visualizer_osc_pane_g1

0x09e5,	// (0x0003c65e) popup_number_entry_window_t1_ParamLimits

0x09f8,	// (0x0003c671) popup_number_entry_window_t2_ParamLimits

0x0a0a,	// (0x0003c683) popup_number_entry_window_t3_ParamLimits

0x3c2e,	// (0x0003f8a7) popup_number_entry_window_t5_ParamLimits

0x3c2e,	// (0x0003f8a7) popup_number_entry_window_t5

0xf085,	// (0x0004acfe) popup_number_entry_window_t_ParamLimits

0x0a1c,	// (0x0003c695) text_title_cp2_ParamLimits

0xc349,	// (0x00047fc2) aid_hotspot_pointer_text2_pane

0xc36f,	// (0x00047fe8) main_viewer_pane_g9_ParamLimits

0xc36f,	// (0x00047fe8) main_viewer_pane_g9

0x1606,	// (0x0003d27f) cale_month_pane_t1_ParamLimits

0x1643,	// (0x0003d2bc) bg_cale_pane_ParamLimits

0x165b,	// (0x0003d2d4) list_cale_pane_ParamLimits

0x166c,	// (0x0003d2e5) listscroll_cale_day_pane_t1

0x167e,	// (0x0003d2f7) scroll_pane_cp09_ParamLimits

0x58bc,	// (0x00041535) main_mup_eq_pane_t1_ParamLimits

0x58bc,	// (0x00041535) main_mup_eq_pane_t1

0x58d6,	// (0x0004154f) main_mup_eq_pane_t2_ParamLimits

0x58d6,	// (0x0004154f) main_mup_eq_pane_t2

0x58f0,	// (0x00041569) main_mup_eq_pane_t3_ParamLimits

0x58f0,	// (0x00041569) main_mup_eq_pane_t3

0x590c,	// (0x00041585) main_mup_eq_pane_t4_ParamLimits

0x590c,	// (0x00041585) main_mup_eq_pane_t4

0x5928,	// (0x000415a1) main_mup_eq_pane_t5_ParamLimits

0x5928,	// (0x000415a1) main_mup_eq_pane_t5

0x5944,	// (0x000415bd) main_mup_eq_pane_t6_ParamLimits

0x5944,	// (0x000415bd) main_mup_eq_pane_t6

0x5958,	// (0x000415d1) main_mup_eq_pane_t7_ParamLimits

0x5958,	// (0x000415d1) main_mup_eq_pane_t7

0x596c,	// (0x000415e5) main_mup_eq_pane_t8_ParamLimits

0x596c,	// (0x000415e5) main_mup_eq_pane_t8

0x5980,	// (0x000415f9) main_mup_eq_pane_t9_ParamLimits

0x5980,	// (0x000415f9) main_mup_eq_pane_t9

0x599a,	// (0x00041613) main_mup_eq_pane_t10_ParamLimits

0x599a,	// (0x00041613) main_mup_eq_pane_t10

0x0009,

0xf3e4,	// (0x0004b05d) main_mup_eq_pane_t_ParamLimits

0xf3e4,	// (0x0004b05d) main_mup_eq_pane_t

0x5a49,	// (0x000416c2) mup_equalizer_pane_cp5_ParamLimits

0x5a5d,	// (0x000416d6) mup_equalizer_pane_cp6_ParamLimits

0x5a71,	// (0x000416ea) mup_equalizer_pane_cp7_ParamLimits

0x09ad,	// (0x0003c626) main_gallery_pane

0x7545,	// (0x000431be) smil2_volume_pane

0x754d,	// (0x000431c6) smil_status_volume_pane_g1_ParamLimits

0x7560,	// (0x000431d9) smil_status_volume_pane_g2_ParamLimits

0xc3cf,	// (0x00048048) smil_status_volume_pane_g3_ParamLimits

0xf5ad,	// (0x0004b226) smil_status_volume_pane_g_ParamLimits

0x7752,	// (0x000433cb) bg_popup_window_pane_cp07_ParamLimits

0x799a,	// (0x00043613) blid_firmament_pane

0x1055,	// (0x0003ccce) aid_size_cell_gallery_ParamLimits

0x1055,	// (0x0003ccce) aid_size_cell_gallery

0x1055,	// (0x0003ccce) grid_gallery_pane_ParamLimits

0x1055,	// (0x0003ccce) grid_gallery_pane

0x7752,	// (0x000433cb) cell_gallery_pane_ParamLimits

0x7752,	// (0x000433cb) cell_gallery_pane

0x1055,	// (0x0003ccce) bg_cell_gallery_focus_pane_ParamLimits

0x1055,	// (0x0003ccce) bg_cell_gallery_focus_pane

0x10ae,	// (0x0003cd27) cell_gallery_pane_g1_ParamLimits

0x10ae,	// (0x0003cd27) cell_gallery_pane_g1

0x10ae,	// (0x0003cd27) cell_gallery_pane_g2_ParamLimits

0x10ae,	// (0x0003cd27) cell_gallery_pane_g2

0x10ae,	// (0x0003cd27) cell_gallery_pane_g3_ParamLimits

0x10ae,	// (0x0003cd27) cell_gallery_pane_g3

0x10bc,	// (0x0003cd35) cell_gallery_pane_g4_ParamLimits

0x10bc,	// (0x0003cd35) cell_gallery_pane_g4

0x0003,

0xf659,	// (0x0004b2d2) cell_gallery_pane_g_ParamLimits

0xf659,	// (0x0004b2d2) cell_gallery_pane_g

0xc50e,	// (0x00048187) bg_cell_gallery_focus_pane_g1

0xc516,	// (0x0004818f) bg_cell_gallery_focus_pane_g2

0xc51e,	// (0x00048197) bg_cell_gallery_focus_pane_g3

0xc526,	// (0x0004819f) bg_cell_gallery_focus_pane_g4

0xc52e,	// (0x000481a7) bg_cell_gallery_focus_pane_g5

0xc536,	// (0x000481af) bg_cell_gallery_focus_pane_g6

0xc53e,	// (0x000481b7) bg_cell_gallery_focus_pane_g7

0xc546,	// (0x000481bf) bg_cell_gallery_focus_pane_g8

0x0007,

0xf662,	// (0x0004b2db) bg_cell_gallery_focus_pane_g

0xc54e,	// (0x000481c7) aid_firma_cardinal

0xc562,	// (0x000481db) blid_firmament_pane_t1

0xc579,	// (0x000481f2) blid_firmament_pane_t2

0xc590,	// (0x00048209) blid_firmament_pane_t3

0xc5a7,	// (0x00048220) blid_firmament_pane_t4

0x0003,

0xf673,	// (0x0004b2ec) blid_firmament_pane_t

0xc5be,	// (0x00048237) blid_sat_info_pane

0x1308,	// (0x0003cf81) blid_sat_info_pane_g1

0x1308,	// (0x0003cf81) blid_sat_info_pane_g2

0x0001,

0xf3d8,	// (0x0004b051) blid_sat_info_pane_g

0xc5ce,	// (0x00048247) blid_sat_info_pane_t1

0xc5dc,	// (0x00048255) smil2_volume_content_pane

0xc5e5,	// (0x0004825e) smil2_volume_pane_g1

0x232f,	// (0x0003dfa8) smil2_volume_content_pane_g1

0xc5ed,	// (0x00048266) smil2_volume_content_pane_g2

0xc5f6,	// (0x0004826f) smil2_volume_content_pane_g3

0xc5ff,	// (0x00048278) smil2_volume_content_pane_g4

0xc608,	// (0x00048281) smil2_volume_content_pane_g5

0xc611,	// (0x0004828a) smil2_volume_content_pane_g6

0xc61a,	// (0x00048293) smil2_volume_content_pane_g7

0xc623,	// (0x0004829c) smil2_volume_content_pane_g8

0xc62c,	// (0x000482a5) smil2_volume_content_pane_g9

0xc635,	// (0x000482ae) smil2_volume_content_pane_g10

0x0009,

0xf67c,	// (0x0004b2f5) smil2_volume_content_pane_g

0x4278,	// (0x0003fef1) cale_week_day_heading_pane_t1_ParamLimits

0x42a2,	// (0x0003ff1b) cale_week_day_heading_pane_t2_ParamLimits

0x42d1,	// (0x0003ff4a) cale_week_day_heading_pane_t3_ParamLimits

0x4300,	// (0x0003ff79) cale_week_day_heading_pane_t4_ParamLimits

0x432f,	// (0x0003ffa8) cale_week_day_heading_pane_t5_ParamLimits

0x4366,	// (0x0003ffdf) cale_week_day_heading_pane_t6_ParamLimits

0x439d,	// (0x00040016) cale_week_day_heading_pane_t7_ParamLimits

0xf18c,	// (0x0004ae05) cale_week_day_heading_pane_t_ParamLimits

0x1280,	// (0x0003cef9) bg_cale_side_pane_ParamLimits

0x43c7,	// (0x00040040) cale_week_time_pane_t1_ParamLimits

0x43e1,	// (0x0004005a) cale_week_time_pane_t2_ParamLimits

0x43fb,	// (0x00040074) cale_week_time_pane_t3_ParamLimits

0x4415,	// (0x0004008e) cale_week_time_pane_t4_ParamLimits

0x442f,	// (0x000400a8) cale_week_time_pane_t5_ParamLimits

0x4449,	// (0x000400c2) cale_week_time_pane_t6_ParamLimits

0x4463,	// (0x000400dc) cale_week_time_pane_t7_ParamLimits

0x447d,	// (0x000400f6) cale_week_time_pane_t8_ParamLimits

0xf19b,	// (0x0004ae14) cale_week_time_pane_t_ParamLimits

0x449d,	// (0x00040116) cell_cale_week_pane_g2_ParamLimits

0x1280,	// (0x0003cef9) bg_cale_side_pane_cp01_ParamLimits

0x52bc,	// (0x00040f35) cale_month_week_pane_t1_ParamLimits

0x52d5,	// (0x00040f4e) cale_month_week_pane_t2_ParamLimits

0x52ee,	// (0x00040f67) cale_month_week_pane_t3_ParamLimits

0x5307,	// (0x00040f80) cale_month_week_pane_t4_ParamLimits

0x5320,	// (0x00040f99) cale_month_week_pane_t5_ParamLimits

0x5339,	// (0x00040fb2) cale_month_week_pane_t6_ParamLimits

0xf269,	// (0x0004aee2) cale_month_week_pane_t_ParamLimits

0xc200,	// (0x00047e79) cell_cale_month_pane_g1_ParamLimits

0x09ad,	// (0x0003c626) main_cale_event_viewer_pane

0x09ad,	// (0x0003c626) listscroll_cale_event_viewer_pane

0xc63e,	// (0x000482b7) list_cale_ev_pane

0xc646,	// (0x000482bf) scroll_pane_cp023

0xc652,	// (0x000482cb) field_cale_ev_pane_ParamLimits

0xc652,	// (0x000482cb) field_cale_ev_pane

0xc670,	// (0x000482e9) field_cale_ev_content_pane_ParamLimits

0xc670,	// (0x000482e9) field_cale_ev_content_pane

0xc67c,	// (0x000482f5) field_cale_ev_pane_g1_ParamLimits

0xc67c,	// (0x000482f5) field_cale_ev_pane_g1

0xc688,	// (0x00048301) field_cale_ev_pane_g2_ParamLimits

0xc688,	// (0x00048301) field_cale_ev_pane_g2

0xc6a0,	// (0x00048319) field_cale_ev_pane_g3_ParamLimits

0xc6a0,	// (0x00048319) field_cale_ev_pane_g3

0x0002,

0xf691,	// (0x0004b30a) field_cale_ev_pane_g_ParamLimits

0xf691,	// (0x0004b30a) field_cale_ev_pane_g

0xc6b8,	// (0x00048331) field_cale_ev_pane_t1_ParamLimits

0xc6b8,	// (0x00048331) field_cale_ev_pane_t1

0xc6cf,	// (0x00048348) field_cale_ev_content_pane_t1_ParamLimits

0xc6cf,	// (0x00048348) field_cale_ev_content_pane_t1

0x1e53,	// (0x0003dacc) bg_button_pane_cp01

0x3fa5,	// (0x0003fc1e) listscroll_cale_week_pane_ParamLimits

0x122b,	// (0x0003cea4) popup_toolbar_window_cp01

0x1251,	// (0x0003ceca) listscroll_cale_week_pane_t1_ParamLimits

0x3fa5,	// (0x0003fc1e) listscroll_cale_day_pane_ParamLimits

0x122b,	// (0x0003cea4) popup_toolbar_window_cp02

0x166c,	// (0x0003d2e5) listscroll_cale_day_pane_t1_ParamLimits

0x3fa5,	// (0x0003fc1e) main_cale_month_pane_ParamLimits

0xc3ba,	// (0x00048033) popup_toolbar_window_cp03_ParamLimits

0xc3ba,	// (0x00048033) popup_toolbar_window_cp03

0x5d24,	// (0x0004199d) main_image_pane_g2_ParamLimits

0x5d24,	// (0x0004199d) main_image_pane_g2

0x5d35,	// (0x000419ae) main_image_pane_g3_ParamLimits

0x5d35,	// (0x000419ae) main_image_pane_g3

0x0002,

0xf476,	// (0x0004b0ef) main_image_pane_g_ParamLimits

0xf476,	// (0x0004b0ef) main_image_pane_g

0x1f6d,	// (0x0003dbe6) main_image_pane_t1_ParamLimits

0x5d46,	// (0x000419bf) main_image_pane_t2_ParamLimits

0x5d46,	// (0x000419bf) main_image_pane_t2

0x5d58,	// (0x000419d1) main_image_pane_t3_ParamLimits

0x5d58,	// (0x000419d1) main_image_pane_t3

0x5d80,	// (0x000419f9) main_image_pane_t4_ParamLimits

0x5d80,	// (0x000419f9) main_image_pane_t4

0x0003,

0xf47d,	// (0x0004b0f6) main_image_pane_t_ParamLimits

0xf47d,	// (0x0004b0f6) main_image_pane_t

0x5da0,	// (0x00041a19) popup_image_details_window_cp01

0x5daa,	// (0x00041a23) popup_toobar_trans_pane_cp01_ParamLimits

0x5daa,	// (0x00041a23) popup_toobar_trans_pane_cp01

0x72c5,	// (0x00042f3e) popup_image_details_window_ParamLimits

0x72c5,	// (0x00042f3e) popup_image_details_window

0xc38d,	// (0x00048006) popup_image_focus_window

0xc3f1,	// (0x0004806a) camera2_autofocus_pane_ParamLimits

0xc3f1,	// (0x0004806a) camera2_autofocus_pane

0x09ad,	// (0x0003c626) bg_popup_sub_pane_cp06

0xc6ed,	// (0x00048366) popup_image_focus_window_g1

0xc6f5,	// (0x0004836e) popup_image_focus_window_g2

0xc6fd,	// (0x00048376) popup_image_focus_window_g3

0xc705,	// (0x0004837e) popup_image_focus_window_g4

0x0003,

0xf698,	// (0x0004b311) popup_image_focus_window_g

0xc70d,	// (0x00048386) popup_image_focus_window_t1

0xc71b,	// (0x00048394) popup_image_focus_window_t2

0xc72b,	// (0x000483a4) popup_image_focus_window_t3

0x0002,

0xf6a1,	// (0x0004b31a) popup_image_focus_window_t

0x10ae,	// (0x0003cd27) camera2_autofocus_pane_g1

0x1055,	// (0x0003ccce) bg_tb_trans_pane_cp01

0xc739,	// (0x000483b2) popup_image_details_window_g1

0xc74c,	// (0x000483c5) popup_image_details_window_g2

0x0002,

0xf6b3,	// (0x0004b32c) popup_image_details_window_g

0xc775,	// (0x000483ee) popup_image_details_window_t1

0xc787,	// (0x00048400) popup_image_details_window_t2

0xc7a0,	// (0x00048419) popup_image_details_window_t3

0xc7b4,	// (0x0004842d) popup_image_details_window_t4

0xc7cf,	// (0x00048448) popup_image_details_window_t5

0x0004,

0xf6ba,	// (0x0004b333) popup_image_details_window_t

0x110c,	// (0x0003cd85) bg_calc_paper_pane_ParamLimits

0x09ad,	// (0x0003c626) grid_highlight_pane_cp013

0xc170,	// (0x00047de9) list_calc_pane_ParamLimits

0xc182,	// (0x00047dfb) scroll_pane_cp024

0x1120,	// (0x0003cd99) bg_calc_display_pane_ParamLimits

0x3deb,	// (0x0003fa64) calc_display_pane_t1_ParamLimits

0x3dfd,	// (0x0003fa76) calc_display_pane_t2_ParamLimits

0xc18a,	// (0x00047e03) calc_display_pane_t3_ParamLimits

0xf10c,	// (0x0004ad85) calc_display_pane_t_ParamLimits

0x3eb7,	// (0x0003fb30) cell_calc_pane_g2

0x0001,

0xf129,	// (0x0004ada2) cell_calc_pane_g

0x3ec0,	// (0x0003fb39) cell_calc_pane_t1

0x1175,	// (0x0003cdee) grid_highlight_pane_cp02_ParamLimits

0x118b,	// (0x0003ce04) toolbar_button_pane_cp01_ParamLimits

0x118b,	// (0x0003ce04) toolbar_button_pane_cp01

0x1fb2,	// (0x0003dc2b) temp_image_control_pane_ParamLimits

0x1fb2,	// (0x0003dc2b) temp_image_control_pane

0x1055,	// (0x0003ccce) main_mp3_pane

0xc7e9,	// (0x00048462) temp_image_control_pane_g1_ParamLimits

0xc7e9,	// (0x00048462) temp_image_control_pane_g1

0xc7f7,	// (0x00048470) temp_image_control_pane_g2_ParamLimits

0xc7f7,	// (0x00048470) temp_image_control_pane_g2

0xc809,	// (0x00048482) temp_image_control_pane_g3_ParamLimits

0xc809,	// (0x00048482) temp_image_control_pane_g3

0x7a0f,	// (0x00043688) temp_image_control_pane_g4_ParamLimits

0x7a0f,	// (0x00043688) temp_image_control_pane_g4

0x0003,

0xf6c5,	// (0x0004b33e) temp_image_control_pane_g_ParamLimits

0xf6c5,	// (0x0004b33e) temp_image_control_pane_g

0xc7e9,	// (0x00048462) main_mp3_pane_g1

0x7a22,	// (0x0004369b) main_mp3_pane_g2

0x0007,

0xf6ce,	// (0x0004b347) main_mp3_pane_g

0xc83e,	// (0x000484b7) main_mp3_pane_t1

0x10bc,	// (0x0003cd35) main_camera_pane_g8_ParamLimits

0x10bc,	// (0x0003cd35) main_camera_pane_g8

0x466b,	// (0x000402e4) main_video_pane_g7_ParamLimits

0x466b,	// (0x000402e4) main_video_pane_g7

0x12da,	// (0x0003cf53) main_camera2_pane_t7_ParamLimits

0x12da,	// (0x0003cf53) main_camera2_pane_t7

0x1424,	// (0x0003d09d) scroll_pane_cp025_ParamLimits

0x1424,	// (0x0003d09d) scroll_pane_cp025

0x1438,	// (0x0003d0b1) scroll_pane_cp026_ParamLimits

0x1438,	// (0x0003d0b1) scroll_pane_cp026

0x1447,	// (0x0003d0c0) wml_content_pane_ParamLimits

0x09ad,	// (0x0003c626) main_touch_calib_pane

0x7af6,	// (0x0004376f) main_touch_calib_pane_g1

0x7b08,	// (0x00043781) main_touch_calib_pane_g2

0x7b1a,	// (0x00043793) main_touch_calib_pane_g3

0x7b2c,	// (0x000437a5) main_touch_calib_pane_g4

0x0003,

0xf6ec,	// (0x0004b365) main_touch_calib_pane_g

0x7b3e,	// (0x000437b7) main_touch_calib_pane_t1

0x7b58,	// (0x000437d1) main_touch_calib_pane_t2

0x0004,

0xf6f5,	// (0x0004b36e) main_touch_calib_pane_t

0x1ba2,	// (0x0003d81b) mup_progress_pane_cp02

0x1bd7,	// (0x0003d850) navi_pane_g1

0x1c92,	// (0x0003d90b) navi_pane_mp_t3

0x1055,	// (0x0003ccce) main_mp3_pane_ParamLimits

0x7463,	// (0x000430dc) navi_pane_ParamLimits

0xc7e9,	// (0x00048462) main_mp3_pane_g1_ParamLimits

0x7a22,	// (0x0004369b) main_mp3_pane_g2_ParamLimits

0x7a30,	// (0x000436a9) main_mp3_pane_g3_ParamLimits

0x7a30,	// (0x000436a9) main_mp3_pane_g3

0x7a3e,	// (0x000436b7) main_mp3_pane_g4_ParamLimits

0x7a3e,	// (0x000436b7) main_mp3_pane_g4

0x10ae,	// (0x0003cd27) main_mp3_pane_g5_ParamLimits

0x10ae,	// (0x0003cd27) main_mp3_pane_g5

0xc819,	// (0x00048492) main_mp3_pane_g6_ParamLimits

0xc819,	// (0x00048492) main_mp3_pane_g6

0xc826,	// (0x0004849f) main_mp3_pane_g7_ParamLimits

0xc826,	// (0x0004849f) main_mp3_pane_g7

0xc832,	// (0x000484ab) main_mp3_pane_g8_ParamLimits

0xc832,	// (0x000484ab) main_mp3_pane_g8

0xf6ce,	// (0x0004b347) main_mp3_pane_g_ParamLimits

0x7a4a,	// (0x000436c3) main_mp3_pane_t2

0x7a58,	// (0x000436d1) main_mp3_pane_t3

0xc84c,	// (0x000484c5) main_mp3_pane_t4

0xc85a,	// (0x000484d3) main_mp3_pane_t5

0x0005,

0xf6df,	// (0x0004b358) main_mp3_pane_t

0xc868,	// (0x000484e1) mup_progress_pane_cp01

0xc11f,	// (0x00047d98) aid_zoom_text_secondary2

0xc63e,	// (0x000482b7) list_cale_ev2_pane

0xc646,	// (0x000482bf) scroll_pane_cp023_ParamLimits

0x7bae,	// (0x00043827) field_cale_ev2_pane_ParamLimits

0x7bae,	// (0x00043827) field_cale_ev2_pane

0xc870,	// (0x000484e9) field_cale_ev2_pane_g1_ParamLimits

0xc870,	// (0x000484e9) field_cale_ev2_pane_g1

0xc87c,	// (0x000484f5) field_cale_ev2_pane_g2_ParamLimits

0xc87c,	// (0x000484f5) field_cale_ev2_pane_g2

0xc894,	// (0x0004850d) field_cale_ev2_pane_g3_ParamLimits

0xc894,	// (0x0004850d) field_cale_ev2_pane_g3

0x0003,

0xf700,	// (0x0004b379) field_cale_ev2_pane_g_ParamLimits

0xf700,	// (0x0004b379) field_cale_ev2_pane_g

0xc8b8,	// (0x00048531) field_cale_ev2_pane_t1_ParamLimits

0xc8b8,	// (0x00048531) field_cale_ev2_pane_t1

0xc8cf,	// (0x00048548) field_cale_ev2_pane_t2_ParamLimits

0xc8cf,	// (0x00048548) field_cale_ev2_pane_t2

0x0001,

0xf709,	// (0x0004b382) field_cale_ev2_pane_t_ParamLimits

0xf709,	// (0x0004b382) field_cale_ev2_pane_t

0x5bd8,	// (0x00041851) main_postcard_pane_g5_ParamLimits

0x5bd8,	// (0x00041851) main_postcard_pane_g5

0x5bee,	// (0x00041867) main_postcard_pane_g6_ParamLimits

0x5bee,	// (0x00041867) main_postcard_pane_g6

0x1055,	// (0x0003ccce) camera2_autofocus_pane_cp_ParamLimits

0x1055,	// (0x0003ccce) camera2_autofocus_pane_cp

0x1055,	// (0x0003ccce) main_mup3_pane

0x7c13,	// (0x0004388c) main_mup3_pane_g1_ParamLimits

0x7c13,	// (0x0004388c) main_mup3_pane_g1

0x7c35,	// (0x000438ae) main_mup3_pane_g2_ParamLimits

0x7c35,	// (0x000438ae) main_mup3_pane_g2

0x7cb5,	// (0x0004392e) main_mup3_pane_g3_ParamLimits

0x7cb5,	// (0x0004392e) main_mup3_pane_g3

0x7cfb,	// (0x00043974) main_mup3_pane_g4_ParamLimits

0x7cfb,	// (0x00043974) main_mup3_pane_g4

0x7d41,	// (0x000439ba) main_mup3_pane_g5_ParamLimits

0x7d41,	// (0x000439ba) main_mup3_pane_g5

0x7d87,	// (0x00043a00) main_mup3_pane_g6_ParamLimits

0x7d87,	// (0x00043a00) main_mup3_pane_g6

0x10bc,	// (0x0003cd35) main_mup3_pane_g7_ParamLimits

0x10bc,	// (0x0003cd35) main_mup3_pane_g7

0x0007,

0xf719,	// (0x0004b392) main_mup3_pane_g_ParamLimits

0xf719,	// (0x0004b392) main_mup3_pane_g

0x7e05,	// (0x00043a7e) main_mup3_pane_t1_ParamLimits

0x7e05,	// (0x00043a7e) main_mup3_pane_t1

0x7e79,	// (0x00043af2) main_mup3_pane_t2_ParamLimits

0x7e79,	// (0x00043af2) main_mup3_pane_t2

0x7f4d,	// (0x00043bc6) main_mup3_pane_t4_ParamLimits

0x7f4d,	// (0x00043bc6) main_mup3_pane_t4

0x7fa3,	// (0x00043c1c) main_mup3_pane_t5_ParamLimits

0x7fa3,	// (0x00043c1c) main_mup3_pane_t5

0x805f,	// (0x00043cd8) main_mup3_pane_t6_ParamLimits

0x805f,	// (0x00043cd8) main_mup3_pane_t6

0x0005,

0xf72a,	// (0x0004b3a3) main_mup3_pane_t_ParamLimits

0xf72a,	// (0x0004b3a3) main_mup3_pane_t

0x8117,	// (0x00043d90) mup3_progress_pane_ParamLimits

0x8117,	// (0x00043d90) mup3_progress_pane

0x81a3,	// (0x00043e1c) popup_mup3_control_window_ParamLimits

0x81a3,	// (0x00043e1c) popup_mup3_control_window

0xc8e4,	// (0x0004855d) popup_mup3_text_window

0x81d5,	// (0x00043e4e) mup3_progress_pane_t1

0x81f4,	// (0x00043e6d) mup3_progress_pane_t2

0xc8ec,	// (0x00048565) mup3_progress_pane_t3

0x0002,

0xf737,	// (0x0004b3b0) mup3_progress_pane_t

0xc909,	// (0x00048582) mup_progress_pane_cp03

0x09ad,	// (0x0003c626) bg_tb_trans_pane_cp04

0x8213,	// (0x00043e8c) mup3_volume_pane

0x821b,	// (0x00043e94) popup_mup3_control_window_g1

0x8224,	// (0x00043e9d) mup3_volume_pane_g1

0x822d,	// (0x00043ea6) mup3_volume_pane_g2

0x8236,	// (0x00043eaf) mup3_volume_pane_g3

0x0002,

0xf73e,	// (0x0004b3b7) mup3_volume_pane_g

0x09ad,	// (0x0003c626) bg_tb_trans_pane_cp03

0xc919,	// (0x00048592) popup_mup3_text_window_g1

0xc921,	// (0x0004859a) popup_mup3_text_window_t1

0x1168,	// (0x0003cde1) list_calc_item_pane_g1_ParamLimits

0x78e4,	// (0x0004355d) mup_volume_pane_cp_g1

0x7b72,	// (0x000437eb) main_touch_calib_pane_t3

0x7b86,	// (0x000437ff) main_touch_calib_pane_t4

0x7b9a,	// (0x00043813) main_touch_calib_pane_t5

0xc0fb,	// (0x00047d74) aid_cell_size_toolbar2

0xc103,	// (0x00047d7c) aid_popup3_width_pane

0xc10f,	// (0x00047d88) aid_zoom_text_msg_primary

0x4546,	// (0x000401bf) vorec_t7

0x112c,	// (0x0003cda5) bg_calc_paper_pane_g1_ParamLimits

0x1138,	// (0x0003cdb1) bg_calc_paper_pane_g2_ParamLimits

0x1144,	// (0x0003cdbd) bg_calc_paper_pane_g3_ParamLimits

0x1150,	// (0x0003cdc9) bg_calc_paper_pane_g4_ParamLimits

0x115c,	// (0x0003cdd5) bg_calc_paper_pane_g5_ParamLimits

0x3e44,	// (0x0003fabd) bg_calc_paper_pane_g6_ParamLimits

0x3e53,	// (0x0003facc) bg_calc_paper_pane_g7_ParamLimits

0x3e62,	// (0x0003fadb) bg_calc_paper_pane_g8_ParamLimits

0xf113,	// (0x0004ad8c) bg_calc_paper_pane_g_ParamLimits

0x3e75,	// (0x0003faee) calc_bg_paper_pane_g9_ParamLimits

0x1055,	// (0x0003ccce) image_qvga_pane_ParamLimits

0x1055,	// (0x0003ccce) image_qvga_pane

0x1033,	// (0x0003ccac) bg_popup_sub_pane_cp04_ParamLimits

0x1ee9,	// (0x0003db62) popup_mup_playback_window_g1_ParamLimits

0x1ef5,	// (0x0003db6e) popup_mup_playback_window_t1_ParamLimits

0x1f0a,	// (0x0003db83) popup_mup_playback_window_t2_ParamLimits

0xf471,	// (0x0004b0ea) popup_mup_playback_window_t_ParamLimits

0x10bc,	// (0x0003cd35) main_mup2_pane_g3_ParamLimits

0x10bc,	// (0x0003cd35) main_mup2_pane_g3

0x4872,	// (0x000404eb) popup_toolbar_window_cp04

0x6106,	// (0x00041d7f) popup_call2_audio_second_window_g3_ParamLimits

0x6106,	// (0x00041d7f) popup_call2_audio_second_window_g3

0x652e,	// (0x000421a7) popup_call2_audio_first_window_g4_ParamLimits

0x652e,	// (0x000421a7) popup_call2_audio_first_window_g4

0x6bad,	// (0x00042826) popup_call2_audio_in_window_g4_ParamLimits

0x6bad,	// (0x00042826) popup_call2_audio_in_window_g4

0x5d06,	// (0x0004197f) aid_area_sk_bg_cut_ParamLimits

0x5d06,	// (0x0004197f) aid_area_sk_bg_cut

0x1f1f,	// (0x0003db98) aid_area_sk_bg_cut_2_ParamLimits

0x1f1f,	// (0x0003db98) aid_area_sk_bg_cut_2

0x09ad,	// (0x0003c626) aid_placing_details_win

0x09ad,	// (0x0003c626) aid_placing_details_win_2

0x10ae,	// (0x0003cd27) camera2_autofocus_pane_g1_ParamLimits

0x3b75,	// (0x0003f7ee) popup_fixed_preview_cale_window_ParamLimits

0x3b75,	// (0x0003f7ee) popup_fixed_preview_cale_window

0x1d10,	// (0x0003d989) navi_slider_pane_g3

0x1d19,	// (0x0003d992) navi_slider_pane_g4

0x1d22,	// (0x0003d99b) navi_slider_pane_g5

0x1d10,	// (0x0003d989) navi_slider_pane_g6

0xc2a6,	// (0x00047f1f) navi_slider_pane_g7

0x1e20,	// (0x0003da99) mup_scale_pane_g3

0x1e29,	// (0x0003daa2) mup_scale_pane_g4

0x1e32,	// (0x0003daab) mup_scale_pane_g5

0x5a85,	// (0x000416fe) mup_scale_pane_g6

0x5a8e,	// (0x00041707) mup_scale_pane_g7

0x1308,	// (0x0003cf81) cams2_slider_pane_g3

0x1308,	// (0x0003cf81) cams2_slider_pane_g4

0x1308,	// (0x0003cf81) cams2_slider_pane_g5

0x1308,	// (0x0003cf81) cams2_slider_pane_g6

0x1308,	// (0x0003cf81) cams2_slider_pane_g7

0x1308,	// (0x0003cf81) camera2_autofocus_pane_cp_g1

0x71b4,	// (0x00042e2d) bg_popup_preview_window_pane_cp02_ParamLimits

0x71b4,	// (0x00042e2d) bg_popup_preview_window_pane_cp02

0xc92f,	// (0x000485a8) list_fp_cale_pane_ParamLimits

0xc92f,	// (0x000485a8) list_fp_cale_pane

0xc93b,	// (0x000485b4) popup_fixed_preview_cale_window_t1_ParamLimits

0xc93b,	// (0x000485b4) popup_fixed_preview_cale_window_t1

0x823f,	// (0x00043eb8) popup_fixed_preview_cale_window_t2_ParamLimits

0x823f,	// (0x00043eb8) popup_fixed_preview_cale_window_t2

0x8254,	// (0x00043ecd) popup_fixed_preview_cale_window_t3_ParamLimits

0x8254,	// (0x00043ecd) popup_fixed_preview_cale_window_t3

0x0002,

0xf745,	// (0x0004b3be) popup_fixed_preview_cale_window_t_ParamLimits

0xf745,	// (0x0004b3be) popup_fixed_preview_cale_window_t

0x8269,	// (0x00043ee2) list_single_fp_cale_pane_ParamLimits

0x8269,	// (0x00043ee2) list_single_fp_cale_pane

0xc959,	// (0x000485d2) list_single_fp_cale_pane_g1_ParamLimits

0xc959,	// (0x000485d2) list_single_fp_cale_pane_g1

0xc965,	// (0x000485de) list_single_fp_cale_pane_g2_ParamLimits

0xc965,	// (0x000485de) list_single_fp_cale_pane_g2

0x0002,

0xf74c,	// (0x0004b3c5) list_single_fp_cale_pane_g_ParamLimits

0xf74c,	// (0x0004b3c5) list_single_fp_cale_pane_g

0xc97e,	// (0x000485f7) list_single_fp_cale_pane_t1_ParamLimits

0xc97e,	// (0x000485f7) list_single_fp_cale_pane_t1

0xc990,	// (0x00048609) list_single_fp_cale_pane_t2_ParamLimits

0xc990,	// (0x00048609) list_single_fp_cale_pane_t2

0x0001,

0xf753,	// (0x0004b3cc) list_single_fp_cale_pane_t_ParamLimits

0xf753,	// (0x0004b3cc) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x09ad,	// (0x0003c626) main_dialer_pane

0x09ad,	// (0x0003c626) aid_cell_size_keypad

0x09ad,	// (0x0003c626) dialer_ne_pane

0x09ad,	// (0x0003c626) grid_dialer_command_1_pane

0x09ad,	// (0x0003c626) grid_dialer_command_2_pane

0x09ad,	// (0x0003c626) grid_dialer_keypad_pane

0x827f,	// (0x00043ef8) bg_popup_call_pane_cp06_ParamLimits

0x827f,	// (0x00043ef8) bg_popup_call_pane_cp06

0x827f,	// (0x00043ef8) dialer_ne_clear_pane_ParamLimits

0x827f,	// (0x00043ef8) dialer_ne_clear_pane

0x1308,	// (0x0003cf81) dialer_ne_pane_g1

0x12da,	// (0x0003cf53) dialer_ne_pane_t1_ParamLimits

0x12da,	// (0x0003cf53) dialer_ne_pane_t1

0x828d,	// (0x00043f06) dialer_ne_pane_t2_ParamLimits

0x828d,	// (0x00043f06) dialer_ne_pane_t2

0x82b5,	// (0x00043f2e) dialer_ne_pane_t3_ParamLimits

0x82b5,	// (0x00043f2e) dialer_ne_pane_t3

0x0002,

0xf758,	// (0x0004b3d1) dialer_ne_pane_t_ParamLimits

0xf758,	// (0x0004b3d1) dialer_ne_pane_t

0x82b5,	// (0x00043f2e) dialer_ne_pane_t3_copy1_ParamLimits

0x82b5,	// (0x00043f2e) dialer_ne_pane_t3_copy1

0xc9c3,	// (0x0004863c) cell_dialer_keypad_pane_ParamLimits

0xc9c3,	// (0x0004863c) cell_dialer_keypad_pane

0x1055,	// (0x0003ccce) cell_dialer_command_1_pane_ParamLimits

0x1055,	// (0x0003ccce) cell_dialer_command_1_pane

0xc9da,	// (0x00048653) cell_dialer_command_2_pane_ParamLimits

0xc9da,	// (0x00048653) cell_dialer_command_2_pane

0x1055,	// (0x0003ccce) bg_button_pane_cp02_ParamLimits

0x1055,	// (0x0003ccce) bg_button_pane_cp02

0x10ae,	// (0x0003cd27) cell_dialer_keypad_pane_g1_ParamLimits

0x10ae,	// (0x0003cd27) cell_dialer_keypad_pane_g1

0x1055,	// (0x0003ccce) bg_button_pane_cp03_ParamLimits

0x1055,	// (0x0003ccce) bg_button_pane_cp03

0x10ae,	// (0x0003cd27) cell_dialer_command_1_pane_g1_ParamLimits

0x10ae,	// (0x0003cd27) cell_dialer_command_1_pane_g1

0x09ad,	// (0x0003c626) bg_button_pane_cp04

0x1308,	// (0x0003cf81) cell_dialer_command_2_pane_g1

0x09ad,	// (0x0003c626) bg_button_pane_cp06

0x1308,	// (0x0003cf81) dialer_ne_clear_pane_g1

0x1be3,	// (0x0003d85c) navi_pane_g2

0x1c11,	// (0x0003d88a) navi_pane_g3

0x0002,

0xf374,	// (0x0004afed) navi_pane_g

0x1ca0,	// (0x0003d919) navi_pane_mv_g2

0x1cc7,	// (0x0003d940) navi_pane_mv_g5

0x5868,	// (0x000414e1) navi_pane_mv_t1

0x1120,	// (0x0003cd99) main_clock2_pane

0x1055,	// (0x0003ccce) main_clock2_list_pane_ParamLimits

0x1055,	// (0x0003ccce) main_clock2_list_pane

0x834b,	// (0x00043fc4) main_clock2_pane_t1_ParamLimits

0x834b,	// (0x00043fc4) main_clock2_pane_t1

0x8386,	// (0x00043fff) main_clock2_pane_t2_ParamLimits

0x8386,	// (0x00043fff) main_clock2_pane_t2

0x0004,

0xf764,	// (0x0004b3dd) main_clock2_pane_t_ParamLimits

0xf764,	// (0x0004b3dd) main_clock2_pane_t

0x8426,	// (0x0004409f) popup_clock_analogue_window_cp03_ParamLimits

0x8426,	// (0x0004409f) popup_clock_analogue_window_cp03

0x844b,	// (0x000440c4) popup_clock_digital_window_cp02_ParamLimits

0x844b,	// (0x000440c4) popup_clock_digital_window_cp02

0x84c4,	// (0x0004413d) main_clock2_list_single_pane_ParamLimits

0x84c4,	// (0x0004413d) main_clock2_list_single_pane

0x12d2,	// (0x0003cf4b) list_highlight_pane_cp05

0xca1d,	// (0x00048696) main_clock2_list_single_pane_t1

0x4872,	// (0x000404eb) popup_toolbar_window_cp04_ParamLimits

0x10bc,	// (0x0003cd35) camera2_autofocus_pane_g2_ParamLimits

0x10bc,	// (0x0003cd35) camera2_autofocus_pane_g2

0x10bc,	// (0x0003cd35) camera2_autofocus_pane_g3_ParamLimits

0x10bc,	// (0x0003cd35) camera2_autofocus_pane_g3

0x10bc,	// (0x0003cd35) camera2_autofocus_pane_g4_ParamLimits

0x10bc,	// (0x0003cd35) camera2_autofocus_pane_g4

0x10bc,	// (0x0003cd35) camera2_autofocus_pane_g5_ParamLimits

0x10bc,	// (0x0003cd35) camera2_autofocus_pane_g5

0x0004,

0xf6a8,	// (0x0004b321) camera2_autofocus_pane_g_ParamLimits

0xf6a8,	// (0x0004b321) camera2_autofocus_pane_g

0x7bcf,	// (0x00043848) camera2_autofocus_pane_cp_g2

0x7bd7,	// (0x00043850) camera2_autofocus_pane_cp_g3

0x7bdf,	// (0x00043858) camera2_autofocus_pane_cp_g4

0x7be7,	// (0x00043860) camera2_autofocus_pane_cp_g5

0x0004,

0xf70e,	// (0x0004b387) camera2_autofocus_pane_cp_g

0x09ad,	// (0x0003c626) popup_dialer_spcha_window

0x09ad,	// (0x0003c626) bg_popup_sub_pane_cp07

0x09ad,	// (0x0003c626) list_spcha_pane

0xca2b,	// (0x000486a4) list_single_spcha_pane_ParamLimits

0xca2b,	// (0x000486a4) list_single_spcha_pane

0x09ad,	// (0x0003c626) list_highlight_pane_cp06

0x1843,	// (0x0003d4bc) list_single_spcha_pane_t1

0x6957,	// (0x000425d0) popup_call2_audio_out_window_g4_ParamLimits

0x6957,	// (0x000425d0) popup_call2_audio_out_window_g4

0x09ad,	// (0x0003c626) main_imed2_pane

0xc395,	// (0x0004800e) popup_imed_adjust2_window

0x72dd,	// (0x00042f56) popup_imed_trans_window_ParamLimits

0x72dd,	// (0x00042f56) popup_imed_trans_window

0x79e5,	// (0x0004365e) popup_blid_sat_info2_window_t1

0x79f3,	// (0x0004366c) popup_blid_sat_info2_window_t2

0x000a,

0xf63d,	// (0x0004b2b6) popup_blid_sat_info2_window_t

0x8575,	// (0x000441ee) aid_size_cell_colour_35

0x8595,	// (0x0004420e) aid_size_cell_colour_112

0x85b5,	// (0x0004422e) aid_size_cell_effect

0x22ff,	// (0x0003df78) bg_tb_trans_pane_cp02

0x1775,	// (0x0003d3ee) heading_imed_pane

0x85d5,	// (0x0004424e) listscroll_imed_pane

0xca3d,	// (0x000486b6) heading_imed_pane_g1

0xca45,	// (0x000486be) heading_imed_pane_t1

0xca53,	// (0x000486cc) grid_imed_colour_35_pane_ParamLimits

0xca53,	// (0x000486cc) grid_imed_colour_35_pane

0x85e1,	// (0x0004425a) grid_imed_effect_pane

0xca6b,	// (0x000486e4) list_imed_aspect_pane

0x85f7,	// (0x00044270) scroll_pane_cp027_ParamLimits

0x85f7,	// (0x00044270) scroll_pane_cp027

0x8608,	// (0x00044281) cell_imed_effect_pane_ParamLimits

0x8608,	// (0x00044281) cell_imed_effect_pane

0xca73,	// (0x000486ec) cell_imed_colour_pane_ParamLimits

0xca73,	// (0x000486ec) cell_imed_colour_pane

0xcab5,	// (0x0004872e) cell_imed_colour_pane_g1_ParamLimits

0xcab5,	// (0x0004872e) cell_imed_colour_pane_g1

0xcac6,	// (0x0004873f) hgihlgiht_grid_pane_cp016_ParamLimits

0xcac6,	// (0x0004873f) hgihlgiht_grid_pane_cp016

0x862f,	// (0x000442a8) cell_imed_effect_pane_g1

0x8637,	// (0x000442b0) grid_highlight_pane_cp017

0xcad7,	// (0x00048750) list_imed_single_pane_ParamLimits

0xcad7,	// (0x00048750) list_imed_single_pane

0x09ad,	// (0x0003c626) list_highlight_pane_cp07

0xcaec,	// (0x00048765) list_imed_aspect_pane_comp1_t1

0x22ff,	// (0x0003df78) bg_tb_trans_pane_cp05

0xcb0e,	// (0x00048787) popup_imed_adjust2_window_g1

0xcb35,	// (0x000487ae) popup_imed_adjust2_window_t1

0xcb4d,	// (0x000487c6) slider_imed_adjust_pane

0xcb61,	// (0x000487da) slider_imed_adjust_pane_g1

0xcb71,	// (0x000487ea) slider_imed_adjust_pane_g2

0xcb81,	// (0x000487fa) slider_imed_adjust_pane_g3

0xcb92,	// (0x0004880b) slider_imed_adjust_pane_g4

0x0003,

0xf781,	// (0x0004b3fa) slider_imed_adjust_pane_g

0x8640,	// (0x000442b9) aid_size_cell_clipart2

0x864c,	// (0x000442c5) grid_imed_clipart_pane

0xcba3,	// (0x0004881c) scroll_pane_cp031

0x8656,	// (0x000442cf) cell_imed_clipart_pane_ParamLimits

0x8656,	// (0x000442cf) cell_imed_clipart_pane

0x8678,	// (0x000442f1) cell_imed_clipart_pane_g1

0x09ad,	// (0x0003c626) grid_highlight_pane_cp014

0x8327,	// (0x00043fa0) main_clock2_pane_g1_ParamLimits

0x8327,	// (0x00043fa0) main_clock2_pane_g1

0x846b,	// (0x000440e4) aid_call2_pane_cp10

0x847d,	// (0x000440f6) aid_call_pane_cp10

0x1b42,	// (0x0003d7bb) popup_clock_analogue_window_cp10_g1

0x1b42,	// (0x0003d7bb) popup_clock_analogue_window_cp10_g2

0x848f,	// (0x00044108) popup_clock_analogue_window_cp10_g3

0x848f,	// (0x00044108) popup_clock_analogue_window_cp10_g4

0x1b42,	// (0x0003d7bb) popup_clock_analogue_window_cp10_g5

0x0004,

0xf76f,	// (0x0004b3e8) popup_clock_analogue_window_cp10_g

0x84a5,	// (0x0004411e) popup_clock_analogue_window_cp10_t1

0x84d6,	// (0x0004414f) clock_digital_number_pane_cp10_ParamLimits

0x84d6,	// (0x0004414f) clock_digital_number_pane_cp10

0x84ee,	// (0x00044167) clock_digital_number_pane_cp11_ParamLimits

0x84ee,	// (0x00044167) clock_digital_number_pane_cp11

0x8506,	// (0x0004417f) clock_digital_number_pane_cp12_ParamLimits

0x8506,	// (0x0004417f) clock_digital_number_pane_cp12

0x8520,	// (0x00044199) clock_digital_number_pane_cp13_ParamLimits

0x8520,	// (0x00044199) clock_digital_number_pane_cp13

0x853a,	// (0x000441b3) clock_digital_separator_pane_cp10_ParamLimits

0x853a,	// (0x000441b3) clock_digital_separator_pane_cp10

0x8554,	// (0x000441cd) popup_clock_digital_window_cp02_t1_ParamLimits

0x8554,	// (0x000441cd) popup_clock_digital_window_cp02_t1

0x102b,	// (0x0003cca4) clock_digital_number_pane_cp10_g1

0x102b,	// (0x0003cca4) clock_digital_number_pane_cp10_g2

0x0001,

0xf78a,	// (0x0004b403) clock_digital_number_pane_cp10_g

0x102b,	// (0x0003cca4) clock_digital_separator_pane_cp10_g1

0x102b,	// (0x0003cca4) clock_digital_separator_pane_g2_cp10

0x1ccf,	// (0x0003d948) navi_pane_vded_g4

0x1cd8,	// (0x0003d951) navi_pane_vded_g5

0x1ce1,	// (0x0003d95a) navi_pane_vded_t1

0x09ad,	// (0x0003c626) main_vded_pane

0x8681,	// (0x000442fa) main_vded_pane_g1

0x868b,	// (0x00044304) main_vded_pane_g2

0x8695,	// (0x0004430e) main_vded_pane_g3

0x0002,

0xf78f,	// (0x0004b408) main_vded_pane_g

0x869f,	// (0x00044318) main_vded_pane_t1

0x86ad,	// (0x00044326) main_vded_pane_t2

0x0001,

0xf796,	// (0x0004b40f) main_vded_pane_t

0x86bb,	// (0x00044334) vded_slider_pane

0x86c3,	// (0x0004433c) vded_video_pane

0xcbab,	// (0x00048824) vded_video_pane_g1

0x86cb,	// (0x00044344) vded_video_pane_g2

0x1308,	// (0x0003cf81) vded_video_pane_g3

0x0002,

0xf79b,	// (0x0004b414) vded_video_pane_g

0xcbb5,	// (0x0004882e) vded_slider_pane_g1

0x78e4,	// (0x0004355d) vded_slider_pane_g2

0xcbbe,	// (0x00048837) vded_slider_pane_g3

0xcbc7,	// (0x00048840) vded_slider_pane_g4

0xcbd0,	// (0x00048849) vded_slider_pane_g5

0x0004,

0xf7a2,	// (0x0004b41b) vded_slider_pane_g

0x818b,	// (0x00043e04) mup3_rocker_pane_ParamLimits

0x818b,	// (0x00043e04) mup3_rocker_pane

0x86d4,	// (0x0004434d) mup3_control_keys_pane_g1

0x86dc,	// (0x00044355) mup3_control_keys_pane_g2

0x86e4,	// (0x0004435d) mup3_control_keys_pane_g3

0x86ec,	// (0x00044365) mup3_control_keys_pane_g4

0x0003,

0xf7ad,	// (0x0004b426) mup3_control_keys_pane_g

0x3bac,	// (0x0003f825) popup_toolbar2_fixed_window_cp01_ParamLimits

0x3bac,	// (0x0003f825) popup_toolbar2_fixed_window_cp01

0x81bf,	// (0x00043e38) popup_toolbar2_fixed_window_cp02_ParamLimits

0x81bf,	// (0x00043e38) popup_toolbar2_fixed_window_cp02

0x6278,	// (0x00041ef1) popup_call2_audio_second_window_t4_ParamLimits

0x6278,	// (0x00041ef1) popup_call2_audio_second_window_t4

0x67c4,	// (0x0004243d) popup_call2_audio_first_window_t6_ParamLimits

0x67c4,	// (0x0004243d) popup_call2_audio_first_window_t6

0x6a5a,	// (0x000426d3) popup_call2_audio_out_window_t6_ParamLimits

0x6a5a,	// (0x000426d3) popup_call2_audio_out_window_t6

0x09ad,	// (0x0003c626) main_vitu_pane

0x1055,	// (0x0003ccce) aid_size_cell_itu_ParamLimits

0x1055,	// (0x0003ccce) aid_size_cell_itu

0x1055,	// (0x0003ccce) bg_popup_window_pane_cp08_ParamLimits

0x1055,	// (0x0003ccce) bg_popup_window_pane_cp08

0x1055,	// (0x0003ccce) field_vitu_entry_pane_ParamLimits

0x1055,	// (0x0003ccce) field_vitu_entry_pane

0x1055,	// (0x0003ccce) grid_vitu_function_pane_ParamLimits

0x1055,	// (0x0003ccce) grid_vitu_function_pane

0x1055,	// (0x0003ccce) grid_vitu_itu_pane_ParamLimits

0x1055,	// (0x0003ccce) grid_vitu_itu_pane

0x1055,	// (0x0003ccce) cell_vitu_itu_pane_ParamLimits

0x1055,	// (0x0003ccce) cell_vitu_itu_pane

0x1055,	// (0x0003ccce) cell_vitu_function_pane_ParamLimits

0x1055,	// (0x0003ccce) cell_vitu_function_pane

0x1055,	// (0x0003ccce) bg_popup_sub_pane_cp08_ParamLimits

0x1055,	// (0x0003ccce) bg_popup_sub_pane_cp08

0x1322,	// (0x0003cf9b) field_vitu_entry_pane_t1_ParamLimits

0x1322,	// (0x0003cf9b) field_vitu_entry_pane_t1

0xcbd9,	// (0x00048852) field_vitu_entry_pane_t2_ParamLimits

0xcbd9,	// (0x00048852) field_vitu_entry_pane_t2

0x0001,

0xf7b6,	// (0x0004b42f) field_vitu_entry_pane_t_ParamLimits

0xf7b6,	// (0x0004b42f) field_vitu_entry_pane_t

0x7752,	// (0x000433cb) bg_button_pane_cp05_ParamLimits

0x7752,	// (0x000433cb) bg_button_pane_cp05

0xcbf6,	// (0x0004886f) cell_vitu_itu_pane_g1

0x231b,	// (0x0003df94) cell_vitu_itu_pane_t1_ParamLimits

0x231b,	// (0x0003df94) cell_vitu_itu_pane_t1

0x231b,	// (0x0003df94) cell_vitu_itu_pane_t2_ParamLimits

0x231b,	// (0x0003df94) cell_vitu_itu_pane_t2

0x0002,

0xf7bb,	// (0x0004b434) cell_vitu_itu_pane_t_ParamLimits

0xf7bb,	// (0x0004b434) cell_vitu_itu_pane_t

0x09ad,	// (0x0003c626) bg_button_pane_cp07

0x1308,	// (0x0003cf81) cell_vitu_function_pane_g1

0xc168,	// (0x00047de1) main_calc_pane_g1

0x39d3,	// (0x0003f64c) aid_visual_content_pane

0x09ad,	// (0x0003c626) main_vradio_pane

0x10ae,	// (0x0003cd27) main_vradio_pane_g1_ParamLimits

0x10ae,	// (0x0003cd27) main_vradio_pane_g1

0x10bc,	// (0x0003cd35) main_vradio_pane_g2_ParamLimits

0x10bc,	// (0x0003cd35) main_vradio_pane_g2

0x0001,

0xf7c2,	// (0x0004b43b) main_vradio_pane_g_ParamLimits

0xf7c2,	// (0x0004b43b) main_vradio_pane_g

0x1322,	// (0x0003cf9b) main_vradio_pane_t1_ParamLimits

0x1322,	// (0x0003cf9b) main_vradio_pane_t1

0x1322,	// (0x0003cf9b) main_vradio_pane_t2_ParamLimits

0x1322,	// (0x0003cf9b) main_vradio_pane_t2

0x12da,	// (0x0003cf53) main_vradio_pane_t3_ParamLimits

0x12da,	// (0x0003cf53) main_vradio_pane_t3

0x0002,

0xf7c7,	// (0x0004b440) main_vradio_pane_t_ParamLimits

0xf7c7,	// (0x0004b440) main_vradio_pane_t

0x1055,	// (0x0003ccce) vradio_rocker_control_pane_ParamLimits

0x1055,	// (0x0003ccce) vradio_rocker_control_pane

0x1055,	// (0x0003ccce) vradio_station_info_pane_ParamLimits

0x1055,	// (0x0003ccce) vradio_station_info_pane

0x1055,	// (0x0003ccce) vradio_frequency_info_pane_ParamLimits

0x1055,	// (0x0003ccce) vradio_frequency_info_pane

0x1308,	// (0x0003cf81) vradio_station_info_pane_g1

0x231b,	// (0x0003df94) vradio_station_info_pane_t1_ParamLimits

0x231b,	// (0x0003df94) vradio_station_info_pane_t1

0x12da,	// (0x0003cf53) vradio_station_info_pane_t2_ParamLimits

0x12da,	// (0x0003cf53) vradio_station_info_pane_t2

0x0001,

0xf7ce,	// (0x0004b447) vradio_station_info_pane_t_ParamLimits

0xf7ce,	// (0x0004b447) vradio_station_info_pane_t

0x09ad,	// (0x0003c626) vradio_tuning_pane

0x86fc,	// (0x00044375) vradio_rocker_control_pane_g1

0xcc12,	// (0x0004888b) vradio_rocker_control_pane_g2

0x8706,	// (0x0004437f) vradio_rocker_control_pane_g3

0x8710,	// (0x00044389) vradio_rocker_control_pane_g4

0x871a,	// (0x00044393) vradio_rocker_control_pane_g5

0x0004,

0xf7d3,	// (0x0004b44c) vradio_rocker_control_pane_g

0x1308,	// (0x0003cf81) vradio_frequency_info_pane_g1

0x1322,	// (0x0003cf9b) vradio_frequency_info_pane_t1_ParamLimits

0x1322,	// (0x0003cf9b) vradio_frequency_info_pane_t1

0x8724,	// (0x0004439d) vradio_tuning_pane_g1

0x872f,	// (0x000443a8) vradio_tuning_pane_t1

0xc127,	// (0x00047da0) area_side_right_pane_ParamLimits

0xc127,	// (0x00047da0) area_side_right_pane

0x715d,	// (0x00042dd6) status_small_pane_g1

0x7165,	// (0x00042dde) status_small_pane_g2

0x716e,	// (0x00042de7) status_small_pane_g3

0x7177,	// (0x00042df0) status_small_pane_g4

0x0003,

0xf59f,	// (0x0004b218) status_small_pane_g

0x7180,	// (0x00042df9) status_small_pane_t1

0x09ad,	// (0x0003c626) main_video3_pane

0xcc1a,	// (0x00048893) cams_zoom_vslider_pane

0xcc22,	// (0x0004889b) image3_wide_pane_ParamLimits

0xcc22,	// (0x0004889b) image3_wide_pane

0xcc3c,	// (0x000488b5) image3_wide_small_pane

0xcc48,	// (0x000488c1) main_video3_pane_g1_ParamLimits

0xcc48,	// (0x000488c1) main_video3_pane_g1

0xcc64,	// (0x000488dd) main_video3_pane_g2_ParamLimits

0xcc64,	// (0x000488dd) main_video3_pane_g2

0x0001,

0xf7de,	// (0x0004b457) main_video3_pane_g_ParamLimits

0xf7de,	// (0x0004b457) main_video3_pane_g

0xcc80,	// (0x000488f9) main_video3_pane_t1_ParamLimits

0xcc80,	// (0x000488f9) main_video3_pane_t1

0xccab,	// (0x00048924) main_video3_pane_t2_ParamLimits

0xccab,	// (0x00048924) main_video3_pane_t2

0xccd6,	// (0x0004894f) main_video3_pane_t3_ParamLimits

0xccd6,	// (0x0004894f) main_video3_pane_t3

0x0002,

0xf7e3,	// (0x0004b45c) main_video3_pane_t_ParamLimits

0xf7e3,	// (0x0004b45c) main_video3_pane_t

0xcd03,	// (0x0004897c) cams_zoom_vslider_pane_g1

0xcd0c,	// (0x00048985) cams_zoom_vslider_pane_g2

0x0001,

0xf7ea,	// (0x0004b463) cams_zoom_vslider_pane_g

0xcd14,	// (0x0004898d) small_slider_vertical_pane

0x1308,	// (0x0003cf81) small_slider_vertical_pane_g1

0x1308,	// (0x0003cf81) small_slider_vertical_pane_g2

0xcd1c,	// (0x00048995) small_slider_vertical_pane_g3

0x0002,

0xf7ef,	// (0x0004b468) small_slider_vertical_pane_g

0x09ad,	// (0x0003c626) main_hwr_training_pane

0xcd25,	// (0x0004899e) hwr_training_instruct_pane_ParamLimits

0xcd25,	// (0x0004899e) hwr_training_instruct_pane

0x873e,	// (0x000443b7) hwr_training_navi_pane_ParamLimits

0x873e,	// (0x000443b7) hwr_training_navi_pane

0x875d,	// (0x000443d6) hwr_training_write_pane_ParamLimits

0x875d,	// (0x000443d6) hwr_training_write_pane

0x09ad,	// (0x0003c626) bg_frame_shadow_pane

0xcd5c,	// (0x000489d5) hwr_training_write_pane_g1

0xcd64,	// (0x000489dd) hwr_training_write_pane_g2

0xcd6c,	// (0x000489e5) hwr_training_write_pane_g3

0xcd74,	// (0x000489ed) hwr_training_write_pane_g4

0xcd7c,	// (0x000489f5) hwr_training_write_pane_g5

0xcd84,	// (0x000489fd) hwr_training_write_pane_g6

0xcd8c,	// (0x00048a05) hwr_training_write_pane_g7

0x0006,

0xf7f6,	// (0x0004b46f) hwr_training_write_pane_g

0xcd94,	// (0x00048a0d) hwr_training_navi_pane_g1_ParamLimits

0xcd94,	// (0x00048a0d) hwr_training_navi_pane_g1

0xcda6,	// (0x00048a1f) hwr_training_navi_pane_g2_ParamLimits

0xcda6,	// (0x00048a1f) hwr_training_navi_pane_g2

0xcdb8,	// (0x00048a31) hwr_training_navi_pane_g3_ParamLimits

0xcdb8,	// (0x00048a31) hwr_training_navi_pane_g3

0xcdc8,	// (0x00048a41) hwr_training_navi_pane_g4_ParamLimits

0xcdc8,	// (0x00048a41) hwr_training_navi_pane_g4

0x0004,

0xf805,	// (0x0004b47e) hwr_training_navi_pane_g_ParamLimits

0xf805,	// (0x0004b47e) hwr_training_navi_pane_g

0xcdd5,	// (0x00048a4e) hwr_training_navi_pane_t1

0x87a7,	// (0x00044420) list_single_hwr_training_instruct_pane_ParamLimits

0x87a7,	// (0x00044420) list_single_hwr_training_instruct_pane

0xcde3,	// (0x00048a5c) list_single_hwr_training_instruct_pane_t1

0xc50e,	// (0x00048187) bg_frame_shadow_pane_g1

0xcdf2,	// (0x00048a6b) bg_frame_shadow_pane_g2

0xcdfa,	// (0x00048a73) bg_frame_shadow_pane_g3

0xce02,	// (0x00048a7b) bg_frame_shadow_pane_g4

0xce0a,	// (0x00048a83) bg_frame_shadow_pane_g5

0xce12,	// (0x00048a8b) bg_frame_shadow_pane_g6

0xce1a,	// (0x00048a93) bg_frame_shadow_pane_g7

0x11cf,	// (0x0003ce48) bg_frame_shadow_pane_g8

0x0007,

0xf810,	// (0x0004b489) bg_frame_shadow_pane_g

0x09ad,	// (0x0003c626) main_video_tele_dialer_pane

0x87bd,	// (0x00044436) aid_size_cell_video_keypad_ParamLimits

0x87bd,	// (0x00044436) aid_size_cell_video_keypad

0x87d7,	// (0x00044450) grid_video_dialer_keypad_pane_ParamLimits

0x87d7,	// (0x00044450) grid_video_dialer_keypad_pane

0x8825,	// (0x0004449e) video_down_pane_cp_ParamLimits

0x8825,	// (0x0004449e) video_down_pane_cp

0x8857,	// (0x000444d0) cell_video_dialer_keypad_pane_ParamLimits

0x8857,	// (0x000444d0) cell_video_dialer_keypad_pane

0xce22,	// (0x00048a9b) bg_button_pane_cp08_ParamLimits

0xce22,	// (0x00048a9b) bg_button_pane_cp08

0x8879,	// (0x000444f2) cell_video_dialer_keypad_pane_g1_ParamLimits

0x8879,	// (0x000444f2) cell_video_dialer_keypad_pane_g1

0x8175,	// (0x00043dee) mup3_rocker2_pane_ParamLimits

0x8175,	// (0x00043dee) mup3_rocker2_pane

0x1308,	// (0x0003cf81) mup3_rocker2_pane_g1

0x71c0,	// (0x00042e39) main_dialer2_pane

0x09ad,	// (0x0003c626) main_mp4_pane

0xec36,	// (0x0004a8af) main_mp4_pane_g1_ParamLimits

0xec36,	// (0x0004a8af) main_mp4_pane_g1

0xec36,	// (0x0004a8af) main_mp4_pane_g2_ParamLimits

0xec36,	// (0x0004a8af) main_mp4_pane_g2

0x88b3,	// (0x0004452c) main_mp4_pane_g3_ParamLimits

0x88b3,	// (0x0004452c) main_mp4_pane_g3

0xec44,	// (0x0004a8bd) main_mp4_pane_g4_ParamLimits

0xec44,	// (0x0004a8bd) main_mp4_pane_g4

0xec72,	// (0x0004a8eb) main_mp4_pane_g5_ParamLimits

0xec72,	// (0x0004a8eb) main_mp4_pane_g5

0x0007,

0xf830,	// (0x0004b4a9) main_mp4_pane_g_ParamLimits

0xf830,	// (0x0004b4a9) main_mp4_pane_g

0xece6,	// (0x0004a95f) main_mp4_pane_t1_ParamLimits

0xece6,	// (0x0004a95f) main_mp4_pane_t1

0xed42,	// (0x0004a9bb) main_mp4_pane_t2_ParamLimits

0xed42,	// (0x0004a9bb) main_mp4_pane_t2

0xce4c,	// (0x00048ac5) main_mp4_pane_t3_ParamLimits

0xce4c,	// (0x00048ac5) main_mp4_pane_t3

0xed94,	// (0x0004aa0d) main_mp4_pane_t4_ParamLimits

0xed94,	// (0x0004aa0d) main_mp4_pane_t4

0x0003,

0xf841,	// (0x0004b4ba) main_mp4_pane_t_ParamLimits

0xf841,	// (0x0004b4ba) main_mp4_pane_t

0xedd8,	// (0x0004aa51) mp4_progress_pane_ParamLimits

0xedd8,	// (0x0004aa51) mp4_progress_pane

0xee22,	// (0x0004aa9b) mp4_rocker_pane_ParamLimits

0xee22,	// (0x0004aa9b) mp4_rocker_pane

0xce7a,	// (0x00048af3) mp4_progress_pane_t1

0xce93,	// (0x00048b0c) mp4_progress_pane_t2

0x0001,

0xf84a,	// (0x0004b4c3) mp4_progress_pane_t

0xceac,	// (0x00048b25) mup_progress_pane_cp04

0x1308,	// (0x0003cf81) mp4_rocker_pane_g1

0x88ef,	// (0x00044568) aid_cell_size_keypad2_ParamLimits

0x88ef,	// (0x00044568) aid_cell_size_keypad2

0x8905,	// (0x0004457e) dialer2_ne_pane_ParamLimits

0x8905,	// (0x0004457e) dialer2_ne_pane

0x891f,	// (0x00044598) grid_dialer2_keypad_pane_ParamLimits

0x891f,	// (0x00044598) grid_dialer2_keypad_pane

0x7752,	// (0x000433cb) bg_popup_call_pane_cp07_ParamLimits

0x7752,	// (0x000433cb) bg_popup_call_pane_cp07

0x893b,	// (0x000445b4) dialer2_ne_pane_t1_ParamLimits

0x893b,	// (0x000445b4) dialer2_ne_pane_t1

0x8977,	// (0x000445f0) cell_dialer2_keypad_pane_ParamLimits

0x8977,	// (0x000445f0) cell_dialer2_keypad_pane

0xced1,	// (0x00048b4a) bg_button_pane_pane_cp04_ParamLimits

0xced1,	// (0x00048b4a) bg_button_pane_pane_cp04

0x8999,	// (0x00044612) cell_dialer2_keypad_pane_g1_ParamLimits

0x8999,	// (0x00044612) cell_dialer2_keypad_pane_g1

0x4746,	// (0x000403bf) aid_placing_vt_set_content_ParamLimits

0x4746,	// (0x000403bf) aid_placing_vt_set_content

0x476e,	// (0x000403e7) aid_placing_vt_set_title_ParamLimits

0x476e,	// (0x000403e7) aid_placing_vt_set_title

0x09ad,	// (0x0003c626) main_image3_pane

0x8a5f,	// (0x000446d8) area_side_right_pane_cp01_ParamLimits

0x8a5f,	// (0x000446d8) area_side_right_pane_cp01

0xec36,	// (0x0004a8af) main_image3_pane_g1_ParamLimits

0xec36,	// (0x0004a8af) main_image3_pane_g1

0x8a76,	// (0x000446ef) main_image3_pane_g2_ParamLimits

0x8a76,	// (0x000446ef) main_image3_pane_g2

0x8a9e,	// (0x00044717) main_image3_pane_g3_ParamLimits

0x8a9e,	// (0x00044717) main_image3_pane_g3

0x8ac8,	// (0x00044741) main_image3_pane_g4_ParamLimits

0x8ac8,	// (0x00044741) main_image3_pane_g4

0x0003,

0xf859,	// (0x0004b4d2) main_image3_pane_g_ParamLimits

0xf859,	// (0x0004b4d2) main_image3_pane_g

0x8af2,	// (0x0004476b) main_image3_pane_t1_ParamLimits

0x8af2,	// (0x0004476b) main_image3_pane_t1

0x8b4a,	// (0x000447c3) main_image3_pane_t2_ParamLimits

0x8b4a,	// (0x000447c3) main_image3_pane_t2

0x8b9c,	// (0x00044815) main_image3_pane_t3_ParamLimits

0x8b9c,	// (0x00044815) main_image3_pane_t3

0x0003,

0xf862,	// (0x0004b4db) main_image3_pane_t_ParamLimits

0xf862,	// (0x0004b4db) main_image3_pane_t

0x1055,	// (0x0003ccce) grid_sctrl_middle_pane_cp01_ParamLimits

0x1055,	// (0x0003ccce) grid_sctrl_middle_pane_cp01

0x8c24,	// (0x0004489d) cell_sctrl_middle_pane_cp01_ParamLimits

0x8c24,	// (0x0004489d) cell_sctrl_middle_pane_cp01

0x8c41,	// (0x000448ba) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x8c41,	// (0x000448ba) cell_sctrl_middle_pane_cp01_g1

0x09ad,	// (0x0003c626) main_call4_pane

0x8c57,	// (0x000448d0) aid_size_button_call4_ParamLimits

0x8c57,	// (0x000448d0) aid_size_button_call4

0x8c8a,	// (0x00044903) call4_windows_pane_ParamLimits

0x8c8a,	// (0x00044903) call4_windows_pane

0x8ca9,	// (0x00044922) grid_call4_button_pane_ParamLimits

0x8ca9,	// (0x00044922) grid_call4_button_pane

0x8cdc,	// (0x00044955) call4_windows_conf_pane

0x8cf1,	// (0x0004496a) popup_call4_audio_first_window_ParamLimits

0x8cf1,	// (0x0004496a) popup_call4_audio_first_window

0x8d41,	// (0x000449ba) popup_call4_audio_second_window_ParamLimits

0x8d41,	// (0x000449ba) popup_call4_audio_second_window

0x8d58,	// (0x000449d1) popup_call4_audio_wait_window_ParamLimits

0x8d58,	// (0x000449d1) popup_call4_audio_wait_window

0x8d66,	// (0x000449df) cell_call4_button_pane_ParamLimits

0x8d66,	// (0x000449df) cell_call4_button_pane

0x8d8b,	// (0x00044a04) bg_button_pane_cp09_ParamLimits

0x8d8b,	// (0x00044a04) bg_button_pane_cp09

0x8d97,	// (0x00044a10) cell_call4_button_pane_g1_ParamLimits

0x8d97,	// (0x00044a10) cell_call4_button_pane_g1

0x8dbd,	// (0x00044a36) cell_call4_button_pane_t1_ParamLimits

0x8dbd,	// (0x00044a36) cell_call4_button_pane_t1

0xcee5,	// (0x00048b5e) popup_call4_audio_conf_window_ParamLimits

0xcee5,	// (0x00048b5e) popup_call4_audio_conf_window

0x81d5,	// (0x00043e4e) mup3_progress_pane_t1_ParamLimits

0x81f4,	// (0x00043e6d) mup3_progress_pane_t2_ParamLimits

0xc8ec,	// (0x00048565) mup3_progress_pane_t3_ParamLimits

0xf737,	// (0x0004b3b0) mup3_progress_pane_t_ParamLimits

0xc909,	// (0x00048582) mup_progress_pane_cp03_ParamLimits

0x86f4,	// (0x0004436d) mup3_control_keys_pane_g4_copy1

0xee06,	// (0x0004aa7f) mp4_rocker2_pane_ParamLimits

0xee06,	// (0x0004aa7f) mp4_rocker2_pane

0xcef9,	// (0x00048b72) mp4_rocker2_pane_g1

0xcf01,	// (0x00048b7a) mp4_rocker2_pane_g2

0xeea6,	// (0x0004ab1f) mp4_rocker2_pane_g3

0xeeae,	// (0x0004ab27) mp4_rocker2_pane_g4

0xeeb6,	// (0x0004ab2f) mp4_rocker2_pane_g5

0x0004,

0xf86b,	// (0x0004b4e4) mp4_rocker2_pane_g

0x09ad,	// (0x0003c626) main_camera4_pane

0x09ad,	// (0x0003c626) main_video4_pane

0x87f3,	// (0x0004446c) main_video_tele_dialer_pane_t1_ParamLimits

0x87f3,	// (0x0004446c) main_video_tele_dialer_pane_t1

0x880c,	// (0x00044485) main_video_tele_dialer_pane_t2_ParamLimits

0x880c,	// (0x00044485) main_video_tele_dialer_pane_t2

0x0001,

0xf821,	// (0x0004b49a) main_video_tele_dialer_pane_t_ParamLimits

0xf821,	// (0x0004b49a) main_video_tele_dialer_pane_t

0x8dff,	// (0x00044a78) cam4_autofocus_pane_ParamLimits

0x8dff,	// (0x00044a78) cam4_autofocus_pane

0x8e15,	// (0x00044a8e) cam4_image_uncrop_pane_ParamLimits

0x8e15,	// (0x00044a8e) cam4_image_uncrop_pane

0x8e2f,	// (0x00044aa8) cam4_indicators_pane_ParamLimits

0x8e2f,	// (0x00044aa8) cam4_indicators_pane

0x8e5a,	// (0x00044ad3) main_camera4_pane_g1_ParamLimits

0x8e5a,	// (0x00044ad3) main_camera4_pane_g1

0x8e6c,	// (0x00044ae5) main_camera4_pane_g2_ParamLimits

0x8e6c,	// (0x00044ae5) main_camera4_pane_g2

0x8e7f,	// (0x00044af8) main_camera4_pane_g3_ParamLimits

0x8e7f,	// (0x00044af8) main_camera4_pane_g3

0x8e92,	// (0x00044b0b) main_camera4_pane_g4_ParamLimits

0x8e92,	// (0x00044b0b) main_camera4_pane_g4

0x8ea5,	// (0x00044b1e) main_camera4_pane_g5_ParamLimits

0x8ea5,	// (0x00044b1e) main_camera4_pane_g5

0x0005,

0xf876,	// (0x0004b4ef) main_camera4_pane_g_ParamLimits

0xf876,	// (0x0004b4ef) main_camera4_pane_g

0x8ec9,	// (0x00044b42) main_camera4_pane_t1_ParamLimits

0x8ec9,	// (0x00044b42) main_camera4_pane_t1

0x10ae,	// (0x0003cd27) bg_tb_trans_pane_cp06

0xeee2,	// (0x0004ab5b) cam4_indicators_pane_g1

0xeef3,	// (0x0004ab6c) cam4_indicators_pane_g2

0x0002,

0xf891,	// (0x0004b50a) cam4_indicators_pane_g

0xef0b,	// (0x0004ab84) cam4_indicators_pane_t1

0x8f2d,	// (0x00044ba6) main_video4_pane_g1_ParamLimits

0x8f2d,	// (0x00044ba6) main_video4_pane_g1

0x8f3c,	// (0x00044bb5) main_video4_pane_g2_ParamLimits

0x8f3c,	// (0x00044bb5) main_video4_pane_g2

0x8f4b,	// (0x00044bc4) main_video4_pane_g3_ParamLimits

0x8f4b,	// (0x00044bc4) main_video4_pane_g3

0x8f5a,	// (0x00044bd3) main_video4_pane_g4_ParamLimits

0x8f5a,	// (0x00044bd3) main_video4_pane_g4

0x0004,

0xf898,	// (0x0004b511) main_video4_pane_g_ParamLimits

0xf898,	// (0x0004b511) main_video4_pane_g

0x8f78,	// (0x00044bf1) vid4_indicators_pane_ParamLimits

0x8f78,	// (0x00044bf1) vid4_indicators_pane

0x8fa6,	// (0x00044c1f) video4_image_uncrop_cif_pane_ParamLimits

0x8fa6,	// (0x00044c1f) video4_image_uncrop_cif_pane

0x8fc0,	// (0x00044c39) video4_image_uncrop_nhd_pane_ParamLimits

0x8fc0,	// (0x00044c39) video4_image_uncrop_nhd_pane

0x8e15,	// (0x00044a8e) video4_image_uncrop_vga_pane_ParamLimits

0x8e15,	// (0x00044a8e) video4_image_uncrop_vga_pane

0x1055,	// (0x0003ccce) bg_tb_trans_pane_cp07

0xef35,	// (0x0004abae) vid4_indicators_pane_g1

0xef49,	// (0x0004abc2) vid4_indicators_pane_g2

0xef5d,	// (0x0004abd6) vid4_indicators_pane_g3

0x0004,

0xf8a3,	// (0x0004b51c) vid4_indicators_pane_g

0xef8a,	// (0x0004ac03) vid4_indicators_pane_t1

0x8fd4,	// (0x00044c4d) cam4_autofocus_pane_g1

0x8fdc,	// (0x00044c55) cam4_autofocus_pane_g2

0x8fe4,	// (0x00044c5d) cam4_autofocus_pane_g3

0x0002,

0xf8ae,	// (0x0004b527) cam4_autofocus_pane_g

0x8fec,	// (0x00044c65) cam4_autofocus_pane_g3_copy1

0x883b,	// (0x000444b4) video_down_pane_cp_t1

0x8849,	// (0x000444c2) video_down_pane_cp_t2

0x0001,

0xf826,	// (0x0004b49f) video_down_pane_cp_t

0x1055,	// (0x0003ccce) popup_vitu2_window_ParamLimits

0x1055,	// (0x0003ccce) popup_vitu2_window

0x8ff4,	// (0x00044c6d) aid_size_cell2_itu2_ParamLimits

0x8ff4,	// (0x00044c6d) aid_size_cell2_itu2

0x9014,	// (0x00044c8d) aid_size_cell_itu2_ParamLimits

0x9014,	// (0x00044c8d) aid_size_cell_itu2

0x827f,	// (0x00043ef8) bg_popup_window_pane_cp09_ParamLimits

0x827f,	// (0x00043ef8) bg_popup_window_pane_cp09

0x9061,	// (0x00044cda) field_vitu2_entry_pane_ParamLimits

0x9061,	// (0x00044cda) field_vitu2_entry_pane

0x9084,	// (0x00044cfd) grid_vitu2_function_pane_ParamLimits

0x9084,	// (0x00044cfd) grid_vitu2_function_pane

0x90cf,	// (0x00044d48) grid_vitu2_itu_pane_ParamLimits

0x90cf,	// (0x00044d48) grid_vitu2_itu_pane

0x915d,	// (0x00044dd6) cell_vitu2_itu_pane_ParamLimits

0x915d,	// (0x00044dd6) cell_vitu2_itu_pane

0x9189,	// (0x00044e02) cell_vitu2_function_pane_ParamLimits

0x9189,	// (0x00044e02) cell_vitu2_function_pane

0xcf09,	// (0x00048b82) bg_popup_call_pane_cp08_ParamLimits

0xcf09,	// (0x00048b82) bg_popup_call_pane_cp08

0xcf20,	// (0x00048b99) field_vitu2_entry_pane_g1

0xcf2c,	// (0x00048ba5) field_vitu2_entry_pane_g2

0x0002,

0xf8b5,	// (0x0004b52e) field_vitu2_entry_pane_g

0x3218,	// (0x0003ee91) field_vitu2_entry_pane_t1_ParamLimits

0x3218,	// (0x0003ee91) field_vitu2_entry_pane_t1

0xcf38,	// (0x00048bb1) field_vitu2_entry_pane_t2_ParamLimits

0xcf38,	// (0x00048bb1) field_vitu2_entry_pane_t2

0x0001,

0xf8bc,	// (0x0004b535) field_vitu2_entry_pane_t_ParamLimits

0xf8bc,	// (0x0004b535) field_vitu2_entry_pane_t

0x91c8,	// (0x00044e41) bg_button_pane_cp010_ParamLimits

0x91c8,	// (0x00044e41) bg_button_pane_cp010

0x91d6,	// (0x00044e4f) cell_vitu2_itu_pane_g1

0x91fc,	// (0x00044e75) cell_vitu2_itu_pane_t1_ParamLimits

0x91fc,	// (0x00044e75) cell_vitu2_itu_pane_t1

0x324a,	// (0x0003eec3) cell_vitu2_itu_pane_t2_ParamLimits

0x324a,	// (0x0003eec3) cell_vitu2_itu_pane_t2

0x0002,

0xf8c6,	// (0x0004b53f) cell_vitu2_itu_pane_t_ParamLimits

0xf8c6,	// (0x0004b53f) cell_vitu2_itu_pane_t

0x1055,	// (0x0003ccce) bg_button_pane_cp011

0x925a,	// (0x00044ed3) cell_vitu2_function_pane_g1

0x09ad,	// (0x0003c626) main_myfav_hc_pane

0x8bec,	// (0x00044865) popup_image3_note_pane_ParamLimits

0x8bec,	// (0x00044865) popup_image3_note_pane

0x8c08,	// (0x00044881) popup_image3_tool_bar_pane_ParamLimits

0x8c08,	// (0x00044881) popup_image3_tool_bar_pane

0x32d8,	// (0x0003ef51) cell_vitu2_itu_pane_t3_ParamLimits

0x32d8,	// (0x0003ef51) cell_vitu2_itu_pane_t3

0x09ad,	// (0x0003c626) bg_popup_trans_pane

0xcf5d,	// (0x00048bd6) grid_image3_tool_bar_pane

0xcf67,	// (0x00048be0) bg_popup_trans_pane_g1

0x152d,	// (0x0003d1a6) bg_popup_trans_pane_g2

0xcf6f,	// (0x00048be8) bg_popup_trans_pane_g3

0xcf77,	// (0x00048bf0) bg_popup_trans_pane_g4

0xcf7f,	// (0x00048bf8) bg_popup_trans_pane_g5

0xcf87,	// (0x00048c00) bg_popup_trans_pane_g6

0xcf8f,	// (0x00048c08) bg_popup_trans_pane_g7

0xcf97,	// (0x00048c10) bg_popup_trans_pane_g8

0x150d,	// (0x0003d186) bg_popup_trans_pane_g9

0x0008,

0xf8cd,	// (0x0004b546) bg_popup_trans_pane_g

0xcf9f,	// (0x00048c18) cell_image3_tool_bar_pane_ParamLimits

0xcf9f,	// (0x00048c18) cell_image3_tool_bar_pane

0x1308,	// (0x0003cf81) cell_image3_tool_bar_pane_g1

0x09ad,	// (0x0003c626) bg_popup_trans_pane_cp1

0xcfb3,	// (0x00048c2c) popup_image3_note_pane_t1

0xcfc1,	// (0x00048c3a) popup_image3_note_pane_t2

0xcfcf,	// (0x00048c48) popup_image3_note_pane_t3

0x0002,

0xf8e0,	// (0x0004b559) popup_image3_note_pane_t

0xcfdd,	// (0x00048c56) popup_image3_note_pane_t3_copy1

0x926e,	// (0x00044ee7) bg_myfav_hc_instruction_pane_ParamLimits

0x926e,	// (0x00044ee7) bg_myfav_hc_instruction_pane

0x9282,	// (0x00044efb) cell_myfav_contact_pane_ParamLimits

0x9282,	// (0x00044efb) cell_myfav_contact_pane

0x92a0,	// (0x00044f19) cell_myfav_contact_pane_cp1_ParamLimits

0x92a0,	// (0x00044f19) cell_myfav_contact_pane_cp1

0x92b8,	// (0x00044f31) cell_myfav_contact_pane_cp2_ParamLimits

0x92b8,	// (0x00044f31) cell_myfav_contact_pane_cp2

0x92d0,	// (0x00044f49) cell_myfav_contact_pane_cp3_ParamLimits

0x92d0,	// (0x00044f49) cell_myfav_contact_pane_cp3

0x92e7,	// (0x00044f60) cell_myfav_contact_pane_cp4_ParamLimits

0x92e7,	// (0x00044f60) cell_myfav_contact_pane_cp4

0x92ff,	// (0x00044f78) cell_myfav_contact_pane_cp5_ParamLimits

0x92ff,	// (0x00044f78) cell_myfav_contact_pane_cp5

0x9313,	// (0x00044f8c) cell_myfav_contact_pane_cp6_ParamLimits

0x9313,	// (0x00044f8c) cell_myfav_contact_pane_cp6

0x9329,	// (0x00044fa2) cell_myfav_contact_pane_cp7_ParamLimits

0x9329,	// (0x00044fa2) cell_myfav_contact_pane_cp7

0xcfeb,	// (0x00048c64) listscroll_gen_pane_cp05

0x9343,	// (0x00044fbc) main_myfav_hc_pane_g1_ParamLimits

0x9343,	// (0x00044fbc) main_myfav_hc_pane_g1

0x935d,	// (0x00044fd6) main_myfav_hc_pane_g2_ParamLimits

0x935d,	// (0x00044fd6) main_myfav_hc_pane_g2

0x0002,

0xf8e7,	// (0x0004b560) main_myfav_hc_pane_g_ParamLimits

0xf8e7,	// (0x0004b560) main_myfav_hc_pane_g

0x938f,	// (0x00045008) main_myfav_hc_pane_t1_ParamLimits

0x938f,	// (0x00045008) main_myfav_hc_pane_t1

0xcff4,	// (0x00048c6d) main_myfav_hc_pane_t2_ParamLimits

0xcff4,	// (0x00048c6d) main_myfav_hc_pane_t2

0xd006,	// (0x00048c7f) main_myfav_hc_pane_t3_ParamLimits

0xd006,	// (0x00048c7f) main_myfav_hc_pane_t3

0x93a6,	// (0x0004501f) main_myfav_hc_pane_t4_ParamLimits

0x93a6,	// (0x0004501f) main_myfav_hc_pane_t4

0x0004,

0xf8ee,	// (0x0004b567) main_myfav_hc_pane_t_ParamLimits

0xf8ee,	// (0x0004b567) main_myfav_hc_pane_t

0x1308,	// (0x0003cf81) bg_myfav_hc_instruction_pane_g1

0xd018,	// (0x00048c91) cell_myfav_contact_pane_g1_ParamLimits

0xd018,	// (0x00048c91) cell_myfav_contact_pane_g1

0xd018,	// (0x00048c91) cell_myfav_contact_pane_g2_ParamLimits

0xd018,	// (0x00048c91) cell_myfav_contact_pane_g2

0xd024,	// (0x00048c9d) cell_myfav_contact_pane_g3_ParamLimits

0xd024,	// (0x00048c9d) cell_myfav_contact_pane_g3

0x10bc,	// (0x0003cd35) cell_myfav_contact_pane_g4_ParamLimits

0x10bc,	// (0x0003cd35) cell_myfav_contact_pane_g4

0xd031,	// (0x00048caa) cell_myfav_contact_pane_g5_ParamLimits

0xd031,	// (0x00048caa) cell_myfav_contact_pane_g5

0x0004,

0xf8f9,	// (0x0004b572) cell_myfav_contact_pane_g_ParamLimits

0xf8f9,	// (0x0004b572) cell_myfav_contact_pane_g

0x9377,	// (0x00044ff0) main_myfav_hc_pane_g3_ParamLimits

0x9377,	// (0x00044ff0) main_myfav_hc_pane_g3

0x3b0e,	// (0x0003f787) popup_adpt_find_window

0x93ce,	// (0x00045047) afind_page_pane_ParamLimits

0x93ce,	// (0x00045047) afind_page_pane

0x93e3,	// (0x0004505c) aid_size_cell_afind_ParamLimits

0x93e3,	// (0x0004505c) aid_size_cell_afind

0x9401,	// (0x0004507a) bg_popup_sub_pane_cp09_ParamLimits

0x9401,	// (0x0004507a) bg_popup_sub_pane_cp09

0x940e,	// (0x00045087) find_pane_cp01_ParamLimits

0x940e,	// (0x00045087) find_pane_cp01

0xd03d,	// (0x00048cb6) grid_afind_control_pane_ParamLimits

0xd03d,	// (0x00048cb6) grid_afind_control_pane

0x941b,	// (0x00045094) grid_afind_pane_ParamLimits

0x941b,	// (0x00045094) grid_afind_pane

0x943a,	// (0x000450b3) cell_afind_pane_ParamLimits

0x943a,	// (0x000450b3) cell_afind_pane

0x1308,	// (0x0003cf81) afind_page_pane_g1

0x94a1,	// (0x0004511a) afind_page_pane_g2

0x94aa,	// (0x00045123) afind_page_pane_g3

0x0002,

0xf904,	// (0x0004b57d) afind_page_pane_g

0x94b3,	// (0x0004512c) afind_page_pane_t1

0xd051,	// (0x00048cca) cell_afind_grid_control_pane_ParamLimits

0xd051,	// (0x00048cca) cell_afind_grid_control_pane

0xced1,	// (0x00048b4a) bg_button_pane_cp69_ParamLimits

0xced1,	// (0x00048b4a) bg_button_pane_cp69

0x94d3,	// (0x0004514c) cell_afind_pane_g1_ParamLimits

0x94d3,	// (0x0004514c) cell_afind_pane_g1

0x94e0,	// (0x00045159) cell_afind_pane_t1_ParamLimits

0x94e0,	// (0x00045159) cell_afind_pane_t1

0x1312,	// (0x0003cf8b) bg_button_pane_cp72

0xd060,	// (0x00048cd9) cell_afind_grid_control_pane_g1

0x5ee3,	// (0x00041b5c) aid_image_placing_area_ParamLimits

0x5ee3,	// (0x00041b5c) aid_image_placing_area

0x10ae,	// (0x0003cd27) field_vitu_entry_pane_g1_ParamLimits

0x10ae,	// (0x0003cd27) field_vitu_entry_pane_g1

0x10ae,	// (0x0003cd27) field_vitu_entry_pane_g2_ParamLimits

0x10ae,	// (0x0003cd27) field_vitu_entry_pane_g2

0x0001,

0xf201,	// (0x0004ae7a) field_vitu_entry_pane_g_ParamLimits

0xf201,	// (0x0004ae7a) field_vitu_entry_pane_g

0xcbf6,	// (0x0004886f) cell_vitu_itu_pane_g1_ParamLimits

0xcbd9,	// (0x00048852) cell_vitu_itu_pane_t3_ParamLimits

0xcbd9,	// (0x00048852) cell_vitu_itu_pane_t3

0xce7a,	// (0x00048af3) mp4_progress_pane_t1_ParamLimits

0xce93,	// (0x00048b0c) mp4_progress_pane_t2_ParamLimits

0xf84a,	// (0x0004b4c3) mp4_progress_pane_t_ParamLimits

0xceac,	// (0x00048b25) mup_progress_pane_cp04_ParamLimits

0x93ba,	// (0x00045033) main_myfav_hc_pane_t5_ParamLimits

0x93ba,	// (0x00045033) main_myfav_hc_pane_t5

0xc117,	// (0x00047d90) aid_zoom_text_primary

0x3b0e,	// (0x0003f787) popup_adpt_find_window_ParamLimits

0x1055,	// (0x0003ccce) main_cam_set_pane

0x8e46,	// (0x00044abf) cam4_zoom_pane_ParamLimits

0x8e46,	// (0x00044abf) cam4_zoom_pane

0x94f2,	// (0x0004516b) main_cam_set_pane_g1_ParamLimits

0x94f2,	// (0x0004516b) main_cam_set_pane_g1

0x9500,	// (0x00045179) main_cam_set_pane_g2_ParamLimits

0x9500,	// (0x00045179) main_cam_set_pane_g2

0x0001,

0xf90b,	// (0x0004b584) main_cam_set_pane_g_ParamLimits

0xf90b,	// (0x0004b584) main_cam_set_pane_g

0x9521,	// (0x0004519a) main_cam_set_pane_t1_ParamLimits

0x9521,	// (0x0004519a) main_cam_set_pane_t1

0x953c,	// (0x000451b5) main_cset_listscroll_pane_ParamLimits

0x953c,	// (0x000451b5) main_cset_listscroll_pane

0x9562,	// (0x000451db) main_cset_slider_pane_ParamLimits

0x9562,	// (0x000451db) main_cset_slider_pane

0xd071,	// (0x00048cea) main_cset_list_pane_ParamLimits

0xd071,	// (0x00048cea) main_cset_list_pane

0xd081,	// (0x00048cfa) scroll_pane_cp028

0x9588,	// (0x00045201) aid_area_touch_slider

0x95a4,	// (0x0004521d) cset_slider_pane

0x95c7,	// (0x00045240) main_cset_slider_pane_g1

0x95dc,	// (0x00045255) main_cset_slider_pane_g2

0x0011,

0xf910,	// (0x0004b589) main_cset_slider_pane_g

0xd0d2,	// (0x00048d4b) main_cset_slider_pane_t1

0x9680,	// (0x000452f9) main_cset_slider_pane_t2

0x969a,	// (0x00045313) main_cset_slider_pane_t3

0x96b4,	// (0x0004532d) main_cset_slider_pane_t4

0x96ce,	// (0x00045347) main_cset_slider_pane_t5

0x96e8,	// (0x00045361) main_cset_slider_pane_t6

0x96fd,	// (0x00045376) main_cset_slider_pane_t7

0x000e,

0xf935,	// (0x0004b5ae) main_cset_slider_pane_t

0x9801,	// (0x0004547a) cset_list_set_pane_ParamLimits

0x9801,	// (0x0004547a) cset_list_set_pane

0xd16c,	// (0x00048de5) aid_position_infowindow_above

0xd174,	// (0x00048ded) aid_position_infowindow_below

0x3336,	// (0x0003efaf) cset_list_set_pane_g1_ParamLimits

0x3336,	// (0x0003efaf) cset_list_set_pane_g1

0x3342,	// (0x0003efbb) cset_list_set_pane_g3_ParamLimits

0x3342,	// (0x0003efbb) cset_list_set_pane_g3

0x0001,

0xf954,	// (0x0004b5cd) cset_list_set_pane_g_ParamLimits

0xf954,	// (0x0004b5cd) cset_list_set_pane_g

0x3351,	// (0x0003efca) cset_list_set_pane_t1_ParamLimits

0x3351,	// (0x0003efca) cset_list_set_pane_t1

0x1055,	// (0x0003ccce) list_highlight_pane_cp021_ParamLimits

0x1055,	// (0x0003ccce) list_highlight_pane_cp021

0x1e20,	// (0x0003da99) cset_slider_pane_g1

0x1e32,	// (0x0003daab) cset_slider_pane_g2

0x1e29,	// (0x0003daa2) cset_slider_pane_g3

0x0002,

0xf959,	// (0x0004b5d2) cset_slider_pane_g

0xefa1,	// (0x0004ac1a) aid_area_touch_cam4_zoom

0xefa9,	// (0x0004ac22) cam4_zoom_cont_pane

0xefb1,	// (0x0004ac2a) cam4_zoom_pane_g1

0xefb9,	// (0x0004ac32) cam4_zoom_pane_g2

0x9813,	// (0x0004548c) cam4_zoom_pane_g3

0x0002,

0xf960,	// (0x0004b5d9) cam4_zoom_pane_g

0xcd1c,	// (0x00048995) cam4_zoom_cont_pane_g1

0xd17c,	// (0x00048df5) cam4_zoom_cont_pane_g2

0xd185,	// (0x00048dfe) cam4_zoom_cont_pane_g3

0x0002,

0xf967,	// (0x0004b5e0) cam4_zoom_cont_pane_g

0x8c75,	// (0x000448ee) call4_image_pane_ParamLimits

0x8c75,	// (0x000448ee) call4_image_pane

0x8cdc,	// (0x00044955) call4_windows_conf_pane_ParamLimits

0x8d1f,	// (0x00044998) popup_call4_audio_in_window_ParamLimits

0x8d1f,	// (0x00044998) popup_call4_audio_in_window

0x09ad,	// (0x0003c626) bg_popup_call2_act_pane_cp02

0xcedd,	// (0x00048b56) call4_list_conf_pane

0x1308,	// (0x0003cf81) call4_image_pane_g1

0x1308,	// (0x0003cf81) call4_image_pane_g2

0x0001,

0xf3d8,	// (0x0004b051) call4_image_pane_g

0xd18e,	// (0x00048e07) list_single_graphic_popup_conf4_pane_ParamLimits

0xd18e,	// (0x00048e07) list_single_graphic_popup_conf4_pane

0x09ad,	// (0x0003c626) list_highlight_pane_cp022

0xd1a1,	// (0x00048e1a) list_single_graphic_popup_conf4_pane_g1

0x1a3f,	// (0x0003d6b8) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf96e,	// (0x0004b5e7) list_single_graphic_popup_conf4_pane_g

0xd1a9,	// (0x00048e22) list_single_graphic_popup_conf4_pane_t1

0x4892,	// (0x0004050b) popup_vtel_slider_window_ParamLimits

0x4892,	// (0x0004050b) popup_vtel_slider_window

0xcebf,	// (0x00048b38) dialer2_ne_pane_t2_ParamLimits

0xcebf,	// (0x00048b38) dialer2_ne_pane_t2

0x0001,

0xf84f,	// (0x0004b4c8) dialer2_ne_pane_t_ParamLimits

0xf84f,	// (0x0004b4c8) dialer2_ne_pane_t

0x7752,	// (0x000433cb) bg_popup_sub_pane_cp010_ParamLimits

0x7752,	// (0x000433cb) bg_popup_sub_pane_cp010

0x981b,	// (0x00045494) popup_vtel_slider_window_g1_ParamLimits

0x981b,	// (0x00045494) popup_vtel_slider_window_g1

0x982e,	// (0x000454a7) popup_vtel_slider_window_g2_ParamLimits

0x982e,	// (0x000454a7) popup_vtel_slider_window_g2

0x0003,

0xf973,	// (0x0004b5ec) popup_vtel_slider_window_g_ParamLimits

0xf973,	// (0x0004b5ec) popup_vtel_slider_window_g

0x9884,	// (0x000454fd) vtel_slider_pane_ParamLimits

0x9884,	// (0x000454fd) vtel_slider_pane

0x98a6,	// (0x0004551f) vtel_slider_pane_g1_ParamLimits

0x98a6,	// (0x0004551f) vtel_slider_pane_g1

0x98ba,	// (0x00045533) vtel_slider_pane_g2_ParamLimits

0x98ba,	// (0x00045533) vtel_slider_pane_g2

0x98d2,	// (0x0004554b) vtel_slider_pane_g3_ParamLimits

0x98d2,	// (0x0004554b) vtel_slider_pane_g3

0x98a6,	// (0x0004551f) vtel_slider_pane_g4_ParamLimits

0x98a6,	// (0x0004551f) vtel_slider_pane_g4

0x98e8,	// (0x00045561) vtel_slider_pane_g5_ParamLimits

0x98e8,	// (0x00045561) vtel_slider_pane_g5

0x0004,

0xf97c,	// (0x0004b5f5) vtel_slider_pane_g_ParamLimits

0xf97c,	// (0x0004b5f5) vtel_slider_pane_g

0x1055,	// (0x0003ccce) main_gallery2_pane

0x9034,	// (0x00044cad) aid_size_row_itut2_dropdow_list_ParamLimits

0x9034,	// (0x00044cad) aid_size_row_itut2_dropdow_list

0x90a9,	// (0x00044d22) grid_vitu2_function_top_pane_ParamLimits

0x90a9,	// (0x00044d22) grid_vitu2_function_top_pane

0x910b,	// (0x00044d84) popup_vitu2_dropdown_list_window_ParamLimits

0x910b,	// (0x00044d84) popup_vitu2_dropdown_list_window

0x9131,	// (0x00044daa) popup_vitu2_match_list_window

0x98fe,	// (0x00045577) cell_vitu2_function_top_pane_ParamLimits

0x98fe,	// (0x00045577) cell_vitu2_function_top_pane

0x9916,	// (0x0004558f) cell_vitu2_function_top_pane_cp01_ParamLimits

0x9916,	// (0x0004558f) cell_vitu2_function_top_pane_cp01

0x9932,	// (0x000455ab) cell_vitu2_function_top_wide_pane_ParamLimits

0x9932,	// (0x000455ab) cell_vitu2_function_top_wide_pane

0x1055,	// (0x0003ccce) bg_button_pane_cp012

0x9950,	// (0x000455c9) cell_vitu2_function_top_pane_g1

0xefc1,	// (0x0004ac3a) bg_button_pane_cp013_ParamLimits

0xefc1,	// (0x0004ac3a) bg_button_pane_cp013

0x9964,	// (0x000455dd) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x9964,	// (0x000455dd) cell_vitu2_function_top_wide_pane_g1

0x1055,	// (0x0003ccce) bg_popup_sub_pane_cp20

0x997c,	// (0x000455f5) list_vitu2_match_list_pane

0xcf67,	// (0x00048be0) bg_popup_sub_pane_cp20_g1

0xcf6f,	// (0x00048be8) bg_popup_sub_pane_cp20_g2

0x152d,	// (0x0003d1a6) bg_popup_sub_pane_cp20_g3

0xcf77,	// (0x00048bf0) bg_popup_sub_pane_cp20_g4

0x150d,	// (0x0003d186) bg_popup_sub_pane_cp20_g5

0xd1bf,	// (0x00048e38) bg_popup_sub_pane_cp20_g6

0xcf87,	// (0x00048c00) bg_popup_sub_pane_cp20_g7

0xcf8f,	// (0x00048c08) bg_popup_sub_pane_cp20_g8

0xcf97,	// (0x00048c10) bg_popup_sub_pane_cp20_g9

0x0008,

0xf987,	// (0x0004b600) bg_popup_sub_pane_cp20_g

0xefdd,	// (0x0004ac56) list_vitu2_match_list_item_pane_ParamLimits

0xefdd,	// (0x0004ac56) list_vitu2_match_list_item_pane

0xefef,	// (0x0004ac68) list_vitu2_match_list_item_pane_t1

0x09ad,	// (0x0003c626) bg_popup_sub_pane_cp21

0x12d2,	// (0x0003cf4b) grid_vitu2_dropdown_list_pane

0x9994,	// (0x0004560d) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x9994,	// (0x0004560d) cell_vitu2_dropdown_list_char_pane

0x99b5,	// (0x0004562e) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x99b5,	// (0x0004562e) cell_vitu2_dropdown_list_ctrl_pane

0xd1c7,	// (0x00048e40) cell_vitu2_dropdown_list_char_pane_g1

0xd1d0,	// (0x00048e49) cell_vitu2_dropdown_list_char_pane_g2

0xd1d9,	// (0x00048e52) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xf99a,	// (0x0004b613) cell_vitu2_dropdown_list_char_pane_g

0x99df,	// (0x00045658) cell_vitu2_dropdown_list_char_pane_t1

0x99ed,	// (0x00045666) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x99ed,	// (0x00045666) cell_vitu2_dropdown_list_ctrl_pane_g1

0x99fd,	// (0x00045676) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x99fd,	// (0x00045676) cell_vitu2_dropdown_list_ctrl_pane_g2

0x9a0e,	// (0x00045687) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x9a0e,	// (0x00045687) cell_vitu2_dropdown_list_ctrl_pane_g3

0x9a1e,	// (0x00045697) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x9a1e,	// (0x00045697) cell_vitu2_dropdown_list_ctrl_pane_g4

0x10ae,	// (0x0003cd27) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0x10ae,	// (0x0003cd27) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xf9a1,	// (0x0004b61a) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xf9a1,	// (0x0004b61a) cell_vitu2_dropdown_list_ctrl_pane_g

0x9a3a,	// (0x000456b3) aid_size_cell_gallery2_ParamLimits

0x9a3a,	// (0x000456b3) aid_size_cell_gallery2

0x9a58,	// (0x000456d1) grid_gallery2_pane_ParamLimits

0x9a58,	// (0x000456d1) grid_gallery2_pane

0x9a72,	// (0x000456eb) scroll_pane_cp029_ParamLimits

0x9a72,	// (0x000456eb) scroll_pane_cp029

0x9a83,	// (0x000456fc) cell_gallery2_pane_ParamLimits

0x9a83,	// (0x000456fc) cell_gallery2_pane

0xd1e2,	// (0x00048e5b) cell_gallery2_pane_g2

0x9ae2,	// (0x0004575b) cell_gallery2_pane_g3

0xd1ea,	// (0x00048e63) cell_gallery2_pane_g4

0xd1f2,	// (0x00048e6b) cell_gallery2_pane_g5

0x12d2,	// (0x0003cf4b) grid_highlight_pane_cp10

0x9131,	// (0x00044daa) popup_vitu2_match_list_window_ParamLimits

0x9146,	// (0x00044dbf) popup_vitu2_query_window_ParamLimits

0x9146,	// (0x00044dbf) popup_vitu2_query_window

0x09ad,	// (0x0003c626) bg_vitu2_candi_button_pane

0xd1c7,	// (0x00048e40) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xd1d0,	// (0x00048e49) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xd1d9,	// (0x00048e52) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x3366,	// (0x0003efdf) bg_button_pane_cp015

0x9aea,	// (0x00045763) bg_button_pane_cp016

0x9afd,	// (0x00045776) bg_button_pane_cp017

0x22ff,	// (0x0003df78) bg_popup_sub_pane_cp22

0xd1fa,	// (0x00048e73) popup_vitu2_query_window_g1

0x3397,	// (0x0003f010) popup_vitu2_query_window_g2

0x0002,

0xf9ac,	// (0x0004b625) popup_vitu2_query_window_g

0x33b6,	// (0x0003f02f) popup_vitu2_query_window_t1_ParamLimits

0x33b6,	// (0x0003f02f) popup_vitu2_query_window_t1

0x33eb,	// (0x0003f064) popup_vitu2_query_window_t2_ParamLimits

0x33eb,	// (0x0003f064) popup_vitu2_query_window_t2

0x33fd,	// (0x0003f076) popup_vitu2_query_window_t3_ParamLimits

0x33fd,	// (0x0003f076) popup_vitu2_query_window_t3

0x9b21,	// (0x0004579a) popup_vitu2_query_window_t4_ParamLimits

0x9b21,	// (0x0004579a) popup_vitu2_query_window_t4

0x9b42,	// (0x000457bb) popup_vitu2_query_window_t5_ParamLimits

0x9b42,	// (0x000457bb) popup_vitu2_query_window_t5

0x0006,

0xf9b3,	// (0x0004b62c) popup_vitu2_query_window_t_ParamLimits

0xf9b3,	// (0x0004b62c) popup_vitu2_query_window_t

0xd069,	// (0x00048ce2) main_cset_text_pane

0x9588,	// (0x00045201) aid_area_touch_slider_ParamLimits

0x95a4,	// (0x0004521d) cset_slider_pane_ParamLimits

0x95c7,	// (0x00045240) main_cset_slider_pane_g1_ParamLimits

0x95dc,	// (0x00045255) main_cset_slider_pane_g2_ParamLimits

0xd08a,	// (0x00048d03) main_cset_slider_pane_g3_ParamLimits

0xd08a,	// (0x00048d03) main_cset_slider_pane_g3

0x95f1,	// (0x0004526a) main_cset_slider_pane_g4_ParamLimits

0x95f1,	// (0x0004526a) main_cset_slider_pane_g4

0x9600,	// (0x00045279) main_cset_slider_pane_g5_ParamLimits

0x9600,	// (0x00045279) main_cset_slider_pane_g5

0x960c,	// (0x00045285) main_cset_slider_pane_g6_ParamLimits

0x960c,	// (0x00045285) main_cset_slider_pane_g6

0xf910,	// (0x0004b589) main_cset_slider_pane_g_ParamLimits

0xd0d2,	// (0x00048d4b) main_cset_slider_pane_t1_ParamLimits

0x9680,	// (0x000452f9) main_cset_slider_pane_t2_ParamLimits

0x969a,	// (0x00045313) main_cset_slider_pane_t3_ParamLimits

0x96b4,	// (0x0004532d) main_cset_slider_pane_t4_ParamLimits

0x96ce,	// (0x00045347) main_cset_slider_pane_t5_ParamLimits

0x96e8,	// (0x00045361) main_cset_slider_pane_t6_ParamLimits

0x96fd,	// (0x00045376) main_cset_slider_pane_t7_ParamLimits

0x9727,	// (0x000453a0) main_cset_slider_pane_t8_ParamLimits

0x9727,	// (0x000453a0) main_cset_slider_pane_t8

0x974f,	// (0x000453c8) main_cset_slider_pane_t9_ParamLimits

0x974f,	// (0x000453c8) main_cset_slider_pane_t9

0x9777,	// (0x000453f0) main_cset_slider_pane_t10_ParamLimits

0x9777,	// (0x000453f0) main_cset_slider_pane_t10

0x979f,	// (0x00045418) main_cset_slider_pane_t11_ParamLimits

0x979f,	// (0x00045418) main_cset_slider_pane_t11

0x97c7,	// (0x00045440) main_cset_slider_pane_t12_ParamLimits

0x97c7,	// (0x00045440) main_cset_slider_pane_t12

0x97e4,	// (0x0004545d) main_cset_slider_pane_t13_ParamLimits

0x97e4,	// (0x0004545d) main_cset_slider_pane_t13

0xf935,	// (0x0004b5ae) main_cset_slider_pane_t_ParamLimits

0x09ad,	// (0x0003c626) bg_popup_sub_pane_cp011

0xd206,	// (0x00048e7f) main_cset_text_pane_g1

0xd20e,	// (0x00048e87) main_cset_text_pane_t1

0xd21c,	// (0x00048e95) main_cset_text_pane_t2

0xd22a,	// (0x00048ea3) main_cset_text_pane_t3

0xd238,	// (0x00048eb1) main_cset_text_pane_t4

0xd246,	// (0x00048ebf) main_cset_text_pane_t5

0xd254,	// (0x00048ecd) main_cset_text_pane_t6

0xd262,	// (0x00048edb) main_cset_text_pane_t7

0x0006,

0xf9c2,	// (0x0004b63b) main_cset_text_pane_t

0x09ad,	// (0x0003c626) main_cam4_burst_pane

0x09ad,	// (0x0003c626) main_cam5_pane

0x94c1,	// (0x0004513a) bg_button_pane_cp019

0x94ca,	// (0x00045143) bg_button_pane_cp020

0xd096,	// (0x00048d0f) main_cset_slider_pane_g7_ParamLimits

0xd096,	// (0x00048d0f) main_cset_slider_pane_g7

0xd0a2,	// (0x00048d1b) main_cset_slider_pane_g8_ParamLimits

0xd0a2,	// (0x00048d1b) main_cset_slider_pane_g8

0x9620,	// (0x00045299) main_cset_slider_pane_g9_ParamLimits

0x9620,	// (0x00045299) main_cset_slider_pane_g9

0x962c,	// (0x000452a5) main_cset_slider_pane_g10_ParamLimits

0x962c,	// (0x000452a5) main_cset_slider_pane_g10

0x9638,	// (0x000452b1) main_cset_slider_pane_g11_ParamLimits

0x9638,	// (0x000452b1) main_cset_slider_pane_g11

0x9644,	// (0x000452bd) main_cset_slider_pane_g12_ParamLimits

0x9644,	// (0x000452bd) main_cset_slider_pane_g12

0x9650,	// (0x000452c9) main_cset_slider_pane_g13_ParamLimits

0x9650,	// (0x000452c9) main_cset_slider_pane_g13

0x965c,	// (0x000452d5) main_cset_slider_pane_g14_ParamLimits

0x965c,	// (0x000452d5) main_cset_slider_pane_g14

0x9668,	// (0x000452e1) main_cset_slider_pane_g15_ParamLimits

0x9668,	// (0x000452e1) main_cset_slider_pane_g15

0xd0fa,	// (0x00048d73) main_cset_slider_pane_t14_ParamLimits

0xd0fa,	// (0x00048d73) main_cset_slider_pane_t14

0xd133,	// (0x00048dac) main_cset_slider_pane_t15_ParamLimits

0xd133,	// (0x00048dac) main_cset_slider_pane_t15

0x9b63,	// (0x000457dc) aid_cam4_burst_size_cell_ParamLimits

0x9b63,	// (0x000457dc) aid_cam4_burst_size_cell

0x9b83,	// (0x000457fc) grid_cam4_burst_pane_ParamLimits

0x9b83,	// (0x000457fc) grid_cam4_burst_pane

0x9bbb,	// (0x00045834) linegrid_cam4_burst_pane_ParamLimits

0x9bbb,	// (0x00045834) linegrid_cam4_burst_pane

0xd270,	// (0x00048ee9) scroll_pane_cp30_ParamLimits

0xd270,	// (0x00048ee9) scroll_pane_cp30

0x9bdf,	// (0x00045858) cell_cam4_burst_pane_ParamLimits

0x9bdf,	// (0x00045858) cell_cam4_burst_pane

0xd27c,	// (0x00048ef5) linegrid_cam4_burst_pane_g1_ParamLimits

0xd27c,	// (0x00048ef5) linegrid_cam4_burst_pane_g1

0x9c2c,	// (0x000458a5) linegrid_cam4_burst_pane_g2_ParamLimits

0x9c2c,	// (0x000458a5) linegrid_cam4_burst_pane_g2

0xd289,	// (0x00048f02) linegrid_cam4_burst_pane_g3_ParamLimits

0xd289,	// (0x00048f02) linegrid_cam4_burst_pane_g3

0x0002,

0xf9d1,	// (0x0004b64a) linegrid_cam4_burst_pane_g_ParamLimits

0xf9d1,	// (0x0004b64a) linegrid_cam4_burst_pane_g

0x9c3d,	// (0x000458b6) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x9c3d,	// (0x000458b6) linegrid_cam4_burst_pane_g3_copy1

0xd296,	// (0x00048f0f) linegrid_cam4_burst_pane_g4_ParamLimits

0xd296,	// (0x00048f0f) linegrid_cam4_burst_pane_g4

0x9c57,	// (0x000458d0) linegrid_cam4_burst_pane_g5_ParamLimits

0x9c57,	// (0x000458d0) linegrid_cam4_burst_pane_g5

0x9c68,	// (0x000458e1) linegrid_cam4_burst_pane_g6_ParamLimits

0x9c68,	// (0x000458e1) linegrid_cam4_burst_pane_g6

0xd2a3,	// (0x00048f1c) linegrid_cam4_burst_pane_g7_ParamLimits

0xd2a3,	// (0x00048f1c) linegrid_cam4_burst_pane_g7

0x9c7f,	// (0x000458f8) cell_cam4_burst_pane_g1

0xd2bc,	// (0x00048f35) main_cam5_pane_t1_ParamLimits

0xd2bc,	// (0x00048f35) main_cam5_pane_t1

0xd2ce,	// (0x00048f47) main_cam5_pane_t2_ParamLimits

0xd2ce,	// (0x00048f47) main_cam5_pane_t2

0xd2e0,	// (0x00048f59) main_cam5_pane_t3_ParamLimits

0xd2e0,	// (0x00048f59) main_cam5_pane_t3

0xd2f2,	// (0x00048f6b) main_cam5_pane_t4_ParamLimits

0xd2f2,	// (0x00048f6b) main_cam5_pane_t4

0xd30a,	// (0x00048f83) main_cam5_pane_t5_ParamLimits

0xd30a,	// (0x00048f83) main_cam5_pane_t5

0xd31e,	// (0x00048f97) main_cam5_pane_t6_ParamLimits

0xd31e,	// (0x00048f97) main_cam5_pane_t6

0xd332,	// (0x00048fab) main_cam5_pane_t7_ParamLimits

0xd332,	// (0x00048fab) main_cam5_pane_t7

0xd344,	// (0x00048fbd) main_cam5_pane_t8_ParamLimits

0xd344,	// (0x00048fbd) main_cam5_pane_t8

0xd360,	// (0x00048fd9) main_cam5_pane_t9_ParamLimits

0xd360,	// (0x00048fd9) main_cam5_pane_t9

0xd372,	// (0x00048feb) main_cam5_pane_t10_ParamLimits

0xd372,	// (0x00048feb) main_cam5_pane_t10

0xd384,	// (0x00048ffd) main_cam5_pane_t11_ParamLimits

0xd384,	// (0x00048ffd) main_cam5_pane_t11

0xd396,	// (0x0004900f) main_cam5_pane_t12_ParamLimits

0xd396,	// (0x0004900f) main_cam5_pane_t12

0xd3ab,	// (0x00049024) main_cam5_pane_t13_ParamLimits

0xd3ab,	// (0x00049024) main_cam5_pane_t13

0x000c,

0xf9dd,	// (0x0004b656) main_cam5_pane_t_ParamLimits

0xf9dd,	// (0x0004b656) main_cam5_pane_t

0x3b90,	// (0x0003f809) popup_scut_keymap_window_ParamLimits

0x3b90,	// (0x0003f809) popup_scut_keymap_window

0x9c92,	// (0x0004590b) aid_size_cell_brow_shortcut

0x12d2,	// (0x0003cf4b) bg_popup_window_pane_cp010

0x9c9e,	// (0x00045917) grid_scut_pane

0x9caa,	// (0x00045923) cell_scut_pane_ParamLimits

0x9caa,	// (0x00045923) cell_scut_pane

0x9cc1,	// (0x0004593a) cell_scut_pane_g1

0xd3c8,	// (0x00049041) cell_scut_pane_t1

0xd3d7,	// (0x00049050) cell_scut_pane_t2

0x9cca,	// (0x00045943) cell_scut_pane_t3

0x0002,

0xf9f8,	// (0x0004b671) cell_scut_pane_t

0x7d98,	// (0x00043a11) main_mup3_pane_g8_ParamLimits

0x7d98,	// (0x00043a11) main_mup3_pane_g8

0x904b,	// (0x00044cc4) area_vitu2_query_pane_ParamLimits

0x904b,	// (0x00044cc4) area_vitu2_query_pane

0x3378,	// (0x0003eff1) input_focus_pane_cp08

0xd3e6,	// (0x0004905f) area_vitu2_query_pane_g1

0x347b,	// (0x0003f0f4) area_vitu2_query_pane_g2

0x0001,

0xf9ff,	// (0x0004b678) area_vitu2_query_pane_g

0x9cd8,	// (0x00045951) area_vitu2_query_pane_t1_ParamLimits

0x9cd8,	// (0x00045951) area_vitu2_query_pane_t1

0x9cec,	// (0x00045965) area_vitu2_query_pane_t2_ParamLimits

0x9cec,	// (0x00045965) area_vitu2_query_pane_t2

0x348c,	// (0x0003f105) area_vitu2_query_pane_t3_ParamLimits

0x348c,	// (0x0003f105) area_vitu2_query_pane_t3

0xd3f2,	// (0x0004906b) area_vitu2_query_pane_t4_ParamLimits

0xd3f2,	// (0x0004906b) area_vitu2_query_pane_t4

0xd41a,	// (0x00049093) area_vitu2_query_pane_t5_ParamLimits

0xd41a,	// (0x00049093) area_vitu2_query_pane_t5

0xd442,	// (0x000490bb) area_vitu2_query_pane_t6_ParamLimits

0xd442,	// (0x000490bb) area_vitu2_query_pane_t6

0x0006,

0xfa04,	// (0x0004b67d) area_vitu2_query_pane_t_ParamLimits

0xfa04,	// (0x0004b67d) area_vitu2_query_pane_t

0x9d00,	// (0x00045979) bg_button_pane_cp018

0x9d0e,	// (0x00045987) bg_button_pane_cp021

0x34b4,	// (0x0003f12d) bg_button_pane_cp022

0x34c5,	// (0x0003f13e) input_focus_pane_cp09

0x1b4e,	// (0x0003d7c7) aid_size_touch_mv_arrow_left

0x1b79,	// (0x0003d7f2) aid_size_touch_mv_arrow_right

0xd0ae,	// (0x00048d27) main_cset_slider_pane_g16_ParamLimits

0xd0ae,	// (0x00048d27) main_cset_slider_pane_g16

0xd0ba,	// (0x00048d33) main_cset_slider_pane_g17_ParamLimits

0xd0ba,	// (0x00048d33) main_cset_slider_pane_g17

0x9c7f,	// (0x000458f8) cell_cam4_burst_pane_g1_ParamLimits

0x09ad,	// (0x0003c626) compa_mode_pane

0x983e,	// (0x000454b7) popup_vtel_slider_window_g3_ParamLimits

0x983e,	// (0x000454b7) popup_vtel_slider_window_g3

0x9855,	// (0x000454ce) popup_vtel_slider_window_g4_ParamLimits

0x9855,	// (0x000454ce) popup_vtel_slider_window_g4

0x986c,	// (0x000454e5) popup_vtel_slider_window_t1_ParamLimits

0x986c,	// (0x000454e5) popup_vtel_slider_window_t1

0x09ad,	// (0x0003c626) main_cl_pane

0xc395,	// (0x0004800e) popup_imed_adjust2_window_ParamLimits

0x22ff,	// (0x0003df78) bg_tb_trans_pane_cp05_ParamLimits

0xcb0e,	// (0x00048787) popup_imed_adjust2_window_g1_ParamLimits

0xcb1d,	// (0x00048796) popup_imed_adjust2_window_g2_ParamLimits

0xcb1d,	// (0x00048796) popup_imed_adjust2_window_g2

0xcb29,	// (0x000487a2) popup_imed_adjust2_window_g3_ParamLimits

0xcb29,	// (0x000487a2) popup_imed_adjust2_window_g3

0x0002,

0xf77a,	// (0x0004b3f3) popup_imed_adjust2_window_g_ParamLimits

0xf77a,	// (0x0004b3f3) popup_imed_adjust2_window_g

0xcb35,	// (0x000487ae) popup_imed_adjust2_window_t1_ParamLimits

0xcb4d,	// (0x000487c6) slider_imed_adjust_pane_ParamLimits

0xcb61,	// (0x000487da) slider_imed_adjust_pane_g1_ParamLimits

0xcb71,	// (0x000487ea) slider_imed_adjust_pane_g2_ParamLimits

0xcb81,	// (0x000487fa) slider_imed_adjust_pane_g3_ParamLimits

0xcb92,	// (0x0004880b) slider_imed_adjust_pane_g4_ParamLimits

0xf781,	// (0x0004b3fa) slider_imed_adjust_pane_g_ParamLimits

0x8de7,	// (0x00044a60) aid_touch_area_cam4_ParamLimits

0x8de7,	// (0x00044a60) aid_touch_area_cam4

0xeebe,	// (0x0004ab37) battery_pane_cp01

0x8eb6,	// (0x00044b2f) main_camera4_pane_g6_ParamLimits

0x8eb6,	// (0x00044b2f) main_camera4_pane_g6

0x8ee0,	// (0x00044b59) main_camera4_pane_t2_ParamLimits

0x8ee0,	// (0x00044b59) main_camera4_pane_t2

0x0001,

0xf883,	// (0x0004b4fc) main_camera4_pane_t_ParamLimits

0xf883,	// (0x0004b4fc) main_camera4_pane_t

0x8f15,	// (0x00044b8e) aid_touch_area_vid4_ParamLimits

0x8f15,	// (0x00044b8e) aid_touch_area_vid4

0x8f69,	// (0x00044be2) main_video4_pane_g5_ParamLimits

0x8f69,	// (0x00044be2) main_video4_pane_g5

0x8f8e,	// (0x00044c07) vid4_progress_pane_ParamLimits

0x8f8e,	// (0x00044c07) vid4_progress_pane

0xd0c6,	// (0x00048d3f) main_cset_slider_pane_g18_ParamLimits

0xd0c6,	// (0x00048d3f) main_cset_slider_pane_g18

0xd2b0,	// (0x00048f29) cell_cam4_burst_pane_g2_ParamLimits

0xd2b0,	// (0x00048f29) cell_cam4_burst_pane_g2

0x0001,

0xf9d8,	// (0x0004b651) cell_cam4_burst_pane_g_ParamLimits

0xf9d8,	// (0x0004b651) cell_cam4_burst_pane_g

0x1120,	// (0x0003cd99) bg_cl_pane_ParamLimits

0x1120,	// (0x0003cd99) bg_cl_pane

0x9d1a,	// (0x00045993) cl_header_pane_ParamLimits

0x9d1a,	// (0x00045993) cl_header_pane

0x9d2e,	// (0x000459a7) cl_listscroll_pane_ParamLimits

0x9d2e,	// (0x000459a7) cl_listscroll_pane

0xd48e,	// (0x00049107) bg_cl_pane_g1

0xd496,	// (0x0004910f) bg_cl_pane_g2

0xd49e,	// (0x00049117) bg_cl_pane_g3

0xd4a6,	// (0x0004911f) bg_cl_pane_g4

0xd4ae,	// (0x00049127) bg_cl_pane_g5

0xd4b6,	// (0x0004912f) bg_cl_pane_g6

0xd4be,	// (0x00049137) bg_cl_pane_g7

0xd4c6,	// (0x0004913f) bg_cl_pane_g8

0xd4ce,	// (0x00049147) bg_cl_pane_g9

0x0008,

0xfa13,	// (0x0004b68c) bg_cl_pane_g

0x9d3e,	// (0x000459b7) aid_height_cl_leading_ParamLimits

0x9d3e,	// (0x000459b7) aid_height_cl_leading

0x9d4a,	// (0x000459c3) aid_height_cl_text_ParamLimits

0x9d4a,	// (0x000459c3) aid_height_cl_text

0x1055,	// (0x0003ccce) bg_cl_header_pane_ParamLimits

0x1055,	// (0x0003ccce) bg_cl_header_pane

0x9d69,	// (0x000459e2) cl_header_pane_g1_ParamLimits

0x9d69,	// (0x000459e2) cl_header_pane_g1

0x9d7f,	// (0x000459f8) cl_header_pane_t1_ParamLimits

0x9d7f,	// (0x000459f8) cl_header_pane_t1

0xd4d6,	// (0x0004914f) cl_list_pane

0xd081,	// (0x00048cfa) hc_scroll_pane_cp01

0x150d,	// (0x0003d186) bg_cl_header_pane_g1

0xcf67,	// (0x00048be0) bg_cl_header_pane_g2

0x152d,	// (0x0003d1a6) bg_cl_header_pane_g3

0xcf77,	// (0x00048bf0) bg_cl_header_pane_g4

0xcf6f,	// (0x00048be8) bg_cl_header_pane_g5

0xd1bf,	// (0x00048e38) bg_cl_header_pane_g6

0xcf8f,	// (0x00048c08) bg_cl_header_pane_g7

0xcf97,	// (0x00048c10) bg_cl_header_pane_g8

0xcf87,	// (0x00048c00) bg_cl_header_pane_g9

0x0008,

0xfa26,	// (0x0004b69f) bg_cl_header_pane_g

0x9d98,	// (0x00045a11) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x9d98,	// (0x00045a11) hc_cl_list_double_graphic_heading_pane

0x9da9,	// (0x00045a22) hc_cl_list_single_graphic_pane_ParamLimits

0x9da9,	// (0x00045a22) hc_cl_list_single_graphic_pane

0x9dc2,	// (0x00045a3b) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x9dc2,	// (0x00045a3b) hc_cl_list_single_graphic_pane_g1

0x9dce,	// (0x00045a47) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x9dce,	// (0x00045a47) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfa39,	// (0x0004b6b2) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfa39,	// (0x0004b6b2) hc_cl_list_single_graphic_pane_g

0x9de2,	// (0x00045a5b) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x9de2,	// (0x00045a5b) hc_cl_list_single_graphic_pane_t1

0x9dc2,	// (0x00045a3b) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x9dc2,	// (0x00045a3b) hc_cl_list_double_graphic_heading_pane_g1

0x9df7,	// (0x00045a70) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x9df7,	// (0x00045a70) hc_cl_list_double_graphic_heading_pane_g2

0x9e0b,	// (0x00045a84) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x9e0b,	// (0x00045a84) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfa3e,	// (0x0004b6b7) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfa3e,	// (0x0004b6b7) hc_cl_list_double_graphic_heading_pane_g

0x9e1f,	// (0x00045a98) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x9e1f,	// (0x00045a98) hc_cl_list_double_graphic_heading_pane_t1

0x9e34,	// (0x00045aad) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x9e34,	// (0x00045aad) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfa45,	// (0x0004b6be) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfa45,	// (0x0004b6be) hc_cl_list_double_graphic_heading_pane_t

0xf005,	// (0x0004ac7e) vid4_progress_pane_g1

0xf015,	// (0x0004ac8e) vid4_progress_pane_g2

0x9e49,	// (0x00045ac2) vid4_progress_pane_g3

0xf025,	// (0x0004ac9e) vid4_progress_pane_g4

0x0004,

0xfa4a,	// (0x0004b6c3) vid4_progress_pane_g

0x9e5b,	// (0x00045ad4) vid4_progress_pane_t1

0xf03d,	// (0x0004acb6) vid4_progress_pane_t2

0x0002,

0xfa55,	// (0x0004b6ce) vid4_progress_pane_t

0x9e71,	// (0x00045aea) wait_bar_pane_cp07

0x799a,	// (0x00043613) blid_firmament_pane_ParamLimits

0x79dd,	// (0x00043656) popup_blid_sat_info2_window_g1

0x7a01,	// (0x0004367a) popup_blid_sat_info2_window_t3

0xc437,	// (0x000480b0) popup_blid_sat_info2_window_t4

0xc445,	// (0x000480be) popup_blid_sat_info2_window_t5

0xc453,	// (0x000480cc) popup_blid_sat_info2_window_t6

0xc463,	// (0x000480dc) popup_blid_sat_info2_window_t7

0xc471,	// (0x000480ea) popup_blid_sat_info2_window_t8

0xc47f,	// (0x000480f8) popup_blid_sat_info2_window_t9

0xc48d,	// (0x00048106) popup_blid_sat_info2_window_t10

0xc54e,	// (0x000481c7) aid_firma_cardinal_ParamLimits

0xc562,	// (0x000481db) blid_firmament_pane_t1_ParamLimits

0xc579,	// (0x000481f2) blid_firmament_pane_t2_ParamLimits

0xc590,	// (0x00048209) blid_firmament_pane_t3_ParamLimits

0xc5a7,	// (0x00048220) blid_firmament_pane_t4_ParamLimits

0xf673,	// (0x0004b2ec) blid_firmament_pane_t_ParamLimits

0xc5be,	// (0x00048237) blid_sat_info_pane_ParamLimits

0x1055,	// (0x0003ccce) main_cam_set_pane_ParamLimits

0x8575,	// (0x000441ee) aid_size_cell_colour_35_ParamLimits

0x8595,	// (0x0004420e) aid_size_cell_colour_112_ParamLimits

0x85b5,	// (0x0004422e) aid_size_cell_effect_ParamLimits

0x22ff,	// (0x0003df78) bg_tb_trans_pane_cp02_ParamLimits

0x1775,	// (0x0003d3ee) heading_imed_pane_ParamLimits

0x85d5,	// (0x0004424e) listscroll_imed_pane_ParamLimits

0x6540,	// (0x000421b9) popup_call2_audio_first_window_g5_ParamLimits

0x6540,	// (0x000421b9) popup_call2_audio_first_window_g5

0x8a01,	// (0x0004467a) aid_size_touch_image3_arrow_left_ParamLimits

0x8a01,	// (0x0004467a) aid_size_touch_image3_arrow_left

0x8a2d,	// (0x000446a6) aid_size_touch_image3_arrow_right_ParamLimits

0x8a2d,	// (0x000446a6) aid_size_touch_image3_arrow_right

0xf052,	// (0x0004accb) vid4_progress_pane_t3

0x8778,	// (0x000443f1) main_hwr_training_symbol_option_pane_ParamLimits

0x8778,	// (0x000443f1) main_hwr_training_symbol_option_pane

0xcd47,	// (0x000489c0) popup_hwr_training_preview_window_ParamLimits

0xcd47,	// (0x000489c0) popup_hwr_training_preview_window

0x8798,	// (0x00044411) hwr_training_navi_pane_g5_ParamLimits

0x8798,	// (0x00044411) hwr_training_navi_pane_g5

0xcf55,	// (0x00048bce) popup_char_count_window

0x1055,	// (0x0003ccce) bg_popup_sub_pane_cp20_ParamLimits

0x997c,	// (0x000455f5) list_vitu2_match_list_pane_ParamLimits

0x9988,	// (0x00045601) vitu2_page_scroll_pane_ParamLimits

0x9988,	// (0x00045601) vitu2_page_scroll_pane

0xd501,	// (0x0004917a) list_single_hwr_training_symbol_option_pane_ParamLimits

0xd501,	// (0x0004917a) list_single_hwr_training_symbol_option_pane

0xd514,	// (0x0004918d) list_single_hwr_training_symbol_option_pane_g1

0xd51c,	// (0x00049195) list_single_hwr_training_symbol_option_pane_t1

0xd52a,	// (0x000491a3) bg_button_pane_cp023

0xd533,	// (0x000491ac) bg_button_pane_cp024

0xd566,	// (0x000491df) vitu2_page_scroll_pane_g1

0xd56e,	// (0x000491e7) vitu2_page_scroll_pane_g2

0x0001,

0xfa5c,	// (0x0004b6d5) vitu2_page_scroll_pane_g

0xd576,	// (0x000491ef) vitu2_page_scroll_pane_t1

0x232f,	// (0x0003dfa8) popup_char_count_window_g1

0xd585,	// (0x000491fe) popup_char_count_window_g2

0x3ed9,	// (0x0003fb52) popup_char_count_window_g3

0x0002,

0xfa61,	// (0x0004b6da) popup_char_count_window_g

0xd58e,	// (0x00049207) popup_char_count_window_t1

0x09ad,	// (0x0003c626) main_vded2_pane

0xcafa,	// (0x00048773) aid_size_cell_imed_line

0xcb04,	// (0x0004877d) grid_imed_line_width_pane

0xef6e,	// (0x0004abe7) vid4_indicators_pane_g4

0xd59c,	// (0x00049215) cell_imed_line_width_pane_ParamLimits

0xd59c,	// (0x00049215) cell_imed_line_width_pane

0xd5b0,	// (0x00049229) cell_imed_line_width_pane_g1

0xd5b9,	// (0x00049232) cell_imed_line_width_pane_g2

0x0001,

0xfa68,	// (0x0004b6e1) cell_imed_line_width_pane_g

0x9e82,	// (0x00045afb) main_vded2_pane_g1_ParamLimits

0x9e82,	// (0x00045afb) main_vded2_pane_g1

0x9e98,	// (0x00045b11) main_vded2_pane_g2_ParamLimits

0x9e98,	// (0x00045b11) main_vded2_pane_g2

0x0001,

0xfa6d,	// (0x0004b6e6) main_vded2_pane_g_ParamLimits

0xfa6d,	// (0x0004b6e6) main_vded2_pane_g

0x9eaa,	// (0x00045b23) vded2_slider_pane_ParamLimits

0x9eaa,	// (0x00045b23) vded2_slider_pane

0x9eba,	// (0x00045b33) aid_size_touch_vded2_end

0x9ec4,	// (0x00045b3d) aid_size_touch_vded2_playhead

0xd5c1,	// (0x0004923a) aid_size_touch_vded2_start

0xd5c9,	// (0x00049242) vded2_slider_bg_pane

0xd5d2,	// (0x0004924b) vded2_slider_pane_g1

0xd5db,	// (0x00049254) vded2_slider_pane_g2

0x9ece,	// (0x00045b47) vded2_slider_pane_g3

0x0002,

0xfa72,	// (0x0004b6eb) vded2_slider_pane_g

0xd5e3,	// (0x0004925c) vded2_slider_bg_pane_g1

0xd5ec,	// (0x00049265) vded2_slider_bg_pane_g2

0xd5f5,	// (0x0004926e) vded2_slider_bg_pane_g3

0x0002,

0xfa79,	// (0x0004b6f2) vded2_slider_bg_pane_g

0x5b51,	// (0x000417ca) aid_postcard_touch_down_pane_ParamLimits

0x5b51,	// (0x000417ca) aid_postcard_touch_down_pane

0x5b67,	// (0x000417e0) aid_postcard_touch_up_pane_ParamLimits

0x5b67,	// (0x000417e0) aid_postcard_touch_up_pane

0x09ad,	// (0x0003c626) main_blid2_pane

0xc37b,	// (0x00047ff4) popup_blid2_search_window

0x09ad,	// (0x0003c626) blid2_gps_pane

0x09ad,	// (0x0003c626) blid2_navig_pane

0x09ad,	// (0x0003c626) blid2_search_pane

0x09ad,	// (0x0003c626) blid2_tripm_pane

0x9ed9,	// (0x00045b52) blid2_search_pane_g1_ParamLimits

0x9ed9,	// (0x00045b52) blid2_search_pane_g1

0x9ef1,	// (0x00045b6a) blid2_search_pane_t1_ParamLimits

0x9ef1,	// (0x00045b6a) blid2_search_pane_t1

0x9f03,	// (0x00045b7c) aid_size_cell_blid2_gps_ParamLimits

0x9f03,	// (0x00045b7c) aid_size_cell_blid2_gps

0x9f1b,	// (0x00045b94) blid2_gps_pane_g1_ParamLimits

0x9f1b,	// (0x00045b94) blid2_gps_pane_g1

0x9f2f,	// (0x00045ba8) grid_blid2_satellite_pane_ParamLimits

0x9f2f,	// (0x00045ba8) grid_blid2_satellite_pane

0x9f49,	// (0x00045bc2) blid2_navig_pane_g1_ParamLimits

0x9f49,	// (0x00045bc2) blid2_navig_pane_g1

0x9f55,	// (0x00045bce) blid2_navig_pane_t1_ParamLimits

0x9f55,	// (0x00045bce) blid2_navig_pane_t1

0x9f70,	// (0x00045be9) blid2_navig_pane_t2_ParamLimits

0x9f70,	// (0x00045be9) blid2_navig_pane_t2

0x0001,

0xfa80,	// (0x0004b6f9) blid2_navig_pane_t_ParamLimits

0xfa80,	// (0x0004b6f9) blid2_navig_pane_t

0x9f8b,	// (0x00045c04) blid2_navig_ring_pane_ParamLimits

0x9f8b,	// (0x00045c04) blid2_navig_ring_pane

0x9fa4,	// (0x00045c1d) blid2_speed_pane_ParamLimits

0x9fa4,	// (0x00045c1d) blid2_speed_pane

0x9fb0,	// (0x00045c29) blid2_tripm_pane_g1_ParamLimits

0x9fb0,	// (0x00045c29) blid2_tripm_pane_g1

0x9fcb,	// (0x00045c44) blid2_tripm_pane_g2_ParamLimits

0x9fcb,	// (0x00045c44) blid2_tripm_pane_g2

0x9fdf,	// (0x00045c58) blid2_tripm_pane_g3_ParamLimits

0x9fdf,	// (0x00045c58) blid2_tripm_pane_g3

0x9ff3,	// (0x00045c6c) blid2_tripm_pane_g4_ParamLimits

0x9ff3,	// (0x00045c6c) blid2_tripm_pane_g4

0xa007,	// (0x00045c80) blid2_tripm_pane_g5_ParamLimits

0xa007,	// (0x00045c80) blid2_tripm_pane_g5

0x0005,

0xfa85,	// (0x0004b6fe) blid2_tripm_pane_g_ParamLimits

0xfa85,	// (0x0004b6fe) blid2_tripm_pane_g

0xa02d,	// (0x00045ca6) blid2_tripm_pane_t1_ParamLimits

0xa02d,	// (0x00045ca6) blid2_tripm_pane_t1

0xa048,	// (0x00045cc1) blid2_tripm_pane_t2_ParamLimits

0xa048,	// (0x00045cc1) blid2_tripm_pane_t2

0xa061,	// (0x00045cda) blid2_tripm_pane_t3_ParamLimits

0xa061,	// (0x00045cda) blid2_tripm_pane_t3

0x0003,

0xfa92,	// (0x0004b70b) blid2_tripm_pane_t_ParamLimits

0xfa92,	// (0x0004b70b) blid2_tripm_pane_t

0xa0a8,	// (0x00045d21) cell_blid2_satellite_pane_ParamLimits

0xa0a8,	// (0x00045d21) cell_blid2_satellite_pane

0xa0c6,	// (0x00045d3f) cell_blid2_satellite_pane_g1

0xd5fe,	// (0x00049277) cell_blid2_satellite_pane_t1

0x1308,	// (0x0003cf81) blid2_speed_pane_g1

0xd60c,	// (0x00049285) blid2_speed_pane_t1

0xd61a,	// (0x00049293) blid2_speed_pane_t2

0x0001,

0xfa9b,	// (0x0004b714) blid2_speed_pane_t

0x1308,	// (0x0003cf81) blid2_navig_ring_pane_g1

0xa0cf,	// (0x00045d48) blid2_navig_ring_pane_g2

0xa0d7,	// (0x00045d50) blid2_navig_ring_pane_g3

0xa0df,	// (0x00045d58) blid2_navig_ring_pane_g4

0xa0e7,	// (0x00045d60) blid2_navig_ring_pane_g5

0x0004,

0xfaa0,	// (0x0004b719) blid2_navig_ring_pane_g

0x09ad,	// (0x0003c626) bg_popup_window_pane_cp011

0xd628,	// (0x000492a1) popup_blid2_search_window_g1

0xd630,	// (0x000492a9) popup_blid2_search_window_t1

0xd63e,	// (0x000492b7) popup_blid2_search_window_t2

0x0001,

0xfaab,	// (0x0004b724) popup_blid2_search_window_t

0x141c,	// (0x0003d095) main_browser_pane_g1

0x1120,	// (0x0003cd99) main_browser_pane_ParamLimits

0x1055,	// (0x0003ccce) bg_button_pane_cp011_ParamLimits

0x925a,	// (0x00044ed3) cell_vitu2_function_pane_g1_ParamLimits

0x22ff,	// (0x0003df78) bg_popup_sub_pane_cp22_ParamLimits

0x3378,	// (0x0003eff1) input_focus_pane_cp08_ParamLimits

0x9b10,	// (0x00045789) popup_vitu2_query_button_pane_ParamLimits

0x9b10,	// (0x00045789) popup_vitu2_query_button_pane

0x338f,	// (0x0003f008) popup_vitu2_query_input_button_pane

0xd1fa,	// (0x00048e73) popup_vitu2_query_window_g1_ParamLimits

0x3397,	// (0x0003f010) popup_vitu2_query_window_g2_ParamLimits

0xf9ac,	// (0x0004b625) popup_vitu2_query_window_g_ParamLimits

0x09ad,	// (0x0003c626) bg_button_pane_cp026

0xa0ef,	// (0x00045d68) popup_vitu2_query_input_button_pane_g1

0x09ad,	// (0x0003c626) bg_button_pane_cp025

0xd64c,	// (0x000492c5) popup_vitu2_query_button_pane_t1

0x7a66,	// (0x000436df) main_mp3_pane_t6

0x7a74,	// (0x000436ed) popup_slider_window_cp01

0xeeda,	// (0x0004ab53) cam4_battery_pane

0xef2d,	// (0x0004aba6) cam4_battery_pane_cp02

0xeffd,	// (0x0004ac76) cam4_battery_pane_cp01

0xeffd,	// (0x0004ac76) cam4_battery_pane_cp03

0x1308,	// (0x0003cf81) cam4_battery_pane_g1

0xa0f7,	// (0x00045d70) cam4_battery_pane_g2

0x0001,

0xfab0,	// (0x0004b729) cam4_battery_pane_g

0xc49b,	// (0x00048114) popup_blid_sat_info2_window_t11

0x1b4e,	// (0x0003d7c7) aid_size_touch_mv_arrow_left_ParamLimits

0x1b79,	// (0x0003d7f2) aid_size_touch_mv_arrow_right_ParamLimits

0x1bd7,	// (0x0003d850) navi_pane_g1_ParamLimits

0x1be3,	// (0x0003d85c) navi_pane_g2_ParamLimits

0x1c11,	// (0x0003d88a) navi_pane_g3_ParamLimits

0xf374,	// (0x0004afed) navi_pane_g_ParamLimits

0x5868,	// (0x000414e1) navi_pane_mv_t1_ParamLimits

0x85e1,	// (0x0004425a) grid_imed_effect_pane_ParamLimits

0x478f,	// (0x00040408) aid_placing_vt_slider_lsc

0x136b,	// (0x0003cfe4) aid_placing_vt_slider_prt

0x1055,	// (0x0003ccce) bg_tb_trans_pane_cp01_ParamLimits

0xc739,	// (0x000483b2) popup_image_details_window_g1_ParamLimits

0xc74c,	// (0x000483c5) popup_image_details_window_g2_ParamLimits

0xc761,	// (0x000483da) popup_image_details_window_g3_ParamLimits

0xc761,	// (0x000483da) popup_image_details_window_g3

0xf6b3,	// (0x0004b32c) popup_image_details_window_g_ParamLimits

0xc775,	// (0x000483ee) popup_image_details_window_t1_ParamLimits

0xc787,	// (0x00048400) popup_image_details_window_t2_ParamLimits

0xc7a0,	// (0x00048419) popup_image_details_window_t3_ParamLimits

0xc7b4,	// (0x0004842d) popup_image_details_window_t4_ParamLimits

0xc7cf,	// (0x00048448) popup_image_details_window_t5_ParamLimits

0xf6ba,	// (0x0004b333) popup_image_details_window_t_ParamLimits

0x9d56,	// (0x000459cf) cl_header_name_pane_ParamLimits

0x9d56,	// (0x000459cf) cl_header_name_pane

0xa101,	// (0x00045d7a) cl_header_name_pane_t1_ParamLimits

0xa101,	// (0x00045d7a) cl_header_name_pane_t1

0xa122,	// (0x00045d9b) cl_header_name_pane_t2_ParamLimits

0xa122,	// (0x00045d9b) cl_header_name_pane_t2

0xa164,	// (0x00045ddd) cl_header_name_pane_t3_ParamLimits

0xa164,	// (0x00045ddd) cl_header_name_pane_t3

0x0002,

0xfab5,	// (0x0004b72e) cl_header_name_pane_t_ParamLimits

0xfab5,	// (0x0004b72e) cl_header_name_pane_t

0x1ca0,	// (0x0003d919) navi_pane_mv_g2_ParamLimits

0xcf20,	// (0x00048b99) field_vitu2_entry_pane_g1_ParamLimits

0xcf2c,	// (0x00048ba5) field_vitu2_entry_pane_g2_ParamLimits

0x230d,	// (0x0003df86) field_vitu2_entry_pane_g3_ParamLimits

0x230d,	// (0x0003df86) field_vitu2_entry_pane_g3

0xf8b5,	// (0x0004b52e) field_vitu2_entry_pane_g_ParamLimits

0x91d6,	// (0x00044e4f) cell_vitu2_itu_pane_g1_ParamLimits

0x91ee,	// (0x00044e67) cell_vitu2_itu_pane_g2_ParamLimits

0x91ee,	// (0x00044e67) cell_vitu2_itu_pane_g2

0x0001,

0xf8c1,	// (0x0004b53a) cell_vitu2_itu_pane_g_ParamLimits

0xf8c1,	// (0x0004b53a) cell_vitu2_itu_pane_g

0x1055,	// (0x0003ccce) bg_vkb2_func_pane_cp05_ParamLimits

0x1055,	// (0x0003ccce) bg_vkb2_func_pane_cp05

0x1055,	// (0x0003ccce) bg_vkb2_func_pane_cp03

0x1055,	// (0x0003ccce) bg_vkb2_func_pane_cp04

0x1055,	// (0x0003ccce) bg_vkb2_func_pane_cp10_ParamLimits

0x1055,	// (0x0003ccce) bg_vkb2_func_pane_cp10

0x34b4,	// (0x0003f12d) bg_vkb2_func_pane_cp08

0x9d00,	// (0x00045979) bg_vkb2_func_pane_cp06

0x9d0e,	// (0x00045987) bg_vkb2_func_pane_cp07

0xd53c,	// (0x000491b5) bg_vkb2_func_pane_cp11_ParamLimits

0xd53c,	// (0x000491b5) bg_vkb2_func_pane_cp11

0xd551,	// (0x000491ca) bg_vkb2_func_pane_cp12_ParamLimits

0xd551,	// (0x000491ca) bg_vkb2_func_pane_cp12

0x09ad,	// (0x0003c626) bg_vkb2_func_pane_cp09

0xcf67,	// (0x00048be0) bg_vkb2_func_pane_g1

0x152d,	// (0x0003d1a6) bg_vkb2_func_pane_g2

0xcf6f,	// (0x00048be8) bg_vkb2_func_pane_g3

0xcf77,	// (0x00048bf0) bg_vkb2_func_pane_g4

0xd1bf,	// (0x00048e38) bg_vkb2_func_pane_g5

0xcf8f,	// (0x00048c08) bg_vkb2_func_pane_g6

0xcf97,	// (0x00048c10) bg_vkb2_func_pane_g7

0xcf87,	// (0x00048c00) bg_vkb2_func_pane_g8

0x150d,	// (0x0003d186) bg_vkb2_func_pane_g9

0x0008,

0xfabc,	// (0x0004b735) bg_vkb2_func_pane_g

0xa01b,	// (0x00045c94) blid2_tripm_pane_g6_ParamLimits

0xa01b,	// (0x00045c94) blid2_tripm_pane_g6

0xce72,	// (0x00048aeb) mp4_progress_pane_g1

0xa094,	// (0x00045d0d) blid2_tripm_values_pane_ParamLimits

0xa094,	// (0x00045d0d) blid2_tripm_values_pane

0xa195,	// (0x00045e0e) blid2_tripm_values_pane_t1

0xa1a3,	// (0x00045e1c) blid2_tripm_values_pane_t2

0xa1b1,	// (0x00045e2a) blid2_tripm_values_pane_t3

0xa1bf,	// (0x00045e38) blid2_tripm_values_pane_t4

0xa1cd,	// (0x00045e46) blid2_tripm_values_pane_t5

0xa1db,	// (0x00045e54) blid2_tripm_values_pane_t6

0xa1e9,	// (0x00045e62) blid2_tripm_values_pane_t7

0xa1f7,	// (0x00045e70) blid2_tripm_values_pane_t8

0xa205,	// (0x00045e7e) blid2_tripm_values_pane_t9

0x0008,

0xfacf,	// (0x0004b748) blid2_tripm_values_pane_t

0x47d1,	// (0x0004044a) call_video_pane_t1_ParamLimits

0x47ef,	// (0x00040468) call_video_pane_t2_ParamLimits

0xf222,	// (0x0004ae9b) call_video_pane_t_ParamLimits

0x320a,	// (0x0003ee83) msg_header_pane_g1_ParamLimits

0x1e65,	// (0x0003dade) msg_header_pane_g2_ParamLimits

0x1e65,	// (0x0003dade) msg_header_pane_g2

0x0001,

0xf417,	// (0x0004b090) msg_header_pane_g_ParamLimits

0xf417,	// (0x0004b090) msg_header_pane_g

0x1120,	// (0x0003cd99) main_clock2_pane_ParamLimits

0x82e2,	// (0x00043f5b) grid_clock2_toolbar_pane_ParamLimits

0x82e2,	// (0x00043f5b) grid_clock2_toolbar_pane

0x82e2,	// (0x00043f5b) listscroll_clock2_pane_ParamLimits

0x82e2,	// (0x00043f5b) listscroll_clock2_pane

0x83c6,	// (0x0004403f) main_clock2_pane_t3_ParamLimits

0x83c6,	// (0x0004403f) main_clock2_pane_t3

0x83ea,	// (0x00044063) main_clock2_pane_t4_ParamLimits

0x83ea,	// (0x00044063) main_clock2_pane_t4

0xd65a,	// (0x000492d3) cell_clock2_toolbar_pane

0xd662,	// (0x000492db) cell_clock2_toolbar_pane_cp01

0xd662,	// (0x000492db) cell_clock2_toolbar_pane_cp02

0xd66a,	// (0x000492e3) cell_clock2_toolbar_pane_cp03

0xd672,	// (0x000492eb) list_clock2_pane

0x1ad3,	// (0x0003d74c) scroll_pane_cp10

0xd67a,	// (0x000492f3) list_single_clock2_pane_ParamLimits

0xd67a,	// (0x000492f3) list_single_clock2_pane

0x12d2,	// (0x0003cf4b) list_highlight_pane_cp08

0xd687,	// (0x00049300) list_single_clock2_pane_t1

0xd695,	// (0x0004930e) list_single_clock2_pane_t2

0x0001,

0xfae2,	// (0x0004b75b) list_single_clock2_pane_t

0x09ad,	// (0x0003c626) bg_button_pane_cp10

0xd6a3,	// (0x0004931c) cell_clock2_toolbar_pane_g1

0x5add,	// (0x00041756) aid_main_viewer_pane_g1_ParamLimits

0x5add,	// (0x00041756) aid_main_viewer_pane_g1

0x5aeb,	// (0x00041764) aid_main_viewer_pane_g2_ParamLimits

0x5aeb,	// (0x00041764) aid_main_viewer_pane_g2

0x5af9,	// (0x00041772) aid_main_viewer_pane_g3_ParamLimits

0x5af9,	// (0x00041772) aid_main_viewer_pane_g3

0x5b08,	// (0x00041781) aid_main_viewer_pane_g4_ParamLimits

0x5b08,	// (0x00041781) aid_main_viewer_pane_g4

0x0003,

0xf428,	// (0x0004b0a1) aid_main_viewer_pane_g_ParamLimits

0xf428,	// (0x0004b0a1) aid_main_viewer_pane_g

0x71a0,	// (0x00042e19) main_calc_pane_ParamLimits

0x71c0,	// (0x00042e39) main_dialer2_pane_ParamLimits

0x09ad,	// (0x0003c626) main_cam6_pane

0x09ad,	// (0x0003c626) main_vid6_pane

0x82ee,	// (0x00043f67) listscroll_gen_pane_cp06_ParamLimits

0x82ee,	// (0x00043f67) listscroll_gen_pane_cp06

0x840d,	// (0x00044086) main_clock2_pane_t5_ParamLimits

0x840d,	// (0x00044086) main_clock2_pane_t5

0x846b,	// (0x000440e4) aid_call2_pane_cp10_ParamLimits

0x847d,	// (0x000440f6) aid_call_pane_cp10_ParamLimits

0x1b42,	// (0x0003d7bb) popup_clock_analogue_window_cp10_g1_ParamLimits

0x1b42,	// (0x0003d7bb) popup_clock_analogue_window_cp10_g2_ParamLimits

0x848f,	// (0x00044108) popup_clock_analogue_window_cp10_g3_ParamLimits

0x848f,	// (0x00044108) popup_clock_analogue_window_cp10_g4_ParamLimits

0x1b42,	// (0x0003d7bb) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf76f,	// (0x0004b3e8) popup_clock_analogue_window_cp10_g_ParamLimits

0x84a5,	// (0x0004411e) popup_clock_analogue_window_cp10_t1_ParamLimits

0x89ae,	// (0x00044627) cell_dialer2_keypad_pane_g2_ParamLimits

0x89ae,	// (0x00044627) cell_dialer2_keypad_pane_g2

0x0001,

0xf854,	// (0x0004b4cd) cell_dialer2_keypad_pane_g_ParamLimits

0xf854,	// (0x0004b4cd) cell_dialer2_keypad_pane_g

0x89ca,	// (0x00044643) cell_dialer2_keypad_pane_t1

0x957a,	// (0x000451f3) main_cset_text2_pane_ParamLimits

0x957a,	// (0x000451f3) main_cset_text2_pane

0xd3e6,	// (0x0004905f) area_vitu2_query_pane_g1_ParamLimits

0x347b,	// (0x0003f0f4) area_vitu2_query_pane_g2_ParamLimits

0xf9ff,	// (0x0004b678) area_vitu2_query_pane_g_ParamLimits

0xd46a,	// (0x000490e3) area_vitu2_query_pane_t7_ParamLimits

0xd46a,	// (0x000490e3) area_vitu2_query_pane_t7

0x9d00,	// (0x00045979) bg_button_pane_cp018_ParamLimits

0x9d0e,	// (0x00045987) bg_button_pane_cp021_ParamLimits

0x34b4,	// (0x0003f12d) bg_button_pane_cp022_ParamLimits

0x34b4,	// (0x0003f12d) bg_vkb2_func_pane_cp08_ParamLimits

0x9d00,	// (0x00045979) bg_vkb2_func_pane_cp06_ParamLimits

0x9d0e,	// (0x00045987) bg_vkb2_func_pane_cp07_ParamLimits

0x34c5,	// (0x0003f13e) input_focus_pane_cp09_ParamLimits

0xf068,	// (0x0004ace1) cam6_autofocus_pane_ParamLimits

0xf068,	// (0x0004ace1) cam6_autofocus_pane

0xa213,	// (0x00045e8c) cam6_image_uncrop_pane_ParamLimits

0xa213,	// (0x00045e8c) cam6_image_uncrop_pane

0xa222,	// (0x00045e9b) cam6_indi_pane_ParamLimits

0xa222,	// (0x00045e9b) cam6_indi_pane

0xa238,	// (0x00045eb1) cam6_mode_pane_ParamLimits

0xa238,	// (0x00045eb1) cam6_mode_pane

0xa24a,	// (0x00045ec3) cam6_timer_pane_ParamLimits

0xa24a,	// (0x00045ec3) cam6_timer_pane

0xa25a,	// (0x00045ed3) cam6_zoom_pane_ParamLimits

0xa25a,	// (0x00045ed3) cam6_zoom_pane

0xa266,	// (0x00045edf) cam6_mode_pane_g1_ParamLimits

0xa266,	// (0x00045edf) cam6_mode_pane_g1

0xa276,	// (0x00045eef) cam6_mode_pane_g2_ParamLimits

0xa276,	// (0x00045eef) cam6_mode_pane_g2

0xa286,	// (0x00045eff) cam6_mode_pane_g3_ParamLimits

0xa286,	// (0x00045eff) cam6_mode_pane_g3

0xa296,	// (0x00045f0f) cam6_mode_pane_g4_ParamLimits

0xa296,	// (0x00045f0f) cam6_mode_pane_g4

0x0003,

0xfae7,	// (0x0004b760) cam6_mode_pane_g_ParamLimits

0xfae7,	// (0x0004b760) cam6_mode_pane_g

0xc413,	// (0x0004808c) bg_tb_trans_pane_cp08_ParamLimits

0xc413,	// (0x0004808c) bg_tb_trans_pane_cp08

0xd6ab,	// (0x00049324) cam6_battery_pane_ParamLimits

0xd6ab,	// (0x00049324) cam6_battery_pane

0xd6c1,	// (0x0004933a) cam6_indi_pane_g1_ParamLimits

0xd6c1,	// (0x0004933a) cam6_indi_pane_g1

0xd6d3,	// (0x0004934c) cam6_indi_pane_g2_ParamLimits

0xd6d3,	// (0x0004934c) cam6_indi_pane_g2

0xd6e5,	// (0x0004935e) cam6_indi_pane_g3_ParamLimits

0xd6e5,	// (0x0004935e) cam6_indi_pane_g3

0x0002,

0xfaf0,	// (0x0004b769) cam6_indi_pane_g_ParamLimits

0xfaf0,	// (0x0004b769) cam6_indi_pane_g

0xd6f7,	// (0x00049370) cam6_indi_pane_t1_ParamLimits

0xd6f7,	// (0x00049370) cam6_indi_pane_t1

0xa2a6,	// (0x00045f1f) cam6_autofocus_pane_g1

0xa2ae,	// (0x00045f27) cam6_autofocus_pane_g2

0xa2b6,	// (0x00045f2f) cam6_autofocus_pane_g3

0xa2be,	// (0x00045f37) cam6_autofocus_pane_g4

0x0003,

0xfaf7,	// (0x0004b770) cam6_autofocus_pane_g

0xd71d,	// (0x00049396) cam6_timer_pane_g1

0xd725,	// (0x0004939e) cam6_timer_pane_t1

0xd733,	// (0x000493ac) cam6_zoom_cont_pane

0xd73b,	// (0x000493b4) cam6_zoom_pane_g1

0xd743,	// (0x000493bc) cam6_zoom_pane_g2

0xa2c6,	// (0x00045f3f) cam6_zoom_pane_g3

0x0002,

0xfb00,	// (0x0004b779) cam6_zoom_pane_g

0x1308,	// (0x0003cf81) cam6_battery_pane_g1

0x1308,	// (0x0003cf81) cam6_battery_pane_g2

0x0001,

0xf3d8,	// (0x0004b051) cam6_battery_pane_g

0xd74b,	// (0x000493c4) cam6_zoom_cont_pane_g1

0xd754,	// (0x000493cd) cam6_zoom_cont_pane_g2

0xd75d,	// (0x000493d6) cam6_zoom_cont_pane_g3

0x0002,

0xfb07,	// (0x0004b780) cam6_zoom_cont_pane_g

0xa2e3,	// (0x00045f5c) cam6_mode_pane_cp_ParamLimits

0xa2e3,	// (0x00045f5c) cam6_mode_pane_cp

0xa25a,	// (0x00045ed3) cam6_zoom_pane_cp_ParamLimits

0xa25a,	// (0x00045ed3) cam6_zoom_pane_cp

0xa2f5,	// (0x00045f6e) vid6_image_uncrop_cif_pane_ParamLimits

0xa2f5,	// (0x00045f6e) vid6_image_uncrop_cif_pane

0xa305,	// (0x00045f7e) vid6_image_uncrop_nhd_pane_ParamLimits

0xa305,	// (0x00045f7e) vid6_image_uncrop_nhd_pane

0xa213,	// (0x00045e8c) vid6_image_uncrop_vga_pane_ParamLimits

0xa213,	// (0x00045e8c) vid6_image_uncrop_vga_pane

0xa314,	// (0x00045f8d) vid6_image_uncrop_wvga_pane_ParamLimits

0xa314,	// (0x00045f8d) vid6_image_uncrop_wvga_pane

0xa323,	// (0x00045f9c) vid6_indi_pane_ParamLimits

0xa323,	// (0x00045f9c) vid6_indi_pane

0xc413,	// (0x0004808c) bg_tb_trans_pane_cp09_ParamLimits

0xc413,	// (0x0004808c) bg_tb_trans_pane_cp09

0xd775,	// (0x000493ee) cam6_battery_pane_cp_ParamLimits

0xd775,	// (0x000493ee) cam6_battery_pane_cp

0xd781,	// (0x000493fa) vid6_indi_pane_g1_ParamLimits

0xd781,	// (0x000493fa) vid6_indi_pane_g1

0xd793,	// (0x0004940c) vid6_indi_pane_g2_ParamLimits

0xd793,	// (0x0004940c) vid6_indi_pane_g2

0xd7a5,	// (0x0004941e) vid6_indi_pane_g3_ParamLimits

0xd7a5,	// (0x0004941e) vid6_indi_pane_g3

0xd7ba,	// (0x00049433) vid6_indi_pane_g4_ParamLimits

0xd7ba,	// (0x00049433) vid6_indi_pane_g4

0xd7cf,	// (0x00049448) vid6_indi_pane_g5_ParamLimits

0xd7cf,	// (0x00049448) vid6_indi_pane_g5

0x0004,

0xfb0e,	// (0x0004b787) vid6_indi_pane_g_ParamLimits

0xfb0e,	// (0x0004b787) vid6_indi_pane_g

0xd7e9,	// (0x00049462) vid6_indi_pane_t1_ParamLimits

0xd7e9,	// (0x00049462) vid6_indi_pane_t1

0xd7ff,	// (0x00049478) vid6_indi_pane_t2_ParamLimits

0xd7ff,	// (0x00049478) vid6_indi_pane_t2

0xd827,	// (0x000494a0) vid6_indi_pane_t3_ParamLimits

0xd827,	// (0x000494a0) vid6_indi_pane_t3

0xd84f,	// (0x000494c8) vid6_indi_pane_t4_ParamLimits

0xd84f,	// (0x000494c8) vid6_indi_pane_t4

0x0003,

0xfb19,	// (0x0004b792) vid6_indi_pane_t_ParamLimits

0xfb19,	// (0x0004b792) vid6_indi_pane_t

0xd873,	// (0x000494ec) wait_bar_pane_cp08

0xa33b,	// (0x00045fb4) main_cset_text2_pane_t1_ParamLimits

0xa33b,	// (0x00045fb4) main_cset_text2_pane_t1

0xa2ce,	// (0x00045f47) listscroll_gen_pane_cp06_t1_ParamLimits

0xa2ce,	// (0x00045f47) listscroll_gen_pane_cp06_t1

0x09ad,	// (0x0003c626) main_cam6_set_pane

0x10ae,	// (0x0003cd27) bg_tb_trans_pane_cp06_ParamLimits

0xeee2,	// (0x0004ab5b) cam4_indicators_pane_g1_ParamLimits

0xeef3,	// (0x0004ab6c) cam4_indicators_pane_g2_ParamLimits

0xf891,	// (0x0004b50a) cam4_indicators_pane_g_ParamLimits

0xef0b,	// (0x0004ab84) cam4_indicators_pane_t1_ParamLimits

0x1055,	// (0x0003ccce) bg_tb_trans_pane_cp07_ParamLimits

0xef35,	// (0x0004abae) vid4_indicators_pane_g1_ParamLimits

0xef49,	// (0x0004abc2) vid4_indicators_pane_g2_ParamLimits

0xef5d,	// (0x0004abd6) vid4_indicators_pane_g3_ParamLimits

0xef6e,	// (0x0004abe7) vid4_indicators_pane_g4_ParamLimits

0xf8a3,	// (0x0004b51c) vid4_indicators_pane_g_ParamLimits

0xef8a,	// (0x0004ac03) vid4_indicators_pane_t1_ParamLimits

0xf005,	// (0x0004ac7e) vid4_progress_pane_g1_ParamLimits

0xf015,	// (0x0004ac8e) vid4_progress_pane_g2_ParamLimits

0x9e49,	// (0x00045ac2) vid4_progress_pane_g3_ParamLimits

0xf025,	// (0x0004ac9e) vid4_progress_pane_g4_ParamLimits

0xfa4a,	// (0x0004b6c3) vid4_progress_pane_g_ParamLimits

0x9e5b,	// (0x00045ad4) vid4_progress_pane_t1_ParamLimits

0xf03d,	// (0x0004acb6) vid4_progress_pane_t2_ParamLimits

0xf052,	// (0x0004accb) vid4_progress_pane_t3_ParamLimits

0xfa55,	// (0x0004b6ce) vid4_progress_pane_t_ParamLimits

0x9e71,	// (0x00045aea) wait_bar_pane_cp07_ParamLimits

0xa359,	// (0x00045fd2) main_cam6_set_pane_g2_ParamLimits

0xa359,	// (0x00045fd2) main_cam6_set_pane_g2

0xa37d,	// (0x00045ff6) main_cset6_listscroll_pane_ParamLimits

0xa37d,	// (0x00045ff6) main_cset6_listscroll_pane

0xa399,	// (0x00046012) main_cset6_slider_pane_ParamLimits

0xa399,	// (0x00046012) main_cset6_slider_pane

0xa3af,	// (0x00046028) main_cset6_text2_pane_ParamLimits

0xa3af,	// (0x00046028) main_cset6_text2_pane

0xd882,	// (0x000494fb) main_cset6_text_pane

0xd88a,	// (0x00049503) main_cset_list_pane_copy1_ParamLimits

0xd88a,	// (0x00049503) main_cset_list_pane_copy1

0xd89a,	// (0x00049513) scroll_pane_cp028_copy1

0xa3bd,	// (0x00046036) cset_list_set_pane_copy1

0xa3cf,	// (0x00046048) aid_position_infowindow_above_copy1

0xa3d7,	// (0x00046050) aid_position_infowindow_below_copy1

0x34ea,	// (0x0003f163) cset_list_set_pane_g1_copy1

0x34f2,	// (0x0003f16b) cset_list_set_pane_g3_copy1_ParamLimits

0x34f2,	// (0x0003f16b) cset_list_set_pane_g3_copy1

0x3501,	// (0x0003f17a) cset_list_set_pane_t1_copy1_ParamLimits

0x3501,	// (0x0003f17a) cset_list_set_pane_t1_copy1

0x1055,	// (0x0003ccce) list_highlight_pane_cp021_copy1_ParamLimits

0x1055,	// (0x0003ccce) list_highlight_pane_cp021_copy1

0xd8a3,	// (0x0004951c) cset6_slider_pane_ParamLimits

0xd8a3,	// (0x0004951c) cset6_slider_pane

0xd8cf,	// (0x00049548) main_cset6_slider_pane_g1_ParamLimits

0xd8cf,	// (0x00049548) main_cset6_slider_pane_g1

0xa3df,	// (0x00046058) main_cset6_slider_pane_g2_ParamLimits

0xa3df,	// (0x00046058) main_cset6_slider_pane_g2

0xd8f7,	// (0x00049570) main_cset6_slider_pane_g3_ParamLimits

0xd8f7,	// (0x00049570) main_cset6_slider_pane_g3

0xa407,	// (0x00046080) main_cset6_slider_pane_g4_ParamLimits

0xa407,	// (0x00046080) main_cset6_slider_pane_g4

0xd903,	// (0x0004957c) main_cset6_slider_pane_g5_ParamLimits

0xd903,	// (0x0004957c) main_cset6_slider_pane_g5

0xd096,	// (0x00048d0f) main_cset6_slider_pane_g7_ParamLimits

0xd096,	// (0x00048d0f) main_cset6_slider_pane_g7

0xd0a2,	// (0x00048d1b) main_cset6_slider_pane_g8_ParamLimits

0xd0a2,	// (0x00048d1b) main_cset6_slider_pane_g8

0x9620,	// (0x00045299) main_cset6_slider_pane_g9_ParamLimits

0x9620,	// (0x00045299) main_cset6_slider_pane_g9

0x962c,	// (0x000452a5) main_cset6_slider_pane_g10_ParamLimits

0x962c,	// (0x000452a5) main_cset6_slider_pane_g10

0x9638,	// (0x000452b1) main_cset6_slider_pane_g11_ParamLimits

0x9638,	// (0x000452b1) main_cset6_slider_pane_g11

0x9644,	// (0x000452bd) main_cset6_slider_pane_g12_ParamLimits

0x9644,	// (0x000452bd) main_cset6_slider_pane_g12

0x9650,	// (0x000452c9) main_cset6_slider_pane_g13_ParamLimits

0x9650,	// (0x000452c9) main_cset6_slider_pane_g13

0x965c,	// (0x000452d5) main_cset6_slider_pane_g14_ParamLimits

0x965c,	// (0x000452d5) main_cset6_slider_pane_g14

0xa413,	// (0x0004608c) main_cset6_slider_pane_g15_ParamLimits

0xa413,	// (0x0004608c) main_cset6_slider_pane_g15

0xd0ae,	// (0x00048d27) main_cset6_slider_pane_g16_ParamLimits

0xd0ae,	// (0x00048d27) main_cset6_slider_pane_g16

0xd0ba,	// (0x00048d33) main_cset6_slider_pane_g17_ParamLimits

0xd0ba,	// (0x00048d33) main_cset6_slider_pane_g17

0x0011,

0xfb22,	// (0x0004b79b) main_cset6_slider_pane_g_ParamLimits

0xfb22,	// (0x0004b79b) main_cset6_slider_pane_g

0xd90f,	// (0x00049588) main_cset6_slider_pane_t1_ParamLimits

0xd90f,	// (0x00049588) main_cset6_slider_pane_t1

0xa443,	// (0x000460bc) main_cset6_slider_pane_t2_ParamLimits

0xa443,	// (0x000460bc) main_cset6_slider_pane_t2

0xa46e,	// (0x000460e7) main_cset6_slider_pane_t3_ParamLimits

0xa46e,	// (0x000460e7) main_cset6_slider_pane_t3

0xa499,	// (0x00046112) main_cset6_slider_pane_t4_ParamLimits

0xa499,	// (0x00046112) main_cset6_slider_pane_t4

0xa4c4,	// (0x0004613d) main_cset6_slider_pane_t5_ParamLimits

0xa4c4,	// (0x0004613d) main_cset6_slider_pane_t5

0xd950,	// (0x000495c9) main_cset6_slider_pane_t7_ParamLimits

0xd950,	// (0x000495c9) main_cset6_slider_pane_t7

0xa4ef,	// (0x00046168) main_cset6_slider_pane_t8_ParamLimits

0xa4ef,	// (0x00046168) main_cset6_slider_pane_t8

0xa513,	// (0x0004618c) main_cset6_slider_pane_t9_ParamLimits

0xa513,	// (0x0004618c) main_cset6_slider_pane_t9

0xa537,	// (0x000461b0) main_cset6_slider_pane_t10_ParamLimits

0xa537,	// (0x000461b0) main_cset6_slider_pane_t10

0xa55b,	// (0x000461d4) main_cset6_slider_pane_t11_ParamLimits

0xa55b,	// (0x000461d4) main_cset6_slider_pane_t11

0xd986,	// (0x000495ff) main_cset6_slider_pane_t14_ParamLimits

0xd986,	// (0x000495ff) main_cset6_slider_pane_t14

0xd9bf,	// (0x00049638) main_cset6_slider_pane_t15_ParamLimits

0xd9bf,	// (0x00049638) main_cset6_slider_pane_t15

0x000b,

0xfb47,	// (0x0004b7c0) main_cset6_slider_pane_t_ParamLimits

0xfb47,	// (0x0004b7c0) main_cset6_slider_pane_t

0xcd1c,	// (0x00048995) cset_slider_pane_g1_copy1

0xd17c,	// (0x00048df5) cset_slider_pane_g2_copy1

0xd185,	// (0x00048dfe) cset_slider_pane_g3_copy1

0x09ad,	// (0x0003c626) bg_popup_sub_pane_cp011_copy1

0xda01,	// (0x0004967a) main_cset_text_pane_g1_copy1

0xd20e,	// (0x00048e87) main_cset_text_pane_t1_copy1

0xd21c,	// (0x00048e95) main_cset_text_pane_t2_copy1

0xd22a,	// (0x00048ea3) main_cset_text_pane_t3_copy1

0xd238,	// (0x00048eb1) main_cset_text_pane_t4_copy1

0xd246,	// (0x00048ebf) main_cset_text_pane_t5_copy1

0xda09,	// (0x00049682) main_cset_text_pane_t6_copy1

0xda17,	// (0x00049690) main_cset_text_pane_t7_copy1

0xa33b,	// (0x00045fb4) main_cset_text2_pane_t1_copy1

0x1055,	// (0x0003ccce) main_ncimui_pane

0x7410,	// (0x00043089) popup_query_ncimui_window_ParamLimits

0x7410,	// (0x00043089) popup_query_ncimui_window

0xc8ac,	// (0x00048525) field_cale_ev2_pane_g4_ParamLimits

0xc8ac,	// (0x00048525) field_cale_ev2_pane_g4

0x888d,	// (0x00044506) cell_video_dialer_keypad_pane_g2_ParamLimits

0x888d,	// (0x00044506) cell_video_dialer_keypad_pane_g2

0x0001,

0xf82b,	// (0x0004b4a4) cell_video_dialer_keypad_pane_g_ParamLimits

0xf82b,	// (0x0004b4a4) cell_video_dialer_keypad_pane_g

0x88a5,	// (0x0004451e) cell_video_dialer_keypad_pane_t1

0x09ad,	// (0x0003c626) bg_popup_window_pane_cp012

0x6eca,	// (0x00042b43) heading_pane_cp06

0xda43,	// (0x000496bc) ncim_query_content_pane

0x09ad,	// (0x0003c626) bg_popup_heading_pane_cp01

0xda4b,	// (0x000496c4) ncim_heading_pane_t1

0xda59,	// (0x000496d2) ncim_indicator_popup_pane

0xda6b,	// (0x000496e4) ncim_query_button_pane

0xda7f,	// (0x000496f8) ncim_query_content_pane_t1

0xda91,	// (0x0004970a) ncim_query_content_pane_t2

0x0005,

0xfb8b,	// (0x0004b804) ncim_query_content_pane_t

0xdacb,	// (0x00049744) ncim_query_list_pane

0xdadd,	// (0x00049756) ncim_query_popup_pane

0xda59,	// (0x000496d2) ncim_indicator_popup_pane_ParamLimits

0xa6a8,	// (0x00046321) ncim_query_content_pane_g1_ParamLimits

0xa6a8,	// (0x00046321) ncim_query_content_pane_g1

0xda7f,	// (0x000496f8) ncim_query_content_pane_t1_ParamLimits

0xda91,	// (0x0004970a) ncim_query_content_pane_t2_ParamLimits

0xa6b4,	// (0x0004632d) ncim_query_content_pane_t3_ParamLimits

0xa6b4,	// (0x0004632d) ncim_query_content_pane_t3

0xa6dc,	// (0x00046355) ncim_query_content_pane_t4_ParamLimits

0xa6dc,	// (0x00046355) ncim_query_content_pane_t4

0xa704,	// (0x0004637d) ncim_query_content_pane_t5_ParamLimits

0xa704,	// (0x0004637d) ncim_query_content_pane_t5

0xdaa3,	// (0x0004971c) ncim_query_content_pane_t6_ParamLimits

0xdaa3,	// (0x0004971c) ncim_query_content_pane_t6

0xfb8b,	// (0x0004b804) ncim_query_content_pane_t_ParamLimits

0xdacb,	// (0x00049744) ncim_query_list_pane_ParamLimits

0xdadd,	// (0x00049756) ncim_query_popup_pane_ParamLimits

0xdaf1,	// (0x0004976a) wait_bar_pane_cp04

0x09ad,	// (0x0003c626) input_focus_pane_cp011

0xdaf9,	// (0x00049772) ncim_query_popup_pane_t1

0xdb07,	// (0x00049780) ncim_list_query_list_pane_ParamLimits

0xdb07,	// (0x00049780) ncim_list_query_list_pane

0x09ad,	// (0x0003c626) bg_button_pane_cp027

0xdb14,	// (0x0004978d) ncim_query_button_pane_g1

0x09ad,	// (0x0003c626) list_highlight_pane_cp012

0xdb1e,	// (0x00049797) ncim_list_query_list_pane_g1

0xdb26,	// (0x0004979f) ncim_list_query_list_pane_t1

0xeeff,	// (0x0004ab78) cam4_indicators_pane_g3_ParamLimits

0xeeff,	// (0x0004ab78) cam4_indicators_pane_g3

0xef7a,	// (0x0004abf3) vid4_indicators_pane_g5_ParamLimits

0xef7a,	// (0x0004abf3) vid4_indicators_pane_g5

0xf031,	// (0x0004acaa) vid4_progress_pane_g5_ParamLimits

0xf031,	// (0x0004acaa) vid4_progress_pane_g5

0xa593,	// (0x0004620c) main_ncimui_pane_g1

0xa5fc,	// (0x00046275) ncimui_group_query_pane_ParamLimits

0xa5fc,	// (0x00046275) ncimui_group_query_pane

0xa644,	// (0x000462bd) ncimui_list_pane_ParamLimits

0xa644,	// (0x000462bd) ncimui_list_pane

0xa66b,	// (0x000462e4) ncimui_text_pane_ParamLimits

0xa66b,	// (0x000462e4) ncimui_text_pane

0xa72c,	// (0x000463a5) ncimui_text_pane_t1_ParamLimits

0xa72c,	// (0x000463a5) ncimui_text_pane_t1

0xdb34,	// (0x000497ad) ncimui_list_single_graphic_pane_ParamLimits

0xdb34,	// (0x000497ad) ncimui_list_single_graphic_pane

0xa74a,	// (0x000463c3) ncimui_query_pane_ParamLimits

0xa74a,	// (0x000463c3) ncimui_query_pane

0x09ad,	// (0x0003c626) list_highlight_pane_cp013

0xdb44,	// (0x000497bd) ncim_list_query_list_pane_t1_copy1

0xdb52,	// (0x000497cb) ncim_list_single_graphic_pane_g1

0xa75d,	// (0x000463d6) ncim_query_button_pane_cp01

0xa769,	// (0x000463e2) ncim_query_entry_pane_ParamLimits

0xa769,	// (0x000463e2) ncim_query_entry_pane

0xa77c,	// (0x000463f5) ncimui_query_pane_g1

0xa788,	// (0x00046401) ncimui_query_pane_t1_ParamLimits

0xa788,	// (0x00046401) ncimui_query_pane_t1

0x1055,	// (0x0003ccce) input_focus_pane_cp012

0xdb5a,	// (0x000497d3) ncim_query_entry_pane_t1

0x1120,	// (0x0003cd99) main_im_pane_ParamLimits

0x1055,	// (0x0003ccce) main_mobtv_pane_ParamLimits

0x1055,	// (0x0003ccce) main_mobtv_pane

0xa42b,	// (0x000460a4) main_cset6_slider_pane_g18_ParamLimits

0xa42b,	// (0x000460a4) main_cset6_slider_pane_g18

0xa437,	// (0x000460b0) main_cset6_slider_pane_g19_ParamLimits

0xa437,	// (0x000460b0) main_cset6_slider_pane_g19

0x10ca,	// (0x0003cd43) bg_main_mobtv_pane_ParamLimits

0x10ca,	// (0x0003cd43) bg_main_mobtv_pane

0xa7a1,	// (0x0004641a) main_mobtv_info_pane

0xa7aa,	// (0x00046423) main_mobtv_loading_pane_ParamLimits

0xa7aa,	// (0x00046423) main_mobtv_loading_pane

0xdb6c,	// (0x000497e5) main_mobtv_pg_channel_list_pane

0xdb76,	// (0x000497ef) main_mobtv_pg_hdr_pane

0xa7b7,	// (0x00046430) main_mobtv_programe_curr_pane_ParamLimits

0xa7b7,	// (0x00046430) main_mobtv_programe_curr_pane

0xa7c4,	// (0x0004643d) main_mobtv_programe_next_pane_ParamLimits

0xa7c4,	// (0x0004643d) main_mobtv_programe_next_pane

0xdb7f,	// (0x000497f8) popup_mobtv_noti_window

0x1308,	// (0x0003cf81) main_tv_pg_hdr_pane_g1

0xdb87,	// (0x00049800) main_tv_pg_hdr_pane_g2

0xdb8f,	// (0x00049808) main_tv_pg_hdr_pane_g3

0xdb97,	// (0x00049810) main_tv_pg_hdr_pane_g4

0xdb9f,	// (0x00049818) main_tv_pg_hdr_pane_g5

0xdba9,	// (0x00049822) main_tv_pg_hdr_pane_g6

0xdbb3,	// (0x0004982c) main_tv_pg_hdr_pane_g7

0xdbbd,	// (0x00049836) main_tv_pg_hdr_pane_g8

0xdbc7,	// (0x00049840) main_tv_pg_hdr_pane_g9

0xdbd1,	// (0x0004984a) main_tv_pg_hdr_pane_g10

0xdbdb,	// (0x00049854) main_tv_pg_hdr_pane_g11

0x000a,

0xfb98,	// (0x0004b811) main_tv_pg_hdr_pane_g

0xdbe5,	// (0x0004985e) main_tv_pg_hdr_pane_t1

0xdbf3,	// (0x0004986c) main_tv_pg_hdr_pane_t2

0xdc01,	// (0x0004987a) main_tv_pg_hdr_pane_t3

0xdc11,	// (0x0004988a) main_tv_pg_hdr_pane_t4

0xdc21,	// (0x0004989a) main_tv_pg_hdr_pane_t5

0x0004,

0xfbaf,	// (0x0004b828) main_tv_pg_hdr_pane_t

0xdc31,	// (0x000498aa) single_mobtv_pg_channel_pane_ParamLimits

0xdc31,	// (0x000498aa) single_mobtv_pg_channel_pane

0xdc43,	// (0x000498bc) single_mobtv_pg_channel_table_pane

0x1630,	// (0x0003d2a9) single_mobtv_pg_channel_thumb_pane

0xdc4c,	// (0x000498c5) single_tv_pg_channel_pane_g1

0xdc55,	// (0x000498ce) single_tv_pg_channel_pane_g2

0x0001,

0xfbba,	// (0x0004b833) single_tv_pg_channel_pane_g

0x10ae,	// (0x0003cd27) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0x10ae,	// (0x0003cd27) bg_single_mobtv_pg_channel_thumb_pane

0xdc5e,	// (0x000498d7) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xdc5e,	// (0x000498d7) single_mobtv_pg_channel_thumb_pane_g1

0xdc6c,	// (0x000498e5) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xdc6c,	// (0x000498e5) single_mobtv_pg_channel_thumb_pane_g2

0xdc78,	// (0x000498f1) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xdc78,	// (0x000498f1) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfbbf,	// (0x0004b838) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfbbf,	// (0x0004b838) single_mobtv_pg_channel_thumb_pane_g

0xdc84,	// (0x000498fd) single_mobtv_pg_channel_thumb_pane_t1

0xdc92,	// (0x0004990b) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfbc6,	// (0x0004b83f) single_mobtv_pg_channel_thumb_pane_t

0x1308,	// (0x0003cf81) bg_single_mobtv_pg_channel_table_pane_g1

0x1308,	// (0x0003cf81) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf3d8,	// (0x0004b051) bg_single_mobtv_pg_channel_table_pane_g

0xdca0,	// (0x00049919) single_mobtv_pg_channel_table_pane_t1

0xdcae,	// (0x00049927) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfbcb,	// (0x0004b844) single_mobtv_pg_channel_table_pane_t

0xa7d9,	// (0x00046452) main_mobtv_info_pane_g1_ParamLimits

0xa7d9,	// (0x00046452) main_mobtv_info_pane_g1

0xa7f7,	// (0x00046470) main_mobtv_info_pane_t1_ParamLimits

0xa7f7,	// (0x00046470) main_mobtv_info_pane_t1

0xa86f,	// (0x000464e8) main_mobtv_info_pane_t2_ParamLimits

0xa86f,	// (0x000464e8) main_mobtv_info_pane_t2

0x0002,

0xfbd5,	// (0x0004b84e) main_mobtv_info_pane_t_ParamLimits

0xfbd5,	// (0x0004b84e) main_mobtv_info_pane_t

0xa8fe,	// (0x00046577) wait_bar_pane_cp05

0xa910,	// (0x00046589) main_mobtv_loading_pane_g1_ParamLimits

0xa910,	// (0x00046589) main_mobtv_loading_pane_g1

0xa923,	// (0x0004659c) main_mobtv_loading_pane_g2_ParamLimits

0xa923,	// (0x0004659c) main_mobtv_loading_pane_g2

0xa92f,	// (0x000465a8) main_mobtv_loading_pane_g3_ParamLimits

0xa92f,	// (0x000465a8) main_mobtv_loading_pane_g3

0x0002,

0xfbdc,	// (0x0004b855) main_mobtv_loading_pane_g_ParamLimits

0xfbdc,	// (0x0004b855) main_mobtv_loading_pane_g

0xdcbc,	// (0x00049935) main_mobtv_loading_pane_t1_ParamLimits

0xdcbc,	// (0x00049935) main_mobtv_loading_pane_t1

0xdcd4,	// (0x0004994d) main_mobtv_loading_pane_t2_ParamLimits

0xdcd4,	// (0x0004994d) main_mobtv_loading_pane_t2

0x0001,

0xfbe3,	// (0x0004b85c) main_mobtv_loading_pane_t_ParamLimits

0xfbe3,	// (0x0004b85c) main_mobtv_loading_pane_t

0xa942,	// (0x000465bb) wait_bar_pane_cp06_ParamLimits

0xa942,	// (0x000465bb) wait_bar_pane_cp06

0xdcf8,	// (0x00049971) main_mobtv_programe_curr_pane_t1

0xdd06,	// (0x0004997f) main_mobtv_programe_curr_pane_t2

0x0001,

0xfbe8,	// (0x0004b861) main_mobtv_programe_curr_pane_t

0xdd14,	// (0x0004998d) main_mobtv_programe_next_pane_t1

0xdd22,	// (0x0004999b) main_mobtv_programe_next_pane_t2

0xdd30,	// (0x000499a9) main_mobtv_programe_next_pane_t3

0x0002,

0xfbed,	// (0x0004b866) main_mobtv_programe_next_pane_t

0x09ad,	// (0x0003c626) bg_popup_mobtv_noti_window_pane

0xdd3e,	// (0x000499b7) popup_mobtv_noti_window_g1

0xdd46,	// (0x000499bf) popup_mobtv_noti_window_t1

0xdd54,	// (0x000499cd) popup_mobtv_noti_window_t2

0x0001,

0xfbf4,	// (0x0004b86d) popup_mobtv_noti_window_t

0x1308,	// (0x0003cf81) bg_popup_mobtv_noti_window_pane_g1

0x09ad,	// (0x0003c626) sc_clock_pane

0x09ad,	// (0x0003c626) main_fs_bigclock_pane

0xa07e,	// (0x00045cf7) blid2_tripm_pane_t4_ParamLimits

0xa07e,	// (0x00045cf7) blid2_tripm_pane_t4

0xa951,	// (0x000465ca) sc_clock_pane_g1_ParamLimits

0xa951,	// (0x000465ca) sc_clock_pane_g1

0xa963,	// (0x000465dc) sc_clock_pane_t1_ParamLimits

0xa963,	// (0x000465dc) sc_clock_pane_t1

0xa985,	// (0x000465fe) sc_clock_pane_t2_ParamLimits

0xa985,	// (0x000465fe) sc_clock_pane_t2

0xa99d,	// (0x00046616) sc_clock_pane_t3_ParamLimits

0xa99d,	// (0x00046616) sc_clock_pane_t3

0x0004,

0xfbf9,	// (0x0004b872) sc_clock_pane_t_ParamLimits

0xfbf9,	// (0x0004b872) sc_clock_pane_t

0xb374,	// (0x00046fed) main_fs_bigclock_indicator_pane_ParamLimits

0xb374,	// (0x00046fed) main_fs_bigclock_indicator_pane

0xaa43,	// (0x000466bc) main_fs_bigclock_pane_g1_ParamLimits

0xaa43,	// (0x000466bc) main_fs_bigclock_pane_g1

0xb380,	// (0x00046ff9) main_fs_bigclock_pane_t1_ParamLimits

0xb380,	// (0x00046ff9) main_fs_bigclock_pane_t1

0xb392,	// (0x0004700b) main_fs_bigclock_pane_t2_ParamLimits

0xb392,	// (0x0004700b) main_fs_bigclock_pane_t2

0xb3a6,	// (0x0004701f) main_fs_bigclock_pane_t3_ParamLimits

0xb3a6,	// (0x0004701f) main_fs_bigclock_pane_t3

0x0002,

0xfd8a,	// (0x0004ba03) main_fs_bigclock_pane_t_ParamLimits

0xfd8a,	// (0x0004ba03) main_fs_bigclock_pane_t

0xe8d6,	// (0x0004a54f) main_fs_bigclock_indicator_pane_g1

0xda73,	// (0x000496ec) ncim_query_content_pane_g2_ParamLimits

0xda73,	// (0x000496ec) ncim_query_content_pane_g2

0x0001,

0xfb86,	// (0x0004b7ff) ncim_query_content_pane_g_ParamLimits

0xfb86,	// (0x0004b7ff) ncim_query_content_pane_g

0xa9b6,	// (0x0004662f) sc_clock_pane_t4_ParamLimits

0xa9b6,	// (0x0004662f) sc_clock_pane_t4

0x1055,	// (0x0003ccce) main_radioblah_pane

0xee74,	// (0x0004aaed) cell_call4_button_pane_t1_copy1_ParamLimits

0xee74,	// (0x0004aaed) cell_call4_button_pane_t1_copy1

0xa5ab,	// (0x00046224) main_ncimui_pane_t1_ParamLimits

0xa5ab,	// (0x00046224) main_ncimui_pane_t1

0xa5c5,	// (0x0004623e) main_ncimui_pane_t2_ParamLimits

0xa5c5,	// (0x0004623e) main_ncimui_pane_t2

0x0002,

0xfb7f,	// (0x0004b7f8) main_ncimui_pane_t_ParamLimits

0xfb7f,	// (0x0004b7f8) main_ncimui_pane_t

0xde9a,	// (0x00049b13) main_radioblah_anim_pane_ParamLimits

0xde9a,	// (0x00049b13) main_radioblah_anim_pane

0xdeab,	// (0x00049b24) main_radioblah_info_pane_ParamLimits

0xdeab,	// (0x00049b24) main_radioblah_info_pane

0xdebf,	// (0x00049b38) main_radioblah_pane_t1_ParamLimits

0xdebf,	// (0x00049b38) main_radioblah_pane_t1

0xdedb,	// (0x00049b54) main_radioblah_pane_t2_ParamLimits

0xdedb,	// (0x00049b54) main_radioblah_pane_t2

0x0003,

0xfc1a,	// (0x0004b893) main_radioblah_pane_t_ParamLimits

0xfc1a,	// (0x0004b893) main_radioblah_pane_t

0xaaa2,	// (0x0004671b) main_radioblah_rocker_ctrl_pane_ParamLimits

0xaaa2,	// (0x0004671b) main_radioblah_rocker_ctrl_pane

0xdf23,	// (0x00049b9c) main_radioblah_info_pane_t1_ParamLimits

0xdf23,	// (0x00049b9c) main_radioblah_info_pane_t1

0xaafa,	// (0x00046773) main_radioblah_info_pane_t2_ParamLimits

0xaafa,	// (0x00046773) main_radioblah_info_pane_t2

0x0003,

0xfc23,	// (0x0004b89c) main_radioblah_info_pane_t_ParamLimits

0xfc23,	// (0x0004b89c) main_radioblah_info_pane_t

0x1308,	// (0x0003cf81) main_radioblah_rocker_ctrl_pane_g1

0xabaa,	// (0x00046823) main_radioblah_rocker_ctrl_pane_g2

0xabb2,	// (0x0004682b) main_radioblah_rocker_ctrl_pane_g3

0xabba,	// (0x00046833) main_radioblah_rocker_ctrl_pane_g4

0xabc2,	// (0x0004683b) main_radioblah_rocker_ctrl_pane_g5

0xabca,	// (0x00046843) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfc2c,	// (0x0004b8a5) main_radioblah_rocker_ctrl_pane_g

0xa33b,	// (0x00045fb4) main_cset_text2_pane_t1_copy1_ParamLimits

0xeed2,	// (0x0004ab4b) cam4_image_uncrop_qvga_pane

0xef25,	// (0x0004ab9e) vid4_image_uncrop_qcif_pane

0xf068,	// (0x0004ace1) cam6_image_uncrop_qvga_pane_ParamLimits

0xf068,	// (0x0004ace1) cam6_image_uncrop_qvga_pane

0xd765,	// (0x000493de) vid6_image_uncrop_qcif_pane_ParamLimits

0xd765,	// (0x000493de) vid6_image_uncrop_qcif_pane

0x09ad,	// (0x0003c626) bg_popup_preview_window_pane_cp03

0xda25,	// (0x0004969e) list_cset_text2_pane

0xda2d,	// (0x000496a6) main_cset6_text2_pane_g1

0xda35,	// (0x000496ae) main_cset6_text2_pane_t1

0x03fb,	// (0x0003c074) list_cset_text2_pane_t1_ParamLimits

0x03fb,	// (0x0003c074) list_cset_text2_pane_t1

0x1055,	// (0x0003ccce) main_radioblah_pane_ParamLimits

0xa8ea,	// (0x00046563) main_mobtv_info_pane_t3_ParamLimits

0xa8ea,	// (0x00046563) main_mobtv_info_pane_t3

0xaa90,	// (0x00046709) main_radioblah_pane_g1

0xaaca,	// (0x00046743) main_radioblah_info_pane_g1

0xab4f,	// (0x000467c8) main_radioblah_info_pane_t3_ParamLimits

0xab4f,	// (0x000467c8) main_radioblah_info_pane_t3

0x545a,	// (0x000410d3) highlight_cell_cale_month_pane_ParamLimits

0x545a,	// (0x000410d3) highlight_cell_cale_month_pane

0x09ad,	// (0x0003c626) main_phob_fisheye_pane

0xc94d,	// (0x000485c6) scroll_pane_cp0031_ParamLimits

0xc94d,	// (0x000485c6) scroll_pane_cp0031

0xd873,	// (0x000494ec) wait_bar_pane_cp08_ParamLimits

0xa3bd,	// (0x00046036) cset_list_set_pane_copy1_ParamLimits

0xdf5d,	// (0x00049bd6) highlight_cell_cale_month_pane_g1

0xabd2,	// (0x0004684b) highlight_cell_cale_month_pane_t1

0xd4d6,	// (0x0004914f) list_gen_pane_cp01

0xd081,	// (0x00048cfa) scroll_pane_01

0xabe0,	// (0x00046859) list_single_double_fisheye_pane

0x3533,	// (0x0003f1ac) list_double_fisheye_pane_g1_ParamLimits

0x3533,	// (0x0003f1ac) list_double_fisheye_pane_g1

0x353f,	// (0x0003f1b8) list_double_fisheye_pane_g2_ParamLimits

0x353f,	// (0x0003f1b8) list_double_fisheye_pane_g2

0xabe9,	// (0x00046862) list_double_fisheye_pane_g3_ParamLimits

0xabe9,	// (0x00046862) list_double_fisheye_pane_g3

0x0004,

0xfc39,	// (0x0004b8b2) list_double_fisheye_pane_g_ParamLimits

0xfc39,	// (0x0004b8b2) list_double_fisheye_pane_g

0x3570,	// (0x0003f1e9) list_double_fisheye_pane_t1_ParamLimits

0x3570,	// (0x0003f1e9) list_double_fisheye_pane_t1

0x358b,	// (0x0003f204) list_double_fisheye_pane_t2_ParamLimits

0x358b,	// (0x0003f204) list_double_fisheye_pane_t2

0x0001,

0xfc44,	// (0x0004b8bd) list_double_fisheye_pane_t_ParamLimits

0xfc44,	// (0x0004b8bd) list_double_fisheye_pane_t

0x09ad,	// (0x0003c626) main_call5_pane

0xa9e1,	// (0x0004665a) sc_swipe_pane_ParamLimits

0xa9e1,	// (0x0004665a) sc_swipe_pane

0xac08,	// (0x00046881) call5_image_pane_ParamLimits

0xac08,	// (0x00046881) call5_image_pane

0xac25,	// (0x0004689e) call5_swipe_1_pane_ParamLimits

0xac25,	// (0x0004689e) call5_swipe_1_pane

0xac38,	// (0x000468b1) call5_swipe_2_pane_ParamLimits

0xac38,	// (0x000468b1) call5_swipe_2_pane

0xac63,	// (0x000468dc) popup_call5_audio_first_window_ParamLimits

0xac63,	// (0x000468dc) popup_call5_audio_first_window

0x10ae,	// (0x0003cd27) call5_swipe_1_pane_g1_ParamLimits

0x10ae,	// (0x0003cd27) call5_swipe_1_pane_g1

0xdf65,	// (0x00049bde) call5_swipe_1_pane_g2_ParamLimits

0xdf65,	// (0x00049bde) call5_swipe_1_pane_g2

0x0001,

0xfc49,	// (0x0004b8c2) call5_swipe_1_pane_g_ParamLimits

0xfc49,	// (0x0004b8c2) call5_swipe_1_pane_g

0xdf71,	// (0x00049bea) call5_swipe_1_pane_t1_ParamLimits

0xdf71,	// (0x00049bea) call5_swipe_1_pane_t1

0x10ae,	// (0x0003cd27) call5_swipe_2_pane_g1_ParamLimits

0x10ae,	// (0x0003cd27) call5_swipe_2_pane_g1

0xdf86,	// (0x00049bff) call5_swipe_2_pane_g2_ParamLimits

0xdf86,	// (0x00049bff) call5_swipe_2_pane_g2

0x0001,

0xfc4e,	// (0x0004b8c7) call5_swipe_2_pane_g_ParamLimits

0xfc4e,	// (0x0004b8c7) call5_swipe_2_pane_g

0xdf92,	// (0x00049c0b) call5_swipe_2_pane_t1_ParamLimits

0xdf92,	// (0x00049c0b) call5_swipe_2_pane_t1

0xdfa7,	// (0x00049c20) sc_swipe_pane_g1_ParamLimits

0xdfa7,	// (0x00049c20) sc_swipe_pane_g1

0xdfb4,	// (0x00049c2d) sc_swipe_pane_g2_ParamLimits

0xdfb4,	// (0x00049c2d) sc_swipe_pane_g2

0x0001,

0xfc53,	// (0x0004b8cc) sc_swipe_pane_g_ParamLimits

0xfc53,	// (0x0004b8cc) sc_swipe_pane_g

0xdfc0,	// (0x00049c39) sc_swipe_pane_t1_ParamLimits

0xdfc0,	// (0x00049c39) sc_swipe_pane_t1

0x09ad,	// (0x0003c626) main_cmail_launcher_pane

0xac74,	// (0x000468ed) aid_size_cell_cmail_l_ParamLimits

0xac74,	// (0x000468ed) aid_size_cell_cmail_l

0xac82,	// (0x000468fb) grid_cmail_l_pane_ParamLimits

0xac82,	// (0x000468fb) grid_cmail_l_pane

0xac9c,	// (0x00046915) cell_cmail_l_pane_ParamLimits

0xac9c,	// (0x00046915) cell_cmail_l_pane

0xdfd5,	// (0x00049c4e) cell_cmail_l_pane_g1_ParamLimits

0xdfd5,	// (0x00049c4e) cell_cmail_l_pane_g1

0xdfe1,	// (0x00049c5a) cell_cmail_l_pane_t1_ParamLimits

0xdfe1,	// (0x00049c5a) cell_cmail_l_pane_t1

0xdff7,	// (0x00049c70) cell_cmail_l_pane_t2_ParamLimits

0xdff7,	// (0x00049c70) cell_cmail_l_pane_t2

0x0001,

0xfc58,	// (0x0004b8d1) cell_cmail_l_pane_t_ParamLimits

0xfc58,	// (0x0004b8d1) cell_cmail_l_pane_t

0x1055,	// (0x0003ccce) grid_highlight_pane_cp018_ParamLimits

0x1055,	// (0x0003ccce) grid_highlight_pane_cp018

0x3a75,	// (0x0003f6ee) main2_pane_ParamLimits

0x3a75,	// (0x0003f6ee) main2_pane

0x11af,	// (0x0003ce28) popup_sp_fs_action_menu_bg_pane_g1

0x11b7,	// (0x0003ce30) popup_sp_fs_action_menu_bg_pane_g2

0x11bf,	// (0x0003ce38) popup_sp_fs_action_menu_bg_pane_g3

0x11c7,	// (0x0003ce40) popup_sp_fs_action_menu_bg_pane_g4

0x11cf,	// (0x0003ce48) popup_sp_fs_action_menu_bg_pane_g5

0x11d7,	// (0x0003ce50) popup_sp_fs_action_menu_bg_pane_g6

0x11df,	// (0x0003ce58) popup_sp_fs_action_menu_bg_pane_g7

0x11e7,	// (0x0003ce60) popup_sp_fs_action_menu_bg_pane_g8

0x11ef,	// (0x0003ce68) popup_sp_fs_action_menu_bg_pane_g9

0x11f7,	// (0x0003ce70) popup_sp_fs_action_menu_bg_pane_g10

0x11f7,	// (0x0003ce70) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf145,	// (0x0004adbe) popup_sp_fs_action_menu_bg_pane_g

0x10ae,	// (0x0003cd27) list_medium_line_x2_t3_g3_g1_ParamLimits

0x10ae,	// (0x0003cd27) list_medium_line_x2_t3_g3_g1

0x10ae,	// (0x0003cd27) list_medium_line_x2_t3_g3_g2_ParamLimits

0x10ae,	// (0x0003cd27) list_medium_line_x2_t3_g3_g2

0x10ae,	// (0x0003cd27) list_medium_line_x2_t3_g3_g3_ParamLimits

0x10ae,	// (0x0003cd27) list_medium_line_x2_t3_g3_g3

0x0002,

0xf1f3,	// (0x0004ae6c) list_medium_line_x2_t3_g3_g_ParamLimits

0xf1f3,	// (0x0004ae6c) list_medium_line_x2_t3_g3_g

0x1322,	// (0x0003cf9b) list_medium_line_x2_t3_g3_t1_ParamLimits

0x1322,	// (0x0003cf9b) list_medium_line_x2_t3_g3_t1

0x1322,	// (0x0003cf9b) list_medium_line_x2_t3_g3_t2_ParamLimits

0x1322,	// (0x0003cf9b) list_medium_line_x2_t3_g3_t2

0x1322,	// (0x0003cf9b) list_medium_line_x2_t3_g3_t3_ParamLimits

0x1322,	// (0x0003cf9b) list_medium_line_x2_t3_g3_t3

0x0002,

0xf1fa,	// (0x0004ae73) list_medium_line_x2_t3_g3_t_ParamLimits

0xf1fa,	// (0x0004ae73) list_medium_line_x2_t3_g3_t

0x10ae,	// (0x0003cd27) list_medium_line_x2_t3_g2_g1_ParamLimits

0x10ae,	// (0x0003cd27) list_medium_line_x2_t3_g2_g1

0x10ae,	// (0x0003cd27) list_medium_line_x2_t3_g2_g2_ParamLimits

0x10ae,	// (0x0003cd27) list_medium_line_x2_t3_g2_g2

0x0001,

0xf201,	// (0x0004ae7a) list_medium_line_x2_t3_g2_g_ParamLimits

0xf201,	// (0x0004ae7a) list_medium_line_x2_t3_g2_g

0x1322,	// (0x0003cf9b) list_medium_line_x2_t3_g2_t1_ParamLimits

0x1322,	// (0x0003cf9b) list_medium_line_x2_t3_g2_t1

0x1322,	// (0x0003cf9b) list_medium_line_x2_t3_g2_t2_ParamLimits

0x1322,	// (0x0003cf9b) list_medium_line_x2_t3_g2_t2

0x1322,	// (0x0003cf9b) list_medium_line_x2_t3_g2_t3_ParamLimits

0x1322,	// (0x0003cf9b) list_medium_line_x2_t3_g2_t3

0x0002,

0xf1fa,	// (0x0004ae73) list_medium_line_x2_t3_g2_t_ParamLimits

0xf1fa,	// (0x0004ae73) list_medium_line_x2_t3_g2_t

0x10ae,	// (0x0003cd27) list_medium_line_x2_t4_g4_g1_ParamLimits

0x10ae,	// (0x0003cd27) list_medium_line_x2_t4_g4_g1

0x10ae,	// (0x0003cd27) list_medium_line_x2_t4_g4_g2_ParamLimits

0x10ae,	// (0x0003cd27) list_medium_line_x2_t4_g4_g2

0x10ae,	// (0x0003cd27) list_medium_line_x2_t4_g4_g3_ParamLimits

0x10ae,	// (0x0003cd27) list_medium_line_x2_t4_g4_g3

0x10ae,	// (0x0003cd27) list_medium_line_x2_t4_g4_g4_ParamLimits

0x10ae,	// (0x0003cd27) list_medium_line_x2_t4_g4_g4

0x0003,

0xf206,	// (0x0004ae7f) list_medium_line_x2_t4_g4_g_ParamLimits

0xf206,	// (0x0004ae7f) list_medium_line_x2_t4_g4_g

0x1322,	// (0x0003cf9b) list_medium_line_x2_t4_g4_t1_ParamLimits

0x1322,	// (0x0003cf9b) list_medium_line_x2_t4_g4_t1

0x1322,	// (0x0003cf9b) list_medium_line_x2_t4_g4_t2_ParamLimits

0x1322,	// (0x0003cf9b) list_medium_line_x2_t4_g4_t2

0x1322,	// (0x0003cf9b) list_medium_line_x2_t4_g4_t3_ParamLimits

0x1322,	// (0x0003cf9b) list_medium_line_x2_t4_g4_t3

0x1322,	// (0x0003cf9b) list_medium_line_x2_t4_g4_t4_ParamLimits

0x1322,	// (0x0003cf9b) list_medium_line_x2_t4_g4_t4

0x0003,

0xf20f,	// (0x0004ae88) list_medium_line_x2_t4_g4_t_ParamLimits

0xf20f,	// (0x0004ae88) list_medium_line_x2_t4_g4_t

0x10ae,	// (0x0003cd27) list_medium_line_x2_t2_g4_g1_ParamLimits

0x10ae,	// (0x0003cd27) list_medium_line_x2_t2_g4_g1

0x10ae,	// (0x0003cd27) list_medium_line_x2_t2_g4_g2_ParamLimits

0x10ae,	// (0x0003cd27) list_medium_line_x2_t2_g4_g2

0x10ae,	// (0x0003cd27) list_medium_line_x2_t2_g4_g3_ParamLimits

0x10ae,	// (0x0003cd27) list_medium_line_x2_t2_g4_g3

0x10ae,	// (0x0003cd27) list_medium_line_x2_t2_g4_g4_ParamLimits

0x10ae,	// (0x0003cd27) list_medium_line_x2_t2_g4_g4

0x0003,

0xf206,	// (0x0004ae7f) list_medium_line_x2_t2_g4_g_ParamLimits

0xf206,	// (0x0004ae7f) list_medium_line_x2_t2_g4_g

0x1322,	// (0x0003cf9b) list_medium_line_x2_t2_g4_t1_ParamLimits

0x1322,	// (0x0003cf9b) list_medium_line_x2_t2_g4_t1

0x1322,	// (0x0003cf9b) list_medium_line_x2_t2_g4_t2_ParamLimits

0x1322,	// (0x0003cf9b) list_medium_line_x2_t2_g4_t2

0x0001,

0xf1d6,	// (0x0004ae4f) list_medium_line_x2_t2_g4_t_ParamLimits

0xf1d6,	// (0x0004ae4f) list_medium_line_x2_t2_g4_t

0x10ae,	// (0x0003cd27) list_medium_line_x2_t2_g3_g1_ParamLimits

0x10ae,	// (0x0003cd27) list_medium_line_x2_t2_g3_g1

0x10ae,	// (0x0003cd27) list_medium_line_x2_t2_g3_g2_ParamLimits

0x10ae,	// (0x0003cd27) list_medium_line_x2_t2_g3_g2

0x10ae,	// (0x0003cd27) list_medium_line_x2_t2_g3_g3_ParamLimits

0x10ae,	// (0x0003cd27) list_medium_line_x2_t2_g3_g3

0x0002,

0xf1f3,	// (0x0004ae6c) list_medium_line_x2_t2_g3_g_ParamLimits

0xf1f3,	// (0x0004ae6c) list_medium_line_x2_t2_g3_g

0x1322,	// (0x0003cf9b) list_medium_line_x2_t2_g3_t1_ParamLimits

0x1322,	// (0x0003cf9b) list_medium_line_x2_t2_g3_t1

0x1322,	// (0x0003cf9b) list_medium_line_x2_t2_g3_t2_ParamLimits

0x1322,	// (0x0003cf9b) list_medium_line_x2_t2_g3_t2

0x0001,

0xf1d6,	// (0x0004ae4f) list_medium_line_x2_t2_g3_t_ParamLimits

0xf1d6,	// (0x0004ae4f) list_medium_line_x2_t2_g3_t

0x55bf,	// (0x00041238) main_sp_fs_list_pane_ParamLimits

0x55bf,	// (0x00041238) main_sp_fs_list_pane

0x55cb,	// (0x00041244) sp_fs_scroll_pane_ParamLimits

0x55cb,	// (0x00041244) sp_fs_scroll_pane

0x1843,	// (0x0003d4bc) list_medium_line_x2_t3_t1

0x1843,	// (0x0003d4bc) list_medium_line_x2_t3_t2

0x1843,	// (0x0003d4bc) list_medium_line_x2_t3_t3

0x0002,

0xf2bc,	// (0x0004af35) list_medium_line_x2_t3_t

0x1843,	// (0x0003d4bc) list_medium_line_x3_t4_t1

0x1843,	// (0x0003d4bc) list_medium_line_x3_t4_t2

0x1843,	// (0x0003d4bc) list_medium_line_x3_t4_t3

0x1843,	// (0x0003d4bc) list_medium_line_x3_t4_t4

0x0003,

0xf2c3,	// (0x0004af3c) list_medium_line_x3_t4_t

0x1843,	// (0x0003d4bc) list_medium_line_x4_t5_t1

0x1843,	// (0x0003d4bc) list_medium_line_x4_t5_t2

0x1843,	// (0x0003d4bc) list_medium_line_x4_t5_t3

0x1843,	// (0x0003d4bc) list_medium_line_x4_t5_t4

0x1843,	// (0x0003d4bc) list_medium_line_x4_t5_t5

0x0004,

0xf2cc,	// (0x0004af45) list_medium_line_x4_t5_t

0x10ae,	// (0x0003cd27) list_medium_line_t4_g4_g1_ParamLimits

0x10ae,	// (0x0003cd27) list_medium_line_t4_g4_g1

0x10ae,	// (0x0003cd27) list_medium_line_t4_g4_g2_ParamLimits

0x10ae,	// (0x0003cd27) list_medium_line_t4_g4_g2

0x10ae,	// (0x0003cd27) list_medium_line_t4_g4_g3_ParamLimits

0x10ae,	// (0x0003cd27) list_medium_line_t4_g4_g3

0x10ae,	// (0x0003cd27) list_medium_line_t4_g4_g4_ParamLimits

0x10ae,	// (0x0003cd27) list_medium_line_t4_g4_g4

0x0003,

0xf206,	// (0x0004ae7f) list_medium_line_t4_g4_g_ParamLimits

0xf206,	// (0x0004ae7f) list_medium_line_t4_g4_g

0x1322,	// (0x0003cf9b) list_medium_line_t4_g4_t1_ParamLimits

0x1322,	// (0x0003cf9b) list_medium_line_t4_g4_t1

0x1322,	// (0x0003cf9b) list_medium_line_t4_g4_t2_ParamLimits

0x1322,	// (0x0003cf9b) list_medium_line_t4_g4_t2

0x1322,	// (0x0003cf9b) list_medium_line_t4_g4_t3_ParamLimits

0x1322,	// (0x0003cf9b) list_medium_line_t4_g4_t3

0x1322,	// (0x0003cf9b) list_medium_line_t4_g4_t4_ParamLimits

0x1322,	// (0x0003cf9b) list_medium_line_t4_g4_t4

0x0003,

0xf20f,	// (0x0004ae88) list_medium_line_t4_g4_t_ParamLimits

0xf20f,	// (0x0004ae88) list_medium_line_t4_g4_t

0x5676,	// (0x000412ef) chi_dic_find_pane_g1

0x71e0,	// (0x00042e59) main_tport_pane

0x1843,	// (0x0003d4bc) list_medium_line_plain_t1

0x10ae,	// (0x0003cd27) list_medium_line_t2_g2_g1_ParamLimits

0x10ae,	// (0x0003cd27) list_medium_line_t2_g2_g1

0x10ae,	// (0x0003cd27) list_medium_line_t2_g2_g2_ParamLimits

0x10ae,	// (0x0003cd27) list_medium_line_t2_g2_g2

0x0001,

0xf201,	// (0x0004ae7a) list_medium_line_t2_g2_g_ParamLimits

0xf201,	// (0x0004ae7a) list_medium_line_t2_g2_g

0x1322,	// (0x0003cf9b) list_medium_line_t2_g2_t1_ParamLimits

0x1322,	// (0x0003cf9b) list_medium_line_t2_g2_t1

0x1322,	// (0x0003cf9b) list_medium_line_t2_g2_t2_ParamLimits

0x1322,	// (0x0003cf9b) list_medium_line_t2_g2_t2

0x0001,

0xf1d6,	// (0x0004ae4f) list_medium_line_t2_g2_t_ParamLimits

0xf1d6,	// (0x0004ae4f) list_medium_line_t2_g2_t

0xd4df,	// (0x00049158) aid_sp_fs_list_icon_a_sm

0xd4e7,	// (0x00049160) aid_sp_fs_list_icon_d

0xd4ef,	// (0x00049168) aid_sp_fs_text_primary

0xd4f8,	// (0x00049171) aid_sp_fs_text_secondary

0x09ad,	// (0x0003c626) list_medium_line

0x09ad,	// (0x0003c626) list_medium_line_g2

0x09ad,	// (0x0003c626) list_medium_line_g3

0x09ad,	// (0x0003c626) list_medium_line_plain

0x09ad,	// (0x0003c626) list_medium_line_plain_t2

0x09ad,	// (0x0003c626) list_medium_line_plain_t3

0x09ad,	// (0x0003c626) list_medium_line_right_icon

0x09ad,	// (0x0003c626) list_medium_line_right_iconx2

0x09ad,	// (0x0003c626) list_medium_line_t2

0x09ad,	// (0x0003c626) list_medium_line_t2_g2

0x09ad,	// (0x0003c626) list_medium_line_t2_g3

0x09ad,	// (0x0003c626) list_medium_line_t2_right_icon

0x09ad,	// (0x0003c626) list_medium_line_t2_right_iconx2

0x09ad,	// (0x0003c626) list_medium_line_t3

0x09ad,	// (0x0003c626) list_medium_line_t3_g2

0x09ad,	// (0x0003c626) list_medium_line_t3_g3

0x09ad,	// (0x0003c626) list_medium_line_t3_right_iconx2

0x09ad,	// (0x0003c626) list_medium_line_t4_g4

0x09ad,	// (0x0003c626) list_medium_line_x2

0x09ad,	// (0x0003c626) list_medium_line_x2_t2_g2

0x09ad,	// (0x0003c626) list_medium_line_x2_t2_g3

0x09ad,	// (0x0003c626) list_medium_line_x2_t2_g4

0x09ad,	// (0x0003c626) list_medium_line_x2_t3

0x09ad,	// (0x0003c626) list_medium_line_x2_t3_g2

0x09ad,	// (0x0003c626) list_medium_line_x2_t3_g3

0x09ad,	// (0x0003c626) list_medium_line_x2_t3_g4

0x09ad,	// (0x0003c626) list_medium_line_x2_t4_g2

0x09ad,	// (0x0003c626) list_medium_line_x2_t4_g4

0x09ad,	// (0x0003c626) list_medium_line_x3

0x09ad,	// (0x0003c626) list_medium_line_x3_t4

0x09ad,	// (0x0003c626) list_medium_line_x3_t4_g4

0x09ad,	// (0x0003c626) list_medium_line_x4_t4

0x09ad,	// (0x0003c626) list_medium_line_x4_t4_g7

0x09ad,	// (0x0003c626) list_medium_line_x4_t5

0x34d6,	// (0x0003f14f) list_single_fs_dyc_pane_ParamLimits

0x34d6,	// (0x0003f14f) list_single_fs_dyc_pane

0x10ae,	// (0x0003cd27) list_medium_line_x4_t4_g7_g1_ParamLimits

0x10ae,	// (0x0003cd27) list_medium_line_x4_t4_g7_g1

0x10ae,	// (0x0003cd27) list_medium_line_x4_t4_g7_g2_ParamLimits

0x10ae,	// (0x0003cd27) list_medium_line_x4_t4_g7_g2

0x10ae,	// (0x0003cd27) list_medium_line_x4_t4_g7_g3_ParamLimits

0x10ae,	// (0x0003cd27) list_medium_line_x4_t4_g7_g3

0x10ae,	// (0x0003cd27) list_medium_line_x4_t4_g7_g4_ParamLimits

0x10ae,	// (0x0003cd27) list_medium_line_x4_t4_g7_g4

0x10ae,	// (0x0003cd27) list_medium_line_x4_t4_g7_g5_ParamLimits

0x10ae,	// (0x0003cd27) list_medium_line_x4_t4_g7_g5

0x10ae,	// (0x0003cd27) list_medium_line_x4_t4_g7_g6_ParamLimits

0x10ae,	// (0x0003cd27) list_medium_line_x4_t4_g7_g6

0x10bc,	// (0x0003cd35) list_medium_line_x4_t4_g7_g7_ParamLimits

0x10bc,	// (0x0003cd35) list_medium_line_x4_t4_g7_g7

0x0006,

0xfb60,	// (0x0004b7d9) list_medium_line_x4_t4_g7_g_ParamLimits

0xfb60,	// (0x0004b7d9) list_medium_line_x4_t4_g7_g

0x1322,	// (0x0003cf9b) list_medium_line_x4_t4_g7_t1_ParamLimits

0x1322,	// (0x0003cf9b) list_medium_line_x4_t4_g7_t1

0x1322,	// (0x0003cf9b) list_medium_line_x4_t4_g7_t2_ParamLimits

0x1322,	// (0x0003cf9b) list_medium_line_x4_t4_g7_t2

0x1322,	// (0x0003cf9b) list_medium_line_x4_t4_g7_t3_ParamLimits

0x1322,	// (0x0003cf9b) list_medium_line_x4_t4_g7_t3

0x12da,	// (0x0003cf53) list_medium_line_x4_t4_g7_t4_ParamLimits

0x12da,	// (0x0003cf53) list_medium_line_x4_t4_g7_t4

0x12da,	// (0x0003cf53) list_medium_line_x4_t4_g7_t5_ParamLimits

0x12da,	// (0x0003cf53) list_medium_line_x4_t4_g7_t5

0x0004,

0xfb6f,	// (0x0004b7e8) list_medium_line_x4_t4_g7_t_ParamLimits

0xfb6f,	// (0x0004b7e8) list_medium_line_x4_t4_g7_t

0x3516,	// (0x0003f18f) list_single_dyc_row_pane_ParamLimits

0x3516,	// (0x0003f18f) list_single_dyc_row_pane

0xabf5,	// (0x0004686e) call5_gesture_pane_ParamLimits

0xabf5,	// (0x0004686e) call5_gesture_pane

0xac4b,	// (0x000468c4) call5_windows_pane_ParamLimits

0xac4b,	// (0x000468c4) call5_windows_pane

0xacb6,	// (0x0004692f) call5_swipe_1_pane_cp_ParamLimits

0xacb6,	// (0x0004692f) call5_swipe_1_pane_cp

0xacc2,	// (0x0004693b) call5_swipe_2_pane_cp_ParamLimits

0xacc2,	// (0x0004693b) call5_swipe_2_pane_cp

0x12d2,	// (0x0003cf4b) call5_image_pane_cp

0xacce,	// (0x00046947) popup_call5_audio_first_window_cp_ParamLimits

0xacce,	// (0x00046947) popup_call5_audio_first_window_cp

0xdfa7,	// (0x00049c20) call5_swipe_1_pane_g1_cp_ParamLimits

0xdfa7,	// (0x00049c20) call5_swipe_1_pane_g1_cp

0xe014,	// (0x00049c8d) call5_swipe_1_pane_g2_cp

0xdfc0,	// (0x00049c39) call5_swipe_1_pane_t1_cp_ParamLimits

0xdfc0,	// (0x00049c39) call5_swipe_1_pane_t1_cp

0xdfa7,	// (0x00049c20) call5_swipe_2_pane_g1_cp_ParamLimits

0xdfa7,	// (0x00049c20) call5_swipe_2_pane_g1_cp

0xe01c,	// (0x00049c95) call5_swipe_2_pane_g2_cp

0xe024,	// (0x00049c9d) call5_swipe_2_pane_t1_cp_ParamLimits

0xe024,	// (0x00049c9d) call5_swipe_2_pane_t1_cp

0x1055,	// (0x0003ccce) main_sp_fs_email_pane

0xe039,	// (0x00049cb2) main_sp_fs_listscroll_pane_te

0xacdc,	// (0x00046955) popup_sp_fs_action_menu_pane_ParamLimits

0xacdc,	// (0x00046955) popup_sp_fs_action_menu_pane

0x1308,	// (0x0003cf81) bg_sp_fs_ctrlbar_pane_g1

0xe042,	// (0x00049cbb) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xe04b,	// (0x00049cc4) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0x7177,	// (0x00042df0) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0x1308,	// (0x0003cf81) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfc5d,	// (0x0004b8d6) bg_sp_fs_ctrlbar_ddmenu_pane_g

0x7752,	// (0x000433cb) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0x7752,	// (0x000433cb) bg_sp_fs_ctrlbar_ddmenu_pane

0xe054,	// (0x00049ccd) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xe054,	// (0x00049ccd) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xe060,	// (0x00049cd9) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xe060,	// (0x00049cd9) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfc66,	// (0x0004b8df) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfc66,	// (0x0004b8df) main_sp_fs_ctrlbar_ddmenu_pane_g

0xe06c,	// (0x00049ce5) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xe06c,	// (0x00049ce5) main_sp_fs_ctrlbar_ddmenu_pane_t1

0x1308,	// (0x0003cf81) list_medium_line_t2_right_icon_g1

0x1843,	// (0x0003d4bc) list_medium_line_t2_right_icon_t1

0x1843,	// (0x0003d4bc) list_medium_line_t2_right_icon_t2

0x0001,

0xfc6b,	// (0x0004b8e4) list_medium_line_t2_right_icon_t

0x22ff,	// (0x0003df78) bg_sp_fs_ctrlbar_pane_ParamLimits

0x22ff,	// (0x0003df78) bg_sp_fs_ctrlbar_pane

0xad66,	// (0x000469df) main_sp_fs_ctrlbar_button_pane_cp01

0xad70,	// (0x000469e9) main_sp_fs_ctrlbar_ddmenu_pane

0xe0be,	// (0x00049d37) main_sp_fs_ctrlbar_pane_g1

0xe0ca,	// (0x00049d43) main_sp_fs_ctrlbar_pane_g2

0x0003,

0xfc70,	// (0x0004b8e9) main_sp_fs_ctrlbar_pane_g

0xadae,	// (0x00046a27) main_sp_fs_ctrlbar_pane_t1

0xaded,	// (0x00046a66) main_sp_fs_ctrlbar_pane

0xae11,	// (0x00046a8a) main_sp_fs_listscroll_pane_te_cp01

0x35ad,	// (0x0003f226) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x35ad,	// (0x0003f226) popup_sp_fs_action_menu_pane_cp01

0x1055,	// (0x0003ccce) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0x1055,	// (0x0003ccce) bg_sp_fs_highlight_list_pane_cp01

0xe0f1,	// (0x00049d6a) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0xe0f1,	// (0x00049d6a) sp_fs_action_menu_list_gene_pane_g1

0xe100,	// (0x00049d79) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xe100,	// (0x00049d79) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfc7e,	// (0x0004b8f7) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfc7e,	// (0x0004b8f7) sp_fs_action_menu_list_gene_pane_g

0xe10d,	// (0x00049d86) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0xe10d,	// (0x00049d86) sp_fs_action_menu_list_gene_pane_t1

0xe125,	// (0x00049d9e) sp_fs_action_menu_list_gene_pane_ParamLimits

0xe125,	// (0x00049d9e) sp_fs_action_menu_list_gene_pane

0xe144,	// (0x00049dbd) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xe144,	// (0x00049dbd) popup_sp_fs_action_menu_bg_pane

0xe152,	// (0x00049dcb) sp_fs_action_menu_list_pane_ParamLimits

0xe152,	// (0x00049dcb) sp_fs_action_menu_list_pane

0x35d2,	// (0x0003f24b) sp_fs_scroll_pane_cp01_ParamLimits

0x35d2,	// (0x0003f24b) sp_fs_scroll_pane_cp01

0x1843,	// (0x0003d4bc) list_medium_line_plain_t2_t1

0x1843,	// (0x0003d4bc) list_medium_line_plain_t2_t2

0x0001,

0xfc6b,	// (0x0004b8e4) list_medium_line_plain_t2_t

0x1843,	// (0x0003d4bc) list_medium_line_plain_t3_t1

0x1843,	// (0x0003d4bc) list_medium_line_plain_t3_t2

0x1843,	// (0x0003d4bc) list_medium_line_plain_t3_t3

0x0002,

0xf2bc,	// (0x0004af35) list_medium_line_plain_t3_t

0x10ae,	// (0x0003cd27) list_medium_line_x2_t2_g2_g1_ParamLimits

0x10ae,	// (0x0003cd27) list_medium_line_x2_t2_g2_g1

0x10ae,	// (0x0003cd27) list_medium_line_x2_t2_g2_g2_ParamLimits

0x10ae,	// (0x0003cd27) list_medium_line_x2_t2_g2_g2

0x0001,

0xf201,	// (0x0004ae7a) list_medium_line_x2_t2_g2_g_ParamLimits

0xf201,	// (0x0004ae7a) list_medium_line_x2_t2_g2_g

0x1322,	// (0x0003cf9b) list_medium_line_x2_t2_g2_t1_ParamLimits

0x1322,	// (0x0003cf9b) list_medium_line_x2_t2_g2_t1

0x1322,	// (0x0003cf9b) list_medium_line_x2_t2_g2_t2_ParamLimits

0x1322,	// (0x0003cf9b) list_medium_line_x2_t2_g2_t2

0x0001,

0xf1d6,	// (0x0004ae4f) list_medium_line_x2_t2_g2_t_ParamLimits

0xf1d6,	// (0x0004ae4f) list_medium_line_x2_t2_g2_t

0x10ae,	// (0x0003cd27) list_medium_line_x2_t4_g2_g1_ParamLimits

0x10ae,	// (0x0003cd27) list_medium_line_x2_t4_g2_g1

0x10ae,	// (0x0003cd27) list_medium_line_x2_t4_g2_g2_ParamLimits

0x10ae,	// (0x0003cd27) list_medium_line_x2_t4_g2_g2

0x0001,

0xf201,	// (0x0004ae7a) list_medium_line_x2_t4_g2_g_ParamLimits

0xf201,	// (0x0004ae7a) list_medium_line_x2_t4_g2_g

0x1322,	// (0x0003cf9b) list_medium_line_x2_t4_g2_t1_ParamLimits

0x1322,	// (0x0003cf9b) list_medium_line_x2_t4_g2_t1

0x1322,	// (0x0003cf9b) list_medium_line_x2_t4_g2_t2_ParamLimits

0x1322,	// (0x0003cf9b) list_medium_line_x2_t4_g2_t2

0x1322,	// (0x0003cf9b) list_medium_line_x2_t4_g2_t3_ParamLimits

0x1322,	// (0x0003cf9b) list_medium_line_x2_t4_g2_t3

0x1322,	// (0x0003cf9b) list_medium_line_x2_t4_g2_t4_ParamLimits

0x1322,	// (0x0003cf9b) list_medium_line_x2_t4_g2_t4

0x0003,

0xf20f,	// (0x0004ae88) list_medium_line_x2_t4_g2_t_ParamLimits

0xf20f,	// (0x0004ae88) list_medium_line_x2_t4_g2_t

0x1308,	// (0x0003cf81) list_medium_line_t3_right_iconx2_g1

0x1308,	// (0x0003cf81) list_medium_line_t3_right_iconx2_g2

0x1308,	// (0x0003cf81) list_medium_line_t3_right_iconx2_g3

0x0002,

0xf3dd,	// (0x0004b056) list_medium_line_t3_right_iconx2_g

0x1843,	// (0x0003d4bc) list_medium_line_t3_right_iconx2_t1

0x1843,	// (0x0003d4bc) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfc6b,	// (0x0004b8e4) list_medium_line_t3_right_iconx2_t

0x10ae,	// (0x0003cd27) list_medium_line_x3_t4_g4_g1_ParamLimits

0x10ae,	// (0x0003cd27) list_medium_line_x3_t4_g4_g1

0x10ae,	// (0x0003cd27) list_medium_line_x3_t4_g4_g2_ParamLimits

0x10ae,	// (0x0003cd27) list_medium_line_x3_t4_g4_g2

0x10ae,	// (0x0003cd27) list_medium_line_x3_t4_g4_g3_ParamLimits

0x10ae,	// (0x0003cd27) list_medium_line_x3_t4_g4_g3

0x10ae,	// (0x0003cd27) list_medium_line_x3_t4_g4_g4_ParamLimits

0x10ae,	// (0x0003cd27) list_medium_line_x3_t4_g4_g4

0x0003,

0xf206,	// (0x0004ae7f) list_medium_line_x3_t4_g4_g_ParamLimits

0xf206,	// (0x0004ae7f) list_medium_line_x3_t4_g4_g

0x1322,	// (0x0003cf9b) list_medium_line_x3_t4_g4_t1_ParamLimits

0x1322,	// (0x0003cf9b) list_medium_line_x3_t4_g4_t1

0x1322,	// (0x0003cf9b) list_medium_line_x3_t4_g4_t2_ParamLimits

0x1322,	// (0x0003cf9b) list_medium_line_x3_t4_g4_t2

0x1322,	// (0x0003cf9b) list_medium_line_x3_t4_g4_t3_ParamLimits

0x1322,	// (0x0003cf9b) list_medium_line_x3_t4_g4_t3

0x1322,	// (0x0003cf9b) list_medium_line_x3_t4_g4_t4_ParamLimits

0x1322,	// (0x0003cf9b) list_medium_line_x3_t4_g4_t4

0x0003,

0xf20f,	// (0x0004ae88) list_medium_line_x3_t4_g4_t_ParamLimits

0xf20f,	// (0x0004ae88) list_medium_line_x3_t4_g4_t

0x35f8,	// (0x0003f271) list_single_dyc_row_text_pane_t1_ParamLimits

0x35f8,	// (0x0003f271) list_single_dyc_row_text_pane_t1

0x3641,	// (0x0003f2ba) list_single_dyc_row_text_pane_t2_ParamLimits

0x3641,	// (0x0003f2ba) list_single_dyc_row_text_pane_t2

0xe172,	// (0x00049deb) list_single_dyc_row_text_pane_t3_ParamLimits

0xe172,	// (0x00049deb) list_single_dyc_row_text_pane_t3

0x0005,

0xfc83,	// (0x0004b8fc) list_single_dyc_row_text_pane_t_ParamLimits

0xfc83,	// (0x0004b8fc) list_single_dyc_row_text_pane_t

0xe196,	// (0x00049e0f) list_single_dyc_row_pane_g1_ParamLimits

0xe196,	// (0x00049e0f) list_single_dyc_row_pane_g1

0xe1a2,	// (0x00049e1b) list_single_dyc_row_pane_g2_ParamLimits

0xe1a2,	// (0x00049e1b) list_single_dyc_row_pane_g2

0xe1ae,	// (0x00049e27) list_single_dyc_row_pane_g3_ParamLimits

0xe1ae,	// (0x00049e27) list_single_dyc_row_pane_g3

0xe1ba,	// (0x00049e33) list_single_dyc_row_pane_g4_ParamLimits

0xe1ba,	// (0x00049e33) list_single_dyc_row_pane_g4

0x0003,

0xfc90,	// (0x0004b909) list_single_dyc_row_pane_g_ParamLimits

0xfc90,	// (0x0004b909) list_single_dyc_row_pane_g

0xe1c6,	// (0x00049e3f) list_single_dyc_row_text_pane_ParamLimits

0xe1c6,	// (0x00049e3f) list_single_dyc_row_text_pane

0x09ad,	// (0x0003c626) bg_sp_fs_scroll_pane

0xe1e5,	// (0x00049e5e) thumb_sp_fs_scroll_pane

0x10ae,	// (0x0003cd27) list_medium_line_g1_ParamLimits

0x10ae,	// (0x0003cd27) list_medium_line_g1

0x1322,	// (0x0003cf9b) list_medium_line_t1_ParamLimits

0x1322,	// (0x0003cf9b) list_medium_line_t1

0x10ae,	// (0x0003cd27) list_medium_line_x2_g1_ParamLimits

0x10ae,	// (0x0003cd27) list_medium_line_x2_g1

0x10ae,	// (0x0003cd27) list_medium_line_x2_g2_ParamLimits

0x10ae,	// (0x0003cd27) list_medium_line_x2_g2

0x0001,

0xf201,	// (0x0004ae7a) list_medium_line_x2_g_ParamLimits

0xf201,	// (0x0004ae7a) list_medium_line_x2_g

0x1322,	// (0x0003cf9b) list_medium_line_x2_t1_ParamLimits

0x1322,	// (0x0003cf9b) list_medium_line_x2_t1

0x10ae,	// (0x0003cd27) list_medium_line_x3_g1_ParamLimits

0x10ae,	// (0x0003cd27) list_medium_line_x3_g1

0xe1ee,	// (0x00049e67) list_medium_line_x3_g2_ParamLimits

0xe1ee,	// (0x00049e67) list_medium_line_x3_g2

0x0001,

0xfc99,	// (0x0004b912) list_medium_line_x3_g_ParamLimits

0xfc99,	// (0x0004b912) list_medium_line_x3_g

0xe1fc,	// (0x00049e75) list_medium_line_x3_t1_ParamLimits

0xe1fc,	// (0x00049e75) list_medium_line_x3_t1

0xe210,	// (0x00049e89) thumb_sp_fs_scroll_pane_g1

0xe219,	// (0x00049e92) thumb_sp_fs_scroll_pane_g2

0xe222,	// (0x00049e9b) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfc9e,	// (0x0004b917) thumb_sp_fs_scroll_pane_g

0xe210,	// (0x00049e89) bg_sp_fs_scroll_pane_g1

0xe219,	// (0x00049e92) bg_sp_fs_scroll_pane_g2

0xe222,	// (0x00049e9b) bg_sp_fs_scroll_pane_g3

0x0002,

0xfc9e,	// (0x0004b917) bg_sp_fs_scroll_pane_g

0x10ae,	// (0x0003cd27) list_medium_line_x2_t3_g4_g1_ParamLimits

0x10ae,	// (0x0003cd27) list_medium_line_x2_t3_g4_g1

0x10ae,	// (0x0003cd27) list_medium_line_x2_t3_g4_g2_ParamLimits

0x10ae,	// (0x0003cd27) list_medium_line_x2_t3_g4_g2

0x10ae,	// (0x0003cd27) list_medium_line_x2_t3_g4_g3_ParamLimits

0x10ae,	// (0x0003cd27) list_medium_line_x2_t3_g4_g3

0x10ae,	// (0x0003cd27) list_medium_line_x2_t3_g4_g4_ParamLimits

0x10ae,	// (0x0003cd27) list_medium_line_x2_t3_g4_g4

0x0003,

0xf206,	// (0x0004ae7f) list_medium_line_x2_t3_g4_g_ParamLimits

0xf206,	// (0x0004ae7f) list_medium_line_x2_t3_g4_g

0x1322,	// (0x0003cf9b) list_medium_line_x2_t3_g4_t1_ParamLimits

0x1322,	// (0x0003cf9b) list_medium_line_x2_t3_g4_t1

0x1322,	// (0x0003cf9b) list_medium_line_x2_t3_g4_t2_ParamLimits

0x1322,	// (0x0003cf9b) list_medium_line_x2_t3_g4_t2

0x1322,	// (0x0003cf9b) list_medium_line_x2_t3_g4_t3_ParamLimits

0x1322,	// (0x0003cf9b) list_medium_line_x2_t3_g4_t3

0x0002,

0xf1fa,	// (0x0004ae73) list_medium_line_x2_t3_g4_t_ParamLimits

0xf1fa,	// (0x0004ae73) list_medium_line_x2_t3_g4_t

0x10ae,	// (0x0003cd27) list_medium_line_g2_g1_ParamLimits

0x10ae,	// (0x0003cd27) list_medium_line_g2_g1

0x10ae,	// (0x0003cd27) list_medium_line_g2_g2_ParamLimits

0x10ae,	// (0x0003cd27) list_medium_line_g2_g2

0x0001,

0xf201,	// (0x0004ae7a) list_medium_line_g2_g_ParamLimits

0xf201,	// (0x0004ae7a) list_medium_line_g2_g

0x1322,	// (0x0003cf9b) list_medium_line_g2_t1_ParamLimits

0x1322,	// (0x0003cf9b) list_medium_line_g2_t1

0x10ae,	// (0x0003cd27) list_medium_line_t3_g2_g1_ParamLimits

0x10ae,	// (0x0003cd27) list_medium_line_t3_g2_g1

0x10ae,	// (0x0003cd27) list_medium_line_t3_g2_g2_ParamLimits

0x10ae,	// (0x0003cd27) list_medium_line_t3_g2_g2

0x0001,

0xf201,	// (0x0004ae7a) list_medium_line_t3_g2_g_ParamLimits

0xf201,	// (0x0004ae7a) list_medium_line_t3_g2_g

0x1322,	// (0x0003cf9b) list_medium_line_t3_g2_t1_ParamLimits

0x1322,	// (0x0003cf9b) list_medium_line_t3_g2_t1

0x1322,	// (0x0003cf9b) list_medium_line_t3_g2_t2_ParamLimits

0x1322,	// (0x0003cf9b) list_medium_line_t3_g2_t2

0x1322,	// (0x0003cf9b) list_medium_line_t3_g2_t3_ParamLimits

0x1322,	// (0x0003cf9b) list_medium_line_t3_g2_t3

0x0002,

0xf1fa,	// (0x0004ae73) list_medium_line_t3_g2_t_ParamLimits

0xf1fa,	// (0x0004ae73) list_medium_line_t3_g2_t

0x1308,	// (0x0003cf81) list_medium_line_right_icon_g1

0x1843,	// (0x0003d4bc) list_medium_line_right_icon_t1

0x10ae,	// (0x0003cd27) list_medium_line_t2_g1_ParamLimits

0x10ae,	// (0x0003cd27) list_medium_line_t2_g1

0x1322,	// (0x0003cf9b) list_medium_line_t2_t1_ParamLimits

0x1322,	// (0x0003cf9b) list_medium_line_t2_t1

0x1322,	// (0x0003cf9b) list_medium_line_t2_t2_ParamLimits

0x1322,	// (0x0003cf9b) list_medium_line_t2_t2

0x0001,

0xf1d6,	// (0x0004ae4f) list_medium_line_t2_t_ParamLimits

0xf1d6,	// (0x0004ae4f) list_medium_line_t2_t

0x10ae,	// (0x0003cd27) list_medium_line_t3_g1_ParamLimits

0x10ae,	// (0x0003cd27) list_medium_line_t3_g1

0x1322,	// (0x0003cf9b) list_medium_line_t3_t1_ParamLimits

0x1322,	// (0x0003cf9b) list_medium_line_t3_t1

0x1322,	// (0x0003cf9b) list_medium_line_t3_t2_ParamLimits

0x1322,	// (0x0003cf9b) list_medium_line_t3_t2

0x1322,	// (0x0003cf9b) list_medium_line_t3_t3_ParamLimits

0x1322,	// (0x0003cf9b) list_medium_line_t3_t3

0x0002,

0xf1fa,	// (0x0004ae73) list_medium_line_t3_t_ParamLimits

0xf1fa,	// (0x0004ae73) list_medium_line_t3_t

0x10ae,	// (0x0003cd27) list_medium_line_g3_g1_ParamLimits

0x10ae,	// (0x0003cd27) list_medium_line_g3_g1

0x10ae,	// (0x0003cd27) list_medium_line_g3_g2_ParamLimits

0x10ae,	// (0x0003cd27) list_medium_line_g3_g2

0x10ae,	// (0x0003cd27) list_medium_line_g3_g3_ParamLimits

0x10ae,	// (0x0003cd27) list_medium_line_g3_g3

0x0002,

0xf1f3,	// (0x0004ae6c) list_medium_line_g3_g_ParamLimits

0xf1f3,	// (0x0004ae6c) list_medium_line_g3_g

0x1322,	// (0x0003cf9b) list_medium_line_g3_t1_ParamLimits

0x1322,	// (0x0003cf9b) list_medium_line_g3_t1

0x10ae,	// (0x0003cd27) list_medium_line_t2_g3_g1_ParamLimits

0x10ae,	// (0x0003cd27) list_medium_line_t2_g3_g1

0x10ae,	// (0x0003cd27) list_medium_line_t2_g3_g2_ParamLimits

0x10ae,	// (0x0003cd27) list_medium_line_t2_g3_g2

0x10ae,	// (0x0003cd27) list_medium_line_t2_g3_g3_ParamLimits

0x10ae,	// (0x0003cd27) list_medium_line_t2_g3_g3

0x0002,

0xf1f3,	// (0x0004ae6c) list_medium_line_t2_g3_g_ParamLimits

0xf1f3,	// (0x0004ae6c) list_medium_line_t2_g3_g

0x1322,	// (0x0003cf9b) list_medium_line_t2_g3_t1_ParamLimits

0x1322,	// (0x0003cf9b) list_medium_line_t2_g3_t1

0x1322,	// (0x0003cf9b) list_medium_line_t2_g3_t2_ParamLimits

0x1322,	// (0x0003cf9b) list_medium_line_t2_g3_t2

0x0001,

0xf1d6,	// (0x0004ae4f) list_medium_line_t2_g3_t_ParamLimits

0xf1d6,	// (0x0004ae4f) list_medium_line_t2_g3_t

0x10ae,	// (0x0003cd27) list_medium_line_t3_g3_g1_ParamLimits

0x10ae,	// (0x0003cd27) list_medium_line_t3_g3_g1

0x10ae,	// (0x0003cd27) list_medium_line_t3_g3_g2_ParamLimits

0x10ae,	// (0x0003cd27) list_medium_line_t3_g3_g2

0x10ae,	// (0x0003cd27) list_medium_line_t3_g3_g3_ParamLimits

0x10ae,	// (0x0003cd27) list_medium_line_t3_g3_g3

0x0002,

0xf1f3,	// (0x0004ae6c) list_medium_line_t3_g3_g_ParamLimits

0xf1f3,	// (0x0004ae6c) list_medium_line_t3_g3_g

0x1322,	// (0x0003cf9b) list_medium_line_t3_g3_t1_ParamLimits

0x1322,	// (0x0003cf9b) list_medium_line_t3_g3_t1

0x1322,	// (0x0003cf9b) list_medium_line_t3_g3_t2_ParamLimits

0x1322,	// (0x0003cf9b) list_medium_line_t3_g3_t2

0x1322,	// (0x0003cf9b) list_medium_line_t3_g3_t3_ParamLimits

0x1322,	// (0x0003cf9b) list_medium_line_t3_g3_t3

0x0002,

0xf1fa,	// (0x0004ae73) list_medium_line_t3_g3_t_ParamLimits

0xf1fa,	// (0x0004ae73) list_medium_line_t3_g3_t

0x1308,	// (0x0003cf81) list_medium_line_right_iconx2_g1

0x1308,	// (0x0003cf81) list_medium_line_right_iconx2_g2

0x0001,

0xf3d8,	// (0x0004b051) list_medium_line_right_iconx2_g

0x1843,	// (0x0003d4bc) list_medium_line_right_iconx2_t1

0x1308,	// (0x0003cf81) list_medium_line_t2_right_iconx2_g1

0x1308,	// (0x0003cf81) list_medium_line_t2_right_iconx2_g2

0x0001,

0xf3d8,	// (0x0004b051) list_medium_line_t2_right_iconx2_g

0x1843,	// (0x0003d4bc) list_medium_line_t2_right_iconx2_t1

0x1843,	// (0x0003d4bc) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfc6b,	// (0x0004b8e4) list_medium_line_t2_right_iconx2_t

0x1843,	// (0x0003d4bc) list_medium_line_x4_t4_t1

0x1843,	// (0x0003d4bc) list_medium_line_x4_t4_t2

0x1843,	// (0x0003d4bc) list_medium_line_x4_t4_t3

0x1843,	// (0x0003d4bc) list_medium_line_x4_t4_t4

0x0003,

0xf2c3,	// (0x0004af3c) list_medium_line_x4_t4_t

0xae74,	// (0x00046aed) tport_appsw_pane_ParamLimits

0xae74,	// (0x00046aed) tport_appsw_pane

0xae8c,	// (0x00046b05) tport_contact_pane_ParamLimits

0xae8c,	// (0x00046b05) tport_contact_pane

0xaea4,	// (0x00046b1d) tport_listscroll_pane_ParamLimits

0xaea4,	// (0x00046b1d) tport_listscroll_pane

0xaebe,	// (0x00046b37) cell_tport_appsw_pane_ParamLimits

0xaebe,	// (0x00046b37) cell_tport_appsw_pane

0x230d,	// (0x0003df86) tport_appsw_pane_g1_ParamLimits

0x230d,	// (0x0003df86) tport_appsw_pane_g1

0xe22b,	// (0x00049ea4) tport_contact_pane_g1

0xe234,	// (0x00049ead) tport_contact_pane_t1

0xe242,	// (0x00049ebb) tport_contact_pane_t2

0x0001,

0xfca5,	// (0x0004b91e) tport_contact_pane_t

0xe250,	// (0x00049ec9) list_tport_pane

0xe259,	// (0x00049ed2) scroll_pane_cp_030

0xaf06,	// (0x00046b7f) cell_tport_appsw_pane_g1

0xaf16,	// (0x00046b8f) cell_tport_appsw_pane_t1

0xaf24,	// (0x00046b9d) grid_highlight_pane_cp019

0xaf2c,	// (0x00046ba5) list_tport_double_graphic_pane_ParamLimits

0xaf2c,	// (0x00046ba5) list_tport_double_graphic_pane

0x1055,	// (0x0003ccce) list_highlight_pane_cp023_ParamLimits

0x1055,	// (0x0003ccce) list_highlight_pane_cp023

0xaf39,	// (0x00046bb2) list_tport_double_graphic_pane_g1_ParamLimits

0xaf39,	// (0x00046bb2) list_tport_double_graphic_pane_g1

0xaf46,	// (0x00046bbf) list_tport_double_graphic_pane_t1_ParamLimits

0xaf46,	// (0x00046bbf) list_tport_double_graphic_pane_t1

0xaf5b,	// (0x00046bd4) list_tport_double_graphic_pane_t2_ParamLimits

0xaf5b,	// (0x00046bd4) list_tport_double_graphic_pane_t2

0x0001,

0xfcb1,	// (0x0004b92a) list_tport_double_graphic_pane_t_ParamLimits

0xfcb1,	// (0x0004b92a) list_tport_double_graphic_pane_t

0x09ad,	// (0x0003c626) main_cale_note_pane

0x91ae,	// (0x00044e27) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x91ae,	// (0x00044e27) cell_vitu2_function_top_wide_pane_cp01

0xa8fe,	// (0x00046577) wait_bar_pane_cp05_ParamLimits

0x1055,	// (0x0003ccce) listscroll_cmail_pane

0xe262,	// (0x00049edb) list_cmail_pane

0xaf6d,	// (0x00046be6) list_cmail_body_pane

0xaf83,	// (0x00046bfc) list_single_cmail_header_caption_pane

0xaf9a,	// (0x00046c13) list_single_cmail_header_detail_pane_ParamLimits

0xaf9a,	// (0x00046c13) list_single_cmail_header_detail_pane

0xe272,	// (0x00049eeb) list_single_cmail_header_caption_pane_t1

0x3776,	// (0x0003f3ef) list_single_cmail_header_detail_pane_g1_ParamLimits

0x3776,	// (0x0003f3ef) list_single_cmail_header_detail_pane_g1

0xe289,	// (0x00049f02) list_single_cmail_header_detail_pane_g2_ParamLimits

0xe289,	// (0x00049f02) list_single_cmail_header_detail_pane_g2

0x0002,

0xfcb6,	// (0x0004b92f) list_single_cmail_header_detail_pane_g_ParamLimits

0xfcb6,	// (0x0004b92f) list_single_cmail_header_detail_pane_g

0xe2a2,	// (0x00049f1b) list_single_cmail_header_detail_pane_t1_ParamLimits

0xe2a2,	// (0x00049f1b) list_single_cmail_header_detail_pane_t1

0xe302,	// (0x00049f7b) list_single_cmail_header_editor_pane_bg_ParamLimits

0xe302,	// (0x00049f7b) list_single_cmail_header_editor_pane_bg

0xdc55,	// (0x000498ce) list_cmail_body_pane_g1

0xe319,	// (0x00049f92) list_cmail_body_pane_t1

0xcf67,	// (0x00048be0) list_single_cmail_header_editor_pane_bg_g1

0x152d,	// (0x0003d1a6) list_single_cmail_header_editor_pane_bg_g1_copy1

0xcf77,	// (0x00048bf0) list_single_cmail_header_editor_pane_bg_g1_copy2

0xcf6f,	// (0x00048be8) list_single_cmail_header_editor_pane_bg_g1_copy3

0xd1bf,	// (0x00048e38) list_single_cmail_header_editor_pane_bg_g1_copy4

0xcf97,	// (0x00048c10) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xcf87,	// (0x00048c00) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xcf8f,	// (0x00048c08) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0x150d,	// (0x0003d186) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0xafc4,	// (0x00046c3d) calenote_gesture_pane_ParamLimits

0xafc4,	// (0x00046c3d) calenote_gesture_pane

0xafe4,	// (0x00046c5d) calenote_window_pane_ParamLimits

0xafe4,	// (0x00046c5d) calenote_window_pane

0xe327,	// (0x00049fa0) popup_note_window_cp01

0xb000,	// (0x00046c79) calenote_swipe_1_pane_ParamLimits

0xb000,	// (0x00046c79) calenote_swipe_1_pane

0xacc2,	// (0x0004693b) calenote_swipe_2_pane_ParamLimits

0xacc2,	// (0x0004693b) calenote_swipe_2_pane

0xdfa7,	// (0x00049c20) calenote_swipe_1_pane_g1_ParamLimits

0xdfa7,	// (0x00049c20) calenote_swipe_1_pane_g1

0xdfb4,	// (0x00049c2d) calenote_swipe_1_pane_g2_ParamLimits

0xdfb4,	// (0x00049c2d) calenote_swipe_1_pane_g2

0x0001,

0xfc53,	// (0x0004b8cc) calenote_swipe_1_pane_g_ParamLimits

0xfc53,	// (0x0004b8cc) calenote_swipe_1_pane_g

0xe339,	// (0x00049fb2) calenote_swipe_1_pane_t1_ParamLimits

0xe339,	// (0x00049fb2) calenote_swipe_1_pane_t1

0xdfa7,	// (0x00049c20) calenote_swipe_2_pane_g1_ParamLimits

0xdfa7,	// (0x00049c20) calenote_swipe_2_pane_g1

0xe358,	// (0x00049fd1) calenote_swipe_2_pane_g2_ParamLimits

0xe358,	// (0x00049fd1) calenote_swipe_2_pane_g2

0x0001,

0xfcc2,	// (0x0004b93b) calenote_swipe_2_pane_g_ParamLimits

0xfcc2,	// (0x0004b93b) calenote_swipe_2_pane_g

0xe364,	// (0x00049fdd) calenote_swipe_2_pane_t1_ParamLimits

0xe364,	// (0x00049fdd) calenote_swipe_2_pane_t1

0x09ad,	// (0x0003c626) main_mup_navstr_pane

0x8071,	// (0x00043cea) main_mup3_pane_t7_ParamLimits

0x8071,	// (0x00043cea) main_mup3_pane_t7

0xeca0,	// (0x0004a919) main_mp4_pane_g6_ParamLimits

0xeca0,	// (0x0004a919) main_mp4_pane_g6

0xee62,	// (0x0004aadb) main_image3_pane_t4_ParamLimits

0xee62,	// (0x0004aadb) main_image3_pane_t4

0xb015,	// (0x00046c8e) popup_navstr_preview_pane_ParamLimits

0xb015,	// (0x00046c8e) popup_navstr_preview_pane

0xb029,	// (0x00046ca2) scroll_navstr_pane_ParamLimits

0xb029,	// (0x00046ca2) scroll_navstr_pane

0x09ad,	// (0x0003c626) bg_popup_preview_window_pane_cp04

0xe38b,	// (0x0004a004) popup_navstr_preview_pane_t1

0xb03d,	// (0x00046cb6) scroll_navstr_pane_g1_ParamLimits

0xb03d,	// (0x00046cb6) scroll_navstr_pane_g1

0xb051,	// (0x00046cca) scroll_navstr_pane_t1_ParamLimits

0xb051,	// (0x00046cca) scroll_navstr_pane_t1

0xe330,	// (0x00049fa9) bg_button_pane_cp014

0xe330,	// (0x00049fa9) bg_button_pane_cp030

0x3553,	// (0x0003f1cc) list_double_fisheye_pane_g4_ParamLimits

0x3553,	// (0x0003f1cc) list_double_fisheye_pane_g4

0x355f,	// (0x0003f1d8) list_double_fisheye_pane_g5_ParamLimits

0x355f,	// (0x0003f1d8) list_double_fisheye_pane_g5

0x55cb,	// (0x00041244) sp_fs_scroll_pane_cp03

0xe0be,	// (0x00049d37) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xe0ca,	// (0x00049d43) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfc70,	// (0x0004b8e9) main_sp_fs_ctrlbar_pane_g_ParamLimits

0xadae,	// (0x00046a27) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xe26a,	// (0x00049ee3) sp_fs_scroll_pane_cp02

0x121a,	// (0x0003ce93) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0x121a,	// (0x0003ce93) popup_sp_fs_calendar_preview_list_single_pane

0x09ad,	// (0x0003c626) main_cam6_pano_pane

0x1055,	// (0x0003ccce) main_mup3_pane_ParamLimits

0x09ad,	// (0x0003c626) main_phacti_pane

0xa7d1,	// (0x0004644a) bg_button_pane_cp11

0xa7eb,	// (0x00046464) main_mobtv_info_pane_g2_ParamLimits

0xa7eb,	// (0x00046464) main_mobtv_info_pane_g2

0x0001,

0xfbd0,	// (0x0004b849) main_mobtv_info_pane_g_ParamLimits

0xfbd0,	// (0x0004b849) main_mobtv_info_pane_g

0xa9c8,	// (0x00046641) sc_clock_pane_t5_ParamLimits

0xa9c8,	// (0x00046641) sc_clock_pane_t5

0xaa90,	// (0x00046709) main_radioblah_pane_g1_ParamLimits

0xdef3,	// (0x00049b6c) main_radioblah_pane_t3_ParamLimits

0xdef3,	// (0x00049b6c) main_radioblah_pane_t3

0xdf0b,	// (0x00049b84) main_radioblah_pane_t4_ParamLimits

0xdf0b,	// (0x00049b84) main_radioblah_pane_t4

0xaab8,	// (0x00046731) main_radioblah_text_pane_ParamLimits

0xaab8,	// (0x00046731) main_radioblah_text_pane

0xaaca,	// (0x00046743) main_radioblah_info_pane_g1_ParamLimits

0xab63,	// (0x000467dc) main_radioblah_info_pane_t4_ParamLimits

0xab63,	// (0x000467dc) main_radioblah_info_pane_t4

0x1055,	// (0x0003ccce) main_sp_fs_calendar_pane

0xb068,	// (0x00046ce1) main_phacti_pane_g1

0xb070,	// (0x00046ce9) phacti_note_pane_ParamLimits

0xb070,	// (0x00046ce9) phacti_note_pane

0xe3a2,	// (0x0004a01b) phacti_term_pane_ParamLimits

0xe3a2,	// (0x0004a01b) phacti_term_pane

0xe3b7,	// (0x0004a030) phacti_note_pane_t1_ParamLimits

0xe3b7,	// (0x0004a030) phacti_note_pane_t1

0xe3ce,	// (0x0004a047) phacti_term_pane_g1

0xe3d6,	// (0x0004a04f) phacti_term_pane_t1_ParamLimits

0xe3d6,	// (0x0004a04f) phacti_term_pane_t1

0xe400,	// (0x0004a079) popup_sp_fs_calendar_preview_list_single_pane_g1

0xe408,	// (0x0004a081) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfccc,	// (0x0004b945) popup_sp_fs_calendar_preview_list_single_pane_g

0xe410,	// (0x0004a089) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xe410,	// (0x0004a089) popup_sp_fs_calendar_preview_list_single_pane_t1

0xe426,	// (0x0004a09f) aid_popup_sp_fs_bg_corner_pane

0x1308,	// (0x0003cf81) popup_sp_fs_calendar_preview_bg_pane_g1

0x09ad,	// (0x0003c626) popup_sp_fs_calendar_preview_bg_pane

0xe42e,	// (0x0004a0a7) popup_sp_fs_calendar_preview_list_pane

0x22ff,	// (0x0003df78) bg_main_sp_fs_cale_pane_ParamLimits

0x22ff,	// (0x0003df78) bg_main_sp_fs_cale_pane

0xe43f,	// (0x0004a0b8) listscroll_cale_mrui_pane_ParamLimits

0xe43f,	// (0x0004a0b8) listscroll_cale_mrui_pane

0xe454,	// (0x0004a0cd) listscroll_sp_fs_schedule_track_pane

0xe45d,	// (0x0004a0d6) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0xe45d,	// (0x0004a0d6) main_sp_fs_ctrlbar_pane_cp01

0xe470,	// (0x0004a0e9) main_sp_fs_ribbon_pane

0xe478,	// (0x0004a0f1) popup_sp_fs_cale_preview_window

0xb0e5,	// (0x00046d5e) list_single_sp_fs_schedule_track_pane_ParamLimits

0xb0e5,	// (0x00046d5e) list_single_sp_fs_schedule_track_pane

0x1055,	// (0x0003ccce) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0x1055,	// (0x0003ccce) bg_sp_fs_highlight_list_pane_cp03

0xb0f9,	// (0x00046d72) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0xb0f9,	// (0x00046d72) list_single_sp_fs_schedule_track_pane_g1

0xb105,	// (0x00046d7e) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0xb105,	// (0x00046d7e) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfcd1,	// (0x0004b94a) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfcd1,	// (0x0004b94a) list_single_sp_fs_schedule_track_pane_g

0xb111,	// (0x00046d8a) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0xb111,	// (0x00046d8a) list_single_sp_fs_schedule_track_pane_t1

0xb12b,	// (0x00046da4) sp_fs_schedule_track_pane_ParamLimits

0xb12b,	// (0x00046da4) sp_fs_schedule_track_pane

0xe48a,	// (0x0004a103) sp_fs_schedule_track_pane_g1

0xe492,	// (0x0004a10b) sp_fs_schedule_track_pane_g2

0xe49a,	// (0x0004a113) sp_fs_schedule_track_pane_g3

0xe4a2,	// (0x0004a11b) sp_fs_schedule_track_pane_g4

0xe4aa,	// (0x0004a123) sp_fs_schedule_track_pane_g5

0x0004,

0xfcd6,	// (0x0004b94f) sp_fs_schedule_track_pane_g

0xcf67,	// (0x00048be0) bg_sp_fs_schedule_viewer_highlight_g1

0x152d,	// (0x0003d1a6) bg_sp_fs_schedule_viewer_highlight_g2

0xcf6f,	// (0x00048be8) bg_sp_fs_schedule_viewer_highlight_g3

0xcf77,	// (0x00048bf0) bg_sp_fs_schedule_viewer_highlight_g4

0xd1bf,	// (0x00048e38) bg_sp_fs_schedule_viewer_highlight_g5

0xcf87,	// (0x00048c00) bg_sp_fs_schedule_viewer_highlight_g6

0xcf8f,	// (0x00048c08) bg_sp_fs_schedule_viewer_highlight_g7

0xcf97,	// (0x00048c10) bg_sp_fs_schedule_viewer_highlight_g8

0x150d,	// (0x0003d186) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfce1,	// (0x0004b95a) bg_sp_fs_schedule_viewer_highlight_g

0x09ad,	// (0x0003c626) bg_main_sp_fs_ribbon_pane

0xb13c,	// (0x00046db5) main_sp_fs_ribbon_pane_g1

0xe4b2,	// (0x0004a12b) main_sp_fs_ribbon_pane_t1

0xb145,	// (0x00046dbe) main_sp_fs_ribbon_pane_t2

0xe4c1,	// (0x0004a13a) main_sp_fs_ribbon_pane_t3

0x0002,

0xfcf4,	// (0x0004b96d) main_sp_fs_ribbon_pane_t

0xe4d0,	// (0x0004a149) main_sp_fs_ribbon_scheduler_pane

0xe4d8,	// (0x0004a151) bg_main_sp_fs_ribbon_pane_g1

0xe4e1,	// (0x0004a15a) bg_main_sp_fs_ribbon_pane_g2

0xe4ea,	// (0x0004a163) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfcfb,	// (0x0004b974) bg_main_sp_fs_ribbon_pane_g

0xe4f2,	// (0x0004a16b) main_sp_fs_ribbon_scheduler_pane_g1

0xe4fb,	// (0x0004a174) main_sp_fs_ribbon_scheduler_pane_g2

0xe504,	// (0x0004a17d) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfd02,	// (0x0004b97b) main_sp_fs_ribbon_scheduler_pane_g

0xe50d,	// (0x0004a186) list_cale_mrui_pane

0xb154,	// (0x00046dcd) sp_fs_scroll_pane_cp07_ParamLimits

0xb154,	// (0x00046dcd) sp_fs_scroll_pane_cp07

0xb170,	// (0x00046de9) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0xb170,	// (0x00046de9) bg_sp_fs_schedule_viewer_highlight

0xe51a,	// (0x0004a193) list_single_sp_fs_schedule_track_pane_cp01

0xe522,	// (0x0004a19b) list_sp_fs_schedule_track_pane

0xe52a,	// (0x0004a1a3) sp_fs_scroll_pane_cp06_ParamLimits

0xe52a,	// (0x0004a1a3) sp_fs_scroll_pane_cp06

0x1308,	// (0x0003cf81) bgmain_sp_fs_calendar_pane_g1

0x378e,	// (0x0003f407) list_single_cale_mrui_pane_ParamLimits

0x378e,	// (0x0003f407) list_single_cale_mrui_pane

0xe53c,	// (0x0004a1b5) list_single_cale_mrui_row_pane_ParamLimits

0xe53c,	// (0x0004a1b5) list_single_cale_mrui_row_pane

0xe549,	// (0x0004a1c2) list_single_cale_mrui_row_pane_g1_ParamLimits

0xe549,	// (0x0004a1c2) list_single_cale_mrui_row_pane_g1

0xe58e,	// (0x0004a207) list_single_cale_mrui_row_pane_t1_ParamLimits

0xe58e,	// (0x0004a207) list_single_cale_mrui_row_pane_t1

0x37af,	// (0x0003f428) list_single_cale_mrui_row_pane_t2_ParamLimits

0x37af,	// (0x0003f428) list_single_cale_mrui_row_pane_t2

0xe5a0,	// (0x0004a219) list_single_cale_mrui_row_pane_t3_ParamLimits

0xe5a0,	// (0x0004a219) list_single_cale_mrui_row_pane_t3

0xe5cf,	// (0x0004a248) list_single_cale_mrui_row_pane_t4_ParamLimits

0xe5cf,	// (0x0004a248) list_single_cale_mrui_row_pane_t4

0x0003,

0xfd10,	// (0x0004b989) list_single_cale_mrui_row_pane_t_ParamLimits

0xfd10,	// (0x0004b989) list_single_cale_mrui_row_pane_t

0x3817,	// (0x0003f490) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x3817,	// (0x0003f490) list_single_cmail_header_editor_pane_bg_cp01

0x383d,	// (0x0003f4b6) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x383d,	// (0x0003f4b6) list_single_cmail_header_editor_pane_bg_cp02

0xb180,	// (0x00046df9) main_radioblah_text_pane_t1_ParamLimits

0xb180,	// (0x00046df9) main_radioblah_text_pane_t1

0xe5fe,	// (0x0004a277) cam6_indi_pane_cp01

0xe606,	// (0x0004a27f) cam6_mode_pane_cp01

0xe60e,	// (0x0004a287) cam6_pano_pane

0xe617,	// (0x0004a290) cam6_zoom_pane_cp01

0xe61f,	// (0x0004a298) cam6_pano_image_pane

0xe62a,	// (0x0004a2a3) cam6_pano_pane_g1

0xdc55,	// (0x000498ce) cam6_pano_pane_g2

0xe633,	// (0x0004a2ac) cam6_pano_pane_g3

0xe63c,	// (0x0004a2b5) cam6_pano_pane_g4

0xcbab,	// (0x00048824) cam6_pano_pane_g5

0xe645,	// (0x0004a2be) cam6_pano_pane_g6

0xe64f,	// (0x0004a2c8) cam6_pano_pane_g7

0xe657,	// (0x0004a2d0) cam6_pano_pane_g8

0xe660,	// (0x0004a2d9) cam6_pano_pane_g9

0x0008,

0xfd19,	// (0x0004b992) cam6_pano_pane_g

0x09ad,	// (0x0003c626) main_browser_tag_pane

0xe383,	// (0x00049ffc) grid_navstr_albumart_pane

0xe66b,	// (0x0004a2e4) cell_navstr_albumart_pane_ParamLimits

0xe66b,	// (0x0004a2e4) cell_navstr_albumart_pane

0xe68b,	// (0x0004a304) cell_navstr_albumart_pane_g1

0x6d40,	// (0x000429b9) cell_navstr_albumart_pane_g2

0x6d50,	// (0x000429c9) cell_navstr_albumart_pane_g3

0x6d48,	// (0x000429c1) cell_navstr_albumart_pane_g4

0x0003,

0xfd2c,	// (0x0004b9a5) cell_navstr_albumart_pane_g

0xb19b,	// (0x00046e14) bt_list_pane_ParamLimits

0xb19b,	// (0x00046e14) bt_list_pane

0xb1af,	// (0x00046e28) bt_list_pane_t1

0xb1be,	// (0x00046e37) bt_list_pane_t2

0x0001,

0xfd35,	// (0x0004b9ae) bt_list_pane_t

0x09ad,	// (0x0003c626) main_cale_prevew_pane

0xb1cd,	// (0x00046e46) popup_cale_preview_window_ParamLimits

0xb1cd,	// (0x00046e46) popup_cale_preview_window

0x1055,	// (0x0003ccce) bg_popup_preview_window_pane_cp05_ParamLimits

0x1055,	// (0x0003ccce) bg_popup_preview_window_pane_cp05

0xe693,	// (0x0004a30c) list_cale_preview_pane_ParamLimits

0xe693,	// (0x0004a30c) list_cale_preview_pane

0xb1e6,	// (0x00046e5f) list_double_cale_preview_pane_ParamLimits

0xb1e6,	// (0x00046e5f) list_double_cale_preview_pane

0xcf9f,	// (0x00048c18) list_single_cale_preview_pane_ParamLimits

0xcf9f,	// (0x00048c18) list_single_cale_preview_pane

0xb1f8,	// (0x00046e71) list_single_cale_preview_pane_g1

0xb200,	// (0x00046e79) list_single_cale_preview_pane_t1_ParamLimits

0xb200,	// (0x00046e79) list_single_cale_preview_pane_t1

0xb215,	// (0x00046e8e) list_double_cale_preview_pane_g1

0xb21d,	// (0x00046e96) list_double_cale_preview_pane_t1_ParamLimits

0xb21d,	// (0x00046e96) list_double_cale_preview_pane_t1

0xb232,	// (0x00046eab) list_double_cale_preview_pane_t2_ParamLimits

0xb232,	// (0x00046eab) list_double_cale_preview_pane_t2

0x0001,

0xfd3a,	// (0x0004b9b3) list_double_cale_preview_pane_t_ParamLimits

0xfd3a,	// (0x0004b9b3) list_double_cale_preview_pane_t

0x09ad,	// (0x0003c626) main_ezdial_pane

0x1055,	// (0x0003ccce) main_sp_fs_email_pane_ParamLimits

0xad1e,	// (0x00046997) cmail_ddmenu_btn01_pane_ParamLimits

0xad1e,	// (0x00046997) cmail_ddmenu_btn01_pane

0xad31,	// (0x000469aa) cmail_ddmenu_btn02_pane_ParamLimits

0xad31,	// (0x000469aa) cmail_ddmenu_btn02_pane

0xad54,	// (0x000469cd) cmail_ddmenu_btn03_pane_ParamLimits

0xad54,	// (0x000469cd) cmail_ddmenu_btn03_pane

0xaded,	// (0x00046a66) main_sp_fs_ctrlbar_pane_ParamLimits

0xae11,	// (0x00046a8a) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0xaf6d,	// (0x00046be6) list_cmail_body_pane_ParamLimits

0xe280,	// (0x00049ef9) bg_button_pane_cp12

0xe295,	// (0x00049f0e) list_single_cmail_header_detail_pane_g3_ParamLimits

0xe295,	// (0x00049f0e) list_single_cmail_header_detail_pane_g3

0xe2de,	// (0x00049f57) list_single_cmail_header_detail_pane_t2_ParamLimits

0xe2de,	// (0x00049f57) list_single_cmail_header_detail_pane_t2

0x0001,

0xfcbd,	// (0x0004b936) list_single_cmail_header_detail_pane_t_ParamLimits

0xfcbd,	// (0x0004b936) list_single_cmail_header_detail_pane_t

0xe3eb,	// (0x0004a064) phacti_term_pane_t2_ParamLimits

0xe3eb,	// (0x0004a064) phacti_term_pane_t2

0x0001,

0xfcc7,	// (0x0004b940) phacti_term_pane_t_ParamLimits

0xfcc7,	// (0x0004b940) phacti_term_pane_t

0xe69f,	// (0x0004a318) aid_size_list_single_double

0xb24a,	// (0x00046ec3) popup_ezdial_listscroll_window

0xb266,	// (0x00046edf) popup_number_entry_window_cp01

0x12d2,	// (0x0003cf4b) bg_popup_call_pane_cp09

0xe6ab,	// (0x0004a324) ezdial_list_pane

0xe6b3,	// (0x0004a32c) scroll_pane_cp23

0x22ff,	// (0x0003df78) bg_button_pane_cp028_ParamLimits

0x22ff,	// (0x0003df78) bg_button_pane_cp028

0xb274,	// (0x00046eed) cmail_ddmenu_btn01_pane_g1_ParamLimits

0xb274,	// (0x00046eed) cmail_ddmenu_btn01_pane_g1

0xb280,	// (0x00046ef9) cmail_ddmenu_btn01_pane_g2_ParamLimits

0xb280,	// (0x00046ef9) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfd3f,	// (0x0004b9b8) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfd3f,	// (0x0004b9b8) cmail_ddmenu_btn01_pane_g

0xe6bb,	// (0x0004a334) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xe6bb,	// (0x0004a334) cmail_ddmenu_btn01_pane_t1

0x22ff,	// (0x0003df78) bg_button_pane_cp029_ParamLimits

0x22ff,	// (0x0003df78) bg_button_pane_cp029

0xb28c,	// (0x00046f05) cmail_ddmenu_btn02_pane_g1_ParamLimits

0xb28c,	// (0x00046f05) cmail_ddmenu_btn02_pane_g1

0xb2a4,	// (0x00046f1d) cmail_ddmenu_btn02_pane_t1_ParamLimits

0xb2a4,	// (0x00046f1d) cmail_ddmenu_btn02_pane_t1

0x1055,	// (0x0003ccce) bg_button_pane_cp031_ParamLimits

0x1055,	// (0x0003ccce) bg_button_pane_cp031

0xb28c,	// (0x00046f05) cmail_ddmenu_btn03_pane_g1_ParamLimits

0xb28c,	// (0x00046f05) cmail_ddmenu_btn03_pane_g1

0xb2a4,	// (0x00046f1d) cmail_ddmenu_btn03_pane_t1_ParamLimits

0xb2a4,	// (0x00046f1d) cmail_ddmenu_btn03_pane_t1

0x89ca,	// (0x00044643) cell_dialer2_keypad_pane_t1_ParamLimits

0x89e4,	// (0x0004465d) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x89e4,	// (0x0004465d) cell_dialer2_keypad_pane_t1_copy1

0xa5f4,	// (0x0004626d) ncimui_group_button_pane

0x1055,	// (0x0003ccce) main_sp_fs_calendar_pane_ParamLimits

0xaf83,	// (0x00046bfc) list_single_cmail_header_caption_pane_ParamLimits

0xe436,	// (0x0004a0af) aid_recal_txt_sm_pane

0x09ad,	// (0x0003c626) mian_recal_day_pane

0xe478,	// (0x0004a0f1) popup_sp_fs_cale_preview_window_ParamLimits

0xe6d0,	// (0x0004a349) list_recal_day_pane

0xe712,	// (0x0004a38b) list_single_recal_day_pane_ParamLimits

0xe712,	// (0x0004a38b) list_single_recal_day_pane

0xe724,	// (0x0004a39d) list_single_recal_day_pane_g1_ParamLimits

0xe724,	// (0x0004a39d) list_single_recal_day_pane_g1

0xe730,	// (0x0004a3a9) list_single_recal_day_pane_g2_ParamLimits

0xe730,	// (0x0004a3a9) list_single_recal_day_pane_g2

0xe73c,	// (0x0004a3b5) list_single_recal_day_pane_g3_ParamLimits

0xe73c,	// (0x0004a3b5) list_single_recal_day_pane_g3

0x385d,	// (0x0003f4d6) list_single_recal_day_pane_g4_ParamLimits

0x385d,	// (0x0003f4d6) list_single_recal_day_pane_g4

0xe748,	// (0x0004a3c1) list_single_recal_day_pane_g5_ParamLimits

0xe748,	// (0x0004a3c1) list_single_recal_day_pane_g5

0xe754,	// (0x0004a3cd) list_single_recal_day_pane_g6_ParamLimits

0xe754,	// (0x0004a3cd) list_single_recal_day_pane_g6

0x0004,

0xfd4e,	// (0x0004b9c7) list_single_recal_day_pane_g_ParamLimits

0xfd4e,	// (0x0004b9c7) list_single_recal_day_pane_g

0xe768,	// (0x0004a3e1) list_single_recal_day_pane_t1

0xe77a,	// (0x0004a3f3) list_single_recal_day_pane_t2

0x0001,

0xfd59,	// (0x0004b9d2) list_single_recal_day_pane_t

0xb2c8,	// (0x00046f41) ncimui_query_button_pane_ParamLimits

0xb2c8,	// (0x00046f41) ncimui_query_button_pane

0xb2d8,	// (0x00046f51) ncimui_query_button_pane_t1_ParamLimits

0xb2d8,	// (0x00046f51) ncimui_query_button_pane_t1

0xe78c,	// (0x0004a405) ncimui_query_button_pane_t2_ParamLimits

0xe78c,	// (0x0004a405) ncimui_query_button_pane_t2

0x0001,

0xfd5e,	// (0x0004b9d7) ncimui_query_button_pane_t_ParamLimits

0xfd5e,	// (0x0004b9d7) ncimui_query_button_pane_t

0xb2eb,	// (0x00046f64) query_button_pane_ParamLimits

0xb2eb,	// (0x00046f64) query_button_pane

0x09ad,	// (0x0003c626) bg_button_pane_cp0028

0xe79f,	// (0x0004a418) query_button_pane_t1

0x71e0,	// (0x00042e59) main_tport_pane_ParamLimits

0xae31,	// (0x00046aaa) bg_popup_window_pane_cp01_ParamLimits

0xae31,	// (0x00046aaa) bg_popup_window_pane_cp01

0xae4c,	// (0x00046ac5) heading_pane_cp08_ParamLimits

0xae4c,	// (0x00046ac5) heading_pane_cp08

0xae5f,	// (0x00046ad8) heading_pane_cp07_ParamLimits

0xae5f,	// (0x00046ad8) heading_pane_cp07

0xaf06,	// (0x00046b7f) cell_tport_appsw_pane_g2

0x0002,

0xfcaa,	// (0x0004b923) cell_tport_appsw_pane_g

0xc2af,	// (0x00047f28) input_candi_list_open_g1

0x16f0,	// (0x0003d369) list_cale_time_pane_g6_ParamLimits

0x16f0,	// (0x0003d369) list_cale_time_pane_g6

0x7a7e,	// (0x000436f7) aid_size_touch_calib_1_ParamLimits

0x7a7e,	// (0x000436f7) aid_size_touch_calib_1

0x7a90,	// (0x00043709) aid_size_touch_calib_2_ParamLimits

0x7a90,	// (0x00043709) aid_size_touch_calib_2

0x7aa8,	// (0x00043721) aid_size_touch_calib_3_ParamLimits

0x7aa8,	// (0x00043721) aid_size_touch_calib_3

0x7ac6,	// (0x0004373f) aid_size_touch_calib_4_ParamLimits

0x7ac6,	// (0x0004373f) aid_size_touch_calib_4

0x7ade,	// (0x00043757) main_touch_calib_button_group_pane_ParamLimits

0x7ade,	// (0x00043757) main_touch_calib_button_group_pane

0x7af6,	// (0x0004376f) main_touch_calib_pane_g1_ParamLimits

0x7b08,	// (0x00043781) main_touch_calib_pane_g2_ParamLimits

0x7b1a,	// (0x00043793) main_touch_calib_pane_g3_ParamLimits

0x7b2c,	// (0x000437a5) main_touch_calib_pane_g4_ParamLimits

0xf6ec,	// (0x0004b365) main_touch_calib_pane_g_ParamLimits

0x7b3e,	// (0x000437b7) main_touch_calib_pane_t1_ParamLimits

0x7b58,	// (0x000437d1) main_touch_calib_pane_t2_ParamLimits

0x7b72,	// (0x000437eb) main_touch_calib_pane_t3_ParamLimits

0x7b86,	// (0x000437ff) main_touch_calib_pane_t4_ParamLimits

0x7b9a,	// (0x00043813) main_touch_calib_pane_t5_ParamLimits

0xf6f5,	// (0x0004b36e) main_touch_calib_pane_t_ParamLimits

0xc971,	// (0x000485ea) list_single_fp_cale_pane_g3_ParamLimits

0xc971,	// (0x000485ea) list_single_fp_cale_pane_g3

0x1055,	// (0x0003ccce) bg_button_pane_cp012_ParamLimits

0x1055,	// (0x0003ccce) bg_vkb2_func_pane_cp03_ParamLimits

0x9950,	// (0x000455c9) cell_vitu2_function_top_pane_g1_ParamLimits

0x1055,	// (0x0003ccce) bg_vkb2_func_pane_cp04_ParamLimits

0xa57f,	// (0x000461f8) main_ncimui_button_group_pane_ParamLimits

0xa57f,	// (0x000461f8) main_ncimui_button_group_pane

0xa5df,	// (0x00046258) main_ncimui_pane_t3_ParamLimits

0xa5df,	// (0x00046258) main_ncimui_pane_t3

0xe399,	// (0x0004a012) phacti_button_group_pane

0xe69f,	// (0x0004a318) aid_size_list_single_double_ParamLimits

0xb24a,	// (0x00046ec3) popup_ezdial_listscroll_window_ParamLimits

0xb266,	// (0x00046edf) popup_number_entry_window_cp01_ParamLimits

0xb2fe,	// (0x00046f77) phacti_button_pane_ParamLimits

0xb2fe,	// (0x00046f77) phacti_button_pane

0x09ad,	// (0x0003c626) bg_button_pane_cp14

0xe7ad,	// (0x0004a426) phacti_button_pane_t1

0xb30f,	// (0x00046f88) main_touch_calib_button_pane_ParamLimits

0xb30f,	// (0x00046f88) main_touch_calib_button_pane

0x1120,	// (0x0003cd99) bg_button_pane_cp18_ParamLimits

0x1120,	// (0x0003cd99) bg_button_pane_cp18

0xe7bb,	// (0x0004a434) main_touch_calib_button_pane_t1_ParamLimits

0xe7bb,	// (0x0004a434) main_touch_calib_button_pane_t1

0xe7d1,	// (0x0004a44a) main_touch_calib_button_pane_t2_ParamLimits

0xe7d1,	// (0x0004a44a) main_touch_calib_button_pane_t2

0x0001,

0xfd63,	// (0x0004b9dc) main_touch_calib_button_pane_t_ParamLimits

0xfd63,	// (0x0004b9dc) main_touch_calib_button_pane_t

0x09ad,	// (0x0003c626) cell_ncimui_button_pane

0x09ad,	// (0x0003c626) bg_button_pane_cp032

0xe7ef,	// (0x0004a468) cell_ncimui_button_pane_t1

0xee42,	// (0x0004aabb) image3_infobar_pane_ParamLimits

0xee42,	// (0x0004aabb) image3_infobar_pane

0xa9f4,	// (0x0004666d) fs_bigclock_status_pane_ParamLimits

0xa9f4,	// (0x0004666d) fs_bigclock_status_pane

0xaa01,	// (0x0004667a) main_fs_bigclock_clock_pane_ParamLimits

0xaa01,	// (0x0004667a) main_fs_bigclock_clock_pane

0xaa1f,	// (0x00046698) main_fs_bigclock_indi_pane_ParamLimits

0xaa1f,	// (0x00046698) main_fs_bigclock_indi_pane

0xaa51,	// (0x000466ca) main_fs_bigclock_swipe_pane_ParamLimits

0xaa51,	// (0x000466ca) main_fs_bigclock_swipe_pane

0x09ad,	// (0x0003c626) main_fs_clock_dumped_data

0xdd62,	// (0x000499db) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xdd62,	// (0x000499db) list_single_fs_bigclock_indicator_pane_g1

0xdd7e,	// (0x000499f7) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xdd7e,	// (0x000499f7) list_single_fs_bigclock_indicator_pane_g2

0xdd98,	// (0x00049a11) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xdd98,	// (0x00049a11) list_single_fs_bigclock_indicator_pane_g3

0xddb2,	// (0x00049a2b) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xddb2,	// (0x00049a2b) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfc04,	// (0x0004b87d) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfc04,	// (0x0004b87d) list_single_fs_bigclock_indicator_pane_g

0xdddd,	// (0x00049a56) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xdddd,	// (0x00049a56) list_single_fs_bigclock_indicator_pane_t1

0xde05,	// (0x00049a7e) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xde05,	// (0x00049a7e) list_single_fs_bigclock_indicator_pane_t2

0xde2d,	// (0x00049aa6) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xde2d,	// (0x00049aa6) list_single_fs_bigclock_indicator_pane_t3

0xde55,	// (0x00049ace) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xde55,	// (0x00049ace) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfc0f,	// (0x0004b888) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfc0f,	// (0x0004b888) list_single_fs_bigclock_indicator_pane_t

0xe7fd,	// (0x0004a476) image3_infobar_fav_pane_ParamLimits

0xe7fd,	// (0x0004a476) image3_infobar_fav_pane

0xe80d,	// (0x0004a486) image3_infobar_loc_pane_ParamLimits

0xe80d,	// (0x0004a486) image3_infobar_loc_pane

0xe821,	// (0x0004a49a) image3_infobar_time_pane_ParamLimits

0xe821,	// (0x0004a49a) image3_infobar_time_pane

0x1308,	// (0x0003cf81) image3_infobar_time_pane_g1

0xe831,	// (0x0004a4aa) image3_infobar_time_pane_t1

0x1308,	// (0x0003cf81) image3_infobar_loc_pane_g1

0xe83f,	// (0x0004a4b8) image3_infobar_loc_pane_g2

0x0001,

0xfd68,	// (0x0004b9e1) image3_infobar_loc_pane_g

0xe847,	// (0x0004a4c0) image3_infobar_loc_pane_t1

0x1308,	// (0x0003cf81) image3_infobar_fav_pane_g1

0xe855,	// (0x0004a4ce) image3_infobar_fav_pane_g2

0x0001,

0xfd6d,	// (0x0004b9e6) image3_infobar_fav_pane_g

0xe85d,	// (0x0004a4d6) fs_bigclock_status_battery_pane

0xe866,	// (0x0004a4df) fs_bigclock_status_signal_pane

0xe86f,	// (0x0004a4e8) fs_bigclock_status_title_pane

0xe878,	// (0x0004a4f1) fs_bigclock_status_signal_pane_g1

0xe881,	// (0x0004a4fa) fs_bigclock_status_signal_pane_g2

0x0001,

0xfd72,	// (0x0004b9eb) fs_bigclock_status_signal_pane_g

0xe889,	// (0x0004a502) fs_bigclock_status_battery_pane_g1

0xe892,	// (0x0004a50b) fs_bigclock_status_battery_pane_g2

0x0001,

0xfd77,	// (0x0004b9f0) fs_bigclock_status_battery_pane_g

0xe89a,	// (0x0004a513) fs_bigclock_status_title_pane_t1

0xb324,	// (0x00046f9d) main_fs_bigclock_clock_pane_g1

0xb324,	// (0x00046f9d) main_fs_bigclock_clock_pane_g2

0xb335,	// (0x00046fae) main_fs_bigclock_clock_pane_g3

0xb335,	// (0x00046fae) main_fs_bigclock_clock_pane_g4

0x0003,

0xfd7c,	// (0x0004b9f5) main_fs_bigclock_clock_pane_g

0xb348,	// (0x00046fc1) main_fs_bigclock_clock_pane_t1

0xb35e,	// (0x00046fd7) main_fs_bigclock_clock_pane_t2

0x0001,

0xfd85,	// (0x0004b9fe) main_fs_bigclock_clock_pane_t

0xe8a8,	// (0x0004a521) list_single_fs_bigclock_indicator_pane_ParamLimits

0xe8a8,	// (0x0004a521) list_single_fs_bigclock_indicator_pane

0xe8b9,	// (0x0004a532) list_single_fs_bigclock_pane_ParamLimits

0xe8b9,	// (0x0004a532) list_single_fs_bigclock_pane

0xe8df,	// (0x0004a558) main_fs_bigclock_indicator_pane_t1

0xe8ee,	// (0x0004a567) list_single_fs_bigclock_pane_g1

0xe8f6,	// (0x0004a56f) list_single_fs_bigclock_pane_t1

0x1308,	// (0x0003cf81) main_fs_bigclock_swipe_pane_g1

0xe939,	// (0x0004a5b2) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfd96,	// (0x0004ba0f) main_fs_bigclock_swipe_pane_g

0xe941,	// (0x0004a5ba) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xe941,	// (0x0004a5ba) main_fs_bigclock_swipe_pane_t1

0x55d7,	// (0x00041250) call_type_pane_ParamLimits

0x09ad,	// (0x0003c626) main_btmg_pane

0xe575,	// (0x0004a1ee) list_single_cale_mrui_row_pane_g2_ParamLimits

0xe575,	// (0x0004a1ee) list_single_cale_mrui_row_pane_g2

0x0002,

0xfd09,	// (0x0004b982) list_single_cale_mrui_row_pane_g_ParamLimits

0xfd09,	// (0x0004b982) list_single_cale_mrui_row_pane_g

0xe6f9,	// (0x0004a372) list_recal_vselct_arw_lo_pane

0xe701,	// (0x0004a37a) list_recal_vselct_arw_up_pane

0xe709,	// (0x0004a382) list_recal_vselct_pane

0xb3b8,	// (0x00047031) btmg_button_pane

0xb3c2,	// (0x0004703b) main_btmg_pane_g1

0x09ad,	// (0x0003c626) bg_button_pane_cp044

0xe95e,	// (0x0004a5d7) btmg_button_pane_t1

0x7198,	// (0x00042e11) aid_listscroll_gen

0x1055,	// (0x0003ccce) main_cntbar_detail_pane

0xe262,	// (0x00049edb) list_cmail_folder_pane

0x55cb,	// (0x00041244) sp_fs_scroll_pane_cp03_ParamLimits

0xaf83,	// (0x00046bfc) list_single_fs_dyc_pane_cp01_ParamLimits

0xaf83,	// (0x00046bfc) list_single_fs_dyc_pane_cp01

0xe96c,	// (0x0004a5e5) aid_size_cmail_indent

0xe975,	// (0x0004a5ee) list_single_dyc_row_pane_cp01

0xb3fe,	// (0x00047077) cntbar_detail_list_pane_ParamLimits

0xb3fe,	// (0x00047077) cntbar_detail_list_pane

0xb44a,	// (0x000470c3) main_cntbar_detail_cont_pane_ParamLimits

0xb44a,	// (0x000470c3) main_cntbar_detail_cont_pane

0x55cb,	// (0x00041244) scroll_pane_cp032_ParamLimits

0x55cb,	// (0x00041244) scroll_pane_cp032

0xb45e,	// (0x000470d7) cntbar_detail_list_event_pane_ParamLimits

0xb45e,	// (0x000470d7) cntbar_detail_list_event_pane

0xb40e,	// (0x00047087) cntbar_detail_list_shct_pane

0x157b,	// (0x0003d1f4) aid_list_gen

0xe97e,	// (0x0004a5f7) aid_scroll

0xe987,	// (0x0004a600) aid_size_touch_scroll_bar

0x236a,	// (0x0003dfe3) aid_list_double

0xb46e,	// (0x000470e7) aid_list_single

0xb46e,	// (0x000470e7) aid_list_single_lg

0xe990,	// (0x0004a609) aid_list_z_g_a_sm

0xe998,	// (0x0004a611) aid_list_z_g_d

0xe9a0,	// (0x0004a619) aid_txt_z_prm

0xe9ae,	// (0x0004a627) aid_txt_z_prm_cp01

0xe9bc,	// (0x0004a635) aid_txt_z_sec

0xb477,	// (0x000470f0) main_cntbar_detail_cont_pane_g1_ParamLimits

0xb477,	// (0x000470f0) main_cntbar_detail_cont_pane_g1

0xb48b,	// (0x00047104) main_cntbar_detail_cont_pane_g2_ParamLimits

0xb48b,	// (0x00047104) main_cntbar_detail_cont_pane_g2

0x0001,

0xfd9b,	// (0x0004ba14) main_cntbar_detail_cont_pane_g_ParamLimits

0xfd9b,	// (0x0004ba14) main_cntbar_detail_cont_pane_g

0xe9ca,	// (0x0004a643) main_cntbar_detail_cont_pane_t1

0xe9d8,	// (0x0004a651) main_cntbar_detail_cont_pane_t2

0xe9e6,	// (0x0004a65f) main_cntbar_detail_cont_pane_t3

0x0002,

0xfda0,	// (0x0004ba19) main_cntbar_detail_cont_pane_t

0xb49b,	// (0x00047114) cell_cntbar_detail_list_shct_pane_ParamLimits

0xb49b,	// (0x00047114) cell_cntbar_detail_list_shct_pane

0xe9f4,	// (0x0004a66d) cntbar_detail_list_shct_pane_g1

0xe9fd,	// (0x0004a676) cntbar_detail_list_shct_pane_g2

0x0001,

0xfda7,	// (0x0004ba20) cntbar_detail_list_shct_pane_g

0xb4af,	// (0x00047128) cntbar_detail_list_event_pane_g1_ParamLimits

0xb4af,	// (0x00047128) cntbar_detail_list_event_pane_g1

0xb4bb,	// (0x00047134) cntbar_detail_list_event_pane_g2_ParamLimits

0xb4bb,	// (0x00047134) cntbar_detail_list_event_pane_g2

0x0005,

0xfdac,	// (0x0004ba25) cntbar_detail_list_event_pane_g_ParamLimits

0xfdac,	// (0x0004ba25) cntbar_detail_list_event_pane_g

0xb527,	// (0x000471a0) cntbar_detail_list_event_pane_t1_ParamLimits

0xb527,	// (0x000471a0) cntbar_detail_list_event_pane_t1

0xb53c,	// (0x000471b5) cntbar_detail_list_event_pane_t2_ParamLimits

0xb53c,	// (0x000471b5) cntbar_detail_list_event_pane_t2

0x0002,

0xfdb9,	// (0x0004ba32) cntbar_detail_list_event_pane_t_ParamLimits

0xfdb9,	// (0x0004ba32) cntbar_detail_list_event_pane_t

0x1308,	// (0x0003cf81) cell_cntbar_detail_list_shct_pane_g1

0x1cbf,	// (0x0003d938) navi_pane_mv_g3

0x1055,	// (0x0003ccce) main_cntbar_detail_pane_ParamLimits

0x09ad,	// (0x0003c626) main_notif_wgt_pane

0xce44,	// (0x00048abd) aid_tch_main_mp4_pane_g4

0xee3a,	// (0x0004aab3) popup_slider_window_cp02

0xe6ef,	// (0x0004a368) list_recal_day_event_pane

0xb3cc,	// (0x00047045) cntbar_detail_btn_pane_ParamLimits

0xb3cc,	// (0x00047045) cntbar_detail_btn_pane

0xb3e5,	// (0x0004705e) cntbar_detail_btn_pane_cp01_ParamLimits

0xb3e5,	// (0x0004705e) cntbar_detail_btn_pane_cp01

0xb40e,	// (0x00047087) cntbar_detail_list_shct_pane_ParamLimits

0xb41e,	// (0x00047097) cntbar_detail_pane_g1_ParamLimits

0xb41e,	// (0x00047097) cntbar_detail_pane_g1

0xb42e,	// (0x000470a7) cntbar_detail_pane_t1_ParamLimits

0xb42e,	// (0x000470a7) cntbar_detail_pane_t1

0xb4c7,	// (0x00047140) cntbar_detail_list_event_pane_g3_ParamLimits

0xb4c7,	// (0x00047140) cntbar_detail_list_event_pane_g3

0xb4df,	// (0x00047158) cntbar_detail_list_event_pane_g4_ParamLimits

0xb4df,	// (0x00047158) cntbar_detail_list_event_pane_g4

0xb4f7,	// (0x00047170) cntbar_detail_list_event_pane_g5_ParamLimits

0xb4f7,	// (0x00047170) cntbar_detail_list_event_pane_g5

0xb50f,	// (0x00047188) cntbar_detail_list_event_pane_g6_ParamLimits

0xb50f,	// (0x00047188) cntbar_detail_list_event_pane_g6

0xb551,	// (0x000471ca) cntbar_detail_list_event_pane_t3_ParamLimits

0xb551,	// (0x000471ca) cntbar_detail_list_event_pane_t3

0xb563,	// (0x000471dc) popup_notif_wgt_window_ParamLimits

0xb563,	// (0x000471dc) popup_notif_wgt_window

0xb57c,	// (0x000471f5) popup_submenu_window_cp01_ParamLimits

0xb57c,	// (0x000471f5) popup_submenu_window_cp01

0x12d2,	// (0x0003cf4b) bg_popup_window_pane_cp10

0xea06,	// (0x0004a67f) listscroll_notif_wgt_pane

0xea18,	// (0x0004a691) list_notif_wgt_window

0xea21,	// (0x0004a69a) scroll_pane_cp033

0xb58e,	// (0x00047207) list_notif_wgt_row_pane_ParamLimits

0xb58e,	// (0x00047207) list_notif_wgt_row_pane

0xea2a,	// (0x0004a6a3) aid_size_list_notif_wgt_del

0xea37,	// (0x0004a6b0) list_notif_wgt_row_pane_g1

0xea43,	// (0x0004a6bc) list_notif_wgt_row_pane_g2

0xea52,	// (0x0004a6cb) list_notif_wgt_row_pane_g3

0x0002,

0xfdc0,	// (0x0004ba39) list_notif_wgt_row_pane_g

0xea5f,	// (0x0004a6d8) list_notif_wgt_row_pane_t1

0xea75,	// (0x0004a6ee) list_notif_wgt_row_pane_t2

0xea87,	// (0x0004a700) list_notif_wgt_row_pane_t3

0x0002,

0xfdc7,	// (0x0004ba40) list_notif_wgt_row_pane_t

0xd1c7,	// (0x00048e40) list_recal_day_event_pane_g1

0xea99,	// (0x0004a712) list_recal_day_event_pane_t1

0x09ad,	// (0x0003c626) bg_button_pane_cp045

0xb59e,	// (0x00047217) cntbar_detail_btn_pane_t1

0x22ff,	// (0x0003df78) main_callh_pane_ParamLimits

0x22ff,	// (0x0003df78) main_callh_pane

0x09ad,	// (0x0003c626) main_coverflow0_pane

0x09ad,	// (0x0003c626) main_wgtman_pane

0xaa69,	// (0x000466e2) main_fs_bigclock_unlock_btn_pane_ParamLimits

0xaa69,	// (0x000466e2) main_fs_bigclock_unlock_btn_pane

0xaefe,	// (0x00046b77) bg_button_pane_cp16

0xaf0e,	// (0x00046b87) cell_tport_appsw_pane_g3

0xb5ac,	// (0x00047225) cf0_flow_pane_ParamLimits

0xb5ac,	// (0x00047225) cf0_flow_pane

0xeaa8,	// (0x0004a721) listscroll_cf0_pane

0xeab3,	// (0x0004a72c) main_cf0_pane_g1

0xb5c1,	// (0x0004723a) main_cf0_pane_t1_ParamLimits

0xb5c1,	// (0x0004723a) main_cf0_pane_t1

0xb5d8,	// (0x00047251) main_cf0_pane_t2_ParamLimits

0xb5d8,	// (0x00047251) main_cf0_pane_t2

0x0001,

0xfdd3,	// (0x0004ba4c) main_cf0_pane_t_ParamLimits

0xfdd3,	// (0x0004ba4c) main_cf0_pane_t

0xeac5,	// (0x0004a73e) scroll_pane_cp11

0xb5ef,	// (0x00047268) cf0_flow_pane_g1

0xb5f7,	// (0x00047270) cf0_flow_pane_g2

0x0001,

0xfdd8,	// (0x0004ba51) cf0_flow_pane_g

0xb5ff,	// (0x00047278) cf0_flow_pane_t1

0x09ad,	// (0x0003c626) main_call6_pane

0x09ad,	// (0x0003c626) main_calllock_pane

0xb60d,	// (0x00047286) call6_btn_grp_pane_ParamLimits

0xb60d,	// (0x00047286) call6_btn_grp_pane

0xb627,	// (0x000472a0) call6_pane_g1_ParamLimits

0xb627,	// (0x000472a0) call6_pane_g1

0xb63d,	// (0x000472b6) popup_call6_1st_window_ParamLimits

0xb63d,	// (0x000472b6) popup_call6_1st_window

0xb64e,	// (0x000472c7) popup_call6_2nd_window_ParamLimits

0xb64e,	// (0x000472c7) popup_call6_2nd_window

0xb65f,	// (0x000472d8) cell_call6_btn_pane_ParamLimits

0xb65f,	// (0x000472d8) cell_call6_btn_pane

0x12d2,	// (0x0003cf4b) bg_popup_call2_in_pane_cp03

0xead0,	// (0x0004a749) popup_call6_1st_window_g1

0xead8,	// (0x0004a751) popup_call6_1st_window_g2

0xeae0,	// (0x0004a759) popup_call6_1st_window_g3

0x0002,

0xfddd,	// (0x0004ba56) popup_call6_1st_window_g

0xeae8,	// (0x0004a761) popup_call6_1st_window_t1

0xeaf7,	// (0x0004a770) popup_call6_1st_window_t2

0xeb05,	// (0x0004a77e) popup_call6_1st_window_t3

0x0002,

0xfde4,	// (0x0004ba5d) popup_call6_1st_window_t

0x12d2,	// (0x0003cf4b) bg_popup_call2_in_pane_cp04

0xeb13,	// (0x0004a78c) popup_call6_2nd_window_g1

0xeb1b,	// (0x0004a794) popup_call6_2nd_window_g2

0xeb23,	// (0x0004a79c) popup_call6_2nd_window_g3

0x0002,

0xfdeb,	// (0x0004ba64) popup_call6_2nd_window_g

0xeb2b,	// (0x0004a7a4) popup_call6_2nd_window_t1

0x09ad,	// (0x0003c626) bg_button_pane_cp15

0xeb3a,	// (0x0004a7b3) cell_call6_btn_pane_g1

0xf076,	// (0x0004acef) cell_call6_btn_pane_t1

0xb673,	// (0x000472ec) listscroll_wgtman_pane_ParamLimits

0xb673,	// (0x000472ec) listscroll_wgtman_pane

0xb694,	// (0x0004730d) wgtman_btn_pane_ParamLimits

0xb694,	// (0x0004730d) wgtman_btn_pane

0x1ad3,	// (0x0003d74c) aid_scroll_copy1

0xeb43,	// (0x0004a7bc) list_wgtman_pane

0xb6d7,	// (0x00047350) wgtman_btn_pane_g1_ParamLimits

0xb6d7,	// (0x00047350) wgtman_btn_pane_g1

0xb703,	// (0x0004737c) wgtman_btn_pane_t1_ParamLimits

0xb703,	// (0x0004737c) wgtman_btn_pane_t1

0xeb4d,	// (0x0004a7c6) wgtman_btn_pane_t2_ParamLimits

0xeb4d,	// (0x0004a7c6) wgtman_btn_pane_t2

0x0001,

0xfdf2,	// (0x0004ba6b) wgtman_btn_pane_t_ParamLimits

0xfdf2,	// (0x0004ba6b) wgtman_btn_pane_t

0xb740,	// (0x000473b9) listrow_wgtman_pane_ParamLimits

0xb740,	// (0x000473b9) listrow_wgtman_pane

0xb753,	// (0x000473cc) listrow_wgtman_pane_g1

0xb760,	// (0x000473d9) listrow_wgtman_pane_g2

0x0001,

0xfdf7,	// (0x0004ba70) listrow_wgtman_pane_g

0x3875,	// (0x0003f4ee) listrow_wgtman_pane_t1

0x388d,	// (0x0003f506) listrow_wgtman_pane_t2

0x0001,

0xfdfc,	// (0x0004ba75) listrow_wgtman_pane_t

0x38b3,	// (0x0003f52c) wait_bar_pane_cp09

0xeb64,	// (0x0004a7dd) main_calllock_btn_pane

0xeb6e,	// (0x0004a7e7) main_calllock_pane_g1

0x09ad,	// (0x0003c626) bg_button_pane_cp17

0xeb3a,	// (0x0004a7b3) main_calllock_btn_pane_g1

0xeb76,	// (0x0004a7ef) main_calllock_btn_pane_t1

0x09ad,	// (0x0003c626) main_dialer3_pane

0x09ad,	// (0x0003c626) main_fmrd2_pane

0x1308,	// (0x0003cf81) main_fs_bigclock_unlock_btn_pane_g1

0xb786,	// (0x000473ff) main_fs_bigclock_unlock_btn_pane_t1

0xb794,	// (0x0004740d) area_fmrd2_info_pane_ParamLimits

0xb794,	// (0x0004740d) area_fmrd2_info_pane

0xb7a5,	// (0x0004741e) area_fmrd2_visual_pane_ParamLimits

0xb7a5,	// (0x0004741e) area_fmrd2_visual_pane

0xb7b3,	// (0x0004742c) fmrd2_indi_pane_ParamLimits

0xb7b3,	// (0x0004742c) fmrd2_indi_pane

0xb7c0,	// (0x00047439) area_fmrd2_visual_pane_g1

0xb7c8,	// (0x00047441) area_fmrd2_visual_pane_t1

0xb7d8,	// (0x00047451) area_fmrd2_visual_pane_t2

0xb7e8,	// (0x00047461) area_fmrd2_visual_pane_t3

0x0002,

0xfe06,	// (0x0004ba7f) area_fmrd2_visual_pane_t

0xb7f8,	// (0x00047471) area_fmrd2_info_pane_g1

0xb800,	// (0x00047479) area_fmrd2_info_pane_t1

0xb810,	// (0x00047489) area_fmrd2_info_pane_t2

0xb820,	// (0x00047499) area_fmrd2_info_pane_t3

0xb830,	// (0x000474a9) area_fmrd2_info_pane_t4

0x0003,

0xfe0d,	// (0x0004ba86) area_fmrd2_info_pane_t

0xb83e,	// (0x000474b7) fmrd2_indi_pane_t1

0xb84e,	// (0x000474c7) fmrd2_indi_pane_t2

0xb85e,	// (0x000474d7) fmrd2_indi_pane_t3

0x0002,

0xfe16,	// (0x0004ba8f) fmrd2_indi_pane_t

0xddc1,	// (0x00049a3a) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xddc1,	// (0x00049a3a) list_single_fs_bigclock_indicator_pane_g5

0xde72,	// (0x00049aeb) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xde72,	// (0x00049aeb) list_single_fs_bigclock_indicator_pane_t5

0xb084,	// (0x00046cfd) aid_cell_bcale_month_pane_ParamLimits

0xb084,	// (0x00046cfd) aid_cell_bcale_month_pane

0xb0a2,	// (0x00046d1b) bcale_month_pane_ParamLimits

0xb0a2,	// (0x00046d1b) bcale_month_pane

0xb0c6,	// (0x00046d3f) bcale_preview_pane_ParamLimits

0xb0c6,	// (0x00046d3f) bcale_preview_pane

0xe8f6,	// (0x0004a56f) list_single_fs_bigclock_pane_t1_ParamLimits

0xe915,	// (0x0004a58e) list_single_fs_bigclock_pane_t2_ParamLimits

0xe915,	// (0x0004a58e) list_single_fs_bigclock_pane_t2

0x0001,

0xfd91,	// (0x0004ba0a) list_single_fs_bigclock_pane_t_ParamLimits

0xfd91,	// (0x0004ba0a) list_single_fs_bigclock_pane_t

0xb77e,	// (0x000473f7) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfe01,	// (0x0004ba7a) main_fs_bigclock_unlock_btn_pane_g

0xb86e,	// (0x000474e7) aid_dia3_key_size_ParamLimits

0xb86e,	// (0x000474e7) aid_dia3_key_size

0xb87d,	// (0x000474f6) aid_dia3_listrow_size_ParamLimits

0xb87d,	// (0x000474f6) aid_dia3_listrow_size

0xb892,	// (0x0004750b) dia3_keypad_fun_pane_ParamLimits

0xb892,	// (0x0004750b) dia3_keypad_fun_pane

0xb8ae,	// (0x00047527) dia3_keypad_num_pane_ParamLimits

0xb8ae,	// (0x00047527) dia3_keypad_num_pane

0xb8c9,	// (0x00047542) dia3_listscroll_pane_ParamLimits

0xb8c9,	// (0x00047542) dia3_listscroll_pane

0xb8dc,	// (0x00047555) dia3_numentry_pane_ParamLimits

0xb8dc,	// (0x00047555) dia3_numentry_pane

0xeb85,	// (0x0004a7fe) dia3_list_pane

0xeb90,	// (0x0004a809) scroll_pane_cp12

0x09ad,	// (0x0003c626) bg_dia3_numentry_pane

0xb8f4,	// (0x0004756d) dia3_numentry_pane_t1

0xb903,	// (0x0004757c) cell_dia3_key_num_pane

0xb90b,	// (0x00047584) cell_dia3_key0_fun_pane_ParamLimits

0xb90b,	// (0x00047584) cell_dia3_key0_fun_pane

0xb91f,	// (0x00047598) cell_dia3_key1_fun_pane_ParamLimits

0xb91f,	// (0x00047598) cell_dia3_key1_fun_pane

0xb937,	// (0x000475b0) dia3_listrow_pane

0xdb14,	// (0x0004978d) bg_dia3_numentry_pane_g1

0x09ad,	// (0x0003c626) bg_button_pane_cp21

0xeb9b,	// (0x0004a814) cell_dia3_key_num_pane_t1

0xeba9,	// (0x0004a822) cell_dia3_key_num_pane_t2

0xebb8,	// (0x0004a831) cell_dia3_key_num_pane_t3

0xebc7,	// (0x0004a840) cell_dia3_key_num_pane_t4

0x0003,

0xfe1d,	// (0x0004ba96) cell_dia3_key_num_pane_t

0x09ad,	// (0x0003c626) bg_button_pane_cp19

0xb949,	// (0x000475c2) cell_dia3_key0_fun_pane_g1

0x09ad,	// (0x0003c626) bg_button_pane_cp20

0xb951,	// (0x000475ca) cell_dia3_key1_fun_pane_g1

0xb959,	// (0x000475d2) area_left_week_number_pane

0xb965,	// (0x000475de) area_top_day_name_pane

0xb978,	// (0x000475f1) frame_month_view_pane

0xebd6,	// (0x0004a84f) grid_month_view_pane

0xb98b,	// (0x00047604) cell_top_day_name_pane_ParamLimits

0xb98b,	// (0x00047604) cell_top_day_name_pane

0xb9b8,	// (0x00047631) cell_area_left_week_number_pane_ParamLimits

0xb9b8,	// (0x00047631) cell_area_left_week_number_pane

0xb9cc,	// (0x00047645) cell_month_view_pane_ParamLimits

0xb9cc,	// (0x00047645) cell_month_view_pane

0xebe4,	// (0x0004a85d) frm_month_g1

0xb9f9,	// (0x00047672) frm_month_g2

0xba0c,	// (0x00047685) frm_month_g3

0xba1f,	// (0x00047698) frm_month_g4

0xba32,	// (0x000476ab) frm_month_g5

0xba45,	// (0x000476be) frm_month_g6

0xba58,	// (0x000476d1) frm_month_g7

0xebf1,	// (0x0004a86a) frm_month_g8

0xba6b,	// (0x000476e4) frm_month_g9

0xba7b,	// (0x000476f4) frm_month_g10

0xba8b,	// (0x00047704) frm_month_g11

0xba9b,	// (0x00047714) frm_month_g12

0xbaad,	// (0x00047726) frm_month_g13

0xbabf,	// (0x00047738) frm_month_g14

0xbad3,	// (0x0004774c) frm_month_g15

0xbae7,	// (0x00047760) frm_month_g16

0x000f,

0xfe26,	// (0x0004ba9f) frm_month_g

0x01ad,	// (0x0003be26) cell_top_day_name_pane_t1

0xbafb,	// (0x00047774) cell_area_left_week_number_pane_g1

0xbb07,	// (0x00047780) cell_area_left_week_number_pane_t1

0x10ae,	// (0x0003cd27) cell_month_view_pane_g1

0xbb1a,	// (0x00047793) cell_month_view_pane_t1

0x09ad,	// (0x0003c626) main_fps_pane

0xe086,	// (0x00049cff) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xe086,	// (0x00049cff) cmail_ddmenu_btn02_pane_cp1

0xe0a2,	// (0x00049d1b) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xe0a2,	// (0x00049d1b) cmail_ddmenu_btn02_pane_cp2

0xb298,	// (0x00046f11) cmail_ddmenu_btn02_pane_g2_ParamLimits

0xb298,	// (0x00046f11) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfd44,	// (0x0004b9bd) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfd44,	// (0x0004b9bd) cmail_ddmenu_btn02_pane_g

0xb2b6,	// (0x00046f2f) cmail_ddmenu_btn02_pane_t2_ParamLimits

0xb2b6,	// (0x00046f2f) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfd49,	// (0x0004b9c2) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfd49,	// (0x0004b9c2) cmail_ddmenu_btn02_pane_t

0xbb2d,	// (0x000477a6) fps_text_pane_ParamLimits

0xbb2d,	// (0x000477a6) fps_text_pane

0xbb44,	// (0x000477bd) main_fps_pane_g1_ParamLimits

0xbb44,	// (0x000477bd) main_fps_pane_g1

0xbb5e,	// (0x000477d7) wait_bar_pane_cp010_ParamLimits

0xbb5e,	// (0x000477d7) wait_bar_pane_cp010

0xbb6f,	// (0x000477e8) fps_text_pane_t1_ParamLimits

0xbb6f,	// (0x000477e8) fps_text_pane_t1

0x0416,	// (0x0003c08f) cam4_image_uncrop_pane_g1

0x041f,	// (0x0003c098) cam4_image_uncrop_pane_g2

0x8f01,	// (0x00044b7a) cam4_image_uncrop_pane_g3

0x8f0a,	// (0x00044b83) cam4_image_uncrop_pane_g4

0x0003,

0xf888,	// (0x0004b501) cam4_image_uncrop_pane_g

0xb937,	// (0x000475b0) dia3_listrow_pane_ParamLimits

0x09ad,	// (0x0003c626) main_phob2_pane

0xaecf,	// (0x00046b48) cell_tport_appsw_pane_cp02_ParamLimits

0xaecf,	// (0x00046b48) cell_tport_appsw_pane_cp02

0xaee3,	// (0x00046b5c) cell_tport_appsw_pane_cp03_ParamLimits

0xaee3,	// (0x00046b5c) cell_tport_appsw_pane_cp03

0x09ad,	// (0x0003c626) phob2_contact_card_pane

0x09ad,	// (0x0003c626) phob2_listscroll_pane

0x023b,	// (0x0003beb4) phob2_list_pane

0x0243,	// (0x0003bebc) scroll_pane_cp034

0xbb87,	// (0x00047800) phob2_cc_data_pane_ParamLimits

0xbb87,	// (0x00047800) phob2_cc_data_pane

0xbba6,	// (0x0004781f) phob2_cc_listscroll_pane_ParamLimits

0xbba6,	// (0x0004781f) phob2_cc_listscroll_pane

0xb740,	// (0x000473b9) list_double_large_graphic_phob2_pane_ParamLimits

0xb740,	// (0x000473b9) list_double_large_graphic_phob2_pane

0xbbc4,	// (0x0004783d) list_double_large_graphic_phob2_pane_g1_ParamLimits

0xbbc4,	// (0x0004783d) list_double_large_graphic_phob2_pane_g1

0x38c5,	// (0x0003f53e) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x38c5,	// (0x0003f53e) list_double_large_graphic_phob2_pane_g2

0x0003,

0xfe47,	// (0x0004bac0) list_double_large_graphic_phob2_pane_g_ParamLimits

0xfe47,	// (0x0004bac0) list_double_large_graphic_phob2_pane_g

0x38eb,	// (0x0003f564) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x38eb,	// (0x0003f564) list_double_large_graphic_phob2_pane_t1

0x3900,	// (0x0003f579) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x3900,	// (0x0003f579) list_double_large_graphic_phob2_pane_t2

0x0001,

0xfe50,	// (0x0004bac9) list_double_large_graphic_phob2_pane_t_ParamLimits

0xfe50,	// (0x0004bac9) list_double_large_graphic_phob2_pane_t

0x09ad,	// (0x0003c626) list_highlight_pane_cp024

0x028c,	// (0x0003bf05) phob2_cc_button_pane

0xbbd1,	// (0x0004784a) phob2_cc_data_pane_g1_ParamLimits

0xbbd1,	// (0x0004784a) phob2_cc_data_pane_g1

0xbbe8,	// (0x00047861) phob2_cc_data_pane_g2_ParamLimits

0xbbe8,	// (0x00047861) phob2_cc_data_pane_g2

0x0001,

0xfe55,	// (0x0004bace) phob2_cc_data_pane_g_ParamLimits

0xfe55,	// (0x0004bace) phob2_cc_data_pane_g

0xbbfa,	// (0x00047873) phob2_cc_data_pane_t1_ParamLimits

0xbbfa,	// (0x00047873) phob2_cc_data_pane_t1

0xbc12,	// (0x0004788b) phob2_cc_data_pane_t2_ParamLimits

0xbc12,	// (0x0004788b) phob2_cc_data_pane_t2

0xbc2a,	// (0x000478a3) phob2_cc_data_pane_t3_ParamLimits

0xbc2a,	// (0x000478a3) phob2_cc_data_pane_t3

0x0002,

0xfe5a,	// (0x0004bad3) phob2_cc_data_pane_t_ParamLimits

0xfe5a,	// (0x0004bad3) phob2_cc_data_pane_t

0x02f1,	// (0x0003bf6a) phob2_cc_list_pane_ParamLimits

0x02f1,	// (0x0003bf6a) phob2_cc_list_pane

0xd270,	// (0x00048ee9) scroll_pane_cp035_ParamLimits

0xd270,	// (0x00048ee9) scroll_pane_cp035

0x1055,	// (0x0003ccce) bg_button_pane_cp033

0x02fd,	// (0x0003bf76) phob2_cc_button_pane_g1

0x0309,	// (0x0003bf82) phob2_cc_button_pane_t1

0x031e,	// (0x0003bf97) phob2_cc_button_pane_t2

0x0001,

0xfe61,	// (0x0004bada) phob2_cc_button_pane_t

0xbc42,	// (0x000478bb) list_double_large_graphic_phob2_cc_pane_ParamLimits

0xbc42,	// (0x000478bb) list_double_large_graphic_phob2_cc_pane

0xbc74,	// (0x000478ed) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0xbc74,	// (0x000478ed) list_double_large_graphic_phob2_cc_pane_g1

0x3915,	// (0x0003f58e) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x3915,	// (0x0003f58e) list_double_large_graphic_phob2_cc_pane_g2

0x3921,	// (0x0003f59a) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x3921,	// (0x0003f59a) list_double_large_graphic_phob2_cc_pane_g3

0x392d,	// (0x0003f5a6) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x392d,	// (0x0003f5a6) list_double_large_graphic_phob2_cc_pane_g4

0x3939,	// (0x0003f5b2) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x3939,	// (0x0003f5b2) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xfe66,	// (0x0004badf) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xfe66,	// (0x0004badf) list_double_large_graphic_phob2_cc_pane_g

0x3945,	// (0x0003f5be) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x3945,	// (0x0003f5be) list_double_large_graphic_phob2_cc_pane_t1

0x396e,	// (0x0003f5e7) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x396e,	// (0x0003f5e7) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xfe71,	// (0x0004baea) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xfe71,	// (0x0004baea) list_double_large_graphic_phob2_cc_pane_t

0x03b5,	// (0x0003c02e) list_highlight_pane_cp025_ParamLimits

0x03b5,	// (0x0003c02e) list_highlight_pane_cp025

0x1055,	// (0x0003ccce) bg_button_pane_cp033_ParamLimits

0x02fd,	// (0x0003bf76) phob2_cc_button_pane_g1_ParamLimits

0x0309,	// (0x0003bf82) phob2_cc_button_pane_t1_ParamLimits

0x031e,	// (0x0003bf97) phob2_cc_button_pane_t2_ParamLimits

0xfe61,	// (0x0004bada) phob2_cc_button_pane_t_ParamLimits

0x3bd0,	// (0x0003f849) popup_wgtman_window

0xd081,	// (0x00048cfa) scroll_pane_cp038

0xb6b9,	// (0x00047332) wgtman_btn_pane_cp_01_ParamLimits

0xb6b9,	// (0x00047332) wgtman_btn_pane_cp_01

0x03c3,	// (0x0003c03c) wgtman_content_pane

0x03cc,	// (0x0003c045) wgtman_heading_pane

0x09ad,	// (0x0003c626) bg_heading_pane_cp02

0x03d5,	// (0x0003c04e) wgtman_heading_pane_g1

0x03dd,	// (0x0003c056) wgtman_heading_pane_t1

0x03eb,	// (0x0003c064) scroll_pane_cp036

0x03f3,	// (0x0003c06c) wgtman_list_pane

0x03fb,	// (0x0003c074) wgtman_list_pane_t1_ParamLimits

0x03fb,	// (0x0003c074) wgtman_list_pane_t1

0xeec6,	// (0x0004ab3f) cam4_grid_pane

0x3366,	// (0x0003efdf) bg_button_pane_cp015_ParamLimits

0x9aea,	// (0x00045763) bg_button_pane_cp016_ParamLimits

0x9afd,	// (0x00045776) bg_button_pane_cp017_ParamLimits

0x33aa,	// (0x0003f023) popup_vitu2_query_window_g3_ParamLimits

0x33aa,	// (0x0003f023) popup_vitu2_query_window_g3

0x3425,	// (0x0003f09e) popup_vitu2_query_window_t6_ParamLimits

0x3425,	// (0x0003f09e) popup_vitu2_query_window_t6

0x3450,	// (0x0003f0c9) popup_vitu2_query_window_t7_ParamLimits

0x3450,	// (0x0003f0c9) popup_vitu2_query_window_t7

0x0416,	// (0x0003c08f) cam4_grid_pane_g1

0x041f,	// (0x0003c098) cam4_grid_pane_g2

0x0428,	// (0x0003c0a1) cam4_grid_pane_g3

0x0431,	// (0x0003c0aa) cam4_grid_pane_g4

0x0003,

0xfe76,	// (0x0004baef) cam4_grid_pane_g

0x478f,	// (0x00040408) aid_placing_vt_slider_lsc_ParamLimits

0x4a8c,	// (0x00040705) vidtel_button_pane_ParamLimits

0x4a8c,	// (0x00040705) vidtel_button_pane

0x09ad,	// (0x0003c626) bg_button_pane_cp034

0x043c,	// (0x0003c0b5) vidtel_button_pane_g1

0x0444,	// (0x0003c0bd) vidtel_button_pane_t1

0xd1b7,	// (0x00048e30) aid_size_vtel_slider_touch

0xd270,	// (0x00048ee9) scroll_pane_cp039

0xa75d,	// (0x000463d6) ncim_query_button_pane_cp01_ParamLimits

0xa77c,	// (0x000463f5) ncimui_query_pane_g1_ParamLimits

0x1055,	// (0x0003ccce) input_focus_pane_cp012_ParamLimits

0xdb5a,	// (0x000497d3) ncim_query_entry_pane_t1_ParamLimits

0xd270,	// (0x00048ee9) scroll_pane_cp039_ParamLimits

0x1baa,	// (0x0003d823) navi_pane_bcale_mc_g1

0x1bb2,	// (0x0003d82b) navi_pane_bcale_mc_t1

0xe0d6,	// (0x00049d4f) main_sp_fs_email_pane_g1

0xe0e2,	// (0x00049d5b) main_sp_fs_email_pane_g2

0x0001,

0xfc79,	// (0x0004b8f2) main_sp_fs_email_pane_g

0xe581,	// (0x0004a1fa) list_single_cale_mrui_row_pane_g3_ParamLimits

0xe581,	// (0x0004a1fa) list_single_cale_mrui_row_pane_g3

0x386b,	// (0x0003f4e4) list_single_recal_day_pane_g5_event_pane

0xe760,	// (0x0004a3d9) list_single_recal_day_pane_g7

0x045a,	// (0x0003c0d3) list_recal_day_event_pane_cp01

0x0463,	// (0x0003c0dc) list_recal_vselct_arw_lo_pane_cp01

0x046b,	// (0x0003c0e4) list_recal_vselct_arw_up_pane_cp01

0x0473,	// (0x0003c0ec) list_recal_vselct_pane_cp01

0xd1c7,	// (0x00048e40) list_recal_day_event_pane_cp01_g1

0xebfe,	// (0x0004a877) list_recal_day_event_pane_cp01_t1

0xe768,	// (0x0004a3e1) list_single_recal_day_pane_t1_ParamLimits

0xe77a,	// (0x0004a3f3) list_single_recal_day_pane_t2_ParamLimits

0xfd59,	// (0x0004b9d2) list_single_recal_day_pane_t_ParamLimits

0x1033,	// (0x0003ccac) bg_notes_pane_ParamLimits

0x10fe,	// (0x0003cd77) list_notes_pane_ParamLimits

0x3dd7,	// (0x0003fa50) scroll_pane_cp06_ParamLimits

0x1120,	// (0x0003cd99) main_notes_pane_ParamLimits

0x1055,	// (0x0003ccce) main_welc_pane

0xbc9c,	// (0x00047915) main_welc_body_pane_ParamLimits

0xbc9c,	// (0x00047915) main_welc_body_pane

0xbcb9,	// (0x00047932) main_welc_opti_pane_ParamLimits

0xbcb9,	// (0x00047932) main_welc_opti_pane

0xbd2d,	// (0x000479a6) main_welc_pane_t1_ParamLimits

0xbd2d,	// (0x000479a6) main_welc_pane_t1

0xbe93,	// (0x00047b0c) main_welc_body_row_pane_ParamLimits

0xbe93,	// (0x00047b0c) main_welc_body_row_pane

0x09b7,	// (0x0003c630) main_welc_opti_row_pane_ParamLimits

0x09b7,	// (0x0003c630) main_welc_opti_row_pane

0x0647,	// (0x0003c2c0) main_welc_opti_row_pane_g1

0xbea8,	// (0x00047b21) main_welc_opti_row_pane_t1

0x065e,	// (0x0003c2d7) main_welc_body_row_pane_t1

0xea10,	// (0x0004a689) popup_notif_wgt_heading_pane

0xea2a,	// (0x0004a6a3) aid_size_list_notif_wgt_del_ParamLimits

0xea37,	// (0x0004a6b0) list_notif_wgt_row_pane_g1_ParamLimits

0xea43,	// (0x0004a6bc) list_notif_wgt_row_pane_g2_ParamLimits

0xea52,	// (0x0004a6cb) list_notif_wgt_row_pane_g3_ParamLimits

0xfdc0,	// (0x0004ba39) list_notif_wgt_row_pane_g_ParamLimits

0xea5f,	// (0x0004a6d8) list_notif_wgt_row_pane_t1_ParamLimits

0xea75,	// (0x0004a6ee) list_notif_wgt_row_pane_t2_ParamLimits

0xea87,	// (0x0004a700) list_notif_wgt_row_pane_t3_ParamLimits

0xfdc7,	// (0x0004ba40) list_notif_wgt_row_pane_t_ParamLimits

0xb753,	// (0x000473cc) listrow_wgtman_pane_g1_ParamLimits

0xb760,	// (0x000473d9) listrow_wgtman_pane_g2_ParamLimits

0xfdf7,	// (0x0004ba70) listrow_wgtman_pane_g_ParamLimits

0x3875,	// (0x0003f4ee) listrow_wgtman_pane_t1_ParamLimits

0x388d,	// (0x0003f506) listrow_wgtman_pane_t2_ParamLimits

0xfdfc,	// (0x0004ba75) listrow_wgtman_pane_t_ParamLimits

0x38b3,	// (0x0003f52c) wait_bar_pane_cp09_ParamLimits

0x09ad,	// (0x0003c626) bg_popup_heading_pane_cp02

0x066d,	// (0x0003c2e6) popup_notif_wgt_heading_pane_g1

0x0675,	// (0x0003c2ee) popup_notif_wgt_heading_pane_t1

0x09ad,	// (0x0003c626) main_vids_pane

0x09ad,	// (0x0003c626) vids_listscroll_pane

0xbeb7,	// (0x00047b30) scroll_pane_cp040

0x09ad,	// (0x0003c626) vids_list_pane

0xbec2,	// (0x00047b3b) vids_list_double_pane_ParamLimits

0xbec2,	// (0x00047b3b) vids_list_double_pane

0xbed3,	// (0x00047b4c) vids_list_double_pane_g1

0xbedc,	// (0x00047b55) vids_list_double_pane_t1

0xbeeb,	// (0x00047b64) vids_list_double_pane_t2

0x0001,

0xfe95,	// (0x0004bb0e) vids_list_double_pane_t

0x1055,	// (0x0003ccce) main_ncimui_pane_ParamLimits

0xa593,	// (0x0004620c) main_ncimui_pane_g1_ParamLimits

0xa59f,	// (0x00046218) main_ncimui_pane_g2_ParamLimits

0xa59f,	// (0x00046218) main_ncimui_pane_g2

0x0001,

0xfb7a,	// (0x0004b7f3) main_ncimui_pane_g_ParamLimits

0xfb7a,	// (0x0004b7f3) main_ncimui_pane_g

0xbcd4,	// (0x0004794d) main_welc_pane_g1_ParamLimits

0xbcd4,	// (0x0004794d) main_welc_pane_g1

0xbce9,	// (0x00047962) main_welc_pane_g2_ParamLimits

0xbce9,	// (0x00047962) main_welc_pane_g2

0x0003,

0xfe7f,	// (0x0004baf8) main_welc_pane_g_ParamLimits

0xfe7f,	// (0x0004baf8) main_welc_pane_g

0x1033,	// (0x0003ccac) listscroll_mce_pane_ParamLimits

0x1cff,	// (0x0003d978) wait_bar_pane_cp10

0x71b4,	// (0x00042e2d) main_cale_day_pane_ParamLimits

0x71b4,	// (0x00042e2d) main_cale_week_pane_ParamLimits

0x1033,	// (0x0003ccac) main_messa_pane_ParamLimits

0x8313,	// (0x00043f8c) main_clock2_btn_pane_ParamLimits

0x8313,	// (0x00043f8c) main_clock2_btn_pane

0xc9eb,	// (0x00048664) main_clock2_btn_pane_cp01_ParamLimits

0xc9eb,	// (0x00048664) main_clock2_btn_pane_cp01

0xe50d,	// (0x0004a186) list_cale_mrui_pane_ParamLimits

0xeabd,	// (0x0004a736) main_cf0_pane_g2

0x0001,

0xfdce,	// (0x0004ba47) main_cf0_pane_g

0xb959,	// (0x000475d2) area_left_week_number_pane_ParamLimits

0xb965,	// (0x000475de) area_top_day_name_pane_ParamLimits

0xb978,	// (0x000475f1) frame_month_view_pane_ParamLimits

0xebd6,	// (0x0004a84f) grid_month_view_pane_ParamLimits

0xebe4,	// (0x0004a85d) frm_month_g1_ParamLimits

0xb9f9,	// (0x00047672) frm_month_g2_ParamLimits

0xba0c,	// (0x00047685) frm_month_g3_ParamLimits

0xba1f,	// (0x00047698) frm_month_g4_ParamLimits

0xba32,	// (0x000476ab) frm_month_g5_ParamLimits

0xba45,	// (0x000476be) frm_month_g6_ParamLimits

0xba58,	// (0x000476d1) frm_month_g7_ParamLimits

0xebf1,	// (0x0004a86a) frm_month_g8_ParamLimits

0xba6b,	// (0x000476e4) frm_month_g9_ParamLimits

0xba7b,	// (0x000476f4) frm_month_g10_ParamLimits

0xba8b,	// (0x00047704) frm_month_g11_ParamLimits

0xba9b,	// (0x00047714) frm_month_g12_ParamLimits

0xbaad,	// (0x00047726) frm_month_g13_ParamLimits

0xbabf,	// (0x00047738) frm_month_g14_ParamLimits

0xbad3,	// (0x0004774c) frm_month_g15_ParamLimits

0xbae7,	// (0x00047760) frm_month_g16_ParamLimits

0xfe26,	// (0x0004ba9f) frm_month_g_ParamLimits

0x01ad,	// (0x0003be26) cell_top_day_name_pane_t1_ParamLimits

0xbafb,	// (0x00047774) cell_area_left_week_number_pane_g1_ParamLimits

0xbb07,	// (0x00047780) cell_area_left_week_number_pane_t1_ParamLimits

0x10ae,	// (0x0003cd27) cell_month_view_pane_g1_ParamLimits

0xbb1a,	// (0x00047793) cell_month_view_pane_t1_ParamLimits

0x102b,	// (0x0003cca4) main_clock2_btn_pane_g1

0x06cd,	// (0x0003c346) main_clock2_btn_pane_t1

0x1055,	// (0x0003ccce) listscroll_cmail_pane_ParamLimits

0xe0d6,	// (0x00049d4f) main_sp_fs_email_pane_g1_ParamLimits

0xe0e2,	// (0x00049d5b) main_sp_fs_email_pane_g2_ParamLimits

0xfc79,	// (0x0004b8f2) main_sp_fs_email_pane_g_ParamLimits

0xe6d0,	// (0x0004a349) list_recal_day_pane_ParamLimits

0xe6e1,	// (0x0004a35a) mian_recal_day_pane_t1

0x36b7,	// (0x0003f330) list_single_dyc_row_text_pane_t4_ParamLimits

0x36b7,	// (0x0003f330) list_single_dyc_row_text_pane_t4

0x3700,	// (0x0003f379) list_single_dyc_row_text_pane_t5_ParamLimits

0x3700,	// (0x0003f379) list_single_dyc_row_text_pane_t5

0xe184,	// (0x00049dfd) list_single_dyc_row_text_pane_t6_ParamLimits

0xe184,	// (0x00049dfd) list_single_dyc_row_text_pane_t6

0x5510,	// (0x00041189) aid_mgn_list_cale_time_pane

0x1055,	// (0x0003ccce) main_gallery2_pane_ParamLimits

0xca01,	// (0x0004867a) main_clock2_pane_cp01_t1

0xca0f,	// (0x00048688) main_clock2_pane_cp01_t3

0x0001,

0xf75f,	// (0x0004b3d8) main_clock2_pane_cp01_t

0x417c,	// (0x0003fdf5) cale_week_scroll_pane_g16_ParamLimits

0x417c,	// (0x0003fdf5) cale_week_scroll_pane_g16

0x12d2,	// (0x0003cf4b) vorec_slider_pane

0x0444,	// (0x0003c0bd) vidtel_button_pane_t1_ParamLimits

0xb324,	// (0x00046f9d) main_fs_bigclock_clock_pane_g1_ParamLimits

0xb324,	// (0x00046f9d) main_fs_bigclock_clock_pane_g2_ParamLimits

0xb335,	// (0x00046fae) main_fs_bigclock_clock_pane_g3_ParamLimits

0xb335,	// (0x00046fae) main_fs_bigclock_clock_pane_g4_ParamLimits

0xfd7c,	// (0x0004b9f5) main_fs_bigclock_clock_pane_g_ParamLimits

0xb348,	// (0x00046fc1) main_fs_bigclock_clock_pane_t1_ParamLimits

0xb35e,	// (0x00046fd7) main_fs_bigclock_clock_pane_t2_ParamLimits

0xfd85,	// (0x0004b9fe) main_fs_bigclock_clock_pane_t_ParamLimits

0x7bef,	// (0x00043868) main_mup3_lyrics_pane_ParamLimits

0x7bef,	// (0x00043868) main_mup3_lyrics_pane

0xbf21,	// (0x00047b9a) main_mup3_lyrics_pane_t1_ParamLimits

0xbf21,	// (0x00047b9a) main_mup3_lyrics_pane_t1

0xce2e,	// (0x00048aa7) aid_main_mp4_pane_t1_area

0xce38,	// (0x00048ab1) aid_main_mp4_pane_t2_area

0xecce,	// (0x0004a947) main_mp4_pane_g7_ParamLimits

0xecce,	// (0x0004a947) main_mp4_pane_g7

0xecda,	// (0x0004a953) main_mp4_pane_g8_ParamLimits

0xecda,	// (0x0004a953) main_mp4_pane_g8

0x8cd2,	// (0x0004494b) aid_call6_pane_g1_size

0xbc5d,	// (0x000478d6) list_double_large_graphic_phob2_other_pane_ParamLimits

0xbc5d,	// (0x000478d6) list_double_large_graphic_phob2_other_pane

0x1adb,	// (0x0003d754) list_double_large_graphic_phob2_other_pane_g1

0x09ad,	// (0x0003c626) list_highlight_pane_cp026

0x1055,	// (0x0003ccce) main_welc_pane_ParamLimits

0xad7a,	// (0x000469f3) main_sp_fs_ctrlbar_pane_g3_ParamLimits

0xad7a,	// (0x000469f3) main_sp_fs_ctrlbar_pane_g3

0xad94,	// (0x00046a0d) main_sp_fs_ctrlbar_pane_g4_ParamLimits

0xad94,	// (0x00046a0d) main_sp_fs_ctrlbar_pane_g4

0xadc8,	// (0x00046a41) toolbar2_fixed_button_pane_cp01

0xadd3,	// (0x00046a4c) toolbar2_fixed_button_pane_cp02

0xade0,	// (0x00046a59) toolbar2_fixed_button_pane_cp03

0xbc80,	// (0x000478f9) list_welc_entry_pane_ParamLimits

0xbc80,	// (0x000478f9) list_welc_entry_pane

0xbcfe,	// (0x00047977) main_welc_pane_g3_ParamLimits

0xbcfe,	// (0x00047977) main_welc_pane_g3

0xbd4b,	// (0x000479c4) main_welc_pane_t2_ParamLimits

0xbd4b,	// (0x000479c4) main_welc_pane_t2

0xbd65,	// (0x000479de) main_welc_pane_t3_ParamLimits

0xbd65,	// (0x000479de) main_welc_pane_t3

0x0005,

0xfe88,	// (0x0004bb01) main_welc_pane_t_ParamLimits

0xfe88,	// (0x0004bb01) main_welc_pane_t

0xbe17,	// (0x00047a90) welc_button_pane_ParamLimits

0xbe17,	// (0x00047a90) welc_button_pane

0xbe7f,	// (0x00047af8) welc_service_logo_pane_ParamLimits

0xbe7f,	// (0x00047af8) welc_service_logo_pane

0xbf3d,	// (0x00047bb6) list_single_welc_entry_pane_ParamLimits

0xbf3d,	// (0x00047bb6) list_single_welc_entry_pane

0xbf4e,	// (0x00047bc7) list_single_welc_entry_pane_g1

0xbf56,	// (0x00047bcf) list_single_welc_entry_pane_t1

0xbf64,	// (0x00047bdd) list_single_welc_entry_pane_t2

0x0001,

0xfe9a,	// (0x0004bb13) list_single_welc_entry_pane_t

0x09ad,	// (0x0003c626) bg_button_pane_cp035

0x076c,	// (0x0003c3e5) welc_button_pane_t1

0x077a,	// (0x0003c3f3) welc_service_logo_pane_g1

0x0783,	// (0x0003c3fc) welc_service_logo_pane_g2

0x0001,

0xfe9f,	// (0x0004bb18) welc_service_logo_pane_g

0x09ad,	// (0x0003c626) main_int_radio_pane

0xd9f8,	// (0x00049671) list_single_fs_dyc_pane_g1

0x38d1,	// (0x0003f54a) list_double_large_graphic_phob2_pane_g3_ParamLimits

0x38d1,	// (0x0003f54a) list_double_large_graphic_phob2_pane_g3

0x38dd,	// (0x0003f556) list_double_large_graphic_phob2_pane_g4_ParamLimits

0x38dd,	// (0x0003f556) list_double_large_graphic_phob2_pane_g4

0xbf72,	// (0x00047beb) main_int_radio1_pane_ParamLimits

0xbf72,	// (0x00047beb) main_int_radio1_pane

0x079e,	// (0x0003c417) find_pane_cp02

0xbf8f,	// (0x00047c08) input_focus_pane_cp12_ParamLimits

0xbf8f,	// (0x00047c08) input_focus_pane_cp12

0xbf9f,	// (0x00047c18) input_focus_pane_cp13_ParamLimits

0xbf9f,	// (0x00047c18) input_focus_pane_cp13

0xbfb3,	// (0x00047c2c) input_focus_pane_cp14_ParamLimits

0xbfb3,	// (0x00047c2c) input_focus_pane_cp14

0x07e3,	// (0x0003c45c) int_radio1_listscroll_pane

0xbfc7,	// (0x00047c40) main_int_radio1_pane_g1_ParamLimits

0xbfc7,	// (0x00047c40) main_int_radio1_pane_g1

0xbfdf,	// (0x00047c58) main_int_radio1_pane_t1_ParamLimits

0xbfdf,	// (0x00047c58) main_int_radio1_pane_t1

0xbffa,	// (0x00047c73) main_int_radio1_pane_t2_ParamLimits

0xbffa,	// (0x00047c73) main_int_radio1_pane_t2

0xc015,	// (0x00047c8e) main_int_radio1_pane_t3_ParamLimits

0xc015,	// (0x00047c8e) main_int_radio1_pane_t3

0xc030,	// (0x00047ca9) main_int_radio1_pane_t4_ParamLimits

0xc030,	// (0x00047ca9) main_int_radio1_pane_t4

0x0850,	// (0x0003c4c9) main_int_radio1_pane_t5_ParamLimits

0x0850,	// (0x0003c4c9) main_int_radio1_pane_t5

0xc042,	// (0x00047cbb) main_int_radio1_pane_t6_ParamLimits

0xc042,	// (0x00047cbb) main_int_radio1_pane_t6

0xc057,	// (0x00047cd0) main_int_radio1_pane_t7_ParamLimits

0xc057,	// (0x00047cd0) main_int_radio1_pane_t7

0xc06c,	// (0x00047ce5) main_int_radio1_pane_t8_ParamLimits

0xc06c,	// (0x00047ce5) main_int_radio1_pane_t8

0xc08b,	// (0x00047d04) main_int_radio1_pane_t9_ParamLimits

0xc08b,	// (0x00047d04) main_int_radio1_pane_t9

0xc09d,	// (0x00047d16) main_int_radio1_pane_t10_ParamLimits

0xc09d,	// (0x00047d16) main_int_radio1_pane_t10

0xc0c3,	// (0x00047d3c) main_int_radio1_pane_t11_ParamLimits

0xc0c3,	// (0x00047d3c) main_int_radio1_pane_t11

0xc0e9,	// (0x00047d62) main_int_radio1_pane_t12_ParamLimits

0xc0e9,	// (0x00047d62) main_int_radio1_pane_t12

0x000b,

0xfea4,	// (0x0004bb1d) main_int_radio1_pane_t_ParamLimits

0xfea4,	// (0x0004bb1d) main_int_radio1_pane_t

0x0925,	// (0x0003c59e) int_radio_list_pane

0x0243,	// (0x0003bebc) scroll_pane_cp037

0x092d,	// (0x0003c5a6) list_double_large_graphic_int_radio_pane_ParamLimits

0x092d,	// (0x0003c5a6) list_double_large_graphic_int_radio_pane

0x0946,	// (0x0003c5bf) list_double_large_graphic_int_radio_pane_g1

0xec0c,	// (0x0004a885) list_double_large_graphic_int_radio_pane_t1

0xec1a,	// (0x0004a893) list_double_large_graphic_int_radio_pane_t2

0x0001,

0xfebd,	// (0x0004bb36) list_double_large_graphic_int_radio_pane_t

0x09ad,	// (0x0003c626) list_highlight_pane_cp027

0x048c,	// (0x0003c105) main_button_pane_4

0xbd0e,	// (0x00047987) main_welc_pane_g4_ParamLimits

0xbd0e,	// (0x00047987) main_welc_pane_g4

0xbd7d,	// (0x000479f6) main_welc_pane_t4_ParamLimits

0xbd7d,	// (0x000479f6) main_welc_pane_t4

0xbd92,	// (0x00047a0b) main_welc_pane_t5_ParamLimits

0xbd92,	// (0x00047a0b) main_welc_pane_t5

0xbddc,	// (0x00047a55) main_welc_pane_t6_ParamLimits

0xbddc,	// (0x00047a55) main_welc_pane_t6

0xbe2e,	// (0x00047aa7) welc_button_pane_2_ParamLimits

0xbe2e,	// (0x00047aa7) welc_button_pane_2

0xbe4a,	// (0x00047ac3) welc_button_pane_3_ParamLimits

0xbe4a,	// (0x00047ac3) welc_button_pane_3

0x048c,	// (0x0003c105) welc_button_pane_4

0xbe69,	// (0x00047ae2) welc_button_pane_5_ParamLimits

0xbe69,	// (0x00047ae2) welc_button_pane_5

0x71d4,	// (0x00042e4d) main_popup_welc_pane

0x094f,	// (0x0003c5c8) main_welc_sk_g3

0x0959,	// (0x0003c5d2) main_welc_sk_g4

0x0963,	// (0x0003c5dc) main_welc_sk_t3

0x0973,	// (0x0003c5ec) main_welc_sk_t4

0x0983,	// (0x0003c5fc) popup_welc_pane_t4

0x0991,	// (0x0003c60a) popup_welc_pane_t5

0x099f,	// (0x0003c618) popup_welc_pane_t6
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

} // end of namespace AknLayoutScalable_Elaf_pnl4_apps_nhd4_lsc_tch_Small
