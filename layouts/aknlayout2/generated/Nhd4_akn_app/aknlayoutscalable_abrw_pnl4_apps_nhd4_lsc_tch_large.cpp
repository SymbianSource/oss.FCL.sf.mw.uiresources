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
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pnp4_apps_nhd4_prt_tch + 0x0008e432 };

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
0x0e03,	// (0x0008f235) Screen

0x0e0f,	// (0x0008f241) application_window

0x0e81,	// (0x0008f2b3) area_bottom_pane_ParamLimits

0x0e81,	// (0x0008f2b3) area_bottom_pane

0x0ede,	// (0x0008f310) area_top_pane_ParamLimits

0x0ede,	// (0x0008f310) area_top_pane

0xa028,	// (0x0009845a) call_video_uplink_pane_ParamLimits

0xa028,	// (0x0009845a) call_video_uplink_pane

0x0f53,	// (0x0008f385) main_pane_ParamLimits

0x0f53,	// (0x0008f385) main_pane

0x47ca,	// (0x00092bfc) context_pane

0x47dd,	// (0x00092c0f) navi_pane

0x4805,	// (0x00092c37) popup_cale_events_window_ParamLimits

0x4805,	// (0x00092c37) popup_cale_events_window

0x481d,	// (0x00092c4f) popup_mup_playback_window

0x4825,	// (0x00092c57) signal_pane

0xa7fb,	// (0x00098c2d) main_browser_pane

0xe349,	// (0x0009c77b) main_burst_pane

0x44dd,	// (0x0009290f) main_calc_pane

0xe349,	// (0x0009c77b) main_cale_day_pane

0xa7fb,	// (0x00098c2d) main_cale_month_pane

0xe349,	// (0x0009c77b) main_cale_week_pane

0xe349,	// (0x0009c77b) main_call_pane

0xa465,	// (0x00098897) main_call_poc_pane

0xe349,	// (0x0009c77b) main_camera_pane

0xe349,	// (0x0009c77b) main_chi_dic_pane

0xe1d8,	// (0x0009c60a) main_clock_pane

0xa465,	// (0x00098897) main_fmradio_pane

0xe349,	// (0x0009c77b) main_graph_messa_pane

0xa465,	// (0x00098897) main_help_pane

0xa7fb,	// (0x00098c2d) main_im_pane

0xa6c0,	// (0x00098af2) main_image_pane_ParamLimits

0xa6c0,	// (0x00098af2) main_image_pane

0xa465,	// (0x00098897) main_location2_pane

0xe349,	// (0x0009c77b) main_location_pane

0xa465,	// (0x00098897) main_messa_pane

0xa465,	// (0x00098897) main_mp2_pane

0xe349,	// (0x0009c77b) main_mp_pane

0xa465,	// (0x00098897) main_msg_pane

0xa465,	// (0x00098897) main_mup_eq_pane

0xa465,	// (0x00098897) main_mup_pane

0xe349,	// (0x0009c77b) main_notes_pane

0xa465,	// (0x00098897) main_pec_pane

0xa465,	// (0x00098897) main_phob_pane

0xa465,	// (0x00098897) main_pinb_pane

0xa465,	// (0x00098897) main_postcard_pane

0xa465,	// (0x00098897) main_qdial_pane

0xe349,	// (0x0009c77b) main_skin_pane

0xa465,	// (0x00098897) main_smil2_pane

0xe349,	// (0x0009c77b) main_smil_pane

0xe349,	// (0x0009c77b) main_video_pane

0xe349,	// (0x0009c77b) main_video_tele_pane

0xa6c0,	// (0x00098af2) main_viewer_pane_ParamLimits

0xa6c0,	// (0x00098af2) main_viewer_pane

0xe349,	// (0x0009c77b) main_vorec_pane

0x4547,	// (0x00092979) popup_blid_sat_info_window_ParamLimits

0x4547,	// (0x00092979) popup_blid_sat_info_window

0x45a9,	// (0x000929db) popup_dyc_status_message_window_ParamLimits

0x45a9,	// (0x000929db) popup_dyc_status_message_window

0x45c1,	// (0x000929f3) popup_grid_large_graphic_window_ParamLimits

0x45c1,	// (0x000929f3) popup_grid_large_graphic_window

0x4692,	// (0x00092ac4) popup_loc_request_window_ParamLimits

0x4692,	// (0x00092ac4) popup_loc_request_window

0x47a2,	// (0x00092bd4) popup_wml_address_window_ParamLimits

0x47a2,	// (0x00092bd4) popup_wml_address_window

0x42de,	// (0x00092710) call_muted_g1

0x3948,	// (0x00091d7a) popup_call_audio_conf_window_ParamLimits

0x3948,	// (0x00091d7a) popup_call_audio_conf_window

0x42f2,	// (0x00092724) popup_call_audio_first_window_ParamLimits

0x42f2,	// (0x00092724) popup_call_audio_first_window

0x4368,	// (0x0009279a) popup_call_audio_in_window_ParamLimits

0x4368,	// (0x0009279a) popup_call_audio_in_window

0x43a4,	// (0x000927d6) popup_call_audio_out_window_ParamLimits

0x43a4,	// (0x000927d6) popup_call_audio_out_window

0x43de,	// (0x00092810) popup_call_audio_second_window_ParamLimits

0x43de,	// (0x00092810) popup_call_audio_second_window

0x4434,	// (0x00092866) popup_call_audio_wait_window_ParamLimits

0x4434,	// (0x00092866) popup_call_audio_wait_window

0x4469,	// (0x0009289b) popup_number_entry_window_ParamLimits

0x4469,	// (0x0009289b) popup_number_entry_window

0xa054,	// (0x00098486) bg_popup_call_pane_cp05_ParamLimits

0xa054,	// (0x00098486) bg_popup_call_pane_cp05

0xa074,	// (0x000984a6) popup_number_entry_window_t1

0xa087,	// (0x000984b9) popup_number_entry_window_t2

0xa099,	// (0x000984cb) popup_number_entry_window_t3

0x0003,

0xf0ec,	// (0x0009d51e) popup_number_entry_window_t

0xa0ab,	// (0x000984dd) text_title_cp2

0xa0be,	// (0x000984f0) bg_popup_call_pane_cp_ParamLimits

0xa0be,	// (0x000984f0) bg_popup_call_pane_cp

0xa0cc,	// (0x000984fe) call_thumbnail_pane

0xa0d4,	// (0x00098506) popup_call_audio_in_window_g1_ParamLimits

0xa0d4,	// (0x00098506) popup_call_audio_in_window_g1

0xa0e0,	// (0x00098512) popup_call_audio_in_window_g2_ParamLimits

0xa0e0,	// (0x00098512) popup_call_audio_in_window_g2

0xa0ec,	// (0x0009851e) popup_call_audio_in_window_g3_ParamLimits

0xa0ec,	// (0x0009851e) popup_call_audio_in_window_g3

0x0002,

0xf0f5,	// (0x0009d527) popup_call_audio_in_window_g_ParamLimits

0xf0f5,	// (0x0009d527) popup_call_audio_in_window_g

0xa0f8,	// (0x0009852a) popup_call_audio_in_window_t1_ParamLimits

0xa0f8,	// (0x0009852a) popup_call_audio_in_window_t1

0xa113,	// (0x00098545) popup_call_audio_in_window_t2_ParamLimits

0xa113,	// (0x00098545) popup_call_audio_in_window_t2

0xa12e,	// (0x00098560) popup_call_audio_in_window_t3_ParamLimits

0xa12e,	// (0x00098560) popup_call_audio_in_window_t3

0x0002,

0xf0fc,	// (0x0009d52e) popup_call_audio_in_window_t_ParamLimits

0xf0fc,	// (0x0009d52e) popup_call_audio_in_window_t

0xa0be,	// (0x000984f0) bg_popup_call_pane_cp01_ParamLimits

0xa0be,	// (0x000984f0) bg_popup_call_pane_cp01

0xa0cc,	// (0x000984fe) call_thumbnail_pane_cp02

0xa141,	// (0x00098573) call_type_pane_cp022

0xa149,	// (0x0009857b) popup_call_audio_out_window_g1_ParamLimits

0xa149,	// (0x0009857b) popup_call_audio_out_window_g1

0xa15b,	// (0x0009858d) popup_call_audio_out_window_g2_ParamLimits

0xa15b,	// (0x0009858d) popup_call_audio_out_window_g2

0xa167,	// (0x00098599) popup_call_audio_out_window_g3_ParamLimits

0xa167,	// (0x00098599) popup_call_audio_out_window_g3

0x0002,

0xf103,	// (0x0009d535) popup_call_audio_out_window_g_ParamLimits

0xf103,	// (0x0009d535) popup_call_audio_out_window_g

0xa179,	// (0x000985ab) popup_call_audio_out_window_t1_ParamLimits

0xa179,	// (0x000985ab) popup_call_audio_out_window_t1

0xa191,	// (0x000985c3) popup_call_audio_out_window_t2_ParamLimits

0xa191,	// (0x000985c3) popup_call_audio_out_window_t2

0x0001,

0xf10a,	// (0x0009d53c) popup_call_audio_out_window_t_ParamLimits

0xf10a,	// (0x0009d53c) popup_call_audio_out_window_t

0xa1a6,	// (0x000985d8) bg_popup_call_pane_ParamLimits

0xa1a6,	// (0x000985d8) bg_popup_call_pane

0x10fe,	// (0x0008f530) call_thumbnail_pane_cp_ParamLimits

0x10fe,	// (0x0008f530) call_thumbnail_pane_cp

0xa22a,	// (0x0009865c) call_type_pane_cp01_ParamLimits

0xa22a,	// (0x0009865c) call_type_pane_cp01

0xa26e,	// (0x000986a0) popup_call_audio_first_window_g1_ParamLimits

0xa26e,	// (0x000986a0) popup_call_audio_first_window_g1

0xa2ba,	// (0x000986ec) popup_call_audio_first_window_g2_ParamLimits

0xa2ba,	// (0x000986ec) popup_call_audio_first_window_g2

0x0001,

0xf10f,	// (0x0009d541) popup_call_audio_first_window_g_ParamLimits

0xf10f,	// (0x0009d541) popup_call_audio_first_window_g

0xa2fe,	// (0x00098730) popup_call_audio_first_window_t1_ParamLimits

0xa2fe,	// (0x00098730) popup_call_audio_first_window_t1

0xa3aa,	// (0x000987dc) popup_call_audio_first_window_t4_ParamLimits

0xa3aa,	// (0x000987dc) popup_call_audio_first_window_t4

0xa436,	// (0x00098868) popup_call_audio_first_window_t5_ParamLimits

0xa436,	// (0x00098868) popup_call_audio_first_window_t5

0x0002,

0xf114,	// (0x0009d546) popup_call_audio_first_window_t_ParamLimits

0xf114,	// (0x0009d546) popup_call_audio_first_window_t

0xa465,	// (0x00098897) bg_popup_call_pane_cp02

0xa46f,	// (0x000988a1) call_type_pane_cp023

0xa477,	// (0x000988a9) popup_call_audio_wait_window_g1

0xa47f,	// (0x000988b1) popup_call_audio_wait_window_g2

0x0001,

0xf11b,	// (0x0009d54d) popup_call_audio_wait_window_g

0xa487,	// (0x000988b9) popup_call_audio_wait_window_t3

0xa495,	// (0x000988c7) bg_popup_call_pane_cp03_ParamLimits

0xa495,	// (0x000988c7) bg_popup_call_pane_cp03

0xa4f5,	// (0x00098927) call_thumbnail_pane_cp011_ParamLimits

0xa4f5,	// (0x00098927) call_thumbnail_pane_cp011

0xa501,	// (0x00098933) call_type_pane_cp034_ParamLimits

0xa501,	// (0x00098933) call_type_pane_cp034

0xa53d,	// (0x0009896f) popup_call_audio_second_window_g1_ParamLimits

0xa53d,	// (0x0009896f) popup_call_audio_second_window_g1

0xa579,	// (0x000989ab) popup_call_audio_second_window_g2_ParamLimits

0xa579,	// (0x000989ab) popup_call_audio_second_window_g2

0x0001,

0xf120,	// (0x0009d552) popup_call_audio_second_window_g_ParamLimits

0xf120,	// (0x0009d552) popup_call_audio_second_window_g

0xa5b5,	// (0x000989e7) popup_call_audio_second_window_t1_ParamLimits

0xa5b5,	// (0x000989e7) popup_call_audio_second_window_t1

0xa636,	// (0x00098a68) popup_call_audio_second_window_t2_ParamLimits

0xa636,	// (0x00098a68) popup_call_audio_second_window_t2

0xa66c,	// (0x00098a9e) popup_call_audio_second_window_t3_ParamLimits

0xa66c,	// (0x00098a9e) popup_call_audio_second_window_t3

0x0002,

0xf125,	// (0x0009d557) popup_call_audio_second_window_t_ParamLimits

0xf125,	// (0x0009d557) popup_call_audio_second_window_t

0xa465,	// (0x00098897) bg_popup_call_pane_cp04

0xa6a2,	// (0x00098ad4) list_conf_pane

0xa6aa,	// (0x00098adc) popup_call_audio_conf_window_t1

0xa6b8,	// (0x00098aea) call_thumbnail_pane_g1

0xa6c0,	// (0x00098af2) bg_pinb_pane_ParamLimits

0xa6c0,	// (0x00098af2) bg_pinb_pane

0xa6ce,	// (0x00098b00) find_pinb_pane

0xa6d7,	// (0x00098b09) listscroll_pinb_pane_ParamLimits

0xa6d7,	// (0x00098b09) listscroll_pinb_pane

0xa6e6,	// (0x00098b18) pinb_bg_pane_g1

0x1122,	// (0x0008f554) pinb_bg_pane_g2

0x112e,	// (0x0008f560) pinb_bg_pane_g3

0x113a,	// (0x0008f56c) pinb_bg_pane_g4

0x1146,	// (0x0008f578) pinb_bg_pane_g5

0x1152,	// (0x0008f584) pinb_bg_pane_g6

0x115d,	// (0x0008f58f) pinb_bg_pane_g7

0x1168,	// (0x0008f59a) pinb_bg_pane_g8

0x1173,	// (0x0008f5a5) pinb_bg_pane_g9

0x117d,	// (0x0008f5af) pinb_bg_pane_g10

0x0009,

0xf12c,	// (0x0009d55e) pinb_bg_pane_g

0x1192,	// (0x0008f5c4) grid_pinb_pane

0x119b,	// (0x0008f5cd) list_pinb_pane

0x11a4,	// (0x0008f5d6) scroll_pane_cp01_ParamLimits

0x11a4,	// (0x0008f5d6) scroll_pane_cp01

0xa6f8,	// (0x00098b2a) find_pinb_pane_g1_ParamLimits

0xa6f8,	// (0x00098b2a) find_pinb_pane_g1

0xa710,	// (0x00098b42) find_pinb_pane_t1

0xa722,	// (0x00098b54) find_pinb_pane_t2

0x0001,

0xf146,	// (0x0009d578) find_pinb_pane_t

0xa737,	// (0x00098b69) input_focus_pane_cp01_ParamLimits

0xa737,	// (0x00098b69) input_focus_pane_cp01

0x11b6,	// (0x0008f5e8) cell_pinb_pane_ParamLimits

0x11b6,	// (0x0008f5e8) cell_pinb_pane

0x11e8,	// (0x0008f61a) cell_pinb_pane_g1_ParamLimits

0x11e8,	// (0x0008f61a) cell_pinb_pane_g1

0x11f8,	// (0x0008f62a) cell_pinb_pane_g2_ParamLimits

0x11f8,	// (0x0008f62a) cell_pinb_pane_g2

0xa743,	// (0x00098b75) cell_pinb_pane_g3_ParamLimits

0xa743,	// (0x00098b75) cell_pinb_pane_g3

0x0002,

0xf14b,	// (0x0009d57d) cell_pinb_pane_g_ParamLimits

0xf14b,	// (0x0009d57d) cell_pinb_pane_g

0xa465,	// (0x00098897) grid_highlight_pane_cp01

0x1204,	// (0x0008f636) list_pinb_item_pane_ParamLimits

0x1204,	// (0x0008f636) list_pinb_item_pane

0xa465,	// (0x00098897) list_highlight_pane_cp02

0xa74f,	// (0x00098b81) list_pinb_item_pane_g1_ParamLimits

0xa74f,	// (0x00098b81) list_pinb_item_pane_g1

0xa75c,	// (0x00098b8e) list_pinb_item_pane_g2_ParamLimits

0xa75c,	// (0x00098b8e) list_pinb_item_pane_g2

0x1218,	// (0x0008f64a) list_pinb_item_pane_g3_ParamLimits

0x1218,	// (0x0008f64a) list_pinb_item_pane_g3

0xa768,	// (0x00098b9a) list_pinb_item_pane_g4_ParamLimits

0xa768,	// (0x00098b9a) list_pinb_item_pane_g4

0x0003,

0xf152,	// (0x0009d584) list_pinb_item_pane_g_ParamLimits

0xf152,	// (0x0009d584) list_pinb_item_pane_g

0xa774,	// (0x00098ba6) list_pinb_item_pane_t1_ParamLimits

0xa774,	// (0x00098ba6) list_pinb_item_pane_t1

0x1247,	// (0x0008f679) calc_display_pane

0x126f,	// (0x0008f6a1) calc_paper_pane

0x1292,	// (0x0008f6c4) grid_calc_pane

0xa465,	// (0x00098897) bg_list_pane_cp01

0x12c0,	// (0x0008f6f2) clock_g1

0x12c8,	// (0x0008f6fa) clock_g2

0x0001,

0xf15b,	// (0x0009d58d) clock_g

0x12d0,	// (0x0008f702) clock_t1_ParamLimits

0x12d0,	// (0x0008f702) clock_t1

0x12e5,	// (0x0008f717) clock_t2_ParamLimits

0x12e5,	// (0x0008f717) clock_t2

0x12f7,	// (0x0008f729) clock_t3_ParamLimits

0x12f7,	// (0x0008f729) clock_t3

0x1309,	// (0x0008f73b) clock_t4_ParamLimits

0x1309,	// (0x0008f73b) clock_t4

0x131b,	// (0x0008f74d) clock_t5_ParamLimits

0x131b,	// (0x0008f74d) clock_t5

0x1330,	// (0x0008f762) clock_t6_ParamLimits

0x1330,	// (0x0008f762) clock_t6

0x1342,	// (0x0008f774) clock_t7_ParamLimits

0x1342,	// (0x0008f774) clock_t7

0x1354,	// (0x0008f786) clock_t8_ParamLimits

0x1354,	// (0x0008f786) clock_t8

0x1368,	// (0x0008f79a) clock_t9_ParamLimits

0x1368,	// (0x0008f79a) clock_t9

0x0008,

0xf160,	// (0x0009d592) clock_t_ParamLimits

0xf160,	// (0x0009d592) clock_t

0xa793,	// (0x00098bc5) popup_clock_analogue_window_cp02

0xa793,	// (0x00098bc5) popup_clock_digital_window_cp01

0xa79b,	// (0x00098bcd) listscroll_help_pane

0xa465,	// (0x00098897) phob_pre_status_pane

0xa7a5,	// (0x00098bd7) grid_qdial_pane

0xa465,	// (0x00098897) listscroll_mce_pane

0xa7af,	// (0x00098be1) bg_notes_pane

0xa7b9,	// (0x00098beb) list_notes_pane

0x137c,	// (0x0008f7ae) scroll_pane_cp06

0xa7c3,	// (0x00098bf5) bg_calc_paper_pane

0xa7e1,	// (0x00098c13) list_calc_pane

0xa7fb,	// (0x00098c2d) bg_calc_display_pane

0x1387,	// (0x0008f7b9) calc_display_pane_t1

0x1399,	// (0x0008f7cb) calc_display_pane_t2

0xa807,	// (0x00098c39) calc_display_pane_t3

0x0002,

0xf173,	// (0x0009d5a5) calc_display_pane_t

0x13ab,	// (0x0008f7dd) cell_calc_pane_ParamLimits

0x13ab,	// (0x0008f7dd) cell_calc_pane

0xa819,	// (0x00098c4b) bg_calc_paper_pane_g1

0xa825,	// (0x00098c57) bg_calc_paper_pane_g2

0xa831,	// (0x00098c63) bg_calc_paper_pane_g3

0xa83d,	// (0x00098c6f) bg_calc_paper_pane_g4

0xa849,	// (0x00098c7b) bg_calc_paper_pane_g5

0x13e0,	// (0x0008f812) bg_calc_paper_pane_g6

0x13ef,	// (0x0008f821) bg_calc_paper_pane_g7

0x13fe,	// (0x0008f830) bg_calc_paper_pane_g8

0x0007,

0xf17a,	// (0x0009d5ac) bg_calc_paper_pane_g

0x1411,	// (0x0008f843) calc_bg_paper_pane_g9

0x1424,	// (0x0008f856) list_calc_item_pane_ParamLimits

0x1424,	// (0x0008f856) list_calc_item_pane

0xa855,	// (0x00098c87) list_calc_item_pane_g1

0xa862,	// (0x00098c94) list_calc_item_pane_t1_ParamLimits

0xa862,	// (0x00098c94) list_calc_item_pane_t1

0x143a,	// (0x0008f86c) list_calc_item_pane_t2_ParamLimits

0x143a,	// (0x0008f86c) list_calc_item_pane_t2

0x0001,

0xf18b,	// (0x0009d5bd) list_calc_item_pane_t_ParamLimits

0xf18b,	// (0x0009d5bd) list_calc_item_pane_t

0xd916,	// (0x0009bd48) cell_calc_pane_g1

0xd920,	// (0x0009bd52) grid_highlight_pane_cp02

0xd942,	// (0x0009bd74) bg_calc_display_pane_g1

0xa874,	// (0x00098ca6) bg_calc_display_pane_g2

0xd94b,	// (0x0009bd7d) bg_calc_display_pane_g3

0x0002,

0xf195,	// (0x0009d5c7) bg_calc_display_pane_g

0x146c,	// (0x0008f89e) cell_qdial_pane_ParamLimits

0x146c,	// (0x0008f89e) cell_qdial_pane

0x1480,	// (0x0008f8b2) cell_qdial_pane_g1_ParamLimits

0x1480,	// (0x0008f8b2) cell_qdial_pane_g1

0x1496,	// (0x0008f8c8) cell_qdial_pane_g2_ParamLimits

0x1496,	// (0x0008f8c8) cell_qdial_pane_g2

0xd954,	// (0x0009bd86) cell_qdial_pane_g3_ParamLimits

0xd954,	// (0x0009bd86) cell_qdial_pane_g3

0x0003,

0xf19c,	// (0x0009d5ce) cell_qdial_pane_g_ParamLimits

0xf19c,	// (0x0009d5ce) cell_qdial_pane_g

0x14bd,	// (0x0008f8ef) cell_qdial_pane_t1_ParamLimits

0x14bd,	// (0x0008f8ef) cell_qdial_pane_t1

0x14d5,	// (0x0008f907) cell_qdial_pane_t2_ParamLimits

0x14d5,	// (0x0008f907) cell_qdial_pane_t2

0x14e8,	// (0x0008f91a) cell_qdial_pane_t3_ParamLimits

0x14e8,	// (0x0008f91a) cell_qdial_pane_t3

0x0002,

0xf1a5,	// (0x0009d5d7) cell_qdial_pane_t_ParamLimits

0xf1a5,	// (0x0009d5d7) cell_qdial_pane_t

0xa465,	// (0x00098897) grid_highlight_pane_cp04

0xd960,	// (0x0009bd92) thumbnail_qdial_pane_ParamLimits

0xd960,	// (0x0009bd92) thumbnail_qdial_pane

0xd9bc,	// (0x0009bdee) list_help_pane

0xd9c5,	// (0x0009bdf7) scroll_pane_cp02

0x14fb,	// (0x0008f92d) help_list_pane_t1_ParamLimits

0x14fb,	// (0x0008f92d) help_list_pane_t1

0xa87e,	// (0x00098cb0) bg_notes_pane_g2

0xa886,	// (0x00098cb8) bg_notes_pane_g3

0xa88e,	// (0x00098cc0) notes_bg_pane_g1

0xa896,	// (0x00098cc8) notes_bg_pane_g4

0xa89e,	// (0x00098cd0) notes_bg_pane_g5

0xa8a6,	// (0x00098cd8) notes_bg_pane_g6

0xa8ae,	// (0x00098ce0) notes_bg_pane_g7

0xa8b6,	// (0x00098ce8) notes_bg_pane_g8

0xa8be,	// (0x00098cf0) notes_bg_pane_g9

0x0006,

0xf1c3,	// (0x0009d5f5) notes_bg_pane_g

0xefc8,	// (0x0009d3fa) list_notes_text_pane_ParamLimits

0xefc8,	// (0x0009d3fa) list_notes_text_pane

0xd9ce,	// (0x0009be00) list_notes_text_pane_g1

0x151b,	// (0x0008f94d) list_notes_text_pane_t1

0xa7fb,	// (0x00098c2d) listscroll_cale_week_pane

0x1546,	// (0x0008f978) bg_cale_heading_pane

0xd9e8,	// (0x0009be1a) bg_cale_pane_cp01

0x155e,	// (0x0008f990) cale_week_corner_pane

0x156f,	// (0x0008f9a1) cale_week_day_heading_pane

0x1587,	// (0x0008f9b9) cale_week_scroll_pane_g1

0x159c,	// (0x0008f9ce) cale_week_scroll_pane_g2

0x15ad,	// (0x0008f9df) cale_week_scroll_pane_g3

0x15be,	// (0x0008f9f0) cale_week_scroll_pane_g4

0x15cf,	// (0x0008fa01) cale_week_scroll_pane_g5

0x15e2,	// (0x0008fa14) cale_week_scroll_pane_g6

0x15f5,	// (0x0008fa27) cale_week_scroll_pane_g7

0x1608,	// (0x0008fa3a) cale_week_scroll_pane_g8

0x161b,	// (0x0008fa4d) cale_week_scroll_pane_g9

0x162c,	// (0x0008fa5e) cale_week_scroll_pane_g10

0x163d,	// (0x0008fa6f) cale_week_scroll_pane_g11

0x164e,	// (0x0008fa80) cale_week_scroll_pane_g12

0x165f,	// (0x0008fa91) cale_week_scroll_pane_g13

0x1670,	// (0x0008faa2) cale_week_scroll_pane_g14

0x1681,	// (0x0008fab3) cale_week_scroll_pane_g15

0x000e,

0xf1d2,	// (0x0009d604) cale_week_scroll_pane_g

0x1692,	// (0x0008fac4) cale_week_time_pane

0x16a5,	// (0x0008fad7) grid_cale_week_pane

0x16ba,	// (0x0008faec) scroll_pane_cp08

0x16d4,	// (0x0008fb06) cell_cale_week_pane_ParamLimits

0x16d4,	// (0x0008fb06) cell_cale_week_pane

0x1714,	// (0x0008fb46) cale_week_day_heading_pane_t1

0x1728,	// (0x0008fb5a) cale_week_day_heading_pane_t2

0x173c,	// (0x0008fb6e) cale_week_day_heading_pane_t3

0x1750,	// (0x0008fb82) cale_week_day_heading_pane_t4

0x1764,	// (0x0008fb96) cale_week_day_heading_pane_t5

0x1778,	// (0x0008fbaa) cale_week_day_heading_pane_t6

0x178e,	// (0x0008fbc0) cale_week_day_heading_pane_t7

0x0006,

0xf1f1,	// (0x0009d623) cale_week_day_heading_pane_t

0xda13,	// (0x0009be45) bg_cale_side_pane

0x17a2,	// (0x0008fbd4) cale_week_time_pane_t1

0x17ba,	// (0x0008fbec) cale_week_time_pane_t2

0x17d2,	// (0x0008fc04) cale_week_time_pane_t3

0x17ea,	// (0x0008fc1c) cale_week_time_pane_t4

0x1802,	// (0x0008fc34) cale_week_time_pane_t5

0x181a,	// (0x0008fc4c) cale_week_time_pane_t6

0x1832,	// (0x0008fc64) cale_week_time_pane_t7

0x184a,	// (0x0008fc7c) cale_week_time_pane_t8

0x0007,

0xf200,	// (0x0009d632) cale_week_time_pane_t

0x1862,	// (0x0008fc94) cell_cale_week_pane_g2

0x187b,	// (0x0008fcad) cell_cale_week_pane_g3_ParamLimits

0x187b,	// (0x0008fcad) cell_cale_week_pane_g3

0xda21,	// (0x0009be53) grid_highlight_pane_cp07

0xda29,	// (0x0009be5b) listscroll_gms_pane

0xda33,	// (0x0009be65) grid_gms_pane

0xda3c,	// (0x0009be6e) listscroll_gms_pane_g1

0xda44,	// (0x0009be76) listscroll_gms_pane_g2

0x0001,

0xf211,	// (0x0009d643) listscroll_gms_pane_g

0x1893,	// (0x0008fcc5) scroll_pane_cp010

0x189e,	// (0x0008fcd0) cell_gms_pane_ParamLimits

0x189e,	// (0x0008fcd0) cell_gms_pane

0x18b1,	// (0x0008fce3) cell_gms_pane_g1

0xda4c,	// (0x0009be7e) cell_gms_pane_g2

0xd9ce,	// (0x0009be00) cell_gms_pane_g3

0xda54,	// (0x0009be86) cell_gms_pane_g4

0x0003,

0xf216,	// (0x0009d648) cell_gms_pane_g

0xda5d,	// (0x0009be8f) grid_highlight_pane_cp09

0x4266,	// (0x00092698) phob_pre_status_pane_g1

0x426e,	// (0x000926a0) phob_pre_status_pane_g2

0x4276,	// (0x000926a8) phob_pre_status_pane_g3

0x427e,	// (0x000926b0) phob_pre_status_pane_g4

0x0004,

0xf53f,	// (0x0009d971) phob_pre_status_pane_g

0x4290,	// (0x000926c2) phob_pre_status_pane_t1

0x429e,	// (0x000926d0) phob_pre_status_pane_t2

0x42ae,	// (0x000926e0) phob_pre_status_pane_t3

0x0002,

0xf54a,	// (0x0009d97c) phob_pre_status_pane_t

0xa465,	// (0x00098897) bg_list_pane_cp05

0xa8ce,	// (0x00098d00) grid_vorec_pane

0xa8d6,	// (0x00098d08) vorec_t1

0xa8e4,	// (0x00098d16) vorec_t2

0xa8f2,	// (0x00098d24) vorec_t3

0xa900,	// (0x00098d32) vorec_t4

0xa90e,	// (0x00098d40) vorec_t5

0xa91c,	// (0x00098d4e) vorec_t6

0x0006,

0xf21f,	// (0x0009d651) vorec_t

0xa938,	// (0x00098d6a) wait_bar_pane_cp01

0xda65,	// (0x0009be97) cell_vorec_pane_ParamLimits

0xda65,	// (0x0009be97) cell_vorec_pane

0xda78,	// (0x0009beaa) cell_vorec_pane_g1

0xa465,	// (0x00098897) grid_highlight_pane_cp05

0x18d1,	// (0x0008fd03) cams_zoom_pane

0x18e0,	// (0x0008fd12) image_vga_pane

0x18fa,	// (0x0008fd2c) main_camera_pane_g1

0x190c,	// (0x0008fd3e) main_camera_pane_g2

0x191e,	// (0x0008fd50) main_camera_pane_g3

0x1930,	// (0x0008fd62) main_camera_pane_g4

0x1942,	// (0x0008fd74) main_camera_pane_g5

0x1954,	// (0x0008fd86) main_camera_pane_g6

0x1966,	// (0x0008fd98) main_camera_pane_g7

0x0007,

0xf22e,	// (0x0009d660) main_camera_pane_g

0x1978,	// (0x0008fdaa) main_camera_pane_t1

0x198e,	// (0x0008fdc0) main_camera_pane_t2

0x0001,

0xf23f,	// (0x0009d671) main_camera_pane_t

0x19ca,	// (0x0008fdfc) cams_zoom_pane_cp_ParamLimits

0x19ca,	// (0x0008fdfc) cams_zoom_pane_cp

0x19f2,	// (0x0008fe24) image_cif_pane_ParamLimits

0x19f2,	// (0x0008fe24) image_cif_pane

0x1a2d,	// (0x0008fe5f) image_subqcif_pane

0x1a35,	// (0x0008fe67) main_video_pane_g1_ParamLimits

0x1a35,	// (0x0008fe67) main_video_pane_g1

0x1a59,	// (0x0008fe8b) main_video_pane_g2_ParamLimits

0x1a59,	// (0x0008fe8b) main_video_pane_g2

0x1a8f,	// (0x0008fec1) main_video_pane_g3_ParamLimits

0x1a8f,	// (0x0008fec1) main_video_pane_g3

0x1abf,	// (0x0008fef1) main_video_pane_g4_ParamLimits

0x1abf,	// (0x0008fef1) main_video_pane_g4

0x1aef,	// (0x0008ff21) main_video_pane_g5_ParamLimits

0x1aef,	// (0x0008ff21) main_video_pane_g5

0xda8e,	// (0x0009bec0) main_video_pane_g6_ParamLimits

0xda8e,	// (0x0009bec0) main_video_pane_g6

0x0006,

0xf244,	// (0x0009d676) main_video_pane_g_ParamLimits

0xf244,	// (0x0009d676) main_video_pane_g

0x1b1a,	// (0x0008ff4c) main_video_pane_t1_ParamLimits

0x1b1a,	// (0x0008ff4c) main_video_pane_t1

0xdaa8,	// (0x0009beda) cams_zoom_pane_g1

0xdab1,	// (0x0009bee3) cams_zoom_pane_g2

0xdaba,	// (0x0009beec) cams_zoom_pane_g3

0xdac3,	// (0x0009bef5) cams_zoom_pane_g4

0x0003,

0x0013,	// (0x0008e445) cams_zoom_pane_g

0x1b77,	// (0x0008ffa9) grid_cams_pane

0x1b91,	// (0x0008ffc3) linegrid_cams_pane

0x1ba4,	// (0x0008ffd6) cell_cams_pane_ParamLimits

0x1ba4,	// (0x0008ffd6) cell_cams_pane

0xdacc,	// (0x0009befe) cams_burst_image_pane

0xdad4,	// (0x0009bf06) cell_cams_pane_g1

0xa465,	// (0x00098897) grid_highlight_pane_cp03

0xd916,	// (0x0009bd48) mp_bg_pane_g1

0xa465,	// (0x00098897) bg_list_pane_cp03

0x419b,	// (0x000925cd) bg_mp_pane

0x41a3,	// (0x000925d5) grid_mp_pane

0x41ab,	// (0x000925dd) media_player_g1

0x41b3,	// (0x000925e5) media_player_t1

0x41c1,	// (0x000925f3) media_player_t2

0x41cf,	// (0x00092601) media_player_t3

0x41dd,	// (0x0009260f) media_player_t4

0x41eb,	// (0x0009261d) media_player_t5

0x41f9,	// (0x0009262b) media_player_t6

0x4207,	// (0x00092639) media_player_t7

0x0006,

0xf529,	// (0x0009d95b) media_player_t

0x4215,	// (0x00092647) wait_bar_pane_cp02

0xf50e,	// (0x0009d940) main_usb_pane_t

0x425d,	// (0x0009268f) cell_mp_pane

0xd916,	// (0x0009bd48) cell_mp_pane_g1

0xa465,	// (0x00098897) grid_highlight_pane_cp06

0xdadc,	// (0x0009bf0e) grid_skin_colour_pane

0xdae4,	// (0x0009bf16) list_highlight_pane_cp03

0x1cd4,	// (0x00090106) skin_g1

0xdaec,	// (0x0009bf1e) skin_t1

0xdafb,	// (0x0009bf2d) skin_t2

0x0001,

0x0048,	// (0x0008e47a) skin_t

0x1cdc,	// (0x0009010e) cell_skin_colour_pane_ParamLimits

0x1cdc,	// (0x0009010e) cell_skin_colour_pane

0xdb09,	// (0x0009bf3b) cell_skin_colour_pane_g1

0x1d55,	// (0x00090187) call_video_g1_ParamLimits

0x1d55,	// (0x00090187) call_video_g1

0x1d71,	// (0x000901a3) call_video_g2_ParamLimits

0x1d71,	// (0x000901a3) call_video_g2

0x0001,

0xf27f,	// (0x0009d6b1) call_video_g_ParamLimits

0xf27f,	// (0x0009d6b1) call_video_g

0x1dc3,	// (0x000901f5) call_video_uplink_pane_cp1_ParamLimits

0x1dc3,	// (0x000901f5) call_video_uplink_pane_cp1

0xdb1b,	// (0x0009bf4d) call_video_uplink_pane_cp2

0x1e62,	// (0x00090294) video_down_crop_pane_ParamLimits

0x1e62,	// (0x00090294) video_down_crop_pane

0x1f4b,	// (0x0009037d) video_down_pane_ParamLimits

0x1f4b,	// (0x0009037d) video_down_pane

0xdb23,	// (0x0009bf55) video_down_subqcif_pane_ParamLimits

0xdb23,	// (0x0009bf55) video_down_subqcif_pane

0xdb3b,	// (0x0009bf6d) video_down_subqcif_pane_cp_ParamLimits

0xdb3b,	// (0x0009bf6d) video_down_subqcif_pane_cp

0xdb5f,	// (0x0009bf91) im_reading_pane_ParamLimits

0xdb5f,	// (0x0009bf91) im_reading_pane

0x2059,	// (0x0009048b) im_writing_pane_ParamLimits

0x2059,	// (0x0009048b) im_writing_pane

0x206f,	// (0x000904a1) im_reading_pane_t1

0xdb79,	// (0x0009bfab) list_im_pane

0xdb8a,	// (0x0009bfbc) scroll_pane_cp07

0x20ab,	// (0x000904dd) im_writing_pane_t1_ParamLimits

0x20ab,	// (0x000904dd) im_writing_pane_t1

0xdba3,	// (0x0009bfd5) im_writing_pane_t2_ParamLimits

0xdba3,	// (0x0009bfd5) im_writing_pane_t2

0x0001,

0xf289,	// (0x0009d6bb) im_writing_pane_t_ParamLimits

0xf289,	// (0x0009d6bb) im_writing_pane_t

0xa465,	// (0x00098897) input_focus_pane_cp04

0xa465,	// (0x00098897) input_focus_pane_cp05

0x20c0,	// (0x000904f2) list_im_single_pane_ParamLimits

0x20c0,	// (0x000904f2) list_im_single_pane

0x20d6,	// (0x00090508) list_single_im_pane_t1

0x421d,	// (0x0009264f) blid_accuracy_pane

0x4225,	// (0x00092657) blid_compass_pane

0x422f,	// (0x00092661) main_location_t1

0x423f,	// (0x00092671) main_location_t2

0x424f,	// (0x00092681) main_location_t3

0x0002,

0xf538,	// (0x0009d96a) main_location_t

0xa465,	// (0x00098897) aid_levels_location

0xd916,	// (0x0009bd48) blid_accuracy_pane_g1

0xd916,	// (0x0009bd48) blid_accuracy_pane_g2

0x0001,

0x00b9,	// (0x0008e4eb) blid_accuracy_pane_g

0xdbeb,	// (0x0009c01d) wml_content_pane

0xdc29,	// (0x0009c05b) wml_button_pane_ParamLimits

0xdc29,	// (0x0009c05b) wml_button_pane

0x20e5,	// (0x00090517) wml_list_single_large_pane_ParamLimits

0x20e5,	// (0x00090517) wml_list_single_large_pane

0x20fc,	// (0x0009052e) wml_list_single_medium_pane_ParamLimits

0x20fc,	// (0x0009052e) wml_list_single_medium_pane

0x2114,	// (0x00090546) wml_list_single_small_pane_ParamLimits

0x2114,	// (0x00090546) wml_list_single_small_pane

0xdc3d,	// (0x0009c06f) wml_selection_box_pane_ParamLimits

0xdc3d,	// (0x0009c06f) wml_selection_box_pane

0xdc50,	// (0x0009c082) wml_list_single_pane_t1

0xdc5f,	// (0x0009c091) wml_list_single_medium_pane_t1

0xdc6e,	// (0x0009c0a0) wml_list_single_large_pane_t1

0xdc7d,	// (0x0009c0af) input_focus_pane_cp02_ParamLimits

0xdc7d,	// (0x0009c0af) input_focus_pane_cp02

0xdc90,	// (0x0009c0c2) wml_selection_box_pane_g1

0xdc99,	// (0x0009c0cb) wml_selection_box_pane_t1_ParamLimits

0xdc99,	// (0x0009c0cb) wml_selection_box_pane_t1

0xa6c0,	// (0x00098af2) bg_wml_button_pane_ParamLimits

0xa6c0,	// (0x00098af2) bg_wml_button_pane

0xdcb1,	// (0x0009c0e3) wml_button_pane_g1

0xdcb9,	// (0x0009c0eb) wml_button_pane_t1

0xdcb1,	// (0x0009c0e3) wml_button_bg_pane_g1

0xdcc9,	// (0x0009c0fb) wml_button_bg_pane_g2

0xdcd1,	// (0x0009c103) wml_button_bg_pane_g3

0xdcd9,	// (0x0009c10b) wml_button_bg_pane_g4

0xdce1,	// (0x0009c113) wml_button_bg_pane_g5

0xdce9,	// (0x0009c11b) wml_button_bg_pane_g6

0xdcf1,	// (0x0009c123) wml_button_bg_pane_g7

0xdcf9,	// (0x0009c12b) wml_button_bg_pane_g8

0xdd01,	// (0x0009c133) wml_button_bg_pane_g9

0x0008,

0x005c,	// (0x0008e48e) wml_button_bg_pane_g

0x2132,	// (0x00090564) bg_list_pane_cp02

0xdd09,	// (0x0009c13b) mce_header_pane_ParamLimits

0xdd09,	// (0x0009c13b) mce_header_pane

0xdd1f,	// (0x0009c151) mce_icon_pane

0xdd1f,	// (0x0009c151) mce_image_pane

0xdd28,	// (0x0009c15a) mce_text_pane_ParamLimits

0xdd28,	// (0x0009c15a) mce_text_pane

0x213a,	// (0x0009056c) scroll_pane_cp03

0xdc21,	// (0x0009c053) scroll_pane_cp04

0xdd3b,	// (0x0009c16d) scroll_pane_cp05_ParamLimits

0xdd3b,	// (0x0009c16d) scroll_pane_cp05

0x2144,	// (0x00090576) mce_header_field_pane_ParamLimits

0x2144,	// (0x00090576) mce_header_field_pane

0x215b,	// (0x0009058d) mce_header_field_pane_2_ParamLimits

0x215b,	// (0x0009058d) mce_header_field_pane_2

0x2171,	// (0x000905a3) mce_header_field_pane_3

0x2179,	// (0x000905ab) list_single_mce_message_pane_ParamLimits

0x2179,	// (0x000905ab) list_single_mce_message_pane

0x2191,	// (0x000905c3) list_single_mce_smart_pane_ParamLimits

0x2191,	// (0x000905c3) list_single_mce_smart_pane

0xdd47,	// (0x0009c179) input_focus_pane_cp03

0xdd50,	// (0x0009c182) list_header_data_pane

0x21b4,	// (0x000905e6) mce_header_field_pane_t1

0x21c4,	// (0x000905f6) list_single_mce_header_pane_ParamLimits

0x21c4,	// (0x000905f6) list_single_mce_header_pane

0xdd58,	// (0x0009c18a) list_single_mce_header_pane_t1

0xdd67,	// (0x0009c199) list_single_mce_message_pane_g1

0xdd6f,	// (0x0009c1a1) list_single_mce_message_pane_t1

0x21f6,	// (0x00090628) bg_cale_heading_pane_cp01_ParamLimits

0x21f6,	// (0x00090628) bg_cale_heading_pane_cp01

0xdd7d,	// (0x0009c1af) bg_cale_pane_cp02_ParamLimits

0xdd7d,	// (0x0009c1af) bg_cale_pane_cp02

0x2219,	// (0x0009064b) cale_month_corner_pane

0x222f,	// (0x00090661) cale_month_day_heading_pane_ParamLimits

0x222f,	// (0x00090661) cale_month_day_heading_pane

0x2262,	// (0x00090694) cale_month_pane_g1_ParamLimits

0x2262,	// (0x00090694) cale_month_pane_g1

0x227e,	// (0x000906b0) cale_month_pane_g2_ParamLimits

0x227e,	// (0x000906b0) cale_month_pane_g2

0x2299,	// (0x000906cb) cale_month_pane_g3_ParamLimits

0x2299,	// (0x000906cb) cale_month_pane_g3

0x22c5,	// (0x000906f7) cale_month_pane_g4_ParamLimits

0x22c5,	// (0x000906f7) cale_month_pane_g4

0x22f1,	// (0x00090723) cale_month_pane_g5_ParamLimits

0x22f1,	// (0x00090723) cale_month_pane_g5

0x2325,	// (0x00090757) cale_month_pane_g6_ParamLimits

0x2325,	// (0x00090757) cale_month_pane_g6

0x2361,	// (0x00090793) cale_month_pane_g7_ParamLimits

0x2361,	// (0x00090793) cale_month_pane_g7

0x239d,	// (0x000907cf) cale_month_pane_g8_ParamLimits

0x239d,	// (0x000907cf) cale_month_pane_g8

0x23d9,	// (0x0009080b) cale_month_pane_g9_ParamLimits

0x23d9,	// (0x0009080b) cale_month_pane_g9

0x2413,	// (0x00090845) cale_month_pane_g10_ParamLimits

0x2413,	// (0x00090845) cale_month_pane_g10

0x244d,	// (0x0009087f) cale_month_pane_g11_ParamLimits

0x244d,	// (0x0009087f) cale_month_pane_g11

0x2487,	// (0x000908b9) cale_month_pane_g12_ParamLimits

0x2487,	// (0x000908b9) cale_month_pane_g12

0x24c1,	// (0x000908f3) cale_month_pane_g13_ParamLimits

0x24c1,	// (0x000908f3) cale_month_pane_g13

0x000c,

0xf28e,	// (0x0009d6c0) cale_month_pane_g_ParamLimits

0xf28e,	// (0x0009d6c0) cale_month_pane_g

0x24fb,	// (0x0009092d) cale_month_week_pane

0x250e,	// (0x00090940) grid_cale_month_pane_ParamLimits

0x250e,	// (0x00090940) grid_cale_month_pane

0x253c,	// (0x0009096e) cale_month_day_heading_pane_t1

0x259a,	// (0x000909cc) cale_month_day_heading_pane_t2

0x25ff,	// (0x00090a31) cale_month_day_heading_pane_t3

0x2664,	// (0x00090a96) cale_month_day_heading_pane_t4

0x26c9,	// (0x00090afb) cale_month_day_heading_pane_t5

0x273e,	// (0x00090b70) cale_month_day_heading_pane_t6

0x27b3,	// (0x00090be5) cale_month_day_heading_pane_t7

0x0006,

0xf2a9,	// (0x0009d6db) cale_month_day_heading_pane_t

0xda13,	// (0x0009be45) bg_cale_side_pane_cp01

0x2828,	// (0x00090c5a) cale_month_week_pane_t1

0x283f,	// (0x00090c71) cale_month_week_pane_t2

0x2856,	// (0x00090c88) cale_month_week_pane_t3

0x286d,	// (0x00090c9f) cale_month_week_pane_t4

0x2884,	// (0x00090cb6) cale_month_week_pane_t5

0x289b,	// (0x00090ccd) cale_month_week_pane_t6

0x0005,

0xf2b8,	// (0x0009d6ea) cale_month_week_pane_t

0x28b2,	// (0x00090ce4) cell_cale_month_pane_ParamLimits

0x28b2,	// (0x00090ce4) cell_cale_month_pane

0xa940,	// (0x00098d72) cell_cale_month_pane_g1

0x29b2,	// (0x00090de4) cell_cale_month_pane_t1_ParamLimits

0x29b2,	// (0x00090de4) cell_cale_month_pane_t1

0xda21,	// (0x0009be53) grid_highlight_pane_cp08

0xd916,	// (0x0009bd48) main_smil_g1

0x29ce,	// (0x00090e00) smil_status_pane

0xddb2,	// (0x0009c1e4) smil_text_pane

0x4031,	// (0x00092463) bg_popup_call3_rect_pane_g8

0x4039,	// (0x0009246b) bg_popup_call3_rect_pane_g9

0x0008,

0xf4cc,	// (0x0009d8fe) bg_popup_call3_rect_pane_g

0x4916,	// (0x00092d48) smil_status_volume_pane_g1

0xddbc,	// (0x0009c1ee) smil_status_pane_t1

0xaa3e,	// (0x00098e70) volume_smil_pane

0xddd3,	// (0x0009c205) list_smil_text_pane

0x29e3,	// (0x00090e15) scroll_pane_cp011

0x29ee,	// (0x00090e20) smil_text_list_pane_t1_ParamLimits

0x29ee,	// (0x00090e20) smil_text_list_pane_t1

0xa94c,	// (0x00098d7e) aid_volume_smil_ParamLimits

0xa94c,	// (0x00098d7e) aid_volume_smil

0xd916,	// (0x0009bd48) smil_volume_pane_g1

0xd916,	// (0x0009bd48) smil_volume_pane_g2

0x0001,

0x00b9,	// (0x0008e4eb) smil_volume_pane_g

0xa7fb,	// (0x00098c2d) listscroll_cale_day_pane

0xdddd,	// (0x0009c20f) bg_cale_pane

0xddf5,	// (0x0009c227) list_cale_pane

0xde06,	// (0x0009c238) scroll_pane_cp09

0xde17,	// (0x0009c249) cale_bg_pane_g1

0xde1f,	// (0x0009c251) cale_bg_pane_g2

0xde27,	// (0x0009c259) cale_bg_pane_g3

0xde2f,	// (0x0009c261) cale_bg_pane_g4

0xde37,	// (0x0009c269) cale_bg_pane_g5

0xde3f,	// (0x0009c271) cale_bg_pane_g6

0xde47,	// (0x0009c279) cale_bg_pane_g7

0xde4f,	// (0x0009c281) cale_bg_pane_g8

0xde57,	// (0x0009c289) cale_bg_pane_g9

0x0008,

0x00be,	// (0x0008e4f0) cale_bg_pane_g

0x2a42,	// (0x00090e74) list_cale_time_pane_ParamLimits

0x2a42,	// (0x00090e74) list_cale_time_pane

0x2a57,	// (0x00090e89) list_cale_time_pane_g1_ParamLimits

0x2a57,	// (0x00090e89) list_cale_time_pane_g1

0xde5f,	// (0x0009c291) list_cale_time_pane_g2_ParamLimits

0xde5f,	// (0x0009c291) list_cale_time_pane_g2

0x2a63,	// (0x00090e95) list_cale_time_pane_g3_ParamLimits

0x2a63,	// (0x00090e95) list_cale_time_pane_g3

0x2a7f,	// (0x00090eb1) list_cale_time_pane_g4_ParamLimits

0x2a7f,	// (0x00090eb1) list_cale_time_pane_g4

0x2a8d,	// (0x00090ebf) list_cale_time_pane_g5_ParamLimits

0x2a8d,	// (0x00090ebf) list_cale_time_pane_g5

0x0005,

0xf2d8,	// (0x0009d70a) list_cale_time_pane_g_ParamLimits

0xf2d8,	// (0x0009d70a) list_cale_time_pane_g

0x2a9b,	// (0x00090ecd) list_cale_time_pane_t1_ParamLimits

0x2a9b,	// (0x00090ecd) list_cale_time_pane_t1

0x2ac3,	// (0x00090ef5) list_cale_time_pane_t2_ParamLimits

0x2ac3,	// (0x00090ef5) list_cale_time_pane_t2

0x2e67,	// (0x00091299) aid_blid_cardinal_pane

0x2ea5,	// (0x000912d7) compass_pane_t4

0x2aeb,	// (0x00090f1d) list_cale_time_pane_t4_ParamLimits

0x2aeb,	// (0x00090f1d) list_cale_time_pane_t4

0x2eb3,	// (0x000912e5) compass_pane_t5

0x2ec1,	// (0x000912f3) compass_pane_t6

0x2ecf,	// (0x00091301) compass_pane_t7

0xe29b,	// (0x0009c6cd) navi_pane_cc_t1

0xe3f0,	// (0x0009c822) aid_phob_thumbnail_center_pane

0x3603,	// (0x00091a35) main_postcard_pane_g4_ParamLimits

0x0002,

0xf2e5,	// (0x0009d717) list_cale_time_pane_t_ParamLimits

0xf2e5,	// (0x0009d717) list_cale_time_pane_t

0xa0be,	// (0x000984f0) bg_popup_window_pane_cp02_ParamLimits

0xa0be,	// (0x000984f0) bg_popup_window_pane_cp02

0xde79,	// (0x0009c2ab) heading_pane_cp01_ParamLimits

0xde79,	// (0x0009c2ab) heading_pane_cp01

0xde85,	// (0x0009c2b7) loc_req_pane_ParamLimits

0xde85,	// (0x0009c2b7) loc_req_pane

0xde95,	// (0x0009c2c7) loc_type_pane_ParamLimits

0xde95,	// (0x0009c2c7) loc_type_pane

0xdea7,	// (0x0009c2d9) loc_type_pane_t1_ParamLimits

0xdea7,	// (0x0009c2d9) loc_type_pane_t1

0xdeb9,	// (0x0009c2eb) loc_type_pane_t2_ParamLimits

0xdeb9,	// (0x0009c2eb) loc_type_pane_t2

0xdecb,	// (0x0009c2fd) loc_type_pane_t3_ParamLimits

0xdecb,	// (0x0009c2fd) loc_type_pane_t3

0x0002,

0x00e5,	// (0x0008e517) loc_type_pane_t_ParamLimits

0x00e5,	// (0x0008e517) loc_type_pane_t

0xdedd,	// (0x0009c30f) list_loc_req_pane

0xdee7,	// (0x0009c319) scroll_pane_cp012

0x2b13,	// (0x00090f45) list_single_loc_request_popup_menu_pane_ParamLimits

0x2b13,	// (0x00090f45) list_single_loc_request_popup_menu_pane

0xdef2,	// (0x0009c324) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xdef2,	// (0x0009c324) list_single_loc_request_popup_menu_pane_g1

0xdefe,	// (0x0009c330) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xdefe,	// (0x0009c330) list_single_loc_request_popup_menu_pane_g2

0x0001,

0x00ec,	// (0x0008e51e) list_single_loc_request_popup_menu_pane_g_ParamLimits

0x00ec,	// (0x0008e51e) list_single_loc_request_popup_menu_pane_g

0xdf0a,	// (0x0009c33c) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xdf0a,	// (0x0009c33c) list_single_loc_request_popup_menu_pane_t1

0xa6c0,	// (0x00098af2) bg_popup_window_pane_cp03_ParamLimits

0xa6c0,	// (0x00098af2) bg_popup_window_pane_cp03

0xefdf,	// (0x0009d411) heading_loc_req_pane_ParamLimits

0xefdf,	// (0x0009d411) heading_loc_req_pane

0x2b20,	// (0x00090f52) popup_dyc_status_message_window_g1_ParamLimits

0x2b20,	// (0x00090f52) popup_dyc_status_message_window_g1

0x2b34,	// (0x00090f66) popup_dyc_status_message_window_t1_ParamLimits

0x2b34,	// (0x00090f66) popup_dyc_status_message_window_t1

0x2b49,	// (0x00090f7b) popup_dyc_status_message_window_t2_ParamLimits

0x2b49,	// (0x00090f7b) popup_dyc_status_message_window_t2

0x2b5e,	// (0x00090f90) popup_dyc_status_message_window_t3_ParamLimits

0x2b5e,	// (0x00090f90) popup_dyc_status_message_window_t3

0x0002,

0xf2ec,	// (0x0009d71e) popup_dyc_status_message_window_t_ParamLimits

0xf2ec,	// (0x0009d71e) popup_dyc_status_message_window_t

0xa465,	// (0x00098897) bg_heading_pane_cp01

0xdf20,	// (0x0009c352) heading_loc_req_pane_g1

0xdf28,	// (0x0009c35a) heading_loc_req_pane_g2

0xdf30,	// (0x0009c362) heading_loc_req_pane_g3

0x0002,

0x00f8,	// (0x0008e52a) heading_loc_req_pane_g

0xdf38,	// (0x0009c36a) heading_loc_req_pane_t1

0xdf47,	// (0x0009c379) bg_popup_sub_pane_cp01_ParamLimits

0xdf47,	// (0x0009c379) bg_popup_sub_pane_cp01

0xdf55,	// (0x0009c387) popup_cale_events_window_g1_ParamLimits

0xdf55,	// (0x0009c387) popup_cale_events_window_g1

0xdf75,	// (0x0009c3a7) popup_cale_events_window_g2_ParamLimits

0xdf75,	// (0x0009c3a7) popup_cale_events_window_g2

0x0001,

0x012c,	// (0x0008e55e) popup_cale_events_window_g_ParamLimits

0x012c,	// (0x0008e55e) popup_cale_events_window_g

0xdf95,	// (0x0009c3c7) popup_cale_events_window_t1_ParamLimits

0xdf95,	// (0x0009c3c7) popup_cale_events_window_t1

0xdfa7,	// (0x0009c3d9) popup_cale_events_window_t2_ParamLimits

0xdfa7,	// (0x0009c3d9) popup_cale_events_window_t2

0xdfe5,	// (0x0009c417) popup_cale_events_window_t3_ParamLimits

0xdfe5,	// (0x0009c417) popup_cale_events_window_t3

0xe01f,	// (0x0009c451) popup_cale_events_window_t4_ParamLimits

0xe01f,	// (0x0009c451) popup_cale_events_window_t4

0x0003,

0x0131,	// (0x0008e563) popup_cale_events_window_t_ParamLimits

0x0131,	// (0x0008e563) popup_cale_events_window_t

0x2c63,	// (0x00091095) call_type_pane

0x2c73,	// (0x000910a5) popup_call_status_window_g1

0x2c87,	// (0x000910b9) popup_call_status_window_g2

0x2c9b,	// (0x000910cd) popup_call_status_window_g3

0x0002,

0xf320,	// (0x0009d752) popup_call_status_window_g

0xe055,	// (0x0009c487) call_type_pane_g1

0xe05e,	// (0x0009c490) call_type_pane_g2

0x0001,

0xf327,	// (0x0009d759) call_type_pane_g

0xa465,	// (0x00098897) bg_popup_sub_pane_cp02

0xe067,	// (0x0009c499) listscroll_popup_wml_pane

0xe06f,	// (0x0009c4a1) list_wml_pane

0xe079,	// (0x0009c4ab) scroll_pane_cp013

0xe084,	// (0x0009c4b6) list_single_graphic_popup_wml_pane_ParamLimits

0xe084,	// (0x0009c4b6) list_single_graphic_popup_wml_pane

0xd916,	// (0x0009bd48) list_single_graphic_popup_wml_pane_g1

0xe098,	// (0x0009c4ca) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf32c,	// (0x0009d75e) list_single_graphic_popup_wml_pane_g

0xe0a0,	// (0x0009c4d2) list_single_graphic_popup_wml_pane_t1

0xe0b6,	// (0x0009c4e8) aid_call_pane

0xa6b8,	// (0x00098aea) popup_clock_analogue_window_g1

0xa6b8,	// (0x00098aea) popup_clock_analogue_window_g2

0xa96e,	// (0x00098da0) popup_clock_analogue_window_g3

0xa96e,	// (0x00098da0) popup_clock_analogue_window_g4

0xd916,	// (0x0009bd48) popup_clock_analogue_window_g5

0x0004,

0xf331,	// (0x0009d763) popup_clock_analogue_window_g

0xa976,	// (0x00098da8) popup_clock_analogue_window_t1

0xa984,	// (0x00098db6) clock_digital_number_pane_ParamLimits

0xa984,	// (0x00098db6) clock_digital_number_pane

0xa990,	// (0x00098dc2) clock_digital_number_pane_cp02_ParamLimits

0xa990,	// (0x00098dc2) clock_digital_number_pane_cp02

0xa99c,	// (0x00098dce) clock_digital_number_pane_cp03_ParamLimits

0xa99c,	// (0x00098dce) clock_digital_number_pane_cp03

0xa9a8,	// (0x00098dda) clock_digital_number_pane_cp04_ParamLimits

0xa9a8,	// (0x00098dda) clock_digital_number_pane_cp04

0xa9b4,	// (0x00098de6) clock_digital_separator_pane_ParamLimits

0xa9b4,	// (0x00098de6) clock_digital_separator_pane

0xa9c0,	// (0x00098df2) popup_clock_digital_window_t1

0xd916,	// (0x0009bd48) clock_digital_number_pane_g1

0xd916,	// (0x0009bd48) clock_digital_number_pane_g2

0x0001,

0x00b9,	// (0x0008e4eb) clock_digital_number_pane_g

0xd916,	// (0x0009bd48) clock_digital_separator_pane_g1

0xd916,	// (0x0009bd48) clock_digital_separator_pane_g2

0x0001,

0x00b9,	// (0x0008e4eb) clock_digital_separator_pane_g

0xa465,	// (0x00098897) bg_popup_window_pane_cp04

0xe0be,	// (0x0009c4f0) heading_pane_cp03

0xe0c6,	// (0x0009c4f8) listscroll_popup_gms_pane

0xe0ce,	// (0x0009c500) grid_large_graphic_popup_pane

0xe0d8,	// (0x0009c50a) listscroll_popup_gms_pane_g1

0xe0e0,	// (0x0009c512) listscroll_popup_gms_pane_g2

0x0001,

0xf33c,	// (0x0009d76e) listscroll_popup_gms_pane_g

0xdc21,	// (0x0009c053) scroll_pane_cp014

0xe0e8,	// (0x0009c51a) cell_large_graphic_popup_pane_ParamLimits

0xe0e8,	// (0x0009c51a) cell_large_graphic_popup_pane

0xe100,	// (0x0009c532) cell_large_graphic_popup_pane_g1_ParamLimits

0xe100,	// (0x0009c532) cell_large_graphic_popup_pane_g1

0xe10c,	// (0x0009c53e) cell_large_graphic_popup_pane_g2_ParamLimits

0xe10c,	// (0x0009c53e) cell_large_graphic_popup_pane_g2

0xe118,	// (0x0009c54a) cell_large_graphic_popup_pane_g3_ParamLimits

0xe118,	// (0x0009c54a) cell_large_graphic_popup_pane_g3

0xe125,	// (0x0009c557) cell_large_graphic_popup_pane_g4_ParamLimits

0xe125,	// (0x0009c557) cell_large_graphic_popup_pane_g4

0x0003,

0xf341,	// (0x0009d773) cell_large_graphic_popup_pane_g_ParamLimits

0xf341,	// (0x0009d773) cell_large_graphic_popup_pane_g

0xe135,	// (0x0009c567) grid_highlight_pane_cp010

0xd916,	// (0x0009bd48) bg_popup_call_pane_g1

0xe13f,	// (0x0009c571) list_single_graphic_popup_conf_pane_ParamLimits

0xe13f,	// (0x0009c571) list_single_graphic_popup_conf_pane

0xe151,	// (0x0009c583) list_highlight_pane_cp01

0xe15a,	// (0x0009c58c) list_single_graphic_popup_conf_pane_g1

0xe162,	// (0x0009c594) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf34a,	// (0x0009d77c) list_single_graphic_popup_conf_pane_g

0xe178,	// (0x0009c5aa) list_single_graphic_popup_conf_pane_t1

0xe186,	// (0x0009c5b8) linegrid_cams_pane_g1

0x2cab,	// (0x000910dd) linegrid_cams_pane_g2

0xd9ce,	// (0x0009be00) linegrid_cams_pane_g3

0xe18f,	// (0x0009c5c1) linegrid_cams_pane_g4

0x2cb4,	// (0x000910e6) linegrid_cams_pane_g5

0x2cbd,	// (0x000910ef) linegrid_cams_pane_g6

0xda54,	// (0x0009be86) linegrid_cams_pane_g7

0x0006,

0xf34f,	// (0x0009d781) linegrid_cams_pane_g

0xe198,	// (0x0009c5ca) popup_clock_analogue_window

0xe198,	// (0x0009c5ca) popup_clock_digital_window

0xa465,	// (0x00098897) popup_phob_thumbnail_window

0xd916,	// (0x0009bd48) call_video_uplink_pane_g1

0xe1a1,	// (0x0009c5d3) call_video_uplink_pane_g2

0x0001,

0x0178,	// (0x0008e5aa) call_video_uplink_pane_g

0xda21,	// (0x0009be53) video_uplink_pane

0xe1a9,	// (0x0009c5db) mce_image_pane_g1

0x2cc8,	// (0x000910fa) mce_image_pane_g2

0x2cd0,	// (0x00091102) mce_image_pane_g3

0x2cd8,	// (0x0009110a) mce_image_pane_g4

0x2ce0,	// (0x00091112) mce_image_pane_g5

0x0004,

0xf35e,	// (0x0009d790) mce_image_pane_g

0xe1b3,	// (0x0009c5e5) control_top_pane_stacon_cp01_ParamLimits

0xe1b3,	// (0x0009c5e5) control_top_pane_stacon_cp01

0xe1c7,	// (0x0009c5f9) uni_indicator_pane_stacon_cp01_ParamLimits

0xe1c7,	// (0x0009c5f9) uni_indicator_pane_stacon_cp01

0xe1d8,	// (0x0009c60a) bg_popup_sub_pane_cp03

0x2ce8,	// (0x0009111a) chi_dic_find_pane

0x2cf0,	// (0x00091122) listscroll_chi_dic_pane

0x2cf9,	// (0x0009112b) main_pane_chidic_g1

0x2d0c,	// (0x0009113e) chi_dic_find_pane_t1

0xe1e2,	// (0x0009c614) find_chidic_pane

0xe1eb,	// (0x0009c61d) chi_dic_list_pane_ParamLimits

0xe1eb,	// (0x0009c61d) chi_dic_list_pane

0xe1fc,	// (0x0009c62e) scroll_pane_cp020

0x2d1a,	// (0x0009114c) find_chidic_pane_t1

0xa465,	// (0x00098897) input_focus_pane_cp06

0x2d29,	// (0x0009115b) list_chi_dic_pane_ParamLimits

0x2d29,	// (0x0009115b) list_chi_dic_pane

0xe204,	// (0x0009c636) list_chi_dic_pane_t1_ParamLimits

0xe204,	// (0x0009c636) list_chi_dic_pane_t1

0xa465,	// (0x00098897) list_highlight_pane_cp020

0xe217,	// (0x0009c649) bg_cale_heading_pane_g1

0x2d3d,	// (0x0009116f) bg_cale_heading_pane_g2

0x2d45,	// (0x00091177) bg_cale_heading_pane_g3

0x2d4d,	// (0x0009117f) bg_cale_heading_pane_g4

0x2d57,	// (0x00091189) bg_cale_heading_pane_g5

0x2d61,	// (0x00091193) bg_cale_heading_pane_g6

0x2d69,	// (0x0009119b) bg_cale_heading_pane_g7

0x2d71,	// (0x000911a3) bg_cale_heading_pane_g8

0x2d7b,	// (0x000911ad) bg_cale_heading_pane_g9

0x0008,

0xf369,	// (0x0009d79b) bg_cale_heading_pane_g

0xe217,	// (0x0009c649) bg_cale_side_pane_g1

0x2d85,	// (0x000911b7) bg_cale_side_pane_g2

0x2d8d,	// (0x000911bf) bg_cale_side_pane_g3

0x2d95,	// (0x000911c7) bg_cale_side_pane_g4

0x2d9d,	// (0x000911cf) bg_cale_side_pane_g5

0x2da5,	// (0x000911d7) bg_cale_side_pane_g6

0x2dad,	// (0x000911df) bg_cale_side_pane_g7

0x2db5,	// (0x000911e7) bg_cale_side_pane_g8

0x2dbd,	// (0x000911ef) bg_cale_side_pane_g9

0x0008,

0xf37c,	// (0x0009d7ae) bg_cale_side_pane_g

0x2dc5,	// (0x000911f7) popup_call_status_window_ParamLimits

0x2dc5,	// (0x000911f7) popup_call_status_window

0xe21f,	// (0x0009c651) stacon_top_pane

0xe227,	// (0x0009c659) status_pane_ParamLimits

0xe227,	// (0x0009c659) status_pane

0xe23c,	// (0x0009c66e) status_small_pane

0xe244,	// (0x0009c676) control_pane

0xa465,	// (0x00098897) stacon_bottom_pane

0xe24c,	// (0x0009c67e) list_single_mce_smart_pane_t1_ParamLimits

0xe24c,	// (0x0009c67e) list_single_mce_smart_pane_t1

0xe25f,	// (0x0009c691) list_single_mce_smart_pane_t2_ParamLimits

0xe25f,	// (0x0009c691) list_single_mce_smart_pane_t2

0x0001,

0x01ae,	// (0x0008e5e0) list_single_mce_smart_pane_t_ParamLimits

0x01ae,	// (0x0008e5e0) list_single_mce_smart_pane_t

0x2e0c,	// (0x0009123e) compass_pane

0x2e15,	// (0x00091247) main_location2_pane_t1

0x2e29,	// (0x0009125b) main_location2_pane_t2

0x2e3d,	// (0x0009126f) main_location2_pane_t3

0x0003,

0xf38f,	// (0x0009d7c1) main_location2_pane_t

0xe27e,	// (0x0009c6b0) compass_pane_g1_ParamLimits

0xe27e,	// (0x0009c6b0) compass_pane_g1

0x2e87,	// (0x000912b9) compass_pane_t1

0x2e96,	// (0x000912c8) compass_pane_t2

0x0005,

0xf398,	// (0x0009d7ca) compass_pane_t

0x2edd,	// (0x0009130f) text_secondary_cp61

0xe292,	// (0x0009c6c4) navi_pane_cams_g5

0xe2b5,	// (0x0009c6e7) navi_pane_im_t1

0xe2c3,	// (0x0009c6f5) navi_pane_mp_g1_ParamLimits

0xe2c3,	// (0x0009c6f5) navi_pane_mp_g1

0xe2d7,	// (0x0009c709) navi_pane_mp_g2_ParamLimits

0xe2d7,	// (0x0009c709) navi_pane_mp_g2

0xe2e3,	// (0x0009c715) navi_pane_mp_g3_ParamLimits

0xe2e3,	// (0x0009c715) navi_pane_mp_g3

0x0002,

0x01d0,	// (0x0008e602) navi_pane_mp_g_ParamLimits

0x01d0,	// (0x0008e602) navi_pane_mp_g

0xe2ef,	// (0x0009c721) navi_pane_mp_t1

0xe2fd,	// (0x0009c72f) navi_pane_mp_t2

0x0002,

0x01d7,	// (0x0008e609) navi_pane_mp_t

0xe339,	// (0x0009c76b) navi_pane_vt_g1

0xe2ef,	// (0x0009c721) navi_pane_vt_t1

0xe341,	// (0x0009c773) navi_slider_pane

0xe349,	// (0x0009c77b) zooming_pane

0xe351,	// (0x0009c783) navi_slider_pane_g1

0xa9dd,	// (0x00098e0f) navi_slider_pane_g2

0x0006,

0xf3ac,	// (0x0009d7de) navi_slider_pane_g

0xe375,	// (0x0009c7a7) aid_levels_zoom

0xe37d,	// (0x0009c7af) zooming_pane_g1

0xe385,	// (0x0009c7b7) zooming_pane_g2

0xe385,	// (0x0009c7b7) zooming_pane_g3

0x0002,

0x01ed,	// (0x0008e61f) zooming_pane_g

0xe38d,	// (0x0009c7bf) level_10_zoom

0xe396,	// (0x0009c7c8) level_11_zoom

0xe39f,	// (0x0009c7d1) level_1_zoom

0xe3a8,	// (0x0009c7da) level_2_zoom

0xe3b1,	// (0x0009c7e3) level_3_zoom

0xe3ba,	// (0x0009c7ec) level_4_zoom

0xe3c3,	// (0x0009c7f5) level_5_zoom

0xe3cc,	// (0x0009c7fe) level_6_zoom

0xe3d5,	// (0x0009c807) level_7_zoom

0xe3de,	// (0x0009c810) level_8_zoom

0xe3e7,	// (0x0009c819) level_9_zoom

0xe3f8,	// (0x0009c82a) popup_phob_thumbnail_window_g1

0xe400,	// (0x0009c832) popup_phob_thumbnail_window_g2

0x0001,

0x01f4,	// (0x0008e626) popup_phob_thumbnail_window_g

0x42be,	// (0x000926f0) level_1_location

0x42c6,	// (0x000926f8) level_2_location

0x42ce,	// (0x00092700) level_3_location

0x42d6,	// (0x00092708) level_4_location

0xe349,	// (0x0009c77b) level_5_location

0x3006,	// (0x00091438) mce_icon_pane_g1

0x300e,	// (0x00091440) mce_icon_pane_g2

0x0001,

0xf3bb,	// (0x0009d7ed) mce_icon_pane_g

0x3016,	// (0x00091448) main_mup_pane_g1_ParamLimits

0x3016,	// (0x00091448) main_mup_pane_g1

0x302c,	// (0x0009145e) main_mup_pane_g2_ParamLimits

0x302c,	// (0x0009145e) main_mup_pane_g2

0x3044,	// (0x00091476) main_mup_pane_g3_ParamLimits

0x3044,	// (0x00091476) main_mup_pane_g3

0x305c,	// (0x0009148e) main_mup_pane_g4_ParamLimits

0x305c,	// (0x0009148e) main_mup_pane_g4

0x3074,	// (0x000914a6) main_mup_pane_g5_ParamLimits

0x3074,	// (0x000914a6) main_mup_pane_g5

0x3090,	// (0x000914c2) main_mup_pane_g6_ParamLimits

0x3090,	// (0x000914c2) main_mup_pane_g6

0x30a8,	// (0x000914da) main_mup_pane_g7_ParamLimits

0x30a8,	// (0x000914da) main_mup_pane_g7

0x30c0,	// (0x000914f2) main_mup_pane_g8_ParamLimits

0x30c0,	// (0x000914f2) main_mup_pane_g8

0x30d8,	// (0x0009150a) main_mup_pane_g9_ParamLimits

0x30d8,	// (0x0009150a) main_mup_pane_g9

0x30f2,	// (0x00091524) main_mup_pane_g10_ParamLimits

0x30f2,	// (0x00091524) main_mup_pane_g10

0x310c,	// (0x0009153e) main_mup_pane_g11_ParamLimits

0x310c,	// (0x0009153e) main_mup_pane_g11

0x3120,	// (0x00091552) main_mup_pane_g12_ParamLimits

0x3120,	// (0x00091552) main_mup_pane_g12

0x3136,	// (0x00091568) main_mup_pane_g13_ParamLimits

0x3136,	// (0x00091568) main_mup_pane_g13

0x000c,

0xf3c0,	// (0x0009d7f2) main_mup_pane_g_ParamLimits

0xf3c0,	// (0x0009d7f2) main_mup_pane_g

0x314a,	// (0x0009157c) main_mup_pane_t1_ParamLimits

0x314a,	// (0x0009157c) main_mup_pane_t1

0x3164,	// (0x00091596) main_mup_pane_t2_ParamLimits

0x3164,	// (0x00091596) main_mup_pane_t2

0x317c,	// (0x000915ae) main_mup_pane_t3_ParamLimits

0x317c,	// (0x000915ae) main_mup_pane_t3

0x3194,	// (0x000915c6) main_mup_pane_t4_ParamLimits

0x3194,	// (0x000915c6) main_mup_pane_t4

0x31b2,	// (0x000915e4) main_mup_pane_t5_ParamLimits

0x31b2,	// (0x000915e4) main_mup_pane_t5

0x31c7,	// (0x000915f9) main_mup_pane_t6_ParamLimits

0x31c7,	// (0x000915f9) main_mup_pane_t6

0x0005,

0xf3db,	// (0x0009d80d) main_mup_pane_t_ParamLimits

0xf3db,	// (0x0009d80d) main_mup_pane_t

0x31d9,	// (0x0009160b) mup_progress_pane_ParamLimits

0x31d9,	// (0x0009160b) mup_progress_pane

0x31e5,	// (0x00091617) mup_visualizer_pane_ParamLimits

0x31e5,	// (0x00091617) mup_visualizer_pane

0x3219,	// (0x0009164b) mup_volume_pane_ParamLimits

0x3219,	// (0x0009164b) mup_volume_pane

0xe16a,	// (0x0009c59c) mup_visualizer_pane_g1_ParamLimits

0xe16a,	// (0x0009c59c) mup_visualizer_pane_g1

0xe16a,	// (0x0009c59c) mup_visualizer_pane_g2_ParamLimits

0xe16a,	// (0x0009c59c) mup_visualizer_pane_g2

0xe27e,	// (0x0009c6b0) mup_visualizer_pane_g3_ParamLimits

0xe27e,	// (0x0009c6b0) mup_visualizer_pane_g3

0x0002,

0xf3e8,	// (0x0009d81a) mup_visualizer_pane_g_ParamLimits

0xf3e8,	// (0x0009d81a) mup_visualizer_pane_g

0xd916,	// (0x0009bd48) mup_volume_pane_g1

0xe410,	// (0x0009c842) mup_volume_pane_g2

0x0001,

0x022d,	// (0x0008e65f) mup_volume_pane_g

0xd916,	// (0x0009bd48) mup_progress_pane_g1

0xe419,	// (0x0009c84b) mup_progress_pane_g2

0xe422,	// (0x0009c854) mup_progress_pane_g3

0x0002,

0x0232,	// (0x0008e664) mup_progress_pane_g

0xa465,	// (0x00098897) bg_popup_window_pane_cp05

0xe42b,	// (0x0009c85d) heading_pane_cp02_ParamLimits

0xe42b,	// (0x0009c85d) heading_pane_cp02

0xe445,	// (0x0009c877) list_popup_blid_pane

0xe44d,	// (0x0009c87f) list_blid_sat_info_pane_ParamLimits

0xe44d,	// (0x0009c87f) list_blid_sat_info_pane

0xe460,	// (0x0009c892) list_blid_sat_info_pane_g1

0xe468,	// (0x0009c89a) list_blid_sat_info_pane_t1

0x332f,	// (0x00091761) mup_equalizer_pane_ParamLimits

0x332f,	// (0x00091761) mup_equalizer_pane

0x3348,	// (0x0009177a) mup_equalizer_pane_cp1_ParamLimits

0x3348,	// (0x0009177a) mup_equalizer_pane_cp1

0x3365,	// (0x00091797) mup_equalizer_pane_cp2_ParamLimits

0x3365,	// (0x00091797) mup_equalizer_pane_cp2

0x3382,	// (0x000917b4) mup_equalizer_pane_cp3_ParamLimits

0x3382,	// (0x000917b4) mup_equalizer_pane_cp3

0x33a3,	// (0x000917d5) mup_equalizer_pane_cp4_ParamLimits

0x33a3,	// (0x000917d5) mup_equalizer_pane_cp4

0x33c4,	// (0x000917f6) mup_equalizer_pane_cp5

0x33d8,	// (0x0009180a) mup_equalizer_pane_cp6

0x33ec,	// (0x0009181e) mup_equalizer_pane_cp7

0x40b9,	// (0x000924eb) bg_popup_call_poc_act_pane_g9

0x40c1,	// (0x000924f3) bg_popup_call_poc_act_pane_g10

0x40c9,	// (0x000924fb) bg_popup_call_poc_act_pane_g11

0x000a,

0xa6c0,	// (0x00098af2) mup_scale_pane

0xd916,	// (0x0009bd48) mup_scale_pane_g1

0xe476,	// (0x0009c8a8) mup_scale_pane_g2

0x0006,

0xf404,	// (0x0009d836) mup_scale_pane_g

0xe49a,	// (0x0009c8cc) msg_data_pane

0xe4a2,	// (0x0009c8d4) scroll_pane_cp017

0x3412,	// (0x00091844) bg_list_pane_cp04_ParamLimits

0x3412,	// (0x00091844) bg_list_pane_cp04

0xe4aa,	// (0x0009c8dc) msg_data_pane_g1

0x3432,	// (0x00091864) msg_data_pane_g2

0x2cd0,	// (0x00091102) msg_data_pane_g3

0x343a,	// (0x0009186c) msg_data_pane_g4

0x3442,	// (0x00091874) msg_data_pane_g5

0x344a,	// (0x0009187c) msg_data_pane_g6

0x3452,	// (0x00091884) msg_data_pane_g7

0x0006,

0xf413,	// (0x0009d845) msg_data_pane_g

0x345a,	// (0x0009188c) msg_text_pane_ParamLimits

0x345a,	// (0x0009188c) msg_text_pane

0x3480,	// (0x000918b2) qrid_highlight_pane_cp011_ParamLimits

0x3480,	// (0x000918b2) qrid_highlight_pane_cp011

0xa465,	// (0x00098897) msg_body_pane

0xa465,	// (0x00098897) msg_header_pane

0xe4bb,	// (0x0009c8ed) input_focus_pane_cp07

0x34a4,	// (0x000918d6) msg_header_pane_t1_ParamLimits

0x34a4,	// (0x000918d6) msg_header_pane_t1

0x34b8,	// (0x000918ea) msg_header_pane_t2_ParamLimits

0x34b8,	// (0x000918ea) msg_header_pane_t2

0x0001,

0xf427,	// (0x0009d859) msg_header_pane_t_ParamLimits

0xf427,	// (0x0009d859) msg_header_pane_t

0xe4d0,	// (0x0009c902) msg_body_pane_g1

0x34ca,	// (0x000918fc) msg_body_pane_t1_ParamLimits

0x34ca,	// (0x000918fc) msg_body_pane_t1

0x34fb,	// (0x0009192d) msg_body_pane_t2_ParamLimits

0x34fb,	// (0x0009192d) msg_body_pane_t2

0x350d,	// (0x0009193f) msg_body_pane_t3_ParamLimits

0x350d,	// (0x0009193f) msg_body_pane_t3

0x0002,

0xf42c,	// (0x0009d85e) msg_body_pane_t_ParamLimits

0xf42c,	// (0x0009d85e) msg_body_pane_t

0x3559,	// (0x0009198b) main_viewer_pane_g1_ParamLimits

0x3559,	// (0x0009198b) main_viewer_pane_g1

0x3567,	// (0x00091999) main_viewer_pane_g2_ParamLimits

0x3567,	// (0x00091999) main_viewer_pane_g2

0x3575,	// (0x000919a7) main_viewer_pane_g3_ParamLimits

0x3575,	// (0x000919a7) main_viewer_pane_g3

0x3584,	// (0x000919b6) main_viewer_pane_g4_ParamLimits

0x3584,	// (0x000919b6) main_viewer_pane_g4

0xaa07,	// (0x00098e39) main_viewer_pane_g5_ParamLimits

0xaa07,	// (0x00098e39) main_viewer_pane_g5

0xaa07,	// (0x00098e39) main_viewer_pane_g7_ParamLimits

0xaa07,	// (0x00098e39) main_viewer_pane_g7

0xaa19,	// (0x00098e4b) main_viewer_pane_g8_ParamLimits

0xaa19,	// (0x00098e4b) main_viewer_pane_g8

0x0007,

0xf43c,	// (0x0009d86e) main_viewer_pane_g_ParamLimits

0xf43c,	// (0x0009d86e) main_viewer_pane_g

0xe4d8,	// (0x0009c90a) viewer_content_pane_ParamLimits

0xe4d8,	// (0x0009c90a) viewer_content_pane

0x35c0,	// (0x000919f2) main_postcard_pane_g1_ParamLimits

0x35c0,	// (0x000919f2) main_postcard_pane_g1

0x35d6,	// (0x00091a08) main_postcard_pane_g2_ParamLimits

0x35d6,	// (0x00091a08) main_postcard_pane_g2

0x35ec,	// (0x00091a1e) main_postcard_pane_g3_ParamLimits

0x35ec,	// (0x00091a1e) main_postcard_pane_g3

0x0005,

0xf44d,	// (0x0009d87f) main_postcard_pane_g_ParamLimits

0xf44d,	// (0x0009d87f) main_postcard_pane_g

0x3603,	// (0x00091a35) main_postcard_pane_g4

0x4929,	// (0x00092d5b) smil_status_volume_pane_g2

0x3646,	// (0x00091a78) postcard_pane_ParamLimits

0x3646,	// (0x00091a78) postcard_pane

0xe4e6,	// (0x0009c918) postcard_pane_g1_ParamLimits

0xe4e6,	// (0x0009c918) postcard_pane_g1

0x3688,	// (0x00091aba) postcard_pane_g2_ParamLimits

0x3688,	// (0x00091aba) postcard_pane_g2

0x3694,	// (0x00091ac6) postcard_pane_g3_ParamLimits

0x3694,	// (0x00091ac6) postcard_pane_g3

0xe4f4,	// (0x0009c926) postcard_pane_g4_ParamLimits

0xe4f4,	// (0x0009c926) postcard_pane_g4

0x36a0,	// (0x00091ad2) postcard_pane_g5_ParamLimits

0x36a0,	// (0x00091ad2) postcard_pane_g5

0x36b5,	// (0x00091ae7) postcard_pane_g6_ParamLimits

0x36b5,	// (0x00091ae7) postcard_pane_g6

0xe4e6,	// (0x0009c918) postcard_pane_g7_ParamLimits

0xe4e6,	// (0x0009c918) postcard_pane_g7

0x0006,

0xf45a,	// (0x0009d88c) postcard_pane_g_ParamLimits

0xf45a,	// (0x0009d88c) postcard_pane_g

0x36c9,	// (0x00091afb) main_mp2_pane_g1_ParamLimits

0x36c9,	// (0x00091afb) main_mp2_pane_g1

0x36d5,	// (0x00091b07) main_mp2_pane_g2_ParamLimits

0x36d5,	// (0x00091b07) main_mp2_pane_g2

0x36e1,	// (0x00091b13) main_mp2_pane_g3_ParamLimits

0x36e1,	// (0x00091b13) main_mp2_pane_g3

0x0002,

0xf469,	// (0x0009d89b) main_mp2_pane_g_ParamLimits

0xf469,	// (0x0009d89b) main_mp2_pane_g

0x36ed,	// (0x00091b1f) main_mp2_pane_t1_ParamLimits

0x36ed,	// (0x00091b1f) main_mp2_pane_t1

0x3702,	// (0x00091b34) main_mp2_pane_t2_ParamLimits

0x3702,	// (0x00091b34) main_mp2_pane_t2

0x3714,	// (0x00091b46) main_mp2_pane_t3_ParamLimits

0x3714,	// (0x00091b46) main_mp2_pane_t3

0x0002,

0xf470,	// (0x0009d8a2) main_mp2_pane_t_ParamLimits

0xf470,	// (0x0009d8a2) main_mp2_pane_t

0xe502,	// (0x0009c934) pec_content_pane_ParamLimits

0xe502,	// (0x0009c934) pec_content_pane

0xdc21,	// (0x0009c053) scroll_pane_cp015

0xe514,	// (0x0009c946) pec_attribute_pane_ParamLimits

0xe514,	// (0x0009c946) pec_attribute_pane

0x3726,	// (0x00091b58) pec_content_pane_g1_ParamLimits

0x3726,	// (0x00091b58) pec_content_pane_g1

0xe524,	// (0x0009c956) pec_content_pane_t1_ParamLimits

0xe524,	// (0x0009c956) pec_content_pane_t1

0xe536,	// (0x0009c968) pec_content_pane_t2_ParamLimits

0xe536,	// (0x0009c968) pec_content_pane_t2

0x0001,

0x02c1,	// (0x0008e6f3) pec_content_pane_t_ParamLimits

0x02c1,	// (0x0008e6f3) pec_content_pane_t

0x3734,	// (0x00091b66) list_single_graphic_pane_cp01_ParamLimits

0x3734,	// (0x00091b66) list_single_graphic_pane_cp01

0xa6c0,	// (0x00098af2) bg_popup_sub_pane_cp04

0xe548,	// (0x0009c97a) popup_mup_playback_window_g1

0xe554,	// (0x0009c986) popup_mup_playback_window_t1

0xe569,	// (0x0009c99b) popup_mup_playback_window_t2

0x0001,

0x02c6,	// (0x0008e6f8) popup_mup_playback_window_t

0xe5a0,	// (0x0009c9d2) main_image_pane_g1_ParamLimits

0xe5a0,	// (0x0009c9d2) main_image_pane_g1

0xe5e3,	// (0x0009ca15) scroll_pane_cp018_ParamLimits

0xe5e3,	// (0x0009ca15) scroll_pane_cp018

0xe5fb,	// (0x0009ca2d) scroll_pane_cp016_ParamLimits

0xe5fb,	// (0x0009ca2d) scroll_pane_cp016

0x3804,	// (0x00091c36) smil2_image_pane_ParamLimits

0x3804,	// (0x00091c36) smil2_image_pane

0x3838,	// (0x00091c6a) smil2_root_pane_ParamLimits

0x3838,	// (0x00091c6a) smil2_root_pane

0x3870,	// (0x00091ca2) smil2_text_pane_ParamLimits

0x3870,	// (0x00091ca2) smil2_text_pane

0xa465,	// (0x00098897) bg_list_pane_cp06

0xe637,	// (0x0009ca69) grid_radio_pane

0xa465,	// (0x00098897) bg_popup_window_pane_cp06

0xe63f,	// (0x0009ca71) main_fmradio_pane_t1

0xe0be,	// (0x0009c4f0) heading_pane_cp04

0xe64d,	// (0x0009ca7f) main_fmradio_pane_t2

0x4153,	// (0x00092585) popup_cale_lunar_info_window_g1

0xe65b,	// (0x0009ca8d) main_fmradio_pane_t3

0x415b,	// (0x0009258d) popup_cale_lunar_info_window_g2

0xe669,	// (0x0009ca9b) main_fmradio_pane_t4

0x0001,

0xe677,	// (0x0009caa9) main_fmradio_pane_t5

0x0004,

0xf51b,	// (0x0009d94d) popup_cale_lunar_info_window_g

0x02db,	// (0x0008e70d) main_fmradio_pane_t

0xe685,	// (0x0009cab7) wait_bar_pane_cp03

0xe68d,	// (0x0009cabf) cell_fmradio_pane_ParamLimits

0xe68d,	// (0x0009cabf) cell_fmradio_pane

0xe4e6,	// (0x0009c918) cell_fmradio_pane_g1_ParamLimits

0xe4e6,	// (0x0009c918) cell_fmradio_pane_g1

0xa465,	// (0x00098897) grid_highlight_pane_cp011

0xe6a0,	// (0x0009cad2) poc_content_pane_ParamLimits

0xe6a0,	// (0x0009cad2) poc_content_pane

0xe6b2,	// (0x0009cae4) scroll_pane_cp019

0x38f0,	// (0x00091d22) popup_call_poc_act_window_ParamLimits

0x38f0,	// (0x00091d22) popup_call_poc_act_window

0x3914,	// (0x00091d46) popup_call_poc_inact_window_ParamLimits

0x3914,	// (0x00091d46) popup_call_poc_inact_window

0xf4f2,	// (0x0009d924) bg_popup_call_poc_act_pane_g

0x4041,	// (0x00092473) bg_popup_call_poc_inact_pane_g1

0x4049,	// (0x0009247b) bg_popup_call_poc_inact_pane_g2

0xe6ba,	// (0x0009caec) popup_call_poc_act_window_g2

0x4051,	// (0x00092483) bg_popup_call_poc_inact_pane_g3

0x4059,	// (0x0009248b) bg_popup_call_poc_inact_pane_g4

0x4061,	// (0x00092493) bg_popup_call_poc_inact_pane_g5

0xe6c2,	// (0x0009caf4) popup_call_poc_act_window_t1_ParamLimits

0xe6c2,	// (0x0009caf4) popup_call_poc_act_window_t1

0xe6ea,	// (0x0009cb1c) popup_call_poc_act_window_t2_ParamLimits

0xe6ea,	// (0x0009cb1c) popup_call_poc_act_window_t2

0xe712,	// (0x0009cb44) popup_call_poc_act_window_t3_ParamLimits

0xe712,	// (0x0009cb44) popup_call_poc_act_window_t3

0xe73a,	// (0x0009cb6c) popup_call_poc_act_window_t4_ParamLimits

0xe73a,	// (0x0009cb6c) popup_call_poc_act_window_t4

0x0003,

0x02e6,	// (0x0008e718) popup_call_poc_act_window_t_ParamLimits

0x02e6,	// (0x0008e718) popup_call_poc_act_window_t

0x4069,	// (0x0009249b) bg_popup_call_poc_inact_pane_g6

0x4071,	// (0x000924a3) bg_popup_call_poc_inact_pane_g7

0x4079,	// (0x000924ab) bg_popup_call_poc_inact_pane_g8

0xe74c,	// (0x0009cb7e) popup_call_poc_inact_window_g2

0x4081,	// (0x000924b3) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf4df,	// (0x0009d911) bg_popup_call_poc_inact_pane_g

0xe754,	// (0x0009cb86) popup_call_poc_inact_window_t1_ParamLimits

0xe754,	// (0x0009cb86) popup_call_poc_inact_window_t1

0xe769,	// (0x0009cb9b) popup_call_poc_inact_window_t2_ParamLimits

0xe769,	// (0x0009cb9b) popup_call_poc_inact_window_t2

0xe77e,	// (0x0009cbb0) popup_call_poc_inact_window_t3_ParamLimits

0xe77e,	// (0x0009cbb0) popup_call_poc_inact_window_t3

0x0002,

0x02ef,	// (0x0008e721) popup_call_poc_inact_window_t_ParamLimits

0x02ef,	// (0x0008e721) popup_call_poc_inact_window_t

0x47ca,	// (0x00092bfc) context_pane_ParamLimits

0x4825,	// (0x00092c57) signal_pane_ParamLimits

0xe349,	// (0x0009c77b) main_call2_pane

0x4762,	// (0x00092b94) popup_phob_thumbnail2_window_ParamLimits

0x4762,	// (0x00092b94) popup_phob_thumbnail2_window

0xa9ef,	// (0x00098e21) aid_hotspot_pointer_arrow_pane

0xa9f7,	// (0x00098e29) aid_hotspot_pointer_hand_pane

0x4288,	// (0x000926ba) phob_pre_status_pane_g5

0x18d1,	// (0x0008fd03) cams_zoom_pane_ParamLimits

0x18e0,	// (0x0008fd12) image_vga_pane_ParamLimits

0x18fa,	// (0x0008fd2c) main_camera_pane_g1_ParamLimits

0x190c,	// (0x0008fd3e) main_camera_pane_g2_ParamLimits

0x191e,	// (0x0008fd50) main_camera_pane_g3_ParamLimits

0x1930,	// (0x0008fd62) main_camera_pane_g4_ParamLimits

0x1942,	// (0x0008fd74) main_camera_pane_g5_ParamLimits

0x1954,	// (0x0008fd86) main_camera_pane_g6_ParamLimits

0x1966,	// (0x0008fd98) main_camera_pane_g7_ParamLimits

0xf22e,	// (0x0009d660) main_camera_pane_g_ParamLimits

0x1978,	// (0x0008fdaa) main_camera_pane_t1_ParamLimits

0x198e,	// (0x0008fdc0) main_camera_pane_t2_ParamLimits

0xf23f,	// (0x0009d671) main_camera_pane_t_ParamLimits

0xa6c0,	// (0x00098af2) bg_popup_preview_window_pane_cp01_ParamLimits

0xa6c0,	// (0x00098af2) bg_popup_preview_window_pane_cp01

0xe793,	// (0x0009cbc5) popup_phob_thumbnail2_window_g1_ParamLimits

0xe793,	// (0x0009cbc5) popup_phob_thumbnail2_window_g1

0xa465,	// (0x00098897) call2_cli_visual_pane

0x3948,	// (0x00091d7a) popup_call2_audio_conf_window_ParamLimits

0x3948,	// (0x00091d7a) popup_call2_audio_conf_window

0x3968,	// (0x00091d9a) popup_call2_audio_first_window_ParamLimits

0x3968,	// (0x00091d9a) popup_call2_audio_first_window

0x39fe,	// (0x00091e30) popup_call2_audio_in_window_ParamLimits

0x39fe,	// (0x00091e30) popup_call2_audio_in_window

0x3a46,	// (0x00091e78) popup_call2_audio_out_window_ParamLimits

0x3a46,	// (0x00091e78) popup_call2_audio_out_window

0x3ab0,	// (0x00091ee2) popup_call2_audio_second_window_ParamLimits

0x3ab0,	// (0x00091ee2) popup_call2_audio_second_window

0x3b16,	// (0x00091f48) popup_call2_audio_wait_window_ParamLimits

0x3b16,	// (0x00091f48) popup_call2_audio_wait_window

0xa465,	// (0x00098897) bg_popup_call2_act_pane_cp03

0xa6a2,	// (0x00098ad4) list_conf_pane_cp

0xe79f,	// (0x0009cbd1) popup_call2_audio_conf_window_t1

0xe7ad,	// (0x0009cbdf) list_single_graphic_popup_conf2_pane_ParamLimits

0xe7ad,	// (0x0009cbdf) list_single_graphic_popup_conf2_pane

0xe151,	// (0x0009c583) list_highlight_pane_cp04

0xe7c0,	// (0x0009cbf2) list_single_graphic_popup_conf2_pane_g1

0xe162,	// (0x0009c594) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf487,	// (0x0009d8b9) list_single_graphic_popup_conf2_pane_g

0xe7ca,	// (0x0009cbfc) list_single_graphic_popup_conf2_pane_t1

0xe7d8,	// (0x0009cc0a) bg_popup_call2_act_pane_cp01_ParamLimits

0xe7d8,	// (0x0009cc0a) bg_popup_call2_act_pane_cp01

0xe862,	// (0x0009cc94) call_type_pane_cp05_ParamLimits

0xe862,	// (0x0009cc94) call_type_pane_cp05

0xe8b6,	// (0x0009cce8) popup_call2_audio_second_window_g1_ParamLimits

0xe8b6,	// (0x0009cce8) popup_call2_audio_second_window_g1

0xe90a,	// (0x0009cd3c) popup_call2_audio_second_window_g2_ParamLimits

0xe90a,	// (0x0009cd3c) popup_call2_audio_second_window_g2

0x0002,

0x02fb,	// (0x0008e72d) popup_call2_audio_second_window_g_ParamLimits

0x02fb,	// (0x0008e72d) popup_call2_audio_second_window_g

0xe96f,	// (0x0009cda1) popup_call2_audio_second_window_t1_ParamLimits

0xe96f,	// (0x0009cda1) popup_call2_audio_second_window_t1

0xea2a,	// (0x0009ce5c) popup_call2_audio_second_window_t2_ParamLimits

0xea2a,	// (0x0009ce5c) popup_call2_audio_second_window_t2

0xea7d,	// (0x0009ceaf) popup_call2_audio_second_window_t3_ParamLimits

0xea7d,	// (0x0009ceaf) popup_call2_audio_second_window_t3

0x0003,

0x0302,	// (0x0008e734) popup_call2_audio_second_window_t_ParamLimits

0x0302,	// (0x0008e734) popup_call2_audio_second_window_t

0xa465,	// (0x00098897) bg_popup_call2_in_pane_cp02

0xa46f,	// (0x000988a1) call_type_pane_cp04

0xa477,	// (0x000988a9) popup_call2_audio_wait_window_g1

0xa47f,	// (0x000988b1) popup_call2_audio_wait_window_g2

0x0001,

0xf11b,	// (0x0009d54d) popup_call2_audio_wait_window_g

0xa487,	// (0x000988b9) popup_call2_audio_wait_window_t3

0xeb70,	// (0x0009cfa2) bg_popup_call2_act_pane_ParamLimits

0xeb70,	// (0x0009cfa2) bg_popup_call2_act_pane

0xec30,	// (0x0009d062) call_type_pane_cp03_ParamLimits

0xec30,	// (0x0009d062) call_type_pane_cp03

0xec94,	// (0x0009d0c6) popup_call2_audio_first_window_g1_ParamLimits

0xec94,	// (0x0009d0c6) popup_call2_audio_first_window_g1

0xed04,	// (0x0009d136) popup_call2_audio_first_window_g2_ParamLimits

0xed04,	// (0x0009d136) popup_call2_audio_first_window_g2

0xe16a,	// (0x0009c59c) popup_call2_audio_first_window_g3_ParamLimits

0xe16a,	// (0x0009c59c) popup_call2_audio_first_window_g3

0x0004,

0xf48c,	// (0x0009d8be) popup_call2_audio_first_window_g_ParamLimits

0xf48c,	// (0x0009d8be) popup_call2_audio_first_window_g

0xede2,	// (0x0009d214) popup_call2_audio_first_window_t1_ParamLimits

0xede2,	// (0x0009d214) popup_call2_audio_first_window_t1

0xeee5,	// (0x0009d317) popup_call2_audio_first_window_t4_ParamLimits

0xeee5,	// (0x0009d317) popup_call2_audio_first_window_t4

0xefeb,	// (0x0009d41d) popup_call2_audio_first_window_t5_ParamLimits

0xefeb,	// (0x0009d41d) popup_call2_audio_first_window_t5

0x0003,

0xf497,	// (0x0009d8c9) popup_call2_audio_first_window_t_ParamLimits

0xf497,	// (0x0009d8c9) popup_call2_audio_first_window_t

0xa6b8,	// (0x00098aea) bg_popup_call2_act_pane_g1

0x4163,	// (0x00092595) popup_cale_lunar_info_window_t1

0x4171,	// (0x000925a3) popup_cale_lunar_info_window_t2

0x417f,	// (0x000925b1) popup_cale_lunar_info_window_t3

0xa465,	// (0x00098897) bg_popup_call2_bubble_pane

0x3b50,	// (0x00091f82) bg_popup_call2_in_pane_cp01_ParamLimits

0x3b50,	// (0x00091f82) bg_popup_call2_in_pane_cp01

0xa141,	// (0x00098573) call_type_pane_cp02

0x3b98,	// (0x00091fca) popup_call2_audio_out_window_g1_ParamLimits

0x3b98,	// (0x00091fca) popup_call2_audio_out_window_g1

0x3bc4,	// (0x00091ff6) popup_call2_audio_out_window_g2_ParamLimits

0x3bc4,	// (0x00091ff6) popup_call2_audio_out_window_g2

0x3bec,	// (0x0009201e) popup_call2_audio_out_window_g3_ParamLimits

0x3bec,	// (0x0009201e) popup_call2_audio_out_window_g3

0x0003,

0xf4a0,	// (0x0009d8d2) popup_call2_audio_out_window_g_ParamLimits

0xf4a0,	// (0x0009d8d2) popup_call2_audio_out_window_g

0x3c27,	// (0x00092059) popup_call2_audio_out_window_t1_ParamLimits

0x3c27,	// (0x00092059) popup_call2_audio_out_window_t1

0x3c86,	// (0x000920b8) popup_call2_audio_out_window_t2_ParamLimits

0x3c86,	// (0x000920b8) popup_call2_audio_out_window_t2

0x3cda,	// (0x0009210c) popup_call2_audio_out_window_t3_ParamLimits

0x3cda,	// (0x0009210c) popup_call2_audio_out_window_t3

0x3cf0,	// (0x00092122) popup_call2_audio_out_window_t4_ParamLimits

0x3cf0,	// (0x00092122) popup_call2_audio_out_window_t4

0x3d06,	// (0x00092138) popup_call2_audio_out_window_t5_ParamLimits

0x3d06,	// (0x00092138) popup_call2_audio_out_window_t5

0x0005,

0xf4a9,	// (0x0009d8db) popup_call2_audio_out_window_t_ParamLimits

0xf4a9,	// (0x0009d8db) popup_call2_audio_out_window_t

0x3d6a,	// (0x0009219c) bg_popup_call2_in_pane_ParamLimits

0x3d6a,	// (0x0009219c) bg_popup_call2_in_pane

0x3dc6,	// (0x000921f8) popup_call2_audio_in_window_g1_ParamLimits

0x3dc6,	// (0x000921f8) popup_call2_audio_in_window_g1

0x3dfe,	// (0x00092230) popup_call2_audio_in_window_g2_ParamLimits

0x3dfe,	// (0x00092230) popup_call2_audio_in_window_g2

0x3e36,	// (0x00092268) popup_call2_audio_in_window_g3_ParamLimits

0x3e36,	// (0x00092268) popup_call2_audio_in_window_g3

0x0003,

0xf4b6,	// (0x0009d8e8) popup_call2_audio_in_window_g_ParamLimits

0xf4b6,	// (0x0009d8e8) popup_call2_audio_in_window_g

0x3e8e,	// (0x000922c0) popup_call2_audio_in_window_t1_ParamLimits

0x3e8e,	// (0x000922c0) popup_call2_audio_in_window_t1

0x3f0e,	// (0x00092340) popup_call2_audio_in_window_t2_ParamLimits

0x3f0e,	// (0x00092340) popup_call2_audio_in_window_t2

0x3f8e,	// (0x000923c0) popup_call2_audio_in_window_t3_ParamLimits

0x3f8e,	// (0x000923c0) popup_call2_audio_in_window_t3

0x3fa8,	// (0x000923da) popup_call2_audio_in_window_t4_ParamLimits

0x3fa8,	// (0x000923da) popup_call2_audio_in_window_t4

0x3fba,	// (0x000923ec) popup_call2_audio_in_window_t5_ParamLimits

0x3fba,	// (0x000923ec) popup_call2_audio_in_window_t5

0x3fcf,	// (0x00092401) popup_call2_audio_in_window_t6_ParamLimits

0x3fcf,	// (0x00092401) popup_call2_audio_in_window_t6

0x0005,

0xf4bf,	// (0x0009d8f1) popup_call2_audio_in_window_t_ParamLimits

0xf4bf,	// (0x0009d8f1) popup_call2_audio_in_window_t

0xa6b8,	// (0x00098aea) bg_popup_call2_in_pane_g1

0x418d,	// (0x000925bf) popup_cale_lunar_info_window_t4

0x0003,

0xf520,	// (0x0009d952) popup_cale_lunar_info_window_t

0xa6c0,	// (0x00098af2) bg_popup_call2_rect_pane_ParamLimits

0xa6c0,	// (0x00098af2) bg_popup_call2_rect_pane

0xa465,	// (0x00098897) call2_cli_visual_graphic_pane

0xa465,	// (0x00098897) call2_cli_visual_text_pane

0xaa31,	// (0x00098e63) smil_status_volume_pane_g3

0x0002,

0xd916,	// (0x0009bd48) call2_cli_visual_graphic_pane_g1

0xd916,	// (0x0009bd48) call2_cli_visual_graphic_pane_g2

0xd916,	// (0x0009bd48) call2_cli_visual_graphic_pane_g3

0x0002,

0x034b,	// (0x0008e77d) call2_cli_visual_graphic_pane_g

0x4001,	// (0x00092433) bg_popup_call2_rect_pane_g1

0xd9b4,	// (0x0009bde6) bg_popup_call2_rect_pane_g2

0x4009,	// (0x0009243b) bg_popup_call2_rect_pane_g3

0x4011,	// (0x00092443) bg_popup_call2_rect_pane_g4

0x4019,	// (0x0009244b) bg_popup_call2_rect_pane_g5

0x4021,	// (0x00092453) bg_popup_call2_rect_pane_g6

0x4029,	// (0x0009245b) bg_popup_call2_rect_pane_g7

0x4031,	// (0x00092463) bg_popup_call2_rect_pane_g8

0x4039,	// (0x0009246b) bg_popup_call2_rect_pane_g9

0x0008,

0xf4cc,	// (0x0009d8fe) bg_popup_call2_rect_pane_g

0x4041,	// (0x00092473) bg_popup_call2_bubble_pane_g1

0x4049,	// (0x0009247b) bg_popup_call2_bubble_pane_g2

0x4051,	// (0x00092483) bg_popup_call2_bubble_pane_g3

0x4059,	// (0x0009248b) bg_popup_call2_bubble_pane_g4

0x4061,	// (0x00092493) bg_popup_call2_bubble_pane_g5

0x4069,	// (0x0009249b) bg_popup_call2_bubble_pane_g6

0x4071,	// (0x000924a3) bg_popup_call2_bubble_pane_g7

0x4079,	// (0x000924ab) bg_popup_call2_bubble_pane_g8

0x4081,	// (0x000924b3) bg_popup_call2_bubble_pane_g9

0x0008,

0xf4df,	// (0x0009d911) bg_popup_call2_bubble_pane_g

0x1533,	// (0x0008f965) aid_cale_week_size_cell_pane

0x19a6,	// (0x0008fdd8) aid_cams_cif_uncrop_pane_ParamLimits

0x19a6,	// (0x0008fdd8) aid_cams_cif_uncrop_pane

0x1b63,	// (0x0008ff95) aid_cams_size_cell_ParamLimits

0x1b63,	// (0x0008ff95) aid_cams_size_cell

0x1b77,	// (0x0008ffa9) grid_cams_pane_ParamLimits

0x1b91,	// (0x0008ffc3) linegrid_cams_pane_ParamLimits

0x1d87,	// (0x000901b9) call_video_pane_t1

0x1da5,	// (0x000901d7) call_video_pane_t2

0x0001,

0xf284,	// (0x0009d6b6) call_video_pane_t

0x21d8,	// (0x0009060a) aid_cale_month_size_cell_pane_ParamLimits

0x21d8,	// (0x0009060a) aid_cale_month_size_cell_pane

0xf569,	// (0x0009d99b) smil_status_volume_pane_g

0xaa3e,	// (0x00098e70) volume_smil_pane_ParamLimits

0x0e2d,	// (0x0008f25f) aid_popup2_width_pane

0x14a7,	// (0x0008f8d9) cell_qdial_pane_g4_ParamLimits

0x14a7,	// (0x0008f8d9) cell_qdial_pane_g4

0x2e67,	// (0x00091299) aid_blid_cardinal_pane_ParamLimits

0x2e73,	// (0x000912a5) aid_blid_destination_pane_ParamLimits

0x2e73,	// (0x000912a5) aid_blid_destination_pane

0xa6c0,	// (0x00098af2) bg_popup_call_poc_act_pane_ParamLimits

0xa6c0,	// (0x00098af2) bg_popup_call_poc_act_pane

0xa6c0,	// (0x00098af2) bg_popup_call_poc_inact_pane_ParamLimits

0xa6c0,	// (0x00098af2) bg_popup_call_poc_inact_pane

0x4091,	// (0x000924c3) bg_popup_call_poc_act_pane_g1

0x4099,	// (0x000924cb) bg_popup_call_poc_act_pane_g2

0x40a1,	// (0x000924d3) bg_popup_call_poc_act_pane_g3

0x4059,	// (0x0009248b) bg_popup_call_poc_act_pane_g4

0x4061,	// (0x00092493) bg_popup_call_poc_act_pane_g5

0x40a9,	// (0x000924db) bg_popup_call_poc_act_pane_g6

0x4071,	// (0x000924a3) bg_popup_call_poc_act_pane_g7

0x40b1,	// (0x000924e3) bg_popup_call_poc_act_pane_g8

0xa465,	// (0x00098897) main_usb_pane

0x459f,	// (0x000929d1) popup_cale_lunar_info_window

0x206f,	// (0x000904a1) im_reading_pane_t1_ParamLimits

0xdb79,	// (0x0009bfab) list_im_pane_ParamLimits

0xdb8a,	// (0x0009bfbc) scroll_pane_cp07_ParamLimits

0xa465,	// (0x00098897) grid_highlight_pane_cp012

0xa6c0,	// (0x00098af2) mup_scale_pane_ParamLimits

0xe4e6,	// (0x0009c918) main_usb_pane_g1_ParamLimits

0xe4e6,	// (0x0009c918) main_usb_pane_g1

0x40d1,	// (0x00092503) main_usb_pane_g2_ParamLimits

0x40d1,	// (0x00092503) main_usb_pane_g2

0x0001,

0xf509,	// (0x0009d93b) main_usb_pane_g_ParamLimits

0xf509,	// (0x0009d93b) main_usb_pane_g

0x40e7,	// (0x00092519) main_usb_pane_t1_ParamLimits

0x40e7,	// (0x00092519) main_usb_pane_t1

0x40f9,	// (0x0009252b) main_usb_pane_t2_ParamLimits

0x40f9,	// (0x0009252b) main_usb_pane_t2

0x410b,	// (0x0009253d) main_usb_pane_t3_ParamLimits

0x410b,	// (0x0009253d) main_usb_pane_t3

0x411d,	// (0x0009254f) main_usb_pane_t4_ParamLimits

0x411d,	// (0x0009254f) main_usb_pane_t4

0x412f,	// (0x00092561) main_usb_pane_t5_ParamLimits

0x412f,	// (0x00092561) main_usb_pane_t5

0x4141,	// (0x00092573) main_usb_pane_t6_ParamLimits

0x4141,	// (0x00092573) main_usb_pane_t6

0x0005,

0xf50e,	// (0x0009d940) main_usb_pane_t_ParamLimits

0x2e0c,	// (0x0009123e) aid_text_placing

0x2e15,	// (0x00091247) main_location2_pane_t1_ParamLimits

0x2e29,	// (0x0009125b) main_location2_pane_t2_ParamLimits

0x2e3d,	// (0x0009126f) main_location2_pane_t3_ParamLimits

0x2e53,	// (0x00091285) main_location2_pane_t4_ParamLimits

0x2e53,	// (0x00091285) main_location2_pane_t4

0xf38f,	// (0x0009d7c1) main_location2_pane_t_ParamLimits

0xa704,	// (0x00098b36) find_pinb_pane_g2_ParamLimits

0xa704,	// (0x00098b36) find_pinb_pane_g2

0x0001,

0xf141,	// (0x0009d573) find_pinb_pane_g_ParamLimits

0xf141,	// (0x0009d573) find_pinb_pane_g

0xa710,	// (0x00098b42) find_pinb_pane_t1_ParamLimits

0xa722,	// (0x00098b54) find_pinb_pane_t2_ParamLimits

0xf146,	// (0x0009d578) find_pinb_pane_t_ParamLimits

0xa465,	// (0x00098897) main_call3_pane

0x253c,	// (0x0009096e) cale_month_day_heading_pane_t1_ParamLimits

0x259a,	// (0x000909cc) cale_month_day_heading_pane_t2_ParamLimits

0x25ff,	// (0x00090a31) cale_month_day_heading_pane_t3_ParamLimits

0x2664,	// (0x00090a96) cale_month_day_heading_pane_t4_ParamLimits

0x26c9,	// (0x00090afb) cale_month_day_heading_pane_t5_ParamLimits

0x273e,	// (0x00090b70) cale_month_day_heading_pane_t6_ParamLimits

0x27b3,	// (0x00090be5) cale_month_day_heading_pane_t7_ParamLimits

0xf2a9,	// (0x0009d6db) cale_month_day_heading_pane_t_ParamLimits

0xddca,	// (0x0009c1fc) smil_status_volume_pane

0x3664,	// (0x00091a96) postcard_address_pane_ParamLimits

0x3664,	// (0x00091a96) postcard_address_pane

0x3676,	// (0x00091aa8) postcard_message_pane_ParamLimits

0x3676,	// (0x00091aa8) postcard_message_pane

0x3fe4,	// (0x00092416) call2_cli_visual_pane_t1_ParamLimits

0x3fe4,	// (0x00092416) call2_cli_visual_pane_t1

0x4ad8,	// (0x00092f0a) postcard_message_pane_t1_ParamLimits

0x4ad8,	// (0x00092f0a) postcard_message_pane_t1

0x4ac1,	// (0x00092ef3) postcard_address_pane_t1_ParamLimits

0x4ac1,	// (0x00092ef3) postcard_address_pane_t1

0x4aad,	// (0x00092edf) popup_call3_audio_in_window_ParamLimits

0x4aad,	// (0x00092edf) popup_call3_audio_in_window

0x493c,	// (0x00092d6e) bg_popup_call3_in_pane_ParamLimits

0x493c,	// (0x00092d6e) bg_popup_call3_in_pane

0x49ae,	// (0x00092de0) popup_call3_audio_in_window_g1_ParamLimits

0x49ae,	// (0x00092de0) popup_call3_audio_in_window_g1

0x49ce,	// (0x00092e00) popup_call3_audio_in_window_g2_ParamLimits

0x49ce,	// (0x00092e00) popup_call3_audio_in_window_g2

0x49ee,	// (0x00092e20) popup_call3_audio_in_window_g3_ParamLimits

0x49ee,	// (0x00092e20) popup_call3_audio_in_window_g3

0x0003,

0xf570,	// (0x0009d9a2) popup_call3_audio_in_window_g_ParamLimits

0xf570,	// (0x0009d9a2) popup_call3_audio_in_window_g

0x4a1f,	// (0x00092e51) popup_call3_audio_in_window_t1_ParamLimits

0x4a1f,	// (0x00092e51) popup_call3_audio_in_window_t1

0x4a5d,	// (0x00092e8f) popup_call3_audio_in_window_t2_ParamLimits

0x4a5d,	// (0x00092e8f) popup_call3_audio_in_window_t2

0x4a9b,	// (0x00092ecd) popup_call3_audio_in_window_t3_ParamLimits

0x4a9b,	// (0x00092ecd) popup_call3_audio_in_window_t3

0x0002,

0xf579,	// (0x0009d9ab) popup_call3_audio_in_window_t_ParamLimits

0xf579,	// (0x0009d9ab) popup_call3_audio_in_window_t

0xe349,	// (0x0009c77b) bg_popup_call3_rect_pane

0x4001,	// (0x00092433) bg_popup_call3_rect_pane_g1

0xd9b4,	// (0x0009bde6) bg_popup_call3_rect_pane_g2

0x4009,	// (0x0009243b) bg_popup_call3_rect_pane_g3

0x4011,	// (0x00092443) bg_popup_call3_rect_pane_g4

0x4019,	// (0x0009244b) bg_popup_call3_rect_pane_g5

0x4021,	// (0x00092453) bg_popup_call3_rect_pane_g6

0x4029,	// (0x0009245b) bg_popup_call3_rect_pane_g7

0x322f,	// (0x00091661) mup_visualizer_osc_pane

0xe408,	// (0x0009c83a) mup_visualizer_spec_pane

0x496c,	// (0x00092d9e) call3_video_qcif_pane_ParamLimits

0x496c,	// (0x00092d9e) call3_video_qcif_pane

0x497d,	// (0x00092daf) call3_video_qcif_uncrop_pane_ParamLimits

0x497d,	// (0x00092daf) call3_video_qcif_uncrop_pane

0x4989,	// (0x00092dbb) call3_video_subqcif_pane_ParamLimits

0x4989,	// (0x00092dbb) call3_video_subqcif_pane

0x499d,	// (0x00092dcf) call3_video_subqcif_uncrop_pane_ParamLimits

0x499d,	// (0x00092dcf) call3_video_subqcif_uncrop_pane

0x4a0e,	// (0x00092e40) popup_call3_audio_in_window_g4_ParamLimits

0x4a0e,	// (0x00092e40) popup_call3_audio_in_window_g4

0x48fd,	// (0x00092d2f) mup_spec_half_pane

0x4906,	// (0x00092d38) mup_spec_half_pane_cp

0x48eb,	// (0x00092d1d) mup_osc_middle_pane

0x48f4,	// (0x00092d26) mup_visualizer_osc_pane_g1

0x48cb,	// (0x00092cfd) mup_spec_bar_pane_ParamLimits

0x48cb,	// (0x00092cfd) mup_spec_bar_pane

0x48b8,	// (0x00092cea) mup_spec_bar_pane_g1

0x48c2,	// (0x00092cf4) mup_spec_bar_pane_g2

0x0001,

0xf564,	// (0x0009d996) mup_spec_bar_pane_g

0x1533,	// (0x0008f965) aid_cale_week_size_cell_pane_ParamLimits

0x1546,	// (0x0008f978) bg_cale_heading_pane_ParamLimits

0xd9e8,	// (0x0009be1a) bg_cale_pane_cp01_ParamLimits

0x155e,	// (0x0008f990) cale_week_corner_pane_ParamLimits

0x156f,	// (0x0008f9a1) cale_week_day_heading_pane_ParamLimits

0x1587,	// (0x0008f9b9) cale_week_scroll_pane_g1_ParamLimits

0x159c,	// (0x0008f9ce) cale_week_scroll_pane_g2_ParamLimits

0x15ad,	// (0x0008f9df) cale_week_scroll_pane_g3_ParamLimits

0x15be,	// (0x0008f9f0) cale_week_scroll_pane_g4_ParamLimits

0x15cf,	// (0x0008fa01) cale_week_scroll_pane_g5_ParamLimits

0x15e2,	// (0x0008fa14) cale_week_scroll_pane_g6_ParamLimits

0x15f5,	// (0x0008fa27) cale_week_scroll_pane_g7_ParamLimits

0x1608,	// (0x0008fa3a) cale_week_scroll_pane_g8_ParamLimits

0x161b,	// (0x0008fa4d) cale_week_scroll_pane_g9_ParamLimits

0x162c,	// (0x0008fa5e) cale_week_scroll_pane_g10_ParamLimits

0x163d,	// (0x0008fa6f) cale_week_scroll_pane_g11_ParamLimits

0x164e,	// (0x0008fa80) cale_week_scroll_pane_g12_ParamLimits

0x165f,	// (0x0008fa91) cale_week_scroll_pane_g13_ParamLimits

0x1670,	// (0x0008faa2) cale_week_scroll_pane_g14_ParamLimits

0x1681,	// (0x0008fab3) cale_week_scroll_pane_g15_ParamLimits

0xf1d2,	// (0x0009d604) cale_week_scroll_pane_g_ParamLimits

0x1692,	// (0x0008fac4) cale_week_time_pane_ParamLimits

0x16a5,	// (0x0008fad7) grid_cale_week_pane_ParamLimits

0xda01,	// (0x0009be33) listscroll_cale_week_pane_t1

0x16ba,	// (0x0008faec) scroll_pane_cp08_ParamLimits

0x2219,	// (0x0009064b) cale_month_corner_pane_ParamLimits

0xdda0,	// (0x0009c1d2) cale_month_pane_t1

0x24fb,	// (0x0009092d) cale_month_week_pane_ParamLimits

0x2c73,	// (0x000910a5) popup_call_status_window_g1_ParamLimits

0x2c87,	// (0x000910b9) popup_call_status_window_g2_ParamLimits

0x2c9b,	// (0x000910cd) popup_call_status_window_g3_ParamLimits

0xf320,	// (0x0009d752) popup_call_status_window_g_ParamLimits

0xe0ae,	// (0x0009c4e0) aid_call2_pane

0x3496,	// (0x000918c8) msg_header_pane_g1

0x3664,	// (0x00091a96) postcard_address2_pane_ParamLimits

0x3664,	// (0x00091a96) postcard_address2_pane

0x3676,	// (0x00091aa8) postcard_message2_pane_ParamLimits

0x3676,	// (0x00091aa8) postcard_message2_pane

0x4833,	// (0x00092c65) message2_row_pane_ParamLimits

0x4833,	// (0x00092c65) message2_row_pane

0x4852,	// (0x00092c84) address2_row_pane_ParamLimits

0x4852,	// (0x00092c84) address2_row_pane

0x4865,	// (0x00092c97) postcard_message2_row_pane_g1

0x486d,	// (0x00092c9f) postcard_message2_row_pane_t1

0x4865,	// (0x00092c97) address2_row_pane_g1

0x486d,	// (0x00092c9f) address2_row_pane_t1

0xa8c6,	// (0x00098cf8) aid_size_cell_vorec

0xa465,	// (0x00098897) main_rss_pane

0x487b,	// (0x00092cad) rss_list_single_pane_ParamLimits

0x487b,	// (0x00092cad) rss_list_single_pane

0x489c,	// (0x00092cce) rss_list_single_pane_t1

0x48aa,	// (0x00092cdc) rss_list_single_pane_t2

0x0001,

0xf55f,	// (0x0009d991) rss_list_single_pane_t

0xa465,	// (0x00098897) main_camera2_pane

0xa465,	// (0x00098897) main_video2_pane

0x4b51,	// (0x00092f83) cams_zoom_pane_cp2_ParamLimits

0x4b51,	// (0x00092f83) cams_zoom_pane_cp2

0x4b71,	// (0x00092fa3) image2_vga_pane_ParamLimits

0x4b71,	// (0x00092fa3) image2_vga_pane

0x4bc2,	// (0x00092ff4) main_camera2_pane_g1_ParamLimits

0x4bc2,	// (0x00092ff4) main_camera2_pane_g1

0x4be2,	// (0x00093014) main_camera2_pane_g2_ParamLimits

0x4be2,	// (0x00093014) main_camera2_pane_g2

0x4c02,	// (0x00093034) main_camera2_pane_g3_ParamLimits

0x4c02,	// (0x00093034) main_camera2_pane_g3

0x4c22,	// (0x00093054) main_camera2_pane_g4_ParamLimits

0x4c22,	// (0x00093054) main_camera2_pane_g4

0x4c42,	// (0x00093074) main_camera2_pane_g5_ParamLimits

0x4c42,	// (0x00093074) main_camera2_pane_g5

0x4c62,	// (0x00093094) main_camera2_pane_g6_ParamLimits

0x4c62,	// (0x00093094) main_camera2_pane_g6

0x4c82,	// (0x000930b4) main_camera2_pane_g7_ParamLimits

0x4c82,	// (0x000930b4) main_camera2_pane_g7

0x4ca2,	// (0x000930d4) main_camera2_pane_g8_ParamLimits

0x4ca2,	// (0x000930d4) main_camera2_pane_g8

0x0008,

0xf580,	// (0x0009d9b2) main_camera2_pane_g_ParamLimits

0xf580,	// (0x0009d9b2) main_camera2_pane_g

0x4ce2,	// (0x00093114) main_camera2_pane_t1_ParamLimits

0x4ce2,	// (0x00093114) main_camera2_pane_t1

0x4d17,	// (0x00093149) main_camera2_pane_t2_ParamLimits

0x4d17,	// (0x00093149) main_camera2_pane_t2

0x4d3d,	// (0x0009316f) main_camera2_pane_t3_ParamLimits

0x4d3d,	// (0x0009316f) main_camera2_pane_t3

0x4d9b,	// (0x000931cd) main_camera2_pane_t4_ParamLimits

0x4d9b,	// (0x000931cd) main_camera2_pane_t4

0x0006,

0xf593,	// (0x0009d9c5) main_camera2_pane_t_ParamLimits

0xf593,	// (0x0009d9c5) main_camera2_pane_t

0x4e2d,	// (0x0009325f) cams_zoom_pane_cp4_ParamLimits

0x4e2d,	// (0x0009325f) cams_zoom_pane_cp4

0x4e43,	// (0x00093275) image2_cif_pane_ParamLimits

0x4e43,	// (0x00093275) image2_cif_pane

0x4e6e,	// (0x000932a0) image2_subqcif_pane_ParamLimits

0x4e6e,	// (0x000932a0) image2_subqcif_pane

0x4e88,	// (0x000932ba) main_video2_pane_g1_ParamLimits

0x4e88,	// (0x000932ba) main_video2_pane_g1

0x4ea2,	// (0x000932d4) main_video2_pane_g2_ParamLimits

0x4ea2,	// (0x000932d4) main_video2_pane_g2

0x4eb8,	// (0x000932ea) main_video2_pane_g3_ParamLimits

0x4eb8,	// (0x000932ea) main_video2_pane_g3

0x4ece,	// (0x00093300) main_video2_pane_g4_ParamLimits

0x4ece,	// (0x00093300) main_video2_pane_g4

0x4ee4,	// (0x00093316) main_video2_pane_g5_ParamLimits

0x4ee4,	// (0x00093316) main_video2_pane_g5

0x4efa,	// (0x0009332c) main_video2_pane_g6_ParamLimits

0x4efa,	// (0x0009332c) main_video2_pane_g6

0x0005,

0xf5a2,	// (0x0009d9d4) main_video2_pane_g_ParamLimits

0xf5a2,	// (0x0009d9d4) main_video2_pane_g

0x4f14,	// (0x00093346) main_video2_pane_t1_ParamLimits

0x4f14,	// (0x00093346) main_video2_pane_t1

0x4f38,	// (0x0009336a) main_video2_pane_t2_ParamLimits

0x4f38,	// (0x0009336a) main_video2_pane_t2

0x4f86,	// (0x000933b8) main_video2_pane_t3_ParamLimits

0x4f86,	// (0x000933b8) main_video2_pane_t3

0x0002,

0xf5af,	// (0x0009d9e1) main_video2_pane_t_ParamLimits

0xf5af,	// (0x0009d9e1) main_video2_pane_t

0x42e8,	// (0x0009271a) call_muted_g2

0x0001,

0xf551,	// (0x0009d983) call_muted_g

0xa465,	// (0x00098897) main_mup2_pane

0x4fce,	// (0x00093400) main_mup2_pane_g1_ParamLimits

0x4fce,	// (0x00093400) main_mup2_pane_g1

0x4fda,	// (0x0009340c) main_mup2_pane_g2_ParamLimits

0x4fda,	// (0x0009340c) main_mup2_pane_g2

0xaaac,	// (0x00098ede) main_mup_pane_g13_cp1

0xaab4,	// (0x00098ee6) mup_volume_pane_cp1

0x4ff6,	// (0x00093428) main_mup2_pane_g4_ParamLimits

0x4ff6,	// (0x00093428) main_mup2_pane_g4

0x5008,	// (0x0009343a) main_mup2_pane_g5_ParamLimits

0x5008,	// (0x0009343a) main_mup2_pane_g5

0x501a,	// (0x0009344c) main_mup2_pane_g6_ParamLimits

0x501a,	// (0x0009344c) main_mup2_pane_g6

0x502c,	// (0x0009345e) main_mup2_pane_g7_ParamLimits

0x502c,	// (0x0009345e) main_mup2_pane_g7

0x0006,

0xf5b6,	// (0x0009d9e8) main_mup2_pane_g_ParamLimits

0xf5b6,	// (0x0009d9e8) main_mup2_pane_g

0x5044,	// (0x00093476) main_mup2_pane_t1_ParamLimits

0x5044,	// (0x00093476) main_mup2_pane_t1

0x505a,	// (0x0009348c) main_mup2_pane_t2_ParamLimits

0x505a,	// (0x0009348c) main_mup2_pane_t2

0x5070,	// (0x000934a2) main_mup2_pane_t3_ParamLimits

0x5070,	// (0x000934a2) main_mup2_pane_t3

0x5086,	// (0x000934b8) main_mup2_pane_t4_ParamLimits

0x5086,	// (0x000934b8) main_mup2_pane_t4

0x509e,	// (0x000934d0) main_mup2_pane_t5_ParamLimits

0x509e,	// (0x000934d0) main_mup2_pane_t5

0x50b6,	// (0x000934e8) main_mup2_pane_t6_ParamLimits

0x50b6,	// (0x000934e8) main_mup2_pane_t6

0x0005,

0xf5c5,	// (0x0009d9f7) main_mup2_pane_t_ParamLimits

0xf5c5,	// (0x0009d9f7) main_mup2_pane_t

0x50e6,	// (0x00093518) mup2_visualizer_pane_ParamLimits

0x50e6,	// (0x00093518) mup2_visualizer_pane

0x5114,	// (0x00093546) mup_progress_pane_cp_ParamLimits

0x5114,	// (0x00093546) mup_progress_pane_cp

0xaa97,	// (0x00098ec9) mup_volume_pane_cp_ParamLimits

0xaa97,	// (0x00098ec9) mup_volume_pane_cp

0x5128,	// (0x0009355a) mup2_visualizer_pane_g1_ParamLimits

0x5128,	// (0x0009355a) mup2_visualizer_pane_g1

0x513f,	// (0x00093571) mup2_visualizer_pane_g2_ParamLimits

0x513f,	// (0x00093571) mup2_visualizer_pane_g2

0x514b,	// (0x0009357d) mup2_visualizer_pane_g3_ParamLimits

0x514b,	// (0x0009357d) mup2_visualizer_pane_g3

0x0002,

0xf5d2,	// (0x0009da04) mup2_visualizer_pane_g_ParamLimits

0xf5d2,	// (0x0009da04) mup2_visualizer_pane_g

0xe62f,	// (0x0009ca61) aid_size_cell_fmradio

0x44cb,	// (0x000928fd) aid_height_parent_landcape

0xdc08,	// (0x0009c03a) wml_content_pane_cp

0xdc10,	// (0x0009c042) wml_tabs_pane

0xdc19,	// (0x0009c04b) popup_wml_miniature_window

0xdc21,	// (0x0009c053) scroll_pane_cp021

0xdc35,	// (0x0009c067) wml_content_pane_comp8

0xa465,	// (0x00098897) bg_popup_sub_pane_cp05

0x5169,	// (0x0009359b) popup_wml_miniature_window_g1

0x5171,	// (0x000935a3) wml_miniature_view_pane

0x5179,	// (0x000935ab) aid_size_wml_view

0x5181,	// (0x000935b3) wml_miniature_view_pane_g1

0x518a,	// (0x000935bc) wml_miniature_view_pane_g2

0x5193,	// (0x000935c5) wml_miniature_view_pane_g3

0x519b,	// (0x000935cd) wml_miniature_view_pane_g4

0x51a3,	// (0x000935d5) wml_miniature_view_pane_g5

0x51ab,	// (0x000935dd) wml_miniature_view_pane_g6

0x51b3,	// (0x000935e5) wml_miniature_view_pane_g7

0x51bb,	// (0x000935ed) wml_miniature_view_pane_g8

0x0007,

0xf5d9,	// (0x0009da0b) wml_miniature_view_pane_g

0x51c3,	// (0x000935f5) background_graphic_ParamLimits

0x51c3,	// (0x000935f5) background_graphic

0x51cf,	// (0x00093601) wml_tabs_2_pane

0x51d8,	// (0x0009360a) wml_tabs_3_pane_ParamLimits

0x51d8,	// (0x0009360a) wml_tabs_3_pane

0x51ea,	// (0x0009361c) wml_tabs_4_pane_ParamLimits

0x51ea,	// (0x0009361c) wml_tabs_4_pane

0x5200,	// (0x00093632) wml_tabs_5_pane_ParamLimits

0x5200,	// (0x00093632) wml_tabs_5_pane

0x521a,	// (0x0009364c) wml_tabs_pane_g2_ParamLimits

0x521a,	// (0x0009364c) wml_tabs_pane_g2

0x522e,	// (0x00093660) wml_tabs_pane_g3_ParamLimits

0x522e,	// (0x00093660) wml_tabs_pane_g3

0x5242,	// (0x00093674) wml_tabs_2_active_pane_ParamLimits

0x5242,	// (0x00093674) wml_tabs_2_active_pane

0x5256,	// (0x00093688) wml_tabs_2_passive_pane_ParamLimits

0x5256,	// (0x00093688) wml_tabs_2_passive_pane

0x526a,	// (0x0009369c) wml_tabs_3_active_pane_cp_ParamLimits

0x526a,	// (0x0009369c) wml_tabs_3_active_pane_cp

0x527f,	// (0x000936b1) wml_tabs_3_passive_pane_ParamLimits

0x527f,	// (0x000936b1) wml_tabs_3_passive_pane

0x5292,	// (0x000936c4) wml_tabs_3_passive_pane_cp_ParamLimits

0x5292,	// (0x000936c4) wml_tabs_3_passive_pane_cp

0x52a9,	// (0x000936db) tabs_4_active_pane

0x52b1,	// (0x000936e3) tabs_4_passive_pane

0x52bb,	// (0x000936ed) tabs_4_passive_pane_cp

0x52c3,	// (0x000936f5) tabs_4_passive_pane_cp2

0x4089,	// (0x000924bb) aid_height_text

0x3201,	// (0x00091633) mup_volume_cont_pane_ParamLimits

0x3201,	// (0x00091633) mup_volume_cont_pane

0x1188,	// (0x0008f5ba) aid_size_cell_pinb

0xa6f0,	// (0x00098b22) aid_size_list_pinb

0x5100,	// (0x00093532) mup2_volume_cont_pane_ParamLimits

0x5100,	// (0x00093532) mup2_volume_cont_pane

0xaa83,	// (0x00098eb5) mup2_volume_cont_pane_g1_ParamLimits

0xaa83,	// (0x00098eb5) mup2_volume_cont_pane_g1

0x0e39,	// (0x0008f26b) aid_size_cell_touch_ParamLimits

0x0e39,	// (0x0008f26b) aid_size_cell_touch

0x1077,	// (0x0008f4a9) touch_pane_ParamLimits

0x1077,	// (0x0008f4a9) touch_pane

0x0e1b,	// (0x0008f24d) main_rss2_pane

0x52d6,	// (0x00093708) listscroll_rss2_pane

0x52df,	// (0x00093711) rss2_navigation_pane

0x52e7,	// (0x00093719) list_rss2_pane

0xe1fc,	// (0x0009c62e) scroll_pane_cp22

0x52ef,	// (0x00093721) rss2_navigation_pane_g1

0x52f8,	// (0x0009372a) rss2_navigation_pane_g2

0x5300,	// (0x00093732) rss2_navigation_pane_g3

0x0002,

0xf5ea,	// (0x0009da1c) rss2_navigation_pane_g

0x5308,	// (0x0009373a) rss2_navigation_pane_t1

0x5316,	// (0x00093748) rss2_list_single_pane_ParamLimits

0x5316,	// (0x00093748) rss2_list_single_pane

0x532e,	// (0x00093760) rss2_list_single_pane_t2

0x533c,	// (0x0009376e) rss2_list_single_pane_t3_ParamLimits

0x533c,	// (0x0009376e) rss2_list_single_pane_t3

0x5359,	// (0x0009378b) rss2_list_single_pane_t4

0x29d9,	// (0x00090e0b) smil_status_pane_g1

0xa046,	// (0x00098478) main_image2_pane_ParamLimits

0xa046,	// (0x00098478) main_image2_pane

0x4cc2,	// (0x000930f4) main_camera2_pane_g9_ParamLimits

0x4cc2,	// (0x000930f4) main_camera2_pane_g9

0x4df0,	// (0x00093222) main_camera2_pane_t5_ParamLimits

0x4df0,	// (0x00093222) main_camera2_pane_t5

0xaa53,	// (0x00098e85) main_camera2_pane_t6_ParamLimits

0xaa53,	// (0x00098e85) main_camera2_pane_t6

0x5367,	// (0x00093799) main_image2_pane_g1_ParamLimits

0x5367,	// (0x00093799) main_image2_pane_g1

0x38a6,	// (0x00091cd8) smil2_video_pane_ParamLimits

0x38a6,	// (0x00091cd8) smil2_video_pane

0x0e79,	// (0x0008f2ab) aid_zoom_text_primary_cp

0xa03c,	// (0x0009846e) popup_preview_fixed_window

0xdb71,	// (0x0009bfa3) im_reading_pane_g1

0x4b39,	// (0x00092f6b) cams2_bc_adjust_pane_cp_ParamLimits

0x4b39,	// (0x00092f6b) cams2_bc_adjust_pane_cp

0x4e1f,	// (0x00093251) cams2_bc_adjust_pane_ParamLimits

0x4e1f,	// (0x00093251) cams2_bc_adjust_pane

0xaabc,	// (0x00098eee) cams2_bc_adjust_pane_g1

0xaac4,	// (0x00098ef6) cams2_slider_pane

0xaacd,	// (0x00098eff) cams2_slider_pane_g1

0xaad6,	// (0x00098f08) cams2_slider_pane_g2

0x0006,

0xf5f1,	// (0x0009da23) cams2_slider_pane_g

0x1247,	// (0x0008f679) calc_display_pane_ParamLimits

0x126f,	// (0x0008f6a1) calc_paper_pane_ParamLimits

0x1292,	// (0x0008f6c4) grid_calc_pane_ParamLimits

0xa9c0,	// (0x00098df2) popup_clock_digital_window_t1_ParamLimits

0xe5cc,	// (0x0009c9fe) main_image_pane_t1

0x1229,	// (0x0008f65b) aid_size_cell_calc_ParamLimits

0x1229,	// (0x0008f65b) aid_size_cell_calc

0x452f,	// (0x00092961) popup_blid_sat_info2_window_ParamLimits

0x452f,	// (0x00092961) popup_blid_sat_info2_window

0x5385,	// (0x000937b7) aid_size_cell_blid

0x538d,	// (0x000937bf) bg_popup_window_pane_cp07

0x53b0,	// (0x000937e2) grid_popup_blid_pane

0x53ba,	// (0x000937ec) heading_pane_cp05_ParamLimits

0x53ba,	// (0x000937ec) heading_pane_cp05

0xab48,	// (0x00098f7a) cell_popup_blid_pane_ParamLimits

0xab48,	// (0x00098f7a) cell_popup_blid_pane

0xab6e,	// (0x00098fa0) cell_popup_blid_pane_g1

0xab76,	// (0x00098fa8) cell_popup_blid_pane_t1

0x50d0,	// (0x00093502) mup2_indicator_pane_ParamLimits

0x50d0,	// (0x00093502) mup2_indicator_pane

0xe349,	// (0x0009c77b) mup2_visualizer_osc_pane

0x5157,	// (0x00093589) mup2_visualizer_spec_pane_ParamLimits

0x5157,	// (0x00093589) mup2_visualizer_spec_pane

0x542c,	// (0x0009385e) mup2_spec_half_pane

0x5435,	// (0x00093867) mup2_spec_half_pane_cp

0x543d,	// (0x0009386f) mup2_spec_bar_pane_ParamLimits

0x543d,	// (0x0009386f) mup2_spec_bar_pane

0x48b8,	// (0x00092cea) mup2_spec_bar_pane_g1

0x48c2,	// (0x00092cf4) mup2_spec_bar_pane_g2

0x0001,

0xf564,	// (0x0009d996) mup2_spec_bar_pane_g

0x545d,	// (0x0009388f) mup2_osc_middle_pane

0x48f4,	// (0x00092d26) mup2_visualizer_osc_pane_g1

0xa074,	// (0x000984a6) popup_number_entry_window_t1_ParamLimits

0xa087,	// (0x000984b9) popup_number_entry_window_t2_ParamLimits

0xa099,	// (0x000984cb) popup_number_entry_window_t3_ParamLimits

0x10c9,	// (0x0008f4fb) popup_number_entry_window_t5_ParamLimits

0x10c9,	// (0x0008f4fb) popup_number_entry_window_t5

0xf0ec,	// (0x0009d51e) popup_number_entry_window_t_ParamLimits

0xa0ab,	// (0x000984dd) text_title_cp2_ParamLimits

0xa9ff,	// (0x00098e31) aid_hotspot_pointer_text2_pane

0xaa25,	// (0x00098e57) main_viewer_pane_g9_ParamLimits

0xaa25,	// (0x00098e57) main_viewer_pane_g9

0xdda0,	// (0x0009c1d2) cale_month_pane_t1_ParamLimits

0xdddd,	// (0x0009c20f) bg_cale_pane_ParamLimits

0xddf5,	// (0x0009c227) list_cale_pane_ParamLimits

0xda01,	// (0x0009be33) listscroll_cale_day_pane_t1

0xde06,	// (0x0009c238) scroll_pane_cp09_ParamLimits

0x3237,	// (0x00091669) main_mup_eq_pane_t1_ParamLimits

0x3237,	// (0x00091669) main_mup_eq_pane_t1

0x3251,	// (0x00091683) main_mup_eq_pane_t2_ParamLimits

0x3251,	// (0x00091683) main_mup_eq_pane_t2

0x326b,	// (0x0009169d) main_mup_eq_pane_t3_ParamLimits

0x326b,	// (0x0009169d) main_mup_eq_pane_t3

0x3287,	// (0x000916b9) main_mup_eq_pane_t4_ParamLimits

0x3287,	// (0x000916b9) main_mup_eq_pane_t4

0x32a3,	// (0x000916d5) main_mup_eq_pane_t5_ParamLimits

0x32a3,	// (0x000916d5) main_mup_eq_pane_t5

0x32bf,	// (0x000916f1) main_mup_eq_pane_t6_ParamLimits

0x32bf,	// (0x000916f1) main_mup_eq_pane_t6

0x32d3,	// (0x00091705) main_mup_eq_pane_t7_ParamLimits

0x32d3,	// (0x00091705) main_mup_eq_pane_t7

0x32e7,	// (0x00091719) main_mup_eq_pane_t8_ParamLimits

0x32e7,	// (0x00091719) main_mup_eq_pane_t8

0x32fb,	// (0x0009172d) main_mup_eq_pane_t9_ParamLimits

0x32fb,	// (0x0009172d) main_mup_eq_pane_t9

0x3315,	// (0x00091747) main_mup_eq_pane_t10_ParamLimits

0x3315,	// (0x00091747) main_mup_eq_pane_t10

0x0009,

0xf3ef,	// (0x0009d821) main_mup_eq_pane_t_ParamLimits

0xf3ef,	// (0x0009d821) main_mup_eq_pane_t

0x33c4,	// (0x000917f6) mup_equalizer_pane_cp5_ParamLimits

0x33d8,	// (0x0009180a) mup_equalizer_pane_cp6_ParamLimits

0x33ec,	// (0x0009181e) mup_equalizer_pane_cp7_ParamLimits

0x0e1b,	// (0x0008f24d) main_gallery_pane

0x490e,	// (0x00092d40) smil2_volume_pane

0x4916,	// (0x00092d48) smil_status_volume_pane_g1_ParamLimits

0x4929,	// (0x00092d5b) smil_status_volume_pane_g2_ParamLimits

0xaa31,	// (0x00098e63) smil_status_volume_pane_g3_ParamLimits

0xf569,	// (0x0009d99b) smil_status_volume_pane_g_ParamLimits

0x538d,	// (0x000937bf) bg_popup_window_pane_cp07_ParamLimits

0x539b,	// (0x000937cd) blid_firmament_pane

0x5466,	// (0x00093898) aid_size_cell_gallery_ParamLimits

0x5466,	// (0x00093898) aid_size_cell_gallery

0x547c,	// (0x000938ae) grid_gallery_pane_ParamLimits

0x547c,	// (0x000938ae) grid_gallery_pane

0x5495,	// (0x000938c7) cell_gallery_pane_ParamLimits

0x5495,	// (0x000938c7) cell_gallery_pane

0xab84,	// (0x00098fb6) bg_cell_gallery_focus_pane_ParamLimits

0xab84,	// (0x00098fb6) bg_cell_gallery_focus_pane

0xab96,	// (0x00098fc8) cell_gallery_pane_g1_ParamLimits

0xab96,	// (0x00098fc8) cell_gallery_pane_g1

0x54de,	// (0x00093910) cell_gallery_pane_g2_ParamLimits

0x54de,	// (0x00093910) cell_gallery_pane_g2

0x54eb,	// (0x0009391d) cell_gallery_pane_g3_ParamLimits

0x54eb,	// (0x0009391d) cell_gallery_pane_g3

0xaba2,	// (0x00098fd4) cell_gallery_pane_g4_ParamLimits

0xaba2,	// (0x00098fd4) cell_gallery_pane_g4

0x0003,

0xf617,	// (0x0009da49) cell_gallery_pane_g_ParamLimits

0xf617,	// (0x0009da49) cell_gallery_pane_g

0xabae,	// (0x00098fe0) bg_cell_gallery_focus_pane_g1

0xabb6,	// (0x00098fe8) bg_cell_gallery_focus_pane_g2

0xabbe,	// (0x00098ff0) bg_cell_gallery_focus_pane_g3

0xabc6,	// (0x00098ff8) bg_cell_gallery_focus_pane_g4

0xabce,	// (0x00099000) bg_cell_gallery_focus_pane_g5

0xabd6,	// (0x00099008) bg_cell_gallery_focus_pane_g6

0xabde,	// (0x00099010) bg_cell_gallery_focus_pane_g7

0xabe6,	// (0x00099018) bg_cell_gallery_focus_pane_g8

0x0007,

0xf620,	// (0x0009da52) bg_cell_gallery_focus_pane_g

0xabee,	// (0x00099020) aid_firma_cardinal

0xac02,	// (0x00099034) blid_firmament_pane_t1

0xac19,	// (0x0009904b) blid_firmament_pane_t2

0xac30,	// (0x00099062) blid_firmament_pane_t3

0xac47,	// (0x00099079) blid_firmament_pane_t4

0x0003,

0xf631,	// (0x0009da63) blid_firmament_pane_t

0xac5e,	// (0x00099090) blid_sat_info_pane

0xac6e,	// (0x000990a0) blid_sat_info_pane_g1

0xac6e,	// (0x000990a0) blid_sat_info_pane_g2

0x0001,

0xf63a,	// (0x0009da6c) blid_sat_info_pane_g

0xac78,	// (0x000990aa) blid_sat_info_pane_t1

0xac86,	// (0x000990b8) smil2_volume_content_pane

0xac8f,	// (0x000990c1) smil2_volume_pane_g1

0xac97,	// (0x000990c9) smil2_volume_content_pane_g1

0xaca0,	// (0x000990d2) smil2_volume_content_pane_g2

0xaca9,	// (0x000990db) smil2_volume_content_pane_g3

0xacb2,	// (0x000990e4) smil2_volume_content_pane_g4

0xacbb,	// (0x000990ed) smil2_volume_content_pane_g5

0xacc4,	// (0x000990f6) smil2_volume_content_pane_g6

0xaccd,	// (0x000990ff) smil2_volume_content_pane_g7

0xacd6,	// (0x00099108) smil2_volume_content_pane_g8

0xacdf,	// (0x00099111) smil2_volume_content_pane_g9

0xace8,	// (0x0009911a) smil2_volume_content_pane_g10

0x0009,

0xf63f,	// (0x0009da71) smil2_volume_content_pane_g

0x1714,	// (0x0008fb46) cale_week_day_heading_pane_t1_ParamLimits

0x1728,	// (0x0008fb5a) cale_week_day_heading_pane_t2_ParamLimits

0x173c,	// (0x0008fb6e) cale_week_day_heading_pane_t3_ParamLimits

0x1750,	// (0x0008fb82) cale_week_day_heading_pane_t4_ParamLimits

0x1764,	// (0x0008fb96) cale_week_day_heading_pane_t5_ParamLimits

0x1778,	// (0x0008fbaa) cale_week_day_heading_pane_t6_ParamLimits

0x178e,	// (0x0008fbc0) cale_week_day_heading_pane_t7_ParamLimits

0xf1f1,	// (0x0009d623) cale_week_day_heading_pane_t_ParamLimits

0xda13,	// (0x0009be45) bg_cale_side_pane_ParamLimits

0x17a2,	// (0x0008fbd4) cale_week_time_pane_t1_ParamLimits

0x17ba,	// (0x0008fbec) cale_week_time_pane_t2_ParamLimits

0x17d2,	// (0x0008fc04) cale_week_time_pane_t3_ParamLimits

0x17ea,	// (0x0008fc1c) cale_week_time_pane_t4_ParamLimits

0x1802,	// (0x0008fc34) cale_week_time_pane_t5_ParamLimits

0x181a,	// (0x0008fc4c) cale_week_time_pane_t6_ParamLimits

0x1832,	// (0x0008fc64) cale_week_time_pane_t7_ParamLimits

0x184a,	// (0x0008fc7c) cale_week_time_pane_t8_ParamLimits

0xf200,	// (0x0009d632) cale_week_time_pane_t_ParamLimits

0x1862,	// (0x0008fc94) cell_cale_week_pane_g2_ParamLimits

0xda13,	// (0x0009be45) bg_cale_side_pane_cp01_ParamLimits

0x2828,	// (0x00090c5a) cale_month_week_pane_t1_ParamLimits

0x283f,	// (0x00090c71) cale_month_week_pane_t2_ParamLimits

0x2856,	// (0x00090c88) cale_month_week_pane_t3_ParamLimits

0x286d,	// (0x00090c9f) cale_month_week_pane_t4_ParamLimits

0x2884,	// (0x00090cb6) cale_month_week_pane_t5_ParamLimits

0x289b,	// (0x00090ccd) cale_month_week_pane_t6_ParamLimits

0xf2b8,	// (0x0009d6ea) cale_month_week_pane_t_ParamLimits

0xa940,	// (0x00098d72) cell_cale_month_pane_g1_ParamLimits

0x0e1b,	// (0x0008f24d) main_cale_event_viewer_pane

0x0e1b,	// (0x0008f24d) listscroll_cale_event_viewer_pane

0xacf1,	// (0x00099123) list_cale_ev_pane

0xacf9,	// (0x0009912b) scroll_pane_cp023

0xad05,	// (0x00099137) field_cale_ev_pane_ParamLimits

0xad05,	// (0x00099137) field_cale_ev_pane

0xad1f,	// (0x00099151) field_cale_ev_content_pane_ParamLimits

0xad1f,	// (0x00099151) field_cale_ev_content_pane

0xad2b,	// (0x0009915d) field_cale_ev_pane_g1_ParamLimits

0xad2b,	// (0x0009915d) field_cale_ev_pane_g1

0xad37,	// (0x00099169) field_cale_ev_pane_g2_ParamLimits

0xad37,	// (0x00099169) field_cale_ev_pane_g2

0xad4f,	// (0x00099181) field_cale_ev_pane_g3_ParamLimits

0xad4f,	// (0x00099181) field_cale_ev_pane_g3

0x0002,

0xf654,	// (0x0009da86) field_cale_ev_pane_g_ParamLimits

0xf654,	// (0x0009da86) field_cale_ev_pane_g

0xad67,	// (0x00099199) field_cale_ev_pane_t1_ParamLimits

0xad67,	// (0x00099199) field_cale_ev_pane_t1

0xad7e,	// (0x000991b0) field_cale_ev_content_pane_t1_ParamLimits

0xad7e,	// (0x000991b0) field_cale_ev_content_pane_t1

0xe4b2,	// (0x0009c8e4) bg_button_pane_cp01

0xa7fb,	// (0x00098c2d) listscroll_cale_week_pane_ParamLimits

0x1529,	// (0x0008f95b) popup_toolbar_window_cp01

0xda01,	// (0x0009be33) listscroll_cale_week_pane_t1_ParamLimits

0xa7fb,	// (0x00098c2d) listscroll_cale_day_pane_ParamLimits

0x2a38,	// (0x00090e6a) popup_toolbar_window_cp02

0xda01,	// (0x0009be33) listscroll_cale_day_pane_t1_ParamLimits

0xa7fb,	// (0x00098c2d) main_cale_month_pane_ParamLimits

0x478c,	// (0x00092bbe) popup_toolbar_window_cp03_ParamLimits

0x478c,	// (0x00092bbe) popup_toolbar_window_cp03

0x376a,	// (0x00091b9c) main_image_pane_g2_ParamLimits

0x376a,	// (0x00091b9c) main_image_pane_g2

0x377b,	// (0x00091bad) main_image_pane_g3_ParamLimits

0x377b,	// (0x00091bad) main_image_pane_g3

0x0002,

0xf477,	// (0x0009d8a9) main_image_pane_g_ParamLimits

0xf477,	// (0x0009d8a9) main_image_pane_g

0xe5cc,	// (0x0009c9fe) main_image_pane_t1_ParamLimits

0x378c,	// (0x00091bbe) main_image_pane_t2_ParamLimits

0x378c,	// (0x00091bbe) main_image_pane_t2

0x379e,	// (0x00091bd0) main_image_pane_t3_ParamLimits

0x379e,	// (0x00091bd0) main_image_pane_t3

0x37c6,	// (0x00091bf8) main_image_pane_t4_ParamLimits

0x37c6,	// (0x00091bf8) main_image_pane_t4

0x0003,

0xf47e,	// (0x0009d8b0) main_image_pane_t_ParamLimits

0xf47e,	// (0x0009d8b0) main_image_pane_t

0x37e6,	// (0x00091c18) popup_image_details_window_cp01

0x37f0,	// (0x00091c22) popup_toobar_trans_pane_cp01_ParamLimits

0x37f0,	// (0x00091c22) popup_toobar_trans_pane_cp01

0x4610,	// (0x00092a42) popup_image_details_window_ParamLimits

0x4610,	// (0x00092a42) popup_image_details_window

0x4628,	// (0x00092a5a) popup_image_focus_window

0x4af3,	// (0x00092f25) camera2_autofocus_pane_ParamLimits

0x4af3,	// (0x00092f25) camera2_autofocus_pane

0x0e1b,	// (0x0008f24d) bg_popup_sub_pane_cp06

0xad9b,	// (0x000991cd) popup_image_focus_window_g1

0xada3,	// (0x000991d5) popup_image_focus_window_g2

0xadab,	// (0x000991dd) popup_image_focus_window_g3

0xadb3,	// (0x000991e5) popup_image_focus_window_g4

0x0003,

0xf65b,	// (0x0009da8d) popup_image_focus_window_g

0xadbb,	// (0x000991ed) popup_image_focus_window_t1

0xadc9,	// (0x000991fb) popup_image_focus_window_t2

0xadd9,	// (0x0009920b) popup_image_focus_window_t3

0x0002,

0xf664,	// (0x0009da96) popup_image_focus_window_t

0xade7,	// (0x00099219) camera2_autofocus_pane_g1

0xa046,	// (0x00098478) bg_tb_trans_pane_cp01

0xadf5,	// (0x00099227) popup_image_details_window_g1

0xae08,	// (0x0009923a) popup_image_details_window_g2

0x0002,

0xf676,	// (0x0009daa8) popup_image_details_window_g

0xae31,	// (0x00099263) popup_image_details_window_t1

0xae43,	// (0x00099275) popup_image_details_window_t2

0xae5c,	// (0x0009928e) popup_image_details_window_t3

0xae70,	// (0x000992a2) popup_image_details_window_t4

0xae8b,	// (0x000992bd) popup_image_details_window_t5

0x0004,

0xf67d,	// (0x0009daaf) popup_image_details_window_t

0xa7c3,	// (0x00098bf5) bg_calc_paper_pane_ParamLimits

0xa7d7,	// (0x00098c09) grid_highlight_pane_cp013

0xa7e1,	// (0x00098c13) list_calc_pane_ParamLimits

0xa7f3,	// (0x00098c25) scroll_pane_cp024

0xa7fb,	// (0x00098c2d) bg_calc_display_pane_ParamLimits

0x1387,	// (0x0008f7b9) calc_display_pane_t1_ParamLimits

0x1399,	// (0x0008f7cb) calc_display_pane_t2_ParamLimits

0xa807,	// (0x00098c39) calc_display_pane_t3_ParamLimits

0xf173,	// (0x0009d5a5) calc_display_pane_t_ParamLimits

0x1454,	// (0x0008f886) cell_calc_pane_g2

0x0001,

0xf190,	// (0x0009d5c2) cell_calc_pane_g

0x145d,	// (0x0008f88f) cell_calc_pane_t1

0xd920,	// (0x0009bd52) grid_highlight_pane_cp02_ParamLimits

0xd936,	// (0x0009bd68) toolbar_button_pane_cp01_ParamLimits

0xd936,	// (0x0009bd68) toolbar_button_pane_cp01

0xe611,	// (0x0009ca43) temp_image_control_pane_ParamLimits

0xe611,	// (0x0009ca43) temp_image_control_pane

0xa046,	// (0x00098478) main_mp3_pane

0xaea5,	// (0x000992d7) temp_image_control_pane_g1_ParamLimits

0xaea5,	// (0x000992d7) temp_image_control_pane_g1

0xaeb3,	// (0x000992e5) temp_image_control_pane_g2_ParamLimits

0xaeb3,	// (0x000992e5) temp_image_control_pane_g2

0xaec5,	// (0x000992f7) temp_image_control_pane_g3_ParamLimits

0xaec5,	// (0x000992f7) temp_image_control_pane_g3

0x5528,	// (0x0009395a) temp_image_control_pane_g4_ParamLimits

0x5528,	// (0x0009395a) temp_image_control_pane_g4

0x0003,

0xf688,	// (0x0009daba) temp_image_control_pane_g_ParamLimits

0xf688,	// (0x0009daba) temp_image_control_pane_g

0xaea5,	// (0x000992d7) main_mp3_pane_g1

0x553b,	// (0x0009396d) main_mp3_pane_g2

0x0007,

0xf691,	// (0x0009dac3) main_mp3_pane_g

0xaf08,	// (0x0009933a) main_mp3_pane_t1

0xda82,	// (0x0009beb4) main_camera_pane_g8_ParamLimits

0xda82,	// (0x0009beb4) main_camera_pane_g8

0x1b09,	// (0x0008ff3b) main_video_pane_g7_ParamLimits

0x1b09,	// (0x0008ff3b) main_video_pane_g7

0xaa71,	// (0x00098ea3) main_camera2_pane_t7_ParamLimits

0xaa71,	// (0x00098ea3) main_camera2_pane_t7

0xdbc8,	// (0x0009bffa) scroll_pane_cp025_ParamLimits

0xdbc8,	// (0x0009bffa) scroll_pane_cp025

0xdbdc,	// (0x0009c00e) scroll_pane_cp026_ParamLimits

0xdbdc,	// (0x0009c00e) scroll_pane_cp026

0xdbeb,	// (0x0009c01d) wml_content_pane_ParamLimits

0x0e1b,	// (0x0008f24d) main_touch_calib_pane

0x5607,	// (0x00093a39) main_touch_calib_pane_g1

0x5613,	// (0x00093a45) main_touch_calib_pane_g2

0x561f,	// (0x00093a51) main_touch_calib_pane_g3

0x562b,	// (0x00093a5d) main_touch_calib_pane_g4

0x0003,

0xf6af,	// (0x0009dae1) main_touch_calib_pane_g

0x5637,	// (0x00093a69) main_touch_calib_pane_t1

0x5651,	// (0x00093a83) main_touch_calib_pane_t2

0x0004,

0xf6b8,	// (0x0009daea) main_touch_calib_pane_t

0xe28a,	// (0x0009c6bc) mup_progress_pane_cp02

0xe2a9,	// (0x0009c6db) navi_pane_g1

0xe30b,	// (0x0009c73d) navi_pane_mp_t3

0xa046,	// (0x00098478) main_mp3_pane_ParamLimits

0x47dd,	// (0x00092c0f) navi_pane_ParamLimits

0xaea5,	// (0x000992d7) main_mp3_pane_g1_ParamLimits

0x553b,	// (0x0009396d) main_mp3_pane_g2_ParamLimits

0x5549,	// (0x0009397b) main_mp3_pane_g3_ParamLimits

0x5549,	// (0x0009397b) main_mp3_pane_g3

0x5557,	// (0x00093989) main_mp3_pane_g4_ParamLimits

0x5557,	// (0x00093989) main_mp3_pane_g4

0xaed5,	// (0x00099307) main_mp3_pane_g5_ParamLimits

0xaed5,	// (0x00099307) main_mp3_pane_g5

0xaee3,	// (0x00099315) main_mp3_pane_g6_ParamLimits

0xaee3,	// (0x00099315) main_mp3_pane_g6

0xaef0,	// (0x00099322) main_mp3_pane_g7_ParamLimits

0xaef0,	// (0x00099322) main_mp3_pane_g7

0xaefc,	// (0x0009932e) main_mp3_pane_g8_ParamLimits

0xaefc,	// (0x0009932e) main_mp3_pane_g8

0xf691,	// (0x0009dac3) main_mp3_pane_g_ParamLimits

0x5565,	// (0x00093997) main_mp3_pane_t2

0x5573,	// (0x000939a5) main_mp3_pane_t3

0xaf16,	// (0x00099348) main_mp3_pane_t4

0xaf24,	// (0x00099356) main_mp3_pane_t5

0x0005,

0xf6a2,	// (0x0009dad4) main_mp3_pane_t

0xaf32,	// (0x00099364) mup_progress_pane_cp01

0x0e79,	// (0x0008f2ab) aid_zoom_text_secondary2

0xacf1,	// (0x00099123) list_cale_ev2_pane

0xacf9,	// (0x0009912b) scroll_pane_cp023_ParamLimits

0x56a7,	// (0x00093ad9) field_cale_ev2_pane_ParamLimits

0x56a7,	// (0x00093ad9) field_cale_ev2_pane

0x56cd,	// (0x00093aff) field_cale_ev2_pane_g1_ParamLimits

0x56cd,	// (0x00093aff) field_cale_ev2_pane_g1

0x56d9,	// (0x00093b0b) field_cale_ev2_pane_g2_ParamLimits

0x56d9,	// (0x00093b0b) field_cale_ev2_pane_g2

0x56f1,	// (0x00093b23) field_cale_ev2_pane_g3_ParamLimits

0x56f1,	// (0x00093b23) field_cale_ev2_pane_g3

0x0003,

0xf6c3,	// (0x0009daf5) field_cale_ev2_pane_g_ParamLimits

0xf6c3,	// (0x0009daf5) field_cale_ev2_pane_g

0xaf46,	// (0x00099378) field_cale_ev2_pane_t1_ParamLimits

0xaf46,	// (0x00099378) field_cale_ev2_pane_t1

0xaf5d,	// (0x0009938f) field_cale_ev2_pane_t2_ParamLimits

0xaf5d,	// (0x0009938f) field_cale_ev2_pane_t2

0x0001,

0xf6cc,	// (0x0009dafe) field_cale_ev2_pane_t_ParamLimits

0xf6cc,	// (0x0009dafe) field_cale_ev2_pane_t

0x361a,	// (0x00091a4c) main_postcard_pane_g5_ParamLimits

0x361a,	// (0x00091a4c) main_postcard_pane_g5

0x3630,	// (0x00091a62) main_postcard_pane_g6_ParamLimits

0x3630,	// (0x00091a62) main_postcard_pane_g6

0x18b9,	// (0x0008fceb) camera2_autofocus_pane_cp_ParamLimits

0x18b9,	// (0x0008fceb) camera2_autofocus_pane_cp

0xa046,	// (0x00098478) main_mup3_pane

0x5729,	// (0x00093b5b) main_mup3_pane_g1_ParamLimits

0x5729,	// (0x00093b5b) main_mup3_pane_g1

0x574b,	// (0x00093b7d) main_mup3_pane_g2_ParamLimits

0x574b,	// (0x00093b7d) main_mup3_pane_g2

0x57cc,	// (0x00093bfe) main_mup3_pane_g3_ParamLimits

0x57cc,	// (0x00093bfe) main_mup3_pane_g3

0x580e,	// (0x00093c40) main_mup3_pane_g4_ParamLimits

0x580e,	// (0x00093c40) main_mup3_pane_g4

0x5850,	// (0x00093c82) main_mup3_pane_g5_ParamLimits

0x5850,	// (0x00093c82) main_mup3_pane_g5

0x5894,	// (0x00093cc6) main_mup3_pane_g6_ParamLimits

0x5894,	// (0x00093cc6) main_mup3_pane_g6

0xaf72,	// (0x000993a4) main_mup3_pane_g7_ParamLimits

0xaf72,	// (0x000993a4) main_mup3_pane_g7

0x0007,

0xf6dc,	// (0x0009db0e) main_mup3_pane_g_ParamLimits

0xf6dc,	// (0x0009db0e) main_mup3_pane_g

0x5910,	// (0x00093d42) main_mup3_pane_t1_ParamLimits

0x5910,	// (0x00093d42) main_mup3_pane_t1

0x5984,	// (0x00093db6) main_mup3_pane_t2_ParamLimits

0x5984,	// (0x00093db6) main_mup3_pane_t2

0x5a58,	// (0x00093e8a) main_mup3_pane_t4_ParamLimits

0x5a58,	// (0x00093e8a) main_mup3_pane_t4

0x5ab2,	// (0x00093ee4) main_mup3_pane_t5_ParamLimits

0x5ab2,	// (0x00093ee4) main_mup3_pane_t5

0x5b66,	// (0x00093f98) main_mup3_pane_t6_ParamLimits

0x5b66,	// (0x00093f98) main_mup3_pane_t6

0x0005,

0xf6ed,	// (0x0009db1f) main_mup3_pane_t_ParamLimits

0xf6ed,	// (0x0009db1f) main_mup3_pane_t

0x5c1a,	// (0x0009404c) mup3_progress_pane_ParamLimits

0x5c1a,	// (0x0009404c) mup3_progress_pane

0x5c96,	// (0x000940c8) popup_mup3_control_window_ParamLimits

0x5c96,	// (0x000940c8) popup_mup3_control_window

0xaf80,	// (0x000993b2) popup_mup3_text_window

0x5cc8,	// (0x000940fa) mup3_progress_pane_t1

0x5cdf,	// (0x00094111) mup3_progress_pane_t2

0xaf88,	// (0x000993ba) mup3_progress_pane_t3

0x0002,

0xf6fa,	// (0x0009db2c) mup3_progress_pane_t

0xaf9f,	// (0x000993d1) mup_progress_pane_cp03

0x0e1b,	// (0x0008f24d) bg_tb_trans_pane_cp04

0x5cf6,	// (0x00094128) mup3_volume_pane

0x5cfe,	// (0x00094130) popup_mup3_control_window_g1

0x5d07,	// (0x00094139) mup3_volume_pane_g1

0x5d10,	// (0x00094142) mup3_volume_pane_g2

0x5d19,	// (0x0009414b) mup3_volume_pane_g3

0x0002,

0xf701,	// (0x0009db33) mup3_volume_pane_g

0x0e1b,	// (0x0008f24d) bg_tb_trans_pane_cp03

0xafaf,	// (0x000993e1) popup_mup3_text_window_g1

0xafb7,	// (0x000993e9) popup_mup3_text_window_t1

0xa855,	// (0x00098c87) list_calc_item_pane_g1_ParamLimits

0x52cd,	// (0x000936ff) mup_volume_pane_cp_g1

0x566b,	// (0x00093a9d) main_touch_calib_pane_t3

0x567f,	// (0x00093ab1) main_touch_calib_pane_t4

0x5693,	// (0x00093ac5) main_touch_calib_pane_t5

0x0e25,	// (0x0008f257) aid_cell_size_toolbar2

0x0e2d,	// (0x0008f25f) aid_popup3_width_pane

0x0e69,	// (0x0008f29b) aid_zoom_text_msg_primary

0xa92a,	// (0x00098d5c) vorec_t7

0xa819,	// (0x00098c4b) bg_calc_paper_pane_g1_ParamLimits

0xa825,	// (0x00098c57) bg_calc_paper_pane_g2_ParamLimits

0xa831,	// (0x00098c63) bg_calc_paper_pane_g3_ParamLimits

0xa83d,	// (0x00098c6f) bg_calc_paper_pane_g4_ParamLimits

0xa849,	// (0x00098c7b) bg_calc_paper_pane_g5_ParamLimits

0x13e0,	// (0x0008f812) bg_calc_paper_pane_g6_ParamLimits

0x13ef,	// (0x0008f821) bg_calc_paper_pane_g7_ParamLimits

0x13fe,	// (0x0008f830) bg_calc_paper_pane_g8_ParamLimits

0xf17a,	// (0x0009d5ac) bg_calc_paper_pane_g_ParamLimits

0x1411,	// (0x0008f843) calc_bg_paper_pane_g9_ParamLimits

0x1a13,	// (0x0008fe45) image_qvga_pane_ParamLimits

0x1a13,	// (0x0008fe45) image_qvga_pane

0xa6c0,	// (0x00098af2) bg_popup_sub_pane_cp04_ParamLimits

0xe548,	// (0x0009c97a) popup_mup_playback_window_g1_ParamLimits

0xe554,	// (0x0009c986) popup_mup_playback_window_t1_ParamLimits

0xe569,	// (0x0009c99b) popup_mup_playback_window_t2_ParamLimits

0x02c6,	// (0x0008e6f8) popup_mup_playback_window_t_ParamLimits

0x4fea,	// (0x0009341c) main_mup2_pane_g3_ParamLimits

0x4fea,	// (0x0009341c) main_mup2_pane_g3

0x1e28,	// (0x0009025a) popup_toolbar_window_cp04

0xe95e,	// (0x0009cd90) popup_call2_audio_second_window_g3_ParamLimits

0xe95e,	// (0x0009cd90) popup_call2_audio_second_window_g3

0xed68,	// (0x0009d19a) popup_call2_audio_first_window_g4_ParamLimits

0xed68,	// (0x0009d19a) popup_call2_audio_first_window_g4

0x3e6e,	// (0x000922a0) popup_call2_audio_in_window_g4_ParamLimits

0x3e6e,	// (0x000922a0) popup_call2_audio_in_window_g4

0x374c,	// (0x00091b7e) aid_area_sk_bg_cut_ParamLimits

0x374c,	// (0x00091b7e) aid_area_sk_bg_cut

0xe57e,	// (0x0009c9b0) aid_area_sk_bg_cut_2_ParamLimits

0xe57e,	// (0x0009c9b0) aid_area_sk_bg_cut_2

0x54ce,	// (0x00093900) aid_placing_details_win

0x54d6,	// (0x00093908) aid_placing_details_win_2

0xade7,	// (0x00099219) camera2_autofocus_pane_g1_ParamLimits

0x1022,	// (0x0008f454) popup_fixed_preview_cale_window_ParamLimits

0x1022,	// (0x0008f454) popup_fixed_preview_cale_window

0xe35a,	// (0x0009c78c) navi_slider_pane_g3

0xe363,	// (0x0009c795) navi_slider_pane_g4

0xe36c,	// (0x0009c79e) navi_slider_pane_g5

0xe35a,	// (0x0009c78c) navi_slider_pane_g6

0xa9e6,	// (0x00098e18) navi_slider_pane_g7

0xe47f,	// (0x0009c8b1) mup_scale_pane_g3

0xe488,	// (0x0009c8ba) mup_scale_pane_g4

0xe491,	// (0x0009c8c3) mup_scale_pane_g5

0x3400,	// (0x00091832) mup_scale_pane_g6

0x3409,	// (0x0009183b) mup_scale_pane_g7

0xe35a,	// (0x0009c78c) cams2_slider_pane_g3

0x537d,	// (0x000937af) cams2_slider_pane_g4

0xaadf,	// (0x00098f11) cams2_slider_pane_g5

0xe35a,	// (0x0009c78c) cams2_slider_pane_g6

0xaae7,	// (0x00098f19) cams2_slider_pane_g7

0xac6e,	// (0x000990a0) camera2_autofocus_pane_cp_g1

0xafc5,	// (0x000993f7) bg_popup_preview_window_pane_cp02_ParamLimits

0xafc5,	// (0x000993f7) bg_popup_preview_window_pane_cp02

0xafd1,	// (0x00099403) list_fp_cale_pane_ParamLimits

0xafd1,	// (0x00099403) list_fp_cale_pane

0xafdd,	// (0x0009940f) popup_fixed_preview_cale_window_t1_ParamLimits

0xafdd,	// (0x0009940f) popup_fixed_preview_cale_window_t1

0x5d22,	// (0x00094154) popup_fixed_preview_cale_window_t2_ParamLimits

0x5d22,	// (0x00094154) popup_fixed_preview_cale_window_t2

0x5d37,	// (0x00094169) popup_fixed_preview_cale_window_t3_ParamLimits

0x5d37,	// (0x00094169) popup_fixed_preview_cale_window_t3

0x0002,

0xf708,	// (0x0009db3a) popup_fixed_preview_cale_window_t_ParamLimits

0xf708,	// (0x0009db3a) popup_fixed_preview_cale_window_t

0x5d4c,	// (0x0009417e) list_single_fp_cale_pane_ParamLimits

0x5d4c,	// (0x0009417e) list_single_fp_cale_pane

0xaffb,	// (0x0009942d) list_single_fp_cale_pane_g1_ParamLimits

0xaffb,	// (0x0009942d) list_single_fp_cale_pane_g1

0xb007,	// (0x00099439) list_single_fp_cale_pane_g2_ParamLimits

0xb007,	// (0x00099439) list_single_fp_cale_pane_g2

0x0002,

0xf70f,	// (0x0009db41) list_single_fp_cale_pane_g_ParamLimits

0xf70f,	// (0x0009db41) list_single_fp_cale_pane_g

0xb020,	// (0x00099452) list_single_fp_cale_pane_t1_ParamLimits

0xb020,	// (0x00099452) list_single_fp_cale_pane_t1

0xb032,	// (0x00099464) list_single_fp_cale_pane_t2_ParamLimits

0xb032,	// (0x00099464) list_single_fp_cale_pane_t2

0x0001,

0xf716,	// (0x0009db48) list_single_fp_cale_pane_t_ParamLimits

0xf716,	// (0x0009db48) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x0e1b,	// (0x0008f24d) main_dialer_pane

0x5d64,	// (0x00094196) aid_cell_size_keypad

0x5d6e,	// (0x000941a0) dialer_ne_pane

0x5d76,	// (0x000941a8) grid_dialer_command_1_pane

0x5d7e,	// (0x000941b0) grid_dialer_command_2_pane

0x5d86,	// (0x000941b8) grid_dialer_keypad_pane

0x5d98,	// (0x000941ca) bg_popup_call_pane_cp06_ParamLimits

0x5d98,	// (0x000941ca) bg_popup_call_pane_cp06

0x5da4,	// (0x000941d6) dialer_ne_clear_pane_ParamLimits

0x5da4,	// (0x000941d6) dialer_ne_clear_pane

0xb065,	// (0x00099497) dialer_ne_pane_g1

0xb06d,	// (0x0009949f) dialer_ne_pane_t1_ParamLimits

0xb06d,	// (0x0009949f) dialer_ne_pane_t1

0x5db0,	// (0x000941e2) dialer_ne_pane_t2_ParamLimits

0x5db0,	// (0x000941e2) dialer_ne_pane_t2

0x5dda,	// (0x0009420c) dialer_ne_pane_t3_ParamLimits

0x5dda,	// (0x0009420c) dialer_ne_pane_t3

0x0002,

0xf71b,	// (0x0009db4d) dialer_ne_pane_t_ParamLimits

0xf71b,	// (0x0009db4d) dialer_ne_pane_t

0x5e0a,	// (0x0009423c) dialer_ne_pane_t3_copy1_ParamLimits

0x5e0a,	// (0x0009423c) dialer_ne_pane_t3_copy1

0x5e39,	// (0x0009426b) cell_dialer_keypad_pane_ParamLimits

0x5e39,	// (0x0009426b) cell_dialer_keypad_pane

0x5e50,	// (0x00094282) cell_dialer_command_1_pane_ParamLimits

0x5e50,	// (0x00094282) cell_dialer_command_1_pane

0x5e66,	// (0x00094298) cell_dialer_command_2_pane_ParamLimits

0x5e66,	// (0x00094298) cell_dialer_command_2_pane

0xb07f,	// (0x000994b1) bg_button_pane_cp02_ParamLimits

0xb07f,	// (0x000994b1) bg_button_pane_cp02

0x5e75,	// (0x000942a7) cell_dialer_keypad_pane_g1_ParamLimits

0x5e75,	// (0x000942a7) cell_dialer_keypad_pane_g1

0xb07f,	// (0x000994b1) bg_button_pane_cp03_ParamLimits

0xb07f,	// (0x000994b1) bg_button_pane_cp03

0x5e8a,	// (0x000942bc) cell_dialer_command_1_pane_g1_ParamLimits

0x5e8a,	// (0x000942bc) cell_dialer_command_1_pane_g1

0xb08b,	// (0x000994bd) bg_button_pane_cp04

0x5e9e,	// (0x000942d0) cell_dialer_command_2_pane_g1

0xe349,	// (0x0009c77b) bg_button_pane_cp06

0xb093,	// (0x000994c5) dialer_ne_clear_pane_g1

0x2f3e,	// (0x00091370) navi_pane_g2

0x2f6c,	// (0x0009139e) navi_pane_g3

0x0002,

0xf3a5,	// (0x0009d7d7) navi_pane_g

0x2f95,	// (0x000913c7) navi_pane_mv_g2

0x2fbc,	// (0x000913ee) navi_pane_mv_g5

0x2fc4,	// (0x000913f6) navi_pane_mv_t1

0xa7fb,	// (0x00098c2d) main_clock2_pane

0x5ed1,	// (0x00094303) main_clock2_list_pane_ParamLimits

0x5ed1,	// (0x00094303) main_clock2_list_pane

0x5f07,	// (0x00094339) main_clock2_pane_t1_ParamLimits

0x5f07,	// (0x00094339) main_clock2_pane_t1

0x5f45,	// (0x00094377) main_clock2_pane_t2_ParamLimits

0x5f45,	// (0x00094377) main_clock2_pane_t2

0x0004,

0xf722,	// (0x0009db54) main_clock2_pane_t_ParamLimits

0xf722,	// (0x0009db54) main_clock2_pane_t

0x5fcf,	// (0x00094401) popup_clock_analogue_window_cp03_ParamLimits

0x5fcf,	// (0x00094401) popup_clock_analogue_window_cp03

0x5ff6,	// (0x00094428) popup_clock_digital_window_cp02_ParamLimits

0x5ff6,	// (0x00094428) popup_clock_digital_window_cp02

0x606b,	// (0x0009449d) main_clock2_list_single_pane_ParamLimits

0x606b,	// (0x0009449d) main_clock2_list_single_pane

0xe349,	// (0x0009c77b) list_highlight_pane_cp05

0xb09b,	// (0x000994cd) main_clock2_list_single_pane_t1

0x1e28,	// (0x0009025a) popup_toolbar_window_cp04_ParamLimits

0x54f8,	// (0x0009392a) camera2_autofocus_pane_g2_ParamLimits

0x54f8,	// (0x0009392a) camera2_autofocus_pane_g2

0x5504,	// (0x00093936) camera2_autofocus_pane_g3_ParamLimits

0x5504,	// (0x00093936) camera2_autofocus_pane_g3

0x5510,	// (0x00093942) camera2_autofocus_pane_g4_ParamLimits

0x5510,	// (0x00093942) camera2_autofocus_pane_g4

0x551c,	// (0x0009394e) camera2_autofocus_pane_g5_ParamLimits

0x551c,	// (0x0009394e) camera2_autofocus_pane_g5

0x0004,

0xf66b,	// (0x0009da9d) camera2_autofocus_pane_g_ParamLimits

0xf66b,	// (0x0009da9d) camera2_autofocus_pane_g

0x5709,	// (0x00093b3b) camera2_autofocus_pane_cp_g2

0x5711,	// (0x00093b43) camera2_autofocus_pane_cp_g3

0x5719,	// (0x00093b4b) camera2_autofocus_pane_cp_g4

0x5721,	// (0x00093b53) camera2_autofocus_pane_cp_g5

0x0004,

0xf6d1,	// (0x0009db03) camera2_autofocus_pane_cp_g

0x5d90,	// (0x000941c2) popup_dialer_spcha_window

0x0e1b,	// (0x0008f24d) bg_popup_sub_pane_cp07

0xb0a9,	// (0x000994db) list_spcha_pane

0xb0b1,	// (0x000994e3) list_single_spcha_pane_ParamLimits

0xb0b1,	// (0x000994e3) list_single_spcha_pane

0x0e1b,	// (0x0008f24d) list_highlight_pane_cp06

0xb0c2,	// (0x000994f4) list_single_spcha_pane_t1

0x3c18,	// (0x0009204a) popup_call2_audio_out_window_g4_ParamLimits

0x3c18,	// (0x0009204a) popup_call2_audio_out_window_g4

0x0e1b,	// (0x0008f24d) main_imed2_pane

0x4630,	// (0x00092a62) popup_imed_adjust2_window

0x4643,	// (0x00092a75) popup_imed_trans_window_ParamLimits

0x4643,	// (0x00092a75) popup_imed_trans_window

0x53e6,	// (0x00093818) popup_blid_sat_info2_window_t1

0x53f4,	// (0x00093826) popup_blid_sat_info2_window_t2

0x000a,

0xf600,	// (0x0009da32) popup_blid_sat_info2_window_t

0x6115,	// (0x00094547) aid_size_cell_colour_35

0x6135,	// (0x00094567) aid_size_cell_colour_112

0x6155,	// (0x00094587) aid_size_cell_effect

0x44f1,	// (0x00092923) bg_tb_trans_pane_cp02

0xde79,	// (0x0009c2ab) heading_imed_pane

0x6175,	// (0x000945a7) listscroll_imed_pane

0xb0d0,	// (0x00099502) heading_imed_pane_g1

0xb0d8,	// (0x0009950a) heading_imed_pane_t1

0xb0e6,	// (0x00099518) grid_imed_colour_35_pane_ParamLimits

0xb0e6,	// (0x00099518) grid_imed_colour_35_pane

0x6181,	// (0x000945b3) grid_imed_effect_pane

0xb101,	// (0x00099533) list_imed_aspect_pane

0x6196,	// (0x000945c8) scroll_pane_cp027_ParamLimits

0x6196,	// (0x000945c8) scroll_pane_cp027

0x61a7,	// (0x000945d9) cell_imed_effect_pane_ParamLimits

0x61a7,	// (0x000945d9) cell_imed_effect_pane

0xb109,	// (0x0009953b) cell_imed_colour_pane_ParamLimits

0xb109,	// (0x0009953b) cell_imed_colour_pane

0xb14b,	// (0x0009957d) cell_imed_colour_pane_g1_ParamLimits

0xb14b,	// (0x0009957d) cell_imed_colour_pane_g1

0xb15c,	// (0x0009958e) hgihlgiht_grid_pane_cp016_ParamLimits

0xb15c,	// (0x0009958e) hgihlgiht_grid_pane_cp016

0x61ce,	// (0x00094600) cell_imed_effect_pane_g1

0x61d6,	// (0x00094608) grid_highlight_pane_cp017

0xefc8,	// (0x0009d3fa) list_imed_single_pane_ParamLimits

0xefc8,	// (0x0009d3fa) list_imed_single_pane

0x0e1b,	// (0x0008f24d) list_highlight_pane_cp07

0xb16d,	// (0x0009959f) list_imed_aspect_pane_comp1_t1

0x44f1,	// (0x00092923) bg_tb_trans_pane_cp05

0xb18f,	// (0x000995c1) popup_imed_adjust2_window_g1

0xb1b6,	// (0x000995e8) popup_imed_adjust2_window_t1

0xb1ce,	// (0x00099600) slider_imed_adjust_pane

0xb1e2,	// (0x00099614) slider_imed_adjust_pane_g1

0xb1f2,	// (0x00099624) slider_imed_adjust_pane_g2

0xb202,	// (0x00099634) slider_imed_adjust_pane_g3

0xb213,	// (0x00099645) slider_imed_adjust_pane_g4

0x0003,

0xf73f,	// (0x0009db71) slider_imed_adjust_pane_g

0x61df,	// (0x00094611) aid_size_cell_clipart2

0x61eb,	// (0x0009461d) grid_imed_clipart_pane

0xb224,	// (0x00099656) scroll_pane_cp031

0x61f5,	// (0x00094627) cell_imed_clipart_pane_ParamLimits

0x61f5,	// (0x00094627) cell_imed_clipart_pane

0x621c,	// (0x0009464e) cell_imed_clipart_pane_g1

0x0e1b,	// (0x0008f24d) grid_highlight_pane_cp014

0x5ee6,	// (0x00094318) main_clock2_pane_g1_ParamLimits

0x5ee6,	// (0x00094318) main_clock2_pane_g1

0x6016,	// (0x00094448) aid_call2_pane_cp10

0x6028,	// (0x0009445a) aid_call_pane_cp10

0xe27e,	// (0x0009c6b0) popup_clock_analogue_window_cp10_g1

0xe27e,	// (0x0009c6b0) popup_clock_analogue_window_cp10_g2

0x603a,	// (0x0009446c) popup_clock_analogue_window_cp10_g3

0x603a,	// (0x0009446c) popup_clock_analogue_window_cp10_g4

0xe27e,	// (0x0009c6b0) popup_clock_analogue_window_cp10_g5

0x0004,

0xf72d,	// (0x0009db5f) popup_clock_analogue_window_cp10_g

0x604c,	// (0x0009447e) popup_clock_analogue_window_cp10_t1

0x607d,	// (0x000944af) clock_digital_number_pane_cp10_ParamLimits

0x607d,	// (0x000944af) clock_digital_number_pane_cp10

0x6095,	// (0x000944c7) clock_digital_number_pane_cp11_ParamLimits

0x6095,	// (0x000944c7) clock_digital_number_pane_cp11

0x60ad,	// (0x000944df) clock_digital_number_pane_cp12_ParamLimits

0x60ad,	// (0x000944df) clock_digital_number_pane_cp12

0x60c5,	// (0x000944f7) clock_digital_number_pane_cp13_ParamLimits

0x60c5,	// (0x000944f7) clock_digital_number_pane_cp13

0x60dd,	// (0x0009450f) clock_digital_separator_pane_cp10_ParamLimits

0x60dd,	// (0x0009450f) clock_digital_separator_pane_cp10

0x60f5,	// (0x00094527) popup_clock_digital_window_cp02_t1_ParamLimits

0x60f5,	// (0x00094527) popup_clock_digital_window_cp02_t1

0xa6b8,	// (0x00098aea) clock_digital_number_pane_cp10_g1

0xa6b8,	// (0x00098aea) clock_digital_number_pane_cp10_g2

0x0001,

0xf748,	// (0x0009db7a) clock_digital_number_pane_cp10_g

0xa6b8,	// (0x00098aea) clock_digital_separator_pane_cp10_g1

0xa6b8,	// (0x00098aea) clock_digital_separator_pane_g2_cp10

0xe319,	// (0x0009c74b) navi_pane_vded_g4

0xe322,	// (0x0009c754) navi_pane_vded_g5

0xe32b,	// (0x0009c75d) navi_pane_vded_t1

0x0e1b,	// (0x0008f24d) main_vded_pane

0x6225,	// (0x00094657) main_vded_pane_g1

0x6231,	// (0x00094663) main_vded_pane_g2

0x623b,	// (0x0009466d) main_vded_pane_g3

0x0002,

0xf74d,	// (0x0009db7f) main_vded_pane_g

0x6245,	// (0x00094677) main_vded_pane_t1

0x6253,	// (0x00094685) main_vded_pane_t2

0x0001,

0xf754,	// (0x0009db86) main_vded_pane_t

0x6261,	// (0x00094693) vded_slider_pane

0x626b,	// (0x0009469d) vded_video_pane

0xb22c,	// (0x0009965e) vded_video_pane_g1

0x6275,	// (0x000946a7) vded_video_pane_g2

0xac6e,	// (0x000990a0) vded_video_pane_g3

0x0002,

0xf759,	// (0x0009db8b) vded_video_pane_g

0xb236,	// (0x00099668) vded_slider_pane_g1

0x52cd,	// (0x000936ff) vded_slider_pane_g2

0xb23f,	// (0x00099671) vded_slider_pane_g3

0xb248,	// (0x0009967a) vded_slider_pane_g4

0xb251,	// (0x00099683) vded_slider_pane_g5

0x0004,

0xf760,	// (0x0009db92) vded_slider_pane_g

0x5c7e,	// (0x000940b0) mup3_rocker_pane_ParamLimits

0x5c7e,	// (0x000940b0) mup3_rocker_pane

0x627e,	// (0x000946b0) mup3_control_keys_pane_g1

0x6286,	// (0x000946b8) mup3_control_keys_pane_g2

0x628e,	// (0x000946c0) mup3_control_keys_pane_g3

0x6296,	// (0x000946c8) mup3_control_keys_pane_g4

0x0003,

0xf76b,	// (0x0009db9d) mup3_control_keys_pane_g

0x1059,	// (0x0008f48b) popup_toolbar2_fixed_window_cp01_ParamLimits

0x1059,	// (0x0008f48b) popup_toolbar2_fixed_window_cp01

0x5cb2,	// (0x000940e4) popup_toolbar2_fixed_window_cp02_ParamLimits

0x5cb2,	// (0x000940e4) popup_toolbar2_fixed_window_cp02

0xead0,	// (0x0009cf02) popup_call2_audio_second_window_t4_ParamLimits

0xead0,	// (0x0009cf02) popup_call2_audio_second_window_t4

0xf021,	// (0x0009d453) popup_call2_audio_first_window_t6_ParamLimits

0xf021,	// (0x0009d453) popup_call2_audio_first_window_t6

0x3d1b,	// (0x0009214d) popup_call2_audio_out_window_t6_ParamLimits

0x3d1b,	// (0x0009214d) popup_call2_audio_out_window_t6

0x0e1b,	// (0x0008f24d) main_vitu_pane

0x62a6,	// (0x000946d8) aid_size_cell_itu_ParamLimits

0x62a6,	// (0x000946d8) aid_size_cell_itu

0xa046,	// (0x00098478) bg_popup_window_pane_cp08_ParamLimits

0xa046,	// (0x00098478) bg_popup_window_pane_cp08

0x62bc,	// (0x000946ee) field_vitu_entry_pane_ParamLimits

0x62bc,	// (0x000946ee) field_vitu_entry_pane

0x62d3,	// (0x00094705) grid_vitu_function_pane_ParamLimits

0x62d3,	// (0x00094705) grid_vitu_function_pane

0x62ee,	// (0x00094720) grid_vitu_itu_pane_ParamLimits

0x62ee,	// (0x00094720) grid_vitu_itu_pane

0x630c,	// (0x0009473e) cell_vitu_itu_pane_ParamLimits

0x630c,	// (0x0009473e) cell_vitu_itu_pane

0x6330,	// (0x00094762) cell_vitu_function_pane_ParamLimits

0x6330,	// (0x00094762) cell_vitu_function_pane

0xa046,	// (0x00098478) bg_popup_sub_pane_cp08_ParamLimits

0xa046,	// (0x00098478) bg_popup_sub_pane_cp08

0x634b,	// (0x0009477d) field_vitu_entry_pane_t1_ParamLimits

0x634b,	// (0x0009477d) field_vitu_entry_pane_t1

0xb272,	// (0x000996a4) field_vitu_entry_pane_t2_ParamLimits

0xb272,	// (0x000996a4) field_vitu_entry_pane_t2

0x0001,

0xf779,	// (0x0009dbab) field_vitu_entry_pane_t_ParamLimits

0xf779,	// (0x0009dbab) field_vitu_entry_pane_t

0xb28f,	// (0x000996c1) bg_button_pane_cp05_ParamLimits

0xb28f,	// (0x000996c1) bg_button_pane_cp05

0x636b,	// (0x0009479d) cell_vitu_itu_pane_g1

0x6383,	// (0x000947b5) cell_vitu_itu_pane_t1_ParamLimits

0x6383,	// (0x000947b5) cell_vitu_itu_pane_t1

0x6395,	// (0x000947c7) cell_vitu_itu_pane_t2_ParamLimits

0x6395,	// (0x000947c7) cell_vitu_itu_pane_t2

0x0002,

0xf77e,	// (0x0009dbb0) cell_vitu_itu_pane_t_ParamLimits

0xf77e,	// (0x0009dbb0) cell_vitu_itu_pane_t

0xb29d,	// (0x000996cf) bg_button_pane_cp07

0x63ca,	// (0x000947fc) cell_vitu_function_pane_g1

0xa78b,	// (0x00098bbd) main_calc_pane_g1

0x0e5d,	// (0x0008f28f) aid_visual_content_pane

0x0e1b,	// (0x0008f24d) main_vradio_pane

0x63d3,	// (0x00094805) main_vradio_pane_g1_ParamLimits

0x63d3,	// (0x00094805) main_vradio_pane_g1

0xb2a7,	// (0x000996d9) main_vradio_pane_g2_ParamLimits

0xb2a7,	// (0x000996d9) main_vradio_pane_g2

0x0001,

0xf785,	// (0x0009dbb7) main_vradio_pane_g_ParamLimits

0xf785,	// (0x0009dbb7) main_vradio_pane_g

0x63ec,	// (0x0009481e) main_vradio_pane_t1_ParamLimits

0x63ec,	// (0x0009481e) main_vradio_pane_t1

0x6401,	// (0x00094833) main_vradio_pane_t2_ParamLimits

0x6401,	// (0x00094833) main_vradio_pane_t2

0xb2b4,	// (0x000996e6) main_vradio_pane_t3_ParamLimits

0xb2b4,	// (0x000996e6) main_vradio_pane_t3

0x0002,

0xf78a,	// (0x0009dbbc) main_vradio_pane_t_ParamLimits

0xf78a,	// (0x0009dbbc) main_vradio_pane_t

0x6416,	// (0x00094848) vradio_rocker_control_pane_ParamLimits

0x6416,	// (0x00094848) vradio_rocker_control_pane

0x6428,	// (0x0009485a) vradio_station_info_pane_ParamLimits

0x6428,	// (0x0009485a) vradio_station_info_pane

0xb2c8,	// (0x000996fa) vradio_frequency_info_pane_ParamLimits

0xb2c8,	// (0x000996fa) vradio_frequency_info_pane

0xac6e,	// (0x000990a0) vradio_station_info_pane_g1

0xb2d7,	// (0x00099709) vradio_station_info_pane_t1_ParamLimits

0xb2d7,	// (0x00099709) vradio_station_info_pane_t1

0xb2f9,	// (0x0009972b) vradio_station_info_pane_t2_ParamLimits

0xb2f9,	// (0x0009972b) vradio_station_info_pane_t2

0x0001,

0xf791,	// (0x0009dbc3) vradio_station_info_pane_t_ParamLimits

0xf791,	// (0x0009dbc3) vradio_station_info_pane_t

0xb30b,	// (0x0009973d) vradio_tuning_pane

0xb313,	// (0x00099745) vradio_rocker_control_pane_g1

0xb31b,	// (0x0009974d) vradio_rocker_control_pane_g2

0xb323,	// (0x00099755) vradio_rocker_control_pane_g3

0xb32b,	// (0x0009975d) vradio_rocker_control_pane_g4

0xb333,	// (0x00099765) vradio_rocker_control_pane_g5

0x0004,

0xf796,	// (0x0009dbc8) vradio_rocker_control_pane_g

0x643a,	// (0x0009486c) vradio_frequency_info_pane_g1

0xb33b,	// (0x0009976d) vradio_frequency_info_pane_t1_ParamLimits

0xb33b,	// (0x0009976d) vradio_frequency_info_pane_t1

0x6444,	// (0x00094876) vradio_tuning_pane_g1

0x644f,	// (0x00094881) vradio_tuning_pane_t1

0x0eba,	// (0x0008f2ec) area_side_right_pane_ParamLimits

0x0eba,	// (0x0008f2ec) area_side_right_pane

0x449a,	// (0x000928cc) status_small_pane_g1

0x44a2,	// (0x000928d4) status_small_pane_g2

0x44ab,	// (0x000928dd) status_small_pane_g3

0x44b4,	// (0x000928e6) status_small_pane_g4

0x0003,

0xf556,	// (0x0009d988) status_small_pane_g

0x44bd,	// (0x000928ef) status_small_pane_t1

0x0e1b,	// (0x0008f24d) main_video3_pane

0xb34f,	// (0x00099781) cams_zoom_vslider_pane

0xb357,	// (0x00099789) image3_wide_pane_ParamLimits

0xb357,	// (0x00099789) image3_wide_pane

0xb371,	// (0x000997a3) image3_wide_small_pane

0xb37d,	// (0x000997af) main_video3_pane_g1_ParamLimits

0xb37d,	// (0x000997af) main_video3_pane_g1

0xb399,	// (0x000997cb) main_video3_pane_g2_ParamLimits

0xb399,	// (0x000997cb) main_video3_pane_g2

0x0001,

0xf7a1,	// (0x0009dbd3) main_video3_pane_g_ParamLimits

0xf7a1,	// (0x0009dbd3) main_video3_pane_g

0xb3b5,	// (0x000997e7) main_video3_pane_t1_ParamLimits

0xb3b5,	// (0x000997e7) main_video3_pane_t1

0xb3e0,	// (0x00099812) main_video3_pane_t2_ParamLimits

0xb3e0,	// (0x00099812) main_video3_pane_t2

0xb40b,	// (0x0009983d) main_video3_pane_t3_ParamLimits

0xb40b,	// (0x0009983d) main_video3_pane_t3

0x0002,

0xf7a6,	// (0x0009dbd8) main_video3_pane_t_ParamLimits

0xf7a6,	// (0x0009dbd8) main_video3_pane_t

0xb438,	// (0x0009986a) cams_zoom_vslider_pane_g1

0xb441,	// (0x00099873) cams_zoom_vslider_pane_g2

0x0001,

0xf7ad,	// (0x0009dbdf) cams_zoom_vslider_pane_g

0xb449,	// (0x0009987b) small_slider_vertical_pane

0xac6e,	// (0x000990a0) small_slider_vertical_pane_g1

0xac6e,	// (0x000990a0) small_slider_vertical_pane_g2

0xb451,	// (0x00099883) small_slider_vertical_pane_g3

0x0002,

0xf7b2,	// (0x0009dbe4) small_slider_vertical_pane_g

0x0e1b,	// (0x0008f24d) main_hwr_training_pane

0xb45a,	// (0x0009988c) hwr_training_instruct_pane_ParamLimits

0xb45a,	// (0x0009988c) hwr_training_instruct_pane

0x645e,	// (0x00094890) hwr_training_navi_pane_ParamLimits

0x645e,	// (0x00094890) hwr_training_navi_pane

0x647d,	// (0x000948af) hwr_training_write_pane_ParamLimits

0x647d,	// (0x000948af) hwr_training_write_pane

0x0e1b,	// (0x0008f24d) bg_frame_shadow_pane

0xb491,	// (0x000998c3) hwr_training_write_pane_g1

0xb499,	// (0x000998cb) hwr_training_write_pane_g2

0xb4a1,	// (0x000998d3) hwr_training_write_pane_g3

0xb4a9,	// (0x000998db) hwr_training_write_pane_g4

0xb4b1,	// (0x000998e3) hwr_training_write_pane_g5

0xb4b9,	// (0x000998eb) hwr_training_write_pane_g6

0xb4c1,	// (0x000998f3) hwr_training_write_pane_g7

0x0006,

0xf7b9,	// (0x0009dbeb) hwr_training_write_pane_g

0xb4c9,	// (0x000998fb) hwr_training_navi_pane_g1_ParamLimits

0xb4c9,	// (0x000998fb) hwr_training_navi_pane_g1

0xb4db,	// (0x0009990d) hwr_training_navi_pane_g2_ParamLimits

0xb4db,	// (0x0009990d) hwr_training_navi_pane_g2

0xb4ed,	// (0x0009991f) hwr_training_navi_pane_g3_ParamLimits

0xb4ed,	// (0x0009991f) hwr_training_navi_pane_g3

0xb4fd,	// (0x0009992f) hwr_training_navi_pane_g4_ParamLimits

0xb4fd,	// (0x0009992f) hwr_training_navi_pane_g4

0x0004,

0xf7c8,	// (0x0009dbfa) hwr_training_navi_pane_g_ParamLimits

0xf7c8,	// (0x0009dbfa) hwr_training_navi_pane_g

0xb50a,	// (0x0009993c) hwr_training_navi_pane_t1

0x64c7,	// (0x000948f9) list_single_hwr_training_instruct_pane_ParamLimits

0x64c7,	// (0x000948f9) list_single_hwr_training_instruct_pane

0xb518,	// (0x0009994a) list_single_hwr_training_instruct_pane_t1

0xabae,	// (0x00098fe0) bg_frame_shadow_pane_g1

0xb527,	// (0x00099959) bg_frame_shadow_pane_g2

0xb52f,	// (0x00099961) bg_frame_shadow_pane_g3

0xb537,	// (0x00099969) bg_frame_shadow_pane_g4

0xb53f,	// (0x00099971) bg_frame_shadow_pane_g5

0xb547,	// (0x00099979) bg_frame_shadow_pane_g6

0xb54f,	// (0x00099981) bg_frame_shadow_pane_g7

0xd98c,	// (0x0009bdbe) bg_frame_shadow_pane_g8

0x0007,

0xf7d3,	// (0x0009dc05) bg_frame_shadow_pane_g

0x0e1b,	// (0x0008f24d) main_video_tele_dialer_pane

0x64e4,	// (0x00094916) aid_size_cell_video_keypad_ParamLimits

0x64e4,	// (0x00094916) aid_size_cell_video_keypad

0x64fe,	// (0x00094930) grid_video_dialer_keypad_pane_ParamLimits

0x64fe,	// (0x00094930) grid_video_dialer_keypad_pane

0x654a,	// (0x0009497c) video_down_pane_cp_ParamLimits

0x654a,	// (0x0009497c) video_down_pane_cp

0x657a,	// (0x000949ac) cell_video_dialer_keypad_pane_ParamLimits

0x657a,	// (0x000949ac) cell_video_dialer_keypad_pane

0xb557,	// (0x00099989) bg_button_pane_cp08_ParamLimits

0xb557,	// (0x00099989) bg_button_pane_cp08

0x659c,	// (0x000949ce) cell_video_dialer_keypad_pane_g1_ParamLimits

0x659c,	// (0x000949ce) cell_video_dialer_keypad_pane_g1

0x5c68,	// (0x0009409a) mup3_rocker2_pane_ParamLimits

0x5c68,	// (0x0009409a) mup3_rocker2_pane

0xac6e,	// (0x000990a0) mup3_rocker2_pane_g1

0x44ff,	// (0x00092931) main_dialer2_pane

0x0e1b,	// (0x0008f24d) main_mp4_pane

0xb56b,	// (0x0009999d) main_mp4_pane_g1_ParamLimits

0xb56b,	// (0x0009999d) main_mp4_pane_g1

0xb56b,	// (0x0009999d) main_mp4_pane_g2_ParamLimits

0xb56b,	// (0x0009999d) main_mp4_pane_g2

0x65d7,	// (0x00094a09) main_mp4_pane_g3_ParamLimits

0x65d7,	// (0x00094a09) main_mp4_pane_g3

0xb579,	// (0x000999ab) main_mp4_pane_g4_ParamLimits

0xb579,	// (0x000999ab) main_mp4_pane_g4

0xb5a1,	// (0x000999d3) main_mp4_pane_g5_ParamLimits

0xb5a1,	// (0x000999d3) main_mp4_pane_g5

0x0005,

0xf7f3,	// (0x0009dc25) main_mp4_pane_g_ParamLimits

0xf7f3,	// (0x0009dc25) main_mp4_pane_g

0xb5f1,	// (0x00099a23) main_mp4_pane_t1_ParamLimits

0xb5f1,	// (0x00099a23) main_mp4_pane_t1

0xb64d,	// (0x00099a7f) main_mp4_pane_t2_ParamLimits

0xb64d,	// (0x00099a7f) main_mp4_pane_t2

0xb69f,	// (0x00099ad1) main_mp4_pane_t3_ParamLimits

0xb69f,	// (0x00099ad1) main_mp4_pane_t3

0xb6bf,	// (0x00099af1) main_mp4_pane_t4_ParamLimits

0xb6bf,	// (0x00099af1) main_mp4_pane_t4

0x0003,

0xf800,	// (0x0009dc32) main_mp4_pane_t_ParamLimits

0xf800,	// (0x0009dc32) main_mp4_pane_t

0xb703,	// (0x00099b35) mp4_progress_pane_ParamLimits

0xb703,	// (0x00099b35) mp4_progress_pane

0xb74d,	// (0x00099b7f) mp4_rocker_pane_ParamLimits

0xb74d,	// (0x00099b7f) mp4_rocker_pane

0xb76d,	// (0x00099b9f) mp4_progress_pane_t1

0xb786,	// (0x00099bb8) mp4_progress_pane_t2

0x0001,

0xf809,	// (0x0009dc3b) mp4_progress_pane_t

0xb79f,	// (0x00099bd1) mup_progress_pane_cp04

0xb7ab,	// (0x00099bdd) mp4_rocker_pane_g1

0x6613,	// (0x00094a45) aid_cell_size_keypad2_ParamLimits

0x6613,	// (0x00094a45) aid_cell_size_keypad2

0x6629,	// (0x00094a5b) dialer2_ne_pane_ParamLimits

0x6629,	// (0x00094a5b) dialer2_ne_pane

0x6643,	// (0x00094a75) grid_dialer2_keypad_pane_ParamLimits

0x6643,	// (0x00094a75) grid_dialer2_keypad_pane

0x538d,	// (0x000937bf) bg_popup_call_pane_cp07_ParamLimits

0x538d,	// (0x000937bf) bg_popup_call_pane_cp07

0x6661,	// (0x00094a93) dialer2_ne_pane_t1_ParamLimits

0x6661,	// (0x00094a93) dialer2_ne_pane_t1

0x66a0,	// (0x00094ad2) cell_dialer2_keypad_pane_ParamLimits

0x66a0,	// (0x00094ad2) cell_dialer2_keypad_pane

0xb7c7,	// (0x00099bf9) bg_button_pane_pane_cp04_ParamLimits

0xb7c7,	// (0x00099bf9) bg_button_pane_pane_cp04

0x66c4,	// (0x00094af6) cell_dialer2_keypad_pane_g1_ParamLimits

0x66c4,	// (0x00094af6) cell_dialer2_keypad_pane_g1

0x1cfc,	// (0x0009012e) aid_placing_vt_set_content_ParamLimits

0x1cfc,	// (0x0009012e) aid_placing_vt_set_content

0x1d24,	// (0x00090156) aid_placing_vt_set_title_ParamLimits

0x1d24,	// (0x00090156) aid_placing_vt_set_title

0x0e1b,	// (0x0008f24d) main_image3_pane

0x678a,	// (0x00094bbc) area_side_right_pane_cp01_ParamLimits

0x678a,	// (0x00094bbc) area_side_right_pane_cp01

0xb56b,	// (0x0009999d) main_image3_pane_g1_ParamLimits

0xb56b,	// (0x0009999d) main_image3_pane_g1

0x67a1,	// (0x00094bd3) main_image3_pane_g2_ParamLimits

0x67a1,	// (0x00094bd3) main_image3_pane_g2

0x67c9,	// (0x00094bfb) main_image3_pane_g3_ParamLimits

0x67c9,	// (0x00094bfb) main_image3_pane_g3

0x67f3,	// (0x00094c25) main_image3_pane_g4_ParamLimits

0x67f3,	// (0x00094c25) main_image3_pane_g4

0x0003,

0xf818,	// (0x0009dc4a) main_image3_pane_g_ParamLimits

0xf818,	// (0x0009dc4a) main_image3_pane_g

0x681d,	// (0x00094c4f) main_image3_pane_t1_ParamLimits

0x681d,	// (0x00094c4f) main_image3_pane_t1

0x6875,	// (0x00094ca7) main_image3_pane_t2_ParamLimits

0x6875,	// (0x00094ca7) main_image3_pane_t2

0x68c7,	// (0x00094cf9) main_image3_pane_t3_ParamLimits

0x68c7,	// (0x00094cf9) main_image3_pane_t3

0x0003,

0xf821,	// (0x0009dc53) main_image3_pane_t_ParamLimits

0xf821,	// (0x0009dc53) main_image3_pane_t

0xa046,	// (0x00098478) grid_sctrl_middle_pane_cp01_ParamLimits

0xa046,	// (0x00098478) grid_sctrl_middle_pane_cp01

0x694f,	// (0x00094d81) cell_sctrl_middle_pane_cp01_ParamLimits

0x694f,	// (0x00094d81) cell_sctrl_middle_pane_cp01

0x696c,	// (0x00094d9e) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x696c,	// (0x00094d9e) cell_sctrl_middle_pane_cp01_g1

0x0e1b,	// (0x0008f24d) main_call4_pane

0x6982,	// (0x00094db4) aid_size_button_call4_ParamLimits

0x6982,	// (0x00094db4) aid_size_button_call4

0x69b3,	// (0x00094de5) call4_windows_pane_ParamLimits

0x69b3,	// (0x00094de5) call4_windows_pane

0x69d3,	// (0x00094e05) grid_call4_button_pane_ParamLimits

0x69d3,	// (0x00094e05) grid_call4_button_pane

0xb7d3,	// (0x00099c05) call4_windows_conf_pane

0xb7e8,	// (0x00099c1a) popup_call4_audio_first_window_ParamLimits

0xb7e8,	// (0x00099c1a) popup_call4_audio_first_window

0xb834,	// (0x00099c66) popup_call4_audio_second_window_ParamLimits

0xb834,	// (0x00099c66) popup_call4_audio_second_window

0xb848,	// (0x00099c7a) popup_call4_audio_wait_window_ParamLimits

0xb848,	// (0x00099c7a) popup_call4_audio_wait_window

0x6a00,	// (0x00094e32) cell_call4_button_pane_ParamLimits

0x6a00,	// (0x00094e32) cell_call4_button_pane

0x6a29,	// (0x00094e5b) bg_button_pane_cp09_ParamLimits

0x6a29,	// (0x00094e5b) bg_button_pane_cp09

0x6a35,	// (0x00094e67) cell_call4_button_pane_g1_ParamLimits

0x6a35,	// (0x00094e67) cell_call4_button_pane_g1

0x6a5b,	// (0x00094e8d) cell_call4_button_pane_t1_ParamLimits

0x6a5b,	// (0x00094e8d) cell_call4_button_pane_t1

0xb890,	// (0x00099cc2) popup_call4_audio_conf_window_ParamLimits

0xb890,	// (0x00099cc2) popup_call4_audio_conf_window

0x5cc8,	// (0x000940fa) mup3_progress_pane_t1_ParamLimits

0x5cdf,	// (0x00094111) mup3_progress_pane_t2_ParamLimits

0xaf88,	// (0x000993ba) mup3_progress_pane_t3_ParamLimits

0xf6fa,	// (0x0009db2c) mup3_progress_pane_t_ParamLimits

0xaf9f,	// (0x000993d1) mup_progress_pane_cp03_ParamLimits

0x629e,	// (0x000946d0) mup3_control_keys_pane_g4_copy1

0xb731,	// (0x00099b63) mp4_rocker2_pane_ParamLimits

0xb731,	// (0x00099b63) mp4_rocker2_pane

0xb8a4,	// (0x00099cd6) mp4_rocker2_pane_g1

0xb8ac,	// (0x00099cde) mp4_rocker2_pane_g2

0xd752,	// (0x0009bb84) mp4_rocker2_pane_g3

0xd75a,	// (0x0009bb8c) mp4_rocker2_pane_g4

0xd762,	// (0x0009bb94) mp4_rocker2_pane_g5

0x0004,

0xf82a,	// (0x0009dc5c) mp4_rocker2_pane_g

0x0e1b,	// (0x0008f24d) main_camera4_pane

0x0e1b,	// (0x0008f24d) main_video4_pane

0x6518,	// (0x0009494a) main_video_tele_dialer_pane_t1_ParamLimits

0x6518,	// (0x0009494a) main_video_tele_dialer_pane_t1

0x6531,	// (0x00094963) main_video_tele_dialer_pane_t2_ParamLimits

0x6531,	// (0x00094963) main_video_tele_dialer_pane_t2

0x0001,

0xf7e4,	// (0x0009dc16) main_video_tele_dialer_pane_t_ParamLimits

0xf7e4,	// (0x0009dc16) main_video_tele_dialer_pane_t

0x6a9d,	// (0x00094ecf) cam4_autofocus_pane_ParamLimits

0x6a9d,	// (0x00094ecf) cam4_autofocus_pane

0x6ab3,	// (0x00094ee5) cam4_image_uncrop_pane_ParamLimits

0x6ab3,	// (0x00094ee5) cam4_image_uncrop_pane

0x6acd,	// (0x00094eff) cam4_indicators_pane_ParamLimits

0x6acd,	// (0x00094eff) cam4_indicators_pane

0x6af8,	// (0x00094f2a) main_camera4_pane_g1_ParamLimits

0x6af8,	// (0x00094f2a) main_camera4_pane_g1

0x6b0b,	// (0x00094f3d) main_camera4_pane_g2_ParamLimits

0x6b0b,	// (0x00094f3d) main_camera4_pane_g2

0x6b1e,	// (0x00094f50) main_camera4_pane_g3_ParamLimits

0x6b1e,	// (0x00094f50) main_camera4_pane_g3

0x6b31,	// (0x00094f63) main_camera4_pane_g4_ParamLimits

0x6b31,	// (0x00094f63) main_camera4_pane_g4

0x6b44,	// (0x00094f76) main_camera4_pane_g5_ParamLimits

0x6b44,	// (0x00094f76) main_camera4_pane_g5

0x0005,

0xf835,	// (0x0009dc67) main_camera4_pane_g_ParamLimits

0xf835,	// (0x0009dc67) main_camera4_pane_g

0x6b68,	// (0x00094f9a) main_camera4_pane_t1_ParamLimits

0x6b68,	// (0x00094f9a) main_camera4_pane_t1

0xd786,	// (0x0009bbb8) bg_tb_trans_pane_cp06

0xd79c,	// (0x0009bbce) cam4_indicators_pane_g1

0xd7ad,	// (0x0009bbdf) cam4_indicators_pane_g2

0x0002,

0xf850,	// (0x0009dc82) cam4_indicators_pane_g

0xd7cb,	// (0x0009bbfd) cam4_indicators_pane_t1

0x6bcc,	// (0x00094ffe) main_video4_pane_g1_ParamLimits

0x6bcc,	// (0x00094ffe) main_video4_pane_g1

0x6bdf,	// (0x00095011) main_video4_pane_g2_ParamLimits

0x6bdf,	// (0x00095011) main_video4_pane_g2

0x6bf3,	// (0x00095025) main_video4_pane_g3_ParamLimits

0x6bf3,	// (0x00095025) main_video4_pane_g3

0x6c07,	// (0x00095039) main_video4_pane_g4_ParamLimits

0x6c07,	// (0x00095039) main_video4_pane_g4

0x0004,

0xf857,	// (0x0009dc89) main_video4_pane_g_ParamLimits

0xf857,	// (0x0009dc89) main_video4_pane_g

0x6c2f,	// (0x00095061) vid4_indicators_pane_ParamLimits

0x6c2f,	// (0x00095061) vid4_indicators_pane

0x6c61,	// (0x00095093) video4_image_uncrop_cif_pane_ParamLimits

0x6c61,	// (0x00095093) video4_image_uncrop_cif_pane

0x6c7b,	// (0x000950ad) video4_image_uncrop_nhd_pane_ParamLimits

0x6c7b,	// (0x000950ad) video4_image_uncrop_nhd_pane

0x6ab3,	// (0x00094ee5) video4_image_uncrop_vga_pane_ParamLimits

0x6ab3,	// (0x00094ee5) video4_image_uncrop_vga_pane

0xd7ed,	// (0x0009bc1f) bg_tb_trans_pane_cp07

0x6c8f,	// (0x000950c1) vid4_indicators_pane_g1

0x6c9c,	// (0x000950ce) vid4_indicators_pane_g2

0x6ca9,	// (0x000950db) vid4_indicators_pane_g3

0x0004,

0xf862,	// (0x0009dc94) vid4_indicators_pane_g

0x6cce,	// (0x00095100) vid4_indicators_pane_t1

0x6ce0,	// (0x00095112) cam4_autofocus_pane_g1

0x6ce8,	// (0x0009511a) cam4_autofocus_pane_g2

0x6cf0,	// (0x00095122) cam4_autofocus_pane_g3

0x0002,

0xf86d,	// (0x0009dc9f) cam4_autofocus_pane_g

0x6cf8,	// (0x0009512a) cam4_autofocus_pane_g3_copy1

0x655e,	// (0x00094990) video_down_pane_cp_t1

0x656c,	// (0x0009499e) video_down_pane_cp_t2

0x0001,

0xf7e9,	// (0x0009dc1b) video_down_pane_cp_t

0xa046,	// (0x00098478) popup_vitu2_window_ParamLimits

0xa046,	// (0x00098478) popup_vitu2_window

0x6d00,	// (0x00095132) aid_size_cell2_itu2_ParamLimits

0x6d00,	// (0x00095132) aid_size_cell2_itu2

0x6d26,	// (0x00095158) aid_size_cell_itu2_ParamLimits

0x6d26,	// (0x00095158) aid_size_cell_itu2

0x6d82,	// (0x000951b4) bg_popup_window_pane_cp09_ParamLimits

0x6d82,	// (0x000951b4) bg_popup_window_pane_cp09

0x6d90,	// (0x000951c2) field_vitu2_entry_pane_ParamLimits

0x6d90,	// (0x000951c2) field_vitu2_entry_pane

0x6db6,	// (0x000951e8) grid_vitu2_function_pane_ParamLimits

0x6db6,	// (0x000951e8) grid_vitu2_function_pane

0x6e07,	// (0x00095239) grid_vitu2_itu_pane_ParamLimits

0x6e07,	// (0x00095239) grid_vitu2_itu_pane

0x6e98,	// (0x000952ca) cell_vitu2_itu_pane_ParamLimits

0x6e98,	// (0x000952ca) cell_vitu2_itu_pane

0x6ebc,	// (0x000952ee) cell_vitu2_function_pane_ParamLimits

0x6ebc,	// (0x000952ee) cell_vitu2_function_pane

0xb8c6,	// (0x00099cf8) bg_popup_call_pane_cp08_ParamLimits

0xb8c6,	// (0x00099cf8) bg_popup_call_pane_cp08

0xb8df,	// (0x00099d11) field_vitu2_entry_pane_g1

0xb8eb,	// (0x00099d1d) field_vitu2_entry_pane_g2

0x0002,

0xf874,	// (0x0009dca6) field_vitu2_entry_pane_g

0x6efb,	// (0x0009532d) field_vitu2_entry_pane_t1_ParamLimits

0x6efb,	// (0x0009532d) field_vitu2_entry_pane_t1

0xb905,	// (0x00099d37) field_vitu2_entry_pane_t2_ParamLimits

0xb905,	// (0x00099d37) field_vitu2_entry_pane_t2

0x0001,

0xf87b,	// (0x0009dcad) field_vitu2_entry_pane_t_ParamLimits

0xf87b,	// (0x0009dcad) field_vitu2_entry_pane_t

0x6f2c,	// (0x0009535e) bg_button_pane_cp010_ParamLimits

0x6f2c,	// (0x0009535e) bg_button_pane_cp010

0x6f3a,	// (0x0009536c) cell_vitu2_itu_pane_g1

0x6f58,	// (0x0009538a) cell_vitu2_itu_pane_t1_ParamLimits

0x6f58,	// (0x0009538a) cell_vitu2_itu_pane_t1

0x0d27,	// (0x0008f159) cell_vitu2_itu_pane_t2_ParamLimits

0x0d27,	// (0x0008f159) cell_vitu2_itu_pane_t2

0x0002,

0xf885,	// (0x0009dcb7) cell_vitu2_itu_pane_t_ParamLimits

0xf885,	// (0x0009dcb7) cell_vitu2_itu_pane_t

0xd803,	// (0x0009bc35) bg_button_pane_cp011

0x6fbe,	// (0x000953f0) cell_vitu2_function_pane_g1

0x0e1b,	// (0x0008f24d) main_myfav_hc_pane

0x6917,	// (0x00094d49) popup_image3_note_pane_ParamLimits

0x6917,	// (0x00094d49) popup_image3_note_pane

0x6933,	// (0x00094d65) popup_image3_tool_bar_pane_ParamLimits

0x6933,	// (0x00094d65) popup_image3_tool_bar_pane

0x0dab,	// (0x0008f1dd) cell_vitu2_itu_pane_t3_ParamLimits

0x0dab,	// (0x0008f1dd) cell_vitu2_itu_pane_t3

0x0e1b,	// (0x0008f24d) bg_popup_trans_pane

0xb92a,	// (0x00099d5c) grid_image3_tool_bar_pane

0xb934,	// (0x00099d66) bg_popup_trans_pane_g1

0xdcd1,	// (0x0009c103) bg_popup_trans_pane_g2

0xb93c,	// (0x00099d6e) bg_popup_trans_pane_g3

0xb944,	// (0x00099d76) bg_popup_trans_pane_g4

0xb94c,	// (0x00099d7e) bg_popup_trans_pane_g5

0xb954,	// (0x00099d86) bg_popup_trans_pane_g6

0xb95c,	// (0x00099d8e) bg_popup_trans_pane_g7

0xb964,	// (0x00099d96) bg_popup_trans_pane_g8

0xdcb1,	// (0x0009c0e3) bg_popup_trans_pane_g9

0x0008,

0xf88c,	// (0x0009dcbe) bg_popup_trans_pane_g

0xb96c,	// (0x00099d9e) cell_image3_tool_bar_pane_ParamLimits

0xb96c,	// (0x00099d9e) cell_image3_tool_bar_pane

0xac6e,	// (0x000990a0) cell_image3_tool_bar_pane_g1

0x0e1b,	// (0x0008f24d) bg_popup_trans_pane_cp1

0xb980,	// (0x00099db2) popup_image3_note_pane_t1

0xb98e,	// (0x00099dc0) popup_image3_note_pane_t2

0xb99c,	// (0x00099dce) popup_image3_note_pane_t3

0x0002,

0xf89f,	// (0x0009dcd1) popup_image3_note_pane_t

0xb9aa,	// (0x00099ddc) popup_image3_note_pane_t3_copy1

0x6fd2,	// (0x00095404) bg_myfav_hc_instruction_pane_ParamLimits

0x6fd2,	// (0x00095404) bg_myfav_hc_instruction_pane

0x6fe8,	// (0x0009541a) cell_myfav_contact_pane_ParamLimits

0x6fe8,	// (0x0009541a) cell_myfav_contact_pane

0x7004,	// (0x00095436) cell_myfav_contact_pane_cp1_ParamLimits

0x7004,	// (0x00095436) cell_myfav_contact_pane_cp1

0x701c,	// (0x0009544e) cell_myfav_contact_pane_cp2_ParamLimits

0x701c,	// (0x0009544e) cell_myfav_contact_pane_cp2

0x7034,	// (0x00095466) cell_myfav_contact_pane_cp3_ParamLimits

0x7034,	// (0x00095466) cell_myfav_contact_pane_cp3

0x704b,	// (0x0009547d) cell_myfav_contact_pane_cp4_ParamLimits

0x704b,	// (0x0009547d) cell_myfav_contact_pane_cp4

0x7063,	// (0x00095495) cell_myfav_contact_pane_cp5_ParamLimits

0x7063,	// (0x00095495) cell_myfav_contact_pane_cp5

0x7077,	// (0x000954a9) cell_myfav_contact_pane_cp6_ParamLimits

0x7077,	// (0x000954a9) cell_myfav_contact_pane_cp6

0x708d,	// (0x000954bf) cell_myfav_contact_pane_cp7_ParamLimits

0x708d,	// (0x000954bf) cell_myfav_contact_pane_cp7

0xb9b8,	// (0x00099dea) listscroll_gen_pane_cp05

0x70a7,	// (0x000954d9) main_myfav_hc_pane_g1_ParamLimits

0x70a7,	// (0x000954d9) main_myfav_hc_pane_g1

0x70c1,	// (0x000954f3) main_myfav_hc_pane_g2_ParamLimits

0x70c1,	// (0x000954f3) main_myfav_hc_pane_g2

0x0002,

0xf8a6,	// (0x0009dcd8) main_myfav_hc_pane_g_ParamLimits

0xf8a6,	// (0x0009dcd8) main_myfav_hc_pane_g

0x70f3,	// (0x00095525) main_myfav_hc_pane_t1_ParamLimits

0x70f3,	// (0x00095525) main_myfav_hc_pane_t1

0xb9c1,	// (0x00099df3) main_myfav_hc_pane_t2_ParamLimits

0xb9c1,	// (0x00099df3) main_myfav_hc_pane_t2

0xb9d3,	// (0x00099e05) main_myfav_hc_pane_t3_ParamLimits

0xb9d3,	// (0x00099e05) main_myfav_hc_pane_t3

0x710a,	// (0x0009553c) main_myfav_hc_pane_t4_ParamLimits

0x710a,	// (0x0009553c) main_myfav_hc_pane_t4

0x0004,

0xf8ad,	// (0x0009dcdf) main_myfav_hc_pane_t_ParamLimits

0xf8ad,	// (0x0009dcdf) main_myfav_hc_pane_t

0xac6e,	// (0x000990a0) bg_myfav_hc_instruction_pane_g1

0xb9e5,	// (0x00099e17) cell_myfav_contact_pane_g1_ParamLimits

0xb9e5,	// (0x00099e17) cell_myfav_contact_pane_g1

0xb9e5,	// (0x00099e17) cell_myfav_contact_pane_g2_ParamLimits

0xb9e5,	// (0x00099e17) cell_myfav_contact_pane_g2

0xb9f1,	// (0x00099e23) cell_myfav_contact_pane_g3_ParamLimits

0xb9f1,	// (0x00099e23) cell_myfav_contact_pane_g3

0xaf72,	// (0x000993a4) cell_myfav_contact_pane_g4_ParamLimits

0xaf72,	// (0x000993a4) cell_myfav_contact_pane_g4

0xb9fe,	// (0x00099e30) cell_myfav_contact_pane_g5_ParamLimits

0xb9fe,	// (0x00099e30) cell_myfav_contact_pane_g5

0x0004,

0xf8b8,	// (0x0009dcea) cell_myfav_contact_pane_g_ParamLimits

0xf8b8,	// (0x0009dcea) cell_myfav_contact_pane_g

0x70db,	// (0x0009550d) main_myfav_hc_pane_g3_ParamLimits

0x70db,	// (0x0009550d) main_myfav_hc_pane_g3

0x0fbb,	// (0x0008f3ed) popup_adpt_find_window

0x7132,	// (0x00095564) afind_page_pane_ParamLimits

0x7132,	// (0x00095564) afind_page_pane

0x7147,	// (0x00095579) aid_size_cell_afind_ParamLimits

0x7147,	// (0x00095579) aid_size_cell_afind

0x7165,	// (0x00095597) bg_popup_sub_pane_cp09_ParamLimits

0x7165,	// (0x00095597) bg_popup_sub_pane_cp09

0x7172,	// (0x000955a4) find_pane_cp01_ParamLimits

0x7172,	// (0x000955a4) find_pane_cp01

0xba0a,	// (0x00099e3c) grid_afind_control_pane_ParamLimits

0xba0a,	// (0x00099e3c) grid_afind_control_pane

0x717f,	// (0x000955b1) grid_afind_pane_ParamLimits

0x717f,	// (0x000955b1) grid_afind_pane

0x71a1,	// (0x000955d3) cell_afind_pane_ParamLimits

0x71a1,	// (0x000955d3) cell_afind_pane

0xac6e,	// (0x000990a0) afind_page_pane_g1

0x7202,	// (0x00095634) afind_page_pane_g2

0x720b,	// (0x0009563d) afind_page_pane_g3

0x0002,

0xf8c3,	// (0x0009dcf5) afind_page_pane_g

0x7214,	// (0x00095646) afind_page_pane_t1

0xba1e,	// (0x00099e50) cell_afind_grid_control_pane_ParamLimits

0xba1e,	// (0x00099e50) cell_afind_grid_control_pane

0xb7c7,	// (0x00099bf9) bg_button_pane_cp69_ParamLimits

0xb7c7,	// (0x00099bf9) bg_button_pane_cp69

0x7234,	// (0x00095666) cell_afind_pane_g1_ParamLimits

0x7234,	// (0x00095666) cell_afind_pane_g1

0x7241,	// (0x00095673) cell_afind_pane_t1_ParamLimits

0x7241,	// (0x00095673) cell_afind_pane_t1

0xdacc,	// (0x0009befe) bg_button_pane_cp72

0xba2d,	// (0x00099e5f) cell_afind_grid_control_pane_g1

0x392d,	// (0x00091d5f) aid_image_placing_area_ParamLimits

0x392d,	// (0x00091d5f) aid_image_placing_area

0xb25a,	// (0x0009968c) field_vitu_entry_pane_g1_ParamLimits

0xb25a,	// (0x0009968c) field_vitu_entry_pane_g1

0xb266,	// (0x00099698) field_vitu_entry_pane_g2_ParamLimits

0xb266,	// (0x00099698) field_vitu_entry_pane_g2

0x0001,

0xf774,	// (0x0009dba6) field_vitu_entry_pane_g_ParamLimits

0xf774,	// (0x0009dba6) field_vitu_entry_pane_g

0x636b,	// (0x0009479d) cell_vitu_itu_pane_g1_ParamLimits

0x63ad,	// (0x000947df) cell_vitu_itu_pane_t3_ParamLimits

0x63ad,	// (0x000947df) cell_vitu_itu_pane_t3

0xb76d,	// (0x00099b9f) mp4_progress_pane_t1_ParamLimits

0xb786,	// (0x00099bb8) mp4_progress_pane_t2_ParamLimits

0xf809,	// (0x0009dc3b) mp4_progress_pane_t_ParamLimits

0xb79f,	// (0x00099bd1) mup_progress_pane_cp04_ParamLimits

0x711e,	// (0x00095550) main_myfav_hc_pane_t5_ParamLimits

0x711e,	// (0x00095550) main_myfav_hc_pane_t5

0x0e71,	// (0x0008f2a3) aid_zoom_text_primary

0x0fbb,	// (0x0008f3ed) popup_adpt_find_window_ParamLimits

0xa046,	// (0x00098478) main_cam_set_pane

0x6ae4,	// (0x00094f16) cam4_zoom_pane_ParamLimits

0x6ae4,	// (0x00094f16) cam4_zoom_pane

0x7253,	// (0x00095685) main_cam_set_pane_g1_ParamLimits

0x7253,	// (0x00095685) main_cam_set_pane_g1

0x7261,	// (0x00095693) main_cam_set_pane_g2_ParamLimits

0x7261,	// (0x00095693) main_cam_set_pane_g2

0x0001,

0xf8ca,	// (0x0009dcfc) main_cam_set_pane_g_ParamLimits

0xf8ca,	// (0x0009dcfc) main_cam_set_pane_g

0x7282,	// (0x000956b4) main_cam_set_pane_t1_ParamLimits

0x7282,	// (0x000956b4) main_cam_set_pane_t1

0x729d,	// (0x000956cf) main_cset_listscroll_pane_ParamLimits

0x729d,	// (0x000956cf) main_cset_listscroll_pane

0x72bd,	// (0x000956ef) main_cset_slider_pane_ParamLimits

0x72bd,	// (0x000956ef) main_cset_slider_pane

0xba3e,	// (0x00099e70) main_cset_list_pane_ParamLimits

0xba3e,	// (0x00099e70) main_cset_list_pane

0xba4e,	// (0x00099e80) scroll_pane_cp028

0x72e3,	// (0x00095715) aid_area_touch_slider

0x72ff,	// (0x00095731) cset_slider_pane

0x7329,	// (0x0009575b) main_cset_slider_pane_g1

0x733e,	// (0x00095770) main_cset_slider_pane_g2

0x0011,

0xf8cf,	// (0x0009dd01) main_cset_slider_pane_g

0xba87,	// (0x00099eb9) main_cset_slider_pane_t1

0x73fa,	// (0x0009582c) main_cset_slider_pane_t2

0x7414,	// (0x00095846) main_cset_slider_pane_t3

0x742e,	// (0x00095860) main_cset_slider_pane_t4

0x7448,	// (0x0009587a) main_cset_slider_pane_t5

0x7464,	// (0x00095896) main_cset_slider_pane_t6

0x7479,	// (0x000958ab) main_cset_slider_pane_t7

0x000e,

0xf8f4,	// (0x0009dd26) main_cset_slider_pane_t

0x757d,	// (0x000959af) cset_list_set_pane_ParamLimits

0x757d,	// (0x000959af) cset_list_set_pane

0x7591,	// (0x000959c3) aid_position_infowindow_above

0x7599,	// (0x000959cb) aid_position_infowindow_below

0x75a1,	// (0x000959d3) cset_list_set_pane_g1_ParamLimits

0x75a1,	// (0x000959d3) cset_list_set_pane_g1

0x75ad,	// (0x000959df) cset_list_set_pane_g3_ParamLimits

0x75ad,	// (0x000959df) cset_list_set_pane_g3

0x0001,

0xf913,	// (0x0009dd45) cset_list_set_pane_g_ParamLimits

0xf913,	// (0x0009dd45) cset_list_set_pane_g

0x75bc,	// (0x000959ee) cset_list_set_pane_t1_ParamLimits

0x75bc,	// (0x000959ee) cset_list_set_pane_t1

0xa046,	// (0x00098478) list_highlight_pane_cp021_ParamLimits

0xa046,	// (0x00098478) list_highlight_pane_cp021

0xe47f,	// (0x0009c8b1) cset_slider_pane_g1

0xe491,	// (0x0009c8c3) cset_slider_pane_g2

0xe488,	// (0x0009c8ba) cset_slider_pane_g3

0x0002,

0x079e,	// (0x0008ebd0) cset_slider_pane_g

0xd811,	// (0x0009bc43) aid_area_touch_cam4_zoom

0xd819,	// (0x0009bc4b) cam4_zoom_cont_pane

0xd821,	// (0x0009bc53) cam4_zoom_pane_g1

0xd829,	// (0x0009bc5b) cam4_zoom_pane_g2

0x75d1,	// (0x00095a03) cam4_zoom_pane_g3

0x0002,

0xf918,	// (0x0009dd4a) cam4_zoom_pane_g

0xd831,	// (0x0009bc63) cam4_zoom_cont_pane_g1

0xd83a,	// (0x0009bc6c) cam4_zoom_cont_pane_g2

0xd843,	// (0x0009bc75) cam4_zoom_cont_pane_g3

0x0002,

0xf91f,	// (0x0009dd51) cam4_zoom_cont_pane_g

0x69a0,	// (0x00094dd2) call4_image_pane_ParamLimits

0x69a0,	// (0x00094dd2) call4_image_pane

0xb7d3,	// (0x00099c05) call4_windows_conf_pane_ParamLimits

0xb812,	// (0x00099c44) popup_call4_audio_in_window_ParamLimits

0xb812,	// (0x00099c44) popup_call4_audio_in_window

0x0e1b,	// (0x0008f24d) bg_popup_call2_act_pane_cp02

0xb888,	// (0x00099cba) call4_list_conf_pane

0xac6e,	// (0x000990a0) call4_image_pane_g1

0xac6e,	// (0x000990a0) call4_image_pane_g2

0x0001,

0xf63a,	// (0x0009da6c) call4_image_pane_g

0xbb27,	// (0x00099f59) list_single_graphic_popup_conf4_pane_ParamLimits

0xbb27,	// (0x00099f59) list_single_graphic_popup_conf4_pane

0x0e1b,	// (0x0008f24d) list_highlight_pane_cp022

0xbb3a,	// (0x00099f6c) list_single_graphic_popup_conf4_pane_g1

0xe162,	// (0x0009c594) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf926,	// (0x0009dd58) list_single_graphic_popup_conf4_pane_g

0xbb42,	// (0x00099f74) list_single_graphic_popup_conf4_pane_t1

0x1e48,	// (0x0009027a) popup_vtel_slider_window_ParamLimits

0x1e48,	// (0x0009027a) popup_vtel_slider_window

0xb7b5,	// (0x00099be7) dialer2_ne_pane_t2_ParamLimits

0xb7b5,	// (0x00099be7) dialer2_ne_pane_t2

0x0001,

0xf80e,	// (0x0009dc40) dialer2_ne_pane_t_ParamLimits

0xf80e,	// (0x0009dc40) dialer2_ne_pane_t

0x538d,	// (0x000937bf) bg_popup_sub_pane_cp010_ParamLimits

0x538d,	// (0x000937bf) bg_popup_sub_pane_cp010

0x75d9,	// (0x00095a0b) popup_vtel_slider_window_g1_ParamLimits

0x75d9,	// (0x00095a0b) popup_vtel_slider_window_g1

0x75ec,	// (0x00095a1e) popup_vtel_slider_window_g2_ParamLimits

0x75ec,	// (0x00095a1e) popup_vtel_slider_window_g2

0x0003,

0xf92b,	// (0x0009dd5d) popup_vtel_slider_window_g_ParamLimits

0xf92b,	// (0x0009dd5d) popup_vtel_slider_window_g

0x7642,	// (0x00095a74) vtel_slider_pane_ParamLimits

0x7642,	// (0x00095a74) vtel_slider_pane

0x7664,	// (0x00095a96) vtel_slider_pane_g1_ParamLimits

0x7664,	// (0x00095a96) vtel_slider_pane_g1

0x7678,	// (0x00095aaa) vtel_slider_pane_g2_ParamLimits

0x7678,	// (0x00095aaa) vtel_slider_pane_g2

0x7690,	// (0x00095ac2) vtel_slider_pane_g3_ParamLimits

0x7690,	// (0x00095ac2) vtel_slider_pane_g3

0x7664,	// (0x00095a96) vtel_slider_pane_g4_ParamLimits

0x7664,	// (0x00095a96) vtel_slider_pane_g4

0x76a6,	// (0x00095ad8) vtel_slider_pane_g5_ParamLimits

0x76a6,	// (0x00095ad8) vtel_slider_pane_g5

0x0004,

0xf934,	// (0x0009dd66) vtel_slider_pane_g_ParamLimits

0xf934,	// (0x0009dd66) vtel_slider_pane_g

0x0e1b,	// (0x0008f24d) main_gallery2_pane

0x6d52,	// (0x00095184) aid_size_row_itut2_dropdow_list_ParamLimits

0x6d52,	// (0x00095184) aid_size_row_itut2_dropdow_list

0x6dde,	// (0x00095210) grid_vitu2_function_top_pane_ParamLimits

0x6dde,	// (0x00095210) grid_vitu2_function_top_pane

0x6e43,	// (0x00095275) popup_vitu2_dropdown_list_window_ParamLimits

0x6e43,	// (0x00095275) popup_vitu2_dropdown_list_window

0x6e6c,	// (0x0009529e) popup_vitu2_match_list_window

0x76bc,	// (0x00095aee) cell_vitu2_function_top_pane_ParamLimits

0x76bc,	// (0x00095aee) cell_vitu2_function_top_pane

0x76da,	// (0x00095b0c) cell_vitu2_function_top_pane_cp01_ParamLimits

0x76da,	// (0x00095b0c) cell_vitu2_function_top_pane_cp01

0x76f8,	// (0x00095b2a) cell_vitu2_function_top_wide_pane_ParamLimits

0x76f8,	// (0x00095b2a) cell_vitu2_function_top_wide_pane

0xd803,	// (0x0009bc35) bg_button_pane_cp012

0x7716,	// (0x00095b48) cell_vitu2_function_top_pane_g1

0xd84c,	// (0x0009bc7e) bg_button_pane_cp013_ParamLimits

0xd84c,	// (0x0009bc7e) bg_button_pane_cp013

0x772a,	// (0x00095b5c) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x772a,	// (0x00095b5c) cell_vitu2_function_top_wide_pane_g1

0xd803,	// (0x0009bc35) bg_popup_sub_pane_cp20

0x7742,	// (0x00095b74) list_vitu2_match_list_pane

0xb934,	// (0x00099d66) bg_popup_sub_pane_cp20_g1

0xb93c,	// (0x00099d6e) bg_popup_sub_pane_cp20_g2

0xdcd1,	// (0x0009c103) bg_popup_sub_pane_cp20_g3

0xb944,	// (0x00099d76) bg_popup_sub_pane_cp20_g4

0xdcb1,	// (0x0009c0e3) bg_popup_sub_pane_cp20_g5

0xbb66,	// (0x00099f98) bg_popup_sub_pane_cp20_g6

0xb954,	// (0x00099d86) bg_popup_sub_pane_cp20_g7

0xb95c,	// (0x00099d8e) bg_popup_sub_pane_cp20_g8

0xb964,	// (0x00099d96) bg_popup_sub_pane_cp20_g9

0x0008,

0xf93f,	// (0x0009dd71) bg_popup_sub_pane_cp20_g

0xd868,	// (0x0009bc9a) list_vitu2_match_list_item_pane_ParamLimits

0xd868,	// (0x0009bc9a) list_vitu2_match_list_item_pane

0xd87a,	// (0x0009bcac) list_vitu2_match_list_item_pane_t1

0xa7d7,	// (0x00098c09) bg_popup_sub_pane_cp21

0xd888,	// (0x0009bcba) grid_vitu2_dropdown_list_pane

0x7795,	// (0x00095bc7) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x7795,	// (0x00095bc7) cell_vitu2_dropdown_list_char_pane

0x77b6,	// (0x00095be8) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x77b6,	// (0x00095be8) cell_vitu2_dropdown_list_ctrl_pane

0xbb86,	// (0x00099fb8) cell_vitu2_dropdown_list_char_pane_g1

0xbb8f,	// (0x00099fc1) cell_vitu2_dropdown_list_char_pane_g2

0xbb98,	// (0x00099fca) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xf95c,	// (0x0009dd8e) cell_vitu2_dropdown_list_char_pane_g

0x77e2,	// (0x00095c14) cell_vitu2_dropdown_list_char_pane_t1

0x77f0,	// (0x00095c22) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x77f0,	// (0x00095c22) cell_vitu2_dropdown_list_ctrl_pane_g1

0x7800,	// (0x00095c32) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x7800,	// (0x00095c32) cell_vitu2_dropdown_list_ctrl_pane_g2

0x7811,	// (0x00095c43) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x7811,	// (0x00095c43) cell_vitu2_dropdown_list_ctrl_pane_g3

0x7821,	// (0x00095c53) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x7821,	// (0x00095c53) cell_vitu2_dropdown_list_ctrl_pane_g4

0xd786,	// (0x0009bbb8) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0xd786,	// (0x0009bbb8) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xf963,	// (0x0009dd95) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xf963,	// (0x0009dd95) cell_vitu2_dropdown_list_ctrl_pane_g

0x783d,	// (0x00095c6f) aid_size_cell_gallery2_ParamLimits

0x783d,	// (0x00095c6f) aid_size_cell_gallery2

0x7853,	// (0x00095c85) grid_gallery2_pane_ParamLimits

0x7853,	// (0x00095c85) grid_gallery2_pane

0x7867,	// (0x00095c99) scroll_pane_cp029_ParamLimits

0x7867,	// (0x00095c99) scroll_pane_cp029

0x7873,	// (0x00095ca5) cell_gallery2_pane_ParamLimits

0x7873,	// (0x00095ca5) cell_gallery2_pane

0xbba1,	// (0x00099fd3) cell_gallery2_pane_g2

0x78a9,	// (0x00095cdb) cell_gallery2_pane_g3

0xbbab,	// (0x00099fdd) cell_gallery2_pane_g4

0xbbb3,	// (0x00099fe5) cell_gallery2_pane_g5

0xe349,	// (0x0009c77b) grid_highlight_pane_cp10

0x6e6c,	// (0x0009529e) popup_vitu2_match_list_window_ParamLimits

0x6e81,	// (0x000952b3) popup_vitu2_query_window_ParamLimits

0x6e81,	// (0x000952b3) popup_vitu2_query_window

0xa7d7,	// (0x00098c09) bg_vitu2_candi_button_pane

0xbb86,	// (0x00099fb8) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xbb8f,	// (0x00099fc1) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xbb98,	// (0x00099fca) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x78b1,	// (0x00095ce3) bg_button_pane_cp015

0x78c5,	// (0x00095cf7) bg_button_pane_cp016

0x78d8,	// (0x00095d0a) bg_button_pane_cp017

0x44f1,	// (0x00092923) bg_popup_sub_pane_cp22

0xbbbb,	// (0x00099fed) popup_vitu2_query_window_g1

0x791d,	// (0x00095d4f) popup_vitu2_query_window_g2

0x0002,

0xf96e,	// (0x0009dda0) popup_vitu2_query_window_g

0x793c,	// (0x00095d6e) popup_vitu2_query_window_t1_ParamLimits

0x793c,	// (0x00095d6e) popup_vitu2_query_window_t1

0x7971,	// (0x00095da3) popup_vitu2_query_window_t2_ParamLimits

0x7971,	// (0x00095da3) popup_vitu2_query_window_t2

0x7983,	// (0x00095db5) popup_vitu2_query_window_t3_ParamLimits

0x7983,	// (0x00095db5) popup_vitu2_query_window_t3

0x79ab,	// (0x00095ddd) popup_vitu2_query_window_t4_ParamLimits

0x79ab,	// (0x00095ddd) popup_vitu2_query_window_t4

0x79cc,	// (0x00095dfe) popup_vitu2_query_window_t5_ParamLimits

0x79cc,	// (0x00095dfe) popup_vitu2_query_window_t5

0x0006,

0xf975,	// (0x0009dda7) popup_vitu2_query_window_t_ParamLimits

0xf975,	// (0x0009dda7) popup_vitu2_query_window_t

0xba36,	// (0x00099e68) main_cset_text_pane

0x72e3,	// (0x00095715) aid_area_touch_slider_ParamLimits

0x72ff,	// (0x00095731) cset_slider_pane_ParamLimits

0x7329,	// (0x0009575b) main_cset_slider_pane_g1_ParamLimits

0x733e,	// (0x00095770) main_cset_slider_pane_g2_ParamLimits

0xba57,	// (0x00099e89) main_cset_slider_pane_g3_ParamLimits

0xba57,	// (0x00099e89) main_cset_slider_pane_g3

0x7353,	// (0x00095785) main_cset_slider_pane_g4_ParamLimits

0x7353,	// (0x00095785) main_cset_slider_pane_g4

0x7362,	// (0x00095794) main_cset_slider_pane_g5_ParamLimits

0x7362,	// (0x00095794) main_cset_slider_pane_g5

0x736e,	// (0x000957a0) main_cset_slider_pane_g6_ParamLimits

0x736e,	// (0x000957a0) main_cset_slider_pane_g6

0xf8cf,	// (0x0009dd01) main_cset_slider_pane_g_ParamLimits

0xba87,	// (0x00099eb9) main_cset_slider_pane_t1_ParamLimits

0x73fa,	// (0x0009582c) main_cset_slider_pane_t2_ParamLimits

0x7414,	// (0x00095846) main_cset_slider_pane_t3_ParamLimits

0x742e,	// (0x00095860) main_cset_slider_pane_t4_ParamLimits

0x7448,	// (0x0009587a) main_cset_slider_pane_t5_ParamLimits

0x7464,	// (0x00095896) main_cset_slider_pane_t6_ParamLimits

0x7479,	// (0x000958ab) main_cset_slider_pane_t7_ParamLimits

0x74a3,	// (0x000958d5) main_cset_slider_pane_t8_ParamLimits

0x74a3,	// (0x000958d5) main_cset_slider_pane_t8

0x74cb,	// (0x000958fd) main_cset_slider_pane_t9_ParamLimits

0x74cb,	// (0x000958fd) main_cset_slider_pane_t9

0x74f3,	// (0x00095925) main_cset_slider_pane_t10_ParamLimits

0x74f3,	// (0x00095925) main_cset_slider_pane_t10

0x751b,	// (0x0009594d) main_cset_slider_pane_t11_ParamLimits

0x751b,	// (0x0009594d) main_cset_slider_pane_t11

0x7543,	// (0x00095975) main_cset_slider_pane_t12_ParamLimits

0x7543,	// (0x00095975) main_cset_slider_pane_t12

0x7560,	// (0x00095992) main_cset_slider_pane_t13_ParamLimits

0x7560,	// (0x00095992) main_cset_slider_pane_t13

0xf8f4,	// (0x0009dd26) main_cset_slider_pane_t_ParamLimits

0x0e1b,	// (0x0008f24d) bg_popup_sub_pane_cp011

0xbbc7,	// (0x00099ff9) main_cset_text_pane_g1

0xbbcf,	// (0x0009a001) main_cset_text_pane_t1

0xbbdd,	// (0x0009a00f) main_cset_text_pane_t2

0xbbeb,	// (0x0009a01d) main_cset_text_pane_t3

0xbbf9,	// (0x0009a02b) main_cset_text_pane_t4

0xbc07,	// (0x0009a039) main_cset_text_pane_t5

0xbc15,	// (0x0009a047) main_cset_text_pane_t6

0xbc23,	// (0x0009a055) main_cset_text_pane_t7

0x0006,

0xf984,	// (0x0009ddb6) main_cset_text_pane_t

0x0e1b,	// (0x0008f24d) main_cam4_burst_pane

0x0e1b,	// (0x0008f24d) main_cam5_pane

0x7222,	// (0x00095654) bg_button_pane_cp019

0x722b,	// (0x0009565d) bg_button_pane_cp020

0xba63,	// (0x00099e95) main_cset_slider_pane_g7_ParamLimits

0xba63,	// (0x00099e95) main_cset_slider_pane_g7

0xba6f,	// (0x00099ea1) main_cset_slider_pane_g8_ParamLimits

0xba6f,	// (0x00099ea1) main_cset_slider_pane_g8

0x7382,	// (0x000957b4) main_cset_slider_pane_g9_ParamLimits

0x7382,	// (0x000957b4) main_cset_slider_pane_g9

0x738e,	// (0x000957c0) main_cset_slider_pane_g10_ParamLimits

0x738e,	// (0x000957c0) main_cset_slider_pane_g10

0x739a,	// (0x000957cc) main_cset_slider_pane_g11_ParamLimits

0x739a,	// (0x000957cc) main_cset_slider_pane_g11

0x73a6,	// (0x000957d8) main_cset_slider_pane_g12_ParamLimits

0x73a6,	// (0x000957d8) main_cset_slider_pane_g12

0x73b2,	// (0x000957e4) main_cset_slider_pane_g13_ParamLimits

0x73b2,	// (0x000957e4) main_cset_slider_pane_g13

0x73be,	// (0x000957f0) main_cset_slider_pane_g14_ParamLimits

0x73be,	// (0x000957f0) main_cset_slider_pane_g14

0x73ca,	// (0x000957fc) main_cset_slider_pane_g15_ParamLimits

0x73ca,	// (0x000957fc) main_cset_slider_pane_g15

0xbab5,	// (0x00099ee7) main_cset_slider_pane_t14_ParamLimits

0xbab5,	// (0x00099ee7) main_cset_slider_pane_t14

0xbaee,	// (0x00099f20) main_cset_slider_pane_t15_ParamLimits

0xbaee,	// (0x00099f20) main_cset_slider_pane_t15

0x7a43,	// (0x00095e75) aid_cam4_burst_size_cell_ParamLimits

0x7a43,	// (0x00095e75) aid_cam4_burst_size_cell

0x7a63,	// (0x00095e95) grid_cam4_burst_pane_ParamLimits

0x7a63,	// (0x00095e95) grid_cam4_burst_pane

0x7a9b,	// (0x00095ecd) linegrid_cam4_burst_pane_ParamLimits

0x7a9b,	// (0x00095ecd) linegrid_cam4_burst_pane

0xbc31,	// (0x0009a063) scroll_pane_cp30_ParamLimits

0xbc31,	// (0x0009a063) scroll_pane_cp30

0x7ac1,	// (0x00095ef3) cell_cam4_burst_pane_ParamLimits

0x7ac1,	// (0x00095ef3) cell_cam4_burst_pane

0xbc3d,	// (0x0009a06f) linegrid_cam4_burst_pane_g1_ParamLimits

0xbc3d,	// (0x0009a06f) linegrid_cam4_burst_pane_g1

0x7b0e,	// (0x00095f40) linegrid_cam4_burst_pane_g2_ParamLimits

0x7b0e,	// (0x00095f40) linegrid_cam4_burst_pane_g2

0xbc4a,	// (0x0009a07c) linegrid_cam4_burst_pane_g3_ParamLimits

0xbc4a,	// (0x0009a07c) linegrid_cam4_burst_pane_g3

0x0002,

0xf993,	// (0x0009ddc5) linegrid_cam4_burst_pane_g_ParamLimits

0xf993,	// (0x0009ddc5) linegrid_cam4_burst_pane_g

0x7b1f,	// (0x00095f51) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x7b1f,	// (0x00095f51) linegrid_cam4_burst_pane_g3_copy1

0xbc57,	// (0x0009a089) linegrid_cam4_burst_pane_g4_ParamLimits

0xbc57,	// (0x0009a089) linegrid_cam4_burst_pane_g4

0x7b39,	// (0x00095f6b) linegrid_cam4_burst_pane_g5_ParamLimits

0x7b39,	// (0x00095f6b) linegrid_cam4_burst_pane_g5

0x7b4a,	// (0x00095f7c) linegrid_cam4_burst_pane_g6_ParamLimits

0x7b4a,	// (0x00095f7c) linegrid_cam4_burst_pane_g6

0xbc64,	// (0x0009a096) linegrid_cam4_burst_pane_g7_ParamLimits

0xbc64,	// (0x0009a096) linegrid_cam4_burst_pane_g7

0x7b61,	// (0x00095f93) cell_cam4_burst_pane_g1

0xbc7d,	// (0x0009a0af) main_cam5_pane_t1_ParamLimits

0xbc7d,	// (0x0009a0af) main_cam5_pane_t1

0xbc8f,	// (0x0009a0c1) main_cam5_pane_t2_ParamLimits

0xbc8f,	// (0x0009a0c1) main_cam5_pane_t2

0xbca1,	// (0x0009a0d3) main_cam5_pane_t3_ParamLimits

0xbca1,	// (0x0009a0d3) main_cam5_pane_t3

0xbcb3,	// (0x0009a0e5) main_cam5_pane_t4_ParamLimits

0xbcb3,	// (0x0009a0e5) main_cam5_pane_t4

0xbcc9,	// (0x0009a0fb) main_cam5_pane_t5_ParamLimits

0xbcc9,	// (0x0009a0fb) main_cam5_pane_t5

0xbcdb,	// (0x0009a10d) main_cam5_pane_t6_ParamLimits

0xbcdb,	// (0x0009a10d) main_cam5_pane_t6

0xbcef,	// (0x0009a121) main_cam5_pane_t7_ParamLimits

0xbcef,	// (0x0009a121) main_cam5_pane_t7

0xbd01,	// (0x0009a133) main_cam5_pane_t8_ParamLimits

0xbd01,	// (0x0009a133) main_cam5_pane_t8

0xbd1d,	// (0x0009a14f) main_cam5_pane_t9_ParamLimits

0xbd1d,	// (0x0009a14f) main_cam5_pane_t9

0xbd2f,	// (0x0009a161) main_cam5_pane_t10_ParamLimits

0xbd2f,	// (0x0009a161) main_cam5_pane_t10

0xbd41,	// (0x0009a173) main_cam5_pane_t11_ParamLimits

0xbd41,	// (0x0009a173) main_cam5_pane_t11

0xbd53,	// (0x0009a185) main_cam5_pane_t12_ParamLimits

0xbd53,	// (0x0009a185) main_cam5_pane_t12

0xbd68,	// (0x0009a19a) main_cam5_pane_t13_ParamLimits

0xbd68,	// (0x0009a19a) main_cam5_pane_t13

0x000c,

0xf99f,	// (0x0009ddd1) main_cam5_pane_t_ParamLimits

0xf99f,	// (0x0009ddd1) main_cam5_pane_t

0x103d,	// (0x0008f46f) popup_scut_keymap_window_ParamLimits

0x103d,	// (0x0008f46f) popup_scut_keymap_window

0x7b74,	// (0x00095fa6) aid_size_cell_brow_shortcut

0xe349,	// (0x0009c77b) bg_popup_window_pane_cp010

0x7b80,	// (0x00095fb2) grid_scut_pane

0x7b8c,	// (0x00095fbe) cell_scut_pane_ParamLimits

0x7b8c,	// (0x00095fbe) cell_scut_pane

0x7ba3,	// (0x00095fd5) cell_scut_pane_g1

0xbd85,	// (0x0009a1b7) cell_scut_pane_t1

0xbd94,	// (0x0009a1c6) cell_scut_pane_t2

0x7bac,	// (0x00095fde) cell_scut_pane_t3

0x0002,

0xf9ba,	// (0x0009ddec) cell_scut_pane_t

0x58a7,	// (0x00093cd9) main_mup3_pane_g8_ParamLimits

0x58a7,	// (0x00093cd9) main_mup3_pane_g8

0x6d6a,	// (0x0009519c) area_vitu2_query_pane_ParamLimits

0x6d6a,	// (0x0009519c) area_vitu2_query_pane

0x78eb,	// (0x00095d1d) input_focus_pane_cp08

0xbda3,	// (0x0009a1d5) area_vitu2_query_pane_g1

0x7bba,	// (0x00095fec) area_vitu2_query_pane_g2

0x0001,

0xf9c1,	// (0x0009ddf3) area_vitu2_query_pane_g

0x7bcb,	// (0x00095ffd) area_vitu2_query_pane_t1_ParamLimits

0x7bcb,	// (0x00095ffd) area_vitu2_query_pane_t1

0x7bdf,	// (0x00096011) area_vitu2_query_pane_t2_ParamLimits

0x7bdf,	// (0x00096011) area_vitu2_query_pane_t2

0x7bf3,	// (0x00096025) area_vitu2_query_pane_t3_ParamLimits

0x7bf3,	// (0x00096025) area_vitu2_query_pane_t3

0xbdaf,	// (0x0009a1e1) area_vitu2_query_pane_t4_ParamLimits

0xbdaf,	// (0x0009a1e1) area_vitu2_query_pane_t4

0xbdd7,	// (0x0009a209) area_vitu2_query_pane_t5_ParamLimits

0xbdd7,	// (0x0009a209) area_vitu2_query_pane_t5

0xbdff,	// (0x0009a231) area_vitu2_query_pane_t6_ParamLimits

0xbdff,	// (0x0009a231) area_vitu2_query_pane_t6

0x0006,

0xf9c6,	// (0x0009ddf8) area_vitu2_query_pane_t_ParamLimits

0xf9c6,	// (0x0009ddf8) area_vitu2_query_pane_t

0x7c1b,	// (0x0009604d) bg_button_pane_cp018

0x7c29,	// (0x0009605b) bg_button_pane_cp021

0x7c35,	// (0x00096067) bg_button_pane_cp022

0x7c46,	// (0x00096078) input_focus_pane_cp09

0x2eec,	// (0x0009131e) aid_size_touch_mv_arrow_left

0x2f15,	// (0x00091347) aid_size_touch_mv_arrow_right

0x73e2,	// (0x00095814) main_cset_slider_pane_g16_ParamLimits

0x73e2,	// (0x00095814) main_cset_slider_pane_g16

0x73ee,	// (0x00095820) main_cset_slider_pane_g17_ParamLimits

0x73ee,	// (0x00095820) main_cset_slider_pane_g17

0x7b61,	// (0x00095f93) cell_cam4_burst_pane_g1_ParamLimits

0x0e1b,	// (0x0008f24d) compa_mode_pane

0x75fc,	// (0x00095a2e) popup_vtel_slider_window_g3_ParamLimits

0x75fc,	// (0x00095a2e) popup_vtel_slider_window_g3

0x7613,	// (0x00095a45) popup_vtel_slider_window_g4_ParamLimits

0x7613,	// (0x00095a45) popup_vtel_slider_window_g4

0x762a,	// (0x00095a5c) popup_vtel_slider_window_t1_ParamLimits

0x762a,	// (0x00095a5c) popup_vtel_slider_window_t1

0x0e1b,	// (0x0008f24d) main_cl_pane

0x4630,	// (0x00092a62) popup_imed_adjust2_window_ParamLimits

0x44f1,	// (0x00092923) bg_tb_trans_pane_cp05_ParamLimits

0xb18f,	// (0x000995c1) popup_imed_adjust2_window_g1_ParamLimits

0xb19e,	// (0x000995d0) popup_imed_adjust2_window_g2_ParamLimits

0xb19e,	// (0x000995d0) popup_imed_adjust2_window_g2

0xb1aa,	// (0x000995dc) popup_imed_adjust2_window_g3_ParamLimits

0xb1aa,	// (0x000995dc) popup_imed_adjust2_window_g3

0x0002,

0xf738,	// (0x0009db6a) popup_imed_adjust2_window_g_ParamLimits

0xf738,	// (0x0009db6a) popup_imed_adjust2_window_g

0xb1b6,	// (0x000995e8) popup_imed_adjust2_window_t1_ParamLimits

0xb1ce,	// (0x00099600) slider_imed_adjust_pane_ParamLimits

0xb1e2,	// (0x00099614) slider_imed_adjust_pane_g1_ParamLimits

0xb1f2,	// (0x00099624) slider_imed_adjust_pane_g2_ParamLimits

0xb202,	// (0x00099634) slider_imed_adjust_pane_g3_ParamLimits

0xb213,	// (0x00099645) slider_imed_adjust_pane_g4_ParamLimits

0xf73f,	// (0x0009db71) slider_imed_adjust_pane_g_ParamLimits

0x6a85,	// (0x00094eb7) aid_touch_area_cam4_ParamLimits

0x6a85,	// (0x00094eb7) aid_touch_area_cam4

0xd76a,	// (0x0009bb9c) battery_pane_cp01

0x6b55,	// (0x00094f87) main_camera4_pane_g6_ParamLimits

0x6b55,	// (0x00094f87) main_camera4_pane_g6

0x6b7f,	// (0x00094fb1) main_camera4_pane_t2_ParamLimits

0x6b7f,	// (0x00094fb1) main_camera4_pane_t2

0x0001,

0xf842,	// (0x0009dc74) main_camera4_pane_t_ParamLimits

0xf842,	// (0x0009dc74) main_camera4_pane_t

0x6bb4,	// (0x00094fe6) aid_touch_area_vid4_ParamLimits

0x6bb4,	// (0x00094fe6) aid_touch_area_vid4

0x6c1b,	// (0x0009504d) main_video4_pane_g5_ParamLimits

0x6c1b,	// (0x0009504d) main_video4_pane_g5

0x6c46,	// (0x00095078) vid4_progress_pane_ParamLimits

0x6c46,	// (0x00095078) vid4_progress_pane

0xba7b,	// (0x00099ead) main_cset_slider_pane_g18_ParamLimits

0xba7b,	// (0x00099ead) main_cset_slider_pane_g18

0xbc71,	// (0x0009a0a3) cell_cam4_burst_pane_g2_ParamLimits

0xbc71,	// (0x0009a0a3) cell_cam4_burst_pane_g2

0x0001,

0xf99a,	// (0x0009ddcc) cell_cam4_burst_pane_g_ParamLimits

0xf99a,	// (0x0009ddcc) cell_cam4_burst_pane_g

0xa7fb,	// (0x00098c2d) bg_cl_pane_ParamLimits

0xa7fb,	// (0x00098c2d) bg_cl_pane

0x7c57,	// (0x00096089) cl_header_pane_ParamLimits

0x7c57,	// (0x00096089) cl_header_pane

0x7c6b,	// (0x0009609d) cl_listscroll_pane_ParamLimits

0x7c6b,	// (0x0009609d) cl_listscroll_pane

0xbe4b,	// (0x0009a27d) bg_cl_pane_g1

0xbe53,	// (0x0009a285) bg_cl_pane_g2

0xbe5b,	// (0x0009a28d) bg_cl_pane_g3

0xbe63,	// (0x0009a295) bg_cl_pane_g4

0xbe6b,	// (0x0009a29d) bg_cl_pane_g5

0xbe73,	// (0x0009a2a5) bg_cl_pane_g6

0xbe7b,	// (0x0009a2ad) bg_cl_pane_g7

0xbe83,	// (0x0009a2b5) bg_cl_pane_g8

0xbe8b,	// (0x0009a2bd) bg_cl_pane_g9

0x0008,

0xf9d5,	// (0x0009de07) bg_cl_pane_g

0x7c7b,	// (0x000960ad) aid_height_cl_leading_ParamLimits

0x7c7b,	// (0x000960ad) aid_height_cl_leading

0x7c87,	// (0x000960b9) aid_height_cl_text_ParamLimits

0x7c87,	// (0x000960b9) aid_height_cl_text

0xa046,	// (0x00098478) bg_cl_header_pane_ParamLimits

0xa046,	// (0x00098478) bg_cl_header_pane

0x7ca6,	// (0x000960d8) cl_header_pane_g1_ParamLimits

0x7ca6,	// (0x000960d8) cl_header_pane_g1

0x7cbc,	// (0x000960ee) cl_header_pane_t1_ParamLimits

0x7cbc,	// (0x000960ee) cl_header_pane_t1

0xbe93,	// (0x0009a2c5) cl_list_pane

0xba4e,	// (0x00099e80) hc_scroll_pane_cp01

0xdcb1,	// (0x0009c0e3) bg_cl_header_pane_g1

0xb934,	// (0x00099d66) bg_cl_header_pane_g2

0xdcd1,	// (0x0009c103) bg_cl_header_pane_g3

0xb944,	// (0x00099d76) bg_cl_header_pane_g4

0xb93c,	// (0x00099d6e) bg_cl_header_pane_g5

0xbb66,	// (0x00099f98) bg_cl_header_pane_g6

0xb95c,	// (0x00099d8e) bg_cl_header_pane_g7

0xb964,	// (0x00099d96) bg_cl_header_pane_g8

0xb954,	// (0x00099d86) bg_cl_header_pane_g9

0x0008,

0xf9e8,	// (0x0009de1a) bg_cl_header_pane_g

0x7cd5,	// (0x00096107) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x7cd5,	// (0x00096107) hc_cl_list_double_graphic_heading_pane

0x7ce9,	// (0x0009611b) hc_cl_list_single_graphic_pane_ParamLimits

0x7ce9,	// (0x0009611b) hc_cl_list_single_graphic_pane

0x7d03,	// (0x00096135) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x7d03,	// (0x00096135) hc_cl_list_single_graphic_pane_g1

0x7d0f,	// (0x00096141) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x7d0f,	// (0x00096141) hc_cl_list_single_graphic_pane_g2

0x0001,

0xf9fb,	// (0x0009de2d) hc_cl_list_single_graphic_pane_g_ParamLimits

0xf9fb,	// (0x0009de2d) hc_cl_list_single_graphic_pane_g

0x7d23,	// (0x00096155) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x7d23,	// (0x00096155) hc_cl_list_single_graphic_pane_t1

0x7d03,	// (0x00096135) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x7d03,	// (0x00096135) hc_cl_list_double_graphic_heading_pane_g1

0x7d38,	// (0x0009616a) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x7d38,	// (0x0009616a) hc_cl_list_double_graphic_heading_pane_g2

0x7d4c,	// (0x0009617e) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x7d4c,	// (0x0009617e) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfa00,	// (0x0009de32) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfa00,	// (0x0009de32) hc_cl_list_double_graphic_heading_pane_g

0x7d60,	// (0x00096192) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x7d60,	// (0x00096192) hc_cl_list_double_graphic_heading_pane_t1

0x7d75,	// (0x000961a7) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x7d75,	// (0x000961a7) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfa07,	// (0x0009de39) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfa07,	// (0x0009de39) hc_cl_list_double_graphic_heading_pane_t

0xd898,	// (0x0009bcca) vid4_progress_pane_g1

0xd8a8,	// (0x0009bcda) vid4_progress_pane_g2

0xdef2,	// (0x0009c324) vid4_progress_pane_g3

0xd7ad,	// (0x0009bbdf) vid4_progress_pane_g4

0x0004,

0xfa0c,	// (0x0009de3e) vid4_progress_pane_g

0xd8b8,	// (0x0009bcea) vid4_progress_pane_t1

0xd8cd,	// (0x0009bcff) vid4_progress_pane_t2

0x0002,

0xfa17,	// (0x0009de49) vid4_progress_pane_t

0xd8f8,	// (0x0009bd2a) wait_bar_pane_cp07

0x539b,	// (0x000937cd) blid_firmament_pane_ParamLimits

0x53de,	// (0x00093810) popup_blid_sat_info2_window_g1

0x5402,	// (0x00093834) popup_blid_sat_info2_window_t3

0x5410,	// (0x00093842) popup_blid_sat_info2_window_t4

0x541e,	// (0x00093850) popup_blid_sat_info2_window_t5

0xaaf0,	// (0x00098f22) popup_blid_sat_info2_window_t6

0xab00,	// (0x00098f32) popup_blid_sat_info2_window_t7

0xab0e,	// (0x00098f40) popup_blid_sat_info2_window_t8

0xab1c,	// (0x00098f4e) popup_blid_sat_info2_window_t9

0xab2a,	// (0x00098f5c) popup_blid_sat_info2_window_t10

0xabee,	// (0x00099020) aid_firma_cardinal_ParamLimits

0xac02,	// (0x00099034) blid_firmament_pane_t1_ParamLimits

0xac19,	// (0x0009904b) blid_firmament_pane_t2_ParamLimits

0xac30,	// (0x00099062) blid_firmament_pane_t3_ParamLimits

0xac47,	// (0x00099079) blid_firmament_pane_t4_ParamLimits

0xf631,	// (0x0009da63) blid_firmament_pane_t_ParamLimits

0xac5e,	// (0x00099090) blid_sat_info_pane_ParamLimits

0xa046,	// (0x00098478) main_cam_set_pane_ParamLimits

0x6115,	// (0x00094547) aid_size_cell_colour_35_ParamLimits

0x6135,	// (0x00094567) aid_size_cell_colour_112_ParamLimits

0x6155,	// (0x00094587) aid_size_cell_effect_ParamLimits

0x44f1,	// (0x00092923) bg_tb_trans_pane_cp02_ParamLimits

0xde79,	// (0x0009c2ab) heading_imed_pane_ParamLimits

0x6175,	// (0x000945a7) listscroll_imed_pane_ParamLimits

0xed7a,	// (0x0009d1ac) popup_call2_audio_first_window_g5_ParamLimits

0xed7a,	// (0x0009d1ac) popup_call2_audio_first_window_g5

0x672c,	// (0x00094b5e) aid_size_touch_image3_arrow_left_ParamLimits

0x672c,	// (0x00094b5e) aid_size_touch_image3_arrow_left

0x6758,	// (0x00094b8a) aid_size_touch_image3_arrow_right_ParamLimits

0x6758,	// (0x00094b8a) aid_size_touch_image3_arrow_right

0xd8e3,	// (0x0009bd15) vid4_progress_pane_t3

0x6498,	// (0x000948ca) main_hwr_training_symbol_option_pane_ParamLimits

0x6498,	// (0x000948ca) main_hwr_training_symbol_option_pane

0xb47c,	// (0x000998ae) popup_hwr_training_preview_window_ParamLimits

0xb47c,	// (0x000998ae) popup_hwr_training_preview_window

0x64b8,	// (0x000948ea) hwr_training_navi_pane_g5_ParamLimits

0x64b8,	// (0x000948ea) hwr_training_navi_pane_g5

0xb922,	// (0x00099d54) popup_char_count_window

0xd803,	// (0x0009bc35) bg_popup_sub_pane_cp20_ParamLimits

0x7742,	// (0x00095b74) list_vitu2_match_list_pane_ParamLimits

0x7751,	// (0x00095b83) vitu2_page_scroll_pane_ParamLimits

0x7751,	// (0x00095b83) vitu2_page_scroll_pane

0xbef6,	// (0x0009a328) list_single_hwr_training_symbol_option_pane_ParamLimits

0xbef6,	// (0x0009a328) list_single_hwr_training_symbol_option_pane

0xbf09,	// (0x0009a33b) list_single_hwr_training_symbol_option_pane_g1

0xbf11,	// (0x0009a343) list_single_hwr_training_symbol_option_pane_t1

0xbf1f,	// (0x0009a351) bg_button_pane_cp023

0xbf28,	// (0x0009a35a) bg_button_pane_cp024

0x7d8a,	// (0x000961bc) vitu2_page_scroll_pane_g1

0x7d92,	// (0x000961c4) vitu2_page_scroll_pane_g2

0x0001,

0xfa1e,	// (0x0009de50) vitu2_page_scroll_pane_g

0x7d9a,	// (0x000961cc) vitu2_page_scroll_pane_t1

0x52cd,	// (0x000936ff) popup_char_count_window_g1

0xbf5b,	// (0x0009a38d) popup_char_count_window_g2

0xbf64,	// (0x0009a396) popup_char_count_window_g3

0x0002,

0xfa23,	// (0x0009de55) popup_char_count_window_g

0xbf6d,	// (0x0009a39f) popup_char_count_window_t1

0x0e1b,	// (0x0008f24d) main_vded2_pane

0xb17b,	// (0x000995ad) aid_size_cell_imed_line

0xb185,	// (0x000995b7) grid_imed_line_width_pane

0x6cb6,	// (0x000950e8) vid4_indicators_pane_g4

0xbf7b,	// (0x0009a3ad) cell_imed_line_width_pane_ParamLimits

0xbf7b,	// (0x0009a3ad) cell_imed_line_width_pane

0xbf8f,	// (0x0009a3c1) cell_imed_line_width_pane_g1

0xaabc,	// (0x00098eee) cell_imed_line_width_pane_g2

0x0001,

0xfa2a,	// (0x0009de5c) cell_imed_line_width_pane_g

0x7da9,	// (0x000961db) main_vded2_pane_g1_ParamLimits

0x7da9,	// (0x000961db) main_vded2_pane_g1

0x7dbf,	// (0x000961f1) main_vded2_pane_g2_ParamLimits

0x7dbf,	// (0x000961f1) main_vded2_pane_g2

0x0001,

0xfa2f,	// (0x0009de61) main_vded2_pane_g_ParamLimits

0xfa2f,	// (0x0009de61) main_vded2_pane_g

0x7dd1,	// (0x00096203) vded2_slider_pane_ParamLimits

0x7dd1,	// (0x00096203) vded2_slider_pane

0x7de1,	// (0x00096213) aid_size_touch_vded2_end

0x7deb,	// (0x0009621d) aid_size_touch_vded2_playhead

0xbf98,	// (0x0009a3ca) aid_size_touch_vded2_start

0xbfa0,	// (0x0009a3d2) vded2_slider_bg_pane

0xbfa9,	// (0x0009a3db) vded2_slider_pane_g1

0xbfb2,	// (0x0009a3e4) vded2_slider_pane_g2

0x7df5,	// (0x00096227) vded2_slider_pane_g3

0x0002,

0xfa34,	// (0x0009de66) vded2_slider_pane_g

0xbfba,	// (0x0009a3ec) vded2_slider_bg_pane_g1

0xbfc3,	// (0x0009a3f5) vded2_slider_bg_pane_g2

0xbfcc,	// (0x0009a3fe) vded2_slider_bg_pane_g3

0x0002,

0xfa3b,	// (0x0009de6d) vded2_slider_bg_pane_g

0x3593,	// (0x000919c5) aid_postcard_touch_down_pane_ParamLimits

0x3593,	// (0x000919c5) aid_postcard_touch_down_pane

0x35a9,	// (0x000919db) aid_postcard_touch_up_pane_ParamLimits

0x35a9,	// (0x000919db) aid_postcard_touch_up_pane

0x0e1b,	// (0x0008f24d) main_blid2_pane

0x4527,	// (0x00092959) popup_blid2_search_window

0x0e1b,	// (0x0008f24d) blid2_gps_pane

0x0e1b,	// (0x0008f24d) blid2_navig_pane

0x0e1b,	// (0x0008f24d) blid2_search_pane

0x0e1b,	// (0x0008f24d) blid2_tripm_pane

0x7e00,	// (0x00096232) blid2_search_pane_g1_ParamLimits

0x7e00,	// (0x00096232) blid2_search_pane_g1

0x7e18,	// (0x0009624a) blid2_search_pane_t1_ParamLimits

0x7e18,	// (0x0009624a) blid2_search_pane_t1

0x7e2a,	// (0x0009625c) aid_size_cell_blid2_gps_ParamLimits

0x7e2a,	// (0x0009625c) aid_size_cell_blid2_gps

0x7e42,	// (0x00096274) blid2_gps_pane_g1_ParamLimits

0x7e42,	// (0x00096274) blid2_gps_pane_g1

0x7e56,	// (0x00096288) grid_blid2_satellite_pane_ParamLimits

0x7e56,	// (0x00096288) grid_blid2_satellite_pane

0x7e70,	// (0x000962a2) blid2_navig_pane_g1_ParamLimits

0x7e70,	// (0x000962a2) blid2_navig_pane_g1

0x7e7c,	// (0x000962ae) blid2_navig_pane_t1_ParamLimits

0x7e7c,	// (0x000962ae) blid2_navig_pane_t1

0x7e97,	// (0x000962c9) blid2_navig_pane_t2_ParamLimits

0x7e97,	// (0x000962c9) blid2_navig_pane_t2

0x0001,

0xfa42,	// (0x0009de74) blid2_navig_pane_t_ParamLimits

0xfa42,	// (0x0009de74) blid2_navig_pane_t

0x7eb2,	// (0x000962e4) blid2_navig_ring_pane_ParamLimits

0x7eb2,	// (0x000962e4) blid2_navig_ring_pane

0x7ecb,	// (0x000962fd) blid2_speed_pane_ParamLimits

0x7ecb,	// (0x000962fd) blid2_speed_pane

0x7ed7,	// (0x00096309) blid2_tripm_pane_g1_ParamLimits

0x7ed7,	// (0x00096309) blid2_tripm_pane_g1

0x7ef2,	// (0x00096324) blid2_tripm_pane_g2_ParamLimits

0x7ef2,	// (0x00096324) blid2_tripm_pane_g2

0x7f06,	// (0x00096338) blid2_tripm_pane_g3_ParamLimits

0x7f06,	// (0x00096338) blid2_tripm_pane_g3

0x7f1a,	// (0x0009634c) blid2_tripm_pane_g4_ParamLimits

0x7f1a,	// (0x0009634c) blid2_tripm_pane_g4

0x7f2e,	// (0x00096360) blid2_tripm_pane_g5_ParamLimits

0x7f2e,	// (0x00096360) blid2_tripm_pane_g5

0x0005,

0xfa47,	// (0x0009de79) blid2_tripm_pane_g_ParamLimits

0xfa47,	// (0x0009de79) blid2_tripm_pane_g

0x7f54,	// (0x00096386) blid2_tripm_pane_t1_ParamLimits

0x7f54,	// (0x00096386) blid2_tripm_pane_t1

0x7f6f,	// (0x000963a1) blid2_tripm_pane_t2_ParamLimits

0x7f6f,	// (0x000963a1) blid2_tripm_pane_t2

0x7f8a,	// (0x000963bc) blid2_tripm_pane_t3_ParamLimits

0x7f8a,	// (0x000963bc) blid2_tripm_pane_t3

0x0003,

0xfa54,	// (0x0009de86) blid2_tripm_pane_t_ParamLimits

0xfa54,	// (0x0009de86) blid2_tripm_pane_t

0x7fd1,	// (0x00096403) cell_blid2_satellite_pane_ParamLimits

0x7fd1,	// (0x00096403) cell_blid2_satellite_pane

0x7fef,	// (0x00096421) cell_blid2_satellite_pane_g1

0xbfd5,	// (0x0009a407) cell_blid2_satellite_pane_t1

0xac6e,	// (0x000990a0) blid2_speed_pane_g1

0xbfe3,	// (0x0009a415) blid2_speed_pane_t1

0xbff1,	// (0x0009a423) blid2_speed_pane_t2

0x0001,

0xfa5d,	// (0x0009de8f) blid2_speed_pane_t

0xac6e,	// (0x000990a0) blid2_navig_ring_pane_g1

0x7ff8,	// (0x0009642a) blid2_navig_ring_pane_g2

0x8000,	// (0x00096432) blid2_navig_ring_pane_g3

0x8008,	// (0x0009643a) blid2_navig_ring_pane_g4

0x8010,	// (0x00096442) blid2_navig_ring_pane_g5

0x0004,

0xfa62,	// (0x0009de94) blid2_navig_ring_pane_g

0x0e1b,	// (0x0008f24d) bg_popup_window_pane_cp011

0xbfff,	// (0x0009a431) popup_blid2_search_window_g1

0xc007,	// (0x0009a439) popup_blid2_search_window_t1

0xc015,	// (0x0009a447) popup_blid2_search_window_t2

0x0001,

0xfa6d,	// (0x0009de9f) popup_blid2_search_window_t

0xdbc0,	// (0x0009bff2) main_browser_pane_g1

0xa7fb,	// (0x00098c2d) main_browser_pane_ParamLimits

0xd803,	// (0x0009bc35) bg_button_pane_cp011_ParamLimits

0x6fbe,	// (0x000953f0) cell_vitu2_function_pane_g1_ParamLimits

0x44f1,	// (0x00092923) bg_popup_sub_pane_cp22_ParamLimits

0x78eb,	// (0x00095d1d) input_focus_pane_cp08_ParamLimits

0x7902,	// (0x00095d34) popup_vitu2_query_button_pane_ParamLimits

0x7902,	// (0x00095d34) popup_vitu2_query_button_pane

0x7913,	// (0x00095d45) popup_vitu2_query_input_button_pane

0xbbbb,	// (0x00099fed) popup_vitu2_query_window_g1_ParamLimits

0x791d,	// (0x00095d4f) popup_vitu2_query_window_g2_ParamLimits

0xf96e,	// (0x0009dda0) popup_vitu2_query_window_g_ParamLimits

0x0e1b,	// (0x0008f24d) bg_button_pane_cp026

0x8018,	// (0x0009644a) popup_vitu2_query_input_button_pane_g1

0x0e1b,	// (0x0008f24d) bg_button_pane_cp025

0xc023,	// (0x0009a455) popup_vitu2_query_button_pane_t1

0x5581,	// (0x000939b3) main_mp3_pane_t6

0x558f,	// (0x000939c1) popup_slider_window_cp01

0xd794,	// (0x0009bbc6) cam4_battery_pane

0xd7fb,	// (0x0009bc2d) cam4_battery_pane_cp02

0xd890,	// (0x0009bcc2) cam4_battery_pane_cp01

0xd890,	// (0x0009bcc2) cam4_battery_pane_cp03

0xb7ab,	// (0x00099bdd) cam4_battery_pane_g1

0xac6e,	// (0x000990a0) cam4_battery_pane_g2

0x0001,

0xfa72,	// (0x0009dea4) cam4_battery_pane_g

0xab38,	// (0x00098f6a) popup_blid_sat_info2_window_t11

0x2eec,	// (0x0009131e) aid_size_touch_mv_arrow_left_ParamLimits

0x2f15,	// (0x00091347) aid_size_touch_mv_arrow_right_ParamLimits

0xe2a9,	// (0x0009c6db) navi_pane_g1_ParamLimits

0x2f3e,	// (0x00091370) navi_pane_g2_ParamLimits

0x2f6c,	// (0x0009139e) navi_pane_g3_ParamLimits

0xf3a5,	// (0x0009d7d7) navi_pane_g_ParamLimits

0x2fc4,	// (0x000913f6) navi_pane_mv_t1_ParamLimits

0x6181,	// (0x000945b3) grid_imed_effect_pane_ParamLimits

0x1d45,	// (0x00090177) aid_placing_vt_slider_lsc

0xdb11,	// (0x0009bf43) aid_placing_vt_slider_prt

0xa046,	// (0x00098478) bg_tb_trans_pane_cp01_ParamLimits

0xadf5,	// (0x00099227) popup_image_details_window_g1_ParamLimits

0xae08,	// (0x0009923a) popup_image_details_window_g2_ParamLimits

0xae1d,	// (0x0009924f) popup_image_details_window_g3_ParamLimits

0xae1d,	// (0x0009924f) popup_image_details_window_g3

0xf676,	// (0x0009daa8) popup_image_details_window_g_ParamLimits

0xae31,	// (0x00099263) popup_image_details_window_t1_ParamLimits

0xae43,	// (0x00099275) popup_image_details_window_t2_ParamLimits

0xae5c,	// (0x0009928e) popup_image_details_window_t3_ParamLimits

0xae70,	// (0x000992a2) popup_image_details_window_t4_ParamLimits

0xae8b,	// (0x000992bd) popup_image_details_window_t5_ParamLimits

0xf67d,	// (0x0009daaf) popup_image_details_window_t_ParamLimits

0x7c93,	// (0x000960c5) cl_header_name_pane_ParamLimits

0x7c93,	// (0x000960c5) cl_header_name_pane

0x8020,	// (0x00096452) cl_header_name_pane_t1_ParamLimits

0x8020,	// (0x00096452) cl_header_name_pane_t1

0x8041,	// (0x00096473) cl_header_name_pane_t2_ParamLimits

0x8041,	// (0x00096473) cl_header_name_pane_t2

0x8083,	// (0x000964b5) cl_header_name_pane_t3_ParamLimits

0x8083,	// (0x000964b5) cl_header_name_pane_t3

0x0002,

0xfa77,	// (0x0009dea9) cl_header_name_pane_t_ParamLimits

0xfa77,	// (0x0009dea9) cl_header_name_pane_t

0x2f95,	// (0x000913c7) navi_pane_mv_g2_ParamLimits

0xb8df,	// (0x00099d11) field_vitu2_entry_pane_g1_ParamLimits

0xb8eb,	// (0x00099d1d) field_vitu2_entry_pane_g2_ParamLimits

0xb8f7,	// (0x00099d29) field_vitu2_entry_pane_g3_ParamLimits

0xb8f7,	// (0x00099d29) field_vitu2_entry_pane_g3

0xf874,	// (0x0009dca6) field_vitu2_entry_pane_g_ParamLimits

0x6f3a,	// (0x0009536c) cell_vitu2_itu_pane_g1_ParamLimits

0x6f4a,	// (0x0009537c) cell_vitu2_itu_pane_g2_ParamLimits

0x6f4a,	// (0x0009537c) cell_vitu2_itu_pane_g2

0x0001,

0xf880,	// (0x0009dcb2) cell_vitu2_itu_pane_g_ParamLimits

0xf880,	// (0x0009dcb2) cell_vitu2_itu_pane_g

0xd803,	// (0x0009bc35) bg_vkb2_func_pane_cp05_ParamLimits

0xd803,	// (0x0009bc35) bg_vkb2_func_pane_cp05

0xd803,	// (0x0009bc35) bg_vkb2_func_pane_cp03

0xd803,	// (0x0009bc35) bg_vkb2_func_pane_cp04

0xd803,	// (0x0009bc35) bg_vkb2_func_pane_cp10_ParamLimits

0xd803,	// (0x0009bc35) bg_vkb2_func_pane_cp10

0x7c35,	// (0x00096067) bg_vkb2_func_pane_cp08

0x7c1b,	// (0x0009604d) bg_vkb2_func_pane_cp06

0x7c29,	// (0x0009605b) bg_vkb2_func_pane_cp07

0xbf31,	// (0x0009a363) bg_vkb2_func_pane_cp11_ParamLimits

0xbf31,	// (0x0009a363) bg_vkb2_func_pane_cp11

0xbf46,	// (0x0009a378) bg_vkb2_func_pane_cp12_ParamLimits

0xbf46,	// (0x0009a378) bg_vkb2_func_pane_cp12

0x0e1b,	// (0x0008f24d) bg_vkb2_func_pane_cp09

0xb934,	// (0x00099d66) bg_vkb2_func_pane_g1

0xdcd1,	// (0x0009c103) bg_vkb2_func_pane_g2

0xb93c,	// (0x00099d6e) bg_vkb2_func_pane_g3

0xb944,	// (0x00099d76) bg_vkb2_func_pane_g4

0xbb66,	// (0x00099f98) bg_vkb2_func_pane_g5

0xb95c,	// (0x00099d8e) bg_vkb2_func_pane_g6

0xb964,	// (0x00099d96) bg_vkb2_func_pane_g7

0xb954,	// (0x00099d86) bg_vkb2_func_pane_g8

0xdcb1,	// (0x0009c0e3) bg_vkb2_func_pane_g9

0x0008,

0xfa7e,	// (0x0009deb0) bg_vkb2_func_pane_g

0x7f42,	// (0x00096374) blid2_tripm_pane_g6_ParamLimits

0x7f42,	// (0x00096374) blid2_tripm_pane_g6

0xb765,	// (0x00099b97) mp4_progress_pane_g1

0x7fbd,	// (0x000963ef) blid2_tripm_values_pane_ParamLimits

0x7fbd,	// (0x000963ef) blid2_tripm_values_pane

0x80b4,	// (0x000964e6) blid2_tripm_values_pane_t1

0x80c2,	// (0x000964f4) blid2_tripm_values_pane_t2

0x80d0,	// (0x00096502) blid2_tripm_values_pane_t3

0x80de,	// (0x00096510) blid2_tripm_values_pane_t4

0x80ec,	// (0x0009651e) blid2_tripm_values_pane_t5

0x80fa,	// (0x0009652c) blid2_tripm_values_pane_t6

0x8108,	// (0x0009653a) blid2_tripm_values_pane_t7

0x8116,	// (0x00096548) blid2_tripm_values_pane_t8

0x8124,	// (0x00096556) blid2_tripm_values_pane_t9

0x0008,

0xfa91,	// (0x0009dec3) blid2_tripm_values_pane_t

0x1d87,	// (0x000901b9) call_video_pane_t1_ParamLimits

0x1da5,	// (0x000901d7) call_video_pane_t2_ParamLimits

0xf284,	// (0x0009d6b6) call_video_pane_t_ParamLimits

0x3496,	// (0x000918c8) msg_header_pane_g1_ParamLimits

0xe4c4,	// (0x0009c8f6) msg_header_pane_g2_ParamLimits

0xe4c4,	// (0x0009c8f6) msg_header_pane_g2

0x0001,

0xf422,	// (0x0009d854) msg_header_pane_g_ParamLimits

0xf422,	// (0x0009d854) msg_header_pane_g

0xa7fb,	// (0x00098c2d) main_clock2_pane_ParamLimits

0x5ea6,	// (0x000942d8) grid_clock2_toolbar_pane_ParamLimits

0x5ea6,	// (0x000942d8) grid_clock2_toolbar_pane

0x5ea6,	// (0x000942d8) listscroll_clock2_pane_ParamLimits

0x5ea6,	// (0x000942d8) listscroll_clock2_pane

0x5f83,	// (0x000943b5) main_clock2_pane_t3_ParamLimits

0x5f83,	// (0x000943b5) main_clock2_pane_t3

0x5f9e,	// (0x000943d0) main_clock2_pane_t4_ParamLimits

0x5f9e,	// (0x000943d0) main_clock2_pane_t4

0xc031,	// (0x0009a463) cell_clock2_toolbar_pane

0xc039,	// (0x0009a46b) cell_clock2_toolbar_pane_cp01

0xc039,	// (0x0009a46b) cell_clock2_toolbar_pane_cp02

0xc041,	// (0x0009a473) cell_clock2_toolbar_pane_cp03

0xc049,	// (0x0009a47b) list_clock2_pane

0xe1fc,	// (0x0009c62e) scroll_pane_cp10

0xc051,	// (0x0009a483) list_single_clock2_pane_ParamLimits

0xc051,	// (0x0009a483) list_single_clock2_pane

0xe349,	// (0x0009c77b) list_highlight_pane_cp08

0xc05e,	// (0x0009a490) list_single_clock2_pane_t1

0xc06c,	// (0x0009a49e) list_single_clock2_pane_t2

0x0001,

0xfaa4,	// (0x0009ded6) list_single_clock2_pane_t

0x0e1b,	// (0x0008f24d) bg_button_pane_cp10

0xc07a,	// (0x0009a4ac) cell_clock2_toolbar_pane_g1

0x351f,	// (0x00091951) aid_main_viewer_pane_g1_ParamLimits

0x351f,	// (0x00091951) aid_main_viewer_pane_g1

0x352d,	// (0x0009195f) aid_main_viewer_pane_g2_ParamLimits

0x352d,	// (0x0009195f) aid_main_viewer_pane_g2

0x353b,	// (0x0009196d) aid_main_viewer_pane_g3_ParamLimits

0x353b,	// (0x0009196d) aid_main_viewer_pane_g3

0x354a,	// (0x0009197c) aid_main_viewer_pane_g4_ParamLimits

0x354a,	// (0x0009197c) aid_main_viewer_pane_g4

0x0003,

0xf433,	// (0x0009d865) aid_main_viewer_pane_g_ParamLimits

0xf433,	// (0x0009d865) aid_main_viewer_pane_g

0x44dd,	// (0x0009290f) main_calc_pane_ParamLimits

0x44ff,	// (0x00092931) main_dialer2_pane_ParamLimits

0x0e1b,	// (0x0008f24d) main_cam6_pane

0x0e1b,	// (0x0008f24d) main_vid6_pane

0x5eb2,	// (0x000942e4) listscroll_gen_pane_cp06_ParamLimits

0x5eb2,	// (0x000942e4) listscroll_gen_pane_cp06

0x5fb9,	// (0x000943eb) main_clock2_pane_t5_ParamLimits

0x5fb9,	// (0x000943eb) main_clock2_pane_t5

0x6016,	// (0x00094448) aid_call2_pane_cp10_ParamLimits

0x6028,	// (0x0009445a) aid_call_pane_cp10_ParamLimits

0xe27e,	// (0x0009c6b0) popup_clock_analogue_window_cp10_g1_ParamLimits

0xe27e,	// (0x0009c6b0) popup_clock_analogue_window_cp10_g2_ParamLimits

0x603a,	// (0x0009446c) popup_clock_analogue_window_cp10_g3_ParamLimits

0x603a,	// (0x0009446c) popup_clock_analogue_window_cp10_g4_ParamLimits

0xe27e,	// (0x0009c6b0) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf72d,	// (0x0009db5f) popup_clock_analogue_window_cp10_g_ParamLimits

0x604c,	// (0x0009447e) popup_clock_analogue_window_cp10_t1_ParamLimits

0x66d9,	// (0x00094b0b) cell_dialer2_keypad_pane_g2_ParamLimits

0x66d9,	// (0x00094b0b) cell_dialer2_keypad_pane_g2

0x0001,

0xf813,	// (0x0009dc45) cell_dialer2_keypad_pane_g_ParamLimits

0xf813,	// (0x0009dc45) cell_dialer2_keypad_pane_g

0x66f5,	// (0x00094b27) cell_dialer2_keypad_pane_t1

0x72d5,	// (0x00095707) main_cset_text2_pane_ParamLimits

0x72d5,	// (0x00095707) main_cset_text2_pane

0xbda3,	// (0x0009a1d5) area_vitu2_query_pane_g1_ParamLimits

0x7bba,	// (0x00095fec) area_vitu2_query_pane_g2_ParamLimits

0xf9c1,	// (0x0009ddf3) area_vitu2_query_pane_g_ParamLimits

0xbe27,	// (0x0009a259) area_vitu2_query_pane_t7_ParamLimits

0xbe27,	// (0x0009a259) area_vitu2_query_pane_t7

0x7c1b,	// (0x0009604d) bg_button_pane_cp018_ParamLimits

0x7c29,	// (0x0009605b) bg_button_pane_cp021_ParamLimits

0x7c35,	// (0x00096067) bg_button_pane_cp022_ParamLimits

0x7c35,	// (0x00096067) bg_vkb2_func_pane_cp08_ParamLimits

0x7c1b,	// (0x0009604d) bg_vkb2_func_pane_cp06_ParamLimits

0x7c29,	// (0x0009605b) bg_vkb2_func_pane_cp07_ParamLimits

0x7c46,	// (0x00096078) input_focus_pane_cp09_ParamLimits

0xd908,	// (0x0009bd3a) cam6_autofocus_pane_ParamLimits

0xd908,	// (0x0009bd3a) cam6_autofocus_pane

0x8132,	// (0x00096564) cam6_image_uncrop_pane_ParamLimits

0x8132,	// (0x00096564) cam6_image_uncrop_pane

0x8141,	// (0x00096573) cam6_indi_pane_ParamLimits

0x8141,	// (0x00096573) cam6_indi_pane

0x8157,	// (0x00096589) cam6_mode_pane_ParamLimits

0x8157,	// (0x00096589) cam6_mode_pane

0x8169,	// (0x0009659b) cam6_timer_pane_ParamLimits

0x8169,	// (0x0009659b) cam6_timer_pane

0x8175,	// (0x000965a7) cam6_zoom_pane_ParamLimits

0x8175,	// (0x000965a7) cam6_zoom_pane

0x8181,	// (0x000965b3) cam6_mode_pane_g1_ParamLimits

0x8181,	// (0x000965b3) cam6_mode_pane_g1

0x8191,	// (0x000965c3) cam6_mode_pane_g2_ParamLimits

0x8191,	// (0x000965c3) cam6_mode_pane_g2

0x81a1,	// (0x000965d3) cam6_mode_pane_g3_ParamLimits

0x81a1,	// (0x000965d3) cam6_mode_pane_g3

0x81b1,	// (0x000965e3) cam6_mode_pane_g4_ParamLimits

0x81b1,	// (0x000965e3) cam6_mode_pane_g4

0x0003,

0xfaa9,	// (0x0009dedb) cam6_mode_pane_g_ParamLimits

0xfaa9,	// (0x0009dedb) cam6_mode_pane_g

0xc082,	// (0x0009a4b4) bg_tb_trans_pane_cp08_ParamLimits

0xc082,	// (0x0009a4b4) bg_tb_trans_pane_cp08

0xc090,	// (0x0009a4c2) cam6_battery_pane_ParamLimits

0xc090,	// (0x0009a4c2) cam6_battery_pane

0xc0a6,	// (0x0009a4d8) cam6_indi_pane_g1_ParamLimits

0xc0a6,	// (0x0009a4d8) cam6_indi_pane_g1

0xc0b8,	// (0x0009a4ea) cam6_indi_pane_g2_ParamLimits

0xc0b8,	// (0x0009a4ea) cam6_indi_pane_g2

0xc0ca,	// (0x0009a4fc) cam6_indi_pane_g3_ParamLimits

0xc0ca,	// (0x0009a4fc) cam6_indi_pane_g3

0x0002,

0xfab2,	// (0x0009dee4) cam6_indi_pane_g_ParamLimits

0xfab2,	// (0x0009dee4) cam6_indi_pane_g

0xc0dc,	// (0x0009a50e) cam6_indi_pane_t1_ParamLimits

0xc0dc,	// (0x0009a50e) cam6_indi_pane_t1

0x81c1,	// (0x000965f3) cam6_autofocus_pane_g1

0x81c9,	// (0x000965fb) cam6_autofocus_pane_g2

0x81d1,	// (0x00096603) cam6_autofocus_pane_g3

0x81d9,	// (0x0009660b) cam6_autofocus_pane_g4

0x0003,

0xfab9,	// (0x0009deeb) cam6_autofocus_pane_g

0xc102,	// (0x0009a534) cam6_timer_pane_g1

0xc10a,	// (0x0009a53c) cam6_timer_pane_t1

0xc118,	// (0x0009a54a) cam6_zoom_cont_pane

0xc120,	// (0x0009a552) cam6_zoom_pane_g1

0xc128,	// (0x0009a55a) cam6_zoom_pane_g2

0x81e1,	// (0x00096613) cam6_zoom_pane_g3

0x0002,

0xfac2,	// (0x0009def4) cam6_zoom_pane_g

0xac6e,	// (0x000990a0) cam6_battery_pane_g1

0xac6e,	// (0x000990a0) cam6_battery_pane_g2

0x0001,

0xf63a,	// (0x0009da6c) cam6_battery_pane_g

0xc130,	// (0x0009a562) cam6_zoom_cont_pane_g1

0xc139,	// (0x0009a56b) cam6_zoom_cont_pane_g2

0xc142,	// (0x0009a574) cam6_zoom_cont_pane_g3

0x0002,

0xfac9,	// (0x0009defb) cam6_zoom_cont_pane_g

0x81fe,	// (0x00096630) cam6_mode_pane_cp_ParamLimits

0x81fe,	// (0x00096630) cam6_mode_pane_cp

0x8210,	// (0x00096642) cam6_zoom_pane_cp_ParamLimits

0x8210,	// (0x00096642) cam6_zoom_pane_cp

0x821c,	// (0x0009664e) vid6_image_uncrop_cif_pane_ParamLimits

0x821c,	// (0x0009664e) vid6_image_uncrop_cif_pane

0x822c,	// (0x0009665e) vid6_image_uncrop_nhd_pane_ParamLimits

0x822c,	// (0x0009665e) vid6_image_uncrop_nhd_pane

0x823b,	// (0x0009666d) vid6_image_uncrop_vga_pane_ParamLimits

0x823b,	// (0x0009666d) vid6_image_uncrop_vga_pane

0x824a,	// (0x0009667c) vid6_image_uncrop_wvga_pane_ParamLimits

0x824a,	// (0x0009667c) vid6_image_uncrop_wvga_pane

0x8259,	// (0x0009668b) vid6_indi_pane_ParamLimits

0x8259,	// (0x0009668b) vid6_indi_pane

0xc082,	// (0x0009a4b4) bg_tb_trans_pane_cp09_ParamLimits

0xc082,	// (0x0009a4b4) bg_tb_trans_pane_cp09

0xc15a,	// (0x0009a58c) cam6_battery_pane_cp_ParamLimits

0xc15a,	// (0x0009a58c) cam6_battery_pane_cp

0xc166,	// (0x0009a598) vid6_indi_pane_g1_ParamLimits

0xc166,	// (0x0009a598) vid6_indi_pane_g1

0xc178,	// (0x0009a5aa) vid6_indi_pane_g2_ParamLimits

0xc178,	// (0x0009a5aa) vid6_indi_pane_g2

0xc18a,	// (0x0009a5bc) vid6_indi_pane_g3_ParamLimits

0xc18a,	// (0x0009a5bc) vid6_indi_pane_g3

0xc19f,	// (0x0009a5d1) vid6_indi_pane_g4_ParamLimits

0xc19f,	// (0x0009a5d1) vid6_indi_pane_g4

0xc1b4,	// (0x0009a5e6) vid6_indi_pane_g5_ParamLimits

0xc1b4,	// (0x0009a5e6) vid6_indi_pane_g5

0x0004,

0xfad0,	// (0x0009df02) vid6_indi_pane_g_ParamLimits

0xfad0,	// (0x0009df02) vid6_indi_pane_g

0xc1ce,	// (0x0009a600) vid6_indi_pane_t1_ParamLimits

0xc1ce,	// (0x0009a600) vid6_indi_pane_t1

0xc1e4,	// (0x0009a616) vid6_indi_pane_t2_ParamLimits

0xc1e4,	// (0x0009a616) vid6_indi_pane_t2

0xc20c,	// (0x0009a63e) vid6_indi_pane_t3_ParamLimits

0xc20c,	// (0x0009a63e) vid6_indi_pane_t3

0xc234,	// (0x0009a666) vid6_indi_pane_t4_ParamLimits

0xc234,	// (0x0009a666) vid6_indi_pane_t4

0x0003,

0xfadb,	// (0x0009df0d) vid6_indi_pane_t_ParamLimits

0xfadb,	// (0x0009df0d) vid6_indi_pane_t

0xc258,	// (0x0009a68a) wait_bar_pane_cp08

0x8271,	// (0x000966a3) main_cset_text2_pane_t1_ParamLimits

0x8271,	// (0x000966a3) main_cset_text2_pane_t1

0x81e9,	// (0x0009661b) listscroll_gen_pane_cp06_t1_ParamLimits

0x81e9,	// (0x0009661b) listscroll_gen_pane_cp06_t1

0x0e1b,	// (0x0008f24d) main_cam6_set_pane

0xd786,	// (0x0009bbb8) bg_tb_trans_pane_cp06_ParamLimits

0xd79c,	// (0x0009bbce) cam4_indicators_pane_g1_ParamLimits

0xd7ad,	// (0x0009bbdf) cam4_indicators_pane_g2_ParamLimits

0xf850,	// (0x0009dc82) cam4_indicators_pane_g_ParamLimits

0xd7cb,	// (0x0009bbfd) cam4_indicators_pane_t1_ParamLimits

0xd7ed,	// (0x0009bc1f) bg_tb_trans_pane_cp07_ParamLimits

0x6c8f,	// (0x000950c1) vid4_indicators_pane_g1_ParamLimits

0x6c9c,	// (0x000950ce) vid4_indicators_pane_g2_ParamLimits

0x6ca9,	// (0x000950db) vid4_indicators_pane_g3_ParamLimits

0x6cb6,	// (0x000950e8) vid4_indicators_pane_g4_ParamLimits

0xf862,	// (0x0009dc94) vid4_indicators_pane_g_ParamLimits

0x6cce,	// (0x00095100) vid4_indicators_pane_t1_ParamLimits

0xd898,	// (0x0009bcca) vid4_progress_pane_g1_ParamLimits

0xd8a8,	// (0x0009bcda) vid4_progress_pane_g2_ParamLimits

0xdef2,	// (0x0009c324) vid4_progress_pane_g3_ParamLimits

0xd7ad,	// (0x0009bbdf) vid4_progress_pane_g4_ParamLimits

0xfa0c,	// (0x0009de3e) vid4_progress_pane_g_ParamLimits

0xd8b8,	// (0x0009bcea) vid4_progress_pane_t1_ParamLimits

0xd8cd,	// (0x0009bcff) vid4_progress_pane_t2_ParamLimits

0xd8e3,	// (0x0009bd15) vid4_progress_pane_t3_ParamLimits

0xfa17,	// (0x0009de49) vid4_progress_pane_t_ParamLimits

0xd8f8,	// (0x0009bd2a) wait_bar_pane_cp07_ParamLimits

0x8291,	// (0x000966c3) main_cam6_set_pane_g2_ParamLimits

0x8291,	// (0x000966c3) main_cam6_set_pane_g2

0x82b5,	// (0x000966e7) main_cset6_listscroll_pane_ParamLimits

0x82b5,	// (0x000966e7) main_cset6_listscroll_pane

0x82d1,	// (0x00096703) main_cset6_slider_pane_ParamLimits

0x82d1,	// (0x00096703) main_cset6_slider_pane

0x82e7,	// (0x00096719) main_cset6_text2_pane_ParamLimits

0x82e7,	// (0x00096719) main_cset6_text2_pane

0xc267,	// (0x0009a699) main_cset6_text_pane

0xc26f,	// (0x0009a6a1) main_cset_list_pane_copy1_ParamLimits

0xc26f,	// (0x0009a6a1) main_cset_list_pane_copy1

0xc27f,	// (0x0009a6b1) scroll_pane_cp028_copy1

0x82f5,	// (0x00096727) cset_list_set_pane_copy1

0x8308,	// (0x0009673a) aid_position_infowindow_above_copy1

0x8310,	// (0x00096742) aid_position_infowindow_below_copy1

0xc288,	// (0x0009a6ba) cset_list_set_pane_g1_copy1

0x75ad,	// (0x000959df) cset_list_set_pane_g3_copy1_ParamLimits

0x75ad,	// (0x000959df) cset_list_set_pane_g3_copy1

0x75bc,	// (0x000959ee) cset_list_set_pane_t1_copy1_ParamLimits

0x75bc,	// (0x000959ee) cset_list_set_pane_t1_copy1

0xa046,	// (0x00098478) list_highlight_pane_cp021_copy1_ParamLimits

0xa046,	// (0x00098478) list_highlight_pane_cp021_copy1

0xc290,	// (0x0009a6c2) cset6_slider_pane_ParamLimits

0xc290,	// (0x0009a6c2) cset6_slider_pane

0xc2bc,	// (0x0009a6ee) main_cset6_slider_pane_g1_ParamLimits

0xc2bc,	// (0x0009a6ee) main_cset6_slider_pane_g1

0x8318,	// (0x0009674a) main_cset6_slider_pane_g2_ParamLimits

0x8318,	// (0x0009674a) main_cset6_slider_pane_g2

0xba63,	// (0x00099e95) main_cset6_slider_pane_g3_ParamLimits

0xba63,	// (0x00099e95) main_cset6_slider_pane_g3

0x739a,	// (0x000957cc) main_cset6_slider_pane_g4_ParamLimits

0x739a,	// (0x000957cc) main_cset6_slider_pane_g4

0x73e2,	// (0x00095814) main_cset6_slider_pane_g5_ParamLimits

0x73e2,	// (0x00095814) main_cset6_slider_pane_g5

0xba63,	// (0x00099e95) main_cset6_slider_pane_g7_ParamLimits

0xba63,	// (0x00099e95) main_cset6_slider_pane_g7

0xba6f,	// (0x00099ea1) main_cset6_slider_pane_g8_ParamLimits

0xba6f,	// (0x00099ea1) main_cset6_slider_pane_g8

0x7382,	// (0x000957b4) main_cset6_slider_pane_g9_ParamLimits

0x7382,	// (0x000957b4) main_cset6_slider_pane_g9

0x738e,	// (0x000957c0) main_cset6_slider_pane_g10_ParamLimits

0x738e,	// (0x000957c0) main_cset6_slider_pane_g10

0x739a,	// (0x000957cc) main_cset6_slider_pane_g11_ParamLimits

0x739a,	// (0x000957cc) main_cset6_slider_pane_g11

0x73a6,	// (0x000957d8) main_cset6_slider_pane_g12_ParamLimits

0x73a6,	// (0x000957d8) main_cset6_slider_pane_g12

0x73b2,	// (0x000957e4) main_cset6_slider_pane_g13_ParamLimits

0x73b2,	// (0x000957e4) main_cset6_slider_pane_g13

0x73be,	// (0x000957f0) main_cset6_slider_pane_g14_ParamLimits

0x73be,	// (0x000957f0) main_cset6_slider_pane_g14

0x8340,	// (0x00096772) main_cset6_slider_pane_g15_ParamLimits

0x8340,	// (0x00096772) main_cset6_slider_pane_g15

0x73e2,	// (0x00095814) main_cset6_slider_pane_g16_ParamLimits

0x73e2,	// (0x00095814) main_cset6_slider_pane_g16

0x73ee,	// (0x00095820) main_cset6_slider_pane_g17_ParamLimits

0x73ee,	// (0x00095820) main_cset6_slider_pane_g17

0x0011,

0xfae4,	// (0x0009df16) main_cset6_slider_pane_g_ParamLimits

0xfae4,	// (0x0009df16) main_cset6_slider_pane_g

0xc2e4,	// (0x0009a716) main_cset6_slider_pane_t1_ParamLimits

0xc2e4,	// (0x0009a716) main_cset6_slider_pane_t1

0x8358,	// (0x0009678a) main_cset6_slider_pane_t2_ParamLimits

0x8358,	// (0x0009678a) main_cset6_slider_pane_t2

0x8383,	// (0x000967b5) main_cset6_slider_pane_t3_ParamLimits

0x8383,	// (0x000967b5) main_cset6_slider_pane_t3

0x83ae,	// (0x000967e0) main_cset6_slider_pane_t4_ParamLimits

0x83ae,	// (0x000967e0) main_cset6_slider_pane_t4

0x83d9,	// (0x0009680b) main_cset6_slider_pane_t5_ParamLimits

0x83d9,	// (0x0009680b) main_cset6_slider_pane_t5

0xc325,	// (0x0009a757) main_cset6_slider_pane_t7_ParamLimits

0xc325,	// (0x0009a757) main_cset6_slider_pane_t7

0x8404,	// (0x00096836) main_cset6_slider_pane_t8_ParamLimits

0x8404,	// (0x00096836) main_cset6_slider_pane_t8

0x8428,	// (0x0009685a) main_cset6_slider_pane_t9_ParamLimits

0x8428,	// (0x0009685a) main_cset6_slider_pane_t9

0x844c,	// (0x0009687e) main_cset6_slider_pane_t10_ParamLimits

0x844c,	// (0x0009687e) main_cset6_slider_pane_t10

0x8470,	// (0x000968a2) main_cset6_slider_pane_t11_ParamLimits

0x8470,	// (0x000968a2) main_cset6_slider_pane_t11

0xc35b,	// (0x0009a78d) main_cset6_slider_pane_t14_ParamLimits

0xc35b,	// (0x0009a78d) main_cset6_slider_pane_t14

0xc394,	// (0x0009a7c6) main_cset6_slider_pane_t15_ParamLimits

0xc394,	// (0x0009a7c6) main_cset6_slider_pane_t15

0x000b,

0xfb09,	// (0x0009df3b) main_cset6_slider_pane_t_ParamLimits

0xfb09,	// (0x0009df3b) main_cset6_slider_pane_t

0xc3cd,	// (0x0009a7ff) cset_slider_pane_g1_copy1

0xc3d6,	// (0x0009a808) cset_slider_pane_g2_copy1

0xc3df,	// (0x0009a811) cset_slider_pane_g3_copy1

0x0e1b,	// (0x0008f24d) bg_popup_sub_pane_cp011_copy1

0xbbc7,	// (0x00099ff9) main_cset_text_pane_g1_copy1

0xbbcf,	// (0x0009a001) main_cset_text_pane_t1_copy1

0xbbdd,	// (0x0009a00f) main_cset_text_pane_t2_copy1

0xbbeb,	// (0x0009a01d) main_cset_text_pane_t3_copy1

0xbbf9,	// (0x0009a02b) main_cset_text_pane_t4_copy1

0xbc07,	// (0x0009a039) main_cset_text_pane_t5_copy1

0xbc15,	// (0x0009a047) main_cset_text_pane_t6_copy1

0xbc23,	// (0x0009a055) main_cset_text_pane_t7_copy1

0x8271,	// (0x000966a3) main_cset_text2_pane_t1_copy1

0x0e1b,	// (0x0008f24d) main_ncimui_pane

0x4774,	// (0x00092ba6) popup_query_ncimui_window_ParamLimits

0x4774,	// (0x00092ba6) popup_query_ncimui_window

0xaf3a,	// (0x0009936c) field_cale_ev2_pane_g4_ParamLimits

0xaf3a,	// (0x0009936c) field_cale_ev2_pane_g4

0x65b1,	// (0x000949e3) cell_video_dialer_keypad_pane_g2_ParamLimits

0x65b1,	// (0x000949e3) cell_video_dialer_keypad_pane_g2

0x0001,

0xf7ee,	// (0x0009dc20) cell_video_dialer_keypad_pane_g_ParamLimits

0xf7ee,	// (0x0009dc20) cell_video_dialer_keypad_pane_g

0x65c9,	// (0x000949fb) cell_video_dialer_keypad_pane_t1

0x0e1b,	// (0x0008f24d) bg_popup_window_pane_cp012

0xe0be,	// (0x0009c4f0) heading_pane_cp06

0xc4d7,	// (0x0009a909) ncim_query_content_pane

0x0e1b,	// (0x0008f24d) bg_popup_heading_pane_cp01

0xc4df,	// (0x0009a911) ncim_heading_pane_t1

0xc4ed,	// (0x0009a91f) ncim_indicator_popup_pane

0xc4ff,	// (0x0009a931) ncim_query_button_pane

0xc513,	// (0x0009a945) ncim_query_content_pane_t1

0xc525,	// (0x0009a957) ncim_query_content_pane_t2

0x0005,

0xfb48,	// (0x0009df7a) ncim_query_content_pane_t

0xc55f,	// (0x0009a991) ncim_query_list_pane

0xc571,	// (0x0009a9a3) ncim_query_popup_pane

0xc4ed,	// (0x0009a91f) ncim_indicator_popup_pane_ParamLimits

0x858d,	// (0x000969bf) ncim_query_content_pane_g1_ParamLimits

0x858d,	// (0x000969bf) ncim_query_content_pane_g1

0xc513,	// (0x0009a945) ncim_query_content_pane_t1_ParamLimits

0xc525,	// (0x0009a957) ncim_query_content_pane_t2_ParamLimits

0x8599,	// (0x000969cb) ncim_query_content_pane_t3_ParamLimits

0x8599,	// (0x000969cb) ncim_query_content_pane_t3

0x85c1,	// (0x000969f3) ncim_query_content_pane_t4_ParamLimits

0x85c1,	// (0x000969f3) ncim_query_content_pane_t4

0x85e9,	// (0x00096a1b) ncim_query_content_pane_t5_ParamLimits

0x85e9,	// (0x00096a1b) ncim_query_content_pane_t5

0xc537,	// (0x0009a969) ncim_query_content_pane_t6_ParamLimits

0xc537,	// (0x0009a969) ncim_query_content_pane_t6

0xfb48,	// (0x0009df7a) ncim_query_content_pane_t_ParamLimits

0xc55f,	// (0x0009a991) ncim_query_list_pane_ParamLimits

0xc571,	// (0x0009a9a3) ncim_query_popup_pane_ParamLimits

0xc585,	// (0x0009a9b7) wait_bar_pane_cp04

0x0e1b,	// (0x0008f24d) input_focus_pane_cp011

0xc58d,	// (0x0009a9bf) ncim_query_popup_pane_t1

0xc59b,	// (0x0009a9cd) ncim_list_query_list_pane_ParamLimits

0xc59b,	// (0x0009a9cd) ncim_list_query_list_pane

0x0e1b,	// (0x0008f24d) bg_button_pane_cp027

0xc5ae,	// (0x0009a9e0) ncim_query_button_pane_g1

0x0e1b,	// (0x0008f24d) list_highlight_pane_cp012

0xc5b8,	// (0x0009a9ea) ncim_list_query_list_pane_g1

0xc5c0,	// (0x0009a9f2) ncim_list_query_list_pane_t1

0xd7bc,	// (0x0009bbee) cam4_indicators_pane_g3_ParamLimits

0xd7bc,	// (0x0009bbee) cam4_indicators_pane_g3

0x6cc2,	// (0x000950f4) vid4_indicators_pane_g5_ParamLimits

0x6cc2,	// (0x000950f4) vid4_indicators_pane_g5

0xd7bc,	// (0x0009bbee) vid4_progress_pane_g5_ParamLimits

0xd7bc,	// (0x0009bbee) vid4_progress_pane_g5

0x84a6,	// (0x000968d8) main_ncimui_pane_g1

0x84fc,	// (0x0009692e) ncimui_group_query_pane_ParamLimits

0x84fc,	// (0x0009692e) ncimui_group_query_pane

0x8538,	// (0x0009696a) ncimui_list_pane_ParamLimits

0x8538,	// (0x0009696a) ncimui_list_pane

0x8559,	// (0x0009698b) ncimui_text_pane_ParamLimits

0x8559,	// (0x0009698b) ncimui_text_pane

0x8611,	// (0x00096a43) ncimui_text_pane_t1_ParamLimits

0x8611,	// (0x00096a43) ncimui_text_pane_t1

0xc5ce,	// (0x0009aa00) ncimui_list_single_graphic_pane_ParamLimits

0xc5ce,	// (0x0009aa00) ncimui_list_single_graphic_pane

0x862f,	// (0x00096a61) ncimui_query_pane_ParamLimits

0x862f,	// (0x00096a61) ncimui_query_pane

0x0e1b,	// (0x0008f24d) list_highlight_pane_cp013

0xc5de,	// (0x0009aa10) ncim_list_query_list_pane_t1_copy1

0xc5b8,	// (0x0009a9ea) ncim_list_single_graphic_pane_g1

0xc5ec,	// (0x0009aa1e) ncim_query_button_pane_cp01

0xc5f8,	// (0x0009aa2a) ncim_query_entry_pane_ParamLimits

0xc5f8,	// (0x0009aa2a) ncim_query_entry_pane

0xc60b,	// (0x0009aa3d) ncimui_query_pane_g1

0xc617,	// (0x0009aa49) ncimui_query_pane_t1_ParamLimits

0xc617,	// (0x0009aa49) ncimui_query_pane_t1

0xa046,	// (0x00098478) input_focus_pane_cp012

0xc630,	// (0x0009aa62) ncim_query_entry_pane_t1

0xa7fb,	// (0x00098c2d) main_im_pane_ParamLimits

0xa046,	// (0x00098478) main_mobtv_pane_ParamLimits

0xa046,	// (0x00098478) main_mobtv_pane

0x7382,	// (0x000957b4) main_cset6_slider_pane_g18_ParamLimits

0x7382,	// (0x000957b4) main_cset6_slider_pane_g18

0x73b2,	// (0x000957e4) main_cset6_slider_pane_g19_ParamLimits

0x73b2,	// (0x000957e4) main_cset6_slider_pane_g19

0xc642,	// (0x0009aa74) bg_main_mobtv_pane_ParamLimits

0xc642,	// (0x0009aa74) bg_main_mobtv_pane

0x8642,	// (0x00096a74) main_mobtv_info_pane

0x864b,	// (0x00096a7d) main_mobtv_loading_pane_ParamLimits

0x864b,	// (0x00096a7d) main_mobtv_loading_pane

0xc650,	// (0x0009aa82) main_mobtv_pg_channel_list_pane

0xc65a,	// (0x0009aa8c) main_mobtv_pg_hdr_pane

0x8658,	// (0x00096a8a) main_mobtv_programe_curr_pane_ParamLimits

0x8658,	// (0x00096a8a) main_mobtv_programe_curr_pane

0x8665,	// (0x00096a97) main_mobtv_programe_next_pane_ParamLimits

0x8665,	// (0x00096a97) main_mobtv_programe_next_pane

0xc663,	// (0x0009aa95) popup_mobtv_noti_window

0xac6e,	// (0x000990a0) main_tv_pg_hdr_pane_g1

0xc66b,	// (0x0009aa9d) main_tv_pg_hdr_pane_g2

0xc673,	// (0x0009aaa5) main_tv_pg_hdr_pane_g3

0xc67b,	// (0x0009aaad) main_tv_pg_hdr_pane_g4

0xc683,	// (0x0009aab5) main_tv_pg_hdr_pane_g5

0xc68d,	// (0x0009aabf) main_tv_pg_hdr_pane_g6

0xc697,	// (0x0009aac9) main_tv_pg_hdr_pane_g7

0xc6a1,	// (0x0009aad3) main_tv_pg_hdr_pane_g8

0xc6ab,	// (0x0009aadd) main_tv_pg_hdr_pane_g9

0xc6b5,	// (0x0009aae7) main_tv_pg_hdr_pane_g10

0xc6bf,	// (0x0009aaf1) main_tv_pg_hdr_pane_g11

0x000a,

0xfb55,	// (0x0009df87) main_tv_pg_hdr_pane_g

0xc6c9,	// (0x0009aafb) main_tv_pg_hdr_pane_t1

0xc6d7,	// (0x0009ab09) main_tv_pg_hdr_pane_t2

0xc6e5,	// (0x0009ab17) main_tv_pg_hdr_pane_t3

0xc6f5,	// (0x0009ab27) main_tv_pg_hdr_pane_t4

0xc705,	// (0x0009ab37) main_tv_pg_hdr_pane_t5

0x0004,

0xfb6c,	// (0x0009df9e) main_tv_pg_hdr_pane_t

0xc715,	// (0x0009ab47) single_mobtv_pg_channel_pane_ParamLimits

0xc715,	// (0x0009ab47) single_mobtv_pg_channel_pane

0xc727,	// (0x0009ab59) single_mobtv_pg_channel_table_pane

0xc730,	// (0x0009ab62) single_mobtv_pg_channel_thumb_pane

0xc739,	// (0x0009ab6b) single_tv_pg_channel_pane_g1

0xc742,	// (0x0009ab74) single_tv_pg_channel_pane_g2

0x0001,

0xfb77,	// (0x0009dfa9) single_tv_pg_channel_pane_g

0xaed5,	// (0x00099307) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xaed5,	// (0x00099307) bg_single_mobtv_pg_channel_thumb_pane

0xc74b,	// (0x0009ab7d) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xc74b,	// (0x0009ab7d) single_mobtv_pg_channel_thumb_pane_g1

0xc759,	// (0x0009ab8b) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xc759,	// (0x0009ab8b) single_mobtv_pg_channel_thumb_pane_g2

0xc765,	// (0x0009ab97) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xc765,	// (0x0009ab97) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfb7c,	// (0x0009dfae) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfb7c,	// (0x0009dfae) single_mobtv_pg_channel_thumb_pane_g

0xc771,	// (0x0009aba3) single_mobtv_pg_channel_thumb_pane_t1

0xc77f,	// (0x0009abb1) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfb83,	// (0x0009dfb5) single_mobtv_pg_channel_thumb_pane_t

0xac6e,	// (0x000990a0) bg_single_mobtv_pg_channel_table_pane_g1

0xac6e,	// (0x000990a0) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf63a,	// (0x0009da6c) bg_single_mobtv_pg_channel_table_pane_g

0xc78d,	// (0x0009abbf) single_mobtv_pg_channel_table_pane_t1

0xc79b,	// (0x0009abcd) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfb88,	// (0x0009dfba) single_mobtv_pg_channel_table_pane_t

0x867a,	// (0x00096aac) main_mobtv_info_pane_g1_ParamLimits

0x867a,	// (0x00096aac) main_mobtv_info_pane_g1

0x8698,	// (0x00096aca) main_mobtv_info_pane_t1_ParamLimits

0x8698,	// (0x00096aca) main_mobtv_info_pane_t1

0x8710,	// (0x00096b42) main_mobtv_info_pane_t2_ParamLimits

0x8710,	// (0x00096b42) main_mobtv_info_pane_t2

0x0002,

0xfb92,	// (0x0009dfc4) main_mobtv_info_pane_t_ParamLimits

0xfb92,	// (0x0009dfc4) main_mobtv_info_pane_t

0x879f,	// (0x00096bd1) wait_bar_pane_cp05

0x87b1,	// (0x00096be3) main_mobtv_loading_pane_g1_ParamLimits

0x87b1,	// (0x00096be3) main_mobtv_loading_pane_g1

0x87c4,	// (0x00096bf6) main_mobtv_loading_pane_g2_ParamLimits

0x87c4,	// (0x00096bf6) main_mobtv_loading_pane_g2

0x87d0,	// (0x00096c02) main_mobtv_loading_pane_g3_ParamLimits

0x87d0,	// (0x00096c02) main_mobtv_loading_pane_g3

0x0002,

0xfb99,	// (0x0009dfcb) main_mobtv_loading_pane_g_ParamLimits

0xfb99,	// (0x0009dfcb) main_mobtv_loading_pane_g

0xc7a9,	// (0x0009abdb) main_mobtv_loading_pane_t1_ParamLimits

0xc7a9,	// (0x0009abdb) main_mobtv_loading_pane_t1

0xc7c1,	// (0x0009abf3) main_mobtv_loading_pane_t2_ParamLimits

0xc7c1,	// (0x0009abf3) main_mobtv_loading_pane_t2

0x0001,

0xfba0,	// (0x0009dfd2) main_mobtv_loading_pane_t_ParamLimits

0xfba0,	// (0x0009dfd2) main_mobtv_loading_pane_t

0x87e3,	// (0x00096c15) wait_bar_pane_cp06_ParamLimits

0x87e3,	// (0x00096c15) wait_bar_pane_cp06

0xc7e5,	// (0x0009ac17) main_mobtv_programe_curr_pane_t1

0xc7f3,	// (0x0009ac25) main_mobtv_programe_curr_pane_t2

0x0001,

0xfba5,	// (0x0009dfd7) main_mobtv_programe_curr_pane_t

0xc801,	// (0x0009ac33) main_mobtv_programe_next_pane_t1

0xc80f,	// (0x0009ac41) main_mobtv_programe_next_pane_t2

0xc81d,	// (0x0009ac4f) main_mobtv_programe_next_pane_t3

0x0002,

0xfbaa,	// (0x0009dfdc) main_mobtv_programe_next_pane_t

0x0e1b,	// (0x0008f24d) bg_popup_mobtv_noti_window_pane

0xc82b,	// (0x0009ac5d) popup_mobtv_noti_window_g1

0xc833,	// (0x0009ac65) popup_mobtv_noti_window_t1

0xc841,	// (0x0009ac73) popup_mobtv_noti_window_t2

0x0001,

0xfbb1,	// (0x0009dfe3) popup_mobtv_noti_window_t

0xac6e,	// (0x000990a0) bg_popup_mobtv_noti_window_pane_g1

0x0e1b,	// (0x0008f24d) sc_clock_pane

0x0e1b,	// (0x0008f24d) main_fs_bigclock_pane

0x7fa7,	// (0x000963d9) blid2_tripm_pane_t4_ParamLimits

0x7fa7,	// (0x000963d9) blid2_tripm_pane_t4

0x87f2,	// (0x00096c24) sc_clock_pane_g1_ParamLimits

0x87f2,	// (0x00096c24) sc_clock_pane_g1

0x8804,	// (0x00096c36) sc_clock_pane_t1_ParamLimits

0x8804,	// (0x00096c36) sc_clock_pane_t1

0x8826,	// (0x00096c58) sc_clock_pane_t2_ParamLimits

0x8826,	// (0x00096c58) sc_clock_pane_t2

0x883e,	// (0x00096c70) sc_clock_pane_t3_ParamLimits

0x883e,	// (0x00096c70) sc_clock_pane_t3

0x0004,

0xfbb6,	// (0x0009dfe8) sc_clock_pane_t_ParamLimits

0xfbb6,	// (0x0009dfe8) sc_clock_pane_t

0x9777,	// (0x00097ba9) main_fs_bigclock_indicator_pane_ParamLimits

0x9777,	// (0x00097ba9) main_fs_bigclock_indicator_pane

0xaea5,	// (0x000992d7) main_fs_bigclock_pane_g1_ParamLimits

0xaea5,	// (0x000992d7) main_fs_bigclock_pane_g1

0x9783,	// (0x00097bb5) main_fs_bigclock_pane_t1_ParamLimits

0x9783,	// (0x00097bb5) main_fs_bigclock_pane_t1

0x9795,	// (0x00097bc7) main_fs_bigclock_pane_t2_ParamLimits

0x9795,	// (0x00097bc7) main_fs_bigclock_pane_t2

0x97a7,	// (0x00097bd9) main_fs_bigclock_pane_t3_ParamLimits

0x97a7,	// (0x00097bd9) main_fs_bigclock_pane_t3

0x0002,

0xfdb5,	// (0x0009e1e7) main_fs_bigclock_pane_t_ParamLimits

0xfdb5,	// (0x0009e1e7) main_fs_bigclock_pane_t

0xd324,	// (0x0009b756) main_fs_bigclock_indicator_pane_g1

0xc507,	// (0x0009a939) ncim_query_content_pane_g2_ParamLimits

0xc507,	// (0x0009a939) ncim_query_content_pane_g2

0x0001,

0xfb43,	// (0x0009df75) ncim_query_content_pane_g_ParamLimits

0xfb43,	// (0x0009df75) ncim_query_content_pane_g

0x8857,	// (0x00096c89) sc_clock_pane_t4_ParamLimits

0x8857,	// (0x00096c89) sc_clock_pane_t4

0xa046,	// (0x00098478) main_radioblah_pane

0xb856,	// (0x00099c88) cell_call4_button_pane_t1_copy1_ParamLimits

0xb856,	// (0x00099c88) cell_call4_button_pane_t1_copy1

0x84ae,	// (0x000968e0) main_ncimui_pane_t1_ParamLimits

0x84ae,	// (0x000968e0) main_ncimui_pane_t1

0x84c8,	// (0x000968fa) main_ncimui_pane_t2_ParamLimits

0x84c8,	// (0x000968fa) main_ncimui_pane_t2

0x0002,

0xfb3c,	// (0x0009df6e) main_ncimui_pane_t_ParamLimits

0xfb3c,	// (0x0009df6e) main_ncimui_pane_t

0xc84f,	// (0x0009ac81) main_radioblah_anim_pane_ParamLimits

0xc84f,	// (0x0009ac81) main_radioblah_anim_pane

0xc860,	// (0x0009ac92) main_radioblah_info_pane_ParamLimits

0xc860,	// (0x0009ac92) main_radioblah_info_pane

0xc874,	// (0x0009aca6) main_radioblah_pane_t1_ParamLimits

0xc874,	// (0x0009aca6) main_radioblah_pane_t1

0xc890,	// (0x0009acc2) main_radioblah_pane_t2_ParamLimits

0xc890,	// (0x0009acc2) main_radioblah_pane_t2

0x0003,

0xfbd7,	// (0x0009e009) main_radioblah_pane_t_ParamLimits

0xfbd7,	// (0x0009e009) main_radioblah_pane_t

0x8a27,	// (0x00096e59) main_radioblah_rocker_ctrl_pane_ParamLimits

0x8a27,	// (0x00096e59) main_radioblah_rocker_ctrl_pane

0xc8d8,	// (0x0009ad0a) main_radioblah_info_pane_t1_ParamLimits

0xc8d8,	// (0x0009ad0a) main_radioblah_info_pane_t1

0x8a7f,	// (0x00096eb1) main_radioblah_info_pane_t2_ParamLimits

0x8a7f,	// (0x00096eb1) main_radioblah_info_pane_t2

0x0003,

0xfbe0,	// (0x0009e012) main_radioblah_info_pane_t_ParamLimits

0xfbe0,	// (0x0009e012) main_radioblah_info_pane_t

0xac6e,	// (0x000990a0) main_radioblah_rocker_ctrl_pane_g1

0x8b31,	// (0x00096f63) main_radioblah_rocker_ctrl_pane_g2

0x8b39,	// (0x00096f6b) main_radioblah_rocker_ctrl_pane_g3

0x8b41,	// (0x00096f73) main_radioblah_rocker_ctrl_pane_g4

0x8b49,	// (0x00096f7b) main_radioblah_rocker_ctrl_pane_g5

0x8b51,	// (0x00096f83) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfbe9,	// (0x0009e01b) main_radioblah_rocker_ctrl_pane_g

0x8271,	// (0x000966a3) main_cset_text2_pane_t1_copy1_ParamLimits

0xd77e,	// (0x0009bbb0) cam4_image_uncrop_qvga_pane

0xd7e5,	// (0x0009bc17) vid4_image_uncrop_qcif_pane

0xd908,	// (0x0009bd3a) cam6_image_uncrop_qvga_pane_ParamLimits

0xd908,	// (0x0009bd3a) cam6_image_uncrop_qvga_pane

0xc14a,	// (0x0009a57c) vid6_image_uncrop_qcif_pane_ParamLimits

0xc14a,	// (0x0009a57c) vid6_image_uncrop_qcif_pane

0x0e1b,	// (0x0008f24d) bg_popup_preview_window_pane_cp03

0xc4b9,	// (0x0009a8eb) list_cset_text2_pane

0xc4c1,	// (0x0009a8f3) main_cset6_text2_pane_g1

0xc4c9,	// (0x0009a8fb) main_cset6_text2_pane_t1

0x8b59,	// (0x00096f8b) list_cset_text2_pane_t1_ParamLimits

0x8b59,	// (0x00096f8b) list_cset_text2_pane_t1

0xa046,	// (0x00098478) main_radioblah_pane_ParamLimits

0x878b,	// (0x00096bbd) main_mobtv_info_pane_t3_ParamLimits

0x878b,	// (0x00096bbd) main_mobtv_info_pane_t3

0x8a15,	// (0x00096e47) main_radioblah_pane_g1

0x8a4f,	// (0x00096e81) main_radioblah_info_pane_g1

0x8ad6,	// (0x00096f08) main_radioblah_info_pane_t3_ParamLimits

0x8ad6,	// (0x00096f08) main_radioblah_info_pane_t3

0x296a,	// (0x00090d9c) highlight_cell_cale_month_pane_ParamLimits

0x296a,	// (0x00090d9c) highlight_cell_cale_month_pane

0x0e1b,	// (0x0008f24d) main_phob_fisheye_pane

0xafef,	// (0x00099421) scroll_pane_cp0031_ParamLimits

0xafef,	// (0x00099421) scroll_pane_cp0031

0xc258,	// (0x0009a68a) wait_bar_pane_cp08_ParamLimits

0x82f5,	// (0x00096727) cset_list_set_pane_copy1_ParamLimits

0xc912,	// (0x0009ad44) highlight_cell_cale_month_pane_g1

0x8b76,	// (0x00096fa8) highlight_cell_cale_month_pane_t1

0xbe93,	// (0x0009a2c5) list_gen_pane_cp01

0xba4e,	// (0x00099e80) scroll_pane_01

0xbed0,	// (0x0009a302) list_single_double_fisheye_pane

0x8b84,	// (0x00096fb6) list_double_fisheye_pane_g1_ParamLimits

0x8b84,	// (0x00096fb6) list_double_fisheye_pane_g1

0x8b90,	// (0x00096fc2) list_double_fisheye_pane_g2_ParamLimits

0x8b90,	// (0x00096fc2) list_double_fisheye_pane_g2

0x8ba4,	// (0x00096fd6) list_double_fisheye_pane_g3_ParamLimits

0x8ba4,	// (0x00096fd6) list_double_fisheye_pane_g3

0x0004,

0xfbf6,	// (0x0009e028) list_double_fisheye_pane_g_ParamLimits

0xfbf6,	// (0x0009e028) list_double_fisheye_pane_g

0x8bcd,	// (0x00096fff) list_double_fisheye_pane_t1_ParamLimits

0x8bcd,	// (0x00096fff) list_double_fisheye_pane_t1

0x8be8,	// (0x0009701a) list_double_fisheye_pane_t2_ParamLimits

0x8be8,	// (0x0009701a) list_double_fisheye_pane_t2

0x0001,

0xfc01,	// (0x0009e033) list_double_fisheye_pane_t_ParamLimits

0xfc01,	// (0x0009e033) list_double_fisheye_pane_t

0x0e1b,	// (0x0008f24d) main_call5_pane

0x8882,	// (0x00096cb4) sc_swipe_pane_ParamLimits

0x8882,	// (0x00096cb4) sc_swipe_pane

0x8c1d,	// (0x0009704f) call5_image_pane_ParamLimits

0x8c1d,	// (0x0009704f) call5_image_pane

0x8c3a,	// (0x0009706c) call5_swipe_1_pane_ParamLimits

0x8c3a,	// (0x0009706c) call5_swipe_1_pane

0x8c4d,	// (0x0009707f) call5_swipe_2_pane_ParamLimits

0x8c4d,	// (0x0009707f) call5_swipe_2_pane

0x8c78,	// (0x000970aa) popup_call5_audio_first_window_ParamLimits

0x8c78,	// (0x000970aa) popup_call5_audio_first_window

0xaed5,	// (0x00099307) call5_swipe_1_pane_g1_ParamLimits

0xaed5,	// (0x00099307) call5_swipe_1_pane_g1

0xc91a,	// (0x0009ad4c) call5_swipe_1_pane_g2_ParamLimits

0xc91a,	// (0x0009ad4c) call5_swipe_1_pane_g2

0x0001,

0xfc06,	// (0x0009e038) call5_swipe_1_pane_g_ParamLimits

0xfc06,	// (0x0009e038) call5_swipe_1_pane_g

0xc926,	// (0x0009ad58) call5_swipe_1_pane_t1_ParamLimits

0xc926,	// (0x0009ad58) call5_swipe_1_pane_t1

0xaed5,	// (0x00099307) call5_swipe_2_pane_g1_ParamLimits

0xaed5,	// (0x00099307) call5_swipe_2_pane_g1

0xc93b,	// (0x0009ad6d) call5_swipe_2_pane_g2_ParamLimits

0xc93b,	// (0x0009ad6d) call5_swipe_2_pane_g2

0x0001,

0xfc0b,	// (0x0009e03d) call5_swipe_2_pane_g_ParamLimits

0xfc0b,	// (0x0009e03d) call5_swipe_2_pane_g

0xc947,	// (0x0009ad79) call5_swipe_2_pane_t1_ParamLimits

0xc947,	// (0x0009ad79) call5_swipe_2_pane_t1

0xc95c,	// (0x0009ad8e) sc_swipe_pane_g1_ParamLimits

0xc95c,	// (0x0009ad8e) sc_swipe_pane_g1

0xc969,	// (0x0009ad9b) sc_swipe_pane_g2_ParamLimits

0xc969,	// (0x0009ad9b) sc_swipe_pane_g2

0x0001,

0xfc10,	// (0x0009e042) sc_swipe_pane_g_ParamLimits

0xfc10,	// (0x0009e042) sc_swipe_pane_g

0xc975,	// (0x0009ada7) sc_swipe_pane_t1_ParamLimits

0xc975,	// (0x0009ada7) sc_swipe_pane_t1

0x0e1b,	// (0x0008f24d) main_cmail_launcher_pane

0x8c89,	// (0x000970bb) aid_size_cell_cmail_l_ParamLimits

0x8c89,	// (0x000970bb) aid_size_cell_cmail_l

0x8ca3,	// (0x000970d5) grid_cmail_l_pane_ParamLimits

0x8ca3,	// (0x000970d5) grid_cmail_l_pane

0x8cbe,	// (0x000970f0) cell_cmail_l_pane_ParamLimits

0x8cbe,	// (0x000970f0) cell_cmail_l_pane

0x8ce4,	// (0x00097116) cell_cmail_l_pane_g1_ParamLimits

0x8ce4,	// (0x00097116) cell_cmail_l_pane_g1

0x8cf0,	// (0x00097122) cell_cmail_l_pane_t1_ParamLimits

0x8cf0,	// (0x00097122) cell_cmail_l_pane_t1

0xc98a,	// (0x0009adbc) cell_cmail_l_pane_t2_ParamLimits

0xc98a,	// (0x0009adbc) cell_cmail_l_pane_t2

0x0001,

0xfc15,	// (0x0009e047) cell_cmail_l_pane_t_ParamLimits

0xfc15,	// (0x0009e047) cell_cmail_l_pane_t

0xa046,	// (0x00098478) grid_highlight_pane_cp018_ParamLimits

0xa046,	// (0x00098478) grid_highlight_pane_cp018

0x0f3b,	// (0x0008f36d) main2_pane_ParamLimits

0x0f3b,	// (0x0008f36d) main2_pane

0xd96c,	// (0x0009bd9e) popup_sp_fs_action_menu_bg_pane_g1

0xd974,	// (0x0009bda6) popup_sp_fs_action_menu_bg_pane_g2

0xd97c,	// (0x0009bdae) popup_sp_fs_action_menu_bg_pane_g3

0xd984,	// (0x0009bdb6) popup_sp_fs_action_menu_bg_pane_g4

0xd98c,	// (0x0009bdbe) popup_sp_fs_action_menu_bg_pane_g5

0xd994,	// (0x0009bdc6) popup_sp_fs_action_menu_bg_pane_g6

0xd99c,	// (0x0009bdce) popup_sp_fs_action_menu_bg_pane_g7

0xd9a4,	// (0x0009bdd6) popup_sp_fs_action_menu_bg_pane_g8

0xd9ac,	// (0x0009bdde) popup_sp_fs_action_menu_bg_pane_g9

0xd9b4,	// (0x0009bde6) popup_sp_fs_action_menu_bg_pane_g10

0xd9b4,	// (0x0009bde6) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf1ac,	// (0x0009d5de) popup_sp_fs_action_menu_bg_pane_g

0x1bc4,	// (0x0008fff6) list_medium_line_x2_t3_g3_g1_ParamLimits

0x1bc4,	// (0x0008fff6) list_medium_line_x2_t3_g3_g1

0x1bd0,	// (0x00090002) list_medium_line_x2_t3_g3_g2_ParamLimits

0x1bd0,	// (0x00090002) list_medium_line_x2_t3_g3_g2

0x1bdc,	// (0x0009000e) list_medium_line_x2_t3_g3_g3_ParamLimits

0x1bdc,	// (0x0009000e) list_medium_line_x2_t3_g3_g3

0x0002,

0xf253,	// (0x0009d685) list_medium_line_x2_t3_g3_g_ParamLimits

0xf253,	// (0x0009d685) list_medium_line_x2_t3_g3_g

0x1be8,	// (0x0009001a) list_medium_line_x2_t3_g3_t1_ParamLimits

0x1be8,	// (0x0009001a) list_medium_line_x2_t3_g3_t1

0x1bfd,	// (0x0009002f) list_medium_line_x2_t3_g3_t2_ParamLimits

0x1bfd,	// (0x0009002f) list_medium_line_x2_t3_g3_t2

0x1c11,	// (0x00090043) list_medium_line_x2_t3_g3_t3_ParamLimits

0x1c11,	// (0x00090043) list_medium_line_x2_t3_g3_t3

0x0002,

0xf25a,	// (0x0009d68c) list_medium_line_x2_t3_g3_t_ParamLimits

0xf25a,	// (0x0009d68c) list_medium_line_x2_t3_g3_t

0x1bc4,	// (0x0008fff6) list_medium_line_x2_t3_g2_g1_ParamLimits

0x1bc4,	// (0x0008fff6) list_medium_line_x2_t3_g2_g1

0x1bdc,	// (0x0009000e) list_medium_line_x2_t3_g2_g2_ParamLimits

0x1bdc,	// (0x0009000e) list_medium_line_x2_t3_g2_g2

0x0001,

0xf261,	// (0x0009d693) list_medium_line_x2_t3_g2_g_ParamLimits

0xf261,	// (0x0009d693) list_medium_line_x2_t3_g2_g

0x1c26,	// (0x00090058) list_medium_line_x2_t3_g2_t1_ParamLimits

0x1c26,	// (0x00090058) list_medium_line_x2_t3_g2_t1

0x1c3c,	// (0x0009006e) list_medium_line_x2_t3_g2_t2_ParamLimits

0x1c3c,	// (0x0009006e) list_medium_line_x2_t3_g2_t2

0x1c4e,	// (0x00090080) list_medium_line_x2_t3_g2_t3_ParamLimits

0x1c4e,	// (0x00090080) list_medium_line_x2_t3_g2_t3

0x0002,

0xf266,	// (0x0009d698) list_medium_line_x2_t3_g2_t_ParamLimits

0xf266,	// (0x0009d698) list_medium_line_x2_t3_g2_t

0x1bc4,	// (0x0008fff6) list_medium_line_x2_t4_g4_g1_ParamLimits

0x1bc4,	// (0x0008fff6) list_medium_line_x2_t4_g4_g1

0x1c6c,	// (0x0009009e) list_medium_line_x2_t4_g4_g2_ParamLimits

0x1c6c,	// (0x0009009e) list_medium_line_x2_t4_g4_g2

0x1bd0,	// (0x00090002) list_medium_line_x2_t4_g4_g3_ParamLimits

0x1bd0,	// (0x00090002) list_medium_line_x2_t4_g4_g3

0x1c78,	// (0x000900aa) list_medium_line_x2_t4_g4_g4_ParamLimits

0x1c78,	// (0x000900aa) list_medium_line_x2_t4_g4_g4

0x0003,

0xf26d,	// (0x0009d69f) list_medium_line_x2_t4_g4_g_ParamLimits

0xf26d,	// (0x0009d69f) list_medium_line_x2_t4_g4_g

0x1c84,	// (0x000900b6) list_medium_line_x2_t4_g4_t1_ParamLimits

0x1c84,	// (0x000900b6) list_medium_line_x2_t4_g4_t1

0x1c9b,	// (0x000900cd) list_medium_line_x2_t4_g4_t2_ParamLimits

0x1c9b,	// (0x000900cd) list_medium_line_x2_t4_g4_t2

0x1cb0,	// (0x000900e2) list_medium_line_x2_t4_g4_t3_ParamLimits

0x1cb0,	// (0x000900e2) list_medium_line_x2_t4_g4_t3

0x1cc2,	// (0x000900f4) list_medium_line_x2_t4_g4_t4_ParamLimits

0x1cc2,	// (0x000900f4) list_medium_line_x2_t4_g4_t4

0x0003,

0xf276,	// (0x0009d6a8) list_medium_line_x2_t4_g4_t_ParamLimits

0xf276,	// (0x0009d6a8) list_medium_line_x2_t4_g4_t

0x1bc4,	// (0x0008fff6) list_medium_line_x2_t2_g4_g1_ParamLimits

0x1bc4,	// (0x0008fff6) list_medium_line_x2_t2_g4_g1

0x1c6c,	// (0x0009009e) list_medium_line_x2_t2_g4_g2_ParamLimits

0x1c6c,	// (0x0009009e) list_medium_line_x2_t2_g4_g2

0x1bd0,	// (0x00090002) list_medium_line_x2_t2_g4_g3_ParamLimits

0x1bd0,	// (0x00090002) list_medium_line_x2_t2_g4_g3

0x1bdc,	// (0x0009000e) list_medium_line_x2_t2_g4_g4_ParamLimits

0x1bdc,	// (0x0009000e) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2c5,	// (0x0009d6f7) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2c5,	// (0x0009d6f7) list_medium_line_x2_t2_g4_g

0x2988,	// (0x00090dba) list_medium_line_x2_t2_g4_t1_ParamLimits

0x2988,	// (0x00090dba) list_medium_line_x2_t2_g4_t1

0x1c11,	// (0x00090043) list_medium_line_x2_t2_g4_t2_ParamLimits

0x1c11,	// (0x00090043) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2ce,	// (0x0009d700) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2ce,	// (0x0009d700) list_medium_line_x2_t2_g4_t

0x1bc4,	// (0x0008fff6) list_medium_line_x2_t2_g3_g1_ParamLimits

0x1bc4,	// (0x0008fff6) list_medium_line_x2_t2_g3_g1

0x1bd0,	// (0x00090002) list_medium_line_x2_t2_g3_g2_ParamLimits

0x1bd0,	// (0x00090002) list_medium_line_x2_t2_g3_g2

0x1bdc,	// (0x0009000e) list_medium_line_x2_t2_g3_g3_ParamLimits

0x1bdc,	// (0x0009000e) list_medium_line_x2_t2_g3_g3

0x0002,

0xf253,	// (0x0009d685) list_medium_line_x2_t2_g3_g_ParamLimits

0xf253,	// (0x0009d685) list_medium_line_x2_t2_g3_g

0x299d,	// (0x00090dcf) list_medium_line_x2_t2_g3_t1_ParamLimits

0x299d,	// (0x00090dcf) list_medium_line_x2_t2_g3_t1

0x1c11,	// (0x00090043) list_medium_line_x2_t2_g3_t2_ParamLimits

0x1c11,	// (0x00090043) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2d3,	// (0x0009d705) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2d3,	// (0x0009d705) list_medium_line_x2_t2_g3_t

0x2b7a,	// (0x00090fac) main_sp_fs_list_pane_ParamLimits

0x2b7a,	// (0x00090fac) main_sp_fs_list_pane

0x2b86,	// (0x00090fb8) sp_fs_scroll_pane_ParamLimits

0x2b86,	// (0x00090fb8) sp_fs_scroll_pane

0x2b92,	// (0x00090fc4) list_medium_line_x2_t3_t1

0x2ba2,	// (0x00090fd4) list_medium_line_x2_t3_t2

0x2bb0,	// (0x00090fe2) list_medium_line_x2_t3_t3

0x0002,

0xf2f3,	// (0x0009d725) list_medium_line_x2_t3_t

0x2bbe,	// (0x00090ff0) list_medium_line_x3_t4_t1

0x2bce,	// (0x00091000) list_medium_line_x3_t4_t2

0x2bdc,	// (0x0009100e) list_medium_line_x3_t4_t3

0x2bb0,	// (0x00090fe2) list_medium_line_x3_t4_t4

0x0003,

0xf2fa,	// (0x0009d72c) list_medium_line_x3_t4_t

0x2bea,	// (0x0009101c) list_medium_line_x4_t5_t1

0x2bfa,	// (0x0009102c) list_medium_line_x4_t5_t2

0x2bdc,	// (0x0009100e) list_medium_line_x4_t5_t3

0x2c08,	// (0x0009103a) list_medium_line_x4_t5_t4

0x2bb0,	// (0x00090fe2) list_medium_line_x4_t5_t5

0x0004,

0xf303,	// (0x0009d735) list_medium_line_x4_t5_t

0x1bc4,	// (0x0008fff6) list_medium_line_t4_g4_g1_ParamLimits

0x1bc4,	// (0x0008fff6) list_medium_line_t4_g4_g1

0x1c78,	// (0x000900aa) list_medium_line_t4_g4_g2_ParamLimits

0x1c78,	// (0x000900aa) list_medium_line_t4_g4_g2

0x2c16,	// (0x00091048) list_medium_line_t4_g4_g3_ParamLimits

0x2c16,	// (0x00091048) list_medium_line_t4_g4_g3

0x1bdc,	// (0x0009000e) list_medium_line_t4_g4_g4_ParamLimits

0x1bdc,	// (0x0009000e) list_medium_line_t4_g4_g4

0x0003,

0xf30e,	// (0x0009d740) list_medium_line_t4_g4_g_ParamLimits

0xf30e,	// (0x0009d740) list_medium_line_t4_g4_g

0x2c22,	// (0x00091054) list_medium_line_t4_g4_t1_ParamLimits

0x2c22,	// (0x00091054) list_medium_line_t4_g4_t1

0x2c37,	// (0x00091069) list_medium_line_t4_g4_t2_ParamLimits

0x2c37,	// (0x00091069) list_medium_line_t4_g4_t2

0x2c4d,	// (0x0009107f) list_medium_line_t4_g4_t3_ParamLimits

0x2c4d,	// (0x0009107f) list_medium_line_t4_g4_t3

0x1c11,	// (0x00090043) list_medium_line_t4_g4_t4_ParamLimits

0x1c11,	// (0x00090043) list_medium_line_t4_g4_t4

0x0003,

0xf317,	// (0x0009d749) list_medium_line_t4_g4_t_ParamLimits

0xf317,	// (0x0009d749) list_medium_line_t4_g4_t

0x2d01,	// (0x00091133) chi_dic_find_pane_g1

0x4513,	// (0x00092945) main_tport_pane

0xbb58,	// (0x00099f8a) list_medium_line_plain_t1

0xbb6e,	// (0x00099fa0) list_medium_line_t2_g2_g1_ParamLimits

0xbb6e,	// (0x00099fa0) list_medium_line_t2_g2_g1

0xbb7a,	// (0x00099fac) list_medium_line_t2_g2_g2_ParamLimits

0xbb7a,	// (0x00099fac) list_medium_line_t2_g2_g2

0x0001,

0xf952,	// (0x0009dd84) list_medium_line_t2_g2_g_ParamLimits

0xf952,	// (0x0009dd84) list_medium_line_t2_g2_g

0x7760,	// (0x00095b92) list_medium_line_t2_g2_t1_ParamLimits

0x7760,	// (0x00095b92) list_medium_line_t2_g2_t1

0x777a,	// (0x00095bac) list_medium_line_t2_g2_t2_ParamLimits

0x777a,	// (0x00095bac) list_medium_line_t2_g2_t2

0x0001,

0xf957,	// (0x0009dd89) list_medium_line_t2_g2_t_ParamLimits

0xf957,	// (0x0009dd89) list_medium_line_t2_g2_t

0xbe9c,	// (0x0009a2ce) aid_sp_fs_list_icon_a_sm

0xbea4,	// (0x0009a2d6) aid_sp_fs_list_icon_d

0xbeac,	// (0x0009a2de) aid_sp_fs_text_primary

0xbeb5,	// (0x0009a2e7) aid_sp_fs_text_secondary

0xbebe,	// (0x0009a2f0) list_medium_line

0xbebe,	// (0x0009a2f0) list_medium_line_g2

0xbebe,	// (0x0009a2f0) list_medium_line_g3

0xbebe,	// (0x0009a2f0) list_medium_line_plain

0xbebe,	// (0x0009a2f0) list_medium_line_plain_t2

0xbebe,	// (0x0009a2f0) list_medium_line_plain_t3

0xbebe,	// (0x0009a2f0) list_medium_line_right_icon

0xbebe,	// (0x0009a2f0) list_medium_line_right_iconx2

0xbebe,	// (0x0009a2f0) list_medium_line_t2

0xbebe,	// (0x0009a2f0) list_medium_line_t2_g2

0xbebe,	// (0x0009a2f0) list_medium_line_t2_g3

0xbebe,	// (0x0009a2f0) list_medium_line_t2_right_icon

0xbebe,	// (0x0009a2f0) list_medium_line_t2_right_iconx2

0xbebe,	// (0x0009a2f0) list_medium_line_t3

0xbebe,	// (0x0009a2f0) list_medium_line_t3_g2

0xbebe,	// (0x0009a2f0) list_medium_line_t3_g3

0xbebe,	// (0x0009a2f0) list_medium_line_t3_right_iconx2

0xbec7,	// (0x0009a2f9) list_medium_line_t4_g4

0xbed0,	// (0x0009a302) list_medium_line_x2

0xbed0,	// (0x0009a302) list_medium_line_x2_t2_g2

0xbed0,	// (0x0009a302) list_medium_line_x2_t2_g3

0xbed0,	// (0x0009a302) list_medium_line_x2_t2_g4

0xbed0,	// (0x0009a302) list_medium_line_x2_t3

0xbed0,	// (0x0009a302) list_medium_line_x2_t3_g2

0xbed0,	// (0x0009a302) list_medium_line_x2_t3_g3

0xbed0,	// (0x0009a302) list_medium_line_x2_t3_g4

0xbed0,	// (0x0009a302) list_medium_line_x2_t4_g2

0xbed0,	// (0x0009a302) list_medium_line_x2_t4_g4

0xbed9,	// (0x0009a30b) list_medium_line_x3

0xbed9,	// (0x0009a30b) list_medium_line_x3_t4

0xbed9,	// (0x0009a30b) list_medium_line_x3_t4_g4

0xbec7,	// (0x0009a2f9) list_medium_line_x4_t4

0xbec7,	// (0x0009a2f9) list_medium_line_x4_t4_g7

0xbec7,	// (0x0009a2f9) list_medium_line_x4_t5

0xbee2,	// (0x0009a314) list_single_fs_dyc_pane_ParamLimits

0xbee2,	// (0x0009a314) list_single_fs_dyc_pane

0x1bc4,	// (0x0008fff6) list_medium_line_x4_t4_g7_g1_ParamLimits

0x1bc4,	// (0x0008fff6) list_medium_line_x4_t4_g7_g1

0xc3e8,	// (0x0009a81a) list_medium_line_x4_t4_g7_g2_ParamLimits

0xc3e8,	// (0x0009a81a) list_medium_line_x4_t4_g7_g2

0xc3f4,	// (0x0009a826) list_medium_line_x4_t4_g7_g3_ParamLimits

0xc3f4,	// (0x0009a826) list_medium_line_x4_t4_g7_g3

0xc403,	// (0x0009a835) list_medium_line_x4_t4_g7_g4_ParamLimits

0xc403,	// (0x0009a835) list_medium_line_x4_t4_g7_g4

0xc40f,	// (0x0009a841) list_medium_line_x4_t4_g7_g5_ParamLimits

0xc40f,	// (0x0009a841) list_medium_line_x4_t4_g7_g5

0xc41e,	// (0x0009a850) list_medium_line_x4_t4_g7_g6_ParamLimits

0xc41e,	// (0x0009a850) list_medium_line_x4_t4_g7_g6

0xc42d,	// (0x0009a85f) list_medium_line_x4_t4_g7_g7_ParamLimits

0xc42d,	// (0x0009a85f) list_medium_line_x4_t4_g7_g7

0x0006,

0xfb22,	// (0x0009df54) list_medium_line_x4_t4_g7_g_ParamLimits

0xfb22,	// (0x0009df54) list_medium_line_x4_t4_g7_g

0xc439,	// (0x0009a86b) list_medium_line_x4_t4_g7_t1_ParamLimits

0xc439,	// (0x0009a86b) list_medium_line_x4_t4_g7_t1

0xc44e,	// (0x0009a880) list_medium_line_x4_t4_g7_t2_ParamLimits

0xc44e,	// (0x0009a880) list_medium_line_x4_t4_g7_t2

0xc463,	// (0x0009a895) list_medium_line_x4_t4_g7_t3_ParamLimits

0xc463,	// (0x0009a895) list_medium_line_x4_t4_g7_t3

0xc478,	// (0x0009a8aa) list_medium_line_x4_t4_g7_t4_ParamLimits

0xc478,	// (0x0009a8aa) list_medium_line_x4_t4_g7_t4

0xc48a,	// (0x0009a8bc) list_medium_line_x4_t4_g7_t5_ParamLimits

0xc48a,	// (0x0009a8bc) list_medium_line_x4_t4_g7_t5

0x0004,

0xfb31,	// (0x0009df63) list_medium_line_x4_t4_g7_t_ParamLimits

0xfb31,	// (0x0009df63) list_medium_line_x4_t4_g7_t

0xc49c,	// (0x0009a8ce) list_single_dyc_row_pane_ParamLimits

0xc49c,	// (0x0009a8ce) list_single_dyc_row_pane

0x8c0a,	// (0x0009703c) call5_gesture_pane_ParamLimits

0x8c0a,	// (0x0009703c) call5_gesture_pane

0x8c60,	// (0x00097092) call5_windows_pane_ParamLimits

0x8c60,	// (0x00097092) call5_windows_pane

0x8d06,	// (0x00097138) call5_swipe_1_pane_cp_ParamLimits

0x8d06,	// (0x00097138) call5_swipe_1_pane_cp

0x8d12,	// (0x00097144) call5_swipe_2_pane_cp_ParamLimits

0x8d12,	// (0x00097144) call5_swipe_2_pane_cp

0xe349,	// (0x0009c77b) call5_image_pane_cp

0x8d1e,	// (0x00097150) popup_call5_audio_first_window_cp_ParamLimits

0x8d1e,	// (0x00097150) popup_call5_audio_first_window_cp

0xc95c,	// (0x0009ad8e) call5_swipe_1_pane_g1_cp_ParamLimits

0xc95c,	// (0x0009ad8e) call5_swipe_1_pane_g1_cp

0xc99c,	// (0x0009adce) call5_swipe_1_pane_g2_cp

0xc975,	// (0x0009ada7) call5_swipe_1_pane_t1_cp_ParamLimits

0xc975,	// (0x0009ada7) call5_swipe_1_pane_t1_cp

0xc95c,	// (0x0009ad8e) call5_swipe_2_pane_g1_cp_ParamLimits

0xc95c,	// (0x0009ad8e) call5_swipe_2_pane_g1_cp

0xc9a4,	// (0x0009add6) call5_swipe_2_pane_g2_cp

0xc9ac,	// (0x0009adde) call5_swipe_2_pane_t1_cp_ParamLimits

0xc9ac,	// (0x0009adde) call5_swipe_2_pane_t1_cp

0xa046,	// (0x00098478) main_sp_fs_email_pane

0xc9c1,	// (0x0009adf3) main_sp_fs_listscroll_pane_te

0xc9ca,	// (0x0009adfc) popup_sp_fs_action_menu_pane_ParamLimits

0xc9ca,	// (0x0009adfc) popup_sp_fs_action_menu_pane

0xac6e,	// (0x000990a0) bg_sp_fs_ctrlbar_pane_g1

0xca0c,	// (0x0009ae3e) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xca15,	// (0x0009ae47) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xca1e,	// (0x0009ae50) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xac6e,	// (0x000990a0) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfc1a,	// (0x0009e04c) bg_sp_fs_ctrlbar_ddmenu_pane_g

0x538d,	// (0x000937bf) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0x538d,	// (0x000937bf) bg_sp_fs_ctrlbar_ddmenu_pane

0xca27,	// (0x0009ae59) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xca27,	// (0x0009ae59) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xca33,	// (0x0009ae65) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xca33,	// (0x0009ae65) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfc23,	// (0x0009e055) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfc23,	// (0x0009e055) main_sp_fs_ctrlbar_ddmenu_pane_g

0xca3f,	// (0x0009ae71) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xca3f,	// (0x0009ae71) main_sp_fs_ctrlbar_ddmenu_pane_t1

0xca59,	// (0x0009ae8b) list_medium_line_t2_right_icon_g1

0x8d2a,	// (0x0009715c) list_medium_line_t2_right_icon_t1

0x8d3a,	// (0x0009716c) list_medium_line_t2_right_icon_t2

0x0001,

0xfc28,	// (0x0009e05a) list_medium_line_t2_right_icon_t

0x44f1,	// (0x00092923) bg_sp_fs_ctrlbar_pane_ParamLimits

0x44f1,	// (0x00092923) bg_sp_fs_ctrlbar_pane

0x8d94,	// (0x000971c6) main_sp_fs_ctrlbar_button_pane_cp01

0x8d9e,	// (0x000971d0) main_sp_fs_ctrlbar_ddmenu_pane

0xca99,	// (0x0009aecb) main_sp_fs_ctrlbar_pane_g1

0xcaa5,	// (0x0009aed7) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfc2d,	// (0x0009e05f) main_sp_fs_ctrlbar_pane_g

0xcab1,	// (0x0009aee3) main_sp_fs_ctrlbar_pane_t1

0x8da8,	// (0x000971da) main_sp_fs_ctrlbar_pane

0x8dcc,	// (0x000971fe) main_sp_fs_listscroll_pane_te_cp01

0x8dec,	// (0x0009721e) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x8dec,	// (0x0009721e) popup_sp_fs_action_menu_pane_cp01

0xa046,	// (0x00098478) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0xa046,	// (0x00098478) bg_sp_fs_highlight_list_pane_cp01

0xcac6,	// (0x0009aef8) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0xcac6,	// (0x0009aef8) sp_fs_action_menu_list_gene_pane_g1

0xcad5,	// (0x0009af07) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xcad5,	// (0x0009af07) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfc32,	// (0x0009e064) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfc32,	// (0x0009e064) sp_fs_action_menu_list_gene_pane_g

0xcae2,	// (0x0009af14) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0xcae2,	// (0x0009af14) sp_fs_action_menu_list_gene_pane_t1

0xcafa,	// (0x0009af2c) sp_fs_action_menu_list_gene_pane_ParamLimits

0xcafa,	// (0x0009af2c) sp_fs_action_menu_list_gene_pane

0xcb19,	// (0x0009af4b) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xcb19,	// (0x0009af4b) popup_sp_fs_action_menu_bg_pane

0xcb27,	// (0x0009af59) sp_fs_action_menu_list_pane_ParamLimits

0xcb27,	// (0x0009af59) sp_fs_action_menu_list_pane

0xcb47,	// (0x0009af79) sp_fs_scroll_pane_cp01_ParamLimits

0xcb47,	// (0x0009af79) sp_fs_scroll_pane_cp01

0x8e06,	// (0x00097238) list_medium_line_plain_t2_t1

0x8e16,	// (0x00097248) list_medium_line_plain_t2_t2

0x0001,

0xfc37,	// (0x0009e069) list_medium_line_plain_t2_t

0x8e26,	// (0x00097258) list_medium_line_plain_t3_t1

0x8e36,	// (0x00097268) list_medium_line_plain_t3_t2

0x8e44,	// (0x00097276) list_medium_line_plain_t3_t3

0x0002,

0xfc3c,	// (0x0009e06e) list_medium_line_plain_t3_t

0x1bc4,	// (0x0008fff6) list_medium_line_x2_t2_g2_g1_ParamLimits

0x1bc4,	// (0x0008fff6) list_medium_line_x2_t2_g2_g1

0x1bdc,	// (0x0009000e) list_medium_line_x2_t2_g2_g2_ParamLimits

0x1bdc,	// (0x0009000e) list_medium_line_x2_t2_g2_g2

0x0001,

0xf261,	// (0x0009d693) list_medium_line_x2_t2_g2_g_ParamLimits

0xf261,	// (0x0009d693) list_medium_line_x2_t2_g2_g

0x2c22,	// (0x00091054) list_medium_line_x2_t2_g2_t1_ParamLimits

0x2c22,	// (0x00091054) list_medium_line_x2_t2_g2_t1

0x1c11,	// (0x00090043) list_medium_line_x2_t2_g2_t2_ParamLimits

0x1c11,	// (0x00090043) list_medium_line_x2_t2_g2_t2

0x0001,

0xfc43,	// (0x0009e075) list_medium_line_x2_t2_g2_t_ParamLimits

0xfc43,	// (0x0009e075) list_medium_line_x2_t2_g2_t

0x1bc4,	// (0x0008fff6) list_medium_line_x2_t4_g2_g1_ParamLimits

0x1bc4,	// (0x0008fff6) list_medium_line_x2_t4_g2_g1

0xcb6d,	// (0x0009af9f) list_medium_line_x2_t4_g2_g2_ParamLimits

0xcb6d,	// (0x0009af9f) list_medium_line_x2_t4_g2_g2

0x0001,

0xfc48,	// (0x0009e07a) list_medium_line_x2_t4_g2_g_ParamLimits

0xfc48,	// (0x0009e07a) list_medium_line_x2_t4_g2_g

0x8e52,	// (0x00097284) list_medium_line_x2_t4_g2_t1_ParamLimits

0x8e52,	// (0x00097284) list_medium_line_x2_t4_g2_t1

0x8e69,	// (0x0009729b) list_medium_line_x2_t4_g2_t2_ParamLimits

0x8e69,	// (0x0009729b) list_medium_line_x2_t4_g2_t2

0x8e7e,	// (0x000972b0) list_medium_line_x2_t4_g2_t3_ParamLimits

0x8e7e,	// (0x000972b0) list_medium_line_x2_t4_g2_t3

0x1c11,	// (0x00090043) list_medium_line_x2_t4_g2_t4_ParamLimits

0x1c11,	// (0x00090043) list_medium_line_x2_t4_g2_t4

0x0003,

0xfc4d,	// (0x0009e07f) list_medium_line_x2_t4_g2_t_ParamLimits

0xfc4d,	// (0x0009e07f) list_medium_line_x2_t4_g2_t

0xcb7f,	// (0x0009afb1) list_medium_line_t3_right_iconx2_g1

0xca59,	// (0x0009ae8b) list_medium_line_t3_right_iconx2_g2

0x8e90,	// (0x000972c2) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfc56,	// (0x0009e088) list_medium_line_t3_right_iconx2_g

0x8e9a,	// (0x000972cc) list_medium_line_t3_right_iconx2_t1

0x8eaa,	// (0x000972dc) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfc5d,	// (0x0009e08f) list_medium_line_t3_right_iconx2_t

0x1bc4,	// (0x0008fff6) list_medium_line_x3_t4_g4_g1_ParamLimits

0x1bc4,	// (0x0008fff6) list_medium_line_x3_t4_g4_g1

0x1bd0,	// (0x00090002) list_medium_line_x3_t4_g4_g2_ParamLimits

0x1bd0,	// (0x00090002) list_medium_line_x3_t4_g4_g2

0x1c78,	// (0x000900aa) list_medium_line_x3_t4_g4_g3_ParamLimits

0x1c78,	// (0x000900aa) list_medium_line_x3_t4_g4_g3

0xcb87,	// (0x0009afb9) list_medium_line_x3_t4_g4_g4_ParamLimits

0xcb87,	// (0x0009afb9) list_medium_line_x3_t4_g4_g4

0x0003,

0xfc62,	// (0x0009e094) list_medium_line_x3_t4_g4_g_ParamLimits

0xfc62,	// (0x0009e094) list_medium_line_x3_t4_g4_g

0x8eb8,	// (0x000972ea) list_medium_line_x3_t4_g4_t1_ParamLimits

0x8eb8,	// (0x000972ea) list_medium_line_x3_t4_g4_t1

0x8ecf,	// (0x00097301) list_medium_line_x3_t4_g4_t2_ParamLimits

0x8ecf,	// (0x00097301) list_medium_line_x3_t4_g4_t2

0xcb93,	// (0x0009afc5) list_medium_line_x3_t4_g4_t3_ParamLimits

0xcb93,	// (0x0009afc5) list_medium_line_x3_t4_g4_t3

0xcba8,	// (0x0009afda) list_medium_line_x3_t4_g4_t4_ParamLimits

0xcba8,	// (0x0009afda) list_medium_line_x3_t4_g4_t4

0x0003,

0xfc6b,	// (0x0009e09d) list_medium_line_x3_t4_g4_t_ParamLimits

0xfc6b,	// (0x0009e09d) list_medium_line_x3_t4_g4_t

0x8eea,	// (0x0009731c) list_single_dyc_row_text_pane_t1_ParamLimits

0x8eea,	// (0x0009731c) list_single_dyc_row_text_pane_t1

0x8f33,	// (0x00097365) list_single_dyc_row_text_pane_t2_ParamLimits

0x8f33,	// (0x00097365) list_single_dyc_row_text_pane_t2

0xcbc5,	// (0x0009aff7) list_single_dyc_row_text_pane_t3_ParamLimits

0xcbc5,	// (0x0009aff7) list_single_dyc_row_text_pane_t3

0x0002,

0xfc74,	// (0x0009e0a6) list_single_dyc_row_text_pane_t_ParamLimits

0xfc74,	// (0x0009e0a6) list_single_dyc_row_text_pane_t

0xcbd7,	// (0x0009b009) list_single_dyc_row_pane_g1_ParamLimits

0xcbd7,	// (0x0009b009) list_single_dyc_row_pane_g1

0xcbe3,	// (0x0009b015) list_single_dyc_row_pane_g2_ParamLimits

0xcbe3,	// (0x0009b015) list_single_dyc_row_pane_g2

0xcbef,	// (0x0009b021) list_single_dyc_row_pane_g3_ParamLimits

0xcbef,	// (0x0009b021) list_single_dyc_row_pane_g3

0xcbfb,	// (0x0009b02d) list_single_dyc_row_pane_g4_ParamLimits

0xcbfb,	// (0x0009b02d) list_single_dyc_row_pane_g4

0x0003,

0xfc7b,	// (0x0009e0ad) list_single_dyc_row_pane_g_ParamLimits

0xfc7b,	// (0x0009e0ad) list_single_dyc_row_pane_g

0xcc07,	// (0x0009b039) list_single_dyc_row_text_pane_ParamLimits

0xcc07,	// (0x0009b039) list_single_dyc_row_text_pane

0x0e1b,	// (0x0008f24d) bg_sp_fs_scroll_pane

0xcc26,	// (0x0009b058) thumb_sp_fs_scroll_pane

0xbb6e,	// (0x00099fa0) list_medium_line_g1_ParamLimits

0xbb6e,	// (0x00099fa0) list_medium_line_g1

0xcc2f,	// (0x0009b061) list_medium_line_t1_ParamLimits

0xcc2f,	// (0x0009b061) list_medium_line_t1

0x1bc4,	// (0x0008fff6) list_medium_line_x2_g1_ParamLimits

0x1bc4,	// (0x0008fff6) list_medium_line_x2_g1

0x1bd0,	// (0x00090002) list_medium_line_x2_g2_ParamLimits

0x1bd0,	// (0x00090002) list_medium_line_x2_g2

0x0001,

0xfc84,	// (0x0009e0b6) list_medium_line_x2_g_ParamLimits

0xfc84,	// (0x0009e0b6) list_medium_line_x2_g

0xcc44,	// (0x0009b076) list_medium_line_x2_t1_ParamLimits

0xcc44,	// (0x0009b076) list_medium_line_x2_t1

0x1bc4,	// (0x0008fff6) list_medium_line_x3_g1_ParamLimits

0x1bc4,	// (0x0008fff6) list_medium_line_x3_g1

0x1bd0,	// (0x00090002) list_medium_line_x3_g2_ParamLimits

0x1bd0,	// (0x00090002) list_medium_line_x3_g2

0x0001,

0xfc84,	// (0x0009e0b6) list_medium_line_x3_g_ParamLimits

0xfc84,	// (0x0009e0b6) list_medium_line_x3_g

0xcc44,	// (0x0009b076) list_medium_line_x3_t1_ParamLimits

0xcc44,	// (0x0009b076) list_medium_line_x3_t1

0xcc5a,	// (0x0009b08c) thumb_sp_fs_scroll_pane_g1

0xcc63,	// (0x0009b095) thumb_sp_fs_scroll_pane_g2

0xcc6c,	// (0x0009b09e) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfc89,	// (0x0009e0bb) thumb_sp_fs_scroll_pane_g

0xcc5a,	// (0x0009b08c) bg_sp_fs_scroll_pane_g1

0xcc63,	// (0x0009b095) bg_sp_fs_scroll_pane_g2

0xcc6c,	// (0x0009b09e) bg_sp_fs_scroll_pane_g3

0x0002,

0xfc89,	// (0x0009e0bb) bg_sp_fs_scroll_pane_g

0x1bc4,	// (0x0008fff6) list_medium_line_x2_t3_g4_g1_ParamLimits

0x1bc4,	// (0x0008fff6) list_medium_line_x2_t3_g4_g1

0x1c6c,	// (0x0009009e) list_medium_line_x2_t3_g4_g2_ParamLimits

0x1c6c,	// (0x0009009e) list_medium_line_x2_t3_g4_g2

0x1bd0,	// (0x00090002) list_medium_line_x2_t3_g4_g3_ParamLimits

0x1bd0,	// (0x00090002) list_medium_line_x2_t3_g4_g3

0x1bdc,	// (0x0009000e) list_medium_line_x2_t3_g4_g4_ParamLimits

0x1bdc,	// (0x0009000e) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2c5,	// (0x0009d6f7) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2c5,	// (0x0009d6f7) list_medium_line_x2_t3_g4_g

0x8f8d,	// (0x000973bf) list_medium_line_x2_t3_g4_t1_ParamLimits

0x8f8d,	// (0x000973bf) list_medium_line_x2_t3_g4_t1

0x8fa7,	// (0x000973d9) list_medium_line_x2_t3_g4_t2_ParamLimits

0x8fa7,	// (0x000973d9) list_medium_line_x2_t3_g4_t2

0x1c11,	// (0x00090043) list_medium_line_x2_t3_g4_t3_ParamLimits

0x1c11,	// (0x00090043) list_medium_line_x2_t3_g4_t3

0x0002,

0xfc90,	// (0x0009e0c2) list_medium_line_x2_t3_g4_t_ParamLimits

0xfc90,	// (0x0009e0c2) list_medium_line_x2_t3_g4_t

0xbb6e,	// (0x00099fa0) list_medium_line_g2_g1_ParamLimits

0xbb6e,	// (0x00099fa0) list_medium_line_g2_g1

0xbb7a,	// (0x00099fac) list_medium_line_g2_g2_ParamLimits

0xbb7a,	// (0x00099fac) list_medium_line_g2_g2

0x0001,

0xf952,	// (0x0009dd84) list_medium_line_g2_g_ParamLimits

0xf952,	// (0x0009dd84) list_medium_line_g2_g

0xcc75,	// (0x0009b0a7) list_medium_line_g2_t1_ParamLimits

0xcc75,	// (0x0009b0a7) list_medium_line_g2_t1

0xbb6e,	// (0x00099fa0) list_medium_line_t3_g2_g1_ParamLimits

0xbb6e,	// (0x00099fa0) list_medium_line_t3_g2_g1

0xbb7a,	// (0x00099fac) list_medium_line_t3_g2_g2_ParamLimits

0xbb7a,	// (0x00099fac) list_medium_line_t3_g2_g2

0x0001,

0xf952,	// (0x0009dd84) list_medium_line_t3_g2_g_ParamLimits

0xf952,	// (0x0009dd84) list_medium_line_t3_g2_g

0x8fc0,	// (0x000973f2) list_medium_line_t3_g2_t1_ParamLimits

0x8fc0,	// (0x000973f2) list_medium_line_t3_g2_t1

0x8fd7,	// (0x00097409) list_medium_line_t3_g2_t2_ParamLimits

0x8fd7,	// (0x00097409) list_medium_line_t3_g2_t2

0x8fec,	// (0x0009741e) list_medium_line_t3_g2_t3_ParamLimits

0x8fec,	// (0x0009741e) list_medium_line_t3_g2_t3

0x0002,

0xfc97,	// (0x0009e0c9) list_medium_line_t3_g2_t_ParamLimits

0xfc97,	// (0x0009e0c9) list_medium_line_t3_g2_t

0xca59,	// (0x0009ae8b) list_medium_line_right_icon_g1

0xcc8a,	// (0x0009b0bc) list_medium_line_right_icon_t1

0xbb6e,	// (0x00099fa0) list_medium_line_t2_g1_ParamLimits

0xbb6e,	// (0x00099fa0) list_medium_line_t2_g1

0x9005,	// (0x00097437) list_medium_line_t2_t1_ParamLimits

0x9005,	// (0x00097437) list_medium_line_t2_t1

0x901f,	// (0x00097451) list_medium_line_t2_t2_ParamLimits

0x901f,	// (0x00097451) list_medium_line_t2_t2

0x0001,

0xfc9e,	// (0x0009e0d0) list_medium_line_t2_t_ParamLimits

0xfc9e,	// (0x0009e0d0) list_medium_line_t2_t

0xbb6e,	// (0x00099fa0) list_medium_line_t3_g1_ParamLimits

0xbb6e,	// (0x00099fa0) list_medium_line_t3_g1

0x9038,	// (0x0009746a) list_medium_line_t3_t1_ParamLimits

0x9038,	// (0x0009746a) list_medium_line_t3_t1

0x9052,	// (0x00097484) list_medium_line_t3_t2_ParamLimits

0x9052,	// (0x00097484) list_medium_line_t3_t2

0x9067,	// (0x00097499) list_medium_line_t3_t3_ParamLimits

0x9067,	// (0x00097499) list_medium_line_t3_t3

0x0002,

0xfca3,	// (0x0009e0d5) list_medium_line_t3_t_ParamLimits

0xfca3,	// (0x0009e0d5) list_medium_line_t3_t

0xbb6e,	// (0x00099fa0) list_medium_line_g3_g1_ParamLimits

0xbb6e,	// (0x00099fa0) list_medium_line_g3_g1

0xcc98,	// (0x0009b0ca) list_medium_line_g3_g2_ParamLimits

0xcc98,	// (0x0009b0ca) list_medium_line_g3_g2

0xbb7a,	// (0x00099fac) list_medium_line_g3_g3_ParamLimits

0xbb7a,	// (0x00099fac) list_medium_line_g3_g3

0x0002,

0xfcaa,	// (0x0009e0dc) list_medium_line_g3_g_ParamLimits

0xfcaa,	// (0x0009e0dc) list_medium_line_g3_g

0xcca4,	// (0x0009b0d6) list_medium_line_g3_t1_ParamLimits

0xcca4,	// (0x0009b0d6) list_medium_line_g3_t1

0xbb6e,	// (0x00099fa0) list_medium_line_t2_g3_g1_ParamLimits

0xbb6e,	// (0x00099fa0) list_medium_line_t2_g3_g1

0xcc98,	// (0x0009b0ca) list_medium_line_t2_g3_g2_ParamLimits

0xcc98,	// (0x0009b0ca) list_medium_line_t2_g3_g2

0xbb7a,	// (0x00099fac) list_medium_line_t2_g3_g3_ParamLimits

0xbb7a,	// (0x00099fac) list_medium_line_t2_g3_g3

0x0002,

0xfcaa,	// (0x0009e0dc) list_medium_line_t2_g3_g_ParamLimits

0xfcaa,	// (0x0009e0dc) list_medium_line_t2_g3_g

0x907c,	// (0x000974ae) list_medium_line_t2_g3_t1_ParamLimits

0x907c,	// (0x000974ae) list_medium_line_t2_g3_t1

0x9093,	// (0x000974c5) list_medium_line_t2_g3_t2_ParamLimits

0x9093,	// (0x000974c5) list_medium_line_t2_g3_t2

0x0001,

0xfcb1,	// (0x0009e0e3) list_medium_line_t2_g3_t_ParamLimits

0xfcb1,	// (0x0009e0e3) list_medium_line_t2_g3_t

0xbb6e,	// (0x00099fa0) list_medium_line_t3_g3_g1_ParamLimits

0xbb6e,	// (0x00099fa0) list_medium_line_t3_g3_g1

0xcc98,	// (0x0009b0ca) list_medium_line_t3_g3_g2_ParamLimits

0xcc98,	// (0x0009b0ca) list_medium_line_t3_g3_g2

0xbb7a,	// (0x00099fac) list_medium_line_t3_g3_g3_ParamLimits

0xbb7a,	// (0x00099fac) list_medium_line_t3_g3_g3

0x0002,

0xfcaa,	// (0x0009e0dc) list_medium_line_t3_g3_g_ParamLimits

0xfcaa,	// (0x0009e0dc) list_medium_line_t3_g3_g

0x90ae,	// (0x000974e0) list_medium_line_t3_g3_t1_ParamLimits

0x90ae,	// (0x000974e0) list_medium_line_t3_g3_t1

0x90c7,	// (0x000974f9) list_medium_line_t3_g3_t2_ParamLimits

0x90c7,	// (0x000974f9) list_medium_line_t3_g3_t2

0x90dd,	// (0x0009750f) list_medium_line_t3_g3_t3_ParamLimits

0x90dd,	// (0x0009750f) list_medium_line_t3_g3_t3

0x0002,

0xfcb6,	// (0x0009e0e8) list_medium_line_t3_g3_t_ParamLimits

0xfcb6,	// (0x0009e0e8) list_medium_line_t3_g3_t

0xcb7f,	// (0x0009afb1) list_medium_line_right_iconx2_g1

0xca59,	// (0x0009ae8b) list_medium_line_right_iconx2_g2

0x0001,

0xfcbd,	// (0x0009e0ef) list_medium_line_right_iconx2_g

0xccb9,	// (0x0009b0eb) list_medium_line_right_iconx2_t1

0xcb7f,	// (0x0009afb1) list_medium_line_t2_right_iconx2_g1

0xca59,	// (0x0009ae8b) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfcbd,	// (0x0009e0ef) list_medium_line_t2_right_iconx2_g

0x90f7,	// (0x00097529) list_medium_line_t2_right_iconx2_t1

0x9107,	// (0x00097539) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfcc2,	// (0x0009e0f4) list_medium_line_t2_right_iconx2_t

0xccc7,	// (0x0009b0f9) list_medium_line_x4_t4_t1

0x9119,	// (0x0009754b) list_medium_line_x4_t4_t2

0x9129,	// (0x0009755b) list_medium_line_x4_t4_t3

0x9139,	// (0x0009756b) list_medium_line_x4_t4_t4

0x0003,

0xfcc7,	// (0x0009e0f9) list_medium_line_x4_t4_t

0x918c,	// (0x000975be) tport_appsw_pane_ParamLimits

0x918c,	// (0x000975be) tport_appsw_pane

0x919d,	// (0x000975cf) tport_contact_pane_ParamLimits

0x919d,	// (0x000975cf) tport_contact_pane

0x91b6,	// (0x000975e8) tport_listscroll_pane_ParamLimits

0x91b6,	// (0x000975e8) tport_listscroll_pane

0x91d1,	// (0x00097603) cell_tport_appsw_pane_ParamLimits

0x91d1,	// (0x00097603) cell_tport_appsw_pane

0xb8f7,	// (0x00099d29) tport_appsw_pane_g1_ParamLimits

0xb8f7,	// (0x00099d29) tport_appsw_pane_g1

0xccd5,	// (0x0009b107) tport_contact_pane_g1

0xccde,	// (0x0009b110) tport_contact_pane_t1

0xccec,	// (0x0009b11e) tport_contact_pane_t2

0x0001,

0xfcd0,	// (0x0009e102) tport_contact_pane_t

0xccfa,	// (0x0009b12c) list_tport_pane

0xcd03,	// (0x0009b135) scroll_pane_cp_030

0xcd14,	// (0x0009b146) cell_tport_appsw_pane_g1

0xcd24,	// (0x0009b156) cell_tport_appsw_pane_t1

0x0e1b,	// (0x0008f24d) grid_highlight_pane_cp019

0x9211,	// (0x00097643) list_tport_double_graphic_pane_ParamLimits

0x9211,	// (0x00097643) list_tport_double_graphic_pane

0xa046,	// (0x00098478) list_highlight_pane_cp023_ParamLimits

0xa046,	// (0x00098478) list_highlight_pane_cp023

0x921e,	// (0x00097650) list_tport_double_graphic_pane_g1_ParamLimits

0x921e,	// (0x00097650) list_tport_double_graphic_pane_g1

0x922b,	// (0x0009765d) list_tport_double_graphic_pane_t1_ParamLimits

0x922b,	// (0x0009765d) list_tport_double_graphic_pane_t1

0x9240,	// (0x00097672) list_tport_double_graphic_pane_t2_ParamLimits

0x9240,	// (0x00097672) list_tport_double_graphic_pane_t2

0x0001,

0xfcdc,	// (0x0009e10e) list_tport_double_graphic_pane_t_ParamLimits

0xfcdc,	// (0x0009e10e) list_tport_double_graphic_pane_t

0x0e1b,	// (0x0008f24d) main_cale_note_pane

0x6ee1,	// (0x00095313) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x6ee1,	// (0x00095313) cell_vitu2_function_top_wide_pane_cp01

0x879f,	// (0x00096bd1) wait_bar_pane_cp05_ParamLimits

0x0e1b,	// (0x0008f24d) listscroll_cmail_pane

0xcd3a,	// (0x0009b16c) list_cmail_pane

0x925c,	// (0x0009768e) list_cmail_body_pane

0x9271,	// (0x000976a3) list_single_cmail_header_caption_pane

0x928a,	// (0x000976bc) list_single_cmail_header_detail_pane_ParamLimits

0x928a,	// (0x000976bc) list_single_cmail_header_detail_pane

0x92b3,	// (0x000976e5) list_single_cmail_header_caption_pane_t1

0x92c3,	// (0x000976f5) list_single_cmail_header_detail_pane_g1_ParamLimits

0x92c3,	// (0x000976f5) list_single_cmail_header_detail_pane_g1

0xcd5a,	// (0x0009b18c) list_single_cmail_header_detail_pane_g2_ParamLimits

0xcd5a,	// (0x0009b18c) list_single_cmail_header_detail_pane_g2

0x0002,

0xfce1,	// (0x0009e113) list_single_cmail_header_detail_pane_g_ParamLimits

0xfce1,	// (0x0009e113) list_single_cmail_header_detail_pane_g

0xcd73,	// (0x0009b1a5) list_single_cmail_header_detail_pane_t1_ParamLimits

0xcd73,	// (0x0009b1a5) list_single_cmail_header_detail_pane_t1

0xcda5,	// (0x0009b1d7) list_single_cmail_header_editor_pane_bg_ParamLimits

0xcda5,	// (0x0009b1d7) list_single_cmail_header_editor_pane_bg

0xcdb7,	// (0x0009b1e9) list_cmail_body_pane_g1

0xcdc0,	// (0x0009b1f2) list_cmail_body_pane_t1

0xb934,	// (0x00099d66) list_single_cmail_header_editor_pane_bg_g1

0xdcd1,	// (0x0009c103) list_single_cmail_header_editor_pane_bg_g1_copy1

0xb944,	// (0x00099d76) list_single_cmail_header_editor_pane_bg_g1_copy2

0xb93c,	// (0x00099d6e) list_single_cmail_header_editor_pane_bg_g1_copy3

0xbb66,	// (0x00099f98) list_single_cmail_header_editor_pane_bg_g1_copy4

0xb964,	// (0x00099d96) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xb954,	// (0x00099d86) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xb95c,	// (0x00099d8e) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xdcb1,	// (0x0009c0e3) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0x9301,	// (0x00097733) calenote_gesture_pane_ParamLimits

0x9301,	// (0x00097733) calenote_gesture_pane

0x9321,	// (0x00097753) calenote_window_pane_ParamLimits

0x9321,	// (0x00097753) calenote_window_pane

0xcdce,	// (0x0009b200) popup_note_window_cp01

0x933d,	// (0x0009776f) calenote_swipe_1_pane_ParamLimits

0x933d,	// (0x0009776f) calenote_swipe_1_pane

0x8d12,	// (0x00097144) calenote_swipe_2_pane_ParamLimits

0x8d12,	// (0x00097144) calenote_swipe_2_pane

0xc95c,	// (0x0009ad8e) calenote_swipe_1_pane_g1_ParamLimits

0xc95c,	// (0x0009ad8e) calenote_swipe_1_pane_g1

0xc969,	// (0x0009ad9b) calenote_swipe_1_pane_g2_ParamLimits

0xc969,	// (0x0009ad9b) calenote_swipe_1_pane_g2

0x0001,

0xfc10,	// (0x0009e042) calenote_swipe_1_pane_g_ParamLimits

0xfc10,	// (0x0009e042) calenote_swipe_1_pane_g

0xcde0,	// (0x0009b212) calenote_swipe_1_pane_t1_ParamLimits

0xcde0,	// (0x0009b212) calenote_swipe_1_pane_t1

0xc95c,	// (0x0009ad8e) calenote_swipe_2_pane_g1_ParamLimits

0xc95c,	// (0x0009ad8e) calenote_swipe_2_pane_g1

0xcdff,	// (0x0009b231) calenote_swipe_2_pane_g2_ParamLimits

0xcdff,	// (0x0009b231) calenote_swipe_2_pane_g2

0x0001,

0xfced,	// (0x0009e11f) calenote_swipe_2_pane_g_ParamLimits

0xfced,	// (0x0009e11f) calenote_swipe_2_pane_g

0xce0b,	// (0x0009b23d) calenote_swipe_2_pane_t1_ParamLimits

0xce0b,	// (0x0009b23d) calenote_swipe_2_pane_t1

0x0e1b,	// (0x0008f24d) main_mup_navstr_pane

0x5b78,	// (0x00093faa) main_mup3_pane_t7_ParamLimits

0x5b78,	// (0x00093faa) main_mup3_pane_t7

0xb5c9,	// (0x000999fb) main_mp4_pane_g6_ParamLimits

0xb5c9,	// (0x000999fb) main_mp4_pane_g6

0xd740,	// (0x0009bb72) main_image3_pane_t4_ParamLimits

0xd740,	// (0x0009bb72) main_image3_pane_t4

0x9352,	// (0x00097784) popup_navstr_preview_pane_ParamLimits

0x9352,	// (0x00097784) popup_navstr_preview_pane

0x9366,	// (0x00097798) scroll_navstr_pane_ParamLimits

0x9366,	// (0x00097798) scroll_navstr_pane

0x0e1b,	// (0x0008f24d) bg_popup_preview_window_pane_cp04

0xce32,	// (0x0009b264) popup_navstr_preview_pane_t1

0x937a,	// (0x000977ac) scroll_navstr_pane_g1_ParamLimits

0x937a,	// (0x000977ac) scroll_navstr_pane_g1

0x938e,	// (0x000977c0) scroll_navstr_pane_t1_ParamLimits

0x938e,	// (0x000977c0) scroll_navstr_pane_t1

0xcdd7,	// (0x0009b209) bg_button_pane_cp014

0xcdd7,	// (0x0009b209) bg_button_pane_cp030

0x8bb0,	// (0x00096fe2) list_double_fisheye_pane_g4_ParamLimits

0x8bb0,	// (0x00096fe2) list_double_fisheye_pane_g4

0x8bbc,	// (0x00096fee) list_double_fisheye_pane_g5_ParamLimits

0x8bbc,	// (0x00096fee) list_double_fisheye_pane_g5

0xcd42,	// (0x0009b174) sp_fs_scroll_pane_cp03

0xca99,	// (0x0009aecb) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xcaa5,	// (0x0009aed7) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfc2d,	// (0x0009e05f) main_sp_fs_ctrlbar_pane_g_ParamLimits

0xcab1,	// (0x0009aee3) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0x9252,	// (0x00097684) sp_fs_scroll_pane_cp02

0xd9d7,	// (0x0009be09) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0xd9d7,	// (0x0009be09) popup_sp_fs_calendar_preview_list_single_pane

0x0e1b,	// (0x0008f24d) main_cam6_pano_pane

0xa046,	// (0x00098478) main_mup3_pane_ParamLimits

0x0e1b,	// (0x0008f24d) main_phacti_pane

0x8672,	// (0x00096aa4) bg_button_pane_cp11

0x868c,	// (0x00096abe) main_mobtv_info_pane_g2_ParamLimits

0x868c,	// (0x00096abe) main_mobtv_info_pane_g2

0x0001,

0xfb8d,	// (0x0009dfbf) main_mobtv_info_pane_g_ParamLimits

0xfb8d,	// (0x0009dfbf) main_mobtv_info_pane_g

0x8869,	// (0x00096c9b) sc_clock_pane_t5_ParamLimits

0x8869,	// (0x00096c9b) sc_clock_pane_t5

0x8a15,	// (0x00096e47) main_radioblah_pane_g1_ParamLimits

0xc8a8,	// (0x0009acda) main_radioblah_pane_t3_ParamLimits

0xc8a8,	// (0x0009acda) main_radioblah_pane_t3

0xc8c0,	// (0x0009acf2) main_radioblah_pane_t4_ParamLimits

0xc8c0,	// (0x0009acf2) main_radioblah_pane_t4

0x8a3d,	// (0x00096e6f) main_radioblah_text_pane_ParamLimits

0x8a3d,	// (0x00096e6f) main_radioblah_text_pane

0x8a4f,	// (0x00096e81) main_radioblah_info_pane_g1_ParamLimits

0x8aea,	// (0x00096f1c) main_radioblah_info_pane_t4_ParamLimits

0x8aea,	// (0x00096f1c) main_radioblah_info_pane_t4

0xa046,	// (0x00098478) main_sp_fs_calendar_pane

0x93a4,	// (0x000977d6) main_phacti_pane_g1

0x93ac,	// (0x000977de) phacti_note_pane_ParamLimits

0x93ac,	// (0x000977de) phacti_note_pane

0xce49,	// (0x0009b27b) phacti_term_pane_ParamLimits

0xce49,	// (0x0009b27b) phacti_term_pane

0xce5e,	// (0x0009b290) phacti_note_pane_t1_ParamLimits

0xce5e,	// (0x0009b290) phacti_note_pane_t1

0xce75,	// (0x0009b2a7) phacti_term_pane_g1

0xce7d,	// (0x0009b2af) phacti_term_pane_t1_ParamLimits

0xce7d,	// (0x0009b2af) phacti_term_pane_t1

0xcea7,	// (0x0009b2d9) popup_sp_fs_calendar_preview_list_single_pane_g1

0xceaf,	// (0x0009b2e1) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfcf7,	// (0x0009e129) popup_sp_fs_calendar_preview_list_single_pane_g

0xceb7,	// (0x0009b2e9) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xceb7,	// (0x0009b2e9) popup_sp_fs_calendar_preview_list_single_pane_t1

0xcecd,	// (0x0009b2ff) aid_popup_sp_fs_bg_corner_pane

0xac6e,	// (0x000990a0) popup_sp_fs_calendar_preview_bg_pane_g1

0x0e1b,	// (0x0008f24d) popup_sp_fs_calendar_preview_bg_pane

0xced5,	// (0x0009b307) popup_sp_fs_calendar_preview_list_pane

0xa046,	// (0x00098478) bg_main_sp_fs_cale_pane_ParamLimits

0xa046,	// (0x00098478) bg_main_sp_fs_cale_pane

0xcee6,	// (0x0009b318) listscroll_cale_mrui_pane_ParamLimits

0xcee6,	// (0x0009b318) listscroll_cale_mrui_pane

0xcefa,	// (0x0009b32c) listscroll_sp_fs_schedule_track_pane

0xcf03,	// (0x0009b335) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0xcf03,	// (0x0009b335) main_sp_fs_ctrlbar_pane_cp01

0xcf14,	// (0x0009b346) main_sp_fs_ribbon_pane

0xcf1c,	// (0x0009b34e) popup_sp_fs_cale_preview_window

0x9407,	// (0x00097839) list_single_sp_fs_schedule_track_pane_ParamLimits

0x9407,	// (0x00097839) list_single_sp_fs_schedule_track_pane

0xa046,	// (0x00098478) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0xa046,	// (0x00098478) bg_sp_fs_highlight_list_pane_cp03

0x941c,	// (0x0009784e) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0x941c,	// (0x0009784e) list_single_sp_fs_schedule_track_pane_g1

0x9428,	// (0x0009785a) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0x9428,	// (0x0009785a) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfcfc,	// (0x0009e12e) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfcfc,	// (0x0009e12e) list_single_sp_fs_schedule_track_pane_g

0x9434,	// (0x00097866) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0x9434,	// (0x00097866) list_single_sp_fs_schedule_track_pane_t1

0x944e,	// (0x00097880) sp_fs_schedule_track_pane_ParamLimits

0x944e,	// (0x00097880) sp_fs_schedule_track_pane

0xcf2e,	// (0x0009b360) sp_fs_schedule_track_pane_g1

0xcf36,	// (0x0009b368) sp_fs_schedule_track_pane_g2

0xcf3e,	// (0x0009b370) sp_fs_schedule_track_pane_g3

0xcf46,	// (0x0009b378) sp_fs_schedule_track_pane_g4

0xcf4e,	// (0x0009b380) sp_fs_schedule_track_pane_g5

0x0004,

0xfd01,	// (0x0009e133) sp_fs_schedule_track_pane_g

0xb934,	// (0x00099d66) bg_sp_fs_schedule_viewer_highlight_g1

0xdcd1,	// (0x0009c103) bg_sp_fs_schedule_viewer_highlight_g2

0xb93c,	// (0x00099d6e) bg_sp_fs_schedule_viewer_highlight_g3

0xb944,	// (0x00099d76) bg_sp_fs_schedule_viewer_highlight_g4

0xbb66,	// (0x00099f98) bg_sp_fs_schedule_viewer_highlight_g5

0xb954,	// (0x00099d86) bg_sp_fs_schedule_viewer_highlight_g6

0xb95c,	// (0x00099d8e) bg_sp_fs_schedule_viewer_highlight_g7

0xb964,	// (0x00099d96) bg_sp_fs_schedule_viewer_highlight_g8

0xdcb1,	// (0x0009c0e3) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfd0c,	// (0x0009e13e) bg_sp_fs_schedule_viewer_highlight_g

0x0e1b,	// (0x0008f24d) bg_main_sp_fs_ribbon_pane

0x945f,	// (0x00097891) main_sp_fs_ribbon_pane_g1

0xcf56,	// (0x0009b388) main_sp_fs_ribbon_pane_t1

0x9468,	// (0x0009789a) main_sp_fs_ribbon_pane_t2

0xcf65,	// (0x0009b397) main_sp_fs_ribbon_pane_t3

0x0002,

0xfd1f,	// (0x0009e151) main_sp_fs_ribbon_pane_t

0xcf74,	// (0x0009b3a6) main_sp_fs_ribbon_scheduler_pane

0xcf7c,	// (0x0009b3ae) bg_main_sp_fs_ribbon_pane_g1

0xcf85,	// (0x0009b3b7) bg_main_sp_fs_ribbon_pane_g2

0xcf8e,	// (0x0009b3c0) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfd26,	// (0x0009e158) bg_main_sp_fs_ribbon_pane_g

0xcf96,	// (0x0009b3c8) main_sp_fs_ribbon_scheduler_pane_g1

0xcf9f,	// (0x0009b3d1) main_sp_fs_ribbon_scheduler_pane_g2

0xcfa8,	// (0x0009b3da) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfd2d,	// (0x0009e15f) main_sp_fs_ribbon_scheduler_pane_g

0xcfb1,	// (0x0009b3e3) list_cale_mrui_pane

0x9477,	// (0x000978a9) sp_fs_scroll_pane_cp07_ParamLimits

0x9477,	// (0x000978a9) sp_fs_scroll_pane_cp07

0x948b,	// (0x000978bd) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0x948b,	// (0x000978bd) bg_sp_fs_schedule_viewer_highlight

0xcfba,	// (0x0009b3ec) list_single_sp_fs_schedule_track_pane_cp01

0xcfc2,	// (0x0009b3f4) list_sp_fs_schedule_track_pane

0xcfca,	// (0x0009b3fc) sp_fs_scroll_pane_cp06_ParamLimits

0xcfca,	// (0x0009b3fc) sp_fs_scroll_pane_cp06

0xac6e,	// (0x000990a0) bgmain_sp_fs_calendar_pane_g1

0x949b,	// (0x000978cd) list_single_cale_mrui_pane_ParamLimits

0x949b,	// (0x000978cd) list_single_cale_mrui_pane

0xcfdc,	// (0x0009b40e) list_single_cale_mrui_row_pane_ParamLimits

0xcfdc,	// (0x0009b40e) list_single_cale_mrui_row_pane

0xcfe9,	// (0x0009b41b) list_single_cale_mrui_row_pane_g1_ParamLimits

0xcfe9,	// (0x0009b41b) list_single_cale_mrui_row_pane_g1

0xd021,	// (0x0009b453) list_single_cale_mrui_row_pane_t1_ParamLimits

0xd021,	// (0x0009b453) list_single_cale_mrui_row_pane_t1

0x94bd,	// (0x000978ef) list_single_cale_mrui_row_pane_t2_ParamLimits

0x94bd,	// (0x000978ef) list_single_cale_mrui_row_pane_t2

0xd033,	// (0x0009b465) list_single_cale_mrui_row_pane_t3_ParamLimits

0xd033,	// (0x0009b465) list_single_cale_mrui_row_pane_t3

0xd062,	// (0x0009b494) list_single_cale_mrui_row_pane_t4_ParamLimits

0xd062,	// (0x0009b494) list_single_cale_mrui_row_pane_t4

0x0003,

0xfd39,	// (0x0009e16b) list_single_cale_mrui_row_pane_t_ParamLimits

0xfd39,	// (0x0009e16b) list_single_cale_mrui_row_pane_t

0x9525,	// (0x00097957) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x9525,	// (0x00097957) list_single_cmail_header_editor_pane_bg_cp01

0x954b,	// (0x0009797d) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x954b,	// (0x0009797d) list_single_cmail_header_editor_pane_bg_cp02

0x956b,	// (0x0009799d) main_radioblah_text_pane_t1_ParamLimits

0x956b,	// (0x0009799d) main_radioblah_text_pane_t1

0xd091,	// (0x0009b4c3) cam6_indi_pane_cp01

0xd099,	// (0x0009b4cb) cam6_mode_pane_cp01

0xd0a1,	// (0x0009b4d3) cam6_pano_pane

0xd0aa,	// (0x0009b4dc) cam6_zoom_pane_cp01

0xd0b2,	// (0x0009b4e4) cam6_pano_image_pane

0xd0bd,	// (0x0009b4ef) cam6_pano_pane_g1

0xc742,	// (0x0009ab74) cam6_pano_pane_g2

0xd0c6,	// (0x0009b4f8) cam6_pano_pane_g3

0xd0cf,	// (0x0009b501) cam6_pano_pane_g4

0xb22c,	// (0x0009965e) cam6_pano_pane_g5

0xd0d8,	// (0x0009b50a) cam6_pano_pane_g6

0xd0e2,	// (0x0009b514) cam6_pano_pane_g7

0xd0ea,	// (0x0009b51c) cam6_pano_pane_g8

0xd0f3,	// (0x0009b525) cam6_pano_pane_g9

0x0008,

0xfd42,	// (0x0009e174) cam6_pano_pane_g

0x0e1b,	// (0x0008f24d) main_browser_tag_pane

0xce2a,	// (0x0009b25c) grid_navstr_albumart_pane

0xd0fe,	// (0x0009b530) cell_navstr_albumart_pane_ParamLimits

0xd0fe,	// (0x0009b530) cell_navstr_albumart_pane

0xe4aa,	// (0x0009c8dc) cell_navstr_albumart_pane_g1

0x4009,	// (0x0009243b) cell_navstr_albumart_pane_g2

0x4019,	// (0x0009244b) cell_navstr_albumart_pane_g3

0x4011,	// (0x00092443) cell_navstr_albumart_pane_g4

0x0003,

0xfd55,	// (0x0009e187) cell_navstr_albumart_pane_g

0x9586,	// (0x000979b8) bt_list_pane_ParamLimits

0x9586,	// (0x000979b8) bt_list_pane

0x959b,	// (0x000979cd) bt_list_pane_t1

0x95aa,	// (0x000979dc) bt_list_pane_t2

0x0001,

0xfd5e,	// (0x0009e190) bt_list_pane_t

0x0e1b,	// (0x0008f24d) main_cale_prevew_pane

0x95b9,	// (0x000979eb) popup_cale_preview_window_ParamLimits

0x95b9,	// (0x000979eb) popup_cale_preview_window

0xa046,	// (0x00098478) bg_popup_preview_window_pane_cp05_ParamLimits

0xa046,	// (0x00098478) bg_popup_preview_window_pane_cp05

0xd120,	// (0x0009b552) list_cale_preview_pane_ParamLimits

0xd120,	// (0x0009b552) list_cale_preview_pane

0x95d0,	// (0x00097a02) list_double_cale_preview_pane_ParamLimits

0x95d0,	// (0x00097a02) list_double_cale_preview_pane

0x95e2,	// (0x00097a14) list_single_cale_preview_pane_ParamLimits

0x95e2,	// (0x00097a14) list_single_cale_preview_pane

0x95f6,	// (0x00097a28) list_single_cale_preview_pane_g1

0x95fe,	// (0x00097a30) list_single_cale_preview_pane_t1_ParamLimits

0x95fe,	// (0x00097a30) list_single_cale_preview_pane_t1

0x9613,	// (0x00097a45) list_double_cale_preview_pane_g1

0x961b,	// (0x00097a4d) list_double_cale_preview_pane_t1_ParamLimits

0x961b,	// (0x00097a4d) list_double_cale_preview_pane_t1

0x9630,	// (0x00097a62) list_double_cale_preview_pane_t2_ParamLimits

0x9630,	// (0x00097a62) list_double_cale_preview_pane_t2

0x0001,

0xfd63,	// (0x0009e195) list_double_cale_preview_pane_t_ParamLimits

0xfd63,	// (0x0009e195) list_double_cale_preview_pane_t

0x0e1b,	// (0x0008f24d) main_ezdial_pane

0xa046,	// (0x00098478) main_sp_fs_email_pane_ParamLimits

0x8d4c,	// (0x0009717e) cmail_ddmenu_btn01_pane_ParamLimits

0x8d4c,	// (0x0009717e) cmail_ddmenu_btn01_pane

0x8d5f,	// (0x00097191) cmail_ddmenu_btn02_pane_ParamLimits

0x8d5f,	// (0x00097191) cmail_ddmenu_btn02_pane

0x8d82,	// (0x000971b4) cmail_ddmenu_btn03_pane_ParamLimits

0x8d82,	// (0x000971b4) cmail_ddmenu_btn03_pane

0x8da8,	// (0x000971da) main_sp_fs_ctrlbar_pane_ParamLimits

0x8dcc,	// (0x000971fe) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0x925c,	// (0x0009768e) list_cmail_body_pane_ParamLimits

0xcd51,	// (0x0009b183) bg_button_pane_cp12

0xcd66,	// (0x0009b198) list_single_cmail_header_detail_pane_g3_ParamLimits

0xcd66,	// (0x0009b198) list_single_cmail_header_detail_pane_g3

0x92db,	// (0x0009770d) list_single_cmail_header_detail_pane_t2_ParamLimits

0x92db,	// (0x0009770d) list_single_cmail_header_detail_pane_t2

0x0001,

0xfce8,	// (0x0009e11a) list_single_cmail_header_detail_pane_t_ParamLimits

0xfce8,	// (0x0009e11a) list_single_cmail_header_detail_pane_t

0xce92,	// (0x0009b2c4) phacti_term_pane_t2_ParamLimits

0xce92,	// (0x0009b2c4) phacti_term_pane_t2

0x0001,

0xfcf2,	// (0x0009e124) phacti_term_pane_t_ParamLimits

0xfcf2,	// (0x0009e124) phacti_term_pane_t

0xd12c,	// (0x0009b55e) aid_size_list_single_double

0x9648,	// (0x00097a7a) popup_ezdial_listscroll_window

0x9664,	// (0x00097a96) popup_number_entry_window_cp01

0xe349,	// (0x0009c77b) bg_popup_call_pane_cp09

0xd138,	// (0x0009b56a) ezdial_list_pane

0xd140,	// (0x0009b572) scroll_pane_cp23

0x44f1,	// (0x00092923) bg_button_pane_cp028_ParamLimits

0x44f1,	// (0x00092923) bg_button_pane_cp028

0x9672,	// (0x00097aa4) cmail_ddmenu_btn01_pane_g1_ParamLimits

0x9672,	// (0x00097aa4) cmail_ddmenu_btn01_pane_g1

0x967e,	// (0x00097ab0) cmail_ddmenu_btn01_pane_g2_ParamLimits

0x967e,	// (0x00097ab0) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfd68,	// (0x0009e19a) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfd68,	// (0x0009e19a) cmail_ddmenu_btn01_pane_g

0xd148,	// (0x0009b57a) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xd148,	// (0x0009b57a) cmail_ddmenu_btn01_pane_t1

0x44f1,	// (0x00092923) bg_button_pane_cp029_ParamLimits

0x44f1,	// (0x00092923) bg_button_pane_cp029

0x968a,	// (0x00097abc) cmail_ddmenu_btn02_pane_g1_ParamLimits

0x968a,	// (0x00097abc) cmail_ddmenu_btn02_pane_g1

0x96a2,	// (0x00097ad4) cmail_ddmenu_btn02_pane_t1_ParamLimits

0x96a2,	// (0x00097ad4) cmail_ddmenu_btn02_pane_t1

0xa046,	// (0x00098478) bg_button_pane_cp031_ParamLimits

0xa046,	// (0x00098478) bg_button_pane_cp031

0x968a,	// (0x00097abc) cmail_ddmenu_btn03_pane_g1_ParamLimits

0x968a,	// (0x00097abc) cmail_ddmenu_btn03_pane_g1

0x96a2,	// (0x00097ad4) cmail_ddmenu_btn03_pane_t1_ParamLimits

0x96a2,	// (0x00097ad4) cmail_ddmenu_btn03_pane_t1

0x66f5,	// (0x00094b27) cell_dialer2_keypad_pane_t1_ParamLimits

0x670f,	// (0x00094b41) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x670f,	// (0x00094b41) cell_dialer2_keypad_pane_t1_copy1

0x84f4,	// (0x00096926) ncimui_group_button_pane

0xa046,	// (0x00098478) main_sp_fs_calendar_pane_ParamLimits

0x9271,	// (0x000976a3) list_single_cmail_header_caption_pane_ParamLimits

0xcedd,	// (0x0009b30f) aid_recal_txt_sm_pane

0x0e1b,	// (0x0008f24d) mian_recal_day_pane

0xcf1c,	// (0x0009b34e) popup_sp_fs_cale_preview_window_ParamLimits

0x0e1b,	// (0x0008f24d) list_recal_day_pane

0xd17f,	// (0x0009b5b1) list_single_recal_day_pane_ParamLimits

0xd17f,	// (0x0009b5b1) list_single_recal_day_pane

0xd191,	// (0x0009b5c3) list_single_recal_day_pane_g1_ParamLimits

0xd191,	// (0x0009b5c3) list_single_recal_day_pane_g1

0xd19d,	// (0x0009b5cf) list_single_recal_day_pane_g2_ParamLimits

0xd19d,	// (0x0009b5cf) list_single_recal_day_pane_g2

0xd1ac,	// (0x0009b5de) list_single_recal_day_pane_g3_ParamLimits

0xd1ac,	// (0x0009b5de) list_single_recal_day_pane_g3

0x96c6,	// (0x00097af8) list_single_recal_day_pane_g4_ParamLimits

0x96c6,	// (0x00097af8) list_single_recal_day_pane_g4

0xd1b8,	// (0x0009b5ea) list_single_recal_day_pane_g5_ParamLimits

0xd1b8,	// (0x0009b5ea) list_single_recal_day_pane_g5

0xd1c7,	// (0x0009b5f9) list_single_recal_day_pane_g6_ParamLimits

0xd1c7,	// (0x0009b5f9) list_single_recal_day_pane_g6

0x0005,

0xfd77,	// (0x0009e1a9) list_single_recal_day_pane_g_ParamLimits

0xfd77,	// (0x0009e1a9) list_single_recal_day_pane_g

0xd1d3,	// (0x0009b605) list_single_recal_day_pane_t1

0xd1e1,	// (0x0009b613) list_single_recal_day_pane_t2

0x0001,

0xfd84,	// (0x0009e1b6) list_single_recal_day_pane_t

0x96d9,	// (0x00097b0b) ncimui_query_button_pane_ParamLimits

0x96d9,	// (0x00097b0b) ncimui_query_button_pane

0x96e9,	// (0x00097b1b) ncimui_query_button_pane_t1_ParamLimits

0x96e9,	// (0x00097b1b) ncimui_query_button_pane_t1

0xd1ef,	// (0x0009b621) ncimui_query_button_pane_t2_ParamLimits

0xd1ef,	// (0x0009b621) ncimui_query_button_pane_t2

0x0001,

0xfd89,	// (0x0009e1bb) ncimui_query_button_pane_t_ParamLimits

0xfd89,	// (0x0009e1bb) ncimui_query_button_pane_t

0x96fc,	// (0x00097b2e) query_button_pane_ParamLimits

0x96fc,	// (0x00097b2e) query_button_pane

0x0e1b,	// (0x0008f24d) bg_button_pane_cp0028

0xd202,	// (0x0009b634) query_button_pane_t1

0x4513,	// (0x00092945) main_tport_pane_ParamLimits

0x9149,	// (0x0009757b) bg_popup_window_pane_cp01_ParamLimits

0x9149,	// (0x0009757b) bg_popup_window_pane_cp01

0x9163,	// (0x00097595) heading_pane_cp08_ParamLimits

0x9163,	// (0x00097595) heading_pane_cp08

0x9177,	// (0x000975a9) heading_pane_cp07_ParamLimits

0x9177,	// (0x000975a9) heading_pane_cp07

0xcd14,	// (0x0009b146) cell_tport_appsw_pane_g2

0x0002,

0xfcd5,	// (0x0009e107) cell_tport_appsw_pane_g

0x342a,	// (0x0009185c) input_candi_list_open_g1

0xde6c,	// (0x0009c29e) list_cale_time_pane_g6_ParamLimits

0xde6c,	// (0x0009c29e) list_cale_time_pane_g6

0x5599,	// (0x000939cb) aid_size_touch_calib_1_ParamLimits

0x5599,	// (0x000939cb) aid_size_touch_calib_1

0x55a5,	// (0x000939d7) aid_size_touch_calib_2_ParamLimits

0x55a5,	// (0x000939d7) aid_size_touch_calib_2

0x55bb,	// (0x000939ed) aid_size_touch_calib_3_ParamLimits

0x55bb,	// (0x000939ed) aid_size_touch_calib_3

0x55d9,	// (0x00093a0b) aid_size_touch_calib_4_ParamLimits

0x55d9,	// (0x00093a0b) aid_size_touch_calib_4

0x55ef,	// (0x00093a21) main_touch_calib_button_group_pane_ParamLimits

0x55ef,	// (0x00093a21) main_touch_calib_button_group_pane

0x5607,	// (0x00093a39) main_touch_calib_pane_g1_ParamLimits

0x5613,	// (0x00093a45) main_touch_calib_pane_g2_ParamLimits

0x561f,	// (0x00093a51) main_touch_calib_pane_g3_ParamLimits

0x562b,	// (0x00093a5d) main_touch_calib_pane_g4_ParamLimits

0xf6af,	// (0x0009dae1) main_touch_calib_pane_g_ParamLimits

0x5637,	// (0x00093a69) main_touch_calib_pane_t1_ParamLimits

0x5651,	// (0x00093a83) main_touch_calib_pane_t2_ParamLimits

0x566b,	// (0x00093a9d) main_touch_calib_pane_t3_ParamLimits

0x567f,	// (0x00093ab1) main_touch_calib_pane_t4_ParamLimits

0x5693,	// (0x00093ac5) main_touch_calib_pane_t5_ParamLimits

0xf6b8,	// (0x0009daea) main_touch_calib_pane_t_ParamLimits

0xb013,	// (0x00099445) list_single_fp_cale_pane_g3_ParamLimits

0xb013,	// (0x00099445) list_single_fp_cale_pane_g3

0xd803,	// (0x0009bc35) bg_button_pane_cp012_ParamLimits

0xd803,	// (0x0009bc35) bg_vkb2_func_pane_cp03_ParamLimits

0x7716,	// (0x00095b48) cell_vitu2_function_top_pane_g1_ParamLimits

0xd803,	// (0x0009bc35) bg_vkb2_func_pane_cp04_ParamLimits

0x8494,	// (0x000968c6) main_ncimui_button_group_pane_ParamLimits

0x8494,	// (0x000968c6) main_ncimui_button_group_pane

0x84e2,	// (0x00096914) main_ncimui_pane_t3_ParamLimits

0x84e2,	// (0x00096914) main_ncimui_pane_t3

0xce40,	// (0x0009b272) phacti_button_group_pane

0xd12c,	// (0x0009b55e) aid_size_list_single_double_ParamLimits

0x9648,	// (0x00097a7a) popup_ezdial_listscroll_window_ParamLimits

0x9664,	// (0x00097a96) popup_number_entry_window_cp01_ParamLimits

0x970f,	// (0x00097b41) phacti_button_pane_ParamLimits

0x970f,	// (0x00097b41) phacti_button_pane

0x0e1b,	// (0x0008f24d) bg_button_pane_cp14

0xd210,	// (0x0009b642) phacti_button_pane_t1

0x9720,	// (0x00097b52) main_touch_calib_button_pane_ParamLimits

0x9720,	// (0x00097b52) main_touch_calib_button_pane

0xa7fb,	// (0x00098c2d) bg_button_pane_cp18_ParamLimits

0xa7fb,	// (0x00098c2d) bg_button_pane_cp18

0xd21e,	// (0x0009b650) main_touch_calib_button_pane_t1_ParamLimits

0xd21e,	// (0x0009b650) main_touch_calib_button_pane_t1

0xd234,	// (0x0009b666) main_touch_calib_button_pane_t2_ParamLimits

0xd234,	// (0x0009b666) main_touch_calib_button_pane_t2

0x0001,

0xfd8e,	// (0x0009e1c0) main_touch_calib_button_pane_t_ParamLimits

0xfd8e,	// (0x0009e1c0) main_touch_calib_button_pane_t

0x0e1b,	// (0x0008f24d) cell_ncimui_button_pane

0x0e1b,	// (0x0008f24d) bg_button_pane_cp032

0xd252,	// (0x0009b684) cell_ncimui_button_pane_t1

0xd720,	// (0x0009bb52) image3_infobar_pane_ParamLimits

0xd720,	// (0x0009bb52) image3_infobar_pane

0x8895,	// (0x00096cc7) fs_bigclock_status_pane_ParamLimits

0x8895,	// (0x00096cc7) fs_bigclock_status_pane

0x88a2,	// (0x00096cd4) main_fs_bigclock_clock_pane_ParamLimits

0x88a2,	// (0x00096cd4) main_fs_bigclock_clock_pane

0x88b5,	// (0x00096ce7) main_fs_bigclock_indi_pane_ParamLimits

0x88b5,	// (0x00096ce7) main_fs_bigclock_indi_pane

0x88d0,	// (0x00096d02) main_fs_bigclock_swipe_pane_ParamLimits

0x88d0,	// (0x00096d02) main_fs_bigclock_swipe_pane

0x0e1b,	// (0x0008f24d) main_fs_clock_dumped_data

0x88f3,	// (0x00096d25) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0x88f3,	// (0x00096d25) list_single_fs_bigclock_indicator_pane_g1

0x8911,	// (0x00096d43) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0x8911,	// (0x00096d43) list_single_fs_bigclock_indicator_pane_g2

0x892b,	// (0x00096d5d) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0x892b,	// (0x00096d5d) list_single_fs_bigclock_indicator_pane_g3

0x8945,	// (0x00096d77) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0x8945,	// (0x00096d77) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfbc1,	// (0x0009dff3) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfbc1,	// (0x0009dff3) list_single_fs_bigclock_indicator_pane_g

0x896b,	// (0x00096d9d) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0x896b,	// (0x00096d9d) list_single_fs_bigclock_indicator_pane_t1

0x8993,	// (0x00096dc5) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0x8993,	// (0x00096dc5) list_single_fs_bigclock_indicator_pane_t2

0x89bb,	// (0x00096ded) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0x89bb,	// (0x00096ded) list_single_fs_bigclock_indicator_pane_t3

0x89e3,	// (0x00096e15) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0x89e3,	// (0x00096e15) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfbcc,	// (0x0009dffe) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfbcc,	// (0x0009dffe) list_single_fs_bigclock_indicator_pane_t

0xd260,	// (0x0009b692) image3_infobar_fav_pane_ParamLimits

0xd260,	// (0x0009b692) image3_infobar_fav_pane

0xd270,	// (0x0009b6a2) image3_infobar_loc_pane_ParamLimits

0xd270,	// (0x0009b6a2) image3_infobar_loc_pane

0xd284,	// (0x0009b6b6) image3_infobar_time_pane_ParamLimits

0xd284,	// (0x0009b6b6) image3_infobar_time_pane

0xac6e,	// (0x000990a0) image3_infobar_time_pane_g1

0xd294,	// (0x0009b6c6) image3_infobar_time_pane_t1

0xac6e,	// (0x000990a0) image3_infobar_loc_pane_g1

0xd2a2,	// (0x0009b6d4) image3_infobar_loc_pane_g2

0x0001,

0xfd93,	// (0x0009e1c5) image3_infobar_loc_pane_g

0xd2aa,	// (0x0009b6dc) image3_infobar_loc_pane_t1

0xac6e,	// (0x000990a0) image3_infobar_fav_pane_g1

0xd2b8,	// (0x0009b6ea) image3_infobar_fav_pane_g2

0x0001,

0xfd98,	// (0x0009e1ca) image3_infobar_fav_pane_g

0xd2c0,	// (0x0009b6f2) fs_bigclock_status_battery_pane

0xd2c9,	// (0x0009b6fb) fs_bigclock_status_signal_pane

0xd2d2,	// (0x0009b704) fs_bigclock_status_title_pane

0xd2db,	// (0x0009b70d) fs_bigclock_status_signal_pane_g1

0xd2e4,	// (0x0009b716) fs_bigclock_status_signal_pane_g2

0x0001,

0xfd9d,	// (0x0009e1cf) fs_bigclock_status_signal_pane_g

0xd2ec,	// (0x0009b71e) fs_bigclock_status_battery_pane_g1

0xd2f5,	// (0x0009b727) fs_bigclock_status_battery_pane_g2

0x0001,

0xfda2,	// (0x0009e1d4) fs_bigclock_status_battery_pane_g

0xd2fd,	// (0x0009b72f) fs_bigclock_status_title_pane_t1

0xac6e,	// (0x000990a0) main_fs_bigclock_clock_pane_g1

0xd30b,	// (0x0009b73d) main_fs_bigclock_clock_pane_g2

0xd30b,	// (0x0009b73d) main_fs_bigclock_clock_pane_g3

0xd30b,	// (0x0009b73d) main_fs_bigclock_clock_pane_g4

0x0003,

0xfda7,	// (0x0009e1d9) main_fs_bigclock_clock_pane_g

0x9735,	// (0x00097b67) main_fs_bigclock_clock_pane_t1

0x9743,	// (0x00097b75) main_fs_bigclock_clock_pane_t2

0x0001,

0xfdb0,	// (0x0009e1e2) main_fs_bigclock_clock_pane_t

0xd313,	// (0x0009b745) list_single_fs_bigclock_indicator_pane_ParamLimits

0xd313,	// (0x0009b745) list_single_fs_bigclock_indicator_pane

0x9752,	// (0x00097b84) list_single_fs_bigclock_pane_ParamLimits

0x9752,	// (0x00097b84) list_single_fs_bigclock_pane

0xd32d,	// (0x0009b75f) main_fs_bigclock_indicator_pane_t1

0xd33c,	// (0x0009b76e) list_single_fs_bigclock_pane_g1

0xd344,	// (0x0009b776) list_single_fs_bigclock_pane_t1

0xac6e,	// (0x000990a0) main_fs_bigclock_swipe_pane_g1

0xd384,	// (0x0009b7b6) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfdc1,	// (0x0009e1f3) main_fs_bigclock_swipe_pane_g

0xd38c,	// (0x0009b7be) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xd38c,	// (0x0009b7be) main_fs_bigclock_swipe_pane_t1

0x2c63,	// (0x00091095) call_type_pane_ParamLimits

0x0e1b,	// (0x0008f24d) main_btmg_pane

0xd015,	// (0x0009b447) list_single_cale_mrui_row_pane_g2_ParamLimits

0xd015,	// (0x0009b447) list_single_cale_mrui_row_pane_g2

0x0001,

0xfd34,	// (0x0009e166) list_single_cale_mrui_row_pane_g_ParamLimits

0xfd34,	// (0x0009e166) list_single_cale_mrui_row_pane_g

0xd166,	// (0x0009b598) list_recal_vselct_arw_lo_pane

0xd16e,	// (0x0009b5a0) list_recal_vselct_arw_up_pane

0xd176,	// (0x0009b5a8) list_recal_vselct_pane

0xd3a9,	// (0x0009b7db) btmg_button_pane

0x97b9,	// (0x00097beb) main_btmg_pane_g1

0x0e1b,	// (0x0008f24d) bg_button_pane_cp044

0xd3b3,	// (0x0009b7e5) btmg_button_pane_t1

0x44d5,	// (0x00092907) aid_listscroll_gen

0xa046,	// (0x00098478) main_cntbar_detail_pane

0xcd32,	// (0x0009b164) list_cmail_folder_pane

0xcd42,	// (0x0009b174) sp_fs_scroll_pane_cp03_ParamLimits

0x97c3,	// (0x00097bf5) list_single_fs_dyc_pane_cp01_ParamLimits

0x97c3,	// (0x00097bf5) list_single_fs_dyc_pane_cp01

0xd3c1,	// (0x0009b7f3) aid_size_cmail_indent

0xd3ca,	// (0x0009b7fc) list_single_dyc_row_pane_cp01

0x9809,	// (0x00097c3b) cntbar_detail_list_pane_ParamLimits

0x9809,	// (0x00097c3b) cntbar_detail_list_pane

0x9855,	// (0x00097c87) main_cntbar_detail_cont_pane_ParamLimits

0x9855,	// (0x00097c87) main_cntbar_detail_cont_pane

0x2b86,	// (0x00090fb8) scroll_pane_cp032_ParamLimits

0x2b86,	// (0x00090fb8) scroll_pane_cp032

0x9869,	// (0x00097c9b) cntbar_detail_list_event_pane_ParamLimits

0x9869,	// (0x00097c9b) cntbar_detail_list_event_pane

0x9819,	// (0x00097c4b) cntbar_detail_list_shct_pane

0xdd1f,	// (0x0009c151) aid_list_gen

0xd3d3,	// (0x0009b805) aid_scroll

0xd3dc,	// (0x0009b80e) aid_size_touch_scroll_bar

0xd3e5,	// (0x0009b817) aid_list_double

0xd3ee,	// (0x0009b820) aid_list_single

0xd3f7,	// (0x0009b829) aid_list_single_lg

0xd400,	// (0x0009b832) aid_list_z_g_a_sm

0xd408,	// (0x0009b83a) aid_list_z_g_d

0xd410,	// (0x0009b842) aid_txt_z_prm

0x9879,	// (0x00097cab) aid_txt_z_prm_cp01

0x9887,	// (0x00097cb9) aid_txt_z_sec

0x9895,	// (0x00097cc7) main_cntbar_detail_cont_pane_g1_ParamLimits

0x9895,	// (0x00097cc7) main_cntbar_detail_cont_pane_g1

0x98a9,	// (0x00097cdb) main_cntbar_detail_cont_pane_g2_ParamLimits

0x98a9,	// (0x00097cdb) main_cntbar_detail_cont_pane_g2

0x0001,

0xfdc6,	// (0x0009e1f8) main_cntbar_detail_cont_pane_g_ParamLimits

0xfdc6,	// (0x0009e1f8) main_cntbar_detail_cont_pane_g

0xd41e,	// (0x0009b850) main_cntbar_detail_cont_pane_t1

0xd42c,	// (0x0009b85e) main_cntbar_detail_cont_pane_t2

0xd43a,	// (0x0009b86c) main_cntbar_detail_cont_pane_t3

0x0002,

0xfdcb,	// (0x0009e1fd) main_cntbar_detail_cont_pane_t

0x98b9,	// (0x00097ceb) cell_cntbar_detail_list_shct_pane_ParamLimits

0x98b9,	// (0x00097ceb) cell_cntbar_detail_list_shct_pane

0xd448,	// (0x0009b87a) cntbar_detail_list_shct_pane_g1

0xd451,	// (0x0009b883) cntbar_detail_list_shct_pane_g2

0x0001,

0xfdd2,	// (0x0009e204) cntbar_detail_list_shct_pane_g

0x98cd,	// (0x00097cff) cntbar_detail_list_event_pane_g1_ParamLimits

0x98cd,	// (0x00097cff) cntbar_detail_list_event_pane_g1

0x98d9,	// (0x00097d0b) cntbar_detail_list_event_pane_g2_ParamLimits

0x98d9,	// (0x00097d0b) cntbar_detail_list_event_pane_g2

0x0005,

0xfdd7,	// (0x0009e209) cntbar_detail_list_event_pane_g_ParamLimits

0xfdd7,	// (0x0009e209) cntbar_detail_list_event_pane_g

0x9945,	// (0x00097d77) cntbar_detail_list_event_pane_t1_ParamLimits

0x9945,	// (0x00097d77) cntbar_detail_list_event_pane_t1

0x995a,	// (0x00097d8c) cntbar_detail_list_event_pane_t2_ParamLimits

0x995a,	// (0x00097d8c) cntbar_detail_list_event_pane_t2

0x0002,

0xfde4,	// (0x0009e216) cntbar_detail_list_event_pane_t_ParamLimits

0xfde4,	// (0x0009e216) cntbar_detail_list_event_pane_t

0xac6e,	// (0x000990a0) cell_cntbar_detail_list_shct_pane_g1

0x2fb4,	// (0x000913e6) navi_pane_mv_g3

0xa046,	// (0x00098478) main_cntbar_detail_pane_ParamLimits

0x0e1b,	// (0x0008f24d) main_notif_wgt_pane

0xb563,	// (0x00099995) aid_tch_main_mp4_pane_g4

0xd718,	// (0x0009bb4a) popup_slider_window_cp02

0xd15d,	// (0x0009b58f) list_recal_day_event_pane

0x97dd,	// (0x00097c0f) cntbar_detail_btn_pane_ParamLimits

0x97dd,	// (0x00097c0f) cntbar_detail_btn_pane

0x97f3,	// (0x00097c25) cntbar_detail_btn_pane_cp01_ParamLimits

0x97f3,	// (0x00097c25) cntbar_detail_btn_pane_cp01

0x9819,	// (0x00097c4b) cntbar_detail_list_shct_pane_ParamLimits

0x9829,	// (0x00097c5b) cntbar_detail_pane_g1_ParamLimits

0x9829,	// (0x00097c5b) cntbar_detail_pane_g1

0x9839,	// (0x00097c6b) cntbar_detail_pane_t1_ParamLimits

0x9839,	// (0x00097c6b) cntbar_detail_pane_t1

0x98e5,	// (0x00097d17) cntbar_detail_list_event_pane_g3_ParamLimits

0x98e5,	// (0x00097d17) cntbar_detail_list_event_pane_g3

0x98fd,	// (0x00097d2f) cntbar_detail_list_event_pane_g4_ParamLimits

0x98fd,	// (0x00097d2f) cntbar_detail_list_event_pane_g4

0x9915,	// (0x00097d47) cntbar_detail_list_event_pane_g5_ParamLimits

0x9915,	// (0x00097d47) cntbar_detail_list_event_pane_g5

0x992d,	// (0x00097d5f) cntbar_detail_list_event_pane_g6_ParamLimits

0x992d,	// (0x00097d5f) cntbar_detail_list_event_pane_g6

0x996f,	// (0x00097da1) cntbar_detail_list_event_pane_t3_ParamLimits

0x996f,	// (0x00097da1) cntbar_detail_list_event_pane_t3

0x9981,	// (0x00097db3) popup_notif_wgt_window_ParamLimits

0x9981,	// (0x00097db3) popup_notif_wgt_window

0x999a,	// (0x00097dcc) popup_submenu_window_cp01_ParamLimits

0x999a,	// (0x00097dcc) popup_submenu_window_cp01

0xe349,	// (0x0009c77b) bg_popup_window_pane_cp10

0xd45a,	// (0x0009b88c) listscroll_notif_wgt_pane

0xd464,	// (0x0009b896) list_notif_wgt_window

0xd46d,	// (0x0009b89f) scroll_pane_cp033

0xd476,	// (0x0009b8a8) list_notif_wgt_row_pane_ParamLimits

0xd476,	// (0x0009b8a8) list_notif_wgt_row_pane

0xd48a,	// (0x0009b8bc) aid_size_list_notif_wgt_del

0xd493,	// (0x0009b8c5) list_notif_wgt_row_pane_g1

0xd49b,	// (0x0009b8cd) list_notif_wgt_row_pane_g2

0xd4a3,	// (0x0009b8d5) list_notif_wgt_row_pane_g3

0x0002,

0xfdeb,	// (0x0009e21d) list_notif_wgt_row_pane_g

0xd4ac,	// (0x0009b8de) list_notif_wgt_row_pane_t1

0xd4ba,	// (0x0009b8ec) list_notif_wgt_row_pane_t2

0xd4c8,	// (0x0009b8fa) list_notif_wgt_row_pane_t3

0x0002,

0xfdf2,	// (0x0009e224) list_notif_wgt_row_pane_t

0xbb98,	// (0x00099fca) list_recal_day_event_pane_g1

0xd4d6,	// (0x0009b908) list_recal_day_event_pane_t1

0x0e1b,	// (0x0008f24d) bg_button_pane_cp045

0xd4e5,	// (0x0009b917) cntbar_detail_btn_pane_t1

0x44f1,	// (0x00092923) main_callh_pane_ParamLimits

0x44f1,	// (0x00092923) main_callh_pane

0x0e1b,	// (0x0008f24d) main_coverflow0_pane

0x0e1b,	// (0x0008f24d) main_wgtman_pane

0x88de,	// (0x00096d10) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x88de,	// (0x00096d10) main_fs_bigclock_unlock_btn_pane

0xcd0c,	// (0x0009b13e) bg_button_pane_cp16

0xcd1c,	// (0x0009b14e) cell_tport_appsw_pane_g3

0x99ac,	// (0x00097dde) cf0_flow_pane_ParamLimits

0x99ac,	// (0x00097dde) cf0_flow_pane

0xd4f3,	// (0x0009b925) listscroll_cf0_pane

0xd4fc,	// (0x0009b92e) main_cf0_pane_g1

0x99c1,	// (0x00097df3) main_cf0_pane_t1_ParamLimits

0x99c1,	// (0x00097df3) main_cf0_pane_t1

0x99d8,	// (0x00097e0a) main_cf0_pane_t2_ParamLimits

0x99d8,	// (0x00097e0a) main_cf0_pane_t2

0x0001,

0xfdf9,	// (0x0009e22b) main_cf0_pane_t_ParamLimits

0xfdf9,	// (0x0009e22b) main_cf0_pane_t

0xd506,	// (0x0009b938) scroll_pane_cp11

0x99ef,	// (0x00097e21) cf0_flow_pane_g1

0x99f7,	// (0x00097e29) cf0_flow_pane_g2

0x0001,

0xfdfe,	// (0x0009e230) cf0_flow_pane_g

0x99ff,	// (0x00097e31) cf0_flow_pane_t1

0x0e1b,	// (0x0008f24d) main_call6_pane

0x0e1b,	// (0x0008f24d) main_calllock_pane

0x9a0d,	// (0x00097e3f) call6_btn_grp_pane_ParamLimits

0x9a0d,	// (0x00097e3f) call6_btn_grp_pane

0x9a27,	// (0x00097e59) call6_pane_g1_ParamLimits

0x9a27,	// (0x00097e59) call6_pane_g1

0x9a3c,	// (0x00097e6e) popup_call6_1st_window_ParamLimits

0x9a3c,	// (0x00097e6e) popup_call6_1st_window

0x9a4d,	// (0x00097e7f) popup_call6_2nd_window_ParamLimits

0x9a4d,	// (0x00097e7f) popup_call6_2nd_window

0x9a5e,	// (0x00097e90) cell_call6_btn_pane_ParamLimits

0x9a5e,	// (0x00097e90) cell_call6_btn_pane

0xe349,	// (0x0009c77b) bg_popup_call2_in_pane_cp03

0xd511,	// (0x0009b943) popup_call6_1st_window_g1

0xd519,	// (0x0009b94b) popup_call6_1st_window_g2

0xd521,	// (0x0009b953) popup_call6_1st_window_g3

0x0002,

0xfe03,	// (0x0009e235) popup_call6_1st_window_g

0xd529,	// (0x0009b95b) popup_call6_1st_window_t1

0xd538,	// (0x0009b96a) popup_call6_1st_window_t2

0xd548,	// (0x0009b97a) popup_call6_1st_window_t3

0x0002,

0xfe0a,	// (0x0009e23c) popup_call6_1st_window_t

0xe349,	// (0x0009c77b) bg_popup_call2_in_pane_cp04

0xd511,	// (0x0009b943) popup_call6_2nd_window_g1

0xd519,	// (0x0009b94b) popup_call6_2nd_window_g2

0xd521,	// (0x0009b953) popup_call6_2nd_window_g3

0x0002,

0xfe03,	// (0x0009e235) popup_call6_2nd_window_g

0xd529,	// (0x0009b95b) popup_call6_2nd_window_t1

0x0e1b,	// (0x0008f24d) bg_button_pane_cp15

0xd558,	// (0x0009b98a) cell_call6_btn_pane_g1

0xd561,	// (0x0009b993) cell_call6_btn_pane_t1

0x9a72,	// (0x00097ea4) listscroll_wgtman_pane_ParamLimits

0x9a72,	// (0x00097ea4) listscroll_wgtman_pane

0x9a95,	// (0x00097ec7) wgtman_btn_pane_ParamLimits

0x9a95,	// (0x00097ec7) wgtman_btn_pane

0xe1fc,	// (0x0009c62e) aid_scroll_copy1

0xd570,	// (0x0009b9a2) list_wgtman_pane

0x9ad8,	// (0x00097f0a) wgtman_btn_pane_g1_ParamLimits

0x9ad8,	// (0x00097f0a) wgtman_btn_pane_g1

0x9b04,	// (0x00097f36) wgtman_btn_pane_t1_ParamLimits

0x9b04,	// (0x00097f36) wgtman_btn_pane_t1

0xd57a,	// (0x0009b9ac) wgtman_btn_pane_t2_ParamLimits

0xd57a,	// (0x0009b9ac) wgtman_btn_pane_t2

0x0001,

0xfe11,	// (0x0009e243) wgtman_btn_pane_t_ParamLimits

0xfe11,	// (0x0009e243) wgtman_btn_pane_t

0x9b41,	// (0x00097f73) listrow_wgtman_pane_ParamLimits

0x9b41,	// (0x00097f73) listrow_wgtman_pane

0x9b54,	// (0x00097f86) listrow_wgtman_pane_g1

0x9b5d,	// (0x00097f8f) listrow_wgtman_pane_g2

0x0001,

0xfe16,	// (0x0009e248) listrow_wgtman_pane_g

0x9b67,	// (0x00097f99) listrow_wgtman_pane_t1

0x9b75,	// (0x00097fa7) listrow_wgtman_pane_t2

0x0001,

0xfe1b,	// (0x0009e24d) listrow_wgtman_pane_t

0x9b83,	// (0x00097fb5) wait_bar_pane_cp09

0xd591,	// (0x0009b9c3) main_calllock_btn_pane

0xd59b,	// (0x0009b9cd) main_calllock_pane_g1

0x0e1b,	// (0x0008f24d) bg_button_pane_cp17

0xd5a6,	// (0x0009b9d8) main_calllock_btn_pane_g1

0xd5af,	// (0x0009b9e1) main_calllock_btn_pane_t1

0x0e1b,	// (0x0008f24d) main_dialer3_pane

0x0e1b,	// (0x0008f24d) main_fmrd2_pane

0xac6e,	// (0x000990a0) main_fs_bigclock_unlock_btn_pane_g1

0xd5c6,	// (0x0009b9f8) main_fs_bigclock_unlock_btn_pane_t1

0x9b8b,	// (0x00097fbd) area_fmrd2_info_pane_ParamLimits

0x9b8b,	// (0x00097fbd) area_fmrd2_info_pane

0x9b9c,	// (0x00097fce) area_fmrd2_visual_pane_ParamLimits

0x9b9c,	// (0x00097fce) area_fmrd2_visual_pane

0x9baa,	// (0x00097fdc) fmrd2_indi_pane_ParamLimits

0x9baa,	// (0x00097fdc) fmrd2_indi_pane

0x9bb7,	// (0x00097fe9) area_fmrd2_visual_pane_g1

0x9bbf,	// (0x00097ff1) area_fmrd2_visual_pane_t1

0x9bcf,	// (0x00098001) area_fmrd2_visual_pane_t2

0x9bdf,	// (0x00098011) area_fmrd2_visual_pane_t3

0x0002,

0xfe25,	// (0x0009e257) area_fmrd2_visual_pane_t

0x9bef,	// (0x00098021) area_fmrd2_info_pane_g1

0x9bf7,	// (0x00098029) area_fmrd2_info_pane_t1

0x9c07,	// (0x00098039) area_fmrd2_info_pane_t2

0x9c17,	// (0x00098049) area_fmrd2_info_pane_t3

0x9c27,	// (0x00098059) area_fmrd2_info_pane_t4

0x0003,

0xfe2c,	// (0x0009e25e) area_fmrd2_info_pane_t

0x9c35,	// (0x00098067) fmrd2_indi_pane_t1

0x9c45,	// (0x00098077) fmrd2_indi_pane_t2

0x9c55,	// (0x00098087) fmrd2_indi_pane_t3

0x0002,

0xfe35,	// (0x0009e267) fmrd2_indi_pane_t

0x8954,	// (0x00096d86) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0x8954,	// (0x00096d86) list_single_fs_bigclock_indicator_pane_g5

0x89f8,	// (0x00096e2a) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0x89f8,	// (0x00096e2a) list_single_fs_bigclock_indicator_pane_t5

0x93c0,	// (0x000977f2) aid_cell_bcale_month_pane_ParamLimits

0x93c0,	// (0x000977f2) aid_cell_bcale_month_pane

0x93d2,	// (0x00097804) bcale_month_pane_ParamLimits

0x93d2,	// (0x00097804) bcale_month_pane

0x93ec,	// (0x0009781e) bcale_preview_pane_ParamLimits

0x93ec,	// (0x0009781e) bcale_preview_pane

0xd344,	// (0x0009b776) list_single_fs_bigclock_pane_t1_ParamLimits

0xd360,	// (0x0009b792) list_single_fs_bigclock_pane_t2_ParamLimits

0xd360,	// (0x0009b792) list_single_fs_bigclock_pane_t2

0x0001,

0xfdbc,	// (0x0009e1ee) list_single_fs_bigclock_pane_t_ParamLimits

0xfdbc,	// (0x0009e1ee) list_single_fs_bigclock_pane_t

0xd5be,	// (0x0009b9f0) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfe20,	// (0x0009e252) main_fs_bigclock_unlock_btn_pane_g

0x9c65,	// (0x00098097) aid_dia3_key_size_ParamLimits

0x9c65,	// (0x00098097) aid_dia3_key_size

0x9c74,	// (0x000980a6) aid_dia3_listrow_size_ParamLimits

0x9c74,	// (0x000980a6) aid_dia3_listrow_size

0x9c89,	// (0x000980bb) dia3_keypad_fun_pane_ParamLimits

0x9c89,	// (0x000980bb) dia3_keypad_fun_pane

0x9ca5,	// (0x000980d7) dia3_keypad_num_pane_ParamLimits

0x9ca5,	// (0x000980d7) dia3_keypad_num_pane

0x9cc0,	// (0x000980f2) dia3_listscroll_pane_ParamLimits

0x9cc0,	// (0x000980f2) dia3_listscroll_pane

0x9cd3,	// (0x00098105) dia3_numentry_pane_ParamLimits

0x9cd3,	// (0x00098105) dia3_numentry_pane

0xd5d4,	// (0x0009ba06) dia3_list_pane

0xd5df,	// (0x0009ba11) scroll_pane_cp12

0x0e1b,	// (0x0008f24d) bg_dia3_numentry_pane

0x9ce7,	// (0x00098119) dia3_numentry_pane_t1

0x9cf6,	// (0x00098128) cell_dia3_key_num_pane

0x9cfe,	// (0x00098130) cell_dia3_key0_fun_pane_ParamLimits

0x9cfe,	// (0x00098130) cell_dia3_key0_fun_pane

0x9d12,	// (0x00098144) cell_dia3_key1_fun_pane_ParamLimits

0x9d12,	// (0x00098144) cell_dia3_key1_fun_pane

0x9d2a,	// (0x0009815c) dia3_listrow_pane

0xc5ae,	// (0x0009a9e0) bg_dia3_numentry_pane_g1

0x0e1b,	// (0x0008f24d) bg_button_pane_cp21

0xd5ea,	// (0x0009ba1c) cell_dia3_key_num_pane_t1

0xd5f8,	// (0x0009ba2a) cell_dia3_key_num_pane_t2

0xd607,	// (0x0009ba39) cell_dia3_key_num_pane_t3

0xd616,	// (0x0009ba48) cell_dia3_key_num_pane_t4

0x0003,

0xfe3c,	// (0x0009e26e) cell_dia3_key_num_pane_t

0x0e1b,	// (0x0008f24d) bg_button_pane_cp19

0x9d3c,	// (0x0009816e) cell_dia3_key0_fun_pane_g1

0x0e1b,	// (0x0008f24d) bg_button_pane_cp20

0x9d44,	// (0x00098176) cell_dia3_key1_fun_pane_g1

0x9d4c,	// (0x0009817e) area_left_week_number_pane

0xd625,	// (0x0009ba57) area_top_day_name_pane

0x9d55,	// (0x00098187) frame_month_view_pane

0x9d5d,	// (0x0009818f) grid_month_view_pane

0x9d67,	// (0x00098199) cell_top_day_name_pane_ParamLimits

0x9d67,	// (0x00098199) cell_top_day_name_pane

0x95e2,	// (0x00097a14) cell_area_left_week_number_pane_ParamLimits

0x95e2,	// (0x00097a14) cell_area_left_week_number_pane

0x9d7d,	// (0x000981af) cell_month_view_pane_ParamLimits

0x9d7d,	// (0x000981af) cell_month_view_pane

0xd62e,	// (0x0009ba60) frm_month_g1

0x9d98,	// (0x000981ca) frm_month_g2

0x9da0,	// (0x000981d2) frm_month_g3

0x9da8,	// (0x000981da) frm_month_g4

0x9db0,	// (0x000981e2) frm_month_g5

0x9db8,	// (0x000981ea) frm_month_g6

0x9dc0,	// (0x000981f2) frm_month_g7

0xd637,	// (0x0009ba69) frm_month_g8

0x9dc8,	// (0x000981fa) frm_month_g9

0x9dd1,	// (0x00098203) frm_month_g10

0x9dda,	// (0x0009820c) frm_month_g11

0x9de3,	// (0x00098215) frm_month_g12

0x9dec,	// (0x0009821e) frm_month_g13

0x9df5,	// (0x00098227) frm_month_g14

0x9dfe,	// (0x00098230) frm_month_g15

0x9e07,	// (0x00098239) frm_month_g16

0x000f,

0xfe45,	// (0x0009e277) frm_month_g

0x9e10,	// (0x00098242) cell_top_day_name_pane_t1

0x9e1f,	// (0x00098251) cell_area_left_week_number_pane_g1

0x9e10,	// (0x00098242) cell_area_left_week_number_pane_t1

0xac6e,	// (0x000990a0) cell_month_view_pane_g1

0x9e27,	// (0x00098259) cell_month_view_pane_t1

0x0e1b,	// (0x0008f24d) main_fps_pane

0xca61,	// (0x0009ae93) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xca61,	// (0x0009ae93) cmail_ddmenu_btn02_pane_cp1

0xca7d,	// (0x0009aeaf) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xca7d,	// (0x0009aeaf) cmail_ddmenu_btn02_pane_cp2

0x9696,	// (0x00097ac8) cmail_ddmenu_btn02_pane_g2_ParamLimits

0x9696,	// (0x00097ac8) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfd6d,	// (0x0009e19f) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfd6d,	// (0x0009e19f) cmail_ddmenu_btn02_pane_g

0x96b4,	// (0x00097ae6) cmail_ddmenu_btn02_pane_t2_ParamLimits

0x96b4,	// (0x00097ae6) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfd72,	// (0x0009e1a4) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfd72,	// (0x0009e1a4) cmail_ddmenu_btn02_pane_t

0x9e36,	// (0x00098268) fps_text_pane_ParamLimits

0x9e36,	// (0x00098268) fps_text_pane

0x9e4d,	// (0x0009827f) main_fps_pane_g1_ParamLimits

0x9e4d,	// (0x0009827f) main_fps_pane_g1

0x9e67,	// (0x00098299) wait_bar_pane_cp010_ParamLimits

0x9e67,	// (0x00098299) wait_bar_pane_cp010

0x9e78,	// (0x000982aa) fps_text_pane_t1_ParamLimits

0x9e78,	// (0x000982aa) fps_text_pane_t1

0xb8b4,	// (0x00099ce6) cam4_image_uncrop_pane_g1

0xb8bd,	// (0x00099cef) cam4_image_uncrop_pane_g2

0x6ba0,	// (0x00094fd2) cam4_image_uncrop_pane_g3

0x6ba9,	// (0x00094fdb) cam4_image_uncrop_pane_g4

0x0003,

0xf847,	// (0x0009dc79) cam4_image_uncrop_pane_g

0x9d2a,	// (0x0009815c) dia3_listrow_pane_ParamLimits

0x0e1b,	// (0x0008f24d) main_phob2_pane

0x91e2,	// (0x00097614) cell_tport_appsw_pane_cp02_ParamLimits

0x91e2,	// (0x00097614) cell_tport_appsw_pane_cp02

0x91f6,	// (0x00097628) cell_tport_appsw_pane_cp03_ParamLimits

0x91f6,	// (0x00097628) cell_tport_appsw_pane_cp03

0x0e1b,	// (0x0008f24d) phob2_contact_card_pane

0x0e1b,	// (0x0008f24d) phob2_listscroll_pane

0xd640,	// (0x0009ba72) phob2_list_pane

0xd648,	// (0x0009ba7a) scroll_pane_cp034

0x9e90,	// (0x000982c2) phob2_cc_data_pane_ParamLimits

0x9e90,	// (0x000982c2) phob2_cc_data_pane

0x9eaf,	// (0x000982e1) phob2_cc_listscroll_pane_ParamLimits

0x9eaf,	// (0x000982e1) phob2_cc_listscroll_pane

0xb96c,	// (0x00099d9e) list_double_large_graphic_phob2_pane_ParamLimits

0xb96c,	// (0x00099d9e) list_double_large_graphic_phob2_pane

0x9ecd,	// (0x000982ff) list_double_large_graphic_phob2_pane_g1_ParamLimits

0x9ecd,	// (0x000982ff) list_double_large_graphic_phob2_pane_g1

0x9eda,	// (0x0009830c) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x9eda,	// (0x0009830c) list_double_large_graphic_phob2_pane_g2

0x0001,

0xfe66,	// (0x0009e298) list_double_large_graphic_phob2_pane_g_ParamLimits

0xfe66,	// (0x0009e298) list_double_large_graphic_phob2_pane_g

0x9ee6,	// (0x00098318) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x9ee6,	// (0x00098318) list_double_large_graphic_phob2_pane_t1

0x9efb,	// (0x0009832d) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x9efb,	// (0x0009832d) list_double_large_graphic_phob2_pane_t2

0x0001,

0xfe6b,	// (0x0009e29d) list_double_large_graphic_phob2_pane_t_ParamLimits

0xfe6b,	// (0x0009e29d) list_double_large_graphic_phob2_pane_t

0x0e1b,	// (0x0008f24d) list_highlight_pane_cp024

0xd650,	// (0x0009ba82) phob2_cc_button_pane

0x9f0d,	// (0x0009833f) phob2_cc_data_pane_g1_ParamLimits

0x9f0d,	// (0x0009833f) phob2_cc_data_pane_g1

0x9f22,	// (0x00098354) phob2_cc_data_pane_g2_ParamLimits

0x9f22,	// (0x00098354) phob2_cc_data_pane_g2

0x0001,

0xfe70,	// (0x0009e2a2) phob2_cc_data_pane_g_ParamLimits

0xfe70,	// (0x0009e2a2) phob2_cc_data_pane_g

0x9f34,	// (0x00098366) phob2_cc_data_pane_t1_ParamLimits

0x9f34,	// (0x00098366) phob2_cc_data_pane_t1

0x9f4c,	// (0x0009837e) phob2_cc_data_pane_t2_ParamLimits

0x9f4c,	// (0x0009837e) phob2_cc_data_pane_t2

0x9f64,	// (0x00098396) phob2_cc_data_pane_t3_ParamLimits

0x9f64,	// (0x00098396) phob2_cc_data_pane_t3

0x0002,

0xfe75,	// (0x0009e2a7) phob2_cc_data_pane_t_ParamLimits

0xfe75,	// (0x0009e2a7) phob2_cc_data_pane_t

0xd658,	// (0x0009ba8a) phob2_cc_list_pane_ParamLimits

0xd658,	// (0x0009ba8a) phob2_cc_list_pane

0xbc31,	// (0x0009a063) scroll_pane_cp035_ParamLimits

0xbc31,	// (0x0009a063) scroll_pane_cp035

0xa046,	// (0x00098478) bg_button_pane_cp033

0xd664,	// (0x0009ba96) phob2_cc_button_pane_g1

0xd670,	// (0x0009baa2) phob2_cc_button_pane_t1

0xd685,	// (0x0009bab7) phob2_cc_button_pane_t2

0x0001,

0xfe7c,	// (0x0009e2ae) phob2_cc_button_pane_t

0x9f7e,	// (0x000983b0) list_double_large_graphic_phob2_cc_pane_ParamLimits

0x9f7e,	// (0x000983b0) list_double_large_graphic_phob2_cc_pane

0x9f92,	// (0x000983c4) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0x9f92,	// (0x000983c4) list_double_large_graphic_phob2_cc_pane_g1

0x9f9e,	// (0x000983d0) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x9f9e,	// (0x000983d0) list_double_large_graphic_phob2_cc_pane_g2

0x9faa,	// (0x000983dc) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x9faa,	// (0x000983dc) list_double_large_graphic_phob2_cc_pane_g3

0x9fb6,	// (0x000983e8) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x9fb6,	// (0x000983e8) list_double_large_graphic_phob2_cc_pane_g4

0x9fc2,	// (0x000983f4) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x9fc2,	// (0x000983f4) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xfe81,	// (0x0009e2b3) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xfe81,	// (0x0009e2b3) list_double_large_graphic_phob2_cc_pane_g

0x9fce,	// (0x00098400) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x9fce,	// (0x00098400) list_double_large_graphic_phob2_cc_pane_t1

0x9ff7,	// (0x00098429) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x9ff7,	// (0x00098429) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xfe8c,	// (0x0009e2be) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xfe8c,	// (0x0009e2be) list_double_large_graphic_phob2_cc_pane_t

0xd697,	// (0x0009bac9) list_highlight_pane_cp025_ParamLimits

0xd697,	// (0x0009bac9) list_highlight_pane_cp025

0xa046,	// (0x00098478) bg_button_pane_cp033_ParamLimits

0xd664,	// (0x0009ba96) phob2_cc_button_pane_g1_ParamLimits

0xd670,	// (0x0009baa2) phob2_cc_button_pane_t1_ParamLimits

0xd685,	// (0x0009bab7) phob2_cc_button_pane_t2_ParamLimits

0xfe7c,	// (0x0009e2ae) phob2_cc_button_pane_t_ParamLimits

0x0e5d,	// (0x0008f28f) popup_wgtman_window

0xba4e,	// (0x00099e80) scroll_pane_cp038

0x9aba,	// (0x00097eec) wgtman_btn_pane_cp_01_ParamLimits

0x9aba,	// (0x00097eec) wgtman_btn_pane_cp_01

0xd6a5,	// (0x0009bad7) wgtman_content_pane

0xd3e5,	// (0x0009b817) wgtman_heading_pane

0x0e1b,	// (0x0008f24d) bg_heading_pane_cp02

0xd6ae,	// (0x0009bae0) wgtman_heading_pane_g1

0xd6b6,	// (0x0009bae8) wgtman_heading_pane_t1

0xd6c4,	// (0x0009baf6) scroll_pane_cp036

0xd6cc,	// (0x0009bafe) wgtman_list_pane

0xd6d4,	// (0x0009bb06) wgtman_list_pane_t1_ParamLimits

0xd6d4,	// (0x0009bb06) wgtman_list_pane_t1

0xd772,	// (0x0009bba4) cam4_grid_pane

0x78b1,	// (0x00095ce3) bg_button_pane_cp015_ParamLimits

0x78c5,	// (0x00095cf7) bg_button_pane_cp016_ParamLimits

0x78d8,	// (0x00095d0a) bg_button_pane_cp017_ParamLimits

0x7930,	// (0x00095d62) popup_vitu2_query_window_g3_ParamLimits

0x7930,	// (0x00095d62) popup_vitu2_query_window_g3

0x79ed,	// (0x00095e1f) popup_vitu2_query_window_t6_ParamLimits

0x79ed,	// (0x00095e1f) popup_vitu2_query_window_t6

0x7a18,	// (0x00095e4a) popup_vitu2_query_window_t7_ParamLimits

0x7a18,	// (0x00095e4a) popup_vitu2_query_window_t7

0xb8b4,	// (0x00099ce6) cam4_grid_pane_g1

0xb8bd,	// (0x00099cef) cam4_grid_pane_g2

0xd6f6,	// (0x0009bb28) cam4_grid_pane_g3

0xd6ff,	// (0x0009bb31) cam4_grid_pane_g4

0x0003,

0xfe91,	// (0x0009e2c3) cam4_grid_pane_g

0x1d45,	// (0x00090177) aid_placing_vt_slider_lsc_ParamLimits

0x2042,	// (0x00090474) vidtel_button_pane_ParamLimits

0x2042,	// (0x00090474) vidtel_button_pane

0x0e1b,	// (0x0008f24d) bg_button_pane_cp034

0xa020,	// (0x00098452) vidtel_button_pane_g1

0xd70a,	// (0x0009bb3c) vidtel_button_pane_t1

0xbb50,	// (0x00099f82) aid_size_vtel_slider_touch

0xbc31,	// (0x0009a063) scroll_pane_cp039

0xc5ec,	// (0x0009aa1e) ncim_query_button_pane_cp01_ParamLimits

0xc60b,	// (0x0009aa3d) ncimui_query_pane_g1_ParamLimits

0xa046,	// (0x00098478) input_focus_pane_cp012_ParamLimits

0xc630,	// (0x0009aa62) ncim_query_entry_pane_t1_ParamLimits

0xbc31,	// (0x0009a063) scroll_pane_cp039_ParamLimits
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
	};

} // end of namespace AknLayoutScalable_Abrw_pnl4_apps_nhd4_lsc_tch_Large
