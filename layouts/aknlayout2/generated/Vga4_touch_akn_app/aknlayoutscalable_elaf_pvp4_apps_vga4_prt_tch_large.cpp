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
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pvp4_apps_vga4_prt_tch + 0x0007cfa2 };

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
0x1eca,	// (0x0007ee6c) Screen

0x1ed6,	// (0x0007ee78) application_window

0x1f16,	// (0x0007eeb8) area_bottom_pane_ParamLimits

0x1f16,	// (0x0007eeb8) area_bottom_pane

0x1f4b,	// (0x0007eeed) area_top_pane_ParamLimits

0x1f4b,	// (0x0007eeed) area_top_pane

0xa1c3,	// (0x00087165) call_video_uplink_pane_ParamLimits

0xa1c3,	// (0x00087165) call_video_uplink_pane

0x1fda,	// (0x0007ef7c) main_pane_ParamLimits

0x1fda,	// (0x0007ef7c) main_pane

0xc8b1,	// (0x00089853) context_pane

0x5677,	// (0x00082619) navi_pane

0x569b,	// (0x0008263d) popup_cale_events_window_ParamLimits

0x569b,	// (0x0008263d) popup_cale_events_window

0xc8c4,	// (0x00089866) popup_mup_playback_window

0x56b3,	// (0x00082655) signal_pane

0xa942,	// (0x000878e4) main_browser_pane

0xb452,	// (0x000883f4) main_burst_pane

0x5529,	// (0x000824cb) main_calc_pane

0xc854,	// (0x000897f6) main_cale_day_pane

0x26f4,	// (0x0007f696) main_cale_month_pane

0xc854,	// (0x000897f6) main_cale_week_pane

0xb452,	// (0x000883f4) main_call_pane

0xa5f4,	// (0x00087596) main_call_poc_pane

0xb452,	// (0x000883f4) main_camera_pane

0xb452,	// (0x000883f4) main_chi_dic_pane

0xb2da,	// (0x0008827c) main_clock_pane

0xa5f4,	// (0x00087596) main_fmradio_pane

0xb452,	// (0x000883f4) main_graph_messa_pane

0xa5f4,	// (0x00087596) main_help_pane

0xa942,	// (0x000878e4) main_im_pane

0xa84f,	// (0x000877f1) main_image_pane_ParamLimits

0xa84f,	// (0x000877f1) main_image_pane

0xa5f4,	// (0x00087596) main_location2_pane

0xb452,	// (0x000883f4) main_location_pane

0xa84f,	// (0x000877f1) main_messa_pane

0xa5f4,	// (0x00087596) main_mp2_pane

0xb452,	// (0x000883f4) main_mp_pane

0xa5f4,	// (0x00087596) main_msg_pane

0xa5f4,	// (0x00087596) main_mup_eq_pane

0xa5f4,	// (0x00087596) main_mup_pane

0xa942,	// (0x000878e4) main_notes_pane

0xa5f4,	// (0x00087596) main_pec_pane

0xa5f4,	// (0x00087596) main_phob_pane

0xa5f4,	// (0x00087596) main_pinb_pane

0xa5f4,	// (0x00087596) main_postcard_pane

0xa5f4,	// (0x00087596) main_qdial_pane

0xb452,	// (0x000883f4) main_skin_pane

0xa5f4,	// (0x00087596) main_smil2_pane

0xb452,	// (0x000883f4) main_smil_pane

0xb452,	// (0x000883f4) main_video_pane

0xb452,	// (0x000883f4) main_video_tele_pane

0xa84f,	// (0x000877f1) main_viewer_pane_ParamLimits

0xa84f,	// (0x000877f1) main_viewer_pane

0xb452,	// (0x000883f4) main_vorec_pane

0x5561,	// (0x00082503) popup_blid_sat_info_window_ParamLimits

0x5561,	// (0x00082503) popup_blid_sat_info_window

0x557b,	// (0x0008251d) popup_dyc_status_message_window_ParamLimits

0x557b,	// (0x0008251d) popup_dyc_status_message_window

0x558b,	// (0x0008252d) popup_grid_large_graphic_window_ParamLimits

0x558b,	// (0x0008252d) popup_grid_large_graphic_window

0x5603,	// (0x000825a5) popup_loc_request_window_ParamLimits

0x5603,	// (0x000825a5) popup_loc_request_window

0x564b,	// (0x000825ed) popup_wml_address_window_ParamLimits

0x564b,	// (0x000825ed) popup_wml_address_window

0x5401,	// (0x000823a3) call_muted_g1

0x50c0,	// (0x00082062) popup_call_audio_conf_window_ParamLimits

0x50c0,	// (0x00082062) popup_call_audio_conf_window

0x5411,	// (0x000823b3) popup_call_audio_first_window_ParamLimits

0x5411,	// (0x000823b3) popup_call_audio_first_window

0x5451,	// (0x000823f3) popup_call_audio_in_window_ParamLimits

0x5451,	// (0x000823f3) popup_call_audio_in_window

0x5475,	// (0x00082417) popup_call_audio_out_window_ParamLimits

0x5475,	// (0x00082417) popup_call_audio_out_window

0x5497,	// (0x00082439) popup_call_audio_second_window_ParamLimits

0x5497,	// (0x00082439) popup_call_audio_second_window

0x54c7,	// (0x00082469) popup_call_audio_wait_window_ParamLimits

0x54c7,	// (0x00082469) popup_call_audio_wait_window

0x54e8,	// (0x0008248a) popup_number_entry_window_ParamLimits

0x54e8,	// (0x0008248a) popup_number_entry_window

0xa1e1,	// (0x00087183) bg_popup_call_pane_cp05_ParamLimits

0xa1e1,	// (0x00087183) bg_popup_call_pane_cp05

0xa201,	// (0x000871a3) popup_number_entry_window_t1

0xa214,	// (0x000871b6) popup_number_entry_window_t2

0xa226,	// (0x000871c8) popup_number_entry_window_t3

0x0003,

0xf0cd,	// (0x0008c06f) popup_number_entry_window_t

0xa238,	// (0x000871da) text_title_cp2

0xa24b,	// (0x000871ed) bg_popup_call_pane_cp_ParamLimits

0xa24b,	// (0x000871ed) bg_popup_call_pane_cp

0xa259,	// (0x000871fb) call_thumbnail_pane

0xa261,	// (0x00087203) popup_call_audio_in_window_g1_ParamLimits

0xa261,	// (0x00087203) popup_call_audio_in_window_g1

0xa26d,	// (0x0008720f) popup_call_audio_in_window_g2_ParamLimits

0xa26d,	// (0x0008720f) popup_call_audio_in_window_g2

0xa279,	// (0x0008721b) popup_call_audio_in_window_g3_ParamLimits

0xa279,	// (0x0008721b) popup_call_audio_in_window_g3

0x0002,

0xf0d6,	// (0x0008c078) popup_call_audio_in_window_g_ParamLimits

0xf0d6,	// (0x0008c078) popup_call_audio_in_window_g

0xa285,	// (0x00087227) popup_call_audio_in_window_t1_ParamLimits

0xa285,	// (0x00087227) popup_call_audio_in_window_t1

0xa2a1,	// (0x00087243) popup_call_audio_in_window_t2_ParamLimits

0xa2a1,	// (0x00087243) popup_call_audio_in_window_t2

0xa2bd,	// (0x0008725f) popup_call_audio_in_window_t3_ParamLimits

0xa2bd,	// (0x0008725f) popup_call_audio_in_window_t3

0x0002,

0xf0dd,	// (0x0008c07f) popup_call_audio_in_window_t_ParamLimits

0xf0dd,	// (0x0008c07f) popup_call_audio_in_window_t

0xa24b,	// (0x000871ed) bg_popup_call_pane_cp01_ParamLimits

0xa24b,	// (0x000871ed) bg_popup_call_pane_cp01

0xa259,	// (0x000871fb) call_thumbnail_pane_cp02

0xa2d0,	// (0x00087272) call_type_pane_cp022

0xa2d8,	// (0x0008727a) popup_call_audio_out_window_g1_ParamLimits

0xa2d8,	// (0x0008727a) popup_call_audio_out_window_g1

0xa2ea,	// (0x0008728c) popup_call_audio_out_window_g2_ParamLimits

0xa2ea,	// (0x0008728c) popup_call_audio_out_window_g2

0xa2f6,	// (0x00087298) popup_call_audio_out_window_g3_ParamLimits

0xa2f6,	// (0x00087298) popup_call_audio_out_window_g3

0x0002,

0xf0e4,	// (0x0008c086) popup_call_audio_out_window_g_ParamLimits

0xf0e4,	// (0x0008c086) popup_call_audio_out_window_g

0xa308,	// (0x000872aa) popup_call_audio_out_window_t1_ParamLimits

0xa308,	// (0x000872aa) popup_call_audio_out_window_t1

0xa320,	// (0x000872c2) popup_call_audio_out_window_t2_ParamLimits

0xa320,	// (0x000872c2) popup_call_audio_out_window_t2

0x0001,

0xf0eb,	// (0x0008c08d) popup_call_audio_out_window_t_ParamLimits

0xf0eb,	// (0x0008c08d) popup_call_audio_out_window_t

0xa335,	// (0x000872d7) bg_popup_call_pane_ParamLimits

0xa335,	// (0x000872d7) bg_popup_call_pane

0x21de,	// (0x0007f180) call_thumbnail_pane_cp_ParamLimits

0x21de,	// (0x0007f180) call_thumbnail_pane_cp

0xa3b9,	// (0x0008735b) call_type_pane_cp01_ParamLimits

0xa3b9,	// (0x0008735b) call_type_pane_cp01

0xa3fd,	// (0x0008739f) popup_call_audio_first_window_g1_ParamLimits

0xa3fd,	// (0x0008739f) popup_call_audio_first_window_g1

0xa449,	// (0x000873eb) popup_call_audio_first_window_g2_ParamLimits

0xa449,	// (0x000873eb) popup_call_audio_first_window_g2

0x0001,

0xf0f0,	// (0x0008c092) popup_call_audio_first_window_g_ParamLimits

0xf0f0,	// (0x0008c092) popup_call_audio_first_window_g

0xa48d,	// (0x0008742f) popup_call_audio_first_window_t1_ParamLimits

0xa48d,	// (0x0008742f) popup_call_audio_first_window_t1

0xa539,	// (0x000874db) popup_call_audio_first_window_t4_ParamLimits

0xa539,	// (0x000874db) popup_call_audio_first_window_t4

0xa5c5,	// (0x00087567) popup_call_audio_first_window_t5_ParamLimits

0xa5c5,	// (0x00087567) popup_call_audio_first_window_t5

0x0002,

0xf0f5,	// (0x0008c097) popup_call_audio_first_window_t_ParamLimits

0xf0f5,	// (0x0008c097) popup_call_audio_first_window_t

0xa5f4,	// (0x00087596) bg_popup_call_pane_cp02

0xa5fe,	// (0x000875a0) call_type_pane_cp023

0xa606,	// (0x000875a8) popup_call_audio_wait_window_g1

0xa60e,	// (0x000875b0) popup_call_audio_wait_window_g2

0x0001,

0xf0fc,	// (0x0008c09e) popup_call_audio_wait_window_g

0xa616,	// (0x000875b8) popup_call_audio_wait_window_t3

0xa624,	// (0x000875c6) bg_popup_call_pane_cp03_ParamLimits

0xa624,	// (0x000875c6) bg_popup_call_pane_cp03

0xa684,	// (0x00087626) call_thumbnail_pane_cp011_ParamLimits

0xa684,	// (0x00087626) call_thumbnail_pane_cp011

0xa690,	// (0x00087632) call_type_pane_cp034_ParamLimits

0xa690,	// (0x00087632) call_type_pane_cp034

0xa6cc,	// (0x0008766e) popup_call_audio_second_window_g1_ParamLimits

0xa6cc,	// (0x0008766e) popup_call_audio_second_window_g1

0xa708,	// (0x000876aa) popup_call_audio_second_window_g2_ParamLimits

0xa708,	// (0x000876aa) popup_call_audio_second_window_g2

0x0001,

0xf101,	// (0x0008c0a3) popup_call_audio_second_window_g_ParamLimits

0xf101,	// (0x0008c0a3) popup_call_audio_second_window_g

0xa744,	// (0x000876e6) popup_call_audio_second_window_t1_ParamLimits

0xa744,	// (0x000876e6) popup_call_audio_second_window_t1

0xa7c5,	// (0x00087767) popup_call_audio_second_window_t2_ParamLimits

0xa7c5,	// (0x00087767) popup_call_audio_second_window_t2

0xa7fb,	// (0x0008779d) popup_call_audio_second_window_t3_ParamLimits

0xa7fb,	// (0x0008779d) popup_call_audio_second_window_t3

0x0002,

0xf106,	// (0x0008c0a8) popup_call_audio_second_window_t_ParamLimits

0xf106,	// (0x0008c0a8) popup_call_audio_second_window_t

0xa5f4,	// (0x00087596) bg_popup_call_pane_cp04

0xa831,	// (0x000877d3) list_conf_pane

0xa839,	// (0x000877db) popup_call_audio_conf_window_t1

0xa847,	// (0x000877e9) call_thumbnail_pane_g1

0xa84f,	// (0x000877f1) bg_pinb_pane_ParamLimits

0xa84f,	// (0x000877f1) bg_pinb_pane

0xa85d,	// (0x000877ff) find_pinb_pane

0xa866,	// (0x00087808) listscroll_pinb_pane_ParamLimits

0xa866,	// (0x00087808) listscroll_pinb_pane

0xa875,	// (0x00087817) pinb_bg_pane_g1

0x2202,	// (0x0007f1a4) pinb_bg_pane_g2

0x220e,	// (0x0007f1b0) pinb_bg_pane_g3

0x221a,	// (0x0007f1bc) pinb_bg_pane_g4

0x2226,	// (0x0007f1c8) pinb_bg_pane_g5

0x2232,	// (0x0007f1d4) pinb_bg_pane_g6

0x223d,	// (0x0007f1df) pinb_bg_pane_g7

0x2248,	// (0x0007f1ea) pinb_bg_pane_g8

0x2253,	// (0x0007f1f5) pinb_bg_pane_g9

0x225d,	// (0x0007f1ff) pinb_bg_pane_g10

0x0009,

0xf10d,	// (0x0008c0af) pinb_bg_pane_g

0x227a,	// (0x0007f21c) grid_pinb_pane

0x2285,	// (0x0007f227) list_pinb_pane

0x2290,	// (0x0007f232) scroll_pane_cp01_ParamLimits

0x2290,	// (0x0007f232) scroll_pane_cp01

0xa87f,	// (0x00087821) find_pinb_pane_g1_ParamLimits

0xa87f,	// (0x00087821) find_pinb_pane_g1

0xa897,	// (0x00087839) find_pinb_pane_t1

0xa8d7,	// (0x00087879) find_pinb_pane_t2

0x0001,

0xf127,	// (0x0008c0c9) find_pinb_pane_t

0xa8ec,	// (0x0008788e) input_focus_pane_cp01_ParamLimits

0xa8ec,	// (0x0008788e) input_focus_pane_cp01

0x22a2,	// (0x0007f244) cell_pinb_pane_ParamLimits

0x22a2,	// (0x0007f244) cell_pinb_pane

0x22c7,	// (0x0007f269) cell_pinb_pane_g1_ParamLimits

0x22c7,	// (0x0007f269) cell_pinb_pane_g1

0x22dc,	// (0x0007f27e) cell_pinb_pane_g2_ParamLimits

0x22dc,	// (0x0007f27e) cell_pinb_pane_g2

0xa8f8,	// (0x0008789a) cell_pinb_pane_g3_ParamLimits

0xa8f8,	// (0x0008789a) cell_pinb_pane_g3

0x0002,

0xf12c,	// (0x0008c0ce) cell_pinb_pane_g_ParamLimits

0xf12c,	// (0x0008c0ce) cell_pinb_pane_g

0xa5f4,	// (0x00087596) grid_highlight_pane_cp01

0x22e8,	// (0x0007f28a) list_pinb_item_pane_ParamLimits

0x22e8,	// (0x0007f28a) list_pinb_item_pane

0xa5f4,	// (0x00087596) list_highlight_pane_cp02

0x2306,	// (0x0007f2a8) list_pinb_item_pane_g1_ParamLimits

0x2306,	// (0x0007f2a8) list_pinb_item_pane_g1

0x2313,	// (0x0007f2b5) list_pinb_item_pane_g2_ParamLimits

0x2313,	// (0x0007f2b5) list_pinb_item_pane_g2

0x231f,	// (0x0007f2c1) list_pinb_item_pane_g3_ParamLimits

0x231f,	// (0x0007f2c1) list_pinb_item_pane_g3

0x2330,	// (0x0007f2d2) list_pinb_item_pane_g4_ParamLimits

0x2330,	// (0x0007f2d2) list_pinb_item_pane_g4

0x0003,

0xf133,	// (0x0008c0d5) list_pinb_item_pane_g_ParamLimits

0xf133,	// (0x0008c0d5) list_pinb_item_pane_g

0x233c,	// (0x0007f2de) list_pinb_item_pane_t1_ParamLimits

0x233c,	// (0x0007f2de) list_pinb_item_pane_t1

0x236d,	// (0x0007f30f) calc_display_pane

0x238b,	// (0x0007f32d) calc_paper_pane

0x23a7,	// (0x0007f349) grid_calc_pane

0xa5f4,	// (0x00087596) bg_list_pane_cp01

0x23d3,	// (0x0007f375) clock_g1

0x23db,	// (0x0007f37d) clock_g2

0x0001,

0xf13c,	// (0x0008c0de) clock_g

0x23e5,	// (0x0007f387) clock_t1_ParamLimits

0x23e5,	// (0x0007f387) clock_t1

0x23fa,	// (0x0007f39c) clock_t2_ParamLimits

0x23fa,	// (0x0007f39c) clock_t2

0x240c,	// (0x0007f3ae) clock_t3_ParamLimits

0x240c,	// (0x0007f3ae) clock_t3

0x241e,	// (0x0007f3c0) clock_t4_ParamLimits

0x241e,	// (0x0007f3c0) clock_t4

0x2430,	// (0x0007f3d2) clock_t5_ParamLimits

0x2430,	// (0x0007f3d2) clock_t5

0x2445,	// (0x0007f3e7) clock_t6_ParamLimits

0x2445,	// (0x0007f3e7) clock_t6

0x2457,	// (0x0007f3f9) clock_t7_ParamLimits

0x2457,	// (0x0007f3f9) clock_t7

0x2469,	// (0x0007f40b) clock_t8_ParamLimits

0x2469,	// (0x0007f40b) clock_t8

0x247f,	// (0x0007f421) clock_t9_ParamLimits

0x247f,	// (0x0007f421) clock_t9

0x0008,

0xf141,	// (0x0008c0e3) clock_t_ParamLimits

0xf141,	// (0x0008c0e3) clock_t

0xa904,	// (0x000878a6) popup_clock_analogue_window_cp02

0xa904,	// (0x000878a6) popup_clock_digital_window_cp01

0xa90c,	// (0x000878ae) listscroll_help_pane

0xa5f4,	// (0x00087596) phob_pre_status_pane

0xa916,	// (0x000878b8) grid_qdial_pane

0xa84f,	// (0x000877f1) listscroll_mce_pane

0xa84f,	// (0x000877f1) bg_notes_pane

0xa920,	// (0x000878c2) list_notes_pane

0x2495,	// (0x0007f437) scroll_pane_cp06

0xa92e,	// (0x000878d0) bg_calc_paper_pane

0x24a4,	// (0x0007f446) list_calc_pane

0xa942,	// (0x000878e4) bg_calc_display_pane

0x24be,	// (0x0007f460) calc_display_pane_t1

0x24d3,	// (0x0007f475) calc_display_pane_t2

0x24e8,	// (0x0007f48a) calc_display_pane_t3

0x0002,

0xf154,	// (0x0008c0f6) calc_display_pane_t

0x24fa,	// (0x0007f49c) cell_calc_pane_ParamLimits

0x24fa,	// (0x0007f49c) cell_calc_pane

0xa94e,	// (0x000878f0) bg_calc_paper_pane_g1

0xa95a,	// (0x000878fc) bg_calc_paper_pane_g2

0xa966,	// (0x00087908) bg_calc_paper_pane_g3

0xa972,	// (0x00087914) bg_calc_paper_pane_g4

0xa97e,	// (0x00087920) bg_calc_paper_pane_g5

0x2529,	// (0x0007f4cb) bg_calc_paper_pane_g6

0x253a,	// (0x0007f4dc) bg_calc_paper_pane_g7

0x254b,	// (0x0007f4ed) bg_calc_paper_pane_g8

0x0007,

0xf15b,	// (0x0008c0fd) bg_calc_paper_pane_g

0x255e,	// (0x0007f500) calc_bg_paper_pane_g9

0x2571,	// (0x0007f513) list_calc_item_pane_ParamLimits

0x2571,	// (0x0007f513) list_calc_item_pane

0xa98a,	// (0x0008792c) list_calc_item_pane_g1

0x2592,	// (0x0007f534) list_calc_item_pane_t1_ParamLimits

0x2592,	// (0x0007f534) list_calc_item_pane_t1

0x25a4,	// (0x0007f546) list_calc_item_pane_t2_ParamLimits

0x25a4,	// (0x0007f546) list_calc_item_pane_t2

0x0001,

0xf16c,	// (0x0008c10e) list_calc_item_pane_t_ParamLimits

0xf16c,	// (0x0008c10e) list_calc_item_pane_t

0xa997,	// (0x00087939) cell_calc_pane_g1

0xa9a1,	// (0x00087943) grid_highlight_pane_cp02

0xa9c3,	// (0x00087965) bg_calc_display_pane_g1

0x25d4,	// (0x0007f576) bg_calc_display_pane_g2

0xa9cc,	// (0x0008796e) bg_calc_display_pane_g3

0x0002,

0xf176,	// (0x0008c118) bg_calc_display_pane_g

0x25de,	// (0x0007f580) cell_qdial_pane_ParamLimits

0x25de,	// (0x0007f580) cell_qdial_pane

0x25f4,	// (0x0007f596) cell_qdial_pane_g1_ParamLimits

0x25f4,	// (0x0007f596) cell_qdial_pane_g1

0x2601,	// (0x0007f5a3) cell_qdial_pane_g2_ParamLimits

0x2601,	// (0x0007f5a3) cell_qdial_pane_g2

0xa9d5,	// (0x00087977) cell_qdial_pane_g3_ParamLimits

0xa9d5,	// (0x00087977) cell_qdial_pane_g3

0x0003,

0xf17d,	// (0x0008c11f) cell_qdial_pane_g_ParamLimits

0xf17d,	// (0x0008c11f) cell_qdial_pane_g

0x261f,	// (0x0007f5c1) cell_qdial_pane_t1_ParamLimits

0x261f,	// (0x0007f5c1) cell_qdial_pane_t1

0x2637,	// (0x0007f5d9) cell_qdial_pane_t2_ParamLimits

0x2637,	// (0x0007f5d9) cell_qdial_pane_t2

0x264a,	// (0x0007f5ec) cell_qdial_pane_t3_ParamLimits

0x264a,	// (0x0007f5ec) cell_qdial_pane_t3

0x0002,

0xf186,	// (0x0008c128) cell_qdial_pane_t_ParamLimits

0xf186,	// (0x0008c128) cell_qdial_pane_t

0xa5f4,	// (0x00087596) grid_highlight_pane_cp04

0xa9e1,	// (0x00087983) thumbnail_qdial_pane_ParamLimits

0xa9e1,	// (0x00087983) thumbnail_qdial_pane

0xaa3d,	// (0x000879df) list_help_pane

0xaa46,	// (0x000879e8) scroll_pane_cp02

0x265d,	// (0x0007f5ff) help_list_pane_t1_ParamLimits

0x265d,	// (0x0007f5ff) help_list_pane_t1

0x2684,	// (0x0007f626) bg_notes_pane_g2

0x268c,	// (0x0007f62e) bg_notes_pane_g3

0x2694,	// (0x0007f636) notes_bg_pane_g1

0x269c,	// (0x0007f63e) notes_bg_pane_g4

0x26a4,	// (0x0007f646) notes_bg_pane_g5

0x26ac,	// (0x0007f64e) notes_bg_pane_g6

0x26b4,	// (0x0007f656) notes_bg_pane_g7

0x26bc,	// (0x0007f65e) notes_bg_pane_g8

0x26c4,	// (0x0007f666) notes_bg_pane_g9

0x0006,

0xf1a4,	// (0x0008c146) notes_bg_pane_g

0x26cc,	// (0x0007f66e) list_notes_text_pane_ParamLimits

0x26cc,	// (0x0007f66e) list_notes_text_pane

0xaa4f,	// (0x000879f1) list_notes_text_pane_g1

0x0bc7,	// (0x0007db69) list_notes_text_pane_t1

0x26f4,	// (0x0007f696) listscroll_cale_week_pane

0x272a,	// (0x0007f6cc) bg_cale_heading_pane

0xaa69,	// (0x00087a0b) bg_cale_pane_cp01

0x2753,	// (0x0007f6f5) cale_week_corner_pane

0x2772,	// (0x0007f714) cale_week_day_heading_pane

0x27a0,	// (0x0007f742) cale_week_scroll_pane_g1

0x27c4,	// (0x0007f766) cale_week_scroll_pane_g2

0x27dc,	// (0x0007f77e) cale_week_scroll_pane_g3

0x27f4,	// (0x0007f796) cale_week_scroll_pane_g4

0x280c,	// (0x0007f7ae) cale_week_scroll_pane_g5

0x2824,	// (0x0007f7c6) cale_week_scroll_pane_g6

0x2844,	// (0x0007f7e6) cale_week_scroll_pane_g7

0x2864,	// (0x0007f806) cale_week_scroll_pane_g8

0x2884,	// (0x0007f826) cale_week_scroll_pane_g9

0x28a1,	// (0x0007f843) cale_week_scroll_pane_g10

0x28be,	// (0x0007f860) cale_week_scroll_pane_g11

0x28db,	// (0x0007f87d) cale_week_scroll_pane_g12

0x28f8,	// (0x0007f89a) cale_week_scroll_pane_g13

0x291d,	// (0x0007f8bf) cale_week_scroll_pane_g14

0x2946,	// (0x0007f8e8) cale_week_scroll_pane_g15

0x000e,

0xf1b3,	// (0x0008c155) cale_week_scroll_pane_g

0x296f,	// (0x0007f911) cale_week_time_pane

0x298f,	// (0x0007f931) grid_cale_week_pane

0xaa99,	// (0x00087a3b) scroll_pane_cp08

0x29c2,	// (0x0007f964) cell_cale_week_pane_ParamLimits

0x29c2,	// (0x0007f964) cell_cale_week_pane

0x2a4d,	// (0x0007f9ef) cale_week_day_heading_pane_t1

0x2a95,	// (0x0007fa37) cale_week_day_heading_pane_t2

0x2ae2,	// (0x0007fa84) cale_week_day_heading_pane_t3

0x2b2f,	// (0x0007fad1) cale_week_day_heading_pane_t4

0x2b7c,	// (0x0007fb1e) cale_week_day_heading_pane_t5

0x2bc9,	// (0x0007fb6b) cale_week_day_heading_pane_t6

0x2c16,	// (0x0007fbb8) cale_week_day_heading_pane_t7

0x0006,

0xf1d2,	// (0x0008c174) cale_week_day_heading_pane_t

0xaabb,	// (0x00087a5d) bg_cale_side_pane

0x2c5e,	// (0x0007fc00) cale_week_time_pane_t1

0x2ca2,	// (0x0007fc44) cale_week_time_pane_t2

0x2ce6,	// (0x0007fc88) cale_week_time_pane_t3

0x2d2a,	// (0x0007fccc) cale_week_time_pane_t4

0x2d6e,	// (0x0007fd10) cale_week_time_pane_t5

0x2db2,	// (0x0007fd54) cale_week_time_pane_t6

0x2df6,	// (0x0007fd98) cale_week_time_pane_t7

0x2e42,	// (0x0007fde4) cale_week_time_pane_t8

0x0007,

0xf1e1,	// (0x0008c183) cale_week_time_pane_t

0x2e90,	// (0x0007fe32) cell_cale_week_pane_g2

0x2eaf,	// (0x0007fe51) cell_cale_week_pane_g3_ParamLimits

0x2eaf,	// (0x0007fe51) cell_cale_week_pane_g3

0xaac9,	// (0x00087a6b) grid_highlight_pane_cp07

0xaad1,	// (0x00087a73) listscroll_gms_pane

0xaadb,	// (0x00087a7d) grid_gms_pane

0xaae4,	// (0x00087a86) listscroll_gms_pane_g1

0xaaec,	// (0x00087a8e) listscroll_gms_pane_g2

0x0001,

0xf1f2,	// (0x0008c194) listscroll_gms_pane_g

0x2ec7,	// (0x0007fe69) scroll_pane_cp010

0x2ed2,	// (0x0007fe74) cell_gms_pane_ParamLimits

0x2ed2,	// (0x0007fe74) cell_gms_pane

0x2ee5,	// (0x0007fe87) cell_gms_pane_g1

0xaaf4,	// (0x00087a96) cell_gms_pane_g2

0xaafc,	// (0x00087a9e) cell_gms_pane_g3

0xab05,	// (0x00087aa7) cell_gms_pane_g4

0x0003,

0xf1f7,	// (0x0008c199) cell_gms_pane_g

0xab0e,	// (0x00087ab0) grid_highlight_pane_cp09

0x53a9,	// (0x0008234b) phob_pre_status_pane_g1

0x53b1,	// (0x00082353) phob_pre_status_pane_g2

0x53b9,	// (0x0008235b) phob_pre_status_pane_g3

0x53c1,	// (0x00082363) phob_pre_status_pane_g4

0x0004,

0xf5e6,	// (0x0008c588) phob_pre_status_pane_g

0x53d1,	// (0x00082373) phob_pre_status_pane_t1

0x53e1,	// (0x00082383) phob_pre_status_pane_t2

0x53f1,	// (0x00082393) phob_pre_status_pane_t3

0x0002,

0xf5f1,	// (0x0008c593) phob_pre_status_pane_t

0xa5f4,	// (0x00087596) bg_list_pane_cp05

0x2ef5,	// (0x0007fe97) grid_vorec_pane

0x2f01,	// (0x0007fea3) vorec_t1

0x2f0f,	// (0x0007feb1) vorec_t2

0x2f1d,	// (0x0007febf) vorec_t3

0x2f2b,	// (0x0007fecd) vorec_t4

0x2f39,	// (0x0007fedb) vorec_t5

0x2f47,	// (0x0007fee9) vorec_t6

0x0006,

0xf200,	// (0x0008c1a2) vorec_t

0x2f63,	// (0x0007ff05) wait_bar_pane_cp01

0x2f6b,	// (0x0007ff0d) cell_vorec_pane_ParamLimits

0x2f6b,	// (0x0007ff0d) cell_vorec_pane

0x2f80,	// (0x0007ff22) cell_vorec_pane_g1

0xa5f4,	// (0x00087596) grid_highlight_pane_cp05

0x2f98,	// (0x0007ff3a) cams_zoom_pane

0x2fa4,	// (0x0007ff46) image_vga_pane

0x2fb3,	// (0x0007ff55) main_camera_pane_g1

0x2fc1,	// (0x0007ff63) main_camera_pane_g2

0x2fcd,	// (0x0007ff6f) main_camera_pane_g3

0x2fdb,	// (0x0007ff7d) main_camera_pane_g4

0x2fe9,	// (0x0007ff8b) main_camera_pane_g5

0x2ff7,	// (0x0007ff99) main_camera_pane_g6

0x3005,	// (0x0007ffa7) main_camera_pane_g7

0x0007,

0xf20f,	// (0x0008c1b1) main_camera_pane_g

0x3013,	// (0x0007ffb5) main_camera_pane_t1

0x3025,	// (0x0007ffc7) main_camera_pane_t2

0x0001,

0xf220,	// (0x0008c1c2) main_camera_pane_t

0x3048,	// (0x0007ffea) cams_zoom_pane_cp_ParamLimits

0x3048,	// (0x0007ffea) cams_zoom_pane_cp

0x306c,	// (0x0008000e) image_cif_pane_ParamLimits

0x306c,	// (0x0008000e) image_cif_pane

0x308a,	// (0x0008002c) image_subqcif_pane

0x3094,	// (0x00080036) main_video_pane_g1_ParamLimits

0x3094,	// (0x00080036) main_video_pane_g1

0x30b4,	// (0x00080056) main_video_pane_g2_ParamLimits

0x30b4,	// (0x00080056) main_video_pane_g2

0x30e4,	// (0x00080086) main_video_pane_g3_ParamLimits

0x30e4,	// (0x00080086) main_video_pane_g3

0x310d,	// (0x000800af) main_video_pane_g4_ParamLimits

0x310d,	// (0x000800af) main_video_pane_g4

0x3136,	// (0x000800d8) main_video_pane_g5_ParamLimits

0x3136,	// (0x000800d8) main_video_pane_g5

0xab22,	// (0x00087ac4) main_video_pane_g6_ParamLimits

0xab22,	// (0x00087ac4) main_video_pane_g6

0x0006,

0xf225,	// (0x0008c1c7) main_video_pane_g_ParamLimits

0xf225,	// (0x0008c1c7) main_video_pane_g

0x3158,	// (0x000800fa) main_video_pane_t1_ParamLimits

0x3158,	// (0x000800fa) main_video_pane_t1

0xab3c,	// (0x00087ade) cams_zoom_pane_g1

0xab45,	// (0x00087ae7) cams_zoom_pane_g2

0xab4e,	// (0x00087af0) cams_zoom_pane_g3

0xab57,	// (0x00087af9) cams_zoom_pane_g4

0x0003,

0xf234,	// (0x0008c1d6) cams_zoom_pane_g

0x31a2,	// (0x00080144) grid_cams_pane

0x31b0,	// (0x00080152) linegrid_cams_pane

0x31bc,	// (0x0008015e) cell_cams_pane_ParamLimits

0x31bc,	// (0x0008015e) cell_cams_pane

0xab60,	// (0x00087b02) cams_burst_image_pane

0xab68,	// (0x00087b0a) cell_cams_pane_g1

0xa5f4,	// (0x00087596) grid_highlight_pane_cp03

0xa997,	// (0x00087939) mp_bg_pane_g1

0xa5f4,	// (0x00087596) bg_list_pane_cp03

0xc777,	// (0x00089719) bg_mp_pane

0xc77f,	// (0x00089721) grid_mp_pane

0xc787,	// (0x00089729) media_player_g1

0xc791,	// (0x00089733) media_player_t1

0xc79f,	// (0x00089741) media_player_t2

0xc7ad,	// (0x0008974f) media_player_t3

0xc7bb,	// (0x0008975d) media_player_t4

0xc7c9,	// (0x0008976b) media_player_t5

0xc7d7,	// (0x00089779) media_player_t6

0xc7e5,	// (0x00089787) media_player_t7

0x0006,

0xf5d0,	// (0x0008c572) media_player_t

0xc7f3,	// (0x00089795) wait_bar_pane_cp02

0xf5b5,	// (0x0008c557) main_usb_pane_t

0x53a0,	// (0x00082342) cell_mp_pane

0xa997,	// (0x00087939) cell_mp_pane_g1

0xa5f4,	// (0x00087596) grid_highlight_pane_cp06

0xab70,	// (0x00087b12) grid_skin_colour_pane

0xab78,	// (0x00087b1a) list_highlight_pane_cp03

0x31e9,	// (0x0008018b) skin_g1

0xab80,	// (0x00087b22) skin_t1

0xab8f,	// (0x00087b31) skin_t2

0x0001,

0xf269,	// (0x0008c20b) skin_t

0x31f3,	// (0x00080195) cell_skin_colour_pane_ParamLimits

0x31f3,	// (0x00080195) cell_skin_colour_pane

0xab9d,	// (0x00087b3f) cell_skin_colour_pane_g1

0x3273,	// (0x00080215) call_video_g1_ParamLimits

0x3273,	// (0x00080215) call_video_g1

0x3283,	// (0x00080225) call_video_g2_ParamLimits

0x3283,	// (0x00080225) call_video_g2

0x0001,

0xf26e,	// (0x0008c210) call_video_g_ParamLimits

0xf26e,	// (0x0008c210) call_video_g

0x32d3,	// (0x00080275) call_video_uplink_pane_cp1_ParamLimits

0x32d3,	// (0x00080275) call_video_uplink_pane_cp1

0xabaf,	// (0x00087b51) call_video_uplink_pane_cp2

0x33a1,	// (0x00080343) video_down_crop_pane_ParamLimits

0x33a1,	// (0x00080343) video_down_crop_pane

0x3493,	// (0x00080435) video_down_pane_ParamLimits

0x3493,	// (0x00080435) video_down_pane

0xabb7,	// (0x00087b59) video_down_subqcif_pane_ParamLimits

0xabb7,	// (0x00087b59) video_down_subqcif_pane

0xabd1,	// (0x00087b73) video_down_subqcif_pane_cp_ParamLimits

0xabd1,	// (0x00087b73) video_down_subqcif_pane_cp

0xabf9,	// (0x00087b9b) im_reading_pane_ParamLimits

0xabf9,	// (0x00087b9b) im_reading_pane

0x35b0,	// (0x00080552) im_writing_pane_ParamLimits

0x35b0,	// (0x00080552) im_writing_pane

0x35ce,	// (0x00080570) im_reading_pane_t1

0xac13,	// (0x00087bb5) list_im_pane

0xac24,	// (0x00087bc6) scroll_pane_cp07

0x3610,	// (0x000805b2) im_writing_pane_t1_ParamLimits

0x3610,	// (0x000805b2) im_writing_pane_t1

0xac3d,	// (0x00087bdf) im_writing_pane_t2_ParamLimits

0xac3d,	// (0x00087bdf) im_writing_pane_t2

0x0001,

0xf278,	// (0x0008c21a) im_writing_pane_t_ParamLimits

0xf278,	// (0x0008c21a) im_writing_pane_t

0xa5f4,	// (0x00087596) input_focus_pane_cp04

0xa5f4,	// (0x00087596) input_focus_pane_cp05

0x3622,	// (0x000805c4) list_im_single_pane_ParamLimits

0x3622,	// (0x000805c4) list_im_single_pane

0x363b,	// (0x000805dd) list_single_im_pane_t1

0x5364,	// (0x00082306) blid_accuracy_pane

0x536c,	// (0x0008230e) blid_compass_pane

0x5376,	// (0x00082318) main_location_t1

0x5384,	// (0x00082326) main_location_t2

0x5392,	// (0x00082334) main_location_t3

0x0002,

0xf5df,	// (0x0008c581) main_location_t

0xa5f4,	// (0x00087596) aid_levels_location

0xa997,	// (0x00087939) blid_accuracy_pane_g1

0xa997,	// (0x00087939) blid_accuracy_pane_g2

0x0001,

0xf2da,	// (0x0008c27c) blid_accuracy_pane_g

0xac85,	// (0x00087c27) wml_content_pane

0xacc3,	// (0x00087c65) wml_button_pane_ParamLimits

0xacc3,	// (0x00087c65) wml_button_pane

0x364a,	// (0x000805ec) wml_list_single_large_pane_ParamLimits

0x364a,	// (0x000805ec) wml_list_single_large_pane

0x366c,	// (0x0008060e) wml_list_single_medium_pane_ParamLimits

0x366c,	// (0x0008060e) wml_list_single_medium_pane

0x368f,	// (0x00080631) wml_list_single_small_pane_ParamLimits

0x368f,	// (0x00080631) wml_list_single_small_pane

0xacd7,	// (0x00087c79) wml_selection_box_pane_ParamLimits

0xacd7,	// (0x00087c79) wml_selection_box_pane

0xacea,	// (0x00087c8c) wml_list_single_pane_t1

0xacf9,	// (0x00087c9b) wml_list_single_medium_pane_t1

0xad08,	// (0x00087caa) wml_list_single_large_pane_t1

0xad17,	// (0x00087cb9) input_focus_pane_cp02_ParamLimits

0xad17,	// (0x00087cb9) input_focus_pane_cp02

0xad2a,	// (0x00087ccc) wml_selection_box_pane_g1

0xad33,	// (0x00087cd5) wml_selection_box_pane_t1_ParamLimits

0xad33,	// (0x00087cd5) wml_selection_box_pane_t1

0xa84f,	// (0x000877f1) bg_wml_button_pane_ParamLimits

0xa84f,	// (0x000877f1) bg_wml_button_pane

0xad4b,	// (0x00087ced) wml_button_pane_g1

0xad53,	// (0x00087cf5) wml_button_pane_t1

0xad4b,	// (0x00087ced) wml_button_bg_pane_g1

0xad63,	// (0x00087d05) wml_button_bg_pane_g2

0xad6b,	// (0x00087d0d) wml_button_bg_pane_g3

0xad73,	// (0x00087d15) wml_button_bg_pane_g4

0xad7b,	// (0x00087d1d) wml_button_bg_pane_g5

0xad83,	// (0x00087d25) wml_button_bg_pane_g6

0xad8b,	// (0x00087d2d) wml_button_bg_pane_g7

0xad93,	// (0x00087d35) wml_button_bg_pane_g8

0xad9b,	// (0x00087d3d) wml_button_bg_pane_g9

0x0008,

0xf27d,	// (0x0008c21f) wml_button_bg_pane_g

0x36b7,	// (0x00080659) bg_list_pane_cp02

0xada3,	// (0x00087d45) mce_header_pane_ParamLimits

0xada3,	// (0x00087d45) mce_header_pane

0xadb9,	// (0x00087d5b) mce_icon_pane

0xadb9,	// (0x00087d5b) mce_image_pane

0xadc2,	// (0x00087d64) mce_text_pane_ParamLimits

0xadc2,	// (0x00087d64) mce_text_pane

0x36c1,	// (0x00080663) scroll_pane_cp03

0xacbb,	// (0x00087c5d) scroll_pane_cp04

0xadd5,	// (0x00087d77) scroll_pane_cp05_ParamLimits

0xadd5,	// (0x00087d77) scroll_pane_cp05

0x36cb,	// (0x0008066d) mce_header_field_pane_ParamLimits

0x36cb,	// (0x0008066d) mce_header_field_pane

0x36ed,	// (0x0008068f) mce_header_field_pane_2_ParamLimits

0x36ed,	// (0x0008068f) mce_header_field_pane_2

0x3703,	// (0x000806a5) mce_header_field_pane_3

0x370b,	// (0x000806ad) list_single_mce_message_pane_ParamLimits

0x370b,	// (0x000806ad) list_single_mce_message_pane

0x372a,	// (0x000806cc) list_single_mce_smart_pane_ParamLimits

0x372a,	// (0x000806cc) list_single_mce_smart_pane

0xade1,	// (0x00087d83) input_focus_pane_cp03

0xadea,	// (0x00087d8c) list_header_data_pane

0x3754,	// (0x000806f6) mce_header_field_pane_t1

0x3764,	// (0x00080706) list_single_mce_header_pane_ParamLimits

0x3764,	// (0x00080706) list_single_mce_header_pane

0xadf2,	// (0x00087d94) list_single_mce_header_pane_t1

0xae01,	// (0x00087da3) list_single_mce_message_pane_g1

0xae09,	// (0x00087dab) list_single_mce_message_pane_t1

0x37a8,	// (0x0008074a) bg_cale_heading_pane_cp01_ParamLimits

0x37a8,	// (0x0008074a) bg_cale_heading_pane_cp01

0xae17,	// (0x00087db9) bg_cale_pane_cp02_ParamLimits

0xae17,	// (0x00087db9) bg_cale_pane_cp02

0x37ef,	// (0x00080791) cale_month_corner_pane

0x380e,	// (0x000807b0) cale_month_day_heading_pane_ParamLimits

0x380e,	// (0x000807b0) cale_month_day_heading_pane

0x3865,	// (0x00080807) cale_month_pane_g1_ParamLimits

0x3865,	// (0x00080807) cale_month_pane_g1

0x38a1,	// (0x00080843) cale_month_pane_g2_ParamLimits

0x38a1,	// (0x00080843) cale_month_pane_g2

0x38d9,	// (0x0008087b) cale_month_pane_g3_ParamLimits

0x38d9,	// (0x0008087b) cale_month_pane_g3

0x392d,	// (0x000808cf) cale_month_pane_g4_ParamLimits

0x392d,	// (0x000808cf) cale_month_pane_g4

0x3981,	// (0x00080923) cale_month_pane_g5_ParamLimits

0x3981,	// (0x00080923) cale_month_pane_g5

0x39d5,	// (0x00080977) cale_month_pane_g6_ParamLimits

0x39d5,	// (0x00080977) cale_month_pane_g6

0x3a39,	// (0x000809db) cale_month_pane_g7_ParamLimits

0x3a39,	// (0x000809db) cale_month_pane_g7

0x3a9d,	// (0x00080a3f) cale_month_pane_g8_ParamLimits

0x3a9d,	// (0x00080a3f) cale_month_pane_g8

0x3b01,	// (0x00080aa3) cale_month_pane_g9_ParamLimits

0x3b01,	// (0x00080aa3) cale_month_pane_g9

0x3b59,	// (0x00080afb) cale_month_pane_g10_ParamLimits

0x3b59,	// (0x00080afb) cale_month_pane_g10

0x3ba7,	// (0x00080b49) cale_month_pane_g11_ParamLimits

0x3ba7,	// (0x00080b49) cale_month_pane_g11

0x3bf3,	// (0x00080b95) cale_month_pane_g12_ParamLimits

0x3bf3,	// (0x00080b95) cale_month_pane_g12

0x3c43,	// (0x00080be5) cale_month_pane_g13_ParamLimits

0x3c43,	// (0x00080be5) cale_month_pane_g13

0x000c,

0xf290,	// (0x0008c232) cale_month_pane_g_ParamLimits

0xf290,	// (0x0008c232) cale_month_pane_g

0x3c93,	// (0x00080c35) cale_month_week_pane

0x3cb3,	// (0x00080c55) grid_cale_month_pane_ParamLimits

0x3cb3,	// (0x00080c55) grid_cale_month_pane

0x3d01,	// (0x00080ca3) cale_month_day_heading_pane_t1

0x3d83,	// (0x00080d25) cale_month_day_heading_pane_t2

0x3e10,	// (0x00080db2) cale_month_day_heading_pane_t3

0x3e9d,	// (0x00080e3f) cale_month_day_heading_pane_t4

0x3f2a,	// (0x00080ecc) cale_month_day_heading_pane_t5

0x3fbf,	// (0x00080f61) cale_month_day_heading_pane_t6

0x405c,	// (0x00080ffe) cale_month_day_heading_pane_t7

0x0006,

0xf2ab,	// (0x0008c24d) cale_month_day_heading_pane_t

0xaabb,	// (0x00087a5d) bg_cale_side_pane_cp01

0x40f9,	// (0x0008109b) cale_month_week_pane_t1

0x4112,	// (0x000810b4) cale_month_week_pane_t2

0x412b,	// (0x000810cd) cale_month_week_pane_t3

0x4144,	// (0x000810e6) cale_month_week_pane_t4

0x415d,	// (0x000810ff) cale_month_week_pane_t5

0x4178,	// (0x0008111a) cale_month_week_pane_t6

0x0005,

0xf2ba,	// (0x0008c25c) cale_month_week_pane_t

0x4199,	// (0x0008113b) cell_cale_month_pane_ParamLimits

0x4199,	// (0x0008113b) cell_cale_month_pane

0x42bb,	// (0x0008125d) cell_cale_month_pane_g1

0x42c7,	// (0x00081269) cell_cale_month_pane_t1_ParamLimits

0x42c7,	// (0x00081269) cell_cale_month_pane_t1

0xaac9,	// (0x00087a6b) grid_highlight_pane_cp08

0xa997,	// (0x00087939) main_smil_g1

0x42e7,	// (0x00081289) smil_status_pane

0xae56,	// (0x00087df8) smil_text_pane

0xc695,	// (0x00089637) bg_popup_call3_rect_pane_g8

0xc69d,	// (0x0008963f) bg_popup_call3_rect_pane_g9

0x0008,

0xf573,	// (0x0008c515) bg_popup_call3_rect_pane_g

0xc92b,	// (0x000898cd) smil_status_volume_pane_g1

0x42fa,	// (0x0008129c) smil_status_pane_t1

0x5758,	// (0x000826fa) volume_smil_pane

0xae60,	// (0x00087e02) list_smil_text_pane

0x4311,	// (0x000812b3) scroll_pane_cp011

0x431c,	// (0x000812be) smil_text_list_pane_t1_ParamLimits

0x431c,	// (0x000812be) smil_text_list_pane_t1

0x436e,	// (0x00081310) aid_volume_smil_ParamLimits

0x436e,	// (0x00081310) aid_volume_smil

0xa997,	// (0x00087939) smil_volume_pane_g1

0xa997,	// (0x00087939) smil_volume_pane_g2

0x0001,

0xf2da,	// (0x0008c27c) smil_volume_pane_g

0x26f4,	// (0x0007f696) listscroll_cale_day_pane

0xae6a,	// (0x00087e0c) bg_cale_pane

0xae82,	// (0x00087e24) list_cale_pane

0xaea5,	// (0x00087e47) scroll_pane_cp09

0xaeb6,	// (0x00087e58) cale_bg_pane_g1

0xaebe,	// (0x00087e60) cale_bg_pane_g2

0xaec6,	// (0x00087e68) cale_bg_pane_g3

0xaece,	// (0x00087e70) cale_bg_pane_g4

0xaed6,	// (0x00087e78) cale_bg_pane_g5

0xaede,	// (0x00087e80) cale_bg_pane_g6

0xaee6,	// (0x00087e88) cale_bg_pane_g7

0xaeee,	// (0x00087e90) cale_bg_pane_g8

0xaef6,	// (0x00087e98) cale_bg_pane_g9

0x0008,

0xf2df,	// (0x0008c281) cale_bg_pane_g

0x4390,	// (0x00081332) list_cale_time_pane_ParamLimits

0x4390,	// (0x00081332) list_cale_time_pane

0xaf06,	// (0x00087ea8) list_cale_time_pane_g1_ParamLimits

0xaf06,	// (0x00087ea8) list_cale_time_pane_g1

0xaf12,	// (0x00087eb4) list_cale_time_pane_g2_ParamLimits

0xaf12,	// (0x00087eb4) list_cale_time_pane_g2

0x43a4,	// (0x00081346) list_cale_time_pane_g3_ParamLimits

0x43a4,	// (0x00081346) list_cale_time_pane_g3

0x43b2,	// (0x00081354) list_cale_time_pane_g4_ParamLimits

0x43b2,	// (0x00081354) list_cale_time_pane_g4

0x43c0,	// (0x00081362) list_cale_time_pane_g5_ParamLimits

0x43c0,	// (0x00081362) list_cale_time_pane_g5

0x0005,

0xf2f2,	// (0x0008c294) list_cale_time_pane_g_ParamLimits

0xf2f2,	// (0x0008c294) list_cale_time_pane_g

0xaf2c,	// (0x00087ece) list_cale_time_pane_t1_ParamLimits

0xaf2c,	// (0x00087ece) list_cale_time_pane_t1

0xaf54,	// (0x00087ef6) list_cale_time_pane_t2_ParamLimits

0xaf54,	// (0x00087ef6) list_cale_time_pane_t2

0x46b8,	// (0x0008165a) aid_blid_cardinal_pane

0x46fa,	// (0x0008169c) compass_pane_t4

0xaf7c,	// (0x00087f1e) list_cale_time_pane_t4_ParamLimits

0xaf7c,	// (0x00087f1e) list_cale_time_pane_t4

0x4708,	// (0x000816aa) compass_pane_t5

0x4718,	// (0x000816ba) compass_pane_t6

0x4726,	// (0x000816c8) compass_pane_t7

0xb3a4,	// (0x00088346) navi_pane_cc_t1

0xb4f9,	// (0x0008849b) aid_phob_thumbnail_center_pane

0x4e60,	// (0x00081e02) main_postcard_pane_g4_ParamLimits

0x0002,

0xf2ff,	// (0x0008c2a1) list_cale_time_pane_t_ParamLimits

0xf2ff,	// (0x0008c2a1) list_cale_time_pane_t

0xa24b,	// (0x000871ed) bg_popup_window_pane_cp02_ParamLimits

0xa24b,	// (0x000871ed) bg_popup_window_pane_cp02

0xafa4,	// (0x00087f46) heading_pane_cp01_ParamLimits

0xafa4,	// (0x00087f46) heading_pane_cp01

0xafb0,	// (0x00087f52) loc_req_pane_ParamLimits

0xafb0,	// (0x00087f52) loc_req_pane

0xafc0,	// (0x00087f62) loc_type_pane_ParamLimits

0xafc0,	// (0x00087f62) loc_type_pane

0xafd2,	// (0x00087f74) loc_type_pane_t1_ParamLimits

0xafd2,	// (0x00087f74) loc_type_pane_t1

0xafe4,	// (0x00087f86) loc_type_pane_t2_ParamLimits

0xafe4,	// (0x00087f86) loc_type_pane_t2

0xaff6,	// (0x00087f98) loc_type_pane_t3_ParamLimits

0xaff6,	// (0x00087f98) loc_type_pane_t3

0x0002,

0xf306,	// (0x0008c2a8) loc_type_pane_t_ParamLimits

0xf306,	// (0x0008c2a8) loc_type_pane_t

0xb008,	// (0x00087faa) list_loc_req_pane

0xb012,	// (0x00087fb4) scroll_pane_cp012

0x43ce,	// (0x00081370) list_single_loc_request_popup_menu_pane_ParamLimits

0x43ce,	// (0x00081370) list_single_loc_request_popup_menu_pane

0xb01d,	// (0x00087fbf) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xb01d,	// (0x00087fbf) list_single_loc_request_popup_menu_pane_g1

0xb029,	// (0x00087fcb) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xb029,	// (0x00087fcb) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf30d,	// (0x0008c2af) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf30d,	// (0x0008c2af) list_single_loc_request_popup_menu_pane_g

0xb035,	// (0x00087fd7) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xb035,	// (0x00087fd7) list_single_loc_request_popup_menu_pane_t1

0x43e0,	// (0x00081382) bg_popup_window_pane_cp03_ParamLimits

0x43e0,	// (0x00081382) bg_popup_window_pane_cp03

0x43ee,	// (0x00081390) heading_loc_req_pane_ParamLimits

0x43ee,	// (0x00081390) heading_loc_req_pane

0x43fa,	// (0x0008139c) popup_dyc_status_message_window_g1_ParamLimits

0x43fa,	// (0x0008139c) popup_dyc_status_message_window_g1

0x4406,	// (0x000813a8) popup_dyc_status_message_window_t1_ParamLimits

0x4406,	// (0x000813a8) popup_dyc_status_message_window_t1

0x4418,	// (0x000813ba) popup_dyc_status_message_window_t2_ParamLimits

0x4418,	// (0x000813ba) popup_dyc_status_message_window_t2

0x442a,	// (0x000813cc) popup_dyc_status_message_window_t3_ParamLimits

0x442a,	// (0x000813cc) popup_dyc_status_message_window_t3

0x0002,

0xf312,	// (0x0008c2b4) popup_dyc_status_message_window_t_ParamLimits

0xf312,	// (0x0008c2b4) popup_dyc_status_message_window_t

0xa5f4,	// (0x00087596) bg_heading_pane_cp01

0xb04b,	// (0x00087fed) heading_loc_req_pane_g1

0xb053,	// (0x00087ff5) heading_loc_req_pane_g2

0xb05b,	// (0x00087ffd) heading_loc_req_pane_g3

0x0002,

0xf319,	// (0x0008c2bb) heading_loc_req_pane_g

0xb063,	// (0x00088005) heading_loc_req_pane_t1

0xb073,	// (0x00088015) bg_popup_sub_pane_cp01_ParamLimits

0xb073,	// (0x00088015) bg_popup_sub_pane_cp01

0xb081,	// (0x00088023) popup_cale_events_window_g1_ParamLimits

0xb081,	// (0x00088023) popup_cale_events_window_g1

0xb0a1,	// (0x00088043) popup_cale_events_window_g2_ParamLimits

0xb0a1,	// (0x00088043) popup_cale_events_window_g2

0x0001,

0xf34d,	// (0x0008c2ef) popup_cale_events_window_g_ParamLimits

0xf34d,	// (0x0008c2ef) popup_cale_events_window_g

0xb0c1,	// (0x00088063) popup_cale_events_window_t1_ParamLimits

0xb0c1,	// (0x00088063) popup_cale_events_window_t1

0xb0d3,	// (0x00088075) popup_cale_events_window_t2_ParamLimits

0xb0d3,	// (0x00088075) popup_cale_events_window_t2

0xb111,	// (0x000880b3) popup_cale_events_window_t3_ParamLimits

0xb111,	// (0x000880b3) popup_cale_events_window_t3

0xb14b,	// (0x000880ed) popup_cale_events_window_t4_ParamLimits

0xb14b,	// (0x000880ed) popup_cale_events_window_t4

0x0003,

0xf352,	// (0x0008c2f4) popup_cale_events_window_t_ParamLimits

0xf352,	// (0x0008c2f4) popup_cale_events_window_t

0x4454,	// (0x000813f6) call_type_pane

0xb347,	// (0x000882e9) popup_call_status_window_g1

0x4460,	// (0x00081402) popup_call_status_window_g2

0x446c,	// (0x0008140e) popup_call_status_window_g3

0x0002,

0xf35b,	// (0x0008c2fd) popup_call_status_window_g

0xb181,	// (0x00088123) call_type_pane_g1

0xb18a,	// (0x0008812c) call_type_pane_g2

0x0001,

0xf362,	// (0x0008c304) call_type_pane_g

0xa5f4,	// (0x00087596) bg_popup_sub_pane_cp02

0xb193,	// (0x00088135) listscroll_popup_wml_pane

0xb19b,	// (0x0008813d) list_wml_pane

0xb1a5,	// (0x00088147) scroll_pane_cp013

0xb1b0,	// (0x00088152) list_single_graphic_popup_wml_pane_ParamLimits

0xb1b0,	// (0x00088152) list_single_graphic_popup_wml_pane

0xa997,	// (0x00087939) list_single_graphic_popup_wml_pane_g1

0xb1c4,	// (0x00088166) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf367,	// (0x0008c309) list_single_graphic_popup_wml_pane_g

0xb1cc,	// (0x0008816e) list_single_graphic_popup_wml_pane_t1

0xb1e2,	// (0x00088184) aid_call_pane

0xa847,	// (0x000877e9) popup_clock_analogue_window_g1

0xa847,	// (0x000877e9) popup_clock_analogue_window_g2

0x4478,	// (0x0008141a) popup_clock_analogue_window_g3

0x4478,	// (0x0008141a) popup_clock_analogue_window_g4

0xa997,	// (0x00087939) popup_clock_analogue_window_g5

0x0004,

0xf36c,	// (0x0008c30e) popup_clock_analogue_window_g

0x4480,	// (0x00081422) popup_clock_analogue_window_t1

0x448e,	// (0x00081430) clock_digital_number_pane_ParamLimits

0x448e,	// (0x00081430) clock_digital_number_pane

0x449a,	// (0x0008143c) clock_digital_number_pane_cp02_ParamLimits

0x449a,	// (0x0008143c) clock_digital_number_pane_cp02

0x44a6,	// (0x00081448) clock_digital_number_pane_cp03_ParamLimits

0x44a6,	// (0x00081448) clock_digital_number_pane_cp03

0x44b2,	// (0x00081454) clock_digital_number_pane_cp04_ParamLimits

0x44b2,	// (0x00081454) clock_digital_number_pane_cp04

0x44be,	// (0x00081460) clock_digital_separator_pane_ParamLimits

0x44be,	// (0x00081460) clock_digital_separator_pane

0x44ca,	// (0x0008146c) popup_clock_digital_window_t1

0xa997,	// (0x00087939) clock_digital_number_pane_g1

0xa997,	// (0x00087939) clock_digital_number_pane_g2

0x0001,

0xf2da,	// (0x0008c27c) clock_digital_number_pane_g

0xa997,	// (0x00087939) clock_digital_separator_pane_g1

0xa997,	// (0x00087939) clock_digital_separator_pane_g2

0x0001,

0xf2da,	// (0x0008c27c) clock_digital_separator_pane_g

0xa5f4,	// (0x00087596) bg_popup_window_pane_cp04

0xb1ea,	// (0x0008818c) heading_pane_cp03

0xb1f2,	// (0x00088194) listscroll_popup_gms_pane

0xb1fa,	// (0x0008819c) grid_large_graphic_popup_pane

0xb204,	// (0x000881a6) listscroll_popup_gms_pane_g1

0xb20c,	// (0x000881ae) listscroll_popup_gms_pane_g2

0x0001,

0xf377,	// (0x0008c319) listscroll_popup_gms_pane_g

0xacbb,	// (0x00087c5d) scroll_pane_cp014

0x44e7,	// (0x00081489) cell_large_graphic_popup_pane_ParamLimits

0x44e7,	// (0x00081489) cell_large_graphic_popup_pane

0x4501,	// (0x000814a3) cell_large_graphic_popup_pane_g1_ParamLimits

0x4501,	// (0x000814a3) cell_large_graphic_popup_pane_g1

0xb214,	// (0x000881b6) cell_large_graphic_popup_pane_g2_ParamLimits

0xb214,	// (0x000881b6) cell_large_graphic_popup_pane_g2

0xb220,	// (0x000881c2) cell_large_graphic_popup_pane_g3_ParamLimits

0xb220,	// (0x000881c2) cell_large_graphic_popup_pane_g3

0xb22d,	// (0x000881cf) cell_large_graphic_popup_pane_g4_ParamLimits

0xb22d,	// (0x000881cf) cell_large_graphic_popup_pane_g4

0x0003,

0xf37c,	// (0x0008c31e) cell_large_graphic_popup_pane_g_ParamLimits

0xf37c,	// (0x0008c31e) cell_large_graphic_popup_pane_g

0xb23d,	// (0x000881df) grid_highlight_pane_cp010

0xa997,	// (0x00087939) bg_popup_call_pane_g1

0xb247,	// (0x000881e9) list_single_graphic_popup_conf_pane_ParamLimits

0xb247,	// (0x000881e9) list_single_graphic_popup_conf_pane

0xb259,	// (0x000881fb) list_highlight_pane_cp01

0xb262,	// (0x00088204) list_single_graphic_popup_conf_pane_g1

0xb26a,	// (0x0008820c) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf385,	// (0x0008c327) list_single_graphic_popup_conf_pane_g

0xb272,	// (0x00088214) list_single_graphic_popup_conf_pane_t1

0xb280,	// (0x00088222) linegrid_cams_pane_g1

0x450d,	// (0x000814af) linegrid_cams_pane_g2

0xaafc,	// (0x00087a9e) linegrid_cams_pane_g3

0xb289,	// (0x0008822b) linegrid_cams_pane_g4

0x4516,	// (0x000814b8) linegrid_cams_pane_g5

0x451f,	// (0x000814c1) linegrid_cams_pane_g6

0xab05,	// (0x00087aa7) linegrid_cams_pane_g7

0x0006,

0xf38a,	// (0x0008c32c) linegrid_cams_pane_g

0xb292,	// (0x00088234) popup_clock_analogue_window

0xb292,	// (0x00088234) popup_clock_digital_window

0xa5f4,	// (0x00087596) popup_phob_thumbnail_window

0xa997,	// (0x00087939) call_video_uplink_pane_g1

0xb29b,	// (0x0008823d) call_video_uplink_pane_g2

0x0001,

0xf399,	// (0x0008c33b) call_video_uplink_pane_g

0xb2a3,	// (0x00088245) video_uplink_pane

0xb2ab,	// (0x0008824d) mce_image_pane_g1

0x452a,	// (0x000814cc) mce_image_pane_g2

0x4534,	// (0x000814d6) mce_image_pane_g3

0x453e,	// (0x000814e0) mce_image_pane_g4

0x4546,	// (0x000814e8) mce_image_pane_g5

0x0004,

0xf39e,	// (0x0008c340) mce_image_pane_g

0xb2b5,	// (0x00088257) control_top_pane_stacon_cp01_ParamLimits

0xb2b5,	// (0x00088257) control_top_pane_stacon_cp01

0xb2c9,	// (0x0008826b) uni_indicator_pane_stacon_cp01_ParamLimits

0xb2c9,	// (0x0008826b) uni_indicator_pane_stacon_cp01

0xb2da,	// (0x0008827c) bg_popup_sub_pane_cp03

0x454e,	// (0x000814f0) chi_dic_find_pane

0x4556,	// (0x000814f8) listscroll_chi_dic_pane

0x455f,	// (0x00081501) main_pane_chidic_g1

0x4572,	// (0x00081514) chi_dic_find_pane_t1

0xb2e4,	// (0x00088286) find_chidic_pane

0xb2ed,	// (0x0008828f) chi_dic_list_pane_ParamLimits

0xb2ed,	// (0x0008828f) chi_dic_list_pane

0xb2fe,	// (0x000882a0) scroll_pane_cp020

0x4580,	// (0x00081522) find_chidic_pane_t1

0xa5f4,	// (0x00087596) input_focus_pane_cp06

0x458f,	// (0x00081531) list_chi_dic_pane_ParamLimits

0x458f,	// (0x00081531) list_chi_dic_pane

0x45a4,	// (0x00081546) list_chi_dic_pane_t1_ParamLimits

0x45a4,	// (0x00081546) list_chi_dic_pane_t1

0xa5f4,	// (0x00087596) list_highlight_pane_cp020

0xb306,	// (0x000882a8) bg_cale_heading_pane_g1

0x45b7,	// (0x00081559) bg_cale_heading_pane_g2

0x45bf,	// (0x00081561) bg_cale_heading_pane_g3

0x45c7,	// (0x00081569) bg_cale_heading_pane_g4

0x45d1,	// (0x00081573) bg_cale_heading_pane_g5

0x45db,	// (0x0008157d) bg_cale_heading_pane_g6

0x45e3,	// (0x00081585) bg_cale_heading_pane_g7

0x45eb,	// (0x0008158d) bg_cale_heading_pane_g8

0x45f5,	// (0x00081597) bg_cale_heading_pane_g9

0x0008,

0xf3a9,	// (0x0008c34b) bg_cale_heading_pane_g

0xb306,	// (0x000882a8) bg_cale_side_pane_g1

0x45ff,	// (0x000815a1) bg_cale_side_pane_g2

0x4609,	// (0x000815ab) bg_cale_side_pane_g3

0x4613,	// (0x000815b5) bg_cale_side_pane_g4

0x461d,	// (0x000815bf) bg_cale_side_pane_g5

0x4627,	// (0x000815c9) bg_cale_side_pane_g6

0x4631,	// (0x000815d3) bg_cale_side_pane_g7

0x463b,	// (0x000815dd) bg_cale_side_pane_g8

0x4643,	// (0x000815e5) bg_cale_side_pane_g9

0x0008,

0xf3bc,	// (0x0008c35e) bg_cale_side_pane_g

0x464b,	// (0x000815ed) popup_call_status_window_ParamLimits

0x464b,	// (0x000815ed) popup_call_status_window

0xb30e,	// (0x000882b0) stacon_top_pane

0xb316,	// (0x000882b8) status_pane_ParamLimits

0xb316,	// (0x000882b8) status_pane

0xb32b,	// (0x000882cd) status_small_pane

0xb333,	// (0x000882d5) control_pane

0xa5f4,	// (0x00087596) stacon_bottom_pane

0xb355,	// (0x000882f7) list_single_mce_smart_pane_t1_ParamLimits

0xb355,	// (0x000882f7) list_single_mce_smart_pane_t1

0xb368,	// (0x0008830a) list_single_mce_smart_pane_t2_ParamLimits

0xb368,	// (0x0008830a) list_single_mce_smart_pane_t2

0x0001,

0xf3cf,	// (0x0008c371) list_single_mce_smart_pane_t_ParamLimits

0xf3cf,	// (0x0008c371) list_single_mce_smart_pane_t

0x4657,	// (0x000815f9) compass_pane

0x4662,	// (0x00081604) main_location2_pane_t1

0x4678,	// (0x0008161a) main_location2_pane_t2

0x468e,	// (0x00081630) main_location2_pane_t3

0x0003,

0xf3d4,	// (0x0008c376) main_location2_pane_t

0xb387,	// (0x00088329) compass_pane_g1_ParamLimits

0xb387,	// (0x00088329) compass_pane_g1

0x46dc,	// (0x0008167e) compass_pane_t1

0x46eb,	// (0x0008168d) compass_pane_t2

0x0005,

0xf3dd,	// (0x0008c37f) compass_pane_t

0x4736,	// (0x000816d8) text_secondary_cp61

0xb39b,	// (0x0008833d) navi_pane_cams_g5

0xb3be,	// (0x00088360) navi_pane_im_t1

0xb3cc,	// (0x0008836e) navi_pane_mp_g1_ParamLimits

0xb3cc,	// (0x0008836e) navi_pane_mp_g1

0xb3e0,	// (0x00088382) navi_pane_mp_g2_ParamLimits

0xb3e0,	// (0x00088382) navi_pane_mp_g2

0xb3ec,	// (0x0008838e) navi_pane_mp_g3_ParamLimits

0xb3ec,	// (0x0008838e) navi_pane_mp_g3

0x0002,

0xf3f1,	// (0x0008c393) navi_pane_mp_g_ParamLimits

0xf3f1,	// (0x0008c393) navi_pane_mp_g

0xb3f8,	// (0x0008839a) navi_pane_mp_t1

0xb406,	// (0x000883a8) navi_pane_mp_t2

0x0002,

0xf3f8,	// (0x0008c39a) navi_pane_mp_t

0xb442,	// (0x000883e4) navi_pane_vt_g1

0xb3f8,	// (0x0008839a) navi_pane_vt_t1

0xb44a,	// (0x000883ec) navi_slider_pane

0xb452,	// (0x000883f4) zooming_pane

0xb45a,	// (0x000883fc) navi_slider_pane_g1

0x486b,	// (0x0008180d) navi_slider_pane_g2

0x0006,

0xf3ff,	// (0x0008c3a1) navi_slider_pane_g

0xb47e,	// (0x00088420) aid_levels_zoom

0xb486,	// (0x00088428) zooming_pane_g1

0xb48e,	// (0x00088430) zooming_pane_g2

0xb48e,	// (0x00088430) zooming_pane_g3

0x0002,

0xf40e,	// (0x0008c3b0) zooming_pane_g

0xb496,	// (0x00088438) level_10_zoom

0xb49f,	// (0x00088441) level_11_zoom

0xb4a8,	// (0x0008844a) level_1_zoom

0xb4b1,	// (0x00088453) level_2_zoom

0xb4ba,	// (0x0008845c) level_3_zoom

0xb4c3,	// (0x00088465) level_4_zoom

0xb4cc,	// (0x0008846e) level_5_zoom

0xb4d5,	// (0x00088477) level_6_zoom

0xb4de,	// (0x00088480) level_7_zoom

0xb4e7,	// (0x00088489) level_8_zoom

0xb4f0,	// (0x00088492) level_9_zoom

0xb501,	// (0x000884a3) popup_phob_thumbnail_window_g1

0xb509,	// (0x000884ab) popup_phob_thumbnail_window_g2

0x0001,

0xf415,	// (0x0008c3b7) popup_phob_thumbnail_window_g

0xc7fb,	// (0x0008979d) level_1_location

0xc803,	// (0x000897a5) level_2_location

0xc80b,	// (0x000897ad) level_3_location

0xc813,	// (0x000897b5) level_4_location

0xb452,	// (0x000883f4) level_5_location

0x487d,	// (0x0008181f) mce_icon_pane_g1

0x4885,	// (0x00081827) mce_icon_pane_g2

0x0001,

0xf41a,	// (0x0008c3bc) mce_icon_pane_g

0x488d,	// (0x0008182f) main_mup_pane_g1_ParamLimits

0x488d,	// (0x0008182f) main_mup_pane_g1

0x48a5,	// (0x00081847) main_mup_pane_g2_ParamLimits

0x48a5,	// (0x00081847) main_mup_pane_g2

0x48c1,	// (0x00081863) main_mup_pane_g3_ParamLimits

0x48c1,	// (0x00081863) main_mup_pane_g3

0x48dd,	// (0x0008187f) main_mup_pane_g4_ParamLimits

0x48dd,	// (0x0008187f) main_mup_pane_g4

0x48f9,	// (0x0008189b) main_mup_pane_g5_ParamLimits

0x48f9,	// (0x0008189b) main_mup_pane_g5

0x491a,	// (0x000818bc) main_mup_pane_g6_ParamLimits

0x491a,	// (0x000818bc) main_mup_pane_g6

0x493a,	// (0x000818dc) main_mup_pane_g7_ParamLimits

0x493a,	// (0x000818dc) main_mup_pane_g7

0x495e,	// (0x00081900) main_mup_pane_g8_ParamLimits

0x495e,	// (0x00081900) main_mup_pane_g8

0x4982,	// (0x00081924) main_mup_pane_g9_ParamLimits

0x4982,	// (0x00081924) main_mup_pane_g9

0x49a5,	// (0x00081947) main_mup_pane_g10_ParamLimits

0x49a5,	// (0x00081947) main_mup_pane_g10

0x49c8,	// (0x0008196a) main_mup_pane_g11_ParamLimits

0x49c8,	// (0x0008196a) main_mup_pane_g11

0x49e8,	// (0x0008198a) main_mup_pane_g12_ParamLimits

0x49e8,	// (0x0008198a) main_mup_pane_g12

0x49f6,	// (0x00081998) main_mup_pane_g13_ParamLimits

0x49f6,	// (0x00081998) main_mup_pane_g13

0x000c,

0xf41f,	// (0x0008c3c1) main_mup_pane_g_ParamLimits

0xf41f,	// (0x0008c3c1) main_mup_pane_g

0x4a0c,	// (0x000819ae) main_mup_pane_t1_ParamLimits

0x4a0c,	// (0x000819ae) main_mup_pane_t1

0x4a2b,	// (0x000819cd) main_mup_pane_t2_ParamLimits

0x4a2b,	// (0x000819cd) main_mup_pane_t2

0x4a45,	// (0x000819e7) main_mup_pane_t3_ParamLimits

0x4a45,	// (0x000819e7) main_mup_pane_t3

0x4a5f,	// (0x00081a01) main_mup_pane_t4_ParamLimits

0x4a5f,	// (0x00081a01) main_mup_pane_t4

0x4a71,	// (0x00081a13) main_mup_pane_t5_ParamLimits

0x4a71,	// (0x00081a13) main_mup_pane_t5

0x4a83,	// (0x00081a25) main_mup_pane_t6_ParamLimits

0x4a83,	// (0x00081a25) main_mup_pane_t6

0x0005,

0xf43a,	// (0x0008c3dc) main_mup_pane_t_ParamLimits

0xf43a,	// (0x0008c3dc) main_mup_pane_t

0x4a99,	// (0x00081a3b) mup_progress_pane_ParamLimits

0x4a99,	// (0x00081a3b) mup_progress_pane

0x4aa5,	// (0x00081a47) mup_visualizer_pane_ParamLimits

0x4aa5,	// (0x00081a47) mup_visualizer_pane

0x4ae3,	// (0x00081a85) mup_volume_pane_ParamLimits

0x4ae3,	// (0x00081a85) mup_volume_pane

0xb347,	// (0x000882e9) mup_visualizer_pane_g1_ParamLimits

0xb347,	// (0x000882e9) mup_visualizer_pane_g1

0xb347,	// (0x000882e9) mup_visualizer_pane_g2_ParamLimits

0xb347,	// (0x000882e9) mup_visualizer_pane_g2

0xb387,	// (0x00088329) mup_visualizer_pane_g3_ParamLimits

0xb387,	// (0x00088329) mup_visualizer_pane_g3

0x0002,

0xf447,	// (0x0008c3e9) mup_visualizer_pane_g_ParamLimits

0xf447,	// (0x0008c3e9) mup_visualizer_pane_g

0xa997,	// (0x00087939) mup_volume_pane_g1

0xb519,	// (0x000884bb) mup_volume_pane_g2

0x0001,

0xf44e,	// (0x0008c3f0) mup_volume_pane_g

0xa997,	// (0x00087939) mup_progress_pane_g1

0xb522,	// (0x000884c4) mup_progress_pane_g2

0xb52b,	// (0x000884cd) mup_progress_pane_g3

0x0002,

0xf453,	// (0x0008c3f5) mup_progress_pane_g

0xa5f4,	// (0x00087596) bg_popup_window_pane_cp05

0xb534,	// (0x000884d6) heading_pane_cp02_ParamLimits

0xb534,	// (0x000884d6) heading_pane_cp02

0xb550,	// (0x000884f2) list_popup_blid_pane

0xb558,	// (0x000884fa) list_blid_sat_info_pane_ParamLimits

0xb558,	// (0x000884fa) list_blid_sat_info_pane

0xb56b,	// (0x0008850d) list_blid_sat_info_pane_g1

0xb573,	// (0x00088515) list_blid_sat_info_pane_t1

0x4c02,	// (0x00081ba4) mup_equalizer_pane_ParamLimits

0x4c02,	// (0x00081ba4) mup_equalizer_pane

0x4c23,	// (0x00081bc5) mup_equalizer_pane_cp1_ParamLimits

0x4c23,	// (0x00081bc5) mup_equalizer_pane_cp1

0x4c44,	// (0x00081be6) mup_equalizer_pane_cp2_ParamLimits

0x4c44,	// (0x00081be6) mup_equalizer_pane_cp2

0x4c65,	// (0x00081c07) mup_equalizer_pane_cp3_ParamLimits

0x4c65,	// (0x00081c07) mup_equalizer_pane_cp3

0x4c8a,	// (0x00081c2c) mup_equalizer_pane_cp4_ParamLimits

0x4c8a,	// (0x00081c2c) mup_equalizer_pane_cp4

0x4caf,	// (0x00081c51) mup_equalizer_pane_cp5

0x4cc7,	// (0x00081c69) mup_equalizer_pane_cp6

0x4cdf,	// (0x00081c81) mup_equalizer_pane_cp7

0xc715,	// (0x000896b7) bg_popup_call_poc_act_pane_g9

0xc71d,	// (0x000896bf) bg_popup_call_poc_act_pane_g10

0xc725,	// (0x000896c7) bg_popup_call_poc_act_pane_g11

0x000a,

0xa84f,	// (0x000877f1) mup_scale_pane

0xa997,	// (0x00087939) mup_scale_pane_g1

0xb581,	// (0x00088523) mup_scale_pane_g2

0x0006,

0xf46f,	// (0x0008c411) mup_scale_pane_g

0xb5a5,	// (0x00088547) msg_data_pane

0xb5ad,	// (0x0008854f) scroll_pane_cp017

0x0dc8,	// (0x0007dd6a) bg_list_pane_cp04_ParamLimits

0x0dc8,	// (0x0007dd6a) bg_list_pane_cp04

0xb5b5,	// (0x00088557) msg_data_pane_g1

0x4d09,	// (0x00081cab) msg_data_pane_g2

0x4d13,	// (0x00081cb5) msg_data_pane_g3

0x4d1d,	// (0x00081cbf) msg_data_pane_g4

0x4d25,	// (0x00081cc7) msg_data_pane_g5

0x4d2d,	// (0x00081ccf) msg_data_pane_g6

0x4d35,	// (0x00081cd7) msg_data_pane_g7

0x0006,

0xf47e,	// (0x0008c420) msg_data_pane_g

0x0df0,	// (0x0007dd92) msg_text_pane_ParamLimits

0x0df0,	// (0x0007dd92) msg_text_pane

0x4d3d,	// (0x00081cdf) qrid_highlight_pane_cp011_ParamLimits

0x4d3d,	// (0x00081cdf) qrid_highlight_pane_cp011

0xa5f4,	// (0x00087596) msg_body_pane

0xa5f4,	// (0x00087596) msg_header_pane

0xb5bd,	// (0x0008855f) input_focus_pane_cp07

0x0e24,	// (0x0007ddc6) msg_header_pane_t1_ParamLimits

0x0e24,	// (0x0007ddc6) msg_header_pane_t1

0x0e36,	// (0x0007ddd8) msg_header_pane_t2_ParamLimits

0x0e36,	// (0x0007ddd8) msg_header_pane_t2

0x0001,

0xf492,	// (0x0008c434) msg_header_pane_t_ParamLimits

0xf492,	// (0x0008c434) msg_header_pane_t

0xb5d2,	// (0x00088574) msg_body_pane_g1

0x0e48,	// (0x0007ddea) msg_body_pane_t1_ParamLimits

0x0e48,	// (0x0007ddea) msg_body_pane_t1

0x0e79,	// (0x0007de1b) msg_body_pane_t2_ParamLimits

0x0e79,	// (0x0007de1b) msg_body_pane_t2

0x0e8b,	// (0x0007de2d) msg_body_pane_t3_ParamLimits

0x0e8b,	// (0x0007de2d) msg_body_pane_t3

0x0002,

0xf497,	// (0x0008c439) msg_body_pane_t_ParamLimits

0xf497,	// (0x0008c439) msg_body_pane_t

0x4db0,	// (0x00081d52) main_viewer_pane_g1_ParamLimits

0x4db0,	// (0x00081d52) main_viewer_pane_g1

0x4dbc,	// (0x00081d5e) main_viewer_pane_g2_ParamLimits

0x4dbc,	// (0x00081d5e) main_viewer_pane_g2

0x4dc8,	// (0x00081d6a) main_viewer_pane_g3_ParamLimits

0x4dc8,	// (0x00081d6a) main_viewer_pane_g3

0x4dd9,	// (0x00081d7b) main_viewer_pane_g4_ParamLimits

0x4dd9,	// (0x00081d7b) main_viewer_pane_g4

0x4dea,	// (0x00081d8c) main_viewer_pane_g5_ParamLimits

0x4dea,	// (0x00081d8c) main_viewer_pane_g5

0x4dea,	// (0x00081d8c) main_viewer_pane_g7_ParamLimits

0x4dea,	// (0x00081d8c) main_viewer_pane_g7

0x4dfc,	// (0x00081d9e) main_viewer_pane_g8_ParamLimits

0x4dfc,	// (0x00081d9e) main_viewer_pane_g8

0x0007,

0xf4a7,	// (0x0008c449) main_viewer_pane_g_ParamLimits

0xf4a7,	// (0x0008c449) main_viewer_pane_g

0xb5da,	// (0x0008857c) viewer_content_pane_ParamLimits

0xb5da,	// (0x0008857c) viewer_content_pane

0x4e34,	// (0x00081dd6) main_postcard_pane_g1_ParamLimits

0x4e34,	// (0x00081dd6) main_postcard_pane_g1

0x4e42,	// (0x00081de4) main_postcard_pane_g2_ParamLimits

0x4e42,	// (0x00081de4) main_postcard_pane_g2

0x4e50,	// (0x00081df2) main_postcard_pane_g3_ParamLimits

0x4e50,	// (0x00081df2) main_postcard_pane_g3

0x0005,

0xf4b8,	// (0x0008c45a) main_postcard_pane_g_ParamLimits

0xf4b8,	// (0x0008c45a) main_postcard_pane_g

0x4e60,	// (0x00081e02) main_postcard_pane_g4

0xc93e,	// (0x000898e0) smil_status_volume_pane_g2

0x4e8c,	// (0x00081e2e) postcard_pane_ParamLimits

0x4e8c,	// (0x00081e2e) postcard_pane

0xb347,	// (0x000882e9) postcard_pane_g1_ParamLimits

0xb347,	// (0x000882e9) postcard_pane_g1

0x4ec6,	// (0x00081e68) postcard_pane_g2_ParamLimits

0x4ec6,	// (0x00081e68) postcard_pane_g2

0x4ed2,	// (0x00081e74) postcard_pane_g3_ParamLimits

0x4ed2,	// (0x00081e74) postcard_pane_g3

0xb5e8,	// (0x0008858a) postcard_pane_g4_ParamLimits

0xb5e8,	// (0x0008858a) postcard_pane_g4

0x4ede,	// (0x00081e80) postcard_pane_g5_ParamLimits

0x4ede,	// (0x00081e80) postcard_pane_g5

0x4eea,	// (0x00081e8c) postcard_pane_g6_ParamLimits

0x4eea,	// (0x00081e8c) postcard_pane_g6

0xb5f6,	// (0x00088598) postcard_pane_g7_ParamLimits

0xb5f6,	// (0x00088598) postcard_pane_g7

0x0006,

0xf4c5,	// (0x0008c467) postcard_pane_g_ParamLimits

0xf4c5,	// (0x0008c467) postcard_pane_g

0x4ef8,	// (0x00081e9a) main_mp2_pane_g1_ParamLimits

0x4ef8,	// (0x00081e9a) main_mp2_pane_g1

0x4f06,	// (0x00081ea8) main_mp2_pane_g2_ParamLimits

0x4f06,	// (0x00081ea8) main_mp2_pane_g2

0x4f12,	// (0x00081eb4) main_mp2_pane_g3_ParamLimits

0x4f12,	// (0x00081eb4) main_mp2_pane_g3

0x0002,

0xf4d4,	// (0x0008c476) main_mp2_pane_g_ParamLimits

0xf4d4,	// (0x0008c476) main_mp2_pane_g

0x4f1e,	// (0x00081ec0) main_mp2_pane_t1_ParamLimits

0x4f1e,	// (0x00081ec0) main_mp2_pane_t1

0x4f35,	// (0x00081ed7) main_mp2_pane_t2_ParamLimits

0x4f35,	// (0x00081ed7) main_mp2_pane_t2

0x4f49,	// (0x00081eeb) main_mp2_pane_t3_ParamLimits

0x4f49,	// (0x00081eeb) main_mp2_pane_t3

0x0002,

0xf4db,	// (0x0008c47d) main_mp2_pane_t_ParamLimits

0xf4db,	// (0x0008c47d) main_mp2_pane_t

0xb604,	// (0x000885a6) pec_content_pane_ParamLimits

0xb604,	// (0x000885a6) pec_content_pane

0xacbb,	// (0x00087c5d) scroll_pane_cp015

0xb616,	// (0x000885b8) pec_attribute_pane_ParamLimits

0xb616,	// (0x000885b8) pec_attribute_pane

0x4f5b,	// (0x00081efd) pec_content_pane_g1_ParamLimits

0x4f5b,	// (0x00081efd) pec_content_pane_g1

0xb626,	// (0x000885c8) pec_content_pane_t1_ParamLimits

0xb626,	// (0x000885c8) pec_content_pane_t1

0xb638,	// (0x000885da) pec_content_pane_t2_ParamLimits

0xb638,	// (0x000885da) pec_content_pane_t2

0x0001,

0xf4e2,	// (0x0008c484) pec_content_pane_t_ParamLimits

0xf4e2,	// (0x0008c484) pec_content_pane_t

0x4f67,	// (0x00081f09) list_single_graphic_pane_cp01_ParamLimits

0x4f67,	// (0x00081f09) list_single_graphic_pane_cp01

0xa84f,	// (0x000877f1) bg_popup_sub_pane_cp04

0xb64a,	// (0x000885ec) popup_mup_playback_window_g1

0xb656,	// (0x000885f8) popup_mup_playback_window_t1

0xb66b,	// (0x0008860d) popup_mup_playback_window_t2

0x0001,

0xf4e7,	// (0x0008c489) popup_mup_playback_window_t

0xb6a2,	// (0x00088644) main_image_pane_g1_ParamLimits

0xb6a2,	// (0x00088644) main_image_pane_g1

0xb6e5,	// (0x00088687) scroll_pane_cp018_ParamLimits

0xb6e5,	// (0x00088687) scroll_pane_cp018

0xb6fd,	// (0x0008869f) scroll_pane_cp016_ParamLimits

0xb6fd,	// (0x0008869f) scroll_pane_cp016

0x4ff5,	// (0x00081f97) smil2_image_pane_ParamLimits

0x4ff5,	// (0x00081f97) smil2_image_pane

0x502b,	// (0x00081fcd) smil2_root_pane_ParamLimits

0x502b,	// (0x00081fcd) smil2_root_pane

0x5057,	// (0x00081ff9) smil2_text_pane_ParamLimits

0x5057,	// (0x00081ff9) smil2_text_pane

0xa5f4,	// (0x00087596) bg_list_pane_cp06

0xb739,	// (0x000886db) grid_radio_pane

0xa5f4,	// (0x00087596) bg_popup_window_pane_cp06

0xb743,	// (0x000886e5) main_fmradio_pane_t1

0xb1ea,	// (0x0008818c) heading_pane_cp04

0xb751,	// (0x000886f3) main_fmradio_pane_t2

0xc72d,	// (0x000896cf) popup_cale_lunar_info_window_g1

0xb75f,	// (0x00088701) main_fmradio_pane_t3

0xc735,	// (0x000896d7) popup_cale_lunar_info_window_g2

0xb76f,	// (0x00088711) main_fmradio_pane_t4

0x0001,

0xb77d,	// (0x0008871f) main_fmradio_pane_t5

0x0004,

0xf5c2,	// (0x0008c564) popup_cale_lunar_info_window_g

0xf4fc,	// (0x0008c49e) main_fmradio_pane_t

0xb78b,	// (0x0008872d) wait_bar_pane_cp03

0xb793,	// (0x00088735) cell_fmradio_pane_ParamLimits

0xb793,	// (0x00088735) cell_fmradio_pane

0xb5f6,	// (0x00088598) cell_fmradio_pane_g1_ParamLimits

0xb5f6,	// (0x00088598) cell_fmradio_pane_g1

0xa5f4,	// (0x00087596) grid_highlight_pane_cp011

0xb7a8,	// (0x0008874a) poc_content_pane_ParamLimits

0xb7a8,	// (0x0008874a) poc_content_pane

0xb7ba,	// (0x0008875c) scroll_pane_cp019

0x5097,	// (0x00082039) popup_call_poc_act_window_ParamLimits

0x5097,	// (0x00082039) popup_call_poc_act_window

0x50a4,	// (0x00082046) popup_call_poc_inact_window_ParamLimits

0x50a4,	// (0x00082046) popup_call_poc_inact_window

0xf599,	// (0x0008c53b) bg_popup_call_poc_act_pane_g

0xc6a5,	// (0x00089647) bg_popup_call_poc_inact_pane_g1

0xc6ad,	// (0x0008964f) bg_popup_call_poc_inact_pane_g2

0xb7c2,	// (0x00088764) popup_call_poc_act_window_g2

0xc6b5,	// (0x00089657) bg_popup_call_poc_inact_pane_g3

0xc6bd,	// (0x0008965f) bg_popup_call_poc_inact_pane_g4

0xc6c5,	// (0x00089667) bg_popup_call_poc_inact_pane_g5

0xb7ca,	// (0x0008876c) popup_call_poc_act_window_t1_ParamLimits

0xb7ca,	// (0x0008876c) popup_call_poc_act_window_t1

0xb7f2,	// (0x00088794) popup_call_poc_act_window_t2_ParamLimits

0xb7f2,	// (0x00088794) popup_call_poc_act_window_t2

0xb81a,	// (0x000887bc) popup_call_poc_act_window_t3_ParamLimits

0xb81a,	// (0x000887bc) popup_call_poc_act_window_t3

0xb842,	// (0x000887e4) popup_call_poc_act_window_t4_ParamLimits

0xb842,	// (0x000887e4) popup_call_poc_act_window_t4

0x0003,

0xf507,	// (0x0008c4a9) popup_call_poc_act_window_t_ParamLimits

0xf507,	// (0x0008c4a9) popup_call_poc_act_window_t

0xc6cd,	// (0x0008966f) bg_popup_call_poc_inact_pane_g6

0xc6d5,	// (0x00089677) bg_popup_call_poc_inact_pane_g7

0xc6dd,	// (0x0008967f) bg_popup_call_poc_inact_pane_g8

0xb854,	// (0x000887f6) popup_call_poc_inact_window_g2

0xc6e5,	// (0x00089687) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf586,	// (0x0008c528) bg_popup_call_poc_inact_pane_g

0xb85c,	// (0x000887fe) popup_call_poc_inact_window_t1_ParamLimits

0xb85c,	// (0x000887fe) popup_call_poc_inact_window_t1

0xb871,	// (0x00088813) popup_call_poc_inact_window_t2_ParamLimits

0xb871,	// (0x00088813) popup_call_poc_inact_window_t2

0xb886,	// (0x00088828) popup_call_poc_inact_window_t3_ParamLimits

0xb886,	// (0x00088828) popup_call_poc_inact_window_t3

0x0002,

0xf510,	// (0x0008c4b2) popup_call_poc_inact_window_t_ParamLimits

0xf510,	// (0x0008c4b2) popup_call_poc_inact_window_t

0xc8b1,	// (0x00089853) context_pane_ParamLimits

0x56b3,	// (0x00082655) signal_pane_ParamLimits

0xb452,	// (0x000883f4) main_call2_pane

0xc89f,	// (0x00089841) popup_phob_thumbnail2_window_ParamLimits

0xc89f,	// (0x00089841) popup_phob_thumbnail2_window

0x4d5e,	// (0x00081d00) aid_hotspot_pointer_arrow_pane

0x4d66,	// (0x00081d08) aid_hotspot_pointer_hand_pane

0x53c9,	// (0x0008236b) phob_pre_status_pane_g5

0x2f98,	// (0x0007ff3a) cams_zoom_pane_ParamLimits

0x2fa4,	// (0x0007ff46) image_vga_pane_ParamLimits

0x2fb3,	// (0x0007ff55) main_camera_pane_g1_ParamLimits

0x2fc1,	// (0x0007ff63) main_camera_pane_g2_ParamLimits

0x2fcd,	// (0x0007ff6f) main_camera_pane_g3_ParamLimits

0x2fdb,	// (0x0007ff7d) main_camera_pane_g4_ParamLimits

0x2fe9,	// (0x0007ff8b) main_camera_pane_g5_ParamLimits

0x2ff7,	// (0x0007ff99) main_camera_pane_g6_ParamLimits

0x3005,	// (0x0007ffa7) main_camera_pane_g7_ParamLimits

0xf20f,	// (0x0008c1b1) main_camera_pane_g_ParamLimits

0x3013,	// (0x0007ffb5) main_camera_pane_t1_ParamLimits

0x3025,	// (0x0007ffc7) main_camera_pane_t2_ParamLimits

0xf220,	// (0x0008c1c2) main_camera_pane_t_ParamLimits

0xa84f,	// (0x000877f1) bg_popup_preview_window_pane_cp01_ParamLimits

0xa84f,	// (0x000877f1) bg_popup_preview_window_pane_cp01

0xb89b,	// (0x0008883d) popup_phob_thumbnail2_window_g1_ParamLimits

0xb89b,	// (0x0008883d) popup_phob_thumbnail2_window_g1

0xa5f4,	// (0x00087596) call2_cli_visual_pane

0x50c0,	// (0x00082062) popup_call2_audio_conf_window_ParamLimits

0x50c0,	// (0x00082062) popup_call2_audio_conf_window

0x50d9,	// (0x0008207b) popup_call2_audio_first_window_ParamLimits

0x50d9,	// (0x0008207b) popup_call2_audio_first_window

0x5177,	// (0x00082119) popup_call2_audio_in_window_ParamLimits

0x5177,	// (0x00082119) popup_call2_audio_in_window

0x51bb,	// (0x0008215d) popup_call2_audio_out_window_ParamLimits

0x51bb,	// (0x0008215d) popup_call2_audio_out_window

0x5225,	// (0x000821c7) popup_call2_audio_second_window_ParamLimits

0x5225,	// (0x000821c7) popup_call2_audio_second_window

0x5283,	// (0x00082225) popup_call2_audio_wait_window_ParamLimits

0x5283,	// (0x00082225) popup_call2_audio_wait_window

0xa5f4,	// (0x00087596) bg_popup_call2_act_pane_cp03

0xa831,	// (0x000877d3) list_conf_pane_cp

0xb8a7,	// (0x00088849) popup_call2_audio_conf_window_t1

0xb8b5,	// (0x00088857) list_single_graphic_popup_conf2_pane_ParamLimits

0xb8b5,	// (0x00088857) list_single_graphic_popup_conf2_pane

0xb259,	// (0x000881fb) list_highlight_pane_cp04

0xb8c8,	// (0x0008886a) list_single_graphic_popup_conf2_pane_g1

0xb26a,	// (0x0008820c) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf517,	// (0x0008c4b9) list_single_graphic_popup_conf2_pane_g

0xb8d2,	// (0x00088874) list_single_graphic_popup_conf2_pane_t1

0xb8e0,	// (0x00088882) bg_popup_call2_act_pane_cp01_ParamLimits

0xb8e0,	// (0x00088882) bg_popup_call2_act_pane_cp01

0xb96a,	// (0x0008890c) call_type_pane_cp05_ParamLimits

0xb96a,	// (0x0008890c) call_type_pane_cp05

0xb9be,	// (0x00088960) popup_call2_audio_second_window_g1_ParamLimits

0xb9be,	// (0x00088960) popup_call2_audio_second_window_g1

0xba12,	// (0x000889b4) popup_call2_audio_second_window_g2_ParamLimits

0xba12,	// (0x000889b4) popup_call2_audio_second_window_g2

0x0002,

0xf51c,	// (0x0008c4be) popup_call2_audio_second_window_g_ParamLimits

0xf51c,	// (0x0008c4be) popup_call2_audio_second_window_g

0xba77,	// (0x00088a19) popup_call2_audio_second_window_t1_ParamLimits

0xba77,	// (0x00088a19) popup_call2_audio_second_window_t1

0xbb32,	// (0x00088ad4) popup_call2_audio_second_window_t2_ParamLimits

0xbb32,	// (0x00088ad4) popup_call2_audio_second_window_t2

0xbb85,	// (0x00088b27) popup_call2_audio_second_window_t3_ParamLimits

0xbb85,	// (0x00088b27) popup_call2_audio_second_window_t3

0x0003,

0xf523,	// (0x0008c4c5) popup_call2_audio_second_window_t_ParamLimits

0xf523,	// (0x0008c4c5) popup_call2_audio_second_window_t

0xa5f4,	// (0x00087596) bg_popup_call2_in_pane_cp02

0xa5fe,	// (0x000875a0) call_type_pane_cp04

0xa606,	// (0x000875a8) popup_call2_audio_wait_window_g1

0xa60e,	// (0x000875b0) popup_call2_audio_wait_window_g2

0x0001,

0xf0fc,	// (0x0008c09e) popup_call2_audio_wait_window_g

0xa616,	// (0x000875b8) popup_call2_audio_wait_window_t3

0xbc78,	// (0x00088c1a) bg_popup_call2_act_pane_ParamLimits

0xbc78,	// (0x00088c1a) bg_popup_call2_act_pane

0xbd38,	// (0x00088cda) call_type_pane_cp03_ParamLimits

0xbd38,	// (0x00088cda) call_type_pane_cp03

0xbd9c,	// (0x00088d3e) popup_call2_audio_first_window_g1_ParamLimits

0xbd9c,	// (0x00088d3e) popup_call2_audio_first_window_g1

0xbe0c,	// (0x00088dae) popup_call2_audio_first_window_g2_ParamLimits

0xbe0c,	// (0x00088dae) popup_call2_audio_first_window_g2

0xb347,	// (0x000882e9) popup_call2_audio_first_window_g3_ParamLimits

0xb347,	// (0x000882e9) popup_call2_audio_first_window_g3

0x0004,

0xf52c,	// (0x0008c4ce) popup_call2_audio_first_window_g_ParamLimits

0xf52c,	// (0x0008c4ce) popup_call2_audio_first_window_g

0xbeea,	// (0x00088e8c) popup_call2_audio_first_window_t1_ParamLimits

0xbeea,	// (0x00088e8c) popup_call2_audio_first_window_t1

0xbfed,	// (0x00088f8f) popup_call2_audio_first_window_t4_ParamLimits

0xbfed,	// (0x00088f8f) popup_call2_audio_first_window_t4

0xc0d0,	// (0x00089072) popup_call2_audio_first_window_t5_ParamLimits

0xc0d0,	// (0x00089072) popup_call2_audio_first_window_t5

0x0003,

0xf537,	// (0x0008c4d9) popup_call2_audio_first_window_t_ParamLimits

0xf537,	// (0x0008c4d9) popup_call2_audio_first_window_t

0xa847,	// (0x000877e9) bg_popup_call2_act_pane_g1

0xc73f,	// (0x000896e1) popup_cale_lunar_info_window_t1

0xc74d,	// (0x000896ef) popup_cale_lunar_info_window_t2

0xc75b,	// (0x000896fd) popup_cale_lunar_info_window_t3

0xa5f4,	// (0x00087596) bg_popup_call2_bubble_pane

0xc1d1,	// (0x00089173) bg_popup_call2_in_pane_cp01_ParamLimits

0xc1d1,	// (0x00089173) bg_popup_call2_in_pane_cp01

0xa2d0,	// (0x00087272) call_type_pane_cp02

0xc219,	// (0x000891bb) popup_call2_audio_out_window_g1_ParamLimits

0xc219,	// (0x000891bb) popup_call2_audio_out_window_g1

0xc245,	// (0x000891e7) popup_call2_audio_out_window_g2_ParamLimits

0xc245,	// (0x000891e7) popup_call2_audio_out_window_g2

0xc26d,	// (0x0008920f) popup_call2_audio_out_window_g3_ParamLimits

0xc26d,	// (0x0008920f) popup_call2_audio_out_window_g3

0x0003,

0xf540,	// (0x0008c4e2) popup_call2_audio_out_window_g_ParamLimits

0xf540,	// (0x0008c4e2) popup_call2_audio_out_window_g

0xc2a8,	// (0x0008924a) popup_call2_audio_out_window_t1_ParamLimits

0xc2a8,	// (0x0008924a) popup_call2_audio_out_window_t1

0xc307,	// (0x000892a9) popup_call2_audio_out_window_t2_ParamLimits

0xc307,	// (0x000892a9) popup_call2_audio_out_window_t2

0xc35b,	// (0x000892fd) popup_call2_audio_out_window_t3_ParamLimits

0xc35b,	// (0x000892fd) popup_call2_audio_out_window_t3

0xc371,	// (0x00089313) popup_call2_audio_out_window_t4_ParamLimits

0xc371,	// (0x00089313) popup_call2_audio_out_window_t4

0xc387,	// (0x00089329) popup_call2_audio_out_window_t5_ParamLimits

0xc387,	// (0x00089329) popup_call2_audio_out_window_t5

0x0005,

0xf549,	// (0x0008c4eb) popup_call2_audio_out_window_t_ParamLimits

0xf549,	// (0x0008c4eb) popup_call2_audio_out_window_t

0xc3eb,	// (0x0008938d) bg_popup_call2_in_pane_ParamLimits

0xc3eb,	// (0x0008938d) bg_popup_call2_in_pane

0xc447,	// (0x000893e9) popup_call2_audio_in_window_g1_ParamLimits

0xc447,	// (0x000893e9) popup_call2_audio_in_window_g1

0xc47f,	// (0x00089421) popup_call2_audio_in_window_g2_ParamLimits

0xc47f,	// (0x00089421) popup_call2_audio_in_window_g2

0xc4b7,	// (0x00089459) popup_call2_audio_in_window_g3_ParamLimits

0xc4b7,	// (0x00089459) popup_call2_audio_in_window_g3

0x0003,

0xf556,	// (0x0008c4f8) popup_call2_audio_in_window_g_ParamLimits

0xf556,	// (0x0008c4f8) popup_call2_audio_in_window_g

0xc50f,	// (0x000894b1) popup_call2_audio_in_window_t1_ParamLimits

0xc50f,	// (0x000894b1) popup_call2_audio_in_window_t1

0xc58f,	// (0x00089531) popup_call2_audio_in_window_t2_ParamLimits

0xc58f,	// (0x00089531) popup_call2_audio_in_window_t2

0xc60f,	// (0x000895b1) popup_call2_audio_in_window_t3_ParamLimits

0xc60f,	// (0x000895b1) popup_call2_audio_in_window_t3

0xc629,	// (0x000895cb) popup_call2_audio_in_window_t4_ParamLimits

0xc629,	// (0x000895cb) popup_call2_audio_in_window_t4

0xc63b,	// (0x000895dd) popup_call2_audio_in_window_t5_ParamLimits

0xc63b,	// (0x000895dd) popup_call2_audio_in_window_t5

0xc650,	// (0x000895f2) popup_call2_audio_in_window_t6_ParamLimits

0xc650,	// (0x000895f2) popup_call2_audio_in_window_t6

0x0005,

0xf55f,	// (0x0008c501) popup_call2_audio_in_window_t_ParamLimits

0xf55f,	// (0x0008c501) popup_call2_audio_in_window_t

0xa847,	// (0x000877e9) bg_popup_call2_in_pane_g1

0xc769,	// (0x0008970b) popup_cale_lunar_info_window_t4

0x0003,

0xf5c7,	// (0x0008c569) popup_cale_lunar_info_window_t

0xa84f,	// (0x000877f1) bg_popup_call2_rect_pane_ParamLimits

0xa84f,	// (0x000877f1) bg_popup_call2_rect_pane

0xa5f4,	// (0x00087596) call2_cli_visual_graphic_pane

0xa5f4,	// (0x00087596) call2_cli_visual_text_pane

0x574b,	// (0x000826ed) smil_status_volume_pane_g3

0x0002,

0xa997,	// (0x00087939) call2_cli_visual_graphic_pane_g1

0xa997,	// (0x00087939) call2_cli_visual_graphic_pane_g2

0xa997,	// (0x00087939) call2_cli_visual_graphic_pane_g3

0x0002,

0xf56c,	// (0x0008c50e) call2_cli_visual_graphic_pane_g

0xc665,	// (0x00089607) bg_popup_call2_rect_pane_g1

0xaa35,	// (0x000879d7) bg_popup_call2_rect_pane_g2

0xc66d,	// (0x0008960f) bg_popup_call2_rect_pane_g3

0xc675,	// (0x00089617) bg_popup_call2_rect_pane_g4

0xc67d,	// (0x0008961f) bg_popup_call2_rect_pane_g5

0xc685,	// (0x00089627) bg_popup_call2_rect_pane_g6

0xc68d,	// (0x0008962f) bg_popup_call2_rect_pane_g7

0xc695,	// (0x00089637) bg_popup_call2_rect_pane_g8

0xc69d,	// (0x0008963f) bg_popup_call2_rect_pane_g9

0x0008,

0xf573,	// (0x0008c515) bg_popup_call2_rect_pane_g

0xc6a5,	// (0x00089647) bg_popup_call2_bubble_pane_g1

0xc6ad,	// (0x0008964f) bg_popup_call2_bubble_pane_g2

0xc6b5,	// (0x00089657) bg_popup_call2_bubble_pane_g3

0xc6bd,	// (0x0008965f) bg_popup_call2_bubble_pane_g4

0xc6c5,	// (0x00089667) bg_popup_call2_bubble_pane_g5

0xc6cd,	// (0x0008966f) bg_popup_call2_bubble_pane_g6

0xc6d5,	// (0x00089677) bg_popup_call2_bubble_pane_g7

0xc6dd,	// (0x0008967f) bg_popup_call2_bubble_pane_g8

0xc6e5,	// (0x00089687) bg_popup_call2_bubble_pane_g9

0x0008,

0xf586,	// (0x0008c528) bg_popup_call2_bubble_pane_g

0x2710,	// (0x0007f6b2) aid_cale_week_size_cell_pane

0x3039,	// (0x0007ffdb) aid_cams_cif_uncrop_pane_ParamLimits

0x3039,	// (0x0007ffdb) aid_cams_cif_uncrop_pane

0x3196,	// (0x00080138) aid_cams_size_cell_ParamLimits

0x3196,	// (0x00080138) aid_cams_size_cell

0x31a2,	// (0x00080144) grid_cams_pane_ParamLimits

0x31b0,	// (0x00080152) linegrid_cams_pane_ParamLimits

0x3299,	// (0x0008023b) call_video_pane_t1

0x32b6,	// (0x00080258) call_video_pane_t2

0x0001,

0xf273,	// (0x0008c215) call_video_pane_t

0x3782,	// (0x00080724) aid_cale_month_size_cell_pane_ParamLimits

0x3782,	// (0x00080724) aid_cale_month_size_cell_pane

0xf610,	// (0x0008c5b2) smil_status_volume_pane_g

0x5758,	// (0x000826fa) volume_smil_pane_ParamLimits

0xa1a2,	// (0x00087144) aid_popup2_width_pane

0x2612,	// (0x0007f5b4) cell_qdial_pane_g4_ParamLimits

0x2612,	// (0x0007f5b4) cell_qdial_pane_g4

0x46b8,	// (0x0008165a) aid_blid_cardinal_pane_ParamLimits

0x46c8,	// (0x0008166a) aid_blid_destination_pane_ParamLimits

0x46c8,	// (0x0008166a) aid_blid_destination_pane

0xa84f,	// (0x000877f1) bg_popup_call_poc_act_pane_ParamLimits

0xa84f,	// (0x000877f1) bg_popup_call_poc_act_pane

0xa84f,	// (0x000877f1) bg_popup_call_poc_inact_pane_ParamLimits

0xa84f,	// (0x000877f1) bg_popup_call_poc_inact_pane

0xc6ed,	// (0x0008968f) bg_popup_call_poc_act_pane_g1

0xc6f5,	// (0x00089697) bg_popup_call_poc_act_pane_g2

0xc6fd,	// (0x0008969f) bg_popup_call_poc_act_pane_g3

0xc6bd,	// (0x0008965f) bg_popup_call_poc_act_pane_g4

0xc6c5,	// (0x00089667) bg_popup_call_poc_act_pane_g5

0xc705,	// (0x000896a7) bg_popup_call_poc_act_pane_g6

0xc6d5,	// (0x00089677) bg_popup_call_poc_act_pane_g7

0xc70d,	// (0x000896af) bg_popup_call_poc_act_pane_g8

0xa5f4,	// (0x00087596) main_usb_pane

0xc876,	// (0x00089818) popup_cale_lunar_info_window

0x35ce,	// (0x00080570) im_reading_pane_t1_ParamLimits

0xac13,	// (0x00087bb5) list_im_pane_ParamLimits

0xac24,	// (0x00087bc6) scroll_pane_cp07_ParamLimits

0xa5f4,	// (0x00087596) grid_highlight_pane_cp012

0xa84f,	// (0x000877f1) mup_scale_pane_ParamLimits

0xb347,	// (0x000882e9) main_usb_pane_g1_ParamLimits

0xb347,	// (0x000882e9) main_usb_pane_g1

0x52ec,	// (0x0008228e) main_usb_pane_g2_ParamLimits

0x52ec,	// (0x0008228e) main_usb_pane_g2

0x0001,

0xf5b0,	// (0x0008c552) main_usb_pane_g_ParamLimits

0xf5b0,	// (0x0008c552) main_usb_pane_g

0x52f8,	// (0x0008229a) main_usb_pane_t1_ParamLimits

0x52f8,	// (0x0008229a) main_usb_pane_t1

0x530a,	// (0x000822ac) main_usb_pane_t2_ParamLimits

0x530a,	// (0x000822ac) main_usb_pane_t2

0x531c,	// (0x000822be) main_usb_pane_t3_ParamLimits

0x531c,	// (0x000822be) main_usb_pane_t3

0x532e,	// (0x000822d0) main_usb_pane_t4_ParamLimits

0x532e,	// (0x000822d0) main_usb_pane_t4

0x5340,	// (0x000822e2) main_usb_pane_t5_ParamLimits

0x5340,	// (0x000822e2) main_usb_pane_t5

0x5352,	// (0x000822f4) main_usb_pane_t6_ParamLimits

0x5352,	// (0x000822f4) main_usb_pane_t6

0x0005,

0xf5b5,	// (0x0008c557) main_usb_pane_t_ParamLimits

0x4657,	// (0x000815f9) aid_text_placing

0x4662,	// (0x00081604) main_location2_pane_t1_ParamLimits

0x4678,	// (0x0008161a) main_location2_pane_t2_ParamLimits

0x468e,	// (0x00081630) main_location2_pane_t3_ParamLimits

0x46a4,	// (0x00081646) main_location2_pane_t4_ParamLimits

0x46a4,	// (0x00081646) main_location2_pane_t4

0xf3d4,	// (0x0008c376) main_location2_pane_t_ParamLimits

0xa88b,	// (0x0008782d) find_pinb_pane_g2_ParamLimits

0xa88b,	// (0x0008782d) find_pinb_pane_g2

0x0001,

0xf122,	// (0x0008c0c4) find_pinb_pane_g_ParamLimits

0xf122,	// (0x0008c0c4) find_pinb_pane_g

0xa897,	// (0x00087839) find_pinb_pane_t1_ParamLimits

0xa8d7,	// (0x00087879) find_pinb_pane_t2_ParamLimits

0xf127,	// (0x0008c0c9) find_pinb_pane_t_ParamLimits

0xa5f4,	// (0x00087596) main_call3_pane

0x3d01,	// (0x00080ca3) cale_month_day_heading_pane_t1_ParamLimits

0x3d83,	// (0x00080d25) cale_month_day_heading_pane_t2_ParamLimits

0x3e10,	// (0x00080db2) cale_month_day_heading_pane_t3_ParamLimits

0x3e9d,	// (0x00080e3f) cale_month_day_heading_pane_t4_ParamLimits

0x3f2a,	// (0x00080ecc) cale_month_day_heading_pane_t5_ParamLimits

0x3fbf,	// (0x00080f61) cale_month_day_heading_pane_t6_ParamLimits

0x405c,	// (0x00080ffe) cale_month_day_heading_pane_t7_ParamLimits

0xf2ab,	// (0x0008c24d) cale_month_day_heading_pane_t_ParamLimits

0x4308,	// (0x000812aa) smil_status_volume_pane

0x4eaa,	// (0x00081e4c) postcard_address_pane_ParamLimits

0x4eaa,	// (0x00081e4c) postcard_address_pane

0x4eb8,	// (0x00081e5a) postcard_message_pane_ParamLimits

0x4eb8,	// (0x00081e5a) postcard_message_pane

0x52c2,	// (0x00082264) call2_cli_visual_pane_t1_ParamLimits

0x52c2,	// (0x00082264) call2_cli_visual_pane_t1

0x58b7,	// (0x00082859) postcard_message_pane_t1_ParamLimits

0x58b7,	// (0x00082859) postcard_message_pane_t1

0x58a0,	// (0x00082842) postcard_address_pane_t1_ParamLimits

0x58a0,	// (0x00082842) postcard_address_pane_t1

0x5891,	// (0x00082833) popup_call3_audio_in_window_ParamLimits

0x5891,	// (0x00082833) popup_call3_audio_in_window

0x576f,	// (0x00082711) bg_popup_call3_in_pane_ParamLimits

0x576f,	// (0x00082711) bg_popup_call3_in_pane

0x57d7,	// (0x00082779) popup_call3_audio_in_window_g1_ParamLimits

0x57d7,	// (0x00082779) popup_call3_audio_in_window_g1

0x57ef,	// (0x00082791) popup_call3_audio_in_window_g2_ParamLimits

0x57ef,	// (0x00082791) popup_call3_audio_in_window_g2

0x5807,	// (0x000827a9) popup_call3_audio_in_window_g3_ParamLimits

0x5807,	// (0x000827a9) popup_call3_audio_in_window_g3

0x0003,

0xf617,	// (0x0008c5b9) popup_call3_audio_in_window_g_ParamLimits

0xf617,	// (0x0008c5b9) popup_call3_audio_in_window_g

0x582f,	// (0x000827d1) popup_call3_audio_in_window_t1_ParamLimits

0x582f,	// (0x000827d1) popup_call3_audio_in_window_t1

0x5857,	// (0x000827f9) popup_call3_audio_in_window_t2_ParamLimits

0x5857,	// (0x000827f9) popup_call3_audio_in_window_t2

0x587f,	// (0x00082821) popup_call3_audio_in_window_t3_ParamLimits

0x587f,	// (0x00082821) popup_call3_audio_in_window_t3

0x0002,

0xf620,	// (0x0008c5c2) popup_call3_audio_in_window_t_ParamLimits

0xf620,	// (0x0008c5c2) popup_call3_audio_in_window_t

0xb452,	// (0x000883f4) bg_popup_call3_rect_pane

0xc665,	// (0x00089607) bg_popup_call3_rect_pane_g1

0xaa35,	// (0x000879d7) bg_popup_call3_rect_pane_g2

0xc66d,	// (0x0008960f) bg_popup_call3_rect_pane_g3

0xc675,	// (0x00089617) bg_popup_call3_rect_pane_g4

0xc67d,	// (0x0008961f) bg_popup_call3_rect_pane_g5

0xc685,	// (0x00089627) bg_popup_call3_rect_pane_g6

0xc68d,	// (0x0008962f) bg_popup_call3_rect_pane_g7

0x4afe,	// (0x00081aa0) mup_visualizer_osc_pane

0xb511,	// (0x000884b3) mup_visualizer_spec_pane

0x578f,	// (0x00082731) call3_video_qcif_pane_ParamLimits

0x578f,	// (0x00082731) call3_video_qcif_pane

0x57a1,	// (0x00082743) call3_video_qcif_uncrop_pane_ParamLimits

0x57a1,	// (0x00082743) call3_video_qcif_uncrop_pane

0x57b1,	// (0x00082753) call3_video_subqcif_pane_ParamLimits

0x57b1,	// (0x00082753) call3_video_subqcif_pane

0x57c5,	// (0x00082767) call3_video_subqcif_uncrop_pane_ParamLimits

0x57c5,	// (0x00082767) call3_video_subqcif_uncrop_pane

0x581f,	// (0x000827c1) popup_call3_audio_in_window_g4_ParamLimits

0x581f,	// (0x000827c1) popup_call3_audio_in_window_g4

0x573a,	// (0x000826dc) mup_spec_half_pane

0x5743,	// (0x000826e5) mup_spec_half_pane_cp

0xc911,	// (0x000898b3) mup_osc_middle_pane

0xc91a,	// (0x000898bc) mup_visualizer_osc_pane_g1

0x571a,	// (0x000826bc) mup_spec_bar_pane_ParamLimits

0x571a,	// (0x000826bc) mup_spec_bar_pane

0xc8fe,	// (0x000898a0) mup_spec_bar_pane_g1

0xc908,	// (0x000898aa) mup_spec_bar_pane_g2

0x0001,

0xf60b,	// (0x0008c5ad) mup_spec_bar_pane_g

0x2710,	// (0x0007f6b2) aid_cale_week_size_cell_pane_ParamLimits

0x272a,	// (0x0007f6cc) bg_cale_heading_pane_ParamLimits

0xaa69,	// (0x00087a0b) bg_cale_pane_cp01_ParamLimits

0x2753,	// (0x0007f6f5) cale_week_corner_pane_ParamLimits

0x2772,	// (0x0007f714) cale_week_day_heading_pane_ParamLimits

0x27a0,	// (0x0007f742) cale_week_scroll_pane_g1_ParamLimits

0x27c4,	// (0x0007f766) cale_week_scroll_pane_g2_ParamLimits

0x27dc,	// (0x0007f77e) cale_week_scroll_pane_g3_ParamLimits

0x27f4,	// (0x0007f796) cale_week_scroll_pane_g4_ParamLimits

0x280c,	// (0x0007f7ae) cale_week_scroll_pane_g5_ParamLimits

0x2824,	// (0x0007f7c6) cale_week_scroll_pane_g6_ParamLimits

0x2844,	// (0x0007f7e6) cale_week_scroll_pane_g7_ParamLimits

0x2864,	// (0x0007f806) cale_week_scroll_pane_g8_ParamLimits

0x2884,	// (0x0007f826) cale_week_scroll_pane_g9_ParamLimits

0x28a1,	// (0x0007f843) cale_week_scroll_pane_g10_ParamLimits

0x28be,	// (0x0007f860) cale_week_scroll_pane_g11_ParamLimits

0x28db,	// (0x0007f87d) cale_week_scroll_pane_g12_ParamLimits

0x28f8,	// (0x0007f89a) cale_week_scroll_pane_g13_ParamLimits

0x291d,	// (0x0007f8bf) cale_week_scroll_pane_g14_ParamLimits

0x2946,	// (0x0007f8e8) cale_week_scroll_pane_g15_ParamLimits

0xf1b3,	// (0x0008c155) cale_week_scroll_pane_g_ParamLimits

0x296f,	// (0x0007f911) cale_week_time_pane_ParamLimits

0x298f,	// (0x0007f931) grid_cale_week_pane_ParamLimits

0xaa87,	// (0x00087a29) listscroll_cale_week_pane_t1

0xaa99,	// (0x00087a3b) scroll_pane_cp08_ParamLimits

0x37ef,	// (0x00080791) cale_month_corner_pane_ParamLimits

0xae44,	// (0x00087de6) cale_month_pane_t1

0x3c93,	// (0x00080c35) cale_month_week_pane_ParamLimits

0xb347,	// (0x000882e9) popup_call_status_window_g1_ParamLimits

0x4460,	// (0x00081402) popup_call_status_window_g2_ParamLimits

0x446c,	// (0x0008140e) popup_call_status_window_g3_ParamLimits

0xf35b,	// (0x0008c2fd) popup_call_status_window_g_ParamLimits

0xb1da,	// (0x0008817c) aid_call2_pane

0x0e16,	// (0x0007ddb8) msg_header_pane_g1

0x4eaa,	// (0x00081e4c) postcard_address2_pane_ParamLimits

0x4eaa,	// (0x00081e4c) postcard_address2_pane

0x4eb8,	// (0x00081e5a) postcard_message2_pane_ParamLimits

0x4eb8,	// (0x00081e5a) postcard_message2_pane

0x56c1,	// (0x00082663) message2_row_pane_ParamLimits

0x56c1,	// (0x00082663) message2_row_pane

0x56db,	// (0x0008267d) address2_row_pane_ParamLimits

0x56db,	// (0x0008267d) address2_row_pane

0xc8cc,	// (0x0008986e) postcard_message2_row_pane_g1

0xc8d4,	// (0x00089876) postcard_message2_row_pane_t1

0xc8cc,	// (0x0008986e) address2_row_pane_g1

0xc8d4,	// (0x00089876) address2_row_pane_t1

0x2eed,	// (0x0007fe8f) aid_size_cell_vorec

0xa5f4,	// (0x00087596) main_rss_pane

0x56ee,	// (0x00082690) rss_list_single_pane_ParamLimits

0x56ee,	// (0x00082690) rss_list_single_pane

0xc8e2,	// (0x00089884) rss_list_single_pane_t1

0xc8f0,	// (0x00089892) rss_list_single_pane_t2

0x0001,

0xf606,	// (0x0008c5a8) rss_list_single_pane_t

0xa5f4,	// (0x00087596) main_camera2_pane

0xa5f4,	// (0x00087596) main_video2_pane

0x591b,	// (0x000828bd) cams_zoom_pane_cp2_ParamLimits

0x591b,	// (0x000828bd) cams_zoom_pane_cp2

0x5927,	// (0x000828c9) image2_vga_pane_ParamLimits

0x5927,	// (0x000828c9) image2_vga_pane

0x5936,	// (0x000828d8) main_camera2_pane_g1_ParamLimits

0x5936,	// (0x000828d8) main_camera2_pane_g1

0x5942,	// (0x000828e4) main_camera2_pane_g2_ParamLimits

0x5942,	// (0x000828e4) main_camera2_pane_g2

0x594e,	// (0x000828f0) main_camera2_pane_g3_ParamLimits

0x594e,	// (0x000828f0) main_camera2_pane_g3

0x595a,	// (0x000828fc) main_camera2_pane_g4_ParamLimits

0x595a,	// (0x000828fc) main_camera2_pane_g4

0x5966,	// (0x00082908) main_camera2_pane_g5_ParamLimits

0x5966,	// (0x00082908) main_camera2_pane_g5

0x5972,	// (0x00082914) main_camera2_pane_g6_ParamLimits

0x5972,	// (0x00082914) main_camera2_pane_g6

0x597e,	// (0x00082920) main_camera2_pane_g7_ParamLimits

0x597e,	// (0x00082920) main_camera2_pane_g7

0x598a,	// (0x0008292c) main_camera2_pane_g8_ParamLimits

0x598a,	// (0x0008292c) main_camera2_pane_g8

0x0008,

0xf627,	// (0x0008c5c9) main_camera2_pane_g_ParamLimits

0xf627,	// (0x0008c5c9) main_camera2_pane_g

0x59a2,	// (0x00082944) main_camera2_pane_t1_ParamLimits

0x59a2,	// (0x00082944) main_camera2_pane_t1

0x59b4,	// (0x00082956) main_camera2_pane_t2_ParamLimits

0x59b4,	// (0x00082956) main_camera2_pane_t2

0x59c6,	// (0x00082968) main_camera2_pane_t3_ParamLimits

0x59c6,	// (0x00082968) main_camera2_pane_t3

0x59d8,	// (0x0008297a) main_camera2_pane_t4_ParamLimits

0x59d8,	// (0x0008297a) main_camera2_pane_t4

0x0006,

0xf63a,	// (0x0008c5dc) main_camera2_pane_t_ParamLimits

0xf63a,	// (0x0008c5dc) main_camera2_pane_t

0x5a35,	// (0x000829d7) cams_zoom_pane_cp4_ParamLimits

0x5a35,	// (0x000829d7) cams_zoom_pane_cp4

0x5a45,	// (0x000829e7) image2_cif_pane_ParamLimits

0x5a45,	// (0x000829e7) image2_cif_pane

0x5a5a,	// (0x000829fc) image2_subqcif_pane_ParamLimits

0x5a5a,	// (0x000829fc) image2_subqcif_pane

0x5a69,	// (0x00082a0b) main_video2_pane_g1_ParamLimits

0x5a69,	// (0x00082a0b) main_video2_pane_g1

0x5a7b,	// (0x00082a1d) main_video2_pane_g2_ParamLimits

0x5a7b,	// (0x00082a1d) main_video2_pane_g2

0x5a8b,	// (0x00082a2d) main_video2_pane_g3_ParamLimits

0x5a8b,	// (0x00082a2d) main_video2_pane_g3

0x5a9b,	// (0x00082a3d) main_video2_pane_g4_ParamLimits

0x5a9b,	// (0x00082a3d) main_video2_pane_g4

0x5aab,	// (0x00082a4d) main_video2_pane_g5_ParamLimits

0x5aab,	// (0x00082a4d) main_video2_pane_g5

0x5abb,	// (0x00082a5d) main_video2_pane_g6_ParamLimits

0x5abb,	// (0x00082a5d) main_video2_pane_g6

0x0005,

0xf649,	// (0x0008c5eb) main_video2_pane_g_ParamLimits

0xf649,	// (0x0008c5eb) main_video2_pane_g

0x5acd,	// (0x00082a6f) main_video2_pane_t1_ParamLimits

0x5acd,	// (0x00082a6f) main_video2_pane_t1

0x5ae7,	// (0x00082a89) main_video2_pane_t2_ParamLimits

0x5ae7,	// (0x00082a89) main_video2_pane_t2

0x5b0d,	// (0x00082aaf) main_video2_pane_t3_ParamLimits

0x5b0d,	// (0x00082aaf) main_video2_pane_t3

0x0002,

0xf656,	// (0x0008c5f8) main_video2_pane_t_ParamLimits

0xf656,	// (0x0008c5f8) main_video2_pane_t

0x5409,	// (0x000823ab) call_muted_g2

0x0001,

0xf5f8,	// (0x0008c59a) call_muted_g

0xa5f4,	// (0x00087596) main_mup2_pane

0xc951,	// (0x000898f3) main_mup2_pane_g1_ParamLimits

0xc951,	// (0x000898f3) main_mup2_pane_g1

0x5b33,	// (0x00082ad5) main_mup2_pane_g2_ParamLimits

0x5b33,	// (0x00082ad5) main_mup2_pane_g2

0x5dc5,	// (0x00082d67) main_mup_pane_g13_cp1

0x5dcd,	// (0x00082d6f) mup_volume_pane_cp1

0x5b55,	// (0x00082af7) main_mup2_pane_g4_ParamLimits

0x5b55,	// (0x00082af7) main_mup2_pane_g4

0x5b6a,	// (0x00082b0c) main_mup2_pane_g5_ParamLimits

0x5b6a,	// (0x00082b0c) main_mup2_pane_g5

0x5b7f,	// (0x00082b21) main_mup2_pane_g6_ParamLimits

0x5b7f,	// (0x00082b21) main_mup2_pane_g6

0x5b94,	// (0x00082b36) main_mup2_pane_g7_ParamLimits

0x5b94,	// (0x00082b36) main_mup2_pane_g7

0x0006,

0xf65d,	// (0x0008c5ff) main_mup2_pane_g_ParamLimits

0xf65d,	// (0x0008c5ff) main_mup2_pane_g

0x5bb0,	// (0x00082b52) main_mup2_pane_t1_ParamLimits

0x5bb0,	// (0x00082b52) main_mup2_pane_t1

0x5bc7,	// (0x00082b69) main_mup2_pane_t2_ParamLimits

0x5bc7,	// (0x00082b69) main_mup2_pane_t2

0x5bde,	// (0x00082b80) main_mup2_pane_t3_ParamLimits

0x5bde,	// (0x00082b80) main_mup2_pane_t3

0x5bf5,	// (0x00082b97) main_mup2_pane_t4_ParamLimits

0x5bf5,	// (0x00082b97) main_mup2_pane_t4

0x5c0f,	// (0x00082bb1) main_mup2_pane_t5_ParamLimits

0x5c0f,	// (0x00082bb1) main_mup2_pane_t5

0x5c29,	// (0x00082bcb) main_mup2_pane_t6_ParamLimits

0x5c29,	// (0x00082bcb) main_mup2_pane_t6

0x0005,

0xf66c,	// (0x0008c60e) main_mup2_pane_t_ParamLimits

0xf66c,	// (0x0008c60e) main_mup2_pane_t

0x5c61,	// (0x00082c03) mup2_visualizer_pane_ParamLimits

0x5c61,	// (0x00082c03) mup2_visualizer_pane

0x5c97,	// (0x00082c39) mup_progress_pane_cp_ParamLimits

0x5c97,	// (0x00082c39) mup_progress_pane_cp

0x5db0,	// (0x00082d52) mup_volume_pane_cp_ParamLimits

0x5db0,	// (0x00082d52) mup_volume_pane_cp

0x5cb0,	// (0x00082c52) mup2_visualizer_pane_g1_ParamLimits

0x5cb0,	// (0x00082c52) mup2_visualizer_pane_g1

0xc95d,	// (0x000898ff) mup2_visualizer_pane_g2_ParamLimits

0xc95d,	// (0x000898ff) mup2_visualizer_pane_g2

0x5cc5,	// (0x00082c67) mup2_visualizer_pane_g3_ParamLimits

0x5cc5,	// (0x00082c67) mup2_visualizer_pane_g3

0x0002,

0xf679,	// (0x0008c61b) mup2_visualizer_pane_g_ParamLimits

0xf679,	// (0x0008c61b) mup2_visualizer_pane_g

0xb731,	// (0x000886d3) aid_size_cell_fmradio

0x551f,	// (0x000824c1) aid_height_parent_landcape

0xaca2,	// (0x00087c44) wml_content_pane_cp

0xacaa,	// (0x00087c4c) wml_tabs_pane

0xacb3,	// (0x00087c55) popup_wml_miniature_window

0xacbb,	// (0x00087c5d) scroll_pane_cp021

0xaccf,	// (0x00087c71) wml_content_pane_comp8

0xa5f4,	// (0x00087596) bg_popup_sub_pane_cp05

0xc97b,	// (0x0008991d) popup_wml_miniature_window_g1

0xc983,	// (0x00089925) wml_miniature_view_pane

0x5cd3,	// (0x00082c75) aid_size_wml_view

0x5cdb,	// (0x00082c7d) wml_miniature_view_pane_g1

0x5ce4,	// (0x00082c86) wml_miniature_view_pane_g2

0x5ced,	// (0x00082c8f) wml_miniature_view_pane_g3

0x5cf5,	// (0x00082c97) wml_miniature_view_pane_g4

0x5cfd,	// (0x00082c9f) wml_miniature_view_pane_g5

0x5d05,	// (0x00082ca7) wml_miniature_view_pane_g6

0x5d0d,	// (0x00082caf) wml_miniature_view_pane_g7

0x5d15,	// (0x00082cb7) wml_miniature_view_pane_g8

0x0007,

0xf680,	// (0x0008c622) wml_miniature_view_pane_g

0xc951,	// (0x000898f3) background_graphic_ParamLimits

0xc951,	// (0x000898f3) background_graphic

0xc98b,	// (0x0008992d) wml_tabs_2_pane

0xc994,	// (0x00089936) wml_tabs_3_pane_ParamLimits

0xc994,	// (0x00089936) wml_tabs_3_pane

0xc9a6,	// (0x00089948) wml_tabs_4_pane_ParamLimits

0xc9a6,	// (0x00089948) wml_tabs_4_pane

0xc9bc,	// (0x0008995e) wml_tabs_5_pane_ParamLimits

0xc9bc,	// (0x0008995e) wml_tabs_5_pane

0xc9d6,	// (0x00089978) wml_tabs_pane_g2_ParamLimits

0xc9d6,	// (0x00089978) wml_tabs_pane_g2

0xc9ea,	// (0x0008998c) wml_tabs_pane_g3_ParamLimits

0xc9ea,	// (0x0008998c) wml_tabs_pane_g3

0x5d1d,	// (0x00082cbf) wml_tabs_2_active_pane_ParamLimits

0x5d1d,	// (0x00082cbf) wml_tabs_2_active_pane

0x5d2f,	// (0x00082cd1) wml_tabs_2_passive_pane_ParamLimits

0x5d2f,	// (0x00082cd1) wml_tabs_2_passive_pane

0x5d41,	// (0x00082ce3) wml_tabs_3_active_pane_cp_ParamLimits

0x5d41,	// (0x00082ce3) wml_tabs_3_active_pane_cp

0x5d54,	// (0x00082cf6) wml_tabs_3_passive_pane_ParamLimits

0x5d54,	// (0x00082cf6) wml_tabs_3_passive_pane

0x5d65,	// (0x00082d07) wml_tabs_3_passive_pane_cp_ParamLimits

0x5d65,	// (0x00082d07) wml_tabs_3_passive_pane_cp

0x5d7a,	// (0x00082d1c) tabs_4_active_pane

0x5d82,	// (0x00082d24) tabs_4_passive_pane

0x5d8a,	// (0x00082d2c) tabs_4_passive_pane_cp

0x5d92,	// (0x00082d34) tabs_4_passive_pane_cp2

0x52e4,	// (0x00082286) aid_height_text

0x4ac7,	// (0x00081a69) mup_volume_cont_pane_ParamLimits

0x4ac7,	// (0x00081a69) mup_volume_cont_pane

0x2268,	// (0x0007f20a) aid_size_cell_pinb

0x2272,	// (0x0007f214) aid_size_list_pinb

0x5c80,	// (0x00082c22) mup2_volume_cont_pane_ParamLimits

0x5c80,	// (0x00082c22) mup2_volume_cont_pane

0x5d9c,	// (0x00082d3e) mup2_volume_cont_pane_g1_ParamLimits

0x5d9c,	// (0x00082d3e) mup2_volume_cont_pane_g1

0x1ee2,	// (0x0007ee84) aid_size_cell_touch_ParamLimits

0x1ee2,	// (0x0007ee84) aid_size_cell_touch

0x2152,	// (0x0007f0f4) touch_pane_ParamLimits

0x2152,	// (0x0007f0f4) touch_pane

0xa190,	// (0x00087132) main_rss2_pane

0xca07,	// (0x000899a9) listscroll_rss2_pane

0xca10,	// (0x000899b2) rss2_navigation_pane

0xca18,	// (0x000899ba) list_rss2_pane

0xb2fe,	// (0x000882a0) scroll_pane_cp22

0xca20,	// (0x000899c2) rss2_navigation_pane_g1

0xca29,	// (0x000899cb) rss2_navigation_pane_g2

0xca31,	// (0x000899d3) rss2_navigation_pane_g3

0x0002,

0xf691,	// (0x0008c633) rss2_navigation_pane_g

0xca39,	// (0x000899db) rss2_navigation_pane_t1

0x5dd5,	// (0x00082d77) rss2_list_single_pane_ParamLimits

0x5dd5,	// (0x00082d77) rss2_list_single_pane

0xca47,	// (0x000899e9) rss2_list_single_pane_t2

0xca55,	// (0x000899f7) rss2_list_single_pane_t3_ParamLimits

0xca55,	// (0x000899f7) rss2_list_single_pane_t3

0xca72,	// (0x00089a14) rss2_list_single_pane_t4

0x42f2,	// (0x00081294) smil_status_pane_g1

0xa8a9,	// (0x0008784b) main_image2_pane_ParamLimits

0xa8a9,	// (0x0008784b) main_image2_pane

0x5996,	// (0x00082938) main_camera2_pane_g9_ParamLimits

0x5996,	// (0x00082938) main_camera2_pane_g9

0x59ea,	// (0x0008298c) main_camera2_pane_t5_ParamLimits

0x59ea,	// (0x0008298c) main_camera2_pane_t5

0x59fc,	// (0x0008299e) main_camera2_pane_t6_ParamLimits

0x59fc,	// (0x0008299e) main_camera2_pane_t6

0x5df8,	// (0x00082d9a) main_image2_pane_g1_ParamLimits

0x5df8,	// (0x00082d9a) main_image2_pane_g1

0x5081,	// (0x00082023) smil2_video_pane_ParamLimits

0x5081,	// (0x00082023) smil2_video_pane

0x0bbf,	// (0x0007db61) aid_zoom_text_primary_cp

0xa1d7,	// (0x00087179) popup_preview_fixed_window

0xac0b,	// (0x00087bad) im_reading_pane_g1

0x58e0,	// (0x00082882) cams2_bc_adjust_pane_cp_ParamLimits

0x58e0,	// (0x00082882) cams2_bc_adjust_pane_cp

0x5a27,	// (0x000829c9) cams2_bc_adjust_pane_ParamLimits

0x5a27,	// (0x000829c9) cams2_bc_adjust_pane

0x5e04,	// (0x00082da6) cams2_bc_adjust_pane_g1

0x5e0c,	// (0x00082dae) cams2_slider_pane

0x5e15,	// (0x00082db7) cams2_slider_pane_g1

0x5e1e,	// (0x00082dc0) cams2_slider_pane_g2

0x0006,

0xf698,	// (0x0008c63a) cams2_slider_pane_g

0x236d,	// (0x0007f30f) calc_display_pane_ParamLimits

0x238b,	// (0x0007f32d) calc_paper_pane_ParamLimits

0x23a7,	// (0x0007f349) grid_calc_pane_ParamLimits

0x44ca,	// (0x0008146c) popup_clock_digital_window_t1_ParamLimits

0xb6ce,	// (0x00088670) main_image_pane_t1

0x2353,	// (0x0007f2f5) aid_size_cell_calc_ParamLimits

0x2353,	// (0x0007f2f5) aid_size_cell_calc

0x5551,	// (0x000824f3) popup_blid_sat_info2_window_ParamLimits

0x5551,	// (0x000824f3) popup_blid_sat_info2_window

0xca88,	// (0x00089a2a) aid_size_cell_blid

0xca90,	// (0x00089a32) bg_popup_window_pane_cp07

0xcab3,	// (0x00089a55) grid_popup_blid_pane

0xcabd,	// (0x00089a5f) heading_pane_cp05_ParamLimits

0xcabd,	// (0x00089a5f) heading_pane_cp05

0xcb87,	// (0x00089b29) cell_popup_blid_pane_ParamLimits

0xcb87,	// (0x00089b29) cell_popup_blid_pane

0xcbb1,	// (0x00089b53) cell_popup_blid_pane_g1

0xcbb9,	// (0x00089b5b) cell_popup_blid_pane_t1

0x5c46,	// (0x00082be8) mup2_indicator_pane_ParamLimits

0x5c46,	// (0x00082be8) mup2_indicator_pane

0xb452,	// (0x000883f4) mup2_visualizer_osc_pane

0xc969,	// (0x0008990b) mup2_visualizer_spec_pane_ParamLimits

0xc969,	// (0x0008990b) mup2_visualizer_spec_pane

0x5e38,	// (0x00082dda) mup2_spec_half_pane

0x5e41,	// (0x00082de3) mup2_spec_half_pane_cp

0x5e4b,	// (0x00082ded) mup2_spec_bar_pane_ParamLimits

0x5e4b,	// (0x00082ded) mup2_spec_bar_pane

0xc8fe,	// (0x000898a0) mup2_spec_bar_pane_g1

0xc908,	// (0x000898aa) mup2_spec_bar_pane_g2

0x0001,

0xf60b,	// (0x0008c5ad) mup2_spec_bar_pane_g

0x5e6a,	// (0x00082e0c) mup2_osc_middle_pane

0xc91a,	// (0x000898bc) mup2_visualizer_osc_pane_g1

0xa201,	// (0x000871a3) popup_number_entry_window_t1_ParamLimits

0xa214,	// (0x000871b6) popup_number_entry_window_t2_ParamLimits

0xa226,	// (0x000871c8) popup_number_entry_window_t3_ParamLimits

0x21a9,	// (0x0007f14b) popup_number_entry_window_t5_ParamLimits

0x21a9,	// (0x0007f14b) popup_number_entry_window_t5

0xf0cd,	// (0x0008c06f) popup_number_entry_window_t_ParamLimits

0xa238,	// (0x000871da) text_title_cp2_ParamLimits

0x4d6e,	// (0x00081d10) aid_hotspot_pointer_text2_pane

0x4e08,	// (0x00081daa) main_viewer_pane_g9_ParamLimits

0x4e08,	// (0x00081daa) main_viewer_pane_g9

0xae44,	// (0x00087de6) cale_month_pane_t1_ParamLimits

0xae6a,	// (0x00087e0c) bg_cale_pane_ParamLimits

0xae82,	// (0x00087e24) list_cale_pane_ParamLimits

0xae93,	// (0x00087e35) listscroll_cale_day_pane_t1

0xaea5,	// (0x00087e47) scroll_pane_cp09_ParamLimits

0x4b06,	// (0x00081aa8) main_mup_eq_pane_t1_ParamLimits

0x4b06,	// (0x00081aa8) main_mup_eq_pane_t1

0x4b22,	// (0x00081ac4) main_mup_eq_pane_t2_ParamLimits

0x4b22,	// (0x00081ac4) main_mup_eq_pane_t2

0x4b3e,	// (0x00081ae0) main_mup_eq_pane_t3_ParamLimits

0x4b3e,	// (0x00081ae0) main_mup_eq_pane_t3

0x4b58,	// (0x00081afa) main_mup_eq_pane_t4_ParamLimits

0x4b58,	// (0x00081afa) main_mup_eq_pane_t4

0x4b72,	// (0x00081b14) main_mup_eq_pane_t5_ParamLimits

0x4b72,	// (0x00081b14) main_mup_eq_pane_t5

0x4b8c,	// (0x00081b2e) main_mup_eq_pane_t6_ParamLimits

0x4b8c,	// (0x00081b2e) main_mup_eq_pane_t6

0x4ba2,	// (0x00081b44) main_mup_eq_pane_t7_ParamLimits

0x4ba2,	// (0x00081b44) main_mup_eq_pane_t7

0x4bb8,	// (0x00081b5a) main_mup_eq_pane_t8_ParamLimits

0x4bb8,	// (0x00081b5a) main_mup_eq_pane_t8

0x4bce,	// (0x00081b70) main_mup_eq_pane_t9_ParamLimits

0x4bce,	// (0x00081b70) main_mup_eq_pane_t9

0x4bea,	// (0x00081b8c) main_mup_eq_pane_t10_ParamLimits

0x4bea,	// (0x00081b8c) main_mup_eq_pane_t10

0x0009,

0xf45a,	// (0x0008c3fc) main_mup_eq_pane_t_ParamLimits

0xf45a,	// (0x0008c3fc) main_mup_eq_pane_t

0x4caf,	// (0x00081c51) mup_equalizer_pane_cp5_ParamLimits

0x4cc7,	// (0x00081c69) mup_equalizer_pane_cp6_ParamLimits

0x4cdf,	// (0x00081c81) mup_equalizer_pane_cp7_ParamLimits

0xa190,	// (0x00087132) main_gallery_pane

0xc923,	// (0x000898c5) smil2_volume_pane

0xc92b,	// (0x000898cd) smil_status_volume_pane_g1_ParamLimits

0xc93e,	// (0x000898e0) smil_status_volume_pane_g2_ParamLimits

0x574b,	// (0x000826ed) smil_status_volume_pane_g3_ParamLimits

0xf610,	// (0x0008c5b2) smil_status_volume_pane_g_ParamLimits

0xca90,	// (0x00089a32) bg_popup_window_pane_cp07_ParamLimits

0xca9e,	// (0x00089a40) blid_firmament_pane

0x5e73,	// (0x00082e15) aid_size_cell_gallery_ParamLimits

0x5e73,	// (0x00082e15) aid_size_cell_gallery

0x5e81,	// (0x00082e23) grid_gallery_pane_ParamLimits

0x5e81,	// (0x00082e23) grid_gallery_pane

0x5e91,	// (0x00082e33) cell_gallery_pane_ParamLimits

0x5e91,	// (0x00082e33) cell_gallery_pane

0xcbc7,	// (0x00089b69) bg_cell_gallery_focus_pane_ParamLimits

0xcbc7,	// (0x00089b69) bg_cell_gallery_focus_pane

0xcbd9,	// (0x00089b7b) cell_gallery_pane_g1_ParamLimits

0xcbd9,	// (0x00089b7b) cell_gallery_pane_g1

0x5ed7,	// (0x00082e79) cell_gallery_pane_g2_ParamLimits

0x5ed7,	// (0x00082e79) cell_gallery_pane_g2

0x5ee4,	// (0x00082e86) cell_gallery_pane_g3_ParamLimits

0x5ee4,	// (0x00082e86) cell_gallery_pane_g3

0xcbe5,	// (0x00089b87) cell_gallery_pane_g4_ParamLimits

0xcbe5,	// (0x00089b87) cell_gallery_pane_g4

0x0003,

0xf6be,	// (0x0008c660) cell_gallery_pane_g_ParamLimits

0xf6be,	// (0x0008c660) cell_gallery_pane_g

0xcbf1,	// (0x00089b93) bg_cell_gallery_focus_pane_g1

0xcbf9,	// (0x00089b9b) bg_cell_gallery_focus_pane_g2

0xcc01,	// (0x00089ba3) bg_cell_gallery_focus_pane_g3

0xcc09,	// (0x00089bab) bg_cell_gallery_focus_pane_g4

0xcc11,	// (0x00089bb3) bg_cell_gallery_focus_pane_g5

0xcc19,	// (0x00089bbb) bg_cell_gallery_focus_pane_g6

0xcc21,	// (0x00089bc3) bg_cell_gallery_focus_pane_g7

0xcc29,	// (0x00089bcb) bg_cell_gallery_focus_pane_g8

0x0007,

0xf6c7,	// (0x0008c669) bg_cell_gallery_focus_pane_g

0xcc31,	// (0x00089bd3) aid_firma_cardinal

0xcc45,	// (0x00089be7) blid_firmament_pane_t1

0xcc5c,	// (0x00089bfe) blid_firmament_pane_t2

0xcc73,	// (0x00089c15) blid_firmament_pane_t3

0xcc8a,	// (0x00089c2c) blid_firmament_pane_t4

0x0003,

0xf6d8,	// (0x0008c67a) blid_firmament_pane_t

0xcca1,	// (0x00089c43) blid_sat_info_pane

0xccb1,	// (0x00089c53) blid_sat_info_pane_g1

0xccb1,	// (0x00089c53) blid_sat_info_pane_g2

0x0001,

0xf6e1,	// (0x0008c683) blid_sat_info_pane_g

0xccbb,	// (0x00089c5d) blid_sat_info_pane_t1

0xccc9,	// (0x00089c6b) smil2_volume_content_pane

0xccd2,	// (0x00089c74) smil2_volume_pane_g1

0xccda,	// (0x00089c7c) smil2_volume_content_pane_g1

0xcce3,	// (0x00089c85) smil2_volume_content_pane_g2

0xccec,	// (0x00089c8e) smil2_volume_content_pane_g3

0xccf5,	// (0x00089c97) smil2_volume_content_pane_g4

0xccfe,	// (0x00089ca0) smil2_volume_content_pane_g5

0xcd07,	// (0x00089ca9) smil2_volume_content_pane_g6

0xcd10,	// (0x00089cb2) smil2_volume_content_pane_g7

0xcd19,	// (0x00089cbb) smil2_volume_content_pane_g8

0xcd22,	// (0x00089cc4) smil2_volume_content_pane_g9

0xcd2b,	// (0x00089ccd) smil2_volume_content_pane_g10

0x0009,

0xf6e6,	// (0x0008c688) smil2_volume_content_pane_g

0x2a4d,	// (0x0007f9ef) cale_week_day_heading_pane_t1_ParamLimits

0x2a95,	// (0x0007fa37) cale_week_day_heading_pane_t2_ParamLimits

0x2ae2,	// (0x0007fa84) cale_week_day_heading_pane_t3_ParamLimits

0x2b2f,	// (0x0007fad1) cale_week_day_heading_pane_t4_ParamLimits

0x2b7c,	// (0x0007fb1e) cale_week_day_heading_pane_t5_ParamLimits

0x2bc9,	// (0x0007fb6b) cale_week_day_heading_pane_t6_ParamLimits

0x2c16,	// (0x0007fbb8) cale_week_day_heading_pane_t7_ParamLimits

0xf1d2,	// (0x0008c174) cale_week_day_heading_pane_t_ParamLimits

0xaabb,	// (0x00087a5d) bg_cale_side_pane_ParamLimits

0x2c5e,	// (0x0007fc00) cale_week_time_pane_t1_ParamLimits

0x2ca2,	// (0x0007fc44) cale_week_time_pane_t2_ParamLimits

0x2ce6,	// (0x0007fc88) cale_week_time_pane_t3_ParamLimits

0x2d2a,	// (0x0007fccc) cale_week_time_pane_t4_ParamLimits

0x2d6e,	// (0x0007fd10) cale_week_time_pane_t5_ParamLimits

0x2db2,	// (0x0007fd54) cale_week_time_pane_t6_ParamLimits

0x2df6,	// (0x0007fd98) cale_week_time_pane_t7_ParamLimits

0x2e42,	// (0x0007fde4) cale_week_time_pane_t8_ParamLimits

0xf1e1,	// (0x0008c183) cale_week_time_pane_t_ParamLimits

0x2e90,	// (0x0007fe32) cell_cale_week_pane_g2_ParamLimits

0xaabb,	// (0x00087a5d) bg_cale_side_pane_cp01_ParamLimits

0x40f9,	// (0x0008109b) cale_month_week_pane_t1_ParamLimits

0x4112,	// (0x000810b4) cale_month_week_pane_t2_ParamLimits

0x412b,	// (0x000810cd) cale_month_week_pane_t3_ParamLimits

0x4144,	// (0x000810e6) cale_month_week_pane_t4_ParamLimits

0x415d,	// (0x000810ff) cale_month_week_pane_t5_ParamLimits

0x4178,	// (0x0008111a) cale_month_week_pane_t6_ParamLimits

0xf2ba,	// (0x0008c25c) cale_month_week_pane_t_ParamLimits

0x42bb,	// (0x0008125d) cell_cale_month_pane_g1_ParamLimits

0xa190,	// (0x00087132) main_cale_event_viewer_pane

0xa190,	// (0x00087132) listscroll_cale_event_viewer_pane

0xcd34,	// (0x00089cd6) list_cale_ev_pane

0xcd3c,	// (0x00089cde) scroll_pane_cp023

0x5ef1,	// (0x00082e93) field_cale_ev_pane_ParamLimits

0x5ef1,	// (0x00082e93) field_cale_ev_pane

0xcd48,	// (0x00089cea) field_cale_ev_content_pane_ParamLimits

0xcd48,	// (0x00089cea) field_cale_ev_content_pane

0xcd54,	// (0x00089cf6) field_cale_ev_pane_g1_ParamLimits

0xcd54,	// (0x00089cf6) field_cale_ev_pane_g1

0xcd60,	// (0x00089d02) field_cale_ev_pane_g2_ParamLimits

0xcd60,	// (0x00089d02) field_cale_ev_pane_g2

0xcd78,	// (0x00089d1a) field_cale_ev_pane_g3_ParamLimits

0xcd78,	// (0x00089d1a) field_cale_ev_pane_g3

0x0002,

0xf6fb,	// (0x0008c69d) field_cale_ev_pane_g_ParamLimits

0xf6fb,	// (0x0008c69d) field_cale_ev_pane_g

0xcd90,	// (0x00089d32) field_cale_ev_pane_t1_ParamLimits

0xcd90,	// (0x00089d32) field_cale_ev_pane_t1

0x5f15,	// (0x00082eb7) field_cale_ev_content_pane_t1_ParamLimits

0x5f15,	// (0x00082eb7) field_cale_ev_content_pane_t1

0x4d53,	// (0x00081cf5) bg_button_pane_cp01

0x26f4,	// (0x0007f696) listscroll_cale_week_pane_ParamLimits

0x2706,	// (0x0007f6a8) popup_toolbar_window_cp01

0xaa87,	// (0x00087a29) listscroll_cale_week_pane_t1_ParamLimits

0x26f4,	// (0x0007f696) listscroll_cale_day_pane_ParamLimits

0x2706,	// (0x0007f6a8) popup_toolbar_window_cp02

0xae93,	// (0x00087e35) listscroll_cale_day_pane_t1_ParamLimits

0x26f4,	// (0x0007f696) main_cale_month_pane_ParamLimits

0x5635,	// (0x000825d7) popup_toolbar_window_cp03_ParamLimits

0x5635,	// (0x000825d7) popup_toolbar_window_cp03

0x4f91,	// (0x00081f33) main_image_pane_g2_ParamLimits

0x4f91,	// (0x00081f33) main_image_pane_g2

0x4f9d,	// (0x00081f3f) main_image_pane_g3_ParamLimits

0x4f9d,	// (0x00081f3f) main_image_pane_g3

0x0002,

0xf4ec,	// (0x0008c48e) main_image_pane_g_ParamLimits

0xf4ec,	// (0x0008c48e) main_image_pane_g

0xb6ce,	// (0x00088670) main_image_pane_t1_ParamLimits

0x4fa9,	// (0x00081f4b) main_image_pane_t2_ParamLimits

0x4fa9,	// (0x00081f4b) main_image_pane_t2

0x4fbb,	// (0x00081f5d) main_image_pane_t3_ParamLimits

0x4fbb,	// (0x00081f5d) main_image_pane_t3

0x4fcd,	// (0x00081f6f) main_image_pane_t4_ParamLimits

0x4fcd,	// (0x00081f6f) main_image_pane_t4

0x0003,

0xf4f3,	// (0x0008c495) main_image_pane_t_ParamLimits

0xf4f3,	// (0x0008c495) main_image_pane_t

0x4fdf,	// (0x00081f81) popup_image_details_window_cp01

0x4fe9,	// (0x00081f8b) popup_toobar_trans_pane_cp01_ParamLimits

0x4fe9,	// (0x00081f8b) popup_toobar_trans_pane_cp01

0x55a6,	// (0x00082548) popup_image_details_window_ParamLimits

0x55a6,	// (0x00082548) popup_image_details_window

0xc882,	// (0x00089824) popup_image_focus_window

0x58d2,	// (0x00082874) camera2_autofocus_pane_ParamLimits

0x58d2,	// (0x00082874) camera2_autofocus_pane

0xa190,	// (0x00087132) bg_popup_sub_pane_cp06

0xcda7,	// (0x00089d49) popup_image_focus_window_g1

0xcdaf,	// (0x00089d51) popup_image_focus_window_g2

0xcdb7,	// (0x00089d59) popup_image_focus_window_g3

0xcdbf,	// (0x00089d61) popup_image_focus_window_g4

0x0003,

0xf702,	// (0x0008c6a4) popup_image_focus_window_g

0xcdc7,	// (0x00089d69) popup_image_focus_window_t1

0xcdd5,	// (0x00089d77) popup_image_focus_window_t2

0xcde5,	// (0x00089d87) popup_image_focus_window_t3

0x0002,

0xf70b,	// (0x0008c6ad) popup_image_focus_window_t

0xcdf3,	// (0x00089d95) camera2_autofocus_pane_g1

0xa8a9,	// (0x0008784b) bg_tb_trans_pane_cp01

0xce01,	// (0x00089da3) popup_image_details_window_g1

0xce14,	// (0x00089db6) popup_image_details_window_g2

0x0002,

0x0365,	// (0x0007d307) popup_image_details_window_g

0xce3d,	// (0x00089ddf) popup_image_details_window_t1

0xce4f,	// (0x00089df1) popup_image_details_window_t2

0xce68,	// (0x00089e0a) popup_image_details_window_t3

0xce7c,	// (0x00089e1e) popup_image_details_window_t4

0xce97,	// (0x00089e39) popup_image_details_window_t5

0x0004,

0x036c,	// (0x0007d30e) popup_image_details_window_t

0xa92e,	// (0x000878d0) bg_calc_paper_pane_ParamLimits

0xa190,	// (0x00087132) grid_highlight_pane_cp013

0x24a4,	// (0x0007f446) list_calc_pane_ParamLimits

0x24b6,	// (0x0007f458) scroll_pane_cp024

0xa942,	// (0x000878e4) bg_calc_display_pane_ParamLimits

0x24be,	// (0x0007f460) calc_display_pane_t1_ParamLimits

0x24d3,	// (0x0007f475) calc_display_pane_t2_ParamLimits

0x24e8,	// (0x0007f48a) calc_display_pane_t3_ParamLimits

0xf154,	// (0x0008c0f6) calc_display_pane_t_ParamLimits

0x25bc,	// (0x0007f55e) cell_calc_pane_g2

0x0001,

0xf171,	// (0x0008c113) cell_calc_pane_g

0x25c5,	// (0x0007f567) cell_calc_pane_t1

0xa9a1,	// (0x00087943) grid_highlight_pane_cp02_ParamLimits

0xa9b7,	// (0x00087959) toolbar_button_pane_cp01_ParamLimits

0xa9b7,	// (0x00087959) toolbar_button_pane_cp01

0xb713,	// (0x000886b5) temp_image_control_pane_ParamLimits

0xb713,	// (0x000886b5) temp_image_control_pane

0xa8a9,	// (0x0008784b) main_mp3_pane

0xceb1,	// (0x00089e53) temp_image_control_pane_g1_ParamLimits

0xceb1,	// (0x00089e53) temp_image_control_pane_g1

0xcebf,	// (0x00089e61) temp_image_control_pane_g2_ParamLimits

0xcebf,	// (0x00089e61) temp_image_control_pane_g2

0xced1,	// (0x00089e73) temp_image_control_pane_g3_ParamLimits

0xced1,	// (0x00089e73) temp_image_control_pane_g3

0x5f60,	// (0x00082f02) temp_image_control_pane_g4_ParamLimits

0x5f60,	// (0x00082f02) temp_image_control_pane_g4

0x0003,

0xf71d,	// (0x0008c6bf) temp_image_control_pane_g_ParamLimits

0xf71d,	// (0x0008c6bf) temp_image_control_pane_g

0xceb1,	// (0x00089e53) main_mp3_pane_g1

0x5f71,	// (0x00082f13) main_mp3_pane_g2

0x0007,

0xf726,	// (0x0008c6c8) main_mp3_pane_g

0xcf14,	// (0x00089eb6) main_mp3_pane_t1

0xab16,	// (0x00087ab8) main_camera_pane_g8_ParamLimits

0xab16,	// (0x00087ab8) main_camera_pane_g8

0x314c,	// (0x000800ee) main_video_pane_g7_ParamLimits

0x314c,	// (0x000800ee) main_video_pane_g7

0x5a15,	// (0x000829b7) main_camera2_pane_t7_ParamLimits

0x5a15,	// (0x000829b7) main_camera2_pane_t7

0xac62,	// (0x00087c04) scroll_pane_cp025_ParamLimits

0xac62,	// (0x00087c04) scroll_pane_cp025

0xac76,	// (0x00087c18) scroll_pane_cp026_ParamLimits

0xac76,	// (0x00087c18) scroll_pane_cp026

0xac85,	// (0x00087c27) wml_content_pane_ParamLimits

0xa190,	// (0x00087132) main_touch_calib_pane

0x6015,	// (0x00082fb7) main_touch_calib_pane_g1

0x6021,	// (0x00082fc3) main_touch_calib_pane_g2

0x602d,	// (0x00082fcf) main_touch_calib_pane_g3

0x6039,	// (0x00082fdb) main_touch_calib_pane_g4

0x0003,

0xf744,	// (0x0008c6e6) main_touch_calib_pane_g

0x6045,	// (0x00082fe7) main_touch_calib_pane_t1

0x605c,	// (0x00082ffe) main_touch_calib_pane_t2

0x0004,

0xf74d,	// (0x0008c6ef) main_touch_calib_pane_t

0xb393,	// (0x00088335) mup_progress_pane_cp02

0xb3b2,	// (0x00088354) navi_pane_g1

0xb414,	// (0x000883b6) navi_pane_mp_t3

0xa8a9,	// (0x0008784b) main_mp3_pane_ParamLimits

0x5677,	// (0x00082619) navi_pane_ParamLimits

0xceb1,	// (0x00089e53) main_mp3_pane_g1_ParamLimits

0x5f71,	// (0x00082f13) main_mp3_pane_g2_ParamLimits

0x5f7d,	// (0x00082f1f) main_mp3_pane_g3_ParamLimits

0x5f7d,	// (0x00082f1f) main_mp3_pane_g3

0x5f89,	// (0x00082f2b) main_mp3_pane_g4_ParamLimits

0x5f89,	// (0x00082f2b) main_mp3_pane_g4

0xcee1,	// (0x00089e83) main_mp3_pane_g5_ParamLimits

0xcee1,	// (0x00089e83) main_mp3_pane_g5

0xceef,	// (0x00089e91) main_mp3_pane_g6_ParamLimits

0xceef,	// (0x00089e91) main_mp3_pane_g6

0xcefc,	// (0x00089e9e) main_mp3_pane_g7_ParamLimits

0xcefc,	// (0x00089e9e) main_mp3_pane_g7

0xcf08,	// (0x00089eaa) main_mp3_pane_g8_ParamLimits

0xcf08,	// (0x00089eaa) main_mp3_pane_g8

0xf726,	// (0x0008c6c8) main_mp3_pane_g_ParamLimits

0x5f95,	// (0x00082f37) main_mp3_pane_t2

0x5fa5,	// (0x00082f47) main_mp3_pane_t3

0xcf22,	// (0x00089ec4) main_mp3_pane_t4

0xcf30,	// (0x00089ed2) main_mp3_pane_t5

0x0005,

0xf737,	// (0x0008c6d9) main_mp3_pane_t

0xcf3e,	// (0x00089ee0) mup_progress_pane_cp01

0x0bbf,	// (0x0007db61) aid_zoom_text_secondary2

0xcd34,	// (0x00089cd6) list_cale_ev2_pane

0xcd3c,	// (0x00089cde) scroll_pane_cp023_ParamLimits

0xe7d1,	// (0x0008b773) field_cale_ev2_pane_ParamLimits

0xe7d1,	// (0x0008b773) field_cale_ev2_pane

0x60b7,	// (0x00083059) field_cale_ev2_pane_g1_ParamLimits

0x60b7,	// (0x00083059) field_cale_ev2_pane_g1

0x60c3,	// (0x00083065) field_cale_ev2_pane_g2_ParamLimits

0x60c3,	// (0x00083065) field_cale_ev2_pane_g2

0x60db,	// (0x0008307d) field_cale_ev2_pane_g3_ParamLimits

0x60db,	// (0x0008307d) field_cale_ev2_pane_g3

0x0003,

0xf758,	// (0x0008c6fa) field_cale_ev2_pane_g_ParamLimits

0xf758,	// (0x0008c6fa) field_cale_ev2_pane_g

0x0e9d,	// (0x0007de3f) field_cale_ev2_pane_t1_ParamLimits

0x0e9d,	// (0x0007de3f) field_cale_ev2_pane_t1

0x0eb4,	// (0x0007de56) field_cale_ev2_pane_t2_ParamLimits

0x0eb4,	// (0x0007de56) field_cale_ev2_pane_t2

0x0001,

0xf761,	// (0x0008c703) field_cale_ev2_pane_t_ParamLimits

0xf761,	// (0x0008c703) field_cale_ev2_pane_t

0x4e70,	// (0x00081e12) main_postcard_pane_g5_ParamLimits

0x4e70,	// (0x00081e12) main_postcard_pane_g5

0x4e7e,	// (0x00081e20) main_postcard_pane_g6_ParamLimits

0x4e7e,	// (0x00081e20) main_postcard_pane_g6

0x2f8a,	// (0x0007ff2c) camera2_autofocus_pane_cp_ParamLimits

0x2f8a,	// (0x0007ff2c) camera2_autofocus_pane_cp

0xa8a9,	// (0x0008784b) main_mup3_pane

0x611f,	// (0x000830c1) main_mup3_pane_g1_ParamLimits

0x611f,	// (0x000830c1) main_mup3_pane_g1

0x6140,	// (0x000830e2) main_mup3_pane_g2_ParamLimits

0x6140,	// (0x000830e2) main_mup3_pane_g2

0x61bc,	// (0x0008315e) main_mup3_pane_g3_ParamLimits

0x61bc,	// (0x0008315e) main_mup3_pane_g3

0x6201,	// (0x000831a3) main_mup3_pane_g4_ParamLimits

0x6201,	// (0x000831a3) main_mup3_pane_g4

0x6244,	// (0x000831e6) main_mup3_pane_g5_ParamLimits

0x6244,	// (0x000831e6) main_mup3_pane_g5

0x6289,	// (0x0008322b) main_mup3_pane_g6_ParamLimits

0x6289,	// (0x0008322b) main_mup3_pane_g6

0xcf46,	// (0x00089ee8) main_mup3_pane_g7_ParamLimits

0xcf46,	// (0x00089ee8) main_mup3_pane_g7

0x0007,

0xf771,	// (0x0008c713) main_mup3_pane_g_ParamLimits

0xf771,	// (0x0008c713) main_mup3_pane_g

0x62ff,	// (0x000832a1) main_mup3_pane_t1_ParamLimits

0x62ff,	// (0x000832a1) main_mup3_pane_t1

0x6368,	// (0x0008330a) main_mup3_pane_t2_ParamLimits

0x6368,	// (0x0008330a) main_mup3_pane_t2

0x6431,	// (0x000833d3) main_mup3_pane_t4_ParamLimits

0x6431,	// (0x000833d3) main_mup3_pane_t4

0x6485,	// (0x00083427) main_mup3_pane_t5_ParamLimits

0x6485,	// (0x00083427) main_mup3_pane_t5

0x6533,	// (0x000834d5) main_mup3_pane_t6_ParamLimits

0x6533,	// (0x000834d5) main_mup3_pane_t6

0x0005,

0xf782,	// (0x0008c724) main_mup3_pane_t_ParamLimits

0xf782,	// (0x0008c724) main_mup3_pane_t

0x65df,	// (0x00083581) mup3_progress_pane_ParamLimits

0x65df,	// (0x00083581) mup3_progress_pane

0x6659,	// (0x000835fb) popup_mup3_control_window_ParamLimits

0x6659,	// (0x000835fb) popup_mup3_control_window

0xcf54,	// (0x00089ef6) popup_mup3_text_window

0x6676,	// (0x00083618) mup3_progress_pane_t1

0x6695,	// (0x00083637) mup3_progress_pane_t2

0xcf5c,	// (0x00089efe) mup3_progress_pane_t3

0x0002,

0xf78f,	// (0x0008c731) mup3_progress_pane_t

0xcf79,	// (0x00089f1b) mup_progress_pane_cp03

0xa190,	// (0x00087132) bg_tb_trans_pane_cp04

0x66b4,	// (0x00083656) mup3_volume_pane

0x66bc,	// (0x0008365e) popup_mup3_control_window_g1

0xdbd3,	// (0x0008ab75) mup3_volume_pane_g1

0xdbdc,	// (0x0008ab7e) mup3_volume_pane_g2

0xdbe5,	// (0x0008ab87) mup3_volume_pane_g3

0x0002,

0xf796,	// (0x0008c738) mup3_volume_pane_g

0xa190,	// (0x00087132) bg_tb_trans_pane_cp03

0xcf89,	// (0x00089f2b) popup_mup3_text_window_g1

0xcf91,	// (0x00089f33) popup_mup3_text_window_t1

0xa98a,	// (0x0008792c) list_calc_item_pane_g1_ParamLimits

0xc9fe,	// (0x000899a0) mup_volume_pane_cp_g1

0x6075,	// (0x00083017) main_touch_calib_pane_t3

0x608b,	// (0x0008302d) main_touch_calib_pane_t4

0x60a1,	// (0x00083043) main_touch_calib_pane_t5

0xa19a,	// (0x0008713c) aid_cell_size_toolbar2

0xa1a2,	// (0x00087144) aid_popup3_width_pane

0x0baf,	// (0x0007db51) aid_zoom_text_msg_primary

0x2f55,	// (0x0007fef7) vorec_t7

0xa94e,	// (0x000878f0) bg_calc_paper_pane_g1_ParamLimits

0xa95a,	// (0x000878fc) bg_calc_paper_pane_g2_ParamLimits

0xa966,	// (0x00087908) bg_calc_paper_pane_g3_ParamLimits

0xa972,	// (0x00087914) bg_calc_paper_pane_g4_ParamLimits

0xa97e,	// (0x00087920) bg_calc_paper_pane_g5_ParamLimits

0x2529,	// (0x0007f4cb) bg_calc_paper_pane_g6_ParamLimits

0x253a,	// (0x0007f4dc) bg_calc_paper_pane_g7_ParamLimits

0x254b,	// (0x0007f4ed) bg_calc_paper_pane_g8_ParamLimits

0xf15b,	// (0x0008c0fd) bg_calc_paper_pane_g_ParamLimits

0x255e,	// (0x0007f500) calc_bg_paper_pane_g9_ParamLimits

0x307b,	// (0x0008001d) image_qvga_pane_ParamLimits

0x307b,	// (0x0008001d) image_qvga_pane

0xa84f,	// (0x000877f1) bg_popup_sub_pane_cp04_ParamLimits

0xb64a,	// (0x000885ec) popup_mup_playback_window_g1_ParamLimits

0xb656,	// (0x000885f8) popup_mup_playback_window_t1_ParamLimits

0xb66b,	// (0x0008860d) popup_mup_playback_window_t2_ParamLimits

0xf4e7,	// (0x0008c489) popup_mup_playback_window_t_ParamLimits

0x5b44,	// (0x00082ae6) main_mup2_pane_g3_ParamLimits

0x5b44,	// (0x00082ae6) main_mup2_pane_g3

0x333f,	// (0x000802e1) popup_toolbar_window_cp04

0xba66,	// (0x00088a08) popup_call2_audio_second_window_g3_ParamLimits

0xba66,	// (0x00088a08) popup_call2_audio_second_window_g3

0xbe70,	// (0x00088e12) popup_call2_audio_first_window_g4_ParamLimits

0xbe70,	// (0x00088e12) popup_call2_audio_first_window_g4

0xc4ef,	// (0x00089491) popup_call2_audio_in_window_g4_ParamLimits

0xc4ef,	// (0x00089491) popup_call2_audio_in_window_g4

0x4f84,	// (0x00081f26) aid_area_sk_bg_cut_ParamLimits

0x4f84,	// (0x00081f26) aid_area_sk_bg_cut

0xb680,	// (0x00088622) aid_area_sk_bg_cut_2_ParamLimits

0xb680,	// (0x00088622) aid_area_sk_bg_cut_2

0x5ec7,	// (0x00082e69) aid_placing_details_win

0x5ecf,	// (0x00082e71) aid_placing_details_win_2

0xcdf3,	// (0x00089d95) camera2_autofocus_pane_g1_ParamLimits

0x20e8,	// (0x0007f08a) popup_fixed_preview_cale_window_ParamLimits

0x20e8,	// (0x0007f08a) popup_fixed_preview_cale_window

0xb463,	// (0x00088405) navi_slider_pane_g3

0xb46c,	// (0x0008840e) navi_slider_pane_g4

0xb475,	// (0x00088417) navi_slider_pane_g5

0xb463,	// (0x00088405) navi_slider_pane_g6

0x4874,	// (0x00081816) navi_slider_pane_g7

0xb58a,	// (0x0008852c) mup_scale_pane_g3

0xb593,	// (0x00088535) mup_scale_pane_g4

0xb59c,	// (0x0008853e) mup_scale_pane_g5

0x4cf7,	// (0x00081c99) mup_scale_pane_g6

0x4d00,	// (0x00081ca2) mup_scale_pane_g7

0xb463,	// (0x00088405) cams2_slider_pane_g3

0xca80,	// (0x00089a22) cams2_slider_pane_g4

0x5e27,	// (0x00082dc9) cams2_slider_pane_g5

0xb463,	// (0x00088405) cams2_slider_pane_g6

0x5e2f,	// (0x00082dd1) cams2_slider_pane_g7

0xccb1,	// (0x00089c53) camera2_autofocus_pane_cp_g1

0xc854,	// (0x000897f6) bg_popup_preview_window_pane_cp02_ParamLimits

0xc854,	// (0x000897f6) bg_popup_preview_window_pane_cp02

0xcf9f,	// (0x00089f41) list_fp_cale_pane_ParamLimits

0xcf9f,	// (0x00089f41) list_fp_cale_pane

0xcfab,	// (0x00089f4d) popup_fixed_preview_cale_window_t1_ParamLimits

0xcfab,	// (0x00089f4d) popup_fixed_preview_cale_window_t1

0x66c5,	// (0x00083667) popup_fixed_preview_cale_window_t2_ParamLimits

0x66c5,	// (0x00083667) popup_fixed_preview_cale_window_t2

0x66da,	// (0x0008367c) popup_fixed_preview_cale_window_t3_ParamLimits

0x66da,	// (0x0008367c) popup_fixed_preview_cale_window_t3

0x0002,

0xf79d,	// (0x0008c73f) popup_fixed_preview_cale_window_t_ParamLimits

0xf79d,	// (0x0008c73f) popup_fixed_preview_cale_window_t

0x66ef,	// (0x00083691) list_single_fp_cale_pane_ParamLimits

0x66ef,	// (0x00083691) list_single_fp_cale_pane

0xcfc9,	// (0x00089f6b) list_single_fp_cale_pane_g1_ParamLimits

0xcfc9,	// (0x00089f6b) list_single_fp_cale_pane_g1

0xcfdd,	// (0x00089f7f) list_single_fp_cale_pane_g2_ParamLimits

0xcfdd,	// (0x00089f7f) list_single_fp_cale_pane_g2

0x0002,

0xf7a4,	// (0x0008c746) list_single_fp_cale_pane_g_ParamLimits

0xf7a4,	// (0x0008c746) list_single_fp_cale_pane_g

0xcff6,	// (0x00089f98) list_single_fp_cale_pane_t1_ParamLimits

0xcff6,	// (0x00089f98) list_single_fp_cale_pane_t1

0xd008,	// (0x00089faa) list_single_fp_cale_pane_t2_ParamLimits

0xd008,	// (0x00089faa) list_single_fp_cale_pane_t2

0x0001,

0xf7ab,	// (0x0008c74d) list_single_fp_cale_pane_t_ParamLimits

0xf7ab,	// (0x0008c74d) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0xa190,	// (0x00087132) main_dialer_pane

0x66ff,	// (0x000836a1) aid_cell_size_keypad

0x6709,	// (0x000836ab) dialer_ne_pane

0x6713,	// (0x000836b5) grid_dialer_command_1_pane

0x671b,	// (0x000836bd) grid_dialer_command_2_pane

0x6723,	// (0x000836c5) grid_dialer_keypad_pane

0x6737,	// (0x000836d9) bg_popup_call_pane_cp06_ParamLimits

0x6737,	// (0x000836d9) bg_popup_call_pane_cp06

0x6743,	// (0x000836e5) dialer_ne_clear_pane_ParamLimits

0x6743,	// (0x000836e5) dialer_ne_clear_pane

0xd03b,	// (0x00089fdd) dialer_ne_pane_g1

0xd043,	// (0x00089fe5) dialer_ne_pane_t1_ParamLimits

0xd043,	// (0x00089fe5) dialer_ne_pane_t1

0x674f,	// (0x000836f1) dialer_ne_pane_t2_ParamLimits

0x674f,	// (0x000836f1) dialer_ne_pane_t2

0x676c,	// (0x0008370e) dialer_ne_pane_t3_ParamLimits

0x676c,	// (0x0008370e) dialer_ne_pane_t3

0x0002,

0xf7b0,	// (0x0008c752) dialer_ne_pane_t_ParamLimits

0xf7b0,	// (0x0008c752) dialer_ne_pane_t

0x6790,	// (0x00083732) dialer_ne_pane_t3_copy1_ParamLimits

0x6790,	// (0x00083732) dialer_ne_pane_t3_copy1

0x67b4,	// (0x00083756) cell_dialer_keypad_pane_ParamLimits

0x67b4,	// (0x00083756) cell_dialer_keypad_pane

0x67cb,	// (0x0008376d) cell_dialer_command_1_pane_ParamLimits

0x67cb,	// (0x0008376d) cell_dialer_command_1_pane

0x67e1,	// (0x00083783) cell_dialer_command_2_pane_ParamLimits

0x67e1,	// (0x00083783) cell_dialer_command_2_pane

0xd055,	// (0x00089ff7) bg_button_pane_cp02_ParamLimits

0xd055,	// (0x00089ff7) bg_button_pane_cp02

0x67f0,	// (0x00083792) cell_dialer_keypad_pane_g1_ParamLimits

0x67f0,	// (0x00083792) cell_dialer_keypad_pane_g1

0xd055,	// (0x00089ff7) bg_button_pane_cp03_ParamLimits

0xd055,	// (0x00089ff7) bg_button_pane_cp03

0x6805,	// (0x000837a7) cell_dialer_command_1_pane_g1_ParamLimits

0x6805,	// (0x000837a7) cell_dialer_command_1_pane_g1

0xd061,	// (0x0008a003) bg_button_pane_cp04

0x6819,	// (0x000837bb) cell_dialer_command_2_pane_g1

0xb452,	// (0x000883f4) bg_button_pane_cp06

0xd069,	// (0x0008a00b) dialer_ne_clear_pane_g1

0x47af,	// (0x00081751) navi_pane_g2

0x47dd,	// (0x0008177f) navi_pane_g3

0x0002,

0xf3ea,	// (0x0008c38c) navi_pane_g

0x4808,	// (0x000817aa) navi_pane_mv_g2

0x482f,	// (0x000817d1) navi_pane_mv_g5

0x4837,	// (0x000817d9) navi_pane_mv_t1

0xa942,	// (0x000878e4) main_clock2_pane

0x6857,	// (0x000837f9) main_clock2_list_pane_ParamLimits

0x6857,	// (0x000837f9) main_clock2_list_pane

0x6881,	// (0x00083823) main_clock2_pane_t1_ParamLimits

0x6881,	// (0x00083823) main_clock2_pane_t1

0x68a3,	// (0x00083845) main_clock2_pane_t2_ParamLimits

0x68a3,	// (0x00083845) main_clock2_pane_t2

0x0004,

0xf7b7,	// (0x0008c759) main_clock2_pane_t_ParamLimits

0xf7b7,	// (0x0008c759) main_clock2_pane_t

0x6900,	// (0x000838a2) popup_clock_analogue_window_cp03_ParamLimits

0x6900,	// (0x000838a2) popup_clock_analogue_window_cp03

0x6920,	// (0x000838c2) popup_clock_digital_window_cp02_ParamLimits

0x6920,	// (0x000838c2) popup_clock_digital_window_cp02

0x6991,	// (0x00083933) main_clock2_list_single_pane_ParamLimits

0x6991,	// (0x00083933) main_clock2_list_single_pane

0xb452,	// (0x000883f4) list_highlight_pane_cp05

0xd085,	// (0x0008a027) main_clock2_list_single_pane_t1

0x333f,	// (0x000802e1) popup_toolbar_window_cp04_ParamLimits

0x5f30,	// (0x00082ed2) camera2_autofocus_pane_g2_ParamLimits

0x5f30,	// (0x00082ed2) camera2_autofocus_pane_g2

0x5f3c,	// (0x00082ede) camera2_autofocus_pane_g3_ParamLimits

0x5f3c,	// (0x00082ede) camera2_autofocus_pane_g3

0x5f48,	// (0x00082eea) camera2_autofocus_pane_g4_ParamLimits

0x5f48,	// (0x00082eea) camera2_autofocus_pane_g4

0x5f54,	// (0x00082ef6) camera2_autofocus_pane_g5_ParamLimits

0x5f54,	// (0x00082ef6) camera2_autofocus_pane_g5

0x0004,

0xf712,	// (0x0008c6b4) camera2_autofocus_pane_g_ParamLimits

0xf712,	// (0x0008c6b4) camera2_autofocus_pane_g

0x60ff,	// (0x000830a1) camera2_autofocus_pane_cp_g2

0x6107,	// (0x000830a9) camera2_autofocus_pane_cp_g3

0x610f,	// (0x000830b1) camera2_autofocus_pane_cp_g4

0x6117,	// (0x000830b9) camera2_autofocus_pane_cp_g5

0x0004,

0xf766,	// (0x0008c708) camera2_autofocus_pane_cp_g

0x672f,	// (0x000836d1) popup_dialer_spcha_window

0xa190,	// (0x00087132) bg_popup_sub_pane_cp07

0xd093,	// (0x0008a035) list_spcha_pane

0xd09b,	// (0x0008a03d) list_single_spcha_pane_ParamLimits

0xd09b,	// (0x0008a03d) list_single_spcha_pane

0xa190,	// (0x00087132) list_highlight_pane_cp06

0xd0ac,	// (0x0008a04e) list_single_spcha_pane_t1

0xc299,	// (0x0008923b) popup_call2_audio_out_window_g4_ParamLimits

0xc299,	// (0x0008923b) popup_call2_audio_out_window_g4

0xa190,	// (0x00087132) main_imed2_pane

0xc88c,	// (0x0008982e) popup_imed_adjust2_window

0x55b4,	// (0x00082556) popup_imed_trans_window_ParamLimits

0x55b4,	// (0x00082556) popup_imed_trans_window

0xcae9,	// (0x00089a8b) popup_blid_sat_info2_window_t1

0xcaf7,	// (0x00089a99) popup_blid_sat_info2_window_t2

0x000a,

0xf6a7,	// (0x0008c649) popup_blid_sat_info2_window_t

0x6a3b,	// (0x000839dd) aid_size_cell_colour_35

0x6a55,	// (0x000839f7) aid_size_cell_colour_112

0x6a6c,	// (0x00083a0e) aid_size_cell_effect

0xa8a9,	// (0x0008784b) bg_tb_trans_pane_cp02

0xb33b,	// (0x000882dd) heading_imed_pane

0x6a86,	// (0x00083a28) listscroll_imed_pane

0xd0ba,	// (0x0008a05c) heading_imed_pane_g1

0xd0c2,	// (0x0008a064) heading_imed_pane_t1

0xd0d0,	// (0x0008a072) grid_imed_colour_35_pane_ParamLimits

0xd0d0,	// (0x0008a072) grid_imed_colour_35_pane

0x6a92,	// (0x00083a34) grid_imed_effect_pane

0xd0ec,	// (0x0008a08e) list_imed_aspect_pane

0x6aa2,	// (0x00083a44) scroll_pane_cp027_ParamLimits

0x6aa2,	// (0x00083a44) scroll_pane_cp027

0x6aae,	// (0x00083a50) cell_imed_effect_pane_ParamLimits

0x6aae,	// (0x00083a50) cell_imed_effect_pane

0xd0f4,	// (0x0008a096) cell_imed_colour_pane_ParamLimits

0xd0f4,	// (0x0008a096) cell_imed_colour_pane

0xd13e,	// (0x0008a0e0) cell_imed_colour_pane_g1_ParamLimits

0xd13e,	// (0x0008a0e0) cell_imed_colour_pane_g1

0xd14f,	// (0x0008a0f1) hgihlgiht_grid_pane_cp016_ParamLimits

0xd14f,	// (0x0008a0f1) hgihlgiht_grid_pane_cp016

0x6aca,	// (0x00083a6c) cell_imed_effect_pane_g1

0x6ad2,	// (0x00083a74) grid_highlight_pane_cp017

0xd160,	// (0x0008a102) list_imed_single_pane_ParamLimits

0xd160,	// (0x0008a102) list_imed_single_pane

0xa190,	// (0x00087132) list_highlight_pane_cp07

0xd174,	// (0x0008a116) list_imed_aspect_pane_comp1_t1

0xc860,	// (0x00089802) bg_tb_trans_pane_cp05

0xd196,	// (0x0008a138) popup_imed_adjust2_window_g1

0xd1bd,	// (0x0008a15f) popup_imed_adjust2_window_t1

0xd1d5,	// (0x0008a177) slider_imed_adjust_pane

0xd1e9,	// (0x0008a18b) slider_imed_adjust_pane_g1

0xd1f9,	// (0x0008a19b) slider_imed_adjust_pane_g2

0xd209,	// (0x0008a1ab) slider_imed_adjust_pane_g3

0xd21a,	// (0x0008a1bc) slider_imed_adjust_pane_g4

0x0003,

0xf7d4,	// (0x0008c776) slider_imed_adjust_pane_g

0x6adb,	// (0x00083a7d) aid_size_cell_clipart2

0x6ae7,	// (0x00083a89) grid_imed_clipart_pane

0xd22b,	// (0x0008a1cd) scroll_pane_cp031

0x6af1,	// (0x00083a93) cell_imed_clipart_pane_ParamLimits

0x6af1,	// (0x00083a93) cell_imed_clipart_pane

0x6b0f,	// (0x00083ab1) cell_imed_clipart_pane_g1

0xa190,	// (0x00087132) grid_highlight_pane_cp014

0x6863,	// (0x00083805) main_clock2_pane_g1_ParamLimits

0x6863,	// (0x00083805) main_clock2_pane_g1

0x693c,	// (0x000838de) aid_call2_pane_cp10

0x694e,	// (0x000838f0) aid_call_pane_cp10

0xb387,	// (0x00088329) popup_clock_analogue_window_cp10_g1

0xb387,	// (0x00088329) popup_clock_analogue_window_cp10_g2

0x6960,	// (0x00083902) popup_clock_analogue_window_cp10_g3

0x6960,	// (0x00083902) popup_clock_analogue_window_cp10_g4

0xb387,	// (0x00088329) popup_clock_analogue_window_cp10_g5

0x0004,

0xf7c2,	// (0x0008c764) popup_clock_analogue_window_cp10_g

0x6972,	// (0x00083914) popup_clock_analogue_window_cp10_t1

0x69a3,	// (0x00083945) clock_digital_number_pane_cp10_ParamLimits

0x69a3,	// (0x00083945) clock_digital_number_pane_cp10

0x69bb,	// (0x0008395d) clock_digital_number_pane_cp11_ParamLimits

0x69bb,	// (0x0008395d) clock_digital_number_pane_cp11

0x69d3,	// (0x00083975) clock_digital_number_pane_cp12_ParamLimits

0x69d3,	// (0x00083975) clock_digital_number_pane_cp12

0x69eb,	// (0x0008398d) clock_digital_number_pane_cp13_ParamLimits

0x69eb,	// (0x0008398d) clock_digital_number_pane_cp13

0x6a03,	// (0x000839a5) clock_digital_separator_pane_cp10_ParamLimits

0x6a03,	// (0x000839a5) clock_digital_separator_pane_cp10

0x6a1b,	// (0x000839bd) popup_clock_digital_window_cp02_t1_ParamLimits

0x6a1b,	// (0x000839bd) popup_clock_digital_window_cp02_t1

0xa847,	// (0x000877e9) clock_digital_number_pane_cp10_g1

0xa847,	// (0x000877e9) clock_digital_number_pane_cp10_g2

0x0001,

0xf7dd,	// (0x0008c77f) clock_digital_number_pane_cp10_g

0xa847,	// (0x000877e9) clock_digital_separator_pane_cp10_g1

0xa847,	// (0x000877e9) clock_digital_separator_pane_g2_cp10

0xb422,	// (0x000883c4) navi_pane_vded_g4

0xb42b,	// (0x000883cd) navi_pane_vded_g5

0xb434,	// (0x000883d6) navi_pane_vded_t1

0xa190,	// (0x00087132) main_vded_pane

0x6b18,	// (0x00083aba) main_vded_pane_g1

0x6b24,	// (0x00083ac6) main_vded_pane_g2

0x6b2e,	// (0x00083ad0) main_vded_pane_g3

0x0002,

0xf7e2,	// (0x0008c784) main_vded_pane_g

0x6b38,	// (0x00083ada) main_vded_pane_t1

0x6b46,	// (0x00083ae8) main_vded_pane_t2

0x0001,

0xf7e9,	// (0x0008c78b) main_vded_pane_t

0x6b54,	// (0x00083af6) vded_slider_pane

0x6b5e,	// (0x00083b00) vded_video_pane

0xd233,	// (0x0008a1d5) vded_video_pane_g1

0x6b6a,	// (0x00083b0c) vded_video_pane_g2

0xccb1,	// (0x00089c53) vded_video_pane_g3

0x0002,

0xf7ee,	// (0x0008c790) vded_video_pane_g

0xd23d,	// (0x0008a1df) vded_slider_pane_g1

0xc9fe,	// (0x000899a0) vded_slider_pane_g2

0xd246,	// (0x0008a1e8) vded_slider_pane_g3

0xd24f,	// (0x0008a1f1) vded_slider_pane_g4

0xd258,	// (0x0008a1fa) vded_slider_pane_g5

0x0004,

0xf7f5,	// (0x0008c797) vded_slider_pane_g

0x664d,	// (0x000835ef) mup3_rocker_pane_ParamLimits

0x664d,	// (0x000835ef) mup3_rocker_pane

0x6b73,	// (0x00083b15) mup3_control_keys_pane_g1

0x6b7b,	// (0x00083b1d) mup3_control_keys_pane_g2

0x6b83,	// (0x00083b25) mup3_control_keys_pane_g3

0x6b8b,	// (0x00083b2d) mup3_control_keys_pane_g4

0x0003,

0xf800,	// (0x0008c7a2) mup3_control_keys_pane_g

0x2106,	// (0x0007f0a8) popup_toolbar2_fixed_window_cp01_ParamLimits

0x2106,	// (0x0007f0a8) popup_toolbar2_fixed_window_cp01

0x6669,	// (0x0008360b) popup_toolbar2_fixed_window_cp02_ParamLimits

0x6669,	// (0x0008360b) popup_toolbar2_fixed_window_cp02

0xbbd8,	// (0x00088b7a) popup_call2_audio_second_window_t4_ParamLimits

0xbbd8,	// (0x00088b7a) popup_call2_audio_second_window_t4

0xc106,	// (0x000890a8) popup_call2_audio_first_window_t6_ParamLimits

0xc106,	// (0x000890a8) popup_call2_audio_first_window_t6

0xc39c,	// (0x0008933e) popup_call2_audio_out_window_t6_ParamLimits

0xc39c,	// (0x0008933e) popup_call2_audio_out_window_t6

0xa190,	// (0x00087132) main_vitu_pane

0x6b9b,	// (0x00083b3d) aid_size_cell_itu_ParamLimits

0x6b9b,	// (0x00083b3d) aid_size_cell_itu

0x2138,	// (0x0007f0da) bg_popup_window_pane_cp08_ParamLimits

0x2138,	// (0x0007f0da) bg_popup_window_pane_cp08

0x6ba9,	// (0x00083b4b) field_vitu_entry_pane_ParamLimits

0x6ba9,	// (0x00083b4b) field_vitu_entry_pane

0x6bb8,	// (0x00083b5a) grid_vitu_function_pane_ParamLimits

0x6bb8,	// (0x00083b5a) grid_vitu_function_pane

0x6bc8,	// (0x00083b6a) grid_vitu_itu_pane_ParamLimits

0x6bc8,	// (0x00083b6a) grid_vitu_itu_pane

0x6bd8,	// (0x00083b7a) cell_vitu_itu_pane_ParamLimits

0x6bd8,	// (0x00083b7a) cell_vitu_itu_pane

0x6bef,	// (0x00083b91) cell_vitu_function_pane_ParamLimits

0x6bef,	// (0x00083b91) cell_vitu_function_pane

0xa8a9,	// (0x0008784b) bg_popup_sub_pane_cp08_ParamLimits

0xa8a9,	// (0x0008784b) bg_popup_sub_pane_cp08

0x6c03,	// (0x00083ba5) field_vitu_entry_pane_t1_ParamLimits

0x6c03,	// (0x00083ba5) field_vitu_entry_pane_t1

0xd279,	// (0x0008a21b) field_vitu_entry_pane_t2_ParamLimits

0xd279,	// (0x0008a21b) field_vitu_entry_pane_t2

0x0001,

0xf80e,	// (0x0008c7b0) field_vitu_entry_pane_t_ParamLimits

0xf80e,	// (0x0008c7b0) field_vitu_entry_pane_t

0xd296,	// (0x0008a238) bg_button_pane_cp05_ParamLimits

0xd296,	// (0x0008a238) bg_button_pane_cp05

0x6c1d,	// (0x00083bbf) cell_vitu_itu_pane_g1

0x6c35,	// (0x00083bd7) cell_vitu_itu_pane_t1_ParamLimits

0x6c35,	// (0x00083bd7) cell_vitu_itu_pane_t1

0x6c47,	// (0x00083be9) cell_vitu_itu_pane_t2_ParamLimits

0x6c47,	// (0x00083be9) cell_vitu_itu_pane_t2

0x0002,

0xf813,	// (0x0008c7b5) cell_vitu_itu_pane_t_ParamLimits

0xf813,	// (0x0008c7b5) cell_vitu_itu_pane_t

0xd2a4,	// (0x0008a246) bg_button_pane_cp07

0x6c8a,	// (0x00083c2c) cell_vitu_function_pane_g1

0x23cb,	// (0x0007f36d) main_calc_pane_g1

0x1f0a,	// (0x0007eeac) aid_visual_content_pane

0xa190,	// (0x00087132) main_vradio_pane

0x6c93,	// (0x00083c35) main_vradio_pane_g1_ParamLimits

0x6c93,	// (0x00083c35) main_vradio_pane_g1

0xd2ae,	// (0x0008a250) main_vradio_pane_g2_ParamLimits

0xd2ae,	// (0x0008a250) main_vradio_pane_g2

0x0001,

0xf81a,	// (0x0008c7bc) main_vradio_pane_g_ParamLimits

0xf81a,	// (0x0008c7bc) main_vradio_pane_g

0x6ca1,	// (0x00083c43) main_vradio_pane_t1_ParamLimits

0x6ca1,	// (0x00083c43) main_vradio_pane_t1

0x6cb3,	// (0x00083c55) main_vradio_pane_t2_ParamLimits

0x6cb3,	// (0x00083c55) main_vradio_pane_t2

0xd2bb,	// (0x0008a25d) main_vradio_pane_t3_ParamLimits

0xd2bb,	// (0x0008a25d) main_vradio_pane_t3

0x0002,

0xf81f,	// (0x0008c7c1) main_vradio_pane_t_ParamLimits

0xf81f,	// (0x0008c7c1) main_vradio_pane_t

0x6cc5,	// (0x00083c67) vradio_rocker_control_pane_ParamLimits

0x6cc5,	// (0x00083c67) vradio_rocker_control_pane

0x6cd1,	// (0x00083c73) vradio_station_info_pane_ParamLimits

0x6cd1,	// (0x00083c73) vradio_station_info_pane

0xd2cf,	// (0x0008a271) vradio_frequency_info_pane_ParamLimits

0xd2cf,	// (0x0008a271) vradio_frequency_info_pane

0xccb1,	// (0x00089c53) vradio_station_info_pane_g1

0xd2de,	// (0x0008a280) vradio_station_info_pane_t1_ParamLimits

0xd2de,	// (0x0008a280) vradio_station_info_pane_t1

0xd300,	// (0x0008a2a2) vradio_station_info_pane_t2_ParamLimits

0xd300,	// (0x0008a2a2) vradio_station_info_pane_t2

0x0001,

0xf826,	// (0x0008c7c8) vradio_station_info_pane_t_ParamLimits

0xf826,	// (0x0008c7c8) vradio_station_info_pane_t

0xd312,	// (0x0008a2b4) vradio_tuning_pane

0xd31a,	// (0x0008a2bc) vradio_rocker_control_pane_g1

0xd322,	// (0x0008a2c4) vradio_rocker_control_pane_g2

0xd32a,	// (0x0008a2cc) vradio_rocker_control_pane_g3

0xd332,	// (0x0008a2d4) vradio_rocker_control_pane_g4

0xd33a,	// (0x0008a2dc) vradio_rocker_control_pane_g5

0x0004,

0xf82b,	// (0x0008c7cd) vradio_rocker_control_pane_g

0x6cde,	// (0x00083c80) vradio_frequency_info_pane_g1

0xd342,	// (0x0008a2e4) vradio_frequency_info_pane_t1_ParamLimits

0xd342,	// (0x0008a2e4) vradio_frequency_info_pane_t1

0x6ce8,	// (0x00083c8a) vradio_tuning_pane_g1

0x6cf3,	// (0x00083c95) vradio_tuning_pane_t1

0xa1ae,	// (0x00087150) area_side_right_pane_ParamLimits

0xa1ae,	// (0x00087150) area_side_right_pane

0xc81b,	// (0x000897bd) status_small_pane_g1

0xc823,	// (0x000897c5) status_small_pane_g2

0xc82c,	// (0x000897ce) status_small_pane_g3

0xc835,	// (0x000897d7) status_small_pane_g4

0x0003,

0xf5fd,	// (0x0008c59f) status_small_pane_g

0xc83e,	// (0x000897e0) status_small_pane_t1

0xa190,	// (0x00087132) main_video3_pane

0xd356,	// (0x0008a2f8) cams_zoom_vslider_pane

0xd35e,	// (0x0008a300) image3_wide_pane_ParamLimits

0xd35e,	// (0x0008a300) image3_wide_pane

0xd378,	// (0x0008a31a) image3_wide_small_pane

0xd384,	// (0x0008a326) main_video3_pane_g1_ParamLimits

0xd384,	// (0x0008a326) main_video3_pane_g1

0xd3a0,	// (0x0008a342) main_video3_pane_g2_ParamLimits

0xd3a0,	// (0x0008a342) main_video3_pane_g2

0x0001,

0xf836,	// (0x0008c7d8) main_video3_pane_g_ParamLimits

0xf836,	// (0x0008c7d8) main_video3_pane_g

0xd3bc,	// (0x0008a35e) main_video3_pane_t1_ParamLimits

0xd3bc,	// (0x0008a35e) main_video3_pane_t1

0xd3e7,	// (0x0008a389) main_video3_pane_t2_ParamLimits

0xd3e7,	// (0x0008a389) main_video3_pane_t2

0xd414,	// (0x0008a3b6) main_video3_pane_t3_ParamLimits

0xd414,	// (0x0008a3b6) main_video3_pane_t3

0x0002,

0xf83b,	// (0x0008c7dd) main_video3_pane_t_ParamLimits

0xf83b,	// (0x0008c7dd) main_video3_pane_t

0xd441,	// (0x0008a3e3) cams_zoom_vslider_pane_g1

0xd44a,	// (0x0008a3ec) cams_zoom_vslider_pane_g2

0x0001,

0xf842,	// (0x0008c7e4) cams_zoom_vslider_pane_g

0xd452,	// (0x0008a3f4) small_slider_vertical_pane

0xccb1,	// (0x00089c53) small_slider_vertical_pane_g1

0xccb1,	// (0x00089c53) small_slider_vertical_pane_g2

0xd45a,	// (0x0008a3fc) small_slider_vertical_pane_g3

0x0002,

0xf847,	// (0x0008c7e9) small_slider_vertical_pane_g

0xa190,	// (0x00087132) main_hwr_training_pane

0xd463,	// (0x0008a405) hwr_training_instruct_pane_ParamLimits

0xd463,	// (0x0008a405) hwr_training_instruct_pane

0x6d02,	// (0x00083ca4) hwr_training_navi_pane_ParamLimits

0x6d02,	// (0x00083ca4) hwr_training_navi_pane

0x6d1c,	// (0x00083cbe) hwr_training_write_pane_ParamLimits

0x6d1c,	// (0x00083cbe) hwr_training_write_pane

0xa190,	// (0x00087132) bg_frame_shadow_pane

0xd49a,	// (0x0008a43c) hwr_training_write_pane_g1

0xd4a2,	// (0x0008a444) hwr_training_write_pane_g2

0xd4aa,	// (0x0008a44c) hwr_training_write_pane_g3

0xd4b2,	// (0x0008a454) hwr_training_write_pane_g4

0xd4ba,	// (0x0008a45c) hwr_training_write_pane_g5

0xd4c2,	// (0x0008a464) hwr_training_write_pane_g6

0xd4ca,	// (0x0008a46c) hwr_training_write_pane_g7

0x0006,

0xf84e,	// (0x0008c7f0) hwr_training_write_pane_g

0x6d54,	// (0x00083cf6) hwr_training_navi_pane_g1_ParamLimits

0x6d54,	// (0x00083cf6) hwr_training_navi_pane_g1

0x6d66,	// (0x00083d08) hwr_training_navi_pane_g2_ParamLimits

0x6d66,	// (0x00083d08) hwr_training_navi_pane_g2

0x6d78,	// (0x00083d1a) hwr_training_navi_pane_g3_ParamLimits

0x6d78,	// (0x00083d1a) hwr_training_navi_pane_g3

0x6d88,	// (0x00083d2a) hwr_training_navi_pane_g4_ParamLimits

0x6d88,	// (0x00083d2a) hwr_training_navi_pane_g4

0x0004,

0xf85d,	// (0x0008c7ff) hwr_training_navi_pane_g_ParamLimits

0xf85d,	// (0x0008c7ff) hwr_training_navi_pane_g

0x6da2,	// (0x00083d44) hwr_training_navi_pane_t1

0x6db0,	// (0x00083d52) list_single_hwr_training_instruct_pane_ParamLimits

0x6db0,	// (0x00083d52) list_single_hwr_training_instruct_pane

0xd4d2,	// (0x0008a474) list_single_hwr_training_instruct_pane_t1

0xcbf1,	// (0x00089b93) bg_frame_shadow_pane_g1

0xd4e1,	// (0x0008a483) bg_frame_shadow_pane_g2

0xd4e9,	// (0x0008a48b) bg_frame_shadow_pane_g3

0xd4f1,	// (0x0008a493) bg_frame_shadow_pane_g4

0xd4f9,	// (0x0008a49b) bg_frame_shadow_pane_g5

0xd501,	// (0x0008a4a3) bg_frame_shadow_pane_g6

0xd509,	// (0x0008a4ab) bg_frame_shadow_pane_g7

0xaa0d,	// (0x000879af) bg_frame_shadow_pane_g8

0x0007,

0xf868,	// (0x0008c80a) bg_frame_shadow_pane_g

0xa190,	// (0x00087132) main_video_tele_dialer_pane

0x6dc9,	// (0x00083d6b) aid_size_cell_video_keypad_ParamLimits

0x6dc9,	// (0x00083d6b) aid_size_cell_video_keypad

0x6dd9,	// (0x00083d7b) grid_video_dialer_keypad_pane_ParamLimits

0x6dd9,	// (0x00083d7b) grid_video_dialer_keypad_pane

0x6e0b,	// (0x00083dad) video_down_pane_cp_ParamLimits

0x6e0b,	// (0x00083dad) video_down_pane_cp

0x6e33,	// (0x00083dd5) cell_video_dialer_keypad_pane_ParamLimits

0x6e33,	// (0x00083dd5) cell_video_dialer_keypad_pane

0xd511,	// (0x0008a4b3) bg_button_pane_cp08_ParamLimits

0xd511,	// (0x0008a4b3) bg_button_pane_cp08

0x6e4a,	// (0x00083dec) cell_video_dialer_keypad_pane_g1_ParamLimits

0x6e4a,	// (0x00083dec) cell_video_dialer_keypad_pane_g1

0x6641,	// (0x000835e3) mup3_rocker2_pane_ParamLimits

0x6641,	// (0x000835e3) mup3_rocker2_pane

0xccb1,	// (0x00089c53) mup3_rocker2_pane_g1

0x5536,	// (0x000824d8) main_dialer2_pane

0xa190,	// (0x00087132) main_mp4_pane

0x6e89,	// (0x00083e2b) main_mp4_pane_g1_ParamLimits

0x6e89,	// (0x00083e2b) main_mp4_pane_g1

0x6e97,	// (0x00083e39) main_mp4_pane_g2_ParamLimits

0x6e97,	// (0x00083e39) main_mp4_pane_g2

0x6ea5,	// (0x00083e47) main_mp4_pane_g3_ParamLimits

0x6ea5,	// (0x00083e47) main_mp4_pane_g3

0x6ef8,	// (0x00083e9a) main_mp4_pane_g4_ParamLimits

0x6ef8,	// (0x00083e9a) main_mp4_pane_g4

0x6f20,	// (0x00083ec2) main_mp4_pane_g5_ParamLimits

0x6f20,	// (0x00083ec2) main_mp4_pane_g5

0x0005,

0xf888,	// (0x0008c82a) main_mp4_pane_g_ParamLimits

0xf888,	// (0x0008c82a) main_mp4_pane_g

0x6f70,	// (0x00083f12) main_mp4_pane_t1_ParamLimits

0x6f70,	// (0x00083f12) main_mp4_pane_t1

0x6fcc,	// (0x00083f6e) main_mp4_pane_t2_ParamLimits

0x6fcc,	// (0x00083f6e) main_mp4_pane_t2

0xd51d,	// (0x0008a4bf) main_mp4_pane_t3_ParamLimits

0xd51d,	// (0x0008a4bf) main_mp4_pane_t3

0x701e,	// (0x00083fc0) main_mp4_pane_t4_ParamLimits

0x701e,	// (0x00083fc0) main_mp4_pane_t4

0x0003,

0xf895,	// (0x0008c837) main_mp4_pane_t_ParamLimits

0xf895,	// (0x0008c837) main_mp4_pane_t

0x705e,	// (0x00084000) mp4_progress_pane_ParamLimits

0x705e,	// (0x00084000) mp4_progress_pane

0x70a8,	// (0x0008404a) mp4_rocker_pane_ParamLimits

0x70a8,	// (0x0008404a) mp4_rocker_pane

0xd545,	// (0x0008a4e7) mp4_progress_pane_t1

0xd55e,	// (0x0008a500) mp4_progress_pane_t2

0x0001,

0xf89e,	// (0x0008c840) mp4_progress_pane_t

0xd577,	// (0x0008a519) mup_progress_pane_cp04

0xccb1,	// (0x00089c53) mp4_rocker_pane_g1

0x70ca,	// (0x0008406c) aid_cell_size_keypad2_ParamLimits

0x70ca,	// (0x0008406c) aid_cell_size_keypad2

0x70da,	// (0x0008407c) dialer2_ne_pane_ParamLimits

0x70da,	// (0x0008407c) dialer2_ne_pane

0x70e6,	// (0x00084088) grid_dialer2_keypad_pane_ParamLimits

0x70e6,	// (0x00084088) grid_dialer2_keypad_pane

0xdbee,	// (0x0008ab90) bg_popup_call_pane_cp07_ParamLimits

0xdbee,	// (0x0008ab90) bg_popup_call_pane_cp07

0x70f4,	// (0x00084096) dialer2_ne_pane_t1_ParamLimits

0x70f4,	// (0x00084096) dialer2_ne_pane_t1

0x7119,	// (0x000840bb) cell_dialer2_keypad_pane_ParamLimits

0x7119,	// (0x000840bb) cell_dialer2_keypad_pane

0xd595,	// (0x0008a537) bg_button_pane_pane_cp04_ParamLimits

0xd595,	// (0x0008a537) bg_button_pane_pane_cp04

0x7130,	// (0x000840d2) cell_dialer2_keypad_pane_g1_ParamLimits

0x7130,	// (0x000840d2) cell_dialer2_keypad_pane_g1

0x3211,	// (0x000801b3) aid_placing_vt_set_content_ParamLimits

0x3211,	// (0x000801b3) aid_placing_vt_set_content

0x3239,	// (0x000801db) aid_placing_vt_set_title_ParamLimits

0x3239,	// (0x000801db) aid_placing_vt_set_title

0xa190,	// (0x00087132) main_image3_pane

0x71ca,	// (0x0008416c) area_side_right_pane_cp01_ParamLimits

0x71ca,	// (0x0008416c) area_side_right_pane_cp01

0xa8b7,	// (0x00087859) main_image3_pane_g1_ParamLimits

0xa8b7,	// (0x00087859) main_image3_pane_g1

0x71f9,	// (0x0008419b) main_image3_pane_g2_ParamLimits

0x71f9,	// (0x0008419b) main_image3_pane_g2

0x7212,	// (0x000841b4) main_image3_pane_g3_ParamLimits

0x7212,	// (0x000841b4) main_image3_pane_g3

0x722b,	// (0x000841cd) main_image3_pane_g4_ParamLimits

0x722b,	// (0x000841cd) main_image3_pane_g4

0x0003,

0xf8ad,	// (0x0008c84f) main_image3_pane_g_ParamLimits

0xf8ad,	// (0x0008c84f) main_image3_pane_g

0x7244,	// (0x000841e6) main_image3_pane_t1_ParamLimits

0x7244,	// (0x000841e6) main_image3_pane_t1

0x7269,	// (0x0008420b) main_image3_pane_t2_ParamLimits

0x7269,	// (0x0008420b) main_image3_pane_t2

0x7288,	// (0x0008422a) main_image3_pane_t3_ParamLimits

0x7288,	// (0x0008422a) main_image3_pane_t3

0x0003,

0xf8b6,	// (0x0008c858) main_image3_pane_t_ParamLimits

0xf8b6,	// (0x0008c858) main_image3_pane_t

0x2138,	// (0x0007f0da) grid_sctrl_middle_pane_cp01_ParamLimits

0x2138,	// (0x0007f0da) grid_sctrl_middle_pane_cp01

0x72e9,	// (0x0008428b) cell_sctrl_middle_pane_cp01_ParamLimits

0x72e9,	// (0x0008428b) cell_sctrl_middle_pane_cp01

0x72fa,	// (0x0008429c) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x72fa,	// (0x0008429c) cell_sctrl_middle_pane_cp01_g1

0xa190,	// (0x00087132) main_call4_pane

0x7307,	// (0x000842a9) aid_size_button_call4_ParamLimits

0x7307,	// (0x000842a9) aid_size_button_call4

0x7339,	// (0x000842db) call4_windows_pane_ParamLimits

0x7339,	// (0x000842db) call4_windows_pane

0x7355,	// (0x000842f7) grid_call4_button_pane_ParamLimits

0x7355,	// (0x000842f7) grid_call4_button_pane

0xd5a1,	// (0x0008a543) call4_windows_conf_pane

0x7379,	// (0x0008431b) popup_call4_audio_first_window_ParamLimits

0x7379,	// (0x0008431b) popup_call4_audio_first_window

0x73a5,	// (0x00084347) popup_call4_audio_second_window_ParamLimits

0x73a5,	// (0x00084347) popup_call4_audio_second_window

0xd5e8,	// (0x0008a58a) popup_call4_audio_wait_window_ParamLimits

0xd5e8,	// (0x0008a58a) popup_call4_audio_wait_window

0x73b9,	// (0x0008435b) cell_call4_button_pane_ParamLimits

0x73b9,	// (0x0008435b) cell_call4_button_pane

0x73dc,	// (0x0008437e) bg_button_pane_cp09_ParamLimits

0x73dc,	// (0x0008437e) bg_button_pane_cp09

0x73e8,	// (0x0008438a) cell_call4_button_pane_g1_ParamLimits

0x73e8,	// (0x0008438a) cell_call4_button_pane_g1

0x73f5,	// (0x00084397) cell_call4_button_pane_t1_ParamLimits

0x73f5,	// (0x00084397) cell_call4_button_pane_t1

0xd630,	// (0x0008a5d2) popup_call4_audio_conf_window_ParamLimits

0xd630,	// (0x0008a5d2) popup_call4_audio_conf_window

0x6676,	// (0x00083618) mup3_progress_pane_t1_ParamLimits

0x6695,	// (0x00083637) mup3_progress_pane_t2_ParamLimits

0xcf5c,	// (0x00089efe) mup3_progress_pane_t3_ParamLimits

0xf78f,	// (0x0008c731) mup3_progress_pane_t_ParamLimits

0xcf79,	// (0x00089f1b) mup_progress_pane_cp03_ParamLimits

0x6b93,	// (0x00083b35) mup3_control_keys_pane_g4_copy1

0x708c,	// (0x0008402e) mp4_rocker2_pane_ParamLimits

0x708c,	// (0x0008402e) mp4_rocker2_pane

0xd64a,	// (0x0008a5ec) mp4_rocker2_pane_g1

0xd652,	// (0x0008a5f4) mp4_rocker2_pane_g2

0x7407,	// (0x000843a9) mp4_rocker2_pane_g3

0x740f,	// (0x000843b1) mp4_rocker2_pane_g4

0x7417,	// (0x000843b9) mp4_rocker2_pane_g5

0x0004,

0xf8bf,	// (0x0008c861) mp4_rocker2_pane_g

0xa190,	// (0x00087132) main_camera4_pane

0xa190,	// (0x00087132) main_video4_pane

0x6de7,	// (0x00083d89) main_video_tele_dialer_pane_t1_ParamLimits

0x6de7,	// (0x00083d89) main_video_tele_dialer_pane_t1

0x6df9,	// (0x00083d9b) main_video_tele_dialer_pane_t2_ParamLimits

0x6df9,	// (0x00083d9b) main_video_tele_dialer_pane_t2

0x0001,

0xf879,	// (0x0008c81b) main_video_tele_dialer_pane_t_ParamLimits

0xf879,	// (0x0008c81b) main_video_tele_dialer_pane_t

0x7437,	// (0x000843d9) cam4_autofocus_pane_ParamLimits

0x7437,	// (0x000843d9) cam4_autofocus_pane

0x744f,	// (0x000843f1) cam4_image_uncrop_pane_ParamLimits

0x744f,	// (0x000843f1) cam4_image_uncrop_pane

0x7468,	// (0x0008440a) cam4_indicators_pane_ParamLimits

0x7468,	// (0x0008440a) cam4_indicators_pane

0x7484,	// (0x00084426) main_camera4_pane_g1_ParamLimits

0x7484,	// (0x00084426) main_camera4_pane_g1

0x7490,	// (0x00084432) main_camera4_pane_g2_ParamLimits

0x7490,	// (0x00084432) main_camera4_pane_g2

0x7490,	// (0x00084432) main_camera4_pane_g3_ParamLimits

0x7490,	// (0x00084432) main_camera4_pane_g3

0x749c,	// (0x0008443e) main_camera4_pane_g4_ParamLimits

0x749c,	// (0x0008443e) main_camera4_pane_g4

0x74a8,	// (0x0008444a) main_camera4_pane_g5_ParamLimits

0x74a8,	// (0x0008444a) main_camera4_pane_g5

0x0005,

0xf8ca,	// (0x0008c86c) main_camera4_pane_g_ParamLimits

0xf8ca,	// (0x0008c86c) main_camera4_pane_g

0x74c2,	// (0x00084464) main_camera4_pane_t1_ParamLimits

0x74c2,	// (0x00084464) main_camera4_pane_t1

0xcee1,	// (0x00089e83) bg_tb_trans_pane_cp06

0x7514,	// (0x000844b6) cam4_indicators_pane_g1

0x7525,	// (0x000844c7) cam4_indicators_pane_g2

0x0002,

0xf8e5,	// (0x0008c887) cam4_indicators_pane_g

0x753d,	// (0x000844df) cam4_indicators_pane_t1

0x7567,	// (0x00084509) main_video4_pane_g1_ParamLimits

0x7567,	// (0x00084509) main_video4_pane_g1

0x7573,	// (0x00084515) main_video4_pane_g2_ParamLimits

0x7573,	// (0x00084515) main_video4_pane_g2

0x757f,	// (0x00084521) main_video4_pane_g3_ParamLimits

0x757f,	// (0x00084521) main_video4_pane_g3

0x758b,	// (0x0008452d) main_video4_pane_g4_ParamLimits

0x758b,	// (0x0008452d) main_video4_pane_g4

0x0004,

0xf8ec,	// (0x0008c88e) main_video4_pane_g_ParamLimits

0xf8ec,	// (0x0008c88e) main_video4_pane_g

0x75ad,	// (0x0008454f) vid4_indicators_pane_ParamLimits

0x75ad,	// (0x0008454f) vid4_indicators_pane

0x75cc,	// (0x0008456e) video4_image_uncrop_cif_pane_ParamLimits

0x75cc,	// (0x0008456e) video4_image_uncrop_cif_pane

0x75db,	// (0x0008457d) video4_image_uncrop_nhd_pane_ParamLimits

0x75db,	// (0x0008457d) video4_image_uncrop_nhd_pane

0x744f,	// (0x000843f1) video4_image_uncrop_vga_pane_ParamLimits

0x744f,	// (0x000843f1) video4_image_uncrop_vga_pane

0xa8a9,	// (0x0008784b) bg_tb_trans_pane_cp07

0x75f4,	// (0x00084596) vid4_indicators_pane_g1

0x760a,	// (0x000845ac) vid4_indicators_pane_g2

0x761e,	// (0x000845c0) vid4_indicators_pane_g3

0x0004,

0xf8f7,	// (0x0008c899) vid4_indicators_pane_g

0x764f,	// (0x000845f1) vid4_indicators_pane_t1

0x7666,	// (0x00084608) cam4_autofocus_pane_g1

0x766e,	// (0x00084610) cam4_autofocus_pane_g2

0x7676,	// (0x00084618) cam4_autofocus_pane_g3

0x0002,

0xf902,	// (0x0008c8a4) cam4_autofocus_pane_g

0x767e,	// (0x00084620) cam4_autofocus_pane_g3_copy1

0x6e17,	// (0x00083db9) video_down_pane_cp_t1

0x6e25,	// (0x00083dc7) video_down_pane_cp_t2

0x0001,

0xf87e,	// (0x0008c820) video_down_pane_cp_t

0x2138,	// (0x0007f0da) popup_vitu2_window_ParamLimits

0x2138,	// (0x0007f0da) popup_vitu2_window

0x7686,	// (0x00084628) aid_size_cell2_itu2_ParamLimits

0x7686,	// (0x00084628) aid_size_cell2_itu2

0x76a8,	// (0x0008464a) aid_size_cell_itu2_ParamLimits

0x76a8,	// (0x0008464a) aid_size_cell_itu2

0xdbee,	// (0x0008ab90) bg_popup_window_pane_cp09_ParamLimits

0xdbee,	// (0x0008ab90) bg_popup_window_pane_cp09

0x76ee,	// (0x00084690) field_vitu2_entry_pane_ParamLimits

0x76ee,	// (0x00084690) field_vitu2_entry_pane

0x770e,	// (0x000846b0) grid_vitu2_function_pane_ParamLimits

0x770e,	// (0x000846b0) grid_vitu2_function_pane

0x7752,	// (0x000846f4) grid_vitu2_itu_pane_ParamLimits

0x7752,	// (0x000846f4) grid_vitu2_itu_pane

0x77ca,	// (0x0008476c) cell_vitu2_itu_pane_ParamLimits

0x77ca,	// (0x0008476c) cell_vitu2_itu_pane

0x77e1,	// (0x00084783) cell_vitu2_function_pane_ParamLimits

0x77e1,	// (0x00084783) cell_vitu2_function_pane

0xd65a,	// (0x0008a5fc) bg_popup_call_pane_cp08_ParamLimits

0xd65a,	// (0x0008a5fc) bg_popup_call_pane_cp08

0xd673,	// (0x0008a615) field_vitu2_entry_pane_g1

0xd67f,	// (0x0008a621) field_vitu2_entry_pane_g2

0x0002,

0xf909,	// (0x0008c8ab) field_vitu2_entry_pane_g

0x0ec9,	// (0x0007de6b) field_vitu2_entry_pane_t1_ParamLimits

0x0ec9,	// (0x0007de6b) field_vitu2_entry_pane_t1

0x0ef7,	// (0x0007de99) field_vitu2_entry_pane_t2_ParamLimits

0x0ef7,	// (0x0007de99) field_vitu2_entry_pane_t2

0x0001,

0xf910,	// (0x0008c8b2) field_vitu2_entry_pane_t_ParamLimits

0xf910,	// (0x0008c8b2) field_vitu2_entry_pane_t

0x7825,	// (0x000847c7) bg_button_pane_cp010_ParamLimits

0x7825,	// (0x000847c7) bg_button_pane_cp010

0x7833,	// (0x000847d5) cell_vitu2_itu_pane_g1

0x785c,	// (0x000847fe) cell_vitu2_itu_pane_t1_ParamLimits

0x785c,	// (0x000847fe) cell_vitu2_itu_pane_t1

0x0f14,	// (0x0007deb6) cell_vitu2_itu_pane_t2_ParamLimits

0x0f14,	// (0x0007deb6) cell_vitu2_itu_pane_t2

0x0002,

0xf91a,	// (0x0008c8bc) cell_vitu2_itu_pane_t_ParamLimits

0xf91a,	// (0x0008c8bc) cell_vitu2_itu_pane_t

0xa8a9,	// (0x0008784b) bg_button_pane_cp011

0x78a8,	// (0x0008484a) cell_vitu2_function_pane_g1

0xa190,	// (0x00087132) main_myfav_hc_pane

0x72ca,	// (0x0008426c) popup_image3_note_pane_ParamLimits

0x72ca,	// (0x0008426c) popup_image3_note_pane

0x72d8,	// (0x0008427a) popup_image3_tool_bar_pane_ParamLimits

0x72d8,	// (0x0008427a) popup_image3_tool_bar_pane

0x0f8a,	// (0x0007df2c) cell_vitu2_itu_pane_t3_ParamLimits

0x0f8a,	// (0x0007df2c) cell_vitu2_itu_pane_t3

0xa190,	// (0x00087132) bg_popup_trans_pane

0xd6a1,	// (0x0008a643) grid_image3_tool_bar_pane

0xd6ab,	// (0x0008a64d) bg_popup_trans_pane_g1

0xad6b,	// (0x00087d0d) bg_popup_trans_pane_g2

0xd6b3,	// (0x0008a655) bg_popup_trans_pane_g3

0xd6bb,	// (0x0008a65d) bg_popup_trans_pane_g4

0xd6c3,	// (0x0008a665) bg_popup_trans_pane_g5

0xd6cb,	// (0x0008a66d) bg_popup_trans_pane_g6

0xd6d3,	// (0x0008a675) bg_popup_trans_pane_g7

0xd6db,	// (0x0008a67d) bg_popup_trans_pane_g8

0xad4b,	// (0x00087ced) bg_popup_trans_pane_g9

0x0008,

0xf921,	// (0x0008c8c3) bg_popup_trans_pane_g

0xd6e3,	// (0x0008a685) cell_image3_tool_bar_pane_ParamLimits

0xd6e3,	// (0x0008a685) cell_image3_tool_bar_pane

0xccb1,	// (0x00089c53) cell_image3_tool_bar_pane_g1

0xa190,	// (0x00087132) bg_popup_trans_pane_cp1

0xd6f9,	// (0x0008a69b) popup_image3_note_pane_t1

0xd707,	// (0x0008a6a9) popup_image3_note_pane_t2

0xd715,	// (0x0008a6b7) popup_image3_note_pane_t3

0x0002,

0xf934,	// (0x0008c8d6) popup_image3_note_pane_t

0xd725,	// (0x0008a6c7) popup_image3_note_pane_t3_copy1

0x78bc,	// (0x0008485e) bg_myfav_hc_instruction_pane_ParamLimits

0x78bc,	// (0x0008485e) bg_myfav_hc_instruction_pane

0x78d4,	// (0x00084876) cell_myfav_contact_pane_ParamLimits

0x78d4,	// (0x00084876) cell_myfav_contact_pane

0x78ee,	// (0x00084890) cell_myfav_contact_pane_cp1_ParamLimits

0x78ee,	// (0x00084890) cell_myfav_contact_pane_cp1

0x7906,	// (0x000848a8) cell_myfav_contact_pane_cp2_ParamLimits

0x7906,	// (0x000848a8) cell_myfav_contact_pane_cp2

0x791e,	// (0x000848c0) cell_myfav_contact_pane_cp3_ParamLimits

0x791e,	// (0x000848c0) cell_myfav_contact_pane_cp3

0x7935,	// (0x000848d7) cell_myfav_contact_pane_cp4_ParamLimits

0x7935,	// (0x000848d7) cell_myfav_contact_pane_cp4

0x794b,	// (0x000848ed) cell_myfav_contact_pane_cp5_ParamLimits

0x794b,	// (0x000848ed) cell_myfav_contact_pane_cp5

0x795f,	// (0x00084901) cell_myfav_contact_pane_cp6_ParamLimits

0x795f,	// (0x00084901) cell_myfav_contact_pane_cp6

0x7973,	// (0x00084915) cell_myfav_contact_pane_cp7_ParamLimits

0x7973,	// (0x00084915) cell_myfav_contact_pane_cp7

0xd733,	// (0x0008a6d5) listscroll_gen_pane_cp05

0x798b,	// (0x0008492d) main_myfav_hc_pane_g1_ParamLimits

0x798b,	// (0x0008492d) main_myfav_hc_pane_g1

0x79a5,	// (0x00084947) main_myfav_hc_pane_g2_ParamLimits

0x79a5,	// (0x00084947) main_myfav_hc_pane_g2

0x0002,

0xf93b,	// (0x0008c8dd) main_myfav_hc_pane_g_ParamLimits

0xf93b,	// (0x0008c8dd) main_myfav_hc_pane_g

0x79d7,	// (0x00084979) main_myfav_hc_pane_t1_ParamLimits

0x79d7,	// (0x00084979) main_myfav_hc_pane_t1

0xd73c,	// (0x0008a6de) main_myfav_hc_pane_t2_ParamLimits

0xd73c,	// (0x0008a6de) main_myfav_hc_pane_t2

0xd74e,	// (0x0008a6f0) main_myfav_hc_pane_t3_ParamLimits

0xd74e,	// (0x0008a6f0) main_myfav_hc_pane_t3

0x79ee,	// (0x00084990) main_myfav_hc_pane_t4_ParamLimits

0x79ee,	// (0x00084990) main_myfav_hc_pane_t4

0x0004,

0xf942,	// (0x0008c8e4) main_myfav_hc_pane_t_ParamLimits

0xf942,	// (0x0008c8e4) main_myfav_hc_pane_t

0xccb1,	// (0x00089c53) bg_myfav_hc_instruction_pane_g1

0xd760,	// (0x0008a702) cell_myfav_contact_pane_g1_ParamLimits

0xd760,	// (0x0008a702) cell_myfav_contact_pane_g1

0xd760,	// (0x0008a702) cell_myfav_contact_pane_g2_ParamLimits

0xd760,	// (0x0008a702) cell_myfav_contact_pane_g2

0xd76c,	// (0x0008a70e) cell_myfav_contact_pane_g3_ParamLimits

0xd76c,	// (0x0008a70e) cell_myfav_contact_pane_g3

0xcf46,	// (0x00089ee8) cell_myfav_contact_pane_g4_ParamLimits

0xcf46,	// (0x00089ee8) cell_myfav_contact_pane_g4

0xd779,	// (0x0008a71b) cell_myfav_contact_pane_g5_ParamLimits

0xd779,	// (0x0008a71b) cell_myfav_contact_pane_g5

0x0004,

0xf94d,	// (0x0008c8ef) cell_myfav_contact_pane_g_ParamLimits

0xf94d,	// (0x0008c8ef) cell_myfav_contact_pane_g

0x79bf,	// (0x00084961) main_myfav_hc_pane_g3_ParamLimits

0x79bf,	// (0x00084961) main_myfav_hc_pane_g3

0x204a,	// (0x0007efec) popup_adpt_find_window

0x7a18,	// (0x000849ba) afind_page_pane_ParamLimits

0x7a18,	// (0x000849ba) afind_page_pane

0x7a25,	// (0x000849c7) aid_size_cell_afind_ParamLimits

0x7a25,	// (0x000849c7) aid_size_cell_afind

0x7a3f,	// (0x000849e1) bg_popup_sub_pane_cp09_ParamLimits

0x7a3f,	// (0x000849e1) bg_popup_sub_pane_cp09

0x7a4c,	// (0x000849ee) find_pane_cp01_ParamLimits

0x7a4c,	// (0x000849ee) find_pane_cp01

0xd785,	// (0x0008a727) grid_afind_control_pane_ParamLimits

0xd785,	// (0x0008a727) grid_afind_control_pane

0x7a59,	// (0x000849fb) grid_afind_pane_ParamLimits

0x7a59,	// (0x000849fb) grid_afind_pane

0x7a75,	// (0x00084a17) cell_afind_pane_ParamLimits

0x7a75,	// (0x00084a17) cell_afind_pane

0xccb1,	// (0x00089c53) afind_page_pane_g1

0x7ac1,	// (0x00084a63) afind_page_pane_g2

0x7aca,	// (0x00084a6c) afind_page_pane_g3

0x0002,

0xf958,	// (0x0008c8fa) afind_page_pane_g

0x7ad3,	// (0x00084a75) afind_page_pane_t1

0xd799,	// (0x0008a73b) cell_afind_grid_control_pane_ParamLimits

0xd799,	// (0x0008a73b) cell_afind_grid_control_pane

0xd595,	// (0x0008a537) bg_button_pane_cp69_ParamLimits

0xd595,	// (0x0008a537) bg_button_pane_cp69

0x7af3,	// (0x00084a95) cell_afind_pane_g1_ParamLimits

0x7af3,	// (0x00084a95) cell_afind_pane_g1

0x7b00,	// (0x00084aa2) cell_afind_pane_t1_ParamLimits

0x7b00,	// (0x00084aa2) cell_afind_pane_t1

0xab60,	// (0x00087b02) bg_button_pane_cp72

0xd7a8,	// (0x0008a74a) cell_afind_grid_control_pane_g1

0x50b1,	// (0x00082053) aid_image_placing_area_ParamLimits

0x50b1,	// (0x00082053) aid_image_placing_area

0xd261,	// (0x0008a203) field_vitu_entry_pane_g1_ParamLimits

0xd261,	// (0x0008a203) field_vitu_entry_pane_g1

0xd26d,	// (0x0008a20f) field_vitu_entry_pane_g2_ParamLimits

0xd26d,	// (0x0008a20f) field_vitu_entry_pane_g2

0x0001,

0xf809,	// (0x0008c7ab) field_vitu_entry_pane_g_ParamLimits

0xf809,	// (0x0008c7ab) field_vitu_entry_pane_g

0x6c1d,	// (0x00083bbf) cell_vitu_itu_pane_g1_ParamLimits

0x6c6d,	// (0x00083c0f) cell_vitu_itu_pane_t3_ParamLimits

0x6c6d,	// (0x00083c0f) cell_vitu_itu_pane_t3

0xd545,	// (0x0008a4e7) mp4_progress_pane_t1_ParamLimits

0xd55e,	// (0x0008a500) mp4_progress_pane_t2_ParamLimits

0xf89e,	// (0x0008c840) mp4_progress_pane_t_ParamLimits

0xd577,	// (0x0008a519) mup_progress_pane_cp04_ParamLimits

0x7a02,	// (0x000849a4) main_myfav_hc_pane_t5_ParamLimits

0x7a02,	// (0x000849a4) main_myfav_hc_pane_t5

0x0bb7,	// (0x0007db59) aid_zoom_text_primary

0x204a,	// (0x0007efec) popup_adpt_find_window_ParamLimits

0xa8a9,	// (0x0008784b) main_cam_set_pane

0x7476,	// (0x00084418) cam4_zoom_pane_ParamLimits

0x7476,	// (0x00084418) cam4_zoom_pane

0x7b12,	// (0x00084ab4) main_cam_set_pane_g1_ParamLimits

0x7b12,	// (0x00084ab4) main_cam_set_pane_g1

0x7b20,	// (0x00084ac2) main_cam_set_pane_g2_ParamLimits

0x7b20,	// (0x00084ac2) main_cam_set_pane_g2

0x0001,

0xf95f,	// (0x0008c901) main_cam_set_pane_g_ParamLimits

0xf95f,	// (0x0008c901) main_cam_set_pane_g

0x7b2c,	// (0x00084ace) main_cam_set_pane_t1_ParamLimits

0x7b2c,	// (0x00084ace) main_cam_set_pane_t1

0x7b48,	// (0x00084aea) main_cset_listscroll_pane_ParamLimits

0x7b48,	// (0x00084aea) main_cset_listscroll_pane

0x7b77,	// (0x00084b19) main_cset_slider_pane_ParamLimits

0x7b77,	// (0x00084b19) main_cset_slider_pane

0xd7b9,	// (0x0008a75b) main_cset_list_pane_ParamLimits

0xd7b9,	// (0x0008a75b) main_cset_list_pane

0xd7c9,	// (0x0008a76b) scroll_pane_cp028

0x7b98,	// (0x00084b3a) aid_area_touch_slider

0x7bb4,	// (0x00084b56) cset_slider_pane

0x7bde,	// (0x00084b80) main_cset_slider_pane_g1

0x7bf3,	// (0x00084b95) main_cset_slider_pane_g2

0x0011,

0xf964,	// (0x0008c906) main_cset_slider_pane_g

0xd802,	// (0x0008a7a4) main_cset_slider_pane_t1

0x7caf,	// (0x00084c51) main_cset_slider_pane_t2

0x7cc9,	// (0x00084c6b) main_cset_slider_pane_t3

0x7ce3,	// (0x00084c85) main_cset_slider_pane_t4

0x7cfd,	// (0x00084c9f) main_cset_slider_pane_t5

0x7d17,	// (0x00084cb9) main_cset_slider_pane_t6

0x7d2c,	// (0x00084cce) main_cset_slider_pane_t7

0x000e,

0xf989,	// (0x0008c92b) main_cset_slider_pane_t

0x7e30,	// (0x00084dd2) cset_list_set_pane_ParamLimits

0x7e30,	// (0x00084dd2) cset_list_set_pane

0x7e41,	// (0x00084de3) aid_position_infowindow_above

0x7e49,	// (0x00084deb) aid_position_infowindow_below

0x7e51,	// (0x00084df3) cset_list_set_pane_g1_ParamLimits

0x7e51,	// (0x00084df3) cset_list_set_pane_g1

0x0fd7,	// (0x0007df79) cset_list_set_pane_g3_ParamLimits

0x0fd7,	// (0x0007df79) cset_list_set_pane_g3

0x0001,

0xf9a8,	// (0x0008c94a) cset_list_set_pane_g_ParamLimits

0xf9a8,	// (0x0008c94a) cset_list_set_pane_g

0x0fe6,	// (0x0007df88) cset_list_set_pane_t1_ParamLimits

0x0fe6,	// (0x0007df88) cset_list_set_pane_t1

0xa8a9,	// (0x0008784b) list_highlight_pane_cp021_ParamLimits

0xa8a9,	// (0x0008784b) list_highlight_pane_cp021

0xb58a,	// (0x0008852c) cset_slider_pane_g1

0xb59c,	// (0x0008853e) cset_slider_pane_g2

0xb593,	// (0x00088535) cset_slider_pane_g3

0x0002,

0xf9ad,	// (0x0008c94f) cset_slider_pane_g

0x7e5d,	// (0x00084dff) aid_area_touch_cam4_zoom

0x7e65,	// (0x00084e07) cam4_zoom_cont_pane

0x7e6d,	// (0x00084e0f) cam4_zoom_pane_g1

0x7e75,	// (0x00084e17) cam4_zoom_pane_g2

0x7e7d,	// (0x00084e1f) cam4_zoom_pane_g3

0x0002,

0xf9b4,	// (0x0008c956) cam4_zoom_pane_g

0xdecd,	// (0x0008ae6f) cam4_zoom_cont_pane_g1

0xded6,	// (0x0008ae78) cam4_zoom_cont_pane_g2

0xdedf,	// (0x0008ae81) cam4_zoom_cont_pane_g3

0x0002,

0xf9bb,	// (0x0008c95d) cam4_zoom_cont_pane_g

0x7321,	// (0x000842c3) call4_image_pane_ParamLimits

0x7321,	// (0x000842c3) call4_image_pane

0xd5a1,	// (0x0008a543) call4_windows_conf_pane_ParamLimits

0xd5bc,	// (0x0008a55e) popup_call4_audio_in_window_ParamLimits

0xd5bc,	// (0x0008a55e) popup_call4_audio_in_window

0xa190,	// (0x00087132) bg_popup_call2_act_pane_cp02

0xd628,	// (0x0008a5ca) call4_list_conf_pane

0xccb1,	// (0x00089c53) call4_image_pane_g1

0xccb1,	// (0x00089c53) call4_image_pane_g2

0x0001,

0xf6e1,	// (0x0008c683) call4_image_pane_g

0xd8a2,	// (0x0008a844) list_single_graphic_popup_conf4_pane_ParamLimits

0xd8a2,	// (0x0008a844) list_single_graphic_popup_conf4_pane

0xa190,	// (0x00087132) list_highlight_pane_cp022

0xd8b7,	// (0x0008a859) list_single_graphic_popup_conf4_pane_g1

0xb26a,	// (0x0008820c) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf9c2,	// (0x0008c964) list_single_graphic_popup_conf4_pane_g

0xd8bf,	// (0x0008a861) list_single_graphic_popup_conf4_pane_t1

0x3393,	// (0x00080335) popup_vtel_slider_window_ParamLimits

0x3393,	// (0x00080335) popup_vtel_slider_window

0xd583,	// (0x0008a525) dialer2_ne_pane_t2_ParamLimits

0xd583,	// (0x0008a525) dialer2_ne_pane_t2

0x0001,

0xf8a3,	// (0x0008c845) dialer2_ne_pane_t_ParamLimits

0xf8a3,	// (0x0008c845) dialer2_ne_pane_t

0xa8a9,	// (0x0008784b) bg_popup_sub_pane_cp010_ParamLimits

0xa8a9,	// (0x0008784b) bg_popup_sub_pane_cp010

0x7e85,	// (0x00084e27) popup_vtel_slider_window_g1_ParamLimits

0x7e85,	// (0x00084e27) popup_vtel_slider_window_g1

0x7e91,	// (0x00084e33) popup_vtel_slider_window_g2_ParamLimits

0x7e91,	// (0x00084e33) popup_vtel_slider_window_g2

0x0003,

0xf9c7,	// (0x0008c969) popup_vtel_slider_window_g_ParamLimits

0xf9c7,	// (0x0008c969) popup_vtel_slider_window_g

0x7ed9,	// (0x00084e7b) vtel_slider_pane_ParamLimits

0x7ed9,	// (0x00084e7b) vtel_slider_pane

0x7ee8,	// (0x00084e8a) vtel_slider_pane_g1_ParamLimits

0x7ee8,	// (0x00084e8a) vtel_slider_pane_g1

0x7ef5,	// (0x00084e97) vtel_slider_pane_g2_ParamLimits

0x7ef5,	// (0x00084e97) vtel_slider_pane_g2

0x7f02,	// (0x00084ea4) vtel_slider_pane_g3_ParamLimits

0x7f02,	// (0x00084ea4) vtel_slider_pane_g3

0x7ee8,	// (0x00084e8a) vtel_slider_pane_g4_ParamLimits

0x7ee8,	// (0x00084e8a) vtel_slider_pane_g4

0x7f0f,	// (0x00084eb1) vtel_slider_pane_g5_ParamLimits

0x7f0f,	// (0x00084eb1) vtel_slider_pane_g5

0x0004,

0xf9d0,	// (0x0008c972) vtel_slider_pane_g_ParamLimits

0xf9d0,	// (0x0008c972) vtel_slider_pane_g

0xa8a9,	// (0x0008784b) main_gallery2_pane

0x76ce,	// (0x00084670) aid_size_row_itut2_dropdow_list_ParamLimits

0x76ce,	// (0x00084670) aid_size_row_itut2_dropdow_list

0x7730,	// (0x000846d2) grid_vitu2_function_top_pane_ParamLimits

0x7730,	// (0x000846d2) grid_vitu2_function_top_pane

0x7782,	// (0x00084724) popup_vitu2_dropdown_list_window_ParamLimits

0x7782,	// (0x00084724) popup_vitu2_dropdown_list_window

0x77a6,	// (0x00084748) popup_vitu2_match_list_window

0x7f1c,	// (0x00084ebe) cell_vitu2_function_top_pane_ParamLimits

0x7f1c,	// (0x00084ebe) cell_vitu2_function_top_pane

0x7f3c,	// (0x00084ede) cell_vitu2_function_top_pane_cp01_ParamLimits

0x7f3c,	// (0x00084ede) cell_vitu2_function_top_pane_cp01

0x7f5a,	// (0x00084efc) cell_vitu2_function_top_wide_pane_ParamLimits

0x7f5a,	// (0x00084efc) cell_vitu2_function_top_wide_pane

0xa8a9,	// (0x0008784b) bg_button_pane_cp012

0x7f78,	// (0x00084f1a) cell_vitu2_function_top_pane_g1

0x7f8c,	// (0x00084f2e) bg_button_pane_cp013_ParamLimits

0x7f8c,	// (0x00084f2e) bg_button_pane_cp013

0x7fa8,	// (0x00084f4a) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x7fa8,	// (0x00084f4a) cell_vitu2_function_top_wide_pane_g1

0x2138,	// (0x0007f0da) bg_popup_sub_pane_cp20

0x7fc0,	// (0x00084f62) list_vitu2_match_list_pane

0xd6ab,	// (0x0008a64d) bg_popup_sub_pane_cp20_g1

0xd6b3,	// (0x0008a655) bg_popup_sub_pane_cp20_g2

0xad6b,	// (0x00087d0d) bg_popup_sub_pane_cp20_g3

0xd6bb,	// (0x0008a65d) bg_popup_sub_pane_cp20_g4

0xad4b,	// (0x00087ced) bg_popup_sub_pane_cp20_g5

0xd8d5,	// (0x0008a877) bg_popup_sub_pane_cp20_g6

0xd6cb,	// (0x0008a66d) bg_popup_sub_pane_cp20_g7

0xd6d3,	// (0x0008a675) bg_popup_sub_pane_cp20_g8

0xd6db,	// (0x0008a67d) bg_popup_sub_pane_cp20_g9

0x0008,

0xf9db,	// (0x0008c97d) bg_popup_sub_pane_cp20_g

0xa8c5,	// (0x00087867) list_vitu2_match_list_item_pane_ParamLimits

0xa8c5,	// (0x00087867) list_vitu2_match_list_item_pane

0x7fd8,	// (0x00084f7a) list_vitu2_match_list_item_pane_t1

0xa190,	// (0x00087132) bg_popup_sub_pane_cp21

0xb193,	// (0x00088135) grid_vitu2_dropdown_list_pane

0x7ff2,	// (0x00084f94) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x7ff2,	// (0x00084f94) cell_vitu2_dropdown_list_char_pane

0x8017,	// (0x00084fb9) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x8017,	// (0x00084fb9) cell_vitu2_dropdown_list_ctrl_pane

0xd8dd,	// (0x0008a87f) cell_vitu2_dropdown_list_char_pane_g1

0xd8e6,	// (0x0008a888) cell_vitu2_dropdown_list_char_pane_g2

0xd8ef,	// (0x0008a891) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xf9f8,	// (0x0008c99a) cell_vitu2_dropdown_list_char_pane_g

0x8045,	// (0x00084fe7) cell_vitu2_dropdown_list_char_pane_t1

0x8053,	// (0x00084ff5) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x8053,	// (0x00084ff5) cell_vitu2_dropdown_list_ctrl_pane_g1

0x8063,	// (0x00085005) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x8063,	// (0x00085005) cell_vitu2_dropdown_list_ctrl_pane_g2

0x8074,	// (0x00085016) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x8074,	// (0x00085016) cell_vitu2_dropdown_list_ctrl_pane_g3

0x8084,	// (0x00085026) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x8084,	// (0x00085026) cell_vitu2_dropdown_list_ctrl_pane_g4

0xcee1,	// (0x00089e83) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0xcee1,	// (0x00089e83) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xf9ff,	// (0x0008c9a1) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xf9ff,	// (0x0008c9a1) cell_vitu2_dropdown_list_ctrl_pane_g

0x809d,	// (0x0008503f) aid_size_cell_gallery2_ParamLimits

0x809d,	// (0x0008503f) aid_size_cell_gallery2

0x80b7,	// (0x00085059) grid_gallery2_pane_ParamLimits

0x80b7,	// (0x00085059) grid_gallery2_pane

0x6aa2,	// (0x00083a44) scroll_pane_cp029_ParamLimits

0x6aa2,	// (0x00083a44) scroll_pane_cp029

0x80ce,	// (0x00085070) cell_gallery2_pane_ParamLimits

0x80ce,	// (0x00085070) cell_gallery2_pane

0xd8f8,	// (0x0008a89a) cell_gallery2_pane_g2

0x811a,	// (0x000850bc) cell_gallery2_pane_g3

0xd900,	// (0x0008a8a2) cell_gallery2_pane_g4

0xd908,	// (0x0008a8aa) cell_gallery2_pane_g5

0xb452,	// (0x000883f4) grid_highlight_pane_cp10

0x77a6,	// (0x00084748) popup_vitu2_match_list_window_ParamLimits

0x77ba,	// (0x0008475c) popup_vitu2_query_window_ParamLimits

0x77ba,	// (0x0008475c) popup_vitu2_query_window

0xa190,	// (0x00087132) bg_vitu2_candi_button_pane

0xd8dd,	// (0x0008a87f) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xd8e6,	// (0x0008a888) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xd8ef,	// (0x0008a891) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x1045,	// (0x0007dfe7) bg_button_pane_cp015

0x8122,	// (0x000850c4) bg_button_pane_cp016

0x8135,	// (0x000850d7) bg_button_pane_cp017

0xc860,	// (0x00089802) bg_popup_sub_pane_cp22

0xd910,	// (0x0008a8b2) popup_vitu2_query_window_g1

0x1078,	// (0x0007e01a) popup_vitu2_query_window_g2

0x0002,

0xfa0a,	// (0x0008c9ac) popup_vitu2_query_window_g

0x1095,	// (0x0007e037) popup_vitu2_query_window_t1_ParamLimits

0x1095,	// (0x0007e037) popup_vitu2_query_window_t1

0x10c8,	// (0x0007e06a) popup_vitu2_query_window_t2_ParamLimits

0x10c8,	// (0x0007e06a) popup_vitu2_query_window_t2

0x10da,	// (0x0007e07c) popup_vitu2_query_window_t3_ParamLimits

0x10da,	// (0x0007e07c) popup_vitu2_query_window_t3

0x8159,	// (0x000850fb) popup_vitu2_query_window_t4_ParamLimits

0x8159,	// (0x000850fb) popup_vitu2_query_window_t4

0x817c,	// (0x0008511e) popup_vitu2_query_window_t5_ParamLimits

0x817c,	// (0x0008511e) popup_vitu2_query_window_t5

0x0006,

0xfa11,	// (0x0008c9b3) popup_vitu2_query_window_t_ParamLimits

0xfa11,	// (0x0008c9b3) popup_vitu2_query_window_t

0xd7b1,	// (0x0008a753) main_cset_text_pane

0x7b98,	// (0x00084b3a) aid_area_touch_slider_ParamLimits

0x7bb4,	// (0x00084b56) cset_slider_pane_ParamLimits

0x7bde,	// (0x00084b80) main_cset_slider_pane_g1_ParamLimits

0x7bf3,	// (0x00084b95) main_cset_slider_pane_g2_ParamLimits

0xd7d2,	// (0x0008a774) main_cset_slider_pane_g3_ParamLimits

0xd7d2,	// (0x0008a774) main_cset_slider_pane_g3

0x7c08,	// (0x00084baa) main_cset_slider_pane_g4_ParamLimits

0x7c08,	// (0x00084baa) main_cset_slider_pane_g4

0x7c17,	// (0x00084bb9) main_cset_slider_pane_g5_ParamLimits

0x7c17,	// (0x00084bb9) main_cset_slider_pane_g5

0x7c23,	// (0x00084bc5) main_cset_slider_pane_g6_ParamLimits

0x7c23,	// (0x00084bc5) main_cset_slider_pane_g6

0xf964,	// (0x0008c906) main_cset_slider_pane_g_ParamLimits

0xd802,	// (0x0008a7a4) main_cset_slider_pane_t1_ParamLimits

0x7caf,	// (0x00084c51) main_cset_slider_pane_t2_ParamLimits

0x7cc9,	// (0x00084c6b) main_cset_slider_pane_t3_ParamLimits

0x7ce3,	// (0x00084c85) main_cset_slider_pane_t4_ParamLimits

0x7cfd,	// (0x00084c9f) main_cset_slider_pane_t5_ParamLimits

0x7d17,	// (0x00084cb9) main_cset_slider_pane_t6_ParamLimits

0x7d2c,	// (0x00084cce) main_cset_slider_pane_t7_ParamLimits

0x7d56,	// (0x00084cf8) main_cset_slider_pane_t8_ParamLimits

0x7d56,	// (0x00084cf8) main_cset_slider_pane_t8

0x7d7e,	// (0x00084d20) main_cset_slider_pane_t9_ParamLimits

0x7d7e,	// (0x00084d20) main_cset_slider_pane_t9

0x7da6,	// (0x00084d48) main_cset_slider_pane_t10_ParamLimits

0x7da6,	// (0x00084d48) main_cset_slider_pane_t10

0x7dce,	// (0x00084d70) main_cset_slider_pane_t11_ParamLimits

0x7dce,	// (0x00084d70) main_cset_slider_pane_t11

0x7df6,	// (0x00084d98) main_cset_slider_pane_t12_ParamLimits

0x7df6,	// (0x00084d98) main_cset_slider_pane_t12

0x7e13,	// (0x00084db5) main_cset_slider_pane_t13_ParamLimits

0x7e13,	// (0x00084db5) main_cset_slider_pane_t13

0xf989,	// (0x0008c92b) main_cset_slider_pane_t_ParamLimits

0xa190,	// (0x00087132) bg_popup_sub_pane_cp011

0xd91c,	// (0x0008a8be) main_cset_text_pane_g1

0xd924,	// (0x0008a8c6) main_cset_text_pane_t1

0xd932,	// (0x0008a8d4) main_cset_text_pane_t2

0xd940,	// (0x0008a8e2) main_cset_text_pane_t3

0xd94e,	// (0x0008a8f0) main_cset_text_pane_t4

0xd95c,	// (0x0008a8fe) main_cset_text_pane_t5

0xd96a,	// (0x0008a90c) main_cset_text_pane_t6

0xd978,	// (0x0008a91a) main_cset_text_pane_t7

0x0006,

0xfa20,	// (0x0008c9c2) main_cset_text_pane_t

0xa190,	// (0x00087132) main_cam4_burst_pane

0xa190,	// (0x00087132) main_cam5_pane

0x7ae1,	// (0x00084a83) bg_button_pane_cp019

0x7aea,	// (0x00084a8c) bg_button_pane_cp020

0xd7de,	// (0x0008a780) main_cset_slider_pane_g7_ParamLimits

0xd7de,	// (0x0008a780) main_cset_slider_pane_g7

0xd7ea,	// (0x0008a78c) main_cset_slider_pane_g8_ParamLimits

0xd7ea,	// (0x0008a78c) main_cset_slider_pane_g8

0x7c37,	// (0x00084bd9) main_cset_slider_pane_g9_ParamLimits

0x7c37,	// (0x00084bd9) main_cset_slider_pane_g9

0x7c43,	// (0x00084be5) main_cset_slider_pane_g10_ParamLimits

0x7c43,	// (0x00084be5) main_cset_slider_pane_g10

0x7c4f,	// (0x00084bf1) main_cset_slider_pane_g11_ParamLimits

0x7c4f,	// (0x00084bf1) main_cset_slider_pane_g11

0x7c5b,	// (0x00084bfd) main_cset_slider_pane_g12_ParamLimits

0x7c5b,	// (0x00084bfd) main_cset_slider_pane_g12

0x7c67,	// (0x00084c09) main_cset_slider_pane_g13_ParamLimits

0x7c67,	// (0x00084c09) main_cset_slider_pane_g13

0x7c73,	// (0x00084c15) main_cset_slider_pane_g14_ParamLimits

0x7c73,	// (0x00084c15) main_cset_slider_pane_g14

0x7c7f,	// (0x00084c21) main_cset_slider_pane_g15_ParamLimits

0x7c7f,	// (0x00084c21) main_cset_slider_pane_g15

0xd830,	// (0x0008a7d2) main_cset_slider_pane_t14_ParamLimits

0xd830,	// (0x0008a7d2) main_cset_slider_pane_t14

0xd869,	// (0x0008a80b) main_cset_slider_pane_t15_ParamLimits

0xd869,	// (0x0008a80b) main_cset_slider_pane_t15

0x819f,	// (0x00085141) aid_cam4_burst_size_cell_ParamLimits

0x819f,	// (0x00085141) aid_cam4_burst_size_cell

0x81bb,	// (0x0008515d) grid_cam4_burst_pane_ParamLimits

0x81bb,	// (0x0008515d) grid_cam4_burst_pane

0x81ed,	// (0x0008518f) linegrid_cam4_burst_pane_ParamLimits

0x81ed,	// (0x0008518f) linegrid_cam4_burst_pane

0x820b,	// (0x000851ad) scroll_pane_cp30_ParamLimits

0x820b,	// (0x000851ad) scroll_pane_cp30

0x8217,	// (0x000851b9) cell_cam4_burst_pane_ParamLimits

0x8217,	// (0x000851b9) cell_cam4_burst_pane

0xd986,	// (0x0008a928) linegrid_cam4_burst_pane_g1_ParamLimits

0xd986,	// (0x0008a928) linegrid_cam4_burst_pane_g1

0x8257,	// (0x000851f9) linegrid_cam4_burst_pane_g2_ParamLimits

0x8257,	// (0x000851f9) linegrid_cam4_burst_pane_g2

0xd993,	// (0x0008a935) linegrid_cam4_burst_pane_g3_ParamLimits

0xd993,	// (0x0008a935) linegrid_cam4_burst_pane_g3

0x0002,

0xfa2f,	// (0x0008c9d1) linegrid_cam4_burst_pane_g_ParamLimits

0xfa2f,	// (0x0008c9d1) linegrid_cam4_burst_pane_g

0x8268,	// (0x0008520a) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x8268,	// (0x0008520a) linegrid_cam4_burst_pane_g3_copy1

0xd9a0,	// (0x0008a942) linegrid_cam4_burst_pane_g4_ParamLimits

0xd9a0,	// (0x0008a942) linegrid_cam4_burst_pane_g4

0x8282,	// (0x00085224) linegrid_cam4_burst_pane_g5_ParamLimits

0x8282,	// (0x00085224) linegrid_cam4_burst_pane_g5

0x8293,	// (0x00085235) linegrid_cam4_burst_pane_g6_ParamLimits

0x8293,	// (0x00085235) linegrid_cam4_burst_pane_g6

0xd9ad,	// (0x0008a94f) linegrid_cam4_burst_pane_g7_ParamLimits

0xd9ad,	// (0x0008a94f) linegrid_cam4_burst_pane_g7

0x82aa,	// (0x0008524c) cell_cam4_burst_pane_g1

0xd9c6,	// (0x0008a968) main_cam5_pane_t1_ParamLimits

0xd9c6,	// (0x0008a968) main_cam5_pane_t1

0xd9d8,	// (0x0008a97a) main_cam5_pane_t2_ParamLimits

0xd9d8,	// (0x0008a97a) main_cam5_pane_t2

0xd9ea,	// (0x0008a98c) main_cam5_pane_t3_ParamLimits

0xd9ea,	// (0x0008a98c) main_cam5_pane_t3

0xd9fc,	// (0x0008a99e) main_cam5_pane_t4_ParamLimits

0xd9fc,	// (0x0008a99e) main_cam5_pane_t4

0xda14,	// (0x0008a9b6) main_cam5_pane_t5_ParamLimits

0xda14,	// (0x0008a9b6) main_cam5_pane_t5

0xda28,	// (0x0008a9ca) main_cam5_pane_t6_ParamLimits

0xda28,	// (0x0008a9ca) main_cam5_pane_t6

0xda3c,	// (0x0008a9de) main_cam5_pane_t7_ParamLimits

0xda3c,	// (0x0008a9de) main_cam5_pane_t7

0xda4e,	// (0x0008a9f0) main_cam5_pane_t8_ParamLimits

0xda4e,	// (0x0008a9f0) main_cam5_pane_t8

0xda6c,	// (0x0008aa0e) main_cam5_pane_t9_ParamLimits

0xda6c,	// (0x0008aa0e) main_cam5_pane_t9

0xda7e,	// (0x0008aa20) main_cam5_pane_t10_ParamLimits

0xda7e,	// (0x0008aa20) main_cam5_pane_t10

0xda90,	// (0x0008aa32) main_cam5_pane_t11_ParamLimits

0xda90,	// (0x0008aa32) main_cam5_pane_t11

0xdaa4,	// (0x0008aa46) main_cam5_pane_t12_ParamLimits

0xdaa4,	// (0x0008aa46) main_cam5_pane_t12

0xdabb,	// (0x0008aa5d) main_cam5_pane_t13_ParamLimits

0xdabb,	// (0x0008aa5d) main_cam5_pane_t13

0x000c,

0xfa3b,	// (0x0008c9dd) main_cam5_pane_t_ParamLimits

0xfa3b,	// (0x0008c9dd) main_cam5_pane_t

0x20f7,	// (0x0007f099) popup_scut_keymap_window_ParamLimits

0x20f7,	// (0x0007f099) popup_scut_keymap_window

0x82bd,	// (0x0008525f) aid_size_cell_brow_shortcut

0xb452,	// (0x000883f4) bg_popup_window_pane_cp010

0x82c9,	// (0x0008526b) grid_scut_pane

0x82d5,	// (0x00085277) cell_scut_pane_ParamLimits

0x82d5,	// (0x00085277) cell_scut_pane

0x82f0,	// (0x00085292) cell_scut_pane_g1

0xdade,	// (0x0008aa80) cell_scut_pane_t1

0xdaed,	// (0x0008aa8f) cell_scut_pane_t2

0x82f9,	// (0x0008529b) cell_scut_pane_t3

0x0002,

0xfa56,	// (0x0008c9f8) cell_scut_pane_t

0x6297,	// (0x00083239) main_mup3_pane_g8_ParamLimits

0x6297,	// (0x00083239) main_mup3_pane_g8

0x76de,	// (0x00084680) area_vitu2_query_pane_ParamLimits

0x76de,	// (0x00084680) area_vitu2_query_pane

0x1057,	// (0x0007dff9) input_focus_pane_cp08

0xdafc,	// (0x0008aa9e) area_vitu2_query_pane_g1

0x1158,	// (0x0007e0fa) area_vitu2_query_pane_g2

0x0001,

0xfa5d,	// (0x0008c9ff) area_vitu2_query_pane_g

0x8307,	// (0x000852a9) area_vitu2_query_pane_t1_ParamLimits

0x8307,	// (0x000852a9) area_vitu2_query_pane_t1

0x831b,	// (0x000852bd) area_vitu2_query_pane_t2_ParamLimits

0x831b,	// (0x000852bd) area_vitu2_query_pane_t2

0x1169,	// (0x0007e10b) area_vitu2_query_pane_t3_ParamLimits

0x1169,	// (0x0007e10b) area_vitu2_query_pane_t3

0x1191,	// (0x0007e133) area_vitu2_query_pane_t4_ParamLimits

0x1191,	// (0x0007e133) area_vitu2_query_pane_t4

0x11b9,	// (0x0007e15b) area_vitu2_query_pane_t5_ParamLimits

0x11b9,	// (0x0007e15b) area_vitu2_query_pane_t5

0x11e1,	// (0x0007e183) area_vitu2_query_pane_t6_ParamLimits

0x11e1,	// (0x0007e183) area_vitu2_query_pane_t6

0x0006,

0xfa62,	// (0x0008ca04) area_vitu2_query_pane_t_ParamLimits

0xfa62,	// (0x0008ca04) area_vitu2_query_pane_t

0x832f,	// (0x000852d1) bg_button_pane_cp018

0x833d,	// (0x000852df) bg_button_pane_cp021

0x122d,	// (0x0007e1cf) bg_button_pane_cp022

0x123e,	// (0x0007e1e0) input_focus_pane_cp09

0x4745,	// (0x000816e7) aid_size_touch_mv_arrow_left

0x4770,	// (0x00081712) aid_size_touch_mv_arrow_right

0x7c97,	// (0x00084c39) main_cset_slider_pane_g16_ParamLimits

0x7c97,	// (0x00084c39) main_cset_slider_pane_g16

0x7ca3,	// (0x00084c45) main_cset_slider_pane_g17_ParamLimits

0x7ca3,	// (0x00084c45) main_cset_slider_pane_g17

0x82aa,	// (0x0008524c) cell_cam4_burst_pane_g1_ParamLimits

0xa190,	// (0x00087132) compa_mode_pane

0x7e9d,	// (0x00084e3f) popup_vtel_slider_window_g3_ParamLimits

0x7e9d,	// (0x00084e3f) popup_vtel_slider_window_g3

0x7eb1,	// (0x00084e53) popup_vtel_slider_window_g4_ParamLimits

0x7eb1,	// (0x00084e53) popup_vtel_slider_window_g4

0x7ec5,	// (0x00084e67) popup_vtel_slider_window_t1_ParamLimits

0x7ec5,	// (0x00084e67) popup_vtel_slider_window_t1

0xa190,	// (0x00087132) main_cl_pane

0xc88c,	// (0x0008982e) popup_imed_adjust2_window_ParamLimits

0xc860,	// (0x00089802) bg_tb_trans_pane_cp05_ParamLimits

0xd196,	// (0x0008a138) popup_imed_adjust2_window_g1_ParamLimits

0xd1a5,	// (0x0008a147) popup_imed_adjust2_window_g2_ParamLimits

0xd1a5,	// (0x0008a147) popup_imed_adjust2_window_g2

0xd1b1,	// (0x0008a153) popup_imed_adjust2_window_g3_ParamLimits

0xd1b1,	// (0x0008a153) popup_imed_adjust2_window_g3

0x0002,

0xf7cd,	// (0x0008c76f) popup_imed_adjust2_window_g_ParamLimits

0xf7cd,	// (0x0008c76f) popup_imed_adjust2_window_g

0xd1bd,	// (0x0008a15f) popup_imed_adjust2_window_t1_ParamLimits

0xd1d5,	// (0x0008a177) slider_imed_adjust_pane_ParamLimits

0xd1e9,	// (0x0008a18b) slider_imed_adjust_pane_g1_ParamLimits

0xd1f9,	// (0x0008a19b) slider_imed_adjust_pane_g2_ParamLimits

0xd209,	// (0x0008a1ab) slider_imed_adjust_pane_g3_ParamLimits

0xd21a,	// (0x0008a1bc) slider_imed_adjust_pane_g4_ParamLimits

0xf7d4,	// (0x0008c776) slider_imed_adjust_pane_g_ParamLimits

0x741f,	// (0x000843c1) aid_touch_area_cam4_ParamLimits

0x741f,	// (0x000843c1) aid_touch_area_cam4

0x742f,	// (0x000843d1) battery_pane_cp01

0x74b6,	// (0x00084458) main_camera4_pane_g6_ParamLimits

0x74b6,	// (0x00084458) main_camera4_pane_g6

0x74d4,	// (0x00084476) main_camera4_pane_t2_ParamLimits

0x74d4,	// (0x00084476) main_camera4_pane_t2

0x0001,

0xf8d7,	// (0x0008c879) main_camera4_pane_t_ParamLimits

0xf8d7,	// (0x0008c879) main_camera4_pane_t

0x7557,	// (0x000844f9) aid_touch_area_vid4_ParamLimits

0x7557,	// (0x000844f9) aid_touch_area_vid4

0x7597,	// (0x00084539) main_video4_pane_g5_ParamLimits

0x7597,	// (0x00084539) main_video4_pane_g5

0x75bd,	// (0x0008455f) vid4_progress_pane_ParamLimits

0x75bd,	// (0x0008455f) vid4_progress_pane

0xd7f6,	// (0x0008a798) main_cset_slider_pane_g18_ParamLimits

0xd7f6,	// (0x0008a798) main_cset_slider_pane_g18

0xd9ba,	// (0x0008a95c) cell_cam4_burst_pane_g2_ParamLimits

0xd9ba,	// (0x0008a95c) cell_cam4_burst_pane_g2

0x0001,

0xfa36,	// (0x0008c9d8) cell_cam4_burst_pane_g_ParamLimits

0xfa36,	// (0x0008c9d8) cell_cam4_burst_pane_g

0x8349,	// (0x000852eb) bg_cl_pane_ParamLimits

0x8349,	// (0x000852eb) bg_cl_pane

0x8355,	// (0x000852f7) cl_header_pane_ParamLimits

0x8355,	// (0x000852f7) cl_header_pane

0x8361,	// (0x00085303) cl_listscroll_pane_ParamLimits

0x8361,	// (0x00085303) cl_listscroll_pane

0xdb08,	// (0x0008aaaa) bg_cl_pane_g1

0xdb10,	// (0x0008aab2) bg_cl_pane_g2

0xdb18,	// (0x0008aaba) bg_cl_pane_g3

0xdb20,	// (0x0008aac2) bg_cl_pane_g4

0xdb28,	// (0x0008aaca) bg_cl_pane_g5

0xdb30,	// (0x0008aad2) bg_cl_pane_g6

0xdb38,	// (0x0008aada) bg_cl_pane_g7

0xdb40,	// (0x0008aae2) bg_cl_pane_g8

0xdb48,	// (0x0008aaea) bg_cl_pane_g9

0x0008,

0xfa71,	// (0x0008ca13) bg_cl_pane_g

0x836d,	// (0x0008530f) aid_height_cl_leading_ParamLimits

0x836d,	// (0x0008530f) aid_height_cl_leading

0x8379,	// (0x0008531b) aid_height_cl_text_ParamLimits

0x8379,	// (0x0008531b) aid_height_cl_text

0x2138,	// (0x0007f0da) bg_cl_header_pane_ParamLimits

0x2138,	// (0x0007f0da) bg_cl_header_pane

0x8391,	// (0x00085333) cl_header_pane_g1_ParamLimits

0x8391,	// (0x00085333) cl_header_pane_g1

0x839e,	// (0x00085340) cl_header_pane_t1_ParamLimits

0x839e,	// (0x00085340) cl_header_pane_t1

0xdb50,	// (0x0008aaf2) cl_list_pane

0xd7c9,	// (0x0008a76b) hc_scroll_pane_cp01

0xad4b,	// (0x00087ced) bg_cl_header_pane_g1

0xd6ab,	// (0x0008a64d) bg_cl_header_pane_g2

0xad6b,	// (0x00087d0d) bg_cl_header_pane_g3

0xd6bb,	// (0x0008a65d) bg_cl_header_pane_g4

0xd6b3,	// (0x0008a655) bg_cl_header_pane_g5

0xd8d5,	// (0x0008a877) bg_cl_header_pane_g6

0xd6d3,	// (0x0008a675) bg_cl_header_pane_g7

0xd6db,	// (0x0008a67d) bg_cl_header_pane_g8

0xd6cb,	// (0x0008a66d) bg_cl_header_pane_g9

0x0008,

0xfa84,	// (0x0008ca26) bg_cl_header_pane_g

0x83b0,	// (0x00085352) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x83b0,	// (0x00085352) hc_cl_list_double_graphic_heading_pane

0x83c0,	// (0x00085362) hc_cl_list_single_graphic_pane_ParamLimits

0x83c0,	// (0x00085362) hc_cl_list_single_graphic_pane

0x83d2,	// (0x00085374) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x83d2,	// (0x00085374) hc_cl_list_single_graphic_pane_g1

0x83de,	// (0x00085380) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x83de,	// (0x00085380) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfa97,	// (0x0008ca39) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfa97,	// (0x0008ca39) hc_cl_list_single_graphic_pane_g

0x83f2,	// (0x00085394) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x83f2,	// (0x00085394) hc_cl_list_single_graphic_pane_t1

0x83d2,	// (0x00085374) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x83d2,	// (0x00085374) hc_cl_list_double_graphic_heading_pane_g1

0x8407,	// (0x000853a9) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x8407,	// (0x000853a9) hc_cl_list_double_graphic_heading_pane_g2

0x841b,	// (0x000853bd) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x841b,	// (0x000853bd) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfa9c,	// (0x0008ca3e) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfa9c,	// (0x0008ca3e) hc_cl_list_double_graphic_heading_pane_g

0x842f,	// (0x000853d1) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x842f,	// (0x000853d1) hc_cl_list_double_graphic_heading_pane_t1

0x8444,	// (0x000853e6) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x8444,	// (0x000853e6) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfaa3,	// (0x0008ca45) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfaa3,	// (0x0008ca45) hc_cl_list_double_graphic_heading_pane_t

0x8461,	// (0x00085403) vid4_progress_pane_g1

0x8473,	// (0x00085415) vid4_progress_pane_g2

0x4dfc,	// (0x00081d9e) vid4_progress_pane_g3

0x8485,	// (0x00085427) vid4_progress_pane_g4

0x0004,

0xfaa8,	// (0x0008ca4a) vid4_progress_pane_g

0x84a3,	// (0x00085445) vid4_progress_pane_t1

0x84b8,	// (0x0008545a) vid4_progress_pane_t2

0x0002,

0xfab3,	// (0x0008ca55) vid4_progress_pane_t

0x84e3,	// (0x00085485) wait_bar_pane_cp07

0xca9e,	// (0x00089a40) blid_firmament_pane_ParamLimits

0xcae1,	// (0x00089a83) popup_blid_sat_info2_window_g1

0xcb05,	// (0x00089aa7) popup_blid_sat_info2_window_t3

0xcb13,	// (0x00089ab5) popup_blid_sat_info2_window_t4

0xcb21,	// (0x00089ac3) popup_blid_sat_info2_window_t5

0xcb2f,	// (0x00089ad1) popup_blid_sat_info2_window_t6

0xcb3f,	// (0x00089ae1) popup_blid_sat_info2_window_t7

0xcb4d,	// (0x00089aef) popup_blid_sat_info2_window_t8

0xcb5b,	// (0x00089afd) popup_blid_sat_info2_window_t9

0xcb69,	// (0x00089b0b) popup_blid_sat_info2_window_t10

0xcc31,	// (0x00089bd3) aid_firma_cardinal_ParamLimits

0xcc45,	// (0x00089be7) blid_firmament_pane_t1_ParamLimits

0xcc5c,	// (0x00089bfe) blid_firmament_pane_t2_ParamLimits

0xcc73,	// (0x00089c15) blid_firmament_pane_t3_ParamLimits

0xcc8a,	// (0x00089c2c) blid_firmament_pane_t4_ParamLimits

0xf6d8,	// (0x0008c67a) blid_firmament_pane_t_ParamLimits

0xcca1,	// (0x00089c43) blid_sat_info_pane_ParamLimits

0xa8a9,	// (0x0008784b) main_cam_set_pane_ParamLimits

0x6a3b,	// (0x000839dd) aid_size_cell_colour_35_ParamLimits

0x6a55,	// (0x000839f7) aid_size_cell_colour_112_ParamLimits

0x6a6c,	// (0x00083a0e) aid_size_cell_effect_ParamLimits

0xa8a9,	// (0x0008784b) bg_tb_trans_pane_cp02_ParamLimits

0xb33b,	// (0x000882dd) heading_imed_pane_ParamLimits

0x6a86,	// (0x00083a28) listscroll_imed_pane_ParamLimits

0xbe82,	// (0x00088e24) popup_call2_audio_first_window_g5_ParamLimits

0xbe82,	// (0x00088e24) popup_call2_audio_first_window_g5

0x7198,	// (0x0008413a) aid_size_touch_image3_arrow_left_ParamLimits

0x7198,	// (0x0008413a) aid_size_touch_image3_arrow_left

0x71ae,	// (0x00084150) aid_size_touch_image3_arrow_right_ParamLimits

0x71ae,	// (0x00084150) aid_size_touch_image3_arrow_right

0x84ce,	// (0x00085470) vid4_progress_pane_t3

0x6d34,	// (0x00083cd6) main_hwr_training_symbol_option_pane_ParamLimits

0x6d34,	// (0x00083cd6) main_hwr_training_symbol_option_pane

0xd485,	// (0x0008a427) popup_hwr_training_preview_window_ParamLimits

0xd485,	// (0x0008a427) popup_hwr_training_preview_window

0x6d95,	// (0x00083d37) hwr_training_navi_pane_g5_ParamLimits

0x6d95,	// (0x00083d37) hwr_training_navi_pane_g5

0xd699,	// (0x0008a63b) popup_char_count_window

0x2138,	// (0x0007f0da) bg_popup_sub_pane_cp20_ParamLimits

0x7fc0,	// (0x00084f62) list_vitu2_match_list_pane_ParamLimits

0x7fcc,	// (0x00084f6e) vitu2_page_scroll_pane_ParamLimits

0x7fcc,	// (0x00084f6e) vitu2_page_scroll_pane

0xdb59,	// (0x0008aafb) list_single_hwr_training_symbol_option_pane_ParamLimits

0xdb59,	// (0x0008aafb) list_single_hwr_training_symbol_option_pane

0xdb6c,	// (0x0008ab0e) list_single_hwr_training_symbol_option_pane_g1

0xdb74,	// (0x0008ab16) list_single_hwr_training_symbol_option_pane_t1

0xdb82,	// (0x0008ab24) bg_button_pane_cp023

0xdb8b,	// (0x0008ab2d) bg_button_pane_cp024

0x8523,	// (0x000854c5) vitu2_page_scroll_pane_g1

0x852b,	// (0x000854cd) vitu2_page_scroll_pane_g2

0x0001,

0xfaba,	// (0x0008ca5c) vitu2_page_scroll_pane_g

0x8535,	// (0x000854d7) vitu2_page_scroll_pane_t1

0xc9fe,	// (0x000899a0) popup_char_count_window_g1

0xdbbe,	// (0x0008ab60) popup_char_count_window_g2

0xdbfc,	// (0x0008ab9e) popup_char_count_window_g3

0x0002,

0xfabf,	// (0x0008ca61) popup_char_count_window_g

0xdc05,	// (0x0008aba7) popup_char_count_window_t1

0xa190,	// (0x00087132) main_vded2_pane

0xd182,	// (0x0008a124) aid_size_cell_imed_line

0xd18c,	// (0x0008a12e) grid_imed_line_width_pane

0x7631,	// (0x000845d3) vid4_indicators_pane_g4

0xdc13,	// (0x0008abb5) cell_imed_line_width_pane_ParamLimits

0xdc13,	// (0x0008abb5) cell_imed_line_width_pane

0xdc29,	// (0x0008abcb) cell_imed_line_width_pane_g1

0xcfd5,	// (0x00089f77) cell_imed_line_width_pane_g2

0x0001,

0xfac6,	// (0x0008ca68) cell_imed_line_width_pane_g

0x8544,	// (0x000854e6) main_vded2_pane_g1_ParamLimits

0x8544,	// (0x000854e6) main_vded2_pane_g1

0x8553,	// (0x000854f5) main_vded2_pane_g2_ParamLimits

0x8553,	// (0x000854f5) main_vded2_pane_g2

0x0001,

0xfacb,	// (0x0008ca6d) main_vded2_pane_g_ParamLimits

0xfacb,	// (0x0008ca6d) main_vded2_pane_g

0x8561,	// (0x00085503) vded2_slider_pane_ParamLimits

0x8561,	// (0x00085503) vded2_slider_pane

0x856e,	// (0x00085510) aid_size_touch_vded2_end

0x8578,	// (0x0008551a) aid_size_touch_vded2_playhead

0xdc32,	// (0x0008abd4) aid_size_touch_vded2_start

0xdc3a,	// (0x0008abdc) vded2_slider_bg_pane

0xdc43,	// (0x0008abe5) vded2_slider_pane_g1

0xdc4c,	// (0x0008abee) vded2_slider_pane_g2

0x8580,	// (0x00085522) vded2_slider_pane_g3

0x0002,

0xfad0,	// (0x0008ca72) vded2_slider_pane_g

0xdbd3,	// (0x0008ab75) vded2_slider_bg_pane_g1

0xdbdc,	// (0x0008ab7e) vded2_slider_bg_pane_g2

0xdbe5,	// (0x0008ab87) vded2_slider_bg_pane_g3

0x0002,

0xf796,	// (0x0008c738) vded2_slider_bg_pane_g

0x4e14,	// (0x00081db6) aid_postcard_touch_down_pane_ParamLimits

0x4e14,	// (0x00081db6) aid_postcard_touch_down_pane

0x4e24,	// (0x00081dc6) aid_postcard_touch_up_pane_ParamLimits

0x4e24,	// (0x00081dc6) aid_postcard_touch_up_pane

0xa190,	// (0x00087132) main_blid2_pane

0xc86e,	// (0x00089810) popup_blid2_search_window

0xa190,	// (0x00087132) blid2_gps_pane

0xa190,	// (0x00087132) blid2_navig_pane

0xa190,	// (0x00087132) blid2_search_pane

0xa190,	// (0x00087132) blid2_tripm_pane

0x8589,	// (0x0008552b) blid2_search_pane_g1_ParamLimits

0x8589,	// (0x0008552b) blid2_search_pane_g1

0x8595,	// (0x00085537) blid2_search_pane_t1_ParamLimits

0x8595,	// (0x00085537) blid2_search_pane_t1

0x85a7,	// (0x00085549) aid_size_cell_blid2_gps_ParamLimits

0x85a7,	// (0x00085549) aid_size_cell_blid2_gps

0x85b7,	// (0x00085559) blid2_gps_pane_g1_ParamLimits

0x85b7,	// (0x00085559) blid2_gps_pane_g1

0x85c3,	// (0x00085565) grid_blid2_satellite_pane_ParamLimits

0x85c3,	// (0x00085565) grid_blid2_satellite_pane

0x85d1,	// (0x00085573) blid2_navig_pane_g1_ParamLimits

0x85d1,	// (0x00085573) blid2_navig_pane_g1

0x85dd,	// (0x0008557f) blid2_navig_pane_t1_ParamLimits

0x85dd,	// (0x0008557f) blid2_navig_pane_t1

0x85ef,	// (0x00085591) blid2_navig_pane_t2_ParamLimits

0x85ef,	// (0x00085591) blid2_navig_pane_t2

0x0001,

0xfad7,	// (0x0008ca79) blid2_navig_pane_t_ParamLimits

0xfad7,	// (0x0008ca79) blid2_navig_pane_t

0x8601,	// (0x000855a3) blid2_navig_ring_pane_ParamLimits

0x8601,	// (0x000855a3) blid2_navig_ring_pane

0x8611,	// (0x000855b3) blid2_speed_pane_ParamLimits

0x8611,	// (0x000855b3) blid2_speed_pane

0x861d,	// (0x000855bf) blid2_tripm_pane_g1_ParamLimits

0x861d,	// (0x000855bf) blid2_tripm_pane_g1

0x862d,	// (0x000855cf) blid2_tripm_pane_g2_ParamLimits

0x862d,	// (0x000855cf) blid2_tripm_pane_g2

0x8639,	// (0x000855db) blid2_tripm_pane_g3_ParamLimits

0x8639,	// (0x000855db) blid2_tripm_pane_g3

0x8645,	// (0x000855e7) blid2_tripm_pane_g4_ParamLimits

0x8645,	// (0x000855e7) blid2_tripm_pane_g4

0x8651,	// (0x000855f3) blid2_tripm_pane_g5_ParamLimits

0x8651,	// (0x000855f3) blid2_tripm_pane_g5

0x0005,

0xfadc,	// (0x0008ca7e) blid2_tripm_pane_g_ParamLimits

0xfadc,	// (0x0008ca7e) blid2_tripm_pane_g

0x866d,	// (0x0008560f) blid2_tripm_pane_t1_ParamLimits

0x866d,	// (0x0008560f) blid2_tripm_pane_t1

0x867f,	// (0x00085621) blid2_tripm_pane_t2_ParamLimits

0x867f,	// (0x00085621) blid2_tripm_pane_t2

0x8691,	// (0x00085633) blid2_tripm_pane_t3_ParamLimits

0x8691,	// (0x00085633) blid2_tripm_pane_t3

0x0003,

0xfae9,	// (0x0008ca8b) blid2_tripm_pane_t_ParamLimits

0xfae9,	// (0x0008ca8b) blid2_tripm_pane_t

0x86c3,	// (0x00085665) cell_blid2_satellite_pane_ParamLimits

0x86c3,	// (0x00085665) cell_blid2_satellite_pane

0x86e1,	// (0x00085683) cell_blid2_satellite_pane_g1

0xdc54,	// (0x0008abf6) cell_blid2_satellite_pane_t1

0xccb1,	// (0x00089c53) blid2_speed_pane_g1

0xdc62,	// (0x0008ac04) blid2_speed_pane_t1

0xdc70,	// (0x0008ac12) blid2_speed_pane_t2

0x0001,

0xfaf2,	// (0x0008ca94) blid2_speed_pane_t

0xccb1,	// (0x00089c53) blid2_navig_ring_pane_g1

0x86ea,	// (0x0008568c) blid2_navig_ring_pane_g2

0x86f2,	// (0x00085694) blid2_navig_ring_pane_g3

0x86fa,	// (0x0008569c) blid2_navig_ring_pane_g4

0x8702,	// (0x000856a4) blid2_navig_ring_pane_g5

0x0004,

0xfaf7,	// (0x0008ca99) blid2_navig_ring_pane_g

0xa190,	// (0x00087132) bg_popup_window_pane_cp011

0xdc7e,	// (0x0008ac20) popup_blid2_search_window_g1

0xdc86,	// (0x0008ac28) popup_blid2_search_window_t1

0xdc94,	// (0x0008ac36) popup_blid2_search_window_t2

0x0001,

0xfb02,	// (0x0008caa4) popup_blid2_search_window_t

0xac5a,	// (0x00087bfc) main_browser_pane_g1

0xa942,	// (0x000878e4) main_browser_pane_ParamLimits

0xa8a9,	// (0x0008784b) bg_button_pane_cp011_ParamLimits

0x78a8,	// (0x0008484a) cell_vitu2_function_pane_g1_ParamLimits

0xc860,	// (0x00089802) bg_popup_sub_pane_cp22_ParamLimits

0x1057,	// (0x0007dff9) input_focus_pane_cp08_ParamLimits

0x8148,	// (0x000850ea) popup_vitu2_query_button_pane_ParamLimits

0x8148,	// (0x000850ea) popup_vitu2_query_button_pane

0x106e,	// (0x0007e010) popup_vitu2_query_input_button_pane

0xd910,	// (0x0008a8b2) popup_vitu2_query_window_g1_ParamLimits

0x1078,	// (0x0007e01a) popup_vitu2_query_window_g2_ParamLimits

0xfa0a,	// (0x0008c9ac) popup_vitu2_query_window_g_ParamLimits

0xa190,	// (0x00087132) bg_button_pane_cp026

0x870a,	// (0x000856ac) popup_vitu2_query_input_button_pane_g1

0xa190,	// (0x00087132) bg_button_pane_cp025

0xdca2,	// (0x0008ac44) popup_vitu2_query_button_pane_t1

0x5fb5,	// (0x00082f57) main_mp3_pane_t6

0x5fc5,	// (0x00082f67) popup_slider_window_cp01

0x750c,	// (0x000844ae) cam4_battery_pane

0x75ea,	// (0x0008458c) cam4_battery_pane_cp02

0x8459,	// (0x000853fb) cam4_battery_pane_cp01

0x8459,	// (0x000853fb) cam4_battery_pane_cp03

0xccb1,	// (0x00089c53) cam4_battery_pane_g1

0xd5de,	// (0x0008a580) cam4_battery_pane_g2

0x0001,

0xfb07,	// (0x0008caa9) cam4_battery_pane_g

0xcb77,	// (0x00089b19) popup_blid_sat_info2_window_t11

0x4745,	// (0x000816e7) aid_size_touch_mv_arrow_left_ParamLimits

0x4770,	// (0x00081712) aid_size_touch_mv_arrow_right_ParamLimits

0xb3b2,	// (0x00088354) navi_pane_g1_ParamLimits

0x47af,	// (0x00081751) navi_pane_g2_ParamLimits

0x47dd,	// (0x0008177f) navi_pane_g3_ParamLimits

0xf3ea,	// (0x0008c38c) navi_pane_g_ParamLimits

0x4837,	// (0x000817d9) navi_pane_mv_t1_ParamLimits

0x6a92,	// (0x00083a34) grid_imed_effect_pane_ParamLimits

0x325b,	// (0x000801fd) aid_placing_vt_slider_lsc

0xaba5,	// (0x00087b47) aid_placing_vt_slider_prt

0xa8a9,	// (0x0008784b) bg_tb_trans_pane_cp01_ParamLimits

0xce01,	// (0x00089da3) popup_image_details_window_g1_ParamLimits

0xce14,	// (0x00089db6) popup_image_details_window_g2_ParamLimits

0xce29,	// (0x00089dcb) popup_image_details_window_g3_ParamLimits

0xce29,	// (0x00089dcb) popup_image_details_window_g3

0x0365,	// (0x0007d307) popup_image_details_window_g_ParamLimits

0xce3d,	// (0x00089ddf) popup_image_details_window_t1_ParamLimits

0xce4f,	// (0x00089df1) popup_image_details_window_t2_ParamLimits

0xce68,	// (0x00089e0a) popup_image_details_window_t3_ParamLimits

0xce7c,	// (0x00089e1e) popup_image_details_window_t4_ParamLimits

0xce97,	// (0x00089e39) popup_image_details_window_t5_ParamLimits

0x036c,	// (0x0007d30e) popup_image_details_window_t_ParamLimits

0x8385,	// (0x00085327) cl_header_name_pane_ParamLimits

0x8385,	// (0x00085327) cl_header_name_pane

0x8712,	// (0x000856b4) cl_header_name_pane_t1_ParamLimits

0x8712,	// (0x000856b4) cl_header_name_pane_t1

0x8729,	// (0x000856cb) cl_header_name_pane_t2_ParamLimits

0x8729,	// (0x000856cb) cl_header_name_pane_t2

0x8753,	// (0x000856f5) cl_header_name_pane_t3_ParamLimits

0x8753,	// (0x000856f5) cl_header_name_pane_t3

0x0002,

0xfb0c,	// (0x0008caae) cl_header_name_pane_t_ParamLimits

0xfb0c,	// (0x0008caae) cl_header_name_pane_t

0x4808,	// (0x000817aa) navi_pane_mv_g2_ParamLimits

0xd673,	// (0x0008a615) field_vitu2_entry_pane_g1_ParamLimits

0xd67f,	// (0x0008a621) field_vitu2_entry_pane_g2_ParamLimits

0xd68b,	// (0x0008a62d) field_vitu2_entry_pane_g3_ParamLimits

0xd68b,	// (0x0008a62d) field_vitu2_entry_pane_g3

0xf909,	// (0x0008c8ab) field_vitu2_entry_pane_g_ParamLimits

0x7833,	// (0x000847d5) cell_vitu2_itu_pane_g1_ParamLimits

0x7843,	// (0x000847e5) cell_vitu2_itu_pane_g2_ParamLimits

0x7843,	// (0x000847e5) cell_vitu2_itu_pane_g2

0x0001,

0xf915,	// (0x0008c8b7) cell_vitu2_itu_pane_g_ParamLimits

0xf915,	// (0x0008c8b7) cell_vitu2_itu_pane_g

0xa8a9,	// (0x0008784b) bg_vkb2_func_pane_cp05_ParamLimits

0xa8a9,	// (0x0008784b) bg_vkb2_func_pane_cp05

0xa8a9,	// (0x0008784b) bg_vkb2_func_pane_cp03

0xa8a9,	// (0x0008784b) bg_vkb2_func_pane_cp04

0xa8a9,	// (0x0008784b) bg_vkb2_func_pane_cp10_ParamLimits

0xa8a9,	// (0x0008784b) bg_vkb2_func_pane_cp10

0x122d,	// (0x0007e1cf) bg_vkb2_func_pane_cp08

0x832f,	// (0x000852d1) bg_vkb2_func_pane_cp06

0x833d,	// (0x000852df) bg_vkb2_func_pane_cp07

0xdb94,	// (0x0008ab36) bg_vkb2_func_pane_cp11_ParamLimits

0xdb94,	// (0x0008ab36) bg_vkb2_func_pane_cp11

0xdba9,	// (0x0008ab4b) bg_vkb2_func_pane_cp12_ParamLimits

0xdba9,	// (0x0008ab4b) bg_vkb2_func_pane_cp12

0xa190,	// (0x00087132) bg_vkb2_func_pane_cp09

0xd6ab,	// (0x0008a64d) bg_vkb2_func_pane_g1

0xad6b,	// (0x00087d0d) bg_vkb2_func_pane_g2

0xd6b3,	// (0x0008a655) bg_vkb2_func_pane_g3

0xd6bb,	// (0x0008a65d) bg_vkb2_func_pane_g4

0xd8d5,	// (0x0008a877) bg_vkb2_func_pane_g5

0xd6d3,	// (0x0008a675) bg_vkb2_func_pane_g6

0xd6db,	// (0x0008a67d) bg_vkb2_func_pane_g7

0xd6cb,	// (0x0008a66d) bg_vkb2_func_pane_g8

0xad4b,	// (0x00087ced) bg_vkb2_func_pane_g9

0x0008,

0xfb13,	// (0x0008cab5) bg_vkb2_func_pane_g

0x865f,	// (0x00085601) blid2_tripm_pane_g6_ParamLimits

0x865f,	// (0x00085601) blid2_tripm_pane_g6

0xd53d,	// (0x0008a4df) mp4_progress_pane_g1

0x86b7,	// (0x00085659) blid2_tripm_values_pane_ParamLimits

0x86b7,	// (0x00085659) blid2_tripm_values_pane

0x8778,	// (0x0008571a) blid2_tripm_values_pane_t1

0x8786,	// (0x00085728) blid2_tripm_values_pane_t2

0x8794,	// (0x00085736) blid2_tripm_values_pane_t3

0x87a2,	// (0x00085744) blid2_tripm_values_pane_t4

0x87b0,	// (0x00085752) blid2_tripm_values_pane_t5

0x87be,	// (0x00085760) blid2_tripm_values_pane_t6

0x87cc,	// (0x0008576e) blid2_tripm_values_pane_t7

0x87da,	// (0x0008577c) blid2_tripm_values_pane_t8

0x87e8,	// (0x0008578a) blid2_tripm_values_pane_t9

0x0008,

0xfb26,	// (0x0008cac8) blid2_tripm_values_pane_t

0x3299,	// (0x0008023b) call_video_pane_t1_ParamLimits

0x32b6,	// (0x00080258) call_video_pane_t2_ParamLimits

0xf273,	// (0x0008c215) call_video_pane_t_ParamLimits

0x0e16,	// (0x0007ddb8) msg_header_pane_g1_ParamLimits

0xb5c6,	// (0x00088568) msg_header_pane_g2_ParamLimits

0xb5c6,	// (0x00088568) msg_header_pane_g2

0x0001,

0xf48d,	// (0x0008c42f) msg_header_pane_g_ParamLimits

0xf48d,	// (0x0008c42f) msg_header_pane_g

0xa942,	// (0x000878e4) main_clock2_pane_ParamLimits

0x6821,	// (0x000837c3) grid_clock2_toolbar_pane_ParamLimits

0x6821,	// (0x000837c3) grid_clock2_toolbar_pane

0x6821,	// (0x000837c3) listscroll_clock2_pane_ParamLimits

0x6821,	// (0x000837c3) listscroll_clock2_pane

0x68c9,	// (0x0008386b) main_clock2_pane_t3_ParamLimits

0x68c9,	// (0x0008386b) main_clock2_pane_t3

0x68db,	// (0x0008387d) main_clock2_pane_t4_ParamLimits

0x68db,	// (0x0008387d) main_clock2_pane_t4

0xdcb0,	// (0x0008ac52) cell_clock2_toolbar_pane

0xdcb8,	// (0x0008ac5a) cell_clock2_toolbar_pane_cp01

0xdcb8,	// (0x0008ac5a) cell_clock2_toolbar_pane_cp02

0xdcc0,	// (0x0008ac62) cell_clock2_toolbar_pane_cp03

0xdcc8,	// (0x0008ac6a) list_clock2_pane

0xb2fe,	// (0x000882a0) scroll_pane_cp10

0xdcd0,	// (0x0008ac72) list_single_clock2_pane_ParamLimits

0xdcd0,	// (0x0008ac72) list_single_clock2_pane

0xb452,	// (0x000883f4) list_highlight_pane_cp08

0xdcdd,	// (0x0008ac7f) list_single_clock2_pane_t1

0xdceb,	// (0x0008ac8d) list_single_clock2_pane_t2

0x0001,

0xfb39,	// (0x0008cadb) list_single_clock2_pane_t

0xa190,	// (0x00087132) bg_button_pane_cp10

0xdcf9,	// (0x0008ac9b) cell_clock2_toolbar_pane_g1

0x4d76,	// (0x00081d18) aid_main_viewer_pane_g1_ParamLimits

0x4d76,	// (0x00081d18) aid_main_viewer_pane_g1

0x4d82,	// (0x00081d24) aid_main_viewer_pane_g2_ParamLimits

0x4d82,	// (0x00081d24) aid_main_viewer_pane_g2

0x4d8e,	// (0x00081d30) aid_main_viewer_pane_g3_ParamLimits

0x4d8e,	// (0x00081d30) aid_main_viewer_pane_g3

0x4d9f,	// (0x00081d41) aid_main_viewer_pane_g4_ParamLimits

0x4d9f,	// (0x00081d41) aid_main_viewer_pane_g4

0x0003,

0xf49e,	// (0x0008c440) aid_main_viewer_pane_g_ParamLimits

0xf49e,	// (0x0008c440) aid_main_viewer_pane_g

0x5529,	// (0x000824cb) main_calc_pane_ParamLimits

0x5536,	// (0x000824d8) main_dialer2_pane_ParamLimits

0xa190,	// (0x00087132) main_cam6_pane

0xa190,	// (0x00087132) main_vid6_pane

0x682d,	// (0x000837cf) listscroll_gen_pane_cp06_ParamLimits

0x682d,	// (0x000837cf) listscroll_gen_pane_cp06

0x68ed,	// (0x0008388f) main_clock2_pane_t5_ParamLimits

0x68ed,	// (0x0008388f) main_clock2_pane_t5

0x693c,	// (0x000838de) aid_call2_pane_cp10_ParamLimits

0x694e,	// (0x000838f0) aid_call_pane_cp10_ParamLimits

0xb387,	// (0x00088329) popup_clock_analogue_window_cp10_g1_ParamLimits

0xb387,	// (0x00088329) popup_clock_analogue_window_cp10_g2_ParamLimits

0x6960,	// (0x00083902) popup_clock_analogue_window_cp10_g3_ParamLimits

0x6960,	// (0x00083902) popup_clock_analogue_window_cp10_g4_ParamLimits

0xb387,	// (0x00088329) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf7c2,	// (0x0008c764) popup_clock_analogue_window_cp10_g_ParamLimits

0x6972,	// (0x00083914) popup_clock_analogue_window_cp10_t1_ParamLimits

0x7145,	// (0x000840e7) cell_dialer2_keypad_pane_g2_ParamLimits

0x7145,	// (0x000840e7) cell_dialer2_keypad_pane_g2

0x0001,

0xf8a8,	// (0x0008c84a) cell_dialer2_keypad_pane_g_ParamLimits

0xf8a8,	// (0x0008c84a) cell_dialer2_keypad_pane_g

0x7161,	// (0x00084103) cell_dialer2_keypad_pane_t1

0x7b85,	// (0x00084b27) main_cset_text2_pane_ParamLimits

0x7b85,	// (0x00084b27) main_cset_text2_pane

0xdafc,	// (0x0008aa9e) area_vitu2_query_pane_g1_ParamLimits

0x1158,	// (0x0007e0fa) area_vitu2_query_pane_g2_ParamLimits

0xfa5d,	// (0x0008c9ff) area_vitu2_query_pane_g_ParamLimits

0x1209,	// (0x0007e1ab) area_vitu2_query_pane_t7_ParamLimits

0x1209,	// (0x0007e1ab) area_vitu2_query_pane_t7

0x832f,	// (0x000852d1) bg_button_pane_cp018_ParamLimits

0x833d,	// (0x000852df) bg_button_pane_cp021_ParamLimits

0x122d,	// (0x0007e1cf) bg_button_pane_cp022_ParamLimits

0x122d,	// (0x0007e1cf) bg_vkb2_func_pane_cp08_ParamLimits

0x832f,	// (0x000852d1) bg_vkb2_func_pane_cp06_ParamLimits

0x833d,	// (0x000852df) bg_vkb2_func_pane_cp07_ParamLimits

0x123e,	// (0x0007e1e0) input_focus_pane_cp09_ParamLimits

0x87f6,	// (0x00085798) cam6_autofocus_pane_ParamLimits

0x87f6,	// (0x00085798) cam6_autofocus_pane

0x8818,	// (0x000857ba) cam6_image_uncrop_pane_ParamLimits

0x8818,	// (0x000857ba) cam6_image_uncrop_pane

0x8845,	// (0x000857e7) cam6_indi_pane_ParamLimits

0x8845,	// (0x000857e7) cam6_indi_pane

0x885f,	// (0x00085801) cam6_mode_pane_ParamLimits

0x885f,	// (0x00085801) cam6_mode_pane

0x8873,	// (0x00085815) cam6_timer_pane_ParamLimits

0x8873,	// (0x00085815) cam6_timer_pane

0x887f,	// (0x00085821) cam6_zoom_pane_ParamLimits

0x887f,	// (0x00085821) cam6_zoom_pane

0x889b,	// (0x0008583d) cam6_mode_pane_g1_ParamLimits

0x889b,	// (0x0008583d) cam6_mode_pane_g1

0x88a7,	// (0x00085849) cam6_mode_pane_g2_ParamLimits

0x88a7,	// (0x00085849) cam6_mode_pane_g2

0x88b3,	// (0x00085855) cam6_mode_pane_g3_ParamLimits

0x88b3,	// (0x00085855) cam6_mode_pane_g3

0x88bf,	// (0x00085861) cam6_mode_pane_g4_ParamLimits

0x88bf,	// (0x00085861) cam6_mode_pane_g4

0x0003,

0xfb3e,	// (0x0008cae0) cam6_mode_pane_g_ParamLimits

0xfb3e,	// (0x0008cae0) cam6_mode_pane_g

0xdbee,	// (0x0008ab90) bg_tb_trans_pane_cp08_ParamLimits

0xdbee,	// (0x0008ab90) bg_tb_trans_pane_cp08

0xdd01,	// (0x0008aca3) cam6_battery_pane_ParamLimits

0xdd01,	// (0x0008aca3) cam6_battery_pane

0xdd17,	// (0x0008acb9) cam6_indi_pane_g1_ParamLimits

0xdd17,	// (0x0008acb9) cam6_indi_pane_g1

0xdd29,	// (0x0008accb) cam6_indi_pane_g2_ParamLimits

0xdd29,	// (0x0008accb) cam6_indi_pane_g2

0xdd3b,	// (0x0008acdd) cam6_indi_pane_g3_ParamLimits

0xdd3b,	// (0x0008acdd) cam6_indi_pane_g3

0x0002,

0xfb47,	// (0x0008cae9) cam6_indi_pane_g_ParamLimits

0xfb47,	// (0x0008cae9) cam6_indi_pane_g

0xdd4d,	// (0x0008acef) cam6_indi_pane_t1_ParamLimits

0xdd4d,	// (0x0008acef) cam6_indi_pane_t1

0x7666,	// (0x00084608) cam6_autofocus_pane_g1

0x766e,	// (0x00084610) cam6_autofocus_pane_g2

0x7676,	// (0x00084618) cam6_autofocus_pane_g3

0x767e,	// (0x00084620) cam6_autofocus_pane_g4

0x0003,

0xfb4e,	// (0x0008caf0) cam6_autofocus_pane_g

0xdd73,	// (0x0008ad15) cam6_timer_pane_g1

0xdd7b,	// (0x0008ad1d) cam6_timer_pane_t1

0xdd89,	// (0x0008ad2b) cam6_zoom_cont_pane

0xdd91,	// (0x0008ad33) cam6_zoom_pane_g1

0xdd99,	// (0x0008ad3b) cam6_zoom_pane_g2

0x88cb,	// (0x0008586d) cam6_zoom_pane_g3

0x0002,

0xfb57,	// (0x0008caf9) cam6_zoom_pane_g

0xccb1,	// (0x00089c53) cam6_battery_pane_g1

0xccb1,	// (0x00089c53) cam6_battery_pane_g2

0x0001,

0xf6e1,	// (0x0008c683) cam6_battery_pane_g

0xdda1,	// (0x0008ad43) cam6_zoom_cont_pane_g1

0xddaa,	// (0x0008ad4c) cam6_zoom_cont_pane_g2

0xddb3,	// (0x0008ad55) cam6_zoom_cont_pane_g3

0x0002,

0xfb5e,	// (0x0008cb00) cam6_zoom_cont_pane_g

0x88e8,	// (0x0008588a) cam6_mode_pane_cp_ParamLimits

0x88e8,	// (0x0008588a) cam6_mode_pane_cp

0x887f,	// (0x00085821) cam6_zoom_pane_cp_ParamLimits

0x887f,	// (0x00085821) cam6_zoom_pane_cp

0x88fc,	// (0x0008589e) vid6_image_uncrop_cif_pane_ParamLimits

0x88fc,	// (0x0008589e) vid6_image_uncrop_cif_pane

0x8928,	// (0x000858ca) vid6_image_uncrop_nhd_pane_ParamLimits

0x8928,	// (0x000858ca) vid6_image_uncrop_nhd_pane

0x8818,	// (0x000857ba) vid6_image_uncrop_vga_pane_ParamLimits

0x8818,	// (0x000857ba) vid6_image_uncrop_vga_pane

0x8947,	// (0x000858e9) vid6_image_uncrop_wvga_pane_ParamLimits

0x8947,	// (0x000858e9) vid6_image_uncrop_wvga_pane

0x8966,	// (0x00085908) vid6_indi_pane_ParamLimits

0x8966,	// (0x00085908) vid6_indi_pane

0xdbee,	// (0x0008ab90) bg_tb_trans_pane_cp09_ParamLimits

0xdbee,	// (0x0008ab90) bg_tb_trans_pane_cp09

0xddcb,	// (0x0008ad6d) cam6_battery_pane_cp_ParamLimits

0xddcb,	// (0x0008ad6d) cam6_battery_pane_cp

0xddd7,	// (0x0008ad79) vid6_indi_pane_g1_ParamLimits

0xddd7,	// (0x0008ad79) vid6_indi_pane_g1

0xdde9,	// (0x0008ad8b) vid6_indi_pane_g2_ParamLimits

0xdde9,	// (0x0008ad8b) vid6_indi_pane_g2

0xddfb,	// (0x0008ad9d) vid6_indi_pane_g3_ParamLimits

0xddfb,	// (0x0008ad9d) vid6_indi_pane_g3

0xde12,	// (0x0008adb4) vid6_indi_pane_g4_ParamLimits

0xde12,	// (0x0008adb4) vid6_indi_pane_g4

0xde29,	// (0x0008adcb) vid6_indi_pane_g5_ParamLimits

0xde29,	// (0x0008adcb) vid6_indi_pane_g5

0x0004,

0xfb65,	// (0x0008cb07) vid6_indi_pane_g_ParamLimits

0xfb65,	// (0x0008cb07) vid6_indi_pane_g

0xde43,	// (0x0008ade5) vid6_indi_pane_t1_ParamLimits

0xde43,	// (0x0008ade5) vid6_indi_pane_t1

0xde59,	// (0x0008adfb) vid6_indi_pane_t2_ParamLimits

0xde59,	// (0x0008adfb) vid6_indi_pane_t2

0xde81,	// (0x0008ae23) vid6_indi_pane_t3_ParamLimits

0xde81,	// (0x0008ae23) vid6_indi_pane_t3

0xdea9,	// (0x0008ae4b) vid6_indi_pane_t4_ParamLimits

0xdea9,	// (0x0008ae4b) vid6_indi_pane_t4

0x0003,

0xfb70,	// (0x0008cb12) vid6_indi_pane_t_ParamLimits

0xfb70,	// (0x0008cb12) vid6_indi_pane_t

0xdee8,	// (0x0008ae8a) wait_bar_pane_cp08

0x898b,	// (0x0008592d) main_cset_text2_pane_t1_ParamLimits

0x898b,	// (0x0008592d) main_cset_text2_pane_t1

0x88d3,	// (0x00085875) listscroll_gen_pane_cp06_t1_ParamLimits

0x88d3,	// (0x00085875) listscroll_gen_pane_cp06_t1

0xa190,	// (0x00087132) main_cam6_set_pane

0xcee1,	// (0x00089e83) bg_tb_trans_pane_cp06_ParamLimits

0x7514,	// (0x000844b6) cam4_indicators_pane_g1_ParamLimits

0x7525,	// (0x000844c7) cam4_indicators_pane_g2_ParamLimits

0xf8e5,	// (0x0008c887) cam4_indicators_pane_g_ParamLimits

0x753d,	// (0x000844df) cam4_indicators_pane_t1_ParamLimits

0xa8a9,	// (0x0008784b) bg_tb_trans_pane_cp07_ParamLimits

0x75f4,	// (0x00084596) vid4_indicators_pane_g1_ParamLimits

0x760a,	// (0x000845ac) vid4_indicators_pane_g2_ParamLimits

0x761e,	// (0x000845c0) vid4_indicators_pane_g3_ParamLimits

0x7631,	// (0x000845d3) vid4_indicators_pane_g4_ParamLimits

0xf8f7,	// (0x0008c899) vid4_indicators_pane_g_ParamLimits

0x764f,	// (0x000845f1) vid4_indicators_pane_t1_ParamLimits

0x8461,	// (0x00085403) vid4_progress_pane_g1_ParamLimits

0x8473,	// (0x00085415) vid4_progress_pane_g2_ParamLimits

0x4dfc,	// (0x00081d9e) vid4_progress_pane_g3_ParamLimits

0x8485,	// (0x00085427) vid4_progress_pane_g4_ParamLimits

0xfaa8,	// (0x0008ca4a) vid4_progress_pane_g_ParamLimits

0x84a3,	// (0x00085445) vid4_progress_pane_t1_ParamLimits

0x84b8,	// (0x0008545a) vid4_progress_pane_t2_ParamLimits

0x84ce,	// (0x00085470) vid4_progress_pane_t3_ParamLimits

0xfab3,	// (0x0008ca55) vid4_progress_pane_t_ParamLimits

0x84e3,	// (0x00085485) wait_bar_pane_cp07_ParamLimits

0x89b2,	// (0x00085954) main_cam6_set_pane_g2_ParamLimits

0x89b2,	// (0x00085954) main_cam6_set_pane_g2

0x89be,	// (0x00085960) main_cset6_listscroll_pane_ParamLimits

0x89be,	// (0x00085960) main_cset6_listscroll_pane

0x89eb,	// (0x0008598d) main_cset6_slider_pane_ParamLimits

0x89eb,	// (0x0008598d) main_cset6_slider_pane

0x89f7,	// (0x00085999) main_cset6_text2_pane_ParamLimits

0x89f7,	// (0x00085999) main_cset6_text2_pane

0xdef7,	// (0x0008ae99) main_cset6_text_pane

0xdeff,	// (0x0008aea1) main_cset_list_pane_copy1_ParamLimits

0xdeff,	// (0x0008aea1) main_cset_list_pane_copy1

0xdf0f,	// (0x0008aeb1) scroll_pane_cp028_copy1

0x8a0a,	// (0x000859ac) cset_list_set_pane_copy1

0x8a1a,	// (0x000859bc) aid_position_infowindow_above_copy1

0x8a22,	// (0x000859c4) aid_position_infowindow_below_copy1

0x8a2a,	// (0x000859cc) cset_list_set_pane_g1_copy1

0x127d,	// (0x0007e21f) cset_list_set_pane_g3_copy1_ParamLimits

0x127d,	// (0x0007e21f) cset_list_set_pane_g3_copy1

0x128c,	// (0x0007e22e) cset_list_set_pane_t1_copy1_ParamLimits

0x128c,	// (0x0007e22e) cset_list_set_pane_t1_copy1

0xa8a9,	// (0x0008784b) list_highlight_pane_cp021_copy1_ParamLimits

0xa8a9,	// (0x0008784b) list_highlight_pane_cp021_copy1

0xdf18,	// (0x0008aeba) cset6_slider_pane_ParamLimits

0xdf18,	// (0x0008aeba) cset6_slider_pane

0xdf44,	// (0x0008aee6) main_cset6_slider_pane_g1_ParamLimits

0xdf44,	// (0x0008aee6) main_cset6_slider_pane_g1

0x8a32,	// (0x000859d4) main_cset6_slider_pane_g2_ParamLimits

0x8a32,	// (0x000859d4) main_cset6_slider_pane_g2

0xdf6c,	// (0x0008af0e) main_cset6_slider_pane_g3_ParamLimits

0xdf6c,	// (0x0008af0e) main_cset6_slider_pane_g3

0x8a5a,	// (0x000859fc) main_cset6_slider_pane_g4_ParamLimits

0x8a5a,	// (0x000859fc) main_cset6_slider_pane_g4

0x8a66,	// (0x00085a08) main_cset6_slider_pane_g5_ParamLimits

0x8a66,	// (0x00085a08) main_cset6_slider_pane_g5

0xd7de,	// (0x0008a780) main_cset6_slider_pane_g7_ParamLimits

0xd7de,	// (0x0008a780) main_cset6_slider_pane_g7

0xd7ea,	// (0x0008a78c) main_cset6_slider_pane_g8_ParamLimits

0xd7ea,	// (0x0008a78c) main_cset6_slider_pane_g8

0x8a72,	// (0x00085a14) main_cset6_slider_pane_g9_ParamLimits

0x8a72,	// (0x00085a14) main_cset6_slider_pane_g9

0x8a7e,	// (0x00085a20) main_cset6_slider_pane_g10_ParamLimits

0x8a7e,	// (0x00085a20) main_cset6_slider_pane_g10

0x8a8a,	// (0x00085a2c) main_cset6_slider_pane_g11_ParamLimits

0x8a8a,	// (0x00085a2c) main_cset6_slider_pane_g11

0x8a96,	// (0x00085a38) main_cset6_slider_pane_g12_ParamLimits

0x8a96,	// (0x00085a38) main_cset6_slider_pane_g12

0x8aa2,	// (0x00085a44) main_cset6_slider_pane_g13_ParamLimits

0x8aa2,	// (0x00085a44) main_cset6_slider_pane_g13

0x8aae,	// (0x00085a50) main_cset6_slider_pane_g14_ParamLimits

0x8aae,	// (0x00085a50) main_cset6_slider_pane_g14

0x8aba,	// (0x00085a5c) main_cset6_slider_pane_g15_ParamLimits

0x8aba,	// (0x00085a5c) main_cset6_slider_pane_g15

0x8ad2,	// (0x00085a74) main_cset6_slider_pane_g16_ParamLimits

0x8ad2,	// (0x00085a74) main_cset6_slider_pane_g16

0x8ade,	// (0x00085a80) main_cset6_slider_pane_g17_ParamLimits

0x8ade,	// (0x00085a80) main_cset6_slider_pane_g17

0x0011,

0xfb79,	// (0x0008cb1b) main_cset6_slider_pane_g_ParamLimits

0xfb79,	// (0x0008cb1b) main_cset6_slider_pane_g

0xdf78,	// (0x0008af1a) main_cset6_slider_pane_t1_ParamLimits

0xdf78,	// (0x0008af1a) main_cset6_slider_pane_t1

0x8b02,	// (0x00085aa4) main_cset6_slider_pane_t2_ParamLimits

0x8b02,	// (0x00085aa4) main_cset6_slider_pane_t2

0x8b2d,	// (0x00085acf) main_cset6_slider_pane_t3_ParamLimits

0x8b2d,	// (0x00085acf) main_cset6_slider_pane_t3

0x8b58,	// (0x00085afa) main_cset6_slider_pane_t4_ParamLimits

0x8b58,	// (0x00085afa) main_cset6_slider_pane_t4

0x8b83,	// (0x00085b25) main_cset6_slider_pane_t5_ParamLimits

0x8b83,	// (0x00085b25) main_cset6_slider_pane_t5

0xdfb9,	// (0x0008af5b) main_cset6_slider_pane_t7_ParamLimits

0xdfb9,	// (0x0008af5b) main_cset6_slider_pane_t7

0x8bae,	// (0x00085b50) main_cset6_slider_pane_t8_ParamLimits

0x8bae,	// (0x00085b50) main_cset6_slider_pane_t8

0x8bd2,	// (0x00085b74) main_cset6_slider_pane_t9_ParamLimits

0x8bd2,	// (0x00085b74) main_cset6_slider_pane_t9

0x8bf6,	// (0x00085b98) main_cset6_slider_pane_t10_ParamLimits

0x8bf6,	// (0x00085b98) main_cset6_slider_pane_t10

0x8c1a,	// (0x00085bbc) main_cset6_slider_pane_t11_ParamLimits

0x8c1a,	// (0x00085bbc) main_cset6_slider_pane_t11

0xdfef,	// (0x0008af91) main_cset6_slider_pane_t14_ParamLimits

0xdfef,	// (0x0008af91) main_cset6_slider_pane_t14

0xe028,	// (0x0008afca) main_cset6_slider_pane_t15_ParamLimits

0xe028,	// (0x0008afca) main_cset6_slider_pane_t15

0x000b,

0xfb9e,	// (0x0008cb40) main_cset6_slider_pane_t_ParamLimits

0xfb9e,	// (0x0008cb40) main_cset6_slider_pane_t

0xdecd,	// (0x0008ae6f) cset_slider_pane_g1_copy1

0xded6,	// (0x0008ae78) cset_slider_pane_g2_copy1

0xdedf,	// (0x0008ae81) cset_slider_pane_g3_copy1

0xa190,	// (0x00087132) bg_popup_sub_pane_cp011_copy1

0xe061,	// (0x0008b003) main_cset_text_pane_g1_copy1

0xd924,	// (0x0008a8c6) main_cset_text_pane_t1_copy1

0xd932,	// (0x0008a8d4) main_cset_text_pane_t2_copy1

0xd940,	// (0x0008a8e2) main_cset_text_pane_t3_copy1

0xd94e,	// (0x0008a8f0) main_cset_text_pane_t4_copy1

0xd95c,	// (0x0008a8fe) main_cset_text_pane_t5_copy1

0xe069,	// (0x0008b00b) main_cset_text_pane_t6_copy1

0xe077,	// (0x0008b019) main_cset_text_pane_t7_copy1

0x8c59,	// (0x00085bfb) main_cset_text2_pane_t1_copy1

0xa8a9,	// (0x0008784b) main_ncimui_pane

0x557b,	// (0x0008251d) popup_query_ncimui_window_ParamLimits

0x557b,	// (0x0008251d) popup_query_ncimui_window

0x60f3,	// (0x00083095) field_cale_ev2_pane_g4_ParamLimits

0x60f3,	// (0x00083095) field_cale_ev2_pane_g4

0x6e5b,	// (0x00083dfd) cell_video_dialer_keypad_pane_g2_ParamLimits

0x6e5b,	// (0x00083dfd) cell_video_dialer_keypad_pane_g2

0x0001,

0xf883,	// (0x0008c825) cell_video_dialer_keypad_pane_g_ParamLimits

0xf883,	// (0x0008c825) cell_video_dialer_keypad_pane_g

0x6e73,	// (0x00083e15) cell_video_dialer_keypad_pane_t1

0xa190,	// (0x00087132) bg_popup_window_pane_cp012

0xb1ea,	// (0x0008818c) heading_pane_cp06

0xe0a3,	// (0x0008b045) ncim_query_content_pane

0xa190,	// (0x00087132) bg_popup_heading_pane_cp01

0xe0ab,	// (0x0008b04d) ncim_heading_pane_t1

0xe0b9,	// (0x0008b05b) ncim_indicator_popup_pane

0xe0cb,	// (0x0008b06d) ncim_query_button_pane

0xe0e1,	// (0x0008b083) ncim_query_content_pane_t1

0xe0f3,	// (0x0008b095) ncim_query_content_pane_t2

0x0005,

0xfbe2,	// (0x0008cb84) ncim_query_content_pane_t

0xe12d,	// (0x0008b0cf) ncim_query_list_pane

0xe13f,	// (0x0008b0e1) ncim_query_popup_pane

0xe0b9,	// (0x0008b05b) ncim_indicator_popup_pane_ParamLimits

0x8db5,	// (0x00085d57) ncim_query_content_pane_g1_ParamLimits

0x8db5,	// (0x00085d57) ncim_query_content_pane_g1

0xe0e1,	// (0x0008b083) ncim_query_content_pane_t1_ParamLimits

0xe0f3,	// (0x0008b095) ncim_query_content_pane_t2_ParamLimits

0x8dc1,	// (0x00085d63) ncim_query_content_pane_t3_ParamLimits

0x8dc1,	// (0x00085d63) ncim_query_content_pane_t3

0x8dde,	// (0x00085d80) ncim_query_content_pane_t4_ParamLimits

0x8dde,	// (0x00085d80) ncim_query_content_pane_t4

0x8dfb,	// (0x00085d9d) ncim_query_content_pane_t5_ParamLimits

0x8dfb,	// (0x00085d9d) ncim_query_content_pane_t5

0xe105,	// (0x0008b0a7) ncim_query_content_pane_t6_ParamLimits

0xe105,	// (0x0008b0a7) ncim_query_content_pane_t6

0xfbe2,	// (0x0008cb84) ncim_query_content_pane_t_ParamLimits

0xe12d,	// (0x0008b0cf) ncim_query_list_pane_ParamLimits

0xe13f,	// (0x0008b0e1) ncim_query_popup_pane_ParamLimits

0xe153,	// (0x0008b0f5) wait_bar_pane_cp04

0xa190,	// (0x00087132) input_focus_pane_cp011

0xe15b,	// (0x0008b0fd) ncim_query_popup_pane_t1

0xe169,	// (0x0008b10b) ncim_list_query_list_pane_ParamLimits

0xe169,	// (0x0008b10b) ncim_list_query_list_pane

0xa190,	// (0x00087132) bg_button_pane_cp027

0xe17c,	// (0x0008b11e) ncim_query_button_pane_g1

0xa190,	// (0x00087132) list_highlight_pane_cp012

0xe186,	// (0x0008b128) ncim_list_query_list_pane_g1

0xe18e,	// (0x0008b130) ncim_list_query_list_pane_t1

0x7531,	// (0x000844d3) cam4_indicators_pane_g3_ParamLimits

0x7531,	// (0x000844d3) cam4_indicators_pane_g3

0x763d,	// (0x000845df) vid4_indicators_pane_g5_ParamLimits

0x763d,	// (0x000845df) vid4_indicators_pane_g5

0x8494,	// (0x00085436) vid4_progress_pane_g5_ParamLimits

0x8494,	// (0x00085436) vid4_progress_pane_g5

0x8c8b,	// (0x00085c2d) main_ncimui_pane_g1

0x8cf7,	// (0x00085c99) ncimui_group_query_pane_ParamLimits

0x8cf7,	// (0x00085c99) ncimui_group_query_pane

0x8d51,	// (0x00085cf3) ncimui_list_pane_ParamLimits

0x8d51,	// (0x00085cf3) ncimui_list_pane

0x8d78,	// (0x00085d1a) ncimui_text_pane_ParamLimits

0x8d78,	// (0x00085d1a) ncimui_text_pane

0x8e18,	// (0x00085dba) ncimui_text_pane_t1_ParamLimits

0x8e18,	// (0x00085dba) ncimui_text_pane_t1

0xe19c,	// (0x0008b13e) ncimui_list_single_graphic_pane_ParamLimits

0xe19c,	// (0x0008b13e) ncimui_list_single_graphic_pane

0x8e37,	// (0x00085dd9) ncimui_query_pane_ParamLimits

0x8e37,	// (0x00085dd9) ncimui_query_pane

0xa190,	// (0x00087132) list_highlight_pane_cp013

0xe1c0,	// (0x0008b162) ncim_list_query_list_pane_t1_copy1

0xe186,	// (0x0008b128) ncim_list_single_graphic_pane_g1

0xe1ce,	// (0x0008b170) ncim_query_button_pane_cp01

0xe1da,	// (0x0008b17c) ncim_query_entry_pane_ParamLimits

0xe1da,	// (0x0008b17c) ncim_query_entry_pane

0xe1ed,	// (0x0008b18f) ncimui_query_pane_g1

0xe1f9,	// (0x0008b19b) ncimui_query_pane_t1_ParamLimits

0xe1f9,	// (0x0008b19b) ncimui_query_pane_t1

0xa8a9,	// (0x0008784b) input_focus_pane_cp012

0xe212,	// (0x0008b1b4) ncim_query_entry_pane_t1

0xa942,	// (0x000878e4) main_im_pane_ParamLimits

0xa8a9,	// (0x0008784b) main_mobtv_pane_ParamLimits

0xa8a9,	// (0x0008784b) main_mobtv_pane

0x8aea,	// (0x00085a8c) main_cset6_slider_pane_g18_ParamLimits

0x8aea,	// (0x00085a8c) main_cset6_slider_pane_g18

0x8af6,	// (0x00085a98) main_cset6_slider_pane_g19_ParamLimits

0x8af6,	// (0x00085a98) main_cset6_slider_pane_g19

0xd68b,	// (0x0008a62d) bg_main_mobtv_pane_ParamLimits

0xd68b,	// (0x0008a62d) bg_main_mobtv_pane

0x8e4a,	// (0x00085dec) main_mobtv_info_pane

0x8e55,	// (0x00085df7) main_mobtv_loading_pane_ParamLimits

0x8e55,	// (0x00085df7) main_mobtv_loading_pane

0xe224,	// (0x0008b1c6) main_mobtv_pg_channel_list_pane

0xe22e,	// (0x0008b1d0) main_mobtv_pg_hdr_pane

0x8e62,	// (0x00085e04) main_mobtv_programe_curr_pane_ParamLimits

0x8e62,	// (0x00085e04) main_mobtv_programe_curr_pane

0x8e6f,	// (0x00085e11) main_mobtv_programe_next_pane_ParamLimits

0x8e6f,	// (0x00085e11) main_mobtv_programe_next_pane

0xe237,	// (0x0008b1d9) popup_mobtv_noti_window

0xccb1,	// (0x00089c53) main_tv_pg_hdr_pane_g1

0xe241,	// (0x0008b1e3) main_tv_pg_hdr_pane_g2

0xe249,	// (0x0008b1eb) main_tv_pg_hdr_pane_g3

0xe251,	// (0x0008b1f3) main_tv_pg_hdr_pane_g4

0xe259,	// (0x0008b1fb) main_tv_pg_hdr_pane_g5

0xe263,	// (0x0008b205) main_tv_pg_hdr_pane_g6

0xe26d,	// (0x0008b20f) main_tv_pg_hdr_pane_g7

0xe277,	// (0x0008b219) main_tv_pg_hdr_pane_g8

0xe281,	// (0x0008b223) main_tv_pg_hdr_pane_g9

0xe28b,	// (0x0008b22d) main_tv_pg_hdr_pane_g10

0xe295,	// (0x0008b237) main_tv_pg_hdr_pane_g11

0x000a,

0xfbef,	// (0x0008cb91) main_tv_pg_hdr_pane_g

0xe29f,	// (0x0008b241) main_tv_pg_hdr_pane_t1

0xe2ad,	// (0x0008b24f) main_tv_pg_hdr_pane_t2

0xe2bb,	// (0x0008b25d) main_tv_pg_hdr_pane_t3

0xe2cb,	// (0x0008b26d) main_tv_pg_hdr_pane_t4

0xe2db,	// (0x0008b27d) main_tv_pg_hdr_pane_t5

0x0004,

0xfc06,	// (0x0008cba8) main_tv_pg_hdr_pane_t

0xe2eb,	// (0x0008b28d) single_mobtv_pg_channel_pane_ParamLimits

0xe2eb,	// (0x0008b28d) single_mobtv_pg_channel_pane

0xe2fd,	// (0x0008b29f) single_mobtv_pg_channel_table_pane

0xe306,	// (0x0008b2a8) single_mobtv_pg_channel_thumb_pane

0xe30f,	// (0x0008b2b1) single_tv_pg_channel_pane_g1

0xe318,	// (0x0008b2ba) single_tv_pg_channel_pane_g2

0x0001,

0xfc11,	// (0x0008cbb3) single_tv_pg_channel_pane_g

0xcee1,	// (0x00089e83) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xcee1,	// (0x00089e83) bg_single_mobtv_pg_channel_thumb_pane

0xe321,	// (0x0008b2c3) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xe321,	// (0x0008b2c3) single_mobtv_pg_channel_thumb_pane_g1

0xe32f,	// (0x0008b2d1) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xe32f,	// (0x0008b2d1) single_mobtv_pg_channel_thumb_pane_g2

0xe33b,	// (0x0008b2dd) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xe33b,	// (0x0008b2dd) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfc16,	// (0x0008cbb8) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfc16,	// (0x0008cbb8) single_mobtv_pg_channel_thumb_pane_g

0xe347,	// (0x0008b2e9) single_mobtv_pg_channel_thumb_pane_t1

0xe355,	// (0x0008b2f7) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc1d,	// (0x0008cbbf) single_mobtv_pg_channel_thumb_pane_t

0xccb1,	// (0x00089c53) bg_single_mobtv_pg_channel_table_pane_g1

0xccb1,	// (0x00089c53) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf6e1,	// (0x0008c683) bg_single_mobtv_pg_channel_table_pane_g

0xe363,	// (0x0008b305) single_mobtv_pg_channel_table_pane_t1

0xe371,	// (0x0008b313) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc22,	// (0x0008cbc4) single_mobtv_pg_channel_table_pane_t

0x8e84,	// (0x00085e26) main_mobtv_info_pane_g1_ParamLimits

0x8e84,	// (0x00085e26) main_mobtv_info_pane_g1

0x8ea0,	// (0x00085e42) main_mobtv_info_pane_t1_ParamLimits

0x8ea0,	// (0x00085e42) main_mobtv_info_pane_t1

0x8f18,	// (0x00085eba) main_mobtv_info_pane_t2_ParamLimits

0x8f18,	// (0x00085eba) main_mobtv_info_pane_t2

0x0002,

0xfc2c,	// (0x0008cbce) main_mobtv_info_pane_t_ParamLimits

0xfc2c,	// (0x0008cbce) main_mobtv_info_pane_t

0x8fa9,	// (0x00085f4b) wait_bar_pane_cp05

0x8fbb,	// (0x00085f5d) main_mobtv_loading_pane_g1_ParamLimits

0x8fbb,	// (0x00085f5d) main_mobtv_loading_pane_g1

0x8fc7,	// (0x00085f69) main_mobtv_loading_pane_g2_ParamLimits

0x8fc7,	// (0x00085f69) main_mobtv_loading_pane_g2

0x8fd3,	// (0x00085f75) main_mobtv_loading_pane_g3_ParamLimits

0x8fd3,	// (0x00085f75) main_mobtv_loading_pane_g3

0x0002,

0xfc33,	// (0x0008cbd5) main_mobtv_loading_pane_g_ParamLimits

0xfc33,	// (0x0008cbd5) main_mobtv_loading_pane_g

0xe37f,	// (0x0008b321) main_mobtv_loading_pane_t1_ParamLimits

0xe37f,	// (0x0008b321) main_mobtv_loading_pane_t1

0xe397,	// (0x0008b339) main_mobtv_loading_pane_t2_ParamLimits

0xe397,	// (0x0008b339) main_mobtv_loading_pane_t2

0x0001,

0xfc3a,	// (0x0008cbdc) main_mobtv_loading_pane_t_ParamLimits

0xfc3a,	// (0x0008cbdc) main_mobtv_loading_pane_t

0x8fe1,	// (0x00085f83) wait_bar_pane_cp06_ParamLimits

0x8fe1,	// (0x00085f83) wait_bar_pane_cp06

0xe3bb,	// (0x0008b35d) main_mobtv_programe_curr_pane_t1

0xe3c9,	// (0x0008b36b) main_mobtv_programe_curr_pane_t2

0x0001,

0xfc3f,	// (0x0008cbe1) main_mobtv_programe_curr_pane_t

0xe3d7,	// (0x0008b379) main_mobtv_programe_next_pane_t1

0xe3e5,	// (0x0008b387) main_mobtv_programe_next_pane_t2

0xe3f3,	// (0x0008b395) main_mobtv_programe_next_pane_t3

0x0002,

0xfc44,	// (0x0008cbe6) main_mobtv_programe_next_pane_t

0xa190,	// (0x00087132) bg_popup_mobtv_noti_window_pane

0xe401,	// (0x0008b3a3) popup_mobtv_noti_window_g1

0xe409,	// (0x0008b3ab) popup_mobtv_noti_window_t1

0xe417,	// (0x0008b3b9) popup_mobtv_noti_window_t2

0x0001,

0xfc4b,	// (0x0008cbed) popup_mobtv_noti_window_t

0xccb1,	// (0x00089c53) bg_popup_mobtv_noti_window_pane_g1

0xa190,	// (0x00087132) sc_clock_pane

0xa190,	// (0x00087132) main_fs_bigclock_pane

0x86a5,	// (0x00085647) blid2_tripm_pane_t4_ParamLimits

0x86a5,	// (0x00085647) blid2_tripm_pane_t4

0x8fed,	// (0x00085f8f) sc_clock_pane_g1_ParamLimits

0x8fed,	// (0x00085f8f) sc_clock_pane_g1

0x8ffb,	// (0x00085f9d) sc_clock_pane_t1_ParamLimits

0x8ffb,	// (0x00085f9d) sc_clock_pane_t1

0x9010,	// (0x00085fb2) sc_clock_pane_t2_ParamLimits

0x9010,	// (0x00085fb2) sc_clock_pane_t2

0x9022,	// (0x00085fc4) sc_clock_pane_t3_ParamLimits

0x9022,	// (0x00085fc4) sc_clock_pane_t3

0x0004,

0xfc50,	// (0x0008cbf2) sc_clock_pane_t_ParamLimits

0xfc50,	// (0x0008cbf2) sc_clock_pane_t

0x98d6,	// (0x00086878) main_fs_bigclock_indicator_pane_ParamLimits

0x98d6,	// (0x00086878) main_fs_bigclock_indicator_pane

0x90af,	// (0x00086051) main_fs_bigclock_pane_g1_ParamLimits

0x90af,	// (0x00086051) main_fs_bigclock_pane_g1

0x98e2,	// (0x00086884) main_fs_bigclock_pane_t1_ParamLimits

0x98e2,	// (0x00086884) main_fs_bigclock_pane_t1

0x98f4,	// (0x00086896) main_fs_bigclock_pane_t2_ParamLimits

0x98f4,	// (0x00086896) main_fs_bigclock_pane_t2

0x9908,	// (0x000868aa) main_fs_bigclock_pane_t3_ParamLimits

0x9908,	// (0x000868aa) main_fs_bigclock_pane_t3

0x0002,

0xfe5a,	// (0x0008cdfc) main_fs_bigclock_pane_t_ParamLimits

0xfe5a,	// (0x0008cdfc) main_fs_bigclock_pane_t

0xec6b,	// (0x0008bc0d) main_fs_bigclock_indicator_pane_g1

0xe0d3,	// (0x0008b075) ncim_query_content_pane_g2_ParamLimits

0xe0d3,	// (0x0008b075) ncim_query_content_pane_g2

0x0001,

0xfbdd,	// (0x0008cb7f) ncim_query_content_pane_g_ParamLimits

0xfbdd,	// (0x0008cb7f) ncim_query_content_pane_g

0x9034,	// (0x00085fd6) sc_clock_pane_t4_ParamLimits

0x9034,	// (0x00085fd6) sc_clock_pane_t4

0xa8a9,	// (0x0008784b) main_radioblah_pane

0xd5f6,	// (0x0008a598) cell_call4_button_pane_t1_copy1_ParamLimits

0xd5f6,	// (0x0008a598) cell_call4_button_pane_t1_copy1

0x8ca7,	// (0x00085c49) main_ncimui_pane_t1_ParamLimits

0x8ca7,	// (0x00085c49) main_ncimui_pane_t1

0x8cc1,	// (0x00085c63) main_ncimui_pane_t2_ParamLimits

0x8cc1,	// (0x00085c63) main_ncimui_pane_t2

0x0002,

0xfbd6,	// (0x0008cb78) main_ncimui_pane_t_ParamLimits

0xfbd6,	// (0x0008cb78) main_ncimui_pane_t

0xe563,	// (0x0008b505) main_radioblah_anim_pane_ParamLimits

0xe563,	// (0x0008b505) main_radioblah_anim_pane

0xe574,	// (0x0008b516) main_radioblah_info_pane_ParamLimits

0xe574,	// (0x0008b516) main_radioblah_info_pane

0xe588,	// (0x0008b52a) main_radioblah_pane_t1_ParamLimits

0xe588,	// (0x0008b52a) main_radioblah_pane_t1

0xe5a4,	// (0x0008b546) main_radioblah_pane_t2_ParamLimits

0xe5a4,	// (0x0008b546) main_radioblah_pane_t2

0x0003,

0xfc71,	// (0x0008cc13) main_radioblah_pane_t_ParamLimits

0xfc71,	// (0x0008cc13) main_radioblah_pane_t

0x9101,	// (0x000860a3) main_radioblah_rocker_ctrl_pane_ParamLimits

0x9101,	// (0x000860a3) main_radioblah_rocker_ctrl_pane

0xe5ec,	// (0x0008b58e) main_radioblah_info_pane_t1_ParamLimits

0xe5ec,	// (0x0008b58e) main_radioblah_info_pane_t1

0x914a,	// (0x000860ec) main_radioblah_info_pane_t2_ParamLimits

0x914a,	// (0x000860ec) main_radioblah_info_pane_t2

0x0003,

0xfc7a,	// (0x0008cc1c) main_radioblah_info_pane_t_ParamLimits

0xfc7a,	// (0x0008cc1c) main_radioblah_info_pane_t

0xccb1,	// (0x00089c53) main_radioblah_rocker_ctrl_pane_g1

0x91fa,	// (0x0008619c) main_radioblah_rocker_ctrl_pane_g2

0x9202,	// (0x000861a4) main_radioblah_rocker_ctrl_pane_g3

0x920a,	// (0x000861ac) main_radioblah_rocker_ctrl_pane_g4

0x9212,	// (0x000861b4) main_radioblah_rocker_ctrl_pane_g5

0x921a,	// (0x000861bc) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfc83,	// (0x0008cc25) main_radioblah_rocker_ctrl_pane_g

0x8c59,	// (0x00085bfb) main_cset_text2_pane_t1_copy1_ParamLimits

0x745e,	// (0x00084400) cam4_image_uncrop_qvga_pane

0x75a3,	// (0x00084545) vid4_image_uncrop_qcif_pane

0x8837,	// (0x000857d9) cam6_image_uncrop_qvga_pane_ParamLimits

0x8837,	// (0x000857d9) cam6_image_uncrop_qvga_pane

0xddbb,	// (0x0008ad5d) vid6_image_uncrop_qcif_pane_ParamLimits

0xddbb,	// (0x0008ad5d) vid6_image_uncrop_qcif_pane

0xa190,	// (0x00087132) bg_popup_preview_window_pane_cp03

0xe085,	// (0x0008b027) list_cset_text2_pane

0xe08d,	// (0x0008b02f) main_cset6_text2_pane_g1

0xe095,	// (0x0008b037) main_cset6_text2_pane_t1

0x9222,	// (0x000861c4) list_cset_text2_pane_t1_ParamLimits

0x9222,	// (0x000861c4) list_cset_text2_pane_t1

0xa8a9,	// (0x0008784b) main_radioblah_pane_ParamLimits

0x8f95,	// (0x00085f37) main_mobtv_info_pane_t3_ParamLimits

0x8f95,	// (0x00085f37) main_mobtv_info_pane_t3

0x90ef,	// (0x00086091) main_radioblah_pane_g1

0x911a,	// (0x000860bc) main_radioblah_info_pane_g1

0x919f,	// (0x00086141) main_radioblah_info_pane_t3_ParamLimits

0x919f,	// (0x00086141) main_radioblah_info_pane_t3

0x4295,	// (0x00081237) highlight_cell_cale_month_pane_ParamLimits

0x4295,	// (0x00081237) highlight_cell_cale_month_pane

0xa190,	// (0x00087132) main_phob_fisheye_pane

0xcfbd,	// (0x00089f5f) scroll_pane_cp0031_ParamLimits

0xcfbd,	// (0x00089f5f) scroll_pane_cp0031

0xdee8,	// (0x0008ae8a) wait_bar_pane_cp08_ParamLimits

0x8a0a,	// (0x000859ac) cset_list_set_pane_copy1_ParamLimits

0xe626,	// (0x0008b5c8) highlight_cell_cale_month_pane_g1

0x9239,	// (0x000861db) highlight_cell_cale_month_pane_t1

0xdb50,	// (0x0008aaf2) list_gen_pane_cp01

0xd7c9,	// (0x0008a76b) scroll_pane_01

0x9247,	// (0x000861e9) list_single_double_fisheye_pane

0x1355,	// (0x0007e2f7) list_double_fisheye_pane_g1_ParamLimits

0x1355,	// (0x0007e2f7) list_double_fisheye_pane_g1

0x1361,	// (0x0007e303) list_double_fisheye_pane_g2_ParamLimits

0x1361,	// (0x0007e303) list_double_fisheye_pane_g2

0x9250,	// (0x000861f2) list_double_fisheye_pane_g3_ParamLimits

0x9250,	// (0x000861f2) list_double_fisheye_pane_g3

0x0004,

0xfc90,	// (0x0008cc32) list_double_fisheye_pane_g_ParamLimits

0xfc90,	// (0x0008cc32) list_double_fisheye_pane_g

0x1392,	// (0x0007e334) list_double_fisheye_pane_t1_ParamLimits

0x1392,	// (0x0007e334) list_double_fisheye_pane_t1

0x13ad,	// (0x0007e34f) list_double_fisheye_pane_t2_ParamLimits

0x13ad,	// (0x0007e34f) list_double_fisheye_pane_t2

0x0001,

0xfc9b,	// (0x0008cc3d) list_double_fisheye_pane_t_ParamLimits

0xfc9b,	// (0x0008cc3d) list_double_fisheye_pane_t

0xa190,	// (0x00087132) main_call5_pane

0x905a,	// (0x00085ffc) sc_swipe_pane_ParamLimits

0x905a,	// (0x00085ffc) sc_swipe_pane

0x9268,	// (0x0008620a) call5_image_pane_ParamLimits

0x9268,	// (0x0008620a) call5_image_pane

0x927a,	// (0x0008621c) call5_swipe_1_pane_ParamLimits

0x927a,	// (0x0008621c) call5_swipe_1_pane

0x9286,	// (0x00086228) call5_swipe_2_pane_ParamLimits

0x9286,	// (0x00086228) call5_swipe_2_pane

0x92a2,	// (0x00086244) popup_call5_audio_first_window_ParamLimits

0x92a2,	// (0x00086244) popup_call5_audio_first_window

0xcee1,	// (0x00089e83) call5_swipe_1_pane_g1_ParamLimits

0xcee1,	// (0x00089e83) call5_swipe_1_pane_g1

0xe62e,	// (0x0008b5d0) call5_swipe_1_pane_g2_ParamLimits

0xe62e,	// (0x0008b5d0) call5_swipe_1_pane_g2

0x0001,

0xfca0,	// (0x0008cc42) call5_swipe_1_pane_g_ParamLimits

0xfca0,	// (0x0008cc42) call5_swipe_1_pane_g

0xe63a,	// (0x0008b5dc) call5_swipe_1_pane_t1_ParamLimits

0xe63a,	// (0x0008b5dc) call5_swipe_1_pane_t1

0xcee1,	// (0x00089e83) call5_swipe_2_pane_g1_ParamLimits

0xcee1,	// (0x00089e83) call5_swipe_2_pane_g1

0xe64f,	// (0x0008b5f1) call5_swipe_2_pane_g2_ParamLimits

0xe64f,	// (0x0008b5f1) call5_swipe_2_pane_g2

0x0001,

0xfca5,	// (0x0008cc47) call5_swipe_2_pane_g_ParamLimits

0xfca5,	// (0x0008cc47) call5_swipe_2_pane_g

0xe65b,	// (0x0008b5fd) call5_swipe_2_pane_t1_ParamLimits

0xe65b,	// (0x0008b5fd) call5_swipe_2_pane_t1

0xe670,	// (0x0008b612) sc_swipe_pane_g1_ParamLimits

0xe670,	// (0x0008b612) sc_swipe_pane_g1

0xe67d,	// (0x0008b61f) sc_swipe_pane_g2_ParamLimits

0xe67d,	// (0x0008b61f) sc_swipe_pane_g2

0x0001,

0xfcaa,	// (0x0008cc4c) sc_swipe_pane_g_ParamLimits

0xfcaa,	// (0x0008cc4c) sc_swipe_pane_g

0xe689,	// (0x0008b62b) sc_swipe_pane_t1_ParamLimits

0xe689,	// (0x0008b62b) sc_swipe_pane_t1

0xa190,	// (0x00087132) main_cmail_launcher_pane

0x92b2,	// (0x00086254) aid_size_cell_cmail_l_ParamLimits

0x92b2,	// (0x00086254) aid_size_cell_cmail_l

0x92c2,	// (0x00086264) grid_cmail_l_pane_ParamLimits

0x92c2,	// (0x00086264) grid_cmail_l_pane

0x92d2,	// (0x00086274) cell_cmail_l_pane_ParamLimits

0x92d2,	// (0x00086274) cell_cmail_l_pane

0x92e8,	// (0x0008628a) cell_cmail_l_pane_g1_ParamLimits

0x92e8,	// (0x0008628a) cell_cmail_l_pane_g1

0x92f4,	// (0x00086296) cell_cmail_l_pane_t1_ParamLimits

0x92f4,	// (0x00086296) cell_cmail_l_pane_t1

0xe69e,	// (0x0008b640) cell_cmail_l_pane_t2_ParamLimits

0xe69e,	// (0x0008b640) cell_cmail_l_pane_t2

0x0001,

0xfcaf,	// (0x0008cc51) cell_cmail_l_pane_t_ParamLimits

0xfcaf,	// (0x0008cc51) cell_cmail_l_pane_t

0xa8a9,	// (0x0008784b) grid_highlight_pane_cp018_ParamLimits

0xa8a9,	// (0x0008784b) grid_highlight_pane_cp018

0x1faf,	// (0x0007ef51) main2_pane_ParamLimits

0x1faf,	// (0x0007ef51) main2_pane

0xa9ed,	// (0x0008798f) popup_sp_fs_action_menu_bg_pane_g1

0xa9f5,	// (0x00087997) popup_sp_fs_action_menu_bg_pane_g2

0xa9fd,	// (0x0008799f) popup_sp_fs_action_menu_bg_pane_g3

0xaa05,	// (0x000879a7) popup_sp_fs_action_menu_bg_pane_g4

0xaa0d,	// (0x000879af) popup_sp_fs_action_menu_bg_pane_g5

0xaa15,	// (0x000879b7) popup_sp_fs_action_menu_bg_pane_g6

0xaa1d,	// (0x000879bf) popup_sp_fs_action_menu_bg_pane_g7

0xaa25,	// (0x000879c7) popup_sp_fs_action_menu_bg_pane_g8

0xaa2d,	// (0x000879cf) popup_sp_fs_action_menu_bg_pane_g9

0xaa35,	// (0x000879d7) popup_sp_fs_action_menu_bg_pane_g10

0xaa35,	// (0x000879d7) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf18d,	// (0x0008c12f) popup_sp_fs_action_menu_bg_pane_g

0x0bd5,	// (0x0007db77) list_medium_line_x2_t3_g3_g1_ParamLimits

0x0bd5,	// (0x0007db77) list_medium_line_x2_t3_g3_g1

0x31d1,	// (0x00080173) list_medium_line_x2_t3_g3_g2_ParamLimits

0x31d1,	// (0x00080173) list_medium_line_x2_t3_g3_g2

0x0be1,	// (0x0007db83) list_medium_line_x2_t3_g3_g3_ParamLimits

0x0be1,	// (0x0007db83) list_medium_line_x2_t3_g3_g3

0x0002,

0xf23d,	// (0x0008c1df) list_medium_line_x2_t3_g3_g_ParamLimits

0xf23d,	// (0x0008c1df) list_medium_line_x2_t3_g3_g

0x0bed,	// (0x0007db8f) list_medium_line_x2_t3_g3_t1_ParamLimits

0x0bed,	// (0x0007db8f) list_medium_line_x2_t3_g3_t1

0x0c02,	// (0x0007dba4) list_medium_line_x2_t3_g3_t2_ParamLimits

0x0c02,	// (0x0007dba4) list_medium_line_x2_t3_g3_t2

0x0c16,	// (0x0007dbb8) list_medium_line_x2_t3_g3_t3_ParamLimits

0x0c16,	// (0x0007dbb8) list_medium_line_x2_t3_g3_t3

0x0002,

0xf244,	// (0x0008c1e6) list_medium_line_x2_t3_g3_t_ParamLimits

0xf244,	// (0x0008c1e6) list_medium_line_x2_t3_g3_t

0x0bd5,	// (0x0007db77) list_medium_line_x2_t3_g2_g1_ParamLimits

0x0bd5,	// (0x0007db77) list_medium_line_x2_t3_g2_g1

0x0be1,	// (0x0007db83) list_medium_line_x2_t3_g2_g2_ParamLimits

0x0be1,	// (0x0007db83) list_medium_line_x2_t3_g2_g2

0x0001,

0xf24b,	// (0x0008c1ed) list_medium_line_x2_t3_g2_g_ParamLimits

0xf24b,	// (0x0008c1ed) list_medium_line_x2_t3_g2_g

0x0c2b,	// (0x0007dbcd) list_medium_line_x2_t3_g2_t1_ParamLimits

0x0c2b,	// (0x0007dbcd) list_medium_line_x2_t3_g2_t1

0x0c41,	// (0x0007dbe3) list_medium_line_x2_t3_g2_t2_ParamLimits

0x0c41,	// (0x0007dbe3) list_medium_line_x2_t3_g2_t2

0x0c53,	// (0x0007dbf5) list_medium_line_x2_t3_g2_t3_ParamLimits

0x0c53,	// (0x0007dbf5) list_medium_line_x2_t3_g2_t3

0x0002,

0xf250,	// (0x0008c1f2) list_medium_line_x2_t3_g2_t_ParamLimits

0xf250,	// (0x0008c1f2) list_medium_line_x2_t3_g2_t

0x0bd5,	// (0x0007db77) list_medium_line_x2_t4_g4_g1_ParamLimits

0x0bd5,	// (0x0007db77) list_medium_line_x2_t4_g4_g1

0x31dd,	// (0x0008017f) list_medium_line_x2_t4_g4_g2_ParamLimits

0x31dd,	// (0x0008017f) list_medium_line_x2_t4_g4_g2

0x31d1,	// (0x00080173) list_medium_line_x2_t4_g4_g3_ParamLimits

0x31d1,	// (0x00080173) list_medium_line_x2_t4_g4_g3

0x0c71,	// (0x0007dc13) list_medium_line_x2_t4_g4_g4_ParamLimits

0x0c71,	// (0x0007dc13) list_medium_line_x2_t4_g4_g4

0x0003,

0xf257,	// (0x0008c1f9) list_medium_line_x2_t4_g4_g_ParamLimits

0xf257,	// (0x0008c1f9) list_medium_line_x2_t4_g4_g

0x0c7d,	// (0x0007dc1f) list_medium_line_x2_t4_g4_t1_ParamLimits

0x0c7d,	// (0x0007dc1f) list_medium_line_x2_t4_g4_t1

0x0c94,	// (0x0007dc36) list_medium_line_x2_t4_g4_t2_ParamLimits

0x0c94,	// (0x0007dc36) list_medium_line_x2_t4_g4_t2

0x0ca9,	// (0x0007dc4b) list_medium_line_x2_t4_g4_t3_ParamLimits

0x0ca9,	// (0x0007dc4b) list_medium_line_x2_t4_g4_t3

0x0cbb,	// (0x0007dc5d) list_medium_line_x2_t4_g4_t4_ParamLimits

0x0cbb,	// (0x0007dc5d) list_medium_line_x2_t4_g4_t4

0x0003,

0xf260,	// (0x0008c202) list_medium_line_x2_t4_g4_t_ParamLimits

0xf260,	// (0x0008c202) list_medium_line_x2_t4_g4_t

0x0bd5,	// (0x0007db77) list_medium_line_x2_t2_g4_g1_ParamLimits

0x0bd5,	// (0x0007db77) list_medium_line_x2_t2_g4_g1

0x31dd,	// (0x0008017f) list_medium_line_x2_t2_g4_g2_ParamLimits

0x31dd,	// (0x0008017f) list_medium_line_x2_t2_g4_g2

0x31d1,	// (0x00080173) list_medium_line_x2_t2_g4_g3_ParamLimits

0x31d1,	// (0x00080173) list_medium_line_x2_t2_g4_g3

0x0be1,	// (0x0007db83) list_medium_line_x2_t2_g4_g4_ParamLimits

0x0be1,	// (0x0007db83) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2c7,	// (0x0008c269) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2c7,	// (0x0008c269) list_medium_line_x2_t2_g4_g

0x0ccd,	// (0x0007dc6f) list_medium_line_x2_t2_g4_t1_ParamLimits

0x0ccd,	// (0x0007dc6f) list_medium_line_x2_t2_g4_t1

0x0c16,	// (0x0007dbb8) list_medium_line_x2_t2_g4_t2_ParamLimits

0x0c16,	// (0x0007dbb8) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2d0,	// (0x0008c272) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2d0,	// (0x0008c272) list_medium_line_x2_t2_g4_t

0x0bd5,	// (0x0007db77) list_medium_line_x2_t2_g3_g1_ParamLimits

0x0bd5,	// (0x0007db77) list_medium_line_x2_t2_g3_g1

0x31d1,	// (0x00080173) list_medium_line_x2_t2_g3_g2_ParamLimits

0x31d1,	// (0x00080173) list_medium_line_x2_t2_g3_g2

0x0be1,	// (0x0007db83) list_medium_line_x2_t2_g3_g3_ParamLimits

0x0be1,	// (0x0007db83) list_medium_line_x2_t2_g3_g3

0x0002,

0xf23d,	// (0x0008c1df) list_medium_line_x2_t2_g3_g_ParamLimits

0xf23d,	// (0x0008c1df) list_medium_line_x2_t2_g3_g

0x0ce2,	// (0x0007dc84) list_medium_line_x2_t2_g3_t1_ParamLimits

0x0ce2,	// (0x0007dc84) list_medium_line_x2_t2_g3_t1

0x0c16,	// (0x0007dbb8) list_medium_line_x2_t2_g3_t2_ParamLimits

0x0c16,	// (0x0007dbb8) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2d5,	// (0x0008c277) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2d5,	// (0x0008c277) list_medium_line_x2_t2_g3_t

0x443c,	// (0x000813de) main_sp_fs_list_pane_ParamLimits

0x443c,	// (0x000813de) main_sp_fs_list_pane

0x4448,	// (0x000813ea) sp_fs_scroll_pane_ParamLimits

0x4448,	// (0x000813ea) sp_fs_scroll_pane

0x0cf7,	// (0x0007dc99) list_medium_line_x2_t3_t1

0x0d07,	// (0x0007dca9) list_medium_line_x2_t3_t2

0x0d15,	// (0x0007dcb7) list_medium_line_x2_t3_t3

0x0002,

0xf320,	// (0x0008c2c2) list_medium_line_x2_t3_t

0x0d23,	// (0x0007dcc5) list_medium_line_x3_t4_t1

0x0d33,	// (0x0007dcd5) list_medium_line_x3_t4_t2

0x0d41,	// (0x0007dce3) list_medium_line_x3_t4_t3

0x0d15,	// (0x0007dcb7) list_medium_line_x3_t4_t4

0x0003,

0xf327,	// (0x0008c2c9) list_medium_line_x3_t4_t

0x0d4f,	// (0x0007dcf1) list_medium_line_x4_t5_t1

0x0d5f,	// (0x0007dd01) list_medium_line_x4_t5_t2

0x0d41,	// (0x0007dce3) list_medium_line_x4_t5_t3

0x0d6d,	// (0x0007dd0f) list_medium_line_x4_t5_t4

0x0d15,	// (0x0007dcb7) list_medium_line_x4_t5_t5

0x0004,

0xf330,	// (0x0008c2d2) list_medium_line_x4_t5_t

0x0bd5,	// (0x0007db77) list_medium_line_t4_g4_g1_ParamLimits

0x0bd5,	// (0x0007db77) list_medium_line_t4_g4_g1

0x0c71,	// (0x0007dc13) list_medium_line_t4_g4_g2_ParamLimits

0x0c71,	// (0x0007dc13) list_medium_line_t4_g4_g2

0x0d7b,	// (0x0007dd1d) list_medium_line_t4_g4_g3_ParamLimits

0x0d7b,	// (0x0007dd1d) list_medium_line_t4_g4_g3

0x0be1,	// (0x0007db83) list_medium_line_t4_g4_g4_ParamLimits

0x0be1,	// (0x0007db83) list_medium_line_t4_g4_g4

0x0003,

0xf33b,	// (0x0008c2dd) list_medium_line_t4_g4_g_ParamLimits

0xf33b,	// (0x0008c2dd) list_medium_line_t4_g4_g

0x0d87,	// (0x0007dd29) list_medium_line_t4_g4_t1_ParamLimits

0x0d87,	// (0x0007dd29) list_medium_line_t4_g4_t1

0x0d9c,	// (0x0007dd3e) list_medium_line_t4_g4_t2_ParamLimits

0x0d9c,	// (0x0007dd3e) list_medium_line_t4_g4_t2

0x0db2,	// (0x0007dd54) list_medium_line_t4_g4_t3_ParamLimits

0x0db2,	// (0x0007dd54) list_medium_line_t4_g4_t3

0x0c16,	// (0x0007dbb8) list_medium_line_t4_g4_t4_ParamLimits

0x0c16,	// (0x0007dbb8) list_medium_line_t4_g4_t4

0x0003,

0xf344,	// (0x0008c2e6) list_medium_line_t4_g4_t_ParamLimits

0xf344,	// (0x0008c2e6) list_medium_line_t4_g4_t

0x4567,	// (0x00081509) chi_dic_find_pane_g1

0x5544,	// (0x000824e6) main_tport_pane

0x0ffb,	// (0x0007df9d) list_medium_line_plain_t1

0x1009,	// (0x0007dfab) list_medium_line_t2_g2_g1_ParamLimits

0x1009,	// (0x0007dfab) list_medium_line_t2_g2_g1

0x7fe6,	// (0x00084f88) list_medium_line_t2_g2_g2_ParamLimits

0x7fe6,	// (0x00084f88) list_medium_line_t2_g2_g2

0x0001,

0xf9ee,	// (0x0008c990) list_medium_line_t2_g2_g_ParamLimits

0xf9ee,	// (0x0008c990) list_medium_line_t2_g2_g

0x1015,	// (0x0007dfb7) list_medium_line_t2_g2_t1_ParamLimits

0x1015,	// (0x0007dfb7) list_medium_line_t2_g2_t1

0x102f,	// (0x0007dfd1) list_medium_line_t2_g2_t2_ParamLimits

0x102f,	// (0x0007dfd1) list_medium_line_t2_g2_t2

0x0001,

0xf9f3,	// (0x0008c995) list_medium_line_t2_g2_t_ParamLimits

0xf9f3,	// (0x0008c995) list_medium_line_t2_g2_t

0x124f,	// (0x0007e1f1) aid_sp_fs_list_icon_a_sm

0x84f7,	// (0x00085499) aid_sp_fs_list_icon_d

0x1257,	// (0x0007e1f9) aid_sp_fs_text_primary

0x1260,	// (0x0007e202) aid_sp_fs_text_secondary

0x84ff,	// (0x000854a1) list_medium_line

0x84ff,	// (0x000854a1) list_medium_line_g2

0x84ff,	// (0x000854a1) list_medium_line_g3

0x84ff,	// (0x000854a1) list_medium_line_plain

0x84ff,	// (0x000854a1) list_medium_line_plain_t2

0x84ff,	// (0x000854a1) list_medium_line_plain_t3

0x84ff,	// (0x000854a1) list_medium_line_right_icon

0x84ff,	// (0x000854a1) list_medium_line_right_iconx2

0x84ff,	// (0x000854a1) list_medium_line_t2

0x84ff,	// (0x000854a1) list_medium_line_t2_g2

0x84ff,	// (0x000854a1) list_medium_line_t2_g3

0x84ff,	// (0x000854a1) list_medium_line_t2_right_icon

0x84ff,	// (0x000854a1) list_medium_line_t2_right_iconx2

0x84ff,	// (0x000854a1) list_medium_line_t3

0x84ff,	// (0x000854a1) list_medium_line_t3_g2

0x84ff,	// (0x000854a1) list_medium_line_t3_g3

0x84ff,	// (0x000854a1) list_medium_line_t3_right_iconx2

0x8508,	// (0x000854aa) list_medium_line_t4_g4

0x8511,	// (0x000854b3) list_medium_line_x2

0x8511,	// (0x000854b3) list_medium_line_x2_t2_g2

0x8511,	// (0x000854b3) list_medium_line_x2_t2_g3

0x8511,	// (0x000854b3) list_medium_line_x2_t2_g4

0x8511,	// (0x000854b3) list_medium_line_x2_t3

0x8511,	// (0x000854b3) list_medium_line_x2_t3_g2

0x8511,	// (0x000854b3) list_medium_line_x2_t3_g3

0x8511,	// (0x000854b3) list_medium_line_x2_t3_g4

0x8511,	// (0x000854b3) list_medium_line_x2_t4_g2

0x8511,	// (0x000854b3) list_medium_line_x2_t4_g4

0x851a,	// (0x000854bc) list_medium_line_x3

0x851a,	// (0x000854bc) list_medium_line_x3_t4

0x851a,	// (0x000854bc) list_medium_line_x3_t4_g4

0x8508,	// (0x000854aa) list_medium_line_x4_t4

0x8508,	// (0x000854aa) list_medium_line_x4_t4_g7

0x8508,	// (0x000854aa) list_medium_line_x4_t5

0x1269,	// (0x0007e20b) list_single_fs_dyc_pane_ParamLimits

0x1269,	// (0x0007e20b) list_single_fs_dyc_pane

0x0bd5,	// (0x0007db77) list_medium_line_x4_t4_g7_g1_ParamLimits

0x0bd5,	// (0x0007db77) list_medium_line_x4_t4_g7_g1

0x12a1,	// (0x0007e243) list_medium_line_x4_t4_g7_g2_ParamLimits

0x12a1,	// (0x0007e243) list_medium_line_x4_t4_g7_g2

0x8c3e,	// (0x00085be0) list_medium_line_x4_t4_g7_g3_ParamLimits

0x8c3e,	// (0x00085be0) list_medium_line_x4_t4_g7_g3

0x8c4d,	// (0x00085bef) list_medium_line_x4_t4_g7_g4_ParamLimits

0x8c4d,	// (0x00085bef) list_medium_line_x4_t4_g7_g4

0x12ad,	// (0x0007e24f) list_medium_line_x4_t4_g7_g5_ParamLimits

0x12ad,	// (0x0007e24f) list_medium_line_x4_t4_g7_g5

0x12bc,	// (0x0007e25e) list_medium_line_x4_t4_g7_g6_ParamLimits

0x12bc,	// (0x0007e25e) list_medium_line_x4_t4_g7_g6

0x12cb,	// (0x0007e26d) list_medium_line_x4_t4_g7_g7_ParamLimits

0x12cb,	// (0x0007e26d) list_medium_line_x4_t4_g7_g7

0x0006,

0xfbb7,	// (0x0008cb59) list_medium_line_x4_t4_g7_g_ParamLimits

0xfbb7,	// (0x0008cb59) list_medium_line_x4_t4_g7_g

0x12d7,	// (0x0007e279) list_medium_line_x4_t4_g7_t1_ParamLimits

0x12d7,	// (0x0007e279) list_medium_line_x4_t4_g7_t1

0x12ec,	// (0x0007e28e) list_medium_line_x4_t4_g7_t2_ParamLimits

0x12ec,	// (0x0007e28e) list_medium_line_x4_t4_g7_t2

0x1301,	// (0x0007e2a3) list_medium_line_x4_t4_g7_t3_ParamLimits

0x1301,	// (0x0007e2a3) list_medium_line_x4_t4_g7_t3

0x1316,	// (0x0007e2b8) list_medium_line_x4_t4_g7_t4_ParamLimits

0x1316,	// (0x0007e2b8) list_medium_line_x4_t4_g7_t4

0x1328,	// (0x0007e2ca) list_medium_line_x4_t4_g7_t5_ParamLimits

0x1328,	// (0x0007e2ca) list_medium_line_x4_t4_g7_t5

0x0004,

0xfbc6,	// (0x0008cb68) list_medium_line_x4_t4_g7_t_ParamLimits

0xfbc6,	// (0x0008cb68) list_medium_line_x4_t4_g7_t

0x133a,	// (0x0007e2dc) list_single_dyc_row_pane_ParamLimits

0x133a,	// (0x0007e2dc) list_single_dyc_row_pane

0x925c,	// (0x000861fe) call5_gesture_pane_ParamLimits

0x925c,	// (0x000861fe) call5_gesture_pane

0x9292,	// (0x00086234) call5_windows_pane_ParamLimits

0x9292,	// (0x00086234) call5_windows_pane

0x930a,	// (0x000862ac) call5_swipe_1_pane_cp_ParamLimits

0x930a,	// (0x000862ac) call5_swipe_1_pane_cp

0x9316,	// (0x000862b8) call5_swipe_2_pane_cp_ParamLimits

0x9316,	// (0x000862b8) call5_swipe_2_pane_cp

0xb452,	// (0x000883f4) call5_image_pane_cp

0x9322,	// (0x000862c4) popup_call5_audio_first_window_cp_ParamLimits

0x9322,	// (0x000862c4) popup_call5_audio_first_window_cp

0xe670,	// (0x0008b612) call5_swipe_1_pane_g1_cp_ParamLimits

0xe670,	// (0x0008b612) call5_swipe_1_pane_g1_cp

0xe6b0,	// (0x0008b652) call5_swipe_1_pane_g2_cp

0xe689,	// (0x0008b62b) call5_swipe_1_pane_t1_cp_ParamLimits

0xe689,	// (0x0008b62b) call5_swipe_1_pane_t1_cp

0xe670,	// (0x0008b612) call5_swipe_2_pane_g1_cp_ParamLimits

0xe670,	// (0x0008b612) call5_swipe_2_pane_g1_cp

0xe6b8,	// (0x0008b65a) call5_swipe_2_pane_g2_cp

0xe6c0,	// (0x0008b662) call5_swipe_2_pane_t1_cp_ParamLimits

0xe6c0,	// (0x0008b662) call5_swipe_2_pane_t1_cp

0xa8a9,	// (0x0008784b) main_sp_fs_email_pane

0xe6d5,	// (0x0008b677) main_sp_fs_listscroll_pane_te

0x13cf,	// (0x0007e371) popup_sp_fs_action_menu_pane_ParamLimits

0x13cf,	// (0x0007e371) popup_sp_fs_action_menu_pane

0xccb1,	// (0x00089c53) bg_sp_fs_ctrlbar_pane_g1

0xd246,	// (0x0008a1e8) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xd258,	// (0x0008a1fa) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xd24f,	// (0x0008a1f1) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xccb1,	// (0x00089c53) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfcb4,	// (0x0008cc56) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xca90,	// (0x00089a32) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xca90,	// (0x00089a32) bg_sp_fs_ctrlbar_ddmenu_pane

0xe6de,	// (0x0008b680) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xe6de,	// (0x0008b680) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xe6ea,	// (0x0008b68c) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xe6ea,	// (0x0008b68c) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfcbd,	// (0x0008cc5f) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfcbd,	// (0x0008cc5f) main_sp_fs_ctrlbar_ddmenu_pane_g

0xe6f6,	// (0x0008b698) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xe6f6,	// (0x0008b698) main_sp_fs_ctrlbar_ddmenu_pane_t1

0x9330,	// (0x000862d2) list_medium_line_t2_right_icon_g1

0x1415,	// (0x0007e3b7) list_medium_line_t2_right_icon_t1

0x1425,	// (0x0007e3c7) list_medium_line_t2_right_icon_t2

0x0001,

0xfcc2,	// (0x0008cc64) list_medium_line_t2_right_icon_t

0xc860,	// (0x00089802) bg_sp_fs_ctrlbar_pane_ParamLimits

0xc860,	// (0x00089802) bg_sp_fs_ctrlbar_pane

0x9391,	// (0x00086333) main_sp_fs_ctrlbar_button_pane_cp01

0x9399,	// (0x0008633b) main_sp_fs_ctrlbar_ddmenu_pane

0xe748,	// (0x0008b6ea) main_sp_fs_ctrlbar_pane_g1

0xe754,	// (0x0008b6f6) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfcc7,	// (0x0008cc69) main_sp_fs_ctrlbar_pane_g

0xe760,	// (0x0008b702) main_sp_fs_ctrlbar_pane_t1

0x1433,	// (0x0007e3d5) main_sp_fs_ctrlbar_pane

0x144d,	// (0x0007e3ef) main_sp_fs_listscroll_pane_te_cp01

0x145e,	// (0x0007e400) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x145e,	// (0x0007e400) popup_sp_fs_action_menu_pane_cp01

0xa8a9,	// (0x0008784b) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0xa8a9,	// (0x0008784b) bg_sp_fs_highlight_list_pane_cp01

0x148c,	// (0x0007e42e) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0x148c,	// (0x0007e42e) sp_fs_action_menu_list_gene_pane_g1

0xe790,	// (0x0008b732) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xe790,	// (0x0008b732) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfcd1,	// (0x0008cc73) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfcd1,	// (0x0008cc73) sp_fs_action_menu_list_gene_pane_g

0x149b,	// (0x0007e43d) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0x149b,	// (0x0007e43d) sp_fs_action_menu_list_gene_pane_t1

0x14b3,	// (0x0007e455) sp_fs_action_menu_list_gene_pane_ParamLimits

0x14b3,	// (0x0007e455) sp_fs_action_menu_list_gene_pane

0xe79d,	// (0x0008b73f) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xe79d,	// (0x0008b73f) popup_sp_fs_action_menu_bg_pane

0x14d6,	// (0x0007e478) sp_fs_action_menu_list_pane_ParamLimits

0x14d6,	// (0x0007e478) sp_fs_action_menu_list_pane

0xe7ab,	// (0x0008b74d) sp_fs_scroll_pane_cp01_ParamLimits

0xe7ab,	// (0x0008b74d) sp_fs_scroll_pane_cp01

0x14fa,	// (0x0007e49c) list_medium_line_plain_t2_t1

0x150a,	// (0x0007e4ac) list_medium_line_plain_t2_t2

0x0001,

0xfcd6,	// (0x0008cc78) list_medium_line_plain_t2_t

0x1518,	// (0x0007e4ba) list_medium_line_plain_t3_t1

0x1528,	// (0x0007e4ca) list_medium_line_plain_t3_t2

0x1536,	// (0x0007e4d8) list_medium_line_plain_t3_t3

0x0002,

0xfcdb,	// (0x0008cc7d) list_medium_line_plain_t3_t

0x0bd5,	// (0x0007db77) list_medium_line_x2_t2_g2_g1_ParamLimits

0x0bd5,	// (0x0007db77) list_medium_line_x2_t2_g2_g1

0x0be1,	// (0x0007db83) list_medium_line_x2_t2_g2_g2_ParamLimits

0x0be1,	// (0x0007db83) list_medium_line_x2_t2_g2_g2

0x0001,

0xf24b,	// (0x0008c1ed) list_medium_line_x2_t2_g2_g_ParamLimits

0xf24b,	// (0x0008c1ed) list_medium_line_x2_t2_g2_g

0x0d87,	// (0x0007dd29) list_medium_line_x2_t2_g2_t1_ParamLimits

0x0d87,	// (0x0007dd29) list_medium_line_x2_t2_g2_t1

0x0c16,	// (0x0007dbb8) list_medium_line_x2_t2_g2_t2_ParamLimits

0x0c16,	// (0x0007dbb8) list_medium_line_x2_t2_g2_t2

0x0001,

0xfce2,	// (0x0008cc84) list_medium_line_x2_t2_g2_t_ParamLimits

0xfce2,	// (0x0008cc84) list_medium_line_x2_t2_g2_t

0x0bd5,	// (0x0007db77) list_medium_line_x2_t4_g2_g1_ParamLimits

0x0bd5,	// (0x0007db77) list_medium_line_x2_t4_g2_g1

0x1544,	// (0x0007e4e6) list_medium_line_x2_t4_g2_g2_ParamLimits

0x1544,	// (0x0007e4e6) list_medium_line_x2_t4_g2_g2

0x0001,

0xfce7,	// (0x0008cc89) list_medium_line_x2_t4_g2_g_ParamLimits

0xfce7,	// (0x0008cc89) list_medium_line_x2_t4_g2_g

0x1556,	// (0x0007e4f8) list_medium_line_x2_t4_g2_t1_ParamLimits

0x1556,	// (0x0007e4f8) list_medium_line_x2_t4_g2_t1

0x1570,	// (0x0007e512) list_medium_line_x2_t4_g2_t2_ParamLimits

0x1570,	// (0x0007e512) list_medium_line_x2_t4_g2_t2

0x1586,	// (0x0007e528) list_medium_line_x2_t4_g2_t3_ParamLimits

0x1586,	// (0x0007e528) list_medium_line_x2_t4_g2_t3

0x0c16,	// (0x0007dbb8) list_medium_line_x2_t4_g2_t4_ParamLimits

0x0c16,	// (0x0007dbb8) list_medium_line_x2_t4_g2_t4

0x0003,

0xfcec,	// (0x0008cc8e) list_medium_line_x2_t4_g2_t_ParamLimits

0xfcec,	// (0x0008cc8e) list_medium_line_x2_t4_g2_t

0x93a3,	// (0x00086345) list_medium_line_t3_right_iconx2_g1

0x9330,	// (0x000862d2) list_medium_line_t3_right_iconx2_g2

0x159b,	// (0x0007e53d) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfcf5,	// (0x0008cc97) list_medium_line_t3_right_iconx2_g

0x15a5,	// (0x0007e547) list_medium_line_t3_right_iconx2_t1

0x15b5,	// (0x0007e557) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfcfc,	// (0x0008cc9e) list_medium_line_t3_right_iconx2_t

0x0bd5,	// (0x0007db77) list_medium_line_x3_t4_g4_g1_ParamLimits

0x0bd5,	// (0x0007db77) list_medium_line_x3_t4_g4_g1

0x31d1,	// (0x00080173) list_medium_line_x3_t4_g4_g2_ParamLimits

0x31d1,	// (0x00080173) list_medium_line_x3_t4_g4_g2

0x0c71,	// (0x0007dc13) list_medium_line_x3_t4_g4_g3_ParamLimits

0x0c71,	// (0x0007dc13) list_medium_line_x3_t4_g4_g3

0x93ab,	// (0x0008634d) list_medium_line_x3_t4_g4_g4_ParamLimits

0x93ab,	// (0x0008634d) list_medium_line_x3_t4_g4_g4

0x0003,

0xfd01,	// (0x0008cca3) list_medium_line_x3_t4_g4_g_ParamLimits

0xfd01,	// (0x0008cca3) list_medium_line_x3_t4_g4_g

0x15c3,	// (0x0007e565) list_medium_line_x3_t4_g4_t1_ParamLimits

0x15c3,	// (0x0007e565) list_medium_line_x3_t4_g4_t1

0x15da,	// (0x0007e57c) list_medium_line_x3_t4_g4_t2_ParamLimits

0x15da,	// (0x0007e57c) list_medium_line_x3_t4_g4_t2

0x15ef,	// (0x0007e591) list_medium_line_x3_t4_g4_t3_ParamLimits

0x15ef,	// (0x0007e591) list_medium_line_x3_t4_g4_t3

0x1604,	// (0x0007e5a6) list_medium_line_x3_t4_g4_t4_ParamLimits

0x1604,	// (0x0007e5a6) list_medium_line_x3_t4_g4_t4

0x0003,

0xfd0a,	// (0x0008ccac) list_medium_line_x3_t4_g4_t_ParamLimits

0xfd0a,	// (0x0008ccac) list_medium_line_x3_t4_g4_t

0x1621,	// (0x0007e5c3) list_single_dyc_row_text_pane_t1_ParamLimits

0x1621,	// (0x0007e5c3) list_single_dyc_row_text_pane_t1

0x1664,	// (0x0007e606) list_single_dyc_row_text_pane_t2_ParamLimits

0x1664,	// (0x0007e606) list_single_dyc_row_text_pane_t2

0x16da,	// (0x0007e67c) list_single_dyc_row_text_pane_t3_ParamLimits

0x16da,	// (0x0007e67c) list_single_dyc_row_text_pane_t3

0x0005,

0xfd13,	// (0x0008ccb5) list_single_dyc_row_text_pane_t_ParamLimits

0xfd13,	// (0x0008ccb5) list_single_dyc_row_text_pane_t

0x17b9,	// (0x0007e75b) list_single_dyc_row_pane_g1_ParamLimits

0x17b9,	// (0x0007e75b) list_single_dyc_row_pane_g1

0x17c5,	// (0x0007e767) list_single_dyc_row_pane_g2_ParamLimits

0x17c5,	// (0x0007e767) list_single_dyc_row_pane_g2

0x17d1,	// (0x0007e773) list_single_dyc_row_pane_g3_ParamLimits

0x17d1,	// (0x0007e773) list_single_dyc_row_pane_g3

0x17dd,	// (0x0007e77f) list_single_dyc_row_pane_g4_ParamLimits

0x17dd,	// (0x0007e77f) list_single_dyc_row_pane_g4

0x0003,

0xfd20,	// (0x0008ccc2) list_single_dyc_row_pane_g_ParamLimits

0xfd20,	// (0x0008ccc2) list_single_dyc_row_pane_g

0x17e9,	// (0x0007e78b) list_single_dyc_row_text_pane_ParamLimits

0x17e9,	// (0x0007e78b) list_single_dyc_row_text_pane

0xa190,	// (0x00087132) bg_sp_fs_scroll_pane

0xe7ec,	// (0x0008b78e) thumb_sp_fs_scroll_pane

0x1009,	// (0x0007dfab) list_medium_line_g1_ParamLimits

0x1009,	// (0x0007dfab) list_medium_line_g1

0x1808,	// (0x0007e7aa) list_medium_line_t1_ParamLimits

0x1808,	// (0x0007e7aa) list_medium_line_t1

0x0bd5,	// (0x0007db77) list_medium_line_x2_g1_ParamLimits

0x0bd5,	// (0x0007db77) list_medium_line_x2_g1

0x31d1,	// (0x00080173) list_medium_line_x2_g2_ParamLimits

0x31d1,	// (0x00080173) list_medium_line_x2_g2

0x0001,

0xfd29,	// (0x0008cccb) list_medium_line_x2_g_ParamLimits

0xfd29,	// (0x0008cccb) list_medium_line_x2_g

0x181d,	// (0x0007e7bf) list_medium_line_x2_t1_ParamLimits

0x181d,	// (0x0007e7bf) list_medium_line_x2_t1

0x0bd5,	// (0x0007db77) list_medium_line_x3_g1_ParamLimits

0x0bd5,	// (0x0007db77) list_medium_line_x3_g1

0x31d1,	// (0x00080173) list_medium_line_x3_g2_ParamLimits

0x31d1,	// (0x00080173) list_medium_line_x3_g2

0x0001,

0xfd29,	// (0x0008cccb) list_medium_line_x3_g_ParamLimits

0xfd29,	// (0x0008cccb) list_medium_line_x3_g

0x181d,	// (0x0007e7bf) list_medium_line_x3_t1_ParamLimits

0x181d,	// (0x0007e7bf) list_medium_line_x3_t1

0xe7f5,	// (0x0008b797) thumb_sp_fs_scroll_pane_g1

0xe7fe,	// (0x0008b7a0) thumb_sp_fs_scroll_pane_g2

0xe807,	// (0x0008b7a9) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfd2e,	// (0x0008ccd0) thumb_sp_fs_scroll_pane_g

0xe7f5,	// (0x0008b797) bg_sp_fs_scroll_pane_g1

0xe7fe,	// (0x0008b7a0) bg_sp_fs_scroll_pane_g2

0xe807,	// (0x0008b7a9) bg_sp_fs_scroll_pane_g3

0x0002,

0xfd2e,	// (0x0008ccd0) bg_sp_fs_scroll_pane_g

0x0bd5,	// (0x0007db77) list_medium_line_x2_t3_g4_g1_ParamLimits

0x0bd5,	// (0x0007db77) list_medium_line_x2_t3_g4_g1

0x31dd,	// (0x0008017f) list_medium_line_x2_t3_g4_g2_ParamLimits

0x31dd,	// (0x0008017f) list_medium_line_x2_t3_g4_g2

0x31d1,	// (0x00080173) list_medium_line_x2_t3_g4_g3_ParamLimits

0x31d1,	// (0x00080173) list_medium_line_x2_t3_g4_g3

0x0be1,	// (0x0007db83) list_medium_line_x2_t3_g4_g4_ParamLimits

0x0be1,	// (0x0007db83) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2c7,	// (0x0008c269) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2c7,	// (0x0008c269) list_medium_line_x2_t3_g4_g

0x1833,	// (0x0007e7d5) list_medium_line_x2_t3_g4_t1_ParamLimits

0x1833,	// (0x0007e7d5) list_medium_line_x2_t3_g4_t1

0x1849,	// (0x0007e7eb) list_medium_line_x2_t3_g4_t2_ParamLimits

0x1849,	// (0x0007e7eb) list_medium_line_x2_t3_g4_t2

0x0c16,	// (0x0007dbb8) list_medium_line_x2_t3_g4_t3_ParamLimits

0x0c16,	// (0x0007dbb8) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd35,	// (0x0008ccd7) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd35,	// (0x0008ccd7) list_medium_line_x2_t3_g4_t

0x1009,	// (0x0007dfab) list_medium_line_g2_g1_ParamLimits

0x1009,	// (0x0007dfab) list_medium_line_g2_g1

0x7fe6,	// (0x00084f88) list_medium_line_g2_g2_ParamLimits

0x7fe6,	// (0x00084f88) list_medium_line_g2_g2

0x0001,

0xf9ee,	// (0x0008c990) list_medium_line_g2_g_ParamLimits

0xf9ee,	// (0x0008c990) list_medium_line_g2_g

0x1862,	// (0x0007e804) list_medium_line_g2_t1_ParamLimits

0x1862,	// (0x0007e804) list_medium_line_g2_t1

0x1009,	// (0x0007dfab) list_medium_line_t3_g2_g1_ParamLimits

0x1009,	// (0x0007dfab) list_medium_line_t3_g2_g1

0x7fe6,	// (0x00084f88) list_medium_line_t3_g2_g2_ParamLimits

0x7fe6,	// (0x00084f88) list_medium_line_t3_g2_g2

0x0001,

0xf9ee,	// (0x0008c990) list_medium_line_t3_g2_g_ParamLimits

0xf9ee,	// (0x0008c990) list_medium_line_t3_g2_g

0x1877,	// (0x0007e819) list_medium_line_t3_g2_t1_ParamLimits

0x1877,	// (0x0007e819) list_medium_line_t3_g2_t1

0x1891,	// (0x0007e833) list_medium_line_t3_g2_t2_ParamLimits

0x1891,	// (0x0007e833) list_medium_line_t3_g2_t2

0x18a7,	// (0x0007e849) list_medium_line_t3_g2_t3_ParamLimits

0x18a7,	// (0x0007e849) list_medium_line_t3_g2_t3

0x0002,

0xfd3c,	// (0x0008ccde) list_medium_line_t3_g2_t_ParamLimits

0xfd3c,	// (0x0008ccde) list_medium_line_t3_g2_t

0x9330,	// (0x000862d2) list_medium_line_right_icon_g1

0x18be,	// (0x0007e860) list_medium_line_right_icon_t1

0x1009,	// (0x0007dfab) list_medium_line_t2_g1_ParamLimits

0x1009,	// (0x0007dfab) list_medium_line_t2_g1

0x18cc,	// (0x0007e86e) list_medium_line_t2_t1_ParamLimits

0x18cc,	// (0x0007e86e) list_medium_line_t2_t1

0x18e6,	// (0x0007e888) list_medium_line_t2_t2_ParamLimits

0x18e6,	// (0x0007e888) list_medium_line_t2_t2

0x0001,

0xfd43,	// (0x0008cce5) list_medium_line_t2_t_ParamLimits

0xfd43,	// (0x0008cce5) list_medium_line_t2_t

0x1009,	// (0x0007dfab) list_medium_line_t3_g1_ParamLimits

0x1009,	// (0x0007dfab) list_medium_line_t3_g1

0x18fb,	// (0x0007e89d) list_medium_line_t3_t1_ParamLimits

0x18fb,	// (0x0007e89d) list_medium_line_t3_t1

0x1912,	// (0x0007e8b4) list_medium_line_t3_t2_ParamLimits

0x1912,	// (0x0007e8b4) list_medium_line_t3_t2

0x1927,	// (0x0007e8c9) list_medium_line_t3_t3_ParamLimits

0x1927,	// (0x0007e8c9) list_medium_line_t3_t3

0x0002,

0xfd48,	// (0x0008ccea) list_medium_line_t3_t_ParamLimits

0xfd48,	// (0x0008ccea) list_medium_line_t3_t

0x1009,	// (0x0007dfab) list_medium_line_g3_g1_ParamLimits

0x1009,	// (0x0007dfab) list_medium_line_g3_g1

0x93b7,	// (0x00086359) list_medium_line_g3_g2_ParamLimits

0x93b7,	// (0x00086359) list_medium_line_g3_g2

0x7fe6,	// (0x00084f88) list_medium_line_g3_g3_ParamLimits

0x7fe6,	// (0x00084f88) list_medium_line_g3_g3

0x0002,

0xfd4f,	// (0x0008ccf1) list_medium_line_g3_g_ParamLimits

0xfd4f,	// (0x0008ccf1) list_medium_line_g3_g

0x1939,	// (0x0007e8db) list_medium_line_g3_t1_ParamLimits

0x1939,	// (0x0007e8db) list_medium_line_g3_t1

0x1009,	// (0x0007dfab) list_medium_line_t2_g3_g1_ParamLimits

0x1009,	// (0x0007dfab) list_medium_line_t2_g3_g1

0x93b7,	// (0x00086359) list_medium_line_t2_g3_g2_ParamLimits

0x93b7,	// (0x00086359) list_medium_line_t2_g3_g2

0x7fe6,	// (0x00084f88) list_medium_line_t2_g3_g3_ParamLimits

0x7fe6,	// (0x00084f88) list_medium_line_t2_g3_g3

0x0002,

0xfd4f,	// (0x0008ccf1) list_medium_line_t2_g3_g_ParamLimits

0xfd4f,	// (0x0008ccf1) list_medium_line_t2_g3_g

0x194e,	// (0x0007e8f0) list_medium_line_t2_g3_t1_ParamLimits

0x194e,	// (0x0007e8f0) list_medium_line_t2_g3_t1

0x1968,	// (0x0007e90a) list_medium_line_t2_g3_t2_ParamLimits

0x1968,	// (0x0007e90a) list_medium_line_t2_g3_t2

0x0001,

0xfd56,	// (0x0008ccf8) list_medium_line_t2_g3_t_ParamLimits

0xfd56,	// (0x0008ccf8) list_medium_line_t2_g3_t

0x1009,	// (0x0007dfab) list_medium_line_t3_g3_g1_ParamLimits

0x1009,	// (0x0007dfab) list_medium_line_t3_g3_g1

0x93b7,	// (0x00086359) list_medium_line_t3_g3_g2_ParamLimits

0x93b7,	// (0x00086359) list_medium_line_t3_g3_g2

0x7fe6,	// (0x00084f88) list_medium_line_t3_g3_g3_ParamLimits

0x7fe6,	// (0x00084f88) list_medium_line_t3_g3_g3

0x0002,

0xfd4f,	// (0x0008ccf1) list_medium_line_t3_g3_g_ParamLimits

0xfd4f,	// (0x0008ccf1) list_medium_line_t3_g3_g

0x197e,	// (0x0007e920) list_medium_line_t3_g3_t1_ParamLimits

0x197e,	// (0x0007e920) list_medium_line_t3_g3_t1

0x1997,	// (0x0007e939) list_medium_line_t3_g3_t2_ParamLimits

0x1997,	// (0x0007e939) list_medium_line_t3_g3_t2

0x19ad,	// (0x0007e94f) list_medium_line_t3_g3_t3_ParamLimits

0x19ad,	// (0x0007e94f) list_medium_line_t3_g3_t3

0x0002,

0xfd5b,	// (0x0008ccfd) list_medium_line_t3_g3_t_ParamLimits

0xfd5b,	// (0x0008ccfd) list_medium_line_t3_g3_t

0x93a3,	// (0x00086345) list_medium_line_right_iconx2_g1

0x9330,	// (0x000862d2) list_medium_line_right_iconx2_g2

0x0001,

0xfd62,	// (0x0008cd04) list_medium_line_right_iconx2_g

0x93c3,	// (0x00086365) list_medium_line_right_iconx2_t1

0x93a3,	// (0x00086345) list_medium_line_t2_right_iconx2_g1

0x9330,	// (0x000862d2) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfd62,	// (0x0008cd04) list_medium_line_t2_right_iconx2_g

0x19c7,	// (0x0007e969) list_medium_line_t2_right_iconx2_t1

0x19d7,	// (0x0007e979) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfd67,	// (0x0008cd09) list_medium_line_t2_right_iconx2_t

0x19e5,	// (0x0007e987) list_medium_line_x4_t4_t1

0x19f3,	// (0x0007e995) list_medium_line_x4_t4_t2

0x1a03,	// (0x0007e9a5) list_medium_line_x4_t4_t3

0x1a13,	// (0x0007e9b5) list_medium_line_x4_t4_t4

0x0003,

0xfd6c,	// (0x0008cd0e) list_medium_line_x4_t4_t

0x93fb,	// (0x0008639d) tport_appsw_pane_ParamLimits

0x93fb,	// (0x0008639d) tport_appsw_pane

0x9409,	// (0x000863ab) tport_contact_pane_ParamLimits

0x9409,	// (0x000863ab) tport_contact_pane

0x9419,	// (0x000863bb) tport_listscroll_pane_ParamLimits

0x9419,	// (0x000863bb) tport_listscroll_pane

0x9429,	// (0x000863cb) cell_tport_appsw_pane_ParamLimits

0x9429,	// (0x000863cb) cell_tport_appsw_pane

0xcf46,	// (0x00089ee8) tport_appsw_pane_g1_ParamLimits

0xcf46,	// (0x00089ee8) tport_appsw_pane_g1

0xe810,	// (0x0008b7b2) tport_contact_pane_g1

0xe819,	// (0x0008b7bb) tport_contact_pane_t1

0xe827,	// (0x0008b7c9) tport_contact_pane_t2

0x0001,

0xfd75,	// (0x0008cd17) tport_contact_pane_t

0xe835,	// (0x0008b7d7) list_tport_pane

0xe83e,	// (0x0008b7e0) scroll_pane_cp_030

0x945e,	// (0x00086400) cell_tport_appsw_pane_g1

0x946e,	// (0x00086410) cell_tport_appsw_pane_t1

0x947c,	// (0x0008641e) grid_highlight_pane_cp019

0x9484,	// (0x00086426) list_tport_double_graphic_pane_ParamLimits

0x9484,	// (0x00086426) list_tport_double_graphic_pane

0xa8a9,	// (0x0008784b) list_highlight_pane_cp023_ParamLimits

0xa8a9,	// (0x0008784b) list_highlight_pane_cp023

0x9491,	// (0x00086433) list_tport_double_graphic_pane_g1_ParamLimits

0x9491,	// (0x00086433) list_tport_double_graphic_pane_g1

0x949e,	// (0x00086440) list_tport_double_graphic_pane_t1_ParamLimits

0x949e,	// (0x00086440) list_tport_double_graphic_pane_t1

0x94b3,	// (0x00086455) list_tport_double_graphic_pane_t2_ParamLimits

0x94b3,	// (0x00086455) list_tport_double_graphic_pane_t2

0x0001,

0xfd81,	// (0x0008cd23) list_tport_double_graphic_pane_t_ParamLimits

0xfd81,	// (0x0008cd23) list_tport_double_graphic_pane_t

0xa190,	// (0x00087132) main_cale_note_pane

0x780a,	// (0x000847ac) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x780a,	// (0x000847ac) cell_vitu2_function_top_wide_pane_cp01

0x8fa9,	// (0x00085f4b) wait_bar_pane_cp05_ParamLimits

0xa8a9,	// (0x0008784b) listscroll_cmail_pane

0xe84f,	// (0x0008b7f1) list_cmail_pane

0x94cf,	// (0x00086471) list_cmail_body_pane

0x94e8,	// (0x0008648a) list_single_cmail_header_caption_pane

0x9509,	// (0x000864ab) list_single_cmail_header_detail_pane_ParamLimits

0x9509,	// (0x000864ab) list_single_cmail_header_detail_pane

0x953a,	// (0x000864dc) list_single_cmail_header_caption_pane_t1

0x1a23,	// (0x0007e9c5) list_single_cmail_header_detail_pane_g1_ParamLimits

0x1a23,	// (0x0007e9c5) list_single_cmail_header_detail_pane_g1

0x9555,	// (0x000864f7) list_single_cmail_header_detail_pane_g2_ParamLimits

0x9555,	// (0x000864f7) list_single_cmail_header_detail_pane_g2

0x0002,

0xfd86,	// (0x0008cd28) list_single_cmail_header_detail_pane_g_ParamLimits

0xfd86,	// (0x0008cd28) list_single_cmail_header_detail_pane_g

0x1a3b,	// (0x0007e9dd) list_single_cmail_header_detail_pane_t1_ParamLimits

0x1a3b,	// (0x0007e9dd) list_single_cmail_header_detail_pane_t1

0x1aad,	// (0x0007ea4f) list_single_cmail_header_editor_pane_bg_ParamLimits

0x1aad,	// (0x0007ea4f) list_single_cmail_header_editor_pane_bg

0xe318,	// (0x0008b2ba) list_cmail_body_pane_g1

0xe873,	// (0x0008b815) list_cmail_body_pane_t1

0xd6ab,	// (0x0008a64d) list_single_cmail_header_editor_pane_bg_g1

0xad6b,	// (0x00087d0d) list_single_cmail_header_editor_pane_bg_g1_copy1

0xd6bb,	// (0x0008a65d) list_single_cmail_header_editor_pane_bg_g1_copy2

0xd6b3,	// (0x0008a655) list_single_cmail_header_editor_pane_bg_g1_copy3

0xd8d5,	// (0x0008a877) list_single_cmail_header_editor_pane_bg_g1_copy4

0xd6db,	// (0x0008a67d) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xd6cb,	// (0x0008a66d) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xd6d3,	// (0x0008a675) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xad4b,	// (0x00087ced) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0x9561,	// (0x00086503) calenote_gesture_pane_ParamLimits

0x9561,	// (0x00086503) calenote_gesture_pane

0x957b,	// (0x0008651d) calenote_window_pane_ParamLimits

0x957b,	// (0x0008651d) calenote_window_pane

0xe881,	// (0x0008b823) popup_note_window_cp01

0x9593,	// (0x00086535) calenote_swipe_1_pane_ParamLimits

0x9593,	// (0x00086535) calenote_swipe_1_pane

0x9316,	// (0x000862b8) calenote_swipe_2_pane_ParamLimits

0x9316,	// (0x000862b8) calenote_swipe_2_pane

0xe670,	// (0x0008b612) calenote_swipe_1_pane_g1_ParamLimits

0xe670,	// (0x0008b612) calenote_swipe_1_pane_g1

0xe67d,	// (0x0008b61f) calenote_swipe_1_pane_g2_ParamLimits

0xe67d,	// (0x0008b61f) calenote_swipe_1_pane_g2

0x0001,

0xfcaa,	// (0x0008cc4c) calenote_swipe_1_pane_g_ParamLimits

0xfcaa,	// (0x0008cc4c) calenote_swipe_1_pane_g

0xe893,	// (0x0008b835) calenote_swipe_1_pane_t1_ParamLimits

0xe893,	// (0x0008b835) calenote_swipe_1_pane_t1

0xe670,	// (0x0008b612) calenote_swipe_2_pane_g1_ParamLimits

0xe670,	// (0x0008b612) calenote_swipe_2_pane_g1

0xe8b2,	// (0x0008b854) calenote_swipe_2_pane_g2_ParamLimits

0xe8b2,	// (0x0008b854) calenote_swipe_2_pane_g2

0x0001,

0xfd92,	// (0x0008cd34) calenote_swipe_2_pane_g_ParamLimits

0xfd92,	// (0x0008cd34) calenote_swipe_2_pane_g

0xe8be,	// (0x0008b860) calenote_swipe_2_pane_t1_ParamLimits

0xe8be,	// (0x0008b860) calenote_swipe_2_pane_t1

0xa190,	// (0x00087132) main_mup_navstr_pane

0x6545,	// (0x000834e7) main_mup3_pane_t7_ParamLimits

0x6545,	// (0x000834e7) main_mup3_pane_t7

0x6f48,	// (0x00083eea) main_mp4_pane_g6_ParamLimits

0x6f48,	// (0x00083eea) main_mp4_pane_g6

0x72b8,	// (0x0008425a) main_image3_pane_t4_ParamLimits

0x72b8,	// (0x0008425a) main_image3_pane_t4

0x95a6,	// (0x00086548) popup_navstr_preview_pane_ParamLimits

0x95a6,	// (0x00086548) popup_navstr_preview_pane

0x95b2,	// (0x00086554) scroll_navstr_pane_ParamLimits

0x95b2,	// (0x00086554) scroll_navstr_pane

0xa190,	// (0x00087132) bg_popup_preview_window_pane_cp04

0xe8e5,	// (0x0008b887) popup_navstr_preview_pane_t1

0x95be,	// (0x00086560) scroll_navstr_pane_g1_ParamLimits

0x95be,	// (0x00086560) scroll_navstr_pane_g1

0x95cb,	// (0x0008656d) scroll_navstr_pane_t1_ParamLimits

0x95cb,	// (0x0008656d) scroll_navstr_pane_t1

0xe88a,	// (0x0008b82c) bg_button_pane_cp014

0xe88a,	// (0x0008b82c) bg_button_pane_cp030

0x1375,	// (0x0007e317) list_double_fisheye_pane_g4_ParamLimits

0x1375,	// (0x0007e317) list_double_fisheye_pane_g4

0x1381,	// (0x0007e323) list_double_fisheye_pane_g5_ParamLimits

0x1381,	// (0x0007e323) list_double_fisheye_pane_g5

0xe857,	// (0x0008b7f9) sp_fs_scroll_pane_cp03

0xe748,	// (0x0008b6ea) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xe754,	// (0x0008b6f6) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfcc7,	// (0x0008cc69) main_sp_fs_ctrlbar_pane_g_ParamLimits

0xe760,	// (0x0008b702) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0x94c5,	// (0x00086467) sp_fs_scroll_pane_cp02

0xaa58,	// (0x000879fa) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0xaa58,	// (0x000879fa) popup_sp_fs_calendar_preview_list_single_pane

0xa190,	// (0x00087132) main_cam6_pano_pane

0xa8a9,	// (0x0008784b) main_mup3_pane_ParamLimits

0xa190,	// (0x00087132) main_phacti_pane

0x8e7c,	// (0x00085e1e) bg_button_pane_cp11

0x8e94,	// (0x00085e36) main_mobtv_info_pane_g2_ParamLimits

0x8e94,	// (0x00085e36) main_mobtv_info_pane_g2

0x0001,

0xfc27,	// (0x0008cbc9) main_mobtv_info_pane_g_ParamLimits

0xfc27,	// (0x0008cbc9) main_mobtv_info_pane_g

0x9046,	// (0x00085fe8) sc_clock_pane_t5_ParamLimits

0x9046,	// (0x00085fe8) sc_clock_pane_t5

0x90ef,	// (0x00086091) main_radioblah_pane_g1_ParamLimits

0xe5bc,	// (0x0008b55e) main_radioblah_pane_t3_ParamLimits

0xe5bc,	// (0x0008b55e) main_radioblah_pane_t3

0xe5d4,	// (0x0008b576) main_radioblah_pane_t4_ParamLimits

0xe5d4,	// (0x0008b576) main_radioblah_pane_t4

0x910d,	// (0x000860af) main_radioblah_text_pane_ParamLimits

0x910d,	// (0x000860af) main_radioblah_text_pane

0x911a,	// (0x000860bc) main_radioblah_info_pane_g1_ParamLimits

0x91b3,	// (0x00086155) main_radioblah_info_pane_t4_ParamLimits

0x91b3,	// (0x00086155) main_radioblah_info_pane_t4

0xa8a9,	// (0x0008784b) main_sp_fs_calendar_pane

0x95dd,	// (0x0008657f) main_phacti_pane_g1

0x95e5,	// (0x00086587) phacti_note_pane_ParamLimits

0x95e5,	// (0x00086587) phacti_note_pane

0xe8fc,	// (0x0008b89e) phacti_term_pane_ParamLimits

0xe8fc,	// (0x0008b89e) phacti_term_pane

0xe911,	// (0x0008b8b3) phacti_note_pane_t1_ParamLimits

0xe911,	// (0x0008b8b3) phacti_note_pane_t1

0x1ac4,	// (0x0007ea66) phacti_term_pane_g1

0x1acc,	// (0x0007ea6e) phacti_term_pane_t1_ParamLimits

0x1acc,	// (0x0007ea6e) phacti_term_pane_t1

0xe928,	// (0x0008b8ca) popup_sp_fs_calendar_preview_list_single_pane_g1

0xe930,	// (0x0008b8d2) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfd9c,	// (0x0008cd3e) popup_sp_fs_calendar_preview_list_single_pane_g

0xe938,	// (0x0008b8da) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xe938,	// (0x0008b8da) popup_sp_fs_calendar_preview_list_single_pane_t1

0xe94e,	// (0x0008b8f0) aid_popup_sp_fs_bg_corner_pane

0xccb1,	// (0x00089c53) popup_sp_fs_calendar_preview_bg_pane_g1

0xa190,	// (0x00087132) popup_sp_fs_calendar_preview_bg_pane

0xe956,	// (0x0008b8f8) popup_sp_fs_calendar_preview_list_pane

0xc860,	// (0x00089802) bg_main_sp_fs_cale_pane_ParamLimits

0xc860,	// (0x00089802) bg_main_sp_fs_cale_pane

0x1aff,	// (0x0007eaa1) listscroll_cale_mrui_pane_ParamLimits

0x1aff,	// (0x0007eaa1) listscroll_cale_mrui_pane

0x1b14,	// (0x0007eab6) listscroll_sp_fs_schedule_track_pane

0x1b1d,	// (0x0007eabf) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0x1b1d,	// (0x0007eabf) main_sp_fs_ctrlbar_pane_cp01

0xe95e,	// (0x0008b900) main_sp_fs_ribbon_pane

0x1b30,	// (0x0007ead2) popup_sp_fs_cale_preview_window

0x9644,	// (0x000865e6) list_single_sp_fs_schedule_track_pane_ParamLimits

0x9644,	// (0x000865e6) list_single_sp_fs_schedule_track_pane

0x2138,	// (0x0007f0da) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0x2138,	// (0x0007f0da) bg_sp_fs_highlight_list_pane_cp03

0x9659,	// (0x000865fb) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0x9659,	// (0x000865fb) list_single_sp_fs_schedule_track_pane_g1

0x9665,	// (0x00086607) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0x9665,	// (0x00086607) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfda1,	// (0x0008cd43) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfda1,	// (0x0008cd43) list_single_sp_fs_schedule_track_pane_g

0x9671,	// (0x00086613) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0x9671,	// (0x00086613) list_single_sp_fs_schedule_track_pane_t1

0x968f,	// (0x00086631) sp_fs_schedule_track_pane_ParamLimits

0x968f,	// (0x00086631) sp_fs_schedule_track_pane

0xe966,	// (0x0008b908) sp_fs_schedule_track_pane_g1

0xe96e,	// (0x0008b910) sp_fs_schedule_track_pane_g2

0xe976,	// (0x0008b918) sp_fs_schedule_track_pane_g3

0xe97e,	// (0x0008b920) sp_fs_schedule_track_pane_g4

0xe986,	// (0x0008b928) sp_fs_schedule_track_pane_g5

0x0004,

0xfda6,	// (0x0008cd48) sp_fs_schedule_track_pane_g

0xd6ab,	// (0x0008a64d) bg_sp_fs_schedule_viewer_highlight_g1

0xad6b,	// (0x00087d0d) bg_sp_fs_schedule_viewer_highlight_g2

0xd6b3,	// (0x0008a655) bg_sp_fs_schedule_viewer_highlight_g3

0xd6bb,	// (0x0008a65d) bg_sp_fs_schedule_viewer_highlight_g4

0xd8d5,	// (0x0008a877) bg_sp_fs_schedule_viewer_highlight_g5

0xd6cb,	// (0x0008a66d) bg_sp_fs_schedule_viewer_highlight_g6

0xd6d3,	// (0x0008a675) bg_sp_fs_schedule_viewer_highlight_g7

0xd6db,	// (0x0008a67d) bg_sp_fs_schedule_viewer_highlight_g8

0xad4b,	// (0x00087ced) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfdb1,	// (0x0008cd53) bg_sp_fs_schedule_viewer_highlight_g

0xa190,	// (0x00087132) bg_main_sp_fs_ribbon_pane

0x96a1,	// (0x00086643) main_sp_fs_ribbon_pane_g1

0xe98e,	// (0x0008b930) main_sp_fs_ribbon_pane_t1

0x96aa,	// (0x0008664c) main_sp_fs_ribbon_pane_t2

0xe99d,	// (0x0008b93f) main_sp_fs_ribbon_pane_t3

0x0002,

0xfdc4,	// (0x0008cd66) main_sp_fs_ribbon_pane_t

0xe9ac,	// (0x0008b94e) main_sp_fs_ribbon_scheduler_pane

0xe9b4,	// (0x0008b956) bg_main_sp_fs_ribbon_pane_g1

0xe9bd,	// (0x0008b95f) bg_main_sp_fs_ribbon_pane_g2

0xe9c6,	// (0x0008b968) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfdcb,	// (0x0008cd6d) bg_main_sp_fs_ribbon_pane_g

0xe9ce,	// (0x0008b970) main_sp_fs_ribbon_scheduler_pane_g1

0xe9d7,	// (0x0008b979) main_sp_fs_ribbon_scheduler_pane_g2

0xe9e0,	// (0x0008b982) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfdd2,	// (0x0008cd74) main_sp_fs_ribbon_scheduler_pane_g

0xe9e9,	// (0x0008b98b) list_cale_mrui_pane

0x96b9,	// (0x0008665b) sp_fs_scroll_pane_cp07_ParamLimits

0x96b9,	// (0x0008665b) sp_fs_scroll_pane_cp07

0x96d5,	// (0x00086677) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0x96d5,	// (0x00086677) bg_sp_fs_schedule_viewer_highlight

0xe9f6,	// (0x0008b998) list_single_sp_fs_schedule_track_pane_cp01

0xe9fe,	// (0x0008b9a0) list_sp_fs_schedule_track_pane

0xea06,	// (0x0008b9a8) sp_fs_scroll_pane_cp06_ParamLimits

0xea06,	// (0x0008b9a8) sp_fs_scroll_pane_cp06

0xccb1,	// (0x00089c53) bgmain_sp_fs_calendar_pane_g1

0x1b42,	// (0x0007eae4) list_single_cale_mrui_pane_ParamLimits

0x1b42,	// (0x0007eae4) list_single_cale_mrui_pane

0x1b57,	// (0x0007eaf9) list_single_cale_mrui_row_pane_ParamLimits

0x1b57,	// (0x0007eaf9) list_single_cale_mrui_row_pane

0x1b6d,	// (0x0007eb0f) list_single_cale_mrui_row_pane_g1_ParamLimits

0x1b6d,	// (0x0007eb0f) list_single_cale_mrui_row_pane_g1

0x1b99,	// (0x0007eb3b) list_single_cale_mrui_row_pane_t1_ParamLimits

0x1b99,	// (0x0007eb3b) list_single_cale_mrui_row_pane_t1

0x1bab,	// (0x0007eb4d) list_single_cale_mrui_row_pane_t2_ParamLimits

0x1bab,	// (0x0007eb4d) list_single_cale_mrui_row_pane_t2

0x1c11,	// (0x0007ebb3) list_single_cale_mrui_row_pane_t3_ParamLimits

0x1c11,	// (0x0007ebb3) list_single_cale_mrui_row_pane_t3

0x1c40,	// (0x0007ebe2) list_single_cale_mrui_row_pane_t4_ParamLimits

0x1c40,	// (0x0007ebe2) list_single_cale_mrui_row_pane_t4

0x0003,

0xfde0,	// (0x0008cd82) list_single_cale_mrui_row_pane_t_ParamLimits

0xfde0,	// (0x0008cd82) list_single_cale_mrui_row_pane_t

0x1c6f,	// (0x0007ec11) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x1c6f,	// (0x0007ec11) list_single_cmail_header_editor_pane_bg_cp01

0x1c93,	// (0x0007ec35) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x1c93,	// (0x0007ec35) list_single_cmail_header_editor_pane_bg_cp02

0x96ee,	// (0x00086690) main_radioblah_text_pane_t1_ParamLimits

0x96ee,	// (0x00086690) main_radioblah_text_pane_t1

0xea25,	// (0x0008b9c7) cam6_indi_pane_cp01

0xea2d,	// (0x0008b9cf) cam6_mode_pane_cp01

0xea35,	// (0x0008b9d7) cam6_pano_pane

0xea3e,	// (0x0008b9e0) cam6_zoom_pane_cp01

0xea48,	// (0x0008b9ea) cam6_pano_image_pane

0xea51,	// (0x0008b9f3) cam6_pano_pane_g1

0xe318,	// (0x0008b2ba) cam6_pano_pane_g2

0xea5a,	// (0x0008b9fc) cam6_pano_pane_g3

0xea63,	// (0x0008ba05) cam6_pano_pane_g4

0xd233,	// (0x0008a1d5) cam6_pano_pane_g5

0xea6c,	// (0x0008ba0e) cam6_pano_pane_g6

0xea74,	// (0x0008ba16) cam6_pano_pane_g7

0xea7c,	// (0x0008ba1e) cam6_pano_pane_g8

0xea85,	// (0x0008ba27) cam6_pano_pane_g9

0x0008,

0xfde9,	// (0x0008cd8b) cam6_pano_pane_g

0xa190,	// (0x00087132) main_browser_tag_pane

0xe8dd,	// (0x0008b87f) grid_navstr_albumart_pane

0xea90,	// (0x0008ba32) cell_navstr_albumart_pane_ParamLimits

0xea90,	// (0x0008ba32) cell_navstr_albumart_pane

0xeaaf,	// (0x0008ba51) cell_navstr_albumart_pane_g1

0xc66d,	// (0x0008960f) cell_navstr_albumart_pane_g2

0xc67d,	// (0x0008961f) cell_navstr_albumart_pane_g3

0xc675,	// (0x00089617) cell_navstr_albumart_pane_g4

0x0003,

0xfdfc,	// (0x0008cd9e) cell_navstr_albumart_pane_g

0x9708,	// (0x000866aa) bt_list_pane_ParamLimits

0x9708,	// (0x000866aa) bt_list_pane

0x9721,	// (0x000866c3) bt_list_pane_t1

0x9730,	// (0x000866d2) bt_list_pane_t2

0x0001,

0xfe05,	// (0x0008cda7) bt_list_pane_t

0xa190,	// (0x00087132) main_cale_prevew_pane

0x973f,	// (0x000866e1) popup_cale_preview_window_ParamLimits

0x973f,	// (0x000866e1) popup_cale_preview_window

0xa8a9,	// (0x0008784b) bg_popup_preview_window_pane_cp05_ParamLimits

0xa8a9,	// (0x0008784b) bg_popup_preview_window_pane_cp05

0xeab7,	// (0x0008ba59) list_cale_preview_pane_ParamLimits

0xeab7,	// (0x0008ba59) list_cale_preview_pane

0x975a,	// (0x000866fc) list_double_cale_preview_pane_ParamLimits

0x975a,	// (0x000866fc) list_double_cale_preview_pane

0x976e,	// (0x00086710) list_single_cale_preview_pane_ParamLimits

0x976e,	// (0x00086710) list_single_cale_preview_pane

0x9786,	// (0x00086728) list_single_cale_preview_pane_g1

0x978e,	// (0x00086730) list_single_cale_preview_pane_t1_ParamLimits

0x978e,	// (0x00086730) list_single_cale_preview_pane_t1

0x97a3,	// (0x00086745) list_double_cale_preview_pane_g1

0x97ab,	// (0x0008674d) list_double_cale_preview_pane_t1_ParamLimits

0x97ab,	// (0x0008674d) list_double_cale_preview_pane_t1

0x97c0,	// (0x00086762) list_double_cale_preview_pane_t2_ParamLimits

0x97c0,	// (0x00086762) list_double_cale_preview_pane_t2

0x0001,

0xfe0a,	// (0x0008cdac) list_double_cale_preview_pane_t_ParamLimits

0xfe0a,	// (0x0008cdac) list_double_cale_preview_pane_t

0xa190,	// (0x00087132) main_ezdial_pane

0xa8a9,	// (0x0008784b) main_sp_fs_email_pane_ParamLimits

0x9338,	// (0x000862da) cmail_ddmenu_btn01_pane_ParamLimits

0x9338,	// (0x000862da) cmail_ddmenu_btn01_pane

0x9355,	// (0x000862f7) cmail_ddmenu_btn02_pane_ParamLimits

0x9355,	// (0x000862f7) cmail_ddmenu_btn02_pane

0x9373,	// (0x00086315) cmail_ddmenu_btn03_pane_ParamLimits

0x9373,	// (0x00086315) cmail_ddmenu_btn03_pane

0x1433,	// (0x0007e3d5) main_sp_fs_ctrlbar_pane_ParamLimits

0x144d,	// (0x0007e3ef) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0x94cf,	// (0x00086471) list_cmail_body_pane_ParamLimits

0x954a,	// (0x000864ec) bg_button_pane_cp12

0xe866,	// (0x0008b808) list_single_cmail_header_detail_pane_g3_ParamLimits

0xe866,	// (0x0008b808) list_single_cmail_header_detail_pane_g3

0x1a89,	// (0x0007ea2b) list_single_cmail_header_detail_pane_t2_ParamLimits

0x1a89,	// (0x0007ea2b) list_single_cmail_header_detail_pane_t2

0x0001,

0xfd8d,	// (0x0008cd2f) list_single_cmail_header_detail_pane_t_ParamLimits

0xfd8d,	// (0x0008cd2f) list_single_cmail_header_detail_pane_t

0x1ae1,	// (0x0007ea83) phacti_term_pane_t2_ParamLimits

0x1ae1,	// (0x0007ea83) phacti_term_pane_t2

0x0001,

0xfd97,	// (0x0008cd39) phacti_term_pane_t_ParamLimits

0xfd97,	// (0x0008cd39) phacti_term_pane_t

0xeac3,	// (0x0008ba65) aid_size_list_single_double

0x97d8,	// (0x0008677a) popup_ezdial_listscroll_window

0x97fa,	// (0x0008679c) popup_number_entry_window_cp01

0xb452,	// (0x000883f4) bg_popup_call_pane_cp09

0xeacf,	// (0x0008ba71) ezdial_list_pane

0xead7,	// (0x0008ba79) scroll_pane_cp23

0xca90,	// (0x00089a32) bg_button_pane_cp028_ParamLimits

0xca90,	// (0x00089a32) bg_button_pane_cp028

0x9808,	// (0x000867aa) cmail_ddmenu_btn01_pane_g1_ParamLimits

0x9808,	// (0x000867aa) cmail_ddmenu_btn01_pane_g1

0x981a,	// (0x000867bc) cmail_ddmenu_btn01_pane_g2_ParamLimits

0x981a,	// (0x000867bc) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfe0f,	// (0x0008cdb1) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfe0f,	// (0x0008cdb1) cmail_ddmenu_btn01_pane_g

0xeadf,	// (0x0008ba81) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xeadf,	// (0x0008ba81) cmail_ddmenu_btn01_pane_t1

0xc860,	// (0x00089802) bg_button_pane_cp029_ParamLimits

0xc860,	// (0x00089802) bg_button_pane_cp029

0x9826,	// (0x000867c8) cmail_ddmenu_btn02_pane_g1_ParamLimits

0x9826,	// (0x000867c8) cmail_ddmenu_btn02_pane_g1

0x983e,	// (0x000867e0) cmail_ddmenu_btn02_pane_t1_ParamLimits

0x983e,	// (0x000867e0) cmail_ddmenu_btn02_pane_t1

0x2138,	// (0x0007f0da) bg_button_pane_cp031_ParamLimits

0x2138,	// (0x0007f0da) bg_button_pane_cp031

0x9826,	// (0x000867c8) cmail_ddmenu_btn03_pane_g1_ParamLimits

0x9826,	// (0x000867c8) cmail_ddmenu_btn03_pane_g1

0x983e,	// (0x000867e0) cmail_ddmenu_btn03_pane_t1_ParamLimits

0x983e,	// (0x000867e0) cmail_ddmenu_btn03_pane_t1

0x7161,	// (0x00084103) cell_dialer2_keypad_pane_t1_ParamLimits

0x717b,	// (0x0008411d) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x717b,	// (0x0008411d) cell_dialer2_keypad_pane_t1_copy1

0x8ced,	// (0x00085c8f) ncimui_group_button_pane

0xa8a9,	// (0x0008784b) main_sp_fs_calendar_pane_ParamLimits

0x94e8,	// (0x0008648a) list_single_cmail_header_caption_pane_ParamLimits

0x1af6,	// (0x0007ea98) aid_recal_txt_sm_pane

0xa190,	// (0x00087132) mian_recal_day_pane

0x1b30,	// (0x0007ead2) popup_sp_fs_cale_preview_window_ParamLimits

0xeaf5,	// (0x0008ba97) list_recal_day_pane

0x1ccb,	// (0x0007ec6d) list_single_recal_day_pane_ParamLimits

0x1ccb,	// (0x0007ec6d) list_single_recal_day_pane

0xeb1c,	// (0x0008babe) list_single_recal_day_pane_g1_ParamLimits

0xeb1c,	// (0x0008babe) list_single_recal_day_pane_g1

0x1cdd,	// (0x0007ec7f) list_single_recal_day_pane_g2_ParamLimits

0x1cdd,	// (0x0007ec7f) list_single_recal_day_pane_g2

0x1ce9,	// (0x0007ec8b) list_single_recal_day_pane_g3_ParamLimits

0x1ce9,	// (0x0007ec8b) list_single_recal_day_pane_g3

0x1cf5,	// (0x0007ec97) list_single_recal_day_pane_g4_ParamLimits

0x1cf5,	// (0x0007ec97) list_single_recal_day_pane_g4

0x1d03,	// (0x0007eca5) list_single_recal_day_pane_g5_ParamLimits

0x1d03,	// (0x0007eca5) list_single_recal_day_pane_g5

0x1d19,	// (0x0007ecbb) list_single_recal_day_pane_g6_ParamLimits

0x1d19,	// (0x0007ecbb) list_single_recal_day_pane_g6

0x0004,

0xfe1e,	// (0x0008cdc0) list_single_recal_day_pane_g_ParamLimits

0xfe1e,	// (0x0008cdc0) list_single_recal_day_pane_g

0x1d2d,	// (0x0007eccf) list_single_recal_day_pane_t1

0x1d3f,	// (0x0007ece1) list_single_recal_day_pane_t2

0x0001,

0xfe29,	// (0x0008cdcb) list_single_recal_day_pane_t

0x9862,	// (0x00086804) ncimui_query_button_pane_ParamLimits

0x9862,	// (0x00086804) ncimui_query_button_pane

0x9872,	// (0x00086814) ncimui_query_button_pane_t1_ParamLimits

0x9872,	// (0x00086814) ncimui_query_button_pane_t1

0xeb28,	// (0x0008baca) ncimui_query_button_pane_t2_ParamLimits

0xeb28,	// (0x0008baca) ncimui_query_button_pane_t2

0x0001,

0xfe2e,	// (0x0008cdd0) ncimui_query_button_pane_t_ParamLimits

0xfe2e,	// (0x0008cdd0) ncimui_query_button_pane_t

0x9885,	// (0x00086827) query_button_pane_ParamLimits

0x9885,	// (0x00086827) query_button_pane

0xa190,	// (0x00087132) bg_button_pane_cp0028

0xeb3b,	// (0x0008badd) query_button_pane_t1

0x5544,	// (0x000824e6) main_tport_pane_ParamLimits

0x93d1,	// (0x00086373) bg_popup_window_pane_cp01_ParamLimits

0x93d1,	// (0x00086373) bg_popup_window_pane_cp01

0x93df,	// (0x00086381) heading_pane_cp08_ParamLimits

0x93df,	// (0x00086381) heading_pane_cp08

0x93ed,	// (0x0008638f) heading_pane_cp07_ParamLimits

0x93ed,	// (0x0008638f) heading_pane_cp07

0x945e,	// (0x00086400) cell_tport_appsw_pane_g2

0x0002,

0xfd7a,	// (0x0008cd1c) cell_tport_appsw_pane_g

0x0de8,	// (0x0007dd8a) input_candi_list_open_g1

0xaf1f,	// (0x00087ec1) list_cale_time_pane_g6_ParamLimits

0xaf1f,	// (0x00087ec1) list_cale_time_pane_g6

0x5fcf,	// (0x00082f71) aid_size_touch_calib_1_ParamLimits

0x5fcf,	// (0x00082f71) aid_size_touch_calib_1

0x5fdb,	// (0x00082f7d) aid_size_touch_calib_2_ParamLimits

0x5fdb,	// (0x00082f7d) aid_size_touch_calib_2

0x5fe9,	// (0x00082f8b) aid_size_touch_calib_3_ParamLimits

0x5fe9,	// (0x00082f8b) aid_size_touch_calib_3

0x5ff9,	// (0x00082f9b) aid_size_touch_calib_4_ParamLimits

0x5ff9,	// (0x00082f9b) aid_size_touch_calib_4

0x6007,	// (0x00082fa9) main_touch_calib_button_group_pane_ParamLimits

0x6007,	// (0x00082fa9) main_touch_calib_button_group_pane

0x6015,	// (0x00082fb7) main_touch_calib_pane_g1_ParamLimits

0x6021,	// (0x00082fc3) main_touch_calib_pane_g2_ParamLimits

0x602d,	// (0x00082fcf) main_touch_calib_pane_g3_ParamLimits

0x6039,	// (0x00082fdb) main_touch_calib_pane_g4_ParamLimits

0xf744,	// (0x0008c6e6) main_touch_calib_pane_g_ParamLimits

0x6045,	// (0x00082fe7) main_touch_calib_pane_t1_ParamLimits

0x605c,	// (0x00082ffe) main_touch_calib_pane_t2_ParamLimits

0x6075,	// (0x00083017) main_touch_calib_pane_t3_ParamLimits

0x608b,	// (0x0008302d) main_touch_calib_pane_t4_ParamLimits

0x60a1,	// (0x00083043) main_touch_calib_pane_t5_ParamLimits

0xf74d,	// (0x0008c6ef) main_touch_calib_pane_t_ParamLimits

0xcfe9,	// (0x00089f8b) list_single_fp_cale_pane_g3_ParamLimits

0xcfe9,	// (0x00089f8b) list_single_fp_cale_pane_g3

0xa8a9,	// (0x0008784b) bg_button_pane_cp012_ParamLimits

0xa8a9,	// (0x0008784b) bg_vkb2_func_pane_cp03_ParamLimits

0x7f78,	// (0x00084f1a) cell_vitu2_function_top_pane_g1_ParamLimits

0xa8a9,	// (0x0008784b) bg_vkb2_func_pane_cp04_ParamLimits

0x8c73,	// (0x00085c15) main_ncimui_button_group_pane_ParamLimits

0x8c73,	// (0x00085c15) main_ncimui_button_group_pane

0x8cdb,	// (0x00085c7d) main_ncimui_pane_t3_ParamLimits

0x8cdb,	// (0x00085c7d) main_ncimui_pane_t3

0xe8f3,	// (0x0008b895) phacti_button_group_pane

0xeac3,	// (0x0008ba65) aid_size_list_single_double_ParamLimits

0x97d8,	// (0x0008677a) popup_ezdial_listscroll_window_ParamLimits

0x97fa,	// (0x0008679c) popup_number_entry_window_cp01_ParamLimits

0x9892,	// (0x00086834) phacti_button_pane_ParamLimits

0x9892,	// (0x00086834) phacti_button_pane

0xa190,	// (0x00087132) bg_button_pane_cp14

0xeb49,	// (0x0008baeb) phacti_button_pane_t1

0x98a3,	// (0x00086845) main_touch_calib_button_pane_ParamLimits

0x98a3,	// (0x00086845) main_touch_calib_button_pane

0xa942,	// (0x000878e4) bg_button_pane_cp18_ParamLimits

0xa942,	// (0x000878e4) bg_button_pane_cp18

0xeb57,	// (0x0008baf9) main_touch_calib_button_pane_t1_ParamLimits

0xeb57,	// (0x0008baf9) main_touch_calib_button_pane_t1

0xeb6d,	// (0x0008bb0f) main_touch_calib_button_pane_t2_ParamLimits

0xeb6d,	// (0x0008bb0f) main_touch_calib_button_pane_t2

0x0001,

0xfe33,	// (0x0008cdd5) main_touch_calib_button_pane_t_ParamLimits

0xfe33,	// (0x0008cdd5) main_touch_calib_button_pane_t

0xa190,	// (0x00087132) cell_ncimui_button_pane

0xa190,	// (0x00087132) bg_button_pane_cp032

0xeb8b,	// (0x0008bb2d) cell_ncimui_button_pane_t1

0x71d7,	// (0x00084179) image3_infobar_pane_ParamLimits

0x71d7,	// (0x00084179) image3_infobar_pane

0x9068,	// (0x0008600a) fs_bigclock_status_pane_ParamLimits

0x9068,	// (0x0008600a) fs_bigclock_status_pane

0x9075,	// (0x00086017) main_fs_bigclock_clock_pane_ParamLimits

0x9075,	// (0x00086017) main_fs_bigclock_clock_pane

0x908b,	// (0x0008602d) main_fs_bigclock_indi_pane_ParamLimits

0x908b,	// (0x0008602d) main_fs_bigclock_indi_pane

0x90bd,	// (0x0008605f) main_fs_bigclock_swipe_pane_ParamLimits

0x90bd,	// (0x0008605f) main_fs_bigclock_swipe_pane

0xa190,	// (0x00087132) main_fs_clock_dumped_data

0xe425,	// (0x0008b3c7) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xe425,	// (0x0008b3c7) list_single_fs_bigclock_indicator_pane_g1

0xe44f,	// (0x0008b3f1) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xe44f,	// (0x0008b3f1) list_single_fs_bigclock_indicator_pane_g2

0xe469,	// (0x0008b40b) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xe469,	// (0x0008b40b) list_single_fs_bigclock_indicator_pane_g3

0xe483,	// (0x0008b425) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xe483,	// (0x0008b425) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfc5b,	// (0x0008cbfd) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfc5b,	// (0x0008cbfd) list_single_fs_bigclock_indicator_pane_g

0xe4ae,	// (0x0008b450) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xe4ae,	// (0x0008b450) list_single_fs_bigclock_indicator_pane_t1

0xe4d6,	// (0x0008b478) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xe4d6,	// (0x0008b478) list_single_fs_bigclock_indicator_pane_t2

0xe4fe,	// (0x0008b4a0) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xe4fe,	// (0x0008b4a0) list_single_fs_bigclock_indicator_pane_t3

0xe526,	// (0x0008b4c8) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xe526,	// (0x0008b4c8) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfc66,	// (0x0008cc08) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfc66,	// (0x0008cc08) list_single_fs_bigclock_indicator_pane_t

0xeb99,	// (0x0008bb3b) image3_infobar_fav_pane_ParamLimits

0xeb99,	// (0x0008bb3b) image3_infobar_fav_pane

0xeba9,	// (0x0008bb4b) image3_infobar_loc_pane_ParamLimits

0xeba9,	// (0x0008bb4b) image3_infobar_loc_pane

0xebbf,	// (0x0008bb61) image3_infobar_time_pane_ParamLimits

0xebbf,	// (0x0008bb61) image3_infobar_time_pane

0xccb1,	// (0x00089c53) image3_infobar_time_pane_g1

0xebcf,	// (0x0008bb71) image3_infobar_time_pane_t1

0xccb1,	// (0x00089c53) image3_infobar_loc_pane_g1

0xebdd,	// (0x0008bb7f) image3_infobar_loc_pane_g2

0x0001,

0xfe38,	// (0x0008cdda) image3_infobar_loc_pane_g

0xebe5,	// (0x0008bb87) image3_infobar_loc_pane_t1

0xccb1,	// (0x00089c53) image3_infobar_fav_pane_g1

0xebf3,	// (0x0008bb95) image3_infobar_fav_pane_g2

0x0001,

0xfe3d,	// (0x0008cddf) image3_infobar_fav_pane_g

0xebfb,	// (0x0008bb9d) fs_bigclock_status_battery_pane

0xec04,	// (0x0008bba6) fs_bigclock_status_signal_pane

0xec0d,	// (0x0008bbaf) fs_bigclock_status_title_pane

0xec16,	// (0x0008bbb8) fs_bigclock_status_signal_pane_g1

0xec1f,	// (0x0008bbc1) fs_bigclock_status_signal_pane_g2

0x0001,

0xfe42,	// (0x0008cde4) fs_bigclock_status_signal_pane_g

0xec27,	// (0x0008bbc9) fs_bigclock_status_battery_pane_g1

0xec30,	// (0x0008bbd2) fs_bigclock_status_battery_pane_g2

0x0001,

0xfe47,	// (0x0008cde9) fs_bigclock_status_battery_pane_g

0xec38,	// (0x0008bbda) fs_bigclock_status_title_pane_t1

0xccb1,	// (0x00089c53) main_fs_bigclock_clock_pane_g1

0xec46,	// (0x0008bbe8) main_fs_bigclock_clock_pane_g2

0xec46,	// (0x0008bbe8) main_fs_bigclock_clock_pane_g3

0xec46,	// (0x0008bbe8) main_fs_bigclock_clock_pane_g4

0x0003,

0xfe4c,	// (0x0008cdee) main_fs_bigclock_clock_pane_g

0xec4e,	// (0x0008bbf0) main_fs_bigclock_clock_pane_t1

0xec5c,	// (0x0008bbfe) main_fs_bigclock_clock_pane_t2

0x0001,

0xfe55,	// (0x0008cdf7) main_fs_bigclock_clock_pane_t

0x98b3,	// (0x00086855) list_single_fs_bigclock_indicator_pane_ParamLimits

0x98b3,	// (0x00086855) list_single_fs_bigclock_indicator_pane

0x98c4,	// (0x00086866) list_single_fs_bigclock_pane_ParamLimits

0x98c4,	// (0x00086866) list_single_fs_bigclock_pane

0xec74,	// (0x0008bc16) main_fs_bigclock_indicator_pane_t1

0xec83,	// (0x0008bc25) list_single_fs_bigclock_pane_g1

0xec8b,	// (0x0008bc2d) list_single_fs_bigclock_pane_t1

0xccb1,	// (0x00089c53) main_fs_bigclock_swipe_pane_g1

0xecce,	// (0x0008bc70) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfe66,	// (0x0008ce08) main_fs_bigclock_swipe_pane_g

0xecd6,	// (0x0008bc78) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xecd6,	// (0x0008bc78) main_fs_bigclock_swipe_pane_t1

0x4454,	// (0x000813f6) call_type_pane_ParamLimits

0xa190,	// (0x00087132) main_btmg_pane

0x96e2,	// (0x00086684) list_single_cale_mrui_row_pane_g2_ParamLimits

0x96e2,	// (0x00086684) list_single_cale_mrui_row_pane_g2

0x0002,

0xfdd9,	// (0x0008cd7b) list_single_cale_mrui_row_pane_g_ParamLimits

0xfdd9,	// (0x0008cd7b) list_single_cale_mrui_row_pane_g

0x1cb9,	// (0x0007ec5b) list_recal_vselct_arw_lo_pane

0xeb14,	// (0x0008bab6) list_recal_vselct_arw_up_pane

0x1cc1,	// (0x0007ec63) list_recal_vselct_pane

0x991a,	// (0x000868bc) btmg_button_pane

0x9926,	// (0x000868c8) main_btmg_pane_g1

0xa190,	// (0x00087132) bg_button_pane_cp044

0xecf3,	// (0x0008bc95) btmg_button_pane_t1

0xc84c,	// (0x000897ee) aid_listscroll_gen

0xa8a9,	// (0x0008784b) main_cntbar_detail_pane

0xe847,	// (0x0008b7e9) list_cmail_folder_pane

0xe857,	// (0x0008b7f9) sp_fs_scroll_pane_cp03_ParamLimits

0x1d51,	// (0x0007ecf3) list_single_fs_dyc_pane_cp01_ParamLimits

0x1d51,	// (0x0007ecf3) list_single_fs_dyc_pane_cp01

0xed01,	// (0x0008bca3) aid_size_cmail_indent

0x1d6e,	// (0x0007ed10) list_single_dyc_row_pane_cp01

0x994e,	// (0x000868f0) cntbar_detail_list_pane_ParamLimits

0x994e,	// (0x000868f0) cntbar_detail_list_pane

0x998e,	// (0x00086930) main_cntbar_detail_cont_pane_ParamLimits

0x998e,	// (0x00086930) main_cntbar_detail_cont_pane

0x4448,	// (0x000813ea) scroll_pane_cp032_ParamLimits

0x4448,	// (0x000813ea) scroll_pane_cp032

0x999a,	// (0x0008693c) cntbar_detail_list_event_pane_ParamLimits

0x999a,	// (0x0008693c) cntbar_detail_list_event_pane

0x995c,	// (0x000868fe) cntbar_detail_list_shct_pane

0xadb9,	// (0x00087d5b) aid_list_gen

0xed0a,	// (0x0008bcac) aid_scroll

0xed13,	// (0x0008bcb5) aid_size_touch_scroll_bar

0x8511,	// (0x000854b3) aid_list_double

0xed1c,	// (0x0008bcbe) aid_list_single

0x84ff,	// (0x000854a1) aid_list_single_lg

0x1d77,	// (0x0007ed19) aid_list_z_g_a_sm

0x99aa,	// (0x0008694c) aid_list_z_g_d

0x1d7f,	// (0x0007ed21) aid_txt_z_prm

0x1d8d,	// (0x0007ed2f) aid_txt_z_prm_cp01

0x1d9b,	// (0x0007ed3d) aid_txt_z_sec

0x99b2,	// (0x00086954) main_cntbar_detail_cont_pane_g1_ParamLimits

0x99b2,	// (0x00086954) main_cntbar_detail_cont_pane_g1

0x99bf,	// (0x00086961) main_cntbar_detail_cont_pane_g2_ParamLimits

0x99bf,	// (0x00086961) main_cntbar_detail_cont_pane_g2

0x0001,

0xfe6b,	// (0x0008ce0d) main_cntbar_detail_cont_pane_g_ParamLimits

0xfe6b,	// (0x0008ce0d) main_cntbar_detail_cont_pane_g

0xed25,	// (0x0008bcc7) main_cntbar_detail_cont_pane_t1

0xed33,	// (0x0008bcd5) main_cntbar_detail_cont_pane_t2

0xed41,	// (0x0008bce3) main_cntbar_detail_cont_pane_t3

0x0002,

0xfe70,	// (0x0008ce12) main_cntbar_detail_cont_pane_t

0x99cb,	// (0x0008696d) cell_cntbar_detail_list_shct_pane_ParamLimits

0x99cb,	// (0x0008696d) cell_cntbar_detail_list_shct_pane

0xed4f,	// (0x0008bcf1) cntbar_detail_list_shct_pane_g1

0xed58,	// (0x0008bcfa) cntbar_detail_list_shct_pane_g2

0x0001,

0xfe77,	// (0x0008ce19) cntbar_detail_list_shct_pane_g

0x99df,	// (0x00086981) cntbar_detail_list_event_pane_g1_ParamLimits

0x99df,	// (0x00086981) cntbar_detail_list_event_pane_g1

0x99eb,	// (0x0008698d) cntbar_detail_list_event_pane_g2_ParamLimits

0x99eb,	// (0x0008698d) cntbar_detail_list_event_pane_g2

0x0005,

0xfe7c,	// (0x0008ce1e) cntbar_detail_list_event_pane_g_ParamLimits

0xfe7c,	// (0x0008ce1e) cntbar_detail_list_event_pane_g

0x9a59,	// (0x000869fb) cntbar_detail_list_event_pane_t1_ParamLimits

0x9a59,	// (0x000869fb) cntbar_detail_list_event_pane_t1

0x9a6e,	// (0x00086a10) cntbar_detail_list_event_pane_t2_ParamLimits

0x9a6e,	// (0x00086a10) cntbar_detail_list_event_pane_t2

0x0002,

0xfe89,	// (0x0008ce2b) cntbar_detail_list_event_pane_t_ParamLimits

0xfe89,	// (0x0008ce2b) cntbar_detail_list_event_pane_t

0xccb1,	// (0x00089c53) cell_cntbar_detail_list_shct_pane_g1

0x4827,	// (0x000817c9) navi_pane_mv_g3

0xa8a9,	// (0x0008784b) main_cntbar_detail_pane_ParamLimits

0xa190,	// (0x00087132) main_notif_wgt_pane

0x6e81,	// (0x00083e23) aid_tch_main_mp4_pane_g4

0x70c0,	// (0x00084062) popup_slider_window_cp02

0x1caf,	// (0x0007ec51) list_recal_day_event_pane

0x992e,	// (0x000868d0) cntbar_detail_btn_pane_ParamLimits

0x992e,	// (0x000868d0) cntbar_detail_btn_pane

0x993e,	// (0x000868e0) cntbar_detail_btn_pane_cp01_ParamLimits

0x993e,	// (0x000868e0) cntbar_detail_btn_pane_cp01

0x995c,	// (0x000868fe) cntbar_detail_list_shct_pane_ParamLimits

0x9968,	// (0x0008690a) cntbar_detail_pane_g1_ParamLimits

0x9968,	// (0x0008690a) cntbar_detail_pane_g1

0x9978,	// (0x0008691a) cntbar_detail_pane_t1_ParamLimits

0x9978,	// (0x0008691a) cntbar_detail_pane_t1

0x99f7,	// (0x00086999) cntbar_detail_list_event_pane_g3_ParamLimits

0x99f7,	// (0x00086999) cntbar_detail_list_event_pane_g3

0x9a0f,	// (0x000869b1) cntbar_detail_list_event_pane_g4_ParamLimits

0x9a0f,	// (0x000869b1) cntbar_detail_list_event_pane_g4

0x9a27,	// (0x000869c9) cntbar_detail_list_event_pane_g5_ParamLimits

0x9a27,	// (0x000869c9) cntbar_detail_list_event_pane_g5

0x9a3f,	// (0x000869e1) cntbar_detail_list_event_pane_g6_ParamLimits

0x9a3f,	// (0x000869e1) cntbar_detail_list_event_pane_g6

0x9a83,	// (0x00086a25) cntbar_detail_list_event_pane_t3_ParamLimits

0x9a83,	// (0x00086a25) cntbar_detail_list_event_pane_t3

0x9a95,	// (0x00086a37) popup_notif_wgt_window_ParamLimits

0x9a95,	// (0x00086a37) popup_notif_wgt_window

0x9aa5,	// (0x00086a47) popup_submenu_window_cp01_ParamLimits

0x9aa5,	// (0x00086a47) popup_submenu_window_cp01

0xb452,	// (0x000883f4) bg_popup_window_pane_cp10

0xed61,	// (0x0008bd03) listscroll_notif_wgt_pane

0xed73,	// (0x0008bd15) list_notif_wgt_window

0xed7c,	// (0x0008bd1e) scroll_pane_cp033

0x9ab5,	// (0x00086a57) list_notif_wgt_row_pane_ParamLimits

0x9ab5,	// (0x00086a57) list_notif_wgt_row_pane

0xed85,	// (0x0008bd27) aid_size_list_notif_wgt_del

0xed92,	// (0x0008bd34) list_notif_wgt_row_pane_g1

0xed9e,	// (0x0008bd40) list_notif_wgt_row_pane_g2

0xedaa,	// (0x0008bd4c) list_notif_wgt_row_pane_g3

0x0002,

0xfe90,	// (0x0008ce32) list_notif_wgt_row_pane_g

0xedb7,	// (0x0008bd59) list_notif_wgt_row_pane_t1

0xedcc,	// (0x0008bd6e) list_notif_wgt_row_pane_t2

0xedde,	// (0x0008bd80) list_notif_wgt_row_pane_t3

0x0002,

0xfe97,	// (0x0008ce39) list_notif_wgt_row_pane_t

0xd8dd,	// (0x0008a87f) list_recal_day_event_pane_g1

0xedf0,	// (0x0008bd92) list_recal_day_event_pane_t1

0xa190,	// (0x00087132) bg_button_pane_cp045

0xedff,	// (0x0008bda1) cntbar_detail_btn_pane_t1

0xc860,	// (0x00089802) main_callh_pane_ParamLimits

0xc860,	// (0x00089802) main_callh_pane

0xa190,	// (0x00087132) main_coverflow0_pane

0xa190,	// (0x00087132) main_wgtman_pane

0x90d5,	// (0x00086077) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x90d5,	// (0x00086077) main_fs_bigclock_unlock_btn_pane

0x9456,	// (0x000863f8) bg_button_pane_cp16

0x9466,	// (0x00086408) cell_tport_appsw_pane_g3

0x9ac6,	// (0x00086a68) cf0_flow_pane_ParamLimits

0x9ac6,	// (0x00086a68) cf0_flow_pane

0xee0d,	// (0x0008bdaf) listscroll_cf0_pane

0xee18,	// (0x0008bdba) main_cf0_pane_g1

0x9ad5,	// (0x00086a77) main_cf0_pane_t1_ParamLimits

0x9ad5,	// (0x00086a77) main_cf0_pane_t1

0x9ae9,	// (0x00086a8b) main_cf0_pane_t2_ParamLimits

0x9ae9,	// (0x00086a8b) main_cf0_pane_t2

0x0001,

0xfea3,	// (0x0008ce45) main_cf0_pane_t_ParamLimits

0xfea3,	// (0x0008ce45) main_cf0_pane_t

0xee2a,	// (0x0008bdcc) scroll_pane_cp11

0x9afd,	// (0x00086a9f) cf0_flow_pane_g1

0x9b05,	// (0x00086aa7) cf0_flow_pane_g2

0x0001,

0xfea8,	// (0x0008ce4a) cf0_flow_pane_g

0x9b0d,	// (0x00086aaf) cf0_flow_pane_t1

0xa190,	// (0x00087132) main_call6_pane

0xa190,	// (0x00087132) main_calllock_pane

0x9b1b,	// (0x00086abd) call6_btn_grp_pane_ParamLimits

0x9b1b,	// (0x00086abd) call6_btn_grp_pane

0x9b28,	// (0x00086aca) call6_pane_g1_ParamLimits

0x9b28,	// (0x00086aca) call6_pane_g1

0x9b38,	// (0x00086ada) popup_call6_1st_window_ParamLimits

0x9b38,	// (0x00086ada) popup_call6_1st_window

0x9b46,	// (0x00086ae8) popup_call6_2nd_window_ParamLimits

0x9b46,	// (0x00086ae8) popup_call6_2nd_window

0x9b54,	// (0x00086af6) cell_call6_btn_pane_ParamLimits

0x9b54,	// (0x00086af6) cell_call6_btn_pane

0xb452,	// (0x000883f4) bg_popup_call2_in_pane_cp03

0xee35,	// (0x0008bdd7) popup_call6_1st_window_g1

0xee3d,	// (0x0008bddf) popup_call6_1st_window_g2

0xee45,	// (0x0008bde7) popup_call6_1st_window_g3

0x0002,

0xfead,	// (0x0008ce4f) popup_call6_1st_window_g

0xee4d,	// (0x0008bdef) popup_call6_1st_window_t1

0xee5c,	// (0x0008bdfe) popup_call6_1st_window_t2

0xee6c,	// (0x0008be0e) popup_call6_1st_window_t3

0x0002,

0xfeb4,	// (0x0008ce56) popup_call6_1st_window_t

0xb452,	// (0x000883f4) bg_popup_call2_in_pane_cp04

0xee35,	// (0x0008bdd7) popup_call6_2nd_window_g1

0xee3d,	// (0x0008bddf) popup_call6_2nd_window_g2

0xee45,	// (0x0008bde7) popup_call6_2nd_window_g3

0x0002,

0xfead,	// (0x0008ce4f) popup_call6_2nd_window_g

0xee4d,	// (0x0008bdef) popup_call6_2nd_window_t1

0xa190,	// (0x00087132) bg_button_pane_cp15

0xee7c,	// (0x0008be1e) cell_call6_btn_pane_g1

0xee85,	// (0x0008be27) cell_call6_btn_pane_t1

0x9b63,	// (0x00086b05) listscroll_wgtman_pane_ParamLimits

0x9b63,	// (0x00086b05) listscroll_wgtman_pane

0x9b7f,	// (0x00086b21) wgtman_btn_pane_ParamLimits

0x9b7f,	// (0x00086b21) wgtman_btn_pane

0xb2fe,	// (0x000882a0) aid_scroll_copy1

0xee94,	// (0x0008be36) list_wgtman_pane

0x9bb4,	// (0x00086b56) wgtman_btn_pane_g1_ParamLimits

0x9bb4,	// (0x00086b56) wgtman_btn_pane_g1

0x9bdc,	// (0x00086b7e) wgtman_btn_pane_t1_ParamLimits

0x9bdc,	// (0x00086b7e) wgtman_btn_pane_t1

0xee9e,	// (0x0008be40) wgtman_btn_pane_t2_ParamLimits

0xee9e,	// (0x0008be40) wgtman_btn_pane_t2

0x0001,

0xfebb,	// (0x0008ce5d) wgtman_btn_pane_t_ParamLimits

0xfebb,	// (0x0008ce5d) wgtman_btn_pane_t

0x9c13,	// (0x00086bb5) listrow_wgtman_pane_ParamLimits

0x9c13,	// (0x00086bb5) listrow_wgtman_pane

0x9c27,	// (0x00086bc9) listrow_wgtman_pane_g1

0x9c34,	// (0x00086bd6) listrow_wgtman_pane_g2

0x0001,

0xfec0,	// (0x0008ce62) listrow_wgtman_pane_g

0x1da9,	// (0x0007ed4b) listrow_wgtman_pane_t1

0x1dc1,	// (0x0007ed63) listrow_wgtman_pane_t2

0x0001,

0xfec5,	// (0x0008ce67) listrow_wgtman_pane_t

0x1de7,	// (0x0007ed89) wait_bar_pane_cp09

0xeeb5,	// (0x0008be57) main_calllock_btn_pane

0xeebf,	// (0x0008be61) main_calllock_pane_g1

0xa190,	// (0x00087132) bg_button_pane_cp17

0xeecb,	// (0x0008be6d) main_calllock_btn_pane_g1

0xeed4,	// (0x0008be76) main_calllock_btn_pane_t1

0xa190,	// (0x00087132) main_dialer3_pane

0xa190,	// (0x00087132) main_fmrd2_pane

0xccb1,	// (0x00089c53) main_fs_bigclock_unlock_btn_pane_g1

0xeeeb,	// (0x0008be8d) main_fs_bigclock_unlock_btn_pane_t1

0x9c52,	// (0x00086bf4) area_fmrd2_info_pane_ParamLimits

0x9c52,	// (0x00086bf4) area_fmrd2_info_pane

0x9c5e,	// (0x00086c00) area_fmrd2_visual_pane_ParamLimits

0x9c5e,	// (0x00086c00) area_fmrd2_visual_pane

0x9c6c,	// (0x00086c0e) fmrd2_indi_pane_ParamLimits

0x9c6c,	// (0x00086c0e) fmrd2_indi_pane

0x9c79,	// (0x00086c1b) area_fmrd2_visual_pane_g1

0x9c81,	// (0x00086c23) area_fmrd2_visual_pane_t1

0x9c91,	// (0x00086c33) area_fmrd2_visual_pane_t2

0x9ca1,	// (0x00086c43) area_fmrd2_visual_pane_t3

0x0002,

0xfecf,	// (0x0008ce71) area_fmrd2_visual_pane_t

0x9cb1,	// (0x00086c53) area_fmrd2_info_pane_g1

0x9cb9,	// (0x00086c5b) area_fmrd2_info_pane_t1

0x9cc9,	// (0x00086c6b) area_fmrd2_info_pane_t2

0x9cd9,	// (0x00086c7b) area_fmrd2_info_pane_t3

0x9ce9,	// (0x00086c8b) area_fmrd2_info_pane_t4

0x0003,

0xfed6,	// (0x0008ce78) area_fmrd2_info_pane_t

0x9cf9,	// (0x00086c9b) fmrd2_indi_pane_t1

0x9d09,	// (0x00086cab) fmrd2_indi_pane_t2

0x9d19,	// (0x00086cbb) fmrd2_indi_pane_t3

0x0002,

0xfedf,	// (0x0008ce81) fmrd2_indi_pane_t

0xe492,	// (0x0008b434) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xe492,	// (0x0008b434) list_single_fs_bigclock_indicator_pane_g5

0xe53b,	// (0x0008b4dd) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xe53b,	// (0x0008b4dd) list_single_fs_bigclock_indicator_pane_t5

0x95fb,	// (0x0008659d) aid_cell_bcale_month_pane_ParamLimits

0x95fb,	// (0x0008659d) aid_cell_bcale_month_pane

0x9619,	// (0x000865bb) bcale_month_pane_ParamLimits

0x9619,	// (0x000865bb) bcale_month_pane

0x9635,	// (0x000865d7) bcale_preview_pane_ParamLimits

0x9635,	// (0x000865d7) bcale_preview_pane

0xec8b,	// (0x0008bc2d) list_single_fs_bigclock_pane_t1_ParamLimits

0xecaa,	// (0x0008bc4c) list_single_fs_bigclock_pane_t2_ParamLimits

0xecaa,	// (0x0008bc4c) list_single_fs_bigclock_pane_t2

0x0001,

0xfe61,	// (0x0008ce03) list_single_fs_bigclock_pane_t_ParamLimits

0xfe61,	// (0x0008ce03) list_single_fs_bigclock_pane_t

0xeee3,	// (0x0008be85) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfeca,	// (0x0008ce6c) main_fs_bigclock_unlock_btn_pane_g

0x9d29,	// (0x00086ccb) aid_dia3_key_size_ParamLimits

0x9d29,	// (0x00086ccb) aid_dia3_key_size

0x9d35,	// (0x00086cd7) aid_dia3_listrow_size_ParamLimits

0x9d35,	// (0x00086cd7) aid_dia3_listrow_size

0x9d45,	// (0x00086ce7) dia3_keypad_fun_pane_ParamLimits

0x9d45,	// (0x00086ce7) dia3_keypad_fun_pane

0x9d55,	// (0x00086cf7) dia3_keypad_num_pane_ParamLimits

0x9d55,	// (0x00086cf7) dia3_keypad_num_pane

0x9d65,	// (0x00086d07) dia3_listscroll_pane_ParamLimits

0x9d65,	// (0x00086d07) dia3_listscroll_pane

0x9d73,	// (0x00086d15) dia3_numentry_pane_ParamLimits

0x9d73,	// (0x00086d15) dia3_numentry_pane

0xeef9,	// (0x0008be9b) dia3_list_pane

0xef04,	// (0x0008bea6) scroll_pane_cp12

0xa190,	// (0x00087132) bg_dia3_numentry_pane

0x9d81,	// (0x00086d23) dia3_numentry_pane_t1

0x9d90,	// (0x00086d32) cell_dia3_key_num_pane

0x9d98,	// (0x00086d3a) cell_dia3_key0_fun_pane_ParamLimits

0x9d98,	// (0x00086d3a) cell_dia3_key0_fun_pane

0x9da5,	// (0x00086d47) cell_dia3_key1_fun_pane_ParamLimits

0x9da5,	// (0x00086d47) cell_dia3_key1_fun_pane

0x9db2,	// (0x00086d54) dia3_listrow_pane

0xe17c,	// (0x0008b11e) bg_dia3_numentry_pane_g1

0xa190,	// (0x00087132) bg_button_pane_cp21

0xef0f,	// (0x0008beb1) cell_dia3_key_num_pane_t1

0xef1d,	// (0x0008bebf) cell_dia3_key_num_pane_t2

0xef2c,	// (0x0008bece) cell_dia3_key_num_pane_t3

0xef3b,	// (0x0008bedd) cell_dia3_key_num_pane_t4

0x0003,

0xfee6,	// (0x0008ce88) cell_dia3_key_num_pane_t

0xa190,	// (0x00087132) bg_button_pane_cp19

0x9dbf,	// (0x00086d61) cell_dia3_key0_fun_pane_g1

0xa190,	// (0x00087132) bg_button_pane_cp20

0x9dc7,	// (0x00086d69) cell_dia3_key1_fun_pane_g1

0x9dcf,	// (0x00086d71) area_left_week_number_pane

0x9de2,	// (0x00086d84) area_top_day_name_pane

0x9df0,	// (0x00086d92) frame_month_view_pane

0xef4a,	// (0x0008beec) grid_month_view_pane

0x9e05,	// (0x00086da7) cell_top_day_name_pane_ParamLimits

0x9e05,	// (0x00086da7) cell_top_day_name_pane

0x9e21,	// (0x00086dc3) cell_area_left_week_number_pane_ParamLimits

0x9e21,	// (0x00086dc3) cell_area_left_week_number_pane

0x9e42,	// (0x00086de4) cell_month_view_pane_ParamLimits

0x9e42,	// (0x00086de4) cell_month_view_pane

0xef58,	// (0x0008befa) frm_month_g1

0x9e6e,	// (0x00086e10) frm_month_g2

0x9e7f,	// (0x00086e21) frm_month_g3

0x9e90,	// (0x00086e32) frm_month_g4

0x9ea1,	// (0x00086e43) frm_month_g5

0x9eb2,	// (0x00086e54) frm_month_g6

0x9ec5,	// (0x00086e67) frm_month_g7

0xef65,	// (0x0008bf07) frm_month_g8

0x9ed8,	// (0x00086e7a) frm_month_g9

0x9ee5,	// (0x00086e87) frm_month_g10

0x9ef2,	// (0x00086e94) frm_month_g11

0x9eff,	// (0x00086ea1) frm_month_g12

0x9f0c,	// (0x00086eae) frm_month_g13

0x9f1b,	// (0x00086ebd) frm_month_g14

0x9f2a,	// (0x00086ecc) frm_month_g15

0x9f39,	// (0x00086edb) frm_month_g16

0x000f,

0xfeef,	// (0x0008ce91) frm_month_g

0xef72,	// (0x0008bf14) cell_top_day_name_pane_t1

0x9f48,	// (0x00086eea) cell_area_left_week_number_pane_g1

0x9f57,	// (0x00086ef9) cell_area_left_week_number_pane_t1

0xcee1,	// (0x00089e83) cell_month_view_pane_g1

0x9f6d,	// (0x00086f0f) cell_month_view_pane_t1

0xa190,	// (0x00087132) main_fps_pane

0xe710,	// (0x0008b6b2) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xe710,	// (0x0008b6b2) cmail_ddmenu_btn02_pane_cp1

0xe72c,	// (0x0008b6ce) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xe72c,	// (0x0008b6ce) cmail_ddmenu_btn02_pane_cp2

0x9832,	// (0x000867d4) cmail_ddmenu_btn02_pane_g2_ParamLimits

0x9832,	// (0x000867d4) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfe14,	// (0x0008cdb6) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfe14,	// (0x0008cdb6) cmail_ddmenu_btn02_pane_g

0x9850,	// (0x000867f2) cmail_ddmenu_btn02_pane_t2_ParamLimits

0x9850,	// (0x000867f2) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfe19,	// (0x0008cdbb) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfe19,	// (0x0008cdbb) cmail_ddmenu_btn02_pane_t

0x9f83,	// (0x00086f25) fps_text_pane_ParamLimits

0x9f83,	// (0x00086f25) fps_text_pane

0x9f90,	// (0x00086f32) main_fps_pane_g1_ParamLimits

0x9f90,	// (0x00086f32) main_fps_pane_g1

0x9f9c,	// (0x00086f3e) wait_bar_pane_cp010_ParamLimits

0x9f9c,	// (0x00086f3e) wait_bar_pane_cp010

0x9fa8,	// (0x00086f4a) fps_text_pane_t1_ParamLimits

0x9fa8,	// (0x00086f4a) fps_text_pane_t1

0x74e6,	// (0x00084488) cam4_image_uncrop_pane_g1

0x74ef,	// (0x00084491) cam4_image_uncrop_pane_g2

0x74f8,	// (0x0008449a) cam4_image_uncrop_pane_g3

0x7501,	// (0x000844a3) cam4_image_uncrop_pane_g4

0x0003,

0xf8dc,	// (0x0008c87e) cam4_image_uncrop_pane_g

0x9db2,	// (0x00086d54) dia3_listrow_pane_ParamLimits

0xa190,	// (0x00087132) main_phob2_pane

0x9438,	// (0x000863da) cell_tport_appsw_pane_cp02_ParamLimits

0x9438,	// (0x000863da) cell_tport_appsw_pane_cp02

0x9447,	// (0x000863e9) cell_tport_appsw_pane_cp03_ParamLimits

0x9447,	// (0x000863e9) cell_tport_appsw_pane_cp03

0xa190,	// (0x00087132) phob2_contact_card_pane

0xa190,	// (0x00087132) phob2_listscroll_pane

0xef85,	// (0x0008bf27) phob2_list_pane

0xef8d,	// (0x0008bf2f) scroll_pane_cp034

0x9fc1,	// (0x00086f63) phob2_cc_data_pane_ParamLimits

0x9fc1,	// (0x00086f63) phob2_cc_data_pane

0x9fdd,	// (0x00086f7f) phob2_cc_listscroll_pane_ParamLimits

0x9fdd,	// (0x00086f7f) phob2_cc_listscroll_pane

0x9ff9,	// (0x00086f9b) list_double_large_graphic_phob2_pane_ParamLimits

0x9ff9,	// (0x00086f9b) list_double_large_graphic_phob2_pane

0xa011,	// (0x00086fb3) list_double_large_graphic_phob2_pane_g1_ParamLimits

0xa011,	// (0x00086fb3) list_double_large_graphic_phob2_pane_g1

0x1df9,	// (0x0007ed9b) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x1df9,	// (0x0007ed9b) list_double_large_graphic_phob2_pane_g2

0x0001,

0xff10,	// (0x0008ceb2) list_double_large_graphic_phob2_pane_g_ParamLimits

0xff10,	// (0x0008ceb2) list_double_large_graphic_phob2_pane_g

0x1e05,	// (0x0007eda7) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x1e05,	// (0x0007eda7) list_double_large_graphic_phob2_pane_t1

0x1e1a,	// (0x0007edbc) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x1e1a,	// (0x0007edbc) list_double_large_graphic_phob2_pane_t2

0x0001,

0xff15,	// (0x0008ceb7) list_double_large_graphic_phob2_pane_t_ParamLimits

0xff15,	// (0x0008ceb7) list_double_large_graphic_phob2_pane_t

0xa190,	// (0x00087132) list_highlight_pane_cp024

0xa027,	// (0x00086fc9) phob2_cc_button_pane

0xa02f,	// (0x00086fd1) phob2_cc_data_pane_g1_ParamLimits

0xa02f,	// (0x00086fd1) phob2_cc_data_pane_g1

0xa03b,	// (0x00086fdd) phob2_cc_data_pane_g2_ParamLimits

0xa03b,	// (0x00086fdd) phob2_cc_data_pane_g2

0x0001,

0xff1a,	// (0x0008cebc) phob2_cc_data_pane_g_ParamLimits

0xff1a,	// (0x0008cebc) phob2_cc_data_pane_g

0xa047,	// (0x00086fe9) phob2_cc_data_pane_t1_ParamLimits

0xa047,	// (0x00086fe9) phob2_cc_data_pane_t1

0xa059,	// (0x00086ffb) phob2_cc_data_pane_t2_ParamLimits

0xa059,	// (0x00086ffb) phob2_cc_data_pane_t2

0xa06b,	// (0x0008700d) phob2_cc_data_pane_t3_ParamLimits

0xa06b,	// (0x0008700d) phob2_cc_data_pane_t3

0x0002,

0xff1f,	// (0x0008cec1) phob2_cc_data_pane_t_ParamLimits

0xff1f,	// (0x0008cec1) phob2_cc_data_pane_t

0xef95,	// (0x0008bf37) phob2_cc_list_pane_ParamLimits

0xef95,	// (0x0008bf37) phob2_cc_list_pane

0xdbc7,	// (0x0008ab69) scroll_pane_cp035_ParamLimits

0xdbc7,	// (0x0008ab69) scroll_pane_cp035

0xa8a9,	// (0x0008784b) bg_button_pane_cp033

0xefa1,	// (0x0008bf43) phob2_cc_button_pane_g1

0xefad,	// (0x0008bf4f) phob2_cc_button_pane_t1

0xefc2,	// (0x0008bf64) phob2_cc_button_pane_t2

0x0001,

0xff26,	// (0x0008cec8) phob2_cc_button_pane_t

0xa07d,	// (0x0008701f) list_double_large_graphic_phob2_cc_pane_ParamLimits

0xa07d,	// (0x0008701f) list_double_large_graphic_phob2_cc_pane

0xa099,	// (0x0008703b) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0xa099,	// (0x0008703b) list_double_large_graphic_phob2_cc_pane_g1

0x1e2c,	// (0x0007edce) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x1e2c,	// (0x0007edce) list_double_large_graphic_phob2_cc_pane_g2

0x1e3b,	// (0x0007eddd) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x1e3b,	// (0x0007eddd) list_double_large_graphic_phob2_cc_pane_g3

0x1e4a,	// (0x0007edec) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x1e4a,	// (0x0007edec) list_double_large_graphic_phob2_cc_pane_g4

0x1e5b,	// (0x0007edfd) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x1e5b,	// (0x0007edfd) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xff2b,	// (0x0008cecd) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xff2b,	// (0x0008cecd) list_double_large_graphic_phob2_cc_pane_g

0x1e6a,	// (0x0007ee0c) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x1e6a,	// (0x0007ee0c) list_double_large_graphic_phob2_cc_pane_t1

0x1e93,	// (0x0007ee35) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x1e93,	// (0x0007ee35) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xff36,	// (0x0008ced8) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xff36,	// (0x0008ced8) list_double_large_graphic_phob2_cc_pane_t

0xefd4,	// (0x0008bf76) list_highlight_pane_cp025_ParamLimits

0xefd4,	// (0x0008bf76) list_highlight_pane_cp025

0xa8a9,	// (0x0008784b) bg_button_pane_cp033_ParamLimits

0xefa1,	// (0x0008bf43) phob2_cc_button_pane_g1_ParamLimits

0xefad,	// (0x0008bf4f) phob2_cc_button_pane_t1_ParamLimits

0xefc2,	// (0x0008bf64) phob2_cc_button_pane_t2_ParamLimits

0xff26,	// (0x0008cec8) phob2_cc_button_pane_t_ParamLimits

0x2146,	// (0x0007f0e8) popup_wgtman_window

0xd7c9,	// (0x0008a76b) scroll_pane_cp038

0x9b9c,	// (0x00086b3e) wgtman_btn_pane_cp_01_ParamLimits

0x9b9c,	// (0x00086b3e) wgtman_btn_pane_cp_01

0xefe2,	// (0x0008bf84) wgtman_content_pane

0xefeb,	// (0x0008bf8d) wgtman_heading_pane

0xa190,	// (0x00087132) bg_heading_pane_cp02

0xeff4,	// (0x0008bf96) wgtman_heading_pane_g1

0xeffc,	// (0x0008bf9e) wgtman_heading_pane_t1

0xf00a,	// (0x0008bfac) scroll_pane_cp036

0xf012,	// (0x0008bfb4) wgtman_list_pane

0xf01a,	// (0x0008bfbc) wgtman_list_pane_t1_ParamLimits

0xf01a,	// (0x0008bfbc) wgtman_list_pane_t1

0x7443,	// (0x000843e5) cam4_grid_pane

0x1045,	// (0x0007dfe7) bg_button_pane_cp015_ParamLimits

0x8122,	// (0x000850c4) bg_button_pane_cp016_ParamLimits

0x8135,	// (0x000850d7) bg_button_pane_cp017_ParamLimits

0x1089,	// (0x0007e02b) popup_vitu2_query_window_g3_ParamLimits

0x1089,	// (0x0007e02b) popup_vitu2_query_window_g3

0x1102,	// (0x0007e0a4) popup_vitu2_query_window_t6_ParamLimits

0x1102,	// (0x0007e0a4) popup_vitu2_query_window_t6

0x112d,	// (0x0007e0cf) popup_vitu2_query_window_t7_ParamLimits

0x112d,	// (0x0007e0cf) popup_vitu2_query_window_t7

0xe1ac,	// (0x0008b14e) cam4_grid_pane_g1

0xe1b5,	// (0x0008b157) cam4_grid_pane_g2

0xf034,	// (0x0008bfd6) cam4_grid_pane_g3

0xf03d,	// (0x0008bfdf) cam4_grid_pane_g4

0x0003,

0xff3b,	// (0x0008cedd) cam4_grid_pane_g

0x325b,	// (0x000801fd) aid_placing_vt_slider_lsc_ParamLimits

0x358e,	// (0x00080530) vidtel_button_pane_ParamLimits

0x358e,	// (0x00080530) vidtel_button_pane

0xf048,	// (0x0008bfea) bg_button_pane_cp034

0xa0aa,	// (0x0008704c) vidtel_button_pane_g1

0xf052,	// (0x0008bff4) vidtel_button_pane_t1

0xd8cd,	// (0x0008a86f) aid_size_vtel_slider_touch

0xdbc7,	// (0x0008ab69) scroll_pane_cp039

0xe1ce,	// (0x0008b170) ncim_query_button_pane_cp01_ParamLimits

0xe1ed,	// (0x0008b18f) ncimui_query_pane_g1_ParamLimits

0xa8a9,	// (0x0008784b) input_focus_pane_cp012_ParamLimits

0xe212,	// (0x0008b1b4) ncim_query_entry_pane_t1_ParamLimits

0xdbc7,	// (0x0008ab69) scroll_pane_cp039_ParamLimits

0x4799,	// (0x0008173b) navi_pane_bcale_mc_g1

0x47a1,	// (0x00081743) navi_pane_bcale_mc_t1

0xe775,	// (0x0008b717) main_sp_fs_email_pane_g1

0xe781,	// (0x0008b723) main_sp_fs_email_pane_g2

0x0001,

0xfccc,	// (0x0008cc6e) main_sp_fs_email_pane_g

0xea18,	// (0x0008b9ba) list_single_cale_mrui_row_pane_g3_ParamLimits

0xea18,	// (0x0008b9ba) list_single_cale_mrui_row_pane_g3

0x1d0f,	// (0x0007ecb1) list_single_recal_day_pane_g5_event_pane

0x1d25,	// (0x0007ecc7) list_single_recal_day_pane_g7

0xf060,	// (0x0008c002) list_recal_day_event_pane_cp01

0xf069,	// (0x0008c00b) list_recal_vselct_arw_lo_pane_cp01

0xf071,	// (0x0008c013) list_recal_vselct_arw_up_pane_cp01

0xf079,	// (0x0008c01b) list_recal_vselct_pane_cp01

0xd8dd,	// (0x0008a87f) list_recal_day_event_pane_cp01_g1

0x1ebc,	// (0x0007ee5e) list_recal_day_event_pane_cp01_t1

0x1d2d,	// (0x0007eccf) list_single_recal_day_pane_t1_ParamLimits

0x1d3f,	// (0x0007ece1) list_single_recal_day_pane_t2_ParamLimits

0xfe29,	// (0x0008cdcb) list_single_recal_day_pane_t_ParamLimits

0xa84f,	// (0x000877f1) bg_notes_pane_ParamLimits

0xa920,	// (0x000878c2) list_notes_pane_ParamLimits

0x2495,	// (0x0007f437) scroll_pane_cp06_ParamLimits

0xa942,	// (0x000878e4) main_notes_pane_ParamLimits

0xa190,	// (0x00087132) main_welc_pane

0xa0b2,	// (0x00087054) main_welc_body_pane_ParamLimits

0xa0b2,	// (0x00087054) main_welc_body_pane

0xa0cd,	// (0x0008706f) main_welc_opti_pane_ParamLimits

0xa0cd,	// (0x0008706f) main_welc_opti_pane

0xa102,	// (0x000870a4) main_welc_pane_t1_ParamLimits

0xa102,	// (0x000870a4) main_welc_pane_t1

0xa120,	// (0x000870c2) main_welc_body_row_pane_ParamLimits

0xa120,	// (0x000870c2) main_welc_body_row_pane

0xa13a,	// (0x000870dc) main_welc_opti_row_pane_ParamLimits

0xa13a,	// (0x000870dc) main_welc_opti_row_pane

0xf083,	// (0x0008c025) main_welc_opti_row_pane_g1

0xf08b,	// (0x0008c02d) main_welc_opti_row_pane_t1

0xf09a,	// (0x0008c03c) main_welc_body_row_pane_t1

0xed6b,	// (0x0008bd0d) popup_notif_wgt_heading_pane

0xed85,	// (0x0008bd27) aid_size_list_notif_wgt_del_ParamLimits

0xed92,	// (0x0008bd34) list_notif_wgt_row_pane_g1_ParamLimits

0xed9e,	// (0x0008bd40) list_notif_wgt_row_pane_g2_ParamLimits

0xedaa,	// (0x0008bd4c) list_notif_wgt_row_pane_g3_ParamLimits

0xfe90,	// (0x0008ce32) list_notif_wgt_row_pane_g_ParamLimits

0xedb7,	// (0x0008bd59) list_notif_wgt_row_pane_t1_ParamLimits

0xedcc,	// (0x0008bd6e) list_notif_wgt_row_pane_t2_ParamLimits

0xedde,	// (0x0008bd80) list_notif_wgt_row_pane_t3_ParamLimits

0xfe97,	// (0x0008ce39) list_notif_wgt_row_pane_t_ParamLimits

0x9c27,	// (0x00086bc9) listrow_wgtman_pane_g1_ParamLimits

0x9c34,	// (0x00086bd6) listrow_wgtman_pane_g2_ParamLimits

0xfec0,	// (0x0008ce62) listrow_wgtman_pane_g_ParamLimits

0x1da9,	// (0x0007ed4b) listrow_wgtman_pane_t1_ParamLimits

0x1dc1,	// (0x0007ed63) listrow_wgtman_pane_t2_ParamLimits

0xfec5,	// (0x0008ce67) listrow_wgtman_pane_t_ParamLimits

0x1de7,	// (0x0007ed89) wait_bar_pane_cp09_ParamLimits

0xa190,	// (0x00087132) bg_popup_heading_pane_cp02

0xf0a9,	// (0x0008c04b) popup_notif_wgt_heading_pane_g1

0xf0b1,	// (0x0008c053) popup_notif_wgt_heading_pane_t1

0xa190,	// (0x00087132) main_vids_pane

0xa190,	// (0x00087132) vids_listscroll_pane

0xa14b,	// (0x000870ed) scroll_pane_cp040

0xa190,	// (0x00087132) vids_list_pane

0xa156,	// (0x000870f8) vids_list_double_pane_ParamLimits

0xa156,	// (0x000870f8) vids_list_double_pane

0xa169,	// (0x0008710b) vids_list_double_pane_g1

0xa172,	// (0x00087114) vids_list_double_pane_t1

0xa182,	// (0x00087124) vids_list_double_pane_t2

0x0001,

0xff49,	// (0x0008ceeb) vids_list_double_pane_t

0xa8a9,	// (0x0008784b) main_ncimui_pane_ParamLimits

0x8c8b,	// (0x00085c2d) main_ncimui_pane_g1_ParamLimits

0x8c99,	// (0x00085c3b) main_ncimui_pane_g2_ParamLimits

0x8c99,	// (0x00085c3b) main_ncimui_pane_g2

0x0001,

0xfbd1,	// (0x0008cb73) main_ncimui_pane_g_ParamLimits

0xfbd1,	// (0x0008cb73) main_ncimui_pane_g

0xa0e8,	// (0x0008708a) main_welc_pane_g1_ParamLimits

0xa0e8,	// (0x0008708a) main_welc_pane_g1

0xa0f4,	// (0x00087096) main_welc_pane_g2_ParamLimits

0xa0f4,	// (0x00087096) main_welc_pane_g2

0x0001,

0xff44,	// (0x0008cee6) main_welc_pane_g_ParamLimits

0xff44,	// (0x0008cee6) main_welc_pane_g

0xa84f,	// (0x000877f1) listscroll_mce_pane_ParamLimits

0x4863,	// (0x00081805) wait_bar_pane_cp10

0xc854,	// (0x000897f6) main_cale_day_pane_ParamLimits

0xc854,	// (0x000897f6) main_cale_week_pane_ParamLimits

0xa84f,	// (0x000877f1) main_messa_pane_ParamLimits

0x684b,	// (0x000837ed) main_clock2_btn_pane_ParamLimits

0x684b,	// (0x000837ed) main_clock2_btn_pane

0xd071,	// (0x0008a013) main_clock2_btn_pane_cp01_ParamLimits

0xd071,	// (0x0008a013) main_clock2_btn_pane_cp01

0xe9e9,	// (0x0008b98b) list_cale_mrui_pane_ParamLimits

0xee22,	// (0x0008bdc4) main_cf0_pane_g2

0x0001,

0xfe9e,	// (0x0008ce40) main_cf0_pane_g

0x9dcf,	// (0x00086d71) area_left_week_number_pane_ParamLimits

0x9de2,	// (0x00086d84) area_top_day_name_pane_ParamLimits

0x9df0,	// (0x00086d92) frame_month_view_pane_ParamLimits

0xef4a,	// (0x0008beec) grid_month_view_pane_ParamLimits

0xef58,	// (0x0008befa) frm_month_g1_ParamLimits

0x9e6e,	// (0x00086e10) frm_month_g2_ParamLimits

0x9e7f,	// (0x00086e21) frm_month_g3_ParamLimits

0x9e90,	// (0x00086e32) frm_month_g4_ParamLimits

0x9ea1,	// (0x00086e43) frm_month_g5_ParamLimits

0x9eb2,	// (0x00086e54) frm_month_g6_ParamLimits

0x9ec5,	// (0x00086e67) frm_month_g7_ParamLimits

0xef65,	// (0x0008bf07) frm_month_g8_ParamLimits

0x9ed8,	// (0x00086e7a) frm_month_g9_ParamLimits

0x9ee5,	// (0x00086e87) frm_month_g10_ParamLimits

0x9ef2,	// (0x00086e94) frm_month_g11_ParamLimits

0x9eff,	// (0x00086ea1) frm_month_g12_ParamLimits

0x9f0c,	// (0x00086eae) frm_month_g13_ParamLimits

0x9f1b,	// (0x00086ebd) frm_month_g14_ParamLimits

0x9f2a,	// (0x00086ecc) frm_month_g15_ParamLimits

0x9f39,	// (0x00086edb) frm_month_g16_ParamLimits

0xfeef,	// (0x0008ce91) frm_month_g_ParamLimits

0xef72,	// (0x0008bf14) cell_top_day_name_pane_t1_ParamLimits

0x9f48,	// (0x00086eea) cell_area_left_week_number_pane_g1_ParamLimits

0x9f57,	// (0x00086ef9) cell_area_left_week_number_pane_t1_ParamLimits

0xcee1,	// (0x00089e83) cell_month_view_pane_g1_ParamLimits

0x9f6d,	// (0x00086f0f) cell_month_view_pane_t1_ParamLimits

0xa847,	// (0x000877e9) main_clock2_btn_pane_g1

0xf0bf,	// (0x0008c061) main_clock2_btn_pane_t1

0xa8a9,	// (0x0008784b) listscroll_cmail_pane_ParamLimits

0xe775,	// (0x0008b717) main_sp_fs_email_pane_g1_ParamLimits

0xe781,	// (0x0008b723) main_sp_fs_email_pane_g2_ParamLimits

0xfccc,	// (0x0008cc6e) main_sp_fs_email_pane_g_ParamLimits

0xeaf5,	// (0x0008ba97) list_recal_day_pane_ParamLimits

0xeb06,	// (0x0008baa8) mian_recal_day_pane_t1

0x16ec,	// (0x0007e68e) list_single_dyc_row_text_pane_t4_ParamLimits

0x16ec,	// (0x0007e68e) list_single_dyc_row_text_pane_t4

0x1731,	// (0x0007e6d3) list_single_dyc_row_text_pane_t5_ParamLimits

0x1731,	// (0x0007e6d3) list_single_dyc_row_text_pane_t5

0x17a7,	// (0x0007e749) list_single_dyc_row_text_pane_t6_ParamLimits

0x17a7,	// (0x0007e749) list_single_dyc_row_text_pane_t6

0xaefe,	// (0x00087ea0) aid_mgn_list_cale_time_pane

0xa8a9,	// (0x0008784b) main_gallery2_pane_ParamLimits
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
	};

} // end of namespace AknLayoutScalable_Elaf_pvp4_apps_vga4_prt_tch_Large
