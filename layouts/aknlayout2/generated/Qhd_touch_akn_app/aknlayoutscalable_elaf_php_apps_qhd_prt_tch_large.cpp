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

#include "aknlayoutscalable_elaf_php_apps_qhd_prt_tch_large.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_php_apps_qhd_prt_tch[]; }

namespace AknLayoutScalable_Elaf_php_apps_qhd_prt_tch_Large
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_php_apps_qhd_prt_tch + 0x000636a1 };

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
0x77e4,	// (0x0006ae85) Screen

0x77f0,	// (0x0006ae91) application_window

0x7856,	// (0x0006aef7) area_bottom_pane_ParamLimits

0x7856,	// (0x0006aef7) area_bottom_pane

0x78af,	// (0x0006af50) area_top_pane_ParamLimits

0x78af,	// (0x0006af50) area_top_pane

0x0083,	// (0x00063724) call_video_uplink_pane_ParamLimits

0x0083,	// (0x00063724) call_video_uplink_pane

0x793c,	// (0x0006afdd) main_pane_ParamLimits

0x793c,	// (0x0006afdd) main_pane

0x2903,	// (0x00065fa4) context_pane

0xa874,	// (0x0006df15) navi_pane

0xa894,	// (0x0006df35) popup_cale_events_window_ParamLimits

0xa894,	// (0x0006df35) popup_cale_events_window

0x2916,	// (0x00065fb7) popup_mup_playback_window

0xa8ac,	// (0x0006df4d) signal_pane

0x0820,	// (0x00063ec1) main_browser_pane

0x1474,	// (0x00064b15) main_burst_pane

0xa73e,	// (0x0006dddf) main_calc_pane

0x1474,	// (0x00064b15) main_cale_day_pane

0x0820,	// (0x00063ec1) main_cale_month_pane

0x1474,	// (0x00064b15) main_cale_week_pane

0x1474,	// (0x00064b15) main_call_pane

0x04c2,	// (0x00063b63) main_call_poc_pane

0x1474,	// (0x00064b15) main_camera_pane

0x1474,	// (0x00064b15) main_chi_dic_pane

0x12f9,	// (0x0006499a) main_clock_pane

0x04c2,	// (0x00063b63) main_fmradio_pane

0x1474,	// (0x00064b15) main_graph_messa_pane

0x04c2,	// (0x00063b63) main_help_pane

0x0820,	// (0x00063ec1) main_im_pane

0x071d,	// (0x00063dbe) main_image_pane_ParamLimits

0x071d,	// (0x00063dbe) main_image_pane

0x04c2,	// (0x00063b63) main_location2_pane

0x1474,	// (0x00064b15) main_location_pane

0x04c2,	// (0x00063b63) main_messa_pane

0x04c2,	// (0x00063b63) main_mp2_pane

0x1474,	// (0x00064b15) main_mp_pane

0x04c2,	// (0x00063b63) main_msg_pane

0x04c2,	// (0x00063b63) main_mup_eq_pane

0x04c2,	// (0x00063b63) main_mup_pane

0x1474,	// (0x00064b15) main_notes_pane

0x04c2,	// (0x00063b63) main_pec_pane

0x04c2,	// (0x00063b63) main_phob_pane

0x04c2,	// (0x00063b63) main_pinb_pane

0x04c2,	// (0x00063b63) main_postcard_pane

0x04c2,	// (0x00063b63) main_qdial_pane

0x1474,	// (0x00064b15) main_skin_pane

0x04c2,	// (0x00063b63) main_smil2_pane

0x1474,	// (0x00064b15) main_smil_pane

0x1474,	// (0x00064b15) main_video_pane

0x1474,	// (0x00064b15) main_video_tele_pane

0x071d,	// (0x00063dbe) main_viewer_pane_ParamLimits

0x071d,	// (0x00063dbe) main_viewer_pane

0x1474,	// (0x00064b15) main_vorec_pane

0xa774,	// (0x0006de15) popup_blid_sat_info_window_ParamLimits

0xa774,	// (0x0006de15) popup_blid_sat_info_window

0xa78a,	// (0x0006de2b) popup_dyc_status_message_window_ParamLimits

0xa78a,	// (0x0006de2b) popup_dyc_status_message_window

0xa79a,	// (0x0006de3b) popup_grid_large_graphic_window_ParamLimits

0xa79a,	// (0x0006de3b) popup_grid_large_graphic_window

0xa810,	// (0x0006deb1) popup_loc_request_window_ParamLimits

0xa810,	// (0x0006deb1) popup_loc_request_window

0xa84c,	// (0x0006deed) popup_wml_address_window_ParamLimits

0xa84c,	// (0x0006deed) popup_wml_address_window

0xa616,	// (0x0006dcb7) call_muted_g1

0xa2d8,	// (0x0006d979) popup_call_audio_conf_window_ParamLimits

0xa2d8,	// (0x0006d979) popup_call_audio_conf_window

0xa626,	// (0x0006dcc7) popup_call_audio_first_window_ParamLimits

0xa626,	// (0x0006dcc7) popup_call_audio_first_window

0xa666,	// (0x0006dd07) popup_call_audio_in_window_ParamLimits

0xa666,	// (0x0006dd07) popup_call_audio_in_window

0xa68a,	// (0x0006dd2b) popup_call_audio_out_window_ParamLimits

0xa68a,	// (0x0006dd2b) popup_call_audio_out_window

0xa6ac,	// (0x0006dd4d) popup_call_audio_second_window_ParamLimits

0xa6ac,	// (0x0006dd4d) popup_call_audio_second_window

0xa6dc,	// (0x0006dd7d) popup_call_audio_wait_window_ParamLimits

0xa6dc,	// (0x0006dd7d) popup_call_audio_wait_window

0xa6fd,	// (0x0006dd9e) popup_number_entry_window_ParamLimits

0xa6fd,	// (0x0006dd9e) popup_number_entry_window

0x00af,	// (0x00063750) bg_popup_call_pane_cp05_ParamLimits

0x00af,	// (0x00063750) bg_popup_call_pane_cp05

0x00cf,	// (0x00063770) popup_number_entry_window_t1

0x00e2,	// (0x00063783) popup_number_entry_window_t2

0x00f4,	// (0x00063795) popup_number_entry_window_t3

0x0003,

0xf0ec,	// (0x0007278d) popup_number_entry_window_t

0x0106,	// (0x000637a7) text_title_cp2

0x0119,	// (0x000637ba) bg_popup_call_pane_cp_ParamLimits

0x0119,	// (0x000637ba) bg_popup_call_pane_cp

0x0127,	// (0x000637c8) call_thumbnail_pane

0x012f,	// (0x000637d0) popup_call_audio_in_window_g1_ParamLimits

0x012f,	// (0x000637d0) popup_call_audio_in_window_g1

0x013b,	// (0x000637dc) popup_call_audio_in_window_g2_ParamLimits

0x013b,	// (0x000637dc) popup_call_audio_in_window_g2

0x0147,	// (0x000637e8) popup_call_audio_in_window_g3_ParamLimits

0x0147,	// (0x000637e8) popup_call_audio_in_window_g3

0x0002,

0xf0f5,	// (0x00072796) popup_call_audio_in_window_g_ParamLimits

0xf0f5,	// (0x00072796) popup_call_audio_in_window_g

0x0153,	// (0x000637f4) popup_call_audio_in_window_t1_ParamLimits

0x0153,	// (0x000637f4) popup_call_audio_in_window_t1

0x016f,	// (0x00063810) popup_call_audio_in_window_t2_ParamLimits

0x016f,	// (0x00063810) popup_call_audio_in_window_t2

0x018b,	// (0x0006382c) popup_call_audio_in_window_t3_ParamLimits

0x018b,	// (0x0006382c) popup_call_audio_in_window_t3

0x0002,

0xf0fc,	// (0x0007279d) popup_call_audio_in_window_t_ParamLimits

0xf0fc,	// (0x0007279d) popup_call_audio_in_window_t

0x0119,	// (0x000637ba) bg_popup_call_pane_cp01_ParamLimits

0x0119,	// (0x000637ba) bg_popup_call_pane_cp01

0x0127,	// (0x000637c8) call_thumbnail_pane_cp02

0x019e,	// (0x0006383f) call_type_pane_cp022

0x01a6,	// (0x00063847) popup_call_audio_out_window_g1_ParamLimits

0x01a6,	// (0x00063847) popup_call_audio_out_window_g1

0x01b8,	// (0x00063859) popup_call_audio_out_window_g2_ParamLimits

0x01b8,	// (0x00063859) popup_call_audio_out_window_g2

0x01c4,	// (0x00063865) popup_call_audio_out_window_g3_ParamLimits

0x01c4,	// (0x00063865) popup_call_audio_out_window_g3

0x0002,

0xf103,	// (0x000727a4) popup_call_audio_out_window_g_ParamLimits

0xf103,	// (0x000727a4) popup_call_audio_out_window_g

0x01d6,	// (0x00063877) popup_call_audio_out_window_t1_ParamLimits

0x01d6,	// (0x00063877) popup_call_audio_out_window_t1

0x01ee,	// (0x0006388f) popup_call_audio_out_window_t2_ParamLimits

0x01ee,	// (0x0006388f) popup_call_audio_out_window_t2

0x0001,

0xf10a,	// (0x000727ab) popup_call_audio_out_window_t_ParamLimits

0xf10a,	// (0x000727ab) popup_call_audio_out_window_t

0x0203,	// (0x000638a4) bg_popup_call_pane_ParamLimits

0x0203,	// (0x000638a4) bg_popup_call_pane

0x7b37,	// (0x0006b1d8) call_thumbnail_pane_cp_ParamLimits

0x7b37,	// (0x0006b1d8) call_thumbnail_pane_cp

0x0287,	// (0x00063928) call_type_pane_cp01_ParamLimits

0x0287,	// (0x00063928) call_type_pane_cp01

0x02cb,	// (0x0006396c) popup_call_audio_first_window_g1_ParamLimits

0x02cb,	// (0x0006396c) popup_call_audio_first_window_g1

0x0317,	// (0x000639b8) popup_call_audio_first_window_g2_ParamLimits

0x0317,	// (0x000639b8) popup_call_audio_first_window_g2

0x0001,

0xf10f,	// (0x000727b0) popup_call_audio_first_window_g_ParamLimits

0xf10f,	// (0x000727b0) popup_call_audio_first_window_g

0x035b,	// (0x000639fc) popup_call_audio_first_window_t1_ParamLimits

0x035b,	// (0x000639fc) popup_call_audio_first_window_t1

0x0407,	// (0x00063aa8) popup_call_audio_first_window_t4_ParamLimits

0x0407,	// (0x00063aa8) popup_call_audio_first_window_t4

0x0493,	// (0x00063b34) popup_call_audio_first_window_t5_ParamLimits

0x0493,	// (0x00063b34) popup_call_audio_first_window_t5

0x0002,

0xf114,	// (0x000727b5) popup_call_audio_first_window_t_ParamLimits

0xf114,	// (0x000727b5) popup_call_audio_first_window_t

0x04c2,	// (0x00063b63) bg_popup_call_pane_cp02

0x04cc,	// (0x00063b6d) call_type_pane_cp023

0x04d4,	// (0x00063b75) popup_call_audio_wait_window_g1

0x04dc,	// (0x00063b7d) popup_call_audio_wait_window_g2

0x0001,

0xf11b,	// (0x000727bc) popup_call_audio_wait_window_g

0x04e4,	// (0x00063b85) popup_call_audio_wait_window_t3

0x04f2,	// (0x00063b93) bg_popup_call_pane_cp03_ParamLimits

0x04f2,	// (0x00063b93) bg_popup_call_pane_cp03

0x0552,	// (0x00063bf3) call_thumbnail_pane_cp011_ParamLimits

0x0552,	// (0x00063bf3) call_thumbnail_pane_cp011

0x055e,	// (0x00063bff) call_type_pane_cp034_ParamLimits

0x055e,	// (0x00063bff) call_type_pane_cp034

0x059a,	// (0x00063c3b) popup_call_audio_second_window_g1_ParamLimits

0x059a,	// (0x00063c3b) popup_call_audio_second_window_g1

0x05d6,	// (0x00063c77) popup_call_audio_second_window_g2_ParamLimits

0x05d6,	// (0x00063c77) popup_call_audio_second_window_g2

0x0001,

0xf120,	// (0x000727c1) popup_call_audio_second_window_g_ParamLimits

0xf120,	// (0x000727c1) popup_call_audio_second_window_g

0x0612,	// (0x00063cb3) popup_call_audio_second_window_t1_ParamLimits

0x0612,	// (0x00063cb3) popup_call_audio_second_window_t1

0x0693,	// (0x00063d34) popup_call_audio_second_window_t2_ParamLimits

0x0693,	// (0x00063d34) popup_call_audio_second_window_t2

0x06c9,	// (0x00063d6a) popup_call_audio_second_window_t3_ParamLimits

0x06c9,	// (0x00063d6a) popup_call_audio_second_window_t3

0x0002,

0xf125,	// (0x000727c6) popup_call_audio_second_window_t_ParamLimits

0xf125,	// (0x000727c6) popup_call_audio_second_window_t

0x04c2,	// (0x00063b63) bg_popup_call_pane_cp04

0x06ff,	// (0x00063da0) list_conf_pane

0x0707,	// (0x00063da8) popup_call_audio_conf_window_t1

0x0715,	// (0x00063db6) call_thumbnail_pane_g1

0x071d,	// (0x00063dbe) bg_pinb_pane_ParamLimits

0x071d,	// (0x00063dbe) bg_pinb_pane

0x072b,	// (0x00063dcc) find_pinb_pane

0x0734,	// (0x00063dd5) listscroll_pinb_pane_ParamLimits

0x0734,	// (0x00063dd5) listscroll_pinb_pane

0x0743,	// (0x00063de4) pinb_bg_pane_g1

0x7b5b,	// (0x0006b1fc) pinb_bg_pane_g2

0x7b67,	// (0x0006b208) pinb_bg_pane_g3

0x7b73,	// (0x0006b214) pinb_bg_pane_g4

0x7b7f,	// (0x0006b220) pinb_bg_pane_g5

0x7b8b,	// (0x0006b22c) pinb_bg_pane_g6

0x7b96,	// (0x0006b237) pinb_bg_pane_g7

0x7ba1,	// (0x0006b242) pinb_bg_pane_g8

0x7bac,	// (0x0006b24d) pinb_bg_pane_g9

0x7bb6,	// (0x0006b257) pinb_bg_pane_g10

0x0009,

0xf12c,	// (0x000727cd) pinb_bg_pane_g

0x7bd3,	// (0x0006b274) grid_pinb_pane

0x7bde,	// (0x0006b27f) list_pinb_pane

0x7be9,	// (0x0006b28a) scroll_pane_cp01_ParamLimits

0x7be9,	// (0x0006b28a) scroll_pane_cp01

0x074d,	// (0x00063dee) find_pinb_pane_g1_ParamLimits

0x074d,	// (0x00063dee) find_pinb_pane_g1

0x0765,	// (0x00063e06) find_pinb_pane_t1

0x0777,	// (0x00063e18) find_pinb_pane_t2

0x0001,

0xf146,	// (0x000727e7) find_pinb_pane_t

0x078c,	// (0x00063e2d) input_focus_pane_cp01_ParamLimits

0x078c,	// (0x00063e2d) input_focus_pane_cp01

0x7bfb,	// (0x0006b29c) cell_pinb_pane_ParamLimits

0x7bfb,	// (0x0006b29c) cell_pinb_pane

0x7c20,	// (0x0006b2c1) cell_pinb_pane_g1_ParamLimits

0x7c20,	// (0x0006b2c1) cell_pinb_pane_g1

0x7c35,	// (0x0006b2d6) cell_pinb_pane_g2_ParamLimits

0x7c35,	// (0x0006b2d6) cell_pinb_pane_g2

0x0798,	// (0x00063e39) cell_pinb_pane_g3_ParamLimits

0x0798,	// (0x00063e39) cell_pinb_pane_g3

0x0002,

0xf14b,	// (0x000727ec) cell_pinb_pane_g_ParamLimits

0xf14b,	// (0x000727ec) cell_pinb_pane_g

0x04c2,	// (0x00063b63) grid_highlight_pane_cp01

0x7c41,	// (0x0006b2e2) list_pinb_item_pane_ParamLimits

0x7c41,	// (0x0006b2e2) list_pinb_item_pane

0x04c2,	// (0x00063b63) list_highlight_pane_cp02

0x7c61,	// (0x0006b302) list_pinb_item_pane_g1_ParamLimits

0x7c61,	// (0x0006b302) list_pinb_item_pane_g1

0x07a4,	// (0x00063e45) list_pinb_item_pane_g2_ParamLimits

0x07a4,	// (0x00063e45) list_pinb_item_pane_g2

0x7c6e,	// (0x0006b30f) list_pinb_item_pane_g3_ParamLimits

0x7c6e,	// (0x0006b30f) list_pinb_item_pane_g3

0x7c7f,	// (0x0006b320) list_pinb_item_pane_g4_ParamLimits

0x7c7f,	// (0x0006b320) list_pinb_item_pane_g4

0x0003,

0xf152,	// (0x000727f3) list_pinb_item_pane_g_ParamLimits

0xf152,	// (0x000727f3) list_pinb_item_pane_g

0x7c8b,	// (0x0006b32c) list_pinb_item_pane_t1_ParamLimits

0x7c8b,	// (0x0006b32c) list_pinb_item_pane_t1

0x7cbc,	// (0x0006b35d) calc_display_pane

0x7cda,	// (0x0006b37b) calc_paper_pane

0x7cf6,	// (0x0006b397) grid_calc_pane

0x04c2,	// (0x00063b63) bg_list_pane_cp01

0x7d20,	// (0x0006b3c1) clock_g1

0x7d28,	// (0x0006b3c9) clock_g2

0x0001,

0xf15b,	// (0x000727fc) clock_g

0x7d32,	// (0x0006b3d3) clock_t1_ParamLimits

0x7d32,	// (0x0006b3d3) clock_t1

0x7d47,	// (0x0006b3e8) clock_t2_ParamLimits

0x7d47,	// (0x0006b3e8) clock_t2

0x7d59,	// (0x0006b3fa) clock_t3_ParamLimits

0x7d59,	// (0x0006b3fa) clock_t3

0x7d6b,	// (0x0006b40c) clock_t4_ParamLimits

0x7d6b,	// (0x0006b40c) clock_t4

0x7d7d,	// (0x0006b41e) clock_t5_ParamLimits

0x7d7d,	// (0x0006b41e) clock_t5

0x7d92,	// (0x0006b433) clock_t6_ParamLimits

0x7d92,	// (0x0006b433) clock_t6

0x7da4,	// (0x0006b445) clock_t7_ParamLimits

0x7da4,	// (0x0006b445) clock_t7

0x7db6,	// (0x0006b457) clock_t8_ParamLimits

0x7db6,	// (0x0006b457) clock_t8

0x7dcc,	// (0x0006b46d) clock_t9_ParamLimits

0x7dcc,	// (0x0006b46d) clock_t9

0x0008,

0xf160,	// (0x00072801) clock_t_ParamLimits

0xf160,	// (0x00072801) clock_t

0x07b8,	// (0x00063e59) popup_clock_analogue_window_cp02

0x07b8,	// (0x00063e59) popup_clock_digital_window_cp01

0x07c0,	// (0x00063e61) listscroll_help_pane

0x04c2,	// (0x00063b63) phob_pre_status_pane

0x07ca,	// (0x00063e6b) grid_qdial_pane

0x04c2,	// (0x00063b63) listscroll_mce_pane

0x07d4,	// (0x00063e75) bg_notes_pane

0x07de,	// (0x00063e7f) list_notes_pane

0x7de2,	// (0x0006b483) scroll_pane_cp06

0x07e8,	// (0x00063e89) bg_calc_paper_pane

0x7ded,	// (0x0006b48e) list_calc_pane

0x0820,	// (0x00063ec1) bg_calc_display_pane

0x7e07,	// (0x0006b4a8) calc_display_pane_t1

0x7e1c,	// (0x0006b4bd) calc_display_pane_t2

0x7e31,	// (0x0006b4d2) calc_display_pane_t3

0x0002,

0xf173,	// (0x00072814) calc_display_pane_t

0x7e43,	// (0x0006b4e4) cell_calc_pane_ParamLimits

0x7e43,	// (0x0006b4e4) cell_calc_pane

0x083e,	// (0x00063edf) bg_calc_paper_pane_g1

0x0856,	// (0x00063ef7) bg_calc_paper_pane_g2

0x084a,	// (0x00063eeb) bg_calc_paper_pane_g3

0x086e,	// (0x00063f0f) bg_calc_paper_pane_g4

0x0862,	// (0x00063f03) bg_calc_paper_pane_g5

0x7e70,	// (0x0006b511) bg_calc_paper_pane_g6

0x7e81,	// (0x0006b522) bg_calc_paper_pane_g7

0x7e92,	// (0x0006b533) bg_calc_paper_pane_g8

0x0007,

0xf17a,	// (0x0007281b) bg_calc_paper_pane_g

0x7ea3,	// (0x0006b544) calc_bg_paper_pane_g9

0x7eb4,	// (0x0006b555) list_calc_item_pane_ParamLimits

0x7eb4,	// (0x0006b555) list_calc_item_pane

0x087a,	// (0x00063f1b) list_calc_item_pane_g1

0x7ee3,	// (0x0006b584) list_calc_item_pane_t1_ParamLimits

0x7ee3,	// (0x0006b584) list_calc_item_pane_t1

0x7ef5,	// (0x0006b596) list_calc_item_pane_t2_ParamLimits

0x7ef5,	// (0x0006b596) list_calc_item_pane_t2

0x0001,

0xf18b,	// (0x0007282c) list_calc_item_pane_t_ParamLimits

0xf18b,	// (0x0007282c) list_calc_item_pane_t

0x0899,	// (0x00063f3a) cell_calc_pane_g1

0x08a3,	// (0x00063f44) grid_highlight_pane_cp02

0x47e0,	// (0x00067e81) bg_calc_display_pane_g1

0x7f25,	// (0x0006b5c6) bg_calc_display_pane_g2

0x7f2f,	// (0x0006b5d0) bg_calc_display_pane_g3

0x0002,

0xf195,	// (0x00072836) bg_calc_display_pane_g

0x7f38,	// (0x0006b5d9) cell_qdial_pane_ParamLimits

0x7f38,	// (0x0006b5d9) cell_qdial_pane

0x7f4c,	// (0x0006b5ed) cell_qdial_pane_g1_ParamLimits

0x7f4c,	// (0x0006b5ed) cell_qdial_pane_g1

0x7f59,	// (0x0006b5fa) cell_qdial_pane_g2_ParamLimits

0x7f59,	// (0x0006b5fa) cell_qdial_pane_g2

0x08c5,	// (0x00063f66) cell_qdial_pane_g3_ParamLimits

0x08c5,	// (0x00063f66) cell_qdial_pane_g3

0x0003,

0xf19c,	// (0x0007283d) cell_qdial_pane_g_ParamLimits

0xf19c,	// (0x0007283d) cell_qdial_pane_g

0x7f77,	// (0x0006b618) cell_qdial_pane_t1_ParamLimits

0x7f77,	// (0x0006b618) cell_qdial_pane_t1

0x7f8f,	// (0x0006b630) cell_qdial_pane_t2_ParamLimits

0x7f8f,	// (0x0006b630) cell_qdial_pane_t2

0x7fa2,	// (0x0006b643) cell_qdial_pane_t3_ParamLimits

0x7fa2,	// (0x0006b643) cell_qdial_pane_t3

0x0002,

0xf1a5,	// (0x00072846) cell_qdial_pane_t_ParamLimits

0xf1a5,	// (0x00072846) cell_qdial_pane_t

0x04c2,	// (0x00063b63) grid_highlight_pane_cp04

0x08d1,	// (0x00063f72) thumbnail_qdial_pane_ParamLimits

0x08d1,	// (0x00063f72) thumbnail_qdial_pane

0x092d,	// (0x00063fce) list_help_pane

0x0936,	// (0x00063fd7) scroll_pane_cp02

0x7fb5,	// (0x0006b656) help_list_pane_t1_ParamLimits

0x7fb5,	// (0x0006b656) help_list_pane_t1

0x7fe8,	// (0x0006b689) bg_notes_pane_g2

0x7ff0,	// (0x0006b691) bg_notes_pane_g3

0x7ff8,	// (0x0006b699) notes_bg_pane_g1

0x8000,	// (0x0006b6a1) notes_bg_pane_g4

0x8008,	// (0x0006b6a9) notes_bg_pane_g5

0x8010,	// (0x0006b6b1) notes_bg_pane_g6

0x8018,	// (0x0006b6b9) notes_bg_pane_g7

0x8020,	// (0x0006b6c1) notes_bg_pane_g8

0x8028,	// (0x0006b6c9) notes_bg_pane_g9

0x0006,

0xf1c3,	// (0x00072864) notes_bg_pane_g

0x8030,	// (0x0006b6d1) list_notes_text_pane_ParamLimits

0x8030,	// (0x0006b6d1) list_notes_text_pane

0x0987,	// (0x00064028) list_notes_text_pane_g1

0x66a2,	// (0x00069d43) list_notes_text_pane_t1

0x0820,	// (0x00063ec1) listscroll_cale_week_pane

0x8072,	// (0x0006b713) bg_cale_heading_pane

0x09a1,	// (0x00064042) bg_cale_pane_cp01

0x808e,	// (0x0006b72f) cale_week_corner_pane

0x80a4,	// (0x0006b745) cale_week_day_heading_pane

0x80c0,	// (0x0006b761) cale_week_scroll_pane_g1

0x80d9,	// (0x0006b77a) cale_week_scroll_pane_g2

0x80ea,	// (0x0006b78b) cale_week_scroll_pane_g3

0x80fb,	// (0x0006b79c) cale_week_scroll_pane_g4

0x810c,	// (0x0006b7ad) cale_week_scroll_pane_g5

0x811d,	// (0x0006b7be) cale_week_scroll_pane_g6

0x812e,	// (0x0006b7cf) cale_week_scroll_pane_g7

0x8141,	// (0x0006b7e2) cale_week_scroll_pane_g8

0x8154,	// (0x0006b7f5) cale_week_scroll_pane_g9

0x8165,	// (0x0006b806) cale_week_scroll_pane_g10

0x8176,	// (0x0006b817) cale_week_scroll_pane_g11

0x8187,	// (0x0006b828) cale_week_scroll_pane_g12

0x8198,	// (0x0006b839) cale_week_scroll_pane_g13

0x81b1,	// (0x0006b852) cale_week_scroll_pane_g14

0x81ca,	// (0x0006b86b) cale_week_scroll_pane_g15

0x000e,

0xf1d2,	// (0x00072873) cale_week_scroll_pane_g

0x81e3,	// (0x0006b884) cale_week_time_pane

0x81f6,	// (0x0006b897) grid_cale_week_pane

0x8213,	// (0x0006b8b4) scroll_pane_cp08

0x822d,	// (0x0006b8ce) cell_cale_week_pane_ParamLimits

0x822d,	// (0x0006b8ce) cell_cale_week_pane

0x8279,	// (0x0006b91a) cale_week_day_heading_pane_t1

0x8292,	// (0x0006b933) cale_week_day_heading_pane_t2

0x82ab,	// (0x0006b94c) cale_week_day_heading_pane_t3

0x82c4,	// (0x0006b965) cale_week_day_heading_pane_t4

0x82dd,	// (0x0006b97e) cale_week_day_heading_pane_t5

0x82f6,	// (0x0006b997) cale_week_day_heading_pane_t6

0x830f,	// (0x0006b9b0) cale_week_day_heading_pane_t7

0x0006,

0xf1f1,	// (0x00072892) cale_week_day_heading_pane_t

0x09cc,	// (0x0006406d) bg_cale_side_pane

0x8328,	// (0x0006b9c9) cale_week_time_pane_t1

0x8340,	// (0x0006b9e1) cale_week_time_pane_t2

0x8358,	// (0x0006b9f9) cale_week_time_pane_t3

0x8370,	// (0x0006ba11) cale_week_time_pane_t4

0x8388,	// (0x0006ba29) cale_week_time_pane_t5

0x83a0,	// (0x0006ba41) cale_week_time_pane_t6

0x83b8,	// (0x0006ba59) cale_week_time_pane_t7

0x83d8,	// (0x0006ba79) cale_week_time_pane_t8

0x0007,

0xf200,	// (0x000728a1) cale_week_time_pane_t

0x83f8,	// (0x0006ba99) cell_cale_week_pane_g2

0x8409,	// (0x0006baaa) cell_cale_week_pane_g3_ParamLimits

0x8409,	// (0x0006baaa) cell_cale_week_pane_g3

0x09da,	// (0x0006407b) grid_highlight_pane_cp07

0x09e2,	// (0x00064083) listscroll_gms_pane

0x09ec,	// (0x0006408d) grid_gms_pane

0x09f5,	// (0x00064096) listscroll_gms_pane_g1

0x09fd,	// (0x0006409e) listscroll_gms_pane_g2

0x0001,

0xf211,	// (0x000728b2) listscroll_gms_pane_g

0x8421,	// (0x0006bac2) scroll_pane_cp010

0x842c,	// (0x0006bacd) cell_gms_pane_ParamLimits

0x842c,	// (0x0006bacd) cell_gms_pane

0x843f,	// (0x0006bae0) cell_gms_pane_g1

0x0a05,	// (0x000640a6) cell_gms_pane_g2

0x0a0d,	// (0x000640ae) cell_gms_pane_g3

0x0a16,	// (0x000640b7) cell_gms_pane_g4

0x0003,

0xf216,	// (0x000728b7) cell_gms_pane_g

0x0a1f,	// (0x000640c0) grid_highlight_pane_cp09

0xa5be,	// (0x0006dc5f) phob_pre_status_pane_g1

0xa5c6,	// (0x0006dc67) phob_pre_status_pane_g2

0xa5ce,	// (0x0006dc6f) phob_pre_status_pane_g3

0xa5d6,	// (0x0006dc77) phob_pre_status_pane_g4

0x0004,

0xf605,	// (0x00072ca6) phob_pre_status_pane_g

0xa5e6,	// (0x0006dc87) phob_pre_status_pane_t1

0xa5f6,	// (0x0006dc97) phob_pre_status_pane_t2

0xa606,	// (0x0006dca7) phob_pre_status_pane_t3

0x0002,

0xf610,	// (0x00072cb1) phob_pre_status_pane_t

0x04c2,	// (0x00063b63) bg_list_pane_cp05

0x844f,	// (0x0006baf0) grid_vorec_pane

0x8459,	// (0x0006bafa) vorec_t1

0x8467,	// (0x0006bb08) vorec_t2

0x8475,	// (0x0006bb16) vorec_t3

0x8483,	// (0x0006bb24) vorec_t4

0x8491,	// (0x0006bb32) vorec_t5

0x849f,	// (0x0006bb40) vorec_t6

0x0006,

0xf21f,	// (0x000728c0) vorec_t

0x84bb,	// (0x0006bb5c) wait_bar_pane_cp01

0x84c3,	// (0x0006bb64) cell_vorec_pane_ParamLimits

0x84c3,	// (0x0006bb64) cell_vorec_pane

0x0a91,	// (0x00064132) cell_vorec_pane_g1

0x04c2,	// (0x00063b63) grid_highlight_pane_cp05

0x84e6,	// (0x0006bb87) cams_zoom_pane

0x84f2,	// (0x0006bb93) image_vga_pane

0x8501,	// (0x0006bba2) main_camera_pane_g1

0x850f,	// (0x0006bbb0) main_camera_pane_g2

0x851b,	// (0x0006bbbc) main_camera_pane_g3

0x8527,	// (0x0006bbc8) main_camera_pane_g4

0x8533,	// (0x0006bbd4) main_camera_pane_g5

0x853f,	// (0x0006bbe0) main_camera_pane_g6

0x854b,	// (0x0006bbec) main_camera_pane_g7

0x0007,

0xf22e,	// (0x000728cf) main_camera_pane_g

0x8557,	// (0x0006bbf8) main_camera_pane_t1

0x8569,	// (0x0006bc0a) main_camera_pane_t2

0x0001,

0xf23f,	// (0x000728e0) main_camera_pane_t

0x858a,	// (0x0006bc2b) cams_zoom_pane_cp_ParamLimits

0x858a,	// (0x0006bc2b) cams_zoom_pane_cp

0x85ae,	// (0x0006bc4f) image_cif_pane_ParamLimits

0x85ae,	// (0x0006bc4f) image_cif_pane

0x85cc,	// (0x0006bc6d) image_subqcif_pane

0x85d4,	// (0x0006bc75) main_video_pane_g1_ParamLimits

0x85d4,	// (0x0006bc75) main_video_pane_g1

0x85f4,	// (0x0006bc95) main_video_pane_g2_ParamLimits

0x85f4,	// (0x0006bc95) main_video_pane_g2

0x8624,	// (0x0006bcc5) main_video_pane_g3_ParamLimits

0x8624,	// (0x0006bcc5) main_video_pane_g3

0x864d,	// (0x0006bcee) main_video_pane_g4_ParamLimits

0x864d,	// (0x0006bcee) main_video_pane_g4

0x8676,	// (0x0006bd17) main_video_pane_g5_ParamLimits

0x8676,	// (0x0006bd17) main_video_pane_g5

0x0aa7,	// (0x00064148) main_video_pane_g6_ParamLimits

0x0aa7,	// (0x00064148) main_video_pane_g6

0x0006,

0xf244,	// (0x000728e5) main_video_pane_g_ParamLimits

0xf244,	// (0x000728e5) main_video_pane_g

0x869a,	// (0x0006bd3b) main_video_pane_t1_ParamLimits

0x869a,	// (0x0006bd3b) main_video_pane_t1

0x0ac1,	// (0x00064162) cams_zoom_pane_g1

0x0aca,	// (0x0006416b) cams_zoom_pane_g2

0x0ad3,	// (0x00064174) cams_zoom_pane_g3

0x0adc,	// (0x0006417d) cams_zoom_pane_g4

0x0003,

0xf253,	// (0x000728f4) cams_zoom_pane_g

0x86e4,	// (0x0006bd85) grid_cams_pane

0x86f2,	// (0x0006bd93) linegrid_cams_pane

0x8700,	// (0x0006bda1) cell_cams_pane_ParamLimits

0x8700,	// (0x0006bda1) cell_cams_pane

0x0ae5,	// (0x00064186) cams_burst_image_pane

0x0aed,	// (0x0006418e) cell_cams_pane_g1

0x04c2,	// (0x00063b63) grid_highlight_pane_cp03

0x0899,	// (0x00063f3a) mp_bg_pane_g1

0x04c2,	// (0x00063b63) bg_list_pane_cp03

0x27db,	// (0x00065e7c) bg_mp_pane

0x27e3,	// (0x00065e84) grid_mp_pane

0x27eb,	// (0x00065e8c) media_player_g1

0x27f3,	// (0x00065e94) media_player_t1

0x2801,	// (0x00065ea2) media_player_t2

0x280f,	// (0x00065eb0) media_player_t3

0x281d,	// (0x00065ebe) media_player_t4

0x282b,	// (0x00065ecc) media_player_t5

0x2839,	// (0x00065eda) media_player_t6

0x2847,	// (0x00065ee8) media_player_t7

0x0006,

0xf5ef,	// (0x00072c90) media_player_t

0x2855,	// (0x00065ef6) wait_bar_pane_cp02

0xf5d4,	// (0x00072c75) main_usb_pane_t

0xa5b5,	// (0x0006dc56) cell_mp_pane

0x0899,	// (0x00063f3a) cell_mp_pane_g1

0x04c2,	// (0x00063b63) grid_highlight_pane_cp06

0x0af5,	// (0x00064196) grid_skin_colour_pane

0x0afd,	// (0x0006419e) list_highlight_pane_cp03

0x8713,	// (0x0006bdb4) skin_g1

0x0b05,	// (0x000641a6) skin_t1

0x0b14,	// (0x000641b5) skin_t2

0x0001,

0xf288,	// (0x00072929) skin_t

0x871d,	// (0x0006bdbe) cell_skin_colour_pane_ParamLimits

0x871d,	// (0x0006bdbe) cell_skin_colour_pane

0x0b22,	// (0x000641c3) cell_skin_colour_pane_g1

0x879f,	// (0x0006be40) call_video_g1_ParamLimits

0x879f,	// (0x0006be40) call_video_g1

0x87af,	// (0x0006be50) call_video_g2_ParamLimits

0x87af,	// (0x0006be50) call_video_g2

0x0001,

0xf28d,	// (0x0007292e) call_video_g_ParamLimits

0xf28d,	// (0x0007292e) call_video_g

0x8809,	// (0x0006beaa) call_video_uplink_pane_cp1_ParamLimits

0x8809,	// (0x0006beaa) call_video_uplink_pane_cp1

0x0b34,	// (0x000641d5) call_video_uplink_pane_cp2

0x88d5,	// (0x0006bf76) video_down_crop_pane_ParamLimits

0x88d5,	// (0x0006bf76) video_down_crop_pane

0x89d3,	// (0x0006c074) video_down_pane_ParamLimits

0x89d3,	// (0x0006c074) video_down_pane

0x0b3c,	// (0x000641dd) video_down_subqcif_pane_ParamLimits

0x0b3c,	// (0x000641dd) video_down_subqcif_pane

0x0b54,	// (0x000641f5) video_down_subqcif_pane_cp_ParamLimits

0x0b54,	// (0x000641f5) video_down_subqcif_pane_cp

0x0b78,	// (0x00064219) im_reading_pane_ParamLimits

0x0b78,	// (0x00064219) im_reading_pane

0x8af5,	// (0x0006c196) im_writing_pane_ParamLimits

0x8af5,	// (0x0006c196) im_writing_pane

0x8b13,	// (0x0006c1b4) im_reading_pane_t1

0x0b92,	// (0x00064233) list_im_pane

0x0ba3,	// (0x00064244) scroll_pane_cp07

0x8b67,	// (0x0006c208) im_writing_pane_t1_ParamLimits

0x8b67,	// (0x0006c208) im_writing_pane_t1

0x0bbc,	// (0x0006425d) im_writing_pane_t2_ParamLimits

0x0bbc,	// (0x0006425d) im_writing_pane_t2

0x0001,

0xf297,	// (0x00072938) im_writing_pane_t_ParamLimits

0xf297,	// (0x00072938) im_writing_pane_t

0x04c2,	// (0x00063b63) input_focus_pane_cp04

0x04c2,	// (0x00063b63) input_focus_pane_cp05

0x8b7c,	// (0x0006c21d) list_im_single_pane_ParamLimits

0x8b7c,	// (0x0006c21d) list_im_single_pane

0x8ba0,	// (0x0006c241) list_single_im_pane_t1

0xa579,	// (0x0006dc1a) blid_accuracy_pane

0xa581,	// (0x0006dc22) blid_compass_pane

0xa58b,	// (0x0006dc2c) main_location_t1

0xa599,	// (0x0006dc3a) main_location_t2

0xa5a7,	// (0x0006dc48) main_location_t3

0x0002,

0xf5fe,	// (0x00072c9f) main_location_t

0x04c2,	// (0x00063b63) aid_levels_location

0x0899,	// (0x00063f3a) blid_accuracy_pane_g1

0x0899,	// (0x00063f3a) blid_accuracy_pane_g2

0x0001,

0xf2f9,	// (0x0007299a) blid_accuracy_pane_g

0x0c04,	// (0x000642a5) wml_content_pane

0x0c42,	// (0x000642e3) wml_button_pane_ParamLimits

0x0c42,	// (0x000642e3) wml_button_pane

0x8baf,	// (0x0006c250) wml_list_single_large_pane_ParamLimits

0x8baf,	// (0x0006c250) wml_list_single_large_pane

0x8bd9,	// (0x0006c27a) wml_list_single_medium_pane_ParamLimits

0x8bd9,	// (0x0006c27a) wml_list_single_medium_pane

0x8c0a,	// (0x0006c2ab) wml_list_single_small_pane_ParamLimits

0x8c0a,	// (0x0006c2ab) wml_list_single_small_pane

0x0c56,	// (0x000642f7) wml_selection_box_pane_ParamLimits

0x0c56,	// (0x000642f7) wml_selection_box_pane

0x0c69,	// (0x0006430a) wml_list_single_pane_t1

0x0c78,	// (0x00064319) wml_list_single_medium_pane_t1

0x0c87,	// (0x00064328) wml_list_single_large_pane_t1

0x0c96,	// (0x00064337) input_focus_pane_cp02_ParamLimits

0x0c96,	// (0x00064337) input_focus_pane_cp02

0x0ca9,	// (0x0006434a) wml_selection_box_pane_g1

0x0cb2,	// (0x00064353) wml_selection_box_pane_t1_ParamLimits

0x0cb2,	// (0x00064353) wml_selection_box_pane_t1

0x071d,	// (0x00063dbe) bg_wml_button_pane_ParamLimits

0x071d,	// (0x00063dbe) bg_wml_button_pane

0x0cca,	// (0x0006436b) wml_button_pane_g1

0x0cd2,	// (0x00064373) wml_button_pane_t1

0x0cca,	// (0x0006436b) wml_button_bg_pane_g1

0x0ce2,	// (0x00064383) wml_button_bg_pane_g2

0x0cea,	// (0x0006438b) wml_button_bg_pane_g3

0x0cf2,	// (0x00064393) wml_button_bg_pane_g4

0x0cfa,	// (0x0006439b) wml_button_bg_pane_g5

0x0d02,	// (0x000643a3) wml_button_bg_pane_g6

0x0d0a,	// (0x000643ab) wml_button_bg_pane_g7

0x0d12,	// (0x000643b3) wml_button_bg_pane_g8

0x0d1a,	// (0x000643bb) wml_button_bg_pane_g9

0x0008,

0xf29c,	// (0x0007293d) wml_button_bg_pane_g

0x8c44,	// (0x0006c2e5) bg_list_pane_cp02

0x0d22,	// (0x000643c3) mce_header_pane_ParamLimits

0x0d22,	// (0x000643c3) mce_header_pane

0x0d38,	// (0x000643d9) mce_icon_pane

0x0d38,	// (0x000643d9) mce_image_pane

0x0d41,	// (0x000643e2) mce_text_pane_ParamLimits

0x0d41,	// (0x000643e2) mce_text_pane

0x8c4e,	// (0x0006c2ef) scroll_pane_cp03

0x0c3a,	// (0x000642db) scroll_pane_cp04

0x0d54,	// (0x000643f5) scroll_pane_cp05_ParamLimits

0x0d54,	// (0x000643f5) scroll_pane_cp05

0x8c58,	// (0x0006c2f9) mce_header_field_pane_ParamLimits

0x8c58,	// (0x0006c2f9) mce_header_field_pane

0x8c78,	// (0x0006c319) mce_header_field_pane_2_ParamLimits

0x8c78,	// (0x0006c319) mce_header_field_pane_2

0x8c8e,	// (0x0006c32f) mce_header_field_pane_3

0x8c96,	// (0x0006c337) list_single_mce_message_pane_ParamLimits

0x8c96,	// (0x0006c337) list_single_mce_message_pane

0x8cbb,	// (0x0006c35c) list_single_mce_smart_pane_ParamLimits

0x8cbb,	// (0x0006c35c) list_single_mce_smart_pane

0x0d60,	// (0x00064401) input_focus_pane_cp03

0x0d69,	// (0x0006440a) list_header_data_pane

0x8ceb,	// (0x0006c38c) mce_header_field_pane_t1

0x8cf9,	// (0x0006c39a) list_single_mce_header_pane_ParamLimits

0x8cf9,	// (0x0006c39a) list_single_mce_header_pane

0x0d71,	// (0x00064412) list_single_mce_header_pane_t1

0x0d80,	// (0x00064421) list_single_mce_message_pane_g1

0x0d88,	// (0x00064429) list_single_mce_message_pane_t1

0x8d3d,	// (0x0006c3de) bg_cale_heading_pane_cp01_ParamLimits

0x8d3d,	// (0x0006c3de) bg_cale_heading_pane_cp01

0x0d96,	// (0x00064437) bg_cale_pane_cp02_ParamLimits

0x0d96,	// (0x00064437) bg_cale_pane_cp02

0x8d70,	// (0x0006c411) cale_month_corner_pane

0x8d86,	// (0x0006c427) cale_month_day_heading_pane_ParamLimits

0x8d86,	// (0x0006c427) cale_month_day_heading_pane

0x8dc9,	// (0x0006c46a) cale_month_pane_g1_ParamLimits

0x8dc9,	// (0x0006c46a) cale_month_pane_g1

0x8df5,	// (0x0006c496) cale_month_pane_g2_ParamLimits

0x8df5,	// (0x0006c496) cale_month_pane_g2

0x8e18,	// (0x0006c4b9) cale_month_pane_g3_ParamLimits

0x8e18,	// (0x0006c4b9) cale_month_pane_g3

0x8e54,	// (0x0006c4f5) cale_month_pane_g4_ParamLimits

0x8e54,	// (0x0006c4f5) cale_month_pane_g4

0x8e90,	// (0x0006c531) cale_month_pane_g5_ParamLimits

0x8e90,	// (0x0006c531) cale_month_pane_g5

0x8ecc,	// (0x0006c56d) cale_month_pane_g6_ParamLimits

0x8ecc,	// (0x0006c56d) cale_month_pane_g6

0x8f08,	// (0x0006c5a9) cale_month_pane_g7_ParamLimits

0x8f08,	// (0x0006c5a9) cale_month_pane_g7

0x8f54,	// (0x0006c5f5) cale_month_pane_g8_ParamLimits

0x8f54,	// (0x0006c5f5) cale_month_pane_g8

0x8fa0,	// (0x0006c641) cale_month_pane_g9_ParamLimits

0x8fa0,	// (0x0006c641) cale_month_pane_g9

0x8fe6,	// (0x0006c687) cale_month_pane_g10_ParamLimits

0x8fe6,	// (0x0006c687) cale_month_pane_g10

0x9020,	// (0x0006c6c1) cale_month_pane_g11_ParamLimits

0x9020,	// (0x0006c6c1) cale_month_pane_g11

0x905e,	// (0x0006c6ff) cale_month_pane_g12_ParamLimits

0x905e,	// (0x0006c6ff) cale_month_pane_g12

0x909c,	// (0x0006c73d) cale_month_pane_g13_ParamLimits

0x909c,	// (0x0006c73d) cale_month_pane_g13

0x000c,

0xf2af,	// (0x00072950) cale_month_pane_g_ParamLimits

0xf2af,	// (0x00072950) cale_month_pane_g

0x90da,	// (0x0006c77b) cale_month_week_pane

0x90ed,	// (0x0006c78e) grid_cale_month_pane_ParamLimits

0x90ed,	// (0x0006c78e) grid_cale_month_pane

0x912b,	// (0x0006c7cc) cale_month_day_heading_pane_t1

0x9189,	// (0x0006c82a) cale_month_day_heading_pane_t2

0x91ee,	// (0x0006c88f) cale_month_day_heading_pane_t3

0x9253,	// (0x0006c8f4) cale_month_day_heading_pane_t4

0x92b8,	// (0x0006c959) cale_month_day_heading_pane_t5

0x931d,	// (0x0006c9be) cale_month_day_heading_pane_t6

0x9382,	// (0x0006ca23) cale_month_day_heading_pane_t7

0x0006,

0xf2ca,	// (0x0007296b) cale_month_day_heading_pane_t

0x09cc,	// (0x0006406d) bg_cale_side_pane_cp01

0x93f7,	// (0x0006ca98) cale_month_week_pane_t1

0x940e,	// (0x0006caaf) cale_month_week_pane_t2

0x9425,	// (0x0006cac6) cale_month_week_pane_t3

0x943c,	// (0x0006cadd) cale_month_week_pane_t4

0x9453,	// (0x0006caf4) cale_month_week_pane_t5

0x946e,	// (0x0006cb0f) cale_month_week_pane_t6

0x0005,

0xf2d9,	// (0x0007297a) cale_month_week_pane_t

0x948d,	// (0x0006cb2e) cell_cale_month_pane_ParamLimits

0x948d,	// (0x0006cb2e) cell_cale_month_pane

0x9553,	// (0x0006cbf4) cell_cale_month_pane_g1

0x955f,	// (0x0006cc00) cell_cale_month_pane_t1_ParamLimits

0x955f,	// (0x0006cc00) cell_cale_month_pane_t1

0x09da,	// (0x0006407b) grid_highlight_pane_cp08

0x0899,	// (0x00063f3a) main_smil_g1

0x957b,	// (0x0006cc1c) smil_status_pane

0x0dd7,	// (0x00064478) smil_text_pane

0x26fb,	// (0x00065d9c) bg_popup_call3_rect_pane_g8

0x2703,	// (0x00065da4) bg_popup_call3_rect_pane_g9

0x0008,

0xf592,	// (0x00072c33) bg_popup_call3_rect_pane_g

0x2990,	// (0x00066031) smil_status_volume_pane_g1

0x0de1,	// (0x00064482) smil_status_pane_t1

0xa95f,	// (0x0006e000) volume_smil_pane

0x0df8,	// (0x00064499) list_smil_text_pane

0x958e,	// (0x0006cc2f) scroll_pane_cp011

0x9599,	// (0x0006cc3a) smil_text_list_pane_t1_ParamLimits

0x9599,	// (0x0006cc3a) smil_text_list_pane_t1

0x9611,	// (0x0006ccb2) aid_volume_smil_ParamLimits

0x9611,	// (0x0006ccb2) aid_volume_smil

0x0899,	// (0x00063f3a) smil_volume_pane_g1

0x0899,	// (0x00063f3a) smil_volume_pane_g2

0x0001,

0xf2f9,	// (0x0007299a) smil_volume_pane_g

0x0820,	// (0x00063ec1) listscroll_cale_day_pane

0x0e24,	// (0x000644c5) bg_cale_pane

0x0e3c,	// (0x000644dd) list_cale_pane

0x0e4d,	// (0x000644ee) scroll_pane_cp09

0x0e5e,	// (0x000644ff) cale_bg_pane_g1

0x0e66,	// (0x00064507) cale_bg_pane_g2

0x0e6e,	// (0x0006450f) cale_bg_pane_g3

0x0e76,	// (0x00064517) cale_bg_pane_g4

0x0e7e,	// (0x0006451f) cale_bg_pane_g5

0x0e86,	// (0x00064527) cale_bg_pane_g6

0x0e8e,	// (0x0006452f) cale_bg_pane_g7

0x0e96,	// (0x00064537) cale_bg_pane_g8

0x0e9e,	// (0x0006453f) cale_bg_pane_g9

0x0008,

0xf2fe,	// (0x0007299f) cale_bg_pane_g

0x9633,	// (0x0006ccd4) list_cale_time_pane_ParamLimits

0x9633,	// (0x0006ccd4) list_cale_time_pane

0x0ea6,	// (0x00064547) list_cale_time_pane_g1_ParamLimits

0x0ea6,	// (0x00064547) list_cale_time_pane_g1

0x0eb2,	// (0x00064553) list_cale_time_pane_g2_ParamLimits

0x0eb2,	// (0x00064553) list_cale_time_pane_g2

0x964f,	// (0x0006ccf0) list_cale_time_pane_g3_ParamLimits

0x964f,	// (0x0006ccf0) list_cale_time_pane_g3

0x965d,	// (0x0006ccfe) list_cale_time_pane_g4_ParamLimits

0x965d,	// (0x0006ccfe) list_cale_time_pane_g4

0x966b,	// (0x0006cd0c) list_cale_time_pane_g5_ParamLimits

0x966b,	// (0x0006cd0c) list_cale_time_pane_g5

0x0005,

0xf311,	// (0x000729b2) list_cale_time_pane_g_ParamLimits

0xf311,	// (0x000729b2) list_cale_time_pane_g

0x0ecc,	// (0x0006456d) list_cale_time_pane_t1_ParamLimits

0x0ecc,	// (0x0006456d) list_cale_time_pane_t1

0x0ef4,	// (0x00064595) list_cale_time_pane_t2_ParamLimits

0x0ef4,	// (0x00064595) list_cale_time_pane_t2

0x9942,	// (0x0006cfe3) aid_blid_cardinal_pane

0x9984,	// (0x0006d025) compass_pane_t4

0x0f1c,	// (0x000645bd) list_cale_time_pane_t4_ParamLimits

0x0f1c,	// (0x000645bd) list_cale_time_pane_t4

0x9992,	// (0x0006d033) compass_pane_t5

0x99a2,	// (0x0006d043) compass_pane_t6

0x99b0,	// (0x0006d051) compass_pane_t7

0x13c6,	// (0x00064a67) navi_pane_cc_t1

0x152d,	// (0x00064bce) aid_phob_thumbnail_center_pane

0xa07f,	// (0x0006d720) main_postcard_pane_g4_ParamLimits

0x0002,

0xf31e,	// (0x000729bf) list_cale_time_pane_t_ParamLimits

0xf31e,	// (0x000729bf) list_cale_time_pane_t

0x0119,	// (0x000637ba) bg_popup_window_pane_cp02_ParamLimits

0x0119,	// (0x000637ba) bg_popup_window_pane_cp02

0x0f44,	// (0x000645e5) heading_pane_cp01_ParamLimits

0x0f44,	// (0x000645e5) heading_pane_cp01

0x0f50,	// (0x000645f1) loc_req_pane_ParamLimits

0x0f50,	// (0x000645f1) loc_req_pane

0x0f60,	// (0x00064601) loc_type_pane_ParamLimits

0x0f60,	// (0x00064601) loc_type_pane

0x0f72,	// (0x00064613) loc_type_pane_t1_ParamLimits

0x0f72,	// (0x00064613) loc_type_pane_t1

0x0f84,	// (0x00064625) loc_type_pane_t2_ParamLimits

0x0f84,	// (0x00064625) loc_type_pane_t2

0x0f96,	// (0x00064637) loc_type_pane_t3_ParamLimits

0x0f96,	// (0x00064637) loc_type_pane_t3

0x0002,

0xf325,	// (0x000729c6) loc_type_pane_t_ParamLimits

0xf325,	// (0x000729c6) loc_type_pane_t

0x0fa8,	// (0x00064649) list_loc_req_pane

0x0fb2,	// (0x00064653) scroll_pane_cp012

0x9679,	// (0x0006cd1a) list_single_loc_request_popup_menu_pane_ParamLimits

0x9679,	// (0x0006cd1a) list_single_loc_request_popup_menu_pane

0x0fbd,	// (0x0006465e) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0x0fbd,	// (0x0006465e) list_single_loc_request_popup_menu_pane_g1

0x0fc9,	// (0x0006466a) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0x0fc9,	// (0x0006466a) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf32c,	// (0x000729cd) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf32c,	// (0x000729cd) list_single_loc_request_popup_menu_pane_g

0x0fd5,	// (0x00064676) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0x0fd5,	// (0x00064676) list_single_loc_request_popup_menu_pane_t1

0x968b,	// (0x0006cd2c) bg_popup_window_pane_cp03_ParamLimits

0x968b,	// (0x0006cd2c) bg_popup_window_pane_cp03

0x9699,	// (0x0006cd3a) heading_loc_req_pane_ParamLimits

0x9699,	// (0x0006cd3a) heading_loc_req_pane

0x96a5,	// (0x0006cd46) popup_dyc_status_message_window_g1_ParamLimits

0x96a5,	// (0x0006cd46) popup_dyc_status_message_window_g1

0x96b1,	// (0x0006cd52) popup_dyc_status_message_window_t1_ParamLimits

0x96b1,	// (0x0006cd52) popup_dyc_status_message_window_t1

0x96c3,	// (0x0006cd64) popup_dyc_status_message_window_t2_ParamLimits

0x96c3,	// (0x0006cd64) popup_dyc_status_message_window_t2

0x96d5,	// (0x0006cd76) popup_dyc_status_message_window_t3_ParamLimits

0x96d5,	// (0x0006cd76) popup_dyc_status_message_window_t3

0x0002,

0xf331,	// (0x000729d2) popup_dyc_status_message_window_t_ParamLimits

0xf331,	// (0x000729d2) popup_dyc_status_message_window_t

0x04c2,	// (0x00063b63) bg_heading_pane_cp01

0x0ff7,	// (0x00064698) heading_loc_req_pane_g1

0x0fff,	// (0x000646a0) heading_loc_req_pane_g2

0x1007,	// (0x000646a8) heading_loc_req_pane_g3

0x0002,

0xf338,	// (0x000729d9) heading_loc_req_pane_g

0x100f,	// (0x000646b0) heading_loc_req_pane_t1

0x101e,	// (0x000646bf) bg_popup_sub_pane_cp01_ParamLimits

0x101e,	// (0x000646bf) bg_popup_sub_pane_cp01

0x102c,	// (0x000646cd) popup_cale_events_window_g1_ParamLimits

0x102c,	// (0x000646cd) popup_cale_events_window_g1

0x104c,	// (0x000646ed) popup_cale_events_window_g2_ParamLimits

0x104c,	// (0x000646ed) popup_cale_events_window_g2

0x0001,

0xf36c,	// (0x00072a0d) popup_cale_events_window_g_ParamLimits

0xf36c,	// (0x00072a0d) popup_cale_events_window_g

0x106c,	// (0x0006470d) popup_cale_events_window_t1_ParamLimits

0x106c,	// (0x0006470d) popup_cale_events_window_t1

0x107e,	// (0x0006471f) popup_cale_events_window_t2_ParamLimits

0x107e,	// (0x0006471f) popup_cale_events_window_t2

0x10bc,	// (0x0006475d) popup_cale_events_window_t3_ParamLimits

0x10bc,	// (0x0006475d) popup_cale_events_window_t3

0x10f6,	// (0x00064797) popup_cale_events_window_t4_ParamLimits

0x10f6,	// (0x00064797) popup_cale_events_window_t4

0x0003,

0xf371,	// (0x00072a12) popup_cale_events_window_t_ParamLimits

0xf371,	// (0x00072a12) popup_cale_events_window_t

0x96ff,	// (0x0006cda0) call_type_pane

0x1545,	// (0x00064be6) popup_call_status_window_g1

0x970b,	// (0x0006cdac) popup_call_status_window_g2

0x9717,	// (0x0006cdb8) popup_call_status_window_g3

0x0002,

0xf37a,	// (0x00072a1b) popup_call_status_window_g

0x112c,	// (0x000647cd) call_type_pane_g1

0x1135,	// (0x000647d6) call_type_pane_g2

0x0001,

0xf381,	// (0x00072a22) call_type_pane_g

0x04c2,	// (0x00063b63) bg_popup_sub_pane_cp02

0x113e,	// (0x000647df) listscroll_popup_wml_pane

0x1146,	// (0x000647e7) list_wml_pane

0x1150,	// (0x000647f1) scroll_pane_cp013

0x115b,	// (0x000647fc) list_single_graphic_popup_wml_pane_ParamLimits

0x115b,	// (0x000647fc) list_single_graphic_popup_wml_pane

0x0899,	// (0x00063f3a) list_single_graphic_popup_wml_pane_g1

0x116f,	// (0x00064810) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf386,	// (0x00072a27) list_single_graphic_popup_wml_pane_g

0x1177,	// (0x00064818) list_single_graphic_popup_wml_pane_t1

0x1185,	// (0x00064826) aid_call_pane

0x0715,	// (0x00063db6) popup_clock_analogue_window_g1

0x0715,	// (0x00063db6) popup_clock_analogue_window_g2

0x9723,	// (0x0006cdc4) popup_clock_analogue_window_g3

0x9723,	// (0x0006cdc4) popup_clock_analogue_window_g4

0x0899,	// (0x00063f3a) popup_clock_analogue_window_g5

0x0004,

0xf38b,	// (0x00072a2c) popup_clock_analogue_window_g

0x972b,	// (0x0006cdcc) popup_clock_analogue_window_t1

0x9739,	// (0x0006cdda) clock_digital_number_pane_ParamLimits

0x9739,	// (0x0006cdda) clock_digital_number_pane

0x9745,	// (0x0006cde6) clock_digital_number_pane_cp02_ParamLimits

0x9745,	// (0x0006cde6) clock_digital_number_pane_cp02

0x9751,	// (0x0006cdf2) clock_digital_number_pane_cp03_ParamLimits

0x9751,	// (0x0006cdf2) clock_digital_number_pane_cp03

0x975d,	// (0x0006cdfe) clock_digital_number_pane_cp04_ParamLimits

0x975d,	// (0x0006cdfe) clock_digital_number_pane_cp04

0x976d,	// (0x0006ce0e) clock_digital_separator_pane_ParamLimits

0x976d,	// (0x0006ce0e) clock_digital_separator_pane

0x9779,	// (0x0006ce1a) popup_clock_digital_window_t1

0x0899,	// (0x00063f3a) clock_digital_number_pane_g1

0x0899,	// (0x00063f3a) clock_digital_number_pane_g2

0x0001,

0xf2f9,	// (0x0007299a) clock_digital_number_pane_g

0x0899,	// (0x00063f3a) clock_digital_separator_pane_g1

0x0899,	// (0x00063f3a) clock_digital_separator_pane_g2

0x0001,

0xf2f9,	// (0x0007299a) clock_digital_separator_pane_g

0x04c2,	// (0x00063b63) bg_popup_window_pane_cp04

0x1208,	// (0x000648a9) heading_pane_cp03

0x1210,	// (0x000648b1) listscroll_popup_gms_pane

0x1218,	// (0x000648b9) grid_large_graphic_popup_pane

0x1222,	// (0x000648c3) listscroll_popup_gms_pane_g1

0x122a,	// (0x000648cb) listscroll_popup_gms_pane_g2

0x0001,

0xf396,	// (0x00072a37) listscroll_popup_gms_pane_g

0x0c3a,	// (0x000642db) scroll_pane_cp014

0x9796,	// (0x0006ce37) cell_large_graphic_popup_pane_ParamLimits

0x9796,	// (0x0006ce37) cell_large_graphic_popup_pane

0x97ae,	// (0x0006ce4f) cell_large_graphic_popup_pane_g1_ParamLimits

0x97ae,	// (0x0006ce4f) cell_large_graphic_popup_pane_g1

0x1232,	// (0x000648d3) cell_large_graphic_popup_pane_g2_ParamLimits

0x1232,	// (0x000648d3) cell_large_graphic_popup_pane_g2

0x123e,	// (0x000648df) cell_large_graphic_popup_pane_g3_ParamLimits

0x123e,	// (0x000648df) cell_large_graphic_popup_pane_g3

0x124b,	// (0x000648ec) cell_large_graphic_popup_pane_g4_ParamLimits

0x124b,	// (0x000648ec) cell_large_graphic_popup_pane_g4

0x0003,

0xf39b,	// (0x00072a3c) cell_large_graphic_popup_pane_g_ParamLimits

0xf39b,	// (0x00072a3c) cell_large_graphic_popup_pane_g

0x125b,	// (0x000648fc) grid_highlight_pane_cp010

0x0899,	// (0x00063f3a) bg_popup_call_pane_g1

0x1265,	// (0x00064906) list_single_graphic_popup_conf_pane_ParamLimits

0x1265,	// (0x00064906) list_single_graphic_popup_conf_pane

0x1278,	// (0x00064919) list_highlight_pane_cp01

0x1281,	// (0x00064922) list_single_graphic_popup_conf_pane_g1

0x1289,	// (0x0006492a) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf3a4,	// (0x00072a45) list_single_graphic_popup_conf_pane_g

0x1291,	// (0x00064932) list_single_graphic_popup_conf_pane_t1

0x129f,	// (0x00064940) linegrid_cams_pane_g1

0x97ba,	// (0x0006ce5b) linegrid_cams_pane_g2

0x0a0d,	// (0x000640ae) linegrid_cams_pane_g3

0x12a8,	// (0x00064949) linegrid_cams_pane_g4

0x97c3,	// (0x0006ce64) linegrid_cams_pane_g5

0x97cc,	// (0x0006ce6d) linegrid_cams_pane_g6

0x0a16,	// (0x000640b7) linegrid_cams_pane_g7

0x0006,

0xf3a9,	// (0x00072a4a) linegrid_cams_pane_g

0x12b1,	// (0x00064952) popup_clock_analogue_window

0x12b1,	// (0x00064952) popup_clock_digital_window

0x04c2,	// (0x00063b63) popup_phob_thumbnail_window

0x0899,	// (0x00063f3a) call_video_uplink_pane_g1

0x12ba,	// (0x0006495b) call_video_uplink_pane_g2

0x0001,

0xf3b8,	// (0x00072a59) call_video_uplink_pane_g

0x12c2,	// (0x00064963) video_uplink_pane

0x12ca,	// (0x0006496b) mce_image_pane_g1

0x97d5,	// (0x0006ce76) mce_image_pane_g2

0x97df,	// (0x0006ce80) mce_image_pane_g3

0x97e7,	// (0x0006ce88) mce_image_pane_g4

0x97ef,	// (0x0006ce90) mce_image_pane_g5

0x0004,

0xf3bd,	// (0x00072a5e) mce_image_pane_g

0x12d4,	// (0x00064975) control_top_pane_stacon_cp01_ParamLimits

0x12d4,	// (0x00064975) control_top_pane_stacon_cp01

0x12e8,	// (0x00064989) uni_indicator_pane_stacon_cp01_ParamLimits

0x12e8,	// (0x00064989) uni_indicator_pane_stacon_cp01

0x12f9,	// (0x0006499a) bg_popup_sub_pane_cp03

0x97f7,	// (0x0006ce98) chi_dic_find_pane

0x97ff,	// (0x0006cea0) listscroll_chi_dic_pane

0x9808,	// (0x0006cea9) main_pane_chidic_g1

0x1303,	// (0x000649a4) chi_dic_find_pane_t1

0x1311,	// (0x000649b2) find_chidic_pane

0x131a,	// (0x000649bb) chi_dic_list_pane_ParamLimits

0x131a,	// (0x000649bb) chi_dic_list_pane

0x132b,	// (0x000649cc) scroll_pane_cp020

0x1333,	// (0x000649d4) find_chidic_pane_t1

0x04c2,	// (0x00063b63) input_focus_pane_cp06

0x981b,	// (0x0006cebc) list_chi_dic_pane_ParamLimits

0x981b,	// (0x0006cebc) list_chi_dic_pane

0x9835,	// (0x0006ced6) list_chi_dic_pane_t1_ParamLimits

0x9835,	// (0x0006ced6) list_chi_dic_pane_t1

0x04c2,	// (0x00063b63) list_highlight_pane_cp020

0x1342,	// (0x000649e3) bg_cale_heading_pane_g1

0x9848,	// (0x0006cee9) bg_cale_heading_pane_g2

0x9850,	// (0x0006cef1) bg_cale_heading_pane_g3

0x9858,	// (0x0006cef9) bg_cale_heading_pane_g4

0x9862,	// (0x0006cf03) bg_cale_heading_pane_g5

0x986c,	// (0x0006cf0d) bg_cale_heading_pane_g6

0x9874,	// (0x0006cf15) bg_cale_heading_pane_g7

0x987c,	// (0x0006cf1d) bg_cale_heading_pane_g8

0x9886,	// (0x0006cf27) bg_cale_heading_pane_g9

0x0008,

0xf3c8,	// (0x00072a69) bg_cale_heading_pane_g

0x1342,	// (0x000649e3) bg_cale_side_pane_g1

0x9890,	// (0x0006cf31) bg_cale_side_pane_g2

0x989a,	// (0x0006cf3b) bg_cale_side_pane_g3

0x98a4,	// (0x0006cf45) bg_cale_side_pane_g4

0x98ae,	// (0x0006cf4f) bg_cale_side_pane_g5

0x98b8,	// (0x0006cf59) bg_cale_side_pane_g6

0x98c2,	// (0x0006cf63) bg_cale_side_pane_g7

0x98cc,	// (0x0006cf6d) bg_cale_side_pane_g8

0x98d4,	// (0x0006cf75) bg_cale_side_pane_g9

0x0008,

0xf3db,	// (0x00072a7c) bg_cale_side_pane_g

0x98dc,	// (0x0006cf7d) popup_call_status_window_ParamLimits

0x98dc,	// (0x0006cf7d) popup_call_status_window

0x134a,	// (0x000649eb) stacon_top_pane

0x1352,	// (0x000649f3) status_pane_ParamLimits

0x1352,	// (0x000649f3) status_pane

0x1367,	// (0x00064a08) status_small_pane

0x136f,	// (0x00064a10) control_pane

0x04c2,	// (0x00063b63) stacon_bottom_pane

0x1377,	// (0x00064a18) list_single_mce_smart_pane_t1_ParamLimits

0x1377,	// (0x00064a18) list_single_mce_smart_pane_t1

0x138a,	// (0x00064a2b) list_single_mce_smart_pane_t2_ParamLimits

0x138a,	// (0x00064a2b) list_single_mce_smart_pane_t2

0x0001,

0xf3ee,	// (0x00072a8f) list_single_mce_smart_pane_t_ParamLimits

0xf3ee,	// (0x00072a8f) list_single_mce_smart_pane_t

0x98e8,	// (0x0006cf89) compass_pane

0x98f4,	// (0x0006cf95) main_location2_pane_t1

0x9908,	// (0x0006cfa9) main_location2_pane_t2

0x991c,	// (0x0006cfbd) main_location2_pane_t3

0x0003,

0xf3f3,	// (0x00072a94) main_location2_pane_t

0x13a9,	// (0x00064a4a) compass_pane_g1_ParamLimits

0x13a9,	// (0x00064a4a) compass_pane_g1

0x9966,	// (0x0006d007) compass_pane_t1

0x9975,	// (0x0006d016) compass_pane_t2

0x0005,

0xf3fc,	// (0x00072a9d) compass_pane_t

0x99c0,	// (0x0006d061) text_secondary_cp61

0x13bd,	// (0x00064a5e) navi_pane_cams_g5

0x13e0,	// (0x00064a81) navi_pane_im_t1

0x13ee,	// (0x00064a8f) navi_pane_mp_g1_ParamLimits

0x13ee,	// (0x00064a8f) navi_pane_mp_g1

0x1402,	// (0x00064aa3) navi_pane_mp_g2_ParamLimits

0x1402,	// (0x00064aa3) navi_pane_mp_g2

0x140e,	// (0x00064aaf) navi_pane_mp_g3_ParamLimits

0x140e,	// (0x00064aaf) navi_pane_mp_g3

0x0002,

0xf410,	// (0x00072ab1) navi_pane_mp_g_ParamLimits

0xf410,	// (0x00072ab1) navi_pane_mp_g

0x141a,	// (0x00064abb) navi_pane_mp_t1

0x1428,	// (0x00064ac9) navi_pane_mp_t2

0x0002,

0xf417,	// (0x00072ab8) navi_pane_mp_t

0x1464,	// (0x00064b05) navi_pane_vt_g1

0x141a,	// (0x00064abb) navi_pane_vt_t1

0x146c,	// (0x00064b0d) navi_slider_pane

0x1474,	// (0x00064b15) zooming_pane

0x147c,	// (0x00064b1d) navi_slider_pane_g1

0x9ad5,	// (0x0006d176) navi_slider_pane_g2

0x0006,

0xf41e,	// (0x00072abf) navi_slider_pane_g

0x14b2,	// (0x00064b53) aid_levels_zoom

0x14ba,	// (0x00064b5b) zooming_pane_g1

0x14c2,	// (0x00064b63) zooming_pane_g2

0x14c2,	// (0x00064b63) zooming_pane_g3

0x0002,

0xf42d,	// (0x00072ace) zooming_pane_g

0x14ca,	// (0x00064b6b) level_10_zoom

0x14d3,	// (0x00064b74) level_11_zoom

0x14dc,	// (0x00064b7d) level_1_zoom

0x14e5,	// (0x00064b86) level_2_zoom

0x14ee,	// (0x00064b8f) level_3_zoom

0x14f7,	// (0x00064b98) level_4_zoom

0x1500,	// (0x00064ba1) level_5_zoom

0x1509,	// (0x00064baa) level_6_zoom

0x1512,	// (0x00064bb3) level_7_zoom

0x151b,	// (0x00064bbc) level_8_zoom

0x1524,	// (0x00064bc5) level_9_zoom

0x1535,	// (0x00064bd6) popup_phob_thumbnail_window_g1

0x153d,	// (0x00064bde) popup_phob_thumbnail_window_g2

0x0001,

0xf434,	// (0x00072ad5) popup_phob_thumbnail_window_g

0x285d,	// (0x00065efe) level_1_location

0x2865,	// (0x00065f06) level_2_location

0x286d,	// (0x00065f0e) level_3_location

0x2875,	// (0x00065f16) level_4_location

0x1474,	// (0x00064b15) level_5_location

0x9ae7,	// (0x0006d188) mce_icon_pane_g1

0x9aef,	// (0x0006d190) mce_icon_pane_g2

0x0001,

0xf439,	// (0x00072ada) mce_icon_pane_g

0x9af7,	// (0x0006d198) main_mup_pane_g1_ParamLimits

0x9af7,	// (0x0006d198) main_mup_pane_g1

0x9b0f,	// (0x0006d1b0) main_mup_pane_g2_ParamLimits

0x9b0f,	// (0x0006d1b0) main_mup_pane_g2

0x9b2b,	// (0x0006d1cc) main_mup_pane_g3_ParamLimits

0x9b2b,	// (0x0006d1cc) main_mup_pane_g3

0x9b47,	// (0x0006d1e8) main_mup_pane_g4_ParamLimits

0x9b47,	// (0x0006d1e8) main_mup_pane_g4

0x9b63,	// (0x0006d204) main_mup_pane_g5_ParamLimits

0x9b63,	// (0x0006d204) main_mup_pane_g5

0x9b84,	// (0x0006d225) main_mup_pane_g6_ParamLimits

0x9b84,	// (0x0006d225) main_mup_pane_g6

0x9ba0,	// (0x0006d241) main_mup_pane_g7_ParamLimits

0x9ba0,	// (0x0006d241) main_mup_pane_g7

0x9bbc,	// (0x0006d25d) main_mup_pane_g8_ParamLimits

0x9bbc,	// (0x0006d25d) main_mup_pane_g8

0x9bdc,	// (0x0006d27d) main_mup_pane_g9_ParamLimits

0x9bdc,	// (0x0006d27d) main_mup_pane_g9

0x9bfb,	// (0x0006d29c) main_mup_pane_g10_ParamLimits

0x9bfb,	// (0x0006d29c) main_mup_pane_g10

0x9c1a,	// (0x0006d2bb) main_mup_pane_g11_ParamLimits

0x9c1a,	// (0x0006d2bb) main_mup_pane_g11

0x9c32,	// (0x0006d2d3) main_mup_pane_g12_ParamLimits

0x9c32,	// (0x0006d2d3) main_mup_pane_g12

0x9c40,	// (0x0006d2e1) main_mup_pane_g13_ParamLimits

0x9c40,	// (0x0006d2e1) main_mup_pane_g13

0x000c,

0xf43e,	// (0x00072adf) main_mup_pane_g_ParamLimits

0xf43e,	// (0x00072adf) main_mup_pane_g

0x9c56,	// (0x0006d2f7) main_mup_pane_t1_ParamLimits

0x9c56,	// (0x0006d2f7) main_mup_pane_t1

0x9c73,	// (0x0006d314) main_mup_pane_t2_ParamLimits

0x9c73,	// (0x0006d314) main_mup_pane_t2

0x9c8d,	// (0x0006d32e) main_mup_pane_t3_ParamLimits

0x9c8d,	// (0x0006d32e) main_mup_pane_t3

0x9ca7,	// (0x0006d348) main_mup_pane_t4_ParamLimits

0x9ca7,	// (0x0006d348) main_mup_pane_t4

0x9cb9,	// (0x0006d35a) main_mup_pane_t5_ParamLimits

0x9cb9,	// (0x0006d35a) main_mup_pane_t5

0x9ccb,	// (0x0006d36c) main_mup_pane_t6_ParamLimits

0x9ccb,	// (0x0006d36c) main_mup_pane_t6

0x0005,

0xf459,	// (0x00072afa) main_mup_pane_t_ParamLimits

0xf459,	// (0x00072afa) main_mup_pane_t

0x9ce1,	// (0x0006d382) mup_progress_pane_ParamLimits

0x9ce1,	// (0x0006d382) mup_progress_pane

0x9ced,	// (0x0006d38e) mup_visualizer_pane_ParamLimits

0x9ced,	// (0x0006d38e) mup_visualizer_pane

0x9d27,	// (0x0006d3c8) mup_volume_pane_ParamLimits

0x9d27,	// (0x0006d3c8) mup_volume_pane

0x1545,	// (0x00064be6) mup_visualizer_pane_g1_ParamLimits

0x1545,	// (0x00064be6) mup_visualizer_pane_g1

0x1545,	// (0x00064be6) mup_visualizer_pane_g2_ParamLimits

0x1545,	// (0x00064be6) mup_visualizer_pane_g2

0x13a9,	// (0x00064a4a) mup_visualizer_pane_g3_ParamLimits

0x13a9,	// (0x00064a4a) mup_visualizer_pane_g3

0x0002,

0xf466,	// (0x00072b07) mup_visualizer_pane_g_ParamLimits

0xf466,	// (0x00072b07) mup_visualizer_pane_g

0x0899,	// (0x00063f3a) mup_volume_pane_g1

0x155b,	// (0x00064bfc) mup_volume_pane_g2

0x0001,

0xf46d,	// (0x00072b0e) mup_volume_pane_g

0x0899,	// (0x00063f3a) mup_progress_pane_g1

0x1564,	// (0x00064c05) mup_progress_pane_g2

0x156d,	// (0x00064c0e) mup_progress_pane_g3

0x0002,

0xf472,	// (0x00072b13) mup_progress_pane_g

0x04c2,	// (0x00063b63) bg_popup_window_pane_cp05

0x1576,	// (0x00064c17) heading_pane_cp02_ParamLimits

0x1576,	// (0x00064c17) heading_pane_cp02

0x1590,	// (0x00064c31) list_popup_blid_pane

0x1598,	// (0x00064c39) list_blid_sat_info_pane_ParamLimits

0x1598,	// (0x00064c39) list_blid_sat_info_pane

0x15ab,	// (0x00064c4c) list_blid_sat_info_pane_g1

0x15b3,	// (0x00064c54) list_blid_sat_info_pane_t1

0x9e34,	// (0x0006d4d5) mup_equalizer_pane_ParamLimits

0x9e34,	// (0x0006d4d5) mup_equalizer_pane

0x9e55,	// (0x0006d4f6) mup_equalizer_pane_cp1_ParamLimits

0x9e55,	// (0x0006d4f6) mup_equalizer_pane_cp1

0x9e76,	// (0x0006d517) mup_equalizer_pane_cp2_ParamLimits

0x9e76,	// (0x0006d517) mup_equalizer_pane_cp2

0x9e97,	// (0x0006d538) mup_equalizer_pane_cp3_ParamLimits

0x9e97,	// (0x0006d538) mup_equalizer_pane_cp3

0x9eb8,	// (0x0006d559) mup_equalizer_pane_cp4_ParamLimits

0x9eb8,	// (0x0006d559) mup_equalizer_pane_cp4

0x9ed9,	// (0x0006d57a) mup_equalizer_pane_cp5

0x9eef,	// (0x0006d590) mup_equalizer_pane_cp6

0x9f07,	// (0x0006d5a8) mup_equalizer_pane_cp7

0x277b,	// (0x00065e1c) bg_popup_call_poc_act_pane_g9

0x2783,	// (0x00065e24) bg_popup_call_poc_act_pane_g10

0x278b,	// (0x00065e2c) bg_popup_call_poc_act_pane_g11

0x000a,

0x071d,	// (0x00063dbe) mup_scale_pane

0x0899,	// (0x00063f3a) mup_scale_pane_g1

0x15c1,	// (0x00064c62) mup_scale_pane_g2

0x0006,

0xf48e,	// (0x00072b2f) mup_scale_pane_g

0x15e5,	// (0x00064c86) msg_data_pane

0x15ed,	// (0x00064c8e) scroll_pane_cp017

0x68bd,	// (0x00069f5e) bg_list_pane_cp04_ParamLimits

0x68bd,	// (0x00069f5e) bg_list_pane_cp04

0x15f5,	// (0x00064c96) msg_data_pane_g1

0x9f31,	// (0x0006d5d2) msg_data_pane_g2

0x9f3b,	// (0x0006d5dc) msg_data_pane_g3

0x9f43,	// (0x0006d5e4) msg_data_pane_g4

0x9f4b,	// (0x0006d5ec) msg_data_pane_g5

0x9f53,	// (0x0006d5f4) msg_data_pane_g6

0x9f5b,	// (0x0006d5fc) msg_data_pane_g7

0x0006,

0xf49d,	// (0x00072b3e) msg_data_pane_g

0x68e3,	// (0x00069f84) msg_text_pane_ParamLimits

0x68e3,	// (0x00069f84) msg_text_pane

0x9f63,	// (0x0006d604) qrid_highlight_pane_cp011_ParamLimits

0x9f63,	// (0x0006d604) qrid_highlight_pane_cp011

0x04c2,	// (0x00063b63) msg_body_pane

0x04c2,	// (0x00063b63) msg_header_pane

0x1606,	// (0x00064ca7) input_focus_pane_cp07

0x6926,	// (0x00069fc7) msg_header_pane_t1_ParamLimits

0x6926,	// (0x00069fc7) msg_header_pane_t1

0x6938,	// (0x00069fd9) msg_header_pane_t2_ParamLimits

0x6938,	// (0x00069fd9) msg_header_pane_t2

0x0001,

0xf4b1,	// (0x00072b52) msg_header_pane_t_ParamLimits

0xf4b1,	// (0x00072b52) msg_header_pane_t

0x161b,	// (0x00064cbc) msg_body_pane_g1

0x694a,	// (0x00069feb) msg_body_pane_t1_ParamLimits

0x694a,	// (0x00069feb) msg_body_pane_t1

0x697b,	// (0x0006a01c) msg_body_pane_t2_ParamLimits

0x697b,	// (0x0006a01c) msg_body_pane_t2

0x698d,	// (0x0006a02e) msg_body_pane_t3_ParamLimits

0x698d,	// (0x0006a02e) msg_body_pane_t3

0x0002,

0xf4b6,	// (0x00072b57) msg_body_pane_t_ParamLimits

0xf4b6,	// (0x00072b57) msg_body_pane_t

0x9fcf,	// (0x0006d670) main_viewer_pane_g1_ParamLimits

0x9fcf,	// (0x0006d670) main_viewer_pane_g1

0x9fdb,	// (0x0006d67c) main_viewer_pane_g2_ParamLimits

0x9fdb,	// (0x0006d67c) main_viewer_pane_g2

0x9fe7,	// (0x0006d688) main_viewer_pane_g3_ParamLimits

0x9fe7,	// (0x0006d688) main_viewer_pane_g3

0x9ff8,	// (0x0006d699) main_viewer_pane_g4_ParamLimits

0x9ff8,	// (0x0006d699) main_viewer_pane_g4

0xa009,	// (0x0006d6aa) main_viewer_pane_g5_ParamLimits

0xa009,	// (0x0006d6aa) main_viewer_pane_g5

0xa009,	// (0x0006d6aa) main_viewer_pane_g7_ParamLimits

0xa009,	// (0x0006d6aa) main_viewer_pane_g7

0xa01b,	// (0x0006d6bc) main_viewer_pane_g8_ParamLimits

0xa01b,	// (0x0006d6bc) main_viewer_pane_g8

0x0007,

0xf4c6,	// (0x00072b67) main_viewer_pane_g_ParamLimits

0xf4c6,	// (0x00072b67) main_viewer_pane_g

0x1659,	// (0x00064cfa) viewer_content_pane_ParamLimits

0x1659,	// (0x00064cfa) viewer_content_pane

0xa053,	// (0x0006d6f4) main_postcard_pane_g1_ParamLimits

0xa053,	// (0x0006d6f4) main_postcard_pane_g1

0xa061,	// (0x0006d702) main_postcard_pane_g2_ParamLimits

0xa061,	// (0x0006d702) main_postcard_pane_g2

0xa06f,	// (0x0006d710) main_postcard_pane_g3_ParamLimits

0xa06f,	// (0x0006d710) main_postcard_pane_g3

0x0005,

0xf4d7,	// (0x00072b78) main_postcard_pane_g_ParamLimits

0xf4d7,	// (0x00072b78) main_postcard_pane_g

0xa07f,	// (0x0006d720) main_postcard_pane_g4

0x297d,	// (0x0006601e) smil_status_volume_pane_g2

0xa0ab,	// (0x0006d74c) postcard_pane_ParamLimits

0xa0ab,	// (0x0006d74c) postcard_pane

0x1545,	// (0x00064be6) postcard_pane_g1_ParamLimits

0x1545,	// (0x00064be6) postcard_pane_g1

0xa0dd,	// (0x0006d77e) postcard_pane_g2_ParamLimits

0xa0dd,	// (0x0006d77e) postcard_pane_g2

0xa0e9,	// (0x0006d78a) postcard_pane_g3_ParamLimits

0xa0e9,	// (0x0006d78a) postcard_pane_g3

0x1675,	// (0x00064d16) postcard_pane_g4_ParamLimits

0x1675,	// (0x00064d16) postcard_pane_g4

0xa0f5,	// (0x0006d796) postcard_pane_g5_ParamLimits

0xa0f5,	// (0x0006d796) postcard_pane_g5

0xa101,	// (0x0006d7a2) postcard_pane_g6_ParamLimits

0xa101,	// (0x0006d7a2) postcard_pane_g6

0x1667,	// (0x00064d08) postcard_pane_g7_ParamLimits

0x1667,	// (0x00064d08) postcard_pane_g7

0x0006,

0xf4e4,	// (0x00072b85) postcard_pane_g_ParamLimits

0xf4e4,	// (0x00072b85) postcard_pane_g

0xa10d,	// (0x0006d7ae) main_mp2_pane_g1_ParamLimits

0xa10d,	// (0x0006d7ae) main_mp2_pane_g1

0xa119,	// (0x0006d7ba) main_mp2_pane_g2_ParamLimits

0xa119,	// (0x0006d7ba) main_mp2_pane_g2

0xa125,	// (0x0006d7c6) main_mp2_pane_g3_ParamLimits

0xa125,	// (0x0006d7c6) main_mp2_pane_g3

0x0002,

0xf4f3,	// (0x00072b94) main_mp2_pane_g_ParamLimits

0xf4f3,	// (0x00072b94) main_mp2_pane_g

0xa131,	// (0x0006d7d2) main_mp2_pane_t1_ParamLimits

0xa131,	// (0x0006d7d2) main_mp2_pane_t1

0xa148,	// (0x0006d7e9) main_mp2_pane_t2_ParamLimits

0xa148,	// (0x0006d7e9) main_mp2_pane_t2

0xa15c,	// (0x0006d7fd) main_mp2_pane_t3_ParamLimits

0xa15c,	// (0x0006d7fd) main_mp2_pane_t3

0x0002,

0xf4fa,	// (0x00072b9b) main_mp2_pane_t_ParamLimits

0xf4fa,	// (0x00072b9b) main_mp2_pane_t

0x1683,	// (0x00064d24) pec_content_pane_ParamLimits

0x1683,	// (0x00064d24) pec_content_pane

0x0c3a,	// (0x000642db) scroll_pane_cp015

0x1695,	// (0x00064d36) pec_attribute_pane_ParamLimits

0x1695,	// (0x00064d36) pec_attribute_pane

0xa16e,	// (0x0006d80f) pec_content_pane_g1_ParamLimits

0xa16e,	// (0x0006d80f) pec_content_pane_g1

0x16a5,	// (0x00064d46) pec_content_pane_t1_ParamLimits

0x16a5,	// (0x00064d46) pec_content_pane_t1

0x16b7,	// (0x00064d58) pec_content_pane_t2_ParamLimits

0x16b7,	// (0x00064d58) pec_content_pane_t2

0x0001,

0xf501,	// (0x00072ba2) pec_content_pane_t_ParamLimits

0xf501,	// (0x00072ba2) pec_content_pane_t

0xa17a,	// (0x0006d81b) list_single_graphic_pane_cp01_ParamLimits

0xa17a,	// (0x0006d81b) list_single_graphic_pane_cp01

0x071d,	// (0x00063dbe) bg_popup_sub_pane_cp04

0x16c9,	// (0x00064d6a) popup_mup_playback_window_g1

0x16d5,	// (0x00064d76) popup_mup_playback_window_t1

0x16ea,	// (0x00064d8b) popup_mup_playback_window_t2

0x0001,

0xf506,	// (0x00072ba7) popup_mup_playback_window_t

0x1721,	// (0x00064dc2) main_image_pane_g1_ParamLimits

0x1721,	// (0x00064dc2) main_image_pane_g1

0x1764,	// (0x00064e05) scroll_pane_cp018_ParamLimits

0x1764,	// (0x00064e05) scroll_pane_cp018

0x177c,	// (0x00064e1d) scroll_pane_cp016_ParamLimits

0x177c,	// (0x00064e1d) scroll_pane_cp016

0xa213,	// (0x0006d8b4) smil2_image_pane_ParamLimits

0xa213,	// (0x0006d8b4) smil2_image_pane

0xa243,	// (0x0006d8e4) smil2_root_pane_ParamLimits

0xa243,	// (0x0006d8e4) smil2_root_pane

0xa26f,	// (0x0006d910) smil2_text_pane_ParamLimits

0xa26f,	// (0x0006d910) smil2_text_pane

0x04c2,	// (0x00063b63) bg_list_pane_cp06

0x17b8,	// (0x00064e59) grid_radio_pane

0x04c2,	// (0x00063b63) bg_popup_window_pane_cp06

0x17c0,	// (0x00064e61) main_fmradio_pane_t1

0x1208,	// (0x000648a9) heading_pane_cp04

0x17ce,	// (0x00064e6f) main_fmradio_pane_t2

0x2793,	// (0x00065e34) popup_cale_lunar_info_window_g1

0x17dc,	// (0x00064e7d) main_fmradio_pane_t3

0x279b,	// (0x00065e3c) popup_cale_lunar_info_window_g2

0x17ea,	// (0x00064e8b) main_fmradio_pane_t4

0x0001,

0x17f8,	// (0x00064e99) main_fmradio_pane_t5

0x0004,

0xf5e1,	// (0x00072c82) popup_cale_lunar_info_window_g

0xf51b,	// (0x00072bbc) main_fmradio_pane_t

0x1806,	// (0x00064ea7) wait_bar_pane_cp03

0x180e,	// (0x00064eaf) cell_fmradio_pane_ParamLimits

0x180e,	// (0x00064eaf) cell_fmradio_pane

0x1667,	// (0x00064d08) cell_fmradio_pane_g1_ParamLimits

0x1667,	// (0x00064d08) cell_fmradio_pane_g1

0x04c2,	// (0x00063b63) grid_highlight_pane_cp011

0x1821,	// (0x00064ec2) poc_content_pane_ParamLimits

0x1821,	// (0x00064ec2) poc_content_pane

0x1833,	// (0x00064ed4) scroll_pane_cp019

0xa2af,	// (0x0006d950) popup_call_poc_act_window_ParamLimits

0xa2af,	// (0x0006d950) popup_call_poc_act_window

0xa2bc,	// (0x0006d95d) popup_call_poc_inact_window_ParamLimits

0xa2bc,	// (0x0006d95d) popup_call_poc_inact_window

0xf5b8,	// (0x00072c59) bg_popup_call_poc_act_pane_g

0x270b,	// (0x00065dac) bg_popup_call_poc_inact_pane_g1

0x2713,	// (0x00065db4) bg_popup_call_poc_inact_pane_g2

0x183b,	// (0x00064edc) popup_call_poc_act_window_g2

0x271b,	// (0x00065dbc) bg_popup_call_poc_inact_pane_g3

0x2723,	// (0x00065dc4) bg_popup_call_poc_inact_pane_g4

0x272b,	// (0x00065dcc) bg_popup_call_poc_inact_pane_g5

0x1843,	// (0x00064ee4) popup_call_poc_act_window_t1_ParamLimits

0x1843,	// (0x00064ee4) popup_call_poc_act_window_t1

0x186b,	// (0x00064f0c) popup_call_poc_act_window_t2_ParamLimits

0x186b,	// (0x00064f0c) popup_call_poc_act_window_t2

0x1893,	// (0x00064f34) popup_call_poc_act_window_t3_ParamLimits

0x1893,	// (0x00064f34) popup_call_poc_act_window_t3

0x18bb,	// (0x00064f5c) popup_call_poc_act_window_t4_ParamLimits

0x18bb,	// (0x00064f5c) popup_call_poc_act_window_t4

0x0003,

0xf526,	// (0x00072bc7) popup_call_poc_act_window_t_ParamLimits

0xf526,	// (0x00072bc7) popup_call_poc_act_window_t

0x2733,	// (0x00065dd4) bg_popup_call_poc_inact_pane_g6

0x273b,	// (0x00065ddc) bg_popup_call_poc_inact_pane_g7

0x2743,	// (0x00065de4) bg_popup_call_poc_inact_pane_g8

0x18cd,	// (0x00064f6e) popup_call_poc_inact_window_g2

0x274b,	// (0x00065dec) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf5a5,	// (0x00072c46) bg_popup_call_poc_inact_pane_g

0x18d5,	// (0x00064f76) popup_call_poc_inact_window_t1_ParamLimits

0x18d5,	// (0x00064f76) popup_call_poc_inact_window_t1

0x18ea,	// (0x00064f8b) popup_call_poc_inact_window_t2_ParamLimits

0x18ea,	// (0x00064f8b) popup_call_poc_inact_window_t2

0x18ff,	// (0x00064fa0) popup_call_poc_inact_window_t3_ParamLimits

0x18ff,	// (0x00064fa0) popup_call_poc_inact_window_t3

0x0002,

0xf52f,	// (0x00072bd0) popup_call_poc_inact_window_t_ParamLimits

0xf52f,	// (0x00072bd0) popup_call_poc_inact_window_t

0x2903,	// (0x00065fa4) context_pane_ParamLimits

0xa8ac,	// (0x0006df4d) signal_pane_ParamLimits

0x1474,	// (0x00064b15) main_call2_pane

0x28f1,	// (0x00065f92) popup_phob_thumbnail2_window_ParamLimits

0x28f1,	// (0x00065f92) popup_phob_thumbnail2_window

0x9f7d,	// (0x0006d61e) aid_hotspot_pointer_arrow_pane

0x9f85,	// (0x0006d626) aid_hotspot_pointer_hand_pane

0xa5de,	// (0x0006dc7f) phob_pre_status_pane_g5

0x84e6,	// (0x0006bb87) cams_zoom_pane_ParamLimits

0x84f2,	// (0x0006bb93) image_vga_pane_ParamLimits

0x8501,	// (0x0006bba2) main_camera_pane_g1_ParamLimits

0x850f,	// (0x0006bbb0) main_camera_pane_g2_ParamLimits

0x851b,	// (0x0006bbbc) main_camera_pane_g3_ParamLimits

0x8527,	// (0x0006bbc8) main_camera_pane_g4_ParamLimits

0x8533,	// (0x0006bbd4) main_camera_pane_g5_ParamLimits

0x853f,	// (0x0006bbe0) main_camera_pane_g6_ParamLimits

0x854b,	// (0x0006bbec) main_camera_pane_g7_ParamLimits

0xf22e,	// (0x000728cf) main_camera_pane_g_ParamLimits

0x8557,	// (0x0006bbf8) main_camera_pane_t1_ParamLimits

0x8569,	// (0x0006bc0a) main_camera_pane_t2_ParamLimits

0xf23f,	// (0x000728e0) main_camera_pane_t_ParamLimits

0x071d,	// (0x00063dbe) bg_popup_preview_window_pane_cp01_ParamLimits

0x071d,	// (0x00063dbe) bg_popup_preview_window_pane_cp01

0x1914,	// (0x00064fb5) popup_phob_thumbnail2_window_g1_ParamLimits

0x1914,	// (0x00064fb5) popup_phob_thumbnail2_window_g1

0x04c2,	// (0x00063b63) call2_cli_visual_pane

0xa2d8,	// (0x0006d979) popup_call2_audio_conf_window_ParamLimits

0xa2d8,	// (0x0006d979) popup_call2_audio_conf_window

0xa2ed,	// (0x0006d98e) popup_call2_audio_first_window_ParamLimits

0xa2ed,	// (0x0006d98e) popup_call2_audio_first_window

0xa38b,	// (0x0006da2c) popup_call2_audio_in_window_ParamLimits

0xa38b,	// (0x0006da2c) popup_call2_audio_in_window

0xa3cd,	// (0x0006da6e) popup_call2_audio_out_window_ParamLimits

0xa3cd,	// (0x0006da6e) popup_call2_audio_out_window

0xa42f,	// (0x0006dad0) popup_call2_audio_second_window_ParamLimits

0xa42f,	// (0x0006dad0) popup_call2_audio_second_window

0xa48d,	// (0x0006db2e) popup_call2_audio_wait_window_ParamLimits

0xa48d,	// (0x0006db2e) popup_call2_audio_wait_window

0x04c2,	// (0x00063b63) bg_popup_call2_act_pane_cp03

0x06ff,	// (0x00063da0) list_conf_pane_cp

0x1920,	// (0x00064fc1) popup_call2_audio_conf_window_t1

0x1265,	// (0x00064906) list_single_graphic_popup_conf2_pane_ParamLimits

0x1265,	// (0x00064906) list_single_graphic_popup_conf2_pane

0x1278,	// (0x00064919) list_highlight_pane_cp04

0x192e,	// (0x00064fcf) list_single_graphic_popup_conf2_pane_g1

0x1289,	// (0x0006492a) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf536,	// (0x00072bd7) list_single_graphic_popup_conf2_pane_g

0x1938,	// (0x00064fd9) list_single_graphic_popup_conf2_pane_t1

0x1946,	// (0x00064fe7) bg_popup_call2_act_pane_cp01_ParamLimits

0x1946,	// (0x00064fe7) bg_popup_call2_act_pane_cp01

0x19d0,	// (0x00065071) call_type_pane_cp05_ParamLimits

0x19d0,	// (0x00065071) call_type_pane_cp05

0x1a24,	// (0x000650c5) popup_call2_audio_second_window_g1_ParamLimits

0x1a24,	// (0x000650c5) popup_call2_audio_second_window_g1

0x1a78,	// (0x00065119) popup_call2_audio_second_window_g2_ParamLimits

0x1a78,	// (0x00065119) popup_call2_audio_second_window_g2

0x0002,

0xf53b,	// (0x00072bdc) popup_call2_audio_second_window_g_ParamLimits

0xf53b,	// (0x00072bdc) popup_call2_audio_second_window_g

0x1add,	// (0x0006517e) popup_call2_audio_second_window_t1_ParamLimits

0x1add,	// (0x0006517e) popup_call2_audio_second_window_t1

0x1b98,	// (0x00065239) popup_call2_audio_second_window_t2_ParamLimits

0x1b98,	// (0x00065239) popup_call2_audio_second_window_t2

0x1beb,	// (0x0006528c) popup_call2_audio_second_window_t3_ParamLimits

0x1beb,	// (0x0006528c) popup_call2_audio_second_window_t3

0x0003,

0xf542,	// (0x00072be3) popup_call2_audio_second_window_t_ParamLimits

0xf542,	// (0x00072be3) popup_call2_audio_second_window_t

0x04c2,	// (0x00063b63) bg_popup_call2_in_pane_cp02

0x04cc,	// (0x00063b6d) call_type_pane_cp04

0x04d4,	// (0x00063b75) popup_call2_audio_wait_window_g1

0x04dc,	// (0x00063b7d) popup_call2_audio_wait_window_g2

0x0001,

0xf11b,	// (0x000727bc) popup_call2_audio_wait_window_g

0x04e4,	// (0x00063b85) popup_call2_audio_wait_window_t3

0x1cde,	// (0x0006537f) bg_popup_call2_act_pane_ParamLimits

0x1cde,	// (0x0006537f) bg_popup_call2_act_pane

0x1d9e,	// (0x0006543f) call_type_pane_cp03_ParamLimits

0x1d9e,	// (0x0006543f) call_type_pane_cp03

0x1e02,	// (0x000654a3) popup_call2_audio_first_window_g1_ParamLimits

0x1e02,	// (0x000654a3) popup_call2_audio_first_window_g1

0x1e72,	// (0x00065513) popup_call2_audio_first_window_g2_ParamLimits

0x1e72,	// (0x00065513) popup_call2_audio_first_window_g2

0x1545,	// (0x00064be6) popup_call2_audio_first_window_g3_ParamLimits

0x1545,	// (0x00064be6) popup_call2_audio_first_window_g3

0x0004,

0xf54b,	// (0x00072bec) popup_call2_audio_first_window_g_ParamLimits

0xf54b,	// (0x00072bec) popup_call2_audio_first_window_g

0x1f50,	// (0x000655f1) popup_call2_audio_first_window_t1_ParamLimits

0x1f50,	// (0x000655f1) popup_call2_audio_first_window_t1

0x2053,	// (0x000656f4) popup_call2_audio_first_window_t4_ParamLimits

0x2053,	// (0x000656f4) popup_call2_audio_first_window_t4

0x2136,	// (0x000657d7) popup_call2_audio_first_window_t5_ParamLimits

0x2136,	// (0x000657d7) popup_call2_audio_first_window_t5

0x0003,

0xf556,	// (0x00072bf7) popup_call2_audio_first_window_t_ParamLimits

0xf556,	// (0x00072bf7) popup_call2_audio_first_window_t

0x0715,	// (0x00063db6) bg_popup_call2_act_pane_g1

0x27a3,	// (0x00065e44) popup_cale_lunar_info_window_t1

0x27b1,	// (0x00065e52) popup_cale_lunar_info_window_t2

0x27bf,	// (0x00065e60) popup_cale_lunar_info_window_t3

0x04c2,	// (0x00063b63) bg_popup_call2_bubble_pane

0x2237,	// (0x000658d8) bg_popup_call2_in_pane_cp01_ParamLimits

0x2237,	// (0x000658d8) bg_popup_call2_in_pane_cp01

0x019e,	// (0x0006383f) call_type_pane_cp02

0x227f,	// (0x00065920) popup_call2_audio_out_window_g1_ParamLimits

0x227f,	// (0x00065920) popup_call2_audio_out_window_g1

0x22ab,	// (0x0006594c) popup_call2_audio_out_window_g2_ParamLimits

0x22ab,	// (0x0006594c) popup_call2_audio_out_window_g2

0x22d3,	// (0x00065974) popup_call2_audio_out_window_g3_ParamLimits

0x22d3,	// (0x00065974) popup_call2_audio_out_window_g3

0x0003,

0xf55f,	// (0x00072c00) popup_call2_audio_out_window_g_ParamLimits

0xf55f,	// (0x00072c00) popup_call2_audio_out_window_g

0x230e,	// (0x000659af) popup_call2_audio_out_window_t1_ParamLimits

0x230e,	// (0x000659af) popup_call2_audio_out_window_t1

0x236d,	// (0x00065a0e) popup_call2_audio_out_window_t2_ParamLimits

0x236d,	// (0x00065a0e) popup_call2_audio_out_window_t2

0x23c1,	// (0x00065a62) popup_call2_audio_out_window_t3_ParamLimits

0x23c1,	// (0x00065a62) popup_call2_audio_out_window_t3

0x23d7,	// (0x00065a78) popup_call2_audio_out_window_t4_ParamLimits

0x23d7,	// (0x00065a78) popup_call2_audio_out_window_t4

0x23ed,	// (0x00065a8e) popup_call2_audio_out_window_t5_ParamLimits

0x23ed,	// (0x00065a8e) popup_call2_audio_out_window_t5

0x0005,

0xf568,	// (0x00072c09) popup_call2_audio_out_window_t_ParamLimits

0xf568,	// (0x00072c09) popup_call2_audio_out_window_t

0x2451,	// (0x00065af2) bg_popup_call2_in_pane_ParamLimits

0x2451,	// (0x00065af2) bg_popup_call2_in_pane

0x24ad,	// (0x00065b4e) popup_call2_audio_in_window_g1_ParamLimits

0x24ad,	// (0x00065b4e) popup_call2_audio_in_window_g1

0x24e5,	// (0x00065b86) popup_call2_audio_in_window_g2_ParamLimits

0x24e5,	// (0x00065b86) popup_call2_audio_in_window_g2

0x251d,	// (0x00065bbe) popup_call2_audio_in_window_g3_ParamLimits

0x251d,	// (0x00065bbe) popup_call2_audio_in_window_g3

0x0003,

0xf575,	// (0x00072c16) popup_call2_audio_in_window_g_ParamLimits

0xf575,	// (0x00072c16) popup_call2_audio_in_window_g

0x2575,	// (0x00065c16) popup_call2_audio_in_window_t1_ParamLimits

0x2575,	// (0x00065c16) popup_call2_audio_in_window_t1

0x25f5,	// (0x00065c96) popup_call2_audio_in_window_t2_ParamLimits

0x25f5,	// (0x00065c96) popup_call2_audio_in_window_t2

0x2675,	// (0x00065d16) popup_call2_audio_in_window_t3_ParamLimits

0x2675,	// (0x00065d16) popup_call2_audio_in_window_t3

0x268f,	// (0x00065d30) popup_call2_audio_in_window_t4_ParamLimits

0x268f,	// (0x00065d30) popup_call2_audio_in_window_t4

0x26a1,	// (0x00065d42) popup_call2_audio_in_window_t5_ParamLimits

0x26a1,	// (0x00065d42) popup_call2_audio_in_window_t5

0x26b6,	// (0x00065d57) popup_call2_audio_in_window_t6_ParamLimits

0x26b6,	// (0x00065d57) popup_call2_audio_in_window_t6

0x0005,

0xf57e,	// (0x00072c1f) popup_call2_audio_in_window_t_ParamLimits

0xf57e,	// (0x00072c1f) popup_call2_audio_in_window_t

0x0715,	// (0x00063db6) bg_popup_call2_in_pane_g1

0x27cd,	// (0x00065e6e) popup_cale_lunar_info_window_t4

0x0003,

0xf5e6,	// (0x00072c87) popup_cale_lunar_info_window_t

0x071d,	// (0x00063dbe) bg_popup_call2_rect_pane_ParamLimits

0x071d,	// (0x00063dbe) bg_popup_call2_rect_pane

0x04c2,	// (0x00063b63) call2_cli_visual_graphic_pane

0x04c2,	// (0x00063b63) call2_cli_visual_text_pane

0xa952,	// (0x0006dff3) smil_status_volume_pane_g3

0x0002,

0x0899,	// (0x00063f3a) call2_cli_visual_graphic_pane_g1

0x0899,	// (0x00063f3a) call2_cli_visual_graphic_pane_g2

0x0899,	// (0x00063f3a) call2_cli_visual_graphic_pane_g3

0x0002,

0xf58b,	// (0x00072c2c) call2_cli_visual_graphic_pane_g

0x26cb,	// (0x00065d6c) bg_popup_call2_rect_pane_g1

0x0925,	// (0x00063fc6) bg_popup_call2_rect_pane_g2

0x26d3,	// (0x00065d74) bg_popup_call2_rect_pane_g3

0x26db,	// (0x00065d7c) bg_popup_call2_rect_pane_g4

0x26e3,	// (0x00065d84) bg_popup_call2_rect_pane_g5

0x26eb,	// (0x00065d8c) bg_popup_call2_rect_pane_g6

0x26f3,	// (0x00065d94) bg_popup_call2_rect_pane_g7

0x26fb,	// (0x00065d9c) bg_popup_call2_rect_pane_g8

0x2703,	// (0x00065da4) bg_popup_call2_rect_pane_g9

0x0008,

0xf592,	// (0x00072c33) bg_popup_call2_rect_pane_g

0x270b,	// (0x00065dac) bg_popup_call2_bubble_pane_g1

0x2713,	// (0x00065db4) bg_popup_call2_bubble_pane_g2

0x271b,	// (0x00065dbc) bg_popup_call2_bubble_pane_g3

0x2723,	// (0x00065dc4) bg_popup_call2_bubble_pane_g4

0x272b,	// (0x00065dcc) bg_popup_call2_bubble_pane_g5

0x2733,	// (0x00065dd4) bg_popup_call2_bubble_pane_g6

0x273b,	// (0x00065ddc) bg_popup_call2_bubble_pane_g7

0x2743,	// (0x00065de4) bg_popup_call2_bubble_pane_g8

0x274b,	// (0x00065dec) bg_popup_call2_bubble_pane_g9

0x0008,

0xf5a5,	// (0x00072c46) bg_popup_call2_bubble_pane_g

0x805f,	// (0x0006b700) aid_cale_week_size_cell_pane

0x857b,	// (0x0006bc1c) aid_cams_cif_uncrop_pane_ParamLimits

0x857b,	// (0x0006bc1c) aid_cams_cif_uncrop_pane

0x86d8,	// (0x0006bd79) aid_cams_size_cell_ParamLimits

0x86d8,	// (0x0006bd79) aid_cams_size_cell

0x86e4,	// (0x0006bd85) grid_cams_pane_ParamLimits

0x86f2,	// (0x0006bd93) linegrid_cams_pane_ParamLimits

0x87c7,	// (0x0006be68) call_video_pane_t1

0x87e8,	// (0x0006be89) call_video_pane_t2

0x0001,

0xf292,	// (0x00072933) call_video_pane_t

0x8d1f,	// (0x0006c3c0) aid_cale_month_size_cell_pane_ParamLimits

0x8d1f,	// (0x0006c3c0) aid_cale_month_size_cell_pane

0xf62f,	// (0x00072cd0) smil_status_volume_pane_g

0xa95f,	// (0x0006e000) volume_smil_pane_ParamLimits

0x780e,	// (0x0006aeaf) aid_popup2_width_pane

0x7f6a,	// (0x0006b60b) cell_qdial_pane_g4_ParamLimits

0x7f6a,	// (0x0006b60b) cell_qdial_pane_g4

0x9942,	// (0x0006cfe3) aid_blid_cardinal_pane_ParamLimits

0x9952,	// (0x0006cff3) aid_blid_destination_pane_ParamLimits

0x9952,	// (0x0006cff3) aid_blid_destination_pane

0x071d,	// (0x00063dbe) bg_popup_call_poc_act_pane_ParamLimits

0x071d,	// (0x00063dbe) bg_popup_call_poc_act_pane

0x071d,	// (0x00063dbe) bg_popup_call_poc_inact_pane_ParamLimits

0x071d,	// (0x00063dbe) bg_popup_call_poc_inact_pane

0x2753,	// (0x00065df4) bg_popup_call_poc_act_pane_g1

0x275b,	// (0x00065dfc) bg_popup_call_poc_act_pane_g2

0x2763,	// (0x00065e04) bg_popup_call_poc_act_pane_g3

0x2723,	// (0x00065dc4) bg_popup_call_poc_act_pane_g4

0x272b,	// (0x00065dcc) bg_popup_call_poc_act_pane_g5

0x276b,	// (0x00065e0c) bg_popup_call_poc_act_pane_g6

0x273b,	// (0x00065ddc) bg_popup_call_poc_act_pane_g7

0x2773,	// (0x00065e14) bg_popup_call_poc_act_pane_g8

0x04c2,	// (0x00063b63) main_usb_pane

0x28cc,	// (0x00065f6d) popup_cale_lunar_info_window

0x8b13,	// (0x0006c1b4) im_reading_pane_t1_ParamLimits

0x0b92,	// (0x00064233) list_im_pane_ParamLimits

0x0ba3,	// (0x00064244) scroll_pane_cp07_ParamLimits

0x04c2,	// (0x00063b63) grid_highlight_pane_cp012

0x071d,	// (0x00063dbe) mup_scale_pane_ParamLimits

0x1545,	// (0x00064be6) main_usb_pane_g1_ParamLimits

0x1545,	// (0x00064be6) main_usb_pane_g1

0xa501,	// (0x0006dba2) main_usb_pane_g2_ParamLimits

0xa501,	// (0x0006dba2) main_usb_pane_g2

0x0001,

0xf5cf,	// (0x00072c70) main_usb_pane_g_ParamLimits

0xf5cf,	// (0x00072c70) main_usb_pane_g

0xa50d,	// (0x0006dbae) main_usb_pane_t1_ParamLimits

0xa50d,	// (0x0006dbae) main_usb_pane_t1

0xa51f,	// (0x0006dbc0) main_usb_pane_t2_ParamLimits

0xa51f,	// (0x0006dbc0) main_usb_pane_t2

0xa531,	// (0x0006dbd2) main_usb_pane_t3_ParamLimits

0xa531,	// (0x0006dbd2) main_usb_pane_t3

0xa543,	// (0x0006dbe4) main_usb_pane_t4_ParamLimits

0xa543,	// (0x0006dbe4) main_usb_pane_t4

0xa555,	// (0x0006dbf6) main_usb_pane_t5_ParamLimits

0xa555,	// (0x0006dbf6) main_usb_pane_t5

0xa567,	// (0x0006dc08) main_usb_pane_t6_ParamLimits

0xa567,	// (0x0006dc08) main_usb_pane_t6

0x0005,

0xf5d4,	// (0x00072c75) main_usb_pane_t_ParamLimits

0x98e8,	// (0x0006cf89) aid_text_placing

0x98f4,	// (0x0006cf95) main_location2_pane_t1_ParamLimits

0x9908,	// (0x0006cfa9) main_location2_pane_t2_ParamLimits

0x991c,	// (0x0006cfbd) main_location2_pane_t3_ParamLimits

0x9930,	// (0x0006cfd1) main_location2_pane_t4_ParamLimits

0x9930,	// (0x0006cfd1) main_location2_pane_t4

0xf3f3,	// (0x00072a94) main_location2_pane_t_ParamLimits

0x0759,	// (0x00063dfa) find_pinb_pane_g2_ParamLimits

0x0759,	// (0x00063dfa) find_pinb_pane_g2

0x0001,

0xf141,	// (0x000727e2) find_pinb_pane_g_ParamLimits

0xf141,	// (0x000727e2) find_pinb_pane_g

0x0765,	// (0x00063e06) find_pinb_pane_t1_ParamLimits

0x0777,	// (0x00063e18) find_pinb_pane_t2_ParamLimits

0xf146,	// (0x000727e7) find_pinb_pane_t_ParamLimits

0x04c2,	// (0x00063b63) main_call3_pane

0x912b,	// (0x0006c7cc) cale_month_day_heading_pane_t1_ParamLimits

0x9189,	// (0x0006c82a) cale_month_day_heading_pane_t2_ParamLimits

0x91ee,	// (0x0006c88f) cale_month_day_heading_pane_t3_ParamLimits

0x9253,	// (0x0006c8f4) cale_month_day_heading_pane_t4_ParamLimits

0x92b8,	// (0x0006c959) cale_month_day_heading_pane_t5_ParamLimits

0x931d,	// (0x0006c9be) cale_month_day_heading_pane_t6_ParamLimits

0x9382,	// (0x0006ca23) cale_month_day_heading_pane_t7_ParamLimits

0xf2ca,	// (0x0007296b) cale_month_day_heading_pane_t_ParamLimits

0x0def,	// (0x00064490) smil_status_volume_pane

0xa0c5,	// (0x0006d766) postcard_address_pane_ParamLimits

0xa0c5,	// (0x0006d766) postcard_address_pane

0xa0d1,	// (0x0006d772) postcard_message_pane_ParamLimits

0xa0d1,	// (0x0006d772) postcard_message_pane

0xa4cc,	// (0x0006db6d) call2_cli_visual_pane_t1_ParamLimits

0xa4cc,	// (0x0006db6d) call2_cli_visual_pane_t1

0xaab6,	// (0x0006e157) postcard_message_pane_t1_ParamLimits

0xaab6,	// (0x0006e157) postcard_message_pane_t1

0xaa9f,	// (0x0006e140) postcard_address_pane_t1_ParamLimits

0xaa9f,	// (0x0006e140) postcard_address_pane_t1

0xaa90,	// (0x0006e131) popup_call3_audio_in_window_ParamLimits

0xaa90,	// (0x0006e131) popup_call3_audio_in_window

0xa974,	// (0x0006e015) bg_popup_call3_in_pane_ParamLimits

0xa974,	// (0x0006e015) bg_popup_call3_in_pane

0xa9d6,	// (0x0006e077) popup_call3_audio_in_window_g1_ParamLimits

0xa9d6,	// (0x0006e077) popup_call3_audio_in_window_g1

0xa9ee,	// (0x0006e08f) popup_call3_audio_in_window_g2_ParamLimits

0xa9ee,	// (0x0006e08f) popup_call3_audio_in_window_g2

0xaa06,	// (0x0006e0a7) popup_call3_audio_in_window_g3_ParamLimits

0xaa06,	// (0x0006e0a7) popup_call3_audio_in_window_g3

0x0003,

0xf636,	// (0x00072cd7) popup_call3_audio_in_window_g_ParamLimits

0xf636,	// (0x00072cd7) popup_call3_audio_in_window_g

0xaa2e,	// (0x0006e0cf) popup_call3_audio_in_window_t1_ParamLimits

0xaa2e,	// (0x0006e0cf) popup_call3_audio_in_window_t1

0xaa56,	// (0x0006e0f7) popup_call3_audio_in_window_t2_ParamLimits

0xaa56,	// (0x0006e0f7) popup_call3_audio_in_window_t2

0xaa7e,	// (0x0006e11f) popup_call3_audio_in_window_t3_ParamLimits

0xaa7e,	// (0x0006e11f) popup_call3_audio_in_window_t3

0x0002,

0xf63f,	// (0x00072ce0) popup_call3_audio_in_window_t_ParamLimits

0xf63f,	// (0x00072ce0) popup_call3_audio_in_window_t

0x1474,	// (0x00064b15) bg_popup_call3_rect_pane

0x26cb,	// (0x00065d6c) bg_popup_call3_rect_pane_g1

0x0925,	// (0x00063fc6) bg_popup_call3_rect_pane_g2

0x26d3,	// (0x00065d74) bg_popup_call3_rect_pane_g3

0x26db,	// (0x00065d7c) bg_popup_call3_rect_pane_g4

0x26e3,	// (0x00065d84) bg_popup_call3_rect_pane_g5

0x26eb,	// (0x00065d8c) bg_popup_call3_rect_pane_g6

0x26f3,	// (0x00065d94) bg_popup_call3_rect_pane_g7

0x9d42,	// (0x0006d3e3) mup_visualizer_osc_pane

0x1553,	// (0x00064bf4) mup_visualizer_spec_pane

0xa994,	// (0x0006e035) call3_video_qcif_pane_ParamLimits

0xa994,	// (0x0006e035) call3_video_qcif_pane

0xa9a6,	// (0x0006e047) call3_video_qcif_uncrop_pane_ParamLimits

0xa9a6,	// (0x0006e047) call3_video_qcif_uncrop_pane

0xa9b4,	// (0x0006e055) call3_video_subqcif_pane_ParamLimits

0xa9b4,	// (0x0006e055) call3_video_subqcif_pane

0xa9c6,	// (0x0006e067) call3_video_subqcif_uncrop_pane_ParamLimits

0xa9c6,	// (0x0006e067) call3_video_subqcif_uncrop_pane

0xaa1e,	// (0x0006e0bf) popup_call3_audio_in_window_g4_ParamLimits

0xaa1e,	// (0x0006e0bf) popup_call3_audio_in_window_g4

0xa941,	// (0x0006dfe2) mup_spec_half_pane

0xa94a,	// (0x0006dfeb) mup_spec_half_pane_cp

0x2963,	// (0x00066004) mup_osc_middle_pane

0x296c,	// (0x0006600d) mup_visualizer_osc_pane_g1

0xa922,	// (0x0006dfc3) mup_spec_bar_pane_ParamLimits

0xa922,	// (0x0006dfc3) mup_spec_bar_pane

0x2950,	// (0x00065ff1) mup_spec_bar_pane_g1

0x295a,	// (0x00065ffb) mup_spec_bar_pane_g2

0x0001,

0xf62a,	// (0x00072ccb) mup_spec_bar_pane_g

0x805f,	// (0x0006b700) aid_cale_week_size_cell_pane_ParamLimits

0x8072,	// (0x0006b713) bg_cale_heading_pane_ParamLimits

0x09a1,	// (0x00064042) bg_cale_pane_cp01_ParamLimits

0x808e,	// (0x0006b72f) cale_week_corner_pane_ParamLimits

0x80a4,	// (0x0006b745) cale_week_day_heading_pane_ParamLimits

0x80c0,	// (0x0006b761) cale_week_scroll_pane_g1_ParamLimits

0x80d9,	// (0x0006b77a) cale_week_scroll_pane_g2_ParamLimits

0x80ea,	// (0x0006b78b) cale_week_scroll_pane_g3_ParamLimits

0x80fb,	// (0x0006b79c) cale_week_scroll_pane_g4_ParamLimits

0x810c,	// (0x0006b7ad) cale_week_scroll_pane_g5_ParamLimits

0x811d,	// (0x0006b7be) cale_week_scroll_pane_g6_ParamLimits

0x812e,	// (0x0006b7cf) cale_week_scroll_pane_g7_ParamLimits

0x8141,	// (0x0006b7e2) cale_week_scroll_pane_g8_ParamLimits

0x8154,	// (0x0006b7f5) cale_week_scroll_pane_g9_ParamLimits

0x8165,	// (0x0006b806) cale_week_scroll_pane_g10_ParamLimits

0x8176,	// (0x0006b817) cale_week_scroll_pane_g11_ParamLimits

0x8187,	// (0x0006b828) cale_week_scroll_pane_g12_ParamLimits

0x8198,	// (0x0006b839) cale_week_scroll_pane_g13_ParamLimits

0x81b1,	// (0x0006b852) cale_week_scroll_pane_g14_ParamLimits

0x81ca,	// (0x0006b86b) cale_week_scroll_pane_g15_ParamLimits

0xf1d2,	// (0x00072873) cale_week_scroll_pane_g_ParamLimits

0x81e3,	// (0x0006b884) cale_week_time_pane_ParamLimits

0x81f6,	// (0x0006b897) grid_cale_week_pane_ParamLimits

0x09ba,	// (0x0006405b) listscroll_cale_week_pane_t1

0x8213,	// (0x0006b8b4) scroll_pane_cp08_ParamLimits

0x8d70,	// (0x0006c411) cale_month_corner_pane_ParamLimits

0x0db9,	// (0x0006445a) cale_month_pane_t1

0x90da,	// (0x0006c77b) cale_month_week_pane_ParamLimits

0x1545,	// (0x00064be6) popup_call_status_window_g1_ParamLimits

0x970b,	// (0x0006cdac) popup_call_status_window_g2_ParamLimits

0x9717,	// (0x0006cdb8) popup_call_status_window_g3_ParamLimits

0xf37a,	// (0x00072a1b) popup_call_status_window_g_ParamLimits

0x118d,	// (0x0006482e) aid_call2_pane

0x691a,	// (0x00069fbb) msg_header_pane_g1

0xa0c5,	// (0x0006d766) postcard_address2_pane_ParamLimits

0xa0c5,	// (0x0006d766) postcard_address2_pane

0xa0d1,	// (0x0006d772) postcard_message2_pane_ParamLimits

0xa0d1,	// (0x0006d772) postcard_message2_pane

0xa8ba,	// (0x0006df5b) message2_row_pane_ParamLimits

0xa8ba,	// (0x0006df5b) message2_row_pane

0xa8d5,	// (0x0006df76) address2_row_pane_ParamLimits

0xa8d5,	// (0x0006df76) address2_row_pane

0x291e,	// (0x00065fbf) postcard_message2_row_pane_g1

0x2926,	// (0x00065fc7) postcard_message2_row_pane_t1

0x291e,	// (0x00065fbf) address2_row_pane_g1

0x2926,	// (0x00065fc7) address2_row_pane_t1

0x8447,	// (0x0006bae8) aid_size_cell_vorec

0x04c2,	// (0x00063b63) main_rss_pane

0xa8e8,	// (0x0006df89) rss_list_single_pane_ParamLimits

0xa8e8,	// (0x0006df89) rss_list_single_pane

0x2934,	// (0x00065fd5) rss_list_single_pane_t1

0x2942,	// (0x00065fe3) rss_list_single_pane_t2

0x0001,

0xf625,	// (0x00072cc6) rss_list_single_pane_t

0x04c2,	// (0x00063b63) main_camera2_pane

0x04c2,	// (0x00063b63) main_video2_pane

0xab1a,	// (0x0006e1bb) cams_zoom_pane_cp2_ParamLimits

0xab1a,	// (0x0006e1bb) cams_zoom_pane_cp2

0xab26,	// (0x0006e1c7) image2_vga_pane_ParamLimits

0xab26,	// (0x0006e1c7) image2_vga_pane

0xab35,	// (0x0006e1d6) main_camera2_pane_g1_ParamLimits

0xab35,	// (0x0006e1d6) main_camera2_pane_g1

0xab41,	// (0x0006e1e2) main_camera2_pane_g2_ParamLimits

0xab41,	// (0x0006e1e2) main_camera2_pane_g2

0xab4d,	// (0x0006e1ee) main_camera2_pane_g3_ParamLimits

0xab4d,	// (0x0006e1ee) main_camera2_pane_g3

0xab59,	// (0x0006e1fa) main_camera2_pane_g4_ParamLimits

0xab59,	// (0x0006e1fa) main_camera2_pane_g4

0xab65,	// (0x0006e206) main_camera2_pane_g5_ParamLimits

0xab65,	// (0x0006e206) main_camera2_pane_g5

0xab71,	// (0x0006e212) main_camera2_pane_g6_ParamLimits

0xab71,	// (0x0006e212) main_camera2_pane_g6

0xab7d,	// (0x0006e21e) main_camera2_pane_g7_ParamLimits

0xab7d,	// (0x0006e21e) main_camera2_pane_g7

0xab89,	// (0x0006e22a) main_camera2_pane_g8_ParamLimits

0xab89,	// (0x0006e22a) main_camera2_pane_g8

0x0008,

0xf646,	// (0x00072ce7) main_camera2_pane_g_ParamLimits

0xf646,	// (0x00072ce7) main_camera2_pane_g

0xaba1,	// (0x0006e242) main_camera2_pane_t1_ParamLimits

0xaba1,	// (0x0006e242) main_camera2_pane_t1

0xabb3,	// (0x0006e254) main_camera2_pane_t2_ParamLimits

0xabb3,	// (0x0006e254) main_camera2_pane_t2

0xabc5,	// (0x0006e266) main_camera2_pane_t3_ParamLimits

0xabc5,	// (0x0006e266) main_camera2_pane_t3

0xabd7,	// (0x0006e278) main_camera2_pane_t4_ParamLimits

0xabd7,	// (0x0006e278) main_camera2_pane_t4

0x0006,

0xf659,	// (0x00072cfa) main_camera2_pane_t_ParamLimits

0xf659,	// (0x00072cfa) main_camera2_pane_t

0xac39,	// (0x0006e2da) cams_zoom_pane_cp4_ParamLimits

0xac39,	// (0x0006e2da) cams_zoom_pane_cp4

0xac49,	// (0x0006e2ea) image2_cif_pane_ParamLimits

0xac49,	// (0x0006e2ea) image2_cif_pane

0xac5e,	// (0x0006e2ff) image2_subqcif_pane_ParamLimits

0xac5e,	// (0x0006e2ff) image2_subqcif_pane

0xac6d,	// (0x0006e30e) main_video2_pane_g1_ParamLimits

0xac6d,	// (0x0006e30e) main_video2_pane_g1

0xac7f,	// (0x0006e320) main_video2_pane_g2_ParamLimits

0xac7f,	// (0x0006e320) main_video2_pane_g2

0xac8f,	// (0x0006e330) main_video2_pane_g3_ParamLimits

0xac8f,	// (0x0006e330) main_video2_pane_g3

0xac9f,	// (0x0006e340) main_video2_pane_g4_ParamLimits

0xac9f,	// (0x0006e340) main_video2_pane_g4

0xacaf,	// (0x0006e350) main_video2_pane_g5_ParamLimits

0xacaf,	// (0x0006e350) main_video2_pane_g5

0xacbf,	// (0x0006e360) main_video2_pane_g6_ParamLimits

0xacbf,	// (0x0006e360) main_video2_pane_g6

0x0005,

0xf668,	// (0x00072d09) main_video2_pane_g_ParamLimits

0xf668,	// (0x00072d09) main_video2_pane_g

0xacd1,	// (0x0006e372) main_video2_pane_t1_ParamLimits

0xacd1,	// (0x0006e372) main_video2_pane_t1

0xaceb,	// (0x0006e38c) main_video2_pane_t2_ParamLimits

0xaceb,	// (0x0006e38c) main_video2_pane_t2

0xad11,	// (0x0006e3b2) main_video2_pane_t3_ParamLimits

0xad11,	// (0x0006e3b2) main_video2_pane_t3

0x0002,

0xf675,	// (0x00072d16) main_video2_pane_t_ParamLimits

0xf675,	// (0x00072d16) main_video2_pane_t

0xa61e,	// (0x0006dcbf) call_muted_g2

0x0001,

0xf617,	// (0x00072cb8) call_muted_g

0x04c2,	// (0x00063b63) main_mup2_pane

0x469a,	// (0x00067d3b) main_mup2_pane_g1_ParamLimits

0x469a,	// (0x00067d3b) main_mup2_pane_g1

0xad37,	// (0x0006e3d8) main_mup2_pane_g2_ParamLimits

0xad37,	// (0x0006e3d8) main_mup2_pane_g2

0xafb9,	// (0x0006e65a) main_mup_pane_g13_cp1

0xafc1,	// (0x0006e662) mup_volume_pane_cp1

0xad57,	// (0x0006e3f8) main_mup2_pane_g4_ParamLimits

0xad57,	// (0x0006e3f8) main_mup2_pane_g4

0xad6c,	// (0x0006e40d) main_mup2_pane_g5_ParamLimits

0xad6c,	// (0x0006e40d) main_mup2_pane_g5

0xad81,	// (0x0006e422) main_mup2_pane_g6_ParamLimits

0xad81,	// (0x0006e422) main_mup2_pane_g6

0xad96,	// (0x0006e437) main_mup2_pane_g7_ParamLimits

0xad96,	// (0x0006e437) main_mup2_pane_g7

0x0006,

0xf67c,	// (0x00072d1d) main_mup2_pane_g_ParamLimits

0xf67c,	// (0x00072d1d) main_mup2_pane_g

0xadb2,	// (0x0006e453) main_mup2_pane_t1_ParamLimits

0xadb2,	// (0x0006e453) main_mup2_pane_t1

0xadc9,	// (0x0006e46a) main_mup2_pane_t2_ParamLimits

0xadc9,	// (0x0006e46a) main_mup2_pane_t2

0xade0,	// (0x0006e481) main_mup2_pane_t3_ParamLimits

0xade0,	// (0x0006e481) main_mup2_pane_t3

0xadf7,	// (0x0006e498) main_mup2_pane_t4_ParamLimits

0xadf7,	// (0x0006e498) main_mup2_pane_t4

0xae11,	// (0x0006e4b2) main_mup2_pane_t5_ParamLimits

0xae11,	// (0x0006e4b2) main_mup2_pane_t5

0xae2b,	// (0x0006e4cc) main_mup2_pane_t6_ParamLimits

0xae2b,	// (0x0006e4cc) main_mup2_pane_t6

0x0005,

0xf68b,	// (0x00072d2c) main_mup2_pane_t_ParamLimits

0xf68b,	// (0x00072d2c) main_mup2_pane_t

0xae63,	// (0x0006e504) mup2_visualizer_pane_ParamLimits

0xae63,	// (0x0006e504) mup2_visualizer_pane

0xae99,	// (0x0006e53a) mup_progress_pane_cp_ParamLimits

0xae99,	// (0x0006e53a) mup_progress_pane_cp

0xafa4,	// (0x0006e645) mup_volume_pane_cp_ParamLimits

0xafa4,	// (0x0006e645) mup_volume_pane_cp

0xaeb0,	// (0x0006e551) mup2_visualizer_pane_g1_ParamLimits

0xaeb0,	// (0x0006e551) mup2_visualizer_pane_g1

0x466c,	// (0x00067d0d) mup2_visualizer_pane_g2_ParamLimits

0x466c,	// (0x00067d0d) mup2_visualizer_pane_g2

0xaec5,	// (0x0006e566) mup2_visualizer_pane_g3_ParamLimits

0xaec5,	// (0x0006e566) mup2_visualizer_pane_g3

0x0002,

0xf698,	// (0x00072d39) mup2_visualizer_pane_g_ParamLimits

0xf698,	// (0x00072d39) mup2_visualizer_pane_g

0x17b0,	// (0x00064e51) aid_size_cell_fmradio

0xa734,	// (0x0006ddd5) aid_height_parent_landcape

0x0c21,	// (0x000642c2) wml_content_pane_cp

0x0c29,	// (0x000642ca) wml_tabs_pane

0x0c32,	// (0x000642d3) popup_wml_miniature_window

0x0c3a,	// (0x000642db) scroll_pane_cp021

0x0c4e,	// (0x000642ef) wml_content_pane_comp8

0x04c2,	// (0x00063b63) bg_popup_sub_pane_cp05

0x468a,	// (0x00067d2b) popup_wml_miniature_window_g1

0x4692,	// (0x00067d33) wml_miniature_view_pane

0xaed3,	// (0x0006e574) aid_size_wml_view

0xaedb,	// (0x0006e57c) wml_miniature_view_pane_g1

0xaee4,	// (0x0006e585) wml_miniature_view_pane_g2

0xaeed,	// (0x0006e58e) wml_miniature_view_pane_g3

0xaef5,	// (0x0006e596) wml_miniature_view_pane_g4

0xaefd,	// (0x0006e59e) wml_miniature_view_pane_g5

0xaf05,	// (0x0006e5a6) wml_miniature_view_pane_g6

0xaf0d,	// (0x0006e5ae) wml_miniature_view_pane_g7

0xaf15,	// (0x0006e5b6) wml_miniature_view_pane_g8

0x0007,

0xf69f,	// (0x00072d40) wml_miniature_view_pane_g

0x469a,	// (0x00067d3b) background_graphic_ParamLimits

0x469a,	// (0x00067d3b) background_graphic

0x46a6,	// (0x00067d47) wml_tabs_2_pane

0x46af,	// (0x00067d50) wml_tabs_3_pane_ParamLimits

0x46af,	// (0x00067d50) wml_tabs_3_pane

0x46c1,	// (0x00067d62) wml_tabs_4_pane_ParamLimits

0x46c1,	// (0x00067d62) wml_tabs_4_pane

0x46d7,	// (0x00067d78) wml_tabs_5_pane_ParamLimits

0x46d7,	// (0x00067d78) wml_tabs_5_pane

0x46f1,	// (0x00067d92) wml_tabs_pane_g2_ParamLimits

0x46f1,	// (0x00067d92) wml_tabs_pane_g2

0x4705,	// (0x00067da6) wml_tabs_pane_g3_ParamLimits

0x4705,	// (0x00067da6) wml_tabs_pane_g3

0xaf1d,	// (0x0006e5be) wml_tabs_2_active_pane_ParamLimits

0xaf1d,	// (0x0006e5be) wml_tabs_2_active_pane

0xaf2d,	// (0x0006e5ce) wml_tabs_2_passive_pane_ParamLimits

0xaf2d,	// (0x0006e5ce) wml_tabs_2_passive_pane

0xaf3d,	// (0x0006e5de) wml_tabs_3_active_pane_cp_ParamLimits

0xaf3d,	// (0x0006e5de) wml_tabs_3_active_pane_cp

0xaf4e,	// (0x0006e5ef) wml_tabs_3_passive_pane_ParamLimits

0xaf4e,	// (0x0006e5ef) wml_tabs_3_passive_pane

0xaf5f,	// (0x0006e600) wml_tabs_3_passive_pane_cp_ParamLimits

0xaf5f,	// (0x0006e600) wml_tabs_3_passive_pane_cp

0xaf70,	// (0x0006e611) tabs_4_active_pane

0xaf78,	// (0x0006e619) tabs_4_passive_pane

0xaf80,	// (0x0006e621) tabs_4_passive_pane_cp

0xaf88,	// (0x0006e629) tabs_4_passive_pane_cp2

0xa4f9,	// (0x0006db9a) aid_height_text

0x9d0f,	// (0x0006d3b0) mup_volume_cont_pane_ParamLimits

0x9d0f,	// (0x0006d3b0) mup_volume_cont_pane

0x7bc1,	// (0x0006b262) aid_size_cell_pinb

0x7bcb,	// (0x0006b26c) aid_size_list_pinb

0xae82,	// (0x0006e523) mup2_volume_cont_pane_ParamLimits

0xae82,	// (0x0006e523) mup2_volume_cont_pane

0xaf90,	// (0x0006e631) mup2_volume_cont_pane_g1_ParamLimits

0xaf90,	// (0x0006e631) mup2_volume_cont_pane_g1

0x781a,	// (0x0006aebb) aid_size_cell_touch_ParamLimits

0x781a,	// (0x0006aebb) aid_size_cell_touch

0x7aa7,	// (0x0006b148) touch_pane_ParamLimits

0x7aa7,	// (0x0006b148) touch_pane

0x77fc,	// (0x0006ae9d) main_rss2_pane

0x4722,	// (0x00067dc3) listscroll_rss2_pane

0x472b,	// (0x00067dcc) rss2_navigation_pane

0x4733,	// (0x00067dd4) list_rss2_pane

0x132b,	// (0x000649cc) scroll_pane_cp22

0x473b,	// (0x00067ddc) rss2_navigation_pane_g1

0x4744,	// (0x00067de5) rss2_navigation_pane_g2

0x474c,	// (0x00067ded) rss2_navigation_pane_g3

0x0002,

0xf6b0,	// (0x00072d51) rss2_navigation_pane_g

0x4754,	// (0x00067df5) rss2_navigation_pane_t1

0xafc9,	// (0x0006e66a) rss2_list_single_pane_ParamLimits

0xafc9,	// (0x0006e66a) rss2_list_single_pane

0x4762,	// (0x00067e03) rss2_list_single_pane_t2

0x4770,	// (0x00067e11) rss2_list_single_pane_t3_ParamLimits

0x4770,	// (0x00067e11) rss2_list_single_pane_t3

0x478d,	// (0x00067e2e) rss2_list_single_pane_t4

0x9586,	// (0x0006cc27) smil_status_pane_g1

0x00a1,	// (0x00063742) main_image2_pane_ParamLimits

0x00a1,	// (0x00063742) main_image2_pane

0xab95,	// (0x0006e236) main_camera2_pane_g9_ParamLimits

0xab95,	// (0x0006e236) main_camera2_pane_g9

0xabe9,	// (0x0006e28a) main_camera2_pane_t5_ParamLimits

0xabe9,	// (0x0006e28a) main_camera2_pane_t5

0xabfb,	// (0x0006e29c) main_camera2_pane_t6_ParamLimits

0xabfb,	// (0x0006e29c) main_camera2_pane_t6

0xaffa,	// (0x0006e69b) main_image2_pane_g1_ParamLimits

0xaffa,	// (0x0006e69b) main_image2_pane_g1

0xa299,	// (0x0006d93a) smil2_video_pane_ParamLimits

0xa299,	// (0x0006d93a) smil2_video_pane

0x784e,	// (0x0006aeef) aid_zoom_text_primary_cp

0x0097,	// (0x00063738) popup_preview_fixed_window

0x0b8a,	// (0x0006422b) im_reading_pane_g1

0xaadf,	// (0x0006e180) cams2_bc_adjust_pane_cp_ParamLimits

0xaadf,	// (0x0006e180) cams2_bc_adjust_pane_cp

0xac2b,	// (0x0006e2cc) cams2_bc_adjust_pane_ParamLimits

0xac2b,	// (0x0006e2cc) cams2_bc_adjust_pane

0xb006,	// (0x0006e6a7) cams2_bc_adjust_pane_g1

0xb00e,	// (0x0006e6af) cams2_slider_pane

0xb017,	// (0x0006e6b8) cams2_slider_pane_g1

0xb020,	// (0x0006e6c1) cams2_slider_pane_g2

0x0006,

0xf6b7,	// (0x00072d58) cams2_slider_pane_g

0x7cbc,	// (0x0006b35d) calc_display_pane_ParamLimits

0x7cda,	// (0x0006b37b) calc_paper_pane_ParamLimits

0x7cf6,	// (0x0006b397) grid_calc_pane_ParamLimits

0x9779,	// (0x0006ce1a) popup_clock_digital_window_t1_ParamLimits

0x174d,	// (0x00064dee) main_image_pane_t1

0x7ca2,	// (0x0006b343) aid_size_cell_calc_ParamLimits

0x7ca2,	// (0x0006b343) aid_size_cell_calc

0xa766,	// (0x0006de07) popup_blid_sat_info2_window_ParamLimits

0xa766,	// (0x0006de07) popup_blid_sat_info2_window

0x47ab,	// (0x00067e4c) aid_size_cell_blid

0x47b3,	// (0x00067e54) bg_popup_window_pane_cp07

0x47d6,	// (0x00067e77) grid_popup_blid_pane

0x47e9,	// (0x00067e8a) heading_pane_cp05_ParamLimits

0x47e9,	// (0x00067e8a) heading_pane_cp05

0x48b3,	// (0x00067f54) cell_popup_blid_pane_ParamLimits

0x48b3,	// (0x00067f54) cell_popup_blid_pane

0x48d7,	// (0x00067f78) cell_popup_blid_pane_g1

0x48df,	// (0x00067f80) cell_popup_blid_pane_t1

0xae48,	// (0x0006e4e9) mup2_indicator_pane_ParamLimits

0xae48,	// (0x0006e4e9) mup2_indicator_pane

0x1474,	// (0x00064b15) mup2_visualizer_osc_pane

0x4678,	// (0x00067d19) mup2_visualizer_spec_pane_ParamLimits

0x4678,	// (0x00067d19) mup2_visualizer_spec_pane

0xb03a,	// (0x0006e6db) mup2_spec_half_pane

0xb043,	// (0x0006e6e4) mup2_spec_half_pane_cp

0xb04d,	// (0x0006e6ee) mup2_spec_bar_pane_ParamLimits

0xb04d,	// (0x0006e6ee) mup2_spec_bar_pane

0x2950,	// (0x00065ff1) mup2_spec_bar_pane_g1

0x295a,	// (0x00065ffb) mup2_spec_bar_pane_g2

0x0001,

0xf62a,	// (0x00072ccb) mup2_spec_bar_pane_g

0xb06c,	// (0x0006e70d) mup2_osc_middle_pane

0x296c,	// (0x0006600d) mup2_visualizer_osc_pane_g1

0x00cf,	// (0x00063770) popup_number_entry_window_t1_ParamLimits

0x00e2,	// (0x00063783) popup_number_entry_window_t2_ParamLimits

0x00f4,	// (0x00063795) popup_number_entry_window_t3_ParamLimits

0x7afe,	// (0x0006b19f) popup_number_entry_window_t5_ParamLimits

0x7afe,	// (0x0006b19f) popup_number_entry_window_t5

0xf0ec,	// (0x0007278d) popup_number_entry_window_t_ParamLimits

0x0106,	// (0x000637a7) text_title_cp2_ParamLimits

0x9f8d,	// (0x0006d62e) aid_hotspot_pointer_text2_pane

0xa027,	// (0x0006d6c8) main_viewer_pane_g9_ParamLimits

0xa027,	// (0x0006d6c8) main_viewer_pane_g9

0x0db9,	// (0x0006445a) cale_month_pane_t1_ParamLimits

0x0e24,	// (0x000644c5) bg_cale_pane_ParamLimits

0x0e3c,	// (0x000644dd) list_cale_pane_ParamLimits

0x09ba,	// (0x0006405b) listscroll_cale_day_pane_t1

0x0e4d,	// (0x000644ee) scroll_pane_cp09_ParamLimits

0x9d4a,	// (0x0006d3eb) main_mup_eq_pane_t1_ParamLimits

0x9d4a,	// (0x0006d3eb) main_mup_eq_pane_t1

0x9d64,	// (0x0006d405) main_mup_eq_pane_t2_ParamLimits

0x9d64,	// (0x0006d405) main_mup_eq_pane_t2

0x9d7e,	// (0x0006d41f) main_mup_eq_pane_t3_ParamLimits

0x9d7e,	// (0x0006d41f) main_mup_eq_pane_t3

0x9d96,	// (0x0006d437) main_mup_eq_pane_t4_ParamLimits

0x9d96,	// (0x0006d437) main_mup_eq_pane_t4

0x9dae,	// (0x0006d44f) main_mup_eq_pane_t5_ParamLimits

0x9dae,	// (0x0006d44f) main_mup_eq_pane_t5

0x9dc6,	// (0x0006d467) main_mup_eq_pane_t6_ParamLimits

0x9dc6,	// (0x0006d467) main_mup_eq_pane_t6

0x9dda,	// (0x0006d47b) main_mup_eq_pane_t7_ParamLimits

0x9dda,	// (0x0006d47b) main_mup_eq_pane_t7

0x9dee,	// (0x0006d48f) main_mup_eq_pane_t8_ParamLimits

0x9dee,	// (0x0006d48f) main_mup_eq_pane_t8

0x9e04,	// (0x0006d4a5) main_mup_eq_pane_t9_ParamLimits

0x9e04,	// (0x0006d4a5) main_mup_eq_pane_t9

0x9e1c,	// (0x0006d4bd) main_mup_eq_pane_t10_ParamLimits

0x9e1c,	// (0x0006d4bd) main_mup_eq_pane_t10

0x0009,

0xf479,	// (0x00072b1a) main_mup_eq_pane_t_ParamLimits

0xf479,	// (0x00072b1a) main_mup_eq_pane_t

0x9ed9,	// (0x0006d57a) mup_equalizer_pane_cp5_ParamLimits

0x9eef,	// (0x0006d590) mup_equalizer_pane_cp6_ParamLimits

0x9f07,	// (0x0006d5a8) mup_equalizer_pane_cp7_ParamLimits

0x77fc,	// (0x0006ae9d) main_gallery_pane

0x2975,	// (0x00066016) smil2_volume_pane

0x2990,	// (0x00066031) smil_status_volume_pane_g1_ParamLimits

0x297d,	// (0x0006601e) smil_status_volume_pane_g2_ParamLimits

0xa952,	// (0x0006dff3) smil_status_volume_pane_g3_ParamLimits

0xf62f,	// (0x00072cd0) smil_status_volume_pane_g_ParamLimits

0x47b3,	// (0x00067e54) bg_popup_window_pane_cp07_ParamLimits

0x47c1,	// (0x00067e62) blid_firmament_pane

0xb075,	// (0x0006e716) aid_size_cell_gallery_ParamLimits

0xb075,	// (0x0006e716) aid_size_cell_gallery

0xb083,	// (0x0006e724) grid_gallery_pane_ParamLimits

0xb083,	// (0x0006e724) grid_gallery_pane

0xb093,	// (0x0006e734) cell_gallery_pane_ParamLimits

0xb093,	// (0x0006e734) cell_gallery_pane

0x48ed,	// (0x00067f8e) bg_cell_gallery_focus_pane_ParamLimits

0x48ed,	// (0x00067f8e) bg_cell_gallery_focus_pane

0x48ff,	// (0x00067fa0) cell_gallery_pane_g1_ParamLimits

0x48ff,	// (0x00067fa0) cell_gallery_pane_g1

0xb0e1,	// (0x0006e782) cell_gallery_pane_g2_ParamLimits

0xb0e1,	// (0x0006e782) cell_gallery_pane_g2

0xb0ee,	// (0x0006e78f) cell_gallery_pane_g3_ParamLimits

0xb0ee,	// (0x0006e78f) cell_gallery_pane_g3

0x490b,	// (0x00067fac) cell_gallery_pane_g4_ParamLimits

0x490b,	// (0x00067fac) cell_gallery_pane_g4

0x0003,

0xf6dd,	// (0x00072d7e) cell_gallery_pane_g_ParamLimits

0xf6dd,	// (0x00072d7e) cell_gallery_pane_g

0x4917,	// (0x00067fb8) bg_cell_gallery_focus_pane_g1

0x491f,	// (0x00067fc0) bg_cell_gallery_focus_pane_g2

0x4927,	// (0x00067fc8) bg_cell_gallery_focus_pane_g3

0x492f,	// (0x00067fd0) bg_cell_gallery_focus_pane_g4

0x4937,	// (0x00067fd8) bg_cell_gallery_focus_pane_g5

0x493f,	// (0x00067fe0) bg_cell_gallery_focus_pane_g6

0x4947,	// (0x00067fe8) bg_cell_gallery_focus_pane_g7

0x494f,	// (0x00067ff0) bg_cell_gallery_focus_pane_g8

0x0007,

0xf6e6,	// (0x00072d87) bg_cell_gallery_focus_pane_g

0x4957,	// (0x00067ff8) aid_firma_cardinal

0x496b,	// (0x0006800c) blid_firmament_pane_t1

0x4982,	// (0x00068023) blid_firmament_pane_t2

0x4999,	// (0x0006803a) blid_firmament_pane_t3

0x49b0,	// (0x00068051) blid_firmament_pane_t4

0x0003,

0xf6f7,	// (0x00072d98) blid_firmament_pane_t

0x49c7,	// (0x00068068) blid_sat_info_pane

0x49d7,	// (0x00068078) blid_sat_info_pane_g1

0x49d7,	// (0x00068078) blid_sat_info_pane_g2

0x0001,

0xf700,	// (0x00072da1) blid_sat_info_pane_g

0x49e1,	// (0x00068082) blid_sat_info_pane_t1

0x49ef,	// (0x00068090) smil2_volume_content_pane

0x49f8,	// (0x00068099) smil2_volume_pane_g1

0x47e0,	// (0x00067e81) smil2_volume_content_pane_g1

0x4a00,	// (0x000680a1) smil2_volume_content_pane_g2

0x4a09,	// (0x000680aa) smil2_volume_content_pane_g3

0x4a12,	// (0x000680b3) smil2_volume_content_pane_g4

0x4a1b,	// (0x000680bc) smil2_volume_content_pane_g5

0x4a24,	// (0x000680c5) smil2_volume_content_pane_g6

0x4a2d,	// (0x000680ce) smil2_volume_content_pane_g7

0x4a36,	// (0x000680d7) smil2_volume_content_pane_g8

0x4a3f,	// (0x000680e0) smil2_volume_content_pane_g9

0x4a48,	// (0x000680e9) smil2_volume_content_pane_g10

0x0009,

0xf705,	// (0x00072da6) smil2_volume_content_pane_g

0x8279,	// (0x0006b91a) cale_week_day_heading_pane_t1_ParamLimits

0x8292,	// (0x0006b933) cale_week_day_heading_pane_t2_ParamLimits

0x82ab,	// (0x0006b94c) cale_week_day_heading_pane_t3_ParamLimits

0x82c4,	// (0x0006b965) cale_week_day_heading_pane_t4_ParamLimits

0x82dd,	// (0x0006b97e) cale_week_day_heading_pane_t5_ParamLimits

0x82f6,	// (0x0006b997) cale_week_day_heading_pane_t6_ParamLimits

0x830f,	// (0x0006b9b0) cale_week_day_heading_pane_t7_ParamLimits

0xf1f1,	// (0x00072892) cale_week_day_heading_pane_t_ParamLimits

0x09cc,	// (0x0006406d) bg_cale_side_pane_ParamLimits

0x8328,	// (0x0006b9c9) cale_week_time_pane_t1_ParamLimits

0x8340,	// (0x0006b9e1) cale_week_time_pane_t2_ParamLimits

0x8358,	// (0x0006b9f9) cale_week_time_pane_t3_ParamLimits

0x8370,	// (0x0006ba11) cale_week_time_pane_t4_ParamLimits

0x8388,	// (0x0006ba29) cale_week_time_pane_t5_ParamLimits

0x83a0,	// (0x0006ba41) cale_week_time_pane_t6_ParamLimits

0x83b8,	// (0x0006ba59) cale_week_time_pane_t7_ParamLimits

0x83d8,	// (0x0006ba79) cale_week_time_pane_t8_ParamLimits

0xf200,	// (0x000728a1) cale_week_time_pane_t_ParamLimits

0x83f8,	// (0x0006ba99) cell_cale_week_pane_g2_ParamLimits

0x09cc,	// (0x0006406d) bg_cale_side_pane_cp01_ParamLimits

0x93f7,	// (0x0006ca98) cale_month_week_pane_t1_ParamLimits

0x940e,	// (0x0006caaf) cale_month_week_pane_t2_ParamLimits

0x9425,	// (0x0006cac6) cale_month_week_pane_t3_ParamLimits

0x943c,	// (0x0006cadd) cale_month_week_pane_t4_ParamLimits

0x9453,	// (0x0006caf4) cale_month_week_pane_t5_ParamLimits

0x946e,	// (0x0006cb0f) cale_month_week_pane_t6_ParamLimits

0xf2d9,	// (0x0007297a) cale_month_week_pane_t_ParamLimits

0x9553,	// (0x0006cbf4) cell_cale_month_pane_g1_ParamLimits

0x77fc,	// (0x0006ae9d) main_cale_event_viewer_pane

0x77fc,	// (0x0006ae9d) listscroll_cale_event_viewer_pane

0x4a51,	// (0x000680f2) list_cale_ev_pane

0x4a59,	// (0x000680fa) scroll_pane_cp023

0x4a65,	// (0x00068106) field_cale_ev_pane_ParamLimits

0x4a65,	// (0x00068106) field_cale_ev_pane

0x4a83,	// (0x00068124) field_cale_ev_content_pane_ParamLimits

0x4a83,	// (0x00068124) field_cale_ev_content_pane

0x4a8f,	// (0x00068130) field_cale_ev_pane_g1_ParamLimits

0x4a8f,	// (0x00068130) field_cale_ev_pane_g1

0x4a9b,	// (0x0006813c) field_cale_ev_pane_g2_ParamLimits

0x4a9b,	// (0x0006813c) field_cale_ev_pane_g2

0x4ab3,	// (0x00068154) field_cale_ev_pane_g3_ParamLimits

0x4ab3,	// (0x00068154) field_cale_ev_pane_g3

0x0002,

0xf71a,	// (0x00072dbb) field_cale_ev_pane_g_ParamLimits

0xf71a,	// (0x00072dbb) field_cale_ev_pane_g

0x4acb,	// (0x0006816c) field_cale_ev_pane_t1_ParamLimits

0x4acb,	// (0x0006816c) field_cale_ev_pane_t1

0x4ae2,	// (0x00068183) field_cale_ev_content_pane_t1_ParamLimits

0x4ae2,	// (0x00068183) field_cale_ev_content_pane_t1

0x15fd,	// (0x00064c9e) bg_button_pane_cp01

0x0820,	// (0x00063ec1) listscroll_cale_week_pane_ParamLimits

0x8055,	// (0x0006b6f6) popup_toolbar_window_cp01

0x09ba,	// (0x0006405b) listscroll_cale_week_pane_t1_ParamLimits

0x0820,	// (0x00063ec1) listscroll_cale_day_pane_ParamLimits

0x8055,	// (0x0006b6f6) popup_toolbar_window_cp02

0x09ba,	// (0x0006405b) listscroll_cale_day_pane_t1_ParamLimits

0x0820,	// (0x00063ec1) main_cale_month_pane_ParamLimits

0xa836,	// (0x0006ded7) popup_toolbar_window_cp03_ParamLimits

0xa836,	// (0x0006ded7) popup_toolbar_window_cp03

0xa1af,	// (0x0006d850) main_image_pane_g2_ParamLimits

0xa1af,	// (0x0006d850) main_image_pane_g2

0xa1bb,	// (0x0006d85c) main_image_pane_g3_ParamLimits

0xa1bb,	// (0x0006d85c) main_image_pane_g3

0x0002,

0xf50b,	// (0x00072bac) main_image_pane_g_ParamLimits

0xf50b,	// (0x00072bac) main_image_pane_g

0x174d,	// (0x00064dee) main_image_pane_t1_ParamLimits

0xa1c7,	// (0x0006d868) main_image_pane_t2_ParamLimits

0xa1c7,	// (0x0006d868) main_image_pane_t2

0xa1d9,	// (0x0006d87a) main_image_pane_t3_ParamLimits

0xa1d9,	// (0x0006d87a) main_image_pane_t3

0xa1eb,	// (0x0006d88c) main_image_pane_t4_ParamLimits

0xa1eb,	// (0x0006d88c) main_image_pane_t4

0x0003,

0xf512,	// (0x00072bb3) main_image_pane_t_ParamLimits

0xf512,	// (0x00072bb3) main_image_pane_t

0xa1fd,	// (0x0006d89e) popup_image_details_window_cp01

0xa207,	// (0x0006d8a8) popup_toobar_trans_pane_cp01_ParamLimits

0xa207,	// (0x0006d8a8) popup_toobar_trans_pane_cp01

0xa7b3,	// (0x0006de54) popup_image_details_window_ParamLimits

0xa7b3,	// (0x0006de54) popup_image_details_window

0x28d6,	// (0x00065f77) popup_image_focus_window

0xaad1,	// (0x0006e172) camera2_autofocus_pane_ParamLimits

0xaad1,	// (0x0006e172) camera2_autofocus_pane

0x77fc,	// (0x0006ae9d) bg_popup_sub_pane_cp06

0x4b00,	// (0x000681a1) popup_image_focus_window_g1

0x4b08,	// (0x000681a9) popup_image_focus_window_g2

0x4b10,	// (0x000681b1) popup_image_focus_window_g3

0x4b18,	// (0x000681b9) popup_image_focus_window_g4

0x0003,

0xf721,	// (0x00072dc2) popup_image_focus_window_g

0x4b20,	// (0x000681c1) popup_image_focus_window_t1

0x4b2e,	// (0x000681cf) popup_image_focus_window_t2

0x4b3e,	// (0x000681df) popup_image_focus_window_t3

0x0002,

0xf72a,	// (0x00072dcb) popup_image_focus_window_t

0x4b4c,	// (0x000681ed) camera2_autofocus_pane_g1

0x00a1,	// (0x00063742) bg_tb_trans_pane_cp01

0x4b5a,	// (0x000681fb) popup_image_details_window_g1

0x4b6d,	// (0x0006820e) popup_image_details_window_g2

0x0002,

0xf73c,	// (0x00072ddd) popup_image_details_window_g

0x4b96,	// (0x00068237) popup_image_details_window_t1

0x4ba8,	// (0x00068249) popup_image_details_window_t2

0x4bc1,	// (0x00068262) popup_image_details_window_t3

0x4bd5,	// (0x00068276) popup_image_details_window_t4

0x4bf0,	// (0x00068291) popup_image_details_window_t5

0x0004,

0xf743,	// (0x00072de4) popup_image_details_window_t

0x07e8,	// (0x00063e89) bg_calc_paper_pane_ParamLimits

0x77fc,	// (0x0006ae9d) grid_highlight_pane_cp013

0x7ded,	// (0x0006b48e) list_calc_pane_ParamLimits

0x7dff,	// (0x0006b4a0) scroll_pane_cp024

0x0820,	// (0x00063ec1) bg_calc_display_pane_ParamLimits

0x7e07,	// (0x0006b4a8) calc_display_pane_t1_ParamLimits

0x7e1c,	// (0x0006b4bd) calc_display_pane_t2_ParamLimits

0x7e31,	// (0x0006b4d2) calc_display_pane_t3_ParamLimits

0xf173,	// (0x00072814) calc_display_pane_t_ParamLimits

0x7f0d,	// (0x0006b5ae) cell_calc_pane_g2

0x0001,

0xf190,	// (0x00072831) cell_calc_pane_g

0x7f16,	// (0x0006b5b7) cell_calc_pane_t1

0x08a3,	// (0x00063f44) grid_highlight_pane_cp02_ParamLimits

0x08b9,	// (0x00063f5a) toolbar_button_pane_cp01_ParamLimits

0x08b9,	// (0x00063f5a) toolbar_button_pane_cp01

0x1792,	// (0x00064e33) temp_image_control_pane_ParamLimits

0x1792,	// (0x00064e33) temp_image_control_pane

0x00a1,	// (0x00063742) main_mp3_pane

0x4c0a,	// (0x000682ab) temp_image_control_pane_g1_ParamLimits

0x4c0a,	// (0x000682ab) temp_image_control_pane_g1

0x4c18,	// (0x000682b9) temp_image_control_pane_g2_ParamLimits

0x4c18,	// (0x000682b9) temp_image_control_pane_g2

0x4c2a,	// (0x000682cb) temp_image_control_pane_g3_ParamLimits

0x4c2a,	// (0x000682cb) temp_image_control_pane_g3

0xb12b,	// (0x0006e7cc) temp_image_control_pane_g4_ParamLimits

0xb12b,	// (0x0006e7cc) temp_image_control_pane_g4

0x0003,

0xf74e,	// (0x00072def) temp_image_control_pane_g_ParamLimits

0xf74e,	// (0x00072def) temp_image_control_pane_g

0x4c0a,	// (0x000682ab) main_mp3_pane_g1

0xb13c,	// (0x0006e7dd) main_mp3_pane_g2

0x0007,

0xf757,	// (0x00072df8) main_mp3_pane_g

0x4c6d,	// (0x0006830e) main_mp3_pane_t1

0x0a9b,	// (0x0006413c) main_camera_pane_g8_ParamLimits

0x0a9b,	// (0x0006413c) main_camera_pane_g8

0x868e,	// (0x0006bd2f) main_video_pane_g7_ParamLimits

0x868e,	// (0x0006bd2f) main_video_pane_g7

0xac19,	// (0x0006e2ba) main_camera2_pane_t7_ParamLimits

0xac19,	// (0x0006e2ba) main_camera2_pane_t7

0x0be1,	// (0x00064282) scroll_pane_cp025_ParamLimits

0x0be1,	// (0x00064282) scroll_pane_cp025

0x0bf5,	// (0x00064296) scroll_pane_cp026_ParamLimits

0x0bf5,	// (0x00064296) scroll_pane_cp026

0x0c04,	// (0x000642a5) wml_content_pane_ParamLimits

0x77fc,	// (0x0006ae9d) main_touch_calib_pane

0xb1e0,	// (0x0006e881) main_touch_calib_pane_g1

0xb1ec,	// (0x0006e88d) main_touch_calib_pane_g2

0xb1f8,	// (0x0006e899) main_touch_calib_pane_g3

0xb204,	// (0x0006e8a5) main_touch_calib_pane_g4

0x0003,

0xf775,	// (0x00072e16) main_touch_calib_pane_g

0xb210,	// (0x0006e8b1) main_touch_calib_pane_t1

0xb227,	// (0x0006e8c8) main_touch_calib_pane_t2

0x0004,

0xf77e,	// (0x00072e1f) main_touch_calib_pane_t

0x13b5,	// (0x00064a56) mup_progress_pane_cp02

0x13d4,	// (0x00064a75) navi_pane_g1

0x1436,	// (0x00064ad7) navi_pane_mp_t3

0x00a1,	// (0x00063742) main_mp3_pane_ParamLimits

0xa874,	// (0x0006df15) navi_pane_ParamLimits

0x4c0a,	// (0x000682ab) main_mp3_pane_g1_ParamLimits

0xb13c,	// (0x0006e7dd) main_mp3_pane_g2_ParamLimits

0xb148,	// (0x0006e7e9) main_mp3_pane_g3_ParamLimits

0xb148,	// (0x0006e7e9) main_mp3_pane_g3

0xb154,	// (0x0006e7f5) main_mp3_pane_g4_ParamLimits

0xb154,	// (0x0006e7f5) main_mp3_pane_g4

0x4c3a,	// (0x000682db) main_mp3_pane_g5_ParamLimits

0x4c3a,	// (0x000682db) main_mp3_pane_g5

0x4c48,	// (0x000682e9) main_mp3_pane_g6_ParamLimits

0x4c48,	// (0x000682e9) main_mp3_pane_g6

0x4c55,	// (0x000682f6) main_mp3_pane_g7_ParamLimits

0x4c55,	// (0x000682f6) main_mp3_pane_g7

0x4c61,	// (0x00068302) main_mp3_pane_g8_ParamLimits

0x4c61,	// (0x00068302) main_mp3_pane_g8

0xf757,	// (0x00072df8) main_mp3_pane_g_ParamLimits

0xb160,	// (0x0006e801) main_mp3_pane_t2

0xb170,	// (0x0006e811) main_mp3_pane_t3

0x4c7b,	// (0x0006831c) main_mp3_pane_t4

0x4c89,	// (0x0006832a) main_mp3_pane_t5

0x0005,

0xf768,	// (0x00072e09) main_mp3_pane_t

0x4c97,	// (0x00068338) mup_progress_pane_cp01

0x784e,	// (0x0006aeef) aid_zoom_text_secondary2

0x4a51,	// (0x000680f2) list_cale_ev2_pane

0x4a59,	// (0x000680fa) scroll_pane_cp023_ParamLimits

0xb27c,	// (0x0006e91d) field_cale_ev2_pane_ParamLimits

0xb27c,	// (0x0006e91d) field_cale_ev2_pane

0xb2a5,	// (0x0006e946) field_cale_ev2_pane_g1_ParamLimits

0xb2a5,	// (0x0006e946) field_cale_ev2_pane_g1

0xb2b1,	// (0x0006e952) field_cale_ev2_pane_g2_ParamLimits

0xb2b1,	// (0x0006e952) field_cale_ev2_pane_g2

0xb2c9,	// (0x0006e96a) field_cale_ev2_pane_g3_ParamLimits

0xb2c9,	// (0x0006e96a) field_cale_ev2_pane_g3

0x0003,

0xf789,	// (0x00072e2a) field_cale_ev2_pane_g_ParamLimits

0xf789,	// (0x00072e2a) field_cale_ev2_pane_g

0x699f,	// (0x0006a040) field_cale_ev2_pane_t1_ParamLimits

0x699f,	// (0x0006a040) field_cale_ev2_pane_t1

0x69b6,	// (0x0006a057) field_cale_ev2_pane_t2_ParamLimits

0x69b6,	// (0x0006a057) field_cale_ev2_pane_t2

0x0001,

0xf792,	// (0x00072e33) field_cale_ev2_pane_t_ParamLimits

0xf792,	// (0x00072e33) field_cale_ev2_pane_t

0xa08f,	// (0x0006d730) main_postcard_pane_g5_ParamLimits

0xa08f,	// (0x0006d730) main_postcard_pane_g5

0xa09d,	// (0x0006d73e) main_postcard_pane_g6_ParamLimits

0xa09d,	// (0x0006d73e) main_postcard_pane_g6

0x84d6,	// (0x0006bb77) camera2_autofocus_pane_cp_ParamLimits

0x84d6,	// (0x0006bb77) camera2_autofocus_pane_cp

0x00a1,	// (0x00063742) main_mup3_pane

0xb30d,	// (0x0006e9ae) main_mup3_pane_g1_ParamLimits

0xb30d,	// (0x0006e9ae) main_mup3_pane_g1

0xb32e,	// (0x0006e9cf) main_mup3_pane_g2_ParamLimits

0xb32e,	// (0x0006e9cf) main_mup3_pane_g2

0xb3a6,	// (0x0006ea47) main_mup3_pane_g3_ParamLimits

0xb3a6,	// (0x0006ea47) main_mup3_pane_g3

0xb3e5,	// (0x0006ea86) main_mup3_pane_g4_ParamLimits

0xb3e5,	// (0x0006ea86) main_mup3_pane_g4

0xb424,	// (0x0006eac5) main_mup3_pane_g5_ParamLimits

0xb424,	// (0x0006eac5) main_mup3_pane_g5

0xb463,	// (0x0006eb04) main_mup3_pane_g6_ParamLimits

0xb463,	// (0x0006eb04) main_mup3_pane_g6

0x4c9f,	// (0x00068340) main_mup3_pane_g7_ParamLimits

0x4c9f,	// (0x00068340) main_mup3_pane_g7

0x0007,

0xf7a2,	// (0x00072e43) main_mup3_pane_g_ParamLimits

0xf7a2,	// (0x00072e43) main_mup3_pane_g

0xb4d5,	// (0x0006eb76) main_mup3_pane_t1_ParamLimits

0xb4d5,	// (0x0006eb76) main_mup3_pane_t1

0xb540,	// (0x0006ebe1) main_mup3_pane_t2_ParamLimits

0xb540,	// (0x0006ebe1) main_mup3_pane_t2

0xb605,	// (0x0006eca6) main_mup3_pane_t4_ParamLimits

0xb605,	// (0x0006eca6) main_mup3_pane_t4

0xb653,	// (0x0006ecf4) main_mup3_pane_t5_ParamLimits

0xb653,	// (0x0006ecf4) main_mup3_pane_t5

0xb6fb,	// (0x0006ed9c) main_mup3_pane_t6_ParamLimits

0xb6fb,	// (0x0006ed9c) main_mup3_pane_t6

0x0005,

0xf7b3,	// (0x00072e54) main_mup3_pane_t_ParamLimits

0xf7b3,	// (0x00072e54) main_mup3_pane_t

0xb7a3,	// (0x0006ee44) mup3_progress_pane_ParamLimits

0xb7a3,	// (0x0006ee44) mup3_progress_pane

0xb80e,	// (0x0006eeaf) popup_mup3_control_window_ParamLimits

0xb80e,	// (0x0006eeaf) popup_mup3_control_window

0x4cad,	// (0x0006834e) popup_mup3_text_window

0xb827,	// (0x0006eec8) mup3_progress_pane_t1

0xb83e,	// (0x0006eedf) mup3_progress_pane_t2

0x4cb5,	// (0x00068356) mup3_progress_pane_t3

0x0002,

0xf7c0,	// (0x00072e61) mup3_progress_pane_t

0x4ccc,	// (0x0006836d) mup_progress_pane_cp03

0x77fc,	// (0x0006ae9d) bg_tb_trans_pane_cp04

0xb855,	// (0x0006eef6) mup3_volume_pane

0xb85d,	// (0x0006eefe) popup_mup3_control_window_g1

0xb866,	// (0x0006ef07) mup3_volume_pane_g1

0xb86f,	// (0x0006ef10) mup3_volume_pane_g2

0xb878,	// (0x0006ef19) mup3_volume_pane_g3

0x0002,

0xf7c7,	// (0x00072e68) mup3_volume_pane_g

0x77fc,	// (0x0006ae9d) bg_tb_trans_pane_cp03

0x4cdc,	// (0x0006837d) popup_mup3_text_window_g1

0x4ce4,	// (0x00068385) popup_mup3_text_window_t1

0x087a,	// (0x00063f1b) list_calc_item_pane_g1_ParamLimits

0x4719,	// (0x00067dba) mup_volume_pane_cp_g1

0xb23e,	// (0x0006e8df) main_touch_calib_pane_t3

0xb252,	// (0x0006e8f3) main_touch_calib_pane_t4

0xb266,	// (0x0006e907) main_touch_calib_pane_t5

0x7806,	// (0x0006aea7) aid_cell_size_toolbar2

0x780e,	// (0x0006aeaf) aid_popup3_width_pane

0x6692,	// (0x00069d33) aid_zoom_text_msg_primary

0x84ad,	// (0x0006bb4e) vorec_t7

0x083e,	// (0x00063edf) bg_calc_paper_pane_g1_ParamLimits

0x0856,	// (0x00063ef7) bg_calc_paper_pane_g2_ParamLimits

0x084a,	// (0x00063eeb) bg_calc_paper_pane_g3_ParamLimits

0x086e,	// (0x00063f0f) bg_calc_paper_pane_g4_ParamLimits

0x0862,	// (0x00063f03) bg_calc_paper_pane_g5_ParamLimits

0x7e70,	// (0x0006b511) bg_calc_paper_pane_g6_ParamLimits

0x7e81,	// (0x0006b522) bg_calc_paper_pane_g7_ParamLimits

0x7e92,	// (0x0006b533) bg_calc_paper_pane_g8_ParamLimits

0xf17a,	// (0x0007281b) bg_calc_paper_pane_g_ParamLimits

0x7ea3,	// (0x0006b544) calc_bg_paper_pane_g9_ParamLimits

0x85bd,	// (0x0006bc5e) image_qvga_pane_ParamLimits

0x85bd,	// (0x0006bc5e) image_qvga_pane

0x071d,	// (0x00063dbe) bg_popup_sub_pane_cp04_ParamLimits

0x16c9,	// (0x00064d6a) popup_mup_playback_window_g1_ParamLimits

0x16d5,	// (0x00064d76) popup_mup_playback_window_t1_ParamLimits

0x16ea,	// (0x00064d8b) popup_mup_playback_window_t2_ParamLimits

0xf506,	// (0x00072ba7) popup_mup_playback_window_t_ParamLimits

0xad48,	// (0x0006e3e9) main_mup2_pane_g3_ParamLimits

0xad48,	// (0x0006e3e9) main_mup2_pane_g3

0x8875,	// (0x0006bf16) popup_toolbar_window_cp04

0x1acc,	// (0x0006516d) popup_call2_audio_second_window_g3_ParamLimits

0x1acc,	// (0x0006516d) popup_call2_audio_second_window_g3

0x1ed6,	// (0x00065577) popup_call2_audio_first_window_g4_ParamLimits

0x1ed6,	// (0x00065577) popup_call2_audio_first_window_g4

0x2555,	// (0x00065bf6) popup_call2_audio_in_window_g4_ParamLimits

0x2555,	// (0x00065bf6) popup_call2_audio_in_window_g4

0xa1a2,	// (0x0006d843) aid_area_sk_bg_cut_ParamLimits

0xa1a2,	// (0x0006d843) aid_area_sk_bg_cut

0x16ff,	// (0x00064da0) aid_area_sk_bg_cut_2_ParamLimits

0x16ff,	// (0x00064da0) aid_area_sk_bg_cut_2

0xb0d1,	// (0x0006e772) aid_placing_details_win

0xb0d9,	// (0x0006e77a) aid_placing_details_win_2

0x4b4c,	// (0x000681ed) camera2_autofocus_pane_g1_ParamLimits

0x7a47,	// (0x0006b0e8) popup_fixed_preview_cale_window_ParamLimits

0x7a47,	// (0x0006b0e8) popup_fixed_preview_cale_window

0x14a0,	// (0x00064b41) navi_slider_pane_g3

0x1497,	// (0x00064b38) navi_slider_pane_g4

0x148e,	// (0x00064b2f) navi_slider_pane_g5

0x14a0,	// (0x00064b41) navi_slider_pane_g6

0x9ade,	// (0x0006d17f) navi_slider_pane_g7

0x15ca,	// (0x00064c6b) mup_scale_pane_g3

0x15d3,	// (0x00064c74) mup_scale_pane_g4

0x15dc,	// (0x00064c7d) mup_scale_pane_g5

0x9f1f,	// (0x0006d5c0) mup_scale_pane_g6

0x9f28,	// (0x0006d5c9) mup_scale_pane_g7

0x14a0,	// (0x00064b41) cams2_slider_pane_g3

0x47a3,	// (0x00067e44) cams2_slider_pane_g4

0xb029,	// (0x0006e6ca) cams2_slider_pane_g5

0x14a0,	// (0x00064b41) cams2_slider_pane_g6

0xb031,	// (0x0006e6d2) cams2_slider_pane_g7

0x49d7,	// (0x00068078) camera2_autofocus_pane_cp_g1

0x4cf2,	// (0x00068393) bg_popup_preview_window_pane_cp02_ParamLimits

0x4cf2,	// (0x00068393) bg_popup_preview_window_pane_cp02

0x4cfe,	// (0x0006839f) list_fp_cale_pane_ParamLimits

0x4cfe,	// (0x0006839f) list_fp_cale_pane

0x4d0a,	// (0x000683ab) popup_fixed_preview_cale_window_t1_ParamLimits

0x4d0a,	// (0x000683ab) popup_fixed_preview_cale_window_t1

0xb881,	// (0x0006ef22) popup_fixed_preview_cale_window_t2_ParamLimits

0xb881,	// (0x0006ef22) popup_fixed_preview_cale_window_t2

0xb896,	// (0x0006ef37) popup_fixed_preview_cale_window_t3_ParamLimits

0xb896,	// (0x0006ef37) popup_fixed_preview_cale_window_t3

0x0002,

0xf7ce,	// (0x00072e6f) popup_fixed_preview_cale_window_t_ParamLimits

0xf7ce,	// (0x00072e6f) popup_fixed_preview_cale_window_t

0xb8ab,	// (0x0006ef4c) list_single_fp_cale_pane_ParamLimits

0xb8ab,	// (0x0006ef4c) list_single_fp_cale_pane

0x4d28,	// (0x000683c9) list_single_fp_cale_pane_g1_ParamLimits

0x4d28,	// (0x000683c9) list_single_fp_cale_pane_g1

0x4d34,	// (0x000683d5) list_single_fp_cale_pane_g2_ParamLimits

0x4d34,	// (0x000683d5) list_single_fp_cale_pane_g2

0x0002,

0xf7d5,	// (0x00072e76) list_single_fp_cale_pane_g_ParamLimits

0xf7d5,	// (0x00072e76) list_single_fp_cale_pane_g

0x4d4d,	// (0x000683ee) list_single_fp_cale_pane_t1_ParamLimits

0x4d4d,	// (0x000683ee) list_single_fp_cale_pane_t1

0x4d5f,	// (0x00068400) list_single_fp_cale_pane_t2_ParamLimits

0x4d5f,	// (0x00068400) list_single_fp_cale_pane_t2

0x0001,

0xf7dc,	// (0x00072e7d) list_single_fp_cale_pane_t_ParamLimits

0xf7dc,	// (0x00072e7d) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x77fc,	// (0x0006ae9d) main_dialer_pane

0xb8bd,	// (0x0006ef5e) aid_cell_size_keypad

0xb8c7,	// (0x0006ef68) dialer_ne_pane

0xb8d1,	// (0x0006ef72) grid_dialer_command_1_pane

0xb8d9,	// (0x0006ef7a) grid_dialer_command_2_pane

0xb8e1,	// (0x0006ef82) grid_dialer_keypad_pane

0xb8f3,	// (0x0006ef94) bg_popup_call_pane_cp06_ParamLimits

0xb8f3,	// (0x0006ef94) bg_popup_call_pane_cp06

0xb8ff,	// (0x0006efa0) dialer_ne_clear_pane_ParamLimits

0xb8ff,	// (0x0006efa0) dialer_ne_clear_pane

0x4d92,	// (0x00068433) dialer_ne_pane_g1

0x4d9a,	// (0x0006843b) dialer_ne_pane_t1_ParamLimits

0x4d9a,	// (0x0006843b) dialer_ne_pane_t1

0xb90b,	// (0x0006efac) dialer_ne_pane_t2_ParamLimits

0xb90b,	// (0x0006efac) dialer_ne_pane_t2

0xb928,	// (0x0006efc9) dialer_ne_pane_t3_ParamLimits

0xb928,	// (0x0006efc9) dialer_ne_pane_t3

0x0002,

0xf7e1,	// (0x00072e82) dialer_ne_pane_t_ParamLimits

0xf7e1,	// (0x00072e82) dialer_ne_pane_t

0xb94c,	// (0x0006efed) dialer_ne_pane_t3_copy1_ParamLimits

0xb94c,	// (0x0006efed) dialer_ne_pane_t3_copy1

0xb970,	// (0x0006f011) cell_dialer_keypad_pane_ParamLimits

0xb970,	// (0x0006f011) cell_dialer_keypad_pane

0xb987,	// (0x0006f028) cell_dialer_command_1_pane_ParamLimits

0xb987,	// (0x0006f028) cell_dialer_command_1_pane

0xb99d,	// (0x0006f03e) cell_dialer_command_2_pane_ParamLimits

0xb99d,	// (0x0006f03e) cell_dialer_command_2_pane

0x4dac,	// (0x0006844d) bg_button_pane_cp02_ParamLimits

0x4dac,	// (0x0006844d) bg_button_pane_cp02

0xb9ac,	// (0x0006f04d) cell_dialer_keypad_pane_g1_ParamLimits

0xb9ac,	// (0x0006f04d) cell_dialer_keypad_pane_g1

0x4dac,	// (0x0006844d) bg_button_pane_cp03_ParamLimits

0x4dac,	// (0x0006844d) bg_button_pane_cp03

0xb9c1,	// (0x0006f062) cell_dialer_command_1_pane_g1_ParamLimits

0xb9c1,	// (0x0006f062) cell_dialer_command_1_pane_g1

0x4db8,	// (0x00068459) bg_button_pane_cp04

0xb9d5,	// (0x0006f076) cell_dialer_command_2_pane_g1

0x1474,	// (0x00064b15) bg_button_pane_cp06

0x4dc0,	// (0x00068461) dialer_ne_clear_pane_g1

0x9a21,	// (0x0006d0c2) navi_pane_g2

0x9a4f,	// (0x0006d0f0) navi_pane_g3

0x0002,

0xf409,	// (0x00072aaa) navi_pane_g

0x9a7a,	// (0x0006d11b) navi_pane_mv_g2

0x9aa1,	// (0x0006d142) navi_pane_mv_g5

0x9aa9,	// (0x0006d14a) navi_pane_mv_t1

0x0820,	// (0x00063ec1) main_clock2_pane

0xba04,	// (0x0006f0a5) main_clock2_list_pane_ParamLimits

0xba04,	// (0x0006f0a5) main_clock2_list_pane

0xba2c,	// (0x0006f0cd) main_clock2_pane_t1_ParamLimits

0xba2c,	// (0x0006f0cd) main_clock2_pane_t1

0xba5a,	// (0x0006f0fb) main_clock2_pane_t2_ParamLimits

0xba5a,	// (0x0006f0fb) main_clock2_pane_t2

0x0004,

0xf7e8,	// (0x00072e89) main_clock2_pane_t_ParamLimits

0xf7e8,	// (0x00072e89) main_clock2_pane_t

0xbac1,	// (0x0006f162) popup_clock_analogue_window_cp03_ParamLimits

0xbac1,	// (0x0006f162) popup_clock_analogue_window_cp03

0xbadf,	// (0x0006f180) popup_clock_digital_window_cp02_ParamLimits

0xbadf,	// (0x0006f180) popup_clock_digital_window_cp02

0xbb4c,	// (0x0006f1ed) main_clock2_list_single_pane_ParamLimits

0xbb4c,	// (0x0006f1ed) main_clock2_list_single_pane

0x1474,	// (0x00064b15) list_highlight_pane_cp05

0x4dc8,	// (0x00068469) main_clock2_list_single_pane_t1

0x8875,	// (0x0006bf16) popup_toolbar_window_cp04_ParamLimits

0xb0fb,	// (0x0006e79c) camera2_autofocus_pane_g2_ParamLimits

0xb0fb,	// (0x0006e79c) camera2_autofocus_pane_g2

0xb107,	// (0x0006e7a8) camera2_autofocus_pane_g3_ParamLimits

0xb107,	// (0x0006e7a8) camera2_autofocus_pane_g3

0xb113,	// (0x0006e7b4) camera2_autofocus_pane_g4_ParamLimits

0xb113,	// (0x0006e7b4) camera2_autofocus_pane_g4

0xb11f,	// (0x0006e7c0) camera2_autofocus_pane_g5_ParamLimits

0xb11f,	// (0x0006e7c0) camera2_autofocus_pane_g5

0x0004,

0xf731,	// (0x00072dd2) camera2_autofocus_pane_g_ParamLimits

0xf731,	// (0x00072dd2) camera2_autofocus_pane_g

0xb2ed,	// (0x0006e98e) camera2_autofocus_pane_cp_g2

0xb2f5,	// (0x0006e996) camera2_autofocus_pane_cp_g3

0xb2fd,	// (0x0006e99e) camera2_autofocus_pane_cp_g4

0xb305,	// (0x0006e9a6) camera2_autofocus_pane_cp_g5

0x0004,

0xf797,	// (0x00072e38) camera2_autofocus_pane_cp_g

0xb8eb,	// (0x0006ef8c) popup_dialer_spcha_window

0x77fc,	// (0x0006ae9d) bg_popup_sub_pane_cp07

0x4dd6,	// (0x00068477) list_spcha_pane

0x4dde,	// (0x0006847f) list_single_spcha_pane_ParamLimits

0x4dde,	// (0x0006847f) list_single_spcha_pane

0x77fc,	// (0x0006ae9d) list_highlight_pane_cp06

0x4def,	// (0x00068490) list_single_spcha_pane_t1

0x22ff,	// (0x000659a0) popup_call2_audio_out_window_g4_ParamLimits

0x22ff,	// (0x000659a0) popup_call2_audio_out_window_g4

0x77fc,	// (0x0006ae9d) main_imed2_pane

0x28de,	// (0x00065f7f) popup_imed_adjust2_window

0xa7c1,	// (0x0006de62) popup_imed_trans_window_ParamLimits

0xa7c1,	// (0x0006de62) popup_imed_trans_window

0x4815,	// (0x00067eb6) popup_blid_sat_info2_window_t1

0x4823,	// (0x00067ec4) popup_blid_sat_info2_window_t2

0x000a,

0xf6c6,	// (0x00072d67) popup_blid_sat_info2_window_t

0xbbf6,	// (0x0006f297) aid_size_cell_colour_35

0xbc10,	// (0x0006f2b1) aid_size_cell_colour_112

0xbc27,	// (0x0006f2c8) aid_size_cell_effect

0x00a1,	// (0x00063742) bg_tb_trans_pane_cp02

0x0feb,	// (0x0006468c) heading_imed_pane

0xbc41,	// (0x0006f2e2) listscroll_imed_pane

0x4dfd,	// (0x0006849e) heading_imed_pane_g1

0x4e05,	// (0x000684a6) heading_imed_pane_t1

0x4e13,	// (0x000684b4) grid_imed_colour_35_pane_ParamLimits

0x4e13,	// (0x000684b4) grid_imed_colour_35_pane

0xbc4d,	// (0x0006f2ee) grid_imed_effect_pane

0x4e2a,	// (0x000684cb) list_imed_aspect_pane

0xbc5d,	// (0x0006f2fe) scroll_pane_cp027_ParamLimits

0xbc5d,	// (0x0006f2fe) scroll_pane_cp027

0xbc69,	// (0x0006f30a) cell_imed_effect_pane_ParamLimits

0xbc69,	// (0x0006f30a) cell_imed_effect_pane

0x4e32,	// (0x000684d3) cell_imed_colour_pane_ParamLimits

0x4e32,	// (0x000684d3) cell_imed_colour_pane

0x4e74,	// (0x00068515) cell_imed_colour_pane_g1_ParamLimits

0x4e74,	// (0x00068515) cell_imed_colour_pane_g1

0x4e85,	// (0x00068526) hgihlgiht_grid_pane_cp016_ParamLimits

0x4e85,	// (0x00068526) hgihlgiht_grid_pane_cp016

0xbc81,	// (0x0006f322) cell_imed_effect_pane_g1

0xbc89,	// (0x0006f32a) grid_highlight_pane_cp017

0x4e96,	// (0x00068537) list_imed_single_pane_ParamLimits

0x4e96,	// (0x00068537) list_imed_single_pane

0x77fc,	// (0x0006ae9d) list_highlight_pane_cp07

0x4eab,	// (0x0006854c) list_imed_aspect_pane_comp1_t1

0x28b6,	// (0x00065f57) bg_tb_trans_pane_cp05

0x4ecd,	// (0x0006856e) popup_imed_adjust2_window_g1

0x4ef4,	// (0x00068595) popup_imed_adjust2_window_t1

0x4f0c,	// (0x000685ad) slider_imed_adjust_pane

0x4f20,	// (0x000685c1) slider_imed_adjust_pane_g1

0x4f30,	// (0x000685d1) slider_imed_adjust_pane_g2

0x4f40,	// (0x000685e1) slider_imed_adjust_pane_g3

0x4f51,	// (0x000685f2) slider_imed_adjust_pane_g4

0x0003,

0xf805,	// (0x00072ea6) slider_imed_adjust_pane_g

0xbc92,	// (0x0006f333) aid_size_cell_clipart2

0xbc9e,	// (0x0006f33f) grid_imed_clipart_pane

0x4f62,	// (0x00068603) scroll_pane_cp031

0xbca8,	// (0x0006f349) cell_imed_clipart_pane_ParamLimits

0xbca8,	// (0x0006f349) cell_imed_clipart_pane

0xbcca,	// (0x0006f36b) cell_imed_clipart_pane_g1

0x77fc,	// (0x0006ae9d) grid_highlight_pane_cp014

0xba10,	// (0x0006f0b1) main_clock2_pane_g1_ParamLimits

0xba10,	// (0x0006f0b1) main_clock2_pane_g1

0xbaf7,	// (0x0006f198) aid_call2_pane_cp10

0xbb09,	// (0x0006f1aa) aid_call_pane_cp10

0x13a9,	// (0x00064a4a) popup_clock_analogue_window_cp10_g1

0x13a9,	// (0x00064a4a) popup_clock_analogue_window_cp10_g2

0xbb1b,	// (0x0006f1bc) popup_clock_analogue_window_cp10_g3

0xbb1b,	// (0x0006f1bc) popup_clock_analogue_window_cp10_g4

0x13a9,	// (0x00064a4a) popup_clock_analogue_window_cp10_g5

0x0004,

0xf7f3,	// (0x00072e94) popup_clock_analogue_window_cp10_g

0xbb2d,	// (0x0006f1ce) popup_clock_analogue_window_cp10_t1

0xbb5e,	// (0x0006f1ff) clock_digital_number_pane_cp10_ParamLimits

0xbb5e,	// (0x0006f1ff) clock_digital_number_pane_cp10

0xbb76,	// (0x0006f217) clock_digital_number_pane_cp11_ParamLimits

0xbb76,	// (0x0006f217) clock_digital_number_pane_cp11

0xbb8e,	// (0x0006f22f) clock_digital_number_pane_cp12_ParamLimits

0xbb8e,	// (0x0006f22f) clock_digital_number_pane_cp12

0xbba6,	// (0x0006f247) clock_digital_number_pane_cp13_ParamLimits

0xbba6,	// (0x0006f247) clock_digital_number_pane_cp13

0xbbbe,	// (0x0006f25f) clock_digital_separator_pane_cp10_ParamLimits

0xbbbe,	// (0x0006f25f) clock_digital_separator_pane_cp10

0xbbd6,	// (0x0006f277) popup_clock_digital_window_cp02_t1_ParamLimits

0xbbd6,	// (0x0006f277) popup_clock_digital_window_cp02_t1

0x0715,	// (0x00063db6) clock_digital_number_pane_cp10_g1

0x0715,	// (0x00063db6) clock_digital_number_pane_cp10_g2

0x0001,

0xf80e,	// (0x00072eaf) clock_digital_number_pane_cp10_g

0x0715,	// (0x00063db6) clock_digital_separator_pane_cp10_g1

0x0715,	// (0x00063db6) clock_digital_separator_pane_g2_cp10

0x1444,	// (0x00064ae5) navi_pane_vded_g4

0x144d,	// (0x00064aee) navi_pane_vded_g5

0x1456,	// (0x00064af7) navi_pane_vded_t1

0x77fc,	// (0x0006ae9d) main_vded_pane

0xbcd3,	// (0x0006f374) main_vded_pane_g1

0xbcdf,	// (0x0006f380) main_vded_pane_g2

0xbce9,	// (0x0006f38a) main_vded_pane_g3

0x0002,

0xf813,	// (0x00072eb4) main_vded_pane_g

0xbcf3,	// (0x0006f394) main_vded_pane_t1

0xbd01,	// (0x0006f3a2) main_vded_pane_t2

0x0001,

0xf81a,	// (0x00072ebb) main_vded_pane_t

0xbd0f,	// (0x0006f3b0) vded_slider_pane

0xbd19,	// (0x0006f3ba) vded_video_pane

0x4f6a,	// (0x0006860b) vded_video_pane_g1

0xbd23,	// (0x0006f3c4) vded_video_pane_g2

0x49d7,	// (0x00068078) vded_video_pane_g3

0x0002,

0xf81f,	// (0x00072ec0) vded_video_pane_g

0x4f74,	// (0x00068615) vded_slider_pane_g1

0x4719,	// (0x00067dba) vded_slider_pane_g2

0x4f7d,	// (0x0006861e) vded_slider_pane_g3

0x4f86,	// (0x00068627) vded_slider_pane_g4

0x4f8f,	// (0x00068630) vded_slider_pane_g5

0x0004,

0xf826,	// (0x00072ec7) vded_slider_pane_g

0xb800,	// (0x0006eea1) mup3_rocker_pane_ParamLimits

0xb800,	// (0x0006eea1) mup3_rocker_pane

0xbd2c,	// (0x0006f3cd) mup3_control_keys_pane_g1

0xbd34,	// (0x0006f3d5) mup3_control_keys_pane_g2

0xbd3c,	// (0x0006f3dd) mup3_control_keys_pane_g3

0xbd44,	// (0x0006f3e5) mup3_control_keys_pane_g4

0x0003,

0xf831,	// (0x00072ed2) mup3_control_keys_pane_g

0x7a65,	// (0x0006b106) popup_toolbar2_fixed_window_cp01_ParamLimits

0x7a65,	// (0x0006b106) popup_toolbar2_fixed_window_cp01

0xb81a,	// (0x0006eebb) popup_toolbar2_fixed_window_cp02_ParamLimits

0xb81a,	// (0x0006eebb) popup_toolbar2_fixed_window_cp02

0x1c3e,	// (0x000652df) popup_call2_audio_second_window_t4_ParamLimits

0x1c3e,	// (0x000652df) popup_call2_audio_second_window_t4

0x216c,	// (0x0006580d) popup_call2_audio_first_window_t6_ParamLimits

0x216c,	// (0x0006580d) popup_call2_audio_first_window_t6

0x2402,	// (0x00065aa3) popup_call2_audio_out_window_t6_ParamLimits

0x2402,	// (0x00065aa3) popup_call2_audio_out_window_t6

0x77fc,	// (0x0006ae9d) main_vitu_pane

0xbd54,	// (0x0006f3f5) aid_size_cell_itu_ParamLimits

0xbd54,	// (0x0006f3f5) aid_size_cell_itu

0x7a8d,	// (0x0006b12e) bg_popup_window_pane_cp08_ParamLimits

0x7a8d,	// (0x0006b12e) bg_popup_window_pane_cp08

0xbd62,	// (0x0006f403) field_vitu_entry_pane_ParamLimits

0xbd62,	// (0x0006f403) field_vitu_entry_pane

0xbd71,	// (0x0006f412) grid_vitu_function_pane_ParamLimits

0xbd71,	// (0x0006f412) grid_vitu_function_pane

0xbd81,	// (0x0006f422) grid_vitu_itu_pane_ParamLimits

0xbd81,	// (0x0006f422) grid_vitu_itu_pane

0xbd91,	// (0x0006f432) cell_vitu_itu_pane_ParamLimits

0xbd91,	// (0x0006f432) cell_vitu_itu_pane

0xbda6,	// (0x0006f447) cell_vitu_function_pane_ParamLimits

0xbda6,	// (0x0006f447) cell_vitu_function_pane

0x00a1,	// (0x00063742) bg_popup_sub_pane_cp08_ParamLimits

0x00a1,	// (0x00063742) bg_popup_sub_pane_cp08

0xbdb8,	// (0x0006f459) field_vitu_entry_pane_t1_ParamLimits

0xbdb8,	// (0x0006f459) field_vitu_entry_pane_t1

0x4fb0,	// (0x00068651) field_vitu_entry_pane_t2_ParamLimits

0x4fb0,	// (0x00068651) field_vitu_entry_pane_t2

0x0001,

0xf83f,	// (0x00072ee0) field_vitu_entry_pane_t_ParamLimits

0xf83f,	// (0x00072ee0) field_vitu_entry_pane_t

0x4fcd,	// (0x0006866e) bg_button_pane_cp05_ParamLimits

0x4fcd,	// (0x0006866e) bg_button_pane_cp05

0xbdd3,	// (0x0006f474) cell_vitu_itu_pane_g1

0xbdeb,	// (0x0006f48c) cell_vitu_itu_pane_t1_ParamLimits

0xbdeb,	// (0x0006f48c) cell_vitu_itu_pane_t1

0xbdfd,	// (0x0006f49e) cell_vitu_itu_pane_t2_ParamLimits

0xbdfd,	// (0x0006f49e) cell_vitu_itu_pane_t2

0x0002,

0xf844,	// (0x00072ee5) cell_vitu_itu_pane_t_ParamLimits

0xf844,	// (0x00072ee5) cell_vitu_itu_pane_t

0x4fdb,	// (0x0006867c) bg_button_pane_cp07

0xbe32,	// (0x0006f4d3) cell_vitu_function_pane_g1

0x7d18,	// (0x0006b3b9) main_calc_pane_g1

0x7842,	// (0x0006aee3) aid_visual_content_pane

0x77fc,	// (0x0006ae9d) main_vradio_pane

0xbe3b,	// (0x0006f4dc) main_vradio_pane_g1_ParamLimits

0xbe3b,	// (0x0006f4dc) main_vradio_pane_g1

0x4fe5,	// (0x00068686) main_vradio_pane_g2_ParamLimits

0x4fe5,	// (0x00068686) main_vradio_pane_g2

0x0001,

0xf84b,	// (0x00072eec) main_vradio_pane_g_ParamLimits

0xf84b,	// (0x00072eec) main_vradio_pane_g

0xbe4b,	// (0x0006f4ec) main_vradio_pane_t1_ParamLimits

0xbe4b,	// (0x0006f4ec) main_vradio_pane_t1

0xbe5d,	// (0x0006f4fe) main_vradio_pane_t2_ParamLimits

0xbe5d,	// (0x0006f4fe) main_vradio_pane_t2

0x4ff2,	// (0x00068693) main_vradio_pane_t3_ParamLimits

0x4ff2,	// (0x00068693) main_vradio_pane_t3

0x0002,

0xf850,	// (0x00072ef1) main_vradio_pane_t_ParamLimits

0xf850,	// (0x00072ef1) main_vradio_pane_t

0xbe6f,	// (0x0006f510) vradio_rocker_control_pane_ParamLimits

0xbe6f,	// (0x0006f510) vradio_rocker_control_pane

0xbe7b,	// (0x0006f51c) vradio_station_info_pane_ParamLimits

0xbe7b,	// (0x0006f51c) vradio_station_info_pane

0x5006,	// (0x000686a7) vradio_frequency_info_pane_ParamLimits

0x5006,	// (0x000686a7) vradio_frequency_info_pane

0x49d7,	// (0x00068078) vradio_station_info_pane_g1

0x5015,	// (0x000686b6) vradio_station_info_pane_t1_ParamLimits

0x5015,	// (0x000686b6) vradio_station_info_pane_t1

0x5037,	// (0x000686d8) vradio_station_info_pane_t2_ParamLimits

0x5037,	// (0x000686d8) vradio_station_info_pane_t2

0x0001,

0xf857,	// (0x00072ef8) vradio_station_info_pane_t_ParamLimits

0xf857,	// (0x00072ef8) vradio_station_info_pane_t

0x5049,	// (0x000686ea) vradio_tuning_pane

0x5051,	// (0x000686f2) vradio_rocker_control_pane_g1

0x5059,	// (0x000686fa) vradio_rocker_control_pane_g2

0x5061,	// (0x00068702) vradio_rocker_control_pane_g3

0x5069,	// (0x0006870a) vradio_rocker_control_pane_g4

0x5071,	// (0x00068712) vradio_rocker_control_pane_g5

0x0004,

0xf85c,	// (0x00072efd) vradio_rocker_control_pane_g

0xbe8a,	// (0x0006f52b) vradio_frequency_info_pane_g1

0x5079,	// (0x0006871a) vradio_frequency_info_pane_t1_ParamLimits

0x5079,	// (0x0006871a) vradio_frequency_info_pane_t1

0xbe94,	// (0x0006f535) vradio_tuning_pane_g1

0xbe9d,	// (0x0006f53e) vradio_tuning_pane_t1

0x788b,	// (0x0006af2c) area_side_right_pane_ParamLimits

0x788b,	// (0x0006af2c) area_side_right_pane

0x287d,	// (0x00065f1e) status_small_pane_g1

0x2885,	// (0x00065f26) status_small_pane_g2

0x288e,	// (0x00065f2f) status_small_pane_g3

0x2897,	// (0x00065f38) status_small_pane_g4

0x0003,

0xf61c,	// (0x00072cbd) status_small_pane_g

0x28a0,	// (0x00065f41) status_small_pane_t1

0x77fc,	// (0x0006ae9d) main_video3_pane

0x508d,	// (0x0006872e) cams_zoom_vslider_pane

0x5095,	// (0x00068736) image3_wide_pane_ParamLimits

0x5095,	// (0x00068736) image3_wide_pane

0x50af,	// (0x00068750) image3_wide_small_pane

0x50bb,	// (0x0006875c) main_video3_pane_g1_ParamLimits

0x50bb,	// (0x0006875c) main_video3_pane_g1

0x50d7,	// (0x00068778) main_video3_pane_g2_ParamLimits

0x50d7,	// (0x00068778) main_video3_pane_g2

0x0001,

0xf867,	// (0x00072f08) main_video3_pane_g_ParamLimits

0xf867,	// (0x00072f08) main_video3_pane_g

0x50f3,	// (0x00068794) main_video3_pane_t1_ParamLimits

0x50f3,	// (0x00068794) main_video3_pane_t1

0x511e,	// (0x000687bf) main_video3_pane_t2_ParamLimits

0x511e,	// (0x000687bf) main_video3_pane_t2

0x5149,	// (0x000687ea) main_video3_pane_t3_ParamLimits

0x5149,	// (0x000687ea) main_video3_pane_t3

0x0002,

0xf86c,	// (0x00072f0d) main_video3_pane_t_ParamLimits

0xf86c,	// (0x00072f0d) main_video3_pane_t

0x5176,	// (0x00068817) cams_zoom_vslider_pane_g1

0x517f,	// (0x00068820) cams_zoom_vslider_pane_g2

0x0001,

0xf873,	// (0x00072f14) cams_zoom_vslider_pane_g

0x5187,	// (0x00068828) small_slider_vertical_pane

0x49d7,	// (0x00068078) small_slider_vertical_pane_g1

0x49d7,	// (0x00068078) small_slider_vertical_pane_g2

0x518f,	// (0x00068830) small_slider_vertical_pane_g3

0x0002,

0xf878,	// (0x00072f19) small_slider_vertical_pane_g

0x77fc,	// (0x0006ae9d) main_hwr_training_pane

0x5198,	// (0x00068839) hwr_training_instruct_pane_ParamLimits

0x5198,	// (0x00068839) hwr_training_instruct_pane

0xbeac,	// (0x0006f54d) hwr_training_navi_pane_ParamLimits

0xbeac,	// (0x0006f54d) hwr_training_navi_pane

0xbec6,	// (0x0006f567) hwr_training_write_pane_ParamLimits

0xbec6,	// (0x0006f567) hwr_training_write_pane

0x77fc,	// (0x0006ae9d) bg_frame_shadow_pane

0x51cf,	// (0x00068870) hwr_training_write_pane_g1

0x51d7,	// (0x00068878) hwr_training_write_pane_g2

0x51df,	// (0x00068880) hwr_training_write_pane_g3

0x51e7,	// (0x00068888) hwr_training_write_pane_g4

0x51ef,	// (0x00068890) hwr_training_write_pane_g5

0x51f7,	// (0x00068898) hwr_training_write_pane_g6

0x51ff,	// (0x000688a0) hwr_training_write_pane_g7

0x0006,

0xf87f,	// (0x00072f20) hwr_training_write_pane_g

0xbefe,	// (0x0006f59f) hwr_training_navi_pane_g1_ParamLimits

0xbefe,	// (0x0006f59f) hwr_training_navi_pane_g1

0xbf10,	// (0x0006f5b1) hwr_training_navi_pane_g2_ParamLimits

0xbf10,	// (0x0006f5b1) hwr_training_navi_pane_g2

0xbf22,	// (0x0006f5c3) hwr_training_navi_pane_g3_ParamLimits

0xbf22,	// (0x0006f5c3) hwr_training_navi_pane_g3

0xbf32,	// (0x0006f5d3) hwr_training_navi_pane_g4_ParamLimits

0xbf32,	// (0x0006f5d3) hwr_training_navi_pane_g4

0x0004,

0xf88e,	// (0x00072f2f) hwr_training_navi_pane_g_ParamLimits

0xf88e,	// (0x00072f2f) hwr_training_navi_pane_g

0xbf4c,	// (0x0006f5ed) hwr_training_navi_pane_t1

0xbf5a,	// (0x0006f5fb) list_single_hwr_training_instruct_pane_ParamLimits

0xbf5a,	// (0x0006f5fb) list_single_hwr_training_instruct_pane

0x5207,	// (0x000688a8) list_single_hwr_training_instruct_pane_t1

0x4917,	// (0x00067fb8) bg_frame_shadow_pane_g1

0x5216,	// (0x000688b7) bg_frame_shadow_pane_g2

0x521e,	// (0x000688bf) bg_frame_shadow_pane_g3

0x5226,	// (0x000688c7) bg_frame_shadow_pane_g4

0x522e,	// (0x000688cf) bg_frame_shadow_pane_g5

0x5236,	// (0x000688d7) bg_frame_shadow_pane_g6

0x523e,	// (0x000688df) bg_frame_shadow_pane_g7

0x08fd,	// (0x00063f9e) bg_frame_shadow_pane_g8

0x0007,

0xf899,	// (0x00072f3a) bg_frame_shadow_pane_g

0x77fc,	// (0x0006ae9d) main_video_tele_dialer_pane

0xbf7f,	// (0x0006f620) aid_size_cell_video_keypad_ParamLimits

0xbf7f,	// (0x0006f620) aid_size_cell_video_keypad

0xbf8f,	// (0x0006f630) grid_video_dialer_keypad_pane_ParamLimits

0xbf8f,	// (0x0006f630) grid_video_dialer_keypad_pane

0xbfc1,	// (0x0006f662) video_down_pane_cp_ParamLimits

0xbfc1,	// (0x0006f662) video_down_pane_cp

0xbfcd,	// (0x0006f66e) cell_video_dialer_keypad_pane_ParamLimits

0xbfcd,	// (0x0006f66e) cell_video_dialer_keypad_pane

0x5262,	// (0x00068903) bg_button_pane_cp08_ParamLimits

0x5262,	// (0x00068903) bg_button_pane_cp08

0xbfe2,	// (0x0006f683) cell_video_dialer_keypad_pane_g1_ParamLimits

0xbfe2,	// (0x0006f683) cell_video_dialer_keypad_pane_g1

0xb7f4,	// (0x0006ee95) mup3_rocker2_pane_ParamLimits

0xb7f4,	// (0x0006ee95) mup3_rocker2_pane

0x49d7,	// (0x00068078) mup3_rocker2_pane_g1

0xa74b,	// (0x0006ddec) main_dialer2_pane

0x77fc,	// (0x0006ae9d) main_mp4_pane

0xc024,	// (0x0006f6c5) main_mp4_pane_g1_ParamLimits

0xc024,	// (0x0006f6c5) main_mp4_pane_g1

0xc032,	// (0x0006f6d3) main_mp4_pane_g2_ParamLimits

0xc032,	// (0x0006f6d3) main_mp4_pane_g2

0xc040,	// (0x0006f6e1) main_mp4_pane_g3_ParamLimits

0xc040,	// (0x0006f6e1) main_mp4_pane_g3

0xc085,	// (0x0006f726) main_mp4_pane_g4_ParamLimits

0xc085,	// (0x0006f726) main_mp4_pane_g4

0xc0ad,	// (0x0006f74e) main_mp4_pane_g5_ParamLimits

0xc0ad,	// (0x0006f74e) main_mp4_pane_g5

0x0005,

0xf8b9,	// (0x00072f5a) main_mp4_pane_g_ParamLimits

0xf8b9,	// (0x00072f5a) main_mp4_pane_g

0xc0fd,	// (0x0006f79e) main_mp4_pane_t1_ParamLimits

0xc0fd,	// (0x0006f79e) main_mp4_pane_t1

0xc159,	// (0x0006f7fa) main_mp4_pane_t2_ParamLimits

0xc159,	// (0x0006f7fa) main_mp4_pane_t2

0x526e,	// (0x0006890f) main_mp4_pane_t3_ParamLimits

0x526e,	// (0x0006890f) main_mp4_pane_t3

0xc1ab,	// (0x0006f84c) main_mp4_pane_t4_ParamLimits

0xc1ab,	// (0x0006f84c) main_mp4_pane_t4

0x0003,

0xf8c6,	// (0x00072f67) main_mp4_pane_t_ParamLimits

0xf8c6,	// (0x00072f67) main_mp4_pane_t

0xc1ef,	// (0x0006f890) mp4_progress_pane_ParamLimits

0xc1ef,	// (0x0006f890) mp4_progress_pane

0xc239,	// (0x0006f8da) mp4_rocker_pane_ParamLimits

0xc239,	// (0x0006f8da) mp4_rocker_pane

0x5296,	// (0x00068937) mp4_progress_pane_t1

0x52af,	// (0x00068950) mp4_progress_pane_t2

0x0001,

0xf8cf,	// (0x00072f70) mp4_progress_pane_t

0x52c8,	// (0x00068969) mup_progress_pane_cp04

0x49d7,	// (0x00068078) mp4_rocker_pane_g1

0xc259,	// (0x0006f8fa) aid_cell_size_keypad2_ParamLimits

0xc259,	// (0x0006f8fa) aid_cell_size_keypad2

0xc269,	// (0x0006f90a) dialer2_ne_pane_ParamLimits

0xc269,	// (0x0006f90a) dialer2_ne_pane

0xc277,	// (0x0006f918) grid_dialer2_keypad_pane_ParamLimits

0xc277,	// (0x0006f918) grid_dialer2_keypad_pane

0x2a70,	// (0x00066111) bg_popup_call_pane_cp07_ParamLimits

0x2a70,	// (0x00066111) bg_popup_call_pane_cp07

0xc287,	// (0x0006f928) dialer2_ne_pane_t1_ParamLimits

0xc287,	// (0x0006f928) dialer2_ne_pane_t1

0xc2ac,	// (0x0006f94d) cell_dialer2_keypad_pane_ParamLimits

0xc2ac,	// (0x0006f94d) cell_dialer2_keypad_pane

0x52f0,	// (0x00068991) bg_button_pane_pane_cp04_ParamLimits

0x52f0,	// (0x00068991) bg_button_pane_pane_cp04

0xc2c1,	// (0x0006f962) cell_dialer2_keypad_pane_g1_ParamLimits

0xc2c1,	// (0x0006f962) cell_dialer2_keypad_pane_g1

0x8739,	// (0x0006bdda) aid_placing_vt_set_content_ParamLimits

0x8739,	// (0x0006bdda) aid_placing_vt_set_content

0x8763,	// (0x0006be04) aid_placing_vt_set_title_ParamLimits

0x8763,	// (0x0006be04) aid_placing_vt_set_title

0x77fc,	// (0x0006ae9d) main_image3_pane

0xc35b,	// (0x0006f9fc) area_side_right_pane_cp01_ParamLimits

0xc35b,	// (0x0006f9fc) area_side_right_pane_cp01

0x3013,	// (0x000666b4) main_image3_pane_g1_ParamLimits

0x3013,	// (0x000666b4) main_image3_pane_g1

0xc388,	// (0x0006fa29) main_image3_pane_g2_ParamLimits

0xc388,	// (0x0006fa29) main_image3_pane_g2

0xc3a1,	// (0x0006fa42) main_image3_pane_g3_ParamLimits

0xc3a1,	// (0x0006fa42) main_image3_pane_g3

0xc3ba,	// (0x0006fa5b) main_image3_pane_g4_ParamLimits

0xc3ba,	// (0x0006fa5b) main_image3_pane_g4

0x0003,

0xf8de,	// (0x00072f7f) main_image3_pane_g_ParamLimits

0xf8de,	// (0x00072f7f) main_image3_pane_g

0xc3d3,	// (0x0006fa74) main_image3_pane_t1_ParamLimits

0xc3d3,	// (0x0006fa74) main_image3_pane_t1

0xc3f8,	// (0x0006fa99) main_image3_pane_t2_ParamLimits

0xc3f8,	// (0x0006fa99) main_image3_pane_t2

0xc417,	// (0x0006fab8) main_image3_pane_t3_ParamLimits

0xc417,	// (0x0006fab8) main_image3_pane_t3

0x0003,

0xf8e7,	// (0x00072f88) main_image3_pane_t_ParamLimits

0xf8e7,	// (0x00072f88) main_image3_pane_t

0x7a8d,	// (0x0006b12e) grid_sctrl_middle_pane_cp01_ParamLimits

0x7a8d,	// (0x0006b12e) grid_sctrl_middle_pane_cp01

0xc478,	// (0x0006fb19) cell_sctrl_middle_pane_cp01_ParamLimits

0xc478,	// (0x0006fb19) cell_sctrl_middle_pane_cp01

0xc489,	// (0x0006fb2a) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0xc489,	// (0x0006fb2a) cell_sctrl_middle_pane_cp01_g1

0x77fc,	// (0x0006ae9d) main_call4_pane

0xc496,	// (0x0006fb37) aid_size_button_call4_ParamLimits

0xc496,	// (0x0006fb37) aid_size_button_call4

0xc4c6,	// (0x0006fb67) call4_windows_pane_ParamLimits

0xc4c6,	// (0x0006fb67) call4_windows_pane

0xc4e0,	// (0x0006fb81) grid_call4_button_pane_ParamLimits

0xc4e0,	// (0x0006fb81) grid_call4_button_pane

0x52fc,	// (0x0006899d) call4_windows_conf_pane

0x5313,	// (0x000689b4) popup_call4_audio_first_window_ParamLimits

0x5313,	// (0x000689b4) popup_call4_audio_first_window

0x535f,	// (0x00068a00) popup_call4_audio_second_window_ParamLimits

0x535f,	// (0x00068a00) popup_call4_audio_second_window

0x5373,	// (0x00068a14) popup_call4_audio_wait_window_ParamLimits

0x5373,	// (0x00068a14) popup_call4_audio_wait_window

0xc504,	// (0x0006fba5) cell_call4_button_pane_ParamLimits

0xc504,	// (0x0006fba5) cell_call4_button_pane

0xc529,	// (0x0006fbca) bg_button_pane_cp09_ParamLimits

0xc529,	// (0x0006fbca) bg_button_pane_cp09

0xc535,	// (0x0006fbd6) cell_call4_button_pane_g1_ParamLimits

0xc535,	// (0x0006fbd6) cell_call4_button_pane_g1

0xc542,	// (0x0006fbe3) cell_call4_button_pane_t1_ParamLimits

0xc542,	// (0x0006fbe3) cell_call4_button_pane_t1

0x53bb,	// (0x00068a5c) popup_call4_audio_conf_window_ParamLimits

0x53bb,	// (0x00068a5c) popup_call4_audio_conf_window

0xb827,	// (0x0006eec8) mup3_progress_pane_t1_ParamLimits

0xb83e,	// (0x0006eedf) mup3_progress_pane_t2_ParamLimits

0x4cb5,	// (0x00068356) mup3_progress_pane_t3_ParamLimits

0xf7c0,	// (0x00072e61) mup3_progress_pane_t_ParamLimits

0x4ccc,	// (0x0006836d) mup_progress_pane_cp03_ParamLimits

0xbd4c,	// (0x0006f3ed) mup3_control_keys_pane_g4_copy1

0xc21d,	// (0x0006f8be) mp4_rocker2_pane_ParamLimits

0xc21d,	// (0x0006f8be) mp4_rocker2_pane

0x53d7,	// (0x00068a78) mp4_rocker2_pane_g1

0x53cf,	// (0x00068a70) mp4_rocker2_pane_g2

0xc554,	// (0x0006fbf5) mp4_rocker2_pane_g3

0xc55c,	// (0x0006fbfd) mp4_rocker2_pane_g4

0xc564,	// (0x0006fc05) mp4_rocker2_pane_g5

0x0004,

0xf8f0,	// (0x00072f91) mp4_rocker2_pane_g

0x77fc,	// (0x0006ae9d) main_camera4_pane

0x77fc,	// (0x0006ae9d) main_video4_pane

0xbf9d,	// (0x0006f63e) main_video_tele_dialer_pane_t1_ParamLimits

0xbf9d,	// (0x0006f63e) main_video_tele_dialer_pane_t1

0xbfaf,	// (0x0006f650) main_video_tele_dialer_pane_t2_ParamLimits

0xbfaf,	// (0x0006f650) main_video_tele_dialer_pane_t2

0x0001,

0xf8aa,	// (0x00072f4b) main_video_tele_dialer_pane_t_ParamLimits

0xf8aa,	// (0x00072f4b) main_video_tele_dialer_pane_t

0xc584,	// (0x0006fc25) cam4_autofocus_pane_ParamLimits

0xc584,	// (0x0006fc25) cam4_autofocus_pane

0xc59e,	// (0x0006fc3f) cam4_image_uncrop_pane_ParamLimits

0xc59e,	// (0x0006fc3f) cam4_image_uncrop_pane

0xc5b5,	// (0x0006fc56) cam4_indicators_pane_ParamLimits

0xc5b5,	// (0x0006fc56) cam4_indicators_pane

0xc5d1,	// (0x0006fc72) main_camera4_pane_g1_ParamLimits

0xc5d1,	// (0x0006fc72) main_camera4_pane_g1

0xc5dd,	// (0x0006fc7e) main_camera4_pane_g2_ParamLimits

0xc5dd,	// (0x0006fc7e) main_camera4_pane_g2

0xc5dd,	// (0x0006fc7e) main_camera4_pane_g3_ParamLimits

0xc5dd,	// (0x0006fc7e) main_camera4_pane_g3

0xc5e9,	// (0x0006fc8a) main_camera4_pane_g4_ParamLimits

0xc5e9,	// (0x0006fc8a) main_camera4_pane_g4

0xc5f5,	// (0x0006fc96) main_camera4_pane_g5_ParamLimits

0xc5f5,	// (0x0006fc96) main_camera4_pane_g5

0x0005,

0xf8fb,	// (0x00072f9c) main_camera4_pane_g_ParamLimits

0xf8fb,	// (0x00072f9c) main_camera4_pane_g

0xc60f,	// (0x0006fcb0) main_camera4_pane_t1_ParamLimits

0xc60f,	// (0x0006fcb0) main_camera4_pane_t1

0x4c3a,	// (0x000682db) bg_tb_trans_pane_cp06

0xc65f,	// (0x0006fd00) cam4_indicators_pane_g1

0xc670,	// (0x0006fd11) cam4_indicators_pane_g2

0x0002,

0xf916,	// (0x00072fb7) cam4_indicators_pane_g

0xc68e,	// (0x0006fd2f) cam4_indicators_pane_t1

0xc6b8,	// (0x0006fd59) main_video4_pane_g1_ParamLimits

0xc6b8,	// (0x0006fd59) main_video4_pane_g1

0xc6c4,	// (0x0006fd65) main_video4_pane_g2_ParamLimits

0xc6c4,	// (0x0006fd65) main_video4_pane_g2

0xc6d0,	// (0x0006fd71) main_video4_pane_g3_ParamLimits

0xc6d0,	// (0x0006fd71) main_video4_pane_g3

0xc6dc,	// (0x0006fd7d) main_video4_pane_g4_ParamLimits

0xc6dc,	// (0x0006fd7d) main_video4_pane_g4

0x0004,

0xf91d,	// (0x00072fbe) main_video4_pane_g_ParamLimits

0xf91d,	// (0x00072fbe) main_video4_pane_g

0xc6fc,	// (0x0006fd9d) vid4_indicators_pane_ParamLimits

0xc6fc,	// (0x0006fd9d) vid4_indicators_pane

0xc71a,	// (0x0006fdbb) video4_image_uncrop_cif_pane_ParamLimits

0xc71a,	// (0x0006fdbb) video4_image_uncrop_cif_pane

0xc729,	// (0x0006fdca) video4_image_uncrop_nhd_pane_ParamLimits

0xc729,	// (0x0006fdca) video4_image_uncrop_nhd_pane

0xc59e,	// (0x0006fc3f) video4_image_uncrop_vga_pane_ParamLimits

0xc59e,	// (0x0006fc3f) video4_image_uncrop_vga_pane

0x00a1,	// (0x00063742) bg_tb_trans_pane_cp07

0xc740,	// (0x0006fde1) vid4_indicators_pane_g1

0xc751,	// (0x0006fdf2) vid4_indicators_pane_g2

0xc762,	// (0x0006fe03) vid4_indicators_pane_g3

0x0004,

0xf928,	// (0x00072fc9) vid4_indicators_pane_g

0xc78f,	// (0x0006fe30) vid4_indicators_pane_t1

0xc7a8,	// (0x0006fe49) cam4_autofocus_pane_g1

0xc7b0,	// (0x0006fe51) cam4_autofocus_pane_g2

0xc7b8,	// (0x0006fe59) cam4_autofocus_pane_g3

0x0002,

0xf933,	// (0x00072fd4) cam4_autofocus_pane_g

0xc7c0,	// (0x0006fe61) cam4_autofocus_pane_g3_copy1

0x5246,	// (0x000688e7) video_down_pane_cp_t1

0x5254,	// (0x000688f5) video_down_pane_cp_t2

0x0001,

0xf8af,	// (0x00072f50) video_down_pane_cp_t

0x7a8d,	// (0x0006b12e) popup_vitu2_window_ParamLimits

0x7a8d,	// (0x0006b12e) popup_vitu2_window

0xc7c8,	// (0x0006fe69) aid_size_cell2_itu2_ParamLimits

0xc7c8,	// (0x0006fe69) aid_size_cell2_itu2

0xc7ea,	// (0x0006fe8b) aid_size_cell_itu2_ParamLimits

0xc7ea,	// (0x0006fe8b) aid_size_cell_itu2

0x2a70,	// (0x00066111) bg_popup_window_pane_cp09_ParamLimits

0x2a70,	// (0x00066111) bg_popup_window_pane_cp09

0xc82e,	// (0x0006fecf) field_vitu2_entry_pane_ParamLimits

0xc82e,	// (0x0006fecf) field_vitu2_entry_pane

0xc84e,	// (0x0006feef) grid_vitu2_function_pane_ParamLimits

0xc84e,	// (0x0006feef) grid_vitu2_function_pane

0xc892,	// (0x0006ff33) grid_vitu2_itu_pane_ParamLimits

0xc892,	// (0x0006ff33) grid_vitu2_itu_pane

0xc90a,	// (0x0006ffab) cell_vitu2_itu_pane_ParamLimits

0xc90a,	// (0x0006ffab) cell_vitu2_itu_pane

0xc91f,	// (0x0006ffc0) cell_vitu2_function_pane_ParamLimits

0xc91f,	// (0x0006ffc0) cell_vitu2_function_pane

0x53df,	// (0x00068a80) bg_popup_call_pane_cp08_ParamLimits

0x53df,	// (0x00068a80) bg_popup_call_pane_cp08

0x53f8,	// (0x00068a99) field_vitu2_entry_pane_g1

0x5404,	// (0x00068aa5) field_vitu2_entry_pane_g2

0x0002,

0xf93a,	// (0x00072fdb) field_vitu2_entry_pane_g

0x69cb,	// (0x0006a06c) field_vitu2_entry_pane_t1_ParamLimits

0x69cb,	// (0x0006a06c) field_vitu2_entry_pane_t1

0x69fa,	// (0x0006a09b) field_vitu2_entry_pane_t2_ParamLimits

0x69fa,	// (0x0006a09b) field_vitu2_entry_pane_t2

0x0001,

0xf941,	// (0x00072fe2) field_vitu2_entry_pane_t_ParamLimits

0xf941,	// (0x00072fe2) field_vitu2_entry_pane_t

0xc95e,	// (0x0006ffff) bg_button_pane_cp010_ParamLimits

0xc95e,	// (0x0006ffff) bg_button_pane_cp010

0xc96c,	// (0x0007000d) cell_vitu2_itu_pane_g1

0xc98a,	// (0x0007002b) cell_vitu2_itu_pane_t1_ParamLimits

0xc98a,	// (0x0007002b) cell_vitu2_itu_pane_t1

0x6a17,	// (0x0006a0b8) cell_vitu2_itu_pane_t2_ParamLimits

0x6a17,	// (0x0006a0b8) cell_vitu2_itu_pane_t2

0x0002,

0xf94b,	// (0x00072fec) cell_vitu2_itu_pane_t_ParamLimits

0xf94b,	// (0x00072fec) cell_vitu2_itu_pane_t

0x00a1,	// (0x00063742) bg_button_pane_cp011

0xc9dc,	// (0x0007007d) cell_vitu2_function_pane_g1

0x77fc,	// (0x0006ae9d) main_myfav_hc_pane

0xc459,	// (0x0006fafa) popup_image3_note_pane_ParamLimits

0xc459,	// (0x0006fafa) popup_image3_note_pane

0xc467,	// (0x0006fb08) popup_image3_tool_bar_pane_ParamLimits

0xc467,	// (0x0006fb08) popup_image3_tool_bar_pane

0x6a85,	// (0x0006a126) cell_vitu2_itu_pane_t3_ParamLimits

0x6a85,	// (0x0006a126) cell_vitu2_itu_pane_t3

0x77fc,	// (0x0006ae9d) bg_popup_trans_pane

0x5426,	// (0x00068ac7) grid_image3_tool_bar_pane

0x5430,	// (0x00068ad1) bg_popup_trans_pane_g1

0x0cea,	// (0x0006438b) bg_popup_trans_pane_g2

0x5438,	// (0x00068ad9) bg_popup_trans_pane_g3

0x5440,	// (0x00068ae1) bg_popup_trans_pane_g4

0x5448,	// (0x00068ae9) bg_popup_trans_pane_g5

0x5450,	// (0x00068af1) bg_popup_trans_pane_g6

0x5458,	// (0x00068af9) bg_popup_trans_pane_g7

0x5460,	// (0x00068b01) bg_popup_trans_pane_g8

0x0cca,	// (0x0006436b) bg_popup_trans_pane_g9

0x0008,

0xf952,	// (0x00072ff3) bg_popup_trans_pane_g

0x5468,	// (0x00068b09) cell_image3_tool_bar_pane_ParamLimits

0x5468,	// (0x00068b09) cell_image3_tool_bar_pane

0x49d7,	// (0x00068078) cell_image3_tool_bar_pane_g1

0x77fc,	// (0x0006ae9d) bg_popup_trans_pane_cp1

0x547c,	// (0x00068b1d) popup_image3_note_pane_t1

0x548a,	// (0x00068b2b) popup_image3_note_pane_t2

0x5498,	// (0x00068b39) popup_image3_note_pane_t3

0x0002,

0xf965,	// (0x00073006) popup_image3_note_pane_t

0x54a6,	// (0x00068b47) popup_image3_note_pane_t3_copy1

0xc9f0,	// (0x00070091) bg_myfav_hc_instruction_pane_ParamLimits

0xc9f0,	// (0x00070091) bg_myfav_hc_instruction_pane

0xca08,	// (0x000700a9) cell_myfav_contact_pane_ParamLimits

0xca08,	// (0x000700a9) cell_myfav_contact_pane

0xca22,	// (0x000700c3) cell_myfav_contact_pane_cp1_ParamLimits

0xca22,	// (0x000700c3) cell_myfav_contact_pane_cp1

0xca3a,	// (0x000700db) cell_myfav_contact_pane_cp2_ParamLimits

0xca3a,	// (0x000700db) cell_myfav_contact_pane_cp2

0xca52,	// (0x000700f3) cell_myfav_contact_pane_cp3_ParamLimits

0xca52,	// (0x000700f3) cell_myfav_contact_pane_cp3

0xca69,	// (0x0007010a) cell_myfav_contact_pane_cp4_ParamLimits

0xca69,	// (0x0007010a) cell_myfav_contact_pane_cp4

0xca7f,	// (0x00070120) cell_myfav_contact_pane_cp5_ParamLimits

0xca7f,	// (0x00070120) cell_myfav_contact_pane_cp5

0xca93,	// (0x00070134) cell_myfav_contact_pane_cp6_ParamLimits

0xca93,	// (0x00070134) cell_myfav_contact_pane_cp6

0xcaa7,	// (0x00070148) cell_myfav_contact_pane_cp7_ParamLimits

0xcaa7,	// (0x00070148) cell_myfav_contact_pane_cp7

0x54b4,	// (0x00068b55) listscroll_gen_pane_cp05

0xcabf,	// (0x00070160) main_myfav_hc_pane_g1_ParamLimits

0xcabf,	// (0x00070160) main_myfav_hc_pane_g1

0xcad5,	// (0x00070176) main_myfav_hc_pane_g2_ParamLimits

0xcad5,	// (0x00070176) main_myfav_hc_pane_g2

0x0002,

0xf96c,	// (0x0007300d) main_myfav_hc_pane_g_ParamLimits

0xf96c,	// (0x0007300d) main_myfav_hc_pane_g

0xcb03,	// (0x000701a4) main_myfav_hc_pane_t1_ParamLimits

0xcb03,	// (0x000701a4) main_myfav_hc_pane_t1

0x54bd,	// (0x00068b5e) main_myfav_hc_pane_t2_ParamLimits

0x54bd,	// (0x00068b5e) main_myfav_hc_pane_t2

0x54cf,	// (0x00068b70) main_myfav_hc_pane_t3_ParamLimits

0x54cf,	// (0x00068b70) main_myfav_hc_pane_t3

0xcb1a,	// (0x000701bb) main_myfav_hc_pane_t4_ParamLimits

0xcb1a,	// (0x000701bb) main_myfav_hc_pane_t4

0x0004,

0xf973,	// (0x00073014) main_myfav_hc_pane_t_ParamLimits

0xf973,	// (0x00073014) main_myfav_hc_pane_t

0x49d7,	// (0x00068078) bg_myfav_hc_instruction_pane_g1

0x54e1,	// (0x00068b82) cell_myfav_contact_pane_g1_ParamLimits

0x54e1,	// (0x00068b82) cell_myfav_contact_pane_g1

0x54e1,	// (0x00068b82) cell_myfav_contact_pane_g2_ParamLimits

0x54e1,	// (0x00068b82) cell_myfav_contact_pane_g2

0x54ed,	// (0x00068b8e) cell_myfav_contact_pane_g3_ParamLimits

0x54ed,	// (0x00068b8e) cell_myfav_contact_pane_g3

0x4c9f,	// (0x00068340) cell_myfav_contact_pane_g4_ParamLimits

0x4c9f,	// (0x00068340) cell_myfav_contact_pane_g4

0x54fa,	// (0x00068b9b) cell_myfav_contact_pane_g5_ParamLimits

0x54fa,	// (0x00068b9b) cell_myfav_contact_pane_g5

0x0004,

0xf97e,	// (0x0007301f) cell_myfav_contact_pane_g_ParamLimits

0xf97e,	// (0x0007301f) cell_myfav_contact_pane_g

0xcaeb,	// (0x0007018c) main_myfav_hc_pane_g3_ParamLimits

0xcaeb,	// (0x0007018c) main_myfav_hc_pane_g3

0x79aa,	// (0x0006b04b) popup_adpt_find_window

0xcb44,	// (0x000701e5) afind_page_pane_ParamLimits

0xcb44,	// (0x000701e5) afind_page_pane

0xcb51,	// (0x000701f2) aid_size_cell_afind_ParamLimits

0xcb51,	// (0x000701f2) aid_size_cell_afind

0xcb6b,	// (0x0007020c) bg_popup_sub_pane_cp09_ParamLimits

0xcb6b,	// (0x0007020c) bg_popup_sub_pane_cp09

0xcb78,	// (0x00070219) find_pane_cp01_ParamLimits

0xcb78,	// (0x00070219) find_pane_cp01

0x5506,	// (0x00068ba7) grid_afind_control_pane_ParamLimits

0x5506,	// (0x00068ba7) grid_afind_control_pane

0xcb85,	// (0x00070226) grid_afind_pane_ParamLimits

0xcb85,	// (0x00070226) grid_afind_pane

0xcba1,	// (0x00070242) cell_afind_pane_ParamLimits

0xcba1,	// (0x00070242) cell_afind_pane

0x49d7,	// (0x00068078) afind_page_pane_g1

0xcbe9,	// (0x0007028a) afind_page_pane_g2

0xcbf2,	// (0x00070293) afind_page_pane_g3

0x0002,

0xf989,	// (0x0007302a) afind_page_pane_g

0xcbfb,	// (0x0007029c) afind_page_pane_t1

0x551a,	// (0x00068bbb) cell_afind_grid_control_pane_ParamLimits

0x551a,	// (0x00068bbb) cell_afind_grid_control_pane

0x52f0,	// (0x00068991) bg_button_pane_cp69_ParamLimits

0x52f0,	// (0x00068991) bg_button_pane_cp69

0xcc1b,	// (0x000702bc) cell_afind_pane_g1_ParamLimits

0xcc1b,	// (0x000702bc) cell_afind_pane_g1

0xcc28,	// (0x000702c9) cell_afind_pane_t1_ParamLimits

0xcc28,	// (0x000702c9) cell_afind_pane_t1

0x0ae5,	// (0x00064186) bg_button_pane_cp72

0x5529,	// (0x00068bca) cell_afind_grid_control_pane_g1

0xa2c9,	// (0x0006d96a) aid_image_placing_area_ParamLimits

0xa2c9,	// (0x0006d96a) aid_image_placing_area

0x4f98,	// (0x00068639) field_vitu_entry_pane_g1_ParamLimits

0x4f98,	// (0x00068639) field_vitu_entry_pane_g1

0x4fa4,	// (0x00068645) field_vitu_entry_pane_g2_ParamLimits

0x4fa4,	// (0x00068645) field_vitu_entry_pane_g2

0x0001,

0xf83a,	// (0x00072edb) field_vitu_entry_pane_g_ParamLimits

0xf83a,	// (0x00072edb) field_vitu_entry_pane_g

0xbdd3,	// (0x0006f474) cell_vitu_itu_pane_g1_ParamLimits

0xbe15,	// (0x0006f4b6) cell_vitu_itu_pane_t3_ParamLimits

0xbe15,	// (0x0006f4b6) cell_vitu_itu_pane_t3

0x5296,	// (0x00068937) mp4_progress_pane_t1_ParamLimits

0x52af,	// (0x00068950) mp4_progress_pane_t2_ParamLimits

0xf8cf,	// (0x00072f70) mp4_progress_pane_t_ParamLimits

0x52c8,	// (0x00068969) mup_progress_pane_cp04_ParamLimits

0xcb2e,	// (0x000701cf) main_myfav_hc_pane_t5_ParamLimits

0xcb2e,	// (0x000701cf) main_myfav_hc_pane_t5

0x669a,	// (0x00069d3b) aid_zoom_text_primary

0x79aa,	// (0x0006b04b) popup_adpt_find_window_ParamLimits

0x00a1,	// (0x00063742) main_cam_set_pane

0xc5c3,	// (0x0006fc64) cam4_zoom_pane_ParamLimits

0xc5c3,	// (0x0006fc64) cam4_zoom_pane

0xcc3a,	// (0x000702db) main_cam_set_pane_g1_ParamLimits

0xcc3a,	// (0x000702db) main_cam_set_pane_g1

0xcc48,	// (0x000702e9) main_cam_set_pane_g2_ParamLimits

0xcc48,	// (0x000702e9) main_cam_set_pane_g2

0x0001,

0xf990,	// (0x00073031) main_cam_set_pane_g_ParamLimits

0xf990,	// (0x00073031) main_cam_set_pane_g

0xcc54,	// (0x000702f5) main_cam_set_pane_t1_ParamLimits

0xcc54,	// (0x000702f5) main_cam_set_pane_t1

0xcc70,	// (0x00070311) main_cset_listscroll_pane_ParamLimits

0xcc70,	// (0x00070311) main_cset_listscroll_pane

0xcc9b,	// (0x0007033c) main_cset_slider_pane_ParamLimits

0xcc9b,	// (0x0007033c) main_cset_slider_pane

0x553a,	// (0x00068bdb) main_cset_list_pane_ParamLimits

0x553a,	// (0x00068bdb) main_cset_list_pane

0x554a,	// (0x00068beb) scroll_pane_cp028

0xccba,	// (0x0007035b) aid_area_touch_slider

0xccd6,	// (0x00070377) cset_slider_pane

0xcd00,	// (0x000703a1) main_cset_slider_pane_g1

0xcd15,	// (0x000703b6) main_cset_slider_pane_g2

0x0011,

0xf995,	// (0x00073036) main_cset_slider_pane_g

0x5583,	// (0x00068c24) main_cset_slider_pane_t1

0xcdd7,	// (0x00070478) main_cset_slider_pane_t2

0xcdf1,	// (0x00070492) main_cset_slider_pane_t3

0xce0b,	// (0x000704ac) main_cset_slider_pane_t4

0xce25,	// (0x000704c6) main_cset_slider_pane_t5

0xce43,	// (0x000704e4) main_cset_slider_pane_t6

0xce5a,	// (0x000704fb) main_cset_slider_pane_t7

0x000e,

0xf9ba,	// (0x0007305b) main_cset_slider_pane_t

0xcf66,	// (0x00070607) cset_list_set_pane_ParamLimits

0xcf66,	// (0x00070607) cset_list_set_pane

0xcf7c,	// (0x0007061d) aid_position_infowindow_above

0xcf84,	// (0x00070625) aid_position_infowindow_below

0xcf8c,	// (0x0007062d) cset_list_set_pane_g1_ParamLimits

0xcf8c,	// (0x0007062d) cset_list_set_pane_g1

0x6ad2,	// (0x0006a173) cset_list_set_pane_g3_ParamLimits

0x6ad2,	// (0x0006a173) cset_list_set_pane_g3

0x0001,

0xf9d9,	// (0x0007307a) cset_list_set_pane_g_ParamLimits

0xf9d9,	// (0x0007307a) cset_list_set_pane_g

0x6ae1,	// (0x0006a182) cset_list_set_pane_t1_ParamLimits

0x6ae1,	// (0x0006a182) cset_list_set_pane_t1

0x00a1,	// (0x00063742) list_highlight_pane_cp021_ParamLimits

0x00a1,	// (0x00063742) list_highlight_pane_cp021

0x15ca,	// (0x00064c6b) cset_slider_pane_g1

0x15dc,	// (0x00064c7d) cset_slider_pane_g2

0x15d3,	// (0x00064c74) cset_slider_pane_g3

0x0002,

0xf9de,	// (0x0007307f) cset_slider_pane_g

0xcf98,	// (0x00070639) aid_area_touch_cam4_zoom

0xcfa0,	// (0x00070641) cam4_zoom_cont_pane

0xcfa8,	// (0x00070649) cam4_zoom_pane_g1

0xcfb0,	// (0x00070651) cam4_zoom_pane_g2

0xcfb8,	// (0x00070659) cam4_zoom_pane_g3

0x0002,

0xf9e5,	// (0x00073086) cam4_zoom_pane_g

0xef7b,	// (0x0007261c) cam4_zoom_cont_pane_g1

0xef84,	// (0x00072625) cam4_zoom_cont_pane_g2

0xef8d,	// (0x0007262e) cam4_zoom_cont_pane_g3

0x0002,

0xf9ec,	// (0x0007308d) cam4_zoom_cont_pane_g

0xc4b0,	// (0x0006fb51) call4_image_pane_ParamLimits

0xc4b0,	// (0x0006fb51) call4_image_pane

0x52fc,	// (0x0006899d) call4_windows_conf_pane_ParamLimits

0x533d,	// (0x000689de) popup_call4_audio_in_window_ParamLimits

0x533d,	// (0x000689de) popup_call4_audio_in_window

0x77fc,	// (0x0006ae9d) bg_popup_call2_act_pane_cp02

0x53b3,	// (0x00068a54) call4_list_conf_pane

0x49d7,	// (0x00068078) call4_image_pane_g1

0x49d7,	// (0x00068078) call4_image_pane_g2

0x0001,

0xf700,	// (0x00072da1) call4_image_pane_g

0x5623,	// (0x00068cc4) list_single_graphic_popup_conf4_pane_ParamLimits

0x5623,	// (0x00068cc4) list_single_graphic_popup_conf4_pane

0x77fc,	// (0x0006ae9d) list_highlight_pane_cp022

0x5636,	// (0x00068cd7) list_single_graphic_popup_conf4_pane_g1

0x1289,	// (0x0006492a) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf9f3,	// (0x00073094) list_single_graphic_popup_conf4_pane_g

0x563e,	// (0x00068cdf) list_single_graphic_popup_conf4_pane_t1

0x88c7,	// (0x0006bf68) popup_vtel_slider_window_ParamLimits

0x88c7,	// (0x0006bf68) popup_vtel_slider_window

0x52de,	// (0x0006897f) dialer2_ne_pane_t2_ParamLimits

0x52de,	// (0x0006897f) dialer2_ne_pane_t2

0x0001,

0xf8d4,	// (0x00072f75) dialer2_ne_pane_t_ParamLimits

0xf8d4,	// (0x00072f75) dialer2_ne_pane_t

0x00a1,	// (0x00063742) bg_popup_sub_pane_cp010_ParamLimits

0x00a1,	// (0x00063742) bg_popup_sub_pane_cp010

0xcfc0,	// (0x00070661) popup_vtel_slider_window_g1_ParamLimits

0xcfc0,	// (0x00070661) popup_vtel_slider_window_g1

0xcfcc,	// (0x0007066d) popup_vtel_slider_window_g2_ParamLimits

0xcfcc,	// (0x0007066d) popup_vtel_slider_window_g2

0x0003,

0xf9f8,	// (0x00073099) popup_vtel_slider_window_g_ParamLimits

0xf9f8,	// (0x00073099) popup_vtel_slider_window_g

0xd014,	// (0x000706b5) vtel_slider_pane_ParamLimits

0xd014,	// (0x000706b5) vtel_slider_pane

0xd023,	// (0x000706c4) vtel_slider_pane_g1_ParamLimits

0xd023,	// (0x000706c4) vtel_slider_pane_g1

0xd030,	// (0x000706d1) vtel_slider_pane_g2_ParamLimits

0xd030,	// (0x000706d1) vtel_slider_pane_g2

0xd03d,	// (0x000706de) vtel_slider_pane_g3_ParamLimits

0xd03d,	// (0x000706de) vtel_slider_pane_g3

0xd023,	// (0x000706c4) vtel_slider_pane_g4_ParamLimits

0xd023,	// (0x000706c4) vtel_slider_pane_g4

0xd04a,	// (0x000706eb) vtel_slider_pane_g5_ParamLimits

0xd04a,	// (0x000706eb) vtel_slider_pane_g5

0x0004,

0xfa01,	// (0x000730a2) vtel_slider_pane_g_ParamLimits

0xfa01,	// (0x000730a2) vtel_slider_pane_g

0x77fc,	// (0x0006ae9d) main_gallery2_pane

0xc810,	// (0x0006feb1) aid_size_row_itut2_dropdow_list_ParamLimits

0xc810,	// (0x0006feb1) aid_size_row_itut2_dropdow_list

0xc870,	// (0x0006ff11) grid_vitu2_function_top_pane_ParamLimits

0xc870,	// (0x0006ff11) grid_vitu2_function_top_pane

0xc8c6,	// (0x0006ff67) popup_vitu2_dropdown_list_window_ParamLimits

0xc8c6,	// (0x0006ff67) popup_vitu2_dropdown_list_window

0xc8e6,	// (0x0006ff87) popup_vitu2_match_list_window

0xd057,	// (0x000706f8) cell_vitu2_function_top_pane_ParamLimits

0xd057,	// (0x000706f8) cell_vitu2_function_top_pane

0xd077,	// (0x00070718) cell_vitu2_function_top_pane_cp01_ParamLimits

0xd077,	// (0x00070718) cell_vitu2_function_top_pane_cp01

0xd095,	// (0x00070736) cell_vitu2_function_top_wide_pane_ParamLimits

0xd095,	// (0x00070736) cell_vitu2_function_top_wide_pane

0x00a1,	// (0x00063742) bg_button_pane_cp012

0xd0b3,	// (0x00070754) cell_vitu2_function_top_pane_g1

0xd0c2,	// (0x00070763) bg_button_pane_cp013_ParamLimits

0xd0c2,	// (0x00070763) bg_button_pane_cp013

0xd0de,	// (0x0007077f) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0xd0de,	// (0x0007077f) cell_vitu2_function_top_wide_pane_g1

0x7a8d,	// (0x0006b12e) bg_popup_sub_pane_cp20

0xd0f6,	// (0x00070797) list_vitu2_match_list_pane

0x5430,	// (0x00068ad1) bg_popup_sub_pane_cp20_g1

0x5438,	// (0x00068ad9) bg_popup_sub_pane_cp20_g2

0x0cea,	// (0x0006438b) bg_popup_sub_pane_cp20_g3

0x5440,	// (0x00068ae1) bg_popup_sub_pane_cp20_g4

0x0cca,	// (0x0006436b) bg_popup_sub_pane_cp20_g5

0x5654,	// (0x00068cf5) bg_popup_sub_pane_cp20_g6

0x5450,	// (0x00068af1) bg_popup_sub_pane_cp20_g7

0x5458,	// (0x00068af9) bg_popup_sub_pane_cp20_g8

0x5460,	// (0x00068b01) bg_popup_sub_pane_cp20_g9

0x0008,

0xfa0c,	// (0x000730ad) bg_popup_sub_pane_cp20_g

0xd10e,	// (0x000707af) list_vitu2_match_list_item_pane_ParamLimits

0xd10e,	// (0x000707af) list_vitu2_match_list_item_pane

0xd120,	// (0x000707c1) list_vitu2_match_list_item_pane_t1

0x77fc,	// (0x0006ae9d) bg_popup_sub_pane_cp21

0x113e,	// (0x000647df) grid_vitu2_dropdown_list_pane

0xd12e,	// (0x000707cf) cell_vitu2_dropdown_list_char_pane_ParamLimits

0xd12e,	// (0x000707cf) cell_vitu2_dropdown_list_char_pane

0xd14f,	// (0x000707f0) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0xd14f,	// (0x000707f0) cell_vitu2_dropdown_list_ctrl_pane

0x566e,	// (0x00068d0f) cell_vitu2_dropdown_list_char_pane_g1

0x5665,	// (0x00068d06) cell_vitu2_dropdown_list_char_pane_g2

0x565c,	// (0x00068cfd) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xfa29,	// (0x000730ca) cell_vitu2_dropdown_list_char_pane_g

0xd17b,	// (0x0007081c) cell_vitu2_dropdown_list_char_pane_t1

0xd189,	// (0x0007082a) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0xd189,	// (0x0007082a) cell_vitu2_dropdown_list_ctrl_pane_g1

0xd199,	// (0x0007083a) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0xd199,	// (0x0007083a) cell_vitu2_dropdown_list_ctrl_pane_g2

0xd1aa,	// (0x0007084b) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0xd1aa,	// (0x0007084b) cell_vitu2_dropdown_list_ctrl_pane_g3

0xd1ba,	// (0x0007085b) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0xd1ba,	// (0x0007085b) cell_vitu2_dropdown_list_ctrl_pane_g4

0x4c3a,	// (0x000682db) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0x4c3a,	// (0x000682db) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa30,	// (0x000730d1) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa30,	// (0x000730d1) cell_vitu2_dropdown_list_ctrl_pane_g

0xd1d6,	// (0x00070877) aid_size_cell_gallery2_ParamLimits

0xd1d6,	// (0x00070877) aid_size_cell_gallery2

0xd1e4,	// (0x00070885) grid_gallery2_pane_ParamLimits

0xd1e4,	// (0x00070885) grid_gallery2_pane

0xd1f3,	// (0x00070894) scroll_pane_cp029_ParamLimits

0xd1f3,	// (0x00070894) scroll_pane_cp029

0xd1ff,	// (0x000708a0) cell_gallery2_pane_ParamLimits

0xd1ff,	// (0x000708a0) cell_gallery2_pane

0x5677,	// (0x00068d18) cell_gallery2_pane_g2

0x3ba5,	// (0x00067246) cell_gallery2_pane_g3

0x5681,	// (0x00068d22) cell_gallery2_pane_g4

0x5689,	// (0x00068d2a) cell_gallery2_pane_g5

0x1474,	// (0x00064b15) grid_highlight_pane_cp10

0xc8e6,	// (0x0006ff87) popup_vitu2_match_list_window_ParamLimits

0xc8fa,	// (0x0006ff9b) popup_vitu2_query_window_ParamLimits

0xc8fa,	// (0x0006ff9b) popup_vitu2_query_window

0x77fc,	// (0x0006ae9d) bg_vitu2_candi_button_pane

0x566e,	// (0x00068d0f) cell_vitu2_dropdown_list_char_pane_g1_copy1

0x5665,	// (0x00068d06) cell_vitu2_dropdown_list_char_pane_g2_copy1

0x565c,	// (0x00068cfd) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x6b4b,	// (0x0006a1ec) bg_button_pane_cp015

0xd22d,	// (0x000708ce) bg_button_pane_cp016

0xd240,	// (0x000708e1) bg_button_pane_cp017

0x28b6,	// (0x00065f57) bg_popup_sub_pane_cp22

0x5691,	// (0x00068d32) popup_vitu2_query_window_g1

0x6b7e,	// (0x0006a21f) popup_vitu2_query_window_g2

0x0002,

0xfa3b,	// (0x000730dc) popup_vitu2_query_window_g

0x6b9b,	// (0x0006a23c) popup_vitu2_query_window_t1_ParamLimits

0x6b9b,	// (0x0006a23c) popup_vitu2_query_window_t1

0x6bce,	// (0x0006a26f) popup_vitu2_query_window_t2_ParamLimits

0x6bce,	// (0x0006a26f) popup_vitu2_query_window_t2

0x6be0,	// (0x0006a281) popup_vitu2_query_window_t3_ParamLimits

0x6be0,	// (0x0006a281) popup_vitu2_query_window_t3

0xd264,	// (0x00070905) popup_vitu2_query_window_t4_ParamLimits

0xd264,	// (0x00070905) popup_vitu2_query_window_t4

0xd285,	// (0x00070926) popup_vitu2_query_window_t5_ParamLimits

0xd285,	// (0x00070926) popup_vitu2_query_window_t5

0x0006,

0xfa42,	// (0x000730e3) popup_vitu2_query_window_t_ParamLimits

0xfa42,	// (0x000730e3) popup_vitu2_query_window_t

0x5532,	// (0x00068bd3) main_cset_text_pane

0xccba,	// (0x0007035b) aid_area_touch_slider_ParamLimits

0xccd6,	// (0x00070377) cset_slider_pane_ParamLimits

0xcd00,	// (0x000703a1) main_cset_slider_pane_g1_ParamLimits

0xcd15,	// (0x000703b6) main_cset_slider_pane_g2_ParamLimits

0x5553,	// (0x00068bf4) main_cset_slider_pane_g3_ParamLimits

0x5553,	// (0x00068bf4) main_cset_slider_pane_g3

0xcd2a,	// (0x000703cb) main_cset_slider_pane_g4_ParamLimits

0xcd2a,	// (0x000703cb) main_cset_slider_pane_g4

0xcd39,	// (0x000703da) main_cset_slider_pane_g5_ParamLimits

0xcd39,	// (0x000703da) main_cset_slider_pane_g5

0xcd47,	// (0x000703e8) main_cset_slider_pane_g6_ParamLimits

0xcd47,	// (0x000703e8) main_cset_slider_pane_g6

0xf995,	// (0x00073036) main_cset_slider_pane_g_ParamLimits

0x5583,	// (0x00068c24) main_cset_slider_pane_t1_ParamLimits

0xcdd7,	// (0x00070478) main_cset_slider_pane_t2_ParamLimits

0xcdf1,	// (0x00070492) main_cset_slider_pane_t3_ParamLimits

0xce0b,	// (0x000704ac) main_cset_slider_pane_t4_ParamLimits

0xce25,	// (0x000704c6) main_cset_slider_pane_t5_ParamLimits

0xce43,	// (0x000704e4) main_cset_slider_pane_t6_ParamLimits

0xce5a,	// (0x000704fb) main_cset_slider_pane_t7_ParamLimits

0xce88,	// (0x00070529) main_cset_slider_pane_t8_ParamLimits

0xce88,	// (0x00070529) main_cset_slider_pane_t8

0xceb0,	// (0x00070551) main_cset_slider_pane_t9_ParamLimits

0xceb0,	// (0x00070551) main_cset_slider_pane_t9

0xced8,	// (0x00070579) main_cset_slider_pane_t10_ParamLimits

0xced8,	// (0x00070579) main_cset_slider_pane_t10

0xcf00,	// (0x000705a1) main_cset_slider_pane_t11_ParamLimits

0xcf00,	// (0x000705a1) main_cset_slider_pane_t11

0xcf2a,	// (0x000705cb) main_cset_slider_pane_t12_ParamLimits

0xcf2a,	// (0x000705cb) main_cset_slider_pane_t12

0xcf47,	// (0x000705e8) main_cset_slider_pane_t13_ParamLimits

0xcf47,	// (0x000705e8) main_cset_slider_pane_t13

0xf9ba,	// (0x0007305b) main_cset_slider_pane_t_ParamLimits

0x77fc,	// (0x0006ae9d) bg_popup_sub_pane_cp011

0x569d,	// (0x00068d3e) main_cset_text_pane_g1

0x56a5,	// (0x00068d46) main_cset_text_pane_t1

0x56b3,	// (0x00068d54) main_cset_text_pane_t2

0x56c1,	// (0x00068d62) main_cset_text_pane_t3

0x56cf,	// (0x00068d70) main_cset_text_pane_t4

0x56dd,	// (0x00068d7e) main_cset_text_pane_t5

0x56eb,	// (0x00068d8c) main_cset_text_pane_t6

0x56f9,	// (0x00068d9a) main_cset_text_pane_t7

0x0006,

0xfa51,	// (0x000730f2) main_cset_text_pane_t

0x77fc,	// (0x0006ae9d) main_cam4_burst_pane

0x77fc,	// (0x0006ae9d) main_cam5_pane

0xcc09,	// (0x000702aa) bg_button_pane_cp019

0xcc12,	// (0x000702b3) bg_button_pane_cp020

0x555f,	// (0x00068c00) main_cset_slider_pane_g7_ParamLimits

0x555f,	// (0x00068c00) main_cset_slider_pane_g7

0x556b,	// (0x00068c0c) main_cset_slider_pane_g8_ParamLimits

0x556b,	// (0x00068c0c) main_cset_slider_pane_g8

0xcd5b,	// (0x000703fc) main_cset_slider_pane_g9_ParamLimits

0xcd5b,	// (0x000703fc) main_cset_slider_pane_g9

0xcd67,	// (0x00070408) main_cset_slider_pane_g10_ParamLimits

0xcd67,	// (0x00070408) main_cset_slider_pane_g10

0xcd73,	// (0x00070414) main_cset_slider_pane_g11_ParamLimits

0xcd73,	// (0x00070414) main_cset_slider_pane_g11

0xcd7f,	// (0x00070420) main_cset_slider_pane_g12_ParamLimits

0xcd7f,	// (0x00070420) main_cset_slider_pane_g12

0xcd8b,	// (0x0007042c) main_cset_slider_pane_g13_ParamLimits

0xcd8b,	// (0x0007042c) main_cset_slider_pane_g13

0xcd97,	// (0x00070438) main_cset_slider_pane_g14_ParamLimits

0xcd97,	// (0x00070438) main_cset_slider_pane_g14

0xcda3,	// (0x00070444) main_cset_slider_pane_g15_ParamLimits

0xcda3,	// (0x00070444) main_cset_slider_pane_g15

0x55b1,	// (0x00068c52) main_cset_slider_pane_t14_ParamLimits

0x55b1,	// (0x00068c52) main_cset_slider_pane_t14

0x55ea,	// (0x00068c8b) main_cset_slider_pane_t15_ParamLimits

0x55ea,	// (0x00068c8b) main_cset_slider_pane_t15

0xd2a6,	// (0x00070947) aid_cam4_burst_size_cell_ParamLimits

0xd2a6,	// (0x00070947) aid_cam4_burst_size_cell

0xd2c2,	// (0x00070963) grid_cam4_burst_pane_ParamLimits

0xd2c2,	// (0x00070963) grid_cam4_burst_pane

0xd2f2,	// (0x00070993) linegrid_cam4_burst_pane_ParamLimits

0xd2f2,	// (0x00070993) linegrid_cam4_burst_pane

0xd312,	// (0x000709b3) scroll_pane_cp30_ParamLimits

0xd312,	// (0x000709b3) scroll_pane_cp30

0xd31e,	// (0x000709bf) cell_cam4_burst_pane_ParamLimits

0xd31e,	// (0x000709bf) cell_cam4_burst_pane

0x5707,	// (0x00068da8) linegrid_cam4_burst_pane_g1_ParamLimits

0x5707,	// (0x00068da8) linegrid_cam4_burst_pane_g1

0xd35a,	// (0x000709fb) linegrid_cam4_burst_pane_g2_ParamLimits

0xd35a,	// (0x000709fb) linegrid_cam4_burst_pane_g2

0x5714,	// (0x00068db5) linegrid_cam4_burst_pane_g3_ParamLimits

0x5714,	// (0x00068db5) linegrid_cam4_burst_pane_g3

0x0002,

0xfa60,	// (0x00073101) linegrid_cam4_burst_pane_g_ParamLimits

0xfa60,	// (0x00073101) linegrid_cam4_burst_pane_g

0xd36b,	// (0x00070a0c) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0xd36b,	// (0x00070a0c) linegrid_cam4_burst_pane_g3_copy1

0x5721,	// (0x00068dc2) linegrid_cam4_burst_pane_g4_ParamLimits

0x5721,	// (0x00068dc2) linegrid_cam4_burst_pane_g4

0xd385,	// (0x00070a26) linegrid_cam4_burst_pane_g5_ParamLimits

0xd385,	// (0x00070a26) linegrid_cam4_burst_pane_g5

0xd396,	// (0x00070a37) linegrid_cam4_burst_pane_g6_ParamLimits

0xd396,	// (0x00070a37) linegrid_cam4_burst_pane_g6

0x572e,	// (0x00068dcf) linegrid_cam4_burst_pane_g7_ParamLimits

0x572e,	// (0x00068dcf) linegrid_cam4_burst_pane_g7

0xd3a7,	// (0x00070a48) cell_cam4_burst_pane_g1

0x5747,	// (0x00068de8) main_cam5_pane_t1_ParamLimits

0x5747,	// (0x00068de8) main_cam5_pane_t1

0x5759,	// (0x00068dfa) main_cam5_pane_t2_ParamLimits

0x5759,	// (0x00068dfa) main_cam5_pane_t2

0x576b,	// (0x00068e0c) main_cam5_pane_t3_ParamLimits

0x576b,	// (0x00068e0c) main_cam5_pane_t3

0x577d,	// (0x00068e1e) main_cam5_pane_t4_ParamLimits

0x577d,	// (0x00068e1e) main_cam5_pane_t4

0x5795,	// (0x00068e36) main_cam5_pane_t5_ParamLimits

0x5795,	// (0x00068e36) main_cam5_pane_t5

0x57a9,	// (0x00068e4a) main_cam5_pane_t6_ParamLimits

0x57a9,	// (0x00068e4a) main_cam5_pane_t6

0x57bd,	// (0x00068e5e) main_cam5_pane_t7_ParamLimits

0x57bd,	// (0x00068e5e) main_cam5_pane_t7

0x57cf,	// (0x00068e70) main_cam5_pane_t8_ParamLimits

0x57cf,	// (0x00068e70) main_cam5_pane_t8

0x57eb,	// (0x00068e8c) main_cam5_pane_t9_ParamLimits

0x57eb,	// (0x00068e8c) main_cam5_pane_t9

0x57fd,	// (0x00068e9e) main_cam5_pane_t10_ParamLimits

0x57fd,	// (0x00068e9e) main_cam5_pane_t10

0x580f,	// (0x00068eb0) main_cam5_pane_t11_ParamLimits

0x580f,	// (0x00068eb0) main_cam5_pane_t11

0x5821,	// (0x00068ec2) main_cam5_pane_t12_ParamLimits

0x5821,	// (0x00068ec2) main_cam5_pane_t12

0x5836,	// (0x00068ed7) main_cam5_pane_t13_ParamLimits

0x5836,	// (0x00068ed7) main_cam5_pane_t13

0x000c,

0xfa6c,	// (0x0007310d) main_cam5_pane_t_ParamLimits

0xfa6c,	// (0x0007310d) main_cam5_pane_t

0x7a56,	// (0x0006b0f7) popup_scut_keymap_window_ParamLimits

0x7a56,	// (0x0006b0f7) popup_scut_keymap_window

0xd3ba,	// (0x00070a5b) aid_size_cell_brow_shortcut

0x1474,	// (0x00064b15) bg_popup_window_pane_cp010

0xd3c6,	// (0x00070a67) grid_scut_pane

0xd3d2,	// (0x00070a73) cell_scut_pane_ParamLimits

0xd3d2,	// (0x00070a73) cell_scut_pane

0xd3e9,	// (0x00070a8a) cell_scut_pane_g1

0x5853,	// (0x00068ef4) cell_scut_pane_t1

0x5862,	// (0x00068f03) cell_scut_pane_t2

0xd3f2,	// (0x00070a93) cell_scut_pane_t3

0x0002,

0xfa87,	// (0x00073128) cell_scut_pane_t

0xb471,	// (0x0006eb12) main_mup3_pane_g8_ParamLimits

0xb471,	// (0x0006eb12) main_mup3_pane_g8

0xc81e,	// (0x0006febf) area_vitu2_query_pane_ParamLimits

0xc81e,	// (0x0006febf) area_vitu2_query_pane

0x6b5d,	// (0x0006a1fe) input_focus_pane_cp08

0x5871,	// (0x00068f12) area_vitu2_query_pane_g1

0x6c5e,	// (0x0006a2ff) area_vitu2_query_pane_g2

0x0001,

0xfa8e,	// (0x0007312f) area_vitu2_query_pane_g

0xd400,	// (0x00070aa1) area_vitu2_query_pane_t1_ParamLimits

0xd400,	// (0x00070aa1) area_vitu2_query_pane_t1

0xd414,	// (0x00070ab5) area_vitu2_query_pane_t2_ParamLimits

0xd414,	// (0x00070ab5) area_vitu2_query_pane_t2

0x6c6f,	// (0x0006a310) area_vitu2_query_pane_t3_ParamLimits

0x6c6f,	// (0x0006a310) area_vitu2_query_pane_t3

0x6c97,	// (0x0006a338) area_vitu2_query_pane_t4_ParamLimits

0x6c97,	// (0x0006a338) area_vitu2_query_pane_t4

0x6cbf,	// (0x0006a360) area_vitu2_query_pane_t5_ParamLimits

0x6cbf,	// (0x0006a360) area_vitu2_query_pane_t5

0x6ce7,	// (0x0006a388) area_vitu2_query_pane_t6_ParamLimits

0x6ce7,	// (0x0006a388) area_vitu2_query_pane_t6

0x0006,

0xfa93,	// (0x00073134) area_vitu2_query_pane_t_ParamLimits

0xfa93,	// (0x00073134) area_vitu2_query_pane_t

0xd428,	// (0x00070ac9) bg_button_pane_cp018

0xd436,	// (0x00070ad7) bg_button_pane_cp021

0x6d33,	// (0x0006a3d4) bg_button_pane_cp022

0x6d44,	// (0x0006a3e5) input_focus_pane_cp09

0x99cf,	// (0x0006d070) aid_size_touch_mv_arrow_left

0x99f8,	// (0x0006d099) aid_size_touch_mv_arrow_right

0xcdbb,	// (0x0007045c) main_cset_slider_pane_g16_ParamLimits

0xcdbb,	// (0x0007045c) main_cset_slider_pane_g16

0xcdc9,	// (0x0007046a) main_cset_slider_pane_g17_ParamLimits

0xcdc9,	// (0x0007046a) main_cset_slider_pane_g17

0xd3a7,	// (0x00070a48) cell_cam4_burst_pane_g1_ParamLimits

0x77fc,	// (0x0006ae9d) compa_mode_pane

0xcfd8,	// (0x00070679) popup_vtel_slider_window_g3_ParamLimits

0xcfd8,	// (0x00070679) popup_vtel_slider_window_g3

0xcfec,	// (0x0007068d) popup_vtel_slider_window_g4_ParamLimits

0xcfec,	// (0x0007068d) popup_vtel_slider_window_g4

0xd000,	// (0x000706a1) popup_vtel_slider_window_t1_ParamLimits

0xd000,	// (0x000706a1) popup_vtel_slider_window_t1

0x77fc,	// (0x0006ae9d) main_cl_pane

0x28de,	// (0x00065f7f) popup_imed_adjust2_window_ParamLimits

0x28b6,	// (0x00065f57) bg_tb_trans_pane_cp05_ParamLimits

0x4ecd,	// (0x0006856e) popup_imed_adjust2_window_g1_ParamLimits

0x4edc,	// (0x0006857d) popup_imed_adjust2_window_g2_ParamLimits

0x4edc,	// (0x0006857d) popup_imed_adjust2_window_g2

0x4ee8,	// (0x00068589) popup_imed_adjust2_window_g3_ParamLimits

0x4ee8,	// (0x00068589) popup_imed_adjust2_window_g3

0x0002,

0xf7fe,	// (0x00072e9f) popup_imed_adjust2_window_g_ParamLimits

0xf7fe,	// (0x00072e9f) popup_imed_adjust2_window_g

0x4ef4,	// (0x00068595) popup_imed_adjust2_window_t1_ParamLimits

0x4f0c,	// (0x000685ad) slider_imed_adjust_pane_ParamLimits

0x4f20,	// (0x000685c1) slider_imed_adjust_pane_g1_ParamLimits

0x4f30,	// (0x000685d1) slider_imed_adjust_pane_g2_ParamLimits

0x4f40,	// (0x000685e1) slider_imed_adjust_pane_g3_ParamLimits

0x4f51,	// (0x000685f2) slider_imed_adjust_pane_g4_ParamLimits

0xf805,	// (0x00072ea6) slider_imed_adjust_pane_g_ParamLimits

0xc56c,	// (0x0006fc0d) aid_touch_area_cam4_ParamLimits

0xc56c,	// (0x0006fc0d) aid_touch_area_cam4

0xc57c,	// (0x0006fc1d) battery_pane_cp01

0xc603,	// (0x0006fca4) main_camera4_pane_g6_ParamLimits

0xc603,	// (0x0006fca4) main_camera4_pane_g6

0xc621,	// (0x0006fcc2) main_camera4_pane_t2_ParamLimits

0xc621,	// (0x0006fcc2) main_camera4_pane_t2

0x0001,

0xf908,	// (0x00072fa9) main_camera4_pane_t_ParamLimits

0xf908,	// (0x00072fa9) main_camera4_pane_t

0xc6a8,	// (0x0006fd49) aid_touch_area_vid4_ParamLimits

0xc6a8,	// (0x0006fd49) aid_touch_area_vid4

0xc6e8,	// (0x0006fd89) main_video4_pane_g5_ParamLimits

0xc6e8,	// (0x0006fd89) main_video4_pane_g5

0xc70a,	// (0x0006fdab) vid4_progress_pane_ParamLimits

0xc70a,	// (0x0006fdab) vid4_progress_pane

0x5577,	// (0x00068c18) main_cset_slider_pane_g18_ParamLimits

0x5577,	// (0x00068c18) main_cset_slider_pane_g18

0x573b,	// (0x00068ddc) cell_cam4_burst_pane_g2_ParamLimits

0x573b,	// (0x00068ddc) cell_cam4_burst_pane_g2

0x0001,

0xfa67,	// (0x00073108) cell_cam4_burst_pane_g_ParamLimits

0xfa67,	// (0x00073108) cell_cam4_burst_pane_g

0xd442,	// (0x00070ae3) bg_cl_pane_ParamLimits

0xd442,	// (0x00070ae3) bg_cl_pane

0xd44e,	// (0x00070aef) cl_header_pane_ParamLimits

0xd44e,	// (0x00070aef) cl_header_pane

0xd45a,	// (0x00070afb) cl_listscroll_pane_ParamLimits

0xd45a,	// (0x00070afb) cl_listscroll_pane

0x587d,	// (0x00068f1e) bg_cl_pane_g1

0x5885,	// (0x00068f26) bg_cl_pane_g2

0x588d,	// (0x00068f2e) bg_cl_pane_g3

0x5895,	// (0x00068f36) bg_cl_pane_g4

0x589d,	// (0x00068f3e) bg_cl_pane_g5

0x58a5,	// (0x00068f46) bg_cl_pane_g6

0x58cb,	// (0x00068f6c) bg_cl_pane_g7

0x58d3,	// (0x00068f74) bg_cl_pane_g8

0x58db,	// (0x00068f7c) bg_cl_pane_g9

0x0008,

0xfaa2,	// (0x00073143) bg_cl_pane_g

0xd466,	// (0x00070b07) aid_height_cl_leading_ParamLimits

0xd466,	// (0x00070b07) aid_height_cl_leading

0xd472,	// (0x00070b13) aid_height_cl_text_ParamLimits

0xd472,	// (0x00070b13) aid_height_cl_text

0x7a8d,	// (0x0006b12e) bg_cl_header_pane_ParamLimits

0x7a8d,	// (0x0006b12e) bg_cl_header_pane

0xd48a,	// (0x00070b2b) cl_header_pane_g1_ParamLimits

0xd48a,	// (0x00070b2b) cl_header_pane_g1

0xd497,	// (0x00070b38) cl_header_pane_t1_ParamLimits

0xd497,	// (0x00070b38) cl_header_pane_t1

0x58e3,	// (0x00068f84) cl_list_pane

0x554a,	// (0x00068beb) hc_scroll_pane_cp01

0x0cca,	// (0x0006436b) bg_cl_header_pane_g1

0x5430,	// (0x00068ad1) bg_cl_header_pane_g2

0x0cea,	// (0x0006438b) bg_cl_header_pane_g3

0x5440,	// (0x00068ae1) bg_cl_header_pane_g4

0x5438,	// (0x00068ad9) bg_cl_header_pane_g5

0x5654,	// (0x00068cf5) bg_cl_header_pane_g6

0x5458,	// (0x00068af9) bg_cl_header_pane_g7

0x5460,	// (0x00068b01) bg_cl_header_pane_g8

0x5450,	// (0x00068af1) bg_cl_header_pane_g9

0x0008,

0xfab5,	// (0x00073156) bg_cl_header_pane_g

0xd4a9,	// (0x00070b4a) hc_cl_list_double_graphic_heading_pane_ParamLimits

0xd4a9,	// (0x00070b4a) hc_cl_list_double_graphic_heading_pane

0xd4ba,	// (0x00070b5b) hc_cl_list_single_graphic_pane_ParamLimits

0xd4ba,	// (0x00070b5b) hc_cl_list_single_graphic_pane

0xd4d3,	// (0x00070b74) hc_cl_list_single_graphic_pane_g1_ParamLimits

0xd4d3,	// (0x00070b74) hc_cl_list_single_graphic_pane_g1

0xd4df,	// (0x00070b80) hc_cl_list_single_graphic_pane_g2_ParamLimits

0xd4df,	// (0x00070b80) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfac8,	// (0x00073169) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfac8,	// (0x00073169) hc_cl_list_single_graphic_pane_g

0xd4f3,	// (0x00070b94) hc_cl_list_single_graphic_pane_t1_ParamLimits

0xd4f3,	// (0x00070b94) hc_cl_list_single_graphic_pane_t1

0xd4d3,	// (0x00070b74) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0xd4d3,	// (0x00070b74) hc_cl_list_double_graphic_heading_pane_g1

0xd508,	// (0x00070ba9) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0xd508,	// (0x00070ba9) hc_cl_list_double_graphic_heading_pane_g2

0xd51c,	// (0x00070bbd) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0xd51c,	// (0x00070bbd) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfacd,	// (0x0007316e) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfacd,	// (0x0007316e) hc_cl_list_double_graphic_heading_pane_g

0xd530,	// (0x00070bd1) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0xd530,	// (0x00070bd1) hc_cl_list_double_graphic_heading_pane_t1

0xd545,	// (0x00070be6) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0xd545,	// (0x00070be6) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfad4,	// (0x00073175) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfad4,	// (0x00073175) hc_cl_list_double_graphic_heading_pane_t

0xd562,	// (0x00070c03) vid4_progress_pane_g1

0xd572,	// (0x00070c13) vid4_progress_pane_g2

0xa01b,	// (0x0006d6bc) vid4_progress_pane_g3

0xd582,	// (0x00070c23) vid4_progress_pane_g4

0x0004,

0xfad9,	// (0x0007317a) vid4_progress_pane_g

0xd5a0,	// (0x00070c41) vid4_progress_pane_t1

0xd5b5,	// (0x00070c56) vid4_progress_pane_t2

0x0002,

0xfae4,	// (0x00073185) vid4_progress_pane_t

0xd5e0,	// (0x00070c81) wait_bar_pane_cp07

0x47c1,	// (0x00067e62) blid_firmament_pane_ParamLimits

0x480d,	// (0x00067eae) popup_blid_sat_info2_window_g1

0x4831,	// (0x00067ed2) popup_blid_sat_info2_window_t3

0x483f,	// (0x00067ee0) popup_blid_sat_info2_window_t4

0x484d,	// (0x00067eee) popup_blid_sat_info2_window_t5

0x485b,	// (0x00067efc) popup_blid_sat_info2_window_t6

0x486b,	// (0x00067f0c) popup_blid_sat_info2_window_t7

0x4879,	// (0x00067f1a) popup_blid_sat_info2_window_t8

0x4887,	// (0x00067f28) popup_blid_sat_info2_window_t9

0x4895,	// (0x00067f36) popup_blid_sat_info2_window_t10

0x4957,	// (0x00067ff8) aid_firma_cardinal_ParamLimits

0x496b,	// (0x0006800c) blid_firmament_pane_t1_ParamLimits

0x4982,	// (0x00068023) blid_firmament_pane_t2_ParamLimits

0x4999,	// (0x0006803a) blid_firmament_pane_t3_ParamLimits

0x49b0,	// (0x00068051) blid_firmament_pane_t4_ParamLimits

0xf6f7,	// (0x00072d98) blid_firmament_pane_t_ParamLimits

0x49c7,	// (0x00068068) blid_sat_info_pane_ParamLimits

0x00a1,	// (0x00063742) main_cam_set_pane_ParamLimits

0xbbf6,	// (0x0006f297) aid_size_cell_colour_35_ParamLimits

0xbc10,	// (0x0006f2b1) aid_size_cell_colour_112_ParamLimits

0xbc27,	// (0x0006f2c8) aid_size_cell_effect_ParamLimits

0x00a1,	// (0x00063742) bg_tb_trans_pane_cp02_ParamLimits

0x0feb,	// (0x0006468c) heading_imed_pane_ParamLimits

0xbc41,	// (0x0006f2e2) listscroll_imed_pane_ParamLimits

0x1ee8,	// (0x00065589) popup_call2_audio_first_window_g5_ParamLimits

0x1ee8,	// (0x00065589) popup_call2_audio_first_window_g5

0xc329,	// (0x0006f9ca) aid_size_touch_image3_arrow_left_ParamLimits

0xc329,	// (0x0006f9ca) aid_size_touch_image3_arrow_left

0xc33f,	// (0x0006f9e0) aid_size_touch_image3_arrow_right_ParamLimits

0xc33f,	// (0x0006f9e0) aid_size_touch_image3_arrow_right

0xd5cb,	// (0x00070c6c) vid4_progress_pane_t3

0xbede,	// (0x0006f57f) main_hwr_training_symbol_option_pane_ParamLimits

0xbede,	// (0x0006f57f) main_hwr_training_symbol_option_pane

0x51ba,	// (0x0006885b) popup_hwr_training_preview_window_ParamLimits

0x51ba,	// (0x0006885b) popup_hwr_training_preview_window

0xbf3f,	// (0x0006f5e0) hwr_training_navi_pane_g5_ParamLimits

0xbf3f,	// (0x0006f5e0) hwr_training_navi_pane_g5

0x541e,	// (0x00068abf) popup_char_count_window

0x7a8d,	// (0x0006b12e) bg_popup_sub_pane_cp20_ParamLimits

0xd0f6,	// (0x00070797) list_vitu2_match_list_pane_ParamLimits

0xd102,	// (0x000707a3) vitu2_page_scroll_pane_ParamLimits

0xd102,	// (0x000707a3) vitu2_page_scroll_pane

0x58ec,	// (0x00068f8d) list_single_hwr_training_symbol_option_pane_ParamLimits

0x58ec,	// (0x00068f8d) list_single_hwr_training_symbol_option_pane

0x58ff,	// (0x00068fa0) list_single_hwr_training_symbol_option_pane_g1

0x5907,	// (0x00068fa8) list_single_hwr_training_symbol_option_pane_t1

0x5915,	// (0x00068fb6) bg_button_pane_cp023

0x591e,	// (0x00068fbf) bg_button_pane_cp024

0xd5fa,	// (0x00070c9b) vitu2_page_scroll_pane_g1

0xd602,	// (0x00070ca3) vitu2_page_scroll_pane_g2

0x0001,

0xfaeb,	// (0x0007318c) vitu2_page_scroll_pane_g

0xd60a,	// (0x00070cab) vitu2_page_scroll_pane_t1

0xefc0,	// (0x00072661) popup_char_count_window_g1

0xefc9,	// (0x0007266a) popup_char_count_window_g2

0xefd2,	// (0x00072673) popup_char_count_window_g3

0x0002,

0xfaf0,	// (0x00073191) popup_char_count_window_g

0xefdb,	// (0x0007267c) popup_char_count_window_t1

0x77fc,	// (0x0006ae9d) main_vded2_pane

0x4eb9,	// (0x0006855a) aid_size_cell_imed_line

0x4ec3,	// (0x00068564) grid_imed_line_width_pane

0xc773,	// (0x0006fe14) vid4_indicators_pane_g4

0xefe9,	// (0x0007268a) cell_imed_line_width_pane_ParamLimits

0xefe9,	// (0x0007268a) cell_imed_line_width_pane

0xeffd,	// (0x0007269e) cell_imed_line_width_pane_g1

0x479b,	// (0x00067e3c) cell_imed_line_width_pane_g2

0x0001,

0xfaf7,	// (0x00073198) cell_imed_line_width_pane_g

0xd619,	// (0x00070cba) main_vded2_pane_g1_ParamLimits

0xd619,	// (0x00070cba) main_vded2_pane_g1

0xd626,	// (0x00070cc7) main_vded2_pane_g2_ParamLimits

0xd626,	// (0x00070cc7) main_vded2_pane_g2

0x0001,

0xfafc,	// (0x0007319d) main_vded2_pane_g_ParamLimits

0xfafc,	// (0x0007319d) main_vded2_pane_g

0xd634,	// (0x00070cd5) vded2_slider_pane_ParamLimits

0xd634,	// (0x00070cd5) vded2_slider_pane

0xd641,	// (0x00070ce2) aid_size_touch_vded2_end

0xd64b,	// (0x00070cec) aid_size_touch_vded2_playhead

0xf006,	// (0x000726a7) aid_size_touch_vded2_start

0xf00e,	// (0x000726af) vded2_slider_bg_pane

0xf017,	// (0x000726b8) vded2_slider_pane_g1

0xf020,	// (0x000726c1) vded2_slider_pane_g2

0xd653,	// (0x00070cf4) vded2_slider_pane_g3

0x0002,

0xfb01,	// (0x000731a2) vded2_slider_pane_g

0xf028,	// (0x000726c9) vded2_slider_bg_pane_g1

0xf031,	// (0x000726d2) vded2_slider_bg_pane_g2

0xf03a,	// (0x000726db) vded2_slider_bg_pane_g3

0x0002,

0xfb08,	// (0x000731a9) vded2_slider_bg_pane_g

0xa033,	// (0x0006d6d4) aid_postcard_touch_down_pane_ParamLimits

0xa033,	// (0x0006d6d4) aid_postcard_touch_down_pane

0xa043,	// (0x0006d6e4) aid_postcard_touch_up_pane_ParamLimits

0xa043,	// (0x0006d6e4) aid_postcard_touch_up_pane

0x77fc,	// (0x0006ae9d) main_blid2_pane

0x28c4,	// (0x00065f65) popup_blid2_search_window

0x77fc,	// (0x0006ae9d) blid2_gps_pane

0x77fc,	// (0x0006ae9d) blid2_navig_pane

0x77fc,	// (0x0006ae9d) blid2_search_pane

0x77fc,	// (0x0006ae9d) blid2_tripm_pane

0xd65c,	// (0x00070cfd) blid2_search_pane_g1_ParamLimits

0xd65c,	// (0x00070cfd) blid2_search_pane_g1

0xd66c,	// (0x00070d0d) blid2_search_pane_t1_ParamLimits

0xd66c,	// (0x00070d0d) blid2_search_pane_t1

0xd67e,	// (0x00070d1f) aid_size_cell_blid2_gps_ParamLimits

0xd67e,	// (0x00070d1f) aid_size_cell_blid2_gps

0xd68e,	// (0x00070d2f) blid2_gps_pane_g1_ParamLimits

0xd68e,	// (0x00070d2f) blid2_gps_pane_g1

0xd69a,	// (0x00070d3b) grid_blid2_satellite_pane_ParamLimits

0xd69a,	// (0x00070d3b) grid_blid2_satellite_pane

0xd6aa,	// (0x00070d4b) blid2_navig_pane_g1_ParamLimits

0xd6aa,	// (0x00070d4b) blid2_navig_pane_g1

0xd6b6,	// (0x00070d57) blid2_navig_pane_t1_ParamLimits

0xd6b6,	// (0x00070d57) blid2_navig_pane_t1

0xd6c8,	// (0x00070d69) blid2_navig_pane_t2_ParamLimits

0xd6c8,	// (0x00070d69) blid2_navig_pane_t2

0x0001,

0xfb0f,	// (0x000731b0) blid2_navig_pane_t_ParamLimits

0xfb0f,	// (0x000731b0) blid2_navig_pane_t

0xd6da,	// (0x00070d7b) blid2_navig_ring_pane_ParamLimits

0xd6da,	// (0x00070d7b) blid2_navig_ring_pane

0xd6ea,	// (0x00070d8b) blid2_speed_pane_ParamLimits

0xd6ea,	// (0x00070d8b) blid2_speed_pane

0xd6f6,	// (0x00070d97) blid2_tripm_pane_g1_ParamLimits

0xd6f6,	// (0x00070d97) blid2_tripm_pane_g1

0xd706,	// (0x00070da7) blid2_tripm_pane_g2_ParamLimits

0xd706,	// (0x00070da7) blid2_tripm_pane_g2

0xd712,	// (0x00070db3) blid2_tripm_pane_g3_ParamLimits

0xd712,	// (0x00070db3) blid2_tripm_pane_g3

0xd71e,	// (0x00070dbf) blid2_tripm_pane_g4_ParamLimits

0xd71e,	// (0x00070dbf) blid2_tripm_pane_g4

0xd72a,	// (0x00070dcb) blid2_tripm_pane_g5_ParamLimits

0xd72a,	// (0x00070dcb) blid2_tripm_pane_g5

0x0005,

0xfb14,	// (0x000731b5) blid2_tripm_pane_g_ParamLimits

0xfb14,	// (0x000731b5) blid2_tripm_pane_g

0xd746,	// (0x00070de7) blid2_tripm_pane_t1_ParamLimits

0xd746,	// (0x00070de7) blid2_tripm_pane_t1

0xd75a,	// (0x00070dfb) blid2_tripm_pane_t2_ParamLimits

0xd75a,	// (0x00070dfb) blid2_tripm_pane_t2

0xd76c,	// (0x00070e0d) blid2_tripm_pane_t3_ParamLimits

0xd76c,	// (0x00070e0d) blid2_tripm_pane_t3

0x0003,

0xfb21,	// (0x000731c2) blid2_tripm_pane_t_ParamLimits

0xfb21,	// (0x000731c2) blid2_tripm_pane_t

0xd79e,	// (0x00070e3f) cell_blid2_satellite_pane_ParamLimits

0xd79e,	// (0x00070e3f) cell_blid2_satellite_pane

0xd7b8,	// (0x00070e59) cell_blid2_satellite_pane_g1

0xf043,	// (0x000726e4) cell_blid2_satellite_pane_t1

0x49d7,	// (0x00068078) blid2_speed_pane_g1

0xf051,	// (0x000726f2) blid2_speed_pane_t1

0xf05f,	// (0x00072700) blid2_speed_pane_t2

0x0001,

0xfb2a,	// (0x000731cb) blid2_speed_pane_t

0x49d7,	// (0x00068078) blid2_navig_ring_pane_g1

0xd7c1,	// (0x00070e62) blid2_navig_ring_pane_g2

0xd7c9,	// (0x00070e6a) blid2_navig_ring_pane_g3

0xd7d1,	// (0x00070e72) blid2_navig_ring_pane_g4

0xd7d9,	// (0x00070e7a) blid2_navig_ring_pane_g5

0x0004,

0xfb2f,	// (0x000731d0) blid2_navig_ring_pane_g

0x77fc,	// (0x0006ae9d) bg_popup_window_pane_cp011

0xf06d,	// (0x0007270e) popup_blid2_search_window_g1

0xf075,	// (0x00072716) popup_blid2_search_window_t1

0xf083,	// (0x00072724) popup_blid2_search_window_t2

0x0001,

0xfb3a,	// (0x000731db) popup_blid2_search_window_t

0x0bd9,	// (0x0006427a) main_browser_pane_g1

0x0820,	// (0x00063ec1) main_browser_pane_ParamLimits

0x00a1,	// (0x00063742) bg_button_pane_cp011_ParamLimits

0xc9dc,	// (0x0007007d) cell_vitu2_function_pane_g1_ParamLimits

0x28b6,	// (0x00065f57) bg_popup_sub_pane_cp22_ParamLimits

0x6b5d,	// (0x0006a1fe) input_focus_pane_cp08_ParamLimits

0xd253,	// (0x000708f4) popup_vitu2_query_button_pane_ParamLimits

0xd253,	// (0x000708f4) popup_vitu2_query_button_pane

0x6b74,	// (0x0006a215) popup_vitu2_query_input_button_pane

0x5691,	// (0x00068d32) popup_vitu2_query_window_g1_ParamLimits

0x6b7e,	// (0x0006a21f) popup_vitu2_query_window_g2_ParamLimits

0xfa3b,	// (0x000730dc) popup_vitu2_query_window_g_ParamLimits

0x77fc,	// (0x0006ae9d) bg_button_pane_cp026

0xd7e1,	// (0x00070e82) popup_vitu2_query_input_button_pane_g1

0x77fc,	// (0x0006ae9d) bg_button_pane_cp025

0xf091,	// (0x00072732) popup_vitu2_query_button_pane_t1

0xb180,	// (0x0006e821) main_mp3_pane_t6

0xb190,	// (0x0006e831) popup_slider_window_cp01

0xc657,	// (0x0006fcf8) cam4_battery_pane

0xc736,	// (0x0006fdd7) cam4_battery_pane_cp02

0xd55a,	// (0x00070bfb) cam4_battery_pane_cp01

0xd55a,	// (0x00070bfb) cam4_battery_pane_cp03

0x49d7,	// (0x00068078) cam4_battery_pane_g1

0x52d4,	// (0x00068975) cam4_battery_pane_g2

0x0001,

0xfb3f,	// (0x000731e0) cam4_battery_pane_g

0x48a3,	// (0x00067f44) popup_blid_sat_info2_window_t11

0x99cf,	// (0x0006d070) aid_size_touch_mv_arrow_left_ParamLimits

0x99f8,	// (0x0006d099) aid_size_touch_mv_arrow_right_ParamLimits

0x13d4,	// (0x00064a75) navi_pane_g1_ParamLimits

0x9a21,	// (0x0006d0c2) navi_pane_g2_ParamLimits

0x9a4f,	// (0x0006d0f0) navi_pane_g3_ParamLimits

0xf409,	// (0x00072aaa) navi_pane_g_ParamLimits

0x9aa9,	// (0x0006d14a) navi_pane_mv_t1_ParamLimits

0xbc4d,	// (0x0006f2ee) grid_imed_effect_pane_ParamLimits

0x8787,	// (0x0006be28) aid_placing_vt_slider_lsc

0x0b2a,	// (0x000641cb) aid_placing_vt_slider_prt

0x00a1,	// (0x00063742) bg_tb_trans_pane_cp01_ParamLimits

0x4b5a,	// (0x000681fb) popup_image_details_window_g1_ParamLimits

0x4b6d,	// (0x0006820e) popup_image_details_window_g2_ParamLimits

0x4b82,	// (0x00068223) popup_image_details_window_g3_ParamLimits

0x4b82,	// (0x00068223) popup_image_details_window_g3

0xf73c,	// (0x00072ddd) popup_image_details_window_g_ParamLimits

0x4b96,	// (0x00068237) popup_image_details_window_t1_ParamLimits

0x4ba8,	// (0x00068249) popup_image_details_window_t2_ParamLimits

0x4bc1,	// (0x00068262) popup_image_details_window_t3_ParamLimits

0x4bd5,	// (0x00068276) popup_image_details_window_t4_ParamLimits

0x4bf0,	// (0x00068291) popup_image_details_window_t5_ParamLimits

0xf743,	// (0x00072de4) popup_image_details_window_t_ParamLimits

0xd47e,	// (0x00070b1f) cl_header_name_pane_ParamLimits

0xd47e,	// (0x00070b1f) cl_header_name_pane

0xd7e9,	// (0x00070e8a) cl_header_name_pane_t1_ParamLimits

0xd7e9,	// (0x00070e8a) cl_header_name_pane_t1

0xd800,	// (0x00070ea1) cl_header_name_pane_t2_ParamLimits

0xd800,	// (0x00070ea1) cl_header_name_pane_t2

0xd82a,	// (0x00070ecb) cl_header_name_pane_t3_ParamLimits

0xd82a,	// (0x00070ecb) cl_header_name_pane_t3

0x0002,

0xfb44,	// (0x000731e5) cl_header_name_pane_t_ParamLimits

0xfb44,	// (0x000731e5) cl_header_name_pane_t

0x9a7a,	// (0x0006d11b) navi_pane_mv_g2_ParamLimits

0x53f8,	// (0x00068a99) field_vitu2_entry_pane_g1_ParamLimits

0x5404,	// (0x00068aa5) field_vitu2_entry_pane_g2_ParamLimits

0x5410,	// (0x00068ab1) field_vitu2_entry_pane_g3_ParamLimits

0x5410,	// (0x00068ab1) field_vitu2_entry_pane_g3

0xf93a,	// (0x00072fdb) field_vitu2_entry_pane_g_ParamLimits

0xc96c,	// (0x0007000d) cell_vitu2_itu_pane_g1_ParamLimits

0xc97c,	// (0x0007001d) cell_vitu2_itu_pane_g2_ParamLimits

0xc97c,	// (0x0007001d) cell_vitu2_itu_pane_g2

0x0001,

0xf946,	// (0x00072fe7) cell_vitu2_itu_pane_g_ParamLimits

0xf946,	// (0x00072fe7) cell_vitu2_itu_pane_g

0x00a1,	// (0x00063742) bg_vkb2_func_pane_cp05_ParamLimits

0x00a1,	// (0x00063742) bg_vkb2_func_pane_cp05

0x00a1,	// (0x00063742) bg_vkb2_func_pane_cp03

0x00a1,	// (0x00063742) bg_vkb2_func_pane_cp04

0x00a1,	// (0x00063742) bg_vkb2_func_pane_cp10_ParamLimits

0x00a1,	// (0x00063742) bg_vkb2_func_pane_cp10

0x6d33,	// (0x0006a3d4) bg_vkb2_func_pane_cp08

0xd428,	// (0x00070ac9) bg_vkb2_func_pane_cp06

0xd436,	// (0x00070ad7) bg_vkb2_func_pane_cp07

0xef96,	// (0x00072637) bg_vkb2_func_pane_cp11_ParamLimits

0xef96,	// (0x00072637) bg_vkb2_func_pane_cp11

0xefab,	// (0x0007264c) bg_vkb2_func_pane_cp12_ParamLimits

0xefab,	// (0x0007264c) bg_vkb2_func_pane_cp12

0x77fc,	// (0x0006ae9d) bg_vkb2_func_pane_cp09

0x5430,	// (0x00068ad1) bg_vkb2_func_pane_g1

0x0cea,	// (0x0006438b) bg_vkb2_func_pane_g2

0x5438,	// (0x00068ad9) bg_vkb2_func_pane_g3

0x5440,	// (0x00068ae1) bg_vkb2_func_pane_g4

0x5654,	// (0x00068cf5) bg_vkb2_func_pane_g5

0x5458,	// (0x00068af9) bg_vkb2_func_pane_g6

0x5460,	// (0x00068b01) bg_vkb2_func_pane_g7

0x5450,	// (0x00068af1) bg_vkb2_func_pane_g8

0x0cca,	// (0x0006436b) bg_vkb2_func_pane_g9

0x0008,

0xfb4b,	// (0x000731ec) bg_vkb2_func_pane_g

0xd738,	// (0x00070dd9) blid2_tripm_pane_g6_ParamLimits

0xd738,	// (0x00070dd9) blid2_tripm_pane_g6

0x528e,	// (0x0006892f) mp4_progress_pane_g1

0xd792,	// (0x00070e33) blid2_tripm_values_pane_ParamLimits

0xd792,	// (0x00070e33) blid2_tripm_values_pane

0xd84f,	// (0x00070ef0) blid2_tripm_values_pane_t1

0xd85d,	// (0x00070efe) blid2_tripm_values_pane_t2

0xd86b,	// (0x00070f0c) blid2_tripm_values_pane_t3

0xd879,	// (0x00070f1a) blid2_tripm_values_pane_t4

0xd887,	// (0x00070f28) blid2_tripm_values_pane_t5

0xd895,	// (0x00070f36) blid2_tripm_values_pane_t6

0xd8a3,	// (0x00070f44) blid2_tripm_values_pane_t7

0xd8b1,	// (0x00070f52) blid2_tripm_values_pane_t8

0xd8bf,	// (0x00070f60) blid2_tripm_values_pane_t9

0x0008,

0xfb5e,	// (0x000731ff) blid2_tripm_values_pane_t

0x87c7,	// (0x0006be68) call_video_pane_t1_ParamLimits

0x87e8,	// (0x0006be89) call_video_pane_t2_ParamLimits

0xf292,	// (0x00072933) call_video_pane_t_ParamLimits

0x691a,	// (0x00069fbb) msg_header_pane_g1_ParamLimits

0x160f,	// (0x00064cb0) msg_header_pane_g2_ParamLimits

0x160f,	// (0x00064cb0) msg_header_pane_g2

0x0001,

0xf4ac,	// (0x00072b4d) msg_header_pane_g_ParamLimits

0xf4ac,	// (0x00072b4d) msg_header_pane_g

0x0820,	// (0x00063ec1) main_clock2_pane_ParamLimits

0xb9dd,	// (0x0006f07e) grid_clock2_toolbar_pane_ParamLimits

0xb9dd,	// (0x0006f07e) grid_clock2_toolbar_pane

0xb9dd,	// (0x0006f07e) listscroll_clock2_pane_ParamLimits

0xb9dd,	// (0x0006f07e) listscroll_clock2_pane

0xba8a,	// (0x0006f12b) main_clock2_pane_t3_ParamLimits

0xba8a,	// (0x0006f12b) main_clock2_pane_t3

0xba9c,	// (0x0006f13d) main_clock2_pane_t4_ParamLimits

0xba9c,	// (0x0006f13d) main_clock2_pane_t4

0xf09f,	// (0x00072740) cell_clock2_toolbar_pane

0xf0a7,	// (0x00072748) cell_clock2_toolbar_pane_cp01

0xf0a7,	// (0x00072748) cell_clock2_toolbar_pane_cp02

0xf0af,	// (0x00072750) cell_clock2_toolbar_pane_cp03

0xf0b7,	// (0x00072758) list_clock2_pane

0x132b,	// (0x000649cc) scroll_pane_cp10

0xf0bf,	// (0x00072760) list_single_clock2_pane_ParamLimits

0xf0bf,	// (0x00072760) list_single_clock2_pane

0x1474,	// (0x00064b15) list_highlight_pane_cp08

0xf0cc,	// (0x0007276d) list_single_clock2_pane_t1

0x2a5a,	// (0x000660fb) list_single_clock2_pane_t2

0x0001,

0xfb71,	// (0x00073212) list_single_clock2_pane_t

0x77fc,	// (0x0006ae9d) bg_button_pane_cp10

0x2a68,	// (0x00066109) cell_clock2_toolbar_pane_g1

0x9f95,	// (0x0006d636) aid_main_viewer_pane_g1_ParamLimits

0x9f95,	// (0x0006d636) aid_main_viewer_pane_g1

0x9fa1,	// (0x0006d642) aid_main_viewer_pane_g2_ParamLimits

0x9fa1,	// (0x0006d642) aid_main_viewer_pane_g2

0x9fad,	// (0x0006d64e) aid_main_viewer_pane_g3_ParamLimits

0x9fad,	// (0x0006d64e) aid_main_viewer_pane_g3

0x9fbe,	// (0x0006d65f) aid_main_viewer_pane_g4_ParamLimits

0x9fbe,	// (0x0006d65f) aid_main_viewer_pane_g4

0x0003,

0xf4bd,	// (0x00072b5e) aid_main_viewer_pane_g_ParamLimits

0xf4bd,	// (0x00072b5e) aid_main_viewer_pane_g

0xa73e,	// (0x0006dddf) main_calc_pane_ParamLimits

0xa74b,	// (0x0006ddec) main_dialer2_pane_ParamLimits

0x77fc,	// (0x0006ae9d) main_cam6_pane

0x77fc,	// (0x0006ae9d) main_vid6_pane

0xb9e9,	// (0x0006f08a) listscroll_gen_pane_cp06_ParamLimits

0xb9e9,	// (0x0006f08a) listscroll_gen_pane_cp06

0xbaae,	// (0x0006f14f) main_clock2_pane_t5_ParamLimits

0xbaae,	// (0x0006f14f) main_clock2_pane_t5

0xbaf7,	// (0x0006f198) aid_call2_pane_cp10_ParamLimits

0xbb09,	// (0x0006f1aa) aid_call_pane_cp10_ParamLimits

0x13a9,	// (0x00064a4a) popup_clock_analogue_window_cp10_g1_ParamLimits

0x13a9,	// (0x00064a4a) popup_clock_analogue_window_cp10_g2_ParamLimits

0xbb1b,	// (0x0006f1bc) popup_clock_analogue_window_cp10_g3_ParamLimits

0xbb1b,	// (0x0006f1bc) popup_clock_analogue_window_cp10_g4_ParamLimits

0x13a9,	// (0x00064a4a) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf7f3,	// (0x00072e94) popup_clock_analogue_window_cp10_g_ParamLimits

0xbb2d,	// (0x0006f1ce) popup_clock_analogue_window_cp10_t1_ParamLimits

0xc2d6,	// (0x0006f977) cell_dialer2_keypad_pane_g2_ParamLimits

0xc2d6,	// (0x0006f977) cell_dialer2_keypad_pane_g2

0x0001,

0xf8d9,	// (0x00072f7a) cell_dialer2_keypad_pane_g_ParamLimits

0xf8d9,	// (0x00072f7a) cell_dialer2_keypad_pane_g

0xc2f2,	// (0x0006f993) cell_dialer2_keypad_pane_t1

0xcca7,	// (0x00070348) main_cset_text2_pane_ParamLimits

0xcca7,	// (0x00070348) main_cset_text2_pane

0x5871,	// (0x00068f12) area_vitu2_query_pane_g1_ParamLimits

0x6c5e,	// (0x0006a2ff) area_vitu2_query_pane_g2_ParamLimits

0xfa8e,	// (0x0007312f) area_vitu2_query_pane_g_ParamLimits

0x6d0f,	// (0x0006a3b0) area_vitu2_query_pane_t7_ParamLimits

0x6d0f,	// (0x0006a3b0) area_vitu2_query_pane_t7

0xd428,	// (0x00070ac9) bg_button_pane_cp018_ParamLimits

0xd436,	// (0x00070ad7) bg_button_pane_cp021_ParamLimits

0x6d33,	// (0x0006a3d4) bg_button_pane_cp022_ParamLimits

0x6d33,	// (0x0006a3d4) bg_vkb2_func_pane_cp08_ParamLimits

0xd428,	// (0x00070ac9) bg_vkb2_func_pane_cp06_ParamLimits

0xd436,	// (0x00070ad7) bg_vkb2_func_pane_cp07_ParamLimits

0x6d44,	// (0x0006a3e5) input_focus_pane_cp09_ParamLimits

0xd8cd,	// (0x00070f6e) cam6_autofocus_pane_ParamLimits

0xd8cd,	// (0x00070f6e) cam6_autofocus_pane

0xd8ef,	// (0x00070f90) cam6_image_uncrop_pane_ParamLimits

0xd8ef,	// (0x00070f90) cam6_image_uncrop_pane

0xd91c,	// (0x00070fbd) cam6_indi_pane_ParamLimits

0xd91c,	// (0x00070fbd) cam6_indi_pane

0xd936,	// (0x00070fd7) cam6_mode_pane_ParamLimits

0xd936,	// (0x00070fd7) cam6_mode_pane

0xd94a,	// (0x00070feb) cam6_timer_pane_ParamLimits

0xd94a,	// (0x00070feb) cam6_timer_pane

0xd956,	// (0x00070ff7) cam6_zoom_pane_ParamLimits

0xd956,	// (0x00070ff7) cam6_zoom_pane

0xc6b8,	// (0x0006fd59) cam6_mode_pane_g1_ParamLimits

0xc6b8,	// (0x0006fd59) cam6_mode_pane_g1

0xc6d0,	// (0x0006fd71) cam6_mode_pane_g2_ParamLimits

0xc6d0,	// (0x0006fd71) cam6_mode_pane_g2

0xc6dc,	// (0x0006fd7d) cam6_mode_pane_g3_ParamLimits

0xc6dc,	// (0x0006fd7d) cam6_mode_pane_g3

0xc6e8,	// (0x0006fd89) cam6_mode_pane_g4_ParamLimits

0xc6e8,	// (0x0006fd89) cam6_mode_pane_g4

0x0003,

0xfb76,	// (0x00073217) cam6_mode_pane_g_ParamLimits

0xfb76,	// (0x00073217) cam6_mode_pane_g

0x2a70,	// (0x00066111) bg_tb_trans_pane_cp08_ParamLimits

0x2a70,	// (0x00066111) bg_tb_trans_pane_cp08

0x2a7e,	// (0x0006611f) cam6_battery_pane_ParamLimits

0x2a7e,	// (0x0006611f) cam6_battery_pane

0x2a94,	// (0x00066135) cam6_indi_pane_g1_ParamLimits

0x2a94,	// (0x00066135) cam6_indi_pane_g1

0x2aa6,	// (0x00066147) cam6_indi_pane_g2_ParamLimits

0x2aa6,	// (0x00066147) cam6_indi_pane_g2

0x2ab8,	// (0x00066159) cam6_indi_pane_g3_ParamLimits

0x2ab8,	// (0x00066159) cam6_indi_pane_g3

0x0002,

0xfb7f,	// (0x00073220) cam6_indi_pane_g_ParamLimits

0xfb7f,	// (0x00073220) cam6_indi_pane_g

0x2aca,	// (0x0006616b) cam6_indi_pane_t1_ParamLimits

0x2aca,	// (0x0006616b) cam6_indi_pane_t1

0xc7a8,	// (0x0006fe49) cam6_autofocus_pane_g1

0xc7b0,	// (0x0006fe51) cam6_autofocus_pane_g2

0xc7b8,	// (0x0006fe59) cam6_autofocus_pane_g3

0xc7c0,	// (0x0006fe61) cam6_autofocus_pane_g4

0x0003,

0xfb86,	// (0x00073227) cam6_autofocus_pane_g

0x2af0,	// (0x00066191) cam6_timer_pane_g1

0x2af8,	// (0x00066199) cam6_timer_pane_t1

0x2b06,	// (0x000661a7) cam6_zoom_cont_pane

0x2b0e,	// (0x000661af) cam6_zoom_pane_g1

0x2b16,	// (0x000661b7) cam6_zoom_pane_g2

0xd96e,	// (0x0007100f) cam6_zoom_pane_g3

0x0002,

0xfb8f,	// (0x00073230) cam6_zoom_pane_g

0x49d7,	// (0x00068078) cam6_battery_pane_g1

0x49d7,	// (0x00068078) cam6_battery_pane_g2

0x0001,

0xf700,	// (0x00072da1) cam6_battery_pane_g

0x2b1e,	// (0x000661bf) cam6_zoom_cont_pane_g1

0x2b27,	// (0x000661c8) cam6_zoom_cont_pane_g2

0x2b30,	// (0x000661d1) cam6_zoom_cont_pane_g3

0x0002,

0xfb96,	// (0x00073237) cam6_zoom_cont_pane_g

0xd98b,	// (0x0007102c) cam6_mode_pane_cp_ParamLimits

0xd98b,	// (0x0007102c) cam6_mode_pane_cp

0xd956,	// (0x00070ff7) cam6_zoom_pane_cp_ParamLimits

0xd956,	// (0x00070ff7) cam6_zoom_pane_cp

0xd99f,	// (0x00071040) vid6_image_uncrop_cif_pane_ParamLimits

0xd99f,	// (0x00071040) vid6_image_uncrop_cif_pane

0xd9cb,	// (0x0007106c) vid6_image_uncrop_nhd_pane_ParamLimits

0xd9cb,	// (0x0007106c) vid6_image_uncrop_nhd_pane

0xd8ef,	// (0x00070f90) vid6_image_uncrop_vga_pane_ParamLimits

0xd8ef,	// (0x00070f90) vid6_image_uncrop_vga_pane

0xd9e8,	// (0x00071089) vid6_image_uncrop_wvga_pane_ParamLimits

0xd9e8,	// (0x00071089) vid6_image_uncrop_wvga_pane

0xda05,	// (0x000710a6) vid6_indi_pane_ParamLimits

0xda05,	// (0x000710a6) vid6_indi_pane

0x2a70,	// (0x00066111) bg_tb_trans_pane_cp09_ParamLimits

0x2a70,	// (0x00066111) bg_tb_trans_pane_cp09

0x2b48,	// (0x000661e9) cam6_battery_pane_cp_ParamLimits

0x2b48,	// (0x000661e9) cam6_battery_pane_cp

0x2b54,	// (0x000661f5) vid6_indi_pane_g1_ParamLimits

0x2b54,	// (0x000661f5) vid6_indi_pane_g1

0x2b66,	// (0x00066207) vid6_indi_pane_g2_ParamLimits

0x2b66,	// (0x00066207) vid6_indi_pane_g2

0x2b78,	// (0x00066219) vid6_indi_pane_g3_ParamLimits

0x2b78,	// (0x00066219) vid6_indi_pane_g3

0x2b8d,	// (0x0006622e) vid6_indi_pane_g4_ParamLimits

0x2b8d,	// (0x0006622e) vid6_indi_pane_g4

0x2ba2,	// (0x00066243) vid6_indi_pane_g5_ParamLimits

0x2ba2,	// (0x00066243) vid6_indi_pane_g5

0x0004,

0xfb9d,	// (0x0007323e) vid6_indi_pane_g_ParamLimits

0xfb9d,	// (0x0007323e) vid6_indi_pane_g

0x2bbc,	// (0x0006625d) vid6_indi_pane_t1_ParamLimits

0x2bbc,	// (0x0006625d) vid6_indi_pane_t1

0x2bd2,	// (0x00066273) vid6_indi_pane_t2_ParamLimits

0x2bd2,	// (0x00066273) vid6_indi_pane_t2

0x2bfa,	// (0x0006629b) vid6_indi_pane_t3_ParamLimits

0x2bfa,	// (0x0006629b) vid6_indi_pane_t3

0x2c22,	// (0x000662c3) vid6_indi_pane_t4_ParamLimits

0x2c22,	// (0x000662c3) vid6_indi_pane_t4

0x0003,

0xfba8,	// (0x00073249) vid6_indi_pane_t_ParamLimits

0xfba8,	// (0x00073249) vid6_indi_pane_t

0x2c46,	// (0x000662e7) wait_bar_pane_cp08

0xda2a,	// (0x000710cb) main_cset_text2_pane_t1_ParamLimits

0xda2a,	// (0x000710cb) main_cset_text2_pane_t1

0xd976,	// (0x00071017) listscroll_gen_pane_cp06_t1_ParamLimits

0xd976,	// (0x00071017) listscroll_gen_pane_cp06_t1

0x77fc,	// (0x0006ae9d) main_cam6_set_pane

0x4c3a,	// (0x000682db) bg_tb_trans_pane_cp06_ParamLimits

0xc65f,	// (0x0006fd00) cam4_indicators_pane_g1_ParamLimits

0xc670,	// (0x0006fd11) cam4_indicators_pane_g2_ParamLimits

0xf916,	// (0x00072fb7) cam4_indicators_pane_g_ParamLimits

0xc68e,	// (0x0006fd2f) cam4_indicators_pane_t1_ParamLimits

0x00a1,	// (0x00063742) bg_tb_trans_pane_cp07_ParamLimits

0xc740,	// (0x0006fde1) vid4_indicators_pane_g1_ParamLimits

0xc751,	// (0x0006fdf2) vid4_indicators_pane_g2_ParamLimits

0xc762,	// (0x0006fe03) vid4_indicators_pane_g3_ParamLimits

0xc773,	// (0x0006fe14) vid4_indicators_pane_g4_ParamLimits

0xf928,	// (0x00072fc9) vid4_indicators_pane_g_ParamLimits

0xc78f,	// (0x0006fe30) vid4_indicators_pane_t1_ParamLimits

0xd562,	// (0x00070c03) vid4_progress_pane_g1_ParamLimits

0xd572,	// (0x00070c13) vid4_progress_pane_g2_ParamLimits

0xa01b,	// (0x0006d6bc) vid4_progress_pane_g3_ParamLimits

0xd582,	// (0x00070c23) vid4_progress_pane_g4_ParamLimits

0xfad9,	// (0x0007317a) vid4_progress_pane_g_ParamLimits

0xd5a0,	// (0x00070c41) vid4_progress_pane_t1_ParamLimits

0xd5b5,	// (0x00070c56) vid4_progress_pane_t2_ParamLimits

0xd5cb,	// (0x00070c6c) vid4_progress_pane_t3_ParamLimits

0xfae4,	// (0x00073185) vid4_progress_pane_t_ParamLimits

0xd5e0,	// (0x00070c81) wait_bar_pane_cp07_ParamLimits

0xda5d,	// (0x000710fe) main_cam6_set_pane_g2_ParamLimits

0xda5d,	// (0x000710fe) main_cam6_set_pane_g2

0xda69,	// (0x0007110a) main_cset6_listscroll_pane_ParamLimits

0xda69,	// (0x0007110a) main_cset6_listscroll_pane

0xda94,	// (0x00071135) main_cset6_slider_pane_ParamLimits

0xda94,	// (0x00071135) main_cset6_slider_pane

0xdaa0,	// (0x00071141) main_cset6_text2_pane_ParamLimits

0xdaa0,	// (0x00071141) main_cset6_text2_pane

0x2c55,	// (0x000662f6) main_cset6_text_pane

0x2c5d,	// (0x000662fe) main_cset_list_pane_copy1_ParamLimits

0x2c5d,	// (0x000662fe) main_cset_list_pane_copy1

0x2c6d,	// (0x0006630e) scroll_pane_cp028_copy1

0xdab3,	// (0x00071154) cset_list_set_pane_copy1

0xdac6,	// (0x00071167) aid_position_infowindow_above_copy1

0xdace,	// (0x0007116f) aid_position_infowindow_below_copy1

0xdad6,	// (0x00071177) cset_list_set_pane_g1_copy1

0x6ad2,	// (0x0006a173) cset_list_set_pane_g3_copy1_ParamLimits

0x6ad2,	// (0x0006a173) cset_list_set_pane_g3_copy1

0x6ae1,	// (0x0006a182) cset_list_set_pane_t1_copy1_ParamLimits

0x6ae1,	// (0x0006a182) cset_list_set_pane_t1_copy1

0x00a1,	// (0x00063742) list_highlight_pane_cp021_copy1_ParamLimits

0x00a1,	// (0x00063742) list_highlight_pane_cp021_copy1

0x2c76,	// (0x00066317) cset6_slider_pane_ParamLimits

0x2c76,	// (0x00066317) cset6_slider_pane

0x2ca2,	// (0x00066343) main_cset6_slider_pane_g1_ParamLimits

0x2ca2,	// (0x00066343) main_cset6_slider_pane_g1

0xdade,	// (0x0007117f) main_cset6_slider_pane_g2_ParamLimits

0xdade,	// (0x0007117f) main_cset6_slider_pane_g2

0x2cca,	// (0x0006636b) main_cset6_slider_pane_g3_ParamLimits

0x2cca,	// (0x0006636b) main_cset6_slider_pane_g3

0xdb06,	// (0x000711a7) main_cset6_slider_pane_g4_ParamLimits

0xdb06,	// (0x000711a7) main_cset6_slider_pane_g4

0xdb12,	// (0x000711b3) main_cset6_slider_pane_g5_ParamLimits

0xdb12,	// (0x000711b3) main_cset6_slider_pane_g5

0x555f,	// (0x00068c00) main_cset6_slider_pane_g7_ParamLimits

0x555f,	// (0x00068c00) main_cset6_slider_pane_g7

0x556b,	// (0x00068c0c) main_cset6_slider_pane_g8_ParamLimits

0x556b,	// (0x00068c0c) main_cset6_slider_pane_g8

0xdb20,	// (0x000711c1) main_cset6_slider_pane_g9_ParamLimits

0xdb20,	// (0x000711c1) main_cset6_slider_pane_g9

0xdb2c,	// (0x000711cd) main_cset6_slider_pane_g10_ParamLimits

0xdb2c,	// (0x000711cd) main_cset6_slider_pane_g10

0xdb38,	// (0x000711d9) main_cset6_slider_pane_g11_ParamLimits

0xdb38,	// (0x000711d9) main_cset6_slider_pane_g11

0xdb44,	// (0x000711e5) main_cset6_slider_pane_g12_ParamLimits

0xdb44,	// (0x000711e5) main_cset6_slider_pane_g12

0xdb50,	// (0x000711f1) main_cset6_slider_pane_g13_ParamLimits

0xdb50,	// (0x000711f1) main_cset6_slider_pane_g13

0xdb5c,	// (0x000711fd) main_cset6_slider_pane_g14_ParamLimits

0xdb5c,	// (0x000711fd) main_cset6_slider_pane_g14

0xdb68,	// (0x00071209) main_cset6_slider_pane_g15_ParamLimits

0xdb68,	// (0x00071209) main_cset6_slider_pane_g15

0xdb80,	// (0x00071221) main_cset6_slider_pane_g16_ParamLimits

0xdb80,	// (0x00071221) main_cset6_slider_pane_g16

0xdb8e,	// (0x0007122f) main_cset6_slider_pane_g17_ParamLimits

0xdb8e,	// (0x0007122f) main_cset6_slider_pane_g17

0x0011,

0xfbb1,	// (0x00073252) main_cset6_slider_pane_g_ParamLimits

0xfbb1,	// (0x00073252) main_cset6_slider_pane_g

0x2cd6,	// (0x00066377) main_cset6_slider_pane_t1_ParamLimits

0x2cd6,	// (0x00066377) main_cset6_slider_pane_t1

0xdbb4,	// (0x00071255) main_cset6_slider_pane_t2_ParamLimits

0xdbb4,	// (0x00071255) main_cset6_slider_pane_t2

0xdbdf,	// (0x00071280) main_cset6_slider_pane_t3_ParamLimits

0xdbdf,	// (0x00071280) main_cset6_slider_pane_t3

0xdc0a,	// (0x000712ab) main_cset6_slider_pane_t4_ParamLimits

0xdc0a,	// (0x000712ab) main_cset6_slider_pane_t4

0xdc35,	// (0x000712d6) main_cset6_slider_pane_t5_ParamLimits

0xdc35,	// (0x000712d6) main_cset6_slider_pane_t5

0x2d17,	// (0x000663b8) main_cset6_slider_pane_t7_ParamLimits

0x2d17,	// (0x000663b8) main_cset6_slider_pane_t7

0xdc62,	// (0x00071303) main_cset6_slider_pane_t8_ParamLimits

0xdc62,	// (0x00071303) main_cset6_slider_pane_t8

0xdc86,	// (0x00071327) main_cset6_slider_pane_t9_ParamLimits

0xdc86,	// (0x00071327) main_cset6_slider_pane_t9

0xdcaa,	// (0x0007134b) main_cset6_slider_pane_t10_ParamLimits

0xdcaa,	// (0x0007134b) main_cset6_slider_pane_t10

0xdcce,	// (0x0007136f) main_cset6_slider_pane_t11_ParamLimits

0xdcce,	// (0x0007136f) main_cset6_slider_pane_t11

0x2d4d,	// (0x000663ee) main_cset6_slider_pane_t14_ParamLimits

0x2d4d,	// (0x000663ee) main_cset6_slider_pane_t14

0x2d86,	// (0x00066427) main_cset6_slider_pane_t15_ParamLimits

0x2d86,	// (0x00066427) main_cset6_slider_pane_t15

0x000b,

0xfbd6,	// (0x00073277) main_cset6_slider_pane_t_ParamLimits

0xfbd6,	// (0x00073277) main_cset6_slider_pane_t

0xef7b,	// (0x0007261c) cset_slider_pane_g1_copy1

0xef84,	// (0x00072625) cset_slider_pane_g2_copy1

0xef8d,	// (0x0007262e) cset_slider_pane_g3_copy1

0x77fc,	// (0x0006ae9d) bg_popup_sub_pane_cp011_copy1

0x569d,	// (0x00068d3e) main_cset_text_pane_g1_copy1

0x56a5,	// (0x00068d46) main_cset_text_pane_t1_copy1

0x56b3,	// (0x00068d54) main_cset_text_pane_t2_copy1

0x56c1,	// (0x00068d62) main_cset_text_pane_t3_copy1

0x56cf,	// (0x00068d70) main_cset_text_pane_t4_copy1

0x56dd,	// (0x00068d7e) main_cset_text_pane_t5_copy1

0x56eb,	// (0x00068d8c) main_cset_text_pane_t6_copy1

0x56f9,	// (0x00068d9a) main_cset_text_pane_t7_copy1

0xdcf2,	// (0x00071393) main_cset_text2_pane_t1_copy1

0x77fc,	// (0x0006ae9d) main_ncimui_pane

0xa78a,	// (0x0006de2b) popup_query_ncimui_window_ParamLimits

0xa78a,	// (0x0006de2b) popup_query_ncimui_window

0xb2e1,	// (0x0006e982) field_cale_ev2_pane_g4_ParamLimits

0xb2e1,	// (0x0006e982) field_cale_ev2_pane_g4

0xbff6,	// (0x0006f697) cell_video_dialer_keypad_pane_g2_ParamLimits

0xbff6,	// (0x0006f697) cell_video_dialer_keypad_pane_g2

0x0001,

0xf8b4,	// (0x00072f55) cell_video_dialer_keypad_pane_g_ParamLimits

0xf8b4,	// (0x00072f55) cell_video_dialer_keypad_pane_g

0xc00e,	// (0x0006f6af) cell_video_dialer_keypad_pane_t1

0x77fc,	// (0x0006ae9d) bg_popup_window_pane_cp012

0x1208,	// (0x000648a9) heading_pane_cp06

0x2eae,	// (0x0006654f) ncim_query_content_pane

0x77fc,	// (0x0006ae9d) bg_popup_heading_pane_cp01

0x2eb6,	// (0x00066557) ncim_heading_pane_t1

0x2ec4,	// (0x00066565) ncim_indicator_popup_pane

0x2ed6,	// (0x00066577) ncim_query_button_pane

0x2eea,	// (0x0006658b) ncim_query_content_pane_t1

0x2efc,	// (0x0006659d) ncim_query_content_pane_t2

0x0005,

0xfc15,	// (0x000732b6) ncim_query_content_pane_t

0x2f36,	// (0x000665d7) ncim_query_list_pane

0x2f48,	// (0x000665e9) ncim_query_popup_pane

0x2ec4,	// (0x00066565) ncim_indicator_popup_pane_ParamLimits

0xde14,	// (0x000714b5) ncim_query_content_pane_g1_ParamLimits

0xde14,	// (0x000714b5) ncim_query_content_pane_g1

0x2eea,	// (0x0006658b) ncim_query_content_pane_t1_ParamLimits

0x2efc,	// (0x0006659d) ncim_query_content_pane_t2_ParamLimits

0xde20,	// (0x000714c1) ncim_query_content_pane_t3_ParamLimits

0xde20,	// (0x000714c1) ncim_query_content_pane_t3

0xde3d,	// (0x000714de) ncim_query_content_pane_t4_ParamLimits

0xde3d,	// (0x000714de) ncim_query_content_pane_t4

0xde5a,	// (0x000714fb) ncim_query_content_pane_t5_ParamLimits

0xde5a,	// (0x000714fb) ncim_query_content_pane_t5

0x2f0e,	// (0x000665af) ncim_query_content_pane_t6_ParamLimits

0x2f0e,	// (0x000665af) ncim_query_content_pane_t6

0xfc15,	// (0x000732b6) ncim_query_content_pane_t_ParamLimits

0x2f36,	// (0x000665d7) ncim_query_list_pane_ParamLimits

0x2f48,	// (0x000665e9) ncim_query_popup_pane_ParamLimits

0x2f5c,	// (0x000665fd) wait_bar_pane_cp04

0x77fc,	// (0x0006ae9d) input_focus_pane_cp011

0x2f64,	// (0x00066605) ncim_query_popup_pane_t1

0x2f72,	// (0x00066613) ncim_list_query_list_pane_ParamLimits

0x2f72,	// (0x00066613) ncim_list_query_list_pane

0x77fc,	// (0x0006ae9d) bg_button_pane_cp027

0x2f7f,	// (0x00066620) ncim_query_button_pane_g1

0x77fc,	// (0x0006ae9d) list_highlight_pane_cp012

0x2f89,	// (0x0006662a) ncim_list_query_list_pane_g1

0x2f91,	// (0x00066632) ncim_list_query_list_pane_t1

0xc67f,	// (0x0006fd20) cam4_indicators_pane_g3_ParamLimits

0xc67f,	// (0x0006fd20) cam4_indicators_pane_g3

0xc77f,	// (0x0006fe20) vid4_indicators_pane_g5_ParamLimits

0xc77f,	// (0x0006fe20) vid4_indicators_pane_g5

0xd591,	// (0x00070c32) vid4_progress_pane_g5_ParamLimits

0xd591,	// (0x00070c32) vid4_progress_pane_g5

0xdd2d,	// (0x000713ce) main_ncimui_pane_g1

0xdd83,	// (0x00071424) ncimui_group_query_pane_ParamLimits

0xdd83,	// (0x00071424) ncimui_group_query_pane

0xddbf,	// (0x00071460) ncimui_list_pane_ParamLimits

0xddbf,	// (0x00071460) ncimui_list_pane

0xdde0,	// (0x00071481) ncimui_text_pane_ParamLimits

0xdde0,	// (0x00071481) ncimui_text_pane

0xde77,	// (0x00071518) ncimui_text_pane_t1_ParamLimits

0xde77,	// (0x00071518) ncimui_text_pane_t1

0x2f9f,	// (0x00066640) ncimui_list_single_graphic_pane_ParamLimits

0x2f9f,	// (0x00066640) ncimui_list_single_graphic_pane

0xde96,	// (0x00071537) ncimui_query_pane_ParamLimits

0xde96,	// (0x00071537) ncimui_query_pane

0x77fc,	// (0x0006ae9d) list_highlight_pane_cp013

0x2faf,	// (0x00066650) ncim_list_query_list_pane_t1_copy1

0x2f89,	// (0x0006662a) ncim_list_single_graphic_pane_g1

0x2fbd,	// (0x0006665e) ncim_query_button_pane_cp01

0x2fc9,	// (0x0006666a) ncim_query_entry_pane_ParamLimits

0x2fc9,	// (0x0006666a) ncim_query_entry_pane

0x2fdc,	// (0x0006667d) ncimui_query_pane_g1

0x2fe8,	// (0x00066689) ncimui_query_pane_t1_ParamLimits

0x2fe8,	// (0x00066689) ncimui_query_pane_t1

0x00a1,	// (0x00063742) input_focus_pane_cp012

0x3001,	// (0x000666a2) ncim_query_entry_pane_t1

0x0820,	// (0x00063ec1) main_im_pane_ParamLimits

0x00a1,	// (0x00063742) main_mobtv_pane_ParamLimits

0x00a1,	// (0x00063742) main_mobtv_pane

0xdb9c,	// (0x0007123d) main_cset6_slider_pane_g18_ParamLimits

0xdb9c,	// (0x0007123d) main_cset6_slider_pane_g18

0xdba8,	// (0x00071249) main_cset6_slider_pane_g19_ParamLimits

0xdba8,	// (0x00071249) main_cset6_slider_pane_g19

0x5410,	// (0x00068ab1) bg_main_mobtv_pane_ParamLimits

0x5410,	// (0x00068ab1) bg_main_mobtv_pane

0xdea9,	// (0x0007154a) main_mobtv_info_pane

0xdeb4,	// (0x00071555) main_mobtv_loading_pane_ParamLimits

0xdeb4,	// (0x00071555) main_mobtv_loading_pane

0x3021,	// (0x000666c2) main_mobtv_pg_channel_list_pane

0x302b,	// (0x000666cc) main_mobtv_pg_hdr_pane

0xdec1,	// (0x00071562) main_mobtv_programe_curr_pane_ParamLimits

0xdec1,	// (0x00071562) main_mobtv_programe_curr_pane

0xdece,	// (0x0007156f) main_mobtv_programe_next_pane_ParamLimits

0xdece,	// (0x0007156f) main_mobtv_programe_next_pane

0x3034,	// (0x000666d5) popup_mobtv_noti_window

0x49d7,	// (0x00068078) main_tv_pg_hdr_pane_g1

0x303c,	// (0x000666dd) main_tv_pg_hdr_pane_g2

0x3044,	// (0x000666e5) main_tv_pg_hdr_pane_g3

0x304c,	// (0x000666ed) main_tv_pg_hdr_pane_g4

0x3054,	// (0x000666f5) main_tv_pg_hdr_pane_g5

0x305e,	// (0x000666ff) main_tv_pg_hdr_pane_g6

0x3068,	// (0x00066709) main_tv_pg_hdr_pane_g7

0x3072,	// (0x00066713) main_tv_pg_hdr_pane_g8

0x307c,	// (0x0006671d) main_tv_pg_hdr_pane_g9

0x3086,	// (0x00066727) main_tv_pg_hdr_pane_g10

0x3090,	// (0x00066731) main_tv_pg_hdr_pane_g11

0x000a,

0xfc22,	// (0x000732c3) main_tv_pg_hdr_pane_g

0x309a,	// (0x0006673b) main_tv_pg_hdr_pane_t1

0x30a8,	// (0x00066749) main_tv_pg_hdr_pane_t2

0x30b6,	// (0x00066757) main_tv_pg_hdr_pane_t3

0x30c6,	// (0x00066767) main_tv_pg_hdr_pane_t4

0x30d6,	// (0x00066777) main_tv_pg_hdr_pane_t5

0x0004,

0xfc39,	// (0x000732da) main_tv_pg_hdr_pane_t

0x30e6,	// (0x00066787) single_mobtv_pg_channel_pane_ParamLimits

0x30e6,	// (0x00066787) single_mobtv_pg_channel_pane

0x30f8,	// (0x00066799) single_mobtv_pg_channel_table_pane

0x3101,	// (0x000667a2) single_mobtv_pg_channel_thumb_pane

0x310a,	// (0x000667ab) single_tv_pg_channel_pane_g1

0x3113,	// (0x000667b4) single_tv_pg_channel_pane_g2

0x0001,

0xfc44,	// (0x000732e5) single_tv_pg_channel_pane_g

0x4c3a,	// (0x000682db) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0x4c3a,	// (0x000682db) bg_single_mobtv_pg_channel_thumb_pane

0x311c,	// (0x000667bd) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0x311c,	// (0x000667bd) single_mobtv_pg_channel_thumb_pane_g1

0x312a,	// (0x000667cb) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0x312a,	// (0x000667cb) single_mobtv_pg_channel_thumb_pane_g2

0x3136,	// (0x000667d7) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0x3136,	// (0x000667d7) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfc49,	// (0x000732ea) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfc49,	// (0x000732ea) single_mobtv_pg_channel_thumb_pane_g

0x3142,	// (0x000667e3) single_mobtv_pg_channel_thumb_pane_t1

0x3150,	// (0x000667f1) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc50,	// (0x000732f1) single_mobtv_pg_channel_thumb_pane_t

0x49d7,	// (0x00068078) bg_single_mobtv_pg_channel_table_pane_g1

0x49d7,	// (0x00068078) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf700,	// (0x00072da1) bg_single_mobtv_pg_channel_table_pane_g

0x315e,	// (0x000667ff) single_mobtv_pg_channel_table_pane_t1

0x316c,	// (0x0006680d) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc55,	// (0x000732f6) single_mobtv_pg_channel_table_pane_t

0xdee3,	// (0x00071584) main_mobtv_info_pane_g1_ParamLimits

0xdee3,	// (0x00071584) main_mobtv_info_pane_g1

0xdeff,	// (0x000715a0) main_mobtv_info_pane_t1_ParamLimits

0xdeff,	// (0x000715a0) main_mobtv_info_pane_t1

0xdf77,	// (0x00071618) main_mobtv_info_pane_t2_ParamLimits

0xdf77,	// (0x00071618) main_mobtv_info_pane_t2

0x0002,

0xfc5f,	// (0x00073300) main_mobtv_info_pane_t_ParamLimits

0xfc5f,	// (0x00073300) main_mobtv_info_pane_t

0xe006,	// (0x000716a7) wait_bar_pane_cp05

0xe018,	// (0x000716b9) main_mobtv_loading_pane_g1_ParamLimits

0xe018,	// (0x000716b9) main_mobtv_loading_pane_g1

0xe026,	// (0x000716c7) main_mobtv_loading_pane_g2_ParamLimits

0xe026,	// (0x000716c7) main_mobtv_loading_pane_g2

0xe032,	// (0x000716d3) main_mobtv_loading_pane_g3_ParamLimits

0xe032,	// (0x000716d3) main_mobtv_loading_pane_g3

0x0002,

0xfc66,	// (0x00073307) main_mobtv_loading_pane_g_ParamLimits

0xfc66,	// (0x00073307) main_mobtv_loading_pane_g

0x317a,	// (0x0006681b) main_mobtv_loading_pane_t1_ParamLimits

0x317a,	// (0x0006681b) main_mobtv_loading_pane_t1

0x3192,	// (0x00066833) main_mobtv_loading_pane_t2_ParamLimits

0x3192,	// (0x00066833) main_mobtv_loading_pane_t2

0x0001,

0xfc6d,	// (0x0007330e) main_mobtv_loading_pane_t_ParamLimits

0xfc6d,	// (0x0007330e) main_mobtv_loading_pane_t

0xe040,	// (0x000716e1) wait_bar_pane_cp06_ParamLimits

0xe040,	// (0x000716e1) wait_bar_pane_cp06

0x31b6,	// (0x00066857) main_mobtv_programe_curr_pane_t1

0x31c4,	// (0x00066865) main_mobtv_programe_curr_pane_t2

0x0001,

0xfc72,	// (0x00073313) main_mobtv_programe_curr_pane_t

0x31d2,	// (0x00066873) main_mobtv_programe_next_pane_t1

0x31e0,	// (0x00066881) main_mobtv_programe_next_pane_t2

0x31ee,	// (0x0006688f) main_mobtv_programe_next_pane_t3

0x0002,

0xfc77,	// (0x00073318) main_mobtv_programe_next_pane_t

0x77fc,	// (0x0006ae9d) bg_popup_mobtv_noti_window_pane

0x31fc,	// (0x0006689d) popup_mobtv_noti_window_g1

0x3204,	// (0x000668a5) popup_mobtv_noti_window_t1

0x3212,	// (0x000668b3) popup_mobtv_noti_window_t2

0x0001,

0xfc7e,	// (0x0007331f) popup_mobtv_noti_window_t

0x49d7,	// (0x00068078) bg_popup_mobtv_noti_window_pane_g1

0x77fc,	// (0x0006ae9d) sc_clock_pane

0x77fc,	// (0x0006ae9d) main_fs_bigclock_pane

0xd780,	// (0x00070e21) blid2_tripm_pane_t4_ParamLimits

0xd780,	// (0x00070e21) blid2_tripm_pane_t4

0xe04c,	// (0x000716ed) sc_clock_pane_g1_ParamLimits

0xe04c,	// (0x000716ed) sc_clock_pane_g1

0xe05a,	// (0x000716fb) sc_clock_pane_t1_ParamLimits

0xe05a,	// (0x000716fb) sc_clock_pane_t1

0xe06d,	// (0x0007170e) sc_clock_pane_t2_ParamLimits

0xe06d,	// (0x0007170e) sc_clock_pane_t2

0xe07f,	// (0x00071720) sc_clock_pane_t3_ParamLimits

0xe07f,	// (0x00071720) sc_clock_pane_t3

0x0004,

0xfc83,	// (0x00073324) sc_clock_pane_t_ParamLimits

0xfc83,	// (0x00073324) sc_clock_pane_t

0xe861,	// (0x00071f02) main_fs_bigclock_indicator_pane_ParamLimits

0xe861,	// (0x00071f02) main_fs_bigclock_indicator_pane

0xe103,	// (0x000717a4) main_fs_bigclock_pane_g1_ParamLimits

0xe103,	// (0x000717a4) main_fs_bigclock_pane_g1

0xe86d,	// (0x00071f0e) main_fs_bigclock_pane_t1_ParamLimits

0xe86d,	// (0x00071f0e) main_fs_bigclock_pane_t1

0xe87f,	// (0x00071f20) main_fs_bigclock_pane_t2_ParamLimits

0xe87f,	// (0x00071f20) main_fs_bigclock_pane_t2

0xe893,	// (0x00071f34) main_fs_bigclock_pane_t3_ParamLimits

0xe893,	// (0x00071f34) main_fs_bigclock_pane_t3

0x0002,

0xfe82,	// (0x00073523) main_fs_bigclock_pane_t_ParamLimits

0xfe82,	// (0x00073523) main_fs_bigclock_pane_t

0x3e04,	// (0x000674a5) main_fs_bigclock_indicator_pane_g1

0x2ede,	// (0x0006657f) ncim_query_content_pane_g2_ParamLimits

0x2ede,	// (0x0006657f) ncim_query_content_pane_g2

0x0001,

0xfc10,	// (0x000732b1) ncim_query_content_pane_g_ParamLimits

0xfc10,	// (0x000732b1) ncim_query_content_pane_g

0xe093,	// (0x00071734) sc_clock_pane_t4_ParamLimits

0xe093,	// (0x00071734) sc_clock_pane_t4

0x00a1,	// (0x00063742) main_radioblah_pane

0x5381,	// (0x00068a22) cell_call4_button_pane_t1_copy1_ParamLimits

0x5381,	// (0x00068a22) cell_call4_button_pane_t1_copy1

0xdd35,	// (0x000713d6) main_ncimui_pane_t1_ParamLimits

0xdd35,	// (0x000713d6) main_ncimui_pane_t1

0xdd4f,	// (0x000713f0) main_ncimui_pane_t2_ParamLimits

0xdd4f,	// (0x000713f0) main_ncimui_pane_t2

0x0002,

0xfc09,	// (0x000732aa) main_ncimui_pane_t_ParamLimits

0xfc09,	// (0x000732aa) main_ncimui_pane_t

0x3340,	// (0x000669e1) main_radioblah_anim_pane_ParamLimits

0x3340,	// (0x000669e1) main_radioblah_anim_pane

0x3351,	// (0x000669f2) main_radioblah_info_pane_ParamLimits

0x3351,	// (0x000669f2) main_radioblah_info_pane

0x3365,	// (0x00066a06) main_radioblah_pane_t1_ParamLimits

0x3365,	// (0x00066a06) main_radioblah_pane_t1

0x3381,	// (0x00066a22) main_radioblah_pane_t2_ParamLimits

0x3381,	// (0x00066a22) main_radioblah_pane_t2

0x0003,

0xfca4,	// (0x00073345) main_radioblah_pane_t_ParamLimits

0xfca4,	// (0x00073345) main_radioblah_pane_t

0xe155,	// (0x000717f6) main_radioblah_rocker_ctrl_pane_ParamLimits

0xe155,	// (0x000717f6) main_radioblah_rocker_ctrl_pane

0x33c9,	// (0x00066a6a) main_radioblah_info_pane_t1_ParamLimits

0x33c9,	// (0x00066a6a) main_radioblah_info_pane_t1

0xe19a,	// (0x0007183b) main_radioblah_info_pane_t2_ParamLimits

0xe19a,	// (0x0007183b) main_radioblah_info_pane_t2

0x0003,

0xfcad,	// (0x0007334e) main_radioblah_info_pane_t_ParamLimits

0xfcad,	// (0x0007334e) main_radioblah_info_pane_t

0x49d7,	// (0x00068078) main_radioblah_rocker_ctrl_pane_g1

0xe24a,	// (0x000718eb) main_radioblah_rocker_ctrl_pane_g2

0xe252,	// (0x000718f3) main_radioblah_rocker_ctrl_pane_g3

0xe25a,	// (0x000718fb) main_radioblah_rocker_ctrl_pane_g4

0xe262,	// (0x00071903) main_radioblah_rocker_ctrl_pane_g5

0xe26a,	// (0x0007190b) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfcb6,	// (0x00073357) main_radioblah_rocker_ctrl_pane_g

0xdcf2,	// (0x00071393) main_cset_text2_pane_t1_copy1_ParamLimits

0xc5ad,	// (0x0006fc4e) cam4_image_uncrop_qvga_pane

0xc6f4,	// (0x0006fd95) vid4_image_uncrop_qcif_pane

0xd90e,	// (0x00070faf) cam6_image_uncrop_qvga_pane_ParamLimits

0xd90e,	// (0x00070faf) cam6_image_uncrop_qvga_pane

0x2b38,	// (0x000661d9) vid6_image_uncrop_qcif_pane_ParamLimits

0x2b38,	// (0x000661d9) vid6_image_uncrop_qcif_pane

0x77fc,	// (0x0006ae9d) bg_popup_preview_window_pane_cp03

0x2e90,	// (0x00066531) list_cset_text2_pane

0x2e98,	// (0x00066539) main_cset6_text2_pane_g1

0x2ea0,	// (0x00066541) main_cset6_text2_pane_t1

0xe272,	// (0x00071913) list_cset_text2_pane_t1_ParamLimits

0xe272,	// (0x00071913) list_cset_text2_pane_t1

0x00a1,	// (0x00063742) main_radioblah_pane_ParamLimits

0xdff2,	// (0x00071693) main_mobtv_info_pane_t3_ParamLimits

0xdff2,	// (0x00071693) main_mobtv_info_pane_t3

0xe143,	// (0x000717e4) main_radioblah_pane_g1

0xe16e,	// (0x0007180f) main_radioblah_info_pane_g1

0xe1ef,	// (0x00071890) main_radioblah_info_pane_t3_ParamLimits

0xe1ef,	// (0x00071890) main_radioblah_info_pane_t3

0x9535,	// (0x0006cbd6) highlight_cell_cale_month_pane_ParamLimits

0x9535,	// (0x0006cbd6) highlight_cell_cale_month_pane

0x77fc,	// (0x0006ae9d) main_phob_fisheye_pane

0x4d1c,	// (0x000683bd) scroll_pane_cp0031_ParamLimits

0x4d1c,	// (0x000683bd) scroll_pane_cp0031

0x2c46,	// (0x000662e7) wait_bar_pane_cp08_ParamLimits

0xdab3,	// (0x00071154) cset_list_set_pane_copy1_ParamLimits

0x3403,	// (0x00066aa4) highlight_cell_cale_month_pane_g1

0xe28f,	// (0x00071930) highlight_cell_cale_month_pane_t1

0x58e3,	// (0x00068f84) list_gen_pane_cp01

0x554a,	// (0x00068beb) scroll_pane_01

0x6e6f,	// (0x0006a510) list_single_double_fisheye_pane

0x6e78,	// (0x0006a519) list_double_fisheye_pane_g1_ParamLimits

0x6e78,	// (0x0006a519) list_double_fisheye_pane_g1

0x6e84,	// (0x0006a525) list_double_fisheye_pane_g2_ParamLimits

0x6e84,	// (0x0006a525) list_double_fisheye_pane_g2

0x6e98,	// (0x0006a539) list_double_fisheye_pane_g3_ParamLimits

0x6e98,	// (0x0006a539) list_double_fisheye_pane_g3

0x0004,

0xfcc3,	// (0x00073364) list_double_fisheye_pane_g_ParamLimits

0xfcc3,	// (0x00073364) list_double_fisheye_pane_g

0x6ec1,	// (0x0006a562) list_double_fisheye_pane_t1_ParamLimits

0x6ec1,	// (0x0006a562) list_double_fisheye_pane_t1

0x6edc,	// (0x0006a57d) list_double_fisheye_pane_t2_ParamLimits

0x6edc,	// (0x0006a57d) list_double_fisheye_pane_t2

0x0001,

0xfcce,	// (0x0007336f) list_double_fisheye_pane_t_ParamLimits

0xfcce,	// (0x0007336f) list_double_fisheye_pane_t

0x77fc,	// (0x0006ae9d) main_call5_pane

0xe0b9,	// (0x0007175a) sc_swipe_pane_ParamLimits

0xe0b9,	// (0x0007175a) sc_swipe_pane

0xe2a9,	// (0x0007194a) call5_image_pane_ParamLimits

0xe2a9,	// (0x0007194a) call5_image_pane

0xe2b9,	// (0x0007195a) call5_swipe_1_pane_ParamLimits

0xe2b9,	// (0x0007195a) call5_swipe_1_pane

0xe2c5,	// (0x00071966) call5_swipe_2_pane_ParamLimits

0xe2c5,	// (0x00071966) call5_swipe_2_pane

0xe2df,	// (0x00071980) popup_call5_audio_first_window_ParamLimits

0xe2df,	// (0x00071980) popup_call5_audio_first_window

0x4c3a,	// (0x000682db) call5_swipe_1_pane_g1_ParamLimits

0x4c3a,	// (0x000682db) call5_swipe_1_pane_g1

0x3414,	// (0x00066ab5) call5_swipe_1_pane_g2_ParamLimits

0x3414,	// (0x00066ab5) call5_swipe_1_pane_g2

0x0001,

0xfcd3,	// (0x00073374) call5_swipe_1_pane_g_ParamLimits

0xfcd3,	// (0x00073374) call5_swipe_1_pane_g

0x3420,	// (0x00066ac1) call5_swipe_1_pane_t1_ParamLimits

0x3420,	// (0x00066ac1) call5_swipe_1_pane_t1

0x4c3a,	// (0x000682db) call5_swipe_2_pane_g1_ParamLimits

0x4c3a,	// (0x000682db) call5_swipe_2_pane_g1

0x3435,	// (0x00066ad6) call5_swipe_2_pane_g2_ParamLimits

0x3435,	// (0x00066ad6) call5_swipe_2_pane_g2

0x0001,

0xfcd8,	// (0x00073379) call5_swipe_2_pane_g_ParamLimits

0xfcd8,	// (0x00073379) call5_swipe_2_pane_g

0x3441,	// (0x00066ae2) call5_swipe_2_pane_t1_ParamLimits

0x3441,	// (0x00066ae2) call5_swipe_2_pane_t1

0x3456,	// (0x00066af7) sc_swipe_pane_g1_ParamLimits

0x3456,	// (0x00066af7) sc_swipe_pane_g1

0x3463,	// (0x00066b04) sc_swipe_pane_g2_ParamLimits

0x3463,	// (0x00066b04) sc_swipe_pane_g2

0x0001,

0xfcdd,	// (0x0007337e) sc_swipe_pane_g_ParamLimits

0xfcdd,	// (0x0007337e) sc_swipe_pane_g

0x346f,	// (0x00066b10) sc_swipe_pane_t1_ParamLimits

0x346f,	// (0x00066b10) sc_swipe_pane_t1

0x77fc,	// (0x0006ae9d) main_cmail_launcher_pane

0xe2ed,	// (0x0007198e) aid_size_cell_cmail_l_ParamLimits

0xe2ed,	// (0x0007198e) aid_size_cell_cmail_l

0xe2fd,	// (0x0007199e) grid_cmail_l_pane_ParamLimits

0xe2fd,	// (0x0007199e) grid_cmail_l_pane

0xe30d,	// (0x000719ae) cell_cmail_l_pane_ParamLimits

0xe30d,	// (0x000719ae) cell_cmail_l_pane

0xe321,	// (0x000719c2) cell_cmail_l_pane_g1_ParamLimits

0xe321,	// (0x000719c2) cell_cmail_l_pane_g1

0xe32d,	// (0x000719ce) cell_cmail_l_pane_t1_ParamLimits

0xe32d,	// (0x000719ce) cell_cmail_l_pane_t1

0x3484,	// (0x00066b25) cell_cmail_l_pane_t2_ParamLimits

0x3484,	// (0x00066b25) cell_cmail_l_pane_t2

0x0001,

0xfce2,	// (0x00073383) cell_cmail_l_pane_t_ParamLimits

0xfce2,	// (0x00073383) cell_cmail_l_pane_t

0x00a1,	// (0x00063742) grid_highlight_pane_cp018_ParamLimits

0x00a1,	// (0x00063742) grid_highlight_pane_cp018

0x7913,	// (0x0006afb4) main2_pane_ParamLimits

0x7913,	// (0x0006afb4) main2_pane

0x08dd,	// (0x00063f7e) popup_sp_fs_action_menu_bg_pane_g1

0x08e5,	// (0x00063f86) popup_sp_fs_action_menu_bg_pane_g2

0x08ed,	// (0x00063f8e) popup_sp_fs_action_menu_bg_pane_g3

0x08f5,	// (0x00063f96) popup_sp_fs_action_menu_bg_pane_g4

0x08fd,	// (0x00063f9e) popup_sp_fs_action_menu_bg_pane_g5

0x0905,	// (0x00063fa6) popup_sp_fs_action_menu_bg_pane_g6

0x090d,	// (0x00063fae) popup_sp_fs_action_menu_bg_pane_g7

0x0915,	// (0x00063fb6) popup_sp_fs_action_menu_bg_pane_g8

0x091d,	// (0x00063fbe) popup_sp_fs_action_menu_bg_pane_g9

0x0925,	// (0x00063fc6) popup_sp_fs_action_menu_bg_pane_g10

0x0925,	// (0x00063fc6) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf1ac,	// (0x0007284d) popup_sp_fs_action_menu_bg_pane_g

0x66b0,	// (0x00069d51) list_medium_line_x2_t3_g3_g1_ParamLimits

0x66b0,	// (0x00069d51) list_medium_line_x2_t3_g3_g1

0x66bc,	// (0x00069d5d) list_medium_line_x2_t3_g3_g2_ParamLimits

0x66bc,	// (0x00069d5d) list_medium_line_x2_t3_g3_g2

0x66c8,	// (0x00069d69) list_medium_line_x2_t3_g3_g3_ParamLimits

0x66c8,	// (0x00069d69) list_medium_line_x2_t3_g3_g3

0x0002,

0xf25c,	// (0x000728fd) list_medium_line_x2_t3_g3_g_ParamLimits

0xf25c,	// (0x000728fd) list_medium_line_x2_t3_g3_g

0x66d4,	// (0x00069d75) list_medium_line_x2_t3_g3_t1_ParamLimits

0x66d4,	// (0x00069d75) list_medium_line_x2_t3_g3_t1

0x66e9,	// (0x00069d8a) list_medium_line_x2_t3_g3_t2_ParamLimits

0x66e9,	// (0x00069d8a) list_medium_line_x2_t3_g3_t2

0x66fb,	// (0x00069d9c) list_medium_line_x2_t3_g3_t3_ParamLimits

0x66fb,	// (0x00069d9c) list_medium_line_x2_t3_g3_t3

0x0002,

0xf263,	// (0x00072904) list_medium_line_x2_t3_g3_t_ParamLimits

0xf263,	// (0x00072904) list_medium_line_x2_t3_g3_t

0x66b0,	// (0x00069d51) list_medium_line_x2_t3_g2_g1_ParamLimits

0x66b0,	// (0x00069d51) list_medium_line_x2_t3_g2_g1

0x66c8,	// (0x00069d69) list_medium_line_x2_t3_g2_g2_ParamLimits

0x66c8,	// (0x00069d69) list_medium_line_x2_t3_g2_g2

0x0001,

0xf26a,	// (0x0007290b) list_medium_line_x2_t3_g2_g_ParamLimits

0xf26a,	// (0x0007290b) list_medium_line_x2_t3_g2_g

0x6710,	// (0x00069db1) list_medium_line_x2_t3_g2_t1_ParamLimits

0x6710,	// (0x00069db1) list_medium_line_x2_t3_g2_t1

0x6726,	// (0x00069dc7) list_medium_line_x2_t3_g2_t2_ParamLimits

0x6726,	// (0x00069dc7) list_medium_line_x2_t3_g2_t2

0x6738,	// (0x00069dd9) list_medium_line_x2_t3_g2_t3_ParamLimits

0x6738,	// (0x00069dd9) list_medium_line_x2_t3_g2_t3

0x0002,

0xf26f,	// (0x00072910) list_medium_line_x2_t3_g2_t_ParamLimits

0xf26f,	// (0x00072910) list_medium_line_x2_t3_g2_t

0x66b0,	// (0x00069d51) list_medium_line_x2_t4_g4_g1_ParamLimits

0x66b0,	// (0x00069d51) list_medium_line_x2_t4_g4_g1

0x6755,	// (0x00069df6) list_medium_line_x2_t4_g4_g2_ParamLimits

0x6755,	// (0x00069df6) list_medium_line_x2_t4_g4_g2

0x66bc,	// (0x00069d5d) list_medium_line_x2_t4_g4_g3_ParamLimits

0x66bc,	// (0x00069d5d) list_medium_line_x2_t4_g4_g3

0x6761,	// (0x00069e02) list_medium_line_x2_t4_g4_g4_ParamLimits

0x6761,	// (0x00069e02) list_medium_line_x2_t4_g4_g4

0x0003,

0xf276,	// (0x00072917) list_medium_line_x2_t4_g4_g_ParamLimits

0xf276,	// (0x00072917) list_medium_line_x2_t4_g4_g

0x676d,	// (0x00069e0e) list_medium_line_x2_t4_g4_t1_ParamLimits

0x676d,	// (0x00069e0e) list_medium_line_x2_t4_g4_t1

0x6787,	// (0x00069e28) list_medium_line_x2_t4_g4_t2_ParamLimits

0x6787,	// (0x00069e28) list_medium_line_x2_t4_g4_t2

0x679d,	// (0x00069e3e) list_medium_line_x2_t4_g4_t3_ParamLimits

0x679d,	// (0x00069e3e) list_medium_line_x2_t4_g4_t3

0x67b2,	// (0x00069e53) list_medium_line_x2_t4_g4_t4_ParamLimits

0x67b2,	// (0x00069e53) list_medium_line_x2_t4_g4_t4

0x0003,

0xf27f,	// (0x00072920) list_medium_line_x2_t4_g4_t_ParamLimits

0xf27f,	// (0x00072920) list_medium_line_x2_t4_g4_t

0x66b0,	// (0x00069d51) list_medium_line_x2_t2_g4_g1_ParamLimits

0x66b0,	// (0x00069d51) list_medium_line_x2_t2_g4_g1

0x6755,	// (0x00069df6) list_medium_line_x2_t2_g4_g2_ParamLimits

0x6755,	// (0x00069df6) list_medium_line_x2_t2_g4_g2

0x66bc,	// (0x00069d5d) list_medium_line_x2_t2_g4_g3_ParamLimits

0x66bc,	// (0x00069d5d) list_medium_line_x2_t2_g4_g3

0x66c8,	// (0x00069d69) list_medium_line_x2_t2_g4_g4_ParamLimits

0x66c8,	// (0x00069d69) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2e6,	// (0x00072987) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2e6,	// (0x00072987) list_medium_line_x2_t2_g4_g

0x67c4,	// (0x00069e65) list_medium_line_x2_t2_g4_t1_ParamLimits

0x67c4,	// (0x00069e65) list_medium_line_x2_t2_g4_t1

0x66fb,	// (0x00069d9c) list_medium_line_x2_t2_g4_t2_ParamLimits

0x66fb,	// (0x00069d9c) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2ef,	// (0x00072990) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2ef,	// (0x00072990) list_medium_line_x2_t2_g4_t

0x66b0,	// (0x00069d51) list_medium_line_x2_t2_g3_g1_ParamLimits

0x66b0,	// (0x00069d51) list_medium_line_x2_t2_g3_g1

0x66bc,	// (0x00069d5d) list_medium_line_x2_t2_g3_g2_ParamLimits

0x66bc,	// (0x00069d5d) list_medium_line_x2_t2_g3_g2

0x66c8,	// (0x00069d69) list_medium_line_x2_t2_g3_g3_ParamLimits

0x66c8,	// (0x00069d69) list_medium_line_x2_t2_g3_g3

0x0002,

0xf25c,	// (0x000728fd) list_medium_line_x2_t2_g3_g_ParamLimits

0xf25c,	// (0x000728fd) list_medium_line_x2_t2_g3_g

0x67d9,	// (0x00069e7a) list_medium_line_x2_t2_g3_t1_ParamLimits

0x67d9,	// (0x00069e7a) list_medium_line_x2_t2_g3_t1

0x66fb,	// (0x00069d9c) list_medium_line_x2_t2_g3_t2_ParamLimits

0x66fb,	// (0x00069d9c) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2f4,	// (0x00072995) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2f4,	// (0x00072995) list_medium_line_x2_t2_g3_t

0x96e7,	// (0x0006cd88) main_sp_fs_list_pane_ParamLimits

0x96e7,	// (0x0006cd88) main_sp_fs_list_pane

0x96f3,	// (0x0006cd94) sp_fs_scroll_pane_ParamLimits

0x96f3,	// (0x0006cd94) sp_fs_scroll_pane

0x67ee,	// (0x00069e8f) list_medium_line_x2_t3_t1

0x67fe,	// (0x00069e9f) list_medium_line_x2_t3_t2

0x680c,	// (0x00069ead) list_medium_line_x2_t3_t3

0x0002,

0xf33f,	// (0x000729e0) list_medium_line_x2_t3_t

0x681a,	// (0x00069ebb) list_medium_line_x3_t4_t1

0x682a,	// (0x00069ecb) list_medium_line_x3_t4_t2

0x6838,	// (0x00069ed9) list_medium_line_x3_t4_t3

0x680c,	// (0x00069ead) list_medium_line_x3_t4_t4

0x0003,

0xf346,	// (0x000729e7) list_medium_line_x3_t4_t

0x6846,	// (0x00069ee7) list_medium_line_x4_t5_t1

0x6856,	// (0x00069ef7) list_medium_line_x4_t5_t2

0x6838,	// (0x00069ed9) list_medium_line_x4_t5_t3

0x6864,	// (0x00069f05) list_medium_line_x4_t5_t4

0x680c,	// (0x00069ead) list_medium_line_x4_t5_t5

0x0004,

0xf34f,	// (0x000729f0) list_medium_line_x4_t5_t

0x66b0,	// (0x00069d51) list_medium_line_t4_g4_g1_ParamLimits

0x66b0,	// (0x00069d51) list_medium_line_t4_g4_g1

0x6761,	// (0x00069e02) list_medium_line_t4_g4_g2_ParamLimits

0x6761,	// (0x00069e02) list_medium_line_t4_g4_g2

0x6872,	// (0x00069f13) list_medium_line_t4_g4_g3_ParamLimits

0x6872,	// (0x00069f13) list_medium_line_t4_g4_g3

0x66c8,	// (0x00069d69) list_medium_line_t4_g4_g4_ParamLimits

0x66c8,	// (0x00069d69) list_medium_line_t4_g4_g4

0x0003,

0xf35a,	// (0x000729fb) list_medium_line_t4_g4_g_ParamLimits

0xf35a,	// (0x000729fb) list_medium_line_t4_g4_g

0x687e,	// (0x00069f1f) list_medium_line_t4_g4_t1_ParamLimits

0x687e,	// (0x00069f1f) list_medium_line_t4_g4_t1

0x6893,	// (0x00069f34) list_medium_line_t4_g4_t2_ParamLimits

0x6893,	// (0x00069f34) list_medium_line_t4_g4_t2

0x68a8,	// (0x00069f49) list_medium_line_t4_g4_t3_ParamLimits

0x68a8,	// (0x00069f49) list_medium_line_t4_g4_t3

0x66fb,	// (0x00069d9c) list_medium_line_t4_g4_t4_ParamLimits

0x66fb,	// (0x00069d9c) list_medium_line_t4_g4_t4

0x0003,

0xf363,	// (0x00072a04) list_medium_line_t4_g4_t_ParamLimits

0xf363,	// (0x00072a04) list_medium_line_t4_g4_t

0x9810,	// (0x0006ceb1) chi_dic_find_pane_g1

0xa759,	// (0x0006ddfa) main_tport_pane

0x6af6,	// (0x0006a197) list_medium_line_plain_t1

0x6b04,	// (0x0006a1a5) list_medium_line_t2_g2_g1_ParamLimits

0x6b04,	// (0x0006a1a5) list_medium_line_t2_g2_g1

0x6b10,	// (0x0006a1b1) list_medium_line_t2_g2_g2_ParamLimits

0x6b10,	// (0x0006a1b1) list_medium_line_t2_g2_g2

0x0001,

0xfa1f,	// (0x000730c0) list_medium_line_t2_g2_g_ParamLimits

0xfa1f,	// (0x000730c0) list_medium_line_t2_g2_g

0x6b1c,	// (0x0006a1bd) list_medium_line_t2_g2_t1_ParamLimits

0x6b1c,	// (0x0006a1bd) list_medium_line_t2_g2_t1

0x6b36,	// (0x0006a1d7) list_medium_line_t2_g2_t2_ParamLimits

0x6b36,	// (0x0006a1d7) list_medium_line_t2_g2_t2

0x0001,

0xfa24,	// (0x000730c5) list_medium_line_t2_g2_t_ParamLimits

0xfa24,	// (0x000730c5) list_medium_line_t2_g2_t

0x6d55,	// (0x0006a3f6) aid_sp_fs_list_icon_a_sm

0xd5f2,	// (0x00070c93) aid_sp_fs_list_icon_d

0x3ea8,	// (0x00067549) aid_sp_fs_text_primary

0x6d5d,	// (0x0006a3fe) aid_sp_fs_text_secondary

0x6d66,	// (0x0006a407) list_medium_line

0x6d66,	// (0x0006a407) list_medium_line_g2

0x6d66,	// (0x0006a407) list_medium_line_g3

0x6d66,	// (0x0006a407) list_medium_line_plain

0x6d66,	// (0x0006a407) list_medium_line_plain_t2

0x6d66,	// (0x0006a407) list_medium_line_plain_t3

0x6d66,	// (0x0006a407) list_medium_line_right_icon

0x6d66,	// (0x0006a407) list_medium_line_right_iconx2

0x6d66,	// (0x0006a407) list_medium_line_t2

0x6d66,	// (0x0006a407) list_medium_line_t2_g2

0x6d66,	// (0x0006a407) list_medium_line_t2_g3

0x6d66,	// (0x0006a407) list_medium_line_t2_right_icon

0x6d66,	// (0x0006a407) list_medium_line_t2_right_iconx2

0x6d66,	// (0x0006a407) list_medium_line_t3

0x6d66,	// (0x0006a407) list_medium_line_t3_g2

0x6d66,	// (0x0006a407) list_medium_line_t3_g3

0x6d66,	// (0x0006a407) list_medium_line_t3_right_iconx2

0x6d6f,	// (0x0006a410) list_medium_line_t4_g4

0x6d78,	// (0x0006a419) list_medium_line_x2

0x6d78,	// (0x0006a419) list_medium_line_x2_t2_g2

0x6d78,	// (0x0006a419) list_medium_line_x2_t2_g3

0x6d78,	// (0x0006a419) list_medium_line_x2_t2_g4

0x6d78,	// (0x0006a419) list_medium_line_x2_t3

0x6d78,	// (0x0006a419) list_medium_line_x2_t3_g2

0x6d78,	// (0x0006a419) list_medium_line_x2_t3_g3

0x6d78,	// (0x0006a419) list_medium_line_x2_t3_g4

0x6d78,	// (0x0006a419) list_medium_line_x2_t4_g2

0x6d78,	// (0x0006a419) list_medium_line_x2_t4_g4

0x6d81,	// (0x0006a422) list_medium_line_x3

0x6d81,	// (0x0006a422) list_medium_line_x3_t4

0x6d81,	// (0x0006a422) list_medium_line_x3_t4_g4

0x6d6f,	// (0x0006a410) list_medium_line_x4_t4

0x6d6f,	// (0x0006a410) list_medium_line_x4_t4_g7

0x6d6f,	// (0x0006a410) list_medium_line_x4_t5

0x6d8a,	// (0x0006a42b) list_single_fs_dyc_pane_ParamLimits

0x6d8a,	// (0x0006a42b) list_single_fs_dyc_pane

0x66b0,	// (0x00069d51) list_medium_line_x4_t4_g7_g1_ParamLimits

0x66b0,	// (0x00069d51) list_medium_line_x4_t4_g7_g1

0x6d9e,	// (0x0006a43f) list_medium_line_x4_t4_g7_g2_ParamLimits

0x6d9e,	// (0x0006a43f) list_medium_line_x4_t4_g7_g2

0x6daa,	// (0x0006a44b) list_medium_line_x4_t4_g7_g3_ParamLimits

0x6daa,	// (0x0006a44b) list_medium_line_x4_t4_g7_g3

0x6db9,	// (0x0006a45a) list_medium_line_x4_t4_g7_g4_ParamLimits

0x6db9,	// (0x0006a45a) list_medium_line_x4_t4_g7_g4

0x6dc5,	// (0x0006a466) list_medium_line_x4_t4_g7_g5_ParamLimits

0x6dc5,	// (0x0006a466) list_medium_line_x4_t4_g7_g5

0x6dd4,	// (0x0006a475) list_medium_line_x4_t4_g7_g6_ParamLimits

0x6dd4,	// (0x0006a475) list_medium_line_x4_t4_g7_g6

0x6de3,	// (0x0006a484) list_medium_line_x4_t4_g7_g7_ParamLimits

0x6de3,	// (0x0006a484) list_medium_line_x4_t4_g7_g7

0x0006,

0xfbef,	// (0x00073290) list_medium_line_x4_t4_g7_g_ParamLimits

0xfbef,	// (0x00073290) list_medium_line_x4_t4_g7_g

0x6def,	// (0x0006a490) list_medium_line_x4_t4_g7_t1_ParamLimits

0x6def,	// (0x0006a490) list_medium_line_x4_t4_g7_t1

0x6e04,	// (0x0006a4a5) list_medium_line_x4_t4_g7_t2_ParamLimits

0x6e04,	// (0x0006a4a5) list_medium_line_x4_t4_g7_t2

0x6e19,	// (0x0006a4ba) list_medium_line_x4_t4_g7_t3_ParamLimits

0x6e19,	// (0x0006a4ba) list_medium_line_x4_t4_g7_t3

0x6e2e,	// (0x0006a4cf) list_medium_line_x4_t4_g7_t4_ParamLimits

0x6e2e,	// (0x0006a4cf) list_medium_line_x4_t4_g7_t4

0x6e40,	// (0x0006a4e1) list_medium_line_x4_t4_g7_t5_ParamLimits

0x6e40,	// (0x0006a4e1) list_medium_line_x4_t4_g7_t5

0x0004,

0xfbfe,	// (0x0007329f) list_medium_line_x4_t4_g7_t_ParamLimits

0xfbfe,	// (0x0007329f) list_medium_line_x4_t4_g7_t

0x6e52,	// (0x0006a4f3) list_single_dyc_row_pane_ParamLimits

0x6e52,	// (0x0006a4f3) list_single_dyc_row_pane

0xe29d,	// (0x0007193e) call5_gesture_pane_ParamLimits

0xe29d,	// (0x0007193e) call5_gesture_pane

0xe2d1,	// (0x00071972) call5_windows_pane_ParamLimits

0xe2d1,	// (0x00071972) call5_windows_pane

0xe343,	// (0x000719e4) call5_swipe_1_pane_cp_ParamLimits

0xe343,	// (0x000719e4) call5_swipe_1_pane_cp

0xe34f,	// (0x000719f0) call5_swipe_2_pane_cp_ParamLimits

0xe34f,	// (0x000719f0) call5_swipe_2_pane_cp

0x1474,	// (0x00064b15) call5_image_pane_cp

0xe35b,	// (0x000719fc) popup_call5_audio_first_window_cp_ParamLimits

0xe35b,	// (0x000719fc) popup_call5_audio_first_window_cp

0x3456,	// (0x00066af7) call5_swipe_1_pane_g1_cp_ParamLimits

0x3456,	// (0x00066af7) call5_swipe_1_pane_g1_cp

0x3496,	// (0x00066b37) call5_swipe_1_pane_g2_cp

0x346f,	// (0x00066b10) call5_swipe_1_pane_t1_cp_ParamLimits

0x346f,	// (0x00066b10) call5_swipe_1_pane_t1_cp

0x3456,	// (0x00066af7) call5_swipe_2_pane_g1_cp_ParamLimits

0x3456,	// (0x00066af7) call5_swipe_2_pane_g1_cp

0x349e,	// (0x00066b3f) call5_swipe_2_pane_g2_cp

0x34a6,	// (0x00066b47) call5_swipe_2_pane_t1_cp_ParamLimits

0x34a6,	// (0x00066b47) call5_swipe_2_pane_t1_cp

0x00a1,	// (0x00063742) main_sp_fs_email_pane

0x34bb,	// (0x00066b5c) main_sp_fs_listscroll_pane_te

0x6efe,	// (0x0006a59f) popup_sp_fs_action_menu_pane_ParamLimits

0x6efe,	// (0x0006a59f) popup_sp_fs_action_menu_pane

0x49d7,	// (0x00068078) bg_sp_fs_ctrlbar_pane_g1

0x3508,	// (0x00066ba9) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0x3511,	// (0x00066bb2) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0x351a,	// (0x00066bbb) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0x49d7,	// (0x00068078) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfce7,	// (0x00073388) bg_sp_fs_ctrlbar_ddmenu_pane_g

0x47b3,	// (0x00067e54) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0x47b3,	// (0x00067e54) bg_sp_fs_ctrlbar_ddmenu_pane

0x3523,	// (0x00066bc4) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0x3523,	// (0x00066bc4) main_sp_fs_ctrlbar_ddmenu_pane_g1

0x352f,	// (0x00066bd0) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0x352f,	// (0x00066bd0) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfcf0,	// (0x00073391) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfcf0,	// (0x00073391) main_sp_fs_ctrlbar_ddmenu_pane_g

0x353b,	// (0x00066bdc) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0x353b,	// (0x00066bdc) main_sp_fs_ctrlbar_ddmenu_pane_t1

0x6f42,	// (0x0006a5e3) list_medium_line_t2_right_icon_g1

0x6f4a,	// (0x0006a5eb) list_medium_line_t2_right_icon_t1

0x6f5a,	// (0x0006a5fb) list_medium_line_t2_right_icon_t2

0x0001,

0xfcf5,	// (0x00073396) list_medium_line_t2_right_icon_t

0x28b6,	// (0x00065f57) bg_sp_fs_ctrlbar_pane_ParamLimits

0x28b6,	// (0x00065f57) bg_sp_fs_ctrlbar_pane

0xe3c0,	// (0x00071a61) main_sp_fs_ctrlbar_button_pane_cp01

0xe3c8,	// (0x00071a69) main_sp_fs_ctrlbar_ddmenu_pane

0x3595,	// (0x00066c36) main_sp_fs_ctrlbar_pane_g1

0x35a1,	// (0x00066c42) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfcfa,	// (0x0007339b) main_sp_fs_ctrlbar_pane_g

0x35ad,	// (0x00066c4e) main_sp_fs_ctrlbar_pane_t1

0x6f68,	// (0x0006a609) main_sp_fs_ctrlbar_pane

0x6f84,	// (0x0006a625) main_sp_fs_listscroll_pane_te_cp01

0x6f95,	// (0x0006a636) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x6f95,	// (0x0006a636) popup_sp_fs_action_menu_pane_cp01

0x00a1,	// (0x00063742) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0x00a1,	// (0x00063742) bg_sp_fs_highlight_list_pane_cp01

0x6faf,	// (0x0006a650) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0x6faf,	// (0x0006a650) sp_fs_action_menu_list_gene_pane_g1

0x35d1,	// (0x00066c72) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0x35d1,	// (0x00066c72) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfcff,	// (0x000733a0) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfcff,	// (0x000733a0) sp_fs_action_menu_list_gene_pane_g

0x6fbe,	// (0x0006a65f) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0x6fbe,	// (0x0006a65f) sp_fs_action_menu_list_gene_pane_t1

0x6fd6,	// (0x0006a677) sp_fs_action_menu_list_gene_pane_ParamLimits

0x6fd6,	// (0x0006a677) sp_fs_action_menu_list_gene_pane

0x3615,	// (0x00066cb6) popup_sp_fs_action_menu_bg_pane_ParamLimits

0x3615,	// (0x00066cb6) popup_sp_fs_action_menu_bg_pane

0x6ff7,	// (0x0006a698) sp_fs_action_menu_list_pane_ParamLimits

0x6ff7,	// (0x0006a698) sp_fs_action_menu_list_pane

0x3643,	// (0x00066ce4) sp_fs_scroll_pane_cp01_ParamLimits

0x3643,	// (0x00066ce4) sp_fs_scroll_pane_cp01

0x7019,	// (0x0006a6ba) list_medium_line_plain_t2_t1

0x7029,	// (0x0006a6ca) list_medium_line_plain_t2_t2

0x0001,

0xfd04,	// (0x000733a5) list_medium_line_plain_t2_t

0x7037,	// (0x0006a6d8) list_medium_line_plain_t3_t1

0x7047,	// (0x0006a6e8) list_medium_line_plain_t3_t2

0x7055,	// (0x0006a6f6) list_medium_line_plain_t3_t3

0x0002,

0xfd09,	// (0x000733aa) list_medium_line_plain_t3_t

0x66b0,	// (0x00069d51) list_medium_line_x2_t2_g2_g1_ParamLimits

0x66b0,	// (0x00069d51) list_medium_line_x2_t2_g2_g1

0x66c8,	// (0x00069d69) list_medium_line_x2_t2_g2_g2_ParamLimits

0x66c8,	// (0x00069d69) list_medium_line_x2_t2_g2_g2

0x0001,

0xf26a,	// (0x0007290b) list_medium_line_x2_t2_g2_g_ParamLimits

0xf26a,	// (0x0007290b) list_medium_line_x2_t2_g2_g

0x687e,	// (0x00069f1f) list_medium_line_x2_t2_g2_t1_ParamLimits

0x687e,	// (0x00069f1f) list_medium_line_x2_t2_g2_t1

0x66fb,	// (0x00069d9c) list_medium_line_x2_t2_g2_t2_ParamLimits

0x66fb,	// (0x00069d9c) list_medium_line_x2_t2_g2_t2

0x0001,

0xfd10,	// (0x000733b1) list_medium_line_x2_t2_g2_t_ParamLimits

0xfd10,	// (0x000733b1) list_medium_line_x2_t2_g2_t

0x66b0,	// (0x00069d51) list_medium_line_x2_t4_g2_g1_ParamLimits

0x66b0,	// (0x00069d51) list_medium_line_x2_t4_g2_g1

0x7063,	// (0x0006a704) list_medium_line_x2_t4_g2_g2_ParamLimits

0x7063,	// (0x0006a704) list_medium_line_x2_t4_g2_g2

0x0001,

0xfd15,	// (0x000733b6) list_medium_line_x2_t4_g2_g_ParamLimits

0xfd15,	// (0x000733b6) list_medium_line_x2_t4_g2_g

0x7075,	// (0x0006a716) list_medium_line_x2_t4_g2_t1_ParamLimits

0x7075,	// (0x0006a716) list_medium_line_x2_t4_g2_t1

0x708c,	// (0x0006a72d) list_medium_line_x2_t4_g2_t2_ParamLimits

0x708c,	// (0x0006a72d) list_medium_line_x2_t4_g2_t2

0x70a1,	// (0x0006a742) list_medium_line_x2_t4_g2_t3_ParamLimits

0x70a1,	// (0x0006a742) list_medium_line_x2_t4_g2_t3

0x66fb,	// (0x00069d9c) list_medium_line_x2_t4_g2_t4_ParamLimits

0x66fb,	// (0x00069d9c) list_medium_line_x2_t4_g2_t4

0x0003,

0xfd1a,	// (0x000733bb) list_medium_line_x2_t4_g2_t_ParamLimits

0xfd1a,	// (0x000733bb) list_medium_line_x2_t4_g2_t

0x70b3,	// (0x0006a754) list_medium_line_t3_right_iconx2_g1

0x6f42,	// (0x0006a5e3) list_medium_line_t3_right_iconx2_g2

0x70bb,	// (0x0006a75c) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfd23,	// (0x000733c4) list_medium_line_t3_right_iconx2_g

0x70c3,	// (0x0006a764) list_medium_line_t3_right_iconx2_t1

0x70d3,	// (0x0006a774) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfd2a,	// (0x000733cb) list_medium_line_t3_right_iconx2_t

0x66b0,	// (0x00069d51) list_medium_line_x3_t4_g4_g1_ParamLimits

0x66b0,	// (0x00069d51) list_medium_line_x3_t4_g4_g1

0x66bc,	// (0x00069d5d) list_medium_line_x3_t4_g4_g2_ParamLimits

0x66bc,	// (0x00069d5d) list_medium_line_x3_t4_g4_g2

0x6761,	// (0x00069e02) list_medium_line_x3_t4_g4_g3_ParamLimits

0x6761,	// (0x00069e02) list_medium_line_x3_t4_g4_g3

0x70e1,	// (0x0006a782) list_medium_line_x3_t4_g4_g4_ParamLimits

0x70e1,	// (0x0006a782) list_medium_line_x3_t4_g4_g4

0x0003,

0xfd2f,	// (0x000733d0) list_medium_line_x3_t4_g4_g_ParamLimits

0xfd2f,	// (0x000733d0) list_medium_line_x3_t4_g4_g

0x70ed,	// (0x0006a78e) list_medium_line_x3_t4_g4_t1_ParamLimits

0x70ed,	// (0x0006a78e) list_medium_line_x3_t4_g4_t1

0x7104,	// (0x0006a7a5) list_medium_line_x3_t4_g4_t2_ParamLimits

0x7104,	// (0x0006a7a5) list_medium_line_x3_t4_g4_t2

0x6893,	// (0x00069f34) list_medium_line_x3_t4_g4_t3_ParamLimits

0x6893,	// (0x00069f34) list_medium_line_x3_t4_g4_t3

0x7119,	// (0x0006a7ba) list_medium_line_x3_t4_g4_t4_ParamLimits

0x7119,	// (0x0006a7ba) list_medium_line_x3_t4_g4_t4

0x0003,

0xfd38,	// (0x000733d9) list_medium_line_x3_t4_g4_t_ParamLimits

0xfd38,	// (0x000733d9) list_medium_line_x3_t4_g4_t

0x7136,	// (0x0006a7d7) list_single_dyc_row_text_pane_t1_ParamLimits

0x7136,	// (0x0006a7d7) list_single_dyc_row_text_pane_t1

0x716d,	// (0x0006a80e) list_single_dyc_row_text_pane_t2_ParamLimits

0x716d,	// (0x0006a80e) list_single_dyc_row_text_pane_t2

0x71c7,	// (0x0006a868) list_single_dyc_row_text_pane_t3_ParamLimits

0x71c7,	// (0x0006a868) list_single_dyc_row_text_pane_t3

0x0002,

0xfd41,	// (0x000733e2) list_single_dyc_row_text_pane_t_ParamLimits

0xfd41,	// (0x000733e2) list_single_dyc_row_text_pane_t

0x71d9,	// (0x0006a87a) list_single_dyc_row_pane_g1_ParamLimits

0x71d9,	// (0x0006a87a) list_single_dyc_row_pane_g1

0x71e5,	// (0x0006a886) list_single_dyc_row_pane_g2_ParamLimits

0x71e5,	// (0x0006a886) list_single_dyc_row_pane_g2

0x71f1,	// (0x0006a892) list_single_dyc_row_pane_g3_ParamLimits

0x71f1,	// (0x0006a892) list_single_dyc_row_pane_g3

0x71fd,	// (0x0006a89e) list_single_dyc_row_pane_g4_ParamLimits

0x71fd,	// (0x0006a89e) list_single_dyc_row_pane_g4

0x0003,

0xfd48,	// (0x000733e9) list_single_dyc_row_pane_g_ParamLimits

0xfd48,	// (0x000733e9) list_single_dyc_row_pane_g

0x7209,	// (0x0006a8aa) list_single_dyc_row_text_pane_ParamLimits

0x7209,	// (0x0006a8aa) list_single_dyc_row_text_pane

0x77fc,	// (0x0006ae9d) bg_sp_fs_scroll_pane

0x370d,	// (0x00066dae) thumb_sp_fs_scroll_pane

0x6b04,	// (0x0006a1a5) list_medium_line_g1_ParamLimits

0x6b04,	// (0x0006a1a5) list_medium_line_g1

0x7228,	// (0x0006a8c9) list_medium_line_t1_ParamLimits

0x7228,	// (0x0006a8c9) list_medium_line_t1

0x66b0,	// (0x00069d51) list_medium_line_x2_g1_ParamLimits

0x66b0,	// (0x00069d51) list_medium_line_x2_g1

0x66bc,	// (0x00069d5d) list_medium_line_x2_g2_ParamLimits

0x66bc,	// (0x00069d5d) list_medium_line_x2_g2

0x0001,

0xfd51,	// (0x000733f2) list_medium_line_x2_g_ParamLimits

0xfd51,	// (0x000733f2) list_medium_line_x2_g

0x723d,	// (0x0006a8de) list_medium_line_x2_t1_ParamLimits

0x723d,	// (0x0006a8de) list_medium_line_x2_t1

0x66b0,	// (0x00069d51) list_medium_line_x3_g1_ParamLimits

0x66b0,	// (0x00069d51) list_medium_line_x3_g1

0x66bc,	// (0x00069d5d) list_medium_line_x3_g2_ParamLimits

0x66bc,	// (0x00069d5d) list_medium_line_x3_g2

0x0001,

0xfd51,	// (0x000733f2) list_medium_line_x3_g_ParamLimits

0xfd51,	// (0x000733f2) list_medium_line_x3_g

0x723d,	// (0x0006a8de) list_medium_line_x3_t1_ParamLimits

0x723d,	// (0x0006a8de) list_medium_line_x3_t1

0x3741,	// (0x00066de2) thumb_sp_fs_scroll_pane_g1

0x374a,	// (0x00066deb) thumb_sp_fs_scroll_pane_g2

0x3753,	// (0x00066df4) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfd56,	// (0x000733f7) thumb_sp_fs_scroll_pane_g

0x3741,	// (0x00066de2) bg_sp_fs_scroll_pane_g1

0x374a,	// (0x00066deb) bg_sp_fs_scroll_pane_g2

0x3753,	// (0x00066df4) bg_sp_fs_scroll_pane_g3

0x0002,

0xfd56,	// (0x000733f7) bg_sp_fs_scroll_pane_g

0x66b0,	// (0x00069d51) list_medium_line_x2_t3_g4_g1_ParamLimits

0x66b0,	// (0x00069d51) list_medium_line_x2_t3_g4_g1

0x6755,	// (0x00069df6) list_medium_line_x2_t3_g4_g2_ParamLimits

0x6755,	// (0x00069df6) list_medium_line_x2_t3_g4_g2

0x66bc,	// (0x00069d5d) list_medium_line_x2_t3_g4_g3_ParamLimits

0x66bc,	// (0x00069d5d) list_medium_line_x2_t3_g4_g3

0x66c8,	// (0x00069d69) list_medium_line_x2_t3_g4_g4_ParamLimits

0x66c8,	// (0x00069d69) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2e6,	// (0x00072987) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2e6,	// (0x00072987) list_medium_line_x2_t3_g4_g

0x7253,	// (0x0006a8f4) list_medium_line_x2_t3_g4_t1_ParamLimits

0x7253,	// (0x0006a8f4) list_medium_line_x2_t3_g4_t1

0x7269,	// (0x0006a90a) list_medium_line_x2_t3_g4_t2_ParamLimits

0x7269,	// (0x0006a90a) list_medium_line_x2_t3_g4_t2

0x66fb,	// (0x00069d9c) list_medium_line_x2_t3_g4_t3_ParamLimits

0x66fb,	// (0x00069d9c) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd5d,	// (0x000733fe) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd5d,	// (0x000733fe) list_medium_line_x2_t3_g4_t

0x6b04,	// (0x0006a1a5) list_medium_line_g2_g1_ParamLimits

0x6b04,	// (0x0006a1a5) list_medium_line_g2_g1

0x6b10,	// (0x0006a1b1) list_medium_line_g2_g2_ParamLimits

0x6b10,	// (0x0006a1b1) list_medium_line_g2_g2

0x0001,

0xfa1f,	// (0x000730c0) list_medium_line_g2_g_ParamLimits

0xfa1f,	// (0x000730c0) list_medium_line_g2_g

0x7283,	// (0x0006a924) list_medium_line_g2_t1_ParamLimits

0x7283,	// (0x0006a924) list_medium_line_g2_t1

0x6b04,	// (0x0006a1a5) list_medium_line_t3_g2_g1_ParamLimits

0x6b04,	// (0x0006a1a5) list_medium_line_t3_g2_g1

0x6b10,	// (0x0006a1b1) list_medium_line_t3_g2_g2_ParamLimits

0x6b10,	// (0x0006a1b1) list_medium_line_t3_g2_g2

0x0001,

0xfa1f,	// (0x000730c0) list_medium_line_t3_g2_g_ParamLimits

0xfa1f,	// (0x000730c0) list_medium_line_t3_g2_g

0x7298,	// (0x0006a939) list_medium_line_t3_g2_t1_ParamLimits

0x7298,	// (0x0006a939) list_medium_line_t3_g2_t1

0x72af,	// (0x0006a950) list_medium_line_t3_g2_t2_ParamLimits

0x72af,	// (0x0006a950) list_medium_line_t3_g2_t2

0x72c4,	// (0x0006a965) list_medium_line_t3_g2_t3_ParamLimits

0x72c4,	// (0x0006a965) list_medium_line_t3_g2_t3

0x0002,

0xfd64,	// (0x00073405) list_medium_line_t3_g2_t_ParamLimits

0xfd64,	// (0x00073405) list_medium_line_t3_g2_t

0x6f42,	// (0x0006a5e3) list_medium_line_right_icon_g1

0x72d9,	// (0x0006a97a) list_medium_line_right_icon_t1

0x6b04,	// (0x0006a1a5) list_medium_line_t2_g1_ParamLimits

0x6b04,	// (0x0006a1a5) list_medium_line_t2_g1

0x72e7,	// (0x0006a988) list_medium_line_t2_t1_ParamLimits

0x72e7,	// (0x0006a988) list_medium_line_t2_t1

0x7301,	// (0x0006a9a2) list_medium_line_t2_t2_ParamLimits

0x7301,	// (0x0006a9a2) list_medium_line_t2_t2

0x0001,

0xfd6b,	// (0x0007340c) list_medium_line_t2_t_ParamLimits

0xfd6b,	// (0x0007340c) list_medium_line_t2_t

0x6b04,	// (0x0006a1a5) list_medium_line_t3_g1_ParamLimits

0x6b04,	// (0x0006a1a5) list_medium_line_t3_g1

0x7316,	// (0x0006a9b7) list_medium_line_t3_t1_ParamLimits

0x7316,	// (0x0006a9b7) list_medium_line_t3_t1

0x732d,	// (0x0006a9ce) list_medium_line_t3_t2_ParamLimits

0x732d,	// (0x0006a9ce) list_medium_line_t3_t2

0x7342,	// (0x0006a9e3) list_medium_line_t3_t3_ParamLimits

0x7342,	// (0x0006a9e3) list_medium_line_t3_t3

0x0002,

0xfd70,	// (0x00073411) list_medium_line_t3_t_ParamLimits

0xfd70,	// (0x00073411) list_medium_line_t3_t

0x6b04,	// (0x0006a1a5) list_medium_line_g3_g1_ParamLimits

0x6b04,	// (0x0006a1a5) list_medium_line_g3_g1

0x7354,	// (0x0006a9f5) list_medium_line_g3_g2_ParamLimits

0x7354,	// (0x0006a9f5) list_medium_line_g3_g2

0x6b10,	// (0x0006a1b1) list_medium_line_g3_g3_ParamLimits

0x6b10,	// (0x0006a1b1) list_medium_line_g3_g3

0x0002,

0xfd77,	// (0x00073418) list_medium_line_g3_g_ParamLimits

0xfd77,	// (0x00073418) list_medium_line_g3_g

0x7360,	// (0x0006aa01) list_medium_line_g3_t1_ParamLimits

0x7360,	// (0x0006aa01) list_medium_line_g3_t1

0x6b04,	// (0x0006a1a5) list_medium_line_t2_g3_g1_ParamLimits

0x6b04,	// (0x0006a1a5) list_medium_line_t2_g3_g1

0x7354,	// (0x0006a9f5) list_medium_line_t2_g3_g2_ParamLimits

0x7354,	// (0x0006a9f5) list_medium_line_t2_g3_g2

0x6b10,	// (0x0006a1b1) list_medium_line_t2_g3_g3_ParamLimits

0x6b10,	// (0x0006a1b1) list_medium_line_t2_g3_g3

0x0002,

0xfd77,	// (0x00073418) list_medium_line_t2_g3_g_ParamLimits

0xfd77,	// (0x00073418) list_medium_line_t2_g3_g

0x7375,	// (0x0006aa16) list_medium_line_t2_g3_t1_ParamLimits

0x7375,	// (0x0006aa16) list_medium_line_t2_g3_t1

0x738f,	// (0x0006aa30) list_medium_line_t2_g3_t2_ParamLimits

0x738f,	// (0x0006aa30) list_medium_line_t2_g3_t2

0x0001,

0xfd7e,	// (0x0007341f) list_medium_line_t2_g3_t_ParamLimits

0xfd7e,	// (0x0007341f) list_medium_line_t2_g3_t

0x6b04,	// (0x0006a1a5) list_medium_line_t3_g3_g1_ParamLimits

0x6b04,	// (0x0006a1a5) list_medium_line_t3_g3_g1

0x7354,	// (0x0006a9f5) list_medium_line_t3_g3_g2_ParamLimits

0x7354,	// (0x0006a9f5) list_medium_line_t3_g3_g2

0x6b10,	// (0x0006a1b1) list_medium_line_t3_g3_g3_ParamLimits

0x6b10,	// (0x0006a1b1) list_medium_line_t3_g3_g3

0x0002,

0xfd77,	// (0x00073418) list_medium_line_t3_g3_g_ParamLimits

0xfd77,	// (0x00073418) list_medium_line_t3_g3_g

0x73a4,	// (0x0006aa45) list_medium_line_t3_g3_t1_ParamLimits

0x73a4,	// (0x0006aa45) list_medium_line_t3_g3_t1

0x73b8,	// (0x0006aa59) list_medium_line_t3_g3_t2_ParamLimits

0x73b8,	// (0x0006aa59) list_medium_line_t3_g3_t2

0x73ca,	// (0x0006aa6b) list_medium_line_t3_g3_t3_ParamLimits

0x73ca,	// (0x0006aa6b) list_medium_line_t3_g3_t3

0x0002,

0xfd83,	// (0x00073424) list_medium_line_t3_g3_t_ParamLimits

0xfd83,	// (0x00073424) list_medium_line_t3_g3_t

0x70b3,	// (0x0006a754) list_medium_line_right_iconx2_g1

0x6f42,	// (0x0006a5e3) list_medium_line_right_iconx2_g2

0x0001,

0xfd8a,	// (0x0007342b) list_medium_line_right_iconx2_g

0x73dc,	// (0x0006aa7d) list_medium_line_right_iconx2_t1

0x70b3,	// (0x0006a754) list_medium_line_t2_right_iconx2_g1

0x6f42,	// (0x0006a5e3) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfd8a,	// (0x0007342b) list_medium_line_t2_right_iconx2_g

0x73ea,	// (0x0006aa8b) list_medium_line_t2_right_iconx2_t1

0x73fa,	// (0x0006aa9b) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfd8f,	// (0x00073430) list_medium_line_t2_right_iconx2_t

0x7408,	// (0x0006aaa9) list_medium_line_x4_t4_t1

0x7416,	// (0x0006aab7) list_medium_line_x4_t4_t2

0x7426,	// (0x0006aac7) list_medium_line_x4_t4_t3

0x7436,	// (0x0006aad7) list_medium_line_x4_t4_t4

0x0003,

0xfd94,	// (0x00073435) list_medium_line_x4_t4_t

0xe3fb,	// (0x00071a9c) tport_appsw_pane_ParamLimits

0xe3fb,	// (0x00071a9c) tport_appsw_pane

0xe407,	// (0x00071aa8) tport_contact_pane_ParamLimits

0xe407,	// (0x00071aa8) tport_contact_pane

0xe417,	// (0x00071ab8) tport_listscroll_pane_ParamLimits

0xe417,	// (0x00071ab8) tport_listscroll_pane

0xe427,	// (0x00071ac8) cell_tport_appsw_pane_ParamLimits

0xe427,	// (0x00071ac8) cell_tport_appsw_pane

0x4c9f,	// (0x00068340) tport_appsw_pane_g1_ParamLimits

0x4c9f,	// (0x00068340) tport_appsw_pane_g1

0x37bc,	// (0x00066e5d) tport_contact_pane_g1

0x2f64,	// (0x00066605) tport_contact_pane_t1

0x37c5,	// (0x00066e66) tport_contact_pane_t2

0x0001,

0xfd9d,	// (0x0007343e) tport_contact_pane_t

0x37d3,	// (0x00066e74) list_tport_pane

0x37dc,	// (0x00066e7d) scroll_pane_cp_030

0x37ed,	// (0x00066e8e) cell_tport_appsw_pane_g1

0x37fd,	// (0x00066e9e) cell_tport_appsw_pane_t1

0x77fc,	// (0x0006ae9d) grid_highlight_pane_cp019

0xe452,	// (0x00071af3) list_tport_double_graphic_pane_ParamLimits

0xe452,	// (0x00071af3) list_tport_double_graphic_pane

0x00a1,	// (0x00063742) list_highlight_pane_cp023_ParamLimits

0x00a1,	// (0x00063742) list_highlight_pane_cp023

0xe464,	// (0x00071b05) list_tport_double_graphic_pane_g1_ParamLimits

0xe464,	// (0x00071b05) list_tport_double_graphic_pane_g1

0xe471,	// (0x00071b12) list_tport_double_graphic_pane_t1_ParamLimits

0xe471,	// (0x00071b12) list_tport_double_graphic_pane_t1

0xe486,	// (0x00071b27) list_tport_double_graphic_pane_t2_ParamLimits

0xe486,	// (0x00071b27) list_tport_double_graphic_pane_t2

0x0001,

0xfda9,	// (0x0007344a) list_tport_double_graphic_pane_t_ParamLimits

0xfda9,	// (0x0007344a) list_tport_double_graphic_pane_t

0x77fc,	// (0x0006ae9d) main_cale_note_pane

0xc944,	// (0x0006ffe5) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0xc944,	// (0x0006ffe5) cell_vitu2_function_top_wide_pane_cp01

0xe006,	// (0x000716a7) wait_bar_pane_cp05_ParamLimits

0x77fc,	// (0x0006ae9d) listscroll_cmail_pane

0x3813,	// (0x00066eb4) list_cmail_pane

0xe4a2,	// (0x00071b43) list_cmail_body_pane

0xe4bf,	// (0x00071b60) list_single_cmail_header_caption_pane

0xe4e4,	// (0x00071b85) list_single_cmail_header_detail_pane_ParamLimits

0xe4e4,	// (0x00071b85) list_single_cmail_header_detail_pane

0xe517,	// (0x00071bb8) list_single_cmail_header_caption_pane_t1

0x7446,	// (0x0006aae7) list_single_cmail_header_detail_pane_g1_ParamLimits

0x7446,	// (0x0006aae7) list_single_cmail_header_detail_pane_g1

0xe525,	// (0x00071bc6) list_single_cmail_header_detail_pane_g2_ParamLimits

0xe525,	// (0x00071bc6) list_single_cmail_header_detail_pane_g2

0x0002,

0xfdae,	// (0x0007344f) list_single_cmail_header_detail_pane_g_ParamLimits

0xfdae,	// (0x0007344f) list_single_cmail_header_detail_pane_g

0x745c,	// (0x0006aafd) list_single_cmail_header_detail_pane_t1_ParamLimits

0x745c,	// (0x0006aafd) list_single_cmail_header_detail_pane_t1

0x74ba,	// (0x0006ab5b) list_single_cmail_header_editor_pane_bg_ParamLimits

0x74ba,	// (0x0006ab5b) list_single_cmail_header_editor_pane_bg

0x3113,	// (0x000667b4) list_cmail_body_pane_g1

0x3895,	// (0x00066f36) list_cmail_body_pane_t1

0x5430,	// (0x00068ad1) list_single_cmail_header_editor_pane_bg_g1

0x0cea,	// (0x0006438b) list_single_cmail_header_editor_pane_bg_g1_copy1

0x5440,	// (0x00068ae1) list_single_cmail_header_editor_pane_bg_g1_copy2

0x5438,	// (0x00068ad9) list_single_cmail_header_editor_pane_bg_g1_copy3

0x5654,	// (0x00068cf5) list_single_cmail_header_editor_pane_bg_g1_copy4

0x5460,	// (0x00068b01) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0x5450,	// (0x00068af1) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0x5458,	// (0x00068af9) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0x0cca,	// (0x0006436b) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0xe531,	// (0x00071bd2) calenote_gesture_pane_ParamLimits

0xe531,	// (0x00071bd2) calenote_gesture_pane

0xe54b,	// (0x00071bec) calenote_window_pane_ParamLimits

0xe54b,	// (0x00071bec) calenote_window_pane

0x38a3,	// (0x00066f44) popup_note_window_cp01

0xe563,	// (0x00071c04) calenote_swipe_1_pane_ParamLimits

0xe563,	// (0x00071c04) calenote_swipe_1_pane

0xe34f,	// (0x000719f0) calenote_swipe_2_pane_ParamLimits

0xe34f,	// (0x000719f0) calenote_swipe_2_pane

0x3456,	// (0x00066af7) calenote_swipe_1_pane_g1_ParamLimits

0x3456,	// (0x00066af7) calenote_swipe_1_pane_g1

0x3463,	// (0x00066b04) calenote_swipe_1_pane_g2_ParamLimits

0x3463,	// (0x00066b04) calenote_swipe_1_pane_g2

0x0001,

0xfcdd,	// (0x0007337e) calenote_swipe_1_pane_g_ParamLimits

0xfcdd,	// (0x0007337e) calenote_swipe_1_pane_g

0x38b5,	// (0x00066f56) calenote_swipe_1_pane_t1_ParamLimits

0x38b5,	// (0x00066f56) calenote_swipe_1_pane_t1

0x3456,	// (0x00066af7) calenote_swipe_2_pane_g1_ParamLimits

0x3456,	// (0x00066af7) calenote_swipe_2_pane_g1

0x38d4,	// (0x00066f75) calenote_swipe_2_pane_g2_ParamLimits

0x38d4,	// (0x00066f75) calenote_swipe_2_pane_g2

0x0001,

0xfdba,	// (0x0007345b) calenote_swipe_2_pane_g_ParamLimits

0xfdba,	// (0x0007345b) calenote_swipe_2_pane_g

0x38e0,	// (0x00066f81) calenote_swipe_2_pane_t1_ParamLimits

0x38e0,	// (0x00066f81) calenote_swipe_2_pane_t1

0x77fc,	// (0x0006ae9d) main_mup_navstr_pane

0xb70d,	// (0x0006edae) main_mup3_pane_t7_ParamLimits

0xb70d,	// (0x0006edae) main_mup3_pane_t7

0xc0d5,	// (0x0006f776) main_mp4_pane_g6_ParamLimits

0xc0d5,	// (0x0006f776) main_mp4_pane_g6

0xc447,	// (0x0006fae8) main_image3_pane_t4_ParamLimits

0xc447,	// (0x0006fae8) main_image3_pane_t4

0xe576,	// (0x00071c17) popup_navstr_preview_pane_ParamLimits

0xe576,	// (0x00071c17) popup_navstr_preview_pane

0xe582,	// (0x00071c23) scroll_navstr_pane_ParamLimits

0xe582,	// (0x00071c23) scroll_navstr_pane

0x77fc,	// (0x0006ae9d) bg_popup_preview_window_pane_cp04

0x3907,	// (0x00066fa8) popup_navstr_preview_pane_t1

0xe58e,	// (0x00071c2f) scroll_navstr_pane_g1_ParamLimits

0xe58e,	// (0x00071c2f) scroll_navstr_pane_g1

0xe59b,	// (0x00071c3c) scroll_navstr_pane_t1_ParamLimits

0xe59b,	// (0x00071c3c) scroll_navstr_pane_t1

0x38ac,	// (0x00066f4d) bg_button_pane_cp014

0x38ac,	// (0x00066f4d) bg_button_pane_cp030

0x6ea4,	// (0x0006a545) list_double_fisheye_pane_g4_ParamLimits

0x6ea4,	// (0x0006a545) list_double_fisheye_pane_g4

0x6eb0,	// (0x0006a551) list_double_fisheye_pane_g5_ParamLimits

0x6eb0,	// (0x0006a551) list_double_fisheye_pane_g5

0x381b,	// (0x00066ebc) sp_fs_scroll_pane_cp03

0x3595,	// (0x00066c36) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0x35a1,	// (0x00066c42) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfcfa,	// (0x0007339b) main_sp_fs_ctrlbar_pane_g_ParamLimits

0x35ad,	// (0x00066c4e) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xe498,	// (0x00071b39) sp_fs_scroll_pane_cp02

0x0990,	// (0x00064031) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0x0990,	// (0x00064031) popup_sp_fs_calendar_preview_list_single_pane

0x77fc,	// (0x0006ae9d) main_cam6_pano_pane

0x00a1,	// (0x00063742) main_mup3_pane_ParamLimits

0x77fc,	// (0x0006ae9d) main_phacti_pane

0xdedb,	// (0x0007157c) bg_button_pane_cp11

0xdef3,	// (0x00071594) main_mobtv_info_pane_g2_ParamLimits

0xdef3,	// (0x00071594) main_mobtv_info_pane_g2

0x0001,

0xfc5a,	// (0x000732fb) main_mobtv_info_pane_g_ParamLimits

0xfc5a,	// (0x000732fb) main_mobtv_info_pane_g

0xe0a5,	// (0x00071746) sc_clock_pane_t5_ParamLimits

0xe0a5,	// (0x00071746) sc_clock_pane_t5

0xe143,	// (0x000717e4) main_radioblah_pane_g1_ParamLimits

0x3399,	// (0x00066a3a) main_radioblah_pane_t3_ParamLimits

0x3399,	// (0x00066a3a) main_radioblah_pane_t3

0x33b1,	// (0x00066a52) main_radioblah_pane_t4_ParamLimits

0x33b1,	// (0x00066a52) main_radioblah_pane_t4

0xe161,	// (0x00071802) main_radioblah_text_pane_ParamLimits

0xe161,	// (0x00071802) main_radioblah_text_pane

0xe16e,	// (0x0007180f) main_radioblah_info_pane_g1_ParamLimits

0xe203,	// (0x000718a4) main_radioblah_info_pane_t4_ParamLimits

0xe203,	// (0x000718a4) main_radioblah_info_pane_t4

0x00a1,	// (0x00063742) main_sp_fs_calendar_pane

0xe5ad,	// (0x00071c4e) main_phacti_pane_g1

0xe5b5,	// (0x00071c56) phacti_note_pane_ParamLimits

0xe5b5,	// (0x00071c56) phacti_note_pane

0x391e,	// (0x00066fbf) phacti_term_pane_ParamLimits

0x391e,	// (0x00066fbf) phacti_term_pane

0x3933,	// (0x00066fd4) phacti_note_pane_t1_ParamLimits

0x3933,	// (0x00066fd4) phacti_note_pane_t1

0x74cc,	// (0x0006ab6d) phacti_term_pane_g1

0x74d4,	// (0x0006ab75) phacti_term_pane_t1_ParamLimits

0x74d4,	// (0x0006ab75) phacti_term_pane_t1

0x397c,	// (0x0006701d) popup_sp_fs_calendar_preview_list_single_pane_g1

0x0aed,	// (0x0006418e) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfdc4,	// (0x00073465) popup_sp_fs_calendar_preview_list_single_pane_g

0x3984,	// (0x00067025) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0x3984,	// (0x00067025) popup_sp_fs_calendar_preview_list_single_pane_t1

0x3999,	// (0x0006703a) aid_popup_sp_fs_bg_corner_pane

0x49d7,	// (0x00068078) popup_sp_fs_calendar_preview_bg_pane_g1

0x77fc,	// (0x0006ae9d) popup_sp_fs_calendar_preview_bg_pane

0x39a1,	// (0x00067042) popup_sp_fs_calendar_preview_list_pane

0x00a1,	// (0x00063742) bg_main_sp_fs_cale_pane_ParamLimits

0x00a1,	// (0x00063742) bg_main_sp_fs_cale_pane

0x74fe,	// (0x0006ab9f) listscroll_cale_mrui_pane_ParamLimits

0x74fe,	// (0x0006ab9f) listscroll_cale_mrui_pane

0x7512,	// (0x0006abb3) listscroll_sp_fs_schedule_track_pane

0x751b,	// (0x0006abbc) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0x751b,	// (0x0006abbc) main_sp_fs_ctrlbar_pane_cp01

0x39d7,	// (0x00067078) main_sp_fs_ribbon_pane

0x39df,	// (0x00067080) popup_sp_fs_cale_preview_window

0xe5f4,	// (0x00071c95) list_single_sp_fs_schedule_track_pane_ParamLimits

0xe5f4,	// (0x00071c95) list_single_sp_fs_schedule_track_pane

0x7a8d,	// (0x0006b12e) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0x7a8d,	// (0x0006b12e) bg_sp_fs_highlight_list_pane_cp03

0xe60d,	// (0x00071cae) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0xe60d,	// (0x00071cae) list_single_sp_fs_schedule_track_pane_g1

0xe619,	// (0x00071cba) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0xe619,	// (0x00071cba) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfdc9,	// (0x0007346a) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfdc9,	// (0x0007346a) list_single_sp_fs_schedule_track_pane_g

0xe625,	// (0x00071cc6) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0xe625,	// (0x00071cc6) list_single_sp_fs_schedule_track_pane_t1

0xe63d,	// (0x00071cde) sp_fs_schedule_track_pane_ParamLimits

0xe63d,	// (0x00071cde) sp_fs_schedule_track_pane

0x39f1,	// (0x00067092) sp_fs_schedule_track_pane_g1

0x39f9,	// (0x0006709a) sp_fs_schedule_track_pane_g2

0x3a01,	// (0x000670a2) sp_fs_schedule_track_pane_g3

0x3a09,	// (0x000670aa) sp_fs_schedule_track_pane_g4

0x3a11,	// (0x000670b2) sp_fs_schedule_track_pane_g5

0x0004,

0xfdce,	// (0x0007346f) sp_fs_schedule_track_pane_g

0x5430,	// (0x00068ad1) bg_sp_fs_schedule_viewer_highlight_g1

0x0cea,	// (0x0006438b) bg_sp_fs_schedule_viewer_highlight_g2

0x5438,	// (0x00068ad9) bg_sp_fs_schedule_viewer_highlight_g3

0x5440,	// (0x00068ae1) bg_sp_fs_schedule_viewer_highlight_g4

0x5654,	// (0x00068cf5) bg_sp_fs_schedule_viewer_highlight_g5

0x5450,	// (0x00068af1) bg_sp_fs_schedule_viewer_highlight_g6

0x5458,	// (0x00068af9) bg_sp_fs_schedule_viewer_highlight_g7

0x5460,	// (0x00068b01) bg_sp_fs_schedule_viewer_highlight_g8

0x0cca,	// (0x0006436b) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfdd9,	// (0x0007347a) bg_sp_fs_schedule_viewer_highlight_g

0x77fc,	// (0x0006ae9d) bg_main_sp_fs_ribbon_pane

0xe64d,	// (0x00071cee) main_sp_fs_ribbon_pane_g1

0x3a19,	// (0x000670ba) main_sp_fs_ribbon_pane_t1

0xe656,	// (0x00071cf7) main_sp_fs_ribbon_pane_t2

0x3a28,	// (0x000670c9) main_sp_fs_ribbon_pane_t3

0x0002,

0xfdec,	// (0x0007348d) main_sp_fs_ribbon_pane_t

0x3a37,	// (0x000670d8) main_sp_fs_ribbon_scheduler_pane

0x3a3f,	// (0x000670e0) bg_main_sp_fs_ribbon_pane_g1

0x3a48,	// (0x000670e9) bg_main_sp_fs_ribbon_pane_g2

0x3a51,	// (0x000670f2) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfdf3,	// (0x00073494) bg_main_sp_fs_ribbon_pane_g

0x3a59,	// (0x000670fa) main_sp_fs_ribbon_scheduler_pane_g1

0x3a62,	// (0x00067103) main_sp_fs_ribbon_scheduler_pane_g2

0x3a6b,	// (0x0006710c) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfdfa,	// (0x0007349b) main_sp_fs_ribbon_scheduler_pane_g

0x3a74,	// (0x00067115) list_cale_mrui_pane

0xe665,	// (0x00071d06) sp_fs_scroll_pane_cp07_ParamLimits

0xe665,	// (0x00071d06) sp_fs_scroll_pane_cp07

0xe67b,	// (0x00071d1c) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0xe67b,	// (0x00071d1c) bg_sp_fs_schedule_viewer_highlight

0x3a7d,	// (0x0006711e) list_single_sp_fs_schedule_track_pane_cp01

0x3a85,	// (0x00067126) list_sp_fs_schedule_track_pane

0x3a8d,	// (0x0006712e) sp_fs_scroll_pane_cp06_ParamLimits

0x3a8d,	// (0x0006712e) sp_fs_scroll_pane_cp06

0x49d7,	// (0x00068078) bgmain_sp_fs_calendar_pane_g1

0x752c,	// (0x0006abcd) list_single_cale_mrui_pane_ParamLimits

0x752c,	// (0x0006abcd) list_single_cale_mrui_pane

0x7551,	// (0x0006abf2) list_single_cale_mrui_row_pane_ParamLimits

0x7551,	// (0x0006abf2) list_single_cale_mrui_row_pane

0x755e,	// (0x0006abff) list_single_cale_mrui_row_pane_g1_ParamLimits

0x755e,	// (0x0006abff) list_single_cale_mrui_row_pane_g1

0x7596,	// (0x0006ac37) list_single_cale_mrui_row_pane_t1_ParamLimits

0x7596,	// (0x0006ac37) list_single_cale_mrui_row_pane_t1

0x75a8,	// (0x0006ac49) list_single_cale_mrui_row_pane_t2_ParamLimits

0x75a8,	// (0x0006ac49) list_single_cale_mrui_row_pane_t2

0x760e,	// (0x0006acaf) list_single_cale_mrui_row_pane_t3_ParamLimits

0x760e,	// (0x0006acaf) list_single_cale_mrui_row_pane_t3

0x763d,	// (0x0006acde) list_single_cale_mrui_row_pane_t4_ParamLimits

0x763d,	// (0x0006acde) list_single_cale_mrui_row_pane_t4

0x0003,

0xfe06,	// (0x000734a7) list_single_cale_mrui_row_pane_t_ParamLimits

0xfe06,	// (0x000734a7) list_single_cale_mrui_row_pane_t

0x766c,	// (0x0006ad0d) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x766c,	// (0x0006ad0d) list_single_cmail_header_editor_pane_bg_cp01

0x768c,	// (0x0006ad2d) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x768c,	// (0x0006ad2d) list_single_cmail_header_editor_pane_bg_cp02

0xe688,	// (0x00071d29) main_radioblah_text_pane_t1_ParamLimits

0xe688,	// (0x00071d29) main_radioblah_text_pane_t1

0x3b54,	// (0x000671f5) cam6_indi_pane_cp01

0x3b5c,	// (0x000671fd) cam6_mode_pane_cp01

0x3b64,	// (0x00067205) cam6_pano_pane

0x3b6d,	// (0x0006720e) cam6_zoom_pane_cp01

0x3b75,	// (0x00067216) cam6_pano_image_pane

0x3b80,	// (0x00067221) cam6_pano_pane_g1

0x3113,	// (0x000667b4) cam6_pano_pane_g2

0x3b89,	// (0x0006722a) cam6_pano_pane_g3

0x3b92,	// (0x00067233) cam6_pano_pane_g4

0x4f6a,	// (0x0006860b) cam6_pano_pane_g5

0x3b9b,	// (0x0006723c) cam6_pano_pane_g6

0x3ba5,	// (0x00067246) cam6_pano_pane_g7

0x3bad,	// (0x0006724e) cam6_pano_pane_g8

0x3bb6,	// (0x00067257) cam6_pano_pane_g9

0x0008,

0xfe0f,	// (0x000734b0) cam6_pano_pane_g

0x77fc,	// (0x0006ae9d) main_browser_tag_pane

0x38ff,	// (0x00066fa0) grid_navstr_albumart_pane

0x3bc1,	// (0x00067262) cell_navstr_albumart_pane_ParamLimits

0x3bc1,	// (0x00067262) cell_navstr_albumart_pane

0x3be4,	// (0x00067285) cell_navstr_albumart_pane_g1

0x26d3,	// (0x00065d74) cell_navstr_albumart_pane_g2

0x26e3,	// (0x00065d84) cell_navstr_albumart_pane_g3

0x26db,	// (0x00065d7c) cell_navstr_albumart_pane_g4

0x0003,

0xfe22,	// (0x000734c3) cell_navstr_albumart_pane_g

0xe6a3,	// (0x00071d44) bt_list_pane_ParamLimits

0xe6a3,	// (0x00071d44) bt_list_pane

0xe6c3,	// (0x00071d64) bt_list_pane_t1

0xe6d2,	// (0x00071d73) bt_list_pane_t2

0x0001,

0xfe2b,	// (0x000734cc) bt_list_pane_t

0x77fc,	// (0x0006ae9d) main_cale_prevew_pane

0xe6e1,	// (0x00071d82) popup_cale_preview_window_ParamLimits

0xe6e1,	// (0x00071d82) popup_cale_preview_window

0x00a1,	// (0x00063742) bg_popup_preview_window_pane_cp05_ParamLimits

0x00a1,	// (0x00063742) bg_popup_preview_window_pane_cp05

0x3bec,	// (0x0006728d) list_cale_preview_pane_ParamLimits

0x3bec,	// (0x0006728d) list_cale_preview_pane

0x3f42,	// (0x000675e3) list_double_cale_preview_pane_ParamLimits

0x3f42,	// (0x000675e3) list_double_cale_preview_pane

0xe6fa,	// (0x00071d9b) list_single_cale_preview_pane_ParamLimits

0xe6fa,	// (0x00071d9b) list_single_cale_preview_pane

0xe710,	// (0x00071db1) list_single_cale_preview_pane_g1

0xe718,	// (0x00071db9) list_single_cale_preview_pane_t1_ParamLimits

0xe718,	// (0x00071db9) list_single_cale_preview_pane_t1

0xe72d,	// (0x00071dce) list_double_cale_preview_pane_g1

0xe735,	// (0x00071dd6) list_double_cale_preview_pane_t1_ParamLimits

0xe735,	// (0x00071dd6) list_double_cale_preview_pane_t1

0xe74a,	// (0x00071deb) list_double_cale_preview_pane_t2_ParamLimits

0xe74a,	// (0x00071deb) list_double_cale_preview_pane_t2

0x0001,

0xfe30,	// (0x000734d1) list_double_cale_preview_pane_t_ParamLimits

0xfe30,	// (0x000734d1) list_double_cale_preview_pane_t

0x77fc,	// (0x0006ae9d) main_ezdial_pane

0x00a1,	// (0x00063742) main_sp_fs_email_pane_ParamLimits

0xe369,	// (0x00071a0a) cmail_ddmenu_btn01_pane_ParamLimits

0xe369,	// (0x00071a0a) cmail_ddmenu_btn01_pane

0xe386,	// (0x00071a27) cmail_ddmenu_btn02_pane_ParamLimits

0xe386,	// (0x00071a27) cmail_ddmenu_btn02_pane

0xe3a4,	// (0x00071a45) cmail_ddmenu_btn03_pane_ParamLimits

0xe3a4,	// (0x00071a45) cmail_ddmenu_btn03_pane

0x6f68,	// (0x0006a609) main_sp_fs_ctrlbar_pane_ParamLimits

0x6f84,	// (0x0006a625) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0xe4a2,	// (0x00071b43) list_cmail_body_pane_ParamLimits

0x382b,	// (0x00066ecc) bg_button_pane_cp12

0x3840,	// (0x00066ee1) list_single_cmail_header_detail_pane_g3_ParamLimits

0x3840,	// (0x00066ee1) list_single_cmail_header_detail_pane_g3

0x7496,	// (0x0006ab37) list_single_cmail_header_detail_pane_t2_ParamLimits

0x7496,	// (0x0006ab37) list_single_cmail_header_detail_pane_t2

0x0001,

0xfdb5,	// (0x00073456) list_single_cmail_header_detail_pane_t_ParamLimits

0xfdb5,	// (0x00073456) list_single_cmail_header_detail_pane_t

0x74e9,	// (0x0006ab8a) phacti_term_pane_t2_ParamLimits

0x74e9,	// (0x0006ab8a) phacti_term_pane_t2

0x0001,

0xfdbf,	// (0x00073460) phacti_term_pane_t_ParamLimits

0xfdbf,	// (0x00073460) phacti_term_pane_t

0x3bf8,	// (0x00067299) aid_size_list_single_double

0xe762,	// (0x00071e03) popup_ezdial_listscroll_window

0xe782,	// (0x00071e23) popup_number_entry_window_cp01

0x1474,	// (0x00064b15) bg_popup_call_pane_cp09

0x3c04,	// (0x000672a5) ezdial_list_pane

0x3c0c,	// (0x000672ad) scroll_pane_cp23

0x47b3,	// (0x00067e54) bg_button_pane_cp028_ParamLimits

0x47b3,	// (0x00067e54) bg_button_pane_cp028

0xe790,	// (0x00071e31) cmail_ddmenu_btn01_pane_g1_ParamLimits

0xe790,	// (0x00071e31) cmail_ddmenu_btn01_pane_g1

0xe7a0,	// (0x00071e41) cmail_ddmenu_btn01_pane_g2_ParamLimits

0xe7a0,	// (0x00071e41) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfe35,	// (0x000734d6) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfe35,	// (0x000734d6) cmail_ddmenu_btn01_pane_g

0x3c14,	// (0x000672b5) cmail_ddmenu_btn01_pane_t1_ParamLimits

0x3c14,	// (0x000672b5) cmail_ddmenu_btn01_pane_t1

0x28b6,	// (0x00065f57) bg_button_pane_cp029_ParamLimits

0x28b6,	// (0x00065f57) bg_button_pane_cp029

0xe7a0,	// (0x00071e41) cmail_ddmenu_btn02_pane_g1_ParamLimits

0xe7a0,	// (0x00071e41) cmail_ddmenu_btn02_pane_g1

0xe7b8,	// (0x00071e59) cmail_ddmenu_btn02_pane_t1_ParamLimits

0xe7b8,	// (0x00071e59) cmail_ddmenu_btn02_pane_t1

0x7a8d,	// (0x0006b12e) bg_button_pane_cp031_ParamLimits

0x7a8d,	// (0x0006b12e) bg_button_pane_cp031

0xe7a0,	// (0x00071e41) cmail_ddmenu_btn03_pane_g1_ParamLimits

0xe7a0,	// (0x00071e41) cmail_ddmenu_btn03_pane_g1

0xe7b8,	// (0x00071e59) cmail_ddmenu_btn03_pane_t1_ParamLimits

0xe7b8,	// (0x00071e59) cmail_ddmenu_btn03_pane_t1

0xc2f2,	// (0x0006f993) cell_dialer2_keypad_pane_t1_ParamLimits

0xc30c,	// (0x0006f9ad) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0xc30c,	// (0x0006f9ad) cell_dialer2_keypad_pane_t1_copy1

0xdd7b,	// (0x0007141c) ncimui_group_button_pane

0x00a1,	// (0x00063742) main_sp_fs_calendar_pane_ParamLimits

0xe4bf,	// (0x00071b60) list_single_cmail_header_caption_pane_ParamLimits

0xf0da,	// (0x0007277b) aid_recal_txt_sm_pane

0x77fc,	// (0x0006ae9d) mian_recal_day_pane

0x39df,	// (0x00067080) popup_sp_fs_cale_preview_window_ParamLimits

0x77fc,	// (0x0006ae9d) list_recal_day_pane

0x3c42,	// (0x000672e3) list_single_recal_day_pane_ParamLimits

0x3c42,	// (0x000672e3) list_single_recal_day_pane

0x3c54,	// (0x000672f5) list_single_recal_day_pane_g1_ParamLimits

0x3c54,	// (0x000672f5) list_single_recal_day_pane_g1

0x3c60,	// (0x00067301) list_single_recal_day_pane_g2_ParamLimits

0x3c60,	// (0x00067301) list_single_recal_day_pane_g2

0x3c6f,	// (0x00067310) list_single_recal_day_pane_g3_ParamLimits

0x3c6f,	// (0x00067310) list_single_recal_day_pane_g3

0xe7dc,	// (0x00071e7d) list_single_recal_day_pane_g4_ParamLimits

0xe7dc,	// (0x00071e7d) list_single_recal_day_pane_g4

0x3c7b,	// (0x0006731c) list_single_recal_day_pane_g5_ParamLimits

0x3c7b,	// (0x0006731c) list_single_recal_day_pane_g5

0x3c8a,	// (0x0006732b) list_single_recal_day_pane_g6_ParamLimits

0x3c8a,	// (0x0006732b) list_single_recal_day_pane_g6

0x0005,

0xfe44,	// (0x000734e5) list_single_recal_day_pane_g_ParamLimits

0xfe44,	// (0x000734e5) list_single_recal_day_pane_g

0x3c96,	// (0x00067337) list_single_recal_day_pane_t1

0x3ca4,	// (0x00067345) list_single_recal_day_pane_t2

0x0001,

0xfe51,	// (0x000734f2) list_single_recal_day_pane_t

0xe7ef,	// (0x00071e90) ncimui_query_button_pane_ParamLimits

0xe7ef,	// (0x00071e90) ncimui_query_button_pane

0xe7ff,	// (0x00071ea0) ncimui_query_button_pane_t1_ParamLimits

0xe7ff,	// (0x00071ea0) ncimui_query_button_pane_t1

0x3cb2,	// (0x00067353) ncimui_query_button_pane_t2_ParamLimits

0x3cb2,	// (0x00067353) ncimui_query_button_pane_t2

0x0001,

0xfe56,	// (0x000734f7) ncimui_query_button_pane_t_ParamLimits

0xfe56,	// (0x000734f7) ncimui_query_button_pane_t

0xe812,	// (0x00071eb3) query_button_pane_ParamLimits

0xe812,	// (0x00071eb3) query_button_pane

0x77fc,	// (0x0006ae9d) bg_button_pane_cp0028

0x3cc5,	// (0x00067366) query_button_pane_t1

0xa759,	// (0x0006ddfa) main_tport_pane_ParamLimits

0xe3d2,	// (0x00071a73) bg_popup_window_pane_cp01_ParamLimits

0xe3d2,	// (0x00071a73) bg_popup_window_pane_cp01

0xe3df,	// (0x00071a80) heading_pane_cp08_ParamLimits

0xe3df,	// (0x00071a80) heading_pane_cp08

0xe3ed,	// (0x00071a8e) heading_pane_cp07_ParamLimits

0xe3ed,	// (0x00071a8e) heading_pane_cp07

0x37ed,	// (0x00066e8e) cell_tport_appsw_pane_g2

0x0002,

0xfda2,	// (0x00073443) cell_tport_appsw_pane_g

0x68db,	// (0x00069f7c) input_candi_list_open_g1

0x0ebf,	// (0x00064560) list_cale_time_pane_g6_ParamLimits

0x0ebf,	// (0x00064560) list_cale_time_pane_g6

0xb19a,	// (0x0006e83b) aid_size_touch_calib_1_ParamLimits

0xb19a,	// (0x0006e83b) aid_size_touch_calib_1

0xb1a6,	// (0x0006e847) aid_size_touch_calib_2_ParamLimits

0xb1a6,	// (0x0006e847) aid_size_touch_calib_2

0xb1b4,	// (0x0006e855) aid_size_touch_calib_3_ParamLimits

0xb1b4,	// (0x0006e855) aid_size_touch_calib_3

0xb1c4,	// (0x0006e865) aid_size_touch_calib_4_ParamLimits

0xb1c4,	// (0x0006e865) aid_size_touch_calib_4

0xb1d2,	// (0x0006e873) main_touch_calib_button_group_pane_ParamLimits

0xb1d2,	// (0x0006e873) main_touch_calib_button_group_pane

0xb1e0,	// (0x0006e881) main_touch_calib_pane_g1_ParamLimits

0xb1ec,	// (0x0006e88d) main_touch_calib_pane_g2_ParamLimits

0xb1f8,	// (0x0006e899) main_touch_calib_pane_g3_ParamLimits

0xb204,	// (0x0006e8a5) main_touch_calib_pane_g4_ParamLimits

0xf775,	// (0x00072e16) main_touch_calib_pane_g_ParamLimits

0xb210,	// (0x0006e8b1) main_touch_calib_pane_t1_ParamLimits

0xb227,	// (0x0006e8c8) main_touch_calib_pane_t2_ParamLimits

0xb23e,	// (0x0006e8df) main_touch_calib_pane_t3_ParamLimits

0xb252,	// (0x0006e8f3) main_touch_calib_pane_t4_ParamLimits

0xb266,	// (0x0006e907) main_touch_calib_pane_t5_ParamLimits

0xf77e,	// (0x00072e1f) main_touch_calib_pane_t_ParamLimits

0x4d40,	// (0x000683e1) list_single_fp_cale_pane_g3_ParamLimits

0x4d40,	// (0x000683e1) list_single_fp_cale_pane_g3

0x00a1,	// (0x00063742) bg_button_pane_cp012_ParamLimits

0x00a1,	// (0x00063742) bg_vkb2_func_pane_cp03_ParamLimits

0xd0b3,	// (0x00070754) cell_vitu2_function_top_pane_g1_ParamLimits

0x00a1,	// (0x00063742) bg_vkb2_func_pane_cp04_ParamLimits

0xdd19,	// (0x000713ba) main_ncimui_button_group_pane_ParamLimits

0xdd19,	// (0x000713ba) main_ncimui_button_group_pane

0xdd69,	// (0x0007140a) main_ncimui_pane_t3_ParamLimits

0xdd69,	// (0x0007140a) main_ncimui_pane_t3

0x3915,	// (0x00066fb6) phacti_button_group_pane

0x3bf8,	// (0x00067299) aid_size_list_single_double_ParamLimits

0xe762,	// (0x00071e03) popup_ezdial_listscroll_window_ParamLimits

0xe782,	// (0x00071e23) popup_number_entry_window_cp01_ParamLimits

0xe81f,	// (0x00071ec0) phacti_button_pane_ParamLimits

0xe81f,	// (0x00071ec0) phacti_button_pane

0x77fc,	// (0x0006ae9d) bg_button_pane_cp14

0x3cd3,	// (0x00067374) phacti_button_pane_t1

0xe830,	// (0x00071ed1) main_touch_calib_button_pane_ParamLimits

0xe830,	// (0x00071ed1) main_touch_calib_button_pane

0x0820,	// (0x00063ec1) bg_button_pane_cp18_ParamLimits

0x0820,	// (0x00063ec1) bg_button_pane_cp18

0x3ce1,	// (0x00067382) main_touch_calib_button_pane_t1_ParamLimits

0x3ce1,	// (0x00067382) main_touch_calib_button_pane_t1

0x3cf7,	// (0x00067398) main_touch_calib_button_pane_t2_ParamLimits

0x3cf7,	// (0x00067398) main_touch_calib_button_pane_t2

0x0001,

0xfe5b,	// (0x000734fc) main_touch_calib_button_pane_t_ParamLimits

0xfe5b,	// (0x000734fc) main_touch_calib_button_pane_t

0x77fc,	// (0x0006ae9d) cell_ncimui_button_pane

0x77fc,	// (0x0006ae9d) bg_button_pane_cp032

0x3d15,	// (0x000673b6) cell_ncimui_button_pane_t1

0xc368,	// (0x0006fa09) image3_infobar_pane_ParamLimits

0xc368,	// (0x0006fa09) image3_infobar_pane

0xe0c7,	// (0x00071768) fs_bigclock_status_pane_ParamLimits

0xe0c7,	// (0x00071768) fs_bigclock_status_pane

0xe0d4,	// (0x00071775) main_fs_bigclock_clock_pane_ParamLimits

0xe0d4,	// (0x00071775) main_fs_bigclock_clock_pane

0xe0e4,	// (0x00071785) main_fs_bigclock_indi_pane_ParamLimits

0xe0e4,	// (0x00071785) main_fs_bigclock_indi_pane

0xe111,	// (0x000717b2) main_fs_bigclock_swipe_pane_ParamLimits

0xe111,	// (0x000717b2) main_fs_bigclock_swipe_pane

0x77fc,	// (0x0006ae9d) main_fs_clock_dumped_data

0x3220,	// (0x000668c1) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0x3220,	// (0x000668c1) list_single_fs_bigclock_indicator_pane_g1

0x323c,	// (0x000668dd) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0x323c,	// (0x000668dd) list_single_fs_bigclock_indicator_pane_g2

0x3256,	// (0x000668f7) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0x3256,	// (0x000668f7) list_single_fs_bigclock_indicator_pane_g3

0x3270,	// (0x00066911) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0x3270,	// (0x00066911) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfc8e,	// (0x0007332f) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfc8e,	// (0x0007332f) list_single_fs_bigclock_indicator_pane_g

0x3296,	// (0x00066937) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0x3296,	// (0x00066937) list_single_fs_bigclock_indicator_pane_t1

0x32be,	// (0x0006695f) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0x32be,	// (0x0006695f) list_single_fs_bigclock_indicator_pane_t2

0x32e6,	// (0x00066987) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0x32e6,	// (0x00066987) list_single_fs_bigclock_indicator_pane_t3

0x330e,	// (0x000669af) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0x330e,	// (0x000669af) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfc99,	// (0x0007333a) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfc99,	// (0x0007333a) list_single_fs_bigclock_indicator_pane_t

0x3d23,	// (0x000673c4) image3_infobar_fav_pane_ParamLimits

0x3d23,	// (0x000673c4) image3_infobar_fav_pane

0x3d33,	// (0x000673d4) image3_infobar_loc_pane_ParamLimits

0x3d33,	// (0x000673d4) image3_infobar_loc_pane

0x3d47,	// (0x000673e8) image3_infobar_time_pane_ParamLimits

0x3d47,	// (0x000673e8) image3_infobar_time_pane

0x49d7,	// (0x00068078) image3_infobar_time_pane_g1

0x3d57,	// (0x000673f8) image3_infobar_time_pane_t1

0x49d7,	// (0x00068078) image3_infobar_loc_pane_g1

0x3d65,	// (0x00067406) image3_infobar_loc_pane_g2

0x0001,

0xfe60,	// (0x00073501) image3_infobar_loc_pane_g

0x3d6d,	// (0x0006740e) image3_infobar_loc_pane_t1

0x49d7,	// (0x00068078) image3_infobar_fav_pane_g1

0x3d7b,	// (0x0006741c) image3_infobar_fav_pane_g2

0x0001,

0xfe65,	// (0x00073506) image3_infobar_fav_pane_g

0x3d83,	// (0x00067424) fs_bigclock_status_battery_pane

0x3d8c,	// (0x0006742d) fs_bigclock_status_signal_pane

0x3d95,	// (0x00067436) fs_bigclock_status_title_pane

0x3d9e,	// (0x0006743f) fs_bigclock_status_signal_pane_g1

0x3da7,	// (0x00067448) fs_bigclock_status_signal_pane_g2

0x0001,

0xfe6a,	// (0x0007350b) fs_bigclock_status_signal_pane_g

0x3daf,	// (0x00067450) fs_bigclock_status_battery_pane_g1

0x3db8,	// (0x00067459) fs_bigclock_status_battery_pane_g2

0x0001,

0xfe6f,	// (0x00073510) fs_bigclock_status_battery_pane_g

0x3dc0,	// (0x00067461) fs_bigclock_status_title_pane_t1

0x49d7,	// (0x00068078) main_fs_bigclock_clock_pane_g1

0x3dce,	// (0x0006746f) main_fs_bigclock_clock_pane_g2

0x3dce,	// (0x0006746f) main_fs_bigclock_clock_pane_g3

0x3dce,	// (0x0006746f) main_fs_bigclock_clock_pane_g4

0x0003,

0xfe74,	// (0x00073515) main_fs_bigclock_clock_pane_g

0x3dd6,	// (0x00067477) main_fs_bigclock_clock_pane_t1

0x3de4,	// (0x00067485) main_fs_bigclock_clock_pane_t2

0x0001,

0xfe7d,	// (0x0007351e) main_fs_bigclock_clock_pane_t

0x3df3,	// (0x00067494) list_single_fs_bigclock_indicator_pane_ParamLimits

0x3df3,	// (0x00067494) list_single_fs_bigclock_indicator_pane

0xe842,	// (0x00071ee3) list_single_fs_bigclock_pane_ParamLimits

0xe842,	// (0x00071ee3) list_single_fs_bigclock_pane

0x3e0d,	// (0x000674ae) main_fs_bigclock_indicator_pane_t1

0x3e1c,	// (0x000674bd) list_single_fs_bigclock_pane_g1

0x3e24,	// (0x000674c5) list_single_fs_bigclock_pane_t1

0x49d7,	// (0x00068078) main_fs_bigclock_swipe_pane_g1

0x3e62,	// (0x00067503) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfe8e,	// (0x0007352f) main_fs_bigclock_swipe_pane_g

0x3e6a,	// (0x0006750b) main_fs_bigclock_swipe_pane_t1_ParamLimits

0x3e6a,	// (0x0006750b) main_fs_bigclock_swipe_pane_t1

0x96ff,	// (0x0006cda0) call_type_pane_ParamLimits

0x77fc,	// (0x0006ae9d) main_btmg_pane

0x758a,	// (0x0006ac2b) list_single_cale_mrui_row_pane_g2_ParamLimits

0x758a,	// (0x0006ac2b) list_single_cale_mrui_row_pane_g2

0x0001,

0xfe01,	// (0x000734a2) list_single_cale_mrui_row_pane_g_ParamLimits

0xfe01,	// (0x000734a2) list_single_cale_mrui_row_pane_g

0x3c32,	// (0x000672d3) list_recal_vselct_arw_lo_pane

0x3c3a,	// (0x000672db) list_recal_vselct_arw_up_pane

0xf0e3,	// (0x00072784) list_recal_vselct_pane

0x3e87,	// (0x00067528) btmg_button_pane

0xe8a5,	// (0x00071f46) main_btmg_pane_g1

0x77fc,	// (0x0006ae9d) bg_button_pane_cp044

0x3e91,	// (0x00067532) btmg_button_pane_t1

0x28ae,	// (0x00065f4f) aid_listscroll_gen

0x00a1,	// (0x00063742) main_cntbar_detail_pane

0x380b,	// (0x00066eac) list_cmail_folder_pane

0x381b,	// (0x00066ebc) sp_fs_scroll_pane_cp03_ParamLimits

0x76a8,	// (0x0006ad49) list_single_fs_dyc_pane_cp01_ParamLimits

0x76a8,	// (0x0006ad49) list_single_fs_dyc_pane_cp01

0x3e9f,	// (0x00067540) aid_size_cmail_indent

0xe8ad,	// (0x00071f4e) list_single_dyc_row_pane_cp01

0xe8d6,	// (0x00071f77) cntbar_detail_list_pane_ParamLimits

0xe8d6,	// (0x00071f77) cntbar_detail_list_pane

0xe910,	// (0x00071fb1) main_cntbar_detail_cont_pane_ParamLimits

0xe910,	// (0x00071fb1) main_cntbar_detail_cont_pane

0x96f3,	// (0x0006cd94) scroll_pane_cp032_ParamLimits

0x96f3,	// (0x0006cd94) scroll_pane_cp032

0xe91c,	// (0x00071fbd) cntbar_detail_list_event_pane_ParamLimits

0xe91c,	// (0x00071fbd) cntbar_detail_list_event_pane

0xe8e2,	// (0x00071f83) cntbar_detail_list_shct_pane

0x0d38,	// (0x000643d9) aid_list_gen

0x3eb1,	// (0x00067552) aid_scroll

0x3eba,	// (0x0006755b) aid_size_touch_scroll_bar

0x76ca,	// (0x0006ad6b) aid_list_double

0x3ec3,	// (0x00067564) aid_list_single

0xe930,	// (0x00071fd1) aid_list_single_lg

0x76d3,	// (0x0006ad74) aid_list_z_g_a_sm

0xe939,	// (0x00071fda) aid_list_z_g_d

0x76db,	// (0x0006ad7c) aid_txt_z_prm

0x76e9,	// (0x0006ad8a) aid_txt_z_prm_cp01

0x76f7,	// (0x0006ad98) aid_txt_z_sec

0xe941,	// (0x00071fe2) main_cntbar_detail_cont_pane_g1_ParamLimits

0xe941,	// (0x00071fe2) main_cntbar_detail_cont_pane_g1

0xe94e,	// (0x00071fef) main_cntbar_detail_cont_pane_g2_ParamLimits

0xe94e,	// (0x00071fef) main_cntbar_detail_cont_pane_g2

0x0001,

0xfe93,	// (0x00073534) main_cntbar_detail_cont_pane_g_ParamLimits

0xfe93,	// (0x00073534) main_cntbar_detail_cont_pane_g

0x3eea,	// (0x0006758b) main_cntbar_detail_cont_pane_t1

0x3ef8,	// (0x00067599) main_cntbar_detail_cont_pane_t2

0x3f06,	// (0x000675a7) main_cntbar_detail_cont_pane_t3

0x0002,

0xfe98,	// (0x00073539) main_cntbar_detail_cont_pane_t

0xe95a,	// (0x00071ffb) cell_cntbar_detail_list_shct_pane_ParamLimits

0xe95a,	// (0x00071ffb) cell_cntbar_detail_list_shct_pane

0x3f14,	// (0x000675b5) cntbar_detail_list_shct_pane_g1

0x3f1d,	// (0x000675be) cntbar_detail_list_shct_pane_g2

0x0001,

0xfe9f,	// (0x00073540) cntbar_detail_list_shct_pane_g

0xe96e,	// (0x0007200f) cntbar_detail_list_event_pane_g1_ParamLimits

0xe96e,	// (0x0007200f) cntbar_detail_list_event_pane_g1

0xe97a,	// (0x0007201b) cntbar_detail_list_event_pane_g2_ParamLimits

0xe97a,	// (0x0007201b) cntbar_detail_list_event_pane_g2

0x0005,

0xfea4,	// (0x00073545) cntbar_detail_list_event_pane_g_ParamLimits

0xfea4,	// (0x00073545) cntbar_detail_list_event_pane_g

0xe9e6,	// (0x00072087) cntbar_detail_list_event_pane_t1_ParamLimits

0xe9e6,	// (0x00072087) cntbar_detail_list_event_pane_t1

0xe9fb,	// (0x0007209c) cntbar_detail_list_event_pane_t2_ParamLimits

0xe9fb,	// (0x0007209c) cntbar_detail_list_event_pane_t2

0x0002,

0xfeb1,	// (0x00073552) cntbar_detail_list_event_pane_t_ParamLimits

0xfeb1,	// (0x00073552) cntbar_detail_list_event_pane_t

0x49d7,	// (0x00068078) cell_cntbar_detail_list_shct_pane_g1

0x9a99,	// (0x0006d13a) navi_pane_mv_g3

0x00a1,	// (0x00063742) main_cntbar_detail_pane_ParamLimits

0x77fc,	// (0x0006ae9d) main_notif_wgt_pane

0xc01c,	// (0x0006f6bd) aid_tch_main_mp4_pane_g4

0xc251,	// (0x0006f8f2) popup_slider_window_cp02

0x3c29,	// (0x000672ca) list_recal_day_event_pane

0xe8b6,	// (0x00071f57) cntbar_detail_btn_pane_ParamLimits

0xe8b6,	// (0x00071f57) cntbar_detail_btn_pane

0xe8c6,	// (0x00071f67) cntbar_detail_btn_pane_cp01_ParamLimits

0xe8c6,	// (0x00071f67) cntbar_detail_btn_pane_cp01

0xe8e2,	// (0x00071f83) cntbar_detail_list_shct_pane_ParamLimits

0xe8ee,	// (0x00071f8f) cntbar_detail_pane_g1_ParamLimits

0xe8ee,	// (0x00071f8f) cntbar_detail_pane_g1

0xe8fa,	// (0x00071f9b) cntbar_detail_pane_t1_ParamLimits

0xe8fa,	// (0x00071f9b) cntbar_detail_pane_t1

0xe986,	// (0x00072027) cntbar_detail_list_event_pane_g3_ParamLimits

0xe986,	// (0x00072027) cntbar_detail_list_event_pane_g3

0xe99e,	// (0x0007203f) cntbar_detail_list_event_pane_g4_ParamLimits

0xe99e,	// (0x0007203f) cntbar_detail_list_event_pane_g4

0xe9b6,	// (0x00072057) cntbar_detail_list_event_pane_g5_ParamLimits

0xe9b6,	// (0x00072057) cntbar_detail_list_event_pane_g5

0xe9ce,	// (0x0007206f) cntbar_detail_list_event_pane_g6_ParamLimits

0xe9ce,	// (0x0007206f) cntbar_detail_list_event_pane_g6

0xea10,	// (0x000720b1) cntbar_detail_list_event_pane_t3_ParamLimits

0xea10,	// (0x000720b1) cntbar_detail_list_event_pane_t3

0xea22,	// (0x000720c3) popup_notif_wgt_window_ParamLimits

0xea22,	// (0x000720c3) popup_notif_wgt_window

0xea32,	// (0x000720d3) popup_submenu_window_cp01_ParamLimits

0xea32,	// (0x000720d3) popup_submenu_window_cp01

0x1474,	// (0x00064b15) bg_popup_window_pane_cp10

0x3f26,	// (0x000675c7) listscroll_notif_wgt_pane

0x3f30,	// (0x000675d1) list_notif_wgt_window

0x3f39,	// (0x000675da) scroll_pane_cp033

0x3f42,	// (0x000675e3) list_notif_wgt_row_pane_ParamLimits

0x3f42,	// (0x000675e3) list_notif_wgt_row_pane

0x3f54,	// (0x000675f5) aid_size_list_notif_wgt_del

0x3f5d,	// (0x000675fe) list_notif_wgt_row_pane_g1

0x3f65,	// (0x00067606) list_notif_wgt_row_pane_g2

0x3f6d,	// (0x0006760e) list_notif_wgt_row_pane_g3

0x0002,

0xfeb8,	// (0x00073559) list_notif_wgt_row_pane_g

0x3f76,	// (0x00067617) list_notif_wgt_row_pane_t1

0x3f84,	// (0x00067625) list_notif_wgt_row_pane_t2

0x3f92,	// (0x00067633) list_notif_wgt_row_pane_t3

0x0002,

0xfebf,	// (0x00073560) list_notif_wgt_row_pane_t

0x566e,	// (0x00068d0f) list_recal_day_event_pane_g1

0x3fa0,	// (0x00067641) list_recal_day_event_pane_t1

0x77fc,	// (0x0006ae9d) bg_button_pane_cp045

0x3faf,	// (0x00067650) cntbar_detail_btn_pane_t1

0x28b6,	// (0x00065f57) main_callh_pane_ParamLimits

0x28b6,	// (0x00065f57) main_callh_pane

0x77fc,	// (0x0006ae9d) main_coverflow0_pane

0x77fc,	// (0x0006ae9d) main_wgtman_pane

0xe129,	// (0x000717ca) main_fs_bigclock_unlock_btn_pane_ParamLimits

0xe129,	// (0x000717ca) main_fs_bigclock_unlock_btn_pane

0x37e5,	// (0x00066e86) bg_button_pane_cp16

0x37f5,	// (0x00066e96) cell_tport_appsw_pane_g3

0xea40,	// (0x000720e1) cf0_flow_pane_ParamLimits

0xea40,	// (0x000720e1) cf0_flow_pane

0x3fbd,	// (0x0006765e) listscroll_cf0_pane

0x3fc6,	// (0x00067667) main_cf0_pane_g1

0xea4f,	// (0x000720f0) main_cf0_pane_t1_ParamLimits

0xea4f,	// (0x000720f0) main_cf0_pane_t1

0xea63,	// (0x00072104) main_cf0_pane_t2_ParamLimits

0xea63,	// (0x00072104) main_cf0_pane_t2

0x0001,

0xfec6,	// (0x00073567) main_cf0_pane_t_ParamLimits

0xfec6,	// (0x00073567) main_cf0_pane_t

0x3fd0,	// (0x00067671) scroll_pane_cp11

0xea77,	// (0x00072118) cf0_flow_pane_g1

0xea7f,	// (0x00072120) cf0_flow_pane_g2

0x0001,

0xfecb,	// (0x0007356c) cf0_flow_pane_g

0xea87,	// (0x00072128) cf0_flow_pane_t1

0x77fc,	// (0x0006ae9d) main_call6_pane

0x77fc,	// (0x0006ae9d) main_calllock_pane

0xea95,	// (0x00072136) call6_btn_grp_pane_ParamLimits

0xea95,	// (0x00072136) call6_btn_grp_pane

0xeaa4,	// (0x00072145) call6_pane_g1_ParamLimits

0xeaa4,	// (0x00072145) call6_pane_g1

0xeab3,	// (0x00072154) popup_call6_1st_window_ParamLimits

0xeab3,	// (0x00072154) popup_call6_1st_window

0xeac1,	// (0x00072162) popup_call6_2nd_window_ParamLimits

0xeac1,	// (0x00072162) popup_call6_2nd_window

0xeacf,	// (0x00072170) cell_call6_btn_pane_ParamLimits

0xeacf,	// (0x00072170) cell_call6_btn_pane

0x1474,	// (0x00064b15) bg_popup_call2_in_pane_cp03

0x3fdb,	// (0x0006767c) popup_call6_1st_window_g1

0x3fe3,	// (0x00067684) popup_call6_1st_window_g2

0x3feb,	// (0x0006768c) popup_call6_1st_window_g3

0x0002,

0xfed0,	// (0x00073571) popup_call6_1st_window_g

0x3ff3,	// (0x00067694) popup_call6_1st_window_t1

0x4002,	// (0x000676a3) popup_call6_1st_window_t2

0x4012,	// (0x000676b3) popup_call6_1st_window_t3

0x0002,

0xfed7,	// (0x00073578) popup_call6_1st_window_t

0x1474,	// (0x00064b15) bg_popup_call2_in_pane_cp04

0x3fdb,	// (0x0006767c) popup_call6_2nd_window_g1

0x3fe3,	// (0x00067684) popup_call6_2nd_window_g2

0x3feb,	// (0x0006768c) popup_call6_2nd_window_g3

0x0002,

0xfed0,	// (0x00073571) popup_call6_2nd_window_g

0x3ff3,	// (0x00067694) popup_call6_2nd_window_t1

0x77fc,	// (0x0006ae9d) bg_button_pane_cp15

0x4022,	// (0x000676c3) cell_call6_btn_pane_g1

0x402b,	// (0x000676cc) cell_call6_btn_pane_t1

0xeade,	// (0x0007217f) listscroll_wgtman_pane_ParamLimits

0xeade,	// (0x0007217f) listscroll_wgtman_pane

0xeafc,	// (0x0007219d) wgtman_btn_pane_ParamLimits

0xeafc,	// (0x0007219d) wgtman_btn_pane

0x132b,	// (0x000649cc) aid_scroll_copy1

0x403a,	// (0x000676db) list_wgtman_pane

0xeb31,	// (0x000721d2) wgtman_btn_pane_g1_ParamLimits

0xeb31,	// (0x000721d2) wgtman_btn_pane_g1

0xeb59,	// (0x000721fa) wgtman_btn_pane_t1_ParamLimits

0xeb59,	// (0x000721fa) wgtman_btn_pane_t1

0x4044,	// (0x000676e5) wgtman_btn_pane_t2_ParamLimits

0x4044,	// (0x000676e5) wgtman_btn_pane_t2

0x0001,

0xfede,	// (0x0007357f) wgtman_btn_pane_t_ParamLimits

0xfede,	// (0x0007357f) wgtman_btn_pane_t

0xeb90,	// (0x00072231) listrow_wgtman_pane_ParamLimits

0xeb90,	// (0x00072231) listrow_wgtman_pane

0xebab,	// (0x0007224c) listrow_wgtman_pane_g1

0xebb4,	// (0x00072255) listrow_wgtman_pane_g2

0x0001,

0xfee3,	// (0x00073584) listrow_wgtman_pane_g

0x7705,	// (0x0006ada6) listrow_wgtman_pane_t1

0x7713,	// (0x0006adb4) listrow_wgtman_pane_t2

0x0001,

0xfee8,	// (0x00073589) listrow_wgtman_pane_t

0xebbe,	// (0x0007225f) wait_bar_pane_cp09

0x405b,	// (0x000676fc) main_calllock_btn_pane

0x4065,	// (0x00067706) main_calllock_pane_g1

0x77fc,	// (0x0006ae9d) bg_button_pane_cp17

0x4071,	// (0x00067712) main_calllock_btn_pane_g1

0x407a,	// (0x0006771b) main_calllock_btn_pane_t1

0x77fc,	// (0x0006ae9d) main_dialer3_pane

0x77fc,	// (0x0006ae9d) main_fmrd2_pane

0x49d7,	// (0x00068078) main_fs_bigclock_unlock_btn_pane_g1

0x4091,	// (0x00067732) main_fs_bigclock_unlock_btn_pane_t1

0xebc6,	// (0x00072267) area_fmrd2_info_pane_ParamLimits

0xebc6,	// (0x00072267) area_fmrd2_info_pane

0xebd4,	// (0x00072275) area_fmrd2_visual_pane_ParamLimits

0xebd4,	// (0x00072275) area_fmrd2_visual_pane

0xebe2,	// (0x00072283) fmrd2_indi_pane_ParamLimits

0xebe2,	// (0x00072283) fmrd2_indi_pane

0xebef,	// (0x00072290) area_fmrd2_visual_pane_g1

0xebf7,	// (0x00072298) area_fmrd2_visual_pane_t1

0xec07,	// (0x000722a8) area_fmrd2_visual_pane_t2

0xec17,	// (0x000722b8) area_fmrd2_visual_pane_t3

0x0002,

0xfef2,	// (0x00073593) area_fmrd2_visual_pane_t

0xec27,	// (0x000722c8) area_fmrd2_info_pane_g1

0xec2f,	// (0x000722d0) area_fmrd2_info_pane_t1

0xec3f,	// (0x000722e0) area_fmrd2_info_pane_t2

0xec4f,	// (0x000722f0) area_fmrd2_info_pane_t3

0xec5f,	// (0x00072300) area_fmrd2_info_pane_t4

0x0003,

0xfef9,	// (0x0007359a) area_fmrd2_info_pane_t

0xec6d,	// (0x0007230e) fmrd2_indi_pane_t1

0xec7d,	// (0x0007231e) fmrd2_indi_pane_t2

0xec8d,	// (0x0007232e) fmrd2_indi_pane_t3

0x0002,

0xff02,	// (0x000735a3) fmrd2_indi_pane_t

0x327f,	// (0x00066920) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0x327f,	// (0x00066920) list_single_fs_bigclock_indicator_pane_g5

0x3323,	// (0x000669c4) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0x3323,	// (0x000669c4) list_single_fs_bigclock_indicator_pane_t5

0xe5cb,	// (0x00071c6c) aid_cell_bcale_month_pane_ParamLimits

0xe5cb,	// (0x00071c6c) aid_cell_bcale_month_pane

0xe5d7,	// (0x00071c78) bcale_month_pane_ParamLimits

0xe5d7,	// (0x00071c78) bcale_month_pane

0xe5e5,	// (0x00071c86) bcale_preview_pane_ParamLimits

0xe5e5,	// (0x00071c86) bcale_preview_pane

0x3e24,	// (0x000674c5) list_single_fs_bigclock_pane_t1_ParamLimits

0x3e3e,	// (0x000674df) list_single_fs_bigclock_pane_t2_ParamLimits

0x3e3e,	// (0x000674df) list_single_fs_bigclock_pane_t2

0x0001,

0xfe89,	// (0x0007352a) list_single_fs_bigclock_pane_t_ParamLimits

0xfe89,	// (0x0007352a) list_single_fs_bigclock_pane_t

0x4089,	// (0x0006772a) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfeed,	// (0x0007358e) main_fs_bigclock_unlock_btn_pane_g

0xec9b,	// (0x0007233c) aid_dia3_key_size_ParamLimits

0xec9b,	// (0x0007233c) aid_dia3_key_size

0xeca7,	// (0x00072348) aid_dia3_listrow_size_ParamLimits

0xeca7,	// (0x00072348) aid_dia3_listrow_size

0xecb7,	// (0x00072358) dia3_keypad_fun_pane_ParamLimits

0xecb7,	// (0x00072358) dia3_keypad_fun_pane

0xecc9,	// (0x0007236a) dia3_keypad_num_pane_ParamLimits

0xecc9,	// (0x0007236a) dia3_keypad_num_pane

0xecdb,	// (0x0007237c) dia3_listscroll_pane_ParamLimits

0xecdb,	// (0x0007237c) dia3_listscroll_pane

0xece9,	// (0x0007238a) dia3_numentry_pane_ParamLimits

0xece9,	// (0x0007238a) dia3_numentry_pane

0x409f,	// (0x00067740) dia3_list_pane

0x40aa,	// (0x0006774b) scroll_pane_cp12

0x77fc,	// (0x0006ae9d) bg_dia3_numentry_pane

0xecf7,	// (0x00072398) dia3_numentry_pane_t1

0xed06,	// (0x000723a7) cell_dia3_key_num_pane

0xed0e,	// (0x000723af) cell_dia3_key0_fun_pane_ParamLimits

0xed0e,	// (0x000723af) cell_dia3_key0_fun_pane

0xed1b,	// (0x000723bc) cell_dia3_key1_fun_pane_ParamLimits

0xed1b,	// (0x000723bc) cell_dia3_key1_fun_pane

0xed28,	// (0x000723c9) dia3_listrow_pane

0x2f7f,	// (0x00066620) bg_dia3_numentry_pane_g1

0x77fc,	// (0x0006ae9d) bg_button_pane_cp21

0x40b5,	// (0x00067756) cell_dia3_key_num_pane_t1

0x40c3,	// (0x00067764) cell_dia3_key_num_pane_t2

0x40d2,	// (0x00067773) cell_dia3_key_num_pane_t3

0x40e1,	// (0x00067782) cell_dia3_key_num_pane_t4

0x0003,

0xff09,	// (0x000735aa) cell_dia3_key_num_pane_t

0x77fc,	// (0x0006ae9d) bg_button_pane_cp19

0xed35,	// (0x000723d6) cell_dia3_key0_fun_pane_g1

0x77fc,	// (0x0006ae9d) bg_button_pane_cp20

0xed3d,	// (0x000723de) cell_dia3_key1_fun_pane_g1

0xed45,	// (0x000723e6) area_left_week_number_pane

0xe8ad,	// (0x00071f4e) area_top_day_name_pane

0xed4e,	// (0x000723ef) frame_month_view_pane

0xed58,	// (0x000723f9) grid_month_view_pane

0xed62,	// (0x00072403) cell_top_day_name_pane_ParamLimits

0xed62,	// (0x00072403) cell_top_day_name_pane

0xed7c,	// (0x0007241d) cell_area_left_week_number_pane_ParamLimits

0xed7c,	// (0x0007241d) cell_area_left_week_number_pane

0xed90,	// (0x00072431) cell_month_view_pane_ParamLimits

0xed90,	// (0x00072431) cell_month_view_pane

0x40f0,	// (0x00067791) frm_month_g1

0xedad,	// (0x0007244e) frm_month_g2

0xedb7,	// (0x00072458) frm_month_g3

0xedc1,	// (0x00072462) frm_month_g4

0xedcb,	// (0x0007246c) frm_month_g5

0xedd5,	// (0x00072476) frm_month_g6

0xeddf,	// (0x00072480) frm_month_g7

0x40f9,	// (0x0006779a) frm_month_g8

0xede9,	// (0x0007248a) frm_month_g9

0xedf2,	// (0x00072493) frm_month_g10

0xedfb,	// (0x0007249c) frm_month_g11

0xee04,	// (0x000724a5) frm_month_g12

0xee0d,	// (0x000724ae) frm_month_g13

0xee16,	// (0x000724b7) frm_month_g14

0xee1f,	// (0x000724c0) frm_month_g15

0xee2a,	// (0x000724cb) frm_month_g16

0x000f,

0xff12,	// (0x000735b3) frm_month_g

0xee35,	// (0x000724d6) cell_top_day_name_pane_t1

0xee44,	// (0x000724e5) cell_area_left_week_number_pane_g1

0xee35,	// (0x000724d6) cell_area_left_week_number_pane_t1

0x49d7,	// (0x00068078) cell_month_view_pane_g1

0xee4c,	// (0x000724ed) cell_month_view_pane_t1

0x77fc,	// (0x0006ae9d) main_fps_pane

0x355d,	// (0x00066bfe) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0x355d,	// (0x00066bfe) cmail_ddmenu_btn02_pane_cp1

0x3579,	// (0x00066c1a) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0x3579,	// (0x00066c1a) cmail_ddmenu_btn02_pane_cp2

0xe7ac,	// (0x00071e4d) cmail_ddmenu_btn02_pane_g2_ParamLimits

0xe7ac,	// (0x00071e4d) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfe3a,	// (0x000734db) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfe3a,	// (0x000734db) cmail_ddmenu_btn02_pane_g

0xe7ca,	// (0x00071e6b) cmail_ddmenu_btn02_pane_t2_ParamLimits

0xe7ca,	// (0x00071e6b) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfe3f,	// (0x000734e0) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfe3f,	// (0x000734e0) cmail_ddmenu_btn02_pane_t

0xee5b,	// (0x000724fc) fps_text_pane_ParamLimits

0xee5b,	// (0x000724fc) fps_text_pane

0xee68,	// (0x00072509) main_fps_pane_g1_ParamLimits

0xee68,	// (0x00072509) main_fps_pane_g1

0xee76,	// (0x00072517) wait_bar_pane_cp010_ParamLimits

0xee76,	// (0x00072517) wait_bar_pane_cp010

0xee82,	// (0x00072523) fps_text_pane_t1_ParamLimits

0xee82,	// (0x00072523) fps_text_pane_t1

0xc633,	// (0x0006fcd4) cam4_image_uncrop_pane_g1

0xc63c,	// (0x0006fcdd) cam4_image_uncrop_pane_g2

0xc645,	// (0x0006fce6) cam4_image_uncrop_pane_g3

0xc64e,	// (0x0006fcef) cam4_image_uncrop_pane_g4

0x0003,

0xf90d,	// (0x00072fae) cam4_image_uncrop_pane_g

0xed28,	// (0x000723c9) dia3_listrow_pane_ParamLimits

0x77fc,	// (0x0006ae9d) main_phob2_pane

0xe434,	// (0x00071ad5) cell_tport_appsw_pane_cp02_ParamLimits

0xe434,	// (0x00071ad5) cell_tport_appsw_pane_cp02

0xe443,	// (0x00071ae4) cell_tport_appsw_pane_cp03_ParamLimits

0xe443,	// (0x00071ae4) cell_tport_appsw_pane_cp03

0x77fc,	// (0x0006ae9d) phob2_contact_card_pane

0x77fc,	// (0x0006ae9d) phob2_listscroll_pane

0x4102,	// (0x000677a3) phob2_list_pane

0x410a,	// (0x000677ab) scroll_pane_cp034

0xee9b,	// (0x0007253c) phob2_cc_data_pane_ParamLimits

0xee9b,	// (0x0007253c) phob2_cc_data_pane

0xeeb5,	// (0x00072556) phob2_cc_listscroll_pane_ParamLimits

0xeeb5,	// (0x00072556) phob2_cc_listscroll_pane

0xeecf,	// (0x00072570) list_double_large_graphic_phob2_pane_ParamLimits

0xeecf,	// (0x00072570) list_double_large_graphic_phob2_pane

0x4112,	// (0x000677b3) list_double_large_graphic_phob2_pane_g1_ParamLimits

0x4112,	// (0x000677b3) list_double_large_graphic_phob2_pane_g1

0x7721,	// (0x0006adc2) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x7721,	// (0x0006adc2) list_double_large_graphic_phob2_pane_g2

0x0001,

0xff33,	// (0x000735d4) list_double_large_graphic_phob2_pane_g_ParamLimits

0xff33,	// (0x000735d4) list_double_large_graphic_phob2_pane_g

0x772d,	// (0x0006adce) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x772d,	// (0x0006adce) list_double_large_graphic_phob2_pane_t1

0x7742,	// (0x0006ade3) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x7742,	// (0x0006ade3) list_double_large_graphic_phob2_pane_t2

0x0001,

0xff38,	// (0x000735d9) list_double_large_graphic_phob2_pane_t_ParamLimits

0xff38,	// (0x000735d9) list_double_large_graphic_phob2_pane_t

0x77fc,	// (0x0006ae9d) list_highlight_pane_cp024

0x4152,	// (0x000677f3) phob2_cc_button_pane

0xeeed,	// (0x0007258e) phob2_cc_data_pane_g1_ParamLimits

0xeeed,	// (0x0007258e) phob2_cc_data_pane_g1

0xeef9,	// (0x0007259a) phob2_cc_data_pane_g2_ParamLimits

0xeef9,	// (0x0007259a) phob2_cc_data_pane_g2

0x0001,

0xff3d,	// (0x000735de) phob2_cc_data_pane_g_ParamLimits

0xff3d,	// (0x000735de) phob2_cc_data_pane_g

0xef05,	// (0x000725a6) phob2_cc_data_pane_t1_ParamLimits

0xef05,	// (0x000725a6) phob2_cc_data_pane_t1

0xef17,	// (0x000725b8) phob2_cc_data_pane_t2_ParamLimits

0xef17,	// (0x000725b8) phob2_cc_data_pane_t2

0xef29,	// (0x000725ca) phob2_cc_data_pane_t3_ParamLimits

0xef29,	// (0x000725ca) phob2_cc_data_pane_t3

0x0002,

0xff42,	// (0x000735e3) phob2_cc_data_pane_t_ParamLimits

0xff42,	// (0x000735e3) phob2_cc_data_pane_t

0x415a,	// (0x000677fb) phob2_cc_list_pane_ParamLimits

0x415a,	// (0x000677fb) phob2_cc_list_pane

0x58bf,	// (0x00068f60) scroll_pane_cp035_ParamLimits

0x58bf,	// (0x00068f60) scroll_pane_cp035

0x00a1,	// (0x00063742) bg_button_pane_cp033

0x4166,	// (0x00067807) phob2_cc_button_pane_g1

0x4172,	// (0x00067813) phob2_cc_button_pane_t1

0x4187,	// (0x00067828) phob2_cc_button_pane_t2

0x0001,

0xff49,	// (0x000735ea) phob2_cc_button_pane_t

0xef3b,	// (0x000725dc) list_double_large_graphic_phob2_cc_pane_ParamLimits

0xef3b,	// (0x000725dc) list_double_large_graphic_phob2_cc_pane

0xef62,	// (0x00072603) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0xef62,	// (0x00072603) list_double_large_graphic_phob2_cc_pane_g1

0x7754,	// (0x0006adf5) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x7754,	// (0x0006adf5) list_double_large_graphic_phob2_cc_pane_g2

0x7763,	// (0x0006ae04) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x7763,	// (0x0006ae04) list_double_large_graphic_phob2_cc_pane_g3

0x7772,	// (0x0006ae13) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x7772,	// (0x0006ae13) list_double_large_graphic_phob2_cc_pane_g4

0x7783,	// (0x0006ae24) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x7783,	// (0x0006ae24) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xff4e,	// (0x000735ef) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xff4e,	// (0x000735ef) list_double_large_graphic_phob2_cc_pane_g

0x7792,	// (0x0006ae33) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x7792,	// (0x0006ae33) list_double_large_graphic_phob2_cc_pane_t1

0x77bb,	// (0x0006ae5c) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x77bb,	// (0x0006ae5c) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xff59,	// (0x000735fa) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xff59,	// (0x000735fa) list_double_large_graphic_phob2_cc_pane_t

0x4199,	// (0x0006783a) list_highlight_pane_cp025_ParamLimits

0x4199,	// (0x0006783a) list_highlight_pane_cp025

0x00a1,	// (0x00063742) bg_button_pane_cp033_ParamLimits

0x4166,	// (0x00067807) phob2_cc_button_pane_g1_ParamLimits

0x4172,	// (0x00067813) phob2_cc_button_pane_t1_ParamLimits

0x4187,	// (0x00067828) phob2_cc_button_pane_t2_ParamLimits

0xff49,	// (0x000735ea) phob2_cc_button_pane_t_ParamLimits

0x7a9b,	// (0x0006b13c) popup_wgtman_window

0x554a,	// (0x00068beb) scroll_pane_cp038

0xeb19,	// (0x000721ba) wgtman_btn_pane_cp_01_ParamLimits

0xeb19,	// (0x000721ba) wgtman_btn_pane_cp_01

0x41a7,	// (0x00067848) wgtman_content_pane

0x41b0,	// (0x00067851) wgtman_heading_pane

0x77fc,	// (0x0006ae9d) bg_heading_pane_cp02

0x41b9,	// (0x0006785a) wgtman_heading_pane_g1

0x41c1,	// (0x00067862) wgtman_heading_pane_t1

0x41cf,	// (0x00067870) scroll_pane_cp036

0x41d7,	// (0x00067878) wgtman_list_pane

0x41df,	// (0x00067880) wgtman_list_pane_t1_ParamLimits

0x41df,	// (0x00067880) wgtman_list_pane_t1

0xc592,	// (0x0006fc33) cam4_grid_pane

0x6b4b,	// (0x0006a1ec) bg_button_pane_cp015_ParamLimits

0xd22d,	// (0x000708ce) bg_button_pane_cp016_ParamLimits

0xd240,	// (0x000708e1) bg_button_pane_cp017_ParamLimits

0x6b8f,	// (0x0006a230) popup_vitu2_query_window_g3_ParamLimits

0x6b8f,	// (0x0006a230) popup_vitu2_query_window_g3

0x6c08,	// (0x0006a2a9) popup_vitu2_query_window_t6_ParamLimits

0x6c08,	// (0x0006a2a9) popup_vitu2_query_window_t6

0x6c33,	// (0x0006a2d4) popup_vitu2_query_window_t7_ParamLimits

0x6c33,	// (0x0006a2d4) popup_vitu2_query_window_t7

0x58ad,	// (0x00068f4e) cam4_grid_pane_g1

0x58b6,	// (0x00068f57) cam4_grid_pane_g2

0x41f9,	// (0x0006789a) cam4_grid_pane_g3

0x4202,	// (0x000678a3) cam4_grid_pane_g4

0x0003,

0xff5e,	// (0x000735ff) cam4_grid_pane_g

0x8787,	// (0x0006be28) aid_placing_vt_slider_lsc_ParamLimits

0x8ad3,	// (0x0006c174) vidtel_button_pane_ParamLimits

0x8ad3,	// (0x0006c174) vidtel_button_pane

0x77fc,	// (0x0006ae9d) bg_button_pane_cp034

0xef73,	// (0x00072614) vidtel_button_pane_g1

0x420d,	// (0x000678ae) vidtel_button_pane_t1

0x564c,	// (0x00068ced) aid_size_vtel_slider_touch

0x58bf,	// (0x00068f60) scroll_pane_cp039

0x2fbd,	// (0x0006665e) ncim_query_button_pane_cp01_ParamLimits

0x2fdc,	// (0x0006667d) ncimui_query_pane_g1_ParamLimits

0x00a1,	// (0x00063742) input_focus_pane_cp012_ParamLimits

0x3001,	// (0x000666a2) ncim_query_entry_pane_t1_ParamLimits

0x58bf,	// (0x00068f60) scroll_pane_cp039_ParamLimits
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

} // end of namespace AknLayoutScalable_Elaf_php_apps_qhd_prt_tch_Large
