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

#include "aknlayoutscalable_abrw_pqp_apps_qvga_prt_small.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pqp_apps_qvga_prt[]; }

namespace AknLayoutScalable_Abrw_pqp_apps_qvga_prt_Small
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pqp_apps_qvga_prt + 0x00049f66 };

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
0x599f,	// (0x0004f905) Screen

0x59a9,	// (0x0004f90f) application_window

0x59fb,	// (0x0004f961) area_bottom_pane_ParamLimits

0x59fb,	// (0x0004f961) area_bottom_pane

0x5a4c,	// (0x0004f9b2) area_top_pane_ParamLimits

0x5a4c,	// (0x0004f9b2) area_top_pane

0x5aa2,	// (0x0004fa08) call_video_uplink_pane_ParamLimits

0x5aa2,	// (0x0004fa08) call_video_uplink_pane

0x5adb,	// (0x0004fa41) main_pane_ParamLimits

0x5adb,	// (0x0004fa41) main_pane

0xe457,	// (0x000583bd) context_pane

0x893f,	// (0x000528a5) navi_pane

0x895f,	// (0x000528c5) popup_cale_events_window_ParamLimits

0x895f,	// (0x000528c5) popup_cale_events_window

0xe46a,	// (0x000583d0) popup_mup_playback_window

0x8976,	// (0x000528dc) signal_pane

0x359b,	// (0x0004d501) main_browser_pane

0x374c,	// (0x0004d6b2) main_burst_pane

0x87df,	// (0x00052745) main_calc_pane

0xe43d,	// (0x000583a3) main_cale_day_pane

0x87ec,	// (0x00052752) main_cale_month_pane

0xe43d,	// (0x000583a3) main_cale_week_pane

0x374c,	// (0x0004d6b2) main_call_pane

0x326f,	// (0x0004d1d5) main_call_poc_pane

0x374c,	// (0x0004d6b2) main_camera_pane

0x374c,	// (0x0004d6b2) main_chi_dic_pane

0x3f34,	// (0x0004de9a) main_clock_pane

0x326f,	// (0x0004d1d5) main_fmradio_pane

0x374c,	// (0x0004d6b2) main_graph_messa_pane

0x326f,	// (0x0004d1d5) main_help_pane

0x359b,	// (0x0004d501) main_im_pane

0x34ca,	// (0x0004d430) main_image_pane_ParamLimits

0x34ca,	// (0x0004d430) main_image_pane

0x326f,	// (0x0004d1d5) main_location2_pane

0x374c,	// (0x0004d6b2) main_location_pane

0x34ca,	// (0x0004d430) main_messa_pane

0x326f,	// (0x0004d1d5) main_mp2_pane

0x374c,	// (0x0004d6b2) main_mp_pane

0x326f,	// (0x0004d1d5) main_msg_pane

0x326f,	// (0x0004d1d5) main_mup_eq_pane

0x326f,	// (0x0004d1d5) main_mup_pane

0x359b,	// (0x0004d501) main_notes_pane

0x326f,	// (0x0004d1d5) main_pec_pane

0x326f,	// (0x0004d1d5) main_phob_pane

0x326f,	// (0x0004d1d5) main_pinb_pane

0x326f,	// (0x0004d1d5) main_postcard_pane

0x326f,	// (0x0004d1d5) main_qdial_pane

0x374c,	// (0x0004d6b2) main_skin_pane

0x326f,	// (0x0004d1d5) main_smil2_pane

0x374c,	// (0x0004d6b2) main_smil_pane

0x374c,	// (0x0004d6b2) main_video_pane

0x374c,	// (0x0004d6b2) main_video_tele_pane

0x34ca,	// (0x0004d430) main_viewer_pane_ParamLimits

0x34ca,	// (0x0004d430) main_viewer_pane

0x374c,	// (0x0004d6b2) main_vorec_pane

0x8839,	// (0x0005279f) popup_blid_sat_info_window_ParamLimits

0x8839,	// (0x0005279f) popup_blid_sat_info_window

0x8855,	// (0x000527bb) popup_dyc_status_message_window_ParamLimits

0x8855,	// (0x000527bb) popup_dyc_status_message_window

0x8861,	// (0x000527c7) popup_grid_large_graphic_window_ParamLimits

0x8861,	// (0x000527c7) popup_grid_large_graphic_window

0x88d6,	// (0x0005283c) popup_loc_request_window_ParamLimits

0x88d6,	// (0x0005283c) popup_loc_request_window

0x8919,	// (0x0005287f) popup_wml_address_window_ParamLimits

0x8919,	// (0x0005287f) popup_wml_address_window

0x86eb,	// (0x00052651) call_muted_g1

0x8428,	// (0x0005238e) popup_call_audio_conf_window_ParamLimits

0x8428,	// (0x0005238e) popup_call_audio_conf_window

0x86fb,	// (0x00052661) popup_call_audio_first_window_ParamLimits

0x86fb,	// (0x00052661) popup_call_audio_first_window

0x872f,	// (0x00052695) popup_call_audio_in_window_ParamLimits

0x872f,	// (0x00052695) popup_call_audio_in_window

0x874b,	// (0x000526b1) popup_call_audio_out_window_ParamLimits

0x874b,	// (0x000526b1) popup_call_audio_out_window

0x8767,	// (0x000526cd) popup_call_audio_second_window_ParamLimits

0x8767,	// (0x000526cd) popup_call_audio_second_window

0x878f,	// (0x000526f5) popup_call_audio_wait_window_ParamLimits

0x878f,	// (0x000526f5) popup_call_audio_wait_window

0x87ae,	// (0x00052714) popup_number_entry_window_ParamLimits

0x87ae,	// (0x00052714) popup_number_entry_window

0x2d3f,	// (0x0004cca5) bg_popup_call_pane_cp05_ParamLimits

0x2d3f,	// (0x0004cca5) bg_popup_call_pane_cp05

0x2d5f,	// (0x0004ccc5) popup_number_entry_window_t1

0x2d72,	// (0x0004ccd8) popup_number_entry_window_t2

0x2d84,	// (0x0004ccea) popup_number_entry_window_t3

0x0003,

0xf0ca,	// (0x00059030) popup_number_entry_window_t

0x2eb5,	// (0x0004ce1b) text_title_cp2

0x2ec8,	// (0x0004ce2e) bg_popup_call_pane_cp_ParamLimits

0x2ec8,	// (0x0004ce2e) bg_popup_call_pane_cp

0x2ed6,	// (0x0004ce3c) call_thumbnail_pane

0x2ede,	// (0x0004ce44) popup_call_audio_in_window_g1_ParamLimits

0x2ede,	// (0x0004ce44) popup_call_audio_in_window_g1

0x2eea,	// (0x0004ce50) popup_call_audio_in_window_g2_ParamLimits

0x2eea,	// (0x0004ce50) popup_call_audio_in_window_g2

0x2ef6,	// (0x0004ce5c) popup_call_audio_in_window_g3_ParamLimits

0x2ef6,	// (0x0004ce5c) popup_call_audio_in_window_g3

0x0002,

0xf0d3,	// (0x00059039) popup_call_audio_in_window_g_ParamLimits

0xf0d3,	// (0x00059039) popup_call_audio_in_window_g

0x2f02,	// (0x0004ce68) popup_call_audio_in_window_t1_ParamLimits

0x2f02,	// (0x0004ce68) popup_call_audio_in_window_t1

0x2f1d,	// (0x0004ce83) popup_call_audio_in_window_t2_ParamLimits

0x2f1d,	// (0x0004ce83) popup_call_audio_in_window_t2

0x2f38,	// (0x0004ce9e) popup_call_audio_in_window_t3_ParamLimits

0x2f38,	// (0x0004ce9e) popup_call_audio_in_window_t3

0x0002,

0xf0da,	// (0x00059040) popup_call_audio_in_window_t_ParamLimits

0xf0da,	// (0x00059040) popup_call_audio_in_window_t

0x2ec8,	// (0x0004ce2e) bg_popup_call_pane_cp01_ParamLimits

0x2ec8,	// (0x0004ce2e) bg_popup_call_pane_cp01

0x2ed6,	// (0x0004ce3c) call_thumbnail_pane_cp02

0x2f4b,	// (0x0004ceb1) call_type_pane_cp022

0x2f53,	// (0x0004ceb9) popup_call_audio_out_window_g1_ParamLimits

0x2f53,	// (0x0004ceb9) popup_call_audio_out_window_g1

0x2f65,	// (0x0004cecb) popup_call_audio_out_window_g2_ParamLimits

0x2f65,	// (0x0004cecb) popup_call_audio_out_window_g2

0x2f71,	// (0x0004ced7) popup_call_audio_out_window_g3_ParamLimits

0x2f71,	// (0x0004ced7) popup_call_audio_out_window_g3

0x0002,

0xf0e1,	// (0x00059047) popup_call_audio_out_window_g_ParamLimits

0xf0e1,	// (0x00059047) popup_call_audio_out_window_g

0x2f83,	// (0x0004cee9) popup_call_audio_out_window_t1_ParamLimits

0x2f83,	// (0x0004cee9) popup_call_audio_out_window_t1

0x2f9b,	// (0x0004cf01) popup_call_audio_out_window_t2_ParamLimits

0x2f9b,	// (0x0004cf01) popup_call_audio_out_window_t2

0x0001,

0xf0e8,	// (0x0005904e) popup_call_audio_out_window_t_ParamLimits

0xf0e8,	// (0x0005904e) popup_call_audio_out_window_t

0x2fb0,	// (0x0004cf16) bg_popup_call_pane_ParamLimits

0x2fb0,	// (0x0004cf16) bg_popup_call_pane

0x5ca5,	// (0x0004fc0b) call_thumbnail_pane_cp_ParamLimits

0x5ca5,	// (0x0004fc0b) call_thumbnail_pane_cp

0x3034,	// (0x0004cf9a) call_type_pane_cp01_ParamLimits

0x3034,	// (0x0004cf9a) call_type_pane_cp01

0x3078,	// (0x0004cfde) popup_call_audio_first_window_g1_ParamLimits

0x3078,	// (0x0004cfde) popup_call_audio_first_window_g1

0x30c4,	// (0x0004d02a) popup_call_audio_first_window_g2_ParamLimits

0x30c4,	// (0x0004d02a) popup_call_audio_first_window_g2

0x0001,

0xf0ed,	// (0x00059053) popup_call_audio_first_window_g_ParamLimits

0xf0ed,	// (0x00059053) popup_call_audio_first_window_g

0x3108,	// (0x0004d06e) popup_call_audio_first_window_t1_ParamLimits

0x3108,	// (0x0004d06e) popup_call_audio_first_window_t1

0x31b4,	// (0x0004d11a) popup_call_audio_first_window_t4_ParamLimits

0x31b4,	// (0x0004d11a) popup_call_audio_first_window_t4

0x3240,	// (0x0004d1a6) popup_call_audio_first_window_t5_ParamLimits

0x3240,	// (0x0004d1a6) popup_call_audio_first_window_t5

0x0002,

0xf0f2,	// (0x00059058) popup_call_audio_first_window_t_ParamLimits

0xf0f2,	// (0x00059058) popup_call_audio_first_window_t

0x326f,	// (0x0004d1d5) bg_popup_call_pane_cp02

0x3279,	// (0x0004d1df) call_type_pane_cp023

0x3281,	// (0x0004d1e7) popup_call_audio_wait_window_g1

0x3289,	// (0x0004d1ef) popup_call_audio_wait_window_g2

0x0001,

0xf0f9,	// (0x0005905f) popup_call_audio_wait_window_g

0x3291,	// (0x0004d1f7) popup_call_audio_wait_window_t3

0x329f,	// (0x0004d205) bg_popup_call_pane_cp03_ParamLimits

0x329f,	// (0x0004d205) bg_popup_call_pane_cp03

0x32ff,	// (0x0004d265) call_thumbnail_pane_cp011_ParamLimits

0x32ff,	// (0x0004d265) call_thumbnail_pane_cp011

0x330b,	// (0x0004d271) call_type_pane_cp034_ParamLimits

0x330b,	// (0x0004d271) call_type_pane_cp034

0x3347,	// (0x0004d2ad) popup_call_audio_second_window_g1_ParamLimits

0x3347,	// (0x0004d2ad) popup_call_audio_second_window_g1

0x3383,	// (0x0004d2e9) popup_call_audio_second_window_g2_ParamLimits

0x3383,	// (0x0004d2e9) popup_call_audio_second_window_g2

0x0001,

0xf0fe,	// (0x00059064) popup_call_audio_second_window_g_ParamLimits

0xf0fe,	// (0x00059064) popup_call_audio_second_window_g

0x33bf,	// (0x0004d325) popup_call_audio_second_window_t1_ParamLimits

0x33bf,	// (0x0004d325) popup_call_audio_second_window_t1

0x3440,	// (0x0004d3a6) popup_call_audio_second_window_t2_ParamLimits

0x3440,	// (0x0004d3a6) popup_call_audio_second_window_t2

0x3476,	// (0x0004d3dc) popup_call_audio_second_window_t3_ParamLimits

0x3476,	// (0x0004d3dc) popup_call_audio_second_window_t3

0x0002,

0xf103,	// (0x00059069) popup_call_audio_second_window_t_ParamLimits

0xf103,	// (0x00059069) popup_call_audio_second_window_t

0x326f,	// (0x0004d1d5) bg_popup_call_pane_cp04

0x34ac,	// (0x0004d412) list_conf_pane

0x34b4,	// (0x0004d41a) popup_call_audio_conf_window_t1

0x34c2,	// (0x0004d428) call_thumbnail_pane_g1

0x34ca,	// (0x0004d430) bg_pinb_pane_ParamLimits

0x34ca,	// (0x0004d430) bg_pinb_pane

0x34d8,	// (0x0004d43e) find_pinb_pane

0x34e1,	// (0x0004d447) listscroll_pinb_pane_ParamLimits

0x34e1,	// (0x0004d447) listscroll_pinb_pane

0x34f0,	// (0x0004d456) pinb_bg_pane_g1

0x5cc9,	// (0x0004fc2f) pinb_bg_pane_g2

0x5cd3,	// (0x0004fc39) pinb_bg_pane_g3

0x5cdd,	// (0x0004fc43) pinb_bg_pane_g4

0x5ce7,	// (0x0004fc4d) pinb_bg_pane_g5

0x5cf1,	// (0x0004fc57) pinb_bg_pane_g6

0x5cfc,	// (0x0004fc62) pinb_bg_pane_g7

0x5d07,	// (0x0004fc6d) pinb_bg_pane_g8

0x5d10,	// (0x0004fc76) pinb_bg_pane_g9

0x5d18,	// (0x0004fc7e) pinb_bg_pane_g10

0x0009,

0xf10a,	// (0x00059070) pinb_bg_pane_g

0x5d35,	// (0x0004fc9b) grid_pinb_pane

0x5d3e,	// (0x0004fca4) list_pinb_pane

0x5d49,	// (0x0004fcaf) scroll_pane_cp01_ParamLimits

0x5d49,	// (0x0004fcaf) scroll_pane_cp01

0x34fa,	// (0x0004d460) find_pinb_pane_g1_ParamLimits

0x34fa,	// (0x0004d460) find_pinb_pane_g1

0x3512,	// (0x0004d478) find_pinb_pane_t1

0x3524,	// (0x0004d48a) find_pinb_pane_t2

0x0001,

0xf124,	// (0x0005908a) find_pinb_pane_t

0x3539,	// (0x0004d49f) input_focus_pane_cp01_ParamLimits

0x3539,	// (0x0004d49f) input_focus_pane_cp01

0x5d59,	// (0x0004fcbf) cell_pinb_pane_ParamLimits

0x5d59,	// (0x0004fcbf) cell_pinb_pane

0x5d72,	// (0x0004fcd8) cell_pinb_pane_g1_ParamLimits

0x5d72,	// (0x0004fcd8) cell_pinb_pane_g1

0x5d83,	// (0x0004fce9) cell_pinb_pane_g2_ParamLimits

0x5d83,	// (0x0004fce9) cell_pinb_pane_g2

0x3545,	// (0x0004d4ab) cell_pinb_pane_g3_ParamLimits

0x3545,	// (0x0004d4ab) cell_pinb_pane_g3

0x0002,

0xf129,	// (0x0005908f) cell_pinb_pane_g_ParamLimits

0xf129,	// (0x0005908f) cell_pinb_pane_g

0x326f,	// (0x0004d1d5) grid_highlight_pane_cp01

0x5d8f,	// (0x0004fcf5) list_pinb_item_pane_ParamLimits

0x5d8f,	// (0x0004fcf5) list_pinb_item_pane

0x326f,	// (0x0004d1d5) list_highlight_pane_cp02

0x5da4,	// (0x0004fd0a) list_pinb_item_pane_g1_ParamLimits

0x5da4,	// (0x0004fd0a) list_pinb_item_pane_g1

0x3551,	// (0x0004d4b7) list_pinb_item_pane_g2_ParamLimits

0x3551,	// (0x0004d4b7) list_pinb_item_pane_g2

0x5db1,	// (0x0004fd17) list_pinb_item_pane_g3_ParamLimits

0x5db1,	// (0x0004fd17) list_pinb_item_pane_g3

0x5dc0,	// (0x0004fd26) list_pinb_item_pane_g4_ParamLimits

0x5dc0,	// (0x0004fd26) list_pinb_item_pane_g4

0x0003,

0xf130,	// (0x00059096) list_pinb_item_pane_g_ParamLimits

0xf130,	// (0x00059096) list_pinb_item_pane_g

0x5dcc,	// (0x0004fd32) list_pinb_item_pane_t1_ParamLimits

0x5dcc,	// (0x0004fd32) list_pinb_item_pane_t1

0x5dfd,	// (0x0004fd63) calc_display_pane

0x5e17,	// (0x0004fd7d) calc_paper_pane

0x5e2f,	// (0x0004fd95) grid_calc_pane

0x326f,	// (0x0004d1d5) bg_list_pane_cp01

0x5e53,	// (0x0004fdb9) clock_g1

0x5e5b,	// (0x0004fdc1) clock_g2

0x0001,

0xf139,	// (0x0005909f) clock_g

0x5e63,	// (0x0004fdc9) clock_t1_ParamLimits

0x5e63,	// (0x0004fdc9) clock_t1

0x5e78,	// (0x0004fdde) clock_t2_ParamLimits

0x5e78,	// (0x0004fdde) clock_t2

0x5e8a,	// (0x0004fdf0) clock_t3_ParamLimits

0x5e8a,	// (0x0004fdf0) clock_t3

0x5e9c,	// (0x0004fe02) clock_t4_ParamLimits

0x5e9c,	// (0x0004fe02) clock_t4

0x5eae,	// (0x0004fe14) clock_t5_ParamLimits

0x5eae,	// (0x0004fe14) clock_t5

0x5ec3,	// (0x0004fe29) clock_t6_ParamLimits

0x5ec3,	// (0x0004fe29) clock_t6

0x5ed5,	// (0x0004fe3b) clock_t7_ParamLimits

0x5ed5,	// (0x0004fe3b) clock_t7

0x5ee7,	// (0x0004fe4d) clock_t8_ParamLimits

0x5ee7,	// (0x0004fe4d) clock_t8

0x5ef9,	// (0x0004fe5f) clock_t9_ParamLimits

0x5ef9,	// (0x0004fe5f) clock_t9

0x0008,

0xf13e,	// (0x000590a4) clock_t_ParamLimits

0xf13e,	// (0x000590a4) clock_t

0x355d,	// (0x0004d4c3) popup_clock_analogue_window_cp02

0x355d,	// (0x0004d4c3) popup_clock_digital_window_cp01

0x3565,	// (0x0004d4cb) listscroll_help_pane

0x326f,	// (0x0004d1d5) phob_pre_status_pane

0x356f,	// (0x0004d4d5) grid_qdial_pane

0x34ca,	// (0x0004d430) listscroll_mce_pane

0x34ca,	// (0x0004d430) bg_notes_pane

0x3579,	// (0x0004d4df) list_notes_pane

0x5f0b,	// (0x0004fe71) scroll_pane_cp06

0x3587,	// (0x0004d4ed) bg_calc_paper_pane

0x5f18,	// (0x0004fe7e) list_calc_pane

0x359b,	// (0x0004d501) bg_calc_display_pane

0x5f32,	// (0x0004fe98) calc_display_pane_t1

0x5f47,	// (0x0004fead) calc_display_pane_t2

0x5f5c,	// (0x0004fec2) calc_display_pane_t3

0x0002,

0xf151,	// (0x000590b7) calc_display_pane_t

0x5f6e,	// (0x0004fed4) cell_calc_pane_ParamLimits

0x5f6e,	// (0x0004fed4) cell_calc_pane

0x35a7,	// (0x0004d50d) bg_calc_paper_pane_g1

0x35bf,	// (0x0004d525) bg_calc_paper_pane_g2

0x35b3,	// (0x0004d519) bg_calc_paper_pane_g3

0x35d7,	// (0x0004d53d) bg_calc_paper_pane_g4

0x35cb,	// (0x0004d531) bg_calc_paper_pane_g5

0x5f95,	// (0x0004fefb) bg_calc_paper_pane_g6

0x5fa4,	// (0x0004ff0a) bg_calc_paper_pane_g7

0x5fb3,	// (0x0004ff19) bg_calc_paper_pane_g8

0x0007,

0xf158,	// (0x000590be) bg_calc_paper_pane_g

0x5fc2,	// (0x0004ff28) calc_bg_paper_pane_g9

0x5fd1,	// (0x0004ff37) list_calc_item_pane_ParamLimits

0x5fd1,	// (0x0004ff37) list_calc_item_pane

0x35e3,	// (0x0004d549) list_calc_item_pane_g1

0x5fe9,	// (0x0004ff4f) list_calc_item_pane_t1_ParamLimits

0x5fe9,	// (0x0004ff4f) list_calc_item_pane_t1

0x5ffb,	// (0x0004ff61) list_calc_item_pane_t2_ParamLimits

0x5ffb,	// (0x0004ff61) list_calc_item_pane_t2

0x0001,

0xf169,	// (0x000590cf) list_calc_item_pane_t_ParamLimits

0xf169,	// (0x000590cf) list_calc_item_pane_t

0x35f0,	// (0x0004d556) cell_calc_pane_g1

0x35fa,	// (0x0004d560) grid_highlight_pane_cp02

0x3625,	// (0x0004d58b) bg_calc_display_pane_g1

0x6029,	// (0x0004ff8f) bg_calc_display_pane_g2

0x361c,	// (0x0004d582) bg_calc_display_pane_g3

0x0002,

0xf173,	// (0x000590d9) bg_calc_display_pane_g

0x6033,	// (0x0004ff99) cell_qdial_pane_ParamLimits

0x6033,	// (0x0004ff99) cell_qdial_pane

0x6045,	// (0x0004ffab) cell_qdial_pane_g1_ParamLimits

0x6045,	// (0x0004ffab) cell_qdial_pane_g1

0x6052,	// (0x0004ffb8) cell_qdial_pane_g2_ParamLimits

0x6052,	// (0x0004ffb8) cell_qdial_pane_g2

0x362e,	// (0x0004d594) cell_qdial_pane_g3_ParamLimits

0x362e,	// (0x0004d594) cell_qdial_pane_g3

0x0003,

0xf17a,	// (0x000590e0) cell_qdial_pane_g_ParamLimits

0xf17a,	// (0x000590e0) cell_qdial_pane_g

0x6070,	// (0x0004ffd6) cell_qdial_pane_t1_ParamLimits

0x6070,	// (0x0004ffd6) cell_qdial_pane_t1

0x6088,	// (0x0004ffee) cell_qdial_pane_t2_ParamLimits

0x6088,	// (0x0004ffee) cell_qdial_pane_t2

0x609b,	// (0x00050001) cell_qdial_pane_t3_ParamLimits

0x609b,	// (0x00050001) cell_qdial_pane_t3

0x0002,

0xf183,	// (0x000590e9) cell_qdial_pane_t_ParamLimits

0xf183,	// (0x000590e9) cell_qdial_pane_t

0x326f,	// (0x0004d1d5) grid_highlight_pane_cp04

0x363a,	// (0x0004d5a0) thumbnail_qdial_pane_ParamLimits

0x363a,	// (0x0004d5a0) thumbnail_qdial_pane

0x3696,	// (0x0004d5fc) list_help_pane

0x369f,	// (0x0004d605) scroll_pane_cp02

0x60ae,	// (0x00050014) help_list_pane_t1_ParamLimits

0x60ae,	// (0x00050014) help_list_pane_t1

0x60ca,	// (0x00050030) bg_notes_pane_g2

0x60d2,	// (0x00050038) bg_notes_pane_g3

0x60da,	// (0x00050040) notes_bg_pane_g1

0x60e2,	// (0x00050048) notes_bg_pane_g4

0x60ea,	// (0x00050050) notes_bg_pane_g5

0x60f2,	// (0x00050058) notes_bg_pane_g6

0x60fa,	// (0x00050060) notes_bg_pane_g7

0x6102,	// (0x00050068) notes_bg_pane_g8

0x610a,	// (0x00050070) notes_bg_pane_g9

0x0006,

0xf1a1,	// (0x00059107) notes_bg_pane_g

0x6112,	// (0x00050078) list_notes_text_pane_ParamLimits

0x6112,	// (0x00050078) list_notes_text_pane

0x36a8,	// (0x0004d60e) list_notes_text_pane_g1

0x07a8,	// (0x0004a70e) list_notes_text_pane_t1

0x6133,	// (0x00050099) listscroll_cale_week_pane

0x615d,	// (0x000500c3) bg_cale_heading_pane

0x617a,	// (0x000500e0) bg_cale_pane_cp01

0x619c,	// (0x00050102) cale_week_corner_pane

0x61bb,	// (0x00050121) cale_week_day_heading_pane

0x61dd,	// (0x00050143) cale_week_scroll_pane_g1

0x61f5,	// (0x0005015b) cale_week_scroll_pane_g2

0x620d,	// (0x00050173) cale_week_scroll_pane_g3

0x6225,	// (0x0005018b) cale_week_scroll_pane_g4

0x623d,	// (0x000501a3) cale_week_scroll_pane_g5

0x6255,	// (0x000501bb) cale_week_scroll_pane_g6

0x626d,	// (0x000501d3) cale_week_scroll_pane_g7

0x6285,	// (0x000501eb) cale_week_scroll_pane_g8

0x629d,	// (0x00050203) cale_week_scroll_pane_g9

0x62ba,	// (0x00050220) cale_week_scroll_pane_g10

0x62d7,	// (0x0005023d) cale_week_scroll_pane_g11

0x62f4,	// (0x0005025a) cale_week_scroll_pane_g12

0x6311,	// (0x00050277) cale_week_scroll_pane_g13

0x632e,	// (0x00050294) cale_week_scroll_pane_g14

0x634b,	// (0x000502b1) cale_week_scroll_pane_g15

0x000f,

0xf1b0,	// (0x00059116) cale_week_scroll_pane_g

0x6380,	// (0x000502e6) cale_week_time_pane

0x6398,	// (0x000502fe) grid_cale_week_pane

0x36dd,	// (0x0004d643) scroll_pane_cp08

0x63b7,	// (0x0005031d) cell_cale_week_pane_ParamLimits

0x63b7,	// (0x0005031d) cell_cale_week_pane

0x642d,	// (0x00050393) cale_week_day_heading_pane_t1

0x6455,	// (0x000503bb) cale_week_day_heading_pane_t2

0x6482,	// (0x000503e8) cale_week_day_heading_pane_t3

0x64af,	// (0x00050415) cale_week_day_heading_pane_t4

0x64dc,	// (0x00050442) cale_week_day_heading_pane_t5

0x6509,	// (0x0005046f) cale_week_day_heading_pane_t6

0x6536,	// (0x0005049c) cale_week_day_heading_pane_t7

0x0006,

0xf1d1,	// (0x00059137) cale_week_day_heading_pane_t

0x36fa,	// (0x0004d660) bg_cale_side_pane

0x655e,	// (0x000504c4) cale_week_time_pane_t1

0x65a2,	// (0x00050508) cale_week_time_pane_t2

0x65e6,	// (0x0005054c) cale_week_time_pane_t3

0x662a,	// (0x00050590) cale_week_time_pane_t4

0x666e,	// (0x000505d4) cale_week_time_pane_t5

0x66b2,	// (0x00050618) cale_week_time_pane_t6

0x66f6,	// (0x0005065c) cale_week_time_pane_t7

0x673a,	// (0x000506a0) cale_week_time_pane_t8

0x0007,

0xf1e0,	// (0x00059146) cale_week_time_pane_t

0x677e,	// (0x000506e4) cell_cale_week_pane_g2

0x67a2,	// (0x00050708) cell_cale_week_pane_g3_ParamLimits

0x67a2,	// (0x00050708) cell_cale_week_pane_g3

0x3708,	// (0x0004d66e) grid_highlight_pane_cp07

0x3710,	// (0x0004d676) listscroll_gms_pane

0x371a,	// (0x0004d680) grid_gms_pane

0x3723,	// (0x0004d689) listscroll_gms_pane_g1

0x372b,	// (0x0004d691) listscroll_gms_pane_g2

0x0001,

0xf1f1,	// (0x00059157) listscroll_gms_pane_g

0x67ba,	// (0x00050720) scroll_pane_cp010

0x67c3,	// (0x00050729) cell_gms_pane_ParamLimits

0x67c3,	// (0x00050729) cell_gms_pane

0x67d4,	// (0x0005073a) cell_gms_pane_g1

0x3733,	// (0x0004d699) cell_gms_pane_g2

0x36a8,	// (0x0004d60e) cell_gms_pane_g3

0x373b,	// (0x0004d6a1) cell_gms_pane_g4

0x0003,

0xf1f6,	// (0x0005915c) cell_gms_pane_g

0x3744,	// (0x0004d6aa) grid_highlight_pane_cp09

0x8699,	// (0x000525ff) phob_pre_status_pane_g1

0x86a1,	// (0x00052607) phob_pre_status_pane_g2

0x86a9,	// (0x0005260f) phob_pre_status_pane_g3

0x86b1,	// (0x00052617) phob_pre_status_pane_g4

0x0004,

0xf5f4,	// (0x0005955a) phob_pre_status_pane_g

0x86c1,	// (0x00052627) phob_pre_status_pane_t1

0x86cf,	// (0x00052635) phob_pre_status_pane_t2

0x86dd,	// (0x00052643) phob_pre_status_pane_t3

0x0002,

0xf5ff,	// (0x00059565) phob_pre_status_pane_t

0x374c,	// (0x0004d6b2) bg_list_pane_cp05

0x67e4,	// (0x0005074a) grid_vorec_pane

0x67ec,	// (0x00050752) vorec_t1

0x67fa,	// (0x00050760) vorec_t2

0x6808,	// (0x0005076e) vorec_t3

0x6816,	// (0x0005077c) vorec_t4

0xd995,	// (0x000578fb) vorec_t5

0xd9a3,	// (0x00057909) vorec_t6

0x0004,

0xf1ff,	// (0x00059165) vorec_t

0xd9b1,	// (0x00057917) wait_bar_pane_cp01

0x6832,	// (0x00050798) cell_vorec_pane_ParamLimits

0x6832,	// (0x00050798) cell_vorec_pane

0x6845,	// (0x000507ab) cell_vorec_pane_g1

0x326f,	// (0x0004d1d5) grid_highlight_pane_cp05

0x685b,	// (0x000507c1) cams_zoom_pane

0x6867,	// (0x000507cd) image_vga_pane

0x6874,	// (0x000507da) main_camera_pane_g1

0x6880,	// (0x000507e6) main_camera_pane_g2

0x688c,	// (0x000507f2) main_camera_pane_g3

0x6898,	// (0x000507fe) main_camera_pane_g4

0x68a4,	// (0x0005080a) main_camera_pane_g5

0x68b0,	// (0x00050816) main_camera_pane_g6

0x68bc,	// (0x00050822) main_camera_pane_g7

0x0007,

0xf20a,	// (0x00059170) main_camera_pane_g

0x68c8,	// (0x0005082e) main_camera_pane_t1

0x68da,	// (0x00050840) main_camera_pane_t2

0x0001,

0xf21b,	// (0x00059181) main_camera_pane_t

0x68fe,	// (0x00050864) cams_zoom_pane_cp_ParamLimits

0x68fe,	// (0x00050864) cams_zoom_pane_cp

0x6922,	// (0x00050888) image_cif_pane_ParamLimits

0x6922,	// (0x00050888) image_cif_pane

0x693c,	// (0x000508a2) image_subqcif_pane

0x6944,	// (0x000508aa) main_video_pane_g1_ParamLimits

0x6944,	// (0x000508aa) main_video_pane_g1

0x6964,	// (0x000508ca) main_video_pane_g2_ParamLimits

0x6964,	// (0x000508ca) main_video_pane_g2

0x6992,	// (0x000508f8) main_video_pane_g3_ParamLimits

0x6992,	// (0x000508f8) main_video_pane_g3

0x69bb,	// (0x00050921) main_video_pane_g4_ParamLimits

0x69bb,	// (0x00050921) main_video_pane_g4

0x69e4,	// (0x0005094a) main_video_pane_g5_ParamLimits

0x69e4,	// (0x0005094a) main_video_pane_g5

0x3760,	// (0x0004d6c6) main_video_pane_g6_ParamLimits

0x3760,	// (0x0004d6c6) main_video_pane_g6

0x0006,

0xf220,	// (0x00059186) main_video_pane_g_ParamLimits

0xf220,	// (0x00059186) main_video_pane_g

0x6a06,	// (0x0005096c) main_video_pane_t1_ParamLimits

0x6a06,	// (0x0005096c) main_video_pane_t1

0x377a,	// (0x0004d6e0) cams_zoom_pane_g1

0x3783,	// (0x0004d6e9) cams_zoom_pane_g2

0x378c,	// (0x0004d6f2) cams_zoom_pane_g3

0x3795,	// (0x0004d6fb) cams_zoom_pane_g4

0x0003,

0xf22f,	// (0x00059195) cams_zoom_pane_g

0x6a50,	// (0x000509b6) grid_cams_pane

0x6a5c,	// (0x000509c2) linegrid_cams_pane

0x6a68,	// (0x000509ce) cell_cams_pane_ParamLimits

0x6a68,	// (0x000509ce) cell_cams_pane

0x379e,	// (0x0004d704) cams_burst_image_pane

0x37a6,	// (0x0004d70c) cell_cams_pane_g1

0x326f,	// (0x0004d1d5) grid_highlight_pane_cp03

0x35f0,	// (0x0004d556) mp_bg_pane_g1

0x326f,	// (0x0004d1d5) bg_list_pane_cp03

0xe362,	// (0x000582c8) bg_mp_pane

0xe36a,	// (0x000582d0) grid_mp_pane

0xe372,	// (0x000582d8) media_player_g1

0xe37a,	// (0x000582e0) media_player_t1

0xe388,	// (0x000582ee) media_player_t2

0xe396,	// (0x000582fc) media_player_t3

0xe3a4,	// (0x0005830a) media_player_t4

0xe3b2,	// (0x00058318) media_player_t5

0xe3c0,	// (0x00058326) media_player_t6

0xe3ce,	// (0x00058334) media_player_t7

0x0006,

0xf5de,	// (0x00059544) media_player_t

0xe3dc,	// (0x00058342) wait_bar_pane_cp02

0xf5c3,	// (0x00059529) main_usb_pane_t

0x8690,	// (0x000525f6) cell_mp_pane

0x35f0,	// (0x0004d556) cell_mp_pane_g1

0x326f,	// (0x0004d1d5) grid_highlight_pane_cp06

0x37ae,	// (0x0004d714) grid_skin_colour_pane

0x37b6,	// (0x0004d71c) list_highlight_pane_cp03

0x6b90,	// (0x00050af6) skin_g1

0x37be,	// (0x0004d724) skin_t1

0x37cd,	// (0x0004d733) skin_t2

0x0001,

0xf264,	// (0x000591ca) skin_t

0x6b98,	// (0x00050afe) cell_skin_colour_pane_ParamLimits

0x6b98,	// (0x00050afe) cell_skin_colour_pane

0x37db,	// (0x0004d741) cell_skin_colour_pane_g1

0x6c0e,	// (0x00050b74) call_video_g1_ParamLimits

0x6c0e,	// (0x00050b74) call_video_g1

0x6c1a,	// (0x00050b80) call_video_g2_ParamLimits

0x6c1a,	// (0x00050b80) call_video_g2

0x0001,

0xf269,	// (0x000591cf) call_video_g_ParamLimits

0xf269,	// (0x000591cf) call_video_g

0x6c6a,	// (0x00050bd0) call_video_uplink_pane_cp1_ParamLimits

0x6c6a,	// (0x00050bd0) call_video_uplink_pane_cp1

0x37ed,	// (0x0004d753) call_video_uplink_pane_cp2

0x6d26,	// (0x00050c8c) video_down_crop_pane_ParamLimits

0x6d26,	// (0x00050c8c) video_down_crop_pane

0x6df0,	// (0x00050d56) video_down_pane_ParamLimits

0x6df0,	// (0x00050d56) video_down_pane

0x37f5,	// (0x0004d75b) video_down_subqcif_pane_ParamLimits

0x37f5,	// (0x0004d75b) video_down_subqcif_pane

0x380d,	// (0x0004d773) video_down_subqcif_pane_cp_ParamLimits

0x380d,	// (0x0004d773) video_down_subqcif_pane_cp

0x3831,	// (0x0004d797) im_reading_pane_ParamLimits

0x3831,	// (0x0004d797) im_reading_pane

0x6eba,	// (0x00050e20) im_writing_pane_ParamLimits

0x6eba,	// (0x00050e20) im_writing_pane

0x6ed0,	// (0x00050e36) im_reading_pane_t1

0x384b,	// (0x0004d7b1) list_im_pane

0x385c,	// (0x0004d7c2) scroll_pane_cp07

0x6f08,	// (0x00050e6e) im_writing_pane_t1_ParamLimits

0x6f08,	// (0x00050e6e) im_writing_pane_t1

0x3875,	// (0x0004d7db) im_writing_pane_t2_ParamLimits

0x3875,	// (0x0004d7db) im_writing_pane_t2

0x0001,

0xf273,	// (0x000591d9) im_writing_pane_t_ParamLimits

0xf273,	// (0x000591d9) im_writing_pane_t

0x326f,	// (0x0004d1d5) input_focus_pane_cp04

0x326f,	// (0x0004d1d5) input_focus_pane_cp05

0x6f1a,	// (0x00050e80) list_im_single_pane_ParamLimits

0x6f1a,	// (0x00050e80) list_im_single_pane

0x3892,	// (0x0004d7f8) list_single_im_pane_t1

0x8656,	// (0x000525bc) blid_accuracy_pane

0x865e,	// (0x000525c4) blid_compass_pane

0x8666,	// (0x000525cc) main_location_t1

0x8674,	// (0x000525da) main_location_t2

0x8682,	// (0x000525e8) main_location_t3

0x0002,

0xf5ed,	// (0x00059553) main_location_t

0x326f,	// (0x0004d1d5) aid_levels_location

0x35f0,	// (0x0004d556) blid_accuracy_pane_g1

0x35f0,	// (0x0004d556) blid_accuracy_pane_g2

0x0001,

0xf2d5,	// (0x0005923b) blid_accuracy_pane_g

0x38cc,	// (0x0004d832) wml_content_pane

0x390a,	// (0x0004d870) wml_button_pane_ParamLimits

0x390a,	// (0x0004d870) wml_button_pane

0x6f2e,	// (0x00050e94) wml_list_single_large_pane_ParamLimits

0x6f2e,	// (0x00050e94) wml_list_single_large_pane

0x6f44,	// (0x00050eaa) wml_list_single_medium_pane_ParamLimits

0x6f44,	// (0x00050eaa) wml_list_single_medium_pane

0x6f5c,	// (0x00050ec2) wml_list_single_small_pane_ParamLimits

0x6f5c,	// (0x00050ec2) wml_list_single_small_pane

0x391e,	// (0x0004d884) wml_selection_box_pane_ParamLimits

0x391e,	// (0x0004d884) wml_selection_box_pane

0x3931,	// (0x0004d897) wml_list_single_pane_t1

0x3940,	// (0x0004d8a6) wml_list_single_medium_pane_t1

0x394f,	// (0x0004d8b5) wml_list_single_large_pane_t1

0x395e,	// (0x0004d8c4) input_focus_pane_cp02_ParamLimits

0x395e,	// (0x0004d8c4) input_focus_pane_cp02

0x3971,	// (0x0004d8d7) wml_selection_box_pane_g1

0x397a,	// (0x0004d8e0) wml_selection_box_pane_t1_ParamLimits

0x397a,	// (0x0004d8e0) wml_selection_box_pane_t1

0x34ca,	// (0x0004d430) bg_wml_button_pane_ParamLimits

0x34ca,	// (0x0004d430) bg_wml_button_pane

0x3992,	// (0x0004d8f8) wml_button_pane_g1

0x399a,	// (0x0004d900) wml_button_pane_t1

0x3992,	// (0x0004d8f8) wml_button_bg_pane_g1

0x39aa,	// (0x0004d910) wml_button_bg_pane_g2

0x39b2,	// (0x0004d918) wml_button_bg_pane_g3

0x39ba,	// (0x0004d920) wml_button_bg_pane_g4

0x39c2,	// (0x0004d928) wml_button_bg_pane_g5

0x39ca,	// (0x0004d930) wml_button_bg_pane_g6

0x39d2,	// (0x0004d938) wml_button_bg_pane_g7

0x39da,	// (0x0004d940) wml_button_bg_pane_g8

0x39e2,	// (0x0004d948) wml_button_bg_pane_g9

0x0008,

0xf278,	// (0x000591de) wml_button_bg_pane_g

0x6f76,	// (0x00050edc) bg_list_pane_cp02

0x39ea,	// (0x0004d950) mce_header_pane_ParamLimits

0x39ea,	// (0x0004d950) mce_header_pane

0x3a00,	// (0x0004d966) mce_icon_pane

0x3a00,	// (0x0004d966) mce_image_pane

0x3a09,	// (0x0004d96f) mce_text_pane_ParamLimits

0x3a09,	// (0x0004d96f) mce_text_pane

0x6f7e,	// (0x00050ee4) scroll_pane_cp03

0x3902,	// (0x0004d868) scroll_pane_cp04

0x3a1c,	// (0x0004d982) scroll_pane_cp05_ParamLimits

0x3a1c,	// (0x0004d982) scroll_pane_cp05

0x6f86,	// (0x00050eec) mce_header_field_pane_ParamLimits

0x6f86,	// (0x00050eec) mce_header_field_pane

0x6fa6,	// (0x00050f0c) mce_header_field_pane_2_ParamLimits

0x6fa6,	// (0x00050f0c) mce_header_field_pane_2

0x6fbc,	// (0x00050f22) mce_header_field_pane_3

0x6fc4,	// (0x00050f2a) list_single_mce_message_pane_ParamLimits

0x6fc4,	// (0x00050f2a) list_single_mce_message_pane

0x6fd9,	// (0x00050f3f) list_single_mce_smart_pane_ParamLimits

0x6fd9,	// (0x00050f3f) list_single_mce_smart_pane

0x3a28,	// (0x0004d98e) input_focus_pane_cp03

0x3a31,	// (0x0004d997) list_header_data_pane

0x6ff9,	// (0x00050f5f) mce_header_field_pane_t1

0x7007,	// (0x00050f6d) list_single_mce_header_pane_ParamLimits

0x7007,	// (0x00050f6d) list_single_mce_header_pane

0x3a39,	// (0x0004d99f) list_single_mce_header_pane_t1

0x3a48,	// (0x0004d9ae) list_single_mce_message_pane_g1

0x3a50,	// (0x0004d9b6) list_single_mce_message_pane_t1

0x7043,	// (0x00050fa9) bg_cale_heading_pane_cp01_ParamLimits

0x7043,	// (0x00050fa9) bg_cale_heading_pane_cp01

0x3a5e,	// (0x0004d9c4) bg_cale_pane_cp02_ParamLimits

0x3a5e,	// (0x0004d9c4) bg_cale_pane_cp02

0x707d,	// (0x00050fe3) cale_month_corner_pane

0x7095,	// (0x00050ffb) cale_month_day_heading_pane_ParamLimits

0x7095,	// (0x00050ffb) cale_month_day_heading_pane

0x70cf,	// (0x00051035) cale_month_pane_g1_ParamLimits

0x70cf,	// (0x00051035) cale_month_pane_g1

0x70fe,	// (0x00051064) cale_month_pane_g2_ParamLimits

0x70fe,	// (0x00051064) cale_month_pane_g2

0x7122,	// (0x00051088) cale_month_pane_g3_ParamLimits

0x7122,	// (0x00051088) cale_month_pane_g3

0x715e,	// (0x000510c4) cale_month_pane_g4_ParamLimits

0x715e,	// (0x000510c4) cale_month_pane_g4

0x719a,	// (0x00051100) cale_month_pane_g5_ParamLimits

0x719a,	// (0x00051100) cale_month_pane_g5

0x71d6,	// (0x0005113c) cale_month_pane_g6_ParamLimits

0x71d6,	// (0x0005113c) cale_month_pane_g6

0x7212,	// (0x00051178) cale_month_pane_g7_ParamLimits

0x7212,	// (0x00051178) cale_month_pane_g7

0x724e,	// (0x000511b4) cale_month_pane_g8_ParamLimits

0x724e,	// (0x000511b4) cale_month_pane_g8

0x728a,	// (0x000511f0) cale_month_pane_g9_ParamLimits

0x728a,	// (0x000511f0) cale_month_pane_g9

0x72c4,	// (0x0005122a) cale_month_pane_g10_ParamLimits

0x72c4,	// (0x0005122a) cale_month_pane_g10

0x72fe,	// (0x00051264) cale_month_pane_g11_ParamLimits

0x72fe,	// (0x00051264) cale_month_pane_g11

0x7338,	// (0x0005129e) cale_month_pane_g12_ParamLimits

0x7338,	// (0x0005129e) cale_month_pane_g12

0x7372,	// (0x000512d8) cale_month_pane_g13_ParamLimits

0x7372,	// (0x000512d8) cale_month_pane_g13

0x000c,

0xf28b,	// (0x000591f1) cale_month_pane_g_ParamLimits

0xf28b,	// (0x000591f1) cale_month_pane_g

0x73ac,	// (0x00051312) cale_month_week_pane

0x73c4,	// (0x0005132a) grid_cale_month_pane_ParamLimits

0x73c4,	// (0x0005132a) grid_cale_month_pane

0x73f5,	// (0x0005135b) cale_month_day_heading_pane_t1

0x7428,	// (0x0005138e) cale_month_day_heading_pane_t2

0x7452,	// (0x000513b8) cale_month_day_heading_pane_t3

0x747c,	// (0x000513e2) cale_month_day_heading_pane_t4

0x74a6,	// (0x0005140c) cale_month_day_heading_pane_t5

0x74d0,	// (0x00051436) cale_month_day_heading_pane_t6

0x74fa,	// (0x00051460) cale_month_day_heading_pane_t7

0x0006,

0xf2a6,	// (0x0005920c) cale_month_day_heading_pane_t

0x36fa,	// (0x0004d660) bg_cale_side_pane_cp01

0x7524,	// (0x0005148a) cale_month_week_pane_t1

0x753d,	// (0x000514a3) cale_month_week_pane_t2

0x7556,	// (0x000514bc) cale_month_week_pane_t3

0x756f,	// (0x000514d5) cale_month_week_pane_t4

0x7588,	// (0x000514ee) cale_month_week_pane_t5

0x75a1,	// (0x00051507) cale_month_week_pane_t6

0x0005,

0xf2b5,	// (0x0005921b) cale_month_week_pane_t

0x75ba,	// (0x00051520) cell_cale_month_pane_ParamLimits

0x75ba,	// (0x00051520) cell_cale_month_pane

0x76d2,	// (0x00051638) cell_cale_month_pane_g1

0x76de,	// (0x00051644) cell_cale_month_pane_t1_ParamLimits

0x76de,	// (0x00051644) cell_cale_month_pane_t1

0x3708,	// (0x0004d66e) grid_highlight_pane_cp08

0x35f0,	// (0x0004d556) main_smil_g1

0x770a,	// (0x00051670) smil_status_pane

0x3a9d,	// (0x0004da03) smil_text_pane

0xe242,	// (0x000581a8) bg_popup_call3_rect_pane_g8

0xe24a,	// (0x000581b0) bg_popup_call3_rect_pane_g9

0x0008,

0xf56e,	// (0x000594d4) bg_popup_call3_rect_pane_g

0xe4d1,	// (0x00058437) smil_status_volume_pane_g1

0x3aa7,	// (0x0004da0d) smil_status_pane_t1

0x8a08,	// (0x0005296e) volume_smil_pane

0x3abe,	// (0x0004da24) list_smil_text_pane

0x771b,	// (0x00051681) scroll_pane_cp011

0x7724,	// (0x0005168a) smil_text_list_pane_t1_ParamLimits

0x7724,	// (0x0005168a) smil_text_list_pane_t1

0x7763,	// (0x000516c9) aid_volume_smil_ParamLimits

0x7763,	// (0x000516c9) aid_volume_smil

0x35f0,	// (0x0004d556) smil_volume_pane_g1

0x35f0,	// (0x0004d556) smil_volume_pane_g2

0x0001,

0xf2d5,	// (0x0005923b) smil_volume_pane_g

0x6133,	// (0x00050099) listscroll_cale_day_pane

0x3ac8,	// (0x0004da2e) bg_cale_pane

0x3ae0,	// (0x0004da46) list_cale_pane

0x3b03,	// (0x0004da69) scroll_pane_cp09

0x3b14,	// (0x0004da7a) cale_bg_pane_g1

0x3b1c,	// (0x0004da82) cale_bg_pane_g2

0x3b24,	// (0x0004da8a) cale_bg_pane_g3

0x3b2c,	// (0x0004da92) cale_bg_pane_g4

0x3b34,	// (0x0004da9a) cale_bg_pane_g5

0x3b3c,	// (0x0004daa2) cale_bg_pane_g6

0x3b44,	// (0x0004daaa) cale_bg_pane_g7

0x3b4c,	// (0x0004dab2) cale_bg_pane_g8

0x3b54,	// (0x0004daba) cale_bg_pane_g9

0x0008,

0xf2da,	// (0x00059240) cale_bg_pane_g

0x7785,	// (0x000516eb) list_cale_time_pane_ParamLimits

0x7785,	// (0x000516eb) list_cale_time_pane

0x3b64,	// (0x0004daca) list_cale_time_pane_g1_ParamLimits

0x3b64,	// (0x0004daca) list_cale_time_pane_g1

0x3b70,	// (0x0004dad6) list_cale_time_pane_g2_ParamLimits

0x3b70,	// (0x0004dad6) list_cale_time_pane_g2

0x7797,	// (0x000516fd) list_cale_time_pane_g3_ParamLimits

0x7797,	// (0x000516fd) list_cale_time_pane_g3

0x77a3,	// (0x00051709) list_cale_time_pane_g4_ParamLimits

0x77a3,	// (0x00051709) list_cale_time_pane_g4

0x77af,	// (0x00051715) list_cale_time_pane_g5_ParamLimits

0x77af,	// (0x00051715) list_cale_time_pane_g5

0x0005,

0xf2ed,	// (0x00059253) list_cale_time_pane_g_ParamLimits

0xf2ed,	// (0x00059253) list_cale_time_pane_g

0x3b8a,	// (0x0004daf0) list_cale_time_pane_t1_ParamLimits

0x3b8a,	// (0x0004daf0) list_cale_time_pane_t1

0x3bb2,	// (0x0004db18) list_cale_time_pane_t2_ParamLimits

0x3bb2,	// (0x0004db18) list_cale_time_pane_t2

0x7b46,	// (0x00051aac) aid_blid_cardinal_pane

0x7b84,	// (0x00051aea) compass_pane_t4

0x3bda,	// (0x0004db40) list_cale_time_pane_t4_ParamLimits

0x3bda,	// (0x0004db40) list_cale_time_pane_t4

0x7b92,	// (0x00051af8) compass_pane_t5

0x7ba0,	// (0x00051b06) compass_pane_t6

0x7bae,	// (0x00051b14) compass_pane_t7

0x404c,	// (0x0004dfb2) navi_pane_cc_t1

0x4227,	// (0x0004e18d) aid_phob_thumbnail_center_pane

0x81e3,	// (0x00052149) main_postcard_pane_g4_ParamLimits

0x0002,

0xf2fa,	// (0x00059260) list_cale_time_pane_t_ParamLimits

0xf2fa,	// (0x00059260) list_cale_time_pane_t

0x2ec8,	// (0x0004ce2e) bg_popup_window_pane_cp02_ParamLimits

0x2ec8,	// (0x0004ce2e) bg_popup_window_pane_cp02

0x3c02,	// (0x0004db68) heading_pane_cp01_ParamLimits

0x3c02,	// (0x0004db68) heading_pane_cp01

0x3c0e,	// (0x0004db74) loc_req_pane_ParamLimits

0x3c0e,	// (0x0004db74) loc_req_pane

0x3c1e,	// (0x0004db84) loc_type_pane_ParamLimits

0x3c1e,	// (0x0004db84) loc_type_pane

0x3c30,	// (0x0004db96) loc_type_pane_t1_ParamLimits

0x3c30,	// (0x0004db96) loc_type_pane_t1

0x3c42,	// (0x0004dba8) loc_type_pane_t2_ParamLimits

0x3c42,	// (0x0004dba8) loc_type_pane_t2

0x3c54,	// (0x0004dbba) loc_type_pane_t3_ParamLimits

0x3c54,	// (0x0004dbba) loc_type_pane_t3

0x0002,

0xf301,	// (0x00059267) loc_type_pane_t_ParamLimits

0xf301,	// (0x00059267) loc_type_pane_t

0x3c66,	// (0x0004dbcc) list_loc_req_pane

0x3c70,	// (0x0004dbd6) scroll_pane_cp012

0x3cfc,	// (0x0004dc62) list_single_loc_request_popup_menu_pane_ParamLimits

0x3cfc,	// (0x0004dc62) list_single_loc_request_popup_menu_pane

0x3c79,	// (0x0004dbdf) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0x3c79,	// (0x0004dbdf) list_single_loc_request_popup_menu_pane_g1

0x3c85,	// (0x0004dbeb) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0x3c85,	// (0x0004dbeb) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf308,	// (0x0005926e) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf308,	// (0x0005926e) list_single_loc_request_popup_menu_pane_g

0x3c91,	// (0x0004dbf7) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0x3c91,	// (0x0004dbf7) list_single_loc_request_popup_menu_pane_t1

0x77bb,	// (0x00051721) bg_popup_window_pane_cp03_ParamLimits

0x77bb,	// (0x00051721) bg_popup_window_pane_cp03

0x77c9,	// (0x0005172f) heading_loc_req_pane_ParamLimits

0x77c9,	// (0x0005172f) heading_loc_req_pane

0x77d5,	// (0x0005173b) popup_dyc_status_message_window_g1_ParamLimits

0x77d5,	// (0x0005173b) popup_dyc_status_message_window_g1

0x77e1,	// (0x00051747) popup_dyc_status_message_window_t1_ParamLimits

0x77e1,	// (0x00051747) popup_dyc_status_message_window_t1

0x77f3,	// (0x00051759) popup_dyc_status_message_window_t2_ParamLimits

0x77f3,	// (0x00051759) popup_dyc_status_message_window_t2

0x7805,	// (0x0005176b) popup_dyc_status_message_window_t3_ParamLimits

0x7805,	// (0x0005176b) popup_dyc_status_message_window_t3

0x0002,

0xf30d,	// (0x00059273) popup_dyc_status_message_window_t_ParamLimits

0xf30d,	// (0x00059273) popup_dyc_status_message_window_t

0x326f,	// (0x0004d1d5) bg_heading_pane_cp01

0x3ca7,	// (0x0004dc0d) heading_loc_req_pane_g1

0x3caf,	// (0x0004dc15) heading_loc_req_pane_g2

0x3cb7,	// (0x0004dc1d) heading_loc_req_pane_g3

0x0002,

0xf314,	// (0x0005927a) heading_loc_req_pane_g

0x3cbf,	// (0x0004dc25) heading_loc_req_pane_t1

0x3cce,	// (0x0004dc34) bg_popup_sub_pane_cp01_ParamLimits

0x3cce,	// (0x0004dc34) bg_popup_sub_pane_cp01

0x3cdc,	// (0x0004dc42) popup_cale_events_window_g1_ParamLimits

0x3cdc,	// (0x0004dc42) popup_cale_events_window_g1

0x3d0e,	// (0x0004dc74) popup_cale_events_window_g2_ParamLimits

0x3d0e,	// (0x0004dc74) popup_cale_events_window_g2

0x0001,

0xf348,	// (0x000592ae) popup_cale_events_window_g_ParamLimits

0xf348,	// (0x000592ae) popup_cale_events_window_g

0x3d2e,	// (0x0004dc94) popup_cale_events_window_t1_ParamLimits

0x3d2e,	// (0x0004dc94) popup_cale_events_window_t1

0x3d40,	// (0x0004dca6) popup_cale_events_window_t2_ParamLimits

0x3d40,	// (0x0004dca6) popup_cale_events_window_t2

0x3d7e,	// (0x0004dce4) popup_cale_events_window_t3_ParamLimits

0x3d7e,	// (0x0004dce4) popup_cale_events_window_t3

0x3db8,	// (0x0004dd1e) popup_cale_events_window_t4_ParamLimits

0x3db8,	// (0x0004dd1e) popup_cale_events_window_t4

0x0003,

0xf34d,	// (0x000592b3) popup_cale_events_window_t_ParamLimits

0xf34d,	// (0x000592b3) popup_cale_events_window_t

0x7900,	// (0x00051866) call_type_pane

0x3e63,	// (0x0004ddc9) popup_call_status_window_g1

0x790c,	// (0x00051872) popup_call_status_window_g2

0x7918,	// (0x0005187e) popup_call_status_window_g3

0x0002,

0xf356,	// (0x000592bc) popup_call_status_window_g

0x3dee,	// (0x0004dd54) call_type_pane_g1

0x3df7,	// (0x0004dd5d) call_type_pane_g2

0x0001,

0xf35d,	// (0x000592c3) call_type_pane_g

0x326f,	// (0x0004d1d5) bg_popup_sub_pane_cp02

0x3e00,	// (0x0004dd66) listscroll_popup_wml_pane

0x3e08,	// (0x0004dd6e) list_wml_pane

0x3e12,	// (0x0004dd78) scroll_pane_cp013

0x7924,	// (0x0005188a) list_single_graphic_popup_wml_pane_ParamLimits

0x7924,	// (0x0005188a) list_single_graphic_popup_wml_pane

0x35f0,	// (0x0004d556) list_single_graphic_popup_wml_pane_g1

0x3e1b,	// (0x0004dd81) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf362,	// (0x000592c8) list_single_graphic_popup_wml_pane_g

0x3e23,	// (0x0004dd89) list_single_graphic_popup_wml_pane_t1

0x3e31,	// (0x0004dd97) aid_call_pane

0x34c2,	// (0x0004d428) popup_clock_analogue_window_g1

0x34c2,	// (0x0004d428) popup_clock_analogue_window_g2

0x7938,	// (0x0005189e) popup_clock_analogue_window_g3

0x7938,	// (0x0005189e) popup_clock_analogue_window_g4

0x35f0,	// (0x0004d556) popup_clock_analogue_window_g5

0x0004,

0xf367,	// (0x000592cd) popup_clock_analogue_window_g

0x7940,	// (0x000518a6) popup_clock_analogue_window_t1

0x794e,	// (0x000518b4) clock_digital_number_pane_ParamLimits

0x794e,	// (0x000518b4) clock_digital_number_pane

0x795a,	// (0x000518c0) clock_digital_number_pane_cp02_ParamLimits

0x795a,	// (0x000518c0) clock_digital_number_pane_cp02

0x7966,	// (0x000518cc) clock_digital_number_pane_cp03_ParamLimits

0x7966,	// (0x000518cc) clock_digital_number_pane_cp03

0x7972,	// (0x000518d8) clock_digital_number_pane_cp04_ParamLimits

0x7972,	// (0x000518d8) clock_digital_number_pane_cp04

0x797e,	// (0x000518e4) clock_digital_separator_pane_ParamLimits

0x797e,	// (0x000518e4) clock_digital_separator_pane

0x798a,	// (0x000518f0) popup_clock_digital_window_t1

0x35f0,	// (0x0004d556) clock_digital_number_pane_g1

0x35f0,	// (0x0004d556) clock_digital_number_pane_g2

0x0001,

0xf2d5,	// (0x0005923b) clock_digital_number_pane_g

0x35f0,	// (0x0004d556) clock_digital_separator_pane_g1

0x35f0,	// (0x0004d556) clock_digital_separator_pane_g2

0x0001,

0xf2d5,	// (0x0005923b) clock_digital_separator_pane_g

0x326f,	// (0x0004d1d5) bg_popup_window_pane_cp04

0x3e41,	// (0x0004dda7) heading_pane_cp03

0x3e49,	// (0x0004ddaf) listscroll_popup_gms_pane

0x3e51,	// (0x0004ddb7) grid_large_graphic_popup_pane

0x3e5b,	// (0x0004ddc1) listscroll_popup_gms_pane_g1

0x3e71,	// (0x0004ddd7) listscroll_popup_gms_pane_g2

0x0001,

0xf372,	// (0x000592d8) listscroll_popup_gms_pane_g

0x3902,	// (0x0004d868) scroll_pane_cp014

0x79a7,	// (0x0005190d) cell_large_graphic_popup_pane_ParamLimits

0x79a7,	// (0x0005190d) cell_large_graphic_popup_pane

0x79be,	// (0x00051924) cell_large_graphic_popup_pane_g1_ParamLimits

0x79be,	// (0x00051924) cell_large_graphic_popup_pane_g1

0x3e79,	// (0x0004dddf) cell_large_graphic_popup_pane_g2_ParamLimits

0x3e79,	// (0x0004dddf) cell_large_graphic_popup_pane_g2

0x3e85,	// (0x0004ddeb) cell_large_graphic_popup_pane_g3_ParamLimits

0x3e85,	// (0x0004ddeb) cell_large_graphic_popup_pane_g3

0x3e92,	// (0x0004ddf8) cell_large_graphic_popup_pane_g4_ParamLimits

0x3e92,	// (0x0004ddf8) cell_large_graphic_popup_pane_g4

0x0003,

0xf377,	// (0x000592dd) cell_large_graphic_popup_pane_g_ParamLimits

0xf377,	// (0x000592dd) cell_large_graphic_popup_pane_g

0x3ea2,	// (0x0004de08) grid_highlight_pane_cp010

0x35f0,	// (0x0004d556) bg_popup_call_pane_g1

0x3eac,	// (0x0004de12) list_single_graphic_popup_conf_pane_ParamLimits

0x3eac,	// (0x0004de12) list_single_graphic_popup_conf_pane

0x3ebf,	// (0x0004de25) list_highlight_pane_cp01

0x3ec8,	// (0x0004de2e) list_single_graphic_popup_conf_pane_g1

0x3ed0,	// (0x0004de36) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf380,	// (0x000592e6) list_single_graphic_popup_conf_pane_g

0x3ed8,	// (0x0004de3e) list_single_graphic_popup_conf_pane_t1

0x3ee6,	// (0x0004de4c) linegrid_cams_pane_g1

0x79ca,	// (0x00051930) linegrid_cams_pane_g2

0x36a8,	// (0x0004d60e) linegrid_cams_pane_g3

0x3eef,	// (0x0004de55) linegrid_cams_pane_g4

0x79d3,	// (0x00051939) linegrid_cams_pane_g5

0x79dc,	// (0x00051942) linegrid_cams_pane_g6

0x373b,	// (0x0004d6a1) linegrid_cams_pane_g7

0x0006,

0xf385,	// (0x000592eb) linegrid_cams_pane_g

0x3ef8,	// (0x0004de5e) popup_clock_analogue_window

0x3ef8,	// (0x0004de5e) popup_clock_digital_window

0x326f,	// (0x0004d1d5) popup_phob_thumbnail_window

0x35f0,	// (0x0004d556) call_video_uplink_pane_g1

0x3f01,	// (0x0004de67) call_video_uplink_pane_g2

0x0001,

0xf394,	// (0x000592fa) call_video_uplink_pane_g

0x3708,	// (0x0004d66e) video_uplink_pane

0x3f09,	// (0x0004de6f) mce_image_pane_g1

0x79e5,	// (0x0005194b) mce_image_pane_g2

0x79ed,	// (0x00051953) mce_image_pane_g3

0x79f5,	// (0x0005195b) mce_image_pane_g4

0x79fd,	// (0x00051963) mce_image_pane_g5

0x0004,

0xf399,	// (0x000592ff) mce_image_pane_g

0x3f13,	// (0x0004de79) control_top_pane_stacon_cp01_ParamLimits

0x3f13,	// (0x0004de79) control_top_pane_stacon_cp01

0x3f23,	// (0x0004de89) uni_indicator_pane_stacon_cp01_ParamLimits

0x3f23,	// (0x0004de89) uni_indicator_pane_stacon_cp01

0x3f34,	// (0x0004de9a) bg_popup_sub_pane_cp03

0x7a05,	// (0x0005196b) chi_dic_find_pane

0x7a0d,	// (0x00051973) listscroll_chi_dic_pane

0x7a16,	// (0x0005197c) main_pane_chidic_g1

0x7a27,	// (0x0005198d) chi_dic_find_pane_t1

0x3f3e,	// (0x0004dea4) find_chidic_pane

0x3f47,	// (0x0004dead) chi_dic_list_pane_ParamLimits

0x3f47,	// (0x0004dead) chi_dic_list_pane

0x3f58,	// (0x0004debe) scroll_pane_cp020

0x7a35,	// (0x0005199b) find_chidic_pane_t1

0x326f,	// (0x0004d1d5) input_focus_pane_cp06

0x7a44,	// (0x000519aa) list_chi_dic_pane_ParamLimits

0x7a44,	// (0x000519aa) list_chi_dic_pane

0x7a56,	// (0x000519bc) list_chi_dic_pane_t1_ParamLimits

0x7a56,	// (0x000519bc) list_chi_dic_pane_t1

0x326f,	// (0x0004d1d5) list_highlight_pane_cp020

0x3f60,	// (0x0004dec6) bg_cale_heading_pane_g1

0x7a69,	// (0x000519cf) bg_cale_heading_pane_g2

0x7a71,	// (0x000519d7) bg_cale_heading_pane_g3

0x7a79,	// (0x000519df) bg_cale_heading_pane_g4

0x7a81,	// (0x000519e7) bg_cale_heading_pane_g5

0x7a89,	// (0x000519ef) bg_cale_heading_pane_g6

0x7a91,	// (0x000519f7) bg_cale_heading_pane_g7

0x7a99,	// (0x000519ff) bg_cale_heading_pane_g8

0x7aa1,	// (0x00051a07) bg_cale_heading_pane_g9

0x0008,

0xf3a4,	// (0x0005930a) bg_cale_heading_pane_g

0x3f60,	// (0x0004dec6) bg_cale_side_pane_g1

0x7aa9,	// (0x00051a0f) bg_cale_side_pane_g2

0x7ab1,	// (0x00051a17) bg_cale_side_pane_g3

0x7ab9,	// (0x00051a1f) bg_cale_side_pane_g4

0x7ac1,	// (0x00051a27) bg_cale_side_pane_g5

0x7ac9,	// (0x00051a2f) bg_cale_side_pane_g6

0x7ad1,	// (0x00051a37) bg_cale_side_pane_g7

0x7ad9,	// (0x00051a3f) bg_cale_side_pane_g8

0x7ae1,	// (0x00051a47) bg_cale_side_pane_g9

0x0008,

0xf3b7,	// (0x0005931d) bg_cale_side_pane_g

0x7ae9,	// (0x00051a4f) popup_call_status_window_ParamLimits

0x7ae9,	// (0x00051a4f) popup_call_status_window

0x3f68,	// (0x0004dece) stacon_top_pane

0x3f70,	// (0x0004ded6) status_pane_ParamLimits

0x3f70,	// (0x0004ded6) status_pane

0x3f85,	// (0x0004deeb) status_small_pane

0x3f8d,	// (0x0004def3) control_pane

0x326f,	// (0x0004d1d5) stacon_bottom_pane

0x3f95,	// (0x0004defb) list_single_mce_smart_pane_t1_ParamLimits

0x3f95,	// (0x0004defb) list_single_mce_smart_pane_t1

0x3fa8,	// (0x0004df0e) list_single_mce_smart_pane_t2_ParamLimits

0x3fa8,	// (0x0004df0e) list_single_mce_smart_pane_t2

0x0001,

0xf3ca,	// (0x00059330) list_single_mce_smart_pane_t_ParamLimits

0xf3ca,	// (0x00059330) list_single_mce_smart_pane_t

0x7af5,	// (0x00051a5b) compass_pane

0x7afe,	// (0x00051a64) main_location2_pane_t1

0x7b10,	// (0x00051a76) main_location2_pane_t2

0x7b22,	// (0x00051a88) main_location2_pane_t3

0x0003,

0xf3cf,	// (0x00059335) main_location2_pane_t

0x3fc7,	// (0x0004df2d) compass_pane_g1_ParamLimits

0x3fc7,	// (0x0004df2d) compass_pane_g1

0x7b66,	// (0x00051acc) compass_pane_t1

0x7b75,	// (0x00051adb) compass_pane_t2

0x0005,

0xf3d8,	// (0x0005933e) compass_pane_t

0x7bbc,	// (0x00051b22) text_secondary_cp61

0x4043,	// (0x0004dfa9) navi_pane_cams_g5

0x40bd,	// (0x0004e023) navi_pane_im_t1

0x40cb,	// (0x0004e031) navi_pane_mp_g1_ParamLimits

0x40cb,	// (0x0004e031) navi_pane_mp_g1

0x40df,	// (0x0004e045) navi_pane_mp_g2_ParamLimits

0x40df,	// (0x0004e045) navi_pane_mp_g2

0x40eb,	// (0x0004e051) navi_pane_mp_g3_ParamLimits

0x40eb,	// (0x0004e051) navi_pane_mp_g3

0x0002,

0xf3ec,	// (0x00059352) navi_pane_mp_g_ParamLimits

0xf3ec,	// (0x00059352) navi_pane_mp_g

0x40f7,	// (0x0004e05d) navi_pane_mp_t1

0x4105,	// (0x0004e06b) navi_pane_mp_t2

0x0002,

0xf3f3,	// (0x00059359) navi_pane_mp_t

0x4170,	// (0x0004e0d6) navi_pane_vt_g1

0x40f7,	// (0x0004e05d) navi_pane_vt_t1

0x4178,	// (0x0004e0de) navi_slider_pane

0x374c,	// (0x0004d6b2) zooming_pane

0x4188,	// (0x0004e0ee) navi_slider_pane_g1

0x7bf7,	// (0x00051b5d) navi_slider_pane_g2

0x0006,

0xf3fa,	// (0x00059360) navi_slider_pane_g

0x41ac,	// (0x0004e112) aid_levels_zoom

0x41b4,	// (0x0004e11a) zooming_pane_g1

0x41bc,	// (0x0004e122) zooming_pane_g2

0x41bc,	// (0x0004e122) zooming_pane_g3

0x0002,

0xf409,	// (0x0005936f) zooming_pane_g

0x41c4,	// (0x0004e12a) level_10_zoom

0x41cd,	// (0x0004e133) level_11_zoom

0x41d6,	// (0x0004e13c) level_1_zoom

0x41df,	// (0x0004e145) level_2_zoom

0x41e8,	// (0x0004e14e) level_3_zoom

0x41f1,	// (0x0004e157) level_4_zoom

0x41fa,	// (0x0004e160) level_5_zoom

0x4203,	// (0x0004e169) level_6_zoom

0x420c,	// (0x0004e172) level_7_zoom

0x4215,	// (0x0004e17b) level_8_zoom

0x421e,	// (0x0004e184) level_9_zoom

0x422f,	// (0x0004e195) popup_phob_thumbnail_window_g1

0x4237,	// (0x0004e19d) popup_phob_thumbnail_window_g2

0x0001,

0xf410,	// (0x00059376) popup_phob_thumbnail_window_g

0xe3e4,	// (0x0005834a) level_1_location

0xe3ec,	// (0x00058352) level_2_location

0xe3f4,	// (0x0005835a) level_3_location

0xe3fc,	// (0x00058362) level_4_location

0x374c,	// (0x0004d6b2) level_5_location

0x7c09,	// (0x00051b6f) mce_icon_pane_g1

0x7c11,	// (0x00051b77) mce_icon_pane_g2

0x0001,

0xf415,	// (0x0005937b) mce_icon_pane_g

0x7c19,	// (0x00051b7f) main_mup_pane_g1_ParamLimits

0x7c19,	// (0x00051b7f) main_mup_pane_g1

0x7c31,	// (0x00051b97) main_mup_pane_g2_ParamLimits

0x7c31,	// (0x00051b97) main_mup_pane_g2

0x7c4d,	// (0x00051bb3) main_mup_pane_g3_ParamLimits

0x7c4d,	// (0x00051bb3) main_mup_pane_g3

0x7c69,	// (0x00051bcf) main_mup_pane_g4_ParamLimits

0x7c69,	// (0x00051bcf) main_mup_pane_g4

0x7c85,	// (0x00051beb) main_mup_pane_g5_ParamLimits

0x7c85,	// (0x00051beb) main_mup_pane_g5

0x7ca2,	// (0x00051c08) main_mup_pane_g6_ParamLimits

0x7ca2,	// (0x00051c08) main_mup_pane_g6

0x7cbe,	// (0x00051c24) main_mup_pane_g7_ParamLimits

0x7cbe,	// (0x00051c24) main_mup_pane_g7

0x7cda,	// (0x00051c40) main_mup_pane_g8_ParamLimits

0x7cda,	// (0x00051c40) main_mup_pane_g8

0x7cf6,	// (0x00051c5c) main_mup_pane_g9_ParamLimits

0x7cf6,	// (0x00051c5c) main_mup_pane_g9

0x7d0d,	// (0x00051c73) main_mup_pane_g10_ParamLimits

0x7d0d,	// (0x00051c73) main_mup_pane_g10

0x7d24,	// (0x00051c8a) main_mup_pane_g11_ParamLimits

0x7d24,	// (0x00051c8a) main_mup_pane_g11

0x7d38,	// (0x00051c9e) main_mup_pane_g12_ParamLimits

0x7d38,	// (0x00051c9e) main_mup_pane_g12

0x7d44,	// (0x00051caa) main_mup_pane_g13_ParamLimits

0x7d44,	// (0x00051caa) main_mup_pane_g13

0x000c,

0xf41a,	// (0x00059380) main_mup_pane_g_ParamLimits

0xf41a,	// (0x00059380) main_mup_pane_g

0x7d58,	// (0x00051cbe) main_mup_pane_t1_ParamLimits

0x7d58,	// (0x00051cbe) main_mup_pane_t1

0x7d75,	// (0x00051cdb) main_mup_pane_t2_ParamLimits

0x7d75,	// (0x00051cdb) main_mup_pane_t2

0x7d8f,	// (0x00051cf5) main_mup_pane_t3_ParamLimits

0x7d8f,	// (0x00051cf5) main_mup_pane_t3

0x7da9,	// (0x00051d0f) main_mup_pane_t4_ParamLimits

0x7da9,	// (0x00051d0f) main_mup_pane_t4

0x7dbb,	// (0x00051d21) main_mup_pane_t5_ParamLimits

0x7dbb,	// (0x00051d21) main_mup_pane_t5

0x7dcd,	// (0x00051d33) main_mup_pane_t6_ParamLimits

0x7dcd,	// (0x00051d33) main_mup_pane_t6

0x0005,

0xf435,	// (0x0005939b) main_mup_pane_t_ParamLimits

0xf435,	// (0x0005939b) main_mup_pane_t

0x7de3,	// (0x00051d49) mup_progress_pane_ParamLimits

0x7de3,	// (0x00051d49) mup_progress_pane

0x7def,	// (0x00051d55) mup_visualizer_pane_ParamLimits

0x7def,	// (0x00051d55) mup_visualizer_pane

0x7e1d,	// (0x00051d83) mup_volume_pane_ParamLimits

0x7e1d,	// (0x00051d83) mup_volume_pane

0x3e63,	// (0x0004ddc9) mup_visualizer_pane_g1_ParamLimits

0x3e63,	// (0x0004ddc9) mup_visualizer_pane_g1

0x3e63,	// (0x0004ddc9) mup_visualizer_pane_g2_ParamLimits

0x3e63,	// (0x0004ddc9) mup_visualizer_pane_g2

0x3fc7,	// (0x0004df2d) mup_visualizer_pane_g3_ParamLimits

0x3fc7,	// (0x0004df2d) mup_visualizer_pane_g3

0x0002,

0xf442,	// (0x000593a8) mup_visualizer_pane_g_ParamLimits

0xf442,	// (0x000593a8) mup_visualizer_pane_g

0x35f0,	// (0x0004d556) mup_volume_pane_g1

0x4247,	// (0x0004e1ad) mup_volume_pane_g2

0x0001,

0xf449,	// (0x000593af) mup_volume_pane_g

0x35f0,	// (0x0004d556) mup_progress_pane_g1

0x4250,	// (0x0004e1b6) mup_progress_pane_g2

0x4259,	// (0x0004e1bf) mup_progress_pane_g3

0x0002,

0xf44e,	// (0x000593b4) mup_progress_pane_g

0x326f,	// (0x0004d1d5) bg_popup_window_pane_cp05

0x7e40,	// (0x00051da6) heading_pane_cp02_ParamLimits

0x7e40,	// (0x00051da6) heading_pane_cp02

0x4262,	// (0x0004e1c8) list_popup_blid_pane

0x7e5a,	// (0x00051dc0) list_blid_sat_info_pane_ParamLimits

0x7e5a,	// (0x00051dc0) list_blid_sat_info_pane

0x426a,	// (0x0004e1d0) list_blid_sat_info_pane_g1

0x4272,	// (0x0004e1d8) list_blid_sat_info_pane_t1

0x7f3d,	// (0x00051ea3) mup_equalizer_pane_ParamLimits

0x7f3d,	// (0x00051ea3) mup_equalizer_pane

0x7f56,	// (0x00051ebc) mup_equalizer_pane_cp1_ParamLimits

0x7f56,	// (0x00051ebc) mup_equalizer_pane_cp1

0x7f6f,	// (0x00051ed5) mup_equalizer_pane_cp2_ParamLimits

0x7f6f,	// (0x00051ed5) mup_equalizer_pane_cp2

0x7f88,	// (0x00051eee) mup_equalizer_pane_cp3_ParamLimits

0x7f88,	// (0x00051eee) mup_equalizer_pane_cp3

0x7fa1,	// (0x00051f07) mup_equalizer_pane_cp4_ParamLimits

0x7fa1,	// (0x00051f07) mup_equalizer_pane_cp4

0x7fba,	// (0x00051f20) mup_equalizer_pane_cp5

0x7fcc,	// (0x00051f32) mup_equalizer_pane_cp6

0x7fde,	// (0x00051f44) mup_equalizer_pane_cp7

0xe2c2,	// (0x00058228) bg_popup_call_poc_act_pane_g9

0xe2ca,	// (0x00058230) bg_popup_call_poc_act_pane_g10

0xe2d2,	// (0x00058238) bg_popup_call_poc_act_pane_g11

0x000a,

0x34ca,	// (0x0004d430) mup_scale_pane

0x35f0,	// (0x0004d556) mup_scale_pane_g1

0x4280,	// (0x0004e1e6) mup_scale_pane_g2

0x0006,

0xf46a,	// (0x000593d0) mup_scale_pane_g

0x42a4,	// (0x0004e20a) msg_data_pane

0x42ac,	// (0x0004e212) scroll_pane_cp017

0x8002,	// (0x00051f68) bg_list_pane_cp04_ParamLimits

0x8002,	// (0x00051f68) bg_list_pane_cp04

0x42b4,	// (0x0004e21a) msg_data_pane_g1

0x8022,	// (0x00051f88) msg_data_pane_g2

0x802a,	// (0x00051f90) msg_data_pane_g3

0x8032,	// (0x00051f98) msg_data_pane_g4

0x803a,	// (0x00051fa0) msg_data_pane_g5

0x7c09,	// (0x00051b6f) msg_data_pane_g6

0x8042,	// (0x00051fa8) msg_data_pane_g7

0x0006,

0xf479,	// (0x000593df) msg_data_pane_g

0x804a,	// (0x00051fb0) msg_text_pane_ParamLimits

0x804a,	// (0x00051fb0) msg_text_pane

0x8070,	// (0x00051fd6) qrid_highlight_pane_cp011_ParamLimits

0x8070,	// (0x00051fd6) qrid_highlight_pane_cp011

0x326f,	// (0x0004d1d5) msg_body_pane

0x326f,	// (0x0004d1d5) msg_header_pane

0x42c5,	// (0x0004e22b) input_focus_pane_cp07

0x086f,	// (0x0004a7d5) msg_header_pane_t1_ParamLimits

0x086f,	// (0x0004a7d5) msg_header_pane_t1

0x8092,	// (0x00051ff8) msg_header_pane_t2_ParamLimits

0x8092,	// (0x00051ff8) msg_header_pane_t2

0x0001,

0xf48d,	// (0x000593f3) msg_header_pane_t_ParamLimits

0xf48d,	// (0x000593f3) msg_header_pane_t

0x42da,	// (0x0004e240) msg_body_pane_g1

0x80a4,	// (0x0005200a) msg_body_pane_t1_ParamLimits

0x80a4,	// (0x0005200a) msg_body_pane_t1

0x80d5,	// (0x0005203b) msg_body_pane_t2_ParamLimits

0x80d5,	// (0x0005203b) msg_body_pane_t2

0x80e7,	// (0x0005204d) msg_body_pane_t3_ParamLimits

0x80e7,	// (0x0005204d) msg_body_pane_t3

0x0002,

0xf492,	// (0x000593f8) msg_body_pane_t_ParamLimits

0xf492,	// (0x000593f8) msg_body_pane_t

0x8147,	// (0x000520ad) main_viewer_pane_g1_ParamLimits

0x8147,	// (0x000520ad) main_viewer_pane_g1

0x8153,	// (0x000520b9) main_viewer_pane_g2_ParamLimits

0x8153,	// (0x000520b9) main_viewer_pane_g2

0x815f,	// (0x000520c5) main_viewer_pane_g3_ParamLimits

0x815f,	// (0x000520c5) main_viewer_pane_g3

0x816e,	// (0x000520d4) main_viewer_pane_g4_ParamLimits

0x816e,	// (0x000520d4) main_viewer_pane_g4

0x817d,	// (0x000520e3) main_viewer_pane_g5_ParamLimits

0x817d,	// (0x000520e3) main_viewer_pane_g5

0x817d,	// (0x000520e3) main_viewer_pane_g7_ParamLimits

0x817d,	// (0x000520e3) main_viewer_pane_g7

0x818f,	// (0x000520f5) main_viewer_pane_g8_ParamLimits

0x818f,	// (0x000520f5) main_viewer_pane_g8

0x0007,

0xf4a2,	// (0x00059408) main_viewer_pane_g_ParamLimits

0xf4a2,	// (0x00059408) main_viewer_pane_g

0x42e2,	// (0x0004e248) viewer_content_pane_ParamLimits

0x42e2,	// (0x0004e248) viewer_content_pane

0x81bf,	// (0x00052125) main_postcard_pane_g1_ParamLimits

0x81bf,	// (0x00052125) main_postcard_pane_g1

0x81cb,	// (0x00052131) main_postcard_pane_g2_ParamLimits

0x81cb,	// (0x00052131) main_postcard_pane_g2

0x81d7,	// (0x0005213d) main_postcard_pane_g3_ParamLimits

0x81d7,	// (0x0005213d) main_postcard_pane_g3

0x0005,

0xf4b3,	// (0x00059419) main_postcard_pane_g_ParamLimits

0xf4b3,	// (0x00059419) main_postcard_pane_g

0x81e3,	// (0x00052149) main_postcard_pane_g4

0xe4e4,	// (0x0005844a) smil_status_volume_pane_g2

0x8207,	// (0x0005216d) postcard_pane_ParamLimits

0x8207,	// (0x0005216d) postcard_pane

0x3e63,	// (0x0004ddc9) postcard_pane_g1_ParamLimits

0x3e63,	// (0x0004ddc9) postcard_pane_g1

0x8237,	// (0x0005219d) postcard_pane_g2_ParamLimits

0x8237,	// (0x0005219d) postcard_pane_g2

0x8243,	// (0x000521a9) postcard_pane_g3_ParamLimits

0x8243,	// (0x000521a9) postcard_pane_g3

0x42fe,	// (0x0004e264) postcard_pane_g4_ParamLimits

0x42fe,	// (0x0004e264) postcard_pane_g4

0x824f,	// (0x000521b5) postcard_pane_g5_ParamLimits

0x824f,	// (0x000521b5) postcard_pane_g5

0x825b,	// (0x000521c1) postcard_pane_g6_ParamLimits

0x825b,	// (0x000521c1) postcard_pane_g6

0x42f0,	// (0x0004e256) postcard_pane_g7_ParamLimits

0x42f0,	// (0x0004e256) postcard_pane_g7

0x0006,

0xf4c0,	// (0x00059426) postcard_pane_g_ParamLimits

0xf4c0,	// (0x00059426) postcard_pane_g

0x8267,	// (0x000521cd) main_mp2_pane_g1_ParamLimits

0x8267,	// (0x000521cd) main_mp2_pane_g1

0x8273,	// (0x000521d9) main_mp2_pane_g2_ParamLimits

0x8273,	// (0x000521d9) main_mp2_pane_g2

0x827f,	// (0x000521e5) main_mp2_pane_g3_ParamLimits

0x827f,	// (0x000521e5) main_mp2_pane_g3

0x0002,

0xf4cf,	// (0x00059435) main_mp2_pane_g_ParamLimits

0xf4cf,	// (0x00059435) main_mp2_pane_g

0x828b,	// (0x000521f1) main_mp2_pane_t1_ParamLimits

0x828b,	// (0x000521f1) main_mp2_pane_t1

0x82a0,	// (0x00052206) main_mp2_pane_t2_ParamLimits

0x82a0,	// (0x00052206) main_mp2_pane_t2

0x82b2,	// (0x00052218) main_mp2_pane_t3_ParamLimits

0x82b2,	// (0x00052218) main_mp2_pane_t3

0x0002,

0xf4d6,	// (0x0005943c) main_mp2_pane_t_ParamLimits

0xf4d6,	// (0x0005943c) main_mp2_pane_t

0x430c,	// (0x0004e272) pec_content_pane_ParamLimits

0x430c,	// (0x0004e272) pec_content_pane

0x3902,	// (0x0004d868) scroll_pane_cp015

0x431e,	// (0x0004e284) pec_attribute_pane_ParamLimits

0x431e,	// (0x0004e284) pec_attribute_pane

0x82c4,	// (0x0005222a) pec_content_pane_g1_ParamLimits

0x82c4,	// (0x0005222a) pec_content_pane_g1

0x432e,	// (0x0004e294) pec_content_pane_t1_ParamLimits

0x432e,	// (0x0004e294) pec_content_pane_t1

0x4340,	// (0x0004e2a6) pec_content_pane_t2_ParamLimits

0x4340,	// (0x0004e2a6) pec_content_pane_t2

0x0001,

0xf4dd,	// (0x00059443) pec_content_pane_t_ParamLimits

0xf4dd,	// (0x00059443) pec_content_pane_t

0x82d0,	// (0x00052236) list_single_graphic_pane_cp01_ParamLimits

0x82d0,	// (0x00052236) list_single_graphic_pane_cp01

0x34ca,	// (0x0004d430) bg_popup_sub_pane_cp04

0x4352,	// (0x0004e2b8) popup_mup_playback_window_g1

0x435e,	// (0x0004e2c4) popup_mup_playback_window_t1

0x4373,	// (0x0004e2d9) popup_mup_playback_window_t2

0x0001,

0xf4e2,	// (0x00059448) popup_mup_playback_window_t

0x43aa,	// (0x0004e310) main_image_pane_g1_ParamLimits

0x43aa,	// (0x0004e310) main_image_pane_g1

0x43ed,	// (0x0004e353) scroll_pane_cp018_ParamLimits

0x43ed,	// (0x0004e353) scroll_pane_cp018

0x4405,	// (0x0004e36b) scroll_pane_cp016_ParamLimits

0x4405,	// (0x0004e36b) scroll_pane_cp016

0x8354,	// (0x000522ba) smil2_image_pane_ParamLimits

0x8354,	// (0x000522ba) smil2_image_pane

0x837c,	// (0x000522e2) smil2_root_pane_ParamLimits

0x837c,	// (0x000522e2) smil2_root_pane

0x83a8,	// (0x0005230e) smil2_text_pane_ParamLimits

0x83a8,	// (0x0005230e) smil2_text_pane

0x326f,	// (0x0004d1d5) bg_list_pane_cp06

0x83e4,	// (0x0005234a) grid_radio_pane

0x326f,	// (0x0004d1d5) bg_popup_window_pane_cp06

0x4439,	// (0x0004e39f) main_fmradio_pane_t1

0x3e41,	// (0x0004dda7) heading_pane_cp04

0x4447,	// (0x0004e3ad) main_fmradio_pane_t2

0xe31a,	// (0x00058280) popup_cale_lunar_info_window_g1

0x4455,	// (0x0004e3bb) main_fmradio_pane_t3

0xe322,	// (0x00058288) popup_cale_lunar_info_window_g2

0x4463,	// (0x0004e3c9) main_fmradio_pane_t4

0x0001,

0x4471,	// (0x0004e3d7) main_fmradio_pane_t5

0x0004,

0xf5d0,	// (0x00059536) popup_cale_lunar_info_window_g

0xf4f7,	// (0x0005945d) main_fmradio_pane_t

0x447f,	// (0x0004e3e5) wait_bar_pane_cp03

0x83ec,	// (0x00052352) cell_fmradio_pane_ParamLimits

0x83ec,	// (0x00052352) cell_fmradio_pane

0x42f0,	// (0x0004e256) cell_fmradio_pane_g1_ParamLimits

0x42f0,	// (0x0004e256) cell_fmradio_pane_g1

0x326f,	// (0x0004d1d5) grid_highlight_pane_cp011

0x4487,	// (0x0004e3ed) poc_content_pane_ParamLimits

0x4487,	// (0x0004e3ed) poc_content_pane

0x4499,	// (0x0004e3ff) scroll_pane_cp019

0x83ff,	// (0x00052365) popup_call_poc_act_window_ParamLimits

0x83ff,	// (0x00052365) popup_call_poc_act_window

0x840c,	// (0x00052372) popup_call_poc_inact_window_ParamLimits

0x840c,	// (0x00052372) popup_call_poc_inact_window

0xf594,	// (0x000594fa) bg_popup_call_poc_act_pane_g

0xe2da,	// (0x00058240) bg_popup_call_poc_inact_pane_g1

0xe2e2,	// (0x00058248) bg_popup_call_poc_inact_pane_g2

0x44a1,	// (0x0004e407) popup_call_poc_act_window_g2

0xe2ea,	// (0x00058250) bg_popup_call_poc_inact_pane_g3

0xe26a,	// (0x000581d0) bg_popup_call_poc_inact_pane_g4

0xe2f2,	// (0x00058258) bg_popup_call_poc_inact_pane_g5

0x44a9,	// (0x0004e40f) popup_call_poc_act_window_t1_ParamLimits

0x44a9,	// (0x0004e40f) popup_call_poc_act_window_t1

0x44d1,	// (0x0004e437) popup_call_poc_act_window_t2_ParamLimits

0x44d1,	// (0x0004e437) popup_call_poc_act_window_t2

0x44f9,	// (0x0004e45f) popup_call_poc_act_window_t3_ParamLimits

0x44f9,	// (0x0004e45f) popup_call_poc_act_window_t3

0x4521,	// (0x0004e487) popup_call_poc_act_window_t4_ParamLimits

0x4521,	// (0x0004e487) popup_call_poc_act_window_t4

0x0003,

0xf502,	// (0x00059468) popup_call_poc_act_window_t_ParamLimits

0xf502,	// (0x00059468) popup_call_poc_act_window_t

0xe2fa,	// (0x00058260) bg_popup_call_poc_inact_pane_g6

0xe302,	// (0x00058268) bg_popup_call_poc_inact_pane_g7

0xe30a,	// (0x00058270) bg_popup_call_poc_inact_pane_g8

0x4533,	// (0x0004e499) popup_call_poc_inact_window_g2

0xe312,	// (0x00058278) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf5ab,	// (0x00059511) bg_popup_call_poc_inact_pane_g

0x453b,	// (0x0004e4a1) popup_call_poc_inact_window_t1_ParamLimits

0x453b,	// (0x0004e4a1) popup_call_poc_inact_window_t1

0x4550,	// (0x0004e4b6) popup_call_poc_inact_window_t2_ParamLimits

0x4550,	// (0x0004e4b6) popup_call_poc_inact_window_t2

0x4565,	// (0x0004e4cb) popup_call_poc_inact_window_t3_ParamLimits

0x4565,	// (0x0004e4cb) popup_call_poc_inact_window_t3

0x0002,

0xf50b,	// (0x00059471) popup_call_poc_inact_window_t_ParamLimits

0xf50b,	// (0x00059471) popup_call_poc_inact_window_t

0xe457,	// (0x000583bd) context_pane_ParamLimits

0x8976,	// (0x000528dc) signal_pane_ParamLimits

0x374c,	// (0x0004d6b2) main_call2_pane

0x88f2,	// (0x00052858) popup_phob_thumbnail2_window_ParamLimits

0x88f2,	// (0x00052858) popup_phob_thumbnail2_window

0x80f9,	// (0x0005205f) aid_hotspot_pointer_arrow_pane

0x8101,	// (0x00052067) aid_hotspot_pointer_hand_pane

0x86b9,	// (0x0005261f) phob_pre_status_pane_g5

0x685b,	// (0x000507c1) cams_zoom_pane_ParamLimits

0x6867,	// (0x000507cd) image_vga_pane_ParamLimits

0x6874,	// (0x000507da) main_camera_pane_g1_ParamLimits

0x6880,	// (0x000507e6) main_camera_pane_g2_ParamLimits

0x688c,	// (0x000507f2) main_camera_pane_g3_ParamLimits

0x6898,	// (0x000507fe) main_camera_pane_g4_ParamLimits

0x68a4,	// (0x0005080a) main_camera_pane_g5_ParamLimits

0x68b0,	// (0x00050816) main_camera_pane_g6_ParamLimits

0x68bc,	// (0x00050822) main_camera_pane_g7_ParamLimits

0xf20a,	// (0x00059170) main_camera_pane_g_ParamLimits

0x68c8,	// (0x0005082e) main_camera_pane_t1_ParamLimits

0x68da,	// (0x00050840) main_camera_pane_t2_ParamLimits

0xf21b,	// (0x00059181) main_camera_pane_t_ParamLimits

0x34ca,	// (0x0004d430) bg_popup_preview_window_pane_cp01_ParamLimits

0x34ca,	// (0x0004d430) bg_popup_preview_window_pane_cp01

0x457a,	// (0x0004e4e0) popup_phob_thumbnail2_window_g1_ParamLimits

0x457a,	// (0x0004e4e0) popup_phob_thumbnail2_window_g1

0x326f,	// (0x0004d1d5) call2_cli_visual_pane

0x8428,	// (0x0005238e) popup_call2_audio_conf_window_ParamLimits

0x8428,	// (0x0005238e) popup_call2_audio_conf_window

0x843b,	// (0x000523a1) popup_call2_audio_first_window_ParamLimits

0x843b,	// (0x000523a1) popup_call2_audio_first_window

0x84b7,	// (0x0005241d) popup_call2_audio_in_window_ParamLimits

0x84b7,	// (0x0005241d) popup_call2_audio_in_window

0x84e7,	// (0x0005244d) popup_call2_audio_out_window_ParamLimits

0x84e7,	// (0x0005244d) popup_call2_audio_out_window

0x8533,	// (0x00052499) popup_call2_audio_second_window_ParamLimits

0x8533,	// (0x00052499) popup_call2_audio_second_window

0x857f,	// (0x000524e5) popup_call2_audio_wait_window_ParamLimits

0x857f,	// (0x000524e5) popup_call2_audio_wait_window

0x326f,	// (0x0004d1d5) bg_popup_call2_act_pane_cp03

0x34ac,	// (0x0004d412) list_conf_pane_cp

0x4586,	// (0x0004e4ec) popup_call2_audio_conf_window_t1

0x3eac,	// (0x0004de12) list_single_graphic_popup_conf2_pane_ParamLimits

0x3eac,	// (0x0004de12) list_single_graphic_popup_conf2_pane

0x3ebf,	// (0x0004de25) list_highlight_pane_cp04

0x4594,	// (0x0004e4fa) list_single_graphic_popup_conf2_pane_g1

0x3ed0,	// (0x0004de36) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf512,	// (0x00059478) list_single_graphic_popup_conf2_pane_g

0x459c,	// (0x0004e502) list_single_graphic_popup_conf2_pane_t1

0x45aa,	// (0x0004e510) bg_popup_call2_act_pane_cp01_ParamLimits

0x45aa,	// (0x0004e510) bg_popup_call2_act_pane_cp01

0x4634,	// (0x0004e59a) call_type_pane_cp05_ParamLimits

0x4634,	// (0x0004e59a) call_type_pane_cp05

0x4688,	// (0x0004e5ee) popup_call2_audio_second_window_g1_ParamLimits

0x4688,	// (0x0004e5ee) popup_call2_audio_second_window_g1

0x46dc,	// (0x0004e642) popup_call2_audio_second_window_g2_ParamLimits

0x46dc,	// (0x0004e642) popup_call2_audio_second_window_g2

0x0002,

0xf517,	// (0x0005947d) popup_call2_audio_second_window_g_ParamLimits

0xf517,	// (0x0005947d) popup_call2_audio_second_window_g

0x4741,	// (0x0004e6a7) popup_call2_audio_second_window_t1_ParamLimits

0x4741,	// (0x0004e6a7) popup_call2_audio_second_window_t1

0x47fc,	// (0x0004e762) popup_call2_audio_second_window_t2_ParamLimits

0x47fc,	// (0x0004e762) popup_call2_audio_second_window_t2

0x484f,	// (0x0004e7b5) popup_call2_audio_second_window_t3_ParamLimits

0x484f,	// (0x0004e7b5) popup_call2_audio_second_window_t3

0x0003,

0xf51e,	// (0x00059484) popup_call2_audio_second_window_t_ParamLimits

0xf51e,	// (0x00059484) popup_call2_audio_second_window_t

0x326f,	// (0x0004d1d5) bg_popup_call2_in_pane_cp02

0x3279,	// (0x0004d1df) call_type_pane_cp04

0x3281,	// (0x0004d1e7) popup_call2_audio_wait_window_g1

0x3289,	// (0x0004d1ef) popup_call2_audio_wait_window_g2

0x0001,

0xf0f9,	// (0x0005905f) popup_call2_audio_wait_window_g

0x3291,	// (0x0004d1f7) popup_call2_audio_wait_window_t3

0x4942,	// (0x0004e8a8) bg_popup_call2_act_pane_ParamLimits

0x4942,	// (0x0004e8a8) bg_popup_call2_act_pane

0x4a1c,	// (0x0004e982) call_type_pane_cp03_ParamLimits

0x4a1c,	// (0x0004e982) call_type_pane_cp03

0x4a80,	// (0x0004e9e6) popup_call2_audio_first_window_g1_ParamLimits

0x4a80,	// (0x0004e9e6) popup_call2_audio_first_window_g1

0xd9b9,	// (0x0005791f) popup_call2_audio_first_window_g2_ParamLimits

0xd9b9,	// (0x0005791f) popup_call2_audio_first_window_g2

0x3e63,	// (0x0004ddc9) popup_call2_audio_first_window_g3_ParamLimits

0x3e63,	// (0x0004ddc9) popup_call2_audio_first_window_g3

0x0004,

0xf527,	// (0x0005948d) popup_call2_audio_first_window_g_ParamLimits

0xf527,	// (0x0005948d) popup_call2_audio_first_window_g

0xda97,	// (0x000579fd) popup_call2_audio_first_window_t1_ParamLimits

0xda97,	// (0x000579fd) popup_call2_audio_first_window_t1

0xdb9a,	// (0x00057b00) popup_call2_audio_first_window_t4_ParamLimits

0xdb9a,	// (0x00057b00) popup_call2_audio_first_window_t4

0xdc7d,	// (0x00057be3) popup_call2_audio_first_window_t5_ParamLimits

0xdc7d,	// (0x00057be3) popup_call2_audio_first_window_t5

0x0003,

0xf532,	// (0x00059498) popup_call2_audio_first_window_t_ParamLimits

0xf532,	// (0x00059498) popup_call2_audio_first_window_t

0x34c2,	// (0x0004d428) bg_popup_call2_act_pane_g1

0xe32a,	// (0x00058290) popup_cale_lunar_info_window_t1

0xe338,	// (0x0005829e) popup_cale_lunar_info_window_t2

0xe346,	// (0x000582ac) popup_cale_lunar_info_window_t3

0x326f,	// (0x0004d1d5) bg_popup_call2_bubble_pane

0xdd7e,	// (0x00057ce4) bg_popup_call2_in_pane_cp01_ParamLimits

0xdd7e,	// (0x00057ce4) bg_popup_call2_in_pane_cp01

0x2f4b,	// (0x0004ceb1) call_type_pane_cp02

0xddc6,	// (0x00057d2c) popup_call2_audio_out_window_g1_ParamLimits

0xddc6,	// (0x00057d2c) popup_call2_audio_out_window_g1

0xddf2,	// (0x00057d58) popup_call2_audio_out_window_g2_ParamLimits

0xddf2,	// (0x00057d58) popup_call2_audio_out_window_g2

0xde1a,	// (0x00057d80) popup_call2_audio_out_window_g3_ParamLimits

0xde1a,	// (0x00057d80) popup_call2_audio_out_window_g3

0x0003,

0xf53b,	// (0x000594a1) popup_call2_audio_out_window_g_ParamLimits

0xf53b,	// (0x000594a1) popup_call2_audio_out_window_g

0xde55,	// (0x00057dbb) popup_call2_audio_out_window_t1_ParamLimits

0xde55,	// (0x00057dbb) popup_call2_audio_out_window_t1

0xdeb4,	// (0x00057e1a) popup_call2_audio_out_window_t2_ParamLimits

0xdeb4,	// (0x00057e1a) popup_call2_audio_out_window_t2

0xdf08,	// (0x00057e6e) popup_call2_audio_out_window_t3_ParamLimits

0xdf08,	// (0x00057e6e) popup_call2_audio_out_window_t3

0xdf1e,	// (0x00057e84) popup_call2_audio_out_window_t4_ParamLimits

0xdf1e,	// (0x00057e84) popup_call2_audio_out_window_t4

0xdf34,	// (0x00057e9a) popup_call2_audio_out_window_t5_ParamLimits

0xdf34,	// (0x00057e9a) popup_call2_audio_out_window_t5

0x0005,

0xf544,	// (0x000594aa) popup_call2_audio_out_window_t_ParamLimits

0xf544,	// (0x000594aa) popup_call2_audio_out_window_t

0xdf98,	// (0x00057efe) bg_popup_call2_in_pane_ParamLimits

0xdf98,	// (0x00057efe) bg_popup_call2_in_pane

0xdff4,	// (0x00057f5a) popup_call2_audio_in_window_g1_ParamLimits

0xdff4,	// (0x00057f5a) popup_call2_audio_in_window_g1

0xe02c,	// (0x00057f92) popup_call2_audio_in_window_g2_ParamLimits

0xe02c,	// (0x00057f92) popup_call2_audio_in_window_g2

0xe064,	// (0x00057fca) popup_call2_audio_in_window_g3_ParamLimits

0xe064,	// (0x00057fca) popup_call2_audio_in_window_g3

0x0003,

0xf551,	// (0x000594b7) popup_call2_audio_in_window_g_ParamLimits

0xf551,	// (0x000594b7) popup_call2_audio_in_window_g

0xe0bc,	// (0x00058022) popup_call2_audio_in_window_t1_ParamLimits

0xe0bc,	// (0x00058022) popup_call2_audio_in_window_t1

0xe13c,	// (0x000580a2) popup_call2_audio_in_window_t2_ParamLimits

0xe13c,	// (0x000580a2) popup_call2_audio_in_window_t2

0xe1bc,	// (0x00058122) popup_call2_audio_in_window_t3_ParamLimits

0xe1bc,	// (0x00058122) popup_call2_audio_in_window_t3

0xe1d6,	// (0x0005813c) popup_call2_audio_in_window_t4_ParamLimits

0xe1d6,	// (0x0005813c) popup_call2_audio_in_window_t4

0xe1e8,	// (0x0005814e) popup_call2_audio_in_window_t5_ParamLimits

0xe1e8,	// (0x0005814e) popup_call2_audio_in_window_t5

0xe1fd,	// (0x00058163) popup_call2_audio_in_window_t6_ParamLimits

0xe1fd,	// (0x00058163) popup_call2_audio_in_window_t6

0x0005,

0xf55a,	// (0x000594c0) popup_call2_audio_in_window_t_ParamLimits

0xf55a,	// (0x000594c0) popup_call2_audio_in_window_t

0x34c2,	// (0x0004d428) bg_popup_call2_in_pane_g1

0xe354,	// (0x000582ba) popup_cale_lunar_info_window_t4

0x0003,

0xf5d5,	// (0x0005953b) popup_cale_lunar_info_window_t

0x34ca,	// (0x0004d430) bg_popup_call2_rect_pane_ParamLimits

0x34ca,	// (0x0004d430) bg_popup_call2_rect_pane

0x326f,	// (0x0004d1d5) call2_cli_visual_graphic_pane

0x326f,	// (0x0004d1d5) call2_cli_visual_text_pane

0x89fb,	// (0x00052961) smil_status_volume_pane_g3

0x0002,

0x35f0,	// (0x0004d556) call2_cli_visual_graphic_pane_g1

0x35f0,	// (0x0004d556) call2_cli_visual_graphic_pane_g2

0x35f0,	// (0x0004d556) call2_cli_visual_graphic_pane_g3

0x0002,

0xf567,	// (0x000594cd) call2_cli_visual_graphic_pane_g

0xe212,	// (0x00058178) bg_popup_call2_rect_pane_g1

0x368e,	// (0x0004d5f4) bg_popup_call2_rect_pane_g2

0xe21a,	// (0x00058180) bg_popup_call2_rect_pane_g3

0xe222,	// (0x00058188) bg_popup_call2_rect_pane_g4

0xe22a,	// (0x00058190) bg_popup_call2_rect_pane_g5

0xe232,	// (0x00058198) bg_popup_call2_rect_pane_g6

0xe23a,	// (0x000581a0) bg_popup_call2_rect_pane_g7

0xe242,	// (0x000581a8) bg_popup_call2_rect_pane_g8

0xe24a,	// (0x000581b0) bg_popup_call2_rect_pane_g9

0x0008,

0xf56e,	// (0x000594d4) bg_popup_call2_rect_pane_g

0xe252,	// (0x000581b8) bg_popup_call2_bubble_pane_g1

0xe25a,	// (0x000581c0) bg_popup_call2_bubble_pane_g2

0xe262,	// (0x000581c8) bg_popup_call2_bubble_pane_g3

0xe26a,	// (0x000581d0) bg_popup_call2_bubble_pane_g4

0xe272,	// (0x000581d8) bg_popup_call2_bubble_pane_g5

0xe27a,	// (0x000581e0) bg_popup_call2_bubble_pane_g6

0xe282,	// (0x000581e8) bg_popup_call2_bubble_pane_g7

0xe28a,	// (0x000581f0) bg_popup_call2_bubble_pane_g8

0xe292,	// (0x000581f8) bg_popup_call2_bubble_pane_g9

0x0008,

0xf581,	// (0x000594e7) bg_popup_call2_bubble_pane_g

0x6143,	// (0x000500a9) aid_cale_week_size_cell_pane

0x68ec,	// (0x00050852) aid_cams_cif_uncrop_pane_ParamLimits

0x68ec,	// (0x00050852) aid_cams_cif_uncrop_pane

0x6a44,	// (0x000509aa) aid_cams_size_cell_ParamLimits

0x6a44,	// (0x000509aa) aid_cams_size_cell

0x6a50,	// (0x000509b6) grid_cams_pane_ParamLimits

0x6a5c,	// (0x000509c2) linegrid_cams_pane_ParamLimits

0x6c30,	// (0x00050b96) call_video_pane_t1

0x6c4d,	// (0x00050bb3) call_video_pane_t2

0x0001,

0xf26e,	// (0x000591d4) call_video_pane_t

0x701d,	// (0x00050f83) aid_cale_month_size_cell_pane_ParamLimits

0x701d,	// (0x00050f83) aid_cale_month_size_cell_pane

0xf61e,	// (0x00059584) smil_status_volume_pane_g

0x8a08,	// (0x0005296e) volume_smil_pane_ParamLimits

0x59bb,	// (0x0004f921) aid_popup2_width_pane

0x6063,	// (0x0004ffc9) cell_qdial_pane_g4_ParamLimits

0x6063,	// (0x0004ffc9) cell_qdial_pane_g4

0x7b46,	// (0x00051aac) aid_blid_cardinal_pane_ParamLimits

0x7b52,	// (0x00051ab8) aid_blid_destination_pane_ParamLimits

0x7b52,	// (0x00051ab8) aid_blid_destination_pane

0x34ca,	// (0x0004d430) bg_popup_call_poc_act_pane_ParamLimits

0x34ca,	// (0x0004d430) bg_popup_call_poc_act_pane

0x34ca,	// (0x0004d430) bg_popup_call_poc_inact_pane_ParamLimits

0x34ca,	// (0x0004d430) bg_popup_call_poc_inact_pane

0xe29a,	// (0x00058200) bg_popup_call_poc_act_pane_g1

0xe2a2,	// (0x00058208) bg_popup_call_poc_act_pane_g2

0xe2aa,	// (0x00058210) bg_popup_call_poc_act_pane_g3

0xe26a,	// (0x000581d0) bg_popup_call_poc_act_pane_g4

0xe272,	// (0x000581d8) bg_popup_call_poc_act_pane_g5

0xe2b2,	// (0x00058218) bg_popup_call_poc_act_pane_g6

0xe282,	// (0x000581e8) bg_popup_call_poc_act_pane_g7

0xe2ba,	// (0x00058220) bg_popup_call_poc_act_pane_g8

0x326f,	// (0x0004d1d5) main_usb_pane

0x884d,	// (0x000527b3) popup_cale_lunar_info_window

0x6ed0,	// (0x00050e36) im_reading_pane_t1_ParamLimits

0x384b,	// (0x0004d7b1) list_im_pane_ParamLimits

0x385c,	// (0x0004d7c2) scroll_pane_cp07_ParamLimits

0x326f,	// (0x0004d1d5) grid_highlight_pane_cp012

0x34ca,	// (0x0004d430) mup_scale_pane_ParamLimits

0x3e63,	// (0x0004ddc9) main_usb_pane_g1_ParamLimits

0x3e63,	// (0x0004ddc9) main_usb_pane_g1

0x85de,	// (0x00052544) main_usb_pane_g2_ParamLimits

0x85de,	// (0x00052544) main_usb_pane_g2

0x0001,

0xf5be,	// (0x00059524) main_usb_pane_g_ParamLimits

0xf5be,	// (0x00059524) main_usb_pane_g

0x85ea,	// (0x00052550) main_usb_pane_t1_ParamLimits

0x85ea,	// (0x00052550) main_usb_pane_t1

0x85fc,	// (0x00052562) main_usb_pane_t2_ParamLimits

0x85fc,	// (0x00052562) main_usb_pane_t2

0x860e,	// (0x00052574) main_usb_pane_t3_ParamLimits

0x860e,	// (0x00052574) main_usb_pane_t3

0x8620,	// (0x00052586) main_usb_pane_t4_ParamLimits

0x8620,	// (0x00052586) main_usb_pane_t4

0x8632,	// (0x00052598) main_usb_pane_t5_ParamLimits

0x8632,	// (0x00052598) main_usb_pane_t5

0x8644,	// (0x000525aa) main_usb_pane_t6_ParamLimits

0x8644,	// (0x000525aa) main_usb_pane_t6

0x0005,

0xf5c3,	// (0x00059529) main_usb_pane_t_ParamLimits

0x7af5,	// (0x00051a5b) aid_text_placing

0x7afe,	// (0x00051a64) main_location2_pane_t1_ParamLimits

0x7b10,	// (0x00051a76) main_location2_pane_t2_ParamLimits

0x7b22,	// (0x00051a88) main_location2_pane_t3_ParamLimits

0x7b34,	// (0x00051a9a) main_location2_pane_t4_ParamLimits

0x7b34,	// (0x00051a9a) main_location2_pane_t4

0xf3cf,	// (0x00059335) main_location2_pane_t_ParamLimits

0x3506,	// (0x0004d46c) find_pinb_pane_g2_ParamLimits

0x3506,	// (0x0004d46c) find_pinb_pane_g2

0x0001,

0xf11f,	// (0x00059085) find_pinb_pane_g_ParamLimits

0xf11f,	// (0x00059085) find_pinb_pane_g

0x3512,	// (0x0004d478) find_pinb_pane_t1_ParamLimits

0x3524,	// (0x0004d48a) find_pinb_pane_t2_ParamLimits

0xf124,	// (0x0005908a) find_pinb_pane_t_ParamLimits

0x326f,	// (0x0004d1d5) main_call3_pane

0x73f5,	// (0x0005135b) cale_month_day_heading_pane_t1_ParamLimits

0x7428,	// (0x0005138e) cale_month_day_heading_pane_t2_ParamLimits

0x7452,	// (0x000513b8) cale_month_day_heading_pane_t3_ParamLimits

0x747c,	// (0x000513e2) cale_month_day_heading_pane_t4_ParamLimits

0x74a6,	// (0x0005140c) cale_month_day_heading_pane_t5_ParamLimits

0x74d0,	// (0x00051436) cale_month_day_heading_pane_t6_ParamLimits

0x74fa,	// (0x00051460) cale_month_day_heading_pane_t7_ParamLimits

0xf2a6,	// (0x0005920c) cale_month_day_heading_pane_t_ParamLimits

0x3ab5,	// (0x0004da1b) smil_status_volume_pane

0x821f,	// (0x00052185) postcard_address_pane_ParamLimits

0x821f,	// (0x00052185) postcard_address_pane

0x822b,	// (0x00052191) postcard_message_pane_ParamLimits

0x822b,	// (0x00052191) postcard_message_pane

0x85bc,	// (0x00052522) call2_cli_visual_pane_t1_ParamLimits

0x85bc,	// (0x00052522) call2_cli_visual_pane_t1

0x8b59,	// (0x00052abf) postcard_message_pane_t1_ParamLimits

0x8b59,	// (0x00052abf) postcard_message_pane_t1

0x8b42,	// (0x00052aa8) postcard_address_pane_t1_ParamLimits

0x8b42,	// (0x00052aa8) postcard_address_pane_t1

0x8b35,	// (0x00052a9b) popup_call3_audio_in_window_ParamLimits

0x8b35,	// (0x00052a9b) popup_call3_audio_in_window

0x8a1d,	// (0x00052983) bg_popup_call3_in_pane_ParamLimits

0x8a1d,	// (0x00052983) bg_popup_call3_in_pane

0x8a7b,	// (0x000529e1) popup_call3_audio_in_window_g1_ParamLimits

0x8a7b,	// (0x000529e1) popup_call3_audio_in_window_g1

0x8a93,	// (0x000529f9) popup_call3_audio_in_window_g2_ParamLimits

0x8a93,	// (0x000529f9) popup_call3_audio_in_window_g2

0x8aab,	// (0x00052a11) popup_call3_audio_in_window_g3_ParamLimits

0x8aab,	// (0x00052a11) popup_call3_audio_in_window_g3

0x0003,

0xf625,	// (0x0005958b) popup_call3_audio_in_window_g_ParamLimits

0xf625,	// (0x0005958b) popup_call3_audio_in_window_g

0x8ad3,	// (0x00052a39) popup_call3_audio_in_window_t1_ParamLimits

0x8ad3,	// (0x00052a39) popup_call3_audio_in_window_t1

0x8afb,	// (0x00052a61) popup_call3_audio_in_window_t2_ParamLimits

0x8afb,	// (0x00052a61) popup_call3_audio_in_window_t2

0x8b23,	// (0x00052a89) popup_call3_audio_in_window_t3_ParamLimits

0x8b23,	// (0x00052a89) popup_call3_audio_in_window_t3

0x0002,

0xf62e,	// (0x00059594) popup_call3_audio_in_window_t_ParamLimits

0xf62e,	// (0x00059594) popup_call3_audio_in_window_t

0x374c,	// (0x0004d6b2) bg_popup_call3_rect_pane

0xe212,	// (0x00058178) bg_popup_call3_rect_pane_g1

0x368e,	// (0x0004d5f4) bg_popup_call3_rect_pane_g2

0xe21a,	// (0x00058180) bg_popup_call3_rect_pane_g3

0xe222,	// (0x00058188) bg_popup_call3_rect_pane_g4

0xe22a,	// (0x00058190) bg_popup_call3_rect_pane_g5

0xe232,	// (0x00058198) bg_popup_call3_rect_pane_g6

0xe23a,	// (0x000581a0) bg_popup_call3_rect_pane_g7

0x7e38,	// (0x00051d9e) mup_visualizer_osc_pane

0x423f,	// (0x0004e1a5) mup_visualizer_spec_pane

0x8a3d,	// (0x000529a3) call3_video_qcif_pane_ParamLimits

0x8a3d,	// (0x000529a3) call3_video_qcif_pane

0x8a4d,	// (0x000529b3) call3_video_qcif_uncrop_pane_ParamLimits

0x8a4d,	// (0x000529b3) call3_video_qcif_uncrop_pane

0x8a59,	// (0x000529bf) call3_video_subqcif_pane_ParamLimits

0x8a59,	// (0x000529bf) call3_video_subqcif_pane

0x8a6b,	// (0x000529d1) call3_video_subqcif_uncrop_pane_ParamLimits

0x8a6b,	// (0x000529d1) call3_video_subqcif_uncrop_pane

0x8ac3,	// (0x00052a29) popup_call3_audio_in_window_g4_ParamLimits

0x8ac3,	// (0x00052a29) popup_call3_audio_in_window_g4

0x89ea,	// (0x00052950) mup_spec_half_pane

0x89f3,	// (0x00052959) mup_spec_half_pane_cp

0xe4b7,	// (0x0005841d) mup_osc_middle_pane

0xe4c0,	// (0x00058426) mup_visualizer_osc_pane_g1

0x89cb,	// (0x00052931) mup_spec_bar_pane_ParamLimits

0x89cb,	// (0x00052931) mup_spec_bar_pane

0xe4a4,	// (0x0005840a) mup_spec_bar_pane_g1

0xe4ae,	// (0x00058414) mup_spec_bar_pane_g2

0x0001,

0xf619,	// (0x0005957f) mup_spec_bar_pane_g

0x6143,	// (0x000500a9) aid_cale_week_size_cell_pane_ParamLimits

0x615d,	// (0x000500c3) bg_cale_heading_pane_ParamLimits

0x617a,	// (0x000500e0) bg_cale_pane_cp01_ParamLimits

0x619c,	// (0x00050102) cale_week_corner_pane_ParamLimits

0x61bb,	// (0x00050121) cale_week_day_heading_pane_ParamLimits

0x61dd,	// (0x00050143) cale_week_scroll_pane_g1_ParamLimits

0x61f5,	// (0x0005015b) cale_week_scroll_pane_g2_ParamLimits

0x620d,	// (0x00050173) cale_week_scroll_pane_g3_ParamLimits

0x6225,	// (0x0005018b) cale_week_scroll_pane_g4_ParamLimits

0x623d,	// (0x000501a3) cale_week_scroll_pane_g5_ParamLimits

0x6255,	// (0x000501bb) cale_week_scroll_pane_g6_ParamLimits

0x626d,	// (0x000501d3) cale_week_scroll_pane_g7_ParamLimits

0x6285,	// (0x000501eb) cale_week_scroll_pane_g8_ParamLimits

0x629d,	// (0x00050203) cale_week_scroll_pane_g9_ParamLimits

0x62ba,	// (0x00050220) cale_week_scroll_pane_g10_ParamLimits

0x62d7,	// (0x0005023d) cale_week_scroll_pane_g11_ParamLimits

0x62f4,	// (0x0005025a) cale_week_scroll_pane_g12_ParamLimits

0x6311,	// (0x00050277) cale_week_scroll_pane_g13_ParamLimits

0x632e,	// (0x00050294) cale_week_scroll_pane_g14_ParamLimits

0x634b,	// (0x000502b1) cale_week_scroll_pane_g15_ParamLimits

0xf1b0,	// (0x00059116) cale_week_scroll_pane_g_ParamLimits

0x6380,	// (0x000502e6) cale_week_time_pane_ParamLimits

0x6398,	// (0x000502fe) grid_cale_week_pane_ParamLimits

0x36cb,	// (0x0004d631) listscroll_cale_week_pane_t1

0x36dd,	// (0x0004d643) scroll_pane_cp08_ParamLimits

0x707d,	// (0x00050fe3) cale_month_corner_pane_ParamLimits

0x3a8b,	// (0x0004d9f1) cale_month_pane_t1

0x73ac,	// (0x00051312) cale_month_week_pane_ParamLimits

0x3e63,	// (0x0004ddc9) popup_call_status_window_g1_ParamLimits

0x790c,	// (0x00051872) popup_call_status_window_g2_ParamLimits

0x7918,	// (0x0005187e) popup_call_status_window_g3_ParamLimits

0xf356,	// (0x000592bc) popup_call_status_window_g_ParamLimits

0x3e39,	// (0x0004dd9f) aid_call2_pane

0x8086,	// (0x00051fec) msg_header_pane_g1

0x821f,	// (0x00052185) postcard_address2_pane_ParamLimits

0x821f,	// (0x00052185) postcard_address2_pane

0x822b,	// (0x00052191) postcard_message2_pane_ParamLimits

0x822b,	// (0x00052191) postcard_message2_pane

0x8982,	// (0x000528e8) message2_row_pane_ParamLimits

0x8982,	// (0x000528e8) message2_row_pane

0x899a,	// (0x00052900) address2_row_pane_ParamLimits

0x899a,	// (0x00052900) address2_row_pane

0xe472,	// (0x000583d8) postcard_message2_row_pane_g1

0xe47a,	// (0x000583e0) postcard_message2_row_pane_t1

0xe472,	// (0x000583d8) address2_row_pane_g1

0xe47a,	// (0x000583e0) address2_row_pane_t1

0x67dc,	// (0x00050742) aid_size_cell_vorec

0x326f,	// (0x0004d1d5) main_rss_pane

0x89ad,	// (0x00052913) rss_list_single_pane_ParamLimits

0x89ad,	// (0x00052913) rss_list_single_pane

0xe488,	// (0x000583ee) rss_list_single_pane_t1

0xe496,	// (0x000583fc) rss_list_single_pane_t2

0x0001,

0xf614,	// (0x0005957a) rss_list_single_pane_t

0x326f,	// (0x0004d1d5) main_camera2_pane

0x326f,	// (0x0004d1d5) main_video2_pane

0x8ba9,	// (0x00052b0f) cams_zoom_pane_cp2_ParamLimits

0x8ba9,	// (0x00052b0f) cams_zoom_pane_cp2

0x8bb5,	// (0x00052b1b) image2_vga_pane_ParamLimits

0x8bb5,	// (0x00052b1b) image2_vga_pane

0x8bc4,	// (0x00052b2a) main_camera2_pane_g1_ParamLimits

0x8bc4,	// (0x00052b2a) main_camera2_pane_g1

0x8bd0,	// (0x00052b36) main_camera2_pane_g2_ParamLimits

0x8bd0,	// (0x00052b36) main_camera2_pane_g2

0x8bdc,	// (0x00052b42) main_camera2_pane_g3_ParamLimits

0x8bdc,	// (0x00052b42) main_camera2_pane_g3

0x8be8,	// (0x00052b4e) main_camera2_pane_g4_ParamLimits

0x8be8,	// (0x00052b4e) main_camera2_pane_g4

0x8bf4,	// (0x00052b5a) main_camera2_pane_g5_ParamLimits

0x8bf4,	// (0x00052b5a) main_camera2_pane_g5

0x8c00,	// (0x00052b66) main_camera2_pane_g6_ParamLimits

0x8c00,	// (0x00052b66) main_camera2_pane_g6

0x8c0c,	// (0x00052b72) main_camera2_pane_g7_ParamLimits

0x8c0c,	// (0x00052b72) main_camera2_pane_g7

0x8c18,	// (0x00052b7e) main_camera2_pane_g8_ParamLimits

0x8c18,	// (0x00052b7e) main_camera2_pane_g8

0x0008,

0xf635,	// (0x0005959b) main_camera2_pane_g_ParamLimits

0xf635,	// (0x0005959b) main_camera2_pane_g

0x8c30,	// (0x00052b96) main_camera2_pane_t1_ParamLimits

0x8c30,	// (0x00052b96) main_camera2_pane_t1

0x8c42,	// (0x00052ba8) main_camera2_pane_t2_ParamLimits

0x8c42,	// (0x00052ba8) main_camera2_pane_t2

0x8c54,	// (0x00052bba) main_camera2_pane_t3_ParamLimits

0x8c54,	// (0x00052bba) main_camera2_pane_t3

0x8c66,	// (0x00052bcc) main_camera2_pane_t4_ParamLimits

0x8c66,	// (0x00052bcc) main_camera2_pane_t4

0x0006,

0xf648,	// (0x000595ae) main_camera2_pane_t_ParamLimits

0xf648,	// (0x000595ae) main_camera2_pane_t

0x8cc1,	// (0x00052c27) cams_zoom_pane_cp4_ParamLimits

0x8cc1,	// (0x00052c27) cams_zoom_pane_cp4

0x8cd1,	// (0x00052c37) image2_cif_pane_ParamLimits

0x8cd1,	// (0x00052c37) image2_cif_pane

0x8ce2,	// (0x00052c48) image2_subqcif_pane_ParamLimits

0x8ce2,	// (0x00052c48) image2_subqcif_pane

0x8cef,	// (0x00052c55) main_video2_pane_g1_ParamLimits

0x8cef,	// (0x00052c55) main_video2_pane_g1

0x8d01,	// (0x00052c67) main_video2_pane_g2_ParamLimits

0x8d01,	// (0x00052c67) main_video2_pane_g2

0x8d11,	// (0x00052c77) main_video2_pane_g3_ParamLimits

0x8d11,	// (0x00052c77) main_video2_pane_g3

0x8d21,	// (0x00052c87) main_video2_pane_g4_ParamLimits

0x8d21,	// (0x00052c87) main_video2_pane_g4

0x8d31,	// (0x00052c97) main_video2_pane_g5_ParamLimits

0x8d31,	// (0x00052c97) main_video2_pane_g5

0x8d41,	// (0x00052ca7) main_video2_pane_g6_ParamLimits

0x8d41,	// (0x00052ca7) main_video2_pane_g6

0x0005,

0xf657,	// (0x000595bd) main_video2_pane_g_ParamLimits

0xf657,	// (0x000595bd) main_video2_pane_g

0x8d53,	// (0x00052cb9) main_video2_pane_t1_ParamLimits

0x8d53,	// (0x00052cb9) main_video2_pane_t1

0x8d6d,	// (0x00052cd3) main_video2_pane_t2_ParamLimits

0x8d6d,	// (0x00052cd3) main_video2_pane_t2

0x8d93,	// (0x00052cf9) main_video2_pane_t3_ParamLimits

0x8d93,	// (0x00052cf9) main_video2_pane_t3

0x0002,

0xf664,	// (0x000595ca) main_video2_pane_t_ParamLimits

0xf664,	// (0x000595ca) main_video2_pane_t

0x86f3,	// (0x00052659) call_muted_g2

0x0001,

0xf606,	// (0x0005956c) call_muted_g

0x326f,	// (0x0004d1d5) main_mup2_pane

0xe4f7,	// (0x0005845d) main_mup2_pane_g1_ParamLimits

0xe4f7,	// (0x0005845d) main_mup2_pane_g1

0x8db9,	// (0x00052d1f) main_mup2_pane_g2_ParamLimits

0x8db9,	// (0x00052d1f) main_mup2_pane_g2

0x9025,	// (0x00052f8b) main_mup_pane_g13_cp1

0x902d,	// (0x00052f93) mup_volume_pane_cp1

0x8dd9,	// (0x00052d3f) main_mup2_pane_g4_ParamLimits

0x8dd9,	// (0x00052d3f) main_mup2_pane_g4

0x8dea,	// (0x00052d50) main_mup2_pane_g5_ParamLimits

0x8dea,	// (0x00052d50) main_mup2_pane_g5

0x8dfb,	// (0x00052d61) main_mup2_pane_g6_ParamLimits

0x8dfb,	// (0x00052d61) main_mup2_pane_g6

0x8e0c,	// (0x00052d72) main_mup2_pane_g7_ParamLimits

0x8e0c,	// (0x00052d72) main_mup2_pane_g7

0x0006,

0xf66b,	// (0x000595d1) main_mup2_pane_g_ParamLimits

0xf66b,	// (0x000595d1) main_mup2_pane_g

0x8e28,	// (0x00052d8e) main_mup2_pane_t1_ParamLimits

0x8e28,	// (0x00052d8e) main_mup2_pane_t1

0x8e3f,	// (0x00052da5) main_mup2_pane_t2_ParamLimits

0x8e3f,	// (0x00052da5) main_mup2_pane_t2

0x8e56,	// (0x00052dbc) main_mup2_pane_t3_ParamLimits

0x8e56,	// (0x00052dbc) main_mup2_pane_t3

0x8e6d,	// (0x00052dd3) main_mup2_pane_t4_ParamLimits

0x8e6d,	// (0x00052dd3) main_mup2_pane_t4

0x8e87,	// (0x00052ded) main_mup2_pane_t5_ParamLimits

0x8e87,	// (0x00052ded) main_mup2_pane_t5

0x8ea1,	// (0x00052e07) main_mup2_pane_t6_ParamLimits

0x8ea1,	// (0x00052e07) main_mup2_pane_t6

0x0005,

0xf67a,	// (0x000595e0) main_mup2_pane_t_ParamLimits

0xf67a,	// (0x000595e0) main_mup2_pane_t

0x8ed5,	// (0x00052e3b) mup2_visualizer_pane_ParamLimits

0x8ed5,	// (0x00052e3b) mup2_visualizer_pane

0x8f07,	// (0x00052e6d) mup_progress_pane_cp_ParamLimits

0x8f07,	// (0x00052e6d) mup_progress_pane_cp

0x9010,	// (0x00052f76) mup_volume_pane_cp_ParamLimits

0x9010,	// (0x00052f76) mup_volume_pane_cp

0x8f1e,	// (0x00052e84) mup2_visualizer_pane_g1_ParamLimits

0x8f1e,	// (0x00052e84) mup2_visualizer_pane_g1

0xe503,	// (0x00058469) mup2_visualizer_pane_g2_ParamLimits

0xe503,	// (0x00058469) mup2_visualizer_pane_g2

0x8f33,	// (0x00052e99) mup2_visualizer_pane_g3_ParamLimits

0x8f33,	// (0x00052e99) mup2_visualizer_pane_g3

0x0002,

0xf687,	// (0x000595ed) mup2_visualizer_pane_g_ParamLimits

0xf687,	// (0x000595ed) mup2_visualizer_pane_g

0x83dc,	// (0x00052342) aid_size_cell_fmradio

0x87d5,	// (0x0005273b) aid_height_parent_landcape

0x38e9,	// (0x0004d84f) wml_content_pane_cp

0x38f1,	// (0x0004d857) wml_tabs_pane

0x38fa,	// (0x0004d860) popup_wml_miniature_window

0x3902,	// (0x0004d868) scroll_pane_cp021

0x3916,	// (0x0004d87c) wml_content_pane_comp8

0x326f,	// (0x0004d1d5) bg_popup_sub_pane_cp05

0xe521,	// (0x00058487) popup_wml_miniature_window_g1

0xe529,	// (0x0005848f) wml_miniature_view_pane

0x8f3f,	// (0x00052ea5) aid_size_wml_view

0x8f47,	// (0x00052ead) wml_miniature_view_pane_g1

0x8f50,	// (0x00052eb6) wml_miniature_view_pane_g2

0x8f59,	// (0x00052ebf) wml_miniature_view_pane_g3

0x8f61,	// (0x00052ec7) wml_miniature_view_pane_g4

0x8f69,	// (0x00052ecf) wml_miniature_view_pane_g5

0x8f71,	// (0x00052ed7) wml_miniature_view_pane_g6

0x8f79,	// (0x00052edf) wml_miniature_view_pane_g7

0x8f81,	// (0x00052ee7) wml_miniature_view_pane_g8

0x0007,

0xf68e,	// (0x000595f4) wml_miniature_view_pane_g

0xe4f7,	// (0x0005845d) background_graphic_ParamLimits

0xe4f7,	// (0x0005845d) background_graphic

0xe531,	// (0x00058497) wml_tabs_2_pane

0xe53a,	// (0x000584a0) wml_tabs_3_pane_ParamLimits

0xe53a,	// (0x000584a0) wml_tabs_3_pane

0xe54c,	// (0x000584b2) wml_tabs_4_pane_ParamLimits

0xe54c,	// (0x000584b2) wml_tabs_4_pane

0xe562,	// (0x000584c8) wml_tabs_5_pane_ParamLimits

0xe562,	// (0x000584c8) wml_tabs_5_pane

0xe57c,	// (0x000584e2) wml_tabs_pane_g2_ParamLimits

0xe57c,	// (0x000584e2) wml_tabs_pane_g2

0xe590,	// (0x000584f6) wml_tabs_pane_g3_ParamLimits

0xe590,	// (0x000584f6) wml_tabs_pane_g3

0x8f89,	// (0x00052eef) wml_tabs_2_active_pane_ParamLimits

0x8f89,	// (0x00052eef) wml_tabs_2_active_pane

0x8f99,	// (0x00052eff) wml_tabs_2_passive_pane_ParamLimits

0x8f99,	// (0x00052eff) wml_tabs_2_passive_pane

0x8fa9,	// (0x00052f0f) wml_tabs_3_active_pane_cp_ParamLimits

0x8fa9,	// (0x00052f0f) wml_tabs_3_active_pane_cp

0x8fba,	// (0x00052f20) wml_tabs_3_passive_pane_ParamLimits

0x8fba,	// (0x00052f20) wml_tabs_3_passive_pane

0x8fcb,	// (0x00052f31) wml_tabs_3_passive_pane_cp_ParamLimits

0x8fcb,	// (0x00052f31) wml_tabs_3_passive_pane_cp

0x8fdc,	// (0x00052f42) tabs_4_active_pane

0x8fe4,	// (0x00052f4a) tabs_4_passive_pane

0x8fec,	// (0x00052f52) tabs_4_passive_pane_cp

0x8ff4,	// (0x00052f5a) tabs_4_passive_pane_cp2

0x85d6,	// (0x0005253c) aid_height_text

0x7e05,	// (0x00051d6b) mup_volume_cont_pane_ParamLimits

0x7e05,	// (0x00051d6b) mup_volume_cont_pane

0x5d23,	// (0x0004fc89) aid_size_cell_pinb

0x5d2d,	// (0x0004fc93) aid_size_list_pinb

0x8ef0,	// (0x00052e56) mup2_volume_cont_pane_ParamLimits

0x8ef0,	// (0x00052e56) mup2_volume_cont_pane

0x8ffc,	// (0x00052f62) mup2_volume_cont_pane_g1_ParamLimits

0x8ffc,	// (0x00052f62) mup2_volume_cont_pane_g1

0x59c3,	// (0x0004f929) aid_size_cell_touch_ParamLimits

0x59c3,	// (0x0004f929) aid_size_cell_touch

0x5c58,	// (0x0004fbbe) touch_pane_ParamLimits

0x5c58,	// (0x0004fbbe) touch_pane

0x5c4e,	// (0x0004fbb4) main_rss2_pane

0xe5ad,	// (0x00058513) listscroll_rss2_pane

0xe5b6,	// (0x0005851c) rss2_navigation_pane

0xe5be,	// (0x00058524) list_rss2_pane

0x3f58,	// (0x0004debe) scroll_pane_cp22

0xe5c6,	// (0x0005852c) rss2_navigation_pane_g1

0xe5cf,	// (0x00058535) rss2_navigation_pane_g2

0xe5d7,	// (0x0005853d) rss2_navigation_pane_g3

0x0002,

0xf69f,	// (0x00059605) rss2_navigation_pane_g

0xe5df,	// (0x00058545) rss2_navigation_pane_t1

0x9035,	// (0x00052f9b) rss2_list_single_pane_ParamLimits

0x9035,	// (0x00052f9b) rss2_list_single_pane

0xe5ed,	// (0x00058553) rss2_list_single_pane_t2

0xe5fb,	// (0x00058561) rss2_list_single_pane_t3_ParamLimits

0xe5fb,	// (0x00058561) rss2_list_single_pane_t3

0xe618,	// (0x0005857e) rss2_list_single_pane_t4

0x7713,	// (0x00051679) smil_status_pane_g1

0x87fc,	// (0x00052762) main_image2_pane_ParamLimits

0x87fc,	// (0x00052762) main_image2_pane

0x8c24,	// (0x00052b8a) main_camera2_pane_g9_ParamLimits

0x8c24,	// (0x00052b8a) main_camera2_pane_g9

0x8c78,	// (0x00052bde) main_camera2_pane_t5_ParamLimits

0x8c78,	// (0x00052bde) main_camera2_pane_t5

0x8c8a,	// (0x00052bf0) main_camera2_pane_t6_ParamLimits

0x8c8a,	// (0x00052bf0) main_camera2_pane_t6

0x904b,	// (0x00052fb1) main_image2_pane_g1_ParamLimits

0x904b,	// (0x00052fb1) main_image2_pane_g1

0x83ca,	// (0x00052330) smil2_video_pane_ParamLimits

0x83ca,	// (0x00052330) smil2_video_pane

0x58cf,	// (0x0004f835) aid_zoom_text_primary_cp

0x5bef,	// (0x0004fb55) popup_preview_fixed_window

0x3843,	// (0x0004d7a9) im_reading_pane_g1

0x8b80,	// (0x00052ae6) cams2_bc_adjust_pane_cp_ParamLimits

0x8b80,	// (0x00052ae6) cams2_bc_adjust_pane_cp

0x8cb5,	// (0x00052c1b) cams2_bc_adjust_pane_ParamLimits

0x8cb5,	// (0x00052c1b) cams2_bc_adjust_pane

0xf0c2,	// (0x00059028) cams2_bc_adjust_pane_g1

0x9057,	// (0x00052fbd) cams2_slider_pane

0x9060,	// (0x00052fc6) cams2_slider_pane_g1

0x9069,	// (0x00052fcf) cams2_slider_pane_g2

0x0006,

0xf6a6,	// (0x0005960c) cams2_slider_pane_g

0x5dfd,	// (0x0004fd63) calc_display_pane_ParamLimits

0x5e17,	// (0x0004fd7d) calc_paper_pane_ParamLimits

0x5e2f,	// (0x0004fd95) grid_calc_pane_ParamLimits

0x798a,	// (0x000518f0) popup_clock_digital_window_t1_ParamLimits

0x43d6,	// (0x0004e33c) main_image_pane_t1

0x5de3,	// (0x0004fd49) aid_size_cell_calc_ParamLimits

0x5de3,	// (0x0004fd49) aid_size_cell_calc

0x882d,	// (0x00052793) popup_blid_sat_info2_window_ParamLimits

0x882d,	// (0x00052793) popup_blid_sat_info2_window

0xe62e,	// (0x00058594) aid_size_cell_blid

0xe636,	// (0x0005859c) bg_popup_window_pane_cp07

0xe659,	// (0x000585bf) grid_popup_blid_pane

0xe661,	// (0x000585c7) heading_pane_cp05_ParamLimits

0xe661,	// (0x000585c7) heading_pane_cp05

0xe729,	// (0x0005868f) cell_popup_blid_pane_ParamLimits

0xe729,	// (0x0005868f) cell_popup_blid_pane

0xe749,	// (0x000586af) cell_popup_blid_pane_g1

0xe751,	// (0x000586b7) cell_popup_blid_pane_t1

0x8ebe,	// (0x00052e24) mup2_indicator_pane_ParamLimits

0x8ebe,	// (0x00052e24) mup2_indicator_pane

0x374c,	// (0x0004d6b2) mup2_visualizer_osc_pane

0xe50f,	// (0x00058475) mup2_visualizer_spec_pane_ParamLimits

0xe50f,	// (0x00058475) mup2_visualizer_spec_pane

0x9083,	// (0x00052fe9) mup2_spec_half_pane

0x908c,	// (0x00052ff2) mup2_spec_half_pane_cp

0x9094,	// (0x00052ffa) mup2_spec_bar_pane_ParamLimits

0x9094,	// (0x00052ffa) mup2_spec_bar_pane

0xe4a4,	// (0x0005840a) mup2_spec_bar_pane_g1

0xe4ae,	// (0x00058414) mup2_spec_bar_pane_g2

0x0001,

0xf619,	// (0x0005957f) mup2_spec_bar_pane_g

0x90b3,	// (0x00053019) mup2_osc_middle_pane

0xe4c0,	// (0x00058426) mup2_visualizer_osc_pane_g1

0x2d5f,	// (0x0004ccc5) popup_number_entry_window_t1_ParamLimits

0x2d72,	// (0x0004ccd8) popup_number_entry_window_t2_ParamLimits

0x2d84,	// (0x0004ccea) popup_number_entry_window_t3_ParamLimits

0x2d96,	// (0x0004ccfc) popup_number_entry_window_t5_ParamLimits

0x2d96,	// (0x0004ccfc) popup_number_entry_window_t5

0xf0ca,	// (0x00059030) popup_number_entry_window_t_ParamLimits

0x2eb5,	// (0x0004ce1b) text_title_cp2_ParamLimits

0x8109,	// (0x0005206f) aid_hotspot_pointer_text2_pane

0x819b,	// (0x00052101) main_viewer_pane_g9_ParamLimits

0x819b,	// (0x00052101) main_viewer_pane_g9

0x3a8b,	// (0x0004d9f1) cale_month_pane_t1_ParamLimits

0x3ac8,	// (0x0004da2e) bg_cale_pane_ParamLimits

0x3ae0,	// (0x0004da46) list_cale_pane_ParamLimits

0x3af1,	// (0x0004da57) listscroll_cale_day_pane_t1

0x3b03,	// (0x0004da69) scroll_pane_cp09_ParamLimits

0x7e6d,	// (0x00051dd3) main_mup_eq_pane_t1_ParamLimits

0x7e6d,	// (0x00051dd3) main_mup_eq_pane_t1

0x7e83,	// (0x00051de9) main_mup_eq_pane_t2_ParamLimits

0x7e83,	// (0x00051de9) main_mup_eq_pane_t2

0x7e99,	// (0x00051dff) main_mup_eq_pane_t3_ParamLimits

0x7e99,	// (0x00051dff) main_mup_eq_pane_t3

0x7eaf,	// (0x00051e15) main_mup_eq_pane_t4_ParamLimits

0x7eaf,	// (0x00051e15) main_mup_eq_pane_t4

0x7ec5,	// (0x00051e2b) main_mup_eq_pane_t5_ParamLimits

0x7ec5,	// (0x00051e2b) main_mup_eq_pane_t5

0x7edb,	// (0x00051e41) main_mup_eq_pane_t6_ParamLimits

0x7edb,	// (0x00051e41) main_mup_eq_pane_t6

0x7eed,	// (0x00051e53) main_mup_eq_pane_t7_ParamLimits

0x7eed,	// (0x00051e53) main_mup_eq_pane_t7

0x7eff,	// (0x00051e65) main_mup_eq_pane_t8_ParamLimits

0x7eff,	// (0x00051e65) main_mup_eq_pane_t8

0x7f11,	// (0x00051e77) main_mup_eq_pane_t9_ParamLimits

0x7f11,	// (0x00051e77) main_mup_eq_pane_t9

0x7f27,	// (0x00051e8d) main_mup_eq_pane_t10_ParamLimits

0x7f27,	// (0x00051e8d) main_mup_eq_pane_t10

0x0009,

0xf455,	// (0x000593bb) main_mup_eq_pane_t_ParamLimits

0xf455,	// (0x000593bb) main_mup_eq_pane_t

0x7fba,	// (0x00051f20) mup_equalizer_pane_cp5_ParamLimits

0x7fcc,	// (0x00051f32) mup_equalizer_pane_cp6_ParamLimits

0x7fde,	// (0x00051f44) mup_equalizer_pane_cp7_ParamLimits

0x5c4e,	// (0x0004fbb4) main_gallery_pane

0xe4c9,	// (0x0005842f) smil2_volume_pane

0xe4d1,	// (0x00058437) smil_status_volume_pane_g1_ParamLimits

0xe4e4,	// (0x0005844a) smil_status_volume_pane_g2_ParamLimits

0x89fb,	// (0x00052961) smil_status_volume_pane_g3_ParamLimits

0xf61e,	// (0x00059584) smil_status_volume_pane_g_ParamLimits

0xe636,	// (0x0005859c) bg_popup_window_pane_cp07_ParamLimits

0xe644,	// (0x000585aa) blid_firmament_pane

0x90bc,	// (0x00053022) aid_size_cell_gallery_ParamLimits

0x90bc,	// (0x00053022) aid_size_cell_gallery

0x90ca,	// (0x00053030) grid_gallery_pane_ParamLimits

0x90ca,	// (0x00053030) grid_gallery_pane

0x90d6,	// (0x0005303c) cell_gallery_pane_ParamLimits

0x90d6,	// (0x0005303c) cell_gallery_pane

0xe75f,	// (0x000586c5) bg_cell_gallery_focus_pane_ParamLimits

0xe75f,	// (0x000586c5) bg_cell_gallery_focus_pane

0xe771,	// (0x000586d7) cell_gallery_pane_g1_ParamLimits

0xe771,	// (0x000586d7) cell_gallery_pane_g1

0x9112,	// (0x00053078) cell_gallery_pane_g2_ParamLimits

0x9112,	// (0x00053078) cell_gallery_pane_g2

0x911f,	// (0x00053085) cell_gallery_pane_g3_ParamLimits

0x911f,	// (0x00053085) cell_gallery_pane_g3

0xe77d,	// (0x000586e3) cell_gallery_pane_g4_ParamLimits

0xe77d,	// (0x000586e3) cell_gallery_pane_g4

0x0003,

0xf6cc,	// (0x00059632) cell_gallery_pane_g_ParamLimits

0xf6cc,	// (0x00059632) cell_gallery_pane_g

0xe789,	// (0x000586ef) bg_cell_gallery_focus_pane_g1

0xe791,	// (0x000586f7) bg_cell_gallery_focus_pane_g2

0xe799,	// (0x000586ff) bg_cell_gallery_focus_pane_g3

0xe7a1,	// (0x00058707) bg_cell_gallery_focus_pane_g4

0xe7a9,	// (0x0005870f) bg_cell_gallery_focus_pane_g5

0xe7b1,	// (0x00058717) bg_cell_gallery_focus_pane_g6

0xe7b9,	// (0x0005871f) bg_cell_gallery_focus_pane_g7

0xe7c1,	// (0x00058727) bg_cell_gallery_focus_pane_g8

0x0007,

0xf6d5,	// (0x0005963b) bg_cell_gallery_focus_pane_g

0xe7c9,	// (0x0005872f) aid_firma_cardinal

0xe7dd,	// (0x00058743) blid_firmament_pane_t1

0xe7f4,	// (0x0005875a) blid_firmament_pane_t2

0xe80b,	// (0x00058771) blid_firmament_pane_t3

0xe822,	// (0x00058788) blid_firmament_pane_t4

0x0003,

0xf6e6,	// (0x0005964c) blid_firmament_pane_t

0xe839,	// (0x0005879f) blid_sat_info_pane

0xe849,	// (0x000587af) blid_sat_info_pane_g1

0xe849,	// (0x000587af) blid_sat_info_pane_g2

0x0001,

0xf6ef,	// (0x00059655) blid_sat_info_pane_g

0xe853,	// (0x000587b9) blid_sat_info_pane_t1

0xe861,	// (0x000587c7) smil2_volume_content_pane

0xe86a,	// (0x000587d0) smil2_volume_pane_g1

0xe872,	// (0x000587d8) smil2_volume_content_pane_g1

0xe87b,	// (0x000587e1) smil2_volume_content_pane_g2

0xe884,	// (0x000587ea) smil2_volume_content_pane_g3

0xe88d,	// (0x000587f3) smil2_volume_content_pane_g4

0xe896,	// (0x000587fc) smil2_volume_content_pane_g5

0xe89f,	// (0x00058805) smil2_volume_content_pane_g6

0xe8a8,	// (0x0005880e) smil2_volume_content_pane_g7

0xe8b1,	// (0x00058817) smil2_volume_content_pane_g8

0xe8ba,	// (0x00058820) smil2_volume_content_pane_g9

0xe8c3,	// (0x00058829) smil2_volume_content_pane_g10

0x0009,

0xf6f4,	// (0x0005965a) smil2_volume_content_pane_g

0x642d,	// (0x00050393) cale_week_day_heading_pane_t1_ParamLimits

0x6455,	// (0x000503bb) cale_week_day_heading_pane_t2_ParamLimits

0x6482,	// (0x000503e8) cale_week_day_heading_pane_t3_ParamLimits

0x64af,	// (0x00050415) cale_week_day_heading_pane_t4_ParamLimits

0x64dc,	// (0x00050442) cale_week_day_heading_pane_t5_ParamLimits

0x6509,	// (0x0005046f) cale_week_day_heading_pane_t6_ParamLimits

0x6536,	// (0x0005049c) cale_week_day_heading_pane_t7_ParamLimits

0xf1d1,	// (0x00059137) cale_week_day_heading_pane_t_ParamLimits

0x36fa,	// (0x0004d660) bg_cale_side_pane_ParamLimits

0x655e,	// (0x000504c4) cale_week_time_pane_t1_ParamLimits

0x65a2,	// (0x00050508) cale_week_time_pane_t2_ParamLimits

0x65e6,	// (0x0005054c) cale_week_time_pane_t3_ParamLimits

0x662a,	// (0x00050590) cale_week_time_pane_t4_ParamLimits

0x666e,	// (0x000505d4) cale_week_time_pane_t5_ParamLimits

0x66b2,	// (0x00050618) cale_week_time_pane_t6_ParamLimits

0x66f6,	// (0x0005065c) cale_week_time_pane_t7_ParamLimits

0x673a,	// (0x000506a0) cale_week_time_pane_t8_ParamLimits

0xf1e0,	// (0x00059146) cale_week_time_pane_t_ParamLimits

0x677e,	// (0x000506e4) cell_cale_week_pane_g2_ParamLimits

0x36fa,	// (0x0004d660) bg_cale_side_pane_cp01_ParamLimits

0x7524,	// (0x0005148a) cale_month_week_pane_t1_ParamLimits

0x753d,	// (0x000514a3) cale_month_week_pane_t2_ParamLimits

0x7556,	// (0x000514bc) cale_month_week_pane_t3_ParamLimits

0x756f,	// (0x000514d5) cale_month_week_pane_t4_ParamLimits

0x7588,	// (0x000514ee) cale_month_week_pane_t5_ParamLimits

0x75a1,	// (0x00051507) cale_month_week_pane_t6_ParamLimits

0xf2b5,	// (0x0005921b) cale_month_week_pane_t_ParamLimits

0x76d2,	// (0x00051638) cell_cale_month_pane_g1_ParamLimits

0x5c4e,	// (0x0004fbb4) main_cale_event_viewer_pane

0x2d35,	// (0x0004cc9b) listscroll_cale_event_viewer_pane

0xe8cc,	// (0x00058832) list_cale_ev_pane

0xe8d4,	// (0x0005883a) scroll_pane_cp023

0x912c,	// (0x00053092) field_cale_ev_pane_ParamLimits

0x912c,	// (0x00053092) field_cale_ev_pane

0xe8e0,	// (0x00058846) field_cale_ev_content_pane_ParamLimits

0xe8e0,	// (0x00058846) field_cale_ev_content_pane

0xe8ec,	// (0x00058852) field_cale_ev_pane_g1_ParamLimits

0xe8ec,	// (0x00058852) field_cale_ev_pane_g1

0xe8f8,	// (0x0005885e) field_cale_ev_pane_g2_ParamLimits

0xe8f8,	// (0x0005885e) field_cale_ev_pane_g2

0xe910,	// (0x00058876) field_cale_ev_pane_g3_ParamLimits

0xe910,	// (0x00058876) field_cale_ev_pane_g3

0x0002,

0xf709,	// (0x0005966f) field_cale_ev_pane_g_ParamLimits

0xf709,	// (0x0005966f) field_cale_ev_pane_g

0xe928,	// (0x0005888e) field_cale_ev_pane_t1_ParamLimits

0xe928,	// (0x0005888e) field_cale_ev_pane_t1

0x9146,	// (0x000530ac) field_cale_ev_content_pane_t1_ParamLimits

0x9146,	// (0x000530ac) field_cale_ev_content_pane_t1

0x42bc,	// (0x0004e222) bg_button_pane_cp01

0x6133,	// (0x00050099) listscroll_cale_week_pane_ParamLimits

0x36c2,	// (0x0004d628) popup_toolbar_window_cp01

0x36cb,	// (0x0004d631) listscroll_cale_week_pane_t1_ParamLimits

0x6133,	// (0x00050099) listscroll_cale_day_pane_ParamLimits

0x36c2,	// (0x0004d628) popup_toolbar_window_cp02

0x3af1,	// (0x0004da57) listscroll_cale_day_pane_t1_ParamLimits

0x87ec,	// (0x00052752) main_cale_month_pane_ParamLimits

0x8904,	// (0x0005286a) popup_toolbar_window_cp03_ParamLimits

0x8904,	// (0x0005286a) popup_toolbar_window_cp03

0x82f2,	// (0x00052258) main_image_pane_g2_ParamLimits

0x82f2,	// (0x00052258) main_image_pane_g2

0x82fe,	// (0x00052264) main_image_pane_g3_ParamLimits

0x82fe,	// (0x00052264) main_image_pane_g3

0x0002,

0xf4e7,	// (0x0005944d) main_image_pane_g_ParamLimits

0xf4e7,	// (0x0005944d) main_image_pane_g

0x43d6,	// (0x0004e33c) main_image_pane_t1_ParamLimits

0x830a,	// (0x00052270) main_image_pane_t2_ParamLimits

0x830a,	// (0x00052270) main_image_pane_t2

0x831c,	// (0x00052282) main_image_pane_t3_ParamLimits

0x831c,	// (0x00052282) main_image_pane_t3

0x832e,	// (0x00052294) main_image_pane_t4_ParamLimits

0x832e,	// (0x00052294) main_image_pane_t4

0x0003,

0xf4ee,	// (0x00059454) main_image_pane_t_ParamLimits

0xf4ee,	// (0x00059454) main_image_pane_t

0x8340,	// (0x000522a6) popup_image_details_window_cp01

0x8348,	// (0x000522ae) popup_toobar_trans_pane_cp01_ParamLimits

0x8348,	// (0x000522ae) popup_toobar_trans_pane_cp01

0x8874,	// (0x000527da) popup_image_details_window_ParamLimits

0x8874,	// (0x000527da) popup_image_details_window

0x8880,	// (0x000527e6) popup_image_focus_window

0x8b74,	// (0x00052ada) camera2_autofocus_pane_ParamLimits

0x8b74,	// (0x00052ada) camera2_autofocus_pane

0x2d35,	// (0x0004cc9b) bg_popup_sub_pane_cp06

0xe93f,	// (0x000588a5) popup_image_focus_window_g1

0xe947,	// (0x000588ad) popup_image_focus_window_g2

0xe94f,	// (0x000588b5) popup_image_focus_window_g3

0xe957,	// (0x000588bd) popup_image_focus_window_g4

0x0003,

0xf710,	// (0x00059676) popup_image_focus_window_g

0xe95f,	// (0x000588c5) popup_image_focus_window_t1

0xe96d,	// (0x000588d3) popup_image_focus_window_t2

0xe97c,	// (0x000588e2) popup_image_focus_window_t3

0x0002,

0xf719,	// (0x0005967f) popup_image_focus_window_t

0xe98a,	// (0x000588f0) camera2_autofocus_pane_g1

0x4a02,	// (0x0004e968) bg_tb_trans_pane_cp01

0xe998,	// (0x000588fe) popup_image_details_window_g1

0xe9ab,	// (0x00058911) popup_image_details_window_g2

0x0002,

0xf72b,	// (0x00059691) popup_image_details_window_g

0xe9d4,	// (0x0005893a) popup_image_details_window_t1

0xe9e6,	// (0x0005894c) popup_image_details_window_t2

0xe9ff,	// (0x00058965) popup_image_details_window_t3

0xea13,	// (0x00058979) popup_image_details_window_t4

0xea2e,	// (0x00058994) popup_image_details_window_t5

0x0004,

0xf732,	// (0x00059698) popup_image_details_window_t

0x3587,	// (0x0004d4ed) bg_calc_paper_pane_ParamLimits

0x5c4e,	// (0x0004fbb4) grid_highlight_pane_cp013

0x5f18,	// (0x0004fe7e) list_calc_pane_ParamLimits

0x5f2a,	// (0x0004fe90) scroll_pane_cp024

0x359b,	// (0x0004d501) bg_calc_display_pane_ParamLimits

0x5f32,	// (0x0004fe98) calc_display_pane_t1_ParamLimits

0x5f47,	// (0x0004fead) calc_display_pane_t2_ParamLimits

0x5f5c,	// (0x0004fec2) calc_display_pane_t3_ParamLimits

0xf151,	// (0x000590b7) calc_display_pane_t_ParamLimits

0x6011,	// (0x0004ff77) cell_calc_pane_g2

0x0001,

0xf16e,	// (0x000590d4) cell_calc_pane_g

0x601a,	// (0x0004ff80) cell_calc_pane_t1

0x35fa,	// (0x0004d560) grid_highlight_pane_cp02_ParamLimits

0x3610,	// (0x0004d576) toolbar_button_pane_cp01_ParamLimits

0x3610,	// (0x0004d576) toolbar_button_pane_cp01

0x441b,	// (0x0004e381) temp_image_control_pane_ParamLimits

0x441b,	// (0x0004e381) temp_image_control_pane

0x87fc,	// (0x00052762) main_mp3_pane

0xea48,	// (0x000589ae) temp_image_control_pane_g1_ParamLimits

0xea48,	// (0x000589ae) temp_image_control_pane_g1

0xea56,	// (0x000589bc) temp_image_control_pane_g2_ParamLimits

0xea56,	// (0x000589bc) temp_image_control_pane_g2

0xea68,	// (0x000589ce) temp_image_control_pane_g3_ParamLimits

0xea68,	// (0x000589ce) temp_image_control_pane_g3

0x918f,	// (0x000530f5) temp_image_control_pane_g4_ParamLimits

0x918f,	// (0x000530f5) temp_image_control_pane_g4

0x0003,

0xf73d,	// (0x000596a3) temp_image_control_pane_g_ParamLimits

0xf73d,	// (0x000596a3) temp_image_control_pane_g

0xea48,	// (0x000589ae) main_mp3_pane_g1

0x91a0,	// (0x00053106) main_mp3_pane_g2

0x0007,

0xf746,	// (0x000596ac) main_mp3_pane_g

0xeaab,	// (0x00058a11) main_mp3_pane_t1

0x3754,	// (0x0004d6ba) main_camera_pane_g8_ParamLimits

0x3754,	// (0x0004d6ba) main_camera_pane_g8

0x69fa,	// (0x00050960) main_video_pane_g7_ParamLimits

0x69fa,	// (0x00050960) main_video_pane_g7

0x8ca3,	// (0x00052c09) main_camera2_pane_t7_ParamLimits

0x8ca3,	// (0x00052c09) main_camera2_pane_t7

0x38a9,	// (0x0004d80f) scroll_pane_cp025_ParamLimits

0x38a9,	// (0x0004d80f) scroll_pane_cp025

0x38bd,	// (0x0004d823) scroll_pane_cp026_ParamLimits

0x38bd,	// (0x0004d823) scroll_pane_cp026

0x38cc,	// (0x0004d832) wml_content_pane_ParamLimits

0x5c4e,	// (0x0004fbb4) main_touch_calib_pane

0x9238,	// (0x0005319e) main_touch_calib_pane_g1

0x9244,	// (0x000531aa) main_touch_calib_pane_g2

0x9250,	// (0x000531b6) main_touch_calib_pane_g3

0x925c,	// (0x000531c2) main_touch_calib_pane_g4

0x0003,

0xf764,	// (0x000596ca) main_touch_calib_pane_g

0x9268,	// (0x000531ce) main_touch_calib_pane_t1

0x927d,	// (0x000531e3) main_touch_calib_pane_t2

0x0004,

0xf76d,	// (0x000596d3) main_touch_calib_pane_t

0x4025,	// (0x0004df8b) mup_progress_pane_cp02

0x405a,	// (0x0004dfc0) navi_pane_g1

0x4113,	// (0x0004e079) navi_pane_mp_t3

0x87fc,	// (0x00052762) main_mp3_pane_ParamLimits

0x893f,	// (0x000528a5) navi_pane_ParamLimits

0xea48,	// (0x000589ae) main_mp3_pane_g1_ParamLimits

0x91a0,	// (0x00053106) main_mp3_pane_g2_ParamLimits

0x91ac,	// (0x00053112) main_mp3_pane_g3_ParamLimits

0x91ac,	// (0x00053112) main_mp3_pane_g3

0x91b8,	// (0x0005311e) main_mp3_pane_g4_ParamLimits

0x91b8,	// (0x0005311e) main_mp3_pane_g4

0xea78,	// (0x000589de) main_mp3_pane_g5_ParamLimits

0xea78,	// (0x000589de) main_mp3_pane_g5

0xea86,	// (0x000589ec) main_mp3_pane_g6_ParamLimits

0xea86,	// (0x000589ec) main_mp3_pane_g6

0xea93,	// (0x000589f9) main_mp3_pane_g7_ParamLimits

0xea93,	// (0x000589f9) main_mp3_pane_g7

0xea9f,	// (0x00058a05) main_mp3_pane_g8_ParamLimits

0xea9f,	// (0x00058a05) main_mp3_pane_g8

0xf746,	// (0x000596ac) main_mp3_pane_g_ParamLimits

0x91c4,	// (0x0005312a) main_mp3_pane_t2

0x91d2,	// (0x00053138) main_mp3_pane_t3

0xeab9,	// (0x00058a1f) main_mp3_pane_t4

0xeac7,	// (0x00058a2d) main_mp3_pane_t5

0x0005,

0xf757,	// (0x000596bd) main_mp3_pane_t

0xead5,	// (0x00058a3b) mup_progress_pane_cp01

0x58cf,	// (0x0004f835) aid_zoom_text_secondary2

0xe8cc,	// (0x00058832) list_cale_ev2_pane

0xe8d4,	// (0x0005883a) scroll_pane_cp023_ParamLimits

0x92c8,	// (0x0005322e) field_cale_ev2_pane_ParamLimits

0x92c8,	// (0x0005322e) field_cale_ev2_pane

0x92dd,	// (0x00053243) field_cale_ev2_pane_g1_ParamLimits

0x92dd,	// (0x00053243) field_cale_ev2_pane_g1

0x92e9,	// (0x0005324f) field_cale_ev2_pane_g2_ParamLimits

0x92e9,	// (0x0005324f) field_cale_ev2_pane_g2

0x9301,	// (0x00053267) field_cale_ev2_pane_g3_ParamLimits

0x9301,	// (0x00053267) field_cale_ev2_pane_g3

0x0003,

0xf778,	// (0x000596de) field_cale_ev2_pane_g_ParamLimits

0xf778,	// (0x000596de) field_cale_ev2_pane_g

0x9319,	// (0x0005327f) field_cale_ev2_pane_t1_ParamLimits

0x9319,	// (0x0005327f) field_cale_ev2_pane_t1

0x9330,	// (0x00053296) field_cale_ev2_pane_t2_ParamLimits

0x9330,	// (0x00053296) field_cale_ev2_pane_t2

0x0001,

0xf781,	// (0x000596e7) field_cale_ev2_pane_t_ParamLimits

0xf781,	// (0x000596e7) field_cale_ev2_pane_t

0x81ef,	// (0x00052155) main_postcard_pane_g5_ParamLimits

0x81ef,	// (0x00052155) main_postcard_pane_g5

0x81fb,	// (0x00052161) main_postcard_pane_g6_ParamLimits

0x81fb,	// (0x00052161) main_postcard_pane_g6

0x684f,	// (0x000507b5) camera2_autofocus_pane_cp_ParamLimits

0x684f,	// (0x000507b5) camera2_autofocus_pane_cp

0x87fc,	// (0x00052762) main_mup3_pane

0x9365,	// (0x000532cb) main_mup3_pane_g1_ParamLimits

0x9365,	// (0x000532cb) main_mup3_pane_g1

0x9386,	// (0x000532ec) main_mup3_pane_g2_ParamLimits

0x9386,	// (0x000532ec) main_mup3_pane_g2

0x93f3,	// (0x00053359) main_mup3_pane_g3_ParamLimits

0x93f3,	// (0x00053359) main_mup3_pane_g3

0x942e,	// (0x00053394) main_mup3_pane_g4_ParamLimits

0x942e,	// (0x00053394) main_mup3_pane_g4

0x9469,	// (0x000533cf) main_mup3_pane_g5_ParamLimits

0x9469,	// (0x000533cf) main_mup3_pane_g5

0x94a4,	// (0x0005340a) main_mup3_pane_g6_ParamLimits

0x94a4,	// (0x0005340a) main_mup3_pane_g6

0xeadd,	// (0x00058a43) main_mup3_pane_g7_ParamLimits

0xeadd,	// (0x00058a43) main_mup3_pane_g7

0x0007,

0xf791,	// (0x000596f7) main_mup3_pane_g_ParamLimits

0xf791,	// (0x000596f7) main_mup3_pane_g

0x9510,	// (0x00053476) main_mup3_pane_t1_ParamLimits

0x9510,	// (0x00053476) main_mup3_pane_t1

0x9571,	// (0x000534d7) main_mup3_pane_t2_ParamLimits

0x9571,	// (0x000534d7) main_mup3_pane_t2

0x962c,	// (0x00053592) main_mup3_pane_t4_ParamLimits

0x962c,	// (0x00053592) main_mup3_pane_t4

0x9672,	// (0x000535d8) main_mup3_pane_t5_ParamLimits

0x9672,	// (0x000535d8) main_mup3_pane_t5

0x9716,	// (0x0005367c) main_mup3_pane_t6_ParamLimits

0x9716,	// (0x0005367c) main_mup3_pane_t6

0x0005,

0xf7a2,	// (0x00059708) main_mup3_pane_t_ParamLimits

0xf7a2,	// (0x00059708) main_mup3_pane_t

0x97be,	// (0x00053724) mup3_progress_pane_ParamLimits

0x97be,	// (0x00053724) mup3_progress_pane

0x9822,	// (0x00053788) popup_mup3_control_window_ParamLimits

0x9822,	// (0x00053788) popup_mup3_control_window

0xeaeb,	// (0x00058a51) popup_mup3_text_window

0x983b,	// (0x000537a1) mup3_progress_pane_t1

0x9859,	// (0x000537bf) mup3_progress_pane_t2

0xeaf3,	// (0x00058a59) mup3_progress_pane_t3

0x0002,

0xf7af,	// (0x00059715) mup3_progress_pane_t

0xeb10,	// (0x00058a76) mup_progress_pane_cp03

0x2d35,	// (0x0004cc9b) bg_tb_trans_pane_cp04

0x9877,	// (0x000537dd) mup3_volume_pane

0x987f,	// (0x000537e5) popup_mup3_control_window_g1

0x9888,	// (0x000537ee) mup3_volume_pane_g1

0x9891,	// (0x000537f7) mup3_volume_pane_g2

0x989a,	// (0x00053800) mup3_volume_pane_g3

0x0002,

0xf7b6,	// (0x0005971c) mup3_volume_pane_g

0x2d35,	// (0x0004cc9b) bg_tb_trans_pane_cp03

0xeb20,	// (0x00058a86) popup_mup3_text_window_g1

0xeb28,	// (0x00058a8e) popup_mup3_text_window_t1

0x35e3,	// (0x0004d549) list_calc_item_pane_g1_ParamLimits

0xe5a4,	// (0x0005850a) mup_volume_pane_cp_g1

0x9292,	// (0x000531f8) main_touch_calib_pane_t3

0x92a4,	// (0x0005320a) main_touch_calib_pane_t4

0x92b6,	// (0x0005321c) main_touch_calib_pane_t5

0x59b3,	// (0x0004f919) aid_cell_size_toolbar2

0x59bb,	// (0x0004f921) aid_popup3_width_pane

0x58c7,	// (0x0004f82d) aid_zoom_text_msg_primary

0x6824,	// (0x0005078a) vorec_t7

0x35a7,	// (0x0004d50d) bg_calc_paper_pane_g1_ParamLimits

0x35bf,	// (0x0004d525) bg_calc_paper_pane_g2_ParamLimits

0x35b3,	// (0x0004d519) bg_calc_paper_pane_g3_ParamLimits

0x35d7,	// (0x0004d53d) bg_calc_paper_pane_g4_ParamLimits

0x35cb,	// (0x0004d531) bg_calc_paper_pane_g5_ParamLimits

0x5f95,	// (0x0004fefb) bg_calc_paper_pane_g6_ParamLimits

0x5fa4,	// (0x0004ff0a) bg_calc_paper_pane_g7_ParamLimits

0x5fb3,	// (0x0004ff19) bg_calc_paper_pane_g8_ParamLimits

0xf158,	// (0x000590be) bg_calc_paper_pane_g_ParamLimits

0x5fc2,	// (0x0004ff28) calc_bg_paper_pane_g9_ParamLimits

0x692f,	// (0x00050895) image_qvga_pane_ParamLimits

0x692f,	// (0x00050895) image_qvga_pane

0x34ca,	// (0x0004d430) bg_popup_sub_pane_cp04_ParamLimits

0x4352,	// (0x0004e2b8) popup_mup_playback_window_g1_ParamLimits

0x435e,	// (0x0004e2c4) popup_mup_playback_window_t1_ParamLimits

0x4373,	// (0x0004e2d9) popup_mup_playback_window_t2_ParamLimits

0xf4e2,	// (0x00059448) popup_mup_playback_window_t_ParamLimits

0x8dca,	// (0x00052d30) main_mup2_pane_g3_ParamLimits

0x8dca,	// (0x00052d30) main_mup2_pane_g3

0x6cd4,	// (0x00050c3a) popup_toolbar_window_cp04

0x4730,	// (0x0004e696) popup_call2_audio_second_window_g3_ParamLimits

0x4730,	// (0x0004e696) popup_call2_audio_second_window_g3

0xda1d,	// (0x00057983) popup_call2_audio_first_window_g4_ParamLimits

0xda1d,	// (0x00057983) popup_call2_audio_first_window_g4

0xe09c,	// (0x00058002) popup_call2_audio_in_window_g4_ParamLimits

0xe09c,	// (0x00058002) popup_call2_audio_in_window_g4

0x82e5,	// (0x0005224b) aid_area_sk_bg_cut_ParamLimits

0x82e5,	// (0x0005224b) aid_area_sk_bg_cut

0x4388,	// (0x0004e2ee) aid_area_sk_bg_cut_2_ParamLimits

0x4388,	// (0x0004e2ee) aid_area_sk_bg_cut_2

0x9102,	// (0x00053068) aid_placing_details_win

0x910a,	// (0x00053070) aid_placing_details_win_2

0xe98a,	// (0x000588f0) camera2_autofocus_pane_g1_ParamLimits

0x5be0,	// (0x0004fb46) popup_fixed_preview_cale_window_ParamLimits

0x5be0,	// (0x0004fb46) popup_fixed_preview_cale_window

0x41a3,	// (0x0004e109) navi_slider_pane_g3

0x419a,	// (0x0004e100) navi_slider_pane_g4

0x4191,	// (0x0004e0f7) navi_slider_pane_g5

0x41a3,	// (0x0004e109) navi_slider_pane_g6

0x7c00,	// (0x00051b66) navi_slider_pane_g7

0x4289,	// (0x0004e1ef) mup_scale_pane_g3

0x4292,	// (0x0004e1f8) mup_scale_pane_g4

0x429b,	// (0x0004e201) mup_scale_pane_g5

0x7ff0,	// (0x00051f56) mup_scale_pane_g6

0x7ff9,	// (0x00051f5f) mup_scale_pane_g7

0x41a3,	// (0x0004e109) cams2_slider_pane_g3

0xe626,	// (0x0005858c) cams2_slider_pane_g4

0x9072,	// (0x00052fd8) cams2_slider_pane_g5

0x41a3,	// (0x0004e109) cams2_slider_pane_g6

0x907a,	// (0x00052fe0) cams2_slider_pane_g7

0xe849,	// (0x000587af) camera2_autofocus_pane_cp_g1

0xe43d,	// (0x000583a3) bg_popup_preview_window_pane_cp02_ParamLimits

0xe43d,	// (0x000583a3) bg_popup_preview_window_pane_cp02

0xeb36,	// (0x00058a9c) list_fp_cale_pane_ParamLimits

0xeb36,	// (0x00058a9c) list_fp_cale_pane

0xeb42,	// (0x00058aa8) popup_fixed_preview_cale_window_t1_ParamLimits

0xeb42,	// (0x00058aa8) popup_fixed_preview_cale_window_t1

0x98a3,	// (0x00053809) popup_fixed_preview_cale_window_t2_ParamLimits

0x98a3,	// (0x00053809) popup_fixed_preview_cale_window_t2

0x98b8,	// (0x0005381e) popup_fixed_preview_cale_window_t3_ParamLimits

0x98b8,	// (0x0005381e) popup_fixed_preview_cale_window_t3

0x0002,

0xf7bd,	// (0x00059723) popup_fixed_preview_cale_window_t_ParamLimits

0xf7bd,	// (0x00059723) popup_fixed_preview_cale_window_t

0x98cd,	// (0x00053833) list_single_fp_cale_pane_ParamLimits

0x98cd,	// (0x00053833) list_single_fp_cale_pane

0xeb60,	// (0x00058ac6) list_single_fp_cale_pane_g1_ParamLimits

0xeb60,	// (0x00058ac6) list_single_fp_cale_pane_g1

0xeb6c,	// (0x00058ad2) list_single_fp_cale_pane_g2_ParamLimits

0xeb6c,	// (0x00058ad2) list_single_fp_cale_pane_g2

0x0002,

0xf7c4,	// (0x0005972a) list_single_fp_cale_pane_g_ParamLimits

0xf7c4,	// (0x0005972a) list_single_fp_cale_pane_g

0xeb85,	// (0x00058aeb) list_single_fp_cale_pane_t1_ParamLimits

0xeb85,	// (0x00058aeb) list_single_fp_cale_pane_t1

0xeb97,	// (0x00058afd) list_single_fp_cale_pane_t2_ParamLimits

0xeb97,	// (0x00058afd) list_single_fp_cale_pane_t2

0x0001,

0xf7cb,	// (0x00059731) list_single_fp_cale_pane_t_ParamLimits

0xf7cb,	// (0x00059731) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x5c4e,	// (0x0004fbb4) main_dialer_pane

0x98da,	// (0x00053840) aid_cell_size_keypad

0x98e4,	// (0x0005384a) dialer_ne_pane

0x98ec,	// (0x00053852) grid_dialer_command_1_pane

0x98f4,	// (0x0005385a) grid_dialer_command_2_pane

0x98fc,	// (0x00053862) grid_dialer_keypad_pane

0x990c,	// (0x00053872) bg_popup_call_pane_cp06_ParamLimits

0x990c,	// (0x00053872) bg_popup_call_pane_cp06

0x9918,	// (0x0005387e) dialer_ne_clear_pane_ParamLimits

0x9918,	// (0x0005387e) dialer_ne_clear_pane

0xebca,	// (0x00058b30) dialer_ne_pane_g1

0xebd2,	// (0x00058b38) dialer_ne_pane_t1_ParamLimits

0xebd2,	// (0x00058b38) dialer_ne_pane_t1

0x9924,	// (0x0005388a) dialer_ne_pane_t2_ParamLimits

0x9924,	// (0x0005388a) dialer_ne_pane_t2

0x9941,	// (0x000538a7) dialer_ne_pane_t3_ParamLimits

0x9941,	// (0x000538a7) dialer_ne_pane_t3

0x0002,

0xf7d0,	// (0x00059736) dialer_ne_pane_t_ParamLimits

0xf7d0,	// (0x00059736) dialer_ne_pane_t

0x9965,	// (0x000538cb) dialer_ne_pane_t3_copy1_ParamLimits

0x9965,	// (0x000538cb) dialer_ne_pane_t3_copy1

0x9989,	// (0x000538ef) cell_dialer_keypad_pane_ParamLimits

0x9989,	// (0x000538ef) cell_dialer_keypad_pane

0x999e,	// (0x00053904) cell_dialer_command_1_pane_ParamLimits

0x999e,	// (0x00053904) cell_dialer_command_1_pane

0x99b4,	// (0x0005391a) cell_dialer_command_2_pane_ParamLimits

0x99b4,	// (0x0005391a) cell_dialer_command_2_pane

0xebe4,	// (0x00058b4a) bg_button_pane_cp02_ParamLimits

0xebe4,	// (0x00058b4a) bg_button_pane_cp02

0x99c3,	// (0x00053929) cell_dialer_keypad_pane_g1_ParamLimits

0x99c3,	// (0x00053929) cell_dialer_keypad_pane_g1

0xebe4,	// (0x00058b4a) bg_button_pane_cp03_ParamLimits

0xebe4,	// (0x00058b4a) bg_button_pane_cp03

0x99d8,	// (0x0005393e) cell_dialer_command_1_pane_g1_ParamLimits

0x99d8,	// (0x0005393e) cell_dialer_command_1_pane_g1

0xebf0,	// (0x00058b56) bg_button_pane_cp04

0x99eb,	// (0x00053951) cell_dialer_command_2_pane_g1

0x374c,	// (0x0004d6b2) bg_button_pane_cp06

0xebf8,	// (0x00058b5e) dialer_ne_clear_pane_g1

0x4066,	// (0x0004dfcc) navi_pane_g2

0x4094,	// (0x0004dffa) navi_pane_g3

0x0002,

0xf3e5,	// (0x0005934b) navi_pane_g

0x4121,	// (0x0004e087) navi_pane_mv_g2

0x4148,	// (0x0004e0ae) navi_pane_mv_g5

0x7bcb,	// (0x00051b31) navi_pane_mv_t1

0x359b,	// (0x0004d501) main_clock2_pane

0x9a27,	// (0x0005398d) main_clock2_list_pane_ParamLimits

0x9a27,	// (0x0005398d) main_clock2_list_pane

0x9a4d,	// (0x000539b3) main_clock2_pane_t1_ParamLimits

0x9a4d,	// (0x000539b3) main_clock2_pane_t1

0x9a6d,	// (0x000539d3) main_clock2_pane_t2_ParamLimits

0x9a6d,	// (0x000539d3) main_clock2_pane_t2

0x0004,

0xf7dc,	// (0x00059742) main_clock2_pane_t_ParamLimits

0xf7dc,	// (0x00059742) main_clock2_pane_t

0x9ac6,	// (0x00053a2c) popup_clock_analogue_window_cp03_ParamLimits

0x9ac6,	// (0x00053a2c) popup_clock_analogue_window_cp03

0x9ae3,	// (0x00053a49) popup_clock_digital_window_cp02_ParamLimits

0x9ae3,	// (0x00053a49) popup_clock_digital_window_cp02

0x9b50,	// (0x00053ab6) main_clock2_list_single_pane_ParamLimits

0x9b50,	// (0x00053ab6) main_clock2_list_single_pane

0x374c,	// (0x0004d6b2) list_highlight_pane_cp05

0xec30,	// (0x00058b96) main_clock2_list_single_pane_t1

0x6cd4,	// (0x00050c3a) popup_toolbar_window_cp04_ParamLimits

0x915f,	// (0x000530c5) camera2_autofocus_pane_g2_ParamLimits

0x915f,	// (0x000530c5) camera2_autofocus_pane_g2

0x916b,	// (0x000530d1) camera2_autofocus_pane_g3_ParamLimits

0x916b,	// (0x000530d1) camera2_autofocus_pane_g3

0x9177,	// (0x000530dd) camera2_autofocus_pane_g4_ParamLimits

0x9177,	// (0x000530dd) camera2_autofocus_pane_g4

0x9183,	// (0x000530e9) camera2_autofocus_pane_g5_ParamLimits

0x9183,	// (0x000530e9) camera2_autofocus_pane_g5

0x0004,

0xf720,	// (0x00059686) camera2_autofocus_pane_g_ParamLimits

0xf720,	// (0x00059686) camera2_autofocus_pane_g

0x9345,	// (0x000532ab) camera2_autofocus_pane_cp_g2

0x934d,	// (0x000532b3) camera2_autofocus_pane_cp_g3

0x9355,	// (0x000532bb) camera2_autofocus_pane_cp_g4

0x935d,	// (0x000532c3) camera2_autofocus_pane_cp_g5

0x0004,

0xf786,	// (0x000596ec) camera2_autofocus_pane_cp_g

0x9904,	// (0x0005386a) popup_dialer_spcha_window

0x2d35,	// (0x0004cc9b) bg_popup_sub_pane_cp07

0xec3e,	// (0x00058ba4) list_spcha_pane

0xec46,	// (0x00058bac) list_single_spcha_pane_ParamLimits

0xec46,	// (0x00058bac) list_single_spcha_pane

0x2d35,	// (0x0004cc9b) list_highlight_pane_cp06

0xec57,	// (0x00058bbd) list_single_spcha_pane_t1

0xde46,	// (0x00057dac) popup_call2_audio_out_window_g4_ParamLimits

0xde46,	// (0x00057dac) popup_call2_audio_out_window_g4

0x5c4e,	// (0x0004fbb4) main_imed2_pane

0x8888,	// (0x000527ee) popup_imed_adjust2_window

0x8899,	// (0x000527ff) popup_imed_trans_window_ParamLimits

0x8899,	// (0x000527ff) popup_imed_trans_window

0xe68d,	// (0x000585f3) popup_blid_sat_info2_window_t1

0xe69b,	// (0x00058601) popup_blid_sat_info2_window_t2

0x000a,

0xf6b5,	// (0x0005961b) popup_blid_sat_info2_window_t

0x9bfa,	// (0x00053b60) aid_size_cell_colour_35

0x9c14,	// (0x00053b7a) aid_size_cell_colour_112

0x9c2b,	// (0x00053b91) aid_size_cell_effect

0x4a02,	// (0x0004e968) bg_tb_trans_pane_cp02

0x4a10,	// (0x0004e976) heading_imed_pane

0x9c45,	// (0x00053bab) listscroll_imed_pane

0xec65,	// (0x00058bcb) heading_imed_pane_g1

0xec6d,	// (0x00058bd3) heading_imed_pane_t1

0xec7b,	// (0x00058be1) grid_imed_colour_35_pane_ParamLimits

0xec7b,	// (0x00058be1) grid_imed_colour_35_pane

0x9c51,	// (0x00053bb7) grid_imed_effect_pane

0xec8e,	// (0x00058bf4) list_imed_aspect_pane

0x9c5d,	// (0x00053bc3) scroll_pane_cp027_ParamLimits

0x9c5d,	// (0x00053bc3) scroll_pane_cp027

0x9c69,	// (0x00053bcf) cell_imed_effect_pane_ParamLimits

0x9c69,	// (0x00053bcf) cell_imed_effect_pane

0xec96,	// (0x00058bfc) cell_imed_colour_pane_ParamLimits

0xec96,	// (0x00058bfc) cell_imed_colour_pane

0xecd0,	// (0x00058c36) cell_imed_colour_pane_g1_ParamLimits

0xecd0,	// (0x00058c36) cell_imed_colour_pane_g1

0xece1,	// (0x00058c47) hgihlgiht_grid_pane_cp016_ParamLimits

0xece1,	// (0x00058c47) hgihlgiht_grid_pane_cp016

0x9c7f,	// (0x00053be5) cell_imed_effect_pane_g1

0x9c87,	// (0x00053bed) grid_highlight_pane_cp017

0xecf1,	// (0x00058c57) list_imed_single_pane_ParamLimits

0xecf1,	// (0x00058c57) list_imed_single_pane

0x2d35,	// (0x0004cc9b) list_highlight_pane_cp07

0xed04,	// (0x00058c6a) list_imed_aspect_pane_comp1_t1

0xe449,	// (0x000583af) bg_tb_trans_pane_cp05

0xed24,	// (0x00058c8a) popup_imed_adjust2_window_g1

0xed4b,	// (0x00058cb1) popup_imed_adjust2_window_t1

0xed63,	// (0x00058cc9) slider_imed_adjust_pane

0xed77,	// (0x00058cdd) slider_imed_adjust_pane_g1

0xed87,	// (0x00058ced) slider_imed_adjust_pane_g2

0xed97,	// (0x00058cfd) slider_imed_adjust_pane_g3

0xeda8,	// (0x00058d0e) slider_imed_adjust_pane_g4

0x0003,

0xf7f9,	// (0x0005975f) slider_imed_adjust_pane_g

0x9c90,	// (0x00053bf6) aid_size_cell_clipart2

0x9c9c,	// (0x00053c02) grid_imed_clipart_pane

0xedb9,	// (0x00058d1f) scroll_pane_cp031

0x9ca6,	// (0x00053c0c) cell_imed_clipart_pane_ParamLimits

0x9ca6,	// (0x00053c0c) cell_imed_clipart_pane

0x9cba,	// (0x00053c20) cell_imed_clipart_pane_g1

0x2d35,	// (0x0004cc9b) grid_highlight_pane_cp014

0x9a33,	// (0x00053999) main_clock2_pane_g1_ParamLimits

0x9a33,	// (0x00053999) main_clock2_pane_g1

0x9afb,	// (0x00053a61) aid_call2_pane_cp10

0x9b0d,	// (0x00053a73) aid_call_pane_cp10

0x3fc7,	// (0x0004df2d) popup_clock_analogue_window_cp10_g1

0x3fc7,	// (0x0004df2d) popup_clock_analogue_window_cp10_g2

0x9b1f,	// (0x00053a85) popup_clock_analogue_window_cp10_g3

0x9b1f,	// (0x00053a85) popup_clock_analogue_window_cp10_g4

0x3fc7,	// (0x0004df2d) popup_clock_analogue_window_cp10_g5

0x0004,

0xf7e7,	// (0x0005974d) popup_clock_analogue_window_cp10_g

0x9b31,	// (0x00053a97) popup_clock_analogue_window_cp10_t1

0x9b62,	// (0x00053ac8) clock_digital_number_pane_cp10_ParamLimits

0x9b62,	// (0x00053ac8) clock_digital_number_pane_cp10

0x9b7a,	// (0x00053ae0) clock_digital_number_pane_cp11_ParamLimits

0x9b7a,	// (0x00053ae0) clock_digital_number_pane_cp11

0x9b92,	// (0x00053af8) clock_digital_number_pane_cp12_ParamLimits

0x9b92,	// (0x00053af8) clock_digital_number_pane_cp12

0x9baa,	// (0x00053b10) clock_digital_number_pane_cp13_ParamLimits

0x9baa,	// (0x00053b10) clock_digital_number_pane_cp13

0x9bc2,	// (0x00053b28) clock_digital_separator_pane_cp10_ParamLimits

0x9bc2,	// (0x00053b28) clock_digital_separator_pane_cp10

0x9bda,	// (0x00053b40) popup_clock_digital_window_cp02_t1_ParamLimits

0x9bda,	// (0x00053b40) popup_clock_digital_window_cp02_t1

0x34c2,	// (0x0004d428) clock_digital_number_pane_cp10_g1

0x34c2,	// (0x0004d428) clock_digital_number_pane_cp10_g2

0x0001,

0xf802,	// (0x00059768) clock_digital_number_pane_cp10_g

0x34c2,	// (0x0004d428) clock_digital_separator_pane_cp10_g1

0x34c2,	// (0x0004d428) clock_digital_separator_pane_g2_cp10

0x4150,	// (0x0004e0b6) navi_pane_vded_g4

0x4159,	// (0x0004e0bf) navi_pane_vded_g5

0x4162,	// (0x0004e0c8) navi_pane_vded_t1

0x5c4e,	// (0x0004fbb4) main_vded_pane

0x9cc3,	// (0x00053c29) main_vded_pane_g1

0x9ccb,	// (0x00053c31) main_vded_pane_g2

0x9cd3,	// (0x00053c39) main_vded_pane_g3

0x0002,

0xf807,	// (0x0005976d) main_vded_pane_g

0x9cdb,	// (0x00053c41) main_vded_pane_t1

0x9ce9,	// (0x00053c4f) main_vded_pane_t2

0x0001,

0xf80e,	// (0x00059774) main_vded_pane_t

0x9cf7,	// (0x00053c5d) vded_slider_pane

0x9cff,	// (0x00053c65) vded_video_pane

0xedc1,	// (0x00058d27) vded_video_pane_g1

0x9d07,	// (0x00053c6d) vded_video_pane_g2

0xe849,	// (0x000587af) vded_video_pane_g3

0x0002,

0xf813,	// (0x00059779) vded_video_pane_g

0xedcb,	// (0x00058d31) vded_slider_pane_g1

0xe5a4,	// (0x0005850a) vded_slider_pane_g2

0xedd4,	// (0x00058d3a) vded_slider_pane_g3

0xeddd,	// (0x00058d43) vded_slider_pane_g4

0xede6,	// (0x00058d4c) vded_slider_pane_g5

0x0004,

0xf81a,	// (0x00059780) vded_slider_pane_g

0x9816,	// (0x0005377c) mup3_rocker_pane_ParamLimits

0x9816,	// (0x0005377c) mup3_rocker_pane

0x9d10,	// (0x00053c76) mup3_control_keys_pane_g1

0x9d18,	// (0x00053c7e) mup3_control_keys_pane_g2

0x9d20,	// (0x00053c86) mup3_control_keys_pane_g3

0x9d28,	// (0x00053c8e) mup3_control_keys_pane_g4

0x0003,

0xf825,	// (0x0005978b) mup3_control_keys_pane_g

0x5c06,	// (0x0004fb6c) popup_toolbar2_fixed_window_cp01_ParamLimits

0x5c06,	// (0x0004fb6c) popup_toolbar2_fixed_window_cp01

0x982e,	// (0x00053794) popup_toolbar2_fixed_window_cp02_ParamLimits

0x982e,	// (0x00053794) popup_toolbar2_fixed_window_cp02

0x48a2,	// (0x0004e808) popup_call2_audio_second_window_t4_ParamLimits

0x48a2,	// (0x0004e808) popup_call2_audio_second_window_t4

0xdcb3,	// (0x00057c19) popup_call2_audio_first_window_t6_ParamLimits

0xdcb3,	// (0x00057c19) popup_call2_audio_first_window_t6

0xdf49,	// (0x00057eaf) popup_call2_audio_out_window_t6_ParamLimits

0xdf49,	// (0x00057eaf) popup_call2_audio_out_window_t6

0x5c4e,	// (0x0004fbb4) main_vitu_pane

0x9d38,	// (0x00053c9e) aid_size_cell_itu_ParamLimits

0x9d38,	// (0x00053c9e) aid_size_cell_itu

0x2cec,	// (0x0004cc52) bg_popup_window_pane_cp08_ParamLimits

0x2cec,	// (0x0004cc52) bg_popup_window_pane_cp08

0x9d46,	// (0x00053cac) field_vitu_entry_pane_ParamLimits

0x9d46,	// (0x00053cac) field_vitu_entry_pane

0x9d53,	// (0x00053cb9) grid_vitu_function_pane_ParamLimits

0x9d53,	// (0x00053cb9) grid_vitu_function_pane

0x9d5f,	// (0x00053cc5) grid_vitu_itu_pane_ParamLimits

0x9d5f,	// (0x00053cc5) grid_vitu_itu_pane

0x9d6b,	// (0x00053cd1) cell_vitu_itu_pane_ParamLimits

0x9d6b,	// (0x00053cd1) cell_vitu_itu_pane

0x9d80,	// (0x00053ce6) cell_vitu_function_pane_ParamLimits

0x9d80,	// (0x00053ce6) cell_vitu_function_pane

0x4a02,	// (0x0004e968) bg_popup_sub_pane_cp08_ParamLimits

0x4a02,	// (0x0004e968) bg_popup_sub_pane_cp08

0x9d92,	// (0x00053cf8) field_vitu_entry_pane_t1_ParamLimits

0x9d92,	// (0x00053cf8) field_vitu_entry_pane_t1

0xee07,	// (0x00058d6d) field_vitu_entry_pane_t2_ParamLimits

0xee07,	// (0x00058d6d) field_vitu_entry_pane_t2

0x0001,

0xf833,	// (0x00059799) field_vitu_entry_pane_t_ParamLimits

0xf833,	// (0x00059799) field_vitu_entry_pane_t

0xee24,	// (0x00058d8a) bg_button_pane_cp05_ParamLimits

0xee24,	// (0x00058d8a) bg_button_pane_cp05

0x9dab,	// (0x00053d11) cell_vitu_itu_pane_g1

0x9dc3,	// (0x00053d29) cell_vitu_itu_pane_t1_ParamLimits

0x9dc3,	// (0x00053d29) cell_vitu_itu_pane_t1

0x9dd5,	// (0x00053d3b) cell_vitu_itu_pane_t2_ParamLimits

0x9dd5,	// (0x00053d3b) cell_vitu_itu_pane_t2

0x0002,

0xf838,	// (0x0005979e) cell_vitu_itu_pane_t_ParamLimits

0xf838,	// (0x0005979e) cell_vitu_itu_pane_t

0xee32,	// (0x00058d98) bg_button_pane_cp07

0x9e0a,	// (0x00053d70) cell_vitu_function_pane_g1

0x5e4b,	// (0x0004fdb1) main_calc_pane_g1

0x59eb,	// (0x0004f951) aid_visual_content_pane

0x5c4e,	// (0x0004fbb4) main_vradio_pane

0x9e13,	// (0x00053d79) main_vradio_pane_g1_ParamLimits

0x9e13,	// (0x00053d79) main_vradio_pane_g1

0xee3c,	// (0x00058da2) main_vradio_pane_g2_ParamLimits

0xee3c,	// (0x00058da2) main_vradio_pane_g2

0x0001,

0xf83f,	// (0x000597a5) main_vradio_pane_g_ParamLimits

0xf83f,	// (0x000597a5) main_vradio_pane_g

0x9e21,	// (0x00053d87) main_vradio_pane_t1_ParamLimits

0x9e21,	// (0x00053d87) main_vradio_pane_t1

0x9e33,	// (0x00053d99) main_vradio_pane_t2_ParamLimits

0x9e33,	// (0x00053d99) main_vradio_pane_t2

0xee49,	// (0x00058daf) main_vradio_pane_t3_ParamLimits

0xee49,	// (0x00058daf) main_vradio_pane_t3

0x0002,

0xf844,	// (0x000597aa) main_vradio_pane_t_ParamLimits

0xf844,	// (0x000597aa) main_vradio_pane_t

0x9e45,	// (0x00053dab) vradio_rocker_control_pane_ParamLimits

0x9e45,	// (0x00053dab) vradio_rocker_control_pane

0x9e51,	// (0x00053db7) vradio_station_info_pane_ParamLimits

0x9e51,	// (0x00053db7) vradio_station_info_pane

0xee5b,	// (0x00058dc1) vradio_frequency_info_pane_ParamLimits

0xee5b,	// (0x00058dc1) vradio_frequency_info_pane

0xe849,	// (0x000587af) vradio_station_info_pane_g1

0xee6a,	// (0x00058dd0) vradio_station_info_pane_t1_ParamLimits

0xee6a,	// (0x00058dd0) vradio_station_info_pane_t1

0xee8c,	// (0x00058df2) vradio_station_info_pane_t2_ParamLimits

0xee8c,	// (0x00058df2) vradio_station_info_pane_t2

0x0001,

0xf84b,	// (0x000597b1) vradio_station_info_pane_t_ParamLimits

0xf84b,	// (0x000597b1) vradio_station_info_pane_t

0xee9e,	// (0x00058e04) vradio_tuning_pane

0xeea6,	// (0x00058e0c) vradio_rocker_control_pane_g1

0xeeae,	// (0x00058e14) vradio_rocker_control_pane_g2

0xeeb6,	// (0x00058e1c) vradio_rocker_control_pane_g3

0xeebe,	// (0x00058e24) vradio_rocker_control_pane_g4

0xeec6,	// (0x00058e2c) vradio_rocker_control_pane_g5

0x0004,

0xf850,	// (0x000597b6) vradio_rocker_control_pane_g

0x9e5e,	// (0x00053dc4) vradio_frequency_info_pane_g1

0xeece,	// (0x00058e34) vradio_frequency_info_pane_t1_ParamLimits

0xeece,	// (0x00058e34) vradio_frequency_info_pane_t1

0x9e66,	// (0x00053dcc) vradio_tuning_pane_g1

0x9e6f,	// (0x00053dd5) vradio_tuning_pane_t1

0x5a28,	// (0x0004f98e) area_side_right_pane_ParamLimits

0x5a28,	// (0x0004f98e) area_side_right_pane

0xe404,	// (0x0005836a) status_small_pane_g1

0xe40c,	// (0x00058372) status_small_pane_g2

0xe415,	// (0x0005837b) status_small_pane_g3

0xe41e,	// (0x00058384) status_small_pane_g4

0x0003,

0xf60b,	// (0x00059571) status_small_pane_g

0xe427,	// (0x0005838d) status_small_pane_t1

0x5c4e,	// (0x0004fbb4) main_video3_pane

0xeee2,	// (0x00058e48) cams_zoom_vslider_pane

0xeeea,	// (0x00058e50) image3_wide_pane_ParamLimits

0xeeea,	// (0x00058e50) image3_wide_pane

0xef04,	// (0x00058e6a) image3_wide_small_pane

0xef0e,	// (0x00058e74) main_video3_pane_g1_ParamLimits

0xef0e,	// (0x00058e74) main_video3_pane_g1

0xef2a,	// (0x00058e90) main_video3_pane_g2_ParamLimits

0xef2a,	// (0x00058e90) main_video3_pane_g2

0x0001,

0xf85b,	// (0x000597c1) main_video3_pane_g_ParamLimits

0xf85b,	// (0x000597c1) main_video3_pane_g

0xef46,	// (0x00058eac) main_video3_pane_t1_ParamLimits

0xef46,	// (0x00058eac) main_video3_pane_t1

0xef71,	// (0x00058ed7) main_video3_pane_t2_ParamLimits

0xef71,	// (0x00058ed7) main_video3_pane_t2

0xef9c,	// (0x00058f02) main_video3_pane_t3_ParamLimits

0xef9c,	// (0x00058f02) main_video3_pane_t3

0x0002,

0xf860,	// (0x000597c6) main_video3_pane_t_ParamLimits

0xf860,	// (0x000597c6) main_video3_pane_t

0xefc7,	// (0x00058f2d) cams_zoom_vslider_pane_g1

0xefd0,	// (0x00058f36) cams_zoom_vslider_pane_g2

0x0001,

0xf867,	// (0x000597cd) cams_zoom_vslider_pane_g

0xefd8,	// (0x00058f3e) small_slider_vertical_pane

0xe849,	// (0x000587af) small_slider_vertical_pane_g1

0xe849,	// (0x000587af) small_slider_vertical_pane_g2

0xefe0,	// (0x00058f46) small_slider_vertical_pane_g3

0x0002,

0xf86c,	// (0x000597d2) small_slider_vertical_pane_g

0x5c4e,	// (0x0004fbb4) main_hwr_training_pane

0xefe9,	// (0x00058f4f) hwr_training_instruct_pane_ParamLimits

0xefe9,	// (0x00058f4f) hwr_training_instruct_pane

0x9e7e,	// (0x00053de4) hwr_training_navi_pane_ParamLimits

0x9e7e,	// (0x00053de4) hwr_training_navi_pane

0x9e92,	// (0x00053df8) hwr_training_write_pane_ParamLimits

0x9e92,	// (0x00053df8) hwr_training_write_pane

0x2d35,	// (0x0004cc9b) bg_frame_shadow_pane

0xf018,	// (0x00058f7e) hwr_training_write_pane_g1

0xf020,	// (0x00058f86) hwr_training_write_pane_g2

0xf028,	// (0x00058f8e) hwr_training_write_pane_g3

0xf030,	// (0x00058f96) hwr_training_write_pane_g4

0xf038,	// (0x00058f9e) hwr_training_write_pane_g5

0xf040,	// (0x00058fa6) hwr_training_write_pane_g6

0xf048,	// (0x00058fae) hwr_training_write_pane_g7

0x0006,

0xf873,	// (0x000597d9) hwr_training_write_pane_g

0x9ec0,	// (0x00053e26) hwr_training_navi_pane_g1_ParamLimits

0x9ec0,	// (0x00053e26) hwr_training_navi_pane_g1

0x9ed2,	// (0x00053e38) hwr_training_navi_pane_g2_ParamLimits

0x9ed2,	// (0x00053e38) hwr_training_navi_pane_g2

0x9ee4,	// (0x00053e4a) hwr_training_navi_pane_g3_ParamLimits

0x9ee4,	// (0x00053e4a) hwr_training_navi_pane_g3

0x9ef4,	// (0x00053e5a) hwr_training_navi_pane_g4_ParamLimits

0x9ef4,	// (0x00053e5a) hwr_training_navi_pane_g4

0x0004,

0xf882,	// (0x000597e8) hwr_training_navi_pane_g_ParamLimits

0xf882,	// (0x000597e8) hwr_training_navi_pane_g

0x9f0e,	// (0x00053e74) hwr_training_navi_pane_t1

0x9f1c,	// (0x00053e82) list_single_hwr_training_instruct_pane_ParamLimits

0x9f1c,	// (0x00053e82) list_single_hwr_training_instruct_pane

0xf050,	// (0x00058fb6) list_single_hwr_training_instruct_pane_t1

0xe789,	// (0x000586ef) bg_frame_shadow_pane_g1

0xf05f,	// (0x00058fc5) bg_frame_shadow_pane_g2

0xf067,	// (0x00058fcd) bg_frame_shadow_pane_g3

0xf06f,	// (0x00058fd5) bg_frame_shadow_pane_g4

0xf077,	// (0x00058fdd) bg_frame_shadow_pane_g5

0xf07f,	// (0x00058fe5) bg_frame_shadow_pane_g6

0xf087,	// (0x00058fed) bg_frame_shadow_pane_g7

0x3666,	// (0x0004d5cc) bg_frame_shadow_pane_g8

0x0007,

0xf88d,	// (0x000597f3) bg_frame_shadow_pane_g

0x5c4e,	// (0x0004fbb4) main_video_tele_dialer_pane

0x9f33,	// (0x00053e99) aid_size_cell_video_keypad_ParamLimits

0x9f33,	// (0x00053e99) aid_size_cell_video_keypad

0x9f43,	// (0x00053ea9) grid_video_dialer_keypad_pane_ParamLimits

0x9f43,	// (0x00053ea9) grid_video_dialer_keypad_pane

0x9f73,	// (0x00053ed9) video_down_pane_cp_ParamLimits

0x9f73,	// (0x00053ed9) video_down_pane_cp

0x9f9b,	// (0x00053f01) cell_video_dialer_keypad_pane_ParamLimits

0x9f9b,	// (0x00053f01) cell_video_dialer_keypad_pane

0xf08f,	// (0x00058ff5) bg_button_pane_cp08_ParamLimits

0xf08f,	// (0x00058ff5) bg_button_pane_cp08

0x9fb0,	// (0x00053f16) cell_video_dialer_keypad_pane_g1_ParamLimits

0x9fb0,	// (0x00053f16) cell_video_dialer_keypad_pane_g1

0x980a,	// (0x00053770) mup3_rocker2_pane_ParamLimits

0x980a,	// (0x00053770) mup3_rocker2_pane

0xe849,	// (0x000587af) mup3_rocker2_pane_g1

0x880a,	// (0x00052770) main_dialer2_pane

0x5c4e,	// (0x0004fbb4) main_mp4_pane

0x9ff3,	// (0x00053f59) main_mp4_pane_g1_ParamLimits

0x9ff3,	// (0x00053f59) main_mp4_pane_g1

0xa001,	// (0x00053f67) main_mp4_pane_g2_ParamLimits

0xa001,	// (0x00053f67) main_mp4_pane_g2

0xa00f,	// (0x00053f75) main_mp4_pane_g3_ParamLimits

0xa00f,	// (0x00053f75) main_mp4_pane_g3

0xa044,	// (0x00053faa) main_mp4_pane_g4_ParamLimits

0xa044,	// (0x00053faa) main_mp4_pane_g4

0xa06c,	// (0x00053fd2) main_mp4_pane_g5_ParamLimits

0xa06c,	// (0x00053fd2) main_mp4_pane_g5

0x0005,

0xf8ad,	// (0x00059813) main_mp4_pane_g_ParamLimits

0xf8ad,	// (0x00059813) main_mp4_pane_g

0xa0bc,	// (0x00054022) main_mp4_pane_t1_ParamLimits

0xa0bc,	// (0x00054022) main_mp4_pane_t1

0xa114,	// (0x0005407a) main_mp4_pane_t2_ParamLimits

0xa114,	// (0x0005407a) main_mp4_pane_t2

0x0b58,	// (0x0004aabe) main_mp4_pane_t3_ParamLimits

0x0b58,	// (0x0004aabe) main_mp4_pane_t3

0xa166,	// (0x000540cc) main_mp4_pane_t4_ParamLimits

0xa166,	// (0x000540cc) main_mp4_pane_t4

0x0003,

0xf8ba,	// (0x00059820) main_mp4_pane_t_ParamLimits

0xf8ba,	// (0x00059820) main_mp4_pane_t

0xa1a6,	// (0x0005410c) mp4_progress_pane_ParamLimits

0xa1a6,	// (0x0005410c) mp4_progress_pane

0xa1f0,	// (0x00054156) mp4_rocker_pane_ParamLimits

0xa1f0,	// (0x00054156) mp4_rocker_pane

0x0c28,	// (0x0004ab8e) mp4_progress_pane_t1

0x0c3f,	// (0x0004aba5) mp4_progress_pane_t2

0x0001,

0xf8c3,	// (0x00059829) mp4_progress_pane_t

0x0c56,	// (0x0004abbc) mup_progress_pane_cp04

0x15bc,	// (0x0004b522) mp4_rocker_pane_g1

0xa20e,	// (0x00054174) aid_cell_size_keypad2_ParamLimits

0xa20e,	// (0x00054174) aid_cell_size_keypad2

0xa21e,	// (0x00054184) dialer2_ne_pane_ParamLimits

0xa21e,	// (0x00054184) dialer2_ne_pane

0xa22a,	// (0x00054190) grid_dialer2_keypad_pane_ParamLimits

0xa22a,	// (0x00054190) grid_dialer2_keypad_pane

0x1617,	// (0x0004b57d) bg_popup_call_pane_cp07_ParamLimits

0x1617,	// (0x0004b57d) bg_popup_call_pane_cp07

0xa236,	// (0x0005419c) dialer2_ne_pane_t1_ParamLimits

0xa236,	// (0x0005419c) dialer2_ne_pane_t1

0xa25b,	// (0x000541c1) cell_dialer2_keypad_pane_ParamLimits

0xa25b,	// (0x000541c1) cell_dialer2_keypad_pane

0x0c74,	// (0x0004abda) bg_button_pane_pane_cp04_ParamLimits

0x0c74,	// (0x0004abda) bg_button_pane_pane_cp04

0xa270,	// (0x000541d6) cell_dialer2_keypad_pane_g1_ParamLimits

0xa270,	// (0x000541d6) cell_dialer2_keypad_pane_g1

0x6bb0,	// (0x00050b16) aid_placing_vt_set_content_ParamLimits

0x6bb0,	// (0x00050b16) aid_placing_vt_set_content

0x6bd6,	// (0x00050b3c) aid_placing_vt_set_title_ParamLimits

0x6bd6,	// (0x00050b3c) aid_placing_vt_set_title

0x5c4e,	// (0x0004fbb4) main_image3_pane

0xa300,	// (0x00054266) area_side_right_pane_cp01_ParamLimits

0xa300,	// (0x00054266) area_side_right_pane_cp01

0xa32d,	// (0x00054293) main_image3_pane_g1_ParamLimits

0xa32d,	// (0x00054293) main_image3_pane_g1

0xa33b,	// (0x000542a1) main_image3_pane_g2_ParamLimits

0xa33b,	// (0x000542a1) main_image3_pane_g2

0xa352,	// (0x000542b8) main_image3_pane_g3_ParamLimits

0xa352,	// (0x000542b8) main_image3_pane_g3

0xa369,	// (0x000542cf) main_image3_pane_g4_ParamLimits

0xa369,	// (0x000542cf) main_image3_pane_g4

0x0003,

0xf8d2,	// (0x00059838) main_image3_pane_g_ParamLimits

0xf8d2,	// (0x00059838) main_image3_pane_g

0xa380,	// (0x000542e6) main_image3_pane_t1_ParamLimits

0xa380,	// (0x000542e6) main_image3_pane_t1

0xa3a5,	// (0x0005430b) main_image3_pane_t2_ParamLimits

0xa3a5,	// (0x0005430b) main_image3_pane_t2

0xa3c4,	// (0x0005432a) main_image3_pane_t3_ParamLimits

0xa3c4,	// (0x0005432a) main_image3_pane_t3

0x0003,

0xf8db,	// (0x00059841) main_image3_pane_t_ParamLimits

0xf8db,	// (0x00059841) main_image3_pane_t

0x2cec,	// (0x0004cc52) grid_sctrl_middle_pane_cp01_ParamLimits

0x2cec,	// (0x0004cc52) grid_sctrl_middle_pane_cp01

0xa41f,	// (0x00054385) cell_sctrl_middle_pane_cp01_ParamLimits

0xa41f,	// (0x00054385) cell_sctrl_middle_pane_cp01

0xa430,	// (0x00054396) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0xa430,	// (0x00054396) cell_sctrl_middle_pane_cp01_g1

0x5c4e,	// (0x0004fbb4) main_call4_pane

0xa43d,	// (0x000543a3) aid_size_button_call4_ParamLimits

0xa43d,	// (0x000543a3) aid_size_button_call4

0xa46b,	// (0x000543d1) call4_windows_pane_ParamLimits

0xa46b,	// (0x000543d1) call4_windows_pane

0xa483,	// (0x000543e9) grid_call4_button_pane_ParamLimits

0xa483,	// (0x000543e9) grid_call4_button_pane

0x0cb2,	// (0x0004ac18) call4_windows_conf_pane

0xa49d,	// (0x00054403) popup_call4_audio_first_window_ParamLimits

0xa49d,	// (0x00054403) popup_call4_audio_first_window

0xa4bd,	// (0x00054423) popup_call4_audio_second_window_ParamLimits

0xa4bd,	// (0x00054423) popup_call4_audio_second_window

0x0ce5,	// (0x0004ac4b) popup_call4_audio_wait_window_ParamLimits

0x0ce5,	// (0x0004ac4b) popup_call4_audio_wait_window

0xa4cf,	// (0x00054435) cell_call4_button_pane_ParamLimits

0xa4cf,	// (0x00054435) cell_call4_button_pane

0xa4f2,	// (0x00054458) bg_button_pane_cp09_ParamLimits

0xa4f2,	// (0x00054458) bg_button_pane_cp09

0xa4fe,	// (0x00054464) cell_call4_button_pane_g1_ParamLimits

0xa4fe,	// (0x00054464) cell_call4_button_pane_g1

0xa50b,	// (0x00054471) cell_call4_button_pane_t1_ParamLimits

0xa50b,	// (0x00054471) cell_call4_button_pane_t1

0x0d2b,	// (0x0004ac91) popup_call4_audio_conf_window_ParamLimits

0x0d2b,	// (0x0004ac91) popup_call4_audio_conf_window

0x983b,	// (0x000537a1) mup3_progress_pane_t1_ParamLimits

0x9859,	// (0x000537bf) mup3_progress_pane_t2_ParamLimits

0xeaf3,	// (0x00058a59) mup3_progress_pane_t3_ParamLimits

0xf7af,	// (0x00059715) mup3_progress_pane_t_ParamLimits

0xeb10,	// (0x00058a76) mup_progress_pane_cp03_ParamLimits

0x9d30,	// (0x00053c96) mup3_control_keys_pane_g4_copy1

0xa1d4,	// (0x0005413a) mp4_rocker2_pane_ParamLimits

0xa1d4,	// (0x0005413a) mp4_rocker2_pane

0x0d47,	// (0x0004acad) mp4_rocker2_pane_g1

0x0d3f,	// (0x0004aca5) mp4_rocker2_pane_g2

0xa51d,	// (0x00054483) mp4_rocker2_pane_g3

0xa525,	// (0x0005448b) mp4_rocker2_pane_g4

0xa52d,	// (0x00054493) mp4_rocker2_pane_g5

0x0004,

0xf8e4,	// (0x0005984a) mp4_rocker2_pane_g

0x5c4e,	// (0x0004fbb4) main_camera4_pane

0x5c4e,	// (0x0004fbb4) main_video4_pane

0x9f4f,	// (0x00053eb5) main_video_tele_dialer_pane_t1_ParamLimits

0x9f4f,	// (0x00053eb5) main_video_tele_dialer_pane_t1

0x9f61,	// (0x00053ec7) main_video_tele_dialer_pane_t2_ParamLimits

0x9f61,	// (0x00053ec7) main_video_tele_dialer_pane_t2

0x0001,

0xf89e,	// (0x00059804) main_video_tele_dialer_pane_t_ParamLimits

0xf89e,	// (0x00059804) main_video_tele_dialer_pane_t

0xa54b,	// (0x000544b1) cam4_autofocus_pane_ParamLimits

0xa54b,	// (0x000544b1) cam4_autofocus_pane

0xa561,	// (0x000544c7) cam4_image_uncrop_pane_ParamLimits

0xa561,	// (0x000544c7) cam4_image_uncrop_pane

0xa576,	// (0x000544dc) cam4_indicators_pane_ParamLimits

0xa576,	// (0x000544dc) cam4_indicators_pane

0xa590,	// (0x000544f6) main_camera4_pane_g1_ParamLimits

0xa590,	// (0x000544f6) main_camera4_pane_g1

0xa59c,	// (0x00054502) main_camera4_pane_g2_ParamLimits

0xa59c,	// (0x00054502) main_camera4_pane_g2

0xa59c,	// (0x00054502) main_camera4_pane_g3_ParamLimits

0xa59c,	// (0x00054502) main_camera4_pane_g3

0xa5a8,	// (0x0005450e) main_camera4_pane_g4_ParamLimits

0xa5a8,	// (0x0005450e) main_camera4_pane_g4

0xa5b4,	// (0x0005451a) main_camera4_pane_g5_ParamLimits

0xa5b4,	// (0x0005451a) main_camera4_pane_g5

0x0005,

0xf8ef,	// (0x00059855) main_camera4_pane_g_ParamLimits

0xf8ef,	// (0x00059855) main_camera4_pane_g

0xa5ce,	// (0x00054534) main_camera4_pane_t1_ParamLimits

0xa5ce,	// (0x00054534) main_camera4_pane_t1

0xa616,	// (0x0005457c) bg_tb_trans_pane_cp06

0xa62c,	// (0x00054592) cam4_indicators_pane_g1

0xa63d,	// (0x000545a3) cam4_indicators_pane_g2

0x0002,

0xf90a,	// (0x00059870) cam4_indicators_pane_g

0xa655,	// (0x000545bb) cam4_indicators_pane_t1

0xa67d,	// (0x000545e3) main_video4_pane_g1_ParamLimits

0xa67d,	// (0x000545e3) main_video4_pane_g1

0xa689,	// (0x000545ef) main_video4_pane_g2_ParamLimits

0xa689,	// (0x000545ef) main_video4_pane_g2

0xa695,	// (0x000545fb) main_video4_pane_g3_ParamLimits

0xa695,	// (0x000545fb) main_video4_pane_g3

0xa6a1,	// (0x00054607) main_video4_pane_g4_ParamLimits

0xa6a1,	// (0x00054607) main_video4_pane_g4

0x0004,

0xf911,	// (0x00059877) main_video4_pane_g_ParamLimits

0xf911,	// (0x00059877) main_video4_pane_g

0xa6c1,	// (0x00054627) vid4_indicators_pane_ParamLimits

0xa6c1,	// (0x00054627) vid4_indicators_pane

0xa6de,	// (0x00054644) video4_image_uncrop_cif_pane_ParamLimits

0xa6de,	// (0x00054644) video4_image_uncrop_cif_pane

0xa6eb,	// (0x00054651) video4_image_uncrop_nhd_pane_ParamLimits

0xa6eb,	// (0x00054651) video4_image_uncrop_nhd_pane

0xa561,	// (0x000544c7) video4_image_uncrop_vga_pane_ParamLimits

0xa561,	// (0x000544c7) video4_image_uncrop_vga_pane

0x87fc,	// (0x00052762) bg_tb_trans_pane_cp07

0xa700,	// (0x00054666) vid4_indicators_pane_g1

0xa714,	// (0x0005467a) vid4_indicators_pane_g2

0xa728,	// (0x0005468e) vid4_indicators_pane_g3

0x0004,

0xf91c,	// (0x00059882) vid4_indicators_pane_g

0xa755,	// (0x000546bb) vid4_indicators_pane_t1

0xa76c,	// (0x000546d2) cam4_autofocus_pane_g1

0xa774,	// (0x000546da) cam4_autofocus_pane_g2

0xa77c,	// (0x000546e2) cam4_autofocus_pane_g3

0x0002,

0xf927,	// (0x0005988d) cam4_autofocus_pane_g

0xa784,	// (0x000546ea) cam4_autofocus_pane_g3_copy1

0x9f7f,	// (0x00053ee5) video_down_pane_cp_t1

0x9f8d,	// (0x00053ef3) video_down_pane_cp_t2

0x0001,

0xf8a3,	// (0x00059809) video_down_pane_cp_t

0x5c38,	// (0x0004fb9e) popup_vitu2_window_ParamLimits

0x5c38,	// (0x0004fb9e) popup_vitu2_window

0xa78c,	// (0x000546f2) aid_size_cell2_itu2_ParamLimits

0xa78c,	// (0x000546f2) aid_size_cell2_itu2

0xa7ae,	// (0x00054714) aid_size_cell_itu2_ParamLimits

0xa7ae,	// (0x00054714) aid_size_cell_itu2

0xa7ec,	// (0x00054752) bg_popup_window_pane_cp09_ParamLimits

0xa7ec,	// (0x00054752) bg_popup_window_pane_cp09

0xa7fa,	// (0x00054760) field_vitu2_entry_pane_ParamLimits

0xa7fa,	// (0x00054760) field_vitu2_entry_pane

0xa80e,	// (0x00054774) grid_vitu2_function_pane_ParamLimits

0xa80e,	// (0x00054774) grid_vitu2_function_pane

0xa83c,	// (0x000547a2) grid_vitu2_itu_pane_ParamLimits

0xa83c,	// (0x000547a2) grid_vitu2_itu_pane

0xa894,	// (0x000547fa) cell_vitu2_itu_pane_ParamLimits

0xa894,	// (0x000547fa) cell_vitu2_itu_pane

0xa8ac,	// (0x00054812) cell_vitu2_function_pane_ParamLimits

0xa8ac,	// (0x00054812) cell_vitu2_function_pane

0x0e5a,	// (0x0004adc0) bg_popup_call_pane_cp08_ParamLimits

0x0e5a,	// (0x0004adc0) bg_popup_call_pane_cp08

0x0e71,	// (0x0004add7) field_vitu2_entry_pane_g1

0x0e7d,	// (0x0004ade3) field_vitu2_entry_pane_g2

0x0002,

0xf92e,	// (0x00059894) field_vitu2_entry_pane_g

0xa8eb,	// (0x00054851) field_vitu2_entry_pane_t1_ParamLimits

0xa8eb,	// (0x00054851) field_vitu2_entry_pane_t1

0x0e97,	// (0x0004adfd) field_vitu2_entry_pane_t2_ParamLimits

0x0e97,	// (0x0004adfd) field_vitu2_entry_pane_t2

0x0001,

0xf935,	// (0x0005989b) field_vitu2_entry_pane_t_ParamLimits

0xf935,	// (0x0005989b) field_vitu2_entry_pane_t

0xa919,	// (0x0005487f) bg_button_pane_cp010_ParamLimits

0xa919,	// (0x0005487f) bg_button_pane_cp010

0xa927,	// (0x0005488d) cell_vitu2_itu_pane_g1

0xa947,	// (0x000548ad) cell_vitu2_itu_pane_t1_ParamLimits

0xa947,	// (0x000548ad) cell_vitu2_itu_pane_t1

0x58d7,	// (0x0004f83d) cell_vitu2_itu_pane_t2_ParamLimits

0x58d7,	// (0x0004f83d) cell_vitu2_itu_pane_t2

0x0002,

0xf93f,	// (0x000598a5) cell_vitu2_itu_pane_t_ParamLimits

0xf93f,	// (0x000598a5) cell_vitu2_itu_pane_t

0x87fc,	// (0x00052762) bg_button_pane_cp011

0xa993,	// (0x000548f9) cell_vitu2_function_pane_g1

0x5c4e,	// (0x0004fbb4) main_myfav_hc_pane

0xa404,	// (0x0005436a) popup_image3_note_pane_ParamLimits

0xa404,	// (0x0005436a) popup_image3_note_pane

0xa410,	// (0x00054376) popup_image3_tool_bar_pane_ParamLimits

0xa410,	// (0x00054376) popup_image3_tool_bar_pane

0x594d,	// (0x0004f8b3) cell_vitu2_itu_pane_t3_ParamLimits

0x594d,	// (0x0004f8b3) cell_vitu2_itu_pane_t3

0x2d35,	// (0x0004cc9b) bg_popup_trans_pane

0x0ebc,	// (0x0004ae22) grid_image3_tool_bar_pane

0x0ec6,	// (0x0004ae2c) bg_popup_trans_pane_g1

0x39b2,	// (0x0004d918) bg_popup_trans_pane_g2

0x0ece,	// (0x0004ae34) bg_popup_trans_pane_g3

0x0ed6,	// (0x0004ae3c) bg_popup_trans_pane_g4

0x0ede,	// (0x0004ae44) bg_popup_trans_pane_g5

0x0ee6,	// (0x0004ae4c) bg_popup_trans_pane_g6

0x0eee,	// (0x0004ae54) bg_popup_trans_pane_g7

0x0ef6,	// (0x0004ae5c) bg_popup_trans_pane_g8

0x3992,	// (0x0004d8f8) bg_popup_trans_pane_g9

0x0008,

0xf946,	// (0x000598ac) bg_popup_trans_pane_g

0x0efe,	// (0x0004ae64) cell_image3_tool_bar_pane_ParamLimits

0x0efe,	// (0x0004ae64) cell_image3_tool_bar_pane

0xe849,	// (0x000587af) cell_image3_tool_bar_pane_g1

0x2d35,	// (0x0004cc9b) bg_popup_trans_pane_cp1

0x0f12,	// (0x0004ae78) popup_image3_note_pane_t1

0x0f20,	// (0x0004ae86) popup_image3_note_pane_t2

0x0f2e,	// (0x0004ae94) popup_image3_note_pane_t3

0x0002,

0xf959,	// (0x000598bf) popup_image3_note_pane_t

0x0f3c,	// (0x0004aea2) popup_image3_note_pane_t3_copy1

0xa9a7,	// (0x0005490d) bg_myfav_hc_instruction_pane_ParamLimits

0xa9a7,	// (0x0005490d) bg_myfav_hc_instruction_pane

0xa9b9,	// (0x0005491f) cell_myfav_contact_pane_ParamLimits

0xa9b9,	// (0x0005491f) cell_myfav_contact_pane

0xa9d3,	// (0x00054939) cell_myfav_contact_pane_cp1_ParamLimits

0xa9d3,	// (0x00054939) cell_myfav_contact_pane_cp1

0xa9e9,	// (0x0005494f) cell_myfav_contact_pane_cp2_ParamLimits

0xa9e9,	// (0x0005494f) cell_myfav_contact_pane_cp2

0xa9ff,	// (0x00054965) cell_myfav_contact_pane_cp3_ParamLimits

0xa9ff,	// (0x00054965) cell_myfav_contact_pane_cp3

0xaa14,	// (0x0005497a) cell_myfav_contact_pane_cp4_ParamLimits

0xaa14,	// (0x0005497a) cell_myfav_contact_pane_cp4

0xaa28,	// (0x0005498e) cell_myfav_contact_pane_cp5_ParamLimits

0xaa28,	// (0x0005498e) cell_myfav_contact_pane_cp5

0xaa3c,	// (0x000549a2) cell_myfav_contact_pane_cp6_ParamLimits

0xaa3c,	// (0x000549a2) cell_myfav_contact_pane_cp6

0xaa50,	// (0x000549b6) cell_myfav_contact_pane_cp7_ParamLimits

0xaa50,	// (0x000549b6) cell_myfav_contact_pane_cp7

0x0f4a,	// (0x0004aeb0) listscroll_gen_pane_cp05

0xaa68,	// (0x000549ce) main_myfav_hc_pane_g1_ParamLimits

0xaa68,	// (0x000549ce) main_myfav_hc_pane_g1

0xaa7e,	// (0x000549e4) main_myfav_hc_pane_g2_ParamLimits

0xaa7e,	// (0x000549e4) main_myfav_hc_pane_g2

0x0002,

0xf960,	// (0x000598c6) main_myfav_hc_pane_g_ParamLimits

0xf960,	// (0x000598c6) main_myfav_hc_pane_g

0xaaa8,	// (0x00054a0e) main_myfav_hc_pane_t1_ParamLimits

0xaaa8,	// (0x00054a0e) main_myfav_hc_pane_t1

0x0f53,	// (0x0004aeb9) main_myfav_hc_pane_t2_ParamLimits

0x0f53,	// (0x0004aeb9) main_myfav_hc_pane_t2

0x0f65,	// (0x0004aecb) main_myfav_hc_pane_t3_ParamLimits

0x0f65,	// (0x0004aecb) main_myfav_hc_pane_t3

0xaabd,	// (0x00054a23) main_myfav_hc_pane_t4_ParamLimits

0xaabd,	// (0x00054a23) main_myfav_hc_pane_t4

0x0004,

0xf967,	// (0x000598cd) main_myfav_hc_pane_t_ParamLimits

0xf967,	// (0x000598cd) main_myfav_hc_pane_t

0xe849,	// (0x000587af) bg_myfav_hc_instruction_pane_g1

0x0f77,	// (0x0004aedd) cell_myfav_contact_pane_g1_ParamLimits

0x0f77,	// (0x0004aedd) cell_myfav_contact_pane_g1

0x0f77,	// (0x0004aedd) cell_myfav_contact_pane_g2_ParamLimits

0x0f77,	// (0x0004aedd) cell_myfav_contact_pane_g2

0x0f83,	// (0x0004aee9) cell_myfav_contact_pane_g3_ParamLimits

0x0f83,	// (0x0004aee9) cell_myfav_contact_pane_g3

0xeadd,	// (0x00058a43) cell_myfav_contact_pane_g4_ParamLimits

0xeadd,	// (0x00058a43) cell_myfav_contact_pane_g4

0x0f90,	// (0x0004aef6) cell_myfav_contact_pane_g5_ParamLimits

0x0f90,	// (0x0004aef6) cell_myfav_contact_pane_g5

0x0004,

0xf972,	// (0x000598d8) cell_myfav_contact_pane_g_ParamLimits

0xf972,	// (0x000598d8) cell_myfav_contact_pane_g

0xaa94,	// (0x000549fa) main_myfav_hc_pane_g3_ParamLimits

0xaa94,	// (0x000549fa) main_myfav_hc_pane_g3

0x5b49,	// (0x0004faaf) popup_adpt_find_window

0xaae1,	// (0x00054a47) afind_page_pane_ParamLimits

0xaae1,	// (0x00054a47) afind_page_pane

0xaaee,	// (0x00054a54) aid_size_cell_afind_ParamLimits

0xaaee,	// (0x00054a54) aid_size_cell_afind

0xab08,	// (0x00054a6e) bg_popup_sub_pane_cp09_ParamLimits

0xab08,	// (0x00054a6e) bg_popup_sub_pane_cp09

0xab15,	// (0x00054a7b) find_pane_cp01_ParamLimits

0xab15,	// (0x00054a7b) find_pane_cp01

0x0f9c,	// (0x0004af02) grid_afind_control_pane_ParamLimits

0x0f9c,	// (0x0004af02) grid_afind_control_pane

0xab22,	// (0x00054a88) grid_afind_pane_ParamLimits

0xab22,	// (0x00054a88) grid_afind_pane

0xab3a,	// (0x00054aa0) cell_afind_pane_ParamLimits

0xab3a,	// (0x00054aa0) cell_afind_pane

0xe849,	// (0x000587af) afind_page_pane_g1

0xab70,	// (0x00054ad6) afind_page_pane_g2

0xab79,	// (0x00054adf) afind_page_pane_g3

0x0002,

0xf97d,	// (0x000598e3) afind_page_pane_g

0xab82,	// (0x00054ae8) afind_page_pane_t1

0x0fb0,	// (0x0004af16) cell_afind_grid_control_pane_ParamLimits

0x0fb0,	// (0x0004af16) cell_afind_grid_control_pane

0x0c74,	// (0x0004abda) bg_button_pane_cp69_ParamLimits

0x0c74,	// (0x0004abda) bg_button_pane_cp69

0xaba2,	// (0x00054b08) cell_afind_pane_g1_ParamLimits

0xaba2,	// (0x00054b08) cell_afind_pane_g1

0xabaf,	// (0x00054b15) cell_afind_pane_t1_ParamLimits

0xabaf,	// (0x00054b15) cell_afind_pane_t1

0x379e,	// (0x0004d704) bg_button_pane_cp72

0x0fbf,	// (0x0004af25) cell_afind_grid_control_pane_g1

0x8419,	// (0x0005237f) aid_image_placing_area_ParamLimits

0x8419,	// (0x0005237f) aid_image_placing_area

0xedef,	// (0x00058d55) field_vitu_entry_pane_g1_ParamLimits

0xedef,	// (0x00058d55) field_vitu_entry_pane_g1

0xedfb,	// (0x00058d61) field_vitu_entry_pane_g2_ParamLimits

0xedfb,	// (0x00058d61) field_vitu_entry_pane_g2

0x0001,

0xf82e,	// (0x00059794) field_vitu_entry_pane_g_ParamLimits

0xf82e,	// (0x00059794) field_vitu_entry_pane_g

0x9dab,	// (0x00053d11) cell_vitu_itu_pane_g1_ParamLimits

0x9ded,	// (0x00053d53) cell_vitu_itu_pane_t3_ParamLimits

0x9ded,	// (0x00053d53) cell_vitu_itu_pane_t3

0x0c28,	// (0x0004ab8e) mp4_progress_pane_t1_ParamLimits

0x0c3f,	// (0x0004aba5) mp4_progress_pane_t2_ParamLimits

0xf8c3,	// (0x00059829) mp4_progress_pane_t_ParamLimits

0x0c56,	// (0x0004abbc) mup_progress_pane_cp04_ParamLimits

0xaacf,	// (0x00054a35) main_myfav_hc_pane_t5_ParamLimits

0xaacf,	// (0x00054a35) main_myfav_hc_pane_t5

0x59f3,	// (0x0004f959) aid_zoom_text_primary

0x5b49,	// (0x0004faaf) popup_adpt_find_window_ParamLimits

0x87fc,	// (0x00052762) main_cam_set_pane

0xa584,	// (0x000544ea) cam4_zoom_pane_ParamLimits

0xa584,	// (0x000544ea) cam4_zoom_pane

0xabc1,	// (0x00054b27) main_cam_set_pane_g1_ParamLimits

0xabc1,	// (0x00054b27) main_cam_set_pane_g1

0xabcf,	// (0x00054b35) main_cam_set_pane_g2_ParamLimits

0xabcf,	// (0x00054b35) main_cam_set_pane_g2

0x0001,

0xf984,	// (0x000598ea) main_cam_set_pane_g_ParamLimits

0xf984,	// (0x000598ea) main_cam_set_pane_g

0xabdb,	// (0x00054b41) main_cam_set_pane_t1_ParamLimits

0xabdb,	// (0x00054b41) main_cam_set_pane_t1

0xabf7,	// (0x00054b5d) main_cset_listscroll_pane_ParamLimits

0xabf7,	// (0x00054b5d) main_cset_listscroll_pane

0xac20,	// (0x00054b86) main_cset_slider_pane_ParamLimits

0xac20,	// (0x00054b86) main_cset_slider_pane

0x0fd0,	// (0x0004af36) main_cset_list_pane_ParamLimits

0x0fd0,	// (0x0004af36) main_cset_list_pane

0x0fe0,	// (0x0004af46) scroll_pane_cp028

0xac3f,	// (0x00054ba5) aid_area_touch_slider

0x0fe9,	// (0x0004af4f) cset_slider_pane

0xac5b,	// (0x00054bc1) main_cset_slider_pane_g1

0xac70,	// (0x00054bd6) main_cset_slider_pane_g2

0x0011,

0xf989,	// (0x000598ef) main_cset_slider_pane_g

0x105b,	// (0x0004afc1) main_cset_slider_pane_t1

0xad14,	// (0x00054c7a) main_cset_slider_pane_t2

0xad2e,	// (0x00054c94) main_cset_slider_pane_t3

0xad48,	// (0x00054cae) main_cset_slider_pane_t4

0xad62,	// (0x00054cc8) main_cset_slider_pane_t5

0xad7c,	// (0x00054ce2) main_cset_slider_pane_t6

0xad91,	// (0x00054cf7) main_cset_slider_pane_t7

0x000e,

0xf9ae,	// (0x00059914) main_cset_slider_pane_t

0xae95,	// (0x00054dfb) cset_list_set_pane_ParamLimits

0xae95,	// (0x00054dfb) cset_list_set_pane

0xaea4,	// (0x00054e0a) aid_position_infowindow_above

0xaeac,	// (0x00054e12) aid_position_infowindow_below

0xaeb4,	// (0x00054e1a) cset_list_set_pane_g1_ParamLimits

0xaeb4,	// (0x00054e1a) cset_list_set_pane_g1

0xaec0,	// (0x00054e26) cset_list_set_pane_g3_ParamLimits

0xaec0,	// (0x00054e26) cset_list_set_pane_g3

0x0001,

0xf9cd,	// (0x00059933) cset_list_set_pane_g_ParamLimits

0xf9cd,	// (0x00059933) cset_list_set_pane_g

0xaecf,	// (0x00054e35) cset_list_set_pane_t1_ParamLimits

0xaecf,	// (0x00054e35) cset_list_set_pane_t1

0x4a02,	// (0x0004e968) list_highlight_pane_cp021_ParamLimits

0x4a02,	// (0x0004e968) list_highlight_pane_cp021

0x4289,	// (0x0004e1ef) cset_slider_pane_g1

0x429b,	// (0x0004e201) cset_slider_pane_g2

0x4292,	// (0x0004e1f8) cset_slider_pane_g3

0x0002,

0xf9d2,	// (0x00059938) cset_slider_pane_g

0xaee4,	// (0x00054e4a) aid_area_touch_cam4_zoom

0xaeec,	// (0x00054e52) cam4_zoom_cont_pane

0xaef4,	// (0x00054e5a) cam4_zoom_pane_g1

0xaefc,	// (0x00054e62) cam4_zoom_pane_g2

0xaf04,	// (0x00054e6a) cam4_zoom_pane_g3

0x0002,

0xf9d9,	// (0x0005993f) cam4_zoom_pane_g

0xaf0c,	// (0x00054e72) cam4_zoom_cont_pane_g1

0xaf15,	// (0x00054e7b) cam4_zoom_cont_pane_g2

0xaf1e,	// (0x00054e84) cam4_zoom_cont_pane_g3

0x0002,

0xf9e0,	// (0x00059946) cam4_zoom_cont_pane_g

0xa457,	// (0x000543bd) call4_image_pane_ParamLimits

0xa457,	// (0x000543bd) call4_image_pane

0x0cb2,	// (0x0004ac18) call4_windows_conf_pane_ParamLimits

0x0cc5,	// (0x0004ac2b) popup_call4_audio_in_window_ParamLimits

0x0cc5,	// (0x0004ac2b) popup_call4_audio_in_window

0x2d35,	// (0x0004cc9b) bg_popup_call2_act_pane_cp02

0x0d23,	// (0x0004ac89) call4_list_conf_pane

0xe849,	// (0x000587af) call4_image_pane_g1

0xe849,	// (0x000587af) call4_image_pane_g2

0x0001,

0xf6ef,	// (0x00059655) call4_image_pane_g

0x1116,	// (0x0004b07c) list_single_graphic_popup_conf4_pane_ParamLimits

0x1116,	// (0x0004b07c) list_single_graphic_popup_conf4_pane

0x2d35,	// (0x0004cc9b) list_highlight_pane_cp022

0x1129,	// (0x0004b08f) list_single_graphic_popup_conf4_pane_g1

0x3ed0,	// (0x0004de36) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf9e7,	// (0x0005994d) list_single_graphic_popup_conf4_pane_g

0x1131,	// (0x0004b097) list_single_graphic_popup_conf4_pane_t1

0x6d1a,	// (0x00050c80) popup_vtel_slider_window_ParamLimits

0x6d1a,	// (0x00050c80) popup_vtel_slider_window

0x0c62,	// (0x0004abc8) dialer2_ne_pane_t2_ParamLimits

0x0c62,	// (0x0004abc8) dialer2_ne_pane_t2

0x0001,

0xf8c8,	// (0x0005982e) dialer2_ne_pane_t_ParamLimits

0xf8c8,	// (0x0005982e) dialer2_ne_pane_t

0x4a02,	// (0x0004e968) bg_popup_sub_pane_cp010_ParamLimits

0x4a02,	// (0x0004e968) bg_popup_sub_pane_cp010

0xaf27,	// (0x00054e8d) popup_vtel_slider_window_g1_ParamLimits

0xaf27,	// (0x00054e8d) popup_vtel_slider_window_g1

0xaf33,	// (0x00054e99) popup_vtel_slider_window_g2_ParamLimits

0xaf33,	// (0x00054e99) popup_vtel_slider_window_g2

0x0003,

0xf9ec,	// (0x00059952) popup_vtel_slider_window_g_ParamLimits

0xf9ec,	// (0x00059952) popup_vtel_slider_window_g

0xaf79,	// (0x00054edf) vtel_slider_pane_ParamLimits

0xaf79,	// (0x00054edf) vtel_slider_pane

0xaf88,	// (0x00054eee) vtel_slider_pane_g1_ParamLimits

0xaf88,	// (0x00054eee) vtel_slider_pane_g1

0xaf95,	// (0x00054efb) vtel_slider_pane_g2_ParamLimits

0xaf95,	// (0x00054efb) vtel_slider_pane_g2

0xafa2,	// (0x00054f08) vtel_slider_pane_g3_ParamLimits

0xafa2,	// (0x00054f08) vtel_slider_pane_g3

0xaf88,	// (0x00054eee) vtel_slider_pane_g4_ParamLimits

0xaf88,	// (0x00054eee) vtel_slider_pane_g4

0xafaf,	// (0x00054f15) vtel_slider_pane_g5_ParamLimits

0xafaf,	// (0x00054f15) vtel_slider_pane_g5

0x0004,

0xf9f5,	// (0x0005995b) vtel_slider_pane_g_ParamLimits

0xf9f5,	// (0x0005995b) vtel_slider_pane_g

0x87fc,	// (0x00052762) main_gallery2_pane

0xa7d4,	// (0x0005473a) aid_size_row_itut2_dropdow_list_ParamLimits

0xa7d4,	// (0x0005473a) aid_size_row_itut2_dropdow_list

0xa824,	// (0x0005478a) grid_vitu2_function_top_pane_ParamLimits

0xa824,	// (0x0005478a) grid_vitu2_function_top_pane

0xa860,	// (0x000547c6) popup_vitu2_dropdown_list_window_ParamLimits

0xa860,	// (0x000547c6) popup_vitu2_dropdown_list_window

0xa878,	// (0x000547de) popup_vitu2_match_list_window

0xafca,	// (0x00054f30) cell_vitu2_function_top_pane_ParamLimits

0xafca,	// (0x00054f30) cell_vitu2_function_top_pane

0xafe2,	// (0x00054f48) cell_vitu2_function_top_pane_cp01_ParamLimits

0xafe2,	// (0x00054f48) cell_vitu2_function_top_pane_cp01

0xaffe,	// (0x00054f64) cell_vitu2_function_top_wide_pane_ParamLimits

0xaffe,	// (0x00054f64) cell_vitu2_function_top_wide_pane

0x87fc,	// (0x00052762) bg_button_pane_cp012

0xb01a,	// (0x00054f80) cell_vitu2_function_top_pane_g1

0xb02e,	// (0x00054f94) bg_button_pane_cp013_ParamLimits

0xb02e,	// (0x00054f94) bg_button_pane_cp013

0xb04a,	// (0x00054fb0) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0xb04a,	// (0x00054fb0) cell_vitu2_function_top_wide_pane_g1

0x5c38,	// (0x0004fb9e) bg_popup_sub_pane_cp20

0xb062,	// (0x00054fc8) list_vitu2_match_list_pane

0x0ec6,	// (0x0004ae2c) bg_popup_sub_pane_cp20_g1

0x0ece,	// (0x0004ae34) bg_popup_sub_pane_cp20_g2

0x39b2,	// (0x0004d918) bg_popup_sub_pane_cp20_g3

0x0ed6,	// (0x0004ae3c) bg_popup_sub_pane_cp20_g4

0x3992,	// (0x0004d8f8) bg_popup_sub_pane_cp20_g5

0x1147,	// (0x0004b0ad) bg_popup_sub_pane_cp20_g6

0x0ee6,	// (0x0004ae4c) bg_popup_sub_pane_cp20_g7

0x0eee,	// (0x0004ae54) bg_popup_sub_pane_cp20_g8

0x0ef6,	// (0x0004ae5c) bg_popup_sub_pane_cp20_g9

0x0008,

0xfa00,	// (0x00059966) bg_popup_sub_pane_cp20_g

0xb07a,	// (0x00054fe0) list_vitu2_match_list_item_pane_ParamLimits

0xb07a,	// (0x00054fe0) list_vitu2_match_list_item_pane

0xb08c,	// (0x00054ff2) list_vitu2_match_list_item_pane_t1

0x5c4e,	// (0x0004fbb4) bg_popup_sub_pane_cp21

0xb0e2,	// (0x00055048) grid_vitu2_dropdown_list_pane

0xb0ea,	// (0x00055050) cell_vitu2_dropdown_list_char_pane_ParamLimits

0xb0ea,	// (0x00055050) cell_vitu2_dropdown_list_char_pane

0xb10b,	// (0x00055071) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0xb10b,	// (0x00055071) cell_vitu2_dropdown_list_ctrl_pane

0x1161,	// (0x0004b0c7) cell_vitu2_dropdown_list_char_pane_g1

0x1158,	// (0x0004b0be) cell_vitu2_dropdown_list_char_pane_g2

0x114f,	// (0x0004b0b5) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xfa1d,	// (0x00059983) cell_vitu2_dropdown_list_char_pane_g

0xb137,	// (0x0005509d) cell_vitu2_dropdown_list_char_pane_t1

0xb145,	// (0x000550ab) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0xb145,	// (0x000550ab) cell_vitu2_dropdown_list_ctrl_pane_g1

0xb155,	// (0x000550bb) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0xb155,	// (0x000550bb) cell_vitu2_dropdown_list_ctrl_pane_g2

0xb166,	// (0x000550cc) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0xb166,	// (0x000550cc) cell_vitu2_dropdown_list_ctrl_pane_g3

0xb176,	// (0x000550dc) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0xb176,	// (0x000550dc) cell_vitu2_dropdown_list_ctrl_pane_g4

0xa616,	// (0x0005457c) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0xa616,	// (0x0005457c) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa24,	// (0x0005998a) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa24,	// (0x0005998a) cell_vitu2_dropdown_list_ctrl_pane_g

0xb18f,	// (0x000550f5) aid_size_cell_gallery2_ParamLimits

0xb18f,	// (0x000550f5) aid_size_cell_gallery2

0xb1a9,	// (0x0005510f) grid_gallery2_pane_ParamLimits

0xb1a9,	// (0x0005510f) grid_gallery2_pane

0x9c5d,	// (0x00053bc3) scroll_pane_cp029_ParamLimits

0x9c5d,	// (0x00053bc3) scroll_pane_cp029

0xb1ba,	// (0x00055120) cell_gallery2_pane_ParamLimits

0xb1ba,	// (0x00055120) cell_gallery2_pane

0x116a,	// (0x0004b0d0) cell_gallery2_pane_g2

0xb202,	// (0x00055168) cell_gallery2_pane_g3

0x1172,	// (0x0004b0d8) cell_gallery2_pane_g4

0x117a,	// (0x0004b0e0) cell_gallery2_pane_g5

0x374c,	// (0x0004d6b2) grid_highlight_pane_cp10

0xa878,	// (0x000547de) popup_vitu2_match_list_window_ParamLimits

0xa888,	// (0x000547ee) popup_vitu2_query_window_ParamLimits

0xa888,	// (0x000547ee) popup_vitu2_query_window

0x5c4e,	// (0x0004fbb4) bg_vitu2_candi_button_pane

0x1161,	// (0x0004b0c7) cell_vitu2_dropdown_list_char_pane_g1_copy1

0x1158,	// (0x0004b0be) cell_vitu2_dropdown_list_char_pane_g2_copy1

0x114f,	// (0x0004b0b5) cell_vitu2_dropdown_list_char_pane_g2_copy2

0xb20a,	// (0x00055170) bg_button_pane_cp015

0xb21a,	// (0x00055180) bg_button_pane_cp016

0xb22d,	// (0x00055193) bg_button_pane_cp017

0xe449,	// (0x000583af) bg_popup_sub_pane_cp22

0x1182,	// (0x0004b0e8) popup_vitu2_query_window_g1

0xb270,	// (0x000551d6) popup_vitu2_query_window_g2

0x0002,

0xfa2f,	// (0x00059995) popup_vitu2_query_window_g

0xb28b,	// (0x000551f1) popup_vitu2_query_window_t1_ParamLimits

0xb28b,	// (0x000551f1) popup_vitu2_query_window_t1

0xb2be,	// (0x00055224) popup_vitu2_query_window_t2_ParamLimits

0xb2be,	// (0x00055224) popup_vitu2_query_window_t2

0xb2d0,	// (0x00055236) popup_vitu2_query_window_t3_ParamLimits

0xb2d0,	// (0x00055236) popup_vitu2_query_window_t3

0xb2f8,	// (0x0005525e) popup_vitu2_query_window_t4_ParamLimits

0xb2f8,	// (0x0005525e) popup_vitu2_query_window_t4

0xb315,	// (0x0005527b) popup_vitu2_query_window_t5_ParamLimits

0xb315,	// (0x0005527b) popup_vitu2_query_window_t5

0x0006,

0xfa36,	// (0x0005999c) popup_vitu2_query_window_t_ParamLimits

0xfa36,	// (0x0005999c) popup_vitu2_query_window_t

0x0fc8,	// (0x0004af2e) main_cset_text_pane

0xac3f,	// (0x00054ba5) aid_area_touch_slider_ParamLimits

0x0fe9,	// (0x0004af4f) cset_slider_pane_ParamLimits

0xac5b,	// (0x00054bc1) main_cset_slider_pane_g1_ParamLimits

0xac70,	// (0x00054bd6) main_cset_slider_pane_g2_ParamLimits

0x1013,	// (0x0004af79) main_cset_slider_pane_g3_ParamLimits

0x1013,	// (0x0004af79) main_cset_slider_pane_g3

0xac85,	// (0x00054beb) main_cset_slider_pane_g4_ParamLimits

0xac85,	// (0x00054beb) main_cset_slider_pane_g4

0xac94,	// (0x00054bfa) main_cset_slider_pane_g5_ParamLimits

0xac94,	// (0x00054bfa) main_cset_slider_pane_g5

0xaca0,	// (0x00054c06) main_cset_slider_pane_g6_ParamLimits

0xaca0,	// (0x00054c06) main_cset_slider_pane_g6

0xf989,	// (0x000598ef) main_cset_slider_pane_g_ParamLimits

0x105b,	// (0x0004afc1) main_cset_slider_pane_t1_ParamLimits

0xad14,	// (0x00054c7a) main_cset_slider_pane_t2_ParamLimits

0xad2e,	// (0x00054c94) main_cset_slider_pane_t3_ParamLimits

0xad48,	// (0x00054cae) main_cset_slider_pane_t4_ParamLimits

0xad62,	// (0x00054cc8) main_cset_slider_pane_t5_ParamLimits

0xad7c,	// (0x00054ce2) main_cset_slider_pane_t6_ParamLimits

0xad91,	// (0x00054cf7) main_cset_slider_pane_t7_ParamLimits

0xadbb,	// (0x00054d21) main_cset_slider_pane_t8_ParamLimits

0xadbb,	// (0x00054d21) main_cset_slider_pane_t8

0xade3,	// (0x00054d49) main_cset_slider_pane_t9_ParamLimits

0xade3,	// (0x00054d49) main_cset_slider_pane_t9

0xae0b,	// (0x00054d71) main_cset_slider_pane_t10_ParamLimits

0xae0b,	// (0x00054d71) main_cset_slider_pane_t10

0xae33,	// (0x00054d99) main_cset_slider_pane_t11_ParamLimits

0xae33,	// (0x00054d99) main_cset_slider_pane_t11

0xae5b,	// (0x00054dc1) main_cset_slider_pane_t12_ParamLimits

0xae5b,	// (0x00054dc1) main_cset_slider_pane_t12

0xae78,	// (0x00054dde) main_cset_slider_pane_t13_ParamLimits

0xae78,	// (0x00054dde) main_cset_slider_pane_t13

0xf9ae,	// (0x00059914) main_cset_slider_pane_t_ParamLimits

0x2d35,	// (0x0004cc9b) bg_popup_sub_pane_cp011

0x118e,	// (0x0004b0f4) main_cset_text_pane_g1

0x1196,	// (0x0004b0fc) main_cset_text_pane_t1

0x11a4,	// (0x0004b10a) main_cset_text_pane_t2

0x11b2,	// (0x0004b118) main_cset_text_pane_t3

0x11c0,	// (0x0004b126) main_cset_text_pane_t4

0x11ce,	// (0x0004b134) main_cset_text_pane_t5

0x11dc,	// (0x0004b142) main_cset_text_pane_t6

0x11ea,	// (0x0004b150) main_cset_text_pane_t7

0x0006,

0xfa45,	// (0x000599ab) main_cset_text_pane_t

0x5c4e,	// (0x0004fbb4) main_cam4_burst_pane

0x5c4e,	// (0x0004fbb4) main_cam5_pane

0xab90,	// (0x00054af6) bg_button_pane_cp019

0xab99,	// (0x00054aff) bg_button_pane_cp020

0x101f,	// (0x0004af85) main_cset_slider_pane_g7_ParamLimits

0x101f,	// (0x0004af85) main_cset_slider_pane_g7

0x102b,	// (0x0004af91) main_cset_slider_pane_g8_ParamLimits

0x102b,	// (0x0004af91) main_cset_slider_pane_g8

0xacb4,	// (0x00054c1a) main_cset_slider_pane_g9_ParamLimits

0xacb4,	// (0x00054c1a) main_cset_slider_pane_g9

0xacc0,	// (0x00054c26) main_cset_slider_pane_g10_ParamLimits

0xacc0,	// (0x00054c26) main_cset_slider_pane_g10

0xaccc,	// (0x00054c32) main_cset_slider_pane_g11_ParamLimits

0xaccc,	// (0x00054c32) main_cset_slider_pane_g11

0xacd8,	// (0x00054c3e) main_cset_slider_pane_g12_ParamLimits

0xacd8,	// (0x00054c3e) main_cset_slider_pane_g12

0xace4,	// (0x00054c4a) main_cset_slider_pane_g13_ParamLimits

0xace4,	// (0x00054c4a) main_cset_slider_pane_g13

0xacf0,	// (0x00054c56) main_cset_slider_pane_g14_ParamLimits

0xacf0,	// (0x00054c56) main_cset_slider_pane_g14

0xacfc,	// (0x00054c62) main_cset_slider_pane_g15_ParamLimits

0xacfc,	// (0x00054c62) main_cset_slider_pane_g15

0x1089,	// (0x0004afef) main_cset_slider_pane_t14_ParamLimits

0x1089,	// (0x0004afef) main_cset_slider_pane_t14

0x10c2,	// (0x0004b028) main_cset_slider_pane_t15_ParamLimits

0x10c2,	// (0x0004b028) main_cset_slider_pane_t15

0xb388,	// (0x000552ee) aid_cam4_burst_size_cell_ParamLimits

0xb388,	// (0x000552ee) aid_cam4_burst_size_cell

0xb3a4,	// (0x0005530a) grid_cam4_burst_pane_ParamLimits

0xb3a4,	// (0x0005530a) grid_cam4_burst_pane

0xb3c8,	// (0x0005532e) linegrid_cam4_burst_pane_ParamLimits

0xb3c8,	// (0x0005532e) linegrid_cam4_burst_pane

0xb3e6,	// (0x0005534c) scroll_pane_cp30_ParamLimits

0xb3e6,	// (0x0005534c) scroll_pane_cp30

0xb3f2,	// (0x00055358) cell_cam4_burst_pane_ParamLimits

0xb3f2,	// (0x00055358) cell_cam4_burst_pane

0x1204,	// (0x0004b16a) linegrid_cam4_burst_pane_g1_ParamLimits

0x1204,	// (0x0004b16a) linegrid_cam4_burst_pane_g1

0xb42a,	// (0x00055390) linegrid_cam4_burst_pane_g2_ParamLimits

0xb42a,	// (0x00055390) linegrid_cam4_burst_pane_g2

0x1211,	// (0x0004b177) linegrid_cam4_burst_pane_g3_ParamLimits

0x1211,	// (0x0004b177) linegrid_cam4_burst_pane_g3

0x0002,

0xfa54,	// (0x000599ba) linegrid_cam4_burst_pane_g_ParamLimits

0xfa54,	// (0x000599ba) linegrid_cam4_burst_pane_g

0xb43b,	// (0x000553a1) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0xb43b,	// (0x000553a1) linegrid_cam4_burst_pane_g3_copy1

0x121e,	// (0x0004b184) linegrid_cam4_burst_pane_g4_ParamLimits

0x121e,	// (0x0004b184) linegrid_cam4_burst_pane_g4

0xb455,	// (0x000553bb) linegrid_cam4_burst_pane_g5_ParamLimits

0xb455,	// (0x000553bb) linegrid_cam4_burst_pane_g5

0xb466,	// (0x000553cc) linegrid_cam4_burst_pane_g6_ParamLimits

0xb466,	// (0x000553cc) linegrid_cam4_burst_pane_g6

0x122b,	// (0x0004b191) linegrid_cam4_burst_pane_g7_ParamLimits

0x122b,	// (0x0004b191) linegrid_cam4_burst_pane_g7

0xb477,	// (0x000553dd) cell_cam4_burst_pane_g1

0x1244,	// (0x0004b1aa) main_cam5_pane_t1_ParamLimits

0x1244,	// (0x0004b1aa) main_cam5_pane_t1

0x1256,	// (0x0004b1bc) main_cam5_pane_t2_ParamLimits

0x1256,	// (0x0004b1bc) main_cam5_pane_t2

0x1268,	// (0x0004b1ce) main_cam5_pane_t3_ParamLimits

0x1268,	// (0x0004b1ce) main_cam5_pane_t3

0x127a,	// (0x0004b1e0) main_cam5_pane_t4_ParamLimits

0x127a,	// (0x0004b1e0) main_cam5_pane_t4

0x1290,	// (0x0004b1f6) main_cam5_pane_t5_ParamLimits

0x1290,	// (0x0004b1f6) main_cam5_pane_t5

0x12a2,	// (0x0004b208) main_cam5_pane_t6_ParamLimits

0x12a2,	// (0x0004b208) main_cam5_pane_t6

0x12b4,	// (0x0004b21a) main_cam5_pane_t7_ParamLimits

0x12b4,	// (0x0004b21a) main_cam5_pane_t7

0x12c6,	// (0x0004b22c) main_cam5_pane_t8_ParamLimits

0x12c6,	// (0x0004b22c) main_cam5_pane_t8

0x12e2,	// (0x0004b248) main_cam5_pane_t9_ParamLimits

0x12e2,	// (0x0004b248) main_cam5_pane_t9

0x12f4,	// (0x0004b25a) main_cam5_pane_t10_ParamLimits

0x12f4,	// (0x0004b25a) main_cam5_pane_t10

0x1306,	// (0x0004b26c) main_cam5_pane_t11_ParamLimits

0x1306,	// (0x0004b26c) main_cam5_pane_t11

0x1318,	// (0x0004b27e) main_cam5_pane_t12_ParamLimits

0x1318,	// (0x0004b27e) main_cam5_pane_t12

0x132d,	// (0x0004b293) main_cam5_pane_t13_ParamLimits

0x132d,	// (0x0004b293) main_cam5_pane_t13

0x000c,

0xfa60,	// (0x000599c6) main_cam5_pane_t_ParamLimits

0xfa60,	// (0x000599c6) main_cam5_pane_t

0x5bf7,	// (0x0004fb5d) popup_scut_keymap_window_ParamLimits

0x5bf7,	// (0x0004fb5d) popup_scut_keymap_window

0xb48a,	// (0x000553f0) aid_size_cell_brow_shortcut

0x374c,	// (0x0004d6b2) bg_popup_window_pane_cp010

0xb496,	// (0x000553fc) grid_scut_pane

0xb4a0,	// (0x00055406) cell_scut_pane_ParamLimits

0xb4a0,	// (0x00055406) cell_scut_pane

0xb4b5,	// (0x0005541b) cell_scut_pane_g1

0x134a,	// (0x0004b2b0) cell_scut_pane_t1

0x1359,	// (0x0004b2bf) cell_scut_pane_t2

0xb4be,	// (0x00055424) cell_scut_pane_t3

0x0002,

0xfa7b,	// (0x000599e1) cell_scut_pane_t

0x94b0,	// (0x00053416) main_mup3_pane_g8_ParamLimits

0x94b0,	// (0x00053416) main_mup3_pane_g8

0xa7e0,	// (0x00054746) area_vitu2_query_pane_ParamLimits

0xa7e0,	// (0x00054746) area_vitu2_query_pane

0xb240,	// (0x000551a6) input_focus_pane_cp08

0x1368,	// (0x0004b2ce) area_vitu2_query_pane_g1

0xb4cc,	// (0x00055432) area_vitu2_query_pane_g2

0x0001,

0xfa82,	// (0x000599e8) area_vitu2_query_pane_g

0xb4db,	// (0x00055441) area_vitu2_query_pane_t1_ParamLimits

0xb4db,	// (0x00055441) area_vitu2_query_pane_t1

0xb4ed,	// (0x00055453) area_vitu2_query_pane_t2_ParamLimits

0xb4ed,	// (0x00055453) area_vitu2_query_pane_t2

0xb4ff,	// (0x00055465) area_vitu2_query_pane_t3_ParamLimits

0xb4ff,	// (0x00055465) area_vitu2_query_pane_t3

0x1374,	// (0x0004b2da) area_vitu2_query_pane_t4_ParamLimits

0x1374,	// (0x0004b2da) area_vitu2_query_pane_t4

0x139c,	// (0x0004b302) area_vitu2_query_pane_t5_ParamLimits

0x139c,	// (0x0004b302) area_vitu2_query_pane_t5

0x13c4,	// (0x0004b32a) area_vitu2_query_pane_t6_ParamLimits

0x13c4,	// (0x0004b32a) area_vitu2_query_pane_t6

0x0006,

0xfa87,	// (0x000599ed) area_vitu2_query_pane_t_ParamLimits

0xfa87,	// (0x000599ed) area_vitu2_query_pane_t

0xb527,	// (0x0005548d) bg_button_pane_cp018

0xb534,	// (0x0005549a) bg_button_pane_cp021

0xb540,	// (0x000554a6) bg_button_pane_cp022

0xb54f,	// (0x000554b5) input_focus_pane_cp09

0x3fd3,	// (0x0004df39) aid_size_touch_mv_arrow_left

0x3ffc,	// (0x0004df62) aid_size_touch_mv_arrow_right

0x1037,	// (0x0004af9d) main_cset_slider_pane_g16_ParamLimits

0x1037,	// (0x0004af9d) main_cset_slider_pane_g16

0x1043,	// (0x0004afa9) main_cset_slider_pane_g17_ParamLimits

0x1043,	// (0x0004afa9) main_cset_slider_pane_g17

0xb477,	// (0x000553dd) cell_cam4_burst_pane_g1_ParamLimits

0x2d35,	// (0x0004cc9b) compa_mode_pane

0xaf3f,	// (0x00054ea5) popup_vtel_slider_window_g3_ParamLimits

0xaf3f,	// (0x00054ea5) popup_vtel_slider_window_g3

0xaf53,	// (0x00054eb9) popup_vtel_slider_window_g4_ParamLimits

0xaf53,	// (0x00054eb9) popup_vtel_slider_window_g4

0xaf67,	// (0x00054ecd) popup_vtel_slider_window_t1_ParamLimits

0xaf67,	// (0x00054ecd) popup_vtel_slider_window_t1

0x5c4e,	// (0x0004fbb4) main_cl_pane

0x8888,	// (0x000527ee) popup_imed_adjust2_window_ParamLimits

0xe449,	// (0x000583af) bg_tb_trans_pane_cp05_ParamLimits

0xed24,	// (0x00058c8a) popup_imed_adjust2_window_g1_ParamLimits

0xed33,	// (0x00058c99) popup_imed_adjust2_window_g2_ParamLimits

0xed33,	// (0x00058c99) popup_imed_adjust2_window_g2

0xed3f,	// (0x00058ca5) popup_imed_adjust2_window_g3_ParamLimits

0xed3f,	// (0x00058ca5) popup_imed_adjust2_window_g3

0x0002,

0xf7f2,	// (0x00059758) popup_imed_adjust2_window_g_ParamLimits

0xf7f2,	// (0x00059758) popup_imed_adjust2_window_g

0xed4b,	// (0x00058cb1) popup_imed_adjust2_window_t1_ParamLimits

0xed63,	// (0x00058cc9) slider_imed_adjust_pane_ParamLimits

0xed77,	// (0x00058cdd) slider_imed_adjust_pane_g1_ParamLimits

0xed87,	// (0x00058ced) slider_imed_adjust_pane_g2_ParamLimits

0xed97,	// (0x00058cfd) slider_imed_adjust_pane_g3_ParamLimits

0xeda8,	// (0x00058d0e) slider_imed_adjust_pane_g4_ParamLimits

0xf7f9,	// (0x0005975f) slider_imed_adjust_pane_g_ParamLimits

0xa535,	// (0x0005449b) aid_touch_area_cam4_ParamLimits

0xa535,	// (0x0005449b) aid_touch_area_cam4

0xa543,	// (0x000544a9) battery_pane_cp01

0xa5c2,	// (0x00054528) main_camera4_pane_g6_ParamLimits

0xa5c2,	// (0x00054528) main_camera4_pane_g6

0xa5e0,	// (0x00054546) main_camera4_pane_t2_ParamLimits

0xa5e0,	// (0x00054546) main_camera4_pane_t2

0x0001,

0xf8fc,	// (0x00059862) main_camera4_pane_t_ParamLimits

0xf8fc,	// (0x00059862) main_camera4_pane_t

0xa66f,	// (0x000545d5) aid_touch_area_vid4_ParamLimits

0xa66f,	// (0x000545d5) aid_touch_area_vid4

0xa6ad,	// (0x00054613) main_video4_pane_g5_ParamLimits

0xa6ad,	// (0x00054613) main_video4_pane_g5

0xa6cf,	// (0x00054635) vid4_progress_pane_ParamLimits

0xa6cf,	// (0x00054635) vid4_progress_pane

0x104f,	// (0x0004afb5) main_cset_slider_pane_g18_ParamLimits

0x104f,	// (0x0004afb5) main_cset_slider_pane_g18

0x1238,	// (0x0004b19e) cell_cam4_burst_pane_g2_ParamLimits

0x1238,	// (0x0004b19e) cell_cam4_burst_pane_g2

0x0001,

0xfa5b,	// (0x000599c1) cell_cam4_burst_pane_g_ParamLimits

0xfa5b,	// (0x000599c1) cell_cam4_burst_pane_g

0xb55e,	// (0x000554c4) bg_cl_pane_ParamLimits

0xb55e,	// (0x000554c4) bg_cl_pane

0xb56a,	// (0x000554d0) cl_header_pane_ParamLimits

0xb56a,	// (0x000554d0) cl_header_pane

0xb576,	// (0x000554dc) cl_listscroll_pane_ParamLimits

0xb576,	// (0x000554dc) cl_listscroll_pane

0x1410,	// (0x0004b376) bg_cl_pane_g1

0x1418,	// (0x0004b37e) bg_cl_pane_g2

0x1420,	// (0x0004b386) bg_cl_pane_g3

0x1428,	// (0x0004b38e) bg_cl_pane_g4

0x1430,	// (0x0004b396) bg_cl_pane_g5

0x1438,	// (0x0004b39e) bg_cl_pane_g6

0x1440,	// (0x0004b3a6) bg_cl_pane_g7

0x1448,	// (0x0004b3ae) bg_cl_pane_g8

0x1450,	// (0x0004b3b6) bg_cl_pane_g9

0x0008,

0xfa96,	// (0x000599fc) bg_cl_pane_g

0xb582,	// (0x000554e8) aid_height_cl_leading_ParamLimits

0xb582,	// (0x000554e8) aid_height_cl_leading

0xb58e,	// (0x000554f4) aid_height_cl_text_ParamLimits

0xb58e,	// (0x000554f4) aid_height_cl_text

0x2cec,	// (0x0004cc52) bg_cl_header_pane_ParamLimits

0x2cec,	// (0x0004cc52) bg_cl_header_pane

0xb5a6,	// (0x0005550c) cl_header_pane_g1_ParamLimits

0xb5a6,	// (0x0005550c) cl_header_pane_g1

0xb5b3,	// (0x00055519) cl_header_pane_t1_ParamLimits

0xb5b3,	// (0x00055519) cl_header_pane_t1

0x1458,	// (0x0004b3be) cl_list_pane

0x0fe0,	// (0x0004af46) hc_scroll_pane_cp01

0x3992,	// (0x0004d8f8) bg_cl_header_pane_g1

0x0ec6,	// (0x0004ae2c) bg_cl_header_pane_g2

0x39b2,	// (0x0004d918) bg_cl_header_pane_g3

0x0ed6,	// (0x0004ae3c) bg_cl_header_pane_g4

0x0ece,	// (0x0004ae34) bg_cl_header_pane_g5

0x1147,	// (0x0004b0ad) bg_cl_header_pane_g6

0x0eee,	// (0x0004ae54) bg_cl_header_pane_g7

0x0ef6,	// (0x0004ae5c) bg_cl_header_pane_g8

0x0ee6,	// (0x0004ae4c) bg_cl_header_pane_g9

0x0008,

0xfaa9,	// (0x00059a0f) bg_cl_header_pane_g

0xb5c5,	// (0x0005552b) hc_cl_list_double_graphic_heading_pane_ParamLimits

0xb5c5,	// (0x0005552b) hc_cl_list_double_graphic_heading_pane

0xb5d2,	// (0x00055538) hc_cl_list_single_graphic_pane_ParamLimits

0xb5d2,	// (0x00055538) hc_cl_list_single_graphic_pane

0xb5e3,	// (0x00055549) hc_cl_list_single_graphic_pane_g1_ParamLimits

0xb5e3,	// (0x00055549) hc_cl_list_single_graphic_pane_g1

0xb5ef,	// (0x00055555) hc_cl_list_single_graphic_pane_g2_ParamLimits

0xb5ef,	// (0x00055555) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfabc,	// (0x00059a22) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfabc,	// (0x00059a22) hc_cl_list_single_graphic_pane_g

0xb603,	// (0x00055569) hc_cl_list_single_graphic_pane_t1_ParamLimits

0xb603,	// (0x00055569) hc_cl_list_single_graphic_pane_t1

0xb5e3,	// (0x00055549) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0xb5e3,	// (0x00055549) hc_cl_list_double_graphic_heading_pane_g1

0xb618,	// (0x0005557e) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0xb618,	// (0x0005557e) hc_cl_list_double_graphic_heading_pane_g2

0xb62c,	// (0x00055592) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0xb62c,	// (0x00055592) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfac1,	// (0x00059a27) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfac1,	// (0x00059a27) hc_cl_list_double_graphic_heading_pane_g

0xb640,	// (0x000555a6) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0xb640,	// (0x000555a6) hc_cl_list_double_graphic_heading_pane_t1

0xb655,	// (0x000555bb) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0xb655,	// (0x000555bb) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfac8,	// (0x00059a2e) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfac8,	// (0x00059a2e) hc_cl_list_double_graphic_heading_pane_t

0xb672,	// (0x000555d8) vid4_progress_pane_g1

0xb682,	// (0x000555e8) vid4_progress_pane_g2

0xb692,	// (0x000555f8) vid4_progress_pane_g3

0xb6a2,	// (0x00055608) vid4_progress_pane_g4

0x0004,

0xfacd,	// (0x00059a33) vid4_progress_pane_g

0xb6c0,	// (0x00055626) vid4_progress_pane_t1

0xb6d6,	// (0x0005563c) vid4_progress_pane_t2

0x0002,

0xfad8,	// (0x00059a3e) vid4_progress_pane_t

0xb701,	// (0x00055667) wait_bar_pane_cp07

0xe644,	// (0x000585aa) blid_firmament_pane_ParamLimits

0xe685,	// (0x000585eb) popup_blid_sat_info2_window_g1

0xe6a9,	// (0x0005860f) popup_blid_sat_info2_window_t3

0xe6b7,	// (0x0005861d) popup_blid_sat_info2_window_t4

0xe6c5,	// (0x0005862b) popup_blid_sat_info2_window_t5

0xe6d3,	// (0x00058639) popup_blid_sat_info2_window_t6

0xe6e3,	// (0x00058649) popup_blid_sat_info2_window_t7

0xe6f1,	// (0x00058657) popup_blid_sat_info2_window_t8

0xe6ff,	// (0x00058665) popup_blid_sat_info2_window_t9

0xe70d,	// (0x00058673) popup_blid_sat_info2_window_t10

0xe7c9,	// (0x0005872f) aid_firma_cardinal_ParamLimits

0xe7dd,	// (0x00058743) blid_firmament_pane_t1_ParamLimits

0xe7f4,	// (0x0005875a) blid_firmament_pane_t2_ParamLimits

0xe80b,	// (0x00058771) blid_firmament_pane_t3_ParamLimits

0xe822,	// (0x00058788) blid_firmament_pane_t4_ParamLimits

0xf6e6,	// (0x0005964c) blid_firmament_pane_t_ParamLimits

0xe839,	// (0x0005879f) blid_sat_info_pane_ParamLimits

0x87fc,	// (0x00052762) main_cam_set_pane_ParamLimits

0x9bfa,	// (0x00053b60) aid_size_cell_colour_35_ParamLimits

0x9c14,	// (0x00053b7a) aid_size_cell_colour_112_ParamLimits

0x9c2b,	// (0x00053b91) aid_size_cell_effect_ParamLimits

0x4a02,	// (0x0004e968) bg_tb_trans_pane_cp02_ParamLimits

0x4a10,	// (0x0004e976) heading_imed_pane_ParamLimits

0x9c45,	// (0x00053bab) listscroll_imed_pane_ParamLimits

0xda2f,	// (0x00057995) popup_call2_audio_first_window_g5_ParamLimits

0xda2f,	// (0x00057995) popup_call2_audio_first_window_g5

0xa2d8,	// (0x0005423e) aid_size_touch_image3_arrow_left_ParamLimits

0xa2d8,	// (0x0005423e) aid_size_touch_image3_arrow_left

0xa2ec,	// (0x00054252) aid_size_touch_image3_arrow_right_ParamLimits

0xa2ec,	// (0x00054252) aid_size_touch_image3_arrow_right

0xb6eb,	// (0x00055651) vid4_progress_pane_t3

0x9ea6,	// (0x00053e0c) main_hwr_training_symbol_option_pane_ParamLimits

0x9ea6,	// (0x00053e0c) main_hwr_training_symbol_option_pane

0xf003,	// (0x00058f69) popup_hwr_training_preview_window_ParamLimits

0xf003,	// (0x00058f69) popup_hwr_training_preview_window

0x9f01,	// (0x00053e67) hwr_training_navi_pane_g5_ParamLimits

0x9f01,	// (0x00053e67) hwr_training_navi_pane_g5

0x0eb4,	// (0x0004ae1a) popup_char_count_window

0x5c38,	// (0x0004fb9e) bg_popup_sub_pane_cp20_ParamLimits

0xb062,	// (0x00054fc8) list_vitu2_match_list_pane_ParamLimits

0xb06e,	// (0x00054fd4) vitu2_page_scroll_pane_ParamLimits

0xb06e,	// (0x00054fd4) vitu2_page_scroll_pane

0x148c,	// (0x0004b3f2) list_single_hwr_training_symbol_option_pane_ParamLimits

0x148c,	// (0x0004b3f2) list_single_hwr_training_symbol_option_pane

0x149f,	// (0x0004b405) list_single_hwr_training_symbol_option_pane_g1

0x14a7,	// (0x0004b40d) list_single_hwr_training_symbol_option_pane_t1

0x1483,	// (0x0004b3e9) bg_button_pane_cp023

0x14b5,	// (0x0004b41b) bg_button_pane_cp024

0xb741,	// (0x000556a7) vitu2_page_scroll_pane_g1

0xb749,	// (0x000556af) vitu2_page_scroll_pane_g2

0x0001,

0xfadf,	// (0x00059a45) vitu2_page_scroll_pane_g

0xb751,	// (0x000556b7) vitu2_page_scroll_pane_t1

0xe872,	// (0x000587d8) popup_char_count_window_g1

0x14e8,	// (0x0004b44e) popup_char_count_window_g2

0x14f1,	// (0x0004b457) popup_char_count_window_g3

0x0002,

0xfae4,	// (0x00059a4a) popup_char_count_window_g

0x14fa,	// (0x0004b460) popup_char_count_window_t1

0x5c4e,	// (0x0004fbb4) main_vded2_pane

0xed12,	// (0x00058c78) aid_size_cell_imed_line

0xed1c,	// (0x00058c82) grid_imed_line_width_pane

0xa739,	// (0x0005469f) vid4_indicators_pane_g4

0x1508,	// (0x0004b46e) cell_imed_line_width_pane_ParamLimits

0x1508,	// (0x0004b46e) cell_imed_line_width_pane

0x151a,	// (0x0004b480) cell_imed_line_width_pane_g1

0xf0c2,	// (0x00059028) cell_imed_line_width_pane_g2

0x0001,

0xfaeb,	// (0x00059a51) cell_imed_line_width_pane_g

0xb760,	// (0x000556c6) main_vded2_pane_g1_ParamLimits

0xb760,	// (0x000556c6) main_vded2_pane_g1

0xb76d,	// (0x000556d3) main_vded2_pane_g2_ParamLimits

0xb76d,	// (0x000556d3) main_vded2_pane_g2

0x0001,

0xfaf0,	// (0x00059a56) main_vded2_pane_g_ParamLimits

0xfaf0,	// (0x00059a56) main_vded2_pane_g

0xb779,	// (0x000556df) vded2_slider_pane_ParamLimits

0xb779,	// (0x000556df) vded2_slider_pane

0xb786,	// (0x000556ec) aid_size_touch_vded2_end

0xb78e,	// (0x000556f4) aid_size_touch_vded2_playhead

0x1523,	// (0x0004b489) aid_size_touch_vded2_start

0x152b,	// (0x0004b491) vded2_slider_bg_pane

0x1534,	// (0x0004b49a) vded2_slider_pane_g1

0x153d,	// (0x0004b4a3) vded2_slider_pane_g2

0xb796,	// (0x000556fc) vded2_slider_pane_g3

0x0002,

0xfaf5,	// (0x00059a5b) vded2_slider_pane_g

0x1545,	// (0x0004b4ab) vded2_slider_bg_pane_g1

0x154e,	// (0x0004b4b4) vded2_slider_bg_pane_g2

0x1557,	// (0x0004b4bd) vded2_slider_bg_pane_g3

0x0002,

0xfafc,	// (0x00059a62) vded2_slider_bg_pane_g

0x81a7,	// (0x0005210d) aid_postcard_touch_down_pane_ParamLimits

0x81a7,	// (0x0005210d) aid_postcard_touch_down_pane

0x81b3,	// (0x00052119) aid_postcard_touch_up_pane_ParamLimits

0x81b3,	// (0x00052119) aid_postcard_touch_up_pane

0x5c4e,	// (0x0004fbb4) main_blid2_pane

0x8825,	// (0x0005278b) popup_blid2_search_window

0x2d35,	// (0x0004cc9b) blid2_gps_pane

0x2d35,	// (0x0004cc9b) blid2_navig_pane

0x2d35,	// (0x0004cc9b) blid2_search_pane

0x2d35,	// (0x0004cc9b) blid2_tripm_pane

0xb79f,	// (0x00055705) blid2_search_pane_g1_ParamLimits

0xb79f,	// (0x00055705) blid2_search_pane_g1

0xb7ab,	// (0x00055711) blid2_search_pane_t1_ParamLimits

0xb7ab,	// (0x00055711) blid2_search_pane_t1

0xb7bd,	// (0x00055723) aid_size_cell_blid2_gps_ParamLimits

0xb7bd,	// (0x00055723) aid_size_cell_blid2_gps

0xb7cd,	// (0x00055733) blid2_gps_pane_g1_ParamLimits

0xb7cd,	// (0x00055733) blid2_gps_pane_g1

0xb7d9,	// (0x0005573f) grid_blid2_satellite_pane_ParamLimits

0xb7d9,	// (0x0005573f) grid_blid2_satellite_pane

0xb7e5,	// (0x0005574b) blid2_navig_pane_g1_ParamLimits

0xb7e5,	// (0x0005574b) blid2_navig_pane_g1

0xb7f1,	// (0x00055757) blid2_navig_pane_t1_ParamLimits

0xb7f1,	// (0x00055757) blid2_navig_pane_t1

0xb803,	// (0x00055769) blid2_navig_pane_t2_ParamLimits

0xb803,	// (0x00055769) blid2_navig_pane_t2

0x0001,

0xfb03,	// (0x00059a69) blid2_navig_pane_t_ParamLimits

0xfb03,	// (0x00059a69) blid2_navig_pane_t

0xb815,	// (0x0005577b) blid2_navig_ring_pane_ParamLimits

0xb815,	// (0x0005577b) blid2_navig_ring_pane

0xb821,	// (0x00055787) blid2_speed_pane_ParamLimits

0xb821,	// (0x00055787) blid2_speed_pane

0xb82d,	// (0x00055793) blid2_tripm_pane_g1_ParamLimits

0xb82d,	// (0x00055793) blid2_tripm_pane_g1

0xb839,	// (0x0005579f) blid2_tripm_pane_g2_ParamLimits

0xb839,	// (0x0005579f) blid2_tripm_pane_g2

0xb845,	// (0x000557ab) blid2_tripm_pane_g3_ParamLimits

0xb845,	// (0x000557ab) blid2_tripm_pane_g3

0xb851,	// (0x000557b7) blid2_tripm_pane_g4_ParamLimits

0xb851,	// (0x000557b7) blid2_tripm_pane_g4

0xb85d,	// (0x000557c3) blid2_tripm_pane_g5_ParamLimits

0xb85d,	// (0x000557c3) blid2_tripm_pane_g5

0x0005,

0xfb08,	// (0x00059a6e) blid2_tripm_pane_g_ParamLimits

0xfb08,	// (0x00059a6e) blid2_tripm_pane_g

0xb875,	// (0x000557db) blid2_tripm_pane_t1_ParamLimits

0xb875,	// (0x000557db) blid2_tripm_pane_t1

0xb887,	// (0x000557ed) blid2_tripm_pane_t2_ParamLimits

0xb887,	// (0x000557ed) blid2_tripm_pane_t2

0xb899,	// (0x000557ff) blid2_tripm_pane_t3_ParamLimits

0xb899,	// (0x000557ff) blid2_tripm_pane_t3

0x0003,

0xfb15,	// (0x00059a7b) blid2_tripm_pane_t_ParamLimits

0xfb15,	// (0x00059a7b) blid2_tripm_pane_t

0xb8c9,	// (0x0005582f) cell_blid2_satellite_pane_ParamLimits

0xb8c9,	// (0x0005582f) cell_blid2_satellite_pane

0xb8e1,	// (0x00055847) cell_blid2_satellite_pane_g1

0x1560,	// (0x0004b4c6) cell_blid2_satellite_pane_t1

0xe849,	// (0x000587af) blid2_speed_pane_g1

0x156e,	// (0x0004b4d4) blid2_speed_pane_t1

0x157c,	// (0x0004b4e2) blid2_speed_pane_t2

0x0001,

0xfb1e,	// (0x00059a84) blid2_speed_pane_t

0xe849,	// (0x000587af) blid2_navig_ring_pane_g1

0xb8ea,	// (0x00055850) blid2_navig_ring_pane_g2

0xb8f2,	// (0x00055858) blid2_navig_ring_pane_g3

0xb8fa,	// (0x00055860) blid2_navig_ring_pane_g4

0xb902,	// (0x00055868) blid2_navig_ring_pane_g5

0x0004,

0xfb23,	// (0x00059a89) blid2_navig_ring_pane_g

0x2d35,	// (0x0004cc9b) bg_popup_window_pane_cp011

0x158a,	// (0x0004b4f0) popup_blid2_search_window_g1

0x1592,	// (0x0004b4f8) popup_blid2_search_window_t1

0x15a0,	// (0x0004b506) popup_blid2_search_window_t2

0x0001,

0xfb2e,	// (0x00059a94) popup_blid2_search_window_t

0x38a1,	// (0x0004d807) main_browser_pane_g1

0x359b,	// (0x0004d501) main_browser_pane_ParamLimits

0x87fc,	// (0x00052762) bg_button_pane_cp011_ParamLimits

0xa993,	// (0x000548f9) cell_vitu2_function_pane_g1_ParamLimits

0xe449,	// (0x000583af) bg_popup_sub_pane_cp22_ParamLimits

0xb240,	// (0x000551a6) input_focus_pane_cp08_ParamLimits

0xb257,	// (0x000551bd) popup_vitu2_query_button_pane_ParamLimits

0xb257,	// (0x000551bd) popup_vitu2_query_button_pane

0xb268,	// (0x000551ce) popup_vitu2_query_input_button_pane

0x1182,	// (0x0004b0e8) popup_vitu2_query_window_g1_ParamLimits

0xb270,	// (0x000551d6) popup_vitu2_query_window_g2_ParamLimits

0xfa2f,	// (0x00059995) popup_vitu2_query_window_g_ParamLimits

0x2d35,	// (0x0004cc9b) bg_button_pane_cp026

0xb90a,	// (0x00055870) popup_vitu2_query_input_button_pane_g1

0x2d35,	// (0x0004cc9b) bg_button_pane_cp025

0x15ae,	// (0x0004b514) popup_vitu2_query_button_pane_t1

0x91e0,	// (0x00053146) main_mp3_pane_t6

0x91ee,	// (0x00053154) popup_slider_window_cp01

0xa624,	// (0x0005458a) cam4_battery_pane

0xa6f8,	// (0x0005465e) cam4_battery_pane_cp02

0xb66a,	// (0x000555d0) cam4_battery_pane_cp01

0xb66a,	// (0x000555d0) cam4_battery_pane_cp03

0x15bc,	// (0x0004b522) cam4_battery_pane_g1

0xe849,	// (0x000587af) cam4_battery_pane_g2

0x0001,

0xfb33,	// (0x00059a99) cam4_battery_pane_g

0xe71b,	// (0x00058681) popup_blid_sat_info2_window_t11

0x3fd3,	// (0x0004df39) aid_size_touch_mv_arrow_left_ParamLimits

0x3ffc,	// (0x0004df62) aid_size_touch_mv_arrow_right_ParamLimits

0x405a,	// (0x0004dfc0) navi_pane_g1_ParamLimits

0x4066,	// (0x0004dfcc) navi_pane_g2_ParamLimits

0x4094,	// (0x0004dffa) navi_pane_g3_ParamLimits

0xf3e5,	// (0x0005934b) navi_pane_g_ParamLimits

0x7bcb,	// (0x00051b31) navi_pane_mv_t1_ParamLimits

0x9c51,	// (0x00053bb7) grid_imed_effect_pane_ParamLimits

0x6bf6,	// (0x00050b5c) aid_placing_vt_slider_lsc

0x37e3,	// (0x0004d749) aid_placing_vt_slider_prt

0x4a02,	// (0x0004e968) bg_tb_trans_pane_cp01_ParamLimits

0xe998,	// (0x000588fe) popup_image_details_window_g1_ParamLimits

0xe9ab,	// (0x00058911) popup_image_details_window_g2_ParamLimits

0xe9c0,	// (0x00058926) popup_image_details_window_g3_ParamLimits

0xe9c0,	// (0x00058926) popup_image_details_window_g3

0xf72b,	// (0x00059691) popup_image_details_window_g_ParamLimits

0xe9d4,	// (0x0005893a) popup_image_details_window_t1_ParamLimits

0xe9e6,	// (0x0005894c) popup_image_details_window_t2_ParamLimits

0xe9ff,	// (0x00058965) popup_image_details_window_t3_ParamLimits

0xea13,	// (0x00058979) popup_image_details_window_t4_ParamLimits

0xea2e,	// (0x00058994) popup_image_details_window_t5_ParamLimits

0xf732,	// (0x00059698) popup_image_details_window_t_ParamLimits

0xb59a,	// (0x00055500) cl_header_name_pane_ParamLimits

0xb59a,	// (0x00055500) cl_header_name_pane

0xb912,	// (0x00055878) cl_header_name_pane_t1_ParamLimits

0xb912,	// (0x00055878) cl_header_name_pane_t1

0xb929,	// (0x0005588f) cl_header_name_pane_t2_ParamLimits

0xb929,	// (0x0005588f) cl_header_name_pane_t2

0xb953,	// (0x000558b9) cl_header_name_pane_t3_ParamLimits

0xb953,	// (0x000558b9) cl_header_name_pane_t3

0x0002,

0xfb38,	// (0x00059a9e) cl_header_name_pane_t_ParamLimits

0xfb38,	// (0x00059a9e) cl_header_name_pane_t

0x4121,	// (0x0004e087) navi_pane_mv_g2_ParamLimits

0x0e71,	// (0x0004add7) field_vitu2_entry_pane_g1_ParamLimits

0x0e7d,	// (0x0004ade3) field_vitu2_entry_pane_g2_ParamLimits

0x0e89,	// (0x0004adef) field_vitu2_entry_pane_g3_ParamLimits

0x0e89,	// (0x0004adef) field_vitu2_entry_pane_g3

0xf92e,	// (0x00059894) field_vitu2_entry_pane_g_ParamLimits

0xa927,	// (0x0005488d) cell_vitu2_itu_pane_g1_ParamLimits

0xa939,	// (0x0005489f) cell_vitu2_itu_pane_g2_ParamLimits

0xa939,	// (0x0005489f) cell_vitu2_itu_pane_g2

0x0001,

0xf93a,	// (0x000598a0) cell_vitu2_itu_pane_g_ParamLimits

0xf93a,	// (0x000598a0) cell_vitu2_itu_pane_g

0x87fc,	// (0x00052762) bg_vkb2_func_pane_cp05_ParamLimits

0x87fc,	// (0x00052762) bg_vkb2_func_pane_cp05

0x87fc,	// (0x00052762) bg_vkb2_func_pane_cp03

0x87fc,	// (0x00052762) bg_vkb2_func_pane_cp04

0x87fc,	// (0x00052762) bg_vkb2_func_pane_cp10_ParamLimits

0x87fc,	// (0x00052762) bg_vkb2_func_pane_cp10

0xb540,	// (0x000554a6) bg_vkb2_func_pane_cp08

0xb527,	// (0x0005548d) bg_vkb2_func_pane_cp06

0xb534,	// (0x0005549a) bg_vkb2_func_pane_cp07

0x14be,	// (0x0004b424) bg_vkb2_func_pane_cp11_ParamLimits

0x14be,	// (0x0004b424) bg_vkb2_func_pane_cp11

0x14d3,	// (0x0004b439) bg_vkb2_func_pane_cp12_ParamLimits

0x14d3,	// (0x0004b439) bg_vkb2_func_pane_cp12

0x2d35,	// (0x0004cc9b) bg_vkb2_func_pane_cp09

0x0ec6,	// (0x0004ae2c) bg_vkb2_func_pane_g1

0x39b2,	// (0x0004d918) bg_vkb2_func_pane_g2

0x0ece,	// (0x0004ae34) bg_vkb2_func_pane_g3

0x0ed6,	// (0x0004ae3c) bg_vkb2_func_pane_g4

0x1147,	// (0x0004b0ad) bg_vkb2_func_pane_g5

0x0eee,	// (0x0004ae54) bg_vkb2_func_pane_g6

0x0ef6,	// (0x0004ae5c) bg_vkb2_func_pane_g7

0x0ee6,	// (0x0004ae4c) bg_vkb2_func_pane_g8

0x3992,	// (0x0004d8f8) bg_vkb2_func_pane_g9

0x0008,

0xfb3f,	// (0x00059aa5) bg_vkb2_func_pane_g

0xb869,	// (0x000557cf) blid2_tripm_pane_g6_ParamLimits

0xb869,	// (0x000557cf) blid2_tripm_pane_g6

0x0c20,	// (0x0004ab86) mp4_progress_pane_g1

0xb8bd,	// (0x00055823) blid2_tripm_values_pane_ParamLimits

0xb8bd,	// (0x00055823) blid2_tripm_values_pane

0xb978,	// (0x000558de) blid2_tripm_values_pane_t1

0xb986,	// (0x000558ec) blid2_tripm_values_pane_t2

0xb994,	// (0x000558fa) blid2_tripm_values_pane_t3

0xb9a2,	// (0x00055908) blid2_tripm_values_pane_t4

0xb9b0,	// (0x00055916) blid2_tripm_values_pane_t5

0xb9be,	// (0x00055924) blid2_tripm_values_pane_t6

0xb9cc,	// (0x00055932) blid2_tripm_values_pane_t7

0xb9da,	// (0x00055940) blid2_tripm_values_pane_t8

0xb9e8,	// (0x0005594e) blid2_tripm_values_pane_t9

0x0008,

0xfb52,	// (0x00059ab8) blid2_tripm_values_pane_t

0x6c30,	// (0x00050b96) call_video_pane_t1_ParamLimits

0x6c4d,	// (0x00050bb3) call_video_pane_t2_ParamLimits

0xf26e,	// (0x000591d4) call_video_pane_t_ParamLimits

0x8086,	// (0x00051fec) msg_header_pane_g1_ParamLimits

0x42ce,	// (0x0004e234) msg_header_pane_g2_ParamLimits

0x42ce,	// (0x0004e234) msg_header_pane_g2

0x0001,

0xf488,	// (0x000593ee) msg_header_pane_g_ParamLimits

0xf488,	// (0x000593ee) msg_header_pane_g

0x359b,	// (0x0004d501) main_clock2_pane_ParamLimits

0x99f3,	// (0x00053959) grid_clock2_toolbar_pane_ParamLimits

0x99f3,	// (0x00053959) grid_clock2_toolbar_pane

0x99f3,	// (0x00053959) listscroll_clock2_pane_ParamLimits

0x99f3,	// (0x00053959) listscroll_clock2_pane

0x9a8f,	// (0x000539f5) main_clock2_pane_t3_ParamLimits

0x9a8f,	// (0x000539f5) main_clock2_pane_t3

0x9aa1,	// (0x00053a07) main_clock2_pane_t4_ParamLimits

0x9aa1,	// (0x00053a07) main_clock2_pane_t4

0x15c6,	// (0x0004b52c) cell_clock2_toolbar_pane

0x15ce,	// (0x0004b534) cell_clock2_toolbar_pane_cp01

0x15ce,	// (0x0004b534) cell_clock2_toolbar_pane_cp02

0x15d6,	// (0x0004b53c) cell_clock2_toolbar_pane_cp03

0x15de,	// (0x0004b544) list_clock2_pane

0x3f58,	// (0x0004debe) scroll_pane_cp10

0x15e6,	// (0x0004b54c) list_single_clock2_pane_ParamLimits

0x15e6,	// (0x0004b54c) list_single_clock2_pane

0x374c,	// (0x0004d6b2) list_highlight_pane_cp08

0x15f3,	// (0x0004b559) list_single_clock2_pane_t1

0x1601,	// (0x0004b567) list_single_clock2_pane_t2

0x0001,

0xfb65,	// (0x00059acb) list_single_clock2_pane_t

0x2d35,	// (0x0004cc9b) bg_button_pane_cp10

0x160f,	// (0x0004b575) cell_clock2_toolbar_pane_g1

0x8111,	// (0x00052077) aid_main_viewer_pane_g1_ParamLimits

0x8111,	// (0x00052077) aid_main_viewer_pane_g1

0x811d,	// (0x00052083) aid_main_viewer_pane_g2_ParamLimits

0x811d,	// (0x00052083) aid_main_viewer_pane_g2

0x8129,	// (0x0005208f) aid_main_viewer_pane_g3_ParamLimits

0x8129,	// (0x0005208f) aid_main_viewer_pane_g3

0x8138,	// (0x0005209e) aid_main_viewer_pane_g4_ParamLimits

0x8138,	// (0x0005209e) aid_main_viewer_pane_g4

0x0003,

0xf499,	// (0x000593ff) aid_main_viewer_pane_g_ParamLimits

0xf499,	// (0x000593ff) aid_main_viewer_pane_g

0x87df,	// (0x00052745) main_calc_pane_ParamLimits

0x880a,	// (0x00052770) main_dialer2_pane_ParamLimits

0x5c4e,	// (0x0004fbb4) main_cam6_pane

0x5c4e,	// (0x0004fbb4) main_vid6_pane

0x99ff,	// (0x00053965) listscroll_gen_pane_cp06_ParamLimits

0x99ff,	// (0x00053965) listscroll_gen_pane_cp06

0x9ab3,	// (0x00053a19) main_clock2_pane_t5_ParamLimits

0x9ab3,	// (0x00053a19) main_clock2_pane_t5

0x9afb,	// (0x00053a61) aid_call2_pane_cp10_ParamLimits

0x9b0d,	// (0x00053a73) aid_call_pane_cp10_ParamLimits

0x3fc7,	// (0x0004df2d) popup_clock_analogue_window_cp10_g1_ParamLimits

0x3fc7,	// (0x0004df2d) popup_clock_analogue_window_cp10_g2_ParamLimits

0x9b1f,	// (0x00053a85) popup_clock_analogue_window_cp10_g3_ParamLimits

0x9b1f,	// (0x00053a85) popup_clock_analogue_window_cp10_g4_ParamLimits

0x3fc7,	// (0x0004df2d) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf7e7,	// (0x0005974d) popup_clock_analogue_window_cp10_g_ParamLimits

0x9b31,	// (0x00053a97) popup_clock_analogue_window_cp10_t1_ParamLimits

0xa285,	// (0x000541eb) cell_dialer2_keypad_pane_g2_ParamLimits

0xa285,	// (0x000541eb) cell_dialer2_keypad_pane_g2

0x0001,

0xf8cd,	// (0x00059833) cell_dialer2_keypad_pane_g_ParamLimits

0xf8cd,	// (0x00059833) cell_dialer2_keypad_pane_g

0xa2a1,	// (0x00054207) cell_dialer2_keypad_pane_t1

0xac2c,	// (0x00054b92) main_cset_text2_pane_ParamLimits

0xac2c,	// (0x00054b92) main_cset_text2_pane

0x1368,	// (0x0004b2ce) area_vitu2_query_pane_g1_ParamLimits

0xb4cc,	// (0x00055432) area_vitu2_query_pane_g2_ParamLimits

0xfa82,	// (0x000599e8) area_vitu2_query_pane_g_ParamLimits

0x13ec,	// (0x0004b352) area_vitu2_query_pane_t7_ParamLimits

0x13ec,	// (0x0004b352) area_vitu2_query_pane_t7

0xb527,	// (0x0005548d) bg_button_pane_cp018_ParamLimits

0xb534,	// (0x0005549a) bg_button_pane_cp021_ParamLimits

0xb540,	// (0x000554a6) bg_button_pane_cp022_ParamLimits

0xb540,	// (0x000554a6) bg_vkb2_func_pane_cp08_ParamLimits

0xb527,	// (0x0005548d) bg_vkb2_func_pane_cp06_ParamLimits

0xb534,	// (0x0005549a) bg_vkb2_func_pane_cp07_ParamLimits

0xb54f,	// (0x000554b5) input_focus_pane_cp09_ParamLimits

0xb9f6,	// (0x0005595c) cam6_autofocus_pane_ParamLimits

0xb9f6,	// (0x0005595c) cam6_autofocus_pane

0xba12,	// (0x00055978) cam6_image_uncrop_pane_ParamLimits

0xba12,	// (0x00055978) cam6_image_uncrop_pane

0xba35,	// (0x0005599b) cam6_indi_pane_ParamLimits

0xba35,	// (0x0005599b) cam6_indi_pane

0xba4f,	// (0x000559b5) cam6_mode_pane_ParamLimits

0xba4f,	// (0x000559b5) cam6_mode_pane

0xba63,	// (0x000559c9) cam6_timer_pane_ParamLimits

0xba63,	// (0x000559c9) cam6_timer_pane

0xba6f,	// (0x000559d5) cam6_zoom_pane_ParamLimits

0xba6f,	// (0x000559d5) cam6_zoom_pane

0xba85,	// (0x000559eb) cam6_mode_pane_g1_ParamLimits

0xba85,	// (0x000559eb) cam6_mode_pane_g1

0xba91,	// (0x000559f7) cam6_mode_pane_g2_ParamLimits

0xba91,	// (0x000559f7) cam6_mode_pane_g2

0xba9d,	// (0x00055a03) cam6_mode_pane_g3_ParamLimits

0xba9d,	// (0x00055a03) cam6_mode_pane_g3

0xbaa9,	// (0x00055a0f) cam6_mode_pane_g4_ParamLimits

0xbaa9,	// (0x00055a0f) cam6_mode_pane_g4

0x0003,

0xfb6a,	// (0x00059ad0) cam6_mode_pane_g_ParamLimits

0xfb6a,	// (0x00059ad0) cam6_mode_pane_g

0x1617,	// (0x0004b57d) bg_tb_trans_pane_cp08_ParamLimits

0x1617,	// (0x0004b57d) bg_tb_trans_pane_cp08

0x1625,	// (0x0004b58b) cam6_battery_pane_ParamLimits

0x1625,	// (0x0004b58b) cam6_battery_pane

0x163b,	// (0x0004b5a1) cam6_indi_pane_g1_ParamLimits

0x163b,	// (0x0004b5a1) cam6_indi_pane_g1

0x164d,	// (0x0004b5b3) cam6_indi_pane_g2_ParamLimits

0x164d,	// (0x0004b5b3) cam6_indi_pane_g2

0x165f,	// (0x0004b5c5) cam6_indi_pane_g3_ParamLimits

0x165f,	// (0x0004b5c5) cam6_indi_pane_g3

0x0002,

0xfb73,	// (0x00059ad9) cam6_indi_pane_g_ParamLimits

0xfb73,	// (0x00059ad9) cam6_indi_pane_g

0x1671,	// (0x0004b5d7) cam6_indi_pane_t1_ParamLimits

0x1671,	// (0x0004b5d7) cam6_indi_pane_t1

0xa774,	// (0x000546da) cam6_autofocus_pane_g1

0xa76c,	// (0x000546d2) cam6_autofocus_pane_g2

0xa784,	// (0x000546ea) cam6_autofocus_pane_g3

0xa77c,	// (0x000546e2) cam6_autofocus_pane_g4

0x0003,

0xfb7a,	// (0x00059ae0) cam6_autofocus_pane_g

0x1697,	// (0x0004b5fd) cam6_timer_pane_g1

0x169f,	// (0x0004b605) cam6_timer_pane_t1

0x16ad,	// (0x0004b613) cam6_zoom_cont_pane

0x16b5,	// (0x0004b61b) cam6_zoom_pane_g1

0x16bd,	// (0x0004b623) cam6_zoom_pane_g2

0xbab5,	// (0x00055a1b) cam6_zoom_pane_g3

0x0002,

0xfb83,	// (0x00059ae9) cam6_zoom_pane_g

0xe849,	// (0x000587af) cam6_battery_pane_g1

0xe849,	// (0x000587af) cam6_battery_pane_g2

0x0001,

0xf6ef,	// (0x00059655) cam6_battery_pane_g

0x16c5,	// (0x0004b62b) cam6_zoom_cont_pane_g1

0x16ce,	// (0x0004b634) cam6_zoom_cont_pane_g2

0x16d7,	// (0x0004b63d) cam6_zoom_cont_pane_g3

0x0002,

0xfb8a,	// (0x00059af0) cam6_zoom_cont_pane_g

0xbad2,	// (0x00055a38) cam6_mode_pane_cp_ParamLimits

0xbad2,	// (0x00055a38) cam6_mode_pane_cp

0xbae6,	// (0x00055a4c) cam6_zoom_pane_cp_ParamLimits

0xbae6,	// (0x00055a4c) cam6_zoom_pane_cp

0xbafc,	// (0x00055a62) vid6_image_uncrop_cif_pane_ParamLimits

0xbafc,	// (0x00055a62) vid6_image_uncrop_cif_pane

0xbb1e,	// (0x00055a84) vid6_image_uncrop_nhd_pane_ParamLimits

0xbb1e,	// (0x00055a84) vid6_image_uncrop_nhd_pane

0xbb35,	// (0x00055a9b) vid6_image_uncrop_vga_pane_ParamLimits

0xbb35,	// (0x00055a9b) vid6_image_uncrop_vga_pane

0xbb4c,	// (0x00055ab2) vid6_image_uncrop_wvga_pane_ParamLimits

0xbb4c,	// (0x00055ab2) vid6_image_uncrop_wvga_pane

0xbb63,	// (0x00055ac9) vid6_indi_pane_ParamLimits

0xbb63,	// (0x00055ac9) vid6_indi_pane

0x1617,	// (0x0004b57d) bg_tb_trans_pane_cp09_ParamLimits

0x1617,	// (0x0004b57d) bg_tb_trans_pane_cp09

0x16eb,	// (0x0004b651) cam6_battery_pane_cp_ParamLimits

0x16eb,	// (0x0004b651) cam6_battery_pane_cp

0x16f7,	// (0x0004b65d) vid6_indi_pane_g1_ParamLimits

0x16f7,	// (0x0004b65d) vid6_indi_pane_g1

0x1709,	// (0x0004b66f) vid6_indi_pane_g2_ParamLimits

0x1709,	// (0x0004b66f) vid6_indi_pane_g2

0x171b,	// (0x0004b681) vid6_indi_pane_g3_ParamLimits

0x171b,	// (0x0004b681) vid6_indi_pane_g3

0x1730,	// (0x0004b696) vid6_indi_pane_g4_ParamLimits

0x1730,	// (0x0004b696) vid6_indi_pane_g4

0x1745,	// (0x0004b6ab) vid6_indi_pane_g5_ParamLimits

0x1745,	// (0x0004b6ab) vid6_indi_pane_g5

0x0004,

0xfb91,	// (0x00059af7) vid6_indi_pane_g_ParamLimits

0xfb91,	// (0x00059af7) vid6_indi_pane_g

0x175f,	// (0x0004b6c5) vid6_indi_pane_t1_ParamLimits

0x175f,	// (0x0004b6c5) vid6_indi_pane_t1

0x1775,	// (0x0004b6db) vid6_indi_pane_t2_ParamLimits

0x1775,	// (0x0004b6db) vid6_indi_pane_t2

0x179d,	// (0x0004b703) vid6_indi_pane_t3_ParamLimits

0x179d,	// (0x0004b703) vid6_indi_pane_t3

0x17c5,	// (0x0004b72b) vid6_indi_pane_t4_ParamLimits

0x17c5,	// (0x0004b72b) vid6_indi_pane_t4

0x0003,

0xfb9c,	// (0x00059b02) vid6_indi_pane_t_ParamLimits

0xfb9c,	// (0x00059b02) vid6_indi_pane_t

0x17e9,	// (0x0004b74f) wait_bar_pane_cp08

0xbb83,	// (0x00055ae9) main_cset_text2_pane_t1_ParamLimits

0xbb83,	// (0x00055ae9) main_cset_text2_pane_t1

0xbabd,	// (0x00055a23) listscroll_gen_pane_cp06_t1_ParamLimits

0xbabd,	// (0x00055a23) listscroll_gen_pane_cp06_t1

0x5c4e,	// (0x0004fbb4) main_cam6_set_pane

0xa616,	// (0x0005457c) bg_tb_trans_pane_cp06_ParamLimits

0xa62c,	// (0x00054592) cam4_indicators_pane_g1_ParamLimits

0xa63d,	// (0x000545a3) cam4_indicators_pane_g2_ParamLimits

0xf90a,	// (0x00059870) cam4_indicators_pane_g_ParamLimits

0xa655,	// (0x000545bb) cam4_indicators_pane_t1_ParamLimits

0x87fc,	// (0x00052762) bg_tb_trans_pane_cp07_ParamLimits

0xa700,	// (0x00054666) vid4_indicators_pane_g1_ParamLimits

0xa714,	// (0x0005467a) vid4_indicators_pane_g2_ParamLimits

0xa728,	// (0x0005468e) vid4_indicators_pane_g3_ParamLimits

0xa739,	// (0x0005469f) vid4_indicators_pane_g4_ParamLimits

0xf91c,	// (0x00059882) vid4_indicators_pane_g_ParamLimits

0xa755,	// (0x000546bb) vid4_indicators_pane_t1_ParamLimits

0xb672,	// (0x000555d8) vid4_progress_pane_g1_ParamLimits

0xb682,	// (0x000555e8) vid4_progress_pane_g2_ParamLimits

0xb692,	// (0x000555f8) vid4_progress_pane_g3_ParamLimits

0xb6a2,	// (0x00055608) vid4_progress_pane_g4_ParamLimits

0xfacd,	// (0x00059a33) vid4_progress_pane_g_ParamLimits

0xb6c0,	// (0x00055626) vid4_progress_pane_t1_ParamLimits

0xb6d6,	// (0x0005563c) vid4_progress_pane_t2_ParamLimits

0xb6eb,	// (0x00055651) vid4_progress_pane_t3_ParamLimits

0xfad8,	// (0x00059a3e) vid4_progress_pane_t_ParamLimits

0xb701,	// (0x00055667) wait_bar_pane_cp07_ParamLimits

0xbb9f,	// (0x00055b05) main_cam6_set_pane_g2_ParamLimits

0xbb9f,	// (0x00055b05) main_cam6_set_pane_g2

0xbbab,	// (0x00055b11) main_cset6_listscroll_pane_ParamLimits

0xbbab,	// (0x00055b11) main_cset6_listscroll_pane

0xbbd4,	// (0x00055b3a) main_cset6_slider_pane_ParamLimits

0xbbd4,	// (0x00055b3a) main_cset6_slider_pane

0xbbe0,	// (0x00055b46) main_cset6_text2_pane_ParamLimits

0xbbe0,	// (0x00055b46) main_cset6_text2_pane

0x17f8,	// (0x0004b75e) main_cset6_text_pane

0x1800,	// (0x0004b766) main_cset_list_pane_copy1_ParamLimits

0x1800,	// (0x0004b766) main_cset_list_pane_copy1

0x1810,	// (0x0004b776) scroll_pane_cp028_copy1

0xbbf3,	// (0x00055b59) cset_list_set_pane_copy1

0xbbff,	// (0x00055b65) aid_position_infowindow_above_copy1

0xbc07,	// (0x00055b6d) aid_position_infowindow_below_copy1

0xbc0f,	// (0x00055b75) cset_list_set_pane_g1_copy1

0xbc17,	// (0x00055b7d) cset_list_set_pane_g3_copy1_ParamLimits

0xbc17,	// (0x00055b7d) cset_list_set_pane_g3_copy1

0xbc26,	// (0x00055b8c) cset_list_set_pane_t1_copy1_ParamLimits

0xbc26,	// (0x00055b8c) cset_list_set_pane_t1_copy1

0x4a02,	// (0x0004e968) list_highlight_pane_cp021_copy1_ParamLimits

0x4a02,	// (0x0004e968) list_highlight_pane_cp021_copy1

0x1819,	// (0x0004b77f) cset6_slider_pane_ParamLimits

0x1819,	// (0x0004b77f) cset6_slider_pane

0x1845,	// (0x0004b7ab) main_cset6_slider_pane_g1_ParamLimits

0x1845,	// (0x0004b7ab) main_cset6_slider_pane_g1

0xbc3b,	// (0x00055ba1) main_cset6_slider_pane_g2_ParamLimits

0xbc3b,	// (0x00055ba1) main_cset6_slider_pane_g2

0x101f,	// (0x0004af85) main_cset6_slider_pane_g3_ParamLimits

0x101f,	// (0x0004af85) main_cset6_slider_pane_g3

0xbc63,	// (0x00055bc9) main_cset6_slider_pane_g4_ParamLimits

0xbc63,	// (0x00055bc9) main_cset6_slider_pane_g4

0xbc6f,	// (0x00055bd5) main_cset6_slider_pane_g5_ParamLimits

0xbc6f,	// (0x00055bd5) main_cset6_slider_pane_g5

0x101f,	// (0x0004af85) main_cset6_slider_pane_g7_ParamLimits

0x101f,	// (0x0004af85) main_cset6_slider_pane_g7

0x102b,	// (0x0004af91) main_cset6_slider_pane_g8_ParamLimits

0x102b,	// (0x0004af91) main_cset6_slider_pane_g8

0xbc7b,	// (0x00055be1) main_cset6_slider_pane_g9_ParamLimits

0xbc7b,	// (0x00055be1) main_cset6_slider_pane_g9

0xbc87,	// (0x00055bed) main_cset6_slider_pane_g10_ParamLimits

0xbc87,	// (0x00055bed) main_cset6_slider_pane_g10

0xbc93,	// (0x00055bf9) main_cset6_slider_pane_g11_ParamLimits

0xbc93,	// (0x00055bf9) main_cset6_slider_pane_g11

0xbc9f,	// (0x00055c05) main_cset6_slider_pane_g12_ParamLimits

0xbc9f,	// (0x00055c05) main_cset6_slider_pane_g12

0xacb4,	// (0x00054c1a) main_cset6_slider_pane_g13_ParamLimits

0xacb4,	// (0x00054c1a) main_cset6_slider_pane_g13

0xacc0,	// (0x00054c26) main_cset6_slider_pane_g14_ParamLimits

0xacc0,	// (0x00054c26) main_cset6_slider_pane_g14

0xbcab,	// (0x00055c11) main_cset6_slider_pane_g15_ParamLimits

0xbcab,	// (0x00055c11) main_cset6_slider_pane_g15

0xbc6f,	// (0x00055bd5) main_cset6_slider_pane_g16_ParamLimits

0xbc6f,	// (0x00055bd5) main_cset6_slider_pane_g16

0xbcc3,	// (0x00055c29) main_cset6_slider_pane_g17_ParamLimits

0xbcc3,	// (0x00055c29) main_cset6_slider_pane_g17

0x0011,

0xfba5,	// (0x00059b0b) main_cset6_slider_pane_g_ParamLimits

0xfba5,	// (0x00059b0b) main_cset6_slider_pane_g

0x186d,	// (0x0004b7d3) main_cset6_slider_pane_t1_ParamLimits

0x186d,	// (0x0004b7d3) main_cset6_slider_pane_t1

0xbcdb,	// (0x00055c41) main_cset6_slider_pane_t2_ParamLimits

0xbcdb,	// (0x00055c41) main_cset6_slider_pane_t2

0xbd06,	// (0x00055c6c) main_cset6_slider_pane_t3_ParamLimits

0xbd06,	// (0x00055c6c) main_cset6_slider_pane_t3

0xbd31,	// (0x00055c97) main_cset6_slider_pane_t4_ParamLimits

0xbd31,	// (0x00055c97) main_cset6_slider_pane_t4

0xbd5c,	// (0x00055cc2) main_cset6_slider_pane_t5_ParamLimits

0xbd5c,	// (0x00055cc2) main_cset6_slider_pane_t5

0x18ae,	// (0x0004b814) main_cset6_slider_pane_t7_ParamLimits

0x18ae,	// (0x0004b814) main_cset6_slider_pane_t7

0xbd87,	// (0x00055ced) main_cset6_slider_pane_t8_ParamLimits

0xbd87,	// (0x00055ced) main_cset6_slider_pane_t8

0xbdab,	// (0x00055d11) main_cset6_slider_pane_t9_ParamLimits

0xbdab,	// (0x00055d11) main_cset6_slider_pane_t9

0xbdcf,	// (0x00055d35) main_cset6_slider_pane_t10_ParamLimits

0xbdcf,	// (0x00055d35) main_cset6_slider_pane_t10

0xbdf3,	// (0x00055d59) main_cset6_slider_pane_t11_ParamLimits

0xbdf3,	// (0x00055d59) main_cset6_slider_pane_t11

0x18e4,	// (0x0004b84a) main_cset6_slider_pane_t14_ParamLimits

0x18e4,	// (0x0004b84a) main_cset6_slider_pane_t14

0x191d,	// (0x0004b883) main_cset6_slider_pane_t15_ParamLimits

0x191d,	// (0x0004b883) main_cset6_slider_pane_t15

0x000b,

0xfbca,	// (0x00059b30) main_cset6_slider_pane_t_ParamLimits

0xfbca,	// (0x00059b30) main_cset6_slider_pane_t

0x10fb,	// (0x0004b061) cset_slider_pane_g1_copy1

0x1104,	// (0x0004b06a) cset_slider_pane_g2_copy1

0x110d,	// (0x0004b073) cset_slider_pane_g3_copy1

0x2d35,	// (0x0004cc9b) bg_popup_sub_pane_cp011_copy1

0x1956,	// (0x0004b8bc) main_cset_text_pane_g1_copy1

0x1196,	// (0x0004b0fc) main_cset_text_pane_t1_copy1

0x11a4,	// (0x0004b10a) main_cset_text_pane_t2_copy1

0x11b2,	// (0x0004b118) main_cset_text_pane_t3_copy1

0x11c0,	// (0x0004b126) main_cset_text_pane_t4_copy1

0x195e,	// (0x0004b8c4) main_cset_text_pane_t5_copy1

0x196c,	// (0x0004b8d2) main_cset_text_pane_t6_copy1

0x197a,	// (0x0004b8e0) main_cset_text_pane_t7_copy1

0x2be9,	// (0x0004cb4f) main_cset_text2_pane_t1_copy1

0x87fc,	// (0x00052762) main_ncimui_pane

0x8855,	// (0x000527bb) popup_query_ncimui_window_ParamLimits

0x8855,	// (0x000527bb) popup_query_ncimui_window

0x09c5,	// (0x0004a92b) field_cale_ev2_pane_g4_ParamLimits

0x09c5,	// (0x0004a92b) field_cale_ev2_pane_g4

0x9fc5,	// (0x00053f2b) cell_video_dialer_keypad_pane_g2_ParamLimits

0x9fc5,	// (0x00053f2b) cell_video_dialer_keypad_pane_g2

0x0001,

0xf8a8,	// (0x0005980e) cell_video_dialer_keypad_pane_g_ParamLimits

0xf8a8,	// (0x0005980e) cell_video_dialer_keypad_pane_g

0x9fdd,	// (0x00053f43) cell_video_dialer_keypad_pane_t1

0x2d35,	// (0x0004cc9b) bg_popup_window_pane_cp012

0x3e41,	// (0x0004dda7) heading_pane_cp06

0x19a6,	// (0x0004b90c) ncim_query_content_pane

0x2d35,	// (0x0004cc9b) bg_popup_heading_pane_cp01

0x19ae,	// (0x0004b914) ncim_heading_pane_t1

0x19bc,	// (0x0004b922) ncim_indicator_popup_pane

0x19ce,	// (0x0004b934) ncim_query_button_pane

0x19e2,	// (0x0004b948) ncim_query_content_pane_t1

0x19f4,	// (0x0004b95a) ncim_query_content_pane_t2

0x0005,

0xfc0e,	// (0x00059b74) ncim_query_content_pane_t

0x1a2e,	// (0x0004b994) ncim_query_list_pane

0x1a40,	// (0x0004b9a6) ncim_query_popup_pane

0x19bc,	// (0x0004b922) ncim_indicator_popup_pane_ParamLimits

0xc00f,	// (0x00055f75) ncim_query_content_pane_g1_ParamLimits

0xc00f,	// (0x00055f75) ncim_query_content_pane_g1

0x19e2,	// (0x0004b948) ncim_query_content_pane_t1_ParamLimits

0x19f4,	// (0x0004b95a) ncim_query_content_pane_t2_ParamLimits

0xc01b,	// (0x00055f81) ncim_query_content_pane_t3_ParamLimits

0xc01b,	// (0x00055f81) ncim_query_content_pane_t3

0xc038,	// (0x00055f9e) ncim_query_content_pane_t4_ParamLimits

0xc038,	// (0x00055f9e) ncim_query_content_pane_t4

0xc055,	// (0x00055fbb) ncim_query_content_pane_t5_ParamLimits

0xc055,	// (0x00055fbb) ncim_query_content_pane_t5

0x1a06,	// (0x0004b96c) ncim_query_content_pane_t6_ParamLimits

0x1a06,	// (0x0004b96c) ncim_query_content_pane_t6

0xfc0e,	// (0x00059b74) ncim_query_content_pane_t_ParamLimits

0x1a2e,	// (0x0004b994) ncim_query_list_pane_ParamLimits

0x1a40,	// (0x0004b9a6) ncim_query_popup_pane_ParamLimits

0x1a54,	// (0x0004b9ba) wait_bar_pane_cp04

0x2d35,	// (0x0004cc9b) input_focus_pane_cp011

0x1a5c,	// (0x0004b9c2) ncim_query_popup_pane_t1

0x1a6a,	// (0x0004b9d0) ncim_list_query_list_pane_ParamLimits

0x1a6a,	// (0x0004b9d0) ncim_list_query_list_pane

0x2d35,	// (0x0004cc9b) bg_button_pane_cp027

0x1a7d,	// (0x0004b9e3) ncim_query_button_pane_g1

0x2d35,	// (0x0004cc9b) list_highlight_pane_cp012

0x1a87,	// (0x0004b9ed) ncim_list_query_list_pane_g1

0x1a8f,	// (0x0004b9f5) ncim_list_query_list_pane_t1

0xa649,	// (0x000545af) cam4_indicators_pane_g3_ParamLimits

0xa649,	// (0x000545af) cam4_indicators_pane_g3

0xa745,	// (0x000546ab) vid4_indicators_pane_g5_ParamLimits

0xa745,	// (0x000546ab) vid4_indicators_pane_g5

0xb6b1,	// (0x00055617) vid4_progress_pane_g5_ParamLimits

0xb6b1,	// (0x00055617) vid4_progress_pane_g5

0xbefe,	// (0x00055e64) main_ncimui_pane_g1

0xbf64,	// (0x00055eca) ncimui_group_query_pane_ParamLimits

0xbf64,	// (0x00055eca) ncimui_group_query_pane

0xbfac,	// (0x00055f12) ncimui_list_pane_ParamLimits

0xbfac,	// (0x00055f12) ncimui_list_pane

0xbfd2,	// (0x00055f38) ncimui_text_pane_ParamLimits

0xbfd2,	// (0x00055f38) ncimui_text_pane

0xc072,	// (0x00055fd8) ncimui_text_pane_t1_ParamLimits

0xc072,	// (0x00055fd8) ncimui_text_pane_t1

0x1a9d,	// (0x0004ba03) ncimui_list_single_graphic_pane_ParamLimits

0x1a9d,	// (0x0004ba03) ncimui_list_single_graphic_pane

0xc091,	// (0x00055ff7) ncimui_query_pane_ParamLimits

0xc091,	// (0x00055ff7) ncimui_query_pane

0x2d35,	// (0x0004cc9b) list_highlight_pane_cp013

0x1aad,	// (0x0004ba13) ncim_list_query_list_pane_t1_copy1

0x1abb,	// (0x0004ba21) ncim_list_single_graphic_pane_g1

0xc0a4,	// (0x0005600a) ncim_query_button_pane_cp01

0xc0b0,	// (0x00056016) ncim_query_entry_pane_ParamLimits

0xc0b0,	// (0x00056016) ncim_query_entry_pane

0xc0c3,	// (0x00056029) ncimui_query_pane_g1

0xc0cf,	// (0x00056035) ncimui_query_pane_t1_ParamLimits

0xc0cf,	// (0x00056035) ncimui_query_pane_t1

0x4a02,	// (0x0004e968) input_focus_pane_cp012

0x1ac3,	// (0x0004ba29) ncim_query_entry_pane_t1

0x359b,	// (0x0004d501) main_im_pane_ParamLimits

0x87fc,	// (0x00052762) main_mobtv_pane_ParamLimits

0x87fc,	// (0x00052762) main_mobtv_pane

0xbc7b,	// (0x00055be1) main_cset6_slider_pane_g18_ParamLimits

0xbc7b,	// (0x00055be1) main_cset6_slider_pane_g18

0xbccf,	// (0x00055c35) main_cset6_slider_pane_g19_ParamLimits

0xbccf,	// (0x00055c35) main_cset6_slider_pane_g19

0x0e89,	// (0x0004adef) bg_main_mobtv_pane_ParamLimits

0x0e89,	// (0x0004adef) bg_main_mobtv_pane

0xc0e8,	// (0x0005604e) main_mobtv_info_pane

0xc0f1,	// (0x00056057) main_mobtv_loading_pane_ParamLimits

0xc0f1,	// (0x00056057) main_mobtv_loading_pane

0x1ae3,	// (0x0004ba49) main_mobtv_pg_channel_list_pane

0x1aed,	// (0x0004ba53) main_mobtv_pg_hdr_pane

0xc0fe,	// (0x00056064) main_mobtv_programe_curr_pane_ParamLimits

0xc0fe,	// (0x00056064) main_mobtv_programe_curr_pane

0xc10b,	// (0x00056071) main_mobtv_programe_next_pane_ParamLimits

0xc10b,	// (0x00056071) main_mobtv_programe_next_pane

0x1af6,	// (0x0004ba5c) popup_mobtv_noti_window

0xe849,	// (0x000587af) main_tv_pg_hdr_pane_g1

0x1afe,	// (0x0004ba64) main_tv_pg_hdr_pane_g2

0x1b06,	// (0x0004ba6c) main_tv_pg_hdr_pane_g3

0x1b0e,	// (0x0004ba74) main_tv_pg_hdr_pane_g4

0x1b16,	// (0x0004ba7c) main_tv_pg_hdr_pane_g5

0x1b1e,	// (0x0004ba84) main_tv_pg_hdr_pane_g6

0x1b26,	// (0x0004ba8c) main_tv_pg_hdr_pane_g7

0x1b2e,	// (0x0004ba94) main_tv_pg_hdr_pane_g8

0x1b36,	// (0x0004ba9c) main_tv_pg_hdr_pane_g9

0x1b3e,	// (0x0004baa4) main_tv_pg_hdr_pane_g10

0x1b48,	// (0x0004baae) main_tv_pg_hdr_pane_g11

0x000a,

0xfc1b,	// (0x00059b81) main_tv_pg_hdr_pane_g

0x1b52,	// (0x0004bab8) main_tv_pg_hdr_pane_t1

0x1b60,	// (0x0004bac6) main_tv_pg_hdr_pane_t2

0x1b6e,	// (0x0004bad4) main_tv_pg_hdr_pane_t3

0x1b7c,	// (0x0004bae2) main_tv_pg_hdr_pane_t4

0x1b8a,	// (0x0004baf0) main_tv_pg_hdr_pane_t5

0x0004,

0xfc32,	// (0x00059b98) main_tv_pg_hdr_pane_t

0x1b98,	// (0x0004bafe) single_mobtv_pg_channel_pane_ParamLimits

0x1b98,	// (0x0004bafe) single_mobtv_pg_channel_pane

0x1baa,	// (0x0004bb10) single_mobtv_pg_channel_table_pane

0x1bb3,	// (0x0004bb19) single_mobtv_pg_channel_thumb_pane

0x1bbc,	// (0x0004bb22) single_tv_pg_channel_pane_g1

0x1bc5,	// (0x0004bb2b) single_tv_pg_channel_pane_g2

0x0001,

0xfc3d,	// (0x00059ba3) single_tv_pg_channel_pane_g

0xea78,	// (0x000589de) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xea78,	// (0x000589de) bg_single_mobtv_pg_channel_thumb_pane

0x1bce,	// (0x0004bb34) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0x1bce,	// (0x0004bb34) single_mobtv_pg_channel_thumb_pane_g1

0x1bdc,	// (0x0004bb42) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0x1bdc,	// (0x0004bb42) single_mobtv_pg_channel_thumb_pane_g2

0x1be8,	// (0x0004bb4e) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0x1be8,	// (0x0004bb4e) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfc42,	// (0x00059ba8) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfc42,	// (0x00059ba8) single_mobtv_pg_channel_thumb_pane_g

0x1bf4,	// (0x0004bb5a) single_mobtv_pg_channel_thumb_pane_t1

0x1c02,	// (0x0004bb68) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc49,	// (0x00059baf) single_mobtv_pg_channel_thumb_pane_t

0xe849,	// (0x000587af) bg_single_mobtv_pg_channel_table_pane_g1

0xe849,	// (0x000587af) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf6ef,	// (0x00059655) bg_single_mobtv_pg_channel_table_pane_g

0x1c10,	// (0x0004bb76) single_mobtv_pg_channel_table_pane_t1

0x1c1e,	// (0x0004bb84) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc4e,	// (0x00059bb4) single_mobtv_pg_channel_table_pane_t

0xc120,	// (0x00056086) main_mobtv_info_pane_g1_ParamLimits

0xc120,	// (0x00056086) main_mobtv_info_pane_g1

0xc13c,	// (0x000560a2) main_mobtv_info_pane_t1_ParamLimits

0xc13c,	// (0x000560a2) main_mobtv_info_pane_t1

0xc1a2,	// (0x00056108) main_mobtv_info_pane_t2_ParamLimits

0xc1a2,	// (0x00056108) main_mobtv_info_pane_t2

0x0002,

0xfc58,	// (0x00059bbe) main_mobtv_info_pane_t_ParamLimits

0xfc58,	// (0x00059bbe) main_mobtv_info_pane_t

0xc225,	// (0x0005618b) wait_bar_pane_cp05

0xc235,	// (0x0005619b) main_mobtv_loading_pane_g1_ParamLimits

0xc235,	// (0x0005619b) main_mobtv_loading_pane_g1

0xc241,	// (0x000561a7) main_mobtv_loading_pane_g2_ParamLimits

0xc241,	// (0x000561a7) main_mobtv_loading_pane_g2

0xc24d,	// (0x000561b3) main_mobtv_loading_pane_g3_ParamLimits

0xc24d,	// (0x000561b3) main_mobtv_loading_pane_g3

0x0002,

0xfc5f,	// (0x00059bc5) main_mobtv_loading_pane_g_ParamLimits

0xfc5f,	// (0x00059bc5) main_mobtv_loading_pane_g

0x1c2c,	// (0x0004bb92) main_mobtv_loading_pane_t1_ParamLimits

0x1c2c,	// (0x0004bb92) main_mobtv_loading_pane_t1

0x1c44,	// (0x0004bbaa) main_mobtv_loading_pane_t2_ParamLimits

0x1c44,	// (0x0004bbaa) main_mobtv_loading_pane_t2

0x0001,

0xfc66,	// (0x00059bcc) main_mobtv_loading_pane_t_ParamLimits

0xfc66,	// (0x00059bcc) main_mobtv_loading_pane_t

0xc259,	// (0x000561bf) wait_bar_pane_cp06_ParamLimits

0xc259,	// (0x000561bf) wait_bar_pane_cp06

0x1c68,	// (0x0004bbce) main_mobtv_programe_curr_pane_t1

0x1c76,	// (0x0004bbdc) main_mobtv_programe_curr_pane_t2

0x0001,

0xfc6b,	// (0x00059bd1) main_mobtv_programe_curr_pane_t

0x1c84,	// (0x0004bbea) main_mobtv_programe_next_pane_t1

0x1c92,	// (0x0004bbf8) main_mobtv_programe_next_pane_t2

0x1ca0,	// (0x0004bc06) main_mobtv_programe_next_pane_t3

0x0002,

0xfc70,	// (0x00059bd6) main_mobtv_programe_next_pane_t

0x2d35,	// (0x0004cc9b) bg_popup_mobtv_noti_window_pane

0x1cae,	// (0x0004bc14) popup_mobtv_noti_window_g1

0x1cb6,	// (0x0004bc1c) popup_mobtv_noti_window_t1

0x1cc4,	// (0x0004bc2a) popup_mobtv_noti_window_t2

0x0001,

0xfc77,	// (0x00059bdd) popup_mobtv_noti_window_t

0xe849,	// (0x000587af) bg_popup_mobtv_noti_window_pane_g1

0x5c4e,	// (0x0004fbb4) sc_clock_pane

0x5c4e,	// (0x0004fbb4) main_fs_bigclock_pane

0xb8ab,	// (0x00055811) blid2_tripm_pane_t4_ParamLimits

0xb8ab,	// (0x00055811) blid2_tripm_pane_t4

0xc265,	// (0x000561cb) sc_clock_pane_g1_ParamLimits

0xc265,	// (0x000561cb) sc_clock_pane_g1

0xc273,	// (0x000561d9) sc_clock_pane_t1_ParamLimits

0xc273,	// (0x000561d9) sc_clock_pane_t1

0xc286,	// (0x000561ec) sc_clock_pane_t2_ParamLimits

0xc286,	// (0x000561ec) sc_clock_pane_t2

0xc298,	// (0x000561fe) sc_clock_pane_t3_ParamLimits

0xc298,	// (0x000561fe) sc_clock_pane_t3

0x0004,

0xfc7c,	// (0x00059be2) sc_clock_pane_t_ParamLimits

0xfc7c,	// (0x00059be2) sc_clock_pane_t

0xd038,	// (0x00056f9e) main_fs_bigclock_indicator_pane_ParamLimits

0xd038,	// (0x00056f9e) main_fs_bigclock_indicator_pane

0xc30d,	// (0x00056273) main_fs_bigclock_pane_g1_ParamLimits

0xc30d,	// (0x00056273) main_fs_bigclock_pane_g1

0xd044,	// (0x00056faa) main_fs_bigclock_pane_t1_ParamLimits

0xd044,	// (0x00056faa) main_fs_bigclock_pane_t1

0xd056,	// (0x00056fbc) main_fs_bigclock_pane_t2_ParamLimits

0xd056,	// (0x00056fbc) main_fs_bigclock_pane_t2

0xd068,	// (0x00056fce) main_fs_bigclock_pane_t3_ParamLimits

0xd068,	// (0x00056fce) main_fs_bigclock_pane_t3

0x0002,

0xfe86,	// (0x00059dec) main_fs_bigclock_pane_t_ParamLimits

0xfe86,	// (0x00059dec) main_fs_bigclock_pane_t

0x28db,	// (0x0004c841) main_fs_bigclock_indicator_pane_g1

0x19d6,	// (0x0004b93c) ncim_query_content_pane_g2_ParamLimits

0x19d6,	// (0x0004b93c) ncim_query_content_pane_g2

0x0001,

0xfc09,	// (0x00059b6f) ncim_query_content_pane_g_ParamLimits

0xfc09,	// (0x00059b6f) ncim_query_content_pane_g

0xc2aa,	// (0x00056210) sc_clock_pane_t4_ParamLimits

0xc2aa,	// (0x00056210) sc_clock_pane_t4

0x87fc,	// (0x00052762) main_radioblah_pane

0x0cf1,	// (0x0004ac57) cell_call4_button_pane_t1_copy1_ParamLimits

0x0cf1,	// (0x0004ac57) cell_call4_button_pane_t1_copy1

0xbf16,	// (0x00055e7c) main_ncimui_pane_t1_ParamLimits

0xbf16,	// (0x00055e7c) main_ncimui_pane_t1

0xbf30,	// (0x00055e96) main_ncimui_pane_t2_ParamLimits

0xbf30,	// (0x00055e96) main_ncimui_pane_t2

0x0002,

0xfc02,	// (0x00059b68) main_ncimui_pane_t_ParamLimits

0xfc02,	// (0x00059b68) main_ncimui_pane_t

0x1e05,	// (0x0004bd6b) main_radioblah_anim_pane_ParamLimits

0x1e05,	// (0x0004bd6b) main_radioblah_anim_pane

0x1e16,	// (0x0004bd7c) main_radioblah_info_pane_ParamLimits

0x1e16,	// (0x0004bd7c) main_radioblah_info_pane

0x1e2a,	// (0x0004bd90) main_radioblah_pane_t1_ParamLimits

0x1e2a,	// (0x0004bd90) main_radioblah_pane_t1

0x1e46,	// (0x0004bdac) main_radioblah_pane_t2_ParamLimits

0x1e46,	// (0x0004bdac) main_radioblah_pane_t2

0x0003,

0xfc9d,	// (0x00059c03) main_radioblah_pane_t_ParamLimits

0xfc9d,	// (0x00059c03) main_radioblah_pane_t

0xc357,	// (0x000562bd) main_radioblah_rocker_ctrl_pane_ParamLimits

0xc357,	// (0x000562bd) main_radioblah_rocker_ctrl_pane

0x1e8e,	// (0x0004bdf4) main_radioblah_info_pane_t1_ParamLimits

0x1e8e,	// (0x0004bdf4) main_radioblah_info_pane_t1

0xc39c,	// (0x00056302) main_radioblah_info_pane_t2_ParamLimits

0xc39c,	// (0x00056302) main_radioblah_info_pane_t2

0x0003,

0xfca6,	// (0x00059c0c) main_radioblah_info_pane_t_ParamLimits

0xfca6,	// (0x00059c0c) main_radioblah_info_pane_t

0xe849,	// (0x000587af) main_radioblah_rocker_ctrl_pane_g1

0xc444,	// (0x000563aa) main_radioblah_rocker_ctrl_pane_g2

0xc44c,	// (0x000563b2) main_radioblah_rocker_ctrl_pane_g3

0xc454,	// (0x000563ba) main_radioblah_rocker_ctrl_pane_g4

0xc45c,	// (0x000563c2) main_radioblah_rocker_ctrl_pane_g5

0xc464,	// (0x000563ca) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfcaf,	// (0x00059c15) main_radioblah_rocker_ctrl_pane_g

0x2be9,	// (0x0004cb4f) main_cset_text2_pane_t1_copy1_ParamLimits

0xa56e,	// (0x000544d4) cam4_image_uncrop_qvga_pane

0xa6b9,	// (0x0005461f) vid4_image_uncrop_qcif_pane

0xba29,	// (0x0005598f) cam6_image_uncrop_qvga_pane_ParamLimits

0xba29,	// (0x0005598f) cam6_image_uncrop_qvga_pane

0x16df,	// (0x0004b645) vid6_image_uncrop_qcif_pane_ParamLimits

0x16df,	// (0x0004b645) vid6_image_uncrop_qcif_pane

0x2d35,	// (0x0004cc9b) bg_popup_preview_window_pane_cp03

0x1988,	// (0x0004b8ee) list_cset_text2_pane

0x1990,	// (0x0004b8f6) main_cset6_text2_pane_g1

0x1998,	// (0x0004b8fe) main_cset6_text2_pane_t1

0xc46c,	// (0x000563d2) list_cset_text2_pane_t1_ParamLimits

0xc46c,	// (0x000563d2) list_cset_text2_pane_t1

0x87fc,	// (0x00052762) main_radioblah_pane_ParamLimits

0xc213,	// (0x00056179) main_mobtv_info_pane_t3_ParamLimits

0xc213,	// (0x00056179) main_mobtv_info_pane_t3

0xc345,	// (0x000562ab) main_radioblah_pane_g1

0xc370,	// (0x000562d6) main_radioblah_info_pane_g1

0xc3eb,	// (0x00056351) main_radioblah_info_pane_t3_ParamLimits

0xc3eb,	// (0x00056351) main_radioblah_info_pane_t3

0x7682,	// (0x000515e8) highlight_cell_cale_month_pane_ParamLimits

0x7682,	// (0x000515e8) highlight_cell_cale_month_pane

0x5c4e,	// (0x0004fbb4) main_phob_fisheye_pane

0xeb54,	// (0x00058aba) scroll_pane_cp0031_ParamLimits

0xeb54,	// (0x00058aba) scroll_pane_cp0031

0x17e9,	// (0x0004b74f) wait_bar_pane_cp08_ParamLimits

0xbbf3,	// (0x00055b59) cset_list_set_pane_copy1_ParamLimits

0x1edf,	// (0x0004be45) highlight_cell_cale_month_pane_g1

0xc481,	// (0x000563e7) highlight_cell_cale_month_pane_t1

0x1458,	// (0x0004b3be) list_gen_pane_cp01

0x0fe0,	// (0x0004af46) scroll_pane_01

0xc48f,	// (0x000563f5) list_single_double_fisheye_pane

0xc498,	// (0x000563fe) list_double_fisheye_pane_g1_ParamLimits

0xc498,	// (0x000563fe) list_double_fisheye_pane_g1

0xc4a4,	// (0x0005640a) list_double_fisheye_pane_g2_ParamLimits

0xc4a4,	// (0x0005640a) list_double_fisheye_pane_g2

0xc4b8,	// (0x0005641e) list_double_fisheye_pane_g3_ParamLimits

0xc4b8,	// (0x0005641e) list_double_fisheye_pane_g3

0x0004,

0xfcbc,	// (0x00059c22) list_double_fisheye_pane_g_ParamLimits

0xfcbc,	// (0x00059c22) list_double_fisheye_pane_g

0xc4e1,	// (0x00056447) list_double_fisheye_pane_t1_ParamLimits

0xc4e1,	// (0x00056447) list_double_fisheye_pane_t1

0xc4fc,	// (0x00056462) list_double_fisheye_pane_t2_ParamLimits

0xc4fc,	// (0x00056462) list_double_fisheye_pane_t2

0x0001,

0xfcc7,	// (0x00059c2d) list_double_fisheye_pane_t_ParamLimits

0xfcc7,	// (0x00059c2d) list_double_fisheye_pane_t

0x5c4e,	// (0x0004fbb4) main_call5_pane

0xc2d0,	// (0x00056236) sc_swipe_pane_ParamLimits

0xc2d0,	// (0x00056236) sc_swipe_pane

0xc52a,	// (0x00056490) call5_image_pane_ParamLimits

0xc52a,	// (0x00056490) call5_image_pane

0xc536,	// (0x0005649c) call5_swipe_1_pane_ParamLimits

0xc536,	// (0x0005649c) call5_swipe_1_pane

0xc542,	// (0x000564a8) call5_swipe_2_pane_ParamLimits

0xc542,	// (0x000564a8) call5_swipe_2_pane

0xc55a,	// (0x000564c0) popup_call5_audio_first_window_ParamLimits

0xc55a,	// (0x000564c0) popup_call5_audio_first_window

0xea78,	// (0x000589de) call5_swipe_1_pane_g1_ParamLimits

0xea78,	// (0x000589de) call5_swipe_1_pane_g1

0x1ee7,	// (0x0004be4d) call5_swipe_1_pane_g2_ParamLimits

0x1ee7,	// (0x0004be4d) call5_swipe_1_pane_g2

0x0001,

0xfccc,	// (0x00059c32) call5_swipe_1_pane_g_ParamLimits

0xfccc,	// (0x00059c32) call5_swipe_1_pane_g

0x1ef3,	// (0x0004be59) call5_swipe_1_pane_t1_ParamLimits

0x1ef3,	// (0x0004be59) call5_swipe_1_pane_t1

0xea78,	// (0x000589de) call5_swipe_2_pane_g1_ParamLimits

0xea78,	// (0x000589de) call5_swipe_2_pane_g1

0x1f08,	// (0x0004be6e) call5_swipe_2_pane_g2_ParamLimits

0x1f08,	// (0x0004be6e) call5_swipe_2_pane_g2

0x0001,

0xfcd1,	// (0x00059c37) call5_swipe_2_pane_g_ParamLimits

0xfcd1,	// (0x00059c37) call5_swipe_2_pane_g

0x1f14,	// (0x0004be7a) call5_swipe_2_pane_t1_ParamLimits

0x1f14,	// (0x0004be7a) call5_swipe_2_pane_t1

0x1f29,	// (0x0004be8f) sc_swipe_pane_g1_ParamLimits

0x1f29,	// (0x0004be8f) sc_swipe_pane_g1

0x1f36,	// (0x0004be9c) sc_swipe_pane_g2_ParamLimits

0x1f36,	// (0x0004be9c) sc_swipe_pane_g2

0x0001,

0xfcd6,	// (0x00059c3c) sc_swipe_pane_g_ParamLimits

0xfcd6,	// (0x00059c3c) sc_swipe_pane_g

0x1f42,	// (0x0004bea8) sc_swipe_pane_t1_ParamLimits

0x1f42,	// (0x0004bea8) sc_swipe_pane_t1

0x5c4e,	// (0x0004fbb4) main_cmail_launcher_pane

0xc566,	// (0x000564cc) aid_size_cell_cmail_l_ParamLimits

0xc566,	// (0x000564cc) aid_size_cell_cmail_l

0xc576,	// (0x000564dc) grid_cmail_l_pane_ParamLimits

0xc576,	// (0x000564dc) grid_cmail_l_pane

0xc582,	// (0x000564e8) cell_cmail_l_pane_ParamLimits

0xc582,	// (0x000564e8) cell_cmail_l_pane

0xc594,	// (0x000564fa) cell_cmail_l_pane_g1_ParamLimits

0xc594,	// (0x000564fa) cell_cmail_l_pane_g1

0xc5a5,	// (0x0005650b) cell_cmail_l_pane_t1_ParamLimits

0xc5a5,	// (0x0005650b) cell_cmail_l_pane_t1

0x1f57,	// (0x0004bebd) cell_cmail_l_pane_t2_ParamLimits

0x1f57,	// (0x0004bebd) cell_cmail_l_pane_t2

0x0001,

0xfcdb,	// (0x00059c41) cell_cmail_l_pane_t_ParamLimits

0xfcdb,	// (0x00059c41) cell_cmail_l_pane_t

0x4a02,	// (0x0004e968) grid_highlight_pane_cp018_ParamLimits

0x4a02,	// (0x0004e968) grid_highlight_pane_cp018

0x5ab6,	// (0x0004fa1c) main2_pane_ParamLimits

0x5ab6,	// (0x0004fa1c) main2_pane

0x3646,	// (0x0004d5ac) popup_sp_fs_action_menu_bg_pane_g1

0x364e,	// (0x0004d5b4) popup_sp_fs_action_menu_bg_pane_g2

0x3656,	// (0x0004d5bc) popup_sp_fs_action_menu_bg_pane_g3

0x365e,	// (0x0004d5c4) popup_sp_fs_action_menu_bg_pane_g4

0x3666,	// (0x0004d5cc) popup_sp_fs_action_menu_bg_pane_g5

0x366e,	// (0x0004d5d4) popup_sp_fs_action_menu_bg_pane_g6

0x3676,	// (0x0004d5dc) popup_sp_fs_action_menu_bg_pane_g7

0x367e,	// (0x0004d5e4) popup_sp_fs_action_menu_bg_pane_g8

0x3686,	// (0x0004d5ec) popup_sp_fs_action_menu_bg_pane_g9

0x368e,	// (0x0004d5f4) popup_sp_fs_action_menu_bg_pane_g10

0x368e,	// (0x0004d5f4) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf18a,	// (0x000590f0) popup_sp_fs_action_menu_bg_pane_g

0x6a7b,	// (0x000509e1) list_medium_line_x2_t3_g3_g1_ParamLimits

0x6a7b,	// (0x000509e1) list_medium_line_x2_t3_g3_g1

0x6a87,	// (0x000509ed) list_medium_line_x2_t3_g3_g2_ParamLimits

0x6a87,	// (0x000509ed) list_medium_line_x2_t3_g3_g2

0x6a93,	// (0x000509f9) list_medium_line_x2_t3_g3_g3_ParamLimits

0x6a93,	// (0x000509f9) list_medium_line_x2_t3_g3_g3

0x0002,

0xf238,	// (0x0005919e) list_medium_line_x2_t3_g3_g_ParamLimits

0xf238,	// (0x0005919e) list_medium_line_x2_t3_g3_g

0x6a9f,	// (0x00050a05) list_medium_line_x2_t3_g3_t1_ParamLimits

0x6a9f,	// (0x00050a05) list_medium_line_x2_t3_g3_t1

0x6ab4,	// (0x00050a1a) list_medium_line_x2_t3_g3_t2_ParamLimits

0x6ab4,	// (0x00050a1a) list_medium_line_x2_t3_g3_t2

0x6ac6,	// (0x00050a2c) list_medium_line_x2_t3_g3_t3_ParamLimits

0x6ac6,	// (0x00050a2c) list_medium_line_x2_t3_g3_t3

0x0002,

0xf23f,	// (0x000591a5) list_medium_line_x2_t3_g3_t_ParamLimits

0xf23f,	// (0x000591a5) list_medium_line_x2_t3_g3_t

0x6a7b,	// (0x000509e1) list_medium_line_x2_t3_g2_g1_ParamLimits

0x6a7b,	// (0x000509e1) list_medium_line_x2_t3_g2_g1

0x6a93,	// (0x000509f9) list_medium_line_x2_t3_g2_g2_ParamLimits

0x6a93,	// (0x000509f9) list_medium_line_x2_t3_g2_g2

0x0001,

0xf246,	// (0x000591ac) list_medium_line_x2_t3_g2_g_ParamLimits

0xf246,	// (0x000591ac) list_medium_line_x2_t3_g2_g

0x6adb,	// (0x00050a41) list_medium_line_x2_t3_g2_t1_ParamLimits

0x6adb,	// (0x00050a41) list_medium_line_x2_t3_g2_t1

0x6af1,	// (0x00050a57) list_medium_line_x2_t3_g2_t2_ParamLimits

0x6af1,	// (0x00050a57) list_medium_line_x2_t3_g2_t2

0x6b03,	// (0x00050a69) list_medium_line_x2_t3_g2_t3_ParamLimits

0x6b03,	// (0x00050a69) list_medium_line_x2_t3_g2_t3

0x0002,

0xf24b,	// (0x000591b1) list_medium_line_x2_t3_g2_t_ParamLimits

0xf24b,	// (0x000591b1) list_medium_line_x2_t3_g2_t

0x6a7b,	// (0x000509e1) list_medium_line_x2_t4_g4_g1_ParamLimits

0x6a7b,	// (0x000509e1) list_medium_line_x2_t4_g4_g1

0x6b21,	// (0x00050a87) list_medium_line_x2_t4_g4_g2_ParamLimits

0x6b21,	// (0x00050a87) list_medium_line_x2_t4_g4_g2

0x6a87,	// (0x000509ed) list_medium_line_x2_t4_g4_g3_ParamLimits

0x6a87,	// (0x000509ed) list_medium_line_x2_t4_g4_g3

0x6b2d,	// (0x00050a93) list_medium_line_x2_t4_g4_g4_ParamLimits

0x6b2d,	// (0x00050a93) list_medium_line_x2_t4_g4_g4

0x0003,

0xf252,	// (0x000591b8) list_medium_line_x2_t4_g4_g_ParamLimits

0xf252,	// (0x000591b8) list_medium_line_x2_t4_g4_g

0x6b39,	// (0x00050a9f) list_medium_line_x2_t4_g4_t1_ParamLimits

0x6b39,	// (0x00050a9f) list_medium_line_x2_t4_g4_t1

0x6b53,	// (0x00050ab9) list_medium_line_x2_t4_g4_t2_ParamLimits

0x6b53,	// (0x00050ab9) list_medium_line_x2_t4_g4_t2

0x6b69,	// (0x00050acf) list_medium_line_x2_t4_g4_t3_ParamLimits

0x6b69,	// (0x00050acf) list_medium_line_x2_t4_g4_t3

0x6b7e,	// (0x00050ae4) list_medium_line_x2_t4_g4_t4_ParamLimits

0x6b7e,	// (0x00050ae4) list_medium_line_x2_t4_g4_t4

0x0003,

0xf25b,	// (0x000591c1) list_medium_line_x2_t4_g4_t_ParamLimits

0xf25b,	// (0x000591c1) list_medium_line_x2_t4_g4_t

0x6a7b,	// (0x000509e1) list_medium_line_x2_t2_g4_g1_ParamLimits

0x6a7b,	// (0x000509e1) list_medium_line_x2_t2_g4_g1

0x6b21,	// (0x00050a87) list_medium_line_x2_t2_g4_g2_ParamLimits

0x6b21,	// (0x00050a87) list_medium_line_x2_t2_g4_g2

0x6a87,	// (0x000509ed) list_medium_line_x2_t2_g4_g3_ParamLimits

0x6a87,	// (0x000509ed) list_medium_line_x2_t2_g4_g3

0x6a93,	// (0x000509f9) list_medium_line_x2_t2_g4_g4_ParamLimits

0x6a93,	// (0x000509f9) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2c2,	// (0x00059228) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2c2,	// (0x00059228) list_medium_line_x2_t2_g4_g

0x76a8,	// (0x0005160e) list_medium_line_x2_t2_g4_t1_ParamLimits

0x76a8,	// (0x0005160e) list_medium_line_x2_t2_g4_t1

0x6ac6,	// (0x00050a2c) list_medium_line_x2_t2_g4_t2_ParamLimits

0x6ac6,	// (0x00050a2c) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2cb,	// (0x00059231) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2cb,	// (0x00059231) list_medium_line_x2_t2_g4_t

0x6a7b,	// (0x000509e1) list_medium_line_x2_t2_g3_g1_ParamLimits

0x6a7b,	// (0x000509e1) list_medium_line_x2_t2_g3_g1

0x6a87,	// (0x000509ed) list_medium_line_x2_t2_g3_g2_ParamLimits

0x6a87,	// (0x000509ed) list_medium_line_x2_t2_g3_g2

0x6a93,	// (0x000509f9) list_medium_line_x2_t2_g3_g3_ParamLimits

0x6a93,	// (0x000509f9) list_medium_line_x2_t2_g3_g3

0x0002,

0xf238,	// (0x0005919e) list_medium_line_x2_t2_g3_g_ParamLimits

0xf238,	// (0x0005919e) list_medium_line_x2_t2_g3_g

0x76bd,	// (0x00051623) list_medium_line_x2_t2_g3_t1_ParamLimits

0x76bd,	// (0x00051623) list_medium_line_x2_t2_g3_t1

0x6ac6,	// (0x00050a2c) list_medium_line_x2_t2_g3_t2_ParamLimits

0x6ac6,	// (0x00050a2c) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2d0,	// (0x00059236) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2d0,	// (0x00059236) list_medium_line_x2_t2_g3_t

0x7817,	// (0x0005177d) main_sp_fs_list_pane_ParamLimits

0x7817,	// (0x0005177d) main_sp_fs_list_pane

0x7823,	// (0x00051789) sp_fs_scroll_pane_ParamLimits

0x7823,	// (0x00051789) sp_fs_scroll_pane

0x782f,	// (0x00051795) list_medium_line_x2_t3_t1

0x783f,	// (0x000517a5) list_medium_line_x2_t3_t2

0x784d,	// (0x000517b3) list_medium_line_x2_t3_t3

0x0002,

0xf31b,	// (0x00059281) list_medium_line_x2_t3_t

0x785b,	// (0x000517c1) list_medium_line_x3_t4_t1

0x786b,	// (0x000517d1) list_medium_line_x3_t4_t2

0x7879,	// (0x000517df) list_medium_line_x3_t4_t3

0x784d,	// (0x000517b3) list_medium_line_x3_t4_t4

0x0003,

0xf322,	// (0x00059288) list_medium_line_x3_t4_t

0x7887,	// (0x000517ed) list_medium_line_x4_t5_t1

0x7897,	// (0x000517fd) list_medium_line_x4_t5_t2

0x7879,	// (0x000517df) list_medium_line_x4_t5_t3

0x78a5,	// (0x0005180b) list_medium_line_x4_t5_t4

0x784d,	// (0x000517b3) list_medium_line_x4_t5_t5

0x0004,

0xf32b,	// (0x00059291) list_medium_line_x4_t5_t

0x6a7b,	// (0x000509e1) list_medium_line_t4_g4_g1_ParamLimits

0x6a7b,	// (0x000509e1) list_medium_line_t4_g4_g1

0x6b2d,	// (0x00050a93) list_medium_line_t4_g4_g2_ParamLimits

0x6b2d,	// (0x00050a93) list_medium_line_t4_g4_g2

0x78b3,	// (0x00051819) list_medium_line_t4_g4_g3_ParamLimits

0x78b3,	// (0x00051819) list_medium_line_t4_g4_g3

0x6a93,	// (0x000509f9) list_medium_line_t4_g4_g4_ParamLimits

0x6a93,	// (0x000509f9) list_medium_line_t4_g4_g4

0x0003,

0xf336,	// (0x0005929c) list_medium_line_t4_g4_g_ParamLimits

0xf336,	// (0x0005929c) list_medium_line_t4_g4_g

0x78bf,	// (0x00051825) list_medium_line_t4_g4_t1_ParamLimits

0x78bf,	// (0x00051825) list_medium_line_t4_g4_t1

0x78d4,	// (0x0005183a) list_medium_line_t4_g4_t2_ParamLimits

0x78d4,	// (0x0005183a) list_medium_line_t4_g4_t2

0x78ea,	// (0x00051850) list_medium_line_t4_g4_t3_ParamLimits

0x78ea,	// (0x00051850) list_medium_line_t4_g4_t3

0x6ac6,	// (0x00050a2c) list_medium_line_t4_g4_t4_ParamLimits

0x6ac6,	// (0x00050a2c) list_medium_line_t4_g4_t4

0x0003,

0xf33f,	// (0x000592a5) list_medium_line_t4_g4_t_ParamLimits

0xf33f,	// (0x000592a5) list_medium_line_t4_g4_t

0x7a1e,	// (0x00051984) chi_dic_find_pane_g1

0x8818,	// (0x0005277e) main_tport_pane

0xafbc,	// (0x00054f22) list_medium_line_plain_t1

0xb09a,	// (0x00055000) list_medium_line_t2_g2_g1_ParamLimits

0xb09a,	// (0x00055000) list_medium_line_t2_g2_g1

0xb0a6,	// (0x0005500c) list_medium_line_t2_g2_g2_ParamLimits

0xb0a6,	// (0x0005500c) list_medium_line_t2_g2_g2

0x0001,

0xfa13,	// (0x00059979) list_medium_line_t2_g2_g_ParamLimits

0xfa13,	// (0x00059979) list_medium_line_t2_g2_g

0xb0b2,	// (0x00055018) list_medium_line_t2_g2_t1_ParamLimits

0xb0b2,	// (0x00055018) list_medium_line_t2_g2_t1

0xb0cc,	// (0x00055032) list_medium_line_t2_g2_t2_ParamLimits

0xb0cc,	// (0x00055032) list_medium_line_t2_g2_t2

0x0001,

0xfa18,	// (0x0005997e) list_medium_line_t2_g2_t_ParamLimits

0xfa18,	// (0x0005997e) list_medium_line_t2_g2_t

0x1461,	// (0x0004b3c7) aid_sp_fs_list_icon_a_sm

0x1469,	// (0x0004b3cf) aid_sp_fs_list_icon_d

0x1471,	// (0x0004b3d7) aid_sp_fs_text_primary

0x147a,	// (0x0004b3e0) aid_sp_fs_text_secondary

0xb712,	// (0x00055678) list_medium_line

0xb712,	// (0x00055678) list_medium_line_g2

0xb712,	// (0x00055678) list_medium_line_g3

0xb712,	// (0x00055678) list_medium_line_plain

0xb712,	// (0x00055678) list_medium_line_plain_t2

0xb712,	// (0x00055678) list_medium_line_plain_t3

0xb712,	// (0x00055678) list_medium_line_right_icon

0xb712,	// (0x00055678) list_medium_line_right_iconx2

0xb712,	// (0x00055678) list_medium_line_t2

0xb712,	// (0x00055678) list_medium_line_t2_g2

0xb712,	// (0x00055678) list_medium_line_t2_g3

0xb712,	// (0x00055678) list_medium_line_t2_right_icon

0xb712,	// (0x00055678) list_medium_line_t2_right_iconx2

0xb712,	// (0x00055678) list_medium_line_t3

0xb712,	// (0x00055678) list_medium_line_t3_g2

0xb712,	// (0x00055678) list_medium_line_t3_g3

0xb712,	// (0x00055678) list_medium_line_t3_right_iconx2

0xb71b,	// (0x00055681) list_medium_line_t4_g4

0xb712,	// (0x00055678) list_medium_line_x2

0xb712,	// (0x00055678) list_medium_line_x2_t2_g2

0xb712,	// (0x00055678) list_medium_line_x2_t2_g3

0xb712,	// (0x00055678) list_medium_line_x2_t2_g4

0xb712,	// (0x00055678) list_medium_line_x2_t3

0xb712,	// (0x00055678) list_medium_line_x2_t3_g2

0xb712,	// (0x00055678) list_medium_line_x2_t3_g3

0xb712,	// (0x00055678) list_medium_line_x2_t3_g4

0xb712,	// (0x00055678) list_medium_line_x2_t4_g2

0xb712,	// (0x00055678) list_medium_line_x2_t4_g4

0xb724,	// (0x0005568a) list_medium_line_x3

0xb724,	// (0x0005568a) list_medium_line_x3_t4

0xb724,	// (0x0005568a) list_medium_line_x3_t4_g4

0xb71b,	// (0x00055681) list_medium_line_x4_t4

0xb71b,	// (0x00055681) list_medium_line_x4_t4_g7

0xb71b,	// (0x00055681) list_medium_line_x4_t5

0xb72d,	// (0x00055693) list_single_fs_dyc_pane_ParamLimits

0xb72d,	// (0x00055693) list_single_fs_dyc_pane

0x6a7b,	// (0x000509e1) list_medium_line_x4_t4_g7_g1_ParamLimits

0x6a7b,	// (0x000509e1) list_medium_line_x4_t4_g7_g1

0xbe17,	// (0x00055d7d) list_medium_line_x4_t4_g7_g2_ParamLimits

0xbe17,	// (0x00055d7d) list_medium_line_x4_t4_g7_g2

0xbe23,	// (0x00055d89) list_medium_line_x4_t4_g7_g3_ParamLimits

0xbe23,	// (0x00055d89) list_medium_line_x4_t4_g7_g3

0xbe32,	// (0x00055d98) list_medium_line_x4_t4_g7_g4_ParamLimits

0xbe32,	// (0x00055d98) list_medium_line_x4_t4_g7_g4

0xbe3e,	// (0x00055da4) list_medium_line_x4_t4_g7_g5_ParamLimits

0xbe3e,	// (0x00055da4) list_medium_line_x4_t4_g7_g5

0xbe4d,	// (0x00055db3) list_medium_line_x4_t4_g7_g6_ParamLimits

0xbe4d,	// (0x00055db3) list_medium_line_x4_t4_g7_g6

0xbe5c,	// (0x00055dc2) list_medium_line_x4_t4_g7_g7_ParamLimits

0xbe5c,	// (0x00055dc2) list_medium_line_x4_t4_g7_g7

0x0006,

0xfbe3,	// (0x00059b49) list_medium_line_x4_t4_g7_g_ParamLimits

0xfbe3,	// (0x00059b49) list_medium_line_x4_t4_g7_g

0xbe68,	// (0x00055dce) list_medium_line_x4_t4_g7_t1_ParamLimits

0xbe68,	// (0x00055dce) list_medium_line_x4_t4_g7_t1

0xbe7d,	// (0x00055de3) list_medium_line_x4_t4_g7_t2_ParamLimits

0xbe7d,	// (0x00055de3) list_medium_line_x4_t4_g7_t2

0xbe92,	// (0x00055df8) list_medium_line_x4_t4_g7_t3_ParamLimits

0xbe92,	// (0x00055df8) list_medium_line_x4_t4_g7_t3

0xbea7,	// (0x00055e0d) list_medium_line_x4_t4_g7_t4_ParamLimits

0xbea7,	// (0x00055e0d) list_medium_line_x4_t4_g7_t4

0xbeb9,	// (0x00055e1f) list_medium_line_x4_t4_g7_t5_ParamLimits

0xbeb9,	// (0x00055e1f) list_medium_line_x4_t4_g7_t5

0x0004,

0xfbf2,	// (0x00059b58) list_medium_line_x4_t4_g7_t_ParamLimits

0xfbf2,	// (0x00059b58) list_medium_line_x4_t4_g7_t

0xbecb,	// (0x00055e31) list_single_dyc_row_pane_ParamLimits

0xbecb,	// (0x00055e31) list_single_dyc_row_pane

0xc51e,	// (0x00056484) call5_gesture_pane_ParamLimits

0xc51e,	// (0x00056484) call5_gesture_pane

0xc54e,	// (0x000564b4) call5_windows_pane_ParamLimits

0xc54e,	// (0x000564b4) call5_windows_pane

0xc5bb,	// (0x00056521) call5_swipe_1_pane_cp_ParamLimits

0xc5bb,	// (0x00056521) call5_swipe_1_pane_cp

0xc5c7,	// (0x0005652d) call5_swipe_2_pane_cp_ParamLimits

0xc5c7,	// (0x0005652d) call5_swipe_2_pane_cp

0x374c,	// (0x0004d6b2) call5_image_pane_cp

0xc5d3,	// (0x00056539) popup_call5_audio_first_window_cp_ParamLimits

0xc5d3,	// (0x00056539) popup_call5_audio_first_window_cp

0x1f29,	// (0x0004be8f) call5_swipe_1_pane_g1_cp_ParamLimits

0x1f29,	// (0x0004be8f) call5_swipe_1_pane_g1_cp

0x1f69,	// (0x0004becf) call5_swipe_1_pane_g2_cp

0x1f42,	// (0x0004bea8) call5_swipe_1_pane_t1_cp_ParamLimits

0x1f42,	// (0x0004bea8) call5_swipe_1_pane_t1_cp

0x1f29,	// (0x0004be8f) call5_swipe_2_pane_g1_cp_ParamLimits

0x1f29,	// (0x0004be8f) call5_swipe_2_pane_g1_cp

0x1f71,	// (0x0004bed7) call5_swipe_2_pane_g2_cp

0x1f79,	// (0x0004bedf) call5_swipe_2_pane_t1_cp_ParamLimits

0x1f79,	// (0x0004bedf) call5_swipe_2_pane_t1_cp

0x4a02,	// (0x0004e968) main_sp_fs_email_pane

0x1f8e,	// (0x0004bef4) main_sp_fs_listscroll_pane_te

0xc5df,	// (0x00056545) popup_sp_fs_action_menu_pane_ParamLimits

0xc5df,	// (0x00056545) popup_sp_fs_action_menu_pane

0xe849,	// (0x000587af) bg_sp_fs_ctrlbar_pane_g1

0xf09b,	// (0x00059001) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xf0a4,	// (0x0005900a) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xf0ad,	// (0x00059013) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xe849,	// (0x000587af) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfce0,	// (0x00059c46) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xe636,	// (0x0005859c) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xe636,	// (0x0005859c) bg_sp_fs_ctrlbar_ddmenu_pane

0x1f97,	// (0x0004befd) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0x1f97,	// (0x0004befd) main_sp_fs_ctrlbar_ddmenu_pane_g1

0x1fa3,	// (0x0004bf09) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0x1fa3,	// (0x0004bf09) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfce9,	// (0x00059c4f) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfce9,	// (0x00059c4f) main_sp_fs_ctrlbar_ddmenu_pane_g

0x1faf,	// (0x0004bf15) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0x1faf,	// (0x0004bf15) main_sp_fs_ctrlbar_ddmenu_pane_t1

0xc611,	// (0x00056577) list_medium_line_t2_right_icon_g1

0xc619,	// (0x0005657f) list_medium_line_t2_right_icon_t1

0xc628,	// (0x0005658e) list_medium_line_t2_right_icon_t2

0x0001,

0xfcee,	// (0x00059c54) list_medium_line_t2_right_icon_t

0xe449,	// (0x000583af) bg_sp_fs_ctrlbar_pane_ParamLimits

0xe449,	// (0x000583af) bg_sp_fs_ctrlbar_pane

0xc68b,	// (0x000565f1) main_sp_fs_ctrlbar_button_pane_cp01

0xc693,	// (0x000565f9) main_sp_fs_ctrlbar_ddmenu_pane

0x2001,	// (0x0004bf67) main_sp_fs_ctrlbar_pane_g1

0x200d,	// (0x0004bf73) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfcf3,	// (0x00059c59) main_sp_fs_ctrlbar_pane_g

0x2019,	// (0x0004bf7f) main_sp_fs_ctrlbar_pane_t1

0xc69d,	// (0x00056603) main_sp_fs_ctrlbar_pane

0xc6b3,	// (0x00056619) main_sp_fs_listscroll_pane_te_cp01

0xc6c4,	// (0x0005662a) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0xc6c4,	// (0x0005662a) popup_sp_fs_action_menu_pane_cp01

0x4a02,	// (0x0004e968) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0x4a02,	// (0x0004e968) bg_sp_fs_highlight_list_pane_cp01

0x2049,	// (0x0004bfaf) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0x2049,	// (0x0004bfaf) sp_fs_action_menu_list_gene_pane_g1

0x2058,	// (0x0004bfbe) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0x2058,	// (0x0004bfbe) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfcfd,	// (0x00059c63) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfcfd,	// (0x00059c63) sp_fs_action_menu_list_gene_pane_g

0x2065,	// (0x0004bfcb) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0x2065,	// (0x0004bfcb) sp_fs_action_menu_list_gene_pane_t1

0x207d,	// (0x0004bfe3) sp_fs_action_menu_list_gene_pane_ParamLimits

0x207d,	// (0x0004bfe3) sp_fs_action_menu_list_gene_pane

0x209a,	// (0x0004c000) popup_sp_fs_action_menu_bg_pane_ParamLimits

0x209a,	// (0x0004c000) popup_sp_fs_action_menu_bg_pane

0x20a8,	// (0x0004c00e) sp_fs_action_menu_list_pane_ParamLimits

0x20a8,	// (0x0004c00e) sp_fs_action_menu_list_pane

0x20c6,	// (0x0004c02c) sp_fs_scroll_pane_cp01_ParamLimits

0x20c6,	// (0x0004c02c) sp_fs_scroll_pane_cp01

0xc6e4,	// (0x0005664a) list_medium_line_plain_t2_t1

0xc6f3,	// (0x00056659) list_medium_line_plain_t2_t2

0x0001,

0xfd02,	// (0x00059c68) list_medium_line_plain_t2_t

0xc701,	// (0x00056667) list_medium_line_plain_t3_t1

0xc711,	// (0x00056677) list_medium_line_plain_t3_t2

0xc71f,	// (0x00056685) list_medium_line_plain_t3_t3

0x0002,

0xfd07,	// (0x00059c6d) list_medium_line_plain_t3_t

0x6a7b,	// (0x000509e1) list_medium_line_x2_t2_g2_g1_ParamLimits

0x6a7b,	// (0x000509e1) list_medium_line_x2_t2_g2_g1

0x6a93,	// (0x000509f9) list_medium_line_x2_t2_g2_g2_ParamLimits

0x6a93,	// (0x000509f9) list_medium_line_x2_t2_g2_g2

0x0001,

0xf246,	// (0x000591ac) list_medium_line_x2_t2_g2_g_ParamLimits

0xf246,	// (0x000591ac) list_medium_line_x2_t2_g2_g

0x78bf,	// (0x00051825) list_medium_line_x2_t2_g2_t1_ParamLimits

0x78bf,	// (0x00051825) list_medium_line_x2_t2_g2_t1

0x6ac6,	// (0x00050a2c) list_medium_line_x2_t2_g2_t2_ParamLimits

0x6ac6,	// (0x00050a2c) list_medium_line_x2_t2_g2_t2

0x0001,

0xfd0e,	// (0x00059c74) list_medium_line_x2_t2_g2_t_ParamLimits

0xfd0e,	// (0x00059c74) list_medium_line_x2_t2_g2_t

0x6a7b,	// (0x000509e1) list_medium_line_x2_t4_g2_g1_ParamLimits

0x6a7b,	// (0x000509e1) list_medium_line_x2_t4_g2_g1

0xc72d,	// (0x00056693) list_medium_line_x2_t4_g2_g2_ParamLimits

0xc72d,	// (0x00056693) list_medium_line_x2_t4_g2_g2

0x0001,

0xfd13,	// (0x00059c79) list_medium_line_x2_t4_g2_g_ParamLimits

0xfd13,	// (0x00059c79) list_medium_line_x2_t4_g2_g

0xc73f,	// (0x000566a5) list_medium_line_x2_t4_g2_t1_ParamLimits

0xc73f,	// (0x000566a5) list_medium_line_x2_t4_g2_t1

0xc759,	// (0x000566bf) list_medium_line_x2_t4_g2_t2_ParamLimits

0xc759,	// (0x000566bf) list_medium_line_x2_t4_g2_t2

0xc76f,	// (0x000566d5) list_medium_line_x2_t4_g2_t3_ParamLimits

0xc76f,	// (0x000566d5) list_medium_line_x2_t4_g2_t3

0x6ac6,	// (0x00050a2c) list_medium_line_x2_t4_g2_t4_ParamLimits

0x6ac6,	// (0x00050a2c) list_medium_line_x2_t4_g2_t4

0x0003,

0xfd18,	// (0x00059c7e) list_medium_line_x2_t4_g2_t_ParamLimits

0xfd18,	// (0x00059c7e) list_medium_line_x2_t4_g2_t

0xc784,	// (0x000566ea) list_medium_line_t3_right_iconx2_g1

0xc611,	// (0x00056577) list_medium_line_t3_right_iconx2_g2

0xc78c,	// (0x000566f2) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfd21,	// (0x00059c87) list_medium_line_t3_right_iconx2_g

0xc794,	// (0x000566fa) list_medium_line_t3_right_iconx2_t1

0xc7a4,	// (0x0005670a) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfd28,	// (0x00059c8e) list_medium_line_t3_right_iconx2_t

0x6a7b,	// (0x000509e1) list_medium_line_x3_t4_g4_g1_ParamLimits

0x6a7b,	// (0x000509e1) list_medium_line_x3_t4_g4_g1

0x6a87,	// (0x000509ed) list_medium_line_x3_t4_g4_g2_ParamLimits

0x6a87,	// (0x000509ed) list_medium_line_x3_t4_g4_g2

0x6b2d,	// (0x00050a93) list_medium_line_x3_t4_g4_g3_ParamLimits

0x6b2d,	// (0x00050a93) list_medium_line_x3_t4_g4_g3

0xc7b2,	// (0x00056718) list_medium_line_x3_t4_g4_g4_ParamLimits

0xc7b2,	// (0x00056718) list_medium_line_x3_t4_g4_g4

0x0003,

0xfd2d,	// (0x00059c93) list_medium_line_x3_t4_g4_g_ParamLimits

0xfd2d,	// (0x00059c93) list_medium_line_x3_t4_g4_g

0xc7be,	// (0x00056724) list_medium_line_x3_t4_g4_t1_ParamLimits

0xc7be,	// (0x00056724) list_medium_line_x3_t4_g4_t1

0xc7d5,	// (0x0005673b) list_medium_line_x3_t4_g4_t2_ParamLimits

0xc7d5,	// (0x0005673b) list_medium_line_x3_t4_g4_t2

0xc7ea,	// (0x00056750) list_medium_line_x3_t4_g4_t3_ParamLimits

0xc7ea,	// (0x00056750) list_medium_line_x3_t4_g4_t3

0xc7ff,	// (0x00056765) list_medium_line_x3_t4_g4_t4_ParamLimits

0xc7ff,	// (0x00056765) list_medium_line_x3_t4_g4_t4

0x0003,

0xfd36,	// (0x00059c9c) list_medium_line_x3_t4_g4_t_ParamLimits

0xfd36,	// (0x00059c9c) list_medium_line_x3_t4_g4_t

0xc81c,	// (0x00056782) list_single_dyc_row_text_pane_t1_ParamLimits

0xc81c,	// (0x00056782) list_single_dyc_row_text_pane_t1

0xc853,	// (0x000567b9) list_single_dyc_row_text_pane_t2_ParamLimits

0xc853,	// (0x000567b9) list_single_dyc_row_text_pane_t2

0x20ec,	// (0x0004c052) list_single_dyc_row_text_pane_t3_ParamLimits

0x20ec,	// (0x0004c052) list_single_dyc_row_text_pane_t3

0x0005,

0xfd3f,	// (0x00059ca5) list_single_dyc_row_text_pane_t_ParamLimits

0xfd3f,	// (0x00059ca5) list_single_dyc_row_text_pane_t

0x2110,	// (0x0004c076) list_single_dyc_row_pane_g1_ParamLimits

0x2110,	// (0x0004c076) list_single_dyc_row_pane_g1

0x211c,	// (0x0004c082) list_single_dyc_row_pane_g2_ParamLimits

0x211c,	// (0x0004c082) list_single_dyc_row_pane_g2

0x2128,	// (0x0004c08e) list_single_dyc_row_pane_g3_ParamLimits

0x2128,	// (0x0004c08e) list_single_dyc_row_pane_g3

0x2134,	// (0x0004c09a) list_single_dyc_row_pane_g4_ParamLimits

0x2134,	// (0x0004c09a) list_single_dyc_row_pane_g4

0x0003,

0xfd4c,	// (0x00059cb2) list_single_dyc_row_pane_g_ParamLimits

0xfd4c,	// (0x00059cb2) list_single_dyc_row_pane_g

0x2140,	// (0x0004c0a6) list_single_dyc_row_text_pane_ParamLimits

0x2140,	// (0x0004c0a6) list_single_dyc_row_text_pane

0x2d35,	// (0x0004cc9b) bg_sp_fs_scroll_pane

0x215f,	// (0x0004c0c5) thumb_sp_fs_scroll_pane

0xb09a,	// (0x00055000) list_medium_line_g1_ParamLimits

0xb09a,	// (0x00055000) list_medium_line_g1

0xc96a,	// (0x000568d0) list_medium_line_t1_ParamLimits

0xc96a,	// (0x000568d0) list_medium_line_t1

0x6a7b,	// (0x000509e1) list_medium_line_x2_g1_ParamLimits

0x6a7b,	// (0x000509e1) list_medium_line_x2_g1

0x6a87,	// (0x000509ed) list_medium_line_x2_g2_ParamLimits

0x6a87,	// (0x000509ed) list_medium_line_x2_g2

0x0001,

0xfd55,	// (0x00059cbb) list_medium_line_x2_g_ParamLimits

0xfd55,	// (0x00059cbb) list_medium_line_x2_g

0x2168,	// (0x0004c0ce) list_medium_line_x2_t1_ParamLimits

0x2168,	// (0x0004c0ce) list_medium_line_x2_t1

0x6a7b,	// (0x000509e1) list_medium_line_x3_g1_ParamLimits

0x6a7b,	// (0x000509e1) list_medium_line_x3_g1

0x6a87,	// (0x000509ed) list_medium_line_x3_g2_ParamLimits

0x6a87,	// (0x000509ed) list_medium_line_x3_g2

0x0001,

0xfd55,	// (0x00059cbb) list_medium_line_x3_g_ParamLimits

0xfd55,	// (0x00059cbb) list_medium_line_x3_g

0x2168,	// (0x0004c0ce) list_medium_line_x3_t1_ParamLimits

0x2168,	// (0x0004c0ce) list_medium_line_x3_t1

0x217e,	// (0x0004c0e4) thumb_sp_fs_scroll_pane_g1

0x2187,	// (0x0004c0ed) thumb_sp_fs_scroll_pane_g2

0x2190,	// (0x0004c0f6) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfd5a,	// (0x00059cc0) thumb_sp_fs_scroll_pane_g

0x217e,	// (0x0004c0e4) bg_sp_fs_scroll_pane_g1

0x2187,	// (0x0004c0ed) bg_sp_fs_scroll_pane_g2

0x2190,	// (0x0004c0f6) bg_sp_fs_scroll_pane_g3

0x0002,

0xfd5a,	// (0x00059cc0) bg_sp_fs_scroll_pane_g

0x6a7b,	// (0x000509e1) list_medium_line_x2_t3_g4_g1_ParamLimits

0x6a7b,	// (0x000509e1) list_medium_line_x2_t3_g4_g1

0x6b21,	// (0x00050a87) list_medium_line_x2_t3_g4_g2_ParamLimits

0x6b21,	// (0x00050a87) list_medium_line_x2_t3_g4_g2

0x6a87,	// (0x000509ed) list_medium_line_x2_t3_g4_g3_ParamLimits

0x6a87,	// (0x000509ed) list_medium_line_x2_t3_g4_g3

0x6a93,	// (0x000509f9) list_medium_line_x2_t3_g4_g4_ParamLimits

0x6a93,	// (0x000509f9) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2c2,	// (0x00059228) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2c2,	// (0x00059228) list_medium_line_x2_t3_g4_g

0xc97f,	// (0x000568e5) list_medium_line_x2_t3_g4_t1_ParamLimits

0xc97f,	// (0x000568e5) list_medium_line_x2_t3_g4_t1

0xc995,	// (0x000568fb) list_medium_line_x2_t3_g4_t2_ParamLimits

0xc995,	// (0x000568fb) list_medium_line_x2_t3_g4_t2

0x6ac6,	// (0x00050a2c) list_medium_line_x2_t3_g4_t3_ParamLimits

0x6ac6,	// (0x00050a2c) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd61,	// (0x00059cc7) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd61,	// (0x00059cc7) list_medium_line_x2_t3_g4_t

0xb09a,	// (0x00055000) list_medium_line_g2_g1_ParamLimits

0xb09a,	// (0x00055000) list_medium_line_g2_g1

0xb0a6,	// (0x0005500c) list_medium_line_g2_g2_ParamLimits

0xb0a6,	// (0x0005500c) list_medium_line_g2_g2

0x0001,

0xfa13,	// (0x00059979) list_medium_line_g2_g_ParamLimits

0xfa13,	// (0x00059979) list_medium_line_g2_g

0xc9af,	// (0x00056915) list_medium_line_g2_t1_ParamLimits

0xc9af,	// (0x00056915) list_medium_line_g2_t1

0xb09a,	// (0x00055000) list_medium_line_t3_g2_g1_ParamLimits

0xb09a,	// (0x00055000) list_medium_line_t3_g2_g1

0xb0a6,	// (0x0005500c) list_medium_line_t3_g2_g2_ParamLimits

0xb0a6,	// (0x0005500c) list_medium_line_t3_g2_g2

0x0001,

0xfa13,	// (0x00059979) list_medium_line_t3_g2_g_ParamLimits

0xfa13,	// (0x00059979) list_medium_line_t3_g2_g

0xc9c4,	// (0x0005692a) list_medium_line_t3_g2_t1_ParamLimits

0xc9c4,	// (0x0005692a) list_medium_line_t3_g2_t1

0xc9de,	// (0x00056944) list_medium_line_t3_g2_t2_ParamLimits

0xc9de,	// (0x00056944) list_medium_line_t3_g2_t2

0xc9f4,	// (0x0005695a) list_medium_line_t3_g2_t3_ParamLimits

0xc9f4,	// (0x0005695a) list_medium_line_t3_g2_t3

0x0002,

0xfd68,	// (0x00059cce) list_medium_line_t3_g2_t_ParamLimits

0xfd68,	// (0x00059cce) list_medium_line_t3_g2_t

0xc611,	// (0x00056577) list_medium_line_right_icon_g1

0xca0a,	// (0x00056970) list_medium_line_right_icon_t1

0xb09a,	// (0x00055000) list_medium_line_t2_g1_ParamLimits

0xb09a,	// (0x00055000) list_medium_line_t2_g1

0xca18,	// (0x0005697e) list_medium_line_t2_t1_ParamLimits

0xca18,	// (0x0005697e) list_medium_line_t2_t1

0xca30,	// (0x00056996) list_medium_line_t2_t2_ParamLimits

0xca30,	// (0x00056996) list_medium_line_t2_t2

0x0001,

0xfd6f,	// (0x00059cd5) list_medium_line_t2_t_ParamLimits

0xfd6f,	// (0x00059cd5) list_medium_line_t2_t

0xb09a,	// (0x00055000) list_medium_line_t3_g1_ParamLimits

0xb09a,	// (0x00055000) list_medium_line_t3_g1

0xca45,	// (0x000569ab) list_medium_line_t3_t1_ParamLimits

0xca45,	// (0x000569ab) list_medium_line_t3_t1

0xca5f,	// (0x000569c5) list_medium_line_t3_t2_ParamLimits

0xca5f,	// (0x000569c5) list_medium_line_t3_t2

0xca75,	// (0x000569db) list_medium_line_t3_t3_ParamLimits

0xca75,	// (0x000569db) list_medium_line_t3_t3

0x0002,

0xfd74,	// (0x00059cda) list_medium_line_t3_t_ParamLimits

0xfd74,	// (0x00059cda) list_medium_line_t3_t

0xb09a,	// (0x00055000) list_medium_line_g3_g1_ParamLimits

0xb09a,	// (0x00055000) list_medium_line_g3_g1

0xca8a,	// (0x000569f0) list_medium_line_g3_g2_ParamLimits

0xca8a,	// (0x000569f0) list_medium_line_g3_g2

0xb0a6,	// (0x0005500c) list_medium_line_g3_g3_ParamLimits

0xb0a6,	// (0x0005500c) list_medium_line_g3_g3

0x0002,

0xfd7b,	// (0x00059ce1) list_medium_line_g3_g_ParamLimits

0xfd7b,	// (0x00059ce1) list_medium_line_g3_g

0xca96,	// (0x000569fc) list_medium_line_g3_t1_ParamLimits

0xca96,	// (0x000569fc) list_medium_line_g3_t1

0xb09a,	// (0x00055000) list_medium_line_t2_g3_g1_ParamLimits

0xb09a,	// (0x00055000) list_medium_line_t2_g3_g1

0xca8a,	// (0x000569f0) list_medium_line_t2_g3_g2_ParamLimits

0xca8a,	// (0x000569f0) list_medium_line_t2_g3_g2

0xb0a6,	// (0x0005500c) list_medium_line_t2_g3_g3_ParamLimits

0xb0a6,	// (0x0005500c) list_medium_line_t2_g3_g3

0x0002,

0xfd7b,	// (0x00059ce1) list_medium_line_t2_g3_g_ParamLimits

0xfd7b,	// (0x00059ce1) list_medium_line_t2_g3_g

0xcaab,	// (0x00056a11) list_medium_line_t2_g3_t1_ParamLimits

0xcaab,	// (0x00056a11) list_medium_line_t2_g3_t1

0xcac5,	// (0x00056a2b) list_medium_line_t2_g3_t2_ParamLimits

0xcac5,	// (0x00056a2b) list_medium_line_t2_g3_t2

0x0001,

0xfd82,	// (0x00059ce8) list_medium_line_t2_g3_t_ParamLimits

0xfd82,	// (0x00059ce8) list_medium_line_t2_g3_t

0xb09a,	// (0x00055000) list_medium_line_t3_g3_g1_ParamLimits

0xb09a,	// (0x00055000) list_medium_line_t3_g3_g1

0xca8a,	// (0x000569f0) list_medium_line_t3_g3_g2_ParamLimits

0xca8a,	// (0x000569f0) list_medium_line_t3_g3_g2

0xb0a6,	// (0x0005500c) list_medium_line_t3_g3_g3_ParamLimits

0xb0a6,	// (0x0005500c) list_medium_line_t3_g3_g3

0x0002,

0xfd7b,	// (0x00059ce1) list_medium_line_t3_g3_g_ParamLimits

0xfd7b,	// (0x00059ce1) list_medium_line_t3_g3_g

0xcadb,	// (0x00056a41) list_medium_line_t3_g3_t1_ParamLimits

0xcadb,	// (0x00056a41) list_medium_line_t3_g3_t1

0xcaf4,	// (0x00056a5a) list_medium_line_t3_g3_t2_ParamLimits

0xcaf4,	// (0x00056a5a) list_medium_line_t3_g3_t2

0xcb0a,	// (0x00056a70) list_medium_line_t3_g3_t3_ParamLimits

0xcb0a,	// (0x00056a70) list_medium_line_t3_g3_t3

0x0002,

0xfd87,	// (0x00059ced) list_medium_line_t3_g3_t_ParamLimits

0xfd87,	// (0x00059ced) list_medium_line_t3_g3_t

0xc784,	// (0x000566ea) list_medium_line_right_iconx2_g1

0xc611,	// (0x00056577) list_medium_line_right_iconx2_g2

0x0001,

0xfd8e,	// (0x00059cf4) list_medium_line_right_iconx2_g

0xcb20,	// (0x00056a86) list_medium_line_right_iconx2_t1

0xc784,	// (0x000566ea) list_medium_line_t2_right_iconx2_g1

0xc611,	// (0x00056577) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfd8e,	// (0x00059cf4) list_medium_line_t2_right_iconx2_g

0xcb2e,	// (0x00056a94) list_medium_line_t2_right_iconx2_t1

0xcb3e,	// (0x00056aa4) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfd93,	// (0x00059cf9) list_medium_line_t2_right_iconx2_t

0xcb4c,	// (0x00056ab2) list_medium_line_x4_t4_t1

0xcb5a,	// (0x00056ac0) list_medium_line_x4_t4_t2

0xcb68,	// (0x00056ace) list_medium_line_x4_t4_t3

0xcb76,	// (0x00056adc) list_medium_line_x4_t4_t4

0x0003,

0xfd98,	// (0x00059cfe) list_medium_line_x4_t4_t

0xcba8,	// (0x00056b0e) tport_appsw_pane_ParamLimits

0xcba8,	// (0x00056b0e) tport_appsw_pane

0xcbb4,	// (0x00056b1a) tport_contact_pane_ParamLimits

0xcbb4,	// (0x00056b1a) tport_contact_pane

0xcbc2,	// (0x00056b28) tport_listscroll_pane_ParamLimits

0xcbc2,	// (0x00056b28) tport_listscroll_pane

0xcbd0,	// (0x00056b36) cell_tport_appsw_pane_ParamLimits

0xcbd0,	// (0x00056b36) cell_tport_appsw_pane

0xeadd,	// (0x00058a43) tport_appsw_pane_g1_ParamLimits

0xeadd,	// (0x00058a43) tport_appsw_pane_g1

0x2199,	// (0x0004c0ff) tport_contact_pane_g1

0x21a2,	// (0x0004c108) tport_contact_pane_t1

0x21b0,	// (0x0004c116) tport_contact_pane_t2

0x0001,

0xfda1,	// (0x00059d07) tport_contact_pane_t

0x21be,	// (0x0004c124) list_tport_pane

0x21c7,	// (0x0004c12d) scroll_pane_cp_030

0x21d8,	// (0x0004c13e) cell_tport_appsw_pane_g1

0x21e8,	// (0x0004c14e) cell_tport_appsw_pane_t1

0x21f6,	// (0x0004c15c) grid_highlight_pane_cp019

0xcbf7,	// (0x00056b5d) list_tport_double_graphic_pane_ParamLimits

0xcbf7,	// (0x00056b5d) list_tport_double_graphic_pane

0x4a02,	// (0x0004e968) list_highlight_pane_cp023_ParamLimits

0x4a02,	// (0x0004e968) list_highlight_pane_cp023

0xcc04,	// (0x00056b6a) list_tport_double_graphic_pane_g1_ParamLimits

0xcc04,	// (0x00056b6a) list_tport_double_graphic_pane_g1

0xcc11,	// (0x00056b77) list_tport_double_graphic_pane_t1_ParamLimits

0xcc11,	// (0x00056b77) list_tport_double_graphic_pane_t1

0xcc26,	// (0x00056b8c) list_tport_double_graphic_pane_t2_ParamLimits

0xcc26,	// (0x00056b8c) list_tport_double_graphic_pane_t2

0x0001,

0xfdad,	// (0x00059d13) list_tport_double_graphic_pane_t_ParamLimits

0xfdad,	// (0x00059d13) list_tport_double_graphic_pane_t

0x2d35,	// (0x0004cc9b) main_cale_note_pane

0xa8d1,	// (0x00054837) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0xa8d1,	// (0x00054837) cell_vitu2_function_top_wide_pane_cp01

0xc225,	// (0x0005618b) wait_bar_pane_cp05_ParamLimits

0x4a02,	// (0x0004e968) listscroll_cmail_pane

0x21fe,	// (0x0004c164) list_cmail_pane

0xcc38,	// (0x00056b9e) list_cmail_body_pane

0xcc4d,	// (0x00056bb3) list_single_cmail_header_caption_pane

0xcc63,	// (0x00056bc9) list_single_cmail_header_detail_pane_ParamLimits

0xcc63,	// (0x00056bc9) list_single_cmail_header_detail_pane

0x220e,	// (0x0004c174) list_single_cmail_header_caption_pane_t1

0xcc8a,	// (0x00056bf0) list_single_cmail_header_detail_pane_g1_ParamLimits

0xcc8a,	// (0x00056bf0) list_single_cmail_header_detail_pane_g1

0x2225,	// (0x0004c18b) list_single_cmail_header_detail_pane_g2_ParamLimits

0x2225,	// (0x0004c18b) list_single_cmail_header_detail_pane_g2

0x0002,

0xfdb2,	// (0x00059d18) list_single_cmail_header_detail_pane_g_ParamLimits

0xfdb2,	// (0x00059d18) list_single_cmail_header_detail_pane_g

0x223e,	// (0x0004c1a4) list_single_cmail_header_detail_pane_t1_ParamLimits

0x223e,	// (0x0004c1a4) list_single_cmail_header_detail_pane_t1

0x229e,	// (0x0004c204) list_single_cmail_header_editor_pane_bg_ParamLimits

0x229e,	// (0x0004c204) list_single_cmail_header_editor_pane_bg

0x22b5,	// (0x0004c21b) list_cmail_body_pane_g1

0x22be,	// (0x0004c224) list_cmail_body_pane_t1

0x0ec6,	// (0x0004ae2c) list_single_cmail_header_editor_pane_bg_g1

0x39b2,	// (0x0004d918) list_single_cmail_header_editor_pane_bg_g1_copy1

0x0ed6,	// (0x0004ae3c) list_single_cmail_header_editor_pane_bg_g1_copy2

0x0ece,	// (0x0004ae34) list_single_cmail_header_editor_pane_bg_g1_copy3

0x1147,	// (0x0004b0ad) list_single_cmail_header_editor_pane_bg_g1_copy4

0x0ef6,	// (0x0004ae5c) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0x0ee6,	// (0x0004ae4c) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0x0eee,	// (0x0004ae54) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0x3992,	// (0x0004d8f8) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0xcca0,	// (0x00056c06) calenote_gesture_pane_ParamLimits

0xcca0,	// (0x00056c06) calenote_gesture_pane

0xccb8,	// (0x00056c1e) calenote_window_pane_ParamLimits

0xccb8,	// (0x00056c1e) calenote_window_pane

0x22cc,	// (0x0004c232) popup_note_window_cp01

0xccd0,	// (0x00056c36) calenote_swipe_1_pane_ParamLimits

0xccd0,	// (0x00056c36) calenote_swipe_1_pane

0xc5c7,	// (0x0005652d) calenote_swipe_2_pane_ParamLimits

0xc5c7,	// (0x0005652d) calenote_swipe_2_pane

0x1f29,	// (0x0004be8f) calenote_swipe_1_pane_g1_ParamLimits

0x1f29,	// (0x0004be8f) calenote_swipe_1_pane_g1

0x1f36,	// (0x0004be9c) calenote_swipe_1_pane_g2_ParamLimits

0x1f36,	// (0x0004be9c) calenote_swipe_1_pane_g2

0x0001,

0xfcd6,	// (0x00059c3c) calenote_swipe_1_pane_g_ParamLimits

0xfcd6,	// (0x00059c3c) calenote_swipe_1_pane_g

0x22de,	// (0x0004c244) calenote_swipe_1_pane_t1_ParamLimits

0x22de,	// (0x0004c244) calenote_swipe_1_pane_t1

0x1f29,	// (0x0004be8f) calenote_swipe_2_pane_g1_ParamLimits

0x1f29,	// (0x0004be8f) calenote_swipe_2_pane_g1

0x22fd,	// (0x0004c263) calenote_swipe_2_pane_g2_ParamLimits

0x22fd,	// (0x0004c263) calenote_swipe_2_pane_g2

0x0001,

0xfdbe,	// (0x00059d24) calenote_swipe_2_pane_g_ParamLimits

0xfdbe,	// (0x00059d24) calenote_swipe_2_pane_g

0x2309,	// (0x0004c26f) calenote_swipe_2_pane_t1_ParamLimits

0x2309,	// (0x0004c26f) calenote_swipe_2_pane_t1

0x2d35,	// (0x0004cc9b) main_mup_navstr_pane

0x9728,	// (0x0005368e) main_mup3_pane_t7_ParamLimits

0x9728,	// (0x0005368e) main_mup3_pane_t7

0xa094,	// (0x00053ffa) main_mp4_pane_g6_ParamLimits

0xa094,	// (0x00053ffa) main_mp4_pane_g6

0xa3f2,	// (0x00054358) main_image3_pane_t4_ParamLimits

0xa3f2,	// (0x00054358) main_image3_pane_t4

0xcce3,	// (0x00056c49) popup_navstr_preview_pane_ParamLimits

0xcce3,	// (0x00056c49) popup_navstr_preview_pane

0xccef,	// (0x00056c55) scroll_navstr_pane_ParamLimits

0xccef,	// (0x00056c55) scroll_navstr_pane

0x2d35,	// (0x0004cc9b) bg_popup_preview_window_pane_cp04

0x2330,	// (0x0004c296) popup_navstr_preview_pane_t1

0xccfb,	// (0x00056c61) scroll_navstr_pane_g1_ParamLimits

0xccfb,	// (0x00056c61) scroll_navstr_pane_g1

0xcd08,	// (0x00056c6e) scroll_navstr_pane_t1_ParamLimits

0xcd08,	// (0x00056c6e) scroll_navstr_pane_t1

0x22d5,	// (0x0004c23b) bg_button_pane_cp014

0x22d5,	// (0x0004c23b) bg_button_pane_cp030

0xc4c4,	// (0x0005642a) list_double_fisheye_pane_g4_ParamLimits

0xc4c4,	// (0x0005642a) list_double_fisheye_pane_g4

0xc4d0,	// (0x00056436) list_double_fisheye_pane_g5_ParamLimits

0xc4d0,	// (0x00056436) list_double_fisheye_pane_g5

0xf0b6,	// (0x0005901c) sp_fs_scroll_pane_cp03

0x2001,	// (0x0004bf67) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0x200d,	// (0x0004bf73) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfcf3,	// (0x00059c59) main_sp_fs_ctrlbar_pane_g_ParamLimits

0x2019,	// (0x0004bf7f) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0x2206,	// (0x0004c16c) sp_fs_scroll_pane_cp02

0x36b1,	// (0x0004d617) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0x36b1,	// (0x0004d617) popup_sp_fs_calendar_preview_list_single_pane

0x2d35,	// (0x0004cc9b) main_cam6_pano_pane

0x87fc,	// (0x00052762) main_mup3_pane_ParamLimits

0x2d35,	// (0x0004cc9b) main_phacti_pane

0xc118,	// (0x0005607e) bg_button_pane_cp11

0xc130,	// (0x00056096) main_mobtv_info_pane_g2_ParamLimits

0xc130,	// (0x00056096) main_mobtv_info_pane_g2

0x0001,

0xfc53,	// (0x00059bb9) main_mobtv_info_pane_g_ParamLimits

0xfc53,	// (0x00059bb9) main_mobtv_info_pane_g

0xc2bc,	// (0x00056222) sc_clock_pane_t5_ParamLimits

0xc2bc,	// (0x00056222) sc_clock_pane_t5

0xc345,	// (0x000562ab) main_radioblah_pane_g1_ParamLimits

0x1e5e,	// (0x0004bdc4) main_radioblah_pane_t3_ParamLimits

0x1e5e,	// (0x0004bdc4) main_radioblah_pane_t3

0x1e76,	// (0x0004bddc) main_radioblah_pane_t4_ParamLimits

0x1e76,	// (0x0004bddc) main_radioblah_pane_t4

0xc363,	// (0x000562c9) main_radioblah_text_pane_ParamLimits

0xc363,	// (0x000562c9) main_radioblah_text_pane

0xc370,	// (0x000562d6) main_radioblah_info_pane_g1_ParamLimits

0xc3fd,	// (0x00056363) main_radioblah_info_pane_t4_ParamLimits

0xc3fd,	// (0x00056363) main_radioblah_info_pane_t4

0x4a02,	// (0x0004e968) main_sp_fs_calendar_pane

0xcd1a,	// (0x00056c80) main_phacti_pane_g1

0xcd22,	// (0x00056c88) phacti_note_pane_ParamLimits

0xcd22,	// (0x00056c88) phacti_note_pane

0x2347,	// (0x0004c2ad) phacti_term_pane_ParamLimits

0x2347,	// (0x0004c2ad) phacti_term_pane

0x235c,	// (0x0004c2c2) phacti_note_pane_t1_ParamLimits

0x235c,	// (0x0004c2c2) phacti_note_pane_t1

0x2373,	// (0x0004c2d9) phacti_term_pane_g1

0x237b,	// (0x0004c2e1) phacti_term_pane_t1_ParamLimits

0x237b,	// (0x0004c2e1) phacti_term_pane_t1

0x23a5,	// (0x0004c30b) popup_sp_fs_calendar_preview_list_single_pane_g1

0x23ad,	// (0x0004c313) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfdc8,	// (0x00059d2e) popup_sp_fs_calendar_preview_list_single_pane_g

0x23b5,	// (0x0004c31b) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0x23b5,	// (0x0004c31b) popup_sp_fs_calendar_preview_list_single_pane_t1

0x23cb,	// (0x0004c331) aid_popup_sp_fs_bg_corner_pane

0xe849,	// (0x000587af) popup_sp_fs_calendar_preview_bg_pane_g1

0x2d35,	// (0x0004cc9b) popup_sp_fs_calendar_preview_bg_pane

0x23d3,	// (0x0004c339) popup_sp_fs_calendar_preview_list_pane

0xe449,	// (0x000583af) bg_main_sp_fs_cale_pane_ParamLimits

0xe449,	// (0x000583af) bg_main_sp_fs_cale_pane

0x23e4,	// (0x0004c34a) listscroll_cale_mrui_pane_ParamLimits

0x23e4,	// (0x0004c34a) listscroll_cale_mrui_pane

0x23f9,	// (0x0004c35f) listscroll_sp_fs_schedule_track_pane

0x2402,	// (0x0004c368) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0x2402,	// (0x0004c368) main_sp_fs_ctrlbar_pane_cp01

0x2415,	// (0x0004c37b) main_sp_fs_ribbon_pane

0x241d,	// (0x0004c383) popup_sp_fs_cale_preview_window

0x2cd9,	// (0x0004cc3f) list_single_sp_fs_schedule_track_pane_ParamLimits

0x2cd9,	// (0x0004cc3f) list_single_sp_fs_schedule_track_pane

0x2cec,	// (0x0004cc52) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0x2cec,	// (0x0004cc52) bg_sp_fs_highlight_list_pane_cp03

0xcd78,	// (0x00056cde) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0xcd78,	// (0x00056cde) list_single_sp_fs_schedule_track_pane_g1

0xcd84,	// (0x00056cea) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0xcd84,	// (0x00056cea) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfdcd,	// (0x00059d33) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfdcd,	// (0x00059d33) list_single_sp_fs_schedule_track_pane_g

0xcd90,	// (0x00056cf6) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0xcd90,	// (0x00056cf6) list_single_sp_fs_schedule_track_pane_t1

0xcda8,	// (0x00056d0e) sp_fs_schedule_track_pane_ParamLimits

0xcda8,	// (0x00056d0e) sp_fs_schedule_track_pane

0x242c,	// (0x0004c392) sp_fs_schedule_track_pane_g1

0x2434,	// (0x0004c39a) sp_fs_schedule_track_pane_g2

0x243c,	// (0x0004c3a2) sp_fs_schedule_track_pane_g3

0x2444,	// (0x0004c3aa) sp_fs_schedule_track_pane_g4

0x244c,	// (0x0004c3b2) sp_fs_schedule_track_pane_g5

0x0004,

0xfdd2,	// (0x00059d38) sp_fs_schedule_track_pane_g

0x0ec6,	// (0x0004ae2c) bg_sp_fs_schedule_viewer_highlight_g1

0x39b2,	// (0x0004d918) bg_sp_fs_schedule_viewer_highlight_g2

0x0ece,	// (0x0004ae34) bg_sp_fs_schedule_viewer_highlight_g3

0x0ed6,	// (0x0004ae3c) bg_sp_fs_schedule_viewer_highlight_g4

0x1147,	// (0x0004b0ad) bg_sp_fs_schedule_viewer_highlight_g5

0x0ee6,	// (0x0004ae4c) bg_sp_fs_schedule_viewer_highlight_g6

0x0eee,	// (0x0004ae54) bg_sp_fs_schedule_viewer_highlight_g7

0x0ef6,	// (0x0004ae5c) bg_sp_fs_schedule_viewer_highlight_g8

0x3992,	// (0x0004d8f8) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfddd,	// (0x00059d43) bg_sp_fs_schedule_viewer_highlight_g

0x2d35,	// (0x0004cc9b) bg_main_sp_fs_ribbon_pane

0xcdb8,	// (0x00056d1e) main_sp_fs_ribbon_pane_g1

0x2454,	// (0x0004c3ba) main_sp_fs_ribbon_pane_t1

0xcdc1,	// (0x00056d27) main_sp_fs_ribbon_pane_t2

0x2463,	// (0x0004c3c9) main_sp_fs_ribbon_pane_t3

0x0002,

0xfdf0,	// (0x00059d56) main_sp_fs_ribbon_pane_t

0x2472,	// (0x0004c3d8) main_sp_fs_ribbon_scheduler_pane

0x247a,	// (0x0004c3e0) bg_main_sp_fs_ribbon_pane_g1

0x2483,	// (0x0004c3e9) bg_main_sp_fs_ribbon_pane_g2

0x248c,	// (0x0004c3f2) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfdf7,	// (0x00059d5d) bg_main_sp_fs_ribbon_pane_g

0x2494,	// (0x0004c3fa) main_sp_fs_ribbon_scheduler_pane_g1

0x249d,	// (0x0004c403) main_sp_fs_ribbon_scheduler_pane_g2

0x24a6,	// (0x0004c40c) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfdfe,	// (0x00059d64) main_sp_fs_ribbon_scheduler_pane_g

0x24af,	// (0x0004c415) list_cale_mrui_pane

0xcdd0,	// (0x00056d36) sp_fs_scroll_pane_cp07_ParamLimits

0xcdd0,	// (0x00056d36) sp_fs_scroll_pane_cp07

0xcde8,	// (0x00056d4e) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0xcde8,	// (0x00056d4e) bg_sp_fs_schedule_viewer_highlight

0x24bc,	// (0x0004c422) list_single_sp_fs_schedule_track_pane_cp01

0x24c4,	// (0x0004c42a) list_sp_fs_schedule_track_pane

0x24cc,	// (0x0004c432) sp_fs_scroll_pane_cp06_ParamLimits

0x24cc,	// (0x0004c432) sp_fs_scroll_pane_cp06

0xe849,	// (0x000587af) bgmain_sp_fs_calendar_pane_g1

0xcdf5,	// (0x00056d5b) list_single_cale_mrui_pane_ParamLimits

0xcdf5,	// (0x00056d5b) list_single_cale_mrui_pane

0x24de,	// (0x0004c444) list_single_cale_mrui_row_pane_ParamLimits

0x24de,	// (0x0004c444) list_single_cale_mrui_row_pane

0x24eb,	// (0x0004c451) list_single_cale_mrui_row_pane_g1_ParamLimits

0x24eb,	// (0x0004c451) list_single_cale_mrui_row_pane_g1

0x2530,	// (0x0004c496) list_single_cale_mrui_row_pane_t1_ParamLimits

0x2530,	// (0x0004c496) list_single_cale_mrui_row_pane_t1

0xce16,	// (0x00056d7c) list_single_cale_mrui_row_pane_t2_ParamLimits

0xce16,	// (0x00056d7c) list_single_cale_mrui_row_pane_t2

0x2542,	// (0x0004c4a8) list_single_cale_mrui_row_pane_t3_ParamLimits

0x2542,	// (0x0004c4a8) list_single_cale_mrui_row_pane_t3

0x2571,	// (0x0004c4d7) list_single_cale_mrui_row_pane_t4_ParamLimits

0x2571,	// (0x0004c4d7) list_single_cale_mrui_row_pane_t4

0x0003,

0xfe0c,	// (0x00059d72) list_single_cale_mrui_row_pane_t_ParamLimits

0xfe0c,	// (0x00059d72) list_single_cale_mrui_row_pane_t

0xce7c,	// (0x00056de2) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0xce7c,	// (0x00056de2) list_single_cmail_header_editor_pane_bg_cp01

0xce9c,	// (0x00056e02) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0xce9c,	// (0x00056e02) list_single_cmail_header_editor_pane_bg_cp02

0xceb8,	// (0x00056e1e) main_radioblah_text_pane_t1_ParamLimits

0xceb8,	// (0x00056e1e) main_radioblah_text_pane_t1

0x25a0,	// (0x0004c506) cam6_indi_pane_cp01

0x25a8,	// (0x0004c50e) cam6_mode_pane_cp01

0x25b0,	// (0x0004c516) cam6_pano_pane

0x25b9,	// (0x0004c51f) cam6_zoom_pane_cp01

0x25c1,	// (0x0004c527) cam6_pano_image_pane

0x25ca,	// (0x0004c530) cam6_pano_pane_g1

0x1bc5,	// (0x0004bb2b) cam6_pano_pane_g2

0x25d3,	// (0x0004c539) cam6_pano_pane_g3

0x25dc,	// (0x0004c542) cam6_pano_pane_g4

0xedc1,	// (0x00058d27) cam6_pano_pane_g5

0x25e5,	// (0x0004c54b) cam6_pano_pane_g6

0x25ed,	// (0x0004c553) cam6_pano_pane_g7

0x25f5,	// (0x0004c55b) cam6_pano_pane_g8

0x25fe,	// (0x0004c564) cam6_pano_pane_g9

0x0008,

0xfe15,	// (0x00059d7b) cam6_pano_pane_g

0x2d35,	// (0x0004cc9b) main_browser_tag_pane

0x2328,	// (0x0004c28e) grid_navstr_albumart_pane

0x2607,	// (0x0004c56d) cell_navstr_albumart_pane_ParamLimits

0x2607,	// (0x0004c56d) cell_navstr_albumart_pane

0x42b4,	// (0x0004e21a) cell_navstr_albumart_pane_g1

0xe21a,	// (0x00058180) cell_navstr_albumart_pane_g2

0xe22a,	// (0x00058190) cell_navstr_albumart_pane_g3

0xe222,	// (0x00058188) cell_navstr_albumart_pane_g4

0x0003,

0xfe28,	// (0x00059d8e) cell_navstr_albumart_pane_g

0xced2,	// (0x00056e38) bt_list_pane_ParamLimits

0xced2,	// (0x00056e38) bt_list_pane

0xcee5,	// (0x00056e4b) bt_list_pane_t1

0xcef4,	// (0x00056e5a) bt_list_pane_t2

0x0001,

0xfe31,	// (0x00059d97) bt_list_pane_t

0x2d35,	// (0x0004cc9b) main_cale_prevew_pane

0xcf03,	// (0x00056e69) popup_cale_preview_window_ParamLimits

0xcf03,	// (0x00056e69) popup_cale_preview_window

0x4a02,	// (0x0004e968) bg_popup_preview_window_pane_cp05_ParamLimits

0x4a02,	// (0x0004e968) bg_popup_preview_window_pane_cp05

0x261f,	// (0x0004c585) list_cale_preview_pane_ParamLimits

0x261f,	// (0x0004c585) list_cale_preview_pane

0x262b,	// (0x0004c591) list_double_cale_preview_pane_ParamLimits

0x262b,	// (0x0004c591) list_double_cale_preview_pane

0x263d,	// (0x0004c5a3) list_single_cale_preview_pane_ParamLimits

0x263d,	// (0x0004c5a3) list_single_cale_preview_pane

0x2651,	// (0x0004c5b7) list_single_cale_preview_pane_g1

0x2659,	// (0x0004c5bf) list_single_cale_preview_pane_t1_ParamLimits

0x2659,	// (0x0004c5bf) list_single_cale_preview_pane_t1

0x266e,	// (0x0004c5d4) list_double_cale_preview_pane_g1

0x2676,	// (0x0004c5dc) list_double_cale_preview_pane_t1_ParamLimits

0x2676,	// (0x0004c5dc) list_double_cale_preview_pane_t1

0x268b,	// (0x0004c5f1) list_double_cale_preview_pane_t2_ParamLimits

0x268b,	// (0x0004c5f1) list_double_cale_preview_pane_t2

0x0001,

0xfe36,	// (0x00059d9c) list_double_cale_preview_pane_t_ParamLimits

0xfe36,	// (0x00059d9c) list_double_cale_preview_pane_t

0x2d35,	// (0x0004cc9b) main_ezdial_pane

0x4a02,	// (0x0004e968) main_sp_fs_email_pane_ParamLimits

0xc636,	// (0x0005659c) cmail_ddmenu_btn01_pane_ParamLimits

0xc636,	// (0x0005659c) cmail_ddmenu_btn01_pane

0xc653,	// (0x000565b9) cmail_ddmenu_btn02_pane_ParamLimits

0xc653,	// (0x000565b9) cmail_ddmenu_btn02_pane

0xc671,	// (0x000565d7) cmail_ddmenu_btn03_pane_ParamLimits

0xc671,	// (0x000565d7) cmail_ddmenu_btn03_pane

0xc69d,	// (0x00056603) main_sp_fs_ctrlbar_pane_ParamLimits

0xc6b3,	// (0x00056619) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0xcc38,	// (0x00056b9e) list_cmail_body_pane_ParamLimits

0x221c,	// (0x0004c182) bg_button_pane_cp12

0x2231,	// (0x0004c197) list_single_cmail_header_detail_pane_g3_ParamLimits

0x2231,	// (0x0004c197) list_single_cmail_header_detail_pane_g3

0x227a,	// (0x0004c1e0) list_single_cmail_header_detail_pane_t2_ParamLimits

0x227a,	// (0x0004c1e0) list_single_cmail_header_detail_pane_t2

0x0001,

0xfdb9,	// (0x00059d1f) list_single_cmail_header_detail_pane_t_ParamLimits

0xfdb9,	// (0x00059d1f) list_single_cmail_header_detail_pane_t

0x2390,	// (0x0004c2f6) phacti_term_pane_t2_ParamLimits

0x2390,	// (0x0004c2f6) phacti_term_pane_t2

0x0001,

0xfdc3,	// (0x00059d29) phacti_term_pane_t_ParamLimits

0xfdc3,	// (0x00059d29) phacti_term_pane_t

0x26a3,	// (0x0004c609) aid_size_list_single_double

0xcf18,	// (0x00056e7e) popup_ezdial_listscroll_window

0xcf31,	// (0x00056e97) popup_number_entry_window_cp01

0x374c,	// (0x0004d6b2) bg_popup_call_pane_cp09

0x26af,	// (0x0004c615) ezdial_list_pane

0x26b7,	// (0x0004c61d) scroll_pane_cp23

0xe636,	// (0x0005859c) bg_button_pane_cp028_ParamLimits

0xe636,	// (0x0005859c) bg_button_pane_cp028

0xcf3d,	// (0x00056ea3) cmail_ddmenu_btn01_pane_g1_ParamLimits

0xcf3d,	// (0x00056ea3) cmail_ddmenu_btn01_pane_g1

0xcf4d,	// (0x00056eb3) cmail_ddmenu_btn01_pane_g2_ParamLimits

0xcf4d,	// (0x00056eb3) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfe3b,	// (0x00059da1) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfe3b,	// (0x00059da1) cmail_ddmenu_btn01_pane_g

0x26bf,	// (0x0004c625) cmail_ddmenu_btn01_pane_t1_ParamLimits

0x26bf,	// (0x0004c625) cmail_ddmenu_btn01_pane_t1

0xe449,	// (0x000583af) bg_button_pane_cp029_ParamLimits

0xe449,	// (0x000583af) bg_button_pane_cp029

0xcf59,	// (0x00056ebf) cmail_ddmenu_btn02_pane_g1_ParamLimits

0xcf59,	// (0x00056ebf) cmail_ddmenu_btn02_pane_g1

0xcf72,	// (0x00056ed8) cmail_ddmenu_btn02_pane_t1_ParamLimits

0xcf72,	// (0x00056ed8) cmail_ddmenu_btn02_pane_t1

0x2cec,	// (0x0004cc52) bg_button_pane_cp031_ParamLimits

0x2cec,	// (0x0004cc52) bg_button_pane_cp031

0xcf59,	// (0x00056ebf) cmail_ddmenu_btn03_pane_g1_ParamLimits

0xcf59,	// (0x00056ebf) cmail_ddmenu_btn03_pane_g1

0xcf72,	// (0x00056ed8) cmail_ddmenu_btn03_pane_t1_ParamLimits

0xcf72,	// (0x00056ed8) cmail_ddmenu_btn03_pane_t1

0xa2a1,	// (0x00054207) cell_dialer2_keypad_pane_t1_ParamLimits

0xa2bb,	// (0x00054221) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0xa2bb,	// (0x00054221) cell_dialer2_keypad_pane_t1_copy1

0xbf5c,	// (0x00055ec2) ncimui_group_button_pane

0x4a02,	// (0x0004e968) main_sp_fs_calendar_pane_ParamLimits

0xcc4d,	// (0x00056bb3) list_single_cmail_header_caption_pane_ParamLimits

0x23db,	// (0x0004c341) aid_recal_txt_sm_pane

0x2d35,	// (0x0004cc9b) mian_recal_day_pane

0x241d,	// (0x0004c383) popup_sp_fs_cale_preview_window_ParamLimits

0x26d5,	// (0x0004c63b) list_recal_day_pane

0x2717,	// (0x0004c67d) list_single_recal_day_pane_ParamLimits

0x2717,	// (0x0004c67d) list_single_recal_day_pane

0x2729,	// (0x0004c68f) list_single_recal_day_pane_g1_ParamLimits

0x2729,	// (0x0004c68f) list_single_recal_day_pane_g1

0x2735,	// (0x0004c69b) list_single_recal_day_pane_g2_ParamLimits

0x2735,	// (0x0004c69b) list_single_recal_day_pane_g2

0x2741,	// (0x0004c6a7) list_single_recal_day_pane_g3_ParamLimits

0x2741,	// (0x0004c6a7) list_single_recal_day_pane_g3

0xcf96,	// (0x00056efc) list_single_recal_day_pane_g4_ParamLimits

0xcf96,	// (0x00056efc) list_single_recal_day_pane_g4

0x274d,	// (0x0004c6b3) list_single_recal_day_pane_g5_ParamLimits

0x274d,	// (0x0004c6b3) list_single_recal_day_pane_g5

0x2759,	// (0x0004c6bf) list_single_recal_day_pane_g6_ParamLimits

0x2759,	// (0x0004c6bf) list_single_recal_day_pane_g6

0x0004,

0xfe4a,	// (0x00059db0) list_single_recal_day_pane_g_ParamLimits

0xfe4a,	// (0x00059db0) list_single_recal_day_pane_g

0x276d,	// (0x0004c6d3) list_single_recal_day_pane_t1

0x277f,	// (0x0004c6e5) list_single_recal_day_pane_t2

0x0001,

0xfe55,	// (0x00059dbb) list_single_recal_day_pane_t

0xcfaa,	// (0x00056f10) ncimui_query_button_pane_ParamLimits

0xcfaa,	// (0x00056f10) ncimui_query_button_pane

0xcfba,	// (0x00056f20) ncimui_query_button_pane_t1_ParamLimits

0xcfba,	// (0x00056f20) ncimui_query_button_pane_t1

0x2791,	// (0x0004c6f7) ncimui_query_button_pane_t2_ParamLimits

0x2791,	// (0x0004c6f7) ncimui_query_button_pane_t2

0x0001,

0xfe5a,	// (0x00059dc0) ncimui_query_button_pane_t_ParamLimits

0xfe5a,	// (0x00059dc0) ncimui_query_button_pane_t

0xcfcd,	// (0x00056f33) query_button_pane_ParamLimits

0xcfcd,	// (0x00056f33) query_button_pane

0x2d35,	// (0x0004cc9b) bg_button_pane_cp0028

0x27a4,	// (0x0004c70a) query_button_pane_t1

0x8818,	// (0x0005277e) main_tport_pane_ParamLimits

0xcb84,	// (0x00056aea) bg_popup_window_pane_cp01_ParamLimits

0xcb84,	// (0x00056aea) bg_popup_window_pane_cp01

0xcb90,	// (0x00056af6) heading_pane_cp08_ParamLimits

0xcb90,	// (0x00056af6) heading_pane_cp08

0xcb9c,	// (0x00056b02) heading_pane_cp07_ParamLimits

0xcb9c,	// (0x00056b02) heading_pane_cp07

0x21d8,	// (0x0004c13e) cell_tport_appsw_pane_g2

0x0002,

0xfda6,	// (0x00059d0c) cell_tport_appsw_pane_g

0x801a,	// (0x00051f80) input_candi_list_open_g1

0x3b7d,	// (0x0004dae3) list_cale_time_pane_g6_ParamLimits

0x3b7d,	// (0x0004dae3) list_cale_time_pane_g6

0x91f6,	// (0x0005315c) aid_size_touch_calib_1_ParamLimits

0x91f6,	// (0x0005315c) aid_size_touch_calib_1

0x9202,	// (0x00053168) aid_size_touch_calib_2_ParamLimits

0x9202,	// (0x00053168) aid_size_touch_calib_2

0x920e,	// (0x00053174) aid_size_touch_calib_3_ParamLimits

0x920e,	// (0x00053174) aid_size_touch_calib_3

0x921c,	// (0x00053182) aid_size_touch_calib_4_ParamLimits

0x921c,	// (0x00053182) aid_size_touch_calib_4

0x922a,	// (0x00053190) main_touch_calib_button_group_pane_ParamLimits

0x922a,	// (0x00053190) main_touch_calib_button_group_pane

0x9238,	// (0x0005319e) main_touch_calib_pane_g1_ParamLimits

0x9244,	// (0x000531aa) main_touch_calib_pane_g2_ParamLimits

0x9250,	// (0x000531b6) main_touch_calib_pane_g3_ParamLimits

0x925c,	// (0x000531c2) main_touch_calib_pane_g4_ParamLimits

0xf764,	// (0x000596ca) main_touch_calib_pane_g_ParamLimits

0x9268,	// (0x000531ce) main_touch_calib_pane_t1_ParamLimits

0x927d,	// (0x000531e3) main_touch_calib_pane_t2_ParamLimits

0x9292,	// (0x000531f8) main_touch_calib_pane_t3_ParamLimits

0x92a4,	// (0x0005320a) main_touch_calib_pane_t4_ParamLimits

0x92b6,	// (0x0005321c) main_touch_calib_pane_t5_ParamLimits

0xf76d,	// (0x000596d3) main_touch_calib_pane_t_ParamLimits

0xeb78,	// (0x00058ade) list_single_fp_cale_pane_g3_ParamLimits

0xeb78,	// (0x00058ade) list_single_fp_cale_pane_g3

0x87fc,	// (0x00052762) bg_button_pane_cp012_ParamLimits

0x87fc,	// (0x00052762) bg_vkb2_func_pane_cp03_ParamLimits

0xb01a,	// (0x00054f80) cell_vitu2_function_top_pane_g1_ParamLimits

0x87fc,	// (0x00052762) bg_vkb2_func_pane_cp04_ParamLimits

0xbee8,	// (0x00055e4e) main_ncimui_button_group_pane_ParamLimits

0xbee8,	// (0x00055e4e) main_ncimui_button_group_pane

0xbf4a,	// (0x00055eb0) main_ncimui_pane_t3_ParamLimits

0xbf4a,	// (0x00055eb0) main_ncimui_pane_t3

0x233e,	// (0x0004c2a4) phacti_button_group_pane

0x26a3,	// (0x0004c609) aid_size_list_single_double_ParamLimits

0xcf18,	// (0x00056e7e) popup_ezdial_listscroll_window_ParamLimits

0xcf31,	// (0x00056e97) popup_number_entry_window_cp01_ParamLimits

0xcfda,	// (0x00056f40) phacti_button_pane_ParamLimits

0xcfda,	// (0x00056f40) phacti_button_pane

0x2d35,	// (0x0004cc9b) bg_button_pane_cp14

0x27b2,	// (0x0004c718) phacti_button_pane_t1

0xcfe9,	// (0x00056f4f) main_touch_calib_button_pane_ParamLimits

0xcfe9,	// (0x00056f4f) main_touch_calib_button_pane

0x359b,	// (0x0004d501) bg_button_pane_cp18_ParamLimits

0x359b,	// (0x0004d501) bg_button_pane_cp18

0x27c0,	// (0x0004c726) main_touch_calib_button_pane_t1_ParamLimits

0x27c0,	// (0x0004c726) main_touch_calib_button_pane_t1

0x27d6,	// (0x0004c73c) main_touch_calib_button_pane_t2_ParamLimits

0x27d6,	// (0x0004c73c) main_touch_calib_button_pane_t2

0x0001,

0xfe5f,	// (0x00059dc5) main_touch_calib_button_pane_t_ParamLimits

0xfe5f,	// (0x00059dc5) main_touch_calib_button_pane_t

0x2d35,	// (0x0004cc9b) cell_ncimui_button_pane

0x2d35,	// (0x0004cc9b) bg_button_pane_cp032

0x27f4,	// (0x0004c75a) cell_ncimui_button_pane_t1

0xa30d,	// (0x00054273) image3_infobar_pane_ParamLimits

0xa30d,	// (0x00054273) image3_infobar_pane

0xc2dc,	// (0x00056242) fs_bigclock_status_pane_ParamLimits

0xc2dc,	// (0x00056242) fs_bigclock_status_pane

0xc2e9,	// (0x0005624f) main_fs_bigclock_clock_pane_ParamLimits

0xc2e9,	// (0x0005624f) main_fs_bigclock_clock_pane

0xc2fb,	// (0x00056261) main_fs_bigclock_indi_pane_ParamLimits

0xc2fb,	// (0x00056261) main_fs_bigclock_indi_pane

0xc31b,	// (0x00056281) main_fs_bigclock_swipe_pane_ParamLimits

0xc31b,	// (0x00056281) main_fs_bigclock_swipe_pane

0x2d35,	// (0x0004cc9b) main_fs_clock_dumped_data

0x1cd2,	// (0x0004bc38) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0x1cd2,	// (0x0004bc38) list_single_fs_bigclock_indicator_pane_g1

0x1cec,	// (0x0004bc52) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0x1cec,	// (0x0004bc52) list_single_fs_bigclock_indicator_pane_g2

0x1d06,	// (0x0004bc6c) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0x1d06,	// (0x0004bc6c) list_single_fs_bigclock_indicator_pane_g3

0x1d20,	// (0x0004bc86) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0x1d20,	// (0x0004bc86) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfc87,	// (0x00059bed) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfc87,	// (0x00059bed) list_single_fs_bigclock_indicator_pane_g

0x1d49,	// (0x0004bcaf) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0x1d49,	// (0x0004bcaf) list_single_fs_bigclock_indicator_pane_t1

0x1d71,	// (0x0004bcd7) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0x1d71,	// (0x0004bcd7) list_single_fs_bigclock_indicator_pane_t2

0x1d99,	// (0x0004bcff) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0x1d99,	// (0x0004bcff) list_single_fs_bigclock_indicator_pane_t3

0x1dc1,	// (0x0004bd27) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0x1dc1,	// (0x0004bd27) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfc92,	// (0x00059bf8) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfc92,	// (0x00059bf8) list_single_fs_bigclock_indicator_pane_t

0x2802,	// (0x0004c768) image3_infobar_fav_pane_ParamLimits

0x2802,	// (0x0004c768) image3_infobar_fav_pane

0x2812,	// (0x0004c778) image3_infobar_loc_pane_ParamLimits

0x2812,	// (0x0004c778) image3_infobar_loc_pane

0x2826,	// (0x0004c78c) image3_infobar_time_pane_ParamLimits

0x2826,	// (0x0004c78c) image3_infobar_time_pane

0xe849,	// (0x000587af) image3_infobar_time_pane_g1

0x2836,	// (0x0004c79c) image3_infobar_time_pane_t1

0xe849,	// (0x000587af) image3_infobar_loc_pane_g1

0x2844,	// (0x0004c7aa) image3_infobar_loc_pane_g2

0x0001,

0xfe64,	// (0x00059dca) image3_infobar_loc_pane_g

0x284c,	// (0x0004c7b2) image3_infobar_loc_pane_t1

0xe849,	// (0x000587af) image3_infobar_fav_pane_g1

0x285a,	// (0x0004c7c0) image3_infobar_fav_pane_g2

0x0001,

0xfe69,	// (0x00059dcf) image3_infobar_fav_pane_g

0x2862,	// (0x0004c7c8) fs_bigclock_status_battery_pane

0x286b,	// (0x0004c7d1) fs_bigclock_status_signal_pane

0x2874,	// (0x0004c7da) fs_bigclock_status_title_pane

0x287d,	// (0x0004c7e3) fs_bigclock_status_signal_pane_g1

0x2886,	// (0x0004c7ec) fs_bigclock_status_signal_pane_g2

0x0001,

0xfe6e,	// (0x00059dd4) fs_bigclock_status_signal_pane_g

0x288e,	// (0x0004c7f4) fs_bigclock_status_battery_pane_g1

0x2897,	// (0x0004c7fd) fs_bigclock_status_battery_pane_g2

0x0001,

0xfe73,	// (0x00059dd9) fs_bigclock_status_battery_pane_g

0x289f,	// (0x0004c805) fs_bigclock_status_title_pane_t1

0xcff9,	// (0x00056f5f) main_fs_bigclock_clock_pane_g1

0xcff9,	// (0x00056f5f) main_fs_bigclock_clock_pane_g2

0xd006,	// (0x00056f6c) main_fs_bigclock_clock_pane_g3

0xd006,	// (0x00056f6c) main_fs_bigclock_clock_pane_g4

0x0003,

0xfe78,	// (0x00059dde) main_fs_bigclock_clock_pane_g

0xd012,	// (0x00056f78) main_fs_bigclock_clock_pane_t1

0xd025,	// (0x00056f8b) main_fs_bigclock_clock_pane_t2

0x0001,

0xfe81,	// (0x00059de7) main_fs_bigclock_clock_pane_t

0x28ad,	// (0x0004c813) list_single_fs_bigclock_indicator_pane_ParamLimits

0x28ad,	// (0x0004c813) list_single_fs_bigclock_indicator_pane

0x28be,	// (0x0004c824) list_single_fs_bigclock_pane_ParamLimits

0x28be,	// (0x0004c824) list_single_fs_bigclock_pane

0x28e4,	// (0x0004c84a) main_fs_bigclock_indicator_pane_t1

0x28f3,	// (0x0004c859) list_single_fs_bigclock_pane_g1

0x28fb,	// (0x0004c861) list_single_fs_bigclock_pane_t1

0xe849,	// (0x000587af) main_fs_bigclock_swipe_pane_g1

0x293e,	// (0x0004c8a4) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfe92,	// (0x00059df8) main_fs_bigclock_swipe_pane_g

0x2946,	// (0x0004c8ac) main_fs_bigclock_swipe_pane_t1_ParamLimits

0x2946,	// (0x0004c8ac) main_fs_bigclock_swipe_pane_t1

0x7900,	// (0x00051866) call_type_pane_ParamLimits

0x2d35,	// (0x0004cc9b) main_btmg_pane

0x2517,	// (0x0004c47d) list_single_cale_mrui_row_pane_g2_ParamLimits

0x2517,	// (0x0004c47d) list_single_cale_mrui_row_pane_g2

0x0002,

0xfe05,	// (0x00059d6b) list_single_cale_mrui_row_pane_g_ParamLimits

0xfe05,	// (0x00059d6b) list_single_cale_mrui_row_pane_g

0x26fe,	// (0x0004c664) list_recal_vselct_arw_lo_pane

0x2706,	// (0x0004c66c) list_recal_vselct_arw_up_pane

0x270e,	// (0x0004c674) list_recal_vselct_pane

0xd07a,	// (0x00056fe0) btmg_button_pane

0xd082,	// (0x00056fe8) main_btmg_pane_g1

0x2d35,	// (0x0004cc9b) bg_button_pane_cp044

0x2963,	// (0x0004c8c9) btmg_button_pane_t1

0xe435,	// (0x0005839b) aid_listscroll_gen

0x4a02,	// (0x0004e968) main_cntbar_detail_pane

0x21fe,	// (0x0004c164) list_cmail_folder_pane

0xf0b6,	// (0x0005901c) sp_fs_scroll_pane_cp03_ParamLimits

0xcc4d,	// (0x00056bb3) list_single_fs_dyc_pane_cp01_ParamLimits

0xcc4d,	// (0x00056bb3) list_single_fs_dyc_pane_cp01

0x2971,	// (0x0004c8d7) aid_size_cmail_indent

0x297a,	// (0x0004c8e0) list_single_dyc_row_pane_cp01

0xd0a4,	// (0x0005700a) cntbar_detail_list_pane_ParamLimits

0xd0a4,	// (0x0005700a) cntbar_detail_list_pane

0xd0da,	// (0x00057040) main_cntbar_detail_cont_pane_ParamLimits

0xd0da,	// (0x00057040) main_cntbar_detail_cont_pane

0x7823,	// (0x00051789) scroll_pane_cp032_ParamLimits

0x7823,	// (0x00051789) scroll_pane_cp032

0xd0e6,	// (0x0005704c) cntbar_detail_list_event_pane_ParamLimits

0xd0e6,	// (0x0005704c) cntbar_detail_list_event_pane

0xd0b0,	// (0x00057016) cntbar_detail_list_shct_pane

0x3a00,	// (0x0004d966) aid_list_gen

0x2983,	// (0x0004c8e9) aid_scroll

0x298c,	// (0x0004c8f2) aid_size_touch_scroll_bar

0xb712,	// (0x00055678) aid_list_double

0xd0f6,	// (0x0005705c) aid_list_single

0xb712,	// (0x00055678) aid_list_single_lg

0x2995,	// (0x0004c8fb) aid_list_z_g_a_sm

0xd0ff,	// (0x00057065) aid_list_z_g_d

0xd107,	// (0x0005706d) aid_txt_z_prm

0xd115,	// (0x0005707b) aid_txt_z_prm_cp01

0xd123,	// (0x00057089) aid_txt_z_sec

0xd131,	// (0x00057097) main_cntbar_detail_cont_pane_g1_ParamLimits

0xd131,	// (0x00057097) main_cntbar_detail_cont_pane_g1

0xd13e,	// (0x000570a4) main_cntbar_detail_cont_pane_g2_ParamLimits

0xd13e,	// (0x000570a4) main_cntbar_detail_cont_pane_g2

0x0001,

0xfe97,	// (0x00059dfd) main_cntbar_detail_cont_pane_g_ParamLimits

0xfe97,	// (0x00059dfd) main_cntbar_detail_cont_pane_g

0x299d,	// (0x0004c903) main_cntbar_detail_cont_pane_t1

0x29ab,	// (0x0004c911) main_cntbar_detail_cont_pane_t2

0x29b9,	// (0x0004c91f) main_cntbar_detail_cont_pane_t3

0x0002,

0xfe9c,	// (0x00059e02) main_cntbar_detail_cont_pane_t

0xd14a,	// (0x000570b0) cell_cntbar_detail_list_shct_pane_ParamLimits

0xd14a,	// (0x000570b0) cell_cntbar_detail_list_shct_pane

0x29c7,	// (0x0004c92d) cntbar_detail_list_shct_pane_g1

0x29d0,	// (0x0004c936) cntbar_detail_list_shct_pane_g2

0x0001,

0xfea3,	// (0x00059e09) cntbar_detail_list_shct_pane_g

0xd15c,	// (0x000570c2) cntbar_detail_list_event_pane_g1_ParamLimits

0xd15c,	// (0x000570c2) cntbar_detail_list_event_pane_g1

0xd168,	// (0x000570ce) cntbar_detail_list_event_pane_g2_ParamLimits

0xd168,	// (0x000570ce) cntbar_detail_list_event_pane_g2

0x0005,

0xfea8,	// (0x00059e0e) cntbar_detail_list_event_pane_g_ParamLimits

0xfea8,	// (0x00059e0e) cntbar_detail_list_event_pane_g

0xd1d4,	// (0x0005713a) cntbar_detail_list_event_pane_t1_ParamLimits

0xd1d4,	// (0x0005713a) cntbar_detail_list_event_pane_t1

0xd1e9,	// (0x0005714f) cntbar_detail_list_event_pane_t2_ParamLimits

0xd1e9,	// (0x0005714f) cntbar_detail_list_event_pane_t2

0x0002,

0xfeb5,	// (0x00059e1b) cntbar_detail_list_event_pane_t_ParamLimits

0xfeb5,	// (0x00059e1b) cntbar_detail_list_event_pane_t

0xe849,	// (0x000587af) cell_cntbar_detail_list_shct_pane_g1

0x4140,	// (0x0004e0a6) navi_pane_mv_g3

0x4a02,	// (0x0004e968) main_cntbar_detail_pane_ParamLimits

0x2d35,	// (0x0004cc9b) main_notif_wgt_pane

0x9feb,	// (0x00053f51) aid_tch_main_mp4_pane_g4

0xa206,	// (0x0005416c) popup_slider_window_cp02

0x26f4,	// (0x0004c65a) list_recal_day_event_pane

0xd08a,	// (0x00056ff0) cntbar_detail_btn_pane_ParamLimits

0xd08a,	// (0x00056ff0) cntbar_detail_btn_pane

0xd096,	// (0x00056ffc) cntbar_detail_btn_pane_cp01_ParamLimits

0xd096,	// (0x00056ffc) cntbar_detail_btn_pane_cp01

0xd0b0,	// (0x00057016) cntbar_detail_list_shct_pane_ParamLimits

0xd0bc,	// (0x00057022) cntbar_detail_pane_g1_ParamLimits

0xd0bc,	// (0x00057022) cntbar_detail_pane_g1

0xd0c8,	// (0x0005702e) cntbar_detail_pane_t1_ParamLimits

0xd0c8,	// (0x0005702e) cntbar_detail_pane_t1

0xd174,	// (0x000570da) cntbar_detail_list_event_pane_g3_ParamLimits

0xd174,	// (0x000570da) cntbar_detail_list_event_pane_g3

0xd18c,	// (0x000570f2) cntbar_detail_list_event_pane_g4_ParamLimits

0xd18c,	// (0x000570f2) cntbar_detail_list_event_pane_g4

0xd1a4,	// (0x0005710a) cntbar_detail_list_event_pane_g5_ParamLimits

0xd1a4,	// (0x0005710a) cntbar_detail_list_event_pane_g5

0xd1bc,	// (0x00057122) cntbar_detail_list_event_pane_g6_ParamLimits

0xd1bc,	// (0x00057122) cntbar_detail_list_event_pane_g6

0xd1fe,	// (0x00057164) cntbar_detail_list_event_pane_t3_ParamLimits

0xd1fe,	// (0x00057164) cntbar_detail_list_event_pane_t3

0xd210,	// (0x00057176) popup_notif_wgt_window_ParamLimits

0xd210,	// (0x00057176) popup_notif_wgt_window

0xd21e,	// (0x00057184) popup_submenu_window_cp01_ParamLimits

0xd21e,	// (0x00057184) popup_submenu_window_cp01

0x374c,	// (0x0004d6b2) bg_popup_window_pane_cp10

0x29d9,	// (0x0004c93f) listscroll_notif_wgt_pane

0x29ea,	// (0x0004c950) list_notif_wgt_window

0x29f3,	// (0x0004c959) scroll_pane_cp033

0xd22a,	// (0x00057190) list_notif_wgt_row_pane_ParamLimits

0xd22a,	// (0x00057190) list_notif_wgt_row_pane

0x29fc,	// (0x0004c962) aid_size_list_notif_wgt_del

0x2a09,	// (0x0004c96f) list_notif_wgt_row_pane_g1

0x2a15,	// (0x0004c97b) list_notif_wgt_row_pane_g2

0x2a24,	// (0x0004c98a) list_notif_wgt_row_pane_g3

0x0002,

0xfebc,	// (0x00059e22) list_notif_wgt_row_pane_g

0x2a31,	// (0x0004c997) list_notif_wgt_row_pane_t1

0x2a47,	// (0x0004c9ad) list_notif_wgt_row_pane_t2

0x2a59,	// (0x0004c9bf) list_notif_wgt_row_pane_t3

0x0002,

0xfec3,	// (0x00059e29) list_notif_wgt_row_pane_t

0x114f,	// (0x0004b0b5) list_recal_day_event_pane_g1

0x2a6b,	// (0x0004c9d1) list_recal_day_event_pane_t1

0x2d35,	// (0x0004cc9b) bg_button_pane_cp045

0xd23c,	// (0x000571a2) cntbar_detail_btn_pane_t1

0xe449,	// (0x000583af) main_callh_pane_ParamLimits

0xe449,	// (0x000583af) main_callh_pane

0x2d35,	// (0x0004cc9b) main_coverflow0_pane

0x2d35,	// (0x0004cc9b) main_wgtman_pane

0xc32d,	// (0x00056293) main_fs_bigclock_unlock_btn_pane_ParamLimits

0xc32d,	// (0x00056293) main_fs_bigclock_unlock_btn_pane

0x21d0,	// (0x0004c136) bg_button_pane_cp16

0x21e0,	// (0x0004c146) cell_tport_appsw_pane_g3

0xd24a,	// (0x000571b0) cf0_flow_pane_ParamLimits

0xd24a,	// (0x000571b0) cf0_flow_pane

0x2a7a,	// (0x0004c9e0) listscroll_cf0_pane

0x2a83,	// (0x0004c9e9) main_cf0_pane_g1

0xd259,	// (0x000571bf) main_cf0_pane_t1_ParamLimits

0xd259,	// (0x000571bf) main_cf0_pane_t1

0xd26b,	// (0x000571d1) main_cf0_pane_t2_ParamLimits

0xd26b,	// (0x000571d1) main_cf0_pane_t2

0x0001,

0xfecf,	// (0x00059e35) main_cf0_pane_t_ParamLimits

0xfecf,	// (0x00059e35) main_cf0_pane_t

0x2a95,	// (0x0004c9fb) scroll_pane_cp11

0xd27d,	// (0x000571e3) cf0_flow_pane_g1

0xd285,	// (0x000571eb) cf0_flow_pane_g2

0x0001,

0xfed4,	// (0x00059e3a) cf0_flow_pane_g

0xd28d,	// (0x000571f3) cf0_flow_pane_t1

0x2d35,	// (0x0004cc9b) main_call6_pane

0x2d35,	// (0x0004cc9b) main_calllock_pane

0xd29b,	// (0x00057201) call6_btn_grp_pane_ParamLimits

0xd29b,	// (0x00057201) call6_btn_grp_pane

0xd2a8,	// (0x0005720e) call6_pane_g1_ParamLimits

0xd2a8,	// (0x0005720e) call6_pane_g1

0xd2b5,	// (0x0005721b) popup_call6_1st_window_ParamLimits

0xd2b5,	// (0x0005721b) popup_call6_1st_window

0xd2c1,	// (0x00057227) popup_call6_2nd_window_ParamLimits

0xd2c1,	// (0x00057227) popup_call6_2nd_window

0xd2cd,	// (0x00057233) cell_call6_btn_pane_ParamLimits

0xd2cd,	// (0x00057233) cell_call6_btn_pane

0x374c,	// (0x0004d6b2) bg_popup_call2_in_pane_cp03

0x2a9e,	// (0x0004ca04) popup_call6_1st_window_g1

0x2aa6,	// (0x0004ca0c) popup_call6_1st_window_g2

0x2aae,	// (0x0004ca14) popup_call6_1st_window_g3

0x0002,

0xfed9,	// (0x00059e3f) popup_call6_1st_window_g

0x2ab6,	// (0x0004ca1c) popup_call6_1st_window_t1

0x2ac5,	// (0x0004ca2b) popup_call6_1st_window_t2

0x2ad3,	// (0x0004ca39) popup_call6_1st_window_t3

0x0002,

0xfee0,	// (0x00059e46) popup_call6_1st_window_t

0x374c,	// (0x0004d6b2) bg_popup_call2_in_pane_cp04

0x2a9e,	// (0x0004ca04) popup_call6_2nd_window_g1

0x2aa6,	// (0x0004ca0c) popup_call6_2nd_window_g2

0x2aae,	// (0x0004ca14) popup_call6_2nd_window_g3

0x0002,

0xfed9,	// (0x00059e3f) popup_call6_2nd_window_g

0x2ab6,	// (0x0004ca1c) popup_call6_2nd_window_t1

0x2d35,	// (0x0004cc9b) bg_button_pane_cp15

0x2ae1,	// (0x0004ca47) cell_call6_btn_pane_g1

0x2aea,	// (0x0004ca50) cell_call6_btn_pane_t1

0xd2dc,	// (0x00057242) listscroll_wgtman_pane_ParamLimits

0xd2dc,	// (0x00057242) listscroll_wgtman_pane

0xd2f8,	// (0x0005725e) wgtman_btn_pane_ParamLimits

0xd2f8,	// (0x0005725e) wgtman_btn_pane

0x3f58,	// (0x0004debe) aid_scroll_copy1

0x2af9,	// (0x0004ca5f) list_wgtman_pane

0xd32b,	// (0x00057291) wgtman_btn_pane_g1_ParamLimits

0xd32b,	// (0x00057291) wgtman_btn_pane_g1

0xd353,	// (0x000572b9) wgtman_btn_pane_t1_ParamLimits

0xd353,	// (0x000572b9) wgtman_btn_pane_t1

0x2b03,	// (0x0004ca69) wgtman_btn_pane_t2_ParamLimits

0x2b03,	// (0x0004ca69) wgtman_btn_pane_t2

0x0001,

0xfee7,	// (0x00059e4d) wgtman_btn_pane_t_ParamLimits

0xfee7,	// (0x00059e4d) wgtman_btn_pane_t

0xd22a,	// (0x00057190) listrow_wgtman_pane_ParamLimits

0xd22a,	// (0x00057190) listrow_wgtman_pane

0xd38a,	// (0x000572f0) listrow_wgtman_pane_g1

0xd397,	// (0x000572fd) listrow_wgtman_pane_g2

0x0001,

0xfeec,	// (0x00059e52) listrow_wgtman_pane_g

0xd3af,	// (0x00057315) listrow_wgtman_pane_t1

0xd3c7,	// (0x0005732d) listrow_wgtman_pane_t2

0x0001,

0xfef1,	// (0x00059e57) listrow_wgtman_pane_t

0xd3ed,	// (0x00057353) wait_bar_pane_cp09

0x2b1a,	// (0x0004ca80) main_calllock_btn_pane

0x2b22,	// (0x0004ca88) main_calllock_pane_g1

0x2d35,	// (0x0004cc9b) bg_button_pane_cp17

0x2b2b,	// (0x0004ca91) main_calllock_btn_pane_g1

0x2b34,	// (0x0004ca9a) main_calllock_btn_pane_t1

0x2d35,	// (0x0004cc9b) main_dialer3_pane

0x2d35,	// (0x0004cc9b) main_fmrd2_pane

0xe849,	// (0x000587af) main_fs_bigclock_unlock_btn_pane_g1

0x2b4b,	// (0x0004cab1) main_fs_bigclock_unlock_btn_pane_t1

0xd3ff,	// (0x00057365) area_fmrd2_info_pane_ParamLimits

0xd3ff,	// (0x00057365) area_fmrd2_info_pane

0xd40b,	// (0x00057371) area_fmrd2_visual_pane_ParamLimits

0xd40b,	// (0x00057371) area_fmrd2_visual_pane

0xd419,	// (0x0005737f) fmrd2_indi_pane_ParamLimits

0xd419,	// (0x0005737f) fmrd2_indi_pane

0xd426,	// (0x0005738c) area_fmrd2_visual_pane_g1

0xd42e,	// (0x00057394) area_fmrd2_visual_pane_t1

0xd43c,	// (0x000573a2) area_fmrd2_visual_pane_t2

0xd44a,	// (0x000573b0) area_fmrd2_visual_pane_t3

0x0002,

0xfefb,	// (0x00059e61) area_fmrd2_visual_pane_t

0xd458,	// (0x000573be) area_fmrd2_info_pane_g1

0xd460,	// (0x000573c6) area_fmrd2_info_pane_t1

0xd46e,	// (0x000573d4) area_fmrd2_info_pane_t2

0xd47c,	// (0x000573e2) area_fmrd2_info_pane_t3

0xd48a,	// (0x000573f0) area_fmrd2_info_pane_t4

0x0003,

0xff02,	// (0x00059e68) area_fmrd2_info_pane_t

0xd498,	// (0x000573fe) fmrd2_indi_pane_t1

0xd4a6,	// (0x0005740c) fmrd2_indi_pane_t2

0xd4b4,	// (0x0005741a) fmrd2_indi_pane_t3

0x0002,

0xff0b,	// (0x00059e71) fmrd2_indi_pane_t

0x1d2f,	// (0x0004bc95) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0x1d2f,	// (0x0004bc95) list_single_fs_bigclock_indicator_pane_g5

0x1ddd,	// (0x0004bd43) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0x1ddd,	// (0x0004bd43) list_single_fs_bigclock_indicator_pane_t5

0xcd36,	// (0x00056c9c) aid_cell_bcale_month_pane_ParamLimits

0xcd36,	// (0x00056c9c) aid_cell_bcale_month_pane

0xcd54,	// (0x00056cba) bcale_month_pane_ParamLimits

0xcd54,	// (0x00056cba) bcale_month_pane

0xcd6a,	// (0x00056cd0) bcale_preview_pane_ParamLimits

0xcd6a,	// (0x00056cd0) bcale_preview_pane

0x28fb,	// (0x0004c861) list_single_fs_bigclock_pane_t1_ParamLimits

0x291a,	// (0x0004c880) list_single_fs_bigclock_pane_t2_ParamLimits

0x291a,	// (0x0004c880) list_single_fs_bigclock_pane_t2

0x0001,

0xfe8d,	// (0x00059df3) list_single_fs_bigclock_pane_t_ParamLimits

0xfe8d,	// (0x00059df3) list_single_fs_bigclock_pane_t

0x2b43,	// (0x0004caa9) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfef6,	// (0x00059e5c) main_fs_bigclock_unlock_btn_pane_g

0xd4c2,	// (0x00057428) aid_dia3_key_size_ParamLimits

0xd4c2,	// (0x00057428) aid_dia3_key_size

0xd4ce,	// (0x00057434) aid_dia3_listrow_size_ParamLimits

0xd4ce,	// (0x00057434) aid_dia3_listrow_size

0xd4dc,	// (0x00057442) dia3_keypad_fun_pane_ParamLimits

0xd4dc,	// (0x00057442) dia3_keypad_fun_pane

0xd4e8,	// (0x0005744e) dia3_keypad_num_pane_ParamLimits

0xd4e8,	// (0x0005744e) dia3_keypad_num_pane

0xd4f4,	// (0x0005745a) dia3_listscroll_pane_ParamLimits

0xd4f4,	// (0x0005745a) dia3_listscroll_pane

0xd500,	// (0x00057466) dia3_numentry_pane_ParamLimits

0xd500,	// (0x00057466) dia3_numentry_pane

0x2b59,	// (0x0004cabf) dia3_list_pane

0x2b62,	// (0x0004cac8) scroll_pane_cp12

0x2d35,	// (0x0004cc9b) bg_dia3_numentry_pane

0xd50c,	// (0x00057472) dia3_numentry_pane_t1

0xd51b,	// (0x00057481) cell_dia3_key_num_pane

0xd523,	// (0x00057489) cell_dia3_key0_fun_pane_ParamLimits

0xd523,	// (0x00057489) cell_dia3_key0_fun_pane

0xd530,	// (0x00057496) cell_dia3_key1_fun_pane_ParamLimits

0xd530,	// (0x00057496) cell_dia3_key1_fun_pane

0xd53d,	// (0x000574a3) dia3_listrow_pane

0x1a7d,	// (0x0004b9e3) bg_dia3_numentry_pane_g1

0x2d35,	// (0x0004cc9b) bg_button_pane_cp21

0x2b6b,	// (0x0004cad1) cell_dia3_key_num_pane_t1

0x2b79,	// (0x0004cadf) cell_dia3_key_num_pane_t2

0x2b88,	// (0x0004caee) cell_dia3_key_num_pane_t3

0x2b97,	// (0x0004cafd) cell_dia3_key_num_pane_t4

0x0003,

0xff12,	// (0x00059e78) cell_dia3_key_num_pane_t

0x2d35,	// (0x0004cc9b) bg_button_pane_cp19

0x2ba6,	// (0x0004cb0c) cell_dia3_key0_fun_pane_g1

0x2d35,	// (0x0004cc9b) bg_button_pane_cp20

0xd54a,	// (0x000574b0) cell_dia3_key1_fun_pane_g1

0xd552,	// (0x000574b8) area_left_week_number_pane

0xd563,	// (0x000574c9) area_top_day_name_pane

0xd56f,	// (0x000574d5) frame_month_view_pane

0x2bae,	// (0x0004cb14) grid_month_view_pane

0xd580,	// (0x000574e6) cell_top_day_name_pane_ParamLimits

0xd580,	// (0x000574e6) cell_top_day_name_pane

0xd596,	// (0x000574fc) cell_area_left_week_number_pane_ParamLimits

0xd596,	// (0x000574fc) cell_area_left_week_number_pane

0xd5b5,	// (0x0005751b) cell_month_view_pane_ParamLimits

0xd5b5,	// (0x0005751b) cell_month_view_pane

0x2bbc,	// (0x0004cb22) frm_month_g1

0xd5db,	// (0x00057541) frm_month_g2

0xd5ea,	// (0x00057550) frm_month_g3

0xd5f9,	// (0x0005755f) frm_month_g4

0xd608,	// (0x0005756e) frm_month_g5

0xd617,	// (0x0005757d) frm_month_g6

0xd626,	// (0x0005758c) frm_month_g7

0x2bc9,	// (0x0004cb2f) frm_month_g8

0xd635,	// (0x0005759b) frm_month_g9

0xd642,	// (0x000575a8) frm_month_g10

0xd64f,	// (0x000575b5) frm_month_g11

0xd65c,	// (0x000575c2) frm_month_g12

0xd669,	// (0x000575cf) frm_month_g13

0xd676,	// (0x000575dc) frm_month_g14

0xd683,	// (0x000575e9) frm_month_g15

0xd690,	// (0x000575f6) frm_month_g16

0x000f,

0xff1b,	// (0x00059e81) frm_month_g

0x2bd6,	// (0x0004cb3c) cell_top_day_name_pane_t1

0xd69d,	// (0x00057603) cell_area_left_week_number_pane_g1

0xd6ac,	// (0x00057612) cell_area_left_week_number_pane_t1

0xea78,	// (0x000589de) cell_month_view_pane_g1

0xd6c2,	// (0x00057628) cell_month_view_pane_t1

0x2d35,	// (0x0004cc9b) main_fps_pane

0x1fc9,	// (0x0004bf2f) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0x1fc9,	// (0x0004bf2f) cmail_ddmenu_btn02_pane_cp1

0x1fe5,	// (0x0004bf4b) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0x1fe5,	// (0x0004bf4b) cmail_ddmenu_btn02_pane_cp2

0xcf65,	// (0x00056ecb) cmail_ddmenu_btn02_pane_g2_ParamLimits

0xcf65,	// (0x00056ecb) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfe40,	// (0x00059da6) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfe40,	// (0x00059da6) cmail_ddmenu_btn02_pane_g

0xcf84,	// (0x00056eea) cmail_ddmenu_btn02_pane_t2_ParamLimits

0xcf84,	// (0x00056eea) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfe45,	// (0x00059dab) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfe45,	// (0x00059dab) cmail_ddmenu_btn02_pane_t

0xd6d8,	// (0x0005763e) fps_text_pane_ParamLimits

0xd6d8,	// (0x0005763e) fps_text_pane

0xd6e5,	// (0x0005764b) main_fps_pane_g1_ParamLimits

0xd6e5,	// (0x0005764b) main_fps_pane_g1

0xd6f1,	// (0x00057657) wait_bar_pane_cp010_ParamLimits

0xd6f1,	// (0x00057657) wait_bar_pane_cp010

0xd6fd,	// (0x00057663) fps_text_pane_t1_ParamLimits

0xd6fd,	// (0x00057663) fps_text_pane_t1

0xa5f2,	// (0x00054558) cam4_image_uncrop_pane_g1

0xa5fb,	// (0x00054561) cam4_image_uncrop_pane_g2

0xa604,	// (0x0005456a) cam4_image_uncrop_pane_g3

0xa60d,	// (0x00054573) cam4_image_uncrop_pane_g4

0x0003,

0xf901,	// (0x00059867) cam4_image_uncrop_pane_g

0xd53d,	// (0x000574a3) dia3_listrow_pane_ParamLimits

0x2d35,	// (0x0004cc9b) main_phob2_pane

0xcbdd,	// (0x00056b43) cell_tport_appsw_pane_cp02_ParamLimits

0xcbdd,	// (0x00056b43) cell_tport_appsw_pane_cp02

0xcbea,	// (0x00056b50) cell_tport_appsw_pane_cp03_ParamLimits

0xcbea,	// (0x00056b50) cell_tport_appsw_pane_cp03

0x2d35,	// (0x0004cc9b) phob2_contact_card_pane

0x2d35,	// (0x0004cc9b) phob2_listscroll_pane

0x2c01,	// (0x0004cb67) phob2_list_pane

0x2c09,	// (0x0004cb6f) scroll_pane_cp034

0xd716,	// (0x0005767c) phob2_cc_data_pane_ParamLimits

0xd716,	// (0x0005767c) phob2_cc_data_pane

0xd72e,	// (0x00057694) phob2_cc_listscroll_pane_ParamLimits

0xd72e,	// (0x00057694) phob2_cc_listscroll_pane

0xd746,	// (0x000576ac) list_double_large_graphic_phob2_pane_ParamLimits

0xd746,	// (0x000576ac) list_double_large_graphic_phob2_pane

0xd759,	// (0x000576bf) list_double_large_graphic_phob2_pane_g1_ParamLimits

0xd759,	// (0x000576bf) list_double_large_graphic_phob2_pane_g1

0xd76f,	// (0x000576d5) list_double_large_graphic_phob2_pane_g2_ParamLimits

0xd76f,	// (0x000576d5) list_double_large_graphic_phob2_pane_g2

0x0001,

0xff3c,	// (0x00059ea2) list_double_large_graphic_phob2_pane_g_ParamLimits

0xff3c,	// (0x00059ea2) list_double_large_graphic_phob2_pane_g

0xd77b,	// (0x000576e1) list_double_large_graphic_phob2_pane_t1_ParamLimits

0xd77b,	// (0x000576e1) list_double_large_graphic_phob2_pane_t1

0xd791,	// (0x000576f7) list_double_large_graphic_phob2_pane_t2_ParamLimits

0xd791,	// (0x000576f7) list_double_large_graphic_phob2_pane_t2

0x0001,

0xff41,	// (0x00059ea7) list_double_large_graphic_phob2_pane_t_ParamLimits

0xff41,	// (0x00059ea7) list_double_large_graphic_phob2_pane_t

0x2d35,	// (0x0004cc9b) list_highlight_pane_cp024

0xd7a6,	// (0x0005770c) phob2_cc_button_pane

0xd7ae,	// (0x00057714) phob2_cc_data_pane_g1_ParamLimits

0xd7ae,	// (0x00057714) phob2_cc_data_pane_g1

0xd7ba,	// (0x00057720) phob2_cc_data_pane_g2_ParamLimits

0xd7ba,	// (0x00057720) phob2_cc_data_pane_g2

0x0001,

0xff46,	// (0x00059eac) phob2_cc_data_pane_g_ParamLimits

0xff46,	// (0x00059eac) phob2_cc_data_pane_g

0xd7c6,	// (0x0005772c) phob2_cc_data_pane_t1_ParamLimits

0xd7c6,	// (0x0005772c) phob2_cc_data_pane_t1

0xd7d8,	// (0x0005773e) phob2_cc_data_pane_t2_ParamLimits

0xd7d8,	// (0x0005773e) phob2_cc_data_pane_t2

0xd7ea,	// (0x00057750) phob2_cc_data_pane_t3_ParamLimits

0xd7ea,	// (0x00057750) phob2_cc_data_pane_t3

0x0002,

0xff4b,	// (0x00059eb1) phob2_cc_data_pane_t_ParamLimits

0xff4b,	// (0x00059eb1) phob2_cc_data_pane_t

0x2c11,	// (0x0004cb77) phob2_cc_list_pane_ParamLimits

0x2c11,	// (0x0004cb77) phob2_cc_list_pane

0x11f8,	// (0x0004b15e) scroll_pane_cp035_ParamLimits

0x11f8,	// (0x0004b15e) scroll_pane_cp035

0x4a02,	// (0x0004e968) bg_button_pane_cp033

0x2c1d,	// (0x0004cb83) phob2_cc_button_pane_g1

0x2c29,	// (0x0004cb8f) phob2_cc_button_pane_t1

0x2c3e,	// (0x0004cba4) phob2_cc_button_pane_t2

0x0001,

0xff52,	// (0x00059eb8) phob2_cc_button_pane_t

0xd7fc,	// (0x00057762) list_double_large_graphic_phob2_cc_pane_ParamLimits

0xd7fc,	// (0x00057762) list_double_large_graphic_phob2_cc_pane

0xd815,	// (0x0005777b) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0xd815,	// (0x0005777b) list_double_large_graphic_phob2_cc_pane_g1

0xd826,	// (0x0005778c) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0xd826,	// (0x0005778c) list_double_large_graphic_phob2_cc_pane_g2

0xd835,	// (0x0005779b) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0xd835,	// (0x0005779b) list_double_large_graphic_phob2_cc_pane_g3

0xd844,	// (0x000577aa) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0xd844,	// (0x000577aa) list_double_large_graphic_phob2_cc_pane_g4

0xd855,	// (0x000577bb) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0xd855,	// (0x000577bb) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xff57,	// (0x00059ebd) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xff57,	// (0x00059ebd) list_double_large_graphic_phob2_cc_pane_g

0xd864,	// (0x000577ca) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0xd864,	// (0x000577ca) list_double_large_graphic_phob2_cc_pane_t1

0xd88d,	// (0x000577f3) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0xd88d,	// (0x000577f3) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xff62,	// (0x00059ec8) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xff62,	// (0x00059ec8) list_double_large_graphic_phob2_cc_pane_t

0x2c50,	// (0x0004cbb6) list_highlight_pane_cp025_ParamLimits

0x2c50,	// (0x0004cbb6) list_highlight_pane_cp025

0x4a02,	// (0x0004e968) bg_button_pane_cp033_ParamLimits

0x2c1d,	// (0x0004cb83) phob2_cc_button_pane_g1_ParamLimits

0x2c29,	// (0x0004cb8f) phob2_cc_button_pane_t1_ParamLimits

0x2c3e,	// (0x0004cba4) phob2_cc_button_pane_t2_ParamLimits

0xff52,	// (0x00059eb8) phob2_cc_button_pane_t_ParamLimits

0x5c46,	// (0x0004fbac) popup_wgtman_window

0x0fe0,	// (0x0004af46) scroll_pane_cp038

0xd313,	// (0x00057279) wgtman_btn_pane_cp_01_ParamLimits

0xd313,	// (0x00057279) wgtman_btn_pane_cp_01

0x2c5e,	// (0x0004cbc4) wgtman_content_pane

0x2c67,	// (0x0004cbcd) wgtman_heading_pane

0x2d35,	// (0x0004cc9b) bg_heading_pane_cp02

0x2c70,	// (0x0004cbd6) wgtman_heading_pane_g1

0x2c78,	// (0x0004cbde) wgtman_heading_pane_t1

0x2c86,	// (0x0004cbec) scroll_pane_cp036

0x2c8e,	// (0x0004cbf4) wgtman_list_pane

0x1ec8,	// (0x0004be2e) wgtman_list_pane_t1_ParamLimits

0x1ec8,	// (0x0004be2e) wgtman_list_pane_t1

0xa557,	// (0x000544bd) cam4_grid_pane

0xb20a,	// (0x00055170) bg_button_pane_cp015_ParamLimits

0xb21a,	// (0x00055180) bg_button_pane_cp016_ParamLimits

0xb22d,	// (0x00055193) bg_button_pane_cp017_ParamLimits

0xb27f,	// (0x000551e5) popup_vitu2_query_window_g3_ParamLimits

0xb27f,	// (0x000551e5) popup_vitu2_query_window_g3

0xb332,	// (0x00055298) popup_vitu2_query_window_t6_ParamLimits

0xb332,	// (0x00055298) popup_vitu2_query_window_t6

0xb35d,	// (0x000552c3) popup_vitu2_query_window_t7_ParamLimits

0xb35d,	// (0x000552c3) popup_vitu2_query_window_t7

0x0d81,	// (0x0004ace7) cam4_grid_pane_g1

0x0d8a,	// (0x0004acf0) cam4_grid_pane_g2

0x2c96,	// (0x0004cbfc) cam4_grid_pane_g3

0x2c9f,	// (0x0004cc05) cam4_grid_pane_g4

0x0003,

0xff67,	// (0x00059ecd) cam4_grid_pane_g

0x6bf6,	// (0x00050b5c) aid_placing_vt_slider_lsc_ParamLimits

0x6ea0,	// (0x00050e06) vidtel_button_pane_ParamLimits

0x6ea0,	// (0x00050e06) vidtel_button_pane

0x2d35,	// (0x0004cc9b) bg_button_pane_cp034

0xd8b6,	// (0x0005781c) vidtel_button_pane_g1

0xd8be,	// (0x00057824) vidtel_button_pane_t1

0x113f,	// (0x0004b0a5) aid_size_vtel_slider_touch

0x11f8,	// (0x0004b15e) scroll_pane_cp039

0xc0a4,	// (0x0005600a) ncim_query_button_pane_cp01_ParamLimits

0xc0c3,	// (0x00056029) ncimui_query_pane_g1_ParamLimits

0x4a02,	// (0x0004e968) input_focus_pane_cp012_ParamLimits

0x1ac3,	// (0x0004ba29) ncim_query_entry_pane_t1_ParamLimits

0x11f8,	// (0x0004b15e) scroll_pane_cp039_ParamLimits

0x402d,	// (0x0004df93) navi_pane_bcale_mc_g1

0x4035,	// (0x0004df9b) navi_pane_bcale_mc_t1

0x202e,	// (0x0004bf94) main_sp_fs_email_pane_g1

0x203a,	// (0x0004bfa0) main_sp_fs_email_pane_g2

0x0001,

0xfcf8,	// (0x00059c5e) main_sp_fs_email_pane_g

0x2523,	// (0x0004c489) list_single_cale_mrui_row_pane_g3_ParamLimits

0x2523,	// (0x0004c489) list_single_cale_mrui_row_pane_g3

0xcfa2,	// (0x00056f08) list_single_recal_day_pane_g5_event_pane

0x2765,	// (0x0004c6cb) list_single_recal_day_pane_g7

0x2ca8,	// (0x0004cc0e) list_recal_day_event_pane_cp01

0x2cb1,	// (0x0004cc17) list_recal_vselct_arw_lo_pane_cp01

0x2cb9,	// (0x0004cc1f) list_recal_vselct_arw_up_pane_cp01

0x2cc1,	// (0x0004cc27) list_recal_vselct_pane_cp01

0x114f,	// (0x0004b0b5) list_recal_day_event_pane_cp01_g1

0x2ccb,	// (0x0004cc31) list_recal_day_event_pane_cp01_t1

0x276d,	// (0x0004c6d3) list_single_recal_day_pane_t1_ParamLimits

0x277f,	// (0x0004c6e5) list_single_recal_day_pane_t2_ParamLimits

0xfe55,	// (0x00059dbb) list_single_recal_day_pane_t_ParamLimits

0x34ca,	// (0x0004d430) bg_notes_pane_ParamLimits

0x3579,	// (0x0004d4df) list_notes_pane_ParamLimits

0x5f0b,	// (0x0004fe71) scroll_pane_cp06_ParamLimits

0x359b,	// (0x0004d501) main_notes_pane_ParamLimits

0x2d35,	// (0x0004cc9b) main_welc_pane

0xd8d4,	// (0x0005783a) main_welc_body_pane_ParamLimits

0xd8d4,	// (0x0005783a) main_welc_body_pane

0xd8ed,	// (0x00057853) main_welc_opti_pane_ParamLimits

0xd8ed,	// (0x00057853) main_welc_opti_pane

0xd91a,	// (0x00057880) main_welc_pane_t1_ParamLimits

0xd91a,	// (0x00057880) main_welc_pane_t1

0xd932,	// (0x00057898) main_welc_body_row_pane_ParamLimits

0xd932,	// (0x00057898) main_welc_body_row_pane

0x2cec,	// (0x0004cc52) main_welc_opti_row_pane_ParamLimits

0x2cec,	// (0x0004cc52) main_welc_opti_row_pane

0x2cfa,	// (0x0004cc60) main_welc_opti_row_pane_g1

0xd946,	// (0x000578ac) main_welc_opti_row_pane_t1

0x2d02,	// (0x0004cc68) main_welc_body_row_pane_t1

0x29e2,	// (0x0004c948) popup_notif_wgt_heading_pane

0x29fc,	// (0x0004c962) aid_size_list_notif_wgt_del_ParamLimits

0x2a09,	// (0x0004c96f) list_notif_wgt_row_pane_g1_ParamLimits

0x2a15,	// (0x0004c97b) list_notif_wgt_row_pane_g2_ParamLimits

0x2a24,	// (0x0004c98a) list_notif_wgt_row_pane_g3_ParamLimits

0xfebc,	// (0x00059e22) list_notif_wgt_row_pane_g_ParamLimits

0x2a31,	// (0x0004c997) list_notif_wgt_row_pane_t1_ParamLimits

0x2a47,	// (0x0004c9ad) list_notif_wgt_row_pane_t2_ParamLimits

0x2a59,	// (0x0004c9bf) list_notif_wgt_row_pane_t3_ParamLimits

0xfec3,	// (0x00059e29) list_notif_wgt_row_pane_t_ParamLimits

0xd38a,	// (0x000572f0) listrow_wgtman_pane_g1_ParamLimits

0xd397,	// (0x000572fd) listrow_wgtman_pane_g2_ParamLimits

0xfeec,	// (0x00059e52) listrow_wgtman_pane_g_ParamLimits

0xd3af,	// (0x00057315) listrow_wgtman_pane_t1_ParamLimits

0xd3c7,	// (0x0005732d) listrow_wgtman_pane_t2_ParamLimits

0xfef1,	// (0x00059e57) listrow_wgtman_pane_t_ParamLimits

0xd3ed,	// (0x00057353) wait_bar_pane_cp09_ParamLimits

0x2d35,	// (0x0004cc9b) bg_popup_heading_pane_cp02

0x2d11,	// (0x0004cc77) popup_notif_wgt_heading_pane_g1

0x2d19,	// (0x0004cc7f) popup_notif_wgt_heading_pane_t1

0x2d35,	// (0x0004cc9b) main_vids_pane

0x2d35,	// (0x0004cc9b) vids_listscroll_pane

0xd955,	// (0x000578bb) scroll_pane_cp040

0x2d35,	// (0x0004cc9b) vids_list_pane

0xd95e,	// (0x000578c4) vids_list_double_pane_ParamLimits

0xd95e,	// (0x000578c4) vids_list_double_pane

0xd96f,	// (0x000578d5) vids_list_double_pane_g1

0xd978,	// (0x000578de) vids_list_double_pane_t1

0xd987,	// (0x000578ed) vids_list_double_pane_t2

0x0001,

0xff75,	// (0x00059edb) vids_list_double_pane_t

0x87fc,	// (0x00052762) main_ncimui_pane_ParamLimits

0xbefe,	// (0x00055e64) main_ncimui_pane_g1_ParamLimits

0xbf0a,	// (0x00055e70) main_ncimui_pane_g2_ParamLimits

0xbf0a,	// (0x00055e70) main_ncimui_pane_g2

0x0001,

0xfbfd,	// (0x00059b63) main_ncimui_pane_g_ParamLimits

0xfbfd,	// (0x00059b63) main_ncimui_pane_g

0xd902,	// (0x00057868) main_welc_pane_g1_ParamLimits

0xd902,	// (0x00057868) main_welc_pane_g1

0xd90e,	// (0x00057874) main_welc_pane_g2_ParamLimits

0xd90e,	// (0x00057874) main_welc_pane_g2

0x0001,

0xff70,	// (0x00059ed6) main_welc_pane_g_ParamLimits

0xff70,	// (0x00059ed6) main_welc_pane_g

0x34ca,	// (0x0004d430) listscroll_mce_pane_ParamLimits

0x4180,	// (0x0004e0e6) wait_bar_pane_cp10

0xe43d,	// (0x000583a3) main_cale_day_pane_ParamLimits

0xe43d,	// (0x000583a3) main_cale_week_pane_ParamLimits

0x34ca,	// (0x0004d430) main_messa_pane_ParamLimits

0x9a1b,	// (0x00053981) main_clock2_btn_pane_ParamLimits

0x9a1b,	// (0x00053981) main_clock2_btn_pane

0xec00,	// (0x00058b66) main_clock2_btn_pane_cp01_ParamLimits

0xec00,	// (0x00058b66) main_clock2_btn_pane_cp01

0x24af,	// (0x0004c415) list_cale_mrui_pane_ParamLimits

0x2a8d,	// (0x0004c9f3) main_cf0_pane_g2

0x0001,

0xfeca,	// (0x00059e30) main_cf0_pane_g

0xd552,	// (0x000574b8) area_left_week_number_pane_ParamLimits

0xd563,	// (0x000574c9) area_top_day_name_pane_ParamLimits

0xd56f,	// (0x000574d5) frame_month_view_pane_ParamLimits

0x2bae,	// (0x0004cb14) grid_month_view_pane_ParamLimits

0x2bbc,	// (0x0004cb22) frm_month_g1_ParamLimits

0xd5db,	// (0x00057541) frm_month_g2_ParamLimits

0xd5ea,	// (0x00057550) frm_month_g3_ParamLimits

0xd5f9,	// (0x0005755f) frm_month_g4_ParamLimits

0xd608,	// (0x0005756e) frm_month_g5_ParamLimits

0xd617,	// (0x0005757d) frm_month_g6_ParamLimits

0xd626,	// (0x0005758c) frm_month_g7_ParamLimits

0x2bc9,	// (0x0004cb2f) frm_month_g8_ParamLimits

0xd635,	// (0x0005759b) frm_month_g9_ParamLimits

0xd642,	// (0x000575a8) frm_month_g10_ParamLimits

0xd64f,	// (0x000575b5) frm_month_g11_ParamLimits

0xd65c,	// (0x000575c2) frm_month_g12_ParamLimits

0xd669,	// (0x000575cf) frm_month_g13_ParamLimits

0xd676,	// (0x000575dc) frm_month_g14_ParamLimits

0xd683,	// (0x000575e9) frm_month_g15_ParamLimits

0xd690,	// (0x000575f6) frm_month_g16_ParamLimits

0xff1b,	// (0x00059e81) frm_month_g_ParamLimits

0x2bd6,	// (0x0004cb3c) cell_top_day_name_pane_t1_ParamLimits

0xd69d,	// (0x00057603) cell_area_left_week_number_pane_g1_ParamLimits

0xd6ac,	// (0x00057612) cell_area_left_week_number_pane_t1_ParamLimits

0xea78,	// (0x000589de) cell_month_view_pane_g1_ParamLimits

0xd6c2,	// (0x00057628) cell_month_view_pane_t1_ParamLimits

0x34c2,	// (0x0004d428) main_clock2_btn_pane_g1

0x2d27,	// (0x0004cc8d) main_clock2_btn_pane_t1

0x4a02,	// (0x0004e968) listscroll_cmail_pane_ParamLimits

0x202e,	// (0x0004bf94) main_sp_fs_email_pane_g1_ParamLimits

0x203a,	// (0x0004bfa0) main_sp_fs_email_pane_g2_ParamLimits

0xfcf8,	// (0x00059c5e) main_sp_fs_email_pane_g_ParamLimits

0x26d5,	// (0x0004c63b) list_recal_day_pane_ParamLimits

0x26e6,	// (0x0004c64c) mian_recal_day_pane_t1

0xc8c3,	// (0x00056829) list_single_dyc_row_text_pane_t4_ParamLimits

0xc8c3,	// (0x00056829) list_single_dyc_row_text_pane_t4

0xc8fa,	// (0x00056860) list_single_dyc_row_text_pane_t5_ParamLimits

0xc8fa,	// (0x00056860) list_single_dyc_row_text_pane_t5

0x20fe,	// (0x0004c064) list_single_dyc_row_text_pane_t6_ParamLimits

0x20fe,	// (0x0004c064) list_single_dyc_row_text_pane_t6

0x3b5c,	// (0x0004dac2) aid_mgn_list_cale_time_pane

0x87fc,	// (0x00052762) main_gallery2_pane_ParamLimits

0xec14,	// (0x00058b7a) main_clock2_pane_cp01_t1

0xec22,	// (0x00058b88) main_clock2_pane_cp01_t3

0x0001,

0xf7d7,	// (0x0005973d) main_clock2_pane_cp01_t

0x6368,	// (0x000502ce) cale_week_scroll_pane_g16_ParamLimits

0x6368,	// (0x000502ce) cale_week_scroll_pane_g16

0x374c,	// (0x0004d6b2) vorec_slider_pane

0xd8be,	// (0x00057824) vidtel_button_pane_t1_ParamLimits

0xcff9,	// (0x00056f5f) main_fs_bigclock_clock_pane_g1_ParamLimits

0xcff9,	// (0x00056f5f) main_fs_bigclock_clock_pane_g2_ParamLimits

0xd006,	// (0x00056f6c) main_fs_bigclock_clock_pane_g3_ParamLimits

0xd006,	// (0x00056f6c) main_fs_bigclock_clock_pane_g4_ParamLimits

0xfe78,	// (0x00059dde) main_fs_bigclock_clock_pane_g_ParamLimits

0xd012,	// (0x00056f78) main_fs_bigclock_clock_pane_t1_ParamLimits

0xd025,	// (0x00056f8b) main_fs_bigclock_clock_pane_t2_ParamLimits

0xfe81,	// (0x00059de7) main_fs_bigclock_clock_pane_t_ParamLimits
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

} // end of namespace AknLayoutScalable_Abrw_pqp_apps_qvga_prt_Small
